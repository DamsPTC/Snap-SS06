/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b47accc; end: 10b47acd7;  */

void FUN_10b47accc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ce9c28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b47acd8; end: 10b47ad33;  */

void FUN_10b47acd8(void)

{
  undefined1 uVar1;
  undefined8 uStack_30;
  long lVar2;
  
  func_0x000107c393e4();
  if (uStack_30 != 0) {
    lVar2 = uStack_30;
    func_0x000107c2fef0();
    uVar1 = (undefined1)lVar2;
    func_0x000107c393dc();
    *(undefined1 *)(uStack_30 + 0xc1) = uVar1;
    *(undefined1 *)(uStack_30 + 0xc0) = 0;
    FUN_10b479c8c(*(undefined8 *)(uStack_30 + 0x198));
    func_0x000107c2fef8(uStack_30);
  }
  func_0x000107c393bc();
  return;
}



/* Entry: 10b47ad34; end: 10b47ad47;  */

long FUN_10b47ad34(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c60d68();
  }
  return param_1 + 8;
}



/* Entry: 10b47ad48; end: 10b47ad5b;  */

void FUN_10b47ad48(void)

{
  FUN_10b47b020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b47ad5c; end: 10b47ad67;  */

void FUN_10b47ad5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b47b538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b47ad68; end: 10b47ad7b;  */

void FUN_10b47ad68(void)

{
  FUN_10b47afb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b47ad7c; end: 10b47afb3;  */

void FUN_10b47ad7c(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined ***pppuVar3;
  undefined1 *puVar4;
  code *extraout_x8;
  long unaff_x20;
  long alStack_e0 [2];
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  byte bStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [80];
  long lStack_60;
  int iStack_58;
  undefined4 uStack_54;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  if ((((*(char *)(param_3 + 8) != '\x01') || (*(int *)(param_3 + 4) != 200)) ||
      (plVar1 = (long *)*param_2, plVar1 == (long *)0x0)) ||
     ((**(code **)(*plVar1 + 0x18))(), plVar1 == (long *)0x0)) {
    func_0x000107c2ff08(&stack0xffffffffffffffe0,param_1 + 8);
    if (unaff_x20 != 0) {
      *(undefined1 *)(unaff_x20 + 0xc0) = 0;
    }
    func_0x000107c393bc();
    return;
  }
  ppuStack_d0 = &PTR_FUN_110ce9db0;
  uStack_c8 = 0;
  puStack_c0 = &DAT_11383d918;
  uStack_b4 = 0;
  bStack_b8 = 0;
  lVar2 = *param_2;
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c393f0();
    (*extraout_x8)();
    param_2 = (long *)*param_2;
    if (param_2 != (long *)0x0) {
      (**(code **)(*param_2 + 0x18))();
      goto LAB_10b47ae3c;
    }
  }
  param_2 = (long *)0x0;
LAB_10b47ae3c:
  pppuVar3 = &ppuStack_d0;
  func_0x000107c3034c(pppuVar3,lVar2,param_2);
  if (((ulong)pppuVar3 & 1) == 0) {
    FUN_10b47afe4(param_1);
  }
  else {
    func_0x000107c2ff08(alStack_e0,param_1 + 8);
    lVar2 = alStack_e0[0];
    if (alStack_e0[0] != 0) {
      if (*(int *)(alStack_e0[0] + 0x120) == 0) {
        if ((bStack_b8 & 1) == 0) {
          FUN_10b47a6e8(alStack_e0[0]);
        }
        else {
          func_0x000107c278b8(auStack_b0,&UNK_10f76e842);
          func_0x000107c2831c(&ppuStack_48,auStack_b0,(ulong)puStack_c0 & 0xfffffffffffffffc);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
          if (-1 < (char)bStack_31) {
            uStack_40 = (ulong)bStack_31;
            ppuStack_48 = &ppuStack_48;
          }
          func_0x000107c30194(&lStack_60,ppuStack_48,uStack_40,0,0);
          if (lStack_60 != CONCAT44(uStack_54,iStack_58)) {
            func_0x000107c2feec(auStack_b0);
            puVar4 = auStack_b0;
            func_0x000107c3034c(puVar4,lStack_60,iStack_58 - (int)lStack_60);
            if (((ulong)puVar4 & 1) != 0) {
              FUN_10b47a78c(lVar2,auStack_b0,1,1);
            }
            func_0x000107c30444(auStack_b0);
          }
          func_0x000107c27914(&lStack_60);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_48);
        }
      }
      *(undefined1 *)(alStack_e0[0] + 0xc0) = 0;
    }
    func_0x000107c393bc();
  }
  FUN_10b47b900(&ppuStack_d0);
  return;
}



/* Entry: 10b47afb4; end: 10b47afb7;  */

void FUN_10b47afb4(long param_1)

{
  long alStack_20 [2];
  
  func_0x000107c2ff08(alStack_20,param_1 + 8);
  if (alStack_20[0] != 0) {
    *(undefined1 *)(alStack_20[0] + 0xc0) = 0;
  }
  func_0x000107c393bc();
  return;
}



/* Entry: 10b47afb8; end: 10b47afe3;  */

undefined8 * FUN_10b47afb8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ce9d68;
  func_0x000107c2ff04(param_1 + 1);
  return param_1;
}



/* Entry: 10b47afe4; end: 10b47b01f;  */

void FUN_10b47afe4(long param_1)

{
  long alStack_20 [2];
  
  func_0x000107c2ff08(alStack_20,param_1 + 8);
  if (alStack_20[0] != 0) {
    *(undefined1 *)(alStack_20[0] + 0xc0) = 0;
  }
  func_0x000107c393bc();
  return;
}



/* Entry: 10b47b020; end: 10b47b02b;  */

