/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10088b520; end: 10088b533;  */

void FUN_10088b520(void)

{
  return;
}



/* Entry: 10088b534; end: 10088b583;  */

void FUN_10088b534(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined1 in_CY;
  undefined1 auStack_30 [16];
  
  FUN_10088b520();
  if ((bool)in_CY) {
    func_0x000107c35c10();
    func_0x000107c2a69c(auStack_30);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10088b57c);
    (*pcVar1)();
  }
  if (param_2 != 0) {
    FUN_10088b520();
    if (!(bool)in_CY) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___Znwm_110352280)(param_2 * 0x28);
      return;
    }
    func_0x000104bd35f4();
  }
  return;
}



/* Entry: 10088b584; end: 10088b5ab;  */

void FUN_10088b584(undefined8 param_1,long param_2)

{
  undefined1 in_CY;
  
  FUN_10088b520();
  if (!(bool)in_CY) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x28);
    return;
  }
  func_0x000104bd35f4();
  return;
}



/* Entry: 10088b5ac; end: 10088b5b7;  */

void FUN_10088b5ac(void)

{
  return;
}



/* Entry: 10088b5b8; end: 10088b687;  */

undefined8 FUN_10088b5b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  undefined8 uStack_38;
  
  FUN_10088b294();
  if (param_1 == 0) {
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      func_0x00010088b640();
    }
  }
  else {
    func_0x000107c2c9a8();
  }
  FUN_10088b738(unaff_x19 + 8,param_2,param_3);
  uStack_38 = *(undefined8 *)(unaff_x19 + 0x10);
  func_0x00010088bce8(unaff_x19 + 0x20,param_2,&uStack_38);
  return *(undefined8 *)(unaff_x19 + 0x10);
}



/* Entry: 10088b688; end: 10088b697;  */

void FUN_10088b688(void)

{
  return;
}



/* Entry: 10088b698; end: 10088b737;  */

undefined8 *
FUN_10088b698(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 auStack_50 [2];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  FUN_10088b688();
  uStack_38 = extraout_x8;
  FUN_10088b7a8(auStack_50,1);
  *puStack_40 = param_2;
  puStack_40[1] = param_3;
  func_0x00010088b7d0(puStack_40 + 2,param_4,param_5);
  puVar1 = puStack_40;
  puStack_40 = (undefined8 *)0x0;
  FUN_10088b8d0();
  func_0x00010088b8e4(uStack_38);
  if ((bool)in_ZR) {
    return puVar1;
  }
  func_0x000107c60e78();
  func_0x00010088b8d4();
  func_0x000107c35c08();
  puVar4 = puVar3;
  FUN_10088b698();
  puVar1 = (undefined8 *)puVar3[1];
  lVar2 = puVar3[2];
  *puVar4 = puVar3;
  puVar4[1] = puVar1;
  *puVar1 = puVar4;
  puVar3[1] = puVar4;
  puVar3[2] = lVar2 + 1;
  return puVar4 + 2;
}



/* Entry: 10088b738; end: 10088b77b;  */

long * FUN_10088b738(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = param_1;
  FUN_10088b698(param_1,0,0,param_2,param_3);
  puVar1 = (undefined8 *)param_1[1];
  lVar2 = param_1[2];
  *plVar3 = (long)param_1;
  plVar3[1] = (long)puVar1;
  *puVar1 = plVar3;
  param_1[1] = (long)plVar3;
  param_1[2] = lVar2 + 1;
  return plVar3 + 2;
}



/* Entry: 10088b77c; end: 10088b7a7;  */

long FUN_10088b77c(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < 0x222222222222223) {
    lVar1 = param_2 * 0x78;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  *(ulong *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10088b77c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10088b7a8; end: 10088b82b;  */

long FUN_10088b7a8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10088b77c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10088b82c; end: 10088b847;  */

undefined1  [16] FUN_10088b82c(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = param_2;
  return auVar1;
}



/* Entry: 10088b848; end: 10088b867;  */

void FUN_10088b848(void)

{
  FUN_10088b82c();
  FUN_10088b868();
  return;
}



/* Entry: 10088b868; end: 10088b8af;  */

void FUN_10088b868(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar3;
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar3;
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar3;
  uVar3 = param_1[3];
  uVar1 = param_1[4];
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar2;
  param_2[3] = uVar3;
  param_2[4] = uVar1;
  return;
}



/* Entry: 10088b8b0; end: 10088b8cf;  */

void FUN_10088b8b0(void)

{
  FUN_10088b82c();
  FUN_10088b8d0();
  return;
}



/* Entry: 10088b8d0; end: 10088b8f7;  */

void FUN_10088b8d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar3;
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar3;
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar3;
  uVar3 = param_1[3];
  uVar1 = param_1[4];
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar2;
  param_2[3] = uVar3;
  param_2[4] = uVar1;
  return;
}



/* Entry: 10088b8f8; end: 10088bcc7;  */

undefined1  [16] FUN_10088b8f8(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x26;
  ulong uVar14;
  undefined1 auVar15 [16];
  
  plVar7 = param_1 + 3;
  FUN_100102e7c();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar14 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar14) == 0) {
      unaff_x26 = (long *)(uVar14 & (ulong)plVar7);
    }
    else {
      unaff_x26 = plVar7;
      if (plVar13 <= plVar7) {
        uVar6 = 0;
        if (plVar13 != (long *)0x0) {
          uVar6 = (ulong)plVar7 / (ulong)plVar13;
        }
        unaff_x26 = (long *)((long)plVar7 - uVar6 * (long)plVar13);
      }
    }
    plVar12 = *(long **)(*param_1 + (long)unaff_x26 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_10088b9c4;
          plVar4 = (long *)plVar12[1];
          if (plVar4 != plVar7) break;
          plVar4 = plVar12 + 2;
          FUN_1000e107c(plVar4,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            uVar3 = 0;
            goto LAB_10088bc8c;
          }
        }
        if (((ulong)plVar13 & uVar14) == 0) {
          plVar4 = (long *)((ulong)plVar4 & uVar14);
        }
        else if (plVar13 <= plVar4) {
          uVar6 = 0;
          if (plVar13 != (long *)0x0) {
            uVar6 = (ulong)plVar4 / (ulong)plVar13;
          }
          plVar4 = (long *)((long)plVar4 - uVar6 * (long)plVar13);
        }
      } while (plVar4 == unaff_x26);
    }
  }
LAB_10088b9c4:
  plVar4 = param_1 + 2;
  plVar12 = (long *)0x30;
  func_0x000107c60e20();
  *plVar12 = 0;
  plVar12[1] = (long)plVar7;
  func_0x000107c60c94(plVar12 + 2,param_3);
  plVar12[5] = *param_4;
  if ((plVar13 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar13)) goto LAB_10088bc10;
  uVar14 = 1;
  if ((long *)0x2 < plVar13) {
    uVar14 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
  }
  plVar5 = (long *)(uVar14 | (long)plVar13 << 1);
  plVar13 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar5 <= plVar13) {
    plVar5 = plVar13;
  }
  if ((long)plVar5 - 1U == 0) {
    plVar5 = (long *)0x2;
  }
  else if (((ulong)plVar5 & (long)plVar5 - 1U) != 0) {
    func_0x000107c60c44();
  }
  plVar13 = (long *)param_1[1];
  if (plVar13 < plVar5) {
LAB_10088ba7c:
    if ((ulong)plVar5 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10088bcb8);
      (*pcVar1)();
    }
    lVar2 = (long)plVar5 << 3;
    func_0x000107c60e20(lVar2);
    FUN_10088bd00(param_1,lVar2);
    param_1[1] = (long)plVar5;
    lVar2 = *param_1;
    for (plVar13 = (long *)0x0; plVar5 != plVar13; plVar13 = (long *)((long)plVar13 + 1)) {
      *(undefined8 *)(lVar2 + (long)plVar13 * 8) = 0;
    }
    plVar8 = (long *)*plVar4;
    plVar13 = plVar5;
    if (plVar8 != (long *)0x0) {
      plVar9 = (long *)plVar8[1];
      uVar6 = (long)plVar5 - 1;
      uVar14 = 0;
      if (plVar5 != (long *)0x0) {
        uVar14 = (ulong)plVar9 / (ulong)plVar5;
      }
      plVar10 = plVar9;
      if (plVar5 <= plVar9) {
        plVar10 = (long *)((long)plVar9 - uVar14 * (long)plVar5);
      }
      if (((ulong)plVar5 & uVar6) == 0) {
        plVar10 = (long *)((ulong)plVar9 & uVar6);
      }
      *(long **)(lVar2 + (long)plVar10 * 8) = plVar4;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        plVar11 = (long *)plVar8[1];
        if (((ulong)plVar5 & uVar6) == 0) {
          plVar11 = (long *)((ulong)plVar11 & uVar6);
        }
        else if (plVar5 <= plVar11) {
          uVar14 = 0;
          if (plVar5 != (long *)0x0) {
            uVar14 = (ulong)plVar11 / (ulong)plVar5;
          }
          plVar11 = (long *)((long)plVar11 - uVar14 * (long)plVar5);
        }
        if (plVar11 != plVar10) {
          if (*(long *)(lVar2 + (long)plVar11 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar11 * 8) = plVar9;
            plVar10 = plVar11;
          }
          else {
            *plVar9 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar2 + (long)plVar11 * 8);
            **(long **)(lVar2 + (long)plVar11 * 8) = (long)plVar8;
            plVar8 = plVar9;
          }
        }
      }
    }
  }
  else if (plVar5 < plVar13) {
    plVar8 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      func_0x000107c60c44();
    }
    else if ((long *)0x1 < plVar8) {
      plVar8 = (long *)(1L << (-LZCOUNT((long)plVar8 - 1) & 0x3fU));
    }
    if (plVar5 <= plVar8) {
      plVar5 = plVar8;
    }
    if (plVar5 < plVar13) {
      if (plVar5 != (long *)0x0) goto LAB_10088ba7c;
      FUN_10088bd00(param_1,0);
      param_1[1] = 0;
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
    unaff_x26 = (long *)((long)plVar13 - 1U & (ulong)plVar7);
  }
  else {
    unaff_x26 = plVar7;
    if (plVar13 <= plVar7) {
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar7 / (ulong)plVar13;
      }
      unaff_x26 = (long *)((long)plVar7 - uVar14 * (long)plVar13);
    }
  }
