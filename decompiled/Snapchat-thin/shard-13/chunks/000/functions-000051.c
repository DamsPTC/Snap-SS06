/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109ef93f4; end: 109ef94e3;  */

void FUN_109ef93f4(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  puVar3 = (undefined8 *)**(undefined8 **)(*(long *)(param_2 + 0x20) + 0x18);
  FUN_109f6600c(puVar3,0x48,8);
  *(undefined4 *)(puVar3 + 3) = 7;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  FUN_109ecb048();
  lVar5 = *(long *)(param_2 + 0x30);
  if (*(int *)(lVar5 + 0x10) == 0) {
    uVar4 = 0;
  }
  else {
    plVar1 = (long *)(lVar5 + 8);
    lVar5 = 0;
    if (*(long *)(*plVar1 + 8) != 0) {
      lVar5 = *plVar1;
    }
    uVar4 = 1;
  }
  FUN_109ecb4f0(uVar4,lVar5,puVar3);
  if ((long *)param_1[2] + -1 != param_1) {
    plVar1 = puVar3 + 6;
    plVar6 = (long *)param_1[2];
    do {
      lVar5 = *plVar6;
      plVar2 = (long *)plVar6[1];
      *(long **)(lVar5 + 8) = plVar2;
      *plVar2 = lVar5;
      plVar6[1] = (long)plVar1;
      plVar6[2] = (long)(puVar3 + 5);
      *plVar6 = 0;
      lVar5 = *plVar1;
      *plVar6 = lVar5;
      *(long **)(lVar5 + 8) = plVar6;
      *plVar1 = (long)plVar6;
      plVar6 = plVar2;
    } while (plVar2 + -1 != param_1);
  }
  return;
}



/* Entry: 109ef94e4; end: 109ef9547;  */

bool FUN_109ef94e4(long param_1)

{
  long lVar1;
  
  lVar1 = **(long **)(param_1 + 0x50);
  if ((((lVar1 != 0 && *(int *)(lVar1 + 0x18) == 1) &&
       (*(int *)(param_1 + 0x2c) == *(int *)(lVar1 + 0x2c))) &&
      (*(long *)(param_1 + 0x30) == *(long *)(lVar1 + 0x30))) &&
     (*(char *)(param_1 + 0x9c) == *(char *)(lVar1 + 0x9c))) {
    return *(char *)(param_1 + 0x9d) == *(char *)(lVar1 + 0x9d);
  }
  return false;
}



/* Entry: 109ef9548; end: 109ef963f;  */

void FUN_109ef9548(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong *puVar5;
  
  puVar5 = (ulong *)(param_1 + 0x30);
  *puVar5 = 0;
  if (param_2 != 0) {
    uVar4 = 0;
    uVar3 = param_2;
    do {
      iVar1 = *(int *)(uVar3 + 0x28);
      if ((iVar1 != 5) || (uVar2 = uVar3, FUN_109ef94e4(), (uVar2 & 1) == 0)) {
        if ((int)uVar4 < 6) {
          puVar5 = puVar5 + -1;
          *puVar5 = uVar3;
        }
        uVar4 = uVar4 + 1;
        if (iVar1 == 0) break;
      }
      uVar3 = **(ulong **)(uVar3 + 0x50);
    } while (*(int *)(uVar3 + 0x18) == 1);
    if (6 < (int)uVar4) {
      FUN_109f658b0(param_3,(ulong)(uVar4 + 1) << 3);
      *(long *)(param_1 + 0x38) = param_3;
      puVar5 = (ulong *)(param_3 + (ulong)uVar4 * 8);
      *puVar5 = 0;
      do {
        iVar1 = *(int *)(param_2 + 0x28);
        if (iVar1 == 5) {
          uVar3 = param_2;
          FUN_109ef94e4();
          if ((uVar3 & 1) == 0) {
            puVar5 = puVar5 + -1;
            *puVar5 = param_2;
          }
        }
        else {
          puVar5 = puVar5 + -1;
          *puVar5 = param_2;
          if (iVar1 == 0) {
            return;
          }
        }
        param_2 = **(ulong **)(param_2 + 0x50);
      } while (*(int *)(param_2 + 0x18) == 1);
      return;
    }
  }
  *(ulong **)(param_1 + 0x38) = puVar5;
  return;
}



/* Entry: 109ef9640; end: 109ef96ff;  */

void FUN_109ef9640(ulong param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 0x38);
  bVar1 = uVar3 == 0;
  if (param_1 <= uVar3) {
    bVar1 = uVar3 <= param_1 + 0x30;
  }
  if (!bVar1) {
    FUN_109f65aa4(uVar3 - 0x30);
    lVar2 = *(long *)(uVar3 - 0x28);
    while (lVar2 != 0) {
      *(undefined8 *)(uVar3 - 0x28) = *(undefined8 *)(lVar2 + 0x18);
      FUN_109f65ae0();
      lVar2 = *(long *)(uVar3 - 0x28);
    }
    if (*(code **)(uVar3 - 0x10) != (code *)0x0) {
      (**(code **)(uVar3 - 0x10))(uVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(uVar3 - 0x30);
    return;
  }
  return;
}



/* Entry: 109ef9700; end: 109ef9753;  */

undefined8 FUN_109ef9700(long param_1)

{
  int iVar1;
  
  do {
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 0) {
      return 0;
    }
    if ((iVar1 == 1) || (iVar1 == 3)) {
      if (*(int *)(**(long **)(param_1 + 0x70) + 0x18) != 5) {
        return 1;
      }
    }
    else if (iVar1 == 5) {
      return 1;
    }
    param_1 = **(long **)(param_1 + 0x50);
  } while( true );
}



/* Entry: 109ef9754; end: 109ef9813;  */

undefined8 FUN_109ef9754(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  
  if (param_1 != 0) {
    do {
      if (*(int *)(param_1 + 0x28) == 1) {
        lVar3 = **(long **)(param_1 + 0x70);
        if (*(int *)(lVar3 + 0x18) == 5) {
          uVar4 = *(ulong *)(lVar3 + 0x48);
          uVar5 = (*(byte *)(lVar3 + 0x45) & 0xaaaaaaaa) >> 1 |
                  (*(byte *)(lVar3 + 0x45) & 0x55555555) << 1;
          uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
          uVar5 = (uint)LZCOUNT((uVar5 >> 4 | (uVar5 & 0xf0f0f0f) << 4) << 0x18);
          uVar2 = uVar4 & 0xffffffff;
          if (uVar5 != 5) {
            uVar2 = uVar4;
          }
          uVar1 = uVar4 & 0xffff;
          if (uVar5 != 4) {
            uVar1 = uVar2;
          }
          uVar2 = uVar4 & 1;
          if (uVar5 != 0) {
            uVar2 = uVar4 & 0xff;
          }
          if (uVar5 < 4) {
            uVar1 = uVar2;
          }
          uVar2 = *(ulong *)(**(long **)(param_1 + 0x50) + 0x30);
          FUN_109eca23c();
          if ((uVar2 & 0xffffffff) <= uVar1) {
            return 1;
          }
        }
      }
      else if (*(int *)(param_1 + 0x28) == 0) {
        return 0;
      }
      param_1 = **(long **)(param_1 + 0x50);
    } while (*(int *)(param_1 + 0x18) == 1);
  }
  return 0;
}



/* Entry: 109ef9814; end: 109ef984f;  */

ulong FUN_109ef9814(uint param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = (param_1 & 0xaaaaaaaa) >> 1 | (param_1 & 0x55555555) << 1;
  uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
  uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = (uint)LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
  uVar1 = param_2 & 0xffffffff;
  if (uVar3 != 5) {
    uVar1 = param_2;
  }
  uVar2 = param_2 & 0xffff;
  if (uVar3 != 4) {
    uVar2 = uVar1;
  }
  uVar1 = param_2 & 1;
  if (uVar3 != 0) {
    uVar1 = param_2 & 0xff;
  }
  if (uVar3 < 4) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 109ef9850; end: 109ef9983;  */

undefined8 FUN_109ef9850(long param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x90);
  do {
    if (lVar4 == param_1 + 0x88) {
      return 0;
    }
    puVar3 = (ulong *)(lVar4 + -8);
    uVar2 = *puVar3;
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    if (*(int *)(uVar2 + 0x18) == 4) {
      iVar1 = *(int *)(uVar2 + 0x28);
      if (iVar1 < 0x112) {
        if (iVar1 - 0x62U < 2) {
          if (((uint)param_2 >> 2 & 1) == 0) {
            return 1;
          }
        }
        else if (iVar1 != 0x54) {
          return 1;
        }
      }
      else if (iVar1 != 0x112) {
        if (iVar1 == 0x229) {
          if ((((uint)(puVar3 == (ulong *)(uVar2 + 0x80)) & (uint)param_2 >> 1) == 0) &&
             ((param_2 & 1) == 0 || puVar3 != (ulong *)(uVar2 + 0xa0))) {
            return 1;
          }
        }
        else {
          if (iVar1 != 0x26f) {
            return 1;
          }
          if (puVar3 != (ulong *)(uVar2 + 0x80)) {
            return 1;
          }
        }
      }
    }
    else {
      if (*(int *)(uVar2 + 0x18) != 1) {
        return 1;
      }
      if (puVar3 != (ulong *)(uVar2 + 0x38)) {
        return 1;
      }
      if (4 < *(uint *)(uVar2 + 0x28) || (1 << (ulong)(*(uint *)(uVar2 + 0x28) & 0x1f) & 0x16U) == 0
         ) {
        return 1;
      }
      FUN_109ef9850(uVar2,param_2);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
    }
    lVar4 = *(long *)(lVar4 + 8);
  } while( true );
}



/* Entry: 109ef9984; end: 109ef9a4f;  */

int FUN_109ef9984(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  while (iVar1 = *(int *)(param_1 + 0x28), iVar1 == 3) {
    param_1 = **(long **)(param_1 + 0x50);
    if (*(int *)(param_1 + 0x18) != 1) {
      param_1 = 0;
    }
  }
  if (iVar1 - 1U < 2) {
    lVar3 = *(long *)(**(long **)(param_1 + 0x50) + 0x30);
    iVar1 = *(int *)(lVar3 + 0x28);
    if (*(byte *)(lVar3 + 0xe) < 2) {
      if ((*(byte *)(lVar3 + 0xe) == 1 && 1 < *(byte *)(lVar3 + 0xd)) &&
         ((*(uint *)(lVar3 + 4) & 0xfc) < 0xc && iVar1 == 0)) {
        uVar2 = *(uint *)(lVar3 + 4) & 0xff;
        if (uVar2 == 0xb) {
          return 4;
        }
        goto LAB_109ef99ec;
      }
    }
    else {
      uVar2 = *(uint *)(lVar3 + 4);
      if (0xfffffffc < (uVar2 & 0xff) - 5 && (uVar2 & 0x1000000) != 0) {
LAB_109ef99ec:
        return *(int *)(&UNK_10e06cbe0 + (ulong)(uVar2 & 0xff) * 4);
      }
    }
  }
  else {
    if (iVar1 == 5) {
      return *(int *)(param_1 + 0x58);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* Entry: 109ef9a50; end: 109ef9f3b;  */

undefined8 * FUN_109ef9a50(undefined8 *param_1,long param_2,code *param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 uVar6;
  byte bVar7;
  bool bVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long alStack_a8 [6];
  long lStack_78;
  long *plStack_70;
  int iStack_68;
  int iStack_64;
  
  FUN_109ef9548(alStack_a8,param_2,0);
  uVar6 = *(undefined1 *)(param_2 + 0x9d);
  puVar11 = *(undefined8 **)param_1[3];
  FUN_109f6600c(puVar11,0x50,8);
  if (puVar11 != (undefined8 *)0x0) {
    puVar11[7] = 0;
    puVar11[6] = 0;
    puVar11[9] = 0;
    puVar11[8] = 0;
    puVar11[3] = 0;
    puVar11[2] = 0;
    puVar11[5] = 0;
    puVar11[4] = 0;
    puVar11[1] = 0;
    *puVar11 = 0;
  }
  *(undefined4 *)(puVar11 + 3) = 5;
  puVar11[1] = 0;
  puVar11[2] = 0;
  *puVar11 = 0;
  puVar21 = puVar11 + 5;
  FUN_109ecb048(puVar11,puVar21,1,uVar6);
  puVar11[9] = 0;
  FUN_109ecb4f0(*param_1,param_1[1],puVar11);
  *param_1 = 3;
  param_1[1] = puVar11;
  lVar14 = plStack_70[1];
  plVar16 = plStack_70 + 1;
  plVar10 = plStack_70;
  do {
    plVar9 = plVar16;
    if (lVar14 == 0) {
      bVar8 = plStack_70 == (long *)0x0;
      if (alStack_a8 <= plStack_70) {
        bVar8 = plStack_70 <= &lStack_78;
      }
      if (!bVar8) {
        FUN_109f65aa4(plStack_70 + -6);
        FUN_109f65ae0(plStack_70 + -6);
      }
      return puVar21;
    }
    if (*(int *)(lVar14 + 0x28) < 4) {
      puVar11 = *(undefined8 **)(lVar14 + 0x70);
      (*param_3)(*(undefined8 *)(lVar14 + 0x30),&iStack_64,&iStack_68);
      uVar17 = (ulong)*(byte *)((long)puVar11 + 0x1d);
      uVar13 = (uint)*(byte *)((long)puVar11 + 0x1d);
      uVar18 = 0xffffffffffffffff;
      if (uVar13 != 0x40) {
        uVar18 = ~(-1L << (uVar17 & 0x3f));
      }
      uVar18 = uVar18 & (long)(int)((iStack_64 + iStack_68) - 1U & -iStack_68);
      puVar12 = puVar11;
      if (uVar18 - 1 != 0) {
        if (uVar18 == 0) {
          puVar11 = *(undefined8 **)param_1[3];
          FUN_109f6600c(puVar11,0x50,8);
          if (puVar11 != (undefined8 *)0x0) {
            puVar11[7] = 0;
            puVar11[6] = 0;
            puVar11[9] = 0;
            puVar11[8] = 0;
            puVar11[3] = 0;
            puVar11[2] = 0;
            puVar11[5] = 0;
            puVar11[4] = 0;
            puVar11[1] = 0;
            *puVar11 = 0;
          }
          *(undefined4 *)(puVar11 + 3) = 5;
          puVar11[1] = 0;
          puVar11[2] = 0;
          puVar12 = puVar11 + 5;
          *puVar11 = 0;
          FUN_109ecb048(puVar11,puVar12,1,uVar17);
          puVar11[9] = 0;
          FUN_109ecb4f0(*param_1,param_1[1],puVar11);
          *param_1 = 3;
          param_1[1] = puVar11;
        }
        else {
          puVar15 = (undefined8 *)param_1[3];
          puVar12 = param_1;
          if (((puVar15[5] == 0) || ((*(byte *)(puVar15[5] + 0x1e) & 1) == 0)) &&
             ((uVar18 & uVar18 - 1) == 0)) {
            puVar15 = (undefined8 *)*puVar15;
            FUN_109f6600c(puVar15,0x50,8);
            if (puVar15 != (undefined8 *)0x0) {
              puVar15[7] = 0;
              puVar15[6] = 0;
              puVar15[9] = 0;
              puVar15[8] = 0;
              puVar15[3] = 0;
              puVar15[2] = 0;
              puVar15[5] = 0;
              puVar15[4] = 0;
              puVar15[1] = 0;
              *puVar15 = 0;
            }
            uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
            uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
            uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
            uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
            *(undefined4 *)(puVar15 + 3) = 5;
            puVar15[1] = 0;
            puVar15[2] = 0;
            *puVar15 = 0;
            FUN_109ecb048(puVar15,puVar15 + 5,1,0x20);
            puVar15[9] = LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20);
            FUN_109ecb4f0(*param_1,param_1[1],puVar15);
            *param_1 = 3;
            param_1[1] = puVar15;
            FUN_109ece1b0(param_1,0x14d,puVar11,puVar15 + 5);
          }
          else {
            uVar13 = (uVar13 & 0xaaaaaaaa) >> 1 | (uVar13 & 0x55555555) << 1;
            uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
            uVar13 = (uint)LZCOUNT((uVar13 >> 4 | (uVar13 & 0xf0f0f0f) << 4) << 0x18);
            uVar20 = 0;
            if (uVar13 != 5) {
              uVar20 = uVar18 & 0xffffffff00000000;
            }
            uVar3 = 0;
            if (uVar13 != 4) {
              uVar3 = uVar18;
            }
            uVar4 = 0;
            if (uVar13 != 4) {
              uVar4 = uVar20;
            }
            uVar20 = 1;
            if (uVar13 != 0) {
              uVar20 = uVar18;
            }
            uVar5 = uVar18;
            if (uVar13 < 4) {
              uVar3 = 0;
              uVar4 = 0;
              uVar18 = 0;
              uVar5 = uVar20;
            }
            puVar15 = (undefined8 *)*puVar15;
            FUN_109f6600c(puVar15,0x50,8);
            if (puVar15 != (undefined8 *)0x0) {
              puVar15[7] = 0;
              puVar15[6] = 0;
              puVar15[9] = 0;
              puVar15[8] = 0;
              puVar15[3] = 0;
              puVar15[2] = 0;
              puVar15[5] = 0;
              puVar15[4] = 0;
              puVar15[1] = 0;
              *puVar15 = 0;
            }
            *(undefined4 *)(puVar15 + 3) = 5;
            puVar15[1] = 0;
            puVar15[2] = 0;
            *puVar15 = 0;
            FUN_109ecb048(puVar15,puVar15 + 5,1,uVar17);
            puVar15[9] = uVar4 | uVar3 & 0xffff0000 | uVar18 & 0xff00 | uVar5 & 0xff;
            FUN_109ecb4f0(*param_1,param_1[1],puVar15);
            *param_1 = 3;
            param_1[1] = puVar15;
            FUN_109ece1b0(param_1,0,puVar11,puVar15 + 5);
          }
        }
      }
LAB_109ef9eb8:
      puVar11 = param_1;
      FUN_109ece1b0(param_1,0x11d,puVar21,puVar12);
      puVar21 = puVar11;
    }
    else if (*(int *)(lVar14 + 0x28) == 4) {
      uVar17 = 0;
      uVar18 = 0;
      lVar19 = *(long *)(*plVar10 + 0x30);
      uVar13 = *(uint *)(lVar14 + 0x58);
      do {
        (*param_3)(*(undefined8 *)(*(long *)(lVar19 + 0x30) + uVar17 * 0x30),&iStack_64,&iStack_68);
        iVar2 = iStack_64;
        if (uVar13 <= (uint)uVar17) {
          iVar2 = 0;
        }
        uVar18 = (ulong)((((int)uVar18 + iStack_68) - 1U & -iStack_68) + iVar2);
        uVar1 = (uint)uVar17 + 1;
        uVar17 = (ulong)uVar1;
      } while (uVar1 <= uVar13);
      bVar7 = *(byte *)((long)puVar21 + 0x1d);
      uVar13 = (uint)bVar7;
      uVar17 = 0xffffffff;
      if (uVar13 != 0x40) {
        uVar17 = (ulong)~(uint)(-1L << ((ulong)bVar7 & 0x3f));
      }
      uVar17 = uVar17 & uVar18;
      if (uVar17 != 0) {
        uVar13 = (uVar13 & 0xaaaaaaaa) >> 1 | (uVar13 & 0x55555555) << 1;
        uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
        uVar13 = (uint)LZCOUNT((uVar13 >> 4 | (uVar13 & 0xf0f0f0f) << 4) << 0x18);
        if (uVar13 < 5) {
          if (uVar13 == 0) {
            uVar20 = 0;
            uVar17 = 1;
            uVar18 = 0;
          }
          else {
            uVar20 = 0;
            uVar18 = 0;
            if (uVar13 != 3) {
              uVar18 = uVar17;
            }
          }
        }
        else {
          uVar20 = uVar17 & 0xffff0000;
          uVar18 = uVar17;
        }
        puVar11 = *(undefined8 **)param_1[3];
        FUN_109f6600c(puVar11,0x50,8);
        if (puVar11 != (undefined8 *)0x0) {
          puVar11[7] = 0;
          puVar11[6] = 0;
          puVar11[9] = 0;
          puVar11[8] = 0;
          puVar11[3] = 0;
          puVar11[2] = 0;
          puVar11[5] = 0;
          puVar11[4] = 0;
          puVar11[1] = 0;
          *puVar11 = 0;
        }
        *(undefined4 *)(puVar11 + 3) = 5;
        puVar11[1] = 0;
        puVar11[2] = 0;
        *puVar11 = 0;
        puVar12 = puVar11 + 5;
        FUN_109ecb048(puVar11,puVar12,1,(ulong)bVar7);
        puVar11[9] = uVar18 & 0xff00 | uVar20 | uVar17 & 0xff;
        FUN_109ecb4f0(*param_1,param_1[1],puVar11);
        *param_1 = 3;
        param_1[1] = puVar11;
        goto LAB_109ef9eb8;
      }
    }
    plVar16 = plVar9 + 1;
    lVar14 = *plVar16;
    plVar10 = plVar9;
  } while( true );
}



/* Entry: 109ef9f3c; end: 109ef9feb;  */

undefined8 FUN_109ef9f3c(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  
  lVar5 = *(long *)(param_1 + 0x30);
  if (lVar5 != 0) {
    uVar6 = 0;
    do {
      plVar7 = *(long **)(lVar5 + 0x20);
      plVar4 = (long *)*plVar7;
      if (plVar4 != (long *)0x0) {
        do {
          plVar2 = plVar7;
          plVar1 = (long *)0x0;
          if (*plVar4 != 0) {
            plVar1 = plVar4;
          }
          do {
            plVar7 = plVar1;
            if ((int)plVar2[3] == 1) {
              func_0x000109ef9690();
              uVar6 = (uint)plVar2 | uVar6;
            }
            if (plVar7 == (long *)0x0) goto LAB_109ef9fa8;
            plVar4 = (long *)*plVar7;
            plVar2 = plVar7;
            plVar1 = (long *)0x0;
          } while (plVar4 == (long *)0x0);
        } while( true );
      }
LAB_109ef9fa8:
      FUN_109ecc434();
    } while (lVar5 != 0);
    if ((uVar6 & 1) != 0) {
      uVar3 = 1;
      uVar6 = 3;
      goto LAB_109ef9fd0;
    }
  }
  uVar3 = 0;
  uVar6 = 0xfffffff7;
LAB_109ef9fd0:
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & uVar6;
  return uVar3;
}



/* Entry: 109ef9fec; end: 109efa06b;  */

uint FUN_109ef9fec(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x178);
  plVar1 = (long *)**(long **)(param_1 + 0x178);
  do {
    if (plVar1 == (long *)0x0) {
      uVar4 = 0;
LAB_109efa020:
      return uVar4 & 1;
    }
    uVar2 = plVar5[6];
    if (uVar2 != 0) {
      FUN_109ef9f3c();
      do {
        uVar4 = (uint)uVar2;
        plVar5 = (long *)*plVar5;
        plVar1 = (long *)*plVar5;
        while( true ) {
          if (plVar1 == (long *)0x0) goto LAB_109efa020;
          lVar3 = plVar5[6];
          if (lVar3 != 0) break;
          plVar5 = plVar1;
          plVar1 = (long *)*plVar1;
        }
        FUN_109ef9f3c();
        uVar2 = (ulong)((uint)lVar3 | uVar4);
      } while( true );
    }
    plVar5 = plVar1;
    plVar1 = (long *)*plVar1;
  } while( true );
}



/* Entry: 109efa06c; end: 109efa1c3;  */

void FUN_109efa06c(long param_1,code *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  plVar7 = *(long **)(param_1 + 0x178);
  plVar5 = (long *)**(long **)(param_1 + 0x178);
  while( true ) {
    if (plVar5 == (long *)0x0) {
      return;
    }
    lVar8 = plVar7[6];
    if (lVar8 != 0) break;
    plVar7 = plVar5;
    plVar5 = (long *)*plVar5;
  }
  do {
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_60 = *(undefined8 *)(*(long *)(lVar8 + 0x20) + 0x18);
    uStack_68 = 0;
    lVar4 = *(long *)(lVar8 + 0x30);
    if (lVar4 == 0) {
LAB_109efa1a4:
      uVar9 = 0xfffffff7;
    }
    else {
      lVar6 = lVar4;
      lStack_58 = lVar8;
      FUN_109ecc434();
      uVar9 = 0;
      do {
        lVar2 = lVar6;
        plVar5 = (long *)**(undefined8 **)(lVar4 + 0x20);
        if (plVar5 != (long *)0x0) {
          lVar6 = *plVar5;
          puVar3 = &uStack_78;
          (*param_2)(puVar3,*(undefined8 **)(lVar4 + 0x20),0);
          uVar9 = uVar9 | (uint)puVar3;
          if (lVar6 != 0) {
            for (plVar1 = (long *)*plVar5; (plVar1 != (long *)0x0 && (*plVar1 != 0));
                plVar1 = (long *)*plVar1) {
              puVar3 = &uStack_78;
              (*param_2)(puVar3,plVar5,0);
              uVar9 = uVar9 | (uint)puVar3;
              plVar5 = plVar1;
            }
            puVar3 = &uStack_78;
            (*param_2)(puVar3,plVar5,0);
            uVar9 = uVar9 | (uint)puVar3;
          }
        }
        lVar6 = lVar2;
        FUN_109ecc434();
        lVar4 = lVar2;
      } while (lVar2 != 0);
      if ((uVar9 & 1) == 0) goto LAB_109efa1a4;
      uVar9 = 0x27;
    }
    *(uint *)(lVar8 + 0x84) = *(uint *)(lVar8 + 0x84) & uVar9;
    plVar7 = (long *)*plVar7;
    plVar5 = (long *)*plVar7;
    while( true ) {
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar8 = plVar7[6];
      if (lVar8 != 0) break;
      plVar7 = plVar5;
      plVar5 = (long *)*plVar5;
    }
  } while( true );
}



/* Entry: 109efa1c4; end: 109efa233;  */

undefined8 FUN_109efa1c4(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  if (*(int *)(param_2 + 0x18) == 1) {
    if (*(int *)(param_2 + 0x28) == 0) {
      uVar1 = *(uint *)(*(long *)(param_2 + 0x38) + 0x20) & 0x1fffff;
    }
    else {
      lVar2 = **(long **)(param_2 + 0x50);
      if (lVar2 == 0 || *(int *)(lVar2 + 0x18) != 1) {
        return 0;
      }
      uVar1 = *(uint *)(lVar2 + 0x2c);
      if ((uVar1 ^ uVar1 - 1) <= uVar1 - 1) {
        return 0;
      }
    }
    if (*(uint *)(param_2 + 0x2c) != uVar1) {
      *(uint *)(param_2 + 0x2c) = uVar1;
      return 1;
    }
  }
  return 0;
}



/* Entry: 109efa234; end: 109efa2fb;  */

undefined8 FUN_109efa234(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if (*(int *)(param_2 + 0x18) != 1) {
    return 0;
  }
  iVar1 = *(int *)(param_2 + 0x28);
  if (iVar1 < 3) {
    if (iVar1 - 1U < 2) {
      lVar2 = *(long *)(**(long **)(param_2 + 0x50) + 0x30);
      func_0x000109eca118();
    }
    else {
      if (iVar1 != 0) {
        return 0;
      }
      lVar2 = *(long *)(*(long *)(param_2 + 0x38) + 0x10);
    }
  }
  else if (iVar1 == 3) {
    lVar2 = *(long *)(**(long **)(param_2 + 0x50) + 0x30);
  }
  else {
    if (iVar1 != 4) {
      return 0;
    }
    lVar2 = *(long *)(*(long *)(*(long *)(**(long **)(param_2 + 0x50) + 0x30) + 0x30) +
                     (ulong)*(uint *)(param_2 + 0x58) * 0x30);
  }
  if (*(long *)(param_2 + 0x30) == lVar2) {
    return 0;
  }
  *(long *)(param_2 + 0x30) = lVar2;
  return 1;
}



/* Entry: 109efa2fc; end: 109efa74b;  */

/* WARNING: Removing unreachable block (ram,0x000109efa748) */

byte FUN_109efa2fc(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  long *plVar14;
  byte bVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  uint uVar7;
  
  plVar13 = *(long **)(param_2 + 0x38);
  lVar8 = *plVar13;
  plVar14 = *(long **)(param_1 + 0x38);
  lVar9 = *plVar14;
  if ((*(uint *)(lVar9 + 0x2c) & *(uint *)(lVar8 + 0x2c)) == 0 &&
      ((*(uint *)(lVar9 + 0x2c) & 0x100200) == 0 || (*(uint *)(lVar8 + 0x2c) & 0x100200) == 0)) {
    return 0;
  }
  if (*(int *)(lVar9 + 0x28) != *(int *)(lVar8 + 0x28)) {
    return 2;
  }
  if (*(int *)(lVar9 + 0x28) == 0) {
    lVar9 = *(long *)(lVar9 + 0x38);
    lVar8 = *(long *)(lVar8 + 0x38);
    uVar17 = *(uint *)(lVar9 + 0x20) & 0x1fffff;
    if (uVar17 == 0x80000) {
      if (lVar9 != lVar8) {
        if (*(char *)(*(long *)(lVar9 + 0x10) + 4) == '\x12') {
          return 2;
        }
        if (*(char *)(*(long *)(lVar8 + 0x10) + 4) != '\x12') {
          return 0;
        }
        return 2;
      }
      goto LAB_109efa408;
    }
    if (uVar17 != 0x200) {
      if (lVar9 != lVar8) {
        return 0;
      }
      goto LAB_109efa408;
    }
    if (lVar9 != lVar8) {
LAB_109efa3a0:
      if ((*(byte *)(lVar9 + 0x30) >> 1 & 1) != 0) {
        return 0;
      }
      if ((*(byte *)(lVar8 + 0x30) >> 1 & 1) == 0) {
        return 2;
      }
      return 0;
    }
    lVar11 = plVar14[1];
    if (lVar11 == 0) {
      uVar16 = 1;
    }
    else {
      uVar16 = 1;
      do {
        if ((lVar11 != plVar13[uVar16]) || (*(int *)(lVar11 + 0x28) == 4)) break;
        uVar16 = (ulong)((int)uVar16 + 1);
        lVar11 = plVar14[uVar16];
      } while (lVar11 != 0);
    }
    uVar12 = (uint)uVar16;
    lVar18 = plVar14[uVar16];
    lVar11 = lVar18;
    uVar17 = uVar12;
    while (lVar11 != 0) {
      uVar17 = uVar17 + 1;
      iVar1 = *(int *)(lVar11 + 0x28);
      if (iVar1 == 3) {
        return 2;
      }
      if (iVar1 == 4) break;
      if (iVar1 == 5) {
        return 2;
      }
      lVar11 = plVar14[uVar17];
    }
    lVar10 = plVar13[uVar16];
    lVar11 = lVar10;
    while (lVar11 != 0) {
      uVar12 = uVar12 + 1;
      iVar1 = *(int *)(lVar11 + 0x28);
      if (iVar1 == 3) {
        return 2;
      }
      if (iVar1 == 4) break;
      if (iVar1 == 5) {
        return 2;
      }
      lVar11 = plVar13[uVar12];
    }
    uVar17 = 0xe;
    if (lVar18 != 0) {
      do {
        lVar10 = plVar13[uVar16];
        if (((lVar10 == 0) || (iVar1 = *(int *)(lVar18 + 0x28), iVar1 == 4)) ||
           (iVar2 = *(int *)(lVar10 + 0x28), iVar2 == 4)) {
          uVar17 = uVar17 & 0xfffffffb;
          goto LAB_109efa728;
        }
        if (iVar1 - 1U < 2) {
          if (iVar1 == 2) {
            uVar12 = uVar17 & 0xfffffff7;
            bVar3 = iVar2 == 2;
LAB_109efa708:
            if (!bVar3) {
              uVar17 = uVar12;
            }
          }
          else if (iVar2 == 2) {
            uVar17 = uVar17 & 0xfffffffb;
          }
          else {
            lVar11 = **(long **)(lVar18 + 0x70);
            if ((*(int *)(lVar11 + 0x18) != 5) ||
               (lVar19 = **(long **)(lVar10 + 0x70), *(int *)(lVar19 + 0x18) != 5)) {
              uVar12 = 0;
              bVar3 = *(long **)(lVar18 + 0x70) == *(long **)(lVar10 + 0x70);
              goto LAB_109efa708;
            }
            uVar4 = (ulong)*(byte *)(lVar11 + 0x45);
            FUN_109ef9814(uVar4,*(undefined8 *)(lVar11 + 0x48));
            uVar5 = (ulong)*(byte *)(lVar19 + 0x45);
            FUN_109ef9814(uVar5,*(undefined8 *)(lVar19 + 0x48));
            if (uVar4 != uVar5) goto LAB_109efa3a0;
          }
        }
        else if (*(int *)(lVar18 + 0x58) != *(int *)(lVar10 + 0x58)) goto LAB_109efa3a0;
        uVar16 = (ulong)((int)uVar16 + 1);
        lVar18 = plVar14[uVar16];
      } while (lVar18 != 0);
      lVar10 = plVar13[uVar16];
    }
LAB_109efa728:
    if (lVar10 != 0) {
      uVar17 = uVar17 & 0xfffffff7;
    }
    if (((uVar17 ^ 0xffffffff) & 0xc) != 0) {
      return 2;
    }
  }
  else {
    if (lVar9 != lVar8) {
      return 2;
    }
LAB_109efa408:
    uVar16 = 1;
  }
  uVar17 = (uint)uVar16;
  lVar8 = plVar14[uVar16];
  while (lVar8 != 0) {
    uVar17 = (uint)uVar16;
    lVar9 = lVar8;
    uVar12 = uVar17;
    if (lVar8 != plVar13[uVar16]) goto LAB_109efa47c;
    uVar17 = uVar17 + 1;
    uVar16 = (ulong)uVar17;
    lVar8 = plVar14[uVar16];
  }
  bVar3 = true;
LAB_109efa438:
  lVar11 = plVar13[uVar16];
  lVar9 = lVar11;
  uVar12 = uVar17;
  while (lVar9 != 0) {
    uVar12 = uVar12 + 1;
    if (*(int *)(lVar9 + 0x28) == 3 || *(int *)(lVar9 + 0x28) == 5) {
      return 2;
    }
    lVar9 = plVar13[uVar12];
  }
  if (bVar3) {
    uVar12 = 0xe;
    bVar15 = 0xe;
  }
  else {
    uVar12 = 0xe;
    bVar15 = 0xe;
    do {
      uVar17 = uVar17 + 1;
      lVar9 = plVar13[uVar16];
      if (lVar9 == 0) {
        lVar11 = 0;
        uVar12 = uVar12 & 0xfffffffb;
        bVar15 = bVar15 & 0xfb;
        goto LAB_109efa5ac;
      }
      if (*(int *)(lVar8 + 0x28) - 1U < 2) {
        if (*(int *)(lVar8 + 0x28) == 2) {
          uVar7 = uVar12 & 0xfffffff7;
          bVar6 = bVar15 & 0xf7;
          bVar3 = *(int *)(lVar9 + 0x28) == 2;
LAB_109efa554:
          if (!bVar3) {
            uVar12 = uVar7;
            bVar15 = bVar6;
          }
        }
        else if (*(int *)(lVar9 + 0x28) == 2) {
          uVar12 = uVar12 & 0xfffffffb;
          bVar15 = bVar15 & 0xfb;
        }
        else {
          lVar11 = **(long **)(lVar8 + 0x70);
          if ((*(int *)(lVar11 + 0x18) != 5) ||
             (lVar18 = **(long **)(lVar9 + 0x70), *(int *)(lVar18 + 0x18) != 5)) {
            uVar7 = 0;
            bVar6 = bVar15 & 0xf3;
            bVar3 = *(long **)(lVar8 + 0x70) == *(long **)(lVar9 + 0x70);
            goto LAB_109efa554;
          }
          uVar16 = (ulong)*(byte *)(lVar11 + 0x45);
          FUN_109ef9814(uVar16,*(undefined8 *)(lVar11 + 0x48));
          uVar4 = (ulong)*(byte *)(lVar18 + 0x45);
          FUN_109ef9814(uVar4,*(undefined8 *)(lVar18 + 0x48));
          if (uVar16 != uVar4) {
            return 0;
          }
        }
      }
      else if (*(int *)(lVar8 + 0x58) != *(int *)(lVar9 + 0x58)) {
        return 0;
      }
      lVar8 = plVar14[uVar17];
      uVar16 = (ulong)uVar17;
    } while (lVar8 != 0);
    lVar11 = plVar13[uVar16];
  }
LAB_109efa5ac:
  if (lVar11 != 0) {
    uVar12 = uVar12 & 0xfffffff7;
    bVar15 = bVar15 & 0xf7;
  }
  return bVar15 | ((uVar12 ^ 0xffffffff) & 0xc) == 0;
LAB_109efa47c:
  do {
    uVar12 = uVar12 + 1;
    if (*(int *)(lVar9 + 0x28) == 3 || *(int *)(lVar9 + 0x28) == 5) {
      return 2;
    }
    lVar9 = plVar14[uVar12];
  } while (plVar14[uVar12] != 0);
  bVar3 = false;
  goto LAB_109efa438;
}



/* Entry: 109efa74c; end: 109efa833;  */

undefined1 * FUN_109efa74c(long param_1,long param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 auStack_b0 [48];
  undefined1 auStack_80 [8];
  undefined1 *puStack_78;
  undefined1 auStack_70 [48];
  undefined1 auStack_40 [8];
  undefined1 *puStack_38;
  
  if (param_1 == param_2) {
    puVar2 = (undefined1 *)0xf;
  }
  else {
    FUN_109ef9548(auStack_70,param_1,0);
    FUN_109ef9548(auStack_b0,param_2,0);
    puVar2 = auStack_70;
    FUN_109efa2fc(puVar2,auStack_b0);
    bVar1 = puStack_38 == (undefined1 *)0x0;
    if (auStack_70 <= puStack_38) {
      bVar1 = puStack_38 <= auStack_40;
    }
    if (!bVar1) {
      FUN_109f65aa4(puStack_38 + -0x30);
      FUN_109f65ae0(puStack_38 + -0x30);
    }
    bVar1 = puStack_78 == (undefined1 *)0x0;
    if (auStack_b0 <= puStack_78) {
      bVar1 = puStack_78 <= auStack_80;
    }
    if (!bVar1) {
      FUN_109f65aa4(puStack_78 + -0x30);
      FUN_109f65ae0(puStack_78 + -0x30);
    }
  }
  return puVar2;
}



/* Entry: 109efa834; end: 109efa87b;  */

long FUN_109efa834(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 8);
  if (lVar1 == 0) {
    FUN_109f658b0(param_1,0x40);
    *(undefined8 *)(param_2 + 8) = param_1;
    FUN_109ef9548();
    lVar1 = *(long *)(param_2 + 8);
  }
  return lVar1;
}



/* Entry: 109efa87c; end: 109efa8e7;  */

/* WARNING: Removing unreachable block (ram,0x000109efa748) */

undefined1 * FUN_109efa87c(long param_1,long *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  undefined1 *puVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_b0 [48];
  undefined1 auStack_80 [8];
  undefined1 *puStack_78;
  undefined1 auStack_70 [32];
  undefined1 *in_stack_ffffffffffffffc8;
  
  lVar6 = *param_2;
  lVar8 = *param_3;
  if (lVar6 == lVar8) {
    if (lVar6 == lVar8) {
      puVar12 = (undefined1 *)0xf;
    }
    else {
      FUN_109ef9548(auStack_70,lVar6,0);
      FUN_109ef9548(auStack_b0,lVar8,0);
      puVar12 = auStack_70;
      FUN_109efa2fc(puVar12,auStack_b0);
      bVar3 = in_stack_ffffffffffffffc8 == (undefined1 *)0x0;
      if (auStack_70 <= in_stack_ffffffffffffffc8) {
        bVar3 = in_stack_ffffffffffffffc8 <= &stack0xffffffffffffffc0;
      }
      if (!bVar3) {
        FUN_109f65aa4(in_stack_ffffffffffffffc8 + -0x30);
        FUN_109f65ae0(in_stack_ffffffffffffffc8 + -0x30);
      }
      bVar3 = puStack_78 == (undefined1 *)0x0;
      if (auStack_b0 <= puStack_78) {
        bVar3 = puStack_78 <= auStack_80;
      }
      if (!bVar3) {
        FUN_109f65aa4(puStack_78 + -0x30);
        FUN_109f65ae0(puStack_78 + -0x30);
      }
    }
    return puVar12;
  }
  lVar6 = param_1;
  FUN_109efa834();
  FUN_109efa834(param_1,param_3);
  plVar13 = *(long **)(param_1 + 0x38);
  lVar8 = *plVar13;
  plVar14 = *(long **)(lVar6 + 0x38);
  lVar6 = *plVar14;
  if ((*(uint *)(lVar6 + 0x2c) & *(uint *)(lVar8 + 0x2c)) == 0 &&
      ((*(uint *)(lVar6 + 0x2c) & 0x100200) == 0 || (*(uint *)(lVar8 + 0x2c) & 0x100200) == 0)) {
    return (undefined1 *)0x0;
  }
  if (*(int *)(lVar6 + 0x28) != *(int *)(lVar8 + 0x28)) {
    return (undefined1 *)0x2;
  }
  if (*(int *)(lVar6 + 0x28) == 0) {
    lVar10 = *(long *)(lVar6 + 0x38);
    lVar6 = *(long *)(lVar8 + 0x38);
    uVar16 = *(uint *)(lVar10 + 0x20) & 0x1fffff;
    if (uVar16 == 0x80000) {
      if (lVar10 != lVar6) {
        if (*(char *)(*(long *)(lVar10 + 0x10) + 4) != '\x12') {
          uVar16 = 2;
          if (*(char *)(*(long *)(lVar6 + 0x10) + 4) != '\x12') {
            uVar16 = 0;
          }
          return (undefined1 *)(ulong)uVar16;
        }
        return (undefined1 *)0x2;
      }
      goto LAB_109efa408;
    }
    if (uVar16 != 0x200) {
      if (lVar10 != lVar6) {
        return (undefined1 *)0x0;
      }
      goto LAB_109efa408;
    }
    if (lVar10 != lVar6) {
LAB_109efa3a0:
      if ((*(byte *)(lVar10 + 0x30) >> 1 & 1) != 0) {
        return (undefined1 *)0x0;
      }
      if ((*(byte *)(lVar6 + 0x30) >> 1 & 1) == 0) {
        return (undefined1 *)0x2;
      }
      return (undefined1 *)0x0;
    }
    lVar8 = plVar14[1];
    if (lVar8 == 0) {
      uVar15 = 1;
    }
    else {
      uVar15 = 1;
      do {
        if ((lVar8 != plVar13[uVar15]) || (*(int *)(lVar8 + 0x28) == 4)) break;
        uVar15 = (ulong)((int)uVar15 + 1);
        lVar8 = plVar14[uVar15];
      } while (lVar8 != 0);
    }
    uVar11 = (uint)uVar15;
    lVar17 = plVar14[uVar15];
    lVar8 = lVar17;
    uVar16 = uVar11;
    while (lVar8 != 0) {
      uVar16 = uVar16 + 1;
      iVar1 = *(int *)(lVar8 + 0x28);
      if (iVar1 == 3) {
        return (undefined1 *)0x2;
      }
      if (iVar1 == 4) break;
      if (iVar1 == 5) {
        return (undefined1 *)0x2;
      }
      lVar8 = plVar14[uVar16];
    }
    lVar9 = plVar13[uVar15];
    lVar8 = lVar9;
    while (lVar8 != 0) {
      uVar11 = uVar11 + 1;
      iVar1 = *(int *)(lVar8 + 0x28);
      if (iVar1 == 3) {
        return (undefined1 *)0x2;
      }
      if (iVar1 == 4) break;
      if (iVar1 == 5) {
        return (undefined1 *)0x2;
      }
      lVar8 = plVar13[uVar11];
    }
    uVar16 = 0xe;
    if (lVar17 != 0) {
      do {
        lVar9 = plVar13[uVar15];
        if (((lVar9 == 0) || (iVar1 = *(int *)(lVar17 + 0x28), iVar1 == 4)) ||
           (iVar2 = *(int *)(lVar9 + 0x28), iVar2 == 4)) {
          uVar16 = uVar16 & 0xfffffffb;
          goto LAB_109efa728;
        }
        if (iVar1 - 1U < 2) {
          if (iVar1 == 2) {
            uVar11 = uVar16 & 0xfffffff7;
            bVar3 = iVar2 == 2;
LAB_109efa708:
            if (!bVar3) {
              uVar16 = uVar11;
            }
          }
          else if (iVar2 == 2) {
            uVar16 = uVar16 & 0xfffffffb;
          }
          else {
            lVar8 = **(long **)(lVar17 + 0x70);
            if ((*(int *)(lVar8 + 0x18) != 5) ||
               (lVar18 = **(long **)(lVar9 + 0x70), *(int *)(lVar18 + 0x18) != 5)) {
              uVar11 = 0;
              bVar3 = *(long **)(lVar17 + 0x70) == *(long **)(lVar9 + 0x70);
              goto LAB_109efa708;
            }
            uVar4 = (ulong)*(byte *)(lVar8 + 0x45);
            FUN_109ef9814(uVar4,*(undefined8 *)(lVar8 + 0x48));
            uVar5 = (ulong)*(byte *)(lVar18 + 0x45);
            FUN_109ef9814(uVar5,*(undefined8 *)(lVar18 + 0x48));
            if (uVar4 != uVar5) goto LAB_109efa3a0;
          }
        }
        else if (*(int *)(lVar17 + 0x58) != *(int *)(lVar9 + 0x58)) goto LAB_109efa3a0;
        uVar15 = (ulong)((int)uVar15 + 1);
        lVar17 = plVar14[uVar15];
      } while (lVar17 != 0);
      lVar9 = plVar13[uVar15];
    }
LAB_109efa728:
    if (lVar9 != 0) {
      uVar16 = uVar16 & 0xfffffff7;
    }
    if (((uVar16 ^ 0xffffffff) & 0xc) != 0) {
      return (undefined1 *)0x2;
    }
  }
  else {
    if (lVar6 != lVar8) {
      return (undefined1 *)0x2;
    }
LAB_109efa408:
    uVar15 = 1;
  }
  uVar16 = (uint)uVar15;
  lVar6 = plVar14[uVar15];
  while (lVar6 != 0) {
    uVar16 = (uint)uVar15;
    lVar8 = lVar6;
    uVar11 = uVar16;
    if (lVar6 != plVar13[uVar15]) goto LAB_109efa47c;
    uVar16 = uVar16 + 1;
    uVar15 = (ulong)uVar16;
    lVar6 = plVar14[uVar15];
  }
  bVar3 = true;
LAB_109efa438:
  lVar10 = plVar13[uVar15];
  lVar8 = lVar10;
  uVar11 = uVar16;
  while (lVar8 != 0) {
    uVar11 = uVar11 + 1;
    if (*(int *)(lVar8 + 0x28) == 3 || *(int *)(lVar8 + 0x28) == 5) {
      return (undefined1 *)0x2;
    }
    lVar8 = plVar13[uVar11];
  }
  if (bVar3) {
    uVar11 = 0xe;
  }
  else {
    uVar11 = 0xe;
    do {
      uVar16 = uVar16 + 1;
      lVar8 = plVar13[uVar15];
      if (lVar8 == 0) {
        lVar10 = 0;
        uVar11 = uVar11 & 0xfffffffb;
        goto LAB_109efa5ac;
      }
      if (*(int *)(lVar6 + 0x28) - 1U < 2) {
        if (*(int *)(lVar6 + 0x28) == 2) {
          uVar7 = uVar11 & 0xfffffff7;
          bVar3 = *(int *)(lVar8 + 0x28) == 2;
LAB_109efa554:
          if (!bVar3) {
            uVar11 = uVar7;
          }
        }
        else if (*(int *)(lVar8 + 0x28) == 2) {
          uVar11 = uVar11 & 0xfffffffb;
        }
        else {
          lVar10 = **(long **)(lVar6 + 0x70);
          if ((*(int *)(lVar10 + 0x18) != 5) ||
             (lVar17 = **(long **)(lVar8 + 0x70), *(int *)(lVar17 + 0x18) != 5)) {
            uVar7 = uVar11 & 0xfffffff3;
            bVar3 = *(long **)(lVar6 + 0x70) == *(long **)(lVar8 + 0x70);
            goto LAB_109efa554;
          }
          uVar15 = (ulong)*(byte *)(lVar10 + 0x45);
          FUN_109ef9814(uVar15,*(undefined8 *)(lVar10 + 0x48));
          uVar4 = (ulong)*(byte *)(lVar17 + 0x45);
          FUN_109ef9814(uVar4,*(undefined8 *)(lVar17 + 0x48));
          if (uVar15 != uVar4) {
            return (undefined1 *)0x0;
          }
        }
      }
      else if (*(int *)(lVar6 + 0x58) != *(int *)(lVar8 + 0x58)) {
        return (undefined1 *)0x0;
      }
      lVar6 = plVar14[uVar16];
      uVar15 = (ulong)uVar16;
    } while (lVar6 != 0);
    lVar10 = plVar13[uVar15];
  }
LAB_109efa5ac:
  if (lVar10 != 0) {
    uVar11 = uVar11 & 0xfffffff7;
  }
  return (undefined1 *)(ulong)(uVar11 | ((uVar11 ^ 0xffffffff) & 0xc) == 0);
LAB_109efa47c:
  do {
    uVar11 = uVar11 + 1;
    if (*(int *)(lVar8 + 0x28) == 3 || *(int *)(lVar8 + 0x28) == 5) {
      return (undefined1 *)0x2;
    }
    lVar8 = plVar14[uVar11];
  } while (plVar14[uVar11] != 0);
  bVar3 = false;
  goto LAB_109efa438;
}



/* Entry: 109efa8e8; end: 109efaa23;  */

byte FUN_109efa8e8(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  byte abStack_88 [8];
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  uVar1 = param_1;
  func_0x000109ef9690();
  if ((uVar1 & 1) == 0) {
    abStack_88[0] = 0;
    for (lStack_60 = *(long *)(param_1 + 0x10); *(int *)(lStack_60 + 0x10) != 3;
        lStack_60 = *(long *)(lStack_60 + 0x18)) {
    }
    uStack_68 = *(undefined8 *)(*(long *)(lStack_60 + 0x20) + 0x18);
    uStack_70 = 0;
    plVar6 = *(long **)(param_1 + 0x90);
    if (plVar6 == (long *)(param_1 + 0x88)) {
      abStack_88[0] = 0;
    }
    else {
      do {
        plVar7 = (long *)plVar6[1];
        uStack_78 = plVar6[-1];
        if ((((uStack_78 & 1) == 0) &&
            (lStack_58 = *(long *)(uStack_78 + 0x10), lStack_58 != *(long *)(param_1 + 0x10))) &&
           (*(int *)(uStack_78 + 0x18) != 8)) {
          uStack_80 = 2;
          lVar5 = *(long *)plVar6[2];
          if ((lVar5 != 0 && *(int *)(lVar5 + 0x18) == 1) &&
             (lVar2 = lVar5, FUN_109efb850(lVar5,abStack_88), lVar2 != lVar5)) {
            lVar4 = *plVar6;
            plVar3 = (long *)plVar6[1];
            *(long **)(lVar4 + 8) = plVar3;
            *plVar3 = lVar4;
            *plVar6 = 0;
            plVar3 = (long *)(lVar2 + 0x88);
            lVar4 = *plVar3;
            plVar6[1] = (long)plVar3;
            plVar6[2] = lVar2 + 0x80;
            *plVar6 = lVar4;
            *(long **)(lVar4 + 8) = plVar6;
            *plVar3 = (long)plVar6;
            func_0x000109ef9690(lVar5);
            abStack_88[0] = 1;
          }
        }
        plVar6 = plVar7;
      } while (plVar7 != (long *)(param_1 + 0x88));
    }
  }
  else {
    abStack_88[0] = 1;
  }
  return abStack_88[0] & 1;
}



/* Entry: 109efaa24; end: 109efaab7;  */

uint FUN_109efaa24(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    do {
      plVar6 = *(long **)(lVar4 + 0x20);
      plVar3 = (long *)*plVar6;
      if (plVar3 != (long *)0x0) {
        do {
          plVar2 = plVar6;
          plVar1 = (long *)0x0;
          if (*plVar3 != 0) {
            plVar1 = plVar3;
          }
          do {
            plVar6 = plVar1;
            if ((int)plVar2[3] == 1) {
              FUN_109efa8e8();
              uVar5 = uVar5 | (uint)plVar2;
            }
            if (plVar6 == (long *)0x0) goto LAB_109efaa8c;
            plVar3 = (long *)*plVar6;
            plVar2 = plVar6;
            plVar1 = (long *)0x0;
          } while (plVar3 == (long *)0x0);
        } while( true );
      }
LAB_109efaa8c:
      FUN_109ecc3f8();
    } while (lVar4 != 0);
  }
  return uVar5 & 1;
}



/* Entry: 109efaab8; end: 109efb7cf;  */

ulong FUN_109efaab8(long param_1)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined1 uVar6;
  byte bVar7;
  ushort uVar8;
  bool bVar9;
  long *plVar10;
  undefined *puVar11;
  int iVar12;
  uint uVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long lVar26;
  undefined *puVar27;
  undefined8 uVar28;
  uint uVar29;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long lStack_128;
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
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_130 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
  uStack_138 = 0;
  lVar26 = *(long *)(param_1 + 0x30);
  lStack_128 = param_1;
  if (lVar26 != 0) {
    uVar29 = 0;
    do {
      plVar25 = *(long **)(lVar26 + 0x20);
      plVar14 = (long *)*plVar25;
      if (plVar14 != (long *)0x0) {
        do {
          plVar20 = (long *)0x0;
          plVar10 = plVar25;
          if (*plVar14 != 0) {
            plVar20 = plVar14;
          }
          do {
            plVar25 = plVar20;
            lStack_148 = 2;
            iVar2 = (int)plVar10[3];
            plStack_140 = plVar10;
            if (iVar2 == 4) {
              iVar2 = (int)plVar10[5];
              if (iVar2 == 0x66) {
                lVar22 = *(long *)plVar10[0x13];
                if (lVar22 != 0 && *(int *)(lVar22 + 0x18) == 1) {
                  uVar18 = *(uint *)((long)plVar10 + 0x54);
                  if ((*(uint *)(lVar22 + 0x2c) & (uVar18 ^ 0xffffffff)) == 0) {
                    plVar14 = (long *)*plStack_130;
                    FUN_109f6600c(plVar14,0x50,8);
                    if (plVar14 != (long *)0x0) {
                      plVar14[7] = 0;
                      plVar14[6] = 0;
                      plVar14[9] = 0;
                      plVar14[8] = 0;
                      plVar14[3] = 0;
                      plVar14[2] = 0;
                      plVar14[5] = 0;
                      plVar14[4] = 0;
                      plVar14[1] = 0;
                      *plVar14 = 0;
                    }
                    *(undefined4 *)(plVar14 + 3) = 5;
                    plVar14[1] = 0;
                    plVar14[2] = 0;
                    plVar20 = plVar14 + 5;
                    *plVar14 = 0;
                    FUN_109ecb048(plVar14,plVar20,1,1);
                    plVar14[9] = 1;
                    FUN_109ecb4f0(2,plVar10,plVar14);
                    lStack_148 = 3;
                    plStack_140 = plVar14;
                    if ((*(uint *)(lVar22 + 0x2c) & uVar18) == 0) {
                      uVar28 = 3;
                      goto LAB_109efb37c;
                    }
                  }
                  else {
                    if ((*(uint *)(lVar22 + 0x2c) & uVar18) != 0) goto joined_r0x000109efb758;
                    uVar28 = 2;
                    plVar14 = plVar10;
LAB_109efb37c:
                    plVar24 = (long *)*plStack_130;
                    plStack_140 = plVar14;
                    FUN_109f6600c(plVar24,0x50,8);
                    if (plVar24 != (long *)0x0) {
                      plVar24[7] = 0;
                      plVar24[6] = 0;
                      plVar24[9] = 0;
                      plVar24[8] = 0;
                      plVar24[3] = 0;
                      plVar24[2] = 0;
                      plVar24[5] = 0;
                      plVar24[4] = 0;
                      plVar24[1] = 0;
                      *plVar24 = 0;
                    }
                    *(undefined4 *)(plVar24 + 3) = 5;
                    plVar24[1] = 0;
                    plVar24[2] = 0;
                    plVar20 = plVar24 + 5;
                    *plVar24 = 0;
                    FUN_109ecb048(plVar24,plVar20,1,1);
                    plVar24[9] = 0;
                    FUN_109ecb4f0(uVar28,plVar14,plVar24);
                    plStack_140 = plVar24;
                  }
                  lStack_148 = 3;
                  plVar14 = plVar10 + 6;
                  if ((long *)plVar10[8] + -1 != plVar14) {
                    plVar10 = (long *)plVar10[8];
                    do {
                      lVar22 = *plVar10;
                      plVar24 = (long *)plVar10[1];
                      *(long **)(lVar22 + 8) = plVar24;
                      *plVar24 = lVar22;
                      plVar10[1] = (long)(plVar20 + 1);
                      plVar10[2] = (long)plVar20;
                      *plVar10 = 0;
                      lVar22 = plVar20[1];
                      *plVar10 = lVar22;
                      *(long **)(lVar22 + 8) = plVar10;
                      plVar20[1] = (long)plVar10;
                      plVar10 = plVar24;
                    } while (plVar24 + -1 != plVar14);
                  }
LAB_109efb4b4:
                  FUN_109ecb9c0(*plVar14);
LAB_109efb638:
                  uVar29 = 1;
                }
              }
              else if (iVar2 == 0x26f) {
                uVar8 = *(ushort *)((long)plVar10 + 0x54);
                uVar18 = (uint)uVar8;
                lVar21 = *(long *)plVar10[0x13];
                lVar22 = lVar21;
                if (*(int *)(lVar21 + 0x18) != 1) {
                  lVar22 = 0;
                }
                FUN_109efba58(lVar22,uVar8,1);
                if ((int)lVar22 != 0) {
                  plVar20 = plVar10 + 0x11;
                  lVar16 = *plVar20;
                  plVar14 = (long *)plVar10[0x17];
                  bVar5 = *(byte *)((long)plVar14 + 0x1d);
                  lVar21 = **(long **)(lVar21 + 0x50);
                  lVar22 = lVar21;
                  if (*(int *)(lVar21 + 0x18) != 1) {
                    lVar22 = 0;
                  }
                  uVar4 = *(undefined1 *)(*(long *)(lVar21 + 0x30) + 0xd);
                  uVar13 = *(uint *)(&UNK_10e06cc38 +
                                    (ulong)*(byte *)(*(long *)(lVar21 + 0x30) + 4) * 4);
                  plVar24 = (long *)plVar10[0x12];
                  *(long **)(lVar16 + 8) = plVar24;
                  *plVar24 = lVar16;
                  *plVar20 = 0;
                  plVar24 = (long *)(lVar22 + 0x88);
                  lVar21 = *plVar24;
                  plVar10[0x12] = (long)plVar24;
                  plVar10[0x13] = lVar22 + 0x80;
                  *plVar20 = lVar21;
                  *(long **)(lVar21 + 8) = plVar20;
                  *plVar24 = (long)plVar20;
                  uVar29 = 0;
                  if (uVar8 != 0) {
                    uVar29 = 0x20 - (int)LZCOUNT((uint)uVar8);
                  }
                  bVar7 = *(byte *)((long)plVar14 + 0x1c);
                  if (uVar29 != bVar7) {
                    uVar19 = 0;
                    uVar15 = 0;
                    uStack_f8 = 0;
                    uStack_100 = 0;
                    uStack_e8 = 0;
                    uStack_f0 = 0;
                    uStack_118 = 0;
                    uStack_120 = 0;
                    uStack_108 = 0;
                    uStack_110 = 0;
                    do {
                      if ((((-1 << (ulong)(uVar29 & 0x1f) ^ 0xffffffffU) & 0xffff) >>
                           (ulong)(uVar19 & 0x1f) & 1) != 0) {
                        *(uint *)((long)&uStack_120 + uVar15 * 4) = uVar19;
                        uVar15 = (ulong)((int)uVar15 + 1);
                      }
                      uVar19 = uVar19 + 1;
                    } while (uVar19 != 0x10);
                    lStack_a0 = 0;
                    lStack_88 = 0;
                    lStack_90 = 0;
                    lStack_a8 = 0;
                    lStack_b0 = 0;
                    plStack_98 = plVar14;
                    uVar29 = (uint)uVar15;
                    if (uVar29 == 0) {
                      bVar9 = true;
                    }
                    else {
                      uVar17 = 0;
                      uVar19 = uVar29;
                      if (0xf < uVar29) {
                        uVar19 = 0x10;
                      }
                      bVar9 = true;
                      do {
                        uVar3 = *(uint *)((long)&uStack_120 + uVar17 * 4);
                        bVar9 = (bool)(uVar17 == uVar3 & bVar9);
                        *(char *)((long)&lStack_90 + uVar17) = (char)uVar3;
                        uVar17 = uVar17 + 1;
                      } while (uVar19 != uVar17);
                    }
                    if ((uVar29 != bVar7) || (!bVar9)) {
                      uStack_d8 = 0;
                      uStack_e0 = 0;
                      uStack_d0 = 0;
                      uStack_b8 = 0;
                      uStack_c0 = 0;
                      plStack_c8 = plVar14;
                      if (uVar29 == *(byte *)((long)plVar14 + 0x1c)) {
                        if (uVar29 != 0) {
                          uVar17 = 0;
                          bVar9 = false;
                          do {
                            bVar9 = (bool)(uVar17 != *(byte *)((long)&uStack_c0 + uVar17) | bVar9);
                            uVar17 = uVar17 + 1;
                          } while (uVar15 != uVar17);
                          if (bVar9) goto LAB_109efb528;
                        }
                      }
                      else {
LAB_109efb528:
                        plVar20 = plStack_130;
                        FUN_109ecaef8(plStack_130,0x154);
                        plVar14 = plVar20 + 6;
                        FUN_109ecb048();
                        *(ushort *)((long)plVar20 + 0x2c) =
                             *(ushort *)((long)plVar20 + 0x2c) & 0xf000 |
                             (*(ushort *)((long)plVar20 + 0x2c) & 0xf006 | (ushort)(byte)uStack_138)
                             & 7 | (uStack_138._4_2_ & 0x1ff) << 3;
                        plVar20[0xb] = lStack_a8;
                        plVar20[10] = lStack_b0;
                        plVar20[0xd] = (long)plStack_98;
                        plVar20[0xc] = lStack_a0;
                        plVar20[0xf] = lStack_88;
                        plVar20[0xe] = lStack_90;
                        FUN_109ecb4f0(2,plVar10,plVar20);
                        lStack_148 = 3;
                        plStack_140 = plVar20;
                      }
                    }
                  }
                  plVar20 = plVar14;
                  if (uVar13 != bVar5) {
                    plVar20 = &lStack_148;
                    FUN_109efbbcc(plVar20,plVar14,uVar13);
                  }
                  plVar14 = &lStack_148;
                  FUN_109efc260(plVar14,plVar20,uVar4);
                  plVar24 = plVar10 + 0x15;
                  lVar22 = *plVar24;
                  plVar20 = (long *)plVar10[0x16];
                  *(long **)(lVar22 + 8) = plVar20;
                  *plVar20 = lVar22;
                  *plVar24 = 0;
                  plVar10[0x17] = (long)plVar14;
                  plVar14 = plVar14 + 1;
                  lVar22 = *plVar14;
                  *plVar24 = lVar22;
                  plVar10[0x16] = (long)plVar14;
                  *(long **)(lVar22 + 8) = plVar24;
                  *plVar14 = (long)plVar24;
                  *(undefined1 *)(plVar10 + 10) = uVar4;
                  func_0x000109eca5a4(uVar8,(uint)bVar5,uVar13);
                  *(uint *)((ushort *)((long)plVar10 + 0x54) +
                           (ulong)(byte)(&UNK_110b671aa)[(ulong)*(uint *)(plVar10 + 5) * 0x68] * 2 +
                           -2) = uVar18;
                  goto LAB_109efb638;
                }
              }
              else if (iVar2 == 0x112) {
                lVar21 = *(long *)plVar10[0x13];
                lVar22 = lVar21;
                if (*(int *)(lVar21 + 0x18) != 1) {
                  lVar22 = 0;
                }
                plVar14 = plVar10 + 6;
                plVar20 = plVar14;
                FUN_109ecc368(plVar14);
                FUN_109efba58(lVar22,plVar20,0);
                if ((int)lVar22 != 0) {
                  uVar4 = *(undefined1 *)((long)plVar10 + 0x4c);
                  bVar5 = *(byte *)((long)plVar10 + 0x4d);
                  lVar21 = **(long **)(lVar21 + 0x50);
                  lVar22 = lVar21;
                  if (*(int *)(lVar21 + 0x18) != 1) {
                    lVar22 = 0;
                  }
                  uVar6 = *(undefined1 *)(*(long *)(lVar21 + 0x30) + 0xd);
                  uVar29 = *(uint *)(&UNK_10e06cc38 +
                                    (ulong)*(byte *)(*(long *)(lVar21 + 0x30) + 4) * 4);
                  plVar20 = (long *)plVar10[0x12];
                  plVar24 = plVar10 + 0x11;
                  lVar21 = *plVar24;
                  *(long **)(lVar21 + 8) = plVar20;
                  *plVar20 = lVar21;
                  *plVar24 = 0;
                  plVar20 = (long *)(lVar22 + 0x88);
                  lVar21 = *plVar20;
                  plVar10[0x12] = (long)plVar20;
                  plVar10[0x13] = lVar22 + 0x80;
                  *plVar24 = lVar21;
                  *(long **)(lVar21 + 8) = plVar24;
                  *plVar20 = (long)plVar24;
                  *(char *)((long)plVar10 + 0x4d) = (char)uVar29;
                  *(undefined1 *)((long)plVar10 + 0x4c) = uVar6;
                  *(undefined1 *)(plVar10 + 10) = uVar6;
                  lStack_148 = 3;
                  plVar20 = plVar14;
                  plStack_140 = plVar10;
                  if (uVar29 != bVar5) {
                    plVar20 = &lStack_148;
                    FUN_109efbbcc(plVar20,plVar14);
                  }
                  plVar10 = &lStack_148;
                  FUN_109efc260(plVar10,plVar20,uVar4);
                  func_0x000109ecc1d0(plVar14,plVar10,*plVar10);
                  goto LAB_109efb638;
                }
              }
            }
            else if (iVar2 == 1) {
              iVar2 = (int)plVar10[5];
              if (iVar2 != 0) {
                lVar22 = *(long *)plVar10[10];
                iVar12 = *(int *)(lVar22 + 0x18);
                if (lVar22 != 0 && iVar12 == 1) {
                  if (*(uint *)(lVar22 + 0x2c) != *(uint *)((long)plVar10 + 0x2c)) {
                    *(uint *)((long)plVar10 + 0x2c) =
                         *(uint *)((long)plVar10 + 0x2c) & *(uint *)(lVar22 + 0x2c);
                    uVar29 = 1;
                  }
                }
                if (iVar2 == 5) {
                  if (*(int *)((long)plVar10 + 0x5c) != 0 && (lVar22 != 0 && iVar12 == 1)) {
                    FUN_109f1135c(lVar22,0,&uStack_120,&lStack_b0);
                    if ((int)lVar22 == 0) {
LAB_109efb024:
                      uVar18 = 0;
                    }
                    else {
                      uVar18 = *(uint *)((long)plVar10 + 0x5c);
                      if ((uint)uStack_120 < uVar18) goto LAB_109efb024;
                      uVar13 = 0;
                      if (uVar18 != 0) {
                        uVar13 = (uint)lStack_b0 / uVar18;
                      }
                      if ((uint)lStack_b0 - uVar13 * uVar18 != (int)plVar10[0xc])
                      goto LAB_109efb024;
                      *(undefined4 *)((long)plVar10 + 0x5c) = 0;
                      *(undefined4 *)(plVar10 + 0xc) = 0;
                      uVar18 = 1;
                    }
                    lVar22 = *(long *)plVar10[10];
                    iVar12 = *(int *)(lVar22 + 0x18);
                  }
                  else {
                    uVar18 = 0;
                  }
                  if (iVar12 == 1) {
                    if ((((*(int *)((long)plVar10 + 0x5c) != 0) ||
                         (lVar21 = *(long *)(lVar22 + 0x30), *(char *)(lVar21 + 4) != '\x11')) ||
                        ((lVar16 = lVar21, FUN_109eca23c(), (int)lVar16 == 0 ||
                         (((int)(*(long **)(lVar21 + 0x30))[3] != 0 ||
                          (lVar21 = **(long **)(lVar21 + 0x30), plVar10[6] != lVar21)))))) ||
                       ((int)plVar10[0xb] != *(int *)(lVar21 + 0x28))) {
                      lVar21 = *(long *)(lVar22 + 0x30);
                      puVar27 = (undefined *)plVar10[6];
                      while( true ) {
                        uVar13 = *(uint *)(lVar21 + 4);
                        if ((uVar13 & 0xff) != 0x13) break;
                        if (puVar27[4] != '\x13') goto LAB_109efb22c;
                        lVar16 = lVar21;
                        FUN_109eca23c();
                        puVar11 = puVar27;
                        FUN_109eca23c();
                        if ((int)lVar16 != (int)puVar11) goto LAB_109efb22c;
                        func_0x000109eca118();
                        func_0x000109eca118();
                      }
                      if ((uVar13 & 0xff) == 0xd) {
                        if (puVar27 == &UNK_10e05f020) {
LAB_109efb654:
                          plVar14 = plVar10 + 0x10;
                          if ((long *)plVar10[0x12] + -1 != plVar14) {
                            plVar20 = (long *)(lVar22 + 0x88);
                            plVar10 = (long *)plVar10[0x12];
                            do {
                              lVar21 = *plVar10;
                              plVar24 = (long *)plVar10[1];
                              *(long **)(lVar21 + 8) = plVar24;
                              *plVar24 = lVar21;
                              plVar10[1] = (long)plVar20;
                              plVar10[2] = lVar22 + 0x80;
                              *plVar10 = 0;
                              lVar21 = *plVar20;
                              *plVar10 = lVar21;
                              *(long **)(lVar21 + 8) = plVar10;
                              *plVar20 = (long)plVar10;
                              plVar10 = plVar24;
                            } while (plVar24 + -1 != plVar14);
                          }
                          FUN_109ecb9c0(*plVar14);
                          FUN_109efb990(lVar22);
                          uVar18 = 1;
                          goto LAB_109efb754;
                        }
                        if ((uVar13 & 0xffff) != 0x140d) {
                          puVar11 = (undefined *)(ulong)(uVar13 >> 0x10 & 0xf);
                          FUN_109ec74bc(puVar11,uVar13 >> 0x15 & 1,uVar13 >> 8 & 0xff);
                          if (puVar27 == puVar11) goto LAB_109efb654;
                        }
                      }
                      goto LAB_109efb22c;
                    }
                    plVar14 = (long *)*plStack_130;
                    FUN_109f6600c(plVar14,0xa0,8);
                    if (plVar14 != (long *)0x0) {
                      plVar14[0x11] = 0;
                      plVar14[0x10] = 0;
                      plVar14[0x13] = 0;
                      plVar14[0x12] = 0;
                      plVar14[0xd] = 0;
                      plVar14[0xc] = 0;
                      plVar14[0xf] = 0;
                      plVar14[0xe] = 0;
                      plVar14[9] = 0;
                      plVar14[8] = 0;
                      plVar14[0xb] = 0;
                      plVar14[10] = 0;
                      plVar14[5] = 0;
                      plVar14[4] = 0;
                      plVar14[7] = 0;
                      plVar14[6] = 0;
                      plVar14[1] = 0;
                      *plVar14 = 0;
                      plVar14[3] = 0;
                      plVar14[2] = 0;
                    }
                    *(undefined4 *)(plVar14 + 3) = 1;
                    plVar14[1] = 0;
                    plVar14[2] = 0;
                    *plVar14 = 0;
                    *(undefined4 *)(plVar14 + 5) = 4;
                    plVar14[10] = 0;
                    *(undefined4 *)((long)plVar14 + 0x2c) = *(undefined4 *)(lVar22 + 0x2c);
                    plVar14[6] = **(long **)(*(long *)(lVar22 + 0x30) + 0x30);
                    plVar14[7] = 0;
                    plVar14[8] = 0;
                    plVar14[9] = 0;
                    plVar14[10] = lVar22 + 0x80;
                    *(undefined4 *)(plVar14 + 0xb) = 0;
                    FUN_109ecb048(plVar14,plVar14 + 0x10,*(undefined1 *)(lVar22 + 0x9c),
                                  *(undefined1 *)(lVar22 + 0x9d));
                    FUN_109ecb4f0(2,plVar10,plVar14);
                    lStack_148 = 3;
                    if ((long *)plVar10[0x12] + -1 != plVar10 + 0x10) {
                      plVar20 = plVar14 + 0x11;
                      plVar24 = (long *)plVar10[0x12];
                      do {
                        lVar22 = *plVar24;
                        plVar23 = (long *)plVar24[1];
                        *(long **)(lVar22 + 8) = plVar23;
                        *plVar23 = lVar22;
                        plVar24[1] = (long)plVar20;
                        plVar24[2] = (long)(plVar14 + 0x10);
                        *plVar24 = 0;
                        lVar22 = *plVar20;
                        *plVar24 = lVar22;
                        *(long **)(lVar22 + 8) = plVar24;
                        *plVar20 = (long)plVar24;
                        plVar24 = plVar23;
                      } while (plVar23 + -1 != plVar10 + 0x10);
                    }
                    plStack_140 = plVar14;
                    func_0x000109ef9690(plVar10);
                    uVar18 = 1;
                  }
                  else {
LAB_109efb22c:
                    uVar13 = 0;
                    if ((int)plVar10[5] != 0) {
                      lVar22 = *(long *)plVar10[10];
                      if ((*(int *)(lVar22 + 0x18) == 1) && (*(int *)(lVar22 + 0x28) == 5)) {
                        if (*(int *)((long)plVar10 + 0x5c) == 0) {
                          *(undefined4 *)((long)plVar10 + 0x5c) = *(undefined4 *)(lVar22 + 0x5c);
                          *(undefined4 *)(plVar10 + 0xc) = *(undefined4 *)(lVar22 + 0x60);
                        }
                        lVar21 = *(long *)(lVar22 + 0x50);
                        plVar20 = plVar10 + 8;
                        lVar22 = *plVar20;
                        plVar14 = (long *)plVar10[9];
                        *(long **)(lVar22 + 8) = plVar14;
                        *plVar14 = lVar22;
                        *plVar20 = 0;
                        plVar10[10] = lVar21;
                        plVar14 = (long *)(lVar21 + 8);
                        lVar22 = *plVar14;
                        *plVar20 = lVar22;
                        plVar10[9] = (long)plVar14;
                        *(long **)(lVar22 + 8) = plVar20;
                        *plVar14 = (long)plVar20;
                        uVar13 = 1;
                      }
                      else {
                        uVar13 = 0;
                      }
                    }
                    uVar18 = uVar18 | uVar13;
                    plVar14 = plVar10;
                    FUN_109ef94e4();
                    if (((int)plVar14 != 0) && (*(int *)((long)plVar10 + 0x5c) == 0)) {
                      lVar22 = *(long *)plVar10[10];
                      if (*(int *)(lVar22 + 0x28) == 3) {
                        lVar21 = plVar10[0xb];
                        FUN_109ef9984();
                        bVar9 = (int)lVar21 == (int)lVar22;
                      }
                      else if (*(int *)(lVar22 + 0x28) == 1) {
                        bVar9 = (int)plVar10[0xb] ==
                                *(int *)(*(long *)(**(long **)(lVar22 + 0x50) + 0x30) + 0x28);
                      }
                      else {
                        bVar9 = false;
                      }
                      plVar14 = (long *)plVar10[0x12];
                      while (plVar20 = plVar14, plVar20 != plVar10 + 0x11) {
                        plVar14 = (long *)plVar20[1];
                        if ((*(int *)(plVar20[-1] + 0x18) != 1) ||
                           (*(int *)(plVar20[-1] + 0x28) != 3 || bVar9)) {
                          lVar22 = plVar10[10];
                          lVar21 = *plVar20;
                          *(long **)(lVar21 + 8) = plVar14;
                          *plVar14 = lVar21;
                          *plVar20 = 0;
                          plVar20[2] = lVar22;
                          plVar24 = (long *)(lVar22 + 8);
                          lVar22 = *plVar24;
                          *plVar20 = lVar22;
                          plVar20[1] = (long)plVar24;
                          *(long **)(lVar22 + 8) = plVar20;
                          *plVar24 = (long)plVar20;
                          uVar18 = 1;
                        }
                      }
                      func_0x000109ef9690();
                      uVar18 = (uint)plVar10 | uVar18;
                    }
                  }
LAB_109efb754:
                  uVar29 = uVar18 | uVar29;
                }
                else if (iVar2 == 3) {
                  lVar21 = lVar22;
                  if (iVar12 != 1) {
                    lVar21 = 0;
                  }
                  lVar16 = *(long *)plVar10[0xe];
                  if (*(int *)(lVar16 + 0x18) == 5) {
                    uVar17 = *(ulong *)(lVar16 + 0x48);
                    uVar18 = (*(byte *)(lVar16 + 0x45) & 0xaaaaaaaa) >> 1 |
                             (*(byte *)(lVar16 + 0x45) & 0x55555555) << 1;
                    uVar18 = (uVar18 & 0xcccccccc) >> 2 | (uVar18 & 0x33333333) << 2;
                    uVar18 = (uint)LZCOUNT((uVar18 >> 4 | (uVar18 & 0xf0f0f0f) << 4) << 0x18);
                    uVar15 = (long)(int)uVar17;
                    if (uVar18 != 5) {
                      uVar15 = uVar17;
                    }
                    uVar1 = (long)(short)uVar17;
                    if (uVar18 != 4) {
                      uVar1 = uVar15;
                    }
                    uVar15 = -(uVar17 & 1);
                    if (uVar18 != 0) {
                      uVar15 = (long)(char)uVar17;
                    }
                    if (uVar18 < 4) {
                      uVar1 = uVar15;
                    }
                    if (uVar1 == 0) {
                      if (((*(int *)(lVar22 + 0x28) == 5) && (*(int *)(lVar22 + 0x5c) == 0)) &&
                         (lVar21 = lVar22, FUN_109ef94e4(), (int)lVar21 != 0)) {
                        lVar22 = **(long **)(lVar22 + 0x50);
                      }
                      plVar14 = plVar10 + 0x10;
                      if ((long *)plVar10[0x12] + -1 != plVar14) {
                        plVar20 = (long *)(lVar22 + 0x88);
                        plVar10 = (long *)plVar10[0x12];
                        do {
                          lVar21 = *plVar10;
                          plVar24 = (long *)plVar10[1];
                          *(long **)(lVar21 + 8) = plVar24;
                          *plVar24 = lVar21;
                          plVar10[1] = (long)plVar20;
                          plVar10[2] = lVar22 + 0x80;
                          *plVar10 = 0;
                          lVar21 = *plVar20;
                          *plVar10 = lVar21;
                          *(long **)(lVar21 + 8) = plVar10;
                          *plVar20 = (long)plVar10;
                          plVar10 = plVar24;
                        } while (plVar24 + -1 != plVar14);
                      }
                      goto LAB_109efb4b4;
                    }
                  }
                  if ((*(uint *)(lVar21 + 0x28) | 2) == 3) {
                    *(byte *)(plVar10 + 0xf) = *(byte *)(plVar10 + 0xf) & *(byte *)(lVar22 + 0x78);
                    plVar14 = &lStack_148;
                    FUN_109ece1b0(plVar14,0x11d,*(undefined8 *)(lVar22 + 0x70));
                    *(undefined4 *)(plVar10 + 5) = *(undefined4 *)(lVar21 + 0x28);
                    lVar22 = *(long *)(lVar22 + 0x50);
                    plVar20 = (long *)plVar10[9];
                    plVar24 = plVar10 + 8;
                    lVar21 = *plVar24;
                    *(long **)(lVar21 + 8) = plVar20;
                    *plVar20 = lVar21;
                    *plVar24 = 0;
                    plVar20 = (long *)(lVar22 + 8);
                    lVar21 = *plVar20;
                    *plVar24 = lVar21;
                    *plVar20 = (long)plVar24;
                    plVar23 = plVar10 + 0xc;
                    lVar16 = *plVar23;
                    plVar10[10] = lVar22;
                    plVar10[9] = (long)plVar20;
                    *(long **)(lVar21 + 8) = plVar24;
                    plVar20 = (long *)plVar10[0xd];
                    *(long **)(lVar16 + 8) = plVar20;
                    *plVar20 = lVar16;
                    *plVar23 = 0;
                    plVar10[0xe] = (long)plVar14;
                    plVar14 = plVar14 + 1;
                    lVar22 = *plVar14;
                    *plVar23 = lVar22;
                    plVar10[0xd] = (long)plVar14;
                    *(long **)(lVar22 + 8) = plVar23;
                    *plVar14 = (long)plVar23;
                    goto LAB_109efb638;
                  }
                }
              }
            }
            else if ((iVar2 == 0) &&
                    (uVar15 = (ulong)(byte)(&UNK_110b78540)[(ulong)*(uint *)(plVar10 + 5) * 0x68],
                    uVar15 != 0)) {
              uVar18 = 0;
              plVar10 = plVar10 + 0xb;
              do {
                lVar22 = *(long *)plVar10[2];
                if ((*(int *)(lVar22 + 0x18) == 1) && (*(int *)(lVar22 + 0x28) == 5)) {
                  lVar21 = *(long *)(lVar22 + 0x50);
                  lVar22 = *plVar10;
                  plVar14 = (long *)plVar10[1];
                  *(long **)(lVar22 + 8) = plVar14;
                  *plVar14 = lVar22;
                  *plVar10 = 0;
                  plVar10[2] = lVar21;
                  plVar14 = (long *)(lVar21 + 8);
                  lVar22 = *plVar14;
                  *plVar10 = lVar22;
                  plVar10[1] = (long)plVar14;
                  *(long **)(lVar22 + 8) = plVar10;
                  *plVar14 = (long)plVar10;
                  uVar18 = 1;
                }
                plVar10 = plVar10 + 6;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
              uVar29 = uVar18 | uVar29;
            }
joined_r0x000109efb758:
            if (plVar25 == (long *)0x0) goto LAB_109efb75c;
            plVar14 = (long *)*plVar25;
            plVar20 = (long *)0x0;
            plVar10 = plVar25;
          } while (plVar14 == (long *)0x0);
        } while( true );
      }
LAB_109efb75c:
      FUN_109ecc434();
    } while (lVar26 != 0);
    if ((uVar29 & 1) != 0) {
      uVar15 = 1;
      uVar29 = 3;
      goto LAB_109efb788;
    }
  }
  uVar15 = 0;
  uVar29 = 0xfffffff7;
LAB_109efb788:
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & uVar29;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return uVar15;
  }
  ___stack_chk_fail();
  plVar14 = *(long **)(uVar15 + 0x178);
  plVar25 = (long *)**(long **)(uVar15 + 0x178);
  do {
    if (plVar25 == (long *)0x0) {
      uVar29 = 0;
LAB_109efb804:
      return (ulong)(uVar29 & 1);
    }
    uVar15 = plVar14[6];
    if (uVar15 != 0) {
      FUN_109efaab8();
      do {
        uVar29 = (uint)uVar15;
        plVar14 = (long *)*plVar14;
        plVar25 = (long *)*plVar14;
        while( true ) {
          if (plVar25 == (long *)0x0) goto LAB_109efb804;
          lVar26 = plVar14[6];
          if (lVar26 != 0) break;
          plVar14 = plVar25;
          plVar25 = (long *)*plVar25;
        }
        FUN_109efaab8();
        uVar15 = (ulong)((uint)lVar26 | uVar29);
      } while( true );
    }
    plVar14 = plVar25;
    plVar25 = (long *)*plVar25;
  } while( true );
}



/* Entry: 109efb7d0; end: 109efb84f;  */

uint FUN_109efb7d0(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x178);
  plVar1 = (long *)**(long **)(param_1 + 0x178);
  do {
    if (plVar1 == (long *)0x0) {
      uVar4 = 0;
LAB_109efb804:
      return uVar4 & 1;
    }
    uVar2 = plVar5[6];
    if (uVar2 != 0) {
      FUN_109efaab8();
      do {
        uVar4 = (uint)uVar2;
        plVar5 = (long *)*plVar5;
        plVar1 = (long *)*plVar5;
        while( true ) {
          if (plVar1 == (long *)0x0) goto LAB_109efb804;
          lVar3 = plVar5[6];
          if (lVar3 != 0) break;
          plVar5 = plVar1;
          plVar1 = (long *)*plVar1;
        }
        FUN_109efaab8();
        uVar2 = (ulong)((uint)lVar3 | uVar4);
      } while( true );
    }
    plVar5 = plVar1;
    plVar1 = (long *)*plVar1;
  } while( true );
}



/* Entry: 109efb850; end: 109efb98f;  */

long FUN_109efb850(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x30)) {
    return param_1;
  }
  lVar2 = *(long *)(param_2 + 0x20);
  func_0x000109ecaf70(lVar2,*(undefined4 *)(param_1 + 0x28));
  iVar1 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(lVar2 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  if (iVar1 == 0) {
    plVar4 = *(long **)(param_1 + 0x38);
    lVar3 = 0x38;
  }
  else {
    plVar4 = *(long **)(param_1 + 0x50);
    lVar3 = *plVar4;
    if (lVar3 == 0 || *(int *)(lVar3 + 0x18) != 1) {
      *(undefined8 *)(lVar2 + 0x38) = 0;
      *(undefined8 *)(lVar2 + 0x40) = 0;
      lVar3 = 0x50;
      *(undefined8 *)(lVar2 + 0x48) = 0;
    }
    else {
      FUN_109efb850(lVar3,param_2);
      *(undefined8 *)(lVar2 + 0x40) = 0;
      *(undefined8 *)(lVar2 + 0x48) = 0;
      plVar4 = (long *)(lVar3 + 0x80);
      *(undefined8 *)(lVar2 + 0x38) = 0;
      lVar3 = 0x50;
    }
  }
  *(long **)(lVar2 + lVar3) = plVar4;
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < 3) {
    if ((iVar1 == 0) || (iVar1 != 1)) goto LAB_109efb954;
  }
  else if (iVar1 != 3) {
    if (iVar1 == 4) {
      *(undefined4 *)(lVar2 + 0x58) = *(undefined4 *)(param_1 + 0x58);
    }
    else {
      *(undefined4 *)(lVar2 + 0x58) = *(undefined4 *)(param_1 + 0x58);
      *(undefined4 *)(lVar2 + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
      *(undefined4 *)(lVar2 + 0x60) = *(undefined4 *)(param_1 + 0x60);
    }
    goto LAB_109efb954;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x68) = 0;
  *(undefined8 *)(lVar2 + 0x70) = uVar5;
LAB_109efb954:
  FUN_109ecb048(lVar2,lVar2 + 0x80,*(undefined1 *)(param_1 + 0x9c),*(undefined1 *)(param_1 + 0x9d));
  FUN_109ecb4f0(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),lVar2);
  *(undefined8 *)(param_2 + 8) = 3;
  *(long *)(param_2 + 0x10) = lVar2;
  return lVar2;
}



/* Entry: 109efb990; end: 109efba57;  */

void FUN_109efb990(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x90);
  do {
    if (lVar4 == param_1 + 0x88) {
      return;
    }
    uVar3 = *(ulong *)(lVar4 + -8);
    if (((uVar3 & 1) == 0) && (*(int *)(uVar3 + 0x18) == 1)) {
      iVar1 = *(int *)(uVar3 + 0x28);
      if (iVar1 < 4) {
        if (iVar1 - 1U < 2) {
          uVar2 = *(undefined8 *)(param_1 + 0x30);
          func_0x000109eca118();
LAB_109efba2c:
          *(undefined8 *)(uVar3 + 0x30) = uVar2;
        }
        else if (iVar1 == 3) {
          uVar2 = *(undefined8 *)(param_1 + 0x30);
          goto LAB_109efba2c;
        }
LAB_109efba30:
        FUN_109efb990(uVar3);
      }
      else {
        if (iVar1 == 4) {
          uVar2 = *(undefined8 *)
                   (*(long *)(*(long *)(param_1 + 0x30) + 0x30) +
                   (ulong)*(uint *)(uVar3 + 0x58) * 0x30);
          goto LAB_109efba2c;
        }
        if (iVar1 != 5) goto LAB_109efba30;
      }
    }
    lVar4 = *(long *)(lVar4 + 8);
  } while( true );
}



/* Entry: 109efba58; end: 109efbbcb;  */

undefined8 *
FUN_109efba58(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  char cVar1;
  bool bVar2;
  ushort uVar3;
  undefined1 uVar4;
  uint uVar5;
  long lVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  undefined **ppuVar17;
  uint uVar18;
  undefined *puVar19;
  ulong uVar20;
  undefined4 *puVar21;
  byte bVar22;
  int iVar23;
  ulong uVar24;
  undefined *puVar25;
  undefined8 *unaff_x19;
  long *plVar26;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  undefined8 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 *in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined1 auStack_4d0 [1216];
  
  if (((*(int *)(param_1 + 5) != 5) || (*(int *)((long)param_1 + 0x5c) != 0)) ||
     (lVar16 = *(long *)param_1[10], lVar16 == 0 || *(int *)(lVar16 + 0x18) != 1)) {
    return (undefined8 *)0x0;
  }
  lVar16 = *(long *)(lVar16 + 0x30);
  if (*(byte *)(lVar16 + 0xd) < 2) {
    if (*(byte *)(lVar16 + 0xd) != 1) {
      return (undefined8 *)0x0;
    }
    uVar14 = *(uint *)(lVar16 + 4);
    if ((uVar14 & 0xf0) != 0) {
      return (undefined8 *)0x0;
    }
  }
  else {
    if (*(char *)(lVar16 + 0xe) != '\x01') {
      return (undefined8 *)0x0;
    }
    uVar14 = *(uint *)(lVar16 + 4);
    if (0xb < (uVar14 & 0xfc)) {
      return (undefined8 *)0x0;
    }
  }
  uVar24 = (ulong)uVar14;
  puVar19 = &UNK_10e06cbb4;
  puVar25 = (undefined *)
            ((ulong)(byte)(&UNK_10e06cbb4)[*(byte *)(param_1[6] + 4)] * 4 + 0x109efbaf8);
  ppuVar17 = (undefined **)0x1;
  uVar15 = (uint)param_3;
  uVar20 = unaff_x21;
  puVar10 = unaff_x23;
  puVar8 = unaff_x24;
  puVar12 = unaff_x29;
  uVar14 = 0xe06cbb4;
  switch(*(byte *)(param_1[6] + 4)) {
  case 0:
  case 1:
  case 2:
  case 0xc:
  case 0x15:
  case 0x1b:
  case 0x1c:
  case 0x2c:
  case 0x30:
  case 0x34:
  case 0x5c:
  case 0x80:
    ppuVar17 = (undefined **)0x20;
code_r0x000109efbb0c:
    break;
  case 3:
  case 7:
  case 8:
  case 0xe6:
  case 0xea:
    ppuVar17 = (undefined **)0x10;
  case 0x3c:
  case 0x50:
  case 0x54:
  case 0x60:
  case 100:
  case 0x68:
  case 0x98:
  case 0x9c:
    break;
  default:
  case 0x40:
  case 0x44:
  case 0xb0:
  case 0xe7:
  case 0xeb:
  case 0xf7:
    ppuVar17 = (undefined **)0x40;
code_r0x000109efbb00:
    break;
  case 5:
  case 6:
    ppuVar17 = (undefined **)0x8;
    break;
  case 0xb:
    break;
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x109efbbcc);
    (*pcVar7)();
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x22:
  case 0x2b:
    goto code_r0x000109efbb0c;
  case 0x19:
  case 0x1d:
  case 0x1e:
  case 0x38:
  case 0x48:
  case 0x4c:
    goto code_r0x000109efbb00;
  case 0x21:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x84:
  case 0x88:
  case 0x8c:
  case 0xb4:
  case 0xd8:
  case 0xe0:
    if ((uVar15 == 0) || (func_0x000109eca4f0(param_2,1,&UNK_10e06cbb4), (int)param_2 != 0)) {
      param_2 = (undefined8 *)0x1;
    }
    return param_2;
  case 0x90:
  case 0xa0:
  case 0xa4:
    goto code_r0x000109efbb38;
  case 0x94:
  case 0xa8:
  case 0xac:
  case 0xb8:
  case 0xbc:
  case 0xc0:
    goto code_r0x000109efbbf8;
  case 0xde:
    goto code_r0x000109efbc8c;
  case 0xe2:
    goto code_r0x000109efbd44;
  case 0xe4:
    goto code_r0x000109efbdb0;
  case 0xe8:
    goto code_r0x000109efbcf8;
  case 0xec:
    goto code_r0x000109efbe84;
  case 0xee:
    puVar12 = &stack0x00000050;
    register0x00000008 = (BADSPACEBASE *)auStack_4d0;
    ppuVar17 = &PTR__VTCompressionSessionEncodeFrameWithOutputHandler_11034b000;
    unaff_x19 = param_1;
    unaff_x22 = param_3;
    in_stack_00000050 = unaff_x29;
    in_stack_00000058 = unaff_x30;
code_r0x000109efbbf8:
    puVar12[-0xc] = *(undefined8 *)ppuVar17[0x1b8];
    bVar22 = *(byte *)((long)param_2 + 0x1d);
    uVar14 = (uint)*(byte *)((long)param_2 + 0x1c) * (uint)bVar22;
    *(uint *)((long)register0x00000008 + 4) = uVar14;
    *(uint *)((long)register0x00000008 + 8) = (uint)bVar22;
    uVar18 = 0;
    if (((ulong)param_3 & 0xffff) != 0) {
      uVar18 = uVar14 / (uVar15 & 0xffff);
    }
    *(ulong *)((long)register0x00000008 + 0x18) = (ulong)uVar18;
    uVar14 = uVar15;
    if (bVar22 <= uVar15) {
      uVar14 = (uint)bVar22;
    }
    unaff_x27 = (ulong)uVar14;
    *(uint *)((long)register0x00000008 + 0x3c) = uVar15;
    if (uVar14 <= uVar15 * uVar18) {
      unaff_x26 = 0;
      iVar23 = 0;
      unaff_x28 = 0;
      uVar5 = 0;
      if (uVar14 != 0) {
        uVar5 = (uVar15 * uVar18) / uVar14;
      }
      *(ulong *)((long)register0x00000008 + 0x20) = (ulong)uVar5;
      *(undefined8 **)((long)register0x00000008 + 0x10) = param_2;
      do {
        uVar20 = unaff_x26 * unaff_x27;
        unaff_x21 = (ulong)*(byte *)((long)param_2 + 0x1d);
        puVar19 = (undefined *)(ulong)*(byte *)((long)param_2 + 0x1c);
        uVar14 = (uint)*(byte *)((long)param_2 + 0x1d);
        if ((unaff_x28 & 0xffffffff) <= uVar20) {
          unaff_x28 = unaff_x28 & 0xffffffff;
          do {
            unaff_x28 = unaff_x28 + (long)puVar19 * unaff_x21;
          } while (unaff_x28 <= uVar20);
          iVar23 = (int)unaff_x28 - *(byte *)((long)param_2 + 0x1c) * uVar14;
        }
        uVar15 = (int)uVar20 - iVar23;
        *(uint *)((long)register0x00000008 + 0x2c) = uVar15;
        *(int *)((long)register0x00000008 + 0x30) = iVar23;
        uVar18 = 0;
        if (uVar14 != 0) {
          uVar18 = uVar15 / uVar14;
        }
        unaff_x24 = (undefined8 *)(ulong)uVar18;
        unaff_x20 = param_2;
code_r0x000109efbc8c:
        if ((int)puVar19 == 1) {
code_r0x000109efbc94:
          param_1 = unaff_x19;
          param_2 = unaff_x20;
          uVar20 = unaff_x21;
          puVar10 = unaff_x20;
          if (((ulong)unaff_x24 & 0xff) != 0) goto LAB_109efbca4;
        }
        else {
LAB_109efbca4:
          puVar8 = (undefined8 *)unaff_x19[3];
          FUN_109ecaef8(puVar8,0x154);
          unaff_x23 = puVar8 + 6;
          FUN_109ecb048();
          uVar3 = *(ushort *)((long)puVar8 + 0x2c) & 0xfffe | (ushort)*(byte *)(unaff_x19 + 2);
          *(ushort *)((long)puVar8 + 0x2c) = uVar3;
          *(ushort *)((long)puVar8 + 0x2c) =
               (*(ushort *)((long)unaff_x19 + 0x14) & 0x1ff) << 3 | uVar3 & 0xf007;
          puVar8[10] = 0;
          puVar8[0xb] = 0;
          uVar20 = unaff_x21;
          unaff_x25 = unaff_x24;
code_r0x000109efbcf8:
          unaff_x24 = unaff_x25;
          puVar8[0xc] = 0;
          puVar8[0xd] = unaff_x20;
          *(char *)(puVar8 + 0xe) = (char)unaff_x24;
          *(undefined8 *)((long)puVar8 + 0x71) = 0;
          puVar8[0xf] = 0;
          FUN_109ecb4f0(*unaff_x19,unaff_x19[1],puVar8);
          *unaff_x19 = 3;
          unaff_x19[1] = puVar8;
          unaff_x21 = (ulong)*(byte *)((long)unaff_x20 + 0x1d);
          param_1 = unaff_x19;
          param_2 = unaff_x20;
          puVar10 = unaff_x23;
        }
        uVar14 = (uint)unaff_x27;
        unaff_x19 = param_1;
        unaff_x23 = puVar10;
        if (uVar14 < (uint)unaff_x21) {
          uVar15 = uVar14 & 0xff;
          ppuVar17 = (undefined **)(ulong)uVar15;
          bVar22 = *(byte *)((long)puVar10 + 0x1d);
          uVar18 = (uint)bVar22;
          if (bVar22 == 0x20) {
            if (uVar15 == 8) {
              uVar13 = 0x1af;
            }
            else {
              if (uVar14 == 0x20) goto LAB_109efbea0;
              if (uVar14 != 0x10) goto LAB_109efbd88;
              uVar13 = 0x1ac;
            }
LAB_109efbe94:
            FUN_109ece168(param_1,uVar13,puVar10);
            puVar10 = param_1;
          }
          else {
            unaff_x20 = param_2;
            uVar14 = (uint)bVar22;
            if (bVar22 == 0x40) {
code_r0x000109efbd44:
              uVar18 = uVar14;
              param_2 = unaff_x20;
              param_1 = unaff_x19;
              uVar15 = (uint)ppuVar17;
              unaff_x19 = param_1;
              unaff_x20 = param_2;
              if (((uint)unaff_x27 & 0xff) == 0x10) {
code_r0x000109efbe84:
                param_2 = unaff_x20;
                uVar13 = 0x1b3;
              }
              else {
                if ((uint)unaff_x27 != 0x20) goto LAB_109efbd88;
                uVar13 = 0x1b0;
              }
              goto LAB_109efbe94;
            }
LAB_109efbd88:
            *(int *)((long)register0x00000008 + 0xc) = (int)unaff_x24;
            uVar14 = 0;
            if (uVar15 != 0) {
              uVar14 = uVar18 / uVar15;
            }
            unaff_x24 = (undefined8 *)(ulong)uVar14;
            unaff_x19 = param_1;
            if ((uint)unaff_x27 <= uVar18) {
              unaff_x20 = (undefined8 *)0x0;
              unaff_x22 = (undefined8 *)0x0;
              param_2 = puVar10;
              do {
                unaff_x23 = param_2;
                if (unaff_x22 != (undefined8 *)0x0) {
                  param_1 = *(undefined8 **)unaff_x19[3];
code_r0x000109efbdb0:
                  FUN_109f6600c(param_1,0x50,8);
                  if (param_1 != (undefined8 *)0x0) {
                    param_1[7] = 0;
                    param_1[6] = 0;
                    param_1[9] = 0;
                    param_1[8] = 0;
                    param_1[3] = 0;
                    param_1[2] = 0;
                    param_1[5] = 0;
                    param_1[4] = 0;
                    param_1[1] = 0;
                    *param_1 = 0;
                  }
                  *(undefined4 *)(param_1 + 3) = 5;
                  param_1[1] = 0;
                  param_1[2] = 0;
                  *param_1 = 0;
                  FUN_109ecb048(param_1,param_1 + 5,1,0x20);
                  param_1[9] = unaff_x20;
                  FUN_109ecb4f0(*unaff_x19,unaff_x19[1],param_1);
                  *unaff_x19 = 3;
                  unaff_x19[1] = param_1;
                  param_2 = unaff_x19;
                  FUN_109ece1b0(unaff_x19,0x1c0,unaff_x23,param_1 + 5);
                }
                param_4 = (ulong)((uint)unaff_x27 | 4);
code_r0x000109efbe2c:
                puVar10 = unaff_x19;
                FUN_109ece954(unaff_x19,param_2,4,param_4,0);
                puVar12[(long)unaff_x22 + -0x1c] = puVar10;
                unaff_x22 = (undefined8 *)((long)unaff_x22 + 1);
                unaff_x20 = (undefined8 *)((long)unaff_x20 + unaff_x27);
                param_2 = unaff_x23;
              } while (unaff_x22 < unaff_x24);
            }
            func_0x000109ecd728(unaff_x24);
            puVar10 = unaff_x19;
            FUN_109ece300(unaff_x19,unaff_x24,puVar12 + -0x1c);
            unaff_x22 = (undefined8 *)(ulong)*(uint *)((long)register0x00000008 + 0x3c);
            param_2 = *(undefined8 **)((long)register0x00000008 + 0x10);
            unaff_x24 = (undefined8 *)(ulong)*(uint *)((long)register0x00000008 + 0xc);
          }
LAB_109efbea0:
          uVar14 = *(int *)((long)register0x00000008 + 0x2c) - (int)unaff_x24 * (int)uVar20;
          uVar15 = (uint)unaff_x27;
          if ((uVar15 <= uVar14) || (unaff_x23 = puVar10, *(char *)((long)puVar10 + 0x1c) != '\x01')
             ) {
            unaff_x24 = (undefined8 *)unaff_x19[3];
            uVar4 = 0;
            if (uVar15 != 0) {
              uVar4 = (undefined1)(uVar14 / uVar15);
            }
            FUN_109ecaef8(unaff_x24,0x154);
            unaff_x23 = unaff_x24 + 6;
            FUN_109ecb048();
            uVar3 = *(ushort *)((long)unaff_x24 + 0x2c) & 0xfffe | (ushort)*(byte *)(unaff_x19 + 2);
            *(ushort *)((long)unaff_x24 + 0x2c) = uVar3;
            *(ushort *)((long)unaff_x24 + 0x2c) =
                 (*(ushort *)((long)unaff_x19 + 0x14) & 0x1ff) << 3 | uVar3 & 0xf007;
            unaff_x24[10] = 0;
            unaff_x24[0xb] = 0;
            unaff_x24[0xc] = 0;
            unaff_x24[0xd] = puVar10;
            *(undefined1 *)(unaff_x24 + 0xe) = uVar4;
            param_2 = *(undefined8 **)((long)register0x00000008 + 0x10);
            *(undefined8 *)((long)unaff_x24 + 0x71) = 0;
            unaff_x24[0xf] = 0;
            FUN_109ecb4f0(*unaff_x19,unaff_x19[1],unaff_x24);
            *unaff_x19 = 3;
            unaff_x19[1] = unaff_x24;
          }
        }
        *(undefined8 **)((long)register0x00000008 + unaff_x26 * 8 + 0x40) = unaff_x23;
        unaff_x26 = unaff_x26 + 1;
        iVar23 = *(int *)((long)register0x00000008 + 0x30);
        unaff_x20 = param_2;
        unaff_x21 = uVar20;
      } while (unaff_x26 < *(ulong *)((long)register0x00000008 + 0x20));
    }
    uVar14 = (uint)unaff_x22;
    if (*(uint *)((long)register0x00000008 + 8) < uVar14) {
      if (uVar14 <= *(uint *)((long)register0x00000008 + 4)) {
        uVar15 = 0;
        if ((uint)unaff_x27 != 0) {
          uVar15 = uVar14 / (uint)unaff_x27;
        }
        uVar20 = (ulong)uVar15;
        *(ulong *)((long)register0x00000008 + 0x30) = uVar20;
        func_0x000109ecd728();
        *(int *)((long)register0x00000008 + 0x2c) = (int)uVar20;
        unaff_x21 = 0;
        unaff_x23 = (undefined8 *)0x3;
        do {
          uVar14 = (uint)unaff_x22 & 0xff;
          unaff_x20 = (undefined8 *)(ulong)uVar14;
          unaff_x24 = unaff_x19;
          FUN_109ece300(unaff_x19,*(undefined4 *)((long)register0x00000008 + 0x2c),
                        (undefined1 *)
                        ((long)register0x00000008 +
                        unaff_x21 * *(long *)((long)register0x00000008 + 0x30) * 8 + 0x40));
          if (uVar14 == 0x20) {
            cVar1 = *(char *)((long)unaff_x24 + 0x1d);
            puVar10 = unaff_x24;
            if (cVar1 != ' ') {
              if (cVar1 == '\x10') {
                uVar13 = 0x15c;
              }
              else {
                if (cVar1 != '\b') goto LAB_109efc064;
                uVar13 = 0x15e;
              }
              goto LAB_109efc228;
            }
          }
          else if ((uint)unaff_x22 == 0x40) {
            if (*(char *)((long)unaff_x24 + 0x1d) == ' ') {
              uVar13 = 0x162;
            }
            else {
              if (*(char *)((long)unaff_x24 + 0x1d) != '\x10') goto LAB_109efc064;
              uVar13 = 0x164;
            }
LAB_109efc228:
            puVar10 = unaff_x19;
            FUN_109ece168(unaff_x19,uVar13,unaff_x24);
          }
          else {
LAB_109efc064:
            puVar8 = *(undefined8 **)unaff_x19[3];
            FUN_109f6600c(puVar8,0x50,8);
            if (puVar8 != (undefined8 *)0x0) {
              puVar8[7] = 0;
              puVar8[6] = 0;
              puVar8[9] = 0;
              puVar8[8] = 0;
              puVar8[3] = 0;
              puVar8[2] = 0;
              puVar8[5] = 0;
              puVar8[4] = 0;
              puVar8[1] = 0;
              *puVar8 = 0;
            }
            *(undefined4 *)(puVar8 + 3) = 5;
            puVar8[1] = 0;
            puVar8[2] = 0;
            puVar10 = puVar8 + 5;
            *puVar8 = 0;
            FUN_109ecb048(puVar8,puVar10,1,unaff_x22);
            puVar8[9] = 0;
            FUN_109ecb4f0(*unaff_x19,unaff_x19[1],puVar8);
            *unaff_x19 = 3;
            unaff_x19[1] = puVar8;
            bVar22 = *(byte *)((long)unaff_x24 + 0x1c);
            if (bVar22 != 0) {
              unaff_x20 = (undefined8 *)0x0;
              puVar8 = puVar10;
              do {
                iVar23 = (int)unaff_x20;
                if ((bVar22 != 1) || (puVar10 = unaff_x24, iVar23 != 0)) {
                  lVar16 = unaff_x19[3];
                  FUN_109ecaef8(lVar16,0x154);
                  puVar10 = (undefined8 *)(lVar16 + 0x30);
                  FUN_109ecb048();
                  uVar3 = *(ushort *)(lVar16 + 0x2c) & 0xfffe | (ushort)*(byte *)(unaff_x19 + 2);
                  *(ushort *)(lVar16 + 0x2c) = uVar3;
                  *(ushort *)(lVar16 + 0x2c) =
                       (*(ushort *)((long)unaff_x19 + 0x14) & 0x1ff) << 3 | uVar3 & 0xf007;
                  *(undefined8 *)(lVar16 + 0x50) = 0;
                  *(undefined8 *)(lVar16 + 0x58) = 0;
                  *(undefined8 *)(lVar16 + 0x60) = 0;
                  *(undefined8 **)(lVar16 + 0x68) = unaff_x24;
                  *(char *)(lVar16 + 0x70) = (char)unaff_x20;
                  *(undefined8 *)(lVar16 + 0x71) = 0;
                  *(undefined8 *)(lVar16 + 0x78) = 0;
                  FUN_109ecb4f0(*unaff_x19,unaff_x19[1],lVar16);
                  *unaff_x19 = 3;
                  unaff_x19[1] = lVar16;
                }
                puVar9 = unaff_x19;
                FUN_109ece954(unaff_x19,puVar10,4,(uint)unaff_x22 | 4,0);
                bVar22 = *(byte *)((long)unaff_x24 + 0x1d);
                puVar10 = *(undefined8 **)unaff_x19[3];
                FUN_109f6600c(puVar10,0x50,8);
                if (puVar10 != (undefined8 *)0x0) {
                  puVar10[7] = 0;
                  puVar10[6] = 0;
                  puVar10[9] = 0;
                  puVar10[8] = 0;
                  puVar10[3] = 0;
                  puVar10[2] = 0;
                  puVar10[5] = 0;
                  puVar10[4] = 0;
                  puVar10[1] = 0;
                  *puVar10 = 0;
                }
                *(undefined4 *)(puVar10 + 3) = 5;
                puVar10[1] = 0;
                puVar10[2] = 0;
                *puVar10 = 0;
                FUN_109ecb048(puVar10,puVar10 + 5,1,0x20);
                puVar10[9] = (ulong)(iVar23 * (uint)bVar22);
                FUN_109ecb4f0(*unaff_x19,unaff_x19[1],puVar10);
                *unaff_x19 = 3;
                unaff_x19[1] = puVar10;
                puVar11 = unaff_x19;
                FUN_109ece1b0(unaff_x19,0x14d,puVar9,puVar10 + 5);
                puVar10 = unaff_x19;
                FUN_109ece1b0(unaff_x19,0x14a,puVar8,puVar11);
                unaff_x20 = (undefined8 *)(ulong)(iVar23 + 1U);
                bVar22 = *(byte *)((long)unaff_x24 + 0x1c);
                unaff_x22 = (undefined8 *)(ulong)*(uint *)((long)register0x00000008 + 0x3c);
                puVar8 = puVar10;
              } while (iVar23 + 1U < (uint)bVar22);
            }
          }
          puVar12[unaff_x21 - 0x1c] = puVar10;
          unaff_x21 = unaff_x21 + 1;
        } while (unaff_x21 != *(ulong *)((long)register0x00000008 + 0x18));
      }
      puVar8 = *(undefined8 **)((long)register0x00000008 + 0x18);
      func_0x000109ecd728();
      puVar10 = puVar12 + -0x1c;
    }
    else {
      puVar8 = *(undefined8 **)((long)register0x00000008 + 0x18);
      func_0x000109ecd728();
      puVar10 = (undefined8 *)((long)register0x00000008 + 0x40);
    }
    puVar9 = unaff_x19;
    FUN_109ece300();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == puVar12[-0xc]) {
      return puVar9;
    }
    ___stack_chk_fail();
    *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 **)((long)register0x00000008 + -0x10) = puVar12;
    *(code **)((long)register0x00000008 + -8) = FUN_109efc260;
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    bVar22 = *(byte *)((long)puVar8 + 0x1c);
    uVar14 = (uint)puVar10;
    puVar12 = puVar9;
    if (uVar14 != bVar22) {
      *(undefined8 *)((long)register0x00000008 + -200) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
      uVar15 = (uint)bVar22;
      if (uVar14 <= bVar22) {
        uVar15 = uVar14;
      }
      if (uVar15 != 0) {
        uVar20 = 0;
        do {
          *(int *)((long)register0x00000008 + uVar20 * 4 + -0xf0) = (int)uVar20;
          uVar20 = uVar20 + 1;
        } while (uVar15 != uVar20);
      }
      *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
      *(undefined8 **)((long)register0x00000008 + -0x68) = puVar8;
      unaff_x19 = puVar9;
      unaff_x20 = puVar10;
      if (uVar14 == 0) {
        *(undefined8 *)((long)register0x00000008 + -0xa8) =
             *(undefined8 *)((long)register0x00000008 + -0x78);
        *(undefined8 *)((long)register0x00000008 + -0xb0) =
             *(undefined8 *)((long)register0x00000008 + -0x80);
        *(undefined8 *)((long)register0x00000008 + -0x98) =
             *(undefined8 *)((long)register0x00000008 + -0x68);
        *(undefined8 *)((long)register0x00000008 + -0xa0) =
             *(undefined8 *)((long)register0x00000008 + -0x70);
        *(undefined8 *)((long)register0x00000008 + -0x88) =
             *(undefined8 *)((long)register0x00000008 + -0x58);
        *(undefined8 *)((long)register0x00000008 + -0x90) =
             *(undefined8 *)((long)register0x00000008 + -0x60);
        puVar8 = *(undefined8 **)((long)register0x00000008 + -0x98);
        if (*(char *)((long)puVar8 + 0x1c) == '\0') goto LAB_109efc3f4;
      }
      else {
        uVar15 = uVar14;
        if (0xf < uVar14) {
          uVar15 = 0x10;
        }
        uVar20 = (ulong)uVar15;
        lVar16 = 0x20;
        puVar21 = (undefined4 *)((long)register0x00000008 + -0xf0);
        do {
          *(char *)((long)register0x00000008 + lVar16 + -0x80) = (char)*puVar21;
          lVar16 = lVar16 + 1;
          uVar20 = uVar20 - 1;
          puVar21 = puVar21 + 1;
        } while (uVar20 != 0);
        *(undefined8 *)((long)register0x00000008 + -0xa8) =
             *(undefined8 *)((long)register0x00000008 + -0x78);
        *(undefined8 *)((long)register0x00000008 + -0xb0) =
             *(undefined8 *)((long)register0x00000008 + -0x80);
        *(undefined8 *)((long)register0x00000008 + -0x98) =
             *(undefined8 *)((long)register0x00000008 + -0x68);
        *(undefined8 *)((long)register0x00000008 + -0xa0) =
             *(undefined8 *)((long)register0x00000008 + -0x70);
        *(undefined8 *)((long)register0x00000008 + -0x88) =
             *(undefined8 *)((long)register0x00000008 + -0x58);
        *(undefined8 *)((long)register0x00000008 + -0x90) =
             *(undefined8 *)((long)register0x00000008 + -0x60);
        puVar8 = *(undefined8 **)((long)register0x00000008 + -0x98);
        if (uVar14 == *(byte *)((long)puVar8 + 0x1c)) {
          uVar20 = 0;
          bVar2 = false;
          do {
            bVar2 = (bool)(uVar20 != *(byte *)((long)register0x00000008 + (uVar20 - 0x90)) | bVar2);
            uVar20 = uVar20 + 1;
          } while (((ulong)puVar10 & 0xffffffff) != uVar20);
          if (!bVar2) goto LAB_109efc3f4;
        }
      }
      lVar16 = puVar9[3];
      FUN_109ecaef8(lVar16,0x154);
      puVar8 = (undefined8 *)(lVar16 + 0x30);
      FUN_109ecb048();
      uVar3 = *(ushort *)(lVar16 + 0x2c) & 0xfffe | (ushort)*(byte *)(puVar9 + 2);
      *(ushort *)(lVar16 + 0x2c) = uVar3;
      *(ushort *)(lVar16 + 0x2c) = (*(ushort *)((long)puVar9 + 0x14) & 0x1ff) << 3 | uVar3 & 0xf007;
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x80);
      uVar28 = *(undefined8 *)((long)register0x00000008 + -0x68);
      uVar27 = *(undefined8 *)((long)register0x00000008 + -0x70);
      *(undefined8 *)(lVar16 + 0x58) = *(undefined8 *)((long)register0x00000008 + -0x78);
      *(undefined8 *)(lVar16 + 0x50) = uVar13;
      *(undefined8 *)(lVar16 + 0x68) = uVar28;
      *(undefined8 *)(lVar16 + 0x60) = uVar27;
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x60);
      *(undefined8 *)(lVar16 + 0x78) = *(undefined8 *)((long)register0x00000008 + -0x58);
      *(undefined8 *)(lVar16 + 0x70) = uVar13;
      puVar12 = (undefined8 *)*puVar9;
      FUN_109ecb4f0(puVar12,puVar9[1],lVar16);
      *puVar9 = 3;
      puVar9[1] = lVar16;
    }
LAB_109efc3f4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48)) {
      return puVar8;
    }
    ___stack_chk_fail();
    *(undefined8 **)((long)register0x00000008 + -0x110) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x108) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x100) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0xf8) = FUN_109efc42c;
    plVar26 = (long *)puVar12[3];
    if ((*(byte *)((long)plVar26 + 0x1e) & 1) == 0) {
      FUN_109ecc174();
      lVar16 = *(long *)(*(long *)(*plVar26 + 0x10) + 0x18);
      if (lVar16 != puVar12[3] && lVar16 != 0) {
        bVar22 = *(byte *)((long)plVar26 + 0x1f);
        do {
          lVar6 = puVar12[3];
          if (*(int *)(lVar16 + 0x10) == 2) {
            for (; lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x18)) {
              if (lVar16 == lVar6) goto LAB_109efc46c;
            }
            if (((bVar22 | *(byte *)(lVar16 + 0x6e) ^ 0xff) & 1) == 0) goto LAB_109efc444;
            bVar22 = 0;
          }
          lVar16 = *(long *)(lVar16 + 0x18);
        } while (lVar16 != 0);
      }
LAB_109efc46c:
      puVar12 = (undefined8 *)0x0;
    }
    else {
LAB_109efc444:
      puVar12 = (undefined8 *)0x1;
    }
    return puVar12;
  case 0xf0:
    goto code_r0x000109efbe2c;
  case 0xf6:
    goto code_r0x000109efbc94;
  }
  uVar24 = uVar24 & 0xff;
  param_1 = (undefined8 *)0x0;
  puVar25 = &UNK_10e06cbca;
code_r0x000109efbb38:
                    /* WARNING: Could not recover jumptable at 0x000109efbb44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)puVar25[uVar24] * 4 + 0x109efbb48))(ppuVar17,param_1);
  return param_1;
}



/* Entry: 109efbbcc; end: 109efc25f;  */

undefined8 * FUN_109efbbcc(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  ushort uVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  byte bVar18;
  int iVar19;
  long *plVar20;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  ulong uVar21;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  ulong uVar22;
  ulong uVar23;
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
  undefined8 *puStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 *puStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  long lStack_578;
  undefined8 *puStack_570;
  undefined8 *puStack_568;
  ulong uStack_560;
  undefined8 *puStack_558;
  undefined8 *puStack_550;
  undefined8 *puStack_548;
  undefined1 *puStack_540;
  code *pcStack_538;
  uint uStack_52c;
  uint uStack_528;
  uint uStack_524;
  undefined8 *puStack_520;
  undefined8 *puStack_518;
  ulong uStack_510;
  uint uStack_504;
  ulong uStack_500;
  uint uStack_4f4;
  undefined8 auStack_4f0 [128];
  undefined8 auStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar18 = *(byte *)((long)param_2 + 0x1d);
  uStack_528 = (uint)bVar18;
  uStack_52c = *(byte *)((long)param_2 + 0x1c) * uStack_528;
  uStack_4f4 = (uint)param_3;
  uVar14 = 0;
  if ((param_3 & 0xffff) != 0) {
    uVar14 = uStack_52c / (uStack_4f4 & 0xffff);
  }
  puStack_518 = (undefined8 *)(ulong)uVar14;
  uVar15 = uStack_4f4;
  if (bVar18 <= uStack_4f4) {
    uVar15 = (uint)bVar18;
  }
  if (uVar15 <= uStack_4f4 * uVar14) {
    uVar22 = 0;
    uVar23 = 0;
    uVar6 = 0;
    if (uVar15 != 0) {
      uVar6 = (uStack_4f4 * uVar14) / uVar15;
    }
    uStack_510 = (ulong)uVar6;
    unaff_x20 = param_2;
    iVar19 = 0;
    puStack_520 = param_2;
    do {
      uVar16 = uVar22 * uVar15;
      unaff_x21 = (undefined8 *)(ulong)*(byte *)((long)unaff_x20 + 0x1d);
      bVar18 = *(byte *)((long)unaff_x20 + 0x1c);
      uVar14 = (uint)*(byte *)((long)unaff_x20 + 0x1d);
      if ((uVar23 & 0xffffffff) <= uVar16) {
        uVar23 = uVar23 & 0xffffffff;
        do {
          uVar23 = uVar23 + (ulong)bVar18 * (long)unaff_x21;
        } while (uVar23 <= uVar16);
        iVar19 = (int)uVar23 - bVar18 * uVar14;
      }
      uStack_504 = (int)uVar16 - iVar19;
      uStack_500 = CONCAT44(uStack_500._4_4_,iVar19);
      uVar6 = 0;
      if (uVar14 != 0) {
        uVar6 = uStack_504 / uVar14;
      }
      unaff_x24 = (undefined8 *)(ulong)uVar6;
      if ((bVar18 != 1) || (puVar17 = unaff_x21, puVar12 = unaff_x20, (uVar6 & 0xff) != 0)) {
        lVar9 = param_1[3];
        FUN_109ecaef8(lVar9,0x154);
        puVar12 = (undefined8 *)(lVar9 + 0x30);
        FUN_109ecb048();
        uVar4 = *(ushort *)(lVar9 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
        *(ushort *)(lVar9 + 0x2c) = uVar4;
        *(ushort *)(lVar9 + 0x2c) =
             (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar4 & 0xf007;
        *(undefined8 *)(lVar9 + 0x50) = 0;
        *(undefined8 *)(lVar9 + 0x58) = 0;
        *(undefined8 *)(lVar9 + 0x60) = 0;
        *(undefined8 **)(lVar9 + 0x68) = unaff_x20;
        *(char *)(lVar9 + 0x70) = (char)uVar6;
        *(undefined8 *)(lVar9 + 0x71) = 0;
        *(undefined8 *)(lVar9 + 0x78) = 0;
        FUN_109ecb4f0(*param_1,param_1[1],lVar9);
        *param_1 = 3;
        param_1[1] = lVar9;
        puVar17 = (undefined8 *)(ulong)*(byte *)((long)unaff_x20 + 0x1d);
      }
      unaff_x23 = puVar12;
      if (uVar15 < (uint)puVar17) {
        uVar1 = uVar15 & 0xff;
        bVar18 = *(byte *)((long)puVar12 + 0x1d);
        if (bVar18 == 0x20) {
          if (uVar1 == 8) {
            uVar13 = 0x1af;
          }
          else {
            if (uVar15 == 0x20) goto LAB_109efbea0;
            if (uVar15 != 0x10) goto LAB_109efbd88;
            uVar13 = 0x1ac;
          }
LAB_109efbe94:
          puVar17 = param_1;
          FUN_109ece168(param_1,uVar13,puVar12);
          puVar12 = puVar17;
        }
        else {
          if (bVar18 == 0x40) {
            if ((uVar15 & 0xff) == 0x10) {
              uVar13 = 0x1b3;
            }
            else {
              if (uVar15 != 0x20) goto LAB_109efbd88;
              uVar13 = 0x1b0;
            }
            goto LAB_109efbe94;
          }
LAB_109efbd88:
          uVar7 = 0;
          if (uVar1 != 0) {
            uVar7 = bVar18 / uVar1;
          }
          uVar16 = (ulong)uVar7;
          uStack_524 = uVar6;
          if (uVar15 <= bVar18) {
            lVar9 = 0;
            uVar21 = 0;
            do {
              puVar17 = puVar12;
              if (uVar21 != 0) {
                puVar10 = *(undefined8 **)param_1[3];
                FUN_109f6600c(puVar10,0x50,8);
                if (puVar10 != (undefined8 *)0x0) {
                  puVar10[7] = 0;
                  puVar10[6] = 0;
                  puVar10[9] = 0;
                  puVar10[8] = 0;
                  puVar10[3] = 0;
                  puVar10[2] = 0;
                  puVar10[5] = 0;
                  puVar10[4] = 0;
                  puVar10[1] = 0;
                  *puVar10 = 0;
                }
                *(undefined4 *)(puVar10 + 3) = 5;
                puVar10[1] = 0;
                puVar10[2] = 0;
                *puVar10 = 0;
                FUN_109ecb048(puVar10,puVar10 + 5,1,0x20);
                puVar10[9] = lVar9;
                FUN_109ecb4f0(*param_1,param_1[1],puVar10);
                *param_1 = 3;
                param_1[1] = puVar10;
                puVar17 = param_1;
                FUN_109ece1b0(param_1,0x1c0,puVar12,puVar10 + 5);
              }
              puVar10 = param_1;
              FUN_109ece954(param_1,puVar17,4,uVar15 | 4,0);
              auStack_f0[uVar21] = puVar10;
              uVar21 = uVar21 + 1;
              lVar9 = lVar9 + (ulong)uVar15;
            } while (uVar21 < uVar16);
          }
          func_0x000109ecd728(uVar16);
          puVar12 = param_1;
          FUN_109ece300(param_1,uVar16,auStack_f0);
          param_3 = (ulong)uStack_4f4;
          unaff_x24 = (undefined8 *)(ulong)uStack_524;
          unaff_x20 = puStack_520;
        }
LAB_109efbea0:
        uVar14 = uStack_504 - (int)unaff_x24 * uVar14;
        if ((uVar15 <= uVar14) || (unaff_x23 = puVar12, *(char *)((long)puVar12 + 0x1c) != '\x01'))
        {
          unaff_x24 = (undefined8 *)param_1[3];
          uVar5 = 0;
          if (uVar15 != 0) {
            uVar5 = (undefined1)(uVar14 / uVar15);
          }
          FUN_109ecaef8(unaff_x24,0x154);
          unaff_x23 = unaff_x24 + 6;
          FUN_109ecb048();
          unaff_x20 = puStack_520;
          uVar4 = *(ushort *)((long)unaff_x24 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
          *(ushort *)((long)unaff_x24 + 0x2c) = uVar4;
          *(ushort *)((long)unaff_x24 + 0x2c) =
               (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar4 & 0xf007;
          unaff_x24[10] = 0;
          unaff_x24[0xb] = 0;
          unaff_x24[0xc] = 0;
          unaff_x24[0xd] = puVar12;
          *(undefined1 *)(unaff_x24 + 0xe) = uVar5;
          *(undefined8 *)((long)unaff_x24 + 0x71) = 0;
          unaff_x24[0xf] = 0;
          FUN_109ecb4f0(*param_1,param_1[1],unaff_x24);
          *param_1 = 3;
          param_1[1] = unaff_x24;
        }
      }
      auStack_4f0[uVar22] = unaff_x23;
      uVar22 = uVar22 + 1;
      iVar19 = (int)uStack_500;
    } while (uVar22 < uStack_510);
  }
  uVar14 = (uint)param_3;
  if (uStack_528 < uVar14) {
    if (uVar14 <= uStack_52c) {
      uVar6 = 0;
      if (uVar15 != 0) {
        uVar6 = uVar14 / uVar15;
      }
      uVar22 = (ulong)uVar6;
      uStack_500 = uVar22;
      func_0x000109ecd728();
      uStack_504 = (uint)uVar22;
      unaff_x21 = (undefined8 *)0x0;
      unaff_x23 = (undefined8 *)0x3;
      do {
        uVar14 = (uint)param_3 & 0xff;
        unaff_x20 = (undefined8 *)(ulong)uVar14;
        unaff_x24 = param_1;
        FUN_109ece300(param_1,uStack_504,auStack_4f0 + (long)unaff_x21 * uStack_500);
        if (uVar14 == 0x20) {
          cVar2 = *(char *)((long)unaff_x24 + 0x1d);
          puVar12 = unaff_x24;
          if (cVar2 != ' ') {
            if (cVar2 == '\x10') {
              uVar13 = 0x15c;
            }
            else {
              if (cVar2 != '\b') goto LAB_109efc064;
              uVar13 = 0x15e;
            }
            goto LAB_109efc228;
          }
        }
        else if ((uint)param_3 == 0x40) {
          if (*(char *)((long)unaff_x24 + 0x1d) == ' ') {
            uVar13 = 0x162;
          }
          else {
            if (*(char *)((long)unaff_x24 + 0x1d) != '\x10') goto LAB_109efc064;
            uVar13 = 0x164;
          }
LAB_109efc228:
          puVar12 = param_1;
          FUN_109ece168(param_1,uVar13,unaff_x24);
        }
        else {
LAB_109efc064:
          puVar17 = *(undefined8 **)param_1[3];
          FUN_109f6600c(puVar17,0x50,8);
          if (puVar17 != (undefined8 *)0x0) {
            puVar17[7] = 0;
            puVar17[6] = 0;
            puVar17[9] = 0;
            puVar17[8] = 0;
            puVar17[3] = 0;
            puVar17[2] = 0;
            puVar17[5] = 0;
            puVar17[4] = 0;
            puVar17[1] = 0;
            *puVar17 = 0;
          }
          *(undefined4 *)(puVar17 + 3) = 5;
          puVar17[1] = 0;
          puVar17[2] = 0;
          puVar12 = puVar17 + 5;
          *puVar17 = 0;
          FUN_109ecb048(puVar17,puVar12,1,param_3);
          puVar17[9] = 0;
          FUN_109ecb4f0(*param_1,param_1[1],puVar17);
          *param_1 = 3;
          param_1[1] = puVar17;
          bVar18 = *(byte *)((long)unaff_x24 + 0x1c);
          if (bVar18 != 0) {
            unaff_x20 = (undefined8 *)0x0;
            puVar17 = puVar12;
            do {
              iVar19 = (int)unaff_x20;
              if ((bVar18 != 1) || (puVar12 = unaff_x24, iVar19 != 0)) {
                lVar9 = param_1[3];
                FUN_109ecaef8(lVar9,0x154);
                puVar12 = (undefined8 *)(lVar9 + 0x30);
                FUN_109ecb048();
                uVar4 = *(ushort *)(lVar9 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
                *(ushort *)(lVar9 + 0x2c) = uVar4;
                *(ushort *)(lVar9 + 0x2c) =
                     (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar4 & 0xf007;
                *(undefined8 *)(lVar9 + 0x50) = 0;
                *(undefined8 *)(lVar9 + 0x58) = 0;
                *(undefined8 *)(lVar9 + 0x60) = 0;
                *(undefined8 **)(lVar9 + 0x68) = unaff_x24;
                *(char *)(lVar9 + 0x70) = (char)unaff_x20;
                *(undefined8 *)(lVar9 + 0x71) = 0;
                *(undefined8 *)(lVar9 + 0x78) = 0;
                FUN_109ecb4f0(*param_1,param_1[1],lVar9);
                *param_1 = 3;
                param_1[1] = lVar9;
              }
              puVar10 = param_1;
              FUN_109ece954(param_1,puVar12,4,(uint)param_3 | 4,0);
              bVar18 = *(byte *)((long)unaff_x24 + 0x1d);
              puVar12 = *(undefined8 **)param_1[3];
              FUN_109f6600c(puVar12,0x50,8);
              if (puVar12 != (undefined8 *)0x0) {
                puVar12[7] = 0;
                puVar12[6] = 0;
                puVar12[9] = 0;
                puVar12[8] = 0;
                puVar12[3] = 0;
                puVar12[2] = 0;
                puVar12[5] = 0;
                puVar12[4] = 0;
                puVar12[1] = 0;
                *puVar12 = 0;
              }
              *(undefined4 *)(puVar12 + 3) = 5;
              puVar12[1] = 0;
              puVar12[2] = 0;
              *puVar12 = 0;
              FUN_109ecb048(puVar12,puVar12 + 5,1,0x20);
              puVar12[9] = (ulong)(iVar19 * (uint)bVar18);
              FUN_109ecb4f0(*param_1,param_1[1],puVar12);
              *param_1 = 3;
              param_1[1] = puVar12;
              puVar11 = param_1;
              FUN_109ece1b0(param_1,0x14d,puVar10,puVar12 + 5);
              puVar12 = param_1;
              FUN_109ece1b0(param_1,0x14a,puVar17,puVar11);
              unaff_x20 = (undefined8 *)(ulong)(iVar19 + 1U);
              bVar18 = *(byte *)((long)unaff_x24 + 0x1c);
              param_3 = (ulong)uStack_4f4;
              puVar17 = puVar12;
            } while (iVar19 + 1U < (uint)bVar18);
          }
        }
        auStack_f0[(long)unaff_x21] = puVar12;
        unaff_x21 = (undefined8 *)((long)unaff_x21 + 1);
      } while (unaff_x21 != puStack_518);
    }
    puVar17 = puStack_518;
    func_0x000109ecd728();
    puVar12 = auStack_f0;
  }
  else {
    puVar17 = puStack_518;
    func_0x000109ecd728();
    puVar12 = auStack_4f0;
  }
  puVar10 = param_1;
  FUN_109ece300();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar10;
  }
  ___stack_chk_fail();
  puStack_570 = unaff_x24;
  puStack_568 = unaff_x23;
  uStack_560 = param_3;
  puStack_558 = unaff_x21;
  puStack_550 = unaff_x20;
  puStack_548 = param_1;
  puStack_540 = &stack0xfffffffffffffff0;
  pcStack_538 = FUN_109efc260;
  lStack_578 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar18 = *(byte *)((long)puVar17 + 0x1c);
  uVar14 = (uint)puVar12;
  if (uVar14 != bVar18) {
    uStack_5f8 = 0;
    uStack_600 = 0;
    uStack_5e8 = 0;
    uStack_5f0 = 0;
    uStack_618 = 0;
    uStack_620 = 0;
    uStack_608 = 0;
    uStack_610 = 0;
    uVar15 = (uint)bVar18;
    if (uVar14 <= bVar18) {
      uVar15 = uVar14;
    }
    if (uVar15 != 0) {
      uVar22 = 0;
      do {
        *(int *)((long)&uStack_620 + uVar22 * 4) = (int)uVar22;
        uVar22 = uVar22 + 1;
      } while (uVar15 != uVar22);
    }
    uStack_5a0 = 0;
    uStack_588 = 0;
    uStack_590 = 0;
    uStack_5a8 = 0;
    uStack_5b0 = 0;
    puStack_598 = puVar17;
    if (uVar14 == 0) {
      uStack_5d8 = 0;
      uStack_5e0 = 0;
      uStack_5d0 = 0;
      uStack_5b8 = 0;
      uStack_5c0 = 0;
      puStack_5c8 = puVar17;
      if (*(char *)((long)puVar17 + 0x1c) == '\0') goto LAB_109efc3f4;
    }
    else {
      uVar15 = uVar14;
      if (0xf < uVar14) {
        uVar15 = 0x10;
      }
      uVar22 = (ulong)uVar15;
      lVar9 = 0x20;
      puVar11 = &uStack_620;
      do {
        *(char *)((long)&uStack_5b0 + lVar9) = (char)*(undefined4 *)puVar11;
        lVar9 = lVar9 + 1;
        uVar22 = uVar22 - 1;
        puVar11 = (undefined8 *)((long)puVar11 + 4);
      } while (uVar22 != 0);
      uStack_5d8 = 0;
      uStack_5e0 = 0;
      puStack_5c8 = puVar17;
      uStack_5d0 = 0;
      uStack_5b8 = uStack_588;
      uStack_5c0 = uStack_590;
      if (uVar14 == *(byte *)((long)puVar17 + 0x1c)) {
        uVar22 = 0;
        bVar3 = false;
        do {
          bVar3 = (bool)(uVar22 != *(byte *)((long)&uStack_5c0 + uVar22) | bVar3);
          uVar22 = uVar22 + 1;
        } while (((ulong)puVar12 & 0xffffffff) != uVar22);
        puVar17 = puStack_598;
        if (!bVar3) goto LAB_109efc3f4;
      }
    }
    uStack_5d0 = 0;
    uStack_5d8 = 0;
    uStack_5e0 = 0;
    lVar9 = puVar10[3];
    uStack_5c0 = uStack_590;
    uStack_5b8 = uStack_588;
    FUN_109ecaef8(lVar9,0x154);
    FUN_109ecb048();
    uVar4 = *(ushort *)(lVar9 + 0x2c) & 0xfffe | (ushort)*(byte *)(puVar10 + 2);
    *(ushort *)(lVar9 + 0x2c) = uVar4;
    *(ushort *)(lVar9 + 0x2c) = (*(ushort *)((long)puVar10 + 0x14) & 0x1ff) << 3 | uVar4 & 0xf007;
    *(undefined8 *)(lVar9 + 0x58) = uStack_5a8;
    *(undefined8 *)(lVar9 + 0x50) = uStack_5b0;
    *(undefined8 **)(lVar9 + 0x68) = puStack_598;
    *(undefined8 *)(lVar9 + 0x60) = uStack_5a0;
    *(undefined8 *)(lVar9 + 0x78) = uStack_588;
    *(undefined8 *)(lVar9 + 0x70) = uStack_590;
    puVar12 = (undefined8 *)*puVar10;
    FUN_109ecb4f0(puVar12,puVar10[1],lVar9);
    *puVar10 = 3;
    puVar10[1] = lVar9;
    puVar10 = puVar12;
    puVar17 = (undefined8 *)(lVar9 + 0x30);
  }
LAB_109efc3f4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_578) {
    return puVar17;
  }
  ___stack_chk_fail();
  plVar20 = (long *)puVar10[3];
  if ((*(byte *)((long)plVar20 + 0x1e) & 1) == 0) {
    FUN_109ecc174();
    lVar9 = *(long *)(*(long *)(*plVar20 + 0x10) + 0x18);
    if (lVar9 != puVar10[3] && lVar9 != 0) {
      bVar18 = *(byte *)((long)plVar20 + 0x1f);
      do {
        lVar8 = puVar10[3];
        if (*(int *)(lVar9 + 0x10) == 2) {
          for (; lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x18)) {
            if (lVar9 == lVar8) goto LAB_109efc46c;
          }
          if (((bVar18 | *(byte *)(lVar9 + 0x6e) ^ 0xff) & 1) == 0) goto LAB_109efc444;
          bVar18 = 0;
        }
        lVar9 = *(long *)(lVar9 + 0x18);
      } while (lVar9 != 0);
    }
LAB_109efc46c:
    puVar12 = (undefined8 *)0x0;
  }
  else {
LAB_109efc444:
    puVar12 = (undefined8 *)0x1;
  }
  return puVar12;
}



/* Entry: 109efc260; end: 109efc42b;  */

long FUN_109efc260(undefined8 *param_1,long param_2,uint param_3)

{
  bool bVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong uVar6;
  byte bVar7;
  long lVar8;
  long *plVar9;
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
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar7 = *(byte *)(param_2 + 0x1c);
  if (param_3 != bVar7) {
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uVar5 = (uint)bVar7;
    if (param_3 <= bVar7) {
      uVar5 = param_3;
    }
    if (uVar5 != 0) {
      uVar6 = 0;
      do {
        *(int *)((long)&uStack_f0 + uVar6 * 4) = (int)uVar6;
        uVar6 = uVar6 + 1;
      } while (uVar5 != uVar6);
    }
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = param_2;
    if (param_3 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      lStack_98 = param_2;
      if (*(char *)(param_2 + 0x1c) == '\0') goto LAB_109efc3f4;
    }
    else {
      uVar5 = param_3;
      if (0xf < param_3) {
        uVar5 = 0x10;
      }
      uVar6 = (ulong)uVar5;
      lVar8 = 0x20;
      puVar4 = &uStack_f0;
      do {
        *(char *)((long)&uStack_80 + lVar8) = (char)*(undefined4 *)puVar4;
        lVar8 = lVar8 + 1;
        uVar6 = uVar6 - 1;
        puVar4 = (undefined8 *)((long)puVar4 + 4);
      } while (uVar6 != 0);
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = param_2;
      uStack_a0 = 0;
      uStack_88 = uStack_58;
      uStack_90 = uStack_60;
      if (param_3 == *(byte *)(param_2 + 0x1c)) {
        uVar6 = 0;
        bVar1 = false;
        do {
          bVar1 = (bool)(uVar6 != *(byte *)((long)&uStack_90 + uVar6) | bVar1);
          uVar6 = uVar6 + 1;
        } while (param_3 != uVar6);
        param_2 = lStack_68;
        if (!bVar1) goto LAB_109efc3f4;
      }
    }
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    lVar8 = param_1[3];
    uStack_90 = uStack_60;
    uStack_88 = uStack_58;
    FUN_109ecaef8(lVar8,0x154);
    param_2 = lVar8 + 0x30;
    FUN_109ecb048();
    uVar2 = *(ushort *)(lVar8 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
    *(ushort *)(lVar8 + 0x2c) = uVar2;
    *(ushort *)(lVar8 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar2 & 0xf007;
    *(undefined8 *)(lVar8 + 0x58) = uStack_78;
    *(undefined8 *)(lVar8 + 0x50) = uStack_80;
    *(long *)(lVar8 + 0x68) = lStack_68;
    *(undefined8 *)(lVar8 + 0x60) = uStack_70;
    *(undefined8 *)(lVar8 + 0x78) = uStack_58;
    *(undefined8 *)(lVar8 + 0x70) = uStack_60;
    puVar4 = (undefined8 *)*param_1;
    FUN_109ecb4f0(puVar4,param_1[1],lVar8);
    *param_1 = 3;
    param_1[1] = lVar8;
    param_1 = puVar4;
  }
LAB_109efc3f4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_2;
  }
  ___stack_chk_fail();
  plVar9 = (long *)param_1[3];
  if ((*(byte *)((long)plVar9 + 0x1e) & 1) == 0) {
    FUN_109ecc174();
    lVar8 = *(long *)(*(long *)(*plVar9 + 0x10) + 0x18);
    if (lVar8 != param_1[3] && lVar8 != 0) {
      bVar7 = *(byte *)((long)plVar9 + 0x1f);
      do {
        lVar3 = param_1[3];
        if (*(int *)(lVar8 + 0x10) == 2) {
          for (; lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x18)) {
            if (lVar8 == lVar3) goto LAB_109efc46c;
          }
          if (((bVar7 | *(byte *)(lVar8 + 0x6e) ^ 0xff) & 1) == 0) goto LAB_109efc444;
          bVar7 = 0;
        }
        lVar8 = *(long *)(lVar8 + 0x18);
      } while (lVar8 != 0);
    }
LAB_109efc46c:
    lVar8 = 0;
  }
  else {
LAB_109efc444:
    lVar8 = 1;
  }
  return lVar8;
}



/* Entry: 109efc42c; end: 109efc4bf;  */

undefined8 FUN_109efc42c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  byte bVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x18);
  if ((*(byte *)((long)plVar5 + 0x1e) & 1) == 0) {
    FUN_109ecc174();
    lVar3 = *(long *)(*(long *)(*plVar5 + 0x10) + 0x18);
    if (lVar3 != *(long *)(param_1 + 0x18) && lVar3 != 0) {
      bVar4 = *(byte *)((long)plVar5 + 0x1f);
      do {
        lVar1 = *(long *)(param_1 + 0x18);
        if (*(int *)(lVar3 + 0x10) == 2) {
          for (; lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x18)) {
            if (lVar3 == lVar1) goto LAB_109efc46c;
          }
          if (((bVar4 | *(byte *)(lVar3 + 0x6e) ^ 0xff) & 1) == 0) goto LAB_109efc444;
          bVar4 = 0;
        }
        lVar3 = *(long *)(lVar3 + 0x18);
      } while (lVar3 != 0);
    }
LAB_109efc46c:
    uVar2 = 0;
  }
  else {
LAB_109efc444:
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 109efc4c0; end: 109efd187;  */

uint FUN_109efc4c0(undefined8 *param_1,long *param_2)

{
  byte bVar1;
  int iVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  undefined4 uVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  long lVar25;
  long *plVar26;
  uint uVar27;
  uint uVar28;
  long *plVar29;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long *plStack_f8;
  undefined1 auStack_f0 [2];
  undefined1 auStack_ee [2];
  undefined4 uStack_ec;
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
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 uStack_70;
  byte bStack_6f;
  undefined1 auStack_6e [3];
  byte bStack_6b;
  
  plVar20 = (long *)*param_1;
  if (*plVar20 == 0) {
    uVar27 = 0;
  }
  else {
    uVar27 = 0;
    do {
      iVar2 = (int)plVar20[2];
      if (iVar2 == 2) {
        plVar23 = plVar20 + 4;
        plVar29 = (long *)0x0;
        if ((long *)*plVar23 != plVar20 + 6) {
          plVar29 = (long *)*plVar23;
        }
        plVar16 = plVar29;
        FUN_109ecc588();
        plVar26 = (long *)plVar29[4];
        if (((long *)*plVar26 == (long *)0x0) || ((int)plVar26[3] != 8)) {
          uVar28 = 0;
        }
        else {
          uVar28 = 0;
          bVar12 = *(byte *)((long)param_2 + 0x24);
          plVar18 = (long *)*plVar26;
          do {
            plVar17 = plVar18;
            if (((bVar12 & 1) != 0) || ((*(byte *)((long)plVar26 + 0x66) & 1) == 0)) {
              *(undefined1 *)((long)plVar26 + 0x67) = 0;
              plVar18 = (long *)plVar26[5];
              for (plVar24 = (long *)*(long *)plVar26[5]; plVar24 != (long *)0x0;
                  plVar24 = (long *)*plVar24) {
                if ((long *)plVar18[2] == plVar16) {
                  cVar9 = (char)plVar18 + '\x18';
                  FUN_109efc42c();
                  *(char *)((long)plVar26 + 0x66) = cVar9;
                  break;
                }
                plVar18 = plVar24;
              }
              uVar28 = (uint)(*(char *)((long)plVar26 + 0x66) != '\0' || uVar28 != 0);
            }
          } while (((long *)*plVar17 != (long *)0x0) &&
                  (plVar18 = (long *)*plVar17, plVar26 = plVar17, (int)plVar17[3] == 8));
        }
        lStack_108 = param_2[1];
        lStack_110 = *param_2;
        lStack_100 = param_2[2];
        auStack_f0[0] = (byte)param_2[4];
        uStack_ec = (undefined4)((ulong)param_2[4] >> 0x20);
        _auStack_f0 = (uint)auStack_f0[0];
        plStack_f8 = plVar20;
        do {
          plVar26 = plVar23;
          FUN_109efc4c0(plVar23,&lStack_110);
          uVar4 = _auStack_f0;
          uVar28 = uVar28 | (uint)plVar26;
          plVar26 = (long *)plVar29[4];
          cVar9 = auStack_ee[0];
          if (((long *)*plVar26 == (long *)0x0) || ((int)plVar26[3] != 8)) {
            auStack_f0 = (undefined1  [2])CONCAT11(0,auStack_f0[0]);
            uVar5 = _auStack_f0;
            uStack_ec._1_3_ = SUB83(uVar4,5);
            _auStack_f0 = (uint)uVar5;
            _auStack_f0 = (uint5)_auStack_f0;
            break;
          }
          bVar7 = false;
          plVar18 = (long *)*plVar26;
          do {
            plVar17 = plVar18;
            if ((*(byte *)((long)plVar26 + 0x66) & 1) == 0) {
              plVar18 = *(long **)plVar26[5];
              bVar12 = 0;
              if (plVar18 != (long *)0x0) {
                lVar19 = 0;
                plVar24 = (long *)plVar26[5];
                do {
                  plVar15 = plVar18;
                  plVar18 = plVar24 + 3;
                  FUN_109efc42c();
                  if ((((ulong)plVar18 & 1) != 0) ||
                     ((((lVar25 = lVar19, cVar9 != '\0' && ((long *)plVar24[2] != plVar16)) &&
                       (lVar25 = plVar24[6], lVar19 != 0)) &&
                      (bVar6 = lVar19 != lVar25, lVar25 = lVar19, bVar6)))) {
                    bVar12 = 1;
                    *(undefined1 *)((long)plVar26 + 0x66) = 1;
                    goto LAB_109efcd50;
                  }
                  plVar18 = (long *)*plVar15;
                  lVar19 = lVar25;
                  plVar24 = plVar15;
                } while (plVar18 != (long *)0x0);
                bVar12 = 0;
              }
            }
            else {
              bVar12 = 0;
            }
LAB_109efcd50:
            uVar4 = _auStack_f0;
            bVar7 = (bool)(bVar7 | bVar12);
          } while (((long *)*plVar17 != (long *)0x0) &&
                  (plVar18 = (long *)*plVar17, plVar26 = plVar17, (int)plVar17[3] == 8));
          auStack_f0 = (undefined1  [2])CONCAT11(0,auStack_f0[0]);
          uVar5 = _auStack_f0;
          uStack_ec._1_3_ = SUB83(uVar4,5);
          _auStack_f0 = (uint)uVar5;
          _auStack_f0 = (uint5)_auStack_f0;
        } while (bVar7);
        *(char *)((long)plVar20 + 0x6d) = cVar9;
        bVar12 = auStack_ee[1];
        *(byte *)((long)plVar20 + 0x6e) = auStack_ee[1];
        plVar29 = plVar20;
        FUN_109ecc644();
        plVar29 = (long *)plVar29[4];
        if (((long *)*plVar29 != (long *)0x0) && ((int)plVar29[3] == 8)) {
          cVar9 = *(char *)((long)param_2 + 0x24);
          plVar16 = (long *)*plVar29;
          do {
            plVar26 = plVar16;
            if (cVar9 == '\0') {
              if ((*(byte *)((long)plVar29 + 0x66) & 1) == 0) goto LAB_109efcde0;
              uVar14 = 0;
            }
            else {
              *(undefined2 *)((long)plVar29 + 0x66) = 0;
LAB_109efcde0:
              plVar16 = *(long **)plVar29[5];
              uVar14 = 0;
              if (plVar16 != (long *)0x0) {
                plVar18 = (long *)plVar29[5];
                lVar19 = 0;
                do {
                  plVar17 = plVar16;
                  if (bVar12 != 0) {
                    plVar16 = *(long **)(*(long *)plVar18[6] + 0x10);
                    if (*(uint *)(plVar16 + 8) < *(uint *)(*plVar23 + 0x40)) {
LAB_109efce40:
                      plVar16 = plVar18 + 3;
                      FUN_109efc42c();
                      if ((((ulong)plVar16 & 1) == 0) &&
                         ((lVar25 = plVar18[6], lVar19 == 0 ||
                          (lVar25 = lVar19, lVar19 == plVar18[6])))) goto LAB_109efce74;
                    }
                    else if (*(char *)(plVar18[6] + 0x1f) == '\x01') {
                      do {
                        plVar16 = (long *)plVar16[3];
                      } while ((int)plVar16[2] != 2);
                      if (plVar16 == plVar20) goto LAB_109efce40;
                    }
LAB_109efce80:
                    uVar14 = 1;
                    *(undefined1 *)((long)plVar29 + 0x66) = 1;
                    goto LAB_109efce8c;
                  }
                  plVar18 = plVar18 + 3;
                  FUN_109efc42c();
                  lVar25 = lVar19;
                  if (((ulong)plVar18 & 1) != 0) goto LAB_109efce80;
LAB_109efce74:
                  plVar16 = (long *)*plVar17;
                  plVar18 = plVar17;
                  lVar19 = lVar25;
                } while (plVar16 != (long *)0x0);
                uVar14 = 0;
              }
            }
LAB_109efce8c:
            uVar28 = uVar28 | uVar14;
          } while (((long *)*plVar26 != (long *)0x0) &&
                  (plVar16 = (long *)*plVar26, plVar29 = plVar26, (int)plVar26[3] == 8));
        }
        if (uStack_ec._1_1_ != '\0') {
          bVar12 = 1;
        }
        *(byte *)((long)param_2 + 0x25) = bVar12 | *(byte *)((long)param_2 + 0x25);
        uVar27 = uVar27 | uVar28;
      }
      else if (iVar2 == 1) {
        lStack_108 = plVar20[5];
        lStack_110 = plVar20[4];
        plStack_f8 = (long *)plVar20[7];
        lStack_100 = plVar20[6];
        if ((*(byte *)((long)param_2 + 0x25) & 1) == 0) {
          uVar28 = (uint)*(byte *)((long)plStack_f8 + 0x1e);
        }
        else {
          uVar28 = 0;
          FUN_109efc42c();
        }
        lVar19 = param_2[4];
        lStack_108 = param_2[1];
        lStack_110 = *param_2;
        plStack_f8 = (long *)param_2[3];
        lStack_100 = param_2[2];
        bVar12 = (byte)uVar28 & 1;
        _auStack_ee = (undefined6)((ulong)lVar19 >> 0x10);
        auStack_f0[0] = (byte)lVar19;
        auStack_f0 = (undefined1  [2])CONCAT11((byte)((ulong)lVar19 >> 8) | bVar12,auStack_f0[0]);
        plVar29 = plVar20 + 9;
        FUN_109efc4c0(plVar29,&lStack_110);
        lVar19 = param_2[4];
        lStack_88 = param_2[1];
        lStack_90 = *param_2;
        lStack_78 = param_2[3];
        lStack_80 = param_2[2];
        _auStack_6e = (undefined6)((ulong)lVar19 >> 0x10);
        _uStack_70 = CONCAT11((byte)((ulong)lVar19 >> 8) | bVar12,(char)lVar19);
        plVar23 = plVar20 + 0xd;
        FUN_109efc4c0(plVar23,&lStack_90);
        lVar19 = param_2[3];
        if (lVar19 == 0) {
LAB_109efcfc8:
          bVar7 = false;
        }
        else {
          lVar25 = *(long *)(*(long *)plVar20[7] + 0x10);
          if (*(uint *)(lVar25 + 0x40) < *(uint *)(*(long *)(lVar19 + 0x20) + 0x40)) {
            bVar7 = true;
          }
          else {
            if (*(char *)(plVar20[7] + 0x1f) != '\x01') goto LAB_109efcfc8;
            do {
              lVar25 = *(long *)(lVar25 + 0x18);
            } while (*(int *)(lVar25 + 0x10) != 2);
            bVar7 = lVar25 == lVar19;
          }
        }
        uVar14 = (uint)plVar29 | (uint)plVar23;
        plVar29 = plVar20;
        FUN_109ecc644();
        plVar29 = (long *)plVar29[4];
        if (((long *)*plVar29 != (long *)0x0) && ((int)plVar29[3] == 8)) {
          cVar9 = *(char *)((long)param_2 + 0x24);
          plVar23 = (long *)*plVar29;
          do {
            plVar16 = plVar23;
            if (cVar9 == '\0') {
              if ((*(byte *)((long)plVar29 + 0x66) & 1) == 0) goto LAB_109efd028;
LAB_109efd090:
              uVar11 = 0;
            }
            else {
              uVar8 = 0;
              *(undefined1 *)((long)plVar29 + 0x66) = 0;
              if (bVar7) {
                plVar23 = plVar29;
                FUN_109efd33c(plVar29,lVar19);
                uVar8 = SUB81(plVar23,0);
              }
              *(undefined1 *)((long)plVar29 + 0x67) = uVar8;
LAB_109efd028:
              uVar11 = *(uint *)(param_2 + 2);
              plVar23 = *(long **)plVar29[5];
              if (plVar23 == (long *)0x0) {
                uVar13 = 1;
              }
              else {
                uVar13 = 0;
                plVar26 = (long *)plVar29[5];
                do {
                  plVar18 = plVar23;
                  plVar23 = plVar26 + 3;
                  FUN_109efc42c();
                  if (((ulong)plVar23 & 1) != 0) goto LAB_109efd098;
                  if (*(int *)(*(long *)plVar26[6] + 0x18) != 7) {
                    uVar13 = uVar13 + 1;
                  }
                  plVar23 = (long *)*plVar18;
                  plVar26 = plVar18;
                } while (plVar23 != (long *)0x0);
                uVar13 = (uint)(uVar13 < 2);
              }
              if ((uVar13 & (uVar11 & 0x100) >> 8) != 0 || ((uVar28 ^ 1) & 1) != 0)
              goto LAB_109efd090;
LAB_109efd098:
              uVar11 = 1;
              *(undefined1 *)((long)plVar29 + 0x66) = 1;
            }
            uVar14 = uVar14 | uVar11;
          } while (((long *)*plVar16 != (long *)0x0) &&
                  (plVar23 = (long *)*plVar16, plVar29 = plVar16, (int)plVar16[3] == 8));
        }
        bVar12 = auStack_6e[0];
        if (auStack_ee[0] != '\0') {
          bVar12 = 1;
        }
        bVar12 = bVar12 | *(byte *)((long)param_2 + 0x22);
        *(byte *)((long)param_2 + 0x22) = bVar12;
        bVar1 = auStack_6e[1];
        if (auStack_ee[1] != '\0') {
          bVar1 = 1;
        }
        *(byte *)((long)param_2 + 0x23) = bVar1 | *(byte *)((long)param_2 + 0x23);
        *(byte *)((long)param_2 + 0x21) = *(byte *)((long)param_2 + 0x21) | bVar12;
        bVar12 = bStack_6b;
        if (uStack_ec._1_1_ != '\0') {
          bVar12 = 1;
        }
        *(byte *)((long)param_2 + 0x25) = bVar12 | *(byte *)((long)param_2 + 0x25);
        uVar27 = uVar27 | uVar14;
      }
      else if (iVar2 == 0) {
        plVar23 = (long *)plVar20[4];
        plVar29 = (long *)*plVar23;
        if (plVar29 == (long *)0x0) {
          uVar28 = 0;
        }
        else {
          uVar28 = 0;
          do {
            uVar14 = *(uint *)(plVar23 + 3);
            if (uVar14 != 8) {
              if (*(char *)((long)param_2 + 0x24) == '\x01') {
                if (param_2[3] == 0) {
                  uVar8 = 0;
LAB_109efc578:
                  if ((int)uVar14 < 5) {
                    if ((int)uVar14 < 3) {
                      if (uVar14 == 0) goto LAB_109efc6f0;
                      lVar19 = 0x9e;
                      lVar25 = 0x9f;
                    }
                    else {
                      if (uVar14 != 3) {
                        uVar21 = (ulong)*(uint *)(plVar23 + 5);
                        goto LAB_109efc6d8;
                      }
                      lVar19 = 0x56;
                      lVar25 = 0x57;
                    }
                    goto LAB_109efc6f8;
                  }
                  if (6 < (int)uVar14) {
                    if (uVar14 == 7) goto LAB_109efc5f8;
                    if (uVar14 == 9) {
                      plVar16 = (long *)plVar23[5];
                      plVar26 = *(long **)plVar23[5];
                      do {
                        if ((*(byte *)((long)plVar16 + 0x11) & 1) == 0) {
                          *(undefined1 *)((long)plVar16 + 0x56) = 0;
                          *(undefined1 *)((long)plVar16 + 0x57) = uVar8;
                        }
                        plVar18 = (long *)*plVar26;
                        plVar16 = plVar26;
                        plVar26 = plVar18;
                      } while (plVar18 != (long *)0x0);
                      goto LAB_109efc700;
                    }
                    if (*(int *)(plVar23 + 5) == 1) {
                      lVar19 = 0x7e;
                      lVar25 = 0x7f;
                      goto LAB_109efc6f8;
                    }
                    goto LAB_109efc914;
                  }
                  if (uVar14 == 5) {
LAB_109efc5f8:
                    lVar19 = 0x46;
                    lVar25 = 0x47;
                    goto LAB_109efc6f8;
                  }
LAB_109efc794:
                  if (*(int *)(plVar23 + 5) == 2) {
                    if (((*(byte *)((long)param_2 + 0x23) & 1) != 0) ||
                       (*(char *)((long)param_2 + 0x21) != '\x01')) goto LAB_109efc960;
                    *(undefined1 *)((long)param_2 + 0x23) = 1;
                    uVar14 = 1;
                  }
                  else if (((*(int *)(plVar23 + 5) == 3) &&
                           ((*(byte *)((long)param_2 + 0x22) & 1) == 0)) &&
                          (*(char *)((long)param_2 + 0x21) == '\x01')) {
                    *(undefined1 *)((long)param_2 + 0x22) = 1;
                    uVar14 = 1;
                  }
                  else {
LAB_109efc960:
                    uVar14 = 0;
                  }
                  uVar28 = uVar28 | uVar14;
                  goto LAB_109efcaa0;
                }
                uVar8 = 1;
                uVar11 = 1 << (ulong)(uVar14 & 0x1f);
                if ((uVar11 & 0x4e0) != 0) goto LAB_109efc578;
                if ((uVar11 & 0xb) != 0) {
LAB_109efc568:
                  plVar16 = plVar23;
                  FUN_109efd33c();
                  uVar8 = SUB81(plVar16,0);
                  goto LAB_109efc578;
                }
                uVar21 = (ulong)*(uint *)(plVar23 + 5);
                uVar22 = (ulong)(byte)(&UNK_110b671ba)[uVar21 * 0x68];
                if ((uVar22 == 0) || ((*(uint *)((long)plVar23 + uVar22 * 4 + 0x50) >> 2 & 1) == 0))
                {
                  if (uVar21 < 0xad) {
                    if (((uVar21 == 3) || (uVar21 == 0x35)) || (uVar21 == 0x9d)) goto LAB_109efc6c8;
LAB_109efcab8:
                    if (((*(uint *)(&UNK_110b671ec + uVar21 * 0x68) ^ 0xffffffff) & 3) == 0)
                    goto LAB_109efc568;
                    goto LAB_109efc6d4;
                  }
                  if (0x1d0 < uVar21) {
                    if ((uVar21 != 0x1d1) && (uVar21 != 0x1e6)) goto LAB_109efcab8;
LAB_109efc6c8:
                    if ((*(uint *)((long)plVar23 + uVar22 * 4 + 0x50) >> 6 & 1) != 0)
                    goto LAB_109efc568;
                    goto LAB_109efc6d4;
                  }
                  if (uVar21 == 0xad) goto LAB_109efc6c8;
                  if (uVar21 != 0x112) goto LAB_109efcab8;
                  if (((*(ushort *)(*(long *)plVar23[0x13] + 0x2c) & 0x487) != 0) ||
                     ((*(uint *)((long)plVar23 + uVar22 * 4 + 0x50) >> 6 & 1) != 0))
                  goto LAB_109efc568;
                  uVar8 = 0;
                  uVar21 = 0x112;
                }
                else {
LAB_109efc6d4:
                  uVar8 = 0;
                }
LAB_109efc6d8:
                if (((&UNK_110b6719c)[uVar21 * 0x68] & 1) != 0) {
LAB_109efc6f0:
                  lVar19 = 0x4e;
                  lVar25 = 0x4f;
LAB_109efc6f8:
                  *(undefined1 *)((long)plVar23 + lVar19) = 0;
                  *(undefined1 *)((long)plVar23 + lVar25) = uVar8;
                  goto LAB_109efc700;
                }
LAB_109efc8f8:
                plVar29 = plVar23;
                FUN_109efd77c(plVar23,param_2);
                uVar11 = (uint)plVar29;
              }
              else {
LAB_109efc700:
                if ((int)uVar14 < 5) {
                  if ((int)uVar14 < 3) {
                    if (uVar14 == 0) {
                      if ((*(byte *)((long)plVar23 + 0x4e) & 1) == 0) {
                        uVar21 = (ulong)(byte)(&UNK_110b78540)[(ulong)*(uint *)(plVar23 + 5) * 0x68]
                        ;
                        if (uVar21 != 0) {
                          plVar29 = plVar23 + 10;
                          cVar9 = *(char *)((long)param_2 + 0x25);
                          do {
                            lStack_108 = plVar29[1];
                            lStack_110 = *plVar29;
                            plStack_f8 = (long *)plVar29[3];
                            lStack_100 = plVar29[2];
                            if (cVar9 == '\0') {
                              if (*(char *)((long)plStack_f8 + 0x1e) == '\x01') goto LAB_109efc9cc;
                            }
                            else {
                              uVar22 = 0;
                              FUN_109efc42c();
                              if ((uVar22 & 1) != 0) {
LAB_109efc9cc:
                                uVar11 = 1;
                                *(undefined1 *)((long)plVar23 + 0x4e) = 1;
                                goto LAB_109efca98;
                              }
                            }
                            plVar29 = plVar29 + 6;
                            uVar21 = uVar21 - 1;
                          } while (uVar21 != 0);
                        }
                        uVar11 = 0;
                      }
                      else {
LAB_109efc914:
                        uVar11 = 0;
                      }
                    }
                    else {
                      if ((*(byte *)((long)plVar23 + 0x9e) & 1) != 0) goto LAB_109efc914;
                      uVar11 = 0;
                      uVar14 = 0;
                      iVar2 = *(int *)(plVar23 + 5);
                      if (iVar2 < 3) {
                        if (iVar2 == 0) {
                          lVar25 = param_2[1];
                          lVar19 = plVar23[7];
                          uVar22 = *(ulong *)(lVar19 + 0x20);
                          uVar14 = (uint)uVar22 & 0x1fffff;
                          uVar21 = (ulong)uVar14;
                          FUN_109efdfc8();
                          if ((uVar21 & 1) == 0) {
                            if (uVar14 == 1) {
                              uStack_a8 = 0;
                              uStack_b0 = 0;
                              uStack_98 = 0;
                              uStack_a0 = 0;
                              uStack_c8 = 0;
                              uStack_d0 = 0;
                              uStack_b8 = 0;
                              uStack_c0 = 0;
                              uStack_e8 = 0;
                              _auStack_f0 = 0;
                              uStack_d8 = 0;
                              uStack_e0 = 0;
                              lStack_108 = 0;
                              lStack_110 = 0;
                              plStack_f8 = (long *)0x0;
                              lStack_100 = 0;
                              uVar10 = *(undefined4 *)(lVar19 + 0x3c);
                              FUN_109eccd30();
                              uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar10);
                              FUN_109efd77c(&lStack_110,param_2);
                              uVar11 = (uint)uStack_c8._6_1_;
                              goto LAB_109efca90;
                            }
                            uVar11 = *(uint *)(param_2 + 2);
                            uVar3 = *(ushort *)(lVar25 + 0x61);
                            if ((((uVar22 & 0xe00000000) != 0x400000000) || (uVar14 != 4)) ||
                               (((uVar3 & 0xff) != 4 || ((uVar11 & 1) == 0)))) {
                              if (((uVar3 & 0xff) == 1) && ((uVar11 >> 1 & 1) != 0)) {
                                if ((uVar22 & 0x11fffff) == 0x1000008) {
LAB_109efcb90:
                                  uVar11 = 0;
                                  goto LAB_109efca90;
                                }
                              }
                              else if (((uVar22 & 0x11fffff) == 0x1000004) &&
                                      (((uVar3 & 0xff) == 2 && ((uVar11 >> 2 & 1) != 0))))
                              goto LAB_109efcb90;
                              uVar11 = 1;
                              goto LAB_109efca90;
                            }
                          }
                          uVar11 = 0;
                        }
                        else {
                          if (iVar2 == 1) goto LAB_109efc9dc;
                          if (iVar2 == 2) goto LAB_109efca64;
                        }
                      }
                      else {
                        if (iVar2 == 3) {
LAB_109efc9dc:
                          lStack_108 = plVar23[0xc];
                          lStack_110 = plVar23[0xb];
                          plStack_f8 = (long *)plVar23[0xe];
                          lStack_100 = plVar23[0xd];
                          if ((*(byte *)((long)param_2 + 0x25) & 1) == 0) {
                            uVar14 = (uint)*(byte *)((long)plStack_f8 + 0x1e);
                          }
                          else {
                            uVar14 = 0;
                            FUN_109efc42c();
                          }
                        }
                        else if (iVar2 != 4) {
                          if (iVar2 == 5) {
                            uVar14 = *(uint *)(plVar23[7] + 0x20) & 0x1fffff;
                            FUN_109efdfc8();
                            if (uVar14 == 0) {
                              uVar11 = 1;
                            }
                            else {
                              lStack_108 = plVar23[8];
                              lStack_110 = plVar23[7];
                              plStack_f8 = (long *)plVar23[10];
                              lStack_100 = plVar23[9];
                              if ((*(byte *)((long)param_2 + 0x25) & 1) == 0) {
                                uVar11 = (uint)*(byte *)((long)plStack_f8 + 0x1e);
                              }
                              else {
                                uVar11 = 0;
                                FUN_109efc42c();
                              }
                            }
                          }
                          goto LAB_109efca90;
                        }
LAB_109efca64:
                        lStack_108 = plVar23[8];
                        lStack_110 = plVar23[7];
                        plStack_f8 = (long *)plVar23[10];
                        lStack_100 = plVar23[9];
                        if ((*(byte *)((long)param_2 + 0x25) & 1) == 0) {
                          uVar11 = (uint)*(byte *)((long)plStack_f8 + 0x1e);
                        }
                        else {
                          uVar11 = 0;
                          FUN_109efc42c();
                        }
                        uVar11 = uVar14 | uVar11;
                      }
LAB_109efca90:
                      *(byte *)((long)plVar23 + 0x9e) = (byte)uVar11 & 1;
                    }
                  }
                  else {
                    if (uVar14 != 3) goto LAB_109efc8f8;
                    if ((*(byte *)((long)plVar23 + 0x56) & 1) != 0) goto LAB_109efc914;
                    uVar14 = *(uint *)(plVar23 + 0xc);
                    if (uVar14 == 0) {
                      uVar11 = 0;
                    }
                    else {
                      uVar21 = 0;
                      uVar11 = 0;
                      plVar29 = (long *)plVar23[0xb];
                      do {
                        if (*(uint *)(plVar29 + 4) < 0x11) {
                          uVar13 = 1 << (ulong)(*(uint *)(plVar29 + 4) & 0x1f);
                          if ((uVar13 & 0xa800) == 0) {
                            if ((uVar13 & 0x15000) == 0) goto LAB_109efc8c0;
                            lStack_108 = plVar29[1];
                            lStack_110 = *plVar29;
                            plStack_f8 = (long *)plVar29[3];
                            lStack_100 = plVar29[2];
                            if (*(char *)((long)param_2 + 0x25) == '\x01') {
                              uVar22 = 0;
                              FUN_109efc42c();
                              if ((uVar22 & 1) != 0) {
LAB_109efc880:
                                uVar13 = (uint)*(byte *)((long)plVar23 + 0x76);
                                goto LAB_109efc8a4;
                              }
                            }
                            else if (*(char *)((long)plStack_f8 + 0x1e) == '\x01')
                            goto LAB_109efc880;
LAB_109efc8a0:
                            uVar13 = 0;
                          }
                          else {
                            lStack_108 = plVar29[1];
                            lStack_110 = *plVar29;
                            plStack_f8 = (long *)plVar29[3];
                            lStack_100 = plVar29[2];
                            if (*(char *)((long)param_2 + 0x25) != '\x01') {
                              if (*(char *)((long)plStack_f8 + 0x1e) == '\x01') goto LAB_109efc898;
                              goto LAB_109efc8a0;
                            }
                            uVar22 = 0;
                            FUN_109efc42c();
                            if ((uVar22 & 1) == 0) goto LAB_109efc8a0;
LAB_109efc898:
                            uVar13 = (uint)*(byte *)((long)plVar23 + 0x75);
                          }
LAB_109efc8a4:
                          uVar11 = uVar13 | uVar11 & 1;
                        }
                        else {
LAB_109efc8c0:
                          lStack_108 = plVar29[1];
                          lStack_110 = *plVar29;
                          plStack_f8 = (long *)plVar29[3];
                          lStack_100 = plVar29[2];
                          if ((*(byte *)((long)param_2 + 0x25) & 1) == 0) {
                            uVar13 = (uint)*(byte *)((long)plStack_f8 + 0x1e);
                          }
                          else {
                            uVar13 = 0;
                            FUN_109efc42c();
                          }
                          uVar11 = (uVar11 | uVar13) & 1;
                        }
                        uVar21 = uVar21 + 1;
                        plVar29 = plVar29 + 5;
                      } while (uVar21 < uVar14);
                    }
                    *(char *)((long)plVar23 + 0x56) = (char)uVar11;
                  }
                }
                else {
                  uVar11 = 0;
                  if (((int)uVar14 < 7) && (uVar14 != 5)) goto LAB_109efc794;
                }
              }
LAB_109efca98:
              uVar28 = uVar28 | uVar11;
              plVar29 = (long *)*plVar23;
            }
LAB_109efcaa0:
            plVar23 = plVar29;
            plVar29 = (long *)*plVar23;
          } while (plVar29 != (long *)0x0);
        }
        if ((*(byte *)((long)param_2 + 0x21) & 1) == 0) {
          if ((*(byte *)((long)param_2 + 0x22) & 1) == 0) {
            bVar12 = *(byte *)((long)param_2 + 0x23);
          }
          else {
            bVar12 = 1;
          }
        }
        else {
          bVar12 = 1;
        }
        if (*(byte *)((long)plVar20 + 0x44) != (bVar12 & 1)) {
          *(byte *)((long)plVar20 + 0x44) = bVar12 & 1;
          uVar28 = 1;
        }
        uVar27 = uVar27 | uVar28;
      }
      plVar20 = (long *)*plVar20;
    } while (*plVar20 != 0);
  }
  return uVar27 & 1;
}



/* Entry: 109efd188; end: 109efd2a7;  */

void FUN_109efd188(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  int aiStack_48 [2];
  long lStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined2 uStack_24;
  
  *(ushort *)(param_1 + 0x14e) = *(ushort *)(param_1 + 0x14e) & 0xbfff;
  aiStack_48[0] = (int)*(char *)(param_1 + 0x61);
  uStack_38 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0xb4);
  uStack_30 = 0;
  uStack_28 = 1;
  uStack_24 = 1;
  plVar2 = *(long **)(param_1 + 0x178);
  plVar3 = (long *)*plVar2;
  if (plVar3 != (long *)0x0) {
    plVar5 = (long *)0x0;
    plVar4 = plVar2;
    plVar7 = plVar3;
    do {
      plVar1 = plVar4;
      if ((char)plVar4[7] == '\0') {
        plVar1 = plVar5;
      }
      plVar8 = (long *)*plVar7;
      plVar5 = plVar1;
      plVar4 = plVar7;
      plVar7 = plVar8;
    } while (plVar8 != (long *)0x0);
    if (plVar1 != (long *)0x0) {
      lVar9 = plVar1[6];
      goto LAB_109efd214;
    }
  }
  lVar9 = 0;
LAB_109efd214:
  uVar6 = *(uint *)(lVar9 + 0x84);
  lStack_40 = param_1;
  if ((uVar6 & 1) == 0) {
    FUN_109ecc784(lVar9);
    uVar6 = *(uint *)(lVar9 + 0x84);
    plVar2 = *(long **)(param_1 + 0x178);
    plVar3 = (long *)*plVar2;
  }
  *(uint *)(lVar9 + 0x84) = uVar6 | 1;
  lVar9 = 0;
  do {
    plVar5 = plVar2;
    if (*(char *)(plVar2 + 7) == '\0') {
      plVar5 = (long *)lVar9;
    }
    plVar4 = (long *)*plVar3;
    plVar2 = plVar3;
    plVar3 = plVar4;
    lVar9 = (long)plVar5;
  } while (plVar4 != (long *)0x0);
  FUN_109efc4c0(*(long *)((long)plVar5 + 0x30) + 0x30,aiStack_48);
  lVar9 = 0;
  plVar2 = *(long **)(param_1 + 0x178);
  plVar3 = (long *)**(long **)(param_1 + 0x178);
  do {
    plVar5 = plVar2;
    if (*(char *)(plVar2 + 7) == '\0') {
      plVar5 = (long *)lVar9;
    }
    plVar4 = (long *)*plVar3;
    lVar9 = (long)plVar5;
    plVar2 = plVar3;
    plVar3 = plVar4;
  } while (plVar4 != (long *)0x0);
  *(uint *)(*(long *)((long)plVar5 + 0x30) + 0x84) =
       *(uint *)(*(long *)((long)plVar5 + 0x30) + 0x84) & 0xfffffff7;
  return;
}



/* Entry: 109efd2a8; end: 109efd33b;  */

void FUN_109efd2a8(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(param_1 + 0x178);
  do {
    plVar4 = (long *)*plVar3;
    if (plVar4 == (long *)0x0) {
      return;
    }
    lVar2 = plVar3[6];
    plVar3 = plVar4;
  } while (lVar2 == 0);
  do {
    lVar2 = *(long *)(lVar2 + 0x30);
    while (plVar3 = plVar4, lVar2 != 0) {
      *(undefined1 *)(lVar2 + 0x44) = 1;
      plVar3 = *(long **)(lVar2 + 0x20);
      while (plVar1 = plVar3, plVar3 = (long *)*plVar1, plVar3 != (long *)0x0) {
        FUN_109ecc0ac();
        if (plVar1 != (long *)0x0) {
          *(undefined1 *)((long)plVar1 + 0x1e) = 1;
        }
      }
      FUN_109ecc434();
    }
    do {
      plVar4 = (long *)*plVar3;
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar2 = plVar3[6];
      plVar3 = plVar4;
    } while (lVar2 == 0);
  } while( true );
}



/* Entry: 109efd33c; end: 109efd77b;  */

void FUN_109efd33c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109efd358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)*(ushort *)(&UNK_10e06cc90 + (ulong)*(uint *)(param_1 + 0x18) * 2) * 4 +
            0x109efd35c))(1);
  return;
}



/* Entry: 109efd77c; end: 109efdfc7;  */

uint FUN_109efd77c(long param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  long lStack_48;
  
  uVar19 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar26 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar24 = 0;
  uVar9 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar10 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  uVar1 = *(uint *)(param_1 + 0x28);
  if (((&UNK_110b6719c)[(ulong)uVar1 * 0x68] != '\x01') || ((*(byte *)(param_1 + 0x4e) & 1) != 0)) {
    uVar8 = 0;
    goto LAB_109efdfac;
  }
  if (0x2a3 < uVar1 - 2) goto LAB_109efd7fc;
  uVar2 = param_2[4];
  iVar3 = *param_2;
  iVar6 = (int)param_1;
  uVar8 = 0;
  switch(uVar1) {
  default:
    goto LAB_109efd7fc;
  case 4:
  case 0x22:
  case 0x29:
  case 0x85:
  case 199:
  case 0x1df:
  case 0x241:
  case 0x242:
  case 0x243:
  case 0x245:
  case 0x256:
  case 599:
  case 0x25a:
  case 0x29e:
  case 0x29f:
  case 0x2a0:
  case 0x2a1:
    goto code_r0x000109efdd98;
  case 0x1e:
  case 0x1f:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x31:
  case 0x34:
  case 0x38:
  case 0x3a:
  case 0x40:
  case 0x45:
  case 0x53:
  case 0x54:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x89:
  case 0x99:
  case 0x9c:
  case 0x9e:
  case 0xa1:
  case 0xa3:
  case 0xa9:
  case 0xac:
  case 0xae:
  case 0xb0:
  case 0xb2:
  case 0xc2:
  case 0xc3:
  case 0xf4:
  case 0xfe:
  case 0xff:
  case 0x100:
  case 0x121:
  case 0x124:
  case 300:
  case 0x12f:
  case 0x130:
  case 0x131:
  case 0x14e:
  case 0x19b:
  case 0x19c:
  case 0x1b5:
  case 0x1c8:
  case 0x1d2:
  case 0x1e7:
  case 0x201:
  case 0x205:
  case 0x21a:
  case 0x227:
  case 0x23a:
  case 0x23b:
  case 0x23c:
  case 0x23d:
  case 0x23e:
  case 0x23f:
  case 0x240:
  case 0x248:
  case 0x25c:
  case 0x25d:
  case 0x25e:
  case 0x25f:
  case 0x260:
  case 0x261:
  case 0x263:
  case 0x291:
  case 0x2a2:
  case 0x2a3:
    uVar26 = (ulong)(byte)(&UNK_110b67190)[(ulong)uVar1 * 0x68];
    if (uVar26 != 0) {
      lVar25 = param_1 + 0x80;
      cVar4 = *(char *)((long)param_2 + 0x25);
      do {
        if (cVar4 == '\0') {
          if ((*(byte *)(*(long *)(lVar25 + 0x18) + 0x1e) & 1) != 0) goto LAB_109efd7fc;
        }
        else {
          uVar19 = 0;
          FUN_109efc42c();
          if ((uVar19 & 1) != 0) goto LAB_109efd7fc;
        }
        lVar25 = lVar25 + 0x20;
        uVar26 = uVar26 - 1;
      } while (uVar26 != 0);
    }
    goto code_r0x000109efd850;
  case 0x33:
  case 0x39:
  case 0x9b:
  case 0xa2:
  case 0xab:
  case 0xb1:
  case 0x1d1:
  case 0x1d4:
    cVar4 = *(char *)((long)param_2 + 0x25);
    if (cVar4 == '\x01') {
      FUN_109efc42c();
      if ((uVar19 & 1) != 0) {
code_r0x000109efd954:
        if ((*(uint *)(param_1 + (ulong)(byte)(&UNK_110b671ba)[(ulong)uVar1 * 0x68] * 4 + 0x50) >> 5
            & 1) != 0) goto LAB_109efd7fc;
        lVar25 = *(long *)(param_1 + 0xb8);
        if (cVar4 == '\0') goto code_r0x000109efda44;
      }
code_r0x000109efd97c:
      FUN_109efc42c();
      if ((uVar26 & 1) == 0) {
code_r0x000109efda4c:
        if ((uVar2 >> 7 & 1) != 0) {
          bVar7 = (*(uint *)(param_1 + (ulong)(byte)(&UNK_110b671ba)[(ulong)uVar1 * 0x68] * 4 + 0x50
                            ) & 0x10) == 0;
          goto code_r0x000109efdf04;
        }
        goto code_r0x000109efd850;
      }
    }
    else {
      if ((*(byte *)(*(long *)(param_1 + 0x98) + 0x1e) & 1) != 0) goto code_r0x000109efd954;
      lVar25 = *(long *)(param_1 + 0xb8);
code_r0x000109efda44:
      if ((*(byte *)(lVar25 + 0x1e) & 1) == 0) goto code_r0x000109efda4c;
    }
    goto LAB_109efd7fc;
  case 0x35:
  case 0x3b:
  case 0x9d:
  case 0xa4:
  case 0xad:
  case 0xb3:
    cVar4 = *(char *)((long)param_2 + 0x25);
    if (cVar4 == '\x01') {
      FUN_109efc42c();
      if ((uVar11 & 1) != 0) {
code_r0x000109efd9c0:
        if ((*(uint *)(param_1 + (ulong)(byte)(&UNK_110b671ba)[(ulong)uVar1 * 0x68] * 4 + 0x50) >> 5
            & 1) != 0) goto LAB_109efd7fc;
        lStack_48 = *(long *)(param_1 + 0xb8);
        if (cVar4 == '\0') goto code_r0x000109efdb3c;
      }
      FUN_109efc42c();
      if ((uVar14 & 1) == 0) {
        uVar26 = param_1 + 0xc0;
        FUN_109efc42c();
        if ((uVar26 & 1) == 0) {
          uVar26 = param_1 + 0xe0;
          goto code_r0x000109efd97c;
        }
      }
    }
    else {
      if ((*(byte *)(*(long *)(param_1 + 0x98) + 0x1e) & 1) != 0) goto code_r0x000109efd9c0;
      lStack_48 = *(long *)(param_1 + 0xb8);
code_r0x000109efdb3c:
      if (((*(byte *)(lStack_48 + 0x1e) & 1) == 0) &&
         ((*(byte *)(*(long *)(param_1 + 0xd8) + 0x1e) & 1) == 0)) {
        lVar25 = *(long *)(param_1 + 0xf8);
        goto code_r0x000109efda44;
      }
    }
    goto LAB_109efd7fc;
  case 0x3f:
  case 0xa8:
  case 0xb7:
    cVar4 = *(char *)((long)param_2 + 0x25);
    if (cVar4 == '\x01') {
      FUN_109efc42c();
      if ((uVar13 & 1) != 0) {
code_r0x000109efdafc:
        if ((*(uint *)(param_1 + (ulong)(byte)(&UNK_110b671ba)[(ulong)uVar1 * 0x68] * 4 + 0x50) >> 5
            & 1) != 0) goto LAB_109efd7fc;
        lStack_48 = *(long *)(param_1 + 0xb8);
        if (cVar4 == '\0') goto code_r0x000109efde9c;
      }
      FUN_109efc42c();
      if ((uVar16 & 1) == 0) {
        uVar23 = iVar6 + 0xc0;
        goto code_r0x000109efdd10;
      }
    }
    else {
      if ((*(byte *)(*(long *)(param_1 + 0x98) + 0x1e) & 1) != 0) goto code_r0x000109efdafc;
      lStack_48 = *(long *)(param_1 + 0xb8);
code_r0x000109efde9c:
      if ((*(byte *)(lStack_48 + 0x1e) & 1) == 0) {
        lVar25 = *(long *)(param_1 + 0xd8);
        goto code_r0x000109efdf44;
      }
    }
    goto LAB_109efd7fc;
  case 0x4c:
  case 0xcd:
  case 0xd0:
  case 0xd3:
  case 0xe1:
  case 0xe4:
  case 0xe5:
  case 0xe6:
  case 0xe7:
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
  case 0xec:
  case 0xed:
  case 0xee:
  case 0xef:
  case 0xf0:
  case 0xf2:
  case 0xf7:
  case 0xf8:
  case 0x101:
  case 0x103:
  case 0x104:
  case 0x105:
  case 0x106:
  case 0x107:
  case 0x108:
  case 0x10b:
  case 0x10c:
  case 0x10d:
  case 0x10e:
  case 0x10f:
  case 0x110:
  case 0x114:
  case 0x115:
  case 0x117:
  case 0x118:
  case 0x119:
  case 0x11c:
  case 0x132:
  case 0x13a:
  case 0x140:
  case 0x141:
  case 0x143:
  case 0x14d:
  case 0x150:
  case 0x151:
  case 0x155:
  case 0x15a:
  case 0x15b:
  case 0x15f:
  case 0x160:
  case 0x161:
  case 0x162:
  case 0x163:
  case 0x167:
  case 0x16d:
  case 0x171:
  case 0x173:
  case 0x174:
  case 0x175:
  case 0x177:
  case 0x178:
  case 0x179:
  case 0x17b:
  case 0x17c:
  case 0x17d:
  case 0x17e:
  case 0x17f:
  case 0x180:
  case 0x18b:
  case 0x18e:
  case 0x19e:
  case 0x19f:
  case 0x1a0:
  case 0x1a1:
  case 0x1a2:
  case 0x1a3:
  case 0x1a4:
  case 0x1a5:
  case 0x1a6:
  case 0x1a7:
  case 0x1a8:
  case 0x1a9:
  case 0x1aa:
  case 0x1ab:
  case 0x1ac:
  case 0x1ad:
  case 0x1b8:
  case 0x1b9:
  case 0x1bc:
  case 0x1bd:
  case 0x1c0:
  case 0x1cc:
  case 0x1d0:
  case 0x1d5:
  case 0x1d8:
  case 0x1d9:
  case 0x1da:
  case 0x1db:
  case 0x1e0:
  case 0x1e4:
  case 0x1e8:
  case 0x1eb:
  case 0x1ed:
  case 0x1f0:
  case 499:
  case 0x1f5:
  case 0x1f7:
  case 0x1f8:
  case 0x203:
  case 0x206:
  case 0x207:
  case 0x20e:
  case 0x20f:
  case 0x210:
  case 0x211:
  case 0x212:
  case 0x213:
  case 0x214:
  case 0x215:
  case 0x218:
  case 0x219:
  case 0x21d:
  case 0x220:
  case 0x221:
  case 0x222:
  case 0x223:
  case 0x226:
  case 0x22c:
  case 0x234:
  case 0x29b:
    break;
  case 0x5f:
    uVar8 = (uint)(*(int *)(param_1 + (ulong)(byte)(&UNK_110b671e0)[(ulong)uVar1 * 0x68] * 4 + 0x50)
                  != 0);
    break;
  case 100:
  case 0x88:
    if (*(char *)((long)param_2 + 0x25) == '\x01') {
      FUN_109efc42c();
      if ((uVar15 & 1) != 0) {
code_r0x000109efdce0:
        uVar8 = *(uint *)(param_1 + (ulong)(byte)(&UNK_110b671ba)[(ulong)uVar1 * 0x68] * 4 + 0x50)
                >> 5 & 1;
        break;
      }
    }
    else if (*(char *)(*(long *)(param_1 + 0x98) + 0x1e) == '\x01') goto code_r0x000109efdce0;
    goto code_r0x000109efd850;
  case 0xb8:
  case 0xb9:
code_r0x000109efdd5c:
    iVar3 = *(int *)(param_1 + (ulong)(byte)(&UNK_110b671b4)[(ulong)uVar1 * 0x68] * 4 + 0x50);
    if (*(char *)((long)param_2 + 0x25) == '\x01') {
      FUN_109efc42c();
      if ((uVar21 & 1) != 0) goto code_r0x000109efdd90;
code_r0x000109efddac:
      uVar8 = (uint)*(byte *)(param_2 + 8);
    }
    else {
      if ((*(byte *)(*(long *)(param_1 + 0x98) + 0x1e) & 1) == 0) goto code_r0x000109efddac;
code_r0x000109efdd90:
      uVar8 = 1;
    }
    if (iVar3 < 0x137) {
      if (0x3d < iVar3 - 0xe3U || (1L << ((ulong)(iVar3 - 0xe3U) & 0x3f) & 0x2000000000000005U) == 0
         ) goto LAB_109efd7fc;
    }
    else if (((0x13 < iVar3 - 0x137U || (1 << (ulong)(iVar3 - 0x137U & 0x1f) & 0x80003U) == 0) &&
             (iVar3 != 0x1a0)) && (iVar3 != 0x1a2)) goto LAB_109efd7fc;
    break;
  case 0xca:
  case 0xcb:
  case 0x202:
  case 0x204:
    bVar5 = *(byte *)((long)param_2 + 0x25);
    if (bVar5 == 1) {
      FUN_109efc42c();
      if ((uVar12 & 1) == 0) goto code_r0x000109efdd10;
    }
    else if ((*(byte *)(*(long *)(param_1 + 0x98) + 0x1e) & 1) == 0) {
      lVar25 = *(long *)(param_1 + 0xb8);
      goto code_r0x000109efdf44;
    }
    if ((*(uint *)(param_1 + (ulong)(byte)(&UNK_110b671ba)[(ulong)uVar1 * 0x68] * 4 + 0x50) >> 5 & 1
        ) != 0) goto LAB_109efd7fc;
    lVar25 = *(long *)(param_1 + 0xb8);
    if ((bVar5 & 1) == 0) goto code_r0x000109efdf44;
code_r0x000109efdd10:
    FUN_109efc42c();
    uVar8 = uVar23;
    break;
  case 0xd6:
  case 0x126:
  case 0x14f:
code_r0x000109efdc44:
    bVar7 = (uVar2 & 1) == 0;
    goto code_r0x000109efdf04;
  case 0x112:
  case 0x12a:
  case 299:
  case 0x136:
    if (((uVar2 >> 7 & 1) == 0) ||
       ((*(uint *)(param_1 + (ulong)(byte)(&UNK_110b671ba)[(ulong)uVar1 * 0x68] * 4 + 0x50) >> 4 & 1
        ) != 0)) {
      uVar26 = (ulong)(byte)(&UNK_110b67190)[(ulong)uVar1 * 0x68];
      if (uVar26 != 0) {
        lVar25 = param_1 + 0x80;
        cVar4 = *(char *)((long)param_2 + 0x25);
        do {
          if (cVar4 == '\0') {
            if ((*(byte *)(*(long *)(lVar25 + 0x18) + 0x1e) & 1) != 0) goto LAB_109efd7fc;
          }
          else {
            uVar19 = 0;
            FUN_109efc42c();
            if ((uVar19 & 1) != 0) goto LAB_109efd7fc;
          }
          lVar25 = lVar25 + 0x20;
          uVar26 = uVar26 - 1;
        } while (uVar26 != 0);
      }
      goto code_r0x000109efd850;
    }
    goto LAB_109efd7fc;
  case 0x122:
    bVar7 = (uVar2 & 0x10) == 0;
    goto code_r0x000109efdf04;
  case 0x127:
    lVar25 = *(long *)(param_1 + 0x98);
    goto code_r0x000109efde38;
  case 0x144:
  case 0x168:
    if ((*(byte *)((long)param_2 + 0x25) & 1) == 0) {
      uVar24 = (uint)*(byte *)(*(long *)(param_1 + 0x98) + 0x1e);
    }
    else {
      FUN_109efc42c();
    }
    if (iVar3 != 2) {
      if (iVar3 != 4) goto LAB_109efd7fc;
      goto code_r0x000109efde58;
    }
    if ((*(byte *)(param_2 + 8) & 1) != 0) goto code_r0x000109efd850;
    uVar24 = uVar24 | uVar2 >> 2 ^ 0xffffffff;
    goto code_r0x000109efde5c;
  case 0x147:
    lVar25 = *(long *)(param_1 + 0xb8);
code_r0x000109efde38:
    if ((*(byte *)((long)param_2 + 0x25) & 1) == 0) {
      uVar24 = (uint)*(byte *)(lVar25 + 0x1e);
    }
    else {
      uVar24 = 0;
      FUN_109efc42c();
    }
code_r0x000109efde58:
    uVar24 = uVar24 | uVar2 ^ 0xffffffff;
code_r0x000109efde5c:
    uVar8 = uVar24 & 1;
    break;
  case 0x148:
code_r0x000109efdf64:
    uVar8 = *(byte *)(param_2 + 8) ^ 1;
    break;
  case 0x164:
    if ((*(byte *)((long)param_2 + 0x25) & 1) == 0) {
      uVar10 = (uint)*(byte *)(*(long *)(param_1 + 0x98) + 0x1e);
    }
    else {
      FUN_109efc42c();
    }
    uVar8 = uVar10;
    if (1 < iVar3 - 6U) {
      if (iVar3 != 4) {
        uVar24 = uVar10 | uVar2 >> 1 ^ 0xffffffff;
        goto code_r0x000109efde5c;
      }
      goto LAB_109efd7fc;
    }
    break;
  case 0x169:
    if (*(char *)((long)param_2 + 0x25) == '\x01') {
      FUN_109efc42c();
      if ((uVar22 & 1) == 0) {
code_r0x000109efde84:
        uVar23 = iVar6 + 0xa0;
        goto code_r0x000109efdd10;
      }
    }
    else if ((*(byte *)(*(long *)(param_1 + 0x98) + 0x1e) & 1) == 0) {
code_r0x000109efdf40:
      lVar25 = *(long *)(param_1 + 0xb8);
      goto code_r0x000109efdf44;
    }
    goto LAB_109efd7fc;
  case 0x16a:
    if (*(char *)((long)param_2 + 0x25) == '\x01') {
      FUN_109efc42c();
      if ((uVar18 & 1) == 0) {
        uVar23 = iVar6 + 0xa0;
        FUN_109efc42c();
        goto code_r0x000109efdf78;
      }
code_r0x000109efdf18:
      uVar23 = 1;
    }
    else {
      if ((*(byte *)(*(long *)(param_1 + 0x98) + 0x1e) & 1) != 0) goto code_r0x000109efdf18;
      uVar23 = (uint)*(byte *)(*(long *)(param_1 + 0xb8) + 0x1e);
code_r0x000109efdf78:
      uVar23 = uVar23 & 1;
    }
    uVar8 = 1;
    if (iVar3 == 2) {
      uVar8 = uVar23 | (uVar2 >> 2 ^ 0xffffffff) & 1;
    }
    break;
  case 0x16b:
    if (*(char *)((long)param_2 + 0x25) == '\x01') {
      FUN_109efc42c();
      if ((uVar17 & 1) == 0) {
        uVar26 = param_1 + 0xa0;
        FUN_109efc42c();
        if ((uVar26 & 1) == 0) goto code_r0x000109efdefc;
      }
    }
    else if (((*(byte *)(*(long *)(param_1 + 0x98) + 0x1e) & 1) == 0) &&
            ((*(byte *)(*(long *)(param_1 + 0xb8) + 0x1e) & 1) == 0)) {
code_r0x000109efdefc:
      bVar7 = false;
      if ((uVar2 & 2) == 0) {
        bVar7 = iVar3 == 1;
      }
      goto code_r0x000109efdf04;
    }
    goto LAB_109efd7fc;
  case 0x176:
    if (iVar3 < 2) {
      if (iVar3 == 0) goto code_r0x000109efdf64;
      if (iVar3 == 1) {
        bVar5 = *(byte *)(param_2 + 8);
        uVar2 = uVar2 & 2;
        goto code_r0x000109efdf9c;
      }
    }
    else {
      if (iVar3 == 2) {
        bVar5 = *(byte *)(param_2 + 8);
        uVar2 = uVar2 & 4;
code_r0x000109efdf9c:
        uVar8 = (uint)(uVar2 == 0) & (bVar5 ^ 0xffffffff);
        break;
      }
      if (iVar3 == 3) goto code_r0x000109efdf64;
      if (iVar3 == 4) goto code_r0x000109efdc44;
    }
LAB_109efd7fc:
    uVar8 = 1;
    break;
  case 0x1c6:
    bVar7 = (uVar2 & 0x40) == 0;
code_r0x000109efdf04:
    uVar8 = (uint)bVar7;
    break;
  case 0x1c7:
  case 0x1cb:
    if ((*(byte *)((long)param_2 + 0x25) & 1) == 0) {
      uVar9 = (uint)*(byte *)(*(long *)(param_1 + 0x98) + 0x1e);
    }
    else {
      FUN_109efc42c();
    }
    uVar8 = uVar9 | (uVar2 & 0x80) >> 7;
    break;
  case 500:
  case 0x1f6:
    uVar23 = uVar2 & 4;
    if (iVar3 == 1) {
      uVar23 = uVar2 & 2;
    }
    uVar8 = (uint)(uVar23 == 0);
    break;
  case 0x20d:
    uVar23 = 1;
    if (iVar3 == 4) {
      uVar23 = (uint)((uVar2 & 1) == 0);
    }
    bVar7 = (uVar2 & 8) == 0;
    goto code_r0x000109efdc1c;
  case 0x21e:
  case 0x21f:
    bVar7 = iVar3 == 5;
    uVar23 = uVar2 >> 5 & 1;
code_r0x000109efdc1c:
    uVar8 = 0;
    if (bVar7) {
      uVar8 = uVar23;
    }
    break;
  case 0x22d:
    lVar25 = *(long *)(param_1 + 0x98);
    if ((*(byte *)((long)param_2 + 0x25) & 1) != 0) goto code_r0x000109efdd10;
code_r0x000109efdf44:
    uVar8 = (uint)*(byte *)(lVar25 + 0x1e);
    break;
  case 0x244:
    if (*(int *)(param_1 + (ulong)(byte)(&UNK_110b671b5)[(ulong)uVar1 * 0x68] * 4 + 0x50) != 0)
    goto code_r0x000109efdd5c;
code_r0x000109efdd98:
    uVar8 = (uint)*(byte *)(param_2 + 8);
    break;
  case 0x247:
    if (((*(uint *)(param_1 + (ulong)(byte)(&UNK_110b671dc)[(ulong)uVar1 * 0x68] * 4 + 0x50) >> 3 &
         1) != 0) && (uVar26 = (ulong)(byte)(&UNK_110b67190)[(ulong)uVar1 * 0x68], uVar26 != 0)) {
      lVar25 = param_1 + 0x80;
      cVar4 = *(char *)((long)param_2 + 0x25);
      do {
        if (cVar4 == '\0') {
          if ((*(byte *)(*(long *)(lVar25 + 0x18) + 0x1e) & 1) != 0) goto LAB_109efd7fc;
        }
        else {
          uVar19 = 0;
          FUN_109efc42c();
          if ((uVar19 & 1) != 0) goto LAB_109efd7fc;
        }
        lVar25 = lVar25 + 0x20;
        uVar26 = uVar26 - 1;
      } while (uVar26 != 0);
    }
    goto code_r0x000109efd850;
  case 0x25b:
    if (*(char *)((long)param_2 + 0x25) == '\x01') {
      FUN_109efc42c();
      if ((uVar20 & 1) != 0) goto code_r0x000109efde84;
    }
    else if (*(char *)(*(long *)(param_1 + 0x98) + 0x1e) == '\x01') goto code_r0x000109efdf40;
code_r0x000109efd850:
    uVar8 = 0;
  }
  *(byte *)(param_1 + 0x4e) = (byte)uVar8 & 1;
LAB_109efdfac:
  return uVar8 & 1;
}



/* Entry: 109efdfc8; end: 109efe023;  */

undefined8 FUN_109efdfc8(int param_1)

{
  if (param_1 < 0x200) {
    if (((param_1 != 2) && (param_1 != 0x10)) && (param_1 != 0x80)) {
      return 0;
    }
  }
  else if (param_1 < 0x80000) {
    if ((param_1 != 0x200) && (param_1 != 0x800)) {
      return 0;
    }
  }
  else if ((param_1 != 0x80000) && (param_1 != 0x100000)) {
    return 0;
  }
  return 1;
}



/* Entry: 109efe024; end: 109efe30b;  */

void FUN_109efe024(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 uStack_64;
  
  uVar6 = *(uint *)(param_1 + 0x84);
  if ((uVar6 >> 1 & 1) == 0) {
    if ((uVar6 & 1) == 0) {
      FUN_109ecc784(param_1);
      uVar6 = *(uint *)(param_1 + 0x84);
    }
    *(uint *)(param_1 + 0x84) = uVar6 | 1;
    lVar9 = *(long *)(param_1 + 0x30);
    do {
      lVar10 = lVar9;
      if (*(long *)(param_1 + 0x30) != lVar9) {
        lVar10 = 0;
      }
      *(long *)(lVar9 + 0x60) = lVar10;
      *(undefined4 *)(lVar9 + 0x68) = 0;
      *(undefined8 *)(lVar9 + 0x80) = 0xffffffff;
      func_0x000109f66b04(*(undefined8 *)(lVar9 + 0x78),0);
      FUN_109ecc3f8();
    } while (lVar9 != 0);
    lVar10 = *(long *)(param_1 + 0x30);
    lVar9 = lVar10;
    bVar2 = false;
    do {
      bVar3 = bVar2;
      if (lVar9 != lVar10) {
        uVar6 = *(uint *)(*(long *)(lVar9 + 0x58) + 0x20);
        if (uVar6 != 0) {
          lVar11 = *(long *)(*(long *)(lVar9 + 0x58) + 8);
          lVar7 = (ulong)uVar6 << 4;
          lVar8 = lVar11 + (ulong)uVar6 * 0x10;
          do {
            puVar4 = *(undefined **)(lVar11 + 8);
            if (puVar4 != (undefined *)0x0 && puVar4 != &UNK_10e47dcd0) {
              puVar5 = (undefined *)0x0;
              do {
                lVar7 = lVar11;
                if ((*(long *)(puVar4 + 0x60) != 0) &&
                   (bVar2 = puVar5 != (undefined *)0x0, puVar5 = puVar4, bVar2)) {
                  FUN_109efe380();
                  puVar5 = puVar4;
                }
                do {
                  lVar11 = lVar7 + 0x10;
                  if (lVar11 == lVar8) goto LAB_109efe0f8;
                  puVar4 = *(undefined **)(lVar7 + 0x18);
                  lVar7 = lVar11;
                } while (puVar4 == (undefined *)0x0 || puVar4 == &UNK_10e47dcd0);
              } while( true );
            }
            lVar11 = lVar11 + 0x10;
            lVar7 = lVar7 + -0x10;
          } while (lVar7 != 0);
        }
        puVar5 = (undefined *)0x0;
LAB_109efe0f8:
        puVar4 = *(undefined **)(lVar9 + 0x60);
        if (puVar4 != puVar5) {
          *(undefined **)(lVar9 + 0x60) = puVar5;
        }
        bVar3 = (bool)(bVar3 | puVar4 != puVar5);
      }
      FUN_109ecc3f8();
      lVar11 = lVar9;
      if (lVar9 == 0) {
        lVar11 = lVar10;
      }
      bVar2 = (bool)(lVar9 != 0 & bVar3);
      bVar1 = lVar9 != 0;
      lVar9 = lVar11;
    } while ((bVar1) || (bVar3));
    do {
      lVar9 = *(long *)(lVar10 + 0x58);
      if ((1 < *(uint *)(lVar9 + 0x40)) && (*(uint *)(lVar9 + 0x20) != 0)) {
        lVar11 = *(long *)(lVar9 + 8);
        lVar8 = (ulong)*(uint *)(lVar9 + 0x20) << 4;
        do {
          puVar4 = *(undefined **)(lVar11 + 8);
          if (puVar4 != (undefined *)0x0 && puVar4 != &UNK_10e47dcd0) {
            do {
              if ((*(long *)(puVar4 + 0x60) != 0) && (puVar4 != *(undefined **)(lVar10 + 0x60))) {
                do {
                  lVar8 = *(long *)(puVar4 + 0x78);
                  lVar9 = lVar10;
                  (**(code **)(lVar8 + 0x10))(lVar10);
                  FUN_109f66e48(lVar8,lVar9,lVar10,0);
                  if (lVar8 != 0) {
                    *(long *)(lVar8 + 8) = lVar10;
                  }
                  puVar4 = *(undefined **)(puVar4 + 0x60);
                } while (puVar4 != *(undefined **)(lVar10 + 0x60));
                lVar9 = *(long *)(lVar10 + 0x58);
              }
              lVar8 = lVar11;
              do {
                lVar11 = lVar8 + 0x10;
                if (lVar11 == *(long *)(lVar9 + 8) + (ulong)*(uint *)(lVar9 + 0x20) * 0x10)
                goto LAB_109efe238;
                puVar4 = *(undefined **)(lVar8 + 0x18);
                lVar8 = lVar11;
              } while (puVar4 == (undefined *)0x0 || puVar4 == &UNK_10e47dcd0);
            } while( true );
          }
          lVar11 = lVar11 + 0x10;
          lVar8 = lVar8 + -0x10;
        } while (lVar8 != 0);
      }
LAB_109efe238:
      FUN_109ecc3f8();
    } while (lVar10 != 0);
    lVar10 = *(long *)(param_1 + 0x30);
    *(undefined8 *)(lVar10 + 0x60) = 0;
    lVar11 = *(long *)(param_1 + -0x30);
    lVar9 = lVar10;
    do {
      lVar8 = *(long *)(lVar9 + 0x60);
      if (lVar8 != 0) {
        *(int *)(lVar8 + 0x68) = *(int *)(lVar8 + 0x68) + 1;
      }
      FUN_109ecc3f8();
    } while (lVar9 != 0);
    lVar8 = lVar10;
    lVar9 = 0;
    if (lVar11 != 0) {
      lVar9 = lVar11 + 0x30;
    }
    do {
      lVar11 = lVar9;
      FUN_109f658b0(lVar9,(ulong)*(uint *)(lVar8 + 0x68) << 3);
      *(long *)(lVar8 + 0x70) = lVar11;
      *(undefined4 *)(lVar8 + 0x68) = 0;
      FUN_109ecc3f8();
    } while (lVar8 != 0);
    lVar9 = *(long *)(param_1 + 0x30);
    while (lVar9 != 0) {
      lVar11 = *(long *)(lVar9 + 0x60);
      if (lVar11 != 0) {
        uVar6 = *(uint *)(lVar11 + 0x68);
        *(uint *)(lVar11 + 0x68) = uVar6 + 1;
        *(long *)(*(long *)(lVar11 + 0x70) + (ulong)uVar6 * 8) = lVar9;
      }
      FUN_109ecc3f8();
    }
    uStack_64 = 1;
    FUN_109efe30c(lVar10,&uStack_64);
  }
  return;
}



/* Entry: 109efe30c; end: 109efe37f;  */

void FUN_109efe30c(long param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  *(int *)(param_1 + 0x80) = iVar1;
  if (*(int *)(param_1 + 0x68) != 0) {
    uVar2 = 0;
    do {
      FUN_109efe30c(*(undefined8 *)(*(long *)(param_1 + 0x70) + uVar2 * 8),param_2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x68));
  }
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  *(int *)(param_1 + 0x84) = iVar1;
  return;
}



/* Entry: 109efe380; end: 109efe3b7;  */

void FUN_109efe380(long param_1,long param_2)

{
  uint uVar1;
  
  while (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 0x40);
    for (; uVar1 < *(uint *)(param_1 + 0x40); param_1 = *(long *)(param_1 + 0x60)) {
    }
    while (*(uint *)(param_1 + 0x40) < uVar1) {
      param_2 = *(long *)(param_2 + 0x60);
      uVar1 = *(uint *)(param_2 + 0x40);
    }
  }
  return;
}



/* Entry: 109efe3b8; end: 109efe8e3;  */

void FUN_109efe3b8(long *param_1,ulong *param_2,long *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  
  plVar4 = (long *)param_2[2];
  do {
    if ((ulong *)(plVar4 + -1) == param_2) {
      return;
    }
    uVar6 = plVar4[-1];
    if ((uVar6 & 1) == 0) {
      if (*(int *)(uVar6 + 0x18) == 8) {
        uVar7 = plVar4[-2];
        if (((*(long *)(uVar7 + 0x20) == uVar7 + 0x30) ||
            (uVar6 = *(ulong *)(uVar7 + 0x38), uVar6 == 0)) || (*(int *)(uVar6 + 0x18) != 6))
        goto LAB_109efe44c;
        lVar8 = 2;
      }
      else {
        lVar8 = 2;
      }
    }
    else {
      uVar6 = *(ulong *)((uVar6 & 0xfffffffffffffffe) + 8);
      uVar7 = 0;
      if (*(long *)(uVar6 + 8) != 0) {
        uVar7 = uVar6;
      }
LAB_109efe44c:
      uVar6 = uVar7;
      lVar8 = 1;
    }
    plVar11 = (long *)plVar4[1];
    *param_1 = lVar8;
    param_1[1] = uVar6;
    uVar7 = plVar4[-1];
    if (((uVar7 & 1) == 0) && (*(int *)(uVar7 + 0x18) == 9)) {
      *(undefined1 *)(plVar4 + -2) = 1;
      plVar9 = param_3;
    }
    else if ((((lVar8 == 2) &&
              ((lVar8 = *(long *)(uVar6 + 8), lVar8 != 0 && *(long *)(lVar8 + 8) != 0 &&
               (*(int *)(lVar8 + 0x18) == 4)))) && (*(int *)(lVar8 + 0x28) == 0x19b)) &&
            ((*(long **)(lVar8 + 0x98) == param_3 && (*(int *)(lVar8 + 0x54) == 0)))) {
      plVar9 = (long *)(lVar8 + 0x30);
    }
    else {
      lVar10 = *param_3;
      uVar2 = *(undefined4 *)
               (lVar10 + 0x54 +
                (ulong)(byte)(&UNK_110b671dd)[(ulong)*(uint *)(lVar10 + 0x28) * 0x68] * 4 + -4);
      lVar5 = param_1[3];
      FUN_109ecb0a8(lVar5,0x19b);
      *(char *)(lVar5 + 0x50) = (char)uVar2;
      plVar9 = (long *)(lVar5 + 0x30);
      FUN_109ecb048();
      *(undefined8 *)(lVar5 + 0x80) = 0;
      *(undefined8 *)(lVar5 + 0x88) = 0;
      *(undefined8 *)(lVar5 + 0x90) = 0;
      *(long **)(lVar5 + 0x98) = param_3;
      lVar8 = lVar5 + 0x54;
      lVar3 = (ulong)*(uint *)(lVar5 + 0x28) * 0x68;
      *(undefined4 *)(lVar8 + (ulong)(byte)(&UNK_110b671a9)[lVar3] * 4 + -4) = 0;
      *(undefined4 *)(lVar8 + (ulong)(byte)(&UNK_110b671e1)[lVar3] * 4 + -4) = 0;
      *(undefined4 *)(lVar8 + (ulong)(byte)(&UNK_110b671e2)[lVar3] * 4 + -4) = 0;
      FUN_109ecb4f0(*param_1,param_1[1],lVar5);
      *param_1 = 3;
      param_1[1] = lVar5;
      *(bool *)(lVar5 + 0x4e) =
           *(int *)(lVar10 + 0x54 +
                    (ulong)(byte)(&UNK_110b671e0)[(ulong)*(uint *)(lVar10 + 0x28) * 0x68] * 4 + -4)
           != 0;
    }
    lVar8 = *plVar4;
    plVar1 = (long *)plVar4[1];
    *(long **)(lVar8 + 8) = plVar1;
    *plVar1 = lVar8;
    *plVar4 = 0;
    plVar4[2] = (long)plVar9;
    plVar9 = plVar9 + 1;
    lVar8 = *plVar9;
    *plVar4 = lVar8;
    plVar4[1] = (long)plVar9;
    *(long **)(lVar8 + 8) = plVar4;
    *plVar9 = (long)plVar4;
    plVar4 = plVar11;
  } while( true );
}



/* Entry: 109efe8e4; end: 109efe98b;  */

long FUN_109efe8e4(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  FUN_109ecb0a8(lVar3,0x5f);
  lVar1 = lVar3 + 0x54;
  lVar2 = (ulong)*(uint *)(lVar3 + 0x28) * 0x68;
  *(uint *)(lVar1 + (ulong)(byte)(&UNK_110b671dd)[lVar2] * 4 + -4) = param_2 & 0xff;
  *(uint *)(lVar1 + (ulong)(byte)(&UNK_110b671df)[lVar2] * 4 + -4) = param_3 & 0xff;
  *(undefined4 *)(lVar1 + (ulong)(byte)(&UNK_110b671de)[lVar2] * 4 + -4) = 0;
  *(undefined4 *)(lVar1 + (ulong)(byte)(&UNK_110b671e0)[lVar2] * 4 + -4) = 1;
  FUN_109ecb048();
  FUN_109ece5ec(param_1,lVar3);
  return lVar3 + 0x30;
}



/* Entry: 109efe98c; end: 109efebcf;  */

void FUN_109efe98c(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar3 = param_4;
  (**(code **)(param_5 + 0x10))(param_4);
  lVar2 = param_5;
  FUN_109f66ba8(param_5,lVar3,param_4);
  if (lVar2 == 0) {
    uVar4 = *(uint *)(*(long *)(param_4 + 0x58) + 0x20);
    if (uVar4 != 0) {
      lVar3 = *(long *)(*(long *)(param_4 + 0x58) + 8);
      lVar7 = (ulong)uVar4 << 4;
      lVar2 = lVar3 + (ulong)uVar4 * 0x10;
      do {
        puVar6 = *(undefined **)(lVar3 + 8);
        if (puVar6 != (undefined *)0x0 && puVar6 != &UNK_10e47dcd0) goto LAB_109efeb68;
        lVar3 = lVar3 + 0x10;
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != 0);
    }
LAB_109efeaec:
    lVar3 = param_4;
    (**(code **)(param_5 + 0x10))(param_4);
    lVar2 = param_5;
    FUN_109f66e48(param_5,lVar3,param_4,0);
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = param_4;
    }
    uVar4 = *(uint *)(*(long *)(param_4 + 0x58) + 0x20);
    if (uVar4 == 0) {
      return;
    }
    lVar3 = (ulong)uVar4 << 4;
    lVar2 = *(long *)(*(long *)(param_4 + 0x58) + 8);
    do {
      lVar7 = lVar2 + 0x10;
      puVar6 = *(undefined **)(lVar2 + 8);
      if (puVar6 != (undefined *)0x0 && puVar6 != &UNK_10e47dcd0) {
        do {
          FUN_109efe98c(param_1,param_2,param_3,puVar6,param_5);
          lVar3 = lVar7;
          do {
            if (lVar3 == *(long *)(*(long *)(param_4 + 0x58) + 8) +
                         (ulong)*(uint *)(*(long *)(param_4 + 0x58) + 0x20) * 0x10) {
              return;
            }
            lVar7 = lVar3 + 0x10;
            puVar6 = *(undefined **)(lVar3 + 8);
            lVar3 = lVar7;
          } while (puVar6 == (undefined *)0x0 || puVar6 == &UNK_10e47dcd0);
        } while( true );
      }
      lVar3 = lVar3 + -0x10;
      lVar2 = lVar7;
    } while (lVar3 != 0);
    return;
  }
LAB_109efe9d8:
  if (((*(long *)(param_4 + 0x20) == param_4 + 0x30) ||
      (lVar3 = *(long *)(param_4 + 0x38), lVar3 == 0)) || (*(int *)(lVar3 + 0x18) != 6)) {
    uVar5 = 1;
  }
  else {
    uVar5 = 2;
    param_4 = lVar3;
  }
  *param_1 = uVar5;
  param_1[1] = param_4;
  lVar3 = param_1[3];
  FUN_109ecb0a8(lVar3,0x27f);
  bVar1 = *(byte *)(param_3 + 0x1c);
  *(byte *)(lVar3 + 0x50) = bVar1;
  *(undefined8 *)(lVar3 + 0x80) = 0;
  *(undefined8 *)(lVar3 + 0x88) = 0;
  *(undefined8 *)(lVar3 + 0x90) = 0;
  *(long *)(lVar3 + 0x98) = param_3;
  *(undefined8 *)(lVar3 + 0xa0) = 0;
  *(undefined8 *)(lVar3 + 0xa8) = 0;
  *(undefined8 *)(lVar3 + 0xb0) = 0;
  *(undefined8 *)(lVar3 + 0xb8) = param_2;
  uVar4 = 0xffffffff;
  if (bVar1 != 0x20) {
    uVar4 = ~(-1 << (ulong)(bVar1 & 0x1f));
  }
  lVar2 = lVar3 + 0x54;
  lVar7 = (ulong)*(uint *)(lVar3 + 0x28) * 0x68;
  *(undefined4 *)(lVar2 + (ulong)(byte)(&UNK_110b671a9)[lVar7] * 4 + -4) = 0;
  *(uint *)(lVar2 + (ulong)(byte)(&UNK_110b671aa)[lVar7] * 4 + -4) = uVar4;
  *(undefined4 *)(lVar2 + (ulong)(byte)(&UNK_110b671e3)[lVar7] * 4 + -4) = 0;
  FUN_109ecb4f0(*param_1,param_1[1],lVar3);
  *param_1 = 3;
  param_1[1] = lVar3;
  return;
LAB_109efeb68:
  while ((lVar7 = lVar3, *(long *)(puVar6 + 0x48) == 0 || (*(long *)(puVar6 + 0x50) == 0))) {
    do {
      lVar3 = lVar7 + 0x10;
      if (lVar3 == lVar2) goto LAB_109efeaec;
      puVar6 = *(undefined **)(lVar7 + 0x18);
      lVar7 = lVar3;
    } while (puVar6 == (undefined *)0x0 || puVar6 == &UNK_10e47dcd0);
  }
  goto LAB_109efe9d8;
}



/* Entry: 109efebd0; end: 109efeef3;  */

long FUN_109efebd0(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  lVar2 = param_1;
  while (iVar1 != 3) {
    lVar2 = *(long *)(lVar2 + 0x18);
    iVar1 = *(int *)(lVar2 + 0x10);
  }
  if (**(long **)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000109efec88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e06d1ee)[*(uint *)(*(long **)(param_1 + 0x20) + 3)] * 4 +
              0x109efec8c))(0x30);
    return param_1;
  }
  return 0;
}



/* Entry: 109efeef4; end: 109efef47;  */

undefined8 FUN_109efeef4(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = (long *)param_1[2];
  if (plVar1 != param_1 + 1) {
    do {
      uVar2 = plVar1[-1];
      if ((((uVar2 & 1) != 0) || (*(long *)(uVar2 + 0x10) != *(long *)(*param_1 + 0x10))) ||
         (*(int *)(uVar2 + 0x18) == 8)) {
        return 0;
      }
      plVar1 = (long *)plVar1[1];
    } while (plVar1 != param_1 + 1);
  }
  return 1;
}



/* Entry: 109efef48; end: 109eff0e3;  */

void FUN_109efef48(undefined8 *param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *param_2;
  uStack_68 = 0;
  uStack_60 = 0;
  lStack_50 = *(long *)(*(long *)(lStack_48 + 0x20) + 0x18);
  uStack_58 = 0;
  puVar4 = &uStack_68;
  FUN_109efe8e4(puVar4,*(undefined1 *)((long)param_1 + 0x1c),*(undefined1 *)((long)param_1 + 0x1d));
  FUN_109efe3b8(&uStack_68,param_1,puVar4);
  plVar10 = (long *)*param_1;
  if ((int)plVar10[3] == 8) {
    plVar10 = (long *)plVar10[2];
    plVar9 = (long *)plVar10[4];
    plVar6 = (long *)*plVar9;
    if ((plVar6 == (long *)0x0) || ((int)plVar9[3] != 8)) {
      uVar11 = 0;
    }
    else {
      plVar8 = (long *)*plVar6;
      if ((plVar8 == (long *)0x0) || (*(int *)(plVar6 + 3) != 8)) {
        uVar11 = 3;
        plVar10 = plVar9;
      }
      else if (((long *)*plVar8 == (long *)0x0) || ((int)plVar8[3] != 8)) {
        uVar11 = 3;
        plVar10 = plVar6;
      }
      else {
        uVar11 = 3;
        plVar6 = (long *)*plVar8;
        do {
          plVar10 = plVar8;
          if ((long *)*plVar6 == (long *)0x0) break;
          plVar9 = plVar6 + 3;
          plVar8 = plVar6;
          plVar6 = (long *)*plVar6;
        } while ((int)*plVar9 == 8);
      }
    }
  }
  else {
    uVar11 = 3;
  }
  lVar5 = lStack_50;
  FUN_109ecb0a8(lStack_50,0x27f);
  bVar2 = *(byte *)((long)param_1 + 0x1c);
  *(byte *)(lVar5 + 0x50) = bVar2;
  *(undefined8 *)(lVar5 + 0x80) = 0;
  *(undefined8 *)(lVar5 + 0x88) = 0;
  *(undefined8 *)(lVar5 + 0x90) = 0;
  *(undefined8 **)(lVar5 + 0x98) = param_1;
  *(undefined8 *)(lVar5 + 0xa0) = 0;
  *(undefined8 *)(lVar5 + 0xa8) = 0;
  *(undefined8 *)(lVar5 + 0xb0) = 0;
  *(undefined8 **)(lVar5 + 0xb8) = puVar4;
  uVar7 = 0xffffffff;
  if (bVar2 != 0x20) {
    uVar7 = ~(-1 << (ulong)(bVar2 & 0x1f));
  }
  lVar1 = lVar5 + 0x54;
  lVar3 = (ulong)*(uint *)(lVar5 + 0x28) * 0x68;
  *(undefined4 *)(lVar1 + (ulong)(byte)(&UNK_110b671a9)[lVar3] * 4 + -4) = 0;
  *(uint *)(lVar1 + (ulong)(byte)(&UNK_110b671aa)[lVar3] * 4 + -4) = uVar7;
  *(undefined4 *)(lVar1 + (ulong)(byte)(&UNK_110b671e3)[lVar3] * 4 + -4) = 0;
  FUN_109ecb4f0(uVar11,plVar10,lVar5);
  *(undefined1 *)(param_2 + 1) = 1;
  return;
}



/* Entry: 109eff0e4; end: 109eff4c3;  */

void FUN_109eff0e4(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  undefined1 auStack_88 [40];
  
  lVar2 = param_1[3];
  FUN_109ed0354(lVar2,param_2,0);
  lVar9 = *(long *)(lVar2 + 0x58);
  if (lVar9 != lVar2 + 0x68) {
    lVar10 = param_1[4];
    plVar11 = *(long **)(lVar10 + 0x70);
    *plVar11 = lVar9;
    *(long **)(*(long *)(lVar2 + 0x58) + 8) = plVar11;
    plVar11 = *(long **)(lVar2 + 0x70);
    *(long **)(lVar10 + 0x70) = plVar11;
    *plVar11 = lVar10 + 0x68;
    *(long *)(lVar2 + 0x58) = lVar2 + 0x68;
    *(undefined8 *)(lVar2 + 0x60) = 0;
    *(undefined8 *)(lVar2 + 0x68) = 0;
    *(long **)(lVar2 + 0x70) = (long *)(lVar2 + 0x58);
  }
  lVar9 = *(long *)(lVar2 + 0x30);
  while( true ) {
    if (lVar9 == 0) {
      plVar11 = *(long **)(lVar2 + 0x48);
      if ((long *)plVar11[4] == plVar11 + 6) {
        bVar1 = false;
      }
      else {
        bVar1 = *(int *)(plVar11[7] + 0x18) == 6;
      }
      lVar9 = *(long *)(lVar2 + 0x30);
      if (*(int *)(lVar9 + 0x10) == 0) {
        uVar6 = 0;
        lVar10 = lVar9;
      }
      else {
        lVar10 = 0;
        if (*(long *)(*(long *)(lVar9 + 8) + 8) != 0) {
          lVar10 = *(long *)(lVar9 + 8);
        }
        uVar6 = 1;
      }
      plVar14 = (long *)0x0;
      if (lVar9 != lVar2 + 0x40) {
        plVar14 = plVar11;
      }
      if ((int)plVar11[2] == 0) {
        uVar8 = 1;
      }
      else {
        uVar8 = 0;
        plVar14 = (long *)0x0;
        if (*(long *)*plVar11 != 0) {
          plVar14 = (long *)*plVar11;
        }
      }
      FUN_109ef87e8(auStack_88,uVar6,lVar10,uVar8,plVar14);
      puVar5 = (undefined8 *)param_1[3];
      if (bVar1) {
        puVar5 = (undefined8 *)*puVar5;
        FUN_109f6600c(puVar5,0x50,8);
        if (puVar5 != (undefined8 *)0x0) {
          puVar5[7] = 0;
          puVar5[6] = 0;
          puVar5[9] = 0;
          puVar5[8] = 0;
          puVar5[3] = 0;
          puVar5[2] = 0;
          puVar5[5] = 0;
          puVar5[4] = 0;
          puVar5[1] = 0;
          *puVar5 = 0;
        }
        *(undefined4 *)(puVar5 + 3) = 5;
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = 0;
        FUN_109ecb048(puVar5,puVar5 + 5,1,1);
        puVar5[9] = 1;
        FUN_109ecb4f0(*param_1,param_1[1],puVar5);
        *param_1 = 3;
        param_1[1] = (long)puVar5;
        plVar11 = param_1;
        FUN_109ece6c4(param_1,puVar5 + 5);
        if ((long *)plVar11[9] == plVar11 + 0xb) {
          plVar14 = (long *)0x0;
        }
        else {
          plVar14 = (long *)plVar11[0xc];
        }
        if ((int)plVar14[2] == 0) {
          uVar6 = 1;
          plVar7 = plVar14;
        }
        else {
          uVar6 = 0;
          plVar7 = (long *)0x0;
          if (*(long *)*plVar14 != 0) {
            plVar7 = (long *)*plVar14;
          }
        }
        FUN_109ef8954(auStack_88,uVar6,plVar7);
        if ((int)plVar11[2] == 0) {
          lVar2 = 1;
          plVar14 = plVar11;
        }
        else {
          lVar2 = 0;
          plVar14 = (long *)0x0;
          if (*(long *)*plVar11 != 0) {
            plVar14 = (long *)*plVar11;
          }
        }
        *param_1 = lVar2;
        param_1[1] = (long)plVar14;
      }
      else {
        FUN_109ecb0a8(puVar5,0x22a);
        FUN_109ecb4f0(*param_1,param_1[1],puVar5);
        lVar2 = 3;
        *param_1 = 3;
        param_1[1] = (long)puVar5;
        FUN_109ef8954(auStack_88,2,puVar5);
        lVar9 = puVar5[1];
        if ((lVar9 == 0) || (*(long *)(lVar9 + 8) == 0)) {
          lVar2 = 0;
          lVar9 = puVar5[2];
        }
        FUN_109ecb9c0(puVar5);
        *param_1 = lVar2;
        param_1[1] = lVar9;
      }
      return;
    }
    plVar14 = *(long **)(lVar9 + 0x20);
    plVar11 = (long *)*plVar14;
    if (plVar11 != (long *)0x0) break;
LAB_109eff2bc:
    FUN_109ecc434();
  }
  do {
    plVar7 = (long *)0x0;
    plVar12 = plVar14;
    if (*plVar11 != 0) {
      plVar7 = plVar11;
    }
    do {
      plVar14 = plVar7;
      if ((int)plVar12[3] == 4) {
        if ((int)plVar12[5] == 0x166) {
          plVar11 = plVar12 + 6;
          if ((long *)plVar12[8] + -1 != plVar11) {
            lVar10 = *(long *)(param_3 + (ulong)*(uint *)((long)plVar12 + 0x54) * 8);
            plVar7 = (long *)plVar12[8];
            do {
              lVar4 = *plVar7;
              plVar12 = (long *)plVar7[1];
              *(long **)(lVar4 + 8) = plVar12;
              *plVar12 = lVar4;
              plVar7[1] = lVar10 + 8;
              plVar7[2] = lVar10;
              *plVar7 = 0;
              lVar4 = *(long *)(lVar10 + 8);
              *plVar7 = lVar4;
              *(long **)(lVar4 + 8) = plVar7;
              *(long **)(lVar10 + 8) = plVar7;
              plVar7 = plVar12;
            } while (plVar12 + -1 != plVar11);
          }
          FUN_109ecb9c0(*plVar11);
        }
      }
      else if ((int)plVar12[3] == 1) {
        if ((int)plVar12[5] == 0) {
          if ((param_4 != 0) &&
             (lVar10 = plVar12[7], (*(ulong *)(lVar10 + 0x20) & 0x1fffff) != 0x40000)) {
            lVar4 = lVar10;
            (**(code **)(param_4 + 8))(lVar10);
            lVar3 = param_4;
            FUN_109f64fdc(param_4,lVar4,lVar10);
            if (lVar3 == 0) {
              lVar4 = plVar12[7];
              FUN_109ecf6d0(lVar4,param_1[3]);
              FUN_109eca704(param_1[3],lVar4);
              lVar13 = plVar12[7];
              lVar10 = lVar13;
              (**(code **)(param_4 + 8))(lVar13);
              lVar3 = param_4;
              func_0x000109f650c0(param_4,lVar10,lVar13,lVar4);
            }
            plVar12[7] = *(long *)(lVar3 + 0x10);
          }
        }
        else if ((int)plVar12[5] == 5) {
          FUN_109eff4c4(plVar12);
        }
      }
      if (plVar14 == (long *)0x0) goto LAB_109eff2bc;
      plVar11 = (long *)*plVar14;
      plVar7 = (long *)0x0;
      plVar12 = plVar14;
    } while (plVar11 == (long *)0x0);
  } while( true );
}



/* Entry: 109eff4c4; end: 109eff567;  */

void FUN_109eff4c4(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = **(long **)(param_1 + 0x50);
  if ((lVar2 != 0 && *(int *)(lVar2 + 0x18) == 1) && ((*(uint *)(param_1 + 0x2c) >> 0x12 & 1) != 0))
  {
    uVar1 = *(uint *)(lVar2 + 0x2c);
    if ((uVar1 >> 1 & 1) == 0) {
      if ((uVar1 >> 4 & 1) == 0) {
        if ((uVar1 >> 7 & 1) == 0) {
          if ((uVar1 >> 9 & 1) == 0) {
            return;
          }
          uVar1 = 0x200;
        }
        else {
          uVar1 = 0x80;
        }
      }
      else {
        uVar1 = 0x10;
      }
    }
    else {
      uVar1 = 2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1 | *(uint *)(param_1 + 0x2c) & 0xfffbffff;
    for (lVar2 = *(long *)(param_1 + 0x90); lVar2 != param_1 + 0x88; lVar2 = *(long *)(lVar2 + 8)) {
      if (((*(ulong *)(lVar2 + -8) & 1) == 0) && (*(int *)(*(ulong *)(lVar2 + -8) + 0x18) == 1)) {
        FUN_109eff4c4();
      }
    }
  }
  return;
}



/* Entry: 109eff568; end: 109eff623;  */

uint FUN_109eff568(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  
  uVar2 = 0;
  FUN_109f6695c(0,0x109f65648,FUN_109f65684);
  plVar6 = *(long **)(param_1 + 0x178);
  plVar1 = (long *)**(long **)(param_1 + 0x178);
  do {
    if (plVar1 == (long *)0x0) {
      uVar5 = 0;
LAB_109eff5c0:
      func_0x000109f66a2c(uVar2,0);
      return uVar5 & 1;
    }
    uVar3 = plVar6[6];
    if (uVar3 != 0) {
      FUN_109eff624(uVar3,uVar2);
      do {
        uVar5 = (uint)uVar3;
        plVar6 = (long *)*plVar6;
        plVar1 = (long *)*plVar6;
        while( true ) {
          if (plVar1 == (long *)0x0) goto LAB_109eff5c0;
          lVar4 = plVar6[6];
          if (lVar4 != 0) break;
          plVar6 = plVar1;
          plVar1 = (long *)*plVar1;
        }
        FUN_109eff624(lVar4,uVar2);
        uVar3 = (ulong)((uint)lVar4 | uVar5);
      } while( true );
    }
    plVar6 = plVar1;
    plVar1 = (long *)*plVar1;
  } while( true );
}



/* Entry: 109eff624; end: 109eff783;  */

undefined8 FUN_109eff624(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar4 = param_1;
  (**(code **)(param_2 + 0x10))();
  lVar7 = param_2;
  FUN_109f66ba8(param_2,lVar4,param_1);
  if (lVar7 != 0) {
    return 0;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_50 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  uStack_58 = 0;
  lVar4 = *(long *)(param_1 + 0x30);
  lStack_48 = param_1;
  if (lVar4 != 0) {
    lVar7 = lVar4;
    FUN_109ecc434();
    uVar8 = 0;
    do {
      lVar2 = lVar7;
      plVar6 = (long *)**(undefined8 **)(lVar4 + 0x20);
      if (plVar6 != (long *)0x0) {
        lVar7 = *plVar6;
        puVar3 = &uStack_68;
        FUN_109eff784(puVar3,*(undefined8 **)(lVar4 + 0x20),param_2);
        uVar8 = uVar8 | (uint)puVar3;
        if (lVar7 != 0) {
          for (plVar1 = (long *)*plVar6; (plVar1 != (long *)0x0 && (*plVar1 != 0));
              plVar1 = (long *)*plVar1) {
            puVar3 = &uStack_68;
            FUN_109eff784(puVar3,plVar6,param_2);
            uVar8 = uVar8 | (uint)puVar3;
            plVar6 = plVar1;
          }
          puVar3 = &uStack_68;
          FUN_109eff784(puVar3,plVar6,param_2);
          uVar8 = uVar8 | (uint)puVar3;
        }
      }
      lVar7 = lVar2;
      FUN_109ecc434();
      lVar4 = lVar2;
    } while (lVar2 != 0);
    if ((uVar8 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x84) = 0;
      FUN_109ecc7dc(param_1);
      uVar5 = 1;
      goto LAB_109eff740;
    }
  }
  uVar5 = 0;
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffff7;
LAB_109eff740:
  lVar4 = param_1;
  (**(code **)(param_2 + 0x10))(param_1);
  FUN_109f66e48(param_2,lVar4,param_1,0);
  if (param_2 != 0) {
    *(long *)(param_2 + 8) = param_1;
  }
  return uVar5;
}



/* Entry: 109eff784; end: 109eff8f3;  */

ulong FUN_109eff784(undefined8 *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long extraout_x8;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long extraout_x12;
  undefined8 uVar10;
  long alStack_40 [2];
  
  alStack_40[1] = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(param_2 + 0x18) == 2) {
    lVar3 = *(long *)(*(long *)(param_2 + 0x28) + 0x30);
    if (lVar3 != 0) {
      if ((*(char *)(*(long *)(param_1[3] + 0x28) + 0xa8) == '\x01') &&
         (*(char *)(param_1[3] + 0x61) == '\x0e')) {
        lVar8 = *(long *)(param_2 + 0x10);
        if (*(long *)(lVar8 + 0x20) == lVar8 + 0x30) {
          lVar8 = 0;
        }
        else {
          lVar8 = *(long *)(lVar8 + 0x38);
        }
        if (((*(byte *)(*(long *)(param_2 + 0x28) + 0x3b) & 1) == 0) &&
           ((2 < *(uint *)(lVar3 + 0x7c) || 0x2d < *(uint *)(lVar3 + 0x78)) && lVar8 != param_2))
        goto LAB_109eff848;
      }
      FUN_109eff624(lVar3,param_3);
      lVar3 = *(long *)(param_2 + 8);
      if ((lVar3 == 0) || (*(long *)(lVar3 + 8) == 0)) {
        uVar10 = 0;
        lVar3 = *(long *)(param_2 + 0x10);
      }
      else {
        uVar10 = 3;
      }
      FUN_109ecb9c0(param_2);
      *param_1 = uVar10;
      param_1[1] = lVar3;
      (*(code *)PTR____chkstk_darwin_11034bd40)((ulong)*(uint *)(param_2 + 0x30) << 3);
      puVar6 = (undefined8 *)((long)alStack_40 - (extraout_x8 + 0xfU & 0xffffffff0));
      if ((int)extraout_x12 != 0) {
        puVar7 = (undefined8 *)(param_2 + 0x50);
        puVar9 = puVar6;
        lVar3 = extraout_x12;
        do {
          *puVar9 = *puVar7;
          lVar3 = lVar3 + -1;
          puVar7 = puVar7 + 4;
          puVar9 = puVar9 + 1;
        } while (lVar3 != 0);
      }
      FUN_109eff0e4(param_1,*(undefined8 *)(*(long *)(param_2 + 0x28) + 0x30),puVar6,0);
    }
    uVar4 = 1;
  }
  else {
LAB_109eff848:
    uVar4 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_40[1]) {
    return uVar4;
  }
  ___stack_chk_fail();
  uVar1 = *(uint *)(uVar4 + 0x28);
  uVar5 = 1;
  if ((int)uVar1 < 0x62) {
    if (uVar1 < 0x3f && (1L << ((ulong)uVar1 & 0x3f) & 0x500180033ffffc00U) != 0) {
      return uVar5;
    }
  }
  else {
    if (uVar1 - 0x8a < 0x2d && (1L << ((ulong)(uVar1 - 0x8a) & 0x3f) & 0x140028007a31U) != 0) {
      return uVar5;
    }
    uVar2 = uVar1 - 0x265;
    if (uVar2 < 0x25) {
      if ((1L << ((ulong)uVar2 & 0x3f) & 0x140003500fU) != 0) {
        return uVar5;
      }
      if ((ulong)uVar2 == 10) goto LAB_109eff994;
    }
    if (uVar1 - 0x62 < 2) {
LAB_109eff994:
      return (ulong)((*(ushort *)(**(long **)(uVar4 + 0x98) + 0x2d) & 0x1002) != 0);
    }
  }
  return 0;
}



/* Entry: 109eff8f4; end: 109eff9b7;  */

bool FUN_109eff8f4(long param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  bVar3 = true;
  if ((int)uVar1 < 0x62) {
    if (uVar1 < 0x3f && (1L << ((ulong)uVar1 & 0x3f) & 0x500180033ffffc00U) != 0) {
      return bVar3;
    }
  }
  else {
    if (uVar1 - 0x8a < 0x2d && (1L << ((ulong)(uVar1 - 0x8a) & 0x3f) & 0x140028007a31U) != 0) {
      return bVar3;
    }
    uVar2 = uVar1 - 0x265;
    if (uVar2 < 0x25) {
      if ((1L << ((ulong)uVar2 & 0x3f) & 0x140003500fU) != 0) {
        return bVar3;
      }
      if ((ulong)uVar2 == 10) goto LAB_109eff994;
    }
    if (uVar1 - 0x62 < 2) {
LAB_109eff994:
      return (*(ushort *)(**(long **)(param_1 + 0x98) + 0x2d) & 0x1002) != 0;
    }
  }
  return false;
}



/* Entry: 109eff9b8; end: 109effe07;  */

void FUN_109eff9b8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  ulong *puVar16;
  
  *(undefined1 *)(param_1 + 99) = 0;
  *(undefined1 *)(param_1 + 0x67) = 0;
  *(undefined2 *)(param_1 + 0x150) = 0;
  *(ushort *)(param_1 + 0x152) = *(ushort *)(param_1 + 0x152) & 0xfbff;
  plVar15 = *(long **)(param_1 + 8);
  if (*plVar15 != 0) {
    do {
      uVar10 = plVar15[4];
      if ((uVar10 & 0x12) != 0) {
        if ((uVar10 >> 0x28 & 1) != 0) {
          *(ushort *)(param_1 + 0x152) = *(ushort *)(param_1 + 0x152) | 0x400;
          uVar10 = plVar15[4];
        }
        if (((uVar10 >> 0x28 & 1) == 0) && (plVar15[0x11] == 0)) {
          lVar5 = plVar15[2];
          FUN_109eca3d8(lVar5,0xd);
          lVar6 = plVar15[2];
          FUN_109eca3d8(lVar6,0xe);
          *(char *)(param_1 + 99) = *(char *)(param_1 + 99) + (char)lVar6 + (char)lVar5;
          lVar5 = plVar15[2];
          FUN_109eca3d8(lVar5,0xf);
          *(char *)(param_1 + 0x67) = *(char *)(param_1 + 0x67) + (char)lVar5;
        }
      }
      plVar15 = (long *)*plVar15;
    } while (*plVar15 != 0);
    plVar15 = *(long **)(param_1 + 8);
    for (plVar11 = (long *)**(long **)(param_1 + 8); plVar11 != (long *)0x0;
        plVar11 = (long *)*plVar11) {
      if ((*(byte *)(plVar15 + 4) & 0xc) != 0) {
        for (lVar5 = plVar15[2]; *(byte *)(lVar5 + 4) == 0x13; lVar5 = *(long *)(lVar5 + 0x30)) {
        }
        if ((*(byte *)(lVar5 + 4) | 2) == 0xf) {
          *(ushort *)(param_1 + 0x152) = *(ushort *)(param_1 + 0x152) | 0x400;
          plVar11 = (long *)*plVar15;
        }
      }
      plVar15 = plVar11;
    }
  }
  puVar16 = (ulong *)(param_1 + 0x98);
  *puVar16 = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined2 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(ushort *)(param_1 + 0x14e) = *(ushort *)(param_1 + 0x14e) & 0xdfff;
  bVar3 = *(byte *)(param_1 + 0x61);
  if (bVar3 < 4) {
    if (bVar3 == 0) {
LAB_109effb50:
      *(undefined8 *)(param_1 + 0x158) = 0;
    }
    else if (bVar3 == 1) {
      *(undefined8 *)(param_1 + 0x160) = 0;
      *(undefined8 *)(param_1 + 0x168) = 0;
      *(undefined8 *)(param_1 + 0x170) = 0;
    }
LAB_109effb74:
    *(ushort *)(param_1 + 0x152) =
         (*(ushort *)(param_1 + 0x152) & 4) << 4 | *(ushort *)(param_1 + 0x152) & 0xffbf;
  }
  else {
    if (bVar3 != 4) {
      if (bVar3 == 6) {
        *(undefined8 *)(param_1 + 0x160) = 0;
        *(undefined4 *)(param_1 + 0x168) = 0;
      }
      else if (bVar3 == 7) goto LAB_109effb50;
      goto LAB_109effb74;
    }
    *(uint *)(param_1 + 0x158) = *(uint *)(param_1 + 0x158) & 0xffffff34;
  }
  puVar7 = (undefined8 *)0x30;
  _malloc();
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    puVar7[4] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7 = puVar7 + 6;
  }
  puVar8 = puVar7;
  FUN_109f6695c(puVar7,0x109f65648,FUN_109f65684);
  FUN_109effe08(param_2,param_1,puVar8);
  if (puVar7 != (undefined8 *)0x0) {
    FUN_109f65aa4(puVar7 + -6);
    FUN_109f65ae0(puVar7 + -6);
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  plVar15 = *(long **)(param_1 + 8);
  if (*plVar15 == 0) {
LAB_109effd78:
    iVar4 = 0;
    *(undefined4 *)(param_1 + 0x130) = 0;
  }
  else {
    do {
      if ((*(byte *)(plVar15 + 4) >> 3 & 1) != 0) {
        uVar9 = (uint)*(undefined8 *)((long)plVar15 + 0x2c);
        if ((uVar9 >> 0x10 & 1) != 0) {
          iVar4 = (int)plVar15[2];
          func_0x000109eca118();
          FUN_109ec9e40();
          uVar9 = *(uint *)((long)plVar15 + 0x3c);
          uVar10 = 0xffffffffffffffff;
          if (uVar9 + iVar4 != 0x40) {
            uVar10 = ~(-1L << ((ulong)(uVar9 + iVar4) & 0x3f));
          }
          uVar1 = 0;
          if (uVar9 != 0x40) {
            uVar1 = -1L << ((ulong)uVar9 & 0x3f);
          }
          *(ulong *)(param_1 + 0xa0) = uVar10 & uVar1 | *(ulong *)(param_1 + 0xa0);
          uVar9 = (uint)*(undefined8 *)((long)plVar15 + 0x2c);
        }
        if ((uVar9 >> 0xf & 1) != 0) {
          iVar4 = (int)plVar15[2];
          func_0x000109eca118();
          FUN_109ec9e40();
          uVar9 = *(uint *)((long)plVar15 + 0x3c);
          uVar10 = 0xffffffffffffffff;
          if (uVar9 + iVar4 != 0x40) {
            uVar10 = ~(-1L << ((ulong)(uVar9 + iVar4) & 0x3f));
          }
          uVar1 = 0;
          if (uVar9 != 0x40) {
            uVar1 = -1L << ((ulong)uVar9 & 0x3f);
          }
          *(ulong *)(param_1 + 0xa8) = uVar10 & uVar1 | *(ulong *)(param_1 + 0xa8);
        }
      }
      plVar15 = (long *)*plVar15;
    } while (*plVar15 != 0);
    plVar15 = *(long **)(param_1 + 8);
    plVar11 = (long *)*plVar15;
    if (*(char *)(param_1 + 0x61) == '\x04') {
      plVar13 = plVar11;
      plVar14 = plVar15;
      if (plVar11 == (long *)0x0) goto LAB_109effd78;
      do {
        plVar12 = plVar13;
        if (((*(byte *)(plVar14 + 4) >> 2 & 1) != 0) && ((*(byte *)((long)plVar14 + 0x2e) & 1) != 0)
           ) {
          lVar5 = plVar14[2];
          FUN_109ec9e40(lVar5,0,1);
          uVar2 = *(uint *)((long)plVar14 + 0x3c);
          uVar9 = uVar2 + (int)lVar5;
          uVar10 = 0xffffffffffffffff;
          if (uVar9 != 0x40) {
            uVar10 = ~(-1L << ((ulong)uVar9 & 0x3f));
          }
          uVar1 = 0;
          if (uVar2 != 0x40) {
            uVar1 = -1L << ((ulong)uVar2 & 0x3f);
          }
          *puVar16 = uVar10 & uVar1 | *puVar16;
        }
        plVar13 = (long *)*plVar12;
        plVar14 = plVar12;
      } while (plVar13 != (long *)0x0);
    }
    *(undefined4 *)(param_1 + 0x130) = 0;
    iVar4 = 0;
    for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
      if ((*(byte *)((long)plVar15 + 0x23) >> 3 & 1) != 0) {
        uVar9 = (uint)plVar15[2];
        FUN_109ec88a0();
        if (uVar9 < 2) {
          uVar9 = 1;
        }
        iVar4 = iVar4 + uVar9;
        *(int *)(param_1 + 0x130) = iVar4;
      }
      plVar15 = plVar11;
    }
  }
  plVar15 = *(long **)(param_1 + 0x178);
  do {
    plVar11 = (long *)*plVar15;
    if (plVar11 == (long *)0x0) {
      return;
    }
    lVar5 = plVar15[6];
    plVar15 = plVar11;
  } while (lVar5 == 0);
  do {
    plVar15 = *(long **)(lVar5 + 0x58);
    for (plVar13 = (long *)**(long **)(lVar5 + 0x58); plVar14 = plVar11, plVar13 != (long *)0x0;
        plVar13 = (long *)*plVar13) {
      if ((*(byte *)((long)plVar15 + 0x23) >> 3 & 1) != 0) {
        uVar9 = (uint)plVar15[2];
        FUN_109ec88a0();
        if (uVar9 < 2) {
          uVar9 = 1;
        }
        iVar4 = iVar4 + uVar9;
        *(int *)(param_1 + 0x130) = iVar4;
      }
      plVar15 = plVar13;
    }
    do {
      plVar11 = (long *)*plVar14;
      if (plVar11 == (long *)0x0) {
        return;
      }
      lVar5 = plVar14[6];
      plVar14 = plVar11;
    } while (lVar5 == 0);
  } while( true );
}



/* Entry: 109effe08; end: 109f0110f;  */

void FUN_109effe08(long param_1,ulong param_2,long param_3)

{
  ulong *puVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  ulong *puVar11;
  undefined8 uVar12;
  ushort uVar13;
  ushort uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  int *piVar23;
  ulong uVar24;
  uint *puVar25;
  uint uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  ulong *puVar30;
  undefined8 *puVar31;
  ulong uVar32;
  ulong uVar33;
  long lVar34;
  ulong uVar35;
  undefined8 uStack_98;
  
  lVar29 = param_1;
  (**(code **)(param_3 + 0x10))();
  lVar28 = param_3;
  FUN_109f66ba8(param_3,lVar29,param_1);
  if (lVar28 == 0) {
    lVar29 = param_1;
    (**(code **)(param_3 + 0x10))(param_1);
    lVar28 = param_3;
    FUN_109f66e48(param_3,lVar29,param_1,0);
    if (lVar28 != 0) {
      *(long *)(lVar28 + 8) = param_1;
    }
    lVar29 = *(long *)(param_1 + 0x30);
    if (lVar29 != 0) {
      puVar1 = (ulong *)(param_2 + 0x160);
      do {
        for (puVar30 = *(ulong **)(lVar29 + 0x20); *puVar30 != 0; puVar30 = (ulong *)*puVar30) {
          iVar5 = (int)puVar30[3];
          if (iVar5 < 3) {
            if (iVar5 == 0) {
              lVar28 = (ulong)(uint)puVar30[5] * 0x68;
              uVar22 = (ulong)(byte)(&UNK_110b78540)[lVar28];
              if (uVar22 != 0) {
                puVar25 = (uint *)(&UNK_110b78558 + lVar28);
                puVar11 = puVar30 + 0xd;
                do {
                  if ((*puVar25 & 0x86) == 0x80) {
                    *(byte *)(param_2 + 0x150) =
                         *(byte *)(param_2 + 0x150) | *(byte *)(*puVar11 + 0x1d);
                  }
                  else {
                    *(byte *)(param_2 + 0x151) =
                         *(byte *)(param_2 + 0x151) | *(byte *)(*puVar11 + 0x1d);
                  }
                  uVar22 = uVar22 - 1;
                  puVar25 = puVar25 + 1;
                  puVar11 = puVar11 + 6;
                } while (uVar22 != 0);
              }
              if ((*(uint *)(&UNK_110b78544 + lVar28) & 0x86) == 0x80) {
                *(byte *)(param_2 + 0x150) =
                     *(byte *)(param_2 + 0x150) | *(byte *)((long)puVar30 + 0x4d);
              }
              else {
                *(byte *)(param_2 + 0x151) =
                     *(byte *)(param_2 + 0x151) | *(byte *)((long)puVar30 + 0x4d);
              }
            }
            else if (iVar5 == 2) {
              FUN_109effe08(*(undefined8 *)(puVar30[5] + 0x30),param_2,param_3);
            }
            goto LAB_109f00e84;
          }
          if (iVar5 == 3) {
            if ((*(char *)(param_2 + 0x61) == '\x04') &&
               ((uVar15 = (uint)puVar30[6], uVar15 < 2 || uVar15 == 9 ||
                ((uVar15 == 10 && ((*(byte *)((long)puVar30 + 0x6c) >> 3 & 1) != 0)))))) {
              *(uint *)(param_2 + 0x158) = *(uint *)(param_2 + 0x158) | 0x40;
            }
            uVar22 = (ulong)(uint)puVar30[0xc];
            if ((uint)puVar30[0xc] != 0) {
              lVar28 = 0xffffffff;
              piVar23 = (int *)(puVar30[0xb] + 0x20);
              uVar33 = uVar22;
              do {
                if (*piVar23 == 0xf) {
                  if (lVar28 != 0) goto LAB_109f00220;
                  break;
                }
                lVar28 = lVar28 + -1;
                uVar33 = uVar33 - 1;
                piVar23 = piVar23 + 10;
              } while (uVar33 != 0);
              lVar28 = 0xffffffff;
              piVar23 = (int *)(puVar30[0xb] + 0x20);
              do {
                if (*piVar23 == 0x10) {
                  if (lVar28 != 0) {
LAB_109f00220:
                    *(ushort *)(param_2 + 0x152) = *(ushort *)(param_2 + 0x152) | 0x400;
                  }
                  break;
                }
                lVar28 = lVar28 + -1;
                uVar22 = uVar22 - 1;
                piVar23 = piVar23 + 10;
              } while (uVar22 != 0);
            }
            uVar15 = (uint)puVar30[6];
            if (((1 << (ulong)(uVar15 & 0x1f) & 0x1a4ffU) != 0) && ((puVar30[5] & 0xfffffffe) == 8))
            {
              *(uint *)(param_2 + 0x158) = *(uint *)(param_2 + 0x158) | 2;
              uVar15 = (uint)puVar30[6];
            }
            uVar15 = uVar15 - 8;
            if ((4 < uVar15) || ((0x1dU >> (ulong)(uVar15 & 0x1f) & 1) == 0)) goto LAB_109f00e84;
            uVar13 = *(ushort *)(param_2 + 0x14e) | *(ushort *)(&UNK_10e06d332 + (ulong)uVar15 * 2);
LAB_109f00290:
            *(ushort *)(param_2 + 0x14e) = uVar13;
          }
          else {
            if (iVar5 != 4) goto LAB_109f00e84;
            uVar15 = (uint)puVar30[5];
            uVar22 = (ulong)uVar15;
            uVar33 = (ulong)(byte)(&UNK_110b671cf)[uVar22 * 0x68];
            if (uVar33 == 0) {
              bVar9 = false;
              uVar13 = 0;
              uVar32 = 0;
            }
            else {
              uVar16 = *(uint *)((long)puVar30 + uVar33 * 4 + 0x50);
              bVar9 = (uVar16 & 0x7e) - 0x1a < 4;
              uVar10 = uVar16 ^ 0x40;
              if ((uVar16 & 0x60) != 0x40) {
                uVar10 = uVar16;
              }
              uVar16 = uVar10 & 0x7f;
              uVar8 = uVar10 >> 7 & 0x3f;
              if ((uVar10 & 0x70) == 0x60) {
                uVar32 = 0;
                uVar16 = (uVar16 + ((uVar10 >> 0x19 & 1) + uVar8 + 1 >> 1)) - 0x60;
                uVar13 = 0xffff;
                if (uVar16 != 0x20) {
                  uVar13 = ~(ushort)(-1 << (ulong)(uVar16 & 0x1f));
                }
                uVar13 = uVar13 & (ushort)(-1 << (ulong)(uVar10 & 0xf));
              }
              else {
                uVar26 = uVar8;
                if ((*(char *)(*(long *)(param_2 + 0x28) + 0xc1) == '\x01') &&
                   (((uVar15 != 0x144 || (*(char *)(param_2 + 0x61) != '\0')) &&
                    (uVar26 = uVar8 + 3 >> 2,
                    0x1b < uVar16 || (1 << (ulong)(uVar10 & 0x1f) & 0xc1e0000U) == 0)))) {
                  uVar26 = uVar8;
                }
                uVar13 = 0;
                uVar32 = 0xffffffffffffffff;
                if (uVar26 + uVar16 != 0x40) {
                  uVar32 = ~(-1L << ((ulong)(uVar26 + uVar16) & 0x3f));
                }
                uVar20 = 0;
                if (uVar16 != 0x40) {
                  uVar20 = -1L << ((ulong)uVar10 & 0x3f);
                }
                uVar32 = uVar32 & uVar20;
              }
            }
            uVar10 = (uint)uVar32;
            if ((int)uVar15 < 0x1b0) {
              if ((int)uVar15 < 0xfc) {
                if ((int)uVar15 < 0xb8) {
                  if (0x67 < (int)uVar15) {
                    if ((int)uVar15 < 0x72) {
                      if (uVar15 - 0x6e < 3) {
LAB_109f006dc:
                        *(byte *)(param_2 + 0x163) =
                             *(byte *)(param_2 + 0x163) |
                             (byte)((1 << (ulong)(*(uint *)((long)puVar30 +
                                                           (ulong)(byte)(&UNK_110b671ab)
                                                                        [uVar22 * 0x68] * 4 + 0x50)
                                                 & 0x1f)) << 4);
                        goto LAB_109f00e84;
                      }
                      if (uVar15 == 0x68) {
                        *(uint *)(param_2 + 0x158) = *(uint *)(param_2 + 0x158) | 1;
                        goto LAB_109f00e84;
                      }
                      if (uVar15 == 0x6c) goto LAB_109f00444;
                    }
                    else {
                      uVar22 = (ulong)(uVar15 - 0x72);
                      if (uVar15 - 0x72 < 0x33) {
                        if ((1L << (uVar22 & 0x3f) & 7U) != 0) {
                          *(byte *)(param_2 + 0x163) = *(byte *)(param_2 + 0x163) | 8;
                          uVar22 = (ulong)(uint)puVar30[5];
                          goto LAB_109f006dc;
                        }
                        if ((1L << (uVar22 & 0x3f) & 0x80010U) != 0) goto LAB_109f00444;
                        if ((1L << (uVar22 & 0x3f) & 0x4080000000000U) != 0) {
                          plVar18 = (long *)puVar30[0x13];
                          while (lVar28 = *plVar18, *(int *)(lVar28 + 0x28) != 0) {
                            plVar18 = *(long **)(lVar28 + 0x50);
                          }
                          lVar34 = *(long *)(lVar28 + 0x38);
                          lVar28 = *(long *)(lVar34 + 0x10);
                          uVar15 = *(uint *)(lVar28 + 4);
                          while ((uVar15 & 0xff) == 0x13) {
                            lVar28 = *(long *)(lVar28 + 0x30);
                            uVar15 = *(uint *)(lVar28 + 4);
                          }
                          if ((uVar15 & 0xe0000) == 0x80000) {
                            *(ulong *)(lVar34 + 0x20) = *(ulong *)(lVar34 + 0x20) | 0x8000000000;
                            goto LAB_109f00944;
                          }
                          goto LAB_109f00e84;
                        }
                      }
                    }
                    goto LAB_109f00d84;
                  }
                  if ((int)uVar15 < 0x54) {
                    if ((int)uVar15 < 0x35) {
                      if (uVar15 == 0x22) goto LAB_109f00444;
                      if (uVar15 != 0x2d) goto LAB_109f00d84;
                      uVar14 = *(ushort *)(param_2 + 0x152);
                      uVar13 = uVar14 & 0x100;
                      if (*(int *)((long)puVar30 + 0x54U) != 0) {
                        uVar13 = 0x100;
                      }
                      *(ushort *)(param_2 + 0x152) = uVar13 | uVar14 & 0xfeff;
                      uVar2 = uVar14 & 0x200;
                      if (((int *)((long)puVar30 + 0x54U))
                          [(ulong)(byte)(&UNK_110b671cd)[(ulong)(uint)puVar30[5] * 0x68] - 1] != 0)
                      {
                        uVar2 = 0x200;
                      }
                      *(ushort *)(param_2 + 0x152) = uVar2 | uVar13 | uVar14 & 0xfcff;
                    }
                    else {
                      if ((uVar15 != 0x35) && (uVar15 != 0x3b)) goto LAB_109f00d84;
                      if (0xfffffffd <
                          *(int *)((long)puVar30 +
                                  (ulong)(byte)(&UNK_110b671b7)[uVar22 * 0x68] * 4 + 0x50) - 10U) {
LAB_109f00944:
                        uVar15 = *(uint *)(param_2 + 0x158) | 2;
                        goto LAB_109f00e80;
                      }
                    }
                  }
                  else {
                    if (5 < uVar15 - 0x59) {
                      if (uVar15 - 0x60 < 2) goto LAB_109f00718;
                      if (uVar15 == 0x54) goto LAB_109f00a3c;
                      goto LAB_109f00d84;
                    }
                    if (*(char *)(param_2 + 0x61) == '\x04') goto LAB_109f005bc;
                  }
                }
                else {
                  switch(uVar15) {
                  case 0xb8:
                  case 199:
                    goto LAB_109f00444;
                  default:
                    goto LAB_109f00d84;
                  case 0xbb:
                  case 0xbc:
                  case 0xbd:
                  case 0xbe:
LAB_109f00a3c:
                    lVar34 = *(long *)puVar30[0x13];
                    lVar28 = lVar34;
                    if (*(int *)(lVar34 + 0x18) != 1) {
                      lVar28 = 0;
                    }
                    lVar19 = lVar34;
                    if ((*(byte *)(lVar34 + 0x2c) & 0xc) != 0) {
                      while (*(int *)(lVar19 + 0x28) != 0) {
                        if (*(int *)(lVar19 + 0x28) == 5) {
                          uVar22 = 0;
                          goto LAB_109f00a9c;
                        }
                        lVar19 = **(long **)(lVar19 + 0x50);
                        if (*(int *)(lVar19 + 0x18) != 1) {
                          lVar19 = 0;
                        }
                      }
                      uVar22 = *(ulong *)(lVar19 + 0x38);
LAB_109f00a9c:
                      uVar32 = *(ulong *)(uVar22 + 0x20);
                      uStack_98 = *(undefined8 *)(uVar22 + 0x10);
                      cVar6 = *(char *)(param_2 + 0x61);
                      uVar33 = uVar22;
                      func_0x000109f0f5ac(uVar22,(int)cVar6);
                      uVar10 = (uint)uVar33;
                      if (uVar10 != 0) {
                        func_0x000109eca118();
                      }
                      uVar33 = *(ulong *)(uVar22 + 0x2c);
                      uVar16 = (uint)uVar33;
                      if ((uVar16 >> 0xf & 1) == 0) {
                        uVar20 = *(ulong *)(uVar22 + 0x20);
                        if ((uVar20 >> 0x26 & 1) != 0) {
                          uVar10 = *(uint *)(lVar34 + 0x28);
                          uVar35 = (ulong)uVar10;
                          if (uVar10 == 0) {
LAB_109f00c94:
                            FUN_109eca23c();
                            iVar5 = ((uint)(uVar20 >> 0x24) & 3) + 3;
                            if ((uint)uVar35 < (uint)(iVar5 + (int)uStack_98) >> 2) {
                              if (*(int *)(lVar34 + 0x28) == 1) {
                                uVar20 = 1;
                              }
                              else {
                                uVar12 = *(undefined8 *)(lVar34 + 0x30);
                                FUN_109eca23c(uVar12);
                                uVar20 = (ulong)((uint)(iVar5 + (int)uVar12) >> 2);
                              }
                              goto LAB_109f00f8c;
                            }
                          }
                          else if ((uVar10 != 2) &&
                                  (lVar19 = **(long **)(lVar34 + 0x70), *(int *)(lVar19 + 0x18) == 5
                                  )) {
                            uVar24 = *(ulong *)(lVar19 + 0x48);
                            uVar10 = (*(byte *)(lVar19 + 0x45) & 0xaaaaaaaa) >> 1 |
                                     (*(byte *)(lVar19 + 0x45) & 0x55555555) << 1;
                            uVar10 = (uVar10 & 0xcccccccc) >> 2 | (uVar10 & 0x33333333) << 2;
                            uVar10 = (uint)LZCOUNT((uVar10 >> 4 | (uVar10 & 0xf0f0f0f) << 4) << 0x18
                                                  );
                            uVar35 = uVar24 & 0xffffffff;
                            if (uVar10 != 5) {
                              uVar35 = uVar24;
                            }
                            uVar4 = uVar24 & 0xffff;
                            if (uVar10 != 4) {
                              uVar4 = uVar35;
                            }
                            uVar35 = uVar24 & 1;
                            if (uVar10 != 0) {
                              uVar35 = uVar24 & 0xff;
                            }
                            if (uVar10 < 4) {
                              uVar4 = uVar35;
                            }
                            uVar35 = uVar4 + (uVar20 >> 0x24 & 3) >> 2;
                            if ((int)uVar35 != -1) goto LAB_109f00c94;
                          }
                          goto LAB_109f00edc;
                        }
                        if (lVar28 == 0) {
                          uVar35 = 0;
                        }
                        else {
                          uVar35 = 0;
                          lVar19 = lVar34;
                          uVar8 = uVar10;
                          if (cVar6 != '\a') {
                            uVar8 = 1;
                          }
                          do {
                            iVar5 = *(int *)(lVar19 + 0x28);
                            if (iVar5 == 1) {
                              if (uVar10 == 0) {
                                if (cVar6 == '\a') break;
                              }
                              else {
                                uVar26 = 0;
                                if (*(int *)(**(long **)(lVar19 + 0x50) + 0x28) != 0) {
                                  uVar26 = uVar8;
                                }
                                if ((uVar26 & 1) == 0) break;
                              }
                              lVar27 = **(long **)(lVar19 + 0x70);
                              if (*(int *)(lVar27 + 0x18) != 5) goto LAB_109f00edc;
                              uVar12 = *(undefined8 *)(lVar19 + 0x30);
                              FUN_109ec9e40(uVar12,0,1);
                              uVar21 = (uint)*(undefined8 *)(lVar27 + 0x48);
                              uVar26 = (*(byte *)(lVar27 + 0x45) & 0xaaaaaaaa) >> 1 |
                                       (*(byte *)(lVar27 + 0x45) & 0x55555555) << 1;
                              uVar26 = (uVar26 & 0xcccccccc) >> 2 | (uVar26 & 0x33333333) << 2;
                              uVar17 = (uint)LZCOUNT((uVar26 >> 4 | (uVar26 & 0xf0f0f0f) << 4) <<
                                                     0x18);
                              uVar26 = uVar21 & 0xff;
                              if (uVar17 != 3) {
                                uVar26 = uVar21 & 0xffff;
                              }
                              uVar3 = uVar21 & 1;
                              if (uVar17 != 0) {
                                uVar3 = uVar26;
                              }
                              if (uVar17 < 5) {
                                uVar21 = uVar3;
                              }
                              uVar35 = (ulong)((int)uVar35 + (int)uVar12 * uVar21);
                            }
                            else if (iVar5 == 4) {
                              uVar20 = (ulong)*(uint *)(lVar19 + 0x58);
                              if (*(uint *)(lVar19 + 0x58) != 0) {
                                puVar31 = *(undefined8 **)
                                           (*(long *)(**(long **)(lVar19 + 0x50) + 0x30) + 0x30);
                                do {
                                  uVar12 = *puVar31;
                                  FUN_109ec9e40(uVar12,0,1);
                                  uVar35 = (ulong)(uint)((int)uVar12 + (int)uVar35);
                                  uVar20 = uVar20 - 1;
                                  puVar31 = puVar31 + 6;
                                } while (uVar20 != 0);
                              }
                            }
                            else if (iVar5 == 0) break;
                            puVar31 = (undefined8 *)(lVar19 + 0x50);
                            lVar19 = *(long *)*puVar31;
                          } while (*(int *)(*(long *)*puVar31 + 0x18) == 1);
                          if ((int)uVar35 == -1) goto LAB_109f00edc;
                        }
                        FUN_109ec9e40(uStack_98,0,1);
                        if ((uint)uStack_98 <= (uint)uVar35) goto LAB_109f00edc;
                        uVar20 = *(ulong *)(lVar34 + 0x30);
                        FUN_109ec9e40(uVar20,0,1);
                      }
                      else {
LAB_109f00edc:
                        uVar20 = *(ulong *)(uVar22 + 0x10);
                        cVar6 = *(char *)(param_2 + 0x61);
                        uVar35 = uVar22;
                        func_0x000109f0f5ac(uVar22,(int)cVar6);
                        if (((uVar35 & 1) != 0) ||
                           (((uVar33 = uVar33 & 0x8000, cVar6 == '\a' && ((uVar16 >> 0x10 & 1) == 0)
                             ) && (*(int *)(uVar22 + 0x3c) == 0x1b)))) {
                          func_0x000109eca118(uVar20);
                          uVar33 = *(ulong *)(uVar22 + 0x2c) & 0x8000;
                        }
                        if (uVar33 != 0) {
                          func_0x000109eca118(uVar20);
                        }
                        uVar33 = *(ulong *)(uVar22 + 0x20);
                        if ((uVar33 >> 0x26 & 1) == 0) {
                          FUN_109ec9e40(uVar20,0,1);
                        }
                        else {
                          FUN_109eca23c(uVar20);
                          uVar20 = (ulong)(((uint)(uVar33 >> 0x24) & 3) + (int)uVar20 + 3 >> 2);
                        }
                        uVar35 = 0;
                        lVar34 = lVar28;
                      }
LAB_109f00f8c:
                      FUN_109f011bc(param_2,uVar22,uVar35,uVar20,lVar34,
                                    uVar15 == 0x112 && (uVar32 & 0x1fffff) == 8);
                      if ((*(char *)(param_2 + 0x61) == '\0') &&
                         ((*(ulong *)(uVar22 + 0x20) & 0x1fffff) == 4)) {
                        lVar34 = *(long *)(uVar22 + 0x10);
                        bVar7 = *(byte *)(lVar34 + 4);
                        lVar28 = lVar34;
                        while (bVar7 == 0x13) {
                          lVar28 = *(long *)(lVar28 + 0x30);
                          bVar7 = *(byte *)(lVar28 + 4);
                        }
                        uVar15 = (uint)bVar7;
                        FUN_109ec9858();
                        if (((uVar15 == 0x40) && (2 < *(byte *)(lVar28 + 0xd))) &&
                           (FUN_109ec9e40(lVar34,0,1), (int)lVar34 != 0)) {
                          uVar15 = 0;
                          uVar33 = *(ulong *)(param_2 + 0x158);
                          do {
                            uVar33 = 1L << ((ulong)(uVar15 + *(int *)(uVar22 + 0x3c)) & 0x3f) |
                                     uVar33;
                            *(ulong *)(param_2 + 0x158) = uVar33;
                            uVar15 = uVar15 + 1;
                            uVar12 = *(undefined8 *)(uVar22 + 0x10);
                            FUN_109ec9e40(uVar12,0,1);
                          } while (uVar15 < (uint)uVar12);
                        }
                      }
                    }
                    puVar11 = puVar30;
                    FUN_109eff8f4();
                    if ((int)puVar11 != 0) {
                      *(ushort *)(param_2 + 0x152) = *(ushort *)(param_2 + 0x152) | 0x40;
                    }
                    break;
                  case 200:
                  case 0xc9:
                    uVar22 = 0;
                    do {
                      plVar18 = (long *)puVar30[0x13];
                      uVar33 = uVar22;
                      func_0x000109ecd6b8();
                      if (*(int *)(*plVar18 + 0x18) == 5) {
                        uVar10 = (uint)*(undefined8 *)(*plVar18 + (uVar33 & 0xffffffff) * 8 + 0x48);
                        uVar15 = (*(byte *)((long)plVar18 + 0x1d) & 0xaaaaaaaa) >> 1 |
                                 (*(byte *)((long)plVar18 + 0x1d) & 0x55555555) << 1;
                        uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
                        uVar16 = (uint)LZCOUNT((uVar15 >> 4 | (uVar15 & 0xf0f0f0f) << 4) << 0x18);
                        uVar15 = uVar10 & 0xff;
                        if (uVar16 != 3) {
                          uVar15 = uVar10 & 0xffff;
                        }
                        uVar8 = uVar10 & 1;
                        if (uVar16 != 0) {
                          uVar8 = uVar15;
                        }
                        if (uVar16 < 5) {
                          uVar10 = uVar8;
                        }
                        *(uint *)((long)puVar1 + uVar22 * 4) = uVar10;
                      }
                      uVar22 = uVar22 + 1;
                    } while (uVar22 != 3);
                    break;
                  case 0xda:
                    uVar15 = *(uint *)((long)puVar30 +
                                      (ulong)(byte)(&UNK_110b671b3)[uVar22 * 0x68] * 4 + 0x50);
                    if (uVar15 < 2) {
                      uVar15 = *(uint *)(param_2 + 0x8c) | 0x2000000;
code_r0x000109f00344:
                      *(uint *)(param_2 + 0x8c) = uVar15;
                    }
                    else if (uVar15 == 3) {
                      uVar15 = *(uint *)(param_2 + 0x8c) | 0x10000000;
code_r0x000109f00ea0:
                      *(uint *)(param_2 + 0x8c) = uVar15;
                    }
                    break;
                  case 0xdb:
                  case 0xdc:
                  case 0xdd:
                  case 0xde:
                  case 0xdf:
                    uVar15 = *(uint *)((long)puVar30 +
                                      (ulong)(byte)(&UNK_110b671b3)[uVar22 * 0x68] * 4 + 0x50);
                    if (uVar15 < 2) {
                      uVar15 = *(uint *)(param_2 + 0x8c) | 0x80000000;
                      goto code_r0x000109f00344;
                    }
                    if (uVar15 == 3) {
                      *(uint *)(param_2 + 0x90) = *(uint *)(param_2 + 0x90) | 1;
                    }
                    break;
                  case 0xe0:
                  case 0xe4:
                  case 0xe5:
                  case 0xe6:
                  case 0xe7:
                    goto LAB_109f004b4;
                  case 0xe2:
                    uVar15 = *(uint *)((long)puVar30 +
                                      (ulong)(byte)(&UNK_110b671b3)[uVar22 * 0x68] * 4 + 0x50);
                    if (uVar15 < 2) {
                      uVar15 = *(uint *)(param_2 + 0x8c) | 0x800000;
                      goto code_r0x000109f00344;
                    }
                    if (uVar15 == 3) {
                      uVar15 = *(uint *)(param_2 + 0x8c) | 0x8000000;
                      goto code_r0x000109f00ea0;
                    }
                    break;
                  case 0xe3:
                    uVar15 = *(uint *)((long)puVar30 +
                                      (ulong)(byte)(&UNK_110b671b3)[uVar22 * 0x68] * 4 + 0x50);
                    if (uVar15 < 2) {
                      uVar15 = 0x1000000;
code_r0x000109f00e60:
                      *(uint *)(param_2 + 0x8c) = *(uint *)(param_2 + 0x8c) | uVar15;
                    }
                    else if (uVar15 == 3) {
                      uVar15 = 0x20000000;
                      goto code_r0x000109f00e60;
                    }
                    if (*(char *)(param_2 + 0x61) == '\x04') {
                      uVar15 = *(uint *)(param_2 + 0x158) | 0x80;
                      goto LAB_109f00e80;
                    }
                  }
                }
              }
              else {
                switch(uVar15) {
                case 0x136:
                case 0x139:
                case 0x13a:
                case 0x13b:
                case 0x13c:
                case 0x13e:
                case 0x13f:
                case 0x140:
                case 0x141:
                case 0x142:
                case 0x143:
                case 0x145:
                case 0x146:
                case 0x14a:
                case 0x14c:
                case 0x14e:
                case 0x150:
                case 0x151:
                case 0x152:
                case 0x153:
                case 0x155:
                case 0x158:
                case 0x159:
                case 0x15a:
                case 0x15b:
                case 0x15d:
                case 0x15e:
                case 0x160:
                case 0x161:
                case 0x163:
                case 0x165:
                case 0x166:
                case 0x16c:
                case 0x16d:
                case 0x170:
                case 0x171:
                case 0x172:
                case 0x173:
                case 0x174:
                case 0x175:
                case 0x177:
                case 0x178:
                case 0x179:
                case 0x17a:
                case 0x17b:
                case 0x17c:
                case 0x17d:
                case 0x17e:
                case 0x17f:
                case 0x180:
                case 0x181:
                case 0x182:
                case 0x186:
                case 0x187:
                case 0x188:
                case 0x18c:
                case 0x18d:
                case 0x18e:
                case 0x192:
                case 0x193:
                case 0x196:
LAB_109f00d84:
                  if ((uVar15 - 0x2f < 0x12) &&
                     ((1 << (ulong)(uVar15 - 0x2f & 0x1f) & 0x2bfcfU) != 0)) {
                    uVar14 = *(ushort *)(param_2 + 0x152);
                    uVar13 = 0x400;
                  }
                  else {
                    uVar14 = *(ushort *)(param_2 + 0x152);
                    uVar13 = uVar14 & 0x400;
                  }
                  uVar13 = uVar13 | uVar14 & 0xfbff;
                  *(ushort *)(param_2 + 0x152) = uVar13;
                  puVar11 = puVar30;
                  FUN_109eff8f4();
                  if ((int)puVar11 != 0) {
                    *(ushort *)(param_2 + 0x152) = uVar13 | 0x40;
                  }
                  uVar15 = (uint)puVar30[5];
                  if (((uVar15 - 0x9c < 0x17) &&
                      ((1 << (ulong)(uVar15 - 0x9c & 0x1f) & 0x5100a1U) != 0)) ||
                     ((uVar15 < 0x3b && ((1L << ((ulong)uVar15 & 0x3f) & 0x510000000000000U) != 0)))
                     ) {
                    uVar13 = *(ushort *)(param_2 + 0x14e) | 0x2000;
                    goto LAB_109f00290;
                  }
                  break;
                case 0x144:
                case 0x147:
                case 0x149:
                case 0x168:
                case 0x16a:
                  cVar6 = *(char *)(param_2 + 0x61);
                  if (uVar15 != 0x144) {
                    bVar9 = true;
                  }
                  if ((cVar6 != '\x02') || (bVar9)) {
                    *(ulong *)(param_2 + 0x68) = *(ulong *)(param_2 + 0x68) | uVar32;
                    if ((*(uint *)((long)puVar30 + uVar33 * 4 + 0x50) >> 0x1b & 1) != 0) {
                      *(ulong *)(param_2 + 0x70) = *(ulong *)(param_2 + 0x70) | uVar32;
                    }
                    if (uVar15 == 0x168) {
                      *(ulong *)(param_2 + 0x98) = *(ulong *)(param_2 + 0x98) | uVar32;
                    }
                    *(ushort *)(param_2 + 0xb0) = *(ushort *)(param_2 + 0xb0) | uVar13;
                    puVar11 = puVar30;
                    FUN_109f140f4();
                    if (*(int *)(**(long **)((long)(puVar30 + 0x13) +
                                            (-((ulong)puVar11 >> 0x1f & 1) & 0xffffffe000000000 |
                                            ((ulong)puVar11 & 0xffffffff) << 5)) + 0x18) != 5) {
                      *(ulong *)(param_2 + 200) = *(ulong *)(param_2 + 200) | uVar32;
                      *(ushort *)(param_2 + 0xb6) = *(ushort *)(param_2 + 0xb6) | uVar13;
                    }
                    if ((cVar6 == '\x01') && (uVar15 == 0x16a)) {
                      plVar18 = (long *)puVar30[0x13];
                      func_0x000109ecd6b8(plVar18,0);
                      if ((*(int *)(*plVar18 + 0x18) == 4) && (*(int *)(*plVar18 + 0x28) == 0x14b))
                      {
                        *puVar1 = *puVar1 | uVar32;
                      }
                      else {
                        *(ulong *)(param_2 + 0x168) = *(ulong *)(param_2 + 0x168) | uVar32;
                      }
                    }
                  }
                  else {
                    *(uint *)(param_2 + 0xbc) = *(uint *)(param_2 + 0xbc) | uVar10;
                    puVar11 = puVar30;
                    FUN_109f140f4();
                    if (*(int *)(*(long *)puVar30[(long)(int)puVar11 * 4 + 0x13] + 0x18) != 5) {
                      *(ulong *)(param_2 + 0xd8) = *(ulong *)(param_2 + 0xd8) | uVar32;
                    }
                  }
                  break;
                case 0x164:
                case 0x169:
                case 0x16b:
                  uVar14 = *(ushort *)(param_2 + 0x61);
                  if (uVar15 != 0x164) {
                    bVar9 = true;
                  }
                  if (((uVar14 & 0xff) != 1) || (bVar9)) {
                    *(ulong *)(param_2 + 0x80) = *(ulong *)(param_2 + 0x80) | uVar32;
                    *(ushort *)(param_2 + 0xb4) = *(ushort *)(param_2 + 0xb4) | uVar13;
                    puVar11 = puVar30;
                    FUN_109f140f4();
                    if (*(int *)(**(long **)((long)(puVar30 + 0x13) +
                                            (-((ulong)puVar11 >> 0x1f & 1) & 0xffffffe000000000 |
                                            ((ulong)puVar11 & 0xffffffff) << 5)) + 0x18) != 5) {
                      *(ulong *)(param_2 + 0xd0) = *(ulong *)(param_2 + 0xd0) | uVar32;
                      *(ushort *)(param_2 + 0xb8) = *(ushort *)(param_2 + 0xb8) | uVar13;
                    }
                    uVar14 = uVar14 & 0xff;
                    if (uVar14 == 7) {
                      if ((uVar15 | 2) == 0x16b) {
                        uVar22 = puVar30[0x13];
LAB_109f0108c:
                        uVar33 = param_2;
                        FUN_109f01110(param_2,uVar22);
                        if ((uVar33 & 1) == 0) {
                          *(ulong *)(param_2 + 0x158) = *(ulong *)(param_2 + 0x158) | uVar32;
                        }
                      }
                    }
                    else if (uVar14 == 4) {
                      if ((*(uint *)((long)puVar30 + uVar33 * 4 + 0x50) >> 0xe & 1) != 0)
                      goto LAB_109f00944;
                    }
                    else if (uVar14 == 1) goto code_r0x000109f009cc;
                  }
                  else {
                    *(uint *)(param_2 + 0xc4) = *(uint *)(param_2 + 0xc4) | uVar10;
                    puVar11 = puVar30;
                    FUN_109f140f4();
                    if (*(int *)(*(long *)puVar30[(long)(int)puVar11 * 4 + 0x13] + 0x18) != 5) {
                      *(ulong *)(param_2 + 0xe0) = *(ulong *)(param_2 + 0xe0) | uVar32;
                    }
code_r0x000109f009cc:
                    if ((int)puVar30[5] == 0x16b) {
                      plVar18 = (long *)puVar30[0x13];
                      func_0x000109ecd6b8(plVar18,0);
                      if ((*(int *)(*plVar18 + 0x18) != 4) || (*(int *)(*plVar18 + 0x28) != 0x14b))
                      {
                        *(ulong *)(param_2 + 0x170) = *(ulong *)(param_2 + 0x170) | uVar32;
                      }
                    }
                  }
                  break;
                default:
                  uVar33 = (ulong)(uVar15 - 0xfc);
                  if (0x2c < uVar15 - 0xfc) goto LAB_109f00d84;
                  if ((1L << (uVar33 & 0x3f) & 0x144221000000U) == 0) {
                    if ((1L << (uVar33 & 0x3f) & 3U) == 0) {
                      if (uVar33 == 0x16) goto LAB_109f00a3c;
                      goto LAB_109f00d84;
                    }
                    *(ulong *)(param_2 + 0x68) =
                         *(ulong *)(param_2 + 0x68) |
                         1L << ((ulong)(uint)(1 << (uVar15 == 0xfd)) & 0x3f);
                  }
                case 0x134:
                case 0x135:
                case 0x137:
                case 0x138:
                case 0x13d:
                case 0x148:
                case 0x14b:
                case 0x14d:
                case 0x14f:
                case 0x154:
                case 0x156:
                case 0x157:
                case 0x15c:
                case 0x15f:
                case 0x162:
                case 0x167:
                case 0x16e:
                case 0x16f:
                case 0x176:
                case 0x183:
                case 0x184:
                case 0x185:
                case 0x189:
                case 0x18a:
                case 0x18b:
                case 399:
                case 400:
                case 0x191:
                case 0x194:
                case 0x195:
                case 0x197:
                case 0x198:
                case 0x199:
                case 0x19a:
LAB_109f004b4:
                  func_0x000109eccd40();
                  uVar15 = (uint)uVar22 >> 5;
                  *(uint *)(param_2 + 0x88 + (ulong)uVar15 * 4) =
                       1 << (ulong)((uint)uVar22 & 0x1f) |
                       *(uint *)(param_2 + 0x88 + (ulong)uVar15 * 4);
                }
              }
            }
            else {
              if ((int)uVar15 < 0x26f) {
                uVar33 = (ulong)(uVar15 - 0x227);
                if (uVar15 - 0x227 < 0x3a) {
                  if ((1L << (uVar33 & 0x3f) & 0x2b000022c000001U) != 0) goto LAB_109f00444;
                  if ((1L << (uVar33 & 0x3f) & 0x3f80000U) != 0) {
                    if (*(char *)(param_2 + 0x61) != '\x04') goto LAB_109f00e84;
LAB_109f005bc:
                    uVar15 = *(uint *)(param_2 + 0x158);
                    goto LAB_109f005c0;
                  }
                  if (uVar33 == 0x2c) {
                    uVar22 = *(ulong *)(param_2 + 0x78) | 8;
                    goto LAB_109f004f4;
                  }
                }
                if (((0x31 < uVar15 - 0x1f1) ||
                    ((1L << ((ulong)(uVar15 - 0x1f1) & 0x3f) & 0x270001c40007bU) == 0)) &&
                   ((0x39 < uVar15 - 0x1b0 ||
                    ((1L << ((ulong)(uVar15 - 0x1b0) & 0x3f) & 0x21ef00000000059U) == 0))))
                goto LAB_109f00d84;
                goto LAB_109f004b4;
              }
              if ((int)uVar15 < 0x294) {
                if (uVar15 - 0x27a < 3) {
                  uVar14 = *(ushort *)(param_2 + 0x61);
                  if (uVar15 != 0x27a) {
                    bVar9 = true;
                  }
                  if (((uVar14 & 0xff) != 1) || (bVar9)) {
                    *(ulong *)(param_2 + 0x78) = *(ulong *)(param_2 + 0x78) | uVar32;
                    *(ushort *)(param_2 + 0xb2) = *(ushort *)(param_2 + 0xb2) | uVar13;
                    if (uVar15 == 0x27b) {
                      *(ulong *)(param_2 + 0xa0) = *(ulong *)(param_2 + 0xa0) | uVar32;
                    }
                    puVar11 = puVar30;
                    FUN_109f140f4();
                    if (*(int *)(*(long *)puVar30[(long)(int)puVar11 * 4 + 0x13] + 0x18) != 5) {
                      *(ulong *)(param_2 + 0xd0) = *(ulong *)(param_2 + 0xd0) | uVar32;
                      *(ushort *)(param_2 + 0xb8) = *(ushort *)(param_2 + 0xb8) | uVar13;
                    }
                    uVar14 = uVar14 & 0xff;
                    if (uVar14 == 4) {
                      if ((*(uint *)((long)puVar30 + uVar33 * 4 + 0x50) >> 0xd & 1) != 0) {
                        uVar15 = *(uint *)(param_2 + 0x158) | 8;
                        goto LAB_109f00e80;
                      }
                    }
                    else if ((uVar14 == 7) && (uVar15 - 0x27b < 2)) {
                      uVar22 = puVar30[0x17];
                      goto LAB_109f0108c;
                    }
                  }
                  else {
                    *(uint *)(param_2 + 0xc0) = *(uint *)(param_2 + 0xc0) | uVar10;
                    puVar11 = puVar30;
                    FUN_109f140f4();
                    if (*(int *)(*(long *)puVar30[(long)(int)puVar11 * 4 + 0x13] + 0x18) != 5) {
                      *(ulong *)(param_2 + 0xe0) = *(ulong *)(param_2 + 0xe0) | uVar32;
                    }
                  }
                }
                else {
                  if (uVar15 == 0x26f) goto LAB_109f00a3c;
                  if (uVar15 != 0x290) goto LAB_109f00d84;
                  uVar22 = *(ulong *)(param_2 + 0x78) | 3;
LAB_109f004f4:
                  *(ulong *)(param_2 + 0x78) = uVar22;
                }
              }
              else if (uVar15 - 0x29e < 4) {
LAB_109f00444:
                *(undefined1 *)(param_2 + 0x141) = 1;
                if ((*(char *)(param_2 + 0x61) == '\x04') &&
                   (uVar15 = *(uint *)(param_2 + 0x158), (uVar15 >> 4 & 1) != 0)) {
LAB_109f005c0:
                  uVar15 = uVar15 | 0x40;
LAB_109f00e80:
                  *(uint *)(param_2 + 0x158) = uVar15;
                }
              }
              else {
                if (1 < uVar15 - 0x294) goto LAB_109f00d84;
LAB_109f00718:
                if (*(char *)(param_2 + 0x61) == '\x04') {
                  uVar15 = *(uint *)(param_2 + 0x158) | 1;
                  goto LAB_109f00e80;
                }
              }
            }
          }
LAB_109f00e84:
        }
        FUN_109ecc434();
      } while (lVar29 != 0);
    }
  }
  return;
}



/* Entry: 109f01110; end: 109f011bb;  */

bool FUN_109f01110(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  
  iVar3 = 0;
  func_0x000109ecd6b8(param_2,0);
  if (*(int *)(*param_2 + 0x18) == 4) {
    iVar1 = *(int *)(*param_2 + 0x28);
    if (iVar1 == 0x157) {
      return true;
    }
    if (iVar1 == 0x156) {
      lVar5 = 0;
      uVar4 = 0;
      do {
        uVar2 = 1 << (ulong)((uint)lVar5 & 0x1f);
        if (*(ushort *)(param_1 + 0x134 + lVar5 * 2) < 2) {
          uVar2 = 0;
        }
        uVar4 = uVar2 | uVar4;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 3);
      if (uVar4 == 0) {
        return true;
      }
      if ((uVar4 & uVar4 - 1) == 0) {
        uVar4 = (uVar4 & 0xaaaaaaaa) >> 1 | (uVar4 & 0x55555555) << 1;
        uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
        uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
        uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
        return (int)LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10) == iVar3;
      }
    }
  }
  return false;
}



/* Entry: 109f011bc; end: 109f01867;  */

void FUN_109f011bc(long param_1,long param_2,int param_3,int param_4,undefined8 param_5,uint param_6
                  )

{
  byte bVar1;
  ulong *puVar2;
  long *plVar3;
  bool bVar4;
  long *plVar5;
  ushort uVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  undefined1 auStack_a0 [56];
  long *plStack_68;
  
  if (0 < param_4) {
    iVar9 = 0;
    do {
      if (*(int *)(param_2 + 0x3c) == -1) {
        return;
      }
      uVar10 = iVar9 + param_3 + *(int *)(param_2 + 0x3c);
      bVar1 = uVar10 - 0x1e < 0xfffffffc & *(byte *)(param_2 + 0x23);
      if (bVar1 == 1) {
        if (uVar10 - 0x60 < 0xffffffe0) {
          return;
        }
        uVar10 = uVar10 - 0x40;
      }
      else if (0x3f < (int)uVar10) {
        return;
      }
      lVar7 = param_2;
      func_0x000109f0f5ac(param_2,(long)*(char *)(param_1 + 0x61));
      FUN_109ef9548(auStack_a0,param_5,0);
      plVar3 = plStack_68;
      plVar5 = plStack_68 + 1;
      uVar8 = 0;
      if ((int)lVar7 != 0) {
        if (*(char *)(param_1 + 0x61) == '\a') {
          lVar7 = param_1;
          FUN_109f01110(param_1,*(undefined8 *)(*plVar5 + 0x70));
          uVar8 = (uint)lVar7 ^ 1;
        }
        else if (*(char *)(param_1 + 0x61) == '\x01') {
          plVar5 = *(long **)(*plVar5 + 0x70);
          func_0x000109ecd6b8(plVar5,0);
          if (*(int *)(*plVar5 + 0x18) == 4) {
            uVar8 = (uint)(*(int *)(*plVar5 + 0x28) != 0x14b);
          }
          else {
            uVar8 = 1;
          }
        }
        else {
          uVar8 = 0;
        }
        plVar5 = plVar3 + 2;
      }
      if (((*(byte *)(*(long *)(*plVar3 + 0x38) + 0x24) >> 6 & 1) == 0) &&
         (lVar7 = *plVar5, lVar7 != 0)) {
        bVar4 = false;
        do {
          plVar5 = plVar5 + 1;
          if (*(int *)(lVar7 + 0x28) == 1) {
            bVar4 = (bool)(bVar4 | *(int *)(**(long **)(lVar7 + 0x70) + 0x18) != 5);
          }
          lVar7 = *plVar5;
        } while (lVar7 != 0);
      }
      else {
        bVar4 = false;
      }
      uVar11 = 1L << ((ulong)uVar10 & 0x3f);
      FUN_109ef9640(auStack_a0);
      uVar10 = (uint)uVar11;
      if ((*(ulong *)(param_2 + 0x20) & 0x1fffff) == 4) {
        if (bVar1 == 0) {
          *(ulong *)(param_1 + 0x68) = *(ulong *)(param_1 + 0x68) | uVar11;
          puVar2 = (ulong *)(param_1 + 200);
        }
        else {
          *(uint *)(param_1 + 0xbc) = *(uint *)(param_1 + 0xbc) | uVar10;
          puVar2 = (ulong *)(param_1 + 0xd8);
        }
        if (bVar4) {
          *puVar2 = *puVar2 | uVar11;
        }
        if (*(char *)(param_1 + 0x61) == '\x04') {
          uVar10 = *(uint *)(param_2 + 0x20) >> 0x10 & 0x80 | *(uint *)(param_1 + 0x158);
LAB_109f01524:
          *(uint *)(param_1 + 0x158) = uVar10;
        }
        else if (*(char *)(param_1 + 0x61) == '\x01') {
          if (uVar8 == 0) {
            *(ulong *)(param_1 + 0x160) = *(ulong *)(param_1 + 0x160) | uVar11;
          }
          else {
            *(ulong *)(param_1 + 0x168) = *(ulong *)(param_1 + 0x168) | uVar11;
          }
        }
      }
      else {
        if (param_6 == 0) {
          if (bVar1 == 0) {
            if (((uint)*(ulong *)(param_2 + 0x20) >> 0x15 & 1) == 0) {
              *(ulong *)(param_1 + 0x78) = *(ulong *)(param_1 + 0x78) | uVar11;
              puVar2 = (ulong *)(param_1 + 0xd0);
              goto joined_r0x000109f01480;
            }
          }
          else {
            *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | uVar10;
            puVar2 = (ulong *)(param_1 + 0xe0);
joined_r0x000109f01480:
            if (bVar4) {
              *puVar2 = *puVar2 | uVar11;
            }
          }
          uVar6 = *(ushort *)(param_1 + 0x61);
          if (uVar8 != 0) goto LAB_109f01498;
        }
        else {
          if (bVar1 == 0) {
            *(ulong *)(param_1 + 0x80) = *(ulong *)(param_1 + 0x80) | uVar11;
            puVar2 = (ulong *)(param_1 + 0xd0);
          }
          else {
            *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) | uVar10;
            puVar2 = (ulong *)(param_1 + 0xe0);
          }
          if (bVar4) {
            *puVar2 = *puVar2 | uVar11;
          }
          uVar6 = *(ushort *)(param_1 + 0x61);
          if (uVar8 != 0) {
            if ((uVar6 & 0xff) == 1) {
              *(ulong *)(param_1 + 0x170) = *(ulong *)(param_1 + 0x170) | uVar11;
            }
LAB_109f01498:
            if ((uVar6 & 0xff) == 7) {
              *(ulong *)(param_1 + 0x158) = *(ulong *)(param_1 + 0x158) | uVar11;
            }
          }
        }
        if (*(char *)(param_2 + 0x24) < '\0') {
          *(ulong *)(param_1 + 0x80) = *(ulong *)(param_1 + 0x80) | uVar11;
          if ((uVar6 & 0xff) != 4) goto LAB_109f01538;
          bVar4 = false;
          uVar10 = *(uint *)(param_1 + 0x158);
          *(uint *)(param_1 + 0x158) = uVar10 | 2;
          *(uint *)(param_1 + 0x158) =
               uVar10 & 0xfffffff8 |
               uVar10 & 3 | 2 | ((uint)((ulong)*(undefined8 *)(param_2 + 0x2c) >> 0x20) & 1) << 2;
        }
        else {
          bVar4 = (uVar6 & 0xff) != 4;
        }
        if ((((param_6 & 1) == 0) && (!bVar4)) && (*(int *)(param_2 + 0x34) == 1)) {
          uVar10 = *(uint *)(param_1 + 0x158) | 8;
          goto LAB_109f01524;
        }
      }
LAB_109f01538:
      iVar9 = iVar9 + 1;
    } while (iVar9 != param_4);
  }
  return;
}



/* Entry: 109f01868; end: 109f018db;  */

/* WARNING: Possible PIC construction at 0x000109f018b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109f018b4) */

void FUN_109f01868(long *param_1,long param_2,long param_3,undefined8 param_4,undefined1 *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_3 != 0) {
    uVar6 = *(uint *)(param_2 + 0x18) >> 5;
    uVar2 = *(uint *)(param_3 + (ulong)uVar6 * 4);
    uVar4 = 1 << (ulong)(*(uint *)(param_2 + 0x18) & 0x1f);
    uVar7 = *(uint *)(param_1 + 3) >> 5;
    uVar3 = *(uint *)(param_3 + (ulong)uVar7 * 4);
    uVar5 = 1 << (ulong)(*(uint *)(param_1 + 3) & 0x1f);
    uVar1 = uVar3 & uVar5;
    if ((uVar2 & uVar4) == 0) {
      if (((*(uint *)(*param_1 + 0x18) & 0xfffffffd) != 5) && (uVar1 != 0)) {
        *(uint *)(param_3 + (ulong)uVar6 * 4) = uVar2 | uVar4;
        goto LAB_109f019ac;
      }
    }
    else if (uVar1 == 0) {
      *(uint *)(param_3 + (ulong)uVar7 * 4) = uVar3 | uVar5;
LAB_109f019ac:
      *param_5 = 1;
      return;
    }
  }
  return;
}



/* Entry: 109f018dc; end: 109f019b7;  */

void FUN_109f018dc(uint param_1,uint param_2,long param_3,long param_4,undefined1 *param_5)

{
  uint uVar1;
  uint uVar2;
  
  param_2 = param_2 & 0x86;
  if (param_2 < 4) {
    if (param_2 == 0) {
      return;
    }
  }
  else if ((param_2 != 4) && (param_2 == 0x80)) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = *(uint *)(param_3 + (ulong)(param_1 >> 5) * 4);
    uVar2 = 1 << (ulong)(param_1 & 0x1f);
    if ((uVar1 & uVar2) != 0) {
      return;
    }
    *param_5 = 1;
    *(uint *)(param_3 + (ulong)(param_1 >> 5) * 4) = uVar1 | uVar2;
    return;
  }
  if (param_4 != 0) {
    uVar1 = *(uint *)(param_4 + (ulong)(param_1 >> 5) * 4);
    uVar2 = 1 << (ulong)(param_1 & 0x1f);
    if ((uVar1 & uVar2) == 0) {
      *param_5 = 1;
      *(uint *)(param_4 + (ulong)(param_1 >> 5) * 4) = uVar1 | uVar2;
      return;
    }
  }
  return;
}



/* Entry: 109f019b8; end: 109f01ecf;  */

void FUN_109f019b8(undefined1 *param_1)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  undefined *puVar8;
  bool bVar9;
  long *plVar10;
  undefined1 *puVar11;
  byte bVar12;
  long lVar13;
  long *plVar14;
  byte *pbVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  short *psVar19;
  byte *pbVar20;
  byte *pbVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  long *plVar32;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  lVar13 = 0;
  plVar14 = *(long **)(param_1 + 0x178);
  plVar32 = (long *)**(long **)(param_1 + 0x178);
  do {
    plVar10 = plVar14;
    if (*(char *)(plVar14 + 7) == '\0') {
      plVar10 = (long *)lVar13;
    }
    plVar17 = (long *)*plVar32;
    lVar13 = (long)plVar10;
    plVar14 = plVar32;
    plVar32 = plVar17;
  } while (plVar17 != (long *)0x0);
  uStack_64 = 0;
  lVar13 = *(long *)(*(long *)((long)plVar10 + 0x30) + 0x30);
  if (lVar13 != 0) {
    pbVar20 = (byte *)0x0;
    uVar30 = 0;
    uVar24 = 0;
    uVar22 = 0;
    uVar27 = 0;
    do {
      plVar14 = *(long **)(lVar13 + 0x20);
      for (plVar32 = (long *)**(long **)(lVar13 + 0x20); plVar32 != (long *)0x0;
          plVar32 = (long *)*plVar32) {
        if (((*(int *)(plVar14 + 3) == 4) && (plVar10 = plVar14, FUN_109ecdadc(), (int)plVar10 != 0)
            ) && (uVar26 = *(uint *)((long)plVar14 +
                                    (ulong)(byte)(&UNK_110b671aa)
                                                 [(ulong)*(uint *)(plVar14 + 5) * 0x68] * 4 + 0x50),
                 uVar29 = uVar30, uVar26 != 0)) {
          do {
            uVar30 = (uVar26 & 0xaaaaaaaa) >> 1 | (uVar26 & 0x55555555) << 1;
            uVar30 = (uVar30 & 0xcccccccc) >> 2 | (uVar30 & 0x33333333) << 2;
            uVar30 = (uVar30 & 0xf0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f) << 4;
            uVar30 = (uVar30 & 0xff00ff00) >> 8 | (uVar30 & 0xff00ff) << 8;
            lVar7 = (ulong)*(uint *)(plVar14 + 5) * 0x68;
            uVar31 = (uint)LZCOUNT(uVar30 >> 0x10 | uVar30 << 0x10);
            uVar1 = *(int *)((long)plVar14 + (ulong)(byte)(&UNK_110b671b1)[lVar7] * 4 + 0x50) +
                    uVar31;
            puVar8 = &UNK_110b671d0;
            if (1 < uVar1) {
              puVar8 = &UNK_110b671d1;
            }
            uStack_68 = *(undefined4 *)((long)plVar14 + (ulong)(byte)puVar8[lVar7] * 4 + 0x50);
            pbVar15 = (byte *)((ulong)&uStack_68 | (ulong)(uVar1 & 1) << 1);
            bVar4 = *pbVar15;
            uVar30 = uVar29;
            if ((bVar4 & 0xf) != 0) {
              uVar3 = *(uint *)((long)plVar14 +
                               (ulong)(byte)(&UNK_110b671cf)[(ulong)*(uint *)(plVar14 + 5) * 0x68] *
                               4 + 0x50);
              uVar30 = uVar1 + (bVar4 & 0xf);
              bVar12 = 0xff;
              if (uVar30 != 0x20) {
                bVar12 = ~(byte)(-1 << (ulong)(uVar30 & 0x1f));
              }
              bVar6 = 0;
              if (uVar1 != 0x20) {
                bVar6 = (byte)(-1 << (ulong)(uVar1 & 0x1f));
              }
              bVar5 = pbVar15[1];
              uVar30 = uVar29 + 8;
              if (uVar24 < uVar30) {
                uVar24 = uVar24 << 1;
                if (uVar24 <= uVar30) {
                  uVar24 = uVar30;
                }
                if (uVar24 < 0x41) {
                  uVar24 = 0x40;
                }
                _realloc(pbVar20,uVar24);
              }
              pbVar15 = pbVar20 + uVar29;
              *pbVar15 = bVar4 >> 4;
              *(ushort *)(pbVar15 + 2) = (ushort)bVar5 << 2;
              pbVar15[4] = (byte)uVar3 & 0x7f;
              pbVar15[5] = (byte)(uVar3 >> 0x19) & 1;
              pbVar15[6] = bVar12 & bVar6;
              pbVar15[7] = (byte)uVar1;
              uVar29 = (uVar3 >> 0xf & 0xff) >> (ulong)((uVar31 & 0xf) << 1) & 3;
              uVar22 = uVar22 | 1 << (ulong)(bVar4 >> 4);
              uVar27 = uVar27 | 1 << (ulong)uVar29;
              *(char *)((long)&uStack_64 + (ulong)(bVar4 >> 4)) = (char)uVar29;
            }
            uVar29 = 1 << (ulong)(uVar31 & 0x1f);
            bVar9 = uVar29 != uVar26;
            uVar26 = uVar29 ^ uVar26;
            uVar29 = uVar30;
          } while (bVar9);
          plVar32 = (long *)*plVar14;
        }
        plVar14 = plVar32;
      }
      FUN_109ecc434();
    } while (lVar13 != 0);
    if (7 < uVar30) {
      if (uVar30 < 0x10) {
        uVar18 = 1;
      }
      else {
        uVar28 = (ulong)(uVar30 >> 3);
        _qsort(pbVar20,uVar28,8,FUN_109f01ed0);
        lVar13 = 0;
        uVar30 = (uVar30 >> 3) - 1;
        uVar25 = (ulong)uVar30;
        pbVar15 = pbVar20 + 0xf;
        uVar18 = 1;
        uVar16 = uVar28;
        do {
          uVar16 = uVar16 - 1;
          pbVar2 = pbVar20 + lVar13 * 8;
          if ((pbVar2[6] != 0) && (lVar13 + 1U < uVar28)) {
            bVar4 = *pbVar2;
            pbVar21 = pbVar15;
            uVar23 = uVar16;
            do {
              if (((bVar4 != pbVar21[-7]) || (pbVar2[4] != pbVar21[-3])) ||
                 (pbVar2[5] != pbVar21[-2])) break;
              if (pbVar21[-1] != 0) {
                bVar12 = *pbVar21;
                bVar6 = pbVar2[7];
                if ((uint)*(ushort *)(pbVar21 + -5) + (uint)bVar12 * -4 ==
                    (uint)*(ushort *)(pbVar2 + 2) + (uint)bVar6 * -4) {
                  if ((uint)bVar12 <= (uint)bVar6) {
                    bVar6 = bVar12;
                  }
                  bVar12 = pbVar2[6] | pbVar21[-1];
                  bVar5 = bVar12 >> (ulong)(bVar6 & 0x1f);
                  if ((bVar5 + 1 & bVar5) == 0) {
                    pbVar2[7] = bVar6;
                    pbVar2[6] = bVar12;
                    pbVar21[-1] = 0;
                  }
                }
              }
              pbVar21 = pbVar21 + 8;
              uVar23 = uVar23 - 1;
            } while (uVar23 != 0);
          }
          lVar13 = lVar13 + 1;
          pbVar15 = pbVar15 + 8;
          bVar9 = uVar18 != uVar25;
          uVar18 = uVar18 + 1;
        } while (bVar9);
        _qsort(pbVar20,uVar28,8,FUN_109f01ed0);
        uVar18 = uVar28;
        if (pbVar20[uVar25 * 8 + 6] == 0) {
          pbVar15 = pbVar20 + uVar25 * 8 + -2;
          do {
            uVar24 = (int)uVar28 - 1;
            uVar28 = (ulong)uVar24;
            uVar18 = (ulong)(uVar30 & (int)uVar30 >> 0x1f);
            if ((int)uVar24 < 1) break;
            bVar4 = *pbVar15;
            pbVar15 = pbVar15 + -8;
            uVar18 = uVar28;
          } while (bVar4 == 0);
        }
      }
      puVar11 = param_1;
      func_0x000109f6590c(param_1,((uint)uVar18 & 0xffff) * 8 + 0x18);
      if (puVar11 != (undefined1 *)0x0) {
        *puVar11 = (char)uVar22;
        puVar11[1] = (char)uVar27;
        *(undefined4 *)(puVar11 + 0x12) = uStack_64;
        *(short *)(puVar11 + 0x16) = (short)uVar18;
        _memcpy(puVar11 + 0x18,pbVar20,uVar18 << 3);
        lVar13 = 0;
        psVar19 = (short *)(puVar11 + 2);
        do {
          if (((uVar22 & 0xff) >> (ulong)((uint)lVar13 & 0x1f) & 1) != 0) {
            *psVar19 = (ushort)(byte)param_1[lVar13 + 0x142] << 2;
          }
          lVar13 = lVar13 + 1;
          psVar19 = psVar19 + 2;
        } while (lVar13 != 4);
        pbVar15 = pbVar20;
        if ((uint)uVar18 != 0) {
          do {
            *(short *)(puVar11 + (ulong)*pbVar15 * 4 + 4) =
                 *(short *)(puVar11 + (ulong)*pbVar15 * 4 + 4) + 1;
            uVar18 = uVar18 - 1;
            pbVar15 = pbVar15 + 8;
          } while (uVar18 != 0);
        }
        if (*(long *)(param_1 + 0x1c0) != 0) {
          lVar13 = *(long *)(param_1 + 0x1c0) + -0x30;
          FUN_109f65aa4(lVar13);
          FUN_109f65ae0(lVar13);
        }
        *(undefined1 **)(param_1 + 0x1c0) = puVar11;
      }
      if (pbVar20 != (byte *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_11034c310)(pbVar20);
        return;
      }
    }
  }
  return;
}



/* Entry: 109f01ed0; end: 109f01f37;  */

int FUN_109f01ed0(byte *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1[6] == 0) {
    uVar1 = 0x10000000;
  }
  else {
    uVar1 = (uint)*(ushort *)(param_1 + 2) | (uint)*param_1 << 0x1a |
            (uint)param_1[7] * 0x10000 + (uint)param_1[4] * 0x40000;
  }
  if (param_2[6] == 0) {
    uVar2 = 0x10000000;
  }
  else {
    uVar2 = (uint)*(ushort *)(param_2 + 2) | (uint)*param_2 << 0x1a |
            (uint)param_2[7] * 0x10000 + (uint)param_2[4] * 0x40000;
  }
  return uVar1 - uVar2;
}



/* Entry: 109f01f38; end: 109f0233f;  */

/* WARNING: Type propagation algorithm not settling */

bool FUN_109f01f38(long param_1,char *param_2,ulong param_3,ulong param_4)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  float fVar13;
  double dVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  uint uVar19;
  int *piVar20;
  char *pcVar21;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  char *pcVar25;
  long *plVar26;
  long lVar27;
  ulong uVar28;
  float fVar29;
  double dVar30;
  float fVar31;
  char acStack_48 [32];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = param_1 + (param_3 & 0xffffffff) * 0x30;
  param_3 = param_3 & 0xffffffff;
  plVar22 = *(long **)(lVar16 + 0x68);
  lVar17 = *plVar22;
  pcVar11 = param_2;
  if (*(int *)(lVar17 + 0x18) == 5) {
    lVar27 = **(long **)(param_2 + ((param_4 & 0xffffffff) * 6 + 0xd) * 8);
    if ((*(int *)(lVar27 + 0x18) == 5) &&
       ((uint)*(byte *)((long)plVar22 + 0x1d) ==
        (uint)*(byte *)((long)*(long **)(param_2 + ((param_4 & 0xffffffff) * 6 + 0xd) * 8) + 0x1d)))
    {
      uVar23 = 0;
      uVar15 = *(uint *)((long)&PTR_DAT_110b78538 +
                        param_3 * 4 + (ulong)*(uint *)(param_1 + 0x28) * 0x68 + 0x20) |
               (uint)*(byte *)((long)plVar22 + 0x1d);
      bVar6 = *(byte *)((long)&PTR_DAT_110b78538 +
                       param_3 + (ulong)*(uint *)(param_1 + 0x28) * 0x68 + 0x10);
      uVar28 = (ulong)(uVar15 - 0x12);
      pcVar11 = (char *)(1L << (uVar28 & 0x3f));
      do {
        bVar7 = bVar6;
        if (bVar6 == 0) {
          bVar7 = *(byte *)(param_1 + 0x4c);
        }
        if (uVar23 < bVar7) {
          bVar8 = false;
          dVar30 = *(double *)(lVar17 + 0x48 + (ulong)*(byte *)(lVar16 + 0x70 + uVar23) * 8);
          dVar14 = *(double *)
                    (lVar27 + 0x48 +
                    (ulong)(byte)param_2[uVar23 + (param_4 & 0xffffffff) * 0x30 + 0x70] * 8);
          fVar29 = SUB84(dVar30,0);
          fVar13 = SUB84(dVar14,0);
          if ((int)uVar15 < 0x90) {
            if (uVar15 - 0x12 < 0x33) {
              if (((ulong)pcVar11 & 5) == 0) {
                if ((1L << (uVar28 & 0x3f) & 0x50000U) == 0) {
                  if ((1L << (uVar28 & 0x3f) & 0x5000000000000U) == 0) goto LAB_109f0208c;
                  if ((long)dVar30 + (long)dVar14 == 0) goto LAB_109f02144;
                  goto LAB_109f02188;
                }
                iVar3 = (int)fVar29 + (int)fVar13;
              }
              else {
                iVar3 = (int)SUB82(dVar30,0) + (int)SUB82(dVar14,0);
              }
            }
            else {
LAB_109f0208c:
              if ((uVar15 != 10) && (uVar15 != 0xc)) goto LAB_109f02310;
              iVar3 = (int)SUB81(dVar30,0) + (int)SUB81(dVar14,0);
            }
            if (iVar3 != 0) goto LAB_109f02188;
          }
          else {
            if (uVar15 == 0x90) {
              fVar31 = (float)(((uint)fVar29 & 0x7fff) << 0xd) * 5.192297e+33;
              if (65536.0 <= fVar31) {
                fVar31 = (float)((uint)fVar31 | 0x7f800000);
              }
              fVar29 = (float)((uint)fVar31 | ((uint)fVar29 >> 0xf) << 0x1f);
              fVar31 = (float)(((uint)fVar13 & 0x7fff) << 0xd) * 5.192297e+33;
              if (65536.0 <= fVar31) {
                fVar31 = (float)((uint)fVar31 | 0x7f800000);
              }
              fVar13 = (float)((uint)fVar31 | ((uint)fVar13 >> 0xf) << 0x1f);
            }
            else {
              if (uVar15 == 0xc0) {
                if (dVar30 == -dVar14) goto LAB_109f02144;
                goto LAB_109f02188;
              }
              if (uVar15 != 0xa0) goto LAB_109f02310;
            }
            if (fVar29 != -fVar13) goto LAB_109f02188;
          }
        }
LAB_109f02144:
        uVar23 = uVar23 + 1;
      } while (uVar23 != 0x10);
      bVar8 = true;
    }
    else {
LAB_109f02188:
      bVar8 = false;
    }
  }
  else {
    acStack_48[0x10] = '\0';
    acStack_48[0x11] = '\0';
    acStack_48[0x12] = '\0';
    acStack_48[0x13] = '\0';
    acStack_48[0x14] = '\0';
    acStack_48[0x15] = '\0';
    acStack_48[0x16] = '\0';
    acStack_48[0x17] = '\0';
    acStack_48[0x18] = '\0';
    acStack_48[0x19] = '\0';
    acStack_48[0x1a] = '\0';
    acStack_48[0x1b] = '\0';
    acStack_48[0x1c] = '\0';
    acStack_48[0x1d] = '\0';
    acStack_48[0x1e] = '\0';
    acStack_48[0x1f] = '\0';
    if ((*(int *)(lVar17 + 0x18) == 0) &&
       ((uVar15 = *(uint *)(lVar17 + 0x28), uVar15 == 0x145 || (uVar15 == 0xea)))) {
      uVar23 = 0;
      plVar22 = *(long **)(lVar17 + 0x68);
      bVar6 = (&UNK_110b78548)[(ulong)uVar15 * 0x68];
      while( true ) {
        bVar7 = bVar6;
        if (bVar6 == 0) {
          bVar7 = *(byte *)(lVar17 + 0x4c);
        }
        if (bVar7 <= uVar23) break;
        acStack_48[uVar23 + 0x10] = *(char *)(lVar17 + 0x70 + uVar23);
        uVar23 = uVar23 + 1;
      }
      bVar9 = true;
    }
    else {
      bVar6 = *(byte *)((long)plVar22 + 0x1c);
      if ((ulong)bVar6 != 0) {
        uVar23 = 0;
        do {
          acStack_48[uVar23 + 0x10] = (char)uVar23;
          uVar23 = uVar23 + 1;
        } while (bVar6 != uVar23);
      }
      bVar9 = false;
    }
    acStack_48[0] = '\0';
    acStack_48[1] = '\0';
    acStack_48[2] = '\0';
    acStack_48[3] = '\0';
    acStack_48[4] = '\0';
    acStack_48[5] = '\0';
    acStack_48[6] = '\0';
    acStack_48[7] = '\0';
    acStack_48[8] = '\0';
    acStack_48[9] = '\0';
    acStack_48[10] = '\0';
    acStack_48[0xb] = '\0';
    acStack_48[0xc] = '\0';
    acStack_48[0xd] = '\0';
    acStack_48[0xe] = '\0';
    acStack_48[0xf] = '\0';
    plVar26 = *(long **)(param_2 + ((param_4 & 0xffffffff) * 6 + 0xd) * 8);
    lVar17 = *plVar26;
    if ((lVar17 == 0 || *(int *)(lVar17 + 0x18) != 0) ||
       ((uVar15 = *(uint *)(lVar17 + 0x28), uVar15 != 0x145 && (uVar15 != 0xea)))) {
      bVar6 = *(byte *)((long)plVar26 + 0x1c);
      if ((ulong)bVar6 != 0) {
        uVar23 = 0;
        do {
          acStack_48[uVar23] = (char)uVar23;
          uVar23 = uVar23 + 1;
        } while (bVar6 != uVar23);
      }
    }
    else {
      uVar23 = 0;
      plVar26 = *(long **)(lVar17 + 0x68);
      bVar6 = (&UNK_110b78548)[(ulong)uVar15 * 0x68];
      while( true ) {
        bVar7 = bVar6;
        if (bVar6 == 0) {
          bVar7 = *(byte *)(lVar17 + 0x4c);
        }
        if (bVar7 <= uVar23) break;
        acStack_48[uVar23] = *(char *)(lVar17 + 0x70 + uVar23);
        uVar23 = uVar23 + 1;
      }
      bVar9 = (bool)(bVar9 ^ 1);
      pcVar11 = acStack_48;
    }
    bVar8 = false;
    if ((bVar9) && (plVar22 == plVar26)) {
      uVar23 = 0;
      do {
        bVar6 = (&UNK_110b78548)[(ulong)*(uint *)(param_1 + 0x28) * 0x68 + param_3];
        if ((&UNK_110b78548)[(ulong)*(uint *)(param_1 + 0x28) * 0x68 + param_3] == 0) {
          bVar6 = *(byte *)(param_1 + 0x4c);
        }
        bVar8 = bVar6 <= uVar23;
      } while ((!bVar8) &&
              (pbVar1 = (byte *)(lVar16 + 0x70 + uVar23),
              lVar17 = uVar23 + (param_4 & 0xffffffff) * 0x30 + 0x70, uVar23 = uVar23 + 1,
              acStack_48[(ulong)*pbVar1 + 0x10] == acStack_48[(byte)param_2[lVar17]]));
    }
  }
LAB_109f02310:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return bVar8;
  }
  ___stack_chk_fail();
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 != *(int *)(pcVar11 + 0x18)) {
    return false;
  }
  if (3 < iVar3) {
    if (iVar3 < 8) {
      if (iVar3 == 4) {
        if (*(uint *)(param_1 + 0x28) != *(uint *)(pcVar11 + 0x28)) {
          return false;
        }
        if (*(char *)(param_1 + 0x50) != pcVar11[0x50]) {
          return false;
        }
        lVar16 = (ulong)*(uint *)(param_1 + 0x28) * 0x68;
        if ((&UNK_110b6719c)[lVar16] == '\x01') {
          if (*(char *)(param_1 + 0x4c) != pcVar11[0x4c]) {
            return false;
          }
          if (*(char *)(param_1 + 0x4d) != pcVar11[0x4d]) {
            return false;
          }
        }
        uVar23 = (ulong)(byte)(&UNK_110b67190)[lVar16];
        if (uVar23 != 0) {
          plVar22 = (long *)(param_1 + 0x98);
          plVar26 = (long *)(pcVar11 + 0x98);
          do {
            if (*plVar22 != *plVar26) {
              return false;
            }
            uVar23 = uVar23 - 1;
            plVar22 = plVar22 + 4;
            plVar26 = plVar26 + 4;
          } while (uVar23 != 0);
        }
        uVar23 = (ulong)(byte)(&UNK_110b671a0)[lVar16];
        if (uVar23 == 0) {
          return true;
        }
        piVar18 = (int *)(param_1 + 0x54);
        piVar20 = (int *)(pcVar11 + 0x54);
        do {
          uVar23 = uVar23 - 1;
          bVar9 = *piVar18 == *piVar20;
          if (!bVar9) {
            return bVar9;
          }
          piVar18 = piVar18 + 1;
          piVar20 = piVar20 + 1;
        } while (uVar23 != 0);
        return bVar9;
      }
      bVar6 = *(byte *)(param_1 + 0x44);
      uVar23 = (ulong)bVar6;
      if (bVar6 != pcVar11[0x44]) {
        return false;
      }
      if (*(char *)(param_1 + 0x45) != pcVar11[0x45]) {
        return false;
      }
      if (*(char *)(param_1 + 0x45) != '\x01') {
        param_1 = param_1 + 0x48;
        _memcmp(param_1,pcVar11 + 0x48,uVar23 << 3);
        if ((int)param_1 == 0) {
          return true;
        }
        return false;
      }
      if (bVar6 == 0) {
        return true;
      }
      pcVar21 = (char *)(param_1 + 0x48);
      pcVar11 = pcVar11 + 0x48;
      do {
        if (*pcVar21 != *pcVar11) {
          return false;
        }
        uVar23 = uVar23 - 1;
        pcVar21 = pcVar21 + 8;
        pcVar11 = pcVar11 + 8;
      } while (uVar23 != 0);
      return true;
    }
    if (iVar3 != 8) {
      if (*(short *)(param_1 + 0x30) != *(short *)(pcVar11 + 0x30)) {
        return false;
      }
      param_1 = param_1 + 0x80;
      _memcmp(param_1,pcVar11 + 0x80);
      return (int)param_1 == 0;
    }
    if (*(long *)(param_1 + 0x10) != *(long *)(pcVar11 + 0x10)) {
      return false;
    }
    if (*(char *)(param_1 + 100) != pcVar11[100]) {
      return false;
    }
    if (*(char *)(param_1 + 0x65) != pcVar11[0x65]) {
      return false;
    }
    plVar22 = (long *)**(long **)(param_1 + 0x28);
    if (plVar22 == (long *)0x0) {
      return true;
    }
    plVar26 = *(long **)(param_1 + 0x28);
    do {
      if (**(long **)(pcVar11 + 0x28) != 0) {
        plVar24 = *(long **)(pcVar11 + 0x28);
        do {
          if (plVar26[2] == plVar24[2]) {
            if (plVar26[6] != plVar24[6]) {
              return false;
            }
            break;
          }
          plVar24 = (long *)*plVar24;
        } while (*plVar24 != 0);
      }
      plVar24 = (long *)*plVar22;
      plVar26 = plVar22;
      plVar22 = plVar24;
      if (plVar24 == (long *)0x0) {
        return true;
      }
    } while( true );
  }
  if (iVar3 == 0) {
    uVar15 = *(uint *)(param_1 + 0x28);
    if (uVar15 != *(uint *)(pcVar11 + 0x28)) {
      return false;
    }
    if (((*(ushort *)(pcVar11 + 0x2c) ^ *(ushort *)(param_1 + 0x2c)) & 6) != 0) {
      return false;
    }
    bVar6 = *(byte *)(param_1 + 0x4c);
    if ((uint)bVar6 != (uint)(byte)pcVar11[0x4c]) {
      return false;
    }
    if (*(char *)(param_1 + 0x4d) != pcVar11[0x4d]) {
      return false;
    }
    uVar19 = (uint)bVar6;
    if (((&UNK_110b78598)[(ulong)uVar15 * 0x68] & 1) == 0) {
      if ((ulong)(byte)(&UNK_110b78540)[(ulong)uVar15 * 0x68] == 0) {
        return true;
      }
      uVar23 = 0;
      pcVar21 = (char *)(param_1 + 0x70);
      pcVar25 = pcVar11 + 0x70;
      do {
        uVar2 = uVar19;
        if ((byte)(&UNK_110b78548)[(ulong)uVar15 * 0x68 + uVar23] != 0) {
          uVar2 = (uint)(byte)(&UNK_110b78548)[(ulong)uVar15 * 0x68 + uVar23];
        }
        uVar28 = (ulong)uVar2;
        pcVar10 = pcVar21;
        pcVar12 = pcVar25;
        while (uVar28 != 0) {
          cVar4 = *pcVar10;
          cVar5 = *pcVar12;
          uVar28 = uVar28 - 1;
          pcVar10 = pcVar10 + 1;
          pcVar12 = pcVar12 + 1;
          if (cVar4 != cVar5) {
            return false;
          }
        }
        bVar9 = *(long *)(param_1 + 0x68 + uVar23 * 0x30) ==
                *(long *)(pcVar11 + (uVar23 * 6 + 0xd) * 8);
        uVar23 = uVar23 + 1;
        pcVar25 = pcVar25 + 0x30;
        pcVar21 = pcVar21 + 0x30;
      } while (bVar9 && uVar23 != (byte)(&UNK_110b78540)[(ulong)uVar15 * 0x68]);
      return bVar9;
    }
    uVar2 = (uint)bVar6;
    if ((byte)(&UNK_110b78548)[(ulong)uVar15 * 0x68] != 0) {
      uVar2 = (uint)(byte)(&UNK_110b78548)[(ulong)uVar15 * 0x68];
    }
    uVar28 = (ulong)uVar2;
    pcVar21 = (char *)(param_1 + 0x70);
    pcVar25 = pcVar11 + 0x70;
    uVar23 = uVar28;
    do {
      if (uVar23 == 0) {
        if (*(long *)(param_1 + 0x68) == *(long *)(pcVar11 + 0x68)) {
          uVar2 = uVar19;
          if ((byte)(&UNK_110b78549)[(ulong)uVar15 * 0x68] != 0) {
            uVar2 = (uint)(byte)(&UNK_110b78549)[(ulong)uVar15 * 0x68];
          }
          uVar23 = (ulong)uVar2;
          pcVar21 = (char *)(param_1 + 0xa0);
          pcVar25 = pcVar11 + 0xa0;
          goto LAB_109f02860;
        }
        break;
      }
      cVar4 = *pcVar21;
      cVar5 = *pcVar25;
      uVar23 = uVar23 - 1;
      pcVar21 = pcVar21 + 1;
      pcVar25 = pcVar25 + 1;
    } while (cVar4 == cVar5);
    goto LAB_109f028c8;
  }
  if (iVar3 != 1) {
    if (*(int *)(param_1 + 0x30) != *(int *)(pcVar11 + 0x30)) {
      return false;
    }
    uVar15 = *(uint *)(param_1 + 0x60);
    uVar23 = (ulong)uVar15;
    if (uVar15 != *(uint *)(pcVar11 + 0x60)) {
      return false;
    }
    if (uVar15 != 0) {
      piVar18 = (int *)(*(long *)(pcVar11 + 0x58) + 0x20);
      piVar20 = (int *)(*(long *)(param_1 + 0x58) + 0x20);
      do {
        if (*piVar20 != *piVar18) {
          return false;
        }
        if (*(long *)(piVar20 + -2) != *(long *)(piVar18 + -2)) {
          return false;
        }
        piVar18 = piVar18 + 10;
        piVar20 = piVar20 + 10;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
    if (*(int *)(param_1 + 100) != *(int *)(pcVar11 + 100)) {
      return false;
    }
    if (*(int *)(param_1 + 0x28) != *(int *)(pcVar11 + 0x28)) {
      return false;
    }
    if (*(char *)(param_1 + 0x68) != pcVar11[0x68]) {
      return false;
    }
    if (*(char *)(param_1 + 0x69) != pcVar11[0x69]) {
      return false;
    }
    if (*(char *)(param_1 + 0x6a) != pcVar11[0x6a]) {
      return false;
    }
    if (((pcVar11[0x6c] ^ *(byte *)(param_1 + 0x6c)) & 3) != 0) {
      return false;
    }
    if (*(int *)(param_1 + 0x78) != *(int *)(pcVar11 + 0x78)) {
      return false;
    }
    if (*(int *)(param_1 + 0x7c) != *(int *)(pcVar11 + 0x7c)) {
      return false;
    }
    if (*(int *)(param_1 + 0x80) != *(int *)(pcVar11 + 0x80)) {
      return false;
    }
    lVar16 = *(long *)(param_1 + 0x6d);
    lVar17 = *(long *)(pcVar11 + 0x6d);
LAB_109f027e8:
    return lVar16 == lVar17;
  }
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar3 != *(int *)(pcVar11 + 0x28)) {
    return false;
  }
  if (*(int *)(param_1 + 0x2c) != *(int *)(pcVar11 + 0x2c)) {
    return false;
  }
  if (*(long *)(param_1 + 0x30) != *(long *)(pcVar11 + 0x30)) {
    return false;
  }
  if (iVar3 == 0) {
    lVar16 = *(long *)(param_1 + 0x38);
    lVar17 = *(long *)(pcVar11 + 0x38);
    goto LAB_109f027e8;
  }
  if (*(long *)(param_1 + 0x50) != *(long *)(pcVar11 + 0x50)) {
    return false;
  }
  if (iVar3 < 3) {
    if (iVar3 != 1) {
      return true;
    }
  }
  else if (iVar3 != 3) {
    if (iVar3 == 5) {
      if (*(int *)(param_1 + 0x58) != *(int *)(pcVar11 + 0x58)) {
        return false;
      }
      if (*(int *)(param_1 + 0x5c) != *(int *)(pcVar11 + 0x5c)) {
        return false;
      }
      uVar15 = *(uint *)(param_1 + 0x60);
      uVar19 = *(uint *)(pcVar11 + 0x60);
    }
    else {
      uVar15 = *(uint *)(param_1 + 0x58);
      uVar19 = *(uint *)(pcVar11 + 0x58);
    }
    goto LAB_109f028a8;
  }
  if (*(long *)(param_1 + 0x70) != *(long *)(pcVar11 + 0x70)) {
    return false;
  }
  uVar15 = (uint)*(byte *)(param_1 + 0x78);
  uVar19 = (uint)(byte)pcVar11[0x78];
LAB_109f028a8:
  if (uVar15 != uVar19) {
    return false;
  }
  return true;
  while( true ) {
    cVar4 = *pcVar21;
    cVar5 = *pcVar25;
    uVar23 = uVar23 - 1;
    pcVar21 = pcVar21 + 1;
    pcVar25 = pcVar25 + 1;
    if (cVar4 != cVar5) break;
LAB_109f02860:
    if (uVar23 == 0) {
      if (*(long *)(param_1 + 0x98) == *(long *)(pcVar11 + 0x98)) goto LAB_109f0293c;
      break;
    }
  }
LAB_109f028c8:
  pcVar21 = (char *)(param_1 + 0x70);
  pcVar25 = pcVar11 + 0xa0;
  while (uVar28 != 0) {
    cVar4 = *pcVar21;
    cVar5 = *pcVar25;
    uVar28 = uVar28 - 1;
    pcVar21 = pcVar21 + 1;
    pcVar25 = pcVar25 + 1;
    if (cVar4 != cVar5) {
      return false;
    }
  }
  if (*(long *)(param_1 + 0x68) != *(long *)(pcVar11 + 0x98)) {
    return false;
  }
  uVar2 = uVar19;
  if ((byte)(&UNK_110b78549)[(ulong)uVar15 * 0x68] != 0) {
    uVar2 = (uint)(byte)(&UNK_110b78549)[(ulong)uVar15 * 0x68];
  }
  uVar23 = (ulong)uVar2;
  pcVar21 = pcVar11 + 0x70;
  pcVar25 = (char *)(param_1 + 0xa0);
  while (uVar23 != 0) {
    cVar4 = *pcVar25;
    cVar5 = *pcVar21;
    uVar23 = uVar23 - 1;
    pcVar21 = pcVar21 + 1;
    pcVar25 = pcVar25 + 1;
    if (cVar4 != cVar5) {
      return false;
    }
  }
  if (*(long *)(param_1 + 0x98) != *(long *)(pcVar11 + 0x68)) {
    return false;
  }
LAB_109f0293c:
  if ((ulong)(byte)(&UNK_110b78540)[(ulong)uVar15 * 0x68] < 3) {
    return true;
  }
  pcVar21 = pcVar11 + 0xd0;
  pcVar25 = (char *)(param_1 + 0xd0);
  uVar23 = 2;
  do {
    uVar2 = uVar19;
    if ((byte)(&UNK_110b78548)[(ulong)uVar15 * 0x68 + uVar23] != 0) {
      uVar2 = (uint)(byte)(&UNK_110b78548)[(ulong)uVar15 * 0x68 + uVar23];
    }
    uVar28 = (ulong)uVar2;
    pcVar10 = pcVar25;
    pcVar12 = pcVar21;
    while (uVar28 != 0) {
      cVar4 = *pcVar10;
      cVar5 = *pcVar12;
      uVar28 = uVar28 - 1;
      pcVar10 = pcVar10 + 1;
      pcVar12 = pcVar12 + 1;
      if (cVar4 != cVar5) {
        return false;
      }
    }
    bVar9 = *(long *)(param_1 + 0x68 + uVar23 * 0x30) == *(long *)(pcVar11 + (uVar23 * 6 + 0xd) * 8)
    ;
    uVar23 = uVar23 + 1;
    pcVar21 = pcVar21 + 0x30;
    pcVar25 = pcVar25 + 0x30;
  } while (bVar9 && uVar23 != (byte)(&UNK_110b78540)[(ulong)uVar15 * 0x68]);
  return bVar9;
}



/* Entry: 109f02340; end: 109f029cf;  */

bool FUN_109f02340(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  bool bVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  int *piVar15;
  char *pcVar16;
  long lVar17;
  char *pcVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 != *(int *)(param_2 + 0x18)) {
    return false;
  }
  if (3 < iVar2) {
    if (iVar2 < 8) {
      if (iVar2 == 4) {
        if (*(uint *)(param_1 + 0x28) != *(uint *)(param_2 + 0x28)) {
          return false;
        }
        if (*(char *)(param_1 + 0x50) != *(char *)(param_2 + 0x50)) {
          return false;
        }
        lVar12 = (ulong)*(uint *)(param_1 + 0x28) * 0x68;
        if ((&UNK_110b6719c)[lVar12] == '\x01') {
          if (*(char *)(param_1 + 0x4c) != *(char *)(param_2 + 0x4c)) {
            return false;
          }
          if (*(char *)(param_1 + 0x4d) != *(char *)(param_2 + 0x4d)) {
            return false;
          }
        }
        uVar14 = (ulong)(byte)(&UNK_110b67190)[lVar12];
        if (uVar14 != 0) {
          plVar19 = (long *)(param_1 + 0x98);
          plVar11 = (long *)(param_2 + 0x98);
          do {
            if (*plVar19 != *plVar11) {
              return false;
            }
            uVar14 = uVar14 - 1;
            plVar19 = plVar19 + 4;
            plVar11 = plVar11 + 4;
          } while (uVar14 != 0);
        }
        uVar14 = (ulong)(byte)(&UNK_110b671a0)[lVar12];
        if (uVar14 == 0) {
          return true;
        }
        piVar10 = (int *)(param_1 + 0x54);
        piVar15 = (int *)(param_2 + 0x54);
        do {
          uVar14 = uVar14 - 1;
          bVar6 = *piVar10 == *piVar15;
          if (!bVar6) {
            return bVar6;
          }
          piVar10 = piVar10 + 1;
          piVar15 = piVar15 + 1;
        } while (uVar14 != 0);
        return bVar6;
      }
      bVar5 = *(byte *)(param_1 + 0x44);
      uVar14 = (ulong)bVar5;
      if (bVar5 != *(byte *)(param_2 + 0x44)) {
        return false;
      }
      if (*(char *)(param_1 + 0x45) != *(char *)(param_2 + 0x45)) {
        return false;
      }
      if (*(char *)(param_1 + 0x45) != '\x01') {
        param_1 = param_1 + 0x48;
        _memcmp(param_1,param_2 + 0x48,uVar14 << 3);
        if ((int)param_1 == 0) {
          return true;
        }
        return false;
      }
      if (bVar5 == 0) {
        return true;
      }
      pcVar16 = (char *)(param_1 + 0x48);
      pcVar18 = (char *)(param_2 + 0x48);
      do {
        if (*pcVar16 != *pcVar18) {
          return false;
        }
        uVar14 = uVar14 - 1;
        pcVar16 = pcVar16 + 8;
        pcVar18 = pcVar18 + 8;
      } while (uVar14 != 0);
      return true;
    }
    if (iVar2 != 8) {
      if (*(short *)(param_1 + 0x30) != *(short *)(param_2 + 0x30)) {
        return false;
      }
      param_1 = param_1 + 0x80;
      _memcmp(param_1,param_2 + 0x80);
      return (int)param_1 == 0;
    }
    if (*(long *)(param_1 + 0x10) != *(long *)(param_2 + 0x10)) {
      return false;
    }
    if (*(char *)(param_1 + 100) != *(char *)(param_2 + 100)) {
      return false;
    }
    if (*(char *)(param_1 + 0x65) != *(char *)(param_2 + 0x65)) {
      return false;
    }
    plVar19 = (long *)**(long **)(param_1 + 0x28);
    if (plVar19 == (long *)0x0) {
      return true;
    }
    plVar11 = *(long **)(param_1 + 0x28);
    do {
      if (**(long **)(param_2 + 0x28) != 0) {
        plVar20 = *(long **)(param_2 + 0x28);
        do {
          if (plVar11[2] == plVar20[2]) {
            if (plVar11[6] != plVar20[6]) {
              return false;
            }
            break;
          }
          plVar20 = (long *)*plVar20;
        } while (*plVar20 != 0);
      }
      plVar20 = (long *)*plVar19;
      plVar11 = plVar19;
      plVar19 = plVar20;
      if (plVar20 == (long *)0x0) {
        return true;
      }
    } while( true );
  }
  if (iVar2 == 0) {
    uVar9 = *(uint *)(param_1 + 0x28);
    if (uVar9 != *(uint *)(param_2 + 0x28)) {
      return false;
    }
    if (((*(ushort *)(param_2 + 0x2c) ^ *(ushort *)(param_1 + 0x2c)) & 6) != 0) {
      return false;
    }
    bVar5 = *(byte *)(param_1 + 0x4c);
    if ((uint)bVar5 != (uint)*(byte *)(param_2 + 0x4c)) {
      return false;
    }
    if (*(char *)(param_1 + 0x4d) != *(char *)(param_2 + 0x4d)) {
      return false;
    }
    uVar13 = (uint)bVar5;
    if (((&UNK_110b78598)[(ulong)uVar9 * 0x68] & 1) == 0) {
      if ((ulong)(byte)(&UNK_110b78540)[(ulong)uVar9 * 0x68] == 0) {
        return true;
      }
      uVar14 = 0;
      pcVar16 = (char *)(param_1 + 0x70);
      pcVar18 = (char *)(param_2 + 0x70);
      do {
        uVar1 = uVar13;
        if ((byte)(&UNK_110b78548)[(ulong)uVar9 * 0x68 + uVar14] != 0) {
          uVar1 = (uint)(byte)(&UNK_110b78548)[(ulong)uVar9 * 0x68 + uVar14];
        }
        uVar21 = (ulong)uVar1;
        pcVar7 = pcVar16;
        pcVar8 = pcVar18;
        while (uVar21 != 0) {
          cVar3 = *pcVar7;
          cVar4 = *pcVar8;
          uVar21 = uVar21 - 1;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
          if (cVar3 != cVar4) {
            return false;
          }
        }
        bVar6 = *(long *)(param_1 + 0x68 + uVar14 * 0x30) ==
                *(long *)(param_2 + 0x68 + uVar14 * 0x30);
        uVar14 = uVar14 + 1;
        pcVar18 = pcVar18 + 0x30;
        pcVar16 = pcVar16 + 0x30;
      } while (bVar6 && uVar14 != (byte)(&UNK_110b78540)[(ulong)uVar9 * 0x68]);
      return bVar6;
    }
    uVar1 = (uint)bVar5;
    if ((byte)(&UNK_110b78548)[(ulong)uVar9 * 0x68] != 0) {
      uVar1 = (uint)(byte)(&UNK_110b78548)[(ulong)uVar9 * 0x68];
    }
    uVar21 = (ulong)uVar1;
    pcVar16 = (char *)(param_1 + 0x70);
    pcVar18 = (char *)(param_2 + 0x70);
    uVar14 = uVar21;
    do {
      if (uVar14 == 0) {
        if (*(long *)(param_1 + 0x68) == *(long *)(param_2 + 0x68)) {
          uVar1 = uVar13;
          if ((byte)(&UNK_110b78549)[(ulong)uVar9 * 0x68] != 0) {
            uVar1 = (uint)(byte)(&UNK_110b78549)[(ulong)uVar9 * 0x68];
          }
          uVar14 = (ulong)uVar1;
          pcVar16 = (char *)(param_1 + 0xa0);
          pcVar18 = (char *)(param_2 + 0xa0);
          goto LAB_109f02860;
        }
        break;
      }
      cVar3 = *pcVar16;
      cVar4 = *pcVar18;
      uVar14 = uVar14 - 1;
      pcVar16 = pcVar16 + 1;
      pcVar18 = pcVar18 + 1;
    } while (cVar3 == cVar4);
    goto LAB_109f028c8;
  }
  if (iVar2 != 1) {
    if (*(int *)(param_1 + 0x30) != *(int *)(param_2 + 0x30)) {
      return false;
    }
    uVar9 = *(uint *)(param_1 + 0x60);
    uVar14 = (ulong)uVar9;
    if (uVar9 != *(uint *)(param_2 + 0x60)) {
      return false;
    }
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(param_2 + 0x58) + 0x20);
      piVar15 = (int *)(*(long *)(param_1 + 0x58) + 0x20);
      do {
        if (*piVar15 != *piVar10) {
          return false;
        }
        if (*(long *)(piVar15 + -2) != *(long *)(piVar10 + -2)) {
          return false;
        }
        piVar10 = piVar10 + 10;
        piVar15 = piVar15 + 10;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (*(int *)(param_1 + 100) != *(int *)(param_2 + 100)) {
      return false;
    }
    if (*(int *)(param_1 + 0x28) != *(int *)(param_2 + 0x28)) {
      return false;
    }
    if (*(char *)(param_1 + 0x68) != *(char *)(param_2 + 0x68)) {
      return false;
    }
    if (*(char *)(param_1 + 0x69) != *(char *)(param_2 + 0x69)) {
      return false;
    }
    if (*(char *)(param_1 + 0x6a) != *(char *)(param_2 + 0x6a)) {
      return false;
    }
    if (((*(byte *)(param_2 + 0x6c) ^ *(byte *)(param_1 + 0x6c)) & 3) != 0) {
      return false;
    }
    if (*(int *)(param_1 + 0x78) != *(int *)(param_2 + 0x78)) {
      return false;
    }
    if (*(int *)(param_1 + 0x7c) != *(int *)(param_2 + 0x7c)) {
      return false;
    }
    if (*(int *)(param_1 + 0x80) != *(int *)(param_2 + 0x80)) {
      return false;
    }
    lVar12 = *(long *)(param_1 + 0x6d);
    lVar17 = *(long *)(param_2 + 0x6d);
LAB_109f027e8:
    return lVar12 == lVar17;
  }
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 != *(int *)(param_2 + 0x28)) {
    return false;
  }
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_2 + 0x2c)) {
    return false;
  }
  if (*(long *)(param_1 + 0x30) != *(long *)(param_2 + 0x30)) {
    return false;
  }
  if (iVar2 == 0) {
    lVar12 = *(long *)(param_1 + 0x38);
    lVar17 = *(long *)(param_2 + 0x38);
    goto LAB_109f027e8;
  }
  if (*(long *)(param_1 + 0x50) != *(long *)(param_2 + 0x50)) {
    return false;
  }
  if (iVar2 < 3) {
    if (iVar2 != 1) {
      return true;
    }
  }
  else if (iVar2 != 3) {
    if (iVar2 == 5) {
      if (*(int *)(param_1 + 0x58) != *(int *)(param_2 + 0x58)) {
        return false;
      }
      if (*(int *)(param_1 + 0x5c) != *(int *)(param_2 + 0x5c)) {
        return false;
      }
      uVar9 = *(uint *)(param_1 + 0x60);
      uVar13 = *(uint *)(param_2 + 0x60);
    }
    else {
      uVar9 = *(uint *)(param_1 + 0x58);
      uVar13 = *(uint *)(param_2 + 0x58);
    }
    goto LAB_109f028a8;
  }
  if (*(long *)(param_1 + 0x70) != *(long *)(param_2 + 0x70)) {
    return false;
  }
  uVar9 = (uint)*(byte *)(param_1 + 0x78);
  uVar13 = (uint)*(byte *)(param_2 + 0x78);
LAB_109f028a8:
  if (uVar9 != uVar13) {
    return false;
  }
  return true;
  while( true ) {
    cVar3 = *pcVar16;
    cVar4 = *pcVar18;
    uVar14 = uVar14 - 1;
    pcVar16 = pcVar16 + 1;
    pcVar18 = pcVar18 + 1;
    if (cVar3 != cVar4) break;
LAB_109f02860:
    if (uVar14 == 0) {
      if (*(long *)(param_1 + 0x98) == *(long *)(param_2 + 0x98)) goto LAB_109f0293c;
      break;
    }
  }
LAB_109f028c8:
  pcVar16 = (char *)(param_1 + 0x70);
  pcVar18 = (char *)(param_2 + 0xa0);
  while (uVar21 != 0) {
    cVar3 = *pcVar16;
    cVar4 = *pcVar18;
    uVar21 = uVar21 - 1;
    pcVar16 = pcVar16 + 1;
    pcVar18 = pcVar18 + 1;
    if (cVar3 != cVar4) {
      return false;
    }
  }
  if (*(long *)(param_1 + 0x68) != *(long *)(param_2 + 0x98)) {
    return false;
  }
  uVar1 = uVar13;
  if ((byte)(&UNK_110b78549)[(ulong)uVar9 * 0x68] != 0) {
    uVar1 = (uint)(byte)(&UNK_110b78549)[(ulong)uVar9 * 0x68];
  }
  uVar14 = (ulong)uVar1;
  pcVar16 = (char *)(param_2 + 0x70);
  pcVar18 = (char *)(param_1 + 0xa0);
  while (uVar14 != 0) {
    cVar3 = *pcVar18;
    cVar4 = *pcVar16;
    uVar14 = uVar14 - 1;
    pcVar16 = pcVar16 + 1;
    pcVar18 = pcVar18 + 1;
    if (cVar3 != cVar4) {
      return false;
    }
  }
  if (*(long *)(param_1 + 0x98) != *(long *)(param_2 + 0x68)) {
    return false;
  }
LAB_109f0293c:
  if ((ulong)(byte)(&UNK_110b78540)[(ulong)uVar9 * 0x68] < 3) {
    return true;
  }
  pcVar16 = (char *)(param_2 + 0xd0);
  pcVar18 = (char *)(param_1 + 0xd0);
  uVar14 = 2;
  do {
    uVar1 = uVar13;
    if ((byte)(&UNK_110b78548)[(ulong)uVar9 * 0x68 + uVar14] != 0) {
      uVar1 = (uint)(byte)(&UNK_110b78548)[(ulong)uVar9 * 0x68 + uVar14];
    }
    uVar21 = (ulong)uVar1;
    pcVar7 = pcVar18;
    pcVar8 = pcVar16;
    while (uVar21 != 0) {
      cVar3 = *pcVar7;
      cVar4 = *pcVar8;
      uVar21 = uVar21 - 1;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
      if (cVar3 != cVar4) {
        return false;
      }
    }
    bVar6 = *(long *)(param_1 + 0x68 + uVar14 * 0x30) == *(long *)(param_2 + 0x68 + uVar14 * 0x30);
    uVar14 = uVar14 + 1;
    pcVar16 = pcVar16 + 0x30;
    pcVar18 = pcVar18 + 0x30;
  } while (bVar6 && uVar14 != (byte)(&UNK_110b78540)[(ulong)uVar9 * 0x68]);
  return bVar6;
}



/* Entry: 109f029d0; end: 109f034df;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_109f029d0(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;
  int *piVar10;
  long *plVar11;
  byte *pbVar12;
  uint uVar14;
  int *piVar15;
  char *pcVar16;
  char *pcVar17;
  byte *pbVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  int *piVar24;
  ulong uVar25;
  ulong uVar26;
  uint uVar27;
  int iVar28;
  undefined1 auVar29 [12];
  undefined1 auVar30 [12];
  undefined1 auVar31 [12];
  undefined1 auVar32 [16];
  uint uVar37;
  uint uVar38;
  uint uVar39;
  undefined1 auVar33 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  uint uStack_70;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined4 uStack_5c;
  long lStack_58;
  byte *pbVar13;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar28 = *(int *)(param_3 + 0x18);
  uVar7 = param_3;
  if (iVar28 < 4) {
    if (iVar28 == 0) {
      lVar21 = 0;
      uVar14 = 0x165667b9;
      cVar1 = *(char *)(param_3 + 0x4c);
      uStack_70 = (uint)(CONCAT12(*(undefined1 *)(param_3 + 0x4d),
                                  CONCAT11(cVar1,*(byte *)(param_3 + 0x2c) >> 1)) & 0xffff03);
      uVar27 = *(uint *)(param_3 + 0x28);
      uStack_6c = CONCAT44(uStack_6c._4_4_,uVar27);
      do {
        uVar14 = uVar14 + *(int *)((long)&uStack_70 + lVar21) * -0x3d4d51c3;
        uVar14 = (uVar14 >> 0xf | uVar14 * 0x20000) * 0x27d4eb2f;
        lVar21 = lVar21 + 4;
      } while (lVar21 != 8);
      uVar14 = (uVar14 ^ uVar14 >> 0xf) * -0x7a143589;
      uVar14 = (uVar14 ^ uVar14 >> 0xd) * -0x3d4d51c3;
      uVar23 = (ulong)(uVar14 ^ uVar14 >> 0x10);
      if (((&UNK_110b78598)[(ulong)uVar27 * 0x68] & 1) == 0) {
        uVar26 = (ulong)(byte)(&UNK_110b78540)[(ulong)uVar27 * 0x68];
        uVar25 = uVar23;
        if (uVar26 != 0) {
          param_3 = param_3 + 0x50;
          pcVar16 = &UNK_110b78548 + (ulong)uVar27 * 0x68;
          do {
            cVar2 = cVar1;
            if (*pcVar16 != '\0') {
              cVar2 = *pcVar16;
            }
            param_4 = param_3;
            func_0x000109f03740(uVar25,param_3,cVar2);
            param_3 = param_3 + 0x30;
            uVar26 = uVar26 - 1;
            uVar7 = uVar25;
            pcVar16 = pcVar16 + 1;
          } while (uVar26 != 0);
        }
      }
      else {
        lVar21 = (ulong)uVar27 * 0x68;
        cVar2 = cVar1;
        if ((&UNK_110b78548)[lVar21] != '\0') {
          cVar2 = (&UNK_110b78548)[lVar21];
        }
        uVar7 = uVar23;
        func_0x000109f03740(uVar23,param_3 + 0x50,cVar2);
        cVar2 = cVar1;
        if ((&UNK_110b78549)[lVar21] != '\0') {
          cVar2 = (&UNK_110b78549)[lVar21];
        }
        param_4 = param_3 + 0x80;
        func_0x000109f03740(uVar23,param_4,cVar2);
        uVar25 = (ulong)(uint)((int)uVar23 * (int)uVar7);
        uVar7 = uVar23;
        if (2 < (ulong)(byte)(&UNK_110b78540)[lVar21]) {
          lVar21 = (ulong)(byte)(&UNK_110b78540)[lVar21] - 2;
          param_3 = param_3 + 0xb0;
          pcVar16 = &UNK_110b7854a + (ulong)uVar27 * 0x68;
          do {
            cVar2 = cVar1;
            if (*pcVar16 != '\0') {
              cVar2 = *pcVar16;
            }
            param_4 = param_3;
            func_0x000109f03740(uVar25,param_3,cVar2);
            param_3 = param_3 + 0x30;
            lVar21 = lVar21 + -1;
            uVar7 = uVar25;
            pcVar16 = pcVar16 + 1;
          } while (lVar21 != 0);
        }
      }
    }
    else {
      if (iVar28 == 1) {
        iVar28 = *(int *)(param_3 + 0x28);
        uVar27 = *(int *)(param_3 + 0x34) * -0x7a143589 + 0x61c8864f;
        uVar14 = uVar27 >> 0x13 | uVar27 * 0x2000;
        uVar37 = (uint)(*(int *)(param_3 + 0x30) * -0x7a143589) >> 0x13 |
                 *(int *)(param_3 + 0x30) * 0x794ee000;
        uVar27 = *(int *)(param_3 + 0x2c) * -0x7a143589 + 0x85ebca77;
        uVar38 = uVar27 >> 0x13 | uVar27 * 0x2000;
        uVar27 = iVar28 * -0x7a143589 + 0x24234428;
        uVar27 = uVar27 >> 0x13 | uVar27 * 0x2000;
        uVar27 = (uVar27 * -0x61c8864f >> 0x1f | uVar27 * 0x3c6ef362) +
                 (uVar38 * -0x61c8864f >> 0x19 | uVar38 * 0x1bbcd880) +
                 (uVar37 * -0x61c8864f >> 0x14 | uVar37 * 0x779b1000) +
                 (uVar14 * -0x61c8864f >> 0xe | uVar14 * -0x193c0000) + 0x10;
        uVar27 = (uVar27 ^ uVar27 >> 0xf) * -0x7a143589;
        uVar27 = (uVar27 ^ uVar27 >> 0xd) * -0x3d4d51c3;
        uVar27 = (uVar27 ^ uVar27 >> 0x10) + 0x165667b9;
        if (iVar28 == 0) {
          lVar21 = 0;
          do {
            uVar27 = uVar27 + *(int *)(param_3 + 0x38 + lVar21) * -0x3d4d51c3;
            uVar27 = (uVar27 >> 0xf | uVar27 * 0x20000) * 0x27d4eb2f;
            lVar21 = lVar21 + 4;
          } while (lVar21 != 8);
          uVar27 = uVar27 ^ uVar27 >> 0xf;
          goto LAB_109f03494;
        }
        lVar21 = 0;
        do {
          uVar27 = uVar27 + *(int *)(param_3 + 0x50 + lVar21) * -0x3d4d51c3;
          uVar27 = (uVar27 >> 0xf | uVar27 * 0x20000) * 0x27d4eb2f;
          lVar21 = lVar21 + 4;
        } while (lVar21 != 8);
        uVar27 = (uVar27 ^ uVar27 >> 0xf) * -0x7a143589;
        uVar27 = (uVar27 ^ uVar27 >> 0xd) * -0x3d4d51c3;
        uVar27 = uVar27 ^ uVar27 >> 0x10;
        if (iVar28 < 3) {
          uVar25 = (ulong)uVar27;
          if (iVar28 != 1) goto LAB_109f034a4;
LAB_109f0341c:
          lVar21 = 0;
          uVar27 = uVar27 + 0x165667b9;
          do {
            uVar27 = uVar27 + *(int *)(param_3 + 0x70 + lVar21) * -0x3d4d51c3;
            uVar27 = (uVar27 >> 0xf | uVar27 * 0x20000) * 0x27d4eb2f;
            lVar21 = lVar21 + 4;
          } while (lVar21 != 8);
          uVar27 = (uVar27 ^ uVar27 >> 0xf) * -0x7a143589;
          uVar27 = (uVar27 ^ uVar27 >> 0xd) * -0x3d4d51c3;
          uVar27 = (uVar27 ^ uVar27 >> 0x10) + (uint)*(byte *)(param_3 + 0x78) * 0x165667b1 +
                   0x165667b2;
          uVar27 = (uVar27 >> 0x15 | uVar27 * 0x800) * -0x61c8864f;
        }
        else {
          if (iVar28 == 3) goto LAB_109f0341c;
          if (iVar28 == 5) {
            uVar27 = uVar27 + 0x165667b5 + *(int *)(param_3 + 0x58) * -0x3d4d51c3;
            uVar27 = (uVar27 >> 0xf | uVar27 * 0x20000) * 0x27d4eb2f;
            uVar27 = (uVar27 ^ uVar27 >> 0xf) * -0x7a143589;
            uVar27 = (uVar27 ^ uVar27 >> 0xd) * -0x3d4d51c3;
            uVar27 = *(int *)(param_3 + 0x5c) * -0x3d4d51c3 + 0x165667b5 + (uVar27 ^ uVar27 >> 0x10)
            ;
            uVar27 = (uVar27 >> 0xf | uVar27 * 0x20000) * 0x27d4eb2f;
            uVar27 = (uVar27 ^ uVar27 >> 0xf) * -0x7a143589;
            uVar27 = (uVar27 ^ uVar27 >> 0xd) * -0x3d4d51c3;
            uVar27 = *(int *)(param_3 + 0x60) * -0x3d4d51c3 + 0x165667b5 + (uVar27 ^ uVar27 >> 0x10)
            ;
          }
          else {
            uVar27 = uVar27 + *(int *)(param_3 + 0x58) * -0x3d4d51c3 + 0x165667b5;
          }
          uVar27 = (uVar27 >> 0xf | uVar27 << 0x11) * 0x27d4eb2f;
        }
        uVar27 = uVar27 ^ uVar27 >> 0xf;
LAB_109f03494:
        uVar27 = uVar27 * -0x7a143589 ^ uVar27 * -0x7a143589 >> 0xd;
        goto LAB_109f034a0;
      }
      uVar14 = *(uint *)(param_3 + 0x60);
      bVar3 = *(byte *)(param_3 + 0x68) | *(char *)(param_3 + 0x69) << 1 |
              *(char *)(param_3 + 0x6a) << 2 | *(char *)(param_3 + 0x6b) << 3;
      uStack_70 = CONCAT13(bVar3 & 0xc0 | bVar3 & 0xf | (*(byte *)(param_3 + 0x6c) & 3) << 4 |
                           *(char *)(param_3 + 0x75) << 6 | *(char *)(param_3 + 0x76) << 7,
                           CONCAT12((byte)*(undefined4 *)(param_3 + 100) |
                                    (byte)(*(int *)(param_3 + 0x28) << 4),
                                    CONCAT11((char)uVar14,(char)*(undefined4 *)(param_3 + 0x30))));
      uStack_6c = *(undefined8 *)(param_3 + 0x6d);
      uStack_64 = *(undefined8 *)(param_3 + 0x78);
      uStack_5c = *(undefined4 *)(param_3 + 0x80);
      uVar27 = *(int *)(param_3 + 0x78) * -0x7a143589 + 0x61c8864f;
      uVar37 = uVar27 >> 0x13 | uVar27 * 0x2000;
      iVar28 = (int)((ulong)uStack_6c >> 0x20);
      uVar38 = (uint)(iVar28 * -0x7a143589) >> 0x13 | iVar28 * 0x794ee000;
      uVar27 = (int)uStack_6c * -0x7a143589 + 0x85ebca77;
      uVar39 = uVar27 >> 0x13 | uVar27 * 0x2000;
      uVar27 = uStack_70 * -0x7a143589 + 0x24234428;
      uVar27 = uVar27 >> 0x13 | uVar27 * 0x2000;
      uVar27 = (uVar38 * -0x61c8864f >> 0x14 | uVar38 * 0x779b1000) +
               (uVar39 * -0x61c8864f >> 0x19 | uVar39 * 0x1bbcd880) +
               (uVar37 * -0x61c8864f >> 0xe | uVar37 * -0x193c0000) +
               (uVar27 * -0x61c8864f >> 0x1f | uVar27 * 0x3c6ef362) + 0x18;
      lVar21 = 0x10;
      do {
        uVar27 = uVar27 + *(int *)((long)&uStack_70 + lVar21) * -0x3d4d51c3;
        uVar27 = (uVar27 >> 0xf | uVar27 * 0x20000) * 0x27d4eb2f;
        lVar21 = lVar21 + 4;
      } while (lVar21 != 0x18);
      uVar27 = (uVar27 ^ uVar27 >> 0xf) * -0x7a143589;
      uVar27 = (uVar27 ^ uVar27 >> 0xd) * -0x3d4d51c3;
      uVar25 = (ulong)(uVar27 ^ uVar27 >> 0x10);
      if (uVar14 != 0) {
        uVar23 = 0;
        lVar21 = *(long *)(param_3 + 0x58) + 0x18;
        do {
          lVar22 = 0;
          uVar27 = 0x165667b9;
          do {
            uVar27 = uVar27 + *(int *)(lVar21 + lVar22) * -0x3d4d51c3;
            uVar27 = (uVar27 >> 0xf | uVar27 * 0x20000) * 0x27d4eb2f;
            lVar22 = lVar22 + 4;
          } while (lVar22 != 8);
          uVar27 = (uVar27 ^ uVar27 >> 0xf) * -0x7a143589;
          uVar27 = (uVar27 ^ uVar27 >> 0xd) * -0x3d4d51c3;
          uVar25 = (ulong)((uVar27 ^ uVar27 >> 0x10) * (int)uVar25);
          uVar23 = uVar23 + 1;
          lVar21 = lVar21 + 0x28;
        } while (uVar23 != uVar14);
      }
    }
  }
  else if (iVar28 < 8) {
    if (iVar28 == 4) {
      uVar14 = *(uint *)(param_3 + 0x28);
      uVar27 = uVar14 * -0x3d4d51c3 + 0x165667b5;
      uVar27 = (uVar27 >> 0xf | uVar27 * 0x20000) * 0x27d4eb2f;
      uVar27 = (uVar27 ^ uVar27 >> 0xf) * -0x7a143589;
      uVar27 = (uVar27 ^ uVar27 >> 0xd) * -0x3d4d51c3;
      uVar27 = uVar27 ^ uVar27 >> 0x10;
      if ((&UNK_110b6719c)[(ulong)uVar14 * 0x68] == '\x01') {
        uVar27 = uVar27 + (uint)*(ushort *)(param_3 + 0x4c) * -0x3d4d51c3 + 0x165667b5;
        uVar27 = (uVar27 >> 0xf | uVar27 * 0x20000) * 0x27d4eb2f;
        uVar27 = (uVar27 ^ uVar27 >> 0xf) * -0x7a143589;
        uVar27 = (uVar27 ^ uVar27 >> 0xd) * -0x3d4d51c3;
        uVar27 = uVar27 ^ uVar27 >> 0x10;
      }
      piVar10 = (int *)(param_3 + 0x54);
      bVar3 = (&UNK_110b671a0)[(ulong)uVar14 * 0x68];
      uVar23 = (ulong)bVar3 * 4;
      if (bVar3 < 4) {
        iVar28 = uVar27 + 0x165667b1;
      }
      else {
        param_4 = (ulong)(uVar27 + 0x61c8864f);
        auVar40._8_4_ = uVar27;
        auVar40._0_8_ = param_2;
        auVar40._12_4_ = uVar27 + 0x61c8864f;
        piVar24 = (int *)((long)piVar10 + (uVar23 - 0xf));
        auVar32._0_4_ = uVar27 + 0x24234428;
        auVar32._4_4_ = uVar27 + 0x85ebca77;
        auVar32._8_8_ = auVar40._8_8_;
        piVar15 = piVar10;
        do {
          piVar10 = piVar15 + 4;
          uVar27 = auVar32._0_4_ + (int)*(undefined8 *)piVar15 * -0x7a143589;
          uVar37 = auVar32._4_4_ + (int)((ulong)*(undefined8 *)piVar15 >> 0x20) * -0x7a143589;
          uVar38 = auVar32._8_4_ + (int)*(undefined8 *)(piVar15 + 2) * -0x7a143589;
          uVar39 = auVar32._12_4_ + (int)((ulong)*(undefined8 *)(piVar15 + 2) >> 0x20) * -0x7a143589
          ;
          auVar32._0_4_ = (uVar27 * 0x2000 + (uVar27 >> 0x13)) * -0x61c8864f;
          auVar32._4_4_ = (uVar37 * 0x2000 + (uVar37 >> 0x13)) * -0x61c8864f;
          auVar32._8_4_ = (uVar38 * 0x2000 + (uVar38 >> 0x13)) * -0x61c8864f;
          auVar32._12_4_ = (uVar39 * 0x2000 + (uVar39 >> 0x13)) * -0x61c8864f;
          piVar15 = piVar10;
        } while (piVar10 < piVar24);
        auVar41 = NEON_ushl(auVar32,_UNK_10e00f860,4);
        auVar4._12_4_ = 0x12;
        auVar4._0_12_ = _UNK_10e00f870;
        auVar33 = NEON_ushl(auVar32,auVar4,4);
        iVar28 = CONCAT13(auVar33[3] | auVar41[3],
                          CONCAT12(auVar33[2] | auVar41[2],
                                   CONCAT11(auVar33[1] | auVar41[1],auVar33[0] | auVar41[0])));
        auVar29._0_8_ =
             CONCAT17(auVar33[7] | auVar41[7],
                      CONCAT16(auVar33[6] | auVar41[6],
                               CONCAT15(auVar33[5] | auVar41[5],
                                        CONCAT14(auVar33[4] | auVar41[4],iVar28))));
        auVar29[8] = auVar33[8] | auVar41[8];
        auVar29[9] = auVar33[9] | auVar41[9];
        auVar29[10] = auVar33[10] | auVar41[10];
        auVar29[0xb] = auVar33[0xb] | auVar41[0xb];
        auVar34[0xc] = auVar33[0xc] | auVar41[0xc];
        auVar34._0_12_ = auVar29;
        auVar34[0xd] = auVar33[0xd] | auVar41[0xd];
        auVar34[0xe] = auVar33[0xe] | auVar41[0xe];
        auVar34[0xf] = auVar33[0xf] | auVar41[0xf];
        iVar28 = iVar28 + (int)((ulong)auVar29._0_8_ >> 0x20) + auVar29._8_4_ + auVar34._12_4_;
        uVar7 = 0x9e3779b1;
      }
      uVar27 = iVar28 + (int)uVar23;
      if ((uVar23 & 0xc) != 0) {
        lVar21 = ((ulong)bVar3 & 3) * -4;
        do {
          uVar27 = uVar27 + *piVar10 * -0x3d4d51c3;
          uVar27 = (uVar27 >> 0xf | uVar27 * 0x20000) * 0x27d4eb2f;
          lVar21 = lVar21 + 4;
          piVar10 = piVar10 + 1;
        } while (lVar21 != 0);
      }
      uVar27 = (uVar27 ^ uVar27 >> 0xf) * -0x7a143589;
      uVar27 = (uVar27 ^ uVar27 >> 0xd) * -0x3d4d51c3;
      uVar25 = (ulong)(uVar27 ^ uVar27 >> 0x10);
      if ((ulong)(byte)(&UNK_110b67190)[(ulong)uVar14 * 0x68] != 0) {
        uVar23 = 0;
        lVar21 = param_3 + 0x98;
        do {
          lVar22 = 0;
          uVar27 = (int)uVar25 + 0x165667b9;
          do {
            uVar27 = uVar27 + *(int *)(lVar21 + lVar22) * -0x3d4d51c3;
            uVar27 = (uVar27 >> 0xf | uVar27 * 0x20000) * 0x27d4eb2f;
            lVar22 = lVar22 + 4;
          } while (lVar22 != 8);
          uVar27 = (uVar27 ^ uVar27 >> 0xf) * -0x7a143589;
          uVar27 = (uVar27 ^ uVar27 >> 0xd) * -0x3d4d51c3;
          uVar25 = (ulong)(uVar27 ^ uVar27 >> 0x10);
          uVar23 = uVar23 + 1;
          lVar21 = lVar21 + 0x20;
        } while (uVar23 != (byte)(&UNK_110b67190)[(ulong)uVar14 * 0x68]);
      }
    }
    else {
      bVar3 = *(byte *)(param_3 + 0x44);
      uVar23 = (ulong)bVar3;
      uVar27 = (uint)bVar3 * 0x165667b1 + 0x165667b2;
      uVar27 = (uVar27 >> 0x15 | uVar27 * 0x800) * -0x61c8864f;
      uVar27 = (uVar27 ^ uVar27 >> 0xf) * -0x7a143589;
      uVar27 = (uVar27 ^ uVar27 >> 0xd) * -0x3d4d51c3;
      uVar27 = uVar27 ^ uVar27 >> 0x10;
      uVar25 = (ulong)uVar27;
      if (*(char *)(param_3 + 0x45) != '\x01') {
        piVar10 = (int *)(param_3 + 0x48);
        if (bVar3 < 2) {
          iVar28 = uVar27 + 0x165667b1;
        }
        else {
          auVar43._8_4_ = uVar27;
          auVar43._0_8_ = param_2;
          auVar43._12_4_ = uVar27 + 0x61c8864f;
          piVar24 = (int *)((long)piVar10 + uVar23 * 8 + -0xf);
          auVar42._0_4_ = uVar27 + 0x24234428;
          auVar42._4_4_ = uVar27 + 0x85ebca77;
          auVar42._8_8_ = auVar43._8_8_;
          piVar15 = piVar10;
          do {
            piVar10 = piVar15 + 4;
            uVar27 = auVar42._0_4_ + (int)*(undefined8 *)piVar15 * -0x7a143589;
            uVar14 = auVar42._4_4_ + (int)((ulong)*(undefined8 *)piVar15 >> 0x20) * -0x7a143589;
            uVar37 = auVar42._8_4_ + (int)*(undefined8 *)(piVar15 + 2) * -0x7a143589;
            uVar38 = auVar42._12_4_ +
                     (int)((ulong)*(undefined8 *)(piVar15 + 2) >> 0x20) * -0x7a143589;
            auVar42._0_4_ = (uVar27 * 0x2000 + (uVar27 >> 0x13)) * -0x61c8864f;
            auVar42._4_4_ = (uVar14 * 0x2000 + (uVar14 >> 0x13)) * -0x61c8864f;
            auVar42._8_4_ = (uVar37 * 0x2000 + (uVar37 >> 0x13)) * -0x61c8864f;
            auVar42._12_4_ = (uVar38 * 0x2000 + (uVar38 >> 0x13)) * -0x61c8864f;
            piVar15 = piVar10;
          } while (piVar10 < piVar24);
          auVar41 = NEON_ushl(auVar42,_UNK_10e00f860,4);
          auVar5._12_4_ = 0x12;
          auVar5._0_12_ = _UNK_10e00f870;
          auVar33 = NEON_ushl(auVar42,auVar5,4);
          iVar28 = CONCAT13(auVar33[3] | auVar41[3],
                            CONCAT12(auVar33[2] | auVar41[2],
                                     CONCAT11(auVar33[1] | auVar41[1],auVar33[0] | auVar41[0])));
          auVar31._0_8_ =
               CONCAT17(auVar33[7] | auVar41[7],
                        CONCAT16(auVar33[6] | auVar41[6],
                                 CONCAT15(auVar33[5] | auVar41[5],
                                          CONCAT14(auVar33[4] | auVar41[4],iVar28))));
          auVar31[8] = auVar33[8] | auVar41[8];
          auVar31[9] = auVar33[9] | auVar41[9];
          auVar31[10] = auVar33[10] | auVar41[10];
          auVar31[0xb] = auVar33[0xb] | auVar41[0xb];
          auVar36[0xc] = auVar33[0xc] | auVar41[0xc];
          auVar36._0_12_ = auVar31;
          auVar36[0xd] = auVar33[0xd] | auVar41[0xd];
          auVar36[0xe] = auVar33[0xe] | auVar41[0xe];
          auVar36[0xf] = auVar33[0xf] | auVar41[0xf];
          iVar28 = iVar28 + (int)((ulong)auVar31._0_8_ >> 0x20) + auVar31._8_4_ + auVar36._12_4_;
        }
        uVar14 = (uint)(uVar23 * 8);
        uVar27 = iVar28 + uVar14;
        if ((uVar14 >> 3 & 1) != 0) {
          lVar21 = (uVar23 & 1) * -8;
          do {
            uVar27 = uVar27 + *piVar10 * -0x3d4d51c3;
            uVar27 = (uVar27 >> 0xf | uVar27 * 0x20000) * 0x27d4eb2f;
            lVar21 = lVar21 + 4;
            piVar10 = piVar10 + 1;
          } while (lVar21 != 0);
        }
        uVar27 = uVar27 ^ uVar27 >> 0xf;
        goto LAB_109f03494;
      }
      if (bVar3 != 0) {
        pbVar12 = (byte *)(param_3 + 0x48);
        do {
          uVar27 = (int)uVar25 + (uint)*pbVar12 * 0x165667b1 + 0x165667b2;
          uVar27 = (uVar27 >> 0x15 | uVar27 * 0x800) * -0x61c8864f;
          uVar27 = (uVar27 ^ uVar27 >> 0xf) * -0x7a143589;
          uVar27 = (uVar27 ^ uVar27 >> 0xd) * -0x3d4d51c3;
          uVar25 = (ulong)(uVar27 ^ uVar27 >> 0x10);
          uVar23 = uVar23 - 1;
          pbVar12 = pbVar12 + 8;
        } while (uVar23 != 0);
      }
    }
  }
  else {
    if (iVar28 == 8) {
      lVar21 = 0;
      uVar27 = 0x165667b9;
      do {
        uVar27 = uVar27 + *(int *)(param_3 + 0x10 + lVar21) * -0x3d4d51c3;
        uVar27 = (uVar27 >> 0xf | uVar27 * 0x20000) * 0x27d4eb2f;
        lVar21 = lVar21 + 4;
      } while (lVar21 != 8);
      uVar27 = (uVar27 ^ uVar27 >> 0xf) * -0x7a143589;
      uVar27 = (uVar27 ^ uVar27 >> 0xd) * -0x3d4d51c3;
      uVar27 = uVar27 ^ uVar27 >> 0x10;
      plVar19 = *(long **)(param_3 + 0x28);
      for (plVar11 = (long *)**(long **)(param_3 + 0x28); uVar25 = (ulong)uVar27,
          plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
        lVar21 = 0;
        uVar14 = 0x165667b9;
        do {
          uVar14 = uVar14 + *(int *)((long)plVar19 + lVar21 + 0x30) * -0x3d4d51c3;
          uVar14 = (uVar14 >> 0xf | uVar14 * 0x20000) * 0x27d4eb2f;
          lVar21 = lVar21 + 4;
        } while (lVar21 != 8);
        lVar21 = 0;
        uVar14 = (uVar14 ^ uVar14 >> 0xf) * -0x7a143589;
        uVar14 = (uVar14 ^ uVar14 >> 0xd) * -0x3d4d51c3;
        uVar14 = (uVar14 ^ uVar14 >> 0x10) + 0x165667b9;
        do {
          uVar14 = uVar14 + *(int *)((long)plVar19 + lVar21 + 0x10) * -0x3d4d51c3;
          uVar14 = (uVar14 >> 0xf | uVar14 * 0x20000) * 0x27d4eb2f;
          lVar21 = lVar21 + 4;
        } while (lVar21 != 8);
        uVar14 = (uVar14 ^ uVar14 >> 0xf) * -0x7a143589;
        uVar14 = (uVar14 ^ uVar14 >> 0xd) * -0x3d4d51c3;
        uVar27 = (uVar14 ^ uVar14 >> 0x10) * uVar27;
        plVar19 = plVar11;
      }
      goto LAB_109f034a4;
    }
    pbVar12 = (byte *)(param_3 + 0x80);
    uVar23 = (ulong)*(ushort *)(param_3 + 0x30);
    iVar28 = 0x165667b1;
    if (0xf < uVar23) {
      pbVar18 = pbVar12 + (uVar23 - 0xf);
      pbVar13 = pbVar12;
      auVar33 = _UNK_10e06d340;
      do {
        pbVar12 = pbVar13 + 0x10;
        uVar27 = auVar33._0_4_ + (int)*(undefined8 *)pbVar13 * -0x7a143589;
        uVar14 = auVar33._4_4_ + (int)((ulong)*(undefined8 *)pbVar13 >> 0x20) * -0x7a143589;
        uVar37 = auVar33._8_4_ + (int)*(undefined8 *)(pbVar13 + 8) * -0x7a143589;
        uVar38 = auVar33._12_4_ + (int)((ulong)*(undefined8 *)(pbVar13 + 8) >> 0x20) * -0x7a143589;
        auVar33._0_4_ = (uVar27 * 0x2000 + (uVar27 >> 0x13)) * -0x61c8864f;
        auVar33._4_4_ = (uVar14 * 0x2000 + (uVar14 >> 0x13)) * -0x61c8864f;
        auVar33._8_4_ = (uVar37 * 0x2000 + (uVar37 >> 0x13)) * -0x61c8864f;
        auVar33._12_4_ = (uVar38 * 0x2000 + (uVar38 >> 0x13)) * -0x61c8864f;
        pbVar13 = pbVar12;
      } while (pbVar12 < pbVar18);
      auVar42 = NEON_ushl(auVar33,_UNK_10e00f860,4);
      auVar41._12_4_ = 0x12;
      auVar41._0_12_ = _UNK_10e00f870;
      auVar33 = NEON_ushl(auVar33,auVar41,4);
      iVar28 = CONCAT13(auVar33[3] | auVar42[3],
                        CONCAT12(auVar33[2] | auVar42[2],
                                 CONCAT11(auVar33[1] | auVar42[1],auVar33[0] | auVar42[0])));
      auVar30._0_8_ =
           CONCAT17(auVar33[7] | auVar42[7],
                    CONCAT16(auVar33[6] | auVar42[6],
                             CONCAT15(auVar33[5] | auVar42[5],
                                      CONCAT14(auVar33[4] | auVar42[4],iVar28))));
      auVar30[8] = auVar33[8] | auVar42[8];
      auVar30[9] = auVar33[9] | auVar42[9];
      auVar30[10] = auVar33[10] | auVar42[10];
      auVar30[0xb] = auVar33[0xb] | auVar42[0xb];
      auVar35[0xc] = auVar33[0xc] | auVar42[0xc];
      auVar35._0_12_ = auVar30;
      auVar35[0xd] = auVar33[0xd] | auVar42[0xd];
      auVar35[0xe] = auVar33[0xe] | auVar42[0xe];
      auVar35[0xf] = auVar33[0xf] | auVar42[0xf];
      iVar28 = iVar28 + (int)((ulong)auVar30._0_8_ >> 0x20) + auVar30._8_4_ + auVar35._12_4_;
    }
    uVar27 = iVar28 + (uint)*(ushort *)(param_3 + 0x30);
    for (uVar23 = uVar23 & 0xf; 3 < uVar23; uVar23 = uVar23 - 4) {
      uVar27 = uVar27 + *(int *)pbVar12 * -0x3d4d51c3;
      uVar27 = (uVar27 >> 0xf | uVar27 * 0x20000) * 0x27d4eb2f;
      pbVar12 = pbVar12 + 4;
    }
    for (; uVar23 != 0; uVar23 = uVar23 - 1) {
      uVar27 = uVar27 + (uint)*pbVar12 * 0x165667b1;
      uVar27 = (uVar27 >> 0x15 | uVar27 * 0x800) * -0x61c8864f;
      pbVar12 = pbVar12 + 1;
    }
    uVar27 = (uVar27 ^ uVar27 >> 0xf) * -0x7a143589;
    uVar27 = uVar27 ^ uVar27 >> 0xd;
LAB_109f034a0:
    uVar25 = (ulong)(uVar27 * -0x3d4d51c3 ^ uVar27 * -0x3d4d51c3 >> 0x10);
  }
LAB_109f034a4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar25;
  }
  ___stack_chk_fail();
  iVar28 = *(int *)(uVar7 + 0x18);
  if (iVar28 != *(int *)(param_4 + 0x18)) {
    return 0;
  }
  if (iVar28 < 4) {
    if (iVar28 == 0) {
      uVar27 = *(uint *)(uVar7 + 0x28);
      if (uVar27 != *(uint *)(param_4 + 0x28)) {
        return 0;
      }
      if (((*(ushort *)(param_4 + 0x2c) ^ *(ushort *)(uVar7 + 0x2c)) & 6) != 0) {
        return 0;
      }
      bVar3 = *(byte *)(uVar7 + 0x4c);
      if ((uint)bVar3 != (uint)*(byte *)(param_4 + 0x4c)) {
        return 0;
      }
      if (*(char *)(uVar7 + 0x4d) != *(char *)(param_4 + 0x4d)) {
        return 0;
      }
      uVar14 = (uint)bVar3;
      if (((&UNK_110b78598)[(ulong)uVar27 * 0x68] & 1) == 0) {
        if ((ulong)(byte)(&UNK_110b78540)[(ulong)uVar27 * 0x68] == 0) {
          return 1;
        }
        uVar23 = 0;
        pcVar16 = (char *)(uVar7 + 0x70);
        pcVar17 = (char *)(param_4 + 0x70);
        do {
          uVar37 = uVar14;
          if ((byte)(&UNK_110b78548)[(ulong)uVar27 * 0x68 + uVar23] != 0) {
            uVar37 = (uint)(byte)(&UNK_110b78548)[(ulong)uVar27 * 0x68 + uVar23];
          }
          uVar25 = (ulong)uVar37;
          pcVar8 = pcVar16;
          pcVar9 = pcVar17;
          while (uVar25 != 0) {
            cVar1 = *pcVar8;
            cVar2 = *pcVar9;
            uVar25 = uVar25 - 1;
            pcVar8 = pcVar8 + 1;
            pcVar9 = pcVar9 + 1;
            if (cVar1 != cVar2) {
              return 0;
            }
          }
          bVar6 = *(long *)(uVar7 + 0x68 + uVar23 * 0x30) ==
                  *(long *)(param_4 + 0x68 + uVar23 * 0x30);
          uVar23 = uVar23 + 1;
          pcVar17 = pcVar17 + 0x30;
          pcVar16 = pcVar16 + 0x30;
        } while (bVar6 && uVar23 != (byte)(&UNK_110b78540)[(ulong)uVar27 * 0x68]);
        return (ulong)bVar6;
      }
      uVar37 = (uint)bVar3;
      if ((byte)(&UNK_110b78548)[(ulong)uVar27 * 0x68] != 0) {
        uVar37 = (uint)(byte)(&UNK_110b78548)[(ulong)uVar27 * 0x68];
      }
      uVar25 = (ulong)uVar37;
      pcVar16 = (char *)(uVar7 + 0x70);
      pcVar17 = (char *)(param_4 + 0x70);
      uVar23 = uVar25;
      do {
        if (uVar23 == 0) {
          if (*(long *)(uVar7 + 0x68) == *(long *)(param_4 + 0x68)) {
            uVar37 = uVar14;
            if ((byte)(&UNK_110b78549)[(ulong)uVar27 * 0x68] != 0) {
              uVar37 = (uint)(byte)(&UNK_110b78549)[(ulong)uVar27 * 0x68];
            }
            uVar23 = (ulong)uVar37;
            pcVar16 = (char *)(uVar7 + 0xa0);
            pcVar17 = (char *)(param_4 + 0xa0);
            goto LAB_109f02860;
          }
          break;
        }
        cVar1 = *pcVar16;
        cVar2 = *pcVar17;
        uVar23 = uVar23 - 1;
        pcVar16 = pcVar16 + 1;
        pcVar17 = pcVar17 + 1;
      } while (cVar1 == cVar2);
LAB_109f028c8:
      pcVar16 = (char *)(uVar7 + 0x70);
      pcVar17 = (char *)(param_4 + 0xa0);
      while (uVar25 != 0) {
        cVar1 = *pcVar16;
        cVar2 = *pcVar17;
        uVar25 = uVar25 - 1;
        pcVar16 = pcVar16 + 1;
        pcVar17 = pcVar17 + 1;
        if (cVar1 != cVar2) {
          return 0;
        }
      }
      if (*(long *)(uVar7 + 0x68) != *(long *)(param_4 + 0x98)) {
        return 0;
      }
      uVar37 = uVar14;
      if ((byte)(&UNK_110b78549)[(ulong)uVar27 * 0x68] != 0) {
        uVar37 = (uint)(byte)(&UNK_110b78549)[(ulong)uVar27 * 0x68];
      }
      uVar23 = (ulong)uVar37;
      pcVar16 = (char *)(param_4 + 0x70);
      pcVar17 = (char *)(uVar7 + 0xa0);
      while (uVar23 != 0) {
        cVar1 = *pcVar17;
        cVar2 = *pcVar16;
        uVar23 = uVar23 - 1;
        pcVar16 = pcVar16 + 1;
        pcVar17 = pcVar17 + 1;
        if (cVar1 != cVar2) {
          return 0;
        }
      }
      if (*(long *)(uVar7 + 0x98) != *(long *)(param_4 + 0x68)) {
        return 0;
      }
LAB_109f0293c:
      if ((ulong)(byte)(&UNK_110b78540)[(ulong)uVar27 * 0x68] < 3) {
        return 1;
      }
      pcVar16 = (char *)(param_4 + 0xd0);
      pcVar17 = (char *)(uVar7 + 0xd0);
      uVar23 = 2;
      do {
        uVar37 = uVar14;
        if ((byte)(&UNK_110b78548)[(ulong)uVar27 * 0x68 + uVar23] != 0) {
          uVar37 = (uint)(byte)(&UNK_110b78548)[(ulong)uVar27 * 0x68 + uVar23];
        }
        uVar25 = (ulong)uVar37;
        pcVar8 = pcVar17;
        pcVar9 = pcVar16;
        while (uVar25 != 0) {
          cVar1 = *pcVar8;
          cVar2 = *pcVar9;
          uVar25 = uVar25 - 1;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
          if (cVar1 != cVar2) {
            return 0;
          }
        }
        bVar6 = *(long *)(uVar7 + 0x68 + uVar23 * 0x30) == *(long *)(param_4 + 0x68 + uVar23 * 0x30)
        ;
        uVar23 = uVar23 + 1;
        pcVar16 = pcVar16 + 0x30;
        pcVar17 = pcVar17 + 0x30;
      } while (bVar6 && uVar23 != (byte)(&UNK_110b78540)[(ulong)uVar27 * 0x68]);
      return (ulong)bVar6;
    }
    if (iVar28 == 1) {
      iVar28 = *(int *)(uVar7 + 0x28);
      if (iVar28 != *(int *)(param_4 + 0x28)) {
        return 0;
      }
      if (*(int *)(uVar7 + 0x2c) != *(int *)(param_4 + 0x2c)) {
        return 0;
      }
      if (*(long *)(uVar7 + 0x30) != *(long *)(param_4 + 0x30)) {
        return 0;
      }
      if (iVar28 != 0) {
        if (*(long *)(uVar7 + 0x50) != *(long *)(param_4 + 0x50)) {
          return 0;
        }
        if (iVar28 < 3) {
          if (iVar28 != 1) {
            return 1;
          }
        }
        else if (iVar28 != 3) {
          if (iVar28 == 5) {
            if (*(int *)(uVar7 + 0x58) != *(int *)(param_4 + 0x58)) {
              return 0;
            }
            if (*(int *)(uVar7 + 0x5c) != *(int *)(param_4 + 0x5c)) {
              return 0;
            }
            uVar27 = *(uint *)(uVar7 + 0x60);
            uVar14 = *(uint *)(param_4 + 0x60);
          }
          else {
            uVar27 = *(uint *)(uVar7 + 0x58);
            uVar14 = *(uint *)(param_4 + 0x58);
          }
          goto LAB_109f028a8;
        }
        if (*(long *)(uVar7 + 0x70) != *(long *)(param_4 + 0x70)) {
          return 0;
        }
        uVar27 = (uint)*(byte *)(uVar7 + 0x78);
        uVar14 = (uint)*(byte *)(param_4 + 0x78);
LAB_109f028a8:
        if (uVar27 != uVar14) {
                    /* WARNING: Read-only address (ram,0x00010e00f860) is written */
                    /* WARNING: Read-only address (ram,0x00010e00f870) is written */
                    /* WARNING: Read-only address (ram,0x00010e06d340) is written */
                    /* WARNING: Read-only address (ram,0x00010e00f860) is written */
                    /* WARNING: Read-only address (ram,0x00010e00f870) is written */
                    /* WARNING: Read-only address (ram,0x00010e06d340) is written */
          return 0;
        }
        return 1;
      }
      lVar21 = *(long *)(uVar7 + 0x38);
      lVar22 = *(long *)(param_4 + 0x38);
    }
    else {
      if (*(int *)(uVar7 + 0x30) != *(int *)(param_4 + 0x30)) {
        return 0;
      }
      uVar27 = *(uint *)(uVar7 + 0x60);
      uVar23 = (ulong)uVar27;
      if (uVar27 != *(uint *)(param_4 + 0x60)) {
        return 0;
      }
      if (uVar27 != 0) {
        piVar10 = (int *)(*(long *)(param_4 + 0x58) + 0x20);
        piVar15 = (int *)(*(long *)(uVar7 + 0x58) + 0x20);
        do {
          if (*piVar15 != *piVar10) {
            return 0;
          }
          if (*(long *)(piVar15 + -2) != *(long *)(piVar10 + -2)) {
            return 0;
          }
          piVar10 = piVar10 + 10;
          piVar15 = piVar15 + 10;
          uVar23 = uVar23 - 1;
        } while (uVar23 != 0);
      }
      if (*(int *)(uVar7 + 100) != *(int *)(param_4 + 100)) {
        return 0;
      }
      if (*(int *)(uVar7 + 0x28) != *(int *)(param_4 + 0x28)) {
        return 0;
      }
      if (*(char *)(uVar7 + 0x68) != *(char *)(param_4 + 0x68)) {
        return 0;
      }
      if (*(char *)(uVar7 + 0x69) != *(char *)(param_4 + 0x69)) {
        return 0;
      }
      if (*(char *)(uVar7 + 0x6a) != *(char *)(param_4 + 0x6a)) {
        return 0;
      }
      if (((*(byte *)(param_4 + 0x6c) ^ *(byte *)(uVar7 + 0x6c)) & 3) != 0) {
        return 0;
      }
      if (*(int *)(uVar7 + 0x78) != *(int *)(param_4 + 0x78)) {
        return 0;
      }
      if (*(int *)(uVar7 + 0x7c) != *(int *)(param_4 + 0x7c)) {
        return 0;
      }
      if (*(int *)(uVar7 + 0x80) != *(int *)(param_4 + 0x80)) {
        return 0;
      }
      lVar21 = *(long *)(uVar7 + 0x6d);
      lVar22 = *(long *)(param_4 + 0x6d);
    }
    bVar6 = lVar21 == lVar22;
  }
  else {
    if (iVar28 < 8) {
      if (iVar28 != 4) {
        bVar3 = *(byte *)(uVar7 + 0x44);
        uVar23 = (ulong)bVar3;
        if (bVar3 != *(byte *)(param_4 + 0x44)) {
          return 0;
        }
        if (*(char *)(uVar7 + 0x45) != *(char *)(param_4 + 0x45)) {
          return 0;
        }
        if (*(char *)(uVar7 + 0x45) != '\x01') {
          lVar21 = uVar7 + 0x48;
          _memcmp(lVar21,param_4 + 0x48,uVar23 << 3);
          if ((int)lVar21 == 0) {
            return 1;
          }
          return 0;
        }
        if (bVar3 == 0) {
          return 1;
        }
        pcVar16 = (char *)(uVar7 + 0x48);
        pcVar17 = (char *)(param_4 + 0x48);
        do {
          if (*pcVar16 != *pcVar17) {
            return 0;
          }
          uVar23 = uVar23 - 1;
          pcVar16 = pcVar16 + 8;
          pcVar17 = pcVar17 + 8;
        } while (uVar23 != 0);
        return 1;
      }
      if (*(uint *)(uVar7 + 0x28) != *(uint *)(param_4 + 0x28)) {
        return 0;
      }
      if (*(char *)(uVar7 + 0x50) != *(char *)(param_4 + 0x50)) {
        return 0;
      }
      lVar21 = (ulong)*(uint *)(uVar7 + 0x28) * 0x68;
      if ((&UNK_110b6719c)[lVar21] == '\x01') {
        if (*(char *)(uVar7 + 0x4c) != *(char *)(param_4 + 0x4c)) {
          return 0;
        }
        if (*(char *)(uVar7 + 0x4d) != *(char *)(param_4 + 0x4d)) {
          return 0;
        }
      }
      uVar23 = (ulong)(byte)(&UNK_110b67190)[lVar21];
      if (uVar23 != 0) {
        plVar19 = (long *)(uVar7 + 0x98);
        plVar11 = (long *)(param_4 + 0x98);
        do {
          if (*plVar19 != *plVar11) {
            return 0;
          }
          uVar23 = uVar23 - 1;
          plVar19 = plVar19 + 4;
          plVar11 = plVar11 + 4;
        } while (uVar23 != 0);
      }
      uVar23 = (ulong)(byte)(&UNK_110b671a0)[lVar21];
      if (uVar23 == 0) {
        return 1;
      }
      piVar10 = (int *)(uVar7 + 0x54);
      piVar15 = (int *)(param_4 + 0x54);
      do {
        uVar23 = uVar23 - 1;
        uVar7 = (ulong)(*piVar10 == *piVar15);
        if (*piVar10 != *piVar15) {
          return uVar7;
        }
        piVar10 = piVar10 + 1;
        piVar15 = piVar15 + 1;
      } while (uVar23 != 0);
      return uVar7;
    }
    if (iVar28 == 8) {
      if (*(long *)(uVar7 + 0x10) != *(long *)(param_4 + 0x10)) {
        return 0;
      }
      if (*(char *)(uVar7 + 100) != *(char *)(param_4 + 100)) {
        return 0;
      }
      if (*(char *)(uVar7 + 0x65) != *(char *)(param_4 + 0x65)) {
        return 0;
      }
      plVar19 = (long *)**(long **)(uVar7 + 0x28);
      if (plVar19 == (long *)0x0) {
        return 1;
      }
      plVar11 = *(long **)(uVar7 + 0x28);
      do {
        if (**(long **)(param_4 + 0x28) != 0) {
          plVar20 = *(long **)(param_4 + 0x28);
          do {
            if (plVar11[2] == plVar20[2]) {
              if (plVar11[6] != plVar20[6]) {
                return 0;
              }
              break;
            }
            plVar20 = (long *)*plVar20;
          } while (*plVar20 != 0);
        }
        plVar20 = (long *)*plVar19;
        plVar11 = plVar19;
        plVar19 = plVar20;
        if (plVar20 == (long *)0x0) {
          return 1;
        }
      } while( true );
    }
    if (*(short *)(uVar7 + 0x30) != *(short *)(param_4 + 0x30)) {
      return 0;
    }
    lVar21 = uVar7 + 0x80;
    _memcmp(lVar21,param_4 + 0x80);
    bVar6 = (int)lVar21 == 0;
  }
  return (ulong)bVar6;
  while( true ) {
    cVar1 = *pcVar16;
    cVar2 = *pcVar17;
    uVar23 = uVar23 - 1;
    pcVar16 = pcVar16 + 1;
    pcVar17 = pcVar17 + 1;
    if (cVar1 != cVar2) break;
LAB_109f02860:
    if (uVar23 == 0) {
      if (*(long *)(uVar7 + 0x98) == *(long *)(param_4 + 0x98)) goto LAB_109f0293c;
      break;
    }
  }
  goto LAB_109f028c8;
}



/* Entry: 109f034e0; end: 109f034e3;  */

bool FUN_109f034e0(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  bool bVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  int *piVar15;
  char *pcVar16;
  long lVar17;
  char *pcVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 != *(int *)(param_2 + 0x18)) {
    return false;
  }
  if (3 < iVar2) {
    if (iVar2 < 8) {
      if (iVar2 == 4) {
        if (*(uint *)(param_1 + 0x28) != *(uint *)(param_2 + 0x28)) {
          return false;
        }
        if (*(char *)(param_1 + 0x50) != *(char *)(param_2 + 0x50)) {
          return false;
        }
        lVar12 = (ulong)*(uint *)(param_1 + 0x28) * 0x68;
        if ((&UNK_110b6719c)[lVar12] == '\x01') {
          if (*(char *)(param_1 + 0x4c) != *(char *)(param_2 + 0x4c)) {
            return false;
          }
          if (*(char *)(param_1 + 0x4d) != *(char *)(param_2 + 0x4d)) {
            return false;
          }
        }
        uVar14 = (ulong)(byte)(&UNK_110b67190)[lVar12];
        if (uVar14 != 0) {
          plVar19 = (long *)(param_1 + 0x98);
          plVar11 = (long *)(param_2 + 0x98);
          do {
            if (*plVar19 != *plVar11) {
              return false;
            }
            uVar14 = uVar14 - 1;
            plVar19 = plVar19 + 4;
            plVar11 = plVar11 + 4;
          } while (uVar14 != 0);
        }
        uVar14 = (ulong)(byte)(&UNK_110b671a0)[lVar12];
        if (uVar14 == 0) {
          return true;
        }
        piVar10 = (int *)(param_1 + 0x54);
        piVar15 = (int *)(param_2 + 0x54);
        do {
          uVar14 = uVar14 - 1;
          bVar6 = *piVar10 == *piVar15;
          if (!bVar6) {
            return bVar6;
          }
          piVar10 = piVar10 + 1;
          piVar15 = piVar15 + 1;
        } while (uVar14 != 0);
        return bVar6;
      }
      bVar5 = *(byte *)(param_1 + 0x44);
      uVar14 = (ulong)bVar5;
      if (bVar5 != *(byte *)(param_2 + 0x44)) {
        return false;
      }
      if (*(char *)(param_1 + 0x45) != *(char *)(param_2 + 0x45)) {
        return false;
      }
      if (*(char *)(param_1 + 0x45) != '\x01') {
        param_1 = param_1 + 0x48;
        _memcmp(param_1,param_2 + 0x48,uVar14 << 3);
        if ((int)param_1 == 0) {
          return true;
        }
        return false;
      }
      if (bVar5 == 0) {
        return true;
      }
      pcVar16 = (char *)(param_1 + 0x48);
      pcVar18 = (char *)(param_2 + 0x48);
      do {
        if (*pcVar16 != *pcVar18) {
          return false;
        }
        uVar14 = uVar14 - 1;
        pcVar16 = pcVar16 + 8;
        pcVar18 = pcVar18 + 8;
      } while (uVar14 != 0);
      return true;
    }
    if (iVar2 != 8) {
      if (*(short *)(param_1 + 0x30) != *(short *)(param_2 + 0x30)) {
        return false;
      }
      param_1 = param_1 + 0x80;
      _memcmp(param_1,param_2 + 0x80);
      return (int)param_1 == 0;
    }
    if (*(long *)(param_1 + 0x10) != *(long *)(param_2 + 0x10)) {
      return false;
    }
    if (*(char *)(param_1 + 100) != *(char *)(param_2 + 100)) {
      return false;
    }
    if (*(char *)(param_1 + 0x65) != *(char *)(param_2 + 0x65)) {
      return false;
    }
    plVar19 = (long *)**(long **)(param_1 + 0x28);
    if (plVar19 == (long *)0x0) {
      return true;
    }
    plVar11 = *(long **)(param_1 + 0x28);
    do {
      if (**(long **)(param_2 + 0x28) != 0) {
        plVar20 = *(long **)(param_2 + 0x28);
        do {
          if (plVar11[2] == plVar20[2]) {
            if (plVar11[6] != plVar20[6]) {
              return false;
            }
            break;
          }
          plVar20 = (long *)*plVar20;
        } while (*plVar20 != 0);
      }
      plVar20 = (long *)*plVar19;
      plVar11 = plVar19;
      plVar19 = plVar20;
      if (plVar20 == (long *)0x0) {
        return true;
      }
    } while( true );
  }
  if (iVar2 == 0) {
    uVar9 = *(uint *)(param_1 + 0x28);
    if (uVar9 != *(uint *)(param_2 + 0x28)) {
      return false;
    }
    if (((*(ushort *)(param_2 + 0x2c) ^ *(ushort *)(param_1 + 0x2c)) & 6) != 0) {
      return false;
    }
    bVar5 = *(byte *)(param_1 + 0x4c);
    if ((uint)bVar5 != (uint)*(byte *)(param_2 + 0x4c)) {
      return false;
    }
    if (*(char *)(param_1 + 0x4d) != *(char *)(param_2 + 0x4d)) {
      return false;
    }
    uVar13 = (uint)bVar5;
    if (((&UNK_110b78598)[(ulong)uVar9 * 0x68] & 1) == 0) {
      if ((ulong)(byte)(&UNK_110b78540)[(ulong)uVar9 * 0x68] == 0) {
        return true;
      }
      uVar14 = 0;
      pcVar16 = (char *)(param_1 + 0x70);
      pcVar18 = (char *)(param_2 + 0x70);
      do {
        uVar1 = uVar13;
        if ((byte)(&UNK_110b78548)[(ulong)uVar9 * 0x68 + uVar14] != 0) {
          uVar1 = (uint)(byte)(&UNK_110b78548)[(ulong)uVar9 * 0x68 + uVar14];
        }
        uVar21 = (ulong)uVar1;
        pcVar7 = pcVar16;
        pcVar8 = pcVar18;
        while (uVar21 != 0) {
          cVar3 = *pcVar7;
          cVar4 = *pcVar8;
          uVar21 = uVar21 - 1;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
          if (cVar3 != cVar4) {
            return false;
          }
        }
        bVar6 = *(long *)(param_1 + 0x68 + uVar14 * 0x30) ==
                *(long *)(param_2 + 0x68 + uVar14 * 0x30);
        uVar14 = uVar14 + 1;
        pcVar18 = pcVar18 + 0x30;
        pcVar16 = pcVar16 + 0x30;
      } while (bVar6 && uVar14 != (byte)(&UNK_110b78540)[(ulong)uVar9 * 0x68]);
      return bVar6;
    }
    uVar1 = (uint)bVar5;
    if ((byte)(&UNK_110b78548)[(ulong)uVar9 * 0x68] != 0) {
      uVar1 = (uint)(byte)(&UNK_110b78548)[(ulong)uVar9 * 0x68];
    }
    uVar21 = (ulong)uVar1;
    pcVar16 = (char *)(param_1 + 0x70);
    pcVar18 = (char *)(param_2 + 0x70);
    uVar14 = uVar21;
    do {
      if (uVar14 == 0) {
        if (*(long *)(param_1 + 0x68) == *(long *)(param_2 + 0x68)) {
          uVar1 = uVar13;
          if ((byte)(&UNK_110b78549)[(ulong)uVar9 * 0x68] != 0) {
            uVar1 = (uint)(byte)(&UNK_110b78549)[(ulong)uVar9 * 0x68];
          }
          uVar14 = (ulong)uVar1;
          pcVar16 = (char *)(param_1 + 0xa0);
          pcVar18 = (char *)(param_2 + 0xa0);
          goto LAB_109f02860;
        }
        break;
      }
      cVar3 = *pcVar16;
      cVar4 = *pcVar18;
      uVar14 = uVar14 - 1;
      pcVar16 = pcVar16 + 1;
      pcVar18 = pcVar18 + 1;
    } while (cVar3 == cVar4);
    goto LAB_109f028c8;
  }
  if (iVar2 != 1) {
    if (*(int *)(param_1 + 0x30) != *(int *)(param_2 + 0x30)) {
      return false;
    }
    uVar9 = *(uint *)(param_1 + 0x60);
    uVar14 = (ulong)uVar9;
    if (uVar9 != *(uint *)(param_2 + 0x60)) {
      return false;
    }
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(param_2 + 0x58) + 0x20);
      piVar15 = (int *)(*(long *)(param_1 + 0x58) + 0x20);
      do {
        if (*piVar15 != *piVar10) {
          return false;
        }
        if (*(long *)(piVar15 + -2) != *(long *)(piVar10 + -2)) {
          return false;
        }
        piVar10 = piVar10 + 10;
        piVar15 = piVar15 + 10;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (*(int *)(param_1 + 100) != *(int *)(param_2 + 100)) {
      return false;
    }
    if (*(int *)(param_1 + 0x28) != *(int *)(param_2 + 0x28)) {
      return false;
    }
    if (*(char *)(param_1 + 0x68) != *(char *)(param_2 + 0x68)) {
      return false;
    }
    if (*(char *)(param_1 + 0x69) != *(char *)(param_2 + 0x69)) {
      return false;
    }
    if (*(char *)(param_1 + 0x6a) != *(char *)(param_2 + 0x6a)) {
      return false;
    }
    if (((*(byte *)(param_2 + 0x6c) ^ *(byte *)(param_1 + 0x6c)) & 3) != 0) {
      return false;
    }
    if (*(int *)(param_1 + 0x78) != *(int *)(param_2 + 0x78)) {
      return false;
    }
    if (*(int *)(param_1 + 0x7c) != *(int *)(param_2 + 0x7c)) {
      return false;
    }
    if (*(int *)(param_1 + 0x80) != *(int *)(param_2 + 0x80)) {
      return false;
    }
    lVar12 = *(long *)(param_1 + 0x6d);
    lVar17 = *(long *)(param_2 + 0x6d);
LAB_109f027e8:
    return lVar12 == lVar17;
  }
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 != *(int *)(param_2 + 0x28)) {
    return false;
  }
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_2 + 0x2c)) {
    return false;
  }
  if (*(long *)(param_1 + 0x30) != *(long *)(param_2 + 0x30)) {
    return false;
  }
  if (iVar2 == 0) {
    lVar12 = *(long *)(param_1 + 0x38);
    lVar17 = *(long *)(param_2 + 0x38);
    goto LAB_109f027e8;
  }
  if (*(long *)(param_1 + 0x50) != *(long *)(param_2 + 0x50)) {
    return false;
  }
  if (iVar2 < 3) {
    if (iVar2 != 1) {
      return true;
    }
  }
  else if (iVar2 != 3) {
    if (iVar2 == 5) {
      if (*(int *)(param_1 + 0x58) != *(int *)(param_2 + 0x58)) {
        return false;
      }
      if (*(int *)(param_1 + 0x5c) != *(int *)(param_2 + 0x5c)) {
        return false;
      }
      uVar9 = *(uint *)(param_1 + 0x60);
      uVar13 = *(uint *)(param_2 + 0x60);
    }
    else {
      uVar9 = *(uint *)(param_1 + 0x58);
      uVar13 = *(uint *)(param_2 + 0x58);
    }
    goto LAB_109f028a8;
  }
  if (*(long *)(param_1 + 0x70) != *(long *)(param_2 + 0x70)) {
    return false;
  }
  uVar9 = (uint)*(byte *)(param_1 + 0x78);
  uVar13 = (uint)*(byte *)(param_2 + 0x78);
LAB_109f028a8:
  if (uVar9 != uVar13) {
    return false;
  }
  return true;
  while( true ) {
    cVar3 = *pcVar16;
    cVar4 = *pcVar18;
    uVar14 = uVar14 - 1;
    pcVar16 = pcVar16 + 1;
    pcVar18 = pcVar18 + 1;
    if (cVar3 != cVar4) break;
LAB_109f02860:
    if (uVar14 == 0) {
      if (*(long *)(param_1 + 0x98) == *(long *)(param_2 + 0x98)) goto LAB_109f0293c;
      break;
    }
  }
LAB_109f028c8:
  pcVar16 = (char *)(param_1 + 0x70);
  pcVar18 = (char *)(param_2 + 0xa0);
  while (uVar21 != 0) {
    cVar3 = *pcVar16;
    cVar4 = *pcVar18;
    uVar21 = uVar21 - 1;
    pcVar16 = pcVar16 + 1;
    pcVar18 = pcVar18 + 1;
    if (cVar3 != cVar4) {
      return false;
    }
  }
  if (*(long *)(param_1 + 0x68) != *(long *)(param_2 + 0x98)) {
    return false;
  }
  uVar1 = uVar13;
  if ((byte)(&UNK_110b78549)[(ulong)uVar9 * 0x68] != 0) {
    uVar1 = (uint)(byte)(&UNK_110b78549)[(ulong)uVar9 * 0x68];
  }
  uVar14 = (ulong)uVar1;
  pcVar16 = (char *)(param_2 + 0x70);
  pcVar18 = (char *)(param_1 + 0xa0);
  while (uVar14 != 0) {
    cVar3 = *pcVar18;
    cVar4 = *pcVar16;
    uVar14 = uVar14 - 1;
    pcVar16 = pcVar16 + 1;
    pcVar18 = pcVar18 + 1;
    if (cVar3 != cVar4) {
      return false;
    }
  }
  if (*(long *)(param_1 + 0x98) != *(long *)(param_2 + 0x68)) {
    return false;
  }
LAB_109f0293c:
  if ((ulong)(byte)(&UNK_110b78540)[(ulong)uVar9 * 0x68] < 3) {
    return true;
  }
  pcVar16 = (char *)(param_2 + 0xd0);
  pcVar18 = (char *)(param_1 + 0xd0);
  uVar14 = 2;
  do {
    uVar1 = uVar13;
    if ((byte)(&UNK_110b78548)[(ulong)uVar9 * 0x68 + uVar14] != 0) {
      uVar1 = (uint)(byte)(&UNK_110b78548)[(ulong)uVar9 * 0x68 + uVar14];
    }
    uVar21 = (ulong)uVar1;
    pcVar7 = pcVar18;
    pcVar8 = pcVar16;
    while (uVar21 != 0) {
      cVar3 = *pcVar7;
      cVar4 = *pcVar8;
      uVar21 = uVar21 - 1;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
      if (cVar3 != cVar4) {
        return false;
      }
    }
    bVar6 = *(long *)(param_1 + 0x68 + uVar14 * 0x30) == *(long *)(param_2 + 0x68 + uVar14 * 0x30);
    uVar14 = uVar14 + 1;
    pcVar16 = pcVar16 + 0x30;
    pcVar18 = pcVar18 + 0x30;
  } while (bVar6 && uVar14 != (byte)(&UNK_110b78540)[(ulong)uVar9 * 0x68]);
  return bVar6;
}



/* Entry: 109f034e4; end: 109f035ff;  */

long * FUN_109f034e4(long param_1,long *param_2,code *param_3)

{
  long *plVar1;
  ushort uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = param_2;
  FUN_109f03600();
  if ((int)plVar7 != 0) {
    plVar7 = param_2;
    (**(code **)(param_1 + 0x10))(param_2);
    FUN_109f66e48(param_1,plVar7,param_2,0);
    plVar7 = *(long **)(param_1 + 8);
    if (plVar7 != param_2) {
      if ((param_3 != (code *)0x0) &&
         (plVar3 = plVar7, (*param_3)(plVar7,param_2), (int)plVar3 == 0)) {
        *(long **)(param_1 + 8) = param_2;
        return (long *)0x0;
      }
      plVar3 = param_2;
      func_0x000109f03728();
      plVar4 = plVar7;
      func_0x000109f03728();
      if ((int)param_2[3] == 0) {
        uVar2 = *(ushort *)((long)param_2 + 0x2c) & 1 | *(ushort *)((long)plVar7 + 0x2c);
        *(ushort *)((long)plVar7 + 0x2c) = uVar2;
        *(ushort *)((long)plVar7 + 0x2c) = *(ushort *)((long)param_2 + 0x2c) & 0xff8 | uVar2;
      }
      if ((long *)plVar3[2] + -1 == plVar3) {
        return plVar7;
      }
      plVar5 = (long *)plVar3[2];
      do {
        lVar6 = *plVar5;
        plVar1 = (long *)plVar5[1];
        *(long **)(lVar6 + 8) = plVar1;
        *plVar1 = lVar6;
        plVar5[1] = (long)(plVar4 + 1);
        plVar5[2] = (long)plVar4;
        *plVar5 = 0;
        lVar6 = plVar4[1];
        *plVar5 = lVar6;
        *(long **)(lVar6 + 8) = plVar5;
        plVar4[1] = (long)plVar5;
        plVar5 = plVar1;
      } while (plVar1 + -1 != plVar3);
      return plVar7;
    }
  }
  return (long *)0x0;
}



/* Entry: 109f03600; end: 109f037eb;  */

uint FUN_109f03600(long param_1)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  if ((int)uVar2 < 5) {
    if ((int)uVar2 < 3) {
      if (1 < uVar2) {
        return 0;
      }
      return 1;
    }
    if (uVar2 == 3) {
      return 1;
    }
    uVar2 = *(uint *)(param_1 + 0x28);
    if (uVar2 - 0x59 < 6) {
      return 1;
    }
    lVar1 = param_1 + (ulong)(byte)(&UNK_110b671ba)[(ulong)uVar2 * 0x68] * 4;
    if (((ulong)(byte)(&UNK_110b671ba)[(ulong)uVar2 * 0x68] != 0) &&
       ((*(uint *)(lVar1 + 0x50) >> 2 & 1) != 0)) {
      return 0;
    }
    if ((int)uVar2 < 0xad) {
      if (((uVar2 == 3) || (uVar2 == 0x35)) || (uVar2 == 0x9d)) goto LAB_109f03700;
    }
    else if ((int)uVar2 < 0x1d1) {
      if (uVar2 == 0xad) {
LAB_109f03700:
        return *(uint *)(lVar1 + 0x50) >> 6 & 1;
      }
      if (uVar2 == 0x112) {
        if ((*(ushort *)(**(long **)(param_1 + 0x98) + 0x2c) & 0x487) != 0) {
          return 1;
        }
        goto LAB_109f03700;
      }
    }
    else if ((uVar2 == 0x1d1) || (uVar2 == 0x1e6)) goto LAB_109f03700;
    bVar3 = ((*(uint *)(&UNK_110b671ec + (ulong)uVar2 * 0x68) ^ 0xffffffff) & 3) == 0;
  }
  else {
    if ((int)uVar2 < 8) {
      if (uVar2 - 6 < 2) {
        return 0;
      }
      return 1;
    }
    if (uVar2 == 8) {
      return 1;
    }
    bVar3 = *(int *)(param_1 + 0x28) == 1;
  }
  return (uint)bVar3;
}



/* Entry: 109f037ec; end: 109f03d8b;  */

ulong FUN_109f037ec(long param_1,uint param_2,long param_3,long param_4)

{
  long *plVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  ulong *puVar10;
  long *plVar11;
  long lVar12;
  ulong *puVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  bool bVar18;
  long *plVar19;
  int iVar20;
  ulong uVar21;
  undefined8 *puVar23;
  ulong uVar24;
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  undefined8 uVar22;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (param_2 == 8) {
    plVar17 = *(long **)(param_1 + 0x178);
    for (plVar7 = (long *)**(long **)(param_1 + 0x178); plVar7 != (long *)0x0;
        plVar7 = (long *)*plVar7) {
      lVar12 = plVar17[6];
      if (lVar12 != 0) {
        do {
          lVar12 = *(long *)(lVar12 + 0x30);
          if (lVar12 != 0) {
            do {
              plVar7 = *(long **)(lVar12 + 0x20);
              for (plVar19 = (long *)**(long **)(lVar12 + 0x20); plVar19 != (long *)0x0;
                  plVar19 = (long *)*plVar19) {
                if (((*(int *)(plVar7 + 3) == 4) && (*(int *)(plVar7 + 5) == 0x112)) &&
                   (lVar8 = *(long *)plVar7[0x13], *(int *)(lVar8 + 0x2c) == 8)) {
                  for (; *(int *)(lVar8 + 0x28) != 0; lVar8 = **(long **)(lVar8 + 0x50)) {
                  }
                  uVar24 = *(ulong *)(lVar8 + 0x38);
                  uVar22 = *(undefined8 *)(uVar24 + 0x10);
                  iVar20 = (int)uVar22;
                  FUN_109f03d8c();
                  if (iVar20 != 0) {
                    lVar8 = 0;
                    uVar3 = *(ulong *)(uVar24 + 0x20);
                    do {
                      if (((uint)uVar3 >> 0x18 & 1) == 0) {
                        puVar23 = &uStack_90;
LAB_109f03a40:
                        uVar14 = uVar24;
                        FUN_109f03de8(uVar24,(long)*(char *)(param_1 + 0x61));
                        uVar3 = *(ulong *)(uVar24 + 0x20);
                        lVar15 = lVar8 + (uVar3 >> 0x24 & 3);
                        puVar23[lVar15] = puVar23[lVar15] | uVar14;
                        uVar22 = *(undefined8 *)(uVar24 + 0x10);
                      }
                      else if (3 < *(int *)(uVar24 + 0x3c) - 0x1aU) {
                        puVar23 = &uStack_b0;
                        goto LAB_109f03a40;
                      }
                      uVar9 = (uint)uVar22;
                      FUN_109f03d8c();
                      lVar8 = lVar8 + 1;
                    } while ((uint)lVar8 < uVar9);
                    plVar19 = (long *)*plVar7;
                  }
                }
                plVar7 = plVar19;
              }
              FUN_109ecc434();
            } while (lVar12 != 0);
            plVar7 = (long *)*plVar17;
          }
          plVar19 = (long *)*plVar7;
          plVar17 = plVar7;
          while( true ) {
            plVar7 = plVar19;
            if (plVar7 == (long *)0x0) goto LAB_109f03864;
            lVar12 = plVar17[6];
            if (lVar12 != 0) break;
            plVar19 = (long *)*plVar7;
            plVar17 = plVar7;
          }
        } while( true );
      }
      plVar17 = plVar7;
    }
  }
LAB_109f03864:
  plVar17 = *(long **)(param_1 + 8);
  plVar7 = (long *)*plVar17;
  if (plVar7 != (long *)0x0) {
    bVar18 = false;
    plVar19 = (long *)0x0;
    if (*plVar7 != 0) {
      plVar19 = plVar7;
    }
LAB_109f03880:
    plVar7 = plVar19;
    uVar24 = plVar17[4];
    if ((param_2 & (uint)uVar24) == 0) {
LAB_109f03940:
      if (plVar7 == (long *)0x0) goto LAB_109f03ab0;
    }
    else {
      lVar12 = param_3;
      if ((uVar24 & 0x1000000) != 0) {
        lVar12 = param_4;
      }
      if (*(uint *)((long)plVar17 + 0x3c) < 0x20) {
        if (((uVar24 >> 0x20 & 1) == 0) &&
           (*(uint *)((long)plVar17 + 0x3c) == 0x15 && *(char *)(param_1 + 0x61) == '\a'))
        goto LAB_109f038c0;
        goto LAB_109f03940;
      }
      if ((uVar24 >> 0x20 & 1) != 0) goto LAB_109f03940;
LAB_109f038c0:
      if ((*(byte *)((long)plVar17 + 0x2c) >> 4 & 1) != 0) goto LAB_109f03940;
      uVar3 = plVar17[2];
      FUN_109f03d8c();
      if ((int)uVar3 == 0) {
        uVar21 = 0;
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        uVar21 = 0;
        puVar23 = &uStack_90;
        if ((uVar24 & 0x1000000) != 0) {
          puVar23 = &uStack_b0;
        }
        uVar3 = uVar3 & 0xffffffff;
        uVar24 = uVar24 >> 0x21 & 0x18;
        puVar10 = (ulong *)(lVar12 + uVar24);
        puVar13 = (ulong *)((long)puVar23 + uVar24);
        do {
          uVar21 = *puVar10 | uVar21;
          uVar14 = *puVar13 | uVar14;
          uVar3 = uVar3 - 1;
          puVar10 = puVar10 + 1;
          puVar13 = puVar13 + 1;
        } while (uVar3 != 0);
      }
      plVar19 = plVar17;
      FUN_109f03de8(plVar17,(long)*(char *)(param_1 + 0x61));
      if (((ulong)plVar19 & (uVar14 | uVar21)) != 0) goto LAB_109f03940;
      *(undefined4 *)((long)plVar17 + 0x3c) = 0x70;
      lVar12 = *plVar17;
      plVar19 = (long *)plVar17[1];
      *(long **)(lVar12 + 8) = plVar19;
      *plVar19 = lVar12;
      *plVar17 = 0;
      plVar17[1] = 0;
      if (plVar7 == (long *)0x0) goto LAB_109f03ab4;
      bVar18 = true;
    }
    plVar11 = (long *)*plVar7;
    plVar19 = (long *)0x0;
    plVar17 = plVar7;
    if ((plVar11 != (long *)0x0) && (plVar19 = (long *)0x0, *plVar11 != 0)) {
      plVar19 = plVar11;
    }
    goto LAB_109f03880;
  }
LAB_109f03adc:
  FUN_109f2057c(param_1);
  uVar24 = 0;
LAB_109f03d50:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar24;
  }
  ___stack_chk_fail();
  uVar3 = uVar24;
  if (*(byte *)(uVar24 + 4) == 0x13) {
    do {
      uVar9 = (uint)*(byte *)(*(ulong *)(uVar3 + 0x30) + 4);
      uVar3 = *(ulong *)(uVar3 + 0x30);
    } while (uVar9 == 0x13);
    if (uVar9 - 0x11 < 2) {
      return 4;
    }
    do {
      uVar24 = *(ulong *)(uVar24 + 0x30);
    } while (*(char *)(uVar24 + 4) == '\x13');
  }
  else if (*(byte *)(uVar24 + 4) - 0x11 < 2) {
    return 4;
  }
  return (ulong)*(byte *)(uVar24 + 0xd);
LAB_109f03ab0:
  if (bVar18) {
LAB_109f03ab4:
    plVar17 = *(long **)(param_1 + 0x178);
    for (plVar7 = (long *)**(long **)(param_1 + 0x178); plVar7 != (long *)0x0;
        plVar7 = (long *)*plVar7) {
      lVar12 = plVar17[6];
      if (lVar12 != 0) {
        lVar8 = 0x38;
        if (param_2 != 4) {
          lVar8 = 0x18;
        }
        goto LAB_109f03b00;
      }
      plVar17 = plVar7;
    }
LAB_109f03d4c:
    uVar24 = 1;
    goto LAB_109f03d50;
  }
  goto LAB_109f03adc;
LAB_109f03b00:
  uStack_d8 = 0;
  plStack_d0 = (long *)0x0;
  puStack_c0 = *(undefined8 **)(*(long *)(lVar12 + 0x20) + 0x18);
  uStack_c8 = 0;
  lVar15 = *(long *)(lVar12 + 0x30);
  lStack_b8 = lVar12;
  if (lVar15 == 0) {
LAB_109f03d18:
    uVar9 = 0xfffffff7;
  }
  else {
    lVar4 = lVar15;
    FUN_109ecc434();
    bVar18 = false;
    do {
      lVar5 = lVar4;
      plVar19 = *(long **)(lVar15 + 0x20);
      plVar7 = (long *)*plVar19;
      if (plVar7 != (long *)0x0) {
        do {
          plVar11 = (long *)0x0;
          plVar16 = plVar19;
          if (*plVar7 != 0) {
            plVar11 = plVar7;
          }
          do {
            plVar19 = plVar11;
            if ((int)plVar16[3] == 4) {
              bVar2 = 0;
              iVar20 = (int)plVar16[5];
              if (iVar20 < 0x112) {
                lVar15 = 0x18;
                if ((iVar20 - 0xbbU < 4) || (lVar15 = lVar8, iVar20 == 0x54)) {
LAB_109f03b7c:
                  puVar23 = (undefined8 *)((long)plVar16 + lVar15 + 0x80);
                  puVar6 = puVar23;
                  while( true ) {
                    lVar15 = *(long *)*puVar6;
                    if (*(int *)(lVar15 + 0x28) == 0) break;
                    if (*(int *)(lVar15 + 0x28) == 5) goto LAB_109f03cb8;
                    if (*(int *)(lVar15 + 0x18) != 1) {
                      lVar15 = 0;
                    }
                    puVar6 = (undefined8 *)(lVar15 + 0x50);
                  }
                  lVar15 = *(long *)(lVar15 + 0x38);
                  bVar2 = 0;
                  if (lVar15 != 0) {
                    if (((*(uint *)(lVar15 + 0x20) & 0x1fffff) == param_2) &&
                       (*(int *)(lVar15 + 0x3c) == 0x70)) {
                      if ((iVar20 != 0x54) && (iVar20 != 0x26f)) {
                        uStack_d8 = 2;
                        puVar6 = (undefined8 *)*puStack_c0;
                        plStack_d0 = plVar16;
                        FUN_109f6600c(puVar6,0x48,8);
                        *(undefined4 *)(puVar6 + 3) = 7;
                        puVar6[1] = 0;
                        puVar6[2] = 0;
                        *puVar6 = 0;
                        FUN_109ecb048();
                        FUN_109ece5ec(&uStack_d8,puVar6);
                        if ((long *)plVar16[8] + -1 != plVar16 + 6) {
                          plVar7 = puVar6 + 6;
                          plVar11 = (long *)plVar16[8];
                          do {
                            lVar15 = *plVar11;
                            plVar1 = (long *)plVar11[1];
                            *(long **)(lVar15 + 8) = plVar1;
                            *plVar1 = lVar15;
                            plVar11[1] = (long)plVar7;
                            plVar11[2] = (long)(puVar6 + 5);
                            *plVar11 = 0;
                            lVar15 = *plVar7;
                            *plVar11 = lVar15;
                            *(long **)(lVar15 + 8) = plVar11;
                            *plVar7 = (long)plVar11;
                            plVar11 = plVar1;
                          } while (plVar1 + -1 != plVar16 + 6);
                        }
                      }
                      FUN_109ecb9c0(plVar16);
                      lVar15 = *(long *)*puVar23;
                      if (*(int *)(lVar15 + 0x18) != 1) {
                        lVar15 = 0;
                      }
                      func_0x000109ef9690(lVar15);
                      bVar2 = 1;
                    }
                    else {
LAB_109f03cb8:
                      bVar2 = 0;
                    }
                  }
                }
              }
              else {
                lVar15 = 0x18;
                if ((iVar20 == 0x112) || (iVar20 == 0x26f)) goto LAB_109f03b7c;
              }
              bVar18 = (bool)(bVar18 | bVar2);
            }
            if (plVar19 == (long *)0x0) goto LAB_109f03d00;
            plVar7 = (long *)*plVar19;
            plVar11 = (long *)0x0;
            plVar16 = plVar19;
          } while (plVar7 == (long *)0x0);
        } while( true );
      }
LAB_109f03d00:
      lVar4 = lVar5;
      FUN_109ecc434();
      lVar15 = lVar5;
    } while (lVar5 != 0);
    if (!bVar18) goto LAB_109f03d18;
    uVar9 = 3;
  }
  *(uint *)(lVar12 + 0x84) = *(uint *)(lVar12 + 0x84) & uVar9;
  plVar17 = (long *)*plVar17;
  plVar7 = (long *)*plVar17;
  while( true ) {
    if (plVar7 == (long *)0x0) goto LAB_109f03d4c;
    lVar12 = plVar17[6];
    if (lVar12 != 0) break;
    plVar17 = plVar7;
    plVar7 = (long *)*plVar7;
  }
  goto LAB_109f03b00;
}



/* Entry: 109f03d8c; end: 109f03de7;  */

undefined1 FUN_109f03d8c(long param_1)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = param_1;
  if (*(byte *)(param_1 + 4) == 0x13) {
    do {
      uVar2 = (uint)*(byte *)(*(long *)(lVar1 + 0x30) + 4);
      lVar1 = *(long *)(lVar1 + 0x30);
    } while (uVar2 == 0x13);
    if (uVar2 - 0x11 < 2) {
      return 4;
    }
    do {
      param_1 = *(long *)(param_1 + 0x30);
    } while (*(char *)(param_1 + 4) == '\x13');
  }
  else if (*(byte *)(param_1 + 4) - 0x11 < 2) {
    return 4;
  }
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 109f03de8; end: 109f03e6f;  */

long FUN_109f03de8(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x3c);
  if (-1 < (int)uVar1) {
    if ((*(ulong *)(param_1 + 0x20) & 0x1000000) != 0) {
      uVar1 = uVar1 - 0x40;
    }
    uVar3 = *(ulong *)(param_1 + 0x10);
    uVar2 = param_1;
    func_0x000109f0f5ac();
    if (((uVar2 & 1) != 0) || (*(char *)(param_1 + 0x2d) < '\0')) {
      func_0x000109eca118();
    }
    FUN_109ec9e40(uVar3,0,1);
    uVar2 = 0xffffffffffffffff;
    if ((int)uVar3 != 0x40) {
      uVar2 = ~(-1L << (uVar3 & 0x3f));
    }
    return uVar2 << ((ulong)uVar1 & 0x3f);
  }
  return 0;
}



/* Entry: 109f03e70; end: 109f0403f;  */

long * FUN_109f03e70(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
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
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  plVar2 = *(long **)(param_1 + 8);
  for (plVar9 = (long *)**(long **)(param_1 + 8); plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
    uVar11 = plVar2[4];
    if (((uint)uVar11 >> 3 & 1) != 0) {
      uVar6 = plVar2[2];
      iVar3 = (int)uVar6;
      FUN_109f03d8c();
      if (iVar3 != 0) {
        lVar8 = 0;
        do {
          if (((uint)uVar11 >> 0x18 & 1) == 0) {
            puVar7 = &uStack_90;
LAB_109f03efc:
            plVar9 = plVar2;
            FUN_109f03de8(plVar2,(long)*(char *)(param_1 + 0x61));
            uVar11 = plVar2[4];
            lVar1 = lVar8 + (uVar11 >> 0x24 & 3);
            puVar7[lVar1] = puVar7[lVar1] | (ulong)plVar9;
            uVar6 = plVar2[2];
          }
          else {
            puVar7 = &uStack_d0;
            if (3 < *(int *)((long)plVar2 + 0x3c) - 0x1aU) goto LAB_109f03efc;
          }
          uVar5 = (uint)uVar6;
          FUN_109f03d8c();
          lVar8 = lVar8 + 1;
        } while ((uint)lVar8 < uVar5);
        plVar9 = (long *)*plVar2;
      }
    }
    plVar2 = plVar9;
  }
  plVar2 = *(long **)(param_2 + 8);
  plVar9 = (long *)**(long **)(param_2 + 8);
  do {
    if (plVar9 == (long *)0x0) {
      FUN_109f037ec(param_1,8,&uStack_70,&uStack_b0);
      iVar3 = (int)&uStack_90;
      plVar2 = (long *)0x4;
      FUN_109f037ec();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
        return (long *)(ulong)((uint)param_1 | (uint)param_2);
      }
      ___stack_chk_fail();
      plVar9 = (long *)**(long **)(param_2 + 8);
      if (plVar9 != (long *)0x0) {
        lVar8 = plVar2[4];
        plVar10 = *(long **)(param_2 + 8);
        do {
          plVar4 = plVar9;
          if (((uint)lVar8 & 0x1fffff & *(uint *)(plVar10 + 4)) != 0) {
            if (iVar3 == 0) {
              lVar1 = plVar2[3];
              _strcmp(lVar1,plVar10[3]);
              if ((int)lVar1 == 0) {
                return plVar10;
              }
            }
            else if ((((uint)lVar8 >> 7 & 1) != 0) && ((int)plVar10[7] == (int)plVar2[7])) {
              return plVar10;
            }
          }
          plVar9 = (long *)*plVar4;
          plVar10 = plVar4;
        } while (plVar9 != (long *)0x0);
      }
      FUN_109ecf6d0(plVar2,param_2);
      FUN_109eca704(param_2,plVar2);
      return plVar2;
    }
    uVar11 = plVar2[4];
    if (((uint)uVar11 >> 2 & 1) != 0) {
      uVar6 = plVar2[2];
      iVar3 = (int)uVar6;
      FUN_109f03d8c();
      if (iVar3 != 0) {
        lVar8 = 0;
        do {
          if (((uint)uVar11 >> 0x18 & 1) == 0) {
            puVar7 = &uStack_70;
LAB_109f03f90:
            plVar9 = plVar2;
            FUN_109f03de8(plVar2,(long)*(char *)(param_2 + 0x61));
            uVar11 = plVar2[4];
            lVar1 = lVar8 + (uVar11 >> 0x24 & 3);
            puVar7[lVar1] = puVar7[lVar1] | (ulong)plVar9;
            uVar6 = plVar2[2];
          }
          else if (3 < *(int *)((long)plVar2 + 0x3c) - 0x1aU) {
            puVar7 = &uStack_b0;
            goto LAB_109f03f90;
          }
          uVar5 = (uint)uVar6;
          FUN_109f03d8c();
          lVar8 = lVar8 + 1;
        } while ((uint)lVar8 < uVar5);
        plVar9 = (long *)*plVar2;
      }
    }
    plVar2 = plVar9;
    plVar9 = (long *)*plVar9;
  } while( true );
}



/* Entry: 109f04040; end: 109f040f7;  */

long * FUN_109f04040(long param_1,long *param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  plVar2 = (long *)**(long **)(param_1 + 8);
  if (plVar2 != (long *)0x0) {
    lVar5 = param_2[4];
    plVar4 = *(long **)(param_1 + 8);
    do {
      plVar3 = plVar2;
      if (((uint)lVar5 & 0x1fffff & *(uint *)(plVar4 + 4)) != 0) {
        if (param_3 == 0) {
          lVar1 = param_2[3];
          _strcmp(lVar1,plVar4[3]);
          if ((int)lVar1 == 0) {
            return plVar4;
          }
        }
        else if ((((uint)lVar5 >> 7 & 1) != 0) && ((int)plVar4[7] == (int)param_2[7])) {
          return plVar4;
        }
      }
      plVar2 = (long *)*plVar3;
      plVar4 = plVar3;
    } while (plVar2 != (long *)0x0);
  }
  FUN_109ecf6d0(param_2,param_1);
  FUN_109eca704(param_1,param_2);
  return param_2;
}



/* Entry: 109f040f8; end: 109f044f7;  */

undefined8 * FUN_109f040f8(undefined8 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 uVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  
  if (*(int *)(param_3 + 0x28) == 0) {
    puVar9 = *(undefined8 **)param_1[3];
    FUN_109f6600c(puVar9,0xa0,8);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[0x11] = 0;
      puVar9[0x10] = 0;
      puVar9[0x13] = 0;
      puVar9[0x12] = 0;
      puVar9[0xd] = 0;
      puVar9[0xc] = 0;
      puVar9[0xf] = 0;
      puVar9[0xe] = 0;
      puVar9[9] = 0;
      puVar9[8] = 0;
      puVar9[0xb] = 0;
      puVar9[10] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      puVar9[7] = 0;
      puVar9[6] = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
    }
    *(undefined4 *)(puVar9 + 3) = 1;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 5) = 0;
    *(uint *)((long)puVar9 + 0x2c) = *(uint *)(param_2 + 0x20) & 0x1fffff;
    puVar9[6] = *(undefined8 *)(param_2 + 0x10);
    puVar9[7] = param_2;
    if (*(char *)(param_1[3] + 0x61) == '\x0e') {
      uVar11 = *(uint *)(param_1[3] + 0x160);
    }
    else {
      uVar11 = 0x20;
    }
    uVar10 = 1;
  }
  else {
    lVar12 = **(long **)(param_3 + 0x50);
    if (*(int *)(lVar12 + 0x18) != 1) {
      lVar12 = 0;
    }
    puVar7 = param_1;
    FUN_109f040f8(param_1,param_2,lVar12);
    if (*(int *)(param_3 + 0x28) != 4) {
      if (*(int *)(param_3 + 0x28) == 3) {
        uVar14 = *(ulong *)(**(long **)(param_3 + 0x70) + 0x48);
        bVar6 = *(byte *)((long)puVar7 + 0x9d);
        uVar11 = (bVar6 & 0xaaaaaaaa) >> 1 | (bVar6 & 0x55555555) << 1;
        uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
        uVar11 = (uint)LZCOUNT((uVar11 >> 4 | (uVar11 & 0xf0f0f0f) << 4) << 0x18);
        uVar3 = 0;
        if (uVar11 != 5) {
          uVar3 = uVar14 & 0xffffffff00000000;
        }
        uVar1 = 0;
        if (uVar11 != 4) {
          uVar1 = uVar14;
        }
        uVar2 = 0;
        if (uVar11 != 4) {
          uVar2 = uVar3;
        }
        uVar3 = (ulong)(uVar14 != 0);
        if (uVar11 != 0) {
          uVar3 = uVar14;
        }
        uVar4 = uVar14;
        if (uVar11 < 4) {
          uVar1 = 0;
          uVar2 = 0;
          uVar14 = 0;
          uVar4 = uVar3;
        }
        puVar8 = *(undefined8 **)param_1[3];
        FUN_109f6600c(puVar8,0x50,8);
        if (puVar8 != (undefined8 *)0x0) {
          puVar8[7] = 0;
          puVar8[6] = 0;
          puVar8[9] = 0;
          puVar8[8] = 0;
          puVar8[3] = 0;
          puVar8[2] = 0;
          puVar8[5] = 0;
          puVar8[4] = 0;
          puVar8[1] = 0;
          *puVar8 = 0;
        }
        *(undefined4 *)(puVar8 + 3) = 5;
        puVar8[1] = 0;
        puVar8[2] = 0;
        *puVar8 = 0;
        FUN_109ecb048(puVar8,puVar8 + 5,1,bVar6);
        puVar8[9] = uVar2 | uVar1 & 0xffff0000 | uVar14 & 0xff00 | uVar4 & 0xff;
        FUN_109ecb4f0(*param_1,param_1[1],puVar8);
        *param_1 = 3;
        param_1[1] = puVar8;
        puVar9 = (undefined8 *)param_1[3];
        func_0x000109ecaf70(puVar9,3);
        *(undefined4 *)((long)puVar9 + 0x2c) = *(undefined4 *)((long)puVar7 + 0x2c);
        uVar13 = puVar7[6];
        puVar9[8] = 0;
        puVar9[9] = 0;
        puVar9[6] = uVar13;
        puVar9[7] = 0;
        puVar9[0xc] = 0;
        puVar9[0xd] = 0;
        puVar9[10] = puVar7 + 0x10;
        puVar9[0xb] = 0;
        puVar9[0xe] = puVar8 + 5;
      }
      else {
        uVar14 = *(ulong *)(**(long **)(param_3 + 0x70) + 0x48);
        bVar6 = *(byte *)((long)puVar7 + 0x9d);
        uVar11 = (bVar6 & 0xaaaaaaaa) >> 1 | (bVar6 & 0x55555555) << 1;
        uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
        uVar11 = (uint)LZCOUNT((uVar11 >> 4 | (uVar11 & 0xf0f0f0f) << 4) << 0x18);
        uVar3 = 0;
        if (uVar11 != 5) {
          uVar3 = uVar14 & 0xffffffff00000000;
        }
        uVar1 = 0;
        if (uVar11 != 4) {
          uVar1 = uVar14;
        }
        uVar2 = 0;
        if (uVar11 != 4) {
          uVar2 = uVar3;
        }
        uVar3 = (ulong)(uVar14 != 0);
        if (uVar11 != 0) {
          uVar3 = uVar14;
        }
        uVar4 = uVar14;
        if (uVar11 < 4) {
          uVar1 = 0;
          uVar2 = 0;
          uVar14 = 0;
          uVar4 = uVar3;
        }
        puVar8 = *(undefined8 **)param_1[3];
        FUN_109f6600c(puVar8,0x50,8);
        if (puVar8 != (undefined8 *)0x0) {
          puVar8[7] = 0;
          puVar8[6] = 0;
          puVar8[9] = 0;
          puVar8[8] = 0;
          puVar8[3] = 0;
          puVar8[2] = 0;
          puVar8[5] = 0;
          puVar8[4] = 0;
          puVar8[1] = 0;
          *puVar8 = 0;
        }
        *(undefined4 *)(puVar8 + 3) = 5;
        puVar8[1] = 0;
        puVar8[2] = 0;
        *puVar8 = 0;
        FUN_109ecb048(puVar8,puVar8 + 5,1,bVar6);
        puVar8[9] = uVar2 | uVar1 & 0xffff0000 | uVar14 & 0xff00 | uVar4 & 0xff;
        FUN_109ecb4f0(*param_1,param_1[1],puVar8);
        *param_1 = 3;
        param_1[1] = puVar8;
        puVar9 = (undefined8 *)param_1[3];
        func_0x000109ecaf70(puVar9,1);
        *(undefined4 *)((long)puVar9 + 0x2c) = *(undefined4 *)((long)puVar7 + 0x2c);
        uVar13 = puVar7[6];
        func_0x000109eca118();
        puVar9[6] = uVar13;
        puVar9[7] = 0;
        puVar9[8] = 0;
        puVar9[9] = 0;
        puVar9[10] = puVar7 + 0x10;
        puVar9[0xb] = 0;
        puVar9[0xc] = 0;
        puVar9[0xd] = 0;
        puVar9[0xe] = puVar8 + 5;
      }
      FUN_109ecb048();
      FUN_109ecb4f0(*param_1,param_1[1],puVar9);
      *param_1 = 3;
      goto LAB_109f044dc;
    }
    uVar11 = *(uint *)(param_3 + 0x58);
    puVar9 = *(undefined8 **)param_1[3];
    FUN_109f6600c(puVar9,0xa0,8);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[0x11] = 0;
      puVar9[0x10] = 0;
      puVar9[0x13] = 0;
      puVar9[0x12] = 0;
      puVar9[0xd] = 0;
      puVar9[0xc] = 0;
      puVar9[0xf] = 0;
      puVar9[0xe] = 0;
      puVar9[9] = 0;
      puVar9[8] = 0;
      puVar9[0xb] = 0;
      puVar9[10] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      puVar9[7] = 0;
      puVar9[6] = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
    }
    *(undefined4 *)(puVar9 + 3) = 1;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    puVar9[10] = 0;
    uVar5 = *(undefined4 *)((long)puVar7 + 0x2c);
    *(undefined4 *)(puVar9 + 5) = 4;
    *(undefined4 *)((long)puVar9 + 0x2c) = uVar5;
    puVar9[6] = *(undefined8 *)(*(long *)(puVar7[6] + 0x30) + (ulong)uVar11 * 0x30);
    puVar9[7] = 0;
    puVar9[8] = 0;
    puVar9[9] = 0;
    puVar9[10] = puVar7 + 0x10;
    *(uint *)(puVar9 + 0xb) = uVar11;
    uVar10 = *(undefined1 *)((long)puVar7 + 0x9c);
    uVar11 = (uint)*(byte *)((long)puVar7 + 0x9d);
  }
  FUN_109ecb048(puVar9,puVar9 + 0x10,uVar10,uVar11);
  FUN_109ecb4f0(*param_1,param_1[1],puVar9);
  *param_1 = 3;
LAB_109f044dc:
  param_1[1] = puVar9;
  return puVar9;
}



/* Entry: 109f044f8; end: 109f045b3;  */

void FUN_109f044f8(long param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  
  plVar7 = *(long **)(param_1 + 8);
  plVar8 = (long *)*plVar7;
  if (plVar8 != (long *)0x0) {
    cVar2 = *(char *)(param_2 + 0x61);
    do {
      uVar9 = (uint)plVar7[4];
      if (((uVar9 >> 3 & 1) != 0) && (-1 < *(int *)((long)plVar7 + 0x3c))) {
        plVar5 = *(long **)(param_2 + 8);
        for (plVar6 = (long *)**(long **)(param_2 + 8); plVar6 != (long *)0x0;
            plVar6 = (long *)*plVar6) {
          uVar10 = plVar5[4];
          if ((((uint)uVar10 >> 2 & 1) != 0) &&
             (*(int *)((long)plVar5 + 0x3c) == *(int *)((long)plVar7 + 0x3c) &&
              ((uVar10 ^ plVar7[4]) & 0x3000000000) == 0)) {
            uVar3 = uVar9 >> 0x1c & 3;
            uVar4 = (uint)uVar10 >> 0x1c & 3;
            uVar9 = uVar3;
            if (uVar3 <= uVar4) {
              uVar9 = uVar4;
            }
            if (cVar2 != '\x04') {
              uVar9 = uVar4;
            }
            uVar1 = uVar3;
            if (uVar4 != 0) {
              uVar1 = uVar9;
            }
            if (uVar3 != 0) {
              uVar4 = uVar1;
            }
            plVar5[4] = uVar10 & 0xffffffffcfffffff | (ulong)(uVar4 << 0x1c);
            plVar7[4] = plVar7[4] & 0xffffffffcfffffffU | (ulong)(uVar4 << 0x1c);
            plVar8 = (long *)*plVar7;
            break;
          }
          plVar5 = plVar6;
        }
      }
      plVar7 = plVar8;
      plVar8 = (long *)*plVar7;
    } while (plVar8 != (long *)0x0);
  }
  return;
}



/* Entry: 109f045b4; end: 109f0509b;  */

uint FUN_109f045b4(long param_1,long param_2)

{
  long *plVar1;
  byte bVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  undefined8 *puVar25;
  uint uVar26;
  long lVar27;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  if ((*(char *)(param_2 + 0x61) != '\x04') || ((*(byte *)(param_1 + 0x61) & 0xfd) != 0)) {
    return 0;
  }
  plVar14 = (long *)**(long **)(param_1 + 0x178);
  if (plVar14 != (long *)0x0) {
    plVar10 = *(long **)(param_1 + 0x178);
    plVar13 = (long *)0x0;
    do {
      plVar1 = plVar10;
      if ((char)plVar10[7] == '\0') {
        plVar1 = plVar13;
      }
      plVar15 = (long *)*plVar14;
      plVar10 = plVar14;
      plVar13 = plVar1;
      plVar14 = plVar15;
    } while (plVar15 != (long *)0x0);
    if (plVar1 != (long *)0x0) {
      lVar19 = plVar1[6];
      goto LAB_109f04630;
    }
  }
  lVar19 = 0;
LAB_109f04630:
  lVar4 = 0;
  FUN_109f64c74(0,0x109f65648,FUN_109f65684);
  lVar27 = *(long *)(*(long *)(lVar19 + 0x48) + 0x38);
  lVar19 = *(long *)(lVar27 + 8);
  uVar26 = 0;
  do {
    if (lVar27 == 0 || lVar19 == 0) {
      if (lVar4 != 0) {
        FUN_109f65aa4(lVar4 + -0x30);
        FUN_109f65ae0(lVar4 + -0x30);
      }
      return uVar26;
    }
    if ((*(int *)(lVar27 + 0x18) == 4) && (*(int *)(lVar27 + 0x28) == 0x26f)) {
      puVar25 = (undefined8 *)(lVar27 + 0x98);
      lVar24 = *(long *)*puVar25;
      lVar19 = lVar24;
      if (*(int *)(lVar24 + 0x2c) == 8) {
        while (*(int *)(lVar19 + 0x28) != 0) {
          if (*(int *)(lVar19 + 0x28) == 5) {
            lVar19 = 0;
            goto LAB_109f046d0;
          }
          lVar19 = **(long **)(lVar19 + 0x50);
          if (*(int *)(lVar19 + 0x18) != 1) {
            lVar19 = 0;
          }
        }
        lVar19 = *(long *)(lVar19 + 0x38);
LAB_109f046d0:
        lVar21 = *(long *)(lVar19 + 0x10);
        bVar2 = *(byte *)(lVar21 + 4);
        uVar22 = (uint)bVar2;
        if (((bVar2 != 0x13) &&
            (((FUN_109ec9858(), uVar22 != 0x40 || (*(byte *)(lVar21 + 0xd) < 3)) &&
             ((2 < bVar2 - 2 || *(byte *)(lVar21 + 0xe) < 2) && 1 < bVar2 - 0x11)))) &&
           (((bVar2 & 0xf0) == 0 && *(char *)(lVar21 + 0xd) == '\x01' &&
            ((*(uint *)(lVar19 + 0x3c) & 0xffffffe0) == 0x20)))) {
          plVar14 = *(long **)(lVar27 + 0xb8);
          if (*(int *)(*plVar14 + 0x18) == 5) {
            plVar14 = (long *)**(long **)(param_2 + 0x178);
            if (plVar14 == (long *)0x0) {
LAB_109f04824:
              lVar19 = 0;
            }
            else {
              plVar10 = *(long **)(param_2 + 0x178);
              plVar13 = (long *)0x0;
              do {
                plVar1 = plVar10;
                if ((char)plVar10[7] == '\0') {
                  plVar1 = plVar13;
                }
                plVar15 = (long *)*plVar14;
                plVar10 = plVar14;
                plVar13 = plVar1;
                plVar14 = plVar15;
              } while (plVar15 != (long *)0x0);
              if (plVar1 == (long *)0x0) goto LAB_109f04824;
              lVar19 = plVar1[6];
            }
            lVar21 = *(long *)(*(long *)(lVar19 + 0x20) + 0x18);
            for (; *(int *)(lVar24 + 0x28) != 0; lVar24 = **(long **)(lVar24 + 0x50)) {
              if (*(int *)(lVar24 + 0x28) == 5) {
                lVar24 = 0;
                goto LAB_109f0485c;
              }
            }
            lVar24 = *(long *)(lVar24 + 0x38);
LAB_109f0485c:
            lVar19 = *(long *)(lVar19 + 0x30);
            if (lVar19 == 0) {
              uVar22 = 0;
            }
            else {
              uVar22 = 0;
              do {
                plVar14 = *(long **)(lVar19 + 0x20);
                for (plVar10 = (long *)**(long **)(lVar19 + 0x20); plVar10 != (long *)0x0;
                    plVar10 = (long *)*plVar10) {
                  if (((*(int *)(plVar14 + 3) == 4) && (*(int *)(plVar14 + 5) == 0x112)) &&
                     (lVar11 = *(long *)plVar14[0x13], *(int *)(lVar11 + 0x2c) == 4)) {
                    while (*(int *)(lVar11 + 0x28) != 0) {
                      if (*(int *)(lVar11 + 0x28) == 5) {
                        lVar11 = 0;
                        goto LAB_109f048d4;
                      }
                      lVar11 = **(long **)(lVar11 + 0x50);
                      if (*(int *)(lVar11 + 0x18) != 1) {
                        lVar11 = 0;
                      }
                    }
                    lVar11 = *(long *)(lVar11 + 0x38);
LAB_109f048d4:
                    if (((*(int *)(lVar11 + 0x3c) == *(int *)(lVar24 + 0x3c)) &&
                        (((*(ulong *)(lVar24 + 0x20) ^ *(ulong *)(lVar11 + 0x20)) & 0x3000000000) ==
                         0)) && (*(long *)(lVar11 + 0x10) == *(long *)(lVar24 + 0x10))) {
                      lVar20 = **(long **)(lVar27 + 0xb8);
                      bVar2 = *(byte *)(lVar27 + 0x50);
                      lVar11 = lVar21;
                      FUN_109ecafe4(lVar21,(ulong)bVar2,*(undefined1 *)((long)plVar14 + 0x4d));
                      if (lVar11 == 0) {
                        lVar11 = 0;
                      }
                      else {
                        _memcpy(lVar11 + 0x48,lVar20 + 0x48,(ulong)bVar2 << 3);
                        FUN_109ecb4f0(2,plVar14,lVar11);
                        lVar11 = lVar11 + 0x28;
                      }
                      if ((long *)plVar14[8] + -1 != plVar14 + 6) {
                        plVar10 = (long *)plVar14[8];
                        do {
                          lVar20 = *plVar10;
                          plVar13 = (long *)plVar10[1];
                          *(long **)(lVar20 + 8) = plVar13;
                          *plVar13 = lVar20;
                          plVar10[1] = lVar11 + 8;
                          plVar10[2] = lVar11;
                          *plVar10 = 0;
                          lVar20 = *(long *)(lVar11 + 8);
                          *plVar10 = lVar20;
                          *(long **)(lVar20 + 8) = plVar10;
                          *(long **)(lVar11 + 8) = plVar10;
                          plVar10 = plVar13;
                        } while (plVar13 + -1 != plVar14 + 6);
                      }
                      plVar10 = (long *)*plVar14;
                      uVar22 = 1;
                    }
                  }
                  plVar14 = plVar10;
                }
                FUN_109ecc434();
              } while (lVar19 != 0);
            }
          }
          else {
            uVar7 = 0;
            plVar10 = plVar14;
            func_0x000109ecd6b8();
            lVar21 = *plVar10;
            if (((*(int *)(lVar21 + 0x18) == 4) && (*(int *)(lVar21 + 0x28) == 0x112)) &&
               ((uVar23 = **(ulong **)(lVar21 + 0x98), *(int *)(uVar23 + 0x2c) == 2 &&
                (uVar16 = uVar23, FUN_109ef9700(), (uVar16 & 1) == 0)))) {
              lVar21 = *(long *)(param_2 + 0x28);
              if (*(char *)(lVar21 + 0xba) == '\x01') {
                plVar14 = (long *)**(long **)(param_2 + 0x178);
                if (plVar14 == (long *)0x0) {
LAB_109f04d78:
                  lVar19 = 0;
                }
                else {
                  plVar10 = *(long **)(param_2 + 0x178);
                  plVar13 = (long *)0x0;
                  do {
                    plVar1 = plVar10;
                    if ((char)plVar10[7] == '\0') {
                      plVar1 = plVar13;
                    }
                    plVar15 = (long *)*plVar14;
                    plVar10 = plVar14;
                    plVar13 = plVar1;
                    plVar14 = plVar15;
                  } while (plVar15 != (long *)0x0);
                  if (plVar1 == (long *)0x0) goto LAB_109f04d78;
                  lVar19 = plVar1[6];
                }
                uStack_88 = 0;
                lStack_80 = 0;
                lStack_70 = *(long *)(*(long *)(lVar19 + 0x20) + 0x18);
                uStack_78 = 0;
                for (; *(int *)(lVar24 + 0x28) != 0; lVar24 = **(long **)(lVar24 + 0x50)) {
                  if (*(int *)(lVar24 + 0x28) == 5) {
                    lVar24 = 0;
                    goto LAB_109f04db8;
                  }
                }
                lVar24 = *(long *)(lVar24 + 0x38);
LAB_109f04db8:
                uVar16 = uVar23;
                if (*(int *)(uVar23 + 0x18) != 1) {
                  uVar23 = 0;
                  uVar16 = uVar23;
                }
                while (*(int *)(uVar23 + 0x28) != 0) {
                  if (*(int *)(uVar23 + 0x28) == 5) {
                    uVar8 = 0;
                    goto LAB_109f04dfc;
                  }
                  uVar23 = **(ulong **)(uVar23 + 0x50);
                  if (*(int *)(uVar23 + 0x18) != 1) {
                    uVar23 = 0;
                  }
                }
                uVar8 = *(undefined8 *)(uVar23 + 0x38);
LAB_109f04dfc:
                lVar21 = param_2;
                lStack_68 = lVar19;
                FUN_109f04040(param_2,uVar8,0);
                lVar19 = *(long *)(lVar19 + 0x30);
                if (lVar19 == 0) {
                  uVar22 = 0;
                }
                else {
                  uVar22 = 0;
                  do {
                    plVar14 = *(long **)(lVar19 + 0x20);
                    for (plVar10 = (long *)**(long **)(lVar19 + 0x20); plVar10 != (long *)0x0;
                        plVar10 = (long *)*plVar10) {
                      if (((*(int *)(plVar14 + 3) == 4) && (*(int *)(plVar14 + 5) == 0x112)) &&
                         (lVar11 = *(long *)plVar14[0x13], *(int *)(lVar11 + 0x2c) == 4)) {
                        while (*(int *)(lVar11 + 0x28) != 0) {
                          if (*(int *)(lVar11 + 0x28) == 5) {
                            lVar11 = 0;
                            goto LAB_109f04e88;
                          }
                          lVar11 = **(long **)(lVar11 + 0x50);
                          if (*(int *)(lVar11 + 0x18) != 1) {
                            lVar11 = 0;
                          }
                        }
                        lVar11 = *(long *)(lVar11 + 0x38);
LAB_109f04e88:
                        if (((*(int *)(lVar11 + 0x3c) == *(int *)(lVar24 + 0x3c)) &&
                            (((*(ulong *)(lVar24 + 0x20) ^ *(ulong *)(lVar11 + 0x20)) & 0x3000000000
                             ) == 0)) && (*(long *)(lVar11 + 0x10) == *(long *)(lVar24 + 0x10))) {
                          uStack_88 = 2;
                          puVar25 = &uStack_88;
                          lStack_80 = (long)plVar14;
                          FUN_109f040f8(puVar25,lVar21,uVar16);
                          lVar20 = lStack_70;
                          uVar3 = *(undefined1 *)(puVar25[6] + 0xd);
                          lVar6 = lStack_70;
                          FUN_109ecb0a8(lStack_70,0x112);
                          *(undefined1 *)(lVar6 + 0x50) = uVar3;
                          FUN_109ecb048();
                          *(undefined8 *)(lVar6 + 0x80) = 0;
                          *(undefined8 *)(lVar6 + 0x88) = 0;
                          *(undefined8 *)(lVar6 + 0x90) = 0;
                          *(undefined8 **)(lVar6 + 0x98) = puVar25 + 0x10;
                          *(undefined4 *)
                           (lVar6 + (ulong)(byte)(&UNK_110b671ba)
                                                 [(ulong)*(uint *)(lVar6 + 0x28) * 0x68] * 4 + 0x50)
                               = 0;
                          FUN_109ecb4f0(uStack_88,lStack_80,lVar6);
                          uStack_88 = 3;
                          lVar11 = lVar6 + 0x30;
                          lStack_80 = lVar6;
                          if (1 < *(byte *)(lVar6 + 0x4c)) {
                            FUN_109ecaef8(lVar20,0x154);
                            lVar11 = lVar20 + 0x30;
                            FUN_109ecb048();
                            *(ushort *)(lVar20 + 0x2c) =
                                 *(ushort *)(lVar20 + 0x2c) & 0xf000 |
                                 (*(ushort *)(lVar20 + 0x2c) & 0xf006 | (ushort)(byte)uStack_78) & 7
                                 | (uStack_78._4_2_ & 0x1ff) << 3;
                            *(undefined8 *)(lVar20 + 0x50) = 0;
                            *(undefined8 *)(lVar20 + 0x58) = 0;
                            *(undefined8 *)(lVar20 + 0x60) = 0;
                            *(long *)(lVar20 + 0x68) = lVar6 + 0x30;
                            *(undefined1 *)(lVar20 + 0x70) = uVar7;
                            *(undefined8 *)(lVar20 + 0x71) = 0;
                            *(undefined8 *)(lVar20 + 0x78) = 0;
                            FUN_109ecb4f0(3,lVar6,lVar20);
                            lStack_80 = lVar20;
                          }
                          uStack_88 = 3;
                          if ((long *)plVar14[8] + -1 != plVar14 + 6) {
                            plVar10 = (long *)plVar14[8];
                            do {
                              lVar20 = *plVar10;
                              plVar13 = (long *)plVar10[1];
                              *(long **)(lVar20 + 8) = plVar13;
                              *plVar13 = lVar20;
                              plVar10[1] = lVar11 + 8;
                              plVar10[2] = lVar11;
                              *plVar10 = 0;
                              lVar20 = *(long *)(lVar11 + 8);
                              *plVar10 = lVar20;
                              *(long **)(lVar20 + 8) = plVar10;
                              *(long **)(lVar11 + 8) = plVar10;
                              plVar10 = plVar13;
                            } while (plVar13 + -1 != plVar14 + 6);
                          }
                          plVar10 = (long *)*plVar14;
                          uVar22 = 1;
                        }
                      }
                      plVar14 = plVar10;
                    }
                    FUN_109ecc434();
                  } while (lVar19 != 0);
                }
                uVar26 = uVar26 | uVar22;
                goto LAB_109f04ce0;
              }
              lVar24 = *(long *)(param_2 + 8);
              FUN_109f0509c(lVar24,lVar19);
              if (((lVar24 != 0) && ((*(byte *)(lVar21 + 0xa3) & 1) == 0)) &&
                 ((*(ulong *)(lVar24 + 0x20) >> 0x23 & 1) == 0)) {
                *(ulong *)(lVar24 + 0x20) =
                     *(ulong *)(lVar24 + 0x20) & 0xfffffff1ffffffff | 0x400000000;
                *(ulong *)(lVar19 + 0x20) =
                     *(ulong *)(lVar19 + 0x20) & 0xfffffff1ffffffff | 0x400000000;
              }
            }
            plVar10 = plVar14;
            (**(code **)(lVar4 + 8))(plVar14);
            lVar24 = lVar4;
            FUN_109f64fdc(lVar4,plVar10,plVar14);
            if (lVar24 == 0) {
              lVar24 = *(long *)(param_2 + 8);
              FUN_109f0509c(lVar24,lVar19);
              if (lVar24 != 0) {
                plVar10 = plVar14;
                (**(code **)(lVar4 + 8))(plVar14);
                func_0x000109f650c0(lVar4,plVar10,plVar14,lVar24);
              }
              goto LAB_109f04ce0;
            }
            plVar14 = (long *)**(long **)(param_2 + 0x178);
            if (plVar14 == (long *)0x0) {
LAB_109f049d4:
              lVar19 = 0;
            }
            else {
              plVar10 = *(long **)(param_2 + 0x178);
              plVar13 = (long *)0x0;
              do {
                plVar1 = plVar10;
                if ((char)plVar10[7] == '\0') {
                  plVar1 = plVar13;
                }
                plVar15 = (long *)*plVar14;
                plVar10 = plVar14;
                plVar13 = plVar1;
                plVar14 = plVar15;
              } while (plVar15 != (long *)0x0);
              if (plVar1 == (long *)0x0) goto LAB_109f049d4;
              lVar19 = plVar1[6];
            }
            lVar24 = *(long *)(lVar24 + 0x10);
            puVar12 = *(undefined8 **)(*(long *)(lVar19 + 0x20) + 0x18);
            while( true ) {
              lVar21 = *(long *)*puVar25;
              if (*(int *)(lVar21 + 0x28) == 0) break;
              if (*(int *)(lVar21 + 0x28) == 5) {
                lVar21 = 0;
                goto LAB_109f04a58;
              }
              if (*(int *)(lVar21 + 0x18) != 1) {
                lVar21 = 0;
              }
              puVar25 = (undefined8 *)(lVar21 + 0x50);
            }
            lVar21 = *(long *)(lVar21 + 0x38);
LAB_109f04a58:
            lVar19 = *(long *)(lVar19 + 0x30);
            uVar22 = 0;
            while (lVar19 != 0) {
              plVar14 = *(long **)(lVar19 + 0x20);
              for (plVar10 = (long *)**(long **)(lVar19 + 0x20); plVar10 != (long *)0x0;
                  plVar10 = (long *)*plVar10) {
                if (((*(int *)(plVar14 + 3) == 4) && (*(int *)(plVar14 + 5) == 0x112)) &&
                   (lVar11 = *(long *)plVar14[0x13], *(int *)(lVar11 + 0x2c) == 4)) {
                  while (*(int *)(lVar11 + 0x28) != 0) {
                    if (*(int *)(lVar11 + 0x28) == 5) {
                      lVar11 = 0;
                      goto LAB_109f04ad4;
                    }
                    lVar11 = **(long **)(lVar11 + 0x50);
                    if (*(int *)(lVar11 + 0x18) != 1) {
                      lVar11 = 0;
                    }
                  }
                  lVar11 = *(long *)(lVar11 + 0x38);
LAB_109f04ad4:
                  if (((*(int *)(lVar11 + 0x3c) == *(int *)(lVar21 + 0x3c)) &&
                      (uVar23 = *(ulong *)(lVar11 + 0x20),
                      ((*(ulong *)(lVar21 + 0x20) ^ uVar23) & 0x3000000000) == 0)) &&
                     ((*(long *)(lVar11 + 0x10) == *(long *)(lVar21 + 0x10) &&
                      (uVar16 = *(ulong *)(lVar24 + 0x20), ((uVar16 ^ uVar23) & 0xe00000000) == 0)))
                     ) {
                    iVar17 = 1;
                    if ((uVar23 & 0x400000) == 0) {
                      iVar17 = 2;
                    }
                    if ((uVar23 & 0x800000) != 0) {
                      iVar17 = 0;
                    }
                    iVar18 = 1;
                    if ((uVar16 & 0x400000) == 0) {
                      iVar18 = 2;
                    }
                    if ((uVar16 & 0x800000) != 0) {
                      iVar18 = 0;
                    }
                    if ((iVar17 == iVar18) && ((*(byte *)(lVar11 + 0x2e) >> 1 & 1) == 0)) {
                      puVar25 = (undefined8 *)*puVar12;
                      FUN_109f6600c(puVar25,0xa0,8);
                      if (puVar25 != (undefined8 *)0x0) {
                        puVar25[0x11] = 0;
                        puVar25[0x10] = 0;
                        puVar25[0x13] = 0;
                        puVar25[0x12] = 0;
                        puVar25[0xd] = 0;
                        puVar25[0xc] = 0;
                        puVar25[0xf] = 0;
                        puVar25[0xe] = 0;
                        puVar25[9] = 0;
                        puVar25[8] = 0;
                        puVar25[0xb] = 0;
                        puVar25[10] = 0;
                        puVar25[5] = 0;
                        puVar25[4] = 0;
                        puVar25[7] = 0;
                        puVar25[6] = 0;
                        puVar25[1] = 0;
                        *puVar25 = 0;
                        puVar25[3] = 0;
                        puVar25[2] = 0;
                      }
                      *(undefined4 *)(puVar25 + 3) = 1;
                      puVar25[1] = 0;
                      puVar25[2] = 0;
                      *puVar25 = 0;
                      *(undefined4 *)(puVar25 + 5) = 0;
                      *(uint *)((long)puVar25 + 0x2c) = *(uint *)(lVar24 + 0x20) & 0x1fffff;
                      puVar25[6] = *(undefined8 *)(lVar24 + 0x10);
                      puVar25[7] = lVar24;
                      if (*(char *)((long)puVar12 + 0x61) == '\x0e') {
                        uVar9 = *(undefined4 *)(puVar12 + 0x2c);
                      }
                      else {
                        uVar9 = 0x20;
                      }
                      FUN_109ecb048(puVar25,puVar25 + 0x10,1,uVar9);
                      FUN_109ecb4f0(2,plVar14,puVar25);
                      uVar7 = *(undefined1 *)(puVar25[6] + 0xd);
                      puVar5 = puVar12;
                      FUN_109ecb0a8(puVar12,0x112);
                      *(undefined1 *)(puVar5 + 10) = uVar7;
                      FUN_109ecb048();
                      puVar5[0x10] = 0;
                      puVar5[0x11] = 0;
                      puVar5[0x12] = 0;
                      puVar5[0x13] = puVar25 + 0x10;
                      *(undefined4 *)
                       ((long)puVar5 +
                       (ulong)(byte)(&UNK_110b671ba)[(ulong)*(uint *)(puVar5 + 5) * 0x68] * 4 + 0x50
                       ) = 0;
                      FUN_109ecb4f0(3,puVar25,puVar5);
                      if ((long *)plVar14[8] + -1 != plVar14 + 6) {
                        plVar10 = puVar5 + 7;
                        plVar13 = (long *)plVar14[8];
                        do {
                          lVar11 = *plVar13;
                          plVar1 = (long *)plVar13[1];
                          *(long **)(lVar11 + 8) = plVar1;
                          *plVar1 = lVar11;
                          plVar13[1] = (long)plVar10;
                          plVar13[2] = (long)(puVar5 + 6);
                          *plVar13 = 0;
                          lVar11 = *plVar10;
                          *plVar13 = lVar11;
                          *(long **)(lVar11 + 8) = plVar13;
                          *plVar10 = (long)plVar13;
                          plVar13 = plVar1;
                        } while (plVar1 + -1 != plVar14 + 6);
                      }
                      plVar10 = (long *)*plVar14;
                      uVar22 = 1;
                    }
                  }
                }
                plVar14 = plVar10;
              }
              FUN_109ecc434();
            }
          }
          uVar26 = uVar26 | uVar22;
        }
      }
    }
LAB_109f04ce0:
    lVar27 = *(long *)(lVar27 + 8);
    lVar19 = *(long *)(lVar27 + 8);
  } while( true );
}



/* Entry: 109f0509c; end: 109f050f3;  */

long * FUN_109f0509c(long *param_1,long param_2)

{
  long *plVar1;
  
  do {
    plVar1 = param_1;
    param_1 = (long *)*plVar1;
    if (param_1 == (long *)0x0) {
      return (long *)0x0;
    }
  } while ((((((uint)plVar1[4] >> 2 & 1) == 0) ||
            (*(int *)((long)plVar1 + 0x3c) != *(int *)(param_2 + 0x3c))) ||
           (((*(ulong *)(param_2 + 0x20) ^ plVar1[4]) & 0x3000000000) != 0)) ||
          (plVar1[2] != *(long *)(param_2 + 0x10)));
  return plVar1;
}



/* Entry: 109f050f4; end: 109f05153;  */

void FUN_109f050f4(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 *apuStack_40 [2];
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  FUN_109f05154(param_1,param_2,apuStack_40);
  if (apuStack_40[0] != auStack_30) {
    puVar1 = *(undefined8 **)(param_1 + 0x20);
    *puVar1 = apuStack_40[0];
    *(undefined8 **)(apuStack_40[0] + 8) = puVar1;
    *(long **)(param_1 + 0x20) = plStack_28;
    *plStack_28 = param_1 + 0x18;
  }
  return;
}



/* Entry: 109f05154; end: 109f05257;  */

void FUN_109f05154(long param_1,uint param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  plVar3 = param_3 + 2;
  *plVar3 = 0;
  *param_3 = (long)plVar3;
  param_3[1] = 0;
  param_3[3] = (long)param_3;
  plVar5 = (long *)**(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar7 = (long *)0x0;
    if (*plVar5 != 0) {
      plVar7 = plVar5;
    }
    plVar4 = *(long **)(param_1 + 8);
LAB_109f05184:
    if ((param_2 & 0x1fffff & *(uint *)(plVar4 + 4)) != 0) {
      puVar8 = (undefined8 *)plVar4[1];
      plVar5[1] = (long)puVar8;
      *puVar8 = plVar5;
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar5 = *(long **)*param_3;
      if (plVar5 != (long *)0x0) {
        uVar1 = *(uint *)((long)plVar4 + 0x2c) >> 0x10 & 1;
        plVar6 = (long *)*param_3;
        do {
          uVar2 = *(uint *)((long)plVar6 + 0x2c) >> 0x10 & 1;
          if ((uVar1 < uVar2) ||
             ((uVar1 == uVar2 &&
              ((*(int *)((long)plVar4 + 0x3c) < *(int *)((long)plVar6 + 0x3c) ||
               ((*(int *)((long)plVar6 + 0x3c) == *(int *)((long)plVar4 + 0x3c) &&
                (((uint)((ulong)plVar4[4] >> 0x24) & 3) < ((uint)((ulong)plVar6[4] >> 0x24) & 3)))))
              )))) {
            *plVar4 = (long)plVar6;
            plVar6 = plVar6 + 1;
            goto LAB_109f0521c;
          }
          plVar9 = (long *)*plVar5;
          plVar6 = plVar5;
          plVar5 = plVar9;
        } while (plVar9 != (long *)0x0);
      }
      *plVar4 = (long)plVar3;
      plVar6 = param_3 + 3;
LAB_109f0521c:
      puVar8 = (undefined8 *)*plVar6;
      plVar4[1] = (long)puVar8;
      *puVar8 = plVar4;
      *plVar6 = (long)plVar4;
    }
    if (plVar7 != (long *)0x0) {
      plVar5 = (long *)*plVar7;
      plVar4 = plVar7;
      plVar7 = (long *)0x0;
      if ((plVar5 != (long *)0x0) && (plVar7 = (long *)0x0, *plVar5 != 0)) {
        plVar7 = plVar5;
      }
      goto LAB_109f05184;
    }
  }
  return;
}



/* Entry: 109f05258; end: 109f059ff;  */

void FUN_109f05258(uint *param_1)

{
  long *plVar1;
  ulong uVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  uint *puVar12;
  long *plVar13;
  uint *puVar14;
  undefined *puVar15;
  uint *puVar16;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  uStack_78 = 0;
  uStack_80 = 0;
  uVar7 = (ulong)param_1[0x1e] + 0x1f >> 5;
  puVar3 = param_1;
  func_0x000109f6590c(param_1,uVar7 << 2);
  uVar6 = param_1[0x21];
  if ((uVar6 >> 5 & 1) == 0) {
    FUN_109ecc8fc(param_1);
    uVar6 = param_1[0x21];
  }
  param_1[0x21] = uVar6 | 0x20;
  uVar6 = param_1[0x1f];
  uStack_78 = uStack_78 & 0xffffffff00000000;
  uStack_80 = (ulong)uVar6;
  lVar4 = 0;
  func_0x000109f6590c(0,(ulong)uVar6 + 0x1f >> 3 & 0x3ffffffc);
  lVar5 = 0;
  lStack_70 = lVar4;
  func_0x000109f6590c(0,(ulong)uVar6 << 3);
  lVar4 = *(long *)(param_1 + 0xc);
  lStack_68 = lVar5;
  if (lVar4 != 0) {
    do {
      lVar5 = lVar4;
      FUN_109f65a40(lVar4,*(undefined8 *)(lVar4 + 0x90),4,uVar7);
      *(long *)(lVar4 + 0x90) = lVar5;
      _bzero();
      lVar5 = lVar4;
      FUN_109f65a40(lVar4,*(undefined8 *)(lVar4 + 0x98),4,uVar7);
      *(long *)(lVar4 + 0x98) = lVar5;
      _bzero();
      FUN_109f68998(&uStack_80,lVar4 + 0x40);
      FUN_109ecc434();
    } while (lVar4 != 0);
    while (uStack_80._4_4_ != 0) {
      uVar9 = uStack_78 & 0xffffffff;
      uVar6 = 0;
      if ((uint)uStack_80 != 0) {
        uVar6 = ((int)uStack_78 + 1U) / (uint)uStack_80;
      }
      uStack_80 = CONCAT44(uStack_80._4_4_ + -1,(uint)uStack_80);
      uVar2 = uStack_78 >> 0x20;
      uStack_78 = CONCAT44((int)uVar2,((int)uStack_78 + 1U) - uVar6 * (uint)uStack_80);
      puVar16 = *(uint **)(lStack_68 + uVar9 * 8);
      uVar9 = (ulong)(*puVar16 >> 3) & 0x1ffffffc;
      *(uint *)(lStack_70 + uVar9) =
           *(uint *)(lStack_70 + uVar9) & (1 << (ulong)(*puVar16 & 0x1f) ^ 0xffffffffU);
      _memcpy(*(undefined8 *)(puVar16 + 0x14),*(undefined8 *)(puVar16 + 0x16),uVar7 << 2);
      plVar8 = *(long **)(puVar16 + -0x10);
      if ((((plVar8 != (long *)0x0) && (*plVar8 != 0)) && ((int)plVar8[2] == 1)) &&
         (*(int *)(*(long *)plVar8[7] + 0x18) != 7)) {
        uVar6 = *(uint *)((long *)plVar8[7] + 3);
        uVar9 = (ulong)(uVar6 >> 3) & 0x1ffffffc;
        *(uint *)(*(long *)(puVar16 + 0x14) + uVar9) =
             1 << (ulong)(uVar6 & 0x1f) | *(uint *)(*(long *)(puVar16 + 0x14) + uVar9);
      }
      lVar4 = *(long *)(puVar16 + -2);
      if ((lVar4 != 0 && *(long *)(lVar4 + 8) != 0) && (*(uint *)(lVar4 + 0x18) != 8)) {
                    /* WARNING: Could not recover jumptable at 0x000109f0560c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10e06d400)[*(uint *)(lVar4 + 0x18)] * 4 + 0x109f05610))
                  (*(long *)(lVar4 + 8));
        return;
      }
      uVar6 = *(uint *)(*(long *)(puVar16 + 6) + 0x20);
      if (uVar6 != 0) {
        lVar4 = *(long *)(*(long *)(puVar16 + 6) + 8);
        lVar5 = (ulong)uVar6 << 4;
        do {
          puVar15 = *(undefined **)(lVar4 + 8);
          if (puVar15 != (undefined *)0x0 && puVar15 != &UNK_10e47dcd0) {
            do {
              _memcpy(puVar3,*(undefined8 *)(puVar16 + 0x14),uVar7 << 2);
              plVar8 = *(long **)(puVar16 + -8);
              plVar10 = (long *)*plVar8;
              if ((plVar10 != (long *)0x0) &&
                 (plVar11 = plVar8, plVar13 = plVar10, (int)plVar8[3] == 8)) {
                do {
                  uVar9 = (ulong)(*(uint *)(plVar11 + 0xc) >> 3) & 0x1ffffffc;
                  *(uint *)((long)puVar3 + uVar9) =
                       *(uint *)((long)puVar3 + uVar9) &
                       (1 << (ulong)(*(uint *)(plVar11 + 0xc) & 0x1f) ^ 0xffffffffU);
                  if ((long *)*plVar13 == (long *)0x0) break;
                  plVar1 = plVar13 + 3;
                  plVar11 = plVar13;
                  plVar13 = (long *)*plVar13;
                } while ((int)*plVar1 == 8);
                do {
                  if ((int)plVar8[3] != 8) break;
                  plVar11 = (long *)plVar8[5];
                  for (plVar8 = (long *)*(long *)plVar8[5]; plVar8 != (long *)0x0;
                      plVar8 = (long *)*plVar8) {
                    if ((undefined *)plVar11[2] == puVar15) {
                      if (*(int *)(*(long *)plVar11[6] + 0x18) != 7) {
                        uVar6 = *(uint *)((long *)plVar11[6] + 3);
                        uVar9 = (ulong)(uVar6 >> 3) & 0x1ffffffc;
                        *(uint *)((long)puVar3 + uVar9) =
                             1 << (ulong)(uVar6 & 0x1f) | *(uint *)((long)puVar3 + uVar9);
                      }
                      break;
                    }
                    plVar11 = plVar8;
                  }
                  plVar11 = (long *)*plVar10;
                  plVar8 = plVar10;
                  plVar10 = plVar11;
                } while (plVar11 != (long *)0x0);
              }
              if (uVar7 != 0) {
                uVar6 = 0;
                puVar12 = *(uint **)(puVar15 + 0x98);
                puVar14 = puVar3;
                uVar9 = uVar7;
                do {
                  uVar6 = *puVar14 & (*puVar12 ^ 0xffffffff) | uVar6;
                  *puVar12 = *puVar12 | *puVar14;
                  uVar9 = uVar9 - 1;
                  puVar12 = puVar12 + 1;
                  puVar14 = puVar14 + 1;
                } while (uVar9 != 0);
                if (uVar6 != 0) {
                  func_0x000109f68a00(&uStack_80,puVar15 + 0x40);
                }
              }
              lVar5 = lVar4;
              do {
                lVar4 = lVar5 + 0x10;
                if (lVar4 == *(long *)(*(long *)(puVar16 + 6) + 8) +
                             (ulong)*(uint *)(*(long *)(puVar16 + 6) + 0x20) * 0x10)
                goto LAB_109f05474;
                puVar15 = *(undefined **)(lVar5 + 0x18);
                lVar5 = lVar4;
              } while (puVar15 == (undefined *)0x0 || puVar15 == &UNK_10e47dcd0);
            } while( true );
          }
          lVar4 = lVar4 + 0x10;
          lVar5 = lVar5 + -0x10;
        } while (lVar5 != 0);
      }
LAB_109f05474:
    }
  }
  if (puVar3 != (uint *)0x0) {
    FUN_109f65aa4(puVar3 + -0xc);
    FUN_109f65ae0(puVar3 + -0xc);
  }
  FUN_109f6893c(&uStack_80);
  return;
}



/* Entry: 109f05a00; end: 109f05a53;  */

void FUN_109f05a00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  FUN_109ecc7dc();
  for (plVar1 = *(long **)(param_1 + 0x30); *plVar1 != 0; plVar1 = (long *)*plVar1) {
    FUN_109f05a54(plVar1,param_2,param_3);
  }
  return;
}



/* Entry: 109f05a54; end: 109f076bb;  */

/* WARNING: Removing unreachable block (ram,0x000109f0650c) */
/* WARNING: Removing unreachable block (ram,0x000109f065f8) */
/* WARNING: Removing unreachable block (ram,0x000109f0667c) */
/* WARNING: Removing unreachable block (ram,0x000109f06684) */
/* WARNING: Removing unreachable block (ram,0x000109f0668c) */
/* WARNING: Removing unreachable block (ram,0x000109f06608) */
/* WARNING: Removing unreachable block (ram,0x000109f06610) */
/* WARNING: Removing unreachable block (ram,0x000109f06618) */
/* WARNING: Removing unreachable block (ram,0x000109f06620) */
/* WARNING: Removing unreachable block (ram,0x000109f06694) */
/* WARNING: Removing unreachable block (ram,0x000109f06698) */
/* WARNING: Removing unreachable block (ram,0x000109f066bc) */
/* WARNING: Removing unreachable block (ram,0x000109f06878) */
/* WARNING: Removing unreachable block (ram,0x000109f06888) */
/* WARNING: Removing unreachable block (ram,0x000109f06890) */
/* WARNING: Removing unreachable block (ram,0x000109f066d8) */
/* WARNING: Removing unreachable block (ram,0x000109f066e8) */
/* WARNING: Removing unreachable block (ram,0x000109f06898) */
/* WARNING: Removing unreachable block (ram,0x000109f068a0) */
/* WARNING: Removing unreachable block (ram,0x000109f066f0) */
/* WARNING: Removing unreachable block (ram,0x000109f066f8) */
/* WARNING: Removing unreachable block (ram,0x000109f068ac) */
/* WARNING: Removing unreachable block (ram,0x000109f068b4) */
/* WARNING: Removing unreachable block (ram,0x000109f068c0) */
/* WARNING: Removing unreachable block (ram,0x000109f06d1c) */
/* WARNING: Removing unreachable block (ram,0x000109f06d44) */
/* WARNING: Removing unreachable block (ram,0x000109f068e0) */
/* WARNING: Removing unreachable block (ram,0x000109f06530) */
/* WARNING: Removing unreachable block (ram,0x000109f068ec) */
/* WARNING: Removing unreachable block (ram,0x000109f0691c) */
/* WARNING: Removing unreachable block (ram,0x000109f06920) */
/* WARNING: Removing unreachable block (ram,0x000109f0692c) */
/* WARNING: Removing unreachable block (ram,0x000109f06938) */
/* WARNING: Removing unreachable block (ram,0x000109f06944) */
/* WARNING: Removing unreachable block (ram,0x000109f0694c) */
/* WARNING: Removing unreachable block (ram,0x000109f06954) */
/* WARNING: Removing unreachable block (ram,0x000109f06968) */
/* WARNING: Removing unreachable block (ram,0x000109f06980) */
/* WARNING: Removing unreachable block (ram,0x000109f0698c) */
/* WARNING: Removing unreachable block (ram,0x000109f06994) */
/* WARNING: Removing unreachable block (ram,0x000109f06998) */
/* WARNING: Removing unreachable block (ram,0x000109f069a4) */
/* WARNING: Removing unreachable block (ram,0x000109f069b4) */
/* WARNING: Removing unreachable block (ram,0x000109f069cc) */
/* WARNING: Removing unreachable block (ram,0x000109f069d8) */
/* WARNING: Removing unreachable block (ram,0x000109f069e0) */
/* WARNING: Removing unreachable block (ram,0x000109f069e4) */
/* WARNING: Removing unreachable block (ram,0x000109f069e8) */
/* WARNING: Removing unreachable block (ram,0x000109f069f4) */
/* WARNING: Removing unreachable block (ram,0x000109f069f8) */
/* WARNING: Removing unreachable block (ram,0x000109f06a14) */
/* WARNING: Removing unreachable block (ram,0x000109f06a18) */
/* WARNING: Removing unreachable block (ram,0x000109f06a30) */
/* WARNING: Removing unreachable block (ram,0x000109f06a38) */
/* WARNING: Removing unreachable block (ram,0x000109f06a3c) */
/* WARNING: Removing unreachable block (ram,0x000109f06a44) */
/* WARNING: Removing unreachable block (ram,0x000109f06a4c) */
/* WARNING: Removing unreachable block (ram,0x000109f06a54) */
/* WARNING: Removing unreachable block (ram,0x000109f06af0) */
/* WARNING: Removing unreachable block (ram,0x000109f06538) */
/* WARNING: Removing unreachable block (ram,0x000109f06540) */
/* WARNING: Removing unreachable block (ram,0x000109f06a80) */
/* WARNING: Removing unreachable block (ram,0x000109f06aa4) */
/* WARNING: Removing unreachable block (ram,0x000109f06abc) */
/* WARNING: Removing unreachable block (ram,0x000109f06adc) */
/* WARNING: Removing unreachable block (ram,0x000109f06b04) */
/* WARNING: Removing unreachable block (ram,0x000109f06ae8) */
/* WARNING: Removing unreachable block (ram,0x000109f06b0c) */
/* WARNING: Removing unreachable block (ram,0x000109f06b9c) */
/* WARNING: Removing unreachable block (ram,0x000109f06c14) */
/* WARNING: Removing unreachable block (ram,0x000109f06c40) */
/* WARNING: Removing unreachable block (ram,0x000109f06c60) */
/* WARNING: Removing unreachable block (ram,0x000109f06c70) */
/* WARNING: Removing unreachable block (ram,0x000109f06ca4) */
/* WARNING: Removing unreachable block (ram,0x000109f06ca8) */
/* WARNING: Removing unreachable block (ram,0x000109f06ba8) */
/* WARNING: Removing unreachable block (ram,0x000109f06bb8) */
/* WARNING: Removing unreachable block (ram,0x000109f06bc0) */
/* WARNING: Removing unreachable block (ram,0x000109f06d6c) */
/* WARNING: Removing unreachable block (ram,0x000109f06e4c) */
/* WARNING: Removing unreachable block (ram,0x000109f06e58) */
/* WARNING: Removing unreachable block (ram,0x000109f06d7c) */
/* WARNING: Removing unreachable block (ram,0x000109f06d88) */
/* WARNING: Removing unreachable block (ram,0x000109f06eb8) */
/* WARNING: Removing unreachable block (ram,0x000109f06d90) */
/* WARNING: Removing unreachable block (ram,0x000109f06d9c) */
/* WARNING: Removing unreachable block (ram,0x000109f06da0) */
/* WARNING: Removing unreachable block (ram,0x000109f06bd8) */
/* WARNING: Removing unreachable block (ram,0x000109f06da8) */
/* WARNING: Removing unreachable block (ram,0x000109f06db4) */
/* WARNING: Removing unreachable block (ram,0x000109f06be0) */
/* WARNING: Removing unreachable block (ram,0x000109f06dbc) */
/* WARNING: Removing unreachable block (ram,0x000109f06bec) */
/* WARNING: Removing unreachable block (ram,0x000109f07134) */
/* WARNING: Removing unreachable block (ram,0x000109f06bf4) */
/* WARNING: Removing unreachable block (ram,0x000109f06e60) */
/* WARNING: Removing unreachable block (ram,0x000109f06f04) */
/* WARNING: Removing unreachable block (ram,0x000109f06f18) */
/* WARNING: Removing unreachable block (ram,0x000109f06f4c) */
/* WARNING: Removing unreachable block (ram,0x000109f06f6c) */
/* WARNING: Removing unreachable block (ram,0x000109f06f5c) */
/* WARNING: Removing unreachable block (ram,0x000109f06f28) */
/* WARNING: Removing unreachable block (ram,0x000109f06f64) */
/* WARNING: Removing unreachable block (ram,0x000109f06f3c) */
/* WARNING: Removing unreachable block (ram,0x000109f06f44) */
/* WARNING: Removing unreachable block (ram,0x000109f06f70) */
/* WARNING: Removing unreachable block (ram,0x000109f06f84) */
/* WARNING: Removing unreachable block (ram,0x000109f06f88) */
/* WARNING: Removing unreachable block (ram,0x000109f06f90) */
/* WARNING: Removing unreachable block (ram,0x000109f06f98) */
/* WARNING: Removing unreachable block (ram,0x000109f06fc4) */
/* WARNING: Removing unreachable block (ram,0x000109f06fd8) */
/* WARNING: Removing unreachable block (ram,0x000109f06fe0) */
/* WARNING: Removing unreachable block (ram,0x000109f07014) */
/* WARNING: Removing unreachable block (ram,0x000109f07038) */
/* WARNING: Removing unreachable block (ram,0x000109f07024) */
/* WARNING: Removing unreachable block (ram,0x000109f07044) */
/* WARNING: Removing unreachable block (ram,0x000109f07028) */
/* WARNING: Removing unreachable block (ram,0x000109f07030) */
/* WARNING: Removing unreachable block (ram,0x000109f0704c) */
/* WARNING: Removing unreachable block (ram,0x000109f06ff0) */
/* WARNING: Removing unreachable block (ram,0x000109f0706c) */
/* WARNING: Removing unreachable block (ram,0x000109f071d8) */
/* WARNING: Removing unreachable block (ram,0x000109f06cb0) */
/* WARNING: Removing unreachable block (ram,0x000109f07120) */
/* WARNING: Removing unreachable block (ram,0x000109f07130) */
/* WARNING: Removing unreachable block (ram,0x000109f06bfc) */
/* WARNING: Removing unreachable block (ram,0x000109f071a8) */
/* WARNING: Removing unreachable block (ram,0x000109f06c00) */
/* WARNING: Removing unreachable block (ram,0x000109f06cb8) */
/* WARNING: Removing unreachable block (ram,0x000109f06cc0) */
/* WARNING: Removing unreachable block (ram,0x000109f06d60) */
/* WARNING: Removing unreachable block (ram,0x000109f06ce0) */
/* WARNING: Removing unreachable block (ram,0x000109f06ce8) */
/* WARNING: Removing unreachable block (ram,0x000109f06cf4) */
/* WARNING: Removing unreachable block (ram,0x000109f06cf8) */
/* WARNING: Removing unreachable block (ram,0x000109f06d00) */
/* WARNING: Removing unreachable block (ram,0x000109f06d0c) */
/* WARNING: Removing unreachable block (ram,0x000109f06d14) */
/* WARNING: Removing unreachable block (ram,0x000109f071f8) */

void FUN_109f05a54(long *param_1,undefined8 param_2,undefined1 param_3)

{
  byte *pbVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  int iVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  int *piVar19;
  bool bVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  uint *puVar26;
  ulong uVar27;
  long *plVar28;
  long *plVar29;
  long lVar30;
  undefined1 uVar31;
  long *plVar32;
  long *plVar33;
  long lVar34;
  long lVar35;
  long *plVar36;
  long *plVar37;
  long *plVar38;
  long *plStack_e0;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar28 = param_1;
  if ((int)param_1[2] == 0) goto LAB_109f05f3c;
  if ((int)param_1[2] != 2) {
    for (plVar36 = (long *)param_1[9]; *plVar36 != 0; plVar36 = (long *)*plVar36) {
      plVar28 = plVar36;
      FUN_109f05a54();
    }
    for (plVar36 = (long *)param_1[0xd]; *plVar36 != 0; plVar36 = (long *)*plVar36) {
      plVar28 = plVar36;
      FUN_109f05a54();
    }
    goto LAB_109f05f3c;
  }
  plVar28 = (long *)param_1[4];
  plVar36 = param_1;
  if (*plVar28 == 0) goto LAB_109f05adc;
  do {
    FUN_109f05a54(plVar28,param_2);
    plVar28 = (long *)*plVar28;
  } while (*plVar28 != 0);
  iVar12 = (int)param_1[2];
  while (iVar12 != 3) {
LAB_109f05adc:
    plVar36 = (long *)plVar36[3];
    iVar12 = (int)plVar36[2];
  }
  puVar9 = (undefined8 *)0x30;
  _malloc();
  if (puVar9 == (undefined8 *)0x0) {
    plVar38 = (long *)0x0;
  }
  else {
    puVar9[4] = 0;
    puVar9[1] = 0;
    *puVar9 = 0;
    puVar9[3] = 0;
    puVar9[2] = 0;
    plVar38 = puVar9 + 6;
  }
  plVar10 = plVar38;
  FUN_109f658b0(plVar38,0x30);
  if (plVar10 != (long *)0x0) {
    plVar10[3] = 0;
    plVar10[2] = 0;
    plVar10[5] = 0;
    plVar10[4] = 0;
    plVar10[1] = 0;
    *plVar10 = 0;
  }
  plVar28 = plVar38;
  FUN_109f658b0(plVar38,(ulong)*(uint *)(plVar36 + 0xf) << 6);
  plVar10[1] = (long)plVar28;
  plVar28 = plVar38;
  func_0x000109f6590c();
  *plVar10 = (long)param_1;
  plVar37 = plVar10 + 3;
  plVar10[2] = (long)plVar28;
  plVar10[3] = (long)plVar37;
  plVar10[4] = (long)plVar37;
  if (param_1[0xc] != 0) {
    lVar34 = param_1[0xc] + -0x30;
    FUN_109f65aa4(lVar34);
    FUN_109f65ae0(lVar34);
  }
  puVar9 = (undefined8 *)0x70;
  _malloc();
  puVar9[1] = 0;
  *puVar9 = 0;
  puVar9[3] = 0;
  puVar9[2] = 0;
  *puVar9 = param_1 + -6;
  lVar34 = param_1[-5];
  puVar9[3] = lVar34;
  puVar9[4] = 0;
  param_1[-5] = (long)puVar9;
  if (lVar34 != 0) {
    *(undefined8 **)(lVar34 + 0x10) = puVar9;
  }
  plVar28 = puVar9 + 6;
  puVar9[7] = 0;
  *plVar28 = 0;
  puVar9[0xd] = 0;
  puVar9[0xc] = 0;
  puVar9[9] = 0;
  puVar9[8] = 0;
  puVar14 = puVar9 + 10;
  puVar9[0xb] = 0;
  *puVar14 = 0;
  param_1[0xc] = (long)plVar28;
  *puVar14 = puVar14;
  puVar9[0xb] = puVar14;
  *(int *)(plVar10 + 5) = (int)param_2;
  *(undefined1 *)((long)plVar10 + 0x2c) = param_3;
  lVar34 = *plVar10;
  plVar33 = *(long **)(lVar34 + 0x20);
  plVar15 = (long *)*plVar33;
  if (plVar15 != (long *)0x0) {
    lVar22 = *(long *)(*(long *)(plVar36[4] + 0x18) + 0x28);
    do {
      plVar36 = (long *)0x0;
      plVar16 = plVar33;
      if (*plVar15 != 0) {
        plVar36 = plVar15;
      }
      do {
        plVar33 = plVar36;
        iVar12 = (int)plVar16[2];
        if (iVar12 == 2) {
          plVar36 = plVar16;
          FUN_109ecc4d4();
          while (plVar28 = plVar16, FUN_109ecc644(), plVar36 != plVar28) {
            FUN_109f076bc(plVar36[4]);
            FUN_109ecc434();
          }
        }
        else if (iVar12 == 1) {
          plVar36 = plVar16;
          FUN_109ecc4d4();
          while (plVar28 = plVar16, FUN_109ecc644(), plVar36 != plVar28) {
            FUN_109f076bc(plVar36[4]);
            FUN_109ecc434();
          }
        }
        else if (iVar12 == 0) {
          plVar28 = (long *)plVar16[4];
          FUN_109f076bc();
        }
        if (plVar33 == (long *)0x0) {
          lVar34 = *plVar10;
          plVar15 = *(long **)(lVar34 + 0x20);
          plVar36 = (long *)*plVar15;
          if (plVar36 == (long *)0x0) goto LAB_109f05ed0;
          bVar6 = false;
          goto LAB_109f05d30;
        }
        plVar15 = (long *)*plVar33;
        plVar36 = (long *)0x0;
        plVar16 = plVar33;
      } while (plVar15 == (long *)0x0);
    } while( true );
  }
LAB_109f05ed0:
  plVar36 = *(long **)(*(long *)(lVar34 + 0x60) + 0x28);
  if (plVar36 != (long *)(*(long *)(lVar34 + 0x60) + 0x20)) {
    do {
      lVar34 = *plVar36;
      plVar37 = (long *)plVar36[1];
      *(long **)(lVar34 + 8) = plVar37;
      *plVar37 = lVar34;
      *plVar36 = 0;
      plVar36[1] = 0;
      plVar28 = plVar36 + -0xb;
      FUN_109f65aa4(plVar28);
      FUN_109f65ae0();
      plVar36 = plVar37;
    } while (plVar37 != (long *)(*(long *)(*plVar10 + 0x60) + 0x20));
  }
  goto LAB_109f05f20;
LAB_109f05d30:
  plVar33 = (long *)0x0;
  plVar16 = plVar15;
  if (*plVar36 != 0) {
    plVar33 = plVar36;
  }
  do {
    plVar15 = plVar33;
    if ((int)plVar16[2] == 1) {
      if ((long *)plVar16[9] == plVar16 + 0xb) {
        lVar35 = 0;
      }
      else {
        lVar35 = plVar16[0xc];
      }
      if ((long *)plVar16[0xd] == plVar16 + 0xf) {
        lVar23 = 0;
      }
      else {
        lVar23 = plVar16[0x10];
      }
      if (((*(long *)(lVar35 + 0x20) == lVar35 + 0x30) ||
          (*(int *)(*(long *)(lVar35 + 0x38) + 0x18) != 6)) ||
         (*(int *)(*(long *)(lVar35 + 0x38) + 0x28) != 2)) {
        if (((*(long *)(lVar23 + 0x20) != lVar23 + 0x30) &&
            (*(int *)(*(long *)(lVar23 + 0x38) + 0x18) == 6)) &&
           (*(int *)(*(long *)(lVar23 + 0x38) + 0x28) == 2)) {
          uVar31 = 1;
          lVar30 = lVar35;
          goto LAB_109f05df8;
        }
        FUN_109f07858();
        plVar28 = plVar16;
        if (((ulong)plVar16 & 1) == 0) goto LAB_109f05e9c;
      }
      else {
        uVar31 = 0;
        lVar30 = lVar23;
        lVar23 = lVar35;
LAB_109f05df8:
        plVar28 = plVar16;
        FUN_109f07858();
        if ((((ulong)plVar28 & 1) == 0) && (*(int *)(*(long *)plVar16[7] + 0x18) != 8)) {
          plVar28 = *(long **)(lVar34 + 0x60);
          FUN_109f658b0();
          if (plVar28 != (long *)0x0) {
            plVar28[6] = 0;
            plVar28[3] = 0;
            plVar28[2] = 0;
            plVar28[5] = 0;
            plVar28[4] = 0;
            plVar28[1] = 0;
            *plVar28 = 0;
          }
          lVar34 = *plVar10;
          plVar36 = (long *)(*(long *)(lVar34 + 0x60) + 0x20);
          lVar35 = *plVar36;
          plVar28[6] = (long)plVar36;
          plVar33 = plVar28 + 5;
          *plVar33 = lVar35;
          *(long **)(lVar35 + 8) = plVar33;
          *plVar36 = (long)plVar33;
          *plVar28 = (long)plVar16;
          plVar28[2] = lVar23;
          plVar28[3] = lVar30;
          *(undefined1 *)(plVar28 + 4) = uVar31;
          plVar28[1] = *(long *)plVar16[7];
          if (plVar15 == (long *)0x0) goto LAB_109f05f78;
          bVar6 = true;
          goto LAB_109f05ea0;
        }
      }
      *(undefined1 *)(*(long *)(lVar34 + 0x60) + 0x12) = 1;
      goto LAB_109f05ed0;
    }
LAB_109f05e9c:
    if (plVar15 == (long *)0x0) {
      if (!bVar6) goto LAB_109f05ed0;
LAB_109f05f78:
      if ((long *)plVar10[4] != plVar37) {
        iVar12 = 0;
        plVar36 = (long *)plVar10[4];
        goto LAB_109f05f90;
      }
      iVar12 = 0;
      goto LAB_109f062e0;
    }
LAB_109f05ea0:
    plVar36 = (long *)*plVar15;
    plVar33 = (long *)0x0;
    plVar16 = plVar15;
  } while (plVar36 == (long *)0x0);
  goto LAB_109f05d30;
LAB_109f05f90:
  do {
    plVar15 = (long *)plVar36[1];
    lVar34 = *(long *)plVar36[3];
    if (*(int *)(lVar34 + 0x18) == 8) {
      plVar33 = *(long **)(lVar34 + 0x28);
      if (*plVar33 == 0) {
        lVar35 = 0;
      }
      else {
        lVar35 = 0;
        do {
          lVar24 = plVar33[6];
          lVar30 = plVar10[2];
          uVar21 = *(uint *)(lVar24 + 0x18);
          lVar23 = plVar10[1] + (ulong)uVar21 * 0x40;
          uVar7 = 1 << (ulong)(uVar21 & 0x1f);
          if ((uVar7 & *(uint *)(lVar30 + (ulong)(uVar21 >> 5) * 4)) == 0) {
            *(undefined1 *)(lVar23 + 0x10) = 0;
            *(long *)(lVar23 + 0x18) = lVar24;
            *(undefined2 *)(lVar23 + 0x24) = 0;
            *(undefined4 *)(lVar23 + 0x20) = 0;
            uVar18 = (ulong)(uVar21 >> 3) & 0x1ffffffc;
            *(undefined8 *)(lVar23 + 0x28) = 0;
            *(undefined8 *)(lVar23 + 0x30) = 0;
            *(uint *)(lVar30 + uVar18) = *(uint *)(lVar30 + uVar18) | uVar7;
          }
          else if ((*(byte *)(lVar23 + 0x24) & 1) != 0) break;
          if ((*(byte *)(lVar23 + 0x25) & 1) != 0) break;
          if (*(int *)(**(long **)(lVar23 + 0x18) + 0x18) == 8) {
            plVar29 = *(long **)(**(long **)(lVar23 + 0x18) + 0x28);
            plVar16 = (long *)*plVar29;
            if (plVar16 != (long *)0x0) {
              plVar32 = (long *)0x0;
              do {
                plVar17 = plVar16;
                plVar11 = *(long **)plVar29[6];
                if ((int)plVar11[3] != 0) goto LAB_109f060bc;
                if (plVar32 != (long *)0x0) {
                  plVar28 = plVar32;
                  FUN_109f02340();
                  if ((int)plVar28 == 0) goto LAB_109f060bc;
                  plVar17 = (long *)*plVar29;
                  plVar11 = plVar32;
                }
                plVar16 = (long *)*plVar17;
                plVar29 = plVar17;
                plVar32 = plVar11;
              } while ((long *)*plVar17 != (long *)0x0);
              lVar30 = plVar10[2];
              uVar21 = *(uint *)(plVar11 + 9);
              lVar23 = plVar10[1] + (ulong)uVar21 * 0x40;
              uVar7 = 1 << (ulong)(uVar21 & 0x1f);
              if ((uVar7 & *(uint *)(lVar30 + (ulong)(uVar21 >> 5) * 4)) == 0) {
                *(undefined1 *)(lVar23 + 0x10) = 0;
                *(long **)(lVar23 + 0x18) = plVar11 + 6;
                *(undefined2 *)(lVar23 + 0x24) = 0;
                *(undefined4 *)(lVar23 + 0x20) = 0;
                uVar18 = (ulong)(uVar21 >> 3) & 0x1ffffffc;
                *(undefined8 *)(lVar23 + 0x28) = 0;
                *(undefined8 *)(lVar23 + 0x30) = 0;
                *(uint *)(lVar30 + uVar18) = *(uint *)(lVar30 + uVar18) | uVar7;
                break;
              }
              if (*(char *)(lVar23 + 0x24) != '\x01') break;
            }
          }
LAB_109f060bc:
          if (((*(byte *)(lVar23 + 0x10) & 1) == 0) && (plVar36[5] == 0)) {
            plVar36[5] = (long)(plVar33 + 3);
          }
          else {
            lVar30 = **(long **)(lVar23 + 0x18);
            if ((*(int *)(lVar30 + 0x18) != 0) || (plVar36[6] != 0)) {
              plVar36[6] = 0;
              break;
            }
            uVar21 = *(uint *)(lVar30 + 0x28);
            lVar35 = lVar23;
            if ((int)uVar21 < 0x11d) {
              if ((uVar21 != 0x9c) && (uVar21 != 0xe8)) break;
            }
            else if ((0x31 < uVar21 - 0x11d ||
                      (1L << ((ulong)(uVar21 - 0x11d) & 0x3f) & 0x3000040000001U) == 0) &&
                    (uVar21 != 0x1c0)) break;
            if ((&UNK_110b78540)[(ulong)uVar21 * 0x68] != '\x02') break;
            plVar16 = (long *)0x0;
            uVar18 = 0;
            bVar6 = true;
            do {
              bVar20 = bVar6;
              lVar23 = lVar30 + 0x50 + (uVar18 ^ 1) * 0x30;
              if (*(long *)(lVar23 + 0x18) == lVar34 + 0x48) {
                uVar25 = (ulong)*(byte *)(lVar30 + 0x4c);
                if (uVar25 == 0) {
LAB_109f061d0:
                  plVar29 = (long *)(lVar30 + 0x50 + uVar18 * 0x30);
                  plVar28 = plVar29;
                  FUN_109f07990();
                  if ((int)plVar28 != 0) {
                    plVar36[6] = (long)plVar29;
                    plVar16 = plVar29;
                  }
                }
                else if (*(char *)(lVar23 + 0x20) == '\0') {
                  uVar27 = 0;
                  do {
                    if (uVar25 - 1 == uVar27) goto LAB_109f061d0;
                    uVar2 = uVar27 + 1;
                    pbVar1 = (byte *)(lVar30 + 0x71 + (uVar18 ^ 1) * 0x30 + uVar27);
                    uVar27 = uVar2;
                  } while (uVar2 == *pbVar1);
                  if (uVar25 <= uVar2) goto LAB_109f061d0;
                }
              }
              uVar18 = 1;
              bVar6 = false;
            } while (bVar20);
            if (plVar16 == (long *)0x0) break;
          }
          plVar33 = (long *)*plVar33;
        } while (*plVar33 != 0);
      }
      lVar34 = plVar36[6];
      if (((lVar34 == 0) || (plVar33 = (long *)plVar36[5], plVar33 == (long *)0x0)) ||
         (plVar28 = plVar33, FUN_109f07990(), (int)plVar28 == 0)) {
        plVar36[5] = 0;
        plVar36[6] = 0;
        plVar36[7] = 0;
      }
      else {
        *(long **)(lVar35 + 0x28) = plVar33;
        *(long *)(lVar35 + 0x30) = lVar34;
        lVar34 = plVar36[3];
        *(long *)(lVar35 + 0x38) = lVar34;
        *(undefined4 *)(lVar35 + 0x20) = 1;
        plVar36[7] = lVar34;
        *(undefined4 *)(plVar36 + 4) = 1;
        iVar12 = iVar12 + 2;
      }
    }
    plVar36 = plVar15;
  } while (plVar15 != plVar37);
  lVar34 = *plVar10;
LAB_109f062e0:
  lVar34 = *(long *)(lVar34 + 0x60);
  if (*(long *)(lVar34 + 0x30) != 0) {
    plVar28 = (long *)(*(long *)(lVar34 + 0x30) + -0x30);
    FUN_109f65aa4(plVar28);
    FUN_109f65ae0();
  }
  *(undefined4 *)(lVar34 + 0x38) = 0;
  if (iVar12 != 0) {
    lVar35 = lVar34;
    FUN_109f658b0();
    *(long *)(lVar34 + 0x30) = lVar35;
    for (plVar28 = (long *)plVar10[4]; plVar28 != plVar37; plVar28 = (long *)plVar28[1]) {
      if ((int)plVar28[4] == 1) {
        uVar21 = *(uint *)(lVar34 + 0x38);
        *(uint *)(lVar34 + 0x38) = uVar21 + 1;
        plVar36 = (long *)(lVar35 + (ulong)uVar21 * 0x18);
        *plVar36 = plVar28[3];
        lVar23 = plVar28[5];
        plVar36[2] = plVar28[6];
        plVar36[1] = lVar23;
      }
    }
    plVar36 = (long *)*plVar10;
    lVar34 = plVar36[0xc];
    lVar35 = *(long *)(lVar34 + 0x28);
    if (lVar35 == lVar34 + 0x20) {
      *(undefined1 *)(lVar34 + 0x10) = 1;
    }
    else {
      do {
        plVar28 = *(long **)(*(long *)(lVar35 + -0x28) + 0x38);
        lVar34 = *plVar28;
        if (*(int *)(lVar34 + 0x18) == 0) {
          iVar12 = *(int *)(lVar34 + 0x28);
          if (iVar12 == 0x124) {
LAB_109f06408:
            plVar36 = *(long **)(lVar34 + 0x68);
            bVar4 = *(byte *)(lVar34 + 0x70);
            if (iVar12 == 0x124) {
              plVar15 = *(long **)(lVar34 + 0x98);
              lVar23 = *plVar36;
              plVar37 = plVar36;
              if ((*(int *)(lVar23 + 0x18) == 5) ||
                 ((*(int *)(lVar23 + 0x18) == 0 &&
                  (lVar23 = *plVar15, plVar37 = plVar15, plVar15 = plVar36,
                  bVar4 = *(byte *)(lVar34 + 0xa0), *(int *)(lVar23 + 0x18) == 5)))) {
                uVar25 = *(ulong *)(lVar23 + (ulong)bVar4 * 8 + 0x48);
                uVar21 = (*(byte *)((long)plVar37 + 0x1d) & 0xaaaaaaaa) >> 1 |
                         (*(byte *)((long)plVar37 + 0x1d) & 0x55555555) << 1;
                uVar21 = (uVar21 & 0xcccccccc) >> 2 | (uVar21 & 0x33333333) << 2;
                uVar21 = (uint)LZCOUNT((uVar21 >> 4 | (uVar21 & 0xf0f0f0f) << 4) << 0x18);
                uVar18 = uVar25 & 0xffffffff;
                if (uVar21 != 5) {
                  uVar18 = uVar25;
                }
                uVar27 = uVar25 & 0xffff;
                if (uVar21 != 4) {
                  uVar27 = uVar18;
                }
                uVar18 = uVar25 & 1;
                if (uVar21 != 0) {
                  uVar18 = uVar25 & 0xff;
                }
                if (uVar21 < 4) {
                  uVar27 = uVar18;
                }
                plVar36 = plVar15;
                if (uVar27 == 0) goto LAB_109f06454;
              }
              iVar12 = 0x124;
            }
            else {
LAB_109f06454:
              lVar34 = *plVar36;
              if (*(int *)(lVar34 + 0x18) == 0) {
                if ((iVar12 == 0x146) || (iVar12 == 0x124)) {
                  if ((*(int *)(lVar34 + 0x28) == 0x120) && ((iVar12 == 0x124 || (iVar12 == 0x146)))
                     ) goto LAB_109f06708;
                }
                else if (*(int *)(lVar34 + 0x28) == 0x14a) {
LAB_109f06708:
                  lVar34 = 0;
                  bVar20 = false;
                  bVar6 = true;
                  do {
                    while( true ) {
                      plVar37 = *(long **)(*plVar36 + lVar34 * 0x30 + 0x68);
                      lVar34 = *plVar37;
                      if ((((*(int *)(lVar34 + 0x18) == 0) &&
                           (lVar23 = lVar34, func_0x000109ecd73c(), (int)lVar23 != 0)) &&
                          ((&UNK_110b78540)[(ulong)*(uint *)(lVar34 + 0x28) * 0x68] == '\x02')) &&
                         (plVar15 = plVar37, func_0x000109f07a28(), (int)plVar15 != 0)) break;
                      lVar34 = 1;
                      bVar5 = !bVar6;
                      bVar6 = false;
                      if (bVar5) {
                        if (!bVar20) goto LAB_109f06504;
                        goto LAB_109f0681c;
                      }
                    }
                    bVar5 = (bool)(bVar6 & *(int *)(*plStack_e0 + 0x18) != 5);
                    lVar34 = 1;
                    bVar20 = true;
                    plVar28 = plVar37;
                    bVar6 = false;
                  } while (bVar5);
LAB_109f0681c:
                  iVar12 = *(int *)(*plVar28 + 0x28);
                  *(long *)(lVar35 + -0x20) = *plVar28;
                  *(undefined1 *)(lVar35 + -6) = 1;
                }
              }
            }
LAB_109f06504:
            lVar34 = *plVar28;
            if (*(int *)(lVar34 + 0x18) == 0) goto LAB_109f06558;
          }
          else {
            plVar36 = plVar28;
            if (iVar12 == 0x14a) goto LAB_109f06454;
            if (iVar12 == 0x146) goto LAB_109f06408;
LAB_109f06558:
            lVar23 = lVar34;
            func_0x000109ecd73c();
            if (((int)lVar23 != 0) &&
               (((&UNK_110b78540)[(ulong)*(uint *)(lVar34 + 0x28) * 0x68] == '\x02' ||
                (((*(uint *)(lVar34 + 0x28) == 0x146 &&
                  (lVar23 = **(long **)(lVar34 + 0x68), *(int *)(lVar23 + 0x18) == 0)) &&
                 ((lVar30 = lVar23, func_0x000109ecd73c(), (int)lVar30 != 0 &&
                  ((&UNK_110b78540)[(ulong)*(uint *)(lVar23 + 0x28) * 0x68] == '\x02')))))))) {
              if (iVar12 == 0x146) {
                plVar28 = *(long **)(lVar34 + 0x68);
              }
              func_0x000109f07a28(plVar28);
            }
          }
          *(undefined1 *)(lVar35 + -6) = 1;
          plVar36 = (long *)*plVar10;
        }
        else {
          *(undefined1 *)(lVar35 + -6) = 1;
        }
        lVar35 = *(long *)(lVar35 + 8);
        lVar34 = plVar36[0xc];
      } while (lVar35 != lVar34 + 0x20);
      *(undefined1 *)(lVar34 + 0x10) = 0;
    }
    *(undefined8 *)(lVar34 + 0x18) = 0;
    plVar37 = plVar36;
    FUN_109ecc4d4();
    plVar28 = plVar36;
    FUN_109ecc644();
    if (plVar37 != plVar28) {
      do {
        plVar28 = (long *)plVar37[4];
        if (*plVar28 == 0) {
          piVar19 = (int *)plVar36[0xc];
        }
        else {
          do {
            if ((int)plVar28[3] - 3U < 2) {
              uVar21 = 1;
            }
            else if ((int)plVar28[3] == 0) {
              lVar34 = (ulong)*(uint *)(plVar28 + 5) * 0x68;
              if (((((byte)(&UNK_110b78598)[lVar34] >> 2 & 1) != 0) &&
                  (lVar35 = *(long *)plVar28[0xd], *(int *)(lVar35 + 0x18) == 0)) &&
                 ((lVar23 = lVar35, func_0x000109ecd73c(), (int)lVar23 != 0 &&
                  ((&UNK_110b78540)[(ulong)*(uint *)(lVar35 + 0x28) * 0x68] == '\x02')))) {
                plVar36 = *(long **)(lVar35 + 0x68);
                if (*(int *)(*plVar36 + 0x18) == 5) {
                  lVar24 = *(long *)(lVar35 + 0x98);
                  lVar30 = plVar10[2];
                  uVar21 = *(uint *)(lVar24 + 0x18);
                  lVar23 = plVar10[1] + (ulong)uVar21 * 0x40;
                  uVar7 = 1 << (ulong)(uVar21 & 0x1f);
                  if ((uVar7 & *(uint *)(lVar30 + (ulong)(uVar21 >> 5) * 4)) == 0) {
                    *(undefined1 *)(lVar23 + 0x10) = 0;
                    *(long *)(lVar23 + 0x18) = lVar24;
                    *(undefined2 *)(lVar23 + 0x24) = 0;
                    *(undefined4 *)(lVar23 + 0x20) = 0;
                    uVar18 = (ulong)(uVar21 >> 3) & 0x1ffffffc;
                    *(undefined8 *)(lVar23 + 0x28) = 0;
                    *(undefined8 *)(lVar23 + 0x30) = 0;
                    *(uint *)(lVar30 + uVar18) = *(uint *)(lVar30 + uVar18) | uVar7;
                  }
                  if (*(int *)(lVar23 + 0x20) != 1) goto LAB_109f07324;
LAB_109f0738c:
                  uVar21 = 0;
                  lVar34 = *(long *)(lVar35 + 0x40);
                  if ((lVar34 != 0) && (lVar35 = lVar35 + 0x38, lVar34 != lVar35)) {
                    if (*(long *)(lVar34 + 8) != lVar35) goto LAB_109f073b0;
                    do {
                      if ((*(byte *)(lVar34 + -8) & 1) != 0) goto LAB_109f073b0;
                      lVar34 = *(long *)(lVar34 + 8);
                    } while (lVar34 != lVar35);
                    uVar21 = 0xffffffff;
                  }
                  goto LAB_109f073b4;
                }
LAB_109f07324:
                if (*(int *)(**(long **)(lVar35 + 0x98) + 0x18) == 5) {
                  lVar30 = plVar10[2];
                  uVar21 = *(uint *)(plVar36 + 3);
                  lVar23 = plVar10[1] + (ulong)uVar21 * 0x40;
                  uVar7 = 1 << (ulong)(uVar21 & 0x1f);
                  if ((uVar7 & *(uint *)(lVar30 + (ulong)(uVar21 >> 5) * 4)) == 0) {
                    *(undefined1 *)(lVar23 + 0x10) = 0;
                    *(long **)(lVar23 + 0x18) = plVar36;
                    *(undefined2 *)(lVar23 + 0x24) = 0;
                    *(undefined4 *)(lVar23 + 0x20) = 0;
                    uVar18 = (ulong)(uVar21 >> 3) & 0x1ffffffc;
                    *(undefined8 *)(lVar23 + 0x28) = 0;
                    *(undefined8 *)(lVar23 + 0x30) = 0;
                    *(uint *)(lVar30 + uVar18) = *(uint *)(lVar30 + uVar18) | uVar7;
                  }
                  if (*(int *)(lVar23 + 0x20) == 1) goto LAB_109f0738c;
                }
              }
              uVar7 = *(uint *)(plVar28 + 5);
              if ((uVar7 == 0xda) &&
                 ((((*(char *)(lVar22 + 7) == '\x01' && (*(char *)((long)plVar28 + 0x4d) == '\x10'))
                   || ((*(char *)(lVar22 + 8) == '\x01' && (*(char *)((long)plVar28 + 0x4d) == ' '))
                      )) || ((*(char *)(lVar22 + 9) == '\x01' &&
                             (*(char *)((long)plVar28 + 0x4d) == '@')))))) {
                uVar21 = 3;
              }
              else {
                uVar21 = 1;
              }
              if (*(byte *)((long)plVar28 + 0x4d) < 0x40) {
                if (*(byte *)(plVar28[0xd] + 0x1d) < 0x40) goto LAB_109f073b4;
LAB_109f07484:
                bVar6 = false;
              }
              else {
                if (*(byte *)((long)plVar28 + 0x4d) != 0x40) goto LAB_109f07484;
                bVar6 = (*(uint *)(&UNK_110b78544 + lVar34) & 0x86) == 0x80;
              }
              uVar18 = (ulong)(byte)(&UNK_110b78540)[lVar34];
              if (uVar18 != 0) {
                puVar26 = (uint *)(&UNK_110b78558 + lVar34);
                plVar36 = plVar28 + 0xd;
                do {
                  if (*(char *)(*plVar36 + 0x1d) == '@') {
                    bVar6 = (bool)((*puVar26 & 0x86) == 0x80 | bVar6);
                  }
                  puVar26 = puVar26 + 1;
                  uVar18 = uVar18 - 1;
                  plVar36 = plVar36 + 6;
                } while (uVar18 != 0);
              }
              if (bVar6) {
                uVar3 = *(uint *)(lVar22 + 0xb0);
                FUN_109f0dfb0();
                if ((uVar7 & uVar3) != 0) {
                  uVar21 = uVar21 << 2 | uVar21 << 4;
                }
                if ((uVar3 >> 0xe & 1) != 0) {
                  uVar21 = uVar21 * 100;
                  *(undefined1 *)(*(long *)(*plVar10 + 0x60) + 4) = 1;
                }
              }
              else {
                uVar3 = *(uint *)(lVar22 + 0xac);
                uVar8 = uVar7;
                FUN_109f0f400();
                if ((uVar8 & uVar3) != 0) {
                  if ((((uVar7 - 0x123 < 0x29) &&
                       ((1L << ((ulong)(uVar7 - 0x123) & 0x3f) & 0x10000400001U) != 0)) ||
                      (uVar7 == 0x1a4)) || (uVar7 == 0x18e)) {
                    uVar21 = uVar21 * 100;
                  }
                  else {
                    uVar21 = uVar21 | uVar21 << 2;
                  }
                }
              }
            }
            else {
LAB_109f073b0:
              uVar21 = 0;
            }
LAB_109f073b4:
            plVar36 = (long *)*plVar10;
            piVar19 = (int *)plVar36[0xc];
            *piVar19 = *piVar19 + uVar21;
            plVar28 = (long *)*plVar28;
          } while (*plVar28 != 0);
        }
        if (((*(byte *)((long)piVar19 + 0x11) & 1) == 0) &&
           (plVar28 = (long *)plVar37[4], *plVar28 != 0)) {
          do {
            iVar12 = (int)plVar28[3];
            if (iVar12 == 3) {
              if (*(uint *)(plVar28 + 0xc) != 0) {
                uVar18 = 0;
                piVar19 = (int *)(plVar28[0xb] + 0x20);
                do {
                  if (*piVar19 == 0xc) {
                    if (-1 < (int)uVar18) {
                      plVar36 = plVar10;
                      FUN_109f07f04();
                      if (((ulong)plVar36 & 1) != 0) goto LAB_109f0768c;
                      iVar12 = (int)plVar28[3];
                      goto LAB_109f07600;
                    }
                    break;
                  }
                  uVar18 = uVar18 + 1;
                  piVar19 = piVar19 + 10;
                } while (*(uint *)(plVar28 + 0xc) != uVar18);
              }
            }
            else {
LAB_109f07600:
              if (((iVar12 == 4) &&
                  (((iVar12 = (int)plVar28[5], iVar12 == 0x54 || (iVar12 == 0x26f)) ||
                   (iVar12 == 0x112)))) &&
                 ((plVar36 = plVar10, FUN_109f07f04(), ((ulong)plVar36 & 1) != 0 ||
                  (((int)plVar28[5] == 0x54 &&
                   (plVar36 = plVar10, FUN_109f07f04(), ((ulong)plVar36 & 1) != 0)))))) {
LAB_109f0768c:
                plVar36 = (long *)*plVar10;
                *(undefined1 *)(plVar36[0xc] + 0x11) = 1;
                goto LAB_109f07698;
              }
            }
            plVar28 = (long *)*plVar28;
          } while (*plVar28 != 0);
          plVar36 = (long *)*plVar10;
        }
LAB_109f07698:
        FUN_109ecc434();
        plVar28 = plVar36;
        FUN_109ecc644();
      } while (plVar37 != plVar28);
    }
  }
LAB_109f05f20:
  if (plVar38 != (long *)0x0) {
    plVar28 = plVar38 + -6;
    FUN_109f65aa4(plVar28);
    FUN_109f65ae0();
  }
LAB_109f05f3c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  if (*plVar28 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000109f07714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e06d416)[*(uint *)(plVar28 + 3)] * 4 + 0x109f07718))(0x30);
    return;
  }
  return;
}



/* Entry: 109f076bc; end: 109f077c3;  */

void FUN_109f076bc(long *param_1)

{
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000109f07714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e06d416)[*(uint *)(param_1 + 3)] * 4 + 0x109f07718))(0x30);
    return;
  }
  return;
}



/* Entry: 109f077c4; end: 109f07857;  */

void FUN_109f077c4(long param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *(long *)(*param_2 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x18);
  plVar1 = (long *)(*(long *)(*param_2 + 8) + (ulong)uVar2 * 0x40);
  uVar3 = 1 << (ulong)(uVar2 & 0x1f);
  if ((uVar3 & *(uint *)(lVar6 + (ulong)(uVar2 >> 5) * 4)) == 0) {
    plVar1[3] = param_1;
    *(undefined2 *)((long)plVar1 + 0x24) = 0;
    *(undefined4 *)(plVar1 + 4) = 0;
    uVar5 = (ulong)(uVar2 >> 3) & 0x1ffffffc;
    plVar1[5] = 0;
    plVar1[6] = 0;
    *(uint *)(lVar6 + uVar5) = *(uint *)(lVar6 + uVar5) | uVar3;
  }
  if (*(char *)((long)param_2 + 9) == '\x01') {
    *(undefined1 *)((long)plVar1 + 0x25) = 1;
  }
  else if ((char)param_2[1] == '\x01') {
    *(undefined1 *)((long)plVar1 + 0x24) = 1;
  }
  else {
    plVar4 = (long *)(*param_2 + 0x18);
    lVar6 = *plVar4;
    *plVar1 = lVar6;
    plVar1[1] = (long)plVar4;
    *(long **)(lVar6 + 8) = plVar1;
    *plVar4 = (long)plVar1;
  }
  *(undefined1 *)(plVar1 + 2) = 1;
  return;
}



/* Entry: 109f07858; end: 109f0798f;  */

bool FUN_109f07858(long param_1,long param_2)

{
  ulong uVar1;
  bool bVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  if (*(int *)(param_1 + 0x10) == 2) {
LAB_109f0790c:
    bVar2 = false;
  }
  else {
    if (*(int *)(param_1 + 0x10) == 1) {
      puVar3 = *(ulong **)(param_1 + 0x48);
      plVar7 = (long *)*puVar3;
      if (plVar7 == (long *)0x0) {
LAB_109f07914:
        puVar4 = *(undefined8 **)(param_1 + 0x68);
        puVar3 = (ulong *)*puVar4;
        if (puVar3 == (ulong *)0x0) {
          return false;
        }
        FUN_109f07858(puVar4,param_2);
        if (((ulong)puVar4 & 1) == 0) {
          puVar5 = (ulong *)0x0;
          if (*puVar3 != 0) {
            puVar5 = puVar3;
          }
          do {
            bVar2 = puVar5 != (ulong *)0x0;
            if (puVar5 == (ulong *)0x0) {
              return false;
            }
            plVar7 = (long *)*puVar5;
            if (plVar7 == (long *)0x0) {
              plVar8 = (long *)0x0;
            }
            else {
              plVar8 = (long *)0x0;
              if (*plVar7 != 0) {
                plVar8 = plVar7;
              }
            }
            FUN_109f07858(puVar5,param_2);
            uVar1 = (ulong)puVar5 & 1;
            puVar5 = (ulong *)plVar8;
          } while (uVar1 == 0);
          return bVar2;
        }
      }
      else {
        FUN_109f07858(puVar3,param_2);
        if (((ulong)puVar3 & 1) == 0) {
          puVar3 = (ulong *)0;
          if (*plVar7 != 0) {
            puVar3 = (ulong *)plVar7;
          }
          do {
            if (puVar3 == (ulong *)0x0) goto LAB_109f07914;
            plVar7 = (long *)*puVar3;
            if (plVar7 == (long *)0x0) {
              plVar8 = (long *)0x0;
            }
            else {
              plVar8 = (long *)0x0;
              if (*plVar7 != 0) {
                plVar8 = plVar7;
              }
            }
            FUN_109f07858(puVar3,param_2);
            uVar1 = (ulong)puVar3 & 1;
            puVar3 = (ulong *)plVar8;
          } while (uVar1 == 0);
        }
      }
    }
    else if ((((*(long *)(param_1 + 0x20) == param_1 + 0x30) ||
              (lVar6 = *(long *)(param_1 + 0x38), lVar6 == 0)) || (lVar6 == param_2)) ||
            (*(int *)(lVar6 + 0x18) != 6)) goto LAB_109f0790c;
    bVar2 = true;
  }
  return bVar2;
}



/* Entry: 109f07990; end: 109f07a27;  */

void FUN_109f07990(long param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  
  lVar1 = **(long **)(param_1 + 0x18);
  iVar3 = *(int *)(lVar1 + 0x18);
  if ((((iVar3 != 5) && (iVar3 != 4)) && (iVar3 == 0)) &&
     (uVar2 = (ulong)(byte)(&UNK_110b78540)[(ulong)*(uint *)(lVar1 + 0x28) * 0x68], uVar2 != 0)) {
    lVar1 = lVar1 + 0x50;
    do {
      iVar3 = (int)lVar1;
      uVar2 = uVar2 - 1;
      FUN_109f07990();
      if (iVar3 == 0) {
        return;
      }
      lVar1 = lVar1 + 0x30;
    } while (uVar2 != 0);
  }
  return;
}



/* Entry: 109f07a28; end: 109f07cdb;  */

undefined8
FUN_109f07a28(long *param_1,uint param_2,long *param_3,long *param_4,undefined1 *param_5,
             long param_6)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined1 uVar10;
  long lVar11;
  ulong uVar12;
  
  lVar8 = *param_1;
  lVar5 = *(long *)(lVar8 + 0x68);
  lVar6 = (ulong)*(uint *)(lVar8 + 0x28) * 0x68;
  pbVar1 = (byte *)(lVar8 + 0x70) + param_2;
  if ((&UNK_110b78548)[lVar6] != '\0') {
    pbVar1 = (byte *)(lVar8 + 0x70);
  }
  bVar3 = *pbVar1;
  lVar7 = *(long *)(lVar8 + 0x98);
  pbVar1 = (byte *)(lVar8 + 0xa0) + param_2;
  if ((&UNK_110b78549)[lVar6] != '\0') {
    pbVar1 = (byte *)(lVar8 + 0xa0);
  }
  uVar9 = (ulong)*pbVar1;
  lVar8 = *(long *)(param_6 + 8);
  lVar11 = *(long *)(param_6 + 0x10);
  uVar2 = *(uint *)(lVar5 + 0x18);
  lVar6 = lVar8 + (ulong)uVar2 * 0x40;
  uVar4 = 1 << (ulong)(uVar2 & 0x1f);
  if ((uVar4 & *(uint *)(lVar11 + (ulong)(uVar2 >> 5) * 4)) == 0) {
    *(undefined1 *)(lVar6 + 0x10) = 0;
    *(undefined2 *)(lVar6 + 0x24) = 0;
    *(undefined4 *)(lVar6 + 0x20) = 0;
    uVar12 = (ulong)(uVar2 >> 3) & 0x1ffffffc;
    *(undefined8 *)(lVar6 + 0x28) = 0;
    *(undefined8 *)(lVar6 + 0x30) = 0;
    uVar2 = *(uint *)(lVar11 + uVar12);
    *(long *)(lVar6 + 0x18) = lVar5;
    *(uint *)(lVar11 + uVar12) = uVar2 | uVar4;
    lVar8 = *(long *)(param_6 + 8);
    lVar11 = *(long *)(param_6 + 0x10);
  }
  uVar2 = *(uint *)(lVar7 + 0x18);
  lVar8 = lVar8 + (ulong)uVar2 * 0x40;
  uVar4 = 1 << (ulong)(uVar2 & 0x1f);
  if ((uVar4 & *(uint *)(lVar11 + (ulong)(uVar2 >> 5) * 4)) == 0) {
    *(undefined1 *)(lVar8 + 0x10) = 0;
    *(long *)(lVar8 + 0x18) = lVar7;
    *(undefined2 *)(lVar8 + 0x24) = 0;
    *(undefined4 *)(lVar8 + 0x20) = 0;
    uVar12 = (ulong)(uVar2 >> 3) & 0x1ffffffc;
    *(undefined8 *)(lVar8 + 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x30) = 0;
    *(uint *)(lVar11 + uVar12) = *(uint *)(lVar11 + uVar12) | uVar4;
  }
  if (*(int *)(lVar6 + 0x20) == 1) {
    if (*(int *)(**(long **)(*(long *)(lVar6 + 0x28) + 0x18) + 0x18) != 5) {
      return 0;
    }
    uVar10 = 1;
    lVar6 = lVar7;
    uVar12 = uVar9;
    lVar7 = lVar5;
    uVar9 = (ulong)bVar3;
  }
  else {
    if (*(int *)(lVar8 + 0x20) != 1) {
      return 0;
    }
    uVar10 = 0;
    lVar6 = lVar5;
    uVar12 = (ulong)bVar3;
    if (*(int *)(**(long **)(*(long *)(lVar8 + 0x28) + 0x18) + 0x18) != 5) {
      return 0;
    }
  }
  *param_3 = lVar7;
  param_3[1] = uVar9;
  *param_4 = lVar6;
  param_4[1] = uVar12;
  *param_5 = uVar10;
  return 1;
}



/* Entry: 109f07cdc; end: 109f07f03;  */

undefined8 FUN_109f07cdc(long *param_1,long *param_2,ulong param_3,long param_4,long param_5)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  byte bVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  bool bVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong auStack_170 [16];
  long alStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *param_2;
  plVar6 = (long *)(ulong)*(uint *)(lVar13 + 0x28);
  lVar11 = (long)plVar6 * 0x68;
  plVar8 = param_1;
  if ((&UNK_110b78541)[lVar11] != '\0') {
LAB_109f07d34:
    iVar9 = (int)param_3;
    uVar14 = 0;
    param_1 = plVar8;
    goto LAB_109f07ec4;
  }
  if (((&UNK_110b78544)[lVar11] & 0x79) == 0) {
    if ((&UNK_110b78540)[(long)plVar6 * 0x68] != '\0') goto LAB_109f07db0;
  }
  else {
    uVar10 = (ulong)(byte)(&UNK_110b78540)[lVar11];
    if (uVar10 != 0) {
      do {
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
LAB_109f07db0:
      uVar10 = 0;
      uVar15 = param_3 & 0xffffffff;
      do {
        lVar11 = *param_2 + uVar10 * 0x30;
        plVar8 = *(long **)(lVar11 + 0x68);
        pbVar1 = (byte *)(lVar11 + 0x70);
        pbVar3 = pbVar1 + uVar15;
        if ((&UNK_110b78548)[(ulong)*(uint *)(*param_2 + 0x28) * 0x68 + uVar10] != '\0') {
          pbVar3 = pbVar1;
        }
        bVar4 = *pbVar3;
        param_3 = (ulong)bVar4;
        plVar7 = alStack_f0 + uVar10;
        auStack_170[uVar10] = (ulong)plVar7;
        iVar9 = *(int *)(*plVar8 + 0x18);
        if (iVar9 == 5) {
          lVar11 = *(long *)(*plVar8 + param_3 * 8 + 0x48);
LAB_109f07e8c:
          *plVar7 = lVar11;
        }
        else {
          lVar11 = 0;
          bVar5 = true;
          do {
            bVar12 = bVar5;
            puVar2 = (undefined8 *)(param_4 + lVar11 * 0x10);
            if ((long *)*puVar2 == plVar8 && *(uint *)(puVar2 + 1) == (uint)bVar4) {
              lVar11 = *(long *)(param_5 + lVar11 * 8);
              goto LAB_109f07e8c;
            }
            lVar11 = 1;
            bVar5 = false;
          } while (bVar12);
          if ((iVar9 != 0) || (FUN_109f07cdc(), plVar6 = plVar7, (int)plVar7 == 0))
          goto LAB_109f07d34;
          plVar6 = (long *)(ulong)*(uint *)(lVar13 + 0x28);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < (byte)(&UNK_110b78540)[(long)plVar6 * 0x68]);
    }
  }
  uVar14 = 1;
  iVar9 = 1;
  FUN_109ed0944();
LAB_109f07ec4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uVar14;
  }
  ___stack_chk_fail();
  plVar8 = plVar6;
  func_0x000109f07c0c();
  if (((int)plVar8 == 0) ||
     ((((int)plVar8 != *(int *)(*(long *)(*plVar6 + 0x60) + 0xc) ||
        (*(uint *)((long)param_1 + 0x2c) & 0xfff9fff3) != 0 &&
       ((*(uint *)((long)param_1 + 0x2c) & (*(uint *)(plVar6 + 5) ^ 0xffffffff)) != 0)) &&
      ((iVar9 == 0 || ((*(byte *)((long)plVar6 + 0x2c) & 1) == 0)))))) {
    uVar14 = 0;
  }
  else {
    uVar14 = 1;
  }
  return uVar14;
}



/* Entry: 109f07f04; end: 109f07f87;  */

undefined8 FUN_109f07f04(long *param_1,long param_2,int param_3)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = param_1;
  func_0x000109f07c0c(param_1,param_2,0);
  if (((int)plVar1 == 0) ||
     ((((int)plVar1 != *(int *)(*(long *)(*param_1 + 0x60) + 0xc) ||
        (*(uint *)(param_2 + 0x2c) & 0xfff9fff3) != 0 &&
       ((*(uint *)(param_2 + 0x2c) & (*(uint *)(param_1 + 5) ^ 0xffffffff)) != 0)) &&
      ((param_3 == 0 || ((*(byte *)((long)param_1 + 0x2c) & 1) == 0)))))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 109f07f88; end: 109f094ab;  */

undefined4 FUN_109f07f88(long param_1)

{
  char cVar1;
  undefined1 uVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long *plVar17;
  byte bVar18;
  uint uVar19;
  long lVar20;
  long *plVar21;
  undefined4 uVar22;
  int iVar23;
  long *plVar24;
  undefined4 uVar25;
  uint uVar26;
  long lVar27;
  ulong uVar28;
  long *plVar29;
  ulong uVar30;
  long *plVar31;
  bool bVar32;
  ulong uVar33;
  ulong uVar34;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  ulong uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  
  lVar20 = *(long *)(param_1 + 0x28);
  if (((((*(byte *)(lVar20 + 0x11) & 1) != 0) || ((*(byte *)(lVar20 + 0x12) & 1) != 0)) ||
      ((*(byte *)(lVar20 + 0x18) & 1) != 0)) || (*(char *)(lVar20 + 0x24) == '\x01')) {
    plVar24 = *(long **)(param_1 + 0x178);
    for (plVar21 = (long *)**(long **)(param_1 + 0x178); plVar21 != (long *)0x0;
        plVar21 = (long *)*plVar21) {
      lVar20 = plVar24[6];
      if (lVar20 != 0) {
        uVar25 = 0;
        goto LAB_109f0800c;
      }
      plVar24 = plVar21;
    }
  }
  return 0;
LAB_109f0800c:
  uStack_88 = 0;
  plStack_80 = (long *)0x0;
  puStack_70 = *(undefined8 **)(*(long *)(lVar20 + 0x20) + 0x18);
  uStack_78 = 0;
  lVar27 = *(long *)(lVar20 + 0x30);
  if (lVar27 == 0) {
LAB_109f09454:
    uVar19 = 0xfffffff7;
  }
  else {
    lVar4 = lVar27;
    lStack_68 = lVar20;
    FUN_109ecc434();
    bVar32 = false;
    do {
      lVar5 = lVar4;
      plVar31 = *(long **)(lVar27 + 0x20);
      plVar21 = (long *)*plVar31;
      if (plVar21 != (long *)0x0) {
        do {
          plVar17 = (long *)0x0;
          plVar29 = plVar31;
          if (*plVar21 != 0) {
            plVar17 = plVar21;
          }
          do {
            plVar31 = plVar17;
            puVar6 = puStack_70;
            if ((int)plVar29[3] == 0) {
              uStack_88 = 2;
              uVar3 = *(ushort *)((long)plVar29 + 0x2c);
              uStack_78 = (ulong)(CONCAT24(uVar3 >> 3,(int)CONCAT71(uStack_78._1_7_,(char)uVar3)) &
                                 0xffffffffff01) & 0x1ffffffffff;
              iVar23 = (int)plVar29[5];
              bVar18 = 0;
              plStack_80 = plVar29;
              if (iVar23 < 0xe5) {
                if (iVar23 == 0x74) {
                  if (*(char *)(puStack_70[5] + 0x12) != '\x01') goto LAB_109f09408;
                  puVar6 = &uStack_88;
                  func_0x000109ece464(puVar6,plVar29,0);
                  puVar7 = puStack_70;
                  bVar18 = *(byte *)((long)puVar6 + 0x1d);
                  puVar8 = (undefined8 *)*puStack_70;
                  FUN_109f6600c(puVar8,0x50,8);
                  if (puVar8 != (undefined8 *)0x0) {
                    puVar8[7] = 0;
                    puVar8[6] = 0;
                    puVar8[9] = 0;
                    puVar8[8] = 0;
                    puVar8[3] = 0;
                    puVar8[2] = 0;
                    puVar8[5] = 0;
                    puVar8[4] = 0;
                    puVar8[1] = 0;
                    *puVar8 = 0;
                  }
                  *(undefined4 *)(puVar8 + 3) = 5;
                  puVar8[1] = 0;
                  puVar8[2] = 0;
                  *puVar8 = 0;
                  FUN_109ecb048(puVar8,puVar8 + 5,1,0x20);
                  puVar8[9] = 1;
                  FUN_109ecb4f0(uStack_88,plStack_80,puVar8);
                  uStack_88 = 3;
                  puVar9 = (undefined8 *)*puVar7;
                  plStack_80 = puVar8;
                  FUN_109f6600c(puVar9,0x50,8);
                  if (puVar9 != (undefined8 *)0x0) {
                    puVar9[7] = 0;
                    puVar9[6] = 0;
                    puVar9[9] = 0;
                    puVar9[8] = 0;
                    puVar9[3] = 0;
                    puVar9[2] = 0;
                    puVar9[5] = 0;
                    puVar9[4] = 0;
                    puVar9[1] = 0;
                    *puVar9 = 0;
                  }
                  *(undefined4 *)(puVar9 + 3) = 5;
                  puVar9[1] = 0;
                  puVar9[2] = 0;
                  *puVar9 = 0;
                  FUN_109ecb048(puVar9,puVar9 + 5,1,0x20);
                  puVar9[9] = 2;
                  FUN_109ecb4f0(3,puVar8,puVar9);
                  uStack_88 = 3;
                  puVar10 = (undefined8 *)*puVar7;
                  plStack_80 = puVar9;
                  FUN_109f6600c(puVar10,0x50,8);
                  if (puVar10 != (undefined8 *)0x0) {
                    puVar10[7] = 0;
                    puVar10[6] = 0;
                    puVar10[9] = 0;
                    puVar10[8] = 0;
                    puVar10[3] = 0;
                    puVar10[2] = 0;
                    puVar10[5] = 0;
                    puVar10[4] = 0;
                    puVar10[1] = 0;
                    *puVar10 = 0;
                  }
                  *(undefined4 *)(puVar10 + 3) = 5;
                  puVar10[1] = 0;
                  puVar10[2] = 0;
                  *puVar10 = 0;
                  FUN_109ecb048(puVar10,puVar10 + 5,1,0x20);
                  puVar10[9] = 4;
                  FUN_109ecb4f0(3,puVar9,puVar10);
                  uStack_88 = 3;
                  puVar11 = (undefined8 *)*puVar7;
                  plStack_80 = puVar10;
                  FUN_109f6600c(puVar11,0x50,8);
                  if (puVar11 != (undefined8 *)0x0) {
                    puVar11[7] = 0;
                    puVar11[6] = 0;
                    puVar11[9] = 0;
                    puVar11[8] = 0;
                    puVar11[3] = 0;
                    puVar11[2] = 0;
                    puVar11[5] = 0;
                    puVar11[4] = 0;
                    puVar11[1] = 0;
                    *puVar11 = 0;
                  }
                  uVar19 = (uint)bVar18;
                  *(undefined4 *)(puVar11 + 3) = 5;
                  puVar11[1] = 0;
                  puVar11[2] = 0;
                  *puVar11 = 0;
                  FUN_109ecb048(puVar11,puVar11 + 5,1,0x20);
                  puVar11[9] = (ulong)(uVar19 - 8);
                  FUN_109ecb4f0(3,puVar10,puVar11);
                  uVar19 = (uVar19 & 0xaaaaaaaa) >> 1 | (uVar19 & 0x55555555) << 1;
                  uVar19 = (uVar19 & 0xcccccccc) >> 2 | (uVar19 & 0x33333333) << 2;
                  lVar27 = LZCOUNT((uVar19 >> 4 | (uVar19 & 0xf0f0f0f) << 4) << 0x18);
                  uVar28 = *(ulong *)(&UNK_10e06d428 + lVar27 * 8);
                  uStack_88 = 3;
                  uVar30 = *(ulong *)(&UNK_10e06d460 + lVar27 * 8);
                  uVar33 = *(ulong *)(&UNK_10e06d498 + lVar27 * 8);
                  puVar12 = (undefined8 *)*puVar7;
                  plStack_80 = puVar11;
                  FUN_109f6600c(puVar12,0x50,8);
                  if (puVar12 != (undefined8 *)0x0) {
                    puVar12[7] = 0;
                    puVar12[6] = 0;
                    puVar12[9] = 0;
                    puVar12[8] = 0;
                    puVar12[3] = 0;
                    puVar12[2] = 0;
                    puVar12[5] = 0;
                    puVar12[4] = 0;
                    puVar12[1] = 0;
                    *puVar12 = 0;
                  }
                  *(undefined4 *)(puVar12 + 3) = 5;
                  puVar12[1] = 0;
                  puVar12[2] = 0;
                  *puVar12 = 0;
                  FUN_109ecb048(puVar12,puVar12 + 5,1,bVar18);
                  puVar12[9] = uVar30 | uVar28 | uVar33;
                  FUN_109ecb4f0(3,puVar11,puVar12);
                  uVar28 = *(ulong *)(&UNK_10e06d4d0 + lVar27 * 8);
                  uStack_88 = 3;
                  uVar33 = *(ulong *)(&UNK_10e06d508 + lVar27 * 8);
                  uVar30 = *(ulong *)(&UNK_10e06d540 + lVar27 * 8);
                  puVar13 = (undefined8 *)*puVar7;
                  plStack_80 = puVar12;
                  FUN_109f6600c(puVar13,0x50,8);
                  if (puVar13 != (undefined8 *)0x0) {
                    puVar13[7] = 0;
                    puVar13[6] = 0;
                    puVar13[9] = 0;
                    puVar13[8] = 0;
                    puVar13[3] = 0;
                    puVar13[2] = 0;
                    puVar13[5] = 0;
                    puVar13[4] = 0;
                    puVar13[1] = 0;
                    *puVar13 = 0;
                  }
                  *(undefined4 *)(puVar13 + 3) = 5;
                  puVar13[1] = 0;
                  puVar13[2] = 0;
                  *puVar13 = 0;
                  FUN_109ecb048(puVar13,puVar13 + 5,1,bVar18);
                  puVar13[9] = uVar33 | uVar28 | uVar30;
                  FUN_109ecb4f0(3,puVar12,puVar13);
                  uVar28 = *(ulong *)(&UNK_10e06d578 + lVar27 * 8);
                  uStack_88 = 3;
                  uVar33 = *(ulong *)(&UNK_10e06d5b0 + lVar27 * 8);
                  uVar30 = *(ulong *)(&UNK_10e06d5e8 + lVar27 * 8);
                  puVar14 = (undefined8 *)*puVar7;
                  plStack_80 = puVar13;
                  FUN_109f6600c(puVar14,0x50,8);
                  if (puVar14 != (undefined8 *)0x0) {
                    puVar14[7] = 0;
                    puVar14[6] = 0;
                    puVar14[9] = 0;
                    puVar14[8] = 0;
                    puVar14[3] = 0;
                    puVar14[2] = 0;
                    puVar14[5] = 0;
                    puVar14[4] = 0;
                    puVar14[1] = 0;
                    *puVar14 = 0;
                  }
                  *(undefined4 *)(puVar14 + 3) = 5;
                  puVar14[1] = 0;
                  puVar14[2] = 0;
                  *puVar14 = 0;
                  FUN_109ecb048(puVar14,puVar14 + 5,1,bVar18);
                  puVar14[9] = uVar33 | uVar28 | uVar30;
                  FUN_109ecb4f0(3,puVar13,puVar14);
                  uStack_88 = 3;
                  uVar28 = *(ulong *)(&UNK_10e06d620 + lVar27 * 8);
                  uVar30 = *(ulong *)(&UNK_10e06d658 + lVar27 * 8);
                  plVar21 = (long *)*puVar7;
                  plStack_80 = puVar14;
                  FUN_109f6600c(plVar21,0x50,8);
                  if (plVar21 != (long *)0x0) {
                    plVar21[7] = 0;
                    plVar21[6] = 0;
                    plVar21[9] = 0;
                    plVar21[8] = 0;
                    plVar21[3] = 0;
                    plVar21[2] = 0;
                    plVar21[5] = 0;
                    plVar21[4] = 0;
                    plVar21[1] = 0;
                    *plVar21 = 0;
                  }
                  *(undefined4 *)(plVar21 + 3) = 5;
                  plVar21[1] = 0;
                  plVar21[2] = 0;
                  *plVar21 = 0;
                  FUN_109ecb048(plVar21,plVar21 + 5,1,bVar18);
                  plVar21[9] = uVar30 | uVar28;
                  FUN_109ecb4f0(3,puVar14,plVar21);
                  uStack_88 = 3;
                  puVar7 = &uStack_88;
                  plStack_80 = plVar21;
                  FUN_109ece1b0(puVar7,0x1c0,puVar6,puVar8 + 5);
                  puVar8 = &uStack_88;
                  FUN_109ece1b0(puVar8,0x120,puVar7,puVar13 + 5);
                  puVar7 = &uStack_88;
                  FUN_109ece1b0(puVar7,0x150,puVar6,puVar8);
                  puVar6 = &uStack_88;
                  FUN_109ece1b0(puVar6,0x120,puVar7,puVar12 + 5);
                  puVar8 = &uStack_88;
                  FUN_109ece1b0(puVar8,0x1c0,puVar7,puVar9 + 5);
                  puVar7 = &uStack_88;
                  FUN_109ece1b0(puVar7,0x120,puVar8,puVar12 + 5);
                  puVar8 = &uStack_88;
                  FUN_109ece1b0(puVar8,0x11d,puVar6,puVar7);
                  puVar6 = &uStack_88;
                  FUN_109ece1b0(puVar6,0x1c0,puVar8,puVar10 + 5);
                  puVar7 = &uStack_88;
                  FUN_109ece1b0(puVar7,0x11d,puVar8,puVar6);
                  puVar6 = &uStack_88;
                  FUN_109ece1b0(puVar6,0x120,puVar7,puVar14 + 5);
                  puVar8 = &uStack_88;
                  FUN_109ece1b0(puVar8,0x13b,puVar6,plVar21 + 5);
                  puVar7 = &uStack_88;
                  FUN_109ece1b0(puVar7,0x1c0,puVar8,puVar11 + 5);
                  if (*(char *)((long)puVar7 + 0x1d) != ' ') {
                    puVar6 = &uStack_88;
                    FUN_109ece168(puVar6,0x184,puVar7);
                    puVar7 = puVar6;
                    goto joined_r0x000109f09394;
                  }
                }
                else {
                  if (iVar23 != 0x76) {
                    if (iVar23 != 0xe3) goto LAB_109f0940c;
                    goto LAB_109f08204;
                  }
                  if (*(char *)(puStack_70[5] + 0x11) != '\x01') goto LAB_109f09408;
                  puVar7 = (undefined8 *)*puStack_70;
                  FUN_109f6600c(puVar7,0x50,8);
                  if (puVar7 != (undefined8 *)0x0) {
                    puVar7[7] = 0;
                    puVar7[6] = 0;
                    puVar7[9] = 0;
                    puVar7[8] = 0;
                    puVar7[3] = 0;
                    puVar7[2] = 0;
                    puVar7[5] = 0;
                    puVar7[4] = 0;
                    puVar7[1] = 0;
                    *puVar7 = 0;
                  }
                  *(undefined4 *)(puVar7 + 3) = 5;
                  puVar7[1] = 0;
                  puVar7[2] = 0;
                  *puVar7 = 0;
                  FUN_109ecb048(puVar7,puVar7 + 5,1,0x20);
                  puVar7[9] = 1;
                  FUN_109ecb4f0(2,plVar29,puVar7);
                  uStack_88 = 3;
                  puVar8 = (undefined8 *)*puVar6;
                  plStack_80 = puVar7;
                  FUN_109f6600c(puVar8,0x50,8);
                  if (puVar8 != (undefined8 *)0x0) {
                    puVar8[7] = 0;
                    puVar8[6] = 0;
                    puVar8[9] = 0;
                    puVar8[8] = 0;
                    puVar8[3] = 0;
                    puVar8[2] = 0;
                    puVar8[5] = 0;
                    puVar8[4] = 0;
                    puVar8[1] = 0;
                    *puVar8 = 0;
                  }
                  *(undefined4 *)(puVar8 + 3) = 5;
                  puVar8[1] = 0;
                  puVar8[2] = 0;
                  *puVar8 = 0;
                  FUN_109ecb048(puVar8,puVar8 + 5,1,0x20);
                  puVar8[9] = 2;
                  FUN_109ecb4f0(3,puVar7,puVar8);
                  uStack_88 = 3;
                  puVar9 = (undefined8 *)*puVar6;
                  plStack_80 = puVar8;
                  FUN_109f6600c(puVar9,0x50,8);
                  if (puVar9 != (undefined8 *)0x0) {
                    puVar9[7] = 0;
                    puVar9[6] = 0;
                    puVar9[9] = 0;
                    puVar9[8] = 0;
                    puVar9[3] = 0;
                    puVar9[2] = 0;
                    puVar9[5] = 0;
                    puVar9[4] = 0;
                    puVar9[1] = 0;
                    *puVar9 = 0;
                  }
                  *(undefined4 *)(puVar9 + 3) = 5;
                  puVar9[1] = 0;
                  puVar9[2] = 0;
                  *puVar9 = 0;
                  FUN_109ecb048(puVar9,puVar9 + 5,1,0x20);
                  puVar9[9] = 4;
                  FUN_109ecb4f0(3,puVar8,puVar9);
                  uStack_88 = 3;
                  puVar10 = (undefined8 *)*puVar6;
                  plStack_80 = puVar9;
                  FUN_109f6600c(puVar10,0x50,8);
                  if (puVar10 != (undefined8 *)0x0) {
                    puVar10[7] = 0;
                    puVar10[6] = 0;
                    puVar10[9] = 0;
                    puVar10[8] = 0;
                    puVar10[3] = 0;
                    puVar10[2] = 0;
                    puVar10[5] = 0;
                    puVar10[4] = 0;
                    puVar10[1] = 0;
                    *puVar10 = 0;
                  }
                  *(undefined4 *)(puVar10 + 3) = 5;
                  puVar10[1] = 0;
                  puVar10[2] = 0;
                  *puVar10 = 0;
                  FUN_109ecb048(puVar10,puVar10 + 5,1,0x20);
                  puVar10[9] = 8;
                  FUN_109ecb4f0(3,puVar9,puVar10);
                  uStack_88 = 3;
                  puVar11 = (undefined8 *)*puVar6;
                  plStack_80 = puVar10;
                  FUN_109f6600c(puVar11,0x50,8);
                  if (puVar11 != (undefined8 *)0x0) {
                    puVar11[7] = 0;
                    puVar11[6] = 0;
                    puVar11[9] = 0;
                    puVar11[8] = 0;
                    puVar11[3] = 0;
                    puVar11[2] = 0;
                    puVar11[5] = 0;
                    puVar11[4] = 0;
                    puVar11[1] = 0;
                    *puVar11 = 0;
                  }
                  *(undefined4 *)(puVar11 + 3) = 5;
                  puVar11[1] = 0;
                  puVar11[2] = 0;
                  *puVar11 = 0;
                  FUN_109ecb048(puVar11,puVar11 + 5,1,0x20);
                  puVar11[9] = 0x10;
                  FUN_109ecb4f0(3,puVar10,puVar11);
                  uStack_88 = 3;
                  puVar12 = (undefined8 *)*puVar6;
                  plStack_80 = puVar11;
                  FUN_109f6600c(puVar12,0x50,8);
                  if (puVar12 != (undefined8 *)0x0) {
                    puVar12[7] = 0;
                    puVar12[6] = 0;
                    puVar12[9] = 0;
                    puVar12[8] = 0;
                    puVar12[3] = 0;
                    puVar12[2] = 0;
                    puVar12[5] = 0;
                    puVar12[4] = 0;
                    puVar12[1] = 0;
                    *puVar12 = 0;
                  }
                  *(undefined4 *)(puVar12 + 3) = 5;
                  puVar12[1] = 0;
                  puVar12[2] = 0;
                  *puVar12 = 0;
                  FUN_109ecb048(puVar12,puVar12 + 5,1,0x20);
                  puVar12[9] = 0x33333333;
                  FUN_109ecb4f0(3,puVar11,puVar12);
                  uStack_88 = 3;
                  puVar13 = (undefined8 *)*puVar6;
                  plStack_80 = puVar12;
                  FUN_109f6600c(puVar13,0x50,8);
                  if (puVar13 != (undefined8 *)0x0) {
                    puVar13[7] = 0;
                    puVar13[6] = 0;
                    puVar13[9] = 0;
                    puVar13[8] = 0;
                    puVar13[3] = 0;
                    puVar13[2] = 0;
                    puVar13[5] = 0;
                    puVar13[4] = 0;
                    puVar13[1] = 0;
                    *puVar13 = 0;
                  }
                  *(undefined4 *)(puVar13 + 3) = 5;
                  puVar13[1] = 0;
                  puVar13[2] = 0;
                  *puVar13 = 0;
                  FUN_109ecb048(puVar13,puVar13 + 5,1,0x20);
                  puVar13[9] = 0x55555555;
                  FUN_109ecb4f0(3,puVar12,puVar13);
                  uStack_88 = 3;
                  puVar14 = (undefined8 *)*puVar6;
                  plStack_80 = puVar13;
                  FUN_109f6600c(puVar14,0x50,8);
                  if (puVar14 != (undefined8 *)0x0) {
                    puVar14[7] = 0;
                    puVar14[6] = 0;
                    puVar14[9] = 0;
                    puVar14[8] = 0;
                    puVar14[3] = 0;
                    puVar14[2] = 0;
                    puVar14[5] = 0;
                    puVar14[4] = 0;
                    puVar14[1] = 0;
                    *puVar14 = 0;
                  }
                  *(undefined4 *)(puVar14 + 3) = 5;
                  puVar14[1] = 0;
                  puVar14[2] = 0;
                  *puVar14 = 0;
                  FUN_109ecb048(puVar14,puVar14 + 5,1,0x20);
                  puVar14[9] = 0xf0f0f0f;
                  FUN_109ecb4f0(3,puVar13,puVar14);
                  uStack_88 = 3;
                  plVar21 = (long *)*puVar6;
                  plStack_80 = puVar14;
                  FUN_109f6600c(plVar21,0x50,8);
                  if (plVar21 != (long *)0x0) {
                    plVar21[7] = 0;
                    plVar21[6] = 0;
                    plVar21[9] = 0;
                    plVar21[8] = 0;
                    plVar21[3] = 0;
                    plVar21[2] = 0;
                    plVar21[5] = 0;
                    plVar21[4] = 0;
                    plVar21[1] = 0;
                    *plVar21 = 0;
                  }
                  *(undefined4 *)(plVar21 + 3) = 5;
                  plVar21[1] = 0;
                  plVar21[2] = 0;
                  *plVar21 = 0;
                  FUN_109ecb048(plVar21,plVar21 + 5,1,0x20);
                  plVar21[9] = 0xff00ff;
                  FUN_109ecb4f0(3,puVar14,plVar21);
                  uStack_88 = 3;
                  puVar6 = &uStack_88;
                  plStack_80 = plVar21;
                  func_0x000109ece464(puVar6,plVar29,0);
                  puVar15 = &uStack_88;
                  FUN_109ece1b0(puVar15,0x1c0,puVar6,puVar7 + 5);
                  puVar16 = &uStack_88;
                  FUN_109ece1b0(puVar16,0x120,puVar15,puVar13 + 5);
                  puVar15 = &uStack_88;
                  FUN_109ece1b0(puVar15,0x120,puVar6,puVar13 + 5);
                  puVar6 = &uStack_88;
                  FUN_109ece1b0(puVar6,0x14d,puVar15,puVar7 + 5);
                  puVar7 = &uStack_88;
                  FUN_109ece1b0(puVar7,0x14a,puVar16,puVar6);
                  puVar6 = &uStack_88;
                  FUN_109ece1b0(puVar6,0x1c0,puVar7,puVar8 + 5);
                  puVar13 = &uStack_88;
                  FUN_109ece1b0(puVar13,0x120,puVar6,puVar12 + 5);
                  puVar6 = &uStack_88;
                  FUN_109ece1b0(puVar6,0x120,puVar7,puVar12 + 5);
                  puVar7 = &uStack_88;
                  FUN_109ece1b0(puVar7,0x14d,puVar6,puVar8 + 5);
                  puVar6 = &uStack_88;
                  FUN_109ece1b0(puVar6,0x14a,puVar13,puVar7);
                  puVar7 = &uStack_88;
                  FUN_109ece1b0(puVar7,0x1c0,puVar6,puVar9 + 5);
                  puVar8 = &uStack_88;
                  FUN_109ece1b0(puVar8,0x120,puVar7,puVar14 + 5);
                  puVar7 = &uStack_88;
                  FUN_109ece1b0(puVar7,0x120,puVar6,puVar14 + 5);
                  puVar6 = &uStack_88;
                  FUN_109ece1b0(puVar6,0x14d,puVar7,puVar9 + 5);
                  puVar7 = &uStack_88;
                  FUN_109ece1b0(puVar7,0x14a,puVar8,puVar6);
                  puVar6 = &uStack_88;
                  FUN_109ece1b0(puVar6,0x1c0,puVar7,puVar10 + 5);
                  puVar8 = &uStack_88;
                  FUN_109ece1b0(puVar8,0x120,puVar6,plVar21 + 5);
                  puVar6 = &uStack_88;
                  FUN_109ece1b0(puVar6,0x120,puVar7,plVar21 + 5);
                  puVar7 = &uStack_88;
                  FUN_109ece1b0(puVar7,0x14d,puVar6,puVar10 + 5);
                  puVar6 = &uStack_88;
                  FUN_109ece1b0(puVar6,0x14a,puVar8,puVar7);
                  puVar8 = &uStack_88;
                  FUN_109ece1b0(puVar8,0x1c0,puVar6,puVar11 + 5);
                  puVar9 = &uStack_88;
                  FUN_109ece1b0(puVar9,0x14d,puVar6,puVar11 + 5);
                  puVar7 = &uStack_88;
                  FUN_109ece1b0(puVar7,0x14a,puVar8,puVar9);
joined_r0x000109f09394:
                  if (puVar7 == (undefined8 *)0x0) goto LAB_109f09408;
                }
LAB_109f09398:
                plVar21 = plVar29 + 6;
                if ((long *)plVar29[8] + -1 != plVar21) {
                  plVar17 = (long *)plVar29[8];
                  do {
                    lVar27 = *plVar17;
                    plVar29 = (long *)plVar17[1];
                    *(long **)(lVar27 + 8) = plVar29;
                    *plVar29 = lVar27;
                    plVar17[1] = (long)(puVar7 + 1);
                    plVar17[2] = (long)puVar7;
                    *plVar17 = 0;
                    lVar27 = puVar7[1];
                    *plVar17 = lVar27;
                    *(long **)(lVar27 + 8) = plVar17;
                    puVar7[1] = plVar17;
                    plVar17 = plVar29;
                  } while (plVar29 + -1 != plVar21);
                }
                FUN_109ecb9c0(*plVar21);
                bVar18 = 1;
              }
              else if (iVar23 == 0xe5) {
LAB_109f08204:
                if (*(char *)(puStack_70[5] + 0x24) == '\x01') {
                  cVar1 = *(char *)((long)plVar29 + 0x4d);
                  if (((((uVar3 >> 3 & 1) != 0) && (cVar1 == '\x10')) ||
                      (((uVar3 >> 4 & 1) != 0 && (cVar1 == ' ')))) ||
                     ((bVar18 = 0, (uVar3 >> 5 & 1) != 0 && (cVar1 == '@')))) {
                    puVar8 = &uStack_88;
                    func_0x000109ece464(puVar8,plVar29,0);
                    puVar9 = &uStack_88;
                    func_0x000109ece464(puVar9,plVar29,1);
                    iVar23 = (int)plVar29[5];
                    uVar22 = 0x137;
                    if (iVar23 != 0xe3) {
                      uVar22 = 0x138;
                      iVar23 = 0xe5;
                    }
                    puVar6 = &uStack_88;
                    FUN_109ece1b0(puVar6,uVar22,puVar8,puVar9);
                    uStack_78 = uStack_78 & 0xfffffff8ffffffff;
                    puVar7 = &uStack_88;
                    FUN_109ece1b0(puVar7,iVar23,puVar8,puVar9);
                    uStack_78 = (ulong)CONCAT24(*(ushort *)((long)plVar29 + 0x2c) >> 3,
                                                (undefined4)uStack_78) & 0x1ffffffffff;
                    puStack_90 = &uStack_88;
                    FUN_109ece1b0(puStack_90,0xc0,puVar8,puVar9);
LAB_109f09388:
                    puVar8 = &uStack_88;
                    func_0x000109ece210(puVar8,0x71,puStack_90,puVar6,puVar7);
                    puVar7 = puVar8;
                    goto joined_r0x000109f09394;
                  }
                }
                else {
LAB_109f09408:
                  bVar18 = 0;
                }
              }
              else if ((iVar23 == 0x140) || (iVar23 == 0x1a9)) {
                if (*(char *)(puStack_70[5] + 0x18) == '\x01') {
                  puVar6 = &uStack_88;
                  func_0x000109ece464(puVar6,plVar29,0);
                  puVar7 = &uStack_88;
                  func_0x000109ece464(puVar7,plVar29,1);
                  puVar8 = puStack_70;
                  bVar18 = *(byte *)((long)puVar6 + 0x1d);
                  if (0x1f < bVar18) {
                    puVar9 = (undefined8 *)*puStack_70;
                    FUN_109f6600c(puVar9,0x50,8);
                    if (puVar9 != (undefined8 *)0x0) {
                      puVar9[7] = 0;
                      puVar9[6] = 0;
                      puVar9[9] = 0;
                      puVar9[8] = 0;
                      puVar9[3] = 0;
                      puVar9[2] = 0;
                      puVar9[5] = 0;
                      puVar9[4] = 0;
                      puVar9[1] = 0;
                      *puVar9 = 0;
                    }
                    *(undefined4 *)(puVar9 + 3) = 5;
                    puVar9[1] = 0;
                    puVar9[2] = 0;
                    *puVar9 = 0;
                    FUN_109ecb048(puVar9,puVar9 + 5,1,0x20);
                    puVar9[9] = (ulong)(bVar18 >> 1);
                    FUN_109ecb4f0(uStack_88,plStack_80,puVar9);
                    uStack_88 = 3;
                    bVar18 = *(byte *)((long)puVar6 + 0x1d);
                    uVar28 = ~(-1L << ((ulong)(bVar18 >> 1) & 0x3f));
                    uVar26 = (uint)bVar18;
                    uVar19 = (uVar26 & 0xaaaaaaaa) >> 1 | (uVar26 & 0x55555555) << 1;
                    uVar19 = (uVar19 & 0xcccccccc) >> 2 | (uVar19 & 0x33333333) << 2;
                    uVar19 = (uint)LZCOUNT((uVar19 >> 4 | (uVar19 & 0xf0f0f0f) << 4) << 0x18);
                    if (uVar19 < 4) {
                      uVar34 = 0;
                      uVar30 = 0;
                      uVar33 = 0;
                      if (uVar19 == 0) {
                        uVar34 = 0;
                        uVar28 = (ulong)(1 < uVar26);
                        uVar30 = 0;
                        uVar33 = 0;
                      }
                    }
                    else {
                      uVar30 = uVar28;
                      if (uVar19 == 4) {
                        uVar34 = 0;
                        uVar33 = 0;
                      }
                      else {
                        uVar33 = uVar28;
                        if (uVar19 == 5) {
                          uVar34 = 0;
                        }
                        else {
                          uVar34 = uVar28 & 0x7fffffff00000000;
                        }
                      }
                    }
                    plVar21 = (long *)*puVar8;
                    plStack_80 = puVar9;
                    FUN_109f6600c(plVar21,0x50,8);
                    if (plVar21 != (long *)0x0) {
                      plVar21[7] = 0;
                      plVar21[6] = 0;
                      plVar21[9] = 0;
                      plVar21[8] = 0;
                      plVar21[3] = 0;
                      plVar21[2] = 0;
                      plVar21[5] = 0;
                      plVar21[4] = 0;
                      plVar21[1] = 0;
                      *plVar21 = 0;
                    }
                    *(undefined4 *)(plVar21 + 3) = 5;
                    plVar21[1] = 0;
                    plVar21[2] = 0;
                    *plVar21 = 0;
                    FUN_109ecb048(plVar21,plVar21 + 5,1,bVar18);
                    plVar21[9] = uVar34 | uVar33 & 0xffff0000 | uVar30 & 0xff00 | uVar28 & 0xff;
                    FUN_109ecb4f0(3,puVar9,plVar21);
                    uStack_88 = 3;
                    plStack_80 = plVar21;
                    if ((int)plVar29[5] == 0x140) {
                      uVar2 = *(undefined1 *)((long)puVar6 + 0x1d);
                      plVar17 = (long *)*puVar8;
                      FUN_109f6600c(plVar17,0x50,8);
                      if (plVar17 != (long *)0x0) {
                        plVar17[7] = 0;
                        plVar17[6] = 0;
                        plVar17[9] = 0;
                        plVar17[8] = 0;
                        plVar17[3] = 0;
                        plVar17[2] = 0;
                        plVar17[5] = 0;
                        plVar17[4] = 0;
                        plVar17[1] = 0;
                        *plVar17 = 0;
                      }
                      *(undefined4 *)(plVar17 + 3) = 5;
                      plVar17[1] = 0;
                      plVar17[2] = 0;
                      *plVar17 = 0;
                      FUN_109ecb048(plVar17,plVar17 + 5,1,uVar2);
                      plVar17[9] = 0;
                      FUN_109ecb4f0(3,plVar21,plVar17);
                      uStack_88 = 3;
                      puVar8 = &uStack_88;
                      plStack_80 = plVar17;
                      FUN_109ece1b0(puVar8,0x12f,puVar6,plVar17 + 5);
                      puVar10 = &uStack_88;
                      FUN_109ece1b0(puVar10,0x12f,puVar7,plVar17 + 5);
                      puStack_90 = &uStack_88;
                      FUN_109ece1b0(puStack_90,0x152,puVar8,puVar10);
                      puVar8 = &uStack_88;
                      FUN_109ece168(puVar8,0x11c,puVar6);
                      puVar10 = &uStack_88;
                      FUN_109ece168(puVar10,0x11c,puVar7);
                      puVar6 = puVar8;
                      puVar7 = puVar10;
                    }
                    else {
                      puStack_90 = (undefined8 *)0x0;
                    }
                    puVar8 = &uStack_88;
                    FUN_109ece1b0(puVar8,0x120,puVar6,plVar21 + 5);
                    puVar10 = &uStack_88;
                    FUN_109ece1b0(puVar10,0x120,puVar7,plVar21 + 5);
                    puVar11 = &uStack_88;
                    FUN_109ece1b0(puVar11,0x1c0,puVar6,puVar9 + 5);
                    puVar12 = &uStack_88;
                    FUN_109ece1b0(puVar12,0x1c0,puVar7,puVar9 + 5);
                    puVar7 = &uStack_88;
                    FUN_109ece1b0(puVar7,0x13b,puVar8,puVar10);
                    puVar13 = &uStack_88;
                    FUN_109ece1b0(puVar13,0x13b,puVar8,puVar12);
                    puVar8 = &uStack_88;
                    FUN_109ece1b0(puVar8,0x13b,puVar11,puVar10);
                    puVar10 = &uStack_88;
                    FUN_109ece1b0(puVar10,0x13b,puVar11,puVar12);
                    puVar11 = &uStack_88;
                    FUN_109ece1b0(puVar11,0x14d,puVar13,puVar9 + 5);
                    puVar12 = &uStack_88;
                    FUN_109ece1b0(puVar12,0x189,puVar7,puVar11);
                    puVar14 = &uStack_88;
                    FUN_109ece1b0(puVar14,0x11d,puVar10,puVar12);
                    puVar10 = &uStack_88;
                    FUN_109ece1b0(puVar10,0x11d,puVar7,puVar11);
                    puVar7 = &uStack_88;
                    FUN_109ece1b0(puVar7,0x1c0,puVar13,puVar9 + 5);
                    puVar11 = &uStack_88;
                    FUN_109ece1b0(puVar11,0x11d,puVar14,puVar7);
                    puVar7 = &uStack_88;
                    FUN_109ece1b0(puVar7,0x14d,puVar8,puVar9 + 5);
                    puVar12 = &uStack_88;
                    FUN_109ece1b0(puVar12,0x189,puVar10,puVar7);
                    puVar13 = &uStack_88;
                    FUN_109ece1b0(puVar13,0x11d,puVar11,puVar12);
                    puVar11 = &uStack_88;
                    FUN_109ece1b0(puVar11,0x11d,puVar10,puVar7);
                    puVar10 = &uStack_88;
                    FUN_109ece1b0(puVar10,0x1c0,puVar8,puVar9 + 5);
                    puVar7 = &uStack_88;
                    FUN_109ece1b0(puVar7,0x11d,puVar13,puVar10);
                    if ((int)plVar29[5] != 0x140) goto joined_r0x000109f09394;
                    uVar2 = *(undefined1 *)((long)puVar6 + 0x1d);
                    plVar21 = (long *)*puStack_70;
                    FUN_109f6600c(plVar21,0x50,8);
                    if (plVar21 != (long *)0x0) {
                      plVar21[7] = 0;
                      plVar21[6] = 0;
                      plVar21[9] = 0;
                      plVar21[8] = 0;
                      plVar21[3] = 0;
                      plVar21[2] = 0;
                      plVar21[5] = 0;
                      plVar21[4] = 0;
                      plVar21[1] = 0;
                      *plVar21 = 0;
                    }
                    *(undefined4 *)(plVar21 + 3) = 5;
                    plVar21[1] = 0;
                    plVar21[2] = 0;
                    *plVar21 = 0;
                    FUN_109ecb048(plVar21,plVar21 + 5,1,uVar2);
                    plVar21[9] = 1;
                    FUN_109ecb4f0(uStack_88,plStack_80,plVar21);
                    uStack_88 = 3;
                    puVar8 = &uStack_88;
                    plStack_80 = plVar21;
                    FUN_109ece168(puVar8,0x146,puVar7);
                    puVar6 = &uStack_88;
                    FUN_109ece168(puVar6,0x146,puVar11);
                    puVar9 = &uStack_88;
                    FUN_109ece1b0(puVar9,0x189,puVar6,plVar21 + 5);
                    puVar6 = &uStack_88;
                    FUN_109ece1b0(puVar6,0x11d,puVar8,puVar9);
                    goto LAB_109f09388;
                  }
                  uVar19 = *(uint *)(&UNK_110b78544 + (ulong)*(uint *)(plVar29 + 5) * 0x68);
                  puVar8 = &uStack_88;
                  FUN_109ece954(puVar8,puVar6,uVar19,uVar19 | 0x20,0);
                  puVar9 = &uStack_88;
                  FUN_109ece954(puVar9,puVar7,uVar19,uVar19 | 0x20,0);
                  puVar10 = &uStack_88;
                  FUN_109ece1b0(puVar10,0x13b,puVar8,puVar9);
                  bVar18 = *(byte *)((long)puVar6 + 0x1d);
                  if ((ulong)bVar18 == 0) {
                    uVar26 = 0;
                  }
                  else {
                    plVar21 = (long *)*puStack_70;
                    FUN_109f6600c(plVar21,0x50,8);
                    if (plVar21 != (long *)0x0) {
                      plVar21[7] = 0;
                      plVar21[6] = 0;
                      plVar21[9] = 0;
                      plVar21[8] = 0;
                      plVar21[3] = 0;
                      plVar21[2] = 0;
                      plVar21[5] = 0;
                      plVar21[4] = 0;
                      plVar21[1] = 0;
                      *plVar21 = 0;
                    }
                    *(undefined4 *)(plVar21 + 3) = 5;
                    plVar21[1] = 0;
                    plVar21[2] = 0;
                    *plVar21 = 0;
                    FUN_109ecb048(plVar21,plVar21 + 5,1,0x20);
                    plVar21[9] = (ulong)bVar18;
                    FUN_109ecb4f0(uStack_88,plStack_80,plVar21);
                    uStack_88 = 3;
                    puVar7 = &uStack_88;
                    plStack_80 = plVar21;
                    FUN_109ece1b0(puVar7,0x14e,puVar10,plVar21 + 5);
                    uVar26 = (uint)*(byte *)((long)puVar6 + 0x1d);
                    puVar10 = puVar7;
                  }
                  puVar7 = &uStack_88;
                  FUN_109ece954(puVar7,puVar10,uVar19,uVar26 | uVar19,0);
                  if (puVar7 != (undefined8 *)0x0) goto LAB_109f09398;
                }
                goto LAB_109f09408;
              }
LAB_109f0940c:
              bVar32 = (bool)(bVar32 | bVar18);
            }
            if (plVar31 == (long *)0x0) goto LAB_109f0942c;
            plVar21 = (long *)*plVar31;
            plVar17 = (long *)0x0;
            plVar29 = plVar31;
          } while (plVar21 == (long *)0x0);
        } while( true );
      }
LAB_109f0942c:
      lVar4 = lVar5;
      FUN_109ecc434();
      lVar27 = lVar5;
    } while (lVar5 != 0);
    if (!bVar32) goto LAB_109f09454;
    uVar25 = 1;
    uVar19 = 3;
  }
  *(uint *)(lVar20 + 0x84) = *(uint *)(lVar20 + 0x84) & uVar19;
  plVar24 = (long *)*plVar24;
  plVar21 = (long *)*plVar24;
  while( true ) {
    if (plVar21 == (long *)0x0) {
      return uVar25;
    }
    lVar20 = plVar24[6];
    if (lVar20 != 0) break;
    plVar24 = plVar21;
    plVar21 = (long *)*plVar21;
  }
  goto LAB_109f0800c;
}



/* Entry: 109f094ac; end: 109f094f3;  */

bool FUN_109f094ac(long param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    return false;
  }
  if (1 < *(byte *)(param_1 + 0x4c)) {
    return true;
  }
  return 1 < (byte)(&UNK_110b78548)[(ulong)*(uint *)(param_1 + 0x28) * 0x68];
}



/* Entry: 109f094f4; end: 109f0a68b;  */

undefined8 * FUN_109f094f4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  byte bVar9;
  uint uVar10;
  undefined4 uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  char *pcVar16;
  uint *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  uint uVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined8 *puStack_98;
  undefined8 *apuStack_88 [4];
  undefined8 uStack_68;
  
  uStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar9 = (&UNK_110b78540)[(ulong)*(uint *)(param_2 + 5) * 0x68];
  *(byte *)(param_1 + 2) = *(byte *)((long)param_2 + 0x2c) & 1;
  *(uint *)((long)param_1 + 0x14) = *(ushort *)((long)param_2 + 0x2c) >> 3 & 0x1ff;
  bVar2 = *(byte *)((long)param_2 + 0x4c);
  puVar28 = (undefined8 *)(ulong)bVar2;
  if ((code *)*param_3 != (code *)0x0) {
    puVar8 = (undefined8 *)param_3[1];
    puVar6 = param_2;
    (*(code *)*param_3)();
    puVar25 = puVar6;
    if ((int)puVar6 != 0) goto LAB_109f09588;
LAB_109f0957c:
    puVar29 = (undefined8 *)0x0;
    goto LAB_109f0960c;
  }
  puVar25 = (undefined8 *)0x1;
  puVar6 = param_1;
  puVar8 = param_2;
LAB_109f09588:
  puVar29 = (undefined8 *)0x0;
  uVar27 = *(uint *)(param_2 + 5);
  puVar26 = param_1;
  if (0x15b < (int)uVar27) {
    if (0x16f < (int)uVar27) {
      uVar10 = uVar27 - 0x1ac;
      if (uVar10 < 0x1e) {
        if ((1 << (ulong)(uVar10 & 0x1f) & 0x3f00f199U) != 0) goto LAB_109f0960c;
        if (uVar10 == 9) {
          if (*(char *)(*(long *)(param_1[3] + 0x28) + 0x38) == '\x01') {
            puVar28 = param_1;
            func_0x000109ece464(param_1,param_2,0);
            FUN_109ece168(param_1,0x1b6,puVar28);
            puVar8 = (undefined8 *)0x1b7;
            puVar6 = param_1;
            FUN_109ece168(param_1,0x1b7,puVar28);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != uStack_68) goto LAB_109f0a688;
            uVar23 = 0x1c5;
            goto code_r0x000109ece1b0;
          }
          goto LAB_109f0957c;
        }
      }
      if (uVar27 == 0x170) {
        puVar28 = param_1;
        func_0x000109ece464(param_1,param_2,0);
        puVar6 = param_1;
        FUN_109f0a764(param_1,0);
        puVar8 = param_1;
        FUN_109ece1b0(param_1,0x85,puVar28,puVar6);
        puVar28 = param_1;
        FUN_109f0a6a4(param_1,puVar8,1);
        puVar6 = param_1;
        FUN_109f0a764(param_1,0x10);
        FUN_109ece1b0(param_1,0x14d,puVar28,puVar6);
        puVar6 = param_1;
        FUN_109f0a6a4(param_1,puVar8,0);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != uStack_68) goto LAB_109f0a688;
        uVar23 = 0x14a;
        goto code_r0x000109ece1b0;
      }
      if (uVar27 != 0x171) goto LAB_109f09db8;
      cVar3 = *(char *)(*(long *)(param_1[3] + 0x28) + 0x7b);
      puVar28 = param_1;
      func_0x000109ece464(param_1,param_2,0);
      if (cVar3 != '\x01') {
        puVar6 = param_1;
        FUN_109f0a764(param_1,0);
        puVar8 = param_1;
        FUN_109ece1b0(param_1,0x86,puVar28,puVar6);
        puVar28 = param_1;
        FUN_109f0a6a4(param_1,puVar8,3);
        puVar6 = param_1;
        FUN_109f0a764(param_1,0x18);
        puVar25 = param_1;
        FUN_109ece1b0(param_1,0x14d,puVar28,puVar6);
        puVar28 = param_1;
        FUN_109f0a6a4(param_1,puVar8,2);
        puVar6 = param_1;
        FUN_109f0a764(param_1,0x10);
        puVar29 = param_1;
        FUN_109ece1b0(param_1,0x14d,puVar28,puVar6);
        FUN_109ece1b0(param_1,0x14a,puVar25,puVar29);
        puVar28 = param_1;
        FUN_109f0a6a4(param_1,puVar8,1);
        puVar6 = param_1;
        FUN_109f0a764(param_1,8);
        puVar25 = param_1;
        FUN_109ece1b0(param_1,0x14d,puVar28,puVar6);
        puVar28 = param_1;
        FUN_109f0a6a4(param_1,puVar8,0);
        puVar8 = (undefined8 *)0x14a;
        puVar6 = param_1;
        FUN_109ece1b0(param_1,0x14a,puVar25,puVar28);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != uStack_68) goto LAB_109f0a688;
        uVar23 = 0x14a;
        goto code_r0x000109ece1b0;
      }
      puVar6 = puVar28;
      if (*(char *)((long)puVar28 + 0x1d) != '\b') {
        param_2 = (undefined8 *)0x186;
        puVar6 = param_1;
        FUN_109ece168(param_1,0x186,puVar28);
      }
      puVar8 = param_2;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != uStack_68) goto LAB_109f0a688;
      puVar29 = (undefined8 *)param_1[3];
      FUN_109ecaef8(puVar29,0x15e);
      if (puVar29 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      puVar29[10] = 0;
      puVar29[0xb] = 0;
      puVar29[0xc] = 0;
      puVar29[0xd] = puVar6;
      goto SUB_109ecdf34;
    }
    if ((int)uVar27 < 0x164) {
      if (uVar27 == 0x15c) {
        if (*(char *)(*(long *)(param_1[3] + 0x28) + 0x35) == '\x01') {
          puVar8 = param_1;
          func_0x000109ece464(param_1,param_2,0);
          FUN_109f0a6a4(param_1,puVar8,0);
          puVar6 = param_1;
          FUN_109f0a6a4(param_1,puVar8,1);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != uStack_68) goto LAB_109f0a688;
          uVar23 = 0x15d;
          goto code_r0x000109ece1b0;
        }
      }
      else {
        if (uVar27 != 0x162) goto LAB_109f09db8;
        if (*(char *)(*(long *)(param_1[3] + 0x28) + 0x33) == '\x01') {
          puVar8 = param_1;
          func_0x000109ece464(param_1,param_2,0);
          FUN_109f0a6a4(param_1,puVar8,0);
          puVar6 = param_1;
          FUN_109f0a6a4(param_1,puVar8,1);
          goto LAB_109f09c6c;
        }
      }
    }
    else if (uVar27 == 0x164) {
      if (*(char *)(*(long *)(param_1[3] + 0x28) + 0x34) == '\x01') {
        puVar28 = param_1;
        func_0x000109ece464(param_1,param_2,0);
        puVar6 = param_1;
        FUN_109f0a6a4(param_1,puVar28,0);
        puVar8 = param_1;
        FUN_109f0a6a4(param_1,puVar28,1);
        FUN_109ece1b0(param_1,0x15d,puVar6,puVar8);
        puVar25 = param_1;
        FUN_109f0a6a4(param_1,puVar28,2);
        puVar29 = param_1;
        FUN_109f0a6a4(param_1,puVar28,3);
        puVar8 = (undefined8 *)0x15d;
        puVar6 = param_1;
        FUN_109ece1b0(param_1,0x15d,puVar25,puVar29);
LAB_109f09c6c:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != uStack_68) goto LAB_109f0a688;
        uVar23 = 0x163;
        goto code_r0x000109ece1b0;
      }
    }
    else {
      if (uVar27 != 0x166) goto LAB_109f09db8;
      if (*(char *)(*(long *)(param_1[3] + 0x28) + 0x2e) == '\x01') {
        puVar8 = param_1;
        func_0x000109ece464(param_1,param_2,0);
        FUN_109f0a6a4(param_1,puVar8,0);
        puVar6 = param_1;
        FUN_109f0a6a4(param_1,puVar8,1);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != uStack_68) goto LAB_109f0a688;
        uVar23 = 0x168;
        goto code_r0x000109ece1b0;
      }
    }
    goto LAB_109f0957c;
  }
  switch(uVar27) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 6:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != uStack_68) goto LAB_109f0a688;
    lVar7 = 0xc1;
    break;
  case 5:
  case 0xb:
  case 0x11:
  case 0x17:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x2a:
  case 0x30:
  case 0x36:
  case 0x3c:
  case 0x3e:
  case 0x3f:
  case 0x44:
  case 0x4a:
  case 0x50:
  case 0x56:
  case 0x58:
  case 0x5d:
  case 99:
  case 0x69:
  case 0x6f:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x82:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x87:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x8f:
  case 0x90:
  case 0x91:
  case 0x92:
  case 0x93:
  case 0x94:
  case 0x95:
  case 0x96:
  case 0x97:
  case 0x98:
  case 0x99:
  case 0x9a:
  case 0x9b:
  case 0x9c:
  case 0xa1:
  case 0xa7:
  case 0xa9:
  case 0xaa:
  case 0xab:
  case 0xac:
  case 0xad:
  case 0xae:
  case 0xaf:
  case 0xb0:
  case 0xb1:
  case 0xb3:
  case 0xb5:
  case 0xb7:
  case 0xb9:
  case 0xba:
  case 0xbb:
  case 0xbd:
LAB_109f09db8:
    if (bVar2 == 1) goto LAB_109f0957c;
    if ((uint)bVar2 <= (uint)puVar25) {
      puVar6 = param_2;
      FUN_109f0a994();
      puVar8 = puVar25;
      if (((ulong)puVar6 & 1) != 0) goto LAB_109f0957c;
      puVar25 = (undefined8 *)(ulong)(bVar2 + 1 >> 1);
    }
    puVar29 = (undefined8 *)param_1[3];
    puVar8 = puVar28;
    func_0x000109ecd728();
    FUN_109ecaef8();
    puVar6 = puVar29;
    if (bVar2 != 0) {
      puVar26 = (undefined8 *)0x0;
      puVar18 = (undefined8 *)((ulong)puVar25 & 0xffffffff);
      puStack_98 = puVar29 + 0xe;
      puVar19 = puVar28;
      do {
        puVar6 = puVar18;
        if (puVar19 <= puVar18) {
          puVar6 = puVar19;
        }
        uVar10 = (uint)bVar2 - (int)puVar26;
        uVar24 = (uint)puVar25;
        uVar27 = uVar24;
        if (uVar10 <= uVar24) {
          uVar27 = uVar10;
        }
        lVar7 = param_1[3];
        FUN_109ecaef8(lVar7,*(undefined4 *)(param_2 + 5));
        if (bVar9 != 0) {
          uVar12 = 0;
          lVar13 = lVar7 + 0x70;
          puVar8 = param_2 + 0xe;
          do {
            lVar20 = 0;
            uVar23 = param_2[uVar12 * 6 + 0xd];
            puVar21 = (undefined8 *)(lVar7 + 0x50 + uVar12 * 0x30);
            *puVar21 = 0;
            puVar21[1] = 0;
            puVar21[2] = 0;
            puVar21[3] = uVar23;
            do {
              *(undefined1 *)(lVar13 + lVar20) = *(undefined1 *)((long)puVar8 + lVar20);
              lVar20 = lVar20 + 1;
            } while (lVar20 != 0x10);
            if (uVar27 != 0) {
              puVar21 = (undefined8 *)0x0;
              do {
                lVar20 = 0;
                if ((&UNK_110b78548)[(ulong)*(uint *)(param_2 + 5) * 0x68 + uVar12] != '\x01') {
                  lVar20 = (long)puVar26 + (long)puVar21;
                }
                *(undefined1 *)(lVar13 + (long)puVar21) =
                     *(undefined1 *)((long)param_2 + lVar20 + uVar12 * 0x30 + 0x70);
                puVar21 = (undefined8 *)((long)puVar21 + 1);
              } while (puVar6 != puVar21);
            }
            uVar12 = uVar12 + 1;
            lVar13 = lVar13 + 0x30;
            puVar8 = puVar8 + 6;
          } while (uVar12 != bVar9);
        }
        FUN_109ecb048();
        uVar4 = *(ushort *)(lVar7 + 0x2c);
        uVar5 = *(ushort *)((long)param_2 + 0x2c) & 1;
        *(ushort *)(lVar7 + 0x2c) = uVar4 & 0xfffe | uVar5;
        *(ushort *)(lVar7 + 0x2c) =
             uVar4 & 0xf006 | uVar5 | *(ushort *)((long)param_2 + 0x2c) & 0xff8;
        if (uVar27 != 0) {
          puVar8 = (undefined8 *)0x0;
          puVar21 = puStack_98;
          do {
            puVar21[-4] = 0;
            puVar21[-3] = 0;
            *(char *)puVar21 = (char)puVar8;
            puVar8 = (undefined8 *)((long)puVar8 + 1);
            puVar21[-2] = 0;
            puVar21[-1] = lVar7 + 0x30;
            puVar21 = puVar21 + 6;
          } while (puVar6 != puVar8);
        }
        puVar6 = (undefined8 *)*param_1;
        puVar8 = (undefined8 *)param_1[1];
        FUN_109ecb4f0(puVar6,puVar8,lVar7);
        *param_1 = 3;
        param_1[1] = lVar7;
        puVar26 = (undefined8 *)((long)puVar26 + (long)puVar18);
        puVar19 = (undefined8 *)(ulong)((int)puVar19 - uVar24);
        puStack_98 = puStack_98 +
                     (((ulong)puVar25 & 0xffffffff) * 2 + ((ulong)puVar25 & 0xffffffff)) * 2;
      } while (puVar26 < puVar28);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != uStack_68) goto LAB_109f0a688;
    goto SUB_109ecdf34;
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xc:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != uStack_68) goto LAB_109f0a688;
    lVar7 = 0x125;
    break;
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x12:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != uStack_68) goto LAB_109f0a688;
    lVar7 = 0xf0;
    goto code_r0x000109f09940;
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x18:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != uStack_68) goto LAB_109f0a688;
    lVar7 = 0x142;
    goto code_r0x000109f09940;
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2b:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != uStack_68) goto LAB_109f0a688;
    lVar7 = 0xc2;
    break;
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x31:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != uStack_68) goto LAB_109f0a688;
    lVar7 = 0x126;
    break;
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x37:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != uStack_68) goto LAB_109f0a688;
    lVar7 = 0xf1;
    goto code_r0x000109f09940;
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3d:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != uStack_68) goto LAB_109f0a688;
    lVar7 = 0x143;
    goto code_r0x000109f09940;
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x45:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != uStack_68) goto LAB_109f0a688;
    lVar7 = 0xc3;
    break;
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4b:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != uStack_68) goto LAB_109f0a688;
    lVar7 = 0x127;
    break;
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x51:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != uStack_68) goto LAB_109f0a688;
    lVar7 = 0xf2;
    goto code_r0x000109f09940;
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x57:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != uStack_68) goto LAB_109f0a688;
    lVar7 = 0x144;
    goto code_r0x000109f09940;
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5e:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != uStack_68) goto LAB_109f0a688;
    lVar7 = 0xc0;
    break;
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 100:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != uStack_68) goto LAB_109f0a688;
    lVar7 = 0x124;
    break;
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x6a:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != uStack_68) goto LAB_109f0a688;
    lVar7 = 0xef;
    goto code_r0x000109f09940;
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x70:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != uStack_68) goto LAB_109f0a688;
    lVar7 = 0x141;
code_r0x000109f09940:
    uStack_68._0_4_ = 0x14a;
    goto code_r0x000109f09944;
  case 0x81:
    goto LAB_109f0960c;
  case 0x9d:
  case 0x9e:
  case 0x9f:
  case 0xa0:
  case 0xa2:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != uStack_68) goto LAB_109f0a688;
    lVar7 = 0x177;
    uStack_68._0_4_ = 0xe5;
    goto code_r0x000109f09944;
  case 0xa3:
  case 0xa4:
  case 0xa5:
  case 0xa6:
  case 0xa8:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != uStack_68) goto LAB_109f0a688;
    lVar7 = 0x17b;
    uStack_68._0_4_ = 0xe3;
    goto code_r0x000109f09944;
  case 0xb2:
  case 0xb4:
  case 0xb6:
  case 0xb8:
  case 0xbc:
    if (*(char *)((long)param_2 + 0x4d) == '\x10') {
      lVar7 = 1;
    }
    else if (*(char *)((long)param_2 + 0x4d) == '@') {
      lVar7 = 3;
    }
    else {
      lVar7 = 2;
    }
    bVar9 = *(byte *)(param_1 + 2);
    if (*(char *)(*(long *)(param_1[3] + 0x28) + lVar7) == '\x01') {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != uStack_68) goto LAB_109f0a688;
      uStack_68._4_4_ = bVar9 ^ 1;
      lVar7 = 0xe8;
      uStack_68._0_4_ = 0x9c;
      goto code_r0x000109f0994c;
    }
    bVar2 = (&UNK_110b78548)[(ulong)uVar27 * 0x68];
    if (bVar2 == 0) goto LAB_109f0957c;
    uVar27 = 0;
    puVar28 = (undefined8 *)0x0;
    do {
      lVar7 = param_1[3];
      uVar11 = 0xe8;
      if (puVar28 != (undefined8 *)0x0) {
        uVar11 = 0xca;
      }
      FUN_109ecaef8(lVar7,uVar11);
      puVar29 = (undefined8 *)(lVar7 + 0x30);
      FUN_109ecb048();
      uVar23 = param_2[0xd];
      *(undefined8 *)(lVar7 + 0x50) = 0;
      *(undefined8 *)(lVar7 + 0x58) = 0;
      *(undefined8 *)(lVar7 + 0x60) = 0;
      *(undefined8 *)(lVar7 + 0x68) = uVar23;
      lVar13 = 0x70;
      do {
        *(undefined1 *)(lVar7 + lVar13) = *(undefined1 *)((long)param_2 + lVar13);
        lVar13 = lVar13 + 1;
      } while (lVar13 != 0x80);
      uVar10 = uVar27;
      if (bVar9 == 0) {
        uVar10 = ~uVar27 + (uint)bVar2;
      }
      *(undefined1 *)(lVar7 + 0x70) = *(undefined1 *)((long)param_2 + (long)(int)uVar10 + 0x70);
      uVar23 = param_2[0x13];
      *(undefined8 *)(lVar7 + 0x80) = 0;
      *(undefined8 *)(lVar7 + 0x88) = 0;
      *(undefined8 *)(lVar7 + 0x90) = 0;
      *(undefined8 *)(lVar7 + 0x98) = uVar23;
      lVar13 = 0xa0;
      do {
        *(undefined1 *)(lVar7 + lVar13) = *(undefined1 *)((long)param_2 + lVar13);
        lVar13 = lVar13 + 1;
      } while (lVar13 != 0xb0);
      *(undefined1 *)(lVar7 + 0xa0) = *(undefined1 *)((long)param_2 + (long)(int)uVar10 + 0xa0);
      if (uVar27 != 0) {
        *(undefined8 *)(lVar7 + 0xb0) = 0;
        *(undefined8 *)(lVar7 + 0xb8) = 0;
        *(undefined8 *)(lVar7 + 0xc0) = 0;
        *(undefined8 **)(lVar7 + 200) = puVar28;
      }
      uVar5 = *(ushort *)(lVar7 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
      *(ushort *)(lVar7 + 0x2c) = uVar5;
      *(ushort *)(lVar7 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar5 & 0xf007;
      puVar6 = (undefined8 *)*param_1;
      puVar8 = (undefined8 *)param_1[1];
      FUN_109ecb4f0(puVar6,puVar8,lVar7);
      *param_1 = 3;
      param_1[1] = lVar7;
      uVar27 = uVar27 + 1;
      puVar28 = puVar29;
    } while (uVar27 != bVar2);
    goto LAB_109f0960c;
  case 0xbe:
    puVar28 = param_1;
    func_0x000109ece464(param_1,param_2,0);
    lVar7 = 1;
    puVar25 = param_1;
    func_0x000109ece464(param_1,param_2,1);
    if (*(char *)((long)param_2 + 0x4d) != '\x10') {
      if (*(char *)((long)param_2 + 0x4d) == '@') {
        lVar7 = 3;
      }
      else {
        lVar7 = 2;
      }
    }
    bVar9 = *(byte *)(param_1 + 2);
    if (*(char *)(*(long *)(param_1[3] + 0x28) + lVar7) == '\x01') {
      uVar27 = 0;
      uVar10 = 3;
      do {
        uVar24 = uVar27;
        if (bVar9 == 0) {
          uVar24 = uVar10;
        }
        if ((uVar10 != 3) || (puVar6 = puVar28, *(char *)((long)puVar28 + 0x1c) != '\x01')) {
          lVar7 = param_1[3];
          FUN_109ecaef8(lVar7,0x154);
          puVar6 = (undefined8 *)(lVar7 + 0x30);
          FUN_109ecb048();
          uVar5 = *(ushort *)(lVar7 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
          *(ushort *)(lVar7 + 0x2c) = uVar5;
          *(ushort *)(lVar7 + 0x2c) =
               (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar5 & 0xf007;
          *(undefined8 *)(lVar7 + 0x50) = 0;
          *(undefined8 *)(lVar7 + 0x58) = 0;
          *(undefined8 *)(lVar7 + 0x60) = 0;
          *(undefined8 **)(lVar7 + 0x68) = puVar28;
          *(char *)(lVar7 + 0x70) = (char)uVar27;
          *(undefined8 *)(lVar7 + 0x71) = 0;
          *(undefined8 *)(lVar7 + 0x78) = 0;
          FUN_109ecb4f0(*param_1,param_1[1],lVar7);
          *param_1 = 3;
          param_1[1] = lVar7;
        }
        if ((uVar10 != 3) || (puVar8 = puVar25, *(char *)((long)puVar25 + 0x1c) != '\x01')) {
          lVar7 = param_1[3];
          FUN_109ecaef8(lVar7,0x154);
          puVar8 = (undefined8 *)(lVar7 + 0x30);
          FUN_109ecb048();
          uVar5 = *(ushort *)(lVar7 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
          *(ushort *)(lVar7 + 0x2c) = uVar5;
          *(ushort *)(lVar7 + 0x2c) =
               (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar5 & 0xf007;
          *(undefined8 *)(lVar7 + 0x50) = 0;
          *(undefined8 *)(lVar7 + 0x58) = 0;
          *(undefined8 *)(lVar7 + 0x60) = 0;
          *(undefined8 **)(lVar7 + 0x68) = puVar25;
          *(char *)(lVar7 + 0x70) = (char)uVar27;
          *(undefined8 *)(lVar7 + 0x71) = 0;
          *(undefined8 *)(lVar7 + 0x78) = 0;
          FUN_109ecb4f0(*param_1,param_1[1],lVar7);
          *param_1 = 3;
          param_1[1] = lVar7;
        }
        puVar29 = param_1;
        FUN_109ece1b0(param_1,0xe8,puVar6,puVar8);
        apuStack_88[uVar24] = puVar29;
        uVar27 = uVar27 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      puVar28 = param_1;
      FUN_109f0a6a4(param_1,puVar25,3);
      lVar7 = 0x18;
      if (bVar9 == 0) {
        lVar7 = 0;
      }
      *(undefined8 **)((long)apuStack_88 + lVar7) = puVar28;
      puVar28 = param_1;
      FUN_109ece1b0(param_1,0x9c,apuStack_88[0],apuStack_88[1]);
      puVar8 = (undefined8 *)0x9c;
      puVar6 = param_1;
      FUN_109ece1b0(param_1,0x9c,puVar28,apuStack_88[2]);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != uStack_68) goto LAB_109f0a688;
      uVar23 = 0x9c;
      puVar26 = puVar6;
      puVar6 = apuStack_88[3];
    }
    else {
      if ((bVar9 & 1) == 0) {
        puVar29 = param_1;
        FUN_109f0a6a4(param_1,puVar25,3);
        uVar27 = 2;
        do {
          if (((uVar27 & 0xff) != 0) ||
             (puVar26 = puVar28, *(char *)((long)puVar28 + 0x1c) != '\x01')) {
            lVar7 = param_1[3];
            FUN_109ecaef8(lVar7,0x154);
            puVar26 = (undefined8 *)(lVar7 + 0x30);
            FUN_109ecb048();
            uVar5 = *(ushort *)(lVar7 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
            *(ushort *)(lVar7 + 0x2c) = uVar5;
            *(ushort *)(lVar7 + 0x2c) =
                 (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar5 & 0xf007;
            *(undefined8 *)(lVar7 + 0x50) = 0;
            *(undefined8 *)(lVar7 + 0x58) = 0;
            *(undefined8 *)(lVar7 + 0x60) = 0;
            *(undefined8 **)(lVar7 + 0x68) = puVar28;
            *(char *)(lVar7 + 0x70) = (char)uVar27;
            *(undefined8 *)(lVar7 + 0x71) = 0;
            *(undefined8 *)(lVar7 + 0x78) = 0;
            FUN_109ecb4f0(*param_1,param_1[1],lVar7);
            *param_1 = 3;
            param_1[1] = lVar7;
          }
          if (((uVar27 & 0xff) != 0) ||
             (puVar19 = puVar25, *(char *)((long)puVar25 + 0x1c) != '\x01')) {
            lVar7 = param_1[3];
            FUN_109ecaef8(lVar7,0x154);
            puVar19 = (undefined8 *)(lVar7 + 0x30);
            FUN_109ecb048();
            uVar5 = *(ushort *)(lVar7 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
            *(ushort *)(lVar7 + 0x2c) = uVar5;
            *(ushort *)(lVar7 + 0x2c) =
                 (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar5 & 0xf007;
            *(undefined8 *)(lVar7 + 0x50) = 0;
            *(undefined8 *)(lVar7 + 0x58) = 0;
            *(undefined8 *)(lVar7 + 0x60) = 0;
            *(undefined8 **)(lVar7 + 0x68) = puVar25;
            *(char *)(lVar7 + 0x70) = (char)uVar27;
            *(undefined8 *)(lVar7 + 0x71) = 0;
            *(undefined8 *)(lVar7 + 0x78) = 0;
            FUN_109ecb4f0(*param_1,param_1[1],lVar7);
            *param_1 = 3;
            param_1[1] = lVar7;
          }
          puVar8 = (undefined8 *)0xca;
          puVar6 = param_1;
          func_0x000109ece210(param_1,0xca,puVar26,puVar19,puVar29);
          uVar27 = uVar27 - 1;
          puVar29 = puVar6;
        } while (uVar27 != 0xffffffff);
        goto LAB_109f0960c;
      }
      puVar6 = param_1;
      FUN_109f0a6a4(param_1,puVar28,0);
      puVar8 = param_1;
      FUN_109f0a6a4(param_1,puVar25,0);
      puVar29 = param_1;
      FUN_109ece1b0(param_1,0xe8,puVar6,puVar8);
      puVar6 = param_1;
      FUN_109f0a6a4(param_1,puVar28,1);
      puVar8 = param_1;
      FUN_109f0a6a4(param_1,puVar25,1);
      puVar19 = param_1;
      func_0x000109ece210(param_1,0xca,puVar6,puVar8,puVar29);
      puVar6 = param_1;
      FUN_109f0a6a4(param_1,puVar28,2);
      puVar28 = param_1;
      FUN_109f0a6a4(param_1,puVar25,2);
      func_0x000109ece210(param_1,0xca,puVar6,puVar28,puVar19);
      puVar6 = param_1;
      FUN_109f0a6a4(param_1,puVar25,3);
      puVar8 = puVar25;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != uStack_68) goto LAB_109f0a688;
      uVar23 = 0x9c;
    }
code_r0x000109ece1b0:
    puVar29 = (undefined8 *)param_1[3];
    FUN_109ecaef8(puVar29,uVar23);
    if (puVar29 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    puVar29[10] = 0;
    puVar29[0xb] = 0;
    puVar29[0xc] = 0;
    puVar29[0xd] = puVar26;
    puVar29[0x10] = 0;
    puVar29[0x11] = 0;
    puVar29[0x12] = 0;
    puVar29[0x13] = puVar6;
SUB_109ecdf34:
    lVar7 = (ulong)*(uint *)(puVar29 + 5) * 0x68;
    uVar5 = *(ushort *)((long)puVar29 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
    *(ushort *)((long)puVar29 + 0x2c) = uVar5;
    *(ushort *)((long)puVar29 + 0x2c) =
         (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar5 & 0xf007;
    bVar9 = (&UNK_110b78541)[lVar7];
    if (bVar9 == 0) {
      uVar12 = (ulong)(byte)(&UNK_110b78540)[lVar7];
      if ((&UNK_110b78540)[lVar7] == 0) {
        bVar9 = 0;
        uVar27 = 0x20;
        if ((*(uint *)(&UNK_110b78544 + lVar7) & 0x79) != 0) {
          uVar27 = *(uint *)(&UNK_110b78544 + lVar7) & 0x79;
        }
        goto LAB_109ece0a8;
      }
      bVar9 = 0;
      plVar14 = puVar29 + 0xd;
      pcVar16 = &UNK_110b78548 + lVar7;
      uVar15 = uVar12;
      do {
        if ((*pcVar16 == '\0') && (bVar9 <= *(byte *)(*plVar14 + 0x1c))) {
          bVar9 = *(byte *)(*plVar14 + 0x1c);
        }
        plVar14 = plVar14 + 6;
        uVar15 = uVar15 - 1;
        pcVar16 = pcVar16 + 1;
      } while (uVar15 != 0);
    }
    else {
      uVar12 = (ulong)(byte)(&UNK_110b78540)[lVar7];
    }
    uVar10 = *(uint *)(&UNK_110b78544 + lVar7) & 0x79;
    if (uVar10 == 0) {
      if ((int)uVar12 == 0) {
        uVar27 = 0x20;
        goto LAB_109ece0a8;
      }
      plVar14 = puVar29 + 0xd;
      puVar17 = (uint *)(&UNK_110b78558 + lVar7);
      uVar15 = uVar12;
      uVar27 = 0;
      do {
        uVar10 = (uint)*(byte *)(*plVar14 + 0x1d);
        if ((*puVar17 & 0x79) != 0 || uVar27 != 0) {
          uVar10 = uVar27;
        }
        uVar15 = uVar15 - 1;
        plVar14 = plVar14 + 6;
        puVar17 = puVar17 + 1;
        uVar27 = uVar10;
      } while (uVar15 != 0);
    }
    else {
      uVar27 = uVar10;
      if ((int)uVar12 == 0) goto LAB_109ece0a8;
    }
    uVar15 = 0;
    puVar28 = puVar29 + 0xe;
    do {
      lVar7 = puVar29[uVar15 * 6 + 0xd];
      uVar22 = (ulong)*(byte *)(lVar7 + 0x1c);
      if (uVar22 < 0x10) {
        do {
          *(char *)((long)puVar28 + uVar22) = *(char *)(lVar7 + 0x1c) + -1;
          uVar22 = uVar22 + 1;
        } while (uVar22 != 0x10);
      }
      uVar15 = uVar15 + 1;
      puVar28 = puVar28 + 6;
    } while (uVar15 != uVar12);
    uVar27 = 0x20;
    if (uVar10 != 0) {
      uVar27 = uVar10;
    }
LAB_109ece0a8:
    FUN_109ecb048(puVar29,puVar29 + 6,bVar9,uVar27);
    FUN_109ecb4f0(*param_1,param_1[1],puVar29);
    *param_1 = 3;
    param_1[1] = puVar29;
    return puVar29 + 6;
  default:
    if (uVar27 != 0x155) goto LAB_109f09db8;
LAB_109f0960c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == uStack_68) {
      return puVar29;
    }
LAB_109f0a688:
    ___stack_chk_fail();
    (*(code *)*puVar8)();
    return puVar6;
  }
  uStack_68._0_4_ = 0x120;
code_r0x000109f09944:
  uStack_68._4_4_ = 1;
code_r0x000109f0994c:
  bVar9 = (&UNK_110b78548)[(ulong)*(uint *)(param_2 + 5) * 0x68];
  if (bVar9 == 0) {
    puVar28 = (undefined8 *)0x0;
  }
  else {
    puVar28 = (undefined8 *)0x0;
    uVar27 = 0;
    do {
      lVar20 = param_1[3];
      FUN_109ecaef8(lVar20,lVar7);
      FUN_109ecb048();
      uVar23 = param_2[0xd];
      *(undefined8 *)(lVar20 + 0x50) = 0;
      *(undefined8 *)(lVar20 + 0x58) = 0;
      *(undefined8 *)(lVar20 + 0x60) = 0;
      *(undefined8 *)(lVar20 + 0x68) = uVar23;
      lVar13 = 0x70;
      do {
        *(undefined1 *)(lVar20 + lVar13) = *(undefined1 *)((long)param_2 + lVar13);
        lVar13 = lVar13 + 1;
      } while (lVar13 != 0x80);
      uVar10 = ~uVar27 + (uint)bVar9;
      if (uStack_68._4_4_ == 0) {
        uVar10 = uVar27;
      }
      *(undefined1 *)(lVar20 + 0x70) = ((undefined1 *)(lVar20 + 0x70))[(int)uVar10];
      if (1 < (byte)(&UNK_110b78540)[lVar7 * 0x68]) {
        lVar13 = 0;
        uVar23 = param_2[0x13];
        *(undefined8 *)(lVar20 + 0x80) = 0;
        *(undefined8 *)(lVar20 + 0x88) = 0;
        *(undefined8 *)(lVar20 + 0x90) = 0;
        *(undefined8 *)(lVar20 + 0x98) = uVar23;
        puVar1 = (undefined1 *)(lVar20 + 0xa0);
        do {
          puVar1[lVar13] = *(undefined1 *)((long)param_2 + lVar13 + 0xa0);
          lVar13 = lVar13 + 1;
        } while (lVar13 != 0x10);
        *puVar1 = puVar1[(int)uVar10];
      }
      uVar4 = *(ushort *)(lVar20 + 0x2c);
      uVar5 = *(ushort *)((long)param_2 + 0x2c) & 1;
      *(ushort *)(lVar20 + 0x2c) = uVar4 & 0xfffe | uVar5;
      *(ushort *)(lVar20 + 0x2c) =
           uVar4 & 0xf006 | uVar5 | *(ushort *)((long)param_2 + 0x2c) & 0xff8;
      FUN_109ecb4f0(*param_1,param_1[1],lVar20);
      *param_1 = 3;
      param_1[1] = lVar20;
      puVar6 = (undefined8 *)(lVar20 + 0x30);
      if (uVar27 != 0) {
        puVar6 = param_1;
        FUN_109ece0d8(param_1,(undefined4)uStack_68,puVar28,(undefined8 *)(lVar20 + 0x30),0,0);
      }
      puVar28 = puVar6;
      uVar27 = uVar27 + 1;
    } while (uVar27 != bVar9);
  }
  return puVar28;
}



/* Entry: 109f0a68c; end: 109f0a6a3;  */

void FUN_109f0a68c(undefined8 param_1,undefined8 *param_2)

{
  (*(code *)*param_2)(param_1,param_2[1]);
  return;
}



/* Entry: 109f0a6a4; end: 109f0a763;  */

long FUN_109f0a6a4(undefined8 *param_1,long param_2,int param_3)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  
  if ((param_3 != 0) || (lVar3 = param_2, *(char *)(param_2 + 0x1c) != '\x01')) {
    lVar2 = param_1[3];
    FUN_109ecaef8(lVar2,0x154);
    lVar3 = lVar2 + 0x30;
    FUN_109ecb048();
    uVar1 = *(ushort *)(lVar2 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
    *(ushort *)(lVar2 + 0x2c) = uVar1;
    *(ushort *)(lVar2 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
    *(undefined8 *)(lVar2 + 0x50) = 0;
    *(undefined8 *)(lVar2 + 0x58) = 0;
    *(undefined8 *)(lVar2 + 0x60) = 0;
    *(long *)(lVar2 + 0x68) = param_2;
    *(char *)(lVar2 + 0x70) = (char)param_3;
    *(undefined8 *)(lVar2 + 0x71) = 0;
    *(undefined8 *)(lVar2 + 0x78) = 0;
    FUN_109ecb4f0(*param_1,param_1[1],lVar2);
    *param_1 = 3;
    param_1[1] = lVar2;
  }
  return lVar3;
}



/* Entry: 109f0a764; end: 109f0a7fb;  */

undefined8 * FUN_109f0a764(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)param_1[3];
  FUN_109f6600c(puVar1,0x50,8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  *(undefined4 *)(puVar1 + 3) = 5;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  FUN_109ecb048(puVar1,puVar1 + 5,1,0x20);
  puVar1[9] = param_2 & 0xffffffff;
  FUN_109ecb4f0(*param_1,param_1[1],puVar1);
  *param_1 = 3;
  param_1[1] = puVar1;
  return puVar1 + 5;
}



/* Entry: 109f0a7fc; end: 109f0a993;  */

undefined8 *
FUN_109f0a7fc(long param_1,ulong param_2,undefined4 param_3,undefined8 *param_4,int param_5)

{
  undefined1 *puVar1;
  ushort uVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  
  bVar4 = (&UNK_110b78548)[(ulong)*(uint *)(param_1 + 0x28) * 0x68];
  if (bVar4 == 0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    puVar10 = (undefined8 *)0x0;
    uVar11 = 0;
    do {
      lVar6 = param_4[3];
      FUN_109ecaef8(lVar6,param_2);
      FUN_109ecb048();
      uVar8 = *(undefined8 *)(param_1 + 0x68);
      *(undefined8 *)(lVar6 + 0x50) = 0;
      *(undefined8 *)(lVar6 + 0x58) = 0;
      *(undefined8 *)(lVar6 + 0x60) = 0;
      *(undefined8 *)(lVar6 + 0x68) = uVar8;
      lVar9 = 0x70;
      do {
        *(undefined1 *)(lVar6 + lVar9) = *(undefined1 *)(param_1 + lVar9);
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x80);
      uVar3 = ~uVar11 + (uint)bVar4;
      if (param_5 == 0) {
        uVar3 = uVar11;
      }
      *(undefined1 *)(lVar6 + 0x70) = ((undefined1 *)(lVar6 + 0x70))[(int)uVar3];
      if (1 < (byte)(&UNK_110b78540)[(param_2 & 0xffffffff) * 0x68]) {
        lVar9 = 0;
        uVar8 = *(undefined8 *)(param_1 + 0x98);
        *(undefined8 *)(lVar6 + 0x80) = 0;
        *(undefined8 *)(lVar6 + 0x88) = 0;
        *(undefined8 *)(lVar6 + 0x90) = 0;
        *(undefined8 *)(lVar6 + 0x98) = uVar8;
        puVar1 = (undefined1 *)(lVar6 + 0xa0);
        do {
          puVar1[lVar9] = *(undefined1 *)(param_1 + 0xa0 + lVar9);
          lVar9 = lVar9 + 1;
        } while (lVar9 != 0x10);
        *puVar1 = puVar1[(int)uVar3];
      }
      uVar5 = *(ushort *)(lVar6 + 0x2c);
      uVar2 = *(ushort *)(param_1 + 0x2c) & 1;
      *(ushort *)(lVar6 + 0x2c) = uVar5 & 0xfffe | uVar2;
      *(ushort *)(lVar6 + 0x2c) = uVar5 & 0xf006 | uVar2 | *(ushort *)(param_1 + 0x2c) & 0xff8;
      FUN_109ecb4f0(*param_4,param_4[1],lVar6);
      *param_4 = 3;
      param_4[1] = lVar6;
      puVar7 = (undefined8 *)(lVar6 + 0x30);
      if (uVar11 != 0) {
        puVar7 = param_4;
        FUN_109ece0d8(param_4,param_3,puVar10,(undefined8 *)(lVar6 + 0x30),0,0);
      }
      puVar10 = puVar7;
      uVar11 = uVar11 + 1;
    } while (uVar11 != bVar4);
  }
  return puVar10;
}



/* Entry: 109f0a994; end: 109f0aa2b;  */

bool FUN_109f0a994(long param_1,char param_2)

{
  long lVar1;
  bool bVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  
  lVar1 = (ulong)*(uint *)(param_1 + 0x28) * 0x68;
  uVar4 = (ulong)(byte)(&UNK_110b78540)[lVar1];
  if (uVar4 != 0) {
    uVar5 = 0;
    bVar2 = false;
    pbVar6 = (byte *)(param_1 + 0x71);
    do {
      if (((&UNK_110b78548)[uVar5 + lVar1] != '\x01') && (1 < (ulong)*(byte *)(param_1 + 0x4c))) {
        lVar7 = (ulong)*(byte *)(param_1 + 0x4c) - 1;
        pbVar3 = pbVar6;
        do {
          if ((byte)((*pbVar3 ^ *(byte *)(param_1 + 0x70 + uVar5 * 0x30)) & -param_2) != 0) {
            return bVar2;
          }
          lVar7 = lVar7 + -1;
          pbVar3 = pbVar3 + 1;
        } while (lVar7 != 0);
      }
      uVar5 = uVar5 + 1;
      pbVar6 = pbVar6 + 0x30;
      bVar2 = uVar4 <= uVar5;
    } while (uVar5 != uVar4);
  }
  return true;
}



/* Entry: 109f0aa2c; end: 109f0b00f;  */

ulong FUN_109f0aa2c(ulong *param_1,long *param_2,code *param_3,long *param_4)

{
  ulong uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  uint uVar11;
  code *pcVar12;
  uint uVar13;
  long *plVar14;
  int iVar15;
  uint uVar16;
  long *plVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  uint uVar22;
  long lVar23;
  undefined1 *puVar24;
  long *plVar25;
  long lVar26;
  long *plVar27;
  long lVar28;
  long lVar29;
  long *plVar30;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  long lStack_f8;
  long alStack_f0 [16];
  long lStack_70;
  
  uVar13 = (uint)param_4;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar30 = (long *)param_1[0x2f];
  plVar17 = (long *)*(long *)param_1[0x2f];
  do {
    plVar14 = param_4;
    pcVar12 = param_3;
    if (plVar17 == (long *)0x0) {
      uVar22 = 0;
LAB_109f0afd0:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return (ulong)uVar22;
      }
      ___stack_chk_fail();
      puVar7 = *(undefined8 **)param_1[3];
      FUN_109f6600c(puVar7,0x48,8);
      *(undefined4 *)(puVar7 + 3) = 7;
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      FUN_109ecb048();
      FUN_109ece5ec(param_1,puVar7);
      uVar8 = (ulong)*(byte *)((long)puVar7 + 0x44);
      func_0x000109ecd728(uVar8);
      uVar9 = param_1[3];
      FUN_109ecaef8(uVar9,uVar8);
      if (*(char *)((long)puVar7 + 0x44) != '\0') {
        uVar8 = 0;
        lVar29 = uVar9 + ((ulong)plVar14 & 0xffffffff) * 0x30;
        puVar24 = (undefined1 *)(uVar9 + 0x70);
        do {
          if (((ulong)plVar14 & 0xffffffff) == uVar8) {
            *(undefined8 *)(lVar29 + 0x50) = 0;
            *(undefined8 *)(lVar29 + 0x58) = 0;
            *(undefined8 *)(lVar29 + 0x60) = 0;
            *(code **)(lVar29 + 0x68) = pcVar12;
            *(undefined1 *)(lVar29 + 0x70) = 0;
          }
          else {
            *(undefined8 *)(puVar24 + -0x20) = 0;
            *(undefined8 *)(puVar24 + -0x18) = 0;
            *(undefined8 *)(puVar24 + -0x10) = 0;
            *(undefined8 **)(puVar24 + -8) = puVar7 + 5;
            *puVar24 = (char)uVar8;
          }
          uVar8 = uVar8 + 1;
          puVar24 = puVar24 + 0x30;
        } while (uVar8 < *(byte *)((long)puVar7 + 0x44));
      }
      puVar10 = param_1;
      func_0x000109ecdf34();
      uVar22 = 1 << (ulong)((uint)plVar14 & 0x1f);
      uVar11 = -1 << (ulong)(*(byte *)((long)puVar10 + 0x1c) & 0x1f);
      uVar8 = param_1[3];
      FUN_109ecb0a8(uVar8,0x26f);
      bVar2 = *(byte *)((long)puVar10 + 0x1c);
      *(byte *)(uVar8 + 0x50) = bVar2;
      *(undefined8 *)(uVar8 + 0x80) = 0;
      *(undefined8 *)(uVar8 + 0x88) = 0;
      *(undefined8 *)(uVar8 + 0x90) = 0;
      *(long **)(uVar8 + 0x98) = param_2 + 0x10;
      *(undefined8 *)(uVar8 + 0xa0) = 0;
      *(undefined8 *)(uVar8 + 0xa8) = 0;
      *(undefined8 *)(uVar8 + 0xb0) = 0;
      *(ulong **)(uVar8 + 0xb8) = puVar10;
      uVar13 = 0xffffffff;
      if (bVar2 != 0x20) {
        uVar13 = ~(-1 << (ulong)(bVar2 & 0x1f));
      }
      uVar16 = uVar22 & (uVar11 ^ 0xffffffff);
      if ((uVar11 & uVar22) != 0) {
        uVar16 = uVar13;
      }
      lVar29 = (ulong)*(uint *)(uVar8 + 0x28) * 0x68;
      *(uint *)(uVar8 + 0x54 + (ulong)(byte)(&UNK_110b671aa)[lVar29] * 4 + -4) = uVar16;
      *(undefined4 *)(uVar8 + 0x54 + (ulong)(byte)(&UNK_110b671ba)[lVar29] * 4 + -4) = 0;
      uVar9 = *param_1;
      FUN_109ecb4f0(uVar9,param_1[1],uVar8);
      *param_1 = 3;
      param_1[1] = uVar8;
      return uVar9;
    }
    lVar29 = plVar30[6];
    if (lVar29 != 0) {
      uVar22 = 0;
      uVar11 = (uint)param_2;
      break;
    }
    plVar30 = plVar17;
    plVar17 = (long *)*plVar17;
  } while( true );
LAB_109f0aa98:
  lStack_118 = 0;
  plStack_110 = (long *)0x0;
  lStack_f8 = lVar29;
  uStack_108 = 0;
  plStack_100 = *(long **)(*(long *)(lVar29 + 0x20) + 0x18);
  lVar26 = *(long *)(lVar29 + 0x30);
  if (lVar26 == 0) {
LAB_109f0af9c:
    uVar16 = 0xfffffff7;
  }
  else {
    bVar3 = false;
    bVar4 = false;
    do {
      plVar25 = *(long **)(lVar26 + 0x20);
      plVar17 = (long *)*plVar25;
      if (plVar17 != (long *)0x0) {
        do {
          plVar27 = (long *)0x0;
          plVar6 = plVar25;
          if (*plVar17 != 0) {
            plVar27 = plVar17;
          }
          do {
            plVar25 = plVar27;
            if (((int)plVar6[3] == 4) &&
               (((iVar15 = (int)plVar6[5], iVar15 - 0xbbU < 4 || (iVar15 == 0x26f)) ||
                (iVar15 == 0x112)))) {
              lVar28 = *(long *)plVar6[0x13];
              lVar18 = lVar28;
              if (*(int *)(lVar28 + 0x18) != 1) {
                lVar18 = 0;
              }
              if (((*(uint *)(lVar28 + 0x2c) & ~uVar11) == 0) && (*(int *)(lVar28 + 0x28) == 1)) {
                plVar27 = (long *)**(undefined8 **)(lVar28 + 0x50);
                plVar17 = plVar27;
                if ((int)plVar27[3] != 1) {
                  plVar17 = (long *)0x0;
                }
                lVar23 = plVar17[6];
                bVar2 = *(byte *)(lVar23 + 0xd);
                if (((1 < bVar2) && (*(char *)(lVar23 + 0xe) == '\x01')) &&
                   ((*(uint *)(lVar23 + 4) & 0xfc) < 0xc)) {
                  if (param_3 == (code *)0x0) {
                    uVar16 = 1;
                  }
                  else {
                    iVar15 = 1;
                    lVar23 = lVar28;
                    do {
                      if (iVar15 == 5) {
                        iVar15 = 0;
                        goto LAB_109f0abd8;
                      }
                      lVar21 = **(long **)(lVar23 + 0x50);
                      lVar23 = lVar21;
                      if (*(int *)(lVar21 + 0x18) != 1) {
                        lVar23 = 0;
                      }
                      iVar15 = *(int *)(lVar21 + 0x28);
                    } while (iVar15 != 0);
                    iVar15 = (int)*(undefined8 *)(lVar23 + 0x38);
LAB_109f0abd8:
                    (*param_3)();
                    if (iVar15 == 0) goto LAB_109f0abb4;
                    bVar2 = *(byte *)(plVar17[6] + 0xd);
                    uVar16 = (uint)*(byte *)(plVar17[6] + 0xe);
                    iVar15 = (int)plVar6[5];
                  }
                  uVar16 = uVar16 * bVar2;
                  lStack_118 = 3;
                  plStack_110 = plVar6;
                  if (iVar15 == 0x26f) {
                    pcVar12 = (code *)plVar6[0x17];
                    plVar14 = *(long **)(lVar28 + 0x70);
                    lVar18 = *plVar14;
                    if (*(int *)(lVar18 + 0x18) == 5) {
                      if ((uVar13 >> 2 & 1) != 0) {
                        plVar14 = *(long **)(lVar18 + 0x48);
                        uVar19 = (*(byte *)(lVar18 + 0x45) & 0xaaaaaaaa) >> 1 |
                                 (*(byte *)(lVar18 + 0x45) & 0x55555555) << 1;
                        uVar19 = (uVar19 & 0xcccccccc) >> 2 | (uVar19 & 0x33333333) << 2;
                        uVar19 = (uint)LZCOUNT((uVar19 >> 4 | (uVar19 & 0xf0f0f0f) << 4) << 0x18);
                        plVar17 = (long *)((ulong)plVar14 & 0xff);
                        if (uVar19 != 3) {
                          plVar17 = (long *)((ulong)plVar14 & 0xffff);
                        }
                        plVar5 = (long *)((ulong)plVar14 & 1);
                        if (uVar19 != 0) {
                          plVar5 = plVar17;
                        }
                        if (uVar19 < 5) {
                          plVar14 = plVar5;
                        }
                        plVar5 = param_2;
                        if ((uint)plVar14 < uVar16) {
                          FUN_109f0b010(&lStack_118);
                          plVar5 = plVar27;
                        }
LAB_109f0af4c:
                        FUN_109ecb9c0(plVar6);
LAB_109f0af60:
                        bVar4 = true;
                        param_2 = plVar5;
                      }
                    }
                    else if ((uVar13 >> 3 & 1) != 0) {
                      FUN_109f0b1c0(&lStack_118);
                      bVar3 = true;
                      plVar5 = plVar27;
                      goto LAB_109f0af4c;
                    }
                  }
                  else if (*(int *)(**(long **)(lVar18 + 0x70) + 0x18) == 5) {
                    if (((ulong)param_4 & 1) != 0) {
LAB_109f0acc4:
                      plVar5 = plVar6 + 0x11;
                      lVar28 = *plVar5;
                      plVar27 = (long *)plVar6[0x12];
                      *(long **)(lVar28 + 8) = plVar27;
                      *plVar27 = lVar28;
                      *plVar5 = 0;
                      plVar27 = plVar17 + 0x11;
                      lVar28 = *plVar27;
                      plVar6[0x12] = (long)plVar27;
                      plVar6[0x13] = (long)(plVar17 + 0x10);
                      *plVar5 = lVar28;
                      *(long **)(lVar28 + 8) = plVar5;
                      *plVar27 = (long)plVar5;
                      uVar19 = uVar16 & 0xff;
                      uVar8 = (ulong)uVar19;
                      plVar27 = plVar6 + 6;
                      *(char *)((long)plVar6 + 0x4c) = (char)uVar16;
                      *(char *)(plVar6 + 10) = (char)uVar16;
                      plVar17 = *(long **)(lVar18 + 0x70);
                      lVar18 = *plVar17;
                      if (*(int *)(lVar18 + 0x18) == 5) {
                        uVar9 = *(ulong *)(lVar18 + 0x48);
                        uVar20 = (*(byte *)(lVar18 + 0x45) & 0xaaaaaaaa) >> 1 |
                                 (*(byte *)(lVar18 + 0x45) & 0x55555555) << 1;
                        uVar20 = (uVar20 & 0xcccccccc) >> 2 | (uVar20 & 0x33333333) << 2;
                        uVar20 = (uint)LZCOUNT((uVar20 >> 4 | (uVar20 & 0xf0f0f0f) << 4) << 0x18);
                        uVar8 = uVar9 & 0xffffffff;
                        if (uVar20 != 5) {
                          uVar8 = uVar9;
                        }
                        uVar1 = uVar9 & 0xffff;
                        if (uVar20 != 4) {
                          uVar1 = uVar8;
                        }
                        uVar8 = uVar9 & 1;
                        if (uVar20 != 0) {
                          uVar8 = uVar9 & 0xff;
                        }
                        if (uVar20 < 4) {
                          uVar1 = uVar8;
                        }
                        if (uVar1 < (uVar16 & 0xff)) {
                          plVar5 = plVar27;
                          if (uVar19 != 1 || uVar1 != 0) {
                            plVar17 = plStack_100;
                            FUN_109ecaef8(plStack_100,0x154);
                            plVar5 = plVar17 + 6;
                            plVar14 = (long *)(ulong)*(byte *)((long)plVar6 + 0x4d);
                            FUN_109ecb048();
                            *(ushort *)((long)plVar17 + 0x2c) =
                                 *(ushort *)((long)plVar17 + 0x2c) & 0xf000 |
                                 (*(ushort *)((long)plVar17 + 0x2c) & 0xf006 |
                                 (ushort)(byte)uStack_108) & 7 | (uStack_108._4_2_ & 0x1ff) << 3;
                            plVar17[10] = 0;
                            plVar17[0xb] = 0;
                            plVar17[0xc] = 0;
                            plVar17[0xd] = (long)plVar27;
                            *(char *)(plVar17 + 0xe) = (char)uVar1;
                            *(undefined8 *)((long)plVar17 + 0x71) = 0;
                            plVar17[0xf] = 0;
                            param_2 = plStack_110;
                            FUN_109ecb4f0(lStack_118,plStack_110,plVar17);
                            lStack_118 = 3;
                            plStack_110 = plVar17;
                          }
                        }
                        else {
                          plVar14 = (long *)(ulong)*(byte *)((long)plVar6 + 0x4d);
                          param_2 = (long *)*plStack_100;
                          FUN_109f6600c(param_2,0x48,8);
                          *(undefined4 *)(param_2 + 3) = 7;
                          param_2[1] = 0;
                          param_2[2] = 0;
                          *param_2 = 0;
                          plVar5 = param_2 + 5;
                          FUN_109ecb048();
                          FUN_109ece5ec(&lStack_118);
                        }
                      }
                      else {
                        if (uVar19 != 0) {
                          uVar9 = 0;
                          do {
                            lStack_118 = 3;
                            if (((int)uVar8 == 1) && (uVar9 == 0)) {
                              uVar8 = 1;
                              plVar14 = plVar27;
                            }
                            else {
                              plVar5 = plStack_100;
                              FUN_109ecaef8(plStack_100,0x154);
                              plVar14 = plVar5 + 6;
                              FUN_109ecb048();
                              *(ushort *)((long)plVar5 + 0x2c) =
                                   *(ushort *)((long)plVar5 + 0x2c) & 0xf000 |
                                   (*(ushort *)((long)plVar5 + 0x2c) & 0xf006 |
                                   (ushort)(byte)uStack_108) & 7 | (uStack_108._4_2_ & 0x1ff) << 3;
                              plVar5[10] = 0;
                              plVar5[0xb] = 0;
                              plVar5[0xc] = 0;
                              plVar5[0xd] = (long)plVar27;
                              *(char *)(plVar5 + 0xe) = (char)uVar9;
                              *(undefined8 *)((long)plVar5 + 0x71) = 0;
                              plVar5[0xf] = 0;
                              FUN_109ecb4f0(lStack_118,plStack_110,plVar5);
                              uVar8 = (ulong)*(byte *)((long)plVar6 + 0x4c);
                              plStack_110 = plVar5;
                            }
                            alStack_f0[uVar9] = (long)plVar14;
                            uVar9 = uVar9 + 1;
                          } while (uVar9 < uVar8);
                        }
                        lStack_118 = 3;
                        plVar5 = &lStack_118;
                        param_2 = alStack_f0;
                        plVar14 = (long *)0x0;
                        func_0x000109f0b3f8(plVar5,param_2,plVar17);
                      }
                      pcVar12 = (code *)*plVar5;
                      if (*(int *)(pcVar12 + 0x18) == 7) {
                        if ((long *)plVar6[8] + -1 != plVar27) {
                          plVar17 = (long *)plVar6[8];
                          do {
                            lVar18 = *plVar17;
                            plVar6 = (long *)plVar17[1];
                            *(long **)(lVar18 + 8) = plVar6;
                            *plVar6 = lVar18;
                            plVar17[1] = (long)(plVar5 + 1);
                            plVar17[2] = (long)plVar5;
                            *plVar17 = 0;
                            lVar18 = plVar5[1];
                            *plVar17 = lVar18;
                            *(long **)(lVar18 + 8) = plVar17;
                            plVar5[1] = (long)plVar17;
                            plVar17 = plVar6;
                          } while (plVar6 + -1 != plVar27);
                        }
                        plVar6 = (long *)*plVar27;
                        plVar5 = param_2;
                        goto LAB_109f0af4c;
                      }
                      func_0x000109ecc1d0(plVar27);
                      goto LAB_109f0af60;
                    }
                  }
                  else if ((uVar13 >> 1 & 1) != 0) goto LAB_109f0acc4;
                }
              }
            }
LAB_109f0abb4:
            if (plVar25 == (long *)0x0) goto LAB_109f0af6c;
            plVar17 = (long *)*plVar25;
            plVar27 = (long *)0x0;
            plVar6 = plVar25;
          } while (plVar17 == (long *)0x0);
        } while( true );
      }
LAB_109f0af6c:
      FUN_109ecc434();
    } while (lVar26 != 0);
    uVar16 = 0;
    if (!bVar3) {
      uVar16 = 3;
    }
    param_1 = (ulong *)0x0;
    if (!bVar4) goto LAB_109f0af9c;
    uVar22 = 1;
  }
  *(uint *)(lVar29 + 0x84) = *(uint *)(lVar29 + 0x84) & uVar16;
  plVar30 = (long *)*plVar30;
  plVar17 = (long *)*plVar30;
  while( true ) {
    if (plVar17 == (long *)0x0) goto LAB_109f0afd0;
    lVar29 = plVar30[6];
    if (lVar29 != 0) break;
    plVar30 = plVar17;
    plVar17 = (long *)*plVar17;
  }
  goto LAB_109f0aa98;
}



/* Entry: 109f0b010; end: 109f0b1bf;  */

void FUN_109f0b010(undefined8 *param_1,long param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  uint uVar10;
  
  puVar5 = *(undefined8 **)param_1[3];
  FUN_109f6600c(puVar5,0x48,8);
  *(undefined4 *)(puVar5 + 3) = 7;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  FUN_109ecb048();
  FUN_109ece5ec(param_1,puVar5);
  uVar6 = (ulong)*(byte *)((long)puVar5 + 0x44);
  func_0x000109ecd728(uVar6);
  lVar7 = param_1[3];
  FUN_109ecaef8(lVar7,uVar6);
  if (*(char *)((long)puVar5 + 0x44) != '\0') {
    uVar6 = 0;
    lVar8 = lVar7 + (ulong)param_4 * 0x30;
    puVar9 = (undefined1 *)(lVar7 + 0x70);
    do {
      if (param_4 == uVar6) {
        *(undefined8 *)(lVar8 + 0x50) = 0;
        *(undefined8 *)(lVar8 + 0x58) = 0;
        *(undefined8 *)(lVar8 + 0x60) = 0;
        *(undefined8 *)(lVar8 + 0x68) = param_3;
        *(undefined1 *)(lVar8 + 0x70) = 0;
      }
      else {
        *(undefined8 *)(puVar9 + -0x20) = 0;
        *(undefined8 *)(puVar9 + -0x18) = 0;
        *(undefined8 *)(puVar9 + -0x10) = 0;
        *(undefined8 **)(puVar9 + -8) = puVar5 + 5;
        *puVar9 = (char)uVar6;
      }
      uVar6 = uVar6 + 1;
      puVar9 = puVar9 + 0x30;
    } while (uVar6 < *(byte *)((long)puVar5 + 0x44));
  }
  puVar5 = param_1;
  func_0x000109ecdf34();
  uVar3 = 1 << (ulong)(param_4 & 0x1f);
  uVar4 = -1 << (ulong)(*(byte *)((long)puVar5 + 0x1c) & 0x1f);
  lVar7 = param_1[3];
  FUN_109ecb0a8(lVar7,0x26f);
  bVar2 = *(byte *)((long)puVar5 + 0x1c);
  *(byte *)(lVar7 + 0x50) = bVar2;
  *(undefined8 *)(lVar7 + 0x80) = 0;
  *(undefined8 *)(lVar7 + 0x88) = 0;
  *(undefined8 *)(lVar7 + 0x90) = 0;
  *(long *)(lVar7 + 0x98) = param_2 + 0x80;
  *(undefined8 *)(lVar7 + 0xa0) = 0;
  *(undefined8 *)(lVar7 + 0xa8) = 0;
  *(undefined8 *)(lVar7 + 0xb0) = 0;
  *(undefined8 **)(lVar7 + 0xb8) = puVar5;
  uVar10 = 0xffffffff;
  if (bVar2 != 0x20) {
    uVar10 = ~(-1 << (ulong)(bVar2 & 0x1f));
  }
  uVar1 = uVar3 & (uVar4 ^ 0xffffffff);
  if ((uVar4 & uVar3) != 0) {
    uVar1 = uVar10;
  }
  lVar8 = (ulong)*(uint *)(lVar7 + 0x28) * 0x68;
  *(uint *)(lVar7 + 0x54 + (ulong)(byte)(&UNK_110b671aa)[lVar8] * 4 + -4) = uVar1;
  *(undefined4 *)(lVar7 + 0x54 + (ulong)(byte)(&UNK_110b671ba)[lVar8] * 4 + -4) = 0;
  FUN_109ecb4f0(*param_1,param_1[1],lVar7);
  *param_1 = 3;
  param_1[1] = lVar7;
  return;
}



/* Entry: 109f0b1c0; end: 109f0b58f;  */

void FUN_109f0b1c0(ulong *param_1,long param_2,undefined8 param_3,long param_4,ulong param_5,
                  undefined8 param_6)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  long lVar12;
  undefined1 *puVar13;
  ulong uVar14;
  
  uVar7 = (uint)param_5;
  if ((int)param_6 - 1U != uVar7) {
    uVar7 = uVar7 + ((int)param_6 - uVar7 >> 1);
    uVar14 = (ulong)uVar7;
    bVar2 = *(byte *)(param_4 + 0x1d);
    uVar8 = (bVar2 & 0xaaaaaaaa) >> 1 | (bVar2 & 0x55555555) << 1;
    uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
    uVar8 = (uint)LZCOUNT((uVar8 >> 4 | (uVar8 & 0xf0f0f0f) << 4) << 0x18);
    uVar5 = uVar14;
    uVar6 = uVar14;
    if (uVar8 < 5) {
      if (uVar8 == 0) {
        uVar9 = 0;
        uVar5 = 0;
        uVar6 = (ulong)(uVar7 != 0);
      }
      else if (uVar8 == 3) {
        uVar9 = 0;
        uVar5 = 0;
      }
      else {
        uVar9 = 0;
      }
    }
    else {
      uVar9 = uVar14 & 0xffff0000;
    }
    puVar4 = *(undefined8 **)param_1[3];
    FUN_109f6600c(puVar4,0x50,8);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[7] = 0;
      puVar4[6] = 0;
      puVar4[9] = 0;
      puVar4[8] = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
    }
    *(undefined4 *)(puVar4 + 3) = 5;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    FUN_109ecb048(puVar4,puVar4 + 5,1,bVar2);
    puVar4[9] = uVar5 & 0xff00 | uVar9 | uVar6 & 0xff;
    FUN_109ecb4f0(*param_1,param_1[1],puVar4);
    *param_1 = 3;
    param_1[1] = (ulong)puVar4;
    puVar10 = param_1;
    FUN_109ece1b0(param_1,0x12f,param_4,puVar4 + 5);
    FUN_109ece6c4(param_1,puVar10);
    FUN_109f0b1c0(param_1,param_2,param_3,param_4,param_5,uVar14);
    uVar5 = param_1[1];
    if ((*param_1 & 0xfffffffe) == 2) {
      uVar5 = *(ulong *)(uVar5 + 0x10);
    }
    uVar5 = *(ulong *)(*(long *)(uVar5 + 0x18) + 0x68);
    if (*(int *)(uVar5 + 0x10) == 0) {
      uVar6 = 0;
    }
    else {
      puVar10 = (ulong *)(uVar5 + 8);
      uVar5 = 0;
      if (*(long *)(*puVar10 + 8) != 0) {
        uVar5 = *puVar10;
      }
      uVar6 = 1;
    }
    *param_1 = uVar6;
    param_1[1] = uVar5;
    FUN_109f0b1c0(param_1,param_2,param_3,param_4,uVar14,param_6);
    uVar5 = param_1[1];
    if ((*param_1 & 0xfffffffe) == 2) {
      uVar5 = *(ulong *)(uVar5 + 0x10);
    }
    puVar10 = *(ulong **)(uVar5 + 0x18);
    if ((int)puVar10[2] == 0) {
      uVar5 = 1;
      puVar11 = puVar10;
    }
    else {
      uVar5 = 0;
      puVar11 = (ulong *)0x0;
      if (*(ulong *)*puVar10 != 0) {
        puVar11 = (ulong *)*puVar10;
      }
    }
    *param_1 = uVar5;
    param_1[1] = (ulong)puVar11;
    return;
  }
  puVar4 = *(undefined8 **)param_1[3];
  FUN_109f6600c(puVar4,0x48,8);
  *(undefined4 *)(puVar4 + 3) = 7;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  FUN_109ecb048();
  FUN_109ece5ec(param_1,puVar4);
  uVar5 = (ulong)*(byte *)((long)puVar4 + 0x44);
  func_0x000109ecd728(uVar5);
  uVar6 = param_1[3];
  FUN_109ecaef8(uVar6,uVar5);
  if (*(char *)((long)puVar4 + 0x44) != '\0') {
    uVar5 = 0;
    lVar12 = uVar6 + (param_5 & 0xffffffff) * 0x30;
    puVar13 = (undefined1 *)(uVar6 + 0x70);
    do {
      if ((param_5 & 0xffffffff) == uVar5) {
        *(undefined8 *)(lVar12 + 0x50) = 0;
        *(undefined8 *)(lVar12 + 0x58) = 0;
        *(undefined8 *)(lVar12 + 0x60) = 0;
        *(undefined8 *)(lVar12 + 0x68) = param_3;
        *(undefined1 *)(lVar12 + 0x70) = 0;
      }
      else {
        *(undefined8 *)(puVar13 + -0x20) = 0;
        *(undefined8 *)(puVar13 + -0x18) = 0;
        *(undefined8 *)(puVar13 + -0x10) = 0;
        *(undefined8 **)(puVar13 + -8) = puVar4 + 5;
        *puVar13 = (char)uVar5;
      }
      uVar5 = uVar5 + 1;
      puVar13 = puVar13 + 0x30;
    } while (uVar5 < *(byte *)((long)puVar4 + 0x44));
  }
  puVar10 = param_1;
  func_0x000109ecdf34();
  uVar8 = 1 << (ulong)(uVar7 & 0x1f);
  uVar3 = -1 << (ulong)(*(byte *)((long)puVar10 + 0x1c) & 0x1f);
  uVar5 = param_1[3];
  FUN_109ecb0a8(uVar5,0x26f);
  bVar2 = *(byte *)((long)puVar10 + 0x1c);
  *(byte *)(uVar5 + 0x50) = bVar2;
  *(undefined8 *)(uVar5 + 0x80) = 0;
  *(undefined8 *)(uVar5 + 0x88) = 0;
  *(undefined8 *)(uVar5 + 0x90) = 0;
  *(long *)(uVar5 + 0x98) = param_2 + 0x80;
  *(undefined8 *)(uVar5 + 0xa0) = 0;
  *(undefined8 *)(uVar5 + 0xa8) = 0;
  *(undefined8 *)(uVar5 + 0xb0) = 0;
  *(ulong **)(uVar5 + 0xb8) = puVar10;
  uVar7 = 0xffffffff;
  if (bVar2 != 0x20) {
    uVar7 = ~(-1 << (ulong)(bVar2 & 0x1f));
  }
  uVar1 = uVar8 & (uVar3 ^ 0xffffffff);
  if ((uVar3 & uVar8) != 0) {
    uVar1 = uVar7;
  }
  lVar12 = (ulong)*(uint *)(uVar5 + 0x28) * 0x68;
  *(uint *)(uVar5 + 0x54 + (ulong)(byte)(&UNK_110b671aa)[lVar12] * 4 + -4) = uVar1;
  *(undefined4 *)(uVar5 + 0x54 + (ulong)(byte)(&UNK_110b671ba)[lVar12] * 4 + -4) = 0;
  FUN_109ecb4f0(*param_1,param_1[1],uVar5);
  *param_1 = 3;
  param_1[1] = uVar5;
  return;
}



/* Entry: 109f0b590; end: 109f0b717;  */

bool FUN_109f0b590(long param_1)

{
  ushort uVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  int iStack_50;
  undefined *puStack_48;
  int iStack_40;
  int iStack_3c;
  
  plVar8 = *(long **)(param_1 + 8);
  if (*plVar8 == 0) {
    iVar4 = 0;
    iVar6 = 0;
  }
  else {
    lVar7 = 0;
    lVar5 = 0;
    do {
      if ((plVar8[4] & 0xcU) != 0) {
        uVar3 = plVar8[4] & 0x1fffff;
        uVar1 = *(ushort *)(param_1 + 0x61);
        if (uVar3 == 8) {
          if ((uVar1 & 0xfe) != 4) goto LAB_109f0b60c;
        }
        else if (uVar3 == 4) {
          if ((uVar1 & 0xff) != 0 && (uVar1 & 0xff) != 5) {
LAB_109f0b60c:
            iVar4 = *(int *)((long)plVar8 + 0x3c);
            if (iVar4 == 0x11) {
              lVar2 = param_1;
              FUN_109f0b718(param_1,plVar8);
              if ((uint)lVar5 <= (uint)lVar2) {
                lVar5 = param_1;
                FUN_109f0b718(param_1,plVar8);
              }
              iVar4 = *(int *)((long)plVar8 + 0x3c);
            }
            if ((iVar4 == 0x13) &&
               (lVar2 = param_1, FUN_109f0b718(param_1,plVar8), (uint)lVar7 <= (uint)lVar2)) {
              lVar7 = param_1;
              FUN_109f0b718(param_1,plVar8);
            }
          }
        }
        else if ((uVar1 & 0xff) != 5) goto LAB_109f0b60c;
      }
      iVar6 = (int)lVar7;
      iVar4 = (int)lVar5;
      plVar8 = (long *)*plVar8;
    } while (*plVar8 != 0);
  }
  if (iVar4 == 0 && iVar6 == 0) {
    FUN_109f2057c(param_1);
  }
  else {
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    iStack_50 = (int)*(char *)(param_1 + 0x61);
    puStack_48 = &UNK_10f619367;
    iStack_40 = iVar6 + iVar4;
    iStack_3c = 0;
    FUN_109f0b778(param_1,&uStack_70);
    uStack_70 = 0;
    uStack_68 = 0;
    puStack_48 = &UNK_10f619377;
    iStack_3c = iVar4;
    FUN_109f0b778(param_1,&uStack_70);
    FUN_109efa06c(param_1,FUN_109efa1c4);
  }
  return iVar4 != 0 || iVar6 != 0;
}



/* Entry: 109f0b718; end: 109f0b777;  */

uint FUN_109f0b718(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar3 = *(long *)(param_2 + 0x10);
  lVar2 = param_2;
  func_0x000109f0f5ac(param_2,(long)*(char *)(param_1 + 0x61));
  if ((int)lVar2 != 0) {
    func_0x000109eca118();
  }
  if (*(char *)(param_2 + 0x2d) < '\0') {
    func_0x000109eca118();
  }
  bVar1 = *(byte *)(lVar3 + 0xe);
  if (bVar1 < 2) {
    if ((bVar1 == 1 && 1 < *(byte *)(lVar3 + 0xd)) && ((*(uint *)(lVar3 + 4) & 0xfc) < 0xc)) {
      return (uint)*(byte *)(lVar3 + 0xd);
    }
  }
  else if (*(byte *)(lVar3 + 4) - 2 < 3) {
    return (uint)bVar1;
  }
  return *(uint *)(lVar3 + 0x10);
}



/* Entry: 109f0b778; end: 109f0c62b;  */

undefined8 * FUN_109f0b778(undefined8 *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  byte bVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  long *plVar28;
  bool bVar29;
  ulong uVar30;
  ulong uVar31;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  long lStack_138;
  undefined1 auStack_130 [56];
  long lStack_f8;
  undefined8 auStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = *(long **)param_1[1];
  puVar7 = param_1;
  if (plVar15 != (long *)0x0) {
    plVar22 = (long *)0x0;
    if (*plVar15 != 0) {
      plVar22 = plVar15;
    }
    plVar15 = (long *)param_1[1];
LAB_109f0b7e4:
    plVar25 = plVar22;
    uVar14 = *(uint *)(plVar15 + 4);
    if ((((uVar14 & 0xc) != 0) && (puVar7 = (undefined8 *)plVar15[3], puVar7 != (undefined8 *)0x0))
       && (_strcmp(puVar7,param_2[5]), (int)puVar7 == 0)) {
      if ((uVar14 & 0x1fffff) == 8) {
        if (*param_2 == 0) {
          lVar23 = 0x10;
          plVar22 = param_2;
LAB_109f0b860:
          *plVar22 = (long)plVar15;
          if (*(long *)((long)param_2 + lVar23) == 0) {
            iVar3 = (int)param_2[6];
            iVar1 = iVar3 + 6;
            if (-4 < iVar3) {
              iVar1 = iVar3 + 3;
            }
            puVar7 = param_1;
            FUN_109f658b0(param_1,0x98);
            if (puVar7 != (undefined8 *)0x0) {
              puVar7[0x12] = 0;
              puVar7[0xf] = 0;
              puVar7[0xe] = 0;
              puVar7[0x11] = 0;
              puVar7[0x10] = 0;
              puVar7[0xb] = 0;
              puVar7[10] = 0;
              puVar7[0xd] = 0;
              puVar7[0xc] = 0;
              puVar7[7] = 0;
              puVar7[6] = 0;
              puVar7[9] = 0;
              puVar7[8] = 0;
              puVar7[3] = 0;
              puVar7[2] = 0;
              puVar7[5] = 0;
              puVar7[4] = 0;
              puVar7[1] = 0;
              *puVar7 = 0;
            }
            *(undefined8 **)((long)param_2 + lVar23) = puVar7;
            FUN_109f65c2c();
            *(undefined8 **)(*(long *)((long)param_2 + lVar23) + 0x18) = puVar7;
            *(ulong *)(*(long *)((long)param_2 + lVar23) + 0x20) =
                 *(ulong *)(*(long *)((long)param_2 + lVar23) + 0x20) & 0xffffffffffe00000 |
                 plVar15[4] & 0x1fffffU;
            lVar17 = *(long *)((long)param_2 + lVar23);
            *(undefined4 *)(lVar17 + 0x3c) = 0x11;
            *(ulong *)(lVar17 + 0x20) = *(ulong *)(lVar17 + 0x20) | 0x40000000;
            uVar20 = *(ulong *)(*(long *)((long)param_2 + lVar23) + 0x2c);
            *(ulong *)(*(long *)((long)param_2 + lVar23) + 0x2c) =
                 uVar20 & 0xffffffffffff8000 |
                 uVar20 & 0x1fff | (*(ulong *)((long)plVar15 + 0x2c) >> 0xd & 3) << 0xd;
            FUN_109eca704(param_1,*(undefined8 *)((long)param_2 + lVar23));
            lVar17 = plVar15[2];
            func_0x000109eca118();
            cVar4 = *(char *)(lVar17 + 4);
            puVar7 = (undefined8 *)&DAT_10e05dce0;
            FUN_109ec69f4(&DAT_10e05dce0,iVar1 >> 2,0);
            if (cVar4 == '\x13') {
              FUN_109ec69f4();
            }
            *(undefined8 **)(*(long *)((long)param_2 + lVar23) + 0x10) = puVar7;
          }
        }
      }
      else if (param_2[1] == 0) {
        lVar23 = 0x18;
        plVar22 = param_2 + 1;
        goto LAB_109f0b860;
      }
    }
    if (plVar25 != (long *)0x0) {
      plVar19 = (long *)*plVar25;
      plVar22 = (long *)0x0;
      plVar15 = plVar25;
      if ((plVar19 != (long *)0x0) && (plVar22 = (long *)0x0, *plVar19 != 0)) {
        plVar22 = plVar19;
      }
      goto LAB_109f0b7e4;
    }
  }
  if ((param_2[1] != 0) || (*param_2 != 0)) {
    plVar15 = (long *)param_1[0x2f];
    for (plVar22 = *(long **)param_1[0x2f]; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
      lVar23 = plVar15[6];
      if (lVar23 != 0) goto LAB_109f0b9ac;
      plVar15 = plVar22;
    }
LAB_109f0c5a0:
    lVar23 = *param_2;
    if (lVar23 != 0) {
      *(ulong *)(lVar23 + 0x20) = *(ulong *)(lVar23 + 0x20) & 0xffffffffffe00000 | 0x20000;
      *(ulong *)(*param_2 + 0x20) = *(ulong *)(*param_2 + 0x20) & 0xffffffbfffffffff;
    }
    lVar23 = param_2[1];
    if (lVar23 != 0) {
      *(ulong *)(lVar23 + 0x20) = *(ulong *)(lVar23 + 0x20) & 0xffffffffffe00000 | 0x20000;
      *(ulong *)(param_2[1] + 0x20) = *(ulong *)(param_2[1] + 0x20) & 0xffffffbfffffffff;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar7;
  }
  ___stack_chk_fail();
  uVar14 = (uint)(short)(*(short *)((long)puVar7 + 0x61) << 8);
  if (((int)uVar14 < 0x400) || (uVar14 == 0x700)) {
    puVar26 = puVar7;
    FUN_109f0c710(puVar7,8,1);
    uVar14 = (uint)*(ushort *)((long)puVar7 + 0x61) << 8;
  }
  else {
    puVar26 = (undefined8 *)0x0;
  }
  if (((int)(uVar14 << 0x10) >> 0x18) - 1U < 4) {
    puVar11 = puVar7;
    FUN_109f0c710(puVar7,4,(uVar14 & 0xffff) == 0x400);
    puVar26 = (undefined8 *)(ulong)((uint)puVar26 | (uint)puVar11);
  }
  plVar15 = (long *)puVar7[0x2f];
  do {
    plVar22 = (long *)*plVar15;
    if (plVar22 == (long *)0x0) {
      return puVar26;
    }
    lVar23 = plVar15[6];
    plVar15 = plVar22;
  } while (lVar23 == 0);
  uVar14 = 0x17;
  if ((int)puVar26 == 0) {
    uVar14 = 0xfffffff7;
  }
  *(uint *)(lVar23 + 0x84) = *(uint *)(lVar23 + 0x84) & uVar14;
  while (plVar15 = (long *)*plVar22, plVar15 != (long *)0x0) {
    lVar23 = plVar22[6];
    plVar22 = plVar15;
    if (lVar23 != 0) {
      *(uint *)(lVar23 + 0x84) = *(uint *)(lVar23 + 0x84) & uVar14;
    }
  }
  return puVar26;
LAB_109f0b9ac:
  lStack_158 = 0;
  plStack_150 = (undefined8 *)0x0;
  puStack_140 = *(undefined8 **)(*(long *)(lVar23 + 0x20) + 0x18);
  uStack_148 = 0;
  puVar26 = *(undefined8 **)(lVar23 + 0x30);
  lStack_138 = lVar23;
  if (puVar26 == (undefined8 *)0x0) {
LAB_109f0c56c:
    uVar14 = 0xfffffff7;
  }
  else {
    puVar7 = puVar26;
    FUN_109ecc434();
    bVar29 = false;
    do {
      puVar11 = puVar7;
      plVar25 = (long *)puVar26[4];
      plVar22 = (long *)*plVar25;
      if (plVar22 != (long *)0x0) {
        do {
          plVar19 = (long *)0x0;
          plVar28 = plVar25;
          if (*plVar22 != 0) {
            plVar19 = plVar22;
          }
          do {
            plVar25 = plVar19;
            if ((int)plVar28[3] == 4) {
              iVar1 = (int)plVar28[5];
              if (((iVar1 - 0xbbU < 3) || (iVar1 == 0x26f)) || (iVar1 == 0x112)) {
                lVar16 = *(long *)plVar28[0x13];
                lVar17 = lVar16;
                if (*(int *)(lVar16 + 0x18) != 1) {
                  lVar17 = 0;
                }
                if ((*(byte *)(lVar16 + 0x2c) & 0xc) == 0) goto LAB_109f0baa8;
                for (; *(int *)(lVar16 + 0x28) != 0; lVar16 = **(long **)(lVar16 + 0x50)) {
                }
                lVar16 = *(long *)(lVar16 + 0x38);
                uVar14 = (uint)*(ulong *)(lVar16 + 0x20) & 0x1fffff;
                if (uVar14 != 8 && uVar14 != 4) goto LAB_109f0baa8;
                uVar20 = *(ulong *)(lVar16 + 0x20) & 0x1fffff;
                if (uVar20 == 4) {
                  if (lVar16 == param_2[1]) {
                    lVar16 = 0x18;
                    goto LAB_109f0bab4;
                  }
                  goto LAB_109f0baa8;
                }
                if ((uVar20 == 8) && (lVar16 != *param_2)) goto LAB_109f0baa8;
                lVar16 = 0x10;
LAB_109f0bab4:
                lVar16 = *(long *)((long)param_2 + lVar16);
                FUN_109ef9548(auStack_130,lVar17,0);
                lVar17 = lStack_f8;
                lStack_158 = 2;
                puVar7 = (undefined8 *)*puStack_140;
                plStack_150 = plVar28;
                FUN_109f6600c(puVar7,0xa0,8);
                if (puVar7 != (undefined8 *)0x0) {
                  puVar7[0x11] = 0;
                  puVar7[0x10] = 0;
                  puVar7[0x13] = 0;
                  puVar7[0x12] = 0;
                  puVar7[0xd] = 0;
                  puVar7[0xc] = 0;
                  puVar7[0xf] = 0;
                  puVar7[0xe] = 0;
                  puVar7[9] = 0;
                  puVar7[8] = 0;
                  puVar7[0xb] = 0;
                  puVar7[10] = 0;
                  puVar7[5] = 0;
                  puVar7[4] = 0;
                  puVar7[7] = 0;
                  puVar7[6] = 0;
                  puVar7[1] = 0;
                  *puVar7 = 0;
                  puVar7[3] = 0;
                  puVar7[2] = 0;
                }
                *(undefined4 *)(puVar7 + 3) = 1;
                puVar7[1] = 0;
                puVar7[2] = 0;
                *puVar7 = 0;
                *(undefined4 *)(puVar7 + 5) = 0;
                *(uint *)((long)puVar7 + 0x2c) = *(uint *)(lVar16 + 0x20) & 0x1fffff;
                puVar7[6] = *(undefined8 *)(lVar16 + 0x10);
                puVar7[7] = lVar16;
                if (*(char *)((long)puStack_140 + 0x61) == '\x0e') {
                  uVar12 = *(undefined4 *)(puStack_140 + 0x2c);
                }
                else {
                  uVar12 = 0x20;
                }
                FUN_109ecb048(puVar7,puVar7 + 0x10,1,uVar12);
                FUN_109ecb4f0(lStack_158,plStack_150,puVar7);
                lStack_158 = 3;
                lVar16 = *(long *)(lVar16 + 0x10);
                plStack_150 = puVar7;
                func_0x000109eca118();
                if (*(char *)(lVar16 + 4) == '\x13') {
                  uVar27 = *(undefined8 *)(*(long *)(lVar17 + 8) + 0x70);
                  puVar26 = puStack_140;
                  func_0x000109ecaf70(puStack_140,1);
                  *(undefined4 *)((long)puVar26 + 0x2c) = *(undefined4 *)((long)puVar7 + 0x2c);
                  uVar8 = puVar7[6];
                  func_0x000109eca118();
                  puVar26[6] = uVar8;
                  puVar26[7] = 0;
                  puVar26[8] = 0;
                  puVar26[9] = 0;
                  puVar26[10] = puVar7 + 0x10;
                  puVar26[0xb] = 0;
                  puVar26[0xc] = 0;
                  puVar26[0xd] = 0;
                  puVar26[0xe] = uVar27;
                  FUN_109ecb048(puVar26,puVar26 + 0x10,*(undefined1 *)((long)puVar7 + 0x9c),
                                *(undefined1 *)((long)puVar7 + 0x9d));
                  FUN_109ecb4f0(lStack_158,plStack_150,puVar26);
                  lStack_158 = 3;
                  plVar22 = (long *)(lVar17 + 0x10);
                  puVar7 = puVar26;
                  plStack_150 = puVar26;
                }
                else {
                  plVar22 = (long *)(lVar17 + 8);
                }
                plVar22 = *(long **)(*plVar22 + 0x70);
                lVar17 = *plVar22;
                if (*(int *)(lVar17 + 0x18) == 5) {
                  uVar14 = (uint)*(undefined8 *)(lVar17 + 0x48);
                  uVar6 = (*(byte *)(lVar17 + 0x45) & 0xaaaaaaaa) >> 1 |
                          (*(byte *)(lVar17 + 0x45) & 0x55555555) << 1;
                  uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
                  uVar18 = (uint)LZCOUNT((uVar6 >> 4 | (uVar6 & 0xf0f0f0f) << 4) << 0x18);
                  uVar6 = uVar14 & 0xff;
                  if (uVar18 != 3) {
                    uVar6 = uVar14 & 0xffff;
                  }
                  uVar2 = uVar14 & 1;
                  if (uVar18 != 0) {
                    uVar2 = uVar6;
                  }
                  if (uVar18 < 5) {
                    uVar14 = uVar2;
                  }
                  uVar14 = *(int *)((long)param_2 + 0x34) + uVar14;
                  uVar6 = uVar14 & 3;
                  uVar21 = (ulong)(uVar14 >> 2);
                  bVar13 = *(byte *)((long)puVar7 + 0x9d);
                  uVar18 = (bVar13 & 0xaaaaaaaa) >> 1 | (bVar13 & 0x55555555) << 1;
                  uVar18 = (uVar18 & 0xcccccccc) >> 2 | (uVar18 & 0x33333333) << 2;
                  uVar24 = uVar21 & 0x3fff0000;
                  uVar18 = (uint)LZCOUNT((uVar18 >> 4 | (uVar18 & 0xf0f0f0f) << 4) << 0x18);
                  uVar20 = 0;
                  if (uVar18 != 3) {
                    uVar20 = uVar21;
                  }
                  uVar31 = (ulong)(3 < uVar14);
                  uVar30 = 0;
                  if (uVar18 != 0) {
                    uVar31 = uVar21;
                    uVar30 = uVar20;
                  }
                  uVar20 = uVar21;
                  if (uVar18 < 5) {
                    uVar24 = 0;
                    uVar21 = uVar31;
                    uVar20 = uVar30;
                  }
                  puVar26 = (undefined8 *)*puStack_140;
                  FUN_109f6600c(puVar26,0x50,8);
                  if (puVar26 != (undefined8 *)0x0) {
                    puVar26[7] = 0;
                    puVar26[6] = 0;
                    puVar26[9] = 0;
                    puVar26[8] = 0;
                    puVar26[3] = 0;
                    puVar26[2] = 0;
                    puVar26[5] = 0;
                    puVar26[4] = 0;
                    puVar26[1] = 0;
                    *puVar26 = 0;
                  }
                  *(undefined4 *)(puVar26 + 3) = 5;
                  puVar26[1] = 0;
                  puVar26[2] = 0;
                  *puVar26 = 0;
                  FUN_109ecb048(puVar26,puVar26 + 5,1,bVar13);
                  puVar26[9] = uVar20 & 0xff00 | uVar24 | uVar21 & 0xff;
                  FUN_109ecb4f0(lStack_158,plStack_150,puVar26);
                  lStack_158 = 3;
                  puVar9 = puStack_140;
                  plStack_150 = puVar26;
                  func_0x000109ecaf70(puStack_140,1);
                  *(undefined4 *)((long)puVar9 + 0x2c) = *(undefined4 *)((long)puVar7 + 0x2c);
                  uVar8 = puVar7[6];
                  func_0x000109eca118();
                  puVar9[6] = uVar8;
                  puVar9[7] = 0;
                  puVar9[8] = 0;
                  puVar9[9] = 0;
                  puVar9[10] = puVar7 + 0x10;
                  puVar9[0xb] = 0;
                  puVar9[0xc] = 0;
                  puVar9[0xd] = 0;
                  puVar9[0xe] = puVar26 + 5;
                  FUN_109ecb048(puVar9,puVar9 + 0x10,*(undefined1 *)((long)puVar7 + 0x9c),
                                *(undefined1 *)((long)puVar7 + 0x9d));
                  FUN_109ecb4f0(lStack_158,plStack_150,puVar9);
                  lStack_158 = 3;
                  plStack_150 = puVar9;
                  if ((int)plVar28[5] == 0x112) {
                    uVar5 = *(undefined1 *)(puVar9[6] + 0xd);
                    puVar7 = puStack_140;
                    FUN_109ecb0a8(puStack_140,0x112);
                    *(undefined1 *)(puVar7 + 10) = uVar5;
                    plVar22 = puVar7 + 6;
                    FUN_109ecb048();
                    puVar7[0x10] = 0;
                    puVar7[0x11] = 0;
                    puVar7[0x12] = 0;
                    puVar7[0x13] = puVar9 + 0x10;
                    *(undefined4 *)
                     ((long)puVar7 +
                     (ulong)(byte)(&UNK_110b671ba)[(ulong)*(uint *)(puVar7 + 5) * 0x68] * 4 + 0x50)
                         = 0;
                    FUN_109ecb4f0(lStack_158,plStack_150,puVar7);
                    lStack_158 = 3;
                    plStack_150 = puVar7;
                  }
                  else {
                    if ((int)plVar28[5] == 0x26f) {
                      FUN_109f0c85c(&lStack_158,puVar9,plVar28[0x17],uVar6);
                      goto LAB_109f0c524;
                    }
                    plVar22 = &lStack_158;
                    FUN_109f0ca0c(plVar22,plVar28,puVar9);
                  }
                  if ((uVar6 != 0) || (plVar19 = plVar22, *(char *)((long)plVar22 + 0x1c) != '\x01')
                     ) {
                    puVar7 = puStack_140;
                    func_0x000109ecaef8(puStack_140,0x154);
                    plVar19 = puVar7 + 6;
                    FUN_109ecb048();
                    *(ushort *)((long)puVar7 + 0x2c) =
                         *(ushort *)((long)puVar7 + 0x2c) & 0xf000 |
                         (*(ushort *)((long)puVar7 + 0x2c) & 0xf006 | (ushort)(byte)uStack_148) & 7
                         | (uStack_148._4_2_ & 0x1ff) << 3;
                    puVar7[10] = 0;
                    puVar7[0xb] = 0;
                    puVar7[0xc] = 0;
                    puVar7[0xd] = plVar22;
                    *(char *)(puVar7 + 0xe) = (char)uVar6;
                    *(undefined8 *)((long)puVar7 + 0x71) = 0;
                    puVar7[0xf] = 0;
                    FUN_109ecb4f0(lStack_158,plStack_150,puVar7);
                    lStack_158 = 3;
                    plStack_150 = puVar7;
                  }
                  if ((long *)plVar28[8] + -1 != plVar28 + 6) {
                    plVar22 = (long *)plVar28[8];
                    do {
                      lVar17 = *plVar22;
                      plVar10 = (long *)plVar22[1];
                      *(long **)(lVar17 + 8) = plVar10;
                      *plVar10 = lVar17;
                      plVar22[1] = (long)(plVar19 + 1);
                      plVar22[2] = (long)plVar19;
                      *plVar22 = 0;
                      lVar17 = plVar19[1];
                      *plVar22 = lVar17;
                      *(long **)(lVar17 + 8) = plVar22;
                      plVar19[1] = (long)plVar22;
                      plVar22 = plVar10;
                    } while (plVar10 + -1 != plVar28 + 6);
                  }
                }
                else {
                  uVar21 = (ulong)*(byte *)((long)plVar22 + 0x1d);
                  uVar24 = -1L << (uVar21 & 0x3f);
                  uVar14 = (uint)*(byte *)((long)plVar22 + 0x1d);
                  uVar20 = 0xffffffffffffffff;
                  if (uVar14 != 0x40) {
                    uVar20 = ~uVar24;
                  }
                  uVar20 = uVar20 & (long)*(int *)((long)param_2 + 0x34);
                  plVar19 = plVar22;
                  if (uVar20 != 0) {
                    uVar14 = (uVar14 & 0xaaaaaaaa) >> 1 | (uVar14 & 0x55555555) << 1;
                    uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
                    uVar14 = (uint)LZCOUNT((uVar14 >> 4 | (uVar14 & 0xf0f0f0f) << 4) << 0x18);
                    if (uVar14 < 4) {
                      uVar30 = 0;
                      uVar24 = 0;
                      uVar31 = 0;
                      if (uVar14 == 0) {
                        uVar20 = 1;
                      }
                    }
                    else {
                      uVar24 = uVar20;
                      if (uVar14 == 4) {
                        uVar30 = 0;
                        uVar31 = 0;
                      }
                      else {
                        uVar31 = uVar20;
                        if (uVar14 == 5) {
                          uVar30 = 0;
                        }
                        else {
                          uVar30 = uVar20 & 0xffffffff00000000;
                        }
                      }
                    }
                    puVar26 = (undefined8 *)*puStack_140;
                    FUN_109f6600c(puVar26,0x50,8);
                    if (puVar26 != (undefined8 *)0x0) {
                      puVar26[7] = 0;
                      puVar26[6] = 0;
                      puVar26[9] = 0;
                      puVar26[8] = 0;
                      puVar26[3] = 0;
                      puVar26[2] = 0;
                      puVar26[5] = 0;
                      puVar26[4] = 0;
                      puVar26[1] = 0;
                      *puVar26 = 0;
                    }
                    *(undefined4 *)(puVar26 + 3) = 5;
                    puVar26[1] = 0;
                    puVar26[2] = 0;
                    *puVar26 = 0;
                    FUN_109ecb048(puVar26,puVar26 + 5,1,uVar21);
                    puVar26[9] = uVar30 | uVar31 & 0xffff0000 | uVar24 & 0xff00 | uVar20 & 0xff;
                    FUN_109ecb4f0(lStack_158,plStack_150,puVar26);
                    lStack_158 = 3;
                    plVar19 = &lStack_158;
                    plStack_150 = puVar26;
                    FUN_109ece1b0(plVar19,0x11d,plVar22,puVar26 + 5);
                    uVar21 = (ulong)*(byte *)((long)plVar19 + 0x1d);
                    uVar24 = -1L << (uVar21 & 0x3f);
                  }
                  uVar20 = (ulong)~(uint)uVar24 & 3;
                  if ((int)uVar21 == 0x40) {
                    uVar20 = 3;
                  }
                  if (uVar20 == 0) {
                    puVar26 = (undefined8 *)*puStack_140;
                    FUN_109f6600c(puVar26,0x50,8);
                    if (puVar26 != (undefined8 *)0x0) {
                      puVar26[7] = 0;
                      puVar26[6] = 0;
                      puVar26[9] = 0;
                      puVar26[8] = 0;
                      puVar26[3] = 0;
                      puVar26[2] = 0;
                      puVar26[5] = 0;
                      puVar26[4] = 0;
                      puVar26[1] = 0;
                      *puVar26 = 0;
                    }
                    *(undefined4 *)(puVar26 + 3) = 5;
                    puVar26[1] = 0;
                    puVar26[2] = 0;
                    plVar22 = puVar26 + 5;
                    *puVar26 = 0;
                    FUN_109ecb048(puVar26,plVar22,1,uVar21);
                    puVar26[9] = 0;
                    FUN_109ecb4f0(lStack_158,plStack_150,puVar26);
                    lStack_158 = 3;
                    plStack_150 = puVar26;
                  }
                  else {
                    plVar22 = plVar19;
                    if ((int)uVar21 == 0x40 || (uVar20 ^ uVar24) != 0xffffffffffffffff) {
                      if ((uVar21 & 1) != 0) {
                        uVar20 = 1;
                      }
                      puVar26 = (undefined8 *)*puStack_140;
                      FUN_109f6600c(puVar26,0x50,8);
                      if (puVar26 != (undefined8 *)0x0) {
                        puVar26[7] = 0;
                        puVar26[6] = 0;
                        puVar26[9] = 0;
                        puVar26[8] = 0;
                        puVar26[3] = 0;
                        puVar26[2] = 0;
                        puVar26[5] = 0;
                        puVar26[4] = 0;
                        puVar26[1] = 0;
                        *puVar26 = 0;
                      }
                      *(undefined4 *)(puVar26 + 3) = 5;
                      puVar26[1] = 0;
                      puVar26[2] = 0;
                      *puVar26 = 0;
                      FUN_109ecb048(puVar26,puVar26 + 5,1,uVar21);
                      puVar26[9] = uVar20;
                      FUN_109ecb4f0(lStack_158,plStack_150,puVar26);
                      lStack_158 = 3;
                      plVar22 = &lStack_158;
                      plStack_150 = puVar26;
                      FUN_109ece1b0(plVar22,0x120,plVar19,puVar26 + 5);
                    }
                  }
                  puVar26 = (undefined8 *)*puStack_140;
                  FUN_109f6600c(puVar26,0x50,8);
                  if (puVar26 != (undefined8 *)0x0) {
                    puVar26[7] = 0;
                    puVar26[6] = 0;
                    puVar26[9] = 0;
                    puVar26[8] = 0;
                    puVar26[3] = 0;
                    puVar26[2] = 0;
                    puVar26[5] = 0;
                    puVar26[4] = 0;
                    puVar26[1] = 0;
                    *puVar26 = 0;
                  }
                  *(undefined4 *)(puVar26 + 3) = 5;
                  puVar26[1] = 0;
                  puVar26[2] = 0;
                  *puVar26 = 0;
                  FUN_109ecb048(puVar26,puVar26 + 5,1,0x20);
                  puVar26[9] = 2;
                  FUN_109ecb4f0(lStack_158,plStack_150,puVar26);
                  lStack_158 = 3;
                  plVar10 = &lStack_158;
                  plStack_150 = puVar26;
                  FUN_109ece1b0(plVar10,0x14e,plVar19,puVar26 + 5);
                  puVar26 = puStack_140;
                  func_0x000109ecaf70(puStack_140,1);
                  *(undefined4 *)((long)puVar26 + 0x2c) = *(undefined4 *)((long)puVar7 + 0x2c);
                  uVar8 = puVar7[6];
                  func_0x000109eca118();
                  puVar26[6] = uVar8;
                  puVar26[7] = 0;
                  puVar26[8] = 0;
                  puVar26[9] = 0;
                  puVar26[10] = puVar7 + 0x10;
                  puVar26[0xb] = 0;
                  puVar26[0xc] = 0;
                  puVar26[0xd] = 0;
                  puVar26[0xe] = plVar10;
                  FUN_109ecb048(puVar26,puVar26 + 0x10,*(undefined1 *)((long)puVar7 + 0x9c),
                                *(undefined1 *)((long)puVar7 + 0x9d));
                  FUN_109ecb4f0(lStack_158,plStack_150,puVar26);
                  lStack_158 = 3;
                  plStack_150 = puVar26;
                  if ((int)plVar28[5] == 0x112) {
                    uVar5 = *(undefined1 *)(puVar26[6] + 0xd);
                    puVar7 = puStack_140;
                    FUN_109ecb0a8(puStack_140,0x112);
                    *(undefined1 *)(puVar7 + 10) = uVar5;
                    plVar19 = puVar7 + 6;
                    FUN_109ecb048();
                    puVar7[0x10] = 0;
                    puVar7[0x11] = 0;
                    puVar7[0x12] = 0;
                    puVar7[0x13] = puVar26 + 0x10;
                    *(undefined4 *)
                     ((long)puVar7 +
                     (ulong)(byte)(&UNK_110b671ba)[(ulong)*(uint *)(puVar7 + 5) * 0x68] * 4 + 0x50)
                         = 0;
                    FUN_109ecb4f0(lStack_158,plStack_150,puVar7);
                    lStack_158 = 3;
                    plStack_150 = puVar7;
                  }
                  else {
                    if ((int)plVar28[5] == 0x26f) {
                      FUN_109f0caa4(&lStack_158,puVar26,plVar28[0x17],plVar22,0,4);
                      goto LAB_109f0c524;
                    }
                    plVar19 = &lStack_158;
                    FUN_109f0ca0c(plVar19,plVar28,puVar26);
                  }
                  lVar17 = *plVar22;
                  if (*(int *)(lVar17 + 0x18) == 5) {
                    uVar20 = *(ulong *)(lVar17 + 0x48);
                    uVar14 = (*(byte *)(lVar17 + 0x45) & 0xaaaaaaaa) >> 1 |
                             (*(byte *)(lVar17 + 0x45) & 0x55555555) << 1;
                    uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
                    uVar14 = (uint)LZCOUNT((uVar14 >> 4 | (uVar14 & 0xf0f0f0f) << 4) << 0x18);
                    if (uVar14 < 4) {
                      if (uVar14 == 0) {
                        uVar20 = uVar20 & 1;
                      }
                      else {
                        uVar20 = uVar20 & 0xff;
                      }
                    }
                    else if (uVar14 == 4) {
                      uVar20 = uVar20 & 0xffff;
                    }
                    else if (uVar14 == 5) {
                      uVar20 = uVar20 & 0xffffffff;
                    }
                    if (uVar20 < *(byte *)((long)plVar19 + 0x1c)) {
                      plVar10 = plVar19;
                      if (*(byte *)((long)plVar19 + 0x1c) != 1) {
                        puVar7 = puStack_140;
                        func_0x000109ecaef8(puStack_140,0x154);
                        plVar10 = puVar7 + 6;
                        FUN_109ecb048();
                        *(ushort *)((long)puVar7 + 0x2c) =
                             *(ushort *)((long)puVar7 + 0x2c) & 0xf000 |
                             (*(ushort *)((long)puVar7 + 0x2c) & 0xf006 | (ushort)(byte)uStack_148)
                             & 7 | (uStack_148._4_2_ & 0x1ff) << 3;
                        puVar7[10] = 0;
                        puVar7[0xb] = 0;
                        puVar7[0xc] = 0;
                        puVar7[0xd] = plVar19;
                        *(char *)(puVar7 + 0xe) = (char)uVar20;
                        *(undefined8 *)((long)puVar7 + 0x71) = 0;
                        puVar7[0xf] = 0;
                        FUN_109ecb4f0(lStack_158,plStack_150,puVar7);
                        lStack_158 = 3;
                        plStack_150 = puVar7;
                      }
                    }
                    else {
                      puVar7 = (undefined8 *)*puStack_140;
                      FUN_109f6600c(puVar7,0x48,8);
                      *(undefined4 *)(puVar7 + 3) = 7;
                      puVar7[1] = 0;
                      puVar7[2] = 0;
                      *puVar7 = 0;
                      plVar10 = puVar7 + 5;
                      FUN_109ecb048();
                      FUN_109ece5ec(&lStack_158,puVar7);
                    }
                  }
                  else {
                    uVar20 = (ulong)*(byte *)((long)plVar19 + 0x1c);
                    if (*(byte *)((long)plVar19 + 0x1c) != 0) {
                      uVar24 = 0;
                      do {
                        if (((int)uVar20 == 1) && (uVar24 == 0)) {
                          uVar20 = 1;
                          plVar10 = plVar19;
                        }
                        else {
                          puVar7 = puStack_140;
                          func_0x000109ecaef8(puStack_140,0x154);
                          plVar10 = puVar7 + 6;
                          FUN_109ecb048();
                          *(ushort *)((long)puVar7 + 0x2c) =
                               *(ushort *)((long)puVar7 + 0x2c) & 0xf000 |
                               (*(ushort *)((long)puVar7 + 0x2c) & 0xf006 | (ushort)(byte)uStack_148
                               ) & 7 | (uStack_148._4_2_ & 0x1ff) << 3;
                          puVar7[10] = 0;
                          puVar7[0xb] = 0;
                          puVar7[0xc] = 0;
                          puVar7[0xd] = plVar19;
                          *(char *)(puVar7 + 0xe) = (char)uVar24;
                          *(undefined8 *)((long)puVar7 + 0x71) = 0;
                          puVar7[0xf] = 0;
                          FUN_109ecb4f0(lStack_158,plStack_150,puVar7);
                          lStack_158 = 3;
                          plStack_150 = puVar7;
                          uVar20 = (ulong)*(byte *)((long)plVar19 + 0x1c);
                        }
                        auStack_f0[uVar24] = plVar10;
                        uVar24 = uVar24 + 1;
                      } while (uVar24 < uVar20);
                    }
                    plVar10 = &lStack_158;
                    func_0x000109f0ccdc(plVar10,auStack_f0,plVar22,0);
                  }
                  if ((long *)plVar28[8] + -1 != plVar28 + 6) {
                    plVar22 = (long *)plVar28[8];
                    do {
                      lVar17 = *plVar22;
                      plVar19 = (long *)plVar22[1];
                      *(long **)(lVar17 + 8) = plVar19;
                      *plVar19 = lVar17;
                      plVar22[1] = (long)(plVar10 + 1);
                      plVar22[2] = (long)plVar10;
                      *plVar22 = 0;
                      lVar17 = plVar10[1];
                      *plVar22 = lVar17;
                      *(long **)(lVar17 + 8) = plVar22;
                      plVar10[1] = (long)plVar22;
                      plVar22 = plVar19;
                    } while (plVar19 + -1 != plVar28 + 6);
                  }
                }
LAB_109f0c524:
                FUN_109ef9640(auStack_130);
                bVar13 = 1;
              }
              else {
LAB_109f0baa8:
                bVar13 = 0;
              }
              bVar29 = (bool)(bVar29 | bVar13);
            }
            if (plVar25 == (long *)0x0) goto LAB_109f0c54c;
            plVar22 = (long *)*plVar25;
            plVar19 = (long *)0x0;
            plVar28 = plVar25;
          } while (plVar22 == (long *)0x0);
        } while( true );
      }
LAB_109f0c54c:
      puVar7 = puVar11;
      FUN_109ecc434();
      puVar26 = puVar11;
    } while (puVar11 != (undefined8 *)0x0);
    if (!bVar29) goto LAB_109f0c56c;
    uVar14 = 0;
  }
  *(uint *)(lVar23 + 0x84) = *(uint *)(lVar23 + 0x84) & uVar14;
  plVar15 = (long *)*plVar15;
  plVar22 = (long *)*plVar15;
  while( true ) {
    if (plVar22 == (long *)0x0) goto LAB_109f0c5a0;
    lVar23 = plVar15[6];
    if (lVar23 != 0) break;
    plVar15 = plVar22;
    plVar22 = (long *)*plVar22;
  }
  goto LAB_109f0b9ac;
}



/* Entry: 109f0c62c; end: 109f0c70f;  */

ulong FUN_109f0c62c(ulong param_1)

{
  ulong uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  
  uVar2 = (uint)(short)(*(short *)(param_1 + 0x61) << 8);
  if (((int)uVar2 < 0x400) || (uVar2 == 0x700)) {
    uVar6 = param_1;
    FUN_109f0c710(param_1,8,1);
    uVar2 = (uint)*(ushort *)(param_1 + 0x61) << 8;
  }
  else {
    uVar6 = 0;
  }
  if (((int)(uVar2 << 0x10) >> 0x18) - 1U < 4) {
    uVar1 = param_1;
    FUN_109f0c710(param_1,4,(uVar2 & 0xffff) == 0x400);
    uVar6 = (ulong)((uint)uVar6 | (uint)uVar1);
  }
  plVar5 = *(long **)(param_1 + 0x178);
  do {
    plVar3 = (long *)*plVar5;
    if (plVar3 == (long *)0x0) {
      return uVar6;
    }
    lVar4 = plVar5[6];
    plVar5 = plVar3;
  } while (lVar4 == 0);
  uVar2 = 0x17;
  if ((int)uVar6 == 0) {
    uVar2 = 0xfffffff7;
  }
  *(uint *)(lVar4 + 0x84) = *(uint *)(lVar4 + 0x84) & uVar2;
  while (plVar5 = (long *)*plVar3, plVar5 != (long *)0x0) {
    lVar4 = plVar3[6];
    plVar3 = plVar5;
    if (lVar4 != 0) {
      *(uint *)(lVar4 + 0x84) = *(uint *)(lVar4 + 0x84) & uVar2;
    }
  }
  return uVar6;
}


