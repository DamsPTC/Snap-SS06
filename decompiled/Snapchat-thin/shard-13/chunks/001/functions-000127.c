/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a1b0a54; end: 10a1b0aa3;  */

void FUN_10a1b0a54(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10a1b0aa4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a1b0aa4; end: 10a1b0b23;  */

long * FUN_10a1b0aa4(long *param_1)

{
  long lVar1;
  
  func_0x00010a1b0adc(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a1b0b24; end: 10a1b0c0b;  */

void FUN_10a1b0b24(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  if (param_2 == 0) {
    return;
  }
  func_0x00010a0eb1d4(param_2 + 0x88);
  plVar1 = (long *)*(long *)(param_2 + 0x70);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x00010a0eb82c(plVar1 + 3);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x60) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  lVar2 = 0x58;
  do {
    FUN_10a1ae89c(param_2 + lVar2,0);
    lVar2 = lVar2 + -8;
  } while (lVar2 != 0x48);
  do {
    FUN_10a1ae89c(param_2 + lVar2,0);
    lVar2 = lVar2 + -8;
  } while (lVar2 != 0x38);
  do {
    FUN_10a1ae89c(param_2 + lVar2,0);
    lVar2 = lVar2 + -8;
  } while (lVar2 != 0x28);
  do {
    FUN_10a1ae89c(param_2 + lVar2,0);
    lVar2 = lVar2 + -8;
  } while (lVar2 != 0x18);
  do {
    FUN_10a1ae89c(param_2 + lVar2,0);
    lVar2 = lVar2 + -8;
  } while (lVar2 != 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a1b0c0c; end: 10a1b0c43;  */

void FUN_10a1b0c0c(ulong param_1,long param_2)

{
  long lVar1;
  
  if ((param_1 & 1) != 0) {
    lVar1 = *(long *)(param_2 + 0x18);
    *(long *)(param_2 + 0x18) = 0;
    if (lVar1 != 0) {
      FUN_10a1b0b24();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a1b0c44; end: 10a1b0c47;  */

void FUN_10a1b0c44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a1b0c48; end: 10a1b0c5b;  */

void FUN_10a1b0c48(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1b0c5c; end: 10a1b0c73;  */

void FUN_10a1b0c5c(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a1b0c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
    return;
  }
  return;
}



/* Entry: 10a1b0c74; end: 10a1b0cab;  */

undefined8 FUN_10a1b0c74(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bab7e0);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a1b0cac; end: 10a1b0cbf;  */

void FUN_10a1b0cac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1b0cc0; end: 10a1b0cdf;  */

void FUN_10a1b0cc0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bab930;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1b0ce0; end: 10a1b0d1f;  */

void FUN_10a1b0ce0(long param_1)

{
  func_0x0001096f2328(param_1 + 0x18);
  (*(code *)**(undefined8 **)(param_1 + 200))();
                    /* WARNING: Could not recover jumptable at 0x00010a1b0d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x88))((undefined8 *)(param_1 + 0x88));
  return;
}



/* Entry: 10a1b0d20; end: 10a1b0d23;  */

void FUN_10a1b0d20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1b0d24; end: 10a1b0d53;  */

long * FUN_10a1b0d24(long *param_1)

{
  if (*param_1 != 0) {
    _CFRelease();
  }
  return param_1;
}



/* Entry: 10a1b0d54; end: 10a1b0d83;  */

long * FUN_10a1b0d54(long *param_1)

{
  if (*param_1 != 0) {
    _CFRelease();
  }
  return param_1;
}



/* Entry: 10a1b0d84; end: 10a1b0db3;  */

long * FUN_10a1b0d84(long *param_1)

{
  if (*param_1 != 0) {
    _CFRelease();
  }
  return param_1;
}



/* Entry: 10a1b0db4; end: 10a1b0de3;  */

long * FUN_10a1b0db4(long *param_1)

{
  if (*param_1 != 0) {
    _CFRelease();
  }
  return param_1;
}



/* Entry: 10a1b0de4; end: 10a1b10e7;  */

undefined8 *
FUN_10a1b0de4(undefined8 *param_1,long *param_2,byte param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plStack_78;
  long *plStack_70;
  long *aplStack_68 [2];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0xffffffff00000000;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  plVar5 = param_1 + 10;
  param_1[0xb] = 0;
  *plVar5 = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0x3f80000000000000;
  puVar4 = param_1 + 0xe;
  param_1[0xf] = 0;
  *puVar4 = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0x10] = 0;
  *(byte *)(param_1 + 0x11) = param_3 & 1;
  plVar2 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar2 = param_2;
  }
  FUN_10ad04424(aplStack_68,plVar2,&UNK_10f432965);
  plStack_70 = aplStack_68[0];
  if (aplStack_68[0] == (long *)0x0) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      plVar2 = (long *)*param_2;
      if (-1 < *(char *)((long)param_2 + 0x17)) {
        plVar2 = param_2;
      }
      func_0x00010ae06f08(0,1,&UNK_10f64248c,&UNK_10f6424b3,0x3e,&UNK_10f642509,param_7,param_8,
                          plVar2);
    }
    FUN_10a1b9340("",0,param_2,&DAT_10f642533);
    goto LAB_10a1b10e4;
  }
  FUN_10a1b10e8();
  plVar2 = (long *)*aplStack_68[0];
  (**(code **)(*plVar2 + 0x20))(plVar2,aplStack_68,1,uRam00000001137ea8d0);
  (**(code **)(*(long *)*aplStack_68[0] + 0x28))((long *)*aplStack_68[0],0);
  FUN_10a1b1168(&plStack_78,aplStack_68,plVar2);
  plVar2 = plStack_78;
  plStack_78 = (long *)0x0;
  plVar3 = (long *)*plVar5;
  *plVar5 = (long)plVar2;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
    plVar2 = plStack_78;
    plStack_78 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
    plVar2 = (long *)*plVar5;
  }
  if (plVar2 == (long *)0x0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar4,param_2);
LAB_10a1b0f68:
    plVar2 = aplStack_68[0];
    plStack_70 = (long *)0x0;
    plVar3 = (long *)*plVar2;
    *plVar2 = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x40))();
    }
    __ZdlPv(plVar2);
  }
  else {
    FUN_10a1a6a04(plVar2,&plStack_70);
    plVar2 = (long *)param_1[10];
    *(undefined1 *)(plVar2 + 0x13) = *(undefined1 *)(param_1 + 0x11);
    (**(code **)*plVar2)(plVar2,param_4);
    aplStack_68[0] = plStack_70;
    plStack_70 = (long *)0x0;
    if (aplStack_68[0] != (long *)0x0) goto LAB_10a1b0f68;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  if (*(char *)((long)param_1 + 0x87) < '\0') {
    __ZdlPv(*puVar4);
  }
  if (param_1[0xb] != 0) {
    param_1[0xc] = param_1[0xb];
    __ZdlPv();
  }
  plVar3 = (long *)*plVar5;
  *plVar5 = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  func_0x000104c4f944(param_1 + 5);
  if ((ulong)*(byte *)(param_1 + 4) < 3) {
    (*(code *)(&PTR_FUN_110ba20e8)[*(byte *)(param_1 + 4)])((long)param_1 + 0x1c);
    __Unwind_Resume(plVar2);
  }
LAB_10a1b10e4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1b10e8);
  (*pcVar1)();
}



/* Entry: 10a1b10e8; end: 10a1b1167;  */

void FUN_10a1b10e8(void)

{
  int iVar1;
  
  if ((bRam00000001137ea8b0 & 1) == 0) {
    iVar1 = 0x137ea8b0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10a1b8ad4();
      ___cxa_atexit(FUN_10a1b8e48,0x1137ea8b8,0x100000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1137ea8b0);
      return;
    }
  }
  return;
}



/* Entry: 10a1b1168; end: 10a1b11d7;  */

void FUN_10a1b1168(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_10a1b10e8();
  puVar1 = puRam00000001137ea8c0;
  puVar2 = puRam00000001137ea8b8;
  do {
    if (puVar2 == puVar1) {
      *param_1 = 0;
      return;
    }
    (*(code *)*puVar2)(param_1,param_2,param_3);
    puVar2 = puVar2 + 1;
  } while (*param_1 == 0);
  return;
}



/* Entry: 10a1b11d8; end: 10a1b13d7;  */

undefined8 * FUN_10a1b11d8(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long *plStack_60;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0xffffffff00000000;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0x3f80000000000000;
  plVar7 = param_1 + 10;
  param_1[0xb] = 0;
  *plVar7 = 0;
  puVar5 = param_1 + 0xe;
  param_1[0xf] = 0;
  *puVar5 = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((long)param_1 + 0x81) = 0;
  *(undefined8 *)((long)param_1 + 0x79) = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar5,*param_2 + 8);
  plVar6 = (long *)*param_2;
  FUN_10a1b10e8();
  (**(code **)(*plVar6 + 0x30))(plVar6,auStack_58,uRam00000001137ea8d0);
  (**(code **)(*(long *)*param_2 + 0x28))();
  FUN_10a1b1168(&plStack_60,auStack_58,plVar6);
  plVar6 = plStack_60;
  plStack_60 = (long *)0x0;
  plVar2 = (long *)*plVar7;
  *plVar7 = (long)plVar6;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
    plVar6 = plStack_60;
    plStack_60 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))();
    }
    plVar6 = (long *)*plVar7;
  }
  plVar2 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    *(undefined1 *)(plVar6 + 0x13) = 0;
    (**(code **)*plVar6)(plVar6,param_3);
    lVar3 = *plVar7;
    lVar4 = *param_2;
    *param_2 = 0;
    plVar2 = *(long **)(lVar3 + 0x90);
    *(long *)(lVar3 + 0x90) = lVar4;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  if (*(char *)((long)param_1 + 0x87) < '\0') {
    __ZdlPv(*puVar5);
  }
  if (param_1[0xb] != 0) {
    param_1[0xc] = param_1[0xb];
    __ZdlPv();
  }
  plVar6 = (long *)*plVar7;
  *plVar7 = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  func_0x000104c4f944(param_1 + 5);
  if ((ulong)*(byte *)(param_1 + 4) < 3) {
    (*(code *)(&PTR_FUN_110ba20e8)[*(byte *)(param_1 + 4)])((long)param_1 + 0x1c);
    __Unwind_Resume(plVar2);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1b13d8);
  (*pcVar1)();
}



/* Entry: 10a1b13d8; end: 10a1b15d7;  */

undefined8 * FUN_10a1b13d8(undefined8 *param_1,long *param_2,int param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plStack_b8;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0xffffffff00000000;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0x3f80000000000000;
  plVar7 = param_1 + 10;
  param_1[0xb] = 0;
  *plVar7 = 0;
  plVar4 = param_1 + 0xb;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((long)param_1 + 0x81) = 0;
  *(undefined8 *)((long)param_1 + 0x79) = 0;
  lVar6 = *param_2;
  FUN_10a1b1168(&plStack_b8,lVar6,param_2[1] - lVar6);
  plVar8 = plStack_b8;
  iVar5 = (int)lVar6;
  plStack_b8 = (long *)0x0;
  plVar2 = (long *)*plVar7;
  *plVar7 = (long)plVar8;
  plVar3 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
    plVar3 = plStack_b8;
    plStack_b8 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))();
    }
    plVar8 = (long *)*plVar7;
  }
  if (plVar8 == (long *)0x0) {
    if (plVar4 != param_2) {
      lVar6 = *param_2;
      plVar3 = plVar4;
      FUN_10a0cf2cc(plVar4,lVar6,param_2[1],param_2[1] - lVar6);
      iVar5 = (int)lVar6;
    }
  }
  else {
    plStack_b8 = (long *)0x0;
    pcStack_b0 = FUN_10a1b9300;
    ppuStack_a8 = &PTR_DAT_110bac088;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = 0;
    FUN_10a05151c(&uStack_60,*param_2,param_2[1],param_2[1] - *param_2);
    func_0x0001092bff80(plVar8 + 1,&plStack_b8);
    func_0x0001092bffbc(&plStack_b8);
    plVar3 = (long *)*plVar7;
    iVar5 = param_3;
    (**(code **)*plVar3)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x000104bd46a0(plVar3);
    if (*(char *)((long)param_1 + 0x87) < '\0') {
      __ZdlPv(param_1[0xe]);
    }
    if (*plVar4 != 0) {
      param_1[0xc] = *plVar4;
      __ZdlPv();
    }
    plVar4 = (long *)*plVar7;
    *plVar7 = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))();
    }
    func_0x000104c4f944(param_1 + 5);
    if (2 < (ulong)*(byte *)(param_1 + 4)) goto LAB_10a1b15d4;
    (*(code *)(&PTR_FUN_110ba20e8)[*(byte *)(param_1 + 4)])((long)param_1 + 0x1c);
  }
  __Unwind_Resume(plVar3);
LAB_10a1b15d4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1b15d8);
  (*pcVar1)();
}



/* Entry: 10a1b15d8; end: 10a1b1627;  */

long * FUN_10a1b15d8(long *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined *puVar7;
  int *piVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int aiStack_a0 [7];
  undefined1 auStack_84 [4];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  long in_stack_ffffffffffffffb8;
  
  if (param_2[10] == 0) {
    FUN_10a00946c(&UNK_10f64259d);
  }
  else {
    puVar5 = param_2;
    FUN_10a1b1628();
    if ((int)puVar5 != 0) {
      if (*(char *)(param_2 + 4) == '\0') {
        plVar6 = (long *)0xa8;
        __Znwm();
        plVar9 = plVar6 + 1;
        *plVar9 = 0;
        plVar6[2] = 0;
        *plVar6 = (long)&PTR_FUN_110baa4d8;
        plVar6[5] = 0;
        plVar6[6] = 0;
        plVar6[3] = (long)&PTR_FUN_110bab9a0;
        *(undefined1 *)(plVar6 + 4) = 0;
        *(undefined1 *)(plVar6 + 0x14) = 0;
        plVar6[9] = 0;
        plVar6[10] = 0;
        plVar6[7] = -0x100000000;
        plVar6[8] = 0;
        plVar6[0xb] = 0;
        plVar6[0xc] = 0x109d138c8;
        plVar6[0xd] = (long)&PTR_DAT_110b3e838;
        plVar6[0xe] = (long)FUN_10a1b2664;
        *param_1 = (long)(plVar6 + 3);
        param_1[1] = (long)plVar6;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        *(undefined1 *)(param_1 + 2) = 0;
        do {
          lVar11 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
        param_1 = (long *)*param_1;
        FUN_10a1b2e9c(param_1,*param_2,*(undefined4 *)((long)param_2 + 0x1c),param_2[2]);
      }
      else {
        if (*(char *)(param_2 + 4) != '\x01') {
          puVar7 = &UNK_10f6423f1;
          FUN_10a05bab8(&UNK_10f6423f1);
          func_0x00010a0d9378(param_1);
          __Unwind_Resume(puVar7);
          return (long *)0x0;
        }
        FUN_10a1b70c8(&stack0xffffffffffffffb8,*(undefined4 *)((long)param_2 + 0x1c),
                      *(undefined4 *)(param_2 + 1));
        if (in_stack_ffffffffffffffb8 == 0) {
          puVar5 = (undefined8 *)0x0;
        }
        else {
          puVar5 = (undefined8 *)0x20;
          __Znwm();
          *puVar5 = &PTR_FUN_110bab7a0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = in_stack_ffffffffffffffb8;
        }
        *param_1 = in_stack_ffffffffffffffb8;
        param_1[1] = (long)puVar5;
        *(undefined1 *)(param_1 + 2) = 2;
        uVar13 = *param_2;
        uVar1 = *(undefined4 *)((long)param_2 + 0x1c);
        uVar12 = param_2[2];
        param_1 = *(long **)(in_stack_ffffffffffffffb8 + 0x58);
        if ((param_1 != (long *)0x0) &&
           (*(char *)(*(long *)(in_stack_ffffffffffffffb8 + 0x20) + 8) == '\x01')) {
          (**(code **)(in_stack_ffffffffffffffb8 + 0x18))();
        }
        *(undefined8 *)(in_stack_ffffffffffffffb8 + 8) = uVar13;
        *(undefined4 *)(in_stack_ffffffffffffffb8 + 0x10) = uVar1;
        *(undefined8 *)(in_stack_ffffffffffffffb8 + 0x58) = 0;
        *(undefined8 *)(in_stack_ffffffffffffffb8 + 0x60) = uVar12;
      }
      return param_1;
    }
  }
  piVar8 = (int *)&UNK_10f642542;
  FUN_10a00946c();
  uStack_80 = 0;
  uStack_54 = 0;
  aiStack_a0[2] = 0;
  aiStack_a0[3] = 0;
  aiStack_a0[0] = 0;
  aiStack_a0[1] = 0;
  aiStack_a0[4] = 0;
  aiStack_a0[5] = 0;
  stack0xffffffffffffff78 = 0xffffffff00000000;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_5c = 0;
  uStack_58 = 0x3f800000;
  piVar8[2] = 0;
  piVar8[3] = 0;
  piVar8[4] = 0;
  piVar8[5] = 0;
  piVar8[0] = 0;
  piVar8[1] = 0;
  piVar8[6] = 0;
  if (aiStack_a0 != piVar8) {
    if (2 < (ulong)*(byte *)(piVar8 + 8)) goto LAB_10a1b1788;
    (*(code *)(&PTR_FUN_110ba20e8)[*(byte *)(piVar8 + 8)])(piVar8 + 7);
    piVar8[7] = -1;
    *(undefined1 *)(piVar8 + 8) = 0;
  }
  piVar8[9] = 0;
  func_0x0001094f977c(piVar8 + 10,&uStack_78);
  func_0x000104c4f944(&uStack_78);
  if ((ulong)(byte)uStack_80 < 3) {
    (*(code *)(&PTR_FUN_110ba20e8)[(byte)uStack_80])(auStack_84);
    plVar6 = *(long **)(piVar8 + 0x14);
    if ((plVar6 != (long *)0x0) && ((**(code **)(*plVar6 + 8))(plVar6,piVar8), (int)plVar6 != 0)) {
      uVar10 = *(ulong *)(piVar8 + 4);
      if (uVar10 == 0) {
        if ((uint)piVar8[7] < 0x17) {
          lVar11 = *(long *)(&UNK_10e49c500 + (ulong)(uint)piVar8[7] * 8);
        }
        else {
          lVar11 = 0;
        }
        uVar10 = lVar11 * *piVar8 * (long)piVar8[1];
      }
      if (0x6400000 < uVar10) {
        FUN_10a0ee900(aiStack_a0,&UNK_10f642572,0x2a);
        FUN_10a1b19d0(piVar8);
        FUN_10a0029c0(aiStack_a0);
        goto LAB_10a1b1788;
      }
      plVar6 = (long *)0x1;
    }
    return plVar6;
  }
LAB_10a1b1788:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1b178c);
  (*pcVar4)();
}



/* Entry: 10a1b1628; end: 10a1b17a7;  */

void FUN_10a1b1628(int *param_1)

{
  code *pcVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  int aiStack_80 [7];
  undefined1 auStack_64 [4];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uStack_60 = 0;
  uStack_34 = 0;
  aiStack_80[2] = 0;
  aiStack_80[3] = 0;
  aiStack_80[0] = 0;
  aiStack_80[1] = 0;
  aiStack_80[4] = 0;
  aiStack_80[5] = 0;
  stack0xffffffffffffff98 = 0xffffffff00000000;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_3c = 0;
  uStack_38 = 0x3f800000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  if (aiStack_80 != param_1) {
    if (2 < (ulong)*(byte *)(param_1 + 8)) goto LAB_10a1b1788;
    (*(code *)(&PTR_FUN_110ba20e8)[*(byte *)(param_1 + 8)])(param_1 + 7);
    param_1[7] = -1;
    *(undefined1 *)(param_1 + 8) = 0;
  }
  param_1[9] = 0;
  func_0x0001094f977c(param_1 + 10,&uStack_58);
  func_0x000104c4f944(&uStack_58);
  if (2 < (ulong)(byte)uStack_60) {
LAB_10a1b1788:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1b178c);
    (*pcVar1)();
  }
  (*(code *)(&PTR_FUN_110ba20e8)[(byte)uStack_60])(auStack_64);
  plVar2 = *(long **)(param_1 + 0x14);
  if ((plVar2 != (long *)0x0) && ((**(code **)(*plVar2 + 8))(plVar2,param_1), (int)plVar2 != 0)) {
    uVar3 = *(ulong *)(param_1 + 4);
    if (uVar3 == 0) {
      if ((uint)param_1[7] < 0x17) {
        lVar4 = *(long *)(&UNK_10e49c500 + (ulong)(uint)param_1[7] * 8);
      }
      else {
        lVar4 = 0;
      }
      uVar3 = lVar4 * *param_1 * (long)param_1[1];
    }
    if (0x6400000 < uVar3) {
      FUN_10a0ee900(aiStack_80,&UNK_10f642572,0x2a);
      FUN_10a1b19d0(param_1);
      FUN_10a0029c0(aiStack_80);
      goto LAB_10a1b1788;
    }
  }
  return;
}



/* Entry: 10a1b17a8; end: 10a1b181b;  */

void FUN_10a1b17a8(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  
  FUN_10a1b15d8();
  FUN_10a1b181c(param_2,param_1);
  if ((param_2 & 1) != 0) {
    return;
  }
  FUN_10a00946c(&UNK_10f64255b);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1b181c);
  (*pcVar1)();
}



/* Entry: 10a1b181c; end: 10a1b19cf;  */

long * FUN_10a1b181c(long *param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *unaff_x21;
  long lStack_88;
  undefined **ppuStack_80;
  code *pcStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1[10] == 0) {
    plVar2 = (long *)0x1;
  }
  else {
    if ((char)param_2[2] != '\x01') {
      if ((char)param_2[2] == '\0') {
        if ((*param_2 != 0) && (*(long *)(*param_2 + 0x28) == 0)) {
          FUN_10a1b1adc();
        }
      }
      else {
        lVar4 = *param_2;
        if ((lVar4 != 0) && (*(long *)(lVar4 + 0x58) == 0)) {
          FUN_10a1b7634(lVar4,*(undefined4 *)(lVar4 + 8),*(undefined4 *)(lVar4 + 0xc),lVar4 + 0x10,
                        *(undefined8 *)(lVar4 + 0x60));
        }
      }
    }
    plVar2 = (long *)param_1[10];
    (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
    if (((ulong)plVar2 & 1) == 0) {
      puVar3 = (undefined8 *)0x90;
      __Znwm();
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined1 *)(puVar3 + 1) = 0;
      *puVar3 = &PTR_FUN_110bab9a0;
      *(undefined1 *)(puVar3 + 0x11) = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[4] = 0xffffffff00000000;
      puVar3[5] = 0;
      puVar3[8] = 0;
      puVar3[9] = 0x109d138c8;
      puVar3[10] = &PTR_DAT_110b3e838;
      puVar3[0xb] = FUN_10a1b2664;
      FUN_10a1b1ba8(param_2,puVar3);
      lVar4 = *param_2;
      param_2 = &lStack_88;
      lStack_88 = 0x109d138c8;
      ppuStack_80 = &PTR_DAT_110b3e838;
      pcStack_78 = FUN_10a1b1e10;
      FUN_10a1b1c04(lVar4,0,1,0,0,&lStack_88,0,0,0);
      (*(code *)*ppuStack_80)(&ppuStack_80);
    }
    plVar5 = (long *)param_1[10];
    param_1[10] = 0;
    param_1 = plVar5;
    unaff_x21 = param_2;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
      param_1 = plVar5;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar2;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_80)(unaff_x21 + 1);
  __Unwind_Resume();
  *param_1 = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  if ((ulong)*(byte *)(param_1 + 4) < 3) {
    (*(code *)(&PTR_FUN_110ba20e8)[*(byte *)(param_1 + 4)])((long)param_1 + 0x1c);
    *(undefined4 *)((long)param_1 + 0x1c) = 0xffffffff;
    *(undefined1 *)(param_1 + 4) = 0;
    plVar2 = param_1 + 5;
    plVar5 = plVar2;
    if (param_1[8] != 0) {
      func_0x000104c4f97c(plVar2,param_1[7]);
      param_1[7] = 0;
      lVar4 = param_1[6];
      if (lVar4 != 0) {
        lVar6 = 0;
        do {
          *(undefined8 *)(*plVar2 + lVar6 * 8) = 0;
          lVar6 = lVar6 + 1;
        } while (lVar4 != lVar6);
      }
      param_1[8] = 0;
    }
    return plVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1b1a28);
  (*pcVar1)();
}



/* Entry: 10a1b19d0; end: 10a1b1a27;  */

void FUN_10a1b19d0(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  if ((ulong)*(byte *)(param_1 + 4) < 3) {
    (*(code *)(&PTR_FUN_110ba20e8)[*(byte *)(param_1 + 4)])((long)param_1 + 0x1c);
    *(undefined4 *)((long)param_1 + 0x1c) = 0xffffffff;
    *(undefined1 *)(param_1 + 4) = 0;
    if (param_1[8] != 0) {
      func_0x000104c4f97c(param_1 + 5,param_1[7]);
      param_1[7] = 0;
      lVar2 = param_1[6];
      if (lVar2 != 0) {
        lVar3 = 0;
        do {
          *(undefined8 *)(param_1[5] + lVar3 * 8) = 0;
          lVar3 = lVar3 + 1;
        } while (lVar2 != lVar3);
      }
      param_1[8] = 0;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1b1a28);
  (*pcVar1)();
}



/* Entry: 10a1b1a28; end: 10a1b1adb;  */

void FUN_10a1b1a28(undefined8 *param_1,int *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  if ((((*param_2 == 0) && (param_2[1] == 0)) && (param_2[6] == 0)) &&
     (*(long *)(param_2 + 0x10) == 0)) {
    FUN_10a1b1628(param_2);
  }
  uVar2 = *(undefined8 *)param_2;
  param_1[1] = *(undefined8 *)(param_2 + 2);
  *param_1 = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 3);
  *(undefined8 *)((long)param_1 + 0x14) = *(undefined8 *)(param_2 + 5);
  *(undefined8 *)((long)param_1 + 0xc) = uVar2;
  bVar1 = *(byte *)(param_2 + 8);
  if (bVar1 < 2) {
    *(int *)((long)param_1 + 0x1c) = param_2[7];
  }
  *(byte *)(param_1 + 4) = bVar1;
  *(int *)((long)param_1 + 0x24) = param_2[9];
  func_0x000107c2791c(param_1 + 5,param_2 + 10);
  return;
}



/* Entry: 10a1b1adc; end: 10a1b1ba7;  */

void FUN_10a1b1adc(undefined ***param_1)

{
  code *pcVar1;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1[5] == (undefined **)0x0) {
    uStack_68 = 0x109d138c8;
    ppuStack_60 = &PTR_DAT_110b3e838;
    pcStack_58 = FUN_10a1b1e10;
    FUN_10a1b1c04(param_1,param_1[2],*(undefined4 *)((long)param_1 + 0x24),0,0,&uStack_68,0,0);
    param_1 = &ppuStack_60;
    (*(code *)*ppuStack_60)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume();
  FUN_10a1b9b14(&ppuStack_a0);
  if ((ulong)*(byte *)(param_1 + 2) < 4) {
    (*(code *)(&PTR_FUN_110ba20c8)[*(byte *)(param_1 + 2)])(param_1);
    param_1[1] = ppuStack_98;
    *param_1 = ppuStack_a0;
    *(undefined1 *)(param_1 + 2) = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1b1c04);
  (*pcVar1)();
}



/* Entry: 10a1b1ba8; end: 10a1b1c03;  */

void FUN_10a1b1ba8(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10a1b9b14(&uStack_30);
  if ((ulong)*(byte *)(param_1 + 2) < 4) {
    (*(code *)(&PTR_FUN_110ba20c8)[*(byte *)(param_1 + 2)])(param_1);
    param_1[1] = uStack_28;
    *param_1 = uStack_30;
    *(undefined1 *)(param_1 + 2) = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1b1c04);
  (*pcVar1)();
}



/* Entry: 10a1b1c04; end: 10a1b1e0f;  */

void FUN_10a1b1c04(long param_1,ulong param_2,undefined8 param_3,long param_4,ulong param_5,
                  undefined8 *param_6,long param_7,ulong param_8,char param_9)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((param_2 & 0x8000000080000000) == 0) {
    if ((param_2 < 0x400100000000) && ((uint)param_2 < 0x4001)) {
      FUN_10a1b2a5c(param_1 + 0x10,param_3);
      uVar5 = (uint)param_3;
      if (param_8 == 0) {
        if (uVar5 < 0x17) {
          param_8 = (param_2 & 0x7fff) * (param_2 >> 0x20) >> 1;
          if ((1 << (ulong)(uVar5 & 0x1f) & 0x400500U) == 0) {
            param_8 = 0;
          }
        }
        else {
          param_8 = 0;
        }
      }
      uStack_70 = 0;
      uStack_68 = 0;
      if (param_4 == 0) {
        param_5 = (ulong)((*(int *)(param_1 + 0x20) << ((uVar5 & 0xfffffffb) == 0xb)) *
                         (uint)param_2);
        lVar1 = (param_2 >> 0x20) * param_5;
        if (*(long *)(param_1 + 0x40) != 0) {
          lVar1 = *(long *)(param_1 + 0x40);
        }
        uVar2 = param_8;
        if (param_7 != 0) {
          uVar2 = 0;
        }
        lVar1 = lVar1 + uVar2;
        if (lVar1 == 0) {
          param_4 = 0;
        }
        else {
          param_4 = lVar1;
          FUN_10a1b29f0(lVar1);
          if (param_9 != '\0') {
            _bzero(param_4,lVar1);
          }
        }
        *param_6 = 0x109d138c8;
        puVar4 = param_6 + 1;
        (**(code **)*puVar4)(puVar4);
        *puVar4 = &PTR_DAT_110b3e838;
        param_6[2] = FUN_10a1b1e10;
      }
      plVar6 = (long *)(param_1 + 0x50);
      puVar4 = (undefined8 *)*plVar6;
      if (*(char *)(puVar4 + 1) == '\x01') {
        (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x28));
        puVar4 = (undefined8 *)*plVar6;
      }
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x48) = *param_6;
      (*(code *)*puVar4)(plVar6);
      (**(code **)(param_6[1] + 0x10))(plVar6,param_6 + 1);
      FUN_10a1b2d98(param_1 + 0x10,param_2,param_3,param_4,param_5,param_7,param_8);
      return;
    }
  }
  else {
    FUN_10a0ee06c(&UNK_10f642b5c);
  }
  puVar3 = &UNK_10f642b89;
  FUN_10a0ee06c(&UNK_10f642b89);
  func_0x00010a045fb4(&uStack_70);
  __Unwind_Resume(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)();
  return;
}



