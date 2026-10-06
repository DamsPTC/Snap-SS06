/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1075674d4; end: 107567563;  */

void FUN_1075674d4(void)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 in_x4;
  undefined8 extraout_x8;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 *unaff_x23;
  undefined1 auStack_c8 [128];
  undefined8 uStack_48;
  
  func_0x0001075698f4();
  func_0x0001075696cc();
  puVar1 = (undefined8 *)0xa0;
  uStack_48 = extraout_x8;
  __Znwm();
  FUN_107567564(auStack_c8,in_x4);
  *puVar1 = &PTR_FUN_1109bd8f0;
  puVar1[1] = unaff_x22;
  puVar1[2] = unaff_x21;
  puVar1[3] = unaff_x20;
  puVar3 = auStack_c8;
  FUN_107567564(puVar1 + 4);
  *unaff_x23 = puVar1;
  puVar2 = auStack_c8;
  FUN_107327aec();
  func_0x000107569680(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_107327a90();
  *(undefined8 *)(puVar2 + 0x78) = *(undefined8 *)(puVar3 + 0x78);
  return;
}



/* Entry: 107567564; end: 107567587;  */

void FUN_107567564(long param_1,long param_2)

{
  FUN_107327a90();
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  return;
}



/* Entry: 107567588; end: 10756758b;  */

undefined8 * FUN_107567588(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109bd8f0;
  FUN_107327aec(param_1 + 4);
  return param_1;
}



/* Entry: 10756758c; end: 10756759f;  */

void FUN_10756758c(void)

{
  FUN_1075675c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1075675a0; end: 1075675c7;  */

void FUN_1075675a0(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x0001075675c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1 + 0x20,*(undefined8 *)(param_1 + 0x98));
  return;
}



/* Entry: 1075675c8; end: 1075675f3;  */

undefined8 * FUN_1075675c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109bd8f0;
  FUN_107327aec(param_1 + 4);
  return param_1;
}



/* Entry: 1075675f4; end: 10756763f;  */

void FUN_1075675f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *in_x4;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 *unaff_x23;
  
  func_0x0001075698f4();
  puVar3 = (undefined8 *)0x30;
  __Znwm();
  uVar1 = *in_x4;
  uVar2 = in_x4[1];
  *in_x4 = 0;
  *puVar3 = &PTR_FUN_1109bd930;
  puVar3[1] = unaff_x22;
  puVar3[2] = unaff_x21;
  puVar3[3] = unaff_x20;
  puVar3[4] = uVar1;
  puVar3[5] = uVar2;
  *unaff_x23 = puVar3;
  return;
}



/* Entry: 107567640; end: 107567643;  */

undefined8 * FUN_107567640(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109bd930;
  func_0x00010737e8c8(param_1 + 4);
  return param_1;
}



/* Entry: 107567644; end: 107567657;  */

void FUN_107567644(void)

{
  FUN_1075676c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107567658; end: 1075676c3;  */

void FUN_107567658(long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uStack_28;
  
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    pcVar2 = *(code **)(*plVar1 + ((ulong)pcVar2 & 0xffffffff));
  }
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  (*pcVar2)(plVar1,&uStack_28,*(undefined8 *)(param_1 + 0x28),1);
  func_0x0001075699e4();
  if (plVar1 != (long *)0x0) {
    func_0x0001075696b4();
  }
  return;
}



/* Entry: 1075676c4; end: 1075676ef;  */

undefined8 * FUN_1075676c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109bd930;
  func_0x00010737e8c8(param_1 + 4);
  return param_1;
}



/* Entry: 1075676f0; end: 107567723;  */

void FUN_1075676f0(void)

{
  func_0x000107567708();
  return;
}



/* Entry: 107567724; end: 107567a9f;  */

