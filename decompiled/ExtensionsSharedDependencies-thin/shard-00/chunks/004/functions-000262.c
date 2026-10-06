/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00525c3c; end: 00525cc3;  */

void FUN_00525c3c(void)

{
  undefined1 in_ZR;
  long *plVar1;
  long extraout_x8;
  long unaff_x20;
  long lVar2;
  long *plVar3;
  undefined1 auStack_c8 [16];
  long lStack_b8;
  
  func_0x005260f4();
  FUN_00524c68();
  plVar3 = (long *)(unaff_x20 + 0x18);
  while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
    func_0x0052614c();
    func_0x00526120();
    func_0x00526144();
  }
  plVar3 = (long *)(unaff_x20 + 8);
  func_0x00526034();
  func_0x0052615c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_0052549c();
    __Unwind_Resume();
    if ((ulong)plVar3[1] < (ulong)plVar3[2]) {
      func_0x005260c4();
      lVar2 = extraout_x8 + 0x28;
      plVar3[1] = lVar2;
    }
    else {
      plVar1 = plVar3;
      FUN_0052544c(plVar3,(plVar3[1] - *plVar3) / 0x28 + 1);
      FUN_0052517c(auStack_c8,plVar1,(plVar3[1] - *plVar3) / 0x28,plVar3 + 2);
      func_0x005260c4(lStack_b8);
      lStack_b8 = lStack_b8 + 0x28;
      FUN_005250fc(plVar3,auStack_c8);
      lVar2 = plVar3[1];
      func_0x005253e4(auStack_c8);
    }
    plVar3[1] = lVar2;
    return;
  }
  return;
}



/* Entry: 00525cc4; end: 00525d9f;  */

void FUN_00525cc4(long *param_1)

{
  long *plVar1;
  long extraout_x8;
  long lVar2;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    FUN_005260c4();
    lVar2 = extraout_x8 + 0x28;
    param_1[1] = lVar2;
  }
  else {
    plVar1 = param_1;
    FUN_0052544c(param_1,(param_1[1] - *param_1) / 0x28 + 1);
    FUN_0052517c(auStack_68,plVar1,(param_1[1] - *param_1) / 0x28,param_1 + 2);
    FUN_005260c4(lStack_58);
    lStack_58 = lStack_58 + 0x28;
    FUN_005250fc(param_1,auStack_68);
    lVar2 = param_1[1];
    func_0x005253e4(auStack_68);
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 00525da0; end: 00525e27;  */

/* WARNING: Possible PIC construction at 0x00525dec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00525e3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00525df0) */
/* WARNING: Removing unreachable block (ram,0x00525e00) */
/* WARNING: Removing unreachable block (ram,0x00525e08) */
/* WARNING: Removing unreachable block (ram,0x00525e18) */
/* WARNING: Removing unreachable block (ram,0x00525df8) */
/* WARNING: Removing unreachable block (ram,0x00526134) */
/* WARNING: Removing unreachable block (ram,0x00525e40) */

void FUN_00525da0(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x20;
  long *plVar3;
  
  func_0x005260f4();
  FUN_00524c68();
  plVar3 = (long *)(unaff_x20 + 0x40);
  while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
    func_0x0052614c();
    func_0x00526120();
    func_0x00526144();
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    func_0x00526180();
    unaff_x19[2] = 0;
    lVar2 = unaff_x19[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*unaff_x19 + lVar1 * 8) = 0;
    }
    unaff_x19[3] = 0;
  }
  return;
}



/* Entry: 00525e28; end: 00525e4f;  */

/* WARNING: Possible PIC construction at 0x00525e3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00525e40) */

void FUN_00525e28(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[4] != 0) {
    func_0x00526180();
    param_1[2] = 0;
    lVar2 = param_1[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*param_1 + lVar1 * 8) = 0;
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 00525e50; end: 00525e53;  */

undefined8 * FUN_00525e50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a008c0;
  func_0x00525fdc(param_1 + 6);
  func_0x00525fdc(param_1 + 1);
  return param_1;
}



/* Entry: 00525e54; end: 00525e67;  */

void FUN_00525e54(void)

{
  func_0x00525fa0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00525e68; end: 00525e97;  */

undefined8 * FUN_00525e68(undefined8 *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_00525e98(param_1,param_2,param_2 + param_3 * 8,param_3);
  return param_1;
}



/* Entry: 00525e98; end: 00525f17;  */

void FUN_00525e98(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    FUN_00525f18(param_1,param_4);
    FUN_00525f54(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  FUN_00525f74(&uStack_40);
  return;
}



/* Entry: 00525f18; end: 00525f53;  */

void FUN_00525f18(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar1 = param_1 + 2;
    FUN_005250b0();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2);
    return;
  }
  FUN_005250a4();
  puVar2 = (undefined8 *)param_1[1];
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
  }
  param_1[1] = (long)puVar2;
  return;
}



/* Entry: 00525f54; end: 00525f73;  */

void FUN_00525f54(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
  }
  *(undefined8 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 00525f74; end: 0052607f;  */

long FUN_00525f74(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_0052534c(param_1);
  }
  return param_1;
}



/* Entry: 00526080; end: 00526097;  */

void FUN_00526080(long *param_1,long param_2)

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



/* Entry: 00526098; end: 005260c3;  */

long * FUN_00526098(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 005260c4; end: 00526193;  */

void FUN_005260c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 unaff_w20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar2;
  
  uVar1 = *unaff_x22;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = *unaff_x21;
  param_1[1] = unaff_x21[1];
  *param_1 = uVar2;
  param_1[2] = unaff_x21[2];
  *unaff_x21 = 0;
  unaff_x21[1] = 0;
  unaff_x21[2] = 0;
  param_1[3] = uVar1;
  *(undefined4 *)(param_1 + 4) = unaff_w20;
  return;
}



/* Entry: 00526194; end: 005262bb;  */

void FUN_00526194(undefined8 param_1,long *param_2)

{
  code *extraout_x8;
  
  func_0x005263c4(param_1,"TIMER");
  func_0x005263cc();
  (**(code **)(*param_2 + 0x10))(param_2);
  (**(code **)(*param_2 + 0x20))(param_2);
  func_0x00526374();
  (*extraout_x8)();
  return;
}



/* Entry: 005262bc; end: 005262ef;  */

ulong FUN_005262bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int extraout_w10;
  ulong uVar2;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 8);
  uStack_38 = param_4;
  do {
    func_0x00529de0();
  } while (extraout_w10 != 0);
  uVar2 = *(ulong *)(lVar1 + 0x68);
  FUN_00526f20();
  lStack_48 = lVar1;
  FUN_00527184(auStack_40,param_2,param_3,&uStack_38,&lStack_48);
  FUN_00527120(uVar2,auStack_40);
  func_0x00529a88(auStack_40);
  return uVar2 & 0xffffffff;
}



/* Entry: 005262f0; end: 00526357;  */

void FUN_005262f0(undefined8 param_1,long param_2,long *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uStack_40;
  ulong uStack_38;
  
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x88);
  uVar2 = (ulong)*(uint *)(param_2 + 0x10);
  (**(code **)(*param_3 + 0x10))(param_3);
  FUN_0052b070(uVar1,uVar2,param_3);
  uStack_40 = uVar1;
  uStack_38 = uVar2;
  FUN_00456d78(param_1,&uStack_40);
  return;
}



/* Entry: 00526358; end: 005263d3;  */

void FUN_00526358(void)

{
  return;
}



/* Entry: 005263d4; end: 0052643f;  */

undefined8 FUN_005263d4(void)

{
  int iVar1;
  
  if ((bRam0000000000b693e0 & 1) == 0) {
    iVar1 = 0xb693e0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_00526ab4(0xb69288);
      ___cxa_guard_release(0xb693e0);
    }
  }
  return 0xb69288;
}



/* Entry: 00526440; end: 00526a27;  */

dword * FUN_00526440(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  dword *pdVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000000b625f0 & 1) == 0) {
    iVar2 = 0xb625f0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      plRam0000000000b62608 = (long *)0x0;
      lRam0000000000b62600 = 0;
      uRam0000000000b62618 = 0;
      plRam0000000000b62610 = (long *)0x0;
      fRam0000000000b62620 = 1.0;
      ___cxa_guard_release(0xb625f0);
    }
  }
  if ((bRam0000000000b625f8 & 1) == 0) {
    iVar2 = 0xb625f8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      uRam0000000000b62628 = 0x32aaaba7;
      uRam0000000000b62638 = 0;
      uRam0000000000b62630 = 0;
      uRam0000000000b62648 = 0;
      uRam0000000000b62640 = 0;
      uRam0000000000b62658 = 0;
      uRam0000000000b62650 = 0;
      uRam0000000000b62660 = 0;
      ___cxa_guard_release(0xb625f8);
    }
  }
  __ZNSt3__15mutex4lockEv(0xb62628);
  FUN_0052f9f0(param_1,0x20,0,0x5f);
  plVar8 = plRam0000000000b62608;
  plVar12 = (long *)0xb62608;
  if ((plRam0000000000b62608 != (long *)0x0) && (uRam0000000000b62618 != 0)) {
    plVar3 = (long *)0xb62618;
    FUN_004597c4(0xb62618,param_1);
    uVar13 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar13) == 0) {
      plVar14 = (long *)((ulong)plVar3 & uVar13);
    }
    else {
      plVar14 = plVar3;
      if (plVar8 <= plVar3) {
        uVar7 = 0;
        if (plVar8 != (long *)0x0) {
          uVar7 = (ulong)plVar3 / (ulong)plVar8;
        }
        plVar14 = (long *)((long)plVar3 - uVar7 * (long)plVar8);
      }
    }
    plVar15 = *(long **)(lRam0000000000b62600 + (long)plVar14 * 8);
    if (plVar15 != (long *)0x0) {
      do {
        while( true ) {
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) goto LAB_00526554;
          plVar6 = (long *)plVar15[1];
          if (plVar6 != plVar3) break;
          uVar7 = (ulong)(plVar15 + 2);
          FUN_00459c38(uVar7,param_1);
          if ((uVar7 & 1) != 0) {
            pdVar11 = (dword *)plVar15[5];
            goto LAB_0052693c;
          }
        }
        if (((ulong)plVar8 & uVar13) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar13);
        }
        else if (plVar8 <= plVar6) {
          uVar7 = 0;
          if (plVar8 != (long *)0x0) {
            uVar7 = (ulong)plVar6 / (ulong)plVar8;
          }
          plVar6 = (long *)((long)plVar6 - uVar7 * (long)plVar8);
        }
      } while (plVar6 == plVar14);
    }
  }
LAB_00526554:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&lStack_80,param_1);
  FUN_005263d4();
  uVar4 = uRam0000000000b69310;
  FUN_0052ad98(uRam0000000000b69310,param_1,1);
  FUN_005263d4();
  pdVar11 = &MACH_HEADER.flags;
  __Znwm();
  *(undefined ***)pdVar11 = &PTR_FUN_00a00920;
  *(undefined8 *)(pdVar11 + 2) = 0xb69288;
  pdVar11[4] = (int)uVar4;
  plVar8 = (long *)0xb62618;
  FUN_004597c4(0xb62618,&lStack_80);
  plVar14 = plRam0000000000b62608;
  plVar3 = plVar8;
  if (plRam0000000000b62608 != (long *)0x0) {
    uVar13 = (long)plRam0000000000b62608 - 1;
    if (((ulong)plRam0000000000b62608 & uVar13) == 0) {
      plVar12 = (long *)(uVar13 & (ulong)plVar8);
    }
    else {
      plVar12 = plVar8;
      if (plRam0000000000b62608 <= plVar8) {
        uVar7 = 0;
        if (plRam0000000000b62608 != (long *)0x0) {
          uVar7 = (ulong)plVar8 / (ulong)plRam0000000000b62608;
        }
        plVar12 = (long *)((long)plVar8 - uVar7 * (long)plRam0000000000b62608);
      }
    }
    plVar15 = *(long **)(lRam0000000000b62600 + (long)plVar12 * 8);
    if (plVar15 != (long *)0x0) {
      do {
        while( true ) {
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) goto LAB_00526648;
          plVar6 = (long *)plVar15[1];
          if (plVar6 != plVar8) break;
          plVar3 = plVar15 + 2;
          FUN_00459c38(plVar3,&lStack_80);
          if (((ulong)plVar3 & 1) != 0) goto LAB_00526920;
        }
        if (((ulong)plVar14 & uVar13) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar13);
        }
        else if (plVar14 <= plVar6) {
          uVar7 = 0;
          if (plVar14 != (long *)0x0) {
            uVar7 = (ulong)plVar6 / (ulong)plVar14;
          }
          plVar6 = (long *)((long)plVar6 - uVar7 * (long)plVar14);
        }
      } while (plVar6 == plVar12);
    }
  }