LAB_10088bc10:
  lVar2 = *param_1;
  plVar7 = *(long **)(lVar2 + (long)unaff_x26 * 8);
  if (plVar7 == (long *)0x0) {
    *plVar12 = *plVar4;
    *plVar4 = (long)plVar12;
    *(long **)(lVar2 + (long)unaff_x26 * 8) = plVar4;
    if (*plVar12 != 0) {
      plVar7 = *(long **)(*plVar12 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar7 = (long *)((ulong)plVar7 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar7) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar7 / (ulong)plVar13;
        }
        plVar7 = (long *)((long)plVar7 - uVar14 * (long)plVar13);
      }
      *(long **)(lVar2 + (long)plVar7 * 8) = plVar12;
    }
  }
  else {
    *plVar12 = *plVar7;
    *plVar7 = (long)plVar12;
  }
  param_1[3] = param_1[3] + 1;
  func_0x00010088bd18();
  uVar3 = 1;
LAB_10088bc8c:
  auVar15._8_8_ = uVar3;
  auVar15._0_8_ = plVar12;
  return auVar15;
}



/* Entry: 10088bcc8; end: 10088bcff;  */

void FUN_10088bcc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10088b8f8(param_1,param_2,param_2,param_3);
  return;
}



/* Entry: 10088bd00; end: 10088bd37;  */

void FUN_10088bd00(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10088bd38; end: 10088bd5b;  */

undefined8 FUN_10088bd38(undefined8 param_1)

{
  func_0x00010088bd20(param_1,0);
  return param_1;
}



/* Entry: 10088bd5c; end: 10088bd8b;  */

void FUN_10088bd5c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  for (lVar2 = param_1[4]; lVar2 != 0; lVar2 = lVar2 + -1) {
    lVar1 = param_1[2];
    param_1[2] = lVar1 + 0x28;
    if (lVar1 + 0x28 == param_1[1]) {
      param_1[2] = *param_1;
    }
  }
  return;
}



/* Entry: 10088bd8c; end: 10088bdab;  */

void FUN_10088bd8c(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10088bd5c(param_1,&uStack_11);
  return;
}



/* Entry: 10088bdac; end: 10088bddb;  */

void FUN_10088bdac(long *param_1)

{
  FUN_10088bd8c();
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10088bddc; end: 10088be07;  */

long FUN_10088bddc(long param_1)

{
  FUN_10088bdac(param_1 + 0x28);
  FUN_10088be58(param_1);
  return param_1;
}



/* Entry: 10088be08; end: 10088be37;  */

void FUN_10088be08(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  for (lVar2 = param_1[4]; lVar2 != 0; lVar2 = lVar2 + -1) {
    lVar1 = param_1[2];
    param_1[2] = lVar1 + 0x20;
    if (lVar1 + 0x20 == param_1[1]) {
      param_1[2] = *param_1;
    }
  }
  return;
}



/* Entry: 10088be38; end: 10088be57;  */

void FUN_10088be38(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10088be08(param_1,&uStack_11);
  return;
}



/* Entry: 10088be58; end: 10088be87;  */

void FUN_10088be58(long *param_1)

{
  FUN_10088be38();
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10088be88; end: 10088beb3;  */

void FUN_10088be88(long param_1)

{
  undefined8 *puVar1;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  *puVar1 = unaff_x24;
  puVar1[1] = unaff_x23;
  puVar1[2] = unaff_x20;
  puVar1[3] = unaff_x21;
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 0x20;
  return;
}



/* Entry: 10088beb4; end: 10088bf67;  */

void FUN_10088beb4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  ulong extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  long *unaff_x21;
  undefined8 uVar5;
  
  if (param_5 - param_4 == 0 || param_5 < param_4) {
    return;
  }
  func_0x0001006664dc(param_5 - param_4);
  uVar2 = extraout_x8 / 1000000;
  uVar3 = uVar2 * 1000000 - extraout_x8 == 0;
  if ((long)(uVar2 * 1000000) < (long)extraout_x8) {
    uVar2 = uVar2 + 1;
  }
  (**(code **)(**(long **)(param_1 + 0x10) + 0x38))
            (*(long **)(param_1 + 0x10),*(undefined4 *)(unaff_x19 + 0x58),uVar2 * 1000000,
             *(undefined4 *)(*unaff_x21 + 0xa8));
  FUN_10088c03c(*unaff_x21);
  lVar1 = 0xc0;
  if ((bool)uVar3) {
    lVar1 = 0x60;
  }
  uVar5 = *(undefined8 *)(extraout_x8_00 + lVar1);
  func_0x00010088c048();
  puVar4 = *(undefined8 **)(unaff_x19 + 0x30);
  FUN_10088c098(puVar4,uVar5);
  *puVar4 = uVar5;
  puVar4[1] = param_4;
  puVar4[2] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 200);
  return;
}



/* Entry: 10088bf68; end: 10088c03b;  */

void FUN_10088bf68(void)

{
  char in_NG;
  char in_OV;
  long extraout_x8;
  undefined8 *extraout_x8_00;
  
  FUN_10066690c();
  if (in_NG == in_OV) {
    FUN_1006669e8();
    func_0x0001006669fc();
    func_0x000100666a08();
    if (extraout_x8 == 0) {
      func_0x000107c35870();
      func_0x000107c3589c();
      func_0x000107c358bc();
      func_0x000107c358a0();
      func_0x000107c358c0();
      func_0x000107c358a4();
      func_0x000107c3587c();
      func_0x000107c3588c();
      func_0x000107c35894();
      func_0x000107c358c4();
      func_0x000107c35888();
      func_0x000107c358c8(*extraout_x8_00);
      func_0x000107c358dc();
    }
  }
  return;
}



/* Entry: 10088c03c; end: 10088c05b;  */

void FUN_10088c03c(void)

{
  return;
}



/* Entry: 10088c05c; end: 10088c097;  */

long FUN_10088c05c(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010088c050();
  if (param_1 == 0) {
    lVar1 = unaff_x19 + 8;
  }
  else {
    FUN_100893d18(unaff_x19 + 8,*(undefined8 *)(unaff_x19 + 0x10),unaff_x19 + 8,
                  *(undefined8 *)(param_1 + 0x18));
    lVar1 = *(long *)(unaff_x19 + 0x10);
  }
  return lVar1;
}



/* Entry: 10088c098; end: 10088c117;  */

undefined8 * FUN_10088c098(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_98 [112];
  undefined8 uStack_28;
  
  puVar1 = param_1 + 1;
  uStack_28 = param_2;
  FUN_10088c05c(puVar1,&uStack_28);
  if (param_1 + 2 == puVar1) {
    FUN_10088c21c(auStack_98,*param_1);
    puVar1 = param_1 + 1;
    FUN_10088c36c(puVar1,&uStack_28,auStack_98);
    func_0x00010088ca5c(auStack_98);
  }
  return puVar1 + 3;
}



/* Entry: 10088c118; end: 10088c1c7;  */

long FUN_10088c118(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = *param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar7 != uVar4) break;
        if (plVar2[2] == uVar4) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 10088c1c8; end: 10088c21b;  */

void FUN_10088c1c8(long param_1)

{
  long unaff_x19;
  long *unaff_x20;
  
  func_0x00010088c1bc();
  FUN_10088c2a0();
  *unaff_x20 = param_1;
  unaff_x20[1] = param_1 + unaff_x19 * 0x20;
  return;
}



/* Entry: 10088c21c; end: 10088c29f;  */

undefined8 * FUN_10088c21c(undefined8 *param_1,undefined8 param_2)

{
  undefined1 uStack_31;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x00010088c1f0(param_1 + 3,param_2,&uStack_31);
  param_1[8] = &PTR_DAT_110cf94e0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  FUN_10088c310(param_1 + 8,&PTR_PTR_113382ca8);
  return param_1;
}



/* Entry: 10088c2a0; end: 10088c30f;  */

long FUN_10088c2a0(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_30 [16];
  
  if (param_2 >> 0x3b != 0) {
    func_0x000104bd4838(auStack_30,&UNK_10f743d4d);
    func_0x000107c2a69c(auStack_30);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10088c300);
    (*pcVar1)();
  }
  if (param_2 != 0) {
    lVar2 = param_2 << 5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar2);
    return lVar2;
  }
  return 0;
}



/* Entry: 10088c310; end: 10088c343;  */

