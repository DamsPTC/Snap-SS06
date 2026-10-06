/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0064293c; end: 00642a17;  */

void FUN_0064293c(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  code *extraout_x8;
  long unaff_x23;
  
  func_0x00642d60();
  if (param_1 != (long *)0x0) {
    func_0x00642cd4(*(undefined8 *)(*param_1 + 0x20));
    (*extraout_x8)();
  }
  if (*(long **)(unaff_x23 + 0x10) != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(unaff_x23 + 0x10) + 0x20);
    func_0x00642cd4();
                    /* WARNING: Could not recover jumptable at 0x00642998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 00642a18; end: 00642a5f;  */

void FUN_00642a18(undefined8 param_1)

{
  func_0x00642cf4();
  func_0x00642d34(param_1,0x30);
  return;
}



/* Entry: 00642a60; end: 00642aef;  */

void FUN_00642a60(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  code *extraout_x8;
  
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    func_0x00642d44(*(undefined8 *)(**(long **)(param_1 + 8) + 0x40));
    (*extraout_x8)();
  }
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x10) + 0x40);
    func_0x00642d44();
                    /* WARNING: Could not recover jumptable at 0x00642ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 00642af0; end: 00642c07;  */

void FUN_00642af0(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  code *extraout_x8;
  long unaff_x23;
  
  func_0x00642d60();
  if (param_1 != (long *)0x0) {
    func_0x00642cd4(*(undefined8 *)(*param_1 + 0x48));
    (*extraout_x8)();
  }
  if (*(long **)(unaff_x23 + 0x10) != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(unaff_x23 + 0x10) + 0x48);
    func_0x00642cd4();
                    /* WARNING: Could not recover jumptable at 0x00642b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 00642c08; end: 00642cd3;  */

void FUN_00642c08(long param_1)

{
  code *extraout_x9;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00642d14();
    (*extraout_x9)();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00642d14();
                    /* WARNING: Could not recover jumptable at 0x00642cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 00642cd4; end: 00642d8f;  */

void FUN_00642cd4(void)

{
  return;
}



/* Entry: 00642d90; end: 00642dbf;  */

void FUN_00642d90(long *param_1)

{
  if ((param_1[1] != 0) && (*param_1 != 0)) {
    FUN_00642dc0();
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}



/* Entry: 00642dc0; end: 0064303f;  */

/* WARNING: Removing unreachable block (ram,0x00643014) */

void FUN_00642dc0(long *param_1,long param_2)

{
  long *plVar1;
  long **pplVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  
  pplVar2 = &plStack_80;
  plStack_80 = (long *)0x0;
  plStack_78 = (long *)0x0;
  lStack_70 = 0;
  __ZNSt3__15mutex4lockEv(param_1 + 0xb);
  plVar1 = plStack_78;
  plVar7 = (long *)param_1[6];
  plVar8 = plVar7;
  for (plVar3 = (long *)param_1[5]; plVar10 = plVar8, plVar3 != plVar8; plVar3 = plVar3 + 2) {
    plVar4 = (long *)*plVar3;
    if (*plVar4 == param_2) {
      do {
        plVar9 = plVar8;
        plVar8 = plVar9 + -2;
        plVar10 = plVar3;
        if (plVar8 == plVar3) goto LAB_00642e50;
      } while (*(long *)*plVar8 == param_2);
      lVar5 = plVar3[1];
      lVar6 = plVar9[-1];
      *plVar3 = *plVar8;
      plVar3[1] = lVar6;
      *plVar8 = (long)plVar4;
      plVar9[-1] = lVar5;
    }
  }
LAB_00642e50:
  lVar5 = (long)plVar7 - (long)plVar10;
  lVar6 = lVar5 >> 4;
  if (0 < lVar6) {
    if (lStack_70 - (long)plStack_78 < lVar5) {
      FUN_00643b7c(&plStack_80,lVar6 + ((long)plStack_78 - (long)plStack_80 >> 4));
      FUN_00643c44(&plStack_68,pplVar2,-(long)plStack_80 >> 4,&lStack_70);
      lVar6 = (long)plStack_58 + lVar5;
      plVar3 = plVar10;
      for (; lVar5 != 0; lVar5 = lVar5 + -0x10) {
        lVar11 = *plVar3;
        plStack_58[1] = plVar3[1];
        *plStack_58 = lVar11;
        *plVar3 = 0;
        plVar3[1] = 0;
        plVar3 = plVar3 + 2;
        plStack_58 = plStack_58 + 2;
      }
      plStack_58 = (long *)lVar6;
      _memcpy(lVar6,0,plStack_78);
      plStack_58 = (long *)((long)plStack_58 + (long)plStack_78);
      plStack_78 = (long *)0x0;
      plVar3 = (long *)((long)plStack_60 + (long)plStack_80);
      _memcpy(plVar3,plStack_80,-(long)plStack_80);
      lVar5 = lStack_70;
      lStack_70 = lStack_50;
      plStack_78 = plStack_58;
      plStack_58 = plStack_80;
      lStack_50 = lVar5;
      plStack_68 = plStack_80;
      plStack_60 = plStack_80;
      plStack_80 = plVar3;
      FUN_00643ccc(&plStack_68);
    }
    else {
      lVar11 = (long)plStack_78 >> 4;
      if (lVar11 < lVar6) {
        plVar3 = (long *)((long)plStack_78 + (long)plVar10);
        for (; plVar3 != plVar7; plVar3 = plVar3 + 2) {
          lVar6 = *plVar3;
          plStack_78[1] = plVar3[1];
          *plStack_78 = lVar6;
          *plVar3 = 0;
          plVar3[1] = 0;
          plStack_78 = plStack_78 + 2;
        }
        lVar6 = lVar11;
        if (lVar11 < 1) goto LAB_00642f7c;
      }
      func_0x00643d34(&plStack_80,0,plVar1,lVar5);
      FUN_00643dd8(plVar10,lVar6,0);
    }
  }
LAB_00642f7c:
  if (plVar10 == (long *)param_1[6]) {
    plVar3 = (long *)param_1[5];
  }
  else {
    FUN_00643a30(param_1 + 5,plVar10);
    plVar3 = (long *)param_1[5];
    plVar10 = (long *)param_1[6];
  }
  if (plVar3 == plVar10) {
    (**(code **)(*param_1 + 0x10))(param_1,0);
  }
  func_0x00644dbc();
  plVar3 = plStack_78;
  for (plVar7 = plStack_80; plVar7 != plVar3; plVar7 = plVar7 + 2) {
    lVar5 = *plVar7;
    __ZNSt3__15mutex4lockEv(lVar5 + 0x58);
    *(undefined8 *)*plVar7 = 0;
    __ZNSt3__15mutex6unlockEv(lVar5 + 0x58);
  }
  FUN_006439c0(&plStack_80);
  return;
}



/* Entry: 00643040; end: 006430f7;  */

undefined8 * FUN_00643040(undefined8 *param_1,long param_2,undefined4 param_3)

{
  ulong uVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_00a0c750;
  uVar1 = *(ulong *)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x17);
  }
  if (uVar1 == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 1,param_2);
  }
  else {
    lVar2 = param_2;
    __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5rfindEcm
              (param_2,0x2f,0xffffffffffffffff);
    FUN_00479db4(param_1 + 1,param_2,lVar2 + 1,0xffffffffffffffff);
  }
  *(undefined4 *)(param_1 + 4) = param_3;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0x32aaaba7;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  return param_1;
}



/* Entry: 006430f8; end: 00643143;  */

undefined8 * FUN_006430f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0c750;
  __ZNSt3__15mutexD1Ev(param_1 + 0xb);
  func_0x00459128(param_1 + 8);
  FUN_006439c0(param_1 + 5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
  return param_1;
}



/* Entry: 00643144; end: 00643147;  */