LAB_00526648:
  func_0x00529e50();
  lVar5 = lStack_70;
  uStack_60 = 0xb62610;
  uStack_58 = 1;
  *plVar3 = 0;
  plVar3[1] = (long)plVar8;
  plVar3[3] = lStack_78;
  plVar3[2] = lStack_80;
  lStack_80 = 0;
  lStack_78 = 0;
  lStack_70 = 0;
  plVar3[4] = lVar5;
  plVar3[5] = 0;
  if ((plVar14 != (long *)0x0) &&
     ((float)(uRam0000000000b62618 + 1) <= fRam0000000000b62620 * (float)plVar14))
  goto LAB_005268a4;
  uVar13 = 1;
  if ((long *)((long)&MACH_HEADER.magic + 2) < plVar14) {
    uVar13 = (ulong)(((ulong)plVar14 & (long)plVar14 - 1U) != 0);
  }
  plVar12 = (long *)(uVar13 | (long)plVar14 << 1);
  plVar14 = (long *)(long)((float)(uRam0000000000b62618 + 1) / fRam0000000000b62620);
  if (plVar12 <= plVar14) {
    plVar12 = plVar14;
  }
  plStack_68 = plVar3;
  if ((long)plVar12 - 1U == 0) {
    plVar12 = (long *)((long)&MACH_HEADER.magic + 2);
  }
  else if (((ulong)plVar12 & (long)plVar12 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar15 = plRam0000000000b62608;
  if (plRam0000000000b62608 < plVar12) {
LAB_00526708:
    if ((ulong)plVar12 >> 0x3d != 0) {
      FUN_0040cee8();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x5269d8);
      (*pcVar1)();
    }
    __Znwm((long)plVar12 << 3);
    FUN_005291fc();
    lVar5 = lRam0000000000b62600;
    plRam0000000000b62608 = plVar12;
    for (plVar14 = (long *)0x0; plVar15 = plRam0000000000b62610, plVar12 != plVar14;
        plVar14 = (long *)((long)plVar14 + 1)) {
      *(undefined8 *)(lVar5 + (long)plVar14 * 8) = 0;
    }
    plVar14 = plVar12;
    if (plRam0000000000b62610 != (long *)0x0) {
      plVar6 = (long *)plRam0000000000b62610[1];
      uVar7 = (long)plVar12 - 1;
      uVar13 = 0;
      if (plVar12 != (long *)0x0) {
        uVar13 = (ulong)plVar6 / (ulong)plVar12;
      }
      plVar9 = plVar6;
      if (plVar12 <= plVar6) {
        plVar9 = (long *)((long)plVar6 - uVar13 * (long)plVar12);
      }
      if (((ulong)plVar12 & uVar7) == 0) {
        plVar9 = (long *)((ulong)plVar6 & uVar7);
      }
      *(undefined8 *)(lVar5 + (long)plVar9 * 8) = 0xb62610;
      while (plVar6 = plVar15, plVar15 = (long *)*plVar6, plVar15 != (long *)0x0) {
        plVar10 = (long *)plVar15[1];
        if (((ulong)plVar12 & uVar7) == 0) {
          plVar10 = (long *)((ulong)plVar10 & uVar7);
        }
        else if (plVar12 <= plVar10) {
          uVar13 = 0;
          if (plVar12 != (long *)0x0) {
            uVar13 = (ulong)plVar10 / (ulong)plVar12;
          }
          plVar10 = (long *)((long)plVar10 - uVar13 * (long)plVar12);
        }
        if (plVar10 != plVar9) {
          if (*(long *)(lVar5 + (long)plVar10 * 8) == 0) {
            *(long **)(lVar5 + (long)plVar10 * 8) = plVar6;
            plVar9 = plVar10;
          }
          else {
            *plVar6 = *plVar15;
            *plVar15 = **(long **)(lVar5 + (long)plVar10 * 8);
            **(undefined8 **)(lVar5 + (long)plVar10 * 8) = plVar15;
            plVar15 = plVar6;
          }
        }
      }
    }
  }
  else {
    plVar14 = plRam0000000000b62608;
    if (plVar12 < plRam0000000000b62608) {
      plVar14 = (long *)(long)((float)uRam0000000000b62618 / fRam0000000000b62620);
      if ((plRam0000000000b62608 < (long *)((long)&MACH_HEADER.magic + 3)) ||
         (((ulong)plRam0000000000b62608 & (long)plRam0000000000b62608 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)((long)&MACH_HEADER.magic + 1) < plVar14) {
        plVar14 = (long *)(1L << (-LZCOUNT((long)plVar14 + -1) & 0x3fU));
      }
      if (plVar12 <= plVar14) {
        plVar12 = plVar14;
      }
      plVar14 = plRam0000000000b62608;
      if (plVar12 < plVar15) {
        if (plVar12 != (long *)0x0) goto LAB_00526708;
        FUN_005291fc(0);
        plRam0000000000b62608 = (long *)0x0;
        plVar14 = (long *)0x0;
      }
    }
  }
  if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
    plVar12 = (long *)((long)plVar14 - 1U & (ulong)plVar8);
  }
  else {
    plVar12 = plVar8;
    if (plVar14 <= plVar8) {
      uVar13 = 0;
      if (plVar14 != (long *)0x0) {
        uVar13 = (ulong)plVar8 / (ulong)plVar14;
      }
      plVar12 = (long *)((long)plVar8 - uVar13 * (long)plVar14);
    }
  }
LAB_005268a4:
  lVar5 = lRam0000000000b62600;
  plVar8 = *(long **)(lRam0000000000b62600 + (long)plVar12 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar3 = (long)plRam0000000000b62610;
    plRam0000000000b62610 = plVar3;
    *(undefined8 *)(lVar5 + (long)plVar12 * 8) = 0xb62610;
    if (*plVar3 != 0) {
      plVar12 = *(long **)(*plVar3 + 8);
      if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
        plVar12 = (long *)((ulong)plVar12 & (long)plVar14 - 1U);
      }
      else if (plVar14 <= plVar12) {
        uVar13 = 0;
        if (plVar14 != (long *)0x0) {
          uVar13 = (ulong)plVar12 / (ulong)plVar14;
        }
        plVar12 = (long *)((long)plVar12 - uVar13 * (long)plVar14);
      }
      *(long **)(lVar5 + (long)plVar12 * 8) = plVar3;
    }
  }
  else {
    *plVar3 = *plVar8;
    *plVar8 = (long)plVar3;
  }
  plStack_68 = (long *)0x0;
  uRam0000000000b62618 = uRam0000000000b62618 + 1;
  FUN_00529218(&plStack_68);
  plVar15 = plVar3;
LAB_00526920:
  lVar5 = plVar15[5];
  plVar15[5] = (long)pdVar11;
  if (lVar5 != 0) {
    func_0x00529ea0();
    pdVar11 = (dword *)plVar15[5];
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_80);
LAB_0052693c:
  func_0x00529e7c();
  return pdVar11;
}



/* Entry: 00526a28; end: 00526ab3;  */

undefined8 FUN_00526a28(void)

{
  int iVar1;
  
  if ((bRam0000000000b69400 & 1) == 0) {
    iVar1 = 0xb69400;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_005263d4();
      ppuRam0000000000b693e8 = &PTR_FUN_00a00920;
      uRam0000000000b693f0 = 0xb69288;
      uRam0000000000b693f8 = 0xffffffff;
      ___cxa_guard_release(0xb69400);
    }
  }
  return 0xb693e8;
}



/* Entry: 00526ab4; end: 00526f1f;  */

undefined8 * FUN_00526ab4(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *****pppppuVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined4 extraout_w8;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined ***apppuStack_1420 [313];
  undefined1 auStack_a58 [28];
  undefined1 auStack_a3c [4];
  undefined ****ppppuStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_70;
  
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  *param_1 = &PTR_FUN_00a00988;
  param_1[1] = 0x32aaaba7;
  puVar6 = param_1 + 0xc;
  param_1[0xd] = 0;
  *puVar6 = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  puVar1 = param_1;
  FUN_00526f20();
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = puVar1;
  puVar1 = param_1 + 0x1e;
  *puVar1 = 0;
  puVar7 = param_1 + 0x1f;
  *puVar7 = 0;
  puVar10 = param_1 + 0x20;
  *puVar10 = 0x528b88;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  puVar8 = param_1 + 0x21;
  *puVar8 = &PTR_FUN_009e3508;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  puVar9 = param_1 + 0x28;
  *puVar9 = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  FUN_006ad024(auStack_a58,"utils::Graphene::ClientMetricsProcessorImpl::ClientMetricsProcessorImpl"
              );
  func_0x00529e48();
  func_0x00529d94();
  func_0x00529eac();
  func_0x00529d60();
  func_0x00529f80();
  FUN_00529284(puVar6);
  func_0x00529264(&ppppuStack_a38);
  func_0x00529e48();
  func_0x00529d94();
  func_0x00529eac();
  func_0x00529d60(8);
  func_0x00529f80();
  FUN_0052930c(param_1 + 0xd);
  FUN_005292ec(&ppppuStack_a38);
  uVar2 = 0x108;
  __Znwm(0x108);
  func_0x0052ad38();
  ppppuStack_a38 = (undefined ****)0x0;
  FUN_00529394(param_1 + 0x11,uVar2);
  pppppuVar3 = &ppppuStack_a38;
  FUN_00529374();
  func_0x00529e48();
  pppppuVar3[5] = (undefined ****)0x0;
  pppppuVar3[4] = (undefined ****)0x0;
  pppppuVar3[10] = (undefined ****)0x0;
  *pppppuVar3 = (undefined ****)&PTR_FUN_00a008c0;
  func_0x00529dc4();
  ppppuStack_a38 = (undefined ****)pppppuVar3;
  func_0x00529d18();
  if ((undefined *****)ppppuStack_a38 != (undefined *****)0x0) {
    func_0x00529c9c();
  }
  FUN_00526f3c(apppuStack_1420,1,1);
  ppppuStack_a38 = (undefined ****)apppuStack_1420[0];
  func_0x00529d18();
  if (ppppuStack_a38 != (undefined ****)0x0) {
    func_0x00529c9c();
  }
  FUN_00526f3c(apppuStack_1420,2,2);
  ppppuStack_a38 = (undefined ****)apppuStack_1420[0];
  func_0x00529d18();
  if (ppppuStack_a38 != (undefined ****)0x0) {
    func_0x00529c9c();
  }
  *(undefined1 *)(param_1 + 0x1d) = 0;
  pcVar4 = segment_command_00000020.segname;
  __Znwm();
  *(qword *)(pcVar4 + 0x20) = 0;
  pcVar4[8] = '\0';
  pcVar4[9] = '\0';
  pcVar4[10] = '\0';
  pcVar4[0xb] = '\0';
  pcVar4[0xc] = '\0';
  pcVar4[0xd] = '\0';
  pcVar4[0xe] = '\0';
  pcVar4[0xf] = '\0';
  pcVar4[0] = '\0';
  pcVar4[1] = '\0';
  pcVar4[2] = '\0';
  pcVar4[3] = '\0';
  pcVar4[4] = '\0';
  pcVar4[5] = '\0';
  pcVar4[6] = '\0';
  pcVar4[7] = '\0';
  *(qword *)(pcVar4 + 0x18) = 0;
  *(qword *)(pcVar4 + 0x10) = 0;
  *(undefined4 *)(pcVar4 + 0x20) = 0x3f800000;
  ppppuStack_a38 = (undefined ****)0x0;
  FUN_00529550(puVar1);
  func_0x00529530(&ppppuStack_a38);
  pcVar4 = section_00000068.segname;
  __Znwm();
  *(undefined8 *)(pcVar4 + 0x28) = 0;
  *(undefined8 *)(pcVar4 + 0x20) = 0;
  *(undefined8 *)(pcVar4 + 0x38) = 0;
  *(undefined8 *)(pcVar4 + 0x30) = 0;
  *(undefined8 *)(pcVar4 + 0x70) = 0;
  *(undefined8 *)(pcVar4 + 0x58) = 0;
  *(undefined8 *)(pcVar4 + 0x50) = 0;
  *(undefined8 *)(pcVar4 + 0x68) = 0;
  *(undefined8 *)(pcVar4 + 0x60) = 0;
  *(undefined8 *)(pcVar4 + 0x48) = 0;
  *(undefined8 *)(pcVar4 + 0x40) = 0;
  pcVar4[8] = '\0';
  pcVar4[9] = '\0';
  pcVar4[10] = '\0';
  pcVar4[0xb] = '\0';
  pcVar4[0xc] = '\0';
  pcVar4[0xd] = '\0';
  pcVar4[0xe] = '\0';
  pcVar4[0xf] = '\0';
  pcVar4[0] = '\0';
  pcVar4[1] = '\0';
  pcVar4[2] = '\0';
  pcVar4[3] = '\0';
  pcVar4[4] = '\0';
  pcVar4[5] = '\0';
  pcVar4[6] = '\0';
  pcVar4[7] = '\0';
  *(qword *)(pcVar4 + 0x18) = 0;
  *(qword *)(pcVar4 + 0x10) = 0;
  *(dword *)(pcVar4 + 0x20) = 0x3f800000;
  *(undefined8 *)(pcVar4 + 0x30) = 0;
  *(undefined8 *)(pcVar4 + 0x28) = 0;
  *(undefined8 *)(pcVar4 + 0x40) = 0;
  *(undefined8 *)(pcVar4 + 0x38) = 0;
  *(undefined4 *)(pcVar4 + 0x48) = 0x3f800000;
  *(undefined4 *)(pcVar4 + 0x70) = 0x3f800000;
  ppppuStack_a38 = (undefined ****)0x0;
  func_0x00529770(puVar7);
  func_0x00529750(&ppppuStack_a38);
  FUN_00524eb4(auStack_a3c);
  puVar5 = auStack_a3c;
  __ZNSt3__113random_deviceclEv(puVar5);
  FUN_00525688(&ppppuStack_a38,puVar5);
  __ZNSt3__113random_deviceD1Ev(auStack_a3c);
  _memcpy(apppuStack_1420,&ppppuStack_a38,0x9c8);
  *puVar10 = 0x529984;
  ppppuStack_a38 = (undefined ****)&PTR_DAT_00a009e0;
  uVar2 = 0x9c8;
  __Znwm();
  _memcpy();
  uStack_a30 = uVar2;
  func_0x0045e3a0(puVar8,&ppppuStack_a38);
  (*(code *)*ppppuStack_a38)(&ppppuStack_a38);
  (*(code *)*puVar10)(puVar10);
  func_0x00529e18();
  *(undefined4 *)(param_1 + 0x26) = extraout_w8;
  *(undefined4 *)((long)param_1 + 0x134) = 0;
  param_1[0x27] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(puVar9,"");
  puVar5 = auStack_a58;
  FUN_006ad0cc(puVar5);
  func_0x00529eb8(uStack_70);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  do {
    FUN_006ad0cc(auStack_a58);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar9);
    (**(code **)*puVar8)(puVar8);
    func_0x00529750(puVar7);
    func_0x00529530(puVar1);
    FUN_00528c8c(param_1 + 0x14);
    FUN_00529374(param_1 + 0x11);
    FUN_00528cb4(param_1 + 0xe);
    FUN_005292ec(param_1 + 0xd);
    func_0x00529264(puVar6);
    FUN_00528cfc(param_1 + 9);
    __ZNSt3__15mutexD1Ev(param_1 + 1);
    __Unwind_Resume(puVar5);
    __ZNSt3__113random_deviceD1Ev(auStack_a3c);
  } while( true );
}



