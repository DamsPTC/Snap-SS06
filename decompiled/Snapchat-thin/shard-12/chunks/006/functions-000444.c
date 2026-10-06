/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1094e2010; end: 1094e211f;  */

void FUN_1094e2010(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(*param_1 + lVar2 * 8) = 0;
      lVar2 = lVar2 + 1;
    } while (lVar1 != lVar2);
    plVar3 = (long *)param_1[2];
    param_1[2] = 0;
    param_1[3] = 0;
    plVar4 = plVar3;
    if (plVar3 != (long *)0x0 && param_2 != param_3) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (plVar4 + 2,param_2 + 2);
        plVar4[5] = param_2[5];
        lVar1 = param_2[6];
        *(int *)(plVar4 + 7) = (int)param_2[7];
        plVar4[6] = lVar1;
        plVar3 = (long *)*plVar4;
        FUN_1094e2120(param_1,plVar4);
        param_2 = (long *)*param_2;
        plVar4 = plVar3;
      } while (plVar3 != (long *)0x0 && param_2 != param_3);
    }
    func_0x0001094d000c(param_1,plVar3);
  }
  for (; param_2 != param_3; param_2 = (long *)*param_2) {
    FUN_1094e25f4(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 1094e2120; end: 1094e216f;  */

long FUN_1094e2120(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x000107c31944(param_1,param_2 + 0x10);
  *(undefined8 *)(param_2 + 8) = uVar1;
  uVar2 = param_1;
  FUN_1094e2170(param_1,uVar1,param_2 + 0x10);
  FUN_1094e22c8(param_1,param_2,uVar2);
  return param_2;
}



/* Entry: 1094e2170; end: 1094e22c7;  */

long * FUN_1094e2170(long *param_1,ulong param_2,undefined8 param_3)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long *plVar4;
  
  uVar10 = param_1[1];
  if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar10) {
      uVar5 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar5 = uVar5 | uVar10 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar10) {
      uVar5 = uVar10;
    }
    FUN_1094e2398(param_1,uVar5);
    uVar10 = param_1[1];
  }
  uVar5 = uVar10 - 1;
  if ((uVar10 & uVar5) == 0) {
    uVar11 = uVar5 & param_2;
  }
  else {
    uVar11 = param_2;
    if (uVar10 <= param_2) {
      uVar11 = 0;
      if (uVar10 != 0) {
        uVar11 = param_2 / uVar10;
      }
      uVar11 = param_2 - uVar11 * uVar10;
    }
  }
  plVar9 = *(long **)(*param_1 + uVar11 * 8);
  if ((plVar9 != (long *)0x0) && (lVar6 = *plVar9, lVar6 != 0)) {
    uVar12 = 0;
    bVar1 = 0;
    do {
      uVar7 = *(ulong *)(lVar6 + 8);
      if ((uVar10 & uVar5) == 0) {
        uVar8 = uVar7 & uVar5;
      }
      else {
        uVar8 = uVar7;
        if (uVar10 <= uVar7) {
          uVar8 = 0;
          if (uVar10 != 0) {
            uVar8 = uVar7 / uVar10;
          }
          uVar8 = uVar7 - uVar8 * uVar10;
        }
      }
      if (uVar8 != uVar11) {
        return plVar9;
      }
      if (uVar7 == param_2) {
        plVar4 = param_1;
        func_0x000104c4fbc4(param_1,lVar6 + 0x10,param_3);
        uVar3 = (uint)plVar4;
      }
      else {
        uVar3 = 0;
      }
      bVar2 = uVar3 != uVar12;
      if ((bool)(bVar1 & bVar2)) {
        return plVar9;
      }
      uVar12 = uVar12 | bVar2;
      bVar1 = bVar1 | bVar2;
      plVar9 = (long *)*plVar9;
      lVar6 = *plVar9;
    } while (lVar6 != 0);
  }
  return plVar9;
}



/* Entry: 1094e22c8; end: 1094e2397;  */

void FUN_1094e22c8(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  uVar3 = uVar1 - 1;
  if ((uVar1 & uVar3) == 0) {
    uVar2 = uVar3 & uVar2;
    if (param_3 != (long *)0x0) goto LAB_1094e22f0;
LAB_1094e232c:
    plVar5 = param_1 + 2;
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    *(long **)(*param_1 + uVar2 * 8) = plVar5;
    if (*param_2 == 0) goto LAB_1094e2388;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar2 * uVar1;
    }
  }
  else {
    if (uVar1 <= uVar2) {
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = uVar2 / uVar1;
      }
      uVar2 = uVar2 - uVar4 * uVar1;
    }
    if (param_3 == (long *)0x0) goto LAB_1094e232c;
LAB_1094e22f0:
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 == 0) goto LAB_1094e2388;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar3 * uVar1;
    }
    if (uVar4 == uVar2) goto LAB_1094e2388;
  }
  *(long **)(*param_1 + uVar4 * 8) = param_2;
LAB_1094e2388:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 1094e2398; end: 1094e2467;  */

void FUN_1094e2398(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 auStack_88 [3];
  ulong uStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar10) {
        uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
      }
      if (param_2 <= uVar10) {
        param_2 = uVar10;
      }
      if (param_2 < uVar7) goto LAB_1094e23e0;
    }
    return;
  }
LAB_1094e23e0:
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      plVar8 = param_1;
      func_0x000104c4f740();
      pcStack_58 = FUN_1094e25f4;
      uStack_70 = param_2;
      plStack_68 = param_1;
      puStack_60 = &stack0xfffffffffffffff0;
      FUN_1094e2650(auStack_88);
      FUN_1094e2120(plVar8,auStack_88[0]);
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar7 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
      uVar7 = uVar7 + 1;
    } while (param_2 != uVar7);
    plVar8 = (long *)param_1[2];
    if (plVar8 != (long *)0x0) {
      uVar7 = plVar8[1];
      uVar10 = param_2 - 1;
      if ((param_2 & uVar10) == 0) {
        uVar7 = uVar7 & uVar10;
      }
      else if (param_2 <= uVar7) {
        uVar11 = 0;
        if (param_2 != 0) {
          uVar11 = uVar7 / param_2;
        }
        uVar7 = uVar7 - uVar11 * param_2;
      }
      *(long **)(*param_1 + uVar7 * 8) = param_1 + 2;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        uVar11 = plVar8[1];
        if ((param_2 & uVar10) == 0) {
          uVar11 = uVar11 & uVar10;
        }
        else if (param_2 <= uVar11) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar11 / param_2;
          }
          uVar11 = uVar11 - uVar1 * param_2;
        }
        if (uVar11 != uVar7) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar11 * 8) == 0) {
            *(long **)(lVar2 + uVar11 * 8) = plVar9;
            uVar7 = uVar11;
          }
          else {
            lVar3 = *plVar8;
            plVar6 = plVar8;
            if (lVar3 == 0) {
              plVar5 = (long *)0x0;
            }
            else {
              do {
                plVar4 = param_1;
                func_0x000104c4fbc4(param_1,plVar8 + 2,lVar3 + 0x10);
                plVar5 = (long *)*plVar6;
                if ((int)plVar4 == 0) goto LAB_1094e25d0;
                lVar3 = *plVar5;
                plVar6 = plVar5;
              } while (lVar3 != 0);
              plVar5 = (long *)0x0;
LAB_1094e25d0:
              lVar2 = *param_1;
            }
            *plVar9 = (long)plVar5;
            *plVar6 = **(long **)(lVar2 + uVar11 * 8);
            **(undefined8 **)(lVar2 + uVar11 * 8) = plVar8;
            plVar8 = plVar9;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1094e2468; end: 1094e25f3;  */

void FUN_1094e2468(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 auStack_88 [3];
  ulong uStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      plVar8 = param_1;
      func_0x000104c4f740();
      pcStack_58 = FUN_1094e25f4;
      uStack_70 = param_2;
      plStack_68 = param_1;
      puStack_60 = &stack0xfffffffffffffff0;
      FUN_1094e2650(auStack_88);
      FUN_1094e2120(plVar8,auStack_88[0]);
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar5 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
    plVar8 = (long *)param_1[2];
    if (plVar8 != (long *)0x0) {
      uVar5 = plVar8[1];
      uVar10 = param_2 - 1;
      if ((param_2 & uVar10) == 0) {
        uVar5 = uVar5 & uVar10;
      }
      else if (param_2 <= uVar5) {
        uVar11 = 0;
        if (param_2 != 0) {
          uVar11 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar11 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        uVar11 = plVar8[1];
        if ((param_2 & uVar10) == 0) {
          uVar11 = uVar11 & uVar10;
        }
        else if (param_2 <= uVar11) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar11 / param_2;
          }
          uVar11 = uVar11 - uVar1 * param_2;
        }
        if (uVar11 != uVar5) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar11 * 8) == 0) {
            *(long **)(lVar2 + uVar11 * 8) = plVar9;
            uVar5 = uVar11;
          }
          else {
            lVar3 = *plVar8;
            plVar7 = plVar8;
            if (lVar3 == 0) {
              plVar6 = (long *)0x0;
            }
            else {
              do {
                plVar4 = param_1;
                func_0x000104c4fbc4(param_1,plVar8 + 2,lVar3 + 0x10);
                plVar6 = (long *)*plVar7;
                if ((int)plVar4 == 0) goto LAB_1094e25d0;
                lVar3 = *plVar6;
                plVar7 = plVar6;
              } while (lVar3 != 0);
              plVar6 = (long *)0x0;
LAB_1094e25d0:
              lVar2 = *param_1;
            }
            *plVar9 = (long)plVar6;
            *plVar7 = **(long **)(lVar2 + uVar11 * 8);
            **(undefined8 **)(lVar2 + uVar11 * 8) = plVar8;
            plVar8 = plVar9;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1094e25f4; end: 1094e264f;  */

void FUN_1094e25f4(undefined8 param_1)

{
  undefined8 auStack_38 [3];
  
  FUN_1094e2650(auStack_38);
  FUN_1094e2120(param_1,auStack_38[0]);
  return;
}



/* Entry: 1094e2650; end: 1094e26df;  */

void FUN_1094e2650(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_1094cff20(puVar1 + 2,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  func_0x000107c31944(param_2,puVar1 + 2);
  puVar1[1] = param_2;
  return;
}



/* Entry: 1094e26e0; end: 1094e290f;  */

/* WARNING: Removing unreachable block (ram,0x0001094e27b0) */
/* WARNING: Removing unreachable block (ram,0x0001094e2728) */
/* WARNING: Removing unreachable block (ram,0x0001094e275c) */
/* WARNING: Removing unreachable block (ram,0x0001094e2824) */

undefined4 FUN_1094e26e0(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 auStack_90 [2];
  char cStack_79;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined1 auStack_48 [24];
  
  uVar4 = *param_2;
  func_0x000107c31940(auStack_48,&UNK_10f56fdda);
  func_0x0001094a6db0(uVar4,auStack_48,param_1 + 0x28);
  uVar4 = *param_2;
  func_0x000107c31940(auStack_48,&UNK_10f56fde1);
  func_0x0001094a6db0(uVar4,auStack_48,param_1 + 0x2c);
  uVar4 = *param_2;
  func_0x000107c31940(auStack_60,PTR_s_stage_1132dfa28);
  func_0x000107c31940(auStack_78,PTR_DAT_1132dfa30);
  FUN_1094a6b30(auStack_48,uVar4,auStack_60,auStack_78);
  uVar2 = SUB84(auStack_48,0);
  FUN_1094eb6d8();
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  uVar4 = *param_2;
  func_0x000107c31940(auStack_60,PTR_s_component_1132dfa38);
  func_0x000107c31940(auStack_90,PTR_DAT_1132dfa40);
  FUN_1094a6b30(auStack_48,uVar4,auStack_60,auStack_90);
  uVar2 = SUB84(auStack_48,0);
  FUN_1094eb89c();
  *(undefined4 *)(param_1 + 8) = uVar2;
  if (cStack_79 < '\0') {
    __ZdlPv(auStack_90[0]);
  }
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  lVar3 = param_1;
  FUN_1094e4ad0(param_1,*param_2);
  uVar2 = 0;
  if (0.0 < *(float *)(param_1 + 0x28)) {
    uVar2 = (undefined4)lVar3;
  }
  uVar1 = 0;
  if (0.0 < *(float *)(param_1 + 0x2c)) {
    uVar1 = uVar2;
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    uVar2 = uVar1;
  }
  uVar1 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 1094e2910; end: 1094e299b;  */

undefined8 * FUN_1094e2910(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 2;
  *param_1 = &PTR_FUN_110af7e20;
  FUN_1094dd9b4(&puStack_28);
  return param_1;
}



/* Entry: 1094e299c; end: 1094e2f9f;  */

undefined4 FUN_1094e299c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_128;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  undefined8 uStack_110;
  long *plStack_108;
  long lStack_100;
  undefined1 auStack_f8 [16];
  long lStack_e8;
  long lStack_e0;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  
  uVar12 = *param_2;
  func_0x000107c31940(&lStack_a0,PTR_s_stage_1132dfa28);
  uStack_c0 = 0;
  uStack_b8 = 0;
  lStack_b0 = 0;
  FUN_1094a6b30(&uStack_128,uVar12,&lStack_a0,&uStack_c0);
  uVar5 = SUB84(&uStack_128,0);
  FUN_1094eb6d8();
  *(undefined4 *)(param_1 + 0xc) = uVar5;
  if (iStack_114 < 0) {
    __ZdlPv(CONCAT44(uStack_128._4_4_,(int)uStack_128));
  }
  if (lStack_b0 < 0) {
    __ZdlPv(uStack_c0);
  }
  if (lStack_90 < 0) {
    __ZdlPv(lStack_a0);
  }
  uVar12 = *param_2;
  func_0x000107c31940(&uStack_128,&DAT_10f5418d0);
  puVar8 = &uStack_128;
  FUN_1094a68cc(auStack_d0,uVar12);
  if (iStack_114 < 0) {
    __ZdlPv(CONCAT44(uStack_128._4_4_,(int)uStack_128));
  }
  FUN_1094a72dc(&lStack_e8,auStack_d0);
  plVar1 = (long *)(param_1 + 0x28);
  FUN_1094e2fa0(plVar1);
  uVar6 = (lStack_e0 - lStack_e8 >> 3) * -0x5555555555555555;
  lVar13 = *(long *)(param_1 + 0x28);
  lVar14 = lStack_e8;
  lVar15 = lStack_e0;
  if ((ulong)((*(long *)(param_1 + 0x38) - lVar13 >> 4) * -0x5555555555555555) < uVar6) {
    if (0x555555555555555 < uVar6) {
      FUN_1094e3098();
LAB_1094e2ebc:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1094e2ec0);
      (*pcVar4)();
    }
    lVar14 = *(long *)(param_1 + 0x30);
    plStack_108 = plVar1;
    FUN_1094e30ac();
    lVar14 = uVar6 + (lVar14 - lVar13);
    lVar15 = lVar14 + (*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x30));
    func_0x0001094e30f0(*(long *)(param_1 + 0x28),*(long *)(param_1 + 0x30),lVar15);
    uVar12 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar15;
    *(long *)(param_1 + 0x30) = lVar14;
    uStack_110 = *(undefined8 *)(param_1 + 0x38);
    *(ulong *)(param_1 + 0x38) = uVar6 + (long)puVar8 * 0x30;
    iStack_118 = (int)uVar12;
    iStack_114 = (int)((ulong)uVar12 >> 0x20);
    uStack_128._0_4_ = iStack_118;
    uStack_128._4_4_ = iStack_114;
    iStack_120 = iStack_118;
    iStack_11c = iStack_114;
    func_0x0001094e3170(&uStack_128);
    lVar14 = lStack_e8;
    lVar15 = lStack_e0;
  }
  do {
    if (lVar14 == lVar15) {
      lVar15 = *(long *)(param_1 + 0x28);
      lVar13 = *(long *)(param_1 + 0x30);
      lVar14 = 0;
      if (lVar13 != lVar15) {
        lVar14 = LZCOUNT((lVar13 - lVar15 >> 4) * -0x5555555555555555) * -2 + 0x7e;
      }
      FUN_1094e31d0(lVar15,lVar13,lVar14,1);
      lVar14 = param_1;
      FUN_1094e4ad0(param_1,*param_2);
      uVar5 = 0;
      if (*(long *)(param_1 + 0x28) != *(long *)(param_1 + 0x30)) {
        uVar5 = (undefined4)lVar14;
      }
      uVar2 = 0;
      if (*(int *)(param_1 + 0xc) != 0) {
        uVar2 = uVar5;
      }
      uStack_128 = &lStack_e8;
      func_0x000104c607c8(&uStack_128);
      FUN_109380f8c(auStack_d0);
      return uVar2;
    }
    FUN_1094a68cc(auStack_f8,auStack_d0,lVar14);
    uStack_128._4_4_ = 1;
    iStack_120 = 1;
    iStack_11c = 0x3f000000;
    iStack_118 = 0x3f000000;
    plStack_108 = (long *)0x0;
    lStack_100 = 0;
    uStack_110 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_110,lVar14);
    func_0x000107c31940(&lStack_a0,"priority");
    puVar7 = auStack_f8;
    func_0x0001093782cc(puVar7,&lStack_a0,0);
    uStack_128._0_4_ = (int)puVar7;
    if (lStack_90 < 0) {
      __ZdlPv(lStack_a0);
    }
    func_0x000107c31940(&lStack_a0,&UNK_10f56fdeb);
    puVar7 = auStack_f8;
    func_0x0001093781f4(puVar7,&lStack_a0);
    if (lStack_90 < 0) {
      __ZdlPv(lStack_a0);
      if (((ulong)puVar7 & 1) != 0) goto LAB_1094e2bcc;
LAB_1094e2ca8:
      func_0x000107c31940(&lStack_a0,&DAT_10f2e8c7d);
      plVar9 = &lStack_a0;
      iVar3 = 0;
      FUN_1094a73d0(auStack_f8);
      iStack_11c = iVar3;
      iVar3 = iStack_11c;
      if (lStack_90 < 0) {
        __ZdlPv(lStack_a0);
        iVar3 = iStack_11c;
      }
    }
    else {
      if (((ulong)puVar7 & 1) == 0) goto LAB_1094e2ca8;
LAB_1094e2bcc:
      func_0x000107c31940(&lStack_a0,&UNK_10f56fdeb);
      iVar3 = 0;
      FUN_1094a73d0(auStack_f8,&lStack_a0);
      iStack_11c = iVar3;
      if (lStack_90 < 0) {
        __ZdlPv(lStack_a0);
      }
      func_0x000107c31940(&lStack_a0,&UNK_10f56fdfc);
      iVar3 = 0;
      FUN_1094a73d0(auStack_f8,&lStack_a0);
      iStack_118 = iVar3;
      if (lStack_90 < 0) {
        __ZdlPv(lStack_a0);
      }
      func_0x000107c31940(&lStack_a0,&UNK_10f56fe0e);
      puVar7 = auStack_f8;
      func_0x0001093782cc(puVar7,&lStack_a0,0);
      uStack_128._4_4_ = (int)puVar7;
      if (lStack_90 < 0) {
        __ZdlPv(lStack_a0);
      }
      func_0x000107c31940(&lStack_a0,&UNK_10f56fe1c);
      puVar7 = auStack_f8;
      plVar9 = &lStack_a0;
      func_0x0001093782cc(puVar7,plVar9,0);
      iStack_120 = (int)puVar7;
      iVar3 = iStack_118;
      if (lStack_90 < 0) {
        __ZdlPv(lStack_a0);
        iVar3 = iStack_118;
      }
    }
    iStack_118 = iVar3;
    puVar8 = *(undefined8 **)(param_1 + 0x30);
    if (puVar8 < *(undefined8 **)(param_1 + 0x38)) {
      *(int *)(puVar8 + 2) = iStack_118;
      puVar8[1] = CONCAT44(iStack_11c,iStack_120);
      *puVar8 = CONCAT44(uStack_128._4_4_,(int)uStack_128);
      puVar8[5] = lStack_100;
      puVar8[4] = plStack_108;
      puVar8[3] = uStack_110;
      *(undefined8 **)(param_1 + 0x30) = puVar8 + 6;
    }
    else {
      lVar13 = (long)puVar8 - *plVar1;
      uVar6 = (lVar13 >> 4) * -0x5555555555555555 + 1;
      if (0x555555555555555 < uVar6) {
        FUN_1094e3098();
        goto LAB_1094e2ebc;
      }
      lVar10 = (long)*(undefined8 **)(param_1 + 0x38) - *plVar1 >> 4;
      uVar11 = lVar10 * 0x5555555555555556;
      if (uVar11 < uVar6 || uVar11 - uVar6 == 0) {
        uVar11 = uVar6;
      }
      if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar10 * -0x5555555555555555)) {
        uVar11 = 0x555555555555555;
      }
      plStack_80 = plVar1;
      FUN_1094e30ac();
      puVar8 = (undefined8 *)(uVar11 + lVar13);
      *(int *)(puVar8 + 2) = iStack_118;
      puVar8[1] = CONCAT44(iStack_11c,iStack_120);
      *puVar8 = CONCAT44(uStack_128._4_4_,(int)uStack_128);
      puVar8[5] = lStack_100;
      puVar8[4] = plStack_108;
      puVar8[3] = uStack_110;
      plStack_108 = (long *)0x0;
      lStack_100 = 0;
      uStack_110 = 0;
      lVar13 = (long)puVar8 + (*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x30));
      func_0x0001094e30f0(*(long *)(param_1 + 0x28),*(long *)(param_1 + 0x30),lVar13);
      lStack_a0 = *(long *)(param_1 + 0x28);
      *(long *)(param_1 + 0x28) = lVar13;
      *(undefined8 **)(param_1 + 0x30) = puVar8 + 6;
      uStack_88 = *(undefined8 *)(param_1 + 0x38);
      *(ulong *)(param_1 + 0x38) = uVar11 + (long)plVar9 * 0x30;
      lStack_98 = lStack_a0;
      lStack_90 = lStack_a0;
      func_0x0001094e3170(&lStack_a0);
      *(undefined8 **)(param_1 + 0x30) = puVar8 + 6;
      if (lStack_100 < 0) {
        __ZdlPv(uStack_110);
      }
    }
    FUN_109380f8c(auStack_f8);
    lVar14 = lVar14 + 0x18;
  } while( true );
}



/* Entry: 1094e2fa0; end: 1094e2feb;  */

/* WARNING: Removing unreachable block (ram,0x0001094e2fc8) */

void FUN_1094e2fa0(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x30) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 1094e2fec; end: 1094e3097;  */

undefined8 * FUN_1094e2fec(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 5;
  FUN_1094e4a90(&puStack_28);
  puStack_28 = param_1 + 2;
  *param_1 = &PTR_FUN_110af7e20;
  FUN_1094dd9b4(&puStack_28);
  return param_1;
}



/* Entry: 1094e3098; end: 1094e30ab;  */

void FUN_1094e3098(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((undefined8 *)0x555555555555555 < puVar1) {
    func_0x000104c4f740();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        uVar4 = puVar2[1];
        uVar3 = *puVar2;
        *(undefined4 *)(param_3 + 2) = *(undefined4 *)(puVar2 + 2);
        param_3[1] = uVar4;
        *param_3 = uVar3;
        uVar4 = puVar2[4];
        uVar3 = puVar2[3];
        param_3[5] = puVar2[5];
        param_3[4] = uVar4;
        param_3[3] = uVar3;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[3] = 0;
        puVar2 = puVar2 + 6;
        param_3 = param_3 + 6;
      } while (puVar2 != param_2);
      do {
        if (*(char *)((long)puVar1 + 0x2f) < '\0') {
          __ZdlPv(puVar1[3]);
        }
        puVar1 = puVar1 + 6;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)puVar1 * 0x30);
  return;
}



/* Entry: 1094e30ac; end: 1094e31cf;  */