void FUN_10b47b020(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ce9d18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b47b02c; end: 10b47b053;  */

long FUN_10b47b02c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b47b054; end: 10b47b453;  */

void FUN_10b47b054(long *param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  uint uVar15;
  long *plVar16;
  byte bVar17;
  
  plVar11 = param_1 + 3;
  func_0x000107c278c4(plVar11,param_2 + 2);
  plVar12 = param_1 + 1;
  plVar13 = (long *)*plVar12;
  param_2[1] = (long)plVar11;
  if ((plVar13 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar13)) goto LAB_10b47b2a0;
  uVar14 = 1;
  if ((long *)0x2 < plVar13) {
    uVar14 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
  }
  plVar5 = (long *)(uVar14 | (long)plVar13 << 1);
  plVar9 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar5 <= plVar9) {
    plVar5 = plVar9;
  }
  if ((long)plVar5 - 1U == 0) {
    plVar5 = (long *)0x2;
  }
  else if (((ulong)plVar5 & (long)plVar5 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar13 = (long *)*plVar12;
  }
  if (plVar13 < plVar5) {
LAB_10b47b11c:
    plVar13 = plVar12;
    func_0x0001074d9bb8(plVar12,plVar5);
    func_0x0001074d9ba0(param_1,plVar13);
    param_1[1] = (long)plVar5;
    lVar6 = *param_1;
    for (plVar13 = (long *)0x0; plVar5 != plVar13; plVar13 = (long *)((long)plVar13 + 1)) {
      *(undefined8 *)(lVar6 + (long)plVar13 * 8) = 0;
    }
    plVar13 = (long *)param_1[2];
    if (plVar13 != (long *)0x0) {
      plVar9 = (long *)plVar13[1];
      uVar14 = (long)plVar5 - 1;
      if (((ulong)plVar5 & uVar14) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar14);
      }
      else if (plVar5 <= plVar9) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)plVar5;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)plVar5);
      }
      *(long **)(lVar6 + (long)plVar9 * 8) = param_1 + 2;
      while (plVar10 = plVar13, plVar13 = (long *)*plVar10, plVar13 != (long *)0x0) {
        plVar16 = (long *)plVar13[1];
        if (((ulong)plVar5 & uVar14) == 0) {
          plVar16 = (long *)((ulong)plVar16 & uVar14);
        }
        else if (plVar5 <= plVar16) {
          uVar1 = 0;
          if (plVar5 != (long *)0x0) {
            uVar1 = (ulong)plVar16 / (ulong)plVar5;
          }
          plVar16 = (long *)((long)plVar16 - uVar1 * (long)plVar5);
        }
        if (plVar16 != plVar9) {
          plVar8 = plVar13;
          if (*(long *)(lVar6 + (long)plVar16 * 8) == 0) {
            *(long **)(lVar6 + (long)plVar16 * 8) = plVar10;
            plVar9 = plVar16;
          }
          else {
            do {
              plVar7 = plVar8;
              plVar8 = (long *)0x0;
              if (*plVar7 == 0) break;
              plVar4 = plVar13 + 2;
              func_0x000107c278d0(plVar4,*plVar7 + 0x10);
              plVar8 = (long *)*plVar7;
            } while (((ulong)plVar4 & 1) != 0);
            *plVar10 = (long)plVar8;
            lVar6 = *param_1;
            *plVar7 = **(long **)(lVar6 + (long)plVar16 * 8);
            **(undefined8 **)(lVar6 + (long)plVar16 * 8) = plVar13;
            plVar13 = plVar10;
          }
        }
      }
    }
  }
  else if (plVar5 < plVar13) {
    plVar9 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar9) {
      plVar9 = (long *)(1L << (-LZCOUNT((long)plVar9 - 1) & 0x3fU));
    }
    if (plVar5 <= plVar9) {
      plVar5 = plVar9;
    }
    if (plVar5 < plVar13) {
      if (plVar5 != (long *)0x0) goto LAB_10b47b11c;
      func_0x0001074d9ba0(param_1,0);
      param_1[1] = 0;
    }
  }
  plVar13 = (long *)*plVar12;