void FUN_10088c310(long param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010064e6e8();
  FUN_10088c344();
  if (*(int *)(unaff_x19 + 0x10) != 0) {
    *(int *)(unaff_x20 + 0x10) = *(int *)(unaff_x19 + 0x10);
  }
  if (*(int *)(unaff_x19 + 0x14) != 0) {
    *(int *)(unaff_x20 + 0x14) = *(int *)(unaff_x19 + 0x14);
  }
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    *(long *)(unaff_x20 + 0x18) = *(long *)(unaff_x19 + 0x18);
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    *(int *)(unaff_x20 + 0x20) = *(int *)(unaff_x19 + 0x20);
  }
  if (*(int *)(unaff_x19 + 0x24) != 0) {
    *(int *)(unaff_x20 + 0x24) = *(int *)(unaff_x19 + 0x24);
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10088c344; end: 10088c36b;  */

void FUN_10088c344(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 10088c36c; end: 10088c42f;  */

undefined8 FUN_10088c36c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  undefined8 uStack_38;
  
  func_0x00010088c050();
  if (param_1 == 0) {
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      func_0x00010088c3e8();
    }
  }
  else {
    func_0x000107c2c980();
  }
  FUN_10088c520(unaff_x19 + 8,param_2,param_3);
  uStack_38 = *(undefined8 *)(unaff_x19 + 0x10);
  func_0x00010088c9e8(unaff_x19 + 0x20,param_2,&uStack_38);
  return *(undefined8 *)(unaff_x19 + 0x10);
}



/* Entry: 10088c430; end: 10088c457;  */

long FUN_10088c430(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < 0x1e1e1e1e1e1e1e2) {
    lVar1 = param_2 * 0x88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  *(ulong *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10088c430();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10088c458; end: 10088c47f;  */

long FUN_10088c458(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10088c430();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10088c480; end: 10088c51f;  */

undefined8 *
FUN_10088c480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 auStack_50 [2];
  undefined8 *puStack_40;
  long lStack_38;
  
  puVar3 = auStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10088c458(auStack_50,1);
  *puStack_40 = param_2;
  puStack_40[1] = param_3;
  FUN_10088c5ec(puStack_40 + 2,param_4,param_5);
  puVar1 = puStack_40;
  puStack_40 = (undefined8 *)0x0;
  FUN_10088c618();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  puVar4 = puVar3;
  FUN_10088c480();
  puVar1 = (undefined8 *)puVar3[1];
  lVar2 = puVar3[2];
  *puVar4 = puVar3;
  puVar4[1] = puVar1;
  *puVar1 = puVar4;
  puVar3[1] = puVar4;
  puVar3[2] = lVar2 + 1;
  return puVar4 + 2;
}



/* Entry: 10088c520; end: 10088c563;  */

long * FUN_10088c520(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = param_1;
  FUN_10088c480(param_1,0,0,param_2,param_3);
  puVar1 = (undefined8 *)param_1[1];
  lVar2 = param_1[2];
  *plVar3 = (long)param_1;
  plVar3[1] = (long)puVar1;
  *puVar1 = plVar3;
  param_1[1] = (long)plVar3;
  param_1[2] = lVar2 + 1;
  return plVar3 + 2;
}



/* Entry: 10088c564; end: 10088c5eb;  */

undefined8 * FUN_10088c564(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  uVar1 = param_2[3];
  param_2[3] = 0;
  param_1[3] = uVar1;
  uVar1 = param_2[4];
  param_2[4] = param_1[4];
  param_1[4] = uVar1;
  uVar1 = param_2[5];
  param_2[5] = param_1[5];
  param_1[5] = uVar1;
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  param_2[6] = param_1[6];
  param_2[7] = 0;
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  func_0x0001006502bc(param_1 + 8,param_2 + 8);
  return param_1;
}



/* Entry: 10088c5ec; end: 10088c617;  */

undefined8 * FUN_10088c5ec(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_1 = *param_2;
  FUN_10088c564(param_1 + 1,param_3);
  return param_1;
}



/* Entry: 10088c618; end: 10088c627;  */

void FUN_10088c618(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10088c628; end: 10088c9c7;  */

undefined1  [16] FUN_10088c628(long *param_1,ulong *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x24;
  long lVar15;
  undefined1 auVar16 [16];
  
  uVar13 = *param_2;
  uVar14 = param_1[1];
  if (uVar14 != 0) {
    uVar4 = uVar14 - 1;
    if ((uVar14 & uVar4) == 0) {
      unaff_x24 = uVar4 & uVar13;
    }
    else {
      unaff_x24 = uVar13;
      if (uVar14 <= uVar13) {
        uVar5 = 0;
        if (uVar14 != 0) {
          uVar5 = uVar13 / uVar14;
        }
        unaff_x24 = uVar13 - uVar5 * uVar14;
      }
    }
    plVar11 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar11 != (long *)0x0) {
      do {
        while( true ) {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_10088c6d8;
          uVar5 = plVar11[1];
          if (uVar5 != uVar13) break;
          if (plVar11[2] == uVar13) {
            uVar3 = 0;
            goto LAB_10088c994;
          }
        }
        if ((uVar14 & uVar4) == 0) {
          uVar5 = uVar5 & uVar4;
        }
        else if (uVar14 <= uVar5) {
          uVar6 = 0;
          if (uVar14 != 0) {
            uVar6 = uVar5 / uVar14;
          }
          uVar5 = uVar5 - uVar6 * uVar14;
        }
      } while (uVar5 == unaff_x24);
    }
  }
LAB_10088c6d8:
  lVar12 = *param_3;
  lVar15 = *param_4;
  plVar1 = param_1 + 2;
  plVar11 = (long *)0x20;
  func_0x000107c60e20();
  *plVar11 = 0;
  plVar11[1] = uVar13;
  plVar11[2] = lVar12;
  plVar11[3] = lVar15;
  if ((uVar14 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar14))
  goto LAB_10088c918;
  uVar4 = 1;
  if (2 < uVar14) {
    uVar4 = (ulong)((uVar14 & uVar14 - 1) != 0);
  }
  uVar4 = uVar4 | uVar14 << 1;
  uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar4 <= uVar5) {
    uVar4 = uVar5;
  }
  if (uVar4 - 1 == 0) {
    uVar4 = 2;
  }
  else if ((uVar4 & uVar4 - 1) != 0) {
    func_0x000107c60c44();
    uVar14 = param_1[1];
  }
  if (uVar14 < uVar4) {
LAB_10088c784:
    if (uVar4 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10088c9bc);
      (*pcVar2)();
    }
    lVar12 = uVar4 << 3;
    func_0x000107c60e20(lVar12);
    FUN_10088ca00(param_1,lVar12);
    param_1[1] = uVar4;
    lVar12 = *param_1;
    for (uVar14 = 0; uVar4 != uVar14; uVar14 = uVar14 + 1) {
      *(undefined8 *)(lVar12 + uVar14 * 8) = 0;
    }
    plVar7 = (long *)*plVar1;
    uVar14 = uVar4;
    if (plVar7 != (long *)0x0) {
      uVar9 = plVar7[1];
      uVar6 = uVar4 - 1;
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar9 / uVar4;
      }
      uVar10 = uVar9;
      if (uVar4 <= uVar9) {
        uVar10 = uVar9 - uVar5 * uVar4;
      }
      if ((uVar4 & uVar6) == 0) {
        uVar10 = uVar9 & uVar6;
      }
      *(long **)(lVar12 + uVar10 * 8) = plVar1;
      while (plVar8 = plVar7, plVar7 = (long *)*plVar8, plVar7 != (long *)0x0) {
        uVar5 = plVar7[1];
        if ((uVar4 & uVar6) == 0) {
          uVar5 = uVar5 & uVar6;
        }
        else if (uVar4 <= uVar5) {
          uVar9 = 0;
          if (uVar4 != 0) {
            uVar9 = uVar5 / uVar4;
          }
          uVar5 = uVar5 - uVar9 * uVar4;
        }
        if (uVar5 != uVar10) {
          if (*(long *)(lVar12 + uVar5 * 8) == 0) {
            *(long **)(lVar12 + uVar5 * 8) = plVar8;
            uVar10 = uVar5;
          }
          else {
            *plVar8 = *plVar7;
            *plVar7 = **(undefined8 **)(lVar12 + uVar5 * 8);
            **(long **)(lVar12 + uVar5 * 8) = (long)plVar7;
            plVar7 = plVar8;
          }
        }
      }
    }
  }
  else if (uVar4 < uVar14) {
    uVar5 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar14 < 3) || ((uVar14 & uVar14 - 1) != 0)) {
      func_0x000107c60c44();
    }
    else if (1 < uVar5) {
      uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
    }
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
    if (uVar4 < uVar14) {
      if (uVar4 != 0) goto LAB_10088c784;
      FUN_10088ca00(param_1,0);
      param_1[1] = 0;
      uVar14 = 0;
    }
    else {
      uVar14 = param_1[1];
    }
  }
  if ((uVar14 & uVar14 - 1) == 0) {
    unaff_x24 = uVar14 - 1 & uVar13;
  }
  else {
    unaff_x24 = uVar13;
    if (uVar14 <= uVar13) {
      uVar4 = 0;
      if (uVar14 != 0) {
        uVar4 = uVar13 / uVar14;
      }
      unaff_x24 = uVar13 - uVar4 * uVar14;
    }
  }
