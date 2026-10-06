/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0052a2bc; end: 0052a33b;  */

void FUN_0052a2bc(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] - (param_1[1] - *param_1);
  _memcpy(lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 0052a33c; end: 0052a34f;  */

void FUN_0052a33c(void)

{
  FUN_0040d774("vector");
  FUN_0052a374();
  return;
}



/* Entry: 0052a350; end: 0052a373;  */

void FUN_0052a350(void)

{
  FUN_0052a374();
  return;
}



/* Entry: 0052a374; end: 0052a38f;  */

long * FUN_0052a374(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(plVar1);
    return plVar1;
  }
  FUN_0040cee8();
  FUN_0052a3bc();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 0052a390; end: 0052a3bb;  */

long * FUN_0052a390(long *param_1)

{
  FUN_0052a3bc();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 0052a3bc; end: 0052a3df;  */

void FUN_0052a3bc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 0052a3e0; end: 0052a477;  */

undefined8 *
FUN_0052a3e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 auStack_50 [2];
  undefined8 *puStack_40;
  long lStack_38;
  
  puVar1 = auStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0052a478(auStack_50,1);
  *puStack_40 = param_2;
  puStack_40[1] = param_3;
  FUN_0052a4d0(puStack_40 + 2);
  puVar2 = puStack_40;
  puStack_40 = (undefined8 *)0x0;
  func_0x0052a524();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar1[1] = param_4;
  puVar2 = puVar1;
  FUN_0052a4a0();
  puVar1[2] = puVar2;
  return puVar1;
}



/* Entry: 0052a478; end: 0052a49f;  */

long FUN_0052a478(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_0052a4a0();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 0052a4a0; end: 0052a4cf;  */

void FUN_0052a4a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 < (undefined8 *)0x2e8ba2e8ba2e8bb) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)((long)param_2 * 0x58);
    return;
  }
  FUN_0040cee8();
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  param_1[8] = param_2[8];
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  return;
}



/* Entry: 0052a4d0; end: 0052a533;  */

void FUN_0052a4d0(undefined8 *param_1,undefined8 *param_2)

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
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  param_1[8] = param_2[8];
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  return;
}



/* Entry: 0052a534; end: 0052a907;  */

undefined1  [16] FUN_0052a534(long *param_1,undefined8 param_2,qword *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  char *pcVar14;
  long *plVar15;
  long *unaff_x26;
  undefined1 *puVar16;
  qword qVar17;
  undefined1 auVar18 [16];
  char *pcStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  plVar9 = param_1 + 3;
  FUN_0052a908();
  plVar15 = (long *)param_1[1];
  if (plVar15 != (long *)0x0) {
    puVar16 = (undefined1 *)((long)plVar15 + -1);
    if (((ulong)plVar15 & (ulong)puVar16) == 0) {
      unaff_x26 = (long *)((ulong)puVar16 & (ulong)plVar9);
    }
    else {
      unaff_x26 = plVar9;
      if (plVar15 <= plVar9) {
        uVar2 = 0;
        if (plVar15 != (long *)0x0) {
          uVar2 = (ulong)plVar9 / (ulong)plVar15;
        }
        unaff_x26 = (long *)((long)plVar9 - uVar2 * (long)plVar15);
      }
    }
    pcVar14 = *(char **)(*param_1 + (long)unaff_x26 * 8);
    if (pcVar14 != (char *)0x0) {
      do {
        while( true ) {
          pcVar14 = *(char **)pcVar14;
          if (pcVar14 == (char *)0x0) goto LAB_0052a604;
          plVar6 = *(long **)(pcVar14 + 8);
          if (plVar6 != plVar9) break;
          plVar6 = param_1 + 4;
          func_0x0052a914(plVar6,pcVar14 + 0x10,param_2);
          if (((ulong)plVar6 & 1) != 0) {
            uVar5 = 0;
            goto LAB_0052a8c8;
          }
        }
        if (((ulong)plVar15 & (ulong)puVar16) == 0) {
          plVar6 = (long *)((ulong)plVar6 & (ulong)puVar16);
        }
        else if (plVar15 <= plVar6) {
          uVar2 = 0;
          if (plVar15 != (long *)0x0) {
            uVar2 = (ulong)plVar6 / (ulong)plVar15;
          }
          plVar6 = (long *)((long)plVar6 - uVar2 * (long)plVar15);
        }
      } while (plVar6 == unaff_x26);
    }
  }
LAB_0052a604:
  uVar1 = *param_4;
  plVar6 = param_1 + 2;
  pcVar14 = segment_command_00000020.segname;
  __Znwm();
  uStack_68 = 1;
  pcVar14[0] = '\0';
  pcVar14[1] = '\0';
  pcVar14[2] = '\0';
  pcVar14[3] = '\0';
  pcVar14[4] = '\0';
  pcVar14[5] = '\0';
  pcVar14[6] = '\0';
  pcVar14[7] = '\0';
  *(long **)(pcVar14 + 8) = plVar9;
  qVar17 = *param_3;
  *(qword *)(pcVar14 + 0x18) = param_3[1];
  *(qword *)(pcVar14 + 0x10) = qVar17;
  *(undefined4 *)(pcVar14 + 0x20) = uVar1;
  plStack_70 = plVar6;
  if ((plVar15 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar15)) goto LAB_0052a84c;
  uVar2 = 1;
  if ((long *)((long)&MACH_HEADER.magic + 2) < plVar15) {
    uVar2 = (ulong)(((ulong)plVar15 & (ulong)((long)plVar15 + -1)) != 0);
  }
  plVar7 = (long *)(uVar2 | (long)plVar15 << 1);
  plVar15 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar7 <= plVar15) {
    plVar7 = plVar15;
  }
  pcStack_78 = pcVar14;
  if ((undefined1 *)((long)plVar7 - 1U) == (undefined1 *)0x0) {
    plVar7 = (long *)((long)&MACH_HEADER.magic + 2);
  }
  else if (((ulong)plVar7 & (long)plVar7 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar15 = (long *)param_1[1];
  if (plVar15 < plVar7) {
LAB_0052a6b8:
    if ((ulong)plVar7 >> 0x3d != 0) {
      FUN_0040cee8();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x52a8f4);
      (*pcVar3)();
    }
    lVar4 = (long)plVar7 << 3;
    __Znwm(lVar4);
    func_0x0052a924(param_1,lVar4);
    param_1[1] = (long)plVar7;
    lVar4 = *param_1;
    for (plVar15 = (long *)0x0; plVar7 != plVar15; plVar15 = (long *)((long)plVar15 + 1)) {
      *(undefined8 *)(lVar4 + (long)plVar15 * 8) = 0;
    }
    plVar10 = (long *)*plVar6;
    plVar15 = plVar7;
    if (plVar10 != (long *)0x0) {
      plVar11 = (long *)plVar10[1];
      puVar16 = (undefined1 *)((long)plVar7 + -1);
      uVar2 = 0;
      if (plVar7 != (long *)0x0) {
        uVar2 = (ulong)plVar11 / (ulong)plVar7;
      }
      plVar12 = plVar11;
      if (plVar7 <= plVar11) {
        plVar12 = (long *)((long)plVar11 - uVar2 * (long)plVar7);
      }
      if (((ulong)plVar7 & (ulong)puVar16) == 0) {
        plVar12 = (long *)((ulong)plVar11 & (ulong)puVar16);
      }
      *(long **)(lVar4 + (long)plVar12 * 8) = plVar6;
      while (plVar11 = plVar10, plVar10 = (long *)*plVar11, plVar10 != (long *)0x0) {
        plVar13 = (long *)plVar10[1];
        if (((ulong)plVar7 & (ulong)puVar16) == 0) {
          plVar13 = (long *)((ulong)plVar13 & (ulong)puVar16);
        }
        else if (plVar7 <= plVar13) {
          uVar2 = 0;
          if (plVar7 != (long *)0x0) {
            uVar2 = (ulong)plVar13 / (ulong)plVar7;
          }
          plVar13 = (long *)((long)plVar13 - uVar2 * (long)plVar7);
        }
        if (plVar13 != plVar12) {
          if (*(long *)(lVar4 + (long)plVar13 * 8) == 0) {
            *(long **)(lVar4 + (long)plVar13 * 8) = plVar11;
            plVar12 = plVar13;
          }
          else {
            *plVar11 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar4 + (long)plVar13 * 8);
            **(long **)(lVar4 + (long)plVar13 * 8) = (long)plVar10;
            plVar10 = plVar11;
          }
        }
      }
    }
  }
  else if (plVar7 < plVar15) {
    plVar10 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar15 < (long *)((long)&MACH_HEADER.magic + 3)) ||
       (((ulong)plVar15 & (ulong)((long)plVar15 + -1)) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)((long)&MACH_HEADER.magic + 1) < plVar10) {
      plVar10 = (long *)(1L << (-LZCOUNT((undefined1 *)((long)plVar10 + -1)) & 0x3fU));
    }
    if (plVar7 <= plVar10) {
      plVar7 = plVar10;
    }
    if (plVar7 < plVar15) {
      if (plVar7 != (long *)0x0) goto LAB_0052a6b8;
      func_0x0052a924(param_1,0);
      param_1[1] = 0;
      plVar15 = (long *)0x0;
    }
    else {
      plVar15 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar15 & (ulong)((long)plVar15 + -1)) == 0) {
    unaff_x26 = (long *)((ulong)((long)plVar15 + -1) & (ulong)plVar9);
  }
  else {
    unaff_x26 = plVar9;
    if (plVar15 <= plVar9) {
      uVar2 = 0;
      if (plVar15 != (long *)0x0) {
        uVar2 = (ulong)plVar9 / (ulong)plVar15;
      }
      unaff_x26 = (long *)((long)plVar9 - uVar2 * (long)plVar15);
    }
  }
LAB_0052a84c:
  lVar4 = *param_1;
  puVar8 = *(undefined8 **)(lVar4 + (long)unaff_x26 * 8);
  if (puVar8 == (undefined8 *)0x0) {
    *(long *)pcVar14 = *plVar6;
    *plVar6 = (long)pcVar14;
    *(long **)(lVar4 + (long)unaff_x26 * 8) = plVar6;
    if (*(long *)pcVar14 != 0) {
      plVar9 = *(long **)(*(long *)pcVar14 + 8);
      if (((ulong)plVar15 & (ulong)((long)plVar15 + -1)) == 0) {
        plVar9 = (long *)((ulong)plVar9 & (ulong)((long)plVar15 + -1));
      }
      else if (plVar15 <= plVar9) {
        uVar2 = 0;
        if (plVar15 != (long *)0x0) {
          uVar2 = (ulong)plVar9 / (ulong)plVar15;
        }
        plVar9 = (long *)((long)plVar9 - uVar2 * (long)plVar15);
      }
      *(char **)(lVar4 + (long)plVar9 * 8) = pcVar14;
    }
  }
  else {
    *(undefined8 *)pcVar14 = *puVar8;
    *puVar8 = pcVar14;
  }
  pcStack_78 = (char *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_0052a93c(&pcStack_78);
  uVar5 = 1;
LAB_0052a8c8:
  auVar18._8_8_ = uVar5;
  auVar18._0_8_ = pcVar14;
  return auVar18;
}



/* Entry: 0052a908; end: 0052a93b;  */

void FUN_0052a908(undefined8 param_1,undefined8 *param_2)

{
  undefined1 uStack_11;
  
  FUN_00459818(&uStack_11,*param_2,param_2[1]);
  return;
}



/* Entry: 0052a93c; end: 0052a967;  */

long * FUN_0052a93c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 0052a968; end: 0052aa47;  */

long FUN_0052a968(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar5 = (long *)param_1[1];
  if ((plVar5 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    FUN_0052a908();
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)((ulong)plVar2 & uVar6);
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
    plVar4 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar4 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        plVar3 = (long *)plVar4[1];
        if (plVar2 != plVar3) break;
        plVar3 = param_1 + 4;
        func_0x0052a914(plVar3,plVar4 + 2,param_2);
        if ((int)plVar3 != 0) {
          return (long)plVar4;
        }
      }
      if (((ulong)plVar5 & uVar6) == 0) {
        plVar3 = (long *)((ulong)plVar3 & uVar6);
      }
      else if (plVar5 <= plVar3) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar3 / (ulong)plVar5;
        }
        plVar3 = (long *)((long)plVar3 - uVar1 * (long)plVar5);
      }
    } while (plVar3 == plVar7);
  }
  return 0;
}



/* Entry: 0052aa48; end: 0052aa7b;  */

void FUN_0052aa48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00779e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex4lockEv_00998bd0)(param_1 + 8);
  return;
}



/* Entry: 0052aa7c; end: 0052ab7f;  */

void FUN_0052aa7c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  for (lVar2 = *(long *)(param_1 + 8); lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    FUN_0052f9f0(lVar2,0x40,0,0x5f);
  }
  return;
}



/* Entry: 0052ab80; end: 0052abff;  */

void FUN_0052ab80(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x10) {
    func_0x0052ab58(param_1,param_2);
  }
  return;
}



/* Entry: 0052ac00; end: 0052ac5f;  */

long FUN_0052ac00(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_28;
  
  uVar2 = (long)*(int *)*param_1 * -0x395b586ca42e166b;
  lStack_28 = (uVar2 ^ uVar2 >> 0x2f) * 0x35a98f4d286a90b9 + 0xe6546b64;
  func_0x0052ab58(&lStack_28,(int *)*param_1 + 10);
  func_0x0052ab58(&lStack_28,*param_1 + 8);
  lVar1 = *(long *)(*param_1 + 0x38);
  FUN_0052ab80(&lStack_28,lVar1,lVar1 + *(long *)(*param_1 + 0x40) * 0x10);
  func_0x0052abc0(&lStack_28,param_1[1],param_1[2]);
  return lStack_28;
}



/* Entry: 0052ac60; end: 0052ac87;  */

void FUN_0052ac60(undefined8 param_1,undefined8 param_2)

{
  FUN_0052ac88(param_2);
  func_0x0052acf0();
  return;
}



/* Entry: 0052ac88; end: 0052ad97;  */

ulong FUN_0052ac88(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  pcVar2 = *(char **)param_1;
  if (-1 < param_1[0x17]) {
    uVar3 = (ulong)(byte)param_1[0x17];
    pcVar2 = param_1;
  }
  pcVar1 = pcVar2 + uVar3;
  uVar3 = 0;
  for (; pcVar2 != pcVar1; pcVar2 = pcVar2 + 1) {
    uVar3 = (((long)*pcVar2 * -0x395b586ca42e166b ^
             (ulong)((long)*pcVar2 * -0x395b586ca42e166b) >> 0x2f) * -0x395b586ca42e166b ^ uVar3) *
            -0x395b586ca42e166b + 0xe6546b64;
  }
  return uVar3;
}



/* Entry: 0052ad98; end: 0052adff;  */

int FUN_0052ad98(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  int *unaff_x19;
  long unaff_x20;
  long lVar4;
  int *piStack_38;
  
  func_0x0052bb68();
  if ((param_3 & 1) == 0) {
    func_0x0052ba58();
  }
  func_0x0052ba58(unaff_x19 + 6,0x20);
  lVar1 = *(long *)(unaff_x19 + 0xe);
  for (lVar4 = *(long *)(unaff_x19 + 0xc); lVar4 != lVar1; lVar4 = lVar4 + 0x18) {
    func_0x0052ba58(lVar4,0x40);
  }
  FUN_0052aa48(unaff_x20 + 0x18);
  piVar3 = unaff_x19 + 0x12;
  FUN_0052a038();
  piStack_38 = piVar3;
  FUN_0052a188(unaff_x19 + 0x18,&piStack_38);
  lVar4 = *(long *)(unaff_x19 + 0x18);
  lVar1 = *(long *)(unaff_x19 + 0x1a);
  iVar2 = *unaff_x19;
  func_0x0052aa64();
  func_0x0052a080(unaff_x19 + 0x1e,&piStack_38,&stack0xffffffffffffffdc);
  func_0x0052aa5c();
  return iVar2 + (int)((ulong)(lVar1 - lVar4) >> 3) + -1;
}



/* Entry: 0052ae00; end: 0052ae3f;  */

void FUN_0052ae00(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_28;
  
  lVar1 = param_1 + 0xb8;
  uStack_28 = param_2;
  func_0x0052b228(lVar1,&uStack_28);
  if (lVar1 != 0) {
    FUN_0052ae40(param_1 + 0xb8,&uStack_28);
  }
  return;
}



/* Entry: 0052ae40; end: 0052ae5f;  */

long FUN_0052ae40(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uStack_38;
  
  FUN_0052b244();
  if (param_1 != 0) {
    return param_1 + 0x18;
  }
  func_0x0052bbf0();
  lVar1 = param_1 + 0xe0;
  uStack_38 = param_2;
  FUN_0052b2e0(lVar1,&uStack_38);
  lVar3 = 0;
  if (lVar1 != 0) {
    plVar2 = (long *)(param_1 + 0xe0);
    FUN_0052aea0(plVar2,&uStack_38);
    lVar3 = *plVar2;
  }
  return lVar3;
}



/* Entry: 0052ae60; end: 0052ae9f;  */

void FUN_0052ae60(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_28;
  
  lVar1 = param_1 + 0xe0;
  uStack_28 = param_2;
  FUN_0052b2e0(lVar1,&uStack_28);
  if (lVar1 != 0) {
    FUN_0052aea0(param_1 + 0xe0,&uStack_28);
  }
  return;
}



/* Entry: 0052aea0; end: 0052aebf;  */

long * FUN_0052aea0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  FUN_0052b2fc();
  if (param_1 != 0) {
    return (long *)(param_1 + 0x18);
  }
  func_0x0052bbf0();
  FUN_0052b398(param_1 + 0xb8);
  plVar1 = (long *)(param_1 + 0xe0);
  plVar2 = plVar1;
  if (*(long *)(param_1 + 0xf8) != 0) {
    FUN_00529490(plVar1,*(undefined8 *)(param_1 + 0xf0));
    *(undefined8 *)(param_1 + 0xf0) = 0;
    lVar4 = *(long *)(param_1 + 0xe8);
    for (lVar3 = 0; lVar4 != lVar3; lVar3 = lVar3 + 1) {
      *(undefined8 *)(*plVar1 + lVar3 * 8) = 0;
    }
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  return plVar2;
}



/* Entry: 0052aec0; end: 0052af23;  */

void FUN_0052aec0(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_0052b398(param_1 + 0xb8);
  if (*(long *)(param_1 + 0xf8) != 0) {
    FUN_00529490((long *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xf0));
    *(undefined8 *)(param_1 + 0xf0) = 0;
    lVar2 = *(long *)(param_1 + 0xe8);
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*(long *)(param_1 + 0xe0) + lVar1 * 8) = 0;
    }
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  return;
}



/* Entry: 0052af24; end: 0052af47;  */

long FUN_0052af24(long param_1)

{
  func_0x0052bba4();
  FUN_0052b440();
  return param_1 + 0x18;
}



/* Entry: 0052af48; end: 0052af83;  */

void FUN_0052af48(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_28;
  
  func_0x0052bb68();
  uVar1 = *param_2;
  FUN_0052ac00();
  uStack_28 = uVar1;
  FUN_0052af84(unaff_x20 + 0xe0,&uStack_28);
  func_0x00529a28();
  return;
}



/* Entry: 0052af84; end: 0052afa7;  */

long FUN_0052af84(long param_1)

{
  func_0x0052bba4();
  FUN_0052b74c();
  return param_1 + 0x18;
}



/* Entry: 0052afa8; end: 0052afdf;  */

undefined1  [16] FUN_0052afa8(long *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  long *plVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  int *unaff_x19;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if ((ulong)((param_1[1] - *param_1) / 0x48) <= (param_2 & 0xffffffff)) {
    uVar3 = (uint)param_2;
    if (0xff < uVar3) {
      FUN_0052aa48(param_1 + 3);
      uVar5 = (ulong)(uVar3 - *unaff_x19);
      if (uVar5 < (ulong)(*(long *)(unaff_x19 + 0x1a) - *(long *)(unaff_x19 + 0x18) >> 3)) {
        uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x18) + uVar5 * 8);
      }
      else {
        uVar6 = 0;
      }
      func_0x0052aa5c();
      auVar7._8_8_ = param_2;
      auVar7._0_8_ = uVar6;
      return auVar7;
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_2;
    return auVar1 << 0x40;
  }
  auVar8._8_8_ = param_2 & 0xffffffff;
  if (auVar8._8_8_ < (ulong)((param_1[1] - *param_1) / 0x48)) {
    auVar8._0_8_ = *param_1 + auVar8._8_8_ * 0x48;
    return auVar8;
  }
  func_0x0052b21c();
  FUN_0052afa8();
  if (param_1 == (long *)0x0) {
    lVar4 = 0x16;
    plVar2 = (long *)"UNREGISTERED_PARTITION";
  }
  else {
    lVar4 = (long)*(char *)((long)param_1 + 0x2f);
    if (lVar4 < 0) {
      lVar4 = param_1[4];
      if (lVar4 != 0) {
        plVar2 = (long *)param_1[3];
        goto LAB_0052b068;
      }
    }
    else {
      plVar2 = param_1 + 3;
      if (*(char *)((long)param_1 + 0x2f) != '\0') goto LAB_0052b068;
    }
    lVar4 = (long)*(char *)((long)param_1 + 0x17);
    plVar2 = param_1;
    if (lVar4 < 0) {
      plVar2 = (long *)*param_1;
      lVar4 = param_1[1];
    }
  }
LAB_0052b068:
  auVar9._8_8_ = lVar4;
  auVar9._0_8_ = plVar2;
  return auVar9;
}



/* Entry: 0052afe0; end: 0052b06f;  */

undefined1  [16] FUN_0052afe0(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 < (ulong)((param_1[1] - *param_1) / 0x48)) {
    auVar3._0_8_ = *param_1 + param_2 * 0x48;
    auVar3._8_8_ = param_2;
    return auVar3;
  }
  func_0x0052b21c();
  FUN_0052afa8();
  if (param_1 == (long *)0x0) {
    lVar2 = 0x16;
    plVar1 = (long *)"UNREGISTERED_PARTITION";
  }
  else {
    lVar2 = (long)*(char *)((long)param_1 + 0x2f);
    if (lVar2 < 0) {
      lVar2 = param_1[4];
      if (lVar2 != 0) {
        plVar1 = (long *)param_1[3];
        goto LAB_0052b068;
      }
    }
    else {
      plVar1 = param_1 + 3;
      if (*(char *)((long)param_1 + 0x2f) != '\0') goto LAB_0052b068;
    }
    lVar2 = (long)*(char *)((long)param_1 + 0x17);
    plVar1 = param_1;
    if (lVar2 < 0) {
      plVar1 = (long *)*param_1;
      lVar2 = param_1[1];
    }
  }
LAB_0052b068:
  auVar4._8_8_ = lVar2;
  auVar4._0_8_ = plVar1;
  return auVar4;
}