undefined8 * FUN_00643144(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0c750;
  __ZNSt3__15mutexD1Ev(param_1 + 0xb);
  func_0x00459128(param_1 + 8);
  FUN_006439c0(param_1 + 5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
  return param_1;
}



/* Entry: 00643148; end: 0064315b;  */

void FUN_00643148(void)

{
  FUN_006430f8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0064315c; end: 006431f7;  */

void FUN_0064315c(long *param_1,long param_2,undefined8 *param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code **ppcVar3;
  long extraout_x8;
  long *extraout_x8_00;
  undefined8 extraout_x9;
  long extraout_x9_00;
  undefined8 *puVar4;
  long *plVar5;
  long *aplStack_e0 [2];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_28;
  
  puVar2 = &uStack_70;
  func_0x00644df0();
  uStack_68 = param_3[1];
  uStack_70 = *param_3;
  uStack_60 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  pcStack_58 = FUN_006449ac;
  ppuStack_50 = &PTR_DAT_00a0c790;
  ppcVar3 = &pcStack_58;
  uStack_48 = param_5;
  uStack_28 = extraout_x9;
  FUN_006431f8();
  func_0x00644f3c(ppuStack_50);
  func_0x00644ea0();
  func_0x00644df0(uStack_28);
  if (extraout_x9_00 == extraout_x8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00644f5c(&pcStack_58);
  func_0x00644ea0();
  func_0x00644e44();
  uStack_d0 = param_6;
  uStack_c8 = param_7;
  __ZNSt3__15mutex4lockEv(param_1 + 0xb);
  puVar1 = (undefined8 *)param_1[5];
  puVar4 = puVar1;
  do {
    if (puVar4 == (undefined8 *)param_1[6]) {
      if (puVar1 == (undefined8 *)param_1[6]) {
        (**(code **)(*param_1 + 0x10))(param_1,1);
      }
      FUN_00643328(aplStack_e0);
      *aplStack_e0[0] = param_2;
      func_0x00643a64(aplStack_e0[0] + 1,puVar2);
      *(undefined4 *)(aplStack_e0[0] + 4) = param_4;
      FUN_00643348(aplStack_e0[0] + 5,ppcVar3);
      FUN_00643370(aplStack_e0[0] + 0x13,&uStack_d0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (aplStack_e0[0] + 0x16,param_1 + 1);
      *(int *)(aplStack_e0[0] + 0x19) = (int)param_1[4];
      FUN_00643aa4(param_1 + 5,aplStack_e0);
      *extraout_x8_00 = param_2;
      extraout_x8_00[1] = (long)param_1;
      func_0x00644f1c();
      goto LAB_006432ec;
    }
    plVar5 = (long *)*puVar4;
    puVar4 = puVar4 + 2;
  } while (*plVar5 != param_2);
  *extraout_x8_00 = 0;
  extraout_x8_00[1] = 0;
LAB_006432ec:
  func_0x00644dbc();
  return;
}



/* Entry: 006431f8; end: 00643327;  */

void FUN_006431f8(long *param_1,long *param_2,long param_3,undefined8 param_4,undefined4 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *aplStack_70 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_60 = param_7;
  uStack_58 = param_8;
  __ZNSt3__15mutex4lockEv(param_2 + 0xb);
  puVar1 = (undefined8 *)param_2[5];
  puVar2 = puVar1;
  do {
    if (puVar2 == (undefined8 *)param_2[6]) {
      if (puVar1 == (undefined8 *)param_2[6]) {
        (**(code **)(*param_2 + 0x10))(param_2,1);
      }
      FUN_00643328(aplStack_70);
      *aplStack_70[0] = param_3;
      func_0x00643a64(aplStack_70[0] + 1,param_4);
      *(undefined4 *)(aplStack_70[0] + 4) = param_5;
      FUN_00643348(aplStack_70[0] + 5,param_6);
      FUN_00643370(aplStack_70[0] + 0x13,&uStack_60);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (aplStack_70[0] + 0x16,param_2 + 1);
      *(int *)(aplStack_70[0] + 0x19) = (int)param_2[4];
      FUN_00643aa4(param_2 + 5,aplStack_70);
      *param_1 = param_3;
      param_1[1] = (long)param_2;
      func_0x00644f1c();
      goto LAB_006432ec;
    }
    plVar3 = (long *)*puVar2;
    puVar2 = puVar2 + 2;
  } while (*plVar3 != param_3);
  *param_1 = 0;
  param_1[1] = 0;
LAB_006432ec:
  func_0x00644dbc();
  return;
}



/* Entry: 00643328; end: 00643347;  */

void FUN_00643328(void)

{
  undefined1 uStack_11;
  
  FUN_00644b80(&uStack_11);
  return;
}



/* Entry: 00643348; end: 0064336f;  */

undefined8 * FUN_00643348(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x0045e3a0(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 00643370; end: 00643397;  */

void FUN_00643370(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_2[1];
  uStack_20 = *param_2;
  FUN_00643a98(param_1,&uStack_20);
  return;
}



/* Entry: 00643398; end: 00643473;  */

void FUN_00643398(long *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  lVar3 = (long)*(char *)((long)param_1 + 0xaf);
  if (lVar3 < 0) {
    lVar3 = param_1[0x14];
  }
  if (lVar3 != 0) {
    plVar2 = param_1;
    FUN_006428a8();
    lVar1 = param_1[0x19];
    lVar3 = (long)*(char *)((long)param_1 + 199);
    if (lVar3 < 0) {
      plVar4 = (long *)param_1[0x16];
      lVar3 = param_1[0x17];
    }
    else {
      plVar4 = param_1 + 0x16;
    }
    lVar5 = (long)*(char *)((long)param_1 + 0xaf);
    if (lVar5 < 0) {
      plVar6 = (long *)param_1[0x13];
      lVar5 = param_1[0x14];
    }
    else {
      plVar6 = param_1 + 0x13;
    }
    FUN_00716c1c();
    (**(code **)(lRam0000000000b6c688 + 0x40))
              (0xb6c688,(int)lVar1,plVar4,lVar3,plVar6,lVar5,(long)plVar2 - param_3);
  }
  __ZNSt3__15mutex4lockEv(param_1 + 0xb);
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,*param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)(param_1 + 0xb);
  return;
}



/* Entry: 00643474; end: 006434ef;  */

void FUN_00643474(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [24];
  
  func_0x00644d68();
  func_0x00460c3c(auStack_48,param_2);
  FUN_006434f0();
  func_0x00459128(auStack_48);
  func_0x00644dbc();
  return;
}



/* Entry: 006434f0; end: 0064378f;  */

void FUN_006434f0(long param_1,qword *param_2,int param_3,undefined8 param_4)

{
  qword *pqVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  qword qVar8;
  char *pcVar9;
  long lVar10;
  undefined8 *puVar11;
  qword qVar12;
  long *plVar13;
  code *pcVar14;
  ulong uVar15;
  undefined8 *puVar16;
  qword qVar17;
  long lVar18;
  qword qVar19;
  qword *pqStack_80;
  char *pcStack_78;
  qword *pqStack_70;
  char *pcStack_68;
  
  qVar12 = *param_2;
  qVar19 = param_2[1];
  if (qVar12 != qVar19) {
    FUN_00643eb0(qVar12,qVar19,LZCOUNT((long)(qVar19 - qVar12) / 0x18) << 1 ^ 0x7e,1);
    qVar12 = *param_2;
    qVar19 = param_2[1];
  }
  if (qVar12 != qVar19) {
    do {
      qVar17 = qVar12;
      qVar12 = qVar17 + 0x18;
      if (qVar12 == qVar19) goto LAB_006435b4;
      qVar8 = qVar17;
      FUN_00459c38(qVar17,qVar12);
    } while ((int)qVar8 == 0);
    while (qVar12 = qVar12 + 0x18, qVar12 != qVar19) {
      qVar8 = qVar17;
      FUN_00459c38(qVar17,qVar12);
      if ((qVar8 & 1) == 0) {
        qVar17 = qVar17 + 0x18;
        FUN_004575b8(qVar17,qVar12);
      }
    }
    qVar19 = qVar17 + 0x18;
  }
LAB_006435b4:
  qVar12 = param_2[1];
  if (qVar19 != qVar12) {
    FUN_00644958(&pqStack_70,qVar12,qVar12,qVar19);
    func_0x00459154(param_2);
  }
  pcVar9 = segment_command_00000020.segname + 8;
  __Znwm();
  *(qword *)(pcVar9 + 8) = 0;
  *(qword *)(pcVar9 + 0x10) = 0;
  *(undefined ***)pcVar9 = &PTR_DAT_00a0c808;
  qVar19 = param_2[1];
  qVar12 = *param_2;
  *(qword *)(pcVar9 + 0x28) = param_2[2];
  pqStack_80 = (qword *)(pcVar9 + 0x18);
  *(qword *)(pcVar9 + 0x20) = qVar19;
  *pqStack_80 = qVar12;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  plVar13 = *(long **)(param_1 + 0x28);
  plVar3 = *(long **)(param_1 + 0x30);
  pcStack_78 = pcVar9;
  do {
    if (plVar13 == plVar3) {
      FUN_00427bc8(&pqStack_80);
      return;
    }
    puVar16 = *(undefined8 **)(*plVar13 + 8);
    puVar4 = *(undefined8 **)(*plVar13 + 0x10);
    while( true ) {
      if (puVar16 == puVar4) goto LAB_00643744;
      uVar2 = puVar16[1];
      puVar11 = (undefined8 *)*puVar16;
      if (-1 < (char)*(byte *)((long)puVar16 + 0x17)) {
        uVar2 = (ulong)*(byte *)((long)puVar16 + 0x17);
        puVar11 = puVar16;
      }
      pcVar9 = "*";
      func_0x00465a14("*",1,puVar11,uVar2);
      if (((ulong)pcVar9 & 1) != 0) break;
      qVar12 = pqStack_80[1];
      qVar19 = *pqStack_80;
      uVar2 = (long)(qVar12 - *pqStack_80) / 0x18;
      while (qVar17 = qVar19, uVar2 != 0) {
        uVar15 = uVar2 >> 1;
        lVar18 = qVar17 + uVar15 * 0x18;
        lVar10 = lVar18;
        func_0x004278bc(lVar18,puVar16);
        qVar19 = lVar18 + 0x18;
        uVar2 = uVar2 + (uVar2 >> 1 ^ 0xffffffffffffffff);
        if (-1 < (char)lVar10) {
          qVar19 = qVar17;
          uVar2 = uVar15;
        }
      }
      if ((qVar12 != qVar17) &&
         (puVar11 = puVar16, func_0x004278bc(puVar16,qVar17), ((uint)puVar11 >> 7 & 1) == 0)) break;
      puVar16 = puVar16 + 3;
    }
    uVar5 = *(uint *)(*plVar13 + 0x20);
    if (param_3 == 0) {
      if (1 < uVar5 - 1) goto LAB_00643744;
    }
    else if ((uVar5 & 0xfffffffd) != 0) goto LAB_00643744;
    pcVar14 = *(code **)(*plVar13 + 0x28);
    pcStack_68 = pcStack_78;
    pqStack_70 = pqStack_80;
    if (pcStack_78 != (char *)0x0) {
      pqVar1 = (qword *)(pcStack_78 + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pqVar1,0x10);
        if (bVar7) {
          *pqVar1 = *pqVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    (*pcVar14)(plVar13,&pqStack_70,param_4);
    FUN_00427bc8(&pqStack_70);
LAB_00643744:
    plVar13 = plVar13 + 2;
  } while( true );
}



/* Entry: 00643790; end: 006437c3;  */

void FUN_00643790(undefined8 param_1,undefined8 param_2)

{
  long unaff_x19;
  
  func_0x00644d68();
  FUN_00479520(unaff_x19 + 0x40,param_2);
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)(unaff_x19 + 0x58);
  return;
}



/* Entry: 006437c4; end: 00643813;  */

void FUN_006437c4(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00644d68();
  lVar1 = *(long *)(unaff_x19 + 0x40);
  if (lVar1 != *(long *)(unaff_x19 + 0x48)) {
    if (*(char *)(lVar1 + 0x17) < '\0') {
      if (*(long *)(lVar1 + 8) == 0) goto LAB_00643800;
    }
    else if (*(char *)(lVar1 + 0x17) == '\0') goto LAB_00643800;
    FUN_00643814();
  }
LAB_00643800:
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)(unaff_x19 + 0x58);
  return;
}



/* Entry: 00643814; end: 0064386f;  */

void FUN_00643814(long param_1)

{
  long lVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = *(undefined8 *)(param_1 + 0x48);
  uStack_40 = *(undefined8 *)(param_1 + 0x40);
  uStack_30 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  lVar1 = param_1;
  FUN_00716c1c();
  FUN_006434f0(param_1,&uStack_40,1,lVar1);
  func_0x00644ea0();
  return;
}



/* Entry: 00643870; end: 0064389b;  */

void FUN_00643870(void)

{
  long unaff_x19;
  
  func_0x00644d68();
  FUN_0064389c(unaff_x19 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)(unaff_x19 + 0x58);
  return;
}



/* Entry: 0064389c; end: 006438df;  */

undefined8 * FUN_0064389c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar2 = puVar1 + 3;
    puVar1[2] = 0;
  }
  else {
    puVar2 = param_1;
    FUN_00643e1c();
  }
  param_1[1] = puVar2;
  return puVar2 + -3;
}



/* Entry: 006438e0; end: 0064396f;  */

void FUN_006438e0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  ulong uVar4;
  
  func_0x00644d68();
  lVar2 = *(long *)(unaff_x19 + 0x40);
  lVar1 = *(long *)(unaff_x19 + 0x48);
  if (lVar2 != lVar1) {
    uVar4 = (lVar1 - lVar2) / 0x18 & 0xffffffff;
    lVar2 = lVar2 + uVar4 * 0x18;
    do {
      if ((int)uVar4 < 1) goto LAB_0064394c;
      lVar3 = (long)*(char *)(lVar2 + -1);
      if (lVar3 < 0) {
        lVar3 = *(long *)(lVar2 + -0x10);
      }
      lVar2 = lVar2 + -0x18;
      uVar4 = uVar4 - 1;
    } while (lVar3 != 0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar2,lVar1 + -0x18);
    FUN_00643970((long *)(unaff_x19 + 0x40));
    if (uVar4 == 0) {
LAB_0064394c:
      FUN_00643814();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)(unaff_x19 + 0x58);
  return;
}



/* Entry: 00643970; end: 0064397b;  */

void FUN_00643970(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0045ae2c(param_1,*(long *)(param_1 + 8) + -0x18);
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 0064397c; end: 006439bb;  */

void FUN_0064397c(void)

{
  long lVar1;
  long unaff_x19;
  long lVar2;
  
  func_0x00644d68();
  do {
    lVar1 = *(long *)(unaff_x19 + 0x48);
    if (*(long *)(unaff_x19 + 0x40) == lVar1) break;
    lVar2 = (long)*(char *)(lVar1 + -1);
    if (lVar2 < 0) {
      lVar2 = *(long *)(lVar1 + -0x10);
    }
    FUN_00643970(unaff_x19 + 0x40);
  } while (lVar2 != 0);
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)(unaff_x19 + 0x58);
  return;
}



/* Entry: 006439bc; end: 006439bf;  */

void FUN_006439bc(void)

{
  return;
}



/* Entry: 006439c0; end: 00643a27;  */

undefined8 FUN_006439c0(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x006439ec(&uStack_28);
  return param_1;
}



/* Entry: 00643a28; end: 00643a2f;  */

void FUN_00643a28(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00644e94(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x00427c20();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 00643a30; end: 00643a97;  */

void FUN_00643a30(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00644e94();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x00427c20();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 00643a98; end: 00643aa3;  */

void FUN_00643a98(undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00779b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm_009989c8)
            (param_1,*param_2,param_2[1]);
  return;
}



/* Entry: 00643aa4; end: 00643aeb;  */

undefined8 * FUN_00643aa4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar3 = *param_2;
    puVar2 = puVar1 + 2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar3;
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    puVar2 = param_1;
    FUN_00643aec();
  }
  param_1[1] = puVar2;
  return puVar2 + -2;
}



/* Entry: 00643aec; end: 00643b7b;  */

long FUN_00643aec(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  plVar1 = param_1;
  FUN_00643b7c(param_1,(param_1[1] - *param_1 >> 4) + 1);
  FUN_00643c44(auStack_48,plVar1,param_1[1] - *param_1 >> 4,param_1 + 2);
  uVar3 = *param_2;
  puStack_38[1] = param_2[1];
  *puStack_38 = uVar3;
  *param_2 = 0;
  param_2[1] = 0;
  puStack_38 = puStack_38 + 2;
  FUN_00643bbc(param_1,auStack_48);
  lVar2 = param_1[1];
  FUN_00643ccc(auStack_48);
  return lVar2;
}



/* Entry: 00643b7c; end: 00643bbb;  */

ulong FUN_00643b7c(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar3;
  
  if (param_2 >> 0x3c == 0) {
    uVar2 = param_1[2] - *param_1 >> 3;
    if (uVar2 <= param_2) {
      uVar2 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar2 = 0xfffffffffffffff;
    }
    return uVar2;
  }
  FUN_00643c30();
  func_0x00644e94();
  uVar3 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  uVar2 = uVar3;
  _memcpy(uVar3);
  unaff_x19[1] = uVar3;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return uVar2;
}



/* Entry: 00643bbc; end: 00643c2f;  */

void FUN_00643bbc(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x00644e94();
  lVar2 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  _memcpy(lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 00643c30; end: 00643c43;  */

long * FUN_00643c30(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)&UNK_0090fe90;
  FUN_0040d774();
  plVar2[3] = 0;
  plVar2[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00643c8c();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *plVar2 = param_4;
  plVar2[1] = lVar1;
  plVar2[2] = lVar1;
  plVar2[3] = param_4 + param_2 * 0x10;
  return plVar2;
}



/* Entry: 00643c44; end: 00643caf;  */

long * FUN_00643c44(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00643c8c();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 00643cb0; end: 00643ccb;  */

long * FUN_00643cb0(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(plVar1);
    return plVar1;
  }
  FUN_0040cee8();
  FUN_00643cf8();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 00643ccc; end: 00643cf7;  */

long * FUN_00643ccc(long *param_1)

{
  FUN_00643cf8();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 00643cf8; end: 00643cff;  */

void FUN_00643cf8(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00644e94(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x00427c20();
  }
  return;
}



/* Entry: 00643d00; end: 00643dd7;  */

void FUN_00643d00(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00644e94();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x00427c20();
  }
  return;
}



/* Entry: 00643dd8; end: 00643e1b;  */

void FUN_00643dd8(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_1 + param_2 * 0x10;
  for (; param_1 != lVar1; param_1 = param_1 + 0x10) {
    func_0x00643da0(param_3,param_1);
    param_3 = param_3 + 0x10;
  }
  return;
}



/* Entry: 00643e1c; end: 00643eaf;  */

long FUN_00643e1c(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  plVar1 = param_1;
  FUN_0045a5ac(param_1,(param_1[1] - *param_1) / 0x18 + 1);
  FUN_0045a67c(auStack_48,plVar1,(param_1[1] - *param_1) / 0x18,param_1 + 2);
  *puStack_38 = 0;
  puStack_38[1] = 0;
  puStack_38[2] = 0;
  puStack_38 = puStack_38 + 3;
  FUN_0045a5fc(param_1,auStack_48);
  lVar2 = param_1[1];
  func_0x00427834(auStack_48);
  return lVar2;
}



/* Entry: 00643eb0; end: 006444f3;  */

/* WARNING: Possible PIC construction at 0x00644614: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00644618) */
/* WARNING: Removing unreachable block (ram,0x00644624) */
/* WARNING: Removing unreachable block (ram,0x00644650) */
/* WARNING: Removing unreachable block (ram,0x00644658) */
/* WARNING: Removing unreachable block (ram,0x00644660) */
/* WARNING: Removing unreachable block (ram,0x00644664) */

void FUN_00643eb0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 **ppuVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar15;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar16;
  undefined8 *unaff_x24;
  long lVar17;
  ulong uVar18;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar19;
  undefined1 auStack_170 [128];
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  ppuVar4 = &puStack_b0;
  func_0x00644e94();
LAB_00643ee0:
  puVar13 = unaff_x19 + -3;
  puStack_a8 = unaff_x19 + -6;
  puStack_b0 = unaff_x19 + -9;
  puVar10 = unaff_x20;
LAB_00643ef4:
  unaff_x20 = puVar10;
  uVar14 = (long)unaff_x19 - (long)unaff_x20;
  uVar18 = (long)uVar14 / 0x18;
  switch(uVar18) {
  case 0:
  case 1:
    goto LAB_006444e0;
  case 2:
    puVar10 = puVar13;
    func_0x004278bc(puVar13,unaff_x20);
    if (((uint)puVar10 >> 7 & 1) != 0) {
      func_0x00644f10(unaff_x20[2],*unaff_x20);
      uVar19 = unaff_x19[-2];
      uVar15 = *puVar13;
      unaff_x20[2] = unaff_x19[-1];
      unaff_x20[1] = uVar19;
      *unaff_x20 = uVar15;
      unaff_x19[-1] = uStack_70;
      unaff_x19[-2] = uStack_78;
      *puVar13 = uStack_80;
    }
    goto LAB_006444e0;
  case 3:
    uVar7 = (int)unaff_x20 + 0x18;
    puVar10 = unaff_x20;
    puVar11 = puVar13;
    func_0x00644ef4();
    puStack_e0 = param_3;
    puStack_d8 = puVar13;
    puStack_d0 = unaff_x20;
    puStack_c8 = unaff_x19;
    uVar5 = uVar7;
    func_0x00644e08();
    uVar6 = uVar5;
    func_0x00644e18();
    if ((uVar5 >> 7 & 1) == 0) {
      if ((char)uVar6 < '\0') {
        func_0x00644d74();
        func_0x00644f88();
        func_0x00644e08();
        if ((uVar7 >> 7 & 1) != 0) {
          func_0x00644e70();
        }
      }
    }
    else {
      if ((char)uVar6 < '\0') {
        uVar15 = puVar11[2];
        uVar19 = *puVar11;
        puVar10[1] = puVar11[1];
        *puVar10 = uVar19;
        puVar10[2] = uVar15;
      }
      else {
        func_0x00644e70();
        func_0x00644e18();
        if ((uVar6 >> 7 & 1) == 0) {
          return;
        }
        func_0x00644d74();
      }
      func_0x00644f88();
    }
    return;
  case 4:
    puVar10 = puVar13;
    func_0x00644ef4(unaff_x20,unaff_x20 + 3,unaff_x20 + 6);
    uVar7 = (uint)puVar10;
    break;
  case 5:
    puVar10 = unaff_x20 + 6;
    puVar11 = unaff_x20 + 9;
    func_0x00644ef4(unaff_x20,unaff_x20 + 3,puVar10,puVar11,puVar13);
    ppuVar4 = (undefined8 **)auStack_170;
    uStack_e8 = 0x18;
    unaff_x29 = auStack_c0;
    puVar12 = puVar11;
    puStack_f0 = unaff_x24;
    puStack_e0 = param_3;
    puStack_d8 = puVar13;
    puStack_d0 = unaff_x20;
    puStack_c8 = unaff_x19;
    func_0x00644e94();
    uVar7 = (uint)puVar12;
    unaff_x30 = 0x644618;
    puVar13 = puVar10;
    param_3 = puVar11;
    break;
  default:
    goto code_r0x00643f08;
  }
  *(undefined8 **)((long)ppuVar4 + -0x30) = param_3;
  *(undefined8 **)((long)ppuVar4 + -0x28) = puVar13;
  *(undefined8 **)((long)ppuVar4 + -0x20) = unaff_x20;
  *(undefined8 **)((long)ppuVar4 + -0x18) = unaff_x19;
  *(undefined1 **)((long)ppuVar4 + -0x10) = unaff_x29;
  *(undefined8 *)((long)ppuVar4 + -8) = unaff_x30;
  func_0x00644e94();
  FUN_006444f4();
  func_0x00644e08();
  if ((((uVar7 >> 7 & 1) != 0) && (func_0x00644dc4(), (uVar7 >> 7 & 1) != 0)) &&
     (func_0x00644d90(), (uVar7 >> 7 & 1) != 0)) {
    func_0x00644e4c();
  }
  return;
code_r0x00643f08:
  if ((long)uVar14 < 0x240) {
    if ((param_4 & 1) == 0) {
      if (unaff_x20 != unaff_x19) {
        while (puVar10 = unaff_x20, unaff_x20 = puVar10 + 3, unaff_x20 != unaff_x19) {
          puVar13 = unaff_x20;
          func_0x00644e08();
          if (((uint)puVar13 >> 7 & 1) != 0) {
            uStack_78 = puVar10[4];
            uStack_80 = *unaff_x20;
            uStack_70 = puVar10[5];
            puVar10[4] = 0;
            puVar10[5] = 0;
            *unaff_x20 = 0;
            do {
              puVar13 = puVar10;
              FUN_004575b8(puVar13 + 3,puVar13);
              uVar7 = (uint)&uStack_80;
              func_0x00644e08();
              puVar10 = puVar13 + -3;
            } while ((uVar7 >> 7 & 1) != 0);
            FUN_004575b8(puVar13,&uStack_80);
            func_0x00644f68();
          }
        }
      }
      goto LAB_006444e0;
    }
    if (unaff_x20 == unaff_x19) goto LAB_006444e0;
    lVar17 = 0;
    puVar10 = unaff_x20;
    goto LAB_00644280;
  }
  if (param_3 == (undefined8 *)0x0) {
    if (unaff_x20 == unaff_x19) goto LAB_006444e0;
    uVar14 = uVar18 - 2 >> 1;
    puVar10 = unaff_x20 + uVar14 * 3;
    do {
      puVar13 = unaff_x20;
      FUN_00644818(unaff_x20,uVar18,puVar10);
      uVar14 = uVar14 - 1;
      puVar10 = puVar10 + -3;
    } while (-1 < (long)uVar14);
    do {
      if ((long)uVar18 < 2) goto LAB_006444e0;
      uVar14 = 0;
      uStack_98 = unaff_x20[1];
      uStack_a0 = *unaff_x20;
      uStack_90 = unaff_x20[2];
      unaff_x20[1] = 0;
      unaff_x20[2] = 0;
      *unaff_x20 = 0;
      puVar10 = unaff_x20;
      do {
        uVar2 = uVar14 << 1 | 1;
        uVar1 = uVar14 * 2 + 2;
        puVar11 = puVar10 + uVar14 * 3 + 3;
        uVar3 = uVar2;
        if ((long)uVar1 < (long)uVar18) {
          func_0x00644f24();
          puVar11 = puVar10 + uVar14 * 3 + 6;
          uVar3 = uVar1;
          if (-1 < (char)puVar13) {
            puVar11 = puVar10 + uVar14 * 3 + 3;
            uVar3 = uVar2;
          }
        }
        uVar14 = uVar3;
        func_0x00644e30();
        puVar10 = puVar11;
      } while ((long)uVar14 <= (long)(uVar18 - 2 >> 1));
      unaff_x19 = unaff_x19 + -3;
      if (puVar11 == unaff_x19) {
        FUN_004575b8(puVar11,&uStack_a0);
        puVar13 = puVar11;
      }
      else {
        FUN_004575b8(puVar11,unaff_x19);
        puVar13 = unaff_x19;
        FUN_004575b8(unaff_x19,&uStack_a0);
        uVar14 = (long)puVar11 + (0x18 - (long)unaff_x20);
        if (0x18 < (long)uVar14) {
          uVar14 = uVar14 / 0x18 - 2 >> 1;
          puVar13 = unaff_x20 + uVar14 * 3;
          func_0x00644e08();
          if (((uint)puVar13 >> 7 & 1) != 0) {
            func_0x00644f10(puVar11[2],*puVar11);
            puVar11[1] = 0;
            puVar11[2] = 0;
            *puVar11 = 0;
            puVar10 = unaff_x20 + uVar14 * 3;
            do {
              puVar13 = puVar10;
              FUN_004575b8(puVar11,puVar13);
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1 >> 1;
              puVar10 = unaff_x20 + uVar14 * 3;
              puVar12 = puVar10;
              func_0x004278bc(puVar10,&uStack_80);
              puVar11 = puVar13;
            } while (((uint)puVar12 >> 7 & 1) != 0);
            FUN_004575b8(puVar13,&uStack_80);
            func_0x00644f68();
          }
        }
      }
      func_0x00644f48();
      uVar18 = uVar18 - 1;
    } while( true );
  }
  puVar10 = unaff_x20 + (uVar18 >> 1) * 3;
  if (uVar14 < 0xc01) {
    FUN_006444f4(puVar10,unaff_x20,puVar13);
  }
  else {
    FUN_006444f4(unaff_x20,puVar10,puVar13);
    FUN_006444f4(unaff_x20 + 3,puVar10 + -3,puStack_a8);
    FUN_006444f4(unaff_x20 + 6,puVar10 + 3,puStack_b0);
    FUN_006444f4(puVar10 + -3,puVar10,puVar10 + 3);
    func_0x00644f10(unaff_x20[2],*unaff_x20);
    func_0x00644f88(puVar10[2],*puVar10);
    puVar10[2] = uStack_70;
    puVar10[1] = uStack_78;
    *puVar10 = uStack_80;
  }
  param_3 = (undefined8 *)((long)param_3 + -1);
  if ((param_4 & 1) == 0) {
    puVar10 = unaff_x20 + -3;
    func_0x004278bc(puVar10,unaff_x20);
    if (((uint)puVar10 >> 7 & 1) == 0) {
      func_0x00644ea8();
      puVar11 = &uStack_a0;
      func_0x00644e08();
      puVar10 = unaff_x20;
      if (((uint)puVar11 >> 7 & 1) == 0) {
        do {
          puVar10 = puVar10 + 3;
          if (unaff_x19 <= puVar10) break;
          func_0x00644e24();
        } while (((uint)puVar11 >> 7 & 1) == 0);
      }
      else {
        do {
          puVar10 = puVar10 + 3;
          func_0x00644e24();
        } while (((uint)puVar11 >> 7 & 1) == 0);
      }
      if (puVar10 < unaff_x19) {
        do {
          func_0x00644ec4();
        } while (((uint)puVar11 >> 7 & 1) != 0);
      }
      while (puVar10 < unaff_x19) {
        func_0x00644f10(puVar10[2],*puVar10);
        uVar19 = unaff_x19[1];
        uVar15 = *unaff_x19;
        func_0x00644fa8(unaff_x19[2]);
        unaff_x19[2] = extraout_x8_00;
        unaff_x19[1] = uVar19;
        *unaff_x19 = uVar15;
        do {
          puVar10 = puVar10 + 3;
          func_0x00644e24();
        } while (((uint)puVar11 >> 7 & 1) == 0);
        do {
          func_0x00644ec4();
        } while (((uint)puVar11 >> 7 & 1) != 0);
      }
      puVar11 = puVar10 + -3;
      if (unaff_x20 != puVar11) {
        FUN_004575b8(unaff_x20,puVar11);
      }
      FUN_004575b8(puVar11,&uStack_a0);
      func_0x00644f48();
      param_4 = 0;
      goto LAB_00643ef4;
    }
  }
  lVar17 = 0;
  func_0x00644ea8();
  do {
    lVar17 = lVar17 + 0x18;
    lVar8 = lVar17 + (long)unaff_x20;
    func_0x004278bc(lVar8,&uStack_a0);
  } while (((uint)lVar8 >> 7 & 1) != 0);
  unaff_x24 = (undefined8 *)((long)unaff_x20 + lVar17);
  puVar10 = unaff_x24;
  puVar11 = unaff_x19;
  if (lVar17 == 0x18) {
    do {
      if (unaff_x19 <= unaff_x24) break;
      func_0x00644ed4();
    } while (((uint)lVar8 >> 7 & 1) == 0);
  }
  else {
    do {
      func_0x00644ed4();
    } while (((uint)lVar8 >> 7 & 1) == 0);
  }
  while (puVar10 < puVar11) {
    func_0x00644f10(puVar10[2],*puVar10);
    uVar19 = puVar11[1];
    uVar15 = *puVar11;
    func_0x00644fa8(puVar11[2]);
    puVar11[2] = extraout_x8;
    puVar11[1] = uVar19;
    *puVar11 = uVar15;
    do {
      puVar10 = puVar10 + 3;
      puVar12 = puVar10;
      func_0x004278bc(puVar10,&uStack_a0);
    } while (((uint)puVar12 >> 7 & 1) != 0);
    do {
      puVar11 = puVar11 + -3;
      puVar12 = puVar11;
      func_0x004278bc(puVar11,&uStack_a0);
    } while (((uint)puVar12 >> 7 & 1) == 0);
  }
  puVar11 = puVar10 + -3;
  if (unaff_x20 != puVar11) {
    FUN_004575b8(unaff_x20,puVar11);
  }
  FUN_004575b8(puVar11,&uStack_a0);
  func_0x00644f48();
  if (unaff_x24 < unaff_x19) goto LAB_006440b8;
  puVar12 = unaff_x20;
  FUN_0064467c(unaff_x20,puVar11);
  puVar9 = puVar10;
  FUN_0064467c(puVar10,unaff_x19);
  if ((int)puVar9 == 0) goto code_r0x006440b4;
  unaff_x19 = puVar11;
  if (((ulong)puVar12 & 1) != 0) goto LAB_006444e0;
  goto LAB_00643ee0;
LAB_00644280:
  puVar13 = puVar10 + 3;
  if (puVar13 == unaff_x19) {
LAB_006444e0:
    func_0x00644ef4(unaff_x30);
    return;
  }
  puVar11 = puVar13;
  func_0x004278bc();
  if (((uint)puVar11 >> 7 & 1) != 0) {
    uStack_78 = puVar10[4];
    uStack_80 = *puVar13;
    uStack_70 = puVar10[5];
    puVar10[4] = 0;
    puVar10[5] = 0;
    *puVar13 = 0;
    lVar8 = lVar17;
    do {
      lVar16 = lVar8;
      FUN_004575b8((long)unaff_x20 + lVar16 + 0x18);
      puVar10 = unaff_x20;
      if (lVar16 == 0) goto LAB_006442e8;
      puVar10 = &uStack_80;
      func_0x004278bc(puVar10,lVar16 + -0x18 + (long)unaff_x20);
      lVar8 = lVar16 + -0x18;
    } while (((uint)puVar10 >> 7 & 1) != 0);
    puVar10 = (undefined8 *)((long)unaff_x20 + lVar16);
LAB_006442e8:
    FUN_004575b8(puVar10,&uStack_80);
    func_0x00644f68();
  }
  lVar17 = lVar17 + 0x18;
  puVar10 = puVar13;
  goto LAB_00644280;
code_r0x006440b4:
  if (((ulong)puVar12 & 1) == 0) {
LAB_006440b8:
    FUN_00643eb0(unaff_x20,puVar11,param_3,param_4 & 1);
    param_4 = 0;
  }
  goto LAB_00643ef4;
}



/* Entry: 006444f4; end: 006445eb;  */

void FUN_006444f4(undefined8 *param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2;
  func_0x00644e08();
  uVar2 = uVar1;
  func_0x00644e18();
  if ((uVar1 >> 7 & 1) == 0) {
    if ((char)uVar2 < '\0') {
      func_0x00644d74();
      func_0x00644f88();
      func_0x00644e08();
      if ((param_2 >> 7 & 1) != 0) {
        func_0x00644e70();
      }
    }
  }
  else {
    if ((char)uVar2 < '\0') {
      uVar3 = param_3[2];
      uVar4 = *param_3;
      param_1[1] = param_3[1];
      *param_1 = uVar4;
      param_1[2] = uVar3;
    }
    else {
      func_0x00644e70();
      func_0x00644e18();
      if ((uVar2 >> 7 & 1) == 0) {
        return;
      }
      func_0x00644d74();
    }
    func_0x00644f88();
  }
  return;
}



/* Entry: 006445ec; end: 0064467b;  */

void FUN_006445ec(void)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *in_x3;
  undefined8 *in_x4;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x00644e94();
  func_0x00644594();
  puVar2 = in_x4;
  func_0x00644eec();
  if (((uint)puVar2 >> 7 & 1) != 0) {
    uVar3 = in_x3[2];
    uVar6 = in_x3[1];
    uVar5 = *in_x3;
    uVar4 = in_x4[2];
    uVar7 = *in_x4;
    in_x3[1] = in_x4[1];
    *in_x3 = uVar7;
    in_x3[2] = uVar4;
    in_x4[1] = uVar6;
    *in_x4 = uVar5;
    in_x4[2] = uVar3;
    func_0x00644e08();
    uVar1 = (uint)in_x3;
    if ((((uVar1 >> 7 & 1) != 0) && (func_0x00644dc4(), (uVar1 >> 7 & 1) != 0)) &&
       (func_0x00644d90(), (uVar1 >> 7 & 1) != 0)) {
      func_0x00644e4c();
    }
  }
  return;
}



/* Entry: 0064467c; end: 00644817;  */

bool FUN_0064467c(long param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uVar2 = 0;
  switch(((long)param_2 - param_1) / 0x18) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x00644e18();
    if ((uVar2 >> 7 & 1) != 0) {
      func_0x00644d74();
      func_0x00644f88();
    }
    break;
  case 3:
    FUN_006444f4(param_1,param_1 + 0x18,param_2 + -3);
    break;
  case 4:
    func_0x00644594(param_1,param_1 + 0x18,param_1 + 0x30,param_2 + -3);
    break;
  case 5:
    FUN_006445ec(param_1,param_1 + 0x18,param_1 + 0x30,param_1 + 0x48,param_2 + -3);
    break;
  default:
    FUN_006444f4(param_1,param_1 + 0x18,param_1 + 0x30);
    lVar7 = 0;
    iVar8 = 0;
    for (puVar5 = (undefined8 *)(param_1 + 0x48); puVar5 != param_2; puVar5 = puVar5 + 3) {
      puVar3 = puVar5;
      func_0x00644eec();
      if (((uint)puVar3 >> 7 & 1) != 0) {
        uStack_88 = puVar5[1];
        uStack_90 = *puVar5;
        uStack_80 = puVar5[2];
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = 0;
        lVar6 = lVar7;
        do {
          lVar1 = param_1 + lVar6;
          FUN_004575b8(lVar1 + 0x48,lVar1 + 0x30);
          lVar4 = param_1;
          if (lVar6 == -0x30) goto LAB_006447a8;
          uVar2 = (uint)&uStack_90;
          func_0x004278bc(&uStack_90,lVar1 + 0x18);
          lVar6 = lVar6 + -0x18;
        } while ((uVar2 >> 7 & 1) != 0);
        lVar4 = param_1 + lVar6 + 0x48;
LAB_006447a8:
        FUN_004575b8(lVar4,&uStack_90);
        iVar8 = iVar8 + 1;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_90);
        if (iVar8 == 8) {
          return puVar5 + 3 == param_2;
        }
      }
      lVar7 = lVar7 + 0x18;
    }
  }
  return true;
}



/* Entry: 00644818; end: 00644957;  */

void FUN_00644818(long param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if (1 < param_2) {
    lVar6 = ((long)param_3 - param_1) / 0x18;
    uVar7 = param_2 - 2U >> 1;
    if (lVar6 <= (long)uVar7) {
      uVar2 = lVar6 << 1 | 1;
      lVar4 = param_1 + uVar2 * 0x18;
      uVar1 = lVar6 * 2 + 2;
      lVar6 = lVar4;
      uVar8 = uVar2;
      if ((long)uVar1 < param_2) {
        lVar5 = param_1;
        func_0x00644f24();
        lVar6 = lVar4 + 0x18;
        uVar8 = uVar1;
        if (-1 < (char)lVar5) {
          lVar6 = lVar4;
          uVar8 = uVar2;
        }
      }
      lVar4 = lVar6;
      func_0x00644eec();
      if (((uint)lVar4 >> 7 & 1) == 0) {
        uStack_78 = param_3[1];
        uStack_80 = *param_3;
        uStack_70 = param_3[2];
        param_3[1] = 0;
        param_3[2] = 0;
        *param_3 = 0;
        do {
          lVar4 = lVar6;
          func_0x00644e30();
          if ((long)uVar7 < (long)uVar8) break;
          uVar2 = uVar8 << 1 | 1;
          lVar5 = param_1 + uVar2 * 0x18;
          uVar1 = uVar8 * 2 + 2;
          lVar6 = lVar5;
          uVar8 = uVar2;
          if ((long)uVar1 < param_2) {
            lVar3 = lVar5;
            func_0x00644eec();
            lVar6 = lVar5 + 0x18;
            uVar8 = uVar1;
            if (-1 < (char)lVar3) {
              lVar6 = lVar5;
              uVar8 = uVar2;
            }
          }
          lVar5 = lVar6;
          func_0x004278bc(lVar6,&uStack_80);
        } while (((uint)lVar5 >> 7 & 1) == 0);
        FUN_004575b8(lVar4,&uStack_80);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_80);
      }
    }
  }
  return;
}



/* Entry: 00644958; end: 006449ab;  */

undefined1  [16] FUN_00644958(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined1 auVar1 [16];
  
  for (; param_2 != param_3; param_2 = param_2 + 0x18) {
    func_0x00644e30();
    param_4 = param_4 + 0x18;
  }
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 006449ac; end: 00644ac3;  */

undefined8 * FUN_006449ac(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *extraout_x8;
  long extraout_x8_00;
  long lVar7;
  undefined8 extraout_x9;
  long extraout_x9_00;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_28;
  
  puVar5 = &uStack_b0;
  puVar6 = &uStack_b0;
  func_0x00644df0(param_1);
  plVar4 = *(long **)(param_4 + 0x10);
  uStack_b0 = *extraout_x8;
  lStack_a8 = extraout_x8[1];
  if (lStack_a8 != 0) {
    plVar1 = (long *)(lStack_a8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_a0 = *param_2;
  lStack_98 = param_2[1];
  if (lStack_98 != 0) {
    plVar1 = (long *)(lStack_98 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pcStack_88 = FUN_00644aec;
  ppuStack_80 = &PTR_DAT_00a0c778;
  if (lStack_a8 != 0) {
    plVar1 = (long *)(lStack_a8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (lStack_98 != 0) {
    plVar1 = (long *)(lStack_98 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_90 = param_3;
  uStack_78 = uStack_b0;
  lStack_70 = lStack_a8;
  uStack_68 = uStack_a0;
  lStack_60 = lStack_98;
  uStack_58 = param_3;
  uStack_28 = extraout_x9;
  (**(code **)(*plVar4 + 0x10))(plVar4,&pcStack_88);
  func_0x00644f3c(ppuStack_80);
  FUN_00644ac4();
  func_0x00644df0(uStack_28);
  if (extraout_x9_00 == extraout_x8_00) {
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x00644f5c(&pcStack_88);
  FUN_00644ac4();
  func_0x00644e44();
  FUN_00427bc8((undefined1 *)((long)puVar6 + 0x10));
  plVar4 = *(long **)((long)puVar6 + 8);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return (undefined8 *)(undefined1 *)puVar6;
}



/* Entry: 00644ac4; end: 00644aeb;  */

long FUN_00644ac4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_00427bc8(param_1 + 0x10);
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



/* Entry: 00644aec; end: 00644b7f;  */

void FUN_00644aec(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  plVar5 = *(long **)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x30);
  lVar4 = (long)*(char *)((long)plVar5 + 0xaf);
  if (lVar4 < 0) {
    lVar4 = plVar5[0x14];
  }
  if (lVar4 != 0) {
    plVar2 = plVar5;
    FUN_006428a8();
    lVar1 = plVar5[0x19];
    lVar4 = (long)*(char *)((long)plVar5 + 199);
    if (lVar4 < 0) {
      plVar6 = (long *)plVar5[0x16];
      lVar4 = plVar5[0x17];
    }
    else {
      plVar6 = plVar5 + 0x16;
    }
    lVar7 = (long)*(char *)((long)plVar5 + 0xaf);
    if (lVar7 < 0) {
      plVar8 = (long *)plVar5[0x13];
      lVar7 = plVar5[0x14];
    }
    else {
      plVar8 = plVar5 + 0x13;
    }
    FUN_00716c1c();
    (**(code **)(lRam0000000000b6c688 + 0x40))
              (0xb6c688,(int)lVar1,plVar6,lVar4,plVar8,lVar7,(long)plVar2 - lVar3);
  }
  __ZNSt3__15mutex4lockEv(plVar5 + 0xb);
  plVar2 = (long *)*plVar5;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(param_1 + 0x20),lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)(plVar5 + 0xb);
  return;
}



/* Entry: 00644b80; end: 00644c3b;  */

undefined1 * FUN_00644b80(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  long extraout_x9_00;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puVar3 = auStack_40;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  FUN_00644c3c(auStack_40,1);
  puVar1 = puStack_30;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_00a0c7b8;
  uVar5 = 0xd0;
  _bzero(puStack_30 + 3);
  func_0x00644f94();
  puVar2 = puStack_30;
  puVar1[8] = extraout_x9;
  puVar1[9] = extraout_x8;
  puVar1[0xe] = 0x32aaaba7;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  puVar1[0x16] = 0;
  puVar1[0x15] = 0;
  puVar1[0x18] = 0;
  puVar1[0x17] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1b] = 0;
  puStack_30 = (undefined8 *)0x0;
  *param_1 = (long)(puVar2 + 3);
  param_1[1] = (long)puVar2;
  func_0x00644d18();
  func_0x00644df0(uStack_28);
  if (extraout_x9_00 == extraout_x8_00) {
    return puVar3;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar3 + 8) = uVar5;
  puVar4 = puVar3;
  FUN_00644c64();
  *(undefined1 **)(puVar3 + 0x10) = puVar4;
  return puVar3;
}



/* Entry: 00644c3c; end: 00644c63;  */

long FUN_00644c3c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_00644c64();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 00644c64; end: 00644c93;  */

void FUN_00644c64(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x11a7b9611a7b962) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(param_2 * 0xe8);
    return;
  }
  FUN_0040cee8();
  *param_1 = &PTR_FUN_00a0c7b8;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00644c94; end: 00644c97;  */

void FUN_00644c94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0c7b8;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00644c98; end: 00644cab;  */

void FUN_00644c98(void)

{
  FUN_00644d08();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00644cac; end: 00644cf3;  */

long FUN_00644cac(long param_1)

{
  long lStack_28;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 200);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xb0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x70);
  (*(code *)**(undefined8 **)(param_1 + 0x48))((undefined8 *)(param_1 + 0x48));
  lStack_28 = param_1 + 0x20;
  func_0x00427b38(&lStack_28);
  return param_1 + 0x20;
}



/* Entry: 00644cf4; end: 00644cf7;  */

void FUN_00644cf4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00644cf8; end: 00644d07;  */

void FUN_00644cf8(void)

{
  undefined8 *in_x3;
  
  func_0x00427780();
  *in_x3 = &PTR_FUN_00a0c7b8;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00644d08; end: 00644d2b;  */

void FUN_00644d08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0c7b8;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00644d2c; end: 00644d3f;  */

void FUN_00644d2c(void)

{
  func_0x00644d4c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00644d40; end: 00644fbb;  */

long FUN_00644d40(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x18;
  func_0x00427b38(&lStack_28);
  return param_1 + 0x18;
}



/* Entry: 00644fbc; end: 00644fe7;  */

void FUN_00644fbc(undefined8 param_1,undefined8 param_2)

{
  _sqlite3_column_type();
                    /* WARNING: Could not recover jumptable at 0x0077afd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sqlite3_column_int64_0099a9d0)(param_1,param_2);
  return;
}



/* Entry: 00644fe8; end: 0064509b;  */

undefined8 * FUN_00644fe8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  dword *pdVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *unaff_x19;
  long *plVar8;
  undefined8 *unaff_x21;
  
  FUN_0064509c();
  if ((int)param_1 != 3) {
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
    return param_1;
  }
  _sqlite3_column_text();
  puVar5 = unaff_x21;
  _strlen();
  if ((undefined8 *)0x7ffffffffffffff6 < puVar5) {
    FUN_0040d740();
    plVar8 = (long *)puVar5[1];
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    return puVar5;
  }
  if ((undefined8 *)((long)&MACH_HEADER.sizeofcmds + 2) < puVar5) {
    pdVar4 = &MACH_HEADER.flags;
    if ((dword *)((ulong)puVar5 | 7) != (dword *)0x17) {
      pdVar4 = (dword *)((ulong)puVar5 | 7);
    }
    puVar6 = (undefined8 *)((long)pdVar4 + 1);
    __Znwm();
    unaff_x19[1] = puVar5;
    unaff_x19[2] = (ulong)((long)pdVar4 + 1) | 0x8000000000000000;
    *unaff_x19 = puVar6;
  }
  else {
    *(char *)((long)unaff_x19 + 0x17) = (char)puVar5;
    puVar6 = unaff_x19;
    if (puVar5 == (undefined8 *)0x0) goto LAB_00425d3c;
  }
  _memmove(puVar6,unaff_x21,puVar5);
LAB_00425d3c:
  *(undefined1 *)((long)puVar6 + (long)puVar5) = 0;
  return unaff_x19;
}



/* Entry: 0064509c; end: 006450b7;  */

void FUN_0064509c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sqlite3_column_type_0099a9e0)();
  return;
}



/* Entry: 006450b8; end: 0064513b;  */

long FUN_006450b8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  func_0x006463ec();
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = (undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = 0;
  for (param_5 = param_5 * 0x58; param_5 != 0; param_5 = param_5 + -0x58) {
    FUN_0064615c((undefined8 *)(param_1 + 0x20),param_4 + 4,param_4);
    param_4 = param_4 + 0x58;
  }
  return param_1;
}



/* Entry: 0064513c; end: 006451b7;  */

long FUN_0064513c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  
  func_0x006463ec();
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = (undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = 0;
  lVar1 = param_4[1];
  for (lVar2 = *param_4; lVar2 != lVar1; lVar2 = lVar2 + 0x58) {
    FUN_0064615c((undefined8 *)(param_1 + 0x20),lVar2 + 4,lVar2);
  }
  return param_1;
}



/* Entry: 006451b8; end: 006451bf;  */

undefined8 FUN_006451b8(uint *param_1,ulong param_2)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  code *extraout_x8;
  code *extraout_x8_00;
  undefined8 uVar12;
  uint *puStack_2a0;
  uint *puStack_298;
  undefined1 auStack_280 [24];
  undefined1 auStack_268 [64];
  undefined8 uStack_228;
  uint *puStack_220;
  undefined1 uStack_218;
  ulong uStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1e8;
  undefined **ppuStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined **ppuStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined **ppuStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [120];
  undefined1 auStack_e0 [120];
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  uStack_228 = 0;
  puVar9 = param_1;
  FUN_00716c1c(param_1,param_2,10);
  uStack_218 = 1;
  puStack_220 = puVar9;
  FUN_00646264(auStack_e0,param_2,&UNK_0090fe97,0x13);
  FUN_00646264(auStack_158,param_2,&UNK_0090feab,0x35);
  FUN_00425cb4(auStack_280,"");
  FUN_0064942c(auStack_268,param_2,auStack_280);
  puVar10 = auStack_280;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x006463d0();
  uVar8 = (uint)puVar10;
  if (uVar8 == 0) {
    FUN_00645d40(&uStack_210,auStack_158);
    lVar2 = lStack_208;
    cVar4 = uStack_200._4_1_;
    if (uStack_200._4_1_ == '\0') {
      bVar6 = true;
    }
    else {
      uVar3 = (uint)uStack_200;
      uStack_200._0_5_ = (uint5)(uint)uStack_200;
      bVar6 = uVar3 == 0;
    }
    lStack_208 = 0;
    FUN_00645f60(&uStack_210);
    if (((cVar4 != '\0') && (lVar2 != 0)) && (!bVar6)) goto LAB_006452cc;
    uStack_160 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_178 = 0;
    pcStack_188 = FUN_00427770;
    ppuStack_180 = &PTR_FUN_009e3508;
    func_0x00646380();
    func_0x00646310(ppuStack_180);
    FUN_00645930(param_2,*param_1);
    uVar8 = (uint)param_2;
    func_0x006463d0();
    uVar7 = uVar8 == *param_1;
    if (!(bool)uVar7) {
      func_0x00646360();
      puStack_2a0 = (uint *)(ulong)*param_1;
      puStack_298 = (uint *)0x0;
      func_0x00461914(&UNK_0090fee1);
      FUN_00721c60(&uStack_210);
      func_0x006462ec();
      func_0x006462d0();
      goto LAB_00645670;
    }
    func_0x00646440();
    FUN_006428a8();
    func_0x00646438(&uStack_210);
    func_0x00646430();
    func_0x00646468();
    func_0x006463ac();
    (*extraout_x8_00)();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_210);
    uVar12 = 0;
LAB_006454dc:
    FUN_00649518(auStack_268);
    FUN_0064606c(auStack_158);
    FUN_0064606c(auStack_e0);
    func_0x0064631c(uStack_68);
    if ((bool)uVar7) {
      return uVar12;
    }
    ___stack_chk_fail();
LAB_006455d8:
    func_0x00646360();
    func_0x006463a0();
  }
  else {
LAB_006452cc:
    uVar7 = uVar8 == *param_1;
    if ((bool)uVar7) {
      func_0x00646440();
      uVar12 = 1;
      goto LAB_006454dc;
    }
    if ((*(byte *)(param_2 + 0x15f) & 1) == 0) goto LAB_006455d8;
    if ((int)uVar8 < (int)*param_1) {
      FUN_00645a0c(&puStack_2a0,param_1,puVar10);
      if (puStack_2a0 == puStack_298) {
        func_0x00646360();
        func_0x006463a0();
        func_0x00646368();
        goto LAB_00645670;
      }
      uStack_190 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_1a8 = 0;
      pcStack_1b8 = FUN_00427770;
      ppuStack_1b0 = &PTR_FUN_009e3508;
      uVar11 = param_2;
      FUN_006405bc(param_2,&UNK_0090ff0b,0x1f,1,&pcStack_1b8);
      func_0x00646310(ppuStack_1b0);
      puVar1 = puStack_298;
      for (puVar9 = puStack_2a0; uVar7 = puVar9 == puVar1, !(bool)uVar7; puVar9 = puVar9 + 0x16) {
        func_0x006463d0();
        if ((uint)uVar11 != *puVar9) {
          func_0x00646360();
          func_0x006463d0();
          uStack_200 = (ulong)*puVar9;
          uStack_210 = uVar11 & 0xffffffff;
          lStack_208 = 0;
          uStack_1f8 = 0;
          func_0x00461914(&UNK_0090ff2b);
          func_0x006462fc();
          func_0x00646330();
          func_0x006462ec();
          func_0x006462d0();
          goto LAB_00645670;
        }
        uStack_1d0 = 0;
        uStack_1d8 = 0;
        uStack_1c0 = 0;
        uStack_1c8 = 0;
        pcStack_1e8 = FUN_00427770;
        ppuStack_1e0 = &PTR_FUN_009e3508;
        func_0x00646380();
        func_0x00646310(ppuStack_1e0);
        if (((char)puVar9[0x14] == '\x01') &&
           (uVar11 = param_2, (**(code **)(puVar9 + 8))(), (uVar11 & 1) == 0)) {
          func_0x00646360();
          func_0x00646454();
          func_0x00461914(&UNK_0090ff5a);
          func_0x006462fc();
          func_0x00646330();
          func_0x006462ec();
          func_0x006462d0();
          goto LAB_00645670;
        }
        uVar11 = param_2;
        FUN_00645930(param_2,puVar9[1]);
        func_0x006463d0();
        if ((uint)uVar11 != puVar9[1]) {
          func_0x00646360();
          func_0x00646454();
          func_0x00461914(&UNK_0090ff82);
          func_0x006462fc();
          func_0x00646330();
          func_0x006462ec();
          func_0x006462d0();
          goto LAB_00645670;
        }
      }
      func_0x00646440();
      FUN_006428a8();
      func_0x00646438(&uStack_210);
      func_0x00646430();
      func_0x00646468();
      func_0x006463ac();
      (*extraout_x8)();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_210);
      FUN_00646040(&puStack_2a0);
      uVar12 = 2;
      goto LAB_006454dc;
    }
    func_0x00646360();
    func_0x006463a0();
  }
  func_0x00646368();
LAB_00645670:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x645674);
  (*pcVar5)();
}



/* Entry: 006451c0; end: 006458c7;  */

undefined8 FUN_006451c0(uint *param_1,ulong param_2)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  code *extraout_x8;
  code *extraout_x8_00;
  undefined8 uVar12;
  uint *puStack_2a0;
  uint *puStack_298;
  undefined1 auStack_280 [24];
  undefined1 auStack_268 [64];
  undefined8 uStack_228;
  uint *puStack_220;
  undefined1 uStack_218;
  ulong uStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1e8;
  undefined **ppuStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined **ppuStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined **ppuStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [120];
  undefined1 auStack_e0 [120];
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  uStack_228 = 0;
  puVar9 = param_1;
  FUN_00716c1c();
  uStack_218 = 1;
  puStack_220 = puVar9;
  FUN_00646264(auStack_e0,param_2,&UNK_0090fe97,0x13);
  FUN_00646264(auStack_158,param_2,&UNK_0090feab,0x35);
  FUN_00425cb4(auStack_280,"");
  FUN_0064942c(auStack_268,param_2,auStack_280);
  puVar10 = auStack_280;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x006463d0();
  uVar8 = (uint)puVar10;
  if (uVar8 == 0) {
    FUN_00645d40(&uStack_210,auStack_158);
    lVar2 = lStack_208;
    cVar4 = uStack_200._4_1_;
    if (uStack_200._4_1_ == '\0') {
      bVar6 = true;
    }
    else {
      uVar3 = (uint)uStack_200;
      uStack_200._0_5_ = (uint5)(uint)uStack_200;
      bVar6 = uVar3 == 0;
    }
    lStack_208 = 0;
    FUN_00645f60(&uStack_210);
    if (((cVar4 != '\0') && (lVar2 != 0)) && (!bVar6)) goto LAB_006452cc;
    uStack_160 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_178 = 0;
    pcStack_188 = FUN_00427770;
    ppuStack_180 = &PTR_FUN_009e3508;
    func_0x00646380();
    func_0x00646310(ppuStack_180);
    FUN_00645930(param_2,*param_1);
    uVar8 = (uint)param_2;
    func_0x006463d0();
    uVar7 = uVar8 == *param_1;
    if (!(bool)uVar7) {
      func_0x00646360();
      puStack_2a0 = (uint *)(ulong)*param_1;
      puStack_298 = (uint *)0x0;
      func_0x00461914(&UNK_0090fee1);
      FUN_00721c60(&uStack_210);
      func_0x006462ec();
      func_0x006462d0();
      goto LAB_00645670;
    }
    func_0x00646440();
    FUN_006428a8();
    func_0x00646438(&uStack_210);
    func_0x00646430();
    func_0x00646468();
    func_0x006463ac();
    (*extraout_x8_00)();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_210);
    uVar12 = 0;
LAB_006454dc:
    FUN_00649518(auStack_268);
    FUN_0064606c(auStack_158);
    FUN_0064606c(auStack_e0);
    func_0x0064631c(uStack_68);
    if ((bool)uVar7) {
      return uVar12;
    }
    ___stack_chk_fail();
LAB_006455d8:
    func_0x00646360();
    func_0x006463a0();
  }
  else {
LAB_006452cc:
    uVar7 = uVar8 == *param_1;
    if ((bool)uVar7) {
      func_0x00646440();
      uVar12 = 1;
      goto LAB_006454dc;
    }
    if ((*(byte *)(param_2 + 0x15f) & 1) == 0) goto LAB_006455d8;
    if ((int)uVar8 < (int)*param_1) {
      FUN_00645a0c(&puStack_2a0,param_1,puVar10);
      if (puStack_2a0 == puStack_298) {
        func_0x00646360();
        func_0x006463a0();
        func_0x00646368();
        goto LAB_00645670;
      }
      uStack_190 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_1a8 = 0;
      pcStack_1b8 = FUN_00427770;
      ppuStack_1b0 = &PTR_FUN_009e3508;
      uVar11 = param_2;
      FUN_006405bc(param_2,&UNK_0090ff0b,0x1f,1,&pcStack_1b8);
      func_0x00646310(ppuStack_1b0);
      puVar1 = puStack_298;
      for (puVar9 = puStack_2a0; uVar7 = puVar9 == puVar1, !(bool)uVar7; puVar9 = puVar9 + 0x16) {
        func_0x006463d0();
        if ((uint)uVar11 != *puVar9) {
          func_0x00646360();
          func_0x006463d0();
          uStack_200 = (ulong)*puVar9;
          uStack_210 = uVar11 & 0xffffffff;
          lStack_208 = 0;
          uStack_1f8 = 0;
          func_0x00461914(&UNK_0090ff2b);
          func_0x006462fc();
          func_0x00646330();
          func_0x006462ec();
          func_0x006462d0();
          goto LAB_00645670;
        }
        uStack_1d0 = 0;
        uStack_1d8 = 0;
        uStack_1c0 = 0;
        uStack_1c8 = 0;
        pcStack_1e8 = FUN_00427770;
        ppuStack_1e0 = &PTR_FUN_009e3508;
        func_0x00646380();
        func_0x00646310(ppuStack_1e0);
        if (((char)puVar9[0x14] == '\x01') &&
           (uVar11 = param_2, (**(code **)(puVar9 + 8))(), (uVar11 & 1) == 0)) {
          func_0x00646360();
          func_0x00646454();
          func_0x00461914(&UNK_0090ff5a);
          func_0x006462fc();
          func_0x00646330();
          func_0x006462ec();
          func_0x006462d0();
          goto LAB_00645670;
        }
        uVar11 = param_2;
        FUN_00645930(param_2,puVar9[1]);
        func_0x006463d0();
        if ((uint)uVar11 != puVar9[1]) {
          func_0x00646360();
          func_0x00646454();
          func_0x00461914(&UNK_0090ff82);
          func_0x006462fc();
          func_0x00646330();
          func_0x006462ec();
          func_0x006462d0();
          goto LAB_00645670;
        }
      }
      func_0x00646440();
      FUN_006428a8();
      func_0x00646438(&uStack_210);
      func_0x00646430();
      func_0x00646468();
      func_0x006463ac();
      (*extraout_x8)();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_210);
      FUN_00646040(&puStack_2a0);
      uVar12 = 2;
      goto LAB_006454dc;
    }
    func_0x00646360();
    func_0x006463a0();
  }
  func_0x00646368();