LAB_10088c918:
  lVar12 = *param_1;
  plVar7 = *(long **)(lVar12 + unaff_x24 * 8);
  if (plVar7 == (long *)0x0) {
    *plVar11 = *plVar1;
    *plVar1 = (long)plVar11;
    *(long **)(lVar12 + unaff_x24 * 8) = plVar1;
    if (*plVar11 != 0) {
      uVar13 = *(ulong *)(*plVar11 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar13 = uVar13 & uVar14 - 1;
      }
      else if (uVar14 <= uVar13) {
        uVar4 = 0;
        if (uVar14 != 0) {
          uVar4 = uVar13 / uVar14;
        }
        uVar13 = uVar13 - uVar4 * uVar14;
      }
      *(long **)(lVar12 + uVar13 * 8) = plVar11;
    }
  }
  else {
    *plVar11 = *plVar7;
    *plVar7 = (long)plVar11;
  }
  param_1[3] = param_1[3] + 1;
  func_0x00010088ca18();
  uVar3 = 1;
LAB_10088c994:
  auVar16._8_8_ = uVar3;
  auVar16._0_8_ = plVar11;
  return auVar16;
}



/* Entry: 10088c9c8; end: 10088c9ff;  */

void FUN_10088c9c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10088c628(param_1,param_2,param_2,param_3);
  return;
}



/* Entry: 10088ca00; end: 10088ca37;  */

void FUN_10088ca00(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10088ca38; end: 10088ca87;  */

undefined8 FUN_10088ca38(undefined8 param_1)

{
  func_0x00010088ca20(param_1,0);
  return param_1;
}



/* Entry: 10088ca88; end: 10088cab7;  */

void FUN_10088ca88(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  for (lVar2 = param_1[4]; lVar2 != 0; lVar2 = lVar2 + -1) {
    lVar1 = param_1[2];
    param_1[2] = lVar1 + 0x20;
    if (lVar1 + 0x20 == param_1[1]) {
      param_1[2] = *param_1;
    }
  }
  return;
}



/* Entry: 10088cab8; end: 10088cad7;  */

void FUN_10088cab8(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10088ca88(param_1,&uStack_11);
  return;
}



/* Entry: 10088cad8; end: 10088cb07;  */

void FUN_10088cad8(long *param_1)

{
  FUN_10088cab8();
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10088cb08; end: 10088cb0f;  */

void FUN_10088cb08(long param_1)

{
  code *pcVar1;
  long in_x7;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  ulong unaff_x27;
  long lVar14;
  long lStack_a0;
  ulong uStack_98;
  long *plStack_90;
  ulong uStack_88;
  float fStack_80;
  long *plStack_78;
  long **pplStack_70;
  undefined8 uStack_68;
  
  uStack_98 = 0;
  lStack_a0 = 0;
  uStack_88 = 0;
  plStack_90 = (long *)0x0;
  fStack_80 = 1.0;
  plVar12 = (long *)(in_x7 + 0x10);
LAB_10088cb54:
  do {
    plVar12 = (long *)*plVar12;
    plVar4 = plStack_90;
    if (plVar12 == (long *)0x0) {
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        (**(code **)(**(long **)(param_1 + -0x10) + 0x50))
                  (*(long **)(param_1 + -0x10),(int)plVar4[3],plVar4[4],
                   *(undefined4 *)(param_1 + 0x48),(int)plVar4[2]);
      }
      FUN_10088d034(&lStack_a0);
      return;
    }
    uVar3 = param_1 - 0x20U;
    FUN_10067e8d0(param_1 - 0x20U,plVar12 + 2);
    uVar5 = uStack_98;
    uVar13 = uVar3 & 0xffffffff;
    iVar11 = (int)uVar3;
    if (uStack_98 == 0) {
      lVar14 = *(long *)(plVar12[2] + 0x38);
    }
    else {
      if (uStack_88 != 0) {
        uVar2 = uStack_98 - 1;
        uVar3 = 0;
        if (uStack_98 <= uVar13) {
          uVar3 = uStack_98;
        }
        uVar3 = uVar13 - uVar3;
        if ((uStack_98 & uVar2) == 0) {
          uVar3 = (int)uStack_98 - 1 & uVar13;
        }
        plVar4 = *(long **)(lStack_a0 + uVar3 * 8);
        if (plVar4 != (long *)0x0) {
          do {
            while( true ) {
              plVar4 = (long *)*plVar4;
              if (plVar4 == (long *)0x0) goto LAB_10088cbf8;
              uVar8 = plVar4[1];
              if (uVar8 != uVar13) break;
              if (*(int *)(plVar4 + 2) == iVar11) {
                plVar4[4] = plVar4[4] + *(long *)(plVar12[2] + 0x38);
                *(int *)(plVar4 + 3) = *(int *)(plVar4 + 3) + 1;
                goto LAB_10088cb54;
              }
            }
            if ((uStack_98 & uVar2) == 0) {
              uVar8 = uVar8 & uVar2;
            }
            else if (uStack_98 <= uVar8) {
              uVar9 = 0;
              if (uStack_98 != 0) {
                uVar9 = uVar8 / uStack_98;
              }
              uVar8 = uVar8 - uVar9 * uStack_98;
            }
          } while (uVar8 == uVar3);
LAB_10088cbf8:
          uVar13 = (ulong)iVar11;
        }
      }
      uVar3 = uStack_98 - 1;
      if ((uStack_98 & uVar3) == 0) {
        unaff_x27 = uVar13 & uVar3;
      }
      else {
        unaff_x27 = uVar13;
        if (uStack_98 <= uVar13) {
          uVar2 = 0;
          if (uStack_98 != 0) {
            uVar2 = uVar13 / uStack_98;
          }
          unaff_x27 = uVar13 - uVar2 * uStack_98;
        }
      }
      lVar14 = *(long *)(plVar12[2] + 0x38);
      plVar4 = *(long **)(lStack_a0 + unaff_x27 * 8);
      if (plVar4 != (long *)0x0) {
        do {
          while( true ) {
            plVar4 = (long *)*plVar4;
            if (plVar4 == (long *)0x0) goto LAB_10088cc90;
            uVar2 = plVar4[1];
            if (uVar2 != uVar13) break;
            if (*(int *)(plVar4 + 2) == iVar11) goto LAB_10088cb54;
          }
          if ((uStack_98 & uVar3) == 0) {
            uVar2 = uVar2 & uVar3;
          }
          else if (uStack_98 <= uVar2) {
            uVar8 = 0;
            if (uStack_98 != 0) {
              uVar8 = uVar2 / uStack_98;
            }
            uVar2 = uVar2 - uVar8 * uStack_98;
          }
        } while (uVar2 == unaff_x27);
      }
    }
LAB_10088cc90:
    plVar4 = (long *)0x28;
    func_0x000107c60e20();
    uStack_68 = 1;
    *plVar4 = 0;
    plVar4[1] = uVar13;
    *(int *)(plVar4 + 2) = iVar11;
    *(undefined4 *)(plVar4 + 3) = 1;
    plVar4[4] = lVar14;
    pplStack_70 = &plStack_90;
    if ((uVar5 == 0) || (uVar3 = unaff_x27, fStack_80 * (float)uVar5 < (float)(uStack_88 + 1))) {
      uVar3 = 1;
      if (2 < uVar5) {
        uVar3 = (ulong)((uVar5 & uVar5 - 1) != 0);
      }
      uVar3 = uVar3 | uVar5 << 1;
      uVar2 = (ulong)((float)(uStack_88 + 1) / fStack_80);
      if (uVar3 <= uVar2) {
        uVar3 = uVar2;
      }
      uVar2 = uVar5;
      plStack_78 = plVar4;
      if (uVar3 - 1 == 0) {
        uVar3 = 2;
      }
      else if ((uVar3 & uVar3 - 1) != 0) {
        func_0x000107c60c44();
        uVar2 = uStack_98;
      }
      if (uVar2 < uVar3) {
LAB_10088cd3c:
        if (uVar3 >> 0x3d != 0) {
          func_0x000104bd35f4();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10088cfbc);
          (*pcVar1)();
        }
        lVar14 = uVar3 << 3;
        func_0x000107c60e20(lVar14);
        FUN_10088cfe8(&lStack_a0,lVar14);
        for (uVar5 = 0; uVar3 != uVar5; uVar5 = uVar5 + 1) {
          *(undefined8 *)(lStack_a0 + uVar5 * 8) = 0;
        }
        uVar5 = uVar3;
        uStack_98 = uVar3;
        if (plStack_90 != (long *)0x0) {
          uVar9 = plStack_90[1];
          uVar8 = uVar3 - 1;
          uVar2 = 0;
          if (uVar3 != 0) {
            uVar2 = uVar9 / uVar3;
          }
          uVar10 = uVar9;
          if (uVar3 <= uVar9) {
            uVar10 = uVar9 - uVar2 * uVar3;
          }
          if ((uVar3 & uVar8) == 0) {
            uVar10 = uVar9 & uVar8;
          }
          *(long ***)(lStack_a0 + uVar10 * 8) = &plStack_90;
          plVar6 = plStack_90;
          while (plVar7 = plVar6, plVar6 = (long *)*plVar7, plVar6 != (long *)0x0) {
            uVar2 = plVar6[1];
            if ((uVar3 & uVar8) == 0) {
              uVar2 = uVar2 & uVar8;
            }
            else if (uVar3 <= uVar2) {
              uVar9 = 0;
              if (uVar3 != 0) {
                uVar9 = uVar2 / uVar3;
              }
              uVar2 = uVar2 - uVar9 * uVar3;
            }
            if (uVar2 != uVar10) {
              if (*(long *)(lStack_a0 + uVar2 * 8) == 0) {
                *(long **)(lStack_a0 + uVar2 * 8) = plVar7;
                uVar10 = uVar2;
              }
              else {
                *plVar7 = *plVar6;
                *plVar6 = **(long **)(lStack_a0 + uVar2 * 8);
                **(undefined8 **)(lStack_a0 + uVar2 * 8) = plVar6;
                plVar6 = plVar7;
              }
            }
          }
        }
      }
      else {
        uVar5 = uVar2;
        if (uVar3 < uVar2) {
          uVar5 = (ulong)((float)uStack_88 / fStack_80);
          if ((uVar2 < 3) || ((uVar2 & uVar2 - 1) != 0)) {
            func_0x000107c60c44();
          }
          else if (1 < uVar5) {
            uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
          }
          if (uVar3 <= uVar5) {
            uVar3 = uVar5;
          }
          uVar5 = uStack_98;
          if (uVar3 < uVar2) {
            if (uVar3 != 0) goto LAB_10088cd3c;
            FUN_10088cfe8(&lStack_a0,0);
            uStack_98 = 0;
            uVar5 = 0;
          }
        }
      }
      if ((uVar5 & uVar5 - 1) == 0) {
        uVar3 = uVar5 - 1 & uVar13;
      }
      else {
        uVar3 = uVar13;
        if (uVar5 <= uVar13) {
          uVar3 = 0;
          if (uVar5 != 0) {
            uVar3 = uVar13 / uVar5;
          }
          uVar3 = uVar13 - uVar3 * uVar5;
        }
      }
    }
    plVar6 = *(long **)(lStack_a0 + uVar3 * 8);
    if (plVar6 == (long *)0x0) {
      *plVar4 = (long)plStack_90;
      *(long ***)(lStack_a0 + uVar3 * 8) = &plStack_90;
      plStack_90 = plVar4;
      if (*plVar4 != 0) {
        uVar3 = *(ulong *)(*plVar4 + 8);
        if ((uVar5 & uVar5 - 1) == 0) {
          uVar3 = uVar3 & uVar5 - 1;
        }
        else if (uVar5 <= uVar3) {
          uVar13 = 0;
          if (uVar5 != 0) {
            uVar13 = uVar3 / uVar5;
          }
          uVar3 = uVar3 - uVar13 * uVar5;
        }
        *(long **)(lStack_a0 + uVar3 * 8) = plVar4;
      }
    }
    else {
      *plVar4 = *plVar6;
      *plVar6 = (long)plVar4;
    }
    plStack_78 = (long *)0x0;
    uStack_88 = uStack_88 + 1;
    FUN_10088d000(&plStack_78);
  } while( true );
}



