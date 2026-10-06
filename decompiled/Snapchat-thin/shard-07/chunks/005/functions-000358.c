/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105687e74; end: 105687e87;  */

void FUN_105687e74(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c03f28();
  if (puVar1 != (undefined8 *)0x0) {
    FUN_105687e88(*puVar1);
    FUN_105687e88(puVar1[1]);
    if (*(char *)((long)puVar1 + 0x4f) < '\0') {
      __ZdlPv(puVar1[7]);
    }
    if (*(char *)((long)puVar1 + 0x37) < '\0') {
      __ZdlPv(puVar1[4]);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 105687e88; end: 105687edf;  */

void FUN_105687e88(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_105687e88(*param_1);
    FUN_105687e88(param_1[1]);
    if (*(char *)((long)param_1 + 0x4f) < '\0') {
      __ZdlPv(param_1[7]);
    }
    if (*(char *)((long)param_1 + 0x37) < '\0') {
      __ZdlPv(param_1[4]);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 105687ee0; end: 105687f2f;  */

void FUN_105687ee0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  FUN_105687f30();
  puVar2 = puVar1;
  ___cxa_throw(puVar1,&PTR_DAT_1108a63e8,FUN_105687f54);
  ___cxa_free_exception(puVar1);
  __Unwind_Resume();
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  *puVar2 = &PTR_FUN_1108a6410;
  return;
}



/* Entry: 105687f30; end: 105687f53;  */

void FUN_105687f30(undefined8 *param_1)

{
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  *param_1 = &PTR_FUN_1108a6410;
  return;
}



/* Entry: 105687f54; end: 105687f57;  */

void FUN_105687f54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 105687f58; end: 105687f93;  */

void FUN_105687f58(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105687f94; end: 10568823b;  */

/* WARNING: Removing unreachable block (ram,0x0001056881f8) */

long * FUN_105687f94(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plStack_68;
  
  FUN_105687e88(param_1[0x2a]);
  __ZNSt3__15mutexD1Ev(param_1 + 0x21);
  __ZNSt3__15mutexD1Ev(param_1 + 0x19);
  FUN_10568823c(param_1 + 0x15,param_1[0x16]);
  func_0x00010568828c(param_1[0x13]);
  plVar6 = (long *)param_1[0xf];
  if (plVar6 != (long *)0x0) {
    plVar2 = (long *)param_1[0x10];
    plVar1 = plVar6;
    if (plVar6 != plVar2) {
      do {
        plVar1 = plVar2 + -3;
        if (*plVar1 != 0) {
          plVar2[-2] = *plVar1;
          __ZdlPv();
        }
        plVar2 = plVar1;
      } while (plVar1 != plVar6);
      plVar1 = (long *)param_1[0xf];
    }
    param_1[0x10] = (long)plVar6;
    __ZdlPv(plVar1);
  }
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  plStack_68 = param_1 + 9;
  func_0x00010007e5dc(&plStack_68);
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  plVar6 = (long *)param_1[3];
  if (plVar6 != (long *)0x0) {
    plVar2 = (long *)param_1[4];
    plVar1 = plVar6;
    if (plVar6 != plVar2) {
      do {
        plVar2 = plVar2 + -1;
        plVar1 = (long *)*plVar2;
        *plVar2 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar2 != plVar6);
      plVar1 = (long *)param_1[3];
    }
    param_1[4] = (long)plVar6;
    __ZdlPv(plVar1);
  }
  lVar8 = *param_1;
  if (lVar8 != 0) {
    lVar10 = param_1[1];
    lVar7 = lVar8;
    if (lVar8 != lVar10) {
      do {
        puVar11 = *(undefined8 **)(lVar10 + -0x30);
        puVar12 = puVar11;
        if (*(undefined8 **)(lVar10 + -0x28) != puVar11) {
          uVar5 = *(ulong *)(lVar10 + -0x18);
          plVar6 = puVar11 + uVar5 / 0x55;
          lVar7 = *plVar6 + (uVar5 % 0x55) * 0x30;
          uVar5 = *(long *)(lVar10 + -0x10) + uVar5;
          lVar9 = puVar11[uVar5 / 0x55] + (uVar5 % 0x55) * 0x30;
          puVar12 = *(undefined8 **)(lVar10 + -0x28);
          if (lVar7 != lVar9) {
            do {
              plVar1 = *(long **)(lVar7 + 0x28);
              if (plVar1 == (long *)(lVar7 + 0x10)) {
                lVar3 = 0x20;
LAB_105688134:
                (**(code **)(*plVar1 + lVar3))();
              }
              else if (plVar1 != (long *)0x0) {
                lVar3 = 0x28;
                goto LAB_105688134;
              }
              FUN_105687400(lVar7);
              lVar7 = lVar7 + 0x30;
              if (lVar7 - *plVar6 == 0xff0) {
                plVar6 = plVar6 + 1;
                lVar7 = *plVar6;
              }
            } while (lVar7 != lVar9);
            puVar11 = *(undefined8 **)(lVar10 + -0x30);
            puVar12 = *(undefined8 **)(lVar10 + -0x28);
          }
        }
        *(undefined8 *)(lVar10 + -0x10) = 0;
        lVar7 = (long)puVar12 - (long)puVar11;
        while (uVar5 = lVar7 >> 3, 2 < uVar5) {
          __ZdlPv(*puVar11);
          puVar12 = *(undefined8 **)(lVar10 + -0x28);
          puVar11 = (undefined8 *)(*(long *)(lVar10 + -0x30) + 8);
          *(undefined8 **)(lVar10 + -0x30) = puVar11;
          lVar7 = (long)puVar12 - (long)puVar11;
        }
        if (uVar5 == 1) {
          uVar4 = 0x2a;
LAB_1056881cc:
          *(undefined8 *)(lVar10 + -0x18) = uVar4;
        }
        else if (uVar5 == 2) {
          uVar4 = 0x55;
          goto LAB_1056881cc;
        }
        for (; puVar11 != puVar12; puVar11 = puVar11 + 1) {
          __ZdlPv(*puVar11);
        }
        lVar7 = lVar10 + -0x50;
        func_0x0001056882e4(lVar10 + -0x38);
        lVar10 = lVar7;
      } while (lVar8 != lVar7);
      lVar7 = *param_1;
    }
    param_1[1] = lVar8;
    __ZdlPv(lVar7);
  }
  return param_1;
}



/* Entry: 10568823c; end: 10568832b;  */

void FUN_10568823c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10568823c(param_1,*param_2);
    FUN_10568823c(param_1,param_2[1]);
    if (*(char *)((long)param_2 + 0x37) < '\0') {
      __ZdlPv(param_2[4]);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10568832c; end: 10568833f;  */

void FUN_10568832c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a6378;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105688340; end: 105688363;  */

void FUN_105688340(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a6378;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105688364; end: 105688397;  */

void FUN_105688364(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x18);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(0,(undefined8 *)(param_1 + 0x18),0,0,0);
  }
  return;
}



/* Entry: 105688398; end: 10568839b;  */

void FUN_105688398(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10568839c; end: 10568844f;  */

undefined **
FUN_10568839c(int param_1,undefined8 *param_2,undefined8 *param_3,long param_4,undefined *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_1 < 2) {
    if (param_1 != 0) {
      uVar2 = param_2[1];
      *param_3 = FUN_10568839c;
      param_3[1] = uVar2;
      return (undefined **)0x0;
    }
  }
  else {
    if (param_1 != 2) {
      if (param_1 != 3) {
        return &PTR_DAT_1108a60d0;
      }
      if (param_4 == 0) {
        uVar1 = (uint)(param_5 == &UNK_10ddb8514);
      }
      else {
        func_0x0001004a5364(param_4,&PTR_DAT_1108a60d0);
        uVar1 = (uint)param_4;
      }
      if (uVar1 != 0) {
        return (undefined **)(param_2 + 1);
      }
      return (undefined **)0x0;
    }
    uVar2 = param_2[1];
    *param_3 = FUN_10568839c;
    param_3[1] = uVar2;
  }
  *param_2 = 0;
  return (undefined **)0x0;
}



/* Entry: 105688450; end: 105688457;  */

void FUN_105688450(void)

{
  return;
}



/* Entry: 105688458; end: 10568848b;  */

void FUN_105688458(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1108a60f0;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10568848c; end: 1056884b7;  */

void FUN_10568848c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1108a60f0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1056884b8; end: 1056884cb;  */

undefined * FUN_1056884b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10f2e581e;
  FUN_105688514(&UNK_10f2e581e);
  func_0x0001004a5364(param_2,&PTR_DAT_1108a6150);
  puVar1 = puVar1 + 8;
  if ((int)param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}



/* Entry: 1056884cc; end: 105688507;  */

long FUN_1056884cc(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1108a6150);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 105688508; end: 105688513;  */

undefined ** FUN_105688508(void)

{
  return &PTR_DAT_1108a6150;
}



/* Entry: 105688514; end: 105688563;  */

void FUN_105688514(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  FUN_105688564();
  puVar2 = puVar1;
  ___cxa_throw(puVar1,&PTR_DAT_1108a63e8,FUN_105687f54);
  ___cxa_free_exception(puVar1);
  __Unwind_Resume();
  __ZNSt13runtime_errorC2EPKc();
  *puVar2 = &PTR_FUN_1108a6410;
  return;
}



/* Entry: 105688564; end: 105688587;  */

void FUN_105688564(undefined8 *param_1)

{
  __ZNSt13runtime_errorC2EPKc();
  *param_1 = &PTR_FUN_1108a6410;
  return;
}



/* Entry: 105688588; end: 10568862f;  */

void FUN_105688588(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_105688588(*param_1);
    FUN_105688588(param_1[1]);
    func_0x0001056885c8(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 105688630; end: 105688747;  */

long FUN_105688630(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  plVar1 = param_1;
  func_0x0001056886c4(param_1,&uStack_38,param_2);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    lVar2 = 0x68;
    __Znwm();
    uVar3 = *param_3;
    *(undefined8 *)(lVar2 + 0x28) = param_3[1];
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    *(undefined8 *)(lVar2 + 0x30) = param_3[2];
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    *(undefined8 *)(lVar2 + 0x40) = 0;
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(undefined8 *)(lVar2 + 0x50) = 0;
    *(undefined8 *)(lVar2 + 0x48) = 0;
    *(undefined8 *)(lVar2 + 0x60) = 0;
    *(undefined8 *)(lVar2 + 0x58) = 0;
    FUN_105688748(param_1,uStack_38,plVar1,lVar2);
  }
  return lVar2;
}



/* Entry: 105688748; end: 1056887df;  */

void FUN_105688748(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  func_0x00010002c5b0(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 1056887e0; end: 10568881f;  */

void FUN_1056887e0(undefined8 *param_1)

{
  if ((code *)*param_1 != (code *)0x0) {
    (*(code *)*param_1)(4,param_1,0,0,0);
  }
  return;
}



/* Entry: 105688820; end: 105688977;  */

undefined **
FUN_105688820(int param_1,undefined8 *param_2,undefined8 *param_3,long param_4,undefined *param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puStack_38;
  
  if (param_1 < 2) {
    if (param_1 != 0) {
      lVar4 = param_2[1];
      puVar2 = (undefined1 *)0x140;
      __Znwm();
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 0x120) = 0xffffffff;
      FUN_1056878ec();
      uVar1 = *(uint *)(lVar4 + 0x120);
      if (uVar1 != 0xffffffff) {
        puStack_38 = puVar2;
        (*(code *)(&PTR_FUN_1108a6160)[uVar1])(&puStack_38,lVar4);
        *(uint *)(puVar2 + 0x120) = uVar1;
      }
      uVar5 = *(undefined8 *)(lVar4 + 0x130);
      uVar3 = *(undefined8 *)(lVar4 + 0x128);
      *(undefined8 *)(puVar2 + 0x138) = *(undefined8 *)(lVar4 + 0x138);
      *(undefined8 *)(puVar2 + 0x130) = uVar5;
      *(undefined8 *)(puVar2 + 0x128) = uVar3;
      *param_3 = FUN_105688820;
      param_3[1] = puVar2;
      return (undefined **)0x0;
    }
    uVar3 = param_2[1];
    FUN_1056878ec(uVar3);
    __ZdlPv(uVar3);
  }
  else {
    if (param_1 != 2) {
      if (param_1 != 3) {
        return &PTR_DAT_1108a63b8;
      }
      if (param_4 == 0) {
        uVar1 = (uint)(param_5 == &UNK_10ddb89a8);
      }
      else {
        func_0x0001004a5364(param_4,&PTR_DAT_1108a63b8);
        uVar1 = (uint)param_4;
      }
      if (uVar1 != 0) {
        return (undefined **)param_2[1];
      }
      return (undefined **)0x0;
    }
    uVar3 = param_2[1];
    *param_3 = FUN_105688820;
    param_3[1] = uVar3;
  }
  *param_2 = 0;
  return (undefined **)0x0;
}



/* Entry: 105688978; end: 105688a03;  */

void FUN_105688978(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar8 = (undefined8 *)*param_1;
  uVar11 = *param_2;
  uVar13 = param_2[3];
  uVar12 = param_2[2];
  puVar8[1] = param_2[1];
  *puVar8 = uVar11;
  puVar8[3] = uVar13;
  puVar8[2] = uVar12;
  uVar11 = param_2[4];
  puVar8[5] = param_2[5];
  puVar8[4] = uVar11;
  lVar9 = param_2[7];
  uVar11 = param_2[6];
  puVar8[7] = param_2[7];
  puVar8[6] = uVar11;
  puVar8[10] = 0;
  puVar8[8] = puVar8 + 1;
  puVar8[9] = puVar8 + 10;
  puVar8[0xb] = 0;
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x14);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (*(int *)((long)param_2 + 4) < 3) {
    puVar10 = (undefined8 *)param_2[9];
    puVar8 = (undefined8 *)puVar8[9];
    *puVar8 = *puVar10;
    puVar8[1] = puVar10[1];
    return;
  }
  *(undefined4 *)((long)puVar8 + 4) = 0;
  func_0x000109a844cc(puVar8,*(undefined4 *)((long)param_2 + 4),0,0,0);
  if (0 < *(int *)((long)puVar8 + 4)) {
    lVar9 = 0;
    lVar2 = param_2[8];
    lVar4 = param_2[9];
    lVar3 = puVar8[8];
    lVar5 = puVar8[9];
    do {
      *(undefined4 *)(lVar3 + lVar9 * 4) = *(undefined4 *)(lVar2 + lVar9 * 4);
      *(undefined8 *)(lVar5 + lVar9 * 8) = *(undefined8 *)(lVar4 + lVar9 * 8);
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)((long)puVar8 + 4));
  }
  return;
}



/* Entry: 105688a04; end: 105688bdb;  */

undefined8 * FUN_105688a04(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar7 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  lVar4 = param_2[7];
  uVar7 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar7;
  param_1[10] = 0;
  param_1[8] = param_1 + 1;
  param_1[9] = param_1 + 10;
  param_1[0xb] = 0;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(int *)((long)param_2 + 4) < 3) {
    puVar5 = (undefined8 *)param_2[9];
    puVar6 = (undefined8 *)param_1[9];
    *puVar6 = *puVar5;
    puVar6[1] = puVar5[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 4) = 0;
    func_0x000109a84868(param_1,param_2);
  }
  uVar8 = param_2[0xd];
  uVar7 = param_2[0xc];
  uVar9 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar9;
  uVar9 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar9;
  lVar4 = param_2[0x13];
  uVar10 = param_2[0x13];
  uVar9 = param_2[0x12];
  param_1[0x16] = 0;
  param_1[0x13] = uVar10;
  param_1[0x12] = uVar9;
  param_1[0x14] = param_1 + 0xd;
  param_1[0x15] = param_1 + 0x16;
  param_1[0x17] = 0;
  param_1[0xd] = uVar8;
  param_1[0xc] = uVar7;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(int *)((long)param_2 + 100) < 3) {
    puVar5 = (undefined8 *)param_2[0x15];
    puVar6 = (undefined8 *)param_1[0x15];
    *puVar6 = *puVar5;
    puVar6[1] = puVar5[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 100) = 0;
    func_0x000109a84868(param_1 + 0xc);
  }
  uVar7 = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar7;
  uVar7 = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1a] = uVar7;
  uVar7 = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1c] = uVar7;
  lVar4 = param_2[0x1f];
  uVar7 = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x1e] = uVar7;
  param_1[0x20] = param_1 + 0x19;
  param_1[0x21] = param_1 + 0x22;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(int *)((long)param_2 + 0xc4) < 3) {
    puVar5 = (undefined8 *)param_2[0x21];
    puVar6 = (undefined8 *)param_1[0x21];
    *puVar6 = *puVar5;
    puVar6[1] = puVar5[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 0xc4) = 0;
    func_0x000109a84868();
  }
  return param_1;
}