undefined1  [16]
FUN_107567724(float param_1,float param_2,long *param_3,undefined8 param_4,long *param_5)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *extraout_x8;
  long extraout_x8_00;
  long *extraout_x9;
  ulong uVar8;
  ulong extraout_x9_00;
  long *plVar9;
  long *plVar10;
  long *extraout_x10;
  long *plVar11;
  long *plVar12;
  long *extraout_x11;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *unaff_x25;
  ulong uVar16;
  undefined1 auVar17 [16];
  
  plVar9 = param_3 + 3;
  func_0x00010784b234();
  plVar15 = (long *)param_3[1];
  plVar4 = plVar9;
  if (plVar15 != (long *)0x0) {
    uVar16 = (long)plVar15 - 1;
    if (((ulong)plVar15 & uVar16) == 0) {
      unaff_x25 = (long *)((long)plVar15 + 0x7fffffffffffffffU & (ulong)plVar9);
    }
    else {
      unaff_x25 = plVar9;
      if (plVar15 <= plVar9) {
        uVar8 = 0;
        if (plVar15 != (long *)0x0) {
          uVar8 = (ulong)plVar9 / (ulong)plVar15;
        }
        unaff_x25 = (long *)((long)plVar9 - uVar8 * (long)plVar15);
      }
    }
    plVar14 = *(long **)(*param_3 + (long)unaff_x25 * 8);
    if (plVar14 != (long *)0x0) {
      do {
        while( true ) {
          plVar14 = (long *)*plVar14;
          if (plVar14 == (long *)0x0) goto LAB_1075677f0;
          plVar7 = (long *)plVar14[1];
          if (plVar7 != plVar9) break;
          plVar4 = plVar14 + 2;
          func_0x00010726b840(plVar4,param_4);
          if (((ulong)plVar4 & 1) != 0) {
            uVar6 = 0;
            plVar4 = plVar14;
            goto LAB_107567a80;
          }
        }
        if (((ulong)plVar15 & uVar16) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar16);
        }
        else if (plVar15 <= plVar7) {
          uVar8 = 0;
          if (plVar15 != (long *)0x0) {
            uVar8 = (ulong)plVar7 / (ulong)plVar15;
          }
          plVar7 = (long *)((long)plVar7 - uVar8 * (long)plVar15);
        }
      } while (plVar7 == unaff_x25);
    }
  }
LAB_1075677f0:
  plVar14 = param_3 + 2;
  func_0x000107569984();
  *plVar4 = 0;
  plVar4[1] = (long)plVar9;
  plVar4[2] = *param_5;
  *(int *)(plVar4 + 3) = (int)param_5[1];
  FUN_107567aa0(plVar4 + 4,param_5 + 2);
  func_0x000107569c10();
  if ((plVar15 != (long *)0x0) && (param_1 <= param_2 * (float)plVar15)) goto LAB_107567a04;
  bVar2 = (long *)0x2 < plVar15;
  bVar3 = plVar15 == (long *)0x3;
  func_0x000107569868((long)plVar15 << 1);
  plVar7 = extraout_x8;
  if (!bVar2 || bVar3) {
    plVar7 = extraout_x9;
  }
  if ((long)plVar7 - 1U == 0) {
    plVar7 = (long *)0x2;
  }
  else if (((ulong)plVar7 & (long)plVar7 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar15 = (long *)param_3[1];
  if (plVar15 < plVar7) {
LAB_107567890:
    if ((ulong)plVar7 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x107567a94);
      (*pcVar1)();
    }
    lVar5 = (long)plVar7 << 3;
    __Znwm(lVar5);
    func_0x000107567b10(param_3,lVar5);
    param_3[1] = (long)plVar7;
    lVar5 = *param_3;
    for (plVar15 = (long *)0x0; plVar7 != plVar15; plVar15 = (long *)((long)plVar15 + 1)) {
      *(undefined8 *)(lVar5 + (long)plVar15 * 8) = 0;
    }
    plVar10 = (long *)*plVar14;
    plVar15 = plVar7;
    if (plVar10 != (long *)0x0) {
      plVar11 = (long *)plVar10[1];
      uVar8 = (long)plVar7 - 1;
      uVar16 = 0;
      if (plVar7 != (long *)0x0) {
        uVar16 = (ulong)plVar11 / (ulong)plVar7;
      }
      plVar12 = plVar11;
      if (plVar7 <= plVar11) {
        plVar12 = (long *)((long)plVar11 - uVar16 * (long)plVar7);
      }
      if (((ulong)plVar7 & uVar8) == 0) {
        plVar12 = (long *)((ulong)plVar11 & uVar8);
      }
      *(long **)(lVar5 + (long)plVar12 * 8) = plVar14;
      while (plVar11 = plVar10, plVar10 = (long *)*plVar11, plVar10 != (long *)0x0) {
        plVar13 = (long *)plVar10[1];
        if (((ulong)plVar7 & uVar8) == 0) {
          plVar13 = (long *)((ulong)plVar13 & uVar8);
        }
        else if (plVar7 <= plVar13) {
          uVar16 = 0;
          if (plVar7 != (long *)0x0) {
            uVar16 = (ulong)plVar13 / (ulong)plVar7;
          }
          plVar13 = (long *)((long)plVar13 - uVar16 * (long)plVar7);
        }
        if (plVar13 != plVar12) {
          if (*(long *)(lVar5 + (long)plVar13 * 8) == 0) {
            *(long **)(lVar5 + (long)plVar13 * 8) = plVar11;
            plVar12 = plVar13;
          }
          else {
            *plVar11 = *plVar10;
            func_0x000107569a8c();
            lVar5 = extraout_x8_00;
            uVar8 = extraout_x9_00;
            plVar10 = extraout_x10;
            plVar12 = extraout_x11;
          }
        }
      }
    }
  }
  else if (plVar7 < plVar15) {
    plVar10 = (long *)(long)((float)(ulong)param_3[3] / *(float *)(param_3 + 4));
    if ((plVar15 < (long *)0x3) || (((ulong)plVar15 & (long)plVar15 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x0001075699a4();
    }
    if (plVar7 <= plVar10) {
      plVar7 = plVar10;
    }
    if (plVar7 < plVar15) {
      if (plVar7 != (long *)0x0) goto LAB_107567890;
      func_0x000107567b10(param_3,0);
      param_3[1] = 0;
      plVar15 = (long *)0x0;
    }
    else {
      plVar15 = (long *)param_3[1];
    }
  }
  if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar15 + 0x7fffffffffffffffU & (ulong)plVar9);
  }
  else {
    unaff_x25 = plVar9;
    if (plVar15 <= plVar9) {
      uVar16 = 0;
      if (plVar15 != (long *)0x0) {
        uVar16 = (ulong)plVar9 / (ulong)plVar15;
      }
      unaff_x25 = (long *)((long)plVar9 - uVar16 * (long)plVar15);
    }
  }
LAB_107567a04:
  lVar5 = *param_3;
  plVar9 = *(long **)(lVar5 + (long)unaff_x25 * 8);
  if (plVar9 == (long *)0x0) {
    *plVar4 = *plVar14;
    *plVar14 = (long)plVar4;
    *(long **)(lVar5 + (long)unaff_x25 * 8) = plVar14;
    if (*plVar4 != 0) {
      plVar9 = *(long **)(*plVar4 + 8);
      if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
        plVar9 = (long *)((ulong)plVar9 & (long)plVar15 - 1U);
      }
      else if (plVar15 <= plVar9) {
        uVar16 = 0;
        if (plVar15 != (long *)0x0) {
          uVar16 = (ulong)plVar9 / (ulong)plVar15;
        }
        plVar9 = (long *)((long)plVar9 - uVar16 * (long)plVar15);
      }
      *(long **)(lVar5 + (long)plVar9 * 8) = plVar4;
    }
  }
  else {
    *plVar4 = *plVar9;
    *plVar9 = (long)plVar4;
  }
  param_3[3] = param_3[3] + 1;
  func_0x000107569b24();
  uVar6 = 1;