/* Entry: 10088cb10; end: 10088cfe7;  */

void FUN_10088cb10(ulong param_1)

{
  code *pcVar1;
  long in_x7;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  ulong unaff_x27;
  long lVar14;
  long lStack_a0;
  ulong uStack_98;
  long *plStack_90;
  ulong uStack_88;
  float fStack_80;
  long *plStack_78;
  long **pplStack_70;
  undefined8 uStack_68;
  
  uStack_98 = 0;
  lStack_a0 = 0;
  uStack_88 = 0;
  plStack_90 = (long *)0x0;
  fStack_80 = 1.0;
  plVar12 = (long *)(in_x7 + 0x10);
LAB_10088cb54:
  do {
    plVar12 = (long *)*plVar12;
    plVar4 = plStack_90;
    if (plVar12 == (long *)0x0) {
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        (**(code **)(**(long **)(param_1 + 0x10) + 0x50))
                  (*(long **)(param_1 + 0x10),(int)plVar4[3],plVar4[4],
                   *(undefined4 *)(param_1 + 0x68),(int)plVar4[2]);
      }
      FUN_10088d034(&lStack_a0);
      return;
    }
    uVar3 = param_1;
    FUN_10067e8d0(param_1,plVar12 + 2);
    uVar5 = uStack_98;
    uVar13 = uVar3 & 0xffffffff;
    iVar11 = (int)uVar3;
    if (uStack_98 == 0) {
      lVar14 = *(long *)(plVar12[2] + 0x38);
    }
    else {
      if (uStack_88 != 0) {
        uVar2 = uStack_98 - 1;
        uVar3 = 0;
        if (uStack_98 <= uVar13) {
          uVar3 = uStack_98;
        }
        uVar3 = uVar13 - uVar3;
        if ((uStack_98 & uVar2) == 0) {
          uVar3 = (int)uStack_98 - 1 & uVar13;
        }
        plVar4 = *(long **)(lStack_a0 + uVar3 * 8);
        if (plVar4 != (long *)0x0) {
          do {
            while( true ) {
              plVar4 = (long *)*plVar4;
              if (plVar4 == (long *)0x0) goto LAB_10088cbf8;
              uVar8 = plVar4[1];
              if (uVar8 != uVar13) break;
              if (*(int *)(plVar4 + 2) == iVar11) {
                plVar4[4] = plVar4[4] + *(long *)(plVar12[2] + 0x38);
                *(int *)(plVar4 + 3) = *(int *)(plVar4 + 3) + 1;
                goto LAB_10088cb54;
              }
            }
            if ((uStack_98 & uVar2) == 0) {
              uVar8 = uVar8 & uVar2;
            }
            else if (uStack_98 <= uVar8) {
              uVar9 = 0;
              if (uStack_98 != 0) {
                uVar9 = uVar8 / uStack_98;
              }
              uVar8 = uVar8 - uVar9 * uStack_98;
            }
          } while (uVar8 == uVar3);
LAB_10088cbf8:
          uVar13 = (ulong)iVar11;
        }
      }
      uVar3 = uStack_98 - 1;
      if ((uStack_98 & uVar3) == 0) {
        unaff_x27 = uVar13 & uVar3;
      }
      else {
        unaff_x27 = uVar13;
        if (uStack_98 <= uVar13) {
          uVar2 = 0;
          if (uStack_98 != 0) {
            uVar2 = uVar13 / uStack_98;
          }
          unaff_x27 = uVar13 - uVar2 * uStack_98;
        }
      }
      lVar14 = *(long *)(plVar12[2] + 0x38);
      plVar4 = *(long **)(lStack_a0 + unaff_x27 * 8);
      if (plVar4 != (long *)0x0) {
        do {
          while( true ) {
            plVar4 = (long *)*plVar4;
            if (plVar4 == (long *)0x0) goto LAB_10088cc90;
            uVar2 = plVar4[1];
            if (uVar2 != uVar13) break;
            if (*(int *)(plVar4 + 2) == iVar11) goto LAB_10088cb54;
          }
          if ((uStack_98 & uVar3) == 0) {
            uVar2 = uVar2 & uVar3;
          }
          else if (uStack_98 <= uVar2) {
            uVar8 = 0;
            if (uStack_98 != 0) {
              uVar8 = uVar2 / uStack_98;
            }
            uVar2 = uVar2 - uVar8 * uStack_98;
          }
        } while (uVar2 == unaff_x27);
      }
    }
LAB_10088cc90:
    plVar4 = (long *)0x28;
    func_0x000107c60e20();
    uStack_68 = 1;
    *plVar4 = 0;
    plVar4[1] = uVar13;
    *(int *)(plVar4 + 2) = iVar11;
    *(undefined4 *)(plVar4 + 3) = 1;
    plVar4[4] = lVar14;
    pplStack_70 = &plStack_90;
    if ((uVar5 == 0) || (uVar3 = unaff_x27, fStack_80 * (float)uVar5 < (float)(uStack_88 + 1))) {
      uVar3 = 1;
      if (2 < uVar5) {
        uVar3 = (ulong)((uVar5 & uVar5 - 1) != 0);
      }
      uVar3 = uVar3 | uVar5 << 1;
      uVar2 = (ulong)((float)(uStack_88 + 1) / fStack_80);
      if (uVar3 <= uVar2) {
        uVar3 = uVar2;
      }
      uVar2 = uVar5;
      plStack_78 = plVar4;
      if (uVar3 - 1 == 0) {
        uVar3 = 2;
      }
      else if ((uVar3 & uVar3 - 1) != 0) {
        func_0x000107c60c44();
        uVar2 = uStack_98;
      }
      if (uVar2 < uVar3) {
LAB_10088cd3c:
        if (uVar3 >> 0x3d != 0) {
          func_0x000104bd35f4();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10088cfbc);
          (*pcVar1)();
        }
        lVar14 = uVar3 << 3;
        func_0x000107c60e20(lVar14);
        FUN_10088cfe8(&lStack_a0,lVar14);
        for (uVar5 = 0; uVar3 != uVar5; uVar5 = uVar5 + 1) {
          *(undefined8 *)(lStack_a0 + uVar5 * 8) = 0;
        }
        uVar5 = uVar3;
        uStack_98 = uVar3;
        if (plStack_90 != (long *)0x0) {
          uVar9 = plStack_90[1];
          uVar8 = uVar3 - 1;
          uVar2 = 0;
          if (uVar3 != 0) {
            uVar2 = uVar9 / uVar3;
          }
          uVar10 = uVar9;
          if (uVar3 <= uVar9) {
            uVar10 = uVar9 - uVar2 * uVar3;
          }
          if ((uVar3 & uVar8) == 0) {
            uVar10 = uVar9 & uVar8;
          }
          *(long ***)(lStack_a0 + uVar10 * 8) = &plStack_90;
          plVar6 = plStack_90;
          while (plVar7 = plVar6, plVar6 = (long *)*plVar7, plVar6 != (long *)0x0) {
            uVar2 = plVar6[1];
            if ((uVar3 & uVar8) == 0) {
              uVar2 = uVar2 & uVar8;
            }
            else if (uVar3 <= uVar2) {
              uVar9 = 0;
              if (uVar3 != 0) {
                uVar9 = uVar2 / uVar3;
              }
              uVar2 = uVar2 - uVar9 * uVar3;
            }
            if (uVar2 != uVar10) {
              if (*(long *)(lStack_a0 + uVar2 * 8) == 0) {
                *(long **)(lStack_a0 + uVar2 * 8) = plVar7;
                uVar10 = uVar2;
              }
              else {
                *plVar7 = *plVar6;
                *plVar6 = **(long **)(lStack_a0 + uVar2 * 8);
                **(undefined8 **)(lStack_a0 + uVar2 * 8) = plVar6;
                plVar6 = plVar7;
              }
            }
          }
        }
      }
      else {
        uVar5 = uVar2;
        if (uVar3 < uVar2) {
          uVar5 = (ulong)((float)uStack_88 / fStack_80);
          if ((uVar2 < 3) || ((uVar2 & uVar2 - 1) != 0)) {
            func_0x000107c60c44();
          }
          else if (1 < uVar5) {
            uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
          }
          if (uVar3 <= uVar5) {
            uVar3 = uVar5;
          }
          uVar5 = uStack_98;
          if (uVar3 < uVar2) {
            if (uVar3 != 0) goto LAB_10088cd3c;
            FUN_10088cfe8(&lStack_a0,0);
            uStack_98 = 0;
            uVar5 = 0;
          }
        }
      }
      if ((uVar5 & uVar5 - 1) == 0) {
        uVar3 = uVar5 - 1 & uVar13;
      }
      else {
        uVar3 = uVar13;
        if (uVar5 <= uVar13) {
          uVar3 = 0;
          if (uVar5 != 0) {
            uVar3 = uVar13 / uVar5;
          }
          uVar3 = uVar13 - uVar3 * uVar5;
        }
      }
    }
    plVar6 = *(long **)(lStack_a0 + uVar3 * 8);
    if (plVar6 == (long *)0x0) {
      *plVar4 = (long)plStack_90;
      *(long ***)(lStack_a0 + uVar3 * 8) = &plStack_90;
      plStack_90 = plVar4;
      if (*plVar4 != 0) {
        uVar3 = *(ulong *)(*plVar4 + 8);
        if ((uVar5 & uVar5 - 1) == 0) {
          uVar3 = uVar3 & uVar5 - 1;
        }
        else if (uVar5 <= uVar3) {
          uVar13 = 0;
          if (uVar5 != 0) {
            uVar13 = uVar3 / uVar5;
          }
          uVar3 = uVar3 - uVar13 * uVar5;
        }
        *(long **)(lStack_a0 + uVar3 * 8) = plVar4;
      }
    }
    else {
      *plVar4 = *plVar6;
      *plVar6 = (long)plVar4;
    }
    plStack_78 = (long *)0x0;
    uStack_88 = uStack_88 + 1;
    FUN_10088d000(&plStack_78);
  } while( true );
}



