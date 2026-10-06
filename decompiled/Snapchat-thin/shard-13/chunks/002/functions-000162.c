/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a2920f4; end: 10a2921c3;  */

void FUN_10a2920f4(long *param_1,long *param_2,long *param_3)

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
    if (param_3 != (long *)0x0) goto LAB_10a29211c;
LAB_10a292158:
    plVar5 = param_1 + 2;
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    *(long **)(*param_1 + uVar2 * 8) = plVar5;
    if (*param_2 == 0) goto LAB_10a2921b4;
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
    if (param_3 == (long *)0x0) goto LAB_10a292158;
LAB_10a29211c:
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 == 0) goto LAB_10a2921b4;
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
    if (uVar4 == uVar2) goto LAB_10a2921b4;
  }
  *(long **)(*param_1 + uVar4 * 8) = param_2;
LAB_10a2921b4:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a2921c4; end: 10a292293;  */

void FUN_10a2921c4(long *param_1,ulong param_2)

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
      if (param_2 < uVar7) goto LAB_10a29220c;
    }
    return;
  }
LAB_10a29220c:
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
      func_0x000109ffded8();
      pcStack_58 = FUN_10a29241c;
      uStack_70 = param_2;
      plStack_68 = param_1;
      puStack_60 = &stack0xfffffffffffffff0;
      FUN_10a29246c(auStack_88);
      FUN_10a2917d8(plVar8,auStack_88[0]);
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
                plVar4 = plVar8 + 2;
                FUN_10a22f138(plVar4,lVar3 + 0x10);
                plVar5 = (long *)*plVar6;
                if ((int)plVar4 == 0) goto LAB_10a2923f8;
                lVar3 = *plVar5;
                plVar6 = plVar5;
              } while (lVar3 != 0);
              plVar5 = (long *)0x0;
LAB_10a2923f8:
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



/* Entry: 10a292294; end: 10a29241b;  */

void FUN_10a292294(long *param_1,ulong param_2)

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
      func_0x000109ffded8();
      pcStack_58 = FUN_10a29241c;
      uStack_70 = param_2;
      plStack_68 = param_1;
      puStack_60 = &stack0xfffffffffffffff0;
      FUN_10a29246c(auStack_88);
      FUN_10a2917d8(plVar8,auStack_88[0]);
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
                plVar4 = plVar8 + 2;
                FUN_10a22f138(plVar4,lVar3 + 0x10);
                plVar6 = (long *)*plVar7;
                if ((int)plVar4 == 0) goto LAB_10a2923f8;
                lVar3 = *plVar6;
                plVar7 = plVar6;
              } while (lVar3 != 0);
              plVar6 = (long *)0x0;
LAB_10a2923f8:
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



/* Entry: 10a29241c; end: 10a29246b;  */

void FUN_10a29241c(undefined8 param_1)

{
  undefined8 auStack_38 [3];
  
  FUN_10a29246c(auStack_38);
  FUN_10a2917d8(param_1,auStack_38[0]);
  return;
}



/* Entry: 10a29246c; end: 10a2924ef;  */

void FUN_10a29246c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 uStack_31;
  
  puVar1 = (undefined8 *)0xa8;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_10a22f1a4(puVar1 + 2,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  puVar2 = &uStack_31;
  func_0x000107c2b05c(puVar2,puVar1 + 6);
  puVar1[1] = puVar2;
  return;
}



/* Entry: 10a2924f0; end: 10a29254f;  */

undefined8 * FUN_10a2924f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb7968;
  func_0x00010a22fc28(param_1 + 2);
  return param_1;
}



/* Entry: 10a292550; end: 10a29269b;  */

void FUN_10a292550(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_b8 [40];
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a2311c0(auStack_b8,param_1 + 0x10);
  lVar9 = 1;
  plVar2 = param_2;
  func_0x0001098ac018(param_2,&UNK_10e4a698d,0x1d,auStack_b8,0);
  lVar10 = *param_2;
  lStack_90 = 0;
  lStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = CONCAT44(uStack_78._4_4_,(int)plVar2);
  puVar7 = (undefined4 *)((long)&uStack_78 + 4);
  lVar8 = 1;
  FUN_10a26ebc0(&lStack_90,0,&uStack_78);
  uStack_68 = *(undefined8 *)(param_1 + 8);
  uStack_78 = 0x10a29269c;
  ppuStack_70 = &PTR_FUN_110bb7998;
  puVar6 = &uStack_78;
  func_0x0001098bb6d0(lVar10 + 0x18,puVar6,&lStack_90);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  puVar3 = auStack_b8;
  func_0x00010a22fc28();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  func_0x00010a22fc28(auStack_b8);
  puVar4 = puVar3;
  __Unwind_Resume();
  if (lVar8 != 0) {
    ppuVar5 = &puStack_f0;
    uStack_c8 = 0x10a29269c;
    puStack_f0 = puVar4;
    puStack_e8 = puVar6;
    puStack_e0 = &uStack_78;
    puStack_d8 = puVar3;
    puStack_d0 = &stack0xfffffffffffffff0;
    func_0x00010a2926e4(&puStack_f0,*puVar7);
    *(undefined1 ***)(*(long *)(lVar9 + 0x10) + 8) = ppuVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2926e4);
  (*pcVar1)();
}



/* Entry: 10a29269c; end: 10a2927c3;  */

void FUN_10a29269c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  long param_5,long param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_5 != 0) {
    puVar2 = &uStack_30;
    uStack_30 = param_1;
    uStack_28 = param_2;
    func_0x00010a2926e4(&uStack_30,*param_4);
    *(undefined8 **)(*(long *)(param_6 + 0x10) + 8) = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2926e4);
  (*pcVar1)();
}



/* Entry: 10a2927c4; end: 10a2927df;  */

void FUN_10a2927c4(void)

{
  return;
}



/* Entry: 10a2927e0; end: 10a29283f;  */

uint FUN_10a2927e0(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(*(byte *)(param_1 + 0x28) != *(byte *)(param_2 + 0x28));
  if ((*(byte *)(param_2 + 0x28) & *(byte *)(param_1 + 0x28)) != 0) {
    if (*(long *)(param_1 + 0x18) == 0 || *(long *)(param_2 + 0x18) == 0) {
      uVar1 = (uint)((*(long *)(param_1 + 0x18) == 0) != (*(long *)(param_2 + 0x18) == 0));
    }
    else {
      FUN_10a28f080();
      uVar1 = (uint)param_1 ^ 1;
    }
  }
  return uVar1;
}



/* Entry: 10a292840; end: 10a29289f;  */

long FUN_10a292840(long param_1,long param_2)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    if (param_1 != param_2) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
      FUN_10a292928(param_1,*(undefined8 *)(param_2 + 0x10),0);
    }
  }
  else {
    FUN_10a22dff8(param_1);
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  return param_1;
}



/* Entry: 10a2928a0; end: 10a292927;  */

void FUN_10a2928a0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  
  if ((*(byte *)(param_2 + 0x30) & 1) != 0) {
    FUN_10a22dff8(auStack_58,param_2 + 8);
    puVar2 = (undefined8 *)0x38;
    __Znwm();
    *puVar2 = &PTR_FUN_110bb79c0;
    puVar2[1] = param_3;
    FUN_10a231018(puVar2 + 2,auStack_58);
    *param_1 = puVar2;
    func_0x00010a22eba0(auStack_58);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a292914);
  (*pcVar1)();
}



/* Entry: 10a292928; end: 10a292a33;  */

void FUN_10a292928(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plStack_50;
  long *plStack_48;
  
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
        plStack_50 = plVar4 + 2;
        plStack_48 = plVar4 + 5;
        FUN_10a292a84(&plStack_50,param_2 + 2);
        plVar3 = (long *)*plVar4;
        FUN_10a292a34(param_1,plVar4);
        param_2 = (long *)*param_2;
        plVar4 = plVar3;
      } while (plVar3 != (long *)0x0 && param_2 != param_3);
    }
    func_0x00010a22ebd8(param_1,plVar3);
  }
  for (; param_2 != param_3; param_2 = (long *)*param_2) {
    FUN_10a2932e4(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 10a292a34; end: 10a292a83;  */

long FUN_10a292a34(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x000107c2b05c(param_1,param_2 + 0x10);
  *(undefined8 *)(param_2 + 8) = uVar1;
  uVar2 = param_1;
  FUN_10a292e60(param_1,uVar1,param_2 + 0x10);
  FUN_10a292fb8(param_1,param_2,uVar2);
  return param_2;
}



/* Entry: 10a292a84; end: 10a292b23;  */

undefined8 * FUN_10a292a84(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(*param_1);
  lVar2 = param_1[1];
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar2,param_2 + 0x18);
  uVar1 = *(undefined1 *)(param_2 + 0x34);
  *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(param_2 + 0x30);
  *(undefined1 *)(lVar2 + 0x1c) = uVar1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar2 + 0x20,param_2 + 0x38);
  uVar4 = *(undefined8 *)(param_2 + 0x66);
  uVar3 = *(undefined8 *)(param_2 + 0x5e);
  uVar5 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(lVar2 + 0x38) = uVar5;
  *(undefined8 *)(lVar2 + 0x4e) = uVar4;
  *(undefined8 *)(lVar2 + 0x46) = uVar3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar2 + 0x58,param_2 + 0x70);
  uVar3 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(lVar2 + 0x70) = uVar3;
  if (lVar2 != param_2 + 0x18) {
    FUN_10a292b24(lVar2 + 0x80,*(undefined8 *)(param_2 + 0x98),param_2 + 0xa0);
  }
  return param_1;
}



/* Entry: 10a292b24; end: 10a292ccb;  */