/* Entry: 0052b070; end: 0052b0e7;  */

undefined1  [16] FUN_0052b070(long param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  FUN_0052afa8();
  if (param_1 == 0) {
    plVar2 = (long *)"UNREGISTERED_METRIC_NAME";
    uVar3 = 0x18;
  }
  else {
    plVar1 = (long *)(param_1 + 0x30);
    if ((ulong)param_3 < (ulong)((*(long *)(param_1 + 0x38) - *plVar1) / 0x18)) {
      FUN_0052b0e8(plVar1,param_3);
      plVar2 = (long *)*plVar1;
      uVar3 = plVar1[1];
      if (-1 < (char)*(byte *)((long)plVar1 + 0x17)) {
        plVar2 = plVar1;
        uVar3 = (ulong)*(byte *)((long)plVar1 + 0x17);
      }
    }
    else {
      plVar2 = (long *)"UNREGISTERED_METRIC_NAME";
      uVar3 = 0x18;
    }
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = plVar2;
  return auVar4;
}



/* Entry: 0052b0e8; end: 0052b117;  */

ulong FUN_0052b0e8(long *param_1,ulong param_2)

{
  uint uVar1;
  long *plVar2;
  long *unaff_x20;
  ulong uVar3;
  
  if (param_2 < (ulong)((param_1[1] - *param_1) / 0x18)) {
    return *param_1 + param_2 * 0x18;
  }
  FUN_0052b210();
  func_0x0052bb68();
  func_0x0052ba58(param_2,0x40);
  uVar3 = 0;
  while( true ) {
    if ((ulong)((unaff_x20[1] - *unaff_x20) / 0x48) <= uVar3) {
      plVar2 = unaff_x20 + 3;
      FUN_0052a100();
      uVar1 = (uint)plVar2;
      if ((ulong)plVar2 >> 0x20 == 0) {
        uVar1 = 0xffffffff;
      }
      return (ulong)uVar1;
    }
    func_0x0052bbd4();
    if ((param_2 & 1) != 0) break;
    uVar3 = uVar3 + 1;
  }
  return uVar3;
}



/* Entry: 0052b118; end: 0052b20f;  */

ulong FUN_0052b118(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  long *plVar2;
  long *unaff_x20;
  ulong uVar3;
  
  func_0x0052bb68();
  func_0x0052ba58(param_2,0x40);
  uVar3 = 0;
  while( true ) {
    if ((ulong)((unaff_x20[1] - *unaff_x20) / 0x48) <= uVar3) {
      plVar2 = unaff_x20 + 3;
      FUN_0052a100();
      uVar1 = (uint)plVar2;
      if ((ulong)plVar2 >> 0x20 == 0) {
        uVar1 = 0xffffffff;
      }
      return (ulong)uVar1;
    }
    func_0x0052bbd4();
    if ((param_2 & 1) != 0) break;
    uVar3 = uVar3 + 1;
  }
  return uVar3;
}



/* Entry: 0052b210; end: 0052b243;  */

bool FUN_0052b210(long param_1)

{
  func_0x0052baac();
  func_0x0052baac();
  FUN_0052b244();
  return param_1 != 0;
}



/* Entry: 0052b244; end: 0052b2df;  */

long FUN_0052b244(long *param_1,ulong *param_2)

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
        if (uVar4 != uVar7) break;
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



/* Entry: 0052b2e0; end: 0052b2fb;  */

bool FUN_0052b2e0(long param_1)

{
  FUN_0052b2fc();
  return param_1 != 0;
}



/* Entry: 0052b2fc; end: 0052b397;  */

long FUN_0052b2fc(long *param_1,ulong *param_2)

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
        if (uVar4 != uVar7) break;
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



/* Entry: 0052b398; end: 0052b43f;  */

void FUN_0052b398(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    func_0x005294c0(param_1,param_1[2]);
    param_1[2] = 0;
    lVar2 = param_1[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*param_1 + lVar1 * 8) = 0;
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 0052b440; end: 0052b6ef;  */

undefined1  [16] FUN_0052b440(float param_1,float param_2,long *param_3,undefined8 *param_4)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  bool bVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar7;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long *plVar8;
  long *extraout_x9;
  long *plVar9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  long extraout_x9_02;
  long *extraout_x9_03;
  long *extraout_x10;
  long *plVar10;
  long *extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar11;
  undefined8 *unaff_x20;
  undefined8 *puVar12;
  long *unaff_x21;
  long *plVar13;
  long *unaff_x23;
  long *plVar14;
  undefined1 auVar15 [16];
  
  plVar13 = (long *)*param_4;
  plVar14 = (long *)param_3[1];
  plVar9 = param_3;
  if (plVar14 != (long *)0x0) {
    func_0x0052bc30();
    if ((bool)in_ZR) {
      unaff_x21 = (long *)(extraout_x8 & (ulong)plVar13);
    }
    else {
      unaff_x21 = plVar13;
      if (plVar14 <= plVar13) {
        uVar7 = 0;
        if (plVar14 != (long *)0x0) {
          uVar7 = (ulong)plVar13 / (ulong)plVar14;
        }
        unaff_x21 = (long *)((long)plVar13 - uVar7 * (long)plVar14);
      }
    }
    puVar12 = *(undefined8 **)(*param_3 + (long)unaff_x21 * 8);
    unaff_x20 = (undefined8 *)0x0;
    uVar7 = extraout_x8;
    if (puVar12 != (undefined8 *)0x0) {
      do {
        while( true ) {
          unaff_x20 = (undefined8 *)*puVar12;
          if (unaff_x20 == (undefined8 *)0x0) goto LAB_0052b4e8;
          plVar8 = (long *)unaff_x20[1];
          puVar12 = unaff_x20;
          if (plVar8 != plVar13) break;
          if ((long *)unaff_x20[2] == plVar13) {
            uVar6 = 0;
            goto LAB_0052b6cc;
          }
        }
        if (((ulong)plVar14 & uVar7) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar7);
        }
        else if (plVar14 <= plVar8) {
          func_0x0052bbfc();
          uVar7 = extraout_x8_00;
          plVar8 = extraout_x9;
        }
      } while (plVar8 == unaff_x21);
    }
  }
LAB_0052b4e8:
  func_0x0052bb40();
  func_0x0052ba64();
  if ((plVar14 != (long *)0x0) && (param_1 <= param_2 * (float)plVar14)) goto LAB_0052b674;
  func_0x0052bb50();
  bVar3 = plVar14 == (long *)((long)&MACH_HEADER.magic + 3);
  func_0x0052baf8();
  if (bVar3) {
    unaff_x21 = (long *)((long)&MACH_HEADER.magic + 2);
  }
  else if (((ulong)unaff_x21 & extraout_x8_01) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar14 = (long *)param_3[1];
    plVar9 = unaff_x21;
  }
  bVar3 = plVar14 <= unaff_x21;
  uVar4 = unaff_x21 == plVar14;
  if (!bVar3 || (bool)uVar4) {
    if (!bVar3) {
      func_0x0052bb24();
      if ((bVar3) && (((ulong)plVar14 & (ulong)((long)plVar14 + -1)) == 0)) {
        func_0x0052bab8();
      }
      else {
        __ZNSt3__112__next_primeEm();
      }
      if (unaff_x21 <= plVar9) {
        unaff_x21 = plVar9;
      }
      uVar4 = unaff_x21 == plVar14;
      if (unaff_x21 < plVar14) {
        if (unaff_x21 != (long *)0x0) goto LAB_0052b540;
        FUN_0052b6f0(param_3,0);
        param_3[1] = 0;
        plVar14 = (long *)0x0;
      }
      else {
        plVar14 = (long *)param_3[1];
      }
    }
  }
  else {
LAB_0052b540:
    if ((ulong)unaff_x21 >> 0x3d != 0) {
      FUN_0040cee8();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x52b6e0);
      (*pcVar2)();
    }
    lVar5 = (long)unaff_x21 << 3;
    __Znwm(lVar5);
    FUN_0052b6f0(param_3,lVar5);
    param_3[1] = (long)unaff_x21;
    lVar5 = *param_3;
    for (plVar9 = (long *)0x0; uVar4 = unaff_x21 == plVar9, !(bool)uVar4;
        plVar9 = (long *)((long)plVar9 + 1)) {
      *(undefined8 *)(lVar5 + (long)plVar9 * 8) = 0;
    }
    plVar14 = unaff_x21;
    if (*unaff_x23 != 0) {
      func_0x0052bc1c();
      func_0x0052bc08();
      lVar5 = extraout_x8_02;
      uVar7 = extraout_x9_00;
      plVar9 = extraout_x10;
      plVar8 = extraout_x11;
      while (plVar10 = plVar9, plVar9 = (long *)*plVar10, plVar9 != (long *)0x0) {
        plVar11 = (long *)plVar9[1];
        if (((ulong)unaff_x21 & uVar7) == 0) {
          plVar11 = (long *)((ulong)plVar11 & uVar7);
        }
        else if (unaff_x21 <= plVar11) {
          uVar1 = 0;
          if (unaff_x21 != (long *)0x0) {
            uVar1 = (ulong)plVar11 / (ulong)unaff_x21;
          }
          plVar11 = (long *)((long)plVar11 - uVar1 * (long)unaff_x21);
        }
        uVar4 = plVar11 == plVar8;
        if (!(bool)uVar4) {
          if (*(long *)(lVar5 + (long)plVar11 * 8) == 0) {
            *(long **)(lVar5 + (long)plVar11 * 8) = plVar10;
            plVar8 = plVar11;
          }
          else {
            func_0x0052bad8();
            lVar5 = extraout_x8_03;
            uVar7 = extraout_x9_01;
            plVar9 = extraout_x10_00;
            plVar8 = extraout_x11_00;
          }
        }
      }
    }
  }
  func_0x0052bc30();
  if ((bool)uVar4) {
    unaff_x21 = (long *)(extraout_x8_04 & (ulong)plVar13);
  }
  else {
    unaff_x21 = plVar13;
    if (plVar14 <= plVar13) {
      uVar7 = 0;
      if (plVar14 != (long *)0x0) {
        uVar7 = (ulong)plVar13 / (ulong)plVar14;
      }
      unaff_x21 = (long *)((long)plVar13 - uVar7 * (long)plVar14);
    }
  }
LAB_0052b674:
  puVar12 = *(undefined8 **)(*param_3 + (long)unaff_x21 * 8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0052bb8c();
    if (extraout_x9_02 != 0) {
      plVar9 = *(long **)(extraout_x9_02 + 8);
      lVar5 = extraout_x8_05;
      if (((ulong)plVar14 & (ulong)((long)plVar14 + -1)) == 0) {
        plVar9 = (long *)((ulong)plVar9 & (ulong)((long)plVar14 + -1));
      }
      else if (plVar14 <= plVar9) {
        func_0x0052bbfc();
        lVar5 = extraout_x8_06;
        plVar9 = extraout_x9_03;
      }
      *(undefined8 **)(lVar5 + (long)plVar9 * 8) = unaff_x20;
    }
  }
  else {
    *unaff_x20 = *puVar12;
    *puVar12 = unaff_x20;
  }
  func_0x0052bb74();
  FUN_0052b708();
  uVar6 = 1;
LAB_0052b6cc:
  auVar15._8_8_ = uVar6;
  auVar15._0_8_ = unaff_x20;
  return auVar15;
}



/* Entry: 0052b6f0; end: 0052b707;  */

void FUN_0052b6f0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0052b708; end: 0052b74b;  */

long * FUN_0052b708(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_00529a08(lVar1 + 0x18);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 0052b74c; end: 0052b9fb;  */

undefined1  [16] FUN_0052b74c(float param_1,float param_2,long *param_3,undefined8 *param_4)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  bool bVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar7;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long *plVar8;
  long *extraout_x9;
  long *plVar9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  long extraout_x9_02;
  long *extraout_x9_03;
  long *extraout_x10;
  long *plVar10;
  long *extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar11;
  undefined8 *unaff_x20;
  undefined8 *puVar12;
  long *unaff_x21;
  long *plVar13;
  long *unaff_x23;
  long *plVar14;
  undefined1 auVar15 [16];
  
  plVar13 = (long *)*param_4;
  plVar14 = (long *)param_3[1];
  plVar9 = param_3;
  if (plVar14 != (long *)0x0) {
    func_0x0052bc30();
    if ((bool)in_ZR) {
      unaff_x21 = (long *)(extraout_x8 & (ulong)plVar13);
    }
    else {
      unaff_x21 = plVar13;
      if (plVar14 <= plVar13) {
        uVar7 = 0;
        if (plVar14 != (long *)0x0) {
          uVar7 = (ulong)plVar13 / (ulong)plVar14;
        }
        unaff_x21 = (long *)((long)plVar13 - uVar7 * (long)plVar14);
      }
    }
    puVar12 = *(undefined8 **)(*param_3 + (long)unaff_x21 * 8);
    unaff_x20 = (undefined8 *)0x0;
    uVar7 = extraout_x8;
    if (puVar12 != (undefined8 *)0x0) {
      do {
        while( true ) {
          unaff_x20 = (undefined8 *)*puVar12;
          if (unaff_x20 == (undefined8 *)0x0) goto LAB_0052b7f4;
          plVar8 = (long *)unaff_x20[1];
          puVar12 = unaff_x20;
          if (plVar8 != plVar13) break;
          if ((long *)unaff_x20[2] == plVar13) {
            uVar6 = 0;
            goto LAB_0052b9d8;
          }
        }
        if (((ulong)plVar14 & uVar7) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar7);
        }
        else if (plVar14 <= plVar8) {
          func_0x0052bbfc();
          uVar7 = extraout_x8_00;
          plVar8 = extraout_x9;
        }
      } while (plVar8 == unaff_x21);
    }
  }
LAB_0052b7f4:
  func_0x0052bb40();
  func_0x0052ba64();
  if ((plVar14 != (long *)0x0) && (param_1 <= param_2 * (float)plVar14)) goto LAB_0052b980;
  func_0x0052bb50();
  bVar3 = plVar14 == (long *)((long)&MACH_HEADER.magic + 3);
  func_0x0052baf8();
  if (bVar3) {
    unaff_x21 = (long *)((long)&MACH_HEADER.magic + 2);
  }
  else if (((ulong)unaff_x21 & extraout_x8_01) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar14 = (long *)param_3[1];
    plVar9 = unaff_x21;
  }
  bVar3 = plVar14 <= unaff_x21;
  uVar4 = unaff_x21 == plVar14;
  if (!bVar3 || (bool)uVar4) {
    if (!bVar3) {
      func_0x0052bb24();
      if ((bVar3) && (((ulong)plVar14 & (ulong)((long)plVar14 + -1)) == 0)) {
        func_0x0052bab8();
      }
      else {
        __ZNSt3__112__next_primeEm();
      }
      if (unaff_x21 <= plVar9) {
        unaff_x21 = plVar9;
      }
      uVar4 = unaff_x21 == plVar14;
      if (unaff_x21 < plVar14) {
        if (unaff_x21 != (long *)0x0) goto LAB_0052b84c;
        FUN_0052b9fc(param_3,0);
        param_3[1] = 0;
        plVar14 = (long *)0x0;
      }
      else {
        plVar14 = (long *)param_3[1];
      }
    }
  }
  else {
LAB_0052b84c:
    if ((ulong)unaff_x21 >> 0x3d != 0) {
      FUN_0040cee8();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x52b9ec);
      (*pcVar2)();
    }
    lVar5 = (long)unaff_x21 << 3;
    __Znwm(lVar5);
    FUN_0052b9fc(param_3,lVar5);
    param_3[1] = (long)unaff_x21;
    lVar5 = *param_3;
    for (plVar9 = (long *)0x0; uVar4 = unaff_x21 == plVar9, !(bool)uVar4;
        plVar9 = (long *)((long)plVar9 + 1)) {
      *(undefined8 *)(lVar5 + (long)plVar9 * 8) = 0;
    }
    plVar14 = unaff_x21;
    if (*unaff_x23 != 0) {
      func_0x0052bc1c();
      func_0x0052bc08();
      lVar5 = extraout_x8_02;
      uVar7 = extraout_x9_00;
      plVar9 = extraout_x10;
      plVar8 = extraout_x11;
      while (plVar10 = plVar9, plVar9 = (long *)*plVar10, plVar9 != (long *)0x0) {
        plVar11 = (long *)plVar9[1];
        if (((ulong)unaff_x21 & uVar7) == 0) {
          plVar11 = (long *)((ulong)plVar11 & uVar7);
        }
        else if (unaff_x21 <= plVar11) {
          uVar1 = 0;
          if (unaff_x21 != (long *)0x0) {
            uVar1 = (ulong)plVar11 / (ulong)unaff_x21;
          }
          plVar11 = (long *)((long)plVar11 - uVar1 * (long)unaff_x21);
        }
        uVar4 = plVar11 == plVar8;
        if (!(bool)uVar4) {
          if (*(long *)(lVar5 + (long)plVar11 * 8) == 0) {
            *(long **)(lVar5 + (long)plVar11 * 8) = plVar10;
            plVar8 = plVar11;
          }
          else {
            func_0x0052bad8();
            lVar5 = extraout_x8_03;
            uVar7 = extraout_x9_01;
            plVar9 = extraout_x10_00;
            plVar8 = extraout_x11_00;
          }
        }
      }
    }
  }
  func_0x0052bc30();
  if ((bool)uVar4) {
    unaff_x21 = (long *)(extraout_x8_04 & (ulong)plVar13);
  }
  else {
    unaff_x21 = plVar13;
    if (plVar14 <= plVar13) {
      uVar7 = 0;
      if (plVar14 != (long *)0x0) {
        uVar7 = (ulong)plVar13 / (ulong)plVar14;
      }
      unaff_x21 = (long *)((long)plVar13 - uVar7 * (long)plVar14);
    }
  }
LAB_0052b980:
  puVar12 = *(undefined8 **)(*param_3 + (long)unaff_x21 * 8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0052bb8c();
    if (extraout_x9_02 != 0) {
      plVar9 = *(long **)(extraout_x9_02 + 8);
      lVar5 = extraout_x8_05;
      if (((ulong)plVar14 & (ulong)((long)plVar14 + -1)) == 0) {
        plVar9 = (long *)((ulong)plVar9 & (ulong)((long)plVar14 + -1));
      }
      else if (plVar14 <= plVar9) {
        func_0x0052bbfc();
        lVar5 = extraout_x8_06;
        plVar9 = extraout_x9_03;
      }
      *(undefined8 **)(lVar5 + (long)plVar9 * 8) = unaff_x20;
    }
  }
  else {
    *unaff_x20 = *puVar12;
    *puVar12 = unaff_x20;
  }
  func_0x0052bb74();
  FUN_0052ba14();
  uVar6 = 1;
LAB_0052b9d8:
  auVar15._8_8_ = uVar6;
  auVar15._0_8_ = unaff_x20;
  return auVar15;
}



/* Entry: 0052b9fc; end: 0052ba13;  */

void FUN_0052b9fc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0052ba14; end: 0052ba57;  */

long * FUN_0052ba14(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00529a88(lVar1 + 0x18);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 0052ba58; end: 0052bc3b;  */

/* WARNING: Removing unreachable block (ram,0x0052fa34) */
/* WARNING: Removing unreachable block (ram,0x0052fa38) */
/* WARNING: Removing unreachable block (ram,0x0052fa5c) */
/* WARNING: Removing unreachable block (ram,0x0052fa68) */
/* WARNING: Removing unreachable block (ram,0x0052fa40) */
/* WARNING: Removing unreachable block (ram,0x0052fa4c) */
/* WARNING: Removing unreachable block (ram,0x0052fa74) */
/* WARNING: Removing unreachable block (ram,0x0052fa78) */
/* WARNING: Removing unreachable block (ram,0x0052fa84) */

byte * FUN_0052ba58(byte *param_1,uint param_2)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  byte bVar10;
  ulong uVar11;
  int unaff_w21;
  
  pbVar8 = param_1;
  pbVar7 = *(byte **)param_1;
  uVar11 = *(ulong *)(param_1 + 8);
  if (-1 < (char)param_1[0x17]) {
    pbVar7 = param_1;
    uVar11 = (ulong)param_1[0x17];
  }
  for (; uVar11 != 0; uVar11 = uVar11 - 1) {
    FUN_0052fcdc();
    bVar10 = 0x5f;
    if (unaff_w21 == 0x5f || (int)pbVar8 != 0) {
      pbVar8 = (byte *)(ulong)*pbVar7;
      FUN_0052fbd4();
      if ((int)pbVar8 == 0) {
        pbVar8 = (byte *)(long)(char)*pbVar7;
        ___tolower();
        bVar10 = (byte)pbVar8;
        goto LAB_0052fab4;
      }
    }
    else {
LAB_0052fab4:
      *pbVar7 = bVar10;
    }
    pbVar7 = pbVar7 + 1;
  }
  bVar10 = param_1[0x17];
  uVar5 = (ulong)bVar10;
  pbVar7 = *(byte **)param_1;
  uVar9 = *(ulong *)(param_1 + 8);
  uVar11 = uVar9;
  pbVar8 = pbVar7;
  if (-1 < (char)bVar10) {
    uVar11 = uVar5;
    pbVar8 = param_1;
  }
  pbVar4 = pbVar8 + uVar11;
  bVar6 = 0x5f;
  for (; uVar11 != 0; uVar11 = uVar11 - 1) {
    bVar1 = *pbVar8;
    pbVar3 = pbVar8;
    if (bVar1 == 0x5f && bVar6 == bVar1) goto LAB_0052fb18;
    pbVar8 = pbVar8 + 1;
    bVar6 = bVar1;
  }
LAB_0052fb4c:
  if (-1 < (char)bVar10) {
    uVar9 = uVar5;
    pbVar7 = param_1;
  }
  pbVar8 = param_1;
  FUN_0052fbdc(param_1,pbVar4,pbVar7 + uVar9);
  bVar10 = param_1[0x17];
  if ((char)bVar10 < 0) {
    uVar11 = *(ulong *)(param_1 + 8);
    if (uVar11 <= param_2) {
      return pbVar8;
    }
    pbVar8 = *(byte **)param_1;
  }
  else {
    if ((uint)(int)(char)bVar10 <= param_2) {
      return pbVar8;
    }
    uVar11 = (ulong)(int)(char)bVar10;
    pbVar8 = param_1;
  }
  pbVar7 = pbVar8 + param_2;
  pbVar4 = param_1;
  if ((char)param_1[0x17] < '\0') {
    pbVar4 = *(byte **)param_1;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm
            (param_1,(long)pbVar7 - (long)pbVar4,pbVar8 + (uVar11 - (long)pbVar7));
  return pbVar7;
LAB_0052fb18:
  while (pbVar8 = pbVar8 + 1, pbVar8 != pbVar4) {
    bVar10 = *pbVar8;
    bVar2 = bVar6 != 0x5f;
    bVar6 = bVar10;
    if (bVar2 || bVar10 != 0x5f) {
      *pbVar3 = bVar10;
      pbVar3 = pbVar3 + 1;
    }
  }
  bVar10 = param_1[0x17];
  uVar5 = (ulong)bVar10;
  pbVar7 = *(byte **)param_1;
  uVar9 = *(ulong *)(param_1 + 8);
  pbVar4 = pbVar3;
  goto LAB_0052fb4c;
}



/* Entry: 0052bc3c; end: 0052bcff;  */

undefined8 *
FUN_0052bc3c(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5,long *param_6,undefined8 param_7)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = 0;
  param_1[2] = 0;
  param_1[3] = param_7;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = param_4;
  *(undefined4 *)((long)param_1 + 0x2c) = param_5;
  *(undefined4 *)(param_1 + 6) = param_2;
  uVar3 = (uint)((ulong)((param_6[1] - *param_6) / 0x18) >> 1);
  uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
  if (5 < (int)uVar3) {
    uVar3 = 6;
  }
  for (; (ulong)uVar3 << 1 != lVar4; lVar4 = lVar4 + 2) {
    plVar1 = param_6;
    FUN_0052b0e8(param_6,lVar4);
    plVar2 = param_6;
    FUN_0052b0e8(param_6,lVar4 + 1);
    FUN_0052bd00(param_1,plVar1,plVar2);
  }
  return param_1;
}