/* Entry: 10088cfe8; end: 10088cfff;  */

void FUN_10088cfe8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10088d000; end: 10088d02b;  */

long * FUN_10088d000(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 10088d02c; end: 10088d033;  */

void FUN_10088d02c(void)

{
  return;
}



/* Entry: 10088d034; end: 10088d077;  */

long * FUN_10088d034(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    func_0x000107c60e14();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 10088d078; end: 10088d3bb;  */

void FUN_10088d078(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010088d084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}



/* Entry: 10088d3bc; end: 10088d61b; -[SCCameraToolbarNGSBackgroundView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10088d3bc(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126f04a0;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_layoutSubviews_112600e60);
  uVar2 = param_1;
  func_0x000107c4aba4();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c3dcf8();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c3ec60(param_1);
  func_0x000107c3ec60(param_1);
  puVar4 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x000107c3ec60(param_1);
  func_0x000107c3e8ac(puVar4);
  func_0x000107c61180();
  if (uVar3 != 0) {
    func_0x000107c3e740(PTR__OBJC_CLASS___CATransaction_1126b5718);
    puVar5 = PTR__OBJC_CLASS___CATransaction_1126b5718;
    func_0x000107c42378(uVar3);
    func_0x000107c52714(puVar5);
    puVar5 = PTR__OBJC_CLASS___CATransaction_1126b5718;
    uVar2 = uVar3;
    func_0x000107c5ca98(uVar3);
    func_0x000107c61180();
    func_0x000107c52720(puVar5);
    func_0x000107c61170(uVar2);
    puVar5 = PTR__OBJC_CLASS___CASpringAnimation_1126b5720;
    func_0x000107c61158(PTR__OBJC_CLASS___CASpringAnimation_1126b5720);
    uVar2 = uVar3;
    func_0x000107c6115c(uVar3,puVar5);
    if ((uVar2 & 1) == 0) {
      puVar5 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
      func_0x000107c3dd18(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
      func_0x000107c61180();
    }
    else {
      func_0x000107c61174(uVar3);
      puVar5 = PTR__OBJC_CLASS___CASpringAnimation_1126b5720;
      func_0x000107c3dd18(PTR__OBJC_CLASS___CASpringAnimation_1126b5720);
      func_0x000107c61180();
      func_0x000107c4c550(uVar3);
      func_0x000107c56300(puVar5);
      func_0x000107c5bde0(uVar3);
      func_0x000107c598c4(puVar5);
      func_0x000107c4120c(uVar3);
      func_0x000107c53de8(puVar5);
      func_0x000107c4966c(uVar3);
      func_0x000107c55404(puVar5);
      iVar1 = 2;
      FUN_100029b9c(2,0x11,0,0);
      if (iVar1 != 0) {
        func_0x000107c3dc3c(uVar3);
        func_0x000107c526b0(puVar5);
      }
      func_0x000107c61170(uVar3);
    }
    func_0x000107c3d5a4(*(undefined8 *)(param_1 + (long)_DAT_112742af8));
    func_0x000107c3fe58(PTR__OBJC_CLASS___CATransaction_1126b5718);
    func_0x000107c61170(puVar5);
  }
  func_0x000107c61178(puVar4);
  func_0x000107c3ab30();
  func_0x000107c57274(*(undefined8 *)(param_1 + (long)_DAT_112742af8));
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 10088d61c; end: 10088d73f; -[SCCameraVerticalToolbar _setupToolbarViewConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10088d61c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = (long)_DAT_112742bac;
  uVar2 = *(undefined8 *)(param_1 + lVar8);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar8);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar2 = uVar3;
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar4 = uVar2;
  func_0x000107c40290(0);
  func_0x000107c61180();
  lVar8 = (long)_DAT_112742bdc;
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  *(undefined8 *)(param_1 + lVar8) = uVar4;
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uStack_40 = *(undefined8 *)(param_1 + lVar8);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c3e17c();
  func_0x000107c61180();
  func_0x000107c3d048(puVar1);
  puVar6 = puVar5;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  puStack_60 = puVar1;
  pcStack_48 = FUN_10088d740;
  puStack_58 = puVar5;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x000107c61144(auStack_68,puVar6);
  uVar2 = *(undefined8 *)(puVar6 + _DAT_112742bc4);
  *(undefined8 *)(puVar6 + _DAT_112742bc4) = 0;
  func_0x000107c61170(uVar2);
  func_0x000107c61120(auStack_68);
  return;
}



/* Entry: 10088d740; end: 10088d78b; -[SCCameraVerticalToolbar _setupDebug] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10088d740(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_28 [8];
  
  func_0x000107c61144(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112742bc4);
  *(undefined8 *)(param_1 + _DAT_112742bc4) = 0;
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_28);
  return;
}



/* Entry: 10088d78c; end: 10088d8bf;  */

/* WARNING: Possible PIC construction at 0x00010088d7e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010088d82c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010088d890: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010088d8a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010088d894) */
/* WARNING: Removing unreachable block (ram,0x00010088d830) */
/* WARNING: Removing unreachable block (ram,0x00010088d7e8) */
/* WARNING: Removing unreachable block (ram,0x00010088d838) */
/* WARNING: Removing unreachable block (ram,0x00010088d7f8) */
/* WARNING: Removing unreachable block (ram,0x00010088d8a4) */

void FUN_10088d78c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c4d9f8();
  func_0x000107c61180();
  func_0x000107c4d2d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10088d8c0; end: 10088d8f7;  */

void FUN_10088d8c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c40794(uVar2);
  func_0x000107c40190(uVar1,param_2,uVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10088d8f8; end: 10088d95f; -[SCCameraVerticalToolbar configureWithCameraToolbarProviders:shouldLoadDuringStartup:] */

/* WARNING: Possible PIC construction at 0x00010088d948: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10088d8f8(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000107c61174(param_3);
  if (param_4 == 0) {
    lVar2 = (long)_DAT_112742be8;
    func_0x000107c61174(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_3;
  }
  else {
    func_0x000107c3b140(param_1,param_2,param_3);
    uVar1 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10088d960; end: 10088dbbb; -[SCCameraVerticalToolbar _configureStartupToolbarFeatures:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10088d960(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  if ((*(byte *)(param_1 + _DAT_112742bec) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_112742bec) = 1;
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112742b90);
    *(undefined **)(param_1 + _DAT_112742b90) = puVar1;
    func_0x000107c61170(uVar3);
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112742b94);
    *(undefined **)(param_1 + _DAT_112742b94) = puVar1;
    func_0x000107c61170(uVar3);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112742ba4);
    *(undefined **)(param_1 + _DAT_112742ba4) = puVar1;
    func_0x000107c61170(uVar3);
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112742b84);
    *(undefined **)(param_1 + _DAT_112742b84) = puVar1;
    func_0x000107c61170(uVar3);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112742bcc);
    *(undefined **)(param_1 + _DAT_112742bcc) = puVar1;
    func_0x000107c61170(uVar3);
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112742b88);
    *(undefined **)(param_1 + _DAT_112742b88) = puVar1;
    func_0x000107c61170(uVar3);
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112742ba0);
    *(undefined **)(param_1 + _DAT_112742ba0) = puVar1;
    func_0x000107c61170(uVar3);
    func_0x000107c3aee8(param_1);
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    func_0x000107c61174(param_3);
    lVar2 = param_3;
    func_0x000107c4080c(param_3,param_2,&uStack_120,auStack_d8,0x10);
    if (lVar2 != 0) {
      lVar4 = *plStack_110;
      do {
        lVar5 = 0;
        do {
          if (*plStack_110 != lVar4) {
            func_0x000107c61128(param_3);
          }
          uVar3 = *(undefined8 *)(lStack_118 + lVar5 * 8);
          func_0x000107c5c734(uVar3);
          func_0x000107c61180();
          func_0x000107c4018c();
          func_0x000107c61170(uVar3);
          lVar5 = lVar5 + 1;
        } while (lVar2 != lVar5);
        lVar2 = param_3;
        func_0x000107c4080c(param_3,param_2,&uStack_120,auStack_d8,0x10);
      } while (lVar2 != 0);
    }
    func_0x000107c61170(param_3);
    func_0x000107c3b5dc(param_1);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  *(undefined1 *)(param_3 + _DAT_112742b98) = 1;
  return;
}



/* Entry: 10088dbbc; end: 10088dbcf; -[SCCameraVerticalToolbar _beginToolbarBulkLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10088dbbc(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112742b98) = 1;
  return;
}



/* Entry: 10088dbd0; end: 10088dbff;  */

bool FUN_10088dbd0(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c61170();
  return param_1 != 0;
}



/* Entry: 10088dc00; end: 10088dd6b;  */

void FUN_10088dc00(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126c7a50;
    func_0x000107c610f4(PTR_PTR_1126c7a50);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10088dd6c;
    puStack_60 = &UNK_11084e7d0;
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar7);
    ppuVar3 = &puStack_78;
    uStack_58 = uVar7;
    FUN_10088dd6c(ppuVar3);
    func_0x000107c61180();
    uVar7 = *(undefined8 *)(lVar1 + 0x78);
    func_0x000107c3f0f4(uVar7);
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(lVar1 + 0x78);
    func_0x000107c3f0fc(uVar4);
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(lVar1 + 0x78);
    func_0x000107c3f598(uVar5);
    func_0x000107c61180();
    uVar9 = *(undefined8 *)(lVar1 + 0x50);
    uVar6 = *(undefined8 *)(lVar1 + 0x10);
    func_0x000107c3f300(uVar6);
    func_0x000107c45c7c(puVar2,param_2,ppuVar3,uVar7,uVar4,uVar5,uVar9,uVar6);
    puVar8 = puVar2;
    func_0x000107c4b6f4();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(uStack_58);
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10088dd6c; end: 10088de47;  */

void FUN_10088dd6c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10088de48; end: 10088dfaf; -[SCCameraFlashFeatureInitializer initWithCameraUserActionLogger:cameraHardwareResource:cameraHardwareServicesAPI:captureDeviceManager:featureUpdateEventSubject:cameraViewType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10088de48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_68 = PTR_PTR_1126efef0;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112740d58;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112740d5c;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112740d60;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112740d64;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + (long)_DAT_112740d68),param_7);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112740d6c) = param_8;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10088dfb0; end: 10088dfc7; -[SCCameraFlashFeatureInitializer enabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10088dfb0(long param_1)

{
  return *(long *)(param_1 + _DAT_112740d6c) == 9;
}



/* Entry: 10088dfc8; end: 10088e06f; -[SCCameraFlashFeatureInitializer .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010088dff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010088e018: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010088dffc) */
/* WARNING: Removing unreachable block (ram,0x00010088e01c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10088dfc8(long param_1)

{
  func_0x000107c61120(param_1 + _DAT_112740d68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112740d64,0);
  return;
}



/* Entry: 10088e070; end: 10088e2f3;  */

void FUN_10088e070(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 == 0) {
    puVar17 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126c7a48;
    func_0x000107c610f4(PTR_PTR_1126c7a48);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c4f5c0();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c5cb5c();
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c42e38();
    func_0x000107c61180();
    puVar17 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10088e2fc;
    puStack_88 = &UNK_11084e7d0;
    uVar15 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar15);
    ppuVar6 = &puStack_a0;
    uStack_80 = uVar15;
    FUN_10088e2fc();
    func_0x000107c61180();
    uVar15 = *(undefined8 *)(lVar1 + 8);
    uVar7 = *(undefined8 *)(lVar1 + 0x10);
    func_0x000107c5de90();
    func_0x000107c61180();
    puStack_c8 = puVar17;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_10088e3d8;
    puStack_b0 = &UNK_11084e7d0;
    uVar16 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar16);
    ppuVar8 = &puStack_c8;
    uStack_a8 = uVar16;
    FUN_10088e3d8(ppuVar8);
    func_0x000107c61180();
    uVar14 = *(undefined8 *)(lVar1 + 0xb8);
    uVar9 = *(undefined8 *)(lVar1 + 0x78);
    func_0x000107c3f0f4();
    func_0x000107c61180();
    uVar10 = *(undefined8 *)(lVar1 + 0x28);
    func_0x000107c3f14c();
    func_0x000107c61180();
    uVar16 = uVar10;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar11 = *(undefined8 *)(lVar1 + 0x28);
    func_0x000107c5dd3c();
    func_0x000107c61180();
    uVar12 = uVar11;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar13 = *(undefined8 *)(lVar1 + 0x10);
    func_0x000107c3f300();
    func_0x000107c48dc4(puVar2,param_2,uVar5,ppuVar6,uVar15,uVar7,ppuVar8,uVar14,uVar9,uVar16,uVar12
                        ,uVar13,*(undefined8 *)(lVar1 + 0x1f0),*(undefined8 *)(lVar1 + 0xf0));
    puVar17 = puVar2;
    func_0x000107c4b6f4();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(ppuVar8);
    func_0x000107c61170(uStack_a8);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(ppuVar6);
    func_0x000107c61170(uStack_80);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 10088e2f4; end: 10088e2fb; -[SCMutablePublicCameraFeatureCatalog toggleCamera] */

undefined8 FUN_10088e2f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1f8);
}