void FUN_10a292b24(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  if (param_1[2] != 0) {
    lVar3 = *param_1;
    plVar2 = param_1 + 1;
    *param_1 = (long)plVar2;
    *(undefined8 *)(*plVar2 + 0x10) = 0;
    *plVar2 = 0;
    param_1[2] = 0;
    lVar4 = *(long *)(lVar3 + 8);
    if (lVar4 != 0) {
      lVar3 = lVar4;
    }
    plStack_60 = param_1;
    lStack_58 = lVar3;
    lStack_50 = lVar3;
    if ((lVar3 != 0) && (lVar4 = lVar3, FUN_10a292d40(), lStack_58 = lVar4, param_2 != param_3)) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (lVar3 + 0x20,param_2 + 4);
        lVar4 = lStack_50;
        lVar6 = param_2[7];
        *(long *)(lVar3 + 0x40) = param_2[8];
        *(long *)(lVar3 + 0x38) = lVar6;
        lVar7 = param_2[10];
        lVar6 = param_2[9];
        lVar9 = param_2[0xc];
        lVar8 = param_2[0xb];
        lVar11 = param_2[0xe];
        lVar10 = param_2[0xd];
        lVar12 = param_2[0xf];
        *(long *)(lVar3 + 0x80) = param_2[0x10];
        *(long *)(lVar3 + 0x78) = lVar12;
        *(long *)(lVar3 + 0x70) = lVar11;
        *(long *)(lVar3 + 0x68) = lVar10;
        *(long *)(lVar3 + 0x60) = lVar9;
        *(long *)(lVar3 + 0x58) = lVar8;
        *(long *)(lVar3 + 0x50) = lVar7;
        *(long *)(lVar3 + 0x48) = lVar6;
        plVar2 = param_1;
        FUN_10a292ccc(param_1,&uStack_48,lStack_50 + 0x20);
        FUN_10a22ea44(param_1,uStack_48,plVar2,lVar4);
        lStack_50 = lStack_58;
        if (lStack_58 != 0) {
          FUN_10a292d40();
        }
        plVar2 = (long *)param_2[1];
        plVar5 = param_2;
        if ((long *)param_2[1] == (long *)0x0) {
          do {
            param_2 = (long *)plVar5[2];
            bVar1 = (long *)*param_2 != plVar5;
            plVar5 = param_2;
          } while (bVar1);
        }
        else {
          do {
            param_2 = plVar2;
            plVar2 = (long *)*param_2;
          } while ((long *)*param_2 != (long *)0x0);
        }
        lVar3 = lStack_50;
      } while (lStack_50 != 0 && param_2 != param_3);
    }
    FUN_10a292d94(&plStack_60);
  }
  while (param_2 != param_3) {
    FUN_10a292de8(param_1,param_2 + 4);
    plVar2 = (long *)param_2[1];
    plVar5 = param_2;
    if ((long *)param_2[1] == (long *)0x0) {
      do {
        param_2 = (long *)plVar5[2];
        bVar1 = (long *)*param_2 != plVar5;
        plVar5 = param_2;
      } while (bVar1);
    }
    else {
      do {
        param_2 = plVar2;
        plVar2 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10a292ccc; end: 10a292d3f;  */

long * FUN_10a292ccc(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = (long *)(param_1 + 8);
  plVar3 = plVar4;
  plVar1 = (long *)*plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    do {
      while (plVar4 = plVar1, uVar2 = param_3, FUN_10a003e3c(param_3,plVar4 + 4),
            ((uint)uVar2 >> 7 & 1) != 0) {
        plVar3 = plVar4;
        plVar1 = (long *)*plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_10a292d2c;
      }
      plVar1 = (long *)plVar4[1];
    } while ((long *)plVar4[1] != (long *)0x0);
    plVar3 = plVar4 + 1;
  }
LAB_10a292d2c:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 10a292d40; end: 10a292d93;  */

void FUN_10a292d40(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)param_1[2];
  if (plVar1 != (long *)0x0) {
    plVar2 = (long *)*plVar1;
    if (plVar2 == param_1) {
      *plVar1 = 0;
      while (plVar2 = (long *)plVar1[1], (long *)plVar1[1] != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while ((long *)*plVar1 != (long *)0x0);
      }
    }
    else {
      plVar1[1] = 0;
      while (plVar2 != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while (plVar2 != (long *)0x0);
        plVar2 = (long *)plVar1[1];
      }
    }
  }
  return;
}



/* Entry: 10a292d94; end: 10a292de7;  */

undefined8 * FUN_10a292d94(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_10a1f3f34(*param_1,param_1[2]);
  if (param_1[1] != 0) {
    lVar1 = *(long *)(param_1[1] + 0x10);
    if (lVar1 != 0) {
      do {
        lVar2 = lVar1;
        lVar1 = *(long *)(lVar2 + 0x10);
      } while (lVar1 != 0);
      param_1[1] = lVar2;
    }
    FUN_10a1f3f34(*param_1);
  }
  return param_1;
}



/* Entry: 10a292de8; end: 10a292e5f;  */

long FUN_10a292de8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  long alStack_38 [3];
  
  FUN_10a22e980(alStack_38);
  uVar1 = param_1;
  FUN_10a292ccc(param_1,&uStack_40,alStack_38[0] + 0x20);
  FUN_10a22ea44(param_1,uStack_40,uVar1,alStack_38[0]);
  return alStack_38[0];
}



/* Entry: 10a292e60; end: 10a292fb7;  */

long * FUN_10a292e60(long *param_1,ulong param_2,undefined8 param_3)

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
    FUN_10a293088(param_1,uVar5);
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
        func_0x000107c2b068(param_1,lVar6 + 0x10,param_3);
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



/* Entry: 10a292fb8; end: 10a293087;  */

void FUN_10a292fb8(long *param_1,long *param_2,long *param_3)

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
    if (param_3 != (long *)0x0) goto LAB_10a292fe0;
LAB_10a29301c:
    plVar5 = param_1 + 2;
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    *(long **)(*param_1 + uVar2 * 8) = plVar5;
    if (*param_2 == 0) goto LAB_10a293078;
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
    if (param_3 == (long *)0x0) goto LAB_10a29301c;
LAB_10a292fe0:
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 == 0) goto LAB_10a293078;
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
    if (uVar4 == uVar2) goto LAB_10a293078;
  }
  *(long **)(*param_1 + uVar4 * 8) = param_2;
LAB_10a293078:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a293088; end: 10a293157;  */

void FUN_10a293088(long *param_1,ulong param_2)

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
      if (param_2 < uVar7) goto LAB_10a2930d0;
    }
    return;
  }
LAB_10a2930d0:
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
      func_0x000109ffded8();
      pcStack_58 = FUN_10a2932e4;
      uStack_70 = param_2;
      plStack_68 = param_1;
      puStack_60 = &stack0xfffffffffffffff0;
      FUN_10a293334(auStack_88);
      FUN_10a292a34(plVar8,auStack_88[0]);
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
                func_0x000107c2b068(param_1,plVar8 + 2,lVar3 + 0x10);
                plVar5 = (long *)*plVar6;
                if ((int)plVar4 == 0) goto LAB_10a2932c0;
                lVar3 = *plVar5;
                plVar6 = plVar5;
              } while (lVar3 != 0);
              plVar5 = (long *)0x0;
LAB_10a2932c0:
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



/* Entry: 10a293158; end: 10a2932e3;  */

void FUN_10a293158(long *param_1,ulong param_2)

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
      func_0x000109ffded8();
      pcStack_58 = FUN_10a2932e4;
      uStack_70 = param_2;
      plStack_68 = param_1;
      puStack_60 = &stack0xfffffffffffffff0;
      FUN_10a293334(auStack_88);
      FUN_10a292a34(plVar8,auStack_88[0]);
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
                func_0x000107c2b068(param_1,plVar8 + 2,lVar3 + 0x10);
                plVar6 = (long *)*plVar7;
                if ((int)plVar4 == 0) goto LAB_10a2932c0;
                lVar3 = *plVar6;
                plVar7 = plVar6;
              } while (lVar3 != 0);
              plVar6 = (long *)0x0;
LAB_10a2932c0:
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



/* Entry: 10a2932e4; end: 10a293333;  */

void FUN_10a2932e4(undefined8 param_1)

{
  undefined8 auStack_38 [3];
  
  FUN_10a293334(auStack_38);
  FUN_10a292a34(param_1,auStack_38[0]);
  return;
}



/* Entry: 10a293334; end: 10a2933af;  */

void FUN_10a293334(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xc0;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_10a22e518(puVar1 + 2,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  func_0x000107c2b05c(param_2,puVar1 + 2);
  puVar1[1] = param_2;
  return;
}



/* Entry: 10a2933b0; end: 10a29340f;  */

undefined8 * FUN_10a2933b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb79c0;
  func_0x00010a22eba0(param_1 + 2);
  return param_1;
}



/* Entry: 10a293410; end: 10a29355b;  */

void FUN_10a293410(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_b8 [40];
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a231018(auStack_b8,param_1 + 0x10);
  lVar9 = 1;
  plVar2 = param_2;
  func_0x0001098ac018(param_2,&UNK_10e4a6e3c,0x2c,auStack_b8,0);
  lVar10 = *param_2;
  lStack_90 = 0;
  lStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = CONCAT44(uStack_78._4_4_,(int)plVar2);
  puVar7 = (undefined4 *)((long)&uStack_78 + 4);
  lVar8 = 1;
  FUN_10a26ebc0(&lStack_90,0,&uStack_78);
  uStack_68 = *(undefined8 *)(param_1 + 8);
  uStack_78 = 0x10a29355c;
  ppuStack_70 = &PTR_FUN_110bb79f0;
  puVar6 = &uStack_78;
  func_0x0001098bb6d0(lVar10 + 0x18,puVar6,&lStack_90);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  puVar3 = auStack_b8;
  func_0x00010a22eba0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  func_0x00010a22eba0(auStack_b8);
  puVar4 = puVar3;
  __Unwind_Resume();
  if (lVar8 != 0) {
    ppuVar5 = &puStack_f0;
    uStack_c8 = 0x10a29355c;
    puStack_f0 = puVar4;
    puStack_e8 = puVar6;
    puStack_e0 = &uStack_78;
    puStack_d8 = puVar3;
    puStack_d0 = &stack0xfffffffffffffff0;
    func_0x00010a2935a4(&puStack_f0,*puVar7);
    *(undefined1 ***)(*(long *)(lVar9 + 0x10) + 0x18) = ppuVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2935a4);
  (*pcVar1)();
}



/* Entry: 10a29355c; end: 10a2937bf;  */

void FUN_10a29355c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  long param_5,long param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_5 != 0) {
    puVar2 = &uStack_30;
    uStack_30 = param_1;
    uStack_28 = param_2;
    func_0x00010a2935a4(&uStack_30,*param_4);
    *(undefined8 **)(*(long *)(param_6 + 0x10) + 0x18) = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2935a4);
  (*pcVar1)();
}



/* Entry: 10a2937c0; end: 10a29380f;  */

void FUN_10a2937c0(void)

{
  return;
}



/* Entry: 10a293810; end: 10a29389f;  */

void FUN_10a293810(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_1;
  uStack_28 = param_2;
  func_0x00010a2894c0(&uStack_30,0);
  func_0x00010a29384c();
  return;
}



/* Entry: 10a2938a0; end: 10a2938c3;  */

void FUN_10a2938a0(void)

{
  return;
}



/* Entry: 10a2938c4; end: 10a2939b3;  */

void FUN_10a2938c4(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    if (*(long *)(param_2 + 0x10) != 0) {
      *(long *)(param_2 + 0x18) = *(long *)(param_2 + 0x10);
      __ZdlPv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10a2939b4; end: 10a2939c3;  */

void FUN_10a2939b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb7a18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a2939c4; end: 10a2939e3;  */

void FUN_10a2939c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb7a18;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2939e4; end: 10a293a2b;  */

long FUN_10a2939e4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a235404(param_1 + 0x70);
  func_0x00010a2355e8(param_1 + 0x60);
  func_0x00010a23495c(param_1 + 0x48);
  func_0x00010a235590(param_1 + 0x38);
  func_0x00010a235538(param_1 + 0x28);
  plVar5 = *(long **)(param_1 + 0x20);
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
  return param_1 + 0x18;
}



/* Entry: 10a293a2c; end: 10a293a2f;  */

void FUN_10a293a2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a293a30; end: 10a293adb;  */

void FUN_10a293a30(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a2856fc(lVar1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a293adc; end: 10a293bbf;  */

/* WARNING: Possible PIC construction at 0x00010a293ba0: Changing call to branch */

undefined1  [16] FUN_10a293adc(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 **ppuVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 *puStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [8];
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  ppuVar3 = (undefined8 **)auStack_60;
  ppuVar10 = (undefined1 **)&stack0xfffffffffffffff0;
  puVar5 = (undefined8 *)param_1[1];
  if (puVar5 < (undefined8 *)param_1[2]) {
    uVar11 = *param_2;
    puVar5[1] = param_2[1];
    *puVar5 = uVar11;
    *param_2 = 0;
    param_2[1] = 0;
    param_1[1] = (long)(puVar5 + 2);
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = param_1;
    return auVar12;
  }
  lVar9 = (long)puVar5 - *param_1;
  uVar1 = (lVar9 >> 4) + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar6 = param_1[2] - *param_1;
    uVar8 = (long)uVar6 >> 3;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffef < uVar6) {
      uVar8 = 0xfffffffffffffff;
    }
    plVar4 = param_1;
    plStack_38 = param_1;
    FUN_10a293bd4();
    puVar2 = (undefined8 *)((long)plVar4 + lVar9);
    uVar11 = *param_2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar11;
    *param_2 = 0;
    param_2[1] = 0;
    puVar5 = (undefined8 *)*param_1;
    param_2 = (undefined8 *)((long)puVar2 - (param_1[1] - (long)puVar5));
    _memcpy(param_2);
    lStack_48 = *param_1;
    *param_1 = (long)param_2;
    param_1[1] = (long)(puVar2 + 2);
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar4 + uVar8 * 2);
    lStack_58 = lStack_48;
    lStack_50 = lStack_48;
    plVar4 = &lStack_58;
    uVar11 = 0x10a293ba4;
  }
  else {
    puVar5 = param_2;
    FUN_10a293bc0();
    pcStack_68 = FUN_10a293bc0;
    plVar4 = (long *)&DAT_10f62a4d8;
    ppuStack_70 = ppuVar10;
    FUN_109ffde64();
    ppuVar3 = &puStack_90;
    pcStack_78 = FUN_10a293bd4;
    ppuVar10 = &puStack_80;
    puStack_90 = param_2;
    plStack_88 = param_1;
    if ((ulong)puVar5 >> 0x3c == 0) {
      lVar9 = (long)puVar5 << 4;
      puStack_80 = (undefined1 *)&ppuStack_70;
      __Znwm(lVar9);
      auVar13._8_8_ = puVar5;
      auVar13._0_8_ = lVar9;
      return auVar13;
    }
    uVar11 = 0x10a293c08;
    puStack_80 = (undefined1 *)&ppuStack_70;
    func_0x000109ffded8();
  }
  *(undefined8 **)((long)ppuVar3 + -0x20) = param_2;
  *(long **)((long)ppuVar3 + -0x18) = param_1;
  *(undefined1 ***)((long)ppuVar3 + -0x10) = ppuVar10;
  *(undefined8 *)((long)ppuVar3 + -8) = uVar11;
  lVar9 = plVar4[1];
  lVar7 = plVar4[2];
  while (lVar7 != lVar9) {
    plVar4[2] = lVar7 + -0x10;
    FUN_10a26e930();
    lVar7 = plVar4[2];
  }
  if (*plVar4 != 0) {
    __ZdlPv();
  }
  auVar14._8_8_ = puVar5;
  auVar14._0_8_ = plVar4;
  return auVar14;
}