void FUN_1094e30ac(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((undefined8 *)0x555555555555555 < param_1) {
    func_0x000104c4f740();
    puVar1 = param_1;
    if (param_1 != param_2) {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        *(undefined4 *)(param_3 + 2) = *(undefined4 *)(puVar1 + 2);
        param_3[1] = uVar3;
        *param_3 = uVar2;
        uVar3 = puVar1[4];
        uVar2 = puVar1[3];
        param_3[5] = puVar1[5];
        param_3[4] = uVar3;
        param_3[3] = uVar2;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[3] = 0;
        puVar1 = puVar1 + 6;
        param_3 = param_3 + 6;
      } while (puVar1 != param_2);
      do {
        if (*(char *)((long)param_1 + 0x2f) < '\0') {
          __ZdlPv(param_1[3]);
        }
        param_1 = param_1 + 6;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm((long)param_1 * 0x30);
  return;
}



/* Entry: 1094e31d0; end: 1094e3f6b;  */

/* WARNING: Removing unreachable block (ram,0x0001094e36f8) */
/* WARNING: Removing unreachable block (ram,0x0001094e3500) */

void FUN_1094e31d0(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  byte bVar8;
  undefined1 uVar9;
  ulong *puVar10;
  long lVar11;
  bool bVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  undefined8 *puVar16;
  uint *puVar17;
  uint *puVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong *puVar22;
  undefined8 uVar23;
  int iVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulong uVar27;
  undefined8 uVar28;
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  undefined1 *puVar32;
  uint uVar33;
  ulong *unaff_x19;
  ulong *puVar34;
  uint *unaff_x20;
  uint *puVar35;
  uint *puVar36;
  uint *unaff_x21;
  ulong unaff_x22;
  ulong uVar37;
  uint *unaff_x23;
  ulong unaff_x24;
  ulong uVar38;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined1 auStack_f0 [8];
  uint *puStack_e8;
  uint *puStack_e0;
  uint *puStack_d8;
  uint uStack_cc;
  uint *puStack_c8;
  undefined7 uStack_c0;
  undefined1 uStack_b9;
  undefined7 uStack_b8;
  undefined7 uStack_b0;
  undefined1 uStack_a9;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_90;
  undefined1 uStack_89;
  undefined7 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  uint uStack_70;
  long lStack_68;
  
  uStack_cc = (uint)param_4;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar34 = unaff_x19;
  puVar35 = param_3;
  puVar18 = param_2;
  uVar37 = unaff_x22;
  puVar15 = param_1;
  uVar38 = unaff_x24;
  do {
    puStack_e0 = puVar18 + -0x18;
    puStack_d8 = puVar18 + -0xc;
    puStack_e8 = puVar18 + -0x24;
    puVar13 = puVar15;
LAB_1094e3228:
    while( true ) {
      puVar15 = puVar13;
      uVar19 = (long)puVar18 - (long)puVar15;
      uVar21 = ((long)uVar19 >> 4) * -0x5555555555555555;
      puVar17 = puVar18;
      if (uVar21 - 2 == 0 || (long)uVar21 < 2) {
        if (uVar21 < 2) goto LAB_1094e3f30;
        if (uVar21 == 2) {
          puVar13 = puVar18 + -0xc;
          if ((int)*puVar15 < (int)*puVar13) {
            uStack_78 = *(undefined8 *)(puVar15 + 2);
            uStack_80 = *(undefined8 *)puVar15;
            uStack_70 = puVar15[4];
            uVar23 = *(undefined8 *)(puVar15 + 6);
            uStack_b0 = (undefined7)*(undefined8 *)(puVar15 + 8);
            uVar28 = *(undefined8 *)((long)puVar15 + 0x27);
            uStack_a9 = (undefined1)uVar28;
            uStack_a8 = (undefined7)((ulong)uVar28 >> 8);
            uVar7 = *(undefined1 *)((long)puVar15 + 0x2f);
            puVar15[8] = 0;
            puVar15[9] = 0;
            puVar15[10] = 0;
            puVar15[0xb] = 0;
            puVar15[6] = 0;
            puVar15[7] = 0;
            uVar26 = *(undefined8 *)(puVar18 + -10);
            uVar25 = *(undefined8 *)puVar13;
            puVar15[4] = puVar18[-8];
            *(undefined8 *)(puVar15 + 2) = uVar26;
            *(undefined8 *)puVar15 = uVar25;
            uVar26 = *(undefined8 *)(puVar18 + -4);
            uVar25 = *(undefined8 *)(puVar18 + -6);
            *(undefined8 *)(puVar15 + 10) = *(undefined8 *)(puVar18 + -2);
            *(undefined8 *)(puVar15 + 8) = uVar26;
            *(undefined8 *)(puVar15 + 6) = uVar25;
            puVar18[-8] = uStack_70;
            *(undefined8 *)(puVar18 + -10) = uStack_78;
            *(undefined8 *)puVar13 = uStack_80;
            *(undefined8 *)(puVar18 + -6) = uVar23;
            *(undefined8 *)((long)puVar18 + -9) = uVar28;
            *(ulong *)(puVar18 + -4) = CONCAT17(uStack_a9,uStack_b0);
            *(undefined1 *)((long)puVar18 + -1) = uVar7;
          }
          goto LAB_1094e3f30;
        }
      }
      else {
        if (uVar21 == 3) {
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) goto LAB_1094e3f68;
          param_2 = puVar15 + 0xc;
          puVar32 = (undefined1 *)register0x00000008;
          param_3 = puStack_d8;
          goto code_r0x0001094e3f6c;
        }
        if (uVar21 == 4) {
          param_2 = puVar15 + 0xc;
          param_3 = puVar15 + 0x18;
          param_1 = puVar15;
          FUN_1094e3f6c();
          puVar13 = puVar18 + -0xc;
          if ((int)puVar15[0x18] < (int)*puVar13) {
            uStack_78 = *(undefined8 *)(puVar15 + 0x1a);
            uStack_80 = *(undefined8 *)(puVar15 + 0x18);
            uStack_70 = puVar15[0x1c];
            puVar36 = puVar15 + 0x1e;
            uVar23 = *(undefined8 *)puVar36;
            puVar14 = puVar15 + 0x20;
            uVar28 = *(undefined8 *)puVar14;
            uStack_a8 = (undefined7)((ulong)*(undefined8 *)((long)puVar15 + 0x87) >> 8);
            uStack_b0 = (undefined7)uVar28;
            uStack_a9 = (undefined1)((ulong)uVar28 >> 0x38);
            uVar7 = *(undefined1 *)((long)puVar15 + 0x8f);
            puVar36[0] = 0;
            puVar36[1] = 0;
            puVar14[0] = 0;
            puVar14[1] = 0;
            puVar15[0x22] = 0;
            puVar15[0x23] = 0;
            uVar33 = puVar18[-8];
            uVar25 = *(undefined8 *)puVar13;
            *(undefined8 *)(puVar15 + 0x1a) = *(undefined8 *)(puVar18 + -10);
            *(undefined8 *)(puVar15 + 0x18) = uVar25;
            puVar15[0x1c] = uVar33;
            uVar26 = *(undefined8 *)(puVar18 + -4);
            uVar25 = *(undefined8 *)(puVar18 + -6);
            *(undefined8 *)(puVar15 + 0x22) = *(undefined8 *)(puVar18 + -2);
            *(undefined8 *)(puVar15 + 0x20) = uVar26;
            *(undefined8 *)puVar36 = uVar25;
            puVar18[-8] = uStack_70;
            *(undefined8 *)(puVar18 + -10) = uStack_78;
            *(undefined8 *)puVar13 = uStack_80;
            *(undefined8 *)(puVar18 + -6) = uVar23;
            *(ulong *)((long)puVar18 + -9) = CONCAT71(uStack_a8,uStack_a9);
            *(undefined8 *)(puVar18 + -4) = uVar28;
            *(undefined1 *)((long)puVar18 + -1) = uVar7;
            if ((int)puVar15[0xc] < (int)puVar15[0x18]) {
              uStack_78 = *(undefined8 *)(puVar15 + 0xe);
              uStack_80 = *(undefined8 *)(puVar15 + 0xc);
              uStack_70 = puVar15[0x10];
              puVar18 = puVar15 + 0x12;
              uVar23 = *(undefined8 *)puVar18;
              uStack_b0 = (undefined7)*(undefined8 *)(puVar15 + 0x14);
              uVar28 = *(undefined8 *)((long)puVar15 + 0x57);
              uStack_a9 = (undefined1)uVar28;
              uStack_a8 = (undefined7)((ulong)uVar28 >> 8);
              *(undefined8 *)(puVar15 + 0xe) = *(undefined8 *)(puVar15 + 0x1a);
              *(undefined8 *)(puVar15 + 0xc) = *(undefined8 *)(puVar15 + 0x18);
              puVar15[0x10] = puVar15[0x1c];
              *(undefined8 *)(puVar15 + 0x14) = *(undefined8 *)(puVar15 + 0x20);
              *(undefined8 *)puVar18 = *(undefined8 *)puVar36;
              *(undefined8 *)(puVar15 + 0x16) = *(undefined8 *)(puVar15 + 0x22);
              puVar15[0x1c] = uStack_70;
              *(undefined8 *)(puVar15 + 0x1a) = uStack_78;
              *(undefined8 *)(puVar15 + 0x18) = uStack_80;
              *(undefined8 *)(puVar15 + 0x1e) = uVar23;
              *(ulong *)puVar14 = CONCAT17(uStack_a9,uStack_b0);
              *(undefined8 *)((long)puVar15 + 0x87) = uVar28;
              *(undefined1 *)((long)puVar15 + 0x8f) = *(undefined1 *)((long)puVar15 + 0x5f);
              if ((int)*puVar15 < (int)puVar15[0xc]) {
                uStack_78 = *(undefined8 *)(puVar15 + 2);
                uStack_80 = *(undefined8 *)puVar15;
                uStack_70 = puVar15[4];
                uStack_a8 = (undefined7)((ulong)*(undefined8 *)((long)puVar15 + 0x27) >> 8);
                uVar23 = *(undefined8 *)(puVar15 + 6);
                uVar28 = *(undefined8 *)(puVar15 + 8);
                uStack_b0 = (undefined7)uVar28;
                uStack_a9 = (undefined1)((ulong)uVar28 >> 0x38);
                puVar15[4] = puVar15[0x10];
                *(undefined8 *)(puVar15 + 2) = *(undefined8 *)(puVar15 + 0xe);
                *(undefined8 *)puVar15 = *(undefined8 *)(puVar15 + 0xc);
                *(undefined8 *)(puVar15 + 8) = *(undefined8 *)(puVar15 + 0x14);
                *(undefined8 *)(puVar15 + 6) = *(undefined8 *)puVar18;
                *(undefined8 *)(puVar15 + 10) = *(undefined8 *)(puVar15 + 0x16);
                puVar15[0x10] = uStack_70;
                *(undefined8 *)(puVar15 + 0xe) = uStack_78;
                *(undefined8 *)(puVar15 + 0xc) = uStack_80;
                *(undefined8 *)(puVar15 + 0x12) = uVar23;
                *(undefined8 *)(puVar15 + 0x14) = uVar28;
                *(ulong *)((long)puVar15 + 0x57) = CONCAT71(uStack_a8,uStack_a9);
                *(undefined1 *)((long)puVar15 + 0x5f) = *(undefined1 *)((long)puVar15 + 0x2f);
              }
            }
          }
          goto LAB_1094e3f30;
        }
        if (uVar21 == 5) {
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) goto LAB_1094e3f68;
          param_2 = puVar15 + 0xc;
          param_3 = puVar15 + 0x18;
          param_4 = puVar15 + 0x24;
          param_5 = puStack_d8;
          goto code_r0x0001094e4220;
        }
      }
      if ((long)uVar19 < 0x480) {
        puVar13 = puVar15 + 0xc;
        if ((uStack_cc & 1) == 0) {
          if (puVar15 != puVar18 && puVar13 != puVar18) {
            puVar34 = (ulong *)(puVar15 + 6);
            do {
              puVar35 = puVar13;
              uVar33 = puVar15[0xc];
              uVar37 = (ulong)uVar33;
              if ((int)*puVar15 < (int)uVar33) {
                uStack_78 = *(undefined8 *)(puVar15 + 0xf);
                uStack_80 = *(undefined8 *)(puVar15 + 0xd);
                uVar38 = *(ulong *)(puVar15 + 0x12);
                uStack_b0 = (undefined7)*(undefined8 *)(puVar15 + 0x14);
                uStack_a9 = (undefined1)*(undefined8 *)((long)puVar15 + 0x57);
                uStack_a8 = (undefined7)((ulong)*(undefined8 *)((long)puVar15 + 0x57) >> 8);
                uVar7 = *(undefined1 *)((long)puVar15 + 0x5f);
                puVar15[0x14] = 0;
                puVar15[0x15] = 0;
                puVar15[0x16] = 0;
                puVar15[0x17] = 0;
                puVar15[0x12] = 0;
                puVar15[0x13] = 0;
                bVar12 = *(char *)((long)puVar35 + 0x2f) < '\0';
                puVar10 = puVar34;
                do {
                  puVar22 = puVar10;
                  puVar22[4] = puVar22[-2];
                  puVar22[3] = puVar22[-3];
                  *(uint *)(puVar22 + 5) = (uint)puVar22[-1];
                  if (bVar12) {
                    param_1 = (uint *)puVar22[6];
                    __ZdlPv();
                  }
                  bVar12 = false;
                  puVar22[7] = puVar22[1];
                  puVar22[6] = *puVar22;
                  puVar22[8] = puVar22[2];
                  *(undefined1 *)((long)puVar22 + 0x17) = 0;
                  *(undefined1 *)puVar22 = 0;
                  puVar10 = puVar22 + -6;
                } while ((int)(uint)puVar22[-9] < (int)uVar33);
                *(uint *)(puVar22 + -3) = uVar33;
                *(undefined8 *)((long)puVar22 + -0xc) = uStack_78;
                *(undefined8 *)((long)puVar22 + -0x14) = uStack_80;
                *puVar22 = uVar38;
                *(ulong *)((long)puVar22 + 0xf) = CONCAT71(uStack_a8,uStack_a9);
                puVar22[1] = CONCAT17(uStack_a9,uStack_b0);
                *(undefined1 *)((long)puVar22 + 0x17) = uVar7;
              }
              puVar34 = puVar34 + 6;
              puVar13 = puVar35 + 0xc;
              puVar15 = puVar35;
            } while (puVar35 + 0xc != puVar18);
          }
          goto LAB_1094e3f30;
        }
        if (puVar15 == puVar18 || puVar13 == puVar18) goto LAB_1094e3f30;
        puVar34 = (ulong *)0x0;
        puVar14 = puVar15;
        goto LAB_1094e3a1c;
      }
      if (puVar35 == (uint *)0x0) {
        if (puVar15 == puVar18) goto LAB_1094e3f30;
        uVar27 = uVar21 - 2 >> 1;
        uVar29 = uVar27;
        goto LAB_1094e3b20;
      }
      param_1 = puVar15 + (uVar21 >> 1) * 0xc;
      if (uVar19 < 0x1801) {
        param_2 = puVar15;
        param_3 = puStack_d8;
        FUN_1094e3f6c();
      }
      else {
        FUN_1094e3f6c(puVar15,param_1,puStack_d8);
        puVar13 = param_1 + -0xc;
        FUN_1094e3f6c(puVar15 + 0xc,puVar13,puStack_e0);
        FUN_1094e3f6c(puVar15 + 0x18,param_1 + 0xc,puStack_e8);
        param_3 = param_1 + 0xc;
        param_2 = param_1;
        FUN_1094e3f6c();
        uStack_78 = *(undefined8 *)(puVar15 + 2);
        uStack_80 = *(undefined8 *)puVar15;
        uStack_70 = puVar15[4];
        uStack_a8 = (undefined7)((ulong)*(undefined8 *)((long)puVar15 + 0x27) >> 8);
        uVar23 = *(undefined8 *)(puVar15 + 6);
        uVar28 = *(undefined8 *)(puVar15 + 8);
        uStack_a9 = (undefined1)((ulong)uVar28 >> 0x38);
        uVar7 = *(undefined1 *)((long)puVar15 + 0x2f);
        puVar15[6] = 0;
        puVar15[7] = 0;
        puVar15[8] = 0;
        puVar15[9] = 0;
        puVar15[10] = 0;
        puVar15[0xb] = 0;
        uVar33 = param_1[4];
        uVar25 = *(undefined8 *)param_1;
        *(undefined8 *)(puVar15 + 2) = *(undefined8 *)(param_1 + 2);
        *(undefined8 *)puVar15 = uVar25;
        puVar15[4] = uVar33;
        uVar25 = *(undefined8 *)(param_1 + 10);
        uVar26 = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)(puVar15 + 8) = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)(puVar15 + 6) = uVar26;
        *(undefined8 *)(puVar15 + 10) = uVar25;
        param_1[4] = uStack_70;
        *(undefined8 *)(param_1 + 2) = uStack_78;
        *(undefined8 *)param_1 = uStack_80;
        *(undefined8 *)(param_1 + 6) = uVar23;
        *(ulong *)((long)param_1 + 0x27) = CONCAT71(uStack_a8,uStack_a9);
        *(undefined8 *)(param_1 + 8) = uVar28;
        *(undefined1 *)((long)param_1 + 0x2f) = uVar7;
        param_1 = puVar13;
      }
      puVar35 = (uint *)((long)puVar35 + -1);
      uVar33 = *puVar15;
      if (((uStack_cc & 1) != 0) || ((int)uVar33 < (int)puVar15[-0xc])) break;
      puVar34 = (ulong *)(puVar15 + 6);
      uVar37 = *puVar34;
      uVar28 = *(undefined8 *)(puVar15 + 3);
      uVar23 = *(undefined8 *)(puVar15 + 1);
      uStack_a8 = (undefined7)uVar28;
      uStack_a1 = (undefined1)((ulong)uVar28 >> 0x38);
      uStack_b0 = (undefined7)uVar23;
      uStack_a9 = (undefined1)((ulong)uVar23 >> 0x38);
      uStack_c0 = (undefined7)*(undefined8 *)(puVar15 + 8);
      uStack_b9 = (undefined1)*(undefined8 *)((long)puVar15 + 0x27);
      uStack_b8 = (undefined7)((ulong)*(undefined8 *)((long)puVar15 + 0x27) >> 8);
      uVar7 = *(undefined1 *)((long)puVar15 + 0x2f);
      puVar15[8] = 0;
      puVar15[9] = 0;
      puVar15[10] = 0;
      puVar15[0xb] = 0;
      *puVar34 = 0;
      puVar13 = puVar15;
      if ((int)*puStack_d8 < (int)uVar33) {
        do {
          puVar13 = puVar13 + 0xc;
        } while ((int)uVar33 <= (int)*puVar13);
      }
      else {
        do {
          puVar13 = puVar13 + 0xc;
          if (puVar18 <= puVar13) break;
        } while ((int)uVar33 <= (int)*puVar13);
      }
      if (puVar13 < puVar18) {
        do {
          puVar17 = puVar17 + -0xc;
        } while ((int)*puVar17 < (int)uVar33);
      }
      while (puVar13 < puVar17) {
        uStack_78 = *(undefined8 *)(puVar13 + 2);
        uStack_80 = *(undefined8 *)puVar13;
        uStack_70 = puVar13[4];
        uVar25 = *(undefined8 *)(puVar13 + 6);
        uStack_90 = (undefined7)*(undefined8 *)(puVar13 + 8);
        uVar26 = *(undefined8 *)((long)puVar13 + 0x27);
        uStack_89 = (undefined1)uVar26;
        uStack_88 = (undefined7)((ulong)uVar26 >> 8);
        uVar9 = *(undefined1 *)((long)puVar13 + 0x2f);
        puVar13[8] = 0;
        puVar13[9] = 0;
        puVar13[10] = 0;
        puVar13[0xb] = 0;
        puVar13[6] = 0;
        puVar13[7] = 0;
        uVar40 = *(undefined8 *)(puVar17 + 2);
        uVar39 = *(undefined8 *)puVar17;
        puVar13[4] = puVar17[4];
        *(undefined8 *)(puVar13 + 2) = uVar40;
        *(undefined8 *)puVar13 = uVar39;
        uVar40 = *(undefined8 *)(puVar17 + 8);
        uVar39 = *(undefined8 *)(puVar17 + 6);
        *(undefined8 *)(puVar13 + 10) = *(undefined8 *)(puVar17 + 10);
        *(undefined8 *)(puVar13 + 8) = uVar40;
        *(undefined8 *)(puVar13 + 6) = uVar39;
        puVar17[4] = uStack_70;
        *(undefined8 *)(puVar17 + 2) = uStack_78;
        *(undefined8 *)puVar17 = uStack_80;
        *(undefined8 *)(puVar17 + 6) = uVar25;
        *(ulong *)(puVar17 + 8) = CONCAT17(uStack_89,uStack_90);
        *(undefined8 *)((long)puVar17 + 0x27) = uVar26;
        *(undefined1 *)((long)puVar17 + 0x2f) = uVar9;
        do {
          puVar13 = puVar13 + 0xc;
        } while ((int)uVar33 <= (int)*puVar13);
        do {
          puVar17 = puVar17 + -0xc;
        } while ((int)*puVar17 < (int)uVar33);
      }
      if (puVar13 + -0xc == puVar15) {
        puVar13[-0xc] = uVar33;
        *(undefined8 *)(puVar13 + -9) = uVar28;
        *(undefined8 *)(puVar13 + -0xb) = uVar23;
      }
      else {
        uVar28 = *(undefined8 *)(puVar13 + -10);
        uVar23 = *(undefined8 *)(puVar13 + -0xc);
        puVar15[4] = puVar13[-8];
        *(undefined8 *)(puVar15 + 2) = uVar28;
        *(undefined8 *)puVar15 = uVar23;
        if (*(char *)((long)puVar15 + 0x2f) < '\0') {
          param_1 = (uint *)*puVar34;
          __ZdlPv();
        }
        uVar23 = *(undefined8 *)(puVar13 + -4);
        uVar19 = *(ulong *)(puVar13 + -6);
        *(undefined8 *)(puVar15 + 10) = *(undefined8 *)(puVar13 + -2);
        *(undefined8 *)(puVar15 + 8) = uVar23;
        *puVar34 = uVar19;
        *(undefined1 *)((long)puVar13 + -1) = 0;
        *(undefined1 *)(puVar13 + -6) = 0;
        puVar13[-0xc] = uVar33;
        *(ulong *)(puVar13 + -9) = CONCAT17(uStack_a1,uStack_a8);
        *(ulong *)(puVar13 + -0xb) = CONCAT17(uStack_a9,uStack_b0);
      }
      uStack_cc = 0;
      *(ulong *)(puVar13 + -6) = uVar37;
      *(ulong *)((long)puVar13 + -9) = CONCAT71(uStack_b8,uStack_b9);
      *(ulong *)(puVar13 + -4) = CONCAT17(uStack_b9,uStack_c0);
      *(undefined1 *)((long)puVar13 + -1) = uVar7;
    }
    lVar20 = 0;
    puVar34 = (ulong *)(puVar15 + 6);
    uVar37 = *puVar34;
    uVar28 = *(undefined8 *)(puVar15 + 3);
    uVar23 = *(undefined8 *)(puVar15 + 1);
    uStack_a8 = (undefined7)uVar28;
    uStack_a1 = (undefined1)((ulong)uVar28 >> 0x38);
    uStack_b0 = (undefined7)uVar23;
    uStack_a9 = (undefined1)((ulong)uVar23 >> 0x38);
    uStack_c0 = (undefined7)*(undefined8 *)(puVar15 + 8);
    uStack_b9 = (undefined1)*(undefined8 *)((long)puVar15 + 0x27);
    uStack_b8 = (undefined7)((ulong)*(undefined8 *)((long)puVar15 + 0x27) >> 8);
    bVar8 = *(byte *)((long)puVar15 + 0x2f);
    uVar38 = (ulong)bVar8;
    puVar15[8] = 0;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    *puVar34 = 0;
    do {
      lVar11 = lVar20 + 0x30;
      lVar20 = lVar20 + 0x30;
    } while ((int)uVar33 < *(int *)((long)puVar15 + lVar11));
    puVar14 = (uint *)((long)puVar15 + lVar20);
    puVar36 = puVar18;
    if (lVar20 == 0x30) {
      do {
        if (puVar36 <= puVar14) break;
        puVar36 = puVar36 + -0xc;
      } while ((int)*puVar36 <= (int)uVar33);
    }
    else {
      do {
        puVar36 = puVar36 + -0xc;
      } while ((int)*puVar36 <= (int)uVar33);
    }
    puVar17 = puVar36;
    puVar13 = puVar14;
    if (puVar14 < puVar36) {
      do {
        uStack_78 = *(undefined8 *)(puVar13 + 2);
        uStack_80 = *(undefined8 *)puVar13;
        uStack_70 = puVar13[4];
        uVar25 = *(undefined8 *)(puVar13 + 6);
        uStack_90 = (undefined7)*(undefined8 *)(puVar13 + 8);
        uVar26 = *(undefined8 *)((long)puVar13 + 0x27);
        uStack_89 = (undefined1)uVar26;
        uStack_88 = (undefined7)((ulong)uVar26 >> 8);
        uVar7 = *(undefined1 *)((long)puVar13 + 0x2f);
        puVar13[8] = 0;
        puVar13[9] = 0;
        puVar13[10] = 0;
        puVar13[0xb] = 0;
        puVar13[6] = 0;
        puVar13[7] = 0;
        uVar40 = *(undefined8 *)(puVar17 + 2);
        uVar39 = *(undefined8 *)puVar17;
        puVar13[4] = puVar17[4];
        *(undefined8 *)(puVar13 + 2) = uVar40;
        *(undefined8 *)puVar13 = uVar39;
        uVar40 = *(undefined8 *)(puVar17 + 8);
        uVar39 = *(undefined8 *)(puVar17 + 6);
        *(undefined8 *)(puVar13 + 10) = *(undefined8 *)(puVar17 + 10);
        *(undefined8 *)(puVar13 + 8) = uVar40;
        *(undefined8 *)(puVar13 + 6) = uVar39;
        puVar17[4] = uStack_70;
        *(undefined8 *)(puVar17 + 2) = uStack_78;
        *(undefined8 *)puVar17 = uStack_80;
        *(undefined8 *)(puVar17 + 6) = uVar25;
        *(ulong *)(puVar17 + 8) = CONCAT17(uStack_89,uStack_90);
        *(undefined8 *)((long)puVar17 + 0x27) = uVar26;
        *(undefined1 *)((long)puVar17 + 0x2f) = uVar7;
        do {
          puVar13 = puVar13 + 0xc;
        } while ((int)uVar33 < (int)*puVar13);
        do {
          puVar17 = puVar17 + -0xc;
        } while ((int)*puVar17 <= (int)uVar33);
      } while (puVar13 < puVar17);
    }
    puVar17 = puVar13 + -0xc;
    puStack_c8 = puVar35;
    if (puVar17 == puVar15) {
      puVar13[-0xc] = uVar33;
      *(undefined8 *)(puVar13 + -9) = uVar28;
      *(undefined8 *)(puVar13 + -0xb) = uVar23;
    }
    else {
      uVar28 = *(undefined8 *)(puVar13 + -10);
      uVar23 = *(undefined8 *)puVar17;
      puVar15[4] = puVar13[-8];
      *(undefined8 *)(puVar15 + 2) = uVar28;
      *(undefined8 *)puVar15 = uVar23;
      if (*(char *)((long)puVar15 + 0x2f) < '\0') {
        __ZdlPv(*puVar34);
      }
      uVar23 = *(undefined8 *)(puVar13 + -4);
      uVar19 = *(ulong *)(puVar13 + -6);
      *(undefined8 *)(puVar15 + 10) = *(undefined8 *)(puVar13 + -2);
      *(undefined8 *)(puVar15 + 8) = uVar23;
      *puVar34 = uVar19;
      *(undefined1 *)((long)puVar13 + -1) = 0;
      *(undefined1 *)(puVar13 + -6) = 0;
      puVar13[-0xc] = uVar33;
      *(ulong *)(puVar13 + -9) = CONCAT17(uStack_a1,uStack_a8);
      *(ulong *)(puVar13 + -0xb) = CONCAT17(uStack_a9,uStack_b0);
    }
    puVar35 = puStack_c8;
    *(ulong *)(puVar13 + -6) = uVar37;
    *(ulong *)((long)puVar13 + -9) = CONCAT71(uStack_b8,uStack_b9);
    *(ulong *)(puVar13 + -4) = CONCAT17(uStack_b9,uStack_c0);
    *(byte *)((long)puVar13 + -1) = bVar8;
    if (puVar14 < puVar36) goto LAB_1094e3550;
    puVar14 = puVar15;
    FUN_1094e4678(puVar15,puVar17);
    param_1 = puVar13;
    param_2 = puVar18;
    FUN_1094e4678();
    if ((int)param_1 == 0) goto code_r0x0001094e354c;
    puVar18 = puVar17;
    if (((ulong)puVar14 & 1) != 0) goto LAB_1094e3f30;
  } while( true );
LAB_1094e3a1c:
  do {
    puVar35 = puVar13;
    uVar33 = puVar14[0xc];
    uVar37 = (ulong)uVar33;
    if ((int)*puVar14 < (int)uVar33) {
      uStack_78 = *(undefined8 *)(puVar14 + 0xf);
      uStack_80 = *(undefined8 *)(puVar14 + 0xd);
      uVar38 = *(ulong *)(puVar14 + 0x12);
      uStack_b0 = (undefined7)*(undefined8 *)(puVar14 + 0x14);
      uStack_a9 = (undefined1)*(undefined8 *)((long)puVar14 + 0x57);
      uStack_a8 = (undefined7)((ulong)*(undefined8 *)((long)puVar14 + 0x57) >> 8);
      uVar7 = *(undefined1 *)((long)puVar14 + 0x5f);
      puVar14[0x14] = 0;
      puVar14[0x15] = 0;
      puVar14[0x16] = 0;
      puVar14[0x17] = 0;
      puVar14[0x12] = 0;
      puVar14[0x13] = 0;
      bVar12 = *(char *)((long)puVar35 + 0x2f) < '\0';
      puVar10 = puVar34;
      do {
        puVar22 = puVar10;
        puVar16 = (undefined8 *)((long)puVar15 + (long)puVar22);
        puVar16[7] = puVar16[1];
        puVar16[6] = *puVar16;
        *(undefined4 *)(puVar16 + 8) = *(undefined4 *)(puVar16 + 2);
        if (bVar12) {
          param_1 = (uint *)puVar16[9];
          __ZdlPv();
        }
        puVar16[10] = puVar16[4];
        puVar16[9] = puVar16[3];
        puVar16[0xb] = puVar16[5];
        *(undefined1 *)((long)puVar16 + 0x2f) = 0;
        *(undefined1 *)(puVar16 + 3) = 0;
        puVar13 = puVar15;
        if (puVar22 == (ulong *)0x0) goto LAB_1094e3acc;
        bVar12 = false;
        puVar10 = puVar22 + -6;
      } while (*(int *)((undefined1 *)((long)puVar15 + (long)puVar22) + -0x30) < (int)uVar33);
      puVar13 = (uint *)((undefined1 *)((long)puVar15 + (long)(puVar22 + -6)) + 0x30);
LAB_1094e3acc:
      *puVar13 = uVar33;
      *(undefined8 *)(puVar13 + 3) = uStack_78;
      *(undefined8 *)(puVar13 + 1) = uStack_80;
      *(ulong *)((undefined1 *)((long)puVar15 + (long)puVar22) + 0x18) = uVar38;
      *(ulong *)(puVar13 + 8) = CONCAT17(uStack_a9,uStack_b0);
      *(ulong *)((long)puVar13 + 0x27) = CONCAT71(uStack_a8,uStack_a9);
      *(undefined1 *)((long)puVar13 + 0x2f) = uVar7;
    }
    puVar34 = puVar34 + 6;
    puVar13 = puVar35 + 0xc;
    puVar14 = puVar35;
  } while (puVar35 + 0xc != puVar18);
  goto LAB_1094e3f30;
code_r0x0001094e354c:
  if (((ulong)puVar14 & 1) == 0) {
LAB_1094e3550:
    param_4 = (uint *)(ulong)(uStack_cc & 1);
    param_3 = puVar35;
    FUN_1094e31d0();
    uStack_cc = 0;
    param_1 = puVar15;
    param_2 = puVar17;
  }
  goto LAB_1094e3228;
LAB_1094e3b20:
  do {
    if ((long)uVar29 <= (long)uVar27) {
      uVar2 = uVar29 << 1 | 1;
      puVar13 = puVar15 + uVar2 * 0xc;
      uVar30 = uVar29 * 2 + 2;
      if ((long)uVar30 < (long)uVar21) {
        uVar4 = *puVar13;
        uVar5 = puVar13[0xc];
        uVar33 = uVar4;
        if ((int)uVar5 <= (int)uVar4) {
          uVar33 = uVar5;
        }
        puVar17 = puVar13 + 0xc;
        if ((int)uVar4 <= (int)uVar5) {
          uVar30 = uVar2;
          puVar17 = puVar13;
        }
      }
      else {
        uVar33 = *puVar13;
        uVar30 = uVar2;
        puVar17 = puVar13;
      }
      puVar13 = puVar15 + uVar29 * 0xc;
      uVar4 = *puVar13;
      if ((int)uVar33 <= (int)uVar4) {
        uVar26 = *(undefined8 *)(puVar13 + 3);
        uVar25 = *(undefined8 *)(puVar13 + 1);
        uVar23 = *(undefined8 *)(puVar13 + 6);
        uVar28 = *(undefined8 *)(puVar13 + 8);
        uStack_a8 = (undefined7)((ulong)*(undefined8 *)((long)puVar13 + 0x27) >> 8);
        uStack_b0 = (undefined7)uVar28;
        uStack_a9 = (undefined1)((ulong)uVar28 >> 0x38);
        uVar7 = *(undefined1 *)((long)puVar13 + 0x2f);
        puVar13[6] = 0;
        puVar13[7] = 0;
        puVar13[8] = 0;
        puVar13[9] = 0;
        puVar13[10] = 0;
        puVar13[0xb] = 0;
        do {
          puVar14 = puVar17;
          uVar40 = *(undefined8 *)(puVar14 + 2);
          uVar39 = *(undefined8 *)puVar14;
          puVar13[4] = puVar14[4];
          *(undefined8 *)(puVar13 + 2) = uVar40;
          *(undefined8 *)puVar13 = uVar39;
          uVar40 = *(undefined8 *)(puVar14 + 8);
          uVar39 = *(undefined8 *)(puVar14 + 6);
          *(undefined8 *)(puVar13 + 10) = *(undefined8 *)(puVar14 + 10);
          *(undefined8 *)(puVar13 + 8) = uVar40;
          *(undefined8 *)(puVar13 + 6) = uVar39;
          *(undefined1 *)((long)puVar14 + 0x2f) = 0;
          *(undefined1 *)(puVar14 + 6) = 0;
          if ((long)uVar27 < (long)uVar30) break;
          uVar2 = uVar30 << 1 | 1;
          puVar13 = puVar15 + uVar2 * 0xc;
          uVar30 = uVar30 * 2 + 2;
          if ((long)uVar30 < (long)uVar21) {
            uVar5 = *puVar13;
            uVar6 = puVar13[0xc];
            param_5 = (uint *)(ulong)uVar6;
            uVar33 = uVar5;
            if ((int)uVar6 <= (int)uVar5) {
              uVar33 = uVar6;
            }
            puVar17 = puVar13 + 0xc;
            if ((int)uVar5 <= (int)uVar6) {
              uVar30 = uVar2;
              puVar17 = puVar13;
            }
          }
          else {
            uVar33 = *puVar13;
            uVar30 = uVar2;
            puVar17 = puVar13;
          }
          puVar13 = puVar14;
        } while ((int)uVar33 <= (int)uVar4);
        *puVar14 = uVar4;
        *(undefined8 *)(puVar14 + 3) = uVar26;
        *(undefined8 *)(puVar14 + 1) = uVar25;
        *(undefined8 *)(puVar14 + 6) = uVar23;
        *(undefined8 *)(puVar14 + 8) = uVar28;
        *(ulong *)((long)puVar14 + 0x27) = CONCAT71(uStack_a8,uStack_a9);
        *(undefined1 *)((long)puVar14 + 0x2f) = uVar7;
      }
    }
    bVar12 = uVar29 != 0;
    uVar29 = uVar29 - 1;
  } while (bVar12);
  lVar20 = (uVar19 >> 4) * -0x5555555555555555;
  do {
    puVar32 = (undefined1 *)0x0;
    uStack_78 = *(undefined8 *)(puVar15 + 2);
    uStack_80 = *(undefined8 *)puVar15;
    uStack_70 = puVar15[4];
    uVar23 = *(undefined8 *)(puVar15 + 6);
    uStack_c0 = (undefined7)*(undefined8 *)(puVar15 + 8);
    uVar28 = *(undefined8 *)((long)puVar15 + 0x27);
    uStack_b9 = (undefined1)uVar28;
    uStack_b8 = (undefined7)((ulong)uVar28 >> 8);
    uVar7 = *(undefined1 *)((long)puVar15 + 0x2f);
    puVar15[8] = 0;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[6] = 0;
    puVar15[7] = 0;
    puVar13 = puVar15;
    do {
      puVar17 = puVar13 + (long)puVar32 * 0xc;
      param_4 = (uint *)((long)puVar32 * 2);
      puVar3 = (undefined1 *)((long)puVar32 << 1 | 1);
      puVar1 = (undefined1 *)((long)param_4 + 2);
      param_3 = puVar17;
      param_1 = puVar17 + 0xc;
      puVar32 = puVar3;
      if ((long)puVar1 < lVar20) {
        param_3 = puVar17 + 0x18;
        param_4 = (uint *)(ulong)*param_3;
        param_5 = (uint *)(ulong)puVar17[0xc];
        param_1 = param_3;
        puVar32 = puVar1;
        if ((int)puVar17[0xc] <= (int)*param_3) {
          param_1 = puVar17 + 0xc;
          puVar32 = puVar3;
        }
      }
      uVar26 = *(undefined8 *)(param_1 + 2);
      uVar25 = *(undefined8 *)param_1;
      puVar13[4] = param_1[4];
      *(undefined8 *)(puVar13 + 2) = uVar26;
      *(undefined8 *)puVar13 = uVar25;
      uVar26 = *(undefined8 *)(param_1 + 8);
      uVar25 = *(undefined8 *)(param_1 + 6);
      param_2 = *(uint **)(param_1 + 10);
      *(uint **)(puVar13 + 10) = param_2;
      *(undefined8 *)(puVar13 + 8) = uVar26;
      *(undefined8 *)(puVar13 + 6) = uVar25;
      *(undefined1 *)((long)param_1 + 0x2f) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
      puVar13 = param_1;
    } while ((long)puVar32 <= (long)(lVar20 - 2U >> 1));
    puVar17 = puVar18 + -0xc;
    if (param_1 == puVar17) {
      *(undefined8 *)(param_1 + 2) = uStack_78;
      *(undefined8 *)param_1 = uStack_80;
      param_1[4] = uStack_70;
      *(undefined8 *)(param_1 + 6) = uVar23;
      *(ulong *)(param_1 + 8) = CONCAT17(uStack_b9,uStack_c0);
      *(undefined8 *)((long)param_1 + 0x27) = uVar28;
      *(undefined1 *)((long)param_1 + 0x2f) = uVar7;
    }
    else {
      uVar26 = *(undefined8 *)(puVar18 + -10);
      uVar25 = *(undefined8 *)puVar17;
      param_1[4] = puVar18[-8];
      *(undefined8 *)(param_1 + 2) = uVar26;
      *(undefined8 *)param_1 = uVar25;
      uVar26 = *(undefined8 *)(puVar18 + -4);
      uVar25 = *(undefined8 *)(puVar18 + -6);
      *(undefined8 *)(param_1 + 10) = *(undefined8 *)(puVar18 + -2);
      *(undefined8 *)(param_1 + 8) = uVar26;
      *(undefined8 *)(param_1 + 6) = uVar25;
      *(undefined8 *)(puVar18 + -10) = uStack_78;
      *(undefined8 *)puVar17 = uStack_80;
      puVar18[-8] = uStack_70;
      *(undefined8 *)(puVar18 + -6) = uVar23;
      *(undefined8 *)((long)puVar18 + -9) = uVar28;
      *(ulong *)(puVar18 + -4) = CONCAT17(uStack_b9,uStack_c0);
      *(undefined1 *)((long)puVar18 + -1) = uVar7;
      puVar32 = (undefined1 *)((long)param_1 + (0x30 - (long)puVar15));
      if (0x30 < (long)puVar32) {
        uVar19 = ((ulong)puVar32 >> 4) * -0x5555555555555555 - 2 >> 1;
        uVar33 = *param_1;
        if ((int)uVar33 < (int)puVar15[uVar19 * 0xc]) {
          uVar26 = *(undefined8 *)(param_1 + 3);
          uVar25 = *(undefined8 *)(param_1 + 1);
          uStack_a8 = (undefined7)uVar26;
          uStack_a1 = (undefined1)((ulong)uVar26 >> 0x38);
          uStack_b0 = (undefined7)uVar25;
          uStack_a9 = (undefined1)((ulong)uVar25 >> 0x38);
          uVar23 = *(undefined8 *)(param_1 + 6);
          uStack_90 = (undefined7)*(undefined8 *)(param_1 + 8);
          uVar28 = *(undefined8 *)((long)param_1 + 0x27);
          uStack_89 = (undefined1)uVar28;
          uStack_88 = (undefined7)((ulong)uVar28 >> 8);
          uVar7 = *(undefined1 *)((long)param_1 + 0x2f);
          param_1[8] = 0;
          param_1[9] = 0;
          param_1[10] = 0;
          param_1[0xb] = 0;
          param_1[6] = 0;
          param_1[7] = 0;
          puVar18 = param_1;
          puVar13 = puVar15 + uVar19 * 0xc;
          do {
            puVar14 = puVar13;
            param_1 = puVar18;
            uVar40 = *(undefined8 *)(puVar14 + 2);
            uVar39 = *(undefined8 *)puVar14;
            param_1[4] = puVar14[4];
            *(undefined8 *)(param_1 + 2) = uVar40;
            *(undefined8 *)param_1 = uVar39;
            uVar40 = *(undefined8 *)(puVar14 + 8);
            uVar39 = *(undefined8 *)(puVar14 + 6);
            *(undefined8 *)(param_1 + 10) = *(undefined8 *)(puVar14 + 10);
            *(undefined8 *)(param_1 + 8) = uVar40;
            *(undefined8 *)(param_1 + 6) = uVar39;
            *(undefined1 *)((long)puVar14 + 0x2f) = 0;
            *(undefined1 *)(puVar14 + 6) = 0;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1 >> 1;
            uVar4 = puVar15[uVar19 * 0xc];
            param_1 = (uint *)(ulong)uVar4;
            puVar18 = puVar14;
            puVar13 = puVar15 + uVar19 * 0xc;
          } while ((int)uVar33 < (int)uVar4);
          *puVar14 = uVar33;
          *(undefined8 *)(puVar14 + 3) = uVar26;
          *(undefined8 *)(puVar14 + 1) = uVar25;
          *(undefined8 *)(puVar14 + 6) = uVar23;
          *(ulong *)(puVar14 + 8) = CONCAT17(uStack_89,uStack_90);
          *(undefined8 *)((long)puVar14 + 0x27) = uVar28;
          *(undefined1 *)((long)puVar14 + 0x2f) = uVar7;
        }
      }
    }
    bVar12 = 2 < lVar20;
    lVar20 = lVar20 + -1;
    puVar18 = puVar17;
  } while (bVar12);
LAB_1094e3f30:
  puVar18 = puVar17;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
LAB_1094e3f68:
  unaff_x24 = uVar38;
  unaff_x23 = puVar15;
  unaff_x22 = uVar37;
  unaff_x21 = puVar18;
  unaff_x20 = puVar35;
  unaff_x19 = puVar34;
  puVar15 = param_1;
  unaff_x30 = FUN_1094e3f6c;
  ___stack_chk_fail();
  puVar32 = auStack_f0;
  unaff_x29 = &stack0xfffffffffffffff0;