LAB_10b47b2a0:
  uVar14 = (long)plVar13 - 1;
  if (((ulong)plVar13 & uVar14) == 0) {
    plVar5 = (long *)(uVar14 & (ulong)plVar11);
  }
  else {
    plVar5 = plVar11;
    if (plVar13 <= plVar11) {
      uVar1 = 0;
      if (plVar13 != (long *)0x0) {
        uVar1 = (ulong)plVar11 / (ulong)plVar13;
      }
      plVar5 = (long *)((long)plVar11 - uVar1 * (long)plVar13);
    }
  }
  plVar9 = *(long **)(*param_1 + (long)plVar5 * 8);
  if (plVar9 != (long *)0x0) {
    uVar15 = 0;
    bVar17 = 0;
    for (; lVar6 = *plVar9, lVar6 != 0; plVar9 = (long *)*plVar9) {
      plVar10 = *(long **)(lVar6 + 8);
      if (((ulong)plVar13 & uVar14) == 0) {
        plVar16 = (long *)((ulong)plVar10 & uVar14);
      }
      else {
        plVar16 = plVar10;
        if (plVar13 <= plVar10) {
          uVar1 = 0;
          if (plVar13 != (long *)0x0) {
            uVar1 = (ulong)plVar10 / (ulong)plVar13;
          }
          plVar16 = (long *)((long)plVar10 - uVar1 * (long)plVar13);
        }
      }
      if (plVar16 != plVar5) break;
      if (plVar10 == plVar11) {
        lVar6 = lVar6 + 0x10;
        func_0x000107c278d0(lVar6,param_2 + 2);
        uVar3 = (uint)lVar6;
      }
      else {
        uVar3 = 0;
      }
      bVar2 = uVar3 != uVar15;
      if ((bool)(bVar17 & bVar2)) break;
      uVar15 = uVar15 | bVar2;
      bVar17 = bVar17 | bVar2;
    }
    plVar13 = (long *)*plVar12;
  }
  bVar17 = POPCOUNT((char)plVar13) + POPCOUNT((char)((ulong)plVar13 >> 8)) +
           POPCOUNT((char)((ulong)plVar13 >> 0x10)) + POPCOUNT((char)((ulong)plVar13 >> 0x18)) +
           POPCOUNT((char)((ulong)plVar13 >> 0x20)) + POPCOUNT((char)((ulong)plVar13 >> 0x28)) +
           POPCOUNT((char)((ulong)plVar13 >> 0x30)) + POPCOUNT((char)((ulong)plVar13 >> 0x38));
  plVar11 = (long *)param_2[1];
  if (bVar17 < 2) {
    plVar11 = (long *)((long)plVar13 - 1U & (ulong)plVar11);
  }
  else if (plVar13 <= plVar11) {
    uVar14 = 0;
    if (plVar13 != (long *)0x0) {
      uVar14 = (ulong)plVar11 / (ulong)plVar13;
    }
    plVar11 = (long *)((long)plVar11 - uVar14 * (long)plVar13);
  }
  if (plVar9 == (long *)0x0) {
    plVar12 = param_1 + 2;
    *param_2 = *plVar12;
    *plVar12 = (long)param_2;
    lVar6 = *param_1;
    *(long **)(lVar6 + (long)plVar11 * 8) = plVar12;
    if (*param_2 != 0) {
      plVar11 = *(long **)(*param_2 + 8);
      if (bVar17 < 2) {
        plVar11 = (long *)((ulong)plVar11 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar11) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar11 / (ulong)plVar13;
        }
        plVar11 = (long *)((long)plVar11 - uVar14 * (long)plVar13);
      }
      *(long **)(lVar6 + (long)plVar11 * 8) = param_2;
    }
  }
  else {
    *param_2 = *plVar9;
    *plVar9 = (long)param_2;
    if (*param_2 != 0) {
      plVar12 = *(long **)(*param_2 + 8);
      if (bVar17 < 2) {
        plVar12 = (long *)((ulong)plVar12 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar12) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar12 / (ulong)plVar13;
        }
        plVar12 = (long *)((long)plVar12 - uVar14 * (long)plVar13);
      }
      if (plVar12 != plVar11) {
        *(long **)(*param_1 + (long)plVar12 * 8) = param_2;
      }
    }
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10b47b454; end: 10b47b527;  */

long FUN_10b47b454(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x000107c278c4();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar2 != plVar4) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x000107c278d0(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 10b47b528; end: 10b47b583;  */

void FUN_10b47b528(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10b47b584; end: 10b47b59f;  */

long FUN_10b47b584(long param_1)

{
  long extraout_x8;
  
  func_0x00010bce7f68();
  FUN_10b47b5e4();
  return param_1 + extraout_x8;
}



/* Entry: 10b47b5a0; end: 10b47b5e3;  */

undefined8 * FUN_10b47b5a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_DAT_110d9afb8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  func_0x00010bce7eac();
  return puVar1;
}



/* Entry: 10b47b5e4; end: 10b47b5fb;  */

void FUN_10b47b5e4(void)

{
  return;
}



/* Entry: 10b47b5fc; end: 10b47b62b;  */

long FUN_10b47b5fc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b47b62c(param_1);
  return param_1;
}



/* Entry: 10b47b62c; end: 10b47b653;  */

/* WARNING: Possible PIC construction at 0x00010b47b640: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b47b644) */

void FUN_10b47b62c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10) ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    func_0x000107c60ca0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar1);
  return;
}



/* Entry: 10b47b654; end: 10b47b657;  */

long FUN_10b47b654(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b47b62c(param_1);
  return param_1;
}



/* Entry: 10b47b658; end: 10b47b66b;  */

void FUN_10b47b658(void)

{
  FUN_10b47b5fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b47b66c; end: 10b47b677;  */

undefined ** FUN_10b47b66c(void)

{
  return &PTR_DAT_110ce9e40;
}



/* Entry: 10b47b678; end: 10b47b6b3;  */

void FUN_10b47b678(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b47bc2c();
  func_0x000107c3025c(unaff_x19 + 0x18);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b47b6b4; end: 10b47b7bf;  */

long * FUN_10b47b6b4(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar1 = param_1;
    func_0x00010b47bc20();
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x20);
    uVar2 = 8;
    func_0x000107c280a8(8,lVar1);
    func_0x000107c280b8(param_2,uVar2);
  }
  puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar6 + 0x17) < '\0') {
    if (puVar6[1] != 0) {
      puVar6 = (undefined8 *)*puVar6;
      goto LAB_10b47b724;
    }
  }
  else if (*(char *)((long)puVar6 + 0x17) != '\0') {
LAB_10b47b724:
    func_0x00010b47bc00(puVar6);
    param_2 = param_3;
    func_0x00010b47bbcc(param_3,2);
  }
  puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar6 + 0x17) < '\0') {
    if (puVar6[1] == 0) goto LAB_10b47b784;
    puVar6 = (undefined8 *)*puVar6;
  }
  else if (*(char *)((long)puVar6 + 0x17) == '\0') goto LAB_10b47b784;
  func_0x00010b47bc00(puVar6);
  param_2 = param_3;
  func_0x00010b47bbcc(param_3,3);
LAB_10b47b784:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
  if ((long)uVar3 < 0) {
    lVar1 = *(long *)(uVar4 + 8);
    uVar3 = *(ulong *)(uVar4 + 0x10);
  }
  else {
    lVar1 = uVar4 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)uVar3) {
    while( true ) {
      iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar5 = (int)uVar3;
      uVar3 = (ulong)(uint)(iVar5 - iVar7);
      if (iVar5 - iVar7 == 0 || iVar5 < iVar7) break;
      func_0x00010b4d5738();
      lVar1 = (long)param_2 + (long)iVar7;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar5);
  }
  _memcpy(param_2,lVar1,uVar3 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar3);
}