/* Entry: 00526f20; end: 00526f3b;  */

long FUN_00526f20(long param_1)

{
  __ZNSt3__16chrono12system_clock3nowEv();
  return param_1 / 1000;
}



/* Entry: 00526f3c; end: 00526f8f;  */

void FUN_00526f3c(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  section *psVar1;
  
  psVar1 = &section_00000068;
  __Znwm();
  *(undefined ***)psVar1->sectname = &PTR_FUN_00a00848;
  func_0x00529dc4();
  psVar1[1].sectname[8] = '@';
  psVar1[1].sectname[9] = '\0';
  psVar1[1].sectname[10] = '\0';
  psVar1[1].sectname[0xb] = '\0';
  *(undefined4 *)(psVar1[1].sectname + 0xc) = param_2;
  *(undefined4 *)psVar1[1].segname = param_3;
  *param_1 = psVar1;
  return;
}



/* Entry: 00526f90; end: 0052708f;  */

int FUN_00526f90(long param_1)

{
  int iVar1;
  undefined1 in_ZR;
  undefined8 uVar2;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar3;
  undefined8 uStack_58;
  
  do {
    func_0x00529de0();
  } while (extraout_w10 != 0);
  lVar3 = *(long *)(param_1 + 0x60);
  FUN_00526f20();
  uVar2 = 0x38;
  __Znwm();
  FUN_0052bc3c();
  uStack_58 = uVar2;
  __ZNSt3__15mutex4lockEv(lVar3);
  uStack_58 = 0;
  FUN_005299d4(*(long *)(lVar3 + 0x40) + (ulong)*(uint *)(lVar3 + 0x48) * 8,uVar2);
  func_0x00529d74();
  if ((bool)in_ZR) {
    iVar1 = 0;
    if (extraout_w10_00 + 1 != extraout_w8) {
      iVar1 = extraout_w10_00 + 1;
    }
    *(int *)(lVar3 + 0x4c) = iVar1;
  }
  func_0x00529f0c();
  __ZNSt3__15mutex6unlockEv(lVar3);
  FUN_00529a08(&uStack_58);
  return extraout_w9 - extraout_w10_01 * extraout_w8_00;
}



/* Entry: 00527090; end: 0052711f;  */

ulong FUN_00527090(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int extraout_w10;
  ulong uVar1;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  uStack_38 = param_4;
  do {
    func_0x00529de0();
  } while (extraout_w10 != 0);
  uVar1 = *(ulong *)(param_1 + 0x68);
  FUN_00526f20();
  lStack_48 = param_1;
  FUN_00527184(auStack_40,param_2,param_3,&uStack_38,&lStack_48);
  FUN_00527120(uVar1,auStack_40);
  func_0x00529a88(auStack_40);
  return uVar1 & 0xffffffff;
}



/* Entry: 00527120; end: 00527183;  */

int FUN_00527120(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 in_ZR;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  
  __ZNSt3__15mutex4lockEv();
  func_0x00529a28(*(long *)(param_1 + 0x40) + (ulong)*(uint *)(param_1 + 0x48) * 8,param_2);
  func_0x00529d74();
  if ((bool)in_ZR) {
    iVar1 = 0;
    if (extraout_w10 + 1 != extraout_w8) {
      iVar1 = extraout_w10 + 1;
    }
    *(int *)(param_1 + 0x4c) = iVar1;
  }
  func_0x00529f0c();
  __ZNSt3__15mutex6unlockEv(param_1);
  return extraout_w9 - extraout_w10_00 * extraout_w8_00;
}



/* Entry: 00527184; end: 005271ef;  */

void FUN_00527184(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_2;
  func_0x00529e50();
  uVar2 = *param_4;
  uVar3 = *param_5;
  *puVar1 = param_2;
  uVar4 = *param_3;
  puVar1[2] = param_3[1];
  puVar1[1] = uVar4;
  uVar4 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  puVar1[3] = uVar4;
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  *param_1 = puVar1;
  return;
}



/* Entry: 005271f0; end: 00527293;  */

undefined8 FUN_005271f0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_78);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_60,param_2 + 0x18);
  func_0x00460c3c(auStack_48,param_2 + 0x30);
  FUN_0052ad98(uVar1,auStack_78,0);
  FUN_00478914(auStack_78);
  return uVar1;
}



/* Entry: 00527294; end: 005276c7;  */

ulong FUN_00527294(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 extraout_x8;
  undefined8 uVar8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long lVar9;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  ulong extraout_x8_04;
  long extraout_x8_05;
  long lVar10;
  undefined8 extraout_x8_06;
  long extraout_x9;
  long extraout_x9_00;
  long lVar11;
  long extraout_x9_01;
  long extraout_x9_02;
  int extraout_w10;
  long extraout_x10;
  long extraout_x10_00;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 auStack_88 [4];
  undefined8 **ppuStack_68;
  
  do {
    func_0x00529de0();
  } while (extraout_w10 != 0);
  lVar12 = *(long *)(param_1 + 0x60);
  __ZNSt3__15mutex4lockEv(lVar12);
  puStack_98 = (undefined8 *)0x0;
  puStack_90 = (undefined8 *)0x0;
  uVar14 = *(uint *)(lVar12 + 0x4c);
  uVar3 = *(uint *)(lVar12 + 0x50);
  uVar1 = uVar14 + uVar3 + ~*(uint *)(lVar12 + 0x48);
  uVar4 = 0;
  if (uVar3 != 0) {
    uVar4 = uVar1 / uVar3;
  }
  uVar1 = uVar1 - uVar4 * uVar3;
  puVar6 = (undefined8 *)(ulong)uVar1;
  puStack_a0 = puStack_98;
  if (uVar1 != 0) {
    ppuStack_68 = &puStack_90;
    FUN_00529ab4();
    puVar2 = puVar6 + (long)param_2;
    param_2 = (undefined8 *)0x0;
    _memcpy(puVar6);
    func_0x00529f54();
    puStack_90 = puVar2;
    auStack_88[0] = extraout_x8;
    func_0x00529d08();
    func_0x00529ae0();
    uVar14 = *(uint *)(lVar12 + 0x4c);
    puStack_a0 = puVar6;
    puStack_98 = puVar6;
  }
  do {
    if (*(uint *)(lVar12 + 0x48) == uVar14) {
      __ZNSt3__15mutex6unlockEv(lVar12);
      uVar13 = (ulong)((long)puStack_98 - (long)puStack_a0) >> 3;
      for (; puStack_a0 != puStack_98; puStack_a0 = puStack_a0 + 1) {
        func_0x0052bd3c(*puStack_a0);
        FUN_0052bd80(*puStack_a0);
        puVar2 = *(undefined8 **)(param_1 + 0x78);
        for (puVar6 = *(undefined8 **)(param_1 + 0x70); uVar8 = *puStack_a0, puVar6 != puVar2;
            puVar6 = puVar6 + 1) {
          (**(code **)(*(long *)*puVar6 + 8))();
        }
        uVar7 = *(undefined8 *)(param_1 + 0x88);
        *puStack_a0 = 0;
        param_2 = auStack_88;
        auStack_88[0] = uVar8;
        func_0x0052aee8(uVar7);
        FUN_00529a08(auStack_88);
      }
      func_0x00529e68();
      lVar12 = *(long *)(param_1 + 0x68);
      __ZNSt3__15mutex4lockEv(lVar12);
      puStack_98 = (undefined8 *)0x0;
      puStack_90 = (undefined8 *)0x0;
      uVar14 = *(uint *)(lVar12 + 0x4c);
      uVar3 = *(uint *)(lVar12 + 0x50);
      uVar1 = uVar14 + uVar3 + ~*(uint *)(lVar12 + 0x48);
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = uVar1 / uVar3;
      }
      uVar1 = uVar1 - uVar4 * uVar3;
      puVar6 = (undefined8 *)(ulong)uVar1;
      puStack_a0 = puStack_98;
      if (uVar1 != 0) {
        ppuStack_68 = &puStack_90;
        FUN_00529b34();
        _memcpy(puVar6);
        func_0x00529f54();
        puStack_90 = puVar6 + (long)param_2;
        auStack_88[0] = extraout_x8_03;
        func_0x00529d08();
        func_0x00529b60();
        uVar14 = *(uint *)(lVar12 + 0x4c);
        puStack_a0 = puVar6;
        puStack_98 = puVar6;
      }
      do {
        if (*(uint *)(lVar12 + 0x48) == uVar14) {
          __ZNSt3__15mutex6unlockEv(lVar12);
          for (; puStack_a0 != puStack_98; puStack_a0 = puStack_a0 + 1) {
            FUN_0052aa7c(*puStack_a0);
            puVar2 = *(undefined8 **)(param_1 + 0x78);
            for (puVar6 = *(undefined8 **)(param_1 + 0x70); uVar8 = *puStack_a0, puVar6 != puVar2;
                puVar6 = puVar6 + 1) {
              (**(code **)(*(long *)*puVar6 + 0x10))();
            }
            uVar7 = *(undefined8 *)(param_1 + 0x88);
            *puStack_a0 = 0;
            auStack_88[0] = uVar8;
            FUN_0052af48(uVar7,auStack_88);
            func_0x00529a88(auStack_88);
            uVar13 = uVar13 + 1;
          }
          func_0x00529e60();
          return uVar13;
        }
        lVar15 = *(long *)(lVar12 + 0x40);
        if (puStack_98 < puStack_90) {
          uVar8 = *(undefined8 *)(lVar15 + (ulong)uVar14 * 8);
          *(undefined8 *)(lVar15 + (ulong)uVar14 * 8) = 0;
          *puStack_98 = uVar8;
        }
        else {
          if (((long)puStack_98 - (long)puStack_a0 >> 3) + 1U >> 0x3d != 0) {
            FUN_00529b28();
LAB_00527650:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x527654);
            (*pcVar5)();
          }
          func_0x00529f20();
          lVar16 = extraout_x10_00;
          if (0x7ffffffffffffff7 < extraout_x8_04) {
            lVar16 = 0x1fffffffffffffff;
          }
          if (lVar16 == 0) {
            lVar10 = 0;
            lVar9 = extraout_x9_01;
            ppuStack_68 = &puStack_90;
          }
          else {
            ppuStack_68 = &puStack_90;
            FUN_00529b34();
            func_0x00529ef8();
            lVar10 = extraout_x8_05;
            lVar9 = extraout_x9_02;
          }
          puStack_98 = (undefined8 *)(lVar16 + ((long)puStack_98 - (long)puStack_a0));
          uVar8 = *(undefined8 *)(lVar15 + (ulong)uVar14 * 8);
          *(undefined8 *)(lVar15 + (ulong)uVar14 * 8) = 0;
          puStack_a0 = puStack_98 + -lVar9;
          *puStack_98 = uVar8;
          _memcpy(puStack_a0);
          func_0x00529f54();
          puStack_90 = (undefined8 *)(lVar16 + lVar10 * 8);
          auStack_88[0] = extraout_x8_06;
          func_0x00529d08();
          func_0x00529b60();
          uVar14 = *(uint *)(lVar12 + 0x4c);
        }
        uVar1 = *(uint *)(lVar12 + 0x50);
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = (uVar14 + 1) / uVar1;
        }
        uVar14 = (uVar14 + 1) - uVar3 * uVar1;
        *(uint *)(lVar12 + 0x4c) = uVar14;
        puStack_98 = puStack_98 + 1;
      } while( true );
    }
    lVar15 = *(long *)(lVar12 + 0x40);
    if (puStack_98 < puStack_90) {
      uVar8 = *(undefined8 *)(lVar15 + (ulong)uVar14 * 8);
      *(undefined8 *)(lVar15 + (ulong)uVar14 * 8) = 0;
      *puStack_98 = uVar8;
    }
    else {
      lVar16 = (long)puStack_98 - (long)puStack_a0;
      if ((lVar16 >> 3) + 1U >> 0x3d != 0) {
        FUN_00529aa8();
        goto LAB_00527650;
      }
      func_0x00529f20();
      lVar10 = extraout_x10;
      if (0x7ffffffffffffff7 < extraout_x8_00) {
        lVar10 = 0x1fffffffffffffff;
      }
      if (lVar10 == 0) {
        lVar9 = 0;
        param_2 = puStack_a0;
        lVar11 = extraout_x9;
        ppuStack_68 = &puStack_90;
      }
      else {
        ppuStack_68 = &puStack_90;
        FUN_00529ab4();
        func_0x00529ef8();
        param_2 = puStack_a0;
        lVar9 = extraout_x8_01;
        lVar11 = extraout_x9_00;
      }
      puStack_98 = (undefined8 *)(lVar10 + lVar16);
      uVar8 = *(undefined8 *)(lVar15 + (ulong)uVar14 * 8);
      *(undefined8 *)(lVar15 + (ulong)uVar14 * 8) = 0;
      puStack_a0 = puStack_98 + -lVar11;
      *puStack_98 = uVar8;
      _memcpy(puStack_a0);
      func_0x00529f54();
      puStack_90 = (undefined8 *)(lVar10 + lVar9 * 8);
      auStack_88[0] = extraout_x8_02;
      func_0x00529d08();
      func_0x00529ae0();
      uVar14 = *(uint *)(lVar12 + 0x4c);
    }
    uVar1 = *(uint *)(lVar12 + 0x50);
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = (uVar14 + 1) / uVar1;
    }
    uVar14 = (uVar14 + 1) - uVar3 * uVar1;
    *(uint *)(lVar12 + 0x4c) = uVar14;
    puStack_98 = puStack_98 + 1;
  } while( true );
}