/* Entry: 10a1b1e10; end: 10a1b1e13;  */

void FUN_10a1b1e10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)();
  return;
}



/* Entry: 10a1b1e14; end: 10a1b1eeb;  */

long * FUN_10a1b1e14(long *param_1,long param_2,long param_3,int param_4,undefined1 param_5)

{
  undefined4 uVar1;
  byte bVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long *extraout_x8_03;
  int *piVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long *extraout_x9_03;
  long *plVar13;
  int iStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined4 uStack_54;
  
  if ((char)param_1[7] != '\x01') {
    return param_1;
  }
  if (*param_1 == *(long *)(param_2 + 0x100)) {
    lVar7 = param_1[1];
    lVar11 = *(long *)(param_2 + 0xf8);
    if (lVar7 != lVar11) goto LAB_10a1b1eac;
    lVar7 = param_1[2];
    lVar11 = *(long *)(param_2 + 0xd8);
    if (lVar7 != lVar11) goto LAB_10a1b1eb8;
    lVar7 = param_1[3];
    lVar11 = *(long *)(param_2 + 0xe0);
    if (lVar7 != lVar11) goto LAB_10a1b1ec4;
    lVar7 = param_1[4];
    lVar11 = *(long *)(param_2 + 0x3c0);
    if (lVar7 != lVar11) goto LAB_10a1b1ed0;
    plVar8 = (long *)(ulong)*(uint *)(param_1 + 5);
    plVar12 = (long *)(ulong)*(uint *)(param_2 + 0x3bc);
    if (*(uint *)(param_1 + 5) == *(uint *)(param_2 + 0x3bc)) {
      plVar8 = (long *)param_1[6];
      plVar12 = *(long **)(param_2 + 0x3d8);
      if (plVar8 == plVar12) {
        return plVar8;
      }
      goto LAB_10a1b1ee8;
    }
  }
  else {
    FUN_10a1b9be4(*param_1,*(long *)(param_2 + 0x100));
    lVar7 = extraout_x8;
    lVar11 = extraout_x9;
LAB_10a1b1eac:
    FUN_10a1b9e6c(lVar7,lVar11);
    lVar7 = extraout_x8_00;
    lVar11 = extraout_x9_00;
LAB_10a1b1eb8:
    FUN_10a1b9fa0(lVar7,lVar11);
    lVar7 = extraout_x8_01;
    lVar11 = extraout_x9_01;
LAB_10a1b1ec4:
    FUN_10a1ba0d4(lVar7,lVar11);
    lVar7 = extraout_x8_02;
    lVar11 = extraout_x9_02;
LAB_10a1b1ed0:
    FUN_10a1ba208(lVar7,lVar11);
    plVar8 = extraout_x8_03;
    plVar12 = extraout_x9_03;
  }
  FUN_10a1ba33c();
LAB_10a1b1ee8:
  FUN_10a1ba54c();
  *(undefined4 *)plVar8 = 0;
  *(undefined2 *)((long)plVar8 + 4) = 0;
  plVar8[1] = 0;
  *(undefined2 *)(plVar8 + 4) = 1;
  plVar13 = plVar8 + 5;
  *plVar13 = 0;
  plVar8[7] = 0;
  plVar8[6] = 0;
  plVar8[8] = -1;
  plVar8[10] = 0;
  plVar8[9] = 0;
  plVar8[0xc] = 0;
  plVar8[0xb] = 0;
  plVar4 = plVar8 + 2;
  *plVar4 = (long)plVar12;
  plVar8[3] = param_3;
  uStack_64 = 0;
  uStack_6c = 0;
  uStack_54 = 0;
  uStack_5c = 0;
  uStack_74 = 3;
  if (param_4 != 0) {
    uStack_74 = 1;
  }
  uStack_70 = 0;
  func_0x00010822079c(plVar4,&uStack_74,0x107);
  plVar8[1] = (long)plVar4;
  if (plVar4 == (long *)0x0) {
    puVar5 = (undefined8 *)0x8;
    ___cxa_allocate_exception();
    uVar6 = 0x10;
    __Znwm();
    __ZNSt13runtime_errorC1EPKc();
    *puVar5 = uVar6;
    ___cxa_throw(puVar5,&PTR_DAT_110bab970,0);
  }
  else {
    uVar1 = *(undefined4 *)((long)plVar4 + 0x104);
    lVar7 = plVar4[0x22];
    *(short *)plVar8 = (short)(int)plVar4[0x20];
    *(short *)((long)plVar8 + 2) = (short)uVar1;
    *(short *)((long)plVar8 + 4) = (short)(int)lVar7;
    *(undefined1 *)((long)plVar8 + 0x21) = 0;
    lStack_88 = *plVar4;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_90 = 0;
    iVar10 = 1;
    func_0x000108221148(1,&uStack_d0);
    iStack_d4 = 0;
    FUN_10a1b210c(plVar13,&iStack_d4);
    bVar2 = *(byte *)((long)plVar8 + 0x21);
    while( true ) {
      if (iVar10 == 0) {
        if ((bVar2 & 1) == 0) {
          lVar7 = plVar8[6] - plVar8[5];
          if (lVar7 != 0) {
            iVar10 = 0;
            lVar7 = lVar7 >> 2;
            piVar9 = (int *)plVar8[5];
            do {
              *piVar9 = iVar10;
              iVar10 = iVar10 + 0x21;
              lVar7 = lVar7 + -1;
              piVar9 = piVar9 + 1;
            } while (lVar7 != 0);
          }
        }
        *(undefined1 *)(plVar8 + 4) = param_5;
        return plVar8;
      }
      *(byte *)((long)plVar8 + 0x21) = bVar2 & 1 | 0 < (int)uStack_b8;
      if (plVar8[5] == plVar8[6]) break;
      iStack_d4 = *(int *)(plVar8[6] + -4) + (int)uStack_b8;
      FUN_10a1b210c(plVar13,&iStack_d4);
      iVar10 = (int)uStack_d0 + 1;
      func_0x000108221148(iVar10,&uStack_d0);
      bVar2 = *(byte *)((long)plVar8 + 0x21);
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1b20b8);
  (*pcVar3)();
}



/* Entry: 10a1b1eec; end: 10a1b210b;  */

undefined4 *
FUN_10a1b1eec(undefined4 *param_1,undefined8 param_2,undefined8 param_3,int param_4,
             undefined1 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  int iStack_c4;
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
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined2 *)(param_1 + 8) = 1;
  puVar10 = (undefined8 *)(param_1 + 10);
  *puVar10 = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  puVar5 = (undefined8 *)(param_1 + 4);
  *puVar5 = param_2;
  *(undefined8 *)(param_1 + 6) = param_3;
  uStack_54 = 0;
  uStack_5c = 0;
  uStack_44 = 0;
  uStack_4c = 0;
  uStack_64 = 3;
  if (param_4 != 0) {
    uStack_64 = 1;
  }
  uStack_60 = 0;
  func_0x00010822079c(puVar5,&uStack_64,0x107);
  *(undefined8 **)(param_1 + 2) = puVar5;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x8;
    ___cxa_allocate_exception();
    uVar6 = 0x10;
    __Znwm();
    __ZNSt13runtime_errorC1EPKc();
    *puVar5 = uVar6;
    ___cxa_throw(puVar5,&PTR_DAT_110bab970,0);
  }
  else {
    uVar1 = *(undefined4 *)((long)puVar5 + 0x104);
    uVar2 = *(undefined4 *)(puVar5 + 0x22);
    *(short *)param_1 = (short)*(undefined4 *)(puVar5 + 0x20);
    *(short *)((long)param_1 + 2) = (short)uVar1;
    *(short *)(param_1 + 1) = (short)uVar2;
    *(undefined1 *)((long)param_1 + 0x21) = 0;
    uStack_78 = *puVar5;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_80 = 0;
    iVar8 = 1;
    func_0x000108221148(1,&uStack_c0);
    iStack_c4 = 0;
    FUN_10a1b210c(puVar10,&iStack_c4);
    bVar3 = *(byte *)((long)param_1 + 0x21);
    while( true ) {
      if (iVar8 == 0) {
        if ((bVar3 & 1) == 0) {
          lVar9 = *(long *)(param_1 + 0xc) - (long)*(int **)(param_1 + 10);
          if (lVar9 != 0) {
            iVar8 = 0;
            lVar9 = lVar9 >> 2;
            piVar7 = *(int **)(param_1 + 10);
            do {
              *piVar7 = iVar8;
              iVar8 = iVar8 + 0x21;
              lVar9 = lVar9 + -1;
              piVar7 = piVar7 + 1;
            } while (lVar9 != 0);
          }
        }
        *(undefined1 *)(param_1 + 8) = param_5;
        return param_1;
      }
      *(byte *)((long)param_1 + 0x21) = bVar3 & 1 | 0 < (int)uStack_a8;
      if (*(long *)(param_1 + 10) == *(long *)(param_1 + 0xc)) break;
      iStack_c4 = *(int *)(*(long *)(param_1 + 0xc) + -4) + (int)uStack_a8;
      FUN_10a1b210c(puVar10,&iStack_c4);
      iVar8 = (int)uStack_c0 + 1;
      func_0x000108221148(iVar8,&uStack_c0);
      bVar3 = *(byte *)((long)param_1 + 0x21);
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1b20b8);
  (*pcVar4)();
}



/* Entry: 10a1b210c; end: 10a1b21cf;  */

long * FUN_10a1b210c(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined4 *puVar9;
  
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 < (undefined4 *)param_1[2]) {
    puVar9 = puVar2 + 1;
    *puVar2 = *param_2;
    plVar5 = param_1;
  }
  else {
    lVar8 = (long)puVar2 - *param_1;
    uVar1 = (lVar8 >> 2) + 1;
    if (uVar1 >> 0x3e != 0) {
      FUN_109ffe1ac();
      func_0x00010822092c(param_1[1]);
      if (param_1[10] != 0) {
        param_1[0xb] = param_1[10];
        __ZdlPv();
      }
      if (param_1[5] != 0) {
        param_1[6] = param_1[5];
        __ZdlPv();
      }
      return param_1;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 1;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar6) {
      uVar7 = 0x3fffffffffffffff;
    }
    plVar4 = param_1;
    FUN_109ffe1c0();
    lVar3 = *param_1;
    puVar2 = (undefined4 *)((long)plVar4 + lVar8);
    lVar8 = (long)puVar2 - (param_1[1] - lVar3);
    puVar9 = puVar2 + 1;
    *puVar2 = *param_2;
    _memcpy(lVar8,lVar3);
    plVar5 = (long *)*param_1;
    *param_1 = lVar8;
    param_1[1] = (long)puVar9;
    param_1[2] = (long)plVar4 + uVar7 * 4;
    if (plVar5 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar9;
  return plVar5;
}



/* Entry: 10a1b21d0; end: 10a1b2217;  */

long FUN_10a1b21d0(long param_1)

{
  func_0x00010822092c(*(undefined8 *)(param_1 + 8));
  if (*(long *)(param_1 + 0x50) != 0) {
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x50);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a1b2218; end: 10a1b23df;  */

undefined1  [16] FUN_10a1b2218(ushort *param_1,uint param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ushort *puVar16;
  undefined1 auVar17 [16];
  uint uStack_48;
  uint uStack_44;
  
  if (param_2 < *(uint *)(param_1 + 0x20)) {
    lVar8 = *(long *)(param_1 + 4);
    if (lVar8 == 0) {
      uVar7 = 0;
    }
    else {
      *(undefined4 *)(lVar8 + 0x138) = 0;
      *(undefined8 *)(lVar8 + 0x148) = 0;
      *(undefined8 *)(lVar8 + 0x140) = 0;
      *(undefined8 *)(lVar8 + 0x158) = 0;
      *(undefined8 *)(lVar8 + 0x150) = 0;
      *(undefined8 *)(lVar8 + 0x168) = 0;
      *(undefined8 *)(lVar8 + 0x160) = 0;
      *(undefined8 *)(lVar8 + 0x178) = 0;
      *(undefined8 *)(lVar8 + 0x170) = 0;
      *(undefined8 *)(lVar8 + 0x188) = 0;
      *(undefined8 *)(lVar8 + 0x180) = 0;
      *(undefined8 *)(lVar8 + 400) = 0x100000000;
      uVar7 = *(undefined8 *)(param_1 + 4);
    }
    uStack_44 = 0;
    func_0x00010822096c(uVar7,param_1 + 0x24,&uStack_44);
    uVar3 = uStack_44;
    if (*(char *)((long)param_1 + 0x21) == '\0') {
      uVar3 = 0x21;
    }
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    *(uint *)(param_1 + 0x22) = uVar3;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x22);
  }
  while (((uVar3 <= param_2 && (lVar8 = *(long *)(param_1 + 4), lVar8 != 0)) &&
         (*(int *)(lVar8 + 0x194) <= *(int *)(lVar8 + 0x110)))) {
    uStack_48 = 0;
    func_0x00010822096c(lVar8,param_1 + 0x24,&uStack_48);
    uVar3 = uStack_48;
    if (*(char *)((long)param_1 + 0x21) == '\0') {
      uVar3 = *(int *)(param_1 + 0x22) + 0x21;
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x22);
    *(uint *)(param_1 + 0x22) = uVar3;
  }
  lVar8 = *(long *)(param_1 + 0x24);
  uVar9 = (ulong)*param_1;
  lVar6 = uVar9 * 4;
  uVar10 = (ulong)param_1[1];
  uVar15 = lVar6 * uVar10;
  lVar11 = lVar8;
  if ((char)param_1[0x10] == '\x01') {
    puVar16 = param_1 + 0x28;
    lVar11 = *(long *)puVar16;
    uVar12 = *(long *)(param_1 + 0x2c) - lVar11;
    if (uVar15 < uVar12 || uVar15 - uVar12 == 0) {
      if (uVar15 < uVar12) {
        *(ulong *)(param_1 + 0x2c) = lVar11 + uVar15;
      }
    }
    else {
      func_0x000107c27d58(puVar16,uVar15 - uVar12);
      uVar9 = (ulong)*param_1;
      uVar10 = (ulong)param_1[1];
      lVar11 = *(long *)(param_1 + 0x28);
    }
    if ((int)uVar10 != 0) {
      uVar12 = 0;
      do {
        if ((int)uVar9 != 0) {
          lVar13 = 0;
          uVar14 = uVar9;
          do {
            puVar1 = (undefined2 *)(lVar8 + lVar13);
            uVar4 = *(undefined1 *)(puVar1 + 1);
            cVar5 = *(char *)((long)puVar1 + 3);
            puVar2 = (undefined2 *)(lVar11 + lVar13);
            *puVar2 = *puVar1;
            *(undefined1 *)(puVar2 + 1) = uVar4;
            *(byte *)((long)puVar2 + 3) =
                 ((byte)((int)cVar5 << 1) | 1) & (byte)((uint)(int)cVar5 >> 7);
            lVar13 = lVar13 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        uVar12 = uVar12 + 1;
        lVar8 = lVar8 + lVar6;
        lVar11 = lVar11 + lVar6;
      } while (uVar12 != uVar10);
      lVar11 = *(long *)puVar16;
    }
  }
  auVar17._8_8_ = uVar15;
  auVar17._0_8_ = lVar11;
  return auVar17;
}



/* Entry: 10a1b23e0; end: 10a1b25bf;  */

void FUN_10a1b23e0(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  char *pcStack_80;
  undefined8 uStack_78;
  char *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6425e9;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  pcStack_80 = "";
  uStack_78 = 0;
  pcStack_70 = "";
  uStack_68 = 0;
  uStack_60 = 0x11d;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6425fc;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  pcStack_80 = "";
  uStack_78 = 0;
  uStack_68 = 0;
  pcStack_70 = (char *)0x0;
  uStack_60 = 0x11d;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1b25c0(param_1,&puStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f64260f;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  pcStack_80 = "";
  uStack_78 = 0;
  uStack_68 = 0;
  pcStack_70 = (char *)0x0;
  uStack_60 = 0x11d;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1b25c0();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f64261a;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  pcStack_80 = "";
  uStack_78 = 0;
  uStack_68 = 0;
  pcStack_70 = (char *)0x0;
  uStack_60 = 0x11d;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1b25c0();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f64262e;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  pcStack_80 = "";
  uStack_78 = 0;
  uStack_68 = 0;
  pcStack_70 = (char *)0x0;
  uStack_60 = 0x11d;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1b25c0();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f64263a;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  pcStack_80 = "";
  uStack_78 = 0;
  uStack_68 = 0;
  pcStack_70 = (char *)0x0;
  uStack_60 = 0x11d;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1b25c0();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a1b25c0; end: 10a1b2663;  */

undefined8 * FUN_10a1b25c0(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1b2664);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a1b2664; end: 10a1b2667;  */

void FUN_10a1b2664(void)

{
  return;
}



/* Entry: 10a1b2668; end: 10a1b27b7;  */

undefined8 **
FUN_10a1b2668(undefined8 **param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *apuStack_140 [2];
  byte bStack_130;
  undefined8 uStack_128;
  undefined **ppuStack_120;
  code *pcStack_118;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 **ppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *apuStack_a0 [7];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[2] = (undefined8 *)0x0;
  param_1[3] = (undefined8 *)0x0;
  param_1[6] = (undefined8 *)0x0;
  param_1[7] = (undefined8 *)0x0;
  param_1[4] = (undefined8 *)0xffffffff00000000;
  param_1[5] = (undefined8 *)0x0;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110bab9a0;
  param_1[8] = (undefined8 *)0x0;
  param_1[9] = (undefined8 *)FUN_109cdbc70;
  ppuVar4 = param_1 + 10;
  *ppuVar4 = &PTR_DAT_110950c70;
  *(undefined1 *)(param_1 + 0x11) = 0;
  uStack_a8 = *param_6;
  (**(code **)(param_6[1] + 0x10))(apuStack_a0,param_6 + 1);
  uStack_b0 = 0;
  FUN_10a1b1c04(param_1,param_3,param_5,param_2,param_4,&uStack_a8,param_7,param_8);
  ppuVar2 = apuStack_a0;
  (*(code *)*apuStack_a0[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_a0[0])(apuStack_a0);
  (*(code *)**ppuVar4)(ppuVar4);
  ppuVar3 = ppuVar2;
  __Unwind_Resume();
  pcStack_b8 = FUN_10a1b27b8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_e0 = param_7;
  ppuStack_d8 = ppuVar4;
  uStack_d0 = param_8;
  ppuStack_c8 = ppuVar2;
  puStack_c0 = &stack0xfffffffffffffff0;
  ppuVar3[2] = (undefined8 *)0x0;
  ppuVar3[3] = (undefined8 *)0x0;
  ppuVar3[4] = (undefined8 *)0xffffffff00000000;
  ppuVar3[5] = (undefined8 *)0x0;
  ppuVar3[6] = (undefined8 *)0x0;
  ppuVar3[7] = (undefined8 *)0x0;
  *(undefined1 *)(ppuVar3 + 1) = 0;
  *ppuVar3 = &PTR_FUN_110bab9a0;
  ppuVar2 = ppuVar3 + 10;
  *ppuVar2 = &PTR_DAT_110950c70;
  ppuVar3[8] = (undefined8 *)0x0;
  ppuVar3[9] = (undefined8 *)FUN_109cdbc70;
  *(undefined1 *)(ppuVar3 + 0x11) = 0;
  uStack_128 = 0x109d138c8;
  ppuStack_120 = &PTR_DAT_110b3e838;
  pcStack_118 = FUN_10a1b1e10;
  FUN_10a1b1c04();
  (*(code *)*ppuStack_120)(&ppuStack_120);
  FUN_10a1b17a8(apuStack_140,*param_3);
  FUN_10a1b2920(ppuVar3);
  if ((ulong)bStack_130 < 4) {
    ppuVar4 = apuStack_140;
    (*(code *)(&PTR_FUN_110ba20c8)[bStack_130])();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
      return ppuVar3;
    }
    ___stack_chk_fail();
    (*(code *)**ppuVar2)(ppuVar2);
    puVar5 = apuStack_140[0];
    __Unwind_Resume();
    ppuVar2 = ppuVar4 + 10;
    puVar6 = *ppuVar2;
    if (*(char *)(puVar6 + 1) == '\x01') {
      (*(code *)ppuVar4[9])(ppuVar4[5]);
      puVar6 = *ppuVar2;
    }
    ppuVar4[5] = (undefined8 *)0x0;
    puVar9 = (undefined8 *)puVar5[3];
    puVar8 = (undefined8 *)puVar5[2];
    puVar10 = (undefined8 *)puVar5[4];
    puVar12 = (undefined8 *)puVar5[7];
    puVar11 = (undefined8 *)puVar5[6];
    ppuVar4[5] = (undefined8 *)puVar5[5];
    ppuVar4[4] = puVar10;
    ppuVar4[7] = puVar12;
    ppuVar4[6] = puVar11;
    ppuVar4[3] = puVar9;
    ppuVar4[2] = puVar8;
    ppuVar4[9] = (undefined8 *)puVar5[9];
    (*(code *)*puVar6)(ppuVar2);
    plVar7 = puVar5 + 10;
    (**(code **)(*plVar7 + 0x10))(ppuVar2,plVar7);
    *(undefined1 *)(ppuVar4 + 0x11) = *(undefined1 *)(puVar5 + 0x11);
    puVar5[9] = 0x109d138c8;
    (**(code **)*plVar7)(plVar7);
    *plVar7 = (long)&PTR_DAT_110b3e838;
    puVar5[0xb] = FUN_10a1b2664;
    return ppuVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1b28e8);
  (*pcVar1)();
}



/* Entry: 10a1b27b8; end: 10a1b291f;  */

long * FUN_10a1b27b8(long *param_1,undefined8 *param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long alStack_90 [2];
  byte bStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  code *pcStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = -0x100000000;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = (long)&PTR_FUN_110bab9a0;
  plVar5 = param_1 + 10;
  *plVar5 = (long)&PTR_DAT_110950c70;
  param_1[8] = 0;
  param_1[9] = (long)FUN_109cdbc70;
  *(undefined1 *)(param_1 + 0x11) = 0;
  uStack_78 = 0x109d138c8;
  ppuStack_70 = &PTR_DAT_110b3e838;
  pcStack_68 = FUN_10a1b1e10;
  FUN_10a1b1c04(param_1,0,3,0,0,&uStack_78,0,0,0);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  FUN_10a1b17a8(alStack_90,*param_2);
  FUN_10a1b2920(param_1);
  if (3 < (ulong)bStack_80) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1b28e8);
    (*pcVar1)();
  }
  plVar2 = alStack_90;
  (*(code *)(&PTR_FUN_110ba20c8)[bStack_80])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  (**(code **)*plVar5)(plVar5);
  lVar3 = alStack_90[0];
  __Unwind_Resume();
  plVar5 = plVar2 + 10;
  puVar4 = (undefined8 *)*plVar5;
  if (*(char *)(puVar4 + 1) == '\x01') {
    (*(code *)plVar2[9])(plVar2[5]);
    puVar4 = (undefined8 *)*plVar5;
  }
  plVar2[5] = 0;
  lVar8 = *(long *)(lVar3 + 0x18);
  lVar7 = *(long *)(lVar3 + 0x10);
  lVar9 = *(long *)(lVar3 + 0x20);
  lVar11 = *(long *)(lVar3 + 0x38);
  lVar10 = *(long *)(lVar3 + 0x30);
  plVar2[5] = *(long *)(lVar3 + 0x28);
  plVar2[4] = lVar9;
  plVar2[7] = lVar11;
  plVar2[6] = lVar10;
  plVar2[3] = lVar8;
  plVar2[2] = lVar7;
  plVar2[9] = *(long *)(lVar3 + 0x48);
  (*(code *)*puVar4)(plVar5);
  plVar6 = (long *)(lVar3 + 0x50);
  (**(code **)(*plVar6 + 0x10))(plVar5,plVar6);
  *(undefined1 *)(plVar2 + 0x11) = *(undefined1 *)(lVar3 + 0x88);
  *(undefined8 *)(lVar3 + 0x48) = 0x109d138c8;
  (**(code **)*plVar6)(plVar6);
  *plVar6 = (long)&PTR_DAT_110b3e838;
  *(code **)(lVar3 + 0x58) = FUN_10a1b2664;
  return plVar2;
}



/* Entry: 10a1b2920; end: 10a1b29ef;  */

long FUN_10a1b2920(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  plVar2 = (long *)(param_1 + 0x50);
  puVar1 = (undefined8 *)*plVar2;
  if (*(char *)(puVar1 + 1) == '\x01') {
    (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x28));
    puVar1 = (undefined8 *)*plVar2;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  uVar8 = *(undefined8 *)(param_2 + 0x38);
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  *(undefined8 *)(param_1 + 0x38) = uVar8;
  *(undefined8 *)(param_1 + 0x30) = uVar7;
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  (*(code *)*puVar1)(plVar2);
  plVar3 = (long *)(param_2 + 0x50);
  (**(code **)(*plVar3 + 0x10))(plVar2,plVar3);
  *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_2 + 0x88);
  *(undefined8 *)(param_2 + 0x48) = 0x109d138c8;
  (**(code **)*plVar3)(plVar3);
  *plVar3 = (long)&PTR_DAT_110b3e838;
  *(code **)(param_2 + 0x58) = FUN_10a1b2664;
  return param_1;
}



/* Entry: 10a1b29f0; end: 10a1b2a5b;  */

void FUN_10a1b29f0(long param_1)

{
  code *pcVar1;
  undefined1 auStack_38 [24];
  
  _malloc();
  if (param_1 != 0) {
    return;
  }
  FUN_10a0ee900(auStack_38,&UNK_10f642649,0x33);
  FUN_10a1ba720(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1b2a40);
  (*pcVar1)();
}



/* Entry: 10a1b2a5c; end: 10a1b2a83;  */

void FUN_10a1b2a5c(long param_1,uint param_2)

{
  undefined4 uVar1;
  
  *(uint *)(param_1 + 0x14) = param_2;
  if (param_2 < 0x17) {
    uVar1 = *(undefined4 *)(&UNK_10e49c5b8 + (ulong)param_2 * 4);
  }
  else {
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}



/* Entry: 10a1b2a84; end: 10a1b2b9b;  */

undefined *** FUN_10a1b2a84(undefined ***param_1)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  undefined ***pppuVar3;
  undefined **ppuStack_70;
  code *pcStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[2] = (undefined **)0x0;
  param_1[3] = (undefined **)0x0;
  param_1[4] = (undefined **)0xffffffff00000000;
  param_1[5] = (undefined **)0x0;
  param_1[6] = (undefined **)0x0;
  param_1[7] = (undefined **)0x0;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110bab9a0;
  pppuVar3 = param_1 + 10;
  *pppuVar3 = &PTR_DAT_110950c70;
  param_1[8] = (undefined **)0x0;
  param_1[9] = (undefined **)FUN_109cdbc70;
  *(undefined1 *)(param_1 + 0x11) = 0;
  ppuStack_70 = &PTR_DAT_110b3e838;
  pcStack_68 = FUN_10a1b1e10;
  FUN_10a1b1c04();
  pppuVar1 = &ppuStack_70;
  (*(code *)*ppuStack_70)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  (*(code *)**pppuVar3)(pppuVar3);
  __Unwind_Resume();
  *pppuVar1 = &PTR_FUN_110bab9a0;
  pppuVar3 = pppuVar1 + 10;
  ppuVar2 = *pppuVar3;
  if (*(char *)(ppuVar2 + 1) == '\x01') {
    (*(code *)pppuVar1[9])(pppuVar1[5]);
    ppuVar2 = *pppuVar3;
  }
  pppuVar1[5] = (undefined **)0x0;
  (*(code *)*ppuVar2)(pppuVar3);
  return pppuVar1;
}



/* Entry: 10a1b2b9c; end: 10a1b2c03;  */

undefined8 * FUN_10a1b2b9c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110bab9a0;
  plVar2 = param_1 + 10;
  puVar1 = (undefined8 *)*plVar2;
  if (*(char *)(puVar1 + 1) == '\x01') {
    (*(code *)param_1[9])(param_1[5]);
    puVar1 = (undefined8 *)*plVar2;
  }
  param_1[5] = 0;
  (*(code *)*puVar1)(plVar2);
  return param_1;
}



/* Entry: 10a1b2c04; end: 10a1b2c67;  */

long FUN_10a1b2c04(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10a1b2a84(param_1,param_2[3],param_3,0);
  (**(code **)(*param_2 + 0x10))
            (param_2,*(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x18),0,
             *(undefined4 *)((long)param_2 + 0x1c));
  return param_1;
}



/* Entry: 10a1b2c68; end: 10a1b2c6b;  */

undefined8 * FUN_10a1b2c68(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110bab9a0;
  plVar2 = param_1 + 10;
  puVar1 = (undefined8 *)*plVar2;
  if (*(char *)(puVar1 + 1) == '\x01') {
    (*(code *)param_1[9])(param_1[5]);
    puVar1 = (undefined8 *)*plVar2;
  }
  param_1[5] = 0;
  (*(code *)*puVar1)(plVar2);
  return param_1;
}



/* Entry: 10a1b2c6c; end: 10a1b2d83;  */

undefined *** FUN_10a1b2c6c(undefined ***param_1)

{
  undefined ***pppuVar1;
  undefined1 in_w4;
  undefined ***pppuVar2;
  undefined **ppuStack_70;
  code *pcStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[2] = (undefined **)0x0;
  param_1[3] = (undefined **)0x0;
  param_1[4] = (undefined **)0xffffffff00000000;
  param_1[5] = (undefined **)0x0;
  param_1[6] = (undefined **)0x0;
  param_1[7] = (undefined **)0x0;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110bab9a0;
  pppuVar2 = param_1 + 10;
  *pppuVar2 = &PTR_DAT_110950c70;
  param_1[8] = (undefined **)0x0;
  param_1[9] = (undefined **)FUN_109cdbc70;
  *(undefined1 *)(param_1 + 0x11) = in_w4;
  ppuStack_70 = &PTR_DAT_110b3e838;
  pcStack_68 = FUN_10a1b1e10;
  FUN_10a1b1c04();
  pppuVar1 = &ppuStack_70;
  (*(code *)*ppuStack_70)(pppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  (*(code *)**pppuVar2)(pppuVar2);
  __Unwind_Resume(pppuVar1);
  FUN_10a1b2b9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return pppuVar1;
}



/* Entry: 10a1b2d84; end: 10a1b2d97;  */

void FUN_10a1b2d84(void)

{
  FUN_10a1b2b9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1b2d98; end: 10a1b2e9b;  */

void FUN_10a1b2d98(uint *param_1,undefined8 *param_2,undefined8 param_3,long param_4,ulong param_5,
                  long param_6,ulong param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  
  if (((ulong)param_2 & 0x8000000080000000) == 0) {
    if ((param_2 < (undefined8 *)0x400100000000) && (uVar7 = (uint)param_2, uVar7 < 0x4001)) {
      FUN_10a1b2a5c(param_1,param_3);
      if (param_7 == 0) {
        if ((uint)param_3 < 0x17) {
          param_7 = ((ulong)param_2 & 0x7fff) * ((ulong)param_2 >> 0x20) >> 1;
          if ((1 << (ulong)((uint)param_3 & 0x1f) & 0x400500U) == 0) {
            param_7 = 0;
          }
        }
        else {
          param_7 = 0;
        }
      }
      if (param_4 == 0) {
        param_5 = (ulong)((param_1[4] << ((param_1[5] & 0xfffffffb) == 0xb)) * uVar7);
      }
      else if ((param_6 == 0) && (param_7 != 0)) {
        param_6 = param_4 + param_5 * ((ulong)param_2 >> 0x20);
      }
      *param_1 = uVar7;
      param_1[1] = (uint)((ulong)param_2 >> 0x20);
      *(ulong *)(param_1 + 2) = param_5;
      *(long *)(param_1 + 6) = param_4;
      *(long *)(param_1 + 8) = param_6;
      *(ulong *)(param_1 + 10) = param_7;
      return;
    }
  }
  else {
    FUN_10a0ee06c(&UNK_10f642b5c);
  }
  puVar1 = &UNK_10f642b89;
  FUN_10a0ee06c();
  puVar3 = param_2;
  uVar5 = param_3;
  if (*(char *)(*(long *)(puVar1 + 0x50) + 8) == '\x01') {
    puVar3 = (undefined8 *)(puVar1 + 0x48);
    (*(code *)*puVar3)(*(undefined8 *)(puVar1 + 0x28));
  }
  iVar4 = (int)uVar5;
  *(undefined8 *)(puVar1 + 0x28) = 0;
  if (((ulong)param_2 & 0x8000000080000000) == 0) {
    if ((param_2 < (undefined8 *)0x400100000000) && (uVar7 = (uint)param_2, uVar7 < 0x4001)) {
      FUN_10a1b2a5c(puVar1 + 0x10,param_3);
      *(undefined8 *)(puVar1 + 0x28) = 0;
      *(uint *)(puVar1 + 0x10) = uVar7;
      *(int *)(puVar1 + 0x14) = (int)((ulong)param_2 >> 0x20);
      *(ulong *)(puVar1 + 0x18) =
           (ulong)((*(int *)(puVar1 + 0x20) << ((*(uint *)(puVar1 + 0x24) & 0xfffffffb) == 0xb)) *
                  uVar7);
      *(long *)(puVar1 + 0x40) = param_4;
      *(undefined8 *)(puVar1 + 0x48) = 0x109d138c8;
      (*(code *)**(undefined8 **)(puVar1 + 0x50))(puVar1 + 0x50);
      *(undefined ***)(puVar1 + 0x50) = &PTR_DAT_110b3e838;
      *(code **)(puVar1 + 0x58) = FUN_10a1b2664;
      *(undefined8 *)(puVar1 + 0x30) = 0;
      *(undefined8 *)(puVar1 + 0x38) = 0;
      return;
    }
  }
  else {
    FUN_10a0ee06c(&UNK_10f642b5c);
  }
  puVar1 = &UNK_10f642b89;
  FUN_10a0ee06c();
  if (*(char *)(*(long *)(puVar1 + 0x50) + 8) == '\x01') {
    (**(code **)(puVar1 + 0x48))(*(undefined8 *)(puVar1 + 0x28));
  }
  *(undefined8 *)(puVar1 + 0x28) = 0;
  if (iVar4 == 0) {
    uVar6 = (long)*(int *)(puVar3 + 2) * (long)*(int *)(puVar3 + 4) + 3U & 0xfffffffffffffffc;
  }
  else {
    uVar6 = puVar3[3];
  }
  lVar8 = uVar6 * (long)*(int *)((long)puVar3 + 0x14);
  *(ulong *)(puVar1 + 0x18) = uVar6;
  if (puVar3[6] != 0) {
    lVar8 = puVar3[7] + lVar8;
    *(undefined8 *)(puVar1 + 0x38) = puVar3[7];
  }
  lVar2 = lVar8;
  FUN_10a1b29f0();
  *(long *)(puVar1 + 0x28) = lVar2;
  *(undefined8 *)(puVar1 + 0x48) = 0x109d138c8;
  (*(code *)**(undefined8 **)(puVar1 + 0x50))(puVar1 + 0x50);
  *(undefined ***)(puVar1 + 0x50) = &PTR_DAT_110b3e838;
  *(code **)(puVar1 + 0x58) = FUN_10a1b1e10;
  *(undefined8 *)(puVar1 + 0x10) = puVar3[2];
  FUN_10a1b2a5c(puVar1 + 0x10,*(undefined4 *)((long)puVar3 + 0x24));
  func_0x00010a1b30c0(puVar1,puVar3);
  if (puVar3[6] != 0) {
    lVar8 = (*(long *)(puVar1 + 0x28) + lVar8) - puVar3[7];
    *(long *)(puVar1 + 0x30) = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(lVar8,puVar3[6],*(undefined8 *)(puVar1 + 0x38));
    return;
  }
  return;
}



/* Entry: 10a1b2e9c; end: 10a1b2f9b;  */

void FUN_10a1b2e9c(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  
  puVar3 = param_2;
  uVar5 = param_3;
  if (*(char *)(*(long *)(param_1 + 0x50) + 8) == '\x01') {
    puVar3 = (undefined8 *)(param_1 + 0x48);
    (*(code *)*puVar3)(*(undefined8 *)(param_1 + 0x28));
  }
  iVar4 = (int)uVar5;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (((ulong)param_2 & 0x8000000080000000) == 0) {
    if ((param_2 < (undefined8 *)0x400100000000) && (uVar7 = (uint)param_2, uVar7 < 0x4001)) {
      FUN_10a1b2a5c(param_1 + 0x10,param_3);
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(uint *)(param_1 + 0x10) = uVar7;
      *(int *)(param_1 + 0x14) = (int)((ulong)param_2 >> 0x20);
      *(ulong *)(param_1 + 0x18) =
           (ulong)((*(int *)(param_1 + 0x20) << ((*(uint *)(param_1 + 0x24) & 0xfffffffb) == 0xb)) *
                  uVar7);
      *(undefined8 *)(param_1 + 0x40) = param_4;
      *(undefined8 *)(param_1 + 0x48) = 0x109d138c8;
      (*(code *)**(undefined8 **)(param_1 + 0x50))((long *)(param_1 + 0x50));
      *(undefined ***)(param_1 + 0x50) = &PTR_DAT_110b3e838;
      *(code **)(param_1 + 0x58) = FUN_10a1b2664;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      return;
    }
  }
  else {
    FUN_10a0ee06c(&UNK_10f642b5c);
  }
  puVar1 = &UNK_10f642b89;
  FUN_10a0ee06c();
  if (*(char *)(*(long *)(puVar1 + 0x50) + 8) == '\x01') {
    (**(code **)(puVar1 + 0x48))(*(undefined8 *)(puVar1 + 0x28));
  }
  *(undefined8 *)(puVar1 + 0x28) = 0;
  if (iVar4 == 0) {
    uVar6 = (long)*(int *)(puVar3 + 2) * (long)*(int *)(puVar3 + 4) + 3U & 0xfffffffffffffffc;
  }
  else {
    uVar6 = puVar3[3];
  }
  lVar8 = uVar6 * (long)*(int *)((long)puVar3 + 0x14);
  *(ulong *)(puVar1 + 0x18) = uVar6;
  if (puVar3[6] != 0) {
    lVar8 = puVar3[7] + lVar8;
    *(undefined8 *)(puVar1 + 0x38) = puVar3[7];
  }
  lVar2 = lVar8;
  FUN_10a1b29f0();
  *(long *)(puVar1 + 0x28) = lVar2;
  *(undefined8 *)(puVar1 + 0x48) = 0x109d138c8;
  (*(code *)**(undefined8 **)(puVar1 + 0x50))(puVar1 + 0x50);
  *(undefined ***)(puVar1 + 0x50) = &PTR_DAT_110b3e838;
  *(code **)(puVar1 + 0x58) = FUN_10a1b1e10;
  *(undefined8 *)(puVar1 + 0x10) = puVar3[2];
  FUN_10a1b2a5c(puVar1 + 0x10,*(undefined4 *)((long)puVar3 + 0x24));
  func_0x00010a1b30c0(puVar1,puVar3);
  if (puVar3[6] != 0) {
    lVar8 = (*(long *)(puVar1 + 0x28) + lVar8) - puVar3[7];
    *(long *)(puVar1 + 0x30) = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(lVar8,puVar3[6],*(undefined8 *)(puVar1 + 0x38));
    return;
  }
  return;
}



/* Entry: 10a1b2f9c; end: 10a1b316f;  */

void FUN_10a1b2f9c(long param_1,long param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(char *)(*(long *)(param_1 + 0x50) + 8) == '\x01') {
    (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x28));
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_3 == 0) {
    uVar2 = (long)*(int *)(param_2 + 0x10) * (long)*(int *)(param_2 + 0x20) + 3U &
            0xfffffffffffffffc;
  }
  else {
    uVar2 = *(ulong *)(param_2 + 0x18);
  }
  lVar3 = uVar2 * (long)*(int *)(param_2 + 0x14);
  *(ulong *)(param_1 + 0x18) = uVar2;
  if (*(long *)(param_2 + 0x30) != 0) {
    lVar3 = *(long *)(param_2 + 0x38) + lVar3;
    *(long *)(param_1 + 0x38) = *(long *)(param_2 + 0x38);
  }
  lVar1 = lVar3;
  FUN_10a1b29f0();
  *(long *)(param_1 + 0x28) = lVar1;
  *(undefined8 *)(param_1 + 0x48) = 0x109d138c8;
  (*(code *)**(undefined8 **)(param_1 + 0x50))((long *)(param_1 + 0x50));
  *(undefined ***)(param_1 + 0x50) = &PTR_DAT_110b3e838;
  *(code **)(param_1 + 0x58) = FUN_10a1b1e10;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  FUN_10a1b2a5c((undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x24));
  func_0x00010a1b30c0(param_1,param_2);
  if (*(long *)(param_2 + 0x30) != 0) {
    lVar3 = (*(long *)(param_1 + 0x28) + lVar3) - *(long *)(param_2 + 0x38);
    *(long *)(param_1 + 0x30) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (lVar3,*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_1 + 0x38));
    return;
  }
  return;
}