code_r0x0001094e3f6c:
  register0x00000008 = (BADSPACEBASE *)(puVar32 + -0x40);
  *(undefined1 **)(puVar32 + -0x10) = unaff_x29;
  *(code **)(puVar32 + -8) = unaff_x30;
  unaff_x29 = puVar32 + -0x10;
  *(undefined8 *)(puVar32 + -0x18) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar33 = *param_2;
  if ((int)*puVar15 < (int)uVar33) {
    if ((int)uVar33 < (int)*param_3) {
      uVar23 = *(undefined8 *)puVar15;
      *(undefined8 *)(puVar32 + -0x28) = *(undefined8 *)(puVar15 + 2);
      *(undefined8 *)(puVar32 + -0x30) = uVar23;
      *(uint *)(puVar32 + -0x20) = puVar15[4];
      uVar23 = *(undefined8 *)(puVar15 + 6);
      *(undefined8 *)(puVar32 + -0x40) = *(undefined8 *)(puVar15 + 8);
      *(undefined8 *)(puVar32 + -0x39) = *(undefined8 *)((long)puVar15 + 0x27);
      uVar7 = *(undefined1 *)((long)puVar15 + 0x2f);
      puVar15[8] = 0;
      puVar15[9] = 0;
      puVar15[10] = 0;
      puVar15[0xb] = 0;
      puVar15[6] = 0;
      puVar15[7] = 0;
      uVar25 = *(undefined8 *)(param_3 + 2);
      uVar28 = *(undefined8 *)param_3;
      puVar15[4] = param_3[4];
      *(undefined8 *)(puVar15 + 2) = uVar25;
      *(undefined8 *)puVar15 = uVar28;
      uVar28 = *(undefined8 *)(param_3 + 10);
      uVar25 = *(undefined8 *)(param_3 + 6);
      *(undefined8 *)(puVar15 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)(puVar15 + 6) = uVar25;
      *(undefined8 *)(puVar15 + 10) = uVar28;
    }
    else {
      uVar23 = *(undefined8 *)puVar15;
      *(undefined8 *)(puVar32 + -0x28) = *(undefined8 *)(puVar15 + 2);
      *(undefined8 *)(puVar32 + -0x30) = uVar23;
      *(uint *)(puVar32 + -0x20) = puVar15[4];
      uVar23 = *(undefined8 *)(puVar15 + 6);
      *(undefined8 *)(puVar32 + -0x40) = *(undefined8 *)(puVar15 + 8);
      *(undefined8 *)(puVar32 + -0x39) = *(undefined8 *)((long)puVar15 + 0x27);
      uVar7 = *(undefined1 *)((long)puVar15 + 0x2f);
      puVar15[8] = 0;
      puVar15[9] = 0;
      puVar15[10] = 0;
      puVar15[0xb] = 0;
      puVar15[6] = 0;
      puVar15[7] = 0;
      uVar25 = *(undefined8 *)(param_2 + 2);
      uVar28 = *(undefined8 *)param_2;
      puVar15[4] = param_2[4];
      *(undefined8 *)(puVar15 + 2) = uVar25;
      *(undefined8 *)puVar15 = uVar28;
      uVar28 = *(undefined8 *)(param_2 + 10);
      uVar25 = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(puVar15 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(puVar15 + 6) = uVar25;
      *(undefined8 *)(puVar15 + 10) = uVar28;
      uVar28 = *(undefined8 *)(puVar32 + -0x30);
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(puVar32 + -0x28);
      *(undefined8 *)param_2 = uVar28;
      param_2[4] = *(uint *)(puVar32 + -0x20);
      *(undefined8 *)(param_2 + 6) = uVar23;
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(puVar32 + -0x40);
      *(undefined8 *)((long)param_2 + 0x27) = *(undefined8 *)(puVar32 + -0x39);
      *(undefined1 *)((long)param_2 + 0x2f) = uVar7;
      if ((int)*param_3 <= (int)*param_2) goto LAB_1094e41f8;
      uVar28 = *(undefined8 *)param_2;
      *(undefined8 *)(puVar32 + -0x28) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(puVar32 + -0x30) = uVar28;
      *(uint *)(puVar32 + -0x20) = param_2[4];
      *(undefined8 *)(puVar32 + -0x40) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(puVar32 + -0x39) = *(undefined8 *)((long)param_2 + 0x27);
      param_2[8] = 0;
      param_2[9] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      uVar33 = param_3[4];
      uVar28 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_2 = uVar28;
      param_2[4] = uVar33;
      uVar28 = *(undefined8 *)(param_3 + 10);
      uVar25 = *(undefined8 *)(param_3 + 6);
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)(param_2 + 6) = uVar25;
      *(undefined8 *)(param_2 + 10) = uVar28;
    }
    uVar28 = *(undefined8 *)(puVar32 + -0x30);
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(puVar32 + -0x28);
    *(undefined8 *)param_3 = uVar28;
    param_3[4] = *(uint *)(puVar32 + -0x20);
    uVar28 = *(undefined8 *)(puVar32 + -0x40);
    *(undefined8 *)(param_3 + 6) = uVar23;
    *(undefined8 *)(param_3 + 8) = uVar28;
    *(undefined8 *)((long)param_3 + 0x27) = *(undefined8 *)(puVar32 + -0x39);
    *(undefined1 *)((long)param_3 + 0x2f) = uVar7;
  }
  else if ((int)uVar33 < (int)*param_3) {
    uVar23 = *(undefined8 *)param_2;
    *(undefined8 *)(puVar32 + -0x28) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(puVar32 + -0x30) = uVar23;
    *(uint *)(puVar32 + -0x20) = param_2[4];
    puVar18 = param_2 + 6;
    uVar23 = *(undefined8 *)puVar18;
    puVar35 = param_2 + 8;
    *(undefined8 *)(puVar32 + -0x40) = *(undefined8 *)puVar35;
    *(undefined8 *)(puVar32 + -0x39) = *(undefined8 *)((long)param_2 + 0x27);
    uVar7 = *(undefined1 *)((long)param_2 + 0x2f);
    puVar18[0] = 0;
    puVar18[1] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    puVar35[0] = 0;
    puVar35[1] = 0;
    uVar25 = *(undefined8 *)(param_3 + 2);
    uVar28 = *(undefined8 *)param_3;
    param_2[4] = param_3[4];
    *(undefined8 *)(param_2 + 2) = uVar25;
    *(undefined8 *)param_2 = uVar28;
    uVar28 = *(undefined8 *)(param_3 + 10);
    uVar25 = *(undefined8 *)(param_3 + 6);
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)puVar18 = uVar25;
    *(undefined8 *)(param_2 + 10) = uVar28;
    uVar28 = *(undefined8 *)(puVar32 + -0x30);
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(puVar32 + -0x28);
    *(undefined8 *)param_3 = uVar28;
    param_3[4] = *(uint *)(puVar32 + -0x20);
    uVar28 = *(undefined8 *)(puVar32 + -0x40);
    *(undefined8 *)(param_3 + 6) = uVar23;
    *(undefined8 *)(param_3 + 8) = uVar28;
    *(undefined8 *)((long)param_3 + 0x27) = *(undefined8 *)(puVar32 + -0x39);
    *(undefined1 *)((long)param_3 + 0x2f) = uVar7;
    if ((int)*puVar15 < (int)*param_2) {
      uVar23 = *(undefined8 *)puVar15;
      *(undefined8 *)(puVar32 + -0x28) = *(undefined8 *)(puVar15 + 2);
      *(undefined8 *)(puVar32 + -0x30) = uVar23;
      *(uint *)(puVar32 + -0x20) = puVar15[4];
      uVar23 = *(undefined8 *)(puVar15 + 6);
      *(undefined8 *)(puVar32 + -0x40) = *(undefined8 *)(puVar15 + 8);
      *(undefined8 *)(puVar32 + -0x39) = *(undefined8 *)((long)puVar15 + 0x27);
      uVar7 = *(undefined1 *)((long)puVar15 + 0x2f);
      puVar15[8] = 0;
      puVar15[9] = 0;
      puVar15[10] = 0;
      puVar15[0xb] = 0;
      puVar15[6] = 0;
      puVar15[7] = 0;
      uVar25 = *(undefined8 *)(param_2 + 2);
      uVar28 = *(undefined8 *)param_2;
      puVar15[4] = param_2[4];
      *(undefined8 *)(puVar15 + 2) = uVar25;
      *(undefined8 *)puVar15 = uVar28;
      uVar28 = *(undefined8 *)(param_2 + 10);
      uVar25 = *(undefined8 *)puVar18;
      *(undefined8 *)(puVar15 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(puVar15 + 6) = uVar25;
      *(undefined8 *)(puVar15 + 10) = uVar28;
      uVar28 = *(undefined8 *)(puVar32 + -0x30);
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(puVar32 + -0x28);
      *(undefined8 *)param_2 = uVar28;
      param_2[4] = *(uint *)(puVar32 + -0x20);
      *(undefined8 *)(param_2 + 6) = uVar23;
      *(undefined8 *)puVar35 = *(undefined8 *)(puVar32 + -0x40);
      *(undefined8 *)((long)param_2 + 0x27) = *(undefined8 *)(puVar32 + -0x39);
      *(undefined1 *)((long)param_2 + 0x2f) = uVar7;
    }
  }
LAB_1094e41f8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar32 + -0x18)) {
    return;
  }
  unaff_x30 = FUN_1094e4220;
  ___stack_chk_fail();
code_r0x0001094e4220:
  *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(uint **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(uint **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(uint **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x48) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar35 = puVar15;
  puVar18 = param_2;
  FUN_1094e3f6c();
  if ((int)*param_3 < (int)*param_4) {
    uVar23 = *(undefined8 *)param_3;
    *(undefined8 *)((long)register0x00000008 + -0x58) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)((long)register0x00000008 + -0x60) = uVar23;
    *(uint *)((long)register0x00000008 + -0x50) = param_3[4];
    puVar17 = param_3 + 6;
    uVar23 = *(undefined8 *)puVar17;
    puVar13 = param_3 + 8;
    *(undefined8 *)((long)register0x00000008 + -0x70) = *(undefined8 *)puVar13;
    *(undefined8 *)((long)register0x00000008 + -0x69) = *(undefined8 *)((long)param_3 + 0x27);
    uVar7 = *(undefined1 *)((long)param_3 + 0x2f);
    puVar17[0] = 0;
    puVar17[1] = 0;
    param_3[10] = 0;
    param_3[0xb] = 0;
    puVar13[0] = 0;
    puVar13[1] = 0;
    uVar25 = *(undefined8 *)(param_4 + 2);
    uVar28 = *(undefined8 *)param_4;
    param_3[4] = param_4[4];
    *(undefined8 *)(param_3 + 2) = uVar25;
    *(undefined8 *)param_3 = uVar28;
    uVar28 = *(undefined8 *)(param_4 + 10);
    uVar25 = *(undefined8 *)(param_4 + 6);
    *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_4 + 8);
    *(undefined8 *)puVar17 = uVar25;
    *(undefined8 *)(param_3 + 10) = uVar28;
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)(param_4 + 2) = *(undefined8 *)((long)register0x00000008 + -0x58);
    *(undefined8 *)param_4 = uVar28;
    param_4[4] = *(uint *)((long)register0x00000008 + -0x50);
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x70);
    *(undefined8 *)(param_4 + 6) = uVar23;
    *(undefined8 *)(param_4 + 8) = uVar28;
    *(undefined8 *)((long)param_4 + 0x27) = *(undefined8 *)((long)register0x00000008 + -0x69);
    *(undefined1 *)((long)param_4 + 0x2f) = uVar7;
    if ((int)*param_2 < (int)*param_3) {
      uVar23 = *(undefined8 *)param_2;
      *(undefined8 *)((long)register0x00000008 + -0x58) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)((long)register0x00000008 + -0x60) = uVar23;
      *(uint *)((long)register0x00000008 + -0x50) = param_2[4];
      puVar36 = param_2 + 6;
      uVar23 = *(undefined8 *)puVar36;
      puVar14 = param_2 + 8;
      *(undefined8 *)((long)register0x00000008 + -0x70) = *(undefined8 *)puVar14;
      *(undefined8 *)((long)register0x00000008 + -0x69) = *(undefined8 *)((long)param_2 + 0x27);
      uVar7 = *(undefined1 *)((long)param_2 + 0x2f);
      puVar36[0] = 0;
      puVar36[1] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      puVar14[0] = 0;
      puVar14[1] = 0;
      uVar25 = *(undefined8 *)(param_3 + 2);
      uVar28 = *(undefined8 *)param_3;
      param_2[4] = param_3[4];
      *(undefined8 *)(param_2 + 2) = uVar25;
      *(undefined8 *)param_2 = uVar28;
      uVar28 = *(undefined8 *)(param_3 + 10);
      uVar25 = *(undefined8 *)puVar17;
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)puVar36 = uVar25;
      *(undefined8 *)(param_2 + 10) = uVar28;
      uVar28 = *(undefined8 *)((long)register0x00000008 + -0x60);
      *(undefined8 *)(param_3 + 2) = *(undefined8 *)((long)register0x00000008 + -0x58);
      *(undefined8 *)param_3 = uVar28;
      param_3[4] = *(uint *)((long)register0x00000008 + -0x50);
      *(undefined8 *)(param_3 + 6) = uVar23;
      *(undefined8 *)puVar13 = *(undefined8 *)((long)register0x00000008 + -0x70);
      *(undefined8 *)((long)param_3 + 0x27) = *(undefined8 *)((long)register0x00000008 + -0x69);
      *(undefined1 *)((long)param_3 + 0x2f) = uVar7;
      if ((int)*puVar15 < (int)*param_2) {
        uVar23 = *(undefined8 *)puVar15;
        *(undefined8 *)((long)register0x00000008 + -0x58) = *(undefined8 *)(puVar15 + 2);
        *(undefined8 *)((long)register0x00000008 + -0x60) = uVar23;
        *(uint *)((long)register0x00000008 + -0x50) = puVar15[4];
        uVar23 = *(undefined8 *)(puVar15 + 6);
        *(undefined8 *)((long)register0x00000008 + -0x70) = *(undefined8 *)(puVar15 + 8);
        *(undefined8 *)((long)register0x00000008 + -0x69) = *(undefined8 *)((long)puVar15 + 0x27);
        uVar7 = *(undefined1 *)((long)puVar15 + 0x2f);
        puVar15[8] = 0;
        puVar15[9] = 0;
        puVar15[10] = 0;
        puVar15[0xb] = 0;
        puVar15[6] = 0;
        puVar15[7] = 0;
        uVar25 = *(undefined8 *)(param_2 + 2);
        uVar28 = *(undefined8 *)param_2;
        puVar15[4] = param_2[4];
        *(undefined8 *)(puVar15 + 2) = uVar25;
        *(undefined8 *)puVar15 = uVar28;
        uVar28 = *(undefined8 *)(param_2 + 10);
        uVar25 = *(undefined8 *)puVar36;
        *(undefined8 *)(puVar15 + 8) = *(undefined8 *)(param_2 + 8);
        *(undefined8 *)(puVar15 + 6) = uVar25;
        *(undefined8 *)(puVar15 + 10) = uVar28;
        uVar28 = *(undefined8 *)((long)register0x00000008 + -0x60);
        *(undefined8 *)(param_2 + 2) = *(undefined8 *)((long)register0x00000008 + -0x58);
        *(undefined8 *)param_2 = uVar28;
        param_2[4] = *(uint *)((long)register0x00000008 + -0x50);
        *(undefined8 *)(param_2 + 6) = uVar23;
        *(undefined8 *)puVar14 = *(undefined8 *)((long)register0x00000008 + -0x70);
        *(undefined8 *)((long)param_2 + 0x27) = *(undefined8 *)((long)register0x00000008 + -0x69);
        *(undefined1 *)((long)param_2 + 0x2f) = uVar7;
      }
    }
  }
  if ((int)*param_4 < (int)*param_5) {
    uVar23 = *(undefined8 *)param_4;
    *(undefined8 *)((long)register0x00000008 + -0x58) = *(undefined8 *)(param_4 + 2);
    *(undefined8 *)((long)register0x00000008 + -0x60) = uVar23;
    *(uint *)((long)register0x00000008 + -0x50) = param_4[4];
    puVar17 = param_4 + 6;
    uVar23 = *(undefined8 *)puVar17;
    puVar13 = param_4 + 8;
    *(undefined8 *)((long)register0x00000008 + -0x70) = *(undefined8 *)puVar13;
    *(undefined8 *)((long)register0x00000008 + -0x69) = *(undefined8 *)((long)param_4 + 0x27);
    uVar7 = *(undefined1 *)((long)param_4 + 0x2f);
    puVar17[0] = 0;
    puVar17[1] = 0;
    param_4[10] = 0;
    param_4[0xb] = 0;
    puVar13[0] = 0;
    puVar13[1] = 0;
    uVar25 = *(undefined8 *)(param_5 + 2);
    uVar28 = *(undefined8 *)param_5;
    param_4[4] = param_5[4];
    *(undefined8 *)(param_4 + 2) = uVar25;
    *(undefined8 *)param_4 = uVar28;
    uVar28 = *(undefined8 *)(param_5 + 10);
    uVar25 = *(undefined8 *)(param_5 + 6);
    *(undefined8 *)(param_4 + 8) = *(undefined8 *)(param_5 + 8);
    *(undefined8 *)puVar17 = uVar25;
    *(undefined8 *)(param_4 + 10) = uVar28;
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)(param_5 + 2) = *(undefined8 *)((long)register0x00000008 + -0x58);
    *(undefined8 *)param_5 = uVar28;
    param_5[4] = *(uint *)((long)register0x00000008 + -0x50);
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x70);
    *(undefined8 *)(param_5 + 6) = uVar23;
    *(undefined8 *)(param_5 + 8) = uVar28;
    *(undefined8 *)((long)param_5 + 0x27) = *(undefined8 *)((long)register0x00000008 + -0x69);
    *(undefined1 *)((long)param_5 + 0x2f) = uVar7;
    if ((int)*param_3 < (int)*param_4) {
      uVar23 = *(undefined8 *)param_3;
      *(undefined8 *)((long)register0x00000008 + -0x58) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)((long)register0x00000008 + -0x60) = uVar23;
      *(uint *)((long)register0x00000008 + -0x50) = param_3[4];
      puVar36 = param_3 + 6;
      uVar23 = *(undefined8 *)puVar36;
      puVar14 = param_3 + 8;
      *(undefined8 *)((long)register0x00000008 + -0x70) = *(undefined8 *)puVar14;
      *(undefined8 *)((long)register0x00000008 + -0x69) = *(undefined8 *)((long)param_3 + 0x27);
      uVar7 = *(undefined1 *)((long)param_3 + 0x2f);
      puVar36[0] = 0;
      puVar36[1] = 0;
      param_3[10] = 0;
      param_3[0xb] = 0;
      puVar14[0] = 0;
      puVar14[1] = 0;
      uVar25 = *(undefined8 *)(param_4 + 2);
      uVar28 = *(undefined8 *)param_4;
      param_3[4] = param_4[4];
      *(undefined8 *)(param_3 + 2) = uVar25;
      *(undefined8 *)param_3 = uVar28;
      uVar28 = *(undefined8 *)(param_4 + 10);
      uVar25 = *(undefined8 *)puVar17;
      *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_4 + 8);
      *(undefined8 *)puVar36 = uVar25;
      *(undefined8 *)(param_3 + 10) = uVar28;
      uVar28 = *(undefined8 *)((long)register0x00000008 + -0x60);
      *(undefined8 *)(param_4 + 2) = *(undefined8 *)((long)register0x00000008 + -0x58);
      *(undefined8 *)param_4 = uVar28;
      param_4[4] = *(uint *)((long)register0x00000008 + -0x50);
      *(undefined8 *)(param_4 + 6) = uVar23;
      *(undefined8 *)puVar13 = *(undefined8 *)((long)register0x00000008 + -0x70);
      *(undefined8 *)((long)param_4 + 0x27) = *(undefined8 *)((long)register0x00000008 + -0x69);
      *(undefined1 *)((long)param_4 + 0x2f) = uVar7;
      if ((int)*param_2 < (int)*param_3) {
        uVar23 = *(undefined8 *)param_2;
        *(undefined8 *)((long)register0x00000008 + -0x58) = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)((long)register0x00000008 + -0x60) = uVar23;
        *(uint *)((long)register0x00000008 + -0x50) = param_2[4];
        puVar17 = param_2 + 6;
        uVar23 = *(undefined8 *)puVar17;
        puVar13 = param_2 + 8;
        *(undefined8 *)((long)register0x00000008 + -0x70) = *(undefined8 *)puVar13;
        *(undefined8 *)((long)register0x00000008 + -0x69) = *(undefined8 *)((long)param_2 + 0x27);
        uVar7 = *(undefined1 *)((long)param_2 + 0x2f);
        puVar17[0] = 0;
        puVar17[1] = 0;
        param_2[10] = 0;
        param_2[0xb] = 0;
        puVar13[0] = 0;
        puVar13[1] = 0;
        uVar25 = *(undefined8 *)(param_3 + 2);
        uVar28 = *(undefined8 *)param_3;
        param_2[4] = param_3[4];
        *(undefined8 *)(param_2 + 2) = uVar25;
        *(undefined8 *)param_2 = uVar28;
        uVar28 = *(undefined8 *)(param_3 + 10);
        uVar25 = *(undefined8 *)puVar36;
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
        *(undefined8 *)puVar17 = uVar25;
        *(undefined8 *)(param_2 + 10) = uVar28;
        uVar28 = *(undefined8 *)((long)register0x00000008 + -0x60);
        *(undefined8 *)(param_3 + 2) = *(undefined8 *)((long)register0x00000008 + -0x58);
        *(undefined8 *)param_3 = uVar28;
        param_3[4] = *(uint *)((long)register0x00000008 + -0x50);
        *(undefined8 *)(param_3 + 6) = uVar23;
        *(undefined8 *)puVar14 = *(undefined8 *)((long)register0x00000008 + -0x70);
        *(undefined8 *)((long)param_3 + 0x27) = *(undefined8 *)((long)register0x00000008 + -0x69);
        *(undefined1 *)((long)param_3 + 0x2f) = uVar7;
        if ((int)*puVar15 < (int)*param_2) {
          uVar23 = *(undefined8 *)puVar15;
          *(undefined8 *)((long)register0x00000008 + -0x58) = *(undefined8 *)(puVar15 + 2);
          *(undefined8 *)((long)register0x00000008 + -0x60) = uVar23;
          *(uint *)((long)register0x00000008 + -0x50) = puVar15[4];
          uVar23 = *(undefined8 *)(puVar15 + 6);
          *(undefined8 *)((long)register0x00000008 + -0x70) = *(undefined8 *)(puVar15 + 8);
          *(undefined8 *)((long)register0x00000008 + -0x69) = *(undefined8 *)((long)puVar15 + 0x27);
          uVar7 = *(undefined1 *)((long)puVar15 + 0x2f);
          puVar15[8] = 0;
          puVar15[9] = 0;
          puVar15[10] = 0;
          puVar15[0xb] = 0;
          puVar15[6] = 0;
          puVar15[7] = 0;
          uVar25 = *(undefined8 *)(param_2 + 2);
          uVar28 = *(undefined8 *)param_2;
          puVar15[4] = param_2[4];
          *(undefined8 *)(puVar15 + 2) = uVar25;
          *(undefined8 *)puVar15 = uVar28;
          uVar28 = *(undefined8 *)(param_2 + 10);
          uVar25 = *(undefined8 *)puVar17;
          *(undefined8 *)(puVar15 + 8) = *(undefined8 *)(param_2 + 8);
          *(undefined8 *)(puVar15 + 6) = uVar25;
          *(undefined8 *)(puVar15 + 10) = uVar28;
          uVar28 = *(undefined8 *)((long)register0x00000008 + -0x60);
          *(undefined8 *)(param_2 + 2) = *(undefined8 *)((long)register0x00000008 + -0x58);
          *(undefined8 *)param_2 = uVar28;
          param_2[4] = *(uint *)((long)register0x00000008 + -0x50);
          *(undefined8 *)(param_2 + 6) = uVar23;
          *(undefined8 *)puVar13 = *(undefined8 *)((long)register0x00000008 + -0x70);
          *(undefined8 *)((long)param_2 + 0x27) = *(undefined8 *)((long)register0x00000008 + -0x69);
          *(undefined1 *)((long)param_2 + 0x2f) = uVar7;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48)) {
    return;
  }
  ___stack_chk_fail();
  *(uint **)((long)register0x00000008 + -0xa0) = param_4;
  *(uint **)((long)register0x00000008 + -0x98) = param_3;
  *(uint **)((long)register0x00000008 + -0x90) = puVar15;
  *(uint **)((long)register0x00000008 + -0x88) = param_2;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x78) = FUN_1094e4678;
  *(undefined8 *)((long)register0x00000008 + -0xa8) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar38 = ((long)puVar18 - (long)puVar35 >> 4) * -0x5555555555555555;
  if ((long)uVar38 < 3) {
    if (1 < uVar38) {
      if (uVar38 == 2) {
        puVar15 = puVar18 + -0xc;
        if ((int)*puVar35 < (int)*puVar15) {
          uVar23 = *(undefined8 *)puVar35;
          *(undefined8 *)((long)register0x00000008 + -0xb8) = *(undefined8 *)(puVar35 + 2);
          *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar23;
          *(uint *)((long)register0x00000008 + -0xb0) = puVar35[4];
          uVar23 = *(undefined8 *)(puVar35 + 6);
          *(undefined8 *)((long)register0x00000008 + -0xd0) = *(undefined8 *)(puVar35 + 8);
          *(undefined8 *)((long)register0x00000008 + -0xc9) = *(undefined8 *)((long)puVar35 + 0x27);
          uVar7 = *(undefined1 *)((long)puVar35 + 0x2f);
          puVar35[8] = 0;
          puVar35[9] = 0;
          puVar35[10] = 0;
          puVar35[0xb] = 0;
          puVar35[6] = 0;
          puVar35[7] = 0;
          uVar25 = *(undefined8 *)(puVar18 + -10);
          uVar28 = *(undefined8 *)puVar15;
          puVar35[4] = puVar18[-8];
          *(undefined8 *)(puVar35 + 2) = uVar25;
          *(undefined8 *)puVar35 = uVar28;
          uVar28 = *(undefined8 *)(puVar18 + -2);
          uVar25 = *(undefined8 *)(puVar18 + -6);
          *(undefined8 *)(puVar35 + 8) = *(undefined8 *)(puVar18 + -4);
          *(undefined8 *)(puVar35 + 6) = uVar25;
          *(undefined8 *)(puVar35 + 10) = uVar28;
          uVar28 = *(undefined8 *)((long)register0x00000008 + -0xc0);
          *(undefined8 *)(puVar18 + -10) = *(undefined8 *)((long)register0x00000008 + -0xb8);
          *(undefined8 *)puVar15 = uVar28;
          puVar18[-8] = *(uint *)((long)register0x00000008 + -0xb0);
          uVar28 = *(undefined8 *)((long)register0x00000008 + -0xd0);
          *(undefined8 *)(puVar18 + -6) = uVar23;
          *(undefined8 *)(puVar18 + -4) = uVar28;
          *(undefined8 *)((long)puVar18 + -9) = *(undefined8 *)((long)register0x00000008 + -0xc9);
          puVar16 = (undefined8 *)0x1;
          *(undefined1 *)((long)puVar18 + -1) = uVar7;
          goto LAB_1094e4a50;
        }
      }
      else {
LAB_1094e47a0:
        FUN_1094e3f6c(puVar35,puVar35 + 0xc,puVar35 + 0x18);
        if (puVar35 + 0x24 != puVar18) {
          lVar20 = 0;
          iVar24 = 0;
          puVar15 = puVar35 + 0x24;
          puVar13 = puVar35 + 0x18;
          do {
            puVar17 = puVar15;
            uVar33 = *puVar17;
            if ((int)*puVar13 < (int)uVar33) {
              uVar23 = *(undefined8 *)(puVar17 + 1);
              *(undefined8 *)((long)register0x00000008 + -0xb8) = *(undefined8 *)(puVar17 + 3);
              *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar23;
              uVar23 = *(undefined8 *)(puVar17 + 6);
              *(undefined8 *)((long)register0x00000008 + -0xd0) = *(undefined8 *)(puVar17 + 8);
              *(undefined8 *)((long)register0x00000008 + -0xc9) =
                   *(undefined8 *)((long)puVar17 + 0x27);
              uVar7 = *(undefined1 *)((long)puVar17 + 0x2f);
              puVar17[8] = 0;
              puVar17[9] = 0;
              puVar17[10] = 0;
              puVar17[0xb] = 0;
              puVar17[6] = 0;
              puVar17[7] = 0;
              lVar11 = lVar20;
              do {
                lVar31 = lVar11;
                *(undefined8 *)((long)puVar35 + lVar31 + 0x98) =
                     *(undefined8 *)((long)puVar35 + lVar31 + 0x68);
                *(undefined8 *)((long)puVar35 + lVar31 + 0x90) =
                     *(undefined8 *)((long)puVar35 + lVar31 + 0x60);
                *(undefined4 *)((long)puVar35 + lVar31 + 0xa0) =
                     *(undefined4 *)((long)puVar35 + lVar31 + 0x70);
                *(undefined8 *)((long)puVar35 + lVar31 + 0xb0) =
                     *(undefined8 *)((long)puVar35 + lVar31 + 0x80);
                *(undefined8 *)((long)puVar35 + lVar31 + 0xa8) =
                     *(undefined8 *)((long)puVar35 + lVar31 + 0x78);
                *(undefined8 *)((long)puVar35 + lVar31 + 0xb8) =
                     *(undefined8 *)((long)puVar35 + lVar31 + 0x88);
                *(undefined1 *)((long)puVar35 + lVar31 + 0x8f) = 0;
                *(undefined1 *)((long)puVar35 + lVar31 + 0x78) = 0;
                puVar15 = puVar35;
                if (lVar31 == -0x60) goto LAB_1094e4854;
                lVar11 = lVar31 + -0x30;
              } while (*(int *)((long)puVar35 + lVar31 + 0x30) < (int)uVar33);
              puVar15 = (uint *)((long)puVar35 + lVar31 + 0x60);
LAB_1094e4854:
              *puVar15 = uVar33;
              uVar28 = *(undefined8 *)((long)register0x00000008 + -0xc0);
              *(undefined8 *)(puVar15 + 3) = *(undefined8 *)((long)register0x00000008 + -0xb8);
              *(undefined8 *)(puVar15 + 1) = uVar28;
              *(undefined8 *)((long)puVar35 + lVar31 + 0x78) = uVar23;
              *(undefined8 *)(puVar15 + 8) = *(undefined8 *)((long)register0x00000008 + -0xd0);
              *(undefined8 *)((long)puVar15 + 0x27) =
                   *(undefined8 *)((long)register0x00000008 + -0xc9);
              *(undefined1 *)((long)puVar15 + 0x2f) = uVar7;
              iVar24 = iVar24 + 1;
              if (iVar24 == 8) {
                puVar16 = (undefined8 *)(ulong)(puVar17 + 0xc == puVar18);
                goto LAB_1094e4a50;
              }
            }
            lVar20 = lVar20 + 0x30;
            puVar15 = puVar17 + 0xc;
            puVar13 = puVar17;
          } while (puVar17 + 0xc != puVar18);
        }
      }
    }
  }
  else if (uVar38 == 3) {
    FUN_1094e3f6c(puVar35,puVar35 + 0xc,puVar18 + -0xc);
  }
  else if (uVar38 == 4) {
    FUN_1094e3f6c(puVar35,puVar35 + 0xc,puVar35 + 0x18);
    puVar15 = puVar18 + -0xc;
    if ((int)puVar35[0x18] < (int)*puVar15) {
      uVar23 = *(undefined8 *)(puVar35 + 0x18);
      *(undefined8 *)((long)register0x00000008 + -0xb8) = *(undefined8 *)(puVar35 + 0x1a);
      *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar23;
      *(uint *)((long)register0x00000008 + -0xb0) = puVar35[0x1c];
      puVar17 = puVar35 + 0x1e;
      uVar28 = *(undefined8 *)puVar17;
      puVar13 = puVar35 + 0x20;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = *(undefined8 *)puVar13;
      *(undefined8 *)((long)register0x00000008 + -0xc9) = *(undefined8 *)((long)puVar35 + 0x87);
      uVar7 = *(undefined1 *)((long)puVar35 + 0x8f);
      puVar17[0] = 0;
      puVar17[1] = 0;
      puVar35[0x22] = 0;
      puVar35[0x23] = 0;
      puVar13[0] = 0;
      puVar13[1] = 0;
      uVar25 = *(undefined8 *)(puVar18 + -10);
      uVar23 = *(undefined8 *)puVar15;
      puVar35[0x1c] = puVar18[-8];
      *(undefined8 *)(puVar35 + 0x1a) = uVar25;
      *(undefined8 *)(puVar35 + 0x18) = uVar23;
      uVar23 = *(undefined8 *)(puVar18 + -2);
      uVar25 = *(undefined8 *)(puVar18 + -6);
      *(undefined8 *)(puVar35 + 0x20) = *(undefined8 *)(puVar18 + -4);
      *(undefined8 *)puVar17 = uVar25;
      *(undefined8 *)(puVar35 + 0x22) = uVar23;
      uVar23 = *(undefined8 *)((long)register0x00000008 + -0xc0);
      *(undefined8 *)(puVar18 + -10) = *(undefined8 *)((long)register0x00000008 + -0xb8);
      *(undefined8 *)puVar15 = uVar23;
      puVar18[-8] = *(uint *)((long)register0x00000008 + -0xb0);
      uVar23 = *(undefined8 *)((long)register0x00000008 + -0xd0);
      *(undefined8 *)(puVar18 + -6) = uVar28;
      *(undefined8 *)(puVar18 + -4) = uVar23;
      *(undefined8 *)((long)puVar18 + -9) = *(undefined8 *)((long)register0x00000008 + -0xc9);
      *(undefined1 *)((long)puVar18 + -1) = uVar7;
      if ((int)puVar35[0xc] < (int)puVar35[0x18]) {
        uVar23 = *(undefined8 *)(puVar35 + 0xc);
        *(undefined8 *)((long)register0x00000008 + -0xb8) = *(undefined8 *)(puVar35 + 0xe);
        *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar23;
        *(uint *)((long)register0x00000008 + -0xb0) = puVar35[0x10];
        puVar15 = puVar35 + 0x12;
        uVar23 = *(undefined8 *)puVar15;
        *(undefined8 *)((long)register0x00000008 + -0xd0) = *(undefined8 *)(puVar35 + 0x14);
        *(undefined8 *)((long)register0x00000008 + -0xc9) = *(undefined8 *)((long)puVar35 + 0x57);
        *(undefined8 *)(puVar35 + 0xe) = *(undefined8 *)(puVar35 + 0x1a);
        *(undefined8 *)(puVar35 + 0xc) = *(undefined8 *)(puVar35 + 0x18);
        puVar35[0x10] = puVar35[0x1c];
        *(undefined8 *)(puVar35 + 0x14) = *(undefined8 *)(puVar35 + 0x20);
        *(undefined8 *)puVar15 = *(undefined8 *)puVar17;
        *(undefined8 *)(puVar35 + 0x16) = *(undefined8 *)(puVar35 + 0x22);
        uVar25 = *(undefined8 *)((long)register0x00000008 + -0xb8);
        uVar28 = *(undefined8 *)((long)register0x00000008 + -0xc0);
        puVar35[0x1c] = *(uint *)((long)register0x00000008 + -0xb0);
        *(undefined8 *)(puVar35 + 0x1a) = uVar25;
        *(undefined8 *)(puVar35 + 0x18) = uVar28;
        *(undefined8 *)(puVar35 + 0x1e) = uVar23;
        *(undefined8 *)puVar13 = *(undefined8 *)((long)register0x00000008 + -0xd0);
        *(undefined8 *)((long)puVar35 + 0x87) = *(undefined8 *)((long)register0x00000008 + -0xc9);
        *(undefined1 *)((long)puVar35 + 0x8f) = *(undefined1 *)((long)puVar35 + 0x5f);
        if ((int)*puVar35 < (int)puVar35[0xc]) {
          uVar23 = *(undefined8 *)puVar35;
          *(undefined8 *)((long)register0x00000008 + -0xb8) = *(undefined8 *)(puVar35 + 2);
          *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar23;
          *(uint *)((long)register0x00000008 + -0xb0) = puVar35[4];
          uVar23 = *(undefined8 *)(puVar35 + 6);
          *(undefined8 *)((long)register0x00000008 + -0xd0) = *(undefined8 *)(puVar35 + 8);
          *(undefined8 *)((long)register0x00000008 + -0xc9) = *(undefined8 *)((long)puVar35 + 0x27);
          *(undefined8 *)(puVar35 + 2) = *(undefined8 *)(puVar35 + 0xe);
          *(undefined8 *)puVar35 = *(undefined8 *)(puVar35 + 0xc);
          puVar35[4] = puVar35[0x10];
          *(undefined8 *)(puVar35 + 8) = *(undefined8 *)(puVar35 + 0x14);
          *(undefined8 *)(puVar35 + 6) = *(undefined8 *)puVar15;
          *(undefined8 *)(puVar35 + 10) = *(undefined8 *)(puVar35 + 0x16);
          uVar25 = *(undefined8 *)((long)register0x00000008 + -0xb8);
          uVar28 = *(undefined8 *)((long)register0x00000008 + -0xc0);
          puVar35[0x10] = *(uint *)((long)register0x00000008 + -0xb0);
          *(undefined8 *)(puVar35 + 0xe) = uVar25;
          *(undefined8 *)(puVar35 + 0xc) = uVar28;
          *(undefined8 *)(puVar35 + 0x12) = uVar23;
          *(undefined8 *)(puVar35 + 0x14) = *(undefined8 *)((long)register0x00000008 + -0xd0);
          *(undefined8 *)((long)puVar35 + 0x57) = *(undefined8 *)((long)register0x00000008 + -0xc9);
          puVar16 = (undefined8 *)0x1;
          *(undefined1 *)((long)puVar35 + 0x5f) = *(undefined1 *)((long)puVar35 + 0x2f);
          goto LAB_1094e4a50;
        }
      }
    }
  }
  else {
    if (uVar38 != 5) goto LAB_1094e47a0;
    FUN_1094e4220(puVar35,puVar35 + 0xc,puVar35 + 0x18,puVar35 + 0x24,puVar18 + -0xc);
  }
  puVar16 = (undefined8 *)0x1;
LAB_1094e4a50:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xa8)) {
    return;
  }
  ___stack_chk_fail();
  *(uint **)((long)register0x00000008 + -0xf0) = puVar18;
  *(uint **)((long)register0x00000008 + -0xe8) = puVar35;
  *(undefined1 **)((long)register0x00000008 + -0xe0) =
       (undefined1 *)((long)register0x00000008 + -0x80);
  *(code **)((long)register0x00000008 + -0xd8) = FUN_1094e4a90;
  if (*(long *)*puVar16 != 0) {
    FUN_1094e2fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*puVar16);
    return;
  }
  return;
}



/* Entry: 1094e3f6c; end: 1094e421f;  */