LAB_00645670:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x645674);
  (*pcVar5)();
}



/* Entry: 006458c8; end: 0064592f;  */

undefined4 FUN_006458c8(undefined8 param_1)

{
  long lVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined1 auStack_38 [8];
  long lStack_30;
  undefined4 uStack_28;
  byte bStack_24;
  
  FUN_00645d40(auStack_38,param_1);
  bVar2 = bStack_24;
  lVar1 = lStack_30;
  if (bStack_24 == 0) {
    uVar3 = 0;
  }
  else {
    bStack_24 = 0;
    uVar3 = uStack_28;
  }
  lStack_30 = 0;
  if ((bVar2 & lVar1 != 0) == 0) {
    uVar3 = 0;
  }
  FUN_00645f60(auStack_38);
  return uVar3;
}



/* Entry: 00645930; end: 00645a07;  */

void FUN_00645930(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  code *pcStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0064638c();
  uStack_28 = extraout_x8;
  __ZNSt3__19to_stringEi(auStack_88,param_2);
  FUN_00461b38(auStack_70,&UNK_0090ff9f,auStack_88);
  uVar1 = cStack_59 == '\0';
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_30 = 0;
  uStack_38 = 0;
  pcStack_58 = FUN_00427770;
  ppuStack_50 = &PTR_FUN_009e3508;
  func_0x00646380();
  func_0x00646420();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x006463c0();
  func_0x0064631c(uStack_28);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00646420();
    puVar2 = auStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x006463c0();
    func_0x00646418();
    *puVar2 = &PTR_FUN_00a0c618;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar2 + 5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar2 + 2);
                    /* WARNING: Could not recover jumptable at 0x0077a018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt9exceptionD2Ev_00998cf0)(puVar2);
    return;
  }
  return;
}



/* Entry: 00645a08; end: 00645a0b;  */