/* Entry: 10a1b3170; end: 10a1b329b;  */

void FUN_10a1b3170(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  long lVar12;
  
  lVar12 = (long)*(int *)(param_1 + 0x10) * 4;
  lVar4 = lVar12 * *(int *)(param_1 + 0x14);
  FUN_10a1b29f0();
  uVar1 = *(uint *)(param_1 + 0x14);
  iVar11 = (int)lVar12;
  if (0 < (int)uVar1) {
    uVar6 = 0;
    lVar7 = *(long *)(param_1 + 0x18);
    iVar2 = *(int *)(param_1 + 0x10);
    puVar8 = (undefined1 *)(lVar4 + 1);
    lVar12 = 2;
    do {
      if (0 < iVar2) {
        puVar9 = (undefined1 *)(*(long *)(param_1 + 0x28) + lVar12);
        puVar10 = puVar8;
        iVar3 = iVar2;
        do {
          puVar10[-1] = puVar9[-2];
          *puVar10 = puVar9[-1];
          puVar10[1] = *puVar9;
          puVar10[2] = 0xff;
          puVar10 = puVar10 + 4;
          iVar3 = iVar3 + -1;
          puVar9 = puVar9 + 3;
        } while (iVar3 != 0);
      }
      uVar6 = uVar6 + 1;
      lVar12 = lVar12 + lVar7;
      puVar8 = puVar8 + iVar11;
    } while (uVar6 != uVar1);
  }
  puVar5 = *(undefined8 **)(param_1 + 0x50);
  if (*(char *)(puVar5 + 1) == '\x01') {
    (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x28),(undefined8 *)(param_1 + 0x48));
    puVar5 = *(undefined8 **)(param_1 + 0x50);
  }
  *(undefined8 *)(param_1 + 0x20) = 0x100000004;
  *(long *)(param_1 + 0x28) = lVar4;
  *(undefined8 *)(param_1 + 0x48) = 0x109d138c8;
  (*(code *)*puVar5)((long *)(param_1 + 0x50));
  *(undefined ***)(param_1 + 0x50) = &PTR_DAT_110b3e838;
  *(code **)(param_1 + 0x58) = FUN_10a1b1e10;
  *(long *)(param_1 + 0x18) = (long)iVar11;
  return;
}



/* Entry: 10a1b329c; end: 10a1b3323;  */

undefined8 * FUN_10a1b329c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x90;
  __Znwm();
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 1) = 0;
  *puVar1 = &PTR_FUN_110bab9a0;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[4] = 0xffffffff00000000;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0x109d138c8;
  puVar1[10] = &PTR_DAT_110b3e838;
  puVar1[0xb] = FUN_10a1b2664;
  FUN_10a1b2f9c();
  return puVar1;
}



/* Entry: 10a1b3324; end: 10a1b3597;  */

void FUN_10a1b3324(undefined8 param_1,long *param_2)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong in_stack_ffffffffffffff30;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  code *pcStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bab9e8);
  if ((int)plVar3 == 0) {
LAB_10a1b34d0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110bab9e8);
    plVar3 = param_2;
    (**(code **)(*param_2 + 0x38))(param_2,&PTR_s_width_110bac2f0,0);
    plVar4 = param_2;
    (**(code **)(*param_2 + 0x38))(param_2,&PTR_s_height_110baba08,0);
    plVar5 = param_2;
    (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110baba28,0xffffffff);
    plVar6 = param_2;
    (**(code **)(*param_2 + 0x28))(param_2,&PTR_DAT_110baba48,0);
    uVar8 = (uint)plVar4;
    if ((-1 < (int)uVar8) && (-1 < (int)plVar3)) {
      if (uVar8 != 0) {
        uVar1 = 0;
        if (uVar8 != 0) {
          uVar1 = 0x10000000 / uVar8;
        }
        if ((long *)(ulong)uVar1 < plVar6) {
          FUN_10a0ee900(&uStack_b0,&UNK_10f6426b0,0x3a);
          FUN_10a0029c0(&uStack_b0);
          goto LAB_10a1b3554;
        }
      }
      uVar9 = (long)plVar6 * ((ulong)plVar4 & 0xffffffff);
      uVar7 = uVar9;
      FUN_10a1b29f0();
      uStack_a8 = uVar9 & 0xffffffff;
      uStack_b0 = uVar7;
      FUN_10a0ff254(param_2,&PTR_s_data_110bac310,&uStack_b0,FUN_10a1b9318);
      (**(code **)(*param_2 + 0x220))(param_2);
      uStack_98 = 0x109d138c8;
      ppuStack_90 = &PTR_DAT_110b3e838;
      pcStack_88 = FUN_10a1b1e10;
      FUN_10a1b1c04(param_1,(ulong)plVar3 & 0xffffffff | (long)plVar4 << 0x20,plVar5,uVar7,plVar6,
                    &uStack_98,0,0,in_stack_ffffffffffffff30 & 0xffffffffffffff00);
      (*(code *)*ppuStack_90)(&ppuStack_90);
      goto LAB_10a1b34d0;
    }
  }
  FUN_10a0ee900(&uStack_b0,&UNK_10f64267d,0x32);
  FUN_10a0029c0(&uStack_b0);
LAB_10a1b3554:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a1b3558);
  (*pcVar2)();
}



/* Entry: 10a1b3598; end: 10a1b366f;  */

void FUN_10a1b3598(long param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110bab9e8);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_s_width_110bac2f0,*(undefined4 *)(param_1 + 0x10));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_s_height_110baba08,*(undefined4 *)(param_1 + 0x14));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110baba28,*(undefined4 *)(param_1 + 0x24));
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110baba48,*(undefined8 *)(param_1 + 0x18));
  (**(code **)(*param_2 + 0x28))
            (param_2,&PTR_s_data_110bac310,*(undefined8 *)(param_1 + 0x28),
             *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010a1b366c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10a1b3670; end: 10a1b4213;  */

void FUN_10a1b3670(long *param_1,long *param_2,long param_3,uint *param_4,ulong *param_5)

{
  long *plVar1;
  int *piVar2;
  ulong uVar3;
  undefined4 uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  long lStack_1a0;
  int *piStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined4 auStack_158 [2];
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_108;
  undefined8 *puStack_100;
  undefined1 *puStack_f8;
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_a8;
  long lStack_a0;
  undefined1 *puStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  *param_1 = param_3;
  puVar9 = (undefined8 *)0x20;
  __Znwm();
  *puVar9 = &PTR_FUN_110bac528;
  puVar9[1] = 0;
  puVar9[2] = 0;
  puVar9[3] = param_3;
  param_1[1] = (long)puVar9;
  uVar14 = *param_5;
  uVar13 = *param_4;
  uVar3 = uVar14;
  uVar8 = uVar14 >> 0x20;
  if ((uVar13 & 1) != 0) {
    uVar3 = uVar14 >> 0x20;
    uVar8 = uVar14;
  }
  iVar16 = *(int *)(param_3 + 0x10);
  iVar17 = (int)uVar3;
  if (iVar17 != iVar16 || (int)uVar8 != *(int *)(param_3 + 0x14)) {
    lVar18 = *param_2;
    if ((lVar18 == 0) ||
       (lVar15 = param_3, iVar17 != *(int *)(lVar18 + 0x10) || (int)uVar8 != *(int *)(lVar18 + 0x14)
       )) {
      uVar4 = *(undefined4 *)(param_3 + 0x24);
      plVar10 = (long *)0xa8;
      __Znwm();
      plVar10[1] = 0;
      plVar10[2] = 0;
      plVar11 = plVar10 + 3;
      *plVar10 = (long)&PTR_FUN_110baa4d8;
      FUN_10a1b2c6c(plVar11,uVar3 & 0xffffffff | uVar8 << 0x20,uVar4,0,1);
      uStack_e0 = plVar11;
      plStack_d8 = plVar10;
      FUN_10a16b1ec(param_2,&uStack_e0);
      plVar10 = plStack_d8;
      if (plStack_d8 != (long *)0x0) {
        plVar11 = plStack_d8 + 1;
        do {
          lVar18 = *plVar11;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar7) {
            *plVar11 = lVar18 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      lVar15 = *param_1;
      lVar18 = *param_2;
      iVar16 = *(int *)(lVar15 + 0x10);
      iVar17 = *(int *)(lVar18 + 0x10);
    }
    iStack_1d0 = *(int *)(lVar15 + 0x14);
    uStack_1d8 = (undefined4)*(undefined8 *)(lVar15 + 0x28);
    iStack_1d4 = (int)((ulong)*(undefined8 *)(lVar15 + 0x28) >> 0x20);
    iStack_1cc = iStack_1d0 >> 0x1f;
    iStack_1c4 = iVar16 >> 0x1f;
    uStack_1c0 = (undefined4)*(undefined8 *)(lVar15 + 0x18);
    uStack_1bc = (undefined4)((ulong)*(undefined8 *)(lVar15 + 0x18) >> 0x20);
    uStack_80 = *(undefined8 *)(lVar18 + 0x28);
    lStack_78 = (long)*(int *)(lVar18 + 0x14);
    lStack_70 = (long)iVar17;
    uStack_68 = *(undefined8 *)(lVar18 + 0x18);
    uVar13 = *(uint *)(lVar15 + 0x24);
    iStack_1c8 = iVar16;
    if (uVar13 < 0x17) {
      uVar5 = 1 << (ulong)(uVar13 & 0x1f);
      if ((uVar5 & 0x70a5c0) == 0) {
        if ((uVar5 & 0x5827) == 0) {
          if ((1 << (ulong)(uVar13 & 0x1f) & 0x80200U) == 0) goto LAB_10a1b3be8;
          _vImageScale_CbCr8(&uStack_1d8,&uStack_80,0,0);
        }
        else {
          _vImageScale_ARGB8888(&uStack_1d8,&uStack_80,0,0);
        }
      }
      else {
        _vImageScale_Planar8(&uStack_1d8,&uStack_80,0,0);
      }
    }
    else {
LAB_10a1b3be8:
      FUN_10a0f3910(&uStack_e0,lVar15 + 0x10,0);
      FUN_10a0f3910(&uStack_140,lVar18 + 0x10,0);
      uStack_178 = CONCAT44(uStack_178._4_4_,0x1010000);
      puStack_170 = &uStack_e0;
      lStack_168 = 0;
      auStack_158[0] = 0x2010000;
      uStack_148 = 0;
      uStack_1f0 = NEON_rev64(*puStack_100,4);
      puStack_150 = &uStack_140;
      func_0x000109b0f718(0,0,&uStack_178,auStack_158,&uStack_1f0,1);
      if (lStack_108 != 0) {
        piVar2 = (int *)(lStack_108 + 0x14);
        do {
          iVar16 = *piVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = iVar16 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar16 + -1 == 0) {
          func_0x000109a848d4(&uStack_140);
        }
      }
      lStack_108 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      if (0 < uStack_140._4_4_) {
        lVar18 = 0;
        do {
          *(undefined4 *)((long)puStack_100 + lVar18 * 4) = 0;
          lVar18 = lVar18 + 1;
        } while (lVar18 < uStack_140._4_4_);
      }
      if (puStack_f8 != auStack_f0 && puStack_f8 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_f8 + -8));
      }
      if (lStack_a8 != 0) {
        piVar2 = (int *)(lStack_a8 + 0x14);
        do {
          iVar16 = *piVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = iVar16 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar16 + -1 == 0) {
          func_0x000109a848d4(&uStack_e0);
        }
      }
      lStack_a8 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      if (0 < uStack_e0._4_4_) {
        lVar18 = 0;
        do {
          *(undefined4 *)(lStack_a0 + lVar18 * 4) = 0;
          lVar18 = lVar18 + 1;
        } while (lVar18 < uStack_e0._4_4_);
      }
      if (puStack_98 != auStack_90 && puStack_98 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_98 + -8));
      }
    }
    FUN_10a1b4214(param_1,*param_2,param_2[1]);
    uVar13 = *param_4;
  }
  if ((uVar13 & 3) != 0) {
    plVar10 = param_2 + 2;
    lVar18 = *plVar10;
    if ((lVar18 == 0) ||
       (iVar16 = *(int *)(lVar18 + 0x10),
       (int)*param_5 != iVar16 || *(int *)((long)param_5 + 4) != *(int *)(lVar18 + 0x14))) {
      FUN_10a1ba8d8(&uStack_e0,*param_5,*(undefined4 *)(param_3 + 0x24),0,1);
      FUN_10a16b1ec(plVar10,&uStack_e0);
      plVar11 = plStack_d8;
      if (plStack_d8 != (long *)0x0) {
        plVar1 = plStack_d8 + 1;
        do {
          lVar18 = *plVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar18 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      lVar18 = *plVar10;
      iVar16 = *(int *)(lVar18 + 0x10);
      uVar13 = *param_4;
    }
    lVar15 = *param_1;
    lStack_70 = (long)*(int *)(lVar15 + 0x10);
    uStack_80 = *(undefined8 *)(lVar15 + 0x28);
    lStack_78 = (long)*(int *)(lVar15 + 0x14);
    uStack_68 = *(undefined8 *)(lVar15 + 0x18);
    uStack_178 = *(undefined8 *)(lVar18 + 0x28);
    puStack_170 = (undefined8 *)(long)*(int *)(lVar18 + 0x14);
    lStack_168 = (long)iVar16;
    uStack_160 = *(undefined8 *)(lVar18 + 0x18);
    if ((uVar13 & 3) < 2) {
      if ((uVar13 & 3) != 0) {
        uVar12 = 3;
        goto LAB_10a1b3928;
      }
    }
    else {
      if ((uVar13 & 3) == 3) {
        uVar12 = 1;
      }
      else {
        uVar12 = 2;
      }
LAB_10a1b3928:
      uVar13 = *(uint *)(lVar15 + 0x24);
      if (uVar13 < 0x17) {
        uVar5 = 1 << (ulong)(uVar13 & 0x1f);
        if ((uVar5 & 0x70a5c0) == 0) {
          if ((uVar5 & 0x5827) == 0) {
            if ((1 << (ulong)(uVar13 & 0x1f) & 0x80200U) == 0) goto LAB_10a1b3d50;
            _vImageRotate90_Planar16U(&uStack_80,&uStack_178,uVar12,0,0);
          }
          else {
            uStack_e0 = (long *)((ulong)uStack_e0 & 0xffffffff00000000);
            _vImageRotate90_ARGB8888(&uStack_80,&uStack_178,uVar12,&uStack_e0,0);
          }
        }
        else {
          _vImageRotate90_Planar8(&uStack_80,&uStack_178,uVar12,0,0);
        }
      }
      else {
LAB_10a1b3d50:
        FUN_10a0f3910(&uStack_e0,(int *)(lVar15 + 0x10),0);
        FUN_10a0f3910(&uStack_140,lVar18 + 0x10,0);
        uStack_1d8 = 0x42ff0000;
        piStack_198 = &iStack_1d0;
        iStack_1cc = 0;
        iStack_1c8 = 0;
        iStack_1d4 = 0;
        iStack_1d0 = 0;
        uStack_1bc = 0;
        uStack_1b8 = 0;
        iStack_1c4 = 0;
        uStack_1c0 = 0;
        uStack_1ac = 0;
        uStack_1b4 = 0;
        uStack_1b0 = 0;
        lStack_1a0 = 0;
        uStack_1a8 = 0;
        uStack_1a4 = 0;
        uStack_188 = 0;
        uStack_180 = 0;
        uVar13 = *param_4 & 3;
        puStack_190 = &uStack_188;
        if (uVar13 < 2) {
          if (uVar13 != 0) {
            auStack_158[0] = 0x1010000;
            puStack_150 = &uStack_e0;
            uStack_148 = 0;
            uStack_1f0._0_4_ = 0x2010000;
            uStack_1e0 = 0;
            puStack_1e8 = (undefined8 *)&uStack_1d8;
            func_0x000109a895d0(auStack_158,&uStack_1f0);
            uStack_148 = 0;
            auStack_158[0] = 0x1010000;
            uStack_1f0 = CONCAT44(uStack_1f0._4_4_,0x2010000);
            puStack_1e8 = &uStack_140;
            uStack_1e0 = 0;
            puStack_150 = (undefined8 *)&uStack_1d8;
            func_0x000109a491e0(auStack_158,&uStack_1f0,1);
          }
        }
        else if (uVar13 == 2) {
          auStack_158[0] = 0x1010000;
          puStack_150 = &uStack_e0;
          uStack_148 = 0;
          uStack_1f0 = CONCAT44(uStack_1f0._4_4_,0x2010000);
          puStack_1e8 = &uStack_140;
          uStack_1e0 = 0;
          func_0x000109a491e0(auStack_158,&uStack_1f0,0xffffffff);
        }
        else {
          auStack_158[0] = 0x1010000;
          puStack_150 = &uStack_e0;
          uStack_148 = 0;
          uStack_1f0._0_4_ = 0x2010000;
          uStack_1e0 = 0;
          puStack_1e8 = (undefined8 *)&uStack_1d8;
          func_0x000109a895d0(auStack_158,&uStack_1f0);
          uStack_148 = 0;
          auStack_158[0] = 0x1010000;
          uStack_1f0 = CONCAT44(uStack_1f0._4_4_,0x2010000);
          puStack_1e8 = &uStack_140;
          uStack_1e0 = 0;
          puStack_150 = (undefined8 *)&uStack_1d8;
          func_0x000109a491e0(auStack_158,&uStack_1f0,0);
        }
        if (lStack_1a0 != 0) {
          piVar2 = (int *)(lStack_1a0 + 0x14);
          do {
            iVar16 = *piVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = iVar16 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar16 + -1 == 0) {
            func_0x000109a848d4(&uStack_1d8);
          }
        }
        lStack_1a0 = 0;
        uStack_1c0 = 0;
        uStack_1bc = 0;
        iStack_1c8 = 0;
        iStack_1c4 = 0;
        uStack_1b0 = 0;
        uStack_1ac = 0;
        uStack_1b8 = 0;
        uStack_1b4 = 0;
        if (0 < iStack_1d4) {
          lVar18 = 0;
          do {
            piStack_198[lVar18] = 0;
            lVar18 = lVar18 + 1;
          } while (lVar18 < iStack_1d4);
        }
        if (puStack_190 != &uStack_188 && puStack_190 != (undefined8 *)0x0) {
          _free(puStack_190[-1]);
        }
        if (lStack_108 != 0) {
          piVar2 = (int *)(lStack_108 + 0x14);
          do {
            iVar16 = *piVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = iVar16 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar16 + -1 == 0) {
            func_0x000109a848d4(&uStack_140);
          }
        }
        lStack_108 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        if (0 < uStack_140._4_4_) {
          lVar18 = 0;
          do {
            *(undefined4 *)((long)puStack_100 + lVar18 * 4) = 0;
            lVar18 = lVar18 + 1;
          } while (lVar18 < uStack_140._4_4_);
        }
        if (puStack_f8 != auStack_f0 && puStack_f8 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_f8 + -8));
        }
        if (lStack_a8 != 0) {
          piVar2 = (int *)(lStack_a8 + 0x14);
          do {
            iVar16 = *piVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = iVar16 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar16 + -1 == 0) {
            func_0x000109a848d4(&uStack_e0);
          }
        }
        lStack_a8 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        if (0 < uStack_e0._4_4_) {
          lVar18 = 0;
          do {
            *(undefined4 *)(lStack_a0 + lVar18 * 4) = 0;
            lVar18 = lVar18 + 1;
          } while (lVar18 < uStack_e0._4_4_);
        }
        if (puStack_98 != auStack_90 && puStack_98 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_98 + -8));
        }
      }
    }
    FUN_10a1b4214(param_1,param_2[2],param_2[3]);
    uVar13 = *param_4;
  }
  if ((uVar13 & 0xc) == 0) {
    return;
  }
  plVar10 = param_2 + 4;
  lVar18 = *plVar10;
  if ((lVar18 == 0) ||
     (iVar16 = *(int *)(lVar18 + 0x10),
     (int)*param_5 != iVar16 || *(int *)((long)param_5 + 4) != *(int *)(lVar18 + 0x14))) {
    FUN_10a1ba8d8(&uStack_e0,*param_5,*(undefined4 *)(param_3 + 0x24),0,1);
    FUN_10a16b1ec(plVar10,&uStack_e0);
    plVar11 = plStack_d8;
    if (plStack_d8 != (long *)0x0) {
      plVar1 = plStack_d8 + 1;
      do {
        lVar18 = *plVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    lVar18 = *plVar10;
    iVar16 = *(int *)(lVar18 + 0x10);
  }
  lVar15 = *param_1;
  iStack_1c8 = *(int *)(lVar15 + 0x10);
  iStack_1d0 = *(int *)(lVar15 + 0x14);
  uStack_1d8 = (undefined4)*(undefined8 *)(lVar15 + 0x28);
  iStack_1d4 = (int)((ulong)*(undefined8 *)(lVar15 + 0x28) >> 0x20);
  iStack_1cc = iStack_1d0 >> 0x1f;
  iStack_1c4 = iStack_1c8 >> 0x1f;
  uStack_1c0 = (undefined4)*(undefined8 *)(lVar15 + 0x18);
  uStack_1bc = (undefined4)((ulong)*(undefined8 *)(lVar15 + 0x18) >> 0x20);
  uStack_80 = *(undefined8 *)(lVar18 + 0x28);
  lStack_78 = (long)*(int *)(lVar18 + 0x14);
  lStack_70 = (long)iVar16;
  uStack_68 = *(undefined8 *)(lVar18 + 0x18);
  uVar13 = *(uint *)(lVar15 + 0x24);
  if (uVar13 < 0x17) {
    uVar5 = 1 << (ulong)(uVar13 & 0x1f);
    if ((uVar5 & 0x70a5c0) != 0) {
      if (((byte)*param_4 >> 3 & 1) == 0) {
        _vImageVerticalReflect_Planar8(&uStack_1d8,&uStack_80,0);
      }
      else {
        _vImageHorizontalReflect_Planar8(&uStack_1d8,&uStack_80,0);
      }
      goto LAB_10a1b3f2c;
    }
    if ((uVar5 & 0x5827) != 0) {
      if (((byte)*param_4 >> 3 & 1) == 0) {
        _vImageVerticalReflect_ARGB8888(&uStack_1d8,&uStack_80,0);
      }
      else {
        _vImageHorizontalReflect_ARGB8888(&uStack_1d8,&uStack_80,0);
      }
      goto LAB_10a1b3f2c;
    }
    if ((1 << (ulong)(uVar13 & 0x1f) & 0x80200U) != 0) {
      if (((byte)*param_4 >> 3 & 1) == 0) {
        _vImageVerticalReflect_Planar16U(&uStack_1d8,&uStack_80,0);
      }
      else {
        _vImageHorizontalReflect_Planar16U(&uStack_1d8,&uStack_80,0);
      }
      goto LAB_10a1b3f2c;
    }
  }
  FUN_10a0f3910(&uStack_e0,(int *)(lVar15 + 0x10),0);
  FUN_10a0f3910(&uStack_140,lVar18 + 0x10,0);
  if (((byte)*param_4 >> 3 & 1) == 0) {
    uStack_178 = CONCAT44(uStack_178._4_4_,0x1010000);
    puStack_170 = &uStack_e0;
    lStack_168 = 0;
    auStack_158[0] = 0x2010000;
    puStack_150 = &uStack_140;
    uStack_148 = 0;
    func_0x000109a491e0(&uStack_178,auStack_158,0);
  }
  else {
    uStack_178 = CONCAT44(uStack_178._4_4_,0x1010000);
    puStack_170 = &uStack_e0;
    lStack_168 = 0;
    auStack_158[0] = 0x2010000;
    puStack_150 = &uStack_140;
    uStack_148 = 0;
    func_0x000109a491e0(&uStack_178,auStack_158,1);
  }
  if (lStack_108 != 0) {
    piVar2 = (int *)(lStack_108 + 0x14);
    do {
      iVar16 = *piVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = iVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar16 + -1 == 0) {
      func_0x000109a848d4(&uStack_140);
    }
  }
  lStack_108 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  if (0 < uStack_140._4_4_) {
    lVar18 = 0;
    do {
      *(undefined4 *)((long)puStack_100 + lVar18 * 4) = 0;
      lVar18 = lVar18 + 1;
    } while (lVar18 < uStack_140._4_4_);
  }
  if (puStack_f8 != auStack_f0 && puStack_f8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_f8 + -8));
  }
  if (lStack_a8 != 0) {
    piVar2 = (int *)(lStack_a8 + 0x14);
    do {
      iVar16 = *piVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = iVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar16 + -1 == 0) {
      func_0x000109a848d4(&uStack_e0);
    }
  }
  lStack_a8 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if (0 < uStack_e0._4_4_) {
    lVar18 = 0;
    do {
      *(undefined4 *)(lStack_a0 + lVar18 * 4) = 0;
      lVar18 = lVar18 + 1;
    } while (lVar18 < uStack_e0._4_4_);
  }
  if (puStack_98 != auStack_90 && puStack_98 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_98 + -8));
  }