/* Entry: 10b47b7c0; end: 10b47b8ff;  */

long FUN_10b47b7c0(long param_1)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  
  func_0x00010b47bc38();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c282a0();
    param_1 = param_1 + 1;
  }
  uVar1 = *(ulong *)(unaff_x19 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    param_1 = param_1 + uVar1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    param_1 = param_1 + (ulong)((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x20)) * -9 + 0x280U >> 6) +
              1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    param_1 = lVar2 + param_1;
  }
  *(int *)(unaff_x19 + 0x24) = (int)param_1;
  return param_1;
}



/* Entry: 10b47b900; end: 10b47b92f;  */

long FUN_10b47b900(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b47b930; end: 10b47b933;  */

long FUN_10b47b930(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b47b934; end: 10b47b947;  */

void FUN_10b47b934(void)

{
  FUN_10b47b900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b47b948; end: 10b47b953;  */

undefined ** FUN_10b47b948(void)

{
  return &PTR_DAT_110ce9e90;
}



/* Entry: 10b47b954; end: 10b47b987;  */

void FUN_10b47b954(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b47bc2c();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x18) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b47b988; end: 10b47ba53;  */

long * FUN_10b47b988(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    lVar1 = param_1;
    func_0x00010b47bc20();
    param_2 = (long *)(ulong)*(byte *)(param_1 + 0x18);
    uVar2 = 8;
    func_0x000107c280a8(8,lVar1);
    func_0x000107c280a8(param_2,uVar2);
  }
  puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar6 + 0x17) < '\0') {
    if (puVar6[1] == 0) goto LAB_10b47ba18;
    puVar6 = (undefined8 *)*puVar6;
  }
  else if (*(char *)((long)puVar6 + 0x17) == '\0') goto LAB_10b47ba18;
  func_0x00010b47bc00(puVar6);
  param_2 = param_3;
  func_0x00010b47bbcc(param_3,2);
LAB_10b47ba18:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
  if ((long)uVar3 < 0) {
    lVar1 = *(long *)(uVar4 + 8);
    uVar3 = *(ulong *)(uVar4 + 0x10);
  }
  else {
    lVar1 = uVar4 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)uVar3) {
    while( true ) {
      iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar5 = (int)uVar3;
      uVar3 = (ulong)(uint)(iVar5 - iVar7);
      if (iVar5 - iVar7 == 0 || iVar5 < iVar7) break;
      func_0x00010b4d5738();
      lVar1 = (long)param_2 + (long)iVar7;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar5);
  }
  _memcpy(param_2,lVar1,uVar3 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar3);
}



/* Entry: 10b47ba54; end: 10b47bb17;  */

void FUN_10b47ba54(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  
  func_0x00010b47bc38();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  iVar1 = 0;
  if (lVar2 != 0) {
    func_0x000107c282a0();
    iVar1 = (int)param_1 + 1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(unaff_x19 + 0x18) * 2;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x1c) = iVar1;
  return;
}



/* Entry: 10b47bb18; end: 10b47bb27;  */

void FUN_10b47bb18(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x20);
  }
  *puVar1 = &PTR_FUN_110ce9db0;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)((long)puVar1 + 0x1c) = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 10b47bb28; end: 10b47bbcb;  */

void FUN_10b47bb28(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110ce9db0;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)((long)puVar1 + 0x1c) = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 10b47bbcc; end: 10b47bc4b;  */

long * FUN_10b47bbcc(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  undefined8 extraout_x8_00;
  uint extraout_w10;
  uint uVar6;
  uint extraout_w10_00;
  long lVar7;
  long *unaff_x20;
  int iVar8;
  undefined8 *unaff_x22;
  int iVar9;
  long lVar10;
  
  lVar7 = (long)*(char *)((long)unaff_x22 + 0x17);
  if ((-1 < lVar7) || (lVar7 = unaff_x22[1], lVar7 < 0x80)) {
    lVar10 = *param_1;
    uVar6 = (int)param_2 << 3;
    uVar2 = uVar6;
    func_0x0001001a5b20();
    if (lVar7 <= lVar10 + ~((long)unaff_x20 + (long)(int)uVar2) + 0x10) {
      lVar10 = (long)unaff_x20 + 2;
      for (uVar6 = uVar6 | 2; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
        *(byte *)(lVar10 + -2) = (byte)uVar6 | 0x80;
        lVar10 = lVar10 + 1;
      }
      *(byte *)(lVar10 + -2) = (byte)uVar6;
      *(char *)(lVar10 + -1) = (char)lVar7;
      puVar1 = (undefined8 *)*unaff_x22;
      if (-1 < *(char *)((long)unaff_x22 + 0x17)) {
        puVar1 = unaff_x22;
      }
      func_0x000107c610b4(lVar10,puVar1,lVar7);
      return (long *)(lVar10 + lVar7);
    }
  }
  func_0x00010b4d564c(param_1,param_2);
  func_0x00010b4d56cc();
  uVar6 = extraout_w10;
  while (0x7f < uVar6) {
    func_0x00010b4d576c();
    uVar6 = extraout_w10_00;
  }
  func_0x00010b4d56b4();
  uVar5 = extraout_x8;
  while (0x7f < (uint)uVar5) {
    func_0x00010b4d5758();
    uVar5 = extraout_x8_00;
  }
  func_0x00010b4d5660();
  iVar8 = (int)unaff_x22;
  if ((*(char *)((long)param_1 + 0x39) == '\x01') &&
     ((*param_1 - (long)unaff_x20) + 0x10 <= (long)iVar8)) {
    plVar3 = param_1;
    func_0x000107c303e0(param_1,unaff_x20);
    plVar4 = (long *)param_1[6];
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2,unaff_x22);
    if (((ulong)plVar4 & 1) == 0) {
      func_0x00010b4d56e4();
    }
    return plVar3;
  }
  if (*param_1 - (long)unaff_x20 < (long)iVar8) {
    while( true ) {
      iVar9 = ((int)*param_1 - (int)unaff_x20) + 0x10;
      iVar8 = (int)unaff_x22;
      unaff_x22 = (undefined8 *)(ulong)(uint)(iVar8 - iVar9);
      if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
      func_0x00010b4d5738();
      lVar7 = (long)unaff_x20 + (long)iVar9;
      unaff_x20 = param_1;
      func_0x000107c303e4(param_1,lVar7);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x20 + (long)iVar8);
  }
  _memcpy(unaff_x20);
  return (long *)((long)unaff_x20 + (long)iVar8);
}