/* Entry: 005276c8; end: 00528b23;  */

void FUN_005276c8(undefined8 *param_1,char ******param_2,long *param_3,long param_4,ulong param_5)

{
  undefined4 *puVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  char *****pppppcVar9;
  char *****pppppcVar10;
  uint uVar11;
  code *pcVar12;
  undefined1 uVar13;
  int iVar14;
  ulong uVar15;
  char ******ppppppcVar16;
  qword *pqVar17;
  qword *pqVar18;
  ulong *puVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  char ******ppppppcVar22;
  char ******ppppppcVar23;
  long *plVar24;
  char **ppcVar25;
  long lVar26;
  char *pcVar27;
  char ******ppppppcVar28;
  char *****pppppcVar29;
  undefined4 extraout_w8;
  long lVar30;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long lVar31;
  undefined8 *puVar32;
  ulong uVar33;
  char *extraout_x10;
  bool bVar34;
  long *plVar35;
  char ******ppppppcVar36;
  char **ppcVar37;
  char *****pppppcVar38;
  long lVar39;
  char ******ppppppcVar40;
  long lVar41;
  undefined8 *puVar42;
  long lVar43;
  undefined8 *puVar44;
  undefined8 *puVar45;
  char *pcVar46;
  char *pcStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_280;
  char *****pppppcStack_278;
  undefined1 uStack_270;
  long *aplStack_268 [2];
  undefined1 auStack_258 [8];
  ulong uStack_250;
  uint uStack_248;
  char *pcStack_240;
  undefined4 uStack_238;
  char *pcStack_228;
  undefined4 uStack_220;
  char *pcStack_210;
  undefined4 uStack_208;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  int iStack_1bc;
  qword *pqStack_1b0;
  char *****pppppcStack_1a8;
  char *****pppppcStack_1a0;
  undefined8 uStack_198;
  char cStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  char *****pppppcStack_170;
  long lStack_168;
  char *****pppppcStack_158;
  char *****pppppcStack_150;
  char ****appppcStack_148 [7];
  char *****pppppcStack_110;
  char *****pppppcStack_108;
  char *****pppppcStack_100;
  long lStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  char *****pppppcStack_c0;
  char *****pppppcStack_b8;
  char *****pppppcStack_b0;
  char acStack_a8 [8];
  long lStack_a0;
  undefined8 uStack_78;
  
  uStack_78 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  plVar35 = param_3 + 0x12;
  plVar24 = param_3;
  (**(code **)(*param_3 + 0x18))();
  FUN_00526f20();
  do {
    lVar7 = *plVar35;
    cVar6 = '\x01';
    bVar34 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar34) {
      *(undefined4 *)plVar35 = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  puVar1 = (undefined4 *)((long)param_3 + 0x94);
  do {
    uVar3 = *puVar1;
    cVar6 = '\x01';
    bVar34 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar34) {
      *puVar1 = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  lVar30 = param_3[0x13];
  param_3[0x13] = (long)plVar24;
  func_0x005308c8(auStack_258,0);
  iStack_1bc = (int)param_3 + 0xe0;
  func_0x0052f058();
  uStack_248 = uStack_248 | 1;
  if (uStack_1d8 == 0) {
    uVar15 = uStack_250;
    if ((uStack_250 & 1) != 0) {
      uVar15 = *(ulong *)(uStack_250 & 0xfffffffffffffffe);
    }
    func_0x00528de8();
    uStack_1d8 = uVar15;
  }
  FUN_0052f080(param_3 + 0x14);
  uStack_1c0 = 1;
  func_0x00529ed8();
  lVar31 = extraout_x8;
  if ((param_5 & 1) != 0) {
    func_0x00529ecc();
    lVar31 = extraout_x8_00;
  }
  func_0x00532e08(lVar31 + 0x60,param_4);
  func_0x00529ed8();
  lVar31 = extraout_x8_01;
  if ((param_5 & 1) != 0) {
    func_0x00529ecc();
    lVar31 = extraout_x8_02;
  }
  func_0x00532e08(lVar31 + 0x68,param_4 + 0x18);
  FUN_00584fb0(aplStack_268);
  ppppppcVar36 = (char ******)0x0;
  if (aplStack_268[0] != (long *)0x0) {
    (**(code **)(*aplStack_268[0] + 0x18))(&pppppcStack_158);
    FUN_004c3de8(&pppppcStack_c0,&pppppcStack_158);
    FUN_004bb774(&pppppcStack_158);
    if (acStack_a8[0] == '\x01') {
      FUN_004bbc8c(&pppppcStack_158,&pppppcStack_c0);
      pppppcVar9 = pppppcStack_150;
      ppppppcVar36 = (char ******)pppppcStack_158;
      ppppppcVar40 = (char ******)((long)pppppcStack_150 - (long)pppppcStack_158);
      if ((char ******)0x7ffffffffffffff6 < ppppppcVar40) {
        FUN_0040d740();
        goto LAB_00528888;
      }
      if ((char ******)((long)&MACH_HEADER.sizeofcmds + 2) < ppppppcVar40) {
        uVar15 = 0x19;
        if (((ulong)ppppppcVar40 | 7) != 0x17) {
          uVar15 = ((ulong)ppppppcVar40 | 7) + 1;
        }
        ppppppcVar16 = &pppppcStack_1a8;
        FUN_0040d754();
        uStack_198 = uVar15 | 0x8000000000000000;
        pppppcStack_1a8 = (char *****)ppppppcVar16;
        pppppcStack_1a0 = (char *****)ppppppcVar40;
      }
      else {
        uStack_198 = CONCAT17((char)ppppppcVar40,(undefined7)uStack_198);
        ppppppcVar16 = &pppppcStack_1a8;
      }
      for (; ppppppcVar36 != (char ******)pppppcVar9;
          ppppppcVar36 = (char ******)((long)ppppppcVar36 + 1)) {
        *(undefined1 *)ppppppcVar16 = *(undefined1 *)ppppppcVar36;
        ppppppcVar16 = (char ******)((long)ppppppcVar16 + 1);
      }
      *(undefined1 *)ppppppcVar16 = 0;
      func_0x00529ed8();
      lVar31 = extraout_x8_03;
      if ((param_5 & 1) != 0) {
        func_0x00529ecc();
        lVar31 = extraout_x8_04;
      }
      func_0x00532e08(lVar31 + 0x78,&pppppcStack_1a8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppcStack_1a8);
      FUN_0040d974(&pppppcStack_158);
    }
    ppppppcVar36 = &pppppcStack_c0;
    FUN_004bb774();
  }
  uStack_280 = 0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  puVar32 = (undefined8 *)0x0;
  uStack_270 = 1;
  pppppcStack_278 = (char *****)ppppppcVar36;
  if ((*(byte *)(param_3 + 0x1d) & 1) == 0) {
    if (aplStack_268[0] != (long *)0x0) {
      FUN_00425cb4(&pppppcStack_110,"graphene_sampling_enabled");
      pcStack_d8 = (char *)0x0;
      lStack_d0 = 0;
      uStack_c8 = 0;
      param_5 = 0;
      FUN_00584eac(&pppppcStack_c0);
      FUN_0040d974(&pcStack_d8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppcStack_110);
      plVar24 = aplStack_268[0];
      (**(code **)(*aplStack_268[0] + 0x38))(aplStack_268[0],&pppppcStack_c0);
      if (((uint)plVar24 >> 8 & 1) == 0) {
        puStack_f0 = (undefined8 *)0x0;
        puStack_e8 = (undefined8 *)0x0;
        puStack_e0 = (undefined8 *)0x0;
      }
      else {
        puStack_f0 = (undefined8 *)0x0;
        puStack_e8 = (undefined8 *)0x0;
        puStack_e0 = (undefined8 *)0x0;
        if (((ulong)plVar24 & 1) != 0) {
          FUN_00425cb4(&pppppcStack_170,"");
          uStack_188 = 0;
          uStack_180 = 0;
          uStack_178 = 0;
          param_5 = 1;
          FUN_00584eac(&pppppcStack_158,&pppppcStack_170,0x45,1,0xd,&uStack_188);
          FUN_0040d974(&uStack_188);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppcStack_170);
          (**(code **)(*aplStack_268[0] + 0x30))(&pppppcStack_1a8,aplStack_268[0],&pppppcStack_158);
          pqVar17 = &segment_command_00000020.vmaddr;
          __Znwm();
          pqVar17[2] = 0;
          *pqVar17 = (qword)&PTR_FUN_009fede8;
          pqVar17[1] = 0;
          pqVar17[3] = 0;
          pqVar17[4] = 0;
          pqVar17[5] = (qword)&DAT_00b69408;
          *(undefined4 *)(pqVar17 + 6) = 0;
          pqStack_1b0 = pqVar17;
          puVar32 = puStack_e8;
          puVar44 = puStack_e0;
          if ((cStack_190 == '\x01') && (pppppcStack_1a8 != pppppcStack_1a0)) {
            param_5 = (ulong)(uint)((int)pppppcStack_1a0 - (int)pppppcStack_1a8);
            pqVar18 = pqVar17;
            FUN_00549e84();
            puVar32 = puStack_e8;
            puVar44 = puStack_e0;
            if (((ulong)pqVar18 & 1) != 0) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (param_3 + 0x28,pqVar17[5] & 0xfffffffffffffffc);
              puVar44 = (undefined8 *)0x0;
              puVar32 = (undefined8 *)0x0;
              pqVar18 = pqVar17 + 2;
              if ((pqVar17[2] & 1) != 0) {
                pqVar18 = (qword *)(pqVar17[2] + 7);
              }
              pqVar17 = pqVar18 + (int)pqVar17[3];
              for (; pqVar18 != pqVar17; pqVar18 = pqVar18 + 1) {
                ppuVar2 = &PTR_PTR_00b1b0c8;
                if (*(undefined ***)(*pqVar18 + 0x48) != (undefined **)0x0) {
                  ppuVar2 = *(undefined ***)(*pqVar18 + 0x48);
                }
                if (*(int *)((long)ppuVar2 + 0x1c) == 5) {
                  puVar19 = (ulong *)((ulong)ppuVar2[2] & 0xfffffffffffffffc);
                  if ((char)*(byte *)((long)puVar19 + 0x17) < '\0') {
                    if (1 < puVar19[1]) {
                      puVar19 = (ulong *)*puVar19;
                      goto LAB_00527aa0;
                    }
                  }
                  else if (1 < *(byte *)((long)puVar19 + 0x17)) {
LAB_00527aa0:
                    param_5 = param_3[0x11];
                    FUN_0052f570(&lStack_f8,puVar19);
                    lVar31 = lStack_f8;
                    if (lStack_f8 != 0) {
                      if (puVar32 < puVar44) {
                        FUN_00528f74(puVar32,lStack_f8);
                        puVar32 = puVar32 + 0xc;
                      }
                      else {
                        lVar39 = (long)puVar32 - (long)puStack_f0;
                        uVar15 = lVar39 / 0x60 + 1;
                        if (0x2aaaaaaaaaaaaaa < uVar15) {
                          puStack_e8 = puVar32;
                          puStack_e0 = puVar44;
                          FUN_00528fd8();
                          goto LAB_00528888;
                        }
                        uVar5 = ((long)puVar44 - (long)puStack_f0) / 0x60;
                        uVar33 = uVar5 * 2;
                        if (uVar33 < uVar15 || uVar33 - uVar15 == 0) {
                          uVar33 = uVar15;
                        }
                        if (0x155555555555554 < uVar5) {
                          uVar33 = 0x2aaaaaaaaaaaaaa;
                        }
                        if (uVar33 == 0) {
                          lVar43 = 0;
                        }
                        else {
                          if (0x2aaaaaaaaaaaaaa < uVar33) {
                            puStack_e8 = puVar32;
                            puStack_e0 = puVar44;
                            FUN_0040cee8();
                            goto LAB_00528888;
                          }
                          lVar43 = uVar33 * 0x60;
                          __Znwm();
                        }
                        lVar39 = lVar43 + lVar39;
                        FUN_00528f74(lVar39,lVar31);
                        puVar42 = puStack_f0;
                        puVar45 = (undefined8 *)
                                  (lVar39 + (((long)puVar32 - (long)puStack_f0) / -0x60) * 0x60);
                        puVar20 = puVar45;
                        for (puVar44 = puStack_f0; puVar44 != puVar32; puVar44 = puVar44 + 0xc) {
                          FUN_00528f74(puVar20,puVar44);
                          puVar20 = puVar20 + 0xc;
                        }
                        for (; puVar42 != puVar32; puVar42 = puVar42 + 0xc) {
                          func_0x00528fe4(puVar42);
                        }
                        puVar32 = (undefined8 *)(lVar39 + 0x60);
                        puVar44 = (undefined8 *)(lVar43 + uVar33 * 0x60);
                        bVar34 = puStack_f0 != (undefined8 *)0x0;
                        puStack_f0 = puVar45;
                        if (bVar34) {
                          __ZdlPv();
                        }
                      }
                    }
                    func_0x00529c00(&lStack_f8);
                  }
                }
              }
            }
          }
          puStack_e0 = puVar44;
          puStack_e8 = puVar32;
          if ((*(byte *)(param_3 + 0x1d) & 1) == 0) {
            *(undefined1 *)(param_3 + 0x1d) = 1;
            uVar21 = 0x28;
            __Znwm(0x28);
            FUN_0052d2d0();
            lStack_f8 = 0;
            FUN_00529550(param_3 + 0x1e,uVar21);
            func_0x00529530(&lStack_f8);
            uVar21 = 0x78;
            __Znwm(0x78);
            FUN_0052d4dc();
            lStack_f8 = 0;
            func_0x00529770(param_3 + 0x1f,uVar21);
            func_0x00529750(&lStack_f8);
          }
          func_0x00529bd0(&pqStack_1b0);
          FUN_004bb774(&pppppcStack_1a8);
          func_0x00529018(&pppppcStack_158);
        }
      }
      func_0x00529040(&puStack_f0);
      func_0x00529018(&pppppcStack_c0);
    }
    puVar32 = &uStack_280;
    FUN_00528b24();
  }
  func_0x00529ed8();
  lVar31 = extraout_x8_05;
  if ((param_5 & 1) != 0) {
    func_0x00529ecc();
    lVar31 = extraout_x8_06;
  }
  func_0x00532e08(lVar31 + 0x70,param_3 + 0x28);
  pcStack_2b0 = (char *)0x0;
  pcVar46 = (char *)0x0;
  puVar20 = (undefined8 *)param_3[0xf];
  for (puVar44 = (undefined8 *)param_3[0xe]; puVar44 != puVar20; puVar44 = puVar44 + 1) {
    (**(code **)(*(long *)*puVar44 + 0x18))(&pppppcStack_1a8);
    pppppcVar9 = pppppcStack_1a0;
    for (ppppppcVar36 = (char ******)pppppcStack_1a8; ppppppcVar36 != (char ******)pppppcVar9;
        ppppppcVar36 = ppppppcVar36 + 5) {
      ppppppcVar40 = (char ******)param_3[0x11];
      FUN_0052ae00(ppppppcVar40,ppppppcVar36[3]);
      if (ppppppcVar40 == (char ******)0x0) {
        pcVar46 = pcVar46 + 1;
      }
      else {
        if (*(long *)(param_3[0x1e] + 0x18) != 0) {
          FUN_0052d3c4(&pppppcStack_c0,param_3[0x1e],ppppppcVar40);
          lVar31 = param_3[0x26];
          uVar11 = (uint)pppppcStack_c0;
          if ((int)lVar31 < (int)(uint)pppppcStack_c0) {
            if (lStack_a0 != 0) {
              pppppcStack_108 = (char *****)0x0;
              pppppcStack_100 = (char *****)0x0;
              pppppcStack_110 = (char *****)0x0;
              pppppcVar29 = *ppppppcVar40;
              pppppcVar38 = ppppppcVar40[1];
              uVar15 = ((long)pppppcVar38 - (long)pppppcVar29) / 0x30 - lStack_a0;
              if (uVar15 != 0) {
                if (0x555555555555555 < uVar15) {
                  FUN_00483ba8();
                  goto LAB_00528888;
                }
                FUN_00483f7c(&pppppcStack_158,uVar15,0,&pppppcStack_100);
                _memcpy(pppppcStack_150 +
                        (((long)pppppcStack_108 - (long)pppppcStack_110) / -0x30) * 6);
                func_0x00529e00();
                func_0x00529d4c();
                pppppcVar29 = *ppppppcVar40;
                pppppcVar38 = ppppppcVar40[1];
              }
              for (; pppppcVar10 = pppppcStack_108, ppppppcVar16 = (char ******)pppppcStack_110,
                  pppppcVar29 != pppppcVar38; pppppcVar29 = pppppcVar29 + 6) {
                ppppppcVar16 = &pppppcStack_b8;
                FUN_00464948(ppppppcVar16,pppppcVar29);
                pppppcVar10 = pppppcStack_108;
                if (ppppppcVar16 == (char ******)0x0) {
                  if (pppppcStack_108 < pppppcStack_100) {
                    FUN_00483c54(pppppcStack_108,pppppcVar29);
                    pppppcStack_108 = pppppcVar10 + 6;
                  }
                  else {
                    ppppppcVar16 = &pppppcStack_110;
                    FUN_00483ee8(ppppppcVar16,
                                 ((long)pppppcStack_108 - (long)pppppcStack_110) / 0x30 + 1);
                    FUN_00483f7c(&pppppcStack_158,ppppppcVar16,
                                 ((long)pppppcStack_108 - (long)pppppcStack_110) / 0x30,
                                 &pppppcStack_100);
                    FUN_00483c54(appppcStack_148[0],pppppcVar29);
                    appppcStack_148[0] = appppcStack_148[0] + 6;
                    _memcpy(pppppcStack_150 +
                            (((long)pppppcStack_108 - (long)pppppcStack_110) / -0x30) * 6);
                    func_0x00529e00();
                    func_0x00529d4c();
                    pppppcStack_108 = (char *****)param_2;
                  }
                }
                else {
                  pcStack_2b0 = pcStack_2b0 + 1;
                }
              }
              if (ppppppcVar40 != &pppppcStack_110) {
                uVar15 = (long)pppppcStack_108 - (long)pppppcStack_110;
                pppppcVar29 = *ppppppcVar40;
                lVar39 = (long)uVar15 / 0x30;
                if ((ulong)((long)ppppppcVar40[2] - (long)pppppcVar29) < uVar15) {
                  if (pppppcVar29 != (char *****)0x0) {
                    FUN_00483d64(ppppppcVar40);
                    __ZdlPv(*ppppppcVar40);
                    *ppppppcVar40 = (char *****)0x0;
                    ppppppcVar40[1] = (char *****)0x0;
                    ppppppcVar40[2] = (char *****)0x0;
                  }
                  ppppppcVar22 = ppppppcVar40;
                  FUN_00483ee8(ppppppcVar40,lVar39);
                  FUN_00483b48(ppppppcVar40,ppppppcVar22);
                }
                else {
                  if (uVar15 <= (ulong)((long)ppppppcVar40[1] - (long)pppppcVar29)) {
                    FUN_00528e3c(pppppcStack_110,pppppcStack_108);
                    FUN_00483d6c(ppppppcVar40,ppppppcVar16);
                    goto LAB_00527f84;
                  }
                  ppppppcVar16 = (char ******)
                                 ((long)pppppcStack_110 +
                                 ((long)ppppppcVar40[1] - (long)pppppcVar29));
                  FUN_00528e3c(pppppcStack_110,ppppppcVar16);
                  lVar39 = ((long)ppppppcVar40[1] - (long)*ppppppcVar40) / -0x30 + lVar39;
                }
                FUN_004840e0(ppppppcVar40,ppppppcVar16,pppppcVar10,lVar39);
              }
LAB_00527f84:
              FUN_00484190(&pppppcStack_110);
            }
            uVar15 = (ulong)(uint)pppppcStack_c0;
            if ((*(int *)(ppppppcVar36 + 4) == 0) && ((int)(uint)pppppcStack_c0 < 10000)) {
              func_0x0052f910();
              **ppppppcVar36 = (char ****)((long)**ppppppcVar36 * (uVar15 & 0xffffffff));
            }
          }
          else {
            *(int *)(param_3 + 0x27) = (int)param_3[0x27] + 1;
          }
          func_0x00529cc0();
          if ((int)uVar11 <= (int)lVar31) goto LAB_0052803c;
        }
        func_0x00529f34(ppppppcVar40[4]);
        ppppppcVar22 = (char ******)param_3[0x11];
        ppppppcVar28 = (char ******)(ulong)*(uint *)(ppppppcVar40 + 5);
        func_0x0052b010();
        ppppppcVar23 = (char ******)param_3[0x11];
        ppppppcVar16 = (char ******)(ulong)*(uint *)(ppppppcVar40 + 5);
        pppppcStack_c0 = (char *****)ppppppcVar22;
        pppppcStack_b8 = (char *****)ppppppcVar28;
        FUN_0052b070(ppppppcVar23,ppppppcVar16,*(undefined4 *)((long)ppppppcVar40 + 0x2c));
        iVar14 = *(int *)(ppppppcVar36 + 4);
        ppcVar25 = &pcStack_228;
        pppppcStack_158 = (char *****)ppppppcVar23;
        pppppcStack_150 = (char *****)ppppppcVar16;
        if (((iVar14 == 0) || (ppcVar25 = &pcStack_240, iVar14 == 1)) ||
           (ppcVar25 = &pcStack_210, iVar14 == 2)) {
          FUN_00528e84(ppcVar25);
          FUN_0052f110(&pppppcStack_c0,&pppppcStack_158,ppppppcVar40,ppppppcVar36,ppcVar25);
        }
      }
LAB_0052803c:
    }
    FUN_0052549c(&pppppcStack_1a8);
    (**(code **)(*(long *)*puVar44 + 0x20))(&pppppcStack_158);
    pppppcVar9 = pppppcStack_150;
    for (ppppppcVar36 = (char ******)pppppcStack_158; ppppppcVar36 != (char ******)pppppcVar9;
        ppppppcVar36 = ppppppcVar36 + 5) {
      plVar24 = (long *)param_3[0x11];
      FUN_0052ae60(plVar24,ppppppcVar36[3]);
      if (plVar24 == (long *)0x0) {
        pcVar46 = pcVar46 + 1;
      }
      else {
        lStack_168 = *(long *)(*plVar24 + 0x40);
        param_2 = *(char *******)(*plVar24 + 0x38);
        pppppcStack_170 = (char *****)param_2;
        func_0x00460c3c(&pppppcStack_1a8);
        pppppcStack_110 = (char *****)0x0;
        pppppcStack_108 = (char *****)0x0;
        pppppcStack_100 = (char *****)0x0;
        ppcVar37 = (char **)param_3[0x1f];
        ppcVar25 = ppcVar37;
        FUN_0052d4bc();
        if (((ulong)ppcVar25 & 1) == 0) {
          FUN_0052deb0(&pppppcStack_c0,ppcVar37,plVar24);
          iVar14 = *(int *)(*plVar24 + 0x48);
          if ((int)(uint)pppppcStack_c0 < iVar14) {
            iVar4 = 0;
            if (iVar14 != 0) {
              iVar4 = 10000 / iVar14;
            }
            iVar4 = iVar4 * (uint)pppppcStack_c0;
            if ((int)param_3[0x26] < iVar4) {
              if (iVar4 < 10000 && *(int *)(ppppppcVar36 + 4) == 0) {
                if (iVar4 == 0) {
                  lVar31 = 0;
                }
                else {
                  iVar14 = 0;
                  if (iVar4 != 0) {
                    iVar14 = 10000 / iVar4;
                  }
                  lVar31 = (long)iVar14;
                }
                **ppppppcVar36 = (char ****)(lVar31 * (long)**ppppppcVar36);
              }
              goto LAB_00528160;
            }
            bVar34 = false;
            *(int *)((long)param_3 + 0x13c) = *(int *)((long)param_3 + 0x13c) + 1;
          }
          else {
LAB_00528160:
            if (lStack_a0 != 0) {
              lVar43 = 0;
              lVar39 = 0;
              ppppppcVar40 = (char ******)0x0;
              pcStack_d8 = (char *)0x0;
              lStack_d0 = 0;
              uStack_c8 = 0;
              ppppppcVar16 = (char ******)0x0;
              for (lVar31 = 0; lVar41 = lStack_d0, pcVar27 = pcStack_d8,
                  lVar31 != *(long *)(*plVar24 + 0x40); lVar31 = lVar31 + 1) {
                FUN_00456d78(&puStack_f0,(undefined1 *)((long)pppppcStack_170 + lVar39));
                ppppppcVar22 = &pppppcStack_b8;
                FUN_00464948(ppppppcVar22,&puStack_f0);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_f0);
                pppppcVar29 = pppppcStack_170;
                ppppppcVar23 = ppppppcVar16;
                if (ppppppcVar22 == (char ******)0x0) {
                  if (ppppppcVar40 < pppppcStack_100) {
                    param_2 = *(char *******)((long)pppppcStack_170 + lVar39);
                    ppppppcVar40[1] =
                         (char *****)((undefined8 *)((long)pppppcStack_170 + lVar39))[1];
                    *ppppppcVar40 = (char *****)param_2;
                  }
                  else {
                    lVar41 = (long)ppppppcVar40 - (long)ppppppcVar16;
                    uVar15 = (lVar41 >> 4) + 1;
                    if (uVar15 >> 0x3c != 0) {
                      pppppcStack_110 = (char *****)ppppppcVar16;
                      pppppcStack_108 = (char *****)ppppppcVar40;
                      FUN_00528ecc();
                      goto LAB_00528888;
                    }
                    uVar33 = (long)pppppcStack_100 - (long)ppppppcVar16 >> 3;
                    if (uVar33 <= uVar15) {
                      uVar33 = uVar15;
                    }
                    if (0x7fffffffffffffef < (ulong)((long)pppppcStack_100 - (long)ppppppcVar16)) {
                      uVar33 = 0xfffffffffffffff;
                    }
                    if (uVar33 >> 0x3c != 0) {
                      pppppcStack_110 = (char *****)ppppppcVar16;
                      pppppcStack_108 = (char *****)ppppppcVar40;
                      FUN_0040cee8();
                      goto LAB_00528888;
                    }
                    lVar26 = uVar33 << 4;
                    __Znwm();
                    ppppppcVar40 = (char ******)(lVar26 + lVar41);
                    ppppppcVar22 = (char ******)(lVar26 + uVar33 * 0x10);
                    param_2 = *(char *******)((long)pppppcVar29 + lVar39);
                    ppppppcVar40[1] = (char *****)((undefined8 *)((long)pppppcVar29 + lVar39))[1];
                    *ppppppcVar40 = (char *****)param_2;
                    ppppppcVar23 = ppppppcVar40 + (lVar41 >> 4) * -2;
                    _memcpy(ppppppcVar23,ppppppcVar16,lVar41);
                    pppppcStack_100 = (char *****)ppppppcVar22;
                    if (ppppppcVar16 != (char ******)0x0) {
                      func_0x00529ce0();
                    }
                  }
                  ppppppcVar40 = ppppppcVar40 + 2;
                  FUN_00479520(&pcStack_d8,plVar24[1] + lVar43);
                }
                else {
                  pcStack_2b0 = pcStack_2b0 + 1;
                }
                lVar39 = lVar39 + 0x10;
                lVar43 = lVar43 + 0x18;
                ppppppcVar16 = ppppppcVar23;
              }
              lStack_168 = (long)ppppppcVar40 - (long)ppppppcVar16 >> 4;
              uVar15 = lStack_d0 - (long)pcStack_d8;
              lVar31 = (long)uVar15 / 0x18;
              pppppcStack_170 = (char *****)ppppppcVar16;
              if (uStack_198 - (long)pppppcStack_1a8 < uVar15) {
                pppppcStack_110 = (char *****)ppppppcVar16;
                pppppcStack_108 = (char *****)ppppppcVar40;
                FUN_00528ed8(&pppppcStack_1a8);
                ppppppcVar40 = &pppppcStack_1a8;
                FUN_0045a5ac(ppppppcVar40,lVar31);
                FUN_004279b8(&pppppcStack_1a8,ppppppcVar40);
LAB_00528368:
                FUN_00460c78(&pppppcStack_1a8,pcVar27,lVar41,lVar31);
              }
              else {
                if ((ulong)((long)pppppcStack_1a0 - (long)pppppcStack_1a8) < uVar15) {
                  pcVar27 = pcStack_d8 + ((long)pppppcStack_1a0 - (long)pppppcStack_1a8);
                  pppppcStack_110 = (char *****)ppppppcVar16;
                  pppppcStack_108 = (char *****)ppppppcVar40;
                  FUN_00528f0c(pcStack_d8,pcVar27);
                  lVar31 = ((long)pppppcStack_1a0 - (long)pppppcStack_1a8) / -0x18 + lVar31;
                  goto LAB_00528368;
                }
                pppppcStack_110 = (char *****)ppppppcVar16;
                pppppcStack_108 = (char *****)ppppppcVar40;
                FUN_00528f0c(pcStack_d8,lStack_d0);
                func_0x00459154(&pppppcStack_1a8,pcVar27);
              }
              ppcVar37 = &pcStack_d8;
              func_0x00459128(ppcVar37);
            }
            bVar34 = true;
          }
          func_0x00529cc0();
          ppcVar25 = ppcVar37;
          if (bVar34) goto LAB_005283b0;
        }
        else {
LAB_005283b0:
          func_0x00529f34(plVar24[5]);
          lVar31 = 8;
          if (*(long *)(*plVar24 + 0x20) != 0) {
            lVar31 = 0x18;
          }
          puVar42 = (undefined8 *)(*plVar24 + lVar31);
          pppppcStack_b8 = (char *****)puVar42[1];
          param_2 = (char ******)*puVar42;
          iVar14 = *(int *)(ppppppcVar36 + 4);
          pppppcStack_c0 = (char *****)param_2;
          if (iVar14 == 0) {
            lVar31 = *plVar24;
            func_0x00529d00();
          }
          else if (iVar14 == 2) {
            lVar31 = *plVar24;
            ppcVar25 = &pcStack_210;
            FUN_00528e84(&pcStack_210);
          }
          else {
            if (iVar14 != 1) goto LAB_00528434;
            lVar31 = *plVar24;
            func_0x00529e58();
          }
          FUN_0052f1e8(&pppppcStack_c0,lVar31 + 0x28,&pppppcStack_170,&pppppcStack_1a8,ppppppcVar36,
                       ppcVar25);
        }
LAB_00528434:
        FUN_00528f48(&pppppcStack_110);
        func_0x00459128(&pppppcStack_1a8);
      }
    }
    FUN_0052549c(&pppppcStack_158);
  }
  FUN_0052aec0(param_3[0x11]);
  if (pcVar46 != (char *)0x0) {
    pppppcStack_1a8 = (char *****)0x8e385a;
    pppppcStack_1a0 = (char *****)((long)&MACH_HEADER.cpusubtype + 3);
    func_0x00529df0("missing_record_during_flush");
    pcStack_d8 = pcVar46;
    func_0x00529c6c();
    func_0x00529d00();
    func_0x00529c54();
    func_0x00529ce8();
    func_0x00529cf0();
  }
  if (*(int *)((long)param_3 + 0x134) != 0) {
    pppppcStack_1a8 = (char *****)0x8e385a;
    pppppcStack_1a0 = (char *****)((long)&MACH_HEADER.cpusubtype + 3);
    func_0x00529d38();
    func_0x00529c6c();
    func_0x00529d00();
    func_0x00529c54();
    func_0x00529ce8();
    func_0x00529cf0();
  }
  if ((int)param_3[0x27] != 0) {
    pppppcStack_1a8 = (char *****)0x8e385a;
    pppppcStack_1a0 = (char *****)((long)&MACH_HEADER.cpusubtype + 3);
    func_0x00529d38();
    func_0x00529c6c();
    func_0x00529d00();
    func_0x00529c54();
    func_0x00529ce8();
    func_0x00529cf0();
  }
  if (*(int *)((long)param_3 + 0x13c) != 0) {
    pppppcStack_1a8 = (char *****)0x8e385a;
    pppppcStack_1a0 = (char *****)((long)&MACH_HEADER.cpusubtype + 3);
    func_0x00529d38();
    func_0x00529c6c();
    func_0x00529d00();
    func_0x00529c54();
    func_0x00529ce8();
    func_0x00529cf0();
  }
  if (pcStack_2b0 != (char *)0x0) {
    pppppcStack_1a8 = (char *****)0x8e385a;
    pppppcStack_1a0 = (char *****)((long)&MACH_HEADER.cpusubtype + 3);
    func_0x00529df0("removed_dims");
    pcStack_d8 = pcStack_2b0;
    func_0x00529c6c();
    func_0x00529d00();
    func_0x00529c54();
    func_0x00529ce8();
    func_0x00529cf0();
  }
  if (puVar32 != (undefined8 *)0x0) {
    pppppcStack_1a8 = (char *****)0x8e385a;
    pppppcStack_1a0 = (char *****)((long)&MACH_HEADER.cpusubtype + 3);
    func_0x00529df0("load_sampling_rules_latency");
    pcStack_d8 = extraout_x10;
    func_0x00529c6c();
    func_0x00529e58();
    func_0x00529c54();
    func_0x00529ce8();
    func_0x00529cf0();
  }
  puVar32 = &uStack_280;
  FUN_00528b24();
  pppppcStack_110 = (char *****)0x8e385a;
  pppppcStack_108 = (char *****)((long)&MACH_HEADER.cpusubtype + 3);
  pcStack_d8 = "flush_execution_latency";
  lStack_d0 = 0x17;
  FUN_00425cb4(&pppppcStack_c0,"sampling_enabled");
  FUN_00425cb4(acStack_a8,"true");
  func_0x00483acc(&pppppcStack_158,&pppppcStack_c0,1);
  ppppppcVar36 = &pppppcStack_1a8;
  puStack_f0 = puVar32;
  FUN_00525e68(ppppppcVar36,&puStack_f0,1);
  func_0x00529e58();
  FUN_0052f110(&pppppcStack_110,&pcStack_d8,&pppppcStack_158,&pppppcStack_1a8,ppppppcVar36);
  FUN_00525320(&pppppcStack_1a8);
  FUN_00484190(&pppppcStack_158);
  func_0x00483da0(&pppppcStack_c0);
  uStack_1c0 = 2;
  pppppcStack_158 = (char *****)0x0;
  pppppcStack_150 = (char *****)0x0;
  appppcStack_148[0] = (char ****)0x0;
  uStack_1d0 = 0xffffffffffffffff;
  uStack_1c8 = 0;
  __ZNSt3__15mutex4lockEv(param_3 + 1);
  if (&pppppcStack_158 == (char ******)(param_3 + 9)) {
LAB_00528738:
    __ZNSt3__15mutex6unlockEv(param_3 + 1);
    pppppcVar9 = pppppcStack_150;
    for (ppppppcVar36 = (char ******)pppppcStack_158;
        uVar13 = ppppppcVar36 == (char ******)pppppcVar9, !(bool)uVar13;
        ppppppcVar36 = ppppppcVar36 + 5) {
      pppppcVar29 = ppppppcVar36[4];
      if (pppppcVar29 == (char *****)0x0) {
        func_0x004686dc();
        goto LAB_00528888;
      }
      (*(code *)(*pppppcVar29)[6])(pppppcVar29,auStack_258);
    }
    FUN_00528cfc(&pppppcStack_158);
    (*(code *)param_3[0x20])(param_3 + 0x20);
    func_0x00529e18();
    *(undefined4 *)(param_3 + 0x26) = extraout_w8;
    *(undefined8 *)((long)param_3 + 0x134) = 0;
    *(undefined4 *)((long)param_3 + 0x13c) = 0;
    iVar14 = (int)auStack_258;
    FUN_0052f32c(&uStack_2a0);
    uVar8 = uStack_1c8;
    uVar21 = uStack_1d0;
    FUN_00526f20();
    param_1[1] = uStack_298;
    *param_1 = uStack_2a0;
    param_1[2] = uStack_290;
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_2a0 = 0;
    *(int *)(param_1 + 3) = (int)lVar7;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar3;
    *(undefined4 *)(param_1 + 4) = uStack_220;
    *(undefined4 *)((long)param_1 + 0x24) = uStack_238;
    *(undefined4 *)(param_1 + 5) = uStack_208;
    *(int *)((long)param_1 + 0x2c) = (int)uVar8 - (int)uVar21;
    *(int *)(param_1 + 6) = iVar14 - (int)lVar30;
    FUN_0040d974(&uStack_2a0);
    func_0x00529ba8(aplStack_268);
    FUN_00530928(auStack_258);
    func_0x00529eb8(uStack_78);
    if ((bool)uVar13) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    puVar32 = (undefined8 *)param_3[9];
    puVar44 = (undefined8 *)param_3[10];
    ppppppcVar36 = (char ******)((long)puVar44 - (long)puVar32);
    if (ppppppcVar36 == (char ******)0x0) {
      FUN_00528d34(&pppppcStack_158,0);
      goto LAB_00528738;
    }
    if ((ulong)((long)ppppppcVar36 / 0x28) < 0x666666666666667) {
      ppppppcVar40 = ppppppcVar36;
      __Znwm();
      pppppcStack_c0 = appppcStack_148;
      appppcStack_148[0] = (char ****)((long)ppppppcVar40 + (long)ppppppcVar36);
      pppppcStack_b8 = (char *****)&pppppcStack_110;
      pppppcStack_b0 = (char *****)&pppppcStack_1a8;
      acStack_a8[0] = '\0';
      pppppcStack_158 = (char *****)ppppppcVar40;
      pppppcStack_150 = (char *****)ppppppcVar40;
      pppppcStack_110 = (char *****)ppppppcVar40;
      for (; pppppcStack_1a8 = (char *****)ppppppcVar40, puVar32 != puVar44; puVar32 = puVar32 + 5)
      {
        *ppppppcVar40 = (char *****)*puVar32;
        func_0x0052907c(ppppppcVar40 + 1,puVar32 + 1);
        ppppppcVar40 = (char ******)(pppppcStack_1a8 + 5);
      }
      acStack_a8[0] = '\x01';
      FUN_005290dc(&pppppcStack_c0);
      pppppcStack_150 = (char *****)ppppppcVar40;
      goto LAB_00528738;
    }
  }
  FUN_00529168();