void FUN_00645a08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0c618;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x0077a018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_00998cf0)(param_1);
  return;
}



/* Entry: 00645a0c; end: 00645d3f;  */

void FUN_00645a0c(undefined8 param_1,long param_2,int param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 uVar5;
  long *plVar6;
  ulong *puVar7;
  long lVar8;
  undefined8 extraout_x8;
  long *plVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  ulong *unaff_x19;
  long *plVar15;
  ulong uVar16;
  ulong *puStack_d0;
  ulong **ppuStack_c8;
  ulong **ppuStack_c0;
  undefined1 uStack_b8;
  ulong *puStack_b0;
  ulong *puStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  ulong *puStack_90;
  ulong *puStack_88;
  ulong *puStack_80;
  undefined8 uStack_48;
  
  func_0x0064638c();
  plVar9 = (long *)(param_2 + 0x28);
  plVar12 = plVar9;
  while (plVar6 = plVar12, plVar9 = (long *)*plVar9, plVar12 = plVar6, uStack_48 = extraout_x8,
        plVar9 != (long *)0x0) {
    plVar12 = plVar9;
    if (*(int *)(plVar9 + 4) <= param_4) {
      plVar15 = plVar9;
      if (param_4 <= *(int *)(plVar9 + 4)) goto LAB_00645ac0;
      plVar9 = plVar9 + 1;
      plVar12 = plVar6;
    }
  }
LAB_00645a6c:
  do {
    if (plVar6 == plVar12) {
      *unaff_x19 = 0;
      unaff_x19[1] = 0;
      unaff_x19[2] = 0;
      uVar5 = 1;
LAB_00645cc0:
      func_0x0064631c(uStack_48);
      if ((bool)uVar5) {
        return;
      }
      ___stack_chk_fail();
LAB_00645cd8:
      FUN_00427c78();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x645ce0);
      (*pcVar4)();
    }
    uVar5 = (int)plVar6[5] == param_3;
    if ((bool)uVar5) {
      FUN_00641284(&puStack_a0,plVar6 + 5);
      *unaff_x19 = 0;
      unaff_x19[1] = 0;
      puVar10 = unaff_x19 + 2;
      *puVar10 = 0;
      lVar8 = 1;
      puVar7 = puVar10;
      FUN_00427c8c();
      *unaff_x19 = (ulong)puVar7;
      unaff_x19[1] = (ulong)puVar7;
      unaff_x19[2] = (ulong)(puVar7 + lVar8 * 0xb);
      ppuStack_c8 = &puStack_b0;
      ppuStack_c0 = &puStack_a8;
      uStack_b8 = 0;
      puStack_d0 = puVar10;
      puStack_b0 = puVar7;
      puStack_a8 = puVar7;
      FUN_00641284();
      puVar7 = puStack_a8 + 0xb;
      uStack_b8 = 1;
      puStack_a8 = puVar7;
      FUN_006460ec(&puStack_d0);
      unaff_x19[1] = (ulong)puVar7;
      func_0x00646130(&stack0xffffffffffffff20);
      FUN_00456130(&puStack_a0);
      goto LAB_00645cc0;
    }
    FUN_00645a0c();
    uVar16 = *unaff_x19;
    uVar2 = unaff_x19[1];
    if (uVar16 != uVar2) {
      puVar7 = unaff_x19 + 2;
      uVar13 = *puVar7;
      uVar5 = uVar2 == uVar13;
      if (uVar2 < uVar13) {
        FUN_00641284(uVar2,plVar6 + 5);
        puVar7 = (ulong *)(uVar2 + 0x58);
      }
      else {
        uVar1 = (long)(uVar2 - uVar16) / 0x58 + 1;
        if (0x2e8ba2e8ba2e8ba < uVar1) goto LAB_00645cd8;
        uVar3 = (long)(uVar13 - uVar16) / 0x58;
        uVar13 = uVar3 * 2;
        if (uVar13 < uVar1 || uVar13 - uVar1 == 0) {
          uVar13 = uVar1;
        }
        uVar5 = uVar3 == 0x1745d1745d1745d;
        if (0x1745d1745d1745c < uVar3) {
          uVar13 = 0x2e8ba2e8ba2e8ba;
        }
        puStack_80 = puVar7;
        if (uVar13 == 0) {
          puVar10 = (ulong *)0x0;
        }
        else {
          puVar10 = puVar7;
          FUN_00427c8c();
        }
        lVar8 = (long)puVar10 + (uVar2 - uVar16);
        puStack_88 = puVar10 + uVar13 * 0xb;
        puStack_a0 = puVar10;
        puStack_98 = (ulong *)lVar8;
        puStack_90 = (ulong *)lVar8;
        FUN_00641284(lVar8,plVar6 + 5);
        puStack_90 = (ulong *)(lVar8 + 0x58);
        uVar16 = lVar8 + ((long)(unaff_x19[1] - *unaff_x19) / -0x58) * 0x58;
        FUN_00427cd4(puVar7,*unaff_x19,unaff_x19[1],uVar16);
        puVar7 = puStack_90;
        puStack_a0 = (ulong *)*unaff_x19;
        *unaff_x19 = uVar16;
        uVar16 = unaff_x19[2];
        unaff_x19[2] = (ulong)puStack_88;
        unaff_x19[1] = (ulong)puStack_90;
        puStack_98 = puStack_a0;
        puStack_90 = puStack_a0;
        puStack_88 = (ulong *)uVar16;
        func_0x00427df0(&puStack_a0);
      }
      unaff_x19[1] = (ulong)puVar7;
      goto LAB_00645cc0;
    }
    FUN_00646040();
    FUN_004668e4();
  } while( true );
LAB_00645ac0:
  while (plVar14 = (long *)*plVar12, plVar14 != (long *)0x0) {
    lVar8 = 8;
    if (param_4 <= (int)plVar14[4]) {
      lVar8 = 0;
    }
    plVar12 = (long *)((long)plVar14 + lVar8);
    if (param_4 <= (int)plVar14[4]) {
      plVar15 = plVar14;
    }
  }
  puVar11 = plVar9 + 1;
  while (plVar12 = plVar6, plVar9 = (long *)*puVar11, plVar6 = plVar15, plVar9 != (long *)0x0) {
    lVar8 = 0;
    if ((int)plVar9[4] <= param_4) {
      lVar8 = 8;
    }
    puVar11 = (undefined8 *)((long)plVar9 + lVar8);
    plVar6 = plVar9;
    if ((int)plVar9[4] <= param_4) {
      plVar6 = plVar12;
    }
  }
  goto LAB_00645a6c;
}



/* Entry: 00645d40; end: 00645f17;  */