/* Entry: 105688bdc; end: 105688be3;  */

void FUN_105688bdc(void)

{
  return;
}



/* Entry: 105688be4; end: 105688c17;  */

void FUN_105688be4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1108a6188;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 105688c18; end: 105688c43;  */

void FUN_105688c18(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1108a6188;
  param_2[1] = uVar1;
  return;
}



/* Entry: 105688c44; end: 105688c57;  */

undefined * FUN_105688c44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10f2e581e;
  FUN_105688514(&UNK_10f2e581e);
  func_0x0001004a5364(param_2,&PTR_DAT_1108a63d8);
  puVar1 = puVar1 + 8;
  if ((int)param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}



/* Entry: 105688c58; end: 105688c93;  */

long FUN_105688c58(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1108a63d8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 105688c94; end: 105688c9f;  */

undefined ** FUN_105688c94(void)

{
  return &PTR_DAT_1108a63d8;
}



/* Entry: 105688ca0; end: 105688d5b;  */

undefined8 *
FUN_105688ca0(int param_1,undefined8 *param_2,undefined8 *param_3,long param_4,undefined *param_5)

{
  uint uVar1;
  
  if (param_1 < 2) {
    if (param_1 != 0) {
      *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_2 + 1);
      *param_3 = FUN_105688ca0;
      return (undefined8 *)0x0;
    }
  }
  else {
    if (param_1 != 2) {
      if (param_1 != 3) {
        return (undefined8 *)PTR___ZTIi_110346aa8;
      }
      if (param_4 == 0) {
        uVar1 = (uint)(param_5 == &UNK_10ddb8698);
      }
      else {
        func_0x0001004a5364(param_4,PTR___ZTIi_110346aa8);
        uVar1 = (uint)param_4;
      }
      if (uVar1 != 0) {
        return param_2 + 1;
      }
      return (undefined8 *)0x0;
    }
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_2 + 1);
    *param_3 = FUN_105688ca0;
  }
  *param_2 = 0;
  return (undefined8 *)0x0;
}



/* Entry: 105688d5c; end: 105688d63;  */

void FUN_105688d5c(void)

{
  return;
}



/* Entry: 105688d64; end: 105688d97;  */