LAB_00528888:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x52888c);
  (*pcVar12)();
}



/* Entry: 00528b24; end: 00528b6f;  */

long FUN_00528b24(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if ((char)param_1[2] == '\x01') {
    plVar1 = param_1;
    __ZNSt3__16chrono12steady_clock3nowEv();
    lVar2 = (long)plVar1 + (lVar2 - param_1[1]);
  }
  return (long)((double)lVar2 / 1000000.0);
}



/* Entry: 00528b70; end: 00528b73;  */

undefined8 * FUN_00528b70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a00988;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x28);
  (**(code **)param_1[0x21])(param_1 + 0x21);
  FUN_00529750(param_1 + 0x1f);
  func_0x00529530(param_1 + 0x1e);
  FUN_00528c8c(param_1 + 0x14);
  FUN_00529374(param_1 + 0x11);
  FUN_00528cb4(param_1 + 0xe);
  FUN_005292ec(param_1 + 0xd);
  func_0x00529264(param_1 + 0xc);
  FUN_00528cfc(param_1 + 9);
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 00528b74; end: 00528b93;  */

void FUN_00528b74(void)

{
  FUN_00529174();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00528b94; end: 00528c7f;  */

void FUN_00528b94(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    uVar4 = *param_2;
    *param_2 = 0;
    puVar9 = puVar2 + 1;
    *puVar2 = uVar4;
  }
  else {
    lVar7 = *param_1;
    lVar8 = (long)puVar2 - lVar7;
    uVar1 = (lVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_00528c80();
LAB_00528c7c:
      FUN_0040cee8();
      func_0x00529c7c();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 3);
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
                (param_1);
      return;
    }
    uVar5 = param_1[2] - lVar7;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 == 0) {
      lVar3 = 0;
    }
    else {
      if (uVar6 >> 0x3d != 0) goto LAB_00528c7c;
      lVar3 = uVar6 << 3;
      __Znwm();
    }
    puVar2 = (undefined8 *)(lVar3 + lVar8);
    uVar4 = *param_2;
    *param_2 = 0;
    puVar9 = puVar2 + 1;
    *puVar2 = uVar4;
    _memcpy(puVar2 + -(lVar8 >> 3),lVar7,lVar8);
    *param_1 = (long)(puVar2 + -(lVar8 >> 3));
    param_1[1] = (long)puVar9;
    param_1[2] = lVar3 + uVar6 * 8;
    if (lVar7 != 0) {
      func_0x00529db4();
    }
  }
  param_1[1] = (long)puVar9;
  return;
}



