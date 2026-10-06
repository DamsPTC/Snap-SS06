/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aa04a60; end: 10aa04afb;  */

void FUN_10aa04a60(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)param_2[0x59] < 8) {
    param_2[param_2[0x59] + 0x4e] = param_2[0x5a];
    param_2[0x59] = param_2[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(param_2 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  *(undefined8 *)(param_1 + 2) = 0x4077d00000000000;
  plVar1 = param_2 + 0x4b;
  lVar4 = param_2[0x59];
  uVar5 = lVar4 - 1;
  param_2[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar4 + 2];
    if (param_2[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(param_2[0x57] + -8);
    param_2[0x57] = param_2[0x57] + -8;
    if (param_2[0x5a] == uVar5) {
      return;
    }
  }
  lVar4 = *plVar1;
  lVar9 = param_2[0x4c];
  lVar7 = lVar9 - lVar4;
  uVar11 = lVar7 >> 4;
  if (uVar11 < uVar5) {
    uVar12 = uVar5 - uVar11;
    lVar10 = param_2[0x4d];
    if ((ulong)(lVar10 - lVar9 >> 4) < uVar12) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar10 - lVar4 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar10 - lVar4)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar9 = lVar3 + lVar7;
          _bzero(lVar9,uVar12 * 0x10);
          lVar8 = lVar9 + uVar11 * -0x10;
          _memcpy(lVar8,lVar4,lVar7);
          *plVar1 = lVar8;
          param_2[0x4c] = lVar9 + uVar12 * 0x10;
          param_2[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar4;
          lStack_80 = lVar4;
          lStack_78 = lVar4;
          lStack_70 = lVar10;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar9,uVar12 * 0x10);
    param_2[0x4c] = lVar9 + uVar12 * 0x10;
  }
  else if (uVar5 < uVar11) {
    lVar4 = lVar4 + uVar5 * 0x10;
    while (lVar9 != lVar4) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    param_2[0x4c] = lVar4;
  }
code_r0x00010988c138:
  param_2[0x5a] = uVar5;
  return;
}



/* Entry: 10aa04afc; end: 10aa04b53;  */

long FUN_10aa04afc(long param_1)

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



/* Entry: 10aa04b54; end: 10aa04b63;  */

void FUN_10aa04b54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c37a68;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aa04b64; end: 10aa04b83;  */

void FUN_10aa04b64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c37a68;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa04b84; end: 10aa04b93;  */

void FUN_10aa04b84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010aa04b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10aa04b94; end: 10aa04beb;  */

long FUN_10aa04b94(long param_1)

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



/* Entry: 10aa04bec; end: 10aa04bfb;  */

void FUN_10aa04bec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c37ab8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aa04bfc; end: 10aa04c1b;  */

void FUN_10aa04bfc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c37ab8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa04c1c; end: 10aa04c2b;  */

void FUN_10aa04c1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010aa04c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10aa04c2c; end: 10aa04cd3;  */

undefined8 * FUN_10aa04c2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c37b08;
  (**(code **)param_1[9])();
  FUN_10aa04e78(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10aa04cd4; end: 10aa04d37;  */

bool FUN_10aa04cd4(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x93) {
    iVar1 = 0xe4eadb6;
    _memcmp(&UNK_10e4eadb6);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10aa04d38; end: 10aa04e57;  */

void FUN_10aa04d38(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  undefined7 uStack_28;
  byte bStack_21;
  
  func_0x000107c2b054(param_1,&UNK_10f6891b4);
  uVar1 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (uVar1 == 0) {
    func_0x00010989f98c(&ppuStack_38,param_2);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    param_1[1] = uStack_30;
    *param_1 = (long)ppuStack_38;
    param_1[2] = CONCAT17(bStack_21,uStack_28);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&UNK_10f685178,7);
  __ZNSt3__19to_stringEm(&ppuStack_38,*(undefined8 *)(param_2 + 0x30));
  pppuVar2 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar2 = &ppuStack_38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar2,uStack_30);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f684600,1);
  return;
}



/* Entry: 10aa04e58; end: 10aa04e67;  */

undefined1  [16] FUN_10aa04e58(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x93;
  auVar1._0_8_ = &UNK_10e4eadb6;
  return auVar1;
}



/* Entry: 10aa04e68; end: 10aa04e77;  */

long * FUN_10aa04e68(undefined8 param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  
  func_0x000105277f8c();
  plVar1 = (long *)param_2[2];
  while( true ) {
    if (plVar1 == (long *)0x0) {
      lVar3 = *param_2;
      *param_2 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      return param_2;
    }
    if (3 < (ulong)*(byte *)(plVar1 + 0xc)) break;
    lVar3 = *plVar1;
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(plVar1 + 0xc)])(plVar1 + 4);
    FUN_10a004978(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa04ef8);
  (*pcVar2)();
}



/* Entry: 10aa04e78; end: 10aa04ef7;  */

long * FUN_10aa04e78(long *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[2];
  while( true ) {
    if (plVar1 == (long *)0x0) {
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    if (3 < (ulong)*(byte *)(plVar1 + 0xc)) break;
    lVar3 = *plVar1;
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(plVar1 + 0xc)])(plVar1 + 4);
    FUN_10a004978(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa04ef8);
  (*pcVar2)();
}



/* Entry: 10aa04ef8; end: 10aa04f4f;  */

long FUN_10aa04ef8(long param_1)

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



/* Entry: 10aa04f50; end: 10aa04f5f;  */

void FUN_10aa04f50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c37b60;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aa04f60; end: 10aa04f7f;  */

void FUN_10aa04f60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c37b60;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa04f80; end: 10aa04f8f;  */

void FUN_10aa04f80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010aa04f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10aa04f90; end: 10aa05037;  */

undefined8 * FUN_10aa04f90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c37bb0;
  (**(code **)param_1[9])();
  FUN_10aa051dc(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10aa05038; end: 10aa0509b;  */

bool FUN_10aa05038(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x8a) {
    iVar1 = 0xe4eaebd;
    _memcmp(&UNK_10e4eaebd);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10aa0509c; end: 10aa051bb;  */

void FUN_10aa0509c(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  undefined7 uStack_28;
  byte bStack_21;
  
  func_0x000107c2b054(param_1,&UNK_10f6891b4);
  uVar1 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (uVar1 == 0) {
    func_0x00010989f98c(&ppuStack_38,param_2);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    param_1[1] = uStack_30;
    *param_1 = (long)ppuStack_38;
    param_1[2] = CONCAT17(bStack_21,uStack_28);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&UNK_10f685178,7);
  __ZNSt3__19to_stringEm(&ppuStack_38,*(undefined8 *)(param_2 + 0x30));
  pppuVar2 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar2 = &ppuStack_38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar2,uStack_30);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f684600,1);
  return;
}



/* Entry: 10aa051bc; end: 10aa051cb;  */

undefined1  [16] FUN_10aa051bc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8a;
  auVar1._0_8_ = &UNK_10e4eaebd;
  return auVar1;
}



/* Entry: 10aa051cc; end: 10aa051db;  */

long * FUN_10aa051cc(undefined8 param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  
  func_0x000105277f8c();
  plVar1 = (long *)param_2[2];
  while( true ) {
    if (plVar1 == (long *)0x0) {
      lVar3 = *param_2;
      *param_2 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      return param_2;
    }
    if (3 < (ulong)*(byte *)(plVar1 + 0xc)) break;
    lVar3 = *plVar1;
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(plVar1 + 0xc)])(plVar1 + 4);
    FUN_10a004978(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa0525c);
  (*pcVar2)();
}



/* Entry: 10aa051dc; end: 10aa0525b;  */

long * FUN_10aa051dc(long *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[2];
  while( true ) {
    if (plVar1 == (long *)0x0) {
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    if (3 < (ulong)*(byte *)(plVar1 + 0xc)) break;
    lVar3 = *plVar1;
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(plVar1 + 0xc)])(plVar1 + 4);
    FUN_10a004978(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa0525c);
  (*pcVar2)();
}



/* Entry: 10aa0525c; end: 10aa052b3;  */

long FUN_10aa0525c(long param_1)

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



/* Entry: 10aa052b4; end: 10aa054a7;  */