undefined8 * FUN_00645d40(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined1 uVar2;
  dword *pdVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 extraout_x8;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *unaff_x19;
  long lStack_e8;
  undefined1 uStack_e0;
  undefined **appuStack_d8 [17];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar9 = param_2;
  func_0x0064638c();
  uStack_e0 = 1;
  lStack_e8 = lVar9;
  uStack_48 = extraout_x8;
  __ZNSt3__15mutex4lockEv(lVar9);
  plVar1 = (long *)(param_2 + 0x60);
  plVar8 = (long *)(param_2 + 0x68);
  do {
    plVar7 = (long *)*plVar8;
    uVar2 = plVar7 == plVar1;
    if ((bool)uVar2) {
      FUN_00456f00(&lStack_e8);
      lVar9 = (long)*(char *)(param_2 + 0x5f);
      if (lVar9 < 0) {
        lVar6 = *(long *)(param_2 + 0x48);
        lVar9 = *(long *)(param_2 + 0x50);
      }
      else {
        lVar6 = param_2 + 0x48;
      }
      FUN_00648ba8(appuStack_d8,*(undefined8 *)(param_2 + 0x40),lVar6,lVar9);
      appuStack_d8[0] = &PTR_FUN_00a0c870;
      uStack_50 = 0;
      func_0x00456f38(&lStack_e8);
      pdVar3 = &section_00000068.reloff;
      __Znwm();
      FUN_00648cc4(pdVar3 + 4,appuStack_d8);
      *(long **)(pdVar3 + 2) = plVar1;
      *(undefined ***)(pdVar3 + 4) = &PTR_FUN_00a0c870;
      *(undefined8 *)(pdVar3 + 0x26) = uStack_50;
      lVar9 = *(long *)(param_2 + 0x60);
      *(long *)pdVar3 = lVar9;
      *(dword **)(lVar9 + 8) = pdVar3;
      *(dword **)(param_2 + 0x60) = pdVar3;
      *(long *)(param_2 + 0x70) = *(long *)(param_2 + 0x70) + 1;
      FUN_00648d18(appuStack_d8);
      goto LAB_00645e50;
    }
    plVar8 = plVar7 + 1;
  } while (plVar7[0x13] != 0);
  plVar8 = (long *)*plVar8;
  uVar2 = plVar1 == plVar8;
  if (!(bool)uVar2) {
    lVar9 = *plVar7;
    *(long **)(lVar9 + 8) = plVar8;
    *plVar8 = lVar9;
    lVar9 = *plVar1;
    *(long **)(lVar9 + 8) = plVar7;
    *plVar7 = lVar9;
    *plVar1 = (long)plVar7;
    plVar7[1] = (long)plVar1;
  }
LAB_00645e50:
  puVar5 = (undefined8 *)(*(long *)(param_2 + 0x60) + 0x10);
  *(long *)(*(long *)(param_2 + 0x60) + 0x98) = param_2;
  FUN_0040d514(&lStack_e8);
  *unaff_x19 = (long)puVar5;
  unaff_x19[1] = (long)puVar5;
  *(undefined1 *)(unaff_x19 + 2) = 0;
  *(undefined1 *)((long)unaff_x19 + 0x14) = 0;
  puVar4 = puVar5;
  FUN_006490e4();
  if ((int)puVar4 != 0) {
    FUN_00648c94();
    FUN_00644fbc();
    *(int *)(unaff_x19 + 2) = (int)puVar5;
    *(undefined1 *)((long)unaff_x19 + 0x14) = 1;
    puVar4 = puVar5;
  }
  func_0x0064631c(uStack_48);
  if ((bool)uVar2) {
    return puVar4;
  }
  ___stack_chk_fail();
  FUN_0040d514(&lStack_e8);
  func_0x00646418();
  func_0x0040cf10();
  *puVar4 = &PTR_FUN_00a0cb30;
  FUN_00648d5c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar4 + 0xb);
  __ZNSt3__15mutexD1Ev(puVar4 + 3);
  return puVar4;
}



/* Entry: 00645f18; end: 00645f1b;  */

undefined8 * FUN_00645f18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0cb30;
  FUN_00648d5c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  return param_1;
}



/* Entry: 00645f1c; end: 00645f2f;  */

void FUN_00645f1c(void)

{
  FUN_00648d18();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00645f30; end: 00645f5f;  */

void FUN_00645f30(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  __ZNSt3__15mutex4lockEv(uVar1);
  *(undefined8 *)(param_1 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)(uVar1);
  return;
}



/* Entry: 00645f60; end: 00645f8f;  */

undefined8 * FUN_00645f60(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)((long)param_1 + 0xd) = 0;
  uVar1 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00648ea0(uVar1);
  return param_1;
}



/* Entry: 00645f90; end: 0064602b;  */

undefined8 * FUN_00645f90(undefined8 *param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char in_NG;
  char in_OV;
  undefined8 extraout_x8;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  undefined1 auStack_68 [24];
  ulong uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = param_2 & 0xffffffff;
  uStack_48 = 0;
  uStack_40 = param_3 & 0xffffffff;
  uStack_38 = 0;
  func_0x00461914(&UNK_0090ffb6);
  FUN_00721c60(auStack_68);
  func_0x00646330();
  uVar1 = extraout_x11;
  puVar2 = extraout_x10;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
    puVar2 = auStack_68;
  }
  FUN_0064177c(param_1,1,puVar2,uVar1,param_4);
  func_0x006463c0();
  *param_1 = &PTR_FUN_00a0c910;
  return param_1;
}



/* Entry: 0064602c; end: 0064603f;  */

void FUN_0064602c(void)

{
  FUN_004bd0dc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00646040; end: 0064606b;  */

undefined8 FUN_00646040(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_00427e3c(&uStack_28);
  return param_1;
}



/* Entry: 0064606c; end: 006460eb;  */

void FUN_0064606c(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    plVar3 = *(long **)(param_1 + 0x68);
    plVar1 = *(long **)(*(long *)(param_1 + 0x60) + 8);
    lVar2 = *plVar3;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    *(undefined8 *)(param_1 + 0x70) = 0;
    while (plVar3 != (long *)(param_1 + 0x60)) {
      plVar1 = (long *)plVar3[1];
      (**(code **)plVar3[2])();
      __ZdlPv(plVar3);
      plVar3 = plVar1;
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00779ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_00998be0)(param_1);
  return;
}



/* Entry: 006460ec; end: 0064615b;  */

long FUN_006460ec(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x58;
      FUN_00456130();
    }
  }
  return param_1;
}



/* Entry: 0064615c; end: 006461cf;  */

long FUN_0064615c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long alStack_38 [3];
  
  FUN_006461d0(alStack_38);
  uVar2 = param_1;
  FUN_006413a0(param_1,&uStack_40,alStack_38[0] + 0x20);
  FUN_00641238(param_1,uStack_40,uVar2,alStack_38[0]);
  lVar1 = alStack_38[0];
  alStack_38[0] = 0;
  FUN_006413ec(alStack_38);
  return lVar1;
}



/* Entry: 006461d0; end: 00646237;  */

void FUN_006461d0(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = 0x80;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  param_1[2] = 0;
  FUN_00646238(lVar1 + 0x20,param_3,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 00646238; end: 00646263;  */

undefined4 * FUN_00646238(undefined4 *param_1,undefined4 *param_2,undefined8 param_3)

{
  *param_1 = *param_2;
  FUN_00641284(param_1 + 2,param_3);
  return param_1;
}



/* Entry: 00646264; end: 006462cf;  */

undefined8 *
FUN_00646264(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *param_1 = 0x32aaaba7;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  uStack_30 = param_3;
  uStack_28 = param_4;
  FUN_00456d78(param_1 + 9,&uStack_30);
  param_1[0xc] = param_1 + 0xc;
  param_1[0xd] = param_1 + 0xc;
  param_1[0xe] = 0;
  return param_1;
}



/* Entry: 006462d0; end: 0064647b;  */

void FUN_006462d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a12c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_throw_00998e78)();
  return;
}



/* Entry: 0064647c; end: 00646847;  */

undefined *** FUN_0064647c(undefined ***param_1,undefined ***param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 uVar5;
  int iVar6;
  long *plVar7;
  dword *pdVar8;
  long lVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined ***pppuVar10;
  undefined **ppuVar11;
  long extraout_x8_01;
  undefined ***pppuVar12;
  undefined **ppuVar13;
  long extraout_x9;
  undefined **ppuVar14;
  ulong uVar15;
  int unaff_w19;
  undefined ***pppuVar16;
  undefined4 *puVar17;
  undefined ***unaff_x20;
  long lVar18;
  undefined4 *unaff_x21;
  undefined4 *puVar19;
  undefined8 uVar20;
  undefined **ppuVar21;
  long unaff_x22;
  undefined4 *unaff_x24;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined1 auStack_788 [64];
  undefined **ppuStack_748;
  undefined **ppuStack_740;
  undefined **ppuStack_738;
  undefined **ppuStack_730;
  undefined **ppuStack_728;
  undefined **ppuStack_720;
  undefined **ppuStack_718;
  undefined1 uStack_710;
  undefined1 auStack_708 [64];
  long alStack_6c8 [7];
  byte bStack_690;
  long lStack_688;
  undefined **ppuStack_680;
  undefined *puStack_678;
  undefined *puStack_670;
  undefined *puStack_668;
  undefined *puStack_660;
  undefined *puStack_658;
  byte bStack_650;
  undefined ***pppuStack_648;
  undefined1 uStack_640;
  undefined1 auStack_638 [24];
  undefined1 auStack_620 [32];
  undefined ***pppuStack_598;
  undefined1 uStack_590;
  undefined **appuStack_588 [17];
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined4 *puStack_4f0;
  long lStack_4e0;
  undefined4 *puStack_4d8;
  undefined ***pppuStack_4d0;
  undefined ***pppuStack_4c8;
  undefined1 *puStack_4c0;
  code *pcStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined ***pppuStack_498;
  undefined ***pppuStack_490;
  long lStack_480;
  long lStack_478;
  undefined4 *puStack_438;
  undefined4 *puStack_430;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 *puStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined **appuStack_200 [53];
  undefined8 uStack_58;
  
  func_0x0064849c();
  uVar5 = *(int *)param_1 == *(int *)param_2;
  uStack_58 = extraout_x8;
  if ((bool)uVar5) {
    pppuVar16 = (undefined ***)((long)&MACH_HEADER.magic + 1);
    goto LAB_00646768;
  }
  if (*(int *)param_2 < *(int *)param_1) {
    pppuVar16 = (undefined ***)0x0;
    goto LAB_00646768;
  }
  func_0x00648460();
  FUN_00425cb4(&uStack_420,"");
  unaff_x21 = &uStack_420;
  uStack_4a8 = 0;
  uStack_4b0 = 0x1010001;
  uStack_3a8._0_4_ = 0x1010001;
  uStack_3a8._4_4_ = 0;
  uStack_3a0 = 0x200000000;
  uStack_398 = 0x101000100000000;
  uStack_390 = 0x100;
  uStack_388 = 0x1010100000000;
  FUN_0063faf4(appuStack_200,&uStack_420,&uStack_3a8,0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_420);
  param_2 = appuStack_200;
  pppuVar16 = unaff_x20;
  FUN_006451b8();
  uVar5 = (int)pppuVar16 == -1;
  if ((bool)uVar5) {
LAB_00646668:
    pppuVar16 = (undefined ***)0x0;
  }
  else {
    param_2 = appuStack_200;
    iVar6 = unaff_w19;
    FUN_006451b8();
    uVar5 = true;
    if (iVar6 == -1) goto LAB_00646668;
    FUN_00425cb4(&lStack_480,"");
    uStack_420 = (undefined4)uStack_4b0;
    uStack_41c = 0;
    puStack_418 = (undefined4 *)0x200000000;
    uStack_410 = 0x101000100000000;
    uStack_408 = 0x100;
    uStack_400 = 0x1010100000000;
    FUN_0063faf4(&uStack_3a8,&lStack_480,&uStack_420,0);
    func_0x00648494();
    param_2 = (undefined ***)&uStack_3a8;
    FUN_006451b8();
    uVar5 = unaff_w19 == -1;
    if ((bool)uVar5) {
      pppuVar16 = (undefined ***)0x0;
    }
    else {
      FUN_00647f68(&uStack_420,appuStack_200);
      func_0x00648520();
      FUN_00646a20(&puStack_438,&lStack_480);
      func_0x0064848c();
      func_0x00648458();
      FUN_00646f10(puStack_438,puStack_430);
      FUN_00647f68(&uStack_420,&uStack_3a8);
      func_0x00648520();
      FUN_00646a20(&pppuStack_498,&lStack_480);
      func_0x0064848c();
      func_0x00648458();
      pppuVar12 = pppuStack_498;
      param_2 = pppuStack_490;
      FUN_00646f10();
      pppuVar16 = pppuStack_490;
      lVar18 = 0x30;
      puVar17 = puStack_438;
      for (unaff_x20 = pppuStack_498; uVar5 = unaff_x20 == pppuVar16 || puVar17 == puStack_430,
          puVar19 = puStack_430, unaff_x20 != pppuVar16 && puVar17 != puStack_430;
          unaff_x20 = (undefined ***)((long)unaff_x20 + lVar9)) {
        func_0x0064832c();
        if (((ulong)pppuVar12 & 1) != 0) goto LAB_00646744;
        func_0x006483f8();
        lVar9 = 0;
        if ((int)pppuVar12 == 0) {
          lVar9 = 0x30;
        }
        puVar17 = puVar17 + 0xc;
      }
      uVar5 = 0;
      if (unaff_x20 == pppuVar16) {
        unaff_x20 = (undefined ***)&UNK_00910039;
        unaff_x21 = puStack_430;
        unaff_x22 = lVar18;
        for (pppuVar16 = pppuStack_498; pppuVar16 != pppuStack_490; pppuVar16 = pppuVar16 + 6) {
          pppuVar12 = pppuVar16;
          param_2 = unaff_x20;
          FUN_004636dc();
          if ((int)pppuVar12 != 0) {
            FUN_00646d74(&uStack_420,appuStack_200,pppuVar16 + 3);
            plVar7 = &lStack_480;
            param_2 = (undefined ***)&uStack_3a8;
            FUN_00646d74(plVar7,param_2,pppuVar16 + 3);
            unaff_x24 = puStack_418;
            unaff_x21 = (undefined4 *)CONCAT44(uStack_41c,uStack_420);
            uVar5 = (long)puStack_418 - (long)unaff_x21 == lStack_478 - lStack_480;
            puVar19 = unaff_x21;
            unaff_x22 = lStack_480;
            lVar18 = lStack_480;
            if (!(bool)uVar5) {
LAB_00646738:
              func_0x00647e98(&lStack_480);
              func_0x00648500();
              goto LAB_00646744;
            }
            for (; uVar5 = unaff_x21 == unaff_x24, !(bool)uVar5; unaff_x21 = unaff_x21 + 0x12) {
              func_0x006483b4();
              FUN_00459c38();
              puVar19 = unaff_x21;
              lVar18 = unaff_x22;
              if ((int)plVar7 == 0) goto LAB_00646738;
              puVar19 = unaff_x21 + 6;
              lVar18 = unaff_x22 + 0x18;
              func_0x006483b4();
              FUN_00459c38();
              if ((int)plVar7 == 0) goto LAB_00646738;
              puVar19 = unaff_x21 + 0xc;
              lVar18 = unaff_x22 + 0x30;
              func_0x006483b4();
              FUN_00459c38();
              if ((int)plVar7 == 0) goto LAB_00646738;
              unaff_x22 = unaff_x22 + 0x48;
            }
            func_0x00647e98(&lStack_480);
            func_0x00648500();
          }
        }
        pppuVar16 = (undefined ***)((long)&MACH_HEADER.magic + 1);
        uVar5 = 1;
      }
      else {
LAB_00646744:
        pppuVar16 = (undefined ***)0x0;
        unaff_x21 = puVar19;
        unaff_x22 = lVar18;
      }
      func_0x00647ee0(&pppuStack_498);
      func_0x00647ee0(&puStack_438);
    }
    FUN_0064072c(&uStack_3a8);
  }
  param_1 = appuStack_200;
  FUN_0064072c();
LAB_00646768:
  func_0x006483d8(uStack_58);
  if ((bool)uVar5) {
    return pppuVar16;
  }
  ___stack_chk_fail();
  func_0x00648500();
  func_0x00647ee0(&pppuStack_498);
  func_0x00647ee0(&puStack_438);
  FUN_0064072c(&uStack_3a8);
  FUN_0064072c(appuStack_200);
  func_0x00648430();
  pcStack_4b8 = FUN_00646848;
  puStack_4f0 = unaff_x24;
  lStack_4e0 = unaff_x22;
  puStack_4d8 = unaff_x21;
  pppuStack_4d0 = unaff_x20;
  pppuStack_4c8 = param_1;
  puStack_4c0 = &stack0xfffffffffffffff0;
  func_0x006484b8();
  func_0x0064849c();
  uStack_590 = 1;
  pppuStack_598 = param_2;
  uStack_4f8 = extraout_x8_00;
  __ZNSt3__15mutex4lockEv(param_2);
  pppuVar16 = unaff_x20 + 0xc;
  pppuVar12 = unaff_x20 + 0xd;
  do {
    pppuVar10 = (undefined ***)*pppuVar12;
    uVar5 = pppuVar10 == pppuVar16;
    if ((bool)uVar5) {
      FUN_00456f00(&pppuStack_598);
      ppuVar14 = (undefined **)(long)*(char *)((long)unaff_x20 + 0x5f);
      if ((long)ppuVar14 < 0) {
        pppuVar12 = (undefined ***)unaff_x20[9];
        ppuVar14 = unaff_x20[10];
      }
      else {
        pppuVar12 = unaff_x20 + 9;
      }
      FUN_00648ba8(appuStack_588,unaff_x20[8],pppuVar12,ppuVar14);
      appuStack_588[0] = &PTR_FUN_00a0c950;
      uStack_500 = 0;
      func_0x00456f38(&pppuStack_598);
      pdVar8 = &section_00000068.reloff;
      __Znwm();
      param_2 = appuStack_588;
      FUN_00648cc4(pdVar8 + 4);
      *(undefined ****)(pdVar8 + 2) = pppuVar16;
      *(undefined ***)(pdVar8 + 4) = &PTR_FUN_00a0c950;
      *(undefined8 *)(pdVar8 + 0x26) = uStack_500;
      ppuVar14 = unaff_x20[0xc];
      *(undefined ***)pdVar8 = ppuVar14;
      ppuVar14[1] = (undefined *)pdVar8;
      unaff_x20[0xc] = (undefined **)pdVar8;
      unaff_x20[0xe] = (undefined **)((long)unaff_x20[0xe] + 1);
      FUN_00648d18(appuStack_588);
      goto LAB_00646958;
    }
    pppuVar12 = pppuVar10 + 1;
  } while (pppuVar10[0x13] != (undefined **)0x0);
  pppuVar12 = (undefined ***)*pppuVar12;
  uVar5 = pppuVar16 == pppuVar12;
  if (!(bool)uVar5) {
    ppuVar14 = *pppuVar10;
    ppuVar14[1] = (undefined *)pppuVar12;
    *pppuVar12 = ppuVar14;
    ppuVar14 = *pppuVar16;
    ppuVar14[1] = (undefined *)pppuVar10;
    *pppuVar10 = ppuVar14;
    *pppuVar16 = (undefined **)pppuVar10;
    pppuVar10[1] = (undefined **)pppuVar16;
  }
LAB_00646958:
  ppuVar14 = unaff_x20[0xc] + 2;
  unaff_x20[0xc][0x13] = (undefined *)unaff_x20;
  FUN_0040d514(&pppuStack_598);
  *param_1 = ppuVar14;
  pppuVar16 = param_1 + 1;
  *pppuVar16 = ppuVar14;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  FUN_00648028();
  func_0x006483d8(uStack_4f8);
  if ((bool)uVar5) {
    return pppuVar16;
  }
  ___stack_chk_fail();
  FUN_0040d514(&pppuStack_598);
  func_0x00648430();
  func_0x006484b8();
  ppuStack_740 = (undefined **)((ulong)ppuStack_740 & 0xffffffffffffff00);
  uStack_710 = 0;
  if (*(char *)(param_2 + 8) != '\0') {
    ppuStack_738 = param_1[5];
    ppuStack_740 = param_1[4];
    ppuStack_730 = param_1[6];
    param_1[4] = (undefined **)0x0;
    param_1[5] = (undefined **)0x0;
    ppuStack_720 = param_1[8];
    ppuStack_728 = param_1[7];
    param_1[6] = (undefined **)0x0;
    param_1[7] = (undefined **)0x0;
    ppuStack_718 = param_1[9];
    param_1[8] = (undefined **)0x0;
    param_1[9] = (undefined **)0x0;
    uStack_710 = 1;
    FUN_0064810c(param_1 + 4);
  }
  ppuStack_748 = param_1[3];
  param_1[3] = (undefined **)0x0;
  FUN_006481bc(auStack_708,&ppuStack_748);
  uStack_7a8 = 0;
  uStack_7b0 = 0;
  uStack_798 = 0;
  uStack_7a0 = 0;
  uStack_7c8 = 0;
  uStack_7d0 = 0;
  uStack_7b8 = 0;
  uStack_7c0 = 0;
  FUN_006481bc(auStack_788,&uStack_7d0);
  *pppuVar16 = (undefined **)0x0;
  pppuVar16[1] = (undefined **)0x0;
  pppuVar16[2] = (undefined **)0x0;
  FUN_0064829c(&lStack_688,auStack_708);
  FUN_0064829c(alStack_6c8,auStack_788);
  uStack_640 = 0;
  pppuStack_648 = pppuVar16;
  do {
    if ((((bStack_650 & 1) == 0) && ((bStack_690 & 1) == 0)) || (lStack_688 == alStack_6c8[0])) {
      uStack_640 = 1;
      FUN_00648270(&pppuStack_648);
      func_0x00648338(alStack_6c8);
      pppuVar16 = &ppuStack_680;
      func_0x00648130(pppuVar16);
      func_0x00648338(auStack_788);
      func_0x00648508();
      func_0x00648338(auStack_708);
      func_0x00648338(&ppuStack_748);
      return pppuVar16;
    }
    if ((bStack_650 & 1) == 0) {
      uVar20 = *(undefined8 *)(lStack_688 + 8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_638,lStack_688 + 0x58);
      FUN_00461b38(auStack_620,"expected row but query reported done. sql:",auStack_638);
      FUN_00641f40(uVar20,0x65,auStack_620);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_620);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_638);
    }
    ppuVar14 = pppuVar16[1];
    if (ppuVar14 < pppuVar16[2]) {
      ppuVar14[2] = puStack_670;
      ppuVar14[1] = puStack_678;
      *ppuVar14 = (undefined *)ppuStack_680;
      puStack_678 = (undefined *)0x0;
      puStack_670 = (undefined *)0x0;
      ppuStack_680 = (undefined **)0x0;
      ppuVar14[4] = puStack_660;
      ppuVar14[3] = puStack_668;
      ppuVar14[5] = puStack_658;
      puStack_660 = (undefined *)0x0;
      puStack_658 = (undefined *)0x0;
      puStack_668 = (undefined *)0x0;
      ppuVar14 = ppuVar14 + 6;
    }
    else {
      ppuVar21 = *pppuVar16;
      lVar18 = (long)ppuVar14 - (long)ppuVar21;
      uVar1 = lVar18 / 0x30 + 1;
      if (0x555555555555555 < uVar1) {
        func_0x00648264();
LAB_00646d00:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x646d04);
        (*pcVar4)();
      }
      uVar3 = ((long)pppuVar16[2] - (long)ppuVar21) / 0x30;
      uVar15 = uVar3 * 2;
      if (uVar15 < uVar1 || uVar15 - uVar1 == 0) {
        uVar15 = uVar1;
      }
      if (0x2aaaaaaaaaaaaa9 < uVar3) {
        uVar15 = 0x555555555555555;
      }
      if (0x555555555555555 < uVar15) {
        FUN_0040cee8();
        goto LAB_00646d00;
      }
      lVar9 = uVar15 * 0x30;
      __Znwm();
      puVar2 = (undefined8 *)(lVar9 + lVar18);
      puVar2[1] = puStack_678;
      *puVar2 = ppuStack_680;
      puVar2[2] = puStack_670;
      ppuStack_680 = (undefined **)0x0;
      puStack_678 = (undefined *)0x0;
      puVar2[4] = puStack_660;
      puVar2[3] = puStack_668;
      puVar2[5] = puStack_658;
      puStack_670 = (undefined *)0x0;
      puStack_668 = (undefined *)0x0;
      puStack_660 = (undefined *)0x0;
      puStack_658 = (undefined *)0x0;
      ppuVar11 = (undefined **)(puVar2 + (lVar18 / -0x30) * 6);
      ppuVar13 = ppuVar21;
      while (ppuVar13 != ppuVar14) {
        func_0x00648380(ppuVar11);
        ppuVar11 = (undefined **)(extraout_x8_01 + 0x30);
        ppuVar13 = (undefined **)(extraout_x9 + 0x30);
      }
      for (; ppuVar21 != ppuVar14; ppuVar21 = ppuVar21 + 6) {
        func_0x0064799c(ppuVar21);
      }
      ppuVar14 = (undefined **)(puVar2 + 6);
      ppuVar21 = *pppuVar16;
      *pppuVar16 = (undefined **)(puVar2 + (lVar18 / -0x30) * 6);
      pppuVar16[1] = ppuVar14;
      pppuVar16[2] = (undefined **)(lVar9 + uVar15 * 0x30);
      if (ppuVar21 != (undefined **)0x0) {
        __ZdlPv();
      }
    }
    pppuVar16[1] = ppuVar14;
    FUN_00648028(&lStack_688);
  } while( true );
}