/* Entry: 10088e2fc; end: 10088e3d7;  */

void FUN_10088e2fc(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10088e3d8; end: 10088e4b3;  */

void FUN_10088e3d8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10088e4b4; end: 10088e70f; -[SCCameraToggleCameraButtonFeatureInitializer initWithToggleCameraFeature:selfieSettingsFeature:applicationLifecycleEvents:viewControllerLifecycleEvents:cameraUserActionLogger:deviceMotionManager:cameraHardwareResource:cameraModeLabelsConfig:verticalToolbarConfiguration:cameraViewType:appStartExperimentReader:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10088e4b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  puStack_68 = PTR_PTR_1126efee8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112740d24,param_3);
    lVar3 = (long)_DAT_112740d28;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112740d2c,param_5);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112740d30,param_6);
    lVar3 = (long)_DAT_112740d34;
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112740d38;
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112740d3c;
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112740d40,param_10);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112740d44,param_11);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112740d48) = param_12;
    lVar3 = (long)_DAT_112740d4c;
    func_0x000107c61174(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112740d50,param_14);
  }
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10088e710; end: 10088e717; -[SCCameraToggleCameraButtonFeatureInitializer enabled] */

undefined8 FUN_10088e710(void)

{
  return 1;
}



/* Entry: 10088e718; end: 10088e857; -[SCCameraToggleCameraButtonFeatureInitializer createInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10088e718(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar1 = PTR_PTR_1126c8628;
  func_0x000107c610f4();
  lVar2 = param_1 + _DAT_112740d24;
  func_0x000107c61148();
  uVar7 = *(undefined8 *)(param_1 + _DAT_112740d28);
  lVar3 = param_1 + _DAT_112740d2c;
  func_0x000107c61148(lVar3);
  lVar4 = param_1 + _DAT_112740d30;
  func_0x000107c61148(lVar4);
  uVar8 = *(undefined8 *)(param_1 + _DAT_112740d34);
  uVar12 = *(undefined8 *)(param_1 + _DAT_112740d38);
  uVar10 = *(undefined8 *)(param_1 + _DAT_112740d3c);
  lVar5 = param_1 + _DAT_112740d40;
  func_0x000107c61148();
  lVar6 = param_1 + _DAT_112740d44;
  func_0x000107c61148();
  uVar9 = *(undefined8 *)(param_1 + _DAT_112740d48);
  uVar11 = *(undefined8 *)(param_1 + _DAT_112740d4c);
  param_1 = param_1 + _DAT_112740d50;
  func_0x000107c61148();
  func_0x000107c48dc4(puVar1,param_2,lVar2,uVar7,lVar3,lVar4,uVar8,uVar12,uVar10,lVar5,lVar6,uVar9,
                      uVar11,param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10088e858; end: 10088ec4b; -[SCFeatureToggleCameraButtonImpl initWithToggleCameraFeature:selfieSettingsFeature:applicationLifecycleEvents:viewControllerLifecycleEvents:cameraUserActionLogger:deviceMotionManager:cameraHardwareResource:cameraModeLabelsConfig:verticalToolbarConfiguration:cameraViewType:appStartExperimentReader:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10088e858(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  puStack_70 = PTR_PTR_1126f0210;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar8 = param_9;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar2 = uVar8;
    func_0x000107c3f630();
    func_0x000107c61180();
    uVar3 = param_9;
    func_0x000107c5c734(param_9);
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c40794();
    uVar6 = param_9;
    func_0x000107c5c734(param_9);
    func_0x000107c61180();
    uVar7 = uVar6;
    func_0x000107c4c238();
    func_0x000107c61180();
    func_0x000107c5bb2c(puVar1);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar8);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112741790,param_3);
    lVar10 = (long)_DAT_112741794;
    func_0x000107c61174(param_4);
    uVar8 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = param_4;
    func_0x000107c61170(uVar8);
    lVar10 = (long)_DAT_112741798;
    func_0x000107c61174(param_7);
    uVar8 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = param_7;
    func_0x000107c61170(uVar8);
    lVar10 = (long)_DAT_11274179c;
    func_0x000107c61174(param_8);
    uVar8 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = param_8;
    func_0x000107c61170(uVar8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127417a0) = param_12;
    lVar10 = (long)_DAT_1127417a4;
    func_0x000107c61174(param_9);
    uVar8 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = param_9;
    func_0x000107c61170(uVar8);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_1127417a8,param_10);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_1127417ac,param_11);
    lVar10 = (long)_DAT_1127417b0;
    func_0x000107c61174(param_13);
    uVar8 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = param_13;
    func_0x000107c61170(uVar8);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_1127417b4,param_14);
    func_0x000107c5054c(puVar1);
    func_0x000107c61144(auStack_80,puVar1);
    puVar9 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127417b8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127417b8) = puVar9;
    func_0x000107c61170(uVar8);
    func_0x000107c6111c(auStack_88,auStack_80);
    uVar8 = param_6;
    func_0x000107c5c320(param_6);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar8);
    func_0x000107c61120(auStack_88);
    func_0x000107c61120(auStack_80);
  }
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10088ec4c; end: 10088ec73;  */