LAB_107567a80:
  auVar17._8_8_ = uVar6;
  auVar17._0_8_ = plVar4;
  return auVar17;
}



/* Entry: 107567aa0; end: 107567b27;  */

void FUN_107567aa0(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 107567b28; end: 107567b47;  */

void FUN_107567b28(void)

{
  func_0x000107569ae0();
  FUN_107567b48();
  return;
}



/* Entry: 107567b48; end: 107567b5f;  */

void FUN_107567b48(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x00010756807c(lVar1 + 0x20);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 107567b60; end: 107567b9f;  */

void FUN_107567b60(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x00010756807c(param_2 + 0x20);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 107567ba0; end: 107567be3;  */

void FUN_107567ba0(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x0001075697d4();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  FUN_1075671ec(param_1 + 2,param_2 + 2);
  FUN_107568c00(unaff_x19 + 0x28,unaff_x20 + 0x28);
  return;
}



/* Entry: 107567be4; end: 107567c0f;  */

long FUN_107567be4(long param_1)

{
  FUN_107567218(param_1 + 0x28);
  func_0x00010724ae28(param_1 + 0x18);
  return param_1;
}



/* Entry: 107567c10; end: 107567c43;  */

void FUN_107567c10(void)

{
  func_0x000107567c28();
  return;
}



/* Entry: 107567c44; end: 107567e33;  */

undefined1  [16]
FUN_107567c44(float param_1,float param_2,long *param_3,undefined1 *param_4,undefined8 param_5)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong extraout_x8;
  ulong uVar6;
  undefined8 extraout_x8_00;
  long lVar7;
  ulong extraout_x9;
  undefined8 extraout_x9_00;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x25;
  ulong uVar12;
  undefined1 auVar13 [16];
  
  plVar4 = param_3;
  func_0x000107569908(*param_4);
  uVar11 = extraout_x9 ^ extraout_x8;
  uVar10 = plVar4[1];
  if (uVar10 != 0) {
    uVar12 = uVar10 - 1;
    if ((uVar10 & uVar12) == 0) {
      unaff_x25 = uVar11 & uVar12;
    }
    else {
      unaff_x25 = uVar11;
      if (uVar10 <= uVar11) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar11 / uVar10;
        }
        unaff_x25 = uVar11 - uVar6 * uVar10;
      }
    }
    plVar9 = *(long **)(*param_3 + unaff_x25 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_107567d0c;
          uVar6 = plVar9[1];
          if (uVar6 != uVar11) break;
          plVar4 = plVar9 + 2;
          FUN_107567e34(plVar4,param_4);
          if (((ulong)plVar4 & 1) != 0) {
            uVar5 = 0;
            plVar4 = plVar9;
            goto LAB_107567e18;
          }
        }
        if ((uVar10 & uVar12) == 0) {
          uVar6 = uVar6 & uVar12;
        }
        else if (uVar10 <= uVar6) {
          uVar1 = 0;
          if (uVar10 != 0) {
            uVar1 = uVar6 / uVar10;
          }
          uVar6 = uVar6 - uVar1 * uVar10;
        }
      } while (uVar6 == unaff_x25);
    }
  }