/* Entry: 10b47bc4c; end: 10b47bc7b;  */

long FUN_10b47bc4c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b47c09c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b47bc7c; end: 10b47bc7f;  */

long FUN_10b47bc7c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b47c09c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b47bc80; end: 10b47bc93;  */

void FUN_10b47bc80(void)

{
  FUN_10b47bc4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b47bc94; end: 10b47bc9f;  */

undefined ** FUN_10b47bc94(void)

{
  return &PTR_DAT_110ce9fb0;
}



/* Entry: 10b47bca0; end: 10b47bcd7;  */

void FUN_10b47bca0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b47c274();
  func_0x00010b47c180();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b47bcd8; end: 10b47bd7b;  */

long * FUN_10b47bcd8(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar7;
  int iVar8;
  
  func_0x00010b47c1d4();
  for (; unaff_w22 != unaff_w21; unaff_w21 = unaff_w21 + 1) {
    func_0x00010b47c1f0();
    func_0x00010b47c250();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    plVar2 = unaff_x19;
    func_0x000107c28094();
    param_4 = (long *)(ulong)*(uint *)(unaff_x20 + 0x28);
    uVar3 = 0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x000107c280b8(param_4,uVar3);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)uVar5) {
      while( true ) {
        iVar8 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar7 = (int)uVar5;
        uVar1 = iVar7 - iVar8;
        uVar5 = (ulong)uVar1;
        if (uVar1 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar7);
    }
    _memcpy(param_4,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar5);
  }
  return param_4;
}



/* Entry: 10b47bd7c; end: 10b47bdfb;  */

