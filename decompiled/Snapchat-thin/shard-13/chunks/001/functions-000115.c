/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a158224; end: 10a15822f;  */

long FUN_10a158224(long param_1)

{
  FUN_10abff71c(param_1 + 0x18,1);
  FUN_10ac0fd20(param_1 + 0xe8);
  FUN_10a157f54(param_1 + 0x20);
  return param_1 + 0x18;
}



/* Entry: 10a158230; end: 10a158277;  */

void FUN_10a158230(undefined8 param_1,long param_2)

{
  uint auStack_24 [5];
  
  auStack_24[0] = *(uint *)(*(long *)(param_2 + 0x10) + 0x148);
  if (auStack_24[0] < 0x101) {
    auStack_24[0] = 0x100;
  }
  auStack_24[3] = 8;
  auStack_24[4] = 6;
  auStack_24[1] = 0x1000000;
  auStack_24[2] = 0x80000;
  FUN_10a158184(param_1,*(long *)(param_2 + 0x10),auStack_24);
  return;
}



/* Entry: 10a158278; end: 10a158293;  */

void FUN_10a158278(void)

{
  return;
}



/* Entry: 10a158294; end: 10a1582cf;  */

void FUN_10a158294(undefined8 param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  uStack_20 = 6;
  uStack_28 = 0xc001000000;
  uStack_30 = 0x200000000000020;
  FUN_10a157e0c(param_1,*(undefined8 *)(param_2 + 0x10),&uStack_30);
  return;
}



/* Entry: 10a1582d0; end: 10a1582eb;  */

void FUN_10a1582d0(void)

{
  return;
}



/* Entry: 10a1582ec; end: 10a158327;  */

void FUN_10a1582ec(undefined8 param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  uStack_20 = 6;
  uStack_28 = 0x4002000000;
  uStack_30 = 0x800000000000020;
  FUN_10a157e0c(param_1,*(undefined8 *)(param_2 + 0x10),&uStack_30);
  return;
}



/* Entry: 10a158328; end: 10a158343;  */

void FUN_10a158328(void)

{
  return;
}



/* Entry: 10a158344; end: 10a15837f;  */

void FUN_10a158344(undefined8 param_1,long param_2)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  undefined4 uStack_20;
  
  puStack_28 = &UNK_100400000;
  uStack_30 = 0x10000000000020;
  uStack_20 = 6;
  FUN_10a15839c(param_1,*(undefined8 *)(param_2 + 0x10),&uStack_30);
  return;
}



/* Entry: 10a158380; end: 10a15839b;  */

void FUN_10a158380(void)

{
  return;
}



/* Entry: 10a15839c; end: 10a15840b;  */

void FUN_10a15839c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0xb8;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_FUN_110ba8868;
  func_0x00010928e2d0(puVar2,param_2,param_3);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a15840c; end: 10a15841b;  */

void FUN_10a15840c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba8868;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a15841c; end: 10a15843b;  */

void FUN_10a15841c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba8868;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a15843c; end: 10a1584a3;  */

void FUN_10a15843c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0xa8);
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
  func_0x00010a045fb4(param_1 + 0x90);
  func_0x00010a04f5b8(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 0x38);
  return;
}



/* Entry: 10a1584a4; end: 10a1584a7;  */

void FUN_10a1584a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1584a8; end: 10a158553;  */

void FUN_10a1584a8(undefined8 param_1,long param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  lVar4 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar4 + 0x7bc);
  if (uVar1 == 0) {
    uStack_14 = 6;
  }
  else {
    uVar5 = 0;
    bVar3 = true;
    do {
      if (uVar5 == 0x20) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a158554);
        (*pcVar2)();
      }
      if (((*(uint *)(lVar4 + 0x73c + uVar5 * 4) ^ 0xffffffff) & 0xe) == 0) break;
      uVar5 = uVar5 + 1;
      bVar3 = uVar5 < uVar1;
    } while (uVar1 != uVar5);
    uStack_14 = 0xe;
    if (!bVar3) {
      uStack_14 = 6;
    }
  }
  uVar5 = *(ulong *)(lVar4 + 0x148);
  if (uVar5 < 0x21) {
    uVar5 = 0x20;
  }
  uStack_24 = (undefined4)uVar5;
  uStack_20 = 0x40000000100000;
  uStack_18 = 4;
  FUN_10a15839c(param_1,lVar4,&uStack_24);
  return;
}



/* Entry: 10a158554; end: 10a158597;  */

void FUN_10a158554(void)

{
  return;
}



/* Entry: 10a158598; end: 10a1586ab;  */

void FUN_10a158598(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  plVar4 = (long *)0x148;
  __Znwm();
  plVar5 = plVar4 + 1;
  *plVar5 = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110ba88e8;
  plVar4[5] = param_2;
  plVar4[6] = 0x32aaaba7;
  plVar4[8] = 0;
  plVar4[7] = 0;
  plVar4[10] = 0;
  plVar4[9] = 0;
  plVar4[0xc] = 0;
  plVar4[0xb] = 0;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0;
  *(undefined8 *)((long)plVar4 + 100) = 0;
  plVar4[0x10] = 0;
  plVar4[0xf] = 0;
  plVar4[0x12] = 0;
  plVar4[0x11] = 0;
  plVar4[0x14] = 0;
  plVar4[0x13] = 0;
  plVar4[0x16] = 0;
  plVar4[0x15] = 0;
  plVar4[0x18] = 0;
  plVar4[0x17] = 0;
  *(undefined4 *)(plVar4 + 0x19) = 0x3f800000;
  plVar4[0x1b] = 0;
  plVar4[0x1a] = 0;
  plVar4[0x1d] = 0;
  plVar4[0x1c] = 0;
  *(undefined4 *)(plVar4 + 0x1e) = 0x3f800000;
  plVar4[0x20] = 0;
  plVar4[0x1f] = 0;
  plVar4[0x22] = 0;
  plVar4[0x21] = 0;
  *(undefined4 *)(plVar4 + 0x23) = 0x3f800000;
  plVar4[0x25] = 0;
  plVar4[0x24] = 0;
  plVar4[0x27] = 0;
  plVar4[0x26] = 0;
  *(undefined4 *)(plVar4 + 0x28) = 0x3f800000;
  *param_1 = (long)(plVar4 + 3);
  param_1[1] = (long)plVar4;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = plVar4 + 2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[3] = (long)(plVar4 + 3);
  plVar4[4] = (long)plVar4;
  do {
    lVar6 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 != 0) {
    return;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
  return;
}



/* Entry: 10a1586ac; end: 10a1586bb;  */

void FUN_10a1586ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba88e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a1586bc; end: 10a1586db;  */

void FUN_10a1586bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba88e8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1586dc; end: 10a1586e7;  */

long FUN_10a1586dc(long param_1)

{
  long *plVar1;
  long lStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x30);
  for (plVar1 = *(long **)(param_1 + 0x108); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    if ((*(byte *)(plVar1 + 3) & 1) == 0) {
      func_0x00010924a40c(4,&UNK_10f562e5b);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x30);
  func_0x0001092920a4(param_1 + 0x120);
  func_0x00010929205c(param_1 + 0xf8);
  func_0x000109291edc(param_1 + 0xd0);
  func_0x000109291e94(param_1 + 0xa8);
  lStack_38 = param_1 + 0x90;
  func_0x000109291b24(&lStack_38);
  lStack_38 = param_1 + 0x78;
  func_0x000109291b94(&lStack_38);
  __ZNSt3__15mutexD1Ev(param_1 + 0x30);
  if (*(long *)(param_1 + 0x20) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1 + 0x18;
}



/* Entry: 10a1586e8; end: 10a15873f;  */

long FUN_10a1586e8(long param_1)

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



/* Entry: 10a158740; end: 10a158793;  */

void FUN_10a158740(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110ba8928)[*(uint *)(param_1 + 0x40)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  return;
}



/* Entry: 10a158794; end: 10a1587eb;  */

void FUN_10a158794(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_2 + 8);
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
  return;
}



/* Entry: 10a1587ec; end: 10a1587fb;  */

void FUN_10a1587ec(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1587f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_2 + 8))();
  return;
}



/* Entry: 10a1587fc; end: 10a15884f;  */

void FUN_10a1587fc(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110ba8938)[*(uint *)(param_1 + 0x40)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  return;
}



/* Entry: 10a158850; end: 10a158867;  */

long FUN_10a158850(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_2 + 8);
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
  return param_2;
}



/* Entry: 10a158868; end: 10a1588bb;  */

void FUN_10a158868(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110ba8948)[*(uint *)(param_1 + 0x40)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  return;
}



/* Entry: 10a1588bc; end: 10a158913;  */

void FUN_10a1588bc(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_2 + 8);
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
  return;
}



/* Entry: 10a158914; end: 10a158923;  */

void FUN_10a158914(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010a158920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_2 + 8))();
  return;
}



/* Entry: 10a158924; end: 10a158977;  */

void FUN_10a158924(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110ba8958)[*(uint *)(param_1 + 0x40)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  return;
}



/* Entry: 10a158978; end: 10a1589cf;  */

void FUN_10a158978(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_2 + 8);
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
  return;
}



/* Entry: 10a1589d0; end: 10a1589df;  */

void FUN_10a1589d0(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1589dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_2 + 8))();
  return;
}



/* Entry: 10a1589e0; end: 10a158a33;  */

void FUN_10a1589e0(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110ba8968)[*(uint *)(param_1 + 0x40)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  return;
}



/* Entry: 10a158a34; end: 10a158a4b;  */

long FUN_10a158a34(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_2 + 8);
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
  return param_2;
}



/* Entry: 10a158a4c; end: 10a158a9f;  */

void FUN_10a158a4c(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110ba8978)[*(uint *)(param_1 + 0x40)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  return;
}



/* Entry: 10a158aa0; end: 10a158ab7;  */

long FUN_10a158aa0(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_2 + 8);
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
  return param_2;
}



/* Entry: 10a158ab8; end: 10a158b0b;  */

void FUN_10a158ab8(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110ba8988)[*(uint *)(param_1 + 0x40)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  return;
}



/* Entry: 10a158b0c; end: 10a158b23;  */

long FUN_10a158b0c(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_2 + 8);
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
  return param_2;
}



/* Entry: 10a158b24; end: 10a158b77;  */

void FUN_10a158b24(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110ba8998)[*(uint *)(param_1 + 0x40)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  return;
}



/* Entry: 10a158b78; end: 10a158ba3;  */

void FUN_10a158b78(undefined8 param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)*param_2;
  *param_2 = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a158b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}



/* Entry: 10a158ba4; end: 10a158c3f;  */

long FUN_10a158ba4(long param_1)

{
  if (*(char *)(param_1 + 0x3f8) == '\x01') {
    FUN_10a158c40(param_1 + 0x3b0);
    FUN_10a158740(param_1 + 0x368);
    FUN_10a158740(param_1 + 800);
    FUN_10a1587fc(param_1 + 0x2d8);
    FUN_10a1587fc(param_1 + 0x290);
    FUN_10a158868(param_1 + 0x248);
    FUN_10a158868(param_1 + 0x200);
    FUN_10a1587fc(param_1 + 0x1b8);
    FUN_10a158924(param_1 + 0x170);
    FUN_10a1589e0(param_1 + 0x128);
    FUN_10a158a4c(param_1 + 0xe0);
    FUN_10a158a4c(param_1 + 0x98);
    FUN_10a158ab8(param_1 + 0x50);
    FUN_10a158b24(param_1);
  }
  return param_1;
}



/* Entry: 10a158c40; end: 10a158c93;  */

void FUN_10a158c40(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110ba89a8)[*(uint *)(param_1 + 0x40)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  return;
}



/* Entry: 10a158c94; end: 10a158cab;  */

long FUN_10a158c94(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_2 + 8);
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
  return param_2;
}



/* Entry: 10a158cac; end: 10a158d2b;  */

long * FUN_10a158cac(long *param_1,long *param_2,long *param_3)

{
  *param_1 = 0;
  if (*param_2 != 0) {
    (**(code **)(*param_2 + 8))(param_1 + 1,param_2 + 1);
    *param_1 = *param_2;
    *param_2 = 0;
  }
  param_1[4] = 0;
  if (*param_3 != 0) {
    (**(code **)(*param_3 + 8))(param_1 + 5,param_3 + 1);
    param_1[4] = *param_3;
    *param_3 = 0;
  }
  return param_1;
}



/* Entry: 10a158d2c; end: 10a158dab;  */

/* WARNING: Removing unreachable block (ram,0x00010a158ebc) */
/* WARNING: Removing unreachable block (ram,0x00010a158f0c) */

undefined1  [16] FUN_10a158d2c(int param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined1 **ppuVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined *puStack_e0;
  ulong uStack_d8;
  byte bStack_c9;
  undefined *apuStack_c8 [2];
  char cStack_b1;
  undefined *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 auStack_58 [24];
  
  if (param_1 == 3) {
    auVar10._8_8_ = 0x10;
    auVar10._0_8_ = &UNK_10f63efe3;
    return auVar10;
  }
  if (param_1 == 2) {
    auVar9._8_8_ = 0xf;
    auVar9._0_8_ = &UNK_10f63efd3;
    return auVar9;
  }
  if (param_1 != 1) {
    puVar4 = &UNK_10f63eff4;
    func_0x000105688514(&UNK_10f63eff4);
    func_0x000107c2b054(auStack_58,&DAT_10f33d2cc);
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (apuStack_c8,&UNK_10f63f092,auStack_58);
    ppuVar5 = apuStack_c8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppuVar5,&UNK_10f63f09e,8);
    puStack_a8 = ppuVar5[1];
    puStack_b0 = *ppuVar5;
    puStack_a0 = ppuVar5[2];
    ppuVar5[1] = (undefined *)0x0;
    ppuVar5[2] = (undefined *)0x0;
    *ppuVar5 = (undefined *)0x0;
    uVar2 = param_2[1];
    puVar3 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar3 = param_2;
    }
    ppuVar5 = &puStack_b0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppuVar5,puVar3,uVar2);
    puStack_88 = ppuVar5[1];
    puStack_90 = *ppuVar5;
    puStack_80 = ppuVar5[2];
    ppuVar5[1] = (undefined *)0x0;
    ppuVar5[2] = (undefined *)0x0;
    *ppuVar5 = (undefined *)0x0;
    func_0x000107c2b054(&puStack_e0,param_3);
    ppuVar5 = (undefined **)puStack_e0;
    if (-1 < (char)bStack_c9) {
      uStack_d8 = (ulong)bStack_c9;
      ppuVar5 = &puStack_e0;
    }
    ppuVar6 = &puStack_90;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppuVar6,ppuVar5,uStack_d8);
    puStack_68 = ppuVar6[1];
    puStack_70 = *ppuVar6;
    puStack_60 = ppuVar6[2];
    ppuVar6[1] = (undefined *)0x0;
    ppuVar6[2] = (undefined *)0x0;
    *ppuVar6 = (undefined *)0x0;
    func_0x00010ad03330();
    ppuVar7 = &puStack_70;
    FUN_10a107e2c(puVar4,ppuVar7,ppuVar6,1);
    if ((char)bStack_c9 < '\0') {
      __ZdlPv(puStack_e0);
      puVar4 = puStack_e0;
    }
    if ((long)puStack_80 < 0) {
      puVar4 = puStack_90;
      __ZdlPv(puStack_90);
    }
    if ((long)puStack_a0 < 0) {
      puVar4 = puStack_b0;
      __ZdlPv(puStack_b0);
    }
    if (cStack_b1 < '\0') {
      __ZdlPv(apuStack_c8[0]);
      puVar4 = apuStack_c8[0];
    }
    auVar11._8_8_ = ppuVar7;
    auVar11._0_8_ = puVar4;
    return auVar11;
  }
  puVar4 = &UNK_10f63efb1;
  if ((int)param_2 != 0x3fc) {
    puVar4 = &UNK_10f63efc2;
  }
  puVar1 = &UNK_10f63efb1;
  if ((int)param_2 != 0x15) {
    puVar1 = puVar4;
  }
  auVar8._8_8_ = 0x10;
  auVar8._0_8_ = puVar1;
  return auVar8;
}



/* Entry: 10a158dac; end: 10a158fbb;  */

/* WARNING: Removing unreachable block (ram,0x00010a158ebc) */
/* WARNING: Removing unreachable block (ram,0x00010a158f0c) */

void FUN_10a158dac(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined1 **ppuVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puStack_d0;
  ulong uStack_c8;
  byte bStack_b9;
  undefined8 auStack_b8 [2];
  char cStack_a1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c2b054(auStack_48,&DAT_10f33d2cc);
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_b8,&UNK_10f63f092,auStack_48);
  puVar3 = auStack_b8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar3,&UNK_10f63f09e,8);
  uStack_98 = puVar3[1];
  uStack_a0 = *puVar3;
  lStack_90 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  uVar1 = param_2[1];
  puVar3 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar3 = param_2;
  }
  puVar4 = &uStack_a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar4,puVar3,uVar1);
  uStack_78 = puVar4[1];
  uStack_80 = *puVar4;
  lStack_70 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  func_0x000107c2b054(&puStack_d0,param_3);
  ppuVar2 = (undefined1 **)puStack_d0;
  if (-1 < (char)bStack_b9) {
    uStack_c8 = (ulong)bStack_b9;
    ppuVar2 = &puStack_d0;
  }
  puVar3 = &uStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar3,ppuVar2,uStack_c8);
  uStack_58 = puVar3[1];
  uStack_60 = *puVar3;
  uStack_50 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  func_0x00010ad03330();
  FUN_10a107e2c(param_1,&uStack_60,puVar3,1);
  if ((char)bStack_b9 < '\0') {
    __ZdlPv(puStack_d0);
  }
  if (lStack_70 < 0) {
    __ZdlPv(uStack_80);
  }
  if (lStack_90 < 0) {
    __ZdlPv(uStack_a0);
  }
  if (cStack_a1 < '\0') {
    __ZdlPv(auStack_b8[0]);
  }
  return;
}



/* Entry: 10a158fbc; end: 10a159053;  */