/* Entry: 00528c80; end: 00528c8b;  */

void FUN_00528c80(long param_1)

{
  func_0x00529c7c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
            (param_1);
  return;
}



/* Entry: 00528c8c; end: 00528cb3;  */

void FUN_00528c8c(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
            (param_1);
  return;
}



/* Entry: 00528cb4; end: 00528cfb;  */

void FUN_00528cb4(void)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x20;
  long *plVar2;
  
  func_0x00529e3c();
  if (unaff_x20 != (long *)0x0) {
    plVar2 = *(long **)(unaff_x19 + 8);
    while (plVar2 != unaff_x20) {
      plVar2 = plVar2 + -1;
      lVar1 = *plVar2;
      *plVar2 = 0;
      if (lVar1 != 0) {
        func_0x00529c9c();
      }
    }
    func_0x00529ca8();
  }
  return;
}



/* Entry: 00528cfc; end: 00528d2b;  */

long * FUN_00528cfc(long *param_1)

{
  if (*param_1 != 0) {
    FUN_00528d2c(param_1);
    func_0x00529cf8();
  }
  return param_1;
}



/* Entry: 00528d2c; end: 00528d33;  */

void FUN_00528d2c(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  while (lVar2 != lVar1) {
    func_0x00529e70();
    lVar2 = unaff_x21;
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 00528d34; end: 00528d6f;  */

void FUN_00528d34(long param_1,long param_2)

{
  long lVar1;
  long unaff_x21;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    func_0x00529e70();
    lVar1 = unaff_x21;
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 00528d70; end: 00528e3b;  */

void FUN_00528d70(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00529e3c();
  if (unaff_x20 != 0) {
    lVar1 = *(long *)(unaff_x19 + 8);
    while (lVar1 != unaff_x20) {
      lVar1 = lVar1 + -8;
      FUN_00529a08();
    }
    func_0x00529ca8();
  }
  return;
}



/* Entry: 00528e3c; end: 00528e83;  */

long FUN_00528e3c(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  func_0x00529ee4();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x30) {
    func_0x00529e88();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (unaff_x22 + 0x18,unaff_x21 + 0x18);
    unaff_x19 = unaff_x19 + 0x30;
    unaff_x22 = unaff_x22 + 0x30;
  }
  return unaff_x19;
}



/* Entry: 00528e84; end: 00528e8f;  */

void FUN_00528e84(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0054d638(0,FUN_00528e90);
    func_0x0054d6a0();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0054d638(puVar2,FUN_00528e90);
      }
      else {
        func_0x0054d5c0();
        puVar3 = puVar2;
        func_0x0054d6a0();
        *puVar2 = (ulong)puVar3;
        func_0x0054d5f8();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x0054d644();
        if (!bVar1) {
          func_0x0054d5e0();
          return;
        }
      }
      else {
        func_0x0054d5c0();
        func_0x0054d654();
      }
      func_0x0054d664();
      func_0x0054d6a0();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 00528e90; end: 00528ecb;  */

dword * FUN_00528e90(dword *param_1)

{
  dword *pdVar1;
  
  if (param_1 == (dword *)0x0) {
    pdVar1 = &segment_command_00000020.nsects;
    __Znwm();
  }
  else {
    pdVar1 = param_1;
    func_0x005510c4(param_1,0x60);
  }
  *(undefined ***)pdVar1 = &PTR_FUN_00a00a58;
  *(dword **)(pdVar1 + 2) = param_1;
  FUN_005303d8();
  return pdVar1;
}



/* Entry: 00528ecc; end: 00528ed7;  */

void FUN_00528ecc(long *param_1)

{
  func_0x00529c7c();
  if (*param_1 != 0) {
    FUN_00427b78();
    func_0x00529cf8();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 00528ed8; end: 00528f0b;  */

void FUN_00528ed8(long *param_1)

{
  if (*param_1 != 0) {
    FUN_00427b78();
    func_0x00529cf8();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 00528f0c; end: 00528f47;  */

long FUN_00528f0c(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00529ee4();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x18) {
    func_0x00529e88();
    unaff_x19 = unaff_x19 + 0x18;
  }
  return unaff_x19;
}



/* Entry: 00528f48; end: 00528f73;  */

long * FUN_00528f48(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 00528f74; end: 00528fd7;  */

void FUN_00528f74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar2 = param_2[2];
  uVar1 = param_2[1];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  uVar2 = param_2[6];
  uVar1 = param_2[5];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  param_1[5] = uVar1;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[5] = 0;
  uVar2 = param_2[9];
  uVar1 = param_2[8];
  param_1[10] = param_2[10];
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  return;
}



/* Entry: 00528fd8; end: 00528fe3;  */

long FUN_00528fd8(long param_1)

{
  func_0x00529c7c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x40);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x28);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 8);
  return param_1;
}



/* Entry: 00528fe4; end: 005290db;  */

long FUN_00528fe4(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x40);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x28);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 8);
  return param_1;
}