/* Entry: 10a293bc0; end: 10a293bd3;  */

undefined1  [16] FUN_10a293bc0(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar2 = param_2 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    FUN_10a26e930();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10a293bd4; end: 10a293c53;  */

undefined1  [16] FUN_10a293bd4(long *param_1,ulong param_2)

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
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    FUN_10a26e930();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a293c54; end: 10a293d6b;  */

void FUN_10a293c54(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar10 = (undefined8 *)param_1[1];
  if (puVar10 < (undefined8 *)param_1[2]) {
    lVar7 = param_2[1];
    uVar11 = *param_2;
    puVar10[1] = param_2[1];
    *puVar10 = uVar11;
    if (lVar7 != 0) {
      plVar6 = (long *)(lVar7 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar5) {
          *plVar6 = *plVar6 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar10 = puVar10 + 2;
  }
  else {
    lVar7 = (long)puVar10 - *param_1;
    uVar1 = (lVar7 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_10a293bc0();
      *param_1 = (long)&PTR_FUN_110bb7a68;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
      return;
    }
    uVar8 = param_1[2] - *param_1;
    uVar9 = (long)uVar8 >> 3;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7fffffffffffffef < uVar8) {
      uVar9 = 0xfffffffffffffff;
    }
    plVar6 = param_1;
    plStack_38 = param_1;
    FUN_10a293bd4();
    puVar3 = (undefined8 *)((long)plVar6 + lVar7);
    lVar7 = param_2[1];
    uVar11 = *param_2;
    puVar3[1] = param_2[1];
    *puVar3 = uVar11;
    if (lVar7 != 0) {
      plVar2 = (long *)(lVar7 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = *plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar10 = puVar3 + 2;
    lVar7 = (long)puVar3 - (param_1[1] - *param_1);
    _memcpy(lVar7);
    lStack_58 = *param_1;
    *param_1 = lVar7;
    param_1[1] = (long)puVar10;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar6 + uVar9 * 2);
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010a293c08(&lStack_58);
  }
  param_1[1] = (long)puVar10;
  return;
}



/* Entry: 10a293d6c; end: 10a293d7b;  */

void FUN_10a293d6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb7a68;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a293d7c; end: 10a293d9b;  */

void FUN_10a293d7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb7a68;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a293d9c; end: 10a293dab;  */

void FUN_10a293d9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a293da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a293dac; end: 10a293e3f;  */

ulong FUN_10a293dac(long param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_2 <= param_3) {
    if (param_3 != param_2) {
      uVar2 = *(ulong *)(param_1 + 8);
      uVar3 = param_2;
      if (param_3 != uVar2) {
        do {
          FUN_10a293e40(uVar3,param_3);
          param_3 = param_3 + 0x10;
          uVar3 = uVar3 + 0x10;
        } while (param_3 != uVar2);
        uVar2 = *(ulong *)(param_1 + 8);
      }
      while (uVar2 != uVar3) {
        uVar2 = uVar2 - 0x10;
        func_0x00010a26e988(uVar2);
      }
      *(ulong *)(param_1 + 8) = uVar3;
    }
    return param_2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a293e40);
  (*pcVar1)();
}



/* Entry: 10a293e40; end: 10a293ea3;  */

undefined8 * FUN_10a293e40(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a293ea4; end: 10a293f87;  */

/* WARNING: Possible PIC construction at 0x00010a293f68: Changing call to branch */

undefined1  [16] FUN_10a293ea4(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 **ppuVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 *puStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [8];
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  ppuVar3 = (undefined8 **)auStack_60;
  ppuVar10 = (undefined1 **)&stack0xfffffffffffffff0;
  puVar5 = (undefined8 *)param_1[1];
  if (puVar5 < (undefined8 *)param_1[2]) {
    uVar11 = *param_2;
    puVar5[1] = param_2[1];
    *puVar5 = uVar11;
    *param_2 = 0;
    param_2[1] = 0;
    param_1[1] = (long)(puVar5 + 2);
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = param_1;
    return auVar12;
  }
  lVar9 = (long)puVar5 - *param_1;
  uVar1 = (lVar9 >> 4) + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar6 = param_1[2] - *param_1;
    uVar8 = (long)uVar6 >> 3;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffef < uVar6) {
      uVar8 = 0xfffffffffffffff;
    }
    plVar4 = param_1;
    plStack_38 = param_1;
    FUN_10a293f9c();
    puVar2 = (undefined8 *)((long)plVar4 + lVar9);
    uVar11 = *param_2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar11;
    *param_2 = 0;
    param_2[1] = 0;
    puVar5 = (undefined8 *)*param_1;
    param_2 = (undefined8 *)((long)puVar2 - (param_1[1] - (long)puVar5));
    _memcpy(param_2);
    lStack_48 = *param_1;
    *param_1 = (long)param_2;
    param_1[1] = (long)(puVar2 + 2);
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar4 + uVar8 * 2);
    lStack_58 = lStack_48;
    lStack_50 = lStack_48;
    plVar4 = &lStack_58;
    uVar11 = 0x10a293f6c;
  }
  else {
    puVar5 = param_2;
    FUN_10a293f88();
    pcStack_68 = FUN_10a293f88;
    plVar4 = (long *)&DAT_10f62a4d8;
    ppuStack_70 = ppuVar10;
    FUN_109ffde64();
    ppuVar3 = &puStack_90;
    pcStack_78 = FUN_10a293f9c;
    ppuVar10 = &puStack_80;
    puStack_90 = param_2;
    plStack_88 = param_1;
    if ((ulong)puVar5 >> 0x3c == 0) {
      lVar9 = (long)puVar5 << 4;
      puStack_80 = (undefined1 *)&ppuStack_70;
      __Znwm(lVar9);
      auVar13._8_8_ = puVar5;
      auVar13._0_8_ = lVar9;
      return auVar13;
    }
    uVar11 = 0x10a293fd0;
    puStack_80 = (undefined1 *)&ppuStack_70;
    func_0x000109ffded8();
  }
  *(undefined8 **)((long)ppuVar3 + -0x20) = param_2;
  *(long **)((long)ppuVar3 + -0x18) = param_1;
  *(undefined1 ***)((long)ppuVar3 + -0x10) = ppuVar10;
  *(undefined8 *)((long)ppuVar3 + -8) = uVar11;
  lVar9 = plVar4[1];
  lVar7 = plVar4[2];
  while (lVar7 != lVar9) {
    plVar4[2] = lVar7 + -0x10;
    func_0x00010a26e988();
    lVar7 = plVar4[2];
  }
  if (*plVar4 != 0) {
    __ZdlPv();
  }
  auVar14._8_8_ = puVar5;
  auVar14._0_8_ = plVar4;
  return auVar14;
}



/* Entry: 10a293f88; end: 10a293f9b;  */