/* Entry: 00646848; end: 00646a1f;  */

void FUN_00646848(undefined8 param_1,undefined ***param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 uVar5;
  dword *pdVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 extraout_x8;
  long *plVar10;
  undefined8 *puVar11;
  long extraout_x8_00;
  long *plVar12;
  undefined8 *puVar13;
  long extraout_x9;
  long lVar14;
  ulong uVar15;
  ulong *unaff_x19;
  long unaff_x20;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 auStack_2d8 [64];
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  undefined1 uStack_260;
  undefined1 auStack_258 [64];
  long alStack_218 [7];
  byte bStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  byte bStack_1a0;
  ulong *puStack_198;
  undefined1 uStack_190;
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [32];
  undefined ***pppuStack_e8;
  undefined1 uStack_e0;
  undefined **appuStack_d8 [17];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x006484b8();
  func_0x0064849c();
  uStack_e0 = 1;
  pppuStack_e8 = param_2;
  uStack_48 = extraout_x8;
  __ZNSt3__15mutex4lockEv(param_2);
  plVar1 = (long *)(unaff_x20 + 0x60);
  plVar12 = (long *)(unaff_x20 + 0x68);
  do {
    plVar10 = (long *)*plVar12;
    uVar5 = plVar10 == plVar1;
    if ((bool)uVar5) {
      FUN_00456f00(&pppuStack_e8);
      lVar14 = (long)*(char *)(unaff_x20 + 0x5f);
      if (lVar14 < 0) {
        lVar8 = *(long *)(unaff_x20 + 0x48);
        lVar14 = *(long *)(unaff_x20 + 0x50);
      }
      else {
        lVar8 = unaff_x20 + 0x48;
      }
      FUN_00648ba8(appuStack_d8,*(undefined8 *)(unaff_x20 + 0x40),lVar8,lVar14);
      appuStack_d8[0] = &PTR_FUN_00a0c950;
      uStack_50 = 0;
      func_0x00456f38(&pppuStack_e8);
      pdVar6 = &section_00000068.reloff;
      __Znwm();
      param_2 = appuStack_d8;
      FUN_00648cc4(pdVar6 + 4);
      *(long **)(pdVar6 + 2) = plVar1;
      *(undefined ***)(pdVar6 + 4) = &PTR_FUN_00a0c950;
      *(undefined8 *)(pdVar6 + 0x26) = uStack_50;
      lVar14 = *(long *)(unaff_x20 + 0x60);
      *(long *)pdVar6 = lVar14;
      *(dword **)(lVar14 + 8) = pdVar6;
      *(dword **)(unaff_x20 + 0x60) = pdVar6;
      *(long *)(unaff_x20 + 0x70) = *(long *)(unaff_x20 + 0x70) + 1;
      FUN_00648d18(appuStack_d8);
      goto LAB_00646958;
    }
    plVar12 = plVar10 + 1;
  } while (plVar10[0x13] != 0);
  plVar12 = (long *)*plVar12;
  uVar5 = plVar1 == plVar12;
  if (!(bool)uVar5) {
    lVar14 = *plVar10;
    *(long **)(lVar14 + 8) = plVar12;
    *plVar12 = lVar14;
    lVar14 = *plVar1;
    *(long **)(lVar14 + 8) = plVar10;
    *plVar10 = lVar14;
    *plVar1 = (long)plVar10;
    plVar10[1] = (long)plVar1;
  }
LAB_00646958:
  uVar9 = *(long *)(unaff_x20 + 0x60) + 0x10;
  *(long *)(*(long *)(unaff_x20 + 0x60) + 0x98) = unaff_x20;
  FUN_0040d514(&pppuStack_e8);
  *unaff_x19 = uVar9;
  puVar7 = unaff_x19 + 1;
  *puVar7 = uVar9;
  *(undefined1 *)(unaff_x19 + 2) = 0;
  *(undefined1 *)(unaff_x19 + 8) = 0;
  FUN_00648028();
  func_0x006483d8(uStack_48);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  FUN_0040d514(&pppuStack_e8);
  func_0x00648430();
  func_0x006484b8();
  uStack_290 = uStack_290 & 0xffffffffffffff00;
  uStack_260 = 0;
  if (*(char *)(param_2 + 8) != '\0') {
    uStack_288 = unaff_x19[5];
    uStack_290 = unaff_x19[4];
    uStack_280 = unaff_x19[6];
    unaff_x19[4] = 0;
    unaff_x19[5] = 0;
    uStack_270 = unaff_x19[8];
    uStack_278 = unaff_x19[7];
    unaff_x19[6] = 0;
    unaff_x19[7] = 0;
    uStack_268 = unaff_x19[9];
    unaff_x19[8] = 0;
    unaff_x19[9] = 0;
    uStack_260 = 1;
    FUN_0064810c(unaff_x19 + 4);
  }
  uStack_298 = unaff_x19[3];
  unaff_x19[3] = 0;
  FUN_006481bc(auStack_258,&uStack_298);
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  FUN_006481bc(auStack_2d8,&uStack_320);
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  FUN_0064829c(&lStack_1d8,auStack_258);
  FUN_0064829c(alStack_218,auStack_2d8);
  uStack_190 = 0;
  puStack_198 = puVar7;
  do {
    if ((((bStack_1a0 & 1) == 0) && ((bStack_1e0 & 1) == 0)) || (lStack_1d8 == alStack_218[0])) {
      uStack_190 = 1;
      FUN_00648270(&puStack_198);
      func_0x00648338(alStack_218);
      func_0x00648130(&uStack_1d0);
      func_0x00648338(auStack_2d8);
      func_0x00648508();
      func_0x00648338(auStack_258);
      func_0x00648338(&uStack_298);
      return;
    }
    if ((bStack_1a0 & 1) == 0) {
      uVar16 = *(undefined8 *)(lStack_1d8 + 8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_188,lStack_1d8 + 0x58);
      FUN_00461b38(auStack_170,"expected row but query reported done. sql:",auStack_188);
      FUN_00641f40(uVar16,0x65,auStack_170);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_170);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_188);
    }
    puVar18 = (undefined8 *)puVar7[1];
    if (puVar18 < (undefined8 *)puVar7[2]) {
      puVar18[2] = uStack_1c0;
      puVar18[1] = uStack_1c8;
      *puVar18 = uStack_1d0;
      uStack_1c8 = 0;
      uStack_1c0 = 0;
      uStack_1d0 = 0;
      puVar18[4] = uStack_1b0;
      puVar18[3] = uStack_1b8;
      puVar18[5] = uStack_1a8;
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      uStack_1b8 = 0;
      puVar18 = puVar18 + 6;
    }
    else {
      puVar17 = (undefined8 *)*puVar7;
      lVar14 = (long)puVar18 - (long)puVar17;
      uVar9 = lVar14 / 0x30 + 1;
      if (0x555555555555555 < uVar9) {
        func_0x00648264();
LAB_00646d00:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x646d04);
        (*pcVar4)();
      }
      uVar3 = ((long)puVar7[2] - (long)puVar17) / 0x30;
      uVar15 = uVar3 * 2;
      if (uVar15 < uVar9 || uVar15 - uVar9 == 0) {
        uVar15 = uVar9;
      }
      if (0x2aaaaaaaaaaaaa9 < uVar3) {
        uVar15 = 0x555555555555555;
      }
      if (0x555555555555555 < uVar15) {
        FUN_0040cee8();
        goto LAB_00646d00;
      }
      lVar8 = uVar15 * 0x30;
      __Znwm();
      puVar2 = (undefined8 *)(lVar8 + lVar14);
      puVar2[1] = uStack_1c8;
      *puVar2 = uStack_1d0;
      puVar2[2] = uStack_1c0;
      uStack_1d0 = 0;
      uStack_1c8 = 0;
      puVar2[4] = uStack_1b0;
      puVar2[3] = uStack_1b8;
      puVar2[5] = uStack_1a8;
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      puVar11 = puVar2 + (lVar14 / -0x30) * 6;
      puVar13 = puVar17;
      while (puVar13 != puVar18) {
        func_0x00648380(puVar11);
        puVar11 = (undefined8 *)(extraout_x8_00 + 0x30);
        puVar13 = (undefined8 *)(extraout_x9 + 0x30);
      }
      for (; puVar17 != puVar18; puVar17 = puVar17 + 6) {
        func_0x0064799c(puVar17);
      }
      puVar18 = puVar2 + 6;
      uVar9 = *puVar7;
      *puVar7 = (ulong)(puVar2 + (lVar14 / -0x30) * 6);
      puVar7[1] = (ulong)puVar18;
      puVar7[2] = lVar8 + uVar15 * 0x30;
      if (uVar9 != 0) {
        __ZdlPv();
      }
    }
    puVar7[1] = (ulong)puVar18;
    FUN_00648028(&lStack_1d8);
  } while( true );
}



/* Entry: 00646a20; end: 00646d73;  */

void FUN_00646a20(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long extraout_x8;
  undefined8 *puVar7;
  long extraout_x9;
  ulong uVar8;
  ulong *unaff_x19;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [64];
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  undefined1 auStack_168 [64];
  long alStack_128 [7];
  byte bStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  byte bStack_b0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  func_0x006484b8();
  uStack_1a0 = uStack_1a0 & 0xffffffffffffff00;
  uStack_170 = 0;
  if (*(char *)(param_2 + 0x40) != '\0') {
    uStack_198 = *(undefined8 *)(unaff_x20 + 0x18);
    uStack_1a0 = *(ulong *)(unaff_x20 + 0x10);
    uStack_190 = *(undefined8 *)(unaff_x20 + 0x20);
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
    uStack_180 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack_188 = *(undefined8 *)(unaff_x20 + 0x28);
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    uStack_178 = *(undefined8 *)(unaff_x20 + 0x38);
    *(undefined8 *)(unaff_x20 + 0x30) = 0;
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
    uStack_170 = 1;
    FUN_0064810c(unaff_x20 + 0x10);
  }
  uStack_1a8 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = 0;
  FUN_006481bc(auStack_168,&uStack_1a8);
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  FUN_006481bc(auStack_1e8,&uStack_230);
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  FUN_0064829c(&lStack_e8,auStack_168);
  FUN_0064829c(alStack_128,auStack_1e8);
  do {
    if ((((bStack_b0 & 1) == 0) && ((bStack_f0 & 1) == 0)) || (lStack_e8 == alStack_128[0])) {
      FUN_00648270(&stack0xffffffffffffff58);
      func_0x00648338(alStack_128);
      func_0x00648130(&uStack_e0);
      func_0x00648338(auStack_1e8);
      func_0x00648508();
      func_0x00648338(auStack_168);
      func_0x00648338(&uStack_1a8);
      return;
    }
    if ((bStack_b0 & 1) == 0) {
      uVar10 = *(undefined8 *)(lStack_e8 + 8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_98,lStack_e8 + 0x58);
      FUN_00461b38(auStack_80,"expected row but query reported done. sql:",auStack_98);
      FUN_00641f40(uVar10,0x65,auStack_80);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
    }
    puVar12 = (undefined8 *)unaff_x19[1];
    if (puVar12 < (undefined8 *)unaff_x19[2]) {
      puVar12[2] = uStack_d0;
      puVar12[1] = uStack_d8;
      *puVar12 = uStack_e0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_e0 = 0;
      puVar12[4] = uStack_c0;
      puVar12[3] = uStack_c8;
      puVar12[5] = uStack_b8;
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_c8 = 0;
      puVar12 = puVar12 + 6;
    }
    else {
      puVar11 = (undefined8 *)*unaff_x19;
      lVar9 = (long)puVar12 - (long)puVar11;
      uVar5 = lVar9 / 0x30 + 1;
      if (0x555555555555555 < uVar5) {
        func_0x00648264();
LAB_00646d00:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x646d04);
        (*pcVar3)();
      }
      uVar2 = ((long)unaff_x19[2] - (long)puVar11) / 0x30;
      uVar8 = uVar2 * 2;
      if (uVar8 < uVar5 || uVar8 - uVar5 == 0) {
        uVar8 = uVar5;
      }
      if (0x2aaaaaaaaaaaaa9 < uVar2) {
        uVar8 = 0x555555555555555;
      }
      if (0x555555555555555 < uVar8) {
        FUN_0040cee8();
        goto LAB_00646d00;
      }
      lVar4 = uVar8 * 0x30;
      __Znwm();
      puVar1 = (undefined8 *)(lVar4 + lVar9);
      puVar1[1] = uStack_d8;
      *puVar1 = uStack_e0;
      puVar1[2] = uStack_d0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      puVar1[4] = uStack_c0;
      puVar1[3] = uStack_c8;
      puVar1[5] = uStack_b8;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      puVar6 = puVar1 + (lVar9 / -0x30) * 6;
      puVar7 = puVar11;
      while (puVar7 != puVar12) {
        func_0x00648380(puVar6);
        puVar6 = (undefined8 *)(extraout_x8 + 0x30);
        puVar7 = (undefined8 *)(extraout_x9 + 0x30);
      }
      for (; puVar11 != puVar12; puVar11 = puVar11 + 6) {
        func_0x0064799c(puVar11);
      }
      puVar12 = puVar1 + 6;
      uVar5 = *unaff_x19;
      *unaff_x19 = (ulong)(puVar1 + (lVar9 / -0x30) * 6);
      unaff_x19[1] = (ulong)puVar12;
      unaff_x19[2] = lVar4 + uVar8 * 0x30;
      if (uVar5 != 0) {
        __ZdlPv();
      }
    }
    unaff_x19[1] = (ulong)puVar12;
    FUN_00648028(&lStack_e8);
  } while( true );
}



/* Entry: 00646d74; end: 00646e8f;  */

void FUN_00646d74(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  long *plVar4;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [23];
  char cStack_69;
  code *pcStack_68;
  undefined **ppuStack_60;
  
  func_0x006484b8();
  func_0x0064849c();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_00425cb4(auStack_b0,&UNK_0091003f);
  FUN_005b9b08(auStack_98,auStack_b0,param_3);
  FUN_0052fce8(auStack_80,auStack_98,&UNK_00910052);
  uVar1 = cStack_69 == '\0';
  pcStack_68 = FUN_00647b10;
  ppuStack_60 = &PTR_FUN_00a0c928;
  FUN_006405bc();
  func_0x0064847c();
  func_0x00648494();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x006484d8();
  func_0x006483d8(extraout_x8);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x0064847c();
    func_0x00648494();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
    func_0x006484d8();
    FUN_00647e98();
    func_0x00648438();
    if (*(long *)(unaff_x19 + 0x70) != 0) {
      plVar4 = *(long **)(unaff_x19 + 0x68);
      plVar2 = *(long **)(*(long *)(unaff_x19 + 0x60) + 8);
      lVar3 = *plVar4;
      *(long **)(lVar3 + 8) = plVar2;
      *plVar2 = lVar3;
      *(undefined8 *)(unaff_x19 + 0x70) = 0;
      while (plVar4 != (long *)(unaff_x19 + 0x60)) {
        plVar2 = (long *)plVar4[1];
        (**(code **)plVar4[2])();
        __ZdlPv(plVar4);
        plVar4 = plVar2;
      }
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x19 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00779ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutexD1Ev_00998be0)(unaff_x19);
    return;
  }
  return;
}