LAB_10a1b3f2c:
  FUN_10a1b4214(param_1,param_2[4],param_2[5]);
  return;
}



/* Entry: 10a1b4214; end: 10a1b4287;  */

undefined8 * FUN_10a1b4214(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  *param_1 = param_2;
  param_1[1] = param_3;
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



/* Entry: 10a1b4288; end: 10a1b43e3;  */

bool FUN_10a1b4288(uint param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == param_2) {
LAB_10a1b42d0:
    bVar2 = true;
  }
  else {
    if (param_2 == 1) {
      bVar2 = false;
      uVar3 = param_1 - 2;
      if (uVar3 < 0x15) {
        uVar4 = 0x100169;
LAB_10a1b42b0:
        bVar2 = false;
        if ((uVar4 >> (ulong)(uVar3 & 0x1f) & 1) != 0) goto LAB_10a1b42d0;
      }
LAB_10a1b42b8:
      bVar1 = param_2 == 5;
      if (bVar1) {
        bVar2 = true;
      }
      if ((param_1 == 7) && (bVar2)) goto LAB_10a1b42d0;
    }
    else {
      bVar2 = false;
      if (3 < (int)param_2) {
        if (param_2 == 4) {
          bVar2 = true;
          if (param_1 - 1 < 0x16) {
            uVar3 = 0x200297U >> (ulong)(param_1 - 1 & 0x1f) & 1;
joined_r0x00010a1b4370:
            if (uVar3 != 0) {
              return true;
            }
          }
        }
        else if (param_2 == 7) {
          if (param_1 - 1 < 5) goto LAB_10a1b42d0;
          bVar2 = false;
          if (param_1 < 0x17) {
            uVar3 = 1 << (ulong)(param_1 & 0x1f) & 0x400500;
            goto joined_r0x00010a1b4370;
          }
        }
        else if (param_2 == 9) {
          bVar2 = false;
          uVar3 = param_1 - 1;
          if (uVar3 < 0x16) {
            uVar4 = 0x2002dd;
            goto LAB_10a1b42b0;
          }
        }
        goto LAB_10a1b42b8;
      }
      if (param_2 != 2) {
        if (param_2 == 3) {
          bVar2 = false;
          uVar3 = param_1 - 1;
          if (uVar3 < 0x16) {
            uVar4 = 0x2002d9;
            goto LAB_10a1b42b0;
          }
        }
        goto LAB_10a1b42b8;
      }
      bVar1 = false;
      if ((param_1 - 1 < 0x16) && ((0x2002d1U >> (ulong)(param_1 - 1 & 0x1f) & 1) != 0))
      goto LAB_10a1b42d0;
    }
    if (param_2 == 1) {
      bVar1 = true;
    }
    bVar2 = false;
    if (param_1 == 3) {
      bVar2 = bVar1;
    }
  }
  return bVar2;
}



/* Entry: 10a1b43e4; end: 10a1b498b;  */

void FUN_10a1b43e4(undefined8 *param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined **ppuVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_2 == param_3) {
    puVar1 = (undefined8 *)0x50;
    __Znwm();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_110bac588;
    ppuVar3 = &PTR_FUN_110babc88;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
  }
  else {
    if ((param_2 == 2) && (param_3 == 1)) {
      puVar1 = (undefined8 *)0x70;
      __Znwm();
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_DAT_110bac5d8;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[8] = 0;
      puVar1[0xb] = 0;
      puVar1[10] = 0;
      puVar1[0xd] = 0;
      puVar1[0xc] = 0;
      param_1[1] = puVar1;
      puVar1 = puVar1 + 3;
      *puVar1 = &PTR_FUN_110babd48;
      goto LAB_10a1b4484;
    }
    if ((param_2 == 5 || param_2 == 1) && (param_3 == 2)) {
      puVar1 = (undefined8 *)0x60;
      __Znwm();
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_DAT_110bac628;
      ppuVar3 = &PTR_FUN_110babd88;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[8] = 0;
      puVar1[0xb] = 0;
      puVar1[10] = 0;
    }
    else {
      if ((0x16 < param_2) || ((1 << (ulong)(param_2 & 0x1f) & 0x400500U) == 0)) {
        if (param_3 == 9) {
          bVar2 = true;
          if ((param_2 < 6) && ((1 << (ulong)(param_2 & 0x1f) & 0x3aU) != 0)) {
            puVar1 = (undefined8 *)0x60;
            __Znwm();
            puVar1[1] = 0;
            puVar1[2] = 0;
            *puVar1 = &PTR_FUN_110bac7b8;
            puVar1[5] = 0;
            puVar1[4] = 0;
            puVar1[7] = 0;
            puVar1[6] = 0;
            puVar1[9] = 0;
            puVar1[8] = 0;
            puVar1[0xb] = 0;
            puVar1[10] = 0;
            param_1[1] = puVar1;
            puVar1[3] = &PTR_FUN_110babe48;
            *param_1 = puVar1 + 3;
            uStack_30 = 0;
            uStack_28 = 0;
            FUN_10a1bac68(&uStack_30);
            return;
          }
        }
        else if (param_3 == 7) {
          if (param_2 - 1 < 5) {
            puVar1 = (undefined8 *)0x60;
            __Znwm();
            puVar1[1] = 0;
            puVar1[2] = 0;
            *puVar1 = &PTR_FUN_110bac768;
            puVar1[5] = 0;
            puVar1[4] = 0;
            puVar1[7] = 0;
            puVar1[6] = 0;
            puVar1[9] = 0;
            puVar1[8] = 0;
            puVar1[0xb] = 0;
            puVar1[10] = 0;
            param_1[1] = puVar1;
            puVar1[3] = &PTR_FUN_110babe88;
            *param_1 = puVar1 + 3;
            uStack_30 = 0;
            uStack_28 = 0;
            FUN_10a1babd0(&uStack_30);
            return;
          }
          bVar2 = false;
        }
        else {
          if ((param_2 == 5) && (param_3 == 1)) {
            puVar1 = (undefined8 *)0x60;
            __Znwm();
            puVar1[1] = 0;
            puVar1[2] = 0;
            *puVar1 = &PTR_FUN_110bac808;
            puVar1[5] = 0;
            puVar1[4] = 0;
            puVar1[7] = 0;
            puVar1[6] = 0;
            puVar1[9] = 0;
            puVar1[8] = 0;
            puVar1[0xb] = 0;
            puVar1[10] = 0;
            param_1[1] = puVar1;
            puVar1[3] = &PTR_FUN_110babcc8;
            *param_1 = puVar1 + 3;
            uStack_30 = 0;
            uStack_28 = 0;
            FUN_10a1bad00(&uStack_30);
            return;
          }
          bVar2 = false;
          if ((param_2 == 1) && (param_3 == 5)) {
            puVar1 = (undefined8 *)0x60;
            __Znwm();
            puVar1[1] = 0;
            puVar1[2] = 0;
            *puVar1 = &PTR_FUN_110bac858;
            puVar1[5] = 0;
            puVar1[4] = 0;
            puVar1[7] = 0;
            puVar1[6] = 0;
            puVar1[9] = 0;
            puVar1[8] = 0;
            puVar1[0xb] = 0;
            puVar1[10] = 0;
            param_1[1] = puVar1;
            puVar1[3] = &PTR_FUN_110babd08;
            *param_1 = puVar1 + 3;
            uStack_30 = 0;
            uStack_28 = 0;
            FUN_10a1bad98(&uStack_30);
            return;
          }
        }
        if (param_2 == 7) {
          if (param_3 - 1 < 5) {
            puVar1 = (undefined8 *)0x68;
            __Znwm();
            puVar1[1] = 0;
            puVar1[2] = 0;
            *puVar1 = &PTR_FUN_110bac8a8;
            *(uint *)(puVar1 + 4) = param_3;
            puVar1[6] = 0;
            puVar1[5] = 0;
            puVar1[8] = 0;
            puVar1[7] = 0;
            puVar1[10] = 0;
            puVar1[9] = 0;
            puVar1[0xc] = 0;
            puVar1[0xb] = 0;
            param_1[1] = puVar1;
            puVar1[3] = &PTR_FUN_110babc48;
            *param_1 = puVar1 + 3;
            uStack_30 = 0;
            uStack_28 = 0;
            FUN_10a1bae30(&uStack_30);
            return;
          }
          if (bVar2) {
            puVar1 = (undefined8 *)0x60;
            __Znwm();
            puVar1[1] = 0;
            puVar1[2] = 0;
            *puVar1 = &PTR_FUN_110bac8f8;
            puVar1[5] = 0;
            puVar1[4] = 0;
            puVar1[7] = 0;
            puVar1[6] = 0;
            puVar1[9] = 0;
            puVar1[8] = 0;
            puVar1[0xb] = 0;
            puVar1[10] = 0;
            param_1[1] = puVar1;
            puVar1[3] = &PTR_FUN_110babf08;
            *param_1 = puVar1 + 3;
            uStack_30 = 0;
            uStack_28 = 0;
            FUN_10a1baec8(&uStack_30);
            return;
          }
        }
        else if (param_3 == 4) {
          if ((param_2 < 6) && ((1 << (ulong)(param_2 & 0x1f) & 0x2eU) != 0)) {
            puVar1 = (undefined8 *)0x60;
            __Znwm();
            puVar1[1] = 0;
            puVar1[2] = 0;
            *puVar1 = &PTR_FUN_110bac998;
            puVar1[5] = 0;
            puVar1[4] = 0;
            puVar1[7] = 0;
            puVar1[6] = 0;
            puVar1[9] = 0;
            puVar1[8] = 0;
            puVar1[0xb] = 0;
            puVar1[10] = 0;
            param_1[1] = puVar1;
            puVar1[3] = &PTR_FUN_110babe08;
            *param_1 = puVar1 + 3;
            uStack_30 = 0;
            uStack_28 = 0;
            FUN_10a1baff8(&uStack_30);
            return;
          }
        }
        else if (param_3 == 3) {
          if ((param_2 < 6) && ((1 << (ulong)(param_2 & 0x1f) & 0x36U) != 0)) {
            puVar1 = (undefined8 *)0x60;
            __Znwm();
            puVar1[1] = 0;
            puVar1[2] = 0;
            *puVar1 = &PTR_FUN_110bac948;
            puVar1[5] = 0;
            puVar1[4] = 0;
            puVar1[7] = 0;
            puVar1[6] = 0;
            puVar1[9] = 0;
            puVar1[8] = 0;
            puVar1[0xb] = 0;
            puVar1[10] = 0;
            param_1[1] = puVar1;
            puVar1[3] = &PTR_FUN_110babdc8;
            *param_1 = puVar1 + 3;
            uStack_30 = 0;
            uStack_28 = 0;
            FUN_10a1baf60(&uStack_30);
            return;
          }
        }
        else if ((param_2 == 3) && ((param_3 & 0xfffffffb) == 1)) {
          puVar1 = (undefined8 *)0x68;
          __Znwm();
          puVar1[1] = 0;
          puVar1[2] = 0;
          *puVar1 = &PTR_FUN_110bac9e8;
          *(uint *)(puVar1 + 4) = param_3;
          puVar1[6] = 0;
          puVar1[5] = 0;
          puVar1[8] = 0;
          puVar1[7] = 0;
          puVar1[10] = 0;
          puVar1[9] = 0;
          puVar1[0xc] = 0;
          puVar1[0xb] = 0;
          param_1[1] = puVar1;
          puVar1[3] = &PTR_FUN_110babb78;
          *param_1 = puVar1 + 3;
          uStack_30 = 0;
          uStack_28 = 0;
          FUN_10a1bb090(&uStack_30);
          return;
        }
LAB_10a1b4984:
        *param_1 = 0;
        param_1[1] = 0;
        return;
      }
      if (3 < param_3 - 1) {
        if (param_3 == 7) {
          puVar1 = (undefined8 *)0x50;
          __Znwm();
          puVar1[1] = 0;
          puVar1[2] = 0;
          *puVar1 = &PTR_FUN_110bac718;
          puVar1[5] = 0;
          puVar1[4] = 0;
          puVar1[7] = 0;
          puVar1[6] = 0;
          puVar1[9] = 0;
          puVar1[8] = 0;
          param_1[1] = puVar1;
          puVar1[3] = &PTR_FUN_110babec8;
          *param_1 = puVar1 + 3;
          uStack_30 = 0;
          uStack_28 = 0;
          FUN_10a1bab38(&uStack_30);
          return;
        }
        if (param_3 == 9) {
          puVar1 = (undefined8 *)0xa8;
          __Znwm();
          puVar1[1] = 0;
          puVar1[2] = 0;
          *puVar1 = &PTR_DAT_110bac6c8;
          puVar1[4] = 0;
          puVar1[5] = 0;
          *(undefined4 *)(puVar1 + 6) = 3;
          puVar1[8] = 0;
          puVar1[7] = 0;
          puVar1[10] = 0;
          puVar1[9] = 0;
          puVar1[0xc] = 0;
          puVar1[0xb] = 0;
          puVar1[0xe] = 0;
          puVar1[0xd] = 0;
          puVar1[0x10] = 0;
          puVar1[0xf] = 0;
          puVar1[0x12] = 0;
          puVar1[0x11] = 0;
          puVar1[0x13] = 0;
          puVar1[0x14] = 0;
          param_1[1] = puVar1;
          puVar1[3] = &PTR_FUN_110babc08;
          *param_1 = puVar1 + 3;
          uStack_30 = 0;
          uStack_28 = 0;
          FUN_10a1baaa0(&uStack_30);
          return;
        }
        goto LAB_10a1b4984;
      }
      puVar1 = (undefined8 *)0x98;
      __Znwm();
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_DAT_110bac678;
      ppuVar3 = &PTR_FUN_110babbc8;
      puVar1[4] = 0;
      puVar1[5] = 0;
      *(uint *)(puVar1 + 6) = param_3;
      puVar1[8] = 0;
      puVar1[7] = 0;
      puVar1[10] = 0;
      puVar1[9] = 0;
      puVar1[0xc] = 0;
      puVar1[0xb] = 0;
      puVar1[0xe] = 0;
      puVar1[0xd] = 0;
      puVar1[0x10] = 0;
      puVar1[0xf] = 0;
      puVar1[0x12] = 0;
      puVar1[0x11] = 0;
    }
  }
  param_1[1] = puVar1;
  puVar1 = puVar1 + 3;
  *puVar1 = ppuVar3;
LAB_10a1b4484:
  *param_1 = puVar1;
  return;
}



/* Entry: 10a1b498c; end: 10a1b4a5b;  */

void FUN_10a1b498c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [271];
  undefined1 uStack_41;
  
  FUN_10a1b43e4();
  if (*param_1 != 0) {
    return;
  }
  FUN_109febc44(auStack_160);
  FUN_10a002568(auStack_150,&UNK_10f6426eb,0x46);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(auStack_150,param_2);
  FUN_10a002568(auStack_150,&UNK_10f642732,4);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(auStack_150,param_3);
  FUN_10a05168c(&uStack_41,auStack_150);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1b4a30);
  (*pcVar1)();
}



/* Entry: 10a1b4a5c; end: 10a1b4a63;  */

void FUN_10a1b4a5c(long *param_1,long param_2,long param_3,uint *param_4,ulong *param_5)