LAB_107567d0c:
  plVar9 = param_3 + 2;
  func_0x000107569a40();
  *plVar4 = 0;
  plVar4[1] = uVar11;
  FUN_107567ba0(plVar4 + 2,param_5);
  func_0x000107569c10();
  if ((uVar10 == 0) || (param_2 * (float)uVar10 < param_1)) {
    func_0x000107569ab0();
    bVar2 = 2 < uVar10;
    bVar3 = uVar10 == 3;
    func_0x000107569868();
    uVar5 = extraout_x8_00;
    if (!bVar2 || bVar3) {
      uVar5 = extraout_x9_00;
    }
    FUN_107567e74(param_3,uVar5);
    uVar10 = param_3[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x25 = uVar10 - 1 & uVar11;
    }
    else {
      unaff_x25 = uVar11;
      if (uVar10 <= uVar11) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = uVar11 / uVar10;
        }
        unaff_x25 = uVar11 - uVar12 * uVar10;
      }
    }
  }
  lVar7 = *param_3;
  plVar8 = *(long **)(lVar7 + unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar4 = *plVar9;
    *plVar9 = (long)plVar4;
    *(long **)(lVar7 + unaff_x25 * 8) = plVar9;
    if (*plVar4 != 0) {
      uVar11 = *(ulong *)(*plVar4 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar11 = uVar11 & uVar10 - 1;
      }
      else if (uVar10 <= uVar11) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = uVar11 / uVar10;
        }
        uVar11 = uVar11 - uVar12 * uVar10;
      }
      *(long **)(lVar7 + uVar11 * 8) = plVar4;
    }
  }
  else {
    *plVar4 = *plVar8;
    *plVar8 = (long)plVar4;
  }
  param_3[3] = param_3[3] + 1;
  func_0x000107569b0c();
  uVar5 = 1;
LAB_107567e18:
  auVar13._8_8_ = uVar5;
  auVar13._0_8_ = plVar4;
  return auVar13;
}



/* Entry: 107567e34; end: 107567e73;  */

undefined8 FUN_107567e34(char *param_1,char *param_2)

{
  if (((*param_1 == *param_2) && (*(short *)(param_1 + 2) == *(short *)(param_2 + 2))) &&
     (*(long *)(param_1 + 8) == *(long *)(param_2 + 8))) {
    return 1;
  }
  return 0;
}



/* Entry: 107567e74; end: 107567feb;  */

