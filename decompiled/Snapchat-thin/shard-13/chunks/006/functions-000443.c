/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aa59c44; end: 10aa59c53;  */

long * FUN_10aa59c44(undefined8 param_1,long *param_2)

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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa59cd4);
  (*pcVar2)();
}



/* Entry: 10aa59c54; end: 10aa59cd3;  */

long * FUN_10aa59c54(long *param_1)

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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa59cd4);
  (*pcVar2)();
}



/* Entry: 10aa59cd4; end: 10aa59d2b;  */

long FUN_10aa59cd4(long param_1)

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



/* Entry: 10aa59d2c; end: 10aa59d3b;  */

void FUN_10aa59d2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3c008;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aa59d3c; end: 10aa59d5b;  */

void FUN_10aa59d3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3c008;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa59d5c; end: 10aa59d6b;  */

void FUN_10aa59d5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010aa59d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10aa59d6c; end: 10aa59e13;  */

undefined8 * FUN_10aa59d6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3c058;
  (**(code **)param_1[9])();
  FUN_10aa59fb8(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10aa59e14; end: 10aa59e77;  */

bool FUN_10aa59e14(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0xb9) {
    iVar1 = 0xe4ecc28;
    _memcmp(&UNK_10e4ecc28);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10aa59e78; end: 10aa59f97;  */

void FUN_10aa59e78(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  undefined7 uStack_28;
  byte bStack_21;
  
  func_0x000107c2b054(param_1,&UNK_10f68bdd7);
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



/* Entry: 10aa59f98; end: 10aa59fa7;  */

undefined1  [16] FUN_10aa59f98(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xb9;
  auVar1._0_8_ = &UNK_10e4ecc28;
  return auVar1;
}



/* Entry: 10aa59fa8; end: 10aa59fb7;  */

long * FUN_10aa59fa8(undefined8 param_1,long *param_2)

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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa5a038);
  (*pcVar2)();
}



/* Entry: 10aa59fb8; end: 10aa5a037;  */

long * FUN_10aa59fb8(long *param_1)

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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa5a038);
  (*pcVar2)();
}



/* Entry: 10aa5a038; end: 10aa5a08f;  */

long FUN_10aa5a038(long param_1)

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



/* Entry: 10aa5a090; end: 10aa5a09f;  */

void FUN_10aa5a090(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3c0b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aa5a0a0; end: 10aa5a0bf;  */

void FUN_10aa5a0a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3c0b0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa5a0c0; end: 10aa5a0cf;  */

void FUN_10aa5a0c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010aa5a0c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10aa5a0d0; end: 10aa5a177;  */

undefined8 * FUN_10aa5a0d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3c100;
  (**(code **)param_1[9])();
  FUN_10aa5a31c(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10aa5a178; end: 10aa5a1db;  */

bool FUN_10aa5a178(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0xb9) {
    iVar1 = 0xe4ecd6f;
    _memcmp(&UNK_10e4ecd6f);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10aa5a1dc; end: 10aa5a2fb;  */

void FUN_10aa5a1dc(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  undefined7 uStack_28;
  byte bStack_21;
  
  func_0x000107c2b054(param_1,&UNK_10f68bdf0);
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



/* Entry: 10aa5a2fc; end: 10aa5a30b;  */

undefined1  [16] FUN_10aa5a2fc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xb9;
  auVar1._0_8_ = &UNK_10e4ecd6f;
  return auVar1;
}



/* Entry: 10aa5a30c; end: 10aa5a31b;  */

long * FUN_10aa5a30c(undefined8 param_1,long *param_2)

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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa5a39c);
  (*pcVar2)();
}



/* Entry: 10aa5a31c; end: 10aa5a39b;  */

long * FUN_10aa5a31c(long *param_1)

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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa5a39c);
  (*pcVar2)();
}



/* Entry: 10aa5a39c; end: 10aa5a4fb;  */

long FUN_10aa5a39c(long param_1)

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



/* Entry: 10aa5a4fc; end: 10aa5a52f;  */

void FUN_10aa5a4fc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  lVar2 = *(long *)(param_2 + 0x10);
  FUN_10a40668c(lVar2 + 0x48,param_1);
  lVar1 = *(long *)(lVar2 + 0x48);
  if ((lVar1 != 0) && (func_0x00010aae9fd8(), lVar1 != 0)) {
    FUN_10a08d2e0(auStack_38,lVar1 + 0x10);
    FUN_10a406708(lVar2,auStack_38);
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
  }
  return;
}



/* Entry: 10aa5a530; end: 10aa5a6af;  */

void FUN_10aa5a530(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  
  lVar5 = *param_1;
  plVar8 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  lVar10 = (long)*(char *)(param_2 + 0x2f);
  if (lVar10 < 0) {
    puVar1 = *(undefined **)(param_2 + 0x18);
    lVar10 = *(long *)(param_2 + 0x20);
  }
  else {
    puVar1 = (undefined *)(param_2 + 0x18);
  }
  if (lVar5 != 0) {
    ___dynamic_cast(lVar5,&PTR_DAT_110bf32c0,&PTR_DAT_110c3b1f8,0);
    if (lVar5 != 0) {
      plVar9 = plVar8;
      if (plVar8 != (long *)0x0) {
        plVar6 = plVar8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = *plVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      goto LAB_10aa5a600;
    }
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      puVar2 = &UNK_10f68a4a1;
      if (lVar10 != 0) {
        puVar2 = puVar1;
      }
      func_0x00010ae06f08(1,2,&UNK_10f634897,&UNK_10f68be09,0x34,&UNK_10f63498b,in_x6,in_x7,lVar10,
                          puVar2);
    }
    lVar5 = 0;
  }
  plVar9 = (long *)0x0;
LAB_10aa5a600:
  plVar6 = *(long **)(param_2 + 0x10);
  plVar7 = (long *)plVar6[1];
  *plVar6 = lVar5;
  plVar6[1] = (long)plVar9;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 1;
    do {
      lVar10 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 1;
    do {
      lVar10 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar8);
      return;
    }
  }
  return;
}



/* Entry: 10aa5a6b0; end: 10aa5a6ef;  */

void FUN_10aa5a6b0(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x27)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10aa5a6f0; end: 10aa5a873;  */

void FUN_10aa5a6f0(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar8;
  long lVar9;
  long lStack_40;
  long *plStack_38;
  
  lVar7 = *param_1;
  plVar8 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  lVar9 = (long)*(char *)(param_2 + 0x2f);
  if (lVar9 < 0) {
    puVar1 = *(undefined **)(param_2 + 0x18);
    lVar9 = *(long *)(param_2 + 0x20);
  }
  else {
    puVar1 = (undefined *)(param_2 + 0x18);
  }
  if (lVar7 != 0) {
    ___dynamic_cast(lVar7,&PTR_DAT_110bf32c0,&PTR_DAT_110c3b1b0,0);
    if (lVar7 != 0) {
      lStack_40 = lVar7;
      plStack_38 = plVar8;
      if (plVar8 != (long *)0x0) {
        plVar2 = plVar8 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = *plVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      goto LAB_10aa5a7c0;
    }
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      puVar4 = &UNK_10f68a4a1;
      if (lVar9 != 0) {
        puVar4 = puVar1;
      }
      func_0x00010ae06f08(1,2,&UNK_10f634897,&UNK_10f68beb4,0x34,&UNK_10f63498b,in_x6,in_x7,lVar9,
                          puVar4);
    }
  }
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
LAB_10aa5a7c0:
  FUN_10aa18a98(*(undefined8 *)(param_2 + 0x10),&lStack_40);
  plVar2 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar3 = plStack_38 + 1;
    do {
      lVar9 = *plVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *plVar3 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar8);
      return;
    }
  }
  return;
}



/* Entry: 10aa5a874; end: 10aa5a8b3;  */

void FUN_10aa5a874(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x27)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10aa5a8b4; end: 10aa5a9d7;  */

void FUN_10aa5a8b4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uStack_30;
  long *plStack_28;
  
  uVar2 = *param_1;
  plVar3 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  lVar7 = (long)*(char *)(param_2 + 0x2f);
  if (lVar7 < 0) {
    lVar6 = *(long *)(param_2 + 0x18);
    lVar7 = *(long *)(param_2 + 0x20);
  }
  else {
    lVar6 = param_2 + 0x18;
  }
  FUN_10aa5a9d8(&uStack_30,uVar2,plVar3,lVar6,lVar7);
  plVar1 = plStack_28;
  uVar2 = uStack_30;
  puVar8 = *(undefined8 **)(param_2 + 0x10);
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  plVar9 = (long *)puVar8[1];
  puVar8[1] = plVar1;
  *puVar8 = uVar2;
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      lVar7 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar9 = plStack_28 + 1;
    do {
      lVar7 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      lVar7 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar3);
      return;
    }
  }
  return;
}



/* Entry: 10aa5a9d8; end: 10aa5aaaf;  */