undefined1  [16] FUN_10a293f88(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar2 = param_2 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    func_0x00010a26e988();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10a293f9c; end: 10a29401b;  */

undefined1  [16] FUN_10a293f9c(long *param_1,ulong param_2)

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
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    func_0x00010a26e988();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a29401c; end: 10a294133;  */

void FUN_10a29401c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar10 = (undefined8 *)param_1[1];
  if (puVar10 < (undefined8 *)param_1[2]) {
    lVar7 = param_2[1];
    uVar11 = *param_2;
    puVar10[1] = param_2[1];
    *puVar10 = uVar11;
    if (lVar7 != 0) {
      plVar6 = (long *)(lVar7 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar5) {
          *plVar6 = *plVar6 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar10 = puVar10 + 2;
  }
  else {
    lVar7 = (long)puVar10 - *param_1;
    uVar1 = (lVar7 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_10a293f88();
      *param_1 = (long)&PTR_FUN_110bb7ab8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
      return;
    }
    uVar8 = param_1[2] - *param_1;
    uVar9 = (long)uVar8 >> 3;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7fffffffffffffef < uVar8) {
      uVar9 = 0xfffffffffffffff;
    }
    plVar6 = param_1;
    plStack_38 = param_1;
    FUN_10a293f9c();
    puVar3 = (undefined8 *)((long)plVar6 + lVar7);
    lVar7 = param_2[1];
    uVar11 = *param_2;
    puVar3[1] = param_2[1];
    *puVar3 = uVar11;
    if (lVar7 != 0) {
      plVar2 = (long *)(lVar7 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = *plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar10 = puVar3 + 2;
    lVar7 = (long)puVar3 - (param_1[1] - *param_1);
    _memcpy(lVar7);
    lStack_58 = *param_1;
    *param_1 = lVar7;
    param_1[1] = (long)puVar10;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar6 + uVar9 * 2);
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010a293fd0(&lStack_58);
  }
  param_1[1] = (long)puVar10;
  return;
}



/* Entry: 10a294134; end: 10a294143;  */

void FUN_10a294134(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb7ab8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a294144; end: 10a294163;  */

void FUN_10a294144(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb7ab8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a294164; end: 10a294173;  */

void FUN_10a294164(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a29416c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a294174; end: 10a294223;  */

long FUN_10a294174(long param_1)

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



/* Entry: 10a294224; end: 10a294327;  */

/* WARNING: Removing unreachable block (ram,0x00010a2942dc) */

void FUN_10a294224(long param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar4 = *(undefined8 **)(param_1 + 0x118);
  if (*(undefined8 **)(param_1 + 0x110) != puVar4) {
    iVar1 = *param_2;
    puVar6 = *(undefined8 **)(param_1 + 0x110);
    do {
      puVar5 = puVar6 + 9;
      if (*(int *)((long)puVar6 + 0x44) == iVar1) {
        if ((puVar6 != puVar4) && (puVar5 != puVar4)) {
          do {
            if (*(int *)((long)puVar5 + 0x44) != iVar1) {
              uVar7 = *puVar5;
              puVar6[1] = puVar5[1];
              *puVar6 = uVar7;
              uVar8 = puVar5[3];
              uVar7 = puVar5[2];
              uVar10 = puVar5[5];
              uVar9 = puVar5[4];
              uVar12 = puVar5[7];
              uVar11 = puVar5[6];
              puVar6[8] = puVar5[8];
              puVar6[5] = uVar10;
              puVar6[4] = uVar9;
              puVar6[7] = uVar12;
              puVar6[6] = uVar11;
              puVar6[3] = uVar8;
              puVar6[2] = uVar7;
              puVar6 = puVar6 + 9;
            }
            puVar5 = puVar5 + 9;
          } while (puVar5 != puVar4);
          puVar4 = *(undefined8 **)(param_1 + 0x118);
        }
        if (puVar4 < puVar6) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10a294328);
          (*pcVar2)();
        }
        if (puVar6 != puVar4) {
          *(undefined8 **)(param_1 + 0x118) = puVar6;
        }
        break;
      }
      puVar6 = puVar5;
    } while (puVar5 != puVar4);
  }
  plVar3 = *(long **)(*(long *)(param_1 + 0x10) + 0x1c8);
  (**(code **)(*plVar3 + 0x10))();
  FUN_10a25e5e8(param_1 + 0x108,plVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a294328; end: 10a29432b;  */

void FUN_10a294328(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a29432c; end: 10a29433f;  */

void FUN_10a29432c(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a294340; end: 10a294443;  */

/* WARNING: Removing unreachable block (ram,0x00010a2943f4) */

void FUN_10a294340(long param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  piVar1 = *(int **)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
  puVar6 = *(undefined8 **)(lVar2 + 0x118);
  if (*(undefined8 **)(lVar2 + 0x110) != puVar6) {
    iVar3 = *piVar1;
    puVar8 = *(undefined8 **)(lVar2 + 0x110);
    do {
      puVar7 = puVar8 + 9;
      if (*(int *)((long)puVar8 + 0x44) == iVar3) {
        if ((puVar8 != puVar6) && (puVar7 != puVar6)) {
          do {
            if (*(int *)((long)puVar7 + 0x44) != iVar3) {
              uVar9 = *puVar7;
              puVar8[1] = puVar7[1];
              *puVar8 = uVar9;
              uVar10 = puVar7[3];
              uVar9 = puVar7[2];
              uVar12 = puVar7[5];
              uVar11 = puVar7[4];
              uVar14 = puVar7[7];
              uVar13 = puVar7[6];
              puVar8[8] = puVar7[8];
              puVar8[5] = uVar12;
              puVar8[4] = uVar11;
              puVar8[7] = uVar14;
              puVar8[6] = uVar13;
              puVar8[3] = uVar10;
              puVar8[2] = uVar9;
              puVar8 = puVar8 + 9;
            }
            puVar7 = puVar7 + 9;
          } while (puVar7 != puVar6);
          puVar6 = *(undefined8 **)(lVar2 + 0x118);
        }
        if (puVar6 < puVar8) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a294440);
          (*pcVar4)();
        }
        if (puVar8 != puVar6) {
          *(undefined8 **)(lVar2 + 0x118) = puVar8;
        }
        break;
      }
      puVar8 = puVar7;
    } while (puVar7 != puVar6);
  }
  plVar5 = *(long **)(*(long *)(lVar2 + 0x10) + 0x1c8);
  (**(code **)(*plVar5 + 0x10))();
  FUN_10a25e5e8(lVar2 + 0x108,plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(piVar1);
  return;
}



/* Entry: 10a294444; end: 10a29447f;  */

long FUN_10a294444(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bb7b48);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a294480; end: 10a294483;  */

void FUN_10a294480(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a294484; end: 10a294563;  */

void FUN_10a294484(long param_1,undefined4 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 0x1c8);
    (**(code **)(*plVar4 + 0xc0))();
    plVar5 = (long *)plVar4[1];
    if ((plVar5 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 != (long *)0x0)
       ) {
      plVar4 = (long *)*plVar4;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x60))(plVar4,*param_2);
      }
      plVar1 = plVar5 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
      if (plVar4 != (long *)0x0) {
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a294564; end: 10a294567;  */

void FUN_10a294564(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a294568; end: 10a29457b;  */

void FUN_10a294568(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a29457c; end: 10a294677;  */

void FUN_10a29457c(long param_1)

{
  undefined4 *puVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  if (lVar7 == 0) {
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
  }
  else {
    plVar5 = *(long **)(lVar7 + 0x1c8);
    (**(code **)(*plVar5 + 0xc0))();
    plVar6 = (long *)plVar5[1];
    if ((plVar6 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 == (long *)0x0)
       ) {
      bVar4 = false;
    }
    else {
      plVar5 = (long *)*plVar5;
      bVar4 = plVar5 != (long *)0x0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x60))(plVar5,*puVar1);
      }
      plVar5 = plVar6 + 1;
      do {
        lVar7 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if ((puVar1 == (undefined4 *)0x0) || (bVar4)) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 10a294678; end: 10a2946b3;  */

long FUN_10a294678(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bb7ba8);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a2946b4; end: 10a2946b7;  */

void FUN_10a2946b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2946b8; end: 10a29471b;  */

ulong FUN_10a2946b8(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a29471c);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a29471c,6,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a29471c; end: 10a294947;  */

/* WARNING: Removing unreachable block (ram,0x00010a294898) */

void FUN_10a29471c(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auStack_a8 [8];
  long *plStack_a0;
  undefined1 auStack_98 [8];
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa0;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a294948(param_2,param_3);
  FUN_10a2949b0(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  func_0x000109898570(&lStack_70,param_2,param_4 + 0x10);
  func_0x000109898570(&lStack_88,param_2,param_4 + 0x20);
  FUN_10a059354(auStack_98,param_2,param_4 + 0x30);
  FUN_10a2949d4(auStack_a8,param_2,param_4 + 0x40);
  FUN_10a25f558(plVar6,&stack0xffffffffffffffa8,&lStack_70,&lStack_88,auStack_98,auStack_a8);
  if (plStack_a0 != (long *)0x0) {
    plVar6 = plStack_a0 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
    }
  }
  if (plStack_90 != (long *)0x0) {
    plVar6 = plStack_90 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_90);
    }
  }
  if (uStack_78._7_1_ < '\0') {
    __ZdlPv(lStack_88);
  }
  if (in_stack_ffffffffffffffa0 < 0) {
    __ZdlPv(lStack_70);
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          uStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a294948; end: 10a2949af;  */

void FUN_10a294948(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 extraout_x8;
  undefined1 auStack_78 [39];
  undefined1 uStack_51;
  
  lVar1 = param_1;
  func_0x000109898688();
  if (lVar1 != 0) {
    FUN_10a053854(param_1,lVar1);
    if ((param_1 != 0) && (___dynamic_cast(), param_1 != 0)) {
      return;
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar2 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar2 == 5) {
    return;
  }
  FUN_10a052ee0(5,0,puVar2);
  FUN_10a27bc84(auStack_78);
  FUN_10a294a2c(extraout_x8,&uStack_51,auStack_78);
  FUN_10a688c1c(auStack_78);
  return;
}



/* Entry: 10a2949b0; end: 10a2949d3;  */

void FUN_10a2949b0(undefined8 param_1)

{
  undefined8 extraout_x8;
  undefined1 auStack_58 [39];
  undefined1 uStack_31;
  
  if ((int)param_1 == 5) {
    return;
  }
  FUN_10a052ee0(5,0,param_1);
  FUN_10a27bc84(auStack_58);
  FUN_10a294a2c(extraout_x8,&uStack_31,auStack_58);
  FUN_10a688c1c(auStack_58);
  return;
}



/* Entry: 10a2949d4; end: 10a294a2b;  */

void FUN_10a2949d4(undefined8 param_1)

{
  undefined1 auStack_48 [39];
  undefined1 uStack_21;
  
  FUN_10a27bc84(auStack_48);
  FUN_10a294a2c(param_1,&uStack_21,auStack_48);
  FUN_10a688c1c(auStack_48);
  return;
}



/* Entry: 10a294a2c; end: 10a294a83;  */

void FUN_10a294a2c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x60;
  __Znwm();
  FUN_10a294a84();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a294a84; end: 10a294aff;  */

void FUN_10a294a84(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110bbaef0;
  *(undefined1 *)(param_1 + 0xb) = 3;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar5;
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
  lVar4 = param_2[3];
  uVar5 = param_2[2];
  param_1[6] = param_2[3];
  param_1[5] = uVar5;
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
  *(undefined1 *)(param_1 + 0xb) = 2;
  return;
}



/* Entry: 10a294b00; end: 10a294b1f;  */

void FUN_10a294b00(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bbaef0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a294b20; end: 10a294b47;  */

undefined1  [16] FUN_10a294b20(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  bVar2 = *(byte *)(param_1 + 0x58);
  if (3 < (ulong)bVar2) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a294b44);
    (*UNRECOVERED_JUMPTABLE)();
  }
  auVar10._8_8_ = (code **)(&PTR_FUN_110b9a040)[bVar2];
  puVar5 = (undefined8 *)(param_1 + 0x18);
  switch(bVar2) {
  case 0:
    auVar10._0_8_ = puVar5;
    return auVar10;
  case 1:
    puVar5 = (undefined8 *)(param_1 + 0x20);
    UNRECOVERED_JUMPTABLE = *(code **)*puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010a00496c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar11._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar11._0_8_ = puVar5;
    return auVar11;
  case 3:
    auVar12._8_8_ = auVar10._8_8_;
    auVar12._0_8_ = puVar5;
    return auVar12;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  if (((*ppuVar6 == (undefined *)0x0) &&
      (plVar7 = *(long **)(param_1 + 0x30), plVar7 != (long *)0x0)) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)) {
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x870);
      uStack_60 = *(undefined8 *)(param_1 + 0x20);
      uStack_68 = *puVar5;
      *puVar5 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      pcStack_78 = FUN_10a69fabc;
      ppuStack_70 = &PTR_DAT_110c0ce80;
      auVar10._8_8_ = &pcStack_78;
      FUN_10a4634ec(uVar8);
      (*(code *)*ppuStack_70)(&ppuStack_70);
    }
    plVar1 = plVar7 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a004dac(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar13._8_8_ = auVar10._8_8_;
    auVar13._0_8_ = puVar5;
    return auVar13;
  }
  ___stack_chk_fail();
  if ((int)auVar10._8_8_ == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  auVar14._8_8_ = 0x18;
  auVar14._0_8_ = &UNK_10f66c09c;
  return auVar14;
}



/* Entry: 10a294b48; end: 10a294d73;  */

/* WARNING: Removing unreachable block (ram,0x00010a294c34) */

void FUN_10a294b48(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auStack_a8 [8];
  long *plStack_a0;
  undefined1 auStack_98 [8];
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa0;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a294948(param_2,param_3);
  FUN_10a294d74(param_5);
  func_0x000109898570(&lStack_70,param_2,param_4);
  func_0x000109898570(&lStack_88,param_2,param_4 + 0x10);
  FUN_10a059354(auStack_98,param_2,param_4 + 0x20);
  FUN_10a2949d4(auStack_a8,param_2,param_4 + 0x30);
  func_0x000107c2b054(&stack0xffffffffffffffa8,&UNK_10f64697a);
  FUN_10a25f558(plVar6,&lStack_70,&lStack_88,&stack0xffffffffffffffa8,auStack_98,auStack_a8);
  if (plStack_a0 != (long *)0x0) {
    plVar6 = plStack_a0 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
    }
  }
  if (plStack_90 != (long *)0x0) {
    plVar6 = plStack_90 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_90);
    }
  }
  if (uStack_78._7_1_ < '\0') {
    __ZdlPv(lStack_88);
  }
  if (in_stack_ffffffffffffffa0 < 0) {
    __ZdlPv(lStack_70);
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          uStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a294d74; end: 10a294d97;  */

/* WARNING: Removing unreachable block (ram,0x00010a294e88) */

void FUN_10a294d74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 **ppuVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 *extraout_x8;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 *puStack_d0;
  ulong uStack_c8;
  byte bStack_b9;
  undefined1 auStack_b8 [8];
  long *plStack_b0;
  undefined1 auStack_a8 [8];
  long *plStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long *plStack_78;
  long in_stack_ffffffffffffff90;
  undefined8 in_stack_ffffffffffffff98;
  
  if ((int)param_1 == 4) {
    return;
  }
  plVar6 = (long *)0x4;
  uVar9 = 0;
  FUN_10a052ee0(4,0,param_1);
  plVar7 = plVar6;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  plVar8 = plVar6;
  FUN_10a294948(plVar6,uVar9);
  FUN_10a294d74(param_4);
  func_0x000109898570(&lStack_80,plVar6,param_1);
  func_0x000109898570(&lStack_98,plVar6,param_1 + 0x10);
  FUN_10a059354(auStack_a8,plVar6,param_1 + 0x20);
  FUN_10a2949d4(auStack_b8,plVar6,param_1 + 0x30);
  func_0x000107c2b054(&stack0xffffffffffffff98,&UNK_10f64697a);
  FUN_10a2600b0(&puStack_d0,plVar8,&lStack_80,&lStack_98,&stack0xffffffffffffff98,auStack_a8,
                auStack_b8);
  if (plStack_b0 != (long *)0x0) {
    plVar8 = plStack_b0 + 1;
    do {
      lVar12 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b0);
    }
  }
  if (plStack_a0 != (long *)0x0) {
    plVar8 = plStack_a0 + 1;
    do {
      lVar12 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
    }
  }
  if (uStack_88._7_1_ < '\0') {
    __ZdlPv(lStack_98);
  }
  if (in_stack_ffffffffffffff90 < 0) {
    __ZdlPv(lStack_80);
  }
  ppuVar3 = (undefined1 **)puStack_d0;
  if (-1 < (char)bStack_b9) {
    uStack_c8 = (ulong)bStack_b9;
    ppuVar3 = &puStack_d0;
  }
  (**(code **)(*plVar6 + 0x128))(&stack0xffffffffffffff98,plVar6,ppuVar3,uStack_c8);
  *extraout_x8 = 6;
  *(undefined8 *)(extraout_x8 + 2) = in_stack_ffffffffffffff98;
  if ((char)bStack_b9 < '\0') {
    __ZdlPv(puStack_d0);
  }
  plVar6 = plVar7 + 0x4b;
  lVar12 = plVar7[0x59];
  uVar10 = lVar12 - 1;
  plVar7[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar6[lVar12 + 2];
    if (plVar7[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar10) {
      return;
    }
  }
  lVar12 = *plVar6;
  lVar15 = plVar7[0x4c];
  lVar13 = lVar15 - lVar12;
  uVar17 = lVar13 >> 4;
  if (uVar17 < uVar10) {
    uVar18 = uVar10 - uVar17;
    lVar16 = plVar7[0x4d];
    if ((ulong)(lVar16 - lVar15 >> 4) < uVar18) {
      if (uVar10 >> 0x3c == 0) {
        uVar11 = lVar16 - lVar12 >> 3;
        if (uVar11 <= uVar10) {
          uVar11 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar16 - lVar12)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_78 = plVar6;
        if (uVar11 >> 0x3c == 0) {
          lVar5 = uVar11 << 4;
          __Znwm();
          lVar15 = lVar5 + lVar13;
          _bzero(lVar15,uVar18 * 0x10);
          lVar14 = lVar15 + uVar17 * -0x10;
          _memcpy(lVar14,lVar12,lVar13);
          *plVar6 = lVar14;
          plVar7[0x4c] = lVar15 + uVar18 * 0x10;
          plVar7[0x4d] = lVar5 + uVar11 * 0x10;
          lStack_98 = lVar12;
          lStack_90 = lVar12;
          uStack_88 = lVar12;
          lStack_80 = lVar16;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(lVar15,uVar18 * 0x10);
    plVar7[0x4c] = lVar15 + uVar18 * 0x10;
  }
  else if (uVar10 < uVar17) {
    lVar12 = lVar12 + uVar10 * 0x10;
    while (lVar15 != lVar12) {
      lVar15 = lVar15 + -0x10;
      func_0x00010988c204(lVar15);
    }
    plVar7[0x4c] = lVar12;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar10;
  return;
}



/* Entry: 10a294d98; end: 10a295027;  */

/* WARNING: Removing unreachable block (ram,0x00010a294e88) */

void FUN_10a294d98(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  undefined1 **ppuVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined1 auStack_a8 [8];
  long *plStack_a0;
  undefined1 auStack_98 [8];
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa0;
  undefined8 in_stack_ffffffffffffffa8;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = param_2;
  FUN_10a294948(param_2,param_3);
  FUN_10a294d74(param_5);
  func_0x000109898570(&lStack_70,param_2,param_4);
  func_0x000109898570(&lStack_88,param_2,param_4 + 0x10);
  FUN_10a059354(auStack_98,param_2,param_4 + 0x20);
  FUN_10a2949d4(auStack_a8,param_2,param_4 + 0x30);
  func_0x000107c2b054(&stack0xffffffffffffffa8,&UNK_10f64697a);
  FUN_10a2600b0(&puStack_c0,plVar7,&lStack_70,&lStack_88,&stack0xffffffffffffffa8,auStack_98,
                auStack_a8);
  if (plStack_a0 != (long *)0x0) {
    plVar7 = plStack_a0 + 1;
    do {
      lVar10 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
    }
  }
  if (plStack_90 != (long *)0x0) {
    plVar7 = plStack_90 + 1;
    do {
      lVar10 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_90);
    }
  }
  if (uStack_78._7_1_ < '\0') {
    __ZdlPv(lStack_88);
  }
  if (in_stack_ffffffffffffffa0 < 0) {
    __ZdlPv(lStack_70);
  }
  ppuVar3 = (undefined1 **)puStack_c0;
  if (-1 < (char)bStack_a9) {
    uStack_b8 = (ulong)bStack_a9;
    ppuVar3 = &puStack_c0;
  }
  (**(code **)(*param_2 + 0x128))(&stack0xffffffffffffffa8,param_2,ppuVar3,uStack_b8);
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffa8;
  if ((char)bStack_a9 < '\0') {
    __ZdlPv(puStack_c0);
  }
  plVar7 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar8 = lVar10 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar7[lVar10 + 2];
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  lVar10 = *plVar7;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar10;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar8) {
    uVar16 = uVar8 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar10 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar7 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          uStack_78 = lVar10;
          lStack_70 = lVar14;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar8 < uVar15) {
    lVar10 = lVar10 + uVar8 * 0x10;
    while (lVar13 != lVar10) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar8;
  return;
}



/* Entry: 10a295028; end: 10a2952b7;  */

/* WARNING: Removing unreachable block (ram,0x00010a2951a8) */

void FUN_10a295028(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  undefined1 **ppuVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined1 auStack_a8 [8];
  long *plStack_a0;
  undefined1 auStack_98 [8];
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa0;
  undefined8 in_stack_ffffffffffffffa8;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = param_2;
  FUN_10a294948(param_2,param_3);
  FUN_10a2949b0(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  func_0x000109898570(&lStack_70,param_2,param_4 + 0x10);
  func_0x000109898570(&lStack_88,param_2,param_4 + 0x20);
  FUN_10a059354(auStack_98,param_2,param_4 + 0x30);
  FUN_10a2949d4(auStack_a8,param_2,param_4 + 0x40);
  FUN_10a2600b0(&puStack_c0,plVar7,&stack0xffffffffffffffa8,&lStack_70,&lStack_88,auStack_98,
                auStack_a8);
  if (plStack_a0 != (long *)0x0) {
    plVar7 = plStack_a0 + 1;
    do {
      lVar10 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
    }
  }
  if (plStack_90 != (long *)0x0) {
    plVar7 = plStack_90 + 1;
    do {
      lVar10 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_90);
    }
  }
  if (uStack_78._7_1_ < '\0') {
    __ZdlPv(lStack_88);
  }
  if (in_stack_ffffffffffffffa0 < 0) {
    __ZdlPv(lStack_70);
  }
  ppuVar3 = (undefined1 **)puStack_c0;
  if (-1 < (char)bStack_a9) {
    uStack_b8 = (ulong)bStack_a9;
    ppuVar3 = &puStack_c0;
  }
  (**(code **)(*param_2 + 0x128))(&stack0xffffffffffffffa8,param_2,ppuVar3,uStack_b8);
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffa8;
  if ((char)bStack_a9 < '\0') {
    __ZdlPv(puStack_c0);
  }
  plVar7 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar8 = lVar10 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar7[lVar10 + 2];
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  lVar10 = *plVar7;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar10;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar8) {
    uVar16 = uVar8 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar10 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar7 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          uStack_78 = lVar10;
          lStack_70 = lVar14;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar8 < uVar15) {
    lVar10 = lVar10 + uVar8 * 0x10;
    while (lVar13 != lVar10) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar8;
  return;
}



/* Entry: 10a2952b8; end: 10a2953b3;  */

void FUN_10a2952b8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a294948(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10a2608a4(plVar4,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a2953b4; end: 10a295b3f;  */

/* WARNING: Removing unreachable block (ram,0x00010a2957b8) */
/* WARNING: Removing unreachable block (ram,0x00010a295698) */

undefined8 FUN_10a2953b4(long param_1)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined8 auStack_d0 [2];
  char cStack_b9;
  undefined8 auStack_b8 [2];
  char cStack_a1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined **appuStack_88 [2];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_48 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
LAB_10a2953dc:
  iVar3 = *(int *)(param_1 + 0x20);
  iVar4 = (int)param_1;
  if (5 < iVar3 - 1U) {
    if (8 < iVar3) {
      if (iVar3 == 9) {
        iVar3 = iVar4 + 0x28;
        func_0x0001094782ac();
        *(int *)(param_1 + 0x20) = iVar3;
        if (iVar3 == 0xb) goto LAB_10a2953ec;
        if (iVar3 == 4) {
          iVar3 = iVar4 + 0x28;
          func_0x0001094782ac();
          *(int *)(param_1 + 0x20) = iVar3;
          if (iVar3 == 0xc) {
            appuStack_88[0] = (undefined **)((ulong)appuStack_88[0] & 0xffffffffffffff00);
            func_0x0001078db3d4(&lStack_48,appuStack_88);
            iVar4 = iVar4 + 0x28;
            func_0x0001094782ac();
            goto LAB_10a2954dc;
          }
          func_0x000109479a1c(&uStack_60,param_1 + 0x28);
          uStack_98 = *(undefined8 *)(param_1 + 0x50);
          uStack_a0 = *(undefined8 *)(param_1 + 0x48);
          lStack_90 = *(long *)(param_1 + 0x58);
          func_0x000107c2b054(auStack_d0,&UNK_10f56844f);
          func_0x000109479b08(auStack_b8,param_1,0xc,auStack_d0);
          func_0x000109384a64(appuStack_88,0x65,&uStack_a0,auStack_b8);
        }
        else {
          func_0x000109479a1c(&uStack_60,param_1 + 0x28);
          uStack_98 = *(undefined8 *)(param_1 + 0x50);
          uStack_a0 = *(undefined8 *)(param_1 + 0x48);
          lStack_90 = *(long *)(param_1 + 0x58);
          func_0x000107c2b054(auStack_d0,&UNK_10f568444);
          func_0x000109479b08(auStack_b8,param_1,4,auStack_d0);
          func_0x000109384a64(appuStack_88,0x65,&uStack_a0,auStack_b8);
        }
      }
      else if (iVar3 == 0xe) {
        func_0x000109479a1c(&uStack_60,param_1 + 0x28);
        uStack_98 = *(undefined8 *)(param_1 + 0x50);
        uStack_a0 = *(undefined8 *)(param_1 + 0x48);
        lStack_90 = *(long *)(param_1 + 0x58);
        func_0x000107c2b054(auStack_d0,"value");
        func_0x000109479b08(auStack_b8,param_1,0,auStack_d0);
        func_0x000109384a64(appuStack_88,0x65,&uStack_a0,auStack_b8);
      }
      else {
LAB_10a29571c:
        func_0x000109479a1c(&uStack_60,param_1 + 0x28);
        uStack_98 = *(undefined8 *)(param_1 + 0x50);
        uStack_a0 = *(undefined8 *)(param_1 + 0x48);
        lStack_90 = *(long *)(param_1 + 0x58);
        func_0x000107c2b054(auStack_d0,"value");
        func_0x000109479b08(auStack_b8,param_1,0x10,auStack_d0);
        func_0x000109384a64(appuStack_88,0x65,&uStack_a0,auStack_b8);
      }
LAB_10a295774:
      appuStack_88[0] = &PTR_DAT_110af44f8;
      __ZNSt13runtime_errorD1Ev(auStack_78);
      __ZNSt9exceptionD2Ev(appuStack_88);
LAB_10a295790:
      if (cStack_a1 < '\0') {
        __ZdlPv(auStack_b8[0]);
      }
      if (cStack_b9 < '\0') {
        __ZdlPv(auStack_d0[0]);
      }
      bVar1 = false;
LAB_10a2955d0:
      if (lStack_48 != 0) {
        __ZdlPv();
      }
      if (bVar1) {
        iVar4 = iVar4 + 0x28;
        func_0x0001094782ac();
        *(int *)(param_1 + 0x20) = iVar4;
        if (iVar4 == 0xf) {
          return 1;
        }
        func_0x000109479a1c(&lStack_48,param_1 + 0x28);
        uStack_58 = *(undefined8 *)(param_1 + 0x50);
        uStack_60 = *(undefined8 *)(param_1 + 0x48);
        uStack_50 = *(undefined8 *)(param_1 + 0x58);
        func_0x000107c2b054(auStack_b8,"value");
        func_0x000109479b08(&uStack_a0,param_1,0xf,auStack_b8);
        func_0x000109384a64(appuStack_88,0x65,&uStack_60,&uStack_a0);
        appuStack_88[0] = &PTR_DAT_110af44f8;
        __ZNSt13runtime_errorD1Ev(auStack_78);
        __ZNSt9exceptionD2Ev(appuStack_88);
        if (lStack_90 < 0) {
          __ZdlPv(uStack_a0);
        }
        if (cStack_a1 < '\0') {
          __ZdlPv(auStack_b8[0]);
        }
      }
      return 0;
    }
    if (iVar3 != 7) {
      if (iVar3 != 8) goto LAB_10a29571c;
      iVar3 = iVar4 + 0x28;
      func_0x0001094782ac();
      *(int *)(param_1 + 0x20) = iVar3;
      if (iVar3 == 10) goto LAB_10a2953ec;
      appuStack_88[0] = (undefined **)CONCAT71(appuStack_88[0]._1_7_,1);
      func_0x0001078db3d4(&lStack_48,appuStack_88);
      goto LAB_10a2953dc;
    }
    if (0x7fefffffffffffff < (*(ulong *)(param_1 + 0xa8) & 0x7fffffffffffffff)) {
      func_0x000109479a1c(&uStack_60,param_1 + 0x28);
      func_0x000109479a1c(auStack_d0,param_1 + 0x28);
      FUN_109feb280(auStack_b8,&UNK_10f568460,auStack_d0);
      FUN_10a012db0(&uStack_a0,auStack_b8,&DAT_10f638984);
      func_0x000109386318(appuStack_88,0x196,&uStack_a0);
      appuStack_88[0] = &PTR_DAT_110af44f8;
      __ZNSt13runtime_errorD1Ev(auStack_78);
      __ZNSt9exceptionD2Ev(appuStack_88);
      if (lStack_90 < 0) {
        __ZdlPv(uStack_a0);
      }
      goto LAB_10a295790;
    }
  }
LAB_10a2953ec:
  if (lStack_40 != 0) {
    do {
      if ((*(ulong *)(lStack_48 + (lStack_40 - 1U >> 6) * 8) >> (lStack_40 - 1U & 0x3f) & 1) == 0) {
        iVar3 = iVar4 + 0x28;
        func_0x0001094782ac();
        *(int *)(param_1 + 0x20) = iVar3;
        if (iVar3 == 0xd) {
          iVar3 = iVar4 + 0x28;
          func_0x0001094782ac();
          *(int *)(param_1 + 0x20) = iVar3;
          if (iVar3 != 4) {
            func_0x000109479a1c(&uStack_60,param_1 + 0x28);
            uStack_98 = *(undefined8 *)(param_1 + 0x50);
            uStack_a0 = *(undefined8 *)(param_1 + 0x48);
            lStack_90 = *(long *)(param_1 + 0x58);
            func_0x000107c2b054(auStack_d0,&UNK_10f568444);
            func_0x000109479b08(auStack_b8,param_1,4,auStack_d0);
            func_0x000109384a64(appuStack_88,0x65,&uStack_a0,auStack_b8);
            goto LAB_10a295774;
          }
          iVar3 = iVar4 + 0x28;
          func_0x0001094782ac();
          *(int *)(param_1 + 0x20) = iVar3;
          if (iVar3 != 0xc) {
            func_0x000109479a1c(&uStack_60,param_1 + 0x28);
            uStack_98 = *(undefined8 *)(param_1 + 0x50);
            uStack_a0 = *(undefined8 *)(param_1 + 0x48);
            lStack_90 = *(long *)(param_1 + 0x58);
            func_0x000107c2b054(auStack_d0,&UNK_10f56844f);
            func_0x000109479b08(auStack_b8,param_1,0xc,auStack_d0);
            func_0x000109384a64(appuStack_88,0x65,&uStack_a0,auStack_b8);
            goto LAB_10a295774;
          }
          iVar4 = iVar4 + 0x28;
          func_0x0001094782ac();
          goto LAB_10a2954dc;
        }
        if (iVar3 != 0xb) {
          func_0x000109479a1c(&uStack_60,param_1 + 0x28);
          uStack_98 = *(undefined8 *)(param_1 + 0x50);
          uStack_a0 = *(undefined8 *)(param_1 + 0x48);
          lStack_90 = *(long *)(param_1 + 0x58);
          func_0x000107c2b054(auStack_d0,&DAT_10f365d6f);
          func_0x000109479b08(auStack_b8,param_1,0xb,auStack_d0);
          func_0x000109384a64(appuStack_88,0x65,&uStack_a0,auStack_b8);
          goto LAB_10a295774;
        }
      }
      else {
        iVar3 = iVar4 + 0x28;
        func_0x0001094782ac();
        *(int *)(param_1 + 0x20) = iVar3;
        if (iVar3 == 0xd) goto LAB_10a295460;
        if (iVar3 != 10) {
          func_0x000109479a1c(&uStack_60,param_1 + 0x28);
          uStack_98 = *(undefined8 *)(param_1 + 0x50);
          uStack_a0 = *(undefined8 *)(param_1 + 0x48);
          lStack_90 = *(long *)(param_1 + 0x58);
          func_0x000107c2b054(auStack_d0,"array");
          func_0x000109479b08(auStack_b8,param_1,10,auStack_d0);
          func_0x000109384a64(appuStack_88,0x65,&uStack_a0,auStack_b8);
          goto LAB_10a295774;
        }
      }
      if (lStack_40 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a2957cc);
        (*pcVar2)();
      }
      lStack_40 = lStack_40 + -1;
      if (lStack_40 == 0) break;
    } while( true );
  }
  bVar1 = true;
  goto LAB_10a2955d0;
LAB_10a295460:
  iVar4 = iVar4 + 0x28;
  func_0x0001094782ac();
LAB_10a2954dc:
  *(int *)(param_1 + 0x20) = iVar4;
  goto LAB_10a2953dc;
}



/* Entry: 10a295b40; end: 10a295cfb;  */

/* WARNING: Removing unreachable block (ram,0x00010a295ec0) */
/* WARNING: Removing unreachable block (ram,0x00010a295f9c) */
/* WARNING: Removing unreachable block (ram,0x00010a296070) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a295b40(long *param_1,undefined8 *******param_2,undefined8 *param_3,long *param_4,
                  undefined4 param_5,undefined8 *param_6,undefined8 *param_7)

{
  long *******ppppppplVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *******ppppppplVar9;
  ulong uVar10;
  long *******ppppppplVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *******pppppppuVar16;
  long lVar17;
  undefined8 *******pppppppuVar18;
  undefined8 *extraout_x8;
  undefined *puVar19;
  long ******pppppplVar20;
  undefined8 *****pppppuVar21;
  undefined8 ******ppppppuVar22;
  long ******pppppplStack_3f0;
  long ******pppppplStack_3e8;
  long ******pppppplStack_3e0;
  undefined1 uStack_3d8;
  undefined1 auStack_3d0 [32];
  undefined8 *******pppppppuStack_3b0;
  undefined8 *******pppppppuStack_3a8;
  undefined8 ******ppppppuStack_3a0;
  undefined8 *******pppppppuStack_398;
  undefined4 *puStack_390;
  long *******ppppppplStack_388;
  undefined1 **ppuStack_380;
  code *pcStack_378;
  undefined8 ******ppppppuStack_368;
  long *******ppppppplStack_360;
  undefined8 *******pppppppuStack_358;
  ulong uStack_350;
  byte bStack_341;
  long *******ppppppplStack_340;
  long lStack_338;
  long lStack_330;
  long *******ppppppplStack_328;
  long lStack_320;
  long lStack_318;
  int iStack_310;
  undefined8 *******pppppppuStack_308;
  long lStack_300;
  undefined1 auStack_2f8 [56];
  undefined8 *******pppppppuStack_2c0;
  undefined4 uStack_2b8;
  undefined1 auStack_2b0 [40];
  undefined8 ******ppppppuStack_288;
  undefined8 *apuStack_280 [7];
  undefined4 auStack_248 [6];
  long *plStack_230;
  undefined8 ******appppppuStack_228 [3];
  long *plStack_210;
  undefined1 auStack_200 [152];
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 ******ppppppuStack_150;
  undefined8 *******pppppppuStack_148;
  long *plStack_140;
  undefined8 *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 *puStack_120;
  ulong uStack_118;
  undefined8 *******pppppppuStack_110;
  undefined4 uStack_104;
  undefined8 ******ppppppuStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [56];
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = (undefined8 *)0x138;
  uStack_104 = param_5;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110b9f3b0;
  ppppppuVar22 = (undefined8 ******)(puVar6 + 3);
  pppppppuVar16 = (undefined8 *******)param_2[1];
  pppppppuVar14 = (undefined8 *******)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    pppppppuVar16 = (undefined8 *******)(ulong)*(byte *)((long)param_2 + 0x17);
    pppppppuVar14 = param_2;
  }
  uVar10 = param_3[1];
  puVar4 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar10 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar4 = param_3;
  }
  lStack_c0 = *param_4;
  lStack_b8 = param_4[1];
  *param_4 = 0;
  (**(code **)(param_4[2] + 0x10))(auStack_b0);
  lStack_78 = param_4[9];
  uStack_118 = param_6[1];
  puStack_120 = (undefined8 *)*param_6;
  if (-1 < (char)*(byte *)((long)param_6 + 0x17)) {
    uStack_118 = (ulong)*(byte *)((long)param_6 + 0x17);
    puStack_120 = param_6;
  }
  ppppppuStack_100 = (undefined8 ******)0x10a05c39c;
  ppuStack_f8 = &PTR_FUN_110b9f370;
  uStack_f0 = *param_7;
  uStack_e0 = param_7[2];
  uStack_e8 = param_7[1];
  param_7[1] = 0;
  param_7[2] = 0;
  pppppppuStack_110 = &ppppppuStack_100;
  FUN_10a23708c(ppppppuVar22,pppppppuVar14,pppppppuVar16,puVar4,uVar10,&lStack_c0,uStack_104);
  (*(code *)*ppuStack_f8)(&ppuStack_f8);
  plVar7 = &lStack_c0;
  FUN_10a042634();
  *param_1 = (long)ppppppuVar22;
  param_1[1] = (long)puVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_f8)(&ppuStack_f8);
  FUN_10a042634(&lStack_c0);
  __ZNSt3__119__shared_weak_countD2Ev(puVar6);
  __ZdlPv();
  plVar8 = plVar7;
  __Unwind_Resume();
  pcStack_128 = FUN_10a295cfc;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppplVar9 = (long *******)pppppppuVar14[4];
  ppppppplVar11 = ppppppplVar9;
  pppppppuVar15 = pppppppuVar14;
  pppppppuVar18 = &ppppppuStack_100;
  puStack_160 = param_6;
  puStack_158 = param_7;
  ppppppuStack_150 = ppppppuVar22;
  pppppppuStack_148 = &ppppppuStack_100;
  plStack_140 = plVar7;
  puStack_138 = puVar6;
  puStack_130 = &stack0xfffffffffffffff0;
  if ((ppppppplVar9 == (long *******)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), ppppppplVar11 = ppppppplVar9,
     pppppppuVar18 = pppppppuVar14, ppppppplStack_360 = ppppppplVar9,
     ppppppplVar9 == (long *******)0x0)) goto LAB_10a296030;
  ppppppuStack_368 = pppppppuVar14[3];
  if (ppppppuStack_368 != (undefined8 ******)0x0) {
    ppppppuVar22 = pppppppuVar14[2];
    lStack_338 = plVar8[1];
    ppppppplStack_340 = (long *******)*plVar8;
    lStack_330 = plVar8[2];
    *plVar8 = 0;
    plVar8[1] = 0;
    pppppppuVar14 = &ppppppplStack_340;
    lStack_320 = plVar8[4];
    ppppppplStack_328 = (long *******)plVar8[3];
    lStack_318 = plVar8[5];
    plVar8[2] = 0;
    plVar8[3] = 0;
    plVar8[4] = 0;
    plVar8[5] = 0;
    iStack_310 = (int)plVar8[6];
    pppppppuStack_308 = (undefined8 *******)plVar8[7];
    lStack_300 = plVar8[8];
    plVar8[7] = 0;
    (**(code **)(plVar8[9] + 0x10))(auStack_2f8,plVar8 + 9);
    pppppppuStack_2c0 = (undefined8 *******)plVar8[0x10];
    uStack_2b8 = (undefined4)plVar8[0x11];
    FUN_10a0424c4(auStack_2b0,plVar8 + 0x12);
    if (((uint)ppppppuVar22[3][5][0x20][0x35][2] >> 1 & 1) == 0) {
      FUN_10a296138(&ppppppuStack_288,ppppppuVar22[3][5][0x20],&UNK_10f649665,0x15);
      if (iStack_310 - 200U < 100) {
        pppppppuVar15 = pppppppuStack_308;
        pppppppuVar16 = pppppppuStack_2c0;
        FUN_109ffe064(&pppppppuStack_358);
        if (-1 < (char)bStack_341) {
          uStack_350 = (ulong)bStack_341;
        }
        if (uStack_350 == 0) {
LAB_10a295f24:
          pppppppuVar18 = (undefined8 *******)ppppppuVar22[6];
          if ((pppppppuVar18 == (undefined8 *******)0x0) || (*(char *)(pppppppuVar18 + 8) != '\x02')
             ) {
            if ((pppppppuVar18 != (undefined8 *******)0x0) &&
               (*(char *)(pppppppuVar18 + 8) == '\x01')) {
              (*(code *)*pppppppuVar18)(&pppppppuStack_358);
              pppppppuVar15 = pppppppuVar18;
            }
          }
          else {
            pppppppuVar15 = &pppppppuStack_358;
            FUN_10a05aad0(pppppppuVar18);
          }
        }
        else {
          pppppppuVar15 = pppppppuStack_358;
          if (-1 < (char)bStack_341) {
            pppppppuVar15 = &pppppppuStack_358;
          }
          plStack_230 = (long *)0x0;
          pppppppuVar15 = (undefined8 *******)((long)pppppppuVar15 + uStack_350);
          pppppppuVar16 = (undefined8 *******)auStack_248;
          func_0x000109477bd0(appppppuStack_228);
          uVar10 = 0;
          FUN_10a2953b4();
          func_0x0001094790dc(auStack_200);
          if ((undefined8 *******)plStack_210 == appppppuStack_228) {
            lVar17 = 0x20;
LAB_10a295ee8:
            (**(code **)(*plStack_210 + lVar17))();
          }
          else if (plStack_210 != (long *)0x0) {
            lVar17 = 0x28;
            goto LAB_10a295ee8;
          }
          if (plStack_230 == (long *)auStack_248) {
            lVar17 = 0x20;
LAB_10a295f14:
            (**(code **)(*plStack_230 + lVar17))();
          }
          else if (plStack_230 != (long *)0x0) {
            lVar17 = 0x28;
            goto LAB_10a295f14;
          }
          if ((uVar10 & 1) != 0) goto LAB_10a295f24;
          pppppuVar21 = ppppppuVar22[4];
          auStack_248[0] = 500;
          func_0x000107c2b054(appppppuStack_228,&UNK_10f64967b);
          pppppppuVar15 = (undefined8 *******)auStack_248;
          pppppppuVar16 = appppppuStack_228;
          FUN_10a25f92c(pppppuVar21);
        }
        if ((char)bStack_341 < '\0') {
          __ZdlPv(pppppppuStack_358);
        }
      }
      else {
        appppppuStack_228[0]._0_4_ = iStack_310;
        pppppppuVar15 = appppppuStack_228;
        pppppppuVar16 = &ppppppplStack_328;
        FUN_10a25f92c(ppppppuVar22[4]);
      }
      FUN_10a044790(&ppppppuStack_288);
      (*(code *)*apuStack_280[0])(apuStack_280);
    }
    else {
      pppppuVar21 = ppppppuVar22[4];
      ppppppuStack_288._0_4_ = 499;
      func_0x000107c2b054(appppppuStack_228,"Request cancelled");
      pppppppuVar15 = &ppppppuStack_288;
      pppppppuVar16 = appppppuStack_228;
      FUN_10a25f92c(pppppuVar21);
    }
    func_0x000104c4f944(auStack_2b0);
    ppppppplVar11 = (long *******)&pppppppuStack_308;
    FUN_10a042634();
    if (lStack_318 < 0) {
      ppppppplVar11 = ppppppplStack_328;
      __ZdlPv();
    }
    if (lStack_330 < 0) {
      ppppppplVar11 = ppppppplStack_340;
      __ZdlPv();
    }
  }
  ppppppplVar1 = ppppppplVar9 + 1;
  do {
    pppppplVar20 = *ppppppplVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ppppppplVar1,0x10);
    if (bVar3) {
      *ppppppplVar1 = (long ******)((long)pppppplVar20 + -1);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  pppppppuVar18 = pppppppuVar14;
  if (pppppplVar20 == (long ******)0x0) {
    (*(code *)(*ppppppplVar9)[2])(ppppppplVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppppppplVar11 = ppppppplVar9;
  }
LAB_10a296030:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  if ((char)bStack_341 < '\0') {
    __ZdlPv(pppppppuStack_358);
  }
  FUN_10a044790(&ppppppuStack_288);
  (*(code *)*apuStack_280[0])(apuStack_280);
  FUN_10a05bd10(&ppppppplStack_340);
  func_0x00010a05a86c(&ppppppuStack_368);
  ppppppplVar9 = ppppppplVar11;
  __Unwind_Resume();
  pcStack_378 = FUN_10a296138;
  pppppppuStack_3b0 = pppppppuVar15;
  pppppppuStack_3a8 = pppppppuVar16;
  ppppppuStack_3a0 = ppppppuVar22;
  pppppppuStack_398 = pppppppuVar18;
  puStack_390 = (undefined4 *)&ppppppuStack_288;
  ppppppplStack_388 = ppppppplVar11;
  ppuStack_380 = &puStack_130;
  if (((uint)ppppppplVar9[0x35][2] >> 1 & 1) != 0) {
    FUN_10a296280(auStack_3d0,&pppppppuStack_3b0);
    if (*(char *)((long)ppppppplVar9 + 0x21f) < '\0') {
      func_0x000107c3192c(&pppppplStack_3f0,ppppppplVar9[0x41],ppppppplVar9[0x42]);
    }
    else {
      pppppplStack_3e8 = ppppppplVar9[0x42];
      pppppplStack_3f0 = ppppppplVar9[0x41];
      pppppplStack_3e0 = ppppppplVar9[0x43];
    }
    uStack_3d8 = 1;
    FUN_10a234a0c(auStack_3d0,&pppppplStack_3f0);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a296228);
    (*pcVar5)();
  }
  puVar12 = (undefined *)0x28;
  __Znwm();
  func_0x00010ad005f4();
  if ((puVar12[0x20] & 1) == 0) {
    ppuVar13 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    puVar19 = *ppuVar13;
    *ppuVar13 = puVar12;
    *(undefined **)(puVar12 + 0x18) = puVar19;
    puVar12[0x20] = 1;
  }
  *extraout_x8 = FUN_10a296324;
  extraout_x8[1] = &PTR_FUN_110bbab50;
  extraout_x8[2] = puVar12;
  return;
}



/* Entry: 10a295cfc; end: 10a296137;  */

/* WARNING: Removing unreachable block (ram,0x00010a295ec0) */
/* WARNING: Removing unreachable block (ram,0x00010a295f9c) */
/* WARNING: Removing unreachable block (ram,0x00010a296070) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a295cfc(long *param_1,undefined8 *******param_2,undefined8 *******param_3)

{
  long *******ppppppplVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *******ppppppplVar5;
  ulong uVar6;
  long *******ppppppplVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 *******pppppppuVar10;
  long lVar11;
  undefined8 *******pppppppuVar12;
  undefined8 *extraout_x8;
  undefined *puVar13;
  long ******pppppplVar14;
  undefined8 *****pppppuVar15;
  undefined8 *******unaff_x21;
  undefined8 ******unaff_x22;
  long ******pppppplStack_2d0;
  long ******pppppplStack_2c8;
  long ******pppppplStack_2c0;
  undefined1 uStack_2b8;
  undefined1 auStack_2b0 [32];
  undefined8 *******pppppppuStack_290;
  undefined8 *******pppppppuStack_288;
  undefined8 ******ppppppuStack_280;
  undefined8 *******pppppppuStack_278;
  undefined4 *puStack_270;
  long *******ppppppplStack_268;
  undefined1 *puStack_260;
  code *pcStack_258;
  undefined8 ******ppppppuStack_248;
  long *******ppppppplStack_240;
  undefined8 *******pppppppuStack_238;
  ulong uStack_230;
  byte bStack_221;
  long *******ppppppplStack_220;
  long lStack_218;
  long lStack_210;
  long *******ppppppplStack_208;
  long lStack_200;
  long lStack_1f8;
  int iStack_1f0;
  undefined8 *******pppppppuStack_1e8;
  long lStack_1e0;
  undefined1 auStack_1d8 [56];
  undefined8 *******pppppppuStack_1a0;
  undefined4 uStack_198;
  undefined1 auStack_190 [40];
  undefined8 ******ppppppuStack_168;
  undefined8 *apuStack_160 [7];
  undefined4 auStack_128 [6];
  long *plStack_110;
  undefined8 ******appppppuStack_108 [3];
  long *plStack_f0;
  undefined1 auStack_e0 [152];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppplVar5 = (long *******)param_2[4];
  ppppppplVar7 = ppppppplVar5;
  pppppppuVar10 = param_2;
  if ((ppppppplVar5 == (long *******)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), ppppppplVar7 = ppppppplVar5, unaff_x21 = param_2,
     ppppppplStack_240 = ppppppplVar5, ppppppplVar5 == (long *******)0x0)) goto LAB_10a296030;
  ppppppuStack_248 = param_2[3];
  if (ppppppuStack_248 != (undefined8 ******)0x0) {
    unaff_x22 = param_2[2];
    lStack_218 = param_1[1];
    ppppppplStack_220 = (long *******)*param_1;
    lStack_210 = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_2 = &ppppppplStack_220;
    lStack_200 = param_1[4];
    ppppppplStack_208 = (long *******)param_1[3];
    lStack_1f8 = param_1[5];
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    iStack_1f0 = (int)param_1[6];
    pppppppuStack_1e8 = (undefined8 *******)param_1[7];
    lStack_1e0 = param_1[8];
    param_1[7] = 0;
    (**(code **)(param_1[9] + 0x10))(auStack_1d8,param_1 + 9);
    pppppppuStack_1a0 = (undefined8 *******)param_1[0x10];
    uStack_198 = (undefined4)param_1[0x11];
    FUN_10a0424c4(auStack_190,param_1 + 0x12);
    if (((uint)unaff_x22[3][5][0x20][0x35][2] >> 1 & 1) == 0) {
      FUN_10a296138(&ppppppuStack_168,unaff_x22[3][5][0x20],&UNK_10f649665,0x15);
      if (iStack_1f0 - 200U < 100) {
        pppppppuVar10 = pppppppuStack_1e8;
        param_3 = pppppppuStack_1a0;
        FUN_109ffe064(&pppppppuStack_238);
        if (-1 < (char)bStack_221) {
          uStack_230 = (ulong)bStack_221;
        }
        if (uStack_230 == 0) {
LAB_10a295f24:
          pppppppuVar12 = (undefined8 *******)unaff_x22[6];
          if ((pppppppuVar12 == (undefined8 *******)0x0) || (*(char *)(pppppppuVar12 + 8) != '\x02')
             ) {
            if ((pppppppuVar12 != (undefined8 *******)0x0) &&
               (*(char *)(pppppppuVar12 + 8) == '\x01')) {
              (*(code *)*pppppppuVar12)(&pppppppuStack_238);
              pppppppuVar10 = pppppppuVar12;
            }
          }
          else {
            pppppppuVar10 = &pppppppuStack_238;
            FUN_10a05aad0(pppppppuVar12);
          }
        }
        else {
          pppppppuVar10 = pppppppuStack_238;
          if (-1 < (char)bStack_221) {
            pppppppuVar10 = &pppppppuStack_238;
          }
          plStack_110 = (long *)0x0;
          pppppppuVar10 = (undefined8 *******)((long)pppppppuVar10 + uStack_230);
          param_3 = (undefined8 *******)auStack_128;
          func_0x000109477bd0(appppppuStack_108);
          uVar6 = 0;
          FUN_10a2953b4();
          func_0x0001094790dc(auStack_e0);
          if ((undefined8 *******)plStack_f0 == appppppuStack_108) {
            lVar11 = 0x20;
LAB_10a295ee8:
            (**(code **)(*plStack_f0 + lVar11))();
          }
          else if (plStack_f0 != (long *)0x0) {
            lVar11 = 0x28;
            goto LAB_10a295ee8;
          }
          if (plStack_110 == (long *)auStack_128) {
            lVar11 = 0x20;
LAB_10a295f14:
            (**(code **)(*plStack_110 + lVar11))();
          }
          else if (plStack_110 != (long *)0x0) {
            lVar11 = 0x28;
            goto LAB_10a295f14;
          }
          if ((uVar6 & 1) != 0) goto LAB_10a295f24;
          pppppuVar15 = unaff_x22[4];
          auStack_128[0] = 500;
          func_0x000107c2b054(appppppuStack_108,&UNK_10f64967b);
          pppppppuVar10 = (undefined8 *******)auStack_128;
          param_3 = appppppuStack_108;
          FUN_10a25f92c(pppppuVar15);
        }
        if ((char)bStack_221 < '\0') {
          __ZdlPv(pppppppuStack_238);
        }
      }
      else {
        appppppuStack_108[0]._0_4_ = iStack_1f0;
        pppppppuVar10 = appppppuStack_108;
        param_3 = &ppppppplStack_208;
        FUN_10a25f92c(unaff_x22[4]);
      }
      FUN_10a044790(&ppppppuStack_168);
      (*(code *)*apuStack_160[0])(apuStack_160);
    }
    else {
      pppppuVar15 = unaff_x22[4];
      ppppppuStack_168._0_4_ = 499;
      func_0x000107c2b054(appppppuStack_108,"Request cancelled");
      pppppppuVar10 = &ppppppuStack_168;
      param_3 = appppppuStack_108;
      FUN_10a25f92c(pppppuVar15);
    }
    func_0x000104c4f944(auStack_190);
    ppppppplVar7 = (long *******)&pppppppuStack_1e8;
    FUN_10a042634();
    if (lStack_1f8 < 0) {
      ppppppplVar7 = ppppppplStack_208;
      __ZdlPv();
    }
    if (lStack_210 < 0) {
      ppppppplVar7 = ppppppplStack_220;
      __ZdlPv();
    }
  }
  ppppppplVar1 = ppppppplVar5 + 1;
  do {
    pppppplVar14 = *ppppppplVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ppppppplVar1,0x10);
    if (bVar3) {
      *ppppppplVar1 = (long ******)((long)pppppplVar14 + -1);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  unaff_x21 = param_2;
  if (pppppplVar14 == (long ******)0x0) {
    (*(code *)(*ppppppplVar5)[2])(ppppppplVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppppppplVar7 = ppppppplVar5;
  }
LAB_10a296030:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if ((char)bStack_221 < '\0') {
    __ZdlPv(pppppppuStack_238);
  }
  FUN_10a044790(&ppppppuStack_168);
  (*(code *)*apuStack_160[0])(apuStack_160);
  FUN_10a05bd10(&ppppppplStack_220);
  func_0x00010a05a86c(&ppppppuStack_248);
  ppppppplVar5 = ppppppplVar7;
  __Unwind_Resume();
  pcStack_258 = FUN_10a296138;
  pppppppuStack_290 = pppppppuVar10;
  pppppppuStack_288 = param_3;
  ppppppuStack_280 = unaff_x22;
  pppppppuStack_278 = unaff_x21;
  puStack_270 = (undefined4 *)&ppppppuStack_168;
  ppppppplStack_268 = ppppppplVar7;
  puStack_260 = &stack0xfffffffffffffff0;
  if (((uint)ppppppplVar5[0x35][2] >> 1 & 1) != 0) {
    FUN_10a296280(auStack_2b0,&pppppppuStack_290);
    if (*(char *)((long)ppppppplVar5 + 0x21f) < '\0') {
      func_0x000107c3192c(&pppppplStack_2d0,ppppppplVar5[0x41],ppppppplVar5[0x42]);
    }
    else {
      pppppplStack_2c8 = ppppppplVar5[0x42];
      pppppplStack_2d0 = ppppppplVar5[0x41];
      pppppplStack_2c0 = ppppppplVar5[0x43];
    }
    uStack_2b8 = 1;
    FUN_10a234a0c(auStack_2b0,&pppppplStack_2d0);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a296228);
    (*pcVar4)();
  }
  puVar8 = (undefined *)0x28;
  __Znwm();
  func_0x00010ad005f4();
  if ((puVar8[0x20] & 1) == 0) {
    ppuVar9 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    puVar13 = *ppuVar9;
    *ppuVar9 = puVar8;
    *(undefined **)(puVar8 + 0x18) = puVar13;
    puVar8[0x20] = 1;
  }
  *extraout_x8 = FUN_10a296324;
  extraout_x8[1] = &PTR_FUN_110bbab50;
  extraout_x8[2] = puVar8;
  return;
}



/* Entry: 10a296138; end: 10a29627f;  */

void FUN_10a296138(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 auStack_60 [32];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  uStack_38 = param_4;
  if (((uint)*(undefined8 *)(*(long *)(param_2 + 0x1a8) + 0x10) >> 1 & 1) == 0) {
    puVar2 = (undefined *)0x28;
    __Znwm();
    func_0x00010ad005f4();
    if ((puVar2[0x20] & 1) == 0) {
      ppuVar3 = &PTR___tlv_bootstrap_11340dfd8;
      (*(code *)PTR___tlv_bootstrap_11340dfd8)();
      puVar4 = *ppuVar3;
      *ppuVar3 = puVar2;
      *(undefined **)(puVar2 + 0x18) = puVar4;
      puVar2[0x20] = 1;
    }
    *param_1 = FUN_10a296324;
    param_1[1] = &PTR_FUN_110bbab50;
    param_1[2] = puVar2;
    return;
  }
  FUN_10a296280(auStack_60,&uStack_40);
  if (*(char *)(param_2 + 0x21f) < '\0') {
    func_0x000107c3192c(&uStack_80,*(undefined8 *)(param_2 + 0x208),*(undefined8 *)(param_2 + 0x210)
                       );
  }
  else {
    uStack_78 = *(undefined8 *)(param_2 + 0x210);
    uStack_80 = *(undefined8 *)(param_2 + 0x208);
    uStack_70 = *(undefined8 *)(param_2 + 0x218);
  }
  uStack_68 = 1;
  FUN_10a234a0c(auStack_60,&uStack_80);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a296228);
  (*pcVar1)();
}



/* Entry: 10a296280; end: 10a296323;  */

undefined ** FUN_10a296280(undefined **param_1,undefined8 *param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *extraout_x8;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined *)param_2[1];
  if ((undefined *)0x7ffffffffffffff7 < puVar3) {
    func_0x000109ffde50();
    if (param_1[2][0x20] == '\x01') {
      param_1 = &PTR___tlv_bootstrap_11340dfd8;
      (*(code *)PTR___tlv_bootstrap_11340dfd8)();
      if (*param_1 == extraout_x8) {
        *param_1 = *(undefined **)(extraout_x8 + 0x18);
      }
      *(undefined8 *)(extraout_x8 + 0x18) = 0;
      extraout_x8[0x20] = 0;
    }
    return param_1;
  }
  uVar4 = *param_2;
  if (puVar3 < (undefined *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar3;
    ppuVar2 = param_1;
    if (puVar3 == (undefined *)0x0) goto LAB_10a2962fc;
  }
  else {
    ppuVar1 = (undefined **)0x19;
    if (((ulong)puVar3 | 7) != 0x17) {
      ppuVar1 = (undefined **)(((ulong)puVar3 | 7) + 1);
    }
    ppuVar2 = ppuVar1;
    __Znwm();
    param_1[1] = puVar3;
    param_1[2] = (undefined *)((ulong)ppuVar1 | 0x8000000000000000);
    *param_1 = (undefined *)ppuVar2;
  }
  _memmove(ppuVar2,uVar4,puVar3);
LAB_10a2962fc:
  *(undefined1 *)((long)ppuVar2 + (long)puVar3) = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return param_1;
}



/* Entry: 10a296324; end: 10a29636f;  */

void FUN_10a296324(long param_1)

{
  undefined **ppuVar1;
  undefined *extraout_x8;
  
  if (*(char *)(*(long *)(param_1 + 0x10) + 0x20) == '\x01') {
    ppuVar1 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar1 == extraout_x8) {
      *ppuVar1 = *(undefined **)(extraout_x8 + 0x18);
    }
    *(undefined8 *)(extraout_x8 + 0x18) = 0;
    extraout_x8[0x20] = 0;
  }
  return;
}



/* Entry: 10a296370; end: 10a296393;  */

void FUN_10a296370(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  *(long *)(param_1 + 8) = 0;
  if (lVar1 != 0) {
    func_0x00010ad0070c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a296394; end: 10a2963bb;  */

void FUN_10a296394(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x00010ad0070c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a2963bc; end: 10a2963e7;  */

undefined8 * FUN_10a2963bc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_10a05c0fc(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
      }
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 10a2963e8; end: 10a29642f;  */

void FUN_10a2963e8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10a26f33c(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a296430; end: 10a296487;  */

ulong FUN_10a296430(ulong param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                *(undefined4 *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x20),
                *(undefined4 *)(param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a296488(param_1,param_2,param_3);
  }
  return param_1;
}



/* Entry: 10a296488; end: 10a2964f7;  */

void FUN_10a296488(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  uVar1 = *param_2;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_40,*param_3,param_3[1]);
  }
  else {
    uStack_38 = param_3[1];
    uStack_40 = *param_3;
    lStack_30 = param_3[2];
  }
  FUN_10a2964f8(param_1,uVar1,&uStack_40);
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  return;
}



/* Entry: 10a2964f8; end: 10a2965a7;  */

void FUN_10a2964f8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  int aiStack_48 [2];
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  lVar1 = param_1[3];
  if (param_1[2] != lVar1) {
    plVar5 = (long *)*param_1;
    lVar4 = (long)*(char *)((long)param_3 + 0x17);
    puVar3 = param_3;
    if (lVar4 < 0) {
      puVar3 = (undefined8 *)*param_3;
      lVar4 = param_3[1];
    }
    (**(code **)(*plVar5 + 0x128))(&puStack_38,plVar5,puVar3,lVar4);
    aiStack_48[0] = 6;
    puStack_40 = puStack_38;
    FUN_10a005308(lVar1 + -8,plVar5,param_2,aiStack_48);
    if ((3 < aiStack_48[0]) && (puStack_40 != (undefined8 *)0x0)) {
      (**(code **)*puStack_40)();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a2965a4);
  (*pcVar2)();
}



/* Entry: 10a2965a8; end: 10a296867;  */

long FUN_10a2965a8(long param_1)

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



/* Entry: 10a296868; end: 10a296877;  */

void FUN_10a296868(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bbaa38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a296878; end: 10a296897;  */

void FUN_10a296878(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bbaa38;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a296898; end: 10a2968a7;  */

void FUN_10a296898(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a2968a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a2968a8; end: 10a29694f;  */

undefined8 * FUN_10a2968a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bbaa88;
  (**(code **)param_1[9])();
  FUN_10a296af4(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a296950; end: 10a2969b3;  */

bool FUN_10a296950(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x5a) {
    iVar1 = 0xe4a7889;
    _memcmp(&UNK_10e4a7889);
    return iVar1 == 0;
  }
  return false;
}