void FUN_105688d64(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1108a61f8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 105688d98; end: 105688dc3;  */

void FUN_105688d98(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1108a61f8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 105688dc4; end: 105688dd7;  */

undefined * FUN_105688dc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10f2e581e;
  FUN_105688514(&UNK_10f2e581e);
  func_0x0001004a5364(param_2,&PTR_DAT_1108a6258);
  puVar1 = puVar1 + 8;
  if ((int)param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}



/* Entry: 105688dd8; end: 105688e13;  */

long FUN_105688dd8(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1108a6258);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 105688e14; end: 105688e1f;  */

undefined ** FUN_105688e14(void)

{
  return &PTR_DAT_1108a6258;
}



/* Entry: 105688e20; end: 105688ebb;  */

undefined8 * FUN_105688e20(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  ulong uStack_38;
  long lStack_30;
  uint uStack_28;
  
  param_1[1] = 0x100000000;
  *param_1 = 0x100000000;
  param_1[2] = &DAT_10e5b4a18;
  param_1[3] = param_2;
  uStack_28 = *(uint *)(param_3 + 0xc);
  if (uStack_28 == *(uint *)(param_3 + 4)) {
    uStack_28 = 0;
    uStack_38 = 0;
  }
  else {
    uStack_38 = *(ulong *)(*(long *)(param_3 + 0x10) + (ulong)uStack_28 * 8);
    if ((uStack_38 & 1) != 0) {
      uStack_38 = *(ulong *)(**(long **)(uStack_38 - 1) + 0x20);
    }
  }
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_30 = param_3;
  FUN_105688ebc(param_1,&uStack_38,&uStack_50);
  return param_1;
}



/* Entry: 105688ebc; end: 105688f2b;  */

void FUN_105688ebc(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_50 [32];
  
  lVar1 = *param_2;
  if (lVar1 != *param_3) {
    do {
      FUN_105688f2c(auStack_50,param_1,lVar1 + 8,lVar1 + 0x10);
      func_0x00010063bf60(param_2);
      lVar1 = *param_2;
    } while (lVar1 != *param_3);
  }
  return;
}



/* Entry: 105688f2c; end: 105688f87;  */

void FUN_105688f2c(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  FUN_105688f88();
  if ((char)param_1[3] == '\x01') {
    lVar3 = *param_1;
    if (param_4 != lVar3 + 0x10) {
      func_0x000109349ec8(lVar3 + 0x10);
      uVar1 = *(ulong *)(param_4 + 0x10) & 0xfffffffffffffffc;
      lVar4 = (long)*(char *)(uVar1 + 0x17);
      if (lVar4 < 0) {
        lVar4 = *(long *)(uVar1 + 8);
      }
      if (lVar4 != 0) {
        uVar2 = *(ulong *)(lVar3 + 0x18);
        if ((uVar2 & 1) != 0) {
          uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
        }
        func_0x000107c30248(lVar3 + 0x20,uVar1,uVar2);
      }
      if (*(int *)(param_4 + 0x18) != 0) {
        *(int *)(lVar3 + 0x28) = *(int *)(param_4 + 0x18);
      }
      if (*(int *)(param_4 + 0x1c) != 0) {
        *(int *)(lVar3 + 0x2c) = *(int *)(param_4 + 0x1c);
      }
      if ((*(ulong *)(param_4 + 8) & 1) != 0) {
        if ((*(ulong *)(lVar3 + 0x18) & 1) == 0) {
          func_0x00010b4c3590();
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298
        )();
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 105688f88; end: 105689067;  */

void FUN_105688f88(undefined8 *param_1,int *param_2,uint *param_3)

{
  int *piVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar2 = (ulong)*param_3;
  piVar1 = param_2;
  FUN_105689068(param_2,uVar2,0);
  if (piVar1 == (int *)0x0) {
    piVar1 = param_2;
    func_0x000105689120(param_2,*param_2 + 1);
    if ((int)piVar1 != 0) {
      uVar2 = (ulong)*param_3;
      FUN_105689068(param_2,uVar2,0);
    }
    piVar1 = param_2;
    func_0x00010055df10(param_2,0x38);
    piVar1[2] = *param_3;
    uVar4 = *(undefined8 *)(param_2 + 6);
    *(undefined ***)(piVar1 + 4) = &PTR_DAT_110af0d50;
    *(undefined8 *)(piVar1 + 6) = uVar4;
    piVar1[0xc] = 0;
    *(undefined **)(piVar1 + 8) = &DAT_11383d918;
    piVar1[10] = 0;
    piVar1[0xb] = 0;
    FUN_1056891b0(param_2,uVar2,piVar1);
    *param_2 = *param_2 + 1;
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *param_1 = piVar1;
  param_1[1] = param_2;
  *(int *)(param_1 + 2) = (int)uVar2;
  *(undefined1 *)(param_1 + 3) = uVar3;
  return;
}



/* Entry: 105689068; end: 1056891af;  */

void FUN_105689068(long param_1,uint param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  ulong *puVar2;
  ulong uVar3;
  
  uVar3 = (long)&PTR_LOOP_110c8acd8 + (ulong)(*(uint *)(param_1 + 8) ^ param_2);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  uVar3 = (ulong)(*(int *)(param_1 + 4) - 1U &
                 (SUB164(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^ (int)uVar3 * -0x14c7d297));
  puVar2 = *(ulong **)(*(long *)(param_1 + 0x10) + uVar3 * 8);
  if (puVar2 == (ulong *)0x0 || ((ulong)puVar2 & 1) != 0) {
    if (((ulong)puVar2 & 1) != 0) {
      func_0x00010b4cf928(param_1,uVar3,0,param_2,param_3);
    }
  }
  else {
    do {
      if ((uint)puVar2[1] == param_2) {
        return;
      }
      puVar2 = (ulong *)*puVar2;
    } while (puVar2 != (ulong *)0x0);
  }
  return;
}



/* Entry: 1056891b0; end: 105689213;  */

void FUN_1056891b0(ulong param_1,uint param_2,ulong *param_3)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  long lStack_60;
  ulong uStack_58;
  ulong *puStack_48;
  
  lVar1 = *(long *)(param_1 + 0x10);
  puVar2 = *(ulong **)(lVar1 + (ulong)param_2 * 8);
  if (puVar2 == (ulong *)0x0) {
    *param_3 = 0;
    *(ulong **)(lVar1 + (ulong)param_2 * 8) = param_3;
    if (*(uint *)(param_1 + 0xc) <= param_2) {
      param_2 = *(uint *)(param_1 + 0xc);
    }
    *(uint *)(param_1 + 0xc) = param_2;
    return;
  }
  if (((ulong)puVar2 & 1) == 0) {
    uVar3 = 0;
    puVar4 = puVar2;
    do {
      uVar3 = uVar3 + 1;
      puVar4 = (ulong *)*puVar4;
    } while (puVar4 != (ulong *)0x0);
    if (uVar3 < 8) {
      *param_3 = (ulong)puVar2;
      *(ulong **)(lVar1 + (ulong)param_2 * 8) = param_3;
      return;
    }
  }
  uVar5 = *(ulong *)(*(long *)(param_1 + 0x10) + (ulong)param_2 * 8);
  uVar3 = uVar5;
  puStack_48 = param_3;
  if ((uVar5 != 0) && ((uVar5 & 1) == 0)) {
    uVar3 = param_1;
    func_0x00010b4cf740(param_1,uVar5,FUN_1056893bc);
    *(ulong *)(*(long *)(param_1 + 0x10) + (ulong)param_2 * 8) = uVar3;
  }
  FUN_1056893bc();
  func_0x00010b4d122c(&lStack_60);
  if (lStack_60 != **(long **)(uVar3 - 1) || (uStack_58 & 0xffffffff) != 0) {
    func_0x00010b4cf5a8(lStack_60,uStack_58);
    func_0x00010b4d1160();
    **(undefined8 **)(extraout_x8 + 0x20) = puStack_48;
  }
  func_0x00010b4cf834(lStack_60,uStack_58,1);
  if (*(long *)(uVar3 + 0xf) == lStack_60 &&
      (uint)uStack_58 == (uint)*(byte *)(*(long *)(uVar3 + 0xf) + 10)) {
    uVar3 = 0;
  }
  else {
    func_0x00010b4d1160();
    uVar3 = *(ulong *)(extraout_x8_00 + 0x20);
  }
  *puStack_48 = uVar3;
  return;
}



/* Entry: 105689214; end: 1056893bb;  */

void FUN_105689214(long param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *extraout_x8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  int iVar13;
  ulong *puVar14;
  long lStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar11 = (ulong)uVar1;
  if (uVar1 == 1) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 4) = 2;
    lVar10 = param_1;
    func_0x00010055e778(param_1,2);
    *(long *)(param_1 + 0x10) = lVar10;
    uVar7 = 8;
    _clock_gettime_nsec_np();
    uVar4 = 0x10c8acd8;
    lStack_50 = param_1;
    uStack_48 = uVar7;
    func_0x00010055e8e0(&PTR_LOOP_110c8acd8,&uStack_48,(long *)(param_1 + 0x10),&lStack_50);
    *(undefined4 *)(param_1 + 8) = uVar4;
    return;
  }
  puVar12 = *(undefined8 **)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 4) = param_2;
  lVar10 = param_1;
  func_0x00010055e778();
  *(long *)(param_1 + 0x10) = lVar10;
  uVar2 = *(uint *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 4);
  if (uVar2 < uVar1) {
    iVar13 = uVar1 - uVar2;
    puVar14 = puVar12 + uVar2;
    do {
      uVar8 = *puVar14;
      if (uVar8 == 0 || (uVar8 & 1) != 0) {
        if ((uVar8 & 1) != 0) {
          func_0x00010b4cf860(param_1,uVar8 - 1,FUN_1056893bc);
        }
      }
      else {
        func_0x000105689334(param_1);
      }
      iVar13 = iVar13 + -1;
      puVar14 = puVar14 + 1;
    } while (iVar13 != 0);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuVar5 = &PTR___tlv_bootstrap_11340dac8;
    (*(code *)PTR___tlv_bootstrap_11340dac8)();
    if (ppuVar5[1] == (undefined *)*extraout_x8) {
      lVar10 = (uVar11 & 0xffffffff) * 8;
      puVar6 = ppuVar5[2];
      uVar8 = 0x3b - LZCOUNT(lVar10);
      bVar3 = puVar6[0x50];
      if (uVar8 < bVar3) {
        lVar10 = *(long *)(puVar6 + 0x58);
        *puVar12 = *(undefined8 *)(lVar10 + uVar8 * 8);
        *(undefined8 **)(lVar10 + uVar8 * 8) = puVar12;
      }
      else {
        if (bVar3 == 0) {
          lVar9 = 0;
        }
        else {
          _memmove(puVar12,*(undefined8 *)(puVar6 + 0x58),(ulong)bVar3 << 3);
          lVar9 = (ulong)(byte)puVar6[0x50] << 3;
        }
        uVar11 = uVar11 & 0xffffffff;
        if (0 < lVar10 - lVar9) {
          _bzero((long)puVar12 + lVar9);
        }
        *(undefined8 **)(puVar6 + 0x58) = puVar12;
        if (0x3f < uVar11) {
          uVar11 = 0x40;
        }
        puVar6[0x50] = (char)uVar11;
      }
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar12);
  return;
}



/* Entry: 1056893bc; end: 1056893c7;  */

undefined1  [16] FUN_1056893bc(long param_1)

{
  return ZEXT416(*(uint *)(param_1 + 8)) << 0x40;
}



/* Entry: 1056893c8; end: 10568940f;  */

long FUN_1056893c8(long param_1)

{
  if (*(int *)(param_1 + 4) != 1) {
    func_0x00010063c004(param_1,0x400380010,0);
  }
  return param_1;
}



/* Entry: 105689410; end: 1056894e3;  */

undefined **
FUN_105689410(int param_1,undefined8 *param_2,undefined8 *param_3,long param_4,undefined *param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_1 < 2) {
    if (param_1 != 0) {
      puVar4 = (undefined8 *)param_2[1];
      puVar2 = (undefined8 *)0x10;
      __Znwm();
      uVar3 = *puVar4;
      puVar2[1] = puVar4[1];
      *puVar2 = uVar3;
      *param_3 = FUN_105689410;
      param_3[1] = puVar2;
      return (undefined **)0x0;
    }
    __ZdlPv(param_2[1]);
  }
  else {
    if (param_1 != 2) {
      if (param_1 != 3) {
        return &PTR_DAT_1108a6268;
      }
      if (param_4 == 0) {
        uVar1 = (uint)(param_5 == &UNK_10ddb8768);
      }
      else {
        func_0x0001004a5364(param_4,&PTR_DAT_1108a6268);
        uVar1 = (uint)param_4;
      }
      if (uVar1 != 0) {
        return (undefined **)param_2[1];
      }
      return (undefined **)0x0;
    }
    uVar3 = param_2[1];
    *param_3 = FUN_105689410;
    param_3[1] = uVar3;
  }
  *param_2 = 0;
  return (undefined **)0x0;
}



/* Entry: 1056894e4; end: 1056894eb;  */

void FUN_1056894e4(void)

{
  return;
}



/* Entry: 1056894ec; end: 10568951f;  */

void FUN_1056894ec(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1108a6288;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 105689520; end: 10568954b;  */

void FUN_105689520(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1108a6288;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10568954c; end: 10568955f;  */

undefined * FUN_10568954c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10f2e581e;
  FUN_105688514(&UNK_10f2e581e);
  func_0x0001004a5364(param_2,&PTR_DAT_1108a62e8);
  puVar1 = puVar1 + 8;
  if ((int)param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}



/* Entry: 105689560; end: 10568959b;  */

long FUN_105689560(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1108a62e8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10568959c; end: 1056895c3;  */

undefined ** FUN_10568959c(void)

{
  return &PTR_DAT_1108a62e8;
}



/* Entry: 1056895c4; end: 1056896ab;  */

/* WARNING: Removing unreachable block (ram,0x0001056897ac) */
/* WARNING: Removing unreachable block (ram,0x0001056897b0) */
/* WARNING: Removing unreachable block (ram,0x0001056897bc) */

undefined ** FUN_1056895c4(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puStack_c0;
  undefined *puStack_b8;
  
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &PTR____CFConstantStringClassReference_110df4a78;
  puVar8 = (undefined *)0x2;
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
  puVar9 = puVar2;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    _objc_retain(ppuVar7);
    _objc_retain(puVar8);
    _objc_retain(puVar9);
    puStack_b8 = PTR_PTR_1126e98e8;
    ppuVar1 = &puStack_c0;
    puStack_c0 = puVar2;
    _objc_msgSendSuper2(ppuVar1,PTR_s_init_1125d9248);
    if (ppuVar1 != (undefined **)0x0) {
      _objc_retain(ppuVar7);
      puVar2 = ppuVar1[4];
      ppuVar1[4] = (undefined *)ppuVar7;
      _objc_release(puVar2);
      _objc_retain(puVar8);
      puVar2 = ppuVar1[5];
      ppuVar1[5] = puVar8;
      _objc_release(puVar2);
      ppuVar3 = ppuVar1;
      func_0x00010bebd160();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      ppuVar4 = ppuVar1;
      func_0x00010bebd9c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      puVar2 = ppuVar1[6];
      ppuVar1[6] = (undefined *)ppuVar4;
      _objc_release(puVar2);
      ppuVar4 = ppuVar3;
      func_0x00010c244fc0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010bf90360();
      *(char *)(ppuVar1 + 2) = (char)ppuVar5;
      _objc_release(ppuVar4);
      ppuVar4 = ppuVar3;
      func_0x00010c244fc0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010bf8fbe0();
      *(char *)((long)ppuVar1 + 0x11) = (char)ppuVar5;
      _objc_release(ppuVar4);
      puVar2 = PTR_PTR_1126ae790;
      _objc_alloc();
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c021520();
      puVar11 = ppuVar1[1];
      ppuVar1[1] = puVar2;
      _objc_release(puVar11);
      _objc_release(puVar6);
      _objc_release(ppuVar3);
    }
    _objc_retain(ppuVar1);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(ppuVar7);
    _objc_release(ppuVar1);
    return ppuVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return ppuVar1;
}



/* Entry: 1056896ac; end: 10568992b; -[SCPercMLSnapScanSnapcodeDetectionModel initWithModelKey:modelId:deliverableModel:error:] */

/* WARNING: Removing unreachable block (ram,0x0001056897ac) */
/* WARNING: Removing unreachable block (ram,0x0001056897b0) */
/* WARNING: Removing unreachable block (ram,0x0001056897bc) */

undefined8 *
FUN_1056896ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126e98e8;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[4];
    puVar1[4] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[5];
    puVar1[5] = param_4;
    _objc_release(uVar2);
    puVar3 = puVar1;
    func_0x00010bebd160();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    puVar4 = puVar1;
    func_0x00010bebd9c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    uVar2 = puVar1[6];
    puVar1[6] = puVar4;
    _objc_release(uVar2);
    puVar4 = puVar3;
    func_0x00010c244fc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf90360();
    *(char *)(puVar1 + 2) = (char)puVar5;
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010c244fc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf8fbe0();
    *(char *)((long)puVar1 + 0x11) = (char)puVar5;
    _objc_release(puVar4);
    puVar6 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[1];
    puVar1[1] = puVar6;
    _objc_release(uVar2);
    _objc_release(puVar7);
    _objc_release(puVar3);
  }
  _objc_retain(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar1;
}



/* Entry: 10568992c; end: 105689b13; -[SCPercMLSnapScanSnapcodeDetectionModel detectSnapcodesWithBatchImages:] */

void FUN_10568992c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  func_0x00010c075600(param_1);
  lVar1 = param_3;
  func_0x00010bf529e0();
  puVar4 = PTR_PTR_1126ae750;
  if (lVar1 == 0) {
    func_0x00010bdc3520(&PTR____CFConstantStringClassReference_110df4ab8);
    func_0x00010bf993e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_105689b14;
    uStack_50 = 0x105689b24;
    uStack_48 = 0;
    _objc_initWeak(auStack_78,param_1);
    uVar2 = 0;
    _dispatch_semaphore_create();
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(param_3);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar3);
    _dispatch_semaphore_wait(uVar2,0xffffffffffffffff);
    puVar4 = (undefined *)puStack_68[5];
    _objc_retain(puVar4);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    __Block_object_dispose(&uStack_70,8);
    _objc_release(uStack_48);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105689b14; end: 105689b2b;  */

void FUN_105689b14(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105689b2c; end: 105689bd3;  */

void FUN_105689b2c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar4);
  lVar1 = lVar4;
  func_0x00010bdfba00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  puVar2 = PTR_PTR_1126ae750;
  func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105689bd4; end: 105689c57;  */

void FUN_105689bd4(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x38,param_2 + 0x38);
  return;
}



/* Entry: 105689c58; end: 105689d8f; -[SCPercMLSnapScanSnapcodeDetectionModel _detectSnapcodesWithBatchImages:] */

void FUN_105689c58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105689b14;
  uStack_40 = 0x105689b24;
  uStack_38 = 0;
  _objc_retain();
  func_0x00010bf97e80(param_3);
  _objc_retain(puVar1);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105689d90; end: 10568a037;  */

void FUN_105689d90(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
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
  long lStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    puStack_68 = (undefined8 *)0x0;
    lStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010c271aa0(&uStack_b0,param_2);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  uStack_d0 = (ulong)&uStack_110 | 8;
  uStack_c0 = 0;
  uStack_b8 = 0;
  if (lStack_78 != 0) {
    piVar1 = (int *)(lStack_78 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_108 = uStack_a8;
  uStack_100 = uStack_a0;
  uStack_f8 = uStack_98;
  uStack_f0 = uStack_90;
  uStack_e8 = uStack_88;
  uStack_e0 = uStack_80;
  lStack_d8 = lStack_78;
  puStack_c8 = &uStack_c0;
  if (uStack_b0._4_4_ < 3) {
    uStack_c0 = *puStack_68;
    uStack_b8 = puStack_68[1];
    uStack_110 = uStack_b0;
  }
  else {
    uStack_110 = uStack_b0 & 0xffffffff;
    func_0x000109a84868(&uStack_110,&uStack_b0);
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar6 = *(undefined8 *)(lVar8 + 0x28);
  func_0x00010be9ac40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar6);
  uVar5 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x28) = uVar6;
  _objc_release(uVar5);
  if (lStack_d8 != 0) {
    piVar1 = (int *)(lStack_d8 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_110);
    }
  }
  lStack_d8 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if (0 < uStack_110._4_4_) {
    lVar8 = 0;
    do {
      *(undefined4 *)(uStack_d0 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < uStack_110._4_4_);
  }
  if (puStack_c8 != &uStack_c0 && puStack_c8 != (undefined8 *)0x0) {
    _free(puStack_c8[-1]);
  }
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
  _objc_release(uVar7);
  if (lStack_78 != 0) {
    piVar1 = (int *)(lStack_78 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_b0);
    }
  }
  lStack_78 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (0 < uStack_b0._4_4_) {
    lVar8 = 0;
    do {
      *(undefined4 *)(lStack_70 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < uStack_b0._4_4_);
  }
  if (puStack_68 != &uStack_60 && puStack_68 != (undefined8 *)0x0) {
    _free(puStack_68[-1]);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10568a038; end: 10568a8b3; -[SCPercMLSnapScanSnapcodeDetectionModel _scanCVMat:error:] */

long * FUN_10568a038(long param_1,uint *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  short sVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  byte *pbVar18;
  uint *puVar19;
  uint *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 uStack_2c8;
  int iStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  uint *puStack_2a0;
  uint *puStack_298;
  undefined8 uStack_290;
  uint auStack_288 [2];
  undefined4 uStack_280;
  undefined8 uStack_27c;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  long lStack_248;
  long lStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  uint uStack_220;
  undefined4 uStack_21c;
  int iStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  uint *puStack_1f8;
  uint *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  int iStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  uint *puStack_158;
  uint *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  int iStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_3 + 0x10) != 0) {
    uVar12 = (ulong)*(uint *)(param_3 + 4);
    if ((int)*(uint *)(param_3 + 4) < 3) {
      lVar15 = (long)*(int *)(param_3 + 0xc) * (long)*(int *)(param_3 + 8);
    }
    else {
      lVar15 = 1;
      piVar17 = *(int **)(param_3 + 0x40);
      do {
        lVar15 = lVar15 * *piVar17;
        uVar12 = uVar12 - 1;
        piVar17 = piVar17 + 1;
      } while (uVar12 != 0);
    }
    if (lVar15 != 0) {
      plStack_198 = (long *)0x0;
      plStack_190 = (long *)0x0;
      uStack_188 = 0;
      lStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_1c8 = 0;
      plStack_1d0 = (long *)0x0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      lVar21 = *(long *)(param_1 + 0x30);
      _objc_retain(lVar21);
      lVar15 = lVar21;
      func_0x00010bf52a60();
      if (lVar15 != 0) {
        lVar22 = *plStack_1d0;
        do {
          lVar23 = 0;
          do {
            if (*plStack_1d0 != lVar22) {
              _objc_enumerationMutation(lVar21);
            }
            uVar14 = (uint)*(undefined8 *)(lStack_1d8 + lVar23 * 8);
            func_0x00010c067ec0();
            auStack_288[0] = uVar14;
            FUN_10568a8b4(&plStack_198,auStack_288);
            lVar23 = lVar23 + 1;
          } while (lVar15 != lVar23);
          lVar15 = lVar21;
          func_0x00010bf52a60();
        } while (lVar15 != 0);
      }
      _objc_release(lVar21);
      uStack_220 = uStack_220 & 0xffffff00;
      uStack_21c = 0;
      iStack_218 = 0;
      uStack_208 = 0;
      uStack_210 = 0;
      puStack_1f8 = (uint *)0x0;
      lStack_200 = 0;
      uStack_1e8 = 0;
      puStack_1f0 = (uint *)0x0;
      auStack_288[0] = auStack_288[0] & 0xffff0000;
      uStack_280 = 0x42ff0000;
      lStack_240 = (long)&uStack_27c + 4;
      uStack_274 = 0;
      uStack_270 = 0;
      uStack_27c = 0;
      uStack_264 = 0;
      uStack_260 = 0;
      uStack_26c = 0;
      uStack_268 = 0;
      uStack_254 = 0;
      uStack_25c = 0;
      uStack_258 = 0;
      lStack_248 = 0;
      uStack_250 = 0;
      uStack_24c = 0;
      uStack_230 = 0;
      uStack_228 = 0;
      param_2 = &uStack_220;
      puStack_238 = &uStack_230;
      func_0x0001092d4e88(param_3,param_2,auStack_288,&plStack_198,1,*(undefined1 *)(param_1 + 0x10)
                          ,*(undefined1 *)(param_1 + 0x11));
      if ((char)uStack_220 == '\x01') {
        uStack_2c8 = CONCAT44(uStack_21c,uStack_220);
        iStack_2c0 = iStack_218;
        if (lStack_200 < 0) {
          func_0x000100033dac(&uStack_2b8,uStack_210,uStack_208);
        }
        else {
          uStack_2b0 = uStack_208;
          uStack_2b8 = uStack_210;
          lStack_2a8 = lStack_200;
        }
        puStack_2a0 = (uint *)0x0;
        puStack_298 = (uint *)0x0;
        uStack_290 = 0;
        param_2 = puStack_1f8;
        func_0x000100292164(&puStack_2a0,puStack_1f8,puStack_1f0,
                            (long)puStack_1f0 - (long)puStack_1f8);
        iVar2 = iStack_2c0;
        if (iStack_2c0 == 0) {
          bVar4 = true;
        }
        else {
          uStack_140 = uStack_2c8;
          iStack_138 = iStack_2c0;
          if (lStack_2a8 < 0) {
            func_0x000100033dac(&uStack_130,uStack_2b8,uStack_2b0);
          }
          else {
            uStack_128 = uStack_2b0;
            uStack_130 = uStack_2b8;
            lStack_120 = lStack_2a8;
          }
          lStack_118 = 0;
          lStack_110 = 0;
          uStack_108 = 0;
          param_2 = puStack_2a0;
          func_0x000100292164(&lStack_118,puStack_2a0,puStack_298,
                              (long)puStack_298 - (long)puStack_2a0);
          if (iVar2 == 1) {
            puVar7 = PTR__OBJC_CLASS___NSUUID_1126b0270;
            _objc_alloc();
            func_0x00010c057e80();
            puVar8 = puVar7;
            func_0x00010bdc3580();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar7);
            puVar7 = puVar8;
            func_0x00010c25cfc0();
            _objc_retainAutoreleasedReturnValue();
            if (((puVar7 == (undefined *)0x0) ||
                (puVar9 = puVar7, func_0x00010c08fa60(), puVar9 < (undefined *)0xc)) ||
               (puVar9 = puVar7, func_0x00010bf35920(), (int)puVar9 != 0x34)) {
              _objc_release(puVar7);
              _objc_release(puVar8);
              goto LAB_10568a364;
            }
            _objc_release(puVar7);
            _objc_release(puVar8);
            bVar4 = true;
          }
          else {
LAB_10568a364:
            uStack_180 = uStack_2c8;
            iStack_178 = iStack_2c0;
            if (lStack_2a8 < 0) {
              func_0x000100033dac(&uStack_170,uStack_2b8,uStack_2b0);
            }
            else {
              uStack_168 = uStack_2b0;
              uStack_170 = uStack_2b8;
              lStack_160 = lStack_2a8;
            }
            puStack_158 = (uint *)0x0;
            puStack_150 = (uint *)0x0;
            uStack_148 = 0;
            param_2 = puStack_2a0;
            func_0x000100292164(&puStack_158,puStack_2a0,puStack_298,
                                (long)puStack_298 - (long)puStack_2a0);
            if (iVar2 == 2) {
              pbStack_100 = (byte *)0x0;
              pbStack_f8 = (byte *)0x0;
              uStack_f0 = 0;
              param_2 = puStack_158;
              func_0x000100292164(&pbStack_100,puStack_158,puStack_150,
                                  (long)puStack_150 - (long)puStack_158);
              if ((long)pbStack_f8 - (long)pbStack_100 == 0x10) {
                sVar11 = 0xe;
                uVar14 = 0xffff;
                pbVar18 = pbStack_100;
                do {
                  sVar11 = sVar11 + -1;
                  uVar1 = (uint)*pbVar18 ^ (uVar14 & 0xff00) >> 8;
                  uVar1 = uVar1 ^ uVar1 >> 4;
                  uVar14 = (uVar1 | uVar14 << 8) ^ uVar1 << 0xc ^ uVar1 << 5;
                  pbVar18 = pbVar18 + 1;
                } while (sVar11 != 0);
                bVar5 = (uVar14 & 0xffff) ==
                        ((uint)(*(ushort *)(pbStack_100 + 0xe) >> 8) |
                        (*(ushort *)(pbStack_100 + 0xe) & 0xff00ff) << 8);
              }
              else {
                bVar4 = false;
                bVar5 = false;
                if (pbStack_100 == (byte *)0x0) goto LAB_10568a460;
              }
              bVar4 = bVar5;
              pbStack_f8 = pbStack_100;
              __ZdlPv();
            }
            else {
              bVar4 = false;
            }
LAB_10568a460:
            if (iVar2 == 3) {
              bVar4 = true;
            }
            if (puStack_158 != (uint *)0x0) {
              puStack_150 = puStack_158;
              __ZdlPv();
            }
            if (lStack_160 < 0) {
              __ZdlPv(uStack_170);
            }
          }
          if (lStack_118 != 0) {
            lStack_110 = lStack_118;
            __ZdlPv();
          }
          if (lStack_120 < 0) {
            __ZdlPv(uStack_130);
          }
        }
        if (puStack_2a0 != (uint *)0x0) {
          puStack_298 = puStack_2a0;
          __ZdlPv();
        }
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (lStack_2a8 < 0) {
          __ZdlPv(uStack_2b8);
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        }
        PTR__OBJC_CLASS___NSNumber_1126ae570 = puVar7;
        if (!bVar4) goto LAB_10568a55c;
        func_0x00010c0df760(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSUUID_1126b0270;
        _objc_alloc();
        func_0x00010c057e80();
        plVar10 = (long *)PTR_PTR_1126bcae0;
        _objc_alloc(PTR_PTR_1126bcae0);
        puVar9 = puVar8;
        func_0x00010bdc3580();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c060a80(plVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
      }
      else {
LAB_10568a55c:
        plVar10 = (long *)PTR_PTR_1126bcae0;
        _objc_alloc(PTR_PTR_1126bcae0);
        func_0x00010c060a80();
      }
      _objc_release(0);
      if (lStack_248 != 0) {
        piVar17 = (int *)(lStack_248 + 0x14);
        do {
          iVar2 = *piVar17;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar4) {
            *piVar17 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&uStack_280);
        }
      }
      lStack_248 = 0;
      uStack_268 = 0;
      uStack_264 = 0;
      uStack_270 = 0;
      uStack_26c = 0;
      uStack_258 = 0;
      uStack_254 = 0;
      uStack_260 = 0;
      uStack_25c = 0;
      if (0 < (int)uStack_27c) {
        lVar15 = 0;
        do {
          *(undefined4 *)(lStack_240 + lVar15 * 4) = 0;
          lVar15 = lVar15 + 1;
        } while (lVar15 < (int)uStack_27c);
      }
      if (puStack_238 != &uStack_230 && puStack_238 != (undefined8 *)0x0) {
        _free(puStack_238[-1]);
      }
      if (puStack_1f8 != (uint *)0x0) {
        puStack_1f0 = puStack_1f8;
        __ZdlPv();
      }
      if (lStack_200 < 0) {
        __ZdlPv(uStack_210);
      }
      plVar6 = plStack_198;
      if (plStack_198 != (long *)0x0) {
        plStack_190 = plStack_198;
        __ZdlPv();
      }
      goto LAB_10568a62c;
    }
  }
  plVar6 = (long *)PTR_PTR_1126bcae0;
  _objc_alloc();
  func_0x00010c060a80();
  plVar10 = plVar6;
LAB_10568a62c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar10);
    return plVar10;
  }
  ___stack_chk_fail();
  FUN_10568a974(&uStack_2c8);
  FUN_10568a9b4(auStack_288);
  FUN_10568a974(&uStack_220);
  if (plStack_198 != (long *)0x0) {
    plStack_190 = plStack_198;
    __ZdlPv();
  }
  __Unwind_Resume();
  plVar10 = plVar6 + 2;
  puVar19 = (uint *)plVar6[1];
  if (puVar19 < (uint *)*plVar10) {
    puVar20 = puVar19 + 1;
    *puVar19 = *param_2;
  }
  else {
    lVar15 = (long)puVar19 - *plVar6;
    uVar12 = (lVar15 >> 2) + 1;
    if (uVar12 >> 0x3e != 0) {
      FUN_10507a6b8();
      if (plVar10[5] != 0) {
        plVar10[6] = plVar10[5];
        __ZdlPv();
      }
      if (*(char *)((long)plVar10 + 0x27) < '\0') {
        __ZdlPv(plVar10[2]);
      }
      return plVar10;
    }
    uVar13 = *plVar10 - *plVar6;
    uVar16 = (long)uVar13 >> 1;
    if (uVar16 <= uVar12) {
      uVar16 = uVar12;
    }
    if (0x7ffffffffffffffb < uVar13) {
      uVar16 = 0x3fffffffffffffff;
    }
    func_0x000100161bb8();
    puVar19 = (uint *)((long)plVar10 + lVar15);
    lVar15 = (long)plVar10 + uVar16 * 4;
    lVar21 = (long)puVar19 - (plVar6[1] - *plVar6);
    puVar20 = puVar19 + 1;
    *puVar19 = *param_2;
    _memcpy(lVar21);
    plVar10 = (long *)*plVar6;
    *plVar6 = lVar21;
    plVar6[1] = (long)puVar20;
    plVar6[2] = lVar15;
    if (plVar10 != (long *)0x0) {
      __ZdlPv();
    }
  }
  plVar6[1] = (long)puVar20;
  return plVar10;
}



/* Entry: 10568a8b4; end: 10568a973;  */

long * FUN_10568a8b4(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  
  plVar2 = param_1 + 2;
  puVar6 = (undefined4 *)param_1[1];
  if (puVar6 < (undefined4 *)*plVar2) {
    puVar8 = puVar6 + 1;
    *puVar6 = *param_2;
  }
  else {
    lVar7 = (long)puVar6 - *param_1;
    uVar1 = (lVar7 >> 2) + 1;
    if (uVar1 >> 0x3e != 0) {
      FUN_10507a6b8();
      if (plVar2[5] != 0) {
        plVar2[6] = plVar2[5];
        __ZdlPv();
      }
      if (*(char *)((long)plVar2 + 0x27) < '\0') {
        __ZdlPv(plVar2[2]);
      }
      return plVar2;
    }
    uVar3 = *plVar2 - *param_1;
    uVar4 = (long)uVar3 >> 1;
    if (uVar4 <= uVar1) {
      uVar4 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar3) {
      uVar4 = 0x3fffffffffffffff;
    }
    func_0x000100161bb8();
    puVar6 = (undefined4 *)((long)plVar2 + lVar7);
    lVar7 = (long)plVar2 + uVar4 * 4;
    lVar5 = (long)puVar6 - (param_1[1] - *param_1);
    puVar8 = puVar6 + 1;
    *puVar6 = *param_2;
    _memcpy(lVar5);
    plVar2 = (long *)*param_1;
    *param_1 = lVar5;
    param_1[1] = (long)puVar8;
    param_1[2] = lVar7;
    if (plVar2 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar8;
  return plVar2;
}



/* Entry: 10568a974; end: 10568a9b3;  */

long FUN_10568a974(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
  }
  return param_1;
}



/* Entry: 10568a9b4; end: 10568aa53;  */

long FUN_10568a9b4(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x40) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 8);
    }
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x48);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0xc));
  }
  lVar5 = *(long *)(param_1 + 0x50);
  if (lVar5 != param_1 + 0x58 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 10568aa54; end: 10568ab0b; -[SCPercMLSnapScanSnapcodeDetectionModel _snapScanModelFromDeliverableModel:error:] */

void FUN_10568aa54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0d0000();
  if ((int)uVar1 == 6) {
    uVar1 = param_3;
    func_0x00010c245d60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0cfdc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    func_0x0001056895a8();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    uVar2 = 0;
    *param_4 = uVar1;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10568ab0c; end: 10568acc7; -[SCPercMLSnapScanSnapcodeDetectionModel _snapcodeTypesFromSnapScanModel:error:] */

void FUN_10568ab0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105689b14;
  uStack_40 = 0x105689b24;
  uStack_38 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_105689b14;
  uStack_70 = 0x105689b24;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uVar4 = param_3;
  puStack_68 = puVar1;
  func_0x00010c244fc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c245220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf980c0();
  _objc_release(uVar2);
  _objc_release(uVar4);
  lVar3 = puStack_58[5];
  if (lVar3 == 0) {
    uVar4 = puStack_88[5];
    _objc_retain(uVar4);
  }
  else {
    _objc_retainAutorelease();
    uVar4 = 0;
    *param_4 = lVar3;
  }
  __Block_object_dispose(&uStack_90,8);
  _objc_release(puStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10568acc8; end: 10568ad6f;  */

void FUN_10568acc8(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((int)param_2 != 0) {
    puVar1 = PTR_PTR_1126bca90;
    func_0x00010bebd180(PTR_PTR_1126bca90,(int)param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  lVar2 = param_1;
  func_0x0001056895a8();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
  *param_4 = 1;
  return;
}



/* Entry: 10568ad70; end: 10568ae1b; +[SCPercMLSnapScanSnapcodeDetectionModel _snapScanTypeFromProtoType:] */

void FUN_10568ad70(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = uRam00000001136bd428;
  if (lRam00000001136bd430 != -1) {
    func_0x00010002a2fc(0x1136bd430,&PTR___NSConcreteGlobalBlock_1108a64b8);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar2 = uRam00000001136bd428;
  }
  PTR__OBJC_CLASS___NSNumber_1126ae570 = puVar1;
  uRam00000001136bd428 = uVar2;
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010c0df760(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10568ae1c; end: 10568aebb;  */

long FUN_10568ae1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_38 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c10a8;
  ppuStack_30 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c10d8;
  ppuStack_28 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c10c0;
  ppuStack_20 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c10f0;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_28,&ppuStack_38,2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)puRam00000001136bd428;
  puRam00000001136bd428 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return lVar2;
  }
  ___stack_chk_fail();
  return *(long *)(lVar2 + 0x18);
}



/* Entry: 10568aebc; end: 10568aec3; -[SCPercMLSnapScanSnapcodeDetectionModel approximateSizeInBytes] */

undefined8 FUN_10568aebc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10568aec4; end: 10568aecb; -[SCPercMLSnapScanSnapcodeDetectionModel modelKey] */

undefined8 FUN_10568aec4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10568aecc; end: 10568aed3; -[SCPercMLSnapScanSnapcodeDetectionModel modelId] */

undefined8 FUN_10568aecc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10568aed4; end: 10568aedb; -[SCPercMLSnapScanSnapcodeDetectionModel snapcodeTypes] */

undefined8 FUN_10568aed4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10568aedc; end: 10568aee3; -[SCPercMLSnapScanSnapcodeDetectionModel isFalseAlarmCheckEnabled] */

undefined1 FUN_10568aedc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 10568aee4; end: 10568aeeb; -[SCPercMLSnapScanSnapcodeDetectionModel isContourEnhancementEnabled] */

undefined1 FUN_10568aee4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 10568aeec; end: 10568aef3; -[SCPercMLSnapScanSnapcodeDetectionModel isInTestMode] */

undefined1 FUN_10568aeec(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 10568aef4; end: 10568aefb; -[SCPercMLSnapScanSnapcodeDetectionModel setIsInTestMode:] */

void FUN_10568aef4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x12) = param_3;
  return;
}



/* Entry: 10568aefc; end: 10568af43; -[SCPercMLSnapScanSnapcodeDetectionModel .cxx_destruct] */

void FUN_10568aefc(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10568af44; end: 10568b15b; -[SCPercMLVisionBarcodeDetectionModel initWithModelKey:modelId:deliverableModel:error:] */

/* WARNING: Removing unreachable block (ram,0x00010568b0e0) */
/* WARNING: Removing unreachable block (ram,0x00010568b0e4) */
/* WARNING: Removing unreachable block (ram,0x00010568b0f0) */

undefined8 *
FUN_10568af44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126e98f0;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[4];
    puVar1[4] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[5];
    puVar1[5] = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar5 = puVar1;
    func_0x00010beea280(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    puVar6 = puVar1;
    func_0x00010beea340();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    uVar2 = puVar1[2];
    puVar1[2] = puVar6;
    _objc_release(uVar2);
    puVar6 = puVar1;
    func_0x00010bec9660();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    uVar2 = puVar1[6];
    puVar1[6] = puVar6;
    _objc_release(uVar2);
    _objc_release(puVar5);
  }
  _objc_retain(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar1;
}



/* Entry: 10568b15c; end: 10568b35f; -[SCPercMLVisionBarcodeDetectionModel detectBarcodesWithBatchImages:] */

void FUN_10568b15c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  lVar1 = param_3;
  _objc_retain();
  if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    _dispatch_group_create();
    _dispatch_group_enter();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae750;
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_10568b360;
    uStack_60 = 0x10568b370;
    uVar4 = uVar2;
    func_0x00010568c5e0();
    _objc_retainAutoreleasedReturnValue();
    FUN_10568c5fc();
    func_0x00010bf993e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = puVar3;
    _objc_release(uVar4);
    _objc_initWeak(auStack_88,param_1);
    uVar4 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_90,auStack_88);
    _objc_retain(param_3);
    _objc_retain(uVar2);
    _objc_retain(lVar1);
    func_0x00010c0f7fc0(uVar4);
    uVar4 = 0;
    _dispatch_time(0,3000000000);
    _dispatch_group_wait(lVar1,uVar4);
    uVar4 = puStack_78[5];
    _objc_retain(uVar4);
    _objc_release(lVar1);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(puStack_58);
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10568b360; end: 10568b377;  */

void FUN_10568b360(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10568b378; end: 10568b41b;  */

void FUN_10568b378(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10568b41c;
  puStack_48 = &UNK_110860220;
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uStack_40 = uVar4;
  uStack_38 = uVar5;
  func_0x00010bdfb920(lVar3,param_2,uVar1,uVar2,&puStack_60);
  _objc_release(lVar3);
  _objc_release(uStack_40);
  return;
}



/* Entry: 10568b41c; end: 10568b493;  */

void FUN_10568b41c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ae750;
  if (param_3 == 0) {
    func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_10568c5fc(param_3);
    func_0x00010bf993e0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10568b494; end: 10568b823; -[SCPercMLVisionBarcodeDetectionModel _detectBarcodesWithBatchImages:completionQueue:completion:] */

/* WARNING: Removing unreachable block (ram,0x00010568b76c) */

ulong FUN_10568b494(undefined8 param_1,undefined **param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  ulong uVar12;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (uVar3 != 0) {
    uVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      puVar4 = PTR__OBJC_CLASS___VNDetectBarcodesRequest_1126bcae8;
      _objc_alloc_init();
      func_0x00010c210b20();
      puVar5 = PTR__OBJC_CLASS___VNImageRequestHandler_1126bcaf0;
      _objc_alloc(PTR__OBJC_CLASS___VNImageRequestHandler_1126bcaf0);
      func_0x00010be79aa0(param_1);
      func_0x00010bfe8380();
      func_0x00010bffa260(puVar5);
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f8dc0(puVar5);
      _objc_retain(0);
      _objc_release(puVar6);
      puVar6 = puVar4;
      func_0x00010c13cf20(puVar4);
      _objc_retainAutoreleasedReturnValue();
      param_2 = &PTR___NSConcreteGlobalBlock_1108a64f8;
      puVar7 = puVar6;
      func_0x0001006372a4();
      puVar8 = puVar7;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar6);
      puVar7 = PTR_PTR_1126bcb00;
      _objc_alloc(PTR_PTR_1126bcb00);
      puVar6 = PTR_PTR_1126bca80;
      puVar9 = puVar8;
      func_0x00010c265b00(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bec9680(puVar6);
      puVar6 = puVar8;
      func_0x00010c0f66c0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04fce0(puVar7);
      func_0x00010befa120(puVar2);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar5);
      _objc_release(puVar4);
      uVar12 = uVar12 + 1;
    } while (uVar3 != uVar12);
    uVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  func_0x00010be0b7e0(param_1);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    puVar2 = PTR__OBJC_CLASS___VNBarcodeObservation_1126bcaf8;
    _objc_opt_class(PTR__OBJC_CLASS___VNBarcodeObservation_1126bcaf8);
    ppuVar10 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    _objc_release(param_2);
    return (ulong)((uint)(param_2 != (undefined **)0x0) & (uint)ppuVar10);
  }
  return param_3;
}



/* Entry: 10568b824; end: 10568b87f;  */

uint FUN_10568b824(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___VNBarcodeObservation_1126bcaf8;
  _objc_opt_class(PTR__OBJC_CLASS___VNBarcodeObservation_1126bcaf8);
  lVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  _objc_release(param_2);
  return (uint)(param_2 != 0) & (uint)lVar2;
}



/* Entry: 10568b880; end: 10568b9b7; -[SCPercMLVisionBarcodeDetectionModel _preprocessImage:] */

undefined8
FUN_10568b880(double param_1,double param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             )

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  _objc_retain(param_5);
  func_0x00010c23d0a0(param_5);
  dVar2 = param_1;
  func_0x00010c23d0a0(param_5);
  dVar4 = param_2;
  if (param_1 < param_2) {
LAB_10568b900:
    func_0x00010c23d0a0(param_5);
    dVar3 = dVar4;
    func_0x00010c23d0a0(param_5);
    if (dVar4 < dVar2) goto LAB_10568b98c;
    func_0x00010c23d0a0(param_5);
    dVar4 = dVar2;
    func_0x00010c14e120(param_5);
    dVar2 = dVar2 * dVar4;
    dVar4 = 1080.0;
    if (dVar2 <= 1080.0) goto LAB_10568b98c;
    func_0x00010c23d0a0(param_5);
    func_0x00010c23d0a0(param_5);
    dVar3 = (dVar3 / dVar2) * 1080.0;
  }
  else {
    func_0x00010c23d0a0(param_5);
    dVar4 = param_2;
    func_0x00010c14e120(param_5);
    dVar2 = param_2 * dVar2;
    dVar3 = 1080.0;
    if (dVar2 <= 1080.0) goto LAB_10568b900;
    func_0x00010c23d0a0(param_5);
    func_0x00010c23d0a0(param_5);
    dVar4 = (dVar2 / dVar4) * 1080.0;
  }
  uVar1 = param_5;
  func_0x00010c14e6c0(dVar4,dVar3,0x3ff0000000000000,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  param_5 = uVar1;
LAB_10568b98c:
  uVar1 = param_5;
  _objc_retainAutorelease(param_5);
  func_0x00010bdc1020();
  _objc_release(param_5);
  return uVar1;
}



/* Entry: 10568b9b8; end: 10568ba97; -[SCPercMLVisionBarcodeDetectionModel _visionModelFromDeliverableModel:error:] */

void FUN_10568b9b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0d0000();
  if ((int)uVar1 == 4) {
    uVar1 = param_3;
    func_0x00010c2a0200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0cfdc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c136d60();
    _objc_release(uVar3);
    _objc_release();
    if ((int)uVar2 == 1) {
      uVar1 = param_3;
      func_0x00010c2a0200(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c0cfdc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      goto LAB_10568ba78;
    }
  }
  FUN_10568c5a8();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  uVar3 = 0;
  *param_4 = uVar1;
LAB_10568ba78:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10568ba98; end: 10568bc47; -[SCPercMLVisionBarcodeDetectionModel _vnSupportedSymbologiesFromVisionModel:error:] */

void FUN_10568ba98(undefined8 param_1,undefined8 param_2,long param_3,long *param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010c135de0();
  if ((int)lVar3 == 2) {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_10568b360;
    uStack_40 = 0x10568b370;
    uStack_38 = 0;
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_10568b360;
    uStack_70 = 0x10568b370;
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    lVar3 = param_3;
    puStack_68 = puVar1;
    func_0x00010bf6f900(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c265ae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf980c0();
    _objc_release(lVar2);
    _objc_release(lVar3);
    lVar3 = puStack_58[5];
    if (lVar3 == 0) {
      uVar4 = puStack_88[5];
      _objc_retain(uVar4);
    }
    else {
      _objc_retainAutorelease();
      uVar4 = 0;
      *param_4 = lVar3;
    }
    __Block_object_dispose(&uStack_90,8);
    _objc_release(puStack_68);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  else {
    FUN_10568c5a8();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    uVar4 = 0;
    *param_4 = lVar3;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10568bc48; end: 10568bce3;  */

void FUN_10568bc48(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  
  ppuVar1 = (undefined **)PTR_PTR_1126bca80;
  func_0x00010beea360(PTR_PTR_1126bca80,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 == &PTR____CFConstantStringClassReference_110daf6b8) {
    ppuVar2 = ppuVar1;
    FUN_10568c5a8();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined ***)(lVar4 + 0x28) = ppuVar2;
    _objc_release(uVar3);
    *param_4 = 1;
  }
  else {
    func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 10568bce4; end: 10568be7f; -[SCPercMLVisionBarcodeDetectionModel _symbologiesFromVNSymbologies:error:] */

void FUN_10568bce4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
      _objc_release(param_3);
      _objc_retain(ppuVar2);
      ppuVar6 = ppuVar2;
LAB_10568be30:
      _objc_release(ppuVar2);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
        ___stack_chk_fail();
        if (lRam00000001136bd440 != -1) {
          func_0x00010002a2fc(0x1136bd440,&PTR___NSConcreteGlobalBlock_1108a6548);
        }
        ppuVar2 = ppuRam00000001136bd438;
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        if (ppuVar2 == (undefined **)0x0) {
          ppuVar6 = &PTR____CFConstantStringClassReference_110daf6b8;
        }
        else {
          _objc_retain(ppuVar2);
          ppuVar6 = ppuVar2;
        }
        _objc_release(ppuVar2);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
      return;
    }
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      puVar4 = PTR_PTR_1126bca80;
      func_0x00010bec9680();
      if (puVar4 == (undefined *)0x0) {
        FUN_10568c5a8();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_4 = puVar4;
        _objc_release(param_3);
        ppuVar6 = (undefined **)0x0;
        goto LAB_10568be30;
      }
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(ppuVar2);
      _objc_release(puVar4);
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    lVar3 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10568be80; end: 10568bf37; +[SCPercMLVisionBarcodeDetectionModel _vnSymbologyFromVisionSymbology:] */

void FUN_10568be80(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  if (lRam00000001136bd440 != -1) {
    func_0x00010002a2fc(0x1136bd440,&PTR___NSConcreteGlobalBlock_1108a6548);
  }
  ppuVar2 = ppuRam00000001136bd438;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daf6b8;
  }
  else {
    _objc_retain(ppuVar2);
    ppuVar3 = ppuVar2;
  }
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10568bf38; end: 10568c173;  */

long FUN_10568bf38(void)

{
  undefined *puVar1;
  long lVar2;
  undefined ***pppuVar3;
  long lVar4;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110daf6b8;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110daf6b8;
  uStack_b0 = *(undefined8 *)PTR__VNBarcodeSymbologyAztec_11034a3e0;
  uStack_a8 = *(undefined8 *)PTR__VNBarcodeSymbologyCode39_11034a3f0;
  uStack_a0 = *(undefined8 *)PTR__VNBarcodeSymbologyCode39Checksum_11034a3f8;
  uStack_98 = *(undefined8 *)PTR__VNBarcodeSymbologyCode39FullASCII_11034a400;
  uStack_90 = *(undefined8 *)PTR__VNBarcodeSymbologyCode39FullASCIIChecksum_11034a408;
  uStack_88 = *(undefined8 *)PTR__VNBarcodeSymbologyCode93_11034a410;
  uStack_80 = *(undefined8 *)PTR__VNBarcodeSymbologyCode93i_11034a418;
  uStack_78 = *(undefined8 *)PTR__VNBarcodeSymbologyCode128_11034a3e8;
  uStack_70 = *(undefined8 *)PTR__VNBarcodeSymbologyDataMatrix_11034a420;
  uStack_68 = *(undefined8 *)PTR__VNBarcodeSymbologyEAN8_11034a430;
  uStack_60 = *(undefined8 *)PTR__VNBarcodeSymbologyEAN13_11034a428;
  uStack_58 = *(undefined8 *)PTR__VNBarcodeSymbologyI2of5_11034a438;
  uStack_50 = *(undefined8 *)PTR__VNBarcodeSymbologyI2of5Checksum_11034a440;
  uStack_48 = *(undefined8 *)PTR__VNBarcodeSymbologyITF14_11034a448;
  uStack_40 = *(undefined8 *)PTR__VNBarcodeSymbologyPDF417_11034a450;
  uStack_38 = *(undefined8 *)PTR__VNBarcodeSymbologyQR_11034a458;
  uStack_30 = *(undefined8 *)PTR__VNBarcodeSymbologyUPCE_11034a460;
  pppuVar3 = &ppuStack_c0;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)puRam00000001136bd438;
  puRam00000001136bd438 = puVar1;
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return lVar2;
  }
  ___stack_chk_fail();
  _objc_retain(pppuVar3);
  lVar2 = lRam00000001136bd448;
  if (lRam00000001136bd450 != -1) {
    func_0x00010002a2fc(0x1136bd450,&PTR___NSConcreteGlobalBlock_1108a6568);
    lVar2 = lRam00000001136bd448;
  }
  lRam00000001136bd448 = lVar2;
  if (pppuVar3 == (undefined ***)0x0) {
    lVar4 = 0;
  }
  else {
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar2;
      func_0x00010c2827c0(lVar2);
    }
    _objc_release(lVar2);
  }
  _objc_release(pppuVar3);
  return lVar4;
}



/* Entry: 10568c174; end: 10568c21b; +[SCPercMLVisionBarcodeDetectionModel _symbologyFromVNSymbology:] */

long FUN_10568c174(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = lRam00000001136bd448;
  if (lRam00000001136bd450 != -1) {
    func_0x00010002a2fc(0x1136bd450,&PTR___NSConcreteGlobalBlock_1108a6568);
    lVar1 = lRam00000001136bd448;
  }
  lRam00000001136bd448 = lVar1;
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar1;
      func_0x00010c2827c0(lVar1);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 10568c21c; end: 10568c447;  */

void FUN_10568c21c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined8 uVar5;
  undefined8 in_x5;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined ***pppuStack_188;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_140 = *(undefined8 *)PTR__VNBarcodeSymbologyAztec_11034a3e0;
  ppuStack_148 = &PTR____CFConstantStringClassReference_110daf6b8;
  ppuStack_b8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c12d0;
  ppuStack_b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c12e8;
  uStack_138 = *(undefined8 *)PTR__VNBarcodeSymbologyCode39_11034a3f0;
  uStack_130 = *(undefined8 *)PTR__VNBarcodeSymbologyCode39Checksum_11034a3f8;
  ppuStack_a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1300;
  ppuStack_a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1318;
  uStack_128 = *(undefined8 *)PTR__VNBarcodeSymbologyCode39FullASCII_11034a400;
  uStack_120 = *(undefined8 *)PTR__VNBarcodeSymbologyCode39FullASCIIChecksum_11034a408;
  ppuStack_98 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1330;
  ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1348;
  uStack_118 = *(undefined8 *)PTR__VNBarcodeSymbologyCode93_11034a410;
  uStack_110 = *(undefined8 *)PTR__VNBarcodeSymbologyCode93i_11034a418;
  ppuStack_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1360;
  ppuStack_80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1378;
  uStack_108 = *(undefined8 *)PTR__VNBarcodeSymbologyCode128_11034a3e8;
  uStack_100 = *(undefined8 *)PTR__VNBarcodeSymbologyDataMatrix_11034a420;
  ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1390;
  ppuStack_70 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c13a8;
  uStack_f8 = *(undefined8 *)PTR__VNBarcodeSymbologyEAN8_11034a430;
  uStack_f0 = *(undefined8 *)PTR__VNBarcodeSymbologyEAN13_11034a428;
  ppuStack_68 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c13c0;
  ppuStack_60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c13d8;
  uStack_e8 = *(undefined8 *)PTR__VNBarcodeSymbologyI2of5_11034a438;
  uStack_e0 = *(undefined8 *)PTR__VNBarcodeSymbologyI2of5Checksum_11034a440;
  ppuStack_58 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c13f0;
  ppuStack_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1408;
  uStack_d8 = *(undefined8 *)PTR__VNBarcodeSymbologyITF14_11034a448;
  uStack_d0 = *(undefined8 *)PTR__VNBarcodeSymbologyPDF417_11034a450;
  ppuStack_48 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1420;
  ppuStack_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1438;
  uStack_c8 = *(undefined8 *)PTR__VNBarcodeSymbologyQR_11034a458;
  uStack_c0 = *(undefined8 *)PTR__VNBarcodeSymbologyUPCE_11034a460;
  ppuStack_38 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1450;
  ppuStack_30 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1468;
  pppuVar3 = &ppuStack_b8;
  pppuVar4 = &ppuStack_148;
  uVar5 = 0x12;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136bd448;
  puRam00000001136bd448 = puVar2;
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(pppuVar3);
  _objc_retain(uVar5);
  _objc_retain(in_x5);
  puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1b0 = 0xc2000000;
  pcStack_1a8 = FUN_10568c520;
  puStack_1a0 = &UNK_11084a9e8;
  uStack_198 = uVar5;
  uStack_190 = in_x5;
  pppuStack_188 = pppuVar3;
  _objc_retain(in_x5);
  _objc_retain(uVar5);
  _objc_retain(pppuVar3);
  func_0x00010007380c(pppuVar4,&puStack_1b8);
  _objc_release(uStack_190);
  _objc_release(uStack_198);
  _objc_release(pppuStack_188);
  _objc_release(in_x5);
  _objc_release(uVar5);
  _objc_release(pppuVar3);
  return;
}



/* Entry: 10568c448; end: 10568c51f; -[SCPercMLVisionBarcodeDetectionModel _executeBatchResultsCompletion:completionQueue:batchResults:error:] */

void FUN_10568c448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10568c520;
  puStack_50 = &UNK_11084a9e8;
  uStack_48 = param_5;
  uStack_40 = param_6;
  uStack_38 = param_3;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010007380c(param_4,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_38);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}