long FUN_10b47bd7c(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x00010b47c1b0();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    FUN_10b47bdfc();
    unaff_x20 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  if (*(int *)(unaff_x19 + 0x28) != 0) {
    unaff_x20 = unaff_x20 +
                (ulong)((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x28)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x2c) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10b47bdfc; end: 10b47be13;  */

void FUN_10b47bdfc(void)

{
  FUN_10b47c520();
  func_0x00010b47c234();
  return;
}



/* Entry: 10b47be14; end: 10b47be63;  */

void FUN_10b47be14(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  func_0x00010b47c274();
  FUN_10b47be64();
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b47be64; end: 10b47be73;  */

void FUN_10b47be64(long *param_1,long param_2)

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



/* Entry: 10b47be74; end: 10b47bea3;  */

long FUN_10b47be74(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b47c0cc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b47bea4; end: 10b47bea7;  */

long FUN_10b47bea4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b47c0cc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b47bea8; end: 10b47bebb;  */

void FUN_10b47bea8(void)

{
  FUN_10b47be74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b47bebc; end: 10b47bec7;  */

undefined ** FUN_10b47bebc(void)

{
  return &PTR_DAT_110cea008;
}



/* Entry: 10b47bec8; end: 10b47befb;  */

void FUN_10b47bec8(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b47c274();
  func_0x00010b47c194();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b47befc; end: 10b47bf6b;  */

long * FUN_10b47befc(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar5;
  int iVar6;
  
  func_0x00010b47c1d4();
  for (; unaff_w22 != unaff_w21; unaff_w21 = unaff_w21 + 1) {
    func_0x00010b47c1f0();
    func_0x00010b47c250();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar3 < 0) {
      lVar2 = *(long *)(uVar4 + 8);
      uVar3 = *(ulong *)(uVar4 + 0x10);
    }
    else {
      lVar2 = uVar4 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)uVar3) {
      while( true ) {
        iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar5 = (int)uVar3;
        uVar1 = iVar5 - iVar6;
        uVar3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar5);
    }
    _memcpy(param_4,lVar2,uVar3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar3);
  }
  return param_4;
}



/* Entry: 10b47bf6c; end: 10b47bfc7;  */

long FUN_10b47bf6c(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x00010b47c1b0();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    FUN_10b47bfc8();
    unaff_x20 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x28) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10b47bfc8; end: 10b47bfdf;  */

void FUN_10b47bfc8(void)

{
  func_0x00010b47ca38();
  func_0x00010b47c234();
  return;
}



/* Entry: 10b47bfe0; end: 10b47bfe3;  */

void FUN_10b47bfe0(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  func_0x00010b47c274();
  FUN_10b47c028();
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b47bfe4; end: 10b47c027;  */

void FUN_10b47bfe4(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  func_0x00010b47c274();
  FUN_10b47c028();
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b47c028; end: 10b47c037;  */

void FUN_10b47c028(long *param_1,long param_2)

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



/* Entry: 10b47c038; end: 10b47c06f;  */

void FUN_10b47c038(long param_1,long param_2)

{
  long unaff_x19;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_10b47bec8();
  func_0x00010b47c274(param_1);
  FUN_10b47c028();
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b47c070; end: 10b47c09b;  */

undefined1  [16] FUN_10b47c070(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar5;
  puVar3 = (undefined1 *)(param_2 + 0x10);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x10); puVar2 != (undefined1 *)(param_1 + 0x20);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x20);
  return auVar6;
}



/* Entry: 10b47c09c; end: 10b47c0cb;  */

long * FUN_10b47c09c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b47c0cc; end: 10b47c0fb;  */

long * FUN_10b47c0cc(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b47c0fc; end: 10b47c17f;  */

void FUN_10b47c0fc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b47c268();
  }
  *puVar1 = &PTR_FUN_110ce9f20;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  puVar1[5] = 0;
  return;
}



/* Entry: 10b47c180; end: 10b47c27f;  */

void FUN_10b47c180(ulong *param_1)

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



/* Entry: 10b47c280; end: 10b47c2c3;  */

undefined8 * FUN_10b47c280(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    FUN_10b4d80e0(param_1,0x48);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110cea150;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_10b4d197c(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  lVar3 = param_2 + 0x18;
  func_0x000107c2809c(lVar3,param_1);
  puVar2[3] = lVar3;
  lVar3 = param_2 + 0x20;
  func_0x000107c2809c(lVar3,param_1);
  puVar2[4] = lVar3;
  uVar1 = *(uint *)(puVar2 + 2);
  if ((uVar1 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = param_1;
    func_0x00010b47cd28(param_1,*(undefined8 *)(param_2 + 0x28));
  }
  puVar2[5] = puVar4;
  if ((uVar1 >> 1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b47cd6c(param_1,*(undefined8 *)(param_2 + 0x30));
  }
  puVar2[6] = param_1;
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(param_2 + 0x40);
  puVar2[7] = uVar5;
  return puVar2;
}



/* Entry: 10b47c2c4; end: 10b47c2f7;  */

long FUN_10b47c2c4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b47c2f8(param_1);
  return param_1;
}



/* Entry: 10b47c2f8; end: 10b47c32f;  */

void FUN_10b47c2f8(long param_1)

{
  func_0x000107c30258(param_1 + 0x10);
  if (*(int *)(param_1 + 0x2c) != 0) {
    if (*(int *)(param_1 + 0x2c) - 1U < 2) {
      func_0x000107c30258(param_1 + 0x20);
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



/* Entry: 10b47c330; end: 10b47c333;  */

long FUN_10b47c330(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b47c2f8(param_1);
  return param_1;
}



/* Entry: 10b47c334; end: 10b47c347;  */

void FUN_10b47c334(void)

{
  FUN_10b47c2c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b47c348; end: 10b47c37b;  */

void FUN_10b47c348(long param_1)

{
  if (*(int *)(param_1 + 0x2c) - 1U < 2) {
    func_0x000107c30258(param_1 + 0x20);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}



/* Entry: 10b47c37c; end: 10b47c387;  */

undefined ** FUN_10b47c37c(void)

{
  return &PTR_DAT_110cea0e0;
}



/* Entry: 10b47c388; end: 10b47c3cb;  */

void FUN_10b47c388(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_10b47c348(param_1);
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b47c3cc; end: 10b47c51f;  */

long * FUN_10b47c3cc(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  
  if (*(int *)(param_1 + 0x2c) == 2) {
    puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
    uVar4 = 2;
LAB_10b47c448:
    plVar7 = param_3;
    func_0x000107c280a0(param_3,uVar4,puVar9,param_2);
  }
  else {
    plVar7 = param_2;
    if (*(int *)(param_1 + 0x2c) == 1) {
      puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
      lVar3 = (long)*(char *)((long)puVar9 + 0x17);
      puVar1 = puVar9;
      if (lVar3 < 0) {
        lVar3 = puVar9[1];
        puVar1 = (undefined8 *)*puVar9;
      }
      func_0x000107c303d4(puVar1,lVar3,1,&UNK_10f76e9a2);
      uVar4 = 1;
      goto LAB_10b47c448;
    }
  }
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar9[1];
    if (lVar3 == 0) goto LAB_10b47c4a4;
    puVar1 = (undefined8 *)*puVar9;
  }
  else {
    puVar1 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_10b47c4a4;
  }
  func_0x000107c303d4(puVar1,lVar3,1,&UNK_10f76e9d3);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,3,puVar9,plVar7);
  plVar7 = plVar2;
LAB_10b47c4a4:
  if (*(char *)(param_1 + 0x18) == '\x01') {
    plVar2 = param_3;
    func_0x000107c28094(param_3,plVar7);
    plVar7 = (long *)(ulong)*(byte *)(param_1 + 0x18);
    uVar4 = 0x20;
    func_0x000107c280a8(0x20,plVar2);
    func_0x000107c280a8(plVar7,uVar4);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar7;
  }
  uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
  if ((long)uVar5 < 0) {
    lVar3 = *(long *)(uVar6 + 8);
    uVar5 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    lVar3 = uVar6 + 8;
  }
  if (*param_3 - (long)plVar7 < (long)(int)uVar5) {
    while( true ) {
      iVar10 = ((int)*param_3 - (int)plVar7) + 0x10;
      iVar8 = (int)uVar5;
      uVar5 = (ulong)(uint)(iVar8 - iVar10);
      if (iVar8 - iVar10 == 0 || iVar8 < iVar10) break;
      func_0x00010b4d5738();
      lVar3 = (long)plVar7 + (long)iVar10;
      plVar7 = param_3;
      func_0x000107c303e4(param_3,lVar3);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar7 + (long)iVar8);
  }
  _memcpy(plVar7,lVar3,uVar5 & 0xffffffff);
  return (long *)((long)plVar7 + (long)(int)uVar5);
}



/* Entry: 10b47c520; end: 10b47c5c3;  */

long FUN_10b47c520(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  lVar3 = 0;
  if (lVar2 != 0) {
    func_0x000107c282a0();
    lVar3 = uVar1 + 1;
  }
  lVar3 = lVar3 + (ulong)*(byte *)(param_1 + 0x18) * 2;
  if (*(int *)(param_1 + 0x2c) == 2) {
    uVar1 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
    func_0x000107c28098();
  }
  else {
    if (*(int *)(param_1 + 0x2c) != 1) goto LAB_10b47c590;
    uVar1 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
    func_0x000107c282a0();
  }
  lVar3 = lVar3 + uVar1 + 1;
LAB_10b47c590:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b47c5c4; end: 10b47c5c7;  */

void FUN_10b47c5c4(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  uVar5 = *(ulong *)(param_1 + 8);
  uVar7 = uVar5;
  if ((uVar5 & 1) != 0) {
    uVar7 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  uVar4 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar4 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(uVar4 + 8);
  }
  if (lVar6 != 0) {
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar4,uVar5);
  }
  if (*(char *)(param_2 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  iVar2 = *(int *)(param_2 + 0x2c);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0x2c);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        FUN_10b47c348(param_1);
      }
      *(int *)(param_1 + 0x2c) = iVar2;
    }
    if ((iVar2 == 2) || (iVar2 == 1)) {
      if (iVar3 != iVar2) {
        *(undefined **)(param_1 + 0x20) = &DAT_11383d918;
      }
      puVar1 = (undefined *)(*(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc);
      if (*(int *)(param_2 + 0x2c) != iVar2) {
        puVar1 = &DAT_11383d918;
      }
      func_0x000107c30248(param_1 + 0x20,puVar1,uVar7);
    }
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b47c5c8; end: 10b47c6df;  */

void FUN_10b47c5c8(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  uVar5 = *(ulong *)(param_1 + 8);
  uVar7 = uVar5;
  if ((uVar5 & 1) != 0) {
    uVar7 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  uVar4 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar4 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(uVar4 + 8);
  }
  if (lVar6 != 0) {
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar4,uVar5);
  }
  if (*(char *)(param_2 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  iVar2 = *(int *)(param_2 + 0x2c);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0x2c);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        FUN_10b47c348(param_1);
      }
      *(int *)(param_1 + 0x2c) = iVar2;
    }
    if ((iVar2 == 2) || (iVar2 == 1)) {
      if (iVar3 != iVar2) {
        *(undefined **)(param_1 + 0x20) = &DAT_11383d918;
      }
      puVar1 = (undefined *)(*(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc);
      if (*(int *)(param_2 + 0x2c) != iVar2) {
        puVar1 = &DAT_11383d918;
      }
      func_0x000107c30248(param_1 + 0x20,puVar1,uVar7);
    }
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b47c6e0; end: 10b47c6fb;  */

void FUN_10b47c6e0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x30);
  }
  *puVar1 = &PTR_FUN_110cea0a0;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 10b47c6fc; end: 10b47c7bb;  */

undefined8 * FUN_10b47c6fc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cea150;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar2 = param_3 + 0x18;
  func_0x000107c2809c(lVar2,param_2);
  param_1[3] = lVar2;
  lVar2 = param_3 + 0x20;
  func_0x000107c2809c(lVar2,param_2);
  param_1[4] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b47cd28(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b47cd6c(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = param_2;
  uVar3 = *(undefined8 *)(param_3 + 0x38);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 0x40);
  param_1[7] = uVar3;
  return param_1;
}



/* Entry: 10b47c7bc; end: 10b47c7ef;  */

long FUN_10b47c7bc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b47c7f0(param_1);
  return param_1;
}



/* Entry: 10b47c7f0; end: 10b47c837;  */

void FUN_10b47c7f0(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b484464();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b488544();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b47c838; end: 10b47c83b;  */

long FUN_10b47c838(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b47c7f0(param_1);
  return param_1;
}



/* Entry: 10b47c83c; end: 10b47c84f;  */

void FUN_10b47c83c(void)

{
  FUN_10b47c7bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b47c850; end: 10b47c85b;  */

undefined ** FUN_10b47c850(void)

{
  return &PTR_DAT_110cea190;
}



/* Entry: 10b47c85c; end: 10b47c8cf;  */

void FUN_10b47c85c(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b4844e0(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b4885ac(*(undefined8 *)(param_1 + 0x30));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 10b47c8d0; end: 10b47cb3f;  */

long * FUN_10b47c8d0(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  
  plVar8 = param_1;
  if ((int)param_1[8] != 0) {
    plVar2 = param_1;
    func_0x00010b47cde4();
    plVar8 = (long *)(ulong)*(uint *)(param_1 + 8);
    uVar3 = 8;
    func_0x000107c280a8(8,plVar2);
    func_0x000107c280b8(plVar8,uVar3);
    param_2 = plVar8;
  }
  puVar10 = (undefined8 *)(param_1[3] & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar10 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar10[1];
    if (lVar5 == 0) goto LAB_10b47c968;
    puVar4 = (undefined8 *)*puVar10;
  }
  else {
    puVar4 = puVar10;
    if (*(char *)((long)puVar10 + 0x17) == '\0') goto LAB_10b47c968;
  }
  func_0x000107c303d4(puVar4,lVar5,1,&UNK_10f76ea0a);
  plVar8 = param_3;
  func_0x000107c280a0(param_3,2,puVar10,param_2);
  param_2 = plVar8;
LAB_10b47c968:
  uVar6 = param_1[4] & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar6 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar6 + 8);
  }
  if (lVar5 != 0) {
    plVar8 = param_3;
    func_0x000107c280a0(param_3,3,uVar6,param_2);
    param_2 = plVar8;
  }
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    plVar8 = (long *)0x4;
    func_0x00010b47cdd8(4,param_1[5],*(undefined4 *)(param_1[5] + 0x28));
    param_2 = plVar8;
  }
  if (param_1[7] != 0) {
    func_0x00010b47cde4();
    param_2 = (long *)param_1[7];
    uVar3 = 0x28;
    func_0x000107c280a8(0x28,plVar8);
    func_0x000107c280ac(param_2,uVar3);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = (long *)0x6;
    func_0x00010b47cdd8(6,param_1[6],*(undefined4 *)(param_1[6] + 0x18));
  }
  if ((param_1[1] & 1U) != 0) {
    uVar7 = param_1[1] & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar5 = *(long *)(uVar7 + 8);
      uVar6 = *(ulong *)(uVar7 + 0x10);
    }
    else {
      lVar5 = uVar7 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar6) {
      while( true ) {
        iVar11 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar9 = (int)uVar6;
        uVar6 = (ulong)(uint)(iVar9 - iVar11);
        if (iVar9 - iVar11 == 0 || iVar9 < iVar11) break;
        func_0x00010b4d5738();
        lVar5 = (long)param_2 + (long)iVar11;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar5);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar9);
    }
    _memcpy(param_2,lVar5,uVar6 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar6);
  }
  return param_2;
}



/* Entry: 10b47cb40; end: 10b47cb6f;  */

void FUN_10b47cb40(void)

{
  FUN_10b484668();
  func_0x00010b47cdbc();
  return;
}



/* Entry: 10b47cb70; end: 10b47cb73;  */

void FUN_10b47cb70(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar3,uVar4);
  }
  uVar4 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x20,uVar4,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar4 = uVar2;
        func_0x00010b47cd28(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar4;
      }
      else {
        FUN_10b484720();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        func_0x00010b47cd6c(uVar2,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        FUN_10b488704();
      }
    }
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_2 + 0x38);
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_2 + 0x40);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b47cb74; end: 10b47ccbf;  */

void FUN_10b47cb74(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar3,uVar4);
  }
  uVar4 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x20,uVar4,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar4 = uVar2;
        func_0x00010b47cd28(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar4;
      }
      else {
        FUN_10b484720();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        func_0x00010b47cd6c(uVar2,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        FUN_10b488704();
      }
    }
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_2 + 0x38);
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_2 + 0x40);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b47ccc0; end: 10b47ccc7;  */

void FUN_10b47ccc0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x48);
  }
  *puVar1 = &PTR_FUN_110cea150;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  return;
}