void FUN_1094e3f6c(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  undefined1 uVar2;
  long lVar3;
  int *piVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  int *piVar10;
  long lVar11;
  int iVar12;
  undefined8 uVar13;
  int *piVar14;
  undefined8 uVar15;
  long lVar16;
  int *piVar17;
  int *piVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined7 uStack_110;
  undefined1 uStack_109;
  undefined7 uStack_b0;
  undefined1 uStack_a9;
  undefined7 uStack_40;
  undefined1 uStack_39;
  undefined7 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  int iStack_20;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar12 = *param_2;
  if (*param_1 < iVar12) {
    if (iVar12 < *param_3) {
      uStack_28 = *(undefined8 *)(param_1 + 2);
      uStack_30 = *(undefined8 *)param_1;
      iStack_20 = param_1[4];
      uVar9 = *(undefined8 *)(param_1 + 6);
      uStack_40 = (undefined7)*(undefined8 *)(param_1 + 8);
      uStack_39 = (undefined1)*(undefined8 *)((long)param_1 + 0x27);
      uStack_38 = (undefined7)((ulong)*(undefined8 *)((long)param_1 + 0x27) >> 8);
      uVar2 = *(undefined1 *)((long)param_1 + 0x2f);
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      uVar15 = *(undefined8 *)(param_3 + 2);
      uVar13 = *(undefined8 *)param_3;
      param_1[4] = param_3[4];
      *(undefined8 *)(param_1 + 2) = uVar15;
      *(undefined8 *)param_1 = uVar13;
      uVar13 = *(undefined8 *)(param_3 + 10);
      uVar15 = *(undefined8 *)(param_3 + 6);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)(param_1 + 6) = uVar15;
      *(undefined8 *)(param_1 + 10) = uVar13;
    }
    else {
      uVar20 = *(undefined8 *)(param_1 + 2);
      uVar19 = *(undefined8 *)param_1;
      iVar12 = param_1[4];
      uVar9 = *(undefined8 *)(param_1 + 6);
      uStack_40 = (undefined7)*(undefined8 *)(param_1 + 8);
      uVar13 = *(undefined8 *)((long)param_1 + 0x27);
      uStack_39 = (undefined1)uVar13;
      uVar2 = *(undefined1 *)((long)param_1 + 0x2f);
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      uVar21 = *(undefined8 *)(param_2 + 2);
      uVar15 = *(undefined8 *)param_2;
      param_1[4] = param_2[4];
      *(undefined8 *)(param_1 + 2) = uVar21;
      *(undefined8 *)param_1 = uVar15;
      uVar15 = *(undefined8 *)(param_2 + 10);
      uVar21 = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 6) = uVar21;
      *(undefined8 *)(param_1 + 10) = uVar15;
      *(undefined8 *)(param_2 + 2) = uVar20;
      *(undefined8 *)param_2 = uVar19;
      param_2[4] = iVar12;
      *(undefined8 *)(param_2 + 6) = uVar9;
      *(ulong *)(param_2 + 8) = CONCAT17(uStack_39,uStack_40);
      *(undefined8 *)((long)param_2 + 0x27) = uVar13;
      *(undefined1 *)((long)param_2 + 0x2f) = uVar2;
      if (*param_3 <= *param_2) goto LAB_1094e41f8;
      uStack_28 = *(undefined8 *)(param_2 + 2);
      uStack_30 = *(undefined8 *)param_2;
      iStack_20 = param_2[4];
      uStack_40 = (undefined7)*(undefined8 *)(param_2 + 8);
      uStack_39 = (undefined1)*(undefined8 *)((long)param_2 + 0x27);
      uStack_38 = (undefined7)((ulong)*(undefined8 *)((long)param_2 + 0x27) >> 8);
      param_2[8] = 0;
      param_2[9] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      iVar12 = param_3[4];
      uVar13 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_2 = uVar13;
      param_2[4] = iVar12;
      uVar13 = *(undefined8 *)(param_3 + 10);
      uVar15 = *(undefined8 *)(param_3 + 6);
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)(param_2 + 6) = uVar15;
      *(undefined8 *)(param_2 + 10) = uVar13;
    }
    *(undefined8 *)(param_3 + 2) = uStack_28;
    *(undefined8 *)param_3 = uStack_30;
    param_3[4] = iStack_20;
    *(undefined8 *)(param_3 + 6) = uVar9;
    *(ulong *)(param_3 + 8) = CONCAT17(uStack_39,uStack_40);
    *(ulong *)((long)param_3 + 0x27) = CONCAT71(uStack_38,uStack_39);
    *(undefined1 *)((long)param_3 + 0x2f) = uVar2;
  }
  else if (iVar12 < *param_3) {
    uVar20 = *(undefined8 *)(param_2 + 2);
    uVar19 = *(undefined8 *)param_2;
    iVar12 = param_2[4];
    piVar6 = param_2 + 6;
    uVar9 = *(undefined8 *)piVar6;
    piVar4 = param_2 + 8;
    uStack_40 = (undefined7)*(undefined8 *)piVar4;
    uVar13 = *(undefined8 *)((long)param_2 + 0x27);
    uStack_39 = (undefined1)uVar13;
    uVar2 = *(undefined1 *)((long)param_2 + 0x2f);
    piVar6[0] = 0;
    piVar6[1] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    piVar4[0] = 0;
    piVar4[1] = 0;
    uVar21 = *(undefined8 *)(param_3 + 2);
    uVar15 = *(undefined8 *)param_3;
    param_2[4] = param_3[4];
    *(undefined8 *)(param_2 + 2) = uVar21;
    *(undefined8 *)param_2 = uVar15;
    uVar15 = *(undefined8 *)(param_3 + 10);
    uVar21 = *(undefined8 *)(param_3 + 6);
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)piVar6 = uVar21;
    *(undefined8 *)(param_2 + 10) = uVar15;
    *(undefined8 *)(param_3 + 2) = uVar20;
    *(undefined8 *)param_3 = uVar19;
    param_3[4] = iVar12;
    *(undefined8 *)(param_3 + 6) = uVar9;
    *(ulong *)(param_3 + 8) = CONCAT17(uStack_39,uStack_40);
    *(undefined8 *)((long)param_3 + 0x27) = uVar13;
    *(undefined1 *)((long)param_3 + 0x2f) = uVar2;
    if (*param_1 < *param_2) {
      uVar20 = *(undefined8 *)(param_1 + 2);
      uVar19 = *(undefined8 *)param_1;
      iVar12 = param_1[4];
      uVar9 = *(undefined8 *)(param_1 + 6);
      uStack_40 = (undefined7)*(undefined8 *)(param_1 + 8);
      uVar13 = *(undefined8 *)((long)param_1 + 0x27);
      uStack_39 = (undefined1)uVar13;
      uVar2 = *(undefined1 *)((long)param_1 + 0x2f);
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      uVar21 = *(undefined8 *)(param_2 + 2);
      uVar15 = *(undefined8 *)param_2;
      param_1[4] = param_2[4];
      *(undefined8 *)(param_1 + 2) = uVar21;
      *(undefined8 *)param_1 = uVar15;
      uVar15 = *(undefined8 *)(param_2 + 10);
      uVar21 = *(undefined8 *)piVar6;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 6) = uVar21;
      *(undefined8 *)(param_1 + 10) = uVar15;
      *(undefined8 *)(param_2 + 2) = uVar20;
      *(undefined8 *)param_2 = uVar19;
      param_2[4] = iVar12;
      *(undefined8 *)(param_2 + 6) = uVar9;
      *(ulong *)piVar4 = CONCAT17(uStack_39,uStack_40);
      *(undefined8 *)((long)param_2 + 0x27) = uVar13;
      *(undefined1 *)((long)param_2 + 0x2f) = uVar2;
    }
  }
LAB_1094e41f8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar4 = param_1;
  piVar6 = param_2;
  FUN_1094e3f6c();
  if (*param_3 < *param_4) {
    uVar20 = *(undefined8 *)(param_3 + 2);
    uVar19 = *(undefined8 *)param_3;
    iVar12 = param_3[4];
    piVar18 = param_3 + 6;
    uVar9 = *(undefined8 *)piVar18;
    piVar17 = param_3 + 8;
    uStack_b0 = (undefined7)*(undefined8 *)piVar17;
    uVar13 = *(undefined8 *)((long)param_3 + 0x27);
    uStack_a9 = (undefined1)uVar13;
    uVar2 = *(undefined1 *)((long)param_3 + 0x2f);
    piVar18[0] = 0;
    piVar18[1] = 0;
    param_3[10] = 0;
    param_3[0xb] = 0;
    piVar17[0] = 0;
    piVar17[1] = 0;
    uVar21 = *(undefined8 *)(param_4 + 2);
    uVar15 = *(undefined8 *)param_4;
    param_3[4] = param_4[4];
    *(undefined8 *)(param_3 + 2) = uVar21;
    *(undefined8 *)param_3 = uVar15;
    uVar15 = *(undefined8 *)(param_4 + 10);
    uVar21 = *(undefined8 *)(param_4 + 6);
    *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_4 + 8);
    *(undefined8 *)piVar18 = uVar21;
    *(undefined8 *)(param_3 + 10) = uVar15;
    *(undefined8 *)(param_4 + 2) = uVar20;
    *(undefined8 *)param_4 = uVar19;
    param_4[4] = iVar12;
    *(undefined8 *)(param_4 + 6) = uVar9;
    *(ulong *)(param_4 + 8) = CONCAT17(uStack_a9,uStack_b0);
    *(undefined8 *)((long)param_4 + 0x27) = uVar13;
    *(undefined1 *)((long)param_4 + 0x2f) = uVar2;
    if (*param_2 < *param_3) {
      uVar20 = *(undefined8 *)(param_2 + 2);
      uVar19 = *(undefined8 *)param_2;
      iVar12 = param_2[4];
      piVar14 = param_2 + 6;
      uVar9 = *(undefined8 *)piVar14;
      piVar10 = param_2 + 8;
      uStack_b0 = (undefined7)*(undefined8 *)piVar10;
      uVar13 = *(undefined8 *)((long)param_2 + 0x27);
      uStack_a9 = (undefined1)uVar13;
      uVar2 = *(undefined1 *)((long)param_2 + 0x2f);
      piVar14[0] = 0;
      piVar14[1] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      piVar10[0] = 0;
      piVar10[1] = 0;
      uVar21 = *(undefined8 *)(param_3 + 2);
      uVar15 = *(undefined8 *)param_3;
      param_2[4] = param_3[4];
      *(undefined8 *)(param_2 + 2) = uVar21;
      *(undefined8 *)param_2 = uVar15;
      uVar15 = *(undefined8 *)(param_3 + 10);
      uVar21 = *(undefined8 *)piVar18;
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)piVar14 = uVar21;
      *(undefined8 *)(param_2 + 10) = uVar15;
      *(undefined8 *)(param_3 + 2) = uVar20;
      *(undefined8 *)param_3 = uVar19;
      param_3[4] = iVar12;
      *(undefined8 *)(param_3 + 6) = uVar9;
      *(ulong *)piVar17 = CONCAT17(uStack_a9,uStack_b0);
      *(undefined8 *)((long)param_3 + 0x27) = uVar13;
      *(undefined1 *)((long)param_3 + 0x2f) = uVar2;
      if (*param_1 < *param_2) {
        uVar20 = *(undefined8 *)(param_1 + 2);
        uVar19 = *(undefined8 *)param_1;
        iVar12 = param_1[4];
        uVar9 = *(undefined8 *)(param_1 + 6);
        uStack_b0 = (undefined7)*(undefined8 *)(param_1 + 8);
        uVar13 = *(undefined8 *)((long)param_1 + 0x27);
        uStack_a9 = (undefined1)uVar13;
        uVar2 = *(undefined1 *)((long)param_1 + 0x2f);
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        uVar21 = *(undefined8 *)(param_2 + 2);
        uVar15 = *(undefined8 *)param_2;
        param_1[4] = param_2[4];
        *(undefined8 *)(param_1 + 2) = uVar21;
        *(undefined8 *)param_1 = uVar15;
        uVar15 = *(undefined8 *)(param_2 + 10);
        uVar21 = *(undefined8 *)piVar14;
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
        *(undefined8 *)(param_1 + 6) = uVar21;
        *(undefined8 *)(param_1 + 10) = uVar15;
        *(undefined8 *)(param_2 + 2) = uVar20;
        *(undefined8 *)param_2 = uVar19;
        param_2[4] = iVar12;
        *(undefined8 *)(param_2 + 6) = uVar9;
        *(ulong *)piVar10 = CONCAT17(uStack_a9,uStack_b0);
        *(undefined8 *)((long)param_2 + 0x27) = uVar13;
        *(undefined1 *)((long)param_2 + 0x2f) = uVar2;
      }
    }
  }
  if (*param_4 < *param_5) {
    uVar20 = *(undefined8 *)(param_4 + 2);
    uVar19 = *(undefined8 *)param_4;
    iVar12 = param_4[4];
    piVar18 = param_4 + 6;
    uVar9 = *(undefined8 *)piVar18;
    piVar17 = param_4 + 8;
    uStack_b0 = (undefined7)*(undefined8 *)piVar17;
    uVar13 = *(undefined8 *)((long)param_4 + 0x27);
    uStack_a9 = (undefined1)uVar13;
    uVar2 = *(undefined1 *)((long)param_4 + 0x2f);
    piVar18[0] = 0;
    piVar18[1] = 0;
    param_4[10] = 0;
    param_4[0xb] = 0;
    piVar17[0] = 0;
    piVar17[1] = 0;
    uVar21 = *(undefined8 *)(param_5 + 2);
    uVar15 = *(undefined8 *)param_5;
    param_4[4] = param_5[4];
    *(undefined8 *)(param_4 + 2) = uVar21;
    *(undefined8 *)param_4 = uVar15;
    uVar15 = *(undefined8 *)(param_5 + 10);
    uVar21 = *(undefined8 *)(param_5 + 6);
    *(undefined8 *)(param_4 + 8) = *(undefined8 *)(param_5 + 8);
    *(undefined8 *)piVar18 = uVar21;
    *(undefined8 *)(param_4 + 10) = uVar15;
    *(undefined8 *)(param_5 + 2) = uVar20;
    *(undefined8 *)param_5 = uVar19;
    param_5[4] = iVar12;
    *(undefined8 *)(param_5 + 6) = uVar9;
    *(ulong *)(param_5 + 8) = CONCAT17(uStack_a9,uStack_b0);
    *(undefined8 *)((long)param_5 + 0x27) = uVar13;
    *(undefined1 *)((long)param_5 + 0x2f) = uVar2;
    if (*param_3 < *param_4) {
      uVar20 = *(undefined8 *)(param_3 + 2);
      uVar19 = *(undefined8 *)param_3;
      iVar12 = param_3[4];
      piVar14 = param_3 + 6;
      uVar9 = *(undefined8 *)piVar14;
      piVar10 = param_3 + 8;
      uStack_b0 = (undefined7)*(undefined8 *)piVar10;
      uVar13 = *(undefined8 *)((long)param_3 + 0x27);
      uStack_a9 = (undefined1)uVar13;
      uVar2 = *(undefined1 *)((long)param_3 + 0x2f);
      piVar14[0] = 0;
      piVar14[1] = 0;
      param_3[10] = 0;
      param_3[0xb] = 0;
      piVar10[0] = 0;
      piVar10[1] = 0;
      uVar21 = *(undefined8 *)(param_4 + 2);
      uVar15 = *(undefined8 *)param_4;
      param_3[4] = param_4[4];
      *(undefined8 *)(param_3 + 2) = uVar21;
      *(undefined8 *)param_3 = uVar15;
      uVar15 = *(undefined8 *)(param_4 + 10);
      uVar21 = *(undefined8 *)piVar18;
      *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_4 + 8);
      *(undefined8 *)piVar14 = uVar21;
      *(undefined8 *)(param_3 + 10) = uVar15;
      *(undefined8 *)(param_4 + 2) = uVar20;
      *(undefined8 *)param_4 = uVar19;
      param_4[4] = iVar12;
      *(undefined8 *)(param_4 + 6) = uVar9;
      *(ulong *)piVar17 = CONCAT17(uStack_a9,uStack_b0);
      *(undefined8 *)((long)param_4 + 0x27) = uVar13;
      *(undefined1 *)((long)param_4 + 0x2f) = uVar2;
      if (*param_2 < *param_3) {
        uVar20 = *(undefined8 *)(param_2 + 2);
        uVar19 = *(undefined8 *)param_2;
        iVar12 = param_2[4];
        piVar18 = param_2 + 6;
        uVar9 = *(undefined8 *)piVar18;
        piVar17 = param_2 + 8;
        uStack_b0 = (undefined7)*(undefined8 *)piVar17;
        uVar13 = *(undefined8 *)((long)param_2 + 0x27);
        uStack_a9 = (undefined1)uVar13;
        uVar2 = *(undefined1 *)((long)param_2 + 0x2f);
        piVar18[0] = 0;
        piVar18[1] = 0;
        param_2[10] = 0;
        param_2[0xb] = 0;
        piVar17[0] = 0;
        piVar17[1] = 0;
        uVar21 = *(undefined8 *)(param_3 + 2);
        uVar15 = *(undefined8 *)param_3;
        param_2[4] = param_3[4];
        *(undefined8 *)(param_2 + 2) = uVar21;
        *(undefined8 *)param_2 = uVar15;
        uVar15 = *(undefined8 *)(param_3 + 10);
        uVar21 = *(undefined8 *)piVar14;
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
        *(undefined8 *)piVar18 = uVar21;
        *(undefined8 *)(param_2 + 10) = uVar15;
        *(undefined8 *)(param_3 + 2) = uVar20;
        *(undefined8 *)param_3 = uVar19;
        param_3[4] = iVar12;
        *(undefined8 *)(param_3 + 6) = uVar9;
        *(ulong *)piVar10 = CONCAT17(uStack_a9,uStack_b0);
        *(undefined8 *)((long)param_3 + 0x27) = uVar13;
        *(undefined1 *)((long)param_3 + 0x2f) = uVar2;
        if (*param_1 < *param_2) {
          uVar20 = *(undefined8 *)(param_1 + 2);
          uVar19 = *(undefined8 *)param_1;
          iVar12 = param_1[4];
          uVar9 = *(undefined8 *)(param_1 + 6);
          uStack_b0 = (undefined7)*(undefined8 *)(param_1 + 8);
          uVar13 = *(undefined8 *)((long)param_1 + 0x27);
          uStack_a9 = (undefined1)uVar13;
          uVar2 = *(undefined1 *)((long)param_1 + 0x2f);
          param_1[8] = 0;
          param_1[9] = 0;
          param_1[10] = 0;
          param_1[0xb] = 0;
          param_1[6] = 0;
          param_1[7] = 0;
          uVar21 = *(undefined8 *)(param_2 + 2);
          uVar15 = *(undefined8 *)param_2;
          param_1[4] = param_2[4];
          *(undefined8 *)(param_1 + 2) = uVar21;
          *(undefined8 *)param_1 = uVar15;
          uVar15 = *(undefined8 *)(param_2 + 10);
          uVar21 = *(undefined8 *)piVar18;
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
          *(undefined8 *)(param_1 + 6) = uVar21;
          *(undefined8 *)(param_1 + 10) = uVar15;
          *(undefined8 *)(param_2 + 2) = uVar20;
          *(undefined8 *)param_2 = uVar19;
          param_2[4] = iVar12;
          *(undefined8 *)(param_2 + 6) = uVar9;
          *(ulong *)piVar17 = CONCAT17(uStack_a9,uStack_b0);
          *(undefined8 *)((long)param_2 + 0x27) = uVar13;
          *(undefined1 *)((long)param_2 + 0x2f) = uVar2;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = ((long)piVar6 - (long)piVar4 >> 4) * -0x5555555555555555;
  if ((long)uVar8 < 3) {
    if (1 < uVar8) {
      if (uVar8 == 2) {
        piVar17 = piVar6 + -0xc;
        if (*piVar4 < *piVar17) {
          uVar20 = *(undefined8 *)(piVar4 + 2);
          uVar19 = *(undefined8 *)piVar4;
          iVar12 = piVar4[4];
          uVar9 = *(undefined8 *)(piVar4 + 6);
          uStack_110 = (undefined7)*(undefined8 *)(piVar4 + 8);
          uVar13 = *(undefined8 *)((long)piVar4 + 0x27);
          uStack_109 = (undefined1)uVar13;
          uVar2 = *(undefined1 *)((long)piVar4 + 0x2f);
          piVar4[8] = 0;
          piVar4[9] = 0;
          piVar4[10] = 0;
          piVar4[0xb] = 0;
          piVar4[6] = 0;
          piVar4[7] = 0;
          uVar21 = *(undefined8 *)(piVar6 + -10);
          uVar15 = *(undefined8 *)piVar17;
          piVar4[4] = piVar6[-8];
          *(undefined8 *)(piVar4 + 2) = uVar21;
          *(undefined8 *)piVar4 = uVar15;
          uVar15 = *(undefined8 *)(piVar6 + -2);
          uVar21 = *(undefined8 *)(piVar6 + -6);
          *(undefined8 *)(piVar4 + 8) = *(undefined8 *)(piVar6 + -4);
          *(undefined8 *)(piVar4 + 6) = uVar21;
          *(undefined8 *)(piVar4 + 10) = uVar15;
          *(undefined8 *)(piVar6 + -10) = uVar20;
          *(undefined8 *)piVar17 = uVar19;
          piVar6[-8] = iVar12;
          *(undefined8 *)(piVar6 + -6) = uVar9;
          *(ulong *)(piVar6 + -4) = CONCAT17(uStack_109,uStack_110);
          *(undefined8 *)((long)piVar6 + -9) = uVar13;
          puVar5 = (undefined8 *)0x1;
          *(undefined1 *)((long)piVar6 + -1) = uVar2;
          goto LAB_1094e4a50;
        }
      }
      else {
LAB_1094e47a0:
        FUN_1094e3f6c(piVar4,piVar4 + 0xc,piVar4 + 0x18);
        if (piVar4 + 0x24 != piVar6) {
          lVar11 = 0;
          iVar12 = 0;
          piVar17 = piVar4 + 0x24;
          piVar18 = piVar4 + 0x18;
          do {
            piVar10 = piVar17;
            iVar1 = *piVar10;
            if (*piVar18 < iVar1) {
              uVar19 = *(undefined8 *)(piVar10 + 3);
              uVar15 = *(undefined8 *)(piVar10 + 1);
              uVar9 = *(undefined8 *)(piVar10 + 6);
              uStack_110 = (undefined7)*(undefined8 *)(piVar10 + 8);
              uVar13 = *(undefined8 *)((long)piVar10 + 0x27);
              uStack_109 = (undefined1)uVar13;
              uVar2 = *(undefined1 *)((long)piVar10 + 0x2f);
              piVar10[8] = 0;
              piVar10[9] = 0;
              piVar10[10] = 0;
              piVar10[0xb] = 0;
              piVar10[6] = 0;
              piVar10[7] = 0;
              lVar3 = lVar11;
              do {
                lVar16 = lVar3;
                *(undefined8 *)((long)piVar4 + lVar16 + 0x98) =
                     *(undefined8 *)((long)piVar4 + lVar16 + 0x68);
                *(undefined8 *)((long)piVar4 + lVar16 + 0x90) =
                     *(undefined8 *)((long)piVar4 + lVar16 + 0x60);
                *(undefined4 *)((long)piVar4 + lVar16 + 0xa0) =
                     *(undefined4 *)((long)piVar4 + lVar16 + 0x70);
                *(undefined8 *)((long)piVar4 + lVar16 + 0xb0) =
                     *(undefined8 *)((long)piVar4 + lVar16 + 0x80);
                *(undefined8 *)((long)piVar4 + lVar16 + 0xa8) =
                     *(undefined8 *)((long)piVar4 + lVar16 + 0x78);
                *(undefined8 *)((long)piVar4 + lVar16 + 0xb8) =
                     *(undefined8 *)((long)piVar4 + lVar16 + 0x88);
                *(undefined1 *)((long)piVar4 + lVar16 + 0x8f) = 0;
                *(undefined1 *)((long)piVar4 + lVar16 + 0x78) = 0;
                piVar17 = piVar4;
                if (lVar16 == -0x60) goto LAB_1094e4854;
                lVar3 = lVar16 + -0x30;
              } while (*(int *)((long)piVar4 + lVar16 + 0x30) < iVar1);
              piVar17 = (int *)((long)piVar4 + lVar16 + 0x60);
LAB_1094e4854:
              *piVar17 = iVar1;
              *(undefined8 *)(piVar17 + 3) = uVar19;
              *(undefined8 *)(piVar17 + 1) = uVar15;
              *(undefined8 *)((long)piVar4 + lVar16 + 0x78) = uVar9;
              *(ulong *)(piVar17 + 8) = CONCAT17(uStack_109,uStack_110);
              *(undefined8 *)((long)piVar17 + 0x27) = uVar13;
              *(undefined1 *)((long)piVar17 + 0x2f) = uVar2;
              iVar12 = iVar12 + 1;
              if (iVar12 == 8) {
                puVar5 = (undefined8 *)(ulong)(piVar10 + 0xc == piVar6);
                goto LAB_1094e4a50;
              }
            }
            lVar11 = lVar11 + 0x30;
            piVar17 = piVar10 + 0xc;
            piVar18 = piVar10;
          } while (piVar10 + 0xc != piVar6);
        }
      }
    }
  }
  else if (uVar8 == 3) {
    FUN_1094e3f6c(piVar4,piVar4 + 0xc,piVar6 + -0xc);
  }
  else if (uVar8 == 4) {
    FUN_1094e3f6c(piVar4,piVar4 + 0xc,piVar4 + 0x18);
    piVar17 = piVar6 + -0xc;
    if (piVar4[0x18] < *piVar17) {
      uVar20 = *(undefined8 *)(piVar4 + 0x1a);
      uVar19 = *(undefined8 *)(piVar4 + 0x18);
      iVar12 = piVar4[0x1c];
      piVar10 = piVar4 + 0x1e;
      uVar9 = *(undefined8 *)piVar10;
      piVar18 = piVar4 + 0x20;
      uStack_110 = (undefined7)*(undefined8 *)piVar18;
      uVar13 = *(undefined8 *)((long)piVar4 + 0x87);
      uStack_109 = (undefined1)uVar13;
      uVar2 = *(undefined1 *)((long)piVar4 + 0x8f);
      piVar10[0] = 0;
      piVar10[1] = 0;
      piVar4[0x22] = 0;
      piVar4[0x23] = 0;
      piVar18[0] = 0;
      piVar18[1] = 0;
      uVar21 = *(undefined8 *)(piVar6 + -10);
      uVar15 = *(undefined8 *)piVar17;
      piVar4[0x1c] = piVar6[-8];
      *(undefined8 *)(piVar4 + 0x1a) = uVar21;
      *(undefined8 *)(piVar4 + 0x18) = uVar15;
      uVar15 = *(undefined8 *)(piVar6 + -2);
      uVar21 = *(undefined8 *)(piVar6 + -6);
      *(undefined8 *)(piVar4 + 0x20) = *(undefined8 *)(piVar6 + -4);
      *(undefined8 *)piVar10 = uVar21;
      *(undefined8 *)(piVar4 + 0x22) = uVar15;
      *(undefined8 *)(piVar6 + -10) = uVar20;
      *(undefined8 *)piVar17 = uVar19;
      piVar6[-8] = iVar12;
      *(undefined8 *)(piVar6 + -6) = uVar9;
      *(ulong *)(piVar6 + -4) = CONCAT17(uStack_109,uStack_110);
      *(undefined8 *)((long)piVar6 + -9) = uVar13;
      *(undefined1 *)((long)piVar6 + -1) = uVar2;
      if (piVar4[0xc] < piVar4[0x18]) {
        uVar15 = *(undefined8 *)(piVar4 + 0xe);
        uVar13 = *(undefined8 *)(piVar4 + 0xc);
        iVar12 = piVar4[0x10];
        piVar6 = piVar4 + 0x12;
        uVar9 = *(undefined8 *)piVar6;
        uStack_110 = (undefined7)*(undefined8 *)(piVar4 + 0x14);
        uStack_109 = (undefined1)*(undefined8 *)((long)piVar4 + 0x57);
        *(undefined8 *)(piVar4 + 0xe) = *(undefined8 *)(piVar4 + 0x1a);
        *(undefined8 *)(piVar4 + 0xc) = *(undefined8 *)(piVar4 + 0x18);
        piVar4[0x10] = piVar4[0x1c];
        *(undefined8 *)(piVar4 + 0x14) = *(undefined8 *)(piVar4 + 0x20);
        *(undefined8 *)piVar6 = *(undefined8 *)piVar10;
        *(undefined8 *)(piVar4 + 0x16) = *(undefined8 *)(piVar4 + 0x22);
        piVar4[0x1c] = iVar12;
        *(undefined8 *)(piVar4 + 0x1a) = uVar15;
        *(undefined8 *)(piVar4 + 0x18) = uVar13;
        *(undefined8 *)(piVar4 + 0x1e) = uVar9;
        *(ulong *)piVar18 = CONCAT17(uStack_109,uStack_110);
        *(undefined8 *)((long)piVar4 + 0x87) = *(undefined8 *)((long)piVar4 + 0x57);
        *(undefined1 *)((long)piVar4 + 0x8f) = *(undefined1 *)((long)piVar4 + 0x5f);
        if (*piVar4 < piVar4[0xc]) {
          uVar15 = *(undefined8 *)(piVar4 + 2);
          uVar13 = *(undefined8 *)piVar4;
          iVar12 = piVar4[4];
          uVar9 = *(undefined8 *)(piVar4 + 6);
          uStack_110 = (undefined7)*(undefined8 *)(piVar4 + 8);
          uStack_109 = (undefined1)*(undefined8 *)((long)piVar4 + 0x27);
          *(undefined8 *)(piVar4 + 2) = *(undefined8 *)(piVar4 + 0xe);
          *(undefined8 *)piVar4 = *(undefined8 *)(piVar4 + 0xc);
          piVar4[4] = piVar4[0x10];
          *(undefined8 *)(piVar4 + 8) = *(undefined8 *)(piVar4 + 0x14);
          *(undefined8 *)(piVar4 + 6) = *(undefined8 *)piVar6;
          *(undefined8 *)(piVar4 + 10) = *(undefined8 *)(piVar4 + 0x16);
          piVar4[0x10] = iVar12;
          *(undefined8 *)(piVar4 + 0xe) = uVar15;
          *(undefined8 *)(piVar4 + 0xc) = uVar13;
          *(undefined8 *)(piVar4 + 0x12) = uVar9;
          *(ulong *)(piVar4 + 0x14) = CONCAT17(uStack_109,uStack_110);
          *(undefined8 *)((long)piVar4 + 0x57) = *(undefined8 *)((long)piVar4 + 0x27);
          puVar5 = (undefined8 *)0x1;
          *(undefined1 *)((long)piVar4 + 0x5f) = *(undefined1 *)((long)piVar4 + 0x2f);
          goto LAB_1094e4a50;
        }
      }
    }
  }
  else {
    if (uVar8 != 5) goto LAB_1094e47a0;
    FUN_1094e4220(piVar4,piVar4 + 0xc,piVar4 + 0x18,piVar4 + 0x24,piVar6 + -0xc);
  }
  puVar5 = (undefined8 *)0x1;
LAB_1094e4a50:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)*puVar5 == 0) {
    return;
  }
  FUN_1094e2fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*puVar5);
  return;
}



/* Entry: 1094e4220; end: 1094e4677;  */