/* Entry: 00646e90; end: 00646f0f;  */

void FUN_00646e90(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    plVar3 = *(long **)(param_1 + 0x68);
    plVar1 = *(long **)(*(long *)(param_1 + 0x60) + 8);
    lVar2 = *plVar3;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    *(undefined8 *)(param_1 + 0x70) = 0;
    while (plVar3 != (long *)(param_1 + 0x60)) {
      plVar1 = (long *)plVar3[1];
      (**(code **)plVar3[2])();
      __ZdlPv(plVar3);
      plVar3 = plVar1;
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00779ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_00998be0)(param_1);
  return;
}



/* Entry: 00646f10; end: 00646f3b;  */

/* WARNING: Possible PIC construction at 0x00647000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00647094: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00647198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006476a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006476bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006476d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00647648: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006475f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00647098) */
/* WARNING: Removing unreachable block (ram,0x006470ac) */
/* WARNING: Removing unreachable block (ram,0x006470c0) */
/* WARNING: Removing unreachable block (ram,0x0064719c) */
/* WARNING: Removing unreachable block (ram,0x006471a8) */
/* WARNING: Removing unreachable block (ram,0x0064764c) */
/* WARNING: Removing unreachable block (ram,0x00647658) */
/* WARNING: Removing unreachable block (ram,0x00647664) */
/* WARNING: Removing unreachable block (ram,0x006476d4) */
/* WARNING: Removing unreachable block (ram,0x006476e0) */
/* WARNING: Removing unreachable block (ram,0x006476ec) */
/* WARNING: Removing unreachable block (ram,0x006476c0) */
/* WARNING: Removing unreachable block (ram,0x006476cc) */
/* WARNING: Removing unreachable block (ram,0x006476a4) */
/* WARNING: Removing unreachable block (ram,0x00647708) */
/* WARNING: Removing unreachable block (ram,0x006476b4) */
/* WARNING: Removing unreachable block (ram,0x00647004) */
/* WARNING: Removing unreachable block (ram,0x006475f8) */
/* WARNING: Removing unreachable block (ram,0x00647600) */

void FUN_00646f10(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x23;
  bool bVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *******unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar19;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 ******ppppppuStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
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
  
  if (param_1 == param_2) {
    return;
  }
  puVar13 = (undefined8 *)(LZCOUNT(((long)param_2 - (long)param_1) / 0x30) << 1 ^ 0x7e);
  ppuVar5 = &puStack_d0;
  ppuVar6 = &puStack_d0;
  bVar15 = true;
  func_0x00648460();
LAB_00646f6c:
  puVar10 = unaff_x19 + -6;
  puStack_c8 = unaff_x19 + -0xc;
  puStack_d0 = unaff_x19 + -0x12;
  puVar8 = unaff_x20;
LAB_00646f80:
  unaff_x20 = puVar8;
  uVar14 = (long)unaff_x19 - (long)unaff_x20;
  uVar18 = (long)uVar14 / 0x30;
  switch(uVar18) {
  case 0:
  case 1:
    goto LAB_0064720c;
  case 2:
    puVar13 = puVar10;
    func_0x006478c8(puVar10,unaff_x20);
    if ((int)puVar13 != 0) {
      unaff_x23 = unaff_x20;
      func_0x00648404(unaff_x20,puVar10);
      ppuVar6 = &puStack_d0;
      puVar11 = puVar10;
      goto SUB_0064790c;
    }
    goto LAB_0064720c;
  case 3:
    puVar8 = unaff_x20 + 6;
    unaff_x23 = unaff_x20;
    puVar12 = puVar10;
    func_0x00648404();
    puVar11 = puVar8;
    puVar9 = puVar8;
    puStack_100 = puVar13;
    puStack_f8 = puVar10;
    puStack_f0 = unaff_x20;
    puStack_e8 = unaff_x19;
    ppppppuStack_e0 = unaff_x29;
    uStack_d8 = unaff_x30;
    func_0x00648378();
    puVar13 = puVar11;
    func_0x0064832c();
    if (((ulong)puVar11 & 1) == 0) {
      if ((int)puVar13 == 0) {
        return;
      }
      func_0x00648538();
      func_0x00648378();
      if ((int)puVar8 == 0) {
        return;
      }
      func_0x006484ac();
      ppuVar6 = &puStack_d0;
      unaff_x23 = puVar8;
      puVar11 = puVar9;
      unaff_x19 = puStack_e8;
      unaff_x20 = puStack_f0;
      unaff_x29 = (undefined8 *******)ppppppuStack_e0;
      unaff_x30 = uStack_d8;
    }
    else {
      puVar11 = puVar12;
      unaff_x19 = puStack_e8;
      unaff_x20 = puStack_f0;
      unaff_x29 = (undefined8 *******)ppppppuStack_e0;
      unaff_x30 = uStack_d8;
      if ((int)puVar13 == 0) {
        func_0x006484ac();
        unaff_x30 = 0x6475f8;
        ppuVar6 = &puStack_100;
        unaff_x23 = puVar13;
        puVar11 = puVar9;
        unaff_x19 = puVar8;
        unaff_x20 = puVar12;
        unaff_x29 = &ppppppuStack_e0;
      }
    }
    goto SUB_0064790c;
  case 4:
    puVar11 = unaff_x20 + 6;
    puVar12 = puVar10;
    func_0x00648404(unaff_x20,puVar11,unaff_x20 + 0xc);
    break;
  case 5:
    puVar11 = unaff_x20 + 6;
    puVar8 = unaff_x20 + 0xc;
    puVar9 = unaff_x20 + 0x12;
    func_0x00648404(unaff_x20,puVar11,puVar8,puVar9,puVar10);
    ppuVar5 = (undefined8 **)&uStack_110;
    uStack_110 = 0x30;
    unaff_x29 = &ppppppuStack_e0;
    puVar12 = puVar9;
    puStack_108 = unaff_x23;
    puStack_100 = puVar13;
    puStack_f8 = puVar10;
    puStack_f0 = unaff_x20;
    puStack_e8 = unaff_x19;
    func_0x00648460();
    unaff_x30 = 0x6476a4;
    puVar10 = puVar8;
    puVar13 = puVar9;
    break;
  default:
    goto code_r0x00646f94;
  }
  *(undefined8 **)((long)ppuVar5 + -0x30) = puVar13;
  *(undefined8 **)((long)ppuVar5 + -0x28) = puVar10;
  *(undefined8 **)((long)ppuVar5 + -0x20) = unaff_x20;
  *(undefined8 **)((long)ppuVar5 + -0x18) = unaff_x19;
  *(undefined8 ********)((long)ppuVar5 + -0x10) = unaff_x29;
  *(undefined8 *)((long)ppuVar5 + -8) = unaff_x30;
  func_0x00648460();
  FUN_00647598();
  func_0x00648378();
  if ((int)puVar12 == 0) {
    return;
  }
  func_0x006483b4();
  unaff_x30 = 0x64764c;
  ppuVar6 = (undefined8 **)((long)ppuVar5 + -0x30);
  unaff_x23 = puVar12;
  unaff_x29 = (undefined8 *******)((long)ppuVar5 + -0x10);
SUB_0064790c:
  *(undefined8 **)((long)ppuVar6 + -0x20) = unaff_x20;
  *(undefined8 **)((long)ppuVar6 + -0x18) = unaff_x19;
  *(undefined8 ********)((long)ppuVar6 + -0x10) = unaff_x29;
  *(undefined8 *)((long)ppuVar6 + -8) = unaff_x30;
  uVar19 = *unaff_x23;
  *(undefined8 *)((long)ppuVar6 + -0x48) = unaff_x23[1];
  *(undefined8 *)((long)ppuVar6 + -0x50) = uVar19;
  *(undefined8 *)((long)ppuVar6 + -0x40) = unaff_x23[2];
  *unaff_x23 = 0;
  unaff_x23[1] = 0;
  uVar19 = unaff_x23[3];
  unaff_x23[2] = 0;
  unaff_x23[3] = 0;
  *(undefined8 *)((long)ppuVar6 + -0x30) = unaff_x23[4];
  *(undefined8 *)((long)ppuVar6 + -0x38) = uVar19;
  *(undefined8 *)((long)ppuVar6 + -0x28) = unaff_x23[5];
  unaff_x23[4] = 0;
  unaff_x23[5] = 0;
  func_0x00647970();
  func_0x00647970(puVar11,(undefined1 *)((long)ppuVar6 + -0x50));
  func_0x00648450();
  return;
code_r0x00646f94:
  if ((long)uVar14 < 0x480) {
    if (bVar15 == false) {
      if (unaff_x20 != unaff_x19) {
        while (puVar13 = unaff_x20, unaff_x20 = puVar13 + 6, unaff_x20 != unaff_x19) {
          puVar8 = unaff_x20;
          func_0x00648378();
          if ((int)puVar8 != 0) {
            uStack_88 = puVar13[7];
            uStack_90 = *unaff_x20;
            uStack_80 = puVar13[8];
            puVar13[7] = 0;
            puVar13[8] = 0;
            *unaff_x20 = 0;
            uStack_70 = puVar13[10];
            uStack_78 = puVar13[9];
            uStack_68 = puVar13[0xb];
            puVar13[9] = 0;
            puVar13[10] = 0;
            puVar13[0xb] = 0;
            do {
              puVar8 = puVar13;
              func_0x006484d0(puVar8 + 6);
              uVar18 = 0;
              func_0x00648378();
              puVar13 = puVar8 + -6;
            } while ((uVar18 & 1) != 0);
            func_0x00647970(puVar8,&uStack_90);
            func_0x00648428();
          }
        }
      }
      goto LAB_0064720c;
    }
    if (unaff_x20 == unaff_x19) goto LAB_0064720c;
    lVar17 = 0;
    puVar13 = unaff_x20;
    goto LAB_006472d0;
  }
  if (puVar13 == (undefined8 *)0x0) {
    if (unaff_x20 == unaff_x19) goto LAB_0064720c;
    uVar14 = uVar18 - 2 >> 1;
    puVar13 = unaff_x20 + uVar14 * 6;
    do {
      puVar8 = unaff_x20;
      FUN_006479c4(unaff_x20,uVar18,puVar13);
      uVar14 = uVar14 - 1;
      puVar13 = puVar13 + -6;
    } while (-1 < (long)uVar14);
    do {
      if ((long)uVar18 < 2) goto LAB_0064720c;
      uVar14 = 0;
      uStack_b8 = unaff_x20[1];
      uStack_c0 = *unaff_x20;
      uStack_b0 = unaff_x20[2];
      unaff_x20[1] = 0;
      unaff_x20[2] = 0;
      *unaff_x20 = 0;
      uStack_a0 = unaff_x20[4];
      uStack_a8 = unaff_x20[3];
      uStack_98 = unaff_x20[5];
      unaff_x20[4] = 0;
      unaff_x20[5] = 0;
      unaff_x20[3] = 0;
      puVar13 = unaff_x20;
      do {
        iVar7 = (int)puVar8;
        uVar2 = uVar14 << 1 | 1;
        uVar1 = uVar14 * 2 + 2;
        puVar10 = puVar13 + uVar14 * 6 + 6;
        uVar3 = uVar2;
        if ((long)uVar1 < (long)uVar18) {
          func_0x006484c4();
          puVar10 = puVar13 + uVar14 * 6 + 0xc;
          uVar3 = uVar1;
          if (iVar7 == 0) {
            puVar10 = puVar13 + uVar14 * 6 + 6;
            uVar3 = uVar2;
          }
        }
        uVar14 = uVar3;
        func_0x006484d0();
        puVar8 = puVar13;
        puVar13 = puVar10;
      } while ((long)uVar14 <= (long)(uVar18 - 2 >> 1));
      unaff_x19 = unaff_x19 + -6;
      if (puVar10 == unaff_x19) {
        func_0x00647970(puVar10,&uStack_c0);
      }
      else {
        func_0x006484ac();
        func_0x00647970();
        func_0x00647970(unaff_x19,&uStack_c0);
        uVar14 = (long)puVar10 + (0x30 - (long)unaff_x20);
        if (0x30 < (long)uVar14) {
          uVar14 = uVar14 / 0x30 - 2 >> 1;
          puVar13 = unaff_x20 + uVar14 * 6;
          func_0x00648378();
          if ((int)puVar13 != 0) {
            uStack_88 = puVar10[1];
            uStack_90 = *puVar10;
            uStack_80 = puVar10[2];
            puVar10[1] = 0;
            puVar10[2] = 0;
            *puVar10 = 0;
            uStack_70 = puVar10[4];
            uStack_78 = puVar10[3];
            uStack_68 = puVar10[5];
            puVar10[4] = 0;
            puVar10[5] = 0;
            puVar10[3] = 0;
            puVar13 = unaff_x20 + uVar14 * 6;
            do {
              puVar8 = puVar13;
              func_0x006483b4();
              func_0x00647970();
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1 >> 1;
              puVar13 = unaff_x20 + uVar14 * 6;
              puVar10 = puVar13;
              func_0x006478c8(puVar13,&uStack_90);
            } while (((ulong)puVar10 & 1) != 0);
            func_0x00647970(puVar8,&uStack_90);
            func_0x00648428();
          }
        }
      }
      puVar8 = &uStack_c0;
      func_0x0064799c();
      uVar18 = uVar18 - 1;
    } while( true );
  }
  puVar11 = unaff_x20 + (uVar18 >> 1) * 6;
  if (0x1800 < uVar14) {
    FUN_00647598(unaff_x20,puVar11,puVar10);
    FUN_00647598(unaff_x20 + 6,puVar11 + -6,puStack_c8);
    FUN_00647598(unaff_x20 + 0xc,puVar11 + 6,puStack_d0);
    FUN_00647598(puVar11 + -6,puVar11,puVar11 + 6);
    unaff_x30 = 0x647004;
    ppuVar6 = &puStack_d0;
    unaff_x23 = unaff_x20;
    unaff_x29 = (undefined8 *******)&stack0xfffffffffffffff0;
    goto SUB_0064790c;
  }
  FUN_00647598(puVar11,unaff_x20,puVar10);
  puVar13 = (undefined8 *)((long)puVar13 + -1);
  puVar11 = unaff_x19;
  if (!bVar15) {
    puVar8 = unaff_x20 + -6;
    func_0x006478c8(puVar8,unaff_x20);
    if (((ulong)puVar8 & 1) == 0) {
      func_0x00648340();
      puVar9 = &uStack_90;
      func_0x00648378();
      puVar8 = unaff_x20;
      if (((ulong)puVar9 & 1) == 0) {
        do {
          puVar8 = puVar8 + 6;
          if (unaff_x19 <= puVar8) break;
          func_0x006483ec();
        } while ((int)puVar9 == 0);
      }
      else {
        do {
          puVar8 = puVar8 + 6;
          func_0x006483ec();
        } while (((ulong)puVar9 & 1) == 0);
      }
      if (puVar8 < unaff_x19) {
        do {
          func_0x0064846c();
        } while (((ulong)puVar9 & 1) != 0);
      }
      if (puVar8 < unaff_x19) {
        unaff_x30 = 0x64719c;
        ppuVar6 = &puStack_d0;
        unaff_x23 = puVar8;
        unaff_x29 = (undefined8 *******)&stack0xfffffffffffffff0;
        goto SUB_0064790c;
      }
      param_1 = puVar8 + -6;
      if (unaff_x20 != param_1) {
        func_0x00647970(unaff_x20,param_1);
      }
      func_0x00647970(param_1,&uStack_90);
      func_0x00648428();
      bVar15 = false;
      goto LAB_00646f80;
    }
  }
  lVar17 = 0;
  func_0x00648340();
  do {
    lVar17 = lVar17 + 0x30;
    uVar18 = lVar17 + (long)unaff_x20;
    func_0x006478c8(uVar18,&uStack_90);
  } while ((uVar18 & 1) != 0);
  unaff_x23 = (undefined8 *)((long)unaff_x20 + lVar17);
  if (lVar17 == 0x30) {
    do {
      if (unaff_x19 <= unaff_x23) break;
      func_0x00648440();
    } while ((uVar18 & 1) == 0);
  }
  else {
    do {
      func_0x00648440();
    } while ((int)uVar18 == 0);
  }
  if (unaff_x23 < unaff_x19) {
    unaff_x30 = 0x647098;
    ppuVar6 = &puStack_d0;
    unaff_x29 = (undefined8 *******)&stack0xfffffffffffffff0;
    goto SUB_0064790c;
  }
  puVar11 = unaff_x23 + -6;
  if (unaff_x20 != puVar11) {
    func_0x00647970(unaff_x20,puVar11);
  }
  func_0x00647970(puVar11,&uStack_90);
  func_0x00648428();
  puVar8 = unaff_x23;
  if (unaff_x23 < unaff_x19) goto LAB_00647118;
  puVar9 = unaff_x20;
  FUN_0064771c(unaff_x20,puVar11);
  param_1 = unaff_x23;
  FUN_0064771c(unaff_x23,unaff_x19);
  if ((int)param_1 == 0) goto code_r0x00647114;
  unaff_x19 = puVar11;
  if (((ulong)puVar9 & 1) != 0) goto LAB_0064720c;
  goto LAB_00646f6c;
LAB_006472d0:
  puVar8 = puVar13 + 6;
  if (puVar8 == unaff_x19) {
LAB_0064720c:
    func_0x00648404(unaff_x30);
    return;
  }
  func_0x006483b4();
  func_0x006478c8();
  if ((int)param_1 != 0) {
    uStack_88 = puVar13[7];
    uStack_90 = *puVar8;
    uStack_80 = puVar13[8];
    puVar13[7] = 0;
    puVar13[8] = 0;
    *puVar8 = 0;
    uStack_70 = puVar13[10];
    uStack_78 = puVar13[9];
    uStack_68 = puVar13[0xb];
    puVar13[9] = 0;
    puVar13[10] = 0;
    puVar13[0xb] = 0;
    lVar4 = lVar17;
    do {
      lVar16 = lVar4;
      func_0x00647970((long)unaff_x20 + lVar16 + 0x30);
      param_1 = unaff_x20;
      if (lVar16 == 0) goto LAB_00647350;
      puVar13 = &uStack_90;
      func_0x006478c8(puVar13,lVar16 + -0x30 + (long)unaff_x20);
      lVar4 = lVar16 + -0x30;
    } while (((ulong)puVar13 & 1) != 0);
    param_1 = (undefined8 *)((long)unaff_x20 + lVar16);
LAB_00647350:
    func_0x00647970(param_1,&uStack_90);
    func_0x00648428();
  }
  lVar17 = lVar17 + 0x30;
  puVar13 = puVar8;
  goto LAB_006472d0;
code_r0x00647114:
  if (((ulong)puVar9 & 1) == 0) {
LAB_00647118:
    FUN_00646f3c(unaff_x20,puVar11,puVar13,bVar15);
    bVar15 = false;
    param_1 = unaff_x20;
  }
  goto LAB_00646f80;
}



/* Entry: 00646f3c; end: 00647597;  */

/* WARNING: Possible PIC construction at 0x00647000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00647094: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00647198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006476a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006476bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006476d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00647648: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006475f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00647098) */
/* WARNING: Removing unreachable block (ram,0x006470ac) */
/* WARNING: Removing unreachable block (ram,0x006470c0) */
/* WARNING: Removing unreachable block (ram,0x0064719c) */
/* WARNING: Removing unreachable block (ram,0x006471a8) */
/* WARNING: Removing unreachable block (ram,0x0064764c) */
/* WARNING: Removing unreachable block (ram,0x00647658) */
/* WARNING: Removing unreachable block (ram,0x00647664) */
/* WARNING: Removing unreachable block (ram,0x006476d4) */
/* WARNING: Removing unreachable block (ram,0x006476e0) */
/* WARNING: Removing unreachable block (ram,0x006476ec) */
/* WARNING: Removing unreachable block (ram,0x006476c0) */
/* WARNING: Removing unreachable block (ram,0x006476cc) */
/* WARNING: Removing unreachable block (ram,0x006476a4) */
/* WARNING: Removing unreachable block (ram,0x00647708) */
/* WARNING: Removing unreachable block (ram,0x006476b4) */
/* WARNING: Removing unreachable block (ram,0x00647004) */
/* WARNING: Removing unreachable block (ram,0x006475f8) */
/* WARNING: Removing unreachable block (ram,0x00647600) */