void FUN_10a158fbc(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  char cStack_39;
  
  uVar1 = param_1;
  func_0x00010ad03330();
  FUN_10a107e2c(auStack_68,param_2,uVar1,1);
  uVar2 = 2;
  if (param_3 == 0) {
    uVar2 = 0;
  }
  FUN_10a0f1b1c(param_1,auStack_68,uVar2);
  if (cStack_39 < '\0') {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  return;
}



/* Entry: 10a159054; end: 10a159093;  */

bool FUN_10a159054(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  
  if (*(ulong *)(param_1 + 8) < param_3) {
    bVar1 = false;
  }
  else {
    FUN_10a0423ac(param_1,*(ulong *)(param_1 + 8) - param_3,0xffffffffffffffff,param_2,param_3);
    bVar1 = (int)param_1 == 0;
  }
  return bVar1;
}



/* Entry: 10a159094; end: 10a159143;  */

long FUN_10a159094(long param_1)

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



/* Entry: 10a159144; end: 10a15914b;  */

undefined8 FUN_10a159144(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



/* Entry: 10a15914c; end: 10a15919b;  */

undefined8 * FUN_10a15914c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = *(undefined8 **)*param_1;
  (*(code *)*param_2)(&uStack_30,param_2);
  FUN_10a158740(puVar1);
  puVar1[1] = uStack_28;
  *puVar1 = uStack_30;
  *(undefined4 *)(puVar1 + 8) = 0;
  return puVar1;
}



/* Entry: 10a15919c; end: 10a1591a3;  */

undefined8 FUN_10a15919c(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



/* Entry: 10a1591a4; end: 10a1591f3;  */

undefined8 * FUN_10a1591a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = *(undefined8 **)*param_1;
  (*(code *)*param_2)(&uStack_30,param_2);
  FUN_10a1587fc(puVar1);
  puVar1[1] = uStack_28;
  *puVar1 = uStack_30;
  *(undefined4 *)(puVar1 + 8) = 0;
  return puVar1;
}



/* Entry: 10a1591f4; end: 10a1591fb;  */

undefined8 FUN_10a1591f4(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



/* Entry: 10a1591fc; end: 10a15924b;  */

undefined8 * FUN_10a1591fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = *(undefined8 **)*param_1;
  (*(code *)*param_2)(&uStack_30,param_2);
  FUN_10a158868(puVar1);
  puVar1[1] = uStack_28;
  *puVar1 = uStack_30;
  *(undefined4 *)(puVar1 + 8) = 0;
  return puVar1;
}



/* Entry: 10a15924c; end: 10a159253;  */

undefined8 FUN_10a15924c(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



/* Entry: 10a159254; end: 10a1592a3;  */

undefined8 * FUN_10a159254(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = *(undefined8 **)*param_1;
  (*(code *)*param_2)(&uStack_30,param_2);
  FUN_10a1589e0(puVar1);
  puVar1[1] = uStack_28;
  *puVar1 = uStack_30;
  *(undefined4 *)(puVar1 + 8) = 0;
  return puVar1;
}



/* Entry: 10a1592a4; end: 10a1592ab;  */

undefined8 FUN_10a1592a4(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



/* Entry: 10a1592ac; end: 10a1592fb;  */

undefined8 * FUN_10a1592ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = *(undefined8 **)*param_1;
  (*(code *)*param_2)(&uStack_30,param_2);
  FUN_10a158924(puVar1);
  puVar1[1] = uStack_28;
  *puVar1 = uStack_30;
  *(undefined4 *)(puVar1 + 8) = 0;
  return puVar1;
}



/* Entry: 10a1592fc; end: 10a159303;  */

undefined8 FUN_10a1592fc(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



/* Entry: 10a159304; end: 10a1593ab;  */

undefined8 * FUN_10a159304(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = *(undefined8 **)*param_1;
  (*(code *)*param_2)(&uStack_30,param_2);
  FUN_10a158c40(puVar1);
  puVar1[1] = uStack_28;
  *puVar1 = uStack_30;
  *(undefined4 *)(puVar1 + 8) = 0;
  return puVar1;
}



/* Entry: 10a1593ac; end: 10a1593af;  */

void FUN_10a1593ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a1593b0; end: 10a1593c3;  */

void FUN_10a1593b0(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1593c4; end: 10a1593cb;  */

void FUN_10a1593c4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    func_0x00010a0eb248(lVar1 + 0xc40);
    func_0x00010a0eb1d4(lVar1 + 0xc18);
    func_0x00010a045fb4(lVar1 + 0xc08);
    func_0x00010a045fb4(lVar1 + 0xbf8);
    FUN_10a0ea908(lVar1 + 0x600);
    FUN_10a0ea908(lVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a1593cc; end: 10a159403;  */

undefined8 FUN_10a1593cc(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba8a68);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a159404; end: 10a15940f;  */

void FUN_10a159404(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a159410; end: 10a15945f;  */

undefined8 * FUN_10a159410(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = *(undefined8 **)*param_1;
  (*(code *)*param_2)(&uStack_30,param_2);
  FUN_10a158ab8(puVar1);
  puVar1[1] = uStack_28;
  *puVar1 = uStack_30;
  *(undefined4 *)(puVar1 + 8) = 0;
  return puVar1;
}



/* Entry: 10a159460; end: 10a159467;  */

undefined8 FUN_10a159460(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



/* Entry: 10a159468; end: 10a1594b7;  */

undefined8 * FUN_10a159468(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = *(undefined8 **)*param_1;
  (*(code *)*param_2)(&uStack_30,param_2);
  FUN_10a158a4c(puVar1);
  puVar1[1] = uStack_28;
  *puVar1 = uStack_30;
  *(undefined4 *)(puVar1 + 8) = 0;
  return puVar1;
}



/* Entry: 10a1594b8; end: 10a1594bf;  */

undefined8 FUN_10a1594b8(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



/* Entry: 10a1594c0; end: 10a15950f;  */

undefined8 * FUN_10a1594c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_28;
  
  puVar1 = *(undefined8 **)*param_1;
  (*(code *)*param_2)(&uStack_28,param_2);
  FUN_10a158b24(puVar1);
  *puVar1 = uStack_28;
  *(undefined4 *)(puVar1 + 8) = 0;
  return puVar1;
}



/* Entry: 10a159510; end: 10a15951f;  */

void FUN_10a159510(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba8ab8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a159520; end: 10a15953f;  */

void FUN_10a159520(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba8ab8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a159540; end: 10a1595db;  */

void FUN_10a159540(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x748);
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *(long *)(param_1 + 0x738);
  *(undefined8 *)(param_1 + 0x738) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar1 = *(long **)(param_1 + 0x468);
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *(long *)(param_1 + 0x458);
  *(undefined8 *)(param_1 + 0x458) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar1 = *(long **)(param_1 + 0x440);
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *(long *)(param_1 + 0x430);
  *(undefined8 *)(param_1 + 0x430) = 0;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1595dc; end: 10a1595e7;  */

void FUN_10a1595dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1595e8; end: 10a15aadb;  */

void FUN_10a1595e8(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  FUN_10a0ed544();
  FUN_10a0f086c(param_1);
  FUN_10a0f304c(param_1);
  FUN_10a0f5530(param_1);
  FUN_10a216554(param_1);
  FUN_10a2168c4(param_1);
  FUN_10a216aac(param_1);
  FUN_10a216c08(param_1);
  FUN_10a216e60(param_1);
  FUN_10a2199bc(param_1);
  FUN_10a08f440(param_1);
  FUN_10a094e34(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f0ce,0x14);
  func_0x00010a09504c(param_1);
  func_0x00010a004064(param_1);
  func_0x00010a09528c(param_1);
  FUN_10a0955f8(param_1);
  FUN_10a1b23e0(param_1);
  FUN_10a003e74(param_1,&DAT_10f2dae3c,5);
  FUN_10ad1e320(param_1);
  FUN_10ad1eb08(param_1);
  func_0x00010a004064(param_1);
  FUN_10ad1ef00(param_1);
  FUN_10a003e74(param_1,&DAT_10f2dae3c,5);
  FUN_10a41be58(param_1);
  func_0x00010a004064(param_1);
  FUN_10a003e74(param_1,&DAT_10f63a6be,6);
  FUN_10a426b5c(param_1);
  FUN_10a4303d0(param_1);
  func_0x00010a430588(param_1);
  func_0x00010a430740(param_1);
  FUN_10a430980(param_1);
  func_0x00010a004064(param_1);
  FUN_10a003e74(param_1,&DAT_10f63f0e3,6);
  FUN_10a431744(param_1);
  FUN_10a431960(param_1);
  FUN_10a431b28(param_1);
  func_0x00010a004064(param_1);
  FUN_10a49592c(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f0ea,0x10);
  FUN_10a003e74(param_1,&UNK_10f501555,6);
  FUN_10a49eecc(param_1);
  func_0x00010a004064(param_1);
  func_0x00010a004064(param_1);
  FUN_10a538a00(param_1);
  FUN_10a4a1540(param_1);
  FUN_10a4a3984(param_1);
  FUN_10a4a3b98(param_1);
  FUN_10a4a7888(param_1);
  FUN_10a4a810c(param_1);
  FUN_10a5ee2e0(param_1);
  FUN_10a5ee490(param_1);
  FUN_10a5f25b8(param_1);
  FUN_10a5fadfc(param_1);
  FUN_10a5fe358(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f0fb,0xf);
  FUN_10a2cb79c(param_1);
  func_0x00010a2cbe8c(param_1);
  func_0x00010a2cc234(param_1);
  func_0x00010a004064(param_1);
  FUN_10a2ce0c8(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f10b,0x12);
  FUN_10a2dc5d8(param_1);
  func_0x00010a004064(param_1);
  FUN_10a2de824(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f11e,4);
  FUN_10a392ad0(param_1);
  FUN_10a392d64(param_1);
  func_0x00010a004064(param_1);
  FUN_10a3932fc(param_1);
  FUN_10a64a8e8(param_1);
  FUN_10a65e3c0(param_1);
  FUN_10a6669c8(param_1);
  func_0x00010a666b80(param_1);
  func_0x00010a666dc4(param_1);
  FUN_10a6690a0(param_1);
  FUN_10a669368(param_1);
  FUN_10a669528(param_1);
  FUN_10a669734(param_1);
  func_0x00010a669930(param_1);
  FUN_10a669c28(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f123,0xe);
  FUN_10a68ef14(param_1);
  func_0x00010a004064(param_1);
  FUN_10a68f0e8(param_1);
  FUN_10a68fc94(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f0ce,0x14);
  FUN_10a73e2fc(param_1);
  FUN_10a73e4c4(param_1);
  func_0x00010a004064(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f132,0x10);
  FUN_10a741f98(param_1);
  FUN_10a7421b8(param_1);
  FUN_10a742720(param_1);
  FUN_10a742940(param_1);
  FUN_10a742bd0(param_1);
  FUN_10a74308c(param_1);
  func_0x00010a004064(param_1);
  FUN_10a003e74(param_1,&DAT_10f63f143,9);
  FUN_10a748774(param_1);
  FUN_10a7489f8(param_1);
  FUN_10a748c44(param_1);
  func_0x00010a004064(param_1);
  FUN_10a6b32bc(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f14d,0xc);
  FUN_10a74c9e8(param_1);
  func_0x00010a004064(param_1);
  FUN_10a74dad4(param_1);
  FUN_10a003e74(param_1,&DAT_10f512644,8);
  func_0x00010a004064(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f15a,0x14);
  FUN_10a117da8(param_1);
  FUN_10a118298(param_1);
  FUN_10a118468(param_1);
  FUN_10a118634(param_1);
  FUN_10a118964(param_1);
  FUN_10a118b78(param_1);
  func_0x00010a004064(param_1);
  FUN_10a7df2f0(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f16f,0x11);
  FUN_10a003e74(param_1,&UNK_10f63f181,0x15);
  func_0x00010a6e5018(param_1);
  func_0x00010a004064(param_1);
  func_0x00010a004064(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f197,0x12);
  FUN_10a6ee084(param_1);
  func_0x00010a004064(param_1);
  FUN_10a6f23e4(param_1);
  func_0x00010a824a20(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f1aa,0xe);
  FUN_10a82dd2c(param_1);
  func_0x00010a004064(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f1b9,10);
  FUN_10a02cacc(param_1);
  FUN_10a02cd04(param_1);
  func_0x00010a004064(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f1c4,0x15);
  FUN_10a031870(param_1);
  func_0x00010a004064(param_1);
  FUN_10a0393a8(param_1);
  FUN_10a03b250(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f1da,0x10);
  FUN_10a04017c(param_1);
  FUN_10a0404a8(param_1);
  FUN_10a0406b8(param_1);
  func_0x00010a004064(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f1eb,0x1b);
  FUN_10a85e1a4(param_1);
  func_0x00010a004064(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f207,0x1a);
  FUN_10a87a194(param_1);
  FUN_10a87a3c4(param_1);
  func_0x00010a004064(param_1);
  FUN_10a87ce44(param_1);
  FUN_10a87d058(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f222,0x13);
  FUN_10a003e74(param_1,&UNK_10f63f236,9);
  FUN_10a87d660(param_1);
  func_0x00010a004064(param_1);
  func_0x00010a004064(param_1);
  FUN_10a966c98(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f240,0xf);
  FUN_10a8b418c(param_1);
  FUN_10a8b72e8(param_1);
  FUN_10a8c06a8(param_1);
  FUN_10a8c8170(param_1);
  func_0x00010a8c8338(param_1);
  func_0x00010a8c84f0(param_1);
  func_0x00010a004064(param_1);
  func_0x00010a8ca1cc(param_1);
  FUN_10a8cc4b4(param_1);
  FUN_10a003e74(param_1,&UNK_10f5ac32c,6);
  FUN_10a91de4c(param_1);
  FUN_10a91dff8(param_1);
  func_0x00010a004064(param_1);
  FUN_10a923fb8(param_1);
  FUN_10a96d088(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f250,0x18);
  FUN_10a971c2c(param_1);
  func_0x00010a004064(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f269,9);
  FUN_10a97cdc0(param_1);
  FUN_10a97cff0(param_1);
  FUN_10a97d1e0(param_1);
  func_0x00010a004064(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f273,0xb);
  FUN_10a982f78(param_1);
  func_0x00010a004064(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f27f,0x16);
  FUN_10a8f9990(param_1);
  FUN_10a8f9c50(param_1);
  FUN_10a8f9e64(param_1);
  FUN_10a8fa9e4(param_1);
  FUN_10a8fabb0(param_1);
  FUN_10a8fae70(param_1);
  func_0x00010a004064(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f296,0x10);
  func_0x00010a004064(param_1);
  FUN_10a9000c8(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f2a7,0xc);
  FUN_10a9c7180(param_1);
  func_0x00010a004064(param_1);
  FUN_10a94d208(param_1);
  FUN_10a79a6ec(param_1);
  FUN_10a9dafbc(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f2b4,0xb);
  FUN_10a5adf04(param_1);
  FUN_10a5ae100(param_1);
  FUN_10a5ae2b0(param_1);
  FUN_10a5ae460(param_1);
  func_0x00010a004064(param_1);
  FUN_10a246f64(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f2c0,0xf);
  FUN_10a24893c(param_1);
  FUN_10a248c24(param_1);
  FUN_10a248eb4(param_1);
  FUN_10a2491b8(param_1);
  func_0x00010a004064(param_1);
  FUN_10a253cc4(param_1);
  func_0x00010a253ec8(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f2d0,7);
  FUN_10aa24ff4(param_1);
  func_0x00010aa33a88(param_1);
  func_0x00010aa33c90(param_1);
  func_0x00010a004064(param_1);
  FUN_10aa75bac(param_1);
  func_0x00010aa75d6c(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f2d8,0xd);
  FUN_10aa794b4(param_1);
  func_0x00010aa79664(param_1);
  func_0x00010a004064(param_1);
  FUN_10aaeb6ec(param_1);
  FUN_10aaebb84(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f222,0x13);
  FUN_10aaefcc8(param_1);
  FUN_10aaefe90(param_1);
  FUN_10aaf00b0(param_1);
  func_0x00010a004064(param_1);
  FUN_10ab16344(param_1);
  func_0x00010ab165fc(param_1);
  FUN_10ab167b4(param_1);
  func_0x00010ab169a0(param_1);
  FUN_10ab16ec4(param_1);
  FUN_10a003e74(param_1,&DAT_10f2f709e,0xb);
  FUN_10ab3f89c(param_1);
  FUN_10ab3fa68(param_1);
  func_0x00010a004064(param_1);
  FUN_10a3303e8(param_1);
  FUN_10a330608(param_1);
  FUN_10a330820(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f2e6,0x10);
  FUN_10a54a734(param_1);
  func_0x00010a004064(param_1);
  FUN_10a550e80(param_1);
  FUN_10a551068(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f2f7,0x13);
  FUN_10a343c60(param_1);
  func_0x00010a004064(param_1);
  FUN_10a34bcd4(param_1);
  FUN_10a34becc(param_1);
  FUN_10ab68f10(param_1);
  FUN_10ab69130(param_1);
  FUN_10ab69468(param_1);
  FUN_10ab6a46c(param_1);
  FUN_10ac1fb58(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f30b,0x20);
  FUN_10ac25d54(param_1);
  func_0x00010a004064(param_1);
  FUN_10ac29150(param_1);
  FUN_10ac29334(param_1);
  FUN_10ac3b218(param_1);
  FUN_10ac6a228(param_1);
  FUN_10ac6abc4(param_1);
  FUN_10ac70ce8(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f0ce,0x14);
  FUN_10a1dc66c(param_1);
  func_0x00010a1dc874(param_1);
  func_0x00010a1dca30(param_1);
  func_0x00010a004064(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f32c,0xf);
  FUN_10a1efd70(param_1);
  FUN_10a1eff3c(param_1);
  FUN_10a1f0154(param_1);
  FUN_10a1f0320(param_1);
  FUN_10a1f0538(param_1);
  func_0x00010a004064(param_1);
  FUN_10ac8b0b0(param_1);
  FUN_10ac8d86c(param_1);
  FUN_10ac8f750(param_1);
  FUN_10a3dfc78(param_1);
  FUN_10ac9787c(param_1);
  func_0x00010ac97a84(param_1);
  FUN_10ac9833c(param_1);
  FUN_10ac9aa54(param_1);
  FUN_10acb2b1c(param_1);
  FUN_10ad72230(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f33c,6);
  FUN_10ad74630(param_1);
  FUN_10ad747d0(param_1);
  FUN_10ad74974(param_1);
  FUN_10ad7501c(param_1);
  FUN_10ad76208(param_1);
  func_0x00010a004064(param_1);
  FUN_10a1c9390(param_1);
  func_0x00010a1c9610(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f343,0x1a);
  FUN_10ace0774(param_1);
  func_0x00010a004064(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f35e,0x1a);
  FUN_10ace1648(param_1);
  func_0x00010a004064(param_1);
  FUN_10a003e74(param_1,&UNK_10f68efd8,0x13);
  FUN_10ace1858(param_1);
  func_0x00010a004064(param_1);
  FUN_10a003e74(param_1,&DAT_10f63f379,0x13);
  FUN_10ace8010(param_1);
  func_0x00010a004064(param_1);
  FUN_10ace8688(param_1);
  FUN_10acea530(param_1);
  FUN_10aaaf25c(param_1);
  FUN_10aaaf46c(param_1);
  FUN_10aab000c(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f38d,0xd);
  FUN_10aac8504(param_1);
  FUN_10aac86d0(param_1);
  func_0x00010a004064(param_1);
  FUN_10a4cd31c(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f39b,0x1a);
  FUN_10a4d7754(param_1);
  func_0x00010a004064(param_1);
  FUN_10a4e9b00(param_1);
  FUN_10a003e74(param_1,&UNK_10f63f1aa,0xe);
  FUN_10acf25e0(param_1);
  func_0x00010a004064(param_1);
  FUN_10acf2f74(param_1);
  FUN_10a3c5320(param_1);
  FUN_10ac62e28(param_1);
  FUN_10a66a4d4(param_1);
  FUN_10a1dba68(param_1);
  FUN_10aa8870c(param_1);
  FUN_10a4206b8(param_1);
  FUN_10ac6e868(param_1);
  FUN_10aa84e28(param_1);
  FUN_10a688990(param_1);
  FUN_10a2d4ed8(param_1);
  FUN_10a1ec0bc(param_1);
  FUN_10ac28d8c(param_1);
  FUN_10ac1ae40(param_1);
  FUN_10ac74ef0(param_1);
  FUN_10aa7f084(param_1);
  FUN_10aa852e8(param_1);
  FUN_10aa851b8(param_1);
  FUN_10aa85088(param_1);
  FUN_10aa85418(param_1);
  FUN_10aa8a4a0(param_1);
  FUN_10aa85548(param_1);
  FUN_10aa84f58(param_1);
  FUN_10a975b20(param_1);
  FUN_10a588b4c(param_1);
  FUN_10a2de158(param_1);
  FUN_10a42693c(param_1);
  FUN_10a942fa4(param_1);
  FUN_10a943258(param_1);
  FUN_10a1c565c(param_1);
  func_0x00010a14b404(param_1);
  FUN_10ad75f3c(param_1);
  FUN_10ad74c70(param_1);
  FUN_10aca2c2c(param_1);
  FUN_10aca29c4(param_1);
  FUN_10aca2b00(param_1);
  FUN_10ac97d10(param_1);
  FUN_10ac8a780(param_1);
  FUN_10ac899ac(param_1);
  FUN_10ac896b0(param_1);
  FUN_10ac89110(param_1);
  FUN_10ac88d14(param_1);
  FUN_10a1f2b34(param_1);
  FUN_10a1f2154(param_1);
  FUN_10a1f161c(param_1);
  FUN_10a1f127c(param_1);
  FUN_10a1f0adc(param_1);
  FUN_10a1f07d4(param_1);
  FUN_10a1eef2c(param_1);
  FUN_10a1edf78(param_1);
  FUN_10a1edb40(param_1);
  FUN_10a1dff18(param_1);
  FUN_10a1db038(param_1);
  FUN_10ac5f654(param_1);
  FUN_10ac581b4(param_1);
  FUN_10ac32a40(param_1);
  FUN_10ac28740(param_1);
  FUN_10ac21248(param_1);
  FUN_10a740944(param_1);
  FUN_10a741708(param_1);
  FUN_10a740f74(param_1);
  FUN_10a740c3c(param_1);
  FUN_10a7414ac(param_1);
  FUN_10ac19f00(param_1);
  FUN_10ac19a58(param_1);
  FUN_10ac1069c(param_1);
  FUN_10acae17c(param_1);
  FUN_10a94e184(param_1);
  FUN_10a9c6780(param_1);
  FUN_10aa7f980(param_1);
  FUN_10aa85e58(param_1);
  FUN_10aa7f850(param_1);
  FUN_10aa86b78(param_1);
  FUN_10aa85bb8(param_1);
  FUN_10aa7fabc(param_1);
  FUN_10aa7f714(param_1);
  FUN_10aa85918(param_1);
  FUN_10ab69e68(param_1);
  FUN_10a8fb4e0(param_1);
  FUN_10a2ad504(param_1);
  FUN_10a96a3a4(param_1);
  FUN_10a969e68(param_1);
  FUN_10a96a038(param_1);
  FUN_10a97d6ec(param_1);
  FUN_10ab65244(param_1);
  FUN_10ab64e5c(param_1);
  FUN_10a34769c(param_1);
  FUN_10a031320(param_1);
  FUN_10aa86d74(param_1);
  FUN_10aa860f8(param_1);
  FUN_10aa7fe4c(param_1);
  FUN_10aa7fd1c(param_1);
  FUN_10a031150(param_1);
  FUN_10a32fc04(param_1);
  func_0x00010a8fa800(param_1);
  FUN_10a326d2c(param_1);
  FUN_10aaef710(param_1);
  FUN_10a03deb4(param_1);
  FUN_10ab44d34(param_1);
  FUN_10ab42114(param_1);
  FUN_10aaef570(param_1);
  FUN_10a00a99c(param_1);
  func_0x00010a8fa4bc(param_1);
  func_0x00010a8fa148(param_1);
  FUN_10aa86638(param_1);
  FUN_10aa86398(param_1);
  FUN_10aa801e8(param_1);
  FUN_10aa800b8(param_1);
  FUN_10ab205c8(param_1);
  FUN_10ab20888(param_1);
  FUN_10ab1feb4(param_1);
  FUN_10ab1d184(param_1);
  FUN_10ab1aca0(param_1);
  FUN_10aa7fbec(param_1);
  FUN_10aa868d8(param_1);
  FUN_10aa85678(param_1);
  FUN_10aa7ff88(param_1);
  FUN_10a115378(param_1);
  FUN_10a964458(param_1);
  FUN_10aa7f4f0(param_1);
  FUN_10a1151a0(param_1);
  FUN_10aaf2718(param_1);
  FUN_10a111da8(param_1);
  FUN_10a97d98c(param_1);
  FUN_10a74d460(param_1);
  FUN_10a74d70c(param_1);
  FUN_10a74d19c(param_1);
  FUN_10a74cf58(param_1);
  FUN_10aa7c234(param_1);
  FUN_10aa7ef54(param_1);
  FUN_10aa78bc0(param_1);
  FUN_10aa7c014(param_1);
  FUN_10aa757c4(param_1);
  FUN_10aa74450(param_1);
  FUN_10aa74324(param_1);
  FUN_10aa70c74(param_1);
  FUN_10aa707c8(param_1);
  FUN_10aca1c44(param_1);
  FUN_10a976648(param_1);
  FUN_10a9763f4(param_1);
  FUN_10a9761e0(param_1);
  FUN_10a975c58(param_1);
  FUN_10a975e1c(param_1);
  FUN_10a973fd4(param_1);
  FUN_10a267eb4(param_1);
  FUN_10a259750(param_1);
  FUN_10ad72060(param_1);
  FUN_10a2478ac(param_1);
  func_0x00010a245198(param_1);
  FUN_10a9731ec(param_1);
  FUN_10a972c3c(param_1);
  func_0x00010a2681c4(param_1);
  FUN_10a85cd84(param_1);
  FUN_10a9dedd4(param_1);
  FUN_10a9decf0(param_1);
  FUN_10a9df08c(param_1);
  FUN_10a970730(param_1);
  FUN_10a96ef08(param_1);
  FUN_10a96dc40(param_1);
  FUN_10a113218(param_1);
  FUN_10a96d2f8(param_1);
  FUN_10a79958c(param_1);
  FUN_10a036b44(param_1);
  FUN_10a8f9624(param_1);
  func_0x00010a031b28(param_1);
  FUN_10a0314e8(param_1);
  FUN_10a00f2ec(param_1);
  FUN_10a02c13c(param_1);
  FUN_10a02c644(param_1);
  FUN_10a587400(param_1);
  FUN_10a5870fc(param_1);
  FUN_10a68d8d4(param_1);
  FUN_10a1c374c(param_1);
  FUN_10a1c3a20(param_1);
  FUN_10a669f18(param_1);
  FUN_10a607558(param_1);
  FUN_10a6083ac(param_1);
  FUN_10a60857c(param_1);
  FUN_10a60874c(param_1);
  FUN_10a667228(param_1);
  FUN_10a6677ac(param_1);
  FUN_10a6675b0(param_1);
  FUN_10a667c70(param_1);
  FUN_10a6679a8(param_1);
  FUN_10a65d96c(param_1);
  FUN_10a64f498(param_1);
  FUN_10a607d8c(param_1);
  FUN_10a3a19fc(param_1);
  FUN_10a3a12f4(param_1);
  FUN_10a39c8c0(param_1);
  FUN_10a6078dc(param_1);
  FUN_10a607a08(param_1);
  FUN_10a394064(param_1);
  FUN_10a39306c(param_1);
  FUN_10a392670(param_1);
  FUN_10a391bd8(param_1);
  FUN_10a3913e8(param_1);
  FUN_10a38d494(param_1);
  FUN_10a38aae0(param_1);
  FUN_10a608f14(param_1);
  FUN_10a6090d8(param_1);
  FUN_10a60929c(param_1);
  FUN_10a2dc1cc(param_1);
  FUN_10a6089c8(param_1);
  FUN_10a608b8c(param_1);
  FUN_10a608d50(param_1);
  FUN_10a607b34(param_1);
  FUN_10a2cd9b8(param_1);
  FUN_10a607c60(param_1);
  FUN_10a2cdab4(param_1);
  FUN_10a2cb494(param_1);
  FUN_10a60808c(param_1);
  FUN_10a60821c(param_1);
  FUN_10a2cabe4(param_1);
  FUN_10a2c56f4(param_1);
  FUN_10a600998(param_1);
  FUN_10a600120(param_1);
  FUN_10a5fef88(param_1);
  FUN_10a609460(param_1);
  FUN_10a6095f0(param_1);
  FUN_10a609764(param_1);
  FUN_10a5fe9e0(param_1);
  FUN_10a5fa458(param_1);
  FUN_10a5f0ff0(param_1);
  FUN_10a5edae4(param_1);
  FUN_10a607684(param_1);
  FUN_10a6077b0(param_1);
  FUN_10a5eb07c(param_1);
  FUN_10a4aa114(param_1);
  FUN_10a4a7b70(param_1);
  FUN_10a4a671c(param_1);
  FUN_10a4a76d0(param_1);
  FUN_10a4a6170(param_1);
  FUN_10a2c54fc(param_1);
  FUN_10a607f18(param_1);
  FUN_10a430e84(param_1);
  FUN_10a49ebb4(param_1);
  FUN_10a49de78(param_1);
  FUN_10a430c58(param_1);
  FUN_10a497094(param_1);
  FUN_10a496cc4(param_1);
  FUN_10a4965c0(param_1);
  FUN_10a495c54(param_1);
  FUN_10a431298(param_1);
  FUN_10a4294bc(param_1);
  FUN_10a427d84(param_1);
  FUN_10a4272b4(param_1);
  FUN_10a414c64(param_1);
  FUN_10a414e00(param_1);
  FUN_10a40ea54(param_1);
  func_0x000109887da8(appuStack_c8,&UNK_10f65839d,0x13);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bd7378;
  pppuVar2 = (undefined8 ***)&UNK_10f656650;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bd7378;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd31d8;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a40db08;
    FUN_10a054dac(param_1,&UNK_10f656651,FUN_10a439504,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a40db08;
    FUN_10a054dac(param_1,&UNK_10f656669,FUN_10a43970c,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a40db08;
    FUN_10a054dac(param_1,&UNK_10f656681,FUN_10a4399a0,2,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f65839d,0x13);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a40db08:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a40db0c);
  (*pcVar6)();
}



/* Entry: 10a15aadc; end: 10a15ad3b;  */

bool FUN_10a15aadc(undefined8 param_1,long *param_2,long *param_3)

{
  char *pcVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  char *pcVar12;
  char *pcVar13;
  
  puVar3 = PTR___DefaultRuneLocale_11034bcf8;
  pcVar12 = (char *)*param_3;
  pcVar13 = (char *)*param_2;
  lVar11 = param_2[1];
  pcVar10 = pcVar12;
  if (lVar11 != 0) {
    pcVar1 = pcVar13 + lVar11;
    pcVar10 = pcVar13;
    do {
      cVar2 = *pcVar10;
      lVar8 = (long)cVar2;
      if (cVar2 < 0) {
        ___maskrune(lVar8,0x4000);
        uVar7 = (uint)lVar8;
      }
      else {
        uVar7 = *(uint *)(puVar3 + (ulong)(uint)(int)cVar2 * 4 + 0x3c) & 0x4000;
      }
      pcVar13 = pcVar10;
      if (uVar7 == 0) break;
      pcVar10 = pcVar10 + 1;
      lVar11 = lVar11 + -1;
      pcVar13 = pcVar1;
    } while (lVar11 != 0);
    pcVar10 = (char *)*param_3;
  }
  lVar11 = param_3[1];
  for (; pcVar12 != pcVar10 + lVar11; pcVar12 = pcVar12 + 1) {
    cVar2 = *pcVar12;
    lVar8 = (long)cVar2;
    if (cVar2 < 0) {
      ___maskrune(lVar8,0x4000);
      uVar7 = (uint)lVar8;
    }
    else {
      uVar7 = *(uint *)(puVar3 + (ulong)(uint)(int)cVar2 * 4 + 0x3c) & 0x4000;
    }
    if (uVar7 == 0) break;
  }
  do {
    lVar11 = *param_2;
    lVar8 = param_2[1];
    if ((pcVar13 == (char *)(lVar11 + lVar8)) || (pcVar12 == (char *)(*param_3 + param_3[1])))
    break;
    do {
      cVar2 = *pcVar13;
      lVar9 = (long)cVar2;
      if (cVar2 < 0) {
        ___maskrune(lVar9,0x4000);
        uVar7 = (uint)lVar9;
      }
      else {
        uVar7 = *(uint *)(puVar3 + (ulong)(uint)(int)cVar2 * 4 + 0x3c) & 0x4000;
      }
    } while ((uVar7 != 0) && (pcVar13 = pcVar13 + 1, pcVar13 != (char *)(lVar11 + lVar8)));
    lVar11 = *param_3;
    lVar8 = param_3[1];
    for (; pcVar12 != (char *)(lVar11 + lVar8); pcVar12 = pcVar12 + 1) {
      cVar2 = *pcVar12;
      lVar9 = (long)cVar2;
      if (cVar2 < 0) {
        ___maskrune(lVar9,0x4000);
        uVar7 = (uint)lVar9;
      }
      else {
        uVar7 = *(uint *)(puVar3 + (ulong)(uint)(int)cVar2 * 4 + 0x3c) & 0x4000;
      }
      if (uVar7 == 0) break;
    }
    lVar11 = *param_2;
    lVar8 = param_2[1];
    if ((pcVar13 == (char *)(lVar11 + lVar8)) || (pcVar12 == (char *)(*param_3 + param_3[1])))
    break;
    iVar5 = (int)*pcVar13;
    ___tolower();
    iVar6 = (int)*pcVar12;
    ___tolower();
    if (iVar5 != iVar6) goto LAB_10a15ad0c;
    pcVar13 = pcVar13 + 1;
    pcVar12 = pcVar12 + 1;
  } while( true );
  pcVar10 = pcVar13;
  for (; pcVar13 != (char *)(lVar11 + lVar8); pcVar13 = pcVar13 + 1) {
    cVar2 = *pcVar13;
    lVar9 = (long)cVar2;
    if (cVar2 < 0) {
      ___maskrune(lVar9,0x4000);
      uVar7 = (uint)lVar9;
    }
    else {
      uVar7 = *(uint *)(puVar3 + (ulong)(uint)(int)cVar2 * 4 + 0x3c) & 0x4000;
    }
    pcVar10 = pcVar13;
    if (uVar7 == 0) break;
    pcVar10 = (char *)(lVar11 + lVar8);
  }
  lVar11 = *param_3;
  lVar8 = param_3[1];
  pcVar13 = pcVar12;
  for (; pcVar12 != (char *)(lVar11 + lVar8); pcVar12 = pcVar12 + 1) {
    cVar2 = *pcVar12;
    lVar9 = (long)cVar2;
    if (cVar2 < 0) {
      ___maskrune(lVar9,0x4000);
      uVar7 = (uint)lVar9;
    }
    else {
      uVar7 = *(uint *)(puVar3 + (ulong)(uint)(int)cVar2 * 4 + 0x3c) & 0x4000;
    }
    pcVar13 = pcVar12;
    if (uVar7 == 0) break;
    pcVar13 = (char *)(lVar11 + lVar8);
  }
  if (pcVar10 == (char *)(*param_2 + param_2[1])) {
    bVar4 = pcVar13 == (char *)(*param_3 + param_3[1]);
  }
  else {
LAB_10a15ad0c:
    bVar4 = false;
  }
  return bVar4;
}



/* Entry: 10a15ad3c; end: 10a15adcb;  */

long * FUN_10a15ad3c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a15adcc; end: 10a15bb03;  */

/* WARNING: Removing unreachable block (ram,0x00010a15b114) */
/* WARNING: Removing unreachable block (ram,0x00010a15b0b4) */
/* WARNING: Removing unreachable block (ram,0x00010a15b660) */
/* WARNING: Removing unreachable block (ram,0x00010a15b084) */
/* WARNING: Removing unreachable block (ram,0x00010a15b0e4) */
/* WARNING: Removing unreachable block (ram,0x00010a15b92c) */

undefined8 *
FUN_10a15adcc(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  code *pcVar12;
  long *plVar13;
  long **pplVar14;
  char *pcVar15;
  byte bVar16;
  long lVar17;
  long **pplVar18;
  long lVar19;
  undefined8 **ppuVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  undefined8 **ppuVar25;
  undefined8 uVar26;
  long **pplStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined7 uStack_100;
  char cStack_f9;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  undefined8 **ppuStack_d8;
  undefined8 **ppuStack_d0;
  long lStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_91;
  undefined8 **ppuStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  
  plVar24 = param_1 + 1;
  *plVar24 = 0;
  *param_1 = &PTR_DAT_110ba8eb8;
  lVar17 = param_2[1];
  lVar19 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = lVar19;
  if (lVar17 != 0) {
    plVar13 = (long *)(lVar17 + 8);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar9) {
        *plVar13 = *plVar13 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  uVar26 = *param_3;
  param_1[5] = param_3[1];
  param_1[4] = uVar26;
  lVar17 = param_3[2];
  param_1[6] = lVar17;
  if (lVar17 != 0) {
    plVar13 = (long *)(lVar17 + 8);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar9) {
        *plVar13 = *plVar13 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  lVar17 = param_4[1];
  uVar26 = *param_4;
  param_1[8] = param_4[1];
  param_1[7] = uVar26;
  if (lVar17 != 0) {
    plVar13 = (long *)(lVar17 + 8);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar9) {
        *plVar13 = *plVar13 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  lVar17 = param_5[1];
  uVar26 = *param_5;
  param_1[10] = param_5[1];
  param_1[9] = uVar26;
  if (lVar17 != 0) {
    plVar13 = (long *)(lVar17 + 8);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar9) {
        *plVar13 = *plVar13 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  lVar19 = param_1[2];
  FUN_10a303694();
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  lStack_c8 = 0;
  puStack_c0 = (long *)0x0;
  puStack_b8 = (long *)0x0;
  plStack_e0 = (long *)0x0;
  ppuStack_d8 = (long **)0x0;
  ppuStack_d0 = (long **)0x0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  lVar17 = param_1[2];
  iVar3 = *(int *)(lVar17 + 0x734);
  puStack_f8 = &uStack_f0;
  if (iVar3 == 2) {
    func_0x000107c2b054(&uStack_110,&UNK_10f63f400);
    puVar1 = puStack_c0;
    if (puStack_c0 < puStack_b8) {
      if (cStack_f9 < '\0') {
        func_0x000107c3192c(puStack_c0,uStack_110,uStack_108);
      }
      else {
        puStack_c0[2] = CONCAT17(cStack_f9,uStack_100);
        puStack_c0[1] = uStack_108;
        *puStack_c0 = uStack_110;
      }
      plVar13 = puVar1 + 3;
    }
    else {
      plVar13 = &lStack_c8;
      func_0x000107c27d34(plVar13,&uStack_110);
    }
    puStack_c0 = plVar13;
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&pplStack_128,&UNK_10f63f3c6,&uStack_110);
    if (ppuStack_d8 < ppuStack_d0) {
      ppuStack_d8[2] = puStack_118;
      ppuStack_d8[1] = puStack_120;
      *ppuStack_d8 = pplStack_128;
      ppuStack_d8 = ppuStack_d8 + 3;
    }
    else {
      lVar17 = (long)ppuStack_d8 - (long)plStack_e0;
      uVar23 = (lVar17 >> 3) * -0x5555555555555555 + 1;
      if (0xaaaaaaaaaaaaaaa < uVar23) {
        FUN_10a05a0c0();
LAB_10a15b96c:
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x10a15b970);
        (*pcVar12)();
      }
      lVar21 = (long)ppuStack_d0 - (long)plStack_e0 >> 3;
      uVar22 = lVar21 * 0x5555555555555556;
      if (uVar22 < uVar23 || uVar22 - uVar23 == 0) {
        uVar22 = uVar23;
      }
      if (0x555555555555554 < (ulong)(lVar21 * -0x5555555555555555)) {
        uVar22 = 0xaaaaaaaaaaaaaaa;
      }
      ppuStack_70 = &plStack_e0;
      pplVar18 = &plStack_e0;
      FUN_10a05a0d4();
      puVar1 = (undefined8 *)((long)pplVar18 + lVar17);
      puVar1[2] = puStack_118;
      puVar1[1] = puStack_120;
      *puVar1 = pplStack_128;
      puStack_120 = (long *)0x0;
      puStack_118 = (long *)0x0;
      pplStack_128 = (long **)0x0;
      pplVar14 = (long **)(puVar1 + 3);
      ppuVar25 = (undefined8 **)((long)puVar1 - ((long)ppuStack_d8 - (long)plStack_e0));
      _memcpy(ppuVar25);
      plStack_80 = plStack_e0;
      ppuStack_78 = ppuStack_d0;
      ppuStack_90 = (undefined8 **)plStack_e0;
      plStack_88 = plStack_e0;
      plStack_e0 = (long *)ppuVar25;
      ppuStack_d8 = pplVar14;
      ppuStack_d0 = pplVar18 + uVar22 * 3;
      func_0x000107c31938(&ppuStack_90);
      ppuStack_d8 = pplVar14;
      if ((long)puStack_118 < 0) {
        __ZdlPv(pplStack_128);
      }
    }
    ppuVar25 = ppuStack_d8;
    if (ppuStack_d8 < ppuStack_d0) {
      func_0x000107c2b054(ppuStack_d8,&UNK_10f63f410);
      pplVar18 = ppuVar25 + 3;
    }
    else {
      pplVar18 = &plStack_e0;
      FUN_10a1805f0(pplVar18,&UNK_10f63f410);
    }
    ppuStack_d8 = pplVar18;
    if (pplVar18 < ppuStack_d0) {
      func_0x000107c2b054(pplVar18,&UNK_10f63f092);
      pplVar18 = pplVar18 + 3;
    }
    else {
      pplVar18 = &plStack_e0;
      FUN_10a1804dc(pplVar18,&UNK_10f63f092);
    }
    uStack_a0 = CONCAT17(5,(undefined7)uStack_a0);
    uStack_b0 = CONCAT26(uStack_b0._6_2_,0x6c6174656d);
    ppuStack_d8 = pplVar18;
    func_0x000107c2b054(&ppuStack_90,&UNK_10f63f422);
    ppuVar25 = &puStack_f8;
    pplStack_128 = (long **)&ppuStack_90;
    FUN_10a1945c0(ppuVar25,&ppuStack_90,&UNK_10dd5b8f9,&pplStack_128,&uStack_91);
    if (*(char *)((long)ppuVar25 + 0x4f) < '\0') {
      ppuVar25[8] = (undefined8 *)0xb;
      ppuVar20 = (undefined8 **)ppuVar25[7];
    }
    else {
      ppuVar20 = ppuVar25 + 7;
      *(undefined1 *)((long)ppuVar25 + 0x4f) = 0xb;
    }
    *(undefined4 *)((long)ppuVar20 + 7) = 0x2f6d7569;
    *ppuVar20 = (undefined8 *)0x6972616e6563732f;
    *(undefined1 *)((long)ppuVar20 + 0xb) = 0;
LAB_10a15b658:
    if (cStack_f9 < '\0') {
      __ZdlPv();
    }
  }
  else {
    if (iVar3 == 3) {
      func_0x000107c2b054(&uStack_110,&UNK_10f63f3b6);
      puVar1 = puStack_c0;
      if (puStack_c0 < puStack_b8) {
        if (cStack_f9 < '\0') {
          func_0x000107c3192c(puStack_c0,uStack_110,uStack_108);
        }
        else {
          puStack_c0[2] = CONCAT17(cStack_f9,uStack_100);
          puStack_c0[1] = uStack_108;
          *puStack_c0 = uStack_110;
        }
        plVar13 = puVar1 + 3;
      }
      else {
        plVar13 = &lStack_c8;
        func_0x000107c27d34(plVar13,&uStack_110);
      }
      puStack_c0 = plVar13;
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&pplStack_128,&UNK_10f63f3c6,&uStack_110);
      if (ppuStack_d8 < ppuStack_d0) {
        ppuStack_d8[2] = puStack_118;
        ppuStack_d8[1] = puStack_120;
        *ppuStack_d8 = pplStack_128;
        ppuStack_d8 = ppuStack_d8 + 3;
      }
      else {
        lVar17 = (long)ppuStack_d8 - (long)plStack_e0;
        uVar23 = (lVar17 >> 3) * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar23) {
          FUN_10a05a0c0();
          goto LAB_10a15b96c;
        }
        lVar21 = (long)ppuStack_d0 - (long)plStack_e0 >> 3;
        uVar22 = lVar21 * 0x5555555555555556;
        if (uVar22 < uVar23 || uVar22 - uVar23 == 0) {
          uVar22 = uVar23;
        }
        if (0x555555555555554 < (ulong)(lVar21 * -0x5555555555555555)) {
          uVar22 = 0xaaaaaaaaaaaaaaa;
        }
        ppuStack_70 = &plStack_e0;
        pplVar18 = &plStack_e0;
        FUN_10a05a0d4();
        puVar1 = (undefined8 *)((long)pplVar18 + lVar17);
        puVar1[2] = puStack_118;
        puVar1[1] = puStack_120;
        *puVar1 = pplStack_128;
        puStack_120 = (long *)0x0;
        puStack_118 = (long *)0x0;
        pplStack_128 = (long **)0x0;
        pplVar14 = (long **)(puVar1 + 3);
        ppuVar25 = (undefined8 **)((long)puVar1 - ((long)ppuStack_d8 - (long)plStack_e0));
        _memcpy(ppuVar25);
        plStack_80 = plStack_e0;
        ppuStack_78 = ppuStack_d0;
        ppuStack_90 = (undefined8 **)plStack_e0;
        plStack_88 = plStack_e0;
        plStack_e0 = (long *)ppuVar25;
        ppuStack_d8 = pplVar14;
        ppuStack_d0 = pplVar18 + uVar22 * 3;
        func_0x000107c31938(&ppuStack_90);
        ppuStack_d8 = pplVar14;
        if ((long)puStack_118 < 0) {
          __ZdlPv(pplStack_128);
        }
      }
      ppuVar25 = ppuStack_d8;
      if (ppuStack_d8 < ppuStack_d0) {
        func_0x000107c2b054(ppuStack_d8,&UNK_10f63f3d1);
        pplVar14 = ppuVar25 + 3;
      }
      else {
        lVar17 = (long)ppuStack_d8 - (long)plStack_e0;
        uVar23 = (lVar17 >> 3) * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar23) {
          FUN_10a05a0c0();
          goto LAB_10a15b96c;
        }
        lVar21 = (long)ppuStack_d0 - (long)plStack_e0 >> 3;
        uVar22 = lVar21 * 0x5555555555555556;
        if (uVar22 < uVar23 || uVar22 - uVar23 == 0) {
          uVar22 = uVar23;
        }
        if (0x555555555555554 < (ulong)(lVar21 * -0x5555555555555555)) {
          uVar22 = 0xaaaaaaaaaaaaaaa;
        }
        ppuStack_70 = &plStack_e0;
        if (uVar22 == 0) {
          pplVar18 = (long **)0x0;
        }
        else {
          pplVar18 = &plStack_e0;
          FUN_10a05a0d4();
        }
        lVar17 = (long)pplVar18 + lVar17;
        ppuStack_90 = pplVar18;
        plStack_88 = (long *)lVar17;
        plStack_80 = (long *)lVar17;
        ppuStack_78 = pplVar18 + uVar22 * 3;
        func_0x000107c2b054(lVar17,&UNK_10f63f3d1);
        pplVar14 = (long **)(lVar17 + 0x18);
        ppuVar25 = (undefined8 **)(lVar17 - ((long)ppuStack_d8 - (long)plStack_e0));
        _memcpy(ppuVar25);
        plStack_80 = plStack_e0;
        ppuStack_78 = ppuStack_d0;
        ppuStack_90 = (undefined8 **)plStack_e0;
        plStack_88 = plStack_e0;
        plStack_e0 = (long *)ppuVar25;
        ppuStack_d8 = pplVar14;
        ppuStack_d0 = pplVar18 + uVar22 * 3;
        func_0x000107c31938(&ppuStack_90);
      }
      ppuStack_d8 = pplVar14;
      if (pplVar14 < ppuStack_d0) {
        func_0x000107c2b054(pplVar14,&UNK_10f63f092);
        pplVar14 = pplVar14 + 3;
      }
      else {
        pplVar14 = &plStack_e0;
        FUN_10a1804dc(pplVar14,&UNK_10f63f092);
      }
      uStack_a0 = CONCAT17(3,(undefined7)uStack_a0);
      uStack_b0 = CONCAT44(uStack_b0._4_4_,0x767073);
      ppuStack_d8 = pplVar14;
      func_0x000107c2b054(&ppuStack_90,&UNK_10f63f3e4);
      ppuVar25 = &puStack_f8;
      pplStack_128 = (long **)&ppuStack_90;
      FUN_10a1945c0(ppuVar25,&ppuStack_90,&UNK_10dd5b8f9,&pplStack_128,&uStack_91);
      if (*(char *)((long)ppuVar25 + 0x4f) < '\0') {
        ppuVar25[8] = (undefined8 *)0xb;
        ppuVar20 = (undefined8 **)ppuVar25[7];
      }
      else {
        ppuVar20 = ppuVar25 + 7;
        *(undefined1 *)((long)ppuVar25 + 0x4f) = 0xb;
      }
      *(undefined4 *)((long)ppuVar20 + 7) = 0x2f6d7569;
      *ppuVar20 = (undefined8 *)0x6972616e6563732f;
      *(undefined1 *)((long)ppuVar20 + 0xb) = 0;
      goto LAB_10a15b658;
    }
    iVar3 = *(int *)(lVar17 + 0x738);
    if (iVar3 - 0x407U < 2) {
      func_0x000107c2b054(&ppuStack_90,&UNK_10f63f440);
      FUN_10a15bb04(&plStack_e0,&lStack_c8,&ppuStack_90);
LAB_10a15b08c:
      func_0x000107c2b054(&ppuStack_90,&UNK_10f63f465);
      FUN_10a15bb04(&plStack_e0,&lStack_c8,&ppuStack_90);
      func_0x000107c2b054(&ppuStack_90,&UNK_10f63f478);
      FUN_10a15bb04(&plStack_e0,&lStack_c8,&ppuStack_90);
    }
    else {
      if (iVar3 == 0x2d) {
        func_0x000107c2b054(&ppuStack_90,&UNK_10f63f453);
        FUN_10a15bb04(&plStack_e0,&lStack_c8,&ppuStack_90);
        goto LAB_10a15b08c;
      }
      if (iVar3 != 0x3fc) goto LAB_10a15b08c;
      func_0x000107c2b054(&ppuStack_90,&UNK_10f63f478);
      FUN_10a15bb04(&plStack_e0,&lStack_c8,&ppuStack_90);
    }
    func_0x000107c2b054(&ppuStack_90,"/");
    FUN_10a15bb04(&plStack_e0,&lStack_c8,&ppuStack_90);
    uStack_a0 = CONCAT17(4,(undefined7)uStack_a0);
    uStack_b0 = CONCAT35(uStack_b0._5_3_,0x6c736c67);
  }
  FUN_10a0ee554();
  lVar21 = 0;
  bVar9 = false;
  lVar17 = lVar19 + 0x194;
  iVar3 = *(int *)(lVar19 + 0x494);
  do {
    if (0x56 < *(uint *)(&UNK_10e499998 + lVar21)) goto LAB_10a15b96c;
    bVar9 = (bool)(bVar9 | *(int *)(lVar17 + (ulong)*(uint *)(&UNK_10e499998 + lVar21) * 0x10) != 0)
    ;
    lVar21 = lVar21 + 4;
  } while (lVar21 != 0x18);
  lVar21 = 0;
  bVar10 = false;
  do {
    if (0x56 < *(uint *)(&UNK_10e4999b0 + lVar21)) goto LAB_10a15b96c;
    bVar10 = (bool)(bVar10 | *(int *)(lVar17 + (ulong)*(uint *)(&UNK_10e4999b0 + lVar21) * 0x10) !=
                             0);
    lVar21 = lVar21 + 4;
  } while (lVar21 != 0x70);
  lVar21 = 0;
  bVar11 = true;
  do {
    if (0x56 < *(uint *)(&UNK_10e499a20 + lVar21)) goto LAB_10a15b96c;
    bVar11 = (bool)(bVar11 & *(int *)(lVar17 + (ulong)*(uint *)(&UNK_10e499a20 + lVar21) * 0x10) !=
                             0);
    lVar21 = lVar21 + 4;
  } while (lVar21 != 0x28);
  iVar4 = *(int *)(lVar19 + 0x514);
  iVar5 = *(int *)(lVar19 + 0x504);
  iVar6 = *(int *)(lVar19 + 0x534);
  iVar7 = *(int *)(lVar19 + 0x524);
  if (((bool)(iVar3 != 0 | bVar9)) &&
     ((*(int *)(lVar19 + 0x734) == 6 || (*(int *)(lVar19 + 0x734) == 1)))) {
    pcVar15 = (char *)0x1138365c8;
    FUN_10a08f69c();
    if (*pcVar15 == '\x01') {
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        func_0x00010ae06f08(1,4,&UNK_10f63f48b,&UNK_10f63f4c9,0x164,&UNK_10f63f5f2);
      }
      bVar16 = 0;
      goto LAB_10a15b804;
    }
  }
  bVar16 = 2;
  if (iVar3 != 0) {
    bVar16 = 3;
  }
  if (!bVar9) {
    bVar16 = iVar3 != 0;
  }
LAB_10a15b804:
  bVar2 = bVar16 | 4;
  if (!bVar10) {
    bVar2 = bVar16;
  }
  bVar16 = bVar2 | 0x20;
  if (!bVar11) {
    bVar16 = bVar2;
  }
  if (iVar4 != 0 || iVar5 != 0) {
    bVar16 = bVar16 | 8;
  }
  if (iVar6 != 0 || iVar7 != 0) {
    bVar16 = bVar16 | 0x10;
  }
  ppuStack_90._0_2_ = (ushort)bVar16;
  lVar17 = 0x98;
  __Znwm();
  FUN_10a19465c();
  lVar19 = *plVar24;
  *plVar24 = lVar17;
  if (lVar19 != 0) {
    FUN_10a1944f0(plVar24);
    lVar17 = *plVar24;
  }
  if ((undefined8 **)(lVar17 + 0x18) != &puStack_f8) {
    func_0x00010985e790((undefined8 **)(lVar17 + 0x18),puStack_f8,&uStack_f0);
  }
  func_0x000107c34ee4(&puStack_f8,uStack_f0);
  ppuStack_90 = &plStack_e0;
  FUN_10a0426d8(&ppuStack_90);
  ppuStack_90 = (undefined8 **)&lStack_c8;
  FUN_10a0426d8(&ppuStack_90);
  return param_1;
}



/* Entry: 10a15bb04; end: 10a15bccb;  */

void FUN_10a15bb04(long *param_1,long param_2,char *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&uStack_80,&UNK_10f63f3c6,param_3);
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar1[2] = lStack_70;
    puVar1[1] = uStack_78;
    *puVar1 = uStack_80;
    param_1[1] = (long)(puVar1 + 3);
  }
  else {
    lVar8 = (long)puVar1 - *param_1;
    uVar6 = (lVar8 >> 3) * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar6) {
      FUN_10a05a0c0();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a15bcb0);
      (*pcVar2)();
    }
    lVar5 = param_1[2] - *param_1 >> 3;
    uVar7 = lVar5 * 0x5555555555555556;
    if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
      uVar7 = uVar6;
    }
    if (0x555555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar7 = 0xaaaaaaaaaaaaaaa;
    }
    plVar3 = param_1;
    plStack_48 = param_1;
    FUN_10a05a0d4();
    puVar1 = (undefined8 *)((long)plVar3 + lVar8);
    puVar1[2] = lStack_70;
    puVar1[1] = uStack_78;
    *puVar1 = uStack_80;
    uStack_78 = 0;
    lStack_70 = 0;
    uStack_80 = 0;
    lVar8 = (long)puVar1 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    lStack_68 = *param_1;
    *param_1 = lVar8;
    param_1[1] = (long)(puVar1 + 3);
    lStack_50 = param_1[2];
    param_1[2] = (long)(plVar3 + uVar7 * 3);
    lStack_60 = lStack_68;
    lStack_58 = lStack_68;
    func_0x000107c31938(&lStack_68);
    param_1[1] = (long)(puVar1 + 3);
    if (lStack_70 < 0) {
      __ZdlPv(uStack_80);
    }
  }
  if (param_3[0x17] < '\0') {
    if (*(long *)(param_3 + 8) != 1) goto LAB_10a15bc68;
    pcVar4 = *(char **)param_3;
  }
  else {
    pcVar4 = param_3;
    if (param_3[0x17] != '\x01') goto LAB_10a15bc68;
  }
  if (*pcVar4 == '/') {
    return;
  }
LAB_10a15bc68:
  uVar6 = *(ulong *)(param_2 + 8);
  if (uVar6 < *(ulong *)(param_2 + 0x10)) {
    FUN_10a0cf46c();
    lVar8 = uVar6 + 0x18;
  }
  else {
    lVar8 = param_2;
    func_0x000107c281ec(param_2,param_3);
  }
  *(long *)(param_2 + 8) = lVar8;
  return;
}



/* Entry: 10a15bccc; end: 10a15bcd3;  */

undefined8 FUN_10a15bccc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10a15bcd4; end: 10a15bd2b;  */

void FUN_10a15bcd4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x4290;
  __Znwm();
  FUN_10abb393c();
  *param_1 = uVar1;
  return;
}



/* Entry: 10a15bd2c; end: 10a15c14f;  */

void FUN_10a15bd2c(long *param_1,long param_2,long param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_288 [8];
  long lStack_280;
  long lStack_278;
  long alStack_268 [3];
  long alStack_250 [3];
  long alStack_238 [3];
  long alStack_220 [3];
  undefined1 auStack_208 [8];
  long lStack_200;
  long lStack_1f8;
  long *aplStack_70 [2];
  
  lVar6 = param_2;
  FUN_10a08fd8c();
  if ((((int)lVar6 == 0) && (*(long *)(param_2 + 0x10) != 0)) &&
     (*(int *)(*(long *)(param_2 + 0x10) + 0x734) == 1)) {
    lVar7 = *param_4;
    lVar6 = (long)*(char *)(lVar7 + 0x6f);
    if (lVar6 < 0) {
      lVar5 = *(long *)(lVar7 + 0x58);
      lVar6 = *(long *)(lVar7 + 0x60);
    }
    else {
      lVar5 = lVar7 + 0x58;
    }
    func_0x000109237818(lVar5,lVar6);
    if (199 < (uint)lVar5) {
      lVar7 = *param_4;
      lVar6 = (long)*(char *)(lVar7 + 0x6f);
      if (lVar6 < 0) {
        lVar5 = *(long *)(lVar7 + 0x58);
        lVar6 = *(long *)(lVar7 + 0x60);
      }
      else {
        lVar5 = lVar7 + 0x58;
      }
      func_0x000109237af0(auStack_208,lVar5,lVar6);
      if (lStack_200 == lStack_1f8) {
        func_0x00010923ff08(auStack_208);
      }
      else {
        uVar10 = 0;
        lVar6 = lStack_200;
        do {
          func_0x000107c2ac14(auStack_288,lVar6);
          if (lStack_280 == lStack_278) {
            plVar8 = alStack_268;
            FUN_10a15c150();
            uVar10 = (uint)plVar8 | uVar10;
          }
          else {
            uVar10 = 1;
            plVar8 = (long *)0x1;
          }
          aplStack_70[0] = alStack_220;
          func_0x000107c2b0d8(aplStack_70);
          aplStack_70[0] = alStack_238;
          func_0x000107c2b0d0(aplStack_70);
          aplStack_70[0] = alStack_250;
          func_0x000107c2b0cc(aplStack_70);
          aplStack_70[0] = alStack_268;
          func_0x000107c2b0c8(aplStack_70);
          aplStack_70[0] = &lStack_280;
          func_0x000107c2b0c0(aplStack_70);
        } while ((((ulong)plVar8 & 1) == 0) && (lVar6 = lVar6 + 0x80, lVar6 != lStack_1f8));
        func_0x00010923ff08(auStack_208);
        if ((uVar10 & 1) != 0) goto LAB_10a15bd60;
      }
    }
    puVar3 = (undefined8 *)0x40;
    __Znwm();
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_110baa410;
    puVar9 = puVar3 + 3;
    FUN_10ab93f08(puVar9,param_4,1);
  }
  else {
LAB_10a15bd60:
    puVar3 = (undefined8 *)0x1b8;
    __Znwm();
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar9 = puVar3 + 3;
    *puVar9 = &PTR_FUN_110baa260;
    *puVar3 = &PTR_DAT_110ba9d28;
    lVar6 = *param_4;
    puVar3[5] = param_4[1];
    puVar3[4] = lVar6;
    if (param_4[1] != 0) {
      plVar8 = (long *)(param_4[1] + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = *plVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lVar6 = *(long *)(param_2 + 0x10);
    lVar7 = *(long *)(param_2 + 0x18);
    puVar3[8] = lVar6;
    puVar3[3] = &PTR_FUN_110ba8f48;
    puVar3[6] = 0;
    puVar3[7] = param_3;
    puVar3[9] = lVar7;
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = *plVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uVar11 = *(undefined8 *)(param_2 + 0x38);
    puVar3[0xb] = *(undefined8 *)(param_2 + 0x40);
    puVar3[10] = uVar11;
    if (*(long *)(param_2 + 0x40) != 0) {
      plVar8 = (long *)(*(long *)(param_2 + 0x40) + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = *plVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    puVar3[0x13] = 0;
    puVar3[0x12] = 0;
    puVar3[0x19] = 0;
    puVar3[0x18] = 0;
    *(undefined4 *)((long)puVar3 + 0xdc) = 0;
    *(undefined1 *)(puVar3 + 0x1c) = 0;
    *(undefined8 *)((long)puVar3 + 0xec) = 0;
    *(undefined8 *)((long)puVar3 + 0xe4) = 0;
    *(undefined8 *)((long)puVar3 + 0xfc) = 0;
    *(undefined8 *)((long)puVar3 + 0xf4) = 0;
    *(undefined4 *)((long)puVar3 + 0x103) = 0;
    puVar3[0x22] = 0;
    puVar3[0x23] = 0;
    puVar3[0x21] = 0;
    *(undefined2 *)(puVar3 + 0x24) = 0;
    puVar3[0x26] = 0x32aaaba7;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[0xf] = 0;
    puVar3[0xe] = 0;
    puVar3[0x11] = 0;
    puVar3[0x10] = 0;
    puVar3[0x15] = 0;
    puVar3[0x14] = 0;
    puVar3[0x17] = 0;
    puVar3[0x16] = 0;
    *(undefined8 *)((long)puVar3 + 0xd1) = 0;
    *(undefined8 *)((long)puVar3 + 0xc9) = 0;
    puVar3[0x2c] = 0;
    puVar3[0x2b] = 0;
    puVar3[0x2a] = 0;
    puVar3[0x29] = 0;
    puVar3[0x28] = 0;
    puVar3[0x27] = 0;
    puVar3[0x2d] = 0;
    puVar3[0x2e] = 0x32aaaba7;
    puVar3[0x30] = 0;
    puVar3[0x2f] = 0;
    puVar3[0x32] = 0;
    puVar3[0x31] = 0;
    puVar3[0x34] = 0;
    puVar3[0x33] = 0;
    puVar3[0x36] = 0;
    puVar3[0x35] = 0;
    puVar3[0x25] = *(undefined8 *)(param_3 + 0x278);
    uVar10 = *(uint *)(lVar6 + 0x734);
    uVar4 = 1;
    FUN_10a303694();
    uVar11 = *(undefined8 *)(uVar4 + 0x230);
    *(undefined8 *)((long)puVar3 + 0x11c) = *(undefined8 *)(uVar4 + 0x238);
    *(undefined8 *)((long)puVar3 + 0x114) = uVar11;
    uVar13 = *(undefined8 *)(uVar4 + 0x1fc);
    uVar12 = *(undefined8 *)(uVar4 + 500);
    uVar11 = *(undefined8 *)(uVar4 + 0x204);
    puVar3[0x1e] = *(undefined8 *)(uVar4 + 0x20c);
    puVar3[0x1d] = uVar11;
    uVar11 = *(undefined8 *)(uVar4 + 0x214);
    uVar15 = *(undefined8 *)(uVar4 + 0x22c);
    uVar14 = *(undefined8 *)(uVar4 + 0x224);
    puVar3[0x20] = *(undefined8 *)(uVar4 + 0x21c);
    puVar3[0x1f] = uVar11;
    puVar3[0x22] = uVar15;
    puVar3[0x21] = uVar14;
    puVar3[0x1c] = uVar13;
    puVar3[0x1b] = uVar12;
    FUN_10a3048cc();
    puVar3[6] = uVar4;
    if ((uVar10 & 0xfffffffe) == 2) {
      *(undefined1 *)(puVar3 + 0x1c) = 0;
      *(undefined2 *)((long)puVar3 + 0x103) = 0;
      FUN_10a08fd8c();
      if ((uVar4 & 0xa0) != 0) {
        FUN_10a3ca004();
        lVar6 = *(long *)(uVar4 + 0x58);
        if (lVar6 == 0) {
          FUN_10a3ca05c(uVar4,4);
          lVar6 = *(long *)(uVar4 + 0x58);
        }
        puVar3[0x36] = *(undefined8 *)(lVar6 + 0x278);
      }
    }
  }
  *param_1 = (long)puVar9;
  param_1[1] = (long)puVar3;
  return;
}



/* Entry: 10a15c150; end: 10a15c1bf;  */

uint FUN_10a15c150(long *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined1 uStack_39;
  long lStack_38;
  
  lVar3 = *param_1;
  lVar1 = param_1[1];
  if (lVar3 == lVar1) {
    uVar2 = 0;
  }
  else {
    do {
      lStack_38 = lVar3;
      uVar2 = 0x10ba99b0;
      FUN_10a194850(&PTR_DAT_110ba99b0,&PTR_DAT_110ba99f8,&lStack_38,&uStack_39);
      lVar3 = lVar3 + 0x40;
    } while (uVar2 != 0 && lVar3 != lVar1);
    uVar2 = uVar2 ^ 1;
  }
  return uVar2;
}



/* Entry: 10a15c1c0; end: 10a15c1ff;  */

undefined8 FUN_10a15c1c0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x168;
  __Znwm(0x168);
  FUN_10aba1d58();
  return uVar1;
}



/* Entry: 10a15c200; end: 10a15c207;  */

long * FUN_10a15c200(long param_1,int *param_2)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  uint uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  plVar6 = (long *)(param_1 + 0x10);
  uVar11 = param_2[6];
  uVar12 = (ulong)uVar11;
  if (((uVar11 ^ 0xffffffff) & 0xc0) == 0) {
    plStack_78 = *(long **)(param_2 + 2);
    uStack_80 = *(undefined8 *)param_2;
    uStack_70 = *(undefined8 *)(param_2 + 4);
    uStack_58 = *(undefined8 *)(param_2 + 10);
    uStack_60 = *(undefined8 *)(param_2 + 8);
    _uStack_68 = CONCAT44(1,(int)*(undefined8 *)(param_2 + 6));
    FUN_10a15c208(plVar6,&uStack_80);
    plVar5 = (long *)0xe0;
    __Znwm();
    iVar4 = param_2[7];
    lVar13 = plVar6[1];
    plVar5[2] = plVar6[2];
    plVar5[1] = lVar13;
    lVar13 = plVar6[3];
    plVar5[4] = plVar6[4];
    plVar5[3] = lVar13;
    uVar14 = *(undefined8 *)((long)plVar6 + 0x24);
    *(undefined8 *)((long)plVar5 + 0x2c) = *(undefined8 *)((long)plVar6 + 0x2c);
    *(undefined8 *)((long)plVar5 + 0x24) = uVar14;
    lVar13 = plVar6[9];
    plVar5[10] = plVar6[10];
    plVar5[9] = lVar13;
    plVar6[9] = 0;
    plVar6[10] = 0;
    lVar13 = plVar6[0xb];
    plVar5[0xc] = plVar6[0xc];
    plVar5[0xb] = lVar13;
    uVar14 = *(undefined8 *)((long)plVar6 + 0x85);
    *(undefined8 *)((long)plVar5 + 0x8d) = *(undefined8 *)((long)plVar6 + 0x8d);
    *(undefined8 *)((long)plVar5 + 0x85) = uVar14;
    lVar13 = plVar6[0xf];
    plVar5[0x10] = plVar6[0x10];
    plVar5[0xf] = lVar13;
    lVar13 = plVar6[0xd];
    plVar5[0xe] = plVar6[0xe];
    plVar5[0xd] = lVar13;
    lVar13 = plVar6[0x13];
    plVar5[0x14] = plVar6[0x14];
    plVar5[0x13] = lVar13;
    plVar6[0x13] = 0;
    plVar6[0x14] = 0;
    *(int *)(plVar5 + 0x15) = (int)plVar6[0x15];
    lVar15 = plVar6[0x17];
    lVar13 = plVar6[0x16];
    lVar17 = plVar6[0x19];
    lVar16 = plVar6[0x18];
    plVar6[0x16] = 0;
    plVar6[0x17] = 0;
    plVar5[0x17] = lVar15;
    plVar5[0x16] = lVar13;
    plVar5[0x19] = lVar17;
    plVar5[0x18] = lVar16;
    plVar6[0x18] = 0;
    plVar6[0x19] = 0;
    plVar5[0x1a] = plVar6[0x1a];
    *plVar5 = (long)&PTR_DAT_110ba9750;
    plVar5[7] = (long)&PTR_FUN_110ba9858;
    plVar5[8] = (long)&PTR_FUN_110ba9880;
    *(int *)(plVar5 + 0x1b) = iVar4;
    return plVar5;
  }
  plVar5 = plVar6;
  if (*(int *)(*plVar6 + 0x734) == 2 && *param_2 == 0) {
    uVar10 = param_2[8];
    if ((uVar11 >> 1 & 1) == 0) goto LAB_10a15c440;
    if (uVar10 != 0 && uVar10 != 3) goto LAB_10a15c440;
    plVar6 = (long *)0x188;
    __Znwm(0x188);
    FUN_10ad6f9f4();
    return plVar6;
  }
  do {
    uVar11 = (uint)uVar12;
    iVar4 = (int)plVar5;
    if (param_2[4] - 0x20U < 3) {
      FUN_10ad4bd78();
      if (iVar4 < 3000) {
        return (long *)0x0;
      }
      uVar11 = param_2[6];
    }
    if (((uVar11 >> 4 & 1) != 0) && (param_2[8] == 1)) {
      uVar12 = (ulong)(uint)param_2[4];
      FUN_10ab79b88(uVar12);
      FUN_10ad55970(&uStack_80,param_2[1],param_2[2],uVar12,0);
      plVar6 = (long *)0xd8;
      __Znwm();
      FUN_10a169a1c();
      *(int *)(plVar6 + 0x1a) = param_2[8];
      if (plStack_78 == (long *)0x0) {
        return plVar6;
      }
      plVar5 = plStack_78 + 1;
      do {
        lVar13 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_10a15c5a4;
    }
    FUN_10a16906c(&uStack_80,plVar6,param_2);
    uVar11 = param_2[6];
    uVar12 = 0;
    plVar5 = (long *)0xd8;
    __Znwm();
    uVar10 = (uint)*(byte *)(param_2 + 10);
    FUN_10a169668();
    lVar13 = *(long *)(param_2 + 0xc);
    if ((uVar11 >> 2 & 1) == 0) {
      if (lVar13 != 0) {
        (**(code **)(*plVar5 + 0x98))(plVar5,lVar13,0,param_2[4]);
      }
LAB_10a15c4a8:
      ppuVar1 = &PTR_DAT_110ae4700 + (ulong)uStack_64 * 4;
      if (0x56 < uStack_64) {
        ppuVar1 = &PTR_DAT_110ae4700;
      }
      iVar4 = param_2[8];
      if ((*(byte *)(ppuVar1 + 3) < 2 && *(byte *)((long)ppuVar1 + 0x19) < 2) && (iVar4 != 3)) {
        plVar7 = plVar5;
        (**(code **)(*plVar5 + 0x28))();
        plVar8 = plVar5;
        (**(code **)(*plVar5 + 0x30))(plVar5);
        plVar9 = plVar5;
        (**(code **)(*plVar5 + 0x50))(plVar5);
        FUN_10a16954c(plVar7,plVar8,plVar9,*plVar6,0);
        iVar4 = param_2[8];
        if ((int)plVar7 == 0) {
          iVar4 = 1;
        }
      }
      *(int *)(plVar5 + 0x1a) = iVar4;
      return plVar5;
    }
    if (lVar13 == 0) goto LAB_10a15c4a8;
    plVar5 = (long *)&UNK_10f63fba2;
    FUN_10a00946c();
LAB_10a15c440:
    if (((uint)uVar12 >> 9 & 1) != 0) {
      uVar12 = (ulong)(uint)param_2[4];
      FUN_10ab79b88(uVar12);
      FUN_10ad55970(&uStack_80,param_2[1],param_2[2],uVar12,*plVar6);
      plVar6 = (long *)0xd8;
      __Znwm();
      FUN_10a169a1c();
      *(int *)(plVar6 + 0x1a) = param_2[8];
      if (plStack_78 == (long *)0x0) {
        return plVar6;
      }
      plVar5 = plStack_78 + 1;
      do {
        lVar13 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_10a15c5a4;
    }
  } while ((((uint)uVar12 >> 4 & 1) == 0) || (uVar10 != 1));
  plVar6 = (long *)(ulong)(uint)param_2[1];
  uStack_80 = 0;
  plStack_78 = (long *)0x0;
  FUN_10ad6fe20(plVar6,param_2[2],param_2[4]);
  if (plStack_78 == (long *)0x0) {
    return plVar6;
  }
  plVar5 = plStack_78 + 1;
  do {
    lVar13 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar13 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_10a15c5a4:
  plVar5 = plStack_78;
  if (lVar13 != 0) {
    return plVar6;
  }
  (**(code **)(*plStack_78 + 0x10))(plStack_78);
  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  return plVar6;
}



/* Entry: 10a15c208; end: 10a15c627;  */

long * FUN_10a15c208(long *param_1,int *param_2)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  uint uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar10 = param_2[6];
  uVar11 = (ulong)uVar10;
  if (((uVar10 ^ 0xffffffff) & 0xc0) == 0) {
    plStack_78 = *(long **)(param_2 + 2);
    uStack_80 = *(undefined8 *)param_2;
    uStack_70 = *(undefined8 *)(param_2 + 4);
    uStack_58 = *(undefined8 *)(param_2 + 10);
    uStack_60 = *(undefined8 *)(param_2 + 8);
    _uStack_68 = CONCAT44(1,(int)*(undefined8 *)(param_2 + 6));
    FUN_10a15c208(param_1,&uStack_80);
    plVar5 = (long *)0xe0;
    __Znwm();
    iVar4 = param_2[7];
    lVar12 = param_1[1];
    plVar5[2] = param_1[2];
    plVar5[1] = lVar12;
    lVar12 = param_1[3];
    plVar5[4] = param_1[4];
    plVar5[3] = lVar12;
    uVar13 = *(undefined8 *)((long)param_1 + 0x24);
    *(undefined8 *)((long)plVar5 + 0x2c) = *(undefined8 *)((long)param_1 + 0x2c);
    *(undefined8 *)((long)plVar5 + 0x24) = uVar13;
    lVar12 = param_1[9];
    plVar5[10] = param_1[10];
    plVar5[9] = lVar12;
    param_1[9] = 0;
    param_1[10] = 0;
    lVar12 = param_1[0xb];
    plVar5[0xc] = param_1[0xc];
    plVar5[0xb] = lVar12;
    uVar13 = *(undefined8 *)((long)param_1 + 0x85);
    *(undefined8 *)((long)plVar5 + 0x8d) = *(undefined8 *)((long)param_1 + 0x8d);
    *(undefined8 *)((long)plVar5 + 0x85) = uVar13;
    lVar12 = param_1[0xf];
    plVar5[0x10] = param_1[0x10];
    plVar5[0xf] = lVar12;
    lVar12 = param_1[0xd];
    plVar5[0xe] = param_1[0xe];
    plVar5[0xd] = lVar12;
    lVar12 = param_1[0x13];
    plVar5[0x14] = param_1[0x14];
    plVar5[0x13] = lVar12;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    *(int *)(plVar5 + 0x15) = (int)param_1[0x15];
    lVar14 = param_1[0x17];
    lVar12 = param_1[0x16];
    lVar16 = param_1[0x19];
    lVar15 = param_1[0x18];
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    plVar5[0x17] = lVar14;
    plVar5[0x16] = lVar12;
    plVar5[0x19] = lVar16;
    plVar5[0x18] = lVar15;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    plVar5[0x1a] = param_1[0x1a];
    *plVar5 = (long)&PTR_DAT_110ba9750;
    plVar5[7] = (long)&PTR_FUN_110ba9858;
    plVar5[8] = (long)&PTR_FUN_110ba9880;
    *(int *)(plVar5 + 0x1b) = iVar4;
    return plVar5;
  }
  plVar5 = param_1;
  if (*(int *)(*param_1 + 0x734) == 2 && *param_2 == 0) {
    uVar9 = param_2[8];
    if ((uVar10 >> 1 & 1) == 0) goto LAB_10a15c440;
    if (uVar9 != 0 && uVar9 != 3) goto LAB_10a15c440;
    plVar5 = (long *)0x188;
    __Znwm(0x188);
    FUN_10ad6f9f4();
    return plVar5;
  }
  do {
    uVar10 = (uint)uVar11;
    iVar4 = (int)plVar5;
    if (param_2[4] - 0x20U < 3) {
      FUN_10ad4bd78();
      if (iVar4 < 3000) {
        return (long *)0x0;
      }
      uVar10 = param_2[6];
    }
    if (((uVar10 >> 4 & 1) != 0) && (param_2[8] == 1)) {
      uVar11 = (ulong)(uint)param_2[4];
      FUN_10ab79b88(uVar11);
      FUN_10ad55970(&uStack_80,param_2[1],param_2[2],uVar11,0);
      plVar5 = (long *)0xd8;
      __Znwm();
      FUN_10a169a1c();
      *(int *)(plVar5 + 0x1a) = param_2[8];
      if (plStack_78 == (long *)0x0) {
        return plVar5;
      }
      plVar6 = plStack_78 + 1;
      do {
        lVar12 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_10a15c5a4;
    }
    FUN_10a16906c(&uStack_80,param_1,param_2);
    uVar10 = param_2[6];
    uVar11 = 0;
    plVar5 = (long *)0xd8;
    __Znwm();
    uVar9 = (uint)*(byte *)(param_2 + 10);
    FUN_10a169668();
    lVar12 = *(long *)(param_2 + 0xc);
    if ((uVar10 >> 2 & 1) == 0) {
      if (lVar12 != 0) {
        (**(code **)(*plVar5 + 0x98))(plVar5,lVar12,0,param_2[4]);
      }
LAB_10a15c4a8:
      ppuVar1 = &PTR_DAT_110ae4700 + (ulong)uStack_64 * 4;
      if (0x56 < uStack_64) {
        ppuVar1 = &PTR_DAT_110ae4700;
      }
      iVar4 = param_2[8];
      if ((*(byte *)(ppuVar1 + 3) < 2 && *(byte *)((long)ppuVar1 + 0x19) < 2) && (iVar4 != 3)) {
        plVar6 = plVar5;
        (**(code **)(*plVar5 + 0x28))();
        plVar7 = plVar5;
        (**(code **)(*plVar5 + 0x30))(plVar5);
        plVar8 = plVar5;
        (**(code **)(*plVar5 + 0x50))(plVar5);
        FUN_10a16954c(plVar6,plVar7,plVar8,*param_1,0);
        iVar4 = param_2[8];
        if ((int)plVar6 == 0) {
          iVar4 = 1;
        }
      }
      *(int *)(plVar5 + 0x1a) = iVar4;
      return plVar5;
    }
    if (lVar12 == 0) goto LAB_10a15c4a8;
    plVar5 = (long *)&UNK_10f63fba2;
    FUN_10a00946c();
LAB_10a15c440:
    if (((uint)uVar11 >> 9 & 1) != 0) {
      uVar11 = (ulong)(uint)param_2[4];
      FUN_10ab79b88(uVar11);
      FUN_10ad55970(&uStack_80,param_2[1],param_2[2],uVar11,*param_1);
      plVar5 = (long *)0xd8;
      __Znwm();
      FUN_10a169a1c();
      *(int *)(plVar5 + 0x1a) = param_2[8];
      if (plStack_78 == (long *)0x0) {
        return plVar5;
      }
      plVar6 = plStack_78 + 1;
      do {
        lVar12 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_10a15c5a4;
    }
  } while ((((uint)uVar11 >> 4 & 1) == 0) || (uVar9 != 1));
  plVar5 = (long *)(ulong)(uint)param_2[1];
  uStack_80 = 0;
  plStack_78 = (long *)0x0;
  FUN_10ad6fe20(plVar5,param_2[2],param_2[4]);
  if (plStack_78 == (long *)0x0) {
    return plVar5;
  }
  plVar6 = plStack_78 + 1;
  do {
    lVar12 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar12 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_10a15c5a4:
  plVar6 = plStack_78;
  if (lVar12 != 0) {
    return plVar5;
  }
  (**(code **)(*plStack_78 + 0x10))(plStack_78);
  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  return plVar5;
}



/* Entry: 10a15c628; end: 10a15c62f;  */

long * FUN_10a15c628(long param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  code *pcVar9;
  uint uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  int iVar16;
  long *plVar17;
  ulong uVar18;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined8 uStack_104;
  undefined4 uStack_fc;
  undefined *puStack_f8;
  undefined4 uStack_f0;
  undefined1 uStack_e9;
  long *plStack_e8;
  long *plStack_e0;
  int iStack_d4;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 *puStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  
  plVar12 = (long *)(param_1 + 0x10);
  uStack_c0 = &UNK_10f63fae9;
  uStack_b8 = 0x1b;
  if (*plVar12 == 0) {
LAB_10a15cb9c:
    FUN_10a0edfc4(&uStack_c0);
LAB_10a15cba4:
    FUN_10a0edfc4(&uStack_118);
  }
  else {
    plVar11 = (long *)*param_2;
    uStack_c0 = &UNK_10f63fb05;
    uStack_b8 = 0x1c;
    if (plVar11 == (long *)0x0) goto LAB_10a15cb9c;
    (**(code **)(*plVar11 + 0x30))();
    uStack_b8 = *(undefined8 *)((long)plVar11 + 0x2c);
    uStack_c0 = *(undefined **)((long)plVar11 + 0x24);
    uStack_a8 = *(undefined8 *)((long)plVar11 + 0x3c);
    uStack_b0 = *(ulong *)((long)plVar11 + 0x34);
    uStack_98 = *(undefined8 *)((long)plVar11 + 0x4c);
    uStack_a0 = *(undefined8 *)((long)plVar11 + 0x44);
    uStack_90 = *(undefined4 *)((long)plVar11 + 0x54);
    plVar14 = (long *)plVar11[3];
    uStack_118 = 0xf63fb22;
    uStack_114 = 1;
    uStack_110 = 0x22;
    uStack_10c = 0;
    if (plVar14 == (long *)0x0) goto LAB_10a15cba4;
    plVar17 = (long *)*plVar12;
    if (plVar14 == plVar17) {
      plVar12 = (long *)0xd8;
      __Znwm();
      FUN_10a169a1c();
      param_2 = (long *)*param_2;
      *(int *)(plVar12 + 6) = (int)param_2[10];
      ___dynamic_cast(param_2,&PTR_DAT_110bc45d8,&PTR_DAT_110ba0e18,0xfffffffffffffffe);
      if (param_2 != (long *)0x0) {
        (**(code **)(*param_2 + 0x68))();
        *(int *)(plVar12 + 0x1a) = (int)param_2;
        return plVar12;
      }
      if (1 < uStack_b8._4_4_) {
        return plVar12;
      }
      *(undefined4 *)(plVar12 + 0x1a) = 1;
      return plVar12;
    }
    iVar5 = *(int *)((long)plVar14 + 0x734);
    iVar6 = *(int *)((long)plVar17 + 0x734);
    uStack_d0 = *(undefined8 *)((long)plVar11 + 0x24);
    uStack_c8 = *(undefined4 *)((long)plVar11 + 0x2c);
    if (((uint)uStack_b0 & 0xfffffffe) == 2) {
      uStack_c8 = 1;
    }
    uVar10 = (uint)&uStack_d0;
    func_0x000109296754();
    uStack_b8 = CONCAT44(uVar10,(undefined4)uStack_b8);
    if (iVar5 == iVar6) {
      plVar14 = (long *)0x0;
      bVar1 = 1 < uVar10;
      goto LAB_10a15c93c;
    }
    iStack_d4 = 1;
    iVar16 = uStack_a8._4_4_;
    iVar8 = uStack_a8._4_4_;
    if ((uStack_a8._4_4_ != 3) && (iVar8 = iStack_d4, uStack_a8._4_4_ != 4)) {
      if (uStack_a8._4_4_ != 0x27) {
        FUN_10a0ee900(&uStack_118,&UNK_10f63fb45,0x28);
        FUN_10a0029c0(&uStack_118);
        goto LAB_10a15cbd8;
      }
      iVar8 = 5;
    }
    iStack_d4 = iVar8;
    uStack_118 = (undefined4)*(undefined8 *)(*param_2 + 0x18);
    uStack_114 = (undefined4)((ulong)*(undefined8 *)(*param_2 + 0x18) >> 0x20);
    uStack_e9 = 0;
    FUN_10a1958ac(&plStack_e8,&puStack_88,&uStack_118,&iStack_d4,&uStack_e9);
    plVar14 = (long *)*param_2;
    (**(code **)(*plVar14 + 0x10))
              (plVar14,plStack_e8[5],plStack_e8[3],0,*(undefined4 *)((long)plVar14 + 0x1c));
    if (iVar16 == 3) {
      iVar16 = 4;
      uStack_a8 = CONCAT44(4,(undefined4)uStack_a8);
      FUN_10a1b3170(plStack_e8);
    }
    uStack_b0 = uStack_b0 | 0x2000000000;
    plVar14 = (long *)0xd8;
    __Znwm();
    FUN_10a169668();
    uVar18 = plStack_e8[8];
    if (uVar18 == 0) {
      uVar18 = plStack_e8[3] * (long)*(int *)((long)plStack_e8 + 0x14);
    }
    uVar13 = (ulong)uStack_c0 & 0xffffffff;
    FUN_109fc8e58(uVar13,uStack_c0._4_4_,iVar16);
    FUN_10a0ee900(&uStack_118,&UNK_10f63fb6e,0x33);
    uStack_80 = (long)uStack_104._3_1_;
    if (uStack_80 < 0) {
      puStack_88 = (undefined4 *)CONCAT44(uStack_114,uStack_118);
      uStack_80 = CONCAT44(uStack_10c,uStack_110);
      if (uVar18 <= uVar13) {
        __ZdlPv();
        goto LAB_10a15c8d0;
      }
    }
    else {
      puStack_88 = &uStack_118;
      if (uVar18 <= uVar13) {
LAB_10a15c8d0:
        (**(code **)(*plVar14 + 0x98))(plVar14,plStack_e8[5],0,0);
        plVar17 = plStack_e0;
        if (plStack_e0 != (long *)0x0) {
          plVar2 = plStack_e0 + 1;
          do {
            lVar15 = *plVar2;
            cVar7 = '\x01';
            bVar1 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar1) {
              *plVar2 = lVar15 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
        if (uStack_b8._4_4_ < 2) {
          return plVar14;
        }
        plVar17 = (long *)*plVar12;
        bVar1 = true;
LAB_10a15c93c:
        func_0x00010a08f140();
        uVar3 = *(undefined8 *)(*plVar17 + 0x10);
        uVar4 = *(undefined8 *)(*plVar17 + 0x18);
        __ZNSt3__115recursive_mutex4lockEv(uVar4);
        FUN_10a012fec(&plStack_e8,*plVar12,uVar3);
        plVar12 = plStack_e8;
        (**(code **)(*plStack_e8 + 0x48))();
        (**(code **)(*plVar12 + 0x48))();
        if (iVar5 == iVar6) {
          uStack_b0 = uStack_b0 | 0x2000000000;
          plVar14 = (long *)0xd8;
          __Znwm();
          FUN_10a169668();
          plVar17 = plVar14;
          (**(code **)(*plVar14 + 0xb8))(plVar14);
          uStack_10c = 0;
          uStack_108 = 0;
          uStack_114 = 0;
          uStack_110 = 0;
          uStack_fc = 0;
          uStack_104 = 0;
          puStack_f8 = uStack_c0;
          uStack_f0 = (undefined4)uStack_b8;
          uStack_118 = 0;
          FUN_10a168824(plVar14,plVar12,7,0,0x400,1,0x100,1);
          if (*(int *)((long)plVar11 + 0x34) == 3) {
            iStack_64 = *(int *)((long)plVar11 + 0x2c) * 6;
          }
          else if (*(int *)((long)plVar11 + 0x34) == 2) {
            iStack_64 = *(int *)((long)plVar11 + 0x2c);
          }
          else {
            iStack_64 = 1;
          }
          puStack_88 = (undefined4 *)0x20000006000;
          uStack_80 = CONCAT44(6,*(undefined4 *)(*param_2 + 0x50));
          uStack_6c = (undefined4)plVar11[6];
          uStack_70 = 0;
          uStack_68 = 0;
          plStack_78 = plVar11;
          (**(code **)(*plVar12 + 0x38))(plVar12,0x1000,0x100,0,0,0,0,0,&puStack_88,1);
          *(undefined4 *)(*param_2 + 0x50) = 6;
          (**(code **)(*plVar12 + 0x70))(plVar12,plVar11,plVar17,&uStack_118,1,6,7);
          *(undefined4 *)(plVar14 + 6) = 7;
        }
        if (bVar1) {
          plVar11 = plVar14;
          (**(code **)(*plVar14 + 0xb8))(plVar14);
          (**(code **)(*plVar12 + 0x78))(plVar12,plVar11,(int)plVar14[6],5);
          *(undefined4 *)(plVar14 + 6) = 5;
        }
        (**(code **)(*plVar12 + 0x40))(plVar12);
        FUN_10a08e2f4(plStack_e8);
        if (plStack_e0 != (long *)0x0) {
          plVar12 = plStack_e0 + 1;
          do {
            lVar15 = *plVar12;
            cVar7 = '\x01';
            bVar1 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar1) {
              *plVar12 = lVar15 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e0);
          }
        }
        __ZNSt3__115recursive_mutex6unlockEv(uVar4);
        return plVar14;
      }
    }
  }
  FUN_10a0edfc4(&puStack_88);
LAB_10a15cbd8:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a15cbdc);
  (*pcVar9)();
}



/* Entry: 10a15c630; end: 10a15ccab;  */

long * FUN_10a15c630(long *param_1,long *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  code *pcVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  int iVar15;
  long *plVar16;
  ulong uVar17;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined8 uStack_104;
  undefined4 uStack_fc;
  undefined *puStack_f8;
  undefined4 uStack_f0;
  undefined1 uStack_e9;
  long *plStack_e8;
  long *plStack_e0;
  int iStack_d4;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 *puStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  
  uStack_c0 = &UNK_10f63fae9;
  uStack_b8 = 0x1b;
  if (*param_1 == 0) {
LAB_10a15cb9c:
    FUN_10a0edfc4(&uStack_c0);
LAB_10a15cba4:
    FUN_10a0edfc4(&uStack_118);
  }
  else {
    plVar10 = (long *)*param_2;
    uStack_c0 = &UNK_10f63fb05;
    uStack_b8 = 0x1c;
    if (plVar10 == (long *)0x0) goto LAB_10a15cb9c;
    (**(code **)(*plVar10 + 0x30))();
    uStack_b8 = *(undefined8 *)((long)plVar10 + 0x2c);
    uStack_c0 = *(undefined **)((long)plVar10 + 0x24);
    uStack_a8 = *(undefined8 *)((long)plVar10 + 0x3c);
    uStack_b0 = *(ulong *)((long)plVar10 + 0x34);
    uStack_98 = *(undefined8 *)((long)plVar10 + 0x4c);
    uStack_a0 = *(undefined8 *)((long)plVar10 + 0x44);
    uStack_90 = *(undefined4 *)((long)plVar10 + 0x54);
    plVar13 = (long *)plVar10[3];
    uStack_118 = 0xf63fb22;
    uStack_114 = 1;
    uStack_110 = 0x22;
    uStack_10c = 0;
    if (plVar13 == (long *)0x0) goto LAB_10a15cba4;
    plVar16 = (long *)*param_1;
    if (plVar13 == plVar16) {
      plVar10 = (long *)0xd8;
      __Znwm();
      FUN_10a169a1c();
      param_2 = (long *)*param_2;
      *(int *)(plVar10 + 6) = (int)param_2[10];
      ___dynamic_cast(param_2,&PTR_DAT_110bc45d8,&PTR_DAT_110ba0e18,0xfffffffffffffffe);
      if (param_2 != (long *)0x0) {
        (**(code **)(*param_2 + 0x68))();
        *(int *)(plVar10 + 0x1a) = (int)param_2;
        return plVar10;
      }
      if (1 < uStack_b8._4_4_) {
        return plVar10;
      }
      *(undefined4 *)(plVar10 + 0x1a) = 1;
      return plVar10;
    }
    iVar4 = *(int *)((long)plVar13 + 0x734);
    iVar5 = *(int *)((long)plVar16 + 0x734);
    uStack_d0 = *(undefined8 *)((long)plVar10 + 0x24);
    uStack_c8 = *(undefined4 *)((long)plVar10 + 0x2c);
    if (((uint)uStack_b0 & 0xfffffffe) == 2) {
      uStack_c8 = 1;
    }
    uVar9 = (uint)&uStack_d0;
    func_0x000109296754();
    uStack_b8 = CONCAT44(uVar9,(undefined4)uStack_b8);
    if (iVar4 == iVar5) {
      plVar13 = (long *)0x0;
      bVar1 = 1 < uVar9;
      goto LAB_10a15c93c;
    }
    iStack_d4 = 1;
    iVar15 = uStack_a8._4_4_;
    iVar7 = uStack_a8._4_4_;
    if ((uStack_a8._4_4_ != 3) && (iVar7 = iStack_d4, uStack_a8._4_4_ != 4)) {
      if (uStack_a8._4_4_ != 0x27) {
        FUN_10a0ee900(&uStack_118,&UNK_10f63fb45,0x28);
        FUN_10a0029c0(&uStack_118);
        goto LAB_10a15cbd8;
      }
      iVar7 = 5;
    }
    iStack_d4 = iVar7;
    uStack_118 = (undefined4)*(undefined8 *)(*param_2 + 0x18);
    uStack_114 = (undefined4)((ulong)*(undefined8 *)(*param_2 + 0x18) >> 0x20);
    uStack_e9 = 0;
    FUN_10a1958ac(&plStack_e8,&puStack_88,&uStack_118,&iStack_d4,&uStack_e9);
    plVar13 = (long *)*param_2;
    (**(code **)(*plVar13 + 0x10))
              (plVar13,plStack_e8[5],plStack_e8[3],0,*(undefined4 *)((long)plVar13 + 0x1c));
    if (iVar15 == 3) {
      iVar15 = 4;
      uStack_a8 = CONCAT44(4,(undefined4)uStack_a8);
      FUN_10a1b3170(plStack_e8);
    }
    uStack_b0 = uStack_b0 | 0x2000000000;
    plVar13 = (long *)0xd8;
    __Znwm();
    FUN_10a169668();
    uVar17 = plStack_e8[8];
    if (uVar17 == 0) {
      uVar17 = plStack_e8[3] * (long)*(int *)((long)plStack_e8 + 0x14);
    }
    uVar11 = (ulong)uStack_c0 & 0xffffffff;
    FUN_109fc8e58(uVar11,uStack_c0._4_4_,iVar15);
    FUN_10a0ee900(&uStack_118,&UNK_10f63fb6e,0x33);
    uStack_80 = (long)uStack_104._3_1_;
    if (uStack_80 < 0) {
      puStack_88 = (undefined4 *)CONCAT44(uStack_114,uStack_118);
      uStack_80 = CONCAT44(uStack_10c,uStack_110);
      if (uVar17 <= uVar11) {
        __ZdlPv();
        goto LAB_10a15c8d0;
      }
    }
    else {
      puStack_88 = &uStack_118;
      if (uVar17 <= uVar11) {
LAB_10a15c8d0:
        (**(code **)(*plVar13 + 0x98))(plVar13,plStack_e8[5],0,0);
        plVar16 = plStack_e0;
        if (plStack_e0 != (long *)0x0) {
          plVar12 = plStack_e0 + 1;
          do {
            lVar14 = *plVar12;
            cVar6 = '\x01';
            bVar1 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar1) {
              *plVar12 = lVar14 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
          }
        }
        if (uStack_b8._4_4_ < 2) {
          return plVar13;
        }
        plVar16 = (long *)*param_1;
        bVar1 = true;
LAB_10a15c93c:
        func_0x00010a08f140();
        uVar2 = *(undefined8 *)(*plVar16 + 0x10);
        uVar3 = *(undefined8 *)(*plVar16 + 0x18);
        __ZNSt3__115recursive_mutex4lockEv(uVar3);
        FUN_10a012fec(&plStack_e8,*param_1,uVar2);
        plVar16 = plStack_e8;
        (**(code **)(*plStack_e8 + 0x48))();
        (**(code **)(*plVar16 + 0x48))();
        if (iVar4 == iVar5) {
          uStack_b0 = uStack_b0 | 0x2000000000;
          plVar13 = (long *)0xd8;
          __Znwm();
          FUN_10a169668();
          plVar12 = plVar13;
          (**(code **)(*plVar13 + 0xb8))(plVar13);
          uStack_10c = 0;
          uStack_108 = 0;
          uStack_114 = 0;
          uStack_110 = 0;
          uStack_fc = 0;
          uStack_104 = 0;
          puStack_f8 = uStack_c0;
          uStack_f0 = (undefined4)uStack_b8;
          uStack_118 = 0;
          FUN_10a168824(plVar13,plVar16,7,0,0x400,1,0x100,1);
          if (*(int *)((long)plVar10 + 0x34) == 3) {
            iStack_64 = *(int *)((long)plVar10 + 0x2c) * 6;
          }
          else if (*(int *)((long)plVar10 + 0x34) == 2) {
            iStack_64 = *(int *)((long)plVar10 + 0x2c);
          }
          else {
            iStack_64 = 1;
          }
          puStack_88 = (undefined4 *)0x20000006000;
          uStack_80 = CONCAT44(6,*(undefined4 *)(*param_2 + 0x50));
          uStack_6c = (undefined4)plVar10[6];
          uStack_70 = 0;
          uStack_68 = 0;
          plStack_78 = plVar10;
          (**(code **)(*plVar16 + 0x38))(plVar16,0x1000,0x100,0,0,0,0,0,&puStack_88,1);
          *(undefined4 *)(*param_2 + 0x50) = 6;
          (**(code **)(*plVar16 + 0x70))(plVar16,plVar10,plVar12,&uStack_118,1,6,7);
          *(undefined4 *)(plVar13 + 6) = 7;
        }
        if (bVar1) {
          plVar10 = plVar13;
          (**(code **)(*plVar13 + 0xb8))(plVar13);
          (**(code **)(*plVar16 + 0x78))(plVar16,plVar10,(int)plVar13[6],5);
          *(undefined4 *)(plVar13 + 6) = 5;
        }
        (**(code **)(*plVar16 + 0x40))(plVar16);
        FUN_10a08e2f4(plStack_e8);
        if (plStack_e0 != (long *)0x0) {
          plVar10 = plStack_e0 + 1;
          do {
            lVar14 = *plVar10;
            cVar6 = '\x01';
            bVar1 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar1) {
              *plVar10 = lVar14 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e0);
          }
        }
        __ZNSt3__115recursive_mutex6unlockEv(uVar3);
        return plVar13;
      }
    }
  }
  FUN_10a0edfc4(&puStack_88);
LAB_10a15cbd8:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a15cbdc);
  (*pcVar8)();
}



/* Entry: 10a15ccac; end: 10a15cd17;  */

void FUN_10a15ccac(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0x78;
  __Znwm();
  FUN_10ab9dafc();
  *(undefined1 *)(lVar1 + 100) = 1;
  FUN_10a15d66c(lVar1 + 0x68,param_2 + 0x10);
  *param_1 = lVar1;
  return;
}



/* Entry: 10a15cd18; end: 10a15cd6b;  */

undefined8 FUN_10a15cd18(void)

{
  int iVar1;
  
  if ((bRam00000001137ea770 & 1) == 0) {
    iVar1 = 0x137ea770;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ppuRam00000001137ea768 = &PTR_DAT_110c54538;
      ___cxa_guard_release(0x1137ea770);
    }
  }
  return 0x1137ea768;
}



/* Entry: 10a15cd6c; end: 10a15ce5f;  */

void FUN_10a15cd6c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x78;
  __Znwm();
  FUN_10abb32a4();
  *puVar1 = &PTR_FUN_110ba9608;
  return;
}



/* Entry: 10a15ce60; end: 10a15ce67;  */

undefined8 FUN_10a15ce60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10a15ce68; end: 10a15ced3;  */

void FUN_10a15ce68(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a15ced4(param_1,&UNK_10f63f646,*(undefined8 *)(param_2 + 0x60));
  FUN_10a15ced4(param_1,&UNK_10f63f657,*(undefined8 *)(param_2 + 0x70));
  return;
}



/* Entry: 10a15ced4; end: 10a15d20b;  */

void FUN_10a15ced4(float param_1,long param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  long lVar6;
  long lVar7;
  ulong unaff_x20;
  long lVar8;
  undefined8 ***unaff_x21;
  long lVar9;
  uint uVar10;
  undefined8 ***unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined1 uStack_b1;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 **ppuStack_98;
  ulong uStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  double dStack_70;
  undefined8 **ppuStack_60;
  ulong uStack_58;
  byte bStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 != 0) {
    uVar2 = param_4;
    FUN_10abff440();
    unaff_x23 = uVar2 >> 10 & 0x3fffff;
    uVar3 = param_4;
    func_0x00010abff49c(param_4);
    __ZNSt3__15mutex4lockEv(param_4 + 0x40);
    uVar10 = *(uint *)(param_4 + 0x38);
    unaff_x24 = (ulong)uVar10;
    __ZNSt3__15mutex6unlockEv(param_4 + 0x40);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f45d6c6,1);
    uVar4 = param_3;
    _strlen(param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,param_3,uVar4);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&UNK_10f6403fe,8);
    __ZNSt3__19to_stringEj(&ppuStack_60,unaff_x23);
    uVar2 = uStack_58;
    pppuVar5 = (undefined8 ***)ppuStack_60;
    if (-1 < (char)bStack_49) {
      uVar2 = (ulong)bStack_49;
      pppuVar5 = &ppuStack_60;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,pppuVar5,uVar2);
    if ((char)bStack_49 < '\0') {
      __ZdlPv(ppuStack_60);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&UNK_10f640407,9);
    __ZNSt3__19to_stringEj(&ppuStack_60,uVar3 >> 10 & 0x3fffff);
    uVar2 = uStack_58;
    pppuVar5 = (undefined8 ***)ppuStack_60;
    if (-1 < (char)bStack_49) {
      uVar2 = (ulong)bStack_49;
      pppuVar5 = &ppuStack_60;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,pppuVar5,uVar2);
    if ((char)bStack_49 < '\0') {
      __ZdlPv(ppuStack_60);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&UNK_10f640411,9);
    __ZNSt3__19to_stringEj(&ppuStack_60,uVar10 >> 10);
    uVar2 = uStack_58;
    pppuVar5 = (undefined8 ***)ppuStack_60;
    if (-1 < (char)bStack_49) {
      uVar2 = (ulong)bStack_49;
      pppuVar5 = &ppuStack_60;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,pppuVar5,uVar2);
    if ((char)bStack_49 < '\0') {
      __ZdlPv(ppuStack_60);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&UNK_10f64041b,10);
    __ZNSt3__15mutex4lockEv(param_4 + 0x40);
    lVar6 = *(long *)(param_4 + 0x20);
    lVar8 = *(long *)(param_4 + 0x28);
    __ZNSt3__15mutex6unlockEv(param_4 + 0x40);
    unaff_x22 = &ppuStack_60;
    __ZNSt3__19to_stringEj(&ppuStack_60,(int)((ulong)(lVar8 - lVar6) >> 3) * -0x49249249);
    uVar2 = uStack_58;
    pppuVar5 = (undefined8 ***)ppuStack_60;
    if (-1 < (char)bStack_49) {
      uVar2 = (ulong)bStack_49;
      pppuVar5 = unaff_x22;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,pppuVar5,uVar2);
    if ((char)bStack_49 < '\0') {
      __ZdlPv(ppuStack_60);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&UNK_10f640426,9);
    func_0x00010abff4f8(param_4);
    unaff_x21 = &ppuStack_60;
    __ZNSt3__19to_stringEj(&ppuStack_60);
    pppuVar5 = (undefined8 ***)ppuStack_60;
    if (-1 < (char)bStack_49) {
      uStack_58 = (ulong)bStack_49;
      pppuVar5 = unaff_x21;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,pppuVar5,uStack_58);
    if ((char)bStack_49 < '\0') {
      __ZdlPv(ppuStack_60);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&UNK_10f640430,7);
    FUN_10abff554(param_4);
    dStack_70 = (double)(param_1 * 100.0);
    _snprintf(&ppuStack_60,8,&UNK_10f640438);
    pppuVar5 = &ppuStack_60;
    _strlen(pppuVar5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&ppuStack_60,pppuVar5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68f57e,1);
    unaff_x20 = param_4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if ((char)bStack_49 < '\0') {
    __ZdlPv(ppuStack_60);
  }
  lVar6 = param_2;
  __Unwind_Resume();
  pcStack_78 = FUN_10a15d20c;
  uStack_90 = unaff_x20;
  lStack_88 = param_2;
  puStack_80 = &stack0xfffffffffffffff0;
  if (*(long *)(lVar6 + 0x60) != 0) {
    FUN_10abff334();
  }
  lVar6 = *(long *)(lVar6 + 0x70);
  if (lVar6 == 0) {
    return;
  }
  uStack_b0 = unaff_x24;
  uStack_a8 = unaff_x23;
  ppuStack_a0 = unaff_x22;
  ppuStack_98 = unaff_x21;
  __ZNSt3__15mutex4lockEv(lVar6 + 0x40);
  lVar8 = *(long *)(lVar6 + 0x20);
  lVar9 = *(long *)(lVar6 + 0x28);
  if (lVar8 != lVar9) {
    uVar10 = 0;
    lVar7 = lVar8;
    do {
      uVar10 = *(int *)(lVar7 + 0x10) + uVar10;
      lVar7 = lVar7 + 0x38;
    } while (lVar7 != lVar9);
    do {
      if (*(int *)(lVar8 + 0x34) == 0) {
        uVar1 = uVar10 - *(int *)(lVar8 + 0x10);
        if (uVar1 < *(uint *)(lVar6 + 0xc)) {
          *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(lVar8 + 0x18);
          uStack_bc = 0;
          iStack_b8 = *(int *)(lVar8 + 0x10);
          FUN_10abff270((undefined8 *)(lVar8 + 0x18),&uStack_bc);
          lVar9 = *(long *)(lVar6 + 0x28);
          goto LAB_10abff3fc;
        }
        lVar7 = lVar8 + 0x38;
        FUN_10ac08bd4(&uStack_b1,lVar7,lVar9,lVar8);
        lVar9 = *(long *)(lVar6 + 0x28);
        while (lVar9 != lVar7) {
          lVar9 = lVar9 + -0x38;
          FUN_10a194820(lVar9);
        }
        *(long *)(lVar6 + 0x28) = lVar7;
        uVar10 = uVar1;
      }
      else {
LAB_10abff3fc:
        lVar8 = lVar8 + 0x38;
        lVar7 = lVar9;
      }
      lVar9 = lVar7;
    } while (lVar8 != lVar7);
  }
  __ZNSt3__15mutex6unlockEv(lVar6 + 0x40);
  return;
}



/* Entry: 10a15d20c; end: 10a15d247;  */

void FUN_10a15d20c(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined4 uStack_4c;
  int iStack_48;
  undefined1 uStack_41;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_10abff334();
  }
  lVar2 = *(long *)(param_1 + 0x70);
  if (lVar2 == 0) {
    return;
  }
  __ZNSt3__15mutex4lockEv(lVar2 + 0x40);
  lVar4 = *(long *)(lVar2 + 0x20);
  lVar5 = *(long *)(lVar2 + 0x28);
  if (lVar4 != lVar5) {
    uVar6 = 0;
    lVar3 = lVar4;
    do {
      uVar6 = *(int *)(lVar3 + 0x10) + uVar6;
      lVar3 = lVar3 + 0x38;
    } while (lVar3 != lVar5);
    do {
      if (*(int *)(lVar4 + 0x34) == 0) {
        uVar1 = uVar6 - *(int *)(lVar4 + 0x10);
        if (uVar1 < *(uint *)(lVar2 + 0xc)) {
          *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar4 + 0x18);
          uStack_4c = 0;
          iStack_48 = *(int *)(lVar4 + 0x10);
          FUN_10abff270((undefined8 *)(lVar4 + 0x18),&uStack_4c);
          lVar5 = *(long *)(lVar2 + 0x28);
          goto LAB_10abff3fc;
        }
        lVar3 = lVar4 + 0x38;
        FUN_10ac08bd4(&uStack_41,lVar3,lVar5,lVar4);
        lVar5 = *(long *)(lVar2 + 0x28);
        while (lVar5 != lVar3) {
          lVar5 = lVar5 + -0x38;
          FUN_10a194820(lVar5);
        }
        *(long *)(lVar2 + 0x28) = lVar3;
        uVar6 = uVar1;
      }
      else {
LAB_10abff3fc:
        lVar4 = lVar4 + 0x38;
        lVar3 = lVar5;
      }
      lVar5 = lVar3;
    } while (lVar4 != lVar3);
  }
  __ZNSt3__15mutex6unlockEv(lVar2 + 0x40);
  return;
}



/* Entry: 10a15d248; end: 10a15d66b;  */

undefined8 * FUN_10a15d248(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined **ppuVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 auStack_90 [2];
  char cStack_79;
  undefined8 uStack_78;
  long *plStack_70;
  char cStack_61;
  undefined4 uStack_58;
  undefined1 uStack_51;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 3;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  uVar9 = param_2[1];
  uVar8 = *param_2;
  uVar1 = *(undefined4 *)(param_2 + 2);
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 5) = uVar1;
  param_1[4] = uVar9;
  param_1[3] = uVar8;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x25] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0xffffffffffffffff;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x31) = 0xff;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  *(undefined2 *)(param_1 + 0x46) = 0;
  *(undefined8 *)((long)param_1 + 0x289) = 0;
  *(undefined8 *)((long)param_1 + 0x281) = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  param_1[0x97] = 0;
  param_1[0x94] = 0;
  param_1[0x93] = 0;
  param_1[0x96] = 0;
  param_1[0x95] = 0;
  param_1[0x92] = 0;
  param_1[0x91] = 0;
  param_1[0x9c] = 0x32aaaba7;
  param_1[0xa3] = 0;
  param_1[0xa2] = 0;
  param_1[0xa1] = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  func_0x000107c2b054(&uStack_78,"");
  func_0x000107c2b054(auStack_90,"");
  FUN_10a107e2c(param_1 + 0xa4,&uStack_78,auStack_90,0);
  if (cStack_79 < '\0') {
    __ZdlPv(auStack_90[0]);
  }
  if (cStack_61 < '\0') {
    __ZdlPv(uStack_78);
  }
  ppuVar5 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  lVar7 = 0;
  if ((char)*(long *)((long)*ppuVar5 + 0x160) == '\0') {
    lVar7 = 8;
  }
  lVar7 = **(long **)(*(long *)*ppuVar5 + lVar7);
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0x734) == 1)) {
    *(undefined4 *)(param_1 + 2) = 0;
    FUN_10a15d66c(param_1);
    auStack_90[0] = *param_1;
    uStack_58 = *(undefined4 *)(param_1 + 3);
    uStack_51 = 1;
    func_0x00010924edd0(&uStack_78,auStack_90[0],auStack_90,&uStack_51,&uStack_58);
    func_0x00010a15d6e8(param_1 + 0x39,&uStack_78);
    if (plStack_70 != (long *)0x0) {
      plVar6 = plStack_70 + 1;
      do {
        lVar7 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
      }
    }
    plVar6 = (long *)param_1[0x39];
    (**(code **)(*plVar6 + 0x30))();
    if ((*(byte *)(plVar6 + 6) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a15d520);
      (*pcVar4)();
    }
    FUN_10a180978(param_1 + 0x5d,param_1 + 0x5d,plVar6);
  }
  lVar7 = 0x488;
  do {
    func_0x00010a180788((long)param_1 + lVar7,0,0);
    lVar7 = lVar7 + 0x10;
  } while (lVar7 != 0x4c8);
  return param_1;
}