/* Entry: 0052bd00; end: 0052bd7f;  */

long FUN_0052bd00(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_0052be7c();
    lVar2 = uVar1 + 0x30;
  }
  else {
    lVar2 = param_1;
    FUN_0052beb4();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x30;
}



/* Entry: 0052bd80; end: 0052bdb7;  */

void FUN_0052bd80(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  ulong extraout_x8_03;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong extraout_x9;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar15;
  long lVar16;
  bool bVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (*param_1 == param_1[1]) {
    return;
  }
  uVar10 = LZCOUNT((param_1[1] - *param_1) / 0x30) << 1 ^ 0x7e;
  bVar17 = true;
  func_0x0052ce60();
  do {
    puVar15 = unaff_x19 + -6;
    puVar8 = unaff_x20;
LAB_0052bff0:
    unaff_x20 = puVar8;
    uVar11 = (long)unaff_x19 - (long)unaff_x20;
    uVar21 = (long)uVar11 / 0x30;
    cVar3 = SBORROW8(uVar21,5);
    cVar4 = (long)(uVar21 - 5) < 0;
    switch(uVar21) {
    case 0:
    case 1:
      goto LAB_0052c7cc;
    case 2:
      func_0x004278bc(puVar15,unaff_x20);
      func_0x0052ccf0();
      if (cVar4 != cVar3) {
        return;
      }
      func_0x0052ccdc();
      uVar14 = unaff_x19[-5];
      uVar12 = *puVar15;
      unaff_x20[2] = unaff_x19[-4];
      unaff_x20[1] = uVar14;
      *unaff_x20 = uVar12;
      unaff_x19[-4] = uStack_90;
      unaff_x19[-5] = uStack_98;
      *puVar15 = uStack_a0;
      func_0x0052ceb0();
      uVar12 = unaff_x19[-1];
      uVar14 = unaff_x19[-3];
      unaff_x20[4] = unaff_x19[-2];
      unaff_x20[3] = uVar14;
      unaff_x20[5] = uVar12;
      unaff_x19[-1] = extraout_x8_02;
      unaff_x19[-2] = uStack_98;
      unaff_x19[-3] = uStack_a0;
      return;
    case 3:
      func_0x0052ce80(unaff_x20,unaff_x20 + 6);
      return;
    case 4:
      FUN_0052c928(unaff_x20,unaff_x20 + 6,unaff_x20 + 0xc,puVar15);
      return;
    case 5:
      FUN_0052c9a0(unaff_x20,unaff_x20 + 6,unaff_x20 + 0xc,unaff_x20 + 0x12,puVar15);
      goto LAB_0052c7cc;
    }
    if ((long)uVar11 < 0x480) {
      if (bVar17 == false) {
        if (unaff_x20 == unaff_x19) {
          return;
        }
        while( true ) {
          puVar8 = unaff_x20;
          unaff_x20 = puVar8 + 6;
          cVar3 = SBORROW8((long)unaff_x20,(long)unaff_x19);
          cVar4 = (long)unaff_x20 - (long)unaff_x19 < 0;
          uVar5 = unaff_x20 == unaff_x19;
          if ((bool)uVar5) break;
          func_0x0052cd70(unaff_x20);
          func_0x0052ccf0();
          if (cVar4 == cVar3) {
            uStack_98 = puVar8[7];
            uStack_a0 = *unaff_x20;
            uStack_90 = puVar8[8];
            puVar8[7] = 0;
            puVar8[8] = 0;
            *unaff_x20 = 0;
            uStack_80 = puVar8[10];
            uStack_88 = puVar8[9];
            uStack_78 = puVar8[0xb];
            puVar8[9] = 0;
            puVar8[10] = 0;
            puVar8[0xb] = 0;
            do {
              puVar15 = puVar8;
              func_0x0052ce6c(puVar15 + 6);
              func_0x0052cd70(&uStack_a0);
              func_0x0052cd40();
              puVar8 = puVar15 + -6;
            } while (!(bool)uVar5 && cVar4 == cVar3);
            FUN_0052cc4c(puVar15,&uStack_a0);
            func_0x0052cdb4();
          }
        }
        return;
      }
      if (unaff_x20 == unaff_x19) {
        return;
      }
      lVar16 = 0;
      puVar8 = unaff_x20;
      break;
    }
    if (uVar10 == 0) {
      if (unaff_x20 == unaff_x19) {
        return;
      }
      uVar11 = uVar21 - 2 >> 1;
      uVar10 = uVar11;
      goto LAB_0052c4c8;
    }
    puVar8 = unaff_x20 + (uVar21 >> 1) * 6;
    cVar3 = SBORROW8(uVar11,0x1801);
    cVar4 = (long)(uVar11 - 0x1801) < 0;
    uVar5 = uVar11 == 0x1801;
    if (uVar11 < 0x1801) {
      func_0x0052ce80(puVar8,unaff_x20);
    }
    else {
      func_0x0052ce80(unaff_x20,puVar8);
      FUN_0052c7ec(unaff_x20 + 6,puVar8 + -6,unaff_x19 + -0xc);
      FUN_0052c7ec(unaff_x20 + 0xc,puVar8 + 6,unaff_x19 + -0x12);
      FUN_0052c7ec(puVar8 + -6,puVar8,puVar8 + 6);
      func_0x0052ccdc();
      uVar12 = puVar8[2];
      uVar14 = *puVar8;
      unaff_x20[1] = puVar8[1];
      *unaff_x20 = uVar14;
      unaff_x20[2] = uVar12;
      puVar8[2] = uStack_90;
      puVar8[1] = uStack_98;
      *puVar8 = uStack_a0;
      uVar12 = uStack_a0;
      uVar14 = uStack_98;
      func_0x0052ceb0();
      uVar13 = puVar8[5];
      uVar22 = puVar8[3];
      unaff_x20[4] = puVar8[4];
      unaff_x20[3] = uVar22;
      unaff_x20[5] = uVar13;
      puVar8[5] = extraout_x8;
      puVar8[4] = uVar14;
      puVar8[3] = uVar12;
    }
    uVar10 = uVar10 - 1;
    if (!bVar17) {
      func_0x004278bc(unaff_x20 + -6,unaff_x20);
      func_0x0052cd40();
      if ((bool)uVar5 || cVar4 != cVar3) {
        func_0x0052ccdc();
        func_0x0052ce50();
        func_0x0052cda4(unaff_x20[5]);
        unaff_x20[4] = 0;
        unaff_x20[5] = 0;
        unaff_x20[3] = 0;
        puVar7 = &uStack_a0;
        func_0x0052cd70();
        func_0x0052cd40();
        puVar8 = unaff_x20;
        if ((bool)uVar5 || cVar4 != cVar3) {
          do {
            puVar8 = puVar8 + 6;
            if (unaff_x19 <= puVar8) break;
            func_0x0052cdbc();
          } while ((char)puVar7 < '\x01');
        }
        else {
          do {
            puVar8 = puVar8 + 6;
            func_0x0052cdbc();
            func_0x0052cd40();
          } while ((bool)uVar5 || cVar4 != cVar3);
        }
        cVar3 = SBORROW8((long)puVar8,(long)unaff_x19);
        cVar4 = (long)puVar8 - (long)unaff_x19 < 0;
        uVar5 = puVar8 == unaff_x19;
        if (puVar8 < unaff_x19) {
          do {
            func_0x0052ce28();
            func_0x0052cd40();
          } while (!(bool)uVar5 && cVar4 == cVar3);
        }
        while( true ) {
          cVar3 = SBORROW8((long)puVar8,(long)unaff_x19);
          cVar4 = (long)puVar8 - (long)unaff_x19 < 0;
          uVar5 = puVar8 == unaff_x19;
          if (unaff_x19 <= puVar8) break;
          func_0x0052ced8();
          uVar14 = unaff_x19[1];
          uVar12 = *unaff_x19;
          func_0x0052cec4(unaff_x19[2]);
          unaff_x19[2] = extraout_x8_01;
          unaff_x19[1] = uVar14;
          *unaff_x19 = uVar12;
          uVar12 = puVar8[5];
          uVar22 = puVar8[4];
          uVar13 = puVar8[3];
          uVar14 = unaff_x19[5];
          uVar23 = unaff_x19[3];
          puVar8[4] = unaff_x19[4];
          puVar8[3] = uVar23;
          puVar8[5] = uVar14;
          unaff_x19[4] = uVar22;
          unaff_x19[3] = uVar13;
          unaff_x19[5] = uVar12;
          do {
            puVar8 = puVar8 + 6;
            func_0x0052cdbc();
            func_0x0052ccf0();
          } while (cVar4 != cVar3);
          do {
            func_0x0052ce28();
            func_0x0052cd40();
          } while (!(bool)uVar5 && cVar4 == cVar3);
        }
        puVar7 = puVar8 + -6;
        if (unaff_x20 != puVar7) {
          FUN_0052cc4c(unaff_x20,puVar7);
        }
        FUN_0052cc4c(puVar7,&uStack_a0);
        func_0x0052cdb4();
        bVar17 = false;
        goto LAB_0052bff0;
      }
    }
    func_0x0052ccdc();
    func_0x0052ce50();
    func_0x0052cda4(unaff_x20[5]);
    unaff_x20[4] = 0;
    unaff_x20[5] = 0;
    unaff_x20[3] = 0;
    lVar16 = 0;
    do {
      lVar20 = lVar16;
      lVar16 = lVar20 + 0x30;
      func_0x004278bc(lVar16 + (long)unaff_x20,&uStack_a0);
      func_0x0052cd40();
    } while (!(bool)uVar5 && cVar4 == cVar3);
    puVar7 = (undefined8 *)((long)unaff_x20 + lVar16);
    cVar3 = SBORROW8(lVar16,0x30);
    cVar4 = lVar20 < 0;
    puVar8 = puVar7;
    puVar9 = unaff_x19;
    if (lVar16 == 0x30) {
      do {
        cVar3 = SBORROW8((long)puVar7,(long)unaff_x19);
        cVar4 = (long)puVar7 - (long)unaff_x19 < 0;
        uVar5 = puVar7 == unaff_x19;
        if (unaff_x19 <= puVar7) break;
        func_0x0052ce40();
        func_0x0052cd40();
      } while ((bool)uVar5 || cVar4 != cVar3);
    }
    else {
      do {
        func_0x0052ce40();
        func_0x0052ccf0();
      } while (cVar4 != cVar3);
    }
    while( true ) {
      cVar3 = SBORROW8((long)puVar8,(long)puVar9);
      cVar4 = (long)puVar8 - (long)puVar9 < 0;
      uVar5 = puVar8 == puVar9;
      if (puVar9 <= puVar8) break;
      func_0x0052ced8();
      uVar14 = puVar9[1];
      uVar12 = *puVar9;
      func_0x0052cec4(puVar9[2]);
      puVar9[2] = extraout_x8_00;
      puVar9[1] = uVar14;
      *puVar9 = uVar12;
      uVar12 = puVar8[5];
      uVar22 = puVar8[4];
      uVar13 = puVar8[3];
      uVar14 = puVar9[5];
      uVar23 = puVar9[3];
      puVar8[4] = puVar9[4];
      puVar8[3] = uVar23;
      puVar8[5] = uVar14;
      puVar9[4] = uVar22;
      puVar9[3] = uVar13;
      puVar9[5] = uVar12;
      do {
        puVar8 = puVar8 + 6;
        func_0x004278bc(puVar8,&uStack_a0);
        func_0x0052cd40();
      } while (!(bool)uVar5 && cVar4 == cVar3);
      do {
        puVar9 = puVar9 + -6;
        func_0x004278bc(puVar9,&uStack_a0);
        func_0x0052cd40();
      } while ((bool)uVar5 || cVar4 != cVar3);
    }
    puVar9 = puVar8 + -6;
    if (unaff_x20 != puVar9) {
      FUN_0052cc4c(unaff_x20,puVar9);
    }
    FUN_0052cc4c(puVar9,&uStack_a0);
    func_0x0052cdb4();
    if (puVar7 < unaff_x19) goto LAB_0052c20c;
    puVar7 = unaff_x20;
    FUN_0052ca74(unaff_x20,puVar9);
    puVar6 = puVar8;
    FUN_0052ca74(puVar8,unaff_x19);
    if ((int)puVar6 == 0) goto code_r0x0052c208;
    unaff_x19 = puVar9;
    if (((ulong)puVar7 & 1) != 0) {
      return;
    }
  } while( true );
LAB_0052c410:
  puVar15 = puVar8 + 6;
  cVar3 = SBORROW8((long)puVar15,(long)unaff_x19);
  cVar4 = (long)puVar15 - (long)unaff_x19 < 0;
  uVar5 = puVar15 == unaff_x19;
  if ((bool)uVar5) {
    return;
  }
  func_0x0052ce38(puVar15);
  func_0x0052ccf0();
  if (cVar4 == cVar3) {
    uStack_98 = puVar8[7];
    uStack_a0 = *puVar15;
    uStack_90 = puVar8[8];
    puVar8[7] = 0;
    puVar8[8] = 0;
    *puVar15 = 0;
    uStack_80 = puVar8[10];
    uStack_88 = puVar8[9];
    uStack_78 = puVar8[0xb];
    puVar8[9] = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    lVar20 = lVar16;
    do {
      lVar18 = lVar20;
      FUN_0052cc4c((long)unaff_x20 + lVar18 + 0x30);
      puVar8 = unaff_x20;
      if (lVar18 == 0) goto LAB_0052c498;
      func_0x004278bc(&uStack_a0,lVar18 + -0x30 + (long)unaff_x20);
      func_0x0052cd40();
      lVar20 = lVar18 + -0x30;
    } while (!(bool)uVar5 && cVar4 == cVar3);
    puVar8 = (undefined8 *)((long)unaff_x20 + lVar18);
LAB_0052c498:
    FUN_0052cc4c(puVar8,&uStack_a0);
    func_0x0052cdb4();
  }
  lVar16 = lVar16 + 0x30;
  puVar8 = puVar15;
  goto LAB_0052c410;
LAB_0052c4c8:
  do {
    if ((long)uVar10 <= (long)uVar11) {
      uVar2 = (uVar10 & 0x3fffffffffffffff) << 1 | 1;
      puVar15 = unaff_x20 + uVar2 * 6;
      uVar1 = uVar10 * 2 + 2;
      cVar3 = SBORROW8(uVar1,uVar21);
      cVar4 = (long)(uVar1 - uVar21) < 0;
      uVar5 = uVar1 == uVar21;
      puVar8 = puVar15;
      uVar19 = uVar2;
      if ((long)uVar1 < (long)uVar21) {
        func_0x0052ce38(puVar15);
        func_0x0052cd40();
        puVar8 = puVar15 + 6;
        uVar19 = uVar1;
        if ((bool)uVar5 || cVar4 != cVar3) {
          puVar8 = puVar15;
          uVar19 = uVar2;
        }
      }
      puVar15 = unaff_x20 + uVar10 * 6;
      func_0x0052cdd4();
      func_0x0052cd40();
      if ((bool)uVar5 || cVar4 != cVar3) {
        uStack_98 = puVar15[1];
        uStack_a0 = *puVar15;
        uStack_90 = puVar15[2];
        puVar15[1] = 0;
        puVar15[2] = 0;
        *puVar15 = 0;
        func_0x0052cda4(puVar15[5],puVar15[3]);
        puVar15[4] = 0;
        puVar15[5] = 0;
        puVar15[3] = 0;
        do {
          puVar7 = puVar8;
          func_0x0052ce6c(puVar15);
          if ((long)uVar11 < (long)uVar19) break;
          uVar2 = uVar19 << 1 | 1;
          puVar15 = unaff_x20 + uVar2 * 6;
          uVar1 = uVar19 * 2 + 2;
          cVar3 = SBORROW8(uVar1,uVar21);
          cVar4 = (long)(uVar1 - uVar21) < 0;
          uVar5 = uVar1 == uVar21;
          puVar8 = puVar15;
          uVar19 = uVar2;
          if ((long)uVar1 < (long)uVar21) {
            func_0x0052cdd4();
            func_0x0052cd40();
            puVar8 = puVar15 + 6;
            uVar19 = uVar1;
            if ((bool)uVar5 || cVar4 != cVar3) {
              puVar8 = puVar15;
              uVar19 = uVar2;
            }
          }
          puVar9 = puVar8;
          func_0x004278bc(puVar8,&uStack_a0);
          puVar15 = puVar7;
        } while ((char)puVar9 < '\x01');
        FUN_0052cc4c(puVar7,&uStack_a0);
        func_0x0052cdb4();
      }
    }
    uVar10 = uVar10 - 1;
  } while (-1 < (long)uVar10);
  do {
    if ((long)uVar21 < 2) {
LAB_0052c7cc:
      return;
    }
    uVar14 = unaff_x20[1];
    uVar12 = *unaff_x20;
    uStack_100 = unaff_x20[2];
    uStack_110 = uVar12;
    uStack_108 = uVar14;
    func_0x0052ce50(0);
    uStack_e8 = unaff_x20[5];
    unaff_x20[4] = 0;
    unaff_x20[5] = 0;
    unaff_x20[3] = 0;
    uVar10 = extraout_x8_03;
    puVar8 = unaff_x20;
    uStack_f8 = uVar12;
    uStack_f0 = uVar14;
    do {
      uVar1 = uVar10 << 1 | 1;
      uVar11 = uVar10 * 2 + 2;
      cVar3 = SBORROW8(uVar11,uVar21);
      cVar4 = (long)(uVar11 - uVar21) < 0;
      uVar5 = uVar11 == uVar21;
      puVar15 = puVar8 + uVar10 * 6 + 6;
      uVar2 = uVar1;
      if ((long)uVar11 < (long)uVar21) {
        func_0x0052cdd4();
        func_0x0052cd40();
        puVar15 = puVar8 + uVar10 * 6 + 0xc;
        uVar2 = uVar11;
        if ((bool)uVar5 || cVar4 != cVar3) {
          puVar15 = puVar8 + uVar10 * 6 + 6;
          uVar2 = uVar1;
        }
      }
      uVar10 = uVar2;
      func_0x0052ce6c(puVar8);
      puVar8 = puVar15;
    } while ((long)uVar10 <= (long)(extraout_x9 >> 1));
    unaff_x19 = unaff_x19 + -6;
    if (puVar15 == unaff_x19) {
      FUN_0052cc4c(puVar15,&uStack_110);
    }
    else {
      FUN_0052cc4c(puVar15,unaff_x19);
      FUN_0052cc4c(unaff_x19,&uStack_110);
      uVar10 = (long)puVar15 + (0x30 - (long)unaff_x20);
      cVar3 = SBORROW8(uVar10,0x31);
      cVar4 = (long)puVar15 + (-1 - (long)unaff_x20) < 0;
      if (0x30 < (long)uVar10) {
        uVar10 = uVar10 / 0x30 - 2 >> 1;
        func_0x0052cd70(unaff_x20 + uVar10 * 6);
        func_0x0052ccf0();
        if (cVar4 == cVar3) {
          uStack_98 = puVar15[1];
          uStack_a0 = *puVar15;
          uStack_90 = puVar15[2];
          puVar15[1] = 0;
          puVar15[2] = 0;
          *puVar15 = 0;
          func_0x0052cda4(puVar15[5],puVar15[3]);
          puVar15[4] = 0;
          puVar15[5] = 0;
          puVar15[3] = 0;
          puVar8 = unaff_x20 + uVar10 * 6;
          do {
            puVar7 = puVar8;
            FUN_0052cc4c(puVar15,puVar7);
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1 >> 1;
            puVar8 = unaff_x20 + uVar10 * 6;
            puVar9 = puVar8;
            func_0x004278bc(puVar8,&uStack_a0);
            puVar15 = puVar7;
          } while ('\0' < (char)puVar9);
          FUN_0052cc4c(puVar7,&uStack_a0);
          func_0x0052cdb4();
        }
      }
    }
    func_0x00483da0(&uStack_110);
    uVar21 = uVar21 - 1;
  } while( true );
code_r0x0052c208:
  if (((ulong)puVar7 & 1) == 0) {
LAB_0052c20c:
    FUN_0052bfac(unaff_x20,puVar9,uVar10,bVar17);
    bVar17 = false;
  }
  goto LAB_0052bff0;
}



/* Entry: 0052bdb8; end: 0052be73;  */

long FUN_0052bdb8(undefined8 param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lStack_28;
  
  uVar2 = (long)(int)param_2[6] * -0x395b586ca42e166b;
  uVar3 = (ulong)*(uint *)((long)param_2 + 0x2c) * -0x395b586ca42e166b;
  lStack_28 = ((((ulong)*(uint *)(param_2 + 5) * -0x395b586ca42e166b ^
                (ulong)*(uint *)(param_2 + 5) * -0x395b586ca42e166b >> 0x2f) * -0x395b586ca42e166b ^
               (uVar2 ^ uVar2 >> 0x2f) * 0x35a98f4d286a90b9 + 0xe6546b64) * -0x395b586ca42e166b +
               0xe6546b64 ^ (uVar3 ^ uVar3 >> 0x2f) * -0x395b586ca42e166b) * -0x395b586ca42e166b +
              0xe6546b64;
  lVar1 = param_2[1];
  for (lVar4 = *param_2; lVar4 != lVar1; lVar4 = lVar4 + 0x30) {
    FUN_0052ac60(&lStack_28,lVar4);
    FUN_0052ac60(&lStack_28,lVar4 + 0x18);
  }
  return lStack_28;
}



/* Entry: 0052be74; end: 0052be7b;  */