void FUN_107567e74(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long *plVar3;
  long *extraout_x9;
  ulong uVar4;
  ulong extraout_x10;
  long *plVar5;
  long *extraout_x11;
  long *plVar6;
  long *plVar7;
  
  plVar3 = param_1;
  plVar5 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar7 = (long *)param_1[1];
  if (plVar7 > param_2 || param_2 == plVar7) {
    if (plVar7 <= param_2) {
      return;
    }
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x0001075699a4();
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar7 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_107567fec(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    FUN_107567fec(param_1,lVar2);
    param_1[1] = (long)param_2;
    lVar2 = *param_1;
    for (plVar3 = (long *)0x0; param_2 != plVar3; plVar3 = (long *)((long)plVar3 + 1)) {
      *(undefined8 *)(lVar2 + (long)plVar3 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      plVar5 = (long *)plVar3[1];
      uVar4 = (long)param_2 - 1;
      uVar1 = 0;
      if (param_2 != (long *)0x0) {
        uVar1 = (ulong)plVar5 / (ulong)param_2;
      }
      plVar7 = plVar5;
      if (param_2 <= plVar5) {
        plVar7 = (long *)((long)plVar5 - uVar1 * (long)param_2);
      }
      if (((ulong)param_2 & uVar4) == 0) {
        plVar7 = (long *)((ulong)plVar5 & uVar4);
      }
      *(long **)(lVar2 + (long)plVar7 * 8) = param_1 + 2;
      while (plVar5 = plVar3, plVar3 = (long *)*plVar5, plVar3 != (long *)0x0) {
        plVar6 = (long *)plVar3[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar4);
        }
        else if (param_2 <= plVar6) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)param_2;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
        }
        if (plVar6 != plVar7) {
          if (*(long *)(lVar2 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar6 * 8) = plVar5;
            plVar7 = plVar6;
          }
          else {
            *plVar5 = *plVar3;
            func_0x000107569a8c();
            lVar2 = extraout_x8;
            plVar3 = extraout_x9;
            uVar4 = extraout_x10;
            plVar7 = extraout_x11;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar2 = *plVar3;
  *plVar3 = (long)plVar5;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107567fec; end: 107568003;  */

void FUN_107567fec(long *param_1,long param_2)

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



/* Entry: 107568004; end: 107568023;  */

void FUN_107568004(void)

{
  func_0x000107569ae0();
  FUN_107568024();
  return;
}



/* Entry: 107568024; end: 10756803b;  */

void FUN_107568024(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    FUN_107567be4(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10756803c; end: 1075680f7;  */

void FUN_10756803c(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_107567be4(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1075680f8; end: 10756810f;  */

void FUN_1075680f8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107568110; end: 107568127;  */

void FUN_107568110(void)

{
  FUN_107567c10();
  return;
}



/* Entry: 107568128; end: 107568153;  */

undefined8 FUN_107568128(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_107568154(auStack_38);
  func_0x000107569b0c();
  return uVar1;
}



/* Entry: 107568154; end: 107568277;  */

void FUN_107568154(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_107568208;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_107568208;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_107568208:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 107568278; end: 10756834f;  */

undefined8 * FUN_107568278(undefined8 *param_1)

{
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  func_0x0001075697d4();
  puVar2 = param_1 + 1;
  puVar3 = puVar2;
  puVar1 = (undefined8 *)*puVar2;
joined_r0x000107568298:
  do {
    if (puVar1 == (undefined8 *)0x0) {
LAB_1075682e4:
      func_0x000107569984();
      param_1[4] = *unaff_x20;
      *(undefined4 *)(param_1 + 5) = *(undefined4 *)(unaff_x20 + 1);
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[6] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = puVar3;
      *puVar2 = param_1;
      if (*(long *)*unaff_x19 != 0) {
        *unaff_x19 = *(long *)*unaff_x19;
      }
      func_0x00010002c5b0(unaff_x19[1],param_1);
      unaff_x19[2] = unaff_x19[2] + 1;
      puVar1 = param_1;
LAB_107568338:
      return puVar1 + 6;
    }
    param_1 = unaff_x20;
    FUN_107457158();
    puVar3 = puVar1;
    if (((uint)param_1 >> 7 & 1) != 0) {
      puVar2 = puVar1;
      puVar1 = (undefined8 *)*puVar1;
      goto joined_r0x000107568298;
    }
    param_1 = puVar1 + 4;
    FUN_107457158();
    if (((uint)param_1 >> 7 & 1) == 0) {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar1 != (undefined8 *)0x0) goto LAB_107568338;
      goto LAB_1075682e4;
    }
    puVar2 = puVar1 + 1;
    puVar1 = (undefined8 *)*puVar2;
  } while( true );
}



/* Entry: 107568350; end: 1075683c3;  */

void FUN_107568350(long param_1,long param_2)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001075697d4();
  uVar1 = *(uint *)(param_2 + 8);
  if (*(int *)(param_1 + 8) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      FUN_1075683c4();
    }
    else {
      (*(code *)(&PTR_FUN_1109bd970)[uVar1])(&stack0xffffffffffffffd8);
    }
  }
  *(undefined8 *)(unaff_x19 + 0x10) = *(undefined8 *)(unaff_x20 + 0x10);
  return;
}



/* Entry: 1075683c4; end: 10756840f;  */

void FUN_1075683c4(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 8) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1109bd960)[*(uint *)(param_1 + 8)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}



/* Entry: 107568410; end: 10756841f;  */

void FUN_107568410(undefined8 param_1,undefined8 param_2)

{
  func_0x000107569ae0(param_2);
  FUN_107568440();
  return;
}



/* Entry: 107568420; end: 10756843f;  */

void FUN_107568420(void)

{
  func_0x000107569ae0();
  FUN_107568440();
  return;
}



/* Entry: 107568440; end: 107568457;  */

void FUN_107568440(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_107327aec(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107568458; end: 107568473;  */

void FUN_107568458(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_107327aec(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107568474; end: 10756854b;  */

void FUN_107568474(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  
  param_1 = (undefined8 *)*param_1;
  if (*(int *)(param_1 + 1) != 0) {
    FUN_1075683c4(param_1);
    func_0x000107569c24();
    *param_1 = extraout_x8;
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  func_0x000107569c24();
  lVar1 = *param_2;
  *param_2 = extraout_x8_00;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_107327aec(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10756854c; end: 107568583;  */

void FUN_10756854c(void)

{
  func_0x0001075697d4();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x000107569a80();
  FUN_107568584();
  return;
}



/* Entry: 107568584; end: 1075685bb;  */

undefined1 * FUN_107568584(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[8] = 0;
  FUN_1075685bc();
  return param_1;
}



/* Entry: 1075685bc; end: 1075685cf;  */

void FUN_1075685bc(long param_1,long param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    __ZNSt13exception_ptrC1ERKS_();
    *(undefined1 *)(param_1 + 8) = 1;
    return;
  }
  return;
}



/* Entry: 1075685d0; end: 1075685eb;  */

void FUN_1075685d0(long param_1)

{
  __ZNSt13exception_ptrC1ERKS_();
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 1075685ec; end: 107568677;  */

void FUN_1075685ec(void)

{
  long lVar1;
  long *unaff_x23;
  undefined1 auStack_58 [8];
  long lStack_50;
  
  func_0x0001075698f4();
  func_0x000107569aec();
  if (lStack_50 != 0) {
    lVar1 = *unaff_x23;
    FUN_107568678(auStack_58);
    func_0x000107569b3c();
    func_0x0001075699e4();
    if (lVar1 != 0) {
      func_0x0001075696b4();
    }
  }
  func_0x000107569a10();
  return;
}



/* Entry: 107568678; end: 1075686db;  */

void FUN_107568678(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_60;
  undefined1 auStack_58 [40];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_3;
  uStack_28 = param_4;
  FUN_10756854c(auStack_58,param_5);
  FUN_1075686dc(&uStack_60,param_2,&uStack_30,auStack_58);
  *param_1 = uStack_60;
  func_0x000107569b1c();
  return;
}



/* Entry: 1075686dc; end: 107568743;  */

void FUN_1075686dc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  
  uVar3 = param_2;
  func_0x000107569984();
  uVar1 = *param_3;
  uVar2 = param_3[1];
  FUN_107568744(auStack_68,param_4);
  FUN_1075687d8(uVar3,param_2,uVar1,uVar2,auStack_68);
  *param_1 = uVar3;
  func_0x000107569b1c();
  return;
}



/* Entry: 107568744; end: 10756877b;  */

undefined8 * FUN_107568744(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_10756877c(param_1 + 3,param_2 + 3);
  return param_1;
}



/* Entry: 10756877c; end: 1075687a7;  */

undefined1 * FUN_10756877c(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[8] = 0;
  FUN_1075687a8();
  return param_1;
}



/* Entry: 1075687a8; end: 1075687bb;  */

void FUN_1075687a8(long param_1,long param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    __ZNSt13exception_ptrC1ERKS_();
    *(undefined1 *)(param_1 + 8) = 1;
    return;
  }
  return;
}



/* Entry: 1075687bc; end: 1075687d7;  */

void FUN_1075687bc(long param_1)

{
  __ZNSt13exception_ptrC1ERKS_();
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 1075687d8; end: 10756880f;  */

undefined8 *
FUN_1075687d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  *param_1 = &PTR_FUN_1109bd990;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  FUN_107568744(param_1 + 4,param_5);
  return param_1;
}



/* Entry: 107568810; end: 107568813;  */

undefined8 * FUN_107568810(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109bd990;
  FUN_1073787dc(param_1 + 4);
  return param_1;
}



/* Entry: 107568814; end: 107568827;  */

void FUN_107568814(void)

{
  FUN_10756884c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107568828; end: 10756884b;  */

void FUN_107568828(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x000107568848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1 + 0x20);
  return;
}



/* Entry: 10756884c; end: 1075688a7;  */

undefined8 * FUN_10756884c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109bd990;
  FUN_1073787dc(param_1 + 4);
  return param_1;
}



/* Entry: 1075688a8; end: 1075689bb;  */

void FUN_1075688a8(long *param_1,undefined8 param_2,long *param_3)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_x8;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined *unaff_x22;
  undefined8 uStack_1a0;
  long *plStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  long *plStack_170;
  long *plStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined1 auStack_128 [112];
  long alStack_b8 [7];
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  
  func_0x0001075696cc();
  uVar1 = *param_3 == param_3[1];
  uStack_48 = extraout_x8;
  if (!(bool)uVar1) {
    func_0x000107569c30();
    unaff_x22 = &UNK_110996710;
    func_0x00010756992c();
    func_0x000104c2fe00(auStack_80);
    FUN_107371bc4(auStack_128,"source",auStack_80);
    func_0x00010756982c();
    func_0x000107569bf0();
    FUN_10743fa9c();
    func_0x000104c2f714(auStack_80);
    func_0x000107569bc4();
    func_0x000107569c30();
    func_0x00010756992c();
    func_0x000104c2fe00(alStack_b8,param_2);
    FUN_107371bc4(auStack_128,"source",alStack_b8);
    func_0x00010756982c();
    func_0x000107569bf0();
    FUN_10743fa44();
    param_1 = alStack_b8;
    func_0x000104c2f714();
    func_0x000107569bc4();
    unaff_x20 = param_3;
    unaff_x21 = param_2;
  }
  func_0x000107569680(uStack_48);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  plVar2 = alStack_b8;
  func_0x000104c2f714();
  func_0x000107569bc4();
  func_0x000107569710();
  pcStack_158 = FUN_1075689bc;
  puStack_180 = unaff_x22;
  uStack_178 = unaff_x21;
  plStack_170 = unaff_x20;
  plStack_168 = param_1;
  puStack_160 = &stack0xfffffffffffffff0;
  func_0x0001075697d4();
  FUN_1074570d4();
  if (*plVar2 == 0) {
    plVar3 = plVar2;
    func_0x000107569a68();
    uStack_190 = 1;
    plStack_198 = param_1 + 1;
    *(long *)((long)plVar3 + 0x1c) = *unaff_x20;
    *(int *)((long)plVar3 + 0x24) = (int)unaff_x20[1];
    FUN_107457084(param_1,uStack_188,plVar2,plVar3);
    uStack_1a0 = 0;
    FUN_1074571a8(&uStack_1a0);
  }
  return;
}



/* Entry: 1075689bc; end: 107568a3f;  */

void FUN_1075689bc(long *param_1)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  
  func_0x0001075697d4();
  FUN_1074570d4();
  if (*param_1 == 0) {
    func_0x000107569a68();
    uStack_40 = 1;
    *(undefined8 *)((long)param_1 + 0x1c) = *unaff_x20;
    *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(unaff_x20 + 1);
    lStack_48 = unaff_x19 + 8;
    FUN_107457084();
    uStack_50 = 0;
    FUN_1074571a8(&uStack_50);
  }
  return;
}



/* Entry: 107568a40; end: 107568abb;  */

undefined8 FUN_107568a40(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107568a68(param_1,*(undefined8 *)(param_1 + 0x10));
  func_0x000107569ae0(param_1);
  FUN_107568abc();
  return unaff_x19;
}



/* Entry: 107568abc; end: 107568ad3;  */

void FUN_107568abc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107568ad4; end: 107568b37;  */

long FUN_107568ad4(long param_1)

{
  func_0x000107568af8(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 107568b38; end: 107568bff;  */

long FUN_107568b38(long *param_1,undefined8 param_2)

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
    func_0x00010784b234();
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
        if (plVar4 != plVar2) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x00010726b840(lVar3,param_2);
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



/* Entry: 107568c00; end: 107568c7f;  */

long FUN_107568c00(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Entry: 107568c80; end: 107568c93;  */

void FUN_107568c80(void)

{
  func_0x000107568c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107568c94; end: 107568cc7;  */

undefined8 FUN_107568c94(undefined8 param_1)

{
  func_0x000107569b34();
  FUN_107568d28();
  return param_1;
}



/* Entry: 107568cc8; end: 107568cf3;  */

void FUN_107568cc8(long param_1,undefined8 param_2)

{
  func_0x000107569c8c(param_2,param_1 + 8);
  FUN_107565afc();
  return;
}



/* Entry: 107568cf4; end: 107568d1b;  */

void FUN_107568cf4(undefined8 param_1)

{
  func_0x0001075697e0();
  func_0x000107569738(param_1,&PTR_DAT_1109bda30);
  func_0x0001075696dc();
  return;
}



/* Entry: 107568d1c; end: 107568d27;  */

undefined ** FUN_107568d1c(void)

{
  return &PTR_DAT_1109bda30;
}



/* Entry: 107568d28; end: 107568d73;  */

void FUN_107568d28(void)

{
  func_0x000107569c8c();
  FUN_107565afc();
  return;
}



/* Entry: 107568d74; end: 107568e67;  */

void FUN_107568d74(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_107568e28;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_107568e28;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_107568e28:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 107568e68; end: 107568e8f;  */

undefined8 FUN_107568e68(undefined8 param_1)

{
  func_0x00010756999c(&PTR_FUN_1109bda50);
  return param_1;
}



/* Entry: 107568e90; end: 107568ea3;  */

void FUN_107568e90(void)

{
  FUN_107568e68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107568ea4; end: 107568ec7;  */

undefined8 * FUN_107568ea4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x000107569b9c();
  *puVar1 = &PTR_FUN_1109bda50;
  FUN_107565e1c(puVar1 + 1,param_1 + 1);
  return puVar1;
}



/* Entry: 107568ec8; end: 107568eef;  */

undefined8 * FUN_107568ec8(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109bda50;
  FUN_107565e1c(param_2 + 1,param_1 + 8);
  return param_2;
}



/* Entry: 107568ef0; end: 107568f17;  */

void FUN_107568ef0(undefined8 param_1)

{
  func_0x0001075697e0();
  func_0x000107569738(param_1,&PTR_DAT_1109bdab0);
  func_0x0001075696dc();
  return;
}



/* Entry: 107568f18; end: 107568f23;  */

undefined ** FUN_107568f18(void)

{
  return &PTR_DAT_1109bdab0;
}



/* Entry: 107568f24; end: 107568fbf;  */

undefined8 * FUN_107568f24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109bda50;
  FUN_107565e1c(param_1 + 1);
  return param_1;
}



/* Entry: 107568fc0; end: 107569013;  */

long FUN_107568fc0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  func_0x00010002c7d4();
  if (*param_1 == param_2) {
    *param_1 = lVar1;
  }
  param_1[2] = param_1[2] + -1;
  func_0x00010530d618(param_1[1],param_2);
  return lVar1;
}



/* Entry: 107569014; end: 10756903b;  */

undefined8 FUN_107569014(undefined8 param_1)

{
  func_0x00010756999c(&PTR_FUN_1109bdad0);
  return param_1;
}



/* Entry: 10756903c; end: 10756904f;  */

void FUN_10756903c(void)

{
  FUN_107569014();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107569050; end: 107569077;  */

undefined8 * FUN_107569050(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  *puVar1 = &PTR_FUN_1109bdad0;
  FUN_10756601c(puVar1 + 1,param_1 + 8);
  return puVar1;
}



/* Entry: 107569078; end: 10756909f;  */

undefined8 * FUN_107569078(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109bdad0;
  FUN_10756601c(param_2 + 1,param_1 + 8);
  return param_2;
}



/* Entry: 1075690a0; end: 1075690c7;  */

void FUN_1075690a0(undefined8 param_1)

{
  func_0x0001075697e0();
  func_0x000107569738(param_1,&PTR_DAT_1109bdb30);
  func_0x0001075696dc();
  return;
}



/* Entry: 1075690c8; end: 1075690d3;  */

undefined ** FUN_1075690c8(void)

{
  return &PTR_DAT_1109bdb30;
}



/* Entry: 1075690d4; end: 1075690ff;  */

undefined8 * FUN_1075690d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109bdad0;
  FUN_10756601c(param_1 + 1);
  return param_1;
}



/* Entry: 107569100; end: 107569103;  */

void FUN_107569100(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107569104; end: 107569117;  */

void FUN_107569104(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107569118; end: 107569127;  */

void FUN_107569118(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001075696c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 107569128; end: 107569157;  */

long FUN_107569128(int param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001075697e0();
  func_0x000107569738();
  lVar1 = unaff_x19 + 0x18;
  if (param_1 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 107569158; end: 10756915b;  */

void FUN_107569158(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10756915c; end: 1075691a3;  */

long FUN_10756915c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1075691a4; end: 1075691b7;  */

void FUN_1075691a4(void)

{
  func_0x000107569184();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1075691b8; end: 1075691db;  */

undefined8 FUN_1075691b8(void)

{
  undefined8 unaff_x19;
  
  func_0x000107569a30();
  func_0x000107569c78();
  FUN_10756642c();
  return unaff_x19;
}



/* Entry: 1075691dc; end: 107569207;  */

void FUN_1075691dc(long param_1,undefined8 param_2)

{
  func_0x000107569c78(param_2,param_1 + 8);
  FUN_10756642c();
  return;
}



/* Entry: 107569208; end: 10756922f;  */

void FUN_107569208(undefined8 param_1)

{
  func_0x0001075697e0();
  func_0x000107569738(param_1,&PTR_DAT_1109bdc10);
  func_0x0001075696dc();
  return;
}



/* Entry: 107569230; end: 10756923b;  */

undefined ** FUN_107569230(void)

{
  return &PTR_DAT_1109bdc10;
}



/* Entry: 10756923c; end: 10756927b;  */

void FUN_10756923c(void)

{
  func_0x000107569c78();
  FUN_10756642c();
  return;
}



/* Entry: 10756927c; end: 10756928f;  */

void FUN_10756927c(void)

{
  func_0x00010756925c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107569290; end: 1075692c7;  */

undefined8 FUN_107569290(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x60;
  __Znwm(0x60);
  FUN_107569328();
  return uVar1;
}



/* Entry: 1075692c8; end: 1075692f3;  */

void FUN_1075692c8(long param_1,undefined8 param_2)

{
  func_0x000107569c50(param_2,param_1 + 8);
  FUN_1075666ec();
  return;
}



/* Entry: 1075692f4; end: 10756931b;  */

void FUN_1075692f4(undefined8 param_1)

{
  func_0x0001075697e0();
  func_0x000107569738(param_1,&PTR_DAT_1109bdc90);
  func_0x0001075696dc();
  return;
}