void FUN_1094e4220(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  undefined1 uVar2;
  long lVar3;
  int *piVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  int *piVar10;
  long lVar11;
  int iVar12;
  undefined8 uVar13;
  int *piVar14;
  undefined8 uVar15;
  long lVar16;
  int *piVar17;
  int *piVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined7 uStack_d0;
  undefined1 uStack_c9;
  undefined7 uStack_70;
  undefined1 uStack_69;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar4 = param_1;
  piVar6 = param_2;
  FUN_1094e3f6c();
  if (*param_3 < *param_4) {
    uVar20 = *(undefined8 *)(param_3 + 2);
    uVar19 = *(undefined8 *)param_3;
    iVar12 = param_3[4];
    piVar18 = param_3 + 6;
    uVar9 = *(undefined8 *)piVar18;
    piVar17 = param_3 + 8;
    uStack_70 = (undefined7)*(undefined8 *)piVar17;
    uVar13 = *(undefined8 *)((long)param_3 + 0x27);
    uStack_69 = (undefined1)uVar13;
    uVar2 = *(undefined1 *)((long)param_3 + 0x2f);
    piVar18[0] = 0;
    piVar18[1] = 0;
    param_3[10] = 0;
    param_3[0xb] = 0;
    piVar17[0] = 0;
    piVar17[1] = 0;
    uVar21 = *(undefined8 *)(param_4 + 2);
    uVar15 = *(undefined8 *)param_4;
    param_3[4] = param_4[4];
    *(undefined8 *)(param_3 + 2) = uVar21;
    *(undefined8 *)param_3 = uVar15;
    uVar15 = *(undefined8 *)(param_4 + 10);
    uVar21 = *(undefined8 *)(param_4 + 6);
    *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_4 + 8);
    *(undefined8 *)piVar18 = uVar21;
    *(undefined8 *)(param_3 + 10) = uVar15;
    *(undefined8 *)(param_4 + 2) = uVar20;
    *(undefined8 *)param_4 = uVar19;
    param_4[4] = iVar12;
    *(undefined8 *)(param_4 + 6) = uVar9;
    *(ulong *)(param_4 + 8) = CONCAT17(uStack_69,uStack_70);
    *(undefined8 *)((long)param_4 + 0x27) = uVar13;
    *(undefined1 *)((long)param_4 + 0x2f) = uVar2;
    if (*param_2 < *param_3) {
      uVar20 = *(undefined8 *)(param_2 + 2);
      uVar19 = *(undefined8 *)param_2;
      iVar12 = param_2[4];
      piVar14 = param_2 + 6;
      uVar9 = *(undefined8 *)piVar14;
      piVar10 = param_2 + 8;
      uStack_70 = (undefined7)*(undefined8 *)piVar10;
      uVar13 = *(undefined8 *)((long)param_2 + 0x27);
      uStack_69 = (undefined1)uVar13;
      uVar2 = *(undefined1 *)((long)param_2 + 0x2f);
      piVar14[0] = 0;
      piVar14[1] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      piVar10[0] = 0;
      piVar10[1] = 0;
      uVar21 = *(undefined8 *)(param_3 + 2);
      uVar15 = *(undefined8 *)param_3;
      param_2[4] = param_3[4];
      *(undefined8 *)(param_2 + 2) = uVar21;
      *(undefined8 *)param_2 = uVar15;
      uVar15 = *(undefined8 *)(param_3 + 10);
      uVar21 = *(undefined8 *)piVar18;
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)piVar14 = uVar21;
      *(undefined8 *)(param_2 + 10) = uVar15;
      *(undefined8 *)(param_3 + 2) = uVar20;
      *(undefined8 *)param_3 = uVar19;
      param_3[4] = iVar12;
      *(undefined8 *)(param_3 + 6) = uVar9;
      *(ulong *)piVar17 = CONCAT17(uStack_69,uStack_70);
      *(undefined8 *)((long)param_3 + 0x27) = uVar13;
      *(undefined1 *)((long)param_3 + 0x2f) = uVar2;
      if (*param_1 < *param_2) {
        uVar20 = *(undefined8 *)(param_1 + 2);
        uVar19 = *(undefined8 *)param_1;
        iVar12 = param_1[4];
        uVar9 = *(undefined8 *)(param_1 + 6);
        uStack_70 = (undefined7)*(undefined8 *)(param_1 + 8);
        uVar13 = *(undefined8 *)((long)param_1 + 0x27);
        uStack_69 = (undefined1)uVar13;
        uVar2 = *(undefined1 *)((long)param_1 + 0x2f);
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        uVar21 = *(undefined8 *)(param_2 + 2);
        uVar15 = *(undefined8 *)param_2;
        param_1[4] = param_2[4];
        *(undefined8 *)(param_1 + 2) = uVar21;
        *(undefined8 *)param_1 = uVar15;
        uVar15 = *(undefined8 *)(param_2 + 10);
        uVar21 = *(undefined8 *)piVar14;
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
        *(undefined8 *)(param_1 + 6) = uVar21;
        *(undefined8 *)(param_1 + 10) = uVar15;
        *(undefined8 *)(param_2 + 2) = uVar20;
        *(undefined8 *)param_2 = uVar19;
        param_2[4] = iVar12;
        *(undefined8 *)(param_2 + 6) = uVar9;
        *(ulong *)piVar10 = CONCAT17(uStack_69,uStack_70);
        *(undefined8 *)((long)param_2 + 0x27) = uVar13;
        *(undefined1 *)((long)param_2 + 0x2f) = uVar2;
      }
    }
  }
  if (*param_4 < *param_5) {
    uVar20 = *(undefined8 *)(param_4 + 2);
    uVar19 = *(undefined8 *)param_4;
    iVar12 = param_4[4];
    piVar18 = param_4 + 6;
    uVar9 = *(undefined8 *)piVar18;
    piVar17 = param_4 + 8;
    uStack_70 = (undefined7)*(undefined8 *)piVar17;
    uVar13 = *(undefined8 *)((long)param_4 + 0x27);
    uStack_69 = (undefined1)uVar13;
    uVar2 = *(undefined1 *)((long)param_4 + 0x2f);
    piVar18[0] = 0;
    piVar18[1] = 0;
    param_4[10] = 0;
    param_4[0xb] = 0;
    piVar17[0] = 0;
    piVar17[1] = 0;
    uVar21 = *(undefined8 *)(param_5 + 2);
    uVar15 = *(undefined8 *)param_5;
    param_4[4] = param_5[4];
    *(undefined8 *)(param_4 + 2) = uVar21;
    *(undefined8 *)param_4 = uVar15;
    uVar15 = *(undefined8 *)(param_5 + 10);
    uVar21 = *(undefined8 *)(param_5 + 6);
    *(undefined8 *)(param_4 + 8) = *(undefined8 *)(param_5 + 8);
    *(undefined8 *)piVar18 = uVar21;
    *(undefined8 *)(param_4 + 10) = uVar15;
    *(undefined8 *)(param_5 + 2) = uVar20;
    *(undefined8 *)param_5 = uVar19;
    param_5[4] = iVar12;
    *(undefined8 *)(param_5 + 6) = uVar9;
    *(ulong *)(param_5 + 8) = CONCAT17(uStack_69,uStack_70);
    *(undefined8 *)((long)param_5 + 0x27) = uVar13;
    *(undefined1 *)((long)param_5 + 0x2f) = uVar2;
    if (*param_3 < *param_4) {
      uVar20 = *(undefined8 *)(param_3 + 2);
      uVar19 = *(undefined8 *)param_3;
      iVar12 = param_3[4];
      piVar14 = param_3 + 6;
      uVar9 = *(undefined8 *)piVar14;
      piVar10 = param_3 + 8;
      uStack_70 = (undefined7)*(undefined8 *)piVar10;
      uVar13 = *(undefined8 *)((long)param_3 + 0x27);
      uStack_69 = (undefined1)uVar13;
      uVar2 = *(undefined1 *)((long)param_3 + 0x2f);
      piVar14[0] = 0;
      piVar14[1] = 0;
      param_3[10] = 0;
      param_3[0xb] = 0;
      piVar10[0] = 0;
      piVar10[1] = 0;
      uVar21 = *(undefined8 *)(param_4 + 2);
      uVar15 = *(undefined8 *)param_4;
      param_3[4] = param_4[4];
      *(undefined8 *)(param_3 + 2) = uVar21;
      *(undefined8 *)param_3 = uVar15;
      uVar15 = *(undefined8 *)(param_4 + 10);
      uVar21 = *(undefined8 *)piVar18;
      *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_4 + 8);
      *(undefined8 *)piVar14 = uVar21;
      *(undefined8 *)(param_3 + 10) = uVar15;
      *(undefined8 *)(param_4 + 2) = uVar20;
      *(undefined8 *)param_4 = uVar19;
      param_4[4] = iVar12;
      *(undefined8 *)(param_4 + 6) = uVar9;
      *(ulong *)piVar17 = CONCAT17(uStack_69,uStack_70);
      *(undefined8 *)((long)param_4 + 0x27) = uVar13;
      *(undefined1 *)((long)param_4 + 0x2f) = uVar2;
      if (*param_2 < *param_3) {
        uVar20 = *(undefined8 *)(param_2 + 2);
        uVar19 = *(undefined8 *)param_2;
        iVar12 = param_2[4];
        piVar18 = param_2 + 6;
        uVar9 = *(undefined8 *)piVar18;
        piVar17 = param_2 + 8;
        uStack_70 = (undefined7)*(undefined8 *)piVar17;
        uVar13 = *(undefined8 *)((long)param_2 + 0x27);
        uStack_69 = (undefined1)uVar13;
        uVar2 = *(undefined1 *)((long)param_2 + 0x2f);
        piVar18[0] = 0;
        piVar18[1] = 0;
        param_2[10] = 0;
        param_2[0xb] = 0;
        piVar17[0] = 0;
        piVar17[1] = 0;
        uVar21 = *(undefined8 *)(param_3 + 2);
        uVar15 = *(undefined8 *)param_3;
        param_2[4] = param_3[4];
        *(undefined8 *)(param_2 + 2) = uVar21;
        *(undefined8 *)param_2 = uVar15;
        uVar15 = *(undefined8 *)(param_3 + 10);
        uVar21 = *(undefined8 *)piVar14;
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
        *(undefined8 *)piVar18 = uVar21;
        *(undefined8 *)(param_2 + 10) = uVar15;
        *(undefined8 *)(param_3 + 2) = uVar20;
        *(undefined8 *)param_3 = uVar19;
        param_3[4] = iVar12;
        *(undefined8 *)(param_3 + 6) = uVar9;
        *(ulong *)piVar10 = CONCAT17(uStack_69,uStack_70);
        *(undefined8 *)((long)param_3 + 0x27) = uVar13;
        *(undefined1 *)((long)param_3 + 0x2f) = uVar2;
        if (*param_1 < *param_2) {
          uVar20 = *(undefined8 *)(param_1 + 2);
          uVar19 = *(undefined8 *)param_1;
          iVar12 = param_1[4];
          uVar9 = *(undefined8 *)(param_1 + 6);
          uStack_70 = (undefined7)*(undefined8 *)(param_1 + 8);
          uVar13 = *(undefined8 *)((long)param_1 + 0x27);
          uStack_69 = (undefined1)uVar13;
          uVar2 = *(undefined1 *)((long)param_1 + 0x2f);
          param_1[8] = 0;
          param_1[9] = 0;
          param_1[10] = 0;
          param_1[0xb] = 0;
          param_1[6] = 0;
          param_1[7] = 0;
          uVar21 = *(undefined8 *)(param_2 + 2);
          uVar15 = *(undefined8 *)param_2;
          param_1[4] = param_2[4];
          *(undefined8 *)(param_1 + 2) = uVar21;
          *(undefined8 *)param_1 = uVar15;
          uVar15 = *(undefined8 *)(param_2 + 10);
          uVar21 = *(undefined8 *)piVar18;
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
          *(undefined8 *)(param_1 + 6) = uVar21;
          *(undefined8 *)(param_1 + 10) = uVar15;
          *(undefined8 *)(param_2 + 2) = uVar20;
          *(undefined8 *)param_2 = uVar19;
          param_2[4] = iVar12;
          *(undefined8 *)(param_2 + 6) = uVar9;
          *(ulong *)piVar17 = CONCAT17(uStack_69,uStack_70);
          *(undefined8 *)((long)param_2 + 0x27) = uVar13;
          *(undefined1 *)((long)param_2 + 0x2f) = uVar2;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = ((long)piVar6 - (long)piVar4 >> 4) * -0x5555555555555555;
  if ((long)uVar8 < 3) {
    if (1 < uVar8) {
      if (uVar8 == 2) {
        piVar17 = piVar6 + -0xc;
        if (*piVar4 < *piVar17) {
          uVar20 = *(undefined8 *)(piVar4 + 2);
          uVar19 = *(undefined8 *)piVar4;
          iVar12 = piVar4[4];
          uVar9 = *(undefined8 *)(piVar4 + 6);
          uStack_d0 = (undefined7)*(undefined8 *)(piVar4 + 8);
          uVar13 = *(undefined8 *)((long)piVar4 + 0x27);
          uStack_c9 = (undefined1)uVar13;
          uVar2 = *(undefined1 *)((long)piVar4 + 0x2f);
          piVar4[8] = 0;
          piVar4[9] = 0;
          piVar4[10] = 0;
          piVar4[0xb] = 0;
          piVar4[6] = 0;
          piVar4[7] = 0;
          uVar21 = *(undefined8 *)(piVar6 + -10);
          uVar15 = *(undefined8 *)piVar17;
          piVar4[4] = piVar6[-8];
          *(undefined8 *)(piVar4 + 2) = uVar21;
          *(undefined8 *)piVar4 = uVar15;
          uVar15 = *(undefined8 *)(piVar6 + -2);
          uVar21 = *(undefined8 *)(piVar6 + -6);
          *(undefined8 *)(piVar4 + 8) = *(undefined8 *)(piVar6 + -4);
          *(undefined8 *)(piVar4 + 6) = uVar21;
          *(undefined8 *)(piVar4 + 10) = uVar15;
          *(undefined8 *)(piVar6 + -10) = uVar20;
          *(undefined8 *)piVar17 = uVar19;
          piVar6[-8] = iVar12;
          *(undefined8 *)(piVar6 + -6) = uVar9;
          *(ulong *)(piVar6 + -4) = CONCAT17(uStack_c9,uStack_d0);
          *(undefined8 *)((long)piVar6 + -9) = uVar13;
          puVar5 = (undefined8 *)0x1;
          *(undefined1 *)((long)piVar6 + -1) = uVar2;
          goto LAB_1094e4a50;
        }
      }
      else {
LAB_1094e47a0:
        FUN_1094e3f6c(piVar4,piVar4 + 0xc,piVar4 + 0x18);
        if (piVar4 + 0x24 != piVar6) {
          lVar11 = 0;
          iVar12 = 0;
          piVar17 = piVar4 + 0x24;
          piVar18 = piVar4 + 0x18;
          do {
            piVar10 = piVar17;
            iVar1 = *piVar10;
            if (*piVar18 < iVar1) {
              uVar19 = *(undefined8 *)(piVar10 + 3);
              uVar15 = *(undefined8 *)(piVar10 + 1);
              uVar9 = *(undefined8 *)(piVar10 + 6);
              uStack_d0 = (undefined7)*(undefined8 *)(piVar10 + 8);
              uVar13 = *(undefined8 *)((long)piVar10 + 0x27);
              uStack_c9 = (undefined1)uVar13;
              uVar2 = *(undefined1 *)((long)piVar10 + 0x2f);
              piVar10[8] = 0;
              piVar10[9] = 0;
              piVar10[10] = 0;
              piVar10[0xb] = 0;
              piVar10[6] = 0;
              piVar10[7] = 0;
              lVar3 = lVar11;
              do {
                lVar16 = lVar3;
                *(undefined8 *)((long)piVar4 + lVar16 + 0x98) =
                     *(undefined8 *)((long)piVar4 + lVar16 + 0x68);
                *(undefined8 *)((long)piVar4 + lVar16 + 0x90) =
                     *(undefined8 *)((long)piVar4 + lVar16 + 0x60);
                *(undefined4 *)((long)piVar4 + lVar16 + 0xa0) =
                     *(undefined4 *)((long)piVar4 + lVar16 + 0x70);
                *(undefined8 *)((long)piVar4 + lVar16 + 0xb0) =
                     *(undefined8 *)((long)piVar4 + lVar16 + 0x80);
                *(undefined8 *)((long)piVar4 + lVar16 + 0xa8) =
                     *(undefined8 *)((long)piVar4 + lVar16 + 0x78);
                *(undefined8 *)((long)piVar4 + lVar16 + 0xb8) =
                     *(undefined8 *)((long)piVar4 + lVar16 + 0x88);
                *(undefined1 *)((long)piVar4 + lVar16 + 0x8f) = 0;
                *(undefined1 *)((long)piVar4 + lVar16 + 0x78) = 0;
                piVar17 = piVar4;
                if (lVar16 == -0x60) goto LAB_1094e4854;
                lVar3 = lVar16 + -0x30;
              } while (*(int *)((long)piVar4 + lVar16 + 0x30) < iVar1);
              piVar17 = (int *)((long)piVar4 + lVar16 + 0x60);
LAB_1094e4854:
              *piVar17 = iVar1;
              *(undefined8 *)(piVar17 + 3) = uVar19;
              *(undefined8 *)(piVar17 + 1) = uVar15;
              *(undefined8 *)((long)piVar4 + lVar16 + 0x78) = uVar9;
              *(ulong *)(piVar17 + 8) = CONCAT17(uStack_c9,uStack_d0);
              *(undefined8 *)((long)piVar17 + 0x27) = uVar13;
              *(undefined1 *)((long)piVar17 + 0x2f) = uVar2;
              iVar12 = iVar12 + 1;
              if (iVar12 == 8) {
                puVar5 = (undefined8 *)(ulong)(piVar10 + 0xc == piVar6);
                goto LAB_1094e4a50;
              }
            }
            lVar11 = lVar11 + 0x30;
            piVar17 = piVar10 + 0xc;
            piVar18 = piVar10;
          } while (piVar10 + 0xc != piVar6);
        }
      }
    }
  }
  else if (uVar8 == 3) {
    FUN_1094e3f6c(piVar4,piVar4 + 0xc,piVar6 + -0xc);
  }
  else if (uVar8 == 4) {
    FUN_1094e3f6c(piVar4,piVar4 + 0xc,piVar4 + 0x18);
    piVar17 = piVar6 + -0xc;
    if (piVar4[0x18] < *piVar17) {
      uVar20 = *(undefined8 *)(piVar4 + 0x1a);
      uVar19 = *(undefined8 *)(piVar4 + 0x18);
      iVar12 = piVar4[0x1c];
      piVar10 = piVar4 + 0x1e;
      uVar9 = *(undefined8 *)piVar10;
      piVar18 = piVar4 + 0x20;
      uStack_d0 = (undefined7)*(undefined8 *)piVar18;
      uVar13 = *(undefined8 *)((long)piVar4 + 0x87);
      uStack_c9 = (undefined1)uVar13;
      uVar2 = *(undefined1 *)((long)piVar4 + 0x8f);
      piVar10[0] = 0;
      piVar10[1] = 0;
      piVar4[0x22] = 0;
      piVar4[0x23] = 0;
      piVar18[0] = 0;
      piVar18[1] = 0;
      uVar21 = *(undefined8 *)(piVar6 + -10);
      uVar15 = *(undefined8 *)piVar17;
      piVar4[0x1c] = piVar6[-8];
      *(undefined8 *)(piVar4 + 0x1a) = uVar21;
      *(undefined8 *)(piVar4 + 0x18) = uVar15;
      uVar15 = *(undefined8 *)(piVar6 + -2);
      uVar21 = *(undefined8 *)(piVar6 + -6);
      *(undefined8 *)(piVar4 + 0x20) = *(undefined8 *)(piVar6 + -4);
      *(undefined8 *)piVar10 = uVar21;
      *(undefined8 *)(piVar4 + 0x22) = uVar15;
      *(undefined8 *)(piVar6 + -10) = uVar20;
      *(undefined8 *)piVar17 = uVar19;
      piVar6[-8] = iVar12;
      *(undefined8 *)(piVar6 + -6) = uVar9;
      *(ulong *)(piVar6 + -4) = CONCAT17(uStack_c9,uStack_d0);
      *(undefined8 *)((long)piVar6 + -9) = uVar13;
      *(undefined1 *)((long)piVar6 + -1) = uVar2;
      if (piVar4[0xc] < piVar4[0x18]) {
        uVar15 = *(undefined8 *)(piVar4 + 0xe);
        uVar13 = *(undefined8 *)(piVar4 + 0xc);
        iVar12 = piVar4[0x10];
        piVar6 = piVar4 + 0x12;
        uVar9 = *(undefined8 *)piVar6;
        uStack_d0 = (undefined7)*(undefined8 *)(piVar4 + 0x14);
        uStack_c9 = (undefined1)*(undefined8 *)((long)piVar4 + 0x57);
        *(undefined8 *)(piVar4 + 0xe) = *(undefined8 *)(piVar4 + 0x1a);
        *(undefined8 *)(piVar4 + 0xc) = *(undefined8 *)(piVar4 + 0x18);
        piVar4[0x10] = piVar4[0x1c];
        *(undefined8 *)(piVar4 + 0x14) = *(undefined8 *)(piVar4 + 0x20);
        *(undefined8 *)piVar6 = *(undefined8 *)piVar10;
        *(undefined8 *)(piVar4 + 0x16) = *(undefined8 *)(piVar4 + 0x22);
        piVar4[0x1c] = iVar12;
        *(undefined8 *)(piVar4 + 0x1a) = uVar15;
        *(undefined8 *)(piVar4 + 0x18) = uVar13;
        *(undefined8 *)(piVar4 + 0x1e) = uVar9;
        *(ulong *)piVar18 = CONCAT17(uStack_c9,uStack_d0);
        *(undefined8 *)((long)piVar4 + 0x87) = *(undefined8 *)((long)piVar4 + 0x57);
        *(undefined1 *)((long)piVar4 + 0x8f) = *(undefined1 *)((long)piVar4 + 0x5f);
        if (*piVar4 < piVar4[0xc]) {
          uVar15 = *(undefined8 *)(piVar4 + 2);
          uVar13 = *(undefined8 *)piVar4;
          iVar12 = piVar4[4];
          uVar9 = *(undefined8 *)(piVar4 + 6);
          uStack_d0 = (undefined7)*(undefined8 *)(piVar4 + 8);
          uStack_c9 = (undefined1)*(undefined8 *)((long)piVar4 + 0x27);
          *(undefined8 *)(piVar4 + 2) = *(undefined8 *)(piVar4 + 0xe);
          *(undefined8 *)piVar4 = *(undefined8 *)(piVar4 + 0xc);
          piVar4[4] = piVar4[0x10];
          *(undefined8 *)(piVar4 + 8) = *(undefined8 *)(piVar4 + 0x14);
          *(undefined8 *)(piVar4 + 6) = *(undefined8 *)piVar6;
          *(undefined8 *)(piVar4 + 10) = *(undefined8 *)(piVar4 + 0x16);
          piVar4[0x10] = iVar12;
          *(undefined8 *)(piVar4 + 0xe) = uVar15;
          *(undefined8 *)(piVar4 + 0xc) = uVar13;
          *(undefined8 *)(piVar4 + 0x12) = uVar9;
          *(ulong *)(piVar4 + 0x14) = CONCAT17(uStack_c9,uStack_d0);
          *(undefined8 *)((long)piVar4 + 0x57) = *(undefined8 *)((long)piVar4 + 0x27);
          puVar5 = (undefined8 *)0x1;
          *(undefined1 *)((long)piVar4 + 0x5f) = *(undefined1 *)((long)piVar4 + 0x2f);
          goto LAB_1094e4a50;
        }
      }
    }
  }
  else {
    if (uVar8 != 5) goto LAB_1094e47a0;
    FUN_1094e4220(piVar4,piVar4 + 0xc,piVar4 + 0x18,piVar4 + 0x24,piVar6 + -0xc);
  }
  puVar5 = (undefined8 *)0x1;
LAB_1094e4a50:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)*puVar5 == 0) {
    return;
  }
  FUN_1094e2fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*puVar5);
  return;
}



/* Entry: 1094e4678; end: 1094e4a8f;  */

void FUN_1094e4678(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  int *piVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined7 uStack_60;
  undefined1 uStack_59;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = ((long)param_2 - (long)param_1 >> 4) * -0x5555555555555555;
  if ((long)uVar6 < 3) {
    if (1 < uVar6) {
      if (uVar6 == 2) {
        piVar14 = param_2 + -0xc;
        if (*param_1 < *piVar14) {
          uVar17 = *(undefined8 *)(param_1 + 2);
          uVar16 = *(undefined8 *)param_1;
          iVar9 = param_1[4];
          uVar12 = *(undefined8 *)(param_1 + 6);
          uStack_60 = (undefined7)*(undefined8 *)(param_1 + 8);
          uVar10 = *(undefined8 *)((long)param_1 + 0x27);
          uStack_59 = (undefined1)uVar10;
          uVar2 = *(undefined1 *)((long)param_1 + 0x2f);
          param_1[8] = 0;
          param_1[9] = 0;
          param_1[10] = 0;
          param_1[0xb] = 0;
          param_1[6] = 0;
          param_1[7] = 0;
          uVar18 = *(undefined8 *)(param_2 + -10);
          uVar11 = *(undefined8 *)piVar14;
          param_1[4] = param_2[-8];
          *(undefined8 *)(param_1 + 2) = uVar18;
          *(undefined8 *)param_1 = uVar11;
          uVar11 = *(undefined8 *)(param_2 + -2);
          uVar18 = *(undefined8 *)(param_2 + -6);
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + -4);
          *(undefined8 *)(param_1 + 6) = uVar18;
          *(undefined8 *)(param_1 + 10) = uVar11;
          *(undefined8 *)(param_2 + -10) = uVar17;
          *(undefined8 *)piVar14 = uVar16;
          param_2[-8] = iVar9;
          *(undefined8 *)(param_2 + -6) = uVar12;
          *(ulong *)(param_2 + -4) = CONCAT17(uStack_59,uStack_60);
          *(undefined8 *)((long)param_2 + -9) = uVar10;
          puVar4 = (undefined8 *)0x1;
          *(undefined1 *)((long)param_2 + -1) = uVar2;
          goto LAB_1094e4a50;
        }
      }
      else {
LAB_1094e47a0:
        FUN_1094e3f6c(param_1,param_1 + 0xc,param_1 + 0x18);
        if (param_1 + 0x24 != param_2) {
          lVar7 = 0;
          iVar9 = 0;
          piVar14 = param_1 + 0x24;
          piVar15 = param_1 + 0x18;
          do {
            piVar8 = piVar14;
            iVar1 = *piVar8;
            if (*piVar15 < iVar1) {
              uVar16 = *(undefined8 *)(piVar8 + 3);
              uVar11 = *(undefined8 *)(piVar8 + 1);
              uVar12 = *(undefined8 *)(piVar8 + 6);
              uStack_60 = (undefined7)*(undefined8 *)(piVar8 + 8);
              uVar10 = *(undefined8 *)((long)piVar8 + 0x27);
              uStack_59 = (undefined1)uVar10;
              uVar2 = *(undefined1 *)((long)piVar8 + 0x2f);
              piVar8[8] = 0;
              piVar8[9] = 0;
              piVar8[10] = 0;
              piVar8[0xb] = 0;
              piVar8[6] = 0;
              piVar8[7] = 0;
              lVar3 = lVar7;
              do {
                lVar13 = lVar3;
                *(undefined8 *)((long)param_1 + lVar13 + 0x98) =
                     *(undefined8 *)((long)param_1 + lVar13 + 0x68);
                *(undefined8 *)((long)param_1 + lVar13 + 0x90) =
                     *(undefined8 *)((long)param_1 + lVar13 + 0x60);
                *(undefined4 *)((long)param_1 + lVar13 + 0xa0) =
                     *(undefined4 *)((long)param_1 + lVar13 + 0x70);
                *(undefined8 *)((long)param_1 + lVar13 + 0xb0) =
                     *(undefined8 *)((long)param_1 + lVar13 + 0x80);
                *(undefined8 *)((long)param_1 + lVar13 + 0xa8) =
                     *(undefined8 *)((long)param_1 + lVar13 + 0x78);
                *(undefined8 *)((long)param_1 + lVar13 + 0xb8) =
                     *(undefined8 *)((long)param_1 + lVar13 + 0x88);
                *(undefined1 *)((long)param_1 + lVar13 + 0x8f) = 0;
                *(undefined1 *)((long)param_1 + lVar13 + 0x78) = 0;
                piVar14 = param_1;
                if (lVar13 == -0x60) goto LAB_1094e4854;
                lVar3 = lVar13 + -0x30;
              } while (*(int *)((long)param_1 + lVar13 + 0x30) < iVar1);
              piVar14 = (int *)((long)param_1 + lVar13 + 0x60);
LAB_1094e4854:
              *piVar14 = iVar1;
              *(undefined8 *)(piVar14 + 3) = uVar16;
              *(undefined8 *)(piVar14 + 1) = uVar11;
              *(undefined8 *)((long)param_1 + lVar13 + 0x78) = uVar12;
              *(ulong *)(piVar14 + 8) = CONCAT17(uStack_59,uStack_60);
              *(undefined8 *)((long)piVar14 + 0x27) = uVar10;
              *(undefined1 *)((long)piVar14 + 0x2f) = uVar2;
              iVar9 = iVar9 + 1;
              if (iVar9 == 8) {
                puVar4 = (undefined8 *)(ulong)(piVar8 + 0xc == param_2);
                goto LAB_1094e4a50;
              }
            }
            lVar7 = lVar7 + 0x30;
            piVar14 = piVar8 + 0xc;
            piVar15 = piVar8;
          } while (piVar8 + 0xc != param_2);
        }
      }
    }
  }
  else if (uVar6 == 3) {
    FUN_1094e3f6c(param_1,param_1 + 0xc,param_2 + -0xc);
  }
  else if (uVar6 == 4) {
    FUN_1094e3f6c(param_1,param_1 + 0xc,param_1 + 0x18);
    piVar14 = param_2 + -0xc;
    if (param_1[0x18] < *piVar14) {
      uVar17 = *(undefined8 *)(param_1 + 0x1a);
      uVar16 = *(undefined8 *)(param_1 + 0x18);
      iVar9 = param_1[0x1c];
      piVar8 = param_1 + 0x1e;
      uVar12 = *(undefined8 *)piVar8;
      piVar15 = param_1 + 0x20;
      uStack_60 = (undefined7)*(undefined8 *)piVar15;
      uVar10 = *(undefined8 *)((long)param_1 + 0x87);
      uStack_59 = (undefined1)uVar10;
      uVar2 = *(undefined1 *)((long)param_1 + 0x8f);
      piVar8[0] = 0;
      piVar8[1] = 0;
      param_1[0x22] = 0;
      param_1[0x23] = 0;
      piVar15[0] = 0;
      piVar15[1] = 0;
      uVar18 = *(undefined8 *)(param_2 + -10);
      uVar11 = *(undefined8 *)piVar14;
      param_1[0x1c] = param_2[-8];
      *(undefined8 *)(param_1 + 0x1a) = uVar18;
      *(undefined8 *)(param_1 + 0x18) = uVar11;
      uVar11 = *(undefined8 *)(param_2 + -2);
      uVar18 = *(undefined8 *)(param_2 + -6);
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + -4);
      *(undefined8 *)piVar8 = uVar18;
      *(undefined8 *)(param_1 + 0x22) = uVar11;
      *(undefined8 *)(param_2 + -10) = uVar17;
      *(undefined8 *)piVar14 = uVar16;
      param_2[-8] = iVar9;
      *(undefined8 *)(param_2 + -6) = uVar12;
      *(ulong *)(param_2 + -4) = CONCAT17(uStack_59,uStack_60);
      *(undefined8 *)((long)param_2 + -9) = uVar10;
      *(undefined1 *)((long)param_2 + -1) = uVar2;
      if (param_1[0xc] < param_1[0x18]) {
        uVar11 = *(undefined8 *)(param_1 + 0xe);
        uVar10 = *(undefined8 *)(param_1 + 0xc);
        iVar9 = param_1[0x10];
        piVar14 = param_1 + 0x12;
        uVar12 = *(undefined8 *)piVar14;
        uStack_60 = (undefined7)*(undefined8 *)(param_1 + 0x14);
        uStack_59 = (undefined1)*(undefined8 *)((long)param_1 + 0x57);
        *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x1a);
        *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x18);
        param_1[0x10] = param_1[0x1c];
        *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 0x20);
        *(undefined8 *)piVar14 = *(undefined8 *)piVar8;
        *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_1 + 0x22);
        param_1[0x1c] = iVar9;
        *(undefined8 *)(param_1 + 0x1a) = uVar11;
        *(undefined8 *)(param_1 + 0x18) = uVar10;
        *(undefined8 *)(param_1 + 0x1e) = uVar12;
        *(ulong *)piVar15 = CONCAT17(uStack_59,uStack_60);
        *(undefined8 *)((long)param_1 + 0x87) = *(undefined8 *)((long)param_1 + 0x57);
        *(undefined1 *)((long)param_1 + 0x8f) = *(undefined1 *)((long)param_1 + 0x5f);
        if (*param_1 < param_1[0xc]) {
          uVar11 = *(undefined8 *)(param_1 + 2);
          uVar10 = *(undefined8 *)param_1;
          iVar9 = param_1[4];
          uVar12 = *(undefined8 *)(param_1 + 6);
          uStack_60 = (undefined7)*(undefined8 *)(param_1 + 8);
          uStack_59 = (undefined1)*(undefined8 *)((long)param_1 + 0x27);
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 0xe);
          *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 0xc);
          param_1[4] = param_1[0x10];
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x14);
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)piVar14;
          *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0x16);
          param_1[0x10] = iVar9;
          *(undefined8 *)(param_1 + 0xe) = uVar11;
          *(undefined8 *)(param_1 + 0xc) = uVar10;
          *(undefined8 *)(param_1 + 0x12) = uVar12;
          *(ulong *)(param_1 + 0x14) = CONCAT17(uStack_59,uStack_60);
          *(undefined8 *)((long)param_1 + 0x57) = *(undefined8 *)((long)param_1 + 0x27);
          puVar4 = (undefined8 *)0x1;
          *(undefined1 *)((long)param_1 + 0x5f) = *(undefined1 *)((long)param_1 + 0x2f);
          goto LAB_1094e4a50;
        }
      }
    }
  }
  else {
    if (uVar6 != 5) goto LAB_1094e47a0;
    FUN_1094e4220(param_1,param_1 + 0xc,param_1 + 0x18,param_1 + 0x24,param_2 + -0xc);
  }
  puVar4 = (undefined8 *)0x1;
LAB_1094e4a50:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)*puVar4 == 0) {
    return;
  }
  FUN_1094e2fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*puVar4);
  return;
}



/* Entry: 1094e4a90; end: 1094e4acf;  */

void FUN_1094e4a90(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_1094e2fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 1094e4ad0; end: 1094e4f0b;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1094e4ad0(long param_1,ulong param_2)

{
  undefined1 **ppuVar1;
  int iVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint5 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  long lVar16;
  undefined1 *apuStack_c0 [2];
  char cStack_a9;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  char cStack_79;
  undefined1 auStack_78 [16];
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  func_0x000107c31940(&plStack_68,&UNK_10f56fe2b);
  uVar11 = param_2;
  FUN_1093781f4(param_2,&plStack_68);
  if ((long)plStack_58 < 0) {
    __ZdlPv(plStack_68);
  }
  if ((uVar11 & 1) == 0) {
    return 1;
  }
  func_0x000107c31940(&plStack_68,&UNK_10f56fe2b);
  FUN_1094a68cc(auStack_78,param_2,&plStack_68);
  if ((long)plStack_58 < 0) {
    __ZdlPv(plStack_68);
  }
  func_0x000107c31940(&plStack_68,&UNK_10f56fe46);
  puVar4 = auStack_78;
  FUN_1093781f4(puVar4,&plStack_68);
  if ((long)plStack_58 < 0) {
    __ZdlPv(plStack_68);
  }
  if ((int)puVar4 == 0) {
    uVar14 = 1;
    goto LAB_1094e4e18;
  }
  func_0x000107c31940(&plStack_68,&UNK_10f56fe46);
  uStack_a8 = 0;
  uStack_a0 = 0;
  lStack_98 = 0;
  FUN_1094a6b30(&uStack_90,auStack_78,&plStack_68,&uStack_a8);
  if (lStack_98 < 0) {
    __ZdlPv(uStack_a8);
  }
  if ((long)plStack_58 < 0) {
    __ZdlPv(plStack_68);
  }
  if (cStack_79 < '\0') {
    if (lStack_88 != 4) {
      if (lStack_88 == 5) {
        puVar10 = (uint5 *)CONCAT44(uStack_90._4_4_,(int)uStack_90);
        goto LAB_1094e4c24;
      }
      goto LAB_1094e4c78;
    }
    iVar2 = *(int *)CONCAT44(uStack_90._4_4_,(int)uStack_90);
LAB_1094e4c68:
    if (iVar2 == 0x7466656c) {
      uVar15 = 1;
      goto LAB_1094e4cf4;
    }
LAB_1094e4c78:
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (apuStack_c0,&UNK_10f56ff07,&uStack_90);
    ppuVar1 = (undefined1 **)apuStack_c0[0];
    if (-1 < cStack_a9) {
      ppuVar1 = apuStack_c0;
    }
    FUN_10937e740(&plStack_68,ppuVar1);
    FUN_109388c6c(1,&UNK_10f56fe55,&UNK_10f56feea,0x4f,&plStack_68);
    if ((long)plStack_58 < 0) {
      __ZdlPv(plStack_68);
    }
    if (cStack_a9 < '\0') {
      __ZdlPv(apuStack_c0[0]);
    }
    uVar14 = 0;
  }
  else {
    iVar2 = (int)uStack_90;
    if (cStack_79 == '\x04') goto LAB_1094e4c68;
    if (cStack_79 != '\x05') goto LAB_1094e4c78;
    puVar10 = (uint5 *)&uStack_90;
LAB_1094e4c24:
    uVar11 = ((ulong)*puVar10 & 0xff00ff00ff00ff00) >> 8 | ((ulong)*puVar10 & 0xff00ff00ff00ff) << 8
    ;
    uVar13 = uVar11 & 0xffff0000ffff;
    uVar11 = uVar13 >> 0x10 | ((uVar11 & 0xffff0000ffff0000) >> 0x10 | uVar13 << 0x10) << 0x20;
    uVar9 = (uint)(0x7269676874000000 < uVar11);
    if (uVar11 < 0x7269676874000000) {
      uVar9 = 0xffffffff;
    }
    if (uVar9 != 0) goto LAB_1094e4c78;
    uVar15 = 2;
LAB_1094e4cf4:
    puVar5 = (undefined8 *)0x10;
    __Znwm();
    *puVar5 = &PTR_DAT_110af7f40;
    *(undefined4 *)(puVar5 + 1) = uVar15;
    puVar8 = *(undefined8 **)(param_1 + 0x18);
    if (puVar8 < *(undefined8 **)(param_1 + 0x20)) {
      *puVar8 = puVar5;
      puVar6 = (undefined8 *)0x20;
      __Znwm();
      *puVar6 = &PTR_FUN_110af7ee0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = puVar5;
      puVar8[1] = puVar6;
      puVar8 = puVar8 + 2;
      *(undefined8 **)(param_1 + 0x18) = puVar8;
    }
    else {
      plVar7 = (long *)(param_1 + 0x10);
      lVar16 = (long)puVar8 - *plVar7;
      uVar11 = (lVar16 >> 4) + 1;
      if (uVar11 >> 0x3c != 0) {
        FUN_1094dd8d0();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1094e4e44);
        (*pcVar3)();
      }
      uVar12 = (long)*(undefined8 **)(param_1 + 0x20) - *plVar7;
      uVar13 = (long)uVar12 >> 3;
      if (uVar13 <= uVar11) {
        uVar13 = uVar11;
      }
      if (0x7fffffffffffffef < uVar12) {
        uVar13 = 0xfffffffffffffff;
      }
      plStack_48 = plVar7;
      if (uVar13 == 0) {
        plStack_68 = (long *)0x0;
      }
      else {
        FUN_1094dd8e4();
        plStack_68 = plVar7;
      }
      puVar6 = (undefined8 *)((long)plStack_68 + lVar16);
      plVar7 = plStack_68 + uVar13 * 2;
      *puVar6 = puVar5;
      puVar8 = (undefined8 *)0x20;
      plStack_60 = puVar6;
      plStack_58 = puVar6;
      plStack_50 = plVar7;
      __Znwm();
      *puVar8 = &PTR_FUN_110af7ee0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = puVar5;
      puVar6[1] = puVar8;
      puVar8 = puVar6 + 2;
      lVar16 = (long)puVar6 - (*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10));
      _memcpy(lVar16);
      plStack_68 = *(long **)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar16;
      *(undefined8 **)(param_1 + 0x18) = puVar8;
      plStack_50 = *(long **)(param_1 + 0x20);
      *(long **)(param_1 + 0x20) = plVar7;
      plStack_60 = plStack_68;
      plStack_58 = plStack_68;
      FUN_1094e4f74(&plStack_68);
    }
    *(undefined8 **)(param_1 + 0x18) = puVar8;
    uVar14 = 1;
  }
  if (cStack_79 < '\0') {
    __ZdlPv(CONCAT44(uStack_90._4_4_,(int)uStack_90));
  }
LAB_1094e4e18:
  FUN_109380f8c(auStack_78);
  return uVar14;
}



/* Entry: 1094e4f0c; end: 1094e4f0f;  */

void FUN_1094e4f0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1094e4f10; end: 1094e4f23;  */