long FUN_0052be74(long *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lStack_28;
  
  uVar2 = (long)(int)param_1[6] * -0x395b586ca42e166b;
  uVar3 = (ulong)*(uint *)((long)param_1 + 0x2c) * -0x395b586ca42e166b;
  lStack_28 = ((((ulong)*(uint *)(param_1 + 5) * -0x395b586ca42e166b ^
                (ulong)*(uint *)(param_1 + 5) * -0x395b586ca42e166b >> 0x2f) * -0x395b586ca42e166b ^
               (uVar2 ^ uVar2 >> 0x2f) * 0x35a98f4d286a90b9 + 0xe6546b64) * -0x395b586ca42e166b +
               0xe6546b64 ^ (uVar3 ^ uVar3 >> 0x2f) * -0x395b586ca42e166b) * -0x395b586ca42e166b +
              0xe6546b64;
  lVar1 = param_1[1];
  for (lVar4 = *param_1; lVar4 != lVar1; lVar4 = lVar4 + 0x30) {
    FUN_0052ac60(&lStack_28,lVar4);
    FUN_0052ac60(&lStack_28,lVar4 + 0x18);
  }
  return lStack_28;
}



/* Entry: 0052be7c; end: 0052beb3;  */

void FUN_0052be7c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_0052bf68(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x30;
  return;
}



/* Entry: 0052beb4; end: 0052bf67;  */

long FUN_0052beb4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_00483ee8(param_1,(param_1[1] - *param_1) / 0x30 + 1);
  FUN_00483f7c(auStack_58,plVar1,(param_1[1] - *param_1) / 0x30,param_1 + 2);
  FUN_0052bf68(lStack_48,param_2,param_3);
  lStack_48 = lStack_48 + 0x30;
  FUN_00483f38(param_1,auStack_58);
  lVar2 = param_1[1];
  func_0x00483fc8(auStack_58);
  return lVar2;
}



/* Entry: 0052bf68; end: 0052bfab;  */

long FUN_0052bf68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(lVar1 + 0x18,param_3);
  return param_1;
}



/* Entry: 0052bfac; end: 0052c7eb;  */

void FUN_0052bfac(undefined8 param_1,undefined8 param_2,long param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  ulong extraout_x8_03;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong extraout_x9;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  func_0x0052ce60();
  do {
    puVar14 = unaff_x19 + -6;
    puVar8 = unaff_x20;
LAB_0052bff0:
    unaff_x20 = puVar8;
    uVar10 = (long)unaff_x19 - (long)unaff_x20;
    uVar20 = (long)uVar10 / 0x30;
    cVar3 = SBORROW8(uVar20,5);
    cVar4 = (long)(uVar20 - 5) < 0;
    switch(uVar20) {
    case 0:
    case 1:
      goto LAB_0052c7cc;
    case 2:
      func_0x004278bc(puVar14,unaff_x20);
      func_0x0052ccf0();
      if (cVar4 != cVar3) {
        return;
      }
      func_0x0052ccdc();
      uVar13 = unaff_x19[-5];
      uVar11 = *puVar14;
      unaff_x20[2] = unaff_x19[-4];
      unaff_x20[1] = uVar13;
      *unaff_x20 = uVar11;
      unaff_x19[-4] = uStack_90;
      unaff_x19[-5] = uStack_98;
      *puVar14 = uStack_a0;
      func_0x0052ceb0();
      uVar11 = unaff_x19[-1];
      uVar13 = unaff_x19[-3];
      unaff_x20[4] = unaff_x19[-2];
      unaff_x20[3] = uVar13;
      unaff_x20[5] = uVar11;
      unaff_x19[-1] = extraout_x8_02;
      unaff_x19[-2] = uStack_98;
      unaff_x19[-3] = uStack_a0;
      return;
    case 3:
      func_0x0052ce80(unaff_x20,unaff_x20 + 6);
      return;
    case 4:
      FUN_0052c928(unaff_x20,unaff_x20 + 6,unaff_x20 + 0xc,puVar14);
      return;
    case 5:
      FUN_0052c9a0(unaff_x20,unaff_x20 + 6,unaff_x20 + 0xc,unaff_x20 + 0x12,puVar14);
      goto LAB_0052c7cc;
    }
    if ((long)uVar10 < 0x480) {
      if ((param_4 & 1) == 0) {
        if (unaff_x20 == unaff_x19) {
          return;
        }
        while( true ) {
          puVar8 = unaff_x20;
          unaff_x20 = puVar8 + 6;
          cVar3 = SBORROW8((long)unaff_x20,(long)unaff_x19);
          cVar4 = (long)unaff_x20 - (long)unaff_x19 < 0;
          uVar5 = unaff_x20 == unaff_x19;
          if ((bool)uVar5) break;
          func_0x0052cd70(unaff_x20);
          func_0x0052ccf0();
          if (cVar4 == cVar3) {
            uStack_98 = puVar8[7];
            uStack_a0 = *unaff_x20;
            uStack_90 = puVar8[8];
            puVar8[7] = 0;
            puVar8[8] = 0;
            *unaff_x20 = 0;
            uStack_80 = puVar8[10];
            uStack_88 = puVar8[9];
            uStack_78 = puVar8[0xb];
            puVar8[9] = 0;
            puVar8[10] = 0;
            puVar8[0xb] = 0;
            do {
              puVar14 = puVar8;
              func_0x0052ce6c(puVar14 + 6);
              func_0x0052cd70(&uStack_a0);
              func_0x0052cd40();
              puVar8 = puVar14 + -6;
            } while (!(bool)uVar5 && cVar4 == cVar3);
            FUN_0052cc4c(puVar14,&uStack_a0);
            func_0x0052cdb4();
          }
        }
        return;
      }
      if (unaff_x20 == unaff_x19) {
        return;
      }
      lVar15 = 0;
      puVar8 = unaff_x20;
      break;
    }
    if (param_3 == 0) {
      if (unaff_x20 == unaff_x19) {
        return;
      }
      uVar16 = uVar20 - 2 >> 1;
      uVar10 = uVar16;
      goto LAB_0052c4c8;
    }
    puVar8 = unaff_x20 + (uVar20 >> 1) * 6;
    cVar3 = SBORROW8(uVar10,0x1801);
    cVar4 = (long)(uVar10 - 0x1801) < 0;
    uVar5 = uVar10 == 0x1801;
    if (uVar10 < 0x1801) {
      func_0x0052ce80(puVar8,unaff_x20);
    }
    else {
      func_0x0052ce80(unaff_x20,puVar8);
      FUN_0052c7ec(unaff_x20 + 6,puVar8 + -6,unaff_x19 + -0xc);
      FUN_0052c7ec(unaff_x20 + 0xc,puVar8 + 6,unaff_x19 + -0x12);
      FUN_0052c7ec(puVar8 + -6,puVar8,puVar8 + 6);
      func_0x0052ccdc();
      uVar11 = puVar8[2];
      uVar13 = *puVar8;
      unaff_x20[1] = puVar8[1];
      *unaff_x20 = uVar13;
      unaff_x20[2] = uVar11;
      puVar8[2] = uStack_90;
      puVar8[1] = uStack_98;
      *puVar8 = uStack_a0;
      uVar11 = uStack_a0;
      uVar13 = uStack_98;
      func_0x0052ceb0();
      uVar12 = puVar8[5];
      uVar21 = puVar8[3];
      unaff_x20[4] = puVar8[4];
      unaff_x20[3] = uVar21;
      unaff_x20[5] = uVar12;
      puVar8[5] = extraout_x8;
      puVar8[4] = uVar13;
      puVar8[3] = uVar11;
    }
    param_3 = param_3 + -1;
    if ((param_4 & 1) == 0) {
      func_0x004278bc(unaff_x20 + -6,unaff_x20);
      func_0x0052cd40();
      if ((bool)uVar5 || cVar4 != cVar3) {
        func_0x0052ccdc();
        func_0x0052ce50();
        func_0x0052cda4(unaff_x20[5]);
        unaff_x20[4] = 0;
        unaff_x20[5] = 0;
        unaff_x20[3] = 0;
        puVar7 = &uStack_a0;
        func_0x0052cd70();
        func_0x0052cd40();
        puVar8 = unaff_x20;
        if ((bool)uVar5 || cVar4 != cVar3) {
          do {
            puVar8 = puVar8 + 6;
            if (unaff_x19 <= puVar8) break;
            func_0x0052cdbc();
          } while ((char)puVar7 < '\x01');
        }
        else {
          do {
            puVar8 = puVar8 + 6;
            func_0x0052cdbc();
            func_0x0052cd40();
          } while ((bool)uVar5 || cVar4 != cVar3);
        }
        cVar3 = SBORROW8((long)puVar8,(long)unaff_x19);
        cVar4 = (long)puVar8 - (long)unaff_x19 < 0;
        uVar5 = puVar8 == unaff_x19;
        if (puVar8 < unaff_x19) {
          do {
            func_0x0052ce28();
            func_0x0052cd40();
          } while (!(bool)uVar5 && cVar4 == cVar3);
        }
        while( true ) {
          cVar3 = SBORROW8((long)puVar8,(long)unaff_x19);
          cVar4 = (long)puVar8 - (long)unaff_x19 < 0;
          uVar5 = puVar8 == unaff_x19;
          if (unaff_x19 <= puVar8) break;
          func_0x0052ced8();
          uVar13 = unaff_x19[1];
          uVar11 = *unaff_x19;
          func_0x0052cec4(unaff_x19[2]);
          unaff_x19[2] = extraout_x8_01;
          unaff_x19[1] = uVar13;
          *unaff_x19 = uVar11;
          uVar11 = puVar8[5];
          uVar21 = puVar8[4];
          uVar12 = puVar8[3];
          uVar13 = unaff_x19[5];
          uVar22 = unaff_x19[3];
          puVar8[4] = unaff_x19[4];
          puVar8[3] = uVar22;
          puVar8[5] = uVar13;
          unaff_x19[4] = uVar21;
          unaff_x19[3] = uVar12;
          unaff_x19[5] = uVar11;
          do {
            puVar8 = puVar8 + 6;
            func_0x0052cdbc();
            func_0x0052ccf0();
          } while (cVar4 != cVar3);
          do {
            func_0x0052ce28();
            func_0x0052cd40();
          } while (!(bool)uVar5 && cVar4 == cVar3);
        }
        puVar7 = puVar8 + -6;
        if (unaff_x20 != puVar7) {
          FUN_0052cc4c(unaff_x20,puVar7);
        }
        FUN_0052cc4c(puVar7,&uStack_a0);
        func_0x0052cdb4();
        param_4 = 0;
        goto LAB_0052bff0;
      }
    }
    func_0x0052ccdc();
    func_0x0052ce50();
    func_0x0052cda4(unaff_x20[5]);
    unaff_x20[4] = 0;
    unaff_x20[5] = 0;
    unaff_x20[3] = 0;
    lVar15 = 0;
    do {
      lVar19 = lVar15;
      lVar15 = lVar19 + 0x30;
      func_0x004278bc(lVar15 + (long)unaff_x20,&uStack_a0);
      func_0x0052cd40();
    } while (!(bool)uVar5 && cVar4 == cVar3);
    puVar7 = (undefined8 *)((long)unaff_x20 + lVar15);
    cVar3 = SBORROW8(lVar15,0x30);
    cVar4 = lVar19 < 0;
    puVar8 = puVar7;
    puVar9 = unaff_x19;
    if (lVar15 == 0x30) {
      do {
        cVar3 = SBORROW8((long)puVar7,(long)unaff_x19);
        cVar4 = (long)puVar7 - (long)unaff_x19 < 0;
        uVar5 = puVar7 == unaff_x19;
        if (unaff_x19 <= puVar7) break;
        func_0x0052ce40();
        func_0x0052cd40();
      } while ((bool)uVar5 || cVar4 != cVar3);
    }
    else {
      do {
        func_0x0052ce40();
        func_0x0052ccf0();
      } while (cVar4 != cVar3);
    }
    while( true ) {
      cVar3 = SBORROW8((long)puVar8,(long)puVar9);
      cVar4 = (long)puVar8 - (long)puVar9 < 0;
      uVar5 = puVar8 == puVar9;
      if (puVar9 <= puVar8) break;
      func_0x0052ced8();
      uVar13 = puVar9[1];
      uVar11 = *puVar9;
      func_0x0052cec4(puVar9[2]);
      puVar9[2] = extraout_x8_00;
      puVar9[1] = uVar13;
      *puVar9 = uVar11;
      uVar11 = puVar8[5];
      uVar21 = puVar8[4];
      uVar12 = puVar8[3];
      uVar13 = puVar9[5];
      uVar22 = puVar9[3];
      puVar8[4] = puVar9[4];
      puVar8[3] = uVar22;
      puVar8[5] = uVar13;
      puVar9[4] = uVar21;
      puVar9[3] = uVar12;
      puVar9[5] = uVar11;
      do {
        puVar8 = puVar8 + 6;
        func_0x004278bc(puVar8,&uStack_a0);
        func_0x0052cd40();
      } while (!(bool)uVar5 && cVar4 == cVar3);
      do {
        puVar9 = puVar9 + -6;
        func_0x004278bc(puVar9,&uStack_a0);
        func_0x0052cd40();
      } while ((bool)uVar5 || cVar4 != cVar3);
    }
    puVar9 = puVar8 + -6;
    if (unaff_x20 != puVar9) {
      FUN_0052cc4c(unaff_x20,puVar9);
    }
    FUN_0052cc4c(puVar9,&uStack_a0);
    func_0x0052cdb4();
    if (puVar7 < unaff_x19) goto LAB_0052c20c;
    puVar7 = unaff_x20;
    FUN_0052ca74(unaff_x20,puVar9);
    puVar6 = puVar8;
    FUN_0052ca74(puVar8,unaff_x19);
    if ((int)puVar6 == 0) goto code_r0x0052c208;
    unaff_x19 = puVar9;
    if (((ulong)puVar7 & 1) != 0) {
      return;
    }
  } while( true );
LAB_0052c410:
  puVar14 = puVar8 + 6;
  cVar3 = SBORROW8((long)puVar14,(long)unaff_x19);
  cVar4 = (long)puVar14 - (long)unaff_x19 < 0;
  uVar5 = puVar14 == unaff_x19;
  if ((bool)uVar5) {
    return;
  }
  func_0x0052ce38(puVar14);
  func_0x0052ccf0();
  if (cVar4 == cVar3) {
    uStack_98 = puVar8[7];
    uStack_a0 = *puVar14;
    uStack_90 = puVar8[8];
    puVar8[7] = 0;
    puVar8[8] = 0;
    *puVar14 = 0;
    uStack_80 = puVar8[10];
    uStack_88 = puVar8[9];
    uStack_78 = puVar8[0xb];
    puVar8[9] = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    lVar19 = lVar15;
    do {
      lVar17 = lVar19;
      FUN_0052cc4c((long)unaff_x20 + lVar17 + 0x30);
      puVar8 = unaff_x20;
      if (lVar17 == 0) goto LAB_0052c498;
      func_0x004278bc(&uStack_a0,lVar17 + -0x30 + (long)unaff_x20);
      func_0x0052cd40();
      lVar19 = lVar17 + -0x30;
    } while (!(bool)uVar5 && cVar4 == cVar3);
    puVar8 = (undefined8 *)((long)unaff_x20 + lVar17);
LAB_0052c498:
    FUN_0052cc4c(puVar8,&uStack_a0);
    func_0x0052cdb4();
  }
  lVar15 = lVar15 + 0x30;
  puVar8 = puVar14;
  goto LAB_0052c410;
LAB_0052c4c8:
  do {
    if ((long)uVar10 <= (long)uVar16) {
      uVar2 = (uVar10 & 0x3fffffffffffffff) << 1 | 1;
      puVar14 = unaff_x20 + uVar2 * 6;
      uVar1 = uVar10 * 2 + 2;
      cVar3 = SBORROW8(uVar1,uVar20);
      cVar4 = (long)(uVar1 - uVar20) < 0;
      uVar5 = uVar1 == uVar20;
      puVar8 = puVar14;
      uVar18 = uVar2;
      if ((long)uVar1 < (long)uVar20) {
        func_0x0052ce38(puVar14);
        func_0x0052cd40();
        puVar8 = puVar14 + 6;
        uVar18 = uVar1;
        if ((bool)uVar5 || cVar4 != cVar3) {
          puVar8 = puVar14;
          uVar18 = uVar2;
        }
      }
      puVar14 = unaff_x20 + uVar10 * 6;
      func_0x0052cdd4();
      func_0x0052cd40();
      if ((bool)uVar5 || cVar4 != cVar3) {
        uStack_98 = puVar14[1];
        uStack_a0 = *puVar14;
        uStack_90 = puVar14[2];
        puVar14[1] = 0;
        puVar14[2] = 0;
        *puVar14 = 0;
        func_0x0052cda4(puVar14[5],puVar14[3]);
        puVar14[4] = 0;
        puVar14[5] = 0;
        puVar14[3] = 0;
        do {
          puVar7 = puVar8;
          func_0x0052ce6c(puVar14);
          if ((long)uVar16 < (long)uVar18) break;
          uVar2 = uVar18 << 1 | 1;
          puVar14 = unaff_x20 + uVar2 * 6;
          uVar1 = uVar18 * 2 + 2;
          cVar3 = SBORROW8(uVar1,uVar20);
          cVar4 = (long)(uVar1 - uVar20) < 0;
          uVar5 = uVar1 == uVar20;
          puVar8 = puVar14;
          uVar18 = uVar2;
          if ((long)uVar1 < (long)uVar20) {
            func_0x0052cdd4();
            func_0x0052cd40();
            puVar8 = puVar14 + 6;
            uVar18 = uVar1;
            if ((bool)uVar5 || cVar4 != cVar3) {
              puVar8 = puVar14;
              uVar18 = uVar2;
            }
          }
          puVar9 = puVar8;
          func_0x004278bc(puVar8,&uStack_a0);
          puVar14 = puVar7;
        } while ((char)puVar9 < '\x01');
        FUN_0052cc4c(puVar7,&uStack_a0);
        func_0x0052cdb4();
      }
    }
    uVar10 = uVar10 - 1;
  } while (-1 < (long)uVar10);
  do {
    if ((long)uVar20 < 2) {
LAB_0052c7cc:
      return;
    }
    uVar13 = unaff_x20[1];
    uVar11 = *unaff_x20;
    uStack_100 = unaff_x20[2];
    uStack_110 = uVar11;
    uStack_108 = uVar13;
    func_0x0052ce50(0);
    uStack_e8 = unaff_x20[5];
    unaff_x20[4] = 0;
    unaff_x20[5] = 0;
    unaff_x20[3] = 0;
    uVar10 = extraout_x8_03;
    puVar8 = unaff_x20;
    uStack_f8 = uVar11;
    uStack_f0 = uVar13;
    do {
      uVar1 = uVar10 << 1 | 1;
      uVar16 = uVar10 * 2 + 2;
      cVar3 = SBORROW8(uVar16,uVar20);
      cVar4 = (long)(uVar16 - uVar20) < 0;
      uVar5 = uVar16 == uVar20;
      puVar14 = puVar8 + uVar10 * 6 + 6;
      uVar2 = uVar1;
      if ((long)uVar16 < (long)uVar20) {
        func_0x0052cdd4();
        func_0x0052cd40();
        puVar14 = puVar8 + uVar10 * 6 + 0xc;
        uVar2 = uVar16;
        if ((bool)uVar5 || cVar4 != cVar3) {
          puVar14 = puVar8 + uVar10 * 6 + 6;
          uVar2 = uVar1;
        }
      }
      uVar10 = uVar2;
      func_0x0052ce6c(puVar8);
      puVar8 = puVar14;
    } while ((long)uVar10 <= (long)(extraout_x9 >> 1));
    unaff_x19 = unaff_x19 + -6;
    if (puVar14 == unaff_x19) {
      FUN_0052cc4c(puVar14,&uStack_110);
    }
    else {
      FUN_0052cc4c(puVar14,unaff_x19);
      FUN_0052cc4c(unaff_x19,&uStack_110);
      uVar10 = (long)puVar14 + (0x30 - (long)unaff_x20);
      cVar3 = SBORROW8(uVar10,0x31);
      cVar4 = (long)puVar14 + (-1 - (long)unaff_x20) < 0;
      if (0x30 < (long)uVar10) {
        uVar10 = uVar10 / 0x30 - 2 >> 1;
        func_0x0052cd70(unaff_x20 + uVar10 * 6);
        func_0x0052ccf0();
        if (cVar4 == cVar3) {
          uStack_98 = puVar14[1];
          uStack_a0 = *puVar14;
          uStack_90 = puVar14[2];
          puVar14[1] = 0;
          puVar14[2] = 0;
          *puVar14 = 0;
          func_0x0052cda4(puVar14[5],puVar14[3]);
          puVar14[4] = 0;
          puVar14[5] = 0;
          puVar14[3] = 0;
          puVar8 = unaff_x20 + uVar10 * 6;
          do {
            puVar7 = puVar8;
            FUN_0052cc4c(puVar14,puVar7);
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1 >> 1;
            puVar8 = unaff_x20 + uVar10 * 6;
            puVar9 = puVar8;
            func_0x004278bc(puVar8,&uStack_a0);
            puVar14 = puVar7;
          } while ('\0' < (char)puVar9);
          FUN_0052cc4c(puVar7,&uStack_a0);
          func_0x0052cdb4();
        }
      }
    }
    func_0x00483da0(&uStack_110);
    uVar20 = uVar20 - 1;
  } while( true );
code_r0x0052c208:
  if (((ulong)puVar7 & 1) == 0) {
LAB_0052c20c:
    FUN_0052bfac(unaff_x20,puVar9,param_3,param_4 & 1);
    param_4 = 0;
  }
  goto LAB_0052bff0;
}



/* Entry: 0052c7ec; end: 0052c927;  */