/* Entry: 10b47ccc8; end: 10b47cdaf;  */

void FUN_10b47ccc8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x48);
  }
  *puVar1 = &PTR_FUN_110cea150;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  return;
}



/* Entry: 10b47cdb0; end: 10b47cdef;  */

void FUN_10b47cdb0(void)

{
  return;
}



/* Entry: 10b47cdf0; end: 10b47ce33;  */

/* WARNING: Possible PIC construction at 0x00010b47ce1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b47ce20) */

void FUN_10b47cdf0(int param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  uint uVar1;
  
  func_0x000107c28094(param_4,param_3);
  for (uVar1 = param_1 << 3; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *param_4 = (byte)uVar1 | 0x80;
    param_4 = param_4 + 1;
  }
  *param_4 = (byte)uVar1;
  return;
}



/* Entry: 10b47ce34; end: 10b47ce5f;  */

long FUN_10b47ce34(long param_1)

{
  func_0x00010b48a52c();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b47ce60; end: 10b47cea3;  */

undefined8 * FUN_10b47ce60(long param_1,long param_2)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  if (param_1 == 0) {
    __Znwm(0x68);
  }
  else {
    FUN_10b4d80e0(param_1,0x68);
  }
  func_0x00010b48aac8();
  *unaff_x19 = &PTR_FUN_110cebef0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b48aa70();
  }
  FUN_10b48a704(unaff_x19 + 2);
  func_0x00010b48a724(unaff_x19 + 5);
  func_0x00010b48a744(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0xc) = 0;
  unaff_x19[0xb] = *(undefined8 *)(unaff_x20 + 0x58);
  return unaff_x19;
}