{
  int *piVar1;
  ulong uVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  long *plVar17;
  long lVar18;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  long lStack_1a0;
  int *piStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined4 auStack_158 [2];
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_108;
  undefined8 *puStack_100;
  undefined1 *puStack_f8;
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_a8;
  long lStack_a0;
  undefined1 *puStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  plVar17 = (long *)(param_2 + 8);
  *param_1 = param_3;
  puVar8 = (undefined8 *)0x20;
  __Znwm();
  *puVar8 = &PTR_FUN_110bac528;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[3] = param_3;
  param_1[1] = (long)puVar8;
  uVar13 = *param_5;
  uVar12 = *param_4;
  uVar2 = uVar13;
  uVar7 = uVar13 >> 0x20;
  if ((uVar12 & 1) != 0) {
    uVar2 = uVar13 >> 0x20;
    uVar7 = uVar13;
  }
  iVar15 = *(int *)(param_3 + 0x10);
  iVar16 = (int)uVar2;
  if (iVar16 != iVar15 || (int)uVar7 != *(int *)(param_3 + 0x14)) {
    lVar18 = *plVar17;
    if ((lVar18 == 0) ||
       (lVar14 = param_3, iVar16 != *(int *)(lVar18 + 0x10) || (int)uVar7 != *(int *)(lVar18 + 0x14)
       )) {
      uVar3 = *(undefined4 *)(param_3 + 0x24);
      plVar9 = (long *)0xa8;
      __Znwm();
      plVar9[1] = 0;
      plVar9[2] = 0;
      plVar10 = plVar9 + 3;
      *plVar9 = (long)&PTR_FUN_110baa4d8;
      FUN_10a1b2c6c(plVar10,uVar2 & 0xffffffff | uVar7 << 0x20,uVar3,0,1);
      uStack_e0 = plVar10;
      plStack_d8 = plVar9;
      FUN_10a16b1ec(plVar17,&uStack_e0);
      plVar9 = plStack_d8;
      if (plStack_d8 != (long *)0x0) {
        plVar10 = plStack_d8 + 1;
        do {
          lVar18 = *plVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = lVar18 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      lVar14 = *param_1;
      lVar18 = *plVar17;
      iVar15 = *(int *)(lVar14 + 0x10);
      iVar16 = *(int *)(lVar18 + 0x10);
    }
    iStack_1d0 = *(int *)(lVar14 + 0x14);
    uStack_1d8 = (undefined4)*(undefined8 *)(lVar14 + 0x28);
    iStack_1d4 = (int)((ulong)*(undefined8 *)(lVar14 + 0x28) >> 0x20);
    iStack_1cc = iStack_1d0 >> 0x1f;
    iStack_1c4 = iVar15 >> 0x1f;
    uStack_1c0 = (undefined4)*(undefined8 *)(lVar14 + 0x18);
    uStack_1bc = (undefined4)((ulong)*(undefined8 *)(lVar14 + 0x18) >> 0x20);
    uStack_80 = *(undefined8 *)(lVar18 + 0x28);
    lStack_78 = (long)*(int *)(lVar18 + 0x14);
    lStack_70 = (long)iVar16;
    uStack_68 = *(undefined8 *)(lVar18 + 0x18);
    uVar12 = *(uint *)(lVar14 + 0x24);
    iStack_1c8 = iVar15;
    if (uVar12 < 0x17) {
      uVar4 = 1 << (ulong)(uVar12 & 0x1f);
      if ((uVar4 & 0x70a5c0) == 0) {
        if ((uVar4 & 0x5827) == 0) {
          if ((1 << (ulong)(uVar12 & 0x1f) & 0x80200U) == 0) goto LAB_10a1b3be8;
          _vImageScale_CbCr8(&uStack_1d8,&uStack_80,0,0);
        }
        else {
          _vImageScale_ARGB8888(&uStack_1d8,&uStack_80,0,0);
        }
      }
      else {
        _vImageScale_Planar8(&uStack_1d8,&uStack_80,0,0);
      }
    }
    else {
LAB_10a1b3be8:
      FUN_10a0f3910(&uStack_e0,lVar14 + 0x10,0);
      FUN_10a0f3910(&uStack_140,lVar18 + 0x10,0);
      uStack_178 = CONCAT44(uStack_178._4_4_,0x1010000);
      puStack_170 = &uStack_e0;
      lStack_168 = 0;
      auStack_158[0] = 0x2010000;
      uStack_148 = 0;
      uStack_1f0 = NEON_rev64(*puStack_100,4);
      puStack_150 = &uStack_140;
      func_0x000109b0f718(0,0,&uStack_178,auStack_158,&uStack_1f0,1);
      if (lStack_108 != 0) {
        piVar1 = (int *)(lStack_108 + 0x14);
        do {
          iVar15 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar15 + -1 == 0) {
          func_0x000109a848d4(&uStack_140);
        }
      }
      lStack_108 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      if (0 < uStack_140._4_4_) {
        lVar18 = 0;
        do {
          *(undefined4 *)((long)puStack_100 + lVar18 * 4) = 0;
          lVar18 = lVar18 + 1;
        } while (lVar18 < uStack_140._4_4_);
      }
      if (puStack_f8 != auStack_f0 && puStack_f8 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_f8 + -8));
      }
      if (lStack_a8 != 0) {
        piVar1 = (int *)(lStack_a8 + 0x14);
        do {
          iVar15 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar15 + -1 == 0) {
          func_0x000109a848d4(&uStack_e0);
        }
      }
      lStack_a8 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      if (0 < uStack_e0._4_4_) {
        lVar18 = 0;
        do {
          *(undefined4 *)(lStack_a0 + lVar18 * 4) = 0;
          lVar18 = lVar18 + 1;
        } while (lVar18 < uStack_e0._4_4_);
      }
      if (puStack_98 != auStack_90 && puStack_98 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_98 + -8));
      }
    }
    FUN_10a1b4214(param_1,*plVar17,*(undefined8 *)(param_2 + 0x10));
    uVar12 = *param_4;
  }
  if ((uVar12 & 3) != 0) {
    plVar17 = (long *)(param_2 + 0x18);
    lVar18 = *plVar17;
    if ((lVar18 == 0) ||
       (iVar15 = *(int *)(lVar18 + 0x10),
       (int)*param_5 != iVar15 || *(int *)((long)param_5 + 4) != *(int *)(lVar18 + 0x14))) {
      FUN_10a1ba8d8(&uStack_e0,*param_5,*(undefined4 *)(param_3 + 0x24),0,1);
      FUN_10a16b1ec(plVar17,&uStack_e0);
      plVar9 = plStack_d8;
      if (plStack_d8 != (long *)0x0) {
        plVar10 = plStack_d8 + 1;
        do {
          lVar18 = *plVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = lVar18 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      lVar18 = *plVar17;
      iVar15 = *(int *)(lVar18 + 0x10);
      uVar12 = *param_4;
    }
    lVar14 = *param_1;
    lStack_70 = (long)*(int *)(lVar14 + 0x10);
    uStack_80 = *(undefined8 *)(lVar14 + 0x28);
    lStack_78 = (long)*(int *)(lVar14 + 0x14);
    uStack_68 = *(undefined8 *)(lVar14 + 0x18);
    uStack_178 = *(undefined8 *)(lVar18 + 0x28);
    puStack_170 = (undefined8 *)(long)*(int *)(lVar18 + 0x14);
    lStack_168 = (long)iVar15;
    uStack_160 = *(undefined8 *)(lVar18 + 0x18);
    if ((uVar12 & 3) < 2) {
      if ((uVar12 & 3) != 0) {
        uVar11 = 3;
        goto LAB_10a1b3928;
      }
    }
    else {
      if ((uVar12 & 3) == 3) {
        uVar11 = 1;
      }
      else {
        uVar11 = 2;
      }
LAB_10a1b3928:
      uVar12 = *(uint *)(lVar14 + 0x24);
      if (uVar12 < 0x17) {
        uVar4 = 1 << (ulong)(uVar12 & 0x1f);
        if ((uVar4 & 0x70a5c0) == 0) {
          if ((uVar4 & 0x5827) == 0) {
            if ((1 << (ulong)(uVar12 & 0x1f) & 0x80200U) == 0) goto LAB_10a1b3d50;
            _vImageRotate90_Planar16U(&uStack_80,&uStack_178,uVar11,0,0);
          }
          else {
            uStack_e0 = (long *)((ulong)uStack_e0 & 0xffffffff00000000);
            _vImageRotate90_ARGB8888(&uStack_80,&uStack_178,uVar11,&uStack_e0,0);
          }
        }
        else {
          _vImageRotate90_Planar8(&uStack_80,&uStack_178,uVar11,0,0);
        }
      }
      else {
LAB_10a1b3d50:
        FUN_10a0f3910(&uStack_e0,(int *)(lVar14 + 0x10),0);
        FUN_10a0f3910(&uStack_140,lVar18 + 0x10,0);
        uStack_1d8 = 0x42ff0000;
        piStack_198 = &iStack_1d0;
        iStack_1cc = 0;
        iStack_1c8 = 0;
        iStack_1d4 = 0;
        iStack_1d0 = 0;
        uStack_1bc = 0;
        uStack_1b8 = 0;
        iStack_1c4 = 0;
        uStack_1c0 = 0;
        uStack_1ac = 0;
        uStack_1b4 = 0;
        uStack_1b0 = 0;
        lStack_1a0 = 0;
        uStack_1a8 = 0;
        uStack_1a4 = 0;
        uStack_188 = 0;
        uStack_180 = 0;
        uVar12 = *param_4 & 3;
        puStack_190 = &uStack_188;
        if (uVar12 < 2) {
          if (uVar12 != 0) {
            auStack_158[0] = 0x1010000;
            puStack_150 = &uStack_e0;
            uStack_148 = 0;
            uStack_1f0._0_4_ = 0x2010000;
            uStack_1e0 = 0;
            puStack_1e8 = (undefined8 *)&uStack_1d8;
            func_0x000109a895d0(auStack_158,&uStack_1f0);
            uStack_148 = 0;
            auStack_158[0] = 0x1010000;
            uStack_1f0 = CONCAT44(uStack_1f0._4_4_,0x2010000);
            puStack_1e8 = &uStack_140;
            uStack_1e0 = 0;
            puStack_150 = (undefined8 *)&uStack_1d8;
            func_0x000109a491e0(auStack_158,&uStack_1f0,1);
          }
        }
        else if (uVar12 == 2) {
          auStack_158[0] = 0x1010000;
          puStack_150 = &uStack_e0;
          uStack_148 = 0;
          uStack_1f0 = CONCAT44(uStack_1f0._4_4_,0x2010000);
          puStack_1e8 = &uStack_140;
          uStack_1e0 = 0;
          func_0x000109a491e0(auStack_158,&uStack_1f0,0xffffffff);
        }
        else {
          auStack_158[0] = 0x1010000;
          puStack_150 = &uStack_e0;
          uStack_148 = 0;
          uStack_1f0._0_4_ = 0x2010000;
          uStack_1e0 = 0;
          puStack_1e8 = (undefined8 *)&uStack_1d8;
          func_0x000109a895d0(auStack_158,&uStack_1f0);
          uStack_148 = 0;
          auStack_158[0] = 0x1010000;
          uStack_1f0 = CONCAT44(uStack_1f0._4_4_,0x2010000);
          puStack_1e8 = &uStack_140;
          uStack_1e0 = 0;
          puStack_150 = (undefined8 *)&uStack_1d8;
          func_0x000109a491e0(auStack_158,&uStack_1f0,0);
        }
        if (lStack_1a0 != 0) {
          piVar1 = (int *)(lStack_1a0 + 0x14);
          do {
            iVar15 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar15 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar15 + -1 == 0) {
            func_0x000109a848d4(&uStack_1d8);
          }
        }
        lStack_1a0 = 0;
        uStack_1c0 = 0;
        uStack_1bc = 0;
        iStack_1c8 = 0;
        iStack_1c4 = 0;
        uStack_1b0 = 0;
        uStack_1ac = 0;
        uStack_1b8 = 0;
        uStack_1b4 = 0;
        if (0 < iStack_1d4) {
          lVar18 = 0;
          do {
            piStack_198[lVar18] = 0;
            lVar18 = lVar18 + 1;
          } while (lVar18 < iStack_1d4);
        }
        if (puStack_190 != &uStack_188 && puStack_190 != (undefined8 *)0x0) {
          _free(puStack_190[-1]);
        }
        if (lStack_108 != 0) {
          piVar1 = (int *)(lStack_108 + 0x14);
          do {
            iVar15 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar15 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar15 + -1 == 0) {
            func_0x000109a848d4(&uStack_140);
          }
        }
        lStack_108 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        if (0 < uStack_140._4_4_) {
          lVar18 = 0;
          do {
            *(undefined4 *)((long)puStack_100 + lVar18 * 4) = 0;
            lVar18 = lVar18 + 1;
          } while (lVar18 < uStack_140._4_4_);
        }
        if (puStack_f8 != auStack_f0 && puStack_f8 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_f8 + -8));
        }
        if (lStack_a8 != 0) {
          piVar1 = (int *)(lStack_a8 + 0x14);
          do {
            iVar15 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar15 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar15 + -1 == 0) {
            func_0x000109a848d4(&uStack_e0);
          }
        }
        lStack_a8 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        if (0 < uStack_e0._4_4_) {
          lVar18 = 0;
          do {
            *(undefined4 *)(lStack_a0 + lVar18 * 4) = 0;
            lVar18 = lVar18 + 1;
          } while (lVar18 < uStack_e0._4_4_);
        }
        if (puStack_98 != auStack_90 && puStack_98 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_98 + -8));
        }
      }
    }
    FUN_10a1b4214(param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
    uVar12 = *param_4;
  }
  if ((uVar12 & 0xc) == 0) {
    return;
  }
  plVar17 = (long *)(param_2 + 0x28);
  lVar18 = *plVar17;
  if ((lVar18 == 0) ||
     (iVar15 = *(int *)(lVar18 + 0x10),
     (int)*param_5 != iVar15 || *(int *)((long)param_5 + 4) != *(int *)(lVar18 + 0x14))) {
    FUN_10a1ba8d8(&uStack_e0,*param_5,*(undefined4 *)(param_3 + 0x24),0,1);
    FUN_10a16b1ec(plVar17,&uStack_e0);
    plVar9 = plStack_d8;
    if (plStack_d8 != (long *)0x0) {
      plVar10 = plStack_d8 + 1;
      do {
        lVar18 = *plVar10;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *plVar10 = lVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    lVar18 = *plVar17;
    iVar15 = *(int *)(lVar18 + 0x10);
  }
  lVar14 = *param_1;
  iStack_1c8 = *(int *)(lVar14 + 0x10);
  iStack_1d0 = *(int *)(lVar14 + 0x14);
  uStack_1d8 = (undefined4)*(undefined8 *)(lVar14 + 0x28);
  iStack_1d4 = (int)((ulong)*(undefined8 *)(lVar14 + 0x28) >> 0x20);
  iStack_1cc = iStack_1d0 >> 0x1f;
  iStack_1c4 = iStack_1c8 >> 0x1f;
  uStack_1c0 = (undefined4)*(undefined8 *)(lVar14 + 0x18);
  uStack_1bc = (undefined4)((ulong)*(undefined8 *)(lVar14 + 0x18) >> 0x20);
  uStack_80 = *(undefined8 *)(lVar18 + 0x28);
  lStack_78 = (long)*(int *)(lVar18 + 0x14);
  lStack_70 = (long)iVar15;
  uStack_68 = *(undefined8 *)(lVar18 + 0x18);
  uVar12 = *(uint *)(lVar14 + 0x24);
  if (uVar12 < 0x17) {
    uVar4 = 1 << (ulong)(uVar12 & 0x1f);
    if ((uVar4 & 0x70a5c0) != 0) {
      if (((byte)*param_4 >> 3 & 1) == 0) {
        _vImageVerticalReflect_Planar8(&uStack_1d8,&uStack_80,0);
      }
      else {
        _vImageHorizontalReflect_Planar8(&uStack_1d8,&uStack_80,0);
      }
      goto LAB_10a1b3f2c;
    }
    if ((uVar4 & 0x5827) != 0) {
      if (((byte)*param_4 >> 3 & 1) == 0) {
        _vImageVerticalReflect_ARGB8888(&uStack_1d8,&uStack_80,0);
      }
      else {
        _vImageHorizontalReflect_ARGB8888(&uStack_1d8,&uStack_80,0);
      }
      goto LAB_10a1b3f2c;
    }
    if ((1 << (ulong)(uVar12 & 0x1f) & 0x80200U) != 0) {
      if (((byte)*param_4 >> 3 & 1) == 0) {
        _vImageVerticalReflect_Planar16U(&uStack_1d8,&uStack_80,0);
      }
      else {
        _vImageHorizontalReflect_Planar16U(&uStack_1d8,&uStack_80,0);
      }
      goto LAB_10a1b3f2c;
    }
  }
  FUN_10a0f3910(&uStack_e0,(int *)(lVar14 + 0x10),0);
  FUN_10a0f3910(&uStack_140,lVar18 + 0x10,0);
  if (((byte)*param_4 >> 3 & 1) == 0) {
    uStack_178 = CONCAT44(uStack_178._4_4_,0x1010000);
    puStack_170 = &uStack_e0;
    lStack_168 = 0;
    auStack_158[0] = 0x2010000;
    puStack_150 = &uStack_140;
    uStack_148 = 0;
    func_0x000109a491e0(&uStack_178,auStack_158,0);
  }
  else {
    uStack_178 = CONCAT44(uStack_178._4_4_,0x1010000);
    puStack_170 = &uStack_e0;
    lStack_168 = 0;
    auStack_158[0] = 0x2010000;
    puStack_150 = &uStack_140;
    uStack_148 = 0;
    func_0x000109a491e0(&uStack_178,auStack_158,1);
  }
  if (lStack_108 != 0) {
    piVar1 = (int *)(lStack_108 + 0x14);
    do {
      iVar15 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      func_0x000109a848d4(&uStack_140);
    }
  }
  lStack_108 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  if (0 < uStack_140._4_4_) {
    lVar18 = 0;
    do {
      *(undefined4 *)((long)puStack_100 + lVar18 * 4) = 0;
      lVar18 = lVar18 + 1;
    } while (lVar18 < uStack_140._4_4_);
  }
  if (puStack_f8 != auStack_f0 && puStack_f8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_f8 + -8));
  }
  if (lStack_a8 != 0) {
    piVar1 = (int *)(lStack_a8 + 0x14);
    do {
      iVar15 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      func_0x000109a848d4(&uStack_e0);
    }
  }
  lStack_a8 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if (0 < uStack_e0._4_4_) {
    lVar18 = 0;
    do {
      *(undefined4 *)(lStack_a0 + lVar18 * 4) = 0;
      lVar18 = lVar18 + 1;
    } while (lVar18 < uStack_e0._4_4_);
  }
  if (puStack_98 != auStack_90 && puStack_98 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_98 + -8));
  }
LAB_10a1b3f2c:
  FUN_10a1b4214(param_1,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30));
  return;
}



/* Entry: 10a1b4a64; end: 10a1b4bc7;  */