void FUN_0052c7ec(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar6;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 uVar7;
  undefined8 in_register_00005008;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar4 = param_3;
  func_0x0052cd70();
  cVar3 = (char)lVar4;
  func_0x0052ce74();
  iVar1 = (int)cVar3;
  if ((char)lVar4 < '\x01') {
    cVar2 = SBORROW4(iVar1,1);
    cVar3 = iVar1 + -1 < 0;
    if (0 < iVar1) {
      func_0x0052cde0();
      func_0x0052ce9c(*(undefined8 *)(param_3 + 0x28));
      *(undefined8 *)(param_3 + 0x28) = extraout_x9;
      param_4[4] = in_register_00005008;
      param_4[3] = param_1;
      param_4[5] = extraout_x8;
      func_0x0052cd70(param_3);
      func_0x0052ccf0();
      if (cVar3 == cVar2) {
        func_0x0052ce04();
        uVar5 = param_2[5];
        uVar8 = param_2[4];
        uVar7 = param_2[3];
        uVar6 = *(undefined8 *)(param_3 + 0x28);
        uVar9 = *(undefined8 *)(param_3 + 0x18);
        param_2[4] = *(undefined8 *)(param_3 + 0x20);
        param_2[3] = uVar9;
        param_2[5] = uVar6;
        *(undefined8 *)(param_3 + 0x20) = uVar8;
        *(undefined8 *)(param_3 + 0x18) = uVar7;
        *(undefined8 *)(param_3 + 0x28) = uVar5;
      }
    }
  }
  else {
    cVar2 = SBORROW4(iVar1,1);
    cVar3 = iVar1 + -1 < 0;
    if (iVar1 < 1) {
      func_0x0052ce04();
      uVar5 = param_2[5];
      uVar8 = param_2[4];
      uVar7 = param_2[3];
      uVar6 = *(undefined8 *)(param_3 + 0x28);
      uVar9 = *(undefined8 *)(param_3 + 0x18);
      param_2[4] = *(undefined8 *)(param_3 + 0x20);
      param_2[3] = uVar9;
      param_2[5] = uVar6;
      *(undefined8 *)(param_3 + 0x20) = uVar8;
      *(undefined8 *)(param_3 + 0x18) = uVar7;
      *(undefined8 *)(param_3 + 0x28) = uVar5;
      func_0x0052ce74();
      func_0x0052ccf0();
      if (cVar3 != cVar2) {
        return;
      }
      func_0x0052cde0();
      func_0x0052ce9c(*(undefined8 *)(param_3 + 0x28));
      *(undefined8 *)(param_3 + 0x28) = extraout_x9_00;
      uVar5 = extraout_x8_00;
    }
    else {
      uVar5 = param_2[2];
      uVar8 = param_2[1];
      uVar7 = *param_2;
      uVar6 = param_4[2];
      uVar9 = *param_4;
      param_2[1] = param_4[1];
      *param_2 = uVar9;
      param_2[2] = uVar6;
      param_4[1] = uVar8;
      *param_4 = uVar7;
      param_4[2] = uVar5;
      uVar5 = param_2[5];
      uVar8 = param_2[4];
      uVar7 = param_2[3];
      uVar6 = param_4[5];
      uVar9 = param_4[3];
      param_2[4] = param_4[4];
      param_2[3] = uVar9;
      param_2[5] = uVar6;
    }
    param_4[4] = uVar8;
    param_4[3] = uVar7;
    param_4[5] = uVar5;
  }
  return;
}



/* Entry: 0052c928; end: 0052c99f;  */

void FUN_0052c928(void)

{
  char in_NG;
  char in_OV;
  long in_x3;
  undefined8 extraout_x8;
  
  func_0x0052ce60();
  FUN_0052c7ec();
  func_0x0052cd70(in_x3);
  func_0x0052ccf0();
  if (in_NG == in_OV) {
    func_0x0052cd78();
    func_0x0052ceec();
    *(undefined8 *)(in_x3 + 0x28) = extraout_x8;
    func_0x0052cdc8();
    func_0x0052ccf0();
    if (in_NG == in_OV) {
      func_0x0052ccb0();
      func_0x0052cd4c();
      func_0x0052ccf0();
      if (in_NG == in_OV) {
        func_0x0052ccfc();
      }
    }
  }
  return;
}



/* Entry: 0052c9a0; end: 0052ca73;  */

void FUN_0052c9a0(void)

{
  char in_NG;
  char in_OV;
  undefined8 *in_x3;
  undefined8 *in_x4;
  undefined8 uVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x0052ce60();
  FUN_0052c928();
  func_0x0052ce38(in_x4);
  func_0x0052ccf0();
  if (in_NG == in_OV) {
    uVar1 = in_x3[2];
    uVar4 = in_x3[1];
    uVar3 = *in_x3;
    uVar2 = in_x4[2];
    uVar5 = *in_x4;
    in_x3[1] = in_x4[1];
    *in_x3 = uVar5;
    in_x3[2] = uVar2;
    in_x4[1] = uVar4;
    *in_x4 = uVar3;
    in_x4[2] = uVar1;
    uVar1 = in_x3[5];
    uVar4 = in_x3[4];
    uVar3 = in_x3[3];
    uVar2 = in_x4[5];
    uVar5 = in_x4[3];
    in_x3[4] = in_x4[4];
    in_x3[3] = uVar5;
    in_x3[5] = uVar2;
    in_x4[4] = uVar4;
    in_x4[3] = uVar3;
    in_x4[5] = uVar1;
    func_0x0052cd70(in_x3);
    func_0x0052ccf0();
    if (in_NG == in_OV) {
      func_0x0052cd78();
      func_0x0052ceec();
      in_x3[5] = extraout_x8;
      func_0x0052cdc8();
      func_0x0052ccf0();
      if (in_NG == in_OV) {
        func_0x0052ccb0();
        func_0x0052cd4c();
        func_0x0052ccf0();
        if (in_NG == in_OV) {
          func_0x0052ccfc();
        }
      }
    }
  }
  return;
}



/* Entry: 0052ca74; end: 0052cc4b;  */

bool FUN_0052ca74(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  undefined8 extraout_x8;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined8 in_register_00005008;
  undefined8 uVar10;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  lVar8 = ((long)param_3 - param_2) / 0x30;
  cVar2 = SBORROW8(lVar8,5);
  cVar3 = lVar8 + -5 < 0;
  switch(lVar8) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x0052cdc8(1);
    func_0x0052ccf0();
    if (cVar3 == cVar2) {
      func_0x0052ccb0();
      uVar6 = param_3[-1];
      uVar10 = param_3[-3];
      *(undefined8 *)(param_2 + 0x20) = param_3[-2];
      *(undefined8 *)(param_2 + 0x18) = uVar10;
      *(undefined8 *)(param_2 + 0x28) = uVar6;
      param_3[-2] = in_register_00005008;
      param_3[-3] = param_1;
      param_3[-1] = extraout_x8;
    }
    break;
  case 3:
    FUN_0052c7ec(param_2,param_2 + 0x30,param_3 + -6);
    break;
  case 4:
    FUN_0052c928(param_2,param_2 + 0x30,param_2 + 0x60,param_3 + -6);
    break;
  case 5:
    FUN_0052c9a0(param_2,param_2 + 0x30,param_2 + 0x60,param_2 + 0x90,param_3 + -6);
    break;
  default:
    FUN_0052c7ec(param_2,param_2 + 0x30,param_2 + 0x60);
    lVar8 = 0;
    iVar9 = 0;
    puVar5 = (undefined8 *)(param_2 + 0x90);
    while( true ) {
      cVar2 = SBORROW8((long)puVar5,(long)param_3);
      cVar3 = (long)puVar5 - (long)param_3 < 0;
      if (puVar5 == param_3) break;
      func_0x0052ce38(puVar5);
      func_0x0052ccf0();
      if (cVar3 == cVar2) {
        uStack_b8 = puVar5[1];
        uStack_c0 = *puVar5;
        uStack_b0 = puVar5[2];
        *puVar5 = 0;
        puVar5[1] = 0;
        uStack_a0 = puVar5[4];
        uStack_a8 = puVar5[3];
        puVar5[2] = 0;
        puVar5[3] = 0;
        uStack_98 = puVar5[5];
        puVar5[4] = 0;
        puVar5[5] = 0;
        lVar7 = lVar8;
        do {
          lVar1 = param_2 + lVar7;
          FUN_0052cc4c(lVar1 + 0x90,lVar1 + 0x60);
          lVar4 = param_2;
          if (lVar7 == -0x60) goto LAB_0052cbdc;
          cVar3 = (char)&uStack_c0;
          func_0x004278bc(&uStack_c0,lVar1 + 0x30);
          lVar7 = lVar7 + -0x30;
        } while ('\0' < cVar3);
        lVar4 = param_2 + lVar7 + 0x90;
LAB_0052cbdc:
        FUN_0052cc4c(lVar4,&uStack_c0);
        iVar9 = iVar9 + 1;
        func_0x00483da0(&uStack_c0);
        if (iVar9 == 8) {
          return puVar5 + 6 == param_3;
        }
      }
      puVar5 = puVar5 + 6;
      lVar8 = lVar8 + 0x30;
    }
  }
  return true;
}



/* Entry: 0052cc4c; end: 0052ccaf;  */

void FUN_0052cc4c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0052ce60();
  FUN_004575b8();
  FUN_004575b8(unaff_x20 + 0x18,unaff_x19 + 0x18);
  return;
}



/* Entry: 0052ccb0; end: 0052ceff;  */

undefined8 FUN_0052ccb0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = unaff_x19[2];
  uVar4 = unaff_x19[1];
  uVar3 = *unaff_x19;
  uVar2 = unaff_x21[2];
  uVar5 = *unaff_x21;
  unaff_x19[1] = unaff_x21[1];
  *unaff_x19 = uVar5;
  unaff_x19[2] = uVar2;
  unaff_x21[1] = uVar4;
  *unaff_x21 = uVar3;
  unaff_x21[2] = uVar1;
  return unaff_x19[3];
}



/* Entry: 0052cf00; end: 0052d2cf;  */

qword * FUN_0052cf00(long *param_1,uint param_2,undefined4 param_3)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char *pcVar7;
  segment_command *psVar8;
  segment_command *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar9;
  undefined8 uVar10;
  segment_command *psVar11;
  segment_command *extraout_x9;
  segment_command *extraout_x9_00;
  undefined1 *puVar12;
  undefined1 *extraout_x9_01;
  undefined1 *extraout_x9_02;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  long *extraout_x10;
  segment_command *psVar16;
  segment_command *extraout_x11;
  segment_command *extraout_x11_00;
  long *extraout_x12;
  segment_command *psVar17;
  segment_command *psVar18;
  uint uVar19;
  segment_command *psVar20;
  segment_command *unaff_x27;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  char *pcStack_80;
  segment_command *psStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  uVar24 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_88 = 0x3f800000;
  pcVar7 = segment_command_00000020.segname + 8;
  __Znwm();
  uStack_a8 = 0;
  uStack_a0 = 0;
  *(ulong *)pcVar7 = CONCAT44(param_3,param_2);
  *(qword *)(pcVar7 + 8) = 0;
  *(qword *)(pcVar7 + 0x18) = 0;
  *(qword *)(pcVar7 + 0x20) = 0;
  *(qword *)(pcVar7 + 0x10) = 0;
  *(dword *)(pcVar7 + 0x28) = 0x3f800000;
  psVar18 = (segment_command *)(ulong)param_2;
  psVar20 = (segment_command *)param_1[1];
  pcStack_80 = pcVar7;
  if (psVar20 != (segment_command *)0x0) {
    puVar12 = (undefined1 *)((long)&psVar20[-1].flags + 3);
    uVar19 = (uint)psVar20;
    if (((ulong)psVar20 & (ulong)puVar12) == 0) {
      unaff_x27 = (segment_command *)(ulong)(uVar19 - 1 & param_2);
    }
    else {
      unaff_x27 = psVar18;
      if (psVar20 <= psVar18) {
        uVar2 = 0;
        if (uVar19 != 0) {
          uVar2 = param_2 / uVar19;
        }
        unaff_x27 = (segment_command *)(ulong)(param_2 - uVar2 * uVar19);
      }
    }
    psVar17 = *(segment_command **)(*param_1 + (long)unaff_x27 * 8);
    if (psVar17 != (segment_command *)0x0) {
      do {
        while( true ) {
          psVar17 = *(segment_command **)psVar17;
          if (psVar17 == (segment_command *)0x0) goto LAB_0052d000;
          psVar11 = *(segment_command **)psVar17->segname;
          if (psVar11 != psVar18) break;
          if (*(uint *)(psVar17->segname + 8) == param_2) goto LAB_0052d260;
        }
        if (((ulong)psVar20 & (ulong)puVar12) == 0) {
          psVar11 = (segment_command *)((ulong)psVar11 & (ulong)puVar12);
        }
        else if (psVar20 <= psVar11) {
          uVar3 = 0;
          if (psVar20 != (segment_command *)0x0) {
            uVar3 = (ulong)psVar11 / (ulong)psVar20;
          }
          psVar11 = (segment_command *)((long)psVar11 - uVar3 * (long)psVar20);
        }
      } while (psVar11 == unaff_x27);
    }
  }
LAB_0052d000:
  psVar17 = &segment_command_00000020;
  __Znwm();
  plVar1 = param_1 + 2;
  uStack_68 = 1;
  psVar17->cmd = 0;
  psVar17->cmdsize = 0;
  *(segment_command **)psVar17->segname = psVar18;
  *(uint *)(psVar17->segname + 8) = param_2;
  pcStack_80 = (char *)0x0;
  psVar17->vmaddr = (qword)pcVar7;
  psVar11 = psVar17;
  psStack_78 = psVar17;
  plStack_70 = plVar1;
  func_0x0052e7e0(param_1[3]);
  if ((psVar20 != (segment_command *)0x0) &&
     ((float)CONCAT13(uVar24,CONCAT12(uVar23,CONCAT11(uVar22,uVar21))) <=
      *(float *)(param_1 + 4) * (float)psVar20)) goto LAB_0052d1e8;
  bVar5 = (segment_command *)((long)&MACH_HEADER.magic + 2) < psVar20;
  bVar6 = psVar20 == (segment_command *)((long)&MACH_HEADER.magic + 3);
  func_0x0052e6ec((long)psVar20 << 1);
  psVar8 = extraout_x8;
  if (!bVar5 || bVar6) {
    psVar8 = extraout_x9;
  }
  puVar12 = (undefined1 *)((long)&psVar8[-1].flags + 3);
  if (puVar12 == (undefined1 *)0x0) {
    psVar8 = (segment_command *)((long)&MACH_HEADER.magic + 2);
  }
  else if (((ulong)psVar8 & (ulong)puVar12) != 0) {
    __ZNSt3__112__next_primeEm();
    psVar20 = (segment_command *)param_1[1];
    psVar11 = psVar8;
  }
  if (psVar20 < psVar8) {
LAB_0052d0a8:
    if ((ulong)psVar8 >> 0x3d != 0) {
      FUN_0040cee8();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x52d29c);
      (*pcVar4)();
    }
    lVar9 = (long)psVar8 << 3;
    __Znwm(lVar9);
    FUN_0052e3f8(param_1,lVar9);
    psVar20 = (segment_command *)0x0;
    param_1[1] = (long)psVar8;
    lVar9 = *param_1;
    while (psVar8 != psVar20) {
      func_0x0052e850();
      lVar9 = extraout_x8_00;
      psVar20 = extraout_x9_00;
    }
    plVar15 = (long *)*plVar1;
    psVar20 = psVar8;
    if (plVar15 != (long *)0x0) {
      psVar11 = (segment_command *)plVar15[1];
      puVar12 = (undefined1 *)((long)&psVar8[-1].flags + 3);
      uVar3 = 0;
      if (psVar8 != (segment_command *)0x0) {
        uVar3 = (ulong)psVar11 / (ulong)psVar8;
      }
      psVar16 = psVar11;
      if (psVar8 <= psVar11) {
        psVar16 = (segment_command *)((long)psVar11 - uVar3 * (long)psVar8);
      }
      if (((ulong)psVar8 & (ulong)puVar12) == 0) {
        psVar16 = (segment_command *)((ulong)psVar11 & (ulong)puVar12);
      }
      *(long **)(lVar9 + (long)psVar16 * 8) = plVar1;
      while (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0) {
        psVar11 = (segment_command *)plVar15[1];
        if (((ulong)psVar8 & (ulong)puVar12) == 0) {
          psVar11 = (segment_command *)((ulong)psVar11 & (ulong)puVar12);
        }
        else if (psVar8 <= psVar11) {
          uVar3 = 0;
          if (psVar8 != (segment_command *)0x0) {
            uVar3 = (ulong)psVar11 / (ulong)psVar8;
          }
          psVar11 = (segment_command *)((long)psVar11 - uVar3 * (long)psVar8);
        }
        if (psVar11 != psVar16) {
          if (*(long *)(lVar9 + (long)psVar11 * 8) == 0) {
            func_0x0052e87c();
            lVar9 = extraout_x8_02;
            puVar12 = extraout_x9_02;
            plVar15 = extraout_x12;
            psVar16 = extraout_x11_00;
          }
          else {
            func_0x0052e6cc();
            lVar9 = extraout_x8_01;
            puVar12 = extraout_x9_01;
            plVar15 = extraout_x10;
            psVar16 = extraout_x11;
          }
        }
      }
    }
  }
  else if (psVar8 < psVar20) {
    func_0x0052e7ec();
    if ((psVar20 < (segment_command *)((long)&MACH_HEADER.magic + 3)) ||
       (((ulong)psVar20 & (ulong)((long)&psVar20[-1].flags + 3)) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x0052e6ac();
    }
    if (psVar8 <= psVar11) {
      psVar8 = psVar11;
    }
    if (psVar8 < psVar20) {
      if (psVar8 != (segment_command *)0x0) goto LAB_0052d0a8;
      FUN_0052e3f8(param_1,0);
      param_1[1] = 0;
      psVar20 = (segment_command *)0x0;
    }
    else {
      psVar20 = (segment_command *)param_1[1];
    }
  }
  if (((ulong)psVar20 & (ulong)((long)&psVar20[-1].flags + 3)) == 0) {
    unaff_x27 = (segment_command *)(ulong)((int)psVar20 - 1U & param_2);
  }
  else {
    unaff_x27 = psVar18;
    if (psVar20 <= psVar18) {
      uVar3 = 0;
      if (psVar20 != (segment_command *)0x0) {
        uVar3 = (ulong)psVar18 / (ulong)psVar20;
      }
      unaff_x27 = (segment_command *)((long)psVar18 - uVar3 * (long)psVar20);
    }
  }
LAB_0052d1e8:
  lVar9 = *param_1;
  puVar13 = *(undefined8 **)(lVar9 + (long)unaff_x27 * 8);
  if (puVar13 == (undefined8 *)0x0) {
    lVar14 = *plVar1;
    psVar17->cmd = (int)lVar14;
    psVar17->cmdsize = (int)((ulong)lVar14 >> 0x20);
    *plVar1 = (long)psVar17;
    *(long **)(lVar9 + (long)unaff_x27 * 8) = plVar1;
    if (*(long *)psVar17 != 0) {
      psVar18 = *(segment_command **)(*(long *)psVar17 + 8);
      puVar12 = (undefined1 *)((long)&psVar20[-1].flags + 3);
      if (((ulong)psVar20 & (ulong)puVar12) == 0) {
        psVar18 = (segment_command *)((ulong)psVar18 & (ulong)puVar12);
      }
      else if (psVar20 <= psVar18) {
        uVar3 = 0;
        if (psVar20 != (segment_command *)0x0) {
          uVar3 = (ulong)psVar18 / (ulong)psVar20;
        }
        psVar18 = (segment_command *)((long)psVar18 - uVar3 * (long)psVar20);
      }
      *(segment_command **)(lVar9 + (long)psVar18 * 8) = psVar17;
    }
  }
  else {
    uVar10 = *puVar13;
    psVar17->cmd = (int)uVar10;
    psVar17->cmdsize = (int)((ulong)uVar10 >> 0x20);
    *puVar13 = psVar17;
  }
  psStack_78 = (segment_command *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_0052e410(&psStack_78);
LAB_0052d260:
  func_0x005295cc(&pcStack_80);
  func_0x0052962c(&uStack_a8);
  return &psVar17->vmaddr;
}



/* Entry: 0052d2d0; end: 0052d3c3;  */

long * FUN_0052d2d0(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  int *piVar5;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  piVar5 = (int *)*param_2;
  piVar1 = (int *)param_2[1];
  plVar3 = param_1;
  do {
    if (piVar5 == piVar1) {
      return param_1;
    }
    iVar2 = *piVar5;
    if (iVar2 == 2) {
      func_0x0052e814();
      plVar3 = (long *)*plVar3;
      FUN_0052e894(plVar3,piVar5[8],0xffffffff);
      plVar3 = (long *)(*plVar3 + 8);
      FUN_00464068(plVar3,piVar5 + 0x10);
    }
    else {
      if (iVar2 == 1) {
        func_0x0052e814();
        plVar3 = (long *)*plVar3;
        FUN_0052e894(plVar3,piVar5[8],piVar5[0x16]);
      }
      else {
        if (iVar2 != 0) goto LAB_0052d390;
        plVar3 = param_1;
        FUN_0052cf00(param_1,piVar5[1],piVar5[0x16]);
      }
      iVar2 = *(int *)(*plVar3 + 4);
      iVar4 = piVar5[0x16];
      if ((iVar2 != -1) && (iVar2 <= iVar4)) {
        iVar4 = iVar2;
      }
      *(int *)(*plVar3 + 4) = iVar4;
    }
LAB_0052d390:
    piVar5 = piVar5 + 0x18;
  } while( true );
}



/* Entry: 0052d3c4; end: 0052d4bb;  */

void FUN_0052d3c4(int *param_1,undefined8 param_2,long param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int extraout_w8;
  long lVar4;
  long lVar5;
  undefined8 in_register_00005008;
  
  func_0x0052e868();
  *param_1 = extraout_w8;
  *(undefined8 *)(param_1 + 4) = in_register_00005008;
  *(undefined8 *)(param_1 + 2) = param_2;
  *(undefined8 *)(param_1 + 8) = in_register_00005008;
  *(undefined8 *)(param_1 + 6) = param_2;
  param_1[10] = 0x3f800000;
  if ((*(long *)(param_3 + 0x18) != 0) && (FUN_0052e444(), param_3 != 0)) {
    lVar4 = *(long *)(param_3 + 0x18);
    iVar2 = *(int *)(lVar4 + 4);
    if (iVar2 != -1) {
      *param_1 = iVar2;
    }
    lVar4 = lVar4 + 8;
    func_0x0052e4e4(lVar4,(long)param_4 + 0x2c);
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + 0x18);
      iVar2 = *(int *)(lVar5 + 4);
      if (iVar2 == -1) {
        iVar2 = *param_1;
      }
      else {
        *param_1 = iVar2;
      }
      if ((iVar2 != 0) && (*(long *)(lVar5 + 0x20) != 0)) {
        lVar1 = param_4[1];
        for (lVar5 = *param_4; lVar5 != lVar1; lVar5 = lVar5 + 0x30) {
          lVar3 = *(long *)(lVar4 + 0x18) + 8;
          FUN_00464948(lVar3,lVar5);
          if (lVar3 != 0) {
            FUN_00464068(param_1 + 2,lVar3 + 0x10);
          }
        }
      }
    }
  }
  return;
}



/* Entry: 0052d4bc; end: 0052d4db;  */

bool FUN_0052d4bc(long param_1)

{
  if ((*(long *)(param_1 + 0x18) == 0) && (*(long *)(param_1 + 0x40) == 0)) {
    return *(long *)(param_1 + 0x68) == 0;
  }
  return false;
}