/* Entry: 10b47cea4; end: 10b47cecf;  */

long FUN_10b47cea4(long param_1)

{
  func_0x00010b47e218();
  FUN_10b47df3c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b47ced0; end: 10b47ced3;  */

long FUN_10b47ced0(long param_1)

{
  func_0x00010b47e218();
  FUN_10b47df3c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b47ced4; end: 10b47cee7;  */

void FUN_10b47ced4(void)

{
  FUN_10b47cea4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b47cee8; end: 10b47cef3;  */

undefined ** FUN_10b47cee8(void)

{
  return &PTR_DAT_110cea428;
}



/* Entry: 10b47cef4; end: 10b47cf2b;  */

void FUN_10b47cef4(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b47e2bc();
  if (in_NG == in_OV) {
    func_0x00010b47e300();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b47cf2c; end: 10b47d033;  */

long * FUN_10b47cf2c(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b47e1dc();
  if (*(int *)(param_1 + 0x28) != 0) {
    func_0x00010b47e234();
    param_4 = (long *)0x8;
    func_0x000107c280a8();
    func_0x00010b47e2d8();
    param_2 = param_1;
  }
  iVar3 = *(int *)(unaff_x20 + 0x18);
  while (iVar3 != 0) {
    func_0x00010b47e190();
    param_3 = (ulong)*(uint *)(param_2 + 0x1c);
    func_0x000107c303cc(2);
    func_0x00010b47e314();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b47e298();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b47d034; end: 10b47d037;  */

void FUN_10b47d034(ulong *param_1,long param_2)

{
  long unaff_x19;
  
  func_0x00010b47e2a4();
  FUN_10b47d07c();
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b47e1ec();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}