void FUN_1094e4f10(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094e4f24; end: 1094e4f33;  */

void FUN_1094e4f24(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1094e4f34; end: 1094e4f6b;  */

undefined8 FUN_1094e4f34(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110af7f20);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1094e4f6c; end: 1094e4f73;  */

void FUN_1094e4f6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094e4f74; end: 1094e4fbf;  */

long * FUN_1094e4f74(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    func_0x0001094dd804();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1094e4fc0; end: 1094e4fff;  */

void FUN_1094e4fc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094e5000; end: 1094e518b;  */

undefined4 FUN_1094e5000(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  uVar4 = *param_2;
  func_0x000107c31940(auStack_58,&UNK_10f56ff4f);
  fVar5 = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x2c);
  FUN_1094a73d0(uVar4,auStack_58);
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  uVar4 = *param_2;
  func_0x000107c31940(auStack_58,&UNK_10f56ff5c);
  func_0x0001094a6db0(uVar4,auStack_58,(float *)(param_1 + 0x28));
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  *(float *)(param_1 + 0x2c) = fVar5 - *(float *)(param_1 + 0x28);
  uVar4 = *param_2;
  func_0x000107c31940(auStack_70,PTR_s_stage_1132dfa28);
  uStack_88 = 0;
  uStack_80 = 0;
  lStack_78 = 0;
  FUN_1094a6b30(auStack_58,uVar4,auStack_70,&uStack_88);
  uVar2 = SUB84(auStack_58,0);
  FUN_1094eb6d8();
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  if (lStack_78 < 0) {
    __ZdlPv(uStack_88);
  }
  if (cStack_59 < '\0') {
    __ZdlPv(auStack_70[0]);
  }
  lVar3 = param_1;
  FUN_1094e4ad0(param_1,*param_2);
  uVar2 = 0;
  if (0.0 < *(float *)(param_1 + 0x2c)) {
    uVar2 = (undefined4)lVar3;
  }
  uVar1 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 1094e518c; end: 1094e5217;  */

undefined8 * FUN_1094e518c(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 2;
  *param_1 = &PTR_FUN_110af7e20;
  FUN_1094dd9b4(&puStack_28);
  return param_1;
}



/* Entry: 1094e5218; end: 1094e55d3;  */

/* WARNING: Removing unreachable block (ram,0x0001094e5420) */
/* WARNING: Removing unreachable block (ram,0x0001094e5398) */
/* WARNING: Removing unreachable block (ram,0x0001094e5330) */
/* WARNING: Removing unreachable block (ram,0x0001094e52c8) */
/* WARNING: Removing unreachable block (ram,0x0001094e5260) */
/* WARNING: Removing unreachable block (ram,0x0001094e5294) */
/* WARNING: Removing unreachable block (ram,0x0001094e52fc) */
/* WARNING: Removing unreachable block (ram,0x0001094e5364) */
/* WARNING: Removing unreachable block (ram,0x0001094e53cc) */
/* WARNING: Removing unreachable block (ram,0x0001094e5494) */

uint FUN_1094e5218(long param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  undefined4 uVar10;
  long lVar11;
  uint uVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 auStack_90 [2];
  char cStack_79;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined1 auStack_48 [24];
  
  uVar13 = *param_2;
  func_0x000107c31940(auStack_48,&UNK_10f56fdda);
  func_0x0001094a6db0(uVar13,auStack_48,param_1 + 0x28);
  uVar13 = *param_2;
  func_0x000107c31940(auStack_48,&UNK_10f56fde1);
  func_0x0001094a6db0(uVar13,auStack_48,param_1 + 0x2c);
  uVar13 = *param_2;
  func_0x000107c31940(auStack_48,&UNK_10f56ff68);
  func_0x0001094a6db0(uVar13,auStack_48,param_1 + 0x30);
  uVar13 = *param_2;
  func_0x000107c31940(auStack_48,&UNK_10f56ff8c);
  FUN_1094e55d4(uVar13,auStack_48,param_1 + 0x40);
  uVar13 = *param_2;
  func_0x000107c31940(auStack_48,&UNK_10f56ffa9);
  func_0x0001094a6db0(uVar13,auStack_48,param_1 + 0x34);
  uVar13 = *param_2;
  func_0x000107c31940(auStack_48,&UNK_10f56ffd2);
  FUN_1094e55d4(uVar13,auStack_48,param_1 + 0x48);
  uVar13 = *param_2;
  func_0x000107c31940(auStack_48,&UNK_10f570005);
  func_0x0001094a6db0(uVar13,auStack_48,param_1 + 0x38);
  uVar13 = *param_2;
  func_0x000107c31940(auStack_48,&UNK_10f570036);
  FUN_1094e55d4(uVar13,auStack_48,param_1 + 0x50);
  uVar13 = *param_2;
  func_0x000107c31940(auStack_60,PTR_s_stage_1132dfa28);
  func_0x000107c31940(auStack_78,PTR_DAT_1132dfa30);
  FUN_1094a6b30(auStack_48,uVar13,auStack_60,auStack_78);
  uVar10 = SUB84(auStack_48,0);
  FUN_1094eb6d8();
  *(undefined4 *)(param_1 + 0xc) = uVar10;
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  uVar13 = *param_2;
  func_0x000107c31940(auStack_60,PTR_s_component_1132dfa38);
  func_0x000107c31940(auStack_90,PTR_DAT_1132dfa40);
  FUN_1094a6b30(auStack_48,uVar13,auStack_60,auStack_90);
  uVar10 = SUB84(auStack_48,0);
  FUN_1094eb89c();
  *(undefined4 *)(param_1 + 8) = uVar10;
  if (cStack_79 < '\0') {
    __ZdlPv(auStack_90[0]);
  }
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  lVar11 = param_1;
  FUN_1094e4ad0(param_1,*param_2);
  fVar14 = *(float *)(param_1 + 0x34);
  fVar2 = *(float *)(param_1 + 0x38);
  bVar8 = false;
  bVar9 = true;
  if (*(ulong *)(param_1 + 0x40) != 0) {
    bVar8 = false;
    bVar9 = true;
    if (!NAN(fVar14) && !NAN(fVar2)) {
      bVar8 = fVar14 == fVar2;
      bVar9 = fVar2 <= fVar14;
    }
  }
  iVar3 = -(uint)(0.0 < (float)*(undefined8 *)(param_1 + 0x28));
  iVar5 = -(uint)(0.0 < (float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20));
  iVar6 = -(uint)(0.0 < (float)*(undefined8 *)(param_1 + 0x30));
  iVar7 = -(uint)(0.0 < (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20));
  auVar1[1] = ~(byte)((uint)iVar3 >> 8);
  auVar1[0] = ~(byte)iVar3;
  auVar1[2] = ~(byte)((uint)iVar3 >> 0x10);
  auVar1[3] = ~(byte)((uint)iVar3 >> 0x18);
  auVar1[4] = ~(byte)iVar5;
  auVar1[5] = ~(byte)((uint)iVar5 >> 8);
  auVar1[6] = ~(byte)((uint)iVar5 >> 0x10);
  auVar1[7] = ~(byte)((uint)iVar5 >> 0x18);
  auVar1[8] = ~(byte)iVar6;
  auVar1[9] = ~(byte)((uint)iVar6 >> 8);
  auVar1[10] = ~(byte)((uint)iVar6 >> 0x10);
  auVar1[0xb] = ~(byte)((uint)iVar6 >> 0x18);
  auVar1[0xc] = ~(byte)iVar7;
  auVar1[0xd] = ~(byte)((uint)iVar7 >> 8);
  auVar1[0xe] = ~(byte)((uint)iVar7 >> 0x10);
  auVar1[0xf] = ~(byte)((uint)iVar7 >> 0x18);
  uVar4 = NEON_umaxv(auVar1,4);
  uVar12 = 0;
  if (*(int *)(param_1 + 0xc) != 0 && *(long *)(param_1 + 0x50) - 1U < *(ulong *)(param_1 + 0x40)) {
    uVar12 = (uint)(*(long *)(param_1 + 0x48) != 0 && *(int *)(param_1 + 8) != 0);
  }
  return (uint)(0.0 < fVar2) & (uVar4 ^ 0xffffffff) & (!bVar9 || bVar8) & uVar12 & (uint)lVar11;
}



/* Entry: 1094e55d4; end: 1094e5753;  */

void FUN_1094e55d4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  char **ppcVar3;
  char *pcStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  char *pcStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  pcStack_60 = (char *)*param_1;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0x8000000000000000;
  cVar1 = *pcStack_60;
  pcStack_40 = pcStack_60;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(pcStack_60 + 8);
    FUN_1093793a4();
    pcStack_60 = (char *)*param_1;
    cVar1 = *pcStack_60;
    uStack_38 = uVar2;
LAB_1094e564c:
    lStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0x8000000000000000;
    if (cVar1 == '\x01') {
      lStack_58 = *(long *)(pcStack_60 + 8) + 8;
      goto LAB_1094e5690;
    }
    if (cVar1 != '\x02') {
      uStack_48 = 1;
      goto LAB_1094e5690;
    }
    uStack_50 = *(undefined8 *)(*(long *)(pcStack_60 + 8) + 8);
  }
  else {
    if (cVar1 != '\x02') {
      uStack_28 = 1;
      goto LAB_1094e564c;
    }
    uStack_50 = *(undefined8 *)(*(long *)(pcStack_60 + 8) + 8);
    uStack_30 = uStack_50;
  }
  uStack_48 = 0x8000000000000000;
  lStack_58 = 0;
LAB_1094e5690:
  ppcVar3 = &pcStack_40;
  FUN_109379420(ppcVar3,&pcStack_60);
  if (((ulong)ppcVar3 & 1) == 0) {
    FUN_10937b950(&pcStack_40);
    FUN_1094e5754();
    *param_3 = pcStack_60;
  }
  return;
}



/* Entry: 1094e5754; end: 1094e5887;  */

void FUN_1094e5754(byte *param_1,ulong *param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  bVar1 = *param_1;
  if (bVar1 < 6) {
    if (bVar1 == 4) {
      uVar4 = (ulong)param_1[8];
      goto LAB_1094e5818;
    }
    if (bVar1 != 5) {
LAB_1094e57a0:
      uVar3 = 0x20;
      ___cxa_allocate_exception(0x20);
      FUN_10937bcec(param_1);
      func_0x000107c31940(auStack_60,param_1);
      FUN_10928a5e0(auStack_48,&UNK_10f567436,auStack_60);
      FUN_10937bbbc(uVar3,0x12e,auStack_48);
      ___cxa_throw(uVar3,&PTR_DAT_110af4510,FUN_10937bd14);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1094e5808);
      (*pcVar2)();
    }
  }
  else {
    if (bVar1 == 7) {
      uVar4 = (ulong)*(double *)(param_1 + 8);
      goto LAB_1094e5818;
    }
    if (bVar1 != 6) goto LAB_1094e57a0;
  }
  uVar4 = *(ulong *)(param_1 + 8);
LAB_1094e5818:
  *param_2 = uVar4;
  return;
}



/* Entry: 1094e5888; end: 1094e5b3b;  */

/* WARNING: Removing unreachable block (ram,0x0001094e59c0) */
/* WARNING: Removing unreachable block (ram,0x0001094e5938) */
/* WARNING: Removing unreachable block (ram,0x0001094e58d0) */
/* WARNING: Removing unreachable block (ram,0x0001094e5904) */
/* WARNING: Removing unreachable block (ram,0x0001094e596c) */
/* WARNING: Removing unreachable block (ram,0x0001094e5a34) */

uint FUN_1094e5888(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ushort uVar5;
  undefined8 auStack_90 [2];
  char cStack_79;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined1 auStack_48 [24];
  
  uVar4 = *param_2;
  func_0x000107c31940(auStack_48,&UNK_10f570051);
  func_0x0001094a6db0(uVar4,auStack_48,param_1 + 0x28);
  uVar4 = *param_2;
  func_0x000107c31940(auStack_48,"beta");
  func_0x0001094a6db0(uVar4,auStack_48,param_1 + 0x30);
  uVar4 = *param_2;
  func_0x000107c31940(auStack_48,&UNK_10f57005c);
  func_0x0001094a6db0(uVar4,auStack_48,param_1 + 0x2c);
  uVar4 = *param_2;
  func_0x000107c31940(auStack_48,&UNK_10f570065);
  func_0x0001094a6db0(uVar4,auStack_48,param_1 + 0x34);
  uVar4 = *param_2;
  func_0x000107c31940(auStack_60,PTR_s_stage_1132dfa28);
  func_0x000107c31940(auStack_78,PTR_DAT_1132dfa30);
  FUN_1094a6b30(auStack_48,uVar4,auStack_60,auStack_78);
  uVar1 = SUB84(auStack_48,0);
  FUN_1094eb6d8();
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  uVar4 = *param_2;
  func_0x000107c31940(auStack_60,PTR_s_component_1132dfa38);
  func_0x000107c31940(auStack_90,PTR_DAT_1132dfa40);
  FUN_1094a6b30(auStack_48,uVar4,auStack_60,auStack_90);
  uVar1 = SUB84(auStack_48,0);
  FUN_1094eb89c();
  *(undefined4 *)(param_1 + 8) = uVar1;
  if (cStack_79 < '\0') {
    __ZdlPv(auStack_90[0]);
  }
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  lVar3 = param_1;
  FUN_1094e4ad0(param_1,*param_2);
  uVar5 = NEON_uminv(CONCAT26(-(ushort)(0.0 <= (float)((ulong)*(undefined8 *)(param_1 + 0x30) >>
                                                      0x20)),
                              CONCAT24(-(ushort)(0.0 < (float)*(undefined8 *)(param_1 + 0x30)),
                                       CONCAT22(-(ushort)(0.0 < (float)((ulong)*(undefined8 *)
                                                                                (param_1 + 0x28) >>
                                                                       0x20)),
                                                -(ushort)(0.0 < (float)*(undefined8 *)
                                                                        (param_1 + 0x28))))),2);
  uVar2 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar2 = (uint)lVar3;
  }
  return (uint)uVar5 & (uint)(*(int *)(param_1 + 8) != 0) & uVar2;
}



/* Entry: 1094e5b3c; end: 1094e5bc7;  */

undefined8 * FUN_1094e5b3c(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 2;
  *param_1 = &PTR_FUN_110af7e20;
  FUN_1094dd9b4(&puStack_28);
  return param_1;
}



/* Entry: 1094e5bc8; end: 1094e5e8f;  */

/* WARNING: Removing unreachable block (ram,0x0001094e5ccc) */
/* WARNING: Removing unreachable block (ram,0x0001094e5c44) */
/* WARNING: Removing unreachable block (ram,0x0001094e5c10) */
/* WARNING: Removing unreachable block (ram,0x0001094e5c78) */
/* WARNING: Removing unreachable block (ram,0x0001094e5d40) */

bool FUN_1094e5bc8(long param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  long lVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 auStack_90 [2];
  char cStack_79;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined1 auStack_48 [24];
  
  uVar10 = *param_2;
  func_0x000107c31940(auStack_48,&UNK_10f570051);
  func_0x0001094a6ea4(uVar10,auStack_48,param_1 + 0x28);
  uVar10 = *param_2;
  func_0x000107c31940(auStack_48,"beta");
  func_0x0001094a6ea4(uVar10,auStack_48,param_1 + 0x58);
  uVar10 = *param_2;
  func_0x000107c31940(auStack_48,&UNK_10f57005c);
  func_0x0001094a6ea4(uVar10,auStack_48,param_1 + 0x40);
  uVar10 = *param_2;
  func_0x000107c31940(auStack_60,PTR_s_stage_1132dfa28);
  func_0x000107c31940(auStack_78,PTR_DAT_1132dfa30);
  FUN_1094a6b30(auStack_48,uVar10,auStack_60,auStack_78);
  uVar5 = SUB84(auStack_48,0);
  FUN_1094eb6d8();
  *(undefined4 *)(param_1 + 0xc) = uVar5;
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  uVar10 = *param_2;
  func_0x000107c31940(auStack_60,PTR_s_component_1132dfa38);
  func_0x000107c31940(auStack_90,PTR_DAT_1132dfa40);
  FUN_1094a6b30(auStack_48,uVar10,auStack_60,auStack_90);
  uVar5 = SUB84(auStack_48,0);
  FUN_1094eb89c();
  *(undefined4 *)(param_1 + 8) = uVar5;
  if (cStack_79 < '\0') {
    __ZdlPv(auStack_90[0]);
  }
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  lVar6 = param_1;
  FUN_1094e4ad0(param_1,*param_2);
  bVar7 = false;
  if ((int)lVar6 != 0) {
    lVar6 = *(long *)(param_1 + 0x28);
    if (lVar6 != *(long *)(param_1 + 0x30)) {
      lVar9 = *(long *)(param_1 + 0x30) - lVar6;
      if ((lVar9 == *(long *)(param_1 + 0x60) - *(long *)(param_1 + 0x58)) &&
         (lVar9 == *(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40))) {
        uVar8 = 0;
        do {
          fVar11 = *(float *)(lVar6 + uVar8 * 4);
          bVar2 = false;
          bVar3 = true;
          bVar4 = false;
          if (0.0 < *(float *)(*(long *)(param_1 + 0x58) + uVar8 * 4)) {
            bVar2 = false;
            bVar3 = false;
            bVar4 = true;
            if (!NAN(fVar11)) {
              bVar2 = fVar11 < 0.0;
              bVar3 = fVar11 == 0.0;
              bVar4 = false;
            }
          }
          bVar1 = 0.0 < *(float *)(*(long *)(param_1 + 0x40) + uVar8 * 4);
          bVar7 = (!bVar3 && bVar2 == bVar4) && bVar1;
          uVar8 = uVar8 + 1;
        } while (((!bVar3 && bVar2 == bVar4) && bVar1) && uVar8 < (ulong)(lVar9 >> 2));
      }
    }
  }
  bVar2 = false;
  if (*(int *)(param_1 + 8) != 0 && *(int *)(param_1 + 0xc) != 0) {
    bVar2 = bVar7;
  }
  return bVar2;
}



/* Entry: 1094e5e90; end: 1094e5f7b;  */

undefined8 * FUN_1094e5e90(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  if (param_1[0xb] != 0) {
    param_1[0xc] = param_1[0xb];
    __ZdlPv();
  }
  if (param_1[8] != 0) {
    param_1[9] = param_1[8];
    __ZdlPv();
  }
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  puStack_28 = param_1 + 2;
  *param_1 = &PTR_FUN_110af7e20;
  FUN_1094dd9b4(&puStack_28);
  return param_1;
}



/* Entry: 1094e5f7c; end: 1094e6157;  */