/* Entry: 0052d4dc; end: 0052deaf;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x0052d784 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

long * FUN_0052d4dc(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  dword dVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  qword *pqVar9;
  long lVar10;
  long *plVar11;
  qword *pqVar12;
  long *plVar13;
  section *psVar14;
  section *extraout_x8;
  section *extraout_x8_00;
  section *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  section *extraout_x9;
  section *extraout_x9_00;
  section *extraout_x9_01;
  section *extraout_x9_02;
  ulong extraout_x9_03;
  ulong extraout_x9_04;
  ulong extraout_x9_05;
  section *extraout_x9_06;
  ulong extraout_x9_07;
  ulong extraout_x9_08;
  ulong extraout_x9_09;
  section *extraout_x9_10;
  ulong extraout_x9_11;
  ulong uVar15;
  ulong extraout_x9_12;
  ulong extraout_x9_13;
  long extraout_x9_14;
  long extraout_x9_15;
  section *psVar16;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  long *extraout_x10_02;
  long *extraout_x10_03;
  long *extraout_x10_04;
  section *extraout_x11;
  section *extraout_x11_00;
  section *extraout_x11_01;
  section *extraout_x11_02;
  section *extraout_x11_03;
  section *extraout_x11_04;
  section *extraout_x11_05;
  section *extraout_x11_06;
  section *extraout_x11_07;
  long *extraout_x12;
  long *extraout_x12_00;
  long *plVar17;
  long *extraout_x12_01;
  section *psVar18;
  section *psVar19;
  int *piVar20;
  char *pcVar21;
  section *psVar22;
  section *unaff_x24;
  qword *pqVar23;
  section *psVar24;
  long *plVar25;
  undefined1 *puVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined4 uVar31;
  char *pcStack_a8;
  long *plStack_a0;
  char acStack_98 [32];
  section *psStack_78;
  qword *pqStack_70;
  
  uVar31 = (undefined4)((ulong)param_1 >> 0x20);
  uVar30 = (undefined1)((ulong)param_1 >> 0x18);
  uVar29 = (undefined1)((ulong)param_1 >> 0x10);
  uVar28 = (undefined1)((ulong)param_1 >> 8);
  uVar27 = (undefined1)param_1;
  param_2[1] = 0;
  *param_2 = 0;
  plVar25 = param_2 + 2;
  param_2[3] = 0;
  *plVar25 = 0;
  *(undefined4 *)(param_2 + 4) = 0x3f800000;
  plVar11 = param_2 + 5;
  param_2[6] = 0;
  *plVar11 = 0;
  pqVar12 = (qword *)(param_2 + 7);
  param_2[8] = 0;
  *pqVar12 = 0;
  plVar13 = param_2 + 10;
  param_2[0xb] = 0;
  *plVar13 = 0;
  pqVar23 = (qword *)(param_2 + 0xc);
  param_2[0xd] = 0;
  *pqVar23 = 0;
  *(undefined4 *)(param_2 + 9) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xe) = 0x3f800000;
  piVar20 = (int *)*param_3;
  piVar1 = (int *)param_3[1];
  do {
    if (piVar20 == piVar1) {
      return param_2;
    }
    iVar2 = *piVar20;
    if (iVar2 == 2) {
      func_0x0052e788();
      psVar16 = (section *)&pcStack_a8;
      func_0x0052e5d0();
      psVar24 = (section *)param_2[0xb];
      if (psVar24 != (section *)0x0) {
        puVar26 = (undefined1 *)((long)&psVar24[-1].reserved3 + 3);
        if (((ulong)psVar24 & (ulong)puVar26) == 0) {
          unaff_x24 = (section *)((ulong)puVar26 & (ulong)psVar16);
        }
        else {
          unaff_x24 = psVar16;
          if (psVar24 <= psVar16) {
            uVar15 = 0;
            if (psVar24 != (section *)0x0) {
              uVar15 = (ulong)psVar16 / (ulong)psVar24;
            }
            unaff_x24 = (section *)((long)psVar16 - uVar15 * (long)psVar24);
          }
        }
        psVar22 = *(section **)(*plVar13 + (long)unaff_x24 * 8);
        psVar14 = psVar16;
        if (psVar22 != (section *)0x0) {
          do {
            while( true ) {
              psVar22 = *(section **)psVar22->sectname;
              if (psVar22 == (section *)0x0) goto LAB_0052d814;
              psVar19 = *(section **)((long)psVar22->sectname + 8);
              if (psVar19 != psVar16) break;
              func_0x0052e830();
              if (((ulong)psVar14 & 1) != 0) goto LAB_0052dd40;
            }
            if (((ulong)psVar24 & (ulong)puVar26) == 0) {
              psVar19 = (section *)((ulong)psVar19 & (ulong)puVar26);
            }
            else if (psVar24 <= psVar19) {
              uVar15 = 0;
              if (psVar24 != (section *)0x0) {
                uVar15 = (ulong)psVar19 / (ulong)psVar24;
              }
              psVar19 = (section *)((long)psVar19 - uVar15 * (long)psVar24);
            }
          } while (psVar19 == unaff_x24);
        }
      }
LAB_0052d814:
      psVar22 = &section_00000068;
      __Znwm();
      psVar14 = psVar22;
      psStack_78 = psVar22;
      pqStack_70 = pqVar23;
      func_0x0052e700();
      uVar27 = 0;
      uVar28 = 0;
      uVar29 = 0;
      uVar30 = 0;
      psVar14->reserved2 = 0;
      psVar14->reserved3 = 0;
      psVar14->flags = 0;
      psVar14->reserved1 = 0;
      psVar14[1].sectname[8] = '\0';
      psVar14[1].sectname[9] = '\0';
      psVar14[1].sectname[10] = '\0';
      psVar14[1].sectname[0xb] = '\0';
      psVar14[1].sectname[0xc] = '\0';
      psVar14[1].sectname[0xd] = '\0';
      psVar14[1].sectname[0xe] = '\0';
      psVar14[1].sectname[0xf] = '\0';
      psVar14[1].sectname[0] = '\0';
      psVar14[1].sectname[1] = '\0';
      psVar14[1].sectname[2] = '\0';
      psVar14[1].sectname[3] = '\0';
      psVar14[1].sectname[4] = '\0';
      psVar14[1].sectname[5] = '\0';
      psVar14[1].sectname[6] = '\0';
      psVar14[1].sectname[7] = '\0';
      psVar14[1].segname[0] = '\0';
      psVar14[1].segname[1] = '\0';
      psVar14[1].segname[2] = -0x80;
      psVar14[1].segname[3] = '?';
      func_0x0052e7e0(param_2[0xd]);
      if ((psVar24 == (section *)0x0) ||
         (*(float *)(param_2 + 0xe) * (float)psVar24 <
          (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27))))) {
        bVar6 = (section *)((long)&MACH_HEADER.magic + 2) < psVar24;
        bVar8 = psVar24 == (section *)((long)&MACH_HEADER.magic + 3);
        func_0x0052e6ec((long)psVar24 << 1);
        psVar19 = extraout_x8_01;
        if (!bVar6 || bVar8) {
          psVar19 = extraout_x9_01;
        }
        puVar26 = (undefined1 *)((long)&psVar19[-1].reserved3 + 3);
        if (puVar26 == (undefined1 *)0x0) {
          psVar19 = (section *)((long)&MACH_HEADER.magic + 2);
        }
        else if (((ulong)psVar19 & (ulong)puVar26) != 0) {
          func_0x0052e828();
          psVar19 = psVar14;
        }
        psVar24 = (section *)param_2[0xb];
        if (psVar24 < psVar19) {
LAB_0052d970:
          if ((ulong)psVar19 >> 0x3d != 0) {
            FUN_0040cee8();
LAB_0052de2c:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x52de30);
            (*pcVar5)();
          }
          lVar10 = (long)psVar19 << 3;
          __Znwm(lVar10);
          FUN_0052e660(plVar13,lVar10);
          psVar24 = (section *)0x0;
          param_2[0xb] = (long)psVar19;
          while (psVar19 != psVar24) {
            func_0x0052e850();
            psVar24 = extraout_x9_06;
          }
          psVar24 = psVar19;
          if (*pqVar23 != 0) {
            func_0x0052e740();
            func_0x0052e7b8();
            *(qword **)(extraout_x8_05 + (long)extraout_x11_02 * 8) = pqVar23;
            lVar10 = extraout_x8_05;
            uVar15 = extraout_x9_07;
            plVar17 = extraout_x10_01;
            psVar14 = extraout_x11_02;
            while (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0) {
              psVar18 = (section *)plVar17[1];
              if (((ulong)psVar19 & uVar15) == 0) {
                psVar18 = (section *)((ulong)psVar18 & uVar15);
              }
              else if (psVar19 <= psVar18) {
                uVar4 = 0;
                if (psVar19 != (section *)0x0) {
                  uVar4 = (ulong)psVar18 / (ulong)psVar19;
                }
                psVar18 = (section *)((long)psVar18 - uVar4 * (long)psVar19);
              }
              if (psVar18 != psVar14) {
                if (*(long *)(lVar10 + (long)psVar18 * 8) == 0) {
                  func_0x0052e87c();
                  lVar10 = extraout_x8_07;
                  uVar15 = extraout_x9_09;
                  plVar17 = extraout_x12_00;
                  psVar14 = extraout_x11_04;
                }
                else {
                  func_0x0052e6cc();
                  lVar10 = extraout_x8_06;
                  uVar15 = extraout_x9_08;
                  plVar17 = extraout_x10_02;
                  psVar14 = extraout_x11_03;
                }
              }
            }
          }
        }
        else if (psVar19 < psVar24) {
          psVar14 = (section *)(long)((float)(ulong)param_2[0xd] / *(float *)(param_2 + 0xe));
          if ((psVar24 < (section *)((long)&MACH_HEADER.magic + 3)) ||
             (((ulong)psVar24 & (ulong)((long)&psVar24[-1].reserved3 + 3)) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else {
            func_0x0052e6ac();
          }
          if (psVar19 <= psVar14) {
            psVar19 = psVar14;
          }
          if (psVar19 < psVar24) {
            if (psVar19 != (section *)0x0) goto LAB_0052d970;
            FUN_0052e660(plVar13,0);
            param_2[0xb] = 0;
            psVar24 = (section *)0x0;
          }
          else {
            psVar24 = (section *)param_2[0xb];
          }
        }
        puVar26 = (undefined1 *)((long)&psVar24[-1].reserved3 + 3);
        if (((ulong)psVar24 & (ulong)puVar26) == 0) {
          unaff_x24 = (section *)((ulong)puVar26 & (ulong)psVar16);
        }
        else {
          unaff_x24 = psVar16;
          if (psVar24 <= psVar16) {
            uVar15 = 0;
            if (psVar24 != (section *)0x0) {
              uVar15 = (ulong)psVar16 / (ulong)psVar24;
            }
            unaff_x24 = (section *)((long)psVar16 - uVar15 * (long)psVar24);
          }
        }
      }
      lVar10 = *plVar13;
      if (*(long *)(lVar10 + (long)unaff_x24 * 8) == 0) {
        *(qword *)psVar22->sectname = *pqVar23;
        *pqVar23 = (qword)psVar22;
        *(qword **)(lVar10 + (long)unaff_x24 * 8) = pqVar23;
        if (*(qword *)psVar22->sectname != 0) {
          psVar16 = *(section **)(*(qword *)psVar22->sectname + 8);
          puVar26 = (undefined1 *)((long)&psVar24[-1].reserved3 + 3);
          if (((ulong)psVar24 & (ulong)puVar26) == 0) {
            psVar16 = (section *)((ulong)psVar16 & (ulong)puVar26);
          }
          else if (psVar24 <= psVar16) {
            uVar15 = 0;
            if (psVar24 != (section *)0x0) {
              uVar15 = (ulong)psVar16 / (ulong)psVar24;
            }
            psVar16 = (section *)((long)psVar16 - uVar15 * (long)psVar24);
          }
          *(section **)(lVar10 + (long)psVar16 * 8) = psVar22;
        }
      }
      else {
        func_0x0052e7a8();
      }
      psStack_78 = (section *)0x0;
      param_2[0xd] = param_2[0xd] + 1;
      FUN_0052e678(&psStack_78);
LAB_0052dd40:
      func_0x0052e848();
      FUN_00464068(&psVar22->flags,piVar20 + 0x10);
    }
    else {
      uVar7 = iVar2 + -1 < 0;
      if (iVar2 == 1) {
        dVar3 = piVar20[0x16];
        func_0x0052e788();
        psVar16 = (section *)&pcStack_a8;
        func_0x0052e5d0();
        psVar24 = (section *)param_2[6];
        if (psVar24 != (section *)0x0) {
          puVar26 = (undefined1 *)((long)&psVar24[-1].reserved3 + 3);
          psVar14 = psVar16;
          if (((ulong)psVar24 & (ulong)puVar26) == 0) {
            unaff_x24 = (section *)((ulong)puVar26 & (ulong)psVar16);
            uVar7 = 0;
          }
          else {
            uVar7 = (long)psVar16 - (long)psVar24 < 0;
            unaff_x24 = psVar16;
            if (psVar24 <= psVar16) {
              func_0x0052e888();
            }
          }
          psVar22 = *(section **)(*plVar11 + (long)unaff_x24 * 8);
          if (psVar22 != (section *)0x0) {
            do {
              while( true ) {
                psVar22 = *(section **)psVar22->sectname;
                if (psVar22 == (section *)0x0) goto LAB_0052d758;
                psVar19 = *(section **)((long)psVar22->sectname + 8);
                uVar7 = (long)psVar19 - (long)psVar16 < 0;
                if (psVar19 != psVar16) break;
                func_0x0052e830();
                if (((ulong)psVar14 & 1) != 0) goto LAB_0052dc90;
              }
              if (((ulong)psVar24 & (ulong)puVar26) == 0) {
                psVar19 = (section *)((ulong)psVar19 & (ulong)puVar26);
              }
              else if (psVar24 <= psVar19) {
                uVar15 = 0;
                if (psVar24 != (section *)0x0) {
                  uVar15 = (ulong)psVar19 / (ulong)psVar24;
                }
                psVar19 = (section *)((long)psVar19 - uVar15 * (long)psVar24);
              }
              uVar7 = (long)psVar19 - (long)unaff_x24 < 0;
            } while (psVar19 == unaff_x24);
          }
        }
LAB_0052d758:
        psVar22 = (section *)&segment_command_00000020.fileoff;
        __Znwm();
        psVar14 = psVar22;
        psStack_78 = psVar22;
        pqStack_70 = pqVar12;
        func_0x0052e700();
        psVar14->flags = 0;
        func_0x0052e7e0(param_2[8]);
        if ((psVar24 == (section *)0x0) ||
           (func_0x0052e798(CONCAT44(uVar31,CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27))
                                                    )),(int)param_2[9]), (bool)uVar7)) {
          func_0x0052e754();
          bVar6 = (section *)((long)&MACH_HEADER.magic + 2) < psVar24;
          bVar8 = psVar24 == (section *)((long)&MACH_HEADER.magic + 3);
          func_0x0052e6ec();
          psVar19 = extraout_x8_00;
          if (!bVar6 || bVar8) {
            psVar19 = extraout_x9_00;
          }
          puVar26 = (undefined1 *)((long)&psVar19[-1].reserved3 + 3);
          if (puVar26 == (undefined1 *)0x0) {
            psVar19 = (section *)((long)&MACH_HEADER.magic + 2);
          }
          else if (((ulong)psVar19 & (ulong)puVar26) != 0) {
            func_0x0052e828();
            psVar19 = psVar14;
          }
          psVar24 = (section *)param_2[6];
          if (psVar24 < psVar19) {
LAB_0052d8a8:
            if ((ulong)psVar19 >> 0x3d != 0) {
              FUN_0040cee8();
              goto LAB_0052de2c;
            }
            lVar10 = (long)psVar19 << 3;
            __Znwm(lVar10);
            FUN_0052e614(plVar11,lVar10);
            psVar24 = (section *)0x0;
            param_2[6] = (long)psVar19;
            while (psVar19 != psVar24) {
              func_0x0052e850();
              psVar24 = extraout_x9_02;
            }
            psVar24 = psVar19;
            if (*pqVar12 != 0) {
              func_0x0052e740();
              func_0x0052e7b8();
              *(qword **)(extraout_x8_02 + (long)extraout_x11 * 8) = pqVar12;
              lVar10 = extraout_x8_02;
              uVar15 = extraout_x9_03;
              plVar17 = extraout_x10;
              psVar14 = extraout_x11;
              while (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0) {
                psVar18 = (section *)plVar17[1];
                if (((ulong)psVar19 & uVar15) == 0) {
                  psVar18 = (section *)((ulong)psVar18 & uVar15);
                }
                else if (psVar19 <= psVar18) {
                  uVar4 = 0;
                  if (psVar19 != (section *)0x0) {
                    uVar4 = (ulong)psVar18 / (ulong)psVar19;
                  }
                  psVar18 = (section *)((long)psVar18 - uVar4 * (long)psVar19);
                }
                if (psVar18 != psVar14) {
                  if (*(long *)(lVar10 + (long)psVar18 * 8) == 0) {
                    func_0x0052e87c();
                    lVar10 = extraout_x8_04;
                    uVar15 = extraout_x9_05;
                    plVar17 = extraout_x12;
                    psVar14 = extraout_x11_01;
                  }
                  else {
                    func_0x0052e6cc();
                    lVar10 = extraout_x8_03;
                    uVar15 = extraout_x9_04;
                    plVar17 = extraout_x10_00;
                    psVar14 = extraout_x11_00;
                  }
                }
              }
            }
          }
          else if (psVar19 < psVar24) {
            psVar14 = (section *)(long)((float)(ulong)param_2[8] / *(float *)(param_2 + 9));
            if ((psVar24 < (section *)((long)&MACH_HEADER.magic + 3)) ||
               (((ulong)psVar24 & (ulong)((long)&psVar24[-1].reserved3 + 3)) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else {
              func_0x0052e6ac();
            }
            if (psVar19 <= psVar14) {
              psVar19 = psVar14;
            }
            if (psVar19 < psVar24) {
              if (psVar19 != (section *)0x0) goto LAB_0052d8a8;
              FUN_0052e614(plVar11,0);
              param_2[6] = 0;
              psVar24 = (section *)0x0;
            }
            else {
              psVar24 = (section *)param_2[6];
            }
          }
          puVar26 = (undefined1 *)((long)&psVar24[-1].reserved3 + 3);
          if (((ulong)psVar24 & (ulong)puVar26) == 0) {
            unaff_x24 = (section *)((ulong)puVar26 & (ulong)psVar16);
          }
          else {
            unaff_x24 = psVar16;
            if (psVar24 <= psVar16) {
              func_0x0052e888();
              unaff_x24 = psVar19;
            }
          }
        }
        if (*(long *)(*plVar11 + (long)unaff_x24 * 8) == 0) {
          func_0x0052e7c8();
          if (extraout_x9_14 != 0) {
            psVar16 = *(section **)(extraout_x9_14 + 8);
            puVar26 = (undefined1 *)((long)&psVar24[-1].reserved3 + 3);
            if (((ulong)psVar24 & (ulong)puVar26) == 0) {
              psVar16 = (section *)((ulong)psVar16 & (ulong)puVar26);
            }
            else if (psVar24 <= psVar16) {
              uVar15 = 0;
              if (psVar24 != (section *)0x0) {
                uVar15 = (ulong)psVar16 / (ulong)psVar24;
              }
              psVar16 = (section *)((long)psVar16 - uVar15 * (long)psVar24);
            }
            *(section **)(extraout_x8_11 + (long)psVar16 * 8) = psVar22;
          }
        }
        else {
          func_0x0052e7a8();
        }
        psStack_78 = (section *)0x0;
        param_2[8] = param_2[8] + 1;
        FUN_0052e62c(&psStack_78);
LAB_0052dc90:
        psVar22->flags = dVar3;
        func_0x0052e848();
      }
      else if (iVar2 == 0) {
        dVar3 = piVar20[0x16];
        psVar16 = (section *)(param_2 + 3);
        FUN_004597c4(psVar16,piVar20 + 2);
        psVar24 = (section *)param_2[1];
        if (psVar24 != (section *)0x0) {
          puVar26 = (undefined1 *)((long)&psVar24[-1].reserved3 + 3);
          if (((ulong)psVar24 & (ulong)puVar26) == 0) {
            unaff_x24 = (section *)((ulong)puVar26 & (ulong)psVar16);
            uVar7 = 0;
          }
          else {
            uVar7 = (long)psVar16 - (long)psVar24 < 0;
            unaff_x24 = psVar16;
            if (psVar24 <= psVar16) {
              func_0x0052e888();
            }
          }
          pcVar21 = *(char **)(*param_2 + (long)unaff_x24 * 8);
          if (pcVar21 != (char *)0x0) {
            do {
              while( true ) {
                pcVar21 = *(char **)pcVar21;
                if (pcVar21 == (char *)0x0) goto LAB_0052d690;
                psVar14 = *(section **)(pcVar21 + 8);
                uVar7 = (long)psVar14 - (long)psVar16 < 0;
                if (psVar14 != psVar16) break;
                pqVar9 = (qword *)(pcVar21 + 0x10);
                FUN_00459c38(pqVar9,piVar20 + 2);
                if (((ulong)pqVar9 & 1) != 0) goto LAB_0052dde4;
              }
              if (((ulong)psVar24 & (ulong)puVar26) == 0) {
                psVar14 = (section *)((ulong)psVar14 & (ulong)puVar26);
              }
              else if (psVar24 <= psVar14) {
                uVar15 = 0;
                if (psVar24 != (section *)0x0) {
                  uVar15 = (ulong)psVar14 / (ulong)psVar24;
                }
                psVar14 = (section *)((long)psVar14 - uVar15 * (long)psVar24);
              }
              uVar7 = (long)psVar14 - (long)unaff_x24 < 0;
            } while (psVar14 == unaff_x24);
          }
        }
LAB_0052d690:
        pcVar21 = segment_command_00000020.segname + 8;
        __Znwm();
        acStack_98[0] = '\0';
        acStack_98[1] = '\0';
        acStack_98[2] = '\0';
        acStack_98[3] = '\0';
        acStack_98[4] = '\0';
        acStack_98[5] = '\0';
        acStack_98[6] = '\0';
        acStack_98[7] = '\0';
        psVar14 = (section *)(pcVar21 + 0x10);
        pcVar21[0] = '\0';
        pcVar21[1] = '\0';
        pcVar21[2] = '\0';
        pcVar21[3] = '\0';
        pcVar21[4] = '\0';
        pcVar21[5] = '\0';
        pcVar21[6] = '\0';
        pcVar21[7] = '\0';
        *(section **)(pcVar21 + 8) = psVar16;
        pcStack_a8 = pcVar21;
        plStack_a0 = plVar25;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (psVar14,piVar20 + 2);
        *(dword *)(pcVar21 + 0x28) = 0;
        acStack_98[0] = '\x01';
        func_0x0052e7e0(param_2[3]);
        if ((psVar24 == (section *)0x0) ||
           (func_0x0052e798(CONCAT44(uVar31,CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27))
                                                    )),(int)param_2[4]), (bool)uVar7)) {
          func_0x0052e754();
          bVar6 = (section *)((long)&MACH_HEADER.magic + 2) < psVar24;
          bVar8 = psVar24 == (section *)((long)&MACH_HEADER.magic + 3);
          func_0x0052e6ec();
          psVar22 = extraout_x8;
          if (!bVar6 || bVar8) {
            psVar22 = extraout_x9;
          }
          puVar26 = (undefined1 *)((long)&psVar22[-1].reserved3 + 3);
          if (puVar26 == (undefined1 *)0x0) {
            psVar22 = (section *)((long)&MACH_HEADER.magic + 2);
          }
          else if (((ulong)psVar22 & (ulong)puVar26) != 0) {
            func_0x0052e828();
            psVar22 = psVar14;
          }
          psVar24 = (section *)param_2[1];
          if (psVar24 < psVar22) {
LAB_0052da38:
            if ((ulong)psVar22 >> 0x3d != 0) {
              FUN_0040cee8();
              goto LAB_0052de2c;
            }
            lVar10 = (long)psVar22 << 3;
            __Znwm(lVar10);
            func_0x0052e584(param_2,lVar10);
            psVar24 = (section *)0x0;
            param_2[1] = (long)psVar22;
            while (psVar22 != psVar24) {
              func_0x0052e850();
              psVar24 = extraout_x9_10;
            }
            psVar24 = psVar22;
            if (*plVar25 != 0) {
              func_0x0052e740();
              func_0x0052e7b8();
              *(long **)(extraout_x8_08 + (long)extraout_x11_05 * 8) = plVar25;
              lVar10 = extraout_x8_08;
              uVar15 = extraout_x9_11;
              plVar17 = extraout_x10_03;
              psVar14 = extraout_x11_05;
              while (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0) {
                psVar19 = (section *)plVar17[1];
                if (((ulong)psVar22 & uVar15) == 0) {
                  psVar19 = (section *)((ulong)psVar19 & uVar15);
                }
                else if (psVar22 <= psVar19) {
                  uVar4 = 0;
                  if (psVar22 != (section *)0x0) {
                    uVar4 = (ulong)psVar19 / (ulong)psVar22;
                  }
                  psVar19 = (section *)((long)psVar19 - uVar4 * (long)psVar22);
                }
                if (psVar19 != psVar14) {
                  if (*(long *)(lVar10 + (long)psVar19 * 8) == 0) {
                    func_0x0052e87c();
                    lVar10 = extraout_x8_10;
                    uVar15 = extraout_x9_13;
                    plVar17 = extraout_x12_01;
                    psVar14 = extraout_x11_07;
                  }
                  else {
                    func_0x0052e6cc();
                    lVar10 = extraout_x8_09;
                    uVar15 = extraout_x9_12;
                    plVar17 = extraout_x10_04;
                    psVar14 = extraout_x11_06;
                  }
                }
              }
            }
          }
          else if (psVar22 < psVar24) {
            func_0x0052e7ec();
            if ((psVar24 < (section *)((long)&MACH_HEADER.magic + 3)) ||
               (((ulong)psVar24 & (ulong)((long)&psVar24[-1].reserved3 + 3)) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else {
              func_0x0052e6ac();
            }
            if (psVar22 <= psVar14) {
              psVar22 = psVar14;
            }
            if (psVar22 < psVar24) {
              if (psVar22 != (section *)0x0) goto LAB_0052da38;
              func_0x0052e584(param_2,0);
              param_2[1] = 0;
              psVar24 = (section *)0x0;
            }
            else {
              psVar24 = (section *)param_2[1];
            }
          }
          puVar26 = (undefined1 *)((long)&psVar24[-1].reserved3 + 3);
          if (((ulong)psVar24 & (ulong)puVar26) == 0) {
            unaff_x24 = (section *)((ulong)puVar26 & (ulong)psVar16);
          }
          else {
            unaff_x24 = psVar16;
            if (psVar24 <= psVar16) {
              func_0x0052e888();
              unaff_x24 = psVar22;
            }
          }
        }
        if (*(long *)(*param_2 + (long)unaff_x24 * 8) == 0) {
          func_0x0052e7c8();
          if (extraout_x9_15 != 0) {
            psVar16 = *(section **)(extraout_x9_15 + 8);
            puVar26 = (undefined1 *)((long)&psVar24[-1].reserved3 + 3);
            if (((ulong)psVar24 & (ulong)puVar26) == 0) {
              psVar16 = (section *)((ulong)psVar16 & (ulong)puVar26);
            }
            else if (psVar24 <= psVar16) {
              uVar15 = 0;
              if (psVar24 != (section *)0x0) {
                uVar15 = (ulong)psVar16 / (ulong)psVar24;
              }
              psVar16 = (section *)((long)psVar16 - uVar15 * (long)psVar24);
            }
            *(char **)(extraout_x8_12 + (long)psVar16 * 8) = pcVar21;
          }
        }
        else {
          func_0x0052e7a8();
        }
        pcStack_a8 = (char *)0x0;
        param_2[3] = param_2[3] + 1;
        FUN_0052e59c(&pcStack_a8);
LAB_0052dde4:
        *(dword *)(pcVar21 + 0x28) = dVar3;
      }
    }
    piVar20 = piVar20 + 0x18;
  } while( true );
}



/* Entry: 0052deb0; end: 0052e3f7;  */