void FUN_10aa5a9d8(long *param_1,long param_2,long param_3,undefined *param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  
  if (param_2 != 0) {
    ___dynamic_cast(param_2,&PTR_DAT_110bf32c0,&PTR_DAT_110c3b448,0);
    if (param_2 != 0) {
      *param_1 = param_2;
      param_1[1] = param_3;
      if (param_3 == 0) {
        return;
      }
      plVar1 = (long *)(param_3 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      return;
    }
    *param_1 = 0;
    param_1[1] = 0;
    func_0x00010aa5a44c(param_1);
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      puVar2 = &UNK_10f68a4a1;
      if (param_5 != 0) {
        puVar2 = param_4;
      }
      func_0x00010ae06f08(1,2,&UNK_10f634897,&UNK_10f68bf5f,0x34,&UNK_10f63498b,param_7,param_8,
                          param_5,puVar2);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10aa5aab0; end: 10aa5aaf3;  */

void FUN_10aa5aab0(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x27)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10aa5aaf4; end: 10aa5ab07;  */

void FUN_10aa5aaf4(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa5ab08; end: 10aa5ab23;  */

void FUN_10aa5ab08(long param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10aa5ab24; end: 10aa5ab5f;  */

long FUN_10aa5ab24(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba2110);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10aa5ab60; end: 10aa5ab73;  */

void FUN_10aa5ab60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa5ab74; end: 10aa5ab93;  */

void FUN_10aa5ab74(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c3c208;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa5ab94; end: 10aa5abc7;  */

long FUN_10aa5ab94(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10aa5af10(param_1 + 0x30);
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



/* Entry: 10aa5abc8; end: 10aa5abcb;  */

void FUN_10aa5abc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa5abcc; end: 10aa5acd7;  */

undefined8 * FUN_10aa5abcc(undefined8 *param_1)

{
  FUN_10aa5af10(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10aa5acd8; end: 10aa5aed3;  */

void FUN_10aa5acd8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar6 = (undefined8 *)0x78;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110c3c2c8;
  puVar6[3] = &PTR_FUN_110c38b18;
  puVar6[4] = 0;
  puVar6[5] = 0;
  uVar13 = *param_2;
  puVar6[7] = param_2[1];
  puVar6[6] = uVar13;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(puVar6 + 8) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)((long)puVar6 + 0x44) = *(undefined1 *)((long)param_2 + 0x14);
  lVar8 = param_2[3];
  puVar6[9] = lVar8;
  lVar9 = param_2[4];
  puVar6[0xb] = param_2[5];
  puVar6[10] = lVar9;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  puVar6[0xc] = 0;
  puVar6[0xd] = 0;
  puVar6[0xe] = 0;
  lVar9 = lVar9 - lVar8;
  if (lVar9 != 0) {
    uVar11 = lVar9 >> 5;
    if (uVar11 >> 0x3c != 0) {
      FUN_10aa3cb38();
LAB_10aa5ae90:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10aa5ae94);
      (*pcVar5)();
    }
    lVar8 = lVar9 >> 1;
    __Znwm();
    _bzero();
    uVar12 = 0;
    puVar6[0xc] = lVar8;
    puVar6[0xd] = lVar8 + (lVar9 >> 1);
    puVar6[0xe] = lVar8 + uVar11 * 0x10;
    do {
      lVar9 = puVar6[9];
      if ((ulong)(puVar6[10] - lVar9 >> 5) <= uVar12) goto LAB_10aa5ae90;
      puVar7 = (undefined8 *)0x50;
      __Znwm();
      puVar2 = (undefined8 *)(lVar9 + uVar12 * 0x20);
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = &PTR_FUN_110c3c768;
      puVar7[3] = &PTR_FUN_110c3ab28;
      puVar7[4] = 0;
      puVar7[5] = 0;
      uVar13 = *puVar2;
      uVar15 = puVar2[3];
      uVar14 = puVar2[2];
      puVar7[7] = puVar2[1];
      puVar7[6] = uVar13;
      puVar7[9] = uVar15;
      puVar7[8] = uVar14;
      if ((ulong)((long)(puVar6[0xd] - puVar6[0xc]) >> 4) <= uVar12) goto LAB_10aa5ae90;
      puVar2 = (undefined8 *)(puVar6[0xc] + uVar12 * 0x10);
      plVar10 = (long *)puVar2[1];
      *puVar2 = puVar7 + 3;
      puVar2[1] = puVar7;
      if (plVar10 != (long *)0x0) {
        plVar1 = plVar10 + 1;
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
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar11);
  }
  *param_1 = puVar6 + 3;
  param_1[1] = puVar6;
  return;
}



/* Entry: 10aa5aed4; end: 10aa5aee3;  */

void FUN_10aa5aed4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3c2c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aa5aee4; end: 10aa5af03;  */

void FUN_10aa5aee4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3c2c8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa5af04; end: 10aa5af0f;  */

undefined8 * FUN_10aa5af04(long param_1)

{
  FUN_10aa3cb4c(param_1 + 0x60);
  if (*(long *)(param_1 + 0x48) != 0) {
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x48);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined8 *)(param_1 + 0x18) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x20);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aa5af10; end: 10aa5af67;  */

long FUN_10aa5af10(long param_1)

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



/* Entry: 10aa5af68; end: 10aa5b24b;  */

long * FUN_10aa5af68(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined1 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  ulong unaff_x28;
  long lVar15;
  long *plStack_68;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10aa52f44(param_1,*(undefined8 *)(param_2 + 8));
  plVar13 = *(long **)(param_2 + 0x10);
  if (plVar13 != (long *)0x0) {
    plVar1 = param_1 + 2;
    do {
      uVar6 = plVar13[2];
      uVar10 = ((ulong)(uint)((int)uVar6 << 3) + 8 ^ uVar6 >> 0x20) * -0x622015f714c7d297;
      uVar10 = (uVar6 >> 0x20 ^ uVar10 >> 0x2f ^ uVar10) * -0x622015f714c7d297;
      uVar14 = (uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297;
      uVar10 = param_1[1];
      if (uVar10 != 0) {
        uVar8 = uVar10 - 1;
        if ((uVar10 & uVar8) == 0) {
          unaff_x28 = uVar14 & uVar8;
        }
        else {
          unaff_x28 = uVar14;
          if (uVar10 <= uVar14) {
            uVar12 = 0;
            if (uVar10 != 0) {
              uVar12 = uVar14 / uVar10;
            }
            unaff_x28 = uVar14 - uVar12 * uVar10;
          }
        }
        plVar11 = *(long **)(*param_1 + unaff_x28 * 8);
        if (plVar11 != (long *)0x0) {
          do {
            while( true ) {
              plVar11 = (long *)*plVar11;
              if (plVar11 == (long *)0x0) goto LAB_10aa5b080;
              uVar12 = plVar11[1];
              if (uVar12 != uVar14) break;
              if (plVar11[2] == uVar6) goto LAB_10aa5b1dc;
            }
            if ((uVar10 & uVar8) == 0) {
              uVar12 = uVar12 & uVar8;
            }
            else if (uVar10 <= uVar12) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar12 / uVar10;
              }
              uVar12 = uVar12 - uVar4 * uVar10;
            }
          } while (uVar12 == unaff_x28);
        }
      }
LAB_10aa5b080:
      plVar11 = (long *)0x68;
      __Znwm();
      *plVar11 = 0;
      plVar11[1] = uVar14;
      lVar7 = plVar13[3];
      lVar15 = plVar13[2];
      plVar11[3] = plVar13[3];
      plVar11[2] = lVar15;
      if (lVar7 != 0) {
        plVar9 = (long *)(lVar7 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plStack_68 = plVar11 + 4;
      *(undefined1 *)(plVar11 + 0xc) = 3;
      if ((char)plVar13[0xc] == '\0') {
        uVar5 = 0;
      }
      else {
        FUN_10a005398(&plStack_68,plVar13 + 4);
        uVar5 = (undefined1)plVar13[0xc];
      }
      *(undefined1 *)(plVar11 + 0xc) = uVar5;
      if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
        uVar6 = 1;
        if (2 < uVar10) {
          uVar6 = (ulong)((uVar10 & uVar10 - 1) != 0);
        }
        uVar6 = uVar6 | uVar10 << 1;
        uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (uVar6 <= uVar10) {
          uVar6 = uVar10;
        }
        FUN_10aa52f44(param_1,uVar6);
        uVar10 = param_1[1];
        if ((uVar10 & uVar10 - 1) == 0) {
          unaff_x28 = uVar10 - 1 & uVar14;
        }
        else {
          unaff_x28 = uVar14;
          if (uVar10 <= uVar14) {
            uVar6 = 0;
            if (uVar10 != 0) {
              uVar6 = uVar14 / uVar10;
            }
            unaff_x28 = uVar14 - uVar6 * uVar10;
          }
        }
      }
      lVar7 = *param_1;
      plVar9 = *(long **)(lVar7 + unaff_x28 * 8);
      if (plVar9 == (long *)0x0) {
        *plVar11 = *plVar1;
        *plVar1 = (long)plVar11;
        *(long **)(lVar7 + unaff_x28 * 8) = plVar1;
        if (*plVar11 != 0) {
          uVar6 = *(ulong *)(*plVar11 + 8);
          if ((uVar10 & uVar10 - 1) == 0) {
            uVar6 = uVar6 & uVar10 - 1;
          }
          else if (uVar10 <= uVar6) {
            uVar14 = 0;
            if (uVar10 != 0) {
              uVar14 = uVar6 / uVar10;
            }
            uVar6 = uVar6 - uVar14 * uVar10;
          }
          *(long **)(*param_1 + uVar6 * 8) = plVar11;
        }
      }
      else {
        *plVar11 = *plVar9;
        *plVar9 = (long)plVar11;
      }
      param_1[3] = param_1[3] + 1;
LAB_10aa5b1dc:
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
  }
  return param_1;
}



/* Entry: 10aa5b24c; end: 10aa5b4bb;  */

void FUN_10aa5b24c(undefined ******param_1,undefined ******param_2)

{
  undefined *****pppppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined ****ppppuVar5;
  undefined ******ppppppuVar6;
  undefined ******ppppppuVar7;
  undefined ******ppppppuVar8;
  undefined ******ppppppuVar9;
  undefined ****ppppuVar10;
  undefined *****pppppuVar11;
  undefined ******ppppppuVar12;
  undefined ******unaff_x21;
  undefined8 *puStack_130;
  undefined **ppuStack_128;
  int aiStack_120 [2];
  undefined8 *puStack_118;
  undefined *puStack_110;
  undefined8 *puStack_108;
  undefined ****ppppuStack_100;
  undefined ****ppppuStack_f8;
  undefined1 *puStack_f0;
  undefined ***pppuStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined ****ppppuStack_a0;
  undefined *****pppppuStack_98;
  undefined ****ppppuStack_90;
  undefined *****pppppuStack_88;
  undefined ****ppppuStack_80;
  undefined *****pppppuStack_78;
  undefined ****ppppuStack_70;
  undefined ****ppppuStack_68;
  undefined ****ppppuStack_60;
  undefined *****pppppuStack_58;
  long lStack_38;
  
  ppppppuVar12 = (undefined ******)&ppppuStack_a0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + 8) == '\x01') {
    pppppuVar11 = *param_1;
    pppppuStack_78 = param_2[1];
    ppppuStack_80 = (undefined ****)*param_2;
    if (param_2[1] != (undefined *****)0x0) {
      pppppuVar1 = param_2[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
        if (bVar3) {
          *pppppuVar1 = (undefined ****)((long)*pppppuVar1 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppppuVar6 = (undefined ******)&ppppuStack_80;
    ppppppuVar9 = param_1;
    (*(code *)pppppuVar11)();
    if ((undefined ******)pppppuStack_78 == (undefined ******)0x0) goto LAB_10aa5b434;
    ppppppuVar8 = (undefined ******)(pppppuStack_78 + 1);
    do {
      pppppuVar11 = *ppppppuVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar8,0x10);
      if (bVar3) {
        *ppppppuVar8 = (undefined *****)((long)pppppuVar11 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      ppppppuVar7 = (undefined ******)pppppuStack_78;
      ppppppuVar12 = param_1;
    } while (cVar2 != '\0');
  }
  else {
    ppppppuVar6 = param_1;
    ppppppuVar9 = param_2;
    if (*(char *)(param_1 + 8) != '\x02') goto LAB_10aa5b434;
    unaff_x21 = param_1;
    ppppppuVar8 = param_2;
    FUN_10a688b40();
    if (unaff_x21 != (undefined ******)0x0) {
      *unaff_x21 = (undefined *****)
                   CONCAT44((int)((ulong)*unaff_x21 >> 0x20) + 1,(int)*unaff_x21 + 1);
      ppppppuVar6 = (undefined ******)*param_1;
      FUN_10aa5b4bc();
      iVar4 = *(int *)((long)unaff_x21 + 4) + -1;
      *(int *)((long)unaff_x21 + 4) = iVar4;
      ppppppuVar9 = param_2;
      if (iVar4 == 0) {
        *(undefined4 *)unaff_x21 = 0;
      }
      goto LAB_10aa5b434;
    }
    ppppppuVar9 = (undefined ******)0x0;
    ppppppuVar6 = (undefined ******)0x0;
    if (ppppppuVar8 == (undefined ******)0x0) goto LAB_10aa5b434;
    ppppuStack_68 = (undefined ****)param_1[1];
    ppppuStack_70 = (undefined ****)*param_1;
    if (param_1[1] != (undefined *****)0x0) {
      pppppuVar11 = param_1[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar11,0x10);
        if (bVar3) {
          *pppppuVar11 = (undefined ****)((long)*pppppuVar11 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuStack_90 = (undefined ****)*param_2;
    ppppppuVar8 = (undefined ******)param_2[1];
    if (ppppppuVar8 != (undefined ******)0x0) {
      ppppppuVar6 = ppppppuVar8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
        if (bVar3) {
          *ppppppuVar6 = (undefined *****)((long)*ppppppuVar6 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuStack_80 = (undefined ****)FUN_10aa5b6c0;
    pppppuStack_78 = (undefined *****)&PTR_FUN_110c3c308;
    ppppuStack_a0 = (undefined ****)0x0;
    pppppuStack_98 = (undefined *****)0x0;
    if (ppppppuVar8 != (undefined ******)0x0) {
      ppppppuVar6 = ppppppuVar8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
        if (bVar3) {
          *ppppppuVar6 = (undefined *****)((long)*ppppppuVar6 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    unaff_x21 = (undefined ******)&ppppuStack_80;
    ppppppuVar9 = (undefined ******)&ppppuStack_80;
    pppppuStack_88 = (undefined *****)ppppppuVar8;
    ppppuStack_60 = ppppuStack_90;
    pppppuStack_58 = (undefined *****)ppppppuVar8;
    FUN_10a4634ec();
    ppppppuVar6 = &pppppuStack_78;
    (*(code *)*pppppuStack_78)();
    if (ppppppuVar8 != (undefined ******)0x0) {
      ppppppuVar7 = ppppppuVar8 + 1;
      do {
        pppppuVar11 = *ppppppuVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
        if (bVar3) {
          *ppppppuVar7 = (undefined *****)((long)pppppuVar11 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pppppuVar11 == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar8)[2])(ppppppuVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppuVar6 = ppppppuVar8;
      }
    }
    param_1 = (undefined ******)&ppppuStack_a0;
    if ((undefined ******)pppppuStack_98 == (undefined ******)0x0) goto LAB_10aa5b434;
    ppppppuVar8 = (undefined ******)(pppppuStack_98 + 1);
    do {
      pppppuVar11 = *ppppppuVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar8,0x10);
      if (bVar3) {
        *ppppppuVar8 = (undefined *****)((long)pppppuVar11 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      ppppppuVar7 = (undefined ******)pppppuStack_98;
    } while (cVar2 != '\0');
  }
  param_1 = ppppppuVar12;
  if (pppppuVar11 == (undefined *****)0x0) {
    (*(code *)(*ppppppuVar7)[2])(ppppppuVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppppppuVar6 = ppppppuVar7;
  }
LAB_10aa5b434:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    (*(code *)*pppppuStack_78)(unaff_x21 + 1);
    FUN_10aa5b738(param_1 + 2);
    func_0x00010a004dac(&ppppuStack_a0);
    __Unwind_Resume();
    func_0x000109884c0c(&ppppuStack_100,ppppppuVar6 + 1,*ppppppuVar6);
    func_0x000109884820(&ppuStack_128,&ppppuStack_100,*ppppppuVar6);
    if (ppppuStack_100 != (undefined ****)0x0) {
      (*(code *)**ppppuStack_100)();
    }
    (*(code *)(**ppppppuVar6)[6])(&puStack_130);
    pppppuVar11 = *ppppppuVar6;
    ppppuStack_f8 = (undefined ****)ppppppuVar9[1];
    ppppuStack_100 = (undefined ****)*ppppppuVar9;
    if (ppppppuVar9[1] != (undefined *****)0x0) {
      pppppuVar1 = ppppppuVar9[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
        if (bVar3) {
          *pppppuVar1 = (undefined ****)((long)*pppppuVar1 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppuStack_e0 = &PTR_DAT_110c3c2a0;
    func_0x000109899de4(&puStack_110,pppppuVar11,&ppppuStack_100,&ppuStack_e0,0,0);
    ppppuVar5 = ppppuStack_f8;
    if ((undefined *****)ppppuStack_f8 != (undefined *****)0x0) {
      pppppuVar1 = (undefined *****)(ppppuStack_f8 + 1);
      do {
        ppppuVar10 = *pppppuVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
        if (bVar3) {
          *pppppuVar1 = (undefined ****)((long)ppppuVar10 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppuVar10 == (undefined ****)0x0) {
        (*(code *)(*ppppuStack_f8)[2])(ppppuStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar5);
      }
    }
    uStack_d8 = 1;
    ppuStack_e0 = &puStack_110;
    (*(code *)(*pppppuVar11)[0xb])(pppppuVar11);
    ppppuStack_100 = (undefined ****)&ppuStack_128;
    ppppuStack_f8 = (undefined ****)pppppuVar11;
    puStack_f0 = (undefined1 *)&puStack_130;
    pppuStack_e8 = &ppuStack_e0;
    func_0x0001098960c0(aiStack_120);
    if ((3 < aiStack_120[0]) && (puStack_118 != (undefined8 *)0x0)) {
      (**(code **)*puStack_118)();
    }
    if ((3 < (int)puStack_110) && (puStack_108 != (undefined8 *)0x0)) {
      (**(code **)*puStack_108)();
    }
    if (puStack_130 != (undefined8 *)0x0) {
      (**(code **)*puStack_130)();
    }
    if ((undefined ***)ppuStack_128 != (undefined ***)0x0) {
      (**(code **)*ppuStack_128)();
    }
    return;
  }
  return;
}



/* Entry: 10aa5b4bc; end: 10aa5b6bf;  */

void FUN_10aa5b4bc(undefined8 *param_1,undefined8 *param_2)

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
  ppuStack_40 = &PTR_DAT_110c3c2a0;
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



/* Entry: 10aa5b6c0; end: 10aa5b6cf;  */

void FUN_10aa5b6c0(long param_1)

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
  ppuStack_40 = &PTR_DAT_110c3c2a0;
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



/* Entry: 10aa5b6d0; end: 10aa5b6f7;  */

long FUN_10aa5b6d0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10aa5b738(param_1 + 0x18);
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



/* Entry: 10aa5b6f8; end: 10aa5b737;  */

void FUN_10aa5b6f8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c3c308;
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



/* Entry: 10aa5b738; end: 10aa5b78f;  */

long FUN_10aa5b738(long param_1)

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



/* Entry: 10aa5b790; end: 10aa5b79f;  */

void FUN_10aa5b790(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3c330;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aa5b7a0; end: 10aa5b7bf;  */

void FUN_10aa5b7a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3c330;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa5b7c0; end: 10aa5b7f3;  */

long FUN_10aa5b7c0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10aa5af10(param_1 + 0x30);
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



/* Entry: 10aa5b7f4; end: 10aa5b7f7;  */

void FUN_10aa5b7f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa5b7f8; end: 10aa5b903;  */

undefined8 * FUN_10aa5b7f8(undefined8 *param_1)

{
  FUN_10aa5af10(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10aa5b904; end: 10aa5bbe7;  */

long * FUN_10aa5b904(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined1 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  ulong unaff_x28;
  long lVar15;
  long *plStack_68;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10aa52008(param_1,*(undefined8 *)(param_2 + 8));
  plVar13 = *(long **)(param_2 + 0x10);
  if (plVar13 != (long *)0x0) {
    plVar1 = param_1 + 2;
    do {
      uVar6 = plVar13[2];
      uVar10 = ((ulong)(uint)((int)uVar6 << 3) + 8 ^ uVar6 >> 0x20) * -0x622015f714c7d297;
      uVar10 = (uVar6 >> 0x20 ^ uVar10 >> 0x2f ^ uVar10) * -0x622015f714c7d297;
      uVar14 = (uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297;
      uVar10 = param_1[1];
      if (uVar10 != 0) {
        uVar8 = uVar10 - 1;
        if ((uVar10 & uVar8) == 0) {
          unaff_x28 = uVar14 & uVar8;
        }
        else {
          unaff_x28 = uVar14;
          if (uVar10 <= uVar14) {
            uVar12 = 0;
            if (uVar10 != 0) {
              uVar12 = uVar14 / uVar10;
            }
            unaff_x28 = uVar14 - uVar12 * uVar10;
          }
        }
        plVar11 = *(long **)(*param_1 + unaff_x28 * 8);
        if (plVar11 != (long *)0x0) {
          do {
            while( true ) {
              plVar11 = (long *)*plVar11;
              if (plVar11 == (long *)0x0) goto LAB_10aa5ba1c;
              uVar12 = plVar11[1];
              if (uVar12 != uVar14) break;
              if (plVar11[2] == uVar6) goto LAB_10aa5bb78;
            }
            if ((uVar10 & uVar8) == 0) {
              uVar12 = uVar12 & uVar8;
            }
            else if (uVar10 <= uVar12) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar12 / uVar10;
              }
              uVar12 = uVar12 - uVar4 * uVar10;
            }
          } while (uVar12 == unaff_x28);
        }
      }
LAB_10aa5ba1c:
      plVar11 = (long *)0x68;
      __Znwm();
      *plVar11 = 0;
      plVar11[1] = uVar14;
      lVar7 = plVar13[3];
      lVar15 = plVar13[2];
      plVar11[3] = plVar13[3];
      plVar11[2] = lVar15;
      if (lVar7 != 0) {
        plVar9 = (long *)(lVar7 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plStack_68 = plVar11 + 4;
      *(undefined1 *)(plVar11 + 0xc) = 3;
      if ((char)plVar13[0xc] == '\0') {
        uVar5 = 0;
      }
      else {
        FUN_10a005398(&plStack_68,plVar13 + 4);
        uVar5 = (undefined1)plVar13[0xc];
      }
      *(undefined1 *)(plVar11 + 0xc) = uVar5;
      if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
        uVar6 = 1;
        if (2 < uVar10) {
          uVar6 = (ulong)((uVar10 & uVar10 - 1) != 0);
        }
        uVar6 = uVar6 | uVar10 << 1;
        uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (uVar6 <= uVar10) {
          uVar6 = uVar10;
        }
        FUN_10aa52008(param_1,uVar6);
        uVar10 = param_1[1];
        if ((uVar10 & uVar10 - 1) == 0) {
          unaff_x28 = uVar10 - 1 & uVar14;
        }
        else {
          unaff_x28 = uVar14;
          if (uVar10 <= uVar14) {
            uVar6 = 0;
            if (uVar10 != 0) {
              uVar6 = uVar14 / uVar10;
            }
            unaff_x28 = uVar14 - uVar6 * uVar10;
          }
        }
      }
      lVar7 = *param_1;
      plVar9 = *(long **)(lVar7 + unaff_x28 * 8);
      if (plVar9 == (long *)0x0) {
        *plVar11 = *plVar1;
        *plVar1 = (long)plVar11;
        *(long **)(lVar7 + unaff_x28 * 8) = plVar1;
        if (*plVar11 != 0) {
          uVar6 = *(ulong *)(*plVar11 + 8);
          if ((uVar10 & uVar10 - 1) == 0) {
            uVar6 = uVar6 & uVar10 - 1;
          }
          else if (uVar10 <= uVar6) {
            uVar14 = 0;
            if (uVar10 != 0) {
              uVar14 = uVar6 / uVar10;
            }
            uVar6 = uVar6 - uVar14 * uVar10;
          }
          *(long **)(*param_1 + uVar6 * 8) = plVar11;
        }
      }
      else {
        *plVar11 = *plVar9;
        *plVar9 = (long)plVar11;
      }
      param_1[3] = param_1[3] + 1;
LAB_10aa5bb78:
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
  }
  return param_1;
}



/* Entry: 10aa5bbe8; end: 10aa5be57;  */

void FUN_10aa5bbe8(undefined ******param_1,undefined ******param_2)

{
  undefined *****pppppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined ****ppppuVar5;
  undefined ******ppppppuVar6;
  undefined ******ppppppuVar7;
  undefined ******ppppppuVar8;
  undefined ******ppppppuVar9;
  undefined ****ppppuVar10;
  undefined *****pppppuVar11;
  undefined ******ppppppuVar12;
  undefined ******unaff_x21;
  undefined8 *puStack_130;
  undefined **ppuStack_128;
  int aiStack_120 [2];
  undefined8 *puStack_118;
  undefined *puStack_110;
  undefined8 *puStack_108;
  undefined ****ppppuStack_100;
  undefined ****ppppuStack_f8;
  undefined1 *puStack_f0;
  undefined ***pppuStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined ****ppppuStack_a0;
  undefined *****pppppuStack_98;
  undefined ****ppppuStack_90;
  undefined *****pppppuStack_88;
  undefined ****ppppuStack_80;
  undefined *****pppppuStack_78;
  undefined ****ppppuStack_70;
  undefined ****ppppuStack_68;
  undefined ****ppppuStack_60;
  undefined *****pppppuStack_58;
  long lStack_38;
  
  ppppppuVar12 = (undefined ******)&ppppuStack_a0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + 8) == '\x01') {
    pppppuVar11 = *param_1;
    pppppuStack_78 = param_2[1];
    ppppuStack_80 = (undefined ****)*param_2;
    if (param_2[1] != (undefined *****)0x0) {
      pppppuVar1 = param_2[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
        if (bVar3) {
          *pppppuVar1 = (undefined ****)((long)*pppppuVar1 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppppuVar6 = (undefined ******)&ppppuStack_80;
    ppppppuVar9 = param_1;
    (*(code *)pppppuVar11)();
    if ((undefined ******)pppppuStack_78 == (undefined ******)0x0) goto LAB_10aa5bdd0;
    ppppppuVar8 = (undefined ******)(pppppuStack_78 + 1);
    do {
      pppppuVar11 = *ppppppuVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar8,0x10);
      if (bVar3) {
        *ppppppuVar8 = (undefined *****)((long)pppppuVar11 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      ppppppuVar7 = (undefined ******)pppppuStack_78;
      ppppppuVar12 = param_1;
    } while (cVar2 != '\0');
  }
  else {
    ppppppuVar6 = param_1;
    ppppppuVar9 = param_2;
    if (*(char *)(param_1 + 8) != '\x02') goto LAB_10aa5bdd0;
    unaff_x21 = param_1;
    ppppppuVar8 = param_2;
    FUN_10a688b40();
    if (unaff_x21 != (undefined ******)0x0) {
      *unaff_x21 = (undefined *****)
                   CONCAT44((int)((ulong)*unaff_x21 >> 0x20) + 1,(int)*unaff_x21 + 1);
      ppppppuVar6 = (undefined ******)*param_1;
      FUN_10aa5be58();
      iVar4 = *(int *)((long)unaff_x21 + 4) + -1;
      *(int *)((long)unaff_x21 + 4) = iVar4;
      ppppppuVar9 = param_2;
      if (iVar4 == 0) {
        *(undefined4 *)unaff_x21 = 0;
      }
      goto LAB_10aa5bdd0;
    }
    ppppppuVar9 = (undefined ******)0x0;
    ppppppuVar6 = (undefined ******)0x0;
    if (ppppppuVar8 == (undefined ******)0x0) goto LAB_10aa5bdd0;
    ppppuStack_68 = (undefined ****)param_1[1];
    ppppuStack_70 = (undefined ****)*param_1;
    if (param_1[1] != (undefined *****)0x0) {
      pppppuVar11 = param_1[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar11,0x10);
        if (bVar3) {
          *pppppuVar11 = (undefined ****)((long)*pppppuVar11 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuStack_90 = (undefined ****)*param_2;
    ppppppuVar8 = (undefined ******)param_2[1];
    if (ppppppuVar8 != (undefined ******)0x0) {
      ppppppuVar6 = ppppppuVar8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
        if (bVar3) {
          *ppppppuVar6 = (undefined *****)((long)*ppppppuVar6 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuStack_80 = (undefined ****)FUN_10aa5c05c;
    pppppuStack_78 = (undefined *****)&PTR_FUN_110c3c3e0;
    ppppuStack_a0 = (undefined ****)0x0;
    pppppuStack_98 = (undefined *****)0x0;
    if (ppppppuVar8 != (undefined ******)0x0) {
      ppppppuVar6 = ppppppuVar8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
        if (bVar3) {
          *ppppppuVar6 = (undefined *****)((long)*ppppppuVar6 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    unaff_x21 = (undefined ******)&ppppuStack_80;
    ppppppuVar9 = (undefined ******)&ppppuStack_80;
    pppppuStack_88 = (undefined *****)ppppppuVar8;
    ppppuStack_60 = ppppuStack_90;
    pppppuStack_58 = (undefined *****)ppppppuVar8;
    FUN_10a4634ec();
    ppppppuVar6 = &pppppuStack_78;
    (*(code *)*pppppuStack_78)();
    if (ppppppuVar8 != (undefined ******)0x0) {
      ppppppuVar7 = ppppppuVar8 + 1;
      do {
        pppppuVar11 = *ppppppuVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
        if (bVar3) {
          *ppppppuVar7 = (undefined *****)((long)pppppuVar11 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pppppuVar11 == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar8)[2])(ppppppuVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppuVar6 = ppppppuVar8;
      }
    }
    param_1 = (undefined ******)&ppppuStack_a0;
    if ((undefined ******)pppppuStack_98 == (undefined ******)0x0) goto LAB_10aa5bdd0;
    ppppppuVar8 = (undefined ******)(pppppuStack_98 + 1);
    do {
      pppppuVar11 = *ppppppuVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar8,0x10);
      if (bVar3) {
        *ppppppuVar8 = (undefined *****)((long)pppppuVar11 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      ppppppuVar7 = (undefined ******)pppppuStack_98;
    } while (cVar2 != '\0');
  }
  param_1 = ppppppuVar12;
  if (pppppuVar11 == (undefined *****)0x0) {
    (*(code *)(*ppppppuVar7)[2])(ppppppuVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppppppuVar6 = ppppppuVar7;
  }
LAB_10aa5bdd0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    (*(code *)*pppppuStack_78)(unaff_x21 + 1);
    FUN_10aa5c0d4(param_1 + 2);
    func_0x00010a004dac(&ppppuStack_a0);
    __Unwind_Resume();
    func_0x000109884c0c(&ppppuStack_100,ppppppuVar6 + 1,*ppppppuVar6);
    func_0x000109884820(&ppuStack_128,&ppppuStack_100,*ppppppuVar6);
    if (ppppuStack_100 != (undefined ****)0x0) {
      (*(code *)**ppppuStack_100)();
    }
    (*(code *)(**ppppppuVar6)[6])(&puStack_130);
    pppppuVar11 = *ppppppuVar6;
    ppppuStack_f8 = (undefined ****)ppppppuVar9[1];
    ppppuStack_100 = (undefined ****)*ppppppuVar9;
    if (ppppppuVar9[1] != (undefined *****)0x0) {
      pppppuVar1 = ppppppuVar9[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
        if (bVar3) {
          *pppppuVar1 = (undefined ****)((long)*pppppuVar1 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppuStack_e0 = &PTR_DAT_110c3c3c8;
    func_0x000109899de4(&puStack_110,pppppuVar11,&ppppuStack_100,&ppuStack_e0,0,0);
    ppppuVar5 = ppppuStack_f8;
    if ((undefined *****)ppppuStack_f8 != (undefined *****)0x0) {
      pppppuVar1 = (undefined *****)(ppppuStack_f8 + 1);
      do {
        ppppuVar10 = *pppppuVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
        if (bVar3) {
          *pppppuVar1 = (undefined ****)((long)ppppuVar10 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppuVar10 == (undefined ****)0x0) {
        (*(code *)(*ppppuStack_f8)[2])(ppppuStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar5);
      }
    }
    uStack_d8 = 1;
    ppuStack_e0 = &puStack_110;
    (*(code *)(*pppppuVar11)[0xb])(pppppuVar11);
    ppppuStack_100 = (undefined ****)&ppuStack_128;
    ppppuStack_f8 = (undefined ****)pppppuVar11;
    puStack_f0 = (undefined1 *)&puStack_130;
    pppuStack_e8 = &ppuStack_e0;
    func_0x0001098960c0(aiStack_120);
    if ((3 < aiStack_120[0]) && (puStack_118 != (undefined8 *)0x0)) {
      (**(code **)*puStack_118)();
    }
    if ((3 < (int)puStack_110) && (puStack_108 != (undefined8 *)0x0)) {
      (**(code **)*puStack_108)();
    }
    if (puStack_130 != (undefined8 *)0x0) {
      (**(code **)*puStack_130)();
    }
    if ((undefined ***)ppuStack_128 != (undefined ***)0x0) {
      (**(code **)*ppuStack_128)();
    }
    return;
  }
  return;
}



/* Entry: 10aa5be58; end: 10aa5c05b;  */

void FUN_10aa5be58(undefined8 *param_1,undefined8 *param_2)

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
  ppuStack_40 = &PTR_DAT_110c3c3c8;
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



/* Entry: 10aa5c05c; end: 10aa5c06b;  */

void FUN_10aa5c05c(long param_1)

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
  ppuStack_40 = &PTR_DAT_110c3c3c8;
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



/* Entry: 10aa5c06c; end: 10aa5c093;  */

long FUN_10aa5c06c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10aa5c0d4(param_1 + 0x18);
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



/* Entry: 10aa5c094; end: 10aa5c0d3;  */

void FUN_10aa5c094(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c3c3e0;
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



/* Entry: 10aa5c0d4; end: 10aa5c12b;  */

long FUN_10aa5c0d4(long param_1)

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



/* Entry: 10aa5c12c; end: 10aa5c13b;  */

void FUN_10aa5c12c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3c408;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aa5c13c; end: 10aa5c15b;  */

void FUN_10aa5c13c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3c408;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa5c15c; end: 10aa5c18f;  */

long FUN_10aa5c15c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10aa5af10(param_1 + 0x30);
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



/* Entry: 10aa5c190; end: 10aa5c193;  */

void FUN_10aa5c190(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa5c194; end: 10aa5c29f;  */

undefined8 * FUN_10aa5c194(undefined8 *param_1)

{
  FUN_10aa5af10(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10aa5c2a0; end: 10aa5c583;  */

long * FUN_10aa5c2a0(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined1 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  ulong unaff_x28;
  long lVar15;
  long *plStack_68;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10aa53e80(param_1,*(undefined8 *)(param_2 + 8));
  plVar13 = *(long **)(param_2 + 0x10);
  if (plVar13 != (long *)0x0) {
    plVar1 = param_1 + 2;
    do {
      uVar6 = plVar13[2];
      uVar10 = ((ulong)(uint)((int)uVar6 << 3) + 8 ^ uVar6 >> 0x20) * -0x622015f714c7d297;
      uVar10 = (uVar6 >> 0x20 ^ uVar10 >> 0x2f ^ uVar10) * -0x622015f714c7d297;
      uVar14 = (uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297;
      uVar10 = param_1[1];
      if (uVar10 != 0) {
        uVar8 = uVar10 - 1;
        if ((uVar10 & uVar8) == 0) {
          unaff_x28 = uVar14 & uVar8;
        }
        else {
          unaff_x28 = uVar14;
          if (uVar10 <= uVar14) {
            uVar12 = 0;
            if (uVar10 != 0) {
              uVar12 = uVar14 / uVar10;
            }
            unaff_x28 = uVar14 - uVar12 * uVar10;
          }
        }
        plVar11 = *(long **)(*param_1 + unaff_x28 * 8);
        if (plVar11 != (long *)0x0) {
          do {
            while( true ) {
              plVar11 = (long *)*plVar11;
              if (plVar11 == (long *)0x0) goto LAB_10aa5c3b8;
              uVar12 = plVar11[1];
              if (uVar12 != uVar14) break;
              if (plVar11[2] == uVar6) goto LAB_10aa5c514;
            }
            if ((uVar10 & uVar8) == 0) {
              uVar12 = uVar12 & uVar8;
            }
            else if (uVar10 <= uVar12) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar12 / uVar10;
              }
              uVar12 = uVar12 - uVar4 * uVar10;
            }
          } while (uVar12 == unaff_x28);
        }
      }
LAB_10aa5c3b8:
      plVar11 = (long *)0x68;
      __Znwm();
      *plVar11 = 0;
      plVar11[1] = uVar14;
      lVar7 = plVar13[3];
      lVar15 = plVar13[2];
      plVar11[3] = plVar13[3];
      plVar11[2] = lVar15;
      if (lVar7 != 0) {
        plVar9 = (long *)(lVar7 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plStack_68 = plVar11 + 4;
      *(undefined1 *)(plVar11 + 0xc) = 3;
      if ((char)plVar13[0xc] == '\0') {
        uVar5 = 0;
      }
      else {
        FUN_10a005398(&plStack_68,plVar13 + 4);
        uVar5 = (undefined1)plVar13[0xc];
      }
      *(undefined1 *)(plVar11 + 0xc) = uVar5;
      if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
        uVar6 = 1;
        if (2 < uVar10) {
          uVar6 = (ulong)((uVar10 & uVar10 - 1) != 0);
        }
        uVar6 = uVar6 | uVar10 << 1;
        uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (uVar6 <= uVar10) {
          uVar6 = uVar10;
        }
        FUN_10aa53e80(param_1,uVar6);
        uVar10 = param_1[1];
        if ((uVar10 & uVar10 - 1) == 0) {
          unaff_x28 = uVar10 - 1 & uVar14;
        }
        else {
          unaff_x28 = uVar14;
          if (uVar10 <= uVar14) {
            uVar6 = 0;
            if (uVar10 != 0) {
              uVar6 = uVar14 / uVar10;
            }
            unaff_x28 = uVar14 - uVar6 * uVar10;
          }
        }
      }
      lVar7 = *param_1;
      plVar9 = *(long **)(lVar7 + unaff_x28 * 8);
      if (plVar9 == (long *)0x0) {
        *plVar11 = *plVar1;
        *plVar1 = (long)plVar11;
        *(long **)(lVar7 + unaff_x28 * 8) = plVar1;
        if (*plVar11 != 0) {
          uVar6 = *(ulong *)(*plVar11 + 8);
          if ((uVar10 & uVar10 - 1) == 0) {
            uVar6 = uVar6 & uVar10 - 1;
          }
          else if (uVar10 <= uVar6) {
            uVar14 = 0;
            if (uVar10 != 0) {
              uVar14 = uVar6 / uVar10;
            }
            uVar6 = uVar6 - uVar14 * uVar10;
          }
          *(long **)(*param_1 + uVar6 * 8) = plVar11;
        }
      }
      else {
        *plVar11 = *plVar9;
        *plVar9 = (long)plVar11;
      }
      param_1[3] = param_1[3] + 1;
LAB_10aa5c514:
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
  }
  return param_1;
}



/* Entry: 10aa5c584; end: 10aa5c7f3;  */

void FUN_10aa5c584(undefined ******param_1,undefined ******param_2)

{
  undefined *****pppppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined ****ppppuVar5;
  undefined ******ppppppuVar6;
  undefined ******ppppppuVar7;
  undefined ******ppppppuVar8;
  undefined ******ppppppuVar9;
  undefined ****ppppuVar10;
  undefined *****pppppuVar11;
  undefined ******ppppppuVar12;
  undefined ******unaff_x21;
  undefined8 *puStack_130;
  undefined **ppuStack_128;
  int aiStack_120 [2];
  undefined8 *puStack_118;
  undefined *puStack_110;
  undefined8 *puStack_108;
  undefined ****ppppuStack_100;
  undefined ****ppppuStack_f8;
  undefined1 *puStack_f0;
  undefined ***pppuStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined ****ppppuStack_a0;
  undefined *****pppppuStack_98;
  undefined ****ppppuStack_90;
  undefined *****pppppuStack_88;
  undefined ****ppppuStack_80;
  undefined *****pppppuStack_78;
  undefined ****ppppuStack_70;
  undefined ****ppppuStack_68;
  undefined ****ppppuStack_60;
  undefined *****pppppuStack_58;
  long lStack_38;
  
  ppppppuVar12 = (undefined ******)&ppppuStack_a0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + 8) == '\x01') {
    pppppuVar11 = *param_1;
    pppppuStack_78 = param_2[1];
    ppppuStack_80 = (undefined ****)*param_2;
    if (param_2[1] != (undefined *****)0x0) {
      pppppuVar1 = param_2[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
        if (bVar3) {
          *pppppuVar1 = (undefined ****)((long)*pppppuVar1 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppppuVar6 = (undefined ******)&ppppuStack_80;
    ppppppuVar9 = param_1;
    (*(code *)pppppuVar11)();
    if ((undefined ******)pppppuStack_78 == (undefined ******)0x0) goto LAB_10aa5c76c;
    ppppppuVar8 = (undefined ******)(pppppuStack_78 + 1);
    do {
      pppppuVar11 = *ppppppuVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar8,0x10);
      if (bVar3) {
        *ppppppuVar8 = (undefined *****)((long)pppppuVar11 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      ppppppuVar7 = (undefined ******)pppppuStack_78;
      ppppppuVar12 = param_1;
    } while (cVar2 != '\0');
  }
  else {
    ppppppuVar6 = param_1;
    ppppppuVar9 = param_2;
    if (*(char *)(param_1 + 8) != '\x02') goto LAB_10aa5c76c;
    unaff_x21 = param_1;
    ppppppuVar8 = param_2;
    FUN_10a688b40();
    if (unaff_x21 != (undefined ******)0x0) {
      *unaff_x21 = (undefined *****)
                   CONCAT44((int)((ulong)*unaff_x21 >> 0x20) + 1,(int)*unaff_x21 + 1);
      ppppppuVar6 = (undefined ******)*param_1;
      FUN_10aa5c7f4();
      iVar4 = *(int *)((long)unaff_x21 + 4) + -1;
      *(int *)((long)unaff_x21 + 4) = iVar4;
      ppppppuVar9 = param_2;
      if (iVar4 == 0) {
        *(undefined4 *)unaff_x21 = 0;
      }
      goto LAB_10aa5c76c;
    }
    ppppppuVar9 = (undefined ******)0x0;
    ppppppuVar6 = (undefined ******)0x0;
    if (ppppppuVar8 == (undefined ******)0x0) goto LAB_10aa5c76c;
    ppppuStack_68 = (undefined ****)param_1[1];
    ppppuStack_70 = (undefined ****)*param_1;
    if (param_1[1] != (undefined *****)0x0) {
      pppppuVar11 = param_1[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar11,0x10);
        if (bVar3) {
          *pppppuVar11 = (undefined ****)((long)*pppppuVar11 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuStack_90 = (undefined ****)*param_2;
    ppppppuVar8 = (undefined ******)param_2[1];
    if (ppppppuVar8 != (undefined ******)0x0) {
      ppppppuVar6 = ppppppuVar8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
        if (bVar3) {
          *ppppppuVar6 = (undefined *****)((long)*ppppppuVar6 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuStack_80 = (undefined ****)FUN_10aa5c9f8;
    pppppuStack_78 = (undefined *****)&PTR_FUN_110c3c4b8;
    ppppuStack_a0 = (undefined ****)0x0;
    pppppuStack_98 = (undefined *****)0x0;
    if (ppppppuVar8 != (undefined ******)0x0) {
      ppppppuVar6 = ppppppuVar8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
        if (bVar3) {
          *ppppppuVar6 = (undefined *****)((long)*ppppppuVar6 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    unaff_x21 = (undefined ******)&ppppuStack_80;
    ppppppuVar9 = (undefined ******)&ppppuStack_80;
    pppppuStack_88 = (undefined *****)ppppppuVar8;
    ppppuStack_60 = ppppuStack_90;
    pppppuStack_58 = (undefined *****)ppppppuVar8;
    FUN_10a4634ec();
    ppppppuVar6 = &pppppuStack_78;
    (*(code *)*pppppuStack_78)();
    if (ppppppuVar8 != (undefined ******)0x0) {
      ppppppuVar7 = ppppppuVar8 + 1;
      do {
        pppppuVar11 = *ppppppuVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
        if (bVar3) {
          *ppppppuVar7 = (undefined *****)((long)pppppuVar11 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pppppuVar11 == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar8)[2])(ppppppuVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppuVar6 = ppppppuVar8;
      }
    }
    param_1 = (undefined ******)&ppppuStack_a0;
    if ((undefined ******)pppppuStack_98 == (undefined ******)0x0) goto LAB_10aa5c76c;
    ppppppuVar8 = (undefined ******)(pppppuStack_98 + 1);
    do {
      pppppuVar11 = *ppppppuVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar8,0x10);
      if (bVar3) {
        *ppppppuVar8 = (undefined *****)((long)pppppuVar11 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      ppppppuVar7 = (undefined ******)pppppuStack_98;
    } while (cVar2 != '\0');
  }
  param_1 = ppppppuVar12;
  if (pppppuVar11 == (undefined *****)0x0) {
    (*(code *)(*ppppppuVar7)[2])(ppppppuVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppppppuVar6 = ppppppuVar7;
  }
LAB_10aa5c76c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    (*(code *)*pppppuStack_78)(unaff_x21 + 1);
    FUN_10aa5ca70(param_1 + 2);
    func_0x00010a004dac(&ppppuStack_a0);
    __Unwind_Resume();
    func_0x000109884c0c(&ppppuStack_100,ppppppuVar6 + 1,*ppppppuVar6);
    func_0x000109884820(&ppuStack_128,&ppppuStack_100,*ppppppuVar6);
    if (ppppuStack_100 != (undefined ****)0x0) {
      (*(code *)**ppppuStack_100)();
    }
    (*(code *)(**ppppppuVar6)[6])(&puStack_130);
    pppppuVar11 = *ppppppuVar6;
    ppppuStack_f8 = (undefined ****)ppppppuVar9[1];
    ppppuStack_100 = (undefined ****)*ppppppuVar9;
    if (ppppppuVar9[1] != (undefined *****)0x0) {
      pppppuVar1 = ppppppuVar9[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
        if (bVar3) {
          *pppppuVar1 = (undefined ****)((long)*pppppuVar1 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppuStack_e0 = &PTR_DAT_110c3c4a0;
    func_0x000109899de4(&puStack_110,pppppuVar11,&ppppuStack_100,&ppuStack_e0,0,0);
    ppppuVar5 = ppppuStack_f8;
    if ((undefined *****)ppppuStack_f8 != (undefined *****)0x0) {
      pppppuVar1 = (undefined *****)(ppppuStack_f8 + 1);
      do {
        ppppuVar10 = *pppppuVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
        if (bVar3) {
          *pppppuVar1 = (undefined ****)((long)ppppuVar10 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppuVar10 == (undefined ****)0x0) {
        (*(code *)(*ppppuStack_f8)[2])(ppppuStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar5);
      }
    }
    uStack_d8 = 1;
    ppuStack_e0 = &puStack_110;
    (*(code *)(*pppppuVar11)[0xb])(pppppuVar11);
    ppppuStack_100 = (undefined ****)&ppuStack_128;
    ppppuStack_f8 = (undefined ****)pppppuVar11;
    puStack_f0 = (undefined1 *)&puStack_130;
    pppuStack_e8 = &ppuStack_e0;
    func_0x0001098960c0(aiStack_120);
    if ((3 < aiStack_120[0]) && (puStack_118 != (undefined8 *)0x0)) {
      (**(code **)*puStack_118)();
    }
    if ((3 < (int)puStack_110) && (puStack_108 != (undefined8 *)0x0)) {
      (**(code **)*puStack_108)();
    }
    if (puStack_130 != (undefined8 *)0x0) {
      (**(code **)*puStack_130)();
    }
    if ((undefined ***)ppuStack_128 != (undefined ***)0x0) {
      (**(code **)*ppuStack_128)();
    }
    return;
  }
  return;
}



/* Entry: 10aa5c7f4; end: 10aa5c9f7;  */

void FUN_10aa5c7f4(undefined8 *param_1,undefined8 *param_2)

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
  ppuStack_40 = &PTR_DAT_110c3c4a0;
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



/* Entry: 10aa5c9f8; end: 10aa5ca07;  */

void FUN_10aa5c9f8(long param_1)

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
  ppuStack_40 = &PTR_DAT_110c3c4a0;
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



/* Entry: 10aa5ca08; end: 10aa5ca2f;  */

long FUN_10aa5ca08(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10aa5ca70(param_1 + 0x18);
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



/* Entry: 10aa5ca30; end: 10aa5ca6f;  */

void FUN_10aa5ca30(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c3c4b8;
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



/* Entry: 10aa5ca70; end: 10aa5cb4f;  */

long FUN_10aa5ca70(long param_1)

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



/* Entry: 10aa5cb50; end: 10aa5cb5f;  */

void FUN_10aa5cb50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3c4e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aa5cb60; end: 10aa5cb7f;  */

void FUN_10aa5cb60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3c4e0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa5cb80; end: 10aa5cbbb;  */

long FUN_10aa5cb80(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010aa3cadc(param_1 + 0x40);
  func_0x00010aa500f4(param_1 + 0x30);
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



/* Entry: 10aa5cbbc; end: 10aa5cbbf;  */

void FUN_10aa5cbbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa5cbc0; end: 10aa5ccdb;  */

undefined8 * FUN_10aa5cbc0(undefined8 *param_1)

{
  func_0x00010aa3cadc(param_1 + 5);
  func_0x00010aa500f4(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10aa5ccdc; end: 10aa5cd67;  */

void FUN_10aa5ccdc(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_4 != 0) {
    FUN_10aa3ca58(param_1,param_4);
    puVar4 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar5 = param_2[1];
      uVar6 = *param_2;
      puVar4[1] = param_2[1];
      *puVar4 = uVar6;
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
      puVar4 = puVar4 + 2;
    }
    *(undefined8 **)(param_1 + 8) = puVar4;
  }
  return;
}



/* Entry: 10aa5cd68; end: 10aa5d04b;  */

long * FUN_10aa5cd68(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined1 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  ulong unaff_x28;
  long lVar15;
  long *plStack_68;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10aa56c34(param_1,*(undefined8 *)(param_2 + 8));
  plVar13 = *(long **)(param_2 + 0x10);
  if (plVar13 != (long *)0x0) {
    plVar1 = param_1 + 2;
    do {
      uVar6 = plVar13[2];
      uVar10 = ((ulong)(uint)((int)uVar6 << 3) + 8 ^ uVar6 >> 0x20) * -0x622015f714c7d297;
      uVar10 = (uVar6 >> 0x20 ^ uVar10 >> 0x2f ^ uVar10) * -0x622015f714c7d297;
      uVar14 = (uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297;
      uVar10 = param_1[1];
      if (uVar10 != 0) {
        uVar8 = uVar10 - 1;
        if ((uVar10 & uVar8) == 0) {
          unaff_x28 = uVar14 & uVar8;
        }
        else {
          unaff_x28 = uVar14;
          if (uVar10 <= uVar14) {
            uVar12 = 0;
            if (uVar10 != 0) {
              uVar12 = uVar14 / uVar10;
            }
            unaff_x28 = uVar14 - uVar12 * uVar10;
          }
        }
        plVar11 = *(long **)(*param_1 + unaff_x28 * 8);
        if (plVar11 != (long *)0x0) {
          do {
            while( true ) {
              plVar11 = (long *)*plVar11;
              if (plVar11 == (long *)0x0) goto LAB_10aa5ce80;
              uVar12 = plVar11[1];
              if (uVar12 != uVar14) break;
              if (plVar11[2] == uVar6) goto LAB_10aa5cfdc;
            }
            if ((uVar10 & uVar8) == 0) {
              uVar12 = uVar12 & uVar8;
            }
            else if (uVar10 <= uVar12) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar12 / uVar10;
              }
              uVar12 = uVar12 - uVar4 * uVar10;
            }
          } while (uVar12 == unaff_x28);
        }
      }
LAB_10aa5ce80:
      plVar11 = (long *)0x68;
      __Znwm();
      *plVar11 = 0;
      plVar11[1] = uVar14;
      lVar7 = plVar13[3];
      lVar15 = plVar13[2];
      plVar11[3] = plVar13[3];
      plVar11[2] = lVar15;
      if (lVar7 != 0) {
        plVar9 = (long *)(lVar7 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plStack_68 = plVar11 + 4;
      *(undefined1 *)(plVar11 + 0xc) = 3;
      if ((char)plVar13[0xc] == '\0') {
        uVar5 = 0;
      }
      else {
        FUN_10a005398(&plStack_68,plVar13 + 4);
        uVar5 = (undefined1)plVar13[0xc];
      }
      *(undefined1 *)(plVar11 + 0xc) = uVar5;
      if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
        uVar6 = 1;
        if (2 < uVar10) {
          uVar6 = (ulong)((uVar10 & uVar10 - 1) != 0);
        }
        uVar6 = uVar6 | uVar10 << 1;
        uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (uVar6 <= uVar10) {
          uVar6 = uVar10;
        }
        FUN_10aa56c34(param_1,uVar6);
        uVar10 = param_1[1];
        if ((uVar10 & uVar10 - 1) == 0) {
          unaff_x28 = uVar10 - 1 & uVar14;
        }
        else {
          unaff_x28 = uVar14;
          if (uVar10 <= uVar14) {
            uVar6 = 0;
            if (uVar10 != 0) {
              uVar6 = uVar14 / uVar10;
            }
            unaff_x28 = uVar14 - uVar6 * uVar10;
          }
        }
      }
      lVar7 = *param_1;
      plVar9 = *(long **)(lVar7 + unaff_x28 * 8);
      if (plVar9 == (long *)0x0) {
        *plVar11 = *plVar1;
        *plVar1 = (long)plVar11;
        *(long **)(lVar7 + unaff_x28 * 8) = plVar1;
        if (*plVar11 != 0) {
          uVar6 = *(ulong *)(*plVar11 + 8);
          if ((uVar10 & uVar10 - 1) == 0) {
            uVar6 = uVar6 & uVar10 - 1;
          }
          else if (uVar10 <= uVar6) {
            uVar14 = 0;
            if (uVar10 != 0) {
              uVar14 = uVar6 / uVar10;
            }
            uVar6 = uVar6 - uVar14 * uVar10;
          }
          *(long **)(*param_1 + uVar6 * 8) = plVar11;
        }
      }
      else {
        *plVar11 = *plVar9;
        *plVar9 = (long)plVar11;
      }
      param_1[3] = param_1[3] + 1;
LAB_10aa5cfdc:
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
  }
  return param_1;
}



/* Entry: 10aa5d04c; end: 10aa5d2bb;  */

void FUN_10aa5d04c(undefined ******param_1,undefined ******param_2)

{
  undefined *****pppppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined ****ppppuVar5;
  undefined ******ppppppuVar6;
  undefined ******ppppppuVar7;
  undefined ******ppppppuVar8;
  undefined ******ppppppuVar9;
  undefined ****ppppuVar10;
  undefined *****pppppuVar11;
  undefined ******ppppppuVar12;
  undefined ******unaff_x21;
  undefined8 *puStack_130;
  undefined **ppuStack_128;
  int aiStack_120 [2];
  undefined8 *puStack_118;
  undefined *puStack_110;
  undefined8 *puStack_108;
  undefined ****ppppuStack_100;
  undefined ****ppppuStack_f8;
  undefined1 *puStack_f0;
  undefined ***pppuStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined ****ppppuStack_a0;
  undefined *****pppppuStack_98;
  undefined ****ppppuStack_90;
  undefined *****pppppuStack_88;
  undefined ****ppppuStack_80;
  undefined *****pppppuStack_78;
  undefined ****ppppuStack_70;
  undefined ****ppppuStack_68;
  undefined ****ppppuStack_60;
  undefined *****pppppuStack_58;
  long lStack_38;
  
  ppppppuVar12 = (undefined ******)&ppppuStack_a0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + 8) == '\x01') {
    pppppuVar11 = *param_1;
    pppppuStack_78 = param_2[1];
    ppppuStack_80 = (undefined ****)*param_2;
    if (param_2[1] != (undefined *****)0x0) {
      pppppuVar1 = param_2[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
        if (bVar3) {
          *pppppuVar1 = (undefined ****)((long)*pppppuVar1 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppppuVar6 = (undefined ******)&ppppuStack_80;
    ppppppuVar9 = param_1;
    (*(code *)pppppuVar11)();
    if ((undefined ******)pppppuStack_78 == (undefined ******)0x0) goto LAB_10aa5d234;
    ppppppuVar8 = (undefined ******)(pppppuStack_78 + 1);
    do {
      pppppuVar11 = *ppppppuVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar8,0x10);
      if (bVar3) {
        *ppppppuVar8 = (undefined *****)((long)pppppuVar11 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      ppppppuVar7 = (undefined ******)pppppuStack_78;
      ppppppuVar12 = param_1;
    } while (cVar2 != '\0');
  }
  else {
    ppppppuVar6 = param_1;
    ppppppuVar9 = param_2;
    if (*(char *)(param_1 + 8) != '\x02') goto LAB_10aa5d234;
    unaff_x21 = param_1;
    ppppppuVar8 = param_2;
    FUN_10a688b40();
    if (unaff_x21 != (undefined ******)0x0) {
      *unaff_x21 = (undefined *****)
                   CONCAT44((int)((ulong)*unaff_x21 >> 0x20) + 1,(int)*unaff_x21 + 1);
      ppppppuVar6 = (undefined ******)*param_1;
      FUN_10aa5d2bc();
      iVar4 = *(int *)((long)unaff_x21 + 4) + -1;
      *(int *)((long)unaff_x21 + 4) = iVar4;
      ppppppuVar9 = param_2;
      if (iVar4 == 0) {
        *(undefined4 *)unaff_x21 = 0;
      }
      goto LAB_10aa5d234;
    }
    ppppppuVar9 = (undefined ******)0x0;
    ppppppuVar6 = (undefined ******)0x0;
    if (ppppppuVar8 == (undefined ******)0x0) goto LAB_10aa5d234;
    ppppuStack_68 = (undefined ****)param_1[1];
    ppppuStack_70 = (undefined ****)*param_1;
    if (param_1[1] != (undefined *****)0x0) {
      pppppuVar11 = param_1[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar11,0x10);
        if (bVar3) {
          *pppppuVar11 = (undefined ****)((long)*pppppuVar11 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuStack_90 = (undefined ****)*param_2;
    ppppppuVar8 = (undefined ******)param_2[1];
    if (ppppppuVar8 != (undefined ******)0x0) {
      ppppppuVar6 = ppppppuVar8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
        if (bVar3) {
          *ppppppuVar6 = (undefined *****)((long)*ppppppuVar6 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuStack_80 = (undefined ****)FUN_10aa5d4c0;
    pppppuStack_78 = (undefined *****)&PTR_FUN_110c3c590;
    ppppuStack_a0 = (undefined ****)0x0;
    pppppuStack_98 = (undefined *****)0x0;
    if (ppppppuVar8 != (undefined ******)0x0) {
      ppppppuVar6 = ppppppuVar8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
        if (bVar3) {
          *ppppppuVar6 = (undefined *****)((long)*ppppppuVar6 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    unaff_x21 = (undefined ******)&ppppuStack_80;
    ppppppuVar9 = (undefined ******)&ppppuStack_80;
    pppppuStack_88 = (undefined *****)ppppppuVar8;
    ppppuStack_60 = ppppuStack_90;
    pppppuStack_58 = (undefined *****)ppppppuVar8;
    FUN_10a4634ec();
    ppppppuVar6 = &pppppuStack_78;
    (*(code *)*pppppuStack_78)();
    if (ppppppuVar8 != (undefined ******)0x0) {
      ppppppuVar7 = ppppppuVar8 + 1;
      do {
        pppppuVar11 = *ppppppuVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
        if (bVar3) {
          *ppppppuVar7 = (undefined *****)((long)pppppuVar11 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pppppuVar11 == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar8)[2])(ppppppuVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppuVar6 = ppppppuVar8;
      }
    }
    param_1 = (undefined ******)&ppppuStack_a0;
    if ((undefined ******)pppppuStack_98 == (undefined ******)0x0) goto LAB_10aa5d234;
    ppppppuVar8 = (undefined ******)(pppppuStack_98 + 1);
    do {
      pppppuVar11 = *ppppppuVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar8,0x10);
      if (bVar3) {
        *ppppppuVar8 = (undefined *****)((long)pppppuVar11 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      ppppppuVar7 = (undefined ******)pppppuStack_98;
    } while (cVar2 != '\0');
  }
  param_1 = ppppppuVar12;
  if (pppppuVar11 == (undefined *****)0x0) {
    (*(code *)(*ppppppuVar7)[2])(ppppppuVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppppppuVar6 = ppppppuVar7;
  }
LAB_10aa5d234:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    (*(code *)*pppppuStack_78)(unaff_x21 + 1);
    FUN_10aa5d538(param_1 + 2);
    func_0x00010a004dac(&ppppuStack_a0);
    __Unwind_Resume();
    func_0x000109884c0c(&ppppuStack_100,ppppppuVar6 + 1,*ppppppuVar6);
    func_0x000109884820(&ppuStack_128,&ppppuStack_100,*ppppppuVar6);
    if (ppppuStack_100 != (undefined ****)0x0) {
      (*(code *)**ppppuStack_100)();
    }
    (*(code *)(**ppppppuVar6)[6])(&puStack_130);
    pppppuVar11 = *ppppppuVar6;
    ppppuStack_f8 = (undefined ****)ppppppuVar9[1];
    ppppuStack_100 = (undefined ****)*ppppppuVar9;
    if (ppppppuVar9[1] != (undefined *****)0x0) {
      pppppuVar1 = ppppppuVar9[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
        if (bVar3) {
          *pppppuVar1 = (undefined ****)((long)*pppppuVar1 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppuStack_e0 = &PTR_DAT_110c3c578;
    func_0x000109899de4(&puStack_110,pppppuVar11,&ppppuStack_100,&ppuStack_e0,0,0);
    ppppuVar5 = ppppuStack_f8;
    if ((undefined *****)ppppuStack_f8 != (undefined *****)0x0) {
      pppppuVar1 = (undefined *****)(ppppuStack_f8 + 1);
      do {
        ppppuVar10 = *pppppuVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
        if (bVar3) {
          *pppppuVar1 = (undefined ****)((long)ppppuVar10 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppuVar10 == (undefined ****)0x0) {
        (*(code *)(*ppppuStack_f8)[2])(ppppuStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar5);
      }
    }
    uStack_d8 = 1;
    ppuStack_e0 = &puStack_110;
    (*(code *)(*pppppuVar11)[0xb])(pppppuVar11);
    ppppuStack_100 = (undefined ****)&ppuStack_128;
    ppppuStack_f8 = (undefined ****)pppppuVar11;
    puStack_f0 = (undefined1 *)&puStack_130;
    pppuStack_e8 = &ppuStack_e0;
    func_0x0001098960c0(aiStack_120);
    if ((3 < aiStack_120[0]) && (puStack_118 != (undefined8 *)0x0)) {
      (**(code **)*puStack_118)();
    }
    if ((3 < (int)puStack_110) && (puStack_108 != (undefined8 *)0x0)) {
      (**(code **)*puStack_108)();
    }
    if (puStack_130 != (undefined8 *)0x0) {
      (**(code **)*puStack_130)();
    }
    if ((undefined ***)ppuStack_128 != (undefined ***)0x0) {
      (**(code **)*ppuStack_128)();
    }
    return;
  }
  return;
}



/* Entry: 10aa5d2bc; end: 10aa5d4bf;  */

void FUN_10aa5d2bc(undefined8 *param_1,undefined8 *param_2)

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
  ppuStack_40 = &PTR_DAT_110c3c578;
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



/* Entry: 10aa5d4c0; end: 10aa5d4cf;  */

void FUN_10aa5d4c0(long param_1)

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
  ppuStack_40 = &PTR_DAT_110c3c578;
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



/* Entry: 10aa5d4d0; end: 10aa5d4f7;  */

long FUN_10aa5d4d0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10aa5d538(param_1 + 0x18);
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



/* Entry: 10aa5d4f8; end: 10aa5d537;  */

void FUN_10aa5d4f8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c3c590;
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



/* Entry: 10aa5d538; end: 10aa5d58f;  */

long FUN_10aa5d538(long param_1)

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



/* Entry: 10aa5d590; end: 10aa5d59f;  */

void FUN_10aa5d590(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3c5b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aa5d5a0; end: 10aa5d5bf;  */

void FUN_10aa5d5a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3c5b8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa5d5c0; end: 10aa5d5fb;  */

long FUN_10aa5d5c0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010aa3cadc(param_1 + 0x40);
  func_0x00010aa500f4(param_1 + 0x30);
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



/* Entry: 10aa5d5fc; end: 10aa5d5ff;  */

void FUN_10aa5d5fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa5d600; end: 10aa5d71b;  */

undefined8 * FUN_10aa5d600(undefined8 *param_1)

{
  func_0x00010aa3cadc(param_1 + 5);
  func_0x00010aa500f4(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10aa5d71c; end: 10aa5d9ff;  */

long * FUN_10aa5d71c(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined1 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  ulong unaff_x28;
  long lVar15;
  long *plStack_68;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10aa54dbc(param_1,*(undefined8 *)(param_2 + 8));
  plVar13 = *(long **)(param_2 + 0x10);
  if (plVar13 != (long *)0x0) {
    plVar1 = param_1 + 2;
    do {
      uVar6 = plVar13[2];
      uVar10 = ((ulong)(uint)((int)uVar6 << 3) + 8 ^ uVar6 >> 0x20) * -0x622015f714c7d297;
      uVar10 = (uVar6 >> 0x20 ^ uVar10 >> 0x2f ^ uVar10) * -0x622015f714c7d297;
      uVar14 = (uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297;
      uVar10 = param_1[1];
      if (uVar10 != 0) {
        uVar8 = uVar10 - 1;
        if ((uVar10 & uVar8) == 0) {
          unaff_x28 = uVar14 & uVar8;
        }
        else {
          unaff_x28 = uVar14;
          if (uVar10 <= uVar14) {
            uVar12 = 0;
            if (uVar10 != 0) {
              uVar12 = uVar14 / uVar10;
            }
            unaff_x28 = uVar14 - uVar12 * uVar10;
          }
        }
        plVar11 = *(long **)(*param_1 + unaff_x28 * 8);
        if (plVar11 != (long *)0x0) {
          do {
            while( true ) {
              plVar11 = (long *)*plVar11;
              if (plVar11 == (long *)0x0) goto LAB_10aa5d834;
              uVar12 = plVar11[1];
              if (uVar12 != uVar14) break;
              if (plVar11[2] == uVar6) goto LAB_10aa5d990;
            }
            if ((uVar10 & uVar8) == 0) {
              uVar12 = uVar12 & uVar8;
            }
            else if (uVar10 <= uVar12) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar12 / uVar10;
              }
              uVar12 = uVar12 - uVar4 * uVar10;
            }
          } while (uVar12 == unaff_x28);
        }
      }
LAB_10aa5d834:
      plVar11 = (long *)0x68;
      __Znwm();
      *plVar11 = 0;
      plVar11[1] = uVar14;
      lVar7 = plVar13[3];
      lVar15 = plVar13[2];
      plVar11[3] = plVar13[3];
      plVar11[2] = lVar15;
      if (lVar7 != 0) {
        plVar9 = (long *)(lVar7 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plStack_68 = plVar11 + 4;
      *(undefined1 *)(plVar11 + 0xc) = 3;
      if ((char)plVar13[0xc] == '\0') {
        uVar5 = 0;
      }
      else {
        FUN_10a005398(&plStack_68,plVar13 + 4);
        uVar5 = (undefined1)plVar13[0xc];
      }
      *(undefined1 *)(plVar11 + 0xc) = uVar5;
      if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
        uVar6 = 1;
        if (2 < uVar10) {
          uVar6 = (ulong)((uVar10 & uVar10 - 1) != 0);
        }
        uVar6 = uVar6 | uVar10 << 1;
        uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (uVar6 <= uVar10) {
          uVar6 = uVar10;
        }
        FUN_10aa54dbc(param_1,uVar6);
        uVar10 = param_1[1];
        if ((uVar10 & uVar10 - 1) == 0) {
          unaff_x28 = uVar10 - 1 & uVar14;
        }
        else {
          unaff_x28 = uVar14;
          if (uVar10 <= uVar14) {
            uVar6 = 0;
            if (uVar10 != 0) {
              uVar6 = uVar14 / uVar10;
            }
            unaff_x28 = uVar14 - uVar6 * uVar10;
          }
        }
      }
      lVar7 = *param_1;
      plVar9 = *(long **)(lVar7 + unaff_x28 * 8);
      if (plVar9 == (long *)0x0) {
        *plVar11 = *plVar1;
        *plVar1 = (long)plVar11;
        *(long **)(lVar7 + unaff_x28 * 8) = plVar1;
        if (*plVar11 != 0) {
          uVar6 = *(ulong *)(*plVar11 + 8);
          if ((uVar10 & uVar10 - 1) == 0) {
            uVar6 = uVar6 & uVar10 - 1;
          }
          else if (uVar10 <= uVar6) {
            uVar14 = 0;
            if (uVar10 != 0) {
              uVar14 = uVar6 / uVar10;
            }
            uVar6 = uVar6 - uVar14 * uVar10;
          }
          *(long **)(*param_1 + uVar6 * 8) = plVar11;
        }
      }
      else {
        *plVar11 = *plVar9;
        *plVar9 = (long)plVar11;
      }
      param_1[3] = param_1[3] + 1;
LAB_10aa5d990:
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
  }
  return param_1;
}



/* Entry: 10aa5da00; end: 10aa5dc6f;  */

void FUN_10aa5da00(undefined ******param_1,undefined ******param_2)

{
  undefined *****pppppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined ****ppppuVar5;
  undefined ******ppppppuVar6;
  undefined ******ppppppuVar7;
  undefined ******ppppppuVar8;
  undefined ******ppppppuVar9;
  undefined ****ppppuVar10;
  undefined *****pppppuVar11;
  undefined ******ppppppuVar12;
  undefined ******unaff_x21;
  undefined8 *puStack_130;
  undefined **ppuStack_128;
  int aiStack_120 [2];
  undefined8 *puStack_118;
  undefined *puStack_110;
  undefined8 *puStack_108;
  undefined ****ppppuStack_100;
  undefined ****ppppuStack_f8;
  undefined1 *puStack_f0;
  undefined ***pppuStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined ****ppppuStack_a0;
  undefined *****pppppuStack_98;
  undefined ****ppppuStack_90;
  undefined *****pppppuStack_88;
  undefined ****ppppuStack_80;
  undefined *****pppppuStack_78;
  undefined ****ppppuStack_70;
  undefined ****ppppuStack_68;
  undefined ****ppppuStack_60;
  undefined *****pppppuStack_58;
  long lStack_38;
  
  ppppppuVar12 = (undefined ******)&ppppuStack_a0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + 8) == '\x01') {
    pppppuVar11 = *param_1;
    pppppuStack_78 = param_2[1];
    ppppuStack_80 = (undefined ****)*param_2;
    if (param_2[1] != (undefined *****)0x0) {
      pppppuVar1 = param_2[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
        if (bVar3) {
          *pppppuVar1 = (undefined ****)((long)*pppppuVar1 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppppuVar6 = (undefined ******)&ppppuStack_80;
    ppppppuVar9 = param_1;
    (*(code *)pppppuVar11)();
    if ((undefined ******)pppppuStack_78 == (undefined ******)0x0) goto LAB_10aa5dbe8;
    ppppppuVar8 = (undefined ******)(pppppuStack_78 + 1);
    do {
      pppppuVar11 = *ppppppuVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar8,0x10);
      if (bVar3) {
        *ppppppuVar8 = (undefined *****)((long)pppppuVar11 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      ppppppuVar7 = (undefined ******)pppppuStack_78;
      ppppppuVar12 = param_1;
    } while (cVar2 != '\0');
  }
  else {
    ppppppuVar6 = param_1;
    ppppppuVar9 = param_2;
    if (*(char *)(param_1 + 8) != '\x02') goto LAB_10aa5dbe8;
    unaff_x21 = param_1;
    ppppppuVar8 = param_2;
    FUN_10a688b40();
    if (unaff_x21 != (undefined ******)0x0) {
      *unaff_x21 = (undefined *****)
                   CONCAT44((int)((ulong)*unaff_x21 >> 0x20) + 1,(int)*unaff_x21 + 1);
      ppppppuVar6 = (undefined ******)*param_1;
      FUN_10aa5dc70();
      iVar4 = *(int *)((long)unaff_x21 + 4) + -1;
      *(int *)((long)unaff_x21 + 4) = iVar4;
      ppppppuVar9 = param_2;
      if (iVar4 == 0) {
        *(undefined4 *)unaff_x21 = 0;
      }
      goto LAB_10aa5dbe8;
    }
    ppppppuVar9 = (undefined ******)0x0;
    ppppppuVar6 = (undefined ******)0x0;
    if (ppppppuVar8 == (undefined ******)0x0) goto LAB_10aa5dbe8;
    ppppuStack_68 = (undefined ****)param_1[1];
    ppppuStack_70 = (undefined ****)*param_1;
    if (param_1[1] != (undefined *****)0x0) {
      pppppuVar11 = param_1[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar11,0x10);
        if (bVar3) {
          *pppppuVar11 = (undefined ****)((long)*pppppuVar11 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuStack_90 = (undefined ****)*param_2;
    ppppppuVar8 = (undefined ******)param_2[1];
    if (ppppppuVar8 != (undefined ******)0x0) {
      ppppppuVar6 = ppppppuVar8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
        if (bVar3) {
          *ppppppuVar6 = (undefined *****)((long)*ppppppuVar6 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuStack_80 = (undefined ****)FUN_10aa5de74;
    pppppuStack_78 = (undefined *****)&PTR_FUN_110c3c668;
    ppppuStack_a0 = (undefined ****)0x0;
    pppppuStack_98 = (undefined *****)0x0;
    if (ppppppuVar8 != (undefined ******)0x0) {
      ppppppuVar6 = ppppppuVar8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
        if (bVar3) {
          *ppppppuVar6 = (undefined *****)((long)*ppppppuVar6 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    unaff_x21 = (undefined ******)&ppppuStack_80;
    ppppppuVar9 = (undefined ******)&ppppuStack_80;
    pppppuStack_88 = (undefined *****)ppppppuVar8;
    ppppuStack_60 = ppppuStack_90;
    pppppuStack_58 = (undefined *****)ppppppuVar8;
    FUN_10a4634ec();
    ppppppuVar6 = &pppppuStack_78;
    (*(code *)*pppppuStack_78)();
    if (ppppppuVar8 != (undefined ******)0x0) {
      ppppppuVar7 = ppppppuVar8 + 1;
      do {
        pppppuVar11 = *ppppppuVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
        if (bVar3) {
          *ppppppuVar7 = (undefined *****)((long)pppppuVar11 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pppppuVar11 == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar8)[2])(ppppppuVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppuVar6 = ppppppuVar8;
      }
    }
    param_1 = (undefined ******)&ppppuStack_a0;
    if ((undefined ******)pppppuStack_98 == (undefined ******)0x0) goto LAB_10aa5dbe8;
    ppppppuVar8 = (undefined ******)(pppppuStack_98 + 1);
    do {
      pppppuVar11 = *ppppppuVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar8,0x10);
      if (bVar3) {
        *ppppppuVar8 = (undefined *****)((long)pppppuVar11 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      ppppppuVar7 = (undefined ******)pppppuStack_98;
    } while (cVar2 != '\0');
  }
  param_1 = ppppppuVar12;
  if (pppppuVar11 == (undefined *****)0x0) {
    (*(code *)(*ppppppuVar7)[2])(ppppppuVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppppppuVar6 = ppppppuVar7;
  }
LAB_10aa5dbe8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    (*(code *)*pppppuStack_78)(unaff_x21 + 1);
    FUN_10aa5deec(param_1 + 2);
    func_0x00010a004dac(&ppppuStack_a0);
    __Unwind_Resume();
    func_0x000109884c0c(&ppppuStack_100,ppppppuVar6 + 1,*ppppppuVar6);
    func_0x000109884820(&ppuStack_128,&ppppuStack_100,*ppppppuVar6);
    if (ppppuStack_100 != (undefined ****)0x0) {
      (*(code *)**ppppuStack_100)();
    }
    (*(code *)(**ppppppuVar6)[6])(&puStack_130);
    pppppuVar11 = *ppppppuVar6;
    ppppuStack_f8 = (undefined ****)ppppppuVar9[1];
    ppppuStack_100 = (undefined ****)*ppppppuVar9;
    if (ppppppuVar9[1] != (undefined *****)0x0) {
      pppppuVar1 = ppppppuVar9[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
        if (bVar3) {
          *pppppuVar1 = (undefined ****)((long)*pppppuVar1 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppuStack_e0 = &PTR_DAT_110c3c650;
    func_0x000109899de4(&puStack_110,pppppuVar11,&ppppuStack_100,&ppuStack_e0,0,0);
    ppppuVar5 = ppppuStack_f8;
    if ((undefined *****)ppppuStack_f8 != (undefined *****)0x0) {
      pppppuVar1 = (undefined *****)(ppppuStack_f8 + 1);
      do {
        ppppuVar10 = *pppppuVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
        if (bVar3) {
          *pppppuVar1 = (undefined ****)((long)ppppuVar10 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppuVar10 == (undefined ****)0x0) {
        (*(code *)(*ppppuStack_f8)[2])(ppppuStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar5);
      }
    }
    uStack_d8 = 1;
    ppuStack_e0 = &puStack_110;
    (*(code *)(*pppppuVar11)[0xb])(pppppuVar11);
    ppppuStack_100 = (undefined ****)&ppuStack_128;
    ppppuStack_f8 = (undefined ****)pppppuVar11;
    puStack_f0 = (undefined1 *)&puStack_130;
    pppuStack_e8 = &ppuStack_e0;
    func_0x0001098960c0(aiStack_120);
    if ((3 < aiStack_120[0]) && (puStack_118 != (undefined8 *)0x0)) {
      (**(code **)*puStack_118)();
    }
    if ((3 < (int)puStack_110) && (puStack_108 != (undefined8 *)0x0)) {
      (**(code **)*puStack_108)();
    }
    if (puStack_130 != (undefined8 *)0x0) {
      (**(code **)*puStack_130)();
    }
    if ((undefined ***)ppuStack_128 != (undefined ***)0x0) {
      (**(code **)*ppuStack_128)();
    }
    return;
  }
  return;
}



/* Entry: 10aa5dc70; end: 10aa5de73;  */

void FUN_10aa5dc70(undefined8 *param_1,undefined8 *param_2)

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
  ppuStack_40 = &PTR_DAT_110c3c650;
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



/* Entry: 10aa5de74; end: 10aa5de83;  */

void FUN_10aa5de74(long param_1)

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
  ppuStack_40 = &PTR_DAT_110c3c650;
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



/* Entry: 10aa5de84; end: 10aa5deab;  */

long FUN_10aa5de84(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10aa5deec(param_1 + 0x18);
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



/* Entry: 10aa5deac; end: 10aa5deeb;  */

void FUN_10aa5deac(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c3c668;
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



/* Entry: 10aa5deec; end: 10aa5df43;  */

long FUN_10aa5deec(long param_1)

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