undefined4 FUN_1094e5f7c(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  uVar4 = *param_2;
  func_0x000107c31940(auStack_48,&UNK_10f570078);
  func_0x0001094a6db0(uVar4,auStack_48,param_1 + 0x28);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  uVar4 = *param_2;
  func_0x000107c31940(auStack_60,PTR_s_stage_1132dfa28);
  uStack_78 = 0;
  uStack_70 = 0;
  lStack_68 = 0;
  FUN_1094a6b30(auStack_48,uVar4,auStack_60,&uStack_78);
  uVar2 = SUB84(auStack_48,0);
  FUN_1094eb6d8();
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  if (lStack_68 < 0) {
    __ZdlPv(uStack_78);
  }
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  uVar4 = *param_2;
  func_0x000107c31940(auStack_48,&DAT_10f570088);
  func_0x0001094b4944(uVar4,auStack_48,param_1 + 0x48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  uVar4 = *param_2;
  func_0x000107c31940(auStack_48,&UNK_10f570098);
  func_0x0001094b4944(uVar4,auStack_48,param_1 + 0x30);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  uVar4 = *param_2;
  func_0x000107c31940(auStack_48,&UNK_10f5700a9);
  func_0x0001094b4850(uVar4,auStack_48,param_1 + 0x2c);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  lVar3 = param_1;
  FUN_1094e4ad0(param_1,*param_2);
  uVar2 = 0;
  if (0.0 < *(float *)(param_1 + 0x28)) {
    uVar2 = (undefined4)lVar3;
  }
  uVar1 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 1094e6158; end: 1094e6223;  */

undefined8 * FUN_1094e6158(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 9;
  func_0x000104c607c8(&puStack_28);
  puStack_28 = param_1 + 6;
  func_0x000104c607c8(&puStack_28);
  puStack_28 = param_1 + 2;
  *param_1 = &PTR_FUN_110af7e20;
  FUN_1094dd9b4(&puStack_28);
  return param_1;
}



/* Entry: 1094e6224; end: 1094e640b;  */

undefined4 FUN_1094e6224(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long alStack_b0 [2];
  char cStack_99;
  long *aplStack_98 [2];
  char cStack_81;
  long lStack_80;
  long lStack_78;
  char cStack_69;
  undefined1 auStack_68 [23];
  undefined1 uStack_51;
  
  uVar2 = *param_2;
  func_0x000107c31940(&lStack_80,&UNK_10f5700c0);
  FUN_1094a68cc(auStack_68,uVar2,&lStack_80);
  if (cStack_69 < '\0') {
    __ZdlPv(lStack_80);
  }
  FUN_1094a72dc(&lStack_80,auStack_68);
  for (; lStack_80 != lStack_78; lStack_80 = lStack_80 + 0x18) {
    uVar3 = 0;
    FUN_1094a73d0(auStack_68,lStack_80);
    lVar1 = param_1 + 0x28;
    alStack_b0[0] = lStack_80;
    FUN_1094e6524(lVar1,lStack_80,&UNK_10dd5b8f9,alStack_b0,&uStack_51);
    *(undefined4 *)(lVar1 + 0x28) = uVar3;
  }
  uVar2 = *param_2;
  func_0x000107c31940(alStack_b0,PTR_s_stage_1132dfa28);
  uStack_c8 = 0;
  uStack_c0 = 0;
  lStack_b8 = 0;
  FUN_1094a6b30(aplStack_98,uVar2,alStack_b0,&uStack_c8);
  uVar3 = SUB84(aplStack_98,0);
  FUN_1094eb6d8();
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  if (cStack_81 < '\0') {
    __ZdlPv(aplStack_98[0]);
  }
  if (lStack_b8 < 0) {
    __ZdlPv(uStack_c8);
  }
  if (cStack_99 < '\0') {
    __ZdlPv(alStack_b0[0]);
  }
  lVar1 = param_1;
  FUN_1094e4ad0(param_1,*param_2);
  uVar3 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar3 = (undefined4)lVar1;
  }
  aplStack_98[0] = &lStack_80;
  func_0x000104c607c8(aplStack_98);
  FUN_109380f8c(auStack_68);
  return uVar3;
}



/* Entry: 1094e640c; end: 1094e6523;  */

undefined8 * FUN_1094e640c(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  func_0x0001094e64a8(param_1 + 5);
  puStack_28 = param_1 + 2;
  *param_1 = &PTR_FUN_110af7e20;
  FUN_1094dd9b4(&puStack_28);
  return param_1;
}



/* Entry: 1094e6524; end: 1094e677b;  */

undefined1  [16]
FUN_1094e6524(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x27;
  ulong uVar9;
  undefined1 auVar10 [16];
  long *aplStack_78 [3];
  
  plVar6 = param_1;
  func_0x000107c31944();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x27 = (long *)(uVar9 & (ulong)plVar6);
    }
    else {
      unaff_x27 = plVar6;
      if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x27 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x27 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar6) {
          plVar3 = param_1;
          func_0x000104c4fbc4(param_1,plVar7 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_1094e672c;
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar9);
          }
          else if (plVar8 <= plVar3) {
            uVar5 = 0;
            if (plVar8 != (long *)0x0) {
              uVar5 = (ulong)plVar3 / (ulong)plVar8;
            }
            plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar8);
          }
          if (plVar3 != unaff_x27) break;
        }
      }
    }
  }
  FUN_1094e677c(aplStack_78,param_1,plVar6,param_3,param_4,param_5);
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar9 = 1;
    if ((long *)0x2 < plVar8) {
      uVar9 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    FUN_1094caf24(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x27 = plVar6;
      if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x27 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x27 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
    *(long **)(lVar4 + (long)unaff_x27 * 8) = plVar6;
    if (*aplStack_78[0] != 0) {
      plVar6 = *(long **)(*aplStack_78[0] + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        plVar6 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
  plVar7 = aplStack_78[0];
LAB_1094e672c:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 1094e677c; end: 1094e6827;  */

void FUN_1094e677c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  param_1[1] = param_2;
  *param_1 = puVar1;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  param_5 = (undefined8 *)*param_5;
  if (*(char *)((long)param_5 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1 + 2,*param_5,param_5[1]);
  }
  else {
    uVar3 = param_5[1];
    uVar2 = *param_5;
    puVar1[4] = param_5[2];
    puVar1[3] = uVar3;
    puVar1[2] = uVar2;
  }
  *(undefined4 *)(puVar1 + 5) = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1094e6828; end: 1094e6fb3;  */

/* WARNING: Removing unreachable block (ram,0x0001094e6d84) */
/* WARNING: Removing unreachable block (ram,0x0001094e6dfc) */

uint FUN_1094e6828(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  uint uVar15;
  long *plVar16;
  long *unaff_x28;
  ushort uVar17;
  float fVar18;
  undefined8 auStack_120 [2];
  char cStack_109;
  undefined8 auStack_108 [2];
  char cStack_f1;
  long **pplStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long *plStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  undefined1 auStack_90 [16];
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  
  uVar12 = *param_2;
  func_0x000107c31940(&pplStack_f0,&UNK_10f4fa91b);
  FUN_1094a9268(uVar12,&pplStack_f0,param_1 + 0x28);
  if (lStack_e0 < 0) {
    __ZdlPv(pplStack_f0);
  }
  uVar12 = *param_2;
  func_0x000107c31940(&pplStack_f0,&UNK_10f5700d3);
  FUN_1094a9268(uVar12,&pplStack_f0,param_1 + 0x2c);
  if (lStack_e0 < 0) {
    __ZdlPv(pplStack_f0);
  }
  uVar12 = *param_2;
  func_0x000107c31940(&pplStack_f0,&UNK_10f5700e8);
  FUN_1094a9268(uVar12,&pplStack_f0,param_1 + 0x30);
  if (lStack_e0 < 0) {
    __ZdlPv(pplStack_f0);
  }
  uVar12 = *param_2;
  func_0x000107c31940(&pplStack_f0,&UNK_10f570108);
  func_0x0001094a6db0(uVar12,&pplStack_f0,param_1 + 0x38);
  if (lStack_e0 < 0) {
    __ZdlPv(pplStack_f0);
  }
  uVar12 = *param_2;
  func_0x000107c31940(&pplStack_f0,&UNK_10f570120);
  func_0x0001094a6db0(uVar12,&pplStack_f0,param_1 + 0x34);
  if (lStack_e0 < 0) {
    __ZdlPv(pplStack_f0);
  }
  uVar12 = *param_2;
  func_0x000107c31940(&pplStack_f0,&UNK_10f570133);
  func_0x0001094a6db0(uVar12,&pplStack_f0,param_1 + 0x3c);
  if (lStack_e0 < 0) {
    __ZdlPv(pplStack_f0);
  }
  uVar12 = *param_2;
  func_0x000107c31940(&pplStack_f0,&UNK_10f57014d);
  func_0x0001094a6db0(uVar12,&pplStack_f0,param_1 + 0x40);
  if (lStack_e0 < 0) {
    __ZdlPv(pplStack_f0);
  }
  uVar12 = *param_2;
  func_0x000107c31940(&pplStack_f0,&UNK_10f57016f);
  FUN_1094a68cc(auStack_90,uVar12,&pplStack_f0);
  if (lStack_e0 < 0) {
    __ZdlPv(pplStack_f0);
  }
  FUN_1094a72dc(&plStack_a8,auStack_90);
  if (plStack_a8 == plStack_a0) {
    uVar15 = 1;
  }
  else {
    plVar1 = (long *)(param_1 + 0x48);
    plVar2 = (long *)(param_1 + 0x58);
    uVar15 = 1;
    plVar13 = plStack_a8;
    do {
      plStack_c0 = (long *)0x0;
      lStack_b8 = 0;
      uStack_b0 = 0;
      func_0x0001094b4944(auStack_90,plVar13,&plStack_c0);
      lVar7 = lStack_b8 - (long)plStack_c0;
      bVar5 = lVar7 == 0x30;
      if (*(char *)((long)plVar13 + 0x17) < '\0') {
        func_0x000107c3192c(&pplStack_f0,*plVar13,plVar13[1]);
        lVar7 = lStack_b8 - (long)plStack_c0;
      }
      else {
        lStack_e8 = plVar13[1];
        pplStack_f0 = (long **)*plVar13;
        lStack_e0 = plVar13[2];
      }
      lStack_d8 = 0;
      lStack_d0 = 0;
      lStack_c8 = 0;
      FUN_1094a9128(&lStack_d8,plStack_c0,lStack_b8,(lVar7 >> 3) * -0x5555555555555555);
      plVar10 = plVar1;
      func_0x000107c31944(plVar1,&pplStack_f0);
      plVar16 = *(long **)(param_1 + 0x50);
      if (plVar16 != (long *)0x0) {
        uVar14 = (long)plVar16 - 1;
        if (((ulong)plVar16 & uVar14) == 0) {
          unaff_x28 = (long *)(uVar14 & (ulong)plVar10);
        }
        else {
          unaff_x28 = plVar10;
          if (plVar16 <= plVar10) {
            uVar11 = 0;
            if (plVar16 != (long *)0x0) {
              uVar11 = (ulong)plVar10 / (ulong)plVar16;
            }
            unaff_x28 = (long *)((long)plVar10 - uVar11 * (long)plVar16);
          }
        }
        plVar8 = *(long **)(*plVar1 + (long)unaff_x28 * 8);
        if (plVar8 != (long *)0x0) {
          for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
            plVar9 = (long *)plVar8[1];
            if (plVar9 == plVar10) {
              plVar9 = plVar1;
              func_0x000104c4fbc4(plVar1,plVar8 + 2,&pplStack_f0);
              if (((ulong)plVar9 & 1) != 0) goto LAB_1094e6cb8;
            }
            else {
              if (((ulong)plVar16 & uVar14) == 0) {
                plVar9 = (long *)((ulong)plVar9 & uVar14);
              }
              else if (plVar16 <= plVar9) {
                uVar11 = 0;
                if (plVar16 != (long *)0x0) {
                  uVar11 = (ulong)plVar9 / (ulong)plVar16;
                }
                plVar9 = (long *)((long)plVar9 - uVar11 * (long)plVar16);
              }
              if (plVar9 != unaff_x28) break;
            }
          }
        }
      }
      plVar8 = (long *)0x40;
      __Znwm();
      uStack_70 = 1;
      *plVar8 = 0;
      plVar8[1] = (long)plVar10;
      plVar8[3] = lStack_e8;
      plVar8[2] = (long)pplStack_f0;
      plVar8[4] = lStack_e0;
      pplStack_f0 = (long **)0x0;
      lStack_e8 = 0;
      lStack_e0 = 0;
      plVar8[6] = lStack_d0;
      plVar8[5] = lStack_d8;
      plVar8[7] = lStack_c8;
      lStack_d0 = 0;
      lStack_c8 = 0;
      lStack_d8 = 0;
      fVar18 = (float)(*(long *)(param_1 + 0x60) + 1);
      plStack_78 = plVar1;
      if ((plVar16 == (long *)0x0) || (*(float *)(param_1 + 0x68) * (float)plVar16 < fVar18)) {
        uVar14 = 1;
        if ((long *)0x2 < plVar16) {
          uVar14 = (ulong)(((ulong)plVar16 & (long)plVar16 - 1U) != 0);
        }
        uVar14 = uVar14 | (long)plVar16 << 1;
        uVar11 = (ulong)(fVar18 / *(float *)(param_1 + 0x68));
        if (uVar14 <= uVar11) {
          uVar14 = uVar11;
        }
        plStack_80 = plVar8;
        func_0x000107c2ac84(plVar1,uVar14);
        plVar16 = *(long **)(param_1 + 0x50);
        if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
          unaff_x28 = (long *)((long)plVar16 - 1U & (ulong)plVar10);
        }
        else {
          unaff_x28 = plVar10;
          if (plVar16 <= plVar10) {
            uVar14 = 0;
            if (plVar16 != (long *)0x0) {
              uVar14 = (ulong)plVar10 / (ulong)plVar16;
            }
            unaff_x28 = (long *)((long)plVar10 - uVar14 * (long)plVar16);
          }
        }
      }
      lVar7 = *plVar1;
      plVar10 = *(long **)(lVar7 + (long)unaff_x28 * 8);
      if (plVar10 == (long *)0x0) {
        *plVar8 = *plVar2;
        *plVar2 = (long)plVar8;
        *(long **)(lVar7 + (long)unaff_x28 * 8) = plVar2;
        if (*plVar8 != 0) {
          plVar10 = *(long **)(*plVar8 + 8);
          if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
            plVar10 = (long *)((ulong)plVar10 & (long)plVar16 - 1U);
          }
          else if (plVar16 <= plVar10) {
            uVar14 = 0;
            if (plVar16 != (long *)0x0) {
              uVar14 = (ulong)plVar10 / (ulong)plVar16;
            }
            plVar10 = (long *)((long)plVar10 - uVar14 * (long)plVar16);
          }
          plVar10 = (long *)(*plVar1 + (long)plVar10 * 8);
          goto LAB_1094e6ca8;
        }
      }
      else {
        *plVar8 = *plVar10;
LAB_1094e6ca8:
        *plVar10 = (long)plVar8;
      }
      *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 1;
LAB_1094e6cb8:
      plStack_80 = &lStack_d8;
      func_0x000104c607c8(&plStack_80);
      if (lStack_e0 < 0) {
        __ZdlPv(pplStack_f0);
      }
      uVar15 = uVar15 & bVar5;
      pplStack_f0 = &plStack_c0;
      func_0x000104c607c8(&pplStack_f0);
      plVar13 = plVar13 + 3;
    } while (plVar13 != plStack_a0);
  }
  pplStack_f0 = &plStack_a8;
  func_0x000104c607c8(&pplStack_f0);
  uVar12 = *param_2;
  func_0x000107c31940(&plStack_80,PTR_s_stage_1132dfa28);
  func_0x000107c31940(auStack_108,PTR_DAT_1132dfa30);
  FUN_1094a6b30(&pplStack_f0,uVar12,&plStack_80,auStack_108);
  uVar6 = SUB84(&pplStack_f0,0);
  FUN_1094eb6d8();
  *(undefined4 *)(param_1 + 0xc) = uVar6;
  if (lStack_e0 < 0) {
    __ZdlPv(pplStack_f0);
  }
  if (cStack_f1 < '\0') {
    __ZdlPv(auStack_108[0]);
  }
  uVar12 = *param_2;
  func_0x000107c31940(&plStack_80,PTR_s_component_1132dfa38);
  func_0x000107c31940(auStack_120,PTR_DAT_1132dfa40);
  FUN_1094a6b30(&pplStack_f0,uVar12,&plStack_80,auStack_120);
  uVar6 = SUB84(&pplStack_f0,0);
  FUN_1094eb89c();
  *(undefined4 *)(param_1 + 8) = uVar6;
  if (lStack_e0 < 0) {
    __ZdlPv(pplStack_f0);
  }
  if (cStack_109 < '\0') {
    __ZdlPv(auStack_120[0]);
  }
  lVar7 = param_1;
  FUN_1094e4ad0(param_1,*param_2);
  uVar17 = NEON_uminv(CONCAT26(-(ushort)(0.0 < (float)((ulong)*(undefined8 *)(param_1 + 0x3c) >>
                                                      0x20)),
                               CONCAT24(-(ushort)(0.0 < (float)*(undefined8 *)(param_1 + 0x3c)),
                                        CONCAT22(-(ushort)(0.0 <= (float)((ulong)*(undefined8 *)
                                                                                  (param_1 + 0x34)
                                                                         >> 0x20)),
                                                 -(ushort)(0.0 < (float)*(undefined8 *)
                                                                         (param_1 + 0x34))))),2);
  uVar3 = 0;
  if (*(int *)(param_1 + 0xc) != 0 && 1 < *(int *)(param_1 + 0x28)) {
    uVar3 = (uint)uVar17 & (uint)(*(int *)(param_1 + 8) != 0);
  }
  uVar4 = 0;
  if (-1 < (int)(*(uint *)(param_1 + 0x30) | *(uint *)(param_1 + 0x2c)) &&
      (int)*(uint *)(param_1 + 0x30) <= *(int *)(param_1 + 0x28)) {
    uVar4 = uVar15 & (uint)lVar7;
  }
  FUN_109380f8c(auStack_90);
  return uVar3 & uVar4;
}



/* Entry: 1094e6fb4; end: 1094e7097;  */

undefined8 * FUN_1094e6fb4(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 3;
  func_0x000104c607c8(&puStack_28);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1094e7098; end: 1094e72cb;  */

/* WARNING: Removing unreachable block (ram,0x0001094e7168) */
/* WARNING: Removing unreachable block (ram,0x0001094e70e0) */
/* WARNING: Removing unreachable block (ram,0x0001094e7114) */
/* WARNING: Removing unreachable block (ram,0x0001094e71dc) */

undefined4 FUN_1094e7098(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 auStack_90 [2];
  char cStack_79;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined1 auStack_48 [24];
  
  uVar4 = *param_2;
  func_0x000107c31940(auStack_48,&UNK_10f57017f);
  func_0x0001094a6db0(uVar4,auStack_48,param_1 + 0x28);
  uVar4 = *param_2;
  func_0x000107c31940(auStack_48,&UNK_10f570197);
  FUN_1094a9268(uVar4,auStack_48,param_1 + 0x2c);
  uVar4 = *param_2;
  func_0x000107c31940(auStack_60,PTR_s_stage_1132dfa28);
  func_0x000107c31940(auStack_78,PTR_DAT_1132dfa30);
  FUN_1094a6b30(auStack_48,uVar4,auStack_60,auStack_78);
  uVar2 = SUB84(auStack_48,0);
  FUN_1094eb6d8();
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  uVar4 = *param_2;
  func_0x000107c31940(auStack_60,PTR_s_component_1132dfa38);
  func_0x000107c31940(auStack_90,PTR_DAT_1132dfa40);
  FUN_1094a6b30(auStack_48,uVar4,auStack_60,auStack_90);
  uVar2 = SUB84(auStack_48,0);
  FUN_1094eb89c();
  *(undefined4 *)(param_1 + 8) = uVar2;
  if (cStack_79 < '\0') {
    __ZdlPv(auStack_90[0]);
  }
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  lVar3 = param_1;
  FUN_1094e4ad0(param_1,*param_2);
  uVar2 = 0;
  if (0.0 < *(float *)(param_1 + 0x28)) {
    uVar2 = (undefined4)lVar3;
  }
  uVar1 = 0;
  if (-1 < *(int *)(param_1 + 0x2c)) {
    uVar1 = uVar2;
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    uVar2 = uVar1;
  }
  uVar1 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 1094e72cc; end: 1094e7357;  */

undefined8 * FUN_1094e72cc(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 2;
  *param_1 = &PTR_FUN_110af7e20;
  FUN_1094dd9b4(&puStack_28);
  return param_1;
}



/* Entry: 1094e7358; end: 1094e7547;  */

/* WARNING: Removing unreachable block (ram,0x0001094e73f4) */
/* WARNING: Removing unreachable block (ram,0x0001094e73a0) */
/* WARNING: Removing unreachable block (ram,0x0001094e7468) */

undefined4 FUN_1094e7358(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 auStack_90 [2];
  char cStack_79;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined1 auStack_48 [24];
  
  uVar4 = *param_2;
  func_0x000107c31940(auStack_48,&UNK_10f4845d5);
  func_0x0001094a6ea4(uVar4,auStack_48,param_1 + 0x28);
  uVar4 = *param_2;
  func_0x000107c31940(auStack_60,PTR_s_stage_1132dfa28);
  func_0x000107c31940(auStack_78,PTR_DAT_1132dfa30);
  FUN_1094a6b30(auStack_48,uVar4,auStack_60,auStack_78);
  uVar2 = SUB84(auStack_48,0);
  FUN_1094eb6d8();
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  uVar4 = *param_2;
  func_0x000107c31940(auStack_60,PTR_s_component_1132dfa38);
  func_0x000107c31940(auStack_90,PTR_DAT_1132dfa40);
  FUN_1094a6b30(auStack_48,uVar4,auStack_60,auStack_90);
  uVar2 = SUB84(auStack_48,0);
  FUN_1094eb89c();
  *(undefined4 *)(param_1 + 8) = uVar2;
  if (cStack_79 < '\0') {
    __ZdlPv(auStack_90[0]);
  }
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  lVar3 = param_1;
  FUN_1094e4ad0(param_1,*param_2);
  uVar2 = 0;
  if (*(long *)(param_1 + 0x28) != *(long *)(param_1 + 0x30)) {
    uVar2 = (undefined4)lVar3;
  }
  uVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = uVar2;
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 1094e7548; end: 1094e75f3;  */

undefined8 * FUN_1094e7548(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  puStack_28 = param_1 + 2;
  *param_1 = &PTR_FUN_110af7e20;
  FUN_1094dd9b4(&puStack_28);
  return param_1;
}



/* Entry: 1094e75f4; end: 1094e82db;  */

/* WARNING: Removing unreachable block (ram,0x0001094e7d90) */
/* WARNING: Removing unreachable block (ram,0x0001094e79d8) */
/* WARNING: Removing unreachable block (ram,0x0001094e77fc) */
/* WARNING: Removing unreachable block (ram,0x0001094e7bb4) */
/* WARNING: Removing unreachable block (ram,0x0001094e7708) */

void FUN_1094e75f4(long param_1,long *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long **pplVar4;
  code *pcVar5;
  long *plVar6;
  long ***ppplVar7;
  undefined *puVar8;
  undefined4 uVar9;
  long lVar10;
  long ***ppplVar11;
  undefined8 uVar12;
  long *plVar13;
  long **pplStack_110;
  long *plStack_108;
  undefined8 auStack_100 [2];
  long **pplStack_f0;
  long *plStack_e8;
  undefined8 auStack_e0 [2];
  long **pplStack_d0;
  long *plStack_c8;
  undefined8 auStack_c0 [2];
  long **pplStack_b0;
  long *plStack_a8;
  undefined8 auStack_a0 [2];
  long **pplStack_90;
  long *plStack_88;
  long **pplStack_80;
  long *plStack_78;
  long ***ppplStack_70;
  long *plStack_68;
  undefined1 uStack_51;
  
  puVar1 = (undefined8 *)*param_2;
  if (param_2[1] - (long)puVar1 != 0x10) {
    FUN_10937e740(&ppplStack_70,&UNK_10f570248);
    FUN_109388c6c(1,&UNK_10f5701ab,&DAT_10f323079,0x12,&ppplStack_70);
    return;
  }
  FUN_1094e85a8(param_1 + 8);
  plVar6 = (long *)0xb0;
  __Znwm();
  plVar13 = plVar6 + 1;
  *plVar13 = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_110af8218;
  ppplVar11 = (long ***)(plVar6 + 3);
  *ppplVar11 = (long **)&PTR_FUN_110af8e38;
  plVar6[0x13] = 0;
  plVar6[0x12] = 0;
  plVar6[0x15] = 0;
  plVar6[0x14] = 0;
  plVar6[0xf] = 0;
  plVar6[0xe] = 0;
  plVar6[0x11] = 0;
  plVar6[0x10] = 0;
  plVar6[5] = 0;
  plVar6[4] = 0;
  plVar6[7] = 0;
  plVar6[6] = 0;
  plVar6[9] = 0;
  plVar6[8] = 0;
  plVar6[0xb] = 0;
  plVar6[10] = 0;
  plVar6[0xd] = 0;
  plVar6[0xc] = 0;
  plVar6[0x14] = 0;
  plVar6[0x13] = 0;
  plVar6[0x12] = 0;
  plVar6[0x11] = 0;
  *(undefined4 *)(plVar6 + 0x15) = 0x3f800000;
  pplStack_80 = (long **)ppplVar11;
  plStack_78 = plVar6;
  FUN_1094f064c(ppplVar11,puVar1);
  ppplVar7 = ppplVar11;
  (*(code *)(*ppplVar11)[4])();
  if (ppplVar7 == (long ***)0x0) {
    func_0x000105688514(&UNK_10f57025e);
  }
  else {
    *(undefined4 *)((long)ppplVar7 + 0xc) = 1;
    ppplVar7 = ppplVar11;
    (*(code *)(*ppplVar11)[4])();
    if (ppplVar7 == (long ***)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)((long)ppplVar7 + 0xc);
    }
    pplStack_90 = (long **)CONCAT44(pplStack_90._4_4_,uVar9);
    ppplStack_70 = &pplStack_90;
    lVar10 = param_1 + 8;
    FUN_1094e8720(lVar10,&pplStack_90,&UNK_10dd5b8f9,&ppplStack_70,auStack_a0);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = *plVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    ppplStack_70 = ppplVar11;
    plStack_68 = plVar6;
    FUN_1094e82dc(lVar10 + 0x18,&ppplStack_70);
    plVar6 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar13 = plStack_68 + 1;
      do {
        lVar10 = *plVar13;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    plVar6 = (long *)0x328;
    __Znwm();
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110af8268;
    _bzero(plVar6 + 4,0x308);
    ppplVar7 = (long ***)(plVar6 + 3);
    *ppplVar7 = (long **)&PTR_FUN_110af7db8;
    uVar12 = *puVar1;
    pplStack_90 = (long **)ppplVar7;
    plStack_88 = plVar6;
    func_0x000107c31940(&ppplStack_70,PTR_DAT_1132dfa58);
    FUN_1094a68cc(auStack_a0,uVar12,&ppplStack_70);
    FUN_1094e8d08(&pplStack_b0,auStack_c0,auStack_a0[0]);
    plVar6 = plStack_a8;
    plStack_68 = plStack_a8;
    ppplStack_70 = (long ***)pplStack_b0;
    pplStack_b0 = (long **)0x0;
    plStack_a8 = (long *)0x0;
    FUN_1094dc3b4(ppplVar7,&ppplStack_70);
    if (plVar6 != (long *)0x0) {
      plVar13 = plVar6 + 1;
      do {
        lVar10 = *plVar13;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    plVar6 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      plVar13 = plStack_a8 + 1;
      do {
        lVar10 = *plVar13;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    pplVar4 = pplStack_90;
    ppplVar7 = (long ***)pplStack_90;
    (*(code *)(*pplStack_90)[4])();
    if (ppplVar7 == (long ***)0x0) {
      puVar8 = &UNK_10f57025e;
    }
    else {
      *(undefined4 *)((long)ppplVar7 + 0xc) = 2;
      ppplVar7 = (long ***)pplVar4;
      (*(code *)(*pplVar4)[4])();
      if (ppplVar7 != (long ***)0x0) {
        *(undefined4 *)(ppplVar7 + 1) = 2;
        ppplVar7 = (long ***)pplVar4;
        (*(code *)(*pplVar4)[4])();
        if (ppplVar7 == (long ***)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined4 *)((long)ppplVar7 + 0xc);
        }
        pplStack_b0 = (long **)CONCAT44(pplStack_b0._4_4_,uVar9);
        ppplStack_70 = &pplStack_b0;
        lVar10 = param_1 + 8;
        FUN_1094e8720(lVar10,&pplStack_b0,&UNK_10dd5b8f9,&ppplStack_70,auStack_c0);
        ppplStack_70 = (long ***)pplVar4;
        plStack_68 = plStack_88;
        if (plStack_88 != (long *)0x0) {
          plVar6 = plStack_88 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = *plVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        FUN_1094e82dc(lVar10 + 0x18,&ppplStack_70);
        plVar6 = plStack_68;
        if (plStack_68 != (long *)0x0) {
          plVar13 = plStack_68 + 1;
          do {
            lVar10 = *plVar13;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        plVar6 = (long *)0x328;
        __Znwm();
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = (long)&PTR_FUN_110af8268;
        _bzero(plVar6 + 4,0x308);
        ppplVar7 = (long ***)(plVar6 + 3);
        *ppplVar7 = (long **)&PTR_FUN_110af7db8;
        uVar12 = *puVar1;
        pplStack_b0 = (long **)ppplVar7;
        plStack_a8 = plVar6;
        func_0x000107c31940(&ppplStack_70,PTR_DAT_1132dfa60);
        FUN_1094a68cc(auStack_c0,uVar12,&ppplStack_70);
        FUN_1094e8d08(&pplStack_d0,auStack_e0,auStack_c0[0]);
        plVar6 = plStack_c8;
        plStack_68 = plStack_c8;
        ppplStack_70 = (long ***)pplStack_d0;
        pplStack_d0 = (long **)0x0;
        plStack_c8 = (long *)0x0;
        FUN_1094dc3b4(ppplVar7,&ppplStack_70);
        if (plVar6 != (long *)0x0) {
          plVar13 = plVar6 + 1;
          do {
            lVar10 = *plVar13;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        plVar6 = plStack_c8;
        if (plStack_c8 != (long *)0x0) {
          plVar13 = plStack_c8 + 1;
          do {
            lVar10 = *plVar13;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        pplVar4 = pplStack_b0;
        ppplVar7 = (long ***)pplStack_b0;
        (*(code *)(*pplStack_b0)[4])();
        if (ppplVar7 == (long ***)0x0) {
          puVar8 = &UNK_10f57025e;
        }
        else {
          *(undefined4 *)((long)ppplVar7 + 0xc) = 2;
          ppplVar7 = (long ***)pplVar4;
          (*(code *)(*pplVar4)[4])();
          if (ppplVar7 != (long ***)0x0) {
            *(undefined4 *)(ppplVar7 + 1) = 3;
            ppplVar7 = (long ***)pplVar4;
            (*(code *)(*pplVar4)[4])();
            if (ppplVar7 == (long ***)0x0) {
              uVar9 = 0;
            }
            else {
              uVar9 = *(undefined4 *)((long)ppplVar7 + 0xc);
            }
            pplStack_d0 = (long **)CONCAT44(pplStack_d0._4_4_,uVar9);
            ppplStack_70 = &pplStack_d0;
            lVar10 = param_1 + 8;
            FUN_1094e8720(lVar10,&pplStack_d0,&UNK_10dd5b8f9,&ppplStack_70,auStack_e0);
            ppplStack_70 = (long ***)pplVar4;
            plStack_68 = plStack_a8;
            if (plStack_a8 != (long *)0x0) {
              plVar6 = plStack_a8 + 1;
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar3) {
                  *plVar6 = *plVar6 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            FUN_1094e82dc(lVar10 + 0x18,&ppplStack_70);
            plVar6 = plStack_68;
            if (plStack_68 != (long *)0x0) {
              plVar13 = plStack_68 + 1;
              do {
                lVar10 = *plVar13;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar3) {
                  *plVar13 = lVar10 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar10 == 0) {
                (**(code **)(*plStack_68 + 0x10))(plStack_68);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
              }
            }
            plVar6 = (long *)0x328;
            __Znwm();
            plVar6[1] = 0;
            plVar6[2] = 0;
            *plVar6 = (long)&PTR_FUN_110af8268;
            _bzero(plVar6 + 4,0x308);
            ppplVar7 = (long ***)(plVar6 + 3);
            *ppplVar7 = (long **)&PTR_FUN_110af7db8;
            uVar12 = *puVar1;
            pplStack_d0 = (long **)ppplVar7;
            plStack_c8 = plVar6;
            func_0x000107c31940(&ppplStack_70,PTR_DAT_1132dfa48);
            FUN_1094a68cc(auStack_e0,uVar12,&ppplStack_70);
            FUN_1094e8d08(&pplStack_f0,auStack_100,auStack_e0[0]);
            plVar6 = plStack_e8;
            plStack_68 = plStack_e8;
            ppplStack_70 = (long ***)pplStack_f0;
            pplStack_f0 = (long **)0x0;
            plStack_e8 = (long *)0x0;
            FUN_1094dc3b4(ppplVar7,&ppplStack_70);
            if (plVar6 != (long *)0x0) {
              plVar13 = plVar6 + 1;
              do {
                lVar10 = *plVar13;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar3) {
                  *plVar13 = lVar10 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar10 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
              }
            }
            plVar6 = plStack_e8;
            if (plStack_e8 != (long *)0x0) {
              plVar13 = plStack_e8 + 1;
              do {
                lVar10 = *plVar13;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar3) {
                  *plVar13 = lVar10 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar10 == 0) {
                (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
              }
            }
            pplVar4 = pplStack_d0;
            ppplVar7 = (long ***)pplStack_d0;
            (*(code *)(*pplStack_d0)[4])();
            if (ppplVar7 == (long ***)0x0) {
              puVar8 = &UNK_10f57025e;
            }
            else {
              *(undefined4 *)((long)ppplVar7 + 0xc) = 2;
              ppplVar7 = (long ***)pplVar4;
              (*(code *)(*pplVar4)[4])();
              if (ppplVar7 != (long ***)0x0) {
                *(undefined4 *)(ppplVar7 + 1) = 4;
                ppplVar7 = (long ***)pplVar4;
                (*(code *)(*pplVar4)[4])();
                if (ppplVar7 == (long ***)0x0) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = *(undefined4 *)((long)ppplVar7 + 0xc);
                }
                pplStack_f0 = (long **)CONCAT44(pplStack_f0._4_4_,uVar9);
                ppplStack_70 = &pplStack_f0;
                lVar10 = param_1 + 8;
                FUN_1094e8720(lVar10,&pplStack_f0,&UNK_10dd5b8f9,&ppplStack_70,auStack_100);
                ppplStack_70 = (long ***)pplVar4;
                plStack_68 = plStack_c8;
                if (plStack_c8 != (long *)0x0) {
                  plVar6 = plStack_c8 + 1;
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                    if (bVar3) {
                      *plVar6 = *plVar6 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                }
                FUN_1094e82dc(lVar10 + 0x18,&ppplStack_70);
                plVar6 = plStack_68;
                if (plStack_68 != (long *)0x0) {
                  plVar13 = plStack_68 + 1;
                  do {
                    lVar10 = *plVar13;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                    if (bVar3) {
                      *plVar13 = lVar10 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (lVar10 == 0) {
                    (**(code **)(*plStack_68 + 0x10))(plStack_68);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
                  }
                }
                plVar6 = (long *)0x328;
                __Znwm();
                plVar6[1] = 0;
                plVar6[2] = 0;
                *plVar6 = (long)&PTR_FUN_110af8268;
                _bzero(plVar6 + 4,0x308);
                ppplVar7 = (long ***)(plVar6 + 3);
                *ppplVar7 = (long **)&PTR_FUN_110af7db8;
                uVar12 = *puVar1;
                pplStack_f0 = (long **)ppplVar7;
                plStack_e8 = plVar6;
                func_0x000107c31940(&ppplStack_70,PTR_s_direction_1132dfa50);
                FUN_1094a68cc(auStack_100,uVar12,&ppplStack_70);
                FUN_1094e8d08(&pplStack_110,&uStack_51,auStack_100[0]);
                plVar6 = plStack_108;
                plStack_68 = plStack_108;
                ppplStack_70 = (long ***)pplStack_110;
                pplStack_110 = (long **)0x0;
                plStack_108 = (long *)0x0;
                FUN_1094dc3b4(ppplVar7,&ppplStack_70);
                if (plVar6 != (long *)0x0) {
                  plVar13 = plVar6 + 1;
                  do {
                    lVar10 = *plVar13;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                    if (bVar3) {
                      *plVar13 = lVar10 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (lVar10 == 0) {
                    (**(code **)(*plVar6 + 0x10))(plVar6);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
                  }
                }
                plVar6 = plStack_108;
                if (plStack_108 != (long *)0x0) {
                  plVar13 = plStack_108 + 1;
                  do {
                    lVar10 = *plVar13;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                    if (bVar3) {
                      *plVar13 = lVar10 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (lVar10 == 0) {
                    (**(code **)(*plStack_108 + 0x10))(plStack_108);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
                  }
                }
                pplVar4 = pplStack_f0;
                ppplVar7 = (long ***)pplStack_f0;
                (*(code *)(*pplStack_f0)[4])();
                if (ppplVar7 == (long ***)0x0) {
                  puVar8 = &UNK_10f57025e;
                }
                else {
                  *(undefined4 *)((long)ppplVar7 + 0xc) = 2;
                  ppplVar7 = (long ***)pplVar4;
                  (*(code *)(*pplVar4)[4])();
                  if (ppplVar7 != (long ***)0x0) {
                    *(undefined4 *)(ppplVar7 + 1) = 5;
                    ppplVar7 = (long ***)pplVar4;
                    (*(code *)(*pplVar4)[4])();
                    if (ppplVar7 == (long ***)0x0) {
                      uVar9 = 0;
                    }
                    else {
                      uVar9 = *(undefined4 *)((long)ppplVar7 + 0xc);
                    }
                    pplStack_110 = (long **)CONCAT44(pplStack_110._4_4_,uVar9);
                    param_1 = param_1 + 8;
                    ppplStack_70 = &pplStack_110;
                    FUN_1094e8720(param_1,&pplStack_110,&UNK_10dd5b8f9,&ppplStack_70,&uStack_51);
                    ppplStack_70 = (long ***)pplVar4;
                    plStack_68 = plStack_e8;
                    if (plStack_e8 != (long *)0x0) {
                      plVar6 = plStack_e8 + 1;
                      do {
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                        if (bVar3) {
                          *plVar6 = *plVar6 + 1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                    }
                    FUN_1094e82dc(param_1 + 0x18,&ppplStack_70);
                    plVar6 = plStack_68;
                    if (plStack_68 != (long *)0x0) {
                      plVar13 = plStack_68 + 1;
                      do {
                        lVar10 = *plVar13;
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                        if (bVar3) {
                          *plVar13 = lVar10 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                      if (lVar10 == 0) {
                        (**(code **)(*plStack_68 + 0x10))(plStack_68);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
                      }
                    }
                    FUN_109380f8c(auStack_100);
                    plVar6 = plStack_e8;
                    if (plStack_e8 != (long *)0x0) {
                      plVar13 = plStack_e8 + 1;
                      do {
                        lVar10 = *plVar13;
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                        if (bVar3) {
                          *plVar13 = lVar10 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                      if (lVar10 == 0) {
                        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
                      }
                    }
                    FUN_109380f8c(auStack_e0);
                    plVar6 = plStack_c8;
                    if (plStack_c8 != (long *)0x0) {
                      plVar13 = plStack_c8 + 1;
                      do {
                        lVar10 = *plVar13;
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                        if (bVar3) {
                          *plVar13 = lVar10 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                      if (lVar10 == 0) {
                        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
                      }
                    }
                    FUN_109380f8c(auStack_c0);
                    plVar6 = plStack_a8;
                    if (plStack_a8 != (long *)0x0) {
                      plVar13 = plStack_a8 + 1;
                      do {
                        lVar10 = *plVar13;
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                        if (bVar3) {
                          *plVar13 = lVar10 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                      if (lVar10 == 0) {
                        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
                      }
                    }
                    FUN_109380f8c(auStack_a0);
                    plVar6 = plStack_88;
                    if (plStack_88 != (long *)0x0) {
                      plVar13 = plStack_88 + 1;
                      do {
                        lVar10 = *plVar13;
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                        if (bVar3) {
                          *plVar13 = lVar10 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                      if (lVar10 == 0) {
                        (**(code **)(*plStack_88 + 0x10))(plStack_88);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
                      }
                    }
                    plVar6 = plStack_78;
                    if (plStack_78 == (long *)0x0) {
                      return;
                    }
                    plVar13 = plStack_78 + 1;
                    do {
                      lVar10 = *plVar13;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                      if (bVar3) {
                        *plVar13 = lVar10 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (lVar10 != 0) {
                      return;
                    }
                    (**(code **)(*plStack_78 + 0x10))(plStack_78);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
                    return;
                  }
                  puVar8 = &UNK_10f570290;
                }
                func_0x000105688514(puVar8);
                goto LAB_1094e80e8;
              }
              puVar8 = &UNK_10f570290;
            }
            func_0x000105688514(puVar8);
            goto LAB_1094e80e8;
          }
          puVar8 = &UNK_10f570290;
        }
        func_0x000105688514(puVar8);
        goto LAB_1094e80e8;
      }
      puVar8 = &UNK_10f570290;
    }
    func_0x000105688514(puVar8);
  }
LAB_1094e80e8:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1094e80ec);
  (*pcVar5)();
}



/* Entry: 1094e82dc; end: 1094e83bf;  */

long * FUN_1094e82dc(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    uVar8 = *param_2;
    puVar7 = puVar2 + 2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar8;
    *param_2 = 0;
    param_2[1] = 0;
    plVar3 = param_1;
  }
  else {
    lVar6 = (long)puVar2 - *param_1;
    uVar1 = (lVar6 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_1094e8420();
      *param_1 = (long)&PTR_FUN_110af8b68;
      func_0x0001094e84b4(param_1 + 1);
      return param_1;
    }
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 3;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7fffffffffffffef < uVar4) {
      uVar5 = 0xfffffffffffffff;
    }
    plVar3 = param_1;
    plStack_38 = param_1;
    FUN_1094e8434();
    puVar2 = (undefined8 *)((long)plVar3 + lVar6);
    uVar8 = *param_2;
    puVar7 = puVar2 + 2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar8;
    *param_2 = 0;
    param_2[1] = 0;
    lVar6 = (long)puVar2 - (param_1[1] - *param_1);
    _memcpy(lVar6);
    lStack_58 = *param_1;
    *param_1 = lVar6;
    param_1[1] = (long)puVar7;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar3 + uVar5 * 2);
    plVar3 = &lStack_58;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x0001094e8468(plVar3);
  }
  param_1[1] = (long)puVar7;
  return plVar3;
}



/* Entry: 1094e83c0; end: 1094e841f;  */

undefined8 * FUN_1094e83c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af8b68;
  func_0x0001094e84b4(param_1 + 1);
  return param_1;
}



/* Entry: 1094e8420; end: 1094e8433;  */

undefined1  [16] FUN_1094e8420(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3c == 0) {
    lVar2 = param_2 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104c4f740();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    func_0x0001094e8ba4();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 1094e8434; end: 1094e8537;  */

undefined1  [16] FUN_1094e8434(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    func_0x0001094e8ba4();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 1094e8538; end: 1094e85a7;  */

void FUN_1094e8538(long *param_1)

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
        func_0x0001094e8ba4();
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



/* Entry: 1094e85a8; end: 1094e85fb;  */

void FUN_1094e85a8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    func_0x0001094e84ec(param_1,param_1[2]);
    param_1[2] = 0;
    lVar1 = param_1[1];
    if (lVar1 != 0) {
      lVar2 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar2 * 8) = 0;
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 1094e85fc; end: 1094e860b;  */

void FUN_1094e85fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af8218;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1094e860c; end: 1094e862b;  */

void FUN_1094e860c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af8218;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094e862c; end: 1094e8653;  */

undefined8 * FUN_1094e862c(long param_1)

{
  long lStack_28;
  
  func_0x0001094cffd4(param_1 + 0x88);
  if (*(char *)(param_1 + 0x80) == '\x01') {
    lStack_28 = param_1 + 0x68;
    func_0x000104c607c8(&lStack_28);
    lStack_28 = param_1 + 0x50;
    func_0x000104c607c8(&lStack_28);
    lStack_28 = param_1 + 0x30;
    *(undefined8 *)(param_1 + 0x20) = &PTR_FUN_110af7e20;
    FUN_1094dd9b4(&lStack_28);
  }
  return (undefined8 *)(param_1 + 0x20);
}



/* Entry: 1094e8654; end: 1094e8657;  */

void FUN_1094e8654(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094e8658; end: 1094e871f;  */

undefined8 * FUN_1094e8658(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  if (*(char *)(param_1 + 0xc) == '\x01') {
    puStack_28 = param_1 + 9;
    func_0x000104c607c8(&puStack_28);
    puStack_28 = param_1 + 6;
    func_0x000104c607c8(&puStack_28);
    puStack_28 = param_1 + 2;
    *param_1 = &PTR_FUN_110af7e20;
    FUN_1094dd9b4(&puStack_28);
  }
  return param_1;
}



/* Entry: 1094e8720; end: 1094e894b;  */

undefined1  [16] FUN_1094e8720(long *param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined1 auVar11 [16];
  
  uVar10 = (ulong)*param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar9 & uVar3) == 0) {
      unaff_x24 = uVar3 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar6 * uVar9;
      }
    }
    puVar5 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar5 != (undefined8 *)0x0) {
      for (plVar8 = (long *)*puVar5; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar6 = plVar8[1];
        if (uVar6 == uVar10) {
          if ((int)plVar8[2] == *param_2) {
            uVar2 = 0;
            goto LAB_1094e890c;
          }
        }
        else {
          if ((uVar9 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar9 <= uVar6) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar6 / uVar9;
            }
            uVar6 = uVar6 - uVar1 * uVar9;
          }
          if (uVar6 != unaff_x24) break;
        }
      }
    }
  }
  plVar8 = (long *)0x30;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar10;
  *(undefined4 *)(plVar8 + 2) = *(undefined4 *)*param_4;
  plVar8[4] = 0;
  plVar8[5] = 0;
  plVar8[3] = 0;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar9) {
      uVar3 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar3 = uVar3 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    FUN_1094e894c(param_1,uVar3);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar3 * uVar9;
      }
    }
  }
  lVar7 = *param_1;
  plVar4 = *(long **)(lVar7 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar8 = *plVar4;
    *plVar4 = (long)plVar8;
    *(long **)(lVar7 + unaff_x24 * 8) = plVar4;
    if (*plVar8 == 0) goto LAB_1094e88fc;
    uVar10 = *(ulong *)(*plVar8 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar10 = uVar10 & uVar9 - 1;
    }
    else if (uVar9 <= uVar10) {
      uVar3 = 0;
      if (uVar9 != 0) {
        uVar3 = uVar10 / uVar9;
      }
      uVar10 = uVar10 - uVar3 * uVar9;
    }
    plVar4 = (long *)(*param_1 + uVar10 * 8);
  }
  else {
    *plVar8 = *plVar4;
  }
  *plVar4 = (long)plVar8;
LAB_1094e88fc:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_1094e890c:
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 1094e894c; end: 1094e8a1b;  */

void FUN_1094e894c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lStack_48;
  ulong uStack_40;
  long *plStack_38;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar9 = param_1[1];
  if (uVar9 < param_2) {
LAB_1094e8994:
    if (param_2 == 0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        plVar5 = param_1;
        uVar9 = param_2;
        func_0x000104c4f740();
        uStack_40 = param_2;
        plStack_38 = param_1;
        if ((char)plVar5[1] == '\x01') {
          lStack_48 = uVar9 + 0x18;
          FUN_1094e8538(&lStack_48);
        }
        if (uVar9 != 0) {
          __ZdlPv(uVar9);
        }
        return;
      }
      lVar2 = param_2 << 3;
      __Znwm();
      lVar3 = *param_1;
      *param_1 = lVar2;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      uVar9 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar9 * 8) = 0;
        uVar9 = uVar9 + 1;
      } while (param_2 != uVar9);
      plVar5 = (long *)param_1[2];
      if (plVar5 != (long *)0x0) {
        uVar9 = plVar5[1];
        uVar4 = param_2 - 1;
        if ((param_2 & uVar4) == 0) {
          uVar9 = uVar9 & uVar4;
        }
        else if (param_2 <= uVar9) {
          uVar8 = 0;
          if (param_2 != 0) {
            uVar8 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar8 * param_2;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar6 = (long *)*plVar5;
        while (plVar6 != (long *)0x0) {
          uVar8 = plVar6[1];
          if ((param_2 & uVar4) == 0) {
            uVar8 = uVar8 & uVar4;
          }
          else if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          plVar7 = plVar6;
          if (uVar8 != uVar9) {
            lVar2 = *param_1;
            if (*(long *)(lVar2 + uVar8 * 8) == 0) {
              *(long **)(lVar2 + uVar8 * 8) = plVar5;
              uVar9 = uVar8;
            }
            else {
              *plVar5 = *plVar6;
              *plVar6 = **(undefined8 **)(lVar2 + uVar8 * 8);
              **(long **)(lVar2 + uVar8 * 8) = (long)plVar6;
              plVar7 = plVar5;
            }
          }
          plVar5 = plVar7;
          plVar6 = (long *)*plVar7;
        }
      }
    }
    return;
  }
  if (param_2 < uVar9) {
    uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar9 < 3) || ((uVar9 & uVar9 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar4) {
      uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
    }
    if (param_2 <= uVar4) {
      param_2 = uVar4;
    }
    if (param_2 < uVar9) goto LAB_1094e8994;
  }
  return;
}



/* Entry: 1094e8a1c; end: 1094e8bfb;  */

void FUN_1094e8a1c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lStack_48;
  ulong uStack_40;
  long *plStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      plVar6 = param_1;
      uVar4 = param_2;
      func_0x000104c4f740();
      uStack_28 = 0x1094e8b58;
      uStack_40 = param_2;
      plStack_38 = param_1;
      puStack_30 = &stack0xfffffffffffffff0;
      if ((char)plVar6[1] == '\x01') {
        lStack_48 = uVar4 + 0x18;
        FUN_1094e8538(&lStack_48);
      }
      if (uVar4 != 0) {
        __ZdlPv(uVar4);
      }
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      uVar4 = plVar6[1];
      uVar5 = param_2 - 1;
      if ((param_2 & uVar5) == 0) {
        uVar4 = uVar4 & uVar5;
      }
      else if (param_2 <= uVar4) {
        uVar9 = 0;
        if (param_2 != 0) {
          uVar9 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar9 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar6;
      while (plVar7 != (long *)0x0) {
        uVar9 = plVar7[1];
        if ((param_2 & uVar5) == 0) {
          uVar9 = uVar9 & uVar5;
        }
        else if (param_2 <= uVar9) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar1 * param_2;
        }
        plVar8 = plVar7;
        if (uVar9 != uVar4) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar9 * 8) == 0) {
            *(long **)(lVar2 + uVar9 * 8) = plVar6;
            uVar4 = uVar9;
          }
          else {
            *plVar6 = *plVar7;
            *plVar7 = **(undefined8 **)(lVar2 + uVar9 * 8);
            **(long **)(lVar2 + uVar9 * 8) = (long)plVar7;
            plVar8 = plVar6;
          }
        }
        plVar6 = plVar8;
        plVar7 = (long *)*plVar8;
      }
    }
  }
  return;
}



/* Entry: 1094e8bfc; end: 1094e8c0b;  */

void FUN_1094e8bfc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af8268;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1094e8c0c; end: 1094e8c2b;  */

void FUN_1094e8c0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af8268;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094e8c2c; end: 1094e8cab;  */

void FUN_1094e8c2c(long param_1)

{
  long lStack_28;
  
  if (*(char *)(param_1 + 800) == '\x01') {
    *(undefined ***)(param_1 + 0x2f0) = &PTR_FUN_110af7e20;
    lStack_28 = param_1 + 0x300;
    FUN_1094dd9b4(&lStack_28);
  }
  if (*(char *)(param_1 + 0x2e8) == '\x01') {
    FUN_1094e0cf8(param_1 + 0xa0);
  }
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_110af9078;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    FUN_1094dda24(param_1 + 0x68);
  }
  return;
}



/* Entry: 1094e8cac; end: 1094e8caf;  */

void FUN_1094e8cac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094e8cb0; end: 1094e8d07;  */

long FUN_1094e8cb0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
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



/* Entry: 1094e8d08; end: 1094e8d5f;  */

void FUN_1094e8d08(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x28;
  __Znwm();
  FUN_1094e8d60();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 1094e8d60; end: 1094e8da7;  */

undefined8 * FUN_1094e8d60(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110af82b8;
  FUN_109380c8c(param_1 + 3);
  return param_1;
}



/* Entry: 1094e8da8; end: 1094e8db7;  */

void FUN_1094e8da8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af82b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1094e8db8; end: 1094e8dd7;  */

void FUN_1094e8db8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af82b8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094e8dd8; end: 1094e8de3;  */

void FUN_1094e8dd8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  FUN_109380a70(param_1 + 0x18,&uStack_30);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  FUN_1093818c0(param_1 + 0x18);
  return;
}



/* Entry: 1094e8de4; end: 1094e8e3b;  */

long FUN_1094e8de4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
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



/* Entry: 1094e8e3c; end: 1094e8fbb;  */

long FUN_1094e8e3c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_90;
  long *plStack_88;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  uStack_70 = 0x100000001;
  ppuStack_78 = &PTR_FUN_110af7ea0;
  *(undefined8 *)(param_1 + 0x10) = 0x100000001;
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_1094dd770(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_68 = 0;
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_1094e2fa0(param_1 + 0x30);
      __ZdlPv(*(undefined8 *)(param_1 + 0x30));
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_68 = 0;
    *(undefined ***)(param_1 + 8) = &PTR_FUN_110af7ea0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  puStack_38 = &uStack_50;
  FUN_1094e4a90(&puStack_38);
  ppuStack_78 = &PTR_FUN_110af7e20;
  puStack_38 = &uStack_68;
  FUN_1094dd9b4(&puStack_38);
  plStack_88 = (long *)param_2[1];
  uStack_90 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_1 = param_1 + 8;
  FUN_1094e8fbc(param_1,&uStack_90);
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return param_1;
}



/* Entry: 1094e8fbc; end: 1094e904f;  */

long * FUN_1094e8fbc(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  (**(code **)(*param_1 + 0x10))(param_1,&uStack_30,2);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return param_1;
}



/* Entry: 1094e9050; end: 1094e92b7;  */

void FUN_1094e9050(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  undefined4 uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long *plStack_68;
  
  plVar12 = *(long **)(param_2 + 0xf0);
  do {
    if (plVar12 == (long *)0x0) {
      return;
    }
    plVar2 = plVar12 + 2;
    uVar7 = param_1 + 0x78;
    func_0x000107c31944(uVar7,plVar2);
    uVar14 = *(ulong *)(param_1 + 0x80);
    if (uVar14 != 0) {
      uVar16 = uVar14 - 1;
      if ((uVar14 & uVar16) == 0) {
        uVar17 = uVar16 & uVar7;
      }
      else {
        uVar17 = uVar7;
        if (uVar14 <= uVar7) {
          uVar17 = 0;
          if (uVar14 != 0) {
            uVar17 = uVar7 / uVar14;
          }
          uVar17 = uVar7 - uVar17 * uVar14;
        }
      }
      plVar10 = *(long **)(*(long *)(param_1 + 0x78) + uVar17 * 8);
      if (plVar10 != (long *)0x0) {
        for (plVar10 = (long *)*plVar10; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
          uVar11 = plVar10[1];
          if (uVar7 == uVar11) {
            uVar11 = param_1 + 0x78;
            func_0x000104c4fbc4(uVar11,plVar10 + 2,plVar2);
            if ((uVar11 & 1) != 0) goto LAB_1094e914c;
          }
          else {
            if ((uVar14 & uVar16) == 0) {
              uVar11 = uVar11 & uVar16;
            }
            else if (uVar14 <= uVar11) {
              uVar6 = 0;
              if (uVar14 != 0) {
                uVar6 = uVar11 / uVar14;
              }
              uVar11 = uVar11 - uVar6 * uVar14;
            }
            if (uVar11 != uVar17) break;
          }
        }
      }
    }
    lVar8 = param_1 + 0x78;
    plStack_68 = plVar2;
    FUN_1094e9784(lVar8,plVar2,&plStack_68);
    *(undefined8 *)(lVar8 + 0x28) = 0;
    *(undefined4 *)(lVar8 + 0x30) = 0;
LAB_1094e914c:
    puVar15 = *(undefined8 **)(param_1 + 0x30);
    puVar3 = *(undefined8 **)(param_1 + 0x38);
    if (puVar15 == puVar3) {
LAB_1094e91c8:
      if (puVar15 != puVar3) {
        plStack_68 = puVar15 + 3;
        lVar8 = param_1 + 0x78;
        FUN_1094e9784(lVar8,plStack_68,&plStack_68);
        if (*(float *)(plVar12 + 5) <= *(float *)((long)puVar15 + 0xc)) {
          iVar1 = *(int *)(lVar8 + 0x28);
          if (*(float *)(puVar15 + 2) <= *(float *)(plVar12 + 5)) {
            if ((iVar1 == 1) &&
               (iVar1 = *(int *)(lVar8 + 0x2c) + 1, *(int *)(lVar8 + 0x2c) = iVar1,
               *(int *)((long)puVar15 + 4) <= iVar1)) {
              *(undefined4 *)(lVar8 + 0x28) = 2;
              *(undefined4 *)(lVar8 + 0x30) = 0;
            }
          }
          else if (iVar1 - 1U < 2) {
            iVar1 = *(int *)(lVar8 + 0x30) + 1;
            *(int *)(lVar8 + 0x30) = iVar1;
            if (*(int *)(puVar15 + 1) <= iVar1) {
              *(undefined4 *)(lVar8 + 0x30) = 0;
              *(undefined8 *)(lVar8 + 0x28) = 0;
            }
          }
          else if (iVar1 == 0) {
            *(undefined4 *)(lVar8 + 0x2c) = 0;
            *(undefined4 *)(lVar8 + 0x30) = 0;
          }
        }
        else {
          iVar1 = *(int *)(lVar8 + 0x2c) + 1;
          *(int *)(lVar8 + 0x2c) = iVar1;
          *(undefined4 *)(lVar8 + 0x30) = 0;
          if (*(uint *)(lVar8 + 0x28) < 2) {
            uVar13 = 1;
            if (*(int *)((long)puVar15 + 4) <= iVar1) {
              uVar13 = 2;
            }
            *(undefined4 *)(lVar8 + 0x28) = uVar13;
          }
        }
      }
    }
    else {
      bVar4 = *(byte *)((long)plVar12 + 0x27);
      uVar7 = plVar12[3];
      if (-1 < (char)bVar4) {
        uVar7 = (ulong)bVar4;
      }
      puVar15 = puVar15 + 3;
      do {
        bVar5 = *(byte *)((long)puVar15 + 0x17);
        uVar14 = puVar15[1];
        if (-1 < (char)bVar5) {
          uVar14 = (ulong)bVar5;
        }
        if (uVar14 == uVar7) {
          puVar9 = (undefined8 *)*puVar15;
          if (-1 < (char)bVar5) {
            puVar9 = puVar15;
          }
          plVar10 = (long *)*plVar2;
          if (-1 < (char)bVar4) {
            plVar10 = plVar2;
          }
          _memcmp(puVar9,plVar10,uVar7);
          if ((int)puVar9 == 0) {
            puVar15 = puVar15 + -3;
            goto LAB_1094e91c8;
          }
        }
        puVar9 = puVar15 + 3;
        puVar15 = puVar15 + 6;
      } while (puVar9 != puVar3);
    }
    plVar12 = (long *)*plVar12;
  } while( true );
}



/* Entry: 1094e92b8; end: 1094e955b;  */

void FUN_1094e92b8(long param_1,long param_2)

{
  long *plVar1;
  undefined8 ***pppuVar2;
  byte bVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  byte bVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 **ppuStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  ppuStack_78 = (undefined8 ***)0x0;
  uStack_70 = 0;
  uStack_68 = 0;
  lVar8 = *(long *)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != lVar8) {
    uVar12 = 0;
LAB_1094e92f8:
    uVar7 = uStack_70;
    if (-1 < (long)uStack_68) {
      uVar7 = uStack_68 >> 0x38;
    }
    if (uVar7 == 0) {
      lVar6 = param_2 + 0xe0;
      FUN_1094e9bbc(lVar6,lVar8 + uVar12 * 0x30 + 0x18);
      lVar8 = *(long *)(param_1 + 0x30) + uVar12 * 0x30;
      uVar7 = param_1 + 0x78;
      func_0x000107c31944(uVar7,lVar8 + 0x18);
      uVar15 = *(ulong *)(param_1 + 0x80);
      if (uVar15 != 0) {
        uVar16 = uVar15 - 1;
        if ((uVar15 & uVar16) == 0) {
          uVar13 = uVar16 & uVar7;
        }
        else {
          uVar13 = uVar7;
          if (uVar15 <= uVar7) {
            uVar13 = 0;
            if (uVar15 != 0) {
              uVar13 = uVar7 / uVar15;
            }
            uVar13 = uVar7 - uVar13 * uVar15;
          }
        }
        plVar10 = *(long **)(*(long *)(param_1 + 0x78) + uVar13 * 8);
        if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
          do {
            uVar11 = plVar10[1];
            if (uVar11 == uVar7) {
              uVar11 = param_1 + 0x78;
              func_0x000104c4fbc4(uVar11,plVar10 + 2,lVar8 + 0x18);
              if ((uVar11 & 1) != 0) goto LAB_1094e93dc;
            }
            else {
              if ((uVar15 & uVar16) == 0) {
                uVar11 = uVar11 & uVar16;
              }
              else if (uVar15 <= uVar11) {
                uVar4 = 0;
                if (uVar15 != 0) {
                  uVar4 = uVar11 / uVar15;
                }
                uVar11 = uVar11 - uVar4 * uVar15;
              }
              if (uVar11 != uVar13) break;
            }
            plVar10 = (long *)*plVar10;
            if (plVar10 == (long *)0x0) break;
          } while( true );
        }
      }
      goto LAB_1094e9528;
    }
  }
LAB_1094e9428:
  plVar10 = *(long **)(param_2 + 0xf0);
  if (plVar10 != (long *)0x0) {
    do {
      plVar1 = plVar10 + 2;
      lVar8 = param_1 + 0x50;
      FUN_1094e9bbc(lVar8,plVar1);
      if (lVar8 == 0) {
        bVar14 = 0;
      }
      else {
        bVar14 = *(byte *)(lVar8 + 0x2c);
      }
      bVar3 = *(byte *)((long)plVar10 + 0x27);
      uVar12 = plVar10[3];
      if (-1 < (char)bVar3) {
        uVar12 = (ulong)bVar3;
      }
      uVar7 = uStack_70;
      if (-1 < (long)uStack_68) {
        uVar7 = uStack_68 >> 0x38;
      }
      if (uVar12 == uVar7) {
        plVar9 = (long *)*plVar1;
        if (-1 < (char)bVar3) {
          plVar9 = plVar1;
        }
        pppuVar2 = (undefined8 ***)ppuStack_78;
        if (-1 < (long)uStack_68) {
          pppuVar2 = &ppuStack_78;
        }
        _memcmp(plVar9,pppuVar2);
        if ((int)plVar9 != 0) goto LAB_1094e94ac;
        *(byte *)((long)plVar10 + 0x2d) = (bVar14 ^ 0xff) & 1;
        *(undefined1 *)((long)plVar10 + 0x2c) = 1;
        *(undefined1 *)((long)plVar10 + 0x2e) = 0;
      }
      else {
LAB_1094e94ac:
        *(byte *)((long)plVar10 + 0x2e) = bVar14 & 1;
        *(undefined2 *)((long)plVar10 + 0x2c) = 0;
      }
      plVar10 = (long *)*plVar10;
    } while (plVar10 != (long *)0x0);
  }
  if (param_1 + 0x50 != param_2 + 0xe0) {
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x100);
    FUN_1094de568(param_1 + 0x50,*(undefined8 *)(param_2 + 0xf0),0);
  }
  if ((long)uStack_68 < 0) {
    __ZdlPv(ppuStack_78);
  }
  return;
LAB_1094e93dc:
  if (lVar6 == 0) {
LAB_1094e9528:
    FUN_10938ce40(&UNK_10f5702ca);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1094e9538);
    (*pcVar5)();
  }
  if ((int)plVar10[5] == 2) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (&ppuStack_78,*(long *)(param_1 + 0x30) + uVar12 * 0x30 + 0x18);
  }
  uVar12 = uVar12 + 1;
  lVar8 = *(long *)(param_1 + 0x30);
  if ((ulong)((*(long *)(param_1 + 0x38) - lVar8 >> 4) * -0x5555555555555555) <= uVar12)
  goto LAB_1094e9428;
  goto LAB_1094e92f8;
}



/* Entry: 1094e955c; end: 1094e95cb;  */

long FUN_1094e955c(long param_1)

{
  FUN_1094e9650(param_1 + 0x78);
  FUN_1094e073c(param_1 + 0x50);
  FUN_1094e96b4(param_1 + 8);
  return param_1;
}



/* Entry: 1094e95cc; end: 1094e963b;  */

void FUN_1094e95cc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = param_1;
  FUN_1094e9714();
  if ((int)plVar1 != 0) {
    (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0001094e9628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 1094e963c; end: 1094e964f;  */

long FUN_1094e963c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 8;
  if (*(char *)(param_1 + 0x48) == '\0') {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 1094e9650; end: 1094e96b3;  */

long * FUN_1094e9650(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (*(char *)((long)plVar1 + 0x27) < '\0') {
      __ZdlPv(plVar1[2]);
    }
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



/* Entry: 1094e96b4; end: 1094e9713;  */

undefined8 * FUN_1094e96b4(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  if (*(char *)(param_1 + 8) == '\x01') {
    puStack_28 = param_1 + 5;
    FUN_1094e4a90(&puStack_28);
    puStack_28 = param_1 + 2;
    *param_1 = &PTR_FUN_110af7e20;
    FUN_1094dd9b4(&puStack_28);
  }
  return param_1;
}



/* Entry: 1094e9714; end: 1094e9783;  */

void FUN_1094e9714(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  (**(code **)(*param_1 + 0x20))();
  if (param_1 != (long *)0x0) {
    puVar1 = (undefined8 *)param_1[2];
    puVar2 = (undefined8 *)param_1[3];
    if (puVar1 != puVar2) {
      do {
        puVar4 = puVar1 + 2;
        plVar3 = (long *)*puVar1;
        (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
        puVar1 = puVar4;
      } while ((int)plVar3 != 0 && puVar4 != puVar2);
    }
  }
  return;
}



/* Entry: 1094e9784; end: 1094e9b87;  */

long * FUN_1094e9784(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x25;
  ulong uVar14;
  
  plVar8 = param_1;
  func_0x000107c31944();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar14 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar14) == 0) {
      unaff_x25 = (long *)(uVar14 & (ulong)plVar8);
    }
    else {
      unaff_x25 = plVar8;
      if (plVar13 <= plVar8) {
        uVar1 = 0;
        if (plVar13 != (long *)0x0) {
          uVar1 = (ulong)plVar8 / (ulong)plVar13;
        }
        unaff_x25 = (long *)((long)plVar8 - uVar1 * (long)plVar13);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        plVar6 = (long *)plVar5[1];
        if (plVar6 == plVar8) {
          plVar6 = param_1;
          func_0x000104c4fbc4(param_1,plVar5 + 2,param_2);
          if (((ulong)plVar6 & 1) != 0) {
            return plVar5;
          }
        }
        else {
          if (((ulong)plVar13 & uVar14) == 0) {
            plVar6 = (long *)((ulong)plVar6 & uVar14);
          }
          else if (plVar13 <= plVar6) {
            uVar1 = 0;
            if (plVar13 != (long *)0x0) {
              uVar1 = (ulong)plVar6 / (ulong)plVar13;
            }
            plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar13);
          }
          if (plVar6 != unaff_x25) break;
        }
      }
    }
  }
  plVar6 = (long *)*param_3;
  plVar5 = (long *)0x38;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = (long)plVar8;
  if (*(char *)((long)plVar6 + 0x17) < '\0') {
    func_0x000107c3192c(plVar5 + 2,*plVar6,plVar6[1]);
  }
  else {
    lVar4 = plVar6[1];
    lVar3 = *plVar6;
    plVar5[4] = plVar6[2];
    plVar5[3] = lVar4;
    plVar5[2] = lVar3;
  }
  *(undefined4 *)(plVar5 + 6) = 0;
  plVar5[5] = 0;
  if ((plVar13 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar13)) goto LAB_1094e9a8c;
  uVar14 = 1;
  if ((long *)0x2 < plVar13) {
    uVar14 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
  }
  plVar6 = (long *)(uVar14 | (long)plVar13 << 1);
  plVar13 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar6 <= plVar13) {
    plVar6 = plVar13;
  }
  if ((long)plVar6 - 1U == 0) {
    plVar6 = (long *)0x2;
  }
  else if (((ulong)plVar6 & (long)plVar6 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar13 = (long *)param_1[1];
  if (plVar13 < plVar6) {
LAB_1094e9914:
    if ((ulong)plVar6 >> 0x3d != 0) {
      func_0x000104c4f740();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1094e9b60);
      (*pcVar2)();
    }
    lVar3 = (long)plVar6 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar13 = (long *)0x0;
    param_1[1] = (long)plVar6;
    do {
      *(undefined8 *)(*param_1 + (long)plVar13 * 8) = 0;
      plVar13 = (long *)((long)plVar13 + 1);
    } while (plVar6 != plVar13);
    plVar7 = (long *)param_1[2];
    plVar13 = plVar6;
    if (plVar7 != (long *)0x0) {
      plVar9 = (long *)plVar7[1];
      uVar14 = (long)plVar6 - 1;
      if (((ulong)plVar6 & uVar14) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar14);
      }
      else if (plVar6 <= plVar9) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)plVar6;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)plVar6);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar7;
      while (plVar10 != (long *)0x0) {
        plVar12 = (long *)plVar10[1];
        if (((ulong)plVar6 & uVar14) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar14);
        }
        else if (plVar6 <= plVar12) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)plVar12 / (ulong)plVar6;
          }
          plVar12 = (long *)((long)plVar12 - uVar1 * (long)plVar6);
        }
        plVar11 = plVar10;
        if (plVar12 != plVar9) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar12 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar12 * 8) = plVar7;
            plVar9 = plVar12;
          }
          else {
            *plVar7 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)plVar12 * 8);
            **(long **)(lVar3 + (long)plVar12 * 8) = (long)plVar10;
            plVar11 = plVar7;
          }
        }
        plVar7 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  else if (plVar6 < plVar13) {
    plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar7) {
      plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
    }
    if (plVar6 <= plVar7) {
      plVar6 = plVar7;
    }
    if (plVar6 < plVar13) {
      if (plVar6 != (long *)0x0) goto LAB_1094e9914;
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar13 - 1U & (ulong)plVar8);
  }
  else {
    unaff_x25 = plVar8;
    if (plVar13 <= plVar8) {
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar8 / (ulong)plVar13;
      }
      unaff_x25 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
    }
  }
LAB_1094e9a8c:
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar8;
    if (*plVar5 != 0) {
      plVar8 = *(long **)(*plVar5 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar8) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar8 / (ulong)plVar13;
        }
        plVar8 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
      }
      *(long **)(*param_1 + (long)plVar8 * 8) = plVar5;
    }
  }
  else {
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
  }
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 1094e9b88; end: 1094e9bbb;  */