void FUN_10a1b4a64(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  int *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_10a1b3670(&lStack_60,param_2 + 0x18);
  plVar5 = (long *)(param_2 + 8);
  lVar4 = *plVar5;
  if ((lVar4 == 0) || (*param_5 != *(int *)(lVar4 + 0x10) || param_5[1] != *(int *)(lVar4 + 0x14)))
  {
    FUN_10a1ba8d8(&lStack_50,*(undefined8 *)param_5,1,0,1);
    FUN_10a16b1ec(plVar5,&lStack_50);
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
      }
    }
    lVar4 = *plVar5;
  }
  uStack_38 = *(undefined8 *)(lStack_60 + 0x28);
  plStack_48 = (long *)(long)*(int *)(lStack_60 + 0x10);
  lStack_50 = (long)*(int *)(lStack_60 + 0x14);
  uStack_40 = *(undefined8 *)(lStack_60 + 0x18);
  func_0x00010a0dbb94(*(undefined8 *)(lVar4 + 0x18),*(undefined8 *)(lVar4 + 0x28),&lStack_50,
                      0x100000002,0x300000000);
  lVar4 = *(long *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 8);
  param_1[1] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = uVar6;
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (plStack_58 != (long *)0x0) {
    plVar5 = plStack_58 + 1;
    do {
      lVar4 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  return;
}



/* Entry: 10a1b4bc8; end: 10a1b4d2b;  */

void FUN_10a1b4bc8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  int *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_10a1b3670(&lStack_60,param_2 + 0x18);
  plVar5 = (long *)(param_2 + 8);
  lVar4 = *plVar5;
  if ((lVar4 == 0) || (*param_5 != *(int *)(lVar4 + 0x10) || param_5[1] != *(int *)(lVar4 + 0x14)))
  {
    FUN_10a1ba8d8(&lStack_50,*(undefined8 *)param_5,5,0,1);
    FUN_10a16b1ec(plVar5,&lStack_50);
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
      }
    }
    lVar4 = *plVar5;
  }
  uStack_38 = *(undefined8 *)(lStack_60 + 0x28);
  plStack_48 = (long *)(long)*(int *)(lStack_60 + 0x10);
  lStack_50 = (long)*(int *)(lStack_60 + 0x14);
  uStack_40 = *(undefined8 *)(lStack_60 + 0x18);
  func_0x00010a0dbb94(*(undefined8 *)(lVar4 + 0x18),*(undefined8 *)(lVar4 + 0x28),&lStack_50,
                      0x100000002,0x300000000);
  lVar4 = *(long *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 8);
  param_1[1] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = uVar6;
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (plStack_58 != (long *)0x0) {
    plVar5 = plStack_58 + 1;
    do {
      lVar4 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  return;
}



/* Entry: 10a1b4d2c; end: 10a1b4ec7;  */

void FUN_10a1b4d2c(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  long lVar12;
  int *piVar13;
  undefined8 *extraout_x8;
  undefined **ppuVar14;
  long lVar15;
  undefined **ppuVar16;
  undefined1 auStack_158 [24];
  long lStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long *plStack_118;
  undefined8 *puStack_110;
  int *piStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 *puStack_f0;
  undefined ***pppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long lStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  undefined ***pppuStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined ***pppuStack_90;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a1b3670(&lStack_b8,param_2 + 0x28);
  pppuStack_90 = pppuStack_b0;
  lVar15 = *(long *)(lStack_b8 + 0x28);
  uVar3 = *(undefined8 *)(lStack_b8 + 0x10);
  piVar4 = *(int **)(lStack_b8 + 0x18);
  lStack_c8 = lStack_b8;
  pppuStack_c0 = pppuStack_b0;
  if (pppuStack_b0 != (undefined ***)0x0) {
    pppuVar10 = pppuStack_b0 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
      if (bVar7) {
        *pppuVar10 = (undefined **)((long)*pppuVar10 + 1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  puVar9 = (undefined8 *)0xa8;
  __Znwm();
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &PTR_FUN_110baca38;
  puVar1 = puVar9 + 3;
  uStack_a8 = 0x10a1bb180;
  ppuStack_a0 = &PTR_DAT_110baca78;
  lStack_98 = lStack_b8;
  lStack_c8 = 0;
  pppuStack_c0 = (undefined ***)0x0;
  lVar12 = lVar15;
  piVar13 = piVar4;
  FUN_10a1b2668(puVar1,lVar15,uVar3,piVar4,1,&uStack_a8,0,0);
  pppuVar10 = &ppuStack_a0;
  (*(code *)*ppuStack_a0)();
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar9;
  if (pppuStack_b0 != (undefined ***)0x0) {
    pppuVar11 = pppuStack_b0 + 1;
    do {
      ppuVar14 = *pppuVar11;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppuVar11,0x10);
      if (bVar7) {
        *pppuVar11 = (undefined **)((long)ppuVar14 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (ppuVar14 == (undefined **)0x0) {
      (*(code *)(*pppuStack_b0)[2])(pppuStack_b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar10 = pppuStack_b0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_a0)(&ppuStack_a0);
    __ZNSt3__119__shared_weak_countD2Ev(puVar9);
    __ZdlPv();
    func_0x00010a136de4(&lStack_c8);
    func_0x00010a136de4(&lStack_b8);
    pppuVar11 = pppuVar10;
    __Unwind_Resume();
    pcStack_d8 = FUN_10a1b4ec8;
    puStack_110 = puVar1;
    piStack_108 = piVar4;
    uStack_100 = uVar3;
    lStack_f8 = lVar15;
    puStack_f0 = puVar9;
    pppuStack_e8 = pppuVar10;
    puStack_e0 = &stack0xfffffffffffffff0;
    FUN_10a1b3670(&lStack_120,pppuVar11 + 3);
    pppuVar10 = pppuVar11 + 1;
    ppuVar14 = *pppuVar10;
    if ((ppuVar14 == (undefined **)0x0) ||
       (*piVar13 != *(int *)(ppuVar14 + 2) || piVar13[1] != *(int *)((long)ppuVar14 + 0x14))) {
      FUN_10a1ba8d8(&lStack_140,*(undefined8 *)piVar13,2,0,1);
      FUN_10a16b1ec(pppuVar10,&lStack_140);
      if (plStack_138 != (long *)0x0) {
        plVar2 = plStack_138 + 1;
        do {
          lVar15 = *plVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = lVar15 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_138 + 0x10))(plStack_138);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_138);
        }
      }
      ppuVar14 = *pppuVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x24);
    if (iVar5 == 5) {
      uStack_128 = *(undefined8 *)(lStack_120 + 0x28);
      plStack_138 = (long *)(long)*(int *)(lStack_120 + 0x10);
      lStack_140 = (long)*(int *)(lStack_120 + 0x14);
      uStack_130 = *(undefined8 *)(lStack_120 + 0x18);
      func_0x00010a1b51a8(ppuVar14[3],ppuVar14[5],&lStack_140);
    }
    else {
      if (iVar5 != 1) {
        __ZNSt3__19to_stringEi(auStack_158,iVar5);
        FUN_109feb280(&lStack_140,&UNK_10f642737,auStack_158);
        FUN_10a0029c0(&lStack_140);
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10a1b507c);
        (*pcVar8)();
      }
      uStack_128 = *(undefined8 *)(lStack_120 + 0x28);
      plStack_138 = (long *)(long)*(int *)(lStack_120 + 0x10);
      lStack_140 = (long)*(int *)(lStack_120 + 0x14);
      uStack_130 = *(undefined8 *)(lStack_120 + 0x18);
      FUN_10a1b50c4(ppuVar14[3],ppuVar14[5],&lStack_140);
    }
    ppuVar14 = pppuVar11[2];
    ppuVar16 = pppuVar11[1];
    extraout_x8[1] = pppuVar11[2];
    *extraout_x8 = ppuVar16;
    if (ppuVar14 != (undefined **)0x0) {
      ppuVar14 = ppuVar14 + 1;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
        if (bVar7) {
          *ppuVar14 = *ppuVar14 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (plStack_118 != (long *)0x0) {
      plVar2 = plStack_118 + 1;
      do {
        lVar15 = *plVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *plVar2 = lVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_118 + 0x10))(plStack_118);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_118);
      }
    }
    return;
  }
  return;
}



/* Entry: 10a1b4ec8; end: 10a1b50c3;  */

void FUN_10a1b4ec8(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,int *param_5)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 auStack_88 [24];
  long lStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long *plStack_48;
  
  FUN_10a1b3670(&lStack_50,param_2 + 0x18);
  plVar7 = (long *)(param_2 + 8);
  lVar6 = *plVar7;
  if ((lVar6 == 0) || (*param_5 != *(int *)(lVar6 + 0x10) || param_5[1] != *(int *)(lVar6 + 0x14)))
  {
    FUN_10a1ba8d8(&lStack_70,*(undefined8 *)param_5,2,0,1);
    FUN_10a16b1ec(plVar7,&lStack_70);
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 1;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
      }
    }
    lVar6 = *plVar7;
  }
  iVar2 = *(int *)(param_3 + 0x24);
  if (iVar2 == 5) {
    uStack_58 = *(undefined8 *)(lStack_50 + 0x28);
    plStack_68 = (long *)(long)*(int *)(lStack_50 + 0x10);
    lStack_70 = (long)*(int *)(lStack_50 + 0x14);
    uStack_60 = *(undefined8 *)(lStack_50 + 0x18);
    func_0x00010a1b51a8(*(undefined8 *)(lVar6 + 0x18),*(undefined8 *)(lVar6 + 0x28),&lStack_70);
  }
  else {
    if (iVar2 != 1) {
      __ZNSt3__19to_stringEi(auStack_88,iVar2);
      FUN_109feb280(&lStack_70,&UNK_10f642737,auStack_88);
      FUN_10a0029c0(&lStack_70);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a1b507c);
      (*pcVar5)();
    }
    uStack_58 = *(undefined8 *)(lStack_50 + 0x28);
    plStack_68 = (long *)(long)*(int *)(lStack_50 + 0x10);
    lStack_70 = (long)*(int *)(lStack_50 + 0x14);
    uStack_60 = *(undefined8 *)(lStack_50 + 0x18);
    FUN_10a1b50c4(*(undefined8 *)(lVar6 + 0x18),*(undefined8 *)(lVar6 + 0x28),&lStack_70);
  }
  lVar6 = *(long *)(param_2 + 0x10);
  uVar8 = *(undefined8 *)(param_2 + 8);
  param_1[1] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = uVar8;
  if (lVar6 != 0) {
    plVar7 = (long *)(lVar6 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (plStack_48 != (long *)0x0) {
    plVar7 = plStack_48 + 1;
    do {
      lVar6 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  return;
}



/* Entry: 10a1b50c4; end: 10a1b529b;  */

void FUN_10a1b50c4(long param_1,byte *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  undefined1 auVar34 [16];
  
  if (*param_3 != 0) {
    uVar4 = 0;
    pbVar5 = param_2 + 1;
    do {
      uVar1 = param_3[2];
      uVar2 = param_3[3];
      uVar6 = param_3[1];
      if ((uVar6 & 0xfffffffffffffff8) != 0) {
        uVar8 = 0;
        pbVar9 = (byte *)(uVar2 + uVar1 * uVar4);
        pbVar3 = param_2;
        do {
          bVar10 = *pbVar9;
          bVar18 = pbVar9[1];
          bVar26 = pbVar9[2];
          bVar11 = pbVar9[4];
          bVar19 = pbVar9[5];
          bVar27 = pbVar9[6];
          bVar12 = pbVar9[8];
          bVar20 = pbVar9[9];
          bVar28 = pbVar9[10];
          bVar13 = pbVar9[0xc];
          bVar21 = pbVar9[0xd];
          bVar29 = pbVar9[0xe];
          bVar14 = pbVar9[0x10];
          bVar22 = pbVar9[0x11];
          bVar30 = pbVar9[0x12];
          bVar15 = pbVar9[0x14];
          bVar23 = pbVar9[0x15];
          bVar31 = pbVar9[0x16];
          bVar16 = pbVar9[0x18];
          bVar24 = pbVar9[0x19];
          bVar32 = pbVar9[0x1a];
          bVar17 = pbVar9[0x1c];
          bVar25 = pbVar9[0x1d];
          bVar33 = pbVar9[0x1e];
          pbVar9 = pbVar9 + 0x20;
          auVar34 = NEON_umull(CONCAT17(bVar25,CONCAT16(bVar24,CONCAT15(bVar23,CONCAT14(bVar22,
                                                  CONCAT13(bVar21,CONCAT12(bVar20,CONCAT11(bVar19,
                                                  bVar18))))))),0x4b4b4b4b4b4b4b4b,1);
          *pbVar3 = bVar10;
          pbVar3[1] = bVar18;
          pbVar3[2] = bVar26;
          pbVar3[3] = (byte)((ushort)(auVar34._0_2_ + (ushort)bVar10 * 0x26 + (ushort)bVar26 * 0xf)
                            >> 7);
          pbVar3[4] = bVar11;
          pbVar3[5] = bVar19;
          pbVar3[6] = bVar27;
          pbVar3[7] = (byte)((ushort)(auVar34._2_2_ + (ushort)bVar11 * 0x26 + (ushort)bVar27 * 0xf)
                            >> 7);
          pbVar3[8] = bVar12;
          pbVar3[9] = bVar20;
          pbVar3[10] = bVar28;
          pbVar3[0xb] = (byte)((ushort)(auVar34._4_2_ + (ushort)bVar12 * 0x26 + (ushort)bVar28 * 0xf
                                       ) >> 7);
          pbVar3[0xc] = bVar13;
          pbVar3[0xd] = bVar21;
          pbVar3[0xe] = bVar29;
          pbVar3[0xf] = (byte)((ushort)(auVar34._6_2_ + (ushort)bVar13 * 0x26 + (ushort)bVar29 * 0xf
                                       ) >> 7);
          pbVar3[0x10] = bVar14;
          pbVar3[0x11] = bVar22;
          pbVar3[0x12] = bVar30;
          pbVar3[0x13] = (byte)((ushort)(auVar34._8_2_ + (ushort)bVar14 * 0x26 +
                                        (ushort)bVar30 * 0xf) >> 7);
          pbVar3[0x14] = bVar15;
          pbVar3[0x15] = bVar23;
          pbVar3[0x16] = bVar31;
          pbVar3[0x17] = (byte)((ushort)(auVar34._10_2_ + (ushort)bVar15 * 0x26 +
                                        (ushort)bVar31 * 0xf) >> 7);
          pbVar3[0x18] = bVar16;
          pbVar3[0x19] = bVar24;
          pbVar3[0x1a] = bVar32;
          pbVar3[0x1b] = (byte)((ushort)(auVar34._12_2_ + (ushort)bVar16 * 0x26 +
                                        (ushort)bVar32 * 0xf) >> 7);
          pbVar3[0x1c] = bVar17;
          pbVar3[0x1d] = bVar25;
          pbVar3[0x1e] = bVar33;
          pbVar3[0x1f] = (byte)((ushort)(auVar34._14_2_ + (ushort)bVar17 * 0x26 +
                                        (ushort)bVar33 * 0xf) >> 7);
          pbVar3 = pbVar3 + 0x20;
          uVar8 = uVar8 + 8;
        } while (uVar8 < (uVar6 & 0xfffffffffffffff8));
      }
      uVar8 = uVar6 & 7;
      if (uVar8 != 0) {
        lVar7 = (uVar6 & 0x3ffffffffffffff8) * 4;
        pbVar3 = pbVar5 + lVar7;
        pbVar9 = (byte *)(uVar2 + lVar7 + uVar1 * uVar4 + 1);
        do {
          pbVar3[-1] = pbVar9[-1];
          *pbVar3 = *pbVar9;
          bVar10 = pbVar9[1];
          pbVar3[1] = bVar10;
          pbVar3[2] = (byte)(((uint)pbVar9[-1] * 0x26 - (uint)bVar10) + (uint)bVar10 * 0x10 +
                             (uint)*pbVar9 * 0x4b >> 7);
          pbVar3 = pbVar3 + 4;
          uVar8 = uVar8 - 1;
          pbVar9 = pbVar9 + 4;
        } while (uVar8 != 0);
      }
      uVar4 = uVar4 + 1;
      param_2 = param_2 + param_1;
      pbVar5 = pbVar5 + param_1;
    } while (uVar4 < *param_3);
  }
  return;
}



/* Entry: 10a1b529c; end: 10a1b54e3;  */

void FUN_10a1b529c(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,int *param_5)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined1 auStack_88 [24];
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_10a1b3670(&lStack_70,param_2 + 0x18);
  plVar10 = (long *)(param_2 + 8);
  lVar9 = *plVar10;
  if ((lVar9 == 0) || (*param_5 != *(int *)(lVar9 + 0x10) || param_5[1] != *(int *)(lVar9 + 0x14)))
  {
    FUN_10a1ba8d8(&lStack_60,*(undefined8 *)param_5,3,0,1);
    FUN_10a16b1ec(plVar10,&lStack_60);
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
      do {
        lVar9 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
      }
    }
    lVar9 = *plVar10;
  }
  iVar3 = *(int *)(param_3 + 0x24);
  if (iVar3 < 4) {
    if ((iVar3 != 1) && (iVar3 != 2)) {
LAB_10a1b5470:
      __ZNSt3__19to_stringEi(auStack_88,iVar3);
      FUN_109feb280(&lStack_60,&UNK_10f64277c,auStack_88);
      FUN_10a0029c0(&lStack_60);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a1b549c);
      (*pcVar6)();
    }
    uStack_48 = *(undefined8 *)(lStack_70 + 0x28);
    iVar3 = *(int *)(lStack_70 + 0x10);
    iVar2 = *(int *)(lStack_70 + 0x14);
    uStack_50 = *(undefined8 *)(lStack_70 + 0x18);
    uVar7 = 0x100000000;
    uVar8 = 2;
  }
  else {
    if (iVar3 == 4) {
      uStack_48 = *(undefined8 *)(lStack_70 + 0x28);
      plStack_58 = (long *)(long)*(int *)(lStack_70 + 0x10);
      lStack_60 = (long)*(int *)(lStack_70 + 0x14);
      uStack_50 = *(undefined8 *)(lStack_70 + 0x18);
      FUN_10a1bb2c8(*(undefined8 *)(lVar9 + 0x18),*(undefined8 *)(lVar9 + 0x28),&lStack_60);
      goto LAB_10a1b53fc;
    }
    if (iVar3 != 5) goto LAB_10a1b5470;
    uStack_48 = *(undefined8 *)(lStack_70 + 0x28);
    iVar3 = *(int *)(lStack_70 + 0x10);
    iVar2 = *(int *)(lStack_70 + 0x14);
    uStack_50 = *(undefined8 *)(lStack_70 + 0x18);
    uVar7 = 0x100000002;
    uVar8 = 0;
  }
  plStack_58 = (long *)(long)iVar3;
  lStack_60 = (long)iVar2;
  FUN_10a1bb1dc(*(undefined8 *)(lVar9 + 0x18),*(undefined8 *)(lVar9 + 0x28),&lStack_60,uVar7,uVar8);
LAB_10a1b53fc:
  lVar9 = *(long *)(param_2 + 0x10);
  uVar7 = *(undefined8 *)(param_2 + 8);
  param_1[1] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = uVar7;
  if (lVar9 != 0) {
    plVar10 = (long *)(lVar9 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plStack_68 != (long *)0x0) {
    plVar10 = plStack_68 + 1;
    do {
      lVar9 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  return;
}



/* Entry: 10a1b54e4; end: 10a1b572b;  */

void FUN_10a1b54e4(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,int *param_5)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined1 auStack_88 [24];
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_10a1b3670(&lStack_70,param_2 + 0x18);
  plVar10 = (long *)(param_2 + 8);
  lVar9 = *plVar10;
  if ((lVar9 == 0) || (*param_5 != *(int *)(lVar9 + 0x10) || param_5[1] != *(int *)(lVar9 + 0x14)))
  {
    FUN_10a1ba8d8(&lStack_60,*(undefined8 *)param_5,4,0,1);
    FUN_10a16b1ec(plVar10,&lStack_60);
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
      do {
        lVar9 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
      }
    }
    lVar9 = *plVar10;
  }
  iVar3 = *(int *)(param_3 + 0x24);
  if (iVar3 < 3) {
    if ((iVar3 != 1) && (iVar3 != 2)) {
LAB_10a1b56b8:
      __ZNSt3__19to_stringEi(auStack_88,iVar3);
      FUN_109feb280(&lStack_60,&UNK_10f6427c0,auStack_88);
      FUN_10a0029c0(&lStack_60);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a1b56e4);
      (*pcVar6)();
    }
    uStack_48 = *(undefined8 *)(lStack_70 + 0x28);
    iVar3 = *(int *)(lStack_70 + 0x10);
    iVar2 = *(int *)(lStack_70 + 0x14);
    uStack_50 = *(undefined8 *)(lStack_70 + 0x18);
    uVar7 = 0x100000002;
    uVar8 = 0;
  }
  else {
    if (iVar3 == 3) {
      uStack_48 = *(undefined8 *)(lStack_70 + 0x28);
      plStack_58 = (long *)(long)*(int *)(lStack_70 + 0x10);
      lStack_60 = (long)*(int *)(lStack_70 + 0x14);
      uStack_50 = *(undefined8 *)(lStack_70 + 0x18);
      FUN_10a1bb2c8(*(undefined8 *)(lVar9 + 0x18),*(undefined8 *)(lVar9 + 0x28),&lStack_60);
      goto LAB_10a1b5644;
    }
    if (iVar3 != 5) goto LAB_10a1b56b8;
    uStack_48 = *(undefined8 *)(lStack_70 + 0x28);
    iVar3 = *(int *)(lStack_70 + 0x10);
    iVar2 = *(int *)(lStack_70 + 0x14);
    uStack_50 = *(undefined8 *)(lStack_70 + 0x18);
    uVar7 = 0x100000000;
    uVar8 = 2;
  }
  plStack_58 = (long *)(long)iVar3;
  lStack_60 = (long)iVar2;
  FUN_10a1bb1dc(*(undefined8 *)(lVar9 + 0x18),*(undefined8 *)(lVar9 + 0x28),&lStack_60,uVar7,uVar8);
LAB_10a1b5644:
  lVar9 = *(long *)(param_2 + 0x10);
  uVar7 = *(undefined8 *)(param_2 + 8);
  param_1[1] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = uVar7;
  if (lVar9 != 0) {
    plVar10 = (long *)(lVar9 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plStack_68 != (long *)0x0) {
    plVar10 = plStack_68 + 1;
    do {
      lVar9 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  return;
}



/* Entry: 10a1b572c; end: 10a1b5977;  */

void FUN_10a1b572c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  int *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined1 auStack_88 [24];
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_10a1b3670(&lStack_70,param_2 + 0x20);
  plVar13 = (long *)(param_2 + 0x10);
  lVar12 = *plVar13;
  if ((lVar12 == 0) ||
     (*param_5 != *(int *)(lVar12 + 0x10) || param_5[1] != *(int *)(lVar12 + 0x14))) {
    uVar14 = *(undefined8 *)param_5;
    uVar3 = *(undefined4 *)(param_2 + 8);
    plVar7 = (long *)0xa8;
    __Znwm();
    plVar7[1] = 0;
    plVar7[2] = 0;
    plVar8 = plVar7 + 3;
    *plVar7 = (long)&PTR_FUN_110baa4d8;
    FUN_10a1b2c6c(plVar8,uVar14,uVar3,0,1);
    plStack_60 = plVar8;
    plStack_58 = plVar7;
    FUN_10a16b1ec(plVar13,&plStack_60);
    plVar7 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar8 = plStack_58 + 1;
      do {
        lVar12 = *plVar8;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  if (*(int *)(param_2 + 8) == 5) {
    uVar9 = *(undefined8 *)(*plVar13 + 0x28);
    uVar14 = *(undefined8 *)(*plVar13 + 0x18);
    uStack_48 = *(undefined8 *)(lStack_70 + 0x28);
    iVar1 = *(int *)(lStack_70 + 0x10);
    iVar2 = *(int *)(lStack_70 + 0x14);
    uStack_50 = *(undefined8 *)(lStack_70 + 0x18);
    uVar10 = 0x100000002;
    uVar11 = 0x300000000;
  }
  else {
    if (*(int *)(param_2 + 8) != 1) {
      __ZNSt3__19to_stringEi(auStack_88);
      FUN_109feb280(&plStack_60,&UNK_10f642804,auStack_88);
      FUN_10a0029c0(&plStack_60);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a1b5920);
      (*pcVar6)();
    }
    uVar9 = *(undefined8 *)(*plVar13 + 0x28);
    uVar14 = *(undefined8 *)(*plVar13 + 0x18);
    uStack_48 = *(undefined8 *)(lStack_70 + 0x28);
    iVar1 = *(int *)(lStack_70 + 0x10);
    iVar2 = *(int *)(lStack_70 + 0x14);
    uStack_50 = *(undefined8 *)(lStack_70 + 0x18);
    uVar10 = 0x100000000;
    uVar11 = 0x300000002;
  }
  plStack_58 = (long *)(long)iVar1;
  plStack_60 = (long *)(long)iVar2;
  FUN_10a0dba80(uVar14,uVar9,&plStack_60,uVar10,uVar11,0xff000000);
  lVar12 = *(long *)(param_2 + 0x18);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = *(undefined8 *)(param_2 + 0x18);
  *param_1 = uVar14;
  if (lVar12 != 0) {
    plVar13 = (long *)(lVar12 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = *plVar13 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plStack_68 != (long *)0x0) {
    plVar13 = plStack_68 + 1;
    do {
      lVar12 = *plVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  return;
}



/* Entry: 10a1b5978; end: 10a1b5be3;  */

void FUN_10a1b5978(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,int *param_5)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined1 auStack_88 [24];
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_10a1b3670(&lStack_70,param_2 + 0x18);
  plVar9 = (long *)(param_2 + 8);
  lVar8 = *plVar9;
  if ((lVar8 == 0) || (*param_5 != *(int *)(lVar8 + 0x10) || param_5[1] != *(int *)(lVar8 + 0x14)))
  {
    FUN_10a1ba8d8(&lStack_60,*(undefined8 *)param_5,9,0,1);
    FUN_10a16b1ec(plVar9,&lStack_60);
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
      do {
        lVar8 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
      }
    }
    lVar8 = *plVar9;
  }
  iVar3 = *(int *)(param_3 + 0x24);
  if (iVar3 < 4) {
    if (iVar3 == 1) {
      uStack_48 = *(undefined8 *)(lStack_70 + 0x28);
      iVar3 = *(int *)(lStack_70 + 0x10);
      iVar2 = *(int *)(lStack_70 + 0x14);
      uStack_50 = *(undefined8 *)(lStack_70 + 0x18);
      uVar7 = 0x100000000;
LAB_10a1b5acc:
      plStack_58 = (long *)(long)iVar3;
      lStack_60 = (long)iVar2;
      FUN_10a1bb478(*(undefined8 *)(lVar8 + 0x18),*(undefined8 *)(lVar8 + 0x28),&lStack_60,uVar7);
      goto LAB_10a1b5afc;
    }
    if (iVar3 != 3) {
LAB_10a1b5b70:
      __ZNSt3__19to_stringEi(auStack_88,iVar3);
      FUN_109feb280(&lStack_60,&UNK_10f642848,auStack_88);
      FUN_10a0029c0(&lStack_60);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a1b5b9c);
      (*pcVar6)();
    }
    uStack_48 = *(undefined8 *)(lStack_70 + 0x28);
    iVar3 = *(int *)(lStack_70 + 0x10);
    iVar2 = *(int *)(lStack_70 + 0x14);
    uStack_50 = *(undefined8 *)(lStack_70 + 0x18);
    uVar7 = 0x100000000;
  }
  else {
    if (iVar3 != 4) {
      if (iVar3 != 5) goto LAB_10a1b5b70;
      uStack_48 = *(undefined8 *)(lStack_70 + 0x28);
      iVar3 = *(int *)(lStack_70 + 0x10);
      iVar2 = *(int *)(lStack_70 + 0x14);
      uStack_50 = *(undefined8 *)(lStack_70 + 0x18);
      uVar7 = 0x100000002;
      goto LAB_10a1b5acc;
    }
    uStack_48 = *(undefined8 *)(lStack_70 + 0x28);
    iVar3 = *(int *)(lStack_70 + 0x10);
    iVar2 = *(int *)(lStack_70 + 0x14);
    uStack_50 = *(undefined8 *)(lStack_70 + 0x18);
    uVar7 = 0x100000002;
  }
  plStack_58 = (long *)(long)iVar3;
  lStack_60 = (long)iVar2;
  FUN_10a1bb3c0(*(undefined8 *)(lVar8 + 0x18),*(undefined8 *)(lVar8 + 0x28),&lStack_60,uVar7);
LAB_10a1b5afc:
  lVar8 = *(long *)(param_2 + 0x10);
  uVar7 = *(undefined8 *)(param_2 + 8);
  param_1[1] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = uVar7;
  if (lVar8 != 0) {
    plVar9 = (long *)(lVar8 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plStack_68 != (long *)0x0) {
    plVar9 = plStack_68 + 1;
    do {
      lVar8 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  return;
}



/* Entry: 10a1b5f04; end: 10a1b622b;  */

void FUN_10a1b5f04(long param_1,long param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  byte *pbVar30;
  byte bVar31;
  undefined1 auVar32 [16];
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  
  if (*param_3 != 0) {
    uVar26 = 0;
    do {
      uVar1 = param_3[2];
      uVar2 = param_3[3];
      uVar28 = param_3[1];
      uVar27 = uVar28 & 0xfffffffffffffff8;
      if (uVar27 != 0) {
        uVar29 = 0;
        pbVar30 = (byte *)(uVar2 + uVar1 * uVar26);
        do {
          bVar31 = *pbVar30;
          pbVar3 = pbVar30 + 1;
          pbVar4 = pbVar30 + 2;
          pbVar5 = pbVar30 + 3;
          pbVar6 = pbVar30 + 4;
          pbVar7 = pbVar30 + 5;
          pbVar8 = pbVar30 + 6;
          pbVar9 = pbVar30 + 7;
          pbVar10 = pbVar30 + 8;
          pbVar11 = pbVar30 + 9;
          pbVar12 = pbVar30 + 10;
          pbVar13 = pbVar30 + 0xb;
          pbVar14 = pbVar30 + 0xc;
          pbVar15 = pbVar30 + 0xd;
          pbVar16 = pbVar30 + 0xe;
          pbVar17 = pbVar30 + 0xf;
          pbVar18 = pbVar30 + 0x10;
          pbVar19 = pbVar30 + 0x11;
          pbVar20 = pbVar30 + 0x12;
          pbVar21 = pbVar30 + 0x13;
          pbVar22 = pbVar30 + 0x14;
          pbVar23 = pbVar30 + 0x15;
          pbVar24 = pbVar30 + 0x16;
          pbVar25 = pbVar30 + 0x17;
          pbVar30 = pbVar30 + 0x18;
          auVar32 = NEON_umull(CONCAT17(*pbVar24,CONCAT16(*pbVar21,CONCAT15(*pbVar18,CONCAT14(*
                                                  pbVar15,CONCAT13(*pbVar12,CONCAT12(*pbVar9,
                                                  CONCAT11(*pbVar6,*pbVar3))))))),0x4b4b4b4b4b4b4b4b
                               ,1);
          *(ulong *)(param_2 + uVar29) =
               CONCAT17((char)((ushort)(auVar32._14_2_ + (ushort)*pbVar23 * 0x26 +
                                       (ushort)*pbVar25 * 0xf) >> 7),
                        CONCAT16((char)((ushort)(auVar32._12_2_ + (ushort)*pbVar20 * 0x26 +
                                                (ushort)*pbVar22 * 0xf) >> 7),
                                 CONCAT15((char)((ushort)(auVar32._10_2_ + (ushort)*pbVar17 * 0x26 +
                                                         (ushort)*pbVar19 * 0xf) >> 7),
                                          CONCAT14((char)((ushort)(auVar32._8_2_ +
                                                                   (ushort)*pbVar14 * 0x26 +
                                                                  (ushort)*pbVar16 * 0xf) >> 7),
                                                   CONCAT13((char)((ushort)(auVar32._6_2_ +
                                                                            (ushort)*pbVar11 * 0x26
                                                                           + (ushort)*pbVar13 * 0xf)
                                                                  >> 7),
                                                            CONCAT12((char)((ushort)(auVar32._4_2_ +
                                                                                     (ushort)*pbVar8
                                                                                     * 0x26 + (
                                                  ushort)*pbVar10 * 0xf) >> 7),
                                                  CONCAT11((char)((ushort)(auVar32._2_2_ +
                                                                           (ushort)*pbVar5 * 0x26 +
                                                                          (ushort)*pbVar7 * 0xf) >>
                                                                 7),(char)((ushort)(auVar32._0_2_ +
                                                                                    (ushort)bVar31 *
                                                                                    0x26 + (ushort)*
                                                  pbVar4 * 0xf) >> 7))))))));
          uVar29 = uVar29 + 8;
        } while (uVar29 < uVar27);
      }
      uVar29 = uVar28 & 7;
      if (uVar29 != 0) {
        pbVar30 = (byte *)(uVar2 + (uVar28 >> 3) * 0x18 + uVar1 * uVar26 + 1);
        do {
          *(char *)(param_2 + uVar27) =
               (char)((uint)pbVar30[-1] * 0x26 + (uint)*pbVar30 * 0x4b + (uint)pbVar30[1] * 0xf >> 7
                     );
          uVar27 = uVar27 + 1;
          pbVar30 = pbVar30 + 3;
          uVar29 = uVar29 - 1;
        } while (uVar29 != 0);
      }
      uVar26 = uVar26 + 1;
      param_2 = param_2 + param_1;
    } while (uVar26 < *param_3);
  }
  return;
}



/* Entry: 10a1b622c; end: 10a1b6647;  */

void FUN_10a1b622c(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,ulong *param_5)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined **ppuVar8;
  long *plVar9;
  long *plVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  int *piVar13;
  undefined8 *extraout_x8;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined1 auStack_1d0 [8];
  long *plStack_1c8;
  long lStack_1c0;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined1 *puStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  ulong uStack_170;
  ulong uStack_168;
  long *plStack_158;
  long *plStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [144];
  long lStack_98;
  undefined **ppuStack_90;
  code *pcStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_98 = 0x109d138c8;
  ppuStack_90 = &PTR_DAT_110b3e838;
  pcStack_88 = FUN_10a1b2664;
  FUN_10a1b2668(auStack_128,*(undefined8 *)(param_3 + 0x30),
                CONCAT44((int)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20) / 2,
                         (int)*(undefined8 *)(param_3 + 0x10) / 2),*(undefined8 *)(param_3 + 0x18),9
                ,&lStack_98,0,0);
  (*(code *)*ppuStack_90)(&ppuStack_90);
  uVar19 = *param_5;
  uVar18 = uVar19 >> 0x20;
  uVar20 = uVar19;
  uStack_130 = uVar19;
  if ((uVar19 & 1) != 0) {
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      uStack_170 = uVar19;
      uStack_168 = uVar18;
      func_0x00010ae06f08(1,2,&UNK_10f6428d0,&UNK_10f6428fd,0x299,&UNK_10f642985);
    }
    uVar1 = (int)uVar19 + 1;
    uVar20 = (ulong)uVar1;
    uStack_130 = CONCAT44(uStack_130._4_4_,uVar1);
  }
  if ((uVar18 & 1) != 0) {
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      uStack_170 = uVar20;
      uStack_168 = uVar18;
      func_0x00010ae06f08(1,2,&UNK_10f6428d0,&UNK_10f6428fd,0x29f,&UNK_10f6429d2);
    }
    uVar1 = (int)(uVar19 >> 0x20) + 1;
    uVar18 = (ulong)uVar1;
    uStack_130 = CONCAT44(uVar1,(undefined4)uStack_130);
  }
  uStack_138 = CONCAT44((int)uVar18 / 2,(int)uVar20 / 2);
  FUN_10a1b3670(&lStack_98,param_2 + 0x20,param_3,param_4,&uStack_130);
  FUN_10a1b3670(&lStack_148,param_2 + 0x50,auStack_128,param_4,&uStack_138);
  uVar19 = uStack_130;
  plVar17 = (long *)(param_2 + 8);
  lVar16 = *plVar17;
  if (((lVar16 == 0) || ((int)uVar20 != *(int *)(lVar16 + 0x10))) ||
     ((int)uVar18 != *(int *)(lVar16 + 0x14))) {
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    plVar9 = (long *)0xa8;
    __Znwm();
    plVar9[1] = 0;
    plVar9[2] = 0;
    plVar10 = plVar9 + 3;
    *plVar9 = (long)&PTR_FUN_110baa4d8;
    FUN_10a1b2c6c(plVar10,uVar19,uVar3,0,1);
    plStack_158 = plVar10;
    plStack_150 = plVar9;
    FUN_10a16b1ec(plVar17,&plStack_158);
    plVar9 = plStack_150;
    if (plStack_150 != (long *)0x0) {
      plVar10 = plStack_150 + 1;
      do {
        lVar16 = *plVar10;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar7) {
          *plVar10 = lVar16 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_150 + 0x10))(plStack_150);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    lVar16 = *plVar17;
  }
  iVar4 = *(int *)(param_3 + 0x24);
  iVar5 = *(int *)(param_2 + 0x18);
  plVar9 = (long *)(lStack_98 + 0x30);
  if (lStack_148 != 0) {
    plVar9 = (long *)(lStack_148 + 0x28);
  }
  piVar13 = (int *)(long)*(int *)(lStack_98 + 0x10);
  lVar14 = *(long *)(lStack_98 + 0x28) +
           *(long *)(lStack_98 + 0x18) * (long)*(int *)(lStack_98 + 0x14);
  if (*plVar9 != 0) {
    lVar14 = *plVar9;
  }
  if (iVar5 == 3) {
    uStack_170 = CONCAT71(uStack_170._1_7_,iVar4 != 0x16);
    FUN_10a19cd40(*(long *)(lStack_98 + 0x28),lVar14,*(undefined8 *)(lVar16 + 0x28));
  }
  else if (iVar5 == 2) {
    uStack_170 = CONCAT71(uStack_170._1_7_,iVar4 != 0x16);
    FUN_10a19bfd8();
  }
  else if (iVar5 == 1) {
    uStack_170 = CONCAT71(uStack_170._1_7_,iVar4 != 0x16);
    FUN_10a19c418();
  }
  else {
    uStack_170 = CONCAT71(uStack_170._1_7_,iVar4 != 0x16);
    FUN_10a19c910();
  }
  lVar16 = *(long *)(param_2 + 0x10);
  uVar21 = *(undefined8 *)(param_2 + 8);
  param_1[1] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = uVar21;
  if (lVar16 != 0) {
    plVar9 = (long *)(lVar16 + 8);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar7) {
        *plVar9 = *plVar9 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (plStack_140 != (long *)0x0) {
    plVar9 = plStack_140 + 1;
    do {
      lVar16 = *plVar9;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar7) {
        *plVar9 = lVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_140 + 0x10))(plStack_140);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_140);
    }
  }
  ppuVar8 = ppuStack_90;
  if (ppuStack_90 != (undefined **)0x0) {
    ppuVar2 = ppuStack_90 + 1;
    do {
      puVar15 = *ppuVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar7) {
        *ppuVar2 = puVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (puVar15 == (undefined *)0x0) {
      (**(code **)(*ppuStack_90 + 0x10))(ppuStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
    }
  }
  puVar11 = auStack_128;
  FUN_10a1b2b9c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    FUN_10a1b2b9c(auStack_128);
    puVar12 = puVar11;
    __Unwind_Resume();
    pcStack_178 = FUN_10a1b6648;
    plStack_1a0 = plVar17;
    lStack_198 = param_3;
    lStack_190 = param_2;
    puStack_188 = puVar11;
    puStack_180 = &stack0xfffffffffffffff0;
    FUN_10a1b622c(auStack_1d0);
    if (plStack_1c8 != (long *)0x0) {
      plVar17 = plStack_1c8 + 1;
      do {
        lVar16 = *plVar17;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar7) {
          *plVar17 = lVar16 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1c8);
      }
    }
    plVar17 = (long *)(puVar12 + 0x80);
    lVar16 = *plVar17;
    if ((lVar16 == 0) ||
       (*piVar13 != *(int *)(lVar16 + 0x10) || piVar13[1] != *(int *)(lVar16 + 0x14))) {
      FUN_10a1ba8d8(&lStack_1c0,*(undefined8 *)piVar13,9,0,1);
      FUN_10a16b1ec(plVar17,&lStack_1c0);
      if (plStack_1b8 != (long *)0x0) {
        plVar9 = plStack_1b8 + 1;
        do {
          lVar16 = *plVar9;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar7) {
            *plVar9 = lVar16 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1b8);
        }
      }
      lVar16 = *plVar17;
    }
    lVar14 = *(long *)(puVar12 + 8);
    uStack_1a8 = *(undefined8 *)(lVar14 + 0x28);
    plStack_1b8 = (long *)(long)*(int *)(lVar14 + 0x10);
    lStack_1c0 = (long)*(int *)(lVar14 + 0x14);
    uStack_1b0 = *(undefined8 *)(lVar14 + 0x18);
    FUN_10a1bb3c0(*(undefined8 *)(lVar16 + 0x18),*(undefined8 *)(lVar16 + 0x28),&lStack_1c0,
                  0x100000000);
    lVar16 = *(long *)(puVar12 + 0x88);
    uVar21 = *(undefined8 *)(puVar12 + 0x80);
    extraout_x8[1] = *(undefined8 *)(puVar12 + 0x88);
    *extraout_x8 = uVar21;
    if (lVar16 != 0) {
      plVar17 = (long *)(lVar16 + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar7) {
          *plVar17 = *plVar17 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    return;
  }
  return;
}



/* Entry: 10a1b6648; end: 10a1b678b;  */

void FUN_10a1b6648(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  int *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_10a1b622c(auStack_60);
  if (plStack_58 != (long *)0x0) {
    plVar6 = plStack_58 + 1;
    do {
      lVar5 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  plVar6 = (long *)(param_2 + 0x80);
  lVar5 = *plVar6;
  if ((lVar5 == 0) || (*param_5 != *(int *)(lVar5 + 0x10) || param_5[1] != *(int *)(lVar5 + 0x14)))
  {
    FUN_10a1ba8d8(&lStack_50,*(undefined8 *)param_5,9,0,1);
    FUN_10a16b1ec(plVar6,&lStack_50);
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
      }
    }
    lVar5 = *plVar6;
  }
  lVar4 = *(long *)(param_2 + 8);
  uStack_38 = *(undefined8 *)(lVar4 + 0x28);
  plStack_48 = (long *)(long)*(int *)(lVar4 + 0x10);
  lStack_50 = (long)*(int *)(lVar4 + 0x14);
  uStack_40 = *(undefined8 *)(lVar4 + 0x18);
  FUN_10a1bb3c0(*(undefined8 *)(lVar5 + 0x18),*(undefined8 *)(lVar5 + 0x28),&lStack_50,0x100000000);
  lVar5 = *(long *)(param_2 + 0x88);
  uVar7 = *(undefined8 *)(param_2 + 0x80);
  param_1[1] = *(undefined8 *)(param_2 + 0x88);
  *param_1 = uVar7;
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 10a1b678c; end: 10a1b6927;  */

void FUN_10a1b678c(long *param_1,long param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined *puVar15;
  int *piVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *extraout_x8;
  undefined *puVar19;
  undefined **ppuVar20;
  long lVar21;
  undefined *puVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined1 uVar28;
  undefined **ppuVar29;
  long lStack_160;
  long *plStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  int *piStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined ***pppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long lStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  undefined ***pppuStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined ***pppuStack_90;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a1b3670(&lStack_b8,param_2 + 8);
  pppuStack_90 = pppuStack_b0;
  uVar26 = *(undefined8 *)(lStack_b8 + 0x28);
  uVar27 = *(undefined8 *)(lStack_b8 + 0x10);
  piVar2 = *(int **)(lStack_b8 + 0x18);
  lStack_c8 = lStack_b8;
  pppuStack_c0 = pppuStack_b0;
  if (pppuStack_b0 != (undefined ***)0x0) {
    pppuVar10 = pppuStack_b0 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
      if (bVar7) {
        *pppuVar10 = (undefined **)((long)*pppuVar10 + 1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  puVar9 = (undefined8 *)0xa8;
  __Znwm();
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &PTR_FUN_110baca38;
  puVar1 = puVar9 + 3;
  pcStack_a8 = FUN_10a1bb540;
  ppuStack_a0 = &PTR_DAT_110baca98;
  lStack_98 = lStack_b8;
  lStack_c8 = 0;
  pppuStack_c0 = (undefined ***)0x0;
  piVar16 = piVar2;
  FUN_10a1b2668(puVar1,uVar26,uVar27,piVar2,7,&pcStack_a8,0,0);
  pppuVar10 = &ppuStack_a0;
  (*(code *)*ppuStack_a0)();
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar9;
  if (pppuStack_b0 != (undefined ***)0x0) {
    pppuVar11 = pppuStack_b0 + 1;
    do {
      ppuVar20 = *pppuVar11;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppuVar11,0x10);
      if (bVar7) {
        *pppuVar11 = (undefined **)((long)ppuVar20 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (ppuVar20 == (undefined **)0x0) {
      (*(code *)(*pppuStack_b0)[2])(pppuStack_b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar10 = pppuStack_b0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_a0)(&ppuStack_a0);
    __ZNSt3__119__shared_weak_countD2Ev(puVar9);
    __ZdlPv();
    func_0x00010a136de4(&lStack_c8);
    func_0x00010a136de4(&lStack_b8);
    pppuVar11 = pppuVar10;
    __Unwind_Resume();
    pcStack_d8 = FUN_10a1b6928;
    puStack_110 = puVar1;
    piStack_108 = piVar2;
    uStack_100 = uVar27;
    uStack_f8 = uVar26;
    puStack_f0 = puVar9;
    pppuStack_e8 = pppuVar10;
    puStack_e0 = &stack0xfffffffffffffff0;
    FUN_10a1b3670(&lStack_160,pppuVar11 + 4);
    pppuVar10 = pppuVar11 + 2;
    ppuVar20 = *pppuVar10;
    if ((ppuVar20 == (undefined **)0x0) ||
       (*piVar16 != *(int *)(ppuVar20 + 2) || piVar16[1] != *(int *)((long)ppuVar20 + 0x14))) {
      uVar27 = *(undefined8 *)piVar16;
      uVar5 = *(undefined4 *)(pppuVar11 + 1);
      plVar12 = (long *)0xa8;
      __Znwm();
      plVar12[1] = 0;
      plVar12[2] = 0;
      plVar13 = plVar12 + 3;
      *plVar12 = (long)&PTR_FUN_110baa4d8;
      FUN_10a1b2c6c(plVar13,uVar27,uVar5,0,1);
      plStack_130 = plVar13;
      plStack_128 = plVar12;
      FUN_10a16b1ec(pppuVar10,&plStack_130);
      plVar12 = plStack_128;
      if (plStack_128 != (long *)0x0) {
        plVar13 = plStack_128 + 1;
        do {
          lVar21 = *plVar13;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar7) {
            *plVar13 = lVar21 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar21 == 0) {
          (**(code **)(*plStack_128 + 0x10))(plStack_128);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
    }
    if (*(int *)(pppuVar11 + 1) - 3U < 2) {
      puVar19 = (*pppuVar10)[5];
      puVar22 = (*pppuVar10)[3];
      lVar21 = *(long *)(lStack_160 + 0x28);
      uVar3 = *(uint *)(lStack_160 + 0x10);
      iVar4 = *(int *)(lStack_160 + 0x14);
      lVar23 = *(long *)(lStack_160 + 0x18);
      plStack_130 = (long *)0x0;
      plStack_128 = (long *)((ulong)plStack_128 & 0xffffffff00000000);
      if (iVar4 != 0) {
        lVar24 = 0;
        uVar25 = (long)(int)uVar3 & 0xfffffffffffffff0;
        lVar14 = lVar21;
        puVar15 = puVar19;
        do {
          if (0xf < uVar3) {
            uVar17 = 0;
            puVar8 = puVar15;
            do {
              uVar26 = ((undefined8 *)(lVar14 + uVar17))[1];
              uVar27 = *(undefined8 *)(lVar14 + uVar17);
              uVar28 = (undefined1)uVar27;
              *puVar8 = uVar28;
              puVar8[1] = uVar28;
              puVar8[2] = uVar28;
              uVar28 = (undefined1)((ulong)uVar27 >> 8);
              puVar8[3] = uVar28;
              puVar8[4] = uVar28;
              puVar8[5] = uVar28;
              uVar28 = (undefined1)((ulong)uVar27 >> 0x10);
              puVar8[6] = uVar28;
              puVar8[7] = uVar28;
              puVar8[8] = uVar28;
              uVar28 = (undefined1)((ulong)uVar27 >> 0x18);
              puVar8[9] = uVar28;
              puVar8[10] = uVar28;
              puVar8[0xb] = uVar28;
              uVar28 = (undefined1)((ulong)uVar27 >> 0x20);
              puVar8[0xc] = uVar28;
              puVar8[0xd] = uVar28;
              puVar8[0xe] = uVar28;
              uVar28 = (undefined1)((ulong)uVar27 >> 0x28);
              puVar8[0xf] = uVar28;
              puVar8[0x10] = uVar28;
              puVar8[0x11] = uVar28;
              uVar28 = (undefined1)((ulong)uVar27 >> 0x30);
              puVar8[0x12] = uVar28;
              puVar8[0x13] = uVar28;
              puVar8[0x14] = uVar28;
              uVar28 = (undefined1)((ulong)uVar27 >> 0x38);
              puVar8[0x15] = uVar28;
              puVar8[0x16] = uVar28;
              puVar8[0x17] = uVar28;
              uVar28 = (undefined1)uVar26;
              puVar8[0x18] = uVar28;
              puVar8[0x19] = uVar28;
              puVar8[0x1a] = uVar28;
              uVar28 = (undefined1)((ulong)uVar26 >> 8);
              puVar8[0x1b] = uVar28;
              puVar8[0x1c] = uVar28;
              puVar8[0x1d] = uVar28;
              uVar28 = (undefined1)((ulong)uVar26 >> 0x10);
              puVar8[0x1e] = uVar28;
              puVar8[0x1f] = uVar28;
              puVar8[0x20] = uVar28;
              uVar28 = (undefined1)((ulong)uVar26 >> 0x18);
              puVar8[0x21] = uVar28;
              puVar8[0x22] = uVar28;
              puVar8[0x23] = uVar28;
              uVar28 = (undefined1)((ulong)uVar26 >> 0x20);
              puVar8[0x24] = uVar28;
              puVar8[0x25] = uVar28;
              puVar8[0x26] = uVar28;
              uVar28 = (undefined1)((ulong)uVar26 >> 0x28);
              puVar8[0x27] = uVar28;
              puVar8[0x28] = uVar28;
              puVar8[0x29] = uVar28;
              uVar28 = (undefined1)((ulong)uVar26 >> 0x30);
              puVar8[0x2a] = uVar28;
              puVar8[0x2b] = uVar28;
              puVar8[0x2c] = uVar28;
              uVar28 = (undefined1)((ulong)uVar26 >> 0x38);
              puVar8[0x2d] = uVar28;
              puVar8[0x2e] = uVar28;
              puVar8[0x2f] = uVar28;
              puVar8 = puVar8 + 0x30;
              uVar17 = uVar17 + 0x10;
            } while (uVar17 < uVar25);
          }
          if ((uVar3 & 0xf) != 0) {
            uVar17 = 0;
            puVar8 = puVar19 + uVar25 * 3 + lVar24 * (long)puVar22;
            do {
              lVar18 = 0;
              do {
                puVar8[lVar18] =
                     *(undefined1 *)
                      (lVar21 + lVar24 * lVar23 + uVar25 + uVar17 +
                      (ulong)*(uint *)((long)&plStack_130 + lVar18 * 4));
                lVar18 = lVar18 + 1;
              } while (lVar18 != 3);
              puVar8 = puVar8 + 3;
              uVar17 = uVar17 + 1;
            } while (uVar17 != ((long)(int)uVar3 & 0xfU));
          }
          lVar24 = lVar24 + 1;
          puVar15 = puVar15 + (long)puVar22;
          lVar14 = lVar14 + lVar23;
        } while (lVar24 != iVar4);
      }
    }
    else if (*(int *)(pppuVar11 + 1) == 2) {
      puVar19 = (*pppuVar10)[5];
      puVar22 = (*pppuVar10)[3];
      lVar21 = *(long *)(lStack_160 + 0x28);
      uVar3 = *(uint *)(lStack_160 + 0x10);
      iVar4 = *(int *)(lStack_160 + 0x14);
      lVar23 = *(long *)(lStack_160 + 0x18);
      plStack_130 = (long *)0x0;
      plStack_128 = (long *)0x0;
      if (iVar4 != 0) {
        lVar24 = 0;
        uVar25 = (long)(int)uVar3 & 0xfffffffffffffff0;
        lVar14 = lVar21;
        puVar15 = puVar19;
        do {
          if (0xf < uVar3) {
            uVar17 = 0;
            puVar8 = puVar15;
            do {
              uVar26 = ((undefined8 *)(lVar14 + uVar17))[1];
              uVar27 = *(undefined8 *)(lVar14 + uVar17);
              uVar28 = (undefined1)uVar27;
              *puVar8 = uVar28;
              puVar8[1] = uVar28;
              puVar8[2] = uVar28;
              puVar8[3] = uVar28;
              uVar28 = (undefined1)((ulong)uVar27 >> 8);
              puVar8[4] = uVar28;
              puVar8[5] = uVar28;
              puVar8[6] = uVar28;
              puVar8[7] = uVar28;
              uVar28 = (undefined1)((ulong)uVar27 >> 0x10);
              puVar8[8] = uVar28;
              puVar8[9] = uVar28;
              puVar8[10] = uVar28;
              puVar8[0xb] = uVar28;
              uVar28 = (undefined1)((ulong)uVar27 >> 0x18);
              puVar8[0xc] = uVar28;
              puVar8[0xd] = uVar28;
              puVar8[0xe] = uVar28;
              puVar8[0xf] = uVar28;
              uVar28 = (undefined1)((ulong)uVar27 >> 0x20);
              puVar8[0x10] = uVar28;
              puVar8[0x11] = uVar28;
              puVar8[0x12] = uVar28;
              puVar8[0x13] = uVar28;
              uVar28 = (undefined1)((ulong)uVar27 >> 0x28);
              puVar8[0x14] = uVar28;
              puVar8[0x15] = uVar28;
              puVar8[0x16] = uVar28;
              puVar8[0x17] = uVar28;
              uVar28 = (undefined1)((ulong)uVar27 >> 0x30);
              puVar8[0x18] = uVar28;
              puVar8[0x19] = uVar28;
              puVar8[0x1a] = uVar28;
              puVar8[0x1b] = uVar28;
              uVar28 = (undefined1)((ulong)uVar27 >> 0x38);
              puVar8[0x1c] = uVar28;
              puVar8[0x1d] = uVar28;
              puVar8[0x1e] = uVar28;
              puVar8[0x1f] = uVar28;
              uVar28 = (undefined1)uVar26;
              puVar8[0x20] = uVar28;
              puVar8[0x21] = uVar28;
              puVar8[0x22] = uVar28;
              puVar8[0x23] = uVar28;
              uVar28 = (undefined1)((ulong)uVar26 >> 8);
              puVar8[0x24] = uVar28;
              puVar8[0x25] = uVar28;
              puVar8[0x26] = uVar28;
              puVar8[0x27] = uVar28;
              uVar28 = (undefined1)((ulong)uVar26 >> 0x10);
              puVar8[0x28] = uVar28;
              puVar8[0x29] = uVar28;
              puVar8[0x2a] = uVar28;
              puVar8[0x2b] = uVar28;
              uVar28 = (undefined1)((ulong)uVar26 >> 0x18);
              puVar8[0x2c] = uVar28;
              puVar8[0x2d] = uVar28;
              puVar8[0x2e] = uVar28;
              puVar8[0x2f] = uVar28;
              uVar28 = (undefined1)((ulong)uVar26 >> 0x20);
              puVar8[0x30] = uVar28;
              puVar8[0x31] = uVar28;
              puVar8[0x32] = uVar28;
              puVar8[0x33] = uVar28;
              uVar28 = (undefined1)((ulong)uVar26 >> 0x28);
              puVar8[0x34] = uVar28;
              puVar8[0x35] = uVar28;
              puVar8[0x36] = uVar28;
              puVar8[0x37] = uVar28;
              uVar28 = (undefined1)((ulong)uVar26 >> 0x30);
              puVar8[0x38] = uVar28;
              puVar8[0x39] = uVar28;
              puVar8[0x3a] = uVar28;
              puVar8[0x3b] = uVar28;
              uVar28 = (undefined1)((ulong)uVar26 >> 0x38);
              puVar8[0x3c] = uVar28;
              puVar8[0x3d] = uVar28;
              puVar8[0x3e] = uVar28;
              puVar8[0x3f] = uVar28;
              puVar8 = puVar8 + 0x40;
              uVar17 = uVar17 + 0x10;
            } while (uVar17 < uVar25);
          }
          if ((uVar3 & 0xf) != 0) {
            uVar17 = 0;
            puVar8 = puVar19 + uVar25 * 4 + lVar24 * (long)puVar22;
            do {
              lVar18 = 0;
              do {
                puVar8[lVar18] =
                     *(undefined1 *)
                      (lVar21 + lVar24 * lVar23 + uVar25 + uVar17 +
                      (ulong)*(uint *)((long)&plStack_130 + lVar18 * 4));
                lVar18 = lVar18 + 1;
              } while (lVar18 != 4);
              puVar8 = puVar8 + 4;
              uVar17 = uVar17 + 1;
            } while (uVar17 != ((long)(int)uVar3 & 0xfU));
          }
          lVar24 = lVar24 + 1;
          puVar15 = puVar15 + (long)puVar22;
          lVar14 = lVar14 + lVar23;
        } while (lVar24 != iVar4);
      }
    }
    else {
      ppuVar20 = *pppuVar10;
      puStack_118 = ppuVar20[5];
      plStack_128 = (long *)(long)*(int *)(ppuVar20 + 2);
      plStack_130 = (long *)(long)*(int *)((long)ppuVar20 + 0x14);
      puStack_120 = ppuVar20[3];
      uStack_138 = *(undefined8 *)(lStack_160 + 0x28);
      lStack_148 = (long)*(int *)(lStack_160 + 0x10);
      lStack_150 = (long)*(int *)(lStack_160 + 0x14);
      uStack_140 = *(undefined8 *)(lStack_160 + 0x18);
      FUN_10a19d1cc(&plStack_130,&lStack_150);
    }
    ppuVar20 = pppuVar11[3];
    ppuVar29 = pppuVar11[2];
    extraout_x8[1] = pppuVar11[3];
    *extraout_x8 = ppuVar29;
    if (ppuVar20 != (undefined **)0x0) {
      ppuVar20 = ppuVar20 + 1;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
        if (bVar7) {
          *ppuVar20 = *ppuVar20 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (plStack_158 != (long *)0x0) {
      plVar12 = plStack_158 + 1;
      do {
        lVar21 = *plVar12;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar7) {
          *plVar12 = lVar21 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar21 == 0) {
        (**(code **)(*plStack_158 + 0x10))(plStack_158);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_158);
      }
    }
    return;
  }
  return;
}



/* Entry: 10a1b6928; end: 10a1b6c8f;  */

void FUN_10a1b6928(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  int *param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined1 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined1 uVar21;
  undefined8 uVar22;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_10a1b3670(&lStack_90,param_2 + 0x20);
  plVar19 = (long *)(param_2 + 0x10);
  lVar13 = *plVar19;
  if ((lVar13 == 0) ||
     (*param_5 != *(int *)(lVar13 + 0x10) || param_5[1] != *(int *)(lVar13 + 0x14))) {
    uVar20 = *(undefined8 *)param_5;
    uVar3 = *(undefined4 *)(param_2 + 8);
    plVar7 = (long *)0xa8;
    __Znwm();
    plVar7[1] = 0;
    plVar7[2] = 0;
    plVar8 = plVar7 + 3;
    *plVar7 = (long)&PTR_FUN_110baa4d8;
    FUN_10a1b2c6c(plVar8,uVar20,uVar3,0,1);
    plStack_60 = plVar8;
    plStack_58 = plVar7;
    FUN_10a16b1ec(plVar19,&plStack_60);
    plVar7 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar8 = plStack_58 + 1;
      do {
        lVar13 = *plVar8;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  if (*(int *)(param_2 + 8) - 3U < 2) {
    puVar14 = *(undefined1 **)(*plVar19 + 0x28);
    lVar13 = *(long *)(*plVar19 + 0x18);
    lVar15 = *(long *)(lStack_90 + 0x28);
    uVar1 = *(uint *)(lStack_90 + 0x10);
    iVar2 = *(int *)(lStack_90 + 0x14);
    lVar16 = *(long *)(lStack_90 + 0x18);
    plStack_60 = (long *)0x0;
    plStack_58 = (long *)((ulong)plStack_58 & 0xffffffff00000000);
    if (iVar2 != 0) {
      lVar17 = 0;
      uVar18 = (long)(int)uVar1 & 0xfffffffffffffff0;
      lVar9 = lVar15;
      puVar10 = puVar14;
      do {
        if (0xf < uVar1) {
          uVar11 = 0;
          puVar6 = puVar10;
          do {
            uVar22 = ((undefined8 *)(lVar9 + uVar11))[1];
            uVar20 = *(undefined8 *)(lVar9 + uVar11);
            uVar21 = (undefined1)uVar20;
            *puVar6 = uVar21;
            puVar6[1] = uVar21;
            puVar6[2] = uVar21;
            uVar21 = (undefined1)((ulong)uVar20 >> 8);
            puVar6[3] = uVar21;
            puVar6[4] = uVar21;
            puVar6[5] = uVar21;
            uVar21 = (undefined1)((ulong)uVar20 >> 0x10);
            puVar6[6] = uVar21;
            puVar6[7] = uVar21;
            puVar6[8] = uVar21;
            uVar21 = (undefined1)((ulong)uVar20 >> 0x18);
            puVar6[9] = uVar21;
            puVar6[10] = uVar21;
            puVar6[0xb] = uVar21;
            uVar21 = (undefined1)((ulong)uVar20 >> 0x20);
            puVar6[0xc] = uVar21;
            puVar6[0xd] = uVar21;
            puVar6[0xe] = uVar21;
            uVar21 = (undefined1)((ulong)uVar20 >> 0x28);
            puVar6[0xf] = uVar21;
            puVar6[0x10] = uVar21;
            puVar6[0x11] = uVar21;
            uVar21 = (undefined1)((ulong)uVar20 >> 0x30);
            puVar6[0x12] = uVar21;
            puVar6[0x13] = uVar21;
            puVar6[0x14] = uVar21;
            uVar21 = (undefined1)((ulong)uVar20 >> 0x38);
            puVar6[0x15] = uVar21;
            puVar6[0x16] = uVar21;
            puVar6[0x17] = uVar21;
            uVar21 = (undefined1)uVar22;
            puVar6[0x18] = uVar21;
            puVar6[0x19] = uVar21;
            puVar6[0x1a] = uVar21;
            uVar21 = (undefined1)((ulong)uVar22 >> 8);
            puVar6[0x1b] = uVar21;
            puVar6[0x1c] = uVar21;
            puVar6[0x1d] = uVar21;
            uVar21 = (undefined1)((ulong)uVar22 >> 0x10);
            puVar6[0x1e] = uVar21;
            puVar6[0x1f] = uVar21;
            puVar6[0x20] = uVar21;
            uVar21 = (undefined1)((ulong)uVar22 >> 0x18);
            puVar6[0x21] = uVar21;
            puVar6[0x22] = uVar21;
            puVar6[0x23] = uVar21;
            uVar21 = (undefined1)((ulong)uVar22 >> 0x20);
            puVar6[0x24] = uVar21;
            puVar6[0x25] = uVar21;
            puVar6[0x26] = uVar21;
            uVar21 = (undefined1)((ulong)uVar22 >> 0x28);
            puVar6[0x27] = uVar21;
            puVar6[0x28] = uVar21;
            puVar6[0x29] = uVar21;
            uVar21 = (undefined1)((ulong)uVar22 >> 0x30);
            puVar6[0x2a] = uVar21;
            puVar6[0x2b] = uVar21;
            puVar6[0x2c] = uVar21;
            uVar21 = (undefined1)((ulong)uVar22 >> 0x38);
            puVar6[0x2d] = uVar21;
            puVar6[0x2e] = uVar21;
            puVar6[0x2f] = uVar21;
            puVar6 = puVar6 + 0x30;
            uVar11 = uVar11 + 0x10;
          } while (uVar11 < uVar18);
        }
        if ((uVar1 & 0xf) != 0) {
          uVar11 = 0;
          puVar6 = puVar14 + uVar18 * 3 + lVar17 * lVar13;
          do {
            lVar12 = 0;
            do {
              puVar6[lVar12] =
                   *(undefined1 *)
                    (lVar15 + lVar17 * lVar16 + uVar18 + uVar11 +
                    (ulong)*(uint *)((long)&plStack_60 + lVar12 * 4));
              lVar12 = lVar12 + 1;
            } while (lVar12 != 3);
            puVar6 = puVar6 + 3;
            uVar11 = uVar11 + 1;
          } while (uVar11 != ((long)(int)uVar1 & 0xfU));
        }
        lVar17 = lVar17 + 1;
        puVar10 = puVar10 + lVar13;
        lVar9 = lVar9 + lVar16;
      } while (lVar17 != iVar2);
    }
  }
  else if (*(int *)(param_2 + 8) == 2) {
    puVar14 = *(undefined1 **)(*plVar19 + 0x28);
    lVar13 = *(long *)(*plVar19 + 0x18);
    lVar15 = *(long *)(lStack_90 + 0x28);
    uVar1 = *(uint *)(lStack_90 + 0x10);
    iVar2 = *(int *)(lStack_90 + 0x14);
    lVar16 = *(long *)(lStack_90 + 0x18);
    plStack_60 = (long *)0x0;
    plStack_58 = (long *)0x0;
    if (iVar2 != 0) {
      lVar17 = 0;
      uVar18 = (long)(int)uVar1 & 0xfffffffffffffff0;
      lVar9 = lVar15;
      puVar10 = puVar14;
      do {
        if (0xf < uVar1) {
          uVar11 = 0;
          puVar6 = puVar10;
          do {
            uVar22 = ((undefined8 *)(lVar9 + uVar11))[1];
            uVar20 = *(undefined8 *)(lVar9 + uVar11);
            uVar21 = (undefined1)uVar20;
            *puVar6 = uVar21;
            puVar6[1] = uVar21;
            puVar6[2] = uVar21;
            puVar6[3] = uVar21;
            uVar21 = (undefined1)((ulong)uVar20 >> 8);
            puVar6[4] = uVar21;
            puVar6[5] = uVar21;
            puVar6[6] = uVar21;
            puVar6[7] = uVar21;
            uVar21 = (undefined1)((ulong)uVar20 >> 0x10);
            puVar6[8] = uVar21;
            puVar6[9] = uVar21;
            puVar6[10] = uVar21;
            puVar6[0xb] = uVar21;
            uVar21 = (undefined1)((ulong)uVar20 >> 0x18);
            puVar6[0xc] = uVar21;
            puVar6[0xd] = uVar21;
            puVar6[0xe] = uVar21;
            puVar6[0xf] = uVar21;
            uVar21 = (undefined1)((ulong)uVar20 >> 0x20);
            puVar6[0x10] = uVar21;
            puVar6[0x11] = uVar21;
            puVar6[0x12] = uVar21;
            puVar6[0x13] = uVar21;
            uVar21 = (undefined1)((ulong)uVar20 >> 0x28);
            puVar6[0x14] = uVar21;
            puVar6[0x15] = uVar21;
            puVar6[0x16] = uVar21;
            puVar6[0x17] = uVar21;
            uVar21 = (undefined1)((ulong)uVar20 >> 0x30);
            puVar6[0x18] = uVar21;
            puVar6[0x19] = uVar21;
            puVar6[0x1a] = uVar21;
            puVar6[0x1b] = uVar21;
            uVar21 = (undefined1)((ulong)uVar20 >> 0x38);
            puVar6[0x1c] = uVar21;
            puVar6[0x1d] = uVar21;
            puVar6[0x1e] = uVar21;
            puVar6[0x1f] = uVar21;
            uVar21 = (undefined1)uVar22;
            puVar6[0x20] = uVar21;
            puVar6[0x21] = uVar21;
            puVar6[0x22] = uVar21;
            puVar6[0x23] = uVar21;
            uVar21 = (undefined1)((ulong)uVar22 >> 8);
            puVar6[0x24] = uVar21;
            puVar6[0x25] = uVar21;
            puVar6[0x26] = uVar21;
            puVar6[0x27] = uVar21;
            uVar21 = (undefined1)((ulong)uVar22 >> 0x10);
            puVar6[0x28] = uVar21;
            puVar6[0x29] = uVar21;
            puVar6[0x2a] = uVar21;
            puVar6[0x2b] = uVar21;
            uVar21 = (undefined1)((ulong)uVar22 >> 0x18);
            puVar6[0x2c] = uVar21;
            puVar6[0x2d] = uVar21;
            puVar6[0x2e] = uVar21;
            puVar6[0x2f] = uVar21;
            uVar21 = (undefined1)((ulong)uVar22 >> 0x20);
            puVar6[0x30] = uVar21;
            puVar6[0x31] = uVar21;
            puVar6[0x32] = uVar21;
            puVar6[0x33] = uVar21;
            uVar21 = (undefined1)((ulong)uVar22 >> 0x28);
            puVar6[0x34] = uVar21;
            puVar6[0x35] = uVar21;
            puVar6[0x36] = uVar21;
            puVar6[0x37] = uVar21;
            uVar21 = (undefined1)((ulong)uVar22 >> 0x30);
            puVar6[0x38] = uVar21;
            puVar6[0x39] = uVar21;
            puVar6[0x3a] = uVar21;
            puVar6[0x3b] = uVar21;
            uVar21 = (undefined1)((ulong)uVar22 >> 0x38);
            puVar6[0x3c] = uVar21;
            puVar6[0x3d] = uVar21;
            puVar6[0x3e] = uVar21;
            puVar6[0x3f] = uVar21;
            puVar6 = puVar6 + 0x40;
            uVar11 = uVar11 + 0x10;
          } while (uVar11 < uVar18);
        }
        if ((uVar1 & 0xf) != 0) {
          uVar11 = 0;
          puVar6 = puVar14 + uVar18 * 4 + lVar17 * lVar13;
          do {
            lVar12 = 0;
            do {
              puVar6[lVar12] =
                   *(undefined1 *)
                    (lVar15 + lVar17 * lVar16 + uVar18 + uVar11 +
                    (ulong)*(uint *)((long)&plStack_60 + lVar12 * 4));
              lVar12 = lVar12 + 1;
            } while (lVar12 != 4);
            puVar6 = puVar6 + 4;
            uVar11 = uVar11 + 1;
          } while (uVar11 != ((long)(int)uVar1 & 0xfU));
        }
        lVar17 = lVar17 + 1;
        puVar10 = puVar10 + lVar13;
        lVar9 = lVar9 + lVar16;
      } while (lVar17 != iVar2);
    }
  }
  else {
    lVar13 = *plVar19;
    uStack_48 = *(undefined8 *)(lVar13 + 0x28);
    plStack_58 = (long *)(long)*(int *)(lVar13 + 0x10);
    plStack_60 = (long *)(long)*(int *)(lVar13 + 0x14);
    uStack_50 = *(undefined8 *)(lVar13 + 0x18);
    uStack_68 = *(undefined8 *)(lStack_90 + 0x28);
    lStack_78 = (long)*(int *)(lStack_90 + 0x10);
    lStack_80 = (long)*(int *)(lStack_90 + 0x14);
    uStack_70 = *(undefined8 *)(lStack_90 + 0x18);
    FUN_10a19d1cc(&plStack_60,&lStack_80);
  }
  lVar13 = *(long *)(param_2 + 0x18);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = *(undefined8 *)(param_2 + 0x18);
  *param_1 = uVar20;
  if (lVar13 != 0) {
    plVar19 = (long *)(lVar13 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *plVar19 = *plVar19 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plStack_88 != (long *)0x0) {
    plVar19 = plStack_88 + 1;
    do {
      lVar13 = *plVar19;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *plVar19 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  return;
}



/* Entry: 10a1b6c90; end: 10a1b6deb;  */

void FUN_10a1b6c90(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  int *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_10a1b3670(&lStack_60,param_2 + 8);
  plVar5 = (long *)(param_2 + 0x38);
  lVar4 = *plVar5;
  if ((lVar4 == 0) || (*param_5 != *(int *)(lVar4 + 0x10) || param_5[1] != *(int *)(lVar4 + 0x14)))
  {
    FUN_10a1ba8d8(&lStack_50,*(undefined8 *)param_5,9,0,1);
    FUN_10a16b1ec(plVar5,&lStack_50);
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
      }
    }
    lVar4 = *plVar5;
  }
  uStack_38 = *(undefined8 *)(lStack_60 + 0x28);
  plStack_48 = (long *)(long)*(int *)(lStack_60 + 0x10);
  lStack_50 = (long)*(int *)(lStack_60 + 0x14);
  uStack_40 = *(undefined8 *)(lStack_60 + 0x18);
  FUN_10a1bb3c0(*(undefined8 *)(lVar4 + 0x18),*(undefined8 *)(lVar4 + 0x28),&lStack_50,0x100000000);
  lVar4 = *(long *)(param_2 + 0x40);
  uVar6 = *(undefined8 *)(param_2 + 0x38);
  param_1[1] = *(undefined8 *)(param_2 + 0x40);
  *param_1 = uVar6;
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (plStack_58 != (long *)0x0) {
    plVar5 = plStack_58 + 1;
    do {
      lVar4 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  return;
}



/* Entry: 10a1b6dec; end: 10a1b6f23;  */

byte FUN_10a1b6dec(long param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  
  bVar3 = 0;
  uVar2 = (uint)param_1;
  if ((int)uVar2 < 9) {
    if (uVar2 - 1 < 6) {
      if (param_2[1] == 1) {
        FUN_10ad4ae18();
        bVar3 = *(byte *)(param_1 + 0x28);
      }
      else {
        bVar3 = *param_2 >> 1 & 1;
      }
    }
    else if (uVar2 - 7 < 2) {
      if (param_2[1] == 1) {
        FUN_10ad4ae18();
        bVar3 = *(byte *)(param_1 + 0x2a);
      }
      else {
        bVar3 = *param_2 >> 3 & 1;
      }
    }
    else if (uVar2 == 0) {
      if (param_2[1] == 1) {
        FUN_10ad4ae18();
        bVar3 = *(byte *)(param_1 + 0x27);
      }
      else {
        bVar3 = *param_2 & 1;
      }
    }
  }
  else if (uVar2 < 0x17) {
    uVar1 = 1 << (ulong)(uVar2 & 0x1f);
    if ((uVar1 & 0x7fe000) == 0) {
      if ((uVar1 & 0x600) == 0) {
        if ((1 << (ulong)(uVar2 & 0x1f) & 0x1800U) != 0) {
          if (param_2[1] == 1) {
            FUN_10ad4ae18();
            bVar3 = *(byte *)(param_1 + 0x29);
          }
          else {
            bVar3 = *param_2 >> 2 & 1;
          }
        }
      }
      else if (param_2[1] == 1) {
        FUN_10ad4ae18();
        bVar3 = *(byte *)(param_1 + 0x2b);
      }
      else {
        bVar3 = *param_2 >> 4 & 1;
      }
    }
    else if ((param_2[1] & 1) == 0) {
      bVar3 = *param_2 >> 5 & 1;
    }
    else {
      bVar3 = 0;
    }
  }
  return bVar3 & 1;
}



/* Entry: 10a1b6f24; end: 10a1b70c7;  */

bool FUN_10a1b6f24(undefined4 param_1,ulong param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    if (param_4 == 0) {
      return false;
    }
    if (param_2 + 3 < 4) {
      return false;
    }
    if (param_3 + 3U < 4) {
      return false;
    }
    param_4 = param_4 >> 3;
    goto code_r0x00010a1b6fac;
  case 5:
  case 6:
    if (param_4 == 0) {
      return false;
    }
    if (param_2 + 3 < 4) {
      return false;
    }
    if (param_3 + 3U < 4) {
      return false;
    }
    param_4 = param_4 >> 4;
code_r0x00010a1b6fac:
    uVar3 = param_3 + 3U >> 2;
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = param_4 / uVar3;
    }
    return param_2 + 3 >> 2 <= uVar1;
  case 7:
  case 8:
    uVar2 = 0x38;
    break;
  case 9:
    uVar2 = 0x39;
    break;
  case 10:
    uVar2 = 0x3a;
    break;
  case 0xb:
    uVar2 = 0x3b;
    break;
  case 0xc:
    uVar2 = 0x3c;
    break;
  case 0xd:
    uVar2 = 0x3f;
    break;
  case 0xe:
    uVar2 = 0x40;
    break;
  case 0xf:
    uVar2 = 0x43;
    break;
  case 0x10:
    uVar2 = 0x44;
    break;
  case 0x11:
    uVar2 = 0x49;
    break;
  case 0x12:
    uVar2 = 0x4a;
    break;
  case 0x13:
    uVar2 = 0x51;
    break;
  case 0x14:
    uVar2 = 0x52;
    break;
  case 0x15:
    uVar2 = 0x55;
    break;
  case 0x16:
    uVar2 = 0x56;
    break;
  default:
    return false;
  }
  FUN_109fc8e58(param_2,param_3,uVar2);
  return param_2 == param_4;
}



/* Entry: 10a1b70c8; end: 10a1b7633;  */

void FUN_10a1b70c8(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined **ppuVar3;
  
  *param_1 = 0;
  switch(param_2) {
  case 0:
  case 1:
  case 2:
    puVar1 = (undefined8 *)0x68;
    __Znwm();
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    puVar1[3] = FUN_109cdbc70;
    puVar1[4] = &PTR_DAT_110950c70;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    ppuVar3 = &PTR_FUN_110babf60;
    goto code_r0x00010a1b71cc;
  case 3:
  case 4:
    puVar1 = (undefined8 *)0x68;
    __Znwm();
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    puVar1[3] = FUN_109cdbc70;
    puVar1[4] = &PTR_DAT_110950c70;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    ppuVar3 = &PTR_FUN_110babfc8;
    goto code_r0x00010a1b71cc;
  case 5:
  case 6:
    puVar1 = (undefined8 *)0x68;
    __Znwm();
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    puVar1[3] = FUN_109cdbc70;
    puVar1[4] = &PTR_DAT_110950c70;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    ppuVar3 = &PTR_FUN_110bac030;
code_r0x00010a1b71cc:
    *puVar1 = ppuVar3;
    goto code_r0x00010a1b75d4;
  case 7:
    puVar1 = (undefined8 *)0x70;
    __Znwm();
    puVar1[2] = 0xffffffff;
    puVar1[1] = 0;
    puVar1[3] = FUN_109cdbc70;
    puVar1[4] = &PTR_DAT_110950c70;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *puVar1 = &PTR_FUN_110babb18;
    uVar2 = 0x37;
    break;
  case 8:
    puVar1 = (undefined8 *)0x70;
    __Znwm();
    puVar1[2] = 0xffffffff;
    puVar1[1] = 0;
    puVar1[3] = FUN_109cdbc70;
    puVar1[4] = &PTR_DAT_110950c70;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *puVar1 = &PTR_FUN_110babb18;
    uVar2 = 0x38;
    break;
  case 9:
    puVar1 = (undefined8 *)0x70;
    __Znwm();
    puVar1[2] = 0xffffffff;
    puVar1[1] = 0;
    puVar1[3] = FUN_109cdbc70;
    puVar1[4] = &PTR_DAT_110950c70;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *puVar1 = &PTR_FUN_110babb18;
    uVar2 = 0x39;
    break;
  case 10:
    puVar1 = (undefined8 *)0x70;
    __Znwm();
    puVar1[2] = 0xffffffff;
    puVar1[1] = 0;
    puVar1[3] = FUN_109cdbc70;
    puVar1[4] = &PTR_DAT_110950c70;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *puVar1 = &PTR_FUN_110babb18;
    uVar2 = 0x3a;
    break;
  case 0xb:
    puVar1 = (undefined8 *)0x70;
    __Znwm();
    puVar1[2] = 0xffffffff;
    puVar1[1] = 0;
    puVar1[3] = FUN_109cdbc70;
    puVar1[4] = &PTR_DAT_110950c70;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *puVar1 = &PTR_FUN_110babb18;
    uVar2 = 0x3b;
    break;
  case 0xc:
    puVar1 = (undefined8 *)0x70;
    __Znwm();
    puVar1[2] = 0xffffffff;
    puVar1[1] = 0;
    puVar1[3] = FUN_109cdbc70;
    puVar1[4] = &PTR_DAT_110950c70;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *puVar1 = &PTR_FUN_110babb18;
    uVar2 = 0x3c;
    break;
  case 0xd:
    puVar1 = (undefined8 *)0x70;
    __Znwm();
    puVar1[2] = 0xffffffff;
    puVar1[1] = 0;
    puVar1[3] = FUN_109cdbc70;
    puVar1[4] = &PTR_DAT_110950c70;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *puVar1 = &PTR_FUN_110babb18;
    uVar2 = 0x3f;
    break;
  case 0xe:
    puVar1 = (undefined8 *)0x70;
    __Znwm();
    puVar1[2] = 0xffffffff;
    puVar1[1] = 0;
    puVar1[3] = FUN_109cdbc70;
    puVar1[4] = &PTR_DAT_110950c70;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *puVar1 = &PTR_FUN_110babb18;
    uVar2 = 0x40;
    break;
  case 0xf:
    puVar1 = (undefined8 *)0x70;
    __Znwm();
    puVar1[2] = 0xffffffff;
    puVar1[1] = 0;
    puVar1[3] = FUN_109cdbc70;
    puVar1[4] = &PTR_DAT_110950c70;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *puVar1 = &PTR_FUN_110babb18;
    uVar2 = 0x43;
    break;
  case 0x10:
    puVar1 = (undefined8 *)0x70;
    __Znwm();
    puVar1[2] = 0xffffffff;
    puVar1[1] = 0;
    puVar1[3] = FUN_109cdbc70;
    puVar1[4] = &PTR_DAT_110950c70;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *puVar1 = &PTR_FUN_110babb18;
    uVar2 = 0x44;
    break;
  case 0x11:
    puVar1 = (undefined8 *)0x70;
    __Znwm();
    puVar1[2] = 0xffffffff;
    puVar1[1] = 0;
    puVar1[3] = FUN_109cdbc70;
    puVar1[4] = &PTR_DAT_110950c70;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *puVar1 = &PTR_FUN_110babb18;
    uVar2 = 0x49;
    break;
  case 0x12:
    puVar1 = (undefined8 *)0x70;
    __Znwm();
    puVar1[2] = 0xffffffff;
    puVar1[1] = 0;
    puVar1[3] = FUN_109cdbc70;
    puVar1[4] = &PTR_DAT_110950c70;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *puVar1 = &PTR_FUN_110babb18;
    uVar2 = 0x4a;
    break;
  case 0x13:
    puVar1 = (undefined8 *)0x70;
    __Znwm();
    puVar1[2] = 0xffffffff;
    puVar1[1] = 0;
    puVar1[3] = FUN_109cdbc70;
    puVar1[4] = &PTR_DAT_110950c70;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *puVar1 = &PTR_FUN_110babb18;
    uVar2 = 0x51;
    break;
  case 0x14:
    puVar1 = (undefined8 *)0x70;
    __Znwm();
    puVar1[2] = 0xffffffff;
    puVar1[1] = 0;
    puVar1[3] = FUN_109cdbc70;
    puVar1[4] = &PTR_DAT_110950c70;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *puVar1 = &PTR_FUN_110babb18;
    uVar2 = 0x52;
    break;
  case 0x15:
    puVar1 = (undefined8 *)0x70;
    __Znwm();
    puVar1[2] = 0xffffffff;
    puVar1[1] = 0;
    puVar1[3] = FUN_109cdbc70;
    puVar1[4] = &PTR_DAT_110950c70;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *puVar1 = &PTR_FUN_110babb18;
    uVar2 = 0x55;
    break;
  case 0x16:
    puVar1 = (undefined8 *)0x70;
    __Znwm();
    puVar1[2] = 0xffffffff;
    puVar1[1] = 0;
    puVar1[3] = FUN_109cdbc70;
    puVar1[4] = &PTR_DAT_110950c70;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *puVar1 = &PTR_FUN_110babb18;
    uVar2 = 0x56;
    break;
  default:
    goto LAB_10a1b75d8;
  }
  *(undefined4 *)(puVar1 + 0xd) = uVar2;
  *(undefined4 *)((long)puVar1 + 0x6c) = param_3;
code_r0x00010a1b75d4:
  *param_1 = puVar1;
LAB_10a1b75d8:
  return;
}



/* Entry: 10a1b7634; end: 10a1b76df;  */

void FUN_10a1b7634(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                  undefined **param_5)

{
  code *pcVar1;
  undefined ***pppuVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined ***pppuVar5;
  undefined1 auStack_b8 [24];
  undefined8 uStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = 0x109d138c8;
  ppuStack_60 = &PTR_DAT_110b3e838;
  pcStack_58 = FUN_10a1b77f8;
  puVar4 = &uStack_68;
  ppuVar3 = (undefined **)0x0;
  FUN_10a1b76e0();
  pppuVar2 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume();
  *(undefined4 *)(pppuVar2 + 1) = param_2;
  *(undefined4 *)((long)pppuVar2 + 0xc) = param_3;
  *(undefined4 *)(pppuVar2 + 2) = *param_4;
  pppuVar2[0xc] = param_5;
  if ((pppuVar2[0xb] != (undefined **)0x0) && (*(char *)(pppuVar2[4] + 1) == '\x01')) {
    (*(code *)pppuVar2[3])();
  }
  pppuVar2[0xb] = (undefined **)0x0;
  if (ppuVar3 == (undefined **)0x0) {
    _malloc();
    pppuVar5 = pppuVar2 + 4;
    pppuVar2[0xb] = param_5;
    pppuVar2[3] = (undefined **)0x109d138c8;
    (*(code *)**pppuVar5)(pppuVar5);
    *pppuVar5 = &PTR_DAT_110b3e838;
    pppuVar2[5] = (undefined **)FUN_10a1b77f8;
  }
  else {
    pppuVar2[0xb] = ppuVar3;
    pppuVar2[3] = (undefined **)*puVar4;
    func_0x0001092b2a94(pppuVar2 + 4,puVar4 + 1);
  }
  if (pppuVar2[0xb] != (undefined **)0x0) {
    return;
  }
  FUN_10a0ee900(auStack_b8,&UNK_10f642a20,0x38);
  FUN_10a1ba720(auStack_b8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1b77dc);
  (*pcVar1)();
}



/* Entry: 10a1b76e0; end: 10a1b77f7;  */

void FUN_10a1b76e0(long param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                  undefined8 param_5,long param_6,undefined8 *param_7)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [24];
  
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 0x10) = *param_4;
  *(undefined8 *)(param_1 + 0x60) = param_5;
  if ((*(long *)(param_1 + 0x58) != 0) && (*(char *)(*(long *)(param_1 + 0x20) + 8) == '\x01')) {
    (**(code **)(param_1 + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (param_6 == 0) {
    _malloc();
    puVar2 = (undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x58) = param_5;
    *(undefined8 *)(param_1 + 0x18) = 0x109d138c8;
    (**(code **)*puVar2)(puVar2);
    *puVar2 = &PTR_DAT_110b3e838;
    *(code **)(param_1 + 0x28) = FUN_10a1b77f8;
  }
  else {
    *(long *)(param_1 + 0x58) = param_6;
    *(undefined8 *)(param_1 + 0x18) = *param_7;
    func_0x0001092b2a94(param_1 + 0x20,param_7 + 1);
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    return;
  }
  FUN_10a0ee900(auStack_48,&UNK_10f642a20,0x38);
  FUN_10a1ba720(auStack_48);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1b77dc);
  (*pcVar1)();
}



/* Entry: 10a1b77f8; end: 10a1b77fb;  */

void FUN_10a1b77f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)();
  return;
}



/* Entry: 10a1b77fc; end: 10a1b7863;  */

undefined8 * FUN_10a1b77fc(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_110baba78;
  if ((param_1[0xb] != 0) && (*(char *)(param_1[4] + 8) == '\x01')) {
    (*(code *)param_1[3])();
  }
  param_1[0xb] = 0;
  (**(code **)param_1[4])();
  return param_1;
}



/* Entry: 10a1b7864; end: 10a1b78c7;  */

int FUN_10a1b7864(long *param_1,int param_2)

{
  (**(code **)(*param_1 + 0x38))();
  return (int)param_1 * (param_2 + 3 >> 2);
}



/* Entry: 10a1b78c8; end: 10a1b7a7b;  */

void FUN_10a1b78c8(long *param_1,long param_2,long param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6,ulong param_7,ulong param_8)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x10))(param_1,param_4);
  plVar3 = param_1;
  (**(code **)(*param_1 + 0x18))(param_1,param_4,param_5 >> 0x20);
  plVar4 = param_1;
  (**(code **)(*param_1 + 0x10))(param_1,param_5);
  plVar5 = param_1;
  (**(code **)(*param_1 + 0x10))(param_1,param_6);
  plVar6 = param_1;
  (**(code **)(*param_1 + 0x18))(param_1,param_6,param_7 >> 0x20);
  plVar7 = param_1;
  (**(code **)(*param_1 + 0x10))(param_1,param_7);
  iVar8 = (int)(param_8 >> 0x20);
  iVar10 = (int)param_8;
  if ((param_8 >> 0x20 == 0) && (iVar10 == 0)) {
    iVar8 = (int)param_4 - (int)param_5;
    iVar1 = (int)param_6 - (int)param_7;
    if (iVar8 <= iVar1) {
      iVar1 = iVar8;
    }
    iVar8 = (int)((ulong)param_4 >> 0x20) - (int)(param_5 >> 0x20);
  }
  else {
    iVar1 = (int)param_6 - (int)param_7;
    if (iVar10 <= iVar1) {
      iVar1 = iVar10;
    }
  }
  iVar10 = (int)((ulong)param_6 >> 0x20) - (int)(param_7 >> 0x20);
  if (iVar8 <= iVar10) {
    iVar10 = iVar8;
  }
  (**(code **)(*param_1 + 0x10))(param_1,iVar1);
  if (0 < iVar10) {
    uVar9 = (ulong)(iVar10 + 3U >> 2);
    param_2 = param_2 + ((int)plVar7 + (int)plVar6);
    param_3 = param_3 + ((int)plVar4 + (int)plVar3);
    do {
      _memcpy(param_2,param_3,(long)(int)param_1);
      param_3 = param_3 + (int)plVar2;
      param_2 = param_2 + (int)plVar5;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}



/* Entry: 10a1b7a7c; end: 10a1b7b13;  */

int FUN_10a1b7a7c(undefined8 param_1,int param_2,int param_3)

{
  ulong uVar1;
  
  if (param_2 <= param_3) {
    param_3 = param_2;
  }
  uVar1 = (long)param_3 | (ulong)(long)param_3 >> 1;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 8;
  uVar1 = uVar1 | uVar1 >> 0x10;
  return (byte)(&UNK_10e49bc40)[(uVar1 | uVar1 >> 0x20) * 0x3f6eaf2cd271461 >> 0x3a] - 2;
}



/* Entry: 10a1b7b14; end: 10a1b7ce3;  */

void FUN_10a1b7b14(long *param_1,long param_2,long param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6,ulong param_7,ulong param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  int iVar13;
  
  plVar5 = param_1;
  (**(code **)(*param_1 + 0x10))(param_1,param_4);
  plVar6 = param_1;
  (**(code **)(*param_1 + 0x18))(param_1,param_4,param_5 >> 0x20);
  plVar7 = param_1;
  (**(code **)(*param_1 + 0x10))(param_1,param_5);
  plVar8 = param_1;
  (**(code **)(*param_1 + 0x10))(param_1,param_6);
  plVar9 = param_1;
  (**(code **)(*param_1 + 0x18))(param_1,param_6,param_7 >> 0x20);
  plVar10 = param_1;
  (**(code **)(*param_1 + 0x10))(param_1,param_7);
  iVar13 = (int)(param_8 >> 0x20);
  iVar4 = (int)param_8;
  if ((param_8 >> 0x20 == 0) && (iVar4 == 0)) {
    iVar13 = (int)param_4 - (int)param_5;
    iVar2 = (int)param_6 - (int)param_7;
    if (iVar13 <= iVar2) {
      iVar2 = iVar13;
    }
    iVar13 = (int)((ulong)param_4 >> 0x20) - (int)(param_5 >> 0x20);
  }
  else {
    iVar2 = (int)param_6 - (int)param_7;
    if (iVar4 <= iVar2) {
      iVar2 = iVar4;
    }
  }
  plVar11 = param_1;
  (**(code **)(*param_1 + 0x10))(param_1,iVar2);
  iVar4 = (int)plVar11;
  if (0 < iVar4) {
    iVar3 = (int)((ulong)param_6 >> 0x20) - (int)(param_7 >> 0x20);
    if (iVar13 <= iVar3) {
      iVar3 = iVar13;
    }
    (**(code **)(*param_1 + 0x18))(param_1,iVar2,iVar3);
    uVar1 = 0;
    if (iVar4 != 0) {
      uVar1 = (int)param_1 / iVar4;
    }
    uVar12 = (ulong)uVar1;
    if (0 < (int)uVar1) {
      param_2 = param_2 + ((int)plVar10 + (int)plVar9);
      param_3 = param_3 + ((int)plVar7 + (int)plVar6);
      do {
        _memcpy(param_2,param_3,(ulong)plVar11 & 0xffffffff);
        param_3 = param_3 + (int)plVar5;
        param_2 = param_2 + (int)plVar8;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  return;
}



/* Entry: 10a1b7ce4; end: 10a1b7ceb;  */

undefined4 FUN_10a1b7ce4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x6c);
}



/* Entry: 10a1b7cec; end: 10a1b7d5b;  */

ulong FUN_10a1b7cec(long param_1,ulong param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  
  ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_1 + 0x68) * 4;
  if (0x56 < *(uint *)(param_1 + 0x68)) {
    ppuVar1 = &PTR_DAT_110ae4700;
  }
  if (*(byte *)((long)ppuVar1 + 0x1a) != 0) {
    bVar2 = *(byte *)(ppuVar1 + 3);
    uVar3 = 0;
    if (bVar2 != 0) {
      uVar3 = (((int)param_2 + (uint)bVar2) - 1) / (uint)bVar2;
    }
    return (ulong)(uVar3 * *(byte *)((long)ppuVar1 + 0x1a));
  }
  puVar4 = &UNK_10f62e152;
  func_0x000109243bf8();
  FUN_109fc8e58(param_2,param_3,*(undefined4 *)(puVar4 + 0x68));
  return param_2;
}



/* Entry: 10a1b7d5c; end: 10a1b7d63;  */

undefined8 FUN_10a1b7d5c(void)

{
  return 0;
}



/* Entry: 10a1b7d64; end: 10a1b7edf;  */

uint * FUN_10a1b7d64(uint *param_1,uint *param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  bool bVar1;
  code *pcVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  uint *puVar14;
  uint *puVar15;
  ulong uVar16;
  uint *puVar17;
  undefined1 auStack_88 [24];
  
  uVar5 = (undefined4)((ulong)param_5 >> 0x20);
  iVar4 = (int)param_5;
  uVar13 = param_3 >> 0x20;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar6 = (uint)(param_4 - param_3);
  uVar11 = (uint)(param_3 >> 0x20);
  uVar12 = (int)(param_4 >> 0x20) - uVar11;
  param_1[4] = 0;
  param_1[5] = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if (((long)(int)uVar12 & 0x8000000000000000U) == 0 && (param_4 - param_3 & 0x80000000) == 0) {
    if ((uVar6 < 0x4001) && (uVar12 < 0x4001)) {
      uVar9 = uVar12;
      uVar7 = uVar6;
      if (iVar4 != 0) {
        uVar7 = (uint)param_3 & ((int)(uint)param_3 >> 0x1f ^ 0xffffffffU);
        param_3 = (ulong)uVar7;
        uVar11 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
        uVar13 = (ulong)uVar11;
        uVar7 = *param_2 - uVar7;
        if ((int)uVar6 <= (int)uVar7) {
          uVar7 = uVar6;
        }
        uVar9 = param_2[1] - uVar11;
        if ((int)uVar12 <= (int)uVar9) {
          uVar9 = uVar12;
        }
      }
      uVar11 = (uint)param_3;
      uVar12 = (uint)uVar13;
      uVar6 = param_2[5];
      if ((uVar6 < 0x17) && ((1 << (ulong)(uVar6 & 0x1f) & 0x600500U) != 0)) {
        uVar7 = (uVar11 & 1) + uVar7 & 0xfffffffe;
        uVar9 = (uVar12 & 1) + uVar9 & 0xfffffffe;
        uVar11 = uVar11 & 0xfffffffe;
        uVar12 = uVar12 & 0xfffffffe;
        if ((uVar6 < 0x17) && ((1 << (ulong)(uVar6 & 0x1f) & 0x400500U) != 0)) {
          uVar13 = *(long *)(param_2 + 2) * ((long)(uVar13 << 0x20) >> 0x21) + (long)(int)uVar11;
          lVar8 = 0;
          if (uVar13 <= *(ulong *)(param_2 + 10)) {
            lVar8 = *(ulong *)(param_2 + 10) - uVar13;
          }
          *(ulong *)(param_1 + 8) = *(long *)(param_2 + 8) + uVar13;
          *(long *)(param_1 + 10) = lVar8;
        }
      }
      *param_1 = uVar7;
      param_1[1] = uVar9;
      *(ulong *)(param_1 + 6) =
           *(long *)(param_2 + 6) + *(long *)(param_2 + 2) * (long)(int)uVar12 +
           (ulong)(param_2[4] * uVar11 << ((uVar6 & 0xfffffffb) == 0xb));
      FUN_10a1b2a5c(param_1);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      return param_1;
    }
  }
  else {
    FUN_10a0ee06c(&UNK_10f642b5c);
  }
  puVar3 = (uint *)&UNK_10f642b89;
  FUN_10a0ee06c();
  if ((puVar3 != (uint *)0x0) && (param_2 != (uint *)0x0)) {
    uVar16 = CONCAT44(uVar5,iVar4);
    uVar13 = param_4;
    if (param_3 <= param_4) {
      uVar13 = param_3;
    }
    if (puVar3 == param_2) {
      if (param_3 < param_4) {
        puVar14 = puVar3;
        if (0 < iVar4) {
          do {
            puVar3 = puVar14;
            _memmove(puVar14,param_2,uVar13);
            puVar14 = (uint *)((long)puVar14 + param_3);
            param_2 = (uint *)((long)param_2 + param_4);
            uVar11 = (int)uVar16 - 1;
            uVar16 = (ulong)uVar11;
          } while (uVar11 != 0);
        }
      }
      else if (param_4 < param_3) {
        lVar8 = (uVar16 - 1) * param_3;
        lVar10 = (uVar16 - 1) * param_4;
        if (lVar8 - lVar10 != 0 && lVar10 <= lVar8) {
          puVar14 = (uint *)((long)puVar3 + lVar10);
          puVar17 = (uint *)((long)puVar3 + lVar8);
          puVar15 = (uint *)((long)puVar3 + param_3 * (uVar16 - 2));
          do {
            puVar3 = puVar17;
            _memmove(puVar17,puVar14,uVar13);
            puVar17 = (uint *)((long)puVar17 + -param_3);
            puVar14 = (uint *)((long)puVar14 - param_4);
            bVar1 = puVar14 < puVar15;
            puVar15 = (uint *)((long)puVar15 + -param_3);
          } while (bVar1);
        }
      }
    }
    else {
      if (param_3 == param_4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)(puVar3,param_2,uVar16 * param_4);
        return puVar3;
      }
      puVar14 = puVar3;
      if (0 < iVar4) {
        do {
          puVar3 = puVar14;
          _memcpy(puVar14,param_2,uVar13);
          puVar14 = (uint *)((long)puVar14 + param_3);
          param_2 = (uint *)((long)param_2 + param_4);
          uVar11 = (int)uVar16 - 1;
          uVar16 = (ulong)uVar11;
        } while (uVar11 != 0);
      }
    }
    return puVar3;
  }
  FUN_10a0ee900(auStack_88,&UNK_10f642a59,0x4a);
  FUN_10a0029c0(auStack_88);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a1b8050);
  (*pcVar2)();
}



/* Entry: 10a1b7ee0; end: 10a1b806b;  */

void FUN_10a1b7ee0(long param_1,long param_2,ulong param_3,ulong param_4,ulong param_5)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_68 [24];
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar2 = param_4;
    if (param_3 <= param_4) {
      uVar2 = param_3;
    }
    if (param_1 == param_2) {
      if (param_3 < param_4) {
        if (0 < (int)param_5) {
          do {
            _memmove(param_1,param_2,uVar2);
            param_1 = param_1 + param_3;
            param_2 = param_2 + param_4;
            uVar3 = (int)param_5 - 1;
            param_5 = (ulong)uVar3;
          } while (uVar3 != 0);
        }
      }
      else if (param_4 < param_3) {
        lVar5 = (param_5 - 1) * param_3;
        lVar6 = (param_5 - 1) * param_4;
        if (lVar5 - lVar6 != 0 && lVar6 <= lVar5) {
          uVar8 = param_1 + lVar6;
          lVar5 = param_1 + lVar5;
          uVar7 = param_1 + param_3 * (param_5 - 2);
          do {
            _memmove(lVar5,uVar8,uVar2);
            lVar5 = lVar5 + -param_3;
            uVar8 = uVar8 - param_4;
            bVar1 = uVar8 < uVar7;
            uVar7 = uVar7 + -param_3;
          } while (bVar1);
        }
      }
    }
    else {
      if (param_3 == param_4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)(param_1,param_2,param_5 * param_4);
        return;
      }
      if (0 < (int)param_5) {
        do {
          _memcpy(param_1,param_2,uVar2);
          param_1 = param_1 + param_3;
          param_2 = param_2 + param_4;
          uVar3 = (int)param_5 - 1;
          param_5 = (ulong)uVar3;
        } while (uVar3 != 0);
      }
    }
    return;
  }
  FUN_10a0ee900(auStack_68,&UNK_10f642a59,0x4a);
  FUN_10a0029c0(auStack_68);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1b8050);
  (*pcVar4)();
}



/* Entry: 10a1b806c; end: 10a1b806f;  */

undefined8 * FUN_10a1b806c(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_110baba78;
  if ((param_1[0xb] != 0) && (*(char *)(param_1[4] + 8) == '\x01')) {
    (*(code *)param_1[3])();
  }
  param_1[0xb] = 0;
  (**(code **)param_1[4])();
  return param_1;
}



/* Entry: 10a1b8070; end: 10a1b8083;  */

void FUN_10a1b8070(void)

{
  FUN_10a1b77fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1b8084; end: 10a1b81f3;  */

undefined8 * FUN_10a1b8084(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110babb78;
  FUN_10a0d92c8(param_1 + 8);
  FUN_10a0d92c8(param_1 + 6);
  FUN_10a0d92c8(param_1 + 4);
  FUN_10a0d92c8(param_1 + 2);
  return param_1;
}



/* Entry: 10a1b81f4; end: 10a1b8303;  */

undefined8 * FUN_10a1b81f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110babc08;
  FUN_10a0d92c8(param_1 + 0x10);
  *param_1 = &PTR_FUN_110babbc8;
  FUN_10a0d92c8(param_1 + 0xe);
  FUN_10a0d92c8(param_1 + 0xc);
  FUN_10a0d92c8(param_1 + 10);
  FUN_10a0d92c8(param_1 + 8);
  FUN_10a0d92c8(param_1 + 6);
  FUN_10a0d92c8(param_1 + 4);
  FUN_10a0d92c8(param_1 + 1);
  return param_1;
}



/* Entry: 10a1b8304; end: 10a1b8a73;  */

undefined8 * FUN_10a1b8304(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110babc48;
  FUN_10a0d92c8(param_1 + 8);
  FUN_10a0d92c8(param_1 + 6);
  FUN_10a0d92c8(param_1 + 4);
  FUN_10a0d92c8(param_1 + 2);
  return param_1;
}



/* Entry: 10a1b8a74; end: 10a1b8a77;  */

undefined8 * FUN_10a1b8a74(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_110baba78;
  if ((param_1[0xb] != 0) && (*(char *)(param_1[4] + 8) == '\x01')) {
    (*(code *)param_1[3])();
  }
  param_1[0xb] = 0;
  (**(code **)param_1[4])();
  return param_1;
}