void FUN_00646f3c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x23;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *******unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar17;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 ******ppppppuStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
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
  
  ppuVar5 = &puStack_d0;
  ppuVar6 = &puStack_d0;
  func_0x00648460();
LAB_00646f6c:
  puVar11 = unaff_x19 + -6;
  puStack_c8 = unaff_x19 + -0xc;
  puStack_d0 = unaff_x19 + -0x12;
  puVar8 = unaff_x20;
LAB_00646f80:
  unaff_x20 = puVar8;
  uVar13 = (long)unaff_x19 - (long)unaff_x20;
  uVar16 = (long)uVar13 / 0x30;
  switch(uVar16) {
  case 0:
  case 1:
    goto LAB_0064720c;
  case 2:
    puVar8 = puVar11;
    func_0x006478c8(puVar11,unaff_x20);
    if ((int)puVar8 != 0) {
      unaff_x23 = unaff_x20;
      func_0x00648404(unaff_x20,puVar11);
      ppuVar6 = &puStack_d0;
      puVar10 = puVar11;
      goto SUB_0064790c;
    }
    goto LAB_0064720c;
  case 3:
    puVar8 = unaff_x20 + 6;
    unaff_x23 = unaff_x20;
    puVar12 = puVar11;
    func_0x00648404();
    puVar10 = puVar8;
    puVar9 = puVar8;
    puStack_100 = param_3;
    puStack_f8 = puVar11;
    puStack_f0 = unaff_x20;
    puStack_e8 = unaff_x19;
    ppppppuStack_e0 = unaff_x29;
    uStack_d8 = unaff_x30;
    func_0x00648378();
    puVar11 = puVar10;
    func_0x0064832c();
    if (((ulong)puVar10 & 1) == 0) {
      if ((int)puVar11 == 0) {
        return;
      }
      func_0x00648538();
      func_0x00648378();
      if ((int)puVar8 == 0) {
        return;
      }
      func_0x006484ac();
      ppuVar6 = &puStack_d0;
      unaff_x23 = puVar8;
      puVar10 = puVar9;
      unaff_x19 = puStack_e8;
      unaff_x20 = puStack_f0;
      unaff_x29 = (undefined8 *******)ppppppuStack_e0;
      unaff_x30 = uStack_d8;
    }
    else {
      puVar10 = puVar12;
      unaff_x19 = puStack_e8;
      unaff_x20 = puStack_f0;
      unaff_x29 = (undefined8 *******)ppppppuStack_e0;
      unaff_x30 = uStack_d8;
      if ((int)puVar11 == 0) {
        func_0x006484ac();
        unaff_x30 = 0x6475f8;
        ppuVar6 = &puStack_100;
        unaff_x23 = puVar11;
        puVar10 = puVar9;
        unaff_x19 = puVar8;
        unaff_x20 = puVar12;
        unaff_x29 = &ppppppuStack_e0;
      }
    }
    goto SUB_0064790c;
  case 4:
    puVar10 = unaff_x20 + 6;
    puVar12 = puVar11;
    func_0x00648404(unaff_x20,puVar10,unaff_x20 + 0xc);
    break;
  case 5:
    puVar10 = unaff_x20 + 6;
    puVar8 = unaff_x20 + 0xc;
    puVar9 = unaff_x20 + 0x12;
    func_0x00648404(unaff_x20,puVar10,puVar8,puVar9,puVar11);
    ppuVar5 = (undefined8 **)&uStack_110;
    uStack_110 = 0x30;
    unaff_x29 = &ppppppuStack_e0;
    puVar12 = puVar9;
    puStack_108 = unaff_x23;
    puStack_100 = param_3;
    puStack_f8 = puVar11;
    puStack_f0 = unaff_x20;
    puStack_e8 = unaff_x19;
    func_0x00648460();
    unaff_x30 = 0x6476a4;
    puVar11 = puVar8;
    param_3 = puVar9;
    break;
  default:
    goto code_r0x00646f94;
  }
  *(undefined8 **)((long)ppuVar5 + -0x30) = param_3;
  *(undefined8 **)((long)ppuVar5 + -0x28) = puVar11;
  *(undefined8 **)((long)ppuVar5 + -0x20) = unaff_x20;
  *(undefined8 **)((long)ppuVar5 + -0x18) = unaff_x19;
  *(undefined8 ********)((long)ppuVar5 + -0x10) = unaff_x29;
  *(undefined8 *)((long)ppuVar5 + -8) = unaff_x30;
  func_0x00648460();
  FUN_00647598();
  func_0x00648378();
  if ((int)puVar12 == 0) {
    return;
  }
  func_0x006483b4();
  unaff_x30 = 0x64764c;
  ppuVar6 = (undefined8 **)((long)ppuVar5 + -0x30);
  unaff_x23 = puVar12;
  unaff_x29 = (undefined8 *******)((long)ppuVar5 + -0x10);
SUB_0064790c:
  *(undefined8 **)((long)ppuVar6 + -0x20) = unaff_x20;
  *(undefined8 **)((long)ppuVar6 + -0x18) = unaff_x19;
  *(undefined8 ********)((long)ppuVar6 + -0x10) = unaff_x29;
  *(undefined8 *)((long)ppuVar6 + -8) = unaff_x30;
  uVar17 = *unaff_x23;
  *(undefined8 *)((long)ppuVar6 + -0x48) = unaff_x23[1];
  *(undefined8 *)((long)ppuVar6 + -0x50) = uVar17;
  *(undefined8 *)((long)ppuVar6 + -0x40) = unaff_x23[2];
  *unaff_x23 = 0;
  unaff_x23[1] = 0;
  uVar17 = unaff_x23[3];
  unaff_x23[2] = 0;
  unaff_x23[3] = 0;
  *(undefined8 *)((long)ppuVar6 + -0x30) = unaff_x23[4];
  *(undefined8 *)((long)ppuVar6 + -0x38) = uVar17;
  *(undefined8 *)((long)ppuVar6 + -0x28) = unaff_x23[5];
  unaff_x23[4] = 0;
  unaff_x23[5] = 0;
  func_0x00647970();
  func_0x00647970(puVar10,(undefined1 *)((long)ppuVar6 + -0x50));
  func_0x00648450();
  return;
code_r0x00646f94:
  if ((long)uVar13 < 0x480) {
    if ((param_4 & 1) == 0) {
      if (unaff_x20 != unaff_x19) {
        while (puVar8 = unaff_x20, unaff_x20 = puVar8 + 6, unaff_x20 != unaff_x19) {
          puVar11 = unaff_x20;
          func_0x00648378();
          if ((int)puVar11 != 0) {
            uStack_88 = puVar8[7];
            uStack_90 = *unaff_x20;
            uStack_80 = puVar8[8];
            puVar8[7] = 0;
            puVar8[8] = 0;
            *unaff_x20 = 0;
            uStack_70 = puVar8[10];
            uStack_78 = puVar8[9];
            uStack_68 = puVar8[0xb];
            puVar8[9] = 0;
            puVar8[10] = 0;
            puVar8[0xb] = 0;
            do {
              puVar11 = puVar8;
              func_0x006484d0(puVar11 + 6);
              uVar16 = 0;
              func_0x00648378();
              puVar8 = puVar11 + -6;
            } while ((uVar16 & 1) != 0);
            func_0x00647970(puVar11,&uStack_90);
            func_0x00648428();
          }
        }
      }
      goto LAB_0064720c;
    }
    if (unaff_x20 == unaff_x19) goto LAB_0064720c;
    lVar15 = 0;
    puVar8 = unaff_x20;
    goto LAB_006472d0;
  }
  if (param_3 == (undefined8 *)0x0) {
    if (unaff_x20 == unaff_x19) goto LAB_0064720c;
    uVar13 = uVar16 - 2 >> 1;
    puVar8 = unaff_x20 + uVar13 * 6;
    do {
      puVar11 = unaff_x20;
      FUN_006479c4(unaff_x20,uVar16,puVar8);
      uVar13 = uVar13 - 1;
      puVar8 = puVar8 + -6;
    } while (-1 < (long)uVar13);
    do {
      if ((long)uVar16 < 2) goto LAB_0064720c;
      uVar13 = 0;
      uStack_b8 = unaff_x20[1];
      uStack_c0 = *unaff_x20;
      uStack_b0 = unaff_x20[2];
      unaff_x20[1] = 0;
      unaff_x20[2] = 0;
      *unaff_x20 = 0;
      uStack_a0 = unaff_x20[4];
      uStack_a8 = unaff_x20[3];
      uStack_98 = unaff_x20[5];
      unaff_x20[4] = 0;
      unaff_x20[5] = 0;
      unaff_x20[3] = 0;
      puVar8 = unaff_x20;
      do {
        iVar7 = (int)puVar11;
        uVar2 = uVar13 << 1 | 1;
        uVar1 = uVar13 * 2 + 2;
        puVar10 = puVar8 + uVar13 * 6 + 6;
        uVar3 = uVar2;
        if ((long)uVar1 < (long)uVar16) {
          func_0x006484c4();
          puVar10 = puVar8 + uVar13 * 6 + 0xc;
          uVar3 = uVar1;
          if (iVar7 == 0) {
            puVar10 = puVar8 + uVar13 * 6 + 6;
            uVar3 = uVar2;
          }
        }
        uVar13 = uVar3;
        func_0x006484d0();
        puVar11 = puVar8;
        puVar8 = puVar10;
      } while ((long)uVar13 <= (long)(uVar16 - 2 >> 1));
      unaff_x19 = unaff_x19 + -6;
      if (puVar10 == unaff_x19) {
        func_0x00647970(puVar10,&uStack_c0);
      }
      else {
        func_0x006484ac();
        func_0x00647970();
        func_0x00647970(unaff_x19,&uStack_c0);
        uVar13 = (long)puVar10 + (0x30 - (long)unaff_x20);
        if (0x30 < (long)uVar13) {
          uVar13 = uVar13 / 0x30 - 2 >> 1;
          puVar8 = unaff_x20 + uVar13 * 6;
          func_0x00648378();
          if ((int)puVar8 != 0) {
            uStack_88 = puVar10[1];
            uStack_90 = *puVar10;
            uStack_80 = puVar10[2];
            puVar10[1] = 0;
            puVar10[2] = 0;
            *puVar10 = 0;
            uStack_70 = puVar10[4];
            uStack_78 = puVar10[3];
            uStack_68 = puVar10[5];
            puVar10[4] = 0;
            puVar10[5] = 0;
            puVar10[3] = 0;
            puVar8 = unaff_x20 + uVar13 * 6;
            do {
              puVar11 = puVar8;
              func_0x006483b4();
              func_0x00647970();
              if (uVar13 == 0) break;
              uVar13 = uVar13 - 1 >> 1;
              puVar8 = unaff_x20 + uVar13 * 6;
              puVar10 = puVar8;
              func_0x006478c8(puVar8,&uStack_90);
            } while (((ulong)puVar10 & 1) != 0);
            func_0x00647970(puVar11,&uStack_90);
            func_0x00648428();
          }
        }
      }
      puVar11 = &uStack_c0;
      func_0x0064799c();
      uVar16 = uVar16 - 1;
    } while( true );
  }
  puVar10 = unaff_x20 + (uVar16 >> 1) * 6;
  if (0x1800 < uVar13) {
    FUN_00647598(unaff_x20,puVar10,puVar11);
    FUN_00647598(unaff_x20 + 6,puVar10 + -6,puStack_c8);
    FUN_00647598(unaff_x20 + 0xc,puVar10 + 6,puStack_d0);
    FUN_00647598(puVar10 + -6,puVar10,puVar10 + 6);
    unaff_x30 = 0x647004;
    ppuVar6 = &puStack_d0;
    unaff_x23 = unaff_x20;
    unaff_x29 = (undefined8 *******)&stack0xfffffffffffffff0;
    goto SUB_0064790c;
  }
  FUN_00647598(puVar10,unaff_x20,puVar11);
  param_3 = (undefined8 *)((long)param_3 + -1);
  puVar10 = unaff_x19;
  if ((param_4 & 1) == 0) {
    puVar8 = unaff_x20 + -6;
    func_0x006478c8(puVar8,unaff_x20);
    if (((ulong)puVar8 & 1) == 0) {
      func_0x00648340();
      puVar9 = &uStack_90;
      func_0x00648378();
      puVar8 = unaff_x20;
      if (((ulong)puVar9 & 1) == 0) {
        do {
          puVar8 = puVar8 + 6;
          if (unaff_x19 <= puVar8) break;
          func_0x006483ec();
        } while ((int)puVar9 == 0);
      }
      else {
        do {
          puVar8 = puVar8 + 6;
          func_0x006483ec();
        } while (((ulong)puVar9 & 1) == 0);
      }
      if (puVar8 < unaff_x19) {
        do {
          func_0x0064846c();
        } while (((ulong)puVar9 & 1) != 0);
      }
      if (puVar8 < unaff_x19) {
        unaff_x30 = 0x64719c;
        ppuVar6 = &puStack_d0;
        unaff_x23 = puVar8;
        unaff_x29 = (undefined8 *******)&stack0xfffffffffffffff0;
        goto SUB_0064790c;
      }
      param_1 = puVar8 + -6;
      if (unaff_x20 != param_1) {
        func_0x00647970(unaff_x20,param_1);
      }
      func_0x00647970(param_1,&uStack_90);
      func_0x00648428();
      param_4 = 0;
      goto LAB_00646f80;
    }
  }
  lVar15 = 0;
  func_0x00648340();
  do {
    lVar15 = lVar15 + 0x30;
    uVar16 = lVar15 + (long)unaff_x20;
    func_0x006478c8(uVar16,&uStack_90);
  } while ((uVar16 & 1) != 0);
  unaff_x23 = (undefined8 *)((long)unaff_x20 + lVar15);
  if (lVar15 == 0x30) {
    do {
      if (unaff_x19 <= unaff_x23) break;
      func_0x00648440();
    } while ((uVar16 & 1) == 0);
  }
  else {
    do {
      func_0x00648440();
    } while ((int)uVar16 == 0);
  }
  if (unaff_x23 < unaff_x19) {
    unaff_x30 = 0x647098;
    ppuVar6 = &puStack_d0;
    unaff_x29 = (undefined8 *******)&stack0xfffffffffffffff0;
    goto SUB_0064790c;
  }
  puVar10 = unaff_x23 + -6;
  if (unaff_x20 != puVar10) {
    func_0x00647970(unaff_x20,puVar10);
  }
  func_0x00647970(puVar10,&uStack_90);
  func_0x00648428();
  puVar8 = unaff_x23;
  if (unaff_x23 < unaff_x19) goto LAB_00647118;
  puVar9 = unaff_x20;
  FUN_0064771c(unaff_x20,puVar10);
  param_1 = unaff_x23;
  FUN_0064771c(unaff_x23,unaff_x19);
  if ((int)param_1 == 0) goto code_r0x00647114;
  unaff_x19 = puVar10;
  if (((ulong)puVar9 & 1) != 0) goto LAB_0064720c;
  goto LAB_00646f6c;
LAB_006472d0:
  puVar11 = puVar8 + 6;
  if (puVar11 == unaff_x19) {
LAB_0064720c:
    func_0x00648404(unaff_x30);
    return;
  }
  func_0x006483b4();
  func_0x006478c8();
  if ((int)param_1 != 0) {
    uStack_88 = puVar8[7];
    uStack_90 = *puVar11;
    uStack_80 = puVar8[8];
    puVar8[7] = 0;
    puVar8[8] = 0;
    *puVar11 = 0;
    uStack_70 = puVar8[10];
    uStack_78 = puVar8[9];
    uStack_68 = puVar8[0xb];
    puVar8[9] = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    lVar4 = lVar15;
    do {
      lVar14 = lVar4;
      func_0x00647970((long)unaff_x20 + lVar14 + 0x30);
      param_1 = unaff_x20;
      if (lVar14 == 0) goto LAB_00647350;
      puVar8 = &uStack_90;
      func_0x006478c8(puVar8,lVar14 + -0x30 + (long)unaff_x20);
      lVar4 = lVar14 + -0x30;
    } while (((ulong)puVar8 & 1) != 0);
    param_1 = (undefined8 *)((long)unaff_x20 + lVar14);
LAB_00647350:
    func_0x00647970(param_1,&uStack_90);
    func_0x00648428();
  }
  lVar15 = lVar15 + 0x30;
  puVar8 = puVar11;
  goto LAB_006472d0;
code_r0x00647114:
  if (((ulong)puVar9 & 1) == 0) {
LAB_00647118:
    FUN_00646f3c(unaff_x20,puVar10,param_3,param_4 & 1);
    param_4 = 0;
    param_1 = unaff_x20;
  }
  goto LAB_00646f80;
}



/* Entry: 00647598; end: 0064767b;  */

/* WARNING: Possible PIC construction at 0x006475f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x006475f8) */
/* WARNING: Removing unreachable block (ram,0x00647600) */

void FUN_00647598(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar5;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar2 = param_2;
  puVar4 = param_2;
  func_0x00648378();
  puVar3 = puVar2;
  func_0x0064832c();
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = param_3;
    if ((int)puVar3 == 0) {
      func_0x006484ac();
      unaff_x30 = 0x6475f8;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      param_1 = puVar3;
      puVar2 = puVar4;
      unaff_x19 = param_2;
      unaff_x20 = param_3;
      unaff_x29 = puVar1;
    }
SUB_0064790c:
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    uVar5 = *param_1;
    *(undefined8 *)((long)register0x00000008 + -0x48) = param_1[1];
    *(undefined8 *)((long)register0x00000008 + -0x50) = uVar5;
    *(undefined8 *)((long)register0x00000008 + -0x40) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    uVar5 = param_1[3];
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined8 *)((long)register0x00000008 + -0x30) = param_1[4];
    *(undefined8 *)((long)register0x00000008 + -0x38) = uVar5;
    *(undefined8 *)((long)register0x00000008 + -0x28) = param_1[5];
    param_1[4] = 0;
    param_1[5] = 0;
    func_0x00647970();
    func_0x00647970(puVar2,(undefined1 *)((long)register0x00000008 + -0x50));
    func_0x00648450();
    return;
  }
  if ((int)puVar3 != 0) {
    func_0x00648538();
    func_0x00648378();
    if ((int)param_2 != 0) {
      func_0x006484ac();
      param_1 = param_2;
      puVar2 = puVar4;
      goto SUB_0064790c;
    }
  }
  return;
}



/* Entry: 0064767c; end: 0064771b;  */

/* WARNING: Possible PIC construction at 0x006476bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006476d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x006476c0) */
/* WARNING: Removing unreachable block (ram,0x006476cc) */
/* WARNING: Removing unreachable block (ram,0x006476d4) */
/* WARNING: Removing unreachable block (ram,0x006476e0) */
/* WARNING: Removing unreachable block (ram,0x006476ec) */

void FUN_0064767c(void)

{
  undefined8 uVar1;
  undefined8 *in_x3;
  undefined8 in_x4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x00648460();
  func_0x00647618();
  uVar1 = in_x4;
  FUN_006478c8(in_x4,in_x3);
  if ((int)uVar1 != 0) {
    uStack_88 = in_x3[1];
    uStack_90 = *in_x3;
    uStack_80 = in_x3[2];
    *in_x3 = 0;
    in_x3[1] = 0;
    uStack_70 = in_x3[4];
    uStack_78 = in_x3[3];
    in_x3[2] = 0;
    in_x3[3] = 0;
    uStack_68 = in_x3[5];
    in_x3[4] = 0;
    in_x3[5] = 0;
    func_0x00647970();
    func_0x00647970(in_x4,&uStack_90);
    func_0x00648450();
    return;
  }
  return;
}