void FUN_1094e9b88(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(char *)(param_2 + 0x27) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_2 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1094e9bbc; end: 1094e9c9f;  */

long FUN_1094e9bbc(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c31944();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar2) {
          plVar4 = param_1;
          func_0x000104c4fbc4(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 1094e9ca0; end: 1094e9d2b;  */

undefined8 FUN_1094e9ca0(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((bRam0000000113829e80 & 1) == 0) {
    iVar1 = 0x13829e80;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uVar2 = 0x28;
      __Znwm();
      FUN_1094e9d2c();
      uRam0000000113829e78 = uVar2;
      ___cxa_guard_release(0x113829e80);
    }
  }
  return uRam0000000113829e78;
}



/* Entry: 1094e9d2c; end: 1094ea443;  */

undefined *** FUN_1094e9d2c(undefined ***param_1)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined ***apppuStack_60 [2];
  char cStack_49;
  undefined **ppuStack_48;
  code *pcStack_40;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[1] = (undefined **)0x0;
  *param_1 = (undefined **)0x0;
  param_1[3] = (undefined **)0x0;
  param_1[2] = (undefined **)0x0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  func_0x000107c31940(apppuStack_60,&UNK_10f5702f4);
  pppuVar1 = param_1;
  FUN_1094ea544(param_1,apppuStack_60,apppuStack_60);
  ppuStack_48 = &PTR_FUN_110af8378;
  pcStack_40 = (code *)0x1094ea500;
  pppuStack_30 = &ppuStack_48;
  FUN_1094eaa38(&ppuStack_48,pppuVar1 + 5);
  if (pppuStack_30 == &ppuStack_48) {
    lVar3 = 0x20;
LAB_1094e9dc8:
    (**(code **)((long)*pppuStack_30 + lVar3))();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar3 = 0x28;
    goto LAB_1094e9dc8;
  }
  if (cStack_49 < '\0') {
    __ZdlPv(apppuStack_60[0]);
  }
  func_0x000107c31940(apppuStack_60,&UNK_10f57030a);
  pppuVar1 = param_1;
  FUN_1094ea544(param_1,apppuStack_60,apppuStack_60);
  ppuStack_48 = &PTR_FUN_110af8428;
  pcStack_40 = FUN_1094eaba4;
  pppuStack_30 = &ppuStack_48;
  FUN_1094eaa38(&ppuStack_48,pppuVar1 + 5);
  if (pppuStack_30 == &ppuStack_48) {
    lVar3 = 0x20;
LAB_1094e9e4c:
    (**(code **)((long)*pppuStack_30 + lVar3))();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar3 = 0x28;
    goto LAB_1094e9e4c;
  }
  if (cStack_49 < '\0') {
    __ZdlPv(apppuStack_60[0]);
  }
  func_0x000107c31940(apppuStack_60,&UNK_10f570321);
  pppuVar1 = param_1;
  FUN_1094ea544(param_1,apppuStack_60,apppuStack_60);
  ppuStack_48 = &PTR_FUN_110af84c8;
  pcStack_40 = FUN_1094eacd4;
  pppuStack_30 = &ppuStack_48;
  FUN_1094eaa38(&ppuStack_48,pppuVar1 + 5);
  if (pppuStack_30 == &ppuStack_48) {
    lVar3 = 0x20;
LAB_1094e9ed0:
    (**(code **)((long)*pppuStack_30 + lVar3))();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar3 = 0x28;
    goto LAB_1094e9ed0;
  }
  if (cStack_49 < '\0') {
    __ZdlPv(apppuStack_60[0]);
  }
  func_0x000107c31940(apppuStack_60,&UNK_10f570340);
  pppuVar1 = param_1;
  FUN_1094ea544(param_1,apppuStack_60,apppuStack_60);
  ppuStack_48 = &PTR_FUN_110af8568;
  pcStack_40 = FUN_1094eade4;
  pppuStack_30 = &ppuStack_48;
  FUN_1094eaa38(&ppuStack_48,pppuVar1 + 5);
  if (pppuStack_30 == &ppuStack_48) {
    lVar3 = 0x20;
LAB_1094e9f54:
    (**(code **)((long)*pppuStack_30 + lVar3))();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar3 = 0x28;
    goto LAB_1094e9f54;
  }
  if (cStack_49 < '\0') {
    __ZdlPv(apppuStack_60[0]);
  }
  func_0x000107c31940(apppuStack_60,&UNK_10f570365);
  pppuVar1 = param_1;
  FUN_1094ea544(param_1,apppuStack_60,apppuStack_60);
  ppuStack_48 = &PTR_FUN_110af8608;
  pcStack_40 = FUN_1094eaecc;
  pppuStack_30 = &ppuStack_48;
  FUN_1094eaa38(&ppuStack_48,pppuVar1 + 5);
  if (pppuStack_30 == &ppuStack_48) {
    lVar3 = 0x20;
LAB_1094e9fd8:
    (**(code **)((long)*pppuStack_30 + lVar3))();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar3 = 0x28;
    goto LAB_1094e9fd8;
  }
  if (cStack_49 < '\0') {
    __ZdlPv(apppuStack_60[0]);
  }
  func_0x000107c31940(apppuStack_60,&UNK_10f570378);
  pppuVar1 = param_1;
  FUN_1094ea544(param_1,apppuStack_60,apppuStack_60);
  ppuStack_48 = &PTR_FUN_110af86a8;
  pcStack_40 = FUN_1094eafd4;
  pppuStack_30 = &ppuStack_48;
  FUN_1094eaa38(&ppuStack_48,pppuVar1 + 5);
  if (pppuStack_30 == &ppuStack_48) {
    lVar3 = 0x20;
LAB_1094ea05c:
    (**(code **)((long)*pppuStack_30 + lVar3))();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar3 = 0x28;
    goto LAB_1094ea05c;
  }
  if (cStack_49 < '\0') {
    __ZdlPv(apppuStack_60[0]);
  }
  func_0x000107c31940(apppuStack_60,&UNK_10f570386);
  pppuVar1 = param_1;
  FUN_1094ea544(param_1,apppuStack_60,apppuStack_60);
  ppuStack_48 = &PTR_FUN_110af8748;
  pcStack_40 = FUN_1094eb0d0;
  pppuStack_30 = &ppuStack_48;
  FUN_1094eaa38(&ppuStack_48,pppuVar1 + 5);
  if (pppuStack_30 == &ppuStack_48) {
    lVar3 = 0x20;
LAB_1094ea0e0:
    (**(code **)((long)*pppuStack_30 + lVar3))();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar3 = 0x28;
    goto LAB_1094ea0e0;
  }
  if (cStack_49 < '\0') {
    __ZdlPv(apppuStack_60[0]);
  }
  func_0x000107c31940(apppuStack_60,&UNK_10f570396);
  pppuVar1 = param_1;
  FUN_1094ea544(param_1,apppuStack_60,apppuStack_60);
  ppuStack_48 = &PTR_FUN_110af87e8;
  pcStack_40 = FUN_1094eb1cc;
  pppuStack_30 = &ppuStack_48;
  FUN_1094eaa38(&ppuStack_48,pppuVar1 + 5);
  if (pppuStack_30 == &ppuStack_48) {
    lVar3 = 0x20;
LAB_1094ea164:
    (**(code **)((long)*pppuStack_30 + lVar3))();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar3 = 0x28;
    goto LAB_1094ea164;
  }
  if (cStack_49 < '\0') {
    __ZdlPv(apppuStack_60[0]);
  }
  func_0x000107c31940(apppuStack_60,&UNK_10f5703af);
  pppuVar1 = param_1;
  FUN_1094ea544(param_1,apppuStack_60,apppuStack_60);
  ppuStack_48 = &PTR_FUN_110af8888;
  pcStack_40 = FUN_1094eb2dc;
  pppuStack_30 = &ppuStack_48;
  FUN_1094eaa38(&ppuStack_48,pppuVar1 + 5);
  if (pppuStack_30 == &ppuStack_48) {
    lVar3 = 0x20;
LAB_1094ea1e8:
    (**(code **)((long)*pppuStack_30 + lVar3))();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar3 = 0x28;
    goto LAB_1094ea1e8;
  }
  if (cStack_49 < '\0') {
    __ZdlPv(apppuStack_60[0]);
  }
  func_0x000107c31940(apppuStack_60,&UNK_10f5703c2);
  pppuVar1 = param_1;
  FUN_1094ea544(param_1,apppuStack_60,apppuStack_60);
  ppuStack_48 = &PTR_FUN_110af8928;
  pcStack_40 = FUN_1094eb404;
  pppuStack_30 = &ppuStack_48;
  FUN_1094eaa38(&ppuStack_48,pppuVar1 + 5);
  if (pppuStack_30 == &ppuStack_48) {
    lVar3 = 0x20;
LAB_1094ea26c:
    (**(code **)((long)*pppuStack_30 + lVar3))();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar3 = 0x28;
    goto LAB_1094ea26c;
  }
  if (cStack_49 < '\0') {
    __ZdlPv(apppuStack_60[0]);
  }
  func_0x000107c31940(apppuStack_60,&UNK_10f5703d7);
  pppuVar1 = param_1;
  FUN_1094ea544(param_1,apppuStack_60,apppuStack_60);
  ppuStack_48 = &PTR_FUN_110af89c8;
  pcStack_40 = FUN_1094eb500;
  pppuStack_30 = &ppuStack_48;
  FUN_1094eaa38(&ppuStack_48,pppuVar1 + 5);
  if (pppuStack_30 == &ppuStack_48) {
    lVar3 = 0x20;
LAB_1094ea2f0:
    (**(code **)((long)*pppuStack_30 + lVar3))();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar3 = 0x28;
    goto LAB_1094ea2f0;
  }
  if (cStack_49 < '\0') {
    __ZdlPv(apppuStack_60[0]);
  }
  func_0x000107c31940(apppuStack_60,&UNK_10f5703f1);
  pppuVar1 = param_1;
  FUN_1094ea544(param_1,apppuStack_60,apppuStack_60);
  ppuStack_48 = &PTR_FUN_110af8a68;
  pcStack_40 = FUN_1094eb5f0;
  pppuStack_30 = &ppuStack_48;
  FUN_1094eaa38(&ppuStack_48,pppuVar1 + 5);
  pppuVar1 = pppuStack_30;
  if (pppuStack_30 == &ppuStack_48) {
    lVar3 = 0x20;
  }
  else {
    if (pppuStack_30 == (undefined ***)0x0) goto LAB_1094ea380;
    lVar3 = 0x28;
  }
  (**(code **)((long)*pppuStack_30 + lVar3))();
LAB_1094ea380:
  if (cStack_49 < '\0') {
    pppuVar1 = apppuStack_60[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    if (cStack_49 < '\0') {
      __ZdlPv(apppuStack_60[0]);
    }
    FUN_1094ea444(param_1);
    __Unwind_Resume();
    ppuVar2 = pppuVar1[2];
    while (ppuVar2 != (undefined **)0x0) {
      ppuVar4 = (undefined **)*ppuVar2;
      FUN_1094ea4a0(ppuVar2 + 2);
      __ZdlPv(ppuVar2);
      ppuVar2 = ppuVar4;
    }
    ppuVar2 = *pppuVar1;
    *pppuVar1 = (undefined **)0x0;
    if (ppuVar2 != (undefined **)0x0) {
      __ZdlPv();
    }
    return pppuVar1;
  }
  return param_1;
}



/* Entry: 1094ea444; end: 1094ea49f;  */

long * FUN_1094ea444(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_1094ea4a0(plVar1 + 2);
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



/* Entry: 1094ea4a0; end: 1094ea543;  */

void FUN_1094ea4a0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[6];
  if (plVar1 == param_1 + 3) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_1094ea4dc;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_1094ea4dc:
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 1094ea544; end: 1094ea947;  */

long * FUN_1094ea544(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x25;
  ulong uVar14;
  
  plVar8 = param_1;
  func_0x000107c31944();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar14 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar14) == 0) {
      unaff_x25 = (long *)(uVar14 & (ulong)plVar8);
    }
    else {
      unaff_x25 = plVar8;
      if (plVar13 <= plVar8) {
        uVar1 = 0;
        if (plVar13 != (long *)0x0) {
          uVar1 = (ulong)plVar8 / (ulong)plVar13;
        }
        unaff_x25 = (long *)((long)plVar8 - uVar1 * (long)plVar13);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        plVar6 = (long *)plVar5[1];
        if (plVar6 == plVar8) {
          plVar6 = param_1;
          func_0x000104c4fbc4(param_1,plVar5 + 2,param_2);
          if (((ulong)plVar6 & 1) != 0) {
            return plVar5;
          }
        }
        else {
          if (((ulong)plVar13 & uVar14) == 0) {
            plVar6 = (long *)((ulong)plVar6 & uVar14);
          }
          else if (plVar13 <= plVar6) {
            uVar1 = 0;
            if (plVar13 != (long *)0x0) {
              uVar1 = (ulong)plVar6 / (ulong)plVar13;
            }
            plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar13);
          }
          if (plVar6 != unaff_x25) break;
        }
      }
    }
  }
  plVar5 = (long *)0x48;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = (long)plVar8;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar5 + 2,*param_3,param_3[1]);
  }
  else {
    lVar3 = *param_3;
    plVar5[3] = param_3[1];
    plVar5[2] = lVar3;
    plVar5[4] = param_3[2];
  }
  plVar5[8] = 0;
  if ((plVar13 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar13)) goto LAB_1094ea858;
  uVar14 = 1;
  if ((long *)0x2 < plVar13) {
    uVar14 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
  }
  plVar6 = (long *)(uVar14 | (long)plVar13 << 1);
  plVar13 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar6 <= plVar13) {
    plVar6 = plVar13;
  }
  if ((long)plVar6 - 1U == 0) {
    plVar6 = (long *)0x2;
  }
  else if (((ulong)plVar6 & (long)plVar6 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar13 = (long *)param_1[1];
  if (plVar13 < plVar6) {
LAB_1094ea6e0:
    if ((ulong)plVar6 >> 0x3d != 0) {
      func_0x000104c4f740();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1094ea930);
      (*pcVar2)();
    }
    lVar3 = (long)plVar6 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar13 = (long *)0x0;
    param_1[1] = (long)plVar6;
    do {
      *(undefined8 *)(*param_1 + (long)plVar13 * 8) = 0;
      plVar13 = (long *)((long)plVar13 + 1);
    } while (plVar6 != plVar13);
    plVar7 = (long *)param_1[2];
    plVar13 = plVar6;
    if (plVar7 != (long *)0x0) {
      plVar9 = (long *)plVar7[1];
      uVar14 = (long)plVar6 - 1;
      if (((ulong)plVar6 & uVar14) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar14);
      }
      else if (plVar6 <= plVar9) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)plVar6;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)plVar6);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar7;
      while (plVar10 != (long *)0x0) {
        plVar12 = (long *)plVar10[1];
        if (((ulong)plVar6 & uVar14) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar14);
        }
        else if (plVar6 <= plVar12) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)plVar12 / (ulong)plVar6;
          }
          plVar12 = (long *)((long)plVar12 - uVar1 * (long)plVar6);
        }
        plVar11 = plVar10;
        if (plVar12 != plVar9) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar12 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar12 * 8) = plVar7;
            plVar9 = plVar12;
          }
          else {
            *plVar7 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)plVar12 * 8);
            **(long **)(lVar3 + (long)plVar12 * 8) = (long)plVar10;
            plVar11 = plVar7;
          }
        }
        plVar7 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  else if (plVar6 < plVar13) {
    plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar7) {
      plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
    }
    if (plVar6 <= plVar7) {
      plVar6 = plVar7;
    }
    if (plVar6 < plVar13) {
      if (plVar6 != (long *)0x0) goto LAB_1094ea6e0;
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar13 - 1U & (ulong)plVar8);
  }
  else {
    unaff_x25 = plVar8;
    if (plVar13 <= plVar8) {
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar8 / (ulong)plVar13;
      }
      unaff_x25 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
    }
  }
LAB_1094ea858:
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar8;
    if (*plVar5 != 0) {
      plVar8 = *(long **)(*plVar5 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar8) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar8 / (ulong)plVar13;
        }
        plVar8 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
      }
      *(long **)(*param_1 + (long)plVar8 * 8) = plVar5;
    }
  }
  else {
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
  }
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 1094ea948; end: 1094ea98f;  */

void FUN_1094ea948(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_1094ea4a0(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1094ea990; end: 1094ea997;  */

void FUN_1094ea990(void)

{
  return;
}



/* Entry: 1094ea998; end: 1094ea9cb;  */

void FUN_1094ea998(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110af8378;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1094ea9cc; end: 1094ea9ef;  */

void FUN_1094ea9cc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110af8378;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1094ea9f0; end: 1094eaa2b;  */

long FUN_1094ea9f0(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110af83f8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1094eaa2c; end: 1094eaa37;  */

undefined ** FUN_1094eaa2c(void)

{
  return &PTR_DAT_110af83f8;
}



/* Entry: 1094eaa38; end: 1094eaba3;  */

void FUN_1094eaa38(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *extraout_x8;
  long alStack_40 [3];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_2;
  if (param_2 != param_1) {
    plVar1 = (long *)param_1[3];
    plVar5 = (long *)param_2[3];
    if (plVar1 == param_1) {
      if (plVar5 == param_2) {
        (**(code **)(*plVar1 + 0x18))(plVar1,alStack_40);
        (**(code **)(*(long *)param_1[3] + 0x20))();
        param_1[3] = 0;
        (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
        (**(code **)(*(long *)param_2[3] + 0x20))();
        param_2[3] = 0;
        param_1[3] = (long)param_1;
        (**(code **)(alStack_40[0] + 0x18))(alStack_40);
        (**(code **)(alStack_40[0] + 0x20))(alStack_40);
      }
      else {
        (**(code **)(*plVar1 + 0x18))();
        (**(code **)(*(long *)param_1[3] + 0x20))();
        param_1[3] = param_2[3];
      }
      param_2[3] = (long)param_2;
    }
    else if (plVar5 == param_2) {
      plVar4 = param_1;
      (**(code **)(*plVar5 + 0x18))(plVar5);
      (**(code **)(*(long *)param_2[3] + 0x20))();
      param_2[3] = param_1[3];
      param_1[3] = (long)param_1;
    }
    else {
      param_1[3] = (long)plVar5;
      param_2[3] = (long)plVar1;
    }
  }
  iVar3 = (int)plVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  puVar2 = (undefined8 *)0x98;
  __Znwm();
  puVar2[0x12] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[0xf] = 0;
  puVar2[0xe] = 0;
  puVar2[0x11] = 0;
  puVar2[0x10] = 0;
  *puVar2 = &PTR_FUN_110af8e38;
  *(undefined4 *)(puVar2 + 0x12) = 0x3f800000;
  *extraout_x8 = puVar2;
  return;
}


