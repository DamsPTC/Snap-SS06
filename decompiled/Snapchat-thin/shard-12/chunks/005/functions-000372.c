/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1092350bc; end: 10923514f;  */

undefined8 * FUN_1092350bc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b97f88;
  func_0x0001092350f8(param_1 + 0x11);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109235150; end: 10923521b;  */

void FUN_109235150(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined8 *extraout_x8;
  undefined4 *puVar8;
  undefined4 uStack_144;
  undefined8 uStack_140;
  int iStack_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined1 auStack_a0 [80];
  undefined1 *puStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  iVar7 = (int)auStack_a0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10923521c(auStack_a0,param_3,param_4);
  (**(code **)(*param_2 + 0xb0))(param_1,param_2);
  uStack_48 = 0;
  puVar6 = puStack_50;
  if (puStack_50 != auStack_a0) {
    iVar7 = 4;
    __ZdlPvSt11align_val_t();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  uStack_48 = 0;
  if (puStack_50 != auStack_a0) {
    iVar7 = 4;
    __ZdlPvSt11align_val_t();
  }
  __Unwind_Resume();
  extraout_x8[7] = 0;
  extraout_x8[6] = 0;
  extraout_x8[9] = 0;
  extraout_x8[8] = 0;
  extraout_x8[3] = 0;
  extraout_x8[2] = 0;
  extraout_x8[5] = 0;
  extraout_x8[4] = 0;
  extraout_x8[1] = 0;
  *extraout_x8 = 0;
  extraout_x8[10] = extraout_x8;
  extraout_x8[0xc] = 4;
  extraout_x8[0xb] = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_110 = 0x3f800000;
  puVar4 = *(undefined4 **)(puVar6 + 0x10);
  if (*(undefined4 **)(puVar6 + 8) != puVar4) {
    uVar2 = 6;
    if (iVar7 == 0) {
      uVar2 = 4;
    }
    puVar8 = *(undefined4 **)(puVar6 + 8) + 6;
    do {
      func_0x000107270fb0(&uStack_130,puVar8,puVar8);
      uStack_144 = *puVar8;
      iStack_138 = puVar8[2];
      uStack_140 = CONCAT44(7,uVar2);
      uStack_134 = 0;
      if (iStack_138 == -1) {
        uStack_134 = 4;
      }
      FUN_1092375bc(extraout_x8,&uStack_144);
      puVar1 = puVar8 + 10;
      puVar8 = puVar8 + 0x10;
    } while (puVar1 != puVar4);
  }
  puVar4 = *(undefined4 **)(puVar6 + 0x70);
  if (*(undefined4 **)(puVar6 + 0x68) != puVar4) {
    puVar8 = *(undefined4 **)(puVar6 + 0x68) + 6;
    do {
      func_0x000107270fb0(&uStack_130,puVar8,puVar8);
      uStack_144 = *puVar8;
      uStack_140 = 0x700000001;
      iStack_138 = puVar8[2];
      uStack_134 = 0;
      if (iStack_138 == -1) {
        uStack_134 = 4;
      }
      FUN_1092375bc(extraout_x8,&uStack_144);
      puVar1 = puVar8 + 4;
      puVar8 = puVar8 + 10;
    } while (puVar1 != puVar4);
  }
  puVar4 = *(undefined4 **)(puVar6 + 0x40);
  if (*(undefined4 **)(puVar6 + 0x38) != puVar4) {
    puVar8 = *(undefined4 **)(puVar6 + 0x38) + 6;
    do {
      func_0x000107270fb0(&uStack_130,puVar8,puVar8);
      uStack_144 = *puVar8;
      uStack_140 = 0x700000002;
      iStack_138 = puVar8[2];
      uStack_134 = 0;
      if (iStack_138 == -1) {
        uStack_134 = 4;
      }
      FUN_1092375bc(extraout_x8,&uStack_144);
      puVar1 = puVar8 + 4;
      puVar8 = puVar8 + 10;
    } while (puVar1 != puVar4);
  }
  puVar4 = *(undefined4 **)(puVar6 + 0x28);
  if (*(undefined4 **)(puVar6 + 0x20) != puVar4) {
    puVar8 = *(undefined4 **)(puVar6 + 0x20) + 6;
    do {
      func_0x000107270fb0(&uStack_130,puVar8,puVar8);
      uStack_144 = *puVar8;
      uStack_140 = 0x700000005;
      iStack_138 = puVar8[3];
      uStack_134 = 0;
      if (iStack_138 == -1) {
        uStack_134 = 4;
      }
      FUN_1092375bc(extraout_x8,&uStack_144);
      puVar1 = puVar8 + 10;
      puVar8 = puVar8 + 0x10;
    } while (puVar1 != puVar4);
  }
  puVar4 = *(undefined4 **)(puVar6 + 0x58);
  if (*(undefined4 **)(puVar6 + 0x50) != puVar4) {
    puVar8 = *(undefined4 **)(puVar6 + 0x50) + 6;
    do {
      func_0x000107270fb0(&uStack_130,puVar8,puVar8);
      uStack_144 = *puVar8;
      uStack_140 = 0x700000003;
      iStack_138 = puVar8[3];
      uStack_134 = 0;
      if (iStack_138 == -1) {
        uStack_134 = 4;
      }
      FUN_1092375bc(extraout_x8,&uStack_144);
      puVar1 = puVar8 + 4;
      puVar8 = puVar8 + 10;
    } while (puVar1 != puVar4);
  }
  lVar5 = extraout_x8[0xb];
  lVar3 = 0;
  if (lVar5 != 0) {
    lVar3 = LZCOUNT(lVar5) * -2 + 0x7e;
  }
  FUN_109235bac(extraout_x8[10],extraout_x8[10] + lVar5 * 0x14,lVar3,1);
  func_0x00010726f2e4(&uStack_130);
  return;
}



/* Entry: 10923521c; end: 10923551f;  */

void FUN_10923521c(undefined8 *param_1,long param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  int iStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
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
  param_1[10] = param_1;
  param_1[0xc] = 4;
  param_1[0xb] = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 0x3f800000;
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  if (*(undefined4 **)(param_2 + 8) != puVar4) {
    uVar2 = 6;
    if (param_3 == 0) {
      uVar2 = 4;
    }
    puVar6 = *(undefined4 **)(param_2 + 8) + 6;
    do {
      func_0x000107270fb0(&uStack_90,puVar6,puVar6);
      uStack_a4 = *puVar6;
      iStack_98 = puVar6[2];
      uStack_a0 = CONCAT44(7,uVar2);
      uStack_94 = 0;
      if (iStack_98 == -1) {
        uStack_94 = 4;
      }
      FUN_1092375bc(param_1,&uStack_a4);
      puVar1 = puVar6 + 10;
      puVar6 = puVar6 + 0x10;
    } while (puVar1 != puVar4);
  }
  puVar4 = *(undefined4 **)(param_2 + 0x70);
  if (*(undefined4 **)(param_2 + 0x68) != puVar4) {
    puVar6 = *(undefined4 **)(param_2 + 0x68) + 6;
    do {
      func_0x000107270fb0(&uStack_90,puVar6,puVar6);
      uStack_a4 = *puVar6;
      uStack_a0 = 0x700000001;
      iStack_98 = puVar6[2];
      uStack_94 = 0;
      if (iStack_98 == -1) {
        uStack_94 = 4;
      }
      FUN_1092375bc(param_1,&uStack_a4);
      puVar1 = puVar6 + 4;
      puVar6 = puVar6 + 10;
    } while (puVar1 != puVar4);
  }
  puVar4 = *(undefined4 **)(param_2 + 0x40);
  if (*(undefined4 **)(param_2 + 0x38) != puVar4) {
    puVar6 = *(undefined4 **)(param_2 + 0x38) + 6;
    do {
      func_0x000107270fb0(&uStack_90,puVar6,puVar6);
      uStack_a4 = *puVar6;
      uStack_a0 = 0x700000002;
      iStack_98 = puVar6[2];
      uStack_94 = 0;
      if (iStack_98 == -1) {
        uStack_94 = 4;
      }
      FUN_1092375bc(param_1,&uStack_a4);
      puVar1 = puVar6 + 4;
      puVar6 = puVar6 + 10;
    } while (puVar1 != puVar4);
  }
  puVar4 = *(undefined4 **)(param_2 + 0x28);
  if (*(undefined4 **)(param_2 + 0x20) != puVar4) {
    puVar6 = *(undefined4 **)(param_2 + 0x20) + 6;
    do {
      func_0x000107270fb0(&uStack_90,puVar6,puVar6);
      uStack_a4 = *puVar6;
      uStack_a0 = 0x700000005;
      iStack_98 = puVar6[3];
      uStack_94 = 0;
      if (iStack_98 == -1) {
        uStack_94 = 4;
      }
      FUN_1092375bc(param_1,&uStack_a4);
      puVar1 = puVar6 + 10;
      puVar6 = puVar6 + 0x10;
    } while (puVar1 != puVar4);
  }
  puVar4 = *(undefined4 **)(param_2 + 0x58);
  if (*(undefined4 **)(param_2 + 0x50) != puVar4) {
    puVar6 = *(undefined4 **)(param_2 + 0x50) + 6;
    do {
      func_0x000107270fb0(&uStack_90,puVar6,puVar6);
      uStack_a4 = *puVar6;
      uStack_a0 = 0x700000003;
      iStack_98 = puVar6[3];
      uStack_94 = 0;
      if (iStack_98 == -1) {
        uStack_94 = 4;
      }
      FUN_1092375bc(param_1,&uStack_a4);
      puVar1 = puVar6 + 4;
      puVar6 = puVar6 + 10;
    } while (puVar1 != puVar4);
  }
  lVar5 = param_1[0xb];
  lVar3 = 0;
  if (lVar5 != 0) {
    lVar3 = LZCOUNT(lVar5) * -2 + 0x7e;
  }
  FUN_109235bac(param_1[10],param_1[10] + lVar5 * 0x14,lVar3,1);
  func_0x00010726f2e4(&uStack_90);
  return;
}



/* Entry: 109235520; end: 109235563;  */

long FUN_109235520(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
    __ZdlPv();
  }
  lStack_28 = param_1;
  func_0x00010922e0d8(&lStack_28);
  return param_1;
}



/* Entry: 109235564; end: 109235b0b;  */

void FUN_109235564(long *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  code *pcVar7;
  bool bVar8;
  undefined8 ****ppppuVar9;
  long *plVar10;
  ulong uVar11;
  uint *puVar12;
  uint *puVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  uint *puVar17;
  undefined8 ***pppuVar19;
  undefined8 ***pppuVar20;
  undefined8 ****ppppuVar21;
  undefined8 ****ppppuVar22;
  long *plVar23;
  ulong uVar24;
  uint *puVar25;
  undefined8 ***pppuStack_130;
  undefined8 ***pppuStack_128;
  undefined8 ***pppuStack_120;
  long lStack_118;
  long *plStack_110;
  long lStack_100;
  long *plStack_f8;
  undefined8 ***pppuStack_f0;
  undefined8 ***pppuStack_e8;
  undefined8 ***pppuStack_e0;
  undefined8 ***pppuStack_d8;
  undefined8 ***pppuStack_d0;
  long *plStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 ***pppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  uint *puVar18;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (uint *)*param_3;
  puVar25 = (uint *)param_3[1];
  if (puVar2 == puVar25) {
    uStack_b8 = uStack_b8 & 0xffffffffffffff00;
    pppuStack_d0 = (undefined8 ****)0x0;
    plStack_c8 = (long *)0x0;
    uStack_c0 = uStack_c0 & 0xffffffffffffff00;
    (**(code **)(*param_2 + 200))(param_1,param_2,&pppuStack_d0);
  }
  else {
    puVar13 = puVar2;
    if (puVar2 + 0x20 != puVar25) {
      uVar16 = *puVar2;
      puVar12 = puVar2;
      puVar17 = puVar2 + 0x20;
      do {
        puVar18 = puVar17 + 0x20;
        uVar3 = *puVar17;
        bVar8 = uVar3 <= uVar16;
        if (uVar16 <= uVar3) {
          uVar16 = uVar3;
        }
        puVar13 = puVar17;
        if (bVar8) {
          puVar13 = puVar12;
        }
        puVar12 = puVar13;
        puVar17 = puVar18;
      } while (puVar18 != puVar25);
    }
    pppuStack_f0 = (undefined8 ****)0x0;
    pppuStack_e8 = (undefined8 ****)0x0;
    pppuStack_e0 = (undefined8 ****)0x0;
    pppuStack_d0 = &pppuStack_f0;
    plStack_c8 = (long *)((ulong)plStack_c8 & 0xffffffffffffff00);
    uVar24 = (ulong)(*puVar13 + 1);
    ppppuVar21 = (undefined8 ****)pppuStack_f0;
    ppppuVar9 = (undefined8 ****)pppuStack_e8;
    if (*puVar13 != 0xffffffff) {
      ppppuVar9 = &pppuStack_f0;
      uVar11 = uVar24;
      FUN_109237504();
      pppuStack_e0 = ppppuVar9 + uVar11 * 2;
      pppuStack_f0 = ppppuVar9;
      _bzero();
      puVar2 = (uint *)*param_3;
      puVar25 = (uint *)param_3[1];
      ppppuVar21 = (undefined8 ****)pppuStack_f0;
      ppppuVar9 = ppppuVar9 + uVar24 * 2;
    }
    for (; pppuStack_f0 = ppppuVar21, pppuStack_e8 = ppppuVar9, puVar2 != puVar25;
        puVar2 = puVar2 + 0x20) {
      FUN_109235150(&pppuStack_d0,param_2,puVar2,param_4);
      FUN_109235b0c(pppuStack_f0 + (ulong)*puVar2 * 2,&pppuStack_d0);
      plVar1 = plStack_c8;
      if (plStack_c8 != (long *)0x0) {
        plVar10 = plStack_c8 + 1;
        do {
          lVar14 = *plVar10;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar8) {
            *plVar10 = lVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      ppppuVar21 = (undefined8 ****)pppuStack_f0;
      ppppuVar9 = (undefined8 ****)pppuStack_e8;
    }
    if (ppppuVar9 == ppppuVar21) {
      pppuVar19 = (undefined8 ***)0x0;
      lVar14 = 0;
LAB_1092357f0:
      if ((long)ppppuVar9 - (long)ppppuVar21 != 0) {
        lVar15 = 0;
        ppppuVar22 = ppppuVar21;
        do {
          pppuVar19[lVar15] = *ppppuVar22;
          lVar15 = lVar15 + 1;
          ppppuVar22 = ppppuVar22 + 2;
        } while ((long)ppppuVar9 - (long)ppppuVar21 >> 4 != lVar15);
      }
    }
    else {
      uVar24 = 0;
      do {
        if (ppppuVar21[uVar24 * 2] == (undefined8 ***)0x0) {
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          plStack_c8 = (long *)0x0;
          pppuStack_d0 = (undefined8 ****)0x0;
          uStack_70 = 4;
          uStack_78 = 0;
          pppuStack_80 = &pppuStack_d0;
          (**(code **)(*param_2 + 0xb0))(&lStack_100,param_2,&pppuStack_d0);
          FUN_109235b0c(pppuStack_f0 + uVar24 * 2,&lStack_100);
          plVar1 = plStack_f8;
          if (plStack_f8 != (long *)0x0) {
            plVar10 = plStack_f8 + 1;
            do {
              lVar14 = *plVar10;
              cVar4 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar8) {
                *plVar10 = lVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
            }
          }
          uStack_78 = 0;
          ppppuVar21 = (undefined8 ****)pppuStack_f0;
          ppppuVar9 = (undefined8 ****)pppuStack_e8;
          if ((undefined8 ****)pppuStack_80 != &pppuStack_d0) {
            __ZdlPvSt11align_val_t(pppuStack_80,4);
            ppppuVar21 = (undefined8 ****)pppuStack_f0;
            ppppuVar9 = (undefined8 ****)pppuStack_e8;
          }
        }
        uVar24 = uVar24 + 1;
        uVar11 = (long)ppppuVar9 - (long)ppppuVar21 >> 4;
      } while (uVar24 < uVar11);
      if (ppppuVar9 != ppppuVar21) {
        if (uVar11 >> 0x3d != 0) goto LAB_109235a58;
        pppuVar20 = (undefined8 ***)((long)ppppuVar9 - (long)ppppuVar21 >> 1);
        pppuVar19 = pppuVar20;
        __Znwm();
        _bzero();
        lVar14 = (long)pppuVar19 + (long)pppuVar20;
        goto LAB_1092357f0;
      }
      lVar14 = 0;
      pppuVar19 = (undefined8 ***)0x0;
    }
    plStack_c8 = (long *)(lVar14 - (long)pppuVar19 >> 3);
    uStack_c0 = uStack_c0 & 0xffffffffffffff00;
    uStack_b8 = uStack_b8 & 0xffffffffffffff00;
    pppuStack_d0 = pppuVar19;
    (**(code **)(*param_2 + 200))(&lStack_100,param_2,&pppuStack_d0);
    pppuVar6 = pppuStack_e0;
    pppuVar5 = pppuStack_e8;
    pppuVar20 = pppuStack_f0;
    plVar1 = plStack_f8;
    pppuStack_130 = pppuStack_f0;
    pppuStack_128 = pppuStack_e8;
    pppuStack_e8 = (undefined8 ****)0x0;
    pppuStack_e0 = (undefined8 ****)0x0;
    pppuStack_f0 = (undefined8 ****)0x0;
    pppuStack_120 = pppuVar6;
    lStack_118 = lStack_100;
    plStack_110 = plStack_f8;
    if (plStack_f8 != (long *)0x0) {
      plVar10 = plStack_f8 + 1;
      do {
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar8) {
          *plVar10 = *plVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    *param_1 = lStack_100;
    plVar10 = (long *)0x48;
    __Znwm();
    plVar23 = plVar10 + 1;
    *plVar23 = 0;
    plStack_110 = (long *)0x0;
    pppuStack_128 = (undefined8 ***)0x0;
    pppuStack_130 = (undefined8 ***)0x0;
    lStack_118 = 0;
    pppuStack_120 = (undefined8 ***)0x0;
    *plVar10 = (long)&PTR_FUN_110ae3b98;
    plVar10[2] = 0;
    plVar10[3] = lStack_100;
    plVar10[4] = (long)pppuVar20;
    plVar10[5] = (long)pppuVar5;
    pppuStack_d0 = (undefined8 ***)0x0;
    plStack_c8 = (long *)0x0;
    plVar10[6] = (long)pppuVar6;
    plVar10[7] = lStack_100;
    plVar10[8] = (long)plVar1;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c0 = 0;
    param_1[1] = (long)plVar10;
    pppuStack_d8 = &pppuStack_d0;
    FUN_109237538(&pppuStack_d8);
    if (lStack_100 != 0) {
      if (*(long *)(lStack_100 + 0x10) == 0) {
        do {
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar8) {
            *plVar23 = *plVar23 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar1 = plVar10 + 2;
        do {
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(long *)(lStack_100 + 8) = lStack_100;
        *(long **)(lStack_100 + 0x10) = plVar10;
      }
      else {
        if (*(long *)(*(long *)(lStack_100 + 0x10) + 8) != -1) goto LAB_109235980;
        do {
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar8) {
            *plVar23 = *plVar23 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar1 = plVar10 + 2;
        do {
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(long *)(lStack_100 + 8) = lStack_100;
        *(long **)(lStack_100 + 0x10) = plVar10;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      do {
        lVar14 = *plVar23;
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar8) {
          *plVar23 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
LAB_109235980:
    plVar1 = plStack_110;
    if (plStack_110 != (long *)0x0) {
      plVar10 = plStack_110 + 1;
      do {
        lVar14 = *plVar10;
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar8) {
          *plVar10 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_110 + 0x10))(plStack_110);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    pppuStack_d0 = &pppuStack_130;
    FUN_109237538(&pppuStack_d0);
    if (plStack_f8 != (long *)0x0) {
      plVar1 = plStack_f8 + 1;
      do {
        lVar14 = *plVar1;
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f8);
      }
    }
    if (pppuVar19 != (undefined8 ***)0x0) {
      __ZdlPv(pppuVar19);
    }
    pppuStack_d0 = &pppuStack_f0;
    FUN_109237538(&pppuStack_d0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_109235a58:
  FUN_1092375a8();
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109235a8c);
  (*pcVar7)();
}



/* Entry: 109235b0c; end: 109235bab;  */

undefined8 * FUN_109235b0c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 109235bac; end: 109236af3;  */

void FUN_109235bac(uint *param_1,uint *param_2,long param_3,uint param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  uint *puVar15;
  uint *puVar16;
  long lVar17;
  uint *puVar18;
  ulong uVar19;
  ulong uVar20;
  uint *puVar21;
  uint *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uStack_80;
  undefined8 uStack_78;
  uint uStack_70;
  
LAB_109235bdc:
  puVar16 = param_2 + -5;
  puVar22 = param_2 + -10;
  puVar21 = param_2 + -0xf;
  puVar18 = param_1;
LAB_109235bec:
  do {
    param_1 = puVar18;
    uVar11 = (long)param_2 - (long)param_1;
    uVar10 = ((long)uVar11 >> 2) * -0x3333333333333333;
    if (uVar10 - 2 != 0 && 1 < (long)uVar10) {
      if (uVar10 != 3) {
        if (uVar10 != 4) {
          if (uVar10 == 5) {
            puVar18 = param_1 + 5;
            puVar21 = param_1 + 10;
            puVar22 = param_1 + 0xf;
            uVar12 = *puVar18;
            if (uVar12 < *param_1) {
              if (*puVar21 < uVar12) {
                uVar12 = param_1[4];
                uVar24 = *(undefined8 *)(param_1 + 2);
                uVar23 = *(undefined8 *)param_1;
                *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 0xc);
                *(undefined8 *)param_1 = *(undefined8 *)puVar21;
                param_1[4] = param_1[0xe];
              }
              else {
                uVar12 = param_1[4];
                uVar24 = *(undefined8 *)(param_1 + 2);
                uVar23 = *(undefined8 *)param_1;
                *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 7);
                *(undefined8 *)param_1 = *(undefined8 *)puVar18;
                param_1[4] = param_1[9];
                *(undefined8 *)(param_1 + 7) = uVar24;
                *(undefined8 *)puVar18 = uVar23;
                param_1[9] = uVar12;
                if (*puVar18 <= *puVar21) goto LAB_109236be0;
                uVar12 = param_1[9];
                uVar24 = *(undefined8 *)(param_1 + 7);
                uVar23 = *(undefined8 *)puVar18;
                *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_1 + 0xc);
                *(undefined8 *)puVar18 = *(undefined8 *)puVar21;
                param_1[9] = param_1[0xe];
              }
              *(undefined8 *)(param_1 + 0xc) = uVar24;
              *(undefined8 *)puVar21 = uVar23;
              param_1[0xe] = uVar12;
            }
            else if (*puVar21 < uVar12) {
              uVar12 = param_1[9];
              uVar24 = *(undefined8 *)(param_1 + 7);
              uVar23 = *(undefined8 *)puVar18;
              *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_1 + 0xc);
              *(undefined8 *)puVar18 = *(undefined8 *)puVar21;
              param_1[9] = param_1[0xe];
              *(undefined8 *)(param_1 + 0xc) = uVar24;
              *(undefined8 *)puVar21 = uVar23;
              param_1[0xe] = uVar12;
              if (*puVar18 < *param_1) {
                uVar12 = param_1[4];
                uVar24 = *(undefined8 *)(param_1 + 2);
                uVar23 = *(undefined8 *)param_1;
                *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 7);
                *(undefined8 *)param_1 = *(undefined8 *)puVar18;
                param_1[4] = param_1[9];
                *(undefined8 *)(param_1 + 7) = uVar24;
                *(undefined8 *)puVar18 = uVar23;
                param_1[9] = uVar12;
              }
            }
LAB_109236be0:
            if (*puVar22 < *puVar21) {
              uVar12 = param_1[0xe];
              uVar24 = *(undefined8 *)(param_1 + 0xc);
              uVar23 = *(undefined8 *)puVar21;
              *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x11);
              *(undefined8 *)puVar21 = *(undefined8 *)puVar22;
              param_1[0xe] = param_1[0x13];
              *(undefined8 *)(param_1 + 0x11) = uVar24;
              *(undefined8 *)puVar22 = uVar23;
              param_1[0x13] = uVar12;
              if (*puVar21 < *puVar18) {
                uVar12 = param_1[9];
                uVar24 = *(undefined8 *)(param_1 + 7);
                uVar23 = *(undefined8 *)puVar18;
                *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_1 + 0xc);
                *(undefined8 *)puVar18 = *(undefined8 *)puVar21;
                param_1[9] = param_1[0xe];
                *(undefined8 *)(param_1 + 0xc) = uVar24;
                *(undefined8 *)puVar21 = uVar23;
                param_1[0xe] = uVar12;
                if (*puVar18 < *param_1) {
                  uVar12 = param_1[4];
                  uVar24 = *(undefined8 *)(param_1 + 2);
                  uVar23 = *(undefined8 *)param_1;
                  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 7);
                  *(undefined8 *)param_1 = *(undefined8 *)puVar18;
                  param_1[4] = param_1[9];
                  *(undefined8 *)(param_1 + 7) = uVar24;
                  *(undefined8 *)puVar18 = uVar23;
                  param_1[9] = uVar12;
                }
              }
            }
            if (*puVar16 < *puVar22) {
              uVar12 = param_1[0x13];
              uVar24 = *(undefined8 *)(param_1 + 0x11);
              uVar23 = *(undefined8 *)puVar22;
              uVar4 = param_2[-1];
              uVar25 = *(undefined8 *)puVar16;
              *(undefined8 *)(param_1 + 0x11) = *(undefined8 *)(param_2 + -3);
              *(undefined8 *)puVar22 = uVar25;
              param_1[0x13] = uVar4;
              *(undefined8 *)(param_2 + -3) = uVar24;
              *(undefined8 *)puVar16 = uVar23;
              param_2[-1] = uVar12;
              if (*puVar22 < *puVar21) {
                uVar12 = param_1[0xe];
                uVar24 = *(undefined8 *)(param_1 + 0xc);
                uVar23 = *(undefined8 *)puVar21;
                *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x11);
                *(undefined8 *)puVar21 = *(undefined8 *)puVar22;
                param_1[0xe] = param_1[0x13];
                *(undefined8 *)(param_1 + 0x11) = uVar24;
                *(undefined8 *)puVar22 = uVar23;
                param_1[0x13] = uVar12;
                if (*puVar21 < *puVar18) {
                  uVar12 = param_1[9];
                  uVar24 = *(undefined8 *)(param_1 + 7);
                  uVar23 = *(undefined8 *)puVar18;
                  *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_1 + 0xc);
                  *(undefined8 *)puVar18 = *(undefined8 *)puVar21;
                  param_1[9] = param_1[0xe];
                  *(undefined8 *)(param_1 + 0xc) = uVar24;
                  *(undefined8 *)puVar21 = uVar23;
                  param_1[0xe] = uVar12;
                  if (*puVar18 < *param_1) {
                    uVar12 = param_1[4];
                    uVar24 = *(undefined8 *)(param_1 + 2);
                    uVar23 = *(undefined8 *)param_1;
                    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 7);
                    *(undefined8 *)param_1 = *(undefined8 *)puVar18;
                    param_1[4] = param_1[9];
                    *(undefined8 *)(param_1 + 7) = uVar24;
                    *(undefined8 *)puVar18 = uVar23;
                    param_1[9] = uVar12;
                  }
                }
              }
            }
            return;
          }
          goto LAB_109235c34;
        }
        puVar18 = param_1 + 5;
        uVar12 = *puVar18;
        puVar21 = param_1 + 10;
        uVar4 = *puVar21;
        if (uVar12 < *param_1) {
          if (uVar4 < uVar12) {
            uVar24 = *(undefined8 *)(param_1 + 2);
            uVar23 = *(undefined8 *)param_1;
            uVar12 = param_1[4];
            *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 0xc);
            *(undefined8 *)param_1 = *(undefined8 *)puVar21;
            param_1[4] = param_1[0xe];
            *(undefined8 *)(param_1 + 0xc) = uVar24;
            *(undefined8 *)puVar21 = uVar23;
          }
          else {
            uVar24 = *(undefined8 *)(param_1 + 2);
            uVar23 = *(undefined8 *)param_1;
            uVar12 = param_1[4];
            *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 7);
            *(undefined8 *)param_1 = *(undefined8 *)puVar18;
            param_1[4] = param_1[9];
            *(undefined8 *)(param_1 + 7) = uVar24;
            *(undefined8 *)puVar18 = uVar23;
            param_1[9] = uVar12;
            if (param_1[5] <= uVar4) goto LAB_109236a2c;
            uVar12 = param_1[9];
            uVar24 = *(undefined8 *)(param_1 + 7);
            uVar23 = *(undefined8 *)puVar18;
            *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_1 + 0xc);
            *(undefined8 *)puVar18 = *(undefined8 *)puVar21;
            param_1[9] = param_1[0xe];
            *(undefined8 *)(param_1 + 0xc) = uVar24;
            *(undefined8 *)puVar21 = uVar23;
          }
          param_1[0xe] = uVar12;
        }
        else if (uVar4 < uVar12) {
          uVar12 = param_1[9];
          uVar24 = *(undefined8 *)(param_1 + 7);
          uVar23 = *(undefined8 *)puVar18;
          *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_1 + 0xc);
          *(undefined8 *)puVar18 = *(undefined8 *)puVar21;
          param_1[9] = param_1[0xe];
          *(undefined8 *)(param_1 + 0xc) = uVar24;
          *(undefined8 *)puVar21 = uVar23;
          param_1[0xe] = uVar12;
          if (param_1[5] < *param_1) {
            uVar24 = *(undefined8 *)(param_1 + 2);
            uVar23 = *(undefined8 *)param_1;
            uVar12 = param_1[4];
            *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 7);
            *(undefined8 *)param_1 = *(undefined8 *)puVar18;
            param_1[4] = param_1[9];
            *(undefined8 *)(param_1 + 7) = uVar24;
            *(undefined8 *)puVar18 = uVar23;
            param_1[9] = uVar12;
          }
        }
LAB_109236a2c:
        if (*puVar21 <= *puVar16) {
          return;
        }
        uVar24 = *(undefined8 *)(param_1 + 0xc);
        uVar23 = *(undefined8 *)puVar21;
        uVar12 = param_1[0xe];
        uVar4 = param_2[-1];
        uVar25 = *(undefined8 *)puVar16;
        *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + -3);
        *(undefined8 *)puVar21 = uVar25;
        param_1[0xe] = uVar4;
        param_2[-1] = uVar12;
        *(undefined8 *)(param_2 + -3) = uVar24;
        *(undefined8 *)puVar16 = uVar23;
        if (*puVar18 <= *puVar21) {
          return;
        }
        uVar12 = param_1[9];
        uVar24 = *(undefined8 *)(param_1 + 7);
        uVar23 = *(undefined8 *)puVar18;
        *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_1 + 0xc);
        *(undefined8 *)puVar18 = *(undefined8 *)puVar21;
        param_1[9] = param_1[0xe];
        *(undefined8 *)(param_1 + 0xc) = uVar24;
        *(undefined8 *)puVar21 = uVar23;
        param_1[0xe] = uVar12;
LAB_109236a94:
        puVar18 = param_1 + 5;
        if (*param_1 <= *puVar18) {
          return;
        }
        uVar24 = *(undefined8 *)(param_1 + 2);
        uVar23 = *(undefined8 *)param_1;
        uVar12 = param_1[4];
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 7);
        *(undefined8 *)param_1 = *(undefined8 *)puVar18;
        param_1[4] = param_1[9];
        *(undefined8 *)(param_1 + 7) = uVar24;
        *(undefined8 *)puVar18 = uVar23;
        param_1[9] = uVar12;
        return;
      }
      puVar18 = param_1 + 5;
      uVar12 = *puVar18;
      puVar16 = param_2 + -5;
      if (*param_1 <= uVar12) {
        if (uVar12 <= *puVar16) {
          return;
        }
        uVar24 = *(undefined8 *)(param_1 + 7);
        uVar23 = *(undefined8 *)puVar18;
        uVar12 = param_1[9];
        uVar4 = param_2[-1];
        uVar25 = *(undefined8 *)puVar16;
        *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_2 + -3);
        *(undefined8 *)puVar18 = uVar25;
        param_1[9] = uVar4;
        param_2[-1] = uVar12;
        *(undefined8 *)(param_2 + -3) = uVar24;
        *(undefined8 *)puVar16 = uVar23;
        goto LAB_109236a94;
      }
      if (uVar12 <= *puVar16) {
        uVar24 = *(undefined8 *)(param_1 + 2);
        uVar23 = *(undefined8 *)param_1;
        uVar12 = param_1[4];
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 7);
        *(undefined8 *)param_1 = *(undefined8 *)puVar18;
        param_1[4] = param_1[9];
        *(undefined8 *)(param_1 + 7) = uVar24;
        *(undefined8 *)puVar18 = uVar23;
        param_1[9] = uVar12;
        if (param_1[5] <= *puVar16) {
          return;
        }
        uVar24 = *(undefined8 *)(param_1 + 7);
        uVar23 = *(undefined8 *)puVar18;
        uVar12 = param_1[9];
        uVar4 = param_2[-1];
        uVar25 = *(undefined8 *)puVar16;
        *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_2 + -3);
        *(undefined8 *)puVar18 = uVar25;
        param_1[9] = uVar4;
        param_2[-1] = uVar12;
        goto LAB_10923651c;
      }
LAB_1092364f0:
      uVar24 = *(undefined8 *)(param_1 + 2);
      uVar23 = *(undefined8 *)param_1;
      uVar12 = param_1[4];
      uVar26 = *(undefined8 *)(param_2 + -3);
      uVar25 = *(undefined8 *)(param_2 + -5);
      param_1[4] = param_2[-1];
      *(undefined8 *)(param_1 + 2) = uVar26;
      *(undefined8 *)param_1 = uVar25;
      param_2[-1] = uVar12;
LAB_10923651c:
      *(undefined8 *)(param_2 + -3) = uVar24;
      *(undefined8 *)(param_2 + -5) = uVar23;
      return;
    }
    if (uVar10 < 2) {
      return;
    }
    if (uVar10 == 2) {
      if (*param_1 <= param_2[-5]) {
        return;
      }
      goto LAB_1092364f0;
    }
LAB_109235c34:
    if ((long)uVar11 < 0x1e0) {
      puVar18 = param_1 + 5;
      if ((param_4 & 1) == 0) {
        if (param_1 == param_2 || puVar18 == param_2) {
          return;
        }
        do {
          puVar16 = puVar18;
          uVar12 = param_1[5];
          if (uVar12 < *param_1) {
            uVar24 = *(undefined8 *)(param_1 + 8);
            uVar23 = *(undefined8 *)(param_1 + 6);
            puVar18 = puVar16;
            do {
              puVar21 = puVar18;
              *(undefined8 *)(puVar21 + 2) = *(undefined8 *)(puVar21 + -3);
              *(undefined8 *)puVar21 = *(undefined8 *)(puVar21 + -5);
              puVar21[4] = puVar21[-1];
              puVar18 = puVar21 + -5;
            } while (uVar12 < puVar21[-10]);
            puVar21[-5] = uVar12;
            *(undefined8 *)(puVar21 + -2) = uVar24;
            *(undefined8 *)(puVar21 + -4) = uVar23;
          }
          puVar18 = puVar16 + 5;
          param_1 = puVar16;
        } while (puVar16 + 5 != param_2);
        return;
      }
      if (param_1 == param_2 || puVar18 == param_2) {
        return;
      }
      lVar14 = 0;
      puVar16 = param_1;
      break;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar13 = uVar10 - 2 >> 1;
      uVar19 = uVar13;
      goto LAB_109236628;
    }
    puVar18 = param_1 + (uVar10 >> 1) * 5;
    uVar12 = *puVar16;
    if (uVar11 < 0xa01) {
      uVar4 = *param_1;
      if (uVar4 < *puVar18) {
        if (uVar12 < uVar4) {
          uStack_78 = *(undefined8 *)(puVar18 + 2);
          uStack_80 = *(undefined8 *)puVar18;
          uStack_70 = puVar18[4];
          uVar24 = *(undefined8 *)(param_2 + -3);
          uVar23 = *(undefined8 *)puVar16;
          puVar18[4] = param_2[-1];
          *(undefined8 *)(puVar18 + 2) = uVar24;
          *(undefined8 *)puVar18 = uVar23;
        }
        else {
          uVar25 = *(undefined8 *)(puVar18 + 2);
          uVar23 = *(undefined8 *)puVar18;
          uVar12 = puVar18[4];
          uVar26 = *(undefined8 *)(param_1 + 2);
          uVar24 = *(undefined8 *)param_1;
          puVar18[4] = param_1[4];
          *(undefined8 *)(puVar18 + 2) = uVar26;
          *(undefined8 *)puVar18 = uVar24;
          param_1[4] = uVar12;
          *(undefined8 *)(param_1 + 2) = uVar25;
          *(undefined8 *)param_1 = uVar23;
          if (*param_1 <= *puVar16) goto LAB_109236254;
          uStack_78 = *(undefined8 *)(param_1 + 2);
          uStack_80 = *(undefined8 *)param_1;
          uStack_70 = param_1[4];
          uVar24 = *(undefined8 *)(param_2 + -3);
          uVar23 = *(undefined8 *)puVar16;
          param_1[4] = param_2[-1];
          *(undefined8 *)(param_1 + 2) = uVar24;
          *(undefined8 *)param_1 = uVar23;
        }
        param_2[-1] = uStack_70;
        *(undefined8 *)(param_2 + -3) = uStack_78;
        *(undefined8 *)puVar16 = uStack_80;
      }
      else if (uVar12 < uVar4) {
        uVar25 = *(undefined8 *)(param_1 + 2);
        uVar23 = *(undefined8 *)param_1;
        uVar12 = param_1[4];
        uVar26 = *(undefined8 *)(param_2 + -3);
        uVar24 = *(undefined8 *)puVar16;
        param_1[4] = param_2[-1];
        *(undefined8 *)(param_1 + 2) = uVar26;
        *(undefined8 *)param_1 = uVar24;
        param_2[-1] = uVar12;
        *(undefined8 *)(param_2 + -3) = uVar25;
        *(undefined8 *)puVar16 = uVar23;
        if (*param_1 < *puVar18) {
          uVar25 = *(undefined8 *)(puVar18 + 2);
          uVar23 = *(undefined8 *)puVar18;
          uVar12 = puVar18[4];
          uVar26 = *(undefined8 *)(param_1 + 2);
          uVar24 = *(undefined8 *)param_1;
          puVar18[4] = param_1[4];
          *(undefined8 *)(puVar18 + 2) = uVar26;
          *(undefined8 *)puVar18 = uVar24;
          param_1[4] = uVar12;
          *(undefined8 *)(param_1 + 2) = uVar25;
          *(undefined8 *)param_1 = uVar23;
        }
      }
    }
    else {
      uVar4 = *puVar18;
      if (uVar4 < *param_1) {
        if (uVar12 < uVar4) {
          uStack_78 = *(undefined8 *)(param_1 + 2);
          uStack_80 = *(undefined8 *)param_1;
          uStack_70 = param_1[4];
          uVar24 = *(undefined8 *)(param_2 + -3);
          uVar23 = *(undefined8 *)puVar16;
          param_1[4] = param_2[-1];
          *(undefined8 *)(param_1 + 2) = uVar24;
          *(undefined8 *)param_1 = uVar23;
        }
        else {
          uVar25 = *(undefined8 *)(param_1 + 2);
          uVar23 = *(undefined8 *)param_1;
          uVar12 = param_1[4];
          uVar26 = *(undefined8 *)(puVar18 + 2);
          uVar24 = *(undefined8 *)puVar18;
          param_1[4] = puVar18[4];
          *(undefined8 *)(param_1 + 2) = uVar26;
          *(undefined8 *)param_1 = uVar24;
          puVar18[4] = uVar12;
          *(undefined8 *)(puVar18 + 2) = uVar25;
          *(undefined8 *)puVar18 = uVar23;
          if (*puVar18 <= *puVar16) goto LAB_109235e38;
          uStack_78 = *(undefined8 *)(puVar18 + 2);
          uStack_80 = *(undefined8 *)puVar18;
          uStack_70 = puVar18[4];
          uVar24 = *(undefined8 *)(param_2 + -3);
          uVar23 = *(undefined8 *)puVar16;
          puVar18[4] = param_2[-1];
          *(undefined8 *)(puVar18 + 2) = uVar24;
          *(undefined8 *)puVar18 = uVar23;
        }
        param_2[-1] = uStack_70;
        *(undefined8 *)(param_2 + -3) = uStack_78;
        *(undefined8 *)puVar16 = uStack_80;
      }
      else if (uVar12 < uVar4) {
        uVar25 = *(undefined8 *)(puVar18 + 2);
        uVar23 = *(undefined8 *)puVar18;
        uVar12 = puVar18[4];
        uVar26 = *(undefined8 *)(param_2 + -3);
        uVar24 = *(undefined8 *)puVar16;
        puVar18[4] = param_2[-1];
        *(undefined8 *)(puVar18 + 2) = uVar26;
        *(undefined8 *)puVar18 = uVar24;
        param_2[-1] = uVar12;
        *(undefined8 *)(param_2 + -3) = uVar25;
        *(undefined8 *)puVar16 = uVar23;
        if (*puVar18 < *param_1) {
          uVar25 = *(undefined8 *)(param_1 + 2);
          uVar23 = *(undefined8 *)param_1;
          uVar12 = param_1[4];
          uVar26 = *(undefined8 *)(puVar18 + 2);
          uVar24 = *(undefined8 *)puVar18;
          param_1[4] = puVar18[4];
          *(undefined8 *)(param_1 + 2) = uVar26;
          *(undefined8 *)param_1 = uVar24;
          puVar18[4] = uVar12;
          *(undefined8 *)(puVar18 + 2) = uVar25;
          *(undefined8 *)puVar18 = uVar23;
        }
      }
LAB_109235e38:
      puVar9 = param_1 + 5;
      puVar8 = puVar18 + -5;
      uVar12 = *puVar8;
      if (uVar12 < *puVar9) {
        if (*puVar22 < uVar12) {
          uVar26 = *(undefined8 *)(param_1 + 7);
          uVar24 = *(undefined8 *)puVar9;
          uVar12 = param_1[9];
          uVar4 = param_2[-6];
          uVar23 = *(undefined8 *)puVar22;
          *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_2 + -8);
          *(undefined8 *)puVar9 = uVar23;
          param_1[9] = uVar4;
          param_2[-6] = uVar12;
        }
        else {
          uVar24 = *(undefined8 *)(param_1 + 7);
          uVar23 = *(undefined8 *)puVar9;
          uVar12 = param_1[9];
          uVar4 = puVar18[-1];
          uVar25 = *(undefined8 *)puVar8;
          *(undefined8 *)(param_1 + 7) = *(undefined8 *)(puVar18 + -3);
          *(undefined8 *)puVar9 = uVar25;
          param_1[9] = uVar4;
          puVar18[-1] = uVar12;
          *(undefined8 *)(puVar18 + -3) = uVar24;
          *(undefined8 *)puVar8 = uVar23;
          if (*puVar8 <= *puVar22) goto LAB_109235fd4;
          uVar26 = *(undefined8 *)(puVar18 + -3);
          uVar24 = *(undefined8 *)puVar8;
          uVar12 = puVar18[-1];
          uVar25 = *(undefined8 *)(param_2 + -8);
          uVar23 = *(undefined8 *)puVar22;
          puVar18[-1] = param_2[-6];
          *(undefined8 *)(puVar18 + -3) = uVar25;
          *(undefined8 *)puVar8 = uVar23;
          param_2[-6] = uVar12;
        }
        *(undefined8 *)(param_2 + -8) = uVar26;
        *(undefined8 *)puVar22 = uVar24;
      }
      else if (*puVar22 < uVar12) {
        uVar25 = *(undefined8 *)(puVar18 + -3);
        uVar23 = *(undefined8 *)puVar8;
        uVar12 = puVar18[-1];
        uVar26 = *(undefined8 *)(param_2 + -8);
        uVar24 = *(undefined8 *)puVar22;
        puVar18[-1] = param_2[-6];
        *(undefined8 *)(puVar18 + -3) = uVar26;
        *(undefined8 *)puVar8 = uVar24;
        param_2[-6] = uVar12;
        *(undefined8 *)(param_2 + -8) = uVar25;
        *(undefined8 *)puVar22 = uVar23;
        if (*puVar8 < *puVar9) {
          uVar24 = *(undefined8 *)(param_1 + 7);
          uVar23 = *(undefined8 *)puVar9;
          uVar12 = param_1[9];
          uVar4 = puVar18[-1];
          uVar25 = *(undefined8 *)puVar8;
          *(undefined8 *)(param_1 + 7) = *(undefined8 *)(puVar18 + -3);
          *(undefined8 *)puVar9 = uVar25;
          param_1[9] = uVar4;
          puVar18[-1] = uVar12;
          *(undefined8 *)(puVar18 + -3) = uVar24;
          *(undefined8 *)puVar8 = uVar23;
        }
      }
LAB_109235fd4:
      puVar15 = param_1 + 10;
      puVar9 = puVar18 + 5;
      uVar12 = *puVar9;
      if (uVar12 < *puVar15) {
        if (*puVar21 < uVar12) {
          uVar26 = *(undefined8 *)(param_1 + 0xc);
          uVar24 = *(undefined8 *)puVar15;
          uVar12 = param_1[0xe];
          uVar4 = param_2[-0xb];
          uVar23 = *(undefined8 *)puVar21;
          *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + -0xd);
          *(undefined8 *)puVar15 = uVar23;
          param_1[0xe] = uVar4;
          param_2[-0xb] = uVar12;
        }
        else {
          uVar24 = *(undefined8 *)(param_1 + 0xc);
          uVar23 = *(undefined8 *)puVar15;
          uVar12 = param_1[0xe];
          uVar4 = puVar18[9];
          uVar25 = *(undefined8 *)puVar9;
          *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(puVar18 + 7);
          *(undefined8 *)puVar15 = uVar25;
          param_1[0xe] = uVar4;
          puVar18[9] = uVar12;
          *(undefined8 *)(puVar18 + 7) = uVar24;
          *(undefined8 *)puVar9 = uVar23;
          if (*puVar9 <= *puVar21) goto LAB_1092360fc;
          uVar26 = *(undefined8 *)(puVar18 + 7);
          uVar24 = *(undefined8 *)puVar9;
          uVar12 = puVar18[9];
          uVar25 = *(undefined8 *)(param_2 + -0xd);
          uVar23 = *(undefined8 *)puVar21;
          puVar18[9] = param_2[-0xb];
          *(undefined8 *)(puVar18 + 7) = uVar25;
          *(undefined8 *)puVar9 = uVar23;
          param_2[-0xb] = uVar12;
        }
        *(undefined8 *)(param_2 + -0xd) = uVar26;
        *(undefined8 *)puVar21 = uVar24;
      }
      else if (*puVar21 < uVar12) {
        uVar25 = *(undefined8 *)(puVar18 + 7);
        uVar23 = *(undefined8 *)puVar9;
        uVar12 = puVar18[9];
        uVar26 = *(undefined8 *)(param_2 + -0xd);
        uVar24 = *(undefined8 *)puVar21;
        puVar18[9] = param_2[-0xb];
        *(undefined8 *)(puVar18 + 7) = uVar26;
        *(undefined8 *)puVar9 = uVar24;
        param_2[-0xb] = uVar12;
        *(undefined8 *)(param_2 + -0xd) = uVar25;
        *(undefined8 *)puVar21 = uVar23;
        if (*puVar9 < *puVar15) {
          uVar24 = *(undefined8 *)(param_1 + 0xc);
          uVar23 = *(undefined8 *)puVar15;
          uVar12 = param_1[0xe];
          uVar4 = puVar18[9];
          uVar25 = *(undefined8 *)puVar9;
          *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(puVar18 + 7);
          *(undefined8 *)puVar15 = uVar25;
          param_1[0xe] = uVar4;
          puVar18[9] = uVar12;
          *(undefined8 *)(puVar18 + 7) = uVar24;
          *(undefined8 *)puVar9 = uVar23;
        }
      }
LAB_1092360fc:
      uVar12 = *puVar18;
      if (uVar12 < puVar18[-5]) {
        if (puVar18[5] < uVar12) {
          uStack_78 = *(undefined8 *)(puVar18 + -3);
          uStack_80 = *(undefined8 *)puVar8;
          uStack_70 = puVar18[-1];
          *(undefined8 *)(puVar18 + -3) = *(undefined8 *)(puVar18 + 7);
          *(undefined8 *)puVar8 = *(undefined8 *)puVar9;
          puVar18[-1] = puVar18[9];
        }
        else {
          uVar24 = *(undefined8 *)(puVar18 + -3);
          uVar23 = *(undefined8 *)puVar8;
          uVar12 = puVar18[-1];
          puVar18[-1] = puVar18[4];
          *(undefined8 *)(puVar18 + -3) = *(undefined8 *)(puVar18 + 2);
          *(undefined8 *)puVar8 = *(undefined8 *)puVar18;
          puVar18[4] = uVar12;
          *(undefined8 *)(puVar18 + 2) = uVar24;
          *(undefined8 *)puVar18 = uVar23;
          if (*puVar18 <= puVar18[5]) goto LAB_109236224;
          uStack_78 = *(undefined8 *)(puVar18 + 2);
          uStack_80 = *(undefined8 *)puVar18;
          uStack_70 = puVar18[4];
          *(undefined8 *)(puVar18 + 2) = *(undefined8 *)(puVar18 + 7);
          *(undefined8 *)puVar18 = *(undefined8 *)puVar9;
          puVar18[4] = puVar18[9];
        }
        puVar18[9] = uStack_70;
        *(undefined8 *)(puVar18 + 7) = uStack_78;
        *(undefined8 *)puVar9 = uStack_80;
      }
      else if (puVar18[5] < uVar12) {
        uVar24 = *(undefined8 *)(puVar18 + 2);
        uVar23 = *(undefined8 *)puVar18;
        uVar12 = puVar18[4];
        *(undefined8 *)(puVar18 + 2) = *(undefined8 *)(puVar18 + 7);
        *(undefined8 *)puVar18 = *(undefined8 *)puVar9;
        puVar18[4] = puVar18[9];
        puVar18[9] = uVar12;
        *(undefined8 *)(puVar18 + 7) = uVar24;
        *(undefined8 *)puVar9 = uVar23;
        if (*puVar18 < puVar18[-5]) {
          uVar24 = *(undefined8 *)(puVar18 + -3);
          uVar23 = *(undefined8 *)puVar8;
          uVar12 = puVar18[-1];
          *(undefined8 *)(puVar18 + -3) = *(undefined8 *)(puVar18 + 2);
          *(undefined8 *)puVar8 = *(undefined8 *)puVar18;
          puVar18[-1] = puVar18[4];
          puVar18[4] = uVar12;
          *(undefined8 *)(puVar18 + 2) = uVar24;
          *(undefined8 *)puVar18 = uVar23;
        }
      }
LAB_109236224:
      uVar25 = *(undefined8 *)(param_1 + 2);
      uVar23 = *(undefined8 *)param_1;
      uVar12 = param_1[4];
      uVar26 = *(undefined8 *)(puVar18 + 2);
      uVar24 = *(undefined8 *)puVar18;
      param_1[4] = puVar18[4];
      *(undefined8 *)(param_1 + 2) = uVar26;
      *(undefined8 *)param_1 = uVar24;
      puVar18[4] = uVar12;
      *(undefined8 *)(puVar18 + 2) = uVar25;
      *(undefined8 *)puVar18 = uVar23;
    }
LAB_109236254:
    param_3 = param_3 + -1;
    uVar12 = *param_1;
    if (((param_4 & 1) != 0) || (param_1[-5] < uVar12)) {
      lVar14 = 0;
      uVar24 = *(undefined8 *)(param_1 + 3);
      uVar23 = *(undefined8 *)(param_1 + 1);
      do {
        lVar7 = lVar14 + 0x14;
        lVar14 = lVar14 + 0x14;
      } while (*(uint *)((long)param_1 + lVar7) < uVar12);
      puVar8 = (uint *)((long)param_1 + lVar14);
      puVar9 = param_2;
      if (lVar14 == 0x14) {
        do {
          if (puVar9 <= puVar8) break;
          puVar9 = puVar9 + -5;
        } while (uVar12 <= *puVar9);
      }
      else {
        do {
          puVar9 = puVar9 + -5;
        } while (uVar12 <= *puVar9);
      }
      puVar15 = puVar9;
      puVar18 = puVar8;
      if (puVar8 < puVar9) {
        do {
          uVar27 = *(undefined8 *)(puVar18 + 2);
          uVar25 = *(undefined8 *)puVar18;
          uVar4 = puVar18[4];
          uVar28 = *(undefined8 *)(puVar15 + 2);
          uVar26 = *(undefined8 *)puVar15;
          puVar18[4] = puVar15[4];
          *(undefined8 *)(puVar18 + 2) = uVar28;
          *(undefined8 *)puVar18 = uVar26;
          puVar15[4] = uVar4;
          *(undefined8 *)(puVar15 + 2) = uVar27;
          *(undefined8 *)puVar15 = uVar25;
          do {
            puVar18 = puVar18 + 5;
          } while (*puVar18 < uVar12);
          do {
            puVar15 = puVar15 + -5;
          } while (uVar12 <= *puVar15);
        } while (puVar18 < puVar15);
      }
      puVar15 = puVar18 + -5;
      if (puVar15 != param_1) {
        uVar26 = *(undefined8 *)(puVar18 + -3);
        uVar25 = *(undefined8 *)puVar15;
        param_1[4] = puVar18[-1];
        *(undefined8 *)(param_1 + 2) = uVar26;
        *(undefined8 *)param_1 = uVar25;
      }
      puVar18[-5] = uVar12;
      *(undefined8 *)(puVar18 + -2) = uVar24;
      *(undefined8 *)(puVar18 + -4) = uVar23;
      if (puVar9 <= puVar8) {
        puVar8 = param_1;
        FUN_109236d3c(param_1,puVar15);
        puVar9 = puVar18;
        FUN_109236d3c(puVar18,param_2);
        if ((int)puVar9 != 0) goto LAB_10923647c;
        if (((ulong)puVar8 & 1) != 0) goto LAB_109235bec;
      }
      FUN_109235bac(param_1,puVar15,param_3,param_4 & 1);
      param_4 = 0;
      goto LAB_109235bec;
    }
    uVar24 = *(undefined8 *)(param_1 + 3);
    uVar23 = *(undefined8 *)(param_1 + 1);
    puVar18 = param_1;
    if (uVar12 < *puVar16) {
      do {
        puVar18 = puVar18 + 5;
      } while (*puVar18 <= uVar12);
    }
    else {
      do {
        puVar18 = puVar18 + 5;
        if (param_2 <= puVar18) break;
      } while (*puVar18 <= uVar12);
    }
    puVar8 = param_2;
    if (puVar18 < param_2) {
      do {
        puVar8 = puVar8 + -5;
      } while (uVar12 < *puVar8);
    }
    while (puVar18 < puVar8) {
      uVar27 = *(undefined8 *)(puVar18 + 2);
      uVar25 = *(undefined8 *)puVar18;
      uVar4 = puVar18[4];
      uVar28 = *(undefined8 *)(puVar8 + 2);
      uVar26 = *(undefined8 *)puVar8;
      puVar18[4] = puVar8[4];
      *(undefined8 *)(puVar18 + 2) = uVar28;
      *(undefined8 *)puVar18 = uVar26;
      puVar8[4] = uVar4;
      *(undefined8 *)(puVar8 + 2) = uVar27;
      *(undefined8 *)puVar8 = uVar25;
      do {
        puVar18 = puVar18 + 5;
      } while (*puVar18 <= uVar12);
      do {
        puVar8 = puVar8 + -5;
      } while (uVar12 < *puVar8);
    }
    if (puVar18 + -5 != param_1) {
      uVar26 = *(undefined8 *)(puVar18 + -3);
      uVar25 = *(undefined8 *)(puVar18 + -5);
      param_1[4] = puVar18[-1];
      *(undefined8 *)(param_1 + 2) = uVar26;
      *(undefined8 *)param_1 = uVar25;
    }
    param_4 = 0;
    puVar18[-5] = uVar12;
    *(undefined8 *)(puVar18 + -2) = uVar24;
    *(undefined8 *)(puVar18 + -4) = uVar23;
  } while( true );
LAB_109236598:
  puVar21 = puVar18;
  uVar12 = puVar16[5];
  if (uVar12 < *puVar16) {
    uVar24 = *(undefined8 *)(puVar16 + 8);
    uVar23 = *(undefined8 *)(puVar16 + 6);
    lVar7 = lVar14;
    do {
      lVar17 = lVar7;
      puVar1 = (undefined8 *)((long)param_1 + lVar17);
      *(undefined8 *)((long)puVar1 + 0x1c) = puVar1[1];
      *(undefined8 *)((long)puVar1 + 0x14) = *puVar1;
      *(undefined4 *)((long)puVar1 + 0x24) = *(undefined4 *)(puVar1 + 2);
      puVar18 = param_1;
      if (lVar17 == 0) goto LAB_1092365f0;
      lVar7 = lVar17 + -0x14;
    } while (uVar12 < *(uint *)((long)puVar1 + -0x14));
    puVar18 = (uint *)((long)param_1 + lVar17);
LAB_1092365f0:
    *puVar18 = uVar12;
    *(undefined8 *)(puVar18 + 3) = uVar24;
    *(undefined8 *)(puVar18 + 1) = uVar23;
  }
  puVar18 = puVar21 + 5;
  lVar14 = lVar14 + 0x14;
  puVar16 = puVar21;
  if (puVar18 == param_2) {
    return;
  }
  goto LAB_109236598;
LAB_109236628:
  do {
    if ((long)uVar19 <= (long)uVar13) {
      uVar2 = uVar19 << 1 | 1;
      puVar18 = param_1 + uVar2 * 5;
      uVar20 = uVar19 * 2 + 2;
      if ((long)uVar20 < (long)uVar10) {
        uVar4 = *puVar18;
        uVar5 = puVar18[5];
        uVar12 = uVar4;
        if (uVar4 <= uVar5) {
          uVar12 = uVar5;
        }
        puVar16 = puVar18 + 5;
        if (uVar5 <= uVar4) {
          puVar16 = puVar18;
          uVar20 = uVar2;
        }
      }
      else {
        uVar12 = *puVar18;
        puVar16 = puVar18;
        uVar20 = uVar2;
      }
      puVar18 = param_1 + uVar19 * 5;
      uVar4 = *puVar18;
      if (uVar4 <= uVar12) {
        uVar24 = *(undefined8 *)(puVar18 + 3);
        uVar23 = *(undefined8 *)(puVar18 + 1);
        do {
          puVar21 = puVar16;
          uVar26 = *(undefined8 *)(puVar21 + 2);
          uVar25 = *(undefined8 *)puVar21;
          puVar18[4] = puVar21[4];
          *(undefined8 *)(puVar18 + 2) = uVar26;
          *(undefined8 *)puVar18 = uVar25;
          if ((long)uVar13 < (long)uVar20) break;
          uVar2 = uVar20 << 1 | 1;
          puVar18 = param_1 + uVar2 * 5;
          uVar20 = uVar20 * 2 + 2;
          if ((long)uVar20 < (long)uVar10) {
            uVar5 = *puVar18;
            uVar6 = puVar18[5];
            uVar12 = uVar5;
            if (uVar5 <= uVar6) {
              uVar12 = uVar6;
            }
            puVar16 = puVar18 + 5;
            if (uVar6 <= uVar5) {
              puVar16 = puVar18;
              uVar20 = uVar2;
            }
          }
          else {
            uVar12 = *puVar18;
            puVar16 = puVar18;
            uVar20 = uVar2;
          }
          puVar18 = puVar21;
        } while (uVar4 <= uVar12);
        *puVar21 = uVar4;
        *(undefined8 *)(puVar21 + 3) = uVar24;
        *(undefined8 *)(puVar21 + 1) = uVar23;
      }
    }
    bVar3 = uVar19 != 0;
    uVar19 = uVar19 - 1;
  } while (bVar3);
  lVar14 = (uVar11 >> 2) * -0x3333333333333333;
  do {
    uVar24 = *(undefined8 *)(param_1 + 2);
    uVar23 = *(undefined8 *)param_1;
    uVar12 = param_1[4];
    puVar18 = param_1;
    uVar10 = 0;
    do {
      uVar19 = uVar10 << 1 | 1;
      uVar11 = uVar10 * 2 + 2;
      puVar16 = puVar18 + uVar10 * 5 + 5;
      uVar13 = uVar19;
      if (((long)uVar11 < lVar14) &&
         (puVar16 = puVar18 + uVar10 * 5 + 10, uVar13 = uVar11,
         puVar18[uVar10 * 5 + 10] <= puVar18[uVar10 * 5 + 5])) {
        puVar16 = puVar18 + uVar10 * 5 + 5;
        uVar13 = uVar19;
      }
      uVar26 = *(undefined8 *)(puVar16 + 2);
      uVar25 = *(undefined8 *)puVar16;
      puVar18[4] = puVar16[4];
      *(undefined8 *)(puVar18 + 2) = uVar26;
      *(undefined8 *)puVar18 = uVar25;
      puVar18 = puVar16;
      uVar10 = uVar13;
    } while ((long)uVar13 <= (long)(lVar14 - 2U >> 1));
    puVar18 = param_2 + -5;
    if (puVar16 == puVar18) {
      puVar16[4] = uVar12;
      *(undefined8 *)(puVar16 + 2) = uVar24;
      *(undefined8 *)puVar16 = uVar23;
    }
    else {
      uVar26 = *(undefined8 *)(param_2 + -3);
      uVar25 = *(undefined8 *)puVar18;
      puVar16[4] = param_2[-1];
      *(undefined8 *)(puVar16 + 2) = uVar26;
      *(undefined8 *)puVar16 = uVar25;
      param_2[-1] = uVar12;
      *(undefined8 *)(param_2 + -3) = uVar24;
      *(undefined8 *)puVar18 = uVar23;
      uVar10 = (long)puVar16 + (0x14 - (long)param_1);
      if (0x14 < (long)uVar10) {
        uVar10 = (uVar10 >> 2) * -0x3333333333333333 - 2 >> 1;
        uVar12 = *puVar16;
        if (param_1[uVar10 * 5] < uVar12) {
          uVar24 = *(undefined8 *)(puVar16 + 3);
          uVar23 = *(undefined8 *)(puVar16 + 1);
          puVar21 = param_1 + uVar10 * 5;
          do {
            puVar22 = puVar21;
            uVar26 = *(undefined8 *)(puVar22 + 2);
            uVar25 = *(undefined8 *)puVar22;
            puVar16[4] = puVar22[4];
            *(undefined8 *)(puVar16 + 2) = uVar26;
            *(undefined8 *)puVar16 = uVar25;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1 >> 1;
            puVar16 = puVar22;
            puVar21 = param_1 + uVar10 * 5;
          } while (param_1[uVar10 * 5] < uVar12);
          *puVar22 = uVar12;
          *(undefined8 *)(puVar22 + 3) = uVar24;
          *(undefined8 *)(puVar22 + 1) = uVar23;
        }
      }
    }
    bVar3 = lVar14 < 3;
    lVar14 = lVar14 + -1;
    param_2 = puVar18;
    if (bVar3) {
      return;
    }
  } while( true );
LAB_10923647c:
  param_2 = puVar15;
  if (((ulong)puVar8 & 1) != 0) {
    return;
  }
  goto LAB_109235bdc;
}



/* Entry: 109236af4; end: 109236d3b;  */

void FUN_109236af4(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *param_2;
  if (uVar2 < *param_1) {
    if (*param_3 < uVar2) {
      uVar2 = param_1[4];
      uVar4 = *(undefined8 *)(param_1 + 2);
      uVar3 = *(undefined8 *)param_1;
      uVar1 = param_3[4];
      uVar5 = *(undefined8 *)param_3;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_1 = uVar5;
      param_1[4] = uVar1;
    }
    else {
      uVar2 = param_1[4];
      uVar4 = *(undefined8 *)(param_1 + 2);
      uVar3 = *(undefined8 *)param_1;
      uVar1 = param_2[4];
      uVar5 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar5;
      param_1[4] = uVar1;
      *(undefined8 *)(param_2 + 2) = uVar4;
      *(undefined8 *)param_2 = uVar3;
      param_2[4] = uVar2;
      if (*param_2 <= *param_3) goto LAB_109236be0;
      uVar2 = param_2[4];
      uVar4 = *(undefined8 *)(param_2 + 2);
      uVar3 = *(undefined8 *)param_2;
      uVar1 = param_3[4];
      uVar5 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_2 = uVar5;
      param_2[4] = uVar1;
    }
    *(undefined8 *)(param_3 + 2) = uVar4;
    *(undefined8 *)param_3 = uVar3;
    param_3[4] = uVar2;
  }
  else if (*param_3 < uVar2) {
    uVar2 = param_2[4];
    uVar4 = *(undefined8 *)(param_2 + 2);
    uVar3 = *(undefined8 *)param_2;
    uVar1 = param_3[4];
    uVar5 = *(undefined8 *)param_3;
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)param_2 = uVar5;
    param_2[4] = uVar1;
    *(undefined8 *)(param_3 + 2) = uVar4;
    *(undefined8 *)param_3 = uVar3;
    param_3[4] = uVar2;
    if (*param_2 < *param_1) {
      uVar2 = param_1[4];
      uVar4 = *(undefined8 *)(param_1 + 2);
      uVar3 = *(undefined8 *)param_1;
      uVar1 = param_2[4];
      uVar5 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar5;
      param_1[4] = uVar1;
      *(undefined8 *)(param_2 + 2) = uVar4;
      *(undefined8 *)param_2 = uVar3;
      param_2[4] = uVar2;
    }
  }
LAB_109236be0:
  if (*param_4 < *param_3) {
    uVar2 = param_3[4];
    uVar4 = *(undefined8 *)(param_3 + 2);
    uVar3 = *(undefined8 *)param_3;
    uVar1 = param_4[4];
    uVar5 = *(undefined8 *)param_4;
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_4 + 2);
    *(undefined8 *)param_3 = uVar5;
    param_3[4] = uVar1;
    *(undefined8 *)(param_4 + 2) = uVar4;
    *(undefined8 *)param_4 = uVar3;
    param_4[4] = uVar2;
    if (*param_3 < *param_2) {
      uVar2 = param_2[4];
      uVar4 = *(undefined8 *)(param_2 + 2);
      uVar3 = *(undefined8 *)param_2;
      uVar1 = param_3[4];
      uVar5 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_2 = uVar5;
      param_2[4] = uVar1;
      *(undefined8 *)(param_3 + 2) = uVar4;
      *(undefined8 *)param_3 = uVar3;
      param_3[4] = uVar2;
      if (*param_2 < *param_1) {
        uVar2 = param_1[4];
        uVar4 = *(undefined8 *)(param_1 + 2);
        uVar3 = *(undefined8 *)param_1;
        uVar1 = param_2[4];
        uVar5 = *(undefined8 *)param_2;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)param_1 = uVar5;
        param_1[4] = uVar1;
        *(undefined8 *)(param_2 + 2) = uVar4;
        *(undefined8 *)param_2 = uVar3;
        param_2[4] = uVar2;
      }
    }
  }
  if (*param_5 < *param_4) {
    uVar2 = param_4[4];
    uVar4 = *(undefined8 *)(param_4 + 2);
    uVar3 = *(undefined8 *)param_4;
    uVar1 = param_5[4];
    uVar5 = *(undefined8 *)param_5;
    *(undefined8 *)(param_4 + 2) = *(undefined8 *)(param_5 + 2);
    *(undefined8 *)param_4 = uVar5;
    param_4[4] = uVar1;
    *(undefined8 *)(param_5 + 2) = uVar4;
    *(undefined8 *)param_5 = uVar3;
    param_5[4] = uVar2;
    if (*param_4 < *param_3) {
      uVar2 = param_3[4];
      uVar4 = *(undefined8 *)(param_3 + 2);
      uVar3 = *(undefined8 *)param_3;
      uVar1 = param_4[4];
      uVar5 = *(undefined8 *)param_4;
      *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_4 + 2);
      *(undefined8 *)param_3 = uVar5;
      param_3[4] = uVar1;
      *(undefined8 *)(param_4 + 2) = uVar4;
      *(undefined8 *)param_4 = uVar3;
      param_4[4] = uVar2;
      if (*param_3 < *param_2) {
        uVar2 = param_2[4];
        uVar4 = *(undefined8 *)(param_2 + 2);
        uVar3 = *(undefined8 *)param_2;
        uVar1 = param_3[4];
        uVar5 = *(undefined8 *)param_3;
        *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
        *(undefined8 *)param_2 = uVar5;
        param_2[4] = uVar1;
        *(undefined8 *)(param_3 + 2) = uVar4;
        *(undefined8 *)param_3 = uVar3;
        param_3[4] = uVar2;
        if (*param_2 < *param_1) {
          uVar2 = param_1[4];
          uVar4 = *(undefined8 *)(param_1 + 2);
          uVar3 = *(undefined8 *)param_1;
          uVar1 = param_2[4];
          uVar5 = *(undefined8 *)param_2;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
          *(undefined8 *)param_1 = uVar5;
          param_1[4] = uVar1;
          *(undefined8 *)(param_2 + 2) = uVar4;
          *(undefined8 *)param_2 = uVar3;
          param_2[4] = uVar2;
        }
      }
    }
  }
  return;
}



/* Entry: 109236d3c; end: 10923719f;  */

bool FUN_109236d3c(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar3 = ((long)param_2 - (long)param_1 >> 2) * -0x3333333333333333;
  if ((long)uVar3 < 3) {
    if (uVar3 < 2) {
      return true;
    }
    if (uVar3 != 2) {
LAB_109236dfc:
      puVar5 = param_1 + 10;
      uVar10 = *puVar5;
      puVar6 = param_1 + 5;
      uVar1 = *puVar6;
      if (uVar1 < *param_1) {
        if (uVar10 < uVar1) {
          uVar10 = param_1[4];
          uVar12 = *(undefined8 *)(param_1 + 2);
          uVar11 = *(undefined8 *)param_1;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 0xc);
          *(undefined8 *)param_1 = *(undefined8 *)puVar5;
          param_1[4] = param_1[0xe];
          *(undefined8 *)(param_1 + 0xc) = uVar12;
          *(undefined8 *)puVar5 = uVar11;
          param_1[0xe] = uVar10;
        }
        else {
          uVar1 = param_1[4];
          uVar12 = *(undefined8 *)(param_1 + 2);
          uVar11 = *(undefined8 *)param_1;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 7);
          *(undefined8 *)param_1 = *(undefined8 *)puVar6;
          param_1[4] = param_1[9];
          *(undefined8 *)(param_1 + 7) = uVar12;
          *(undefined8 *)puVar6 = uVar11;
          param_1[9] = uVar1;
          if (uVar10 < param_1[5]) {
            uVar10 = param_1[9];
            uVar12 = *(undefined8 *)(param_1 + 7);
            uVar11 = *(undefined8 *)puVar6;
            *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_1 + 0xc);
            *(undefined8 *)puVar6 = *(undefined8 *)puVar5;
            param_1[9] = param_1[0xe];
            *(undefined8 *)(param_1 + 0xc) = uVar12;
            *(undefined8 *)puVar5 = uVar11;
            param_1[0xe] = uVar10;
          }
        }
      }
      else if (uVar10 < uVar1) {
        uVar10 = param_1[9];
        uVar12 = *(undefined8 *)(param_1 + 7);
        uVar11 = *(undefined8 *)puVar6;
        *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_1 + 0xc);
        *(undefined8 *)puVar6 = *(undefined8 *)puVar5;
        param_1[9] = param_1[0xe];
        *(undefined8 *)(param_1 + 0xc) = uVar12;
        *(undefined8 *)puVar5 = uVar11;
        param_1[0xe] = uVar10;
        if (*puVar6 < *param_1) {
          uVar10 = param_1[4];
          uVar12 = *(undefined8 *)(param_1 + 2);
          uVar11 = *(undefined8 *)param_1;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 7);
          *(undefined8 *)param_1 = *(undefined8 *)puVar6;
          param_1[4] = param_1[9];
          *(undefined8 *)(param_1 + 7) = uVar12;
          *(undefined8 *)puVar6 = uVar11;
          param_1[9] = uVar10;
        }
      }
      if (param_1 + 0xf == param_2) {
        return true;
      }
      lVar8 = 0;
      iVar9 = 0;
      puVar6 = param_1 + 0xf;
      do {
        uVar10 = *puVar6;
        if (uVar10 < *puVar5) {
          uVar12 = *(undefined8 *)(puVar6 + 3);
          uVar11 = *(undefined8 *)(puVar6 + 1);
          lVar2 = lVar8;
          do {
            lVar4 = lVar2;
            *(undefined8 *)((long)param_1 + lVar4 + 0x44) =
                 *(undefined8 *)((long)param_1 + lVar4 + 0x30);
            *(undefined8 *)((long)param_1 + lVar4 + 0x3c) =
                 *(undefined8 *)((long)param_1 + lVar4 + 0x28);
            *(undefined4 *)((long)param_1 + lVar4 + 0x4c) =
                 *(undefined4 *)((long)param_1 + lVar4 + 0x38);
            puVar5 = param_1;
            if (lVar4 == -0x28) goto LAB_109237070;
            lVar2 = lVar4 + -0x14;
          } while (uVar10 < *(uint *)((long)param_1 + lVar4 + 0x14));
          puVar5 = (uint *)((long)param_1 + lVar4 + 0x28);
LAB_109237070:
          *puVar5 = uVar10;
          *(undefined8 *)(puVar5 + 3) = uVar12;
          *(undefined8 *)(puVar5 + 1) = uVar11;
          iVar9 = iVar9 + 1;
          if (iVar9 == 8) {
            return puVar6 + 5 == param_2;
          }
        }
        puVar7 = puVar6 + 5;
        lVar8 = lVar8 + 0x14;
        puVar5 = puVar6;
        puVar6 = puVar7;
        if (puVar7 == param_2) {
          return true;
        }
      } while( true );
    }
    if (*param_1 <= param_2[-5]) {
      return true;
    }
LAB_109236dd8:
    uVar10 = param_1[4];
    uVar12 = *(undefined8 *)(param_1 + 2);
    uVar11 = *(undefined8 *)param_1;
    uVar1 = param_2[-1];
    uVar13 = *(undefined8 *)(param_2 + -5);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -3);
    *(undefined8 *)param_1 = uVar13;
    param_1[4] = uVar1;
    *(undefined8 *)(param_2 + -3) = uVar12;
    *(undefined8 *)(param_2 + -5) = uVar11;
    param_2[-1] = uVar10;
  }
  else {
    if (uVar3 == 3) {
      puVar6 = param_1 + 5;
      uVar10 = *puVar6;
      puVar5 = param_2 + -5;
      if (uVar10 < *param_1) {
        if (uVar10 <= *puVar5) {
          uVar10 = param_1[4];
          uVar12 = *(undefined8 *)(param_1 + 2);
          uVar11 = *(undefined8 *)param_1;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 7);
          *(undefined8 *)param_1 = *(undefined8 *)puVar6;
          param_1[4] = param_1[9];
          *(undefined8 *)(param_1 + 7) = uVar12;
          *(undefined8 *)puVar6 = uVar11;
          param_1[9] = uVar10;
          if (param_1[5] <= *puVar5) {
            return true;
          }
          uVar10 = param_1[9];
          uVar12 = *(undefined8 *)(param_1 + 7);
          uVar11 = *(undefined8 *)puVar6;
          uVar1 = param_2[-1];
          uVar13 = *(undefined8 *)puVar5;
          *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_2 + -3);
          *(undefined8 *)puVar6 = uVar13;
          param_1[9] = uVar1;
          *(undefined8 *)(param_2 + -3) = uVar12;
          *(undefined8 *)puVar5 = uVar11;
          param_2[-1] = uVar10;
          return true;
        }
        goto LAB_109236dd8;
      }
      if (uVar10 <= *puVar5) {
        return true;
      }
      uVar10 = param_1[9];
      uVar12 = *(undefined8 *)(param_1 + 7);
      uVar11 = *(undefined8 *)puVar6;
      uVar1 = param_2[-1];
      uVar13 = *(undefined8 *)puVar5;
      *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_2 + -3);
      *(undefined8 *)puVar6 = uVar13;
      param_1[9] = uVar1;
      *(undefined8 *)(param_2 + -3) = uVar12;
      *(undefined8 *)puVar5 = uVar11;
      param_2[-1] = uVar10;
    }
    else {
      if (uVar3 != 4) {
        if (uVar3 == 5) {
          FUN_109236af4(param_1,param_1 + 5,param_1 + 10,param_1 + 0xf,param_2 + -5);
          return true;
        }
        goto LAB_109236dfc;
      }
      puVar5 = param_1 + 5;
      uVar10 = *puVar5;
      puVar6 = param_1 + 10;
      uVar1 = *puVar6;
      puVar7 = param_2 + -5;
      if (uVar10 < *param_1) {
        if (uVar1 < uVar10) {
          uVar10 = param_1[4];
          uVar12 = *(undefined8 *)(param_1 + 2);
          uVar11 = *(undefined8 *)param_1;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 0xc);
          *(undefined8 *)param_1 = *(undefined8 *)puVar6;
          param_1[4] = param_1[0xe];
        }
        else {
          uVar10 = param_1[4];
          uVar12 = *(undefined8 *)(param_1 + 2);
          uVar11 = *(undefined8 *)param_1;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 7);
          *(undefined8 *)param_1 = *(undefined8 *)puVar5;
          param_1[4] = param_1[9];
          *(undefined8 *)(param_1 + 7) = uVar12;
          *(undefined8 *)puVar5 = uVar11;
          param_1[9] = uVar10;
          if (param_1[5] <= uVar1) goto LAB_1092370ec;
          uVar10 = param_1[9];
          uVar12 = *(undefined8 *)(param_1 + 7);
          uVar11 = *(undefined8 *)puVar5;
          *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_1 + 0xc);
          *(undefined8 *)puVar5 = *(undefined8 *)puVar6;
          param_1[9] = param_1[0xe];
        }
        *(undefined8 *)(param_1 + 0xc) = uVar12;
        *(undefined8 *)puVar6 = uVar11;
        param_1[0xe] = uVar10;
      }
      else if (uVar1 < uVar10) {
        uVar10 = param_1[9];
        uVar12 = *(undefined8 *)(param_1 + 7);
        uVar11 = *(undefined8 *)puVar5;
        *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_1 + 0xc);
        *(undefined8 *)puVar5 = *(undefined8 *)puVar6;
        param_1[9] = param_1[0xe];
        *(undefined8 *)(param_1 + 0xc) = uVar12;
        *(undefined8 *)puVar6 = uVar11;
        param_1[0xe] = uVar10;
        if (*puVar5 < *param_1) {
          uVar10 = param_1[4];
          uVar12 = *(undefined8 *)(param_1 + 2);
          uVar11 = *(undefined8 *)param_1;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 7);
          *(undefined8 *)param_1 = *(undefined8 *)puVar5;
          param_1[4] = param_1[9];
          *(undefined8 *)(param_1 + 7) = uVar12;
          *(undefined8 *)puVar5 = uVar11;
          param_1[9] = uVar10;
        }
      }
LAB_1092370ec:
      if (*puVar6 <= *puVar7) {
        return true;
      }
      uVar10 = param_1[0xe];
      uVar12 = *(undefined8 *)(param_1 + 0xc);
      uVar11 = *(undefined8 *)puVar6;
      uVar1 = param_2[-1];
      uVar13 = *(undefined8 *)puVar7;
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + -3);
      *(undefined8 *)puVar6 = uVar13;
      param_1[0xe] = uVar1;
      *(undefined8 *)(param_2 + -3) = uVar12;
      *(undefined8 *)puVar7 = uVar11;
      param_2[-1] = uVar10;
      if (*puVar5 <= *puVar6) {
        return true;
      }
      uVar10 = param_1[9];
      uVar12 = *(undefined8 *)(param_1 + 7);
      uVar11 = *(undefined8 *)puVar5;
      *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_1 + 0xc);
      *(undefined8 *)puVar5 = *(undefined8 *)puVar6;
      param_1[9] = param_1[0xe];
      *(undefined8 *)(param_1 + 0xc) = uVar12;
      *(undefined8 *)puVar6 = uVar11;
      param_1[0xe] = uVar10;
    }
    puVar5 = param_1 + 5;
    if (*puVar5 < *param_1) {
      uVar10 = param_1[4];
      uVar12 = *(undefined8 *)(param_1 + 2);
      uVar11 = *(undefined8 *)param_1;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 7);
      *(undefined8 *)param_1 = *(undefined8 *)puVar5;
      param_1[4] = param_1[9];
      *(undefined8 *)(param_1 + 7) = uVar12;
      *(undefined8 *)puVar5 = uVar11;
      param_1[9] = uVar10;
    }
  }
  return true;
}



/* Entry: 1092371a0; end: 1092372d7;  */

/* WARNING: Possible PIC construction at 0x000109237284: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109237288) */

void FUN_1092371a0(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *unaff_x20;
  long lVar9;
  undefined1 **ppuVar10;
  undefined8 uVar11;
  undefined1 auStack_c8 [56];
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  puVar1 = auStack_60;
  ppuVar10 = (undefined1 **)&stack0xfffffffffffffff0;
  lVar9 = param_1[1] - *param_1;
  uVar7 = (lVar9 >> 3) * -0x3333333333333333 + 1;
  if (uVar7 < 0x666666666666667) {
    lVar5 = param_1[2] - *param_1 >> 3;
    uVar8 = lVar5 * -0x6666666666666666;
    if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
      uVar8 = uVar7;
    }
    if (0x333333333333332 < (ulong)(lVar5 * -0x3333333333333333)) {
      uVar8 = 0x666666666666666;
    }
    plStack_38 = param_1;
    if (uVar8 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_1092372ec();
    }
    puStack_50 = (undefined8 *)((long)plVar2 + lVar9);
    plStack_40 = plVar2 + uVar8 * 5;
    uVar11 = param_2[1];
    uVar6 = *param_2;
    puStack_50[2] = param_2[2];
    puStack_50[1] = uVar11;
    *puStack_50 = uVar6;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar6 = param_2[3];
    *(undefined4 *)(puStack_50 + 4) = *(undefined4 *)(param_2 + 4);
    puStack_50[3] = uVar6;
    unaff_x20 = puStack_50 + 5;
    param_2 = (undefined8 *)*param_1;
    param_3 = (undefined8 *)param_1[1];
    param_4 = (undefined8 *)((long)puStack_50 + ((long)param_2 - (long)param_3));
    uVar6 = 0x109237288;
    plVar3 = param_1;
    plStack_58 = plVar2;
    puStack_48 = unaff_x20;
  }
  else {
    FUN_1092372d8();
    func_0x000109237468(&plStack_58);
    __Unwind_Resume(param_1);
    pcStack_68 = FUN_1092372d8;
    plVar3 = (long *)&UNK_10f55e2f1;
    ppuStack_70 = ppuVar10;
    func_0x000104c4f6cc();
    puVar1 = &stack0xffffffffffffff70;
    pcStack_78 = FUN_1092372ec;
    ppuVar10 = &puStack_80;
    if (param_2 < (undefined8 *)0x666666666666667) {
      puStack_80 = (undefined1 *)&ppuStack_70;
      __Znwm((long)param_2 * 0x28);
      return;
    }
    uVar6 = 0x109237330;
    puStack_80 = (undefined1 *)&ppuStack_70;
    func_0x000104c4f740();
  }
  *(undefined8 **)(puVar1 + -0x20) = unaff_x20;
  *(long **)(puVar1 + -0x18) = param_1;
  *(undefined1 ***)(puVar1 + -0x10) = ppuVar10;
  *(undefined8 *)(puVar1 + -8) = uVar6;
  *(undefined8 **)(puVar1 + -0x28) = param_4;
  *(undefined8 **)(puVar1 + -0x30) = param_4;
  *(long **)(puVar1 + -0x50) = plVar3;
  *(undefined1 **)(puVar1 + -0x48) = puVar1 + -0x30;
  *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x28;
  puVar4 = param_2;
  if (param_2 == param_3) {
    puVar1[-0x38] = 1;
  }
  else {
    do {
      uVar11 = puVar4[1];
      uVar6 = *puVar4;
      param_4[2] = puVar4[2];
      param_4[1] = uVar11;
      *param_4 = uVar6;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      uVar6 = puVar4[3];
      *(undefined4 *)(param_4 + 4) = *(undefined4 *)(puVar4 + 4);
      param_4[3] = uVar6;
      puVar4 = puVar4 + 5;
      param_4 = param_4 + 5;
    } while (puVar4 != param_3);
    *(undefined8 **)(puVar1 + -0x28) = param_4;
    puVar1[-0x38] = 1;
    do {
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        __ZdlPv(*param_2);
      }
      param_2 = param_2 + 5;
    } while (param_2 != param_3);
  }
  FUN_1092373f0(puVar1 + -0x50);
  return;
}



/* Entry: 1092372d8; end: 1092372eb;  */

void FUN_1092372d8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar1 = &UNK_10f55e2f1;
  func_0x000104c4f6cc();
  if ((undefined8 *)0x666666666666666 < param_2) {
    func_0x000104c4f740();
    ppuStack_78 = &puStack_60;
    ppuStack_70 = &puStack_58;
    puStack_58 = param_4;
    puVar2 = param_2;
    puStack_80 = puVar1;
    puStack_60 = param_4;
    if (param_2 == param_3) {
      uStack_68 = 1;
    }
    else {
      do {
        uVar4 = puVar2[1];
        uVar3 = *puVar2;
        puStack_58[2] = puVar2[2];
        puStack_58[1] = uVar4;
        *puStack_58 = uVar3;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        uVar3 = puVar2[3];
        *(undefined4 *)(puStack_58 + 4) = *(undefined4 *)(puVar2 + 4);
        puStack_58[3] = uVar3;
        puVar2 = puVar2 + 5;
        puStack_58 = puStack_58 + 5;
      } while (puVar2 != param_3);
      uStack_68 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 5;
      } while (param_2 != param_3);
    }
    FUN_1092373f0(&puStack_80);
    return;
  }
  __Znwm((long)param_2 * 0x28);
  return;
}



/* Entry: 1092372ec; end: 1092373ef;  */

void FUN_1092372ec(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  if ((undefined8 *)0x666666666666666 < param_2) {
    func_0x000104c4f740();
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    puStack_48 = param_4;
    puVar1 = param_2;
    uStack_70 = param_1;
    puStack_50 = param_4;
    if (param_2 == param_3) {
      uStack_58 = 1;
    }
    else {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        puStack_48[2] = puVar1[2];
        puStack_48[1] = uVar3;
        *puStack_48 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        uVar2 = puVar1[3];
        *(undefined4 *)(puStack_48 + 4) = *(undefined4 *)(puVar1 + 4);
        puStack_48[3] = uVar2;
        puVar1 = puVar1 + 5;
        puStack_48 = puStack_48 + 5;
      } while (puVar1 != param_3);
      uStack_58 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 5;
      } while (param_2 != param_3);
    }
    FUN_1092373f0(&uStack_70);
    return;
  }
  __Znwm((long)param_2 * 0x28);
  return;
}



/* Entry: 1092373f0; end: 109237423;  */

long FUN_1092373f0(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_109237424(param_1);
  }
  return param_1;
}



/* Entry: 109237424; end: 1092374ef;  */

/* WARNING: Removing unreachable block (ram,0x000109237450) */

void FUN_109237424(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x28
      ) {
  }
  return;
}



/* Entry: 1092374f0; end: 109237503;  */

void FUN_1092374f0(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar1 = (long *)&UNK_10f55e2f1;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000104c4f740();
  plVar4 = (long *)*plVar1;
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    lVar2 = plVar4[1];
    lVar3 = lVar5;
    if (lVar2 != lVar5) {
      do {
        lVar2 = lVar2 + -0x10;
        FUN_1092337c0();
      } while (lVar2 != lVar5);
      lVar3 = *(long *)*plVar1;
    }
    plVar4[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 109237504; end: 109237537;  */

void FUN_109237504(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000104c4f740();
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_1092337c0();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 109237538; end: 1092375a7;  */

void FUN_109237538(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_1092337c0();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 1092375a8; end: 1092375bb;  */

void FUN_1092375a8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar2 = &UNK_10f55e2f1;
  func_0x000104c4f6cc();
  uVar5 = *(ulong *)(puVar2 + 0x58);
  if (uVar5 == *(ulong *)(puVar2 + 0x60)) {
    uVar6 = uVar5 * 2;
    if (uVar6 < 5) {
      uVar6 = 4;
    }
    if (uVar6 <= uVar5) {
      uVar6 = uVar5 + 1;
    }
    uVar3 = uVar6;
    FUN_1092376bc();
    puVar4 = (undefined8 *)(uVar3 + *(long *)(puVar2 + 0x58) * 0x14);
    uVar10 = param_2[1];
    uVar9 = *param_2;
    *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_2 + 2);
    puVar4[1] = uVar10;
    *puVar4 = uVar9;
    uVar5 = 0;
    if (*(long *)(puVar2 + 0x58) != 0) {
      lVar7 = 0;
      uVar8 = 0;
      do {
        puVar4 = (undefined8 *)(uVar3 + lVar7);
        puVar1 = (undefined8 *)(*(long *)(puVar2 + 0x50) + lVar7);
        uVar10 = puVar1[1];
        uVar9 = *puVar1;
        *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(puVar1 + 2);
        puVar4[1] = uVar10;
        *puVar4 = uVar9;
        uVar8 = uVar8 + 1;
        uVar5 = *(ulong *)(puVar2 + 0x58);
        lVar7 = lVar7 + 0x14;
      } while (uVar8 < uVar5);
    }
    if (*(undefined **)(puVar2 + 0x50) != puVar2) {
      __ZdlPvSt11align_val_t(*(undefined **)(puVar2 + 0x50),4);
      uVar5 = *(ulong *)(puVar2 + 0x58);
    }
    *(ulong *)(puVar2 + 0x50) = uVar3;
    *(ulong *)(puVar2 + 0x60) = uVar6;
  }
  else {
    puVar4 = (undefined8 *)(*(long *)(puVar2 + 0x50) + uVar5 * 0x14);
    uVar10 = param_2[1];
    uVar9 = *param_2;
    *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_2 + 2);
    puVar4[1] = uVar10;
    *puVar4 = uVar9;
    uVar5 = *(ulong *)(puVar2 + 0x58);
  }
  *(ulong *)(puVar2 + 0x58) = uVar5 + 1;
  return;
}



/* Entry: 1092375bc; end: 1092376bb;  */

void FUN_1092375bc(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar4 = *(ulong *)(param_1 + 0x58);
  if (uVar4 == *(ulong *)(param_1 + 0x60)) {
    uVar5 = uVar4 * 2;
    if (uVar5 < 5) {
      uVar5 = 4;
    }
    if (uVar5 <= uVar4) {
      uVar5 = uVar4 + 1;
    }
    uVar2 = uVar5;
    FUN_1092376bc();
    puVar3 = (undefined8 *)(uVar2 + *(long *)(param_1 + 0x58) * 0x14);
    uVar9 = param_2[1];
    uVar8 = *param_2;
    *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_2 + 2);
    puVar3[1] = uVar9;
    *puVar3 = uVar8;
    uVar4 = 0;
    if (*(long *)(param_1 + 0x58) != 0) {
      lVar6 = 0;
      uVar7 = 0;
      do {
        puVar3 = (undefined8 *)(uVar2 + lVar6);
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0x50) + lVar6);
        uVar9 = puVar1[1];
        uVar8 = *puVar1;
        *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar1 + 2);
        puVar3[1] = uVar9;
        *puVar3 = uVar8;
        uVar7 = uVar7 + 1;
        uVar4 = *(ulong *)(param_1 + 0x58);
        lVar6 = lVar6 + 0x14;
      } while (uVar7 < uVar4);
    }
    if (*(long *)(param_1 + 0x50) != param_1) {
      __ZdlPvSt11align_val_t(*(long *)(param_1 + 0x50),4);
      uVar4 = *(ulong *)(param_1 + 0x58);
    }
    *(ulong *)(param_1 + 0x50) = uVar2;
    *(ulong *)(param_1 + 0x60) = uVar5;
  }
  else {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x50) + uVar4 * 0x14);
    uVar9 = param_2[1];
    uVar8 = *param_2;
    *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_2 + 2);
    puVar3[1] = uVar9;
    *puVar3 = uVar8;
    uVar4 = *(ulong *)(param_1 + 0x58);
  }
  *(ulong *)(param_1 + 0x58) = uVar4 + 1;
  return;
}



/* Entry: 1092376bc; end: 109237703;  */

void FUN_1092376bc(ulong param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_38;
  
  if (param_1 < 0xccccccccccccccd) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZnwmSt11align_val_t_110352290)(param_1 * 0x14,4);
    return;
  }
  puVar1 = (undefined8 *)0x8;
  ___cxa_allocate_exception();
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
  *puVar1 = &PTR_FUN_110ae3b98;
  FUN_109233e5c(puVar1 + 7);
  puStack_38 = puVar1 + 4;
  FUN_109237538(&puStack_38);
  __ZNSt3__119__shared_weak_countD2Ev(puVar1);
  return;
}



/* Entry: 109237704; end: 109237813;  */

void FUN_109237704(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110ae3b98;
  FUN_109233e5c(param_1 + 7);
  puStack_28 = param_1 + 4;
  FUN_109237538(&puStack_28);
  __ZNSt3__119__shared_weak_countD2Ev(param_1);
  return;
}



/* Entry: 109237814; end: 109237817;  */

void FUN_109237814(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109237818; end: 10923797b;  */

undefined4 FUN_109237818(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 auStack_160 [2];
  char cStack_149;
  undefined **appuStack_148 [2];
  undefined **ppuStack_138;
  undefined1 auStack_130 [56];
  undefined8 uStack_f8;
  char cStack_e1;
  undefined **appuStack_d0 [19];
  undefined4 uStack_34;
  long lStack_30;
  undefined8 uStack_28;
  
  uStack_34 = 0;
  plVar2 = &lStack_30;
  lStack_30 = param_1;
  uStack_28 = param_2;
  FUN_10923797c(plVar2,&UNK_10f55e339,0x16,0);
  plVar3 = &lStack_30;
  FUN_10923797c(plVar3,&UNK_10f55e350,0x13,0);
  uVar1 = 0;
  if (plVar2 != (long *)0xffffffffffffffff && plVar3 != (long *)0xffffffffffffffff) {
    func_0x000104c54c8c(auStack_160,lStack_30 + (long)plVar2,(long)plVar3 - (long)plVar2);
    FUN_109237a30(appuStack_148,auStack_160,8);
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
    }
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(appuStack_148,0x16,0xffffffff);
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERj(appuStack_148,&uStack_34);
    appuStack_d0[0] = &PTR_DAT_1108df740;
    appuStack_148[0] = &PTR_DAT_1108df718;
    ppuStack_138 = &PTR_DAT_11088d7b0;
    if (cStack_e1 < '\0') {
      __ZdlPv(uStack_f8);
    }
    ppuStack_138 = (undefined **)
                   (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    __ZNSt3__16localeD1Ev(auStack_130);
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev(appuStack_148,&PTR_PTR_1108df758);
    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_d0);
    uVar1 = uStack_34;
  }
  return uVar1;
}



/* Entry: 10923797c; end: 109237a2f;  */

ulong FUN_10923797c(long *param_1,char *param_2,long param_3,ulong param_4)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar5 = param_1[1];
  lVar4 = uVar5 - param_4;
  if (uVar5 < param_4) {
    param_4 = 0xffffffffffffffff;
  }
  else if (param_3 != 0) {
    lVar7 = *param_1;
    lVar1 = lVar7 + uVar5;
    lVar6 = lVar1;
    if (param_3 <= lVar4) {
      lVar3 = lVar7 + param_4;
      cVar2 = *param_2;
      do {
        lVar6 = lVar1;
        if (((0xfffffffffffffffe < (ulong)(lVar4 - param_3)) ||
            (_memchr(lVar3,(long)cVar2,(lVar4 - param_3) + 1), lVar3 == 0)) ||
           (lVar4 = lVar3, _memcmp(), lVar6 = lVar3, (int)lVar4 == 0)) break;
        lVar3 = lVar3 + 1;
        lVar4 = lVar1 - lVar3;
        lVar6 = lVar1;
      } while (param_3 <= lVar4);
    }
    param_4 = lVar6 - lVar7;
    if (lVar6 == lVar1) {
      param_4 = 0xffffffffffffffff;
    }
  }
  return param_4;
}



/* Entry: 109237a30; end: 109237aef;  */

undefined8 * FUN_109237a30(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  param_1[0xf] = &PTR___ZTv0_n24_NSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_1108df7b0;
  param_1[0x15] = 0;
  *param_1 = &PTR___ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_1108df788;
  param_1[1] = 0;
  __ZNSt3__18ios_base4initEPv(param_1 + 0xf,param_1 + 2);
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0xffffffff;
  *param_1 = &PTR_DAT_1108df718;
  param_1[0xf] = &PTR_DAT_1108df740;
  FUN_109242ea0(param_1 + 2,param_2,param_3 | 8);
  return param_1;
}



/* Entry: 109237af0; end: 10923a6df;  */

/* WARNING: Removing unreachable block (ram,0x000109239230) */
/* WARNING: Removing unreachable block (ram,0x000109239660) */
/* WARNING: Removing unreachable block (ram,0x0001092389c8) */
/* WARNING: Removing unreachable block (ram,0x000109238f34) */
/* WARNING: Removing unreachable block (ram,0x000109238da0) */
/* WARNING: Removing unreachable block (ram,0x00010923a43c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined *** FUN_109237af0(int *param_1,undefined **param_2,undefined8 param_3)

{
  int *piVar1;
  mach_header *pmVar2;
  long *plVar3;
  dword *pdVar4;
  bool bVar5;
  long ******pppppplVar6;
  int *piVar7;
  undefined1 auVar8 [8];
  dword dVar9;
  dword dVar10;
  dword dVar11;
  mach_header *pmVar12;
  code *pcVar13;
  int iVar14;
  undefined ***pppuVar15;
  undefined ***pppuVar16;
  undefined8 ******ppppppuVar17;
  undefined8 ******ppppppuVar18;
  undefined8 *puVar19;
  dword *pdVar20;
  undefined1 *puVar21;
  undefined8 *puVar22;
  mach_header *pmVar23;
  undefined1 *puVar24;
  mach_header **ppmVar25;
  undefined ***pppuVar26;
  undefined *puVar27;
  undefined **ppuVar28;
  long lVar29;
  undefined4 uVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  long lVar35;
  int *piVar36;
  undefined8 uVar37;
  ulong uVar38;
  mach_header *pmVar39;
  long *plVar40;
  long lVar41;
  undefined4 *puVar42;
  long *plVar43;
  mach_header *pmVar44;
  undefined8 uVar45;
  undefined **ppuVar46;
  undefined8 uVar47;
  undefined *puStack_6c8;
  mach_header *pmStack_630;
  mach_header *pmStack_628;
  mach_header *pmStack_620;
  mach_header *pmStack_618;
  mach_header *pmStack_610;
  mach_header **ppmStack_608;
  mach_header **ppmStack_600;
  ulong auStack_5f8 [2];
  undefined8 uStack_5e8;
  byte bStack_5e1;
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
  long lStack_4b0;
  dword *pdStack_4a8;
  dword *pdStack_4a0;
  undefined8 uStack_498;
  long lStack_490;
  undefined7 uStack_488;
  char cStack_481;
  undefined8 uStack_480;
  long lStack_478;
  long lStack_470;
  undefined8 uStack_468;
  long alStack_460 [35];
  undefined8 *puStack_348;
  undefined8 *puStack_340;
  undefined8 uStack_338;
  long lStack_330;
  long lStack_328;
  undefined8 uStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_2f0;
  int iStack_2e4;
  undefined **appuStack_2e0 [2];
  undefined **ppuStack_2d0;
  undefined1 auStack_2c8 [56];
  undefined8 uStack_290;
  char cStack_279;
  undefined **appuStack_268 [19];
  undefined **ppuStack_1d0;
  undefined8 uStack_1c8;
  dword dStack_1bc;
  long *****ppppplStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  ulong uStack_188;
  undefined4 uStack_180;
  undefined1 auStack_170 [8];
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  dword adStack_158 [2];
  undefined8 *****pppppuStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined1 auStack_138 [8];
  mach_header *pmStack_130;
  mach_header *pmStack_128;
  undefined8 uStack_120;
  mach_header *pmStack_118;
  undefined1 auStack_110 [8];
  mach_header *pmStack_108;
  mach_header *pmStack_100;
  undefined8 uStack_f8;
  mach_header *pmStack_f0;
  mach_header amStack_e8 [2];
  ulong uStack_90;
  long lStack_88;
  
  lVar31 = 0;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  plVar40 = (long *)(param_1 + 2);
  param_1[4] = 0;
  param_1[5] = 0;
  *plVar40 = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  do {
    *(undefined8 *)((long)param_1 + lVar31 + 0x48) = 0;
    *(undefined8 *)((long)param_1 + lVar31 + 0x40) = 0;
    *(undefined8 *)((long)param_1 + lVar31 + 0x38) = 0;
    *(undefined8 *)((long)param_1 + lVar31 + 0x50) = 0xffffffff;
    lVar31 = lVar31 + 0x20;
  } while (lVar31 != 0x100);
  piVar1 = param_1 + 0x4e;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  piVar1[0] = 0;
  piVar1[1] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  pppuVar15 = &ppuStack_1d0;
  ppuStack_1d0 = param_2;
  uStack_1c8 = param_3;
  FUN_10923797c(pppuVar15,&UNK_10f55e339,0x16,0);
  pppuVar16 = &ppuStack_1d0;
  FUN_10923797c(pppuVar16,&UNK_10f55e350,0x13,0);
  if ((pppuVar15 == (undefined ***)0xffffffffffffffff) ||
     (pppuVar16 == (undefined ***)0xffffffffffffffff)) {
LAB_10923a118:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return pppuVar16;
    }
    ___stack_chk_fail();
    if ((long)uStack_1a8 < 0) {
      __ZdlPv(ppppplStack_1b8);
    }
    FUN_10923fd24(&uStack_1a0);
    func_0x00010923ff08(&pmStack_630);
    func_0x00010923ff08(&uStack_498);
    if (lStack_2f0 < 0) {
      __ZdlPv(uStack_300);
    }
    appuStack_268[0] = &PTR_DAT_1108df740;
    appuStack_2e0[0] = &PTR_DAT_1108df718;
    ppuStack_2d0 = &PTR_DAT_11088d7b0;
    if (cStack_279 < '\0') {
      __ZdlPv(uStack_290);
    }
    ppuStack_2d0 = (undefined **)
                   (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    __ZNSt3__16localeD1Ev(auStack_2c8);
    ppuVar28 = &PTR_PTR_1108df758;
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev(appuStack_2e0);
    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_268);
    func_0x00010923ff08(param_1);
    __Unwind_Resume();
    *(undefined4 *)pppuVar16 = *(undefined4 *)ppuVar28;
    func_0x00010923fd80(pppuVar16 + 1);
    ppuVar46 = (undefined **)ppuVar28[1];
    pppuVar16[2] = (undefined **)ppuVar28[2];
    pppuVar16[1] = ppuVar46;
    pppuVar16[3] = (undefined **)ppuVar28[3];
    ppuVar28[1] = (undefined *)0x0;
    ppuVar28[2] = (undefined *)0x0;
    ppuVar28[3] = (undefined *)0x0;
    FUN_10923fde4(pppuVar16 + 4);
    lVar31 = 0;
    ppuVar46 = (undefined **)ppuVar28[4];
    pppuVar16[5] = (undefined **)ppuVar28[5];
    pppuVar16[4] = ppuVar46;
    pppuVar16[6] = (undefined **)ppuVar28[6];
    ppuVar28[4] = (undefined *)0x0;
    ppuVar28[5] = (undefined *)0x0;
    ppuVar28[6] = (undefined *)0x0;
    do {
      if (*(char *)((long)pppuVar16 + lVar31 + 0x4f) < '\0') {
        __ZdlPv(*(undefined8 *)((long)pppuVar16 + lVar31 + 0x38));
      }
      uVar45 = *(undefined8 *)((long)ppuVar28 + lVar31 + 0x40);
      uVar37 = *(undefined8 *)((long)ppuVar28 + lVar31 + 0x38);
      *(undefined8 *)((long)pppuVar16 + lVar31 + 0x48) =
           *(undefined8 *)((long)ppuVar28 + lVar31 + 0x48);
      *(undefined8 *)((long)pppuVar16 + lVar31 + 0x40) = uVar45;
      *(undefined8 *)((long)pppuVar16 + lVar31 + 0x38) = uVar37;
      *(undefined1 *)((long)ppuVar28 + lVar31 + 0x4f) = 0;
      *(undefined1 *)((long)ppuVar28 + lVar31 + 0x38) = 0;
      *(undefined8 *)((long)pppuVar16 + lVar31 + 0x50) =
           *(undefined8 *)((long)ppuVar28 + lVar31 + 0x50);
      lVar31 = lVar31 + 0x20;
    } while (lVar31 != 0x100);
    FUN_10923fe1c(pppuVar16 + 0x27);
    pppuVar16[0x27] = (undefined **)ppuVar28[0x27];
    ppuVar46 = (undefined **)ppuVar28[0x28];
    pppuVar16[0x29] = (undefined **)ppuVar28[0x29];
    pppuVar16[0x28] = ppuVar46;
    ppuVar28[0x27] = (undefined *)0x0;
    ppuVar28[0x28] = (undefined *)0x0;
    ppuVar28[0x29] = (undefined *)0x0;
    func_0x00010923fe80(pppuVar16 + 0x2a);
    ppuVar46 = (undefined **)ppuVar28[0x2a];
    pppuVar16[0x2b] = (undefined **)ppuVar28[0x2b];
    pppuVar16[0x2a] = ppuVar46;
    pppuVar16[0x2c] = (undefined **)ppuVar28[0x2c];
    ppuVar28[0x2a] = (undefined *)0x0;
    ppuVar28[0x2b] = (undefined *)0x0;
    ppuVar28[0x2c] = (undefined *)0x0;
    func_0x00010869e720(pppuVar16 + 0x2d,ppuVar28 + 0x2d);
    func_0x00010923feb8(pppuVar16 + 0x30,ppuVar28 + 0x30);
    return pppuVar16;
  }
  pmVar2 = (mach_header *)(param_1 + 0x54);
  plVar3 = (long *)(param_1 + 0x56);
  puStack_6c8 = &UNK_10f55e3a4;
  puVar27 = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10;
  pppuVar26 = pppuVar16;
LAB_109237cac:
  func_0x000104c54c8c(&uStack_498,(long)ppuStack_1d0 + (long)pppuVar15,
                      (long)pppuVar26 - (long)pppuVar15);
  FUN_109237a30(appuStack_2e0,&uStack_498,8);
  if (cStack_481 < '\0') {
    __ZdlPv(CONCAT44(uStack_498._4_4_,(int)uStack_498));
  }
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(appuStack_2e0,0x16,0xffffffff);
  iStack_2e4 = 0;
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERj(appuStack_2e0,&iStack_2e4);
  uStack_2f8 = 0;
  uStack_300 = 0;
  lStack_2f0 = 0;
  __ZNKSt3__18ios_base6getlocEv
            (&uStack_498,(undefined *)((long)appuStack_2e0 + (long)appuStack_2e0[0][-3]));
  plVar43 = &uStack_498;
  __ZNKSt3__16locale9use_facetERNS0_2idE(plVar43,PTR___ZNSt3__15ctypeIcE2idE_110346770);
  (**(code **)(*plVar43 + 0x38))();
  __ZNSt3__16localeD1Ev(&uStack_498);
  FUN_109242d18(appuStack_2e0,&uStack_300,plVar43);
  lVar31 = 0;
  uStack_498._0_4_ = 0;
  cStack_481 = '\0';
  uStack_488 = 0;
  lStack_490 = 0;
  lStack_478 = 0;
  uStack_480 = 0;
  uStack_468 = 0;
  lStack_470 = 0;
  alStack_460[1] = 0;
  alStack_460[0] = 0;
  alStack_460[3] = 0;
  alStack_460[2] = 0;
  alStack_460[5] = 0;
  alStack_460[4] = 0;
  alStack_460[7] = 0;
  alStack_460[6] = 0;
  alStack_460[9] = 0;
  alStack_460[8] = 0;
  alStack_460[0xb] = 0;
  alStack_460[10] = 0;
  alStack_460[0xd] = 0;
  alStack_460[0xc] = 0;
  alStack_460[0xf] = 0;
  alStack_460[0xe] = 0;
  alStack_460[0x11] = 0;
  alStack_460[0x10] = 0;
  alStack_460[0x13] = 0;
  alStack_460[0x12] = 0;
  alStack_460[0x15] = 0;
  alStack_460[0x14] = 0;
  alStack_460[0x17] = 0;
  alStack_460[0x16] = 0;
  alStack_460[0x19] = 0;
  alStack_460[0x18] = 0;
  alStack_460[0x1b] = 0;
  alStack_460[0x1a] = 0;
  alStack_460[0x1d] = 0;
  alStack_460[0x1c] = 0;
  alStack_460[0x1f] = 0;
  alStack_460[0x1e] = 0;
  do {
    *(undefined8 *)((long)alStack_460 + lVar31 + 0x10) = 0;
    *(undefined8 *)((long)alStack_460 + lVar31 + 8) = 0;
    *(undefined8 *)((long)alStack_460 + lVar31) = 0;
    *(undefined8 *)((long)alStack_460 + lVar31 + 0x18) = 0xffffffff;
    lVar31 = lVar31 + 0x20;
  } while (lVar31 != 0x100);
  puStack_318 = (undefined8 *)0x0;
  uStack_320 = 0;
  uStack_308 = 0;
  puStack_310 = (undefined8 *)0x0;
  uStack_338 = 0;
  puStack_340 = (undefined8 *)0x0;
  lStack_328 = 0;
  lStack_330 = 0;
  alStack_460[0x21] = 0;
  alStack_460[0x20] = 0;
  puStack_348 = (undefined8 *)0x0;
  alStack_460[0x22] = 0;
  if ((iStack_2e4 == 100) || (iStack_2e4 == 200)) {
    lVar31 = 0;
    pmStack_630 = (mach_header *)((ulong)pmStack_630 & 0xffffffff00000000);
    pmStack_620 = (mach_header *)0x0;
    pmStack_628 = (mach_header *)0x0;
    pmStack_610 = (mach_header *)0x0;
    pmStack_618 = (mach_header *)0x0;
    ppmStack_600 = (mach_header **)0x0;
    ppmStack_608 = (mach_header **)0x0;
    auStack_5f8[1] = 0;
    auStack_5f8[0] = 0;
    uStack_5e0 = 0;
    uStack_5e8 = 0;
    uStack_5d0 = 0;
    uStack_5d8 = 0;
    uStack_5c0 = 0;
    uStack_5c8 = 0;
    uStack_5b0 = 0;
    uStack_5b8 = 0;
    uStack_5a0 = 0;
    uStack_5a8 = 0;
    uStack_590 = 0;
    uStack_598 = 0;
    uStack_580 = 0;
    uStack_588 = 0;
    uStack_570 = 0;
    uStack_578 = 0;
    uStack_560 = 0;
    uStack_568 = 0;
    uStack_550 = 0;
    uStack_558 = 0;
    uStack_540 = 0;
    uStack_548 = 0;
    uStack_530 = 0;
    uStack_538 = 0;
    uStack_520 = 0;
    uStack_528 = 0;
    uStack_510 = 0;
    uStack_518 = 0;
    uStack_500 = 0;
    uStack_508 = 0;
    do {
      *(undefined8 *)((long)&stack0xfffffffffffffa18 + lVar31) = 0;
      *(undefined8 *)((long)auStack_5f8 + lVar31 + 8) = 0;
      *(undefined8 *)((long)auStack_5f8 + lVar31) = 0;
      *(undefined8 *)((long)&uStack_5e0 + lVar31) = 0xffffffff;
      lVar31 = lVar31 + 0x20;
    } while (lVar31 != 0x100);
    lStack_4b0 = 0;
    uStack_4b8 = 0;
    pdStack_4a0 = (dword *)0x0;
    pdStack_4a8 = (dword *)0x0;
    uStack_4d0 = 0;
    uStack_4d8 = 0;
    uStack_4c0 = 0;
    uStack_4c8 = 0;
    uStack_4f0 = 0;
    uStack_4f8 = 0;
    uStack_4e0 = 0;
    uStack_4e8 = 0;
    uStack_188 = 0;
    plStack_190 = (long *)0x0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_180 = 0x3f800000;
LAB_109237e70:
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5tellgEv(auStack_110,appuStack_2e0);
    pmVar39 = pmStack_620;
    pmVar44 = pmStack_628;
    if ((ulong)((long)pppuVar26 - (long)pppuVar15) <= uStack_90) goto LAB_109239768;
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(appuStack_2e0,2,0xffffffff);
    uStack_1b0 = 0;
    ppppplStack_1b8 = (long *****)0x0;
    uStack_1a8 = 0;
    FUN_10923b090(appuStack_2e0,&ppppplStack_1b8);
    uVar34 = uStack_1b0;
    if (-1 < (long)uStack_1a8) {
      uVar34 = uStack_1a8 >> 0x38;
    }
    if ((long)uVar34 < 7) {
      if ((long)uVar34 < 5) {
        if (uVar34 == 3) {
          pppppplVar6 = (long ******)ppppplStack_1b8;
          if (-1 < (long)uStack_1a8) {
            pppppplVar6 = &ppppplStack_1b8;
          }
          if (*(short *)pppppplVar6 == 0x6275 && *(char *)((long)pppppplVar6 + 2) == 'o') {
            dStack_1bc = 0;
            pmStack_100 = (mach_header *)0x0;
            pmStack_108 = (mach_header *)0x0;
            auStack_110 = (undefined1  [8])0x0;
            uStack_f8 = (mach_header *)0xffffffff;
            pmStack_f0 = (mach_header *)CONCAT44(pmStack_f0._4_4_,1);
            amStack_e8[0].filetype = 0;
            amStack_e8[0].cpusubtype = 0;
            amStack_e8[0].ncmds = 0;
            amStack_e8[0].sizeofcmds = 0;
            amStack_e8[0].magic = 0;
            amStack_e8[0].cputype = 0;
            uStack_148 = 0;
            pppppuStack_150 = (undefined8 ******)0x0;
            uStack_140 = 0;
            FUN_10923b090(appuStack_2e0,&pppppuStack_150);
            FUN_10923b090(appuStack_2e0,auStack_110);
            __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERj(appuStack_2e0,&dStack_1bc);
            __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(appuStack_2e0,1,0xffffffff);
            __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERj
                      (appuStack_2e0,(mach_header *)&uStack_f8);
            iVar14 = (int)appuStack_2e0;
            __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4peekEv();
            if (iVar14 == 0x3a) {
              __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(appuStack_2e0,1,0xffffffff)
              ;
              __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERj
                        (appuStack_2e0,(long)&uStack_f8 + 4);
            }
            __ZNKSt3__18ios_base6getlocEv
                      (auStack_138,(undefined *)((long)appuStack_2e0 + (long)appuStack_2e0[0][-3]));
            plVar43 = (long *)auStack_138;
            __ZNKSt3__16locale9use_facetERNS0_2idE(plVar43,PTR___ZNSt3__15ctypeIcE2idE_110346770);
            (**(code **)(*plVar43 + 0x38))();
            __ZNSt3__16localeD1Ev(auStack_138);
            FUN_109242d18(appuStack_2e0,&pppppuStack_150,plVar43);
            puStack_168 = (undefined8 *)0x0;
            auStack_170 = (undefined1  [8])0x0;
            puStack_160 = (undefined8 *)0x0;
            __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(appuStack_2e0,2,0xffffffff);
            while( true ) {
              iVar14 = (int)appuStack_2e0;
              __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4peekEv();
              if (iVar14 == 0x7d) break;
              FUN_10923bd74(auStack_138,appuStack_2e0);
              if (puStack_168 < puStack_160) {
                puStack_168[2] = pmStack_128;
                puStack_168[1] = pmStack_130;
                *puStack_168 = auStack_138;
                pmVar44 = uStack_120;
                pmStack_128 = (mach_header *)0x0;
                pmStack_130 = (mach_header *)0x0;
                auStack_138 = (undefined1  [8])0x0;
                puStack_168[4] = pmStack_118;
                puStack_168[3] = pmVar44;
                puStack_168 = puStack_168 + 5;
              }
              else {
                puVar19 = (undefined8 *)auStack_170;
                FUN_10923c7f0(puVar19,auStack_138);
                puStack_168 = puVar19;
                if ((long)pmStack_128 < 0) {
                  __ZdlPv(auStack_138);
                }
              }
              __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(appuStack_2e0,2,0xffffffff)
              ;
            }
            __ZNKSt3__18ios_base6getlocEv
                      (adStack_158,(undefined *)((long)appuStack_2e0 + (long)appuStack_2e0[0][-3]));
            pdVar20 = adStack_158;
            __ZNKSt3__16locale9use_facetERNS0_2idE(pdVar20,PTR___ZNSt3__15ctypeIcE2idE_110346770);
            (**(code **)(*(long *)pdVar20 + 0x38))();
            __ZNSt3__16localeD1Ev(adStack_158);
            FUN_109242d18(appuStack_2e0,&pppppuStack_150,pdVar20);
            lVar32 = CONCAT44(amStack_e8[0].filetype,amStack_e8[0].cpusubtype);
            lVar31 = 0;
            if (lVar32 != amStack_e8[0]._0_8_) {
              lVar31 = LZCOUNT((lVar32 - amStack_e8[0]._0_8_ >> 3) * -0x3333333333333333) * -2 +
                       0x7e;
            }
            FUN_10923cb30(amStack_e8[0]._0_8_,lVar32,lVar31,1);
            if (auStack_170 != (undefined1  [8])puStack_168) {
              puVar24 = (undefined1 *)0x0;
              while ((uint)puVar24 <
                     (uint)((int)((ulong)((long)puStack_168 - (long)auStack_170) >> 3) * -0x33333333
                           )) {
                puVar21 = auStack_170;
                FUN_10923bfcc(puVar21,0,puVar24,
                              (undefined8 *)
                              ((long)auStack_170 + ((ulong)puVar24 & 0xffffffff) * 5 * 8),
                              *(undefined4 *)
                               ((undefined8 *)
                                ((long)auStack_170 + ((ulong)puVar24 & 0xffffffff) * 5 * 8) + 3),
                              amStack_e8);
                puVar24 = puVar21;
              }
            }
            auStack_138 = (undefined1  [8])auStack_170;
            func_0x00010922df48(auStack_138);
            if ((long)uStack_140 < 0) {
              __ZdlPv(pppppuStack_150);
            }
            puVar19 = &uStack_1a0;
            FUN_10923b7d4(puVar19,dStack_1bc,&dStack_1bc);
            uVar34 = puVar19[5];
            if (uVar34 < (ulong)puVar19[6]) {
              func_0x000107c2abdc(uVar34,auStack_110);
              puVar22 = (undefined8 *)(uVar34 + 0x40);
              puVar19[5] = puVar22;
            }
            else {
              puVar22 = puVar19 + 4;
              FUN_10923de88(puVar22,auStack_110);
            }
            puVar19[5] = puVar22;
LAB_109239648:
            auStack_138 = (undefined1  [8])amStack_e8;
            func_0x00010922df48(auStack_138);
            goto LAB_109238728;
          }
        }
        else if (uVar34 == 4) {
          pppppplVar6 = (long ******)ppppplStack_1b8;
          if (-1 < (long)uStack_1a8) {
            pppppplVar6 = &ppppplStack_1b8;
          }
          if (*(int *)pppppplVar6 == 0x6f627373) {
            dStack_1bc = 0;
            auStack_110 = (undefined1  [8])0x0;
            pmStack_108 = (mach_header *)0x0;
            pmStack_100 = (mach_header *)0x0;
            pmStack_f0 = &MACH_HEADER;
            uStack_f8 = (mach_header *)0xffffffff;
            amStack_e8[0].filetype = 0;
            amStack_e8[0].cpusubtype = 0;
            amStack_e8[0].ncmds = 0;
            amStack_e8[0].sizeofcmds = 0;
            amStack_e8[0].magic = 0;
            amStack_e8[0].cputype = 0;
            uStack_148 = 0;
            pppppuStack_150 = (undefined8 ******)0x0;
            uStack_140 = 0;
            FUN_10923b090(appuStack_2e0,&pppppuStack_150);
            FUN_10923b090(appuStack_2e0,auStack_110);
            __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERj(appuStack_2e0,&dStack_1bc);
            __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(appuStack_2e0,1,0xffffffff);
            __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERj
                      (appuStack_2e0,(mach_header *)&uStack_f8);
            __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(appuStack_2e0,1,0xffffffff);
            __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERj
                      (appuStack_2e0,(long)&uStack_f8 + 4);
            __ZNKSt3__18ios_base6getlocEv
                      (auStack_138,(undefined *)((long)appuStack_2e0 + (long)appuStack_2e0[0][-3]));
            plVar43 = (long *)auStack_138;
            __ZNKSt3__16locale9use_facetERNS0_2idE(plVar43,PTR___ZNSt3__15ctypeIcE2idE_110346770);
            (**(code **)(*plVar43 + 0x38))();
            __ZNSt3__16localeD1Ev(auStack_138);
            FUN_109242d18(appuStack_2e0,&pppppuStack_150,plVar43);
            puStack_168 = (undefined8 *)0x0;
            auStack_170 = (undefined1  [8])0x0;
            puStack_160 = (undefined8 *)0x0;
            __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(appuStack_2e0,2,0xffffffff);
            while( true ) {
              iVar14 = (int)appuStack_2e0;
              __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4peekEv();
              if (iVar14 == 0x7d) break;
              FUN_10923bd74(auStack_138,appuStack_2e0);
              if (puStack_168 < puStack_160) {
                puStack_168[2] = pmStack_128;
                puStack_168[1] = pmStack_130;
                *puStack_168 = auStack_138;
                pmVar44 = uStack_120;
                pmStack_128 = (mach_header *)0x0;
                pmStack_130 = (mach_header *)0x0;
                auStack_138 = (undefined1  [8])0x0;
                puStack_168[4] = pmStack_118;
                puStack_168[3] = pmVar44;
                puStack_168 = puStack_168 + 5;
              }
              else {
                puVar19 = (undefined8 *)auStack_170;
                FUN_10923c7f0(puVar19,auStack_138);
                puStack_168 = puVar19;
                if ((long)pmStack_128 < 0) {
                  __ZdlPv(auStack_138);
                }
              }
              __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(appuStack_2e0,2,0xffffffff)
              ;
            }
            __ZNKSt3__18ios_base6getlocEv
                      (adStack_158,(undefined *)((long)appuStack_2e0 + (long)appuStack_2e0[0][-3]));
            pdVar20 = adStack_158;
            __ZNKSt3__16locale9use_facetERNS0_2idE(pdVar20,PTR___ZNSt3__15ctypeIcE2idE_110346770);
            (**(code **)(*(long *)pdVar20 + 0x38))();
            __ZNSt3__16localeD1Ev(adStack_158);
            FUN_109242d18(appuStack_2e0,&pppppuStack_150,pdVar20);
            lVar32 = CONCAT44(amStack_e8[0].filetype,amStack_e8[0].cpusubtype);
            lVar31 = 0;
            if (lVar32 != amStack_e8[0]._0_8_) {
              lVar31 = LZCOUNT((lVar32 - amStack_e8[0]._0_8_ >> 3) * -0x3333333333333333) * -2 +
                       0x7e;
            }
            FUN_10923e0b4(amStack_e8[0]._0_8_,lVar32,lVar31,1);
            if (auStack_170 != (undefined1  [8])puStack_168) {
              puVar24 = (undefined1 *)0x0;
              while ((uint)puVar24 <
                     (uint)((int)((ulong)((long)puStack_168 - (long)auStack_170) >> 3) * -0x33333333
                           )) {
                puVar21 = auStack_170;
                FUN_10923bfcc(puVar21,0,puVar24,
                              (undefined8 *)
                              ((long)auStack_170 + ((ulong)puVar24 & 0xffffffff) * 5 * 8),
                              *(undefined4 *)
                               ((undefined8 *)
                                ((long)auStack_170 + ((ulong)puVar24 & 0xffffffff) * 5 * 8) + 3),
                              amStack_e8);
                puVar24 = puVar21;
              }
            }
            auStack_138 = (undefined1  [8])auStack_170;
            func_0x00010922df48(auStack_138);
            if ((long)uStack_140 < 0) {
              __ZdlPv(pppppuStack_150);
            }
            puVar19 = &uStack_1a0;
            FUN_10923b7d4(puVar19,dStack_1bc,&dStack_1bc);
            uVar34 = puVar19[8];
            if (uVar34 < (ulong)puVar19[9]) {
              FUN_10923efd0(uVar34,auStack_110);
              pmVar44 = (mach_header *)(uVar34 + 0x40);
              puVar19[8] = pmVar44;
            }
            else {
              pmVar44 = (mach_header *)(puVar19 + 7);
              lVar31 = uVar34 - *(long *)pmVar44;
              uVar34 = (lVar31 >> 6) + 1;
              if (uVar34 >> 0x3a != 0) {
                FUN_10923f068();
                goto LAB_10923a20c;
              }
              uVar33 = puVar19[9] - *(long *)pmVar44;
              uVar38 = (long)uVar33 >> 5;
              if (uVar38 <= uVar34) {
                uVar38 = uVar34;
              }
              if (0x7fffffffffffffbf < uVar33) {
                uVar38 = 0x3ffffffffffffff;
              }
              pmStack_118 = pmVar44;
              if (uVar38 == 0) {
                pmVar39 = (mach_header *)0x0;
              }
              else {
                pmVar39 = pmVar44;
                FUN_10923f07c();
              }
              lVar31 = (long)pmVar39 + lVar31;
              uStack_120 = pmVar39 + uVar38 * 2;
              auStack_138 = (undefined1  [8])pmVar39;
              pmStack_130 = (mach_header *)lVar31;
              pmStack_128 = (mach_header *)lVar31;
              FUN_10923efd0(lVar31,auStack_110);
              pmStack_128 = (mach_header *)(lVar31 + 0x40);
              lVar31 = lVar31 + (puVar19[7] - puVar19[8]);
              func_0x00010923f0b0(pmVar44,puVar19[7],puVar19[8],lVar31);
              auStack_138 = (undefined1  [8])puVar19[7];
              puVar19[7] = lVar31;
              pmVar44 = pmStack_128;
              pmVar39 = (mach_header *)puVar19[9];
              puVar19[9] = uStack_120;
              puVar19[8] = pmStack_128;
              pmStack_130 = (mach_header *)auStack_138;
              pmStack_128 = (mach_header *)auStack_138;
              uStack_120 = pmVar39;
              func_0x00010923f140(auStack_138);
            }
            puVar19[8] = pmVar44;
            goto LAB_109239648;
          }
        }
      }
      else if (uVar34 == 5) {
        pppppplVar6 = (long ******)ppppplStack_1b8;
        if (-1 < (long)uStack_1a8) {
          pppppplVar6 = &ppppplStack_1b8;
        }
        if (*(int *)pppppplVar6 == 0x67616d69 && *(char *)((long)pppppplVar6 + 4) == 'e') {
          adStack_158[0] = 0;
          pmStack_130 = (mach_header *)0x0;
          auStack_138 = (undefined1  [8])0x0;
          pmStack_128 = (mach_header *)0x0;
          pmStack_118 = &MACH_HEADER;
          uStack_120 = (mach_header *)0xffffffff;
          auStack_110 = (undefined1  [8])0x0;
          pmStack_108 = (mach_header *)0x0;
          pmStack_100 = (mach_header *)0x0;
          FUN_10923b090(appuStack_2e0,auStack_110);
          pmVar44 = pmStack_108;
          auVar8 = auStack_110;
          if (-1 < (long)pmStack_100) {
            pmVar44 = (mach_header *)((ulong)pmStack_100 >> 0x38);
            auVar8 = (undefined1  [8])auStack_110;
          }
          puVar42 = (undefined4 *)&UNK_110ae4420;
          lVar31 = 0xd;
          while ((pmVar44 != *(mach_header **)(puVar42 + -2) ||
                 (pmVar39 = (mach_header *)auVar8,
                 _memcmp(auVar8,*(undefined8 *)(puVar42 + -4),pmVar44), (int)pmVar39 != 0))) {
            puVar42 = puVar42 + 6;
            lVar31 = lVar31 + -1;
            if (lVar31 == 0) {
              func_0x000105688514(&UNK_10f55e3a4);
              goto LAB_10923a20c;
            }
          }
          uStack_120 = (mach_header *)CONCAT44(*puVar42,(dword)uStack_120);
          uStack_148 = 0;
          pppppuStack_150 = (undefined8 ******)0x0;
          uStack_140 = 0;
          FUN_10923b090(appuStack_2e0,&pppppuStack_150);
          uVar34 = uStack_148;
          ppppppuVar18 = (undefined8 ******)pppppuStack_150;
          if (-1 < (long)uStack_140) {
            uVar34 = uStack_140 >> 0x38;
            ppppppuVar18 = &pppppuStack_150;
          }
          puVar42 = (undefined4 *)&UNK_110ae4558;
          lVar31 = 4;
          while ((uVar34 != *(ulong *)(puVar42 + -2) ||
                 (ppppppuVar17 = ppppppuVar18,
                 _memcmp(ppppppuVar18,*(undefined8 *)(puVar42 + -4),uVar34), (int)ppppppuVar17 != 0)
                 )) {
            puVar42 = puVar42 + 6;
            lVar31 = lVar31 + -1;
            if (lVar31 == 0) {
              func_0x000105688514(&UNK_10f55e3a4);
              goto LAB_10923a20c;
            }
          }
          pmStack_118 = (mach_header *)CONCAT44(pmStack_118._4_4_,*puVar42);
          FUN_10923b090(appuStack_2e0,auStack_138);
          __ZNKSt3__18ios_base6getlocEv
                    (auStack_170,(undefined *)((long)appuStack_2e0 + (long)appuStack_2e0[0][-3]));
          plVar43 = (long *)auStack_170;
          __ZNKSt3__16locale9use_facetERNS0_2idE(plVar43,PTR___ZNSt3__15ctypeIcE2idE_110346770);
          (**(code **)(*plVar43 + 0x38))();
          __ZNSt3__16localeD1Ev(auStack_170);
          FUN_109242d18(appuStack_2e0,auStack_110,plVar43);
          _sscanf(auStack_110,&UNK_10f55e44b);
          if ((long)uStack_140 < 0) {
            __ZdlPv(pppppuStack_150);
          }
          puVar19 = &uStack_1a0;
          FUN_10923b7d4(puVar19,adStack_158[0],adStack_158);
          puVar22 = (undefined8 *)puVar19[0xe];
          if (puVar22 < (undefined8 *)puVar19[0xf]) {
            if ((long)pmStack_128 < 0) {
              func_0x000107c3192c(puVar22,auStack_138,pmStack_130);
            }
            else {
              puVar22[2] = pmStack_128;
              puVar22[1] = pmStack_130;
              *puVar22 = auStack_138;
            }
            puVar22[4] = pmStack_118;
            puVar22[3] = uStack_120;
            pmVar44 = (mach_header *)(puVar22 + 5);
            puVar19[0xe] = pmVar44;
          }
          else {
            pmVar44 = (mach_header *)(puVar19 + 0xd);
            lVar31 = (long)puVar22 - (long)*(mach_header **)pmVar44;
            uVar34 = (lVar31 >> 3) * -0x3333333333333333 + 1;
            if (0x666666666666666 < uVar34) {
              FUN_10923f18c();
              goto LAB_10923a20c;
            }
            lVar32 = (long)puVar19[0xf] - (long)*(mach_header **)pmVar44 >> 3;
            uVar38 = lVar32 * -0x6666666666666666;
            if (uVar38 < uVar34 || uVar38 - uVar34 == 0) {
              uVar38 = uVar34;
            }
            if (0x333333333333332 < (ulong)(lVar32 * -0x3333333333333333)) {
              uVar38 = 0x666666666666666;
            }
            pmStack_f0 = pmVar44;
            if (uVar38 == 0) {
              pmVar39 = (mach_header *)0x0;
            }
            else {
              pmVar39 = pmVar44;
              FUN_10923f1a0();
            }
            puVar22 = (undefined8 *)((long)pmVar39 + lVar31);
            uStack_f8 = (mach_header *)((long)pmVar39 + uVar38 * 0x28);
            auStack_110 = (undefined1  [8])pmVar39;
            pmStack_108 = (mach_header *)puVar22;
            if ((long)pmStack_128 < 0) {
              pmStack_100 = (mach_header *)puVar22;
              func_0x000107c3192c(puVar22,auStack_138,pmStack_130);
              pmVar39 = pmStack_108;
              pmVar23 = pmStack_100;
            }
            else {
              puVar22[2] = pmStack_128;
              puVar22[1] = pmStack_130;
              *puVar22 = auStack_138;
              pmVar39 = (mach_header *)puVar22;
              pmVar23 = (mach_header *)puVar22;
            }
            puVar22[4] = pmStack_118;
            puVar22[3] = uStack_120;
            pmStack_100 = (mach_header *)((long)pmVar23 + 0x28);
            lVar31 = (long)pmVar39 + (puVar19[0xd] - puVar19[0xe]);
            func_0x00010923f1e4(pmVar44,puVar19[0xd],puVar19[0xe],lVar31);
            auStack_110 = (undefined1  [8])puVar19[0xd];
            puVar19[0xd] = lVar31;
            pmVar44 = pmStack_100;
            pmVar39 = (mach_header *)puVar19[0xf];
            puVar19[0xf] = uStack_f8;
            puVar19[0xe] = pmStack_100;
            pmStack_108 = (mach_header *)auStack_110;
            pmStack_100 = (mach_header *)auStack_110;
            uStack_f8 = pmVar39;
            func_0x00010923f314(auStack_110);
          }
          puVar19[0xe] = pmVar44;
          goto LAB_109239754;
        }
      }
      else if (uVar34 == 6) {
        pppppplVar6 = (long ******)ppppplStack_1b8;
        if (-1 < (long)uStack_1a8) {
          pppppplVar6 = &ppppplStack_1b8;
        }
        if (*(int *)pppppplVar6 == 0x7074756f && *(short *)((long)pppppplVar6 + 4) == 0x7475) {
          pmStack_100 = (mach_header *)0x0;
          pmStack_108 = (mach_header *)0x0;
          auStack_110 = (undefined1  [8])0x0;
          uStack_f8._0_4_ = 0xffffffff;
          uStack_f8._4_4_ = 0;
          pmStack_130 = (mach_header *)0x0;
          auStack_138 = (undefined1  [8])0x0;
          pmStack_128 = (mach_header *)0x0;
          FUN_10923b090(appuStack_2e0,auStack_138);
          pmVar44 = pmStack_130;
          auVar8 = auStack_138;
          if (-1 < (long)pmStack_128) {
            pmVar44 = (mach_header *)((ulong)pmStack_128 >> 0x38);
            auVar8 = (undefined1  [8])auStack_138;
          }
          puVar42 = (undefined4 *)&UNK_110ae3df0;
          lVar31 = 0x15;
          do {
            if ((pmVar44 == *(mach_header **)(puVar42 + -2)) &&
               (pmVar39 = (mach_header *)auVar8,
               _memcmp(auVar8,*(undefined8 *)(puVar42 + -4),pmVar44), (int)pmVar39 == 0)) {
              uVar30 = *puVar42;
              goto LAB_109239238;
            }
            puVar42 = puVar42 + 6;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          uVar30 = 0;
LAB_109239238:
          uStack_f8 = (mach_header *)CONCAT44(uVar30,(dword)uStack_f8);
          FUN_10923b090(appuStack_2e0,auStack_110);
          __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERj
                    (appuStack_2e0,(mach_header *)&uStack_f8);
          __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli
                    (appuStack_2e0,0x7fffffffffffffff,10);
          if ((long)pmStack_128 < 0) {
            __ZdlPv(auStack_138);
          }
          uVar34 = (ulong)uStack_f8 & 0xffffffff;
          if ((dword)uStack_f8 < 8) {
            uVar38 = auStack_5f8[uVar34 * 4 + 1];
            if (-1 < (char)(&bStack_5e1)[uVar34 * 0x20]) {
              uVar38 = (ulong)(&bStack_5e1)[uVar34 * 0x20];
            }
            if (((uVar38 == 0) && (*(int *)(&uStack_5e0 + uVar34 * 4) == -1)) &&
               (*(int *)((long)&uStack_5e0 + uVar34 * 0x20 + 4) == 0)) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (auStack_5f8 + uVar34 * 4,auStack_110);
              (&uStack_5e0)[uVar34 * 4] = uStack_f8;
            }
          }
          goto LAB_109238728;
        }
      }
    }
    else {
      if (9 < (long)uVar34) {
        if (uVar34 != 10) {
          if (uVar34 == 0xb) {
            pppppplVar6 = (long ******)ppppplStack_1b8;
            if (-1 < (long)uStack_1a8) {
              pppppplVar6 = &ppppplStack_1b8;
            }
            if (*pppppplVar6 == (long *****)0x6f705f7972746e65 &&
                *(long *)((long)pppppplVar6 + 3) == 0x746e696f705f7972) {
              amStack_e8[0].cpusubtype = 0;
              uStack_f8 = (mach_header *)0x0;
              pmStack_100 = (mach_header *)0x0;
              amStack_e8[0].magic = 0;
              amStack_e8[0].cputype = 0;
              pmStack_f0 = (mach_header *)0x0;
              pmStack_108 = (mach_header *)0x0;
              auStack_110 = (undefined1  [8])0x0;
              pmStack_130 = (mach_header *)0x0;
              auStack_138 = (undefined1  [8])0x0;
              pmStack_128 = (mach_header *)0x0;
              FUN_10923b090(appuStack_2e0,auStack_138);
              pmVar44 = pmStack_130;
              auVar8 = auStack_138;
              if (-1 < (long)pmStack_128) {
                pmVar44 = (mach_header *)((ulong)pmStack_128 >> 0x38);
                auVar8 = (undefined1  [8])auStack_138;
              }
              pdVar20 = (dword *)&UNK_110ae4630;
              lVar31 = 3;
              while ((pmVar44 != *(mach_header **)(pdVar20 + -2) ||
                     (pmVar39 = (mach_header *)auVar8,
                     _memcmp(auVar8,*(undefined8 *)(pdVar20 + -4),pmVar44), (int)pmVar39 != 0))) {
                pdVar20 = pdVar20 + 6;
                lVar31 = lVar31 + -1;
                if (lVar31 == 0) {
                  func_0x000105688514(&UNK_10f55e3a4);
                  goto LAB_10923a20c;
                }
              }
              amStack_e8[0].cpusubtype = *pdVar20;
              FUN_10923b090(appuStack_2e0,auStack_110);
              if ((long)pmStack_128 < 0) {
                __ZdlPv(auStack_138);
              }
              FUN_10923b464(&uStack_4f8,auStack_110);
              auStack_138 = (undefined1  [8])&uStack_f8;
              func_0x000109234d60(auStack_138);
              goto LAB_109238728;
            }
          }
          goto LAB_1092386d4;
        }
        pppppplVar6 = (long ******)ppppplStack_1b8;
        if (-1 < (long)uStack_1a8) {
          pppppplVar6 = &ppppplStack_1b8;
        }
        if (*pppppplVar6 != (long *****)0x6e6f635f63657073 || *(short *)(pppppplVar6 + 1) != 0x7473)
        goto LAB_1092386d4;
        pmStack_128 = (mach_header *)0x0;
        pmStack_130 = (mach_header *)0x0;
        auStack_138 = (undefined1  [8])0x0;
        uStack_120 = (mach_header *)0xffffffff;
        pmStack_118 = (mach_header *)((ulong)pmStack_118 & 0xffffffffffffff00);
        adStack_158[0] = 0;
        uStack_148 = 0;
        pppppuStack_150 = (undefined8 ******)0x0;
        uStack_140 = 0;
        FUN_10923b090(appuStack_2e0,&pppppuStack_150);
        uVar34 = uStack_148;
        ppppppuVar18 = (undefined8 ******)pppppuStack_150;
        if (-1 < (long)uStack_140) {
          uVar34 = uStack_140 >> 0x38;
          ppppppuVar18 = &pppppuStack_150;
        }
        puVar42 = (undefined4 *)&UNK_110ae45b8;
        lVar31 = 5;
        while ((uVar34 != *(ulong *)(puVar42 + -2) ||
               (ppppppuVar17 = ppppppuVar18,
               _memcmp(ppppppuVar18,*(undefined8 *)(puVar42 + -4),uVar34), (int)ppppppuVar17 != 0)))
        {
          puVar42 = puVar42 + 6;
          lVar31 = lVar31 + -1;
          if (lVar31 == 0) {
            func_0x000105688514(&UNK_10f55e3a4);
            goto LAB_10923a20c;
          }
        }
        uStack_120 = (mach_header *)CONCAT44(*puVar42,(dword)uStack_120);
        pmStack_118 = (mach_header *)CONCAT71(pmStack_118._1_7_,1);
        FUN_10923b090(appuStack_2e0,auStack_138);
        iVar14 = (int)appuStack_2e0;
        __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4peekEv();
        if (iVar14 == 0x20) {
          __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(appuStack_2e0,1,0xffffffff);
          __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERj(appuStack_2e0,&uStack_120);
        }
        iVar14 = (int)appuStack_2e0;
        __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4peekEv();
        if (iVar14 == 0x20) {
          __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(appuStack_2e0,1,0xffffffff);
          __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERi(appuStack_2e0,adStack_158);
        }
        __ZNKSt3__18ios_base6getlocEv
                  (auStack_170,(undefined *)((long)appuStack_2e0 + (long)appuStack_2e0[0][-3]));
        plVar43 = (long *)auStack_170;
        __ZNKSt3__16locale9use_facetERNS0_2idE(plVar43,PTR___ZNSt3__15ctypeIcE2idE_110346770);
        (**(code **)(*plVar43 + 0x38))();
        __ZNSt3__16localeD1Ev(auStack_170);
        FUN_109242d18(appuStack_2e0,&pppppuStack_150,plVar43);
        if ((long)pmStack_128 < 0) {
          func_0x000107c3192c(auStack_110,auStack_138,pmStack_130);
        }
        else {
          pmStack_108 = pmStack_130;
          auStack_110 = auStack_138;
          pmStack_100 = pmStack_128;
        }
        uStack_f8 = uStack_120;
                    /* WARNING: Ignoring partial resolution of indirect */
        pmStack_f0._0_1_ = pmStack_118._0_1_;
        amStack_e8[0].magic = adStack_158[0];
        if ((long)uStack_140 < 0) {
          __ZdlPv(pppppuStack_150);
        }
        if ((long)pmStack_128 < 0) {
          __ZdlPv(auStack_138);
        }
        func_0x00010923b364(&uStack_4e0,auStack_110);
        FUN_10923b3a0(&uStack_4c8,amStack_e8);
        goto LAB_109238728;
      }
      if (uVar34 != 7) {
        if (uVar34 == 9) {
          pppppplVar6 = (long ******)ppppplStack_1b8;
          if (-1 < (long)uStack_1a8) {
            pppppplVar6 = &ppppplStack_1b8;
          }
          if (*pppppplVar6 == (long *****)0x7475626972747461 && *(char *)(pppppplVar6 + 1) == 'e') {
            pmStack_100 = (mach_header *)0x0;
            pmStack_108 = (mach_header *)0x0;
            auStack_110 = (undefined1  [8])0x0;
            uStack_f8._0_4_ = 0xffffffff;
            uStack_f8._4_4_ = 0;
            pmStack_130 = (mach_header *)0x0;
            auStack_138 = (undefined1  [8])0x0;
            pmStack_128 = (mach_header *)0x0;
            FUN_10923b090(appuStack_2e0,auStack_138);
            pmVar44 = pmStack_130;
            auVar8 = auStack_138;
            if (-1 < (long)pmStack_128) {
              pmVar44 = (mach_header *)((ulong)pmStack_128 >> 0x38);
              auVar8 = (undefined1  [8])auStack_138;
            }
            puVar42 = (undefined4 *)&UNK_110ae3bf8;
            lVar31 = 0x15;
            do {
              if ((pmVar44 == *(mach_header **)(puVar42 + -2)) &&
                 (pmVar39 = (mach_header *)auVar8,
                 _memcmp(auVar8,*(undefined8 *)(puVar42 + -4),pmVar44), (int)pmVar39 == 0)) {
                uVar30 = *puVar42;
                goto LAB_10923911c;
              }
              puVar42 = puVar42 + 6;
              lVar31 = lVar31 + -1;
            } while (lVar31 != 0);
            uVar30 = 0;
LAB_10923911c:
            uStack_f8 = (mach_header *)CONCAT44(uVar30,(dword)uStack_f8);
            FUN_10923b090(appuStack_2e0,auStack_110);
            __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERj
                      (appuStack_2e0,(mach_header *)&uStack_f8);
            auStack_170._0_4_ = 1;
            iVar14 = (int)appuStack_2e0;
            __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4peekEv();
            if (iVar14 == 0x3a) {
              __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(appuStack_2e0,1,0xffffffff)
              ;
              __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERj(appuStack_2e0,auStack_170);
            }
            else {
              auStack_170._0_4_ = 1;
            }
            __ZNKSt3__18ios_base6getlocEv
                      (&pppppuStack_150,
                       (undefined *)((long)appuStack_2e0 + (long)appuStack_2e0[0][-3]));
            ppppppuVar18 = &pppppuStack_150;
            __ZNKSt3__16locale9use_facetERNS0_2idE
                      (ppppppuVar18,PTR___ZNSt3__15ctypeIcE2idE_110346770);
            (*(code *)(*ppppppuVar18)[7])();
            __ZNSt3__16localeD1Ev(&pppppuStack_150);
            FUN_109242d18(appuStack_2e0,auStack_138,ppppppuVar18);
            if ((long)pmStack_128 < 0) {
              __ZdlPv(auStack_138);
            }
            if (ppmStack_608 < ppmStack_600) {
              ppmStack_608[2] = pmStack_100;
              ppmStack_608[1] = pmStack_108;
              *ppmStack_608 = (mach_header *)auStack_110;
              pmStack_108 = (mach_header *)0x0;
              pmStack_100 = (mach_header *)0x0;
              auStack_110 = (undefined1  [8])0x0;
              ppmStack_608[3] = uStack_f8;
              ppmStack_608 = ppmStack_608 + 4;
            }
            else {
              ppmVar25 = &pmStack_610;
              FUN_10923b66c(ppmVar25,auStack_110);
              ppmStack_608 = ppmVar25;
            }
            goto LAB_109238728;
          }
        }
        goto LAB_1092386d4;
      }
      pppppplVar6 = (long ******)ppppplStack_1b8;
      if (-1 < (long)uStack_1a8) {
        pppppplVar6 = &ppppplStack_1b8;
      }
      if (*(int *)pppppplVar6 == 0x74786574 && *(int *)((long)pppppplVar6 + 3) == 0x65727574) {
        auStack_170 = (undefined1  [8])((ulong)(uint)auStack_170._4_4_ << 0x20);
        adStack_158[0] = 0;
        dStack_1bc = 0xffffffff;
        pmStack_128 = (mach_header *)0x0;
        pmStack_130 = (mach_header *)0x0;
        auStack_138 = (undefined1  [8])0x0;
        uStack_120 = (mach_header *)0xffffffff;
        pmStack_118 = (mach_header *)CONCAT44(pmStack_118._4_4_,1);
        auStack_110 = (undefined1  [8])0x0;
        pmStack_108 = (mach_header *)0x0;
        pmStack_100 = (mach_header *)0x0;
        FUN_10923b090(appuStack_2e0,auStack_110);
        pmVar44 = pmStack_108;
        auVar8 = auStack_110;
        if (-1 < (long)pmStack_100) {
          pmVar44 = (mach_header *)((ulong)pmStack_100 >> 0x38);
          auVar8 = (undefined1  [8])auStack_110;
        }
        puVar42 = (undefined4 *)&UNK_110ae3fe8;
        lVar31 = 0xe;
        while ((pmVar44 != *(mach_header **)(puVar42 + -2) ||
               (pmVar39 = (mach_header *)auVar8,
               _memcmp(auVar8,*(undefined8 *)(puVar42 + -4),pmVar44), (int)pmVar39 != 0))) {
          puVar42 = puVar42 + 6;
          lVar31 = lVar31 + -1;
          if (lVar31 == 0) goto LAB_10923a1c0;
        }
        uStack_120 = (mach_header *)CONCAT44(*puVar42,(dword)uStack_120);
        FUN_10923b090(appuStack_2e0,auStack_138);
        __ZNKSt3__18ios_base6getlocEv
                  (&pppppuStack_150,(undefined *)((long)appuStack_2e0 + (long)appuStack_2e0[0][-3]))
        ;
        ppppppuVar18 = &pppppuStack_150;
        __ZNKSt3__16locale9use_facetERNS0_2idE(ppppppuVar18,PTR___ZNSt3__15ctypeIcE2idE_110346770);
        (*(code *)(*ppppppuVar18)[7])();
        __ZNSt3__16localeD1Ev(&pppppuStack_150);
        FUN_109242d18(appuStack_2e0,auStack_110,ppppppuVar18);
        pmVar44 = pmStack_108;
        auVar8 = auStack_110;
        if (-1 < (long)pmStack_100) {
          pmVar44 = (mach_header *)((ulong)pmStack_100 >> 0x38);
          auVar8 = (undefined1  [8])auStack_110;
        }
        if (pmVar44 != (mach_header *)0x0) {
          pmVar39 = (mach_header *)0x0;
          lVar31 = 0;
          do {
            if (*(char *)((long)&pmVar39->magic + (long)&((mach_header *)auVar8)->magic) == ':') {
              lVar31 = lVar31 + 1;
            }
            pmVar39 = (mach_header *)((long)&pmVar39->magic + 1);
          } while (pmVar44 != pmVar39);
          if (lVar31 == 3) {
            _sscanf(auVar8,&UNK_10f55e36b);
            puVar19 = &uStack_1a0;
            FUN_10923b7d4(puVar19,(ulong)auStack_170 & 0xffffffff,auStack_170);
            puVar22 = (undefined8 *)puVar19[0xb];
            if (puVar22 < (undefined8 *)puVar19[0xc]) {
              if ((long)pmStack_128 < 0) {
                func_0x000107c3192c(puVar22,auStack_138,pmStack_130);
              }
              else {
                puVar22[2] = pmStack_128;
                puVar22[1] = pmStack_130;
                *puVar22 = auStack_138;
              }
              *(undefined4 *)(puVar22 + 4) = pmStack_118._0_4_;
              puVar22[3] = uStack_120;
              pmVar44 = (mach_header *)(puVar22 + 5);
              puVar19[0xb] = pmVar44;
            }
            else {
              pmVar44 = (mach_header *)(puVar19 + 10);
              lVar31 = (long)puVar22 - (long)*(mach_header **)pmVar44;
              uVar34 = (lVar31 >> 3) * -0x3333333333333333 + 1;
              if (0x666666666666666 < uVar34) {
                FUN_10923bc7c();
                goto LAB_10923a20c;
              }
              lVar32 = (long)puVar19[0xc] - (long)*(mach_header **)pmVar44 >> 3;
              uVar38 = lVar32 * -0x6666666666666666;
              if (uVar38 < uVar34 || uVar38 - uVar34 == 0) {
                uVar38 = uVar34;
              }
              if (0x333333333333332 < (ulong)(lVar32 * -0x3333333333333333)) {
                uVar38 = 0x666666666666666;
              }
              pmStack_f0 = pmVar44;
              if (uVar38 == 0) {
                pmVar39 = (mach_header *)0x0;
              }
              else {
                pmVar39 = pmVar44;
                func_0x000107c2abb0();
              }
              pmVar23 = pmStack_130;
              auVar8 = auStack_138;
              puVar22 = (undefined8 *)((long)pmVar39 + lVar31);
              uStack_f8 = (mach_header *)((long)pmVar39 + uVar38 * 0x28);
              auStack_110 = (undefined1  [8])pmVar39;
              pmStack_108 = (mach_header *)puVar22;
              if ((long)pmStack_128 < 0) {
                pmStack_100 = (mach_header *)puVar22;
                func_0x000107c3192c(puVar22,auStack_138,pmStack_130);
                pmVar39 = pmStack_108;
                pmVar23 = pmStack_100;
              }
              else {
                puVar22[2] = pmStack_128;
                puVar22[1] = pmVar23;
                *puVar22 = auVar8;
                pmVar39 = (mach_header *)puVar22;
                pmVar23 = (mach_header *)puVar22;
              }
              pmVar12 = uStack_120;
              *(undefined4 *)(puVar22 + 4) = pmStack_118._0_4_;
              puVar22[3] = pmVar12;
              pmStack_100 = (mach_header *)((long)pmVar23 + 0x28);
              lVar31 = (long)pmVar39 + (puVar19[10] - puVar19[0xb]);
              func_0x000107c2abb4(pmVar44,puVar19[10],puVar19[0xb],lVar31);
              auStack_110 = (undefined1  [8])puVar19[10];
              puVar19[10] = lVar31;
              pmVar44 = pmStack_100;
              pmVar39 = (mach_header *)puVar19[0xc];
              puVar19[0xc] = uStack_f8;
              puVar19[0xb] = pmStack_100;
              pmStack_108 = (mach_header *)auStack_110;
              pmStack_100 = (mach_header *)auStack_110;
              uStack_f8 = pmVar39;
              func_0x000107c2abbc(auStack_110);
            }
            puVar19[0xb] = pmVar44;
            dVar10 = adStack_158[0];
            dVar9 = dStack_1bc;
            uVar30 = auStack_170._0_4_;
            dVar11 = (dword)uStack_120;
            if (pdStack_4a0 <= pdStack_4a8) {
              lVar31 = (long)pdStack_4a8 - lStack_4b0;
              uVar34 = (lVar31 >> 4) + 1;
              if (uVar34 >> 0x3c == 0) {
                uVar38 = (long)pdStack_4a0 - lStack_4b0 >> 3;
                if (uVar38 <= uVar34) {
                  uVar38 = uVar34;
                }
                if (0x7fffffffffffffef < (ulong)((long)pdStack_4a0 - lStack_4b0)) {
                  uVar38 = 0xfffffffffffffff;
                }
                plVar43 = &lStack_4b0;
                FUN_10923bce8();
                lVar32 = lStack_4b0;
                lVar29 = (long)pdStack_4a8 - lStack_4b0;
                pdVar4 = (dword *)((long)plVar43 + lVar31);
                *pdVar4 = uVar30;
                pdVar4[1] = dVar11;
                pdVar4[2] = dVar10;
                pdVar4[3] = dVar9;
                pdVar20 = pdVar4 + 4;
                lVar29 = (long)pdVar4 - lVar29;
                _memcpy(lVar29,lVar32);
                bVar5 = lStack_4b0 != 0;
                lStack_4b0 = lVar29;
                pdStack_4a8 = pdVar20;
                pdStack_4a0 = (dword *)(plVar43 + uVar38 * 2);
                if (bVar5) {
                  __ZdlPv();
                  pdStack_4a8 = pdVar20;
                }
                goto LAB_109239754;
              }
              FUN_10923bcd4();
              goto LAB_10923a20c;
            }
            *pdStack_4a8 = auStack_170._0_4_;
            pdStack_4a8[1] = dVar11;
            pdStack_4a8[2] = dVar10;
            pdStack_4a8[3] = dVar9;
            pdStack_4a8 = pdStack_4a8 + 4;
            goto LAB_109239754;
          }
        }
        puStack_6c8 = &UNK_10f55e37d;
LAB_10923a1c0:
        func_0x000105688514(puStack_6c8);
        goto LAB_10923a20c;
      }
      if (*(int *)pppppplVar6 == 0x706d6173 && *(int *)((long)pppppplVar6 + 3) == 0x72656c70) {
        auStack_170 = (undefined1  [8])((ulong)(uint)auStack_170._4_4_ << 0x20);
        pmStack_128 = (mach_header *)0x0;
        pmStack_130 = (mach_header *)0x0;
        auStack_138 = (undefined1  [8])0x0;
        uStack_120 = (mach_header *)0xffffffff;
        pmStack_118 = (mach_header *)CONCAT44(pmStack_118._4_4_,1);
        auStack_110 = (undefined1  [8])0x0;
        pmStack_108 = (mach_header *)0x0;
        pmStack_100 = (mach_header *)0x0;
        FUN_10923b090(appuStack_2e0,auStack_110);
        pmVar44 = pmStack_108;
        auVar8 = auStack_110;
        if (-1 < (long)pmStack_100) {
          pmVar44 = (mach_header *)((ulong)pmStack_100 >> 0x38);
          auVar8 = (undefined1  [8])auStack_110;
        }
        puVar42 = (undefined4 *)&UNK_110ae4138;
        lVar31 = 3;
        while ((pmVar44 != *(mach_header **)(puVar42 + -2) ||
               (pmVar39 = (mach_header *)auVar8,
               _memcmp(auVar8,*(undefined8 *)(puVar42 + -4),pmVar44), (int)pmVar39 != 0))) {
          puVar42 = puVar42 + 6;
          lVar31 = lVar31 + -1;
          if (lVar31 == 0) {
            func_0x000105688514(&UNK_10f55e3a4);
            goto LAB_10923a20c;
          }
        }
        uStack_120 = (mach_header *)CONCAT44(*puVar42,(dword)uStack_120);
        FUN_10923b090(appuStack_2e0,auStack_138);
        __ZNKSt3__18ios_base6getlocEv
                  (&pppppuStack_150,(undefined *)((long)appuStack_2e0 + (long)appuStack_2e0[0][-3]))
        ;
        ppppppuVar18 = &pppppuStack_150;
        __ZNKSt3__16locale9use_facetERNS0_2idE(ppppppuVar18,PTR___ZNSt3__15ctypeIcE2idE_110346770);
        (*(code *)(*ppppppuVar18)[7])();
        __ZNSt3__16localeD1Ev(&pppppuStack_150);
        FUN_109242d18(appuStack_2e0,auStack_110,ppppppuVar18);
        _sscanf(auStack_110,&UNK_10f55e44b);
        puVar19 = &uStack_1a0;
        FUN_10923b7d4(puVar19,(ulong)auStack_170 & 0xffffffff,auStack_170);
        puVar22 = (undefined8 *)puVar19[0x11];
        if (puVar22 < (undefined8 *)puVar19[0x12]) {
          if ((long)pmStack_128 < 0) {
            func_0x000107c3192c(puVar22,auStack_138,pmStack_130);
          }
          else {
            puVar22[2] = pmStack_128;
            puVar22[1] = pmStack_130;
            *puVar22 = auStack_138;
          }
          *(undefined4 *)(puVar22 + 4) = pmStack_118._0_4_;
          puVar22[3] = uStack_120;
          pmVar44 = (mach_header *)(puVar22 + 5);
          puVar19[0x11] = pmVar44;
        }
        else {
          pmVar44 = (mach_header *)(puVar19 + 0x10);
          lVar31 = (long)puVar22 - (long)*(mach_header **)pmVar44;
          uVar34 = (lVar31 >> 3) * -0x3333333333333333 + 1;
          if (0x666666666666666 < uVar34) {
            FUN_10923bd1c();
            goto LAB_10923a20c;
          }
          lVar32 = (long)puVar19[0x12] - (long)*(mach_header **)pmVar44 >> 3;
          uVar38 = lVar32 * -0x6666666666666666;
          if (uVar38 < uVar34 || uVar38 - uVar34 == 0) {
            uVar38 = uVar34;
          }
          if (0x333333333333332 < (ulong)(lVar32 * -0x3333333333333333)) {
            uVar38 = 0x666666666666666;
          }
          pmStack_f0 = pmVar44;
          if (uVar38 == 0) {
            pmVar39 = (mach_header *)0x0;
          }
          else {
            pmVar39 = pmVar44;
            func_0x000107c2abc4();
          }
          puVar22 = (undefined8 *)((long)pmVar39 + lVar31);
          uStack_f8 = (mach_header *)((long)pmVar39 + uVar38 * 0x28);
          auStack_110 = (undefined1  [8])pmVar39;
          pmStack_108 = (mach_header *)puVar22;
          if ((long)pmStack_128 < 0) {
            pmStack_100 = (mach_header *)puVar22;
            func_0x000107c3192c(puVar22,auStack_138,pmStack_130);
            pmVar39 = pmStack_108;
            pmVar23 = pmStack_100;
          }
          else {
            puVar22[2] = pmStack_128;
            puVar22[1] = pmStack_130;
            *puVar22 = auStack_138;
            pmVar39 = (mach_header *)puVar22;
            pmVar23 = (mach_header *)puVar22;
          }
          *(undefined4 *)(puVar22 + 4) = pmStack_118._0_4_;
          puVar22[3] = uStack_120;
          pmStack_100 = (mach_header *)((long)pmVar23 + 0x28);
          lVar31 = (long)pmVar39 + (puVar19[0x10] - puVar19[0x11]);
          func_0x000107c2abc8(pmVar44,puVar19[0x10],puVar19[0x11],lVar31);
          auStack_110 = (undefined1  [8])puVar19[0x10];
          puVar19[0x10] = lVar31;
          pmVar44 = pmStack_100;
          pmVar39 = (mach_header *)puVar19[0x12];
          puVar19[0x12] = uStack_f8;
          puVar19[0x11] = pmStack_100;
          pmStack_108 = (mach_header *)auStack_110;
          pmStack_100 = (mach_header *)auStack_110;
          uStack_f8 = pmVar39;
          func_0x000107c2abd0(auStack_110);
        }
        puVar19[0x11] = pmVar44;
LAB_109239754:
        if ((long)pmStack_128 < 0) {
          __ZdlPv(auStack_138);
        }
        goto LAB_109238728;
      }
    }
LAB_1092386d4:
    __ZNKSt3__18ios_base6getlocEv
              (auStack_110,(undefined *)((long)appuStack_2e0 + (long)appuStack_2e0[0][-3]));
    plVar43 = (long *)auStack_110;
    __ZNKSt3__16locale9use_facetERNS0_2idE(plVar43,PTR___ZNSt3__15ctypeIcE2idE_110346770);
    (**(code **)(*plVar43 + 0x38))();
    __ZNSt3__16localeD1Ev(auStack_110);
    FUN_109242d18(appuStack_2e0,&ppppplStack_1b8,plVar43);
LAB_109238728:
    if ((long)uStack_1a8 < 0) {
      __ZdlPv(ppppplStack_1b8);
    }
    goto LAB_109237e70;
  }
  puVar27 = &UNK_10f55e2f8;
LAB_10923a1ac:
  func_0x000105688514(puVar27);
  goto LAB_10923a20c;
LAB_109239768:
  plVar43 = plStack_190;
  if ((ulong)((long)pmStack_618 - (long)pmStack_628 >> 7) < uStack_188) {
    if (uStack_188 >> 0x39 != 0) {
      FUN_10923fa98();
      goto LAB_10923a20c;
    }
    pmVar23 = (mach_header *)&pmStack_628;
    uVar34 = uStack_188;
    pmStack_f0 = (mach_header *)&pmStack_628;
    func_0x000107c2ac00();
    pmVar44 = (mach_header *)((long)pmVar23 + ((long)pmVar39 - (long)pmVar44));
    pmVar39 = (mach_header *)((long)pmVar44 + ((long)pmStack_628 - (long)pmStack_620));
    auStack_110 = (undefined1  [8])pmVar23;
    pmStack_108 = pmVar44;
    pmStack_100 = pmVar44;
    uStack_f8 = pmVar23 + uVar34 * 4;
    func_0x000107c2ac04((mach_header *)&pmStack_628,pmStack_628,pmStack_620,pmVar39);
    pmStack_100 = pmStack_628;
    uStack_f8 = pmStack_618;
    auStack_110 = (undefined1  [8])pmStack_628;
    pmStack_108 = pmStack_628;
    pmStack_628 = pmVar39;
    pmStack_620 = pmVar44;
    pmStack_618 = pmVar23 + uVar34 * 4;
    func_0x000107c2ac0c(auStack_110);
    plVar43 = plStack_190;
  }
  for (; plVar43 != (long *)0x0; plVar43 = (long *)*plVar43) {
    *(undefined4 *)(plVar43 + 3) = *(undefined4 *)(plVar43 + 2);
    FUN_10923b61c((mach_header *)&pmStack_628);
  }
  FUN_10923fd24(&uStack_1a0);
  FUN_10923a6e0(&uStack_498,&pmStack_630);
  func_0x00010923ff08(&pmStack_630);
  uStack_498._0_4_ = iStack_2e4;
  pmStack_108 = (mach_header *)0x0;
  auStack_110 = (undefined1  [8])0x0;
  uStack_f8 = (mach_header *)0x0;
  pmStack_100 = (mach_header *)0x0;
  pmStack_f0 = (mach_header *)CONCAT44(pmStack_f0._4_4_,0x3f800000);
  lVar31 = *(long *)(param_1 + 2);
  if (*(long *)(param_1 + 4) != lVar31) {
    lVar32 = 0;
    uVar34 = 0;
    do {
      pmStack_630 = (mach_header *)(lVar31 + lVar32);
      puVar24 = auStack_110;
      FUN_10923ffb4(puVar24,pmStack_630,&UNK_10dd5b8f9,&pmStack_630,auStack_138);
      *(ulong *)(puVar24 + 0x18) = uVar34;
      uVar34 = uVar34 + 1;
      lVar31 = *(long *)(param_1 + 2);
      lVar32 = lVar32 + 0x80;
    } while (uVar34 < (ulong)(*(long *)(param_1 + 4) - lVar31 >> 7));
  }
  lVar32 = CONCAT17(cStack_481,uStack_488);
  for (lVar31 = lStack_490; lVar31 != lVar32; lVar31 = lVar31 + 0x80) {
    puVar24 = auStack_110;
    FUN_1092403d4(puVar24,lVar31);
    if (puVar24 == (undefined1 *)0x0) {
      FUN_10923b61c(plVar40,lVar31);
    }
    else {
      lVar29 = *plVar40 + *(long *)(puVar24 + 0x18) * 0x80;
      pmStack_628 = (mach_header *)0x0;
      pmStack_630 = (mach_header *)0x0;
      pmStack_618 = (mach_header *)0x0;
      pmStack_620 = (mach_header *)0x0;
      plVar43 = (long *)(lVar29 + 8);
      lVar35 = *plVar43;
      pmStack_610 = (mach_header *)CONCAT44(pmStack_610._4_4_,0x3f800000);
      if (*(long *)(lVar29 + 0x10) != lVar35) {
        lVar41 = 0;
        pmVar44 = (mach_header *)0x0;
        do {
          auStack_138 = (undefined1  [8])(lVar35 + lVar41);
          ppmVar25 = &pmStack_630;
          FUN_1092404c8(ppmVar25,auStack_138,&UNK_10dd5b8f9,auStack_138,&uStack_1a0);
          ppmVar25[5] = pmVar44;
          pmVar44 = (mach_header *)((long)&pmVar44->magic + 1);
          lVar35 = *plVar43;
          lVar41 = lVar41 + 0x40;
        } while (pmVar44 < (mach_header *)(*(long *)(lVar29 + 0x10) - lVar35 >> 6));
      }
      lVar35 = *(long *)(lVar31 + 0x10);
      for (lVar29 = *(long *)(lVar31 + 8); lVar29 != lVar35; lVar29 = lVar29 + 0x40) {
        ppmVar25 = &pmStack_630;
        FUN_109240a28(ppmVar25,lVar29);
        if (ppmVar25 == (mach_header **)0x0) {
          FUN_109240478(plVar43,lVar29);
        }
      }
      FUN_109240b0c(&pmStack_630);
      lVar29 = *plVar40 + *(long *)(puVar24 + 0x18) * 0x80;
      pmStack_628 = (mach_header *)0x0;
      pmStack_630 = (mach_header *)0x0;
      pmStack_618 = (mach_header *)0x0;
      pmStack_620 = (mach_header *)0x0;
      plVar43 = (long *)(lVar29 + 0x20);
      lVar35 = *plVar43;
      pmStack_610 = (mach_header *)CONCAT44(pmStack_610._4_4_,0x3f800000);
      if (*(long *)(lVar29 + 0x28) != lVar35) {
        lVar41 = 0;
        pmVar44 = (mach_header *)0x0;
        do {
          auStack_138 = (undefined1  [8])(lVar35 + lVar41);
          ppmVar25 = &pmStack_630;
          FUN_1092404c8(ppmVar25,auStack_138,&UNK_10dd5b8f9,auStack_138,&uStack_1a0);
          ppmVar25[5] = pmVar44;
          pmVar44 = (mach_header *)((long)&pmVar44->magic + 1);
          lVar35 = *plVar43;
          lVar41 = lVar41 + 0x40;
        } while (pmVar44 < (mach_header *)(*(long *)(lVar29 + 0x28) - lVar35 >> 6));
      }
      lVar35 = *(long *)(lVar31 + 0x28);
      for (lVar29 = *(long *)(lVar31 + 0x20); lVar29 != lVar35; lVar29 = lVar29 + 0x40) {
        ppmVar25 = &pmStack_630;
        FUN_109240a28(ppmVar25,lVar29);
        if (ppmVar25 == (mach_header **)0x0) {
          FUN_109240b88(plVar43,lVar29);
        }
      }
      FUN_109240b0c(&pmStack_630);
      lVar29 = *plVar40 + *(long *)(puVar24 + 0x18) * 0x80;
      pmStack_628 = (mach_header *)0x0;
      pmStack_630 = (mach_header *)0x0;
      pmStack_618 = (mach_header *)0x0;
      pmStack_620 = (mach_header *)0x0;
      plVar43 = (long *)(lVar29 + 0x38);
      lVar35 = *plVar43;
      pmStack_610 = (mach_header *)CONCAT44(pmStack_610._4_4_,0x3f800000);
      if (*(long *)(lVar29 + 0x40) != lVar35) {
        lVar41 = 0;
        pmVar44 = (mach_header *)0x0;
        do {
          auStack_138 = (undefined1  [8])(lVar35 + lVar41);
          ppmVar25 = &pmStack_630;
          FUN_1092404c8(ppmVar25,auStack_138,&UNK_10dd5b8f9,auStack_138,&uStack_1a0);
          ppmVar25[5] = pmVar44;
          pmVar44 = (mach_header *)((long)&pmVar44->magic + 1);
          lVar35 = *plVar43;
          lVar41 = lVar41 + 0x28;
        } while (pmVar44 < (mach_header *)
                           ((*(long *)(lVar29 + 0x40) - lVar35 >> 3) * -0x3333333333333333));
      }
      lVar35 = *(long *)(lVar31 + 0x40);
      for (lVar29 = *(long *)(lVar31 + 0x38); lVar29 != lVar35; lVar29 = lVar29 + 0x28) {
        ppmVar25 = &pmStack_630;
        FUN_109240a28(ppmVar25,lVar29);
        if (ppmVar25 == (mach_header **)0x0) {
          FUN_109240d78(plVar43,lVar29);
        }
      }
      FUN_109240b0c(&pmStack_630);
      lVar29 = *plVar40 + *(long *)(puVar24 + 0x18) * 0x80;
      pmStack_628 = (mach_header *)0x0;
      pmStack_630 = (mach_header *)0x0;
      pmStack_618 = (mach_header *)0x0;
      pmStack_620 = (mach_header *)0x0;
      plVar43 = (long *)(lVar29 + 0x50);
      lVar35 = *plVar43;
      pmStack_610 = (mach_header *)CONCAT44(pmStack_610._4_4_,0x3f800000);
      if (*(long *)(lVar29 + 0x58) != lVar35) {
        lVar41 = 0;
        pmVar44 = (mach_header *)0x0;
        do {
          auStack_138 = (undefined1  [8])(lVar35 + lVar41);
          ppmVar25 = &pmStack_630;
          FUN_1092404c8(ppmVar25,auStack_138,&UNK_10dd5b8f9,auStack_138,&uStack_1a0);
          ppmVar25[5] = pmVar44;
          pmVar44 = (mach_header *)((long)&pmVar44->magic + 1);
          lVar35 = *plVar43;
          lVar41 = lVar41 + 0x28;
        } while (pmVar44 < (mach_header *)
                           ((*(long *)(lVar29 + 0x58) - lVar35 >> 3) * -0x3333333333333333));
      }
      lVar35 = *(long *)(lVar31 + 0x58);
      for (lVar29 = *(long *)(lVar31 + 0x50); lVar29 != lVar35; lVar29 = lVar29 + 0x28) {
        ppmVar25 = &pmStack_630;
        FUN_109240a28(ppmVar25,lVar29);
        if (ppmVar25 == (mach_header **)0x0) {
          FUN_109240e28(plVar43,lVar29);
        }
      }
      FUN_109240b0c(&pmStack_630);
      lVar29 = *plVar40 + *(long *)(puVar24 + 0x18) * 0x80;
      pmStack_628 = (mach_header *)0x0;
      pmStack_630 = (mach_header *)0x0;
      pmStack_618 = (mach_header *)0x0;
      pmStack_620 = (mach_header *)0x0;
      plVar43 = (long *)(lVar29 + 0x68);
      lVar35 = *plVar43;
      pmStack_610 = (mach_header *)CONCAT44(pmStack_610._4_4_,0x3f800000);
      if (*(long *)(lVar29 + 0x70) != lVar35) {
        lVar41 = 0;
        pmVar44 = (mach_header *)0x0;
        do {
          auStack_138 = (undefined1  [8])(lVar35 + lVar41);
          ppmVar25 = &pmStack_630;
          FUN_1092404c8(ppmVar25,auStack_138,&UNK_10dd5b8f9,auStack_138,&uStack_1a0);
          ppmVar25[5] = pmVar44;
          pmVar44 = (mach_header *)((long)&pmVar44->magic + 1);
          lVar35 = *plVar43;
          lVar41 = lVar41 + 0x28;
        } while (pmVar44 < (mach_header *)
                           ((*(long *)(lVar29 + 0x70) - lVar35 >> 3) * -0x3333333333333333));
      }
      lVar35 = *(long *)(lVar31 + 0x70);
      for (lVar29 = *(long *)(lVar31 + 0x68); lVar29 != lVar35; lVar29 = lVar29 + 0x28) {
        ppmVar25 = &pmStack_630;
        FUN_109240a28(ppmVar25,lVar29);
        if (ppmVar25 == (mach_header **)0x0) {
          FUN_109241028(plVar43,lVar29);
        }
      }
      FUN_109240b0c(&pmStack_630);
    }
  }
  FUN_1092410d8(auStack_110);
  pmStack_628 = (mach_header *)0x0;
  pmStack_630 = (mach_header *)0x0;
  pmStack_618 = (mach_header *)0x0;
  pmStack_620 = (mach_header *)0x0;
  pmStack_610 = (mach_header *)CONCAT44(pmStack_610._4_4_,0x3f800000);
  lVar31 = *(long *)(param_1 + 8);
  lVar32 = lStack_478;
  if (*(long *)(param_1 + 10) != lVar31) {
    lVar29 = 0;
    pmVar44 = (mach_header *)0x0;
    do {
      auStack_110 = (undefined1  [8])(lVar31 + lVar29);
      ppmVar25 = &pmStack_630;
      FUN_1092404c8(ppmVar25,auStack_110,&UNK_10dd5b8f9,auStack_110,auStack_138);
      ppmVar25[5] = pmVar44;
      pmVar44 = (mach_header *)((long)&pmVar44->magic + 1);
      lVar31 = *(long *)(param_1 + 8);
      lVar29 = lVar29 + 0x20;
      lVar32 = lStack_478;
    } while (pmVar44 < (mach_header *)(*(long *)(param_1 + 10) - lVar31 >> 5));
  }
  for (; lVar32 != lStack_470; lVar32 = lVar32 + 0x20) {
    ppmVar25 = &pmStack_630;
    FUN_109240a28(ppmVar25,lVar32);
    if (ppmVar25 == (mach_header **)0x0) {
      func_0x000109241120(param_1 + 8,lVar32);
    }
  }
  FUN_109240b0c(&pmStack_630);
  lVar31 = 0;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              ((long)param_1 + lVar31 + 0x38,(long)alStack_460 + lVar31);
    *(undefined8 *)((long)param_1 + lVar31 + 0x50) =
         *(undefined8 *)((long)alStack_460 + lVar31 + 0x18);
    lVar31 = lVar31 + 0x20;
  } while (lVar31 != 0x100);
  pmStack_628 = (mach_header *)0x0;
  pmStack_630 = (mach_header *)0x0;
  pmStack_618 = (mach_header *)0x0;
  pmStack_620 = (mach_header *)0x0;
  pmStack_610 = (mach_header *)CONCAT44(pmStack_610._4_4_,0x3f800000);
  lVar31 = *(long *)(param_1 + 0x4e);
  lVar32 = alStack_460[0x20];
  if (*(long *)(param_1 + 0x50) != lVar31) {
    lVar29 = 0;
    pmVar44 = (mach_header *)0x0;
    do {
      auStack_110 = (undefined1  [8])(lVar31 + lVar29);
      ppmVar25 = &pmStack_630;
      FUN_1092404c8(ppmVar25,auStack_110,&UNK_10dd5b8f9,auStack_110,auStack_138);
      ppmVar25[5] = pmVar44;
      pmVar44 = (mach_header *)((long)&pmVar44->magic + 1);
      lVar31 = *(long *)(param_1 + 0x4e);
      lVar29 = lVar29 + 0x38;
      lVar32 = alStack_460[0x20];
    } while (pmVar44 < (mach_header *)
                       ((*(long *)(param_1 + 0x50) - lVar31 >> 3) * 0x6db6db6db6db6db7));
  }
  for (; lVar32 != alStack_460[0x21]; lVar32 = lVar32 + 0x38) {
    ppmVar25 = &pmStack_630;
    FUN_109240a28(ppmVar25,lVar32);
    if (ppmVar25 == (mach_header **)0x0) {
      FUN_10923b464(piVar1,lVar32);
    }
  }
  FUN_109240b0c(&pmStack_630);
  for (; puStack_318 != puStack_310; puStack_318 = puStack_318 + 2) {
    piVar36 = *(int **)(param_1 + 0x60);
    piVar7 = *(int **)(param_1 + 0x62);
    pmVar44 = (mach_header *)*puStack_318;
    if (piVar36 == piVar7) {
LAB_109239de0:
      if (piVar36 == piVar7) goto LAB_109239e0c;
      if ((*(int *)(puStack_318 + 1) != piVar36[2]) ||
         (*(int *)((long)puStack_318 + 0xc) != piVar36[3])) {
        puVar27 = &UNK_10f55e4ef;
        goto LAB_10923a1ac;
      }
    }
    else {
      do {
        if ((*piVar36 == (int)pmVar44) && (piVar36[1] == (int)((ulong)pmVar44 >> 0x20)))
        goto LAB_109239de0;
        piVar36 = piVar36 + 4;
      } while (piVar36 != piVar7);
LAB_109239e0c:
      pmStack_628 = (mach_header *)puStack_318[1];
      pmStack_630 = pmVar44;
      FUN_1092411c8(param_1 + 0x60,&pmStack_630);
    }
  }
  *param_1 = (int)uStack_498;
  lVar31 = (long)puStack_340 - (long)puStack_348;
  if (0 < lVar31) {
    pmVar44 = *(mach_header **)(param_1 + 0x56);
    if (*(long *)(param_1 + 0x58) - (long)pmVar44 < lVar31) {
      lVar32 = (long)pmVar44 - *(long *)(param_1 + 0x54);
      uVar34 = (lVar31 >> 3) * -0x3333333333333333 + (lVar32 >> 3) * -0x3333333333333333;
      if (0x666666666666666 < uVar34) {
        FUN_10923f570();
LAB_10923a20c:
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10923a210);
        (*pcVar13)();
      }
      lVar29 = *(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x54) >> 3;
      uVar38 = lVar29 * -0x6666666666666666;
      if (uVar38 < uVar34 || uVar38 - uVar34 == 0) {
        uVar38 = uVar34;
      }
      if (0x333333333333332 < (ulong)(lVar29 * -0x3333333333333333)) {
        uVar38 = 0x666666666666666;
      }
      pmStack_610 = pmVar2;
      if (uVar38 == 0) {
        pmVar39 = (mach_header *)0x0;
      }
      else {
        pmVar39 = pmVar2;
        FUN_10923f584();
      }
      puVar19 = (undefined8 *)((long)pmVar39 + lVar32);
      pmStack_618 = (mach_header *)((long)pmVar39 + uVar38 * 0x28);
      lVar32 = (long)puVar19 + lVar31;
      puVar22 = puStack_348;
      pmStack_630 = pmVar39;
      pmStack_628 = (mach_header *)puVar19;
      pmStack_620 = (mach_header *)puVar19;
      do {
        if (*(char *)((long)puVar22 + 0x17) < '\0') {
          func_0x000107c3192c(puVar19,*puVar22,puVar22[1]);
        }
        else {
          uVar45 = puVar22[1];
          uVar37 = *puVar22;
          puVar19[2] = puVar22[2];
          puVar19[1] = uVar45;
          *puVar19 = uVar37;
        }
        uVar37 = puVar22[3];
        *(undefined1 *)(puVar19 + 4) = *(undefined1 *)(puVar22 + 4);
        puVar19[3] = uVar37;
        puVar19 = puVar19 + 5;
        puVar22 = puVar22 + 5;
        lVar31 = lVar31 + -0x28;
      } while (lVar31 != 0);
      pmStack_620 = (mach_header *)lVar32;
      func_0x00010923f5c8(pmVar2,pmVar44,*plVar3,lVar32);
      pmStack_620 = (mach_header *)((long)pmStack_620 + (*plVar3 - (long)pmVar44));
      *plVar3 = (long)pmVar44;
      lVar31 = (long)pmStack_628 + (*(long *)pmVar2 - (long)pmVar44);
      func_0x00010923f5c8(pmVar2,*(long *)pmVar2,pmVar44,lVar31);
      pmStack_630 = *(mach_header **)(param_1 + 0x54);
      *(long *)(param_1 + 0x54) = lVar31;
      pmVar44 = *(mach_header **)(param_1 + 0x58);
      *(mach_header **)(param_1 + 0x58) = pmStack_618;
      *plVar3 = (long)pmStack_620;
      pmStack_628 = pmStack_630;
      pmStack_620 = pmStack_630;
      pmStack_618 = pmVar44;
      func_0x00010923f700(&pmStack_630);
    }
    else {
      pmStack_628 = (mach_header *)auStack_138;
      pmStack_620 = (mach_header *)auStack_110;
      pmStack_618 = (mach_header *)((ulong)pmStack_618 & 0xffffffffffffff00);
      pmStack_630 = pmVar2;
      auStack_138 = (undefined1  [8])pmVar44;
      for (puVar19 = puStack_348; auStack_110 = (undefined1  [8])pmVar44, puVar19 != puStack_340;
          puVar19 = puVar19 + 5) {
        if (*(char *)((long)puVar19 + 0x17) < '\0') {
          func_0x000107c3192c(pmVar44,*puVar19,puVar19[1]);
        }
        else {
          uVar47 = puVar19[1];
          uVar45 = *puVar19;
          uVar37 = puVar19[2];
          pmVar44->ncmds = (int)uVar37;
          pmVar44->sizeofcmds = (int)((ulong)uVar37 >> 0x20);
          pmVar44->cpusubtype = (int)uVar47;
          pmVar44->filetype = (int)((ulong)uVar47 >> 0x20);
          pmVar44->magic = (int)uVar45;
          pmVar44->cputype = (int)((ulong)uVar45 >> 0x20);
        }
        uVar37 = puVar19[3];
        *(undefined1 *)&pmVar44[1].magic = *(undefined1 *)(puVar19 + 4);
        pmVar44->flags = (int)uVar37;
        pmVar44->reserved = (int)((ulong)uVar37 >> 0x20);
        pmVar44 = (mach_header *)&((mach_header *)((long)auStack_110 + 0x20))->cpusubtype;
      }
      uVar34 = (ulong)pmStack_618 >> 8;
      pmStack_618 = (mach_header *)CONCAT71((int7)uVar34,1);
      FUN_10923f688(&pmStack_630);
      *plVar3 = (long)pmVar44;
    }
  }
  FUN_109241290(param_1 + 0x5a,*(undefined8 *)(param_1 + 0x5c),lStack_330,lStack_328,
                lStack_328 - lStack_330 >> 2);
  pppuVar15 = &ppuStack_1d0;
  FUN_10923797c(pppuVar15,&UNK_10f55e339,0x16,pppuVar26);
  pppuVar26 = &ppuStack_1d0;
  FUN_10923797c(pppuVar26,&UNK_10f55e350,0x13,pppuVar15);
  func_0x00010923ff08(&uStack_498);
  if (lStack_2f0 < 0) {
    __ZdlPv(uStack_300);
  }
  appuStack_268[0] = &PTR_DAT_1108df740;
  appuStack_2e0[0] = &PTR_DAT_1108df718;
  ppuStack_2d0 = &PTR_DAT_11088d7b0;
  if (cStack_279 < '\0') {
    __ZdlPv(uStack_290);
  }
  ppuStack_2d0 = (undefined **)puVar27;
  __ZNSt3__16localeD1Ev(auStack_2c8);
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev(appuStack_2e0,&PTR_PTR_1108df758);
  pppuVar16 = appuStack_268;
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev();
  if ((pppuVar15 == (undefined ***)0xffffffffffffffff) ||
     (pppuVar26 == (undefined ***)0xffffffffffffffff)) goto LAB_10923a118;
  goto LAB_109237cac;
}



/* Entry: 10923a6e0; end: 10923a7ef;  */

undefined4 * FUN_10923a6e0(undefined4 *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  func_0x00010923fd80(param_1 + 2);
  uVar2 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar2;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  FUN_10923fde4(param_1 + 8);
  lVar1 = 0;
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  do {
    if (*(char *)((long)param_1 + lVar1 + 0x4f) < '\0') {
      __ZdlPv(*(undefined8 *)((long)param_1 + lVar1 + 0x38));
    }
    uVar3 = *(undefined8 *)((long)param_2 + lVar1 + 0x40);
    uVar2 = *(undefined8 *)((long)param_2 + lVar1 + 0x38);
    *(undefined8 *)((long)param_1 + lVar1 + 0x48) = *(undefined8 *)((long)param_2 + lVar1 + 0x48);
    *(undefined8 *)((long)param_1 + lVar1 + 0x40) = uVar3;
    *(undefined8 *)((long)param_1 + lVar1 + 0x38) = uVar2;
    *(undefined1 *)((long)param_2 + lVar1 + 0x4f) = 0;
    *(undefined1 *)((long)param_2 + lVar1 + 0x38) = 0;
    *(undefined8 *)((long)param_1 + lVar1 + 0x50) = *(undefined8 *)((long)param_2 + lVar1 + 0x50);
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x100);
  FUN_10923fe1c(param_1 + 0x4e);
  *(undefined8 *)(param_1 + 0x4e) = *(undefined8 *)(param_2 + 0x4e);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x52) = *(undefined8 *)(param_2 + 0x52);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(undefined8 *)(param_2 + 0x4e) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x52) = 0;
  FUN_10923fe80(param_1 + 0x54);
  uVar2 = *(undefined8 *)(param_2 + 0x54);
  *(undefined8 *)(param_1 + 0x56) = *(undefined8 *)(param_2 + 0x56);
  *(undefined8 *)(param_1 + 0x54) = uVar2;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x54) = 0;
  *(undefined8 *)(param_2 + 0x56) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  func_0x00010869e720(param_1 + 0x5a,param_2 + 0x5a);
  func_0x00010923feb8(param_1 + 0x60,param_2 + 0x60);
  return param_1;
}



/* Entry: 10923a7f0; end: 10923a9a7;  */

/* WARNING: Removing unreachable block (ram,0x00010923a934) */

void FUN_10923a7f0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_230 [408];
  undefined1 auStack_98 [24];
  long lStack_80;
  undefined8 uStack_78;
  undefined1 uStack_69;
  undefined1 *puStack_68;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  plVar1 = &lStack_80;
  lStack_80 = param_2;
  uStack_78 = param_3;
  FUN_10923797c(plVar1,&UNK_10f55e51a,0x1c,0);
  plVar2 = &lStack_80;
  FUN_10923797c(plVar2,&UNK_10f55e537,0x19,0);
  if (plVar1 != (long *)0xffffffffffffffff && plVar2 != (long *)0xffffffffffffffff) {
    do {
      plVar3 = &lStack_80;
      FUN_10923a9a8(plVar3,&UNK_10f55e337,plVar1);
      func_0x000104c54c8c(auStack_98,lStack_80 + (long)plVar1 + 0x1c,
                          (long)plVar3 - ((long)plVar1 + 0x1c));
      FUN_109237af0(auStack_230,lStack_80 + (long)plVar1,(long)plVar2 - (long)plVar1);
      puVar4 = param_1;
      puStack_68 = auStack_98;
      FUN_109243108(param_1,auStack_98,&UNK_10dd5b8f9,&puStack_68,&uStack_69);
      FUN_10923a6e0(puVar4 + 5,auStack_230);
      func_0x00010923ff08(auStack_230);
      plVar1 = &lStack_80;
      FUN_10923797c(plVar1,&UNK_10f55e51a,0x1c,plVar2);
      plVar2 = &lStack_80;
      FUN_10923797c(plVar2,&UNK_10f55e537,0x19,plVar1);
      if (plVar1 == (long *)0xffffffffffffffff) {
        return;
      }
    } while (plVar2 != (long *)0xffffffffffffffff);
  }
  return;
}



/* Entry: 10923a9a8; end: 10923aa63;  */

ulong FUN_10923a9a8(long *param_1,char *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar2 = *param_1;
  uVar3 = param_1[1];
  pcVar5 = param_2;
  _strlen();
  lVar7 = uVar3 - param_3;
  if (uVar3 < param_3) {
    param_3 = 0xffffffffffffffff;
  }
  else if (pcVar5 != (char *)0x0) {
    lVar1 = lVar2 + uVar3;
    lVar8 = lVar1;
    if ((long)pcVar5 <= lVar7) {
      lVar6 = lVar2 + param_3;
      cVar4 = *param_2;
      do {
        lVar8 = lVar1;
        if (((0xfffffffffffffffe < (ulong)(lVar7 - (long)pcVar5)) ||
            (_memchr(lVar6,(long)cVar4,(lVar7 - (long)pcVar5) + 1), lVar6 == 0)) ||
           (lVar7 = lVar6, _memcmp(), lVar8 = lVar6, (int)lVar7 == 0)) break;
        lVar6 = lVar6 + 1;
        lVar7 = lVar1 - lVar6;
        lVar8 = lVar1;
      } while ((long)pcVar5 <= lVar7);
    }
    param_3 = lVar8 - lVar2;
    if (lVar8 == lVar1) {
      param_3 = 0xffffffffffffffff;
    }
  }
  return param_3;
}



/* Entry: 10923aa64; end: 10923aaa7;  */

long FUN_10923aa64(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x18;
  func_0x0001092349c8(&lStack_28);
  lStack_28 = param_1;
  FUN_10922dc0c(&lStack_28);
  return param_1;
}



/* Entry: 10923aaa8; end: 10923b03b;  */

void FUN_10923aaa8(long *param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  
  puVar1 = *(undefined4 **)(param_2 + 8);
  puVar2 = *(undefined4 **)(param_2 + 0x10);
  plStack_b8 = (long *)0x0;
  lStack_c0 = 0;
  lStack_a8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_98 = 0;
  lStack_a0 = 0;
  for (; puVar1 != puVar2; puVar1 = puVar1 + 0x20) {
    plVar7 = *(long **)(puVar1 + 4);
    for (plVar6 = *(long **)(puVar1 + 2); plVar6 != plVar7; plVar6 = plVar6 + 8) {
      if (*(char *)((long)plVar6 + 0x17) < '\0') {
        func_0x000107c3192c(&plStack_90,*plVar6,plVar6[1]);
      }
      else {
        lStack_88 = plVar6[1];
        plStack_90 = (long *)*plVar6;
        lStack_80 = plVar6[2];
      }
      uStack_78 = 4;
      uStack_74 = *puVar1;
      uStack_70 = (undefined4)plVar6[3];
      if (plStack_b8 < plStack_b0) {
        plStack_b8[2] = lStack_80;
        plStack_b8[1] = lStack_88;
        *plStack_b8 = (long)plStack_90;
        uVar3 = uStack_70;
        lStack_88 = 0;
        lStack_80 = 0;
        plStack_90 = (long *)0x0;
        plStack_b8[3] = CONCAT44(uStack_74,uStack_78);
        *(undefined4 *)(plStack_b8 + 4) = uVar3;
        plStack_b8 = plStack_b8 + 5;
      }
      else {
        plVar4 = &lStack_c0;
        FUN_1092371a0(plVar4,&plStack_90);
        plStack_b8 = plVar4;
        if (lStack_80 < 0) {
          __ZdlPv(plStack_90);
        }
      }
    }
    plVar7 = *(long **)(puVar1 + 10);
    for (plVar6 = *(long **)(puVar1 + 8); plVar6 != plVar7; plVar6 = plVar6 + 8) {
      if (*(char *)((long)plVar6 + 0x17) < '\0') {
        func_0x000107c3192c(&plStack_90,*plVar6,plVar6[1]);
      }
      else {
        lStack_88 = plVar6[1];
        plStack_90 = (long *)*plVar6;
        lStack_80 = plVar6[2];
      }
      uStack_78 = 5;
      uStack_74 = *puVar1;
      uStack_70 = (undefined4)plVar6[3];
      if (plStack_b8 < plStack_b0) {
        plStack_b8[2] = lStack_80;
        plStack_b8[1] = lStack_88;
        *plStack_b8 = (long)plStack_90;
        uVar3 = uStack_70;
        lStack_88 = 0;
        lStack_80 = 0;
        plStack_90 = (long *)0x0;
        plStack_b8[3] = CONCAT44(uStack_74,uStack_78);
        *(undefined4 *)(plStack_b8 + 4) = uVar3;
        plStack_b8 = plStack_b8 + 5;
      }
      else {
        plVar4 = &lStack_c0;
        FUN_1092371a0(plVar4,&plStack_90);
        plStack_b8 = plVar4;
        if (lStack_80 < 0) {
          __ZdlPv(plStack_90);
        }
      }
    }
    plVar7 = *(long **)(puVar1 + 0x16);
    for (plVar6 = *(long **)(puVar1 + 0x14); plVar6 != plVar7; plVar6 = plVar6 + 5) {
      if (*(char *)((long)plVar6 + 0x17) < '\0') {
        func_0x000107c3192c(&plStack_90,*plVar6,plVar6[1]);
      }
      else {
        lStack_88 = plVar6[1];
        plStack_90 = (long *)*plVar6;
        lStack_80 = plVar6[2];
      }
      uStack_78 = 3;
      uStack_74 = *puVar1;
      uStack_70 = (undefined4)plVar6[3];
      if (plStack_b8 < plStack_b0) {
        plStack_b8[2] = lStack_80;
        plStack_b8[1] = lStack_88;
        *plStack_b8 = (long)plStack_90;
        uVar3 = uStack_70;
        lStack_88 = 0;
        lStack_80 = 0;
        plStack_90 = (long *)0x0;
        plStack_b8[3] = CONCAT44(uStack_74,uStack_78);
        *(undefined4 *)(plStack_b8 + 4) = uVar3;
        plStack_b8 = plStack_b8 + 5;
      }
      else {
        plVar4 = &lStack_c0;
        FUN_1092371a0(plVar4,&plStack_90);
        plStack_b8 = plVar4;
        if (lStack_80 < 0) {
          __ZdlPv(plStack_90);
        }
      }
    }
    plVar7 = *(long **)(puVar1 + 0x10);
    for (plVar6 = *(long **)(puVar1 + 0xe); plVar6 != plVar7; plVar6 = plVar6 + 5) {
      if (*(char *)((long)plVar6 + 0x17) < '\0') {
        func_0x000107c3192c(&plStack_90,*plVar6,plVar6[1]);
      }
      else {
        lStack_88 = plVar6[1];
        plStack_90 = (long *)*plVar6;
        lStack_80 = plVar6[2];
      }
      uStack_78 = 2;
      uStack_74 = *puVar1;
      uStack_70 = (undefined4)plVar6[3];
      if (plStack_b8 < plStack_b0) {
        plStack_b8[2] = lStack_80;
        plStack_b8[1] = lStack_88;
        *plStack_b8 = (long)plStack_90;
        uVar3 = uStack_70;
        lStack_88 = 0;
        lStack_80 = 0;
        plStack_90 = (long *)0x0;
        plStack_b8[3] = CONCAT44(uStack_74,uStack_78);
        *(undefined4 *)(plStack_b8 + 4) = uVar3;
        plStack_b8 = plStack_b8 + 5;
      }
      else {
        plVar4 = &lStack_c0;
        FUN_1092371a0(plVar4,&plStack_90);
        plStack_b8 = plVar4;
        if (lStack_80 < 0) {
          __ZdlPv(plStack_90);
        }
      }
    }
    plVar7 = *(long **)(puVar1 + 0x1c);
    for (plVar6 = *(long **)(puVar1 + 0x1a); plVar6 != plVar7; plVar6 = plVar6 + 5) {
      if (*(char *)((long)plVar6 + 0x17) < '\0') {
        func_0x000107c3192c(&plStack_90,*plVar6,plVar6[1]);
      }
      else {
        lStack_88 = plVar6[1];
        plStack_90 = (long *)*plVar6;
        lStack_80 = plVar6[2];
      }
      uStack_78 = 1;
      uStack_74 = *puVar1;
      uStack_70 = (undefined4)plVar6[3];
      if (plStack_b8 < plStack_b0) {
        plStack_b8[2] = lStack_80;
        plStack_b8[1] = lStack_88;
        *plStack_b8 = (long)plStack_90;
        uVar3 = uStack_70;
        lStack_88 = 0;
        lStack_80 = 0;
        plStack_90 = (long *)0x0;
        plStack_b8[3] = CONCAT44(uStack_74,uStack_78);
        *(undefined4 *)(plStack_b8 + 4) = uVar3;
        plStack_b8 = plStack_b8 + 5;
      }
      else {
        plVar4 = &lStack_c0;
        FUN_1092371a0(plVar4,&plStack_90);
        plStack_b8 = plVar4;
        if (lStack_80 < 0) {
          __ZdlPv(plStack_90);
        }
      }
    }
  }
  plVar6 = param_1 + 6;
  param_1[7] = 0;
  *plVar6 = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  if (&lStack_c0 != param_1) {
    FUN_1092425a8(param_1,lStack_c0,plStack_b8,
                  ((long)plStack_b8 - lStack_c0 >> 3) * -0x3333333333333333);
  }
  if (param_1 + 3 != (long *)(param_2 + 0x180)) {
    FUN_1092428a8();
  }
  plVar4 = *(long **)(param_2 + 0x28);
  for (plVar7 = *(long **)(param_2 + 0x20); plVar7 != plVar4; plVar7 = plVar7 + 4) {
    if (*(char *)((long)plVar7 + 0x17) < '\0') {
      func_0x000107c3192c(&plStack_90,*plVar7,plVar7[1]);
    }
    else {
      lStack_88 = plVar7[1];
      plStack_90 = (long *)*plVar7;
      lStack_80 = plVar7[2];
    }
    uStack_78 = (undefined4)plVar7[3];
    plVar5 = (long *)param_1[7];
    if (plVar5 < (long *)param_1[8]) {
      plVar5[2] = lStack_80;
      plVar5[1] = lStack_88;
      *plVar5 = (long)plStack_90;
      lStack_88 = 0;
      lStack_80 = 0;
      plStack_90 = (long *)0x0;
      *(undefined4 *)(plVar5 + 3) = uStack_78;
      param_1[7] = (long)(plVar5 + 4);
    }
    else {
      plVar5 = plVar6;
      FUN_109242a08(plVar6,&plStack_90);
      param_1[7] = (long)plVar5;
      if (lStack_80 < 0) {
        __ZdlPv(plStack_90);
      }
    }
  }
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  plStack_90 = &lStack_c0;
  func_0x00010922e0d8(&plStack_90);
  return;
}



/* Entry: 10923b03c; end: 10923b08f;  */

long FUN_10923b03c(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x30;
  func_0x000109234ab4(&lStack_28);
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
    __ZdlPv();
  }
  lStack_28 = param_1;
  func_0x00010922e0d8(&lStack_28);
  return param_1;
}



/* Entry: 10923b090; end: 10923b2d3;  */

long * FUN_10923b090(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined1 *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 auStack_50 [15];
  char cStack_41;
  
  puVar3 = auStack_50;
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6sentryC1ERS3_b(&cStack_41,param_1,0);
  if (cStack_41 == '\x01') {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      *(undefined1 *)*param_2 = 0;
      param_2[1] = 0;
    }
    else {
      *(undefined1 *)param_2 = 0;
      *(undefined1 *)((long)param_2 + 0x17) = 0;
    }
    uVar5 = *(ulong *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x18);
    uVar8 = uVar5;
    if (0x7ffffffffffffff6 < uVar5) {
      uVar8 = 0x7ffffffffffffff7;
    }
    uVar1 = 0x7ffffffffffffff7;
    if (0 < (long)uVar5) {
      uVar1 = uVar8;
    }
    __ZNKSt3__18ios_base6getlocEv(auStack_50);
    __ZNKSt3__16locale9use_facetERNS0_2idE(auStack_50,PTR___ZNSt3__15ctypeIcE2idE_110346770);
    __ZNSt3__16localeD1Ev(auStack_50);
    if (uVar1 == 0) {
      lVar6 = *param_1;
      *(undefined8 *)((long)param_1 + *(long *)(lVar6 + -0x18) + 0x18) = 0;
      uVar2 = 4;
    }
    else {
      uVar8 = 0;
      do {
        plVar4 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x28);
        if ((byte *)plVar4[3] == (byte *)plVar4[4]) {
          (**(code **)(*plVar4 + 0x48))();
          uVar2 = (uint)plVar4;
          if (uVar2 != 0xffffffff) goto LAB_10923b178;
          uVar7 = 2;
LAB_10923b210:
          lVar6 = *param_1;
          *(undefined8 *)((long)param_1 + *(long *)(lVar6 + -0x18) + 0x18) = 0;
          uVar2 = uVar7 | 4;
          if (uVar8 != 0) {
            uVar2 = uVar7;
          }
          goto LAB_10923b22c;
        }
        uVar2 = (uint)*(byte *)plVar4[3];
LAB_10923b178:
        if (((uVar2 >> 7 & 1) == 0) &&
           ((*(uint *)(*(long *)(puVar3 + 0x10) + (ulong)(uVar2 & 0x7f) * 4) >> 0xe & 1) != 0)) {
          uVar7 = 0;
          goto LAB_10923b210;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (param_2,(int)(char)uVar2);
        plVar4 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x28);
        if (plVar4[3] == plVar4[4]) {
          (**(code **)(*plVar4 + 0x50))();
        }
        else {
          plVar4[3] = plVar4[3] + 1;
        }
        uVar8 = uVar8 + 1;
      } while (uVar1 != uVar8);
      lVar6 = *param_1;
      *(undefined8 *)((long)param_1 + *(long *)(lVar6 + -0x18) + 0x18) = 0;
      uVar2 = 0;
    }
LAB_10923b22c:
    lVar6 = (long)param_1 + *(long *)(lVar6 + -0x18);
    __ZNSt3__18ios_base5clearEj(lVar6,*(uint *)(lVar6 + 0x20) | uVar2);
  }
  return param_1;
}



/* Entry: 10923b2d4; end: 10923b39f;  */

undefined8 * FUN_10923b2d4(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 5;
  func_0x00010922df48(&puStack_28);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10923b3a0; end: 10923b463;  */

long **** FUN_10923b3a0(long ****param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  long ****pppplVar2;
  ulong uVar3;
  long ****pppplVar4;
  ulong uVar5;
  ulong uVar6;
  long ***ppplVar7;
  long lVar8;
  long ***ppplVar9;
  long ***ppplVar10;
  long ***ppplStack_c8;
  long ***ppplStack_c0;
  long ***ppplStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  long ***ppplStack_a0;
  long ***ppplStack_98;
  long ***ppplStack_88;
  long **pplStack_80;
  long ***ppplStack_78;
  long ***ppplStack_70;
  long ***ppplStack_68;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  ppplVar10 = param_1[1];
  if (ppplVar10 < param_1[2]) {
    ppplVar9 = (long ***)((long)ppplVar10 + 4);
    *(undefined4 *)ppplVar10 = *param_2;
    pppplVar2 = param_1;
  }
  else {
    lVar8 = (long)ppplVar10 - (long)*param_1;
    uVar6 = (lVar8 >> 2) + 1;
    if (uVar6 >> 0x3e != 0) {
      FUN_10923f788();
      pcStack_38 = FUN_10923b464;
      ppuStack_b0 = &puStack_40;
      pppplVar4 = (long ****)param_1[1];
      puStack_40 = &stack0xfffffffffffffff0;
      if (pppplVar4 < param_1[2]) {
        pppplVar2 = pppplVar4;
        FUN_10923f7d0(pppplVar4,param_2);
        ppplStack_a0 = (long ***)(pppplVar4 + 7);
        param_1[1] = ppplStack_a0;
      }
      else {
        ppplVar10 = (long ***)((long)pppplVar4 - (long)*param_1);
        uVar6 = ((long)ppplVar10 >> 3) * 0x6db6db6db6db6db7 + 1;
        if (0x492492492492492 < uVar6) {
          pppplVar4 = param_1;
          FUN_10923f960();
          param_1[1] = ppplVar10;
          pppplVar2 = pppplVar4;
          __Unwind_Resume();
          pcStack_a8 = FUN_10923b5d4;
          ppplStack_c8 = (long ***)(pppplVar2 + 3);
          ppplStack_c0 = (long ***)pppplVar4;
          ppplStack_b8 = (long ***)param_1;
          func_0x000109234d60(&ppplStack_c8);
          if (*(char *)((long)pppplVar2 + 0x17) < '\0') {
            __ZdlPv(*pppplVar2);
          }
          return pppplVar2;
        }
        lVar8 = (long)param_1[2] - (long)*param_1 >> 3;
        uVar5 = lVar8 * -0x2492492492492492;
        if (uVar5 < uVar6 || uVar5 - uVar6 == 0) {
          uVar5 = uVar6;
        }
        if (0x249249249249248 < (ulong)(lVar8 * 0x6db6db6db6db6db7)) {
          uVar5 = 0x492492492492492;
        }
        ppplStack_68 = (long ***)param_1;
        if (uVar5 == 0) {
          pppplVar4 = (long ****)0x0;
        }
        else {
          pppplVar4 = param_1;
          FUN_10923f974();
        }
        lVar8 = (long)pppplVar4 + (long)ppplVar10;
        ppplStack_70 = (long ***)(pppplVar4 + uVar5 * 7);
        ppplStack_88 = (long ***)pppplVar4;
        pplStack_80 = (long **)lVar8;
        ppplStack_78 = (long ***)lVar8;
        FUN_10923f7d0(lVar8,param_2);
        ppplStack_78 = (long ***)(lVar8 + 0x38);
        ppplVar10 = (long ***)((long)*param_1 + (lVar8 - (long)param_1[1]));
        func_0x00010923f9bc(param_1,*param_1,param_1[1],ppplVar10);
        ppplStack_88 = *param_1;
        *param_1 = ppplVar10;
        ppplVar10 = param_1[2];
        ppplStack_98 = ppplStack_70;
        ppplStack_a0 = ppplStack_78;
        param_1[2] = ppplStack_70;
        param_1[1] = ppplStack_78;
        pppplVar2 = &ppplStack_88;
        pplStack_80 = (long **)ppplStack_88;
        ppplStack_78 = ppplStack_88;
        ppplStack_70 = ppplVar10;
        func_0x00010923fa4c(pppplVar2);
      }
      param_1[1] = ppplStack_a0;
      return pppplVar2;
    }
    uVar3 = (long)param_1[2] - (long)*param_1;
    uVar5 = (long)uVar3 >> 1;
    if (uVar5 <= uVar6) {
      uVar5 = uVar6;
    }
    if (0x7ffffffffffffffb < uVar3) {
      uVar5 = 0x3fffffffffffffff;
    }
    pppplVar4 = param_1;
    FUN_10923f79c();
    ppplVar10 = *param_1;
    puVar1 = (undefined4 *)((long)pppplVar4 + lVar8);
    ppplVar7 = (long ***)((long)puVar1 - ((long)param_1[1] - (long)ppplVar10));
    ppplVar9 = (long ***)(puVar1 + 1);
    *puVar1 = *param_2;
    _memcpy(ppplVar7,ppplVar10);
    pppplVar2 = (long ****)*param_1;
    *param_1 = ppplVar7;
    param_1[1] = ppplVar9;
    param_1[2] = (long ***)((long)pppplVar4 + uVar5 * 4);
    if (pppplVar2 != (long ****)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = ppplVar9;
  return pppplVar2;
}



/* Entry: 10923b464; end: 10923b5d3;  */

long **** FUN_10923b464(long ****param_1,undefined8 param_2)

{
  long ****pppplVar1;
  long ****pppplVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long ***ppplVar6;
  long ***ppplStack_98;
  long ***ppplStack_90;
  long ***ppplStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long ***ppplStack_70;
  long ***ppplStack_68;
  long ***ppplStack_58;
  long **pplStack_50;
  long ***ppplStack_48;
  long ***ppplStack_40;
  long ***ppplStack_38;
  
  pppplVar2 = (long ****)param_1[1];
  if (pppplVar2 < param_1[2]) {
    pppplVar1 = pppplVar2;
    FUN_10923f7d0(pppplVar2,param_2);
    ppplStack_70 = (long ***)(pppplVar2 + 7);
    param_1[1] = ppplStack_70;
  }
  else {
    ppplVar6 = (long ***)((long)pppplVar2 - (long)*param_1);
    uVar5 = ((long)ppplVar6 >> 3) * 0x6db6db6db6db6db7 + 1;
    if (0x492492492492492 < uVar5) {
      pppplVar2 = param_1;
      FUN_10923f960();
      param_1[1] = ppplVar6;
      pppplVar1 = pppplVar2;
      __Unwind_Resume();
      pcStack_78 = FUN_10923b5d4;
      ppplStack_98 = (long ***)(pppplVar1 + 3);
      ppplStack_90 = (long ***)pppplVar2;
      ppplStack_88 = (long ***)param_1;
      puStack_80 = &stack0xfffffffffffffff0;
      func_0x000109234d60(&ppplStack_98);
      if (*(char *)((long)pppplVar1 + 0x17) < '\0') {
        __ZdlPv(*pppplVar1);
      }
      return pppplVar1;
    }
    lVar3 = (long)param_1[2] - (long)*param_1 >> 3;
    uVar4 = lVar3 * -0x2492492492492492;
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = uVar5;
    }
    if (0x249249249249248 < (ulong)(lVar3 * 0x6db6db6db6db6db7)) {
      uVar4 = 0x492492492492492;
    }
    ppplStack_38 = (long ***)param_1;
    if (uVar4 == 0) {
      pppplVar2 = (long ****)0x0;
    }
    else {
      pppplVar2 = param_1;
      FUN_10923f974();
    }
    lVar3 = (long)pppplVar2 + (long)ppplVar6;
    ppplStack_40 = (long ***)(pppplVar2 + uVar4 * 7);
    ppplStack_58 = (long ***)pppplVar2;
    pplStack_50 = (long **)lVar3;
    ppplStack_48 = (long ***)lVar3;
    FUN_10923f7d0(lVar3,param_2);
    ppplStack_48 = (long ***)(lVar3 + 0x38);
    ppplVar6 = (long ***)((long)*param_1 + (lVar3 - (long)param_1[1]));
    func_0x00010923f9bc(param_1,*param_1,param_1[1],ppplVar6);
    ppplStack_58 = *param_1;
    *param_1 = ppplVar6;
    ppplVar6 = param_1[2];
    ppplStack_68 = ppplStack_40;
    ppplStack_70 = ppplStack_48;
    param_1[2] = ppplStack_40;
    param_1[1] = ppplStack_48;
    pppplVar1 = &ppplStack_58;
    pplStack_50 = (long **)ppplStack_58;
    ppplStack_48 = ppplStack_58;
    ppplStack_40 = ppplVar6;
    func_0x00010923fa4c(pppplVar1);
  }
  param_1[1] = ppplStack_70;
  return pppplVar1;
}



/* Entry: 10923b5d4; end: 10923b61b;  */

undefined8 * FUN_10923b5d4(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 3;
  func_0x000109234d60(&puStack_28);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10923b61c; end: 10923b66b;  */

void FUN_10923b61c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x000107c2ac14(uVar1);
    lVar2 = uVar1 + 0x80;
    *(long *)(param_1 + 8) = lVar2;
  }
  else {
    lVar2 = param_1;
    func_0x000107c2ac10();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 10923b66c; end: 10923b77b;  */

/* WARNING: Removing unreachable block (ram,0x00010923b7bc) */

undefined8 * FUN_10923b66c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar6 = param_1[1] - *param_1;
  uVar1 = (lVar6 >> 5) + 1;
  if (uVar1 >> 0x3b != 0) {
    FUN_10923b77c();
    func_0x000107c2aba8(&plStack_58);
    __Unwind_Resume(param_1);
    puVar3 = (undefined8 *)&UNK_10f55e364;
    func_0x000104c4f6cc();
    for (lVar6 = *(long *)puVar3[2]; lVar6 != *(long *)puVar3[1]; lVar6 = lVar6 + -0x20) {
    }
    return puVar3;
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 4;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7fffffffffffffdf < uVar4) {
    uVar5 = 0x7ffffffffffffff;
  }
  plStack_38 = param_1;
  if (uVar5 == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = param_1;
    func_0x000107c2ab98();
  }
  plStack_50 = (long *)((long)plVar2 + lVar6);
  uVar8 = param_2[1];
  uVar7 = *param_2;
  plStack_50[2] = param_2[2];
  plStack_50[1] = uVar8;
  *plStack_50 = uVar7;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  plStack_50[3] = param_2[3];
  puVar3 = plStack_50 + 4;
  lVar6 = (long)plStack_50 + (*param_1 - param_1[1]);
  plStack_58 = plVar2;
  plStack_48 = puVar3;
  plStack_40 = plVar2 + uVar5 * 4;
  func_0x000107c2ab9c(param_1,*param_1,param_1[1],lVar6);
  plStack_58 = (long *)*param_1;
  *param_1 = lVar6;
  param_1[1] = (long)puVar3;
  plStack_40 = (long *)param_1[2];
  param_1[2] = (long)(plVar2 + uVar5 * 4);
  plStack_50 = plStack_58;
  plStack_48 = plStack_58;
  func_0x000107c2aba8(&plStack_58);
  return puVar3;
}



/* Entry: 10923b77c; end: 10923b78f;  */

/* WARNING: Removing unreachable block (ram,0x00010923b7bc) */

void FUN_10923b77c(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = &UNK_10f55e364;
  func_0x000104c4f6cc();
  for (lVar2 = **(long **)(puVar1 + 0x10); lVar2 != **(long **)(puVar1 + 8); lVar2 = lVar2 + -0x20)
  {
  }
  return;
}



/* Entry: 10923b790; end: 10923b7d3;  */

/* WARNING: Removing unreachable block (ram,0x00010923b7bc) */

void FUN_10923b790(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x20
      ) {
  }
  return;
}



/* Entry: 10923b7d4; end: 10923bbbf;  */

long * FUN_10923b7d4(long *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong unaff_x24;
  
  uVar14 = (ulong)param_2;
  uVar16 = param_1[1];
  if (uVar16 != 0) {
    uVar5 = uVar16 - 1;
    uVar15 = (uint)uVar16;
    if ((uVar16 & uVar5) == 0) {
      unaff_x24 = (ulong)(uVar15 - 1 & param_2);
    }
    else {
      unaff_x24 = uVar14;
      if (uVar16 <= uVar14) {
        uVar1 = 0;
        if (uVar15 != 0) {
          uVar1 = param_2 / uVar15;
        }
        unaff_x24 = (ulong)(param_2 - uVar1 * uVar15);
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar9 = plVar8[1];
        if (uVar9 == uVar14) {
          if (*(uint *)(plVar8 + 2) == param_2) {
            return plVar8;
          }
        }
        else {
          if ((uVar16 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (uVar16 <= uVar9) {
            uVar6 = 0;
            if (uVar16 != 0) {
              uVar6 = uVar9 / uVar16;
            }
            uVar9 = uVar9 - uVar6 * uVar16;
          }
          if (uVar9 != unaff_x24) break;
        }
      }
    }
  }
  plVar8 = (long *)0x98;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar14;
  *(undefined4 *)(plVar8 + 2) = *param_3;
  plVar8[4] = 0;
  plVar8[3] = 0;
  plVar8[6] = 0;
  plVar8[5] = 0;
  plVar8[8] = 0;
  plVar8[7] = 0;
  plVar8[10] = 0;
  plVar8[9] = 0;
  plVar8[0xc] = 0;
  plVar8[0xb] = 0;
  plVar8[0xe] = 0;
  plVar8[0xd] = 0;
  plVar8[0x10] = 0;
  plVar8[0xf] = 0;
  plVar8[0x12] = 0;
  plVar8[0x11] = 0;
  if ((uVar16 == 0) || (*(float *)(param_1 + 4) * (float)uVar16 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar16) {
      uVar5 = (ulong)((uVar16 & uVar16 - 1) != 0);
    }
    uVar5 = uVar5 | uVar16 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar9) {
      uVar5 = uVar9;
    }
    if (uVar5 - 1 == 0) {
      uVar5 = 2;
    }
    else if ((uVar5 & uVar5 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar16 = param_1[1];
    }
    if (uVar16 < uVar5) {
LAB_10923b964:
      if (uVar5 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10923bbac);
        (*pcVar3)();
      }
      lVar10 = uVar5 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar10;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar16 = 0;
      param_1[1] = uVar5;
      do {
        *(undefined8 *)(*param_1 + uVar16 * 8) = 0;
        uVar16 = uVar16 + 1;
      } while (uVar5 != uVar16);
      plVar7 = (long *)param_1[2];
      uVar16 = uVar5;
      if (plVar7 != (long *)0x0) {
        uVar9 = plVar7[1];
        uVar6 = uVar5 - 1;
        if ((uVar5 & uVar6) == 0) {
          uVar9 = uVar9 & uVar6;
        }
        else if (uVar5 <= uVar9) {
          uVar13 = 0;
          if (uVar5 != 0) {
            uVar13 = uVar9 / uVar5;
          }
          uVar9 = uVar9 - uVar13 * uVar5;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar11 = (long *)*plVar7;
        while (plVar11 != (long *)0x0) {
          uVar13 = plVar11[1];
          if ((uVar5 & uVar6) == 0) {
            uVar13 = uVar13 & uVar6;
          }
          else if (uVar5 <= uVar13) {
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = uVar13 / uVar5;
            }
            uVar13 = uVar13 - uVar2 * uVar5;
          }
          plVar12 = plVar11;
          if (uVar13 != uVar9) {
            lVar10 = *param_1;
            if (*(long *)(lVar10 + uVar13 * 8) == 0) {
              *(long **)(lVar10 + uVar13 * 8) = plVar7;
              uVar9 = uVar13;
            }
            else {
              *plVar7 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar10 + uVar13 * 8);
              **(long **)(lVar10 + uVar13 * 8) = (long)plVar11;
              plVar12 = plVar7;
            }
          }
          plVar7 = plVar12;
          plVar11 = (long *)*plVar12;
        }
      }
    }
    else if (uVar5 < uVar16) {
      uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar16 < 3) || ((uVar16 & uVar16 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar9) {
        uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
      }
      if (uVar5 <= uVar9) {
        uVar5 = uVar9;
      }
      if (uVar5 < uVar16) {
        if (uVar5 != 0) goto LAB_10923b964;
        lVar10 = *param_1;
        *param_1 = 0;
        if (lVar10 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar16 = 0;
      }
      else {
        uVar16 = param_1[1];
      }
    }
    if ((uVar16 & uVar16 - 1) == 0) {
      unaff_x24 = (ulong)((int)uVar16 - 1U & param_2);
    }
    else {
      unaff_x24 = uVar14;
      if (uVar16 <= uVar14) {
        uVar5 = 0;
        if (uVar16 != 0) {
          uVar5 = uVar14 / uVar16;
        }
        unaff_x24 = uVar14 - uVar5 * uVar16;
      }
    }
  }
  lVar10 = *param_1;
  plVar7 = *(long **)(lVar10 + unaff_x24 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *plVar8 = *plVar7;
    *plVar7 = (long)plVar8;
    *(long **)(lVar10 + unaff_x24 * 8) = plVar7;
    if (*plVar8 == 0) goto LAB_10923bb40;
    uVar14 = *(ulong *)(*plVar8 + 8);
    if ((uVar16 & uVar16 - 1) == 0) {
      uVar14 = uVar14 & uVar16 - 1;
    }
    else if (uVar16 <= uVar14) {
      uVar5 = 0;
      if (uVar16 != 0) {
        uVar5 = uVar14 / uVar16;
      }
      uVar14 = uVar14 - uVar5 * uVar16;
    }
    plVar7 = (long *)(*param_1 + uVar14 * 8);
  }
  else {
    *plVar8 = *plVar7;
  }
  *plVar7 = (long)plVar8;
LAB_10923bb40:
  param_1[3] = param_1[3] + 1;
  return plVar8;
}



/* Entry: 10923bbc0; end: 10923bc7b;  */

void FUN_10923bbc0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010923bc08(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10923bc7c; end: 10923bc8f;  */

/* WARNING: Removing unreachable block (ram,0x00010923bcbc) */

void FUN_10923bc7c(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = &UNK_10f55e364;
  func_0x000104c4f6cc();
  for (lVar2 = **(long **)(puVar1 + 0x10); lVar2 != **(long **)(puVar1 + 8); lVar2 = lVar2 + -0x28)
  {
  }
  return;
}



/* Entry: 10923bc90; end: 10923bcd3;  */

/* WARNING: Removing unreachable block (ram,0x00010923bcbc) */

void FUN_10923bc90(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x28
      ) {
  }
  return;
}



/* Entry: 10923bcd4; end: 10923bce7;  */

/* WARNING: Removing unreachable block (ram,0x00010923bd5c) */

void FUN_10923bcd4(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  
  func_0x000104c4f6cc(&UNK_10f55e364);
  if (param_2 >> 0x3c != 0) {
    func_0x000104c4f740();
    puVar1 = &UNK_10f55e364;
    func_0x000104c4f6cc();
    for (lVar2 = **(long **)(puVar1 + 0x10); lVar2 != **(long **)(puVar1 + 8); lVar2 = lVar2 + -0x28
        ) {
    }
    return;
  }
  __Znwm(param_2 << 4);
  return;
}



/* Entry: 10923bce8; end: 10923bd1b;  */

/* WARNING: Removing unreachable block (ram,0x00010923bd5c) */

void FUN_10923bce8(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  
  if (param_2 >> 0x3c != 0) {
    func_0x000104c4f740();
    puVar1 = &UNK_10f55e364;
    func_0x000104c4f6cc();
    for (lVar2 = **(long **)(puVar1 + 0x10); lVar2 != **(long **)(puVar1 + 8); lVar2 = lVar2 + -0x28
        ) {
    }
    return;
  }
  __Znwm(param_2 << 4);
  return;
}



/* Entry: 10923bd1c; end: 10923bd2f;  */

/* WARNING: Removing unreachable block (ram,0x00010923bd5c) */

void FUN_10923bd1c(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = &UNK_10f55e364;
  func_0x000104c4f6cc();
  for (lVar2 = **(long **)(puVar1 + 0x10); lVar2 != **(long **)(puVar1 + 8); lVar2 = lVar2 + -0x28)
  {
  }
  return;
}



/* Entry: 10923bd30; end: 10923bd73;  */

/* WARNING: Removing unreachable block (ram,0x00010923bd5c) */

void FUN_10923bd30(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x28
      ) {
  }
  return;
}



/* Entry: 10923bd74; end: 10923bfcb;  */

void FUN_10923bd74(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined1 *puStack_70;
  ulong uStack_68;
  ulong uStack_60;
  long lStack_58;
  
  puVar6 = param_1 + 4;
  *puVar6 = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  puStack_70 = (undefined1 *)0x0;
  uStack_68 = 0;
  uStack_60 = 0;
  FUN_10923b090(param_2,&puStack_70);
  uVar1 = uStack_68;
  ppuVar2 = (undefined1 **)puStack_70;
  if (-1 < (long)uStack_60) {
    uVar1 = uStack_60 >> 0x38;
    ppuVar2 = &puStack_70;
  }
  puVar7 = (undefined4 *)&UNK_110ae4180;
  lVar8 = 0x1c;
  while ((uVar1 != *(ulong *)(puVar7 + -2) ||
         (puVar3 = (undefined1 *)ppuVar2, _memcmp(ppuVar2,*(undefined8 *)(puVar7 + -4),uVar1),
         (int)puVar3 != 0))) {
    puVar7 = puVar7 + 6;
    lVar8 = lVar8 + -1;
    if (lVar8 == 0) {
      uVar5 = 0;
LAB_10923be1c:
      *(undefined4 *)((long)param_1 + 0x24) = uVar5;
      FUN_10923b090(param_2,param_1);
      plVar4 = param_2;
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4peekEv();
      if ((int)plVar4 == 0x20) {
        __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(param_2,1,0xffffffff);
      }
      plVar4 = param_2;
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4peekEv();
      if ((int)plVar4 != 10) {
        plVar4 = param_2;
        __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4peekEv();
        if ((int)plVar4 != 0x3a) {
          __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERj(param_2,param_1 + 3);
        }
        plVar4 = param_2;
        __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4peekEv();
        if ((int)plVar4 == 0x3a) {
          __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(param_2,1,0xffffffff);
          __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(param_2,1,0xffffffff);
          plVar4 = param_2;
          __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4peekEv();
          if ((int)plVar4 == 0x5d) {
            *(undefined4 *)puVar6 = 0x80000001;
          }
          else {
            __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERj(param_2,puVar6);
          }
          __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(param_2,1,0xffffffff);
          __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(param_2,1,0xffffffff);
          __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERj(param_2,(long)param_1 + 0x1c);
        }
        else {
          *(undefined4 *)((long)param_1 + 0x1c) =
               *(undefined4 *)(&UNK_10e4808b8 + (ulong)*(uint *)((long)param_1 + 0x24) * 4);
          *(undefined4 *)(param_1 + 4) = 0;
        }
      }
      __ZNKSt3__18ios_base6getlocEv(&lStack_58,(long)param_2 + *(long *)(*param_2 + -0x18));
      plVar4 = &lStack_58;
      __ZNKSt3__16locale9use_facetERNS0_2idE(plVar4,PTR___ZNSt3__15ctypeIcE2idE_110346770);
      (**(code **)(*plVar4 + 0x38))();
      __ZNSt3__16localeD1Ev(&lStack_58);
      FUN_109242d18(param_2,&puStack_70,plVar4);
      if ((long)uStack_60 < 0) {
        __ZdlPv(puStack_70);
      }
      return;
    }
  }
  uVar5 = *puVar7;
  goto LAB_10923be1c;
}



/* Entry: 10923bfcc; end: 10923c7ef;  */

/* WARNING: Possible PIC construction at 0x00010923c8cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010923c8d0) */
/* WARNING: Removing unreachable block (ram,0x00010923c418) */
/* WARNING: Removing unreachable block (ram,0x00010923c5e4) */

undefined1  [16]
FUN_10923bfcc(long *param_1,undefined8 ****param_2,uint param_3,undefined8 ***param_4,int param_5,
             undefined8 param_6)

{
  undefined8 **ppuVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 **ppuVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 ****ppppuVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong *puVar18;
  undefined8 **unaff_x21;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  undefined1 **ppuVar24;
  undefined8 uVar25;
  undefined8 ***pppuVar26;
  undefined8 ***pppuVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auStack_1e8 [56];
  undefined8 *puStack_1b0;
  long *plStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined1 auStack_180 [8];
  long *plStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  long *plStack_160;
  long *plStack_158;
  ulong uStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  long *plStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  ulong uStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 **ppuStack_108;
  uint uStack_100;
  int iStack_fc;
  undefined8 uStack_f8;
  undefined8 ***pppuStack_f0;
  undefined8 ***pppuStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 ***pppuStack_c8;
  ulong uStack_c0;
  byte bStack_b1;
  undefined8 ***pppuStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 **ppuStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined1 auStack_69 [9];
  
  uVar20 = (ulong)param_3;
  puVar17 = (undefined8 *)*param_1;
  uVar2 = *(uint *)(puVar17 + (ulong)param_3 * 5 + 4);
  ppuStack_108 = param_4;
  uStack_100 = param_3;
  iStack_fc = param_5;
  uStack_f8 = param_6;
  if (uVar2 == 0) {
    plVar22 = (long *)(ulong)(param_3 + 1);
    plVar14 = (long *)((param_1[1] - (long)puVar17 >> 3) * -0x3333333333333333);
    plVar13 = plVar22;
    plVar9 = plVar22;
    if (plVar22 <= plVar14 && (long)plVar14 - (long)plVar22 != 0) {
      do {
        uStack_110 = plVar9;
        plVar14 = puVar17 + (long)plVar22 * 5;
        plVar9 = plVar14;
        FUN_10923dbdc();
        iVar7 = (int)plVar9;
        ppppuVar11 = (undefined8 ****)(puVar17 + uVar20 * 5);
        ppppuVar12 = (undefined8 ****)(long)*(char *)((long)ppppuVar11 + 0x17);
        ppppuVar8 = ppppuVar11;
        if ((long)ppppuVar12 < 0) {
          ppppuVar8 = (undefined8 ****)*ppppuVar11;
          ppppuVar12 = (undefined8 ****)ppppuVar11[1];
        }
        bVar5 = param_2 != ppppuVar12;
        param_2 = ppppuVar8;
        plVar21 = plVar13;
        if ((bVar5) || (_memcmp(), param_2 = ppppuVar8, iVar7 != 0)) break;
        func_0x00010923dc28();
        if ((undefined8 ****)0x7ffffffffffffff7 < ppppuVar8) {
          func_0x000104c4f6b8();
          if ((long)uStack_e0 < 0) {
            __ZdlPv(pppuStack_f0);
          }
          plVar13 = plVar14;
          __Unwind_Resume();
          ppuVar4 = (undefined8 **)auStack_180;
          pcStack_128 = FUN_10923c7f0;
          ppuVar24 = &puStack_130;
          lVar19 = plVar13[1] - *plVar13;
          uVar15 = (lVar19 >> 3) * -0x3333333333333333 + 1;
          uStack_150 = uVar20;
          puStack_148 = unaff_x21;
          puStack_140 = puVar17;
          plStack_138 = plVar14;
          puStack_130 = &stack0xfffffffffffffff0;
          if (uVar15 < 0x666666666666667) {
            lVar16 = plVar13[2] - *plVar13 >> 3;
            uVar20 = lVar16 * -0x6666666666666666;
            if (uVar20 < uVar15 || uVar20 - uVar15 == 0) {
              uVar20 = uVar15;
            }
            if (0x333333333333332 < (ulong)(lVar16 * -0x3333333333333333)) {
              uVar20 = 0x666666666666666;
            }
            plStack_158 = plVar13;
            if (uVar20 == 0) {
              plVar9 = (long *)0x0;
            }
            else {
              plVar9 = plVar13;
              FUN_10923c934();
            }
            puStack_170 = (undefined8 *)((long)plVar9 + lVar19);
            plStack_160 = plVar9 + uVar20 * 5;
            pppuVar27 = ppppuVar8[1];
            pppuVar26 = *ppppuVar8;
            puStack_170[2] = ppppuVar8[2];
            puStack_170[1] = pppuVar27;
            *puStack_170 = pppuVar26;
            ppppuVar8[1] = (undefined8 ***)0x0;
            ppppuVar8[2] = (undefined8 ***)0x0;
            *ppppuVar8 = (undefined8 ***)0x0;
            pppuVar26 = ppppuVar8[3];
            puStack_170[4] = ppppuVar8[4];
            puStack_170[3] = pppuVar26;
            puVar17 = puStack_170 + 5;
            ppppuVar8 = (undefined8 ****)*plVar13;
            ppppuVar12 = (undefined8 ****)plVar13[1];
            param_4 = (undefined8 ***)((long)puStack_170 + ((long)ppppuVar8 - (long)ppppuVar12));
            uVar25 = 0x10923c8d0;
            plVar22 = plVar13;
            plStack_178 = plVar9;
            puStack_168 = puVar17;
          }
          else {
            FUN_10923c920();
            func_0x00010923caa8(&plStack_178);
            __Unwind_Resume(plVar13);
            pcStack_188 = FUN_10923c920;
            plVar22 = (long *)&UNK_10f55e364;
            ppuStack_190 = ppuVar24;
            func_0x000104c4f6cc();
            ppuVar4 = &puStack_1b0;
            pcStack_198 = FUN_10923c934;
            ppuVar24 = &puStack_1a0;
            puStack_1b0 = puVar17;
            plStack_1a8 = plVar13;
            if (ppppuVar8 < (undefined8 ****)0x666666666666667) {
              lVar19 = (long)ppppuVar8 * 0x28;
              puStack_1a0 = (undefined1 *)&ppuStack_190;
              __Znwm(lVar19);
              auVar29._8_8_ = ppppuVar8;
              auVar29._0_8_ = lVar19;
              return auVar29;
            }
            uVar25 = 0x10923c978;
            puStack_1a0 = (undefined1 *)&ppuStack_190;
            func_0x000104c4f740();
          }
          puVar10 = (undefined1 *)((long)ppuVar4 + -0x50);
          *(undefined8 **)((long)ppuVar4 + -0x20) = puVar17;
          *(long **)((long)ppuVar4 + -0x18) = plVar13;
          *(undefined1 ***)((long)ppuVar4 + -0x10) = ppuVar24;
          *(undefined8 *)((long)ppuVar4 + -8) = uVar25;
          *(undefined8 ****)((long)ppuVar4 + -0x28) = param_4;
          *(undefined8 ****)((long)ppuVar4 + -0x30) = param_4;
          *(long **)((long)ppuVar4 + -0x50) = plVar22;
          *(undefined1 **)((long)ppuVar4 + -0x48) = (undefined1 *)((long)ppuVar4 + -0x30);
          *(undefined1 **)((long)ppuVar4 + -0x40) = (undefined1 *)((long)ppuVar4 + -0x28);
          ppppuVar11 = ppppuVar8;
          if (ppppuVar8 == ppppuVar12) {
            *(undefined1 *)((long)ppuVar4 + -0x38) = 1;
          }
          else {
            do {
              pppuVar27 = ppppuVar11[1];
              pppuVar26 = *ppppuVar11;
              param_4[2] = ppppuVar11[2];
              param_4[1] = pppuVar27;
              *param_4 = pppuVar26;
              ppppuVar11[1] = (undefined8 ***)0x0;
              ppppuVar11[2] = (undefined8 ***)0x0;
              *ppppuVar11 = (undefined8 ***)0x0;
              pppuVar26 = ppppuVar11[3];
              param_4[4] = ppppuVar11[4];
              param_4[3] = pppuVar26;
              ppppuVar11 = ppppuVar11 + 5;
              param_4 = param_4 + 5;
            } while (ppppuVar11 != ppppuVar12);
            *(undefined8 ****)((long)ppuVar4 + -0x28) = param_4;
            *(undefined1 *)((long)ppuVar4 + -0x38) = 1;
            ppppuVar11 = ppppuVar8;
            do {
              if (*(char *)((long)ppppuVar11 + 0x17) < '\0') {
                __ZdlPv(*ppppuVar11);
              }
              ppppuVar11 = ppppuVar11 + 5;
            } while (ppppuVar11 != ppppuVar12);
          }
          FUN_10923ca30((undefined1 *)((long)ppuVar4 + -0x50));
          auVar30._8_8_ = ppppuVar8;
          auVar30._0_8_ = puVar10;
          return auVar30;
        }
        if (ppppuVar8 < (undefined8 ****)0x17) {
          uStack_e0 = (undefined8 ***)CONCAT17((char)ppppuVar8,(undefined7)uStack_e0);
          ppppuVar11 = &pppuStack_f0;
          if (ppppuVar8 != (undefined8 ****)0x0) goto LAB_10923c4f8;
        }
        else {
          ppppuVar12 = (undefined8 ****)0x19;
          if (((ulong)ppppuVar8 | 7) != 0x17) {
            ppppuVar12 = (undefined8 ****)(((ulong)ppppuVar8 | 7) + 1);
          }
          ppppuVar11 = ppppuVar12;
          __Znwm();
          uStack_e0 = (undefined8 ***)((ulong)ppppuVar12 | 0x8000000000000000);
          pppuStack_f0 = ppppuVar11;
          pppuStack_e8 = ppppuVar8;
LAB_10923c4f8:
          _memmove(ppppuVar11,plVar14,ppppuVar8);
        }
        *(undefined1 *)((long)ppppuVar11 + (long)ppppuVar8) = 0;
        unaff_x21 = (undefined8 **)ppuStack_108[1];
        if (-1 < (char)*(byte *)((long)ppuStack_108 + 0x17)) {
          unaff_x21 = (undefined8 **)(ulong)*(byte *)((long)ppuStack_108 + 0x17);
        }
        func_0x000104c4f768(&pppuStack_b0,(long)unaff_x21 + 1,&pppuStack_c8);
        ppppuVar8 = (undefined8 ****)pppuStack_b0;
        if (-1 < (long)ppuStack_a0) {
          ppppuVar8 = &pppuStack_b0;
        }
        if (unaff_x21 != (undefined8 **)0x0) {
          pppuVar26 = (undefined8 ***)*ppuStack_108;
          if (-1 < *(char *)((long)ppuStack_108 + 0x17)) {
            pppuVar26 = (undefined8 ***)ppuStack_108;
          }
          _memmove(ppppuVar8,pppuVar26,unaff_x21);
        }
        *(undefined2 *)((long)ppppuVar8 + (long)unaff_x21) = 0x2e;
        ppppuVar8 = (undefined8 ****)pppuStack_e8;
        ppppuVar12 = (undefined8 ****)pppuStack_f0;
        if (-1 < (long)uStack_e0) {
          ppppuVar8 = (undefined8 ****)((ulong)uStack_e0 >> 0x38);
          ppppuVar12 = &pppuStack_f0;
        }
        ppppuVar11 = &pppuStack_b0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppppuVar11,ppppuVar12,ppppuVar8);
        ppuStack_88 = ppppuVar11[1];
        ppuStack_90 = *ppppuVar11;
        ppuStack_80 = ppppuVar11[2];
        ppppuVar11[1] = (undefined8 ***)0x0;
        ppppuVar11[2] = (undefined8 ***)0x0;
        *ppppuVar11 = (undefined8 ***)0x0;
        param_4 = &ppuStack_90;
        param_2 = (undefined8 ****)(ulong)uStack_100;
        plVar21 = param_1;
        FUN_10923bfcc(param_1,param_2,plVar13,param_4,
                      *(int *)(*param_1 + (long)plVar22 * 0x28 + 0x18) + iStack_fc,uStack_f8);
        if ((long)ppuStack_a0 < 0) {
          __ZdlPv(pppuStack_b0);
        }
        if ((long)uStack_e0 < 0) {
          __ZdlPv(pppuStack_f0);
        }
        plVar22 = (long *)((ulong)plVar21 & 0xffffffff);
        puVar17 = (undefined8 *)*param_1;
        uVar15 = (param_1[1] - (long)puVar17 >> 3) * -0x3333333333333333;
        plVar13 = plVar21;
        plVar9 = uStack_110;
      } while (((ulong)plVar21 & 0xffffffff) <= uVar15 &&
               uVar15 - ((ulong)plVar21 & 0xffffffff) != 0);
      plVar22 = uStack_110;
      if ((int)plVar21 != (int)uStack_110) goto LAB_10923c6c4;
    }
    plVar21 = plVar22;
    ppuVar1 = ppuStack_108;
    puVar18 = puVar17 + uVar20 * 5;
    if (*(char *)((long)puVar18 + 0x17) < '\0') {
      param_2 = (undefined8 ****)*puVar18;
      func_0x000107c3192c(&pppuStack_f0,param_2,puVar18[1]);
    }
    else {
      pppuStack_e8 = (undefined8 ***)puVar18[1];
      pppuStack_f0 = (undefined8 ***)*puVar18;
      uStack_e0 = (undefined8 ***)puVar18[2];
    }
    uVar20 = puVar18[4];
    uStack_d8 = puVar18[3];
    uStack_d0._4_4_ = (int)(uVar20 >> 0x20);
    bVar5 = uStack_d0._4_4_ != 0;
    uStack_d0 = uVar20;
    if (bVar5) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (&pppuStack_f0,ppuVar1);
      uStack_d8 = CONCAT44(uStack_d8._4_4_,iStack_fc);
      uStack_d0 = uStack_d0 & 0xffffffff7fffffff;
      param_2 = &pppuStack_f0;
      FUN_10923dc88(uStack_f8,param_2);
    }
    if ((long)uStack_e0 < 0) {
      __ZdlPv(pppuStack_f0);
    }
  }
  else {
    uStack_110 = (long *)(CONCAT44(uStack_110._4_4_,uVar2) & 0xffffffff7fffffff);
    if ((uVar2 & 0x7fffffff) == 0) {
      plVar21 = (long *)0x0;
    }
    else {
      iVar7 = 0;
      plStack_118 = (long *)(ulong)(param_3 + 1);
      uStack_120 = (ulong)param_2 & 0xffffffff;
      plVar13 = plStack_118;
      do {
        plVar21 = plVar13;
        ppuVar1 = param_4[1];
        if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
          ppuVar1 = (undefined8 **)(ulong)*(byte *)((long)param_4 + 0x17);
        }
        func_0x000104c4f768(&pppuStack_b0,(long)ppuVar1 + 1,&pppuStack_c8);
        ppppuVar8 = (undefined8 ****)pppuStack_b0;
        if (-1 < (long)ppuStack_a0) {
          ppppuVar8 = &pppuStack_b0;
        }
        if (ppuVar1 != (undefined8 **)0x0) {
          pppuVar26 = (undefined8 ***)*param_4;
          if (-1 < *(char *)((long)param_4 + 0x17)) {
            pppuVar26 = param_4;
          }
          _memmove(ppppuVar8,pppuVar26,ppuVar1);
        }
        *(undefined2 *)((long)ppppuVar8 + (long)ppuVar1) = 0x5b;
        __ZNSt3__19to_stringEj(&pppuStack_c8,iVar7);
        uVar15 = uStack_c0;
        ppppuVar8 = (undefined8 ****)pppuStack_c8;
        if (-1 < (char)bStack_b1) {
          uVar15 = (ulong)bStack_b1;
          ppppuVar8 = &pppuStack_c8;
        }
        ppppuVar12 = &pppuStack_b0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppppuVar12,ppppuVar8,uVar15);
        pppuStack_e8 = ppppuVar12[1];
        pppuStack_f0 = *ppppuVar12;
        uStack_e0 = ppppuVar12[2];
        ppppuVar12[1] = (undefined8 ***)0x0;
        ppppuVar12[2] = (undefined8 ***)0x0;
        *ppppuVar12 = (undefined8 ***)0x0;
        ppppuVar8 = &pppuStack_f0;
        param_2 = (undefined8 ****)&DAT_10f62a9ea;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppppuVar8,&DAT_10f62a9ea,1);
        ppuStack_88 = ppppuVar8[1];
        ppuStack_90 = *ppppuVar8;
        ppuStack_80 = ppppuVar8[2];
        ppppuVar8[1] = (undefined8 ***)0x0;
        ppppuVar8[2] = (undefined8 ***)0x0;
        *ppppuVar8 = (undefined8 ***)0x0;
        if ((long)uStack_e0 < 0) {
          __ZdlPv(pppuStack_f0);
        }
        if ((char)bStack_b1 < '\0') {
          __ZdlPv(pppuStack_c8);
        }
        if ((long)ppuStack_a0 < 0) {
          __ZdlPv(pppuStack_b0);
        }
        lVar19 = *param_1;
        plVar13 = (long *)((param_1[1] - lVar19 >> 3) * -0x3333333333333333);
        if (plVar21 <= plVar13 && (long)plVar13 - (long)plVar21 != 0) {
          do {
            lVar23 = lVar19 + (long)plVar21 * 0x28;
            lVar16 = lVar23;
            FUN_10923dbdc();
            iVar6 = (int)lVar16;
            ppppuVar11 = (undefined8 ****)(lVar19 + uVar20 * 0x28);
            ppppuVar12 = (undefined8 ****)(long)*(char *)((long)ppppuVar11 + 0x17);
            ppppuVar8 = ppppuVar11;
            if ((long)ppppuVar12 < 0) {
              ppppuVar8 = (undefined8 ****)*ppppuVar11;
              ppppuVar12 = (undefined8 ****)ppppuVar11[1];
            }
            bVar5 = param_2 != ppppuVar12;
            param_2 = ppppuVar8;
            if ((bVar5) || (_memcmp(), param_2 = ppppuVar8, iVar6 != 0)) break;
            func_0x00010923dc28(lVar23);
            if ((undefined8 ****)0x7ffffffffffffff7 < ppppuVar8) {
              func_0x000104c4f6b8();
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10923c6f0);
              (*pcVar3)();
            }
            if (ppppuVar8 < (undefined8 ****)0x17) {
              uStack_e0 = (undefined8 ***)CONCAT17((char)ppppuVar8,(undefined7)uStack_e0);
              ppppuVar11 = &pppuStack_f0;
              if (ppppuVar8 != (undefined8 ****)0x0) goto LAB_10923c1f0;
            }
            else {
              ppppuVar12 = (undefined8 ****)0x19;
              if (((ulong)ppppuVar8 | 7) != 0x17) {
                ppppuVar12 = (undefined8 ****)(((ulong)ppppuVar8 | 7) + 1);
              }
              ppppuVar11 = ppppuVar12;
              __Znwm();
              uStack_e0 = (undefined8 ***)((ulong)ppppuVar12 | 0x8000000000000000);
              pppuStack_f0 = ppppuVar11;
              pppuStack_e8 = ppppuVar8;
LAB_10923c1f0:
              _memmove(ppppuVar11,lVar23,ppppuVar8);
            }
            *(undefined1 *)((long)ppppuVar11 + (long)ppppuVar8) = 0;
            pppuVar26 = (undefined8 ***)ppuStack_88;
            if (-1 < (long)ppuStack_80) {
              pppuVar26 = (undefined8 ***)((ulong)ppuStack_80 >> 0x38);
            }
            func_0x000104c4f768(&pppuStack_c8,(long)pppuVar26 + 1,auStack_69);
            ppppuVar8 = (undefined8 ****)pppuStack_c8;
            if (-1 < (char)bStack_b1) {
              ppppuVar8 = &pppuStack_c8;
            }
            if (pppuVar26 != (undefined8 ***)0x0) {
              _memmove(ppppuVar8,&ppuStack_90,pppuVar26);
            }
            *(undefined2 *)((long)ppppuVar8 + (long)pppuVar26) = 0x2e;
            ppppuVar8 = (undefined8 ****)pppuStack_e8;
            ppppuVar12 = (undefined8 ****)pppuStack_f0;
            if (-1 < (long)uStack_e0) {
              ppppuVar8 = (undefined8 ****)((ulong)uStack_e0 >> 0x38);
              ppppuVar12 = &pppuStack_f0;
            }
            ppppuVar11 = &pppuStack_c8;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (ppppuVar11,ppppuVar12,ppppuVar8);
            ppuStack_a8 = ppppuVar11[1];
            pppuStack_b0 = *ppppuVar11;
            ppuStack_a0 = ppppuVar11[2];
            ppppuVar11[1] = (undefined8 ***)0x0;
            ppppuVar11[2] = (undefined8 ***)0x0;
            *ppppuVar11 = (undefined8 ***)0x0;
            param_2 = (undefined8 ****)(ulong)uStack_100;
            FUN_10923bfcc(param_1,param_2,plVar21,&pppuStack_b0,
                          *(int *)(*param_1 + (long)plVar21 * 0x28 + 0x18) + iStack_fc +
                          *(int *)(*param_1 + uVar20 * 0x28 + 0x1c) * iVar7,uStack_f8);
            if ((long)ppuStack_a0 < 0) {
              __ZdlPv(pppuStack_b0);
            }
            if ((char)bStack_b1 < '\0') {
              __ZdlPv(pppuStack_c8);
            }
            if ((long)uStack_e0 < 0) {
              __ZdlPv(pppuStack_f0);
            }
            plVar21 = (long *)(ulong)((int)plVar21 + 1);
            lVar19 = *param_1;
            plVar13 = (long *)((param_1[1] - lVar19 >> 3) * -0x3333333333333333);
          } while (plVar21 <= plVar13 && (long)plVar13 - (long)plVar21 != 0);
        }
        puVar18 = (ulong *)(lVar19 + uVar20 * 0x28);
        if (*(char *)((long)puVar18 + 0x17) < '\0') {
          param_2 = (undefined8 ****)*puVar18;
          func_0x000107c3192c(&pppuStack_f0,param_2,puVar18[1]);
        }
        else {
          pppuStack_e8 = (undefined8 ***)puVar18[1];
          pppuStack_f0 = (undefined8 ***)*puVar18;
          uStack_e0 = (undefined8 ***)puVar18[2];
        }
        param_4 = (undefined8 ***)ppuStack_108;
        plVar13 = plStack_118;
        uVar15 = puVar18[4];
        uStack_d8 = puVar18[3];
        uStack_d0._4_4_ = (int)(uVar15 >> 0x20);
        bVar5 = uStack_d0._4_4_ != 0;
        uStack_d0 = uVar15;
        if (bVar5) {
          if (iVar7 == 0) {
            if (*(int *)(*param_1 + (uStack_120 & 0xffffffff) * 0x28 + 0x20) < 0) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (&pppuStack_f0,ppuStack_108);
            }
            uStack_d0 = uStack_d0 & 0xffffffff7fffffff;
            FUN_10923dc88(uStack_f8,&pppuStack_f0);
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (&pppuStack_f0,&ppuStack_90);
          uStack_d8 = CONCAT44(uStack_d8._4_4_,
                               iStack_fc + *(int *)(*param_1 + uVar20 * 0x28 + 0x1c) * iVar7);
          uStack_d0 = uStack_d0 & 0xffffffff00000000;
          param_2 = &pppuStack_f0;
          FUN_10923dc88(uStack_f8,param_2);
        }
        if ((long)uStack_e0 < 0) {
          __ZdlPv(pppuStack_f0);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != (int)uStack_110);
    }
  }
LAB_10923c6c4:
  auVar28._8_8_ = param_2;
  auVar28._0_8_ = plVar21;
  return auVar28;
}



/* Entry: 10923c7f0; end: 10923c91f;  */

/* WARNING: Possible PIC construction at 0x00010923c8cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010923c8d0) */

void FUN_10923c7f0(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *unaff_x20;
  long lVar8;
  undefined1 **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_c8 [56];
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  puVar1 = auStack_60;
  ppuVar9 = (undefined1 **)&stack0xfffffffffffffff0;
  lVar8 = param_1[1] - *param_1;
  uVar6 = (lVar8 >> 3) * -0x3333333333333333 + 1;
  if (uVar6 < 0x666666666666667) {
    lVar5 = param_1[2] - *param_1 >> 3;
    uVar7 = lVar5 * -0x6666666666666666;
    if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
      uVar7 = uVar6;
    }
    if (0x333333333333332 < (ulong)(lVar5 * -0x3333333333333333)) {
      uVar7 = 0x666666666666666;
    }
    plStack_38 = param_1;
    if (uVar7 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_10923c934();
    }
    puStack_50 = (undefined8 *)((long)plVar2 + lVar8);
    plStack_40 = plVar2 + uVar7 * 5;
    uVar11 = param_2[1];
    uVar10 = *param_2;
    puStack_50[2] = param_2[2];
    puStack_50[1] = uVar11;
    *puStack_50 = uVar10;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar10 = param_2[3];
    puStack_50[4] = param_2[4];
    puStack_50[3] = uVar10;
    unaff_x20 = puStack_50 + 5;
    param_2 = (undefined8 *)*param_1;
    param_3 = (undefined8 *)param_1[1];
    param_4 = (undefined8 *)((long)puStack_50 + ((long)param_2 - (long)param_3));
    uVar10 = 0x10923c8d0;
    plVar3 = param_1;
    plStack_58 = plVar2;
    puStack_48 = unaff_x20;
  }
  else {
    FUN_10923c920();
    func_0x00010923caa8(&plStack_58);
    __Unwind_Resume(param_1);
    pcStack_68 = FUN_10923c920;
    plVar3 = (long *)&UNK_10f55e364;
    ppuStack_70 = ppuVar9;
    func_0x000104c4f6cc();
    puVar1 = &stack0xffffffffffffff70;
    pcStack_78 = FUN_10923c934;
    ppuVar9 = &puStack_80;
    if (param_2 < (undefined8 *)0x666666666666667) {
      puStack_80 = (undefined1 *)&ppuStack_70;
      __Znwm((long)param_2 * 0x28);
      return;
    }
    uVar10 = 0x10923c978;
    puStack_80 = (undefined1 *)&ppuStack_70;
    func_0x000104c4f740();
  }
  *(undefined8 **)(puVar1 + -0x20) = unaff_x20;
  *(long **)(puVar1 + -0x18) = param_1;
  *(undefined1 ***)(puVar1 + -0x10) = ppuVar9;
  *(undefined8 *)(puVar1 + -8) = uVar10;
  *(undefined8 **)(puVar1 + -0x28) = param_4;
  *(undefined8 **)(puVar1 + -0x30) = param_4;
  *(long **)(puVar1 + -0x50) = plVar3;
  *(undefined1 **)(puVar1 + -0x48) = puVar1 + -0x30;
  *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x28;
  puVar4 = param_2;
  if (param_2 == param_3) {
    puVar1[-0x38] = 1;
  }
  else {
    do {
      uVar11 = puVar4[1];
      uVar10 = *puVar4;
      param_4[2] = puVar4[2];
      param_4[1] = uVar11;
      *param_4 = uVar10;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      uVar10 = puVar4[3];
      param_4[4] = puVar4[4];
      param_4[3] = uVar10;
      puVar4 = puVar4 + 5;
      param_4 = param_4 + 5;
    } while (puVar4 != param_3);
    *(undefined8 **)(puVar1 + -0x28) = param_4;
    puVar1[-0x38] = 1;
    do {
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        __ZdlPv(*param_2);
      }
      param_2 = param_2 + 5;
    } while (param_2 != param_3);
  }
  FUN_10923ca30(puVar1 + -0x50);
  return;
}



/* Entry: 10923c920; end: 10923c933;  */

void FUN_10923c920(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar1 = &UNK_10f55e364;
  func_0x000104c4f6cc();
  if ((undefined8 *)0x666666666666666 < param_2) {
    func_0x000104c4f740();
    ppuStack_78 = &puStack_60;
    ppuStack_70 = &puStack_58;
    puStack_58 = param_4;
    puVar2 = param_2;
    puStack_80 = puVar1;
    puStack_60 = param_4;
    if (param_2 == param_3) {
      uStack_68 = 1;
    }
    else {
      do {
        uVar4 = puVar2[1];
        uVar3 = *puVar2;
        puStack_58[2] = puVar2[2];
        puStack_58[1] = uVar4;
        *puStack_58 = uVar3;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        uVar3 = puVar2[3];
        puStack_58[4] = puVar2[4];
        puStack_58[3] = uVar3;
        puVar2 = puVar2 + 5;
        puStack_58 = puStack_58 + 5;
      } while (puVar2 != param_3);
      uStack_68 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 5;
      } while (param_2 != param_3);
    }
    FUN_10923ca30(&puStack_80);
    return;
  }
  __Znwm((long)param_2 * 0x28);
  return;
}



/* Entry: 10923c934; end: 10923ca2f;  */

void FUN_10923c934(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  if ((undefined8 *)0x666666666666666 < param_2) {
    func_0x000104c4f740();
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    puStack_48 = param_4;
    puVar1 = param_2;
    uStack_70 = param_1;
    puStack_50 = param_4;
    if (param_2 == param_3) {
      uStack_58 = 1;
    }
    else {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        puStack_48[2] = puVar1[2];
        puStack_48[1] = uVar3;
        *puStack_48 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        uVar2 = puVar1[3];
        puStack_48[4] = puVar1[4];
        puStack_48[3] = uVar2;
        puVar1 = puVar1 + 5;
        puStack_48 = puStack_48 + 5;
      } while (puVar1 != param_3);
      uStack_58 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 5;
      } while (param_2 != param_3);
    }
    FUN_10923ca30(&uStack_70);
    return;
  }
  __Znwm((long)param_2 * 0x28);
  return;
}



/* Entry: 10923ca30; end: 10923ca63;  */

long FUN_10923ca30(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10923ca64(param_1);
  }
  return param_1;
}



/* Entry: 10923ca64; end: 10923cb2f;  */

/* WARNING: Removing unreachable block (ram,0x00010923ca90) */

void FUN_10923ca64(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x28
      ) {
  }
  return;
}



/* Entry: 10923cb30; end: 10923d61b;  */

/* WARNING: Possible PIC construction at 0x00010923cc04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010923cc28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010923cc58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010923cfd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010923cfc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010923cfdc) */
/* WARNING: Removing unreachable block (ram,0x00010923cfec) */
/* WARNING: Removing unreachable block (ram,0x00010923d008) */
/* WARNING: Removing unreachable block (ram,0x00010923d024) */
/* WARNING: Removing unreachable block (ram,0x00010923cc2c) */
/* WARNING: Removing unreachable block (ram,0x00010923cc5c) */
/* WARNING: Removing unreachable block (ram,0x00010923cc64) */
/* WARNING: Removing unreachable block (ram,0x00010923ce14) */
/* WARNING: Removing unreachable block (ram,0x00010923ce6c) */
/* WARNING: Removing unreachable block (ram,0x00010923ce70) */
/* WARNING: Removing unreachable block (ram,0x00010923ce44) */
/* WARNING: Removing unreachable block (ram,0x00010923ce48) */
/* WARNING: Removing unreachable block (ram,0x00010923ce54) */
/* WARNING: Removing unreachable block (ram,0x00010923ce68) */
/* WARNING: Removing unreachable block (ram,0x00010923ce84) */
/* WARNING: Removing unreachable block (ram,0x00010923ce90) */
/* WARNING: Removing unreachable block (ram,0x00010923ce94) */
/* WARNING: Removing unreachable block (ram,0x00010923cea8) */
/* WARNING: Removing unreachable block (ram,0x00010923cee0) */
/* WARNING: Removing unreachable block (ram,0x00010923ceac) */
/* WARNING: Removing unreachable block (ram,0x00010923ceb8) */
/* WARNING: Removing unreachable block (ram,0x00010923cecc) */
/* WARNING: Removing unreachable block (ram,0x00010923cee8) */
/* WARNING: Removing unreachable block (ram,0x00010923cef4) */
/* WARNING: Removing unreachable block (ram,0x00010923cefc) */
/* WARNING: Removing unreachable block (ram,0x00010923cf04) */
/* WARNING: Removing unreachable block (ram,0x00010923cf24) */
/* WARNING: Removing unreachable block (ram,0x00010923cf2c) */
/* WARNING: Removing unreachable block (ram,0x00010923cf34) */
/* WARNING: Removing unreachable block (ram,0x00010923cf5c) */
/* WARNING: Removing unreachable block (ram,0x00010923cf64) */
/* WARNING: Removing unreachable block (ram,0x00010923cc74) */
/* WARNING: Removing unreachable block (ram,0x00010923cc98) */
/* WARNING: Removing unreachable block (ram,0x00010923ccac) */
/* WARNING: Removing unreachable block (ram,0x00010923ccd4) */
/* WARNING: Removing unreachable block (ram,0x00010923ccd8) */
/* WARNING: Removing unreachable block (ram,0x00010923cce0) */
/* WARNING: Removing unreachable block (ram,0x00010923ccbc) */
/* WARNING: Removing unreachable block (ram,0x00010923ccd0) */
/* WARNING: Removing unreachable block (ram,0x00010923ccf4) */
/* WARNING: Removing unreachable block (ram,0x00010923cd48) */
/* WARNING: Removing unreachable block (ram,0x00010923ccfc) */
/* WARNING: Removing unreachable block (ram,0x00010923cd08) */
/* WARNING: Removing unreachable block (ram,0x00010923cd14) */
/* WARNING: Removing unreachable block (ram,0x00010923cd28) */
/* WARNING: Removing unreachable block (ram,0x00010923cd3c) */
/* WARNING: Removing unreachable block (ram,0x00010923cd44) */
/* WARNING: Removing unreachable block (ram,0x00010923cd50) */
/* WARNING: Removing unreachable block (ram,0x00010923cd5c) */
/* WARNING: Removing unreachable block (ram,0x00010923cd64) */
/* WARNING: Removing unreachable block (ram,0x00010923cd6c) */
/* WARNING: Removing unreachable block (ram,0x00010923cd8c) */
/* WARNING: Removing unreachable block (ram,0x00010923cd94) */
/* WARNING: Removing unreachable block (ram,0x00010923cd9c) */
/* WARNING: Removing unreachable block (ram,0x00010923cdc4) */
/* WARNING: Removing unreachable block (ram,0x00010923cdcc) */
/* WARNING: Removing unreachable block (ram,0x00010923cdd4) */
/* WARNING: Removing unreachable block (ram,0x00010923cf70) */
/* WARNING: Removing unreachable block (ram,0x00010923cf78) */
/* WARNING: Removing unreachable block (ram,0x00010923cdf4) */
/* WARNING: Removing unreachable block (ram,0x00010923cdf8) */
/* WARNING: Removing unreachable block (ram,0x00010923cc08) */
/* WARNING: Removing unreachable block (ram,0x00010923cfc8) */
/* WARNING: Removing unreachable block (ram,0x00010923d3ac) */

void FUN_10923cb30(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  bool bVar5;
  byte bVar6;
  long lVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined1 *puVar26;
  code *pcVar27;
  undefined8 uVar28;
  undefined1 auStack_d0 [8];
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  long lStack_68;
  
  puVar8 = auStack_d0;
  puVar26 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar17 = param_2 + -5;
  puStack_c0 = param_2 + -10;
  puStack_c8 = param_2 + -0xf;
  uVar23 = (long)param_2 - (long)param_1;
  uVar22 = ((long)uVar23 >> 3) * -0x3333333333333333;
  puVar10 = param_1;
  puVar12 = param_2;
  puVar13 = param_3;
  puStack_b8 = param_2;
  if (uVar22 - 2 == 0 || (long)uVar22 < 2) {
    if (uVar22 < 2) goto LAB_10923d5e0;
    if (uVar22 == 2) {
      puVar10 = puVar17;
      puVar12 = param_1;
      func_0x000107c2abd4();
      if (((uint)puVar10 >> 7 & 1) != 0) {
        puVar10 = param_1;
        puVar12 = puVar17;
        FUN_10923d61c();
      }
      goto LAB_10923d5e0;
    }
  }
  else {
    if (uVar22 == 3) {
      puVar16 = param_1 + 5;
      uVar15 = 0x10923cfc8;
      puVar8 = auStack_d0;
      puVar13 = puVar17;
      goto SUB_10923d6e4;
    }
    if (uVar22 == 4) {
      puVar16 = param_1 + 5;
      uVar15 = 0x10923cfdc;
      puVar8 = auStack_d0;
      puVar13 = param_1 + 10;
      goto SUB_10923d6e4;
    }
    if (uVar22 == 5) {
      puVar12 = param_1 + 5;
      puVar13 = param_1 + 10;
      FUN_10923d798();
      goto LAB_10923d5e0;
    }
  }
  if ((long)uVar23 < 0x3c0) {
    if ((param_4 & 1) == 0) {
      if ((param_1 != param_2) && (param_1 + 5 != param_2)) {
        puVar16 = param_1 + -5;
        puVar11 = param_1 + 5;
        puVar17 = param_1;
        do {
          param_1 = puVar11;
          puVar10 = param_1;
          puVar12 = puVar17;
          func_0x000107c2abd4();
          if (((uint)puVar10 >> 7 & 1) != 0) {
            uStack_98 = param_1[1];
            uStack_a0 = *param_1;
            uStack_90 = param_1[2];
            param_1[1] = 0;
            param_1[2] = 0;
            *param_1 = 0;
            uStack_80 = puVar17[9];
            uStack_88 = puVar17[8];
            puVar17 = puVar16;
            do {
              puVar11 = puVar17;
              if (*(char *)((long)puVar11 + 0x67) < '\0') {
                __ZdlPv(puVar11[10]);
              }
              puVar11[0xb] = puVar11[6];
              puVar11[10] = puVar11[5];
              puVar11[0xc] = puVar11[7];
              *(undefined1 *)((long)puVar11 + 0x3f) = 0;
              *(undefined1 *)(puVar11 + 5) = 0;
              puVar11[0xe] = puVar11[9];
              puVar11[0xd] = puVar11[8];
              puVar10 = &uStack_a0;
              puVar12 = puVar11;
              func_0x000107c2abd4();
              puVar17 = puVar11 + -5;
            } while (((uint)puVar10 >> 7 & 1) != 0);
            if (*(char *)((long)puVar11 + 0x3f) < '\0') {
              puVar10 = (undefined8 *)puVar11[5];
              __ZdlPv();
            }
            puVar11[7] = uStack_90;
            puVar11[6] = uStack_98;
            puVar11[5] = uStack_a0;
            puVar11[9] = uStack_80;
            puVar11[8] = uStack_88;
          }
          puVar16 = puVar16 + 5;
          puVar11 = param_1 + 5;
          puVar17 = param_1;
          param_3 = &uStack_a0;
        } while (param_1 + 5 != param_2);
      }
    }
    else if ((param_1 != param_2) && (param_1 + 5 != param_2)) {
      lVar19 = 0;
      puVar16 = param_1 + 5;
      puVar11 = param_1;
      do {
        puVar17 = puVar16;
        puVar10 = puVar17;
        puVar12 = puVar11;
        func_0x000107c2abd4();
        if (((uint)puVar10 >> 7 & 1) != 0) {
          uStack_98 = puVar17[1];
          uStack_a0 = *puVar17;
          uStack_90 = puVar17[2];
          puVar17[1] = 0;
          puVar17[2] = 0;
          *puVar17 = 0;
          uStack_80 = puVar11[9];
          uStack_88 = puVar11[8];
          lVar7 = lVar19;
          do {
            lVar18 = lVar7;
            puVar16 = (undefined8 *)((long)param_1 + lVar18);
            if (*(char *)((long)puVar16 + 0x3f) < '\0') {
              puVar10 = (undefined8 *)puVar16[5];
              __ZdlPv();
            }
            puVar16[6] = puVar16[1];
            puVar16[5] = *puVar16;
            puVar16[7] = puVar16[2];
            *(undefined1 *)((long)puVar16 + 0x17) = 0;
            *(undefined1 *)puVar16 = 0;
            puVar16[9] = puVar16[4];
            puVar16[8] = puVar16[3];
            puVar16 = param_1;
            if (lVar18 == 0) goto LAB_10923d0ec;
            puVar10 = &uStack_a0;
            puVar12 = (undefined8 *)(lVar18 + -0x28 + (long)param_1);
            func_0x000107c2abd4();
            lVar7 = lVar18 + -0x28;
          } while (((uint)puVar10 >> 7 & 1) != 0);
          puVar16 = (undefined8 *)((long)param_1 + lVar18);
LAB_10923d0ec:
          if (*(char *)((long)puVar16 + 0x17) < '\0') {
            puVar10 = (undefined8 *)*puVar16;
            __ZdlPv();
          }
          puVar16[2] = uStack_90;
          puVar16[1] = uStack_98;
          *puVar16 = uStack_a0;
          *(undefined8 *)((long)param_1 + lVar18 + 0x20) = uStack_80;
          *(undefined8 *)((long)param_1 + lVar18 + 0x18) = uStack_88;
          param_2 = puStack_b8;
        }
        lVar19 = lVar19 + 0x28;
        puVar16 = puVar17 + 5;
        param_3 = puVar17;
        puVar11 = puVar17;
      } while (puVar17 + 5 != param_2);
    }
  }
  else {
    if (param_3 != (undefined8 *)0x0) {
      if (0x1400 < uVar23) {
        uVar15 = 0x10923cc08;
        puVar8 = auStack_d0;
        puVar16 = param_1 + (uVar22 >> 1) * 5;
        puVar13 = puVar17;
        goto SUB_10923d6e4;
      }
      uVar15 = 0x10923cc5c;
      puVar8 = auStack_d0;
      puVar10 = param_1 + (uVar22 >> 1) * 5;
      puVar16 = param_1;
      puVar13 = puVar17;
      goto SUB_10923d6e4;
    }
    if (param_1 != param_2) {
      uVar20 = uVar22 - 2 >> 1;
      uVar14 = uVar20;
      do {
        if ((long)uVar14 <= (long)uVar20) {
          uVar3 = uVar14 << 1 | 1;
          puVar12 = param_1 + uVar3 * 5;
          uVar1 = uVar14 * 2 + 2;
          param_2 = puVar12;
          uVar21 = uVar3;
          if ((long)uVar1 < (long)uVar22) {
            puVar10 = puVar12;
            func_0x000107c2abd4(puVar12,puVar12 + 5);
            param_2 = puVar12 + 5;
            uVar21 = uVar1;
            if (-1 < (char)puVar10) {
              param_2 = puVar12;
              uVar21 = uVar3;
            }
          }
          puVar17 = param_1 + uVar14 * 5;
          puVar10 = param_2;
          puVar12 = puVar17;
          func_0x000107c2abd4();
          if (((uint)puVar10 >> 7 & 1) == 0) {
            uStack_98 = puVar17[1];
            uStack_a0 = *puVar17;
            uStack_90 = puVar17[2];
            puVar17[1] = 0;
            puVar17[2] = 0;
            *puVar17 = 0;
            uStack_80 = puVar17[4];
            uStack_88 = puVar17[3];
            do {
              puVar16 = param_2;
              if (*(char *)((long)puVar17 + 0x17) < '\0') {
                puVar10 = (undefined8 *)*puVar17;
                __ZdlPv();
              }
              uVar28 = puVar16[1];
              uVar15 = *puVar16;
              puVar17[2] = puVar16[2];
              puVar17[1] = uVar28;
              *puVar17 = uVar15;
              *(undefined1 *)((long)puVar16 + 0x17) = 0;
              *(undefined1 *)puVar16 = 0;
              uVar15 = puVar16[3];
              puVar17[4] = puVar16[4];
              puVar17[3] = uVar15;
              param_2 = puVar16;
              if ((long)uVar20 < (long)uVar21) break;
              uVar3 = uVar21 << 1 | 1;
              puVar12 = param_1 + uVar3 * 5;
              uVar1 = uVar21 * 2 + 2;
              param_2 = puVar12;
              uVar21 = uVar3;
              if ((long)uVar1 < (long)uVar22) {
                puVar10 = puVar12;
                func_0x000107c2abd4(puVar12,puVar12 + 5);
                param_2 = puVar12 + 5;
                uVar21 = uVar1;
                if (-1 < (char)puVar10) {
                  param_2 = puVar12;
                  uVar21 = uVar3;
                }
              }
              puVar12 = &uStack_a0;
              puVar10 = param_2;
              func_0x000107c2abd4();
              puVar17 = puVar16;
            } while (((uint)puVar10 >> 7 & 1) == 0);
            if (*(char *)((long)puVar16 + 0x17) < '\0') {
              puVar10 = (undefined8 *)*puVar16;
              __ZdlPv();
            }
            puVar16[2] = uStack_90;
            puVar16[1] = uStack_98;
            *puVar16 = uStack_a0;
            puVar16[4] = uStack_80;
            puVar16[3] = uStack_88;
          }
        }
        bVar5 = uVar14 != 0;
        uVar14 = uVar14 - 1;
      } while (bVar5);
      lVar19 = (uVar23 >> 3) * -0x3333333333333333;
      puVar16 = puStack_b8;
      do {
        puStack_c0 = (undefined8 *)*param_1;
        uStack_78 = (undefined7)param_1[1];
        uStack_71 = (undefined1)*(undefined8 *)((long)param_1 + 0xf);
        uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)param_1 + 0xf) >> 8);
        puStack_b8 = (undefined8 *)CONCAT44(puStack_b8._4_4_,(uint)*(byte *)((long)param_1 + 0x17));
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        uStack_a8 = param_1[4];
        uStack_b0 = param_1[3];
        puVar11 = param_1;
        puVar24 = (undefined8 *)0x0;
        do {
          puVar2 = puVar11 + (long)puVar24 * 5 + 5;
          puVar4 = (undefined8 *)((long)puVar24 << 1 | 1);
          param_3 = (undefined8 *)((long)puVar24 * 2 + 2);
          puVar25 = puVar4;
          puVar17 = puVar2;
          if ((long)param_3 < lVar19) {
            param_2 = puVar11 + (long)puVar24 * 5 + 10;
            puVar10 = puVar2;
            puVar12 = param_2;
            func_0x000107c2abd4();
            puVar25 = param_3;
            puVar17 = param_2;
            if (-1 < (char)puVar10) {
              puVar25 = puVar4;
              puVar17 = puVar2;
            }
          }
          if (*(char *)((long)puVar11 + 0x17) < '\0') {
            puVar10 = (undefined8 *)*puVar11;
            __ZdlPv();
          }
          uVar28 = puVar17[1];
          uVar15 = *puVar17;
          puVar11[2] = puVar17[2];
          puVar11[1] = uVar28;
          *puVar11 = uVar15;
          *(undefined1 *)((long)puVar17 + 0x17) = 0;
          *(undefined1 *)puVar17 = 0;
          uVar15 = puVar17[3];
          puVar11[4] = puVar17[4];
          puVar11[3] = uVar15;
          puVar11 = puVar17;
          puVar24 = puVar25;
        } while ((long)puVar25 <= (long)(lVar19 - 2U >> 1));
        puVar11 = puVar16 + -5;
        if (puVar17 == puVar11) {
          if (*(char *)((long)puVar17 + 0x17) < '\0') {
            puVar10 = (undefined8 *)*puVar17;
            __ZdlPv();
          }
          *puVar17 = puStack_c0;
          puVar17[1] = CONCAT17(uStack_71,uStack_78);
          *(ulong *)((long)puVar17 + 0xf) = CONCAT71(uStack_70,uStack_71);
          *(char *)((long)puVar17 + 0x17) = (char)puStack_b8;
          puVar17[4] = uStack_a8;
          puVar17[3] = uStack_b0;
        }
        else {
          if (*(char *)((long)puVar17 + 0x17) < '\0') {
            puVar10 = (undefined8 *)*puVar17;
            __ZdlPv();
          }
          uVar28 = puVar16[-4];
          uVar15 = *puVar11;
          puVar17[2] = puVar16[-3];
          puVar17[1] = uVar28;
          *puVar17 = uVar15;
          *(undefined1 *)((long)puVar16 + -0x11) = 0;
          *(undefined1 *)(puVar16 + -5) = 0;
          uVar15 = puVar16[-2];
          puVar17[4] = puVar16[-1];
          puVar17[3] = uVar15;
          puVar16[-5] = puStack_c0;
          *(ulong *)((long)puVar16 + -0x19) = CONCAT71(uStack_70,uStack_71);
          puVar16[-4] = CONCAT17(uStack_71,uStack_78);
          *(char *)((long)puVar16 + -0x11) = (char)puStack_b8;
          puVar16[-1] = uStack_a8;
          puVar16[-2] = uStack_b0;
          uVar22 = (long)puVar17 + (0x28 - (long)param_1);
          if (0x28 < (long)uVar22) {
            puVar16 = (undefined8 *)((uVar22 >> 3) * -0x3333333333333333 - 2 >> 1);
            param_3 = param_1 + (long)puVar16 * 5;
            puVar10 = param_3;
            puVar12 = puVar17;
            func_0x000107c2abd4();
            param_2 = puVar16;
            if (((uint)puVar10 >> 7 & 1) != 0) {
              uStack_98 = puVar17[1];
              uStack_a0 = *puVar17;
              uStack_90 = puVar17[2];
              puVar17[1] = 0;
              puVar17[2] = 0;
              *puVar17 = 0;
              uStack_80 = puVar17[4];
              uStack_88 = puVar17[3];
              puVar24 = puVar17;
              do {
                puVar17 = param_3;
                if (*(char *)((long)puVar24 + 0x17) < '\0') {
                  puVar10 = (undefined8 *)*puVar24;
                  __ZdlPv();
                }
                uVar28 = puVar17[1];
                uVar15 = *puVar17;
                puVar24[2] = puVar17[2];
                puVar24[1] = uVar28;
                *puVar24 = uVar15;
                *(undefined1 *)((long)puVar17 + 0x17) = 0;
                *(undefined1 *)puVar17 = 0;
                uVar15 = puVar17[3];
                puVar24[4] = puVar17[4];
                puVar24[3] = uVar15;
                param_2 = (undefined8 *)0x0;
                param_3 = puVar17;
                if (puVar16 == (undefined8 *)0x0) break;
                puVar16 = (undefined8 *)((long)puVar16 - 1U >> 1);
                param_3 = param_1 + (long)puVar16 * 5;
                puVar12 = &uStack_a0;
                puVar10 = param_3;
                func_0x000107c2abd4();
                param_2 = puVar16;
                puVar24 = puVar17;
              } while (((uint)puVar10 >> 7 & 1) != 0);
              if (*(char *)((long)puVar17 + 0x17) < '\0') {
                puVar10 = (undefined8 *)*puVar17;
                __ZdlPv();
              }
              puVar17[2] = uStack_90;
              puVar17[1] = uStack_98;
              *puVar17 = uStack_a0;
              puVar17[4] = uStack_80;
              puVar17[3] = uStack_88;
            }
          }
        }
        bVar5 = 2 < lVar19;
        lVar19 = lVar19 + -1;
        puVar16 = puVar11;
      } while (bVar5);
    }
  }
LAB_10923d5e0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  pcVar27 = FUN_10923d61c;
  ___stack_chk_fail();
  do {
    *(undefined8 **)(puVar8 + -0x30) = param_3;
    *(undefined8 **)(puVar8 + -0x28) = puVar17;
    *(undefined8 **)(puVar8 + -0x20) = param_2;
    *(undefined8 **)(puVar8 + -0x18) = param_1;
    *(undefined1 **)(puVar8 + -0x10) = puVar26;
    *(code **)(puVar8 + -8) = pcVar27;
    puVar26 = puVar8 + -0x10;
    *(undefined8 *)(puVar8 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    param_2 = (undefined8 *)*puVar10;
    *(undefined8 *)(puVar8 + -0x48) = puVar10[1];
    *(undefined8 *)(puVar8 + -0x41) = *(undefined8 *)((long)puVar10 + 0xf);
    bVar6 = *(byte *)((long)puVar10 + 0x17);
    puVar17 = (undefined8 *)(ulong)bVar6;
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = 0;
    uVar15 = puVar10[3];
    *(undefined8 *)(puVar8 + -0x58) = puVar10[4];
    *(undefined8 *)(puVar8 + -0x60) = uVar15;
    uVar15 = puVar12[2];
    uVar28 = *puVar12;
    puVar10[1] = puVar12[1];
    *puVar10 = uVar28;
    puVar10[2] = uVar15;
    *(undefined1 *)((long)puVar12 + 0x17) = 0;
    *(undefined1 *)puVar12 = 0;
    uVar15 = puVar12[3];
    puVar10[4] = puVar12[4];
    puVar10[3] = uVar15;
    puVar16 = puVar12;
    if (*(char *)((long)puVar12 + 0x17) < '\0') {
      puVar10 = (undefined8 *)*puVar12;
      __ZdlPv();
    }
    uVar15 = *(undefined8 *)(puVar8 + -0x48);
    *puVar12 = param_2;
    puVar12[1] = uVar15;
    *(undefined8 *)((long)puVar12 + 0xf) = *(undefined8 *)(puVar8 + -0x41);
    *(byte *)((long)puVar12 + 0x17) = bVar6;
    uVar15 = *(undefined8 *)(puVar8 + -0x60);
    puVar12[4] = *(undefined8 *)(puVar8 + -0x58);
    puVar12[3] = uVar15;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar8 + -0x38)) {
      return;
    }
    uVar15 = 0x10923d6e4;
    ___stack_chk_fail();
    puVar8 = puVar8 + -0x60;
    param_1 = puVar12;
SUB_10923d6e4:
    puVar12 = puVar13;
    *(undefined8 **)(puVar8 + -0x30) = param_3;
    *(undefined8 **)(puVar8 + -0x28) = puVar17;
    *(undefined8 **)(puVar8 + -0x20) = param_2;
    *(undefined8 **)(puVar8 + -0x18) = param_1;
    *(undefined1 **)(puVar8 + -0x10) = puVar26;
    *(undefined8 *)(puVar8 + -8) = uVar15;
    puVar17 = puVar16;
    puVar13 = puVar12;
    func_0x000107c2abd4(puVar16,puVar10);
    puVar11 = puVar12;
    func_0x000107c2abd4(puVar12,puVar16);
    if (((uint)puVar17 >> 7 & 1) == 0) {
      if (-1 < (char)puVar11) {
        return;
      }
      FUN_10923d61c(puVar16,puVar12);
      puVar12 = puVar16;
      func_0x000107c2abd4(puVar16,puVar10);
      uVar9 = (uint)puVar12;
      puVar12 = puVar16;
joined_r0x00010923d76c:
      if ((uVar9 >> 7 & 1) == 0) {
        return;
      }
    }
    else if (-1 < (char)puVar11) {
      FUN_10923d61c(puVar10,puVar16);
      puVar10 = puVar12;
      func_0x000107c2abd4(puVar12,puVar16);
      uVar9 = (uint)puVar10;
      puVar10 = puVar16;
      goto joined_r0x00010923d76c;
    }
    puVar26 = *(undefined1 **)(puVar8 + -0x10);
    pcVar27 = *(code **)(puVar8 + -8);
    param_2 = *(undefined8 **)(puVar8 + -0x20);
    param_1 = *(undefined8 **)(puVar8 + -0x18);
    param_3 = *(undefined8 **)(puVar8 + -0x30);
    puVar17 = *(undefined8 **)(puVar8 + -0x28);
  } while( true );
}



/* Entry: 10923d61c; end: 10923d797;  */

void FUN_10923d61c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar9;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar1 = *param_1;
    *(undefined8 *)((long)register0x00000008 + -0x48) = param_1[1];
    *(undefined8 *)((long)register0x00000008 + -0x41) = *(undefined8 *)((long)param_1 + 0xf);
    bVar2 = *(byte *)((long)param_1 + 0x17);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    uVar8 = param_1[3];
    *(undefined8 *)((long)register0x00000008 + -0x58) = param_1[4];
    *(undefined8 *)((long)register0x00000008 + -0x60) = uVar8;
    uVar8 = param_2[2];
    uVar9 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar9;
    param_1[2] = uVar8;
    *(undefined1 *)((long)param_2 + 0x17) = 0;
    *(undefined1 *)param_2 = 0;
    uVar8 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar8;
    puVar7 = param_2;
    puVar6 = param_3;
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      param_1 = (undefined8 *)*param_2;
      __ZdlPv();
      puVar6 = param_3;
    }
    uVar8 = *(undefined8 *)((long)register0x00000008 + -0x48);
    *param_2 = uVar1;
    param_2[1] = uVar8;
    *(undefined8 *)((long)param_2 + 0xf) = *(undefined8 *)((long)register0x00000008 + -0x41);
    *(byte *)((long)param_2 + 0x17) = bVar2;
    uVar8 = *(undefined8 *)((long)register0x00000008 + -0x60);
    param_2[4] = *(undefined8 *)((long)register0x00000008 + -0x58);
    param_2[3] = uVar8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38)) {
      return;
    }
    ___stack_chk_fail();
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x88) = (ulong)bVar2;
    *(undefined8 *)((long)register0x00000008 + -0x80) = uVar1;
    *(undefined8 **)((long)register0x00000008 + -0x78) = param_2;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0x10923d6e4;
    puVar4 = puVar7;
    param_3 = puVar6;
    func_0x000107c2abd4(puVar7,param_1);
    puVar5 = puVar6;
    func_0x000107c2abd4(puVar6,puVar7);
    if (((uint)puVar4 >> 7 & 1) == 0) {
      if (-1 < (char)puVar5) {
        return;
      }
      FUN_10923d61c(puVar7,puVar6);
      puVar6 = puVar7;
      func_0x000107c2abd4(puVar7,param_1);
      uVar3 = (uint)puVar6;
      puVar6 = puVar7;
joined_r0x00010923d76c:
      if ((uVar3 >> 7 & 1) == 0) {
        return;
      }
    }
    else if (-1 < (char)puVar5) {
      FUN_10923d61c(param_1,puVar7);
      puVar4 = puVar6;
      func_0x000107c2abd4(puVar6,puVar7);
      uVar3 = (uint)puVar4;
      param_1 = puVar7;
      goto joined_r0x00010923d76c;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x68);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x78);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x88);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_2 = puVar6;
  } while( true );
}



/* Entry: 10923d798; end: 10923d8ab;  */

/* WARNING: Possible PIC construction at 0x00010923d7c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010923d7dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010923d7f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010923d814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010923d830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010923d84c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010923d868: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010923d730: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010923d75c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010923d734) */
/* WARNING: Removing unreachable block (ram,0x00010923d744) */
/* WARNING: Removing unreachable block (ram,0x00010923d86c) */
/* WARNING: Removing unreachable block (ram,0x00010923d890) */
/* WARNING: Removing unreachable block (ram,0x00010923d850) */
/* WARNING: Removing unreachable block (ram,0x00010923d860) */
/* WARNING: Removing unreachable block (ram,0x00010923d834) */
/* WARNING: Removing unreachable block (ram,0x00010923d844) */
/* WARNING: Removing unreachable block (ram,0x00010923d7fc) */
/* WARNING: Removing unreachable block (ram,0x00010923d80c) */
/* WARNING: Removing unreachable block (ram,0x00010923d7e0) */
/* WARNING: Removing unreachable block (ram,0x00010923d7f0) */
/* WARNING: Removing unreachable block (ram,0x00010923d7c4) */
/* WARNING: Removing unreachable block (ram,0x00010923d818) */
/* WARNING: Removing unreachable block (ram,0x00010923d87c) */
/* WARNING: Removing unreachable block (ram,0x00010923d828) */
/* WARNING: Removing unreachable block (ram,0x00010923d7d4) */
/* WARNING: Removing unreachable block (ram,0x00010923d760) */
/* WARNING: Removing unreachable block (ram,0x00010923d780) */

void FUN_10923d798(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar2 = &stack0xffffffffffffffc0;
  uVar9 = 0x10923d7c4;
  puVar5 = param_2;
  puVar4 = param_1;
  puVar7 = param_3;
  while( true ) {
    puVar8 = (undefined1 *)((long)register0x00000008 + -0x10);
    register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x30);
    *(undefined8 **)(puVar2 + -0x30) = param_4;
    *(undefined8 **)(puVar2 + -0x28) = puVar7;
    *(undefined8 **)(puVar2 + -0x20) = puVar4;
    *(undefined8 **)(puVar2 + -0x18) = puVar5;
    *(undefined1 **)(puVar2 + -0x10) = puVar8;
    *(undefined8 *)(puVar2 + -8) = uVar9;
    puVar8 = puVar2 + -0x10;
    param_4 = param_2;
    puVar6 = param_3;
    func_0x000107c2abd4(param_2,param_1);
    puVar4 = param_3;
    func_0x000107c2abd4(param_3,param_2);
    puVar5 = param_3;
    if (((uint)param_4 >> 7 & 1) == 0) {
      if (-1 < (char)puVar4) {
        return;
      }
      uVar9 = 0x10923d734;
      register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x30);
      puVar3 = param_2;
    }
    else {
      puVar3 = param_1;
      if ((char)puVar4 < '\0') {
        puVar8 = *(undefined1 **)(puVar2 + -0x10);
        uVar9 = *(undefined8 *)(puVar2 + -8);
        param_2 = *(undefined8 **)(puVar2 + -0x18);
        param_4 = *(undefined8 **)(puVar2 + -0x30);
        register0x00000008 = (BADSPACEBASE *)puVar2;
        param_3 = *(undefined8 **)(puVar2 + -0x20);
        param_1 = *(undefined8 **)(puVar2 + -0x28);
      }
      else {
        uVar9 = 0x10923d760;
        puVar5 = param_2;
      }
    }
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined8 **)((long)register0x00000008 + -0x30) = param_4;
    *(undefined8 **)((long)register0x00000008 + -0x28) = param_1;
    *(undefined8 **)((long)register0x00000008 + -0x20) = param_3;
    *(undefined8 **)((long)register0x00000008 + -0x18) = param_2;
    *(undefined1 **)((long)register0x00000008 + -0x10) = puVar8;
    *(undefined8 *)((long)register0x00000008 + -8) = uVar9;
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = (undefined8 *)*puVar3;
    *(undefined8 *)((long)register0x00000008 + -0x48) = puVar3[1];
    *(undefined8 *)((long)register0x00000008 + -0x41) = *(undefined8 *)((long)puVar3 + 0xf);
    bVar1 = *(byte *)((long)puVar3 + 0x17);
    puVar7 = (undefined8 *)(ulong)bVar1;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    uVar9 = puVar3[3];
    *(undefined8 *)((long)register0x00000008 + -0x58) = puVar3[4];
    *(undefined8 *)((long)register0x00000008 + -0x60) = uVar9;
    uVar9 = puVar5[2];
    uVar10 = *puVar5;
    puVar3[1] = puVar5[1];
    *puVar3 = uVar10;
    puVar3[2] = uVar9;
    *(undefined1 *)((long)puVar5 + 0x17) = 0;
    *(undefined1 *)puVar5 = 0;
    uVar9 = puVar5[3];
    puVar3[4] = puVar5[4];
    puVar3[3] = uVar9;
    param_1 = puVar3;
    param_2 = puVar5;
    param_3 = puVar6;
    if (*(char *)((long)puVar5 + 0x17) < '\0') {
      param_1 = (undefined8 *)*puVar5;
      __ZdlPv();
      param_3 = puVar6;
    }
    uVar9 = *(undefined8 *)((long)register0x00000008 + -0x48);
    *puVar5 = puVar4;
    puVar5[1] = uVar9;
    *(undefined8 *)((long)puVar5 + 0xf) = *(undefined8 *)((long)register0x00000008 + -0x41);
    *(byte *)((long)puVar5 + 0x17) = bVar1;
    uVar9 = *(undefined8 *)((long)register0x00000008 + -0x60);
    puVar5[4] = *(undefined8 *)((long)register0x00000008 + -0x58);
    puVar5[3] = uVar9;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
    break;
    uVar9 = 0x10923d6e4;
    ___stack_chk_fail();
  }
  return;
}



/* Entry: 10923d8ac; end: 10923d973;  */

undefined8 * FUN_10923d8ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined7 uStack_48;
  undefined1 uStack_41;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *param_1;
  uStack_48 = (undefined7)param_1[1];
  uVar8 = *(undefined8 *)((long)param_1 + 0xf);
  uStack_41 = (undefined1)uVar8;
  uVar2 = *(undefined1 *)((long)param_1 + 0x17);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar17 = param_1[4];
  uVar15 = param_1[3];
  uVar9 = param_2[2];
  uVar16 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar16;
  param_1[2] = uVar9;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  uVar9 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar9;
  puVar6 = param_2;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    param_1 = (undefined8 *)*param_2;
    __ZdlPv();
  }
  *param_2 = uVar1;
  param_2[1] = CONCAT17(uStack_41,uStack_48);
  *(undefined8 *)((long)param_2 + 0xf) = uVar8;
  *(undefined1 *)((long)param_2 + 0x17) = uVar2;
  param_2[4] = uVar17;
  param_2[3] = uVar15;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return param_1;
  }
  ___stack_chk_fail();
  uVar10 = ((long)puVar6 - (long)param_1 >> 3) * -0x3333333333333333;
  if ((long)uVar10 < 3) {
    if (uVar10 < 2) {
      return (undefined8 *)0x1;
    }
    if (uVar10 != 2) {
LAB_10923da2c:
      func_0x00010923d6e4(param_1,param_1 + 5,param_1 + 10);
      if (param_1 + 0xf == puVar6) {
        return (undefined8 *)0x1;
      }
      lVar7 = 0;
      iVar14 = 0;
      puVar5 = param_1 + 0xf;
      puVar13 = param_1 + 10;
      do {
        puVar12 = puVar5;
        puVar5 = puVar12;
        func_0x000107c2abd4(puVar12,puVar13);
        if (((uint)puVar5 >> 7 & 1) != 0) {
          uStack_d8 = puVar12[1];
          uStack_e0 = *puVar12;
          uStack_d0 = puVar12[2];
          puVar12[1] = 0;
          puVar12[2] = 0;
          *puVar12 = 0;
          uStack_c0 = puVar12[4];
          uStack_c8 = puVar12[3];
          lVar3 = lVar7;
          do {
            lVar11 = lVar3;
            if (*(char *)((long)param_1 + lVar11 + 0x8f) < '\0') {
              __ZdlPv(*(undefined8 *)((long)param_1 + lVar11 + 0x78));
            }
            *(undefined8 *)((long)param_1 + lVar11 + 0x80) =
                 *(undefined8 *)((long)param_1 + lVar11 + 0x58);
            *(undefined8 *)((long)param_1 + lVar11 + 0x78) =
                 *(undefined8 *)((long)param_1 + lVar11 + 0x50);
            *(undefined8 *)((long)param_1 + lVar11 + 0x88) =
                 *(undefined8 *)((long)param_1 + lVar11 + 0x60);
            *(undefined1 *)((long)param_1 + lVar11 + 0x67) = 0;
            *(undefined1 *)((long)param_1 + lVar11 + 0x50) = 0;
            *(undefined8 *)((long)param_1 + lVar11 + 0x98) =
                 *(undefined8 *)((long)param_1 + lVar11 + 0x70);
            *(undefined8 *)((long)param_1 + lVar11 + 0x90) =
                 *(undefined8 *)((long)param_1 + lVar11 + 0x68);
            puVar5 = param_1;
            if (lVar11 == -0x50) goto LAB_10923daf4;
            uVar4 = 0;
            func_0x000107c2abd4(&uStack_e0,(long)param_1 + lVar11 + 0x28);
            lVar3 = lVar11 + -0x28;
          } while ((uVar4 >> 7 & 1) != 0);
          puVar5 = (undefined8 *)((long)param_1 + lVar11 + 0x50);
LAB_10923daf4:
          if (*(char *)((long)puVar5 + 0x17) < '\0') {
            __ZdlPv(*puVar5);
          }
          puVar5[1] = uStack_d8;
          *puVar5 = uStack_e0;
          puVar5[2] = uStack_d0;
          *(undefined8 *)((long)param_1 + lVar11 + 0x70) = uStack_c0;
          *(undefined8 *)((long)param_1 + lVar11 + 0x68) = uStack_c8;
          iVar14 = iVar14 + 1;
          if (iVar14 == 8) {
            return (undefined8 *)(ulong)(puVar12 + 5 == puVar6);
          }
        }
        lVar7 = lVar7 + 0x28;
        puVar5 = puVar12 + 5;
        puVar13 = puVar12;
        if (puVar12 + 5 == puVar6) {
          return (undefined8 *)0x1;
        }
      } while( true );
    }
    puVar6 = puVar6 + -5;
    puVar5 = puVar6;
    func_0x000107c2abd4(puVar6,param_1);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      return (undefined8 *)0x1;
    }
  }
  else {
    if (uVar10 == 3) {
      func_0x00010923d6e4(param_1,param_1 + 5,puVar6 + -5);
      return (undefined8 *)0x1;
    }
    if (uVar10 != 4) {
      if (uVar10 == 5) {
        FUN_10923d798(param_1,param_1 + 5,param_1 + 10,param_1 + 0xf,puVar6 + -5);
        return (undefined8 *)0x1;
      }
      goto LAB_10923da2c;
    }
    puVar6 = puVar6 + -5;
    func_0x00010923d6e4(param_1,param_1 + 5,param_1 + 10);
    puVar5 = puVar6;
    func_0x000107c2abd4(puVar6,param_1 + 10);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      return (undefined8 *)0x1;
    }
    FUN_10923d61c(param_1 + 10,puVar6);
    puVar6 = param_1 + 10;
    func_0x000107c2abd4(puVar6,param_1 + 5);
    if (((uint)puVar6 >> 7 & 1) == 0) {
      return (undefined8 *)0x1;
    }
    FUN_10923d61c(param_1 + 5,param_1 + 10);
    puVar6 = param_1 + 5;
    func_0x000107c2abd4(puVar6,param_1);
    if (((uint)puVar6 >> 7 & 1) == 0) {
      return (undefined8 *)0x1;
    }
    puVar6 = param_1 + 5;
  }
  FUN_10923d61c(param_1,puVar6);
  return (undefined8 *)0x1;
}



/* Entry: 10923d974; end: 10923dbdb;  */

bool FUN_10923d974(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uVar4 = ((long)param_2 - (long)param_1 >> 3) * -0x3333333333333333;
  if ((long)uVar4 < 3) {
    if (uVar4 < 2) {
      return true;
    }
    if (uVar4 != 2) {
LAB_10923da2c:
      func_0x00010923d6e4(param_1,param_1 + 5,param_1 + 10);
      if (param_1 + 0xf == param_2) {
        return true;
      }
      lVar8 = 0;
      iVar9 = 0;
      puVar3 = param_1 + 0xf;
      puVar7 = param_1 + 10;
      do {
        puVar6 = puVar3;
        puVar3 = puVar6;
        func_0x000107c2abd4(puVar6,puVar7);
        if (((uint)puVar3 >> 7 & 1) != 0) {
          uStack_78 = puVar6[1];
          uStack_80 = *puVar6;
          uStack_70 = puVar6[2];
          puVar6[1] = 0;
          puVar6[2] = 0;
          *puVar6 = 0;
          uStack_60 = puVar6[4];
          uStack_68 = puVar6[3];
          lVar1 = lVar8;
          do {
            lVar5 = lVar1;
            if (*(char *)((long)param_1 + lVar5 + 0x8f) < '\0') {
              __ZdlPv(*(undefined8 *)((long)param_1 + lVar5 + 0x78));
            }
            *(undefined8 *)((long)param_1 + lVar5 + 0x80) =
                 *(undefined8 *)((long)param_1 + lVar5 + 0x58);
            *(undefined8 *)((long)param_1 + lVar5 + 0x78) =
                 *(undefined8 *)((long)param_1 + lVar5 + 0x50);
            *(undefined8 *)((long)param_1 + lVar5 + 0x88) =
                 *(undefined8 *)((long)param_1 + lVar5 + 0x60);
            *(undefined1 *)((long)param_1 + lVar5 + 0x67) = 0;
            *(undefined1 *)((long)param_1 + lVar5 + 0x50) = 0;
            *(undefined8 *)((long)param_1 + lVar5 + 0x98) =
                 *(undefined8 *)((long)param_1 + lVar5 + 0x70);
            *(undefined8 *)((long)param_1 + lVar5 + 0x90) =
                 *(undefined8 *)((long)param_1 + lVar5 + 0x68);
            puVar3 = param_1;
            if (lVar5 == -0x50) goto LAB_10923daf4;
            uVar2 = (uint)&uStack_80;
            func_0x000107c2abd4(&uStack_80,(long)param_1 + lVar5 + 0x28);
            lVar1 = lVar5 + -0x28;
          } while ((uVar2 >> 7 & 1) != 0);
          puVar3 = (undefined8 *)((long)param_1 + lVar5 + 0x50);
LAB_10923daf4:
          if (*(char *)((long)puVar3 + 0x17) < '\0') {
            __ZdlPv(*puVar3);
          }
          puVar3[1] = uStack_78;
          *puVar3 = uStack_80;
          puVar3[2] = uStack_70;
          *(undefined8 *)((long)param_1 + lVar5 + 0x70) = uStack_60;
          *(undefined8 *)((long)param_1 + lVar5 + 0x68) = uStack_68;
          iVar9 = iVar9 + 1;
          if (iVar9 == 8) {
            return puVar6 + 5 == param_2;
          }
        }
        lVar8 = lVar8 + 0x28;
        puVar3 = puVar6 + 5;
        puVar7 = puVar6;
        if (puVar6 + 5 == param_2) {
          return true;
        }
      } while( true );
    }
    param_2 = param_2 + -5;
    puVar3 = param_2;
    func_0x000107c2abd4(param_2,param_1);
    if (((uint)puVar3 >> 7 & 1) == 0) {
      return true;
    }
  }
  else {
    if (uVar4 == 3) {
      func_0x00010923d6e4(param_1,param_1 + 5,param_2 + -5);
      return true;
    }
    if (uVar4 != 4) {
      if (uVar4 == 5) {
        FUN_10923d798(param_1,param_1 + 5,param_1 + 10,param_1 + 0xf,param_2 + -5);
        return true;
      }
      goto LAB_10923da2c;
    }
    param_2 = param_2 + -5;
    func_0x00010923d6e4(param_1,param_1 + 5,param_1 + 10);
    puVar3 = param_2;
    func_0x000107c2abd4(param_2,param_1 + 10);
    if (((uint)puVar3 >> 7 & 1) == 0) {
      return true;
    }
    FUN_10923d61c(param_1 + 10,param_2);
    puVar3 = param_1 + 10;
    func_0x000107c2abd4(puVar3,param_1 + 5);
    if (((uint)puVar3 >> 7 & 1) == 0) {
      return true;
    }
    FUN_10923d61c(param_1 + 5,param_1 + 10);
    puVar3 = param_1 + 5;
    func_0x000107c2abd4(puVar3,param_1);
    if (((uint)puVar3 >> 7 & 1) == 0) {
      return true;
    }
    param_2 = param_1 + 5;
  }
  FUN_10923d61c(param_1,param_2);
  return true;
}



/* Entry: 10923dbdc; end: 10923dc87;  */

void FUN_10923dbdc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = param_1[1];
  puVar1 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar3 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar1 = param_1;
  }
  if (uVar3 != 0) {
    do {
      if (uVar3 == 0) {
        return;
      }
      lVar2 = uVar3 - 1;
      uVar3 = uVar3 - 1;
    } while (*(char *)((long)puVar1 + lVar2) != '.');
    if (uVar3 != 0xffffffffffffffff) {
      return;
    }
  }
  return;
}



/* Entry: 10923dc88; end: 10923dcc3;  */

void FUN_10923dc88(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10923dcc4();
    lVar2 = uVar1 + 0x28;
  }
  else {
    lVar2 = param_1;
    FUN_10923dd30();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 10923dcc4; end: 10923dd2f;  */

void FUN_10923dcc4(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1,*param_2,param_2[1]);
  }
  else {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
  }
  uVar2 = param_2[3];
  puVar1[4] = param_2[4];
  puVar1[3] = uVar2;
  *(undefined8 **)(param_1 + 8) = puVar1 + 5;
  return;
}



/* Entry: 10923dd30; end: 10923de87;  */

long * FUN_10923dd30(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plStack_160;
  long **pplStack_158;
  long **pplStack_150;
  undefined1 uStack_148;
  long *plStack_140;
  long *plStack_138;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar7 = param_1[1] - *param_1;
  uVar5 = (lVar7 >> 3) * -0x3333333333333333 + 1;
  if (uVar5 < 0x666666666666667) {
    lVar4 = param_1[2] - *param_1 >> 3;
    uVar6 = lVar4 * -0x6666666666666666;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
      uVar6 = uVar5;
    }
    if (0x333333333333332 < (ulong)(lVar4 * -0x3333333333333333)) {
      uVar6 = 0x666666666666666;
    }
    plStack_38 = param_1;
    if (uVar6 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_10923c934();
    }
    plVar1 = (long *)((long)plVar2 + lVar7);
    plStack_40 = plVar2 + uVar6 * 5;
    plStack_48 = plVar1;
    plStack_58 = plVar2;
    plStack_50 = plVar1;
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(plVar1,*param_2,param_2[1]);
    }
    else {
      lVar4 = param_2[1];
      lVar7 = *param_2;
      plVar1[2] = param_2[2];
      plVar1[1] = lVar4;
      *plVar1 = lVar7;
    }
    lVar7 = param_2[3];
    plVar1[4] = param_2[4];
    plVar1[3] = lVar7;
    plStack_48 = plStack_48 + 5;
    lVar7 = (long)plStack_50 + (*param_1 - param_1[1]);
    func_0x00010923c978(param_1,*param_1,param_1[1],lVar7);
    plVar2 = plStack_48;
    plStack_58 = (long *)*param_1;
    *param_1 = lVar7;
    lVar7 = param_1[2];
    param_1[2] = (long)plStack_40;
    param_1[1] = (long)plStack_48;
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    plStack_40 = (long *)lVar7;
    func_0x00010923caa8(&plStack_58);
    return plVar2;
  }
  FUN_10923c920();
  func_0x00010923caa8(&plStack_58);
  __Unwind_Resume();
  lVar7 = param_1[1] - *param_1;
  uVar5 = (lVar7 >> 6) + 1;
  if (uVar5 >> 0x3a == 0) {
    uVar3 = param_1[2] - *param_1;
    uVar6 = (long)uVar3 >> 5;
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    if (0x7fffffffffffffbf < uVar3) {
      uVar6 = 0x3ffffffffffffff;
    }
    plStack_a8 = param_1;
    if (uVar6 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      func_0x000107c2abf0();
    }
    lVar7 = (long)plVar2 + lVar7;
    plStack_b0 = plVar2 + uVar6 * 8;
    plStack_c8 = plVar2;
    plStack_c0 = (long *)lVar7;
    plStack_b8 = (long *)lVar7;
    func_0x000107c2abdc(lVar7,param_2);
    plStack_b8 = (long *)(lVar7 + 0x40);
    lVar7 = lVar7 + (*param_1 - param_1[1]);
    func_0x000107c2abf4(param_1,*param_1,param_1[1],lVar7);
    plVar2 = plStack_b8;
    plStack_c8 = (long *)*param_1;
    *param_1 = lVar7;
    lVar7 = param_1[2];
    param_1[2] = (long)plStack_b0;
    param_1[1] = (long)plStack_b8;
    plStack_c0 = plStack_c8;
    plStack_b8 = plStack_c8;
    plStack_b0 = (long *)lVar7;
    func_0x000107c2abf8(&plStack_c8);
    return plVar2;
  }
  FUN_10923e0a0();
  func_0x000107c2abf8(&plStack_c8);
  __Unwind_Resume();
  if (param_2 < (long *)0x666666666666667) {
    plVar2 = param_1;
    FUN_10923c934();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)(plVar2 + (long)param_2 * 5);
    return plVar2;
  }
  FUN_10923c920();
  pplStack_158 = &plStack_140;
  pplStack_150 = &plStack_138;
  uStack_148 = 0;
  plStack_160 = param_1;
  plStack_140 = param_4;
  for (; plStack_138 = param_4, param_2 != param_3; param_2 = param_2 + 5) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      lVar4 = param_2[1];
      lVar7 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = lVar4;
      *param_4 = lVar7;
    }
    lVar7 = param_2[3];
    param_4[4] = param_2[4];
    param_4[3] = lVar7;
    param_4 = plStack_138 + 5;
  }
  uStack_148 = 1;
  FUN_10923ca30(&plStack_160);
  return param_4;
}



/* Entry: 10923de88; end: 10923df8f;  */

long * FUN_10923de88(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plStack_f0;
  long **pplStack_e8;
  long **pplStack_e0;
  undefined1 uStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar5 = param_1[1] - *param_1;
  uVar1 = (lVar5 >> 6) + 1;
  if (uVar1 >> 0x3a == 0) {
    uVar3 = param_1[2] - *param_1;
    uVar4 = (long)uVar3 >> 5;
    if (uVar4 <= uVar1) {
      uVar4 = uVar1;
    }
    if (0x7fffffffffffffbf < uVar3) {
      uVar4 = 0x3ffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar4 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      func_0x000107c2abf0();
    }
    lVar5 = (long)plVar2 + lVar5;
    plStack_40 = plVar2 + uVar4 * 8;
    plStack_58 = plVar2;
    plStack_50 = (long *)lVar5;
    plStack_48 = (long *)lVar5;
    func_0x000107c2abdc(lVar5,param_2);
    plStack_48 = (long *)(lVar5 + 0x40);
    lVar5 = lVar5 + (*param_1 - param_1[1]);
    func_0x000107c2abf4(param_1,*param_1,param_1[1],lVar5);
    plVar2 = plStack_48;
    plStack_58 = (long *)*param_1;
    *param_1 = lVar5;
    lVar5 = param_1[2];
    param_1[2] = (long)plStack_40;
    param_1[1] = (long)plStack_48;
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    plStack_40 = (long *)lVar5;
    func_0x000107c2abf8(&plStack_58);
    return plVar2;
  }
  FUN_10923e0a0();
  func_0x000107c2abf8(&plStack_58);
  __Unwind_Resume();
  if (param_2 < (long *)0x666666666666667) {
    plVar2 = param_1;
    FUN_10923c934();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)(plVar2 + (long)param_2 * 5);
    return plVar2;
  }
  FUN_10923c920();
  pplStack_e8 = &plStack_d0;
  pplStack_e0 = &plStack_c8;
  uStack_d8 = 0;
  plStack_f0 = param_1;
  plStack_d0 = param_4;
  for (; plStack_c8 = param_4, param_2 != param_3; param_2 = param_2 + 5) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      lVar6 = param_2[1];
      lVar5 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = lVar6;
      *param_4 = lVar5;
    }
    lVar5 = param_2[3];
    param_4[4] = param_2[4];
    param_4[3] = lVar5;
    param_4 = plStack_c8 + 5;
  }
  uStack_d8 = 1;
  FUN_10923ca30(&plStack_f0);
  return param_4;
}



/* Entry: 10923df90; end: 10923dfd7;  */

long * FUN_10923df90(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plStack_80;
  long **pplStack_78;
  long **pplStack_70;
  undefined1 uStack_68;
  long *plStack_60;
  long *plStack_58;
  
  if (param_2 < (long *)0x666666666666667) {
    plVar1 = param_1;
    FUN_10923c934();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 5);
    return plVar1;
  }
  FUN_10923c920();
  pplStack_78 = &plStack_60;
  pplStack_70 = &plStack_58;
  uStack_68 = 0;
  plStack_80 = param_1;
  plStack_60 = param_4;
  for (; plStack_58 = param_4, param_2 != param_3; param_2 = param_2 + 5) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      lVar3 = param_2[1];
      lVar2 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = lVar3;
      *param_4 = lVar2;
    }
    lVar2 = param_2[3];
    param_4[4] = param_2[4];
    param_4[3] = lVar2;
    param_4 = plStack_58 + 5;
  }
  uStack_68 = 1;
  FUN_10923ca30(&plStack_80);
  return param_4;
}



/* Entry: 10923dfd8; end: 10923e09f;  */

undefined8 *
FUN_10923dfd8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_48 = 0;
  puStack_40 = param_4;
  uStack_60 = param_1;
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 5) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      uVar2 = param_2[1];
      uVar1 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar2;
      *param_4 = uVar1;
    }
    uVar1 = param_2[3];
    param_4[4] = param_2[4];
    param_4[3] = uVar1;
    param_4 = puStack_38 + 5;
  }
  uStack_48 = 1;
  FUN_10923ca30(&uStack_60);
  return param_4;
}



/* Entry: 10923e0a0; end: 10923e0b3;  */

/* WARNING: Removing unreachable block (ram,0x00010923e4b0) */
/* WARNING: Removing unreachable block (ram,0x00010923e318) */
/* WARNING: Removing unreachable block (ram,0x00010923e930) */
/* WARNING: Removing unreachable block (ram,0x00010923e348) */
/* WARNING: Removing unreachable block (ram,0x00010923e4e0) */

void FUN_10923e0a0(undefined8 param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  undefined8 *puVar1;
  ulong *puVar2;
  bool bVar3;
  byte bVar4;
  undefined1 *puVar5;
  uint uVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  long lVar15;
  ulong *puVar16;
  ulong *puVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong *puVar23;
  undefined1 **ppuVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  code *pcStack_e8;
  undefined1 auStack_e0 [8];
  ulong *puStack_d8;
  ulong *puStack_d0;
  ulong *puStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  long lStack_78;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  puVar7 = (ulong *)&UNK_10f55e364;
  func_0x000104c4f6cc();
  pcStack_18 = FUN_10923e0b4;
  ppuVar24 = &puStack_20;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = puVar7;
  puVar9 = param_2;
  puVar17 = param_3;
  puStack_20 = &stack0xfffffffffffffff0;
  do {
    puVar14 = puVar9 + -5;
    puStack_d0 = puVar9 + -10;
    puStack_d8 = puVar9 + -0xf;
    puVar13 = puVar9;
    puVar16 = puVar12;
    puStack_c8 = puVar9;
LAB_10923e110:
    puVar12 = puVar16;
    puVar9 = puVar13;
    uVar22 = (long)puVar9 - (long)puVar12;
    uVar21 = ((long)uVar22 >> 3) * -0x3333333333333333;
    if (uVar21 - 2 == 0 || (long)uVar21 < 2) {
      if (uVar21 < 2) break;
      if (uVar21 == 2) {
        puVar7 = puVar14;
        param_2 = puVar12;
        func_0x000107c2abd4();
        puVar16 = puVar14;
        if (((uint)puVar7 >> 7 & 1) != 0) {
LAB_10923e534:
          param_2 = puVar16;
          puVar7 = puVar12;
          FUN_10923d61c();
        }
        break;
      }
    }
    else {
      if (uVar21 == 3) {
        param_2 = puVar12 + 5;
        puVar7 = puVar12;
        param_3 = puVar14;
        FUN_10923eba0();
        break;
      }
      if (uVar21 == 4) {
        param_3 = puVar12 + 10;
        FUN_10923eba0(puVar12,puVar12 + 5);
        param_2 = puVar12 + 10;
        puVar7 = puVar14;
        func_0x000107c2abd4();
        if (((uint)puVar7 >> 7 & 1) != 0) {
          FUN_10923d61c(puVar12 + 10,puVar14);
          puVar7 = puVar12 + 10;
          param_2 = puVar12 + 5;
          func_0x000107c2abd4();
          if (((uint)puVar7 >> 7 & 1) != 0) {
            FUN_10923d61c(puVar12 + 5,puVar12 + 10);
            puVar7 = puVar12 + 5;
            param_2 = puVar12;
            func_0x000107c2abd4();
            if (((uint)puVar7 >> 7 & 1) != 0) {
              puVar16 = puVar12 + 5;
              goto LAB_10923e534;
            }
          }
        }
        break;
      }
      if (uVar21 == 5) {
        param_2 = puVar12 + 5;
        param_3 = puVar12 + 10;
        puVar7 = puVar12;
        FUN_10923ec54();
        break;
      }
    }
    if ((long)uVar22 < 0x3c0) {
      if ((param_4 & 1) == 0) {
        if ((puVar12 != puVar9) && (puVar12 + 5 != puVar9)) {
          puVar16 = puVar12 + -5;
          puVar13 = puVar12 + 5;
          puVar14 = puVar12;
          do {
            puVar12 = puVar13;
            puVar7 = puVar12;
            param_2 = puVar14;
            func_0x000107c2abd4();
            if (((uint)puVar7 >> 7 & 1) != 0) {
              uStack_a8 = puVar12[1];
              uStack_b0 = *puVar12;
              uStack_a0 = puVar12[2];
              puVar12[1] = 0;
              puVar12[2] = 0;
              *puVar12 = 0;
              uStack_90 = puVar14[9];
              uStack_98 = puVar14[8];
              puVar17 = puVar16;
              do {
                puVar14 = puVar17;
                if (*(char *)((long)puVar14 + 0x67) < '\0') {
                  __ZdlPv(puVar14[10]);
                }
                puVar14[0xb] = puVar14[6];
                puVar14[10] = puVar14[5];
                puVar14[0xc] = puVar14[7];
                *(undefined1 *)((long)puVar14 + 0x3f) = 0;
                *(undefined1 *)(puVar14 + 5) = 0;
                puVar14[0xe] = puVar14[9];
                puVar14[0xd] = puVar14[8];
                puVar7 = &uStack_b0;
                param_2 = puVar14;
                func_0x000107c2abd4();
                puVar17 = puVar14 + -5;
              } while (((uint)puVar7 >> 7 & 1) != 0);
              if (*(char *)((long)puVar14 + 0x3f) < '\0') {
                puVar7 = (ulong *)puVar14[5];
                __ZdlPv();
              }
              puVar14[7] = uStack_a0;
              puVar14[6] = uStack_a8;
              puVar14[5] = uStack_b0;
              puVar14[9] = uStack_90;
              puVar14[8] = uStack_98;
            }
            puVar16 = puVar16 + 5;
            puVar13 = puVar12 + 5;
            puVar14 = puVar12;
            puVar17 = &uStack_b0;
          } while (puVar12 + 5 != puVar9);
        }
        break;
      }
      if ((puVar12 == puVar9) || (puVar12 + 5 == puVar9)) break;
      lVar15 = 0;
      puVar16 = puVar12 + 5;
      puVar17 = puVar12;
      goto LAB_10923e5d8;
    }
    if (puVar17 == (ulong *)0x0) {
      if (puVar12 == puVar9) break;
      uVar19 = uVar21 - 2 >> 1;
      uVar25 = uVar19;
      goto LAB_10923e6c8;
    }
    puVar7 = puVar12 + (uVar21 >> 1) * 5;
    if (uVar22 < 0x1401) {
      param_3 = puVar14;
      FUN_10923eba0(puVar7,puVar12);
    }
    else {
      FUN_10923eba0(puVar12,puVar7,puVar14);
      FUN_10923eba0(puVar12 + 5,puVar7 + -5,puStack_d0);
      FUN_10923eba0(puVar12 + 10,puVar7 + 5,puStack_d8);
      param_3 = puVar7 + 5;
      FUN_10923eba0(puVar7 + -5,puVar7);
      FUN_10923d8ac(puVar12,puVar7);
    }
    puVar17 = (ulong *)((long)puVar17 + -1);
    if ((param_4 & 1) == 0) {
      puVar7 = puVar12 + -5;
      func_0x000107c2abd4(puVar7,puVar12);
      if (((uint)puVar7 >> 7 & 1) == 0) {
        uStack_a8 = puVar12[1];
        uStack_b0 = *puVar12;
        uStack_a0 = puVar12[2];
        puVar12[1] = 0;
        puVar12[2] = 0;
        *puVar12 = 0;
        uStack_90 = puVar12[4];
        uStack_98 = puVar12[3];
        puVar7 = &uStack_b0;
        param_2 = puVar14;
        func_0x000107c2abd4();
        puVar16 = puVar12;
        if (((uint)puVar7 >> 7 & 1) == 0) {
          do {
            puVar16 = puVar16 + 5;
            if (puVar9 <= puVar16) break;
            puVar7 = &uStack_b0;
            param_2 = puVar16;
            func_0x000107c2abd4();
          } while (((uint)puVar7 >> 7 & 1) == 0);
        }
        else {
          do {
            puVar16 = puVar16 + 5;
            puVar7 = &uStack_b0;
            param_2 = puVar16;
            func_0x000107c2abd4();
          } while (((uint)puVar7 >> 7 & 1) == 0);
        }
        if (puVar16 < puVar9) {
          do {
            puVar9 = puVar9 + -5;
            puVar7 = &uStack_b0;
            param_2 = puVar9;
            func_0x000107c2abd4();
          } while (((uint)puVar7 >> 7 & 1) != 0);
        }
        while (puVar16 < puVar9) {
          FUN_10923d61c(puVar16,puVar9);
          do {
            puVar16 = puVar16 + 5;
            puVar7 = &uStack_b0;
            func_0x000107c2abd4(puVar7,puVar16);
          } while (((uint)puVar7 >> 7 & 1) == 0);
          do {
            puVar9 = puVar9 + -5;
            puVar7 = &uStack_b0;
            param_2 = puVar9;
            func_0x000107c2abd4();
          } while (((uint)puVar7 >> 7 & 1) != 0);
        }
        puVar9 = puVar16 + -5;
        if (puVar9 != puVar12) {
          if (*(char *)((long)puVar12 + 0x17) < '\0') {
            puVar7 = (ulong *)*puVar12;
            __ZdlPv();
          }
          uVar22 = puVar16[-4];
          uVar21 = *puVar9;
          puVar12[2] = puVar16[-3];
          puVar12[1] = uVar22;
          *puVar12 = uVar21;
          *(undefined1 *)((long)puVar16 + -0x11) = 0;
          *(undefined1 *)(puVar16 + -5) = 0;
          uVar21 = puVar16[-2];
          puVar12[4] = puVar16[-1];
          puVar12[3] = uVar21;
        }
        puVar16[-3] = uStack_a0;
        puVar16[-4] = uStack_a8;
        *puVar9 = uStack_b0;
        uStack_a0 = uStack_a0 & 0xffffffffffffff;
        uStack_b0 = uStack_b0 & 0xffffffffffffff00;
        puVar16[-1] = uStack_90;
        puVar16[-2] = uStack_98;
        param_4 = 0;
        puVar13 = puStack_c8;
        goto LAB_10923e110;
      }
    }
    lVar15 = 0;
    uStack_a8 = puVar12[1];
    uStack_b0 = *puVar12;
    uStack_a0 = puVar12[2];
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = 0;
    uStack_90 = puVar12[4];
    uStack_98 = puVar12[3];
    do {
      lVar15 = lVar15 + 0x28;
      lVar8 = lVar15 + (long)puVar12;
      func_0x000107c2abd4(lVar8,&uStack_b0);
    } while (((uint)lVar8 >> 7 & 1) != 0);
    puVar7 = (ulong *)((long)puVar12 + lVar15);
    puVar11 = puStack_c8;
    if (lVar15 == 0x28) {
      do {
        if (puVar11 <= puVar7) break;
        puVar11 = puVar11 + -5;
        puVar9 = puVar11;
        func_0x000107c2abd4(puVar11,&uStack_b0);
      } while (((uint)puVar9 >> 7 & 1) == 0);
    }
    else {
      do {
        puVar11 = puVar11 + -5;
        puVar9 = puVar11;
        func_0x000107c2abd4(puVar11,&uStack_b0);
      } while (((uint)puVar9 >> 7 & 1) == 0);
    }
    puVar13 = puStack_c8;
    puVar16 = puVar7;
    puVar9 = puVar11;
    if (puVar7 < puVar11) {
      do {
        FUN_10923d61c(puVar16,puVar9);
        do {
          puVar16 = puVar16 + 5;
          puVar10 = puVar16;
          func_0x000107c2abd4(puVar16,&uStack_b0);
        } while (((uint)puVar10 >> 7 & 1) != 0);
        do {
          puVar9 = puVar9 + -5;
          puVar10 = puVar9;
          func_0x000107c2abd4(puVar9,&uStack_b0);
        } while (((uint)puVar10 >> 7 & 1) == 0);
      } while (puVar16 < puVar9);
    }
    puVar9 = puVar16 + -5;
    if (puVar9 != puVar12) {
      if (*(char *)((long)puVar12 + 0x17) < '\0') {
        __ZdlPv(*puVar12);
      }
      uVar22 = puVar16[-4];
      uVar21 = *puVar9;
      puVar12[2] = puVar16[-3];
      puVar12[1] = uVar22;
      *puVar12 = uVar21;
      *(undefined1 *)((long)puVar16 + -0x11) = 0;
      *(undefined1 *)(puVar16 + -5) = 0;
      uVar21 = puVar16[-2];
      puVar12[4] = puVar16[-1];
      puVar12[3] = uVar21;
    }
    puVar16[-3] = uStack_a0;
    puVar16[-4] = uStack_a8;
    *puVar9 = uStack_b0;
    uStack_a0 = uStack_a0 & 0xffffffffffffff;
    uStack_b0 = uStack_b0 & 0xffffffffffffff00;
    puVar16[-1] = uStack_90;
    puVar16[-2] = uStack_98;
    if (puVar7 < puVar11) goto LAB_10923e37c;
    puVar11 = puVar12;
    FUN_10923ed68(puVar12,puVar9);
    puVar7 = puVar16;
    param_2 = puVar13;
    FUN_10923ed68();
    if ((int)puVar7 == 0) goto code_r0x00010923e378;
  } while (((ulong)puVar11 & 1) == 0);
  goto LAB_10923eb64;
LAB_10923e5d8:
  do {
    puVar14 = puVar16;
    puVar7 = puVar14;
    param_2 = puVar17;
    func_0x000107c2abd4();
    if (((uint)puVar7 >> 7 & 1) != 0) {
      uStack_a8 = puVar14[1];
      uStack_b0 = *puVar14;
      uStack_a0 = puVar14[2];
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = 0;
      uStack_90 = puVar17[9];
      uStack_98 = puVar17[8];
      lVar8 = lVar15;
      do {
        lVar18 = lVar8;
        puVar1 = (undefined8 *)((long)puVar12 + lVar18);
        if (*(char *)((long)puVar1 + 0x3f) < '\0') {
          puVar7 = (ulong *)puVar1[5];
          __ZdlPv();
        }
        puVar1[6] = puVar1[1];
        puVar1[5] = *puVar1;
        puVar1[7] = puVar1[2];
        *(undefined1 *)((long)puVar1 + 0x17) = 0;
        *(undefined1 *)puVar1 = 0;
        puVar1[9] = puVar1[4];
        puVar1[8] = puVar1[3];
        puVar17 = puVar12;
        if (lVar18 == 0) goto LAB_10923e670;
        puVar7 = &uStack_b0;
        param_2 = (ulong *)(lVar18 + -0x28 + (long)puVar12);
        func_0x000107c2abd4();
        lVar8 = lVar18 + -0x28;
      } while (((uint)puVar7 >> 7 & 1) != 0);
      puVar17 = (ulong *)((long)puVar12 + lVar18);
LAB_10923e670:
      if (*(char *)((long)puVar17 + 0x17) < '\0') {
        puVar7 = (ulong *)*puVar17;
        __ZdlPv();
      }
      puVar17[2] = uStack_a0;
      puVar17[1] = uStack_a8;
      *puVar17 = uStack_b0;
      *(ulong *)((long)puVar12 + lVar18 + 0x20) = uStack_90;
      *(ulong *)((long)puVar12 + lVar18 + 0x18) = uStack_98;
      puVar9 = puStack_c8;
    }
    lVar15 = lVar15 + 0x28;
    puVar16 = puVar14 + 5;
    puVar17 = puVar14;
  } while (puVar14 + 5 != puVar9);
  goto LAB_10923eb64;
code_r0x00010923e378:
  if (((ulong)puVar11 & 1) == 0) {
LAB_10923e37c:
    param_3 = puVar17;
    FUN_10923e0b4();
    param_4 = 0;
    puVar7 = puVar12;
    param_2 = puVar9;
  }
  goto LAB_10923e110;
LAB_10923e6c8:
  do {
    if ((long)uVar25 <= (long)uVar19) {
      uVar27 = uVar25 << 1 | 1;
      puVar7 = puVar12 + uVar27 * 5;
      uVar26 = uVar25 * 2 + 2;
      puVar9 = puVar7;
      uVar20 = uVar27;
      if ((long)uVar26 < (long)uVar21) {
        puVar17 = puVar7;
        func_0x000107c2abd4(puVar7,puVar7 + 5);
        puVar9 = puVar7 + 5;
        uVar20 = uVar26;
        if (-1 < (char)puVar17) {
          puVar9 = puVar7;
          uVar20 = uVar27;
        }
      }
      puVar17 = puVar12 + uVar25 * 5;
      puVar7 = puVar9;
      param_2 = puVar17;
      func_0x000107c2abd4();
      if (((uint)puVar7 >> 7 & 1) == 0) {
        uStack_a8 = puVar17[1];
        uStack_b0 = *puVar17;
        uStack_a0 = puVar17[2];
        puVar17[1] = 0;
        puVar17[2] = 0;
        *puVar17 = 0;
        uStack_90 = puVar17[4];
        uStack_98 = puVar17[3];
        do {
          puVar16 = puVar9;
          if (*(char *)((long)puVar17 + 0x17) < '\0') {
            puVar7 = (ulong *)*puVar17;
            __ZdlPv();
          }
          uVar27 = puVar16[1];
          uVar26 = *puVar16;
          puVar17[2] = puVar16[2];
          puVar17[1] = uVar27;
          *puVar17 = uVar26;
          *(undefined1 *)((long)puVar16 + 0x17) = 0;
          *(undefined1 *)puVar16 = 0;
          uVar26 = puVar16[3];
          puVar17[4] = puVar16[4];
          puVar17[3] = uVar26;
          puVar9 = puVar16;
          if ((long)uVar19 < (long)uVar20) break;
          uVar27 = uVar20 << 1 | 1;
          puVar7 = puVar12 + uVar27 * 5;
          uVar26 = uVar20 * 2 + 2;
          puVar9 = puVar7;
          uVar20 = uVar27;
          if ((long)uVar26 < (long)uVar21) {
            puVar17 = puVar7;
            func_0x000107c2abd4(puVar7,puVar7 + 5);
            puVar9 = puVar7 + 5;
            uVar20 = uVar26;
            if (-1 < (char)puVar17) {
              puVar9 = puVar7;
              uVar20 = uVar27;
            }
          }
          param_2 = &uStack_b0;
          puVar7 = puVar9;
          func_0x000107c2abd4();
          puVar17 = puVar16;
        } while (((uint)puVar7 >> 7 & 1) == 0);
        if (*(char *)((long)puVar16 + 0x17) < '\0') {
          puVar7 = (ulong *)*puVar16;
          __ZdlPv();
        }
        puVar16[2] = uStack_a0;
        puVar16[1] = uStack_a8;
        *puVar16 = uStack_b0;
        puVar16[4] = uStack_90;
        puVar16[3] = uStack_98;
      }
    }
    bVar3 = uVar25 != 0;
    uVar25 = uVar25 - 1;
  } while (bVar3);
  lVar15 = (uVar22 >> 3) * -0x3333333333333333;
  puVar16 = puStack_c8;
  do {
    puStack_d0 = (ulong *)*puVar12;
    uStack_88 = (undefined7)puVar12[1];
    uStack_81 = (undefined1)*(undefined8 *)((long)puVar12 + 0xf);
    uStack_80 = (undefined7)((ulong)*(undefined8 *)((long)puVar12 + 0xf) >> 8);
    puStack_c8 = (ulong *)CONCAT44(puStack_c8._4_4_,(uint)*(byte *)((long)puVar12 + 0x17));
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[2] = 0;
    uStack_b8 = puVar12[4];
    uStack_c0 = puVar12[3];
    puVar13 = puVar12;
    puVar11 = (ulong *)0x0;
    do {
      puVar10 = puVar13 + (long)puVar11 * 5 + 5;
      puVar2 = (ulong *)((long)puVar11 << 1 | 1);
      puVar17 = (ulong *)((long)puVar11 * 2 + 2);
      puVar23 = puVar2;
      puVar14 = puVar10;
      if ((long)puVar17 < lVar15) {
        puVar9 = puVar13 + (long)puVar11 * 5 + 10;
        puVar7 = puVar10;
        param_2 = puVar9;
        func_0x000107c2abd4();
        puVar23 = puVar17;
        puVar14 = puVar9;
        if (-1 < (char)puVar7) {
          puVar23 = puVar2;
          puVar14 = puVar10;
        }
      }
      if (*(char *)((long)puVar13 + 0x17) < '\0') {
        puVar7 = (ulong *)*puVar13;
        __ZdlPv();
      }
      uVar22 = puVar14[1];
      uVar21 = *puVar14;
      puVar13[2] = puVar14[2];
      puVar13[1] = uVar22;
      *puVar13 = uVar21;
      *(undefined1 *)((long)puVar14 + 0x17) = 0;
      *(undefined1 *)puVar14 = 0;
      uVar21 = puVar14[3];
      puVar13[4] = puVar14[4];
      puVar13[3] = uVar21;
      puVar13 = puVar14;
      puVar11 = puVar23;
    } while ((long)puVar23 <= (long)(lVar15 - 2U >> 1));
    puVar13 = puVar16 + -5;
    if (puVar14 == puVar13) {
      if (*(char *)((long)puVar14 + 0x17) < '\0') {
        puVar7 = (ulong *)*puVar14;
        __ZdlPv();
      }
      *puVar14 = (ulong)puStack_d0;
      puVar14[1] = CONCAT17(uStack_81,uStack_88);
      *(ulong *)((long)puVar14 + 0xf) = CONCAT71(uStack_80,uStack_81);
      *(char *)((long)puVar14 + 0x17) = (char)puStack_c8;
      puVar14[4] = uStack_b8;
      puVar14[3] = uStack_c0;
    }
    else {
      if (*(char *)((long)puVar14 + 0x17) < '\0') {
        puVar7 = (ulong *)*puVar14;
        __ZdlPv();
      }
      uVar22 = puVar16[-4];
      uVar21 = *puVar13;
      puVar14[2] = puVar16[-3];
      puVar14[1] = uVar22;
      *puVar14 = uVar21;
      *(undefined1 *)((long)puVar16 + -0x11) = 0;
      *(undefined1 *)(puVar16 + -5) = 0;
      uVar21 = puVar16[-2];
      puVar14[4] = puVar16[-1];
      puVar14[3] = uVar21;
      puVar16[-5] = (ulong)puStack_d0;
      *(ulong *)((long)puVar16 + -0x19) = CONCAT71(uStack_80,uStack_81);
      puVar16[-4] = CONCAT17(uStack_81,uStack_88);
      *(char *)((long)puVar16 + -0x11) = (char)puStack_c8;
      puVar16[-1] = uStack_b8;
      puVar16[-2] = uStack_c0;
      uVar21 = (long)puVar14 + (0x28 - (long)puVar12);
      if (0x28 < (long)uVar21) {
        puVar16 = (ulong *)((uVar21 >> 3) * -0x3333333333333333 - 2 >> 1);
        puVar17 = puVar12 + (long)puVar16 * 5;
        puVar7 = puVar17;
        param_2 = puVar14;
        func_0x000107c2abd4();
        puVar9 = puVar16;
        if (((uint)puVar7 >> 7 & 1) != 0) {
          uStack_a8 = puVar14[1];
          uStack_b0 = *puVar14;
          uStack_a0 = puVar14[2];
          puVar14[1] = 0;
          puVar14[2] = 0;
          *puVar14 = 0;
          uStack_90 = puVar14[4];
          uStack_98 = puVar14[3];
          puVar11 = puVar14;
          do {
            puVar14 = puVar17;
            if (*(char *)((long)puVar11 + 0x17) < '\0') {
              puVar7 = (ulong *)*puVar11;
              __ZdlPv();
            }
            uVar22 = puVar14[1];
            uVar21 = *puVar14;
            puVar11[2] = puVar14[2];
            puVar11[1] = uVar22;
            *puVar11 = uVar21;
            *(undefined1 *)((long)puVar14 + 0x17) = 0;
            *(undefined1 *)puVar14 = 0;
            uVar21 = puVar14[3];
            puVar11[4] = puVar14[4];
            puVar11[3] = uVar21;
            puVar9 = (ulong *)0x0;
            puVar17 = puVar14;
            if (puVar16 == (ulong *)0x0) break;
            puVar16 = (ulong *)((long)puVar16 - 1U >> 1);
            puVar17 = puVar12 + (long)puVar16 * 5;
            param_2 = &uStack_b0;
            puVar7 = puVar17;
            func_0x000107c2abd4();
            puVar9 = puVar16;
            puVar11 = puVar14;
          } while (((uint)puVar7 >> 7 & 1) != 0);
          if (*(char *)((long)puVar14 + 0x17) < '\0') {
            puVar7 = (ulong *)*puVar14;
            __ZdlPv();
          }
          puVar14[2] = uStack_a0;
          puVar14[1] = uStack_a8;
          *puVar14 = uStack_b0;
          puVar14[4] = uStack_90;
          puVar14[3] = uStack_98;
        }
      }
    }
    bVar3 = 2 < lVar15;
    lVar15 = lVar15 + -1;
    puVar16 = puVar13;
  } while (bVar3);
LAB_10923eb64:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_10923eba0;
  puVar13 = param_2;
  puVar16 = param_3;
  func_0x000107c2abd4(param_2,puVar7);
  puVar11 = param_3;
  func_0x000107c2abd4(param_3,param_2);
  if (((uint)puVar13 >> 7 & 1) != 0) {
    if (-1 < (char)puVar11) {
      FUN_10923d61c(puVar7,param_2);
      puVar13 = param_3;
      func_0x000107c2abd4(param_3,param_2);
      puVar7 = param_2;
      if (((uint)puVar13 >> 7 & 1) == 0) {
        return;
      }
    }
LAB_10923ec44:
    puVar5 = auStack_e0;
    do {
      *(ulong **)(puVar5 + -0x30) = puVar17;
      *(ulong **)(puVar5 + -0x28) = puVar14;
      *(ulong **)(puVar5 + -0x20) = puVar9;
      *(ulong **)(puVar5 + -0x18) = puVar12;
      *(undefined1 ***)(puVar5 + -0x10) = ppuVar24;
      *(code **)(puVar5 + -8) = pcStack_e8;
      *(undefined8 *)(puVar5 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      uVar21 = *puVar7;
      *(ulong *)(puVar5 + -0x48) = puVar7[1];
      *(undefined8 *)(puVar5 + -0x41) = *(undefined8 *)((long)puVar7 + 0xf);
      bVar4 = *(byte *)((long)puVar7 + 0x17);
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      uVar22 = puVar7[3];
      *(ulong *)(puVar5 + -0x58) = puVar7[4];
      *(ulong *)(puVar5 + -0x60) = uVar22;
      uVar22 = param_3[2];
      uVar25 = *param_3;
      puVar7[1] = param_3[1];
      *puVar7 = uVar25;
      puVar7[2] = uVar22;
      *(undefined1 *)((long)param_3 + 0x17) = 0;
      *(undefined1 *)param_3 = 0;
      uVar22 = param_3[3];
      puVar7[4] = param_3[4];
      puVar7[3] = uVar22;
      puVar9 = param_3;
      puVar13 = puVar16;
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        puVar7 = (ulong *)*param_3;
        __ZdlPv();
        puVar13 = puVar16;
      }
      uVar22 = *(ulong *)(puVar5 + -0x48);
      *param_3 = uVar21;
      param_3[1] = uVar22;
      *(undefined8 *)((long)param_3 + 0xf) = *(undefined8 *)(puVar5 + -0x41);
      *(byte *)((long)param_3 + 0x17) = bVar4;
      uVar22 = *(ulong *)(puVar5 + -0x60);
      param_3[4] = *(ulong *)(puVar5 + -0x58);
      param_3[3] = uVar22;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar5 + -0x38)) {
        return;
      }
      ___stack_chk_fail();
      *(ulong **)(puVar5 + -0x90) = puVar17;
      *(ulong *)(puVar5 + -0x88) = (ulong)bVar4;
      *(ulong *)(puVar5 + -0x80) = uVar21;
      *(ulong **)(puVar5 + -0x78) = param_3;
      *(undefined1 **)(puVar5 + -0x70) = puVar5 + -0x10;
      *(undefined8 *)(puVar5 + -0x68) = 0x10923d6e4;
      puVar17 = puVar9;
      puVar16 = puVar13;
      func_0x000107c2abd4(puVar9,puVar7);
      puVar12 = puVar13;
      func_0x000107c2abd4(puVar13,puVar9);
      if (((uint)puVar17 >> 7 & 1) == 0) {
        if (-1 < (char)puVar12) {
          return;
        }
        FUN_10923d61c(puVar9,puVar13);
        puVar17 = puVar9;
        func_0x000107c2abd4(puVar9,puVar7);
        uVar6 = (uint)puVar17;
        puVar13 = puVar9;
joined_r0x00010923d76c:
        if ((uVar6 >> 7 & 1) == 0) {
          return;
        }
      }
      else if (-1 < (char)puVar12) {
        FUN_10923d61c(puVar7,puVar9);
        puVar7 = puVar13;
        func_0x000107c2abd4(puVar13,puVar9);
        uVar6 = (uint)puVar7;
        puVar7 = puVar9;
        goto joined_r0x00010923d76c;
      }
      ppuVar24 = *(undefined1 ***)(puVar5 + -0x70);
      pcStack_e8 = *(code **)(puVar5 + -0x68);
      puVar9 = *(ulong **)(puVar5 + -0x80);
      puVar12 = *(ulong **)(puVar5 + -0x78);
      puVar17 = *(ulong **)(puVar5 + -0x90);
      puVar14 = *(ulong **)(puVar5 + -0x88);
      puVar5 = puVar5 + -0x60;
      param_3 = puVar13;
    } while( true );
  }
  if ((char)puVar11 < '\0') {
    FUN_10923d61c(param_2,param_3);
    puVar13 = param_2;
    func_0x000107c2abd4(param_2,puVar7);
    param_3 = param_2;
    if (((uint)puVar13 >> 7 & 1) != 0) goto LAB_10923ec44;
  }
  return;
}



/* Entry: 10923e0b4; end: 10923eb9f;  */

/* WARNING: Removing unreachable block (ram,0x00010923e4b0) */
/* WARNING: Removing unreachable block (ram,0x00010923e318) */
/* WARNING: Removing unreachable block (ram,0x00010923e930) */
/* WARNING: Removing unreachable block (ram,0x00010923e348) */
/* WARNING: Removing unreachable block (ram,0x00010923e4e0) */

void FUN_10923e0b4(ulong *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  byte bVar3;
  undefined1 *puVar4;
  uint uVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  long lVar13;
  ulong *puVar14;
  ulong *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong *puVar21;
  ulong *puVar22;
  undefined1 *puVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  code *pcStack_d8;
  undefined1 auStack_d0 [8];
  ulong *puStack_c8;
  ulong *puStack_c0;
  ulong *puStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  long lStack_68;
  
  puVar23 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_1;
  puVar7 = param_2;
  puVar15 = param_3;
  do {
    puVar12 = puVar7 + -5;
    puStack_c0 = puVar7 + -10;
    puStack_c8 = puVar7 + -0xf;
    puVar11 = puVar7;
    puVar14 = puVar10;
    puStack_b8 = puVar7;
LAB_10923e110:
    puVar10 = puVar14;
    puVar7 = puVar11;
    uVar20 = (long)puVar7 - (long)puVar10;
    uVar19 = ((long)uVar20 >> 3) * -0x3333333333333333;
    if (uVar19 - 2 == 0 || (long)uVar19 < 2) {
      if (uVar19 < 2) break;
      if (uVar19 == 2) {
        param_1 = puVar12;
        param_2 = puVar10;
        func_0x000107c2abd4();
        puVar14 = puVar12;
        if (((uint)param_1 >> 7 & 1) != 0) {
LAB_10923e534:
          param_2 = puVar14;
          param_1 = puVar10;
          FUN_10923d61c();
        }
        break;
      }
    }
    else {
      if (uVar19 == 3) {
        param_2 = puVar10 + 5;
        param_1 = puVar10;
        param_3 = puVar12;
        FUN_10923eba0();
        break;
      }
      if (uVar19 == 4) {
        param_3 = puVar10 + 10;
        FUN_10923eba0(puVar10,puVar10 + 5);
        param_2 = puVar10 + 10;
        param_1 = puVar12;
        func_0x000107c2abd4();
        if (((uint)param_1 >> 7 & 1) != 0) {
          FUN_10923d61c(puVar10 + 10,puVar12);
          param_1 = puVar10 + 10;
          param_2 = puVar10 + 5;
          func_0x000107c2abd4();
          if (((uint)param_1 >> 7 & 1) != 0) {
            FUN_10923d61c(puVar10 + 5,puVar10 + 10);
            param_1 = puVar10 + 5;
            param_2 = puVar10;
            func_0x000107c2abd4();
            if (((uint)param_1 >> 7 & 1) != 0) {
              puVar14 = puVar10 + 5;
              goto LAB_10923e534;
            }
          }
        }
        break;
      }
      if (uVar19 == 5) {
        param_2 = puVar10 + 5;
        param_3 = puVar10 + 10;
        param_1 = puVar10;
        FUN_10923ec54();
        break;
      }
    }
    if ((long)uVar20 < 0x3c0) {
      if ((param_4 & 1) == 0) {
        if ((puVar10 != puVar7) && (puVar10 + 5 != puVar7)) {
          puVar14 = puVar10 + -5;
          puVar11 = puVar10 + 5;
          puVar12 = puVar10;
          do {
            puVar10 = puVar11;
            param_1 = puVar10;
            param_2 = puVar12;
            func_0x000107c2abd4();
            if (((uint)param_1 >> 7 & 1) != 0) {
              uStack_98 = puVar10[1];
              uStack_a0 = *puVar10;
              uStack_90 = puVar10[2];
              puVar10[1] = 0;
              puVar10[2] = 0;
              *puVar10 = 0;
              uStack_80 = puVar12[9];
              uStack_88 = puVar12[8];
              puVar15 = puVar14;
              do {
                puVar12 = puVar15;
                if (*(char *)((long)puVar12 + 0x67) < '\0') {
                  __ZdlPv(puVar12[10]);
                }
                puVar12[0xb] = puVar12[6];
                puVar12[10] = puVar12[5];
                puVar12[0xc] = puVar12[7];
                *(undefined1 *)((long)puVar12 + 0x3f) = 0;
                *(undefined1 *)(puVar12 + 5) = 0;
                puVar12[0xe] = puVar12[9];
                puVar12[0xd] = puVar12[8];
                param_1 = &uStack_a0;
                param_2 = puVar12;
                func_0x000107c2abd4();
                puVar15 = puVar12 + -5;
              } while (((uint)param_1 >> 7 & 1) != 0);
              if (*(char *)((long)puVar12 + 0x3f) < '\0') {
                param_1 = (ulong *)puVar12[5];
                __ZdlPv();
              }
              puVar12[7] = uStack_90;
              puVar12[6] = uStack_98;
              puVar12[5] = uStack_a0;
              puVar12[9] = uStack_80;
              puVar12[8] = uStack_88;
            }
            puVar14 = puVar14 + 5;
            puVar11 = puVar10 + 5;
            puVar12 = puVar10;
            puVar15 = &uStack_a0;
          } while (puVar10 + 5 != puVar7);
        }
        break;
      }
      if ((puVar10 == puVar7) || (puVar10 + 5 == puVar7)) break;
      lVar13 = 0;
      puVar14 = puVar10 + 5;
      puVar15 = puVar10;
      goto LAB_10923e5d8;
    }
    if (puVar15 == (ulong *)0x0) {
      if (puVar10 == puVar7) break;
      uVar17 = uVar19 - 2 >> 1;
      uVar24 = uVar17;
      goto LAB_10923e6c8;
    }
    puVar14 = puVar10 + (uVar19 >> 1) * 5;
    if (uVar20 < 0x1401) {
      param_3 = puVar12;
      FUN_10923eba0(puVar14,puVar10);
    }
    else {
      FUN_10923eba0(puVar10,puVar14,puVar12);
      FUN_10923eba0(puVar10 + 5,puVar14 + -5,puStack_c0);
      FUN_10923eba0(puVar10 + 10,puVar14 + 5,puStack_c8);
      param_3 = puVar14 + 5;
      FUN_10923eba0(puVar14 + -5,puVar14);
      FUN_10923d8ac(puVar10,puVar14);
    }
    puVar15 = (ulong *)((long)puVar15 + -1);
    if ((param_4 & 1) == 0) {
      puVar14 = puVar10 + -5;
      func_0x000107c2abd4(puVar14,puVar10);
      if (((uint)puVar14 >> 7 & 1) == 0) {
        uStack_98 = puVar10[1];
        uStack_a0 = *puVar10;
        uStack_90 = puVar10[2];
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = 0;
        uStack_80 = puVar10[4];
        uStack_88 = puVar10[3];
        param_1 = &uStack_a0;
        param_2 = puVar12;
        func_0x000107c2abd4();
        puVar14 = puVar10;
        if (((uint)param_1 >> 7 & 1) == 0) {
          do {
            puVar14 = puVar14 + 5;
            if (puVar7 <= puVar14) break;
            param_1 = &uStack_a0;
            param_2 = puVar14;
            func_0x000107c2abd4();
          } while (((uint)param_1 >> 7 & 1) == 0);
        }
        else {
          do {
            puVar14 = puVar14 + 5;
            param_1 = &uStack_a0;
            param_2 = puVar14;
            func_0x000107c2abd4();
          } while (((uint)param_1 >> 7 & 1) == 0);
        }
        if (puVar14 < puVar7) {
          do {
            puVar7 = puVar7 + -5;
            param_1 = &uStack_a0;
            param_2 = puVar7;
            func_0x000107c2abd4();
          } while (((uint)param_1 >> 7 & 1) != 0);
        }
        while (puVar14 < puVar7) {
          FUN_10923d61c(puVar14,puVar7);
          do {
            puVar14 = puVar14 + 5;
            puVar11 = &uStack_a0;
            func_0x000107c2abd4(puVar11,puVar14);
          } while (((uint)puVar11 >> 7 & 1) == 0);
          do {
            puVar7 = puVar7 + -5;
            param_1 = &uStack_a0;
            param_2 = puVar7;
            func_0x000107c2abd4();
          } while (((uint)param_1 >> 7 & 1) != 0);
        }
        puVar7 = puVar14 + -5;
        if (puVar7 != puVar10) {
          if (*(char *)((long)puVar10 + 0x17) < '\0') {
            param_1 = (ulong *)*puVar10;
            __ZdlPv();
          }
          uVar20 = puVar14[-4];
          uVar19 = *puVar7;
          puVar10[2] = puVar14[-3];
          puVar10[1] = uVar20;
          *puVar10 = uVar19;
          *(undefined1 *)((long)puVar14 + -0x11) = 0;
          *(undefined1 *)(puVar14 + -5) = 0;
          uVar19 = puVar14[-2];
          puVar10[4] = puVar14[-1];
          puVar10[3] = uVar19;
        }
        puVar14[-3] = uStack_90;
        puVar14[-4] = uStack_98;
        *puVar7 = uStack_a0;
        uStack_90 = uStack_90 & 0xffffffffffffff;
        uStack_a0 = uStack_a0 & 0xffffffffffffff00;
        puVar14[-1] = uStack_80;
        puVar14[-2] = uStack_88;
        param_4 = 0;
        puVar11 = puStack_b8;
        goto LAB_10923e110;
      }
    }
    lVar13 = 0;
    uStack_98 = puVar10[1];
    uStack_a0 = *puVar10;
    uStack_90 = puVar10[2];
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = 0;
    uStack_80 = puVar10[4];
    uStack_88 = puVar10[3];
    do {
      lVar13 = lVar13 + 0x28;
      lVar6 = lVar13 + (long)puVar10;
      func_0x000107c2abd4(lVar6,&uStack_a0);
    } while (((uint)lVar6 >> 7 & 1) != 0);
    puVar9 = (ulong *)((long)puVar10 + lVar13);
    puVar21 = puStack_b8;
    if (lVar13 == 0x28) {
      do {
        if (puVar21 <= puVar9) break;
        puVar21 = puVar21 + -5;
        puVar7 = puVar21;
        func_0x000107c2abd4(puVar21,&uStack_a0);
      } while (((uint)puVar7 >> 7 & 1) == 0);
    }
    else {
      do {
        puVar21 = puVar21 + -5;
        puVar7 = puVar21;
        func_0x000107c2abd4(puVar21,&uStack_a0);
      } while (((uint)puVar7 >> 7 & 1) == 0);
    }
    puVar11 = puStack_b8;
    puVar14 = puVar9;
    puVar7 = puVar21;
    if (puVar9 < puVar21) {
      do {
        FUN_10923d61c(puVar14,puVar7);
        do {
          puVar14 = puVar14 + 5;
          puVar8 = puVar14;
          func_0x000107c2abd4(puVar14,&uStack_a0);
        } while (((uint)puVar8 >> 7 & 1) != 0);
        do {
          puVar7 = puVar7 + -5;
          puVar8 = puVar7;
          func_0x000107c2abd4(puVar7,&uStack_a0);
        } while (((uint)puVar8 >> 7 & 1) == 0);
      } while (puVar14 < puVar7);
    }
    puVar7 = puVar14 + -5;
    if (puVar7 != puVar10) {
      if (*(char *)((long)puVar10 + 0x17) < '\0') {
        __ZdlPv(*puVar10);
      }
      uVar20 = puVar14[-4];
      uVar19 = *puVar7;
      puVar10[2] = puVar14[-3];
      puVar10[1] = uVar20;
      *puVar10 = uVar19;
      *(undefined1 *)((long)puVar14 + -0x11) = 0;
      *(undefined1 *)(puVar14 + -5) = 0;
      uVar19 = puVar14[-2];
      puVar10[4] = puVar14[-1];
      puVar10[3] = uVar19;
    }
    puVar14[-3] = uStack_90;
    puVar14[-4] = uStack_98;
    *puVar7 = uStack_a0;
    uStack_90 = uStack_90 & 0xffffffffffffff;
    uStack_a0 = uStack_a0 & 0xffffffffffffff00;
    puVar14[-1] = uStack_80;
    puVar14[-2] = uStack_88;
    if (puVar9 < puVar21) goto LAB_10923e37c;
    puVar9 = puVar10;
    FUN_10923ed68(puVar10,puVar7);
    param_1 = puVar14;
    param_2 = puVar11;
    FUN_10923ed68();
    if ((int)param_1 == 0) goto code_r0x00010923e378;
  } while (((ulong)puVar9 & 1) == 0);
  goto LAB_10923eb64;
LAB_10923e5d8:
  do {
    puVar12 = puVar14;
    param_1 = puVar12;
    param_2 = puVar15;
    func_0x000107c2abd4();
    if (((uint)param_1 >> 7 & 1) != 0) {
      uStack_98 = puVar12[1];
      uStack_a0 = *puVar12;
      uStack_90 = puVar12[2];
      puVar12[1] = 0;
      puVar12[2] = 0;
      *puVar12 = 0;
      uStack_80 = puVar15[9];
      uStack_88 = puVar15[8];
      lVar6 = lVar13;
      do {
        lVar16 = lVar6;
        puVar1 = (undefined8 *)((long)puVar10 + lVar16);
        if (*(char *)((long)puVar1 + 0x3f) < '\0') {
          param_1 = (ulong *)puVar1[5];
          __ZdlPv();
        }
        puVar1[6] = puVar1[1];
        puVar1[5] = *puVar1;
        puVar1[7] = puVar1[2];
        *(undefined1 *)((long)puVar1 + 0x17) = 0;
        *(undefined1 *)puVar1 = 0;
        puVar1[9] = puVar1[4];
        puVar1[8] = puVar1[3];
        puVar15 = puVar10;
        if (lVar16 == 0) goto LAB_10923e670;
        param_1 = &uStack_a0;
        param_2 = (ulong *)(lVar16 + -0x28 + (long)puVar10);
        func_0x000107c2abd4();
        lVar6 = lVar16 + -0x28;
      } while (((uint)param_1 >> 7 & 1) != 0);
      puVar15 = (ulong *)((long)puVar10 + lVar16);
LAB_10923e670:
      if (*(char *)((long)puVar15 + 0x17) < '\0') {
        param_1 = (ulong *)*puVar15;
        __ZdlPv();
      }
      puVar15[2] = uStack_90;
      puVar15[1] = uStack_98;
      *puVar15 = uStack_a0;
      *(ulong *)((long)puVar10 + lVar16 + 0x20) = uStack_80;
      *(ulong *)((long)puVar10 + lVar16 + 0x18) = uStack_88;
      puVar7 = puStack_b8;
    }
    lVar13 = lVar13 + 0x28;
    puVar14 = puVar12 + 5;
    puVar15 = puVar12;
  } while (puVar12 + 5 != puVar7);
  goto LAB_10923eb64;
code_r0x00010923e378:
  if (((ulong)puVar9 & 1) == 0) {
LAB_10923e37c:
    param_3 = puVar15;
    FUN_10923e0b4();
    param_4 = 0;
    param_1 = puVar10;
    param_2 = puVar7;
  }
  goto LAB_10923e110;
LAB_10923e6c8:
  do {
    if ((long)uVar24 <= (long)uVar17) {
      uVar26 = uVar24 << 1 | 1;
      puVar15 = puVar10 + uVar26 * 5;
      uVar25 = uVar24 * 2 + 2;
      puVar7 = puVar15;
      uVar18 = uVar26;
      if ((long)uVar25 < (long)uVar19) {
        puVar14 = puVar15;
        func_0x000107c2abd4(puVar15,puVar15 + 5);
        puVar7 = puVar15 + 5;
        uVar18 = uVar25;
        if (-1 < (char)puVar14) {
          puVar7 = puVar15;
          uVar18 = uVar26;
        }
      }
      puVar15 = puVar10 + uVar24 * 5;
      param_1 = puVar7;
      param_2 = puVar15;
      func_0x000107c2abd4();
      if (((uint)param_1 >> 7 & 1) == 0) {
        uStack_98 = puVar15[1];
        uStack_a0 = *puVar15;
        uStack_90 = puVar15[2];
        puVar15[1] = 0;
        puVar15[2] = 0;
        *puVar15 = 0;
        uStack_80 = puVar15[4];
        uStack_88 = puVar15[3];
        do {
          puVar14 = puVar7;
          if (*(char *)((long)puVar15 + 0x17) < '\0') {
            param_1 = (ulong *)*puVar15;
            __ZdlPv();
          }
          uVar26 = puVar14[1];
          uVar25 = *puVar14;
          puVar15[2] = puVar14[2];
          puVar15[1] = uVar26;
          *puVar15 = uVar25;
          *(undefined1 *)((long)puVar14 + 0x17) = 0;
          *(undefined1 *)puVar14 = 0;
          uVar25 = puVar14[3];
          puVar15[4] = puVar14[4];
          puVar15[3] = uVar25;
          puVar7 = puVar14;
          if ((long)uVar17 < (long)uVar18) break;
          uVar26 = uVar18 << 1 | 1;
          puVar15 = puVar10 + uVar26 * 5;
          uVar25 = uVar18 * 2 + 2;
          puVar7 = puVar15;
          uVar18 = uVar26;
          if ((long)uVar25 < (long)uVar19) {
            puVar12 = puVar15;
            func_0x000107c2abd4(puVar15,puVar15 + 5);
            puVar7 = puVar15 + 5;
            uVar18 = uVar25;
            if (-1 < (char)puVar12) {
              puVar7 = puVar15;
              uVar18 = uVar26;
            }
          }
          param_2 = &uStack_a0;
          param_1 = puVar7;
          func_0x000107c2abd4();
          puVar15 = puVar14;
        } while (((uint)param_1 >> 7 & 1) == 0);
        if (*(char *)((long)puVar14 + 0x17) < '\0') {
          param_1 = (ulong *)*puVar14;
          __ZdlPv();
        }
        puVar14[2] = uStack_90;
        puVar14[1] = uStack_98;
        *puVar14 = uStack_a0;
        puVar14[4] = uStack_80;
        puVar14[3] = uStack_88;
      }
    }
    bVar2 = uVar24 != 0;
    uVar24 = uVar24 - 1;
  } while (bVar2);
  lVar13 = (uVar20 >> 3) * -0x3333333333333333;
  puVar14 = puStack_b8;
  do {
    puStack_c0 = (ulong *)*puVar10;
    uStack_78 = (undefined7)puVar10[1];
    uStack_71 = (undefined1)*(undefined8 *)((long)puVar10 + 0xf);
    uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar10 + 0xf) >> 8);
    puStack_b8 = (ulong *)CONCAT44(puStack_b8._4_4_,(uint)*(byte *)((long)puVar10 + 0x17));
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    uStack_a8 = puVar10[4];
    uStack_b0 = puVar10[3];
    puVar11 = puVar10;
    puVar9 = (ulong *)0x0;
    do {
      puVar21 = puVar11 + (long)puVar9 * 5 + 5;
      puVar8 = (ulong *)((long)puVar9 << 1 | 1);
      puVar15 = (ulong *)((long)puVar9 * 2 + 2);
      puVar22 = puVar8;
      puVar12 = puVar21;
      if ((long)puVar15 < lVar13) {
        puVar7 = puVar11 + (long)puVar9 * 5 + 10;
        param_1 = puVar21;
        param_2 = puVar7;
        func_0x000107c2abd4();
        puVar22 = puVar15;
        puVar12 = puVar7;
        if (-1 < (char)param_1) {
          puVar22 = puVar8;
          puVar12 = puVar21;
        }
      }
      if (*(char *)((long)puVar11 + 0x17) < '\0') {
        param_1 = (ulong *)*puVar11;
        __ZdlPv();
      }
      uVar20 = puVar12[1];
      uVar19 = *puVar12;
      puVar11[2] = puVar12[2];
      puVar11[1] = uVar20;
      *puVar11 = uVar19;
      *(undefined1 *)((long)puVar12 + 0x17) = 0;
      *(undefined1 *)puVar12 = 0;
      uVar19 = puVar12[3];
      puVar11[4] = puVar12[4];
      puVar11[3] = uVar19;
      puVar11 = puVar12;
      puVar9 = puVar22;
    } while ((long)puVar22 <= (long)(lVar13 - 2U >> 1));
    puVar11 = puVar14 + -5;
    if (puVar12 == puVar11) {
      if (*(char *)((long)puVar12 + 0x17) < '\0') {
        param_1 = (ulong *)*puVar12;
        __ZdlPv();
      }
      *puVar12 = (ulong)puStack_c0;
      puVar12[1] = CONCAT17(uStack_71,uStack_78);
      *(ulong *)((long)puVar12 + 0xf) = CONCAT71(uStack_70,uStack_71);
      *(char *)((long)puVar12 + 0x17) = (char)puStack_b8;
      puVar12[4] = uStack_a8;
      puVar12[3] = uStack_b0;
    }
    else {
      if (*(char *)((long)puVar12 + 0x17) < '\0') {
        param_1 = (ulong *)*puVar12;
        __ZdlPv();
      }
      uVar20 = puVar14[-4];
      uVar19 = *puVar11;
      puVar12[2] = puVar14[-3];
      puVar12[1] = uVar20;
      *puVar12 = uVar19;
      *(undefined1 *)((long)puVar14 + -0x11) = 0;
      *(undefined1 *)(puVar14 + -5) = 0;
      uVar19 = puVar14[-2];
      puVar12[4] = puVar14[-1];
      puVar12[3] = uVar19;
      puVar14[-5] = (ulong)puStack_c0;
      *(ulong *)((long)puVar14 + -0x19) = CONCAT71(uStack_70,uStack_71);
      puVar14[-4] = CONCAT17(uStack_71,uStack_78);
      *(char *)((long)puVar14 + -0x11) = (char)puStack_b8;
      puVar14[-1] = uStack_a8;
      puVar14[-2] = uStack_b0;
      uVar19 = (long)puVar12 + (0x28 - (long)puVar10);
      if (0x28 < (long)uVar19) {
        puVar14 = (ulong *)((uVar19 >> 3) * -0x3333333333333333 - 2 >> 1);
        puVar15 = puVar10 + (long)puVar14 * 5;
        param_1 = puVar15;
        param_2 = puVar12;
        func_0x000107c2abd4();
        puVar7 = puVar14;
        if (((uint)param_1 >> 7 & 1) != 0) {
          uStack_98 = puVar12[1];
          uStack_a0 = *puVar12;
          uStack_90 = puVar12[2];
          puVar12[1] = 0;
          puVar12[2] = 0;
          *puVar12 = 0;
          uStack_80 = puVar12[4];
          uStack_88 = puVar12[3];
          puVar9 = puVar12;
          do {
            puVar12 = puVar15;
            if (*(char *)((long)puVar9 + 0x17) < '\0') {
              param_1 = (ulong *)*puVar9;
              __ZdlPv();
            }
            uVar20 = puVar12[1];
            uVar19 = *puVar12;
            puVar9[2] = puVar12[2];
            puVar9[1] = uVar20;
            *puVar9 = uVar19;
            *(undefined1 *)((long)puVar12 + 0x17) = 0;
            *(undefined1 *)puVar12 = 0;
            uVar19 = puVar12[3];
            puVar9[4] = puVar12[4];
            puVar9[3] = uVar19;
            puVar7 = (ulong *)0x0;
            puVar15 = puVar12;
            if (puVar14 == (ulong *)0x0) break;
            puVar14 = (ulong *)((long)puVar14 - 1U >> 1);
            puVar15 = puVar10 + (long)puVar14 * 5;
            param_2 = &uStack_a0;
            param_1 = puVar15;
            func_0x000107c2abd4();
            puVar7 = puVar14;
            puVar9 = puVar12;
          } while (((uint)param_1 >> 7 & 1) != 0);
          if (*(char *)((long)puVar12 + 0x17) < '\0') {
            param_1 = (ulong *)*puVar12;
            __ZdlPv();
          }
          puVar12[2] = uStack_90;
          puVar12[1] = uStack_98;
          *puVar12 = uStack_a0;
          puVar12[4] = uStack_80;
          puVar12[3] = uStack_88;
        }
      }
    }
    bVar2 = 2 < lVar13;
    lVar13 = lVar13 + -1;
    puVar14 = puVar11;
  } while (bVar2);
LAB_10923eb64:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_10923eba0;
  puVar11 = param_2;
  puVar14 = param_3;
  func_0x000107c2abd4(param_2,param_1);
  puVar9 = param_3;
  func_0x000107c2abd4(param_3,param_2);
  if (((uint)puVar11 >> 7 & 1) != 0) {
    puVar4 = auStack_d0;
    if (-1 < (char)puVar9) {
      FUN_10923d61c(param_1,param_2);
      puVar11 = param_3;
      func_0x000107c2abd4(param_3,param_2);
      puVar4 = auStack_d0;
      param_1 = param_2;
      if (((uint)puVar11 >> 7 & 1) == 0) {
        return;
      }
    }
code_r0x00010923d61c:
    do {
      *(ulong **)(puVar4 + -0x30) = puVar15;
      *(ulong **)(puVar4 + -0x28) = puVar12;
      *(ulong **)(puVar4 + -0x20) = puVar7;
      *(ulong **)(puVar4 + -0x18) = puVar10;
      *(undefined1 **)(puVar4 + -0x10) = puVar23;
      *(code **)(puVar4 + -8) = pcStack_d8;
      *(undefined8 *)(puVar4 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      uVar19 = *param_1;
      *(ulong *)(puVar4 + -0x48) = param_1[1];
      *(undefined8 *)(puVar4 + -0x41) = *(undefined8 *)((long)param_1 + 0xf);
      bVar3 = *(byte *)((long)param_1 + 0x17);
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      uVar20 = param_1[3];
      *(ulong *)(puVar4 + -0x58) = param_1[4];
      *(ulong *)(puVar4 + -0x60) = uVar20;
      uVar20 = param_3[2];
      uVar24 = *param_3;
      param_1[1] = param_3[1];
      *param_1 = uVar24;
      param_1[2] = uVar20;
      *(undefined1 *)((long)param_3 + 0x17) = 0;
      *(undefined1 *)param_3 = 0;
      uVar20 = param_3[3];
      param_1[4] = param_3[4];
      param_1[3] = uVar20;
      puVar7 = param_3;
      puVar11 = puVar14;
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        param_1 = (ulong *)*param_3;
        __ZdlPv();
        puVar11 = puVar14;
      }
      uVar20 = *(ulong *)(puVar4 + -0x48);
      *param_3 = uVar19;
      param_3[1] = uVar20;
      *(undefined8 *)((long)param_3 + 0xf) = *(undefined8 *)(puVar4 + -0x41);
      *(byte *)((long)param_3 + 0x17) = bVar3;
      uVar20 = *(ulong *)(puVar4 + -0x60);
      param_3[4] = *(ulong *)(puVar4 + -0x58);
      param_3[3] = uVar20;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar4 + -0x38)) {
        return;
      }
      ___stack_chk_fail();
      *(ulong **)(puVar4 + -0x90) = puVar15;
      *(ulong *)(puVar4 + -0x88) = (ulong)bVar3;
      *(ulong *)(puVar4 + -0x80) = uVar19;
      *(ulong **)(puVar4 + -0x78) = param_3;
      *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x10;
      *(undefined8 *)(puVar4 + -0x68) = 0x10923d6e4;
      puVar15 = puVar7;
      puVar14 = puVar11;
      func_0x000107c2abd4(puVar7,param_1);
      puVar10 = puVar11;
      func_0x000107c2abd4(puVar11,puVar7);
      if (((uint)puVar15 >> 7 & 1) == 0) {
        if (-1 < (char)puVar10) {
          return;
        }
        FUN_10923d61c(puVar7,puVar11);
        puVar15 = puVar7;
        func_0x000107c2abd4(puVar7,param_1);
        uVar5 = (uint)puVar15;
        puVar11 = puVar7;
joined_r0x00010923d76c:
        if ((uVar5 >> 7 & 1) == 0) {
          return;
        }
      }
      else if (-1 < (char)puVar10) {
        FUN_10923d61c(param_1,puVar7);
        puVar15 = puVar11;
        func_0x000107c2abd4(puVar11,puVar7);
        uVar5 = (uint)puVar15;
        param_1 = puVar7;
        goto joined_r0x00010923d76c;
      }
      puVar23 = *(undefined1 **)(puVar4 + -0x70);
      pcStack_d8 = *(code **)(puVar4 + -0x68);
      puVar7 = *(ulong **)(puVar4 + -0x80);
      puVar10 = *(ulong **)(puVar4 + -0x78);
      puVar15 = *(ulong **)(puVar4 + -0x90);
      puVar12 = *(ulong **)(puVar4 + -0x88);
      puVar4 = puVar4 + -0x60;
      param_3 = puVar11;
    } while( true );
  }
  if ((char)puVar9 < '\0') {
    FUN_10923d61c(param_2,param_3);
    puVar11 = param_2;
    func_0x000107c2abd4(param_2,param_1);
    puVar4 = auStack_d0;
    param_3 = param_2;
    if (((uint)puVar11 >> 7 & 1) != 0) goto code_r0x00010923d61c;
  }
  return;
}



/* Entry: 10923eba0; end: 10923ec53;  */

void FUN_10923eba0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar10;
  
  puVar6 = param_2;
  puVar8 = param_3;
  func_0x000107c2abd4(param_2,param_1);
  puVar7 = param_3;
  func_0x000107c2abd4(param_3,param_2);
  if (((uint)puVar6 >> 7 & 1) == 0) {
    if ((char)puVar7 < '\0') {
      FUN_10923d61c(param_2,param_3);
      puVar6 = param_2;
      func_0x000107c2abd4(param_2,param_1);
      param_3 = param_2;
      if (((uint)puVar6 >> 7 & 1) != 0) goto code_r0x00010923d61c;
    }
    return;
  }
  if (-1 < (char)puVar7) {
    FUN_10923d61c(param_1,param_2);
    puVar6 = param_3;
    func_0x000107c2abd4(param_3,param_2);
    param_1 = param_2;
    if (((uint)puVar6 >> 7 & 1) == 0) {
      return;
    }
  }
code_r0x00010923d61c:
  do {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar1 = *param_1;
    *(undefined8 *)((long)register0x00000008 + -0x48) = param_1[1];
    *(undefined8 *)((long)register0x00000008 + -0x41) = *(undefined8 *)((long)param_1 + 0xf);
    bVar2 = *(byte *)((long)param_1 + 0x17);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    uVar9 = param_1[3];
    *(undefined8 *)((long)register0x00000008 + -0x58) = param_1[4];
    *(undefined8 *)((long)register0x00000008 + -0x60) = uVar9;
    uVar9 = param_3[2];
    uVar10 = *param_3;
    param_1[1] = param_3[1];
    *param_1 = uVar10;
    param_1[2] = uVar9;
    *(undefined1 *)((long)param_3 + 0x17) = 0;
    *(undefined1 *)param_3 = 0;
    uVar9 = param_3[3];
    param_1[4] = param_3[4];
    param_1[3] = uVar9;
    puVar7 = param_3;
    puVar6 = puVar8;
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      param_1 = (undefined8 *)*param_3;
      __ZdlPv();
      puVar6 = puVar8;
    }
    uVar9 = *(undefined8 *)((long)register0x00000008 + -0x48);
    *param_3 = uVar1;
    param_3[1] = uVar9;
    *(undefined8 *)((long)param_3 + 0xf) = *(undefined8 *)((long)register0x00000008 + -0x41);
    *(byte *)((long)param_3 + 0x17) = bVar2;
    uVar9 = *(undefined8 *)((long)register0x00000008 + -0x60);
    param_3[4] = *(undefined8 *)((long)register0x00000008 + -0x58);
    param_3[3] = uVar9;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38)) {
      return;
    }
    ___stack_chk_fail();
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x88) = (ulong)bVar2;
    *(undefined8 *)((long)register0x00000008 + -0x80) = uVar1;
    *(undefined8 **)((long)register0x00000008 + -0x78) = param_3;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0x10923d6e4;
    puVar4 = puVar7;
    puVar8 = puVar6;
    func_0x000107c2abd4(puVar7,param_1);
    puVar5 = puVar6;
    func_0x000107c2abd4(puVar6,puVar7);
    if (((uint)puVar4 >> 7 & 1) == 0) {
      if (-1 < (char)puVar5) {
        return;
      }
      FUN_10923d61c(puVar7,puVar6);
      puVar6 = puVar7;
      func_0x000107c2abd4(puVar7,param_1);
      uVar3 = (uint)puVar6;
      puVar6 = puVar7;
joined_r0x00010923d76c:
      if ((uVar3 >> 7 & 1) == 0) {
        return;
      }
    }
    else if (-1 < (char)puVar5) {
      FUN_10923d61c(param_1,puVar7);
      puVar4 = puVar6;
      func_0x000107c2abd4(puVar6,puVar7);
      uVar3 = (uint)puVar4;
      param_1 = puVar7;
      goto joined_r0x00010923d76c;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x68);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x78);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x88);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_3 = puVar6;
  } while( true );
}



/* Entry: 10923ec54; end: 10923ed67;  */

void FUN_10923ec54(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar10;
  
  puVar8 = param_3;
  FUN_10923eba0();
  uVar5 = param_4;
  func_0x000107c2abd4(param_4,param_3);
  if (((uint)uVar5 >> 7 & 1) != 0) {
    FUN_10923d61c(param_3,param_4);
    puVar6 = param_3;
    func_0x000107c2abd4(param_3,param_2);
    if (((uint)puVar6 >> 7 & 1) != 0) {
      FUN_10923d61c(param_2,param_3);
      puVar6 = param_2;
      func_0x000107c2abd4(param_2,param_1);
      if (((uint)puVar6 >> 7 & 1) != 0) {
        FUN_10923d61c(param_1,param_2);
      }
    }
  }
  uVar5 = param_5;
  func_0x000107c2abd4(param_5,param_4);
  if (((uint)uVar5 >> 7 & 1) != 0) {
    FUN_10923d61c(param_4,param_5);
    uVar5 = param_4;
    func_0x000107c2abd4(param_4,param_3);
    if (((uint)uVar5 >> 7 & 1) != 0) {
      FUN_10923d61c(param_3,param_4);
      puVar6 = param_3;
      func_0x000107c2abd4(param_3,param_2);
      if (((uint)puVar6 >> 7 & 1) != 0) {
        FUN_10923d61c(param_2,param_3);
        puVar6 = param_2;
        func_0x000107c2abd4(param_2,param_1);
        if (((uint)puVar6 >> 7 & 1) != 0) {
          do {
            *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
            *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
            *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
            *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
            *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
            *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
            *(undefined8 *)((long)register0x00000008 + -0x38) =
                 *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            uVar5 = *param_1;
            *(undefined8 *)((long)register0x00000008 + -0x48) = param_1[1];
            *(undefined8 *)((long)register0x00000008 + -0x41) = *(undefined8 *)((long)param_1 + 0xf)
            ;
            bVar1 = *(byte *)((long)param_1 + 0x17);
            param_1[1] = 0;
            param_1[2] = 0;
            *param_1 = 0;
            uVar9 = param_1[3];
            *(undefined8 *)((long)register0x00000008 + -0x58) = param_1[4];
            *(undefined8 *)((long)register0x00000008 + -0x60) = uVar9;
            uVar9 = param_2[2];
            uVar10 = *param_2;
            param_1[1] = param_2[1];
            *param_1 = uVar10;
            param_1[2] = uVar9;
            *(undefined1 *)((long)param_2 + 0x17) = 0;
            *(undefined1 *)param_2 = 0;
            uVar9 = param_2[3];
            param_1[4] = param_2[4];
            param_1[3] = uVar9;
            puVar7 = param_2;
            puVar6 = puVar8;
            if (*(char *)((long)param_2 + 0x17) < '\0') {
              param_1 = (undefined8 *)*param_2;
              __ZdlPv();
              puVar6 = puVar8;
            }
            uVar9 = *(undefined8 *)((long)register0x00000008 + -0x48);
            *param_2 = uVar5;
            param_2[1] = uVar9;
            *(undefined8 *)((long)param_2 + 0xf) = *(undefined8 *)((long)register0x00000008 + -0x41)
            ;
            *(byte *)((long)param_2 + 0x17) = bVar1;
            uVar9 = *(undefined8 *)((long)register0x00000008 + -0x60);
            param_2[4] = *(undefined8 *)((long)register0x00000008 + -0x58);
            param_2[3] = uVar9;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                *(long *)((long)register0x00000008 + -0x38)) {
              return;
            }
            ___stack_chk_fail();
            *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
            *(ulong *)((long)register0x00000008 + -0x88) = (ulong)bVar1;
            *(undefined8 *)((long)register0x00000008 + -0x80) = uVar5;
            *(undefined8 **)((long)register0x00000008 + -0x78) = param_2;
            *(undefined1 **)((long)register0x00000008 + -0x70) =
                 (undefined1 *)((long)register0x00000008 + -0x10);
            *(undefined8 *)((long)register0x00000008 + -0x68) = 0x10923d6e4;
            puVar3 = puVar7;
            puVar8 = puVar6;
            func_0x000107c2abd4(puVar7,param_1);
            puVar4 = puVar6;
            func_0x000107c2abd4(puVar6,puVar7);
            if (((uint)puVar3 >> 7 & 1) == 0) {
              if (-1 < (char)puVar4) {
                return;
              }
              FUN_10923d61c(puVar7,puVar6);
              puVar6 = puVar7;
              func_0x000107c2abd4(puVar7,param_1);
              uVar2 = (uint)puVar6;
              puVar6 = puVar7;
joined_r0x00010923d76c:
              if ((uVar2 >> 7 & 1) == 0) {
                return;
              }
            }
            else if (-1 < (char)puVar4) {
              FUN_10923d61c(param_1,puVar7);
              puVar3 = puVar6;
              func_0x000107c2abd4(puVar6,puVar7);
              uVar2 = (uint)puVar3;
              param_1 = puVar7;
              goto joined_r0x00010923d76c;
            }
            unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x70);
            unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x68);
            unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x80);
            unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x78);
            unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x90);
            unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x88);
            register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
            param_2 = puVar6;
          } while( true );
        }
      }
    }
  }
  return;
}



/* Entry: 10923ed68; end: 10923efcf;  */

bool FUN_10923ed68(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uVar4 = ((long)param_2 - (long)param_1 >> 3) * -0x3333333333333333;
  if ((long)uVar4 < 3) {
    if (uVar4 < 2) {
      return true;
    }
    if (uVar4 != 2) {
LAB_10923ee20:
      FUN_10923eba0(param_1,param_1 + 5,param_1 + 10);
      if (param_1 + 0xf == param_2) {
        return true;
      }
      lVar8 = 0;
      iVar9 = 0;
      puVar3 = param_1 + 0xf;
      puVar7 = param_1 + 10;
      do {
        puVar6 = puVar3;
        puVar3 = puVar6;
        func_0x000107c2abd4(puVar6,puVar7);
        if (((uint)puVar3 >> 7 & 1) != 0) {
          uStack_78 = puVar6[1];
          uStack_80 = *puVar6;
          uStack_70 = puVar6[2];
          puVar6[1] = 0;
          puVar6[2] = 0;
          *puVar6 = 0;
          uStack_60 = puVar6[4];
          uStack_68 = puVar6[3];
          lVar1 = lVar8;
          do {
            lVar5 = lVar1;
            if (*(char *)((long)param_1 + lVar5 + 0x8f) < '\0') {
              __ZdlPv(*(undefined8 *)((long)param_1 + lVar5 + 0x78));
            }
            *(undefined8 *)((long)param_1 + lVar5 + 0x80) =
                 *(undefined8 *)((long)param_1 + lVar5 + 0x58);
            *(undefined8 *)((long)param_1 + lVar5 + 0x78) =
                 *(undefined8 *)((long)param_1 + lVar5 + 0x50);
            *(undefined8 *)((long)param_1 + lVar5 + 0x88) =
                 *(undefined8 *)((long)param_1 + lVar5 + 0x60);
            *(undefined1 *)((long)param_1 + lVar5 + 0x67) = 0;
            *(undefined1 *)((long)param_1 + lVar5 + 0x50) = 0;
            *(undefined8 *)((long)param_1 + lVar5 + 0x98) =
                 *(undefined8 *)((long)param_1 + lVar5 + 0x70);
            *(undefined8 *)((long)param_1 + lVar5 + 0x90) =
                 *(undefined8 *)((long)param_1 + lVar5 + 0x68);
            puVar3 = param_1;
            if (lVar5 == -0x50) goto LAB_10923eee8;
            uVar2 = (uint)&uStack_80;
            func_0x000107c2abd4(&uStack_80,(long)param_1 + lVar5 + 0x28);
            lVar1 = lVar5 + -0x28;
          } while ((uVar2 >> 7 & 1) != 0);
          puVar3 = (undefined8 *)((long)param_1 + lVar5 + 0x50);
LAB_10923eee8:
          if (*(char *)((long)puVar3 + 0x17) < '\0') {
            __ZdlPv(*puVar3);
          }
          puVar3[1] = uStack_78;
          *puVar3 = uStack_80;
          puVar3[2] = uStack_70;
          *(undefined8 *)((long)param_1 + lVar5 + 0x70) = uStack_60;
          *(undefined8 *)((long)param_1 + lVar5 + 0x68) = uStack_68;
          iVar9 = iVar9 + 1;
          if (iVar9 == 8) {
            return puVar6 + 5 == param_2;
          }
        }
        lVar8 = lVar8 + 0x28;
        puVar3 = puVar6 + 5;
        puVar7 = puVar6;
        if (puVar6 + 5 == param_2) {
          return true;
        }
      } while( true );
    }
    param_2 = param_2 + -5;
    puVar3 = param_2;
    func_0x000107c2abd4(param_2,param_1);
    if (((uint)puVar3 >> 7 & 1) == 0) {
      return true;
    }
  }
  else {
    if (uVar4 == 3) {
      FUN_10923eba0(param_1,param_1 + 5,param_2 + -5);
      return true;
    }
    if (uVar4 != 4) {
      if (uVar4 == 5) {
        FUN_10923ec54(param_1,param_1 + 5,param_1 + 10,param_1 + 0xf,param_2 + -5);
        return true;
      }
      goto LAB_10923ee20;
    }
    param_2 = param_2 + -5;
    FUN_10923eba0(param_1,param_1 + 5,param_1 + 10);
    puVar3 = param_2;
    func_0x000107c2abd4(param_2,param_1 + 10);
    if (((uint)puVar3 >> 7 & 1) == 0) {
      return true;
    }
    FUN_10923d61c(param_1 + 10,param_2);
    puVar3 = param_1 + 10;
    func_0x000107c2abd4(puVar3,param_1 + 5);
    if (((uint)puVar3 >> 7 & 1) == 0) {
      return true;
    }
    FUN_10923d61c(param_1 + 5,param_1 + 10);
    puVar3 = param_1 + 5;
    func_0x000107c2abd4(puVar3,param_1);
    if (((uint)puVar3 >> 7 & 1) == 0) {
      return true;
    }
    param_2 = param_1 + 5;
  }
  FUN_10923d61c(param_1,param_2);
  return true;
}



/* Entry: 10923efd0; end: 10923f067;  */

undefined8 * FUN_10923efd0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  param_1[5] = 0;
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  func_0x000107c2abe0();
  return param_1;
}



/* Entry: 10923f068; end: 10923f07b;  */

void FUN_10923f068(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000104c4f6cc(&UNK_10f55e364);
  if ((ulong)param_2 >> 0x3a != 0) {
    func_0x000104c4f740();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        param_4[2] = puVar1[2];
        param_4[1] = uVar3;
        *param_4 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        uVar2 = puVar1[3];
        param_4[4] = puVar1[4];
        param_4[3] = uVar2;
        param_4[6] = 0;
        param_4[7] = 0;
        param_4[5] = 0;
        uVar2 = puVar1[5];
        param_4[6] = puVar1[6];
        param_4[5] = uVar2;
        param_4[7] = puVar1[7];
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1[7] = 0;
        puVar1 = puVar1 + 8;
        param_4 = param_4 + 8;
      } while (puVar1 != param_3);
      do {
        FUN_10922df04(param_2);
        param_2 = param_2 + 8;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 << 6);
  return;
}



/* Entry: 10923f07c; end: 10923f18b;  */

void FUN_10923f07c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((ulong)param_2 >> 0x3a != 0) {
    func_0x000104c4f740();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        param_4[2] = puVar1[2];
        param_4[1] = uVar3;
        *param_4 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        uVar2 = puVar1[3];
        param_4[4] = puVar1[4];
        param_4[3] = uVar2;
        param_4[6] = 0;
        param_4[7] = 0;
        param_4[5] = 0;
        uVar2 = puVar1[5];
        param_4[6] = puVar1[6];
        param_4[5] = uVar2;
        param_4[7] = puVar1[7];
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1[7] = 0;
        puVar1 = puVar1 + 8;
        param_4 = param_4 + 8;
      } while (puVar1 != param_3);
      do {
        FUN_10922df04(param_2);
        param_2 = param_2 + 8;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 << 6);
  return;
}



/* Entry: 10923f18c; end: 10923f19f;  */

void FUN_10923f18c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar1 = &UNK_10f55e364;
  func_0x000104c4f6cc();
  if ((undefined8 *)0x666666666666666 < param_2) {
    func_0x000104c4f740();
    ppuStack_78 = &puStack_60;
    ppuStack_70 = &puStack_58;
    puStack_58 = param_4;
    puVar2 = param_2;
    puStack_80 = puVar1;
    puStack_60 = param_4;
    if (param_2 == param_3) {
      uStack_68 = 1;
    }
    else {
      do {
        uVar4 = puVar2[1];
        uVar3 = *puVar2;
        puStack_58[2] = puVar2[2];
        puStack_58[1] = uVar4;
        *puStack_58 = uVar3;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        uVar3 = puVar2[3];
        puStack_58[4] = puVar2[4];
        puStack_58[3] = uVar3;
        puVar2 = puVar2 + 5;
        puStack_58 = puStack_58 + 5;
      } while (puVar2 != param_3);
      uStack_68 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 5;
      } while (param_2 != param_3);
    }
    FUN_10923f29c(&puStack_80);
    return;
  }
  __Znwm((long)param_2 * 0x28);
  return;
}



/* Entry: 10923f1a0; end: 10923f29b;  */

void FUN_10923f1a0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  if ((undefined8 *)0x666666666666666 < param_2) {
    func_0x000104c4f740();
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    puStack_48 = param_4;
    puVar1 = param_2;
    uStack_70 = param_1;
    puStack_50 = param_4;
    if (param_2 == param_3) {
      uStack_58 = 1;
    }
    else {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        puStack_48[2] = puVar1[2];
        puStack_48[1] = uVar3;
        *puStack_48 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        uVar2 = puVar1[3];
        puStack_48[4] = puVar1[4];
        puStack_48[3] = uVar2;
        puVar1 = puVar1 + 5;
        puStack_48 = puStack_48 + 5;
      } while (puVar1 != param_3);
      uStack_58 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 5;
      } while (param_2 != param_3);
    }
    FUN_10923f29c(&uStack_70);
    return;
  }
  __Znwm((long)param_2 * 0x28);
  return;
}



/* Entry: 10923f29c; end: 10923f2cf;  */

long FUN_10923f29c(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10923f2d0(param_1);
  }
  return param_1;
}



/* Entry: 10923f2d0; end: 10923f39b;  */

/* WARNING: Removing unreachable block (ram,0x00010923f2fc) */

void FUN_10923f2d0(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x28
      ) {
  }
  return;
}



/* Entry: 10923f39c; end: 10923f40f;  */

void FUN_10923f39c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(puVar2,*param_2,param_2[1]);
  }
  else {
    uVar3 = param_2[1];
    uVar1 = *param_2;
    puVar2[2] = param_2[2];
    puVar2[1] = uVar3;
    *puVar2 = uVar1;
  }
  uVar1 = param_2[3];
  *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(param_2 + 4);
  puVar2[3] = uVar1;
  *(undefined8 **)(param_1 + 8) = puVar2 + 5;
  return;
}



/* Entry: 10923f410; end: 10923f56f;  */

/* WARNING: Possible PIC construction at 0x00010923f510: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010923f514) */

void FUN_10923f410(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *unaff_x20;
  long lVar8;
  undefined1 **ppuVar9;
  undefined8 uVar10;
  undefined1 auStack_d8 [56];
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined1 auStack_70 [24];
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  puVar1 = auStack_70;
  ppuVar9 = (undefined1 **)&stack0xfffffffffffffff0;
  lVar8 = param_1[1] - *param_1;
  uVar5 = (lVar8 >> 3) * -0x3333333333333333 + 1;
  if (uVar5 < 0x666666666666667) {
    lVar4 = param_1[2] - *param_1 >> 3;
    uVar7 = lVar4 * -0x6666666666666666;
    if (uVar7 < uVar5 || uVar7 - uVar5 == 0) {
      uVar7 = uVar5;
    }
    if (0x333333333333332 < (ulong)(lVar4 * -0x3333333333333333)) {
      uVar7 = 0x666666666666666;
    }
    plStack_38 = param_1;
    if (uVar7 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_10923f584();
    }
    puVar3 = (undefined8 *)((long)plVar2 + lVar8);
    plStack_40 = plVar2 + uVar7 * 5;
    puStack_48 = puVar3;
    plStack_58 = plVar2;
    puStack_50 = puVar3;
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(puVar3,*param_2,param_2[1]);
    }
    else {
      uVar10 = param_2[1];
      uVar6 = *param_2;
      puVar3[2] = param_2[2];
      puVar3[1] = uVar10;
      *puVar3 = uVar6;
    }
    uVar6 = param_2[3];
    *(undefined1 *)(puVar3 + 4) = *(undefined1 *)(param_2 + 4);
    puVar3[3] = uVar6;
    puStack_48 = puStack_48 + 5;
    param_2 = (undefined8 *)*param_1;
    param_3 = (undefined8 *)param_1[1];
    param_4 = (undefined8 *)((long)puStack_50 + ((long)param_2 - (long)param_3));
    uVar6 = 0x10923f514;
    plVar2 = param_1;
    unaff_x20 = param_4;
  }
  else {
    FUN_10923f570();
    func_0x00010923f700(&plStack_58);
    __Unwind_Resume(param_1);
    pcStack_78 = FUN_10923f570;
    plVar2 = (long *)&UNK_10f55e364;
    ppuStack_80 = ppuVar9;
    func_0x000104c4f6cc();
    puVar1 = &stack0xffffffffffffff60;
    pcStack_88 = FUN_10923f584;
    ppuVar9 = &puStack_90;
    if (param_2 < (undefined8 *)0x666666666666667) {
      puStack_90 = (undefined1 *)&ppuStack_80;
      __Znwm((long)param_2 * 0x28);
      return;
    }
    uVar6 = 0x10923f5c8;
    puStack_90 = (undefined1 *)&ppuStack_80;
    func_0x000104c4f740();
  }
  *(undefined8 **)(puVar1 + -0x20) = unaff_x20;
  *(long **)(puVar1 + -0x18) = param_1;
  *(undefined1 ***)(puVar1 + -0x10) = ppuVar9;
  *(undefined8 *)(puVar1 + -8) = uVar6;
  *(undefined8 **)(puVar1 + -0x28) = param_4;
  *(undefined8 **)(puVar1 + -0x30) = param_4;
  *(long **)(puVar1 + -0x50) = plVar2;
  *(undefined1 **)(puVar1 + -0x48) = puVar1 + -0x30;
  *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x28;
  puVar3 = param_2;
  if (param_2 == param_3) {
    puVar1[-0x38] = 1;
  }
  else {
    do {
      uVar10 = puVar3[1];
      uVar6 = *puVar3;
      param_4[2] = puVar3[2];
      param_4[1] = uVar10;
      *param_4 = uVar6;
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      uVar6 = puVar3[3];
      *(undefined1 *)(param_4 + 4) = *(undefined1 *)(puVar3 + 4);
      param_4[3] = uVar6;
      puVar3 = puVar3 + 5;
      param_4 = param_4 + 5;
    } while (puVar3 != param_3);
    *(undefined8 **)(puVar1 + -0x28) = param_4;
    puVar1[-0x38] = 1;
    do {
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        __ZdlPv(*param_2);
      }
      param_2 = param_2 + 5;
    } while (param_2 != param_3);
  }
  FUN_10923f688(puVar1 + -0x50);
  return;
}



/* Entry: 10923f570; end: 10923f583;  */

void FUN_10923f570(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar1 = &UNK_10f55e364;
  func_0x000104c4f6cc();
  if ((undefined8 *)0x666666666666666 < param_2) {
    func_0x000104c4f740();
    ppuStack_78 = &puStack_60;
    ppuStack_70 = &puStack_58;
    puStack_58 = param_4;
    puVar2 = param_2;
    puStack_80 = puVar1;
    puStack_60 = param_4;
    if (param_2 == param_3) {
      uStack_68 = 1;
    }
    else {
      do {
        uVar4 = puVar2[1];
        uVar3 = *puVar2;
        puStack_58[2] = puVar2[2];
        puStack_58[1] = uVar4;
        *puStack_58 = uVar3;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        uVar3 = puVar2[3];
        *(undefined1 *)(puStack_58 + 4) = *(undefined1 *)(puVar2 + 4);
        puStack_58[3] = uVar3;
        puVar2 = puVar2 + 5;
        puStack_58 = puStack_58 + 5;
      } while (puVar2 != param_3);
      uStack_68 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 5;
      } while (param_2 != param_3);
    }
    FUN_10923f688(&puStack_80);
    return;
  }
  __Znwm((long)param_2 * 0x28);
  return;
}



/* Entry: 10923f584; end: 10923f687;  */

void FUN_10923f584(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  if ((undefined8 *)0x666666666666666 < param_2) {
    func_0x000104c4f740();
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    puStack_48 = param_4;
    puVar1 = param_2;
    uStack_70 = param_1;
    puStack_50 = param_4;
    if (param_2 == param_3) {
      uStack_58 = 1;
    }
    else {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        puStack_48[2] = puVar1[2];
        puStack_48[1] = uVar3;
        *puStack_48 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        uVar2 = puVar1[3];
        *(undefined1 *)(puStack_48 + 4) = *(undefined1 *)(puVar1 + 4);
        puStack_48[3] = uVar2;
        puVar1 = puVar1 + 5;
        puStack_48 = puStack_48 + 5;
      } while (puVar1 != param_3);
      uStack_58 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 5;
      } while (param_2 != param_3);
    }
    FUN_10923f688(&uStack_70);
    return;
  }
  __Znwm((long)param_2 * 0x28);
  return;
}



/* Entry: 10923f688; end: 10923f6bb;  */

long FUN_10923f688(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10923f6bc(param_1);
  }
  return param_1;
}



/* Entry: 10923f6bc; end: 10923f787;  */

/* WARNING: Removing unreachable block (ram,0x00010923f6e8) */

void FUN_10923f6bc(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x28
      ) {
  }
  return;
}



/* Entry: 10923f788; end: 10923f79b;  */

undefined1  [16] FUN_10923f788(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 *puStack_a0;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  undefined1 uStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  
  puVar3 = (undefined8 *)&UNK_10f55e364;
  func_0x000104c4f6cc();
  if ((ulong)param_2 >> 0x3e == 0) {
    lVar4 = (long)param_2 << 2;
    __Znwm(lVar4);
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = lVar4;
    return auVar11;
  }
  func_0x000104c4f740();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    puVar6 = (undefined8 *)*param_2;
    func_0x000107c3192c(puVar3,puVar6,param_2[1]);
  }
  else {
    uVar10 = param_2[1];
    uVar7 = *param_2;
    puVar3[2] = param_2[2];
    puVar3[1] = uVar10;
    *puVar3 = uVar7;
    puVar6 = param_2;
  }
  puVar8 = puVar3 + 3;
  *puVar8 = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar9 = (undefined8 *)param_2[3];
  puVar1 = (undefined8 *)param_2[4];
  lVar4 = (long)puVar1 - (long)puVar9;
  if (lVar4 != 0) {
    puVar6 = (undefined8 *)((lVar4 >> 3) * -0x3333333333333333);
    if ((undefined8 *)0x666666666666666 < puVar6) {
      FUN_10923f570();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10923f928);
      (*pcVar2)();
    }
    puVar5 = puVar8;
    FUN_10923f584();
    puVar3[3] = puVar5;
    puVar3[4] = puVar5;
    puVar3[5] = puVar5 + (long)puVar6 * 5;
    ppuStack_98 = &puStack_80;
    ppuStack_90 = &puStack_78;
    uStack_88 = 0;
    puStack_a0 = puVar8;
    puStack_80 = puVar5;
    do {
      puStack_78 = puVar5;
      if (*(char *)((long)puVar9 + 0x17) < '\0') {
        puVar6 = (undefined8 *)*puVar9;
        func_0x000107c3192c(puVar5,puVar6,puVar9[1]);
      }
      else {
        uVar10 = puVar9[1];
        uVar7 = *puVar9;
        puVar5[2] = puVar9[2];
        puVar5[1] = uVar10;
        *puVar5 = uVar7;
      }
      uVar7 = puVar9[3];
      *(undefined1 *)(puVar5 + 4) = *(undefined1 *)(puVar9 + 4);
      puVar5[3] = uVar7;
      puVar9 = puVar9 + 5;
      puVar5 = puStack_78 + 5;
    } while (puVar9 != puVar1);
    uStack_88 = 1;
    puStack_78 = puVar5;
    FUN_10923f688(&puStack_a0);
    puVar3[4] = puVar5;
  }
  *(undefined4 *)(puVar3 + 6) = *(undefined4 *)(param_2 + 6);
  auVar12._8_8_ = puVar6;
  auVar12._0_8_ = puVar3;
  return auVar12;
}



/* Entry: 10923f79c; end: 10923f7cf;  */

undefined1  [16] FUN_10923f79c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 *puStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    lVar3 = (long)param_2 << 2;
    __Znwm(lVar3);
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = lVar3;
    return auVar10;
  }
  func_0x000104c4f740();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    puVar5 = (undefined8 *)*param_2;
    func_0x000107c3192c(param_1,puVar5,param_2[1]);
  }
  else {
    uVar9 = param_2[1];
    uVar6 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar9;
    *param_1 = uVar6;
    puVar5 = param_2;
  }
  puVar7 = param_1 + 3;
  *puVar7 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar8 = (undefined8 *)param_2[3];
  puVar1 = (undefined8 *)param_2[4];
  lVar3 = (long)puVar1 - (long)puVar8;
  if (lVar3 != 0) {
    puVar5 = (undefined8 *)((lVar3 >> 3) * -0x3333333333333333);
    if ((undefined8 *)0x666666666666666 < puVar5) {
      FUN_10923f570();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10923f928);
      (*pcVar2)();
    }
    puVar4 = puVar7;
    FUN_10923f584();
    param_1[3] = puVar4;
    param_1[4] = puVar4;
    param_1[5] = puVar4 + (long)puVar5 * 5;
    ppuStack_88 = &puStack_70;
    ppuStack_80 = &puStack_68;
    uStack_78 = 0;
    puStack_90 = puVar7;
    puStack_70 = puVar4;
    do {
      puStack_68 = puVar4;
      if (*(char *)((long)puVar8 + 0x17) < '\0') {
        puVar5 = (undefined8 *)*puVar8;
        func_0x000107c3192c(puVar4,puVar5,puVar8[1]);
      }
      else {
        uVar9 = puVar8[1];
        uVar6 = *puVar8;
        puVar4[2] = puVar8[2];
        puVar4[1] = uVar9;
        *puVar4 = uVar6;
      }
      uVar6 = puVar8[3];
      *(undefined1 *)(puVar4 + 4) = *(undefined1 *)(puVar8 + 4);
      puVar4[3] = uVar6;
      puVar8 = puVar8 + 5;
      puVar4 = puStack_68 + 5;
    } while (puVar8 != puVar1);
    uStack_78 = 1;
    puStack_68 = puVar4;
    FUN_10923f688(&puStack_90);
    param_1[4] = puVar4;
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  auVar11._8_8_ = puVar5;
  auVar11._0_8_ = param_1;
  return auVar11;
}



/* Entry: 10923f7d0; end: 10923f95f;  */

undefined8 * FUN_10923f7d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar9 = param_2[1];
    uVar6 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar9;
    *param_1 = uVar6;
  }
  puVar7 = param_1 + 3;
  *puVar7 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar8 = (undefined8 *)param_2[3];
  puVar1 = (undefined8 *)param_2[4];
  lVar2 = (long)puVar1 - (long)puVar8;
  if (lVar2 != 0) {
    uVar5 = (lVar2 >> 3) * -0x3333333333333333;
    if (0x666666666666666 < uVar5) {
      FUN_10923f570();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10923f928);
      (*pcVar3)();
    }
    puVar4 = puVar7;
    FUN_10923f584();
    param_1[3] = puVar4;
    param_1[4] = puVar4;
    param_1[5] = puVar4 + uVar5 * 5;
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    uStack_58 = 0;
    puStack_70 = puVar7;
    puStack_50 = puVar4;
    do {
      puStack_48 = puVar4;
      if (*(char *)((long)puVar8 + 0x17) < '\0') {
        func_0x000107c3192c(puVar4,*puVar8,puVar8[1]);
      }
      else {
        uVar9 = puVar8[1];
        uVar6 = *puVar8;
        puVar4[2] = puVar8[2];
        puVar4[1] = uVar9;
        *puVar4 = uVar6;
      }
      uVar6 = puVar8[3];
      *(undefined1 *)(puVar4 + 4) = *(undefined1 *)(puVar8 + 4);
      puVar4[3] = uVar6;
      puVar8 = puVar8 + 5;
      puVar4 = puStack_48 + 5;
    } while (puVar8 != puVar1);
    uStack_58 = 1;
    puStack_48 = puVar4;
    FUN_10923f688(&puStack_70);
    param_1[4] = puVar4;
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  return param_1;
}



/* Entry: 10923f960; end: 10923f973;  */

void FUN_10923f960(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000104c4f6cc(&UNK_10f55e364);
  if ((undefined8 *)0x492492492492492 < param_2) {
    func_0x000104c4f740();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        param_4[2] = puVar1[2];
        param_4[1] = uVar3;
        *param_4 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        param_4[3] = 0;
        param_4[4] = 0;
        param_4[5] = 0;
        uVar2 = puVar1[3];
        param_4[4] = puVar1[4];
        param_4[3] = uVar2;
        param_4[5] = puVar1[5];
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        *(undefined4 *)(param_4 + 6) = *(undefined4 *)(puVar1 + 6);
        puVar1 = puVar1 + 7;
        param_4 = param_4 + 7;
      } while (puVar1 != param_3);
      do {
        FUN_109234d1c(param_2);
        param_2 = param_2 + 7;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 * 0x38);
  return;
}



/* Entry: 10923f974; end: 10923fa97;  */

void FUN_10923f974(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((undefined8 *)0x492492492492492 < param_2) {
    func_0x000104c4f740();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        param_4[2] = puVar1[2];
        param_4[1] = uVar3;
        *param_4 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        param_4[3] = 0;
        param_4[4] = 0;
        param_4[5] = 0;
        uVar2 = puVar1[3];
        param_4[4] = puVar1[4];
        param_4[3] = uVar2;
        param_4[5] = puVar1[5];
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        *(undefined4 *)(param_4 + 6) = *(undefined4 *)(puVar1 + 6);
        puVar1 = puVar1 + 7;
        param_4 = param_4 + 7;
      } while (puVar1 != param_3);
      do {
        FUN_109234d1c(param_2);
        param_2 = param_2 + 7;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 * 0x38);
  return;
}



/* Entry: 10923fa98; end: 10923faab;  */

void FUN_10923fa98(undefined8 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined4 *)&UNK_10f55e364;
  func_0x000104c4f6cc();
  *puVar1 = *param_2;
  *(undefined8 *)(puVar1 + 4) = 0;
  *(undefined8 *)(puVar1 + 6) = 0;
  *(undefined8 *)(puVar1 + 2) = 0;
  uVar2 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(puVar1 + 2) = uVar2;
  *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 10) = 0;
  *(undefined8 *)(puVar1 + 0xc) = 0;
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(puVar1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(puVar1 + 8) = uVar2;
  *(undefined8 *)(puVar1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(puVar1 + 0xe) = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x12) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(puVar1 + 0xe) = uVar2;
  *(undefined8 *)(puVar1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(puVar1 + 0x14) = 0;
  *(undefined8 *)(puVar1 + 0x16) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(puVar1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(puVar1 + 0x14) = uVar2;
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x16) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 0x1a) = 0;
  *(undefined8 *)(puVar1 + 0x1c) = 0;
  *(undefined8 *)(puVar1 + 0x1e) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(puVar1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(puVar1 + 0x1a) = uVar2;
  *(undefined8 *)(puVar1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_2 + 0x1a) = 0;
  *(undefined8 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x1e) = 0;
  return;
}



/* Entry: 10923faac; end: 10923fb57;  */

void FUN_10923faac(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  uVar1 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xe) = uVar1;
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x14) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x16) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1a) = uVar1;
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_2 + 0x1a) = 0;
  *(undefined8 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x1e) = 0;
  return;
}



/* Entry: 10923fb58; end: 10923fb8f;  */

long * FUN_10923fb58(long *param_1,ulong param_2,ulong param_3,long *param_4)

{
  long *plVar1;
  
  if (param_2 >> 0x3a == 0) {
    plVar1 = param_1;
    FUN_10923f07c();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 8);
    return plVar1;
  }
  FUN_10923f068();
  for (; param_2 != param_3; param_2 = param_2 + 0x40) {
    FUN_10923efd0(param_4,param_2);
    param_4 = param_4 + 8;
  }
  return param_4;
}



/* Entry: 10923fb90; end: 10923fc13;  */

long FUN_10923fb90(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x40) {
    FUN_10923efd0(param_4,param_2);
    param_4 = param_4 + 0x40;
  }
  return param_4;
}



/* Entry: 10923fc14; end: 10923fc5b;  */

long * FUN_10923fc14(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plStack_80;
  long **pplStack_78;
  long **pplStack_70;
  undefined1 uStack_68;
  long *plStack_60;
  long *plStack_58;
  
  if (param_2 < (long *)0x666666666666667) {
    plVar1 = param_1;
    FUN_10923f1a0();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 5);
    return plVar1;
  }
  FUN_10923f18c();
  pplStack_78 = &plStack_60;
  pplStack_70 = &plStack_58;
  uStack_68 = 0;
  plStack_80 = param_1;
  plStack_60 = param_4;
  for (; plStack_58 = param_4, param_2 != param_3; param_2 = param_2 + 5) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      lVar3 = param_2[1];
      lVar2 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = lVar3;
      *param_4 = lVar2;
    }
    lVar2 = param_2[3];
    param_4[4] = param_2[4];
    param_4[3] = lVar2;
    param_4 = plStack_58 + 5;
  }
  uStack_68 = 1;
  FUN_10923f29c(&plStack_80);
  return param_4;
}



/* Entry: 10923fc5c; end: 10923fd23;  */

undefined8 *
FUN_10923fc5c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_48 = 0;
  puStack_40 = param_4;
  uStack_60 = param_1;
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 5) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      uVar2 = param_2[1];
      uVar1 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar2;
      *param_4 = uVar1;
    }
    uVar1 = param_2[3];
    param_4[4] = param_2[4];
    param_4[3] = uVar1;
    param_4 = puStack_38 + 5;
  }
  uStack_48 = 1;
  FUN_10923f29c(&uStack_60);
  return param_4;
}



/* Entry: 10923fd24; end: 10923fde3;  */

long * FUN_10923fd24(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x00010923bc08(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10923fde4; end: 10923fe1b;  */

void FUN_10923fde4(long *param_1)

{
  if (*param_1 != 0) {
    FUN_109234a08();
    __ZdlPv(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10923fe1c; end: 10923fe7f;  */

void FUN_10923fe1c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x38;
        FUN_109234d1c(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