/* Entry: 005290dc; end: 00529123;  */

long FUN_005290dc(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      func_0x00529e70();
      lVar1 = unaff_x21;
    }
  }
  return param_1;
}



/* Entry: 00529124; end: 00529167;  */

long * FUN_00529124(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 00529168; end: 00529173;  */

undefined8 * FUN_00529168(undefined8 *param_1)

{
  func_0x00529c7c();
  *param_1 = &PTR_FUN_00a00988;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x28);
  (**(code **)param_1[0x21])(param_1 + 0x21);
  FUN_00529750(param_1 + 0x1f);
  func_0x00529530(param_1 + 0x1e);
  FUN_00528c8c(param_1 + 0x14);
  FUN_00529374(param_1 + 0x11);
  FUN_00528cb4(param_1 + 0xe);
  FUN_005292ec(param_1 + 0xd);
  func_0x00529264(param_1 + 0xc);
  FUN_00528cfc(param_1 + 9);
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 00529174; end: 005291fb;  */

undefined8 * FUN_00529174(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a00988;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x28);
  (**(code **)param_1[0x21])(param_1 + 0x21);
  FUN_00529750(param_1 + 0x1f);
  func_0x00529530(param_1 + 0x1e);
  FUN_00528c8c(param_1 + 0x14);
  FUN_00529374(param_1 + 0x11);
  FUN_00528cb4(param_1 + 0xe);
  FUN_005292ec(param_1 + 0xd);
  func_0x00529264(param_1 + 0xc);
  FUN_00528cfc(param_1 + 9);
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 005291fc; end: 00529217;  */

void FUN_005291fc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = lRam0000000000b62600;
  lRam0000000000b62600 = param_1;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 00529218; end: 00529283;  */

void FUN_00529218(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00529e3c();
  *param_1 = 0;
  if (unaff_x20 != 0) {
    if (*(char *)(unaff_x19 + 0x10) == '\x01') {
      lVar1 = *(long *)(unaff_x20 + 0x28);
      *(undefined8 *)(unaff_x20 + 0x28) = 0;
      if (lVar1 != 0) {
        func_0x00529ea0();
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x20 + 0x10);
    }
    func_0x00529db4();
  }
  return;
}



/* Entry: 00529284; end: 005292eb;  */

void FUN_00529284(void)

{
  long lVar1;
  long unaff_x19;
  long lVar2;
  long lVar3;
  
  func_0x00529f48();
  if (unaff_x19 != 0) {
    lVar2 = *(long *)(unaff_x19 + 0x40);
    *(undefined8 *)(unaff_x19 + 0x40) = 0;
    if (lVar2 != 0) {
      lVar1 = *(long *)(lVar2 + -8);
      if (lVar1 != 0) {
        lVar3 = lVar1 * -8;
        lVar1 = lVar2 + lVar1 * 8;
        do {
          lVar1 = lVar1 + -8;
          FUN_00529a08(lVar1);
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      __ZdaPv(lVar2 + -0x10);
    }
    __ZNSt3__15mutexD1Ev();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 005292ec; end: 0052930b;  */

void FUN_005292ec(void)

{
  func_0x00529ccc();
  FUN_0052930c();
  return;
}



/* Entry: 0052930c; end: 00529373;  */

void FUN_0052930c(void)

{
  long lVar1;
  long unaff_x19;
  long lVar2;
  long lVar3;
  
  func_0x00529f48();
  if (unaff_x19 != 0) {
    lVar2 = *(long *)(unaff_x19 + 0x40);
    *(undefined8 *)(unaff_x19 + 0x40) = 0;
    if (lVar2 != 0) {
      lVar1 = *(long *)(lVar2 + -8);
      if (lVar1 != 0) {
        lVar3 = lVar1 * -8;
        lVar1 = lVar2 + lVar1 * 8;
        do {
          lVar1 = lVar1 + -8;
          func_0x00529a88(lVar1);
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      __ZdaPv(lVar2 + -0x10);
    }
    __ZNSt3__15mutexD1Ev();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 00529374; end: 00529393;  */

void FUN_00529374(void)

{
  func_0x00529ccc();
  FUN_00529394();
  return;
}



/* Entry: 00529394; end: 0052948f;  */

void FUN_00529394(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *unaff_x19;
  
  func_0x00529f48();
  if (unaff_x19 == (long *)0x0) {
    return;
  }
  FUN_00529490(unaff_x19 + 0x1c,unaff_x19[0x1e]);
  lVar1 = unaff_x19[0x1c];
  unaff_x19[0x1c] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x005294c0(unaff_x19 + 0x17,unaff_x19[0x19]);
  lVar1 = unaff_x19[0x17];
  unaff_x19[0x17] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  plVar2 = (long *)unaff_x19[0x14];
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    __ZdlPv();
  }
  lVar1 = unaff_x19[0x12];
  unaff_x19[0x12] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  if (unaff_x19[0xf] != 0) {
    unaff_x19[0x10] = unaff_x19[0xf];
    __ZdlPv();
  }
  if (unaff_x19[0xe] != 0) {
    plVar2 = (long *)unaff_x19[0xd];
    plVar3 = *(long **)(unaff_x19[0xc] + 8);
    lVar1 = *plVar2;
    *(long **)(lVar1 + 8) = plVar3;
    *plVar3 = lVar1;
    unaff_x19[0xe] = 0;
    while (plVar2 != unaff_x19 + 0xc) {
      plVar3 = (long *)plVar2[1];
      FUN_00478914(plVar2 + 2);
      func_0x00529db4();
      plVar2 = plVar3;
    }
  }
  __ZNSt3__15mutexD1Ev(unaff_x19 + 4);
  if (*unaff_x19 != 0) {
    FUN_005294f0();
    func_0x00529cf8();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00529490; end: 005294ef;  */

void FUN_00529490(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  while (param_2 != 0) {
    func_0x00529f60();
    func_0x00529a88();
    func_0x00529ce0();
    param_2 = unaff_x20;
  }
  return;
}



/* Entry: 005294f0; end: 005294f7;  */

void FUN_005294f0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x48;
    FUN_00478914();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 005294f8; end: 0052954f;  */

void FUN_005294f8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x48;
    FUN_00478914();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 00529550; end: 00529577;  */

void FUN_00529550(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_00529578();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 00529578; end: 005295eb;  */

undefined8 FUN_00529578(void)

{
  undefined8 unaff_x19;
  
  func_0x00529e30();
  func_0x0052959c();
  func_0x00529ccc();
  FUN_00529738();
  return unaff_x19;
}



/* Entry: 005295ec; end: 00529603;  */

void FUN_005295ec(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x0052962c(lVar1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar1);
    return;
  }
  return;
}



/* Entry: 00529604; end: 0052969f;  */

void FUN_00529604(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x0052962c(param_2 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_2);
  return;
}



/* Entry: 005296a0; end: 005296b7;  */

void FUN_005296a0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_00463fcc(lVar1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar1);
    return;
  }
  return;
}



/* Entry: 005296b8; end: 005296ff;  */

void FUN_005296b8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_00463fcc(param_2 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_2);
  return;
}



/* Entry: 00529700; end: 00529717;  */

void FUN_00529700(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 00529718; end: 00529737;  */

void FUN_00529718(void)

{
  func_0x00529ccc();
  FUN_00529738();
  return;
}



/* Entry: 00529738; end: 0052974f;  */

void FUN_00529738(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 00529750; end: 0052984b;  */

void FUN_00529750(void)

{
  func_0x00529ccc();
  func_0x00529770();
  return;
}



/* Entry: 0052984c; end: 00529863;  */

void FUN_0052984c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 00529864; end: 005298db;  */

undefined8 FUN_00529864(void)

{
  undefined8 unaff_x19;
  
  func_0x00529e30();
  func_0x00529888();
  func_0x00529ccc();
  FUN_005298dc();
  return unaff_x19;
}



/* Entry: 005298dc; end: 005298f3;  */

void FUN_005298dc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 005298f4; end: 0052996b;  */

undefined8 FUN_005298f4(void)

{
  undefined8 unaff_x19;
  
  func_0x00529e30();
  func_0x00529918();
  func_0x00529ccc();
  FUN_0052996c();
  return unaff_x19;
}



/* Entry: 0052996c; end: 005299b3;  */

void FUN_0052996c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 005299b4; end: 005299d3;  */

void FUN_005299b4(void)

{
  func_0x00529f6c();
  FUN_005299d4();
  return;
}



/* Entry: 005299d4; end: 005299eb;  */

void FUN_005299d4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_00484190(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 005299ec; end: 00529a07;  */

void FUN_005299ec(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_00484190(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00529a08; end: 00529a47;  */

void FUN_00529a08(void)

{
  func_0x00529ccc();
  FUN_005299d4();
  return;
}



/* Entry: 00529a48; end: 00529a5f;  */

void FUN_00529a48(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x00459128(lVar1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar1);
    return;
  }
  return;
}



/* Entry: 00529a60; end: 00529aa7;  */

void FUN_00529a60(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00459128(param_2 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_2);
  return;
}



/* Entry: 00529aa8; end: 00529ab3;  */

long * FUN_00529aa8(long *param_1)

{
  long lVar1;
  
  func_0x00529c7c();
  if ((ulong)param_1 >> 0x3d == 0) {
    func_0x00529e94();
    return param_1;
  }
  FUN_0040cee8();
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -8;
    FUN_00529a08();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 00529ab4; end: 00529b27;  */

long * FUN_00529ab4(long *param_1)

{
  long lVar1;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    func_0x00529e94();
    return param_1;
  }
  FUN_0040cee8();
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -8;
    FUN_00529a08();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 00529b28; end: 00529b33;  */

long * FUN_00529b28(long *param_1)

{
  long lVar1;
  
  func_0x00529c7c();
  if ((ulong)param_1 >> 0x3d == 0) {
    func_0x00529e94();
    return param_1;
  }
  FUN_0040cee8();
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -8;
    func_0x00529a88();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 00529b34; end: 00529c1f;  */

long * FUN_00529b34(long *param_1)

{
  long lVar1;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    func_0x00529e94();
    return param_1;
  }
  FUN_0040cee8();
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -8;
    func_0x00529a88();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 00529c20; end: 00529c37;  */

void FUN_00529c20(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_00528fe4(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 00529c38; end: 00529c53;  */

void FUN_00529c38(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_00528fe4(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00529c54; end: 00529f93;  */

void FUN_00529c54(long param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x9;
  long unaff_x29;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  long in_stack_000001e8;
  long in_stack_000001f0;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [48];
  
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0052f564(&stack0x00000198,in_stack_00000198,in_stack_000001a0);
  }
  FUN_0052f418(param_1 + 0x48);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0052f564();
  }
  FUN_0052f418(param_1 + 0x50);
  lVar1 = *(long *)(unaff_x29 + -0xa8);
  for (lVar2 = *(long *)(unaff_x29 + -0xb0); lVar2 != lVar1; lVar2 = lVar2 + 0x30) {
    FUN_0052bf68(auStack_60,lVar2,lVar2 + 0x18);
    FUN_0052f1e0(auStack_80,param_1 + 0x10,auStack_60);
    func_0x00483da0(auStack_60);
  }
  func_0x0052f534();
  lVar2 = in_stack_000001e8;
  while (lVar2 != in_stack_000001f0) {
    func_0x0052f548();
    lVar2 = extraout_x8;
    in_stack_000001f0 = extraout_x9;
  }
  return;
}



/* Entry: 00529f94; end: 0052a037;  */

int FUN_00529f94(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  int *unaff_x19;
  int *apiStack_38 [2];
  int iStack_24;
  
  FUN_0052aa48();
  piVar2 = unaff_x19 + 0x12;
  FUN_0052a038(piVar2,param_2);
  apiStack_38[0] = piVar2;
  FUN_0052a188(unaff_x19 + 0x18,apiStack_38);
  iStack_24 = *unaff_x19 +
              (int)((ulong)(*(long *)(unaff_x19 + 0x1a) - *(long *)(unaff_x19 + 0x18)) >> 3) + -1;
  func_0x0052aa64();
  func_0x0052a080(unaff_x19 + 0x1e,apiStack_38,&iStack_24);
  iVar1 = iStack_24;
  func_0x0052aa5c();
  return iVar1;
}



/* Entry: 0052a038; end: 0052a0ff;  */

long * FUN_0052a038(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_1;
  FUN_0052a3e0(param_1,0,0,param_2);
  lVar2 = *param_1;
  *plVar1 = lVar2;
  plVar1[1] = (long)param_1;
  *(long **)(lVar2 + 8) = plVar1;
  *param_1 = (long)plVar1;
  param_1[2] = param_1[2] + 1;
  return plVar1 + 2;
}



/* Entry: 0052a100; end: 0052a187;  */

ulong FUN_0052a100(void)

{
  long lVar1;
  long unaff_x19;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_40 [16];
  
  FUN_0052aa48();
  func_0x0052aa64();
  lVar1 = unaff_x19 + 0x78;
  FUN_0052a968(lVar1,auStack_40);
  if (lVar1 == 0) {
    uVar2 = 0;
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar1 + 0x20) & 0xffffff00;
    uVar4 = *(uint *)(lVar1 + 0x20) & 0xff;
    uVar2 = 0x100000000;
  }
  func_0x0052aa5c();
  return uVar2 | (uVar3 | uVar4);
}



/* Entry: 0052a188; end: 0052a1cb;  */

undefined8 * FUN_0052a188(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar2 = puVar1 + 1;
    *puVar1 = *param_2;
  }
  else {
    puVar2 = param_1;
    FUN_0052a1cc();
  }
  param_1[1] = puVar2;
  return puVar2 + -1;
}



/* Entry: 0052a1cc; end: 0052a27b;  */

long FUN_0052a1cc(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_1;
  FUN_0052a27c(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar3 = *param_1;
  lVar1 = param_1[1];
  plStack_58 = param_1 + 2;
  plStack_38 = plStack_58;
  if (plVar2 == (long *)0x0) {
    plStack_58 = (long *)0x0;
  }
  else {
    FUN_0052a350();
  }
  puStack_50 = (undefined8 *)((long)plStack_58 + (lVar1 - lVar3));
  plStack_40 = plStack_58 + (long)plVar2;
  puStack_48 = puStack_50 + 1;
  *puStack_50 = *param_2;
  FUN_0052a2bc(param_1,&plStack_58);
  lVar3 = param_1[1];
  FUN_0052a390(&plStack_58);
  return lVar3;
}



/* Entry: 0052a27c; end: 0052a2bb;  */

undefined8 * FUN_0052a27c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    puVar2 = (undefined8 *)(param_1[2] - *param_1 >> 2);
    if (puVar2 <= param_2) {
      puVar2 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      puVar2 = (undefined8 *)0x1fffffffffffffff;
    }
    return puVar2;
  }
  FUN_0052a33c();
  puVar3 = (undefined8 *)(param_2[1] - (param_1[1] - *param_1));
  puVar2 = puVar3;
  _memcpy(puVar3);
  param_2[1] = puVar3;
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
  return puVar2;
}