void FUN_10aa052b4(undefined ***param_1,undefined **param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  int iVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  undefined ***unaff_x22;
  undefined ***pppuStack_88;
  undefined ***pppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined ***pppuStack_60;
  undefined ***pppuStack_58;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar10 = (undefined **)param_2[2];
  if (param_1[6] == (undefined **)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      pppuVar4 = (undefined ***)(ppuVar10 + 0x13);
      lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuVar8 = ppuVar10 + 0x14;
      if ((*ppuVar8)[8] == '\x01') {
        ppuStack_78 = *pppuVar4;
        param_2 = ppuVar8;
        (**(code **)(*ppuVar8 + 0x10))(&ppuStack_70);
        *pppuVar4 = (undefined **)&UNK_1053a6a3c;
        (**(code **)ppuVar10[0x14])(ppuVar8);
        ppuVar10[0x14] = (undefined *)&PTR_DAT_110ae9180;
        (*(code *)ppuStack_78)(&ppuStack_78);
        pppuVar4 = &ppuStack_70;
        (*(code *)*ppuStack_70)();
      }
      iVar6 = (int)param_2;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
        return;
      }
      ___stack_chk_fail();
      if (iVar6 == 0) {
        __Unwind_Resume();
      }
      func_0x000104bd46a0();
      pppuStack_88 = (undefined ***)FUN_10a044868;
      if (**pppuVar4 != (undefined *)0x0) {
        FUN_10a021eb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(**pppuVar4);
        return;
      }
      return;
    }
  }
  else {
    if ((ppuVar10[0x14][8] & 1) == 0) {
      plVar3 = *(long **)(*(long *)(ppuVar10[3] + 0x100) + 0x1c8);
      (**(code **)(*plVar3 + 0x130))();
      pppuVar4 = (undefined ***)plVar3[1];
      param_1 = pppuVar4;
      if (pppuVar4 != (undefined ***)0x0) {
        __ZNSt3__119__shared_weak_count4lockEv();
        param_1 = pppuVar4;
        pppuStack_80 = pppuVar4;
        if (pppuVar4 != (undefined ***)0x0) {
          pppuVar9 = (undefined ***)*plVar3;
          pppuStack_88 = pppuVar9;
          if (pppuVar9 != (undefined ***)0x0) {
            ppuStack_78 = &PTR_FUN_110c37c08;
            pppuVar5 = pppuVar9;
            ppuStack_70 = ppuVar10;
            pppuStack_60 = &ppuStack_78;
            (*(code *)(*pppuVar9)[3])(pppuVar9,&ppuStack_78);
            *(int *)(ppuVar10 + 0x1b) = (int)pppuVar5;
            if (pppuStack_60 == &ppuStack_78) {
              lVar7 = 0x20;
LAB_10aa053a8:
              (**(code **)((long)*pppuStack_60 + lVar7))();
            }
            else if (pppuStack_60 != (undefined ***)0x0) {
              lVar7 = 0x28;
              goto LAB_10aa053a8;
            }
            pppuVar5 = pppuVar4 + 2;
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
              if (bVar2) {
                *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            ppuStack_78 = (undefined **)FUN_10aa05eb0;
            ppuStack_70 = &PTR_FUN_110c37ce0;
            unaff_x22 = &ppuStack_78;
            ppuStack_68 = ppuVar10;
            pppuStack_60 = pppuVar9;
            pppuStack_58 = pppuVar4;
            func_0x00010a108320(ppuVar10 + 0x13,&ppuStack_78);
            FUN_10a044790(&ppuStack_78);
            param_1 = &ppuStack_70;
            (*(code *)*ppuStack_70)(param_1);
          }
          pppuVar9 = pppuVar4 + 1;
          do {
            ppuVar10 = *pppuVar9;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
            if (bVar2) {
              *pppuVar9 = (undefined **)((long)ppuVar10 + -1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (ppuVar10 == (undefined **)0x0) {
            (*(code *)(*pppuVar4)[2])(pppuVar4);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar4);
            param_1 = pppuVar4;
          }
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
  }
  ___stack_chk_fail();
  if (pppuStack_60 == unaff_x22) {
    lVar7 = 0x20;
  }
  else {
    if (pppuStack_60 == (undefined ***)0x0) goto LAB_10aa05498;
    lVar7 = 0x28;
  }
  (**(code **)((long)*pppuStack_60 + lVar7))();
LAB_10aa05498:
  FUN_10aa0525c(&pppuStack_88);
  __Unwind_Resume(param_1);
  return;
}



/* Entry: 10aa054a8; end: 10aa054af;  */

void FUN_10aa054a8(void)

{
  return;
}



/* Entry: 10aa054b0; end: 10aa054e3;  */

void FUN_10aa054b0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110c37c08;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10aa054e4; end: 10aa054ff;  */

void FUN_10aa054e4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110c37c08;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10aa05500; end: 10aa05b4b;  */

undefined ** FUN_10aa05500(long param_1,undefined1 *param_2)

{
  undefined **ppuVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined1 uVar11;
  ulong uVar12;
  long lVar13;
  code *pcVar14;
  ulong uVar15;
  long *plVar16;
  undefined *puVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined ***unaff_x23;
  ulong unaff_x26;
  ulong uVar23;
  long lVar24;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  long lStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  ulong uStack_108;
  long *plStack_100;
  long lStack_f8;
  float fStack_f0;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *param_2;
  lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x88);
  ppuStack_118 = *(undefined ***)(*(long *)(param_1 + 8) + 0x90);
  if (ppuStack_118 != (undefined **)0x0) {
    ppuVar7 = ppuStack_118 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
      if (bVar4) {
        *ppuVar7 = *ppuVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuVar7 = (undefined **)0x38;
  lStack_120 = lVar2;
  __Znwm();
  ppuVar7[1] = (undefined *)0x0;
  ppuVar7[2] = (undefined *)0x0;
  *ppuVar7 = (undefined *)&PTR_DAT_110c37c78;
  ppuVar7[4] = (undefined *)0x0;
  ppuVar7[5] = (undefined *)0x0;
  ppuStack_130 = ppuVar7 + 3;
  *ppuStack_130 = (undefined *)&PTR_FUN_110bf6980;
  *(undefined1 *)(ppuVar7 + 6) = uVar11;
  uStack_108 = 0;
  puStack_110 = (undefined *)0x0;
  lStack_f8 = 0;
  plStack_100 = (long *)0x0;
  fStack_f0 = *(float *)(lVar2 + 0x38);
  pppuVar9 = *(undefined ****)(lVar2 + 0x20);
  ppuStack_128 = ppuVar7;
  FUN_10aa02df0(&puStack_110);
  plVar21 = *(long **)(lVar2 + 0x28);
  if (plVar21 != (long *)0x0) {
    unaff_x23 = (undefined ***)0x9ddfea08eb382d69;
    do {
      uVar23 = uStack_108;
      uVar12 = plVar21[2];
      uVar18 = ((ulong)(uint)((int)uVar12 << 3) + 8 ^ uVar12 >> 0x20) * -0x622015f714c7d297;
      uVar18 = (uVar12 >> 0x20 ^ uVar18 >> 0x2f ^ uVar18) * -0x622015f714c7d297;
      uVar18 = (uVar18 ^ uVar18 >> 0x2f) * -0x622015f714c7d297;
      if (uStack_108 != 0) {
        uVar15 = uStack_108 - 1;
        if ((uStack_108 & uVar15) == 0) {
          unaff_x26 = uVar18 & uVar15;
        }
        else {
          unaff_x26 = uVar18;
          if (uStack_108 <= uVar18) {
            uVar20 = 0;
            if (uStack_108 != 0) {
              uVar20 = uVar18 / uStack_108;
            }
            unaff_x26 = uVar18 - uVar20 * uStack_108;
          }
        }
        plVar19 = *(long **)(puStack_110 + unaff_x26 * 8);
        if (plVar19 != (long *)0x0) {
          do {
            while( true ) {
              plVar19 = (long *)*plVar19;
              if (plVar19 == (long *)0x0) goto LAB_10aa05688;
              uVar20 = plVar19[1];
              if (uVar20 != uVar18) break;
              if (plVar19[2] == uVar12) goto LAB_10aa057e8;
            }
            if ((uStack_108 & uVar15) == 0) {
              uVar20 = uVar20 & uVar15;
            }
            else if (uStack_108 <= uVar20) {
              uVar6 = 0;
              if (uStack_108 != 0) {
                uVar6 = uVar20 / uStack_108;
              }
              uVar20 = uVar20 - uVar6 * uStack_108;
            }
          } while (uVar20 == unaff_x26);
        }
      }
LAB_10aa05688:
      plVar19 = (long *)0x68;
      __Znwm();
      *plVar19 = 0;
      plVar19[1] = uVar18;
      lVar13 = plVar21[3];
      lVar24 = plVar21[2];
      plVar19[3] = plVar21[3];
      plVar19[2] = lVar24;
      if (lVar13 != 0) {
        plVar16 = (long *)(lVar13 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = *plVar16 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppuStack_c0 = (undefined **)(plVar19 + 4);
      *(undefined1 *)(plVar19 + 0xc) = 3;
      if ((char)plVar21[0xc] == '\0') {
        uVar11 = 0;
      }
      else {
        pppuVar9 = (undefined ***)(plVar21 + 4);
        FUN_10a005398(&ppuStack_c0);
        uVar11 = (undefined1)plVar21[0xc];
      }
      *(undefined1 *)(plVar19 + 0xc) = uVar11;
      if ((uVar23 == 0) || (fStack_f0 * (float)uVar23 < (float)(lStack_f8 + 1))) {
        uVar12 = 1;
        if (2 < uVar23) {
          uVar12 = (ulong)((uVar23 & uVar23 - 1) != 0);
        }
        pppuVar9 = (undefined ***)(uVar12 | uVar23 << 1);
        pppuVar10 = (undefined ***)(long)((float)(lStack_f8 + 1) / fStack_f0);
        if (pppuVar9 <= pppuVar10) {
          pppuVar9 = pppuVar10;
        }
        FUN_10aa02df0(&puStack_110);
        uVar23 = uStack_108;
        if ((uStack_108 & uStack_108 - 1) == 0) {
          unaff_x26 = uStack_108 - 1 & uVar18;
        }
        else {
          unaff_x26 = uVar18;
          if (uStack_108 <= uVar18) {
            uVar12 = 0;
            if (uStack_108 != 0) {
              uVar12 = uVar18 / uStack_108;
            }
            unaff_x26 = uVar18 - uVar12 * uStack_108;
          }
        }
      }
      plVar16 = *(long **)(puStack_110 + unaff_x26 * 8);
      if (plVar16 == (long *)0x0) {
        *plVar19 = (long)plStack_100;
        *(long ***)(puStack_110 + unaff_x26 * 8) = &plStack_100;
        plStack_100 = plVar19;
        if (*plVar19 != 0) {
          uVar12 = *(ulong *)(*plVar19 + 8);
          if ((uVar23 & uVar23 - 1) == 0) {
            uVar12 = uVar12 & uVar23 - 1;
          }
          else if (uVar23 <= uVar12) {
            uVar18 = 0;
            if (uVar23 != 0) {
              uVar18 = uVar12 / uVar23;
            }
            uVar12 = uVar12 - uVar18 * uVar23;
          }
          *(long **)(puStack_110 + uVar12 * 8) = plVar19;
        }
      }
      else {
        *plVar19 = *plVar16;
        *plVar16 = (long)plVar19;
      }
      lStack_f8 = lStack_f8 + 1;
LAB_10aa057e8:
      plVar21 = (long *)*plVar21;
    } while (plVar21 != (long *)0x0);
  }
  puVar22 = (undefined8 *)0x0;
  if (plStack_100 == (long *)0x0) {
    ppuVar8 = &puStack_110;
    FUN_10aa04e78();
  }
  else {
    puVar22 = &uStack_e0;
    unaff_x23 = &ppuStack_c0;
    plVar21 = plStack_100;
    do {
      pppuVar10 = (undefined ***)plVar21[2];
      lVar13 = lVar2 + 0x18;
      FUN_10aa03800();
      pppuVar9 = pppuVar10;
      if (lVar13 != 0) {
        if ((char)plVar21[0xc] == '\x01') {
          pcVar14 = (code *)plVar21[4];
          ppuStack_b8 = ppuStack_128;
          ppuStack_c0 = ppuStack_130;
          if (ppuStack_128 != (undefined **)0x0) {
            ppuVar7 = ppuStack_128 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
              if (bVar4) {
                *ppuVar7 = *ppuVar7 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          pppuVar9 = (undefined ***)(plVar21 + 4);
          (*pcVar14)(&ppuStack_c0);
          if (ppuStack_b8 != (undefined **)0x0) {
            ppuVar7 = ppuStack_b8 + 1;
            do {
              puVar17 = *ppuVar7;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
              if (bVar4) {
                *ppuVar7 = puVar17 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              ppuVar8 = ppuStack_b8;
            } while (cVar3 != '\0');
LAB_10aa058c8:
            if (puVar17 == (undefined *)0x0) {
              (**(code **)(*ppuVar8 + 0x10))(ppuVar8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
            }
          }
        }
        else if ((char)plVar21[0xc] == '\x02') {
          plVar19 = plVar21 + 4;
          FUN_10a688b40();
          ppuVar7 = ppuStack_128;
          if (plVar19 == (long *)0x0) {
            pppuVar9 = (undefined ***)0x0;
            if (pppuVar10 != (undefined ***)0x0) {
              lStack_b0 = plVar21[4];
              lStack_a8 = plVar21[5];
              if (lStack_a8 != 0) {
                plVar19 = (long *)(lStack_a8 + 8);
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                  if (bVar4) {
                    *plVar19 = *plVar19 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              ppuStack_d0 = ppuStack_130;
              ppuStack_c8 = ppuStack_128;
              if (ppuStack_128 == (undefined **)0x0) {
                ppuStack_98 = (undefined **)0x0;
              }
              else {
                ppuVar8 = ppuStack_128 + 1;
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
                  if (bVar4) {
                    *ppuVar8 = *ppuVar8 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                ppuStack_98 = ppuStack_128;
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
                  if (bVar4) {
                    *ppuVar8 = *ppuVar8 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              ppuStack_a0 = ppuStack_130;
              ppuStack_b8 = &PTR_FUN_110c37cb8;
              ppuStack_d8 = (undefined **)0x0;
              uStack_e0 = 0;
              ppuStack_c0 = (undefined **)FUN_10aa05de0;
              pppuVar9 = &ppuStack_c0;
              FUN_10a4634ec(pppuVar10);
              (*(code *)*ppuStack_b8)(&ppuStack_b8);
              if (ppuVar7 != (undefined **)0x0) {
                ppuVar8 = ppuVar7 + 1;
                do {
                  puVar17 = *ppuVar8;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
                  if (bVar4) {
                    *ppuVar8 = puVar17 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (puVar17 == (undefined *)0x0) {
                  (**(code **)(*ppuVar7 + 0x10))(ppuVar7);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
                }
              }
              if (ppuStack_d8 != (undefined **)0x0) {
                ppuVar7 = ppuStack_d8 + 1;
                do {
                  puVar17 = *ppuVar7;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
                  if (bVar4) {
                    *ppuVar7 = puVar17 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  ppuVar8 = ppuStack_d8;
                } while (cVar3 != '\0');
                goto LAB_10aa058c8;
              }
            }
          }
          else {
            *plVar19 = CONCAT44((int)((ulong)*plVar19 >> 0x20) + 1,(int)*plVar19 + 1);
            pppuVar9 = &ppuStack_130;
            FUN_10aa05bdc(plVar21[4]);
            iVar5 = *(int *)((long)plVar19 + 4) + -1;
            *(int *)((long)plVar19 + 4) = iVar5;
            if (iVar5 == 0) {
              *(undefined4 *)plVar19 = 0;
            }
          }
        }
      }
      ppuVar7 = ppuStack_128;
      plVar21 = (long *)*plVar21;
    } while (plVar21 != (long *)0x0);
    ppuVar8 = &puStack_110;
    FUN_10aa04e78();
    if (ppuVar7 == (undefined **)0x0) goto LAB_10aa05a24;
  }
  ppuVar1 = ppuVar7 + 1;
  do {
    puVar17 = *ppuVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
    if (bVar4) {
      *ppuVar1 = puVar17 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (puVar17 == (undefined *)0x0) {
    (**(code **)(*ppuVar7 + 0x10))(ppuVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppuVar8 = ppuVar7;
  }
LAB_10aa05a24:
  ppuVar7 = ppuStack_118;
  if (ppuStack_118 != (undefined **)0x0) {
    ppuVar1 = ppuStack_118 + 1;
    do {
      puVar17 = *ppuVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar4) {
        *ppuVar1 = puVar17 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar17 == (undefined *)0x0) {
      (**(code **)(*ppuStack_118 + 0x10))(ppuStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar8 = ppuVar7;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return ppuVar8;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_b8)(unaff_x23 + 1);
  FUN_10aa05e58(puVar22 + 2);
  func_0x00010a004dac(&uStack_e0);
  FUN_10aa04e78(&puStack_110);
  FUN_10aa05e58(&ppuStack_130);
  FUN_10aa04b94(&lStack_120);
  __Unwind_Resume(ppuVar8);
  FUN_10a042ab0(pppuVar9,&PTR_DAT_110c37cd0);
  ppuVar8 = ppuVar8 + 1;
  if ((int)pppuVar9 == 0) {
    ppuVar8 = (undefined **)0x0;
  }
  return ppuVar8;
}



/* Entry: 10aa05b4c; end: 10aa05b87;  */

long FUN_10aa05b4c(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c37cd0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10aa05b88; end: 10aa05ba3;  */

undefined ** FUN_10aa05b88(void)

{
  return &PTR_DAT_110c37cd0;
}



/* Entry: 10aa05ba4; end: 10aa05bc3;  */

void FUN_10aa05ba4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c37c78;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa05bc4; end: 10aa05bdb;  */

long FUN_10aa05bc4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + 0x28);
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
  return param_1 + 0x20;
}



/* Entry: 10aa05bdc; end: 10aa05ddf;  */

void FUN_10aa05bdc(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar6 = (long *)*param_1;
  plStack_58 = (long *)param_2[1];
  ppuStack_60 = (undefined8 **)*param_2;
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
  ppuStack_40 = &PTR_DAT_110bf8380;
  func_0x000109899de4(&puStack_70,plVar6,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar6;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10aa05de0; end: 10aa05def;  */

void FUN_10aa05de0(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar5);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_90);
  plVar7 = (long *)*puVar5;
  plStack_58 = *(long **)(param_1 + 0x28);
  ppuStack_60 = *(undefined8 ***)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x28) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110bf8380;
  func_0x000109899de4(&puStack_70,plVar7,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar7;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10aa05df0; end: 10aa05e17;  */

long FUN_10aa05df0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10aa05e58(param_1 + 0x18);
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10aa05e18; end: 10aa05e57;  */

void FUN_10aa05e18(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c37cb8;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
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
  return;
}



/* Entry: 10aa05e58; end: 10aa05eaf;  */

long FUN_10aa05e58(long param_1)

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



/* Entry: 10aa05eb0; end: 10aa05f67;  */

void FUN_10aa05eb0(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  plVar3 = *(long **)(param_1 + 0x20);
  if (plVar3 != (long *)0x0) {
    lVar5 = *(long *)(param_1 + 0x10);
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar3 != (long *)0x0) {
      plVar4 = *(long **)(param_1 + 0x18);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))(plVar4,*(undefined4 *)(lVar5 + 0xd8));
      }
      plVar4 = plVar3 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar3);
        return;
      }
    }
  }
  return;
}



/* Entry: 10aa05f68; end: 10aa05fb7;  */

void FUN_10aa05f68(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10aa05fb8; end: 10aa0604b;  */

void FUN_10aa05fb8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar4 = (undefined8 *)0xb0;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110ba78a8;
  puVar4[3] = &PTR_FUN_110c6c480;
  puVar4[4] = 0;
  puVar4[5] = 0;
  uVar6 = param_2[8];
  uVar8 = param_2[0xb];
  uVar7 = param_2[10];
  puVar4[0xf] = param_2[9];
  puVar4[0xe] = uVar6;
  puVar4[0x11] = uVar8;
  puVar4[0x10] = uVar7;
  uVar6 = *(undefined8 *)((long)param_2 + 0x5c);
  *(undefined8 *)((long)puVar4 + 0x94) = *(undefined8 *)((long)param_2 + 100);
  *(undefined8 *)((long)puVar4 + 0x8c) = uVar6;
  uVar6 = *param_2;
  uVar8 = param_2[3];
  uVar7 = param_2[2];
  puVar4[7] = param_2[1];
  puVar4[6] = uVar6;
  puVar4[9] = uVar8;
  puVar4[8] = uVar7;
  uVar8 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  puVar4[0xb] = param_2[5];
  puVar4[10] = uVar8;
  puVar4[0xd] = uVar7;
  puVar4[0xc] = uVar6;
  lVar5 = param_2[0xf];
  uVar6 = param_2[0xe];
  puVar4[0x15] = param_2[0xf];
  puVar4[0x14] = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  return;
}



/* Entry: 10aa0604c; end: 10aa0605b;  */

void FUN_10aa0604c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c37d20;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aa0605c; end: 10aa0607b;  */

void FUN_10aa0605c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c37d20;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa0607c; end: 10aa06093;  */

long FUN_10aa0607c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + 0x28);
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
  return param_1 + 0x20;
}



/* Entry: 10aa06094; end: 10aa06597;  */

void FUN_10aa06094(long param_1,code **param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  code **ppcVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 uVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  code *pcVar21;
  ulong uVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined ***unaff_x24;
  long lVar25;
  ulong unaff_x27;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  int aiStack_470 [2];
  undefined8 *puStack_468;
  undefined *puStack_460;
  undefined8 *puStack_458;
  undefined8 **ppuStack_450;
  long *plStack_448;
  undefined1 *puStack_440;
  undefined ***pppuStack_438;
  undefined **ppuStack_430;
  undefined8 uStack_428;
  long lStack_420;
  ulong uStack_418;
  undefined ***pppuStack_410;
  undefined **ppuStack_408;
  undefined1 **ppuStack_400;
  code *pcStack_3f8;
  undefined **ppuStack_3f0;
  undefined **ppuStack_3e8;
  long lStack_3d8;
  long *plStack_3d0;
  byte abStack_3c8 [8];
  undefined1 auStack_3c0 [8];
  undefined8 auStack_3b8 [2];
  char cStack_3a1;
  long lStack_3a0;
  ulong uStack_398;
  long *plStack_390;
  long lStack_388;
  float fStack_380;
  undefined8 uStack_370;
  undefined **ppuStack_368;
  undefined **ppuStack_360;
  undefined **ppuStack_358;
  undefined **ppuStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined **ppuStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined4 uStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined1 auStack_308 [56];
  undefined *puStack_2d0;
  undefined4 uStack_2c8;
  undefined1 auStack_2c0 [48];
  long alStack_290 [3];
  long *plStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  long lStack_260;
  long lStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  long lStack_230;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined **ppuStack_1b0;
  ulong uStack_1a8;
  undefined ***pppuStack_1a0;
  code *pcStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined8 uStack_170;
  undefined7 uStack_168;
  char cStack_161;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  long *plStack_150;
  undefined **ppuStack_148;
  code *pcStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = (undefined **)param_2[4];
  ppuVar7 = ppuVar6;
  ppcVar8 = param_2;
  if ((ppuVar6 != (undefined **)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), ppuVar7 = ppuVar6, ppuStack_190 = ppuVar6,
     ppuVar6 != (undefined **)0x0)) {
    pcStack_198 = param_2[3];
    if (pcStack_198 != (code *)0x0) {
      ppuVar23 = *(undefined ***)(param_2[2] + 0x18);
      if (*(long *)(param_1 + 0x30) == 0) {
        ppuVar7 = ppuVar23 + 0x1e;
        FUN_10a044790();
      }
      else if ((ppuVar23[0x1f][8] & 1) == 0) {
        plStack_150 = (long *)0x0;
        ppuStack_148 = (undefined **)0x0;
        ppuVar7 = (undefined **)ppuVar23[0x27];
        if (((ppuVar7 == (undefined **)0x0) ||
            (__ZNSt3__119__shared_weak_count4lockEv(), ppuStack_148 = ppuVar7,
            ppuVar7 == (undefined **)0x0)) ||
           (plVar20 = (long *)ppuVar23[0x26], plStack_150 = plVar20, plVar20 == (long *)0x0)) {
          ppuVar6 = ppuStack_148;
          if ((bRam000000011330a9e8 & 1) != 0) {
            ppuVar7 = (undefined **)0x0;
            ppcVar8 = (code **)0x1;
            func_0x00010ae06f08(0,1,&UNK_10f68940f,&UNK_10f689fc1,0x1cb,&UNK_10f68a097);
          }
        }
        else {
          FUN_10a3bf120(&pcStack_140);
          lVar25 = *(long *)(ppuVar23[3] + 0x100);
          ppuVar6 = (undefined **)0x138;
          __Znwm();
          pcStack_a8 = pcStack_140;
          ppuVar24 = ppuVar6 + 1;
          *ppuVar24 = (undefined *)0x0;
          ppuVar6[2] = (undefined *)0x0;
          *ppuVar6 = (undefined *)&PTR_FUN_110b9f3b0;
          ppuVar7 = ppuVar6 + 3;
          pcStack_140 = (code *)0x0;
          ppuStack_a0 = ppuStack_138;
          (*(code *)ppuStack_130[2])(&uStack_98,&ppuStack_130);
          uStack_60 = uStack_f8;
          uStack_1a8 = *(ulong *)(lVar25 + 0x210);
          ppuStack_1b0 = *(undefined ***)(lVar25 + 0x208);
          if (-1 < (char)*(byte *)(lVar25 + 0x21f)) {
            uStack_1a8 = (ulong)*(byte *)(lVar25 + 0x21f);
            ppuStack_1b0 = (undefined **)(lVar25 + 0x208);
          }
          pppuStack_1a0 = &ppuStack_f0;
          ppuStack_f0 = (undefined **)FUN_10aa06598;
          ppuStack_e8 = &PTR_DAT_110c37d78;
          ppuStack_e0 = ppuVar23;
          FUN_10a23708c(ppuVar7,&UNK_10e4eb379,0xd,&UNK_10f647b45,3,&pcStack_a8,1);
          (*(code *)*ppuStack_e8)(&ppuStack_e8);
          FUN_10a042634(&pcStack_a8);
          ppuStack_160 = ppuVar7;
          ppuStack_158 = ppuVar6;
          FUN_10a042634(&pcStack_140);
          if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
            ppuStack_1b0 = ppuVar7;
            if ((char)*(code *)((long)ppuVar6 + 0x2f) < '\0') {
              ppuStack_1b0 = (undefined **)*ppuVar7;
            }
            func_0x00010ae06f08(1,8,&UNK_10f68940f,&UNK_10f689fc1,0x1e0,&UNK_10f68a0ef);
          }
          unaff_x24 = &ppuStack_f0;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(ppuVar24,0x10);
            if (bVar2) {
              *ppuVar24 = *ppuVar24 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          ppuStack_188 = ppuVar7;
          ppuStack_180 = ppuVar6;
          (**(code **)(*plVar20 + 0x10))(&ppuStack_178,plVar20,&ppuStack_188);
          ppuVar7 = ppuStack_180;
          if (ppuStack_180 != (undefined **)0x0) {
            ppuVar6 = ppuStack_180 + 1;
            do {
              puVar13 = *ppuVar6;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
              if (bVar2) {
                *ppuVar6 = puVar13 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (puVar13 == (undefined *)0x0) {
              (**(code **)(*ppuStack_180 + 0x10))(ppuStack_180);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
            }
          }
          ppuStack_e8 = (undefined **)ppuVar23[0x27];
          ppuStack_f0 = (undefined **)ppuVar23[0x26];
          if (ppuStack_e8 != (undefined **)0x0) {
            ppuVar7 = ppuStack_e8 + 2;
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
              if (bVar2) {
                *ppuVar7 = *ppuVar7 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          if (cStack_161 < '\0') {
            func_0x000107c3192c(&ppuStack_e0,ppuStack_178,uStack_170);
            ppuStack_130 = ppuStack_f0;
            ppuStack_128 = ppuStack_e8;
          }
          else {
            uStack_d8 = uStack_170;
            ppuStack_e0 = ppuStack_178;
            lStack_d0 = CONCAT17(cStack_161,uStack_168);
            ppuStack_130 = ppuStack_f0;
            ppuStack_128 = ppuStack_e8;
          }
          lStack_110 = lStack_d0;
          uStack_118 = uStack_d8;
          ppuStack_120 = ppuStack_e0;
          pcStack_a8 = FUN_10aa07080;
          ppuStack_a0 = &PTR_FUN_110c37d90;
          ppuStack_f0 = (undefined **)0x0;
          ppuStack_e8 = (undefined **)0x0;
          ppuStack_e0 = (undefined **)0x0;
          uStack_d8 = 0;
          lStack_d0 = 0;
          pcStack_140 = FUN_10aa07080;
          ppuStack_138 = &PTR_FUN_110c37d90;
          uStack_98 = 0;
          uStack_90 = 0;
          uStack_80 = 0;
          uStack_78 = 0;
          uStack_88 = 0;
          FUN_10aa07128(&ppuStack_a0);
          ppcVar8 = &pcStack_140;
          func_0x00010a108320(ppuVar23 + 0x1e);
          FUN_10a044790(&pcStack_140);
          (*(code *)*ppuStack_138)(&ppuStack_138);
          if (lStack_d0 < 0) {
            __ZdlPv(ppuStack_e0);
          }
          ppuVar7 = ppuStack_e8;
          if (ppuStack_e8 != (undefined **)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          if (cStack_161 < '\0') {
            ppuVar7 = ppuStack_178;
            __ZdlPv();
          }
          ppuVar23 = ppuStack_158;
          ppuVar6 = ppuStack_148;
          if (ppuStack_158 != (undefined **)0x0) {
            ppuVar24 = ppuStack_158 + 1;
            do {
              puVar13 = *ppuVar24;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(ppuVar24,0x10);
              if (bVar2) {
                *ppuVar24 = puVar13 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (puVar13 == (undefined *)0x0) {
              (**(code **)(*ppuStack_158 + 0x10))(ppuStack_158);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              ppuVar7 = ppuVar23;
              ppuVar6 = ppuStack_148;
            }
          }
        }
        if (ppuVar6 != (undefined **)0x0) {
          ppuVar23 = ppuVar6 + 1;
          do {
            puVar13 = *ppuVar23;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(ppuVar23,0x10);
            if (bVar2) {
              *ppuVar23 = puVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (puVar13 == (undefined *)0x0) {
            (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppuVar7 = ppuVar6;
          }
        }
        ppuVar6 = ppuStack_190;
        if (ppuStack_190 == (undefined **)0x0) goto LAB_10aa064c0;
      }
    }
    ppuVar23 = ppuVar6 + 1;
    do {
      puVar13 = *ppuVar23;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar23,0x10);
      if (bVar2) {
        *ppuVar23 = puVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (puVar13 == (undefined *)0x0) {
      (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar7 = ppuVar6;
    }
  }
LAB_10aa064c0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if (ppuStack_e8 != (undefined **)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (cStack_161 < '\0') {
    __ZdlPv(ppuStack_178);
  }
  FUN_10a05bd88(&ppuStack_160);
  func_0x00010a05a8c4(&plStack_150);
  func_0x00010a05a86c(&pcStack_198);
  __Unwind_Resume();
  pcStack_1b8 = FUN_10aa06598;
  lStack_230 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_348 = ppuVar7[1];
  ppuStack_350 = (undefined **)*ppuVar7;
  puStack_340 = ppuVar7[2];
  *ppuVar7 = (undefined *)0x0;
  ppuVar7[1] = (undefined *)0x0;
  puStack_330 = ppuVar7[4];
  ppuStack_338 = (undefined **)ppuVar7[3];
  ppuVar7[2] = (undefined *)0x0;
  ppuVar7[3] = (undefined *)0x0;
  puStack_328 = ppuVar7[5];
  ppuVar7[4] = (undefined *)0x0;
  ppuVar7[5] = (undefined *)0x0;
  uStack_320 = *(undefined4 *)(ppuVar7 + 6);
  puStack_318 = ppuVar7[7];
  puStack_310 = ppuVar7[8];
  ppuVar7[7] = (undefined *)0x0;
  puStack_1c0 = &stack0xfffffffffffffff0;
  (**(code **)(ppuVar7[9] + 0x10))(auStack_308,ppuVar7 + 9);
  puStack_2d0 = ppuVar7[0x10];
  uStack_2c8 = *(undefined4 *)(ppuVar7 + 0x11);
  FUN_10a0424c4(auStack_2c0,ppuVar7 + 0x12);
  pcVar21 = ppcVar8[2];
  if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
    func_0x00010ae06f08(1,2,&UNK_10f68940f,&UNK_10f68a131,0x1cf,&UNK_10f68a233);
  }
  FUN_109ffe064(auStack_3b8,puStack_318,puStack_2d0);
  plStack_278 = (long *)0x0;
  FUN_109fc89b4(abStack_3c8,auStack_3b8,alStack_290,1,0);
  if (plStack_278 == alStack_290) {
    lVar25 = 0x20;
LAB_10aa066cc:
    (**(code **)(*plStack_278 + lVar25))();
  }
  else if (plStack_278 != (long *)0x0) {
    lVar25 = 0x28;
    goto LAB_10aa066cc;
  }
  func_0x00010945a80c(abStack_3c8,&DAT_10f324b0d);
  func_0x00010937ba88();
  uVar5 = ppuStack_270._0_4_;
  func_0x00010945a80c(abStack_3c8,&DAT_10f324bb9);
  func_0x00010938d198();
  uVar11 = ppuStack_270._0_1_;
  uVar22 = (ulong)ppuStack_270 & 0xff;
  lVar25 = *(long *)(pcVar21 + 0xe0);
  plStack_3d0 = *(long **)(pcVar21 + 0xe8);
  if (plStack_3d0 != (long *)0x0) {
    plVar20 = plStack_3d0 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar2) {
        *plVar20 = *plVar20 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  ppuVar7 = (undefined **)0x38;
  lStack_3d8 = lVar25;
  __Znwm();
  ppuVar7[1] = (undefined *)0x0;
  ppuVar7[2] = (undefined *)0x0;
  *ppuVar7 = (undefined *)&PTR_FUN_110c37d20;
  ppuVar7[4] = (undefined *)0x0;
  ppuVar7[5] = (undefined *)0x0;
  ppuStack_3f0 = ppuVar7 + 3;
  *ppuStack_3f0 = (undefined *)&PTR_FUN_110c17b88;
  *(undefined4 *)(ppuVar7 + 6) = uVar5;
  *(undefined1 *)((long)ppuVar7 + 0x34) = uVar11;
  uStack_398 = 0;
  lStack_3a0 = 0;
  lStack_388 = 0;
  plStack_390 = (long *)0x0;
  fStack_380 = *(float *)(lVar25 + 0x38);
  ppuStack_3e8 = ppuVar7;
  FUN_10aa03d2c(&lStack_3a0,*(undefined8 *)(lVar25 + 0x20));
  plVar20 = *(long **)(lVar25 + 0x28);
  if (plVar20 != (long *)0x0) {
    unaff_x24 = (undefined ***)0x9ddfea08eb382d69;
    do {
      uVar15 = uStack_398;
      uVar12 = plVar20[2];
      uVar22 = ((ulong)(uint)((int)uVar12 << 3) + 8 ^ uVar12 >> 0x20) * -0x622015f714c7d297;
      uVar22 = (uVar12 >> 0x20 ^ uVar22 >> 0x2f ^ uVar22) * -0x622015f714c7d297;
      uVar22 = (uVar22 ^ uVar22 >> 0x2f) * -0x622015f714c7d297;
      if (uStack_398 != 0) {
        uVar14 = uStack_398 - 1;
        if ((uStack_398 & uVar14) == 0) {
          unaff_x27 = uVar22 & uVar14;
        }
        else {
          unaff_x27 = uVar22;
          if (uStack_398 <= uVar22) {
            uVar19 = 0;
            if (uStack_398 != 0) {
              uVar19 = uVar22 / uStack_398;
            }
            unaff_x27 = uVar22 - uVar19 * uStack_398;
          }
        }
        plVar18 = *(long **)(lStack_3a0 + unaff_x27 * 8);
        if (plVar18 != (long *)0x0) {
          do {
            while( true ) {
              plVar18 = (long *)*plVar18;
              if (plVar18 == (long *)0x0) goto LAB_10aa06860;
              uVar19 = plVar18[1];
              if (uVar19 != uVar22) break;
              if (plVar18[2] == uVar12) goto LAB_10aa069c0;
            }
            if ((uStack_398 & uVar14) == 0) {
              uVar19 = uVar19 & uVar14;
            }
            else if (uStack_398 <= uVar19) {
              uVar4 = 0;
              if (uStack_398 != 0) {
                uVar4 = uVar19 / uStack_398;
              }
              uVar19 = uVar19 - uVar4 * uStack_398;
            }
          } while (uVar19 == unaff_x27);
        }
      }
LAB_10aa06860:
      plVar18 = (long *)0x68;
      __Znwm();
      *plVar18 = 0;
      plVar18[1] = uVar22;
      lVar17 = plVar20[3];
      lVar9 = plVar20[2];
      plVar18[3] = plVar20[3];
      plVar18[2] = lVar9;
      if (lVar17 != 0) {
        plVar16 = (long *)(lVar17 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar2) {
            *plVar16 = *plVar16 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      ppuStack_270 = (undefined **)(plVar18 + 4);
      *(undefined1 *)(plVar18 + 0xc) = 3;
      if ((char)plVar20[0xc] == '\0') {
        uVar11 = 0;
      }
      else {
        FUN_10a005398(&ppuStack_270,plVar20 + 4);
        uVar11 = (undefined1)plVar20[0xc];
      }
      *(undefined1 *)(plVar18 + 0xc) = uVar11;
      if ((uVar15 == 0) || (fStack_380 * (float)uVar15 < (float)(lStack_388 + 1))) {
        uVar12 = 1;
        if (2 < uVar15) {
          uVar12 = (ulong)((uVar15 & uVar15 - 1) != 0);
        }
        uVar12 = uVar12 | uVar15 << 1;
        uVar15 = (ulong)((float)(lStack_388 + 1) / fStack_380);
        if (uVar12 <= uVar15) {
          uVar12 = uVar15;
        }
        FUN_10aa03d2c(&lStack_3a0,uVar12);
        uVar15 = uStack_398;
        if ((uStack_398 & uStack_398 - 1) == 0) {
          unaff_x27 = uStack_398 - 1 & uVar22;
        }
        else {
          unaff_x27 = uVar22;
          if (uStack_398 <= uVar22) {
            uVar12 = 0;
            if (uStack_398 != 0) {
              uVar12 = uVar22 / uStack_398;
            }
            unaff_x27 = uVar22 - uVar12 * uStack_398;
          }
        }
      }
      plVar16 = *(long **)(lStack_3a0 + unaff_x27 * 8);
      if (plVar16 == (long *)0x0) {
        *plVar18 = (long)plStack_390;
        *(long ***)(lStack_3a0 + unaff_x27 * 8) = &plStack_390;
        plStack_390 = plVar18;
        if (*plVar18 != 0) {
          uVar12 = *(ulong *)(*plVar18 + 8);
          if ((uVar15 & uVar15 - 1) == 0) {
            uVar12 = uVar12 & uVar15 - 1;
          }
          else if (uVar15 <= uVar12) {
            uVar14 = 0;
            if (uVar15 != 0) {
              uVar14 = uVar12 / uVar15;
            }
            uVar12 = uVar12 - uVar14 * uVar15;
          }
          *(long **)(lStack_3a0 + uVar12 * 8) = plVar18;
        }
      }
      else {
        *plVar18 = *plVar16;
        *plVar16 = (long)plVar18;
      }
      lStack_388 = lStack_388 + 1;
LAB_10aa069c0:
      plVar20 = (long *)*plVar20;
    } while (plVar20 != (long *)0x0);
  }
  puVar10 = (undefined8 *)0x0;
  if (plStack_390 == (long *)0x0) {
    FUN_10aa051dc(&lStack_3a0);
  }
  else {
    puVar10 = &uStack_370;
    unaff_x24 = &ppuStack_270;
    plVar20 = plStack_390;
    do {
      lVar9 = plVar20[2];
      lVar17 = lVar25 + 0x18;
      FUN_10aa0473c();
      if (lVar17 != 0) {
        if ((char)plVar20[0xc] == '\x01') {
          pcVar21 = (code *)plVar20[4];
          ppuStack_268 = ppuStack_3e8;
          ppuStack_270 = ppuStack_3f0;
          if (ppuStack_3e8 != (undefined **)0x0) {
            ppuVar7 = ppuStack_3e8 + 1;
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
              if (bVar2) {
                *ppuVar7 = *ppuVar7 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          (*pcVar21)(&ppuStack_270,plVar20 + 4);
          if (ppuStack_268 != (undefined **)0x0) {
            ppuVar7 = ppuStack_268 + 1;
            do {
              puVar13 = *ppuVar7;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
              if (bVar2) {
                *ppuVar7 = puVar13 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
              ppuVar6 = ppuStack_268;
            } while (cVar1 != '\0');
LAB_10aa06aa0:
            if (puVar13 == (undefined *)0x0) {
              (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
            }
          }
        }
        else if ((char)plVar20[0xc] == '\x02') {
          plVar18 = plVar20 + 4;
          FUN_10a688b40();
          ppuVar7 = ppuStack_3e8;
          if (plVar18 == (long *)0x0) {
            if (lVar9 != 0) {
              lStack_260 = plVar20[4];
              lStack_258 = plVar20[5];
              if (lStack_258 != 0) {
                plVar18 = (long *)(lStack_258 + 8);
                do {
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                  if (bVar2) {
                    *plVar18 = *plVar18 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
              }
              ppuStack_360 = ppuStack_3f0;
              ppuStack_358 = ppuStack_3e8;
              if (ppuStack_3e8 == (undefined **)0x0) {
                ppuStack_248 = (undefined **)0x0;
              }
              else {
                ppuVar6 = ppuStack_3e8 + 1;
                do {
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                  if (bVar2) {
                    *ppuVar6 = *ppuVar6 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                ppuStack_248 = ppuStack_3e8;
                do {
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                  if (bVar2) {
                    *ppuVar6 = *ppuVar6 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
              }
              ppuStack_250 = ppuStack_3f0;
              ppuStack_268 = &PTR_FUN_110c37d60;
              ppuStack_368 = (undefined **)0x0;
              uStack_370 = 0;
              ppuStack_270 = (undefined **)FUN_10aa06fec;
              FUN_10a4634ec(lVar9,&ppuStack_270);
              (*(code *)*ppuStack_268)(&ppuStack_268);
              if (ppuVar7 != (undefined **)0x0) {
                ppuVar6 = ppuVar7 + 1;
                do {
                  puVar13 = *ppuVar6;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                  if (bVar2) {
                    *ppuVar6 = puVar13 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (puVar13 == (undefined *)0x0) {
                  (**(code **)(*ppuVar7 + 0x10))(ppuVar7);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
                }
              }
              if (ppuStack_368 != (undefined **)0x0) {
                ppuVar7 = ppuStack_368 + 1;
                do {
                  puVar13 = *ppuVar7;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
                  if (bVar2) {
                    *ppuVar7 = puVar13 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                  ppuVar6 = ppuStack_368;
                } while (cVar1 != '\0');
                goto LAB_10aa06aa0;
              }
            }
          }
          else {
            *plVar18 = CONCAT44((int)((ulong)*plVar18 >> 0x20) + 1,(int)*plVar18 + 1);
            FUN_10aa06de8(plVar20[4],&ppuStack_3f0);
            iVar3 = *(int *)((long)plVar18 + 4) + -1;
            *(int *)((long)plVar18 + 4) = iVar3;
            if (iVar3 == 0) {
              *(undefined4 *)plVar18 = 0;
            }
          }
        }
      }
      ppuVar7 = ppuStack_3e8;
      plVar20 = (long *)*plVar20;
    } while (plVar20 != (long *)0x0);
    FUN_10aa051dc(&lStack_3a0);
    if (ppuVar7 == (undefined **)0x0) goto LAB_10aa06c04;
  }
  ppuVar6 = ppuVar7 + 1;
  do {
    puVar13 = *ppuVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
    if (bVar2) {
      *ppuVar6 = puVar13 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (puVar13 == (undefined *)0x0) {
    (**(code **)(*ppuVar7 + 0x10))(ppuVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
  }
LAB_10aa06c04:
  plVar20 = plStack_3d0;
  if (plStack_3d0 != (long *)0x0) {
    plVar18 = plStack_3d0 + 1;
    do {
      lVar17 = *plVar18;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar2) {
        *plVar18 = lVar17 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_3d0 + 0x10))(plStack_3d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
    }
  }
  func_0x000109380ffc(auStack_3c0,abStack_3c8[0]);
  if (cStack_3a1 < '\0') {
    __ZdlPv(auStack_3b8[0]);
  }
  func_0x000104c4f944(auStack_2c0);
  ppuVar7 = &puStack_318;
  FUN_10a042634();
  if ((long)puStack_328 < 0) {
    ppuVar7 = ppuStack_338;
    __ZdlPv();
  }
  if ((long)puStack_340 < 0) {
    ppuVar7 = ppuStack_350;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_230) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_268)(unaff_x24 + 1);
    FUN_10aa029a0(puVar10 + 2);
    func_0x00010a004dac(&uStack_370);
    FUN_10aa051dc(&lStack_3a0);
    FUN_10aa029a0(&ppuStack_3f0);
    FUN_10aa04ef8(&lStack_3d8);
    puVar10 = (undefined8 *)(ulong)abStack_3c8[0];
    func_0x000109380ffc(auStack_3c0);
    if (cStack_3a1 < '\0') {
      __ZdlPv(auStack_3b8[0]);
    }
    FUN_10a05bd10(&ppuStack_350);
    ppuVar6 = ppuVar7;
    __Unwind_Resume();
    pcStack_3f8 = FUN_10aa06de8;
    lStack_420 = lVar25;
    uStack_418 = uVar22;
    pppuStack_410 = &ppuStack_350;
    ppuStack_408 = ppuVar7;
    ppuStack_400 = &puStack_1c0;
    func_0x000109884c0c(&ppuStack_450,ppuVar6 + 1,*ppuVar6);
    func_0x000109884820(&puStack_478,&ppuStack_450,*ppuVar6);
    if (ppuStack_450 != (undefined8 **)0x0) {
      (*(code *)**ppuStack_450)();
    }
    (**(code **)(*(long *)*ppuVar6 + 0x30))(&puStack_480);
    plVar20 = (long *)*ppuVar6;
    plStack_448 = (long *)puVar10[1];
    ppuStack_450 = (undefined8 **)*puVar10;
    if (puVar10[1] != 0) {
      plVar18 = (long *)(puVar10[1] + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar2) {
          *plVar18 = *plVar18 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    ppuStack_430 = &PTR_DAT_110c19268;
    func_0x000109899de4(&puStack_460,plVar20,&ppuStack_450,&ppuStack_430,0,0);
    plVar18 = plStack_448;
    if (plStack_448 != (long *)0x0) {
      plVar16 = plStack_448 + 1;
      do {
        lVar25 = *plVar16;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar2) {
          *plVar16 = lVar25 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar25 == 0) {
        (**(code **)(*plStack_448 + 0x10))(plStack_448);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
      }
    }
    uStack_428 = 1;
    ppuStack_430 = &puStack_460;
    (**(code **)(*plVar20 + 0x58))(plVar20);
    ppuStack_450 = &puStack_478;
    plStack_448 = plVar20;
    puStack_440 = (undefined1 *)&puStack_480;
    pppuStack_438 = &ppuStack_430;
    func_0x0001098960c0(aiStack_470);
    if ((3 < aiStack_470[0]) && (puStack_468 != (undefined8 *)0x0)) {
      (**(code **)*puStack_468)();
    }
    if ((3 < (int)puStack_460) && (puStack_458 != (undefined8 *)0x0)) {
      (**(code **)*puStack_458)();
    }
    if (puStack_480 != (undefined8 *)0x0) {
      (**(code **)*puStack_480)();
    }
    if (puStack_478 != (undefined8 *)0x0) {
      (**(code **)*puStack_478)();
    }
    return;
  }
  return;
}



/* Entry: 10aa06598; end: 10aa06de7;  */

void FUN_10aa06598(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  undefined *puVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  undefined **ppuVar20;
  ulong uVar21;
  long *plVar22;
  undefined ***unaff_x24;
  ulong unaff_x27;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  int aiStack_2c0 [2];
  undefined8 *puStack_2b8;
  undefined *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 **ppuStack_2a0;
  long *plStack_298;
  undefined1 *puStack_290;
  undefined ***pppuStack_288;
  undefined **ppuStack_280;
  undefined8 uStack_278;
  long lStack_270;
  ulong uStack_268;
  long **pplStack_260;
  long *plStack_258;
  undefined1 *puStack_250;
  code *pcStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  long lStack_228;
  long *plStack_220;
  byte abStack_218 [8];
  undefined1 auStack_210 [8];
  undefined8 auStack_208 [2];
  char cStack_1f1;
  long lStack_1f0;
  ulong uStack_1e8;
  long *plStack_1e0;
  long lStack_1d8;
  float fStack_1d0;
  undefined8 uStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  long *plStack_1a0;
  long lStack_198;
  long lStack_190;
  long *plStack_188;
  long lStack_180;
  long lStack_178;
  undefined4 uStack_170;
  long lStack_168;
  long lStack_160;
  undefined1 auStack_158 [56];
  long lStack_120;
  undefined4 uStack_118;
  undefined1 auStack_110 [48];
  long alStack_e0 [3];
  long *plStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_198 = param_1[1];
  plStack_1a0 = (long *)*param_1;
  lStack_190 = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  lStack_180 = param_1[4];
  plStack_188 = (long *)param_1[3];
  param_1[2] = 0;
  param_1[3] = 0;
  lStack_178 = param_1[5];
  param_1[4] = 0;
  param_1[5] = 0;
  uStack_170 = (undefined4)param_1[6];
  lStack_168 = param_1[7];
  lStack_160 = param_1[8];
  param_1[7] = 0;
  (**(code **)(param_1[9] + 0x10))(auStack_158,param_1 + 9);
  lStack_120 = param_1[0x10];
  uStack_118 = (undefined4)param_1[0x11];
  FUN_10a0424c4(auStack_110,param_1 + 0x12);
  lVar19 = *(long *)(param_2 + 0x10);
  if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
    func_0x00010ae06f08(1,2,&UNK_10f68940f,&UNK_10f68a131,0x1cf,&UNK_10f68a233);
  }
  FUN_109ffe064(auStack_208,lStack_168,lStack_120);
  plStack_c8 = (long *)0x0;
  FUN_109fc89b4(abStack_218,auStack_208,alStack_e0,1,0);
  if (plStack_c8 == alStack_e0) {
    lVar10 = 0x20;
LAB_10aa066cc:
    (**(code **)(*plStack_c8 + lVar10))();
  }
  else if (plStack_c8 != (long *)0x0) {
    lVar10 = 0x28;
    goto LAB_10aa066cc;
  }
  func_0x00010945a80c(abStack_218,&DAT_10f324b0d);
  func_0x00010937ba88();
  uVar5 = ppuStack_c0._0_4_;
  func_0x00010945a80c(abStack_218,&DAT_10f324bb9);
  func_0x00010938d198();
  uVar9 = ppuStack_c0._0_1_;
  uVar21 = (ulong)ppuStack_c0 & 0xff;
  lVar10 = *(long *)(lVar19 + 0xe0);
  plStack_220 = *(long **)(lVar19 + 0xe8);
  if (plStack_220 != (long *)0x0) {
    plVar22 = plStack_220 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar2) {
        *plVar22 = *plVar22 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  ppuVar6 = (undefined **)0x38;
  lStack_228 = lVar10;
  __Znwm();
  ppuVar6[1] = (undefined *)0x0;
  ppuVar6[2] = (undefined *)0x0;
  *ppuVar6 = (undefined *)&PTR_FUN_110c37d20;
  ppuVar6[4] = (undefined *)0x0;
  ppuVar6[5] = (undefined *)0x0;
  ppuStack_240 = ppuVar6 + 3;
  *ppuStack_240 = (undefined *)&PTR_FUN_110c17b88;
  *(undefined4 *)(ppuVar6 + 6) = uVar5;
  *(undefined1 *)((long)ppuVar6 + 0x34) = uVar9;
  uStack_1e8 = 0;
  lStack_1f0 = 0;
  lStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  fStack_1d0 = *(float *)(lVar10 + 0x38);
  ppuStack_238 = ppuVar6;
  FUN_10aa03d2c(&lStack_1f0,*(undefined8 *)(lVar10 + 0x20));
  plVar22 = *(long **)(lVar10 + 0x28);
  if (plVar22 != (long *)0x0) {
    unaff_x24 = (undefined ***)0x9ddfea08eb382d69;
    do {
      uVar14 = uStack_1e8;
      uVar11 = plVar22[2];
      uVar21 = ((ulong)(uint)((int)uVar11 << 3) + 8 ^ uVar11 >> 0x20) * -0x622015f714c7d297;
      uVar21 = (uVar11 >> 0x20 ^ uVar21 >> 0x2f ^ uVar21) * -0x622015f714c7d297;
      uVar21 = (uVar21 ^ uVar21 >> 0x2f) * -0x622015f714c7d297;
      if (uStack_1e8 != 0) {
        uVar13 = uStack_1e8 - 1;
        if ((uStack_1e8 & uVar13) == 0) {
          unaff_x27 = uVar21 & uVar13;
        }
        else {
          unaff_x27 = uVar21;
          if (uStack_1e8 <= uVar21) {
            uVar18 = 0;
            if (uStack_1e8 != 0) {
              uVar18 = uVar21 / uStack_1e8;
            }
            unaff_x27 = uVar21 - uVar18 * uStack_1e8;
          }
        }
        plVar17 = *(long **)(lStack_1f0 + unaff_x27 * 8);
        if (plVar17 != (long *)0x0) {
          do {
            while( true ) {
              plVar17 = (long *)*plVar17;
              if (plVar17 == (long *)0x0) goto LAB_10aa06860;
              uVar18 = plVar17[1];
              if (uVar18 != uVar21) break;
              if (plVar17[2] == uVar11) goto LAB_10aa069c0;
            }
            if ((uStack_1e8 & uVar13) == 0) {
              uVar18 = uVar18 & uVar13;
            }
            else if (uStack_1e8 <= uVar18) {
              uVar4 = 0;
              if (uStack_1e8 != 0) {
                uVar4 = uVar18 / uStack_1e8;
              }
              uVar18 = uVar18 - uVar4 * uStack_1e8;
            }
          } while (uVar18 == unaff_x27);
        }
      }
LAB_10aa06860:
      plVar17 = (long *)0x68;
      __Znwm();
      *plVar17 = 0;
      plVar17[1] = uVar21;
      lVar19 = plVar22[3];
      lVar7 = plVar22[2];
      plVar17[3] = plVar22[3];
      plVar17[2] = lVar7;
      if (lVar19 != 0) {
        plVar15 = (long *)(lVar19 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar2) {
            *plVar15 = *plVar15 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      ppuStack_c0 = (undefined **)(plVar17 + 4);
      *(undefined1 *)(plVar17 + 0xc) = 3;
      if ((char)plVar22[0xc] == '\0') {
        uVar9 = 0;
      }
      else {
        FUN_10a005398(&ppuStack_c0,plVar22 + 4);
        uVar9 = (undefined1)plVar22[0xc];
      }
      *(undefined1 *)(plVar17 + 0xc) = uVar9;
      if ((uVar14 == 0) || (fStack_1d0 * (float)uVar14 < (float)(lStack_1d8 + 1))) {
        uVar11 = 1;
        if (2 < uVar14) {
          uVar11 = (ulong)((uVar14 & uVar14 - 1) != 0);
        }
        uVar11 = uVar11 | uVar14 << 1;
        uVar14 = (ulong)((float)(lStack_1d8 + 1) / fStack_1d0);
        if (uVar11 <= uVar14) {
          uVar11 = uVar14;
        }
        FUN_10aa03d2c(&lStack_1f0,uVar11);
        uVar14 = uStack_1e8;
        if ((uStack_1e8 & uStack_1e8 - 1) == 0) {
          unaff_x27 = uStack_1e8 - 1 & uVar21;
        }
        else {
          unaff_x27 = uVar21;
          if (uStack_1e8 <= uVar21) {
            uVar11 = 0;
            if (uStack_1e8 != 0) {
              uVar11 = uVar21 / uStack_1e8;
            }
            unaff_x27 = uVar21 - uVar11 * uStack_1e8;
          }
        }
      }
      plVar15 = *(long **)(lStack_1f0 + unaff_x27 * 8);
      if (plVar15 == (long *)0x0) {
        *plVar17 = (long)plStack_1e0;
        *(long ***)(lStack_1f0 + unaff_x27 * 8) = &plStack_1e0;
        plStack_1e0 = plVar17;
        if (*plVar17 != 0) {
          uVar11 = *(ulong *)(*plVar17 + 8);
          if ((uVar14 & uVar14 - 1) == 0) {
            uVar11 = uVar11 & uVar14 - 1;
          }
          else if (uVar14 <= uVar11) {
            uVar13 = 0;
            if (uVar14 != 0) {
              uVar13 = uVar11 / uVar14;
            }
            uVar11 = uVar11 - uVar13 * uVar14;
          }
          *(long **)(lStack_1f0 + uVar11 * 8) = plVar17;
        }
      }
      else {
        *plVar17 = *plVar15;
        *plVar15 = (long)plVar17;
      }
      lStack_1d8 = lStack_1d8 + 1;
LAB_10aa069c0:
      plVar22 = (long *)*plVar22;
    } while (plVar22 != (long *)0x0);
  }
  puVar8 = (undefined8 *)0x0;
  if (plStack_1e0 == (long *)0x0) {
    FUN_10aa051dc(&lStack_1f0);
  }
  else {
    puVar8 = &uStack_1c0;
    unaff_x24 = &ppuStack_c0;
    plVar22 = plStack_1e0;
    do {
      lVar7 = plVar22[2];
      lVar19 = lVar10 + 0x18;
      FUN_10aa0473c();
      if (lVar19 != 0) {
        if ((char)plVar22[0xc] == '\x01') {
          pcVar12 = (code *)plVar22[4];
          ppuStack_b8 = ppuStack_238;
          ppuStack_c0 = ppuStack_240;
          if (ppuStack_238 != (undefined **)0x0) {
            ppuVar6 = ppuStack_238 + 1;
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
              if (bVar2) {
                *ppuVar6 = *ppuVar6 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          (*pcVar12)(&ppuStack_c0,plVar22 + 4);
          if (ppuStack_b8 != (undefined **)0x0) {
            ppuVar6 = ppuStack_b8 + 1;
            do {
              puVar16 = *ppuVar6;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
              if (bVar2) {
                *ppuVar6 = puVar16 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
              ppuVar20 = ppuStack_b8;
            } while (cVar1 != '\0');
LAB_10aa06aa0:
            if (puVar16 == (undefined *)0x0) {
              (**(code **)(*ppuVar20 + 0x10))(ppuVar20);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar20);
            }
          }
        }
        else if ((char)plVar22[0xc] == '\x02') {
          plVar17 = plVar22 + 4;
          FUN_10a688b40();
          ppuVar6 = ppuStack_238;
          if (plVar17 == (long *)0x0) {
            if (lVar7 != 0) {
              lStack_b0 = plVar22[4];
              lStack_a8 = plVar22[5];
              if (lStack_a8 != 0) {
                plVar17 = (long *)(lStack_a8 + 8);
                do {
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                  if (bVar2) {
                    *plVar17 = *plVar17 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
              }
              ppuStack_1b0 = ppuStack_240;
              ppuStack_1a8 = ppuStack_238;
              if (ppuStack_238 == (undefined **)0x0) {
                ppuStack_98 = (undefined **)0x0;
              }
              else {
                ppuVar20 = ppuStack_238 + 1;
                do {
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
                  if (bVar2) {
                    *ppuVar20 = *ppuVar20 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                ppuStack_98 = ppuStack_238;
                do {
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
                  if (bVar2) {
                    *ppuVar20 = *ppuVar20 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
              }
              ppuStack_a0 = ppuStack_240;
              ppuStack_b8 = &PTR_FUN_110c37d60;
              ppuStack_1b8 = (undefined **)0x0;
              uStack_1c0 = 0;
              ppuStack_c0 = (undefined **)FUN_10aa06fec;
              FUN_10a4634ec(lVar7,&ppuStack_c0);
              (*(code *)*ppuStack_b8)(&ppuStack_b8);
              if (ppuVar6 != (undefined **)0x0) {
                ppuVar20 = ppuVar6 + 1;
                do {
                  puVar16 = *ppuVar20;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
                  if (bVar2) {
                    *ppuVar20 = puVar16 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (puVar16 == (undefined *)0x0) {
                  (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
                }
              }
              if (ppuStack_1b8 != (undefined **)0x0) {
                ppuVar6 = ppuStack_1b8 + 1;
                do {
                  puVar16 = *ppuVar6;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                  if (bVar2) {
                    *ppuVar6 = puVar16 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                  ppuVar20 = ppuStack_1b8;
                } while (cVar1 != '\0');
                goto LAB_10aa06aa0;
              }
            }
          }
          else {
            *plVar17 = CONCAT44((int)((ulong)*plVar17 >> 0x20) + 1,(int)*plVar17 + 1);
            FUN_10aa06de8(plVar22[4],&ppuStack_240);
            iVar3 = *(int *)((long)plVar17 + 4) + -1;
            *(int *)((long)plVar17 + 4) = iVar3;
            if (iVar3 == 0) {
              *(undefined4 *)plVar17 = 0;
            }
          }
        }
      }
      ppuVar6 = ppuStack_238;
      plVar22 = (long *)*plVar22;
    } while (plVar22 != (long *)0x0);
    FUN_10aa051dc(&lStack_1f0);
    if (ppuVar6 == (undefined **)0x0) goto LAB_10aa06c04;
  }
  ppuVar20 = ppuVar6 + 1;
  do {
    puVar16 = *ppuVar20;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
    if (bVar2) {
      *ppuVar20 = puVar16 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (puVar16 == (undefined *)0x0) {
    (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
  }
LAB_10aa06c04:
  plVar22 = plStack_220;
  if (plStack_220 != (long *)0x0) {
    plVar17 = plStack_220 + 1;
    do {
      lVar19 = *plVar17;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar2) {
        *plVar17 = lVar19 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_220 + 0x10))(plStack_220);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
    }
  }
  func_0x000109380ffc(auStack_210,abStack_218[0]);
  if (cStack_1f1 < '\0') {
    __ZdlPv(auStack_208[0]);
  }
  func_0x000104c4f944(auStack_110);
  plVar22 = &lStack_168;
  FUN_10a042634();
  if (lStack_178 < 0) {
    plVar22 = plStack_188;
    __ZdlPv();
  }
  if (lStack_190 < 0) {
    plVar22 = plStack_1a0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_b8)(unaff_x24 + 1);
  FUN_10aa029a0(puVar8 + 2);
  func_0x00010a004dac(&uStack_1c0);
  FUN_10aa051dc(&lStack_1f0);
  FUN_10aa029a0(&ppuStack_240);
  FUN_10aa04ef8(&lStack_228);
  puVar8 = (undefined8 *)(ulong)abStack_218[0];
  func_0x000109380ffc(auStack_210);
  if (cStack_1f1 < '\0') {
    __ZdlPv(auStack_208[0]);
  }
  FUN_10a05bd10(&plStack_1a0);
  plVar17 = plVar22;
  __Unwind_Resume();
  pcStack_248 = FUN_10aa06de8;
  lStack_270 = lVar10;
  uStack_268 = uVar21;
  pplStack_260 = &plStack_1a0;
  plStack_258 = plVar22;
  puStack_250 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&ppuStack_2a0,plVar17 + 1,*plVar17);
  func_0x000109884820(&puStack_2c8,&ppuStack_2a0,*plVar17);
  if (ppuStack_2a0 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_2a0)();
  }
  (**(code **)(*(long *)*plVar17 + 0x30))(&puStack_2d0);
  plVar17 = (long *)*plVar17;
  plStack_298 = (long *)puVar8[1];
  ppuStack_2a0 = (undefined8 **)*puVar8;
  if (puVar8[1] != 0) {
    plVar22 = (long *)(puVar8[1] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar2) {
        *plVar22 = *plVar22 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  ppuStack_280 = &PTR_DAT_110c19268;
  func_0x000109899de4(&puStack_2b0,plVar17,&ppuStack_2a0,&ppuStack_280,0,0);
  plVar22 = plStack_298;
  if (plStack_298 != (long *)0x0) {
    plVar15 = plStack_298 + 1;
    do {
      lVar19 = *plVar15;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar2) {
        *plVar15 = lVar19 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_298 + 0x10))(plStack_298);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
    }
  }
  uStack_278 = 1;
  ppuStack_280 = &puStack_2b0;
  (**(code **)(*plVar17 + 0x58))(plVar17);
  ppuStack_2a0 = &puStack_2c8;
  plStack_298 = plVar17;
  puStack_290 = (undefined1 *)&puStack_2d0;
  pppuStack_288 = &ppuStack_280;
  func_0x0001098960c0(aiStack_2c0);
  if ((3 < aiStack_2c0[0]) && (puStack_2b8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_2b8)();
  }
  if ((3 < (int)puStack_2b0) && (puStack_2a8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_2a8)();
  }
  if (puStack_2d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_2d0)();
  }
  if (puStack_2c8 != (undefined8 *)0x0) {
    (**(code **)*puStack_2c8)();
  }
  return;
}



/* Entry: 10aa06de8; end: 10aa06feb;  */

void FUN_10aa06de8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar6 = (long *)*param_1;
  plStack_58 = (long *)param_2[1];
  ppuStack_60 = (undefined8 **)*param_2;
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
  ppuStack_40 = &PTR_DAT_110c19268;
  func_0x000109899de4(&puStack_70,plVar6,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar6;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10aa06fec; end: 10aa06ffb;  */

void FUN_10aa06fec(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar5);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_90);
  plVar7 = (long *)*puVar5;
  plStack_58 = *(long **)(param_1 + 0x28);
  ppuStack_60 = *(undefined8 ***)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x28) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110c19268;
  func_0x000109899de4(&puStack_70,plVar7,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar7;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10aa06ffc; end: 10aa07023;  */

long FUN_10aa06ffc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10aa029a0(param_1 + 0x18);
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10aa07024; end: 10aa0707f;  */

void FUN_10aa07024(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c37d60;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
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
  return;
}



/* Entry: 10aa07080; end: 10aa07127;  */

void FUN_10aa07080(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  plVar3 = *(long **)(param_1 + 0x18);
  if (plVar3 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar3 != (long *)0x0) {
      plVar4 = *(long **)(param_1 + 0x10);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4,param_1 + 0x20);
      }
      plVar4 = plVar3 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar3);
        return;
      }
    }
  }
  return;
}



/* Entry: 10aa07128; end: 10aa07167;  */

void FUN_10aa07128(long param_1)

{
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10aa07168; end: 10aa071c7;  */

void FUN_10aa07168(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_110c37d90;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}



/* Entry: 10aa071c8; end: 10aa07213;  */

void FUN_10aa071c8(long param_1)

{
  if (param_1 != 0) {
    func_0x00010a081120(param_1 + 0x70);
    FUN_10a9f8c90(param_1 + 0x58);
    __ZNSt3__15mutexD1Ev(param_1 + 0x18);
    if (*(long *)(param_1 + 8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10aa07214; end: 10aa07217;  */

void FUN_10aa07214(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aa07218; end: 10aa0722b;  */

void FUN_10aa07218(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa0722c; end: 10aa07233;  */

void FUN_10aa0722c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    func_0x00010a081120(lVar1 + 0x70);
    FUN_10a9f8c90(lVar1 + 0x58);
    __ZNSt3__15mutexD1Ev(lVar1 + 0x18);
    if (*(long *)(lVar1 + 8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10aa07234; end: 10aa0726b;  */

undefined8 FUN_10aa07234(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c37e10);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10aa0726c; end: 10aa0727f;  */

void FUN_10aa0726c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa07280; end: 10aa0729f;  */

void FUN_10aa07280(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c37e30;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa072a0; end: 10aa072af;  */

void FUN_10aa072a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010aa072a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10aa072b0; end: 10aa07357;  */

undefined8 * FUN_10aa072b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c37e80;
  (**(code **)param_1[9])();
  FUN_10a6845d8(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10aa07358; end: 10aa073bb;  */

bool FUN_10aa07358(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x55) {
    iVar1 = 0xe4d1c8c;
    _memcmp(&UNK_10e4d1c8c);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10aa073bc; end: 10aa074db;  */

void FUN_10aa073bc(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  undefined7 uStack_28;
  byte bStack_21;
  
  func_0x000107c2b054(param_1,&UNK_10f6891b4);
  uVar1 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (uVar1 == 0) {
    func_0x00010989f98c(&ppuStack_38,param_2);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    param_1[1] = uStack_30;
    *param_1 = (long)ppuStack_38;
    param_1[2] = CONCAT17(bStack_21,uStack_28);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&UNK_10f685178,7);
  __ZNSt3__19to_stringEm(&ppuStack_38,*(undefined8 *)(param_2 + 0x30));
  pppuVar2 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar2 = &ppuStack_38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar2,uStack_30);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f684600,1);
  return;
}



/* Entry: 10aa074dc; end: 10aa074eb;  */

undefined1  [16] FUN_10aa074dc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x55;
  auVar1._0_8_ = &UNK_10e4d1c8c;
  return auVar1;
}



/* Entry: 10aa074ec; end: 10aa074fb;  */

void FUN_10aa074ec(undefined8 param_1,long param_2)

{
  func_0x000105277f8c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010aa07508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_2 + 0x10))();
  return;
}



/* Entry: 10aa074fc; end: 10aa0753f;  */

void FUN_10aa074fc(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010aa07508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_2 + 0x10))();
  return;
}



/* Entry: 10aa07540; end: 10aa0758f;  */

void FUN_10aa07540(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10aa07540(param_1,*param_2);
    FUN_10aa07540(param_1,param_2[1]);
    if (*(char *)((long)param_2 + 0x3f) < '\0') {
      __ZdlPv(param_2[5]);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10aa07590; end: 10aa07653;  */

undefined1  [16] FUN_10aa07590(long param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar3 = plVar1, (int)plVar3[4] <= *param_2) {
        if (*param_2 <= (int)plVar3[4]) {
          uVar2 = 0;
          goto LAB_10aa0763c;
        }
        plVar1 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) {
          plVar4 = plVar3 + 1;
          goto LAB_10aa075f8;
        }
      }
      plVar1 = (long *)*plVar3;
      plVar4 = plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
LAB_10aa075f8:
  plVar1 = (long *)0x40;
  __Znwm();
  *(undefined4 *)(plVar1 + 4) = *(undefined4 *)*param_4;
  plVar1[6] = 0;
  plVar1[7] = 0;
  plVar1[5] = 0;
  FUN_10aa07654(param_1,plVar3,plVar4,plVar1);
  uVar2 = 1;
  plVar3 = plVar1;
LAB_10aa0763c:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = plVar3;
  return auVar5;
}



/* Entry: 10aa07654; end: 10aa076a7;  */

void FUN_10aa07654(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c2b058(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10aa076a8; end: 10aa077a3;  */

undefined1  [16] FUN_10aa076a8(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c38308;
  puVar1 = &UNK_10f6891b4;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c38308;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10aa077a4; end: 10aa07807;  */

ulong FUN_10aa077a4(ulong param_1,undefined8 *param_2)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aa07808);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10aa07808,3,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10aa07808; end: 10aa07a37;  */

void FUN_10aa07808(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined1 **ppuVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 *puStack_a0;
  ulong uStack_98;
  byte bStack_89;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa0;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar5 == (long *)0x0) {
    puVar7 = &UNK_10f68f52e;
  }
  else {
    plVar6 = param_2;
    FUN_10a053854(param_2,plVar5);
    if ((plVar6 != (long *)0x0) && (___dynamic_cast(), plVar6 != (long *)0x0)) {
      FUN_10a43b1c4(param_5);
      func_0x000109898570(&lStack_70,param_2,param_4);
      func_0x000109898570(&lStack_88,param_2,param_4 + 0x10);
      lVar11 = plVar6[3];
      func_0x000107c2b054(&stack0xffffffffffffffa8,&UNK_10f68962c);
      if (lVar11 != 0) {
        FUN_10a76c080(*(undefined8 *)(lVar11 + 0x8d8),&stack0xffffffffffffffa8);
      }
      if (in_stack_ffffffffffffffb8 < 0) {
        __ZdlPv(in_stack_ffffffffffffffa8);
      }
      func_0x000107c2b054(&puStack_a0,&UNK_10f6891b4);
      if (uStack_78._7_1_ < '\0') {
        __ZdlPv(lStack_88);
      }
      if (in_stack_ffffffffffffffa0 < 0) {
        __ZdlPv(lStack_70);
      }
      ppuVar1 = (undefined1 **)puStack_a0;
      if (-1 < (char)bStack_89) {
        uStack_98 = (ulong)bStack_89;
        ppuVar1 = &puStack_a0;
      }
      (**(code **)(*param_2 + 0x128))(&stack0xffffffffffffffa8,param_2,ppuVar1,uStack_98);
      *param_1 = 6;
      *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffa8;
      if ((char)bStack_89 < '\0') {
        __ZdlPv(puStack_a0);
      }
      plVar5 = plVar4 + 0x4b;
      lVar11 = plVar4[0x59];
      uVar8 = lVar11 - 1;
      plVar4[0x59] = uVar8;
      if (uVar8 < 8) {
        uVar8 = plVar5[lVar11 + 2];
        if (plVar4[0x5a] == uVar8) {
          return;
        }
      }
      else {
        uVar8 = *(ulong *)(plVar4[0x57] + -8);
        plVar4[0x57] = plVar4[0x57] + -8;
        if (plVar4[0x5a] == uVar8) {
          return;
        }
      }
      lVar11 = *plVar5;
      lVar13 = plVar4[0x4c];
      lVar10 = lVar13 - lVar11;
      uVar15 = lVar10 >> 4;
      if (uVar15 < uVar8) {
        uVar16 = uVar8 - uVar15;
        lVar14 = plVar4[0x4d];
        if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
          if (uVar8 >> 0x3c == 0) {
            uVar9 = lVar14 - lVar11 >> 3;
            if (uVar9 <= uVar8) {
              uVar9 = uVar8;
            }
            if (0x7fffffffffffffef < (ulong)(lVar14 - lVar11)) {
              uVar9 = 0xfffffffffffffff;
            }
            plStack_68 = plVar5;
            if (uVar9 >> 0x3c == 0) {
              lVar3 = uVar9 << 4;
              __Znwm();
              lVar13 = lVar3 + lVar10;
              _bzero(lVar13,uVar16 * 0x10);
              lVar12 = lVar13 + uVar15 * -0x10;
              _memcpy(lVar12,lVar11,lVar10);
              *plVar5 = lVar12;
              plVar4[0x4c] = lVar13 + uVar16 * 0x10;
              plVar4[0x4d] = lVar3 + uVar9 * 0x10;
              lStack_88 = lVar11;
              lStack_80 = lVar11;
              uStack_78 = lVar11;
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
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar2)();
        }
        _bzero(lVar13,uVar16 * 0x10);
        plVar4[0x4c] = lVar13 + uVar16 * 0x10;
      }
      else if (uVar8 < uVar15) {
        lVar11 = lVar11 + uVar8 * 0x10;
        while (lVar13 != lVar11) {
          lVar13 = lVar13 + -0x10;
          func_0x00010988c204(lVar13);
        }
        plVar4[0x4c] = lVar11;
      }
code_r0x00010988c138:
      plVar4[0x5a] = uVar8;
      return;
    }
    puVar7 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar7);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa079c8);
  (*pcVar2)();
}



/* Entry: 10aa07a38; end: 10aa07af3;  */

void FUN_10aa07a38(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
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
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f689f1a,0x10);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa07af4);
  (*pcVar4)();
}



/* Entry: 10aa07af4; end: 10aa07bab;  */

undefined1  [16] FUN_10aa07af4(long param_1,ulong *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar3 = plVar1, (ulong)plVar3[4] <= *param_2) {
        if (*param_2 <= (ulong)plVar3[4]) {
          uVar2 = 0;
          goto LAB_10aa07b94;
        }
        plVar1 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) {
          plVar4 = plVar3 + 1;
          goto LAB_10aa07b5c;
        }
      }
      plVar1 = (long *)*plVar3;
      plVar4 = plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
LAB_10aa07b5c:
  plVar1 = (long *)0x28;
  __Znwm();
  plVar1[4] = *param_3;
  FUN_10aa07bac(param_1,plVar3,plVar4,plVar1);
  uVar2 = 1;
  plVar3 = plVar1;
LAB_10aa07b94:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = plVar3;
  return auVar5;
}



/* Entry: 10aa07bac; end: 10aa07cef;  */

void FUN_10aa07bac(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c2b058(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10aa07cf0; end: 10aa07d57;  */

void FUN_10aa07cf0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar4 = 0x308;
  __Znwm();
  FUN_10aa07d58();
  *param_1 = lVar4 + 0x18;
  param_1[1] = lVar4;
  if (((long *)(lVar4 + 0x58) != (long *)0x0) &&
     ((lVar5 = *(long *)(lVar4 + 0x60), lVar5 == 0 || (*(long *)(lVar5 + 8) == -1)))) {
    plVar6 = (long *)param_1[1];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar5 = *(long *)(lVar4 + 0x60);
    }
    *(long *)(lVar4 + 0x58) = lVar4 + 0x18;
    *(long **)(lVar4 + 0x60) = plVar6;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10aa07d58; end: 10aa07da3;  */

undefined8 * FUN_10aa07d58(undefined8 *param_1,undefined8 *param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110c37ef8;
  FUN_10ac33a4c(param_1 + 3,*param_2);
  return param_1;
}



/* Entry: 10aa07da4; end: 10aa07db3;  */

void FUN_10aa07da4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c37ef8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aa07db4; end: 10aa07dd3;  */

void FUN_10aa07db4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c37ef8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa07dd4; end: 10aa07de3;  */

void FUN_10aa07dd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010aa07ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10aa07de4; end: 10aa07eeb;  */

void FUN_10aa07de4(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 10aa07eec; end: 10aa08163;  */

void FUN_10aa07eec(long *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar8 = *param_3;
  uVar4 = 0x2a8;
  __Znwm(0x2a8);
  plVar7 = (long *)param_4[1];
  uStack_48 = param_4[1];
  uStack_50 = *param_4;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar5 = uVar4;
  func_0x00010a0fda30();
  FUN_10ab6a888(uVar4,uVar8,&uStack_50,uVar5,param_3);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  lVar6 = *param_2;
  plVar7 = (long *)param_2[1];
  lStack_80 = lVar6;
  plStack_78 = plVar7;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar7 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
  lStack_70 = lVar6;
  plStack_68 = plVar7;
  FUN_10a05b208(auStack_60,uVar4,&lStack_70);
  FUN_10a05b04c(param_1,auStack_60);
  if (plStack_58 != (long *)0x0) {
    plVar7 = plStack_58 + 1;
    do {
      lVar6 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  if (plStack_68 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar7 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
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
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  lVar6 = *param_2;
  if ((lVar6 != 0) && (lStack_90 = *param_1, lStack_90 != 0)) {
    plStack_88 = (long *)param_1[1];
    if (plStack_88 != (long *)0x0) {
      plVar7 = plStack_88 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10aa88c30(lVar6,&lStack_90);
    plVar7 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
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
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  return;
}



/* Entry: 10aa08164; end: 10aa08403;  */

/* WARNING: Removing unreachable block (ram,0x00010aa08314) */
/* WARNING: Removing unreachable block (ram,0x00010aa08318) */
/* WARNING: Removing unreachable block (ram,0x00010aa08320) */
/* WARNING: Removing unreachable block (ram,0x00010aa08328) */
/* WARNING: Removing unreachable block (ram,0x00010aa0832c) */

void FUN_10aa08164(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined ***pppuVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  undefined ***pppuVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined **ppuVar11;
  long *plVar12;
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
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined ***pppuStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = (long *)0x2c0;
  puVar9 = param_3;
  __Znwm();
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_DAT_110b9fda0;
  plVar1 = plVar6 + 3;
  plVar12 = (long *)param_3[1];
  ppuStack_88 = (undefined **)param_3[1];
  puStack_90 = (undefined *)*param_3;
  if (plVar12 != (long *)0x0) {
    plVar7 = plVar12 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = *plVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar7 = plVar6;
  func_0x00010a0fda30();
  FUN_10ab6a888(plVar1,0,&puStack_90,plVar7,puVar9);
  if (plVar12 != (long *)0x0) {
    plVar7 = plVar12 + 1;
    do {
      lVar10 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  plStack_b0 = plVar1;
  plStack_a8 = plVar6;
  FUN_10a05b2a8(&plStack_b0,plVar6 + 8,plVar1);
  FUN_10a05b04c(&uStack_a0,&plStack_b0);
  plVar1 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar6 = plStack_a8 + 1;
    do {
      lVar10 = *plVar6;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if (pppuStack_98 == (undefined ***)0x0) {
    *param_1 = uStack_a0;
    param_1[1] = 0;
  }
  else {
    pppuVar8 = pppuStack_98 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
      if (bVar5) {
        *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *param_1 = uStack_a0;
    param_1[1] = pppuStack_98;
    if (pppuStack_98 != (undefined ***)0x0) {
      pppuVar8 = pppuStack_98 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
        if (bVar5) {
          *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  pppuVar8 = &ppuStack_88;
  param_1[2] = FUN_10aa08404;
  param_1[3] = &PTR_DAT_110c37f38;
  param_1[4] = uStack_a0;
  param_1[5] = pppuStack_98;
  uStack_78 = 0;
  uStack_80 = 0;
  puStack_90 = &UNK_1053a6a3c;
  ppuStack_88 = &PTR_DAT_110ae9180;
  FUN_10a044790(&puStack_90);
  (*(code *)*ppuStack_88)();
  if (pppuStack_98 != (undefined ***)0x0) {
    pppuVar2 = pppuStack_98 + 1;
    do {
      ppuVar11 = *pppuVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
      if (bVar5) {
        *pppuVar2 = (undefined **)((long)ppuVar11 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppuVar11 == (undefined **)0x0) {
      (*(code *)(*pppuStack_98)[2])(pppuStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar8 = pppuStack_98;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a05248c(&plStack_b0);
  __Unwind_Resume();
  ppuVar11 = pppuVar8[2];
  if (ppuVar11 != (undefined **)0x0) {
    uVar3 = *(ushort *)((long)ppuVar11 + 0x209);
    if ((uVar3 & 0x7f) != 0) {
      pcStack_b8 = FUN_10aa08404;
      *(ushort *)((long)ppuVar11 + 0x209) = uVar3 & 0xff00 | uVar3 - 1 & 0x7f;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      ppuVar11[0x43] = (undefined *)0x0;
      puStack_c0 = &stack0xfffffffffffffff0;
      FUN_10a1cc408(ppuVar11 + 0x44,(ulong)&uStack_110 | 8);
    }
    return;
  }
  return;
}



/* Entry: 10aa08404; end: 10aa0843b;  */

void FUN_10aa08404(long param_1)

{
  ushort uVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    uVar1 = *(ushort *)(lVar2 + 0x209);
    if ((uVar1 & 0x7f) != 0) {
      *(ushort *)(lVar2 + 0x209) = uVar1 & 0xff00 | uVar1 - 1 & 0x7f;
      uStack_28 = 0;
      uStack_30 = 0;
      uStack_18 = 0;
      uStack_20 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      *(undefined8 *)(lVar2 + 0x218) = 0;
      FUN_10a1cc408(lVar2 + 0x220,(ulong)&uStack_60 | 8);
    }
    return;
  }
  return;
}



/* Entry: 10aa0843c; end: 10aa086b3;  */

undefined1  [16] FUN_10aa0843c(long *param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x25;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  plVar6 = param_1;
  func_0x000107c2b05c();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x25 = (long *)(uVar9 & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar6) {
          plVar3 = param_1;
          func_0x000107c2b068(param_1,plVar7 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_10aa08670;
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
          if (plVar3 != unaff_x25) break;
        }
      }
    }
  }
  plVar7 = (long *)0x38;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = (long)plVar6;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar7 + 2,*param_3,param_3[1]);
  }
  else {
    lVar4 = *param_3;
    plVar7[3] = param_3[1];
    plVar7[2] = lVar4;
    plVar7[4] = param_3[2];
  }
  lVar4 = param_3[3];
  plVar7[6] = param_3[4];
  plVar7[5] = lVar4;
  param_3[3] = 0;
  param_3[4] = 0;
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
    FUN_10aa086b4(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *plVar7 = *plVar6;
    *plVar6 = (long)plVar7;
    *(long **)(lVar4 + (long)unaff_x25 * 8) = plVar6;
    if (*plVar7 != 0) {
      plVar6 = *(long **)(*plVar7 + 8);
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
      *(long **)(*param_1 + (long)plVar6 * 8) = plVar7;
    }
  }
  else {
    *plVar7 = *plVar6;
    *plVar6 = (long)plVar7;
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
LAB_10aa08670:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 10aa086b4; end: 10aa08783;  */

void FUN_10aa086b4(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (uVar7 < param_2) {
LAB_10aa086fc:
    if (param_2 == 0) {
      uVar7 = *param_1;
      *param_1 = 0;
      if (uVar7 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000109ffded8();
        uVar7 = *param_1;
        *param_1 = param_2;
        if (uVar7 != 0) {
          if ((char)param_1[2] == '\x01') {
            func_0x00010a3f7f28(uVar7 + 0x10);
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(uVar7);
          return;
        }
        return;
      }
      uVar7 = param_2 << 3;
      __Znwm();
      uVar1 = *param_1;
      *param_1 = uVar7;
      if (uVar1 != 0) {
        __ZdlPv();
      }
      uVar7 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
        uVar7 = uVar7 + 1;
      } while (param_2 != uVar7);
      plVar2 = (long *)param_1[2];
      if (plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        uVar1 = param_2 - 1;
        if ((param_2 & uVar1) == 0) {
          uVar7 = uVar7 & uVar1;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        *(ulong **)(*param_1 + uVar7 * 8) = param_1 + 2;
        plVar3 = (long *)*plVar2;
        while (plVar3 != (long *)0x0) {
          uVar5 = plVar3[1];
          if ((param_2 & uVar1) == 0) {
            uVar5 = uVar5 & uVar1;
          }
          else if (param_2 <= uVar5) {
            uVar6 = 0;
            if (param_2 != 0) {
              uVar6 = uVar5 / param_2;
            }
            uVar5 = uVar5 - uVar6 * param_2;
          }
          plVar4 = plVar3;
          if (uVar5 != uVar7) {
            uVar6 = *param_1;
            if (*(long *)(uVar6 + uVar5 * 8) == 0) {
              *(long **)(uVar6 + uVar5 * 8) = plVar2;
              uVar7 = uVar5;
            }
            else {
              *plVar2 = *plVar3;
              *plVar3 = **(undefined8 **)(uVar6 + uVar5 * 8);
              **(long **)(uVar6 + uVar5 * 8) = (long)plVar3;
              plVar4 = plVar2;
            }
          }
          plVar2 = plVar4;
          plVar3 = (long *)*plVar4;
        }
      }
    }
    return;
  }
  if (param_2 < uVar7) {
    uVar1 = (ulong)((float)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar1) {
      uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
    }
    if (param_2 <= uVar1) {
      param_2 = uVar1;
    }
    if (param_2 < uVar7) goto LAB_10aa086fc;
  }
  return;
}



/* Entry: 10aa08784; end: 10aa0893b;  */

void FUN_10aa08784(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    uVar1 = *param_1;
    *param_1 = 0;
    if (uVar1 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      uVar1 = *param_1;
      *param_1 = param_2;
      if (uVar1 != 0) {
        if ((char)param_1[2] == '\x01') {
          func_0x00010a3f7f28(uVar1 + 0x10);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(uVar1);
        return;
      }
      return;
    }
    uVar1 = param_2 << 3;
    __Znwm();
    uVar2 = *param_1;
    *param_1 = uVar1;
    if (uVar2 != 0) {
      __ZdlPv();
    }
    uVar1 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar1 * 8) = 0;
      uVar1 = uVar1 + 1;
    } while (param_2 != uVar1);
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar1 = plVar3[1];
      uVar2 = param_2 - 1;
      if ((param_2 & uVar2) == 0) {
        uVar1 = uVar1 & uVar2;
      }
      else if (param_2 <= uVar1) {
        uVar6 = 0;
        if (param_2 != 0) {
          uVar6 = uVar1 / param_2;
        }
        uVar1 = uVar1 - uVar6 * param_2;
      }
      *(ulong **)(*param_1 + uVar1 * 8) = param_1 + 2;
      plVar4 = (long *)*plVar3;
      while (plVar4 != (long *)0x0) {
        uVar6 = plVar4[1];
        if ((param_2 & uVar2) == 0) {
          uVar6 = uVar6 & uVar2;
        }
        else if (param_2 <= uVar6) {
          uVar7 = 0;
          if (param_2 != 0) {
            uVar7 = uVar6 / param_2;
          }
          uVar6 = uVar6 - uVar7 * param_2;
        }
        plVar5 = plVar4;
        if (uVar6 != uVar1) {
          uVar7 = *param_1;
          if (*(long *)(uVar7 + uVar6 * 8) == 0) {
            *(long **)(uVar7 + uVar6 * 8) = plVar3;
            uVar1 = uVar6;
          }
          else {
            *plVar3 = *plVar4;
            *plVar4 = **(undefined8 **)(uVar7 + uVar6 * 8);
            **(long **)(uVar7 + uVar6 * 8) = (long)plVar4;
            plVar5 = plVar3;
          }
        }
        plVar3 = plVar5;
        plVar4 = (long *)*plVar5;
      }
    }
  }
  return;
}



/* Entry: 10aa0893c; end: 10aa08a1f;  */

long FUN_10aa0893c(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c2b05c();
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
          func_0x000107c2b068(param_1,plVar3 + 2,param_2);
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



/* Entry: 10aa08a20; end: 10aa08a7f;  */

undefined8 FUN_10aa08a20(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long alStack_38 [2];
  char cStack_28;
  
  if (param_2 != (undefined8 *)0x0) {
    uVar3 = *param_2;
    FUN_10aa08a80(alStack_38);
    lVar1 = alStack_38[0];
    alStack_38[0] = 0;
    if (lVar1 != 0) {
      if (cStack_28 == '\x01') {
        func_0x00010a3f7f28(lVar1 + 0x10);
      }
      __ZdlPv(lVar1);
    }
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa08a80);
  (*pcVar2)();
}



/* Entry: 10aa08a80; end: 10aa08b9f;  */

void FUN_10aa08a80(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar5 = uVar4 - 1;
  if ((uVar4 & uVar5) == 0) {
    uVar3 = uVar5 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_3);
  if (plVar7 != param_2 + 2) {
    uVar8 = plVar7[1];
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10aa08b34;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10aa08b34;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_10aa08b34:
  lVar6 = *param_3;
  if (lVar6 != 0) {
    uVar8 = *(ulong *)(lVar6 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar5 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(*param_2 + uVar8 * 8) = plVar7;
      lVar6 = *param_3;
    }
  }
  *plVar7 = lVar6;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10aa08ba0; end: 10aa08c7f;  */

void FUN_10aa08ba0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10aa08c80(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[4];
  plVar1 = (long *)plVar5[3];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x2f)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x2f);
    plVar1 = plVar5 + 3;
  }
  (**(code **)(*param_2 + 0x128))(param_1 + 2,param_2,plVar1,uVar7);
  *param_1 = 6;
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10aa08c80; end: 10aa08ce7;  */

void FUN_10aa08c80(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar4 = param_1;
  func_0x000109898688();
  if (ppuVar4 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar4);
    param_2 = ppuVar4;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar5 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = plVar5;
  FUN_10aa08c80(plVar5,param_2);
  FUN_10a052e3c(param_4);
  uVar9 = plVar7[7];
  plVar1 = (long *)plVar7[6];
  if (-1 < (char)*(byte *)((long)plVar7 + 0x47)) {
    uVar9 = (ulong)*(byte *)((long)plVar7 + 0x47);
    plVar1 = plVar7 + 6;
  }
  (**(code **)(*plVar5 + 0x128))(extraout_x8 + 2,plVar5,plVar1,uVar9);
  *extraout_x8 = 6;
  plVar5 = plVar6 + 0x4b;
  lVar8 = plVar6[0x59];
  uVar9 = lVar8 - 1;
  plVar6[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar5[lVar8 + 2];
    if (plVar6[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar9) {
      return;
    }
  }
  lVar8 = *plVar5;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_88 = plVar5;
        if (uVar10 >> 0x3c == 0) {
          lVar3 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar3 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar5 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar3 + uVar10 * 0x10;
          lStack_a8 = lVar8;
          lStack_a0 = lVar8;
          lStack_98 = lVar8;
          lStack_90 = lVar14;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar9;
  return;
}



/* Entry: 10aa08ce8; end: 10aa08dc7;  */

void FUN_10aa08ce8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10aa08c80(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[7];
  plVar1 = (long *)plVar5[6];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x47)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x47);
    plVar1 = plVar5 + 6;
  }
  (**(code **)(*param_2 + 0x128))(param_1 + 2,param_2,plVar1,uVar7);
  *param_1 = 6;
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10aa08dc8; end: 10aa08ea7;  */

void FUN_10aa08dc8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10aa08c80(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[10];
  plVar1 = (long *)plVar5[9];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x5f)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x5f);
    plVar1 = plVar5 + 9;
  }
  (**(code **)(*param_2 + 0x128))(param_1 + 2,param_2,plVar1,uVar7);
  *param_1 = 6;
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10aa08ea8; end: 10aa08f87;  */

void FUN_10aa08ea8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10aa08c80(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[0x10];
  plVar1 = (long *)plVar5[0xf];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x8f)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x8f);
    plVar1 = plVar5 + 0xf;
  }
  (**(code **)(*param_2 + 0x128))(param_1 + 2,param_2,plVar1,uVar7);
  *param_1 = 6;
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10aa08f88; end: 10aa09043;  */

void FUN_10aa08f88(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
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
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10aa08c80(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[0x12];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)lVar5;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10aa09044; end: 10aa09143;  */

void FUN_10aa09044(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
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
  func_0x000109898688(param_2,param_3);
  if (plVar4 == (long *)0x0) {
    puVar5 = &UNK_10f68f52e;
  }
  else {
    FUN_10a053854(param_2,plVar4);
    if ((param_2 != (long *)0x0) && (___dynamic_cast(), param_2 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      FUN_10a9de1cc(param_2);
      *param_1 = 0;
      plVar4 = plVar3 + 0x4b;
      lVar6 = plVar3[0x59];
      uVar7 = lVar6 - 1;
      plVar3[0x59] = uVar7;
      if (uVar7 < 8) {
        uVar7 = plVar4[lVar6 + 2];
        if (plVar3[0x5a] == uVar7) {
          return;
        }
      }
      else {
        uVar7 = *(ulong *)(plVar3[0x57] + -8);
        plVar3[0x57] = plVar3[0x57] + -8;
        if (plVar3[0x5a] == uVar7) {
          return;
        }
      }
      lVar6 = *plVar4;
      lVar11 = plVar3[0x4c];
      lVar9 = lVar11 - lVar6;
      uVar13 = lVar9 >> 4;
      if (uVar13 < uVar7) {
        uVar14 = uVar7 - uVar13;
        lVar12 = plVar3[0x4d];
        if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
          if (uVar7 >> 0x3c == 0) {
            uVar8 = lVar12 - lVar6 >> 3;
            if (uVar8 <= uVar7) {
              uVar8 = uVar7;
            }
            if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
              uVar8 = 0xfffffffffffffff;
            }
            plStack_68 = plVar4;
            if (uVar8 >> 0x3c == 0) {
              lVar2 = uVar8 << 4;
              __Znwm();
              lVar11 = lVar2 + lVar9;
              _bzero(lVar11,uVar14 * 0x10);
              lVar10 = lVar11 + uVar13 * -0x10;
              _memcpy(lVar10,lVar6,lVar9);
              *plVar4 = lVar10;
              plVar3[0x4c] = lVar11 + uVar14 * 0x10;
              plVar3[0x4d] = lVar2 + uVar8 * 0x10;
              lStack_88 = lVar6;
              lStack_80 = lVar6;
              lStack_78 = lVar6;
              lStack_70 = lVar12;
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
        _bzero(lVar11,uVar14 * 0x10);
        plVar3[0x4c] = lVar11 + uVar14 * 0x10;
      }
      else if (uVar7 < uVar13) {
        lVar6 = lVar6 + uVar7 * 0x10;
        while (lVar11 != lVar6) {
          lVar11 = lVar11 + -0x10;
          func_0x00010988c204(lVar11);
        }
        plVar3[0x4c] = lVar6;
      }
code_r0x00010988c138:
      plVar3[0x5a] = uVar7;
      return;
    }
    puVar5 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar5);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aa09130);
  (*pcVar1)();
}