/* Entry: 10a15d66c; end: 10a15d74b;  */

undefined8 * FUN_10a15d66c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
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
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 10a15d74c; end: 10a15e153;  */

/* WARNING: Removing unreachable block (ram,0x00010a15d8dc) */
/* WARNING: Removing unreachable block (ram,0x00010a15dc54) */

long * FUN_10a15d74c(long *param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  undefined **ppuVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *aplStack_c0 [3];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long **applStack_88 [3];
  undefined8 uStack_70;
  
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((long)param_1 + 0xd) = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = -1;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2f] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x31) = 0xff;
  plVar16 = param_1 + 0x47;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined2 *)(param_1 + 0x46) = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  *(undefined8 *)((long)param_1 + 0x289) = 0;
  *(undefined8 *)((long)param_1 + 0x281) = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x48] = 0;
  *plVar16 = 0;
  param_1[0x9b] = 0;
  param_1[0x98] = 0;
  param_1[0x97] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x94] = 0;
  param_1[0x93] = 0;
  param_1[0x96] = 0;
  param_1[0x95] = 0;
  param_1[0x92] = 0;
  param_1[0x91] = 0;
  param_1[0x9c] = 0x32aaaba7;
  param_1[0xa3] = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0xa2] = 0;
  param_1[0xa1] = 0;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  func_0x000107c2b054(&plStack_f0,"");
  func_0x000107c2b054(applStack_88,"");
  plVar9 = param_1 + 0xa4;
  FUN_10a107e2c(plVar9,&plStack_f0,applStack_88,0);
  if ((long)plStack_e0 < 0) {
    __ZdlPv(plStack_f0);
  }
  FUN_10a15d66c(param_1,param_2);
  lVar14 = 0;
  do {
    func_0x00010a0eadd8((long)param_1 + lVar14 + 0x1f0,param_2 + 0x10 + lVar14);
    lVar14 = lVar14 + 0x10;
  } while (lVar14 != 0x20);
  lVar14 = 0x210;
  do {
    FUN_10a180aa8((long)param_1 + lVar14,*(undefined8 *)(param_2 + lVar14 + -0x1d0),
                  *(undefined8 *)(param_2 + lVar14 + -0x1c8));
    lVar14 = lVar14 + 0x10;
  } while (lVar14 != 0x230);
  uVar10 = *(undefined4 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x46) = *(undefined1 *)(param_2 + 0x298);
  *(undefined4 *)(param_1 + 0x1a) = uVar10;
  if (param_1 + 0x1a == (long *)(param_2 + 0x70)) {
    param_1[0x20] = *(long *)(param_2 + 0xa0);
    param_1[0x26] = *(long *)(param_2 + 0xd0);
  }
  else {
    param_1[0x1f] = 0;
    if (*(long *)(param_2 + 0x98) != 0) {
      lVar14 = param_2 + 0x78;
      lVar17 = *(long *)(param_2 + 0x98) << 2;
      do {
        func_0x00010928bcfc(param_1 + 0x1b,lVar14);
        lVar14 = lVar14 + 4;
        lVar17 = lVar17 + -4;
      } while (lVar17 != 0);
    }
    param_1[0x20] = *(long *)(param_2 + 0xa0);
    param_1[0x25] = 0;
    if (*(long *)(param_2 + 200) != 0) {
      lVar14 = param_2 + 0xa8;
      lVar17 = *(long *)(param_2 + 200) << 2;
      do {
        func_0x000109261ecc(param_1 + 0x21,lVar14);
        lVar14 = lVar14 + 4;
        lVar17 = lVar17 + -4;
      } while (lVar17 != 0);
    }
    param_1[0x26] = *(long *)(param_2 + 0xd0);
    param_1[0x2b] = 0;
    if (*(long *)(param_2 + 0xf8) != 0) {
      lVar14 = param_2 + 0xd8;
      lVar17 = *(long *)(param_2 + 0xf8) << 2;
      do {
        func_0x000109261ecc(param_1 + 0x27,lVar14);
        lVar14 = lVar14 + 4;
        lVar17 = lVar17 + -4;
      } while (lVar17 != 0);
    }
  }
  plStack_f0 = *(long **)(param_2 + 0x60);
  plVar15 = param_1 + 0x2c;
  FUN_10a194b6c(plVar15,plStack_f0,&plStack_f0);
  FUN_10a15e154(plVar15 + 3,(long *)(param_2 + 0x60));
  lVar14 = 0x488;
  do {
    func_0x00010a180788((long)param_1 + lVar14,0,0);
    lVar14 = lVar14 + 0x10;
  } while (lVar14 != 0x4c8);
  func_0x00010a15e1d0(param_1 + 0x34,*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38)
                     );
  *(undefined1 *)((long)param_1 + 0x231) = *(undefined1 *)(param_2 + 0x299);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x4a,param_2 + 0x2a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x4d,param_2 + 0x2b8);
  func_0x00010a0a1bc4(param_1 + 0x36,param_2 + 0x308);
  if (param_1 + 0x99 != (long *)(param_2 + 0x338)) {
    FUN_10a105cdc(param_1 + 0x99,*(long *)(param_2 + 0x338),*(long *)(param_2 + 0x340),
                  (*(long *)(param_2 + 0x340) - *(long *)(param_2 + 0x338) >> 3) *
                  -0x5555555555555555);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar9,param_2 + 0x2d0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0xa7,param_2 + 0x2e8);
  *(undefined4 *)(param_1 + 0xaa) = *(undefined4 *)(param_2 + 0x300);
  *(byte *)((long)param_1 + 0x18b) = *(byte *)(param_2 + 0x350) >> 1 & 1;
  FUN_10a15e244(plVar16,*(undefined8 *)(param_2 + 0x370));
  plVar15 = *(long **)(param_2 + 0x368);
  if (plVar15 != (long *)0x0) {
    do {
      FUN_10a0d09b4(applStack_88,plVar15 + 2);
      plVar7 = plVar15 + 5;
      FUN_10a0d09b4(&uStack_a8);
      puVar11 = (undefined8 *)param_1[0x48];
      if (puVar11 < (undefined8 *)param_1[0x49]) {
        *puVar11 = uStack_70;
        puVar11[2] = uStack_a0;
        puVar11[1] = uStack_a8;
        puVar11[3] = lStack_98;
        uStack_a0 = 0;
        lStack_98 = 0;
        uStack_a8 = 0;
        puVar11[4] = uStack_90;
        param_1[0x48] = (long)(puVar11 + 5);
      }
      else {
        lVar14 = (long)puVar11 - *plVar16;
        uVar12 = (lVar14 >> 3) * -0x3333333333333333 + 1;
        if (0x666666666666666 < uVar12) {
          FUN_10a180b1c();
          goto LAB_10a15df68;
        }
        lVar17 = param_1[0x49] - *plVar16 >> 3;
        uVar13 = lVar17 * -0x6666666666666666;
        if (uVar13 < uVar12 || uVar13 - uVar12 == 0) {
          uVar13 = uVar12;
        }
        if (0x333333333333332 < (ulong)(lVar17 * -0x3333333333333333)) {
          uVar13 = 0x666666666666666;
        }
        plStack_d0 = plVar16;
        FUN_10a180b30();
        puVar11 = (undefined8 *)(uVar13 + lVar14);
        *puVar11 = uStack_70;
        puVar11[3] = lStack_98;
        puVar11[2] = uStack_a0;
        puVar11[1] = uStack_a8;
        uStack_a0 = 0;
        lStack_98 = 0;
        uStack_a8 = 0;
        puVar11[4] = uStack_90;
        lVar14 = (long)puVar11 + (param_1[0x47] - param_1[0x48]);
        func_0x00010a180b74(param_1[0x47],param_1[0x48],lVar14);
        plStack_f0 = (long *)param_1[0x47];
        param_1[0x47] = lVar14;
        param_1[0x48] = (long)(puVar11 + 5);
        plStack_d8 = (long *)param_1[0x49];
        param_1[0x49] = uVar13 + (long)plVar7 * 0x28;
        plStack_e8 = plStack_f0;
        plStack_e0 = plStack_f0;
        func_0x00010a180bf4(&plStack_f0);
        param_1[0x48] = (long)(puVar11 + 5);
        if (lStack_98 < 0) {
          __ZdlPv(uStack_a8);
        }
      }
      plVar15 = (long *)*plVar15;
    } while (plVar15 != (long *)0x0);
  }
  lVar17 = param_1[0x47];
  lVar8 = param_1[0x48];
  lVar14 = 0;
  if (lVar8 != lVar17) {
    lVar14 = LZCOUNT((lVar8 - lVar17 >> 3) * -0x3333333333333333) * -2 + 0x7e;
  }
  FUN_10a180c54(lVar17,lVar8,lVar14,1);
  if (*(char *)((long)param_1 + 0x18b) == '\x01') {
    bVar1 = *(byte *)(param_2 + 0x350);
    *(byte *)((long)param_1 + 0x189) = bVar1 & 1;
    if ((bVar1 & 1) != 0) {
LAB_10a15dcd4:
      lVar14 = *param_1;
      lVar17 = (long)*(char *)((long)param_1 + 0x537);
      if (lVar17 < 0) {
        plVar9 = (long *)param_1[0xa4];
        lVar17 = param_1[0xa5];
      }
      FUN_10a15e3e4(lVar14,param_2 + 0x100,plVar9,lVar17);
      if ((int)lVar14 != 0) {
        FUN_10a181ea0(param_1 + 0x5d,param_1 + 0x5d,param_2 + 0x100);
      }
    }
  }
  else {
    iVar5 = *(int *)(*param_1 + 0x734);
    FUN_10a15e300(iVar5,*(undefined8 *)(param_2 + 0x108),*(undefined8 *)(param_2 + 0x110));
    *(char *)((long)param_1 + 0x189) = (char)iVar5;
    if (iVar5 != 0) goto LAB_10a15dcd4;
  }
  if ((*(int *)(*param_1 + 0x734) == 6) || (*(int *)(*param_1 + 0x734) == 1)) {
    ppuVar6 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    if (*ppuVar6 != (undefined *)0x0) {
      FUN_10a08e1c8(*ppuVar6 + 0x18);
    }
    if ((*(byte *)((long)param_1 + 0x189) & 1) == 0) {
      FUN_10a15e4d4(param_1);
      lVar14 = param_1[0x39];
      func_0x00010925e060(lVar14 + 0x590);
      lVar14 = *(long *)(lVar14 + 0x5a8);
      uVar10 = 0;
      if (lVar14 != 0) {
        uVar10 = *(undefined4 *)(lVar14 + 0x10);
      }
      *(undefined4 *)(param_1 + 3) = uVar10;
      if (param_1[0x32] != 0) {
        lVar17 = *(long *)(param_2 + 0x340);
        for (lVar14 = *(long *)(param_2 + 0x338); lVar14 != lVar17; lVar14 = lVar14 + 0x18) {
          plVar16 = (long *)param_1[0x32];
          FUN_10a09d9a0(&plStack_f0,lVar14,0);
          (**(code **)(*plVar16 + 0x30))(plVar16,&plStack_f0);
          if ((long)plStack_e0 < 0) {
            __ZdlPv(plStack_f0);
          }
        }
      }
    }
  }
  if ((int)param_1[0x90] != 0) {
    return param_1;
  }
  if (((((*(long *)(param_2 + 0x108) == *(long *)(param_2 + 0x110)) &&
        (*(long *)(param_2 + 0x280) == *(long *)(param_2 + 0x288))) &&
       (*(long *)(param_2 + 0x120) == *(long *)(param_2 + 0x128))) &&
      (*(long *)(param_2 + 0x238) == *(long *)(param_2 + 0x240))) ||
     (iVar5 = *(int *)(*param_1 + 0x734), iVar5 != 7 && iVar5 != 2)) {
    bVar3 = false;
  }
  else {
    func_0x000109235564(&plStack_f0,*param_1,param_2 + 0x108,0);
    FUN_10a15e978(param_1 + 0x50,&plStack_f0);
    plVar16 = plStack_e8;
    if (plStack_e8 != (long *)0x0) {
      plVar9 = plStack_e8 + 1;
      do {
        lVar14 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    bVar3 = true;
  }
  FUN_10a15e4d4(param_1);
  plVar16 = (long *)param_1[0x39];
  (**(code **)(*plVar16 + 0x30))();
  if ((*(byte *)(plVar16 + 6) & 1) != 0) {
    FUN_10a180978(param_1 + 0x5d,param_1 + 0x5d,plVar16);
    plVar16 = (long *)param_1[0x39];
    (**(code **)(*plVar16 + 0x30))();
    if ((*(byte *)(plVar16 + 6) & 1) != 0) {
      func_0x000109297a50(&plStack_f0);
      FUN_10a0e6cd0(param_1 + 0x52,&plStack_f0);
      applStack_88[0] = aplStack_c0;
      func_0x00010a09ad80(applStack_88);
      if (plStack_d8 != (long *)0x0) {
        plStack_d0 = plStack_d8;
        __ZdlPv();
      }
      applStack_88[0] = &plStack_f0;
      FUN_10a09ae0c(applStack_88);
      if (bVar3) {
        if ((*(byte *)(param_1 + 0x5b) & 1) == 0) goto LAB_10a15df68;
        if (param_1 + 0x55 != (long *)(param_2 + 0x280)) {
          func_0x00010a0ea5c8();
        }
      }
      return param_1;
    }
  }
LAB_10a15df68:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a15df6c);
  (*pcVar4)();
}



/* Entry: 10a15e154; end: 10a15e243;  */

undefined8 * FUN_10a15e154(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
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
  param_1[1] = uVar7;
  *param_1 = uVar6;
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