void FUN_10088ec4c(void)

{
  return;
}



/* Entry: 10088ec74; end: 10088edf3;  */

void FUN_10088ec74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long *plVar2;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  code *extraout_x8_02;
  long unaff_x19;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined1 auStack_4f0 [528];
  long lStack_2e0;
  long lStack_2d8;
  undefined1 auStack_2d0 [544];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_58;
  
  func_0x000100689a14();
  puVar1 = auStack_4f0;
  uStack_500 = param_1;
  uStack_4f8 = param_2;
  uStack_58 = extraout_x8;
  FUN_10088ee00(puVar1,param_3);
  FUN_10060f340();
  if ((int)puVar1 != 0) {
    func_0x000107c3573c();
    (*extraout_x8_00)();
    if (((ulong)puVar1 & 1) == 0) {
      func_0x000107c2c654(&lStack_2e0,*(undefined8 *)(unaff_x19 + 8),
                          *(undefined8 *)(unaff_x19 + 0x10));
      func_0x000107c2c668(auStack_2d0,&uStack_500);
      func_0x000107c35740();
      func_0x000107c35724();
      puStack_88 = &UNK_10b2d8988;
      ppuStack_80 = &PTR_DAT_110cd2708;
      plVar2 = (long *)0x230;
      func_0x000107c60e20();
      plVar2[1] = lStack_2d8;
      *plVar2 = lStack_2e0;
      lStack_2d8 = 0;
      lStack_2e0 = 0;
      func_0x000107c2c668(plVar2 + 2,auStack_2d0);
      func_0x000107c3574c();
      *(undefined8 *)(lStack_90 + 0x18) = extraout_x8_01;
      *(undefined **)(lStack_90 + 0x20) = &UNK_10b2d8988;
      func_0x000107c357c0();
      func_0x000107c2c664();
      func_0x000107c3572c();
      func_0x000107c2c66c(&lStack_2e0);
      lStack_2d8 = lStack_90;
      uStack_b0 = 0;
      uStack_a8 = 0;
      lStack_2e0 = (long)plVar2;
      func_0x00010067cdbc(*(undefined8 *)(unaff_x19 + 0xe0));
      (*extraout_x8_02)();
      FUN_100576684(&lStack_2e0);
      func_0x000107c3575c();
      goto LAB_10088ed70;
    }
  }
  func_0x00010088f174(&uStack_500);
LAB_10088ed70:
  func_0x000100891230();
  func_0x00010068e834(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  FUN_100576684(&lStack_2e0);
  func_0x000107c3575c();
  func_0x000100891230();
  func_0x000107c35748();
  return;
}



/* Entry: 10088edf4; end: 10088edff;  */

void FUN_10088edf4(void)

{
  return;
}



/* Entry: 10088ee00; end: 10088ee73;  */

void FUN_10088ee00(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  FUN_10088edf4();
  FUN_10088ee74();
  FUN_10088ef3c(param_1 + 200,unaff_x20 + 200);
  FUN_10088f060(unaff_x19 + 0x180,unaff_x20 + 0x180);
  FUN_10088f130(unaff_x19 + 0x1e8,unaff_x20 + 0x1e8);
  return;
}



/* Entry: 10088ee74; end: 10088eea3;  */

void FUN_10088ee74(long param_1)

{
  func_0x00010068719c();
  *(undefined1 *)(param_1 + 0xc0) = 0;
  FUN_10088eea4();
  return;
}



/* Entry: 10088eea4; end: 10088eeb7;  */

void FUN_10088eea4(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_10088eeb8();
    *(undefined1 *)(param_1 + 0xc0) = 1;
    return;
  }
  return;
}



/* Entry: 10088eeb8; end: 10088eedb;  */

void FUN_10088eeb8(void)

{
  func_0x0001006871e4();
  FUN_100687230();
  FUN_10088eef8();
  return;
}



/* Entry: 10088eedc; end: 10088eef7;  */

void FUN_10088eedc(long param_1)

{
  FUN_10088eeb8();
  *(undefined1 *)(param_1 + 0xc0) = 1;
  return;
}



/* Entry: 10088eef8; end: 10088ef27;  */

void FUN_10088eef8(long param_1)

{
  func_0x00010068719c();
  *(undefined1 *)(param_1 + 0xa0) = 0;
  FUN_10088ef28();
  return;
}



/* Entry: 10088ef28; end: 10088ef3b;  */

void FUN_10088ef28(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_100898900();
    *(undefined1 *)(param_1 + 0xa0) = 1;
    return;
  }
  return;
}



/* Entry: 10088ef3c; end: 10088ef6b;  */

void FUN_10088ef3c(long param_1)

{
  func_0x00010068719c();
  *(undefined1 *)(param_1 + 0xb0) = 0;
  FUN_10088ef6c();
  return;
}



/* Entry: 10088ef6c; end: 10088ef7f;  */

void FUN_10088ef6c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_10088ef80();
    *(undefined1 *)(param_1 + 0xb0) = 1;
    return;
  }
  return;
}



/* Entry: 10088ef80; end: 10088f043;  */

void FUN_10088ef80(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  FUN_10088edf4();
  func_0x000107c60c94();
  FUN_10015bc98(param_1 + 0x18,unaff_x20 + 0x18);
  *(undefined4 *)(unaff_x19 + 0x30) = *(undefined4 *)(unaff_x20 + 0x30);
  func_0x000107c60c94(unaff_x19 + 0x38,unaff_x20 + 0x38);
  FUN_1005acf78(unaff_x19 + 0x50,unaff_x20 + 0x50);
  *(undefined1 *)(unaff_x19 + 0x68) = *(undefined1 *)(unaff_x20 + 0x68);
  func_0x000107c60c94(unaff_x19 + 0x70,unaff_x20 + 0x70);
  func_0x000107c60c94(unaff_x19 + 0x88,unaff_x20 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xa0);
  *(undefined8 *)(unaff_x19 + 0xa8) = *(undefined8 *)(unaff_x20 + 0xa8);
  *(undefined8 *)(unaff_x19 + 0xa0) = uVar1;
  return;
}



/* Entry: 10088f044; end: 10088f05f;  */

void FUN_10088f044(long param_1)

{
  FUN_10088ef80();
  *(undefined1 *)(param_1 + 0xb0) = 1;
  return;
}



/* Entry: 10088f060; end: 10088f0a7;  */

void FUN_10088f060(void)

{
  long unaff_x19;
  long unaff_x20;
  
  FUN_10088edf4();
  FUN_1006874e4();
  FUN_10088f0a8();
  FUN_10088f0ec(unaff_x19 + 0x40,unaff_x20 + 0x40);
  *(undefined1 *)(unaff_x19 + 0x60) = *(undefined1 *)(unaff_x20 + 0x60);
  return;
}



/* Entry: 10088f0a8; end: 10088f0d7;  */

void FUN_10088f0a8(long param_1)

{
  func_0x00010068719c();
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_10088f0d8();
  return;
}



/* Entry: 10088f0d8; end: 10088f0eb;  */

void FUN_10088f0d8(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_1008993bc();
    *(undefined1 *)(param_1 + 0x18) = 1;
    return;
  }
  return;
}



/* Entry: 10088f0ec; end: 10088f11b;  */

void FUN_10088f0ec(long param_1)

{
  func_0x00010068719c();
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_10088f11c();
  return;
}