void FUN_0052deb0(int *param_1,long param_2,long *param_3,long *param_4)

{
  int *piVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  long lVar8;
  long **pplVar9;
  ulong uVar10;
  char *pcVar11;
  int extraout_w8;
  long *plVar12;
  long **pplVar13;
  int *piVar14;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  long lVar15;
  undefined8 *puVar16;
  int *piVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long **pplVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  long **pplVar25;
  long *plVar26;
  int *piVar27;
  int *unaff_x28;
  undefined8 in_register_00005008;
  qword qStack_c8;
  qword qStack_c0;
  qword qStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  qword qStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  char *pcStack_78;
  int *piStack_70;
  undefined8 uStack_68;
  
  plVar20 = param_4;
  func_0x0052e868();
  *param_1 = extraout_w8;
  plVar18 = (long *)(param_1 + 2);
  *(undefined8 *)(param_1 + 4) = in_register_00005008;
  *plVar18 = param_2;
  *(undefined8 *)(param_1 + 8) = in_register_00005008;
  *(long *)(param_1 + 6) = param_2;
  param_1[10] = 0x3f800000;
  FUN_00456d78(&plStack_b0,*plVar20 + 8);
  plVar20 = (long *)param_3[1];
  if ((plVar20 != (long *)0x0) && (plVar19 = param_3 + 3, *plVar19 != 0)) {
    FUN_004597c4(plVar19,&plStack_b0);
    uVar22 = (long)plVar20 - 1;
    if (((ulong)plVar20 & uVar22) == 0) {
      plVar26 = (long *)((ulong)plVar19 & uVar22);
    }
    else {
      plVar26 = plVar19;
      if (plVar20 <= plVar19) {
        uVar10 = 0;
        if (plVar20 != (long *)0x0) {
          uVar10 = (ulong)plVar19 / (ulong)plVar20;
        }
        plVar26 = (long *)((long)plVar19 - uVar10 * (long)plVar20);
      }
    }
    plVar23 = *(long **)(*param_3 + (long)plVar26 * 8);
    plVar24 = (long *)0x0;
    if (plVar23 == (long *)0x0) goto LAB_0052dfb0;
    do {
      while( true ) {
        plVar24 = (long *)*plVar23;
        if (plVar24 == (long *)0x0) goto LAB_0052dfb0;
        plVar12 = (long *)plVar24[1];
        plVar23 = plVar24;
        if (plVar12 != plVar19) break;
        lVar8 = (long)(plVar24 + 2);
        FUN_00459c38(lVar8,&plStack_b0);
        if ((int)lVar8 != 0) goto LAB_0052dfb0;
      }
      if (((ulong)plVar20 & uVar22) == 0) {
        plVar12 = (long *)((ulong)plVar12 & uVar22);
      }
      else if (plVar20 <= plVar12) {
        uVar10 = 0;
        if (plVar20 != (long *)0x0) {
          uVar10 = (ulong)plVar12 / (ulong)plVar20;
        }
        plVar12 = (long *)((long)plVar12 - uVar10 * (long)plVar20);
      }
    } while (plVar12 == plVar26);
  }
  plVar24 = (long *)0x0;
LAB_0052dfb0:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_b0);
  if (plVar24 != (long *)0x0) {
    *param_1 = *(int *)((long)plVar24 + 0x28);
  }
  FUN_00456d78(&pcStack_78,*param_4 + 8);
  FUN_00456d78(&qStack_c8,*param_4 + 0x28);
  uStack_a8 = piStack_70;
  plStack_b0 = (long *)pcStack_78;
  uStack_a0 = uStack_68;
  piStack_70 = (int *)0x0;
  uStack_68 = 0;
  pcStack_78 = (char *)0x0;
  uStack_90 = qStack_c0;
  qStack_98 = qStack_c8;
  uStack_88 = qStack_b8;
  qStack_c8 = 0;
  qStack_c0 = 0;
  qStack_b8 = 0;
  func_0x0052e804();
  func_0x0052e820();
  pplVar21 = (long **)param_3[6];
  if ((pplVar21 != (long **)0x0) && (param_3[8] != 0)) {
    pplVar9 = &plStack_b0;
    func_0x0052e5d0();
    uVar22 = (long)pplVar21 - 1;
    if (((ulong)pplVar21 & uVar22) == 0) {
      pplVar25 = (long **)((ulong)pplVar9 & uVar22);
    }
    else {
      pplVar25 = pplVar9;
      if (pplVar21 <= pplVar9) {
        uVar10 = 0;
        if (pplVar21 != (long **)0x0) {
          uVar10 = (ulong)pplVar9 / (ulong)pplVar21;
        }
        pplVar25 = (long **)((long)pplVar9 - uVar10 * (long)pplVar21);
      }
    }
    plVar20 = *(long **)(param_3[5] + (long)pplVar25 * 8);
    if (plVar20 != (long *)0x0) {
      do {
        while( true ) {
          plVar20 = (long *)*plVar20;
          if (plVar20 == (long *)0x0) goto LAB_0052e0bc;
          pplVar13 = (long **)plVar20[1];
          if (pplVar13 != pplVar9) break;
          lVar8 = (long)(plVar20 + 2);
          func_0x0052cc78(lVar8,&plStack_b0);
          if ((int)lVar8 != 0) {
            iVar4 = *(int *)(plVar20 + 8);
            *param_1 = iVar4;
            if (iVar4 == 0) goto LAB_0052e174;
            goto LAB_0052e0c4;
          }
        }
        if (((ulong)pplVar21 & uVar22) == 0) {
          pplVar13 = (long **)((ulong)pplVar13 & uVar22);
        }
        else if (pplVar21 <= pplVar13) {
          uVar10 = 0;
          if (pplVar21 != (long **)0x0) {
            uVar10 = (ulong)pplVar13 / (ulong)pplVar21;
          }
          pplVar13 = (long **)((long)pplVar13 - uVar10 * (long)pplVar21);
        }
      } while (pplVar13 == pplVar25);
    }
  }
LAB_0052e0bc:
  if (*param_1 != 0) {
LAB_0052e0c4:
    pplVar21 = (long **)param_3[0xb];
    if ((pplVar21 != (long **)0x0) && (param_3[0xd] != 0)) {
      pplVar9 = &plStack_b0;
      func_0x0052e5d0();
      uVar22 = (long)pplVar21 - 1;
      if (((ulong)pplVar21 & uVar22) == 0) {
        pplVar25 = (long **)((ulong)pplVar9 & uVar22);
      }
      else {
        pplVar25 = pplVar9;
        if (pplVar21 <= pplVar9) {
          uVar10 = 0;
          if (pplVar21 != (long **)0x0) {
            uVar10 = (ulong)pplVar9 / (ulong)pplVar21;
          }
          pplVar25 = (long **)((long)pplVar9 - uVar10 * (long)pplVar21);
        }
      }
      plVar20 = *(long **)(param_3[10] + (long)pplVar25 * 8);
      if (plVar20 != (long *)0x0) {
        do {
          while( true ) {
            plVar20 = (long *)*plVar20;
            if (plVar20 == (long *)0x0) goto LAB_0052e174;
            pplVar13 = (long **)plVar20[1];
            if (pplVar13 != pplVar9) break;
            lVar8 = (long)(plVar20 + 2);
            func_0x0052cc78(lVar8,&plStack_b0);
            if ((int)lVar8 != 0) {
              lVar8 = *(long *)(*param_4 + 0x38);
              lVar2 = lVar8 + *(long *)(*param_4 + 0x40) * 0x10;
              piVar1 = param_1 + 6;
              for (; uVar6 = lVar8 - lVar2 < 0, lVar8 != lVar2; lVar8 = lVar8 + 0x10) {
                FUN_00456d78(&pcStack_78,lVar8);
                lVar15 = (long)(plVar20 + 8);
                FUN_00464948(lVar15,&pcStack_78);
                func_0x0052e820();
                if (lVar15 != 0) {
                  FUN_00456d78(&qStack_c8,lVar8);
                  piVar17 = param_1 + 8;
                  FUN_004597c4(piVar17,&qStack_c8);
                  piVar27 = *(int **)(param_1 + 4);
                  if (piVar27 != (int *)0x0) {
                    uVar22 = (long)piVar27 - 1;
                    if (((ulong)piVar27 & uVar22) == 0) {
                      unaff_x28 = (int *)(uVar22 & (ulong)piVar17);
                      uVar6 = false;
                    }
                    else {
                      uVar6 = (long)piVar17 - (long)piVar27 < 0;
                      unaff_x28 = piVar17;
                      if (piVar27 <= piVar17) {
                        uVar10 = 0;
                        if (piVar27 != (int *)0x0) {
                          uVar10 = (ulong)piVar17 / (ulong)piVar27;
                        }
                        unaff_x28 = (int *)((long)piVar17 - uVar10 * (long)piVar27);
                      }
                    }
                    plVar19 = *(long **)(*plVar18 + (long)unaff_x28 * 8);
                    if (plVar19 != (long *)0x0) {
                      do {
                        while( true ) {
                          plVar19 = (long *)*plVar19;
                          if (plVar19 == (long *)0x0) goto LAB_0052e288;
                          piVar14 = (int *)plVar19[1];
                          uVar6 = (long)piVar14 - (long)piVar17 < 0;
                          if (piVar14 != piVar17) break;
                          uVar10 = (ulong)(plVar19 + 2);
                          FUN_00459c38(uVar10,&qStack_c8);
                          if ((uVar10 & 1) != 0) goto LAB_0052e39c;
                        }
                        if (((ulong)piVar27 & uVar22) == 0) {
                          piVar14 = (int *)((ulong)piVar14 & uVar22);
                        }
                        else if (piVar27 <= piVar14) {
                          uVar10 = 0;
                          if (piVar27 != (int *)0x0) {
                            uVar10 = (ulong)piVar14 / (ulong)piVar27;
                          }
                          piVar14 = (int *)((long)piVar14 - uVar10 * (long)piVar27);
                        }
                        uVar6 = (long)piVar14 - (long)unaff_x28 < 0;
                      } while (piVar14 == unaff_x28);
                    }
                  }
LAB_0052e288:
                  pcVar11 = segment_command_00000020.segname;
                  __Znwm();
                  uStack_68 = 1;
                  pcVar11[0] = '\0';
                  pcVar11[1] = '\0';
                  pcVar11[2] = '\0';
                  pcVar11[3] = '\0';
                  pcVar11[4] = '\0';
                  pcVar11[5] = '\0';
                  pcVar11[6] = '\0';
                  pcVar11[7] = '\0';
                  *(int **)(pcVar11 + 8) = piVar17;
                  *(qword *)(pcVar11 + 0x18) = qStack_c0;
                  *(qword *)(pcVar11 + 0x10) = qStack_c8;
                  *(qword *)(pcVar11 + 0x20) = qStack_b8;
                  qStack_c8 = 0;
                  qStack_c0 = 0;
                  qStack_b8 = 0;
                  pcStack_78 = pcVar11;
                  piStack_70 = piVar1;
                  func_0x0052e7e0(*(undefined8 *)(param_1 + 8));
                  if ((piVar27 == (int *)0x0) || (func_0x0052e798(), (bool)uVar6)) {
                    func_0x0052e754();
                    bVar5 = (int *)((long)&MACH_HEADER.magic + 2) < piVar27;
                    bVar7 = piVar27 == (int *)((long)&MACH_HEADER.magic + 3);
                    func_0x0052e6ec();
                    uVar3 = extraout_x8;
                    if (!bVar5 || bVar7) {
                      uVar3 = extraout_x9;
                    }
                    FUN_004644a0(plVar18,uVar3);
                    piVar27 = *(int **)(param_1 + 4);
                    if (((ulong)piVar27 & (long)piVar27 - 1U) == 0) {
                      unaff_x28 = (int *)((long)piVar27 - 1U & (ulong)piVar17);
                    }
                    else {
                      unaff_x28 = piVar17;
                      if (piVar27 <= piVar17) {
                        uVar22 = 0;
                        if (piVar27 != (int *)0x0) {
                          uVar22 = (ulong)piVar17 / (ulong)piVar27;
                        }
                        unaff_x28 = (int *)((long)piVar17 - uVar22 * (long)piVar27);
                      }
                    }
                  }
                  lVar15 = *plVar18;
                  puVar16 = *(undefined8 **)(lVar15 + (long)unaff_x28 * 8);
                  if (puVar16 == (undefined8 *)0x0) {
                    *(undefined8 *)pcStack_78 = *(undefined8 *)piVar1;
                    *(char **)piVar1 = pcStack_78;
                    *(int **)(lVar15 + (long)unaff_x28 * 8) = piVar1;
                    if (*(long *)pcStack_78 != 0) {
                      piVar17 = *(int **)(*(long *)pcStack_78 + 8);
                      if (((ulong)piVar27 & (long)piVar27 - 1U) == 0) {
                        piVar17 = (int *)((ulong)piVar17 & (long)piVar27 - 1U);
                      }
                      else if (piVar27 <= piVar17) {
                        uVar22 = 0;
                        if (piVar27 != (int *)0x0) {
                          uVar22 = (ulong)piVar17 / (ulong)piVar27;
                        }
                        piVar17 = (int *)((long)piVar17 - uVar22 * (long)piVar27);
                      }
                      *(char **)(lVar15 + (long)piVar17 * 8) = pcStack_78;
                    }
                  }
                  else {
                    *(undefined8 *)pcStack_78 = *puVar16;
                    *puVar16 = pcStack_78;
                  }
                  pcStack_78 = (char *)0x0;
                  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
                  FUN_00464698(&pcStack_78);
LAB_0052e39c:
                  func_0x0052e804();
                }
              }
              goto LAB_0052e174;
            }
          }
          if (((ulong)pplVar21 & uVar22) == 0) {
            pplVar13 = (long **)((ulong)pplVar13 & uVar22);
          }
          else if (pplVar21 <= pplVar13) {
            uVar10 = 0;
            if (pplVar21 != (long **)0x0) {
              uVar10 = (ulong)pplVar13 / (ulong)pplVar21;
            }
            pplVar13 = (long **)((long)pplVar13 - uVar10 * (long)pplVar21);
          }
        } while (pplVar13 == pplVar25);
      }
    }
  }
LAB_0052e174:
  func_0x00483da0(&plStack_b0);
  return;
}



/* Entry: 0052e3f8; end: 0052e40f;  */

void FUN_0052e3f8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0052e410; end: 0052e443;  */

void FUN_0052e410(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x0052e768();
  if (unaff_x20 != 0) {
    func_0x0052e85c();
    if ((bool)in_ZR) {
      func_0x005295cc(unaff_x20 + 0x18);
    }
    func_0x0052e778();
  }
  return;
}



/* Entry: 0052e444; end: 0052e59b;  */

long FUN_0052e444(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar6 = param_1[1];
  if ((uVar6 != 0) && (param_1[3] != 0)) {
    uVar1 = *param_2;
    uVar7 = (ulong)uVar1;
    uVar8 = uVar6 - 1;
    uVar5 = (uint)uVar6;
    if ((uVar6 & uVar8) == 0) {
      uVar9 = (ulong)(uVar5 - 1 & uVar1);
    }
    else {
      uVar9 = uVar7;
      if (uVar6 <= uVar7) {
        uVar2 = 0;
        if (uVar5 != 0) {
          uVar2 = uVar1 / uVar5;
        }
        uVar9 = (ulong)(uVar1 - uVar2 * uVar5);
      }
    }
    plVar4 = *(long **)(*param_1 + uVar9 * 8);
    if (plVar4 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        uVar10 = plVar4[1];
        if (uVar10 != uVar7) break;
        if (*(uint *)(plVar4 + 2) == uVar1) {
          return (long)plVar4;
        }
      }
      if ((uVar6 & uVar8) == 0) {
        uVar10 = uVar10 & uVar8;
      }
      else if (uVar6 <= uVar10) {
        uVar3 = 0;
        if (uVar6 != 0) {
          uVar3 = uVar10 / uVar6;
        }
        uVar10 = uVar10 - uVar3 * uVar6;
      }
    } while (uVar10 == uVar9);
  }
  return 0;
}



/* Entry: 0052e59c; end: 0052e613;  */

void FUN_0052e59c(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x0052e768();
  if (unaff_x20 != 0) {
    func_0x0052e85c();
    if ((bool)in_ZR) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x20 + 0x10);
    }
    func_0x0052e778();
  }
  return;
}



/* Entry: 0052e614; end: 0052e62b;  */

void FUN_0052e614(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0052e62c; end: 0052e65f;  */

void FUN_0052e62c(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x0052e768();
  if (unaff_x20 != 0) {
    func_0x0052e85c();
    if ((bool)in_ZR) {
      func_0x00483da0(unaff_x20 + 0x10);
    }
    func_0x0052e778();
  }
  return;
}



/* Entry: 0052e660; end: 0052e677;  */

void FUN_0052e660(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0052e678; end: 0052e6ab;  */

void FUN_0052e678(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x0052e768();
  if (unaff_x20 != 0) {
    func_0x0052e85c();
    if ((bool)in_ZR) {
      func_0x00529804(unaff_x20 + 0x10);
    }
    func_0x0052e778();
  }
  return;
}



/* Entry: 0052e6ac; end: 0052e893;  */

ulong FUN_0052e6ac(ulong param_1)

{
  if (1 < param_1) {
    param_1 = 1L << (-LZCOUNT(param_1 - 1) & 0x3fU);
  }
  return param_1;
}



/* Entry: 0052e894; end: 0052e91f;  */

long FUN_0052e894(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined1 auStack_30 [12];
  undefined4 uStack_24;
  
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0x3f800000;
  uStack_60 = param_2;
  uStack_5c = param_3;
  uStack_24 = param_2;
  FUN_0052e938(auStack_30,&uStack_60);
  FUN_0052e920(param_1 + 8,&uStack_24,auStack_30);
  FUN_0052ee48();
  FUN_00463fcc(&uStack_58);
  return param_1 + 0x18;
}



/* Entry: 0052e920; end: 0052e937;  */

void FUN_0052e920(void)

{
  FUN_0052ea08();
  return;
}



/* Entry: 0052e938; end: 0052e997;  */

void FUN_0052e938(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x30;
  __Znwm();
  func_0x0052e96c();
  *param_1 = uVar1;
  return;
}



/* Entry: 0052e998; end: 0052ea07;  */

void FUN_0052e998(long *param_1,long *param_2)

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



/* Entry: 0052ea08; end: 0052ea27;  */

void FUN_0052ea08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0052ea28(param_1,param_2,param_2,param_3);
  return;
}



/* Entry: 0052ea28; end: 0052ede7;  */

undefined1  [16] FUN_0052ea28(long *param_1,uint *param_2,undefined4 *param_3,qword *param_4)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  qword qVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  segment_command *psVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  ulong unaff_x25;
  undefined1 auVar22 [16];
  segment_command *psStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  uVar2 = *param_2;
  uVar19 = (ulong)uVar2;
  uVar21 = param_1[1];
  if (uVar21 != 0) {
    uVar7 = uVar21 - 1;
    uVar20 = (uint)uVar21;
    if ((uVar21 & uVar7) == 0) {
      unaff_x25 = (ulong)(uVar20 - 1 & uVar2);
    }
    else {
      unaff_x25 = uVar19;
      if (uVar21 <= uVar19) {
        uVar4 = 0;
        if (uVar20 != 0) {
          uVar4 = uVar2 / uVar20;
        }
        unaff_x25 = (ulong)(uVar2 - uVar4 * uVar20);
      }
    }
    psVar18 = *(segment_command **)(*param_1 + unaff_x25 * 8);
    if (psVar18 != (segment_command *)0x0) {
      do {
        while( true ) {
          psVar18 = *(segment_command **)psVar18;
          if (psVar18 == (segment_command *)0x0) goto LAB_0052eae0;
          uVar10 = *(ulong *)psVar18->segname;
          if (uVar10 != uVar19) break;
          if (*(uint *)(psVar18->segname + 8) == uVar2) {
            uVar6 = 0;
            goto LAB_0052edac;
          }
        }
        if ((uVar21 & uVar7) == 0) {
          uVar10 = uVar10 & uVar7;
        }
        else if (uVar21 <= uVar10) {
          uVar11 = 0;
          if (uVar21 != 0) {
            uVar11 = uVar10 / uVar21;
          }
          uVar10 = uVar10 - uVar11 * uVar21;
        }
      } while (uVar10 == unaff_x25);
    }
  }
LAB_0052eae0:
  uVar3 = *param_3;
  plVar1 = param_1 + 2;
  psVar18 = &segment_command_00000020;
  __Znwm();
  uStack_58 = 1;
  psVar18->cmd = 0;
  psVar18->cmdsize = 0;
  *(ulong *)psVar18->segname = uVar19;
  *(undefined4 *)(psVar18->segname + 8) = uVar3;
  qVar8 = *param_4;
  *param_4 = 0;
  psVar18->vmaddr = qVar8;
  plStack_60 = plVar1;
  if ((uVar21 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar21))
  goto LAB_0052ed30;
  uVar7 = 1;
  if (2 < uVar21) {
    uVar7 = (ulong)((uVar21 & uVar21 - 1) != 0);
  }
  uVar7 = uVar7 | uVar21 << 1;
  uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar7 <= uVar10) {
    uVar7 = uVar10;
  }
  psStack_68 = psVar18;
  if (uVar7 - 1 == 0) {
    uVar7 = 2;
  }
  else if ((uVar7 & uVar7 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar21 = param_1[1];
  }
  if (uVar21 < uVar7) {
LAB_0052eba0:
    if (uVar7 >> 0x3d != 0) {
      FUN_0040cee8();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x52edd4);
      (*pcVar5)();
    }
    lVar9 = uVar7 << 3;
    __Znwm(lVar9);
    FUN_0052ede8(param_1,lVar9);
    param_1[1] = uVar7;
    lVar9 = *param_1;
    for (uVar21 = 0; uVar7 != uVar21; uVar21 = uVar21 + 1) {
      *(undefined8 *)(lVar9 + uVar21 * 8) = 0;
    }
    plVar14 = (long *)*plVar1;
    uVar21 = uVar7;
    if (plVar14 != (long *)0x0) {
      uVar16 = plVar14[1];
      uVar11 = uVar7 - 1;
      uVar10 = 0;
      if (uVar7 != 0) {
        uVar10 = uVar16 / uVar7;
      }
      uVar17 = uVar16;
      if (uVar7 <= uVar16) {
        uVar17 = uVar16 - uVar10 * uVar7;
      }
      if ((uVar7 & uVar11) == 0) {
        uVar17 = uVar16 & uVar11;
      }
      *(long **)(lVar9 + uVar17 * 8) = plVar1;
      while (plVar15 = plVar14, plVar14 = (long *)*plVar15, plVar14 != (long *)0x0) {
        uVar10 = plVar14[1];
        if ((uVar7 & uVar11) == 0) {
          uVar10 = uVar10 & uVar11;
        }
        else if (uVar7 <= uVar10) {
          uVar16 = 0;
          if (uVar7 != 0) {
            uVar16 = uVar10 / uVar7;
          }
          uVar10 = uVar10 - uVar16 * uVar7;
        }
        if (uVar10 != uVar17) {
          if (*(long *)(lVar9 + uVar10 * 8) == 0) {
            *(long **)(lVar9 + uVar10 * 8) = plVar15;
            uVar17 = uVar10;
          }
          else {
            *plVar15 = *plVar14;
            *plVar14 = **(undefined8 **)(lVar9 + uVar10 * 8);
            **(long **)(lVar9 + uVar10 * 8) = (long)plVar14;
            plVar14 = plVar15;
          }
        }
      }
    }
  }
  else if (uVar7 < uVar21) {
    uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar21 < 3) || ((uVar21 & uVar21 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar10) {
      uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
    }
    if (uVar7 <= uVar10) {
      uVar7 = uVar10;
    }
    if (uVar7 < uVar21) {
      if (uVar7 != 0) goto LAB_0052eba0;
      FUN_0052ede8(param_1,0);
      param_1[1] = 0;
      uVar21 = 0;
    }
    else {
      uVar21 = param_1[1];
    }
  }
  if ((uVar21 & uVar21 - 1) == 0) {
    unaff_x25 = (ulong)((int)uVar21 - 1U & uVar2);
  }
  else {
    unaff_x25 = uVar19;
    if (uVar21 <= uVar19) {
      uVar7 = 0;
      if (uVar21 != 0) {
        uVar7 = uVar19 / uVar21;
      }
      unaff_x25 = uVar19 - uVar7 * uVar21;
    }
  }
LAB_0052ed30:
  lVar9 = *param_1;
  puVar12 = *(undefined8 **)(lVar9 + unaff_x25 * 8);
  if (puVar12 == (undefined8 *)0x0) {
    lVar13 = *plVar1;
    psVar18->cmd = (int)lVar13;
    psVar18->cmdsize = (int)((ulong)lVar13 >> 0x20);
    *plVar1 = (long)psVar18;
    *(long **)(lVar9 + unaff_x25 * 8) = plVar1;
    if (*(long *)psVar18 != 0) {
      uVar19 = *(ulong *)(*(long *)psVar18 + 8);
      if ((uVar21 & uVar21 - 1) == 0) {
        uVar19 = uVar19 & uVar21 - 1;
      }
      else if (uVar21 <= uVar19) {
        uVar7 = 0;
        if (uVar21 != 0) {
          uVar7 = uVar19 / uVar21;
        }
        uVar19 = uVar19 - uVar7 * uVar21;
      }
      *(segment_command **)(lVar9 + uVar19 * 8) = psVar18;
    }
  }
  else {
    uVar6 = *puVar12;
    psVar18->cmd = (int)uVar6;
    psVar18->cmdsize = (int)((ulong)uVar6 >> 0x20);
    *puVar12 = psVar18;
  }
  psStack_68 = (segment_command *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_0052ee00(&psStack_68);
  uVar6 = 1;
LAB_0052edac:
  auVar22._8_8_ = uVar6;
  auVar22._0_8_ = psVar18;
  return auVar22;
}



/* Entry: 0052ede8; end: 0052edff;  */

void FUN_0052ede8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0052ee00; end: 0052ee47;  */

long * FUN_0052ee00(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00529680(lVar1 + 0x18);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 0052ee48; end: 0052ee53;  */

undefined8 FUN_0052ee48(undefined8 param_1)

{
  long unaff_x29;
  
  func_0x00529ccc(unaff_x29 + -0x20);
  FUN_005296a0();
  return param_1;
}



/* Entry: 0052ee54; end: 0052eee3;  */

undefined4 *
FUN_0052ee54(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
            undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,param_4);
  param_1[8] = param_5;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 10,param_6);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 0x10,param_7);
  param_1[0x16] = param_8;
  return param_1;
}



/* Entry: 0052eee4; end: 0052ef9b;  */

void FUN_0052eee4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  FUN_00425cb4(auStack_58,"");
  FUN_00425cb4(auStack_70,"");
  FUN_0052ee54(param_1,0,param_2,param_3,0,auStack_58,auStack_70,param_4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  return;
}



/* Entry: 0052ef9c; end: 0052f033;  */

void FUN_0052ef9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_58 [24];
  
  FUN_00425cb4(auStack_58,"");
  FUN_0052ee54(param_1,1,param_2,param_3,param_4,param_5,auStack_58,param_6);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  return;
}



/* Entry: 0052f034; end: 0052f07f;  */

undefined4 *
FUN_0052f034(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
            undefined8 param_5,undefined8 param_6)

{
  *param_1 = 2;
  param_1[1] = param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,param_3);
  param_1[8] = param_4;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 10,param_5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 0x10,param_6);
  param_1[0x16] = 0;
  return param_1;
}



/* Entry: 0052f080; end: 0052f0ff;  */

void FUN_0052f080(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_2 + 8);
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
  }
  func_0x00532e08(param_2 + 0x20,param_1 + 0x18,uVar1);
  uVar1 = *(ulong *)(param_2 + 8);
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
  }
  func_0x00532e08(param_2 + 0x18,param_1,uVar1);
  FUN_0052f100();
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x3c);
  return;
}



/* Entry: 0052f100; end: 0052f10f;  */

void FUN_0052f100(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x0052f3c8();
    *(ulong *)(param_1 + 0x28) = uVar1;
  }
  return;
}



/* Entry: 0052f110; end: 0052f1df;  */

void FUN_0052f110(undefined8 *param_1,undefined8 param_2,long *param_3,long *param_4,long param_5)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x9;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [48];
  
  if ((*(ulong *)(param_5 + 8) & 1) != 0) {
    func_0x0052f564(param_1,*param_1,param_1[1]);
  }
  FUN_0052f418(param_5 + 0x48);
  if ((*(ulong *)(param_5 + 8) & 1) != 0) {
    func_0x0052f564();
  }
  FUN_0052f418(param_5 + 0x50);
  lVar2 = param_3[1];
  for (lVar1 = *param_3; lVar1 != lVar2; lVar1 = lVar1 + 0x30) {
    FUN_0052bf68(auStack_60,lVar1,lVar1 + 0x18);
    FUN_0052f1e0(auStack_80,param_5 + 0x10,auStack_60);
    func_0x00483da0(auStack_60);
  }
  func_0x0052f534();
  lVar1 = *param_4;
  lVar2 = param_4[1];
  while (lVar1 != lVar2) {
    func_0x0052f548();
    lVar1 = extraout_x8;
    lVar2 = extraout_x9;
  }
  return;
}



/* Entry: 0052f1e0; end: 0052f1e7;  */

void FUN_0052f1e0(undefined8 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined1 uVar4;
  
  piVar1 = param_3;
  piVar2 = param_3;
  FUN_004902d4();
  func_0x0052f518();
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)(ulong)(*param_2 + 1);
    piVar1 = param_2;
    FUN_0048ff24();
    if ((int)piVar1 != 0) {
      FUN_004902d4(param_3);
      func_0x0052f518();
      piVar2 = piVar3;
    }
    piVar1 = param_2;
    func_0x0048ffb4(param_2,0x38);
    func_0x0052f4f4(piVar1 + 2,*(undefined8 *)(param_2 + 6),param_3);
    func_0x0052f4f4(piVar1 + 8,*(undefined8 *)(param_2 + 6),param_3 + 6);
    FUN_00490028(param_2,piVar2,piVar1);
    *param_2 = *param_2 + 1;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  *param_1 = piVar1;
  param_1[1] = param_2;
  *(int *)(param_1 + 2) = (int)piVar2;
  *(undefined1 *)(param_1 + 3) = uVar4;
  return;
}



/* Entry: 0052f1e8; end: 0052f32b;  */

void FUN_0052f1e8(undefined8 *param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5,
                 long param_6)

{
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_b8 [32];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  if ((*(ulong *)(param_6 + 8) & 1) != 0) {
    func_0x0052f564(param_1,*param_1,param_1[1]);
  }
  FUN_0052f418(param_6 + 0x48);
  if ((*(ulong *)(param_6 + 8) & 1) != 0) {
    func_0x0052f564();
  }
  FUN_0052f418(param_6 + 0x50);
  lVar1 = 0;
  lVar2 = 0;
  for (lVar3 = 0; lVar3 != param_3[1]; lVar3 = lVar3 + 1) {
    FUN_00456d78(&uStack_98,*param_3 + lVar2);
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    uStack_70 = uStack_88;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_68,*param_4 + lVar1);
    FUN_0052f1e0(auStack_b8,param_6 + 0x10,&uStack_80);
    func_0x00483da0(&uStack_80);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_98);
    lVar2 = lVar2 + 0x10;
    lVar1 = lVar1 + 0x18;
  }
  func_0x0052f534();
  lVar3 = *param_5;
  lVar2 = param_5[1];
  while (lVar3 != lVar2) {
    func_0x0052f548();
    lVar3 = extraout_x8;
    lVar2 = extraout_x9;
  }
  return;
}



/* Entry: 0052f32c; end: 0052f38b;  */

void FUN_0052f32c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x28))();
  FUN_004b8cec(param_1,plVar1);
  FUN_0054a1cc(param_2,*param_1,*(int *)(param_1 + 1) - (int)*param_1);
  return;
}



/* Entry: 0052f38c; end: 0052f417;  */

void FUN_0052f38c(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x0052f3c8();
    *(ulong *)(param_1 + 0x28) = uVar1;
  }
  return;
}



/* Entry: 0052f418; end: 0052f41b;  */

void FUN_0052f418(ulong *param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  if ((*param_1 & 3) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00779b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm_009989c8)
              (*param_1 & 0xfffffffffffffffc);
    return;
  }
  if (param_4 == 0) {
    FUN_00532d74(param_2,param_3);
  }
  else {
    FUN_00532d40();
    param_2 = param_4;
  }
  *param_1 = param_2;
  return;
}



/* Entry: 0052f41c; end: 0052f4f3;  */

void FUN_0052f41c(undefined8 *param_1,int *param_2,int *param_3,undefined8 param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined1 uVar4;
  
  piVar1 = param_3;
  piVar2 = param_3;
  FUN_004902d4();
  func_0x0052f518();
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)(ulong)(*param_2 + 1);
    piVar1 = param_2;
    FUN_0048ff24();
    if ((int)piVar1 != 0) {
      FUN_004902d4(param_3);
      func_0x0052f518();
      piVar2 = piVar3;
    }
    piVar1 = param_2;
    func_0x0048ffb4(param_2,0x38);
    func_0x0052f4f4(piVar1 + 2,*(undefined8 *)(param_2 + 6),param_3);
    func_0x0052f4f4(piVar1 + 8,*(undefined8 *)(param_2 + 6),param_4);
    FUN_00490028(param_2,piVar2,piVar1);
    *param_2 = *param_2 + 1;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  *param_1 = piVar1;
  param_1[1] = param_2;
  *(int *)(param_1 + 2) = (int)piVar2;
  *(undefined1 *)(param_1 + 3) = uVar4;
  return;
}



/* Entry: 0052f4f4; end: 0052f56f;  */

void FUN_0052f4f4(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar2;
  ulong extraout_x10;
  ulong extraout_x10_00;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_3[1];
  uVar3 = *param_3;
  param_1[2] = param_3[2];
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  if (param_2 == (long *)0x0) {
    return;
  }
  if (param_1 != (undefined8 *)0x0) {
    FUN_00550458();
    lVar1 = param_2[1];
    if (0xf < (ulong)(lVar1 - *param_2)) {
      param_2[1] = lVar1 + -0x10;
      if (((lVar1 + -0x10) - param_2[3] < 0x181) && ((ulong)param_2[2] < (ulong)param_2[3])) {
        func_0x00551264();
        for (uVar2 = extraout_x9_00; extraout_x10_00 < uVar2; uVar2 = uVar2 - 0x40) {
          Hint_Prefetch(uVar2,2,0,0);
        }
        param_2[3] = uVar2;
        lVar1 = extraout_x8_00;
      }
      *(undefined8 **)(lVar1 + -0x10) = param_1;
      *(undefined8 *)(lVar1 + -8) = 0x4906e4;
      return;
    }
    func_0x005504b4();
    lVar1 = param_2[1];
    param_2[1] = lVar1 + -0x10;
    if (((lVar1 + -0x10) - param_2[3] < 0x181) && ((ulong)param_2[2] < (ulong)param_2[3])) {
      func_0x00551264();
      for (uVar2 = extraout_x9; extraout_x10 < uVar2; uVar2 = uVar2 - 0x40) {
        Hint_Prefetch(uVar2,2,0,0);
      }
      param_2[3] = uVar2;
      lVar1 = extraout_x8;
    }
    *(undefined8 **)(lVar1 + -0x10) = param_1;
    *(undefined8 *)(lVar1 + -8) = 0x4906e4;
    return;
  }
  return;
}



/* Entry: 0052f570; end: 0052f8b7;  */

void FUN_0052f570(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined **extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x10;
  undefined *puVar7;
  ulong uVar8;
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [96];
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  char *pcStack_70;
  undefined1 auStack_68 [24];
  
  FUN_00652118(auStack_68);
  pcVar3 = segment_command_00000020.segname;
  __Znwm();
  *(undefined ***)pcVar3 = &PTR_FUN_00a00e50;
  pcVar3[8] = '\0';
  pcVar3[9] = '\0';
  pcVar3[10] = '\0';
  pcVar3[0xb] = '\0';
  pcVar3[0xc] = '\0';
  pcVar3[0xd] = '\0';
  pcVar3[0xe] = '\0';
  pcVar3[0xf] = '\0';
  *(qword *)(pcVar3 + 0x18) = 0;
  *(qword *)(pcVar3 + 0x20) = 0;
  *(qword *)(pcVar3 + 0x10) = 0;
  pcVar4 = pcVar3;
  pcStack_70 = pcVar3;
  FUN_00549e84();
  if (((ulong)pcVar4 & 1) == 0) {
    *param_1 = 0;
    goto LAB_0052f7e4;
  }
  uStack_78 = 0;
  ppuVar1 = &PTR_PTR_00b1e190;
  if (*(undefined ***)(pcVar3 + 0x18) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(pcVar3 + 0x18);
  }
  iVar2 = *(int *)((long)ppuVar1 + 0x1c);
  if (iVar2 == 3) {
    puVar7 = ppuVar1[2];
    FUN_0052f99c(*(undefined8 *)(puVar7 + 0x18));
    puVar6 = auStack_138;
    func_0x0052f9e0();
    func_0x0052f9e8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_138);
    if ((int)puVar6 == -1) {
      param_4 = 0xffffffff;
    }
    else {
      FUN_0052f99c(*(undefined8 *)(puVar7 + 0x20));
      func_0x0052f9e0(auStack_150);
      func_0x0052b194(param_4,puVar6,auStack_150);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_150);
    }
    func_0x0052f9d4(*(undefined8 *)(puVar7 + 0x18));
    func_0x0052f9d4(*(undefined8 *)(puVar7 + 0x28));
    FUN_0052f034(auStack_f0,puVar6,extraout_x10 & 0xfffffffffffffffc,param_4,
                 extraout_x9_00 & 0xfffffffffffffffc,
                 *(ulong *)(extraout_x8_01 + 0x10) & 0xfffffffffffffffc);
    func_0x0052f9c8();
LAB_0052f7d4:
    FUN_00528fe4(auStack_f0);
  }
  else {
    if (iVar2 == 2) {
      puVar7 = ppuVar1[2];
      ppuVar1 = &PTR_PTR_00b1e170;
      FUN_0052f99c(*(undefined8 *)(puVar7 + 0x18));
      puVar6 = auStack_108;
      func_0x0052f9e0();
      func_0x0052f9e8();
      puVar5 = auStack_108;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar5);
      if ((int)puVar6 == -1) {
        param_4 = 0xffffffff;
      }
      else {
        FUN_0052f99c(*(undefined8 *)(puVar7 + 0x20));
        func_0x0052f9e0(auStack_120);
        func_0x0052b194(param_4,puVar6,auStack_120);
        puVar5 = auStack_120;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar5);
      }
      func_0x0052f9d4(*(undefined8 *)(puVar7 + 0x18));
      uVar8 = *(ulong *)(extraout_x8_00 + 0x10);
      if (extraout_x9 != (undefined **)0x0) {
        ppuVar1 = extraout_x9;
      }
      puVar7 = ppuVar1[2];
      func_0x0052f9ac();
      FUN_0052ef9c(auStack_f0,puVar6,uVar8 & 0xfffffffffffffffc,param_4,
                   (ulong)puVar7 & 0xfffffffffffffffc,puVar5);
      func_0x0052f9c8();
      goto LAB_0052f7d4;
    }
    if (iVar2 == 1) {
      puVar7 = ppuVar1[2];
      FUN_0052f99c(*(undefined8 *)(puVar7 + 0x18));
      puVar6 = auStack_90;
      func_0x0052f9e0(puVar6);
      func_0x0052f9e8();
      puVar5 = auStack_90;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar5);
      func_0x0052f9d4(*(undefined8 *)(puVar7 + 0x18));
      uVar8 = *(ulong *)(extraout_x8 + 0x10);
      func_0x0052f9ac();
      FUN_0052eee4(auStack_f0,puVar6,uVar8 & 0xfffffffffffffffc,puVar5);
      func_0x0052f9c8();
      goto LAB_0052f7d4;
    }
    *param_1 = 0;
  }
  func_0x00529c00(&uStack_78);
LAB_0052f7e4:
  FUN_0052f968(&pcStack_70);
  FUN_0040d974(auStack_68);
  return;
}


