/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a7d66d4; end: 10a7d6713;  */

void FUN_10a7d66d4(long param_1)

{
  FUN_10aa88d20(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a7d6714; end: 10a7d674f;  */

long FUN_10a7d6714(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c1b408);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a7d6750; end: 10a7d6753;  */

void FUN_10a7d6750(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7d6754; end: 10a7d67bb;  */

void FUN_10a7d6754(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x108;
  __Znwm();
  FUN_10a7d67bc();
  *param_1 = lVar5 + 0x18;
  param_1[1] = lVar5;
  if (((long *)(lVar5 + 0x40) != (long *)0x0) &&
     ((lVar4 = *(long *)(lVar5 + 0x48), lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
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
      lVar4 = *(long *)(lVar5 + 0x48);
    }
    *(long *)(lVar5 + 0x40) = lVar5 + 0x18;
    *(long **)(lVar5 + 0x48) = plVar6;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
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



/* Entry: 10a7d67bc; end: 10a7d6837;  */

undefined8 * FUN_10a7d67bc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110c1b428;
  puVar1 = param_1;
  func_0x00010a0fda30();
  FUN_10aa7093c(param_1 + 3,0,puVar1,param_2);
  param_1[3] = &PTR_DAT_110c49a60;
  param_1[5] = &PTR_DAT_110c49b00;
  param_1[10] = &PTR_DAT_110c49b58;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  return param_1;
}



/* Entry: 10a7d6838; end: 10a7d6847;  */

void FUN_10a7d6838(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c1b428;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a7d6848; end: 10a7d6867;  */

void FUN_10a7d6848(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c1b428;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7d6868; end: 10a7d6877;  */

void FUN_10a7d6868(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a7d6870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a7d6878; end: 10a7d691b;  */

void FUN_10a7d6878(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 0x2c) == '\x01') {
    FUN_10a7d299c(param_1 + 8,param_2 + 8);
  }
  if (*(char *)(param_2 + 0x3e) == '\x01') {
    func_0x00010a1cca60(param_1 + 0x38,param_2 + 0x38);
  }
  *param_1 = *param_2;
  FUN_10a52a0d0(param_1 + 2,param_2 + 2);
  param_1[0x30] = param_2[0x30];
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x32);
  *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) | *(byte *)(param_2 + 0x34);
  *(byte *)((long)param_1 + 0xd1) =
       *(byte *)((long)param_1 + 0xd1) | *(byte *)((long)param_2 + 0xd1);
  uVar1 = NEON_smax(*(undefined8 *)(param_1 + 0x35),*(undefined8 *)(param_2 + 0x35),4);
  *(undefined8 *)(param_1 + 0x35) = uVar1;
  return;
}



/* Entry: 10a7d691c; end: 10a7d6a33;  */

undefined4 * FUN_10a7d691c(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (*(char *)(param_1 + 0x40) == '\x01') {
    *param_1 = *param_2;
    func_0x00010a23175c(param_1 + 2,param_2 + 2);
    cVar1 = *(char *)(param_1 + 0x2c);
    if (cVar1 == *(char *)(param_2 + 0x2c)) {
      if (cVar1 != '\0') {
        uVar2 = *(undefined8 *)(param_2 + 8);
        uVar4 = *(undefined8 *)(param_2 + 0xe);
        uVar3 = *(undefined8 *)(param_2 + 0xc);
        *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
        *(undefined8 *)(param_1 + 8) = uVar2;
        *(undefined8 *)(param_1 + 0xe) = uVar4;
        *(undefined8 *)(param_1 + 0xc) = uVar3;
        uVar3 = *(undefined8 *)(param_2 + 0x12);
        uVar2 = *(undefined8 *)(param_2 + 0x10);
        *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
        *(undefined8 *)(param_1 + 0x12) = uVar3;
        *(undefined8 *)(param_1 + 0x10) = uVar2;
        uVar5 = *(undefined8 *)(param_2 + 0x22);
        uVar4 = *(undefined8 *)(param_2 + 0x20);
        uVar3 = *(undefined8 *)(param_2 + 0x26);
        uVar2 = *(undefined8 *)(param_2 + 0x24);
        uVar7 = *(undefined8 *)(param_2 + 0x1e);
        uVar6 = *(undefined8 *)(param_2 + 0x1c);
        *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
        *(undefined8 *)(param_1 + 0x22) = uVar5;
        *(undefined8 *)(param_1 + 0x20) = uVar4;
        *(undefined8 *)(param_1 + 0x26) = uVar3;
        *(undefined8 *)(param_1 + 0x24) = uVar2;
        *(undefined8 *)(param_1 + 0x1e) = uVar7;
        *(undefined8 *)(param_1 + 0x1c) = uVar6;
        uVar2 = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
        *(undefined8 *)(param_1 + 0x18) = uVar2;
      }
    }
    else if (cVar1 == '\0') {
      uVar2 = *(undefined8 *)(param_2 + 8);
      uVar4 = *(undefined8 *)(param_2 + 0xe);
      uVar3 = *(undefined8 *)(param_2 + 0xc);
      *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
      *(undefined8 *)(param_1 + 8) = uVar2;
      *(undefined8 *)(param_1 + 0xe) = uVar4;
      *(undefined8 *)(param_1 + 0xc) = uVar3;
      uVar3 = *(undefined8 *)(param_2 + 0x12);
      uVar2 = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
      *(undefined8 *)(param_1 + 0x12) = uVar3;
      *(undefined8 *)(param_1 + 0x10) = uVar2;
      uVar3 = *(undefined8 *)(param_2 + 0x1e);
      uVar2 = *(undefined8 *)(param_2 + 0x1c);
      uVar5 = *(undefined8 *)(param_2 + 0x22);
      uVar4 = *(undefined8 *)(param_2 + 0x20);
      uVar7 = *(undefined8 *)(param_2 + 0x26);
      uVar6 = *(undefined8 *)(param_2 + 0x24);
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(param_1 + 0x22) = uVar5;
      *(undefined8 *)(param_1 + 0x20) = uVar4;
      *(undefined8 *)(param_1 + 0x26) = uVar7;
      *(undefined8 *)(param_1 + 0x24) = uVar6;
      *(undefined8 *)(param_1 + 0x1e) = uVar3;
      *(undefined8 *)(param_1 + 0x1c) = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      *(undefined1 *)(param_1 + 0x2c) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x2c) = 0;
    }
    uVar3 = *(undefined8 *)(param_2 + 0x32);
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    uVar4 = *(undefined8 *)(param_2 + 0x33);
    *(undefined8 *)(param_1 + 0x35) = *(undefined8 *)(param_2 + 0x35);
    *(undefined8 *)(param_1 + 0x33) = uVar4;
    *(undefined8 *)(param_1 + 0x32) = uVar3;
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    func_0x00010a20a7e0(param_1 + 0x38,param_2 + 0x38);
  }
  else {
    FUN_10a2317c0(param_1,param_2);
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  return param_1;
}



/* Entry: 10a7d6a34; end: 10a7d6a37;  */

void FUN_10a7d6a34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a7d6a38; end: 10a7d6a4b;  */

void FUN_10a7d6a38(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7d6a4c; end: 10a7d6a67;  */

void FUN_10a7d6a4c(long param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a7d6a68; end: 10a7d6aa3;  */

long FUN_10a7d6a68(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba2110);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a7d6aa4; end: 10a7d6aa7;  */

void FUN_10a7d6aa4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7d6aa8; end: 10a7d6dab;  */

void FUN_10a7d6aa8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined **ppuStack_288;
  long *plStack_280;
  undefined1 auStack_278 [7];
  char cStack_271;
  undefined1 auStack_168 [8];
  undefined **ppuStack_160;
  long *plStack_158;
  undefined1 auStack_150 [7];
  char cStack_149;
  
  plVar4 = *(long **)(param_4 + 0x20);
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    if ((plVar4 != (long *)0x0) && (lVar6 = *(long *)(param_4 + 0x18), lVar6 != 0)) {
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        func_0x00010ae06f08(1,4,&UNK_10f677f95,&UNK_10f67824d,0x7d,&UNK_10f678369);
      }
      func_0x000107c2b054(&ppuStack_288,&UNK_10f677f68);
      ppuVar5 = *(undefined ***)(lVar6 + 0x8d8);
      func_0x000107c2b054(&ppuStack_160,&DAT_10f2c2f7f);
      FUN_10a76bdb0(ppuVar5,&ppuStack_288,&ppuStack_160);
      if (cStack_149 < '\0') {
        ppuVar5 = ppuStack_160;
        __ZdlPv(ppuStack_160);
      }
      if (cStack_271 < '\0') {
        __ZdlPv(ppuStack_288);
        ppuVar5 = ppuStack_288;
      }
      __ZNSt3__16chrono12steady_clock3nowEv();
      lVar7 = *(long *)(param_4 + 0x28);
      func_0x000107c2b054(&ppuStack_160,&UNK_10f678389);
      FUN_10a76bf18((double)(((long)ppuVar5 - lVar7) / 1000000),*(undefined8 *)(lVar6 + 0x8d8),
                    &ppuStack_160);
      if (cStack_149 < '\0') {
        __ZdlPv(ppuStack_160);
      }
      FUN_10a6f4d6c(&ppuStack_288,*param_3);
      FUN_10a7d0154(&ppuStack_160,&ppuStack_288);
      if (plStack_280 != (long *)0x0) {
        plVar1 = plStack_280 + 1;
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
          (**(code **)(*plStack_280 + 0x10))(plStack_280);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_280);
        }
      }
      FUN_10a7257d0(*(undefined8 *)(param_4 + 0x10),&ppuStack_160);
      if (plStack_158 != (long *)0x0) {
        plVar1 = plStack_158 + 1;
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
          (**(code **)(*plStack_158 + 0x10))(plStack_158);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_158);
        }
      }
      goto joined_r0x00010a7d6ce8;
    }
  }
  FUN_10a009538(&ppuStack_288,&UNK_10f6783a3);
  __ZNSt13runtime_errorC2ERKS_(&ppuStack_160,&ppuStack_288);
  _memcpy(auStack_150,auStack_278,0x110);
  ppuStack_160 = &PTR_FUN_110b99e70;
  FUN_10a05bde0(auStack_168,&ppuStack_160);
  __ZNSt13runtime_errorD2Ev(&ppuStack_160);
  func_0x000109d1b350(*(undefined8 *)(param_4 + 0x10),auStack_168);
  __ZNSt13exception_ptrD1Ev(auStack_168);
  __ZNSt13runtime_errorD2Ev(&ppuStack_288);
joined_r0x00010a7d6ce8:
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a7d6dac; end: 10a7d6deb;  */

void FUN_10a7d6dac(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar1 = (ulong *)(plVar4 + 1);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 >> 0x21 == 1) {
    FUN_109d1b3c4(plVar4,1,param_1 + 8);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a7d6dec; end: 10a7d6e73;  */

void FUN_10a7d6dec(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110c1b4b8;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  param_1[4] = uVar1;
  return;
}



/* Entry: 10a7d6e74; end: 10a7d7037;  */

void FUN_10a7d6e74(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lStack_280;
  long *plStack_278;
  undefined8 auStack_270 [2];
  undefined1 auStack_260 [7];
  char cStack_259;
  undefined **appuStack_150 [2];
  undefined1 auStack_140 [7];
  char cStack_139;
  
  plVar4 = *(long **)(param_3 + 0x20);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_278 = plVar4;
    if (plVar4 != (long *)0x0) {
      lVar5 = *(long *)(param_3 + 0x18);
      lStack_280 = lVar5;
      if (lVar5 != 0) {
        if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
          func_0x00010ae06f08(1,4,&UNK_10f677f95,&UNK_10f6783c3,0x8d,&UNK_10f6784a4);
        }
        func_0x000107c2b054(auStack_270,&UNK_10f677f68);
        uVar6 = *(undefined8 *)(lVar5 + 0x8d8);
        func_0x000107c2b054(appuStack_150,&DAT_10f2cf69e);
        FUN_10a76bdb0(uVar6,auStack_270,appuStack_150);
        if (cStack_139 < '\0') {
          __ZdlPv(appuStack_150[0]);
        }
        if (cStack_259 < '\0') {
          __ZdlPv(auStack_270[0]);
        }
      }
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  FUN_10a009538(auStack_270,&UNK_10f6784c1);
  __ZNSt13runtime_errorC2ERKS_(appuStack_150,auStack_270);
  _memcpy(auStack_140,auStack_260,0x110);
  appuStack_150[0] = &PTR_FUN_110b99e70;
  FUN_10a05bde0(&lStack_280,appuStack_150);
  __ZNSt13runtime_errorD2Ev(appuStack_150);
  func_0x000109d1b350(*(undefined8 *)(param_3 + 0x10),&lStack_280);
  __ZNSt13exception_ptrD1Ev(&lStack_280);
  __ZNSt13runtime_errorD2Ev(auStack_270);
  return;
}



/* Entry: 10a7d7038; end: 10a7d7077;  */

void FUN_10a7d7038(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar1 = (ulong *)(plVar4 + 1);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 >> 0x21 == 1) {
    FUN_109d1b3c4(plVar4,1,param_1 + 8);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a7d7078; end: 10a7d70f3;  */

void FUN_10a7d7078(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110c1b4d8;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  return;
}



/* Entry: 10a7d70f4; end: 10a7d734b;  */

void FUN_10a7d70f4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined **appuStack_288 [2];
  undefined1 auStack_278 [7];
  char cStack_271;
  undefined1 auStack_168 [8];
  undefined **appuStack_160 [2];
  undefined1 auStack_150 [7];
  char cStack_149;
  
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f677f95,&UNK_10f6784d8,0xa2,&UNK_10f678596);
  }
  plVar4 = *(long **)(param_1 + 0x30);
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    if ((plVar4 != (long *)0x0) && (lVar6 = *(long *)(param_1 + 0x28), lVar6 != 0)) {
      func_0x000107c2b054(appuStack_288,&UNK_10f677e11);
      ppuVar5 = *(undefined ***)(lVar6 + 0x8d8);
      func_0x000107c2b054(appuStack_160,&DAT_10f4980e2);
      FUN_10a76bdb0(ppuVar5,appuStack_288,appuStack_160);
      if (cStack_149 < '\0') {
        ppuVar5 = appuStack_160[0];
        __ZdlPv(appuStack_160[0]);
      }
      if (cStack_271 < '\0') {
        __ZdlPv(appuStack_288[0]);
        ppuVar5 = appuStack_288[0];
      }
      __ZNSt3__16chrono12steady_clock3nowEv();
      lVar7 = *(long *)(param_1 + 0x38);
      func_0x000107c2b054(appuStack_160,&UNK_10f6785b4);
      FUN_10a76bf18((double)(((long)ppuVar5 - lVar7) / 1000000),*(undefined8 *)(lVar6 + 0x8d8),
                    appuStack_160);
      if (cStack_149 < '\0') {
        __ZdlPv(appuStack_160[0]);
      }
      FUN_10a7257d0(*(undefined8 *)(param_1 + 0x10),param_1 + 0x18);
      goto LAB_10a7d72a4;
    }
  }
  FUN_10a009538(appuStack_288,&UNK_10f6783a3);
  __ZNSt13runtime_errorC2ERKS_(appuStack_160,appuStack_288);
  _memcpy(auStack_150,auStack_278,0x110);
  appuStack_160[0] = &PTR_FUN_110b99e70;
  FUN_10a05bde0(auStack_168,appuStack_160);
  __ZNSt13runtime_errorD2Ev(appuStack_160);
  func_0x000109d1b350(*(undefined8 *)(param_1 + 0x10),auStack_168);
  __ZNSt13exception_ptrD1Ev(auStack_168);
  __ZNSt13runtime_errorD2Ev(appuStack_288);
  if (plVar4 == (long *)0x0) {
    return;
  }
LAB_10a7d72a4:
  plVar1 = plVar4 + 1;
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
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  return;
}



/* Entry: 10a7d734c; end: 10a7d7393;  */

void FUN_10a7d734c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a22ffb4(param_1 + 0x10);
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar1 = (ulong *)(plVar4 + 1);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 >> 0x21 == 1) {
    FUN_109d1b3c4(plVar4,1,param_1 + 8);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a7d7394; end: 10a7d744f;  */

void FUN_10a7d7394(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110c1b4f8;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = uVar1;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  return;
}



/* Entry: 10a7d7450; end: 10a7d764b;  */

void FUN_10a7d7450(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined7 uStack_2a0;
  undefined1 uStack_299;
  undefined7 uStack_298;
  undefined1 uStack_291;
  char cStack_289;
  undefined **appuStack_288 [2];
  undefined1 auStack_278 [7];
  char cStack_271;
  undefined1 auStack_168 [8];
  undefined **appuStack_160 [2];
  undefined1 auStack_150 [7];
  char cStack_149;
  
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f677f95,&UNK_10f6785d5,0xb1,&UNK_10f6786bb);
  }
  plVar4 = *(long **)(param_3 + 0x20);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    uStack_298 = SUB87(plVar4,0);
    uStack_291 = (undefined1)((ulong)plVar4 >> 0x38);
    if (plVar4 != (long *)0x0) {
      lVar5 = *(long *)(param_3 + 0x18);
      uStack_2a0 = (undefined7)lVar5;
      uStack_299 = (undefined1)((ulong)lVar5 >> 0x38);
      if (lVar5 != 0) {
        func_0x000107c2b054(appuStack_288,&UNK_10f677e11);
        uVar6 = *(undefined8 *)(lVar5 + 0x8d8);
        func_0x000107c2b054(appuStack_160,&DAT_10f6786d6);
        FUN_10a76bdb0(uVar6,appuStack_288,appuStack_160);
        if (cStack_149 < '\0') {
          __ZdlPv(appuStack_160[0]);
        }
        if (cStack_271 < '\0') {
          __ZdlPv(appuStack_288[0]);
        }
      }
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  cStack_289 = '\x0f';
  uStack_2a0 = 0x6566736e617274;
  uStack_299 = 0x72;
  uStack_298 = 0x64656c69616620;
  uStack_291 = 0;
  FUN_10a002a94(appuStack_288,&uStack_2a0);
  appuStack_288[0] = &PTR_FUN_110b99e70;
  __ZNSt13runtime_errorC2ERKS_(appuStack_160,appuStack_288);
  _memcpy(auStack_150,auStack_278,0x110);
  appuStack_160[0] = &PTR_FUN_110b99e70;
  FUN_10a05bde0(auStack_168,appuStack_160);
  __ZNSt13runtime_errorD2Ev(appuStack_160);
  func_0x000109d1b350(*(undefined8 *)(param_3 + 0x10),auStack_168);
  __ZNSt13exception_ptrD1Ev(auStack_168);
  __ZNSt13runtime_errorD2Ev(appuStack_288);
  if (cStack_289 < '\0') {
    __ZdlPv(CONCAT17(uStack_299,uStack_2a0));
  }
  return;
}



/* Entry: 10a7d764c; end: 10a7d768b;  */

void FUN_10a7d764c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar1 = (ulong *)(plVar4 + 1);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 >> 0x21 == 1) {
    FUN_109d1b3c4(plVar4,1,param_1 + 8);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a7d768c; end: 10a7d7707;  */

void FUN_10a7d768c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110c1b518;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  return;
}



/* Entry: 10a7d7708; end: 10a7d7a33;  */

void FUN_10a7d7708(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x50);
    FUN_10a724ba4(param_1 + 0x58,param_1 + 0x48,*(undefined8 *)(param_1 + 0x60));
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x58);
    plVar5 = (long *)(*(long *)(param_1 + 0x58) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x68) = 1;
      lVar8 = *(long *)(param_1 + 0x50);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_38 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_48 = 0;
            lStack_40 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  lVar8 = *(long *)(param_1 + 0x50);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar8 + 0xa8) & 1) != 0) {
      FUN_10a7d334c(param_1 + 0x10,lVar8 + 0x98);
      plVar5 = *(long **)(param_1 + 0x50);
      if (plVar5 != (long *)0x0) {
        puVar1 = (ulong *)(plVar5 + 1);
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar6 & 0x1fffffffc) == 4) {
          do {
            uVar6 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar6 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar6 - 1 == 0) {
            (**(code **)(*plVar5 + 8))();
          }
        }
      }
      plVar5 = *(long **)(param_1 + 0x58);
      if (plVar5 != (long *)0x0) {
        puVar1 = (ulong *)(plVar5 + 1);
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar6 & 0x1fffffffc) == 4) {
          do {
            uVar6 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar6 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar6 - 1 == 0) {
            (**(code **)(*plVar5 + 8))();
          }
        }
      }
      plVar5 = *(long **)(param_1 + 0x48);
      if (plVar5 != (long *)0x0) {
        puVar1 = (ulong *)(plVar5 + 1);
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar6 & 0x1fffffffc) == 4) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          do {
            uVar6 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar6 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar6 - 1 == 0) {
            (**(code **)(*plVar5 + 8))(plVar5);
          }
        }
      }
      func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_1);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar8 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a7d791c);
  (*pcVar4)();
}



/* Entry: 10a7d7a34; end: 10a7d7ba3;  */

void FUN_10a7d7a34(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x50);
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    if (plVar5 == (long *)0x0) goto LAB_10a7d7b88;
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a7d7b88;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar4 & 0x1fffffffc) == 4) {
        do {
          uVar4 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar4 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar4 - 1 == 0) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x58);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar4 & 0x1fffffffc) == 4) {
        do {
          uVar4 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar4 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar4 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x48);
    if (plVar5 == (long *)0x0) goto LAB_10a7d7b88;
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a7d7b88;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (uVar4 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
LAB_10a7d7b88:
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a7d7ba4; end: 10a7d7e8f;  */

void FUN_10a7d7ba4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    FUN_10a7d2e70(param_1 + 0x60,param_1 + 0x58);
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x60);
    plVar5 = (long *)(*(long *)(param_1 + 0x60) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x68) = 1;
      lVar8 = *(long *)(param_1 + 0x48);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_38);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  lVar8 = *(long *)(param_1 + 0x48);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar8 + 0xa8) & 1) != 0) {
      FUN_10a7d2db0(param_1 + 0x10,lVar8 + 0x98);
      plVar5 = *(long **)(param_1 + 0x48);
      if (plVar5 != (long *)0x0) {
        puVar1 = (ulong *)(plVar5 + 1);
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar6 & 0x1fffffffc) == 4) {
          do {
            uVar6 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar6 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar6 - 1 == 0) {
            (**(code **)(*plVar5 + 8))();
          }
        }
      }
      plVar5 = *(long **)(param_1 + 0x60);
      if (plVar5 != (long *)0x0) {
        puVar1 = (ulong *)(plVar5 + 1);
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar6 & 0x1fffffffc) == 4) {
          do {
            uVar6 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar6 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar6 - 1 == 0) {
            (**(code **)(*plVar5 + 8))();
          }
        }
      }
      plVar5 = *(long **)(param_1 + 0x58);
      if (plVar5 != (long *)0x0) {
        puVar1 = (ulong *)(plVar5 + 1);
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar6 & 0x1fffffffc) == 4) {
          do {
            uVar6 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar6 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar6 - 1 == 0) {
            (**(code **)(*plVar5 + 8))();
          }
        }
      }
      func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_1);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar8 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a7d7d8c);
  (*pcVar4)();
}



/* Entry: 10a7d7e90; end: 10a7d7f97;  */

void FUN_10a7d7e90(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if ((*(byte *)(param_1 + 0x68) & 1) != 0) {
    plVar4 = *(long **)(param_1 + 0x48);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    plVar4 = *(long **)(param_1 + 0x60);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
  }
  plVar4 = *(long **)(param_1 + 0x58);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a7d7f98; end: 10a7d82c3;  */

void FUN_10a7d7f98(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x50);
    FUN_10a724ba4(param_1 + 0x58,param_1 + 0x48,*(undefined8 *)(param_1 + 0x60));
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x58);
    plVar5 = (long *)(*(long *)(param_1 + 0x58) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x68) = 1;
      lVar8 = *(long *)(param_1 + 0x50);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_38 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_48 = 0;
            lStack_40 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  lVar8 = *(long *)(param_1 + 0x50);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar8 + 0xa8) & 1) != 0) {
      FUN_10a7d334c(param_1 + 0x10,lVar8 + 0x98);
      plVar5 = *(long **)(param_1 + 0x50);
      if (plVar5 != (long *)0x0) {
        puVar1 = (ulong *)(plVar5 + 1);
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar6 & 0x1fffffffc) == 4) {
          do {
            uVar6 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar6 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar6 - 1 == 0) {
            (**(code **)(*plVar5 + 8))();
          }
        }
      }
      plVar5 = *(long **)(param_1 + 0x58);
      if (plVar5 != (long *)0x0) {
        puVar1 = (ulong *)(plVar5 + 1);
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar6 & 0x1fffffffc) == 4) {
          do {
            uVar6 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar6 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar6 - 1 == 0) {
            (**(code **)(*plVar5 + 8))();
          }
        }
      }
      plVar5 = *(long **)(param_1 + 0x48);
      if (plVar5 != (long *)0x0) {
        puVar1 = (ulong *)(plVar5 + 1);
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar6 & 0x1fffffffc) == 4) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          do {
            uVar6 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar6 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar6 - 1 == 0) {
            (**(code **)(*plVar5 + 8))(plVar5);
          }
        }
      }
      func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_1);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar8 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a7d81ac);
  (*pcVar4)();
}



/* Entry: 10a7d82c4; end: 10a7d8433;  */

void FUN_10a7d82c4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x50);
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    if (plVar5 == (long *)0x0) goto LAB_10a7d8418;
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a7d8418;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar4 & 0x1fffffffc) == 4) {
        do {
          uVar4 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar4 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar4 - 1 == 0) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x58);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar4 & 0x1fffffffc) == 4) {
        do {
          uVar4 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar4 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar4 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x48);
    if (plVar5 == (long *)0x0) goto LAB_10a7d8418;
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a7d8418;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (uVar4 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
LAB_10a7d8418:
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a7d8434; end: 10a7d871f;  */

void FUN_10a7d8434(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    FUN_10a7d338c(param_1 + 0x60,param_1 + 0x58);
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x60);
    plVar5 = (long *)(*(long *)(param_1 + 0x60) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x68) = 1;
      lVar8 = *(long *)(param_1 + 0x48);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_38);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  lVar8 = *(long *)(param_1 + 0x48);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar8 + 0xa8) & 1) != 0) {
      FUN_10a7d2db0(param_1 + 0x10,lVar8 + 0x98);
      plVar5 = *(long **)(param_1 + 0x48);
      if (plVar5 != (long *)0x0) {
        puVar1 = (ulong *)(plVar5 + 1);
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar6 & 0x1fffffffc) == 4) {
          do {
            uVar6 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar6 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar6 - 1 == 0) {
            (**(code **)(*plVar5 + 8))();
          }
        }
      }
      plVar5 = *(long **)(param_1 + 0x60);
      if (plVar5 != (long *)0x0) {
        puVar1 = (ulong *)(plVar5 + 1);
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar6 & 0x1fffffffc) == 4) {
          do {
            uVar6 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar6 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar6 - 1 == 0) {
            (**(code **)(*plVar5 + 8))();
          }
        }
      }
      plVar5 = *(long **)(param_1 + 0x58);
      if (plVar5 != (long *)0x0) {
        puVar1 = (ulong *)(plVar5 + 1);
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar6 & 0x1fffffffc) == 4) {
          do {
            uVar6 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar6 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar6 - 1 == 0) {
            (**(code **)(*plVar5 + 8))();
          }
        }
      }
      func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_1);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar8 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a7d861c);
  (*pcVar4)();
}



/* Entry: 10a7d8720; end: 10a7d889f;  */

void FUN_10a7d8720(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if ((*(byte *)(param_1 + 0x68) & 1) != 0) {
    plVar4 = *(long **)(param_1 + 0x48);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    plVar4 = *(long **)(param_1 + 0x60);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
  }
  plVar4 = *(long **)(param_1 + 0x58);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a7d88a0; end: 10a7d88af;  */

/* WARNING: Possible PIC construction at 0x000109381140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001093811a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109381144) */
/* WARNING: Removing unreachable block (ram,0x0001093811bc) */
/* WARNING: Removing unreachable block (ram,0x0001093811d0) */
/* WARNING: Removing unreachable block (ram,0x0001093811fc) */
/* WARNING: Removing unreachable block (ram,0x0001093811dc) */
/* WARNING: Removing unreachable block (ram,0x00010938120c) */
/* WARNING: Removing unreachable block (ram,0x000109381228) */
/* WARNING: Removing unreachable block (ram,0x000109381218) */
/* WARNING: Removing unreachable block (ram,0x000109381224) */
/* WARNING: Removing unreachable block (ram,0x00010938123c) */
/* WARNING: Removing unreachable block (ram,0x000109381248) */
/* WARNING: Removing unreachable block (ram,0x00010938124c) */
/* WARNING: Removing unreachable block (ram,0x000109381154) */
/* WARNING: Removing unreachable block (ram,0x00010938115c) */
/* WARNING: Removing unreachable block (ram,0x00010938116c) */
/* WARNING: Removing unreachable block (ram,0x000109381184) */
/* WARNING: Removing unreachable block (ram,0x00010938118c) */
/* WARNING: Removing unreachable block (ram,0x000109381194) */
/* WARNING: Removing unreachable block (ram,0x0001093811a8) */
/* WARNING: Removing unreachable block (ram,0x000109381198) */
/* WARNING: Removing unreachable block (ram,0x0001093811b4) */
/* WARNING: Removing unreachable block (ram,0x000109381268) */

void FUN_10a7d88a0(void)

{
  byte bVar1;
  long *plVar2;
  undefined1 *puVar3;
  bool bVar4;
  undefined1 *puVar5;
  long *plVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  byte *unaff_x19;
  ulong unaff_x20;
  byte *unaff_x21;
  long *plVar10;
  long *unaff_x22;
  undefined1 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  puVar3 = (undefined1 *)register0x00000008;
  bVar1 = bRam00000001137ebc00;
  pbVar7 = (byte *)0x1137ebc00;
  while( true ) {
    pbVar7 = pbVar7 + 8;
    uVar8 = (ulong)bVar1;
    *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
    *(undefined1 **)(puVar3 + -0x38) = unaff_x23;
    *(long **)(puVar3 + -0x30) = unaff_x22;
    *(byte **)(puVar3 + -0x28) = unaff_x21;
    *(ulong *)(puVar3 + -0x20) = unaff_x20;
    *(byte **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
    *(undefined **)(puVar3 + -8) = unaff_x30;
    unaff_x29 = puVar3 + -0x10;
    *(undefined8 *)(puVar3 + -0x68) = 0;
    *(undefined8 *)(puVar3 + -0x60) = 0;
    *(undefined8 *)(puVar3 + -0x58) = 0;
    if (bVar1 == 1) {
      func_0x000109381340(puVar3 + -0x68,*(undefined8 *)(*(long *)pbVar7 + 0x10));
      plVar6 = *(undefined8 **)pbVar7 + 1;
      unaff_x22 = (long *)**(undefined8 **)pbVar7;
      if (unaff_x22 != plVar6) {
        puVar5 = *(undefined1 **)(puVar3 + -0x60);
        do {
          if (puVar5 < *(undefined1 **)(puVar3 + -0x58)) {
            *puVar5 = (char)unaff_x22[7];
            *(long *)(puVar5 + 8) = unaff_x22[8];
            *(undefined1 *)(unaff_x22 + 7) = 0;
            unaff_x22[8] = 0;
            puVar5 = puVar5 + 0x10;
          }
          else {
            puVar5 = puVar3 + -0x68;
            func_0x000109381694(puVar5,unaff_x22 + 7);
          }
          *(undefined1 **)(puVar3 + -0x60) = puVar5;
          plVar2 = (long *)unaff_x22[1];
          plVar10 = unaff_x22;
          if ((long *)unaff_x22[1] == (long *)0x0) {
            do {
              unaff_x22 = (long *)plVar10[2];
              bVar4 = (long *)*unaff_x22 != plVar10;
              plVar10 = unaff_x22;
            } while (bVar4);
          }
          else {
            do {
              unaff_x22 = plVar2;
              plVar2 = (long *)*unaff_x22;
            } while ((long *)*unaff_x22 != (long *)0x0);
          }
        } while (unaff_x22 != plVar6);
      }
    }
    else if (bVar1 == 2) {
      func_0x000109381340(puVar3 + -0x68,(*(long **)pbVar7)[1] - **(long **)pbVar7 >> 4);
      unaff_x22 = (long *)(*(undefined8 **)pbVar7)[1];
      for (plVar6 = (long *)**(undefined8 **)pbVar7; plVar6 != unaff_x22; plVar6 = plVar6 + 2) {
        func_0x0001093813f8(puVar3 + -0x68,plVar6);
      }
    }
    lVar9 = *(long *)(puVar3 + -0x60);
    if (*(long *)(puVar3 + -0x68) == lVar9) break;
    unaff_x23 = puVar3 + -0x78;
    puVar3[-0x78] = *(undefined1 *)(lVar9 + -0x10);
    *(undefined8 *)(puVar3 + -0x70) = *(undefined8 *)(lVar9 + -8);
    *(undefined1 *)(lVar9 + -0x10) = 0;
    *(undefined8 *)(lVar9 + -8) = 0;
    unaff_x21 = (byte *)(*(long *)(puVar3 + -0x60) + -0x10);
    bVar1 = *unaff_x21;
    unaff_x30 = &UNK_109381144;
    puVar3 = puVar3 + -0x80;
    unaff_x19 = pbVar7;
    unaff_x20 = uVar8;
    pbVar7 = unaff_x21;
  }
  if (bVar1 < 3) {
    if (bVar1 == 1) {
      func_0x00010938179c(*(long *)pbVar7,*(undefined8 *)(*(long *)pbVar7 + 8));
    }
    else {
      if (bVar1 != 2) goto code_r0x000109381300;
      *(undefined8 *)(puVar3 + -0x78) = *(undefined8 *)pbVar7;
      func_0x000109381838(puVar3 + -0x78);
    }
code_r0x0001093812f8:
    plVar6 = *(long **)pbVar7;
  }
  else if (bVar1 == 3) {
    plVar6 = *(long **)pbVar7;
    if (*(char *)((long)plVar6 + 0x17) < '\0') {
      lVar9 = *plVar6;
code_r0x0001093812f4:
      __ZdlPv(lVar9);
      goto code_r0x0001093812f8;
    }
  }
  else {
    if (bVar1 != 8) goto code_r0x000109381300;
    plVar6 = *(long **)pbVar7;
    lVar9 = *plVar6;
    if (lVar9 != 0) {
      plVar6[1] = lVar9;
      goto code_r0x0001093812f4;
    }
  }
  __ZdlPv(plVar6);
code_r0x000109381300:
  *(undefined1 **)(puVar3 + -0x78) = puVar3 + -0x68;
  func_0x000109381838(puVar3 + -0x78);
  return;
}



/* Entry: 10a7d88b0; end: 10a7d898f;  */

undefined *** FUN_10a7d88b0(undefined8 param_1,int param_2)

{
  undefined ****ppppuVar1;
  undefined ****ppppuVar2;
  undefined ***pppuVar3;
  undefined **ppuVar4;
  undefined ****ppppuVar5;
  undefined *****pppppuVar6;
  undefined ****ppppuVar7;
  undefined ***pppuVar8;
  undefined **unaff_x20;
  undefined ***pppuStack_e0;
  undefined1 uStack_d1;
  undefined1 **ppuStack_d0;
  undefined1 *puStack_c8;
  undefined ****ppppuStack_78;
  undefined ***pppuStack_70;
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar5 = &pppuStack_70;
  pppppuVar6 = &ppppuStack_78;
  FUN_10a7d8990();
  if (pppuStack_70 == (undefined ***)0x0) {
    pppuVar8 = (undefined ***)0x0;
    pppuVar3 = (undefined ***)0x0;
  }
  else {
    uStack_30 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    unaff_x20 = &puStack_68;
    puStack_68 = &UNK_1053a6a3c;
    ppuStack_60 = &PTR_DAT_110ae9180;
    param_2 = (int)&puStack_68;
    pppppuVar6 = (undefined *****)0x1;
    pppuVar8 = pppuStack_70;
    FUN_10ad4df34();
    pppuVar3 = &ppuStack_60;
    (*(code *)*ppuStack_60)();
    ppppuVar5 = ppppuStack_78;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppuVar8;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(unaff_x20 + 1);
  __Unwind_Resume(pppuVar3);
  FUN_10ad040c0(&pppuStack_e0);
  if (pppuStack_e0 == (undefined ***)0x0) {
    *ppppuVar5 = (undefined ***)0x0;
    *pppppuVar6 = (undefined ****)0x0;
  }
  else {
    ppppuVar1 = (undefined ****)*pppuStack_e0;
    (*(code *)(*ppppuVar1)[3])();
    ppppuVar2 = ppppuVar1;
    if (param_2 != 1) {
      ppppuVar2 = (undefined ****)(((ulong)ppppuVar1 & 0xfffffffffffffff0) + 0x10);
    }
    __Znam();
    pppuVar3 = (undefined ***)*pppuStack_e0;
    (*(code *)(*pppuVar3)[4])(pppuVar3,ppppuVar2,1,ppppuVar1);
    if (lRam00000001137ebd30 != -1) {
      puStack_c8 = &uStack_d1;
      ppuStack_d0 = &puStack_c8;
      pppuVar3 = (undefined ***)0x1137ebd30;
      __ZNSt3__111__call_onceERVmPvPFvS2_E(0x1137ebd30,&ppuStack_d0,FUN_10a7d8b14);
    }
    pppuVar8 = pppuStack_e0;
    if (ppppuVar1 != (undefined ****)0x0) {
      ppppuVar7 = (undefined ****)0x0;
      do {
        *(byte *)((long)ppppuVar2 + (long)ppppuVar7) =
             *(byte *)(((ulong)ppppuVar7 & 0x1f) + 0x1137ebd38) ^
             *(byte *)((long)ppppuVar2 + (long)ppppuVar7);
        ppppuVar7 = (undefined ****)((long)ppppuVar7 + 1);
      } while (ppppuVar1 != ppppuVar7);
    }
    *pppppuVar6 = ppppuVar1;
    *ppppuVar5 = (undefined ***)ppppuVar2;
    pppuStack_e0 = (undefined ***)0x0;
    if (pppuVar8 != (undefined ***)0x0) {
      ppuVar4 = *pppuVar8;
      *pppuVar8 = (undefined **)0x0;
      if (ppuVar4 != (undefined **)0x0) {
        (**(code **)(*ppuVar4 + 0x40))();
      }
      __ZdlPv(pppuVar8);
      pppuVar3 = pppuVar8;
    }
  }
  return pppuVar3;
}



/* Entry: 10a7d8990; end: 10a7d8b13;  */

void FUN_10a7d8990(undefined8 param_1,ulong *param_2,ulong *param_3,int param_4)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong *puStack_60;
  undefined1 uStack_51;
  undefined1 **ppuStack_50;
  undefined1 *puStack_48;
  
  FUN_10ad040c0(&puStack_60,param_1,&UNK_10f432965);
  if (puStack_60 == (ulong *)0x0) {
    *param_2 = 0;
    *param_3 = 0;
  }
  else {
    plVar2 = (long *)*puStack_60;
    (**(code **)(*plVar2 + 0x18))();
    plVar3 = plVar2;
    if (param_4 != 1) {
      plVar3 = (long *)(((ulong)plVar2 & 0xfffffffffffffff0) + 0x10);
    }
    __Znam();
    (**(code **)(*(long *)*puStack_60 + 0x20))((long *)*puStack_60,plVar3,1,plVar2);
    if (lRam00000001137ebd30 != -1) {
      puStack_48 = &uStack_51;
      ppuStack_50 = &puStack_48;
      __ZNSt3__111__call_onceERVmPvPFvS2_E(0x1137ebd30,&ppuStack_50,FUN_10a7d8b14);
    }
    puVar1 = puStack_60;
    if (plVar2 != (long *)0x0) {
      plVar4 = (long *)0x0;
      do {
        *(byte *)((long)plVar3 + (long)plVar4) =
             *(byte *)(((ulong)plVar4 & 0x1f) + 0x1137ebd38) ^
             *(byte *)((long)plVar3 + (long)plVar4);
        plVar4 = (long *)((long)plVar4 + 1);
      } while (plVar2 != plVar4);
    }
    *param_3 = (ulong)plVar2;
    *param_2 = (ulong)plVar3;
    puStack_60 = (ulong *)0x0;
    if (puVar1 != (ulong *)0x0) {
      plVar3 = (long *)*puVar1;
      *puVar1 = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x40))();
      }
      __ZdlPv(puVar1);
    }
  }
  return;
}



/* Entry: 10a7d8b14; end: 10a7d8b87;  */

void FUN_10a7d8b14(void)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = 0;
  uRam00000001137ebd40 = 0x50489b0483b28a64;
  uRam00000001137ebd38 = 0x1d5d37bba77245ee;
  uRam00000001137ebd50 = 0xf137fd28f899e3b2;
  uRam00000001137ebd48 = 0x3d0bc0b30c10b9a5;
  uVar2 = 7;
  do {
    *(byte *)(lVar1 + 0x1137ebd38) = *(byte *)(lVar1 + 0x1137ebd38) ^ (byte)uVar2;
    uVar2 = (uVar2 * 0x3b) % 0x1f39;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x20);
  return;
}



/* Entry: 10a7d8b88; end: 10a7d9107;  */

undefined ******
FUN_10a7d8b88(float param_1,undefined ******param_2,ulong *param_3,undefined1 param_4)

{
  long *plVar1;
  undefined *****pppppuVar2;
  long *plVar3;
  undefined *****pppppuVar4;
  char cVar5;
  undefined ******ppppppuVar6;
  undefined **ppuVar7;
  long lVar8;
  int iVar9;
  undefined ****ppppuVar10;
  undefined *****pppppuVar11;
  bool bVar12;
  ulong uStack_e0;
  undefined *****pppppuStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined ****ppppuStack_b8;
  long *plStack_b0;
  undefined ****ppppuStack_a8;
  long *plStack_a0;
  undefined *****pppppuStack_98;
  undefined ****ppppuStack_90;
  long *plStack_88;
  undefined *****pppppuStack_80;
  undefined *****pppppuStack_78;
  undefined ****ppppuStack_70;
  long *plStack_68;
  undefined *****pppppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuStack_a8 = (undefined ****)*param_3;
  *param_2 = (undefined *****)ppppuStack_a8;
  pppppuVar11 = (undefined *****)param_3[1];
  param_2[1] = pppppuVar11;
  plStack_a0 = (long *)0x0;
  if (pppppuVar11 != (undefined *****)0x0) {
    pppppuVar11 = pppppuVar11 + 1;
    do {
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(pppppuVar11,0x10);
      if (bVar12) {
        *pppppuVar11 = (undefined ****)((long)*pppppuVar11 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    ppppuStack_a8 = (undefined ****)*param_3;
    plStack_a0 = (long *)param_3[1];
  }
  iVar9 = *(int *)(ppppuStack_a8 + 0x31);
  if (7 < iVar9) {
    iVar9 = 8;
  }
  if (plStack_a0 == (long *)0x0) {
    plStack_68 = (long *)0x0;
    plStack_b0 = (long *)0x0;
    pppppuVar11 = (undefined *****)ppppuStack_a8;
LAB_10a7d8ca0:
    plStack_88 = (long *)0x0;
    bVar12 = true;
    ppppuStack_b8 = (undefined ****)pppppuVar11;
  }
  else {
    plVar3 = plStack_a0 + 1;
    do {
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar12) {
        *plVar3 = *plVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar12) {
        *plVar3 = *plVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    ppppuStack_b8 = (undefined ****)*param_3;
    plStack_b0 = (long *)param_3[1];
    pppppuVar11 = (undefined *****)ppppuStack_b8;
    plStack_68 = plStack_a0;
    if (plStack_b0 == (long *)0x0) goto LAB_10a7d8ca0;
    plVar3 = plStack_b0 + 1;
    do {
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar12) {
        *plVar3 = *plVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar12) {
        *plVar3 = *plVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar12 = false;
    pppppuVar11 = (undefined *****)*param_3;
    plStack_88 = plStack_b0;
  }
  plVar3 = plStack_88;
  pppppuStack_78 = (undefined *****)&PTR_DAT_110c1f548;
  pppppuStack_98 = (undefined *****)&PTR_FUN_110c1f5d8;
  pppppuStack_60 = (undefined *****)&pppppuStack_78;
  ppppuStack_90 = ppppuStack_b8;
  pppppuStack_80 = (undefined *****)&pppppuStack_98;
  ppppuStack_70 = ppppuStack_a8;
  FUN_10a127d9c(param_2 + 2,pppppuStack_60,&pppppuStack_98,iVar9 << 1,
                *(undefined4 *)(pppppuVar11 + 0x31));
  if ((undefined ******)pppppuStack_80 == &pppppuStack_98) {
    lVar8 = 0x20;
LAB_10a7d8cf4:
    (**(code **)((long)*pppppuStack_80 + lVar8))();
  }
  else if ((undefined ******)pppppuStack_80 != (undefined ******)0x0) {
    lVar8 = 0x28;
    goto LAB_10a7d8cf4;
  }
  if (!bVar12) {
    plVar1 = plVar3 + 1;
    do {
      lVar8 = *plVar1;
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if ((undefined ******)pppppuStack_60 == &pppppuStack_78) {
    lVar8 = 0x20;
  }
  else {
    if ((undefined ******)pppppuStack_60 == (undefined ******)0x0) goto LAB_10a7d8d60;
    lVar8 = 0x28;
  }
  (**(code **)((long)*pppppuStack_60 + lVar8))();
LAB_10a7d8d60:
  plVar3 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    plVar1 = plStack_a0 + 1;
    do {
      lVar8 = *plVar1;
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  pppppuVar11 = (undefined *****)*param_3;
  pppppuVar4 = (undefined *****)param_3[1];
  if (pppppuVar4 != (undefined *****)0x0) {
    pppppuVar2 = pppppuVar4 + 1;
    do {
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(pppppuVar2,0x10);
      if (bVar12) {
        *pppppuVar2 = (undefined ****)((long)*pppppuVar2 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  param_2[0x1c] = pppppuVar11;
  param_2[0x1d] = pppppuVar4;
  uStack_c8 = 0;
  uStack_c0 = 0;
  if (pppppuVar11 == (undefined *****)0x0) {
    iVar9 = 0;
    *(undefined4 *)(param_2 + 0x1e) = 0;
  }
  else {
    iVar9 = *(int *)(pppppuVar11 + 0x31);
    *(int *)(param_2 + 0x1e) = iVar9;
    if (1 < iVar9) {
      iVar9 = iVar9 - (uint)(pppppuVar11[0x48] != pppppuVar11[0x49]);
    }
  }
  *(int *)((long)param_2 + 0xf4) = iVar9;
  param_2[0x21] = (undefined *****)0x0;
  param_2[0x20] = (undefined *****)0x0;
  param_2[0x23] = (undefined *****)0x0;
  param_2[0x22] = (undefined *****)0x0;
  param_2[0x1f] = (undefined *****)(long)((1.0 / param_1) * 1e+09);
  FUN_10a7db3a0(param_2 + 0x1c);
  iVar9 = *(int *)(*param_3 + 0x188);
  ppuVar7 = (undefined **)(param_2 + 0x24);
  if (7 < iVar9) {
    iVar9 = 8;
  }
  ppppppuVar6 = (undefined ******)ppuVar7;
  FUN_10a133e10(ppuVar7,(long)iVar9);
  param_2[0x27] = (undefined *****)0xffffffffffffffff;
  param_2[0x28] = (undefined *****)0xffffffffffffffff;
  param_2[0x2a] = (undefined *****)0x1fca056;
  param_2[0x29] = (undefined *****)0x0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  param_2[0x2b] = (undefined *****)ppppppuVar6;
  *(undefined1 *)(param_2 + 0x2c) = param_4;
  *(undefined1 *)((long)param_2 + 0x161) = 0;
  pppppuStack_d8 = (undefined *****)param_3[1];
  uStack_e0 = *param_3;
  if (param_3[1] != 0) {
    plVar3 = (long *)(param_3[1] + 0x10);
    do {
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar12) {
        *plVar3 = *plVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  func_0x00010a128ce4(param_2 + 0x2d,&uStack_e0);
  ppppppuVar6 = (undefined ******)pppppuStack_d8;
  if ((undefined ******)pppppuStack_d8 != (undefined ******)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined1 *)(param_2 + 0x46) = *(undefined1 *)(param_2 + 0x2c);
  param_2[0x29] = (undefined *****)0x0;
  param_2[0x28] = (undefined *****)0xffffffffffffffff;
  param_2[0x2a] = (undefined *****)0x1fca056;
  __ZNSt3__16chrono12steady_clock3nowEv();
  param_2[0x2b] = (undefined *****)ppppppuVar6;
  if (*(char *)(param_2 + 0x2c) == '\x01') {
    FUN_10ad044f4(&pppppuStack_78);
    FUN_10ab240e8(&pppppuStack_98,*param_3);
    pppppuVar11 = (undefined *****)ppppuStack_70;
    ppppppuVar6 = (undefined ******)pppppuStack_78;
    if (-1 < (long)plStack_68) {
      pppppuVar11 = (undefined *****)((ulong)plStack_68 >> 0x38);
      ppppppuVar6 = &pppppuStack_78;
    }
    FUN_10ae03140(0,ppppppuVar6,pppppuVar11);
    func_0x00010ae02ecc();
    FUN_10ae03140();
    ppuVar7 = &PTR_PTR_113302b50;
    FUN_10ae079a0();
    FUN_10ae0314c();
    func_0x00010ae02edc();
    FUN_10ae0314c();
    ppppppuVar6 = (undefined ******)ppuVar7;
    FUN_10ae07cd4(ppuVar7,&PTR_PTR_113302b50);
    if ((long)plStack_88 < 0) {
      ppppppuVar6 = (undefined ******)pppppuStack_98;
      __ZdlPv();
    }
    if ((long)plStack_68 < 0) {
      ppppppuVar6 = (undefined ******)pppppuStack_78;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if ((long)plStack_68 < 0) {
      __ZdlPv(pppppuStack_78);
    }
    func_0x00010a128d90(param_2 + 0x2d);
    pppppuStack_78 = (undefined *****)ppuVar7;
    func_0x00010a133f0c(&pppppuStack_78);
    FUN_10a7d9108(param_2 + 0x1c);
    FUN_10a127e78(param_2 + 2);
    FUN_10a133db8(param_2);
    __Unwind_Resume();
    if (ppppppuVar6[5] != (undefined *****)0x0) {
      ppppppuVar6[6] = ppppppuVar6[5];
      __ZdlPv();
    }
    pppppuVar11 = ppppppuVar6[1];
    if (pppppuVar11 != (undefined *****)0x0) {
      pppppuVar4 = pppppuVar11 + 1;
      do {
        ppppuVar10 = *pppppuVar4;
        cVar5 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(pppppuVar4,0x10);
        if (bVar12) {
          *pppppuVar4 = (undefined ****)((long)ppppuVar10 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (ppppuVar10 == (undefined ****)0x0) {
        (*(code *)(*pppppuVar11)[2])(pppppuVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar11);
      }
    }
    return ppppppuVar6;
  }
  return param_2;
}



/* Entry: 10a7d9108; end: 10a7d919b;  */

long FUN_10a7d9108(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
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



/* Entry: 10a7d919c; end: 10a7d931f;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10a7d919c(long *param_1,int param_2)

{
  int iVar1;
  undefined8 *******pppppppuVar2;
  code *pcVar3;
  int iVar4;
  undefined **ppuVar5;
  int iVar6;
  undefined **ppuVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  undefined4 uVar14;
  undefined8 uStack_50;
  undefined8 *******pppppppuStack_48;
  undefined7 uStack_40;
  char cStack_39;
  uint uStack_38;
  undefined4 uStack_34;
  
  iVar10 = *(int *)(*param_1 + 0x188);
  iVar6 = 0;
  if (iVar10 != 0) {
    iVar6 = (iVar10 + param_2) / iVar10;
  }
  iVar6 = (iVar10 + param_2) - iVar6 * iVar10;
  plVar8 = param_1 + 0x24;
  uStack_34 = iVar6;
  FUN_10a60f120();
  iVar4 = (int)plVar8;
  if (iVar4 < 0) {
    param_1[0x27] = -0x100000000;
    while( true ) {
      plVar8 = param_1;
      FUN_10a7d9f28(param_1,iVar6);
      iVar6 = *(int *)((long)param_1 + 0x13c) - (int)param_1[0x27];
      iVar4 = (int)((ulong)(param_1[0x25] - param_1[0x24]) >> 4);
      iVar10 = 0;
      if (iVar6 != 0) {
        iVar6 = iVar6 + iVar4;
        iVar10 = 0;
        if (iVar4 != 0) {
          iVar10 = iVar6 / iVar4;
        }
        iVar10 = (iVar6 - iVar10 * iVar4) + 1;
      }
      if (iVar4 <= iVar10) break;
      iVar10 = (int)param_1 + 0x120;
      FUN_10a7fcc38();
      iVar6 = *(int *)(*param_1 + 0x188);
      iVar4 = 0;
      if (iVar6 != 0) {
        iVar4 = (iVar10 + 1) / iVar6;
      }
      iVar6 = (iVar10 + 1) - iVar4 * iVar6;
    }
    param_1[0x29] = 0;
    param_1[0x28] = -1;
    param_1[0x2a] = 0x1fca056;
    __ZNSt3__16chrono12steady_clock3nowEv();
    param_1[0x2b] = (long)plVar8;
    return plVar8;
  }
  if (iVar4 == iVar6) {
    return plVar8;
  }
  iVar1 = 0;
  if (iVar10 != 0) {
    iVar1 = (iVar4 + 1) / iVar10;
  }
  if (iVar6 != (iVar4 + 1) - iVar1 * iVar10) {
    plVar8 = param_1 + 0x24;
    FUN_10a12978c(plVar8,iVar6);
    uStack_38 = (uint)plVar8;
    if (-1 < (int)uStack_38) {
      if ((char)param_1[0x2c] == '\x01') {
        FUN_10a7d95dc(&uStack_50,param_1,plVar8);
        func_0x00010a800704(&uStack_34,&uStack_38,&uStack_50);
        ppuVar7 = &PTR_PTR_113302ba0;
        FUN_10ae079a0();
        func_0x00010a800750();
        FUN_10ae07cd4(ppuVar7,&PTR_PTR_113302ba0);
        if (cStack_39 < '\0') {
          __ZdlPv(uStack_50);
        }
        plVar8 = (long *)(ulong)uStack_38;
      }
      plVar12 = param_1 + 0x24;
      FUN_10a129680(plVar12,plVar8);
      param_1[0x29] = 0;
      param_1[0x28] = -1;
      param_1[0x2a] = 0x1fca056;
      __ZNSt3__16chrono12steady_clock3nowEv();
      param_1[0x2b] = (long)plVar12;
      return plVar12;
    }
    if (1 < iVar10) {
      FUN_10a7d9320(param_1,iVar6);
      return param_1;
    }
    return plVar8;
  }
  param_1[0x29] = 0;
  param_1[0x28] = -1;
  param_1[0x2a] = 0x1fca056;
  __ZNSt3__16chrono12steady_clock3nowEv();
  param_1[0x2b] = (long)plVar8;
  if ((int)param_1[0x27] == *(int *)((long)param_1 + 0x13c)) {
    FUN_10a7d95dc(&pppppppuStack_48,param_1);
    uVar13 = CONCAT17(cStack_39,uStack_40);
    pppppppuVar2 = pppppppuStack_48;
    if (-1 < uStack_34) {
      uVar13 = (ulong)uStack_34._3_1_;
      pppppppuVar2 = &pppppppuStack_48;
    }
    FUN_10ae03140(0,pppppppuVar2,uVar13);
    ppuVar7 = &PTR_PTR_113302cf8;
  }
  else {
    iVar10 = (int)param_1[0x27] + 1;
    uVar13 = param_1[0x25] - param_1[0x24];
    iVar6 = 0;
    iVar4 = (int)(uVar13 >> 4);
    if (iVar4 != 0) {
      iVar6 = iVar10 / iVar4;
    }
    uVar11 = (ulong)(iVar10 - iVar6 * iVar4);
    if ((ulong)((long)uVar13 >> 4) <= uVar11) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a7d95dc);
      (*pcVar3)();
    }
    plVar8 = (long *)(param_1[0x24] + uVar11 * 0x10);
    plVar12 = (long *)*plVar8;
    if ((plVar12 != (long *)0x0) && (*plVar12 != 0)) {
      if ((plVar12[2] == 0) || (((uint)*(undefined8 *)(plVar12[2] + 0x10) >> 1 & 1) != 0)) {
        plVar8 = param_1 + 0x24;
        func_0x00010a12964c();
        __ZNSt3__16chrono12steady_clock3nowEv();
        param_1[0x2b] = (long)plVar8;
        return (long *)0x1;
      }
      if ((char)param_1[0x2c] != '\x01') {
        return (long *)0x0;
      }
      plVar8 = (long *)*plVar8;
      if ((plVar8 == (long *)0x0) || (lVar9 = *plVar8, lVar9 == 0)) {
        uVar14 = 0xffffffff;
      }
      else {
        uVar14 = *(undefined4 *)(lVar9 + 8);
      }
      FUN_10a7d95dc(&pppppppuStack_48,param_1);
      func_0x00010ae02ecc(0,uVar14);
      FUN_10ae03140();
      ppuVar7 = &PTR_PTR_113302d78;
      ppuVar5 = ppuVar7;
      FUN_10ae079a0();
      func_0x00010ae02edc();
      FUN_10ae0314c();
      goto LAB_10a7d94fc;
    }
    FUN_10a7d95dc(&pppppppuStack_48,param_1);
    uVar13 = CONCAT17(cStack_39,uStack_40);
    pppppppuVar2 = pppppppuStack_48;
    if (-1 < uStack_34) {
      uVar13 = (ulong)uStack_34._3_1_;
      pppppppuVar2 = &pppppppuStack_48;
    }
    FUN_10ae03140(0,pppppppuVar2,uVar13);
    ppuVar7 = &PTR_PTR_113302cc8;
  }
  ppuVar5 = ppuVar7;
  FUN_10ae079a0();
  FUN_10ae0314c();
LAB_10a7d94fc:
  FUN_10ae07cd4(ppuVar5,ppuVar7);
  if (uStack_34 < 0) {
    __ZdlPv(pppppppuStack_48);
  }
  return (long *)0x0;
}



/* Entry: 10a7d9320; end: 10a7d93bf;  */

void FUN_10a7d9320(long *param_1,ulong param_2)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  
  param_1[0x27] = -0x100000000;
  while( true ) {
    plVar2 = param_1;
    FUN_10a7d9f28(param_1,param_2);
    iVar1 = *(int *)((long)param_1 + 0x13c) - (int)param_1[0x27];
    iVar3 = (int)((ulong)(param_1[0x25] - param_1[0x24]) >> 4);
    iVar4 = 0;
    if (iVar1 != 0) {
      iVar1 = iVar1 + iVar3;
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = iVar1 / iVar3;
      }
      iVar4 = (iVar1 - iVar4 * iVar3) + 1;
    }
    if (iVar3 <= iVar4) break;
    iVar4 = (int)param_1 + 0x120;
    FUN_10a7fcc38();
    iVar1 = *(int *)(*param_1 + 0x188);
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = (iVar4 + 1) / iVar1;
    }
    param_2 = (ulong)(uint)((iVar4 + 1) - iVar3 * iVar1);
  }
  param_1[0x29] = 0;
  param_1[0x28] = -1;
  param_1[0x2a] = 0x1fca056;
  __ZNSt3__16chrono12steady_clock3nowEv();
  param_1[0x2b] = (long)plVar2;
  return;
}



/* Entry: 10a7d93c0; end: 10a7d95db;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_10a7d93c0(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *******pppppppuVar3;
  code *pcVar4;
  undefined **ppuVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  int iVar11;
  undefined **ppuVar12;
  undefined4 uVar13;
  undefined8 *******pppppppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  if (*(int *)(param_1 + 0x138) == *(int *)(param_1 + 0x13c)) {
    FUN_10a7d95dc(&pppppppuStack_48,param_1);
    pppppppuVar3 = pppppppuStack_48;
    if (-1 < (char)bStack_31) {
      uStack_40 = (ulong)bStack_31;
      pppppppuVar3 = &pppppppuStack_48;
    }
    FUN_10ae03140(0,pppppppuVar3,uStack_40);
    ppuVar12 = &PTR_PTR_113302cf8;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x138) + 1;
    uVar10 = *(long *)(param_1 + 0x128) - *(long *)(param_1 + 0x120);
    iVar2 = 0;
    iVar11 = (int)(uVar10 >> 4);
    if (iVar11 != 0) {
      iVar2 = iVar1 / iVar11;
    }
    uVar8 = (ulong)(iVar1 - iVar2 * iVar11);
    if ((ulong)((long)uVar10 >> 4) <= uVar8) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a7d95dc);
      (*pcVar4)();
    }
    plVar6 = (long *)(*(long *)(param_1 + 0x120) + uVar8 * 0x10);
    plVar9 = (long *)*plVar6;
    if ((plVar9 != (long *)0x0) && (*plVar9 != 0)) {
      if ((plVar9[2] == 0) || (((uint)*(undefined8 *)(plVar9[2] + 0x10) >> 1 & 1) != 0)) {
        lVar7 = param_1 + 0x120;
        func_0x00010a12964c();
        __ZNSt3__16chrono12steady_clock3nowEv();
        *(long *)(param_1 + 0x158) = lVar7;
        return 1;
      }
      if (*(char *)(param_1 + 0x160) != '\x01') {
        return 0;
      }
      plVar6 = (long *)*plVar6;
      if ((plVar6 == (long *)0x0) || (lVar7 = *plVar6, lVar7 == 0)) {
        uVar13 = 0xffffffff;
      }
      else {
        uVar13 = *(undefined4 *)(lVar7 + 8);
      }
      FUN_10a7d95dc(&pppppppuStack_48,param_1);
      func_0x00010ae02ecc(0,uVar13);
      FUN_10ae03140();
      ppuVar12 = &PTR_PTR_113302d78;
      ppuVar5 = ppuVar12;
      FUN_10ae079a0();
      func_0x00010ae02edc();
      FUN_10ae0314c();
      goto LAB_10a7d94fc;
    }
    FUN_10a7d95dc(&pppppppuStack_48,param_1);
    pppppppuVar3 = pppppppuStack_48;
    if (-1 < (char)bStack_31) {
      uStack_40 = (ulong)bStack_31;
      pppppppuVar3 = &pppppppuStack_48;
    }
    FUN_10ae03140(0,pppppppuVar3,uStack_40);
    ppuVar12 = &PTR_PTR_113302cc8;
  }
  ppuVar5 = ppuVar12;
  FUN_10ae079a0();
  FUN_10ae0314c();
LAB_10a7d94fc:
  FUN_10ae07cd4(ppuVar5,ppuVar12);
  if ((char)bStack_31 < '\0') {
    __ZdlPv(pppppppuStack_48);
  }
  return 0;
}



/* Entry: 10a7d95dc; end: 10a7d9d1f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a7d95dc(undefined8 param_1,long *param_2)

{
  char *pcVar1;
  long *plVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  undefined8 *******pppppppuVar11;
  code *pcVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined ***pppuVar15;
  undefined ********ppppppppuVar16;
  long *plVar17;
  char *pcVar18;
  long lVar19;
  int iVar20;
  long lVar21;
  ulong uVar22;
  undefined8 *******pppppppuStack_2a0;
  long *plStack_298;
  byte bStack_289;
  undefined ********ppppppppuStack_288;
  undefined **ppuStack_280;
  undefined1 auStack_278 [7];
  byte bStack_271;
  undefined8 uStack_240;
  char cStack_229;
  undefined **appuStack_218 [19];
  long lStack_180;
  long *plStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined1 auStack_160 [56];
  undefined8 uStack_128;
  char cStack_111;
  undefined **appuStack_100 [20];
  
  lVar5 = param_2[0x24];
  lVar6 = param_2[0x25];
  uVar7 = *(uint *)(param_2 + 0x27);
  FUN_109fed7e0(&ppuStack_170);
  iVar20 = (int)((ulong)(lVar6 - lVar5) >> 4);
  if (0 < iVar20) {
    uVar22 = 0;
    lVar21 = (long)(iVar20 + -1);
    pcVar1 = "";
    do {
      lVar19 = param_2[0x24];
      if ((ulong)(param_2[0x25] - lVar19 >> 4) <= uVar22) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x10a7d9c74);
        (*pcVar12)();
      }
      pcVar18 = "R";
      if (uVar22 != uVar7) {
        pcVar18 = pcVar1;
      }
      FUN_10a002568(&ppuStack_170,pcVar18,uVar22 == uVar7);
      FUN_10a002568();
      plVar17 = (long *)(lVar19 + uVar22 * 0x10);
      if (((long *)*plVar17 == (long *)0x0) || (lVar19 = *(long *)*plVar17, lVar19 == 0)) {
        uVar14 = 0xffffffff;
      }
      else {
        uVar14 = *(undefined4 *)(lVar19 + 8);
      }
      __ZNSt3__19to_stringEi(&ppppppppuStack_288,uVar14);
      ppuVar3 = ppuStack_280;
      ppppppppuVar16 = ppppppppuStack_288;
      if (-1 < (char)bStack_271) {
        ppuVar3 = (undefined **)(ulong)bStack_271;
        ppppppppuVar16 = (undefined ********)&ppppppppuStack_288;
      }
      FUN_10a002568(&ppuStack_170,ppppppppuVar16,ppuVar3);
      if ((char)bStack_271 < '\0') {
        __ZdlPv(ppppppppuStack_288);
      }
      if ((long *)*plVar17 == (long *)0x0) {
        bVar13 = true;
        pcVar18 = "e";
      }
      else {
        bVar13 = *(long *)*plVar17 == 0;
        pcVar18 = "e";
        if (!bVar13) {
          pcVar18 = pcVar1;
        }
      }
      FUN_10a002568(&ppuStack_170,pcVar18,bVar13);
      FUN_10a002568();
      FUN_10a002568();
      if (((1 < *(uint *)(*param_2 + 0xf0)) && ((long *)*plVar17 != (long *)0x0)) &&
         (*(long *)*plVar17 != 0)) {
        func_0x00010a12944c(&pppppppuStack_2a0,plVar17);
        pppppppuVar11 = pppppppuStack_2a0;
        if (pppppppuStack_2a0 == (undefined8 *******)0x0) {
          func_0x00010a1294bc(&lStack_180,plVar17);
          if (lStack_180 != 0) {
            uVar8 = *(uint *)(*param_2 + 0xf0);
            uVar10 = 0;
            if (uVar8 != 0) {
              uVar10 = *(uint *)(lStack_180 + 8) / uVar8;
            }
            if (*(uint *)(lStack_180 + 8) == uVar10 * uVar8) {
              FUN_10a002568(&ppuStack_170,&UNK_10f678840,5);
            }
            if (*(long *)(lStack_180 + 0xb8) == 0) {
              FUN_10a002568(&ppuStack_170,&UNK_10f678846,5);
            }
            else {
              iVar20 = *(int *)(*(long *)(lStack_180 + 0xb8) + 8);
              pppuVar15 = &ppuStack_170;
              FUN_10a002568(pppuVar15,&DAT_10f62a9e0,2);
              __ZNSt3__19to_stringEi(&ppppppppuStack_288,iVar20);
              ppuVar3 = ppuStack_280;
              ppppppppuVar16 = ppppppppuStack_288;
              if (-1 < (char)bStack_271) {
                ppuVar3 = (undefined **)(ulong)bStack_271;
                ppppppppuVar16 = (undefined ********)&ppppppppuStack_288;
              }
              FUN_10a002568(pppuVar15,ppppppppuVar16,ppuVar3);
              if ((char)bStack_271 < '\0') {
                __ZdlPv(ppppppppuStack_288);
              }
              if (0 < iVar20) {
                uVar8 = *(uint *)(*param_2 + 0xf0);
                uVar10 = 0;
                if (uVar8 != 0) {
                  uVar10 = *(uint *)(lStack_180 + 8) / uVar8;
                }
                if (iVar20 != *(int *)(lStack_180 + 8) +
                              (uVar10 * uVar8 - *(uint *)(lStack_180 + 8))) {
                  FUN_10a002568(&ppuStack_170,&UNK_10f67883a,5);
                }
              }
            }
          }
          plVar17 = plStack_178;
          if (plStack_178 != (long *)0x0) {
            plVar2 = plStack_178 + 1;
            do {
              lVar19 = *plVar2;
              cVar9 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar13) {
                *plVar2 = lVar19 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (lVar19 == 0) {
              (**(code **)(*plStack_178 + 0x10))(plStack_178);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
            }
          }
        }
        else {
          FUN_10a002568(&ppuStack_170,&DAT_10f31a207,1);
          uVar8 = *(uint *)(*param_2 + 0xf0);
          uVar10 = 0;
          if (uVar8 != 0) {
            uVar10 = *(uint *)(pppppppuVar11 + 1) / uVar8;
          }
          if (*(uint *)(pppppppuVar11 + 1) != uVar10 * uVar8) {
            FUN_10a002568(&ppuStack_170,&UNK_10f67883a,5);
          }
        }
        plVar17 = plStack_298;
        if (plStack_298 != (long *)0x0) {
          plVar2 = plStack_298 + 1;
          do {
            lVar19 = *plVar2;
            cVar9 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar13) {
              *plVar2 = lVar19 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar19 == 0) {
            (**(code **)(*plStack_298 + 0x10))(plStack_298);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
      }
      pcVar18 = " | ";
      if (lVar21 <= (long)uVar22) {
        pcVar18 = pcVar1;
      }
      uVar4 = 3;
      if (lVar21 <= (long)uVar22) {
        uVar4 = 0;
      }
      FUN_10a002568(&ppuStack_170,pcVar18,uVar4);
      uVar22 = uVar22 + 1;
    } while (uVar22 != ((ulong)(lVar6 - lVar5) >> 4 & 0x7fffffff));
  }
  FUN_109fed7e0(&ppppppppuStack_288);
  ppppppppuVar16 = (undefined ********)&ppppppppuStack_288;
  FUN_10a002568(ppppppppuVar16,&UNK_10f67884c,10);
  plVar17 = param_2 + 0x24;
  FUN_10a60f120(plVar17);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(ppppppppuVar16,plVar17);
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  FUN_10a002568();
  ppppppppuVar16 = (undefined ********)&ppppppppuStack_288;
  FUN_10a002568(ppppppppuVar16,&UNK_10f678857,9);
  FUN_10a128848(&pppppppuStack_2a0,param_2 + 2);
  plVar17 = plStack_298;
  pppppppuVar11 = pppppppuStack_2a0;
  if (-1 < (char)bStack_289) {
    plVar17 = (long *)(ulong)bStack_289;
    pppppppuVar11 = &pppppppuStack_2a0;
  }
  FUN_10a002568(ppppppppuVar16,pppppppuVar11,plVar17);
  FUN_10a002568();
  if ((char)bStack_289 < '\0') {
    __ZdlPv(pppppppuStack_2a0);
  }
  ppppppppuVar16 = (undefined ********)&ppppppppuStack_288;
  FUN_10a002568(ppppppppuVar16,&UNK_10f678861,0xe);
  func_0x00010a002480(&pppppppuStack_2a0,&ppuStack_168,&lStack_180);
  pppppppuVar11 = pppppppuStack_2a0;
  if (-1 < (char)bStack_289) {
    plStack_298 = (long *)(ulong)bStack_289;
    pppppppuVar11 = &pppppppuStack_2a0;
  }
  FUN_10a002568(ppppppppuVar16,pppppppuVar11,plStack_298);
  FUN_10a002568();
  if ((char)bStack_289 < '\0') {
    __ZdlPv(pppppppuStack_2a0);
  }
  FUN_10a002568(&ppppppppuStack_288,&UNK_10f47a8fa,2);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  FUN_10a002568();
  func_0x00010a002480(param_1,&ppuStack_280,&pppppppuStack_2a0);
  appuStack_218[0] = &PTR_DAT_11088d708;
  ppppppppuStack_288 = (undefined ********)&PTR_DAT_11088d6e0;
  ppuStack_280 = &PTR_DAT_11088d7b0;
  if (cStack_229 < '\0') {
    __ZdlPv(uStack_240);
  }
  ppuVar3 = (undefined **)
            (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  ppuStack_280 = ppuVar3;
  __ZNSt3__16localeD1Ev(auStack_278);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppppppppuStack_288,&PTR_PTR_11088d720);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_218);
  appuStack_100[0] = &PTR_DAT_11088d708;
  ppuStack_170 = &PTR_DAT_11088d6e0;
  ppuStack_168 = &PTR_DAT_11088d7b0;
  if (cStack_111 < '\0') {
    __ZdlPv(uStack_128);
  }
  ppuStack_168 = ppuVar3;
  __ZNSt3__16localeD1Ev(auStack_160);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_170,&PTR_PTR_11088d720);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_100);
  return;
}



/* Entry: 10a7d9d20; end: 10a7d9e1f;  */

void FUN_10a7d9d20(long *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined8 *******pppppppuVar7;
  code *pcVar8;
  undefined **ppuVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  undefined8 ******ppppppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  iVar2 = *(int *)(param_2 + 0x138) + 1;
  uVar11 = *(long *)(param_2 + 0x128) - *(long *)(param_2 + 0x120);
  iVar4 = 0;
  iVar12 = (int)(uVar11 >> 4);
  if (iVar12 != 0) {
    iVar4 = iVar2 / iVar12;
  }
  iVar2 = iVar2 - iVar4 * iVar12;
  if (iVar2 == *(int *)(param_2 + 0x13c)) {
    FUN_10a7d95dc(&ppppppuStack_48);
    pppppppuVar7 = (undefined8 *******)ppppppuStack_48;
    if (-1 < (char)bStack_31) {
      uStack_40 = (ulong)bStack_31;
      pppppppuVar7 = &ppppppuStack_48;
    }
    FUN_10ae03140(0,pppppppuVar7,uStack_40);
    ppuVar9 = &PTR_PTR_113302bf8;
    FUN_10ae079a0();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar9,&PTR_PTR_113302bf8);
    if ((char)bStack_31 < '\0') {
      __ZdlPv(ppppppuStack_48);
    }
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if ((ulong)((long)uVar11 >> 4) <= (ulong)(long)iVar2) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10a7d9e20);
    (*pcVar8)();
  }
  puVar3 = (undefined8 *)(*(long *)(param_2 + 0x120) + (long)iVar2 * 0x10);
  plVar13 = (long *)*puVar3;
  if ((plVar13 != (long *)0x0) && (lVar10 = *plVar13, lVar10 != 0)) {
    plVar1 = plVar13 + 2;
    if (*plVar1 != 0) {
      plVar13 = (long *)*puVar3;
      if (((uint)*(undefined8 *)(*plVar1 + 0x10) >> 1 & 1) == 0) {
        FUN_109d1a244(plVar13 + 2);
        plVar13 = (long *)*puVar3;
      }
      if ((plVar13 == (long *)0x0) || (lVar10 = *plVar13, lVar10 == 0)) goto LAB_10a1295f8;
    }
    if (plVar13[2] != 0) {
      if (((uint)*(undefined8 *)(plVar13[2] + 0x10) >> 1 & 1) == 0) goto LAB_10a1295f8;
      plVar13 = (long *)*puVar3;
      lVar10 = *plVar13;
    }
    if (((*(long *)(lVar10 + 0x30) - *(long *)(lVar10 + 0x28) & 0xffffffff0U) != 0) &&
       (-1 < *(int *)(lVar10 + 8))) {
      (**(code **)(*(long *)*plVar13 + 0x18))();
      lVar10 = plVar13[1];
      lVar14 = *plVar13;
      param_1[1] = plVar13[1];
      *param_1 = lVar14;
      if (lVar10 == 0) {
        return;
      }
      plVar13 = (long *)(lVar10 + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = *plVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      return;
    }
  }
LAB_10a1295f8:
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a7d9e20; end: 10a7d9e7b;  */

void FUN_10a7d9e20(long param_1,long *param_2)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  long lVar9;
  code *pcVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined8 *puVar14;
  undefined **ppuVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined1 uVar18;
  
  lVar17 = *param_2;
  if ((lVar17 == 0) || (*(long *)(lVar17 + 0x10) == 0)) {
    return;
  }
  pbVar1 = (byte *)(lVar17 + 0x20);
  do {
    bVar3 = *pbVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar7) {
      *pbVar1 = 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if ((bVar3 & 1) != 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x161) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x161) = 1;
    puVar11 = &UNK_10f6786f3;
  }
  else {
    puVar11 = &UNK_10f678708;
  }
  puVar8 = PTR___tlv_bootstrap_11340d750;
  uVar4 = *(undefined8 *)(*param_2 + 0x10);
  uVar5 = *(undefined8 *)(*param_2 + 0x18);
  ppuVar15 = &PTR___tlv_bootstrap_11340d750;
  ppuVar12 = ppuVar15;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar13 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar12 & 1) == 0) {
    ppuVar12 = ppuVar13;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar12,0x100000000);
    (*(code *)puVar8)();
    *(undefined1 *)ppuVar15 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  puVar14 = (undefined8 *)ppuVar13[2];
  if (((puVar14 != (undefined8 *)0x0) && (lVar17 = puVar14[1], *(char *)(lVar17 + 0x17) == '\x01'))
     && (((*(byte *)(lVar17 + 0x42) | *(byte *)(lVar17 + 0x43)) & 1) != 0)) {
    FUN_10a192960(puVar14,0x90c1f879,&DAT_10f67a248);
    lVar17 = lRam00000001137ebd60;
    puVar16 = puVar14;
    FUN_10a1333cc();
    lVar9 = lRam00000001137ebd60;
    if (puVar16 != (undefined8 *)0x0) {
      uVar18 = 3;
      if (lRam00000001137ebd60 != lVar17) {
        uVar18 = 5;
      }
      lVar2 = 0;
      if (lRam00000001137ebd60 != lVar17) {
        lVar2 = lVar17;
      }
      *puVar16 = puVar11;
      puVar16[1] = lVar2;
      puVar16[2] = uVar4;
      *(undefined4 *)(puVar16 + 3) = 0x90c1f879;
      *(undefined2 *)((long)puVar16 + 0x1c) = 7;
      *(undefined1 *)((long)puVar16 + 0x1e) = uVar18;
      if ((*(byte *)(puVar14 + 0x38) & 1) == 0) goto LAB_10a8008d4;
      puVar14[0x18] = puVar14[0x18] + 1;
    }
    puVar16 = puVar14;
    FUN_10a1333cc();
    if (puVar16 != (undefined8 *)0x0) {
      uVar18 = 6;
      if (lRam00000001137ebd60 != lVar9) {
        uVar18 = 8;
      }
      lVar17 = 0;
      if (lRam00000001137ebd60 != lVar9) {
        lVar17 = lVar9;
      }
      *puVar16 = puVar11;
      puVar16[1] = lVar17;
      puVar16[2] = uVar5;
      *(undefined4 *)(puVar16 + 3) = 0x90c1f879;
      *(undefined2 *)((long)puVar16 + 0x1c) = 7;
      *(undefined1 *)((long)puVar16 + 0x1e) = uVar18;
      if ((*(byte *)(puVar14 + 0x38) & 1) == 0) {
LAB_10a8008d4:
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x10a8008d8);
        (*pcVar10)();
      }
      puVar14[0x18] = puVar14[0x18] + 1;
    }
  }
  return;
}



/* Entry: 10a7d9e7c; end: 10a7d9f27;  */

void FUN_10a7d9e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 uVar11;
  
  puVar2 = PTR___tlv_bootstrap_11340d750;
  ppuVar8 = &PTR___tlv_bootstrap_11340d750;
  ppuVar5 = ppuVar8;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar6 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar5 & 1) == 0) {
    ppuVar5 = ppuVar6;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar5,0x100000000);
    (*(code *)puVar2)();
    *(undefined1 *)ppuVar8 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  puVar7 = (undefined8 *)ppuVar6[2];
  if (((puVar7 != (undefined8 *)0x0) && (lVar10 = puVar7[1], *(char *)(lVar10 + 0x17) == '\x01')) &&
     (((*(byte *)(lVar10 + 0x42) | *(byte *)(lVar10 + 0x43)) & 1) != 0)) {
    FUN_10a192960(puVar7,0x90c1f879,&DAT_10f67a248);
    lVar10 = lRam00000001137ebd60;
    puVar9 = puVar7;
    FUN_10a1333cc();
    lVar3 = lRam00000001137ebd60;
    if (puVar9 != (undefined8 *)0x0) {
      uVar11 = 3;
      if (lRam00000001137ebd60 != lVar10) {
        uVar11 = 5;
      }
      lVar1 = 0;
      if (lRam00000001137ebd60 != lVar10) {
        lVar1 = lVar10;
      }
      *puVar9 = param_1;
      puVar9[1] = lVar1;
      puVar9[2] = param_2;
      *(undefined4 *)(puVar9 + 3) = 0x90c1f879;
      *(undefined2 *)((long)puVar9 + 0x1c) = 7;
      *(undefined1 *)((long)puVar9 + 0x1e) = uVar11;
      if ((*(byte *)(puVar7 + 0x38) & 1) == 0) goto LAB_10a8008d4;
      puVar7[0x18] = puVar7[0x18] + 1;
    }
    puVar9 = puVar7;
    FUN_10a1333cc();
    if (puVar9 != (undefined8 *)0x0) {
      uVar11 = 6;
      if (lRam00000001137ebd60 != lVar3) {
        uVar11 = 8;
      }
      lVar10 = 0;
      if (lRam00000001137ebd60 != lVar3) {
        lVar10 = lVar3;
      }
      *puVar9 = param_1;
      puVar9[1] = lVar10;
      puVar9[2] = param_3;
      *(undefined4 *)(puVar9 + 3) = 0x90c1f879;
      *(undefined2 *)((long)puVar9 + 0x1c) = 7;
      *(undefined1 *)((long)puVar9 + 0x1e) = uVar11;
      if ((*(byte *)(puVar7 + 0x38) & 1) == 0) {
LAB_10a8008d4:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8008d8);
        (*pcVar4)();
      }
      puVar7[0x18] = puVar7[0x18] + 1;
    }
  }
  return;
}



/* Entry: 10a7d9f28; end: 10a7da63f;  */

long * FUN_10a7d9f28(long *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  ulong *puVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  undefined **ppuVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  long *plVar17;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  int iStack_8c;
  long lStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  char cStack_49;
  uint uStack_44;
  
  uVar12 = (uint)param_2;
  iVar1 = *(int *)((long)param_1 + 0x13c) + 1;
  iVar5 = 0;
  iVar15 = (int)((ulong)(param_1[0x25] - param_1[0x24]) >> 4);
  if (iVar15 != 0) {
    iVar5 = iVar1 / iVar15;
  }
  uVar4 = iVar1 - iVar5 * iVar15;
  if (uVar4 == *(uint *)(param_1 + 0x27) && -1 < *(int *)((long)param_1 + 0x13c)) {
    uVar4 = 0xffffffff;
  }
  uVar16 = (ulong)uVar4;
  uStack_44 = uVar12;
  if ((int)uVar4 < 0) {
    FUN_10a7d95dc(&lStack_60,param_1);
    func_0x00010ae02ecc(0,param_2);
    FUN_10ae03140();
    ppuVar13 = &PTR_PTR_113302d38;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar13,&PTR_PTR_113302d38);
    if (cStack_49 < '\0') {
      __ZdlPv(lStack_60);
    }
    return (long *)0xffffffff;
  }
  uVar4 = *(uint *)(*param_1 + 0xf0);
  uVar8 = 0;
  if (uVar4 != 0) {
    uVar8 = uVar12 / uVar4;
  }
  FUN_10a127f2c(&plStack_70,param_1 + 2,param_2,uVar12 != uVar8 * uVar4);
  plStack_78 = (long *)0x0;
  if (uVar12 != uVar8 * uVar4) {
    lVar10 = *plStack_70;
    if ((lVar10 == 0) ||
       (___dynamic_cast(lVar10,&PTR_DAT_110ba75e8,&PTR_DAT_110ba7610,0), lVar10 == 0)) {
      lStack_88 = 0;
      plStack_80 = (long *)0x0;
    }
    else {
      plStack_80 = (long *)plStack_70[1];
      lStack_88 = lVar10;
      if (plStack_80 != (long *)0x0) {
        plVar17 = plStack_80 + 1;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar7) {
            *plVar17 = *plVar17 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
    }
    lVar10 = lStack_88;
    uVar4 = *(uint *)(*param_1 + 0xf0);
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar12 / uVar4;
    }
    iStack_8c = uVar8 * uVar4;
    FUN_10a127f2c(&plStack_a0,param_1 + 2,iStack_8c,0);
    plVar17 = plStack_a0;
    if ((plStack_a0 == (long *)0x0) || (lVar11 = *plStack_a0, lVar11 == 0)) {
      FUN_10a7d95dc(&lStack_60,param_1);
      func_0x00010a800704(&uStack_44,&iStack_8c,&lStack_60);
      ppuVar13 = &PTR_PTR_113302e68;
      FUN_10ae079a0();
      func_0x00010a800750();
      FUN_10ae07cd4(ppuVar13,&PTR_PTR_113302e68);
      if (cStack_49 < '\0') {
        __ZdlPv(lStack_60);
      }
      if (plStack_98 != (long *)0x0) {
        plVar17 = plStack_98 + 1;
        do {
          lVar10 = *plVar17;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar7) {
            *plVar17 = lVar10 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
        }
      }
      plVar17 = plStack_80;
      if (plStack_80 != (long *)0x0) {
        plVar2 = plStack_80 + 1;
        do {
          lVar10 = *plVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = lVar10 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_80 + 0x10))(plStack_80);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      plVar17 = (long *)0xffffffff;
      goto LAB_10a7da484;
    }
    ___dynamic_cast(lVar11,&PTR_DAT_110ba75e8,&PTR_DAT_110ba75f8,0);
    if (lVar11 == 0) {
      lStack_60 = 0;
      plStack_58 = (long *)0x0;
    }
    else {
      plStack_58 = (long *)plVar17[1];
      lStack_60 = lVar11;
      if (plStack_58 != (long *)0x0) {
        plVar17 = plStack_58 + 1;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar7) {
            *plVar17 = *plVar17 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
    }
    FUN_10a5ef3b4(lVar10 + 0xb8,&lStack_60);
    plVar17 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar2 = plStack_58 + 1;
      do {
        lVar10 = *plVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *plVar2 = lVar10 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
      }
    }
    plStack_a8 = (long *)0x0;
    FUN_10a128e1c(param_1 + 0x2d,&plStack_a0,&plStack_a8);
    if (plStack_a8 != (long *)0x0) {
      puVar3 = (ulong *)(plStack_a8 + 1);
      do {
        uVar14 = *puVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar7) {
          *puVar3 = uVar14 - 4;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((uVar14 & 0x1fffffffc) == 4) {
        do {
          uVar14 = *puVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar7) {
            *puVar3 = uVar14 - 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (uVar14 - 1 == 0) {
          (**(code **)(*plStack_a8 + 8))();
        }
      }
    }
    func_0x0001092b4524(&plStack_78,plStack_a0 + 2);
    if (plStack_98 != (long *)0x0) {
      plVar17 = plStack_98 + 1;
      do {
        lVar10 = *plVar17;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar7) {
          *plVar17 = lVar10 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
      }
    }
    plVar17 = plStack_80;
    if (plStack_80 != (long *)0x0) {
      plVar2 = plStack_80 + 1;
      do {
        lVar10 = *plVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *plVar2 = lVar10 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
      }
    }
  }
  if ((char)param_1[0x2c] == '\x01') {
    if ((ulong)(param_1[0x25] - param_1[0x24] >> 4) <= uVar16) {
LAB_10a7da520:
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10a7da524);
      (*pcVar9)();
    }
    lVar10 = *(long *)(param_1[0x24] + uVar16 * 0x10);
    if (((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x10), lVar10 != 0)) &&
       (((uint)*(undefined8 *)(lVar10 + 0x10) >> 1 & 1) == 0)) {
      if ((ulong)(param_1[0x25] - param_1[0x24] >> 4) <= uVar16) goto LAB_10a7da520;
      FUN_10a7d95dc(&lStack_60,param_1);
      func_0x00010ae02ecc(0,uVar16);
      func_0x00010ae02ecc();
      FUN_10ae03140();
      ppuVar13 = &PTR_PTR_113302dc8;
      FUN_10ae079a0();
      func_0x00010ae02edc();
      func_0x00010ae02edc();
      FUN_10ae0314c();
      FUN_10ae07cd4(ppuVar13,&PTR_PTR_113302dc8);
      if (cStack_49 < '\0') {
        __ZdlPv(lStack_60);
      }
    }
  }
  plVar17 = param_1 + 0x24;
  FUN_10a1296fc(plVar17,&plStack_70);
  plStack_b0 = plStack_78;
  plStack_78 = (long *)0x0;
  FUN_10a128e1c(param_1 + 0x2d,&plStack_70,&plStack_b0);
  if (plStack_b0 != (long *)0x0) {
    puVar3 = (ulong *)(plStack_b0 + 1);
    do {
      uVar16 = *puVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar7) {
        *puVar3 = uVar16 - 4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((uVar16 & 0x1fffffffc) == 4) {
      do {
        uVar16 = *puVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar7) {
          *puVar3 = uVar16 - 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (uVar16 - 1 == 0) {
        (**(code **)(*plStack_b0 + 8))();
      }
    }
  }
LAB_10a7da484:
  if (plStack_78 != (long *)0x0) {
    puVar3 = (ulong *)(plStack_78 + 1);
    do {
      uVar16 = *puVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar7) {
        *puVar3 = uVar16 - 4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((uVar16 & 0x1fffffffc) == 4) {
      do {
        uVar16 = *puVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar7) {
          *puVar3 = uVar16 - 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (uVar16 - 1 == 0) {
        (**(code **)(*plStack_78 + 8))();
      }
    }
  }
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
    do {
      lVar10 = *plVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar10 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  return plVar17;
}



/* Entry: 10a7da640; end: 10a7da71f;  */

long FUN_10a7da640(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  
  if (*(long *)(param_1 + 0x140) < 0) {
    return 0;
  }
  if (-1 < *(int *)(param_1 + 0x138)) {
    iVar6 = (int)param_1 + 0x120;
    FUN_10a60f120();
    if (-1 < iVar6) {
      lVar10 = param_1 + 0x120;
      FUN_10a7fcc38(lVar10);
      iVar2 = *(int *)(param_1 + 0xf0);
      iVar1 = ((int)lVar10 - iVar6) + iVar2;
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = iVar1 / iVar2;
      }
      iVar5 = *(int *)(param_1 + 0x13c) - *(int *)(param_1 + 0x138);
      uVar8 = 0;
      if (iVar5 != 0) {
        iVar9 = (int)((ulong)(*(long *)(param_1 + 0x128) - *(long *)(param_1 + 0x120)) >> 4);
        iVar5 = iVar5 + iVar9;
        iVar4 = 0;
        if (iVar9 != 0) {
          iVar4 = iVar5 / iVar9;
        }
        uVar8 = ~(iVar5 - iVar4 * iVar9);
      }
      iVar6 = iVar6 + (iVar1 - iVar3 * iVar2) + uVar8 + 1;
      iVar1 = *(int *)(param_1 + 0xf4);
      if (iVar1 < 1) {
        lVar10 = 0;
      }
      else {
        iVar2 = 0;
        if (iVar1 != 0) {
          iVar2 = iVar6 / iVar1;
        }
        iVar6 = iVar6 - iVar2 * iVar1;
        lVar10 = (long)iVar2;
      }
      lVar11 = *(long *)(param_1 + 0x100);
      lVar7 = param_1 + 0xe0;
      FUN_10a7da720(lVar7,iVar6);
      return lVar7 + lVar11 * lVar10 + *(long *)(param_1 + 0x148);
    }
  }
  return 0;
}



/* Entry: 10a7da720; end: 10a7da777;  */

long FUN_10a7da720(long param_1,uint param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  
  if ((int)param_2 < 1) {
    return 0;
  }
  if (*(int *)(param_1 + 0x14) <= (int)param_2) {
    return *(long *)(param_1 + 0x20);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  uVar3 = (ulong)param_2;
  if (lVar1 == *(long *)(param_1 + 0x30)) {
    return *(long *)(param_1 + 0x18) * uVar3;
  }
  if (uVar3 < (ulong)(*(long *)(param_1 + 0x30) - lVar1 >> 3)) {
    return *(long *)(lVar1 + uVar3 * 8);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a7da778);
  (*pcVar2)();
}



/* Entry: 10a7da778; end: 10a7da813;  */

float FUN_10a7da778(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  
  fVar5 = 0.0;
  if (-1 < *(int *)(param_1 + 0x138)) {
    uVar3 = param_1 + 0x120;
    FUN_10a60f120();
    iVar2 = (int)uVar3;
    if (iVar2 < *(int *)(param_1 + 0xf4)) {
      if (iVar2 < 0) {
        __ZNSt3__16chrono12steady_clock3nowEv();
      }
      else {
        lVar1 = *(long *)(param_1 + 0x108);
        if ((ulong)(iVar2 + 1) < (ulong)(*(long *)(param_1 + 0x110) - lVar1 >> 3)) {
          uVar4 = *(long *)(lVar1 + (ulong)(iVar2 + 1) * 8) -
                  *(long *)(lVar1 + (uVar3 & 0xffffffff) * 8);
        }
        else {
          uVar4 = *(ulong *)(param_1 + 0xf8);
        }
        __ZNSt3__16chrono12steady_clock3nowEv();
        if (0 < (long)uVar4) {
          fVar5 = (float)(long)(uVar3 - *(long *)(param_1 + 0x158)) / (float)uVar4;
        }
      }
    }
  }
  return fVar5;
}



/* Entry: 10a7da814; end: 10a7da90b;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10a7da814(long *param_1,long param_2)

{
  int iVar1;
  undefined8 *******pppppppuVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  int iVar13;
  undefined4 uVar14;
  long lVar15;
  undefined8 uStack_50;
  undefined8 *******pppppppuStack_48;
  undefined7 uStack_40;
  char cStack_39;
  uint uStack_38;
  undefined4 uStack_34;
  
  if (param_1[0x20] < 1) {
    return param_1;
  }
  plVar8 = param_1;
  FUN_10a7da640();
  uVar9 = param_1[0x20];
  lVar12 = (param_2 - (long)plVar8) + (long)uVar9 / 2;
  lVar15 = 0;
  if (uVar9 != 0) {
    lVar15 = lVar12 / (long)uVar9;
  }
  lVar12 = lVar12 - lVar15 * uVar9;
  lVar12 = (uVar9 & lVar12 >> 0x3f) + (lVar12 - (long)uVar9 / 2);
  plVar8 = param_1 + 0x24;
  FUN_10a60f120();
  iVar5 = (int)plVar8;
  if ((iVar5 < 0) || (*(int *)((long)param_1 + 0xf4) <= iVar5)) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1[0x21];
    if ((ulong)(iVar5 + 1) < (ulong)(param_1[0x22] - lVar15 >> 3)) {
      lVar15 = *(long *)(lVar15 + (ulong)(iVar5 + 1) * 8) -
               *(long *)(lVar15 + ((ulong)plVar8 & 0xffffffff) * 8);
    }
    else {
      lVar15 = param_1[0x1f];
    }
  }
  plVar11 = param_1 + 0x1c;
  FUN_10a7da90c(plVar11,plVar8,3);
  if ((lVar12 + lVar15 != 0 && lVar12 + lVar15 < 0 == SCARRY8(lVar12,lVar15)) &&
      lVar12 < (long)plVar11) {
    param_1[0x29] = param_1[0x29] + lVar12;
    return plVar11;
  }
  plVar8 = param_1 + 0x1c;
  func_0x00010a7da9c0(plVar8,param_2);
  iVar5 = *(int *)((long)param_1 + 0xf4);
  iVar4 = 0;
  if (iVar5 != 0) {
    iVar4 = (int)plVar8 / iVar5;
  }
  iVar13 = *(int *)(*param_1 + 0x188);
  iVar5 = iVar13 + ((int)plVar8 - iVar4 * iVar5);
  iVar4 = 0;
  if (iVar13 != 0) {
    iVar4 = iVar5 / iVar13;
  }
  iVar5 = iVar5 - iVar4 * iVar13;
  plVar8 = param_1 + 0x24;
  uStack_34 = iVar5;
  FUN_10a60f120();
  iVar4 = (int)plVar8;
  if (iVar4 < 0) {
    param_1[0x27] = -0x100000000;
    while( true ) {
      plVar8 = param_1;
      FUN_10a7d9f28(param_1,iVar5);
      iVar4 = *(int *)((long)param_1 + 0x13c) - (int)param_1[0x27];
      iVar13 = (int)((ulong)(param_1[0x25] - param_1[0x24]) >> 4);
      iVar5 = 0;
      if (iVar4 != 0) {
        iVar4 = iVar4 + iVar13;
        iVar5 = 0;
        if (iVar13 != 0) {
          iVar5 = iVar4 / iVar13;
        }
        iVar5 = (iVar4 - iVar5 * iVar13) + 1;
      }
      if (iVar13 <= iVar5) break;
      iVar5 = (int)param_1 + 0x120;
      FUN_10a7fcc38();
      iVar4 = *(int *)(*param_1 + 0x188);
      iVar13 = 0;
      if (iVar4 != 0) {
        iVar13 = (iVar5 + 1) / iVar4;
      }
      iVar5 = (iVar5 + 1) - iVar13 * iVar4;
    }
    param_1[0x29] = 0;
    param_1[0x28] = -1;
    param_1[0x2a] = 0x1fca056;
    __ZNSt3__16chrono12steady_clock3nowEv();
    param_1[0x2b] = (long)plVar8;
    return plVar8;
  }
  if (iVar4 == iVar5) {
    return plVar8;
  }
  iVar1 = 0;
  if (iVar13 != 0) {
    iVar1 = (iVar4 + 1) / iVar13;
  }
  if (iVar5 != (iVar4 + 1) - iVar1 * iVar13) {
    plVar8 = param_1 + 0x24;
    FUN_10a12978c(plVar8,iVar5);
    uStack_38 = (uint)plVar8;
    if (-1 < (int)uStack_38) {
      if ((char)param_1[0x2c] == '\x01') {
        FUN_10a7d95dc(&uStack_50,param_1,plVar8);
        func_0x00010a800704(&uStack_34,&uStack_38,&uStack_50);
        ppuVar7 = &PTR_PTR_113302ba0;
        FUN_10ae079a0();
        func_0x00010a800750();
        FUN_10ae07cd4(ppuVar7,&PTR_PTR_113302ba0);
        if (cStack_39 < '\0') {
          __ZdlPv(uStack_50);
        }
        plVar8 = (long *)(ulong)uStack_38;
      }
      plVar11 = param_1 + 0x24;
      FUN_10a129680(plVar11,plVar8);
      param_1[0x29] = 0;
      param_1[0x28] = -1;
      param_1[0x2a] = 0x1fca056;
      __ZNSt3__16chrono12steady_clock3nowEv();
      param_1[0x2b] = (long)plVar11;
      return plVar11;
    }
    if (1 < iVar13) {
      FUN_10a7d9320(param_1,iVar5);
      return param_1;
    }
    return plVar8;
  }
  param_1[0x29] = 0;
  param_1[0x28] = -1;
  param_1[0x2a] = 0x1fca056;
  __ZNSt3__16chrono12steady_clock3nowEv();
  param_1[0x2b] = (long)plVar8;
  if ((int)param_1[0x27] == *(int *)((long)param_1 + 0x13c)) {
    FUN_10a7d95dc(&pppppppuStack_48,param_1);
    uVar9 = CONCAT17(cStack_39,uStack_40);
    pppppppuVar2 = pppppppuStack_48;
    if (-1 < uStack_34) {
      uVar9 = (ulong)uStack_34._3_1_;
      pppppppuVar2 = &pppppppuStack_48;
    }
    FUN_10ae03140(0,pppppppuVar2,uVar9);
    ppuVar7 = &PTR_PTR_113302cf8;
  }
  else {
    iVar5 = (int)param_1[0x27] + 1;
    uVar9 = param_1[0x25] - param_1[0x24];
    iVar4 = 0;
    iVar13 = (int)(uVar9 >> 4);
    if (iVar13 != 0) {
      iVar4 = iVar5 / iVar13;
    }
    uVar10 = (ulong)(iVar5 - iVar4 * iVar13);
    if ((ulong)((long)uVar9 >> 4) <= uVar10) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a7d95dc);
      (*pcVar3)();
    }
    plVar8 = (long *)(param_1[0x24] + uVar10 * 0x10);
    plVar11 = (long *)*plVar8;
    if ((plVar11 != (long *)0x0) && (*plVar11 != 0)) {
      if ((plVar11[2] == 0) || (((uint)*(undefined8 *)(plVar11[2] + 0x10) >> 1 & 1) != 0)) {
        plVar8 = param_1 + 0x24;
        func_0x00010a12964c();
        __ZNSt3__16chrono12steady_clock3nowEv();
        param_1[0x2b] = (long)plVar8;
        return (long *)0x1;
      }
      if ((char)param_1[0x2c] != '\x01') {
        return (long *)0x0;
      }
      plVar8 = (long *)*plVar8;
      if ((plVar8 == (long *)0x0) || (lVar12 = *plVar8, lVar12 == 0)) {
        uVar14 = 0xffffffff;
      }
      else {
        uVar14 = *(undefined4 *)(lVar12 + 8);
      }
      FUN_10a7d95dc(&pppppppuStack_48,param_1);
      func_0x00010ae02ecc(0,uVar14);
      FUN_10ae03140();
      ppuVar7 = &PTR_PTR_113302d78;
      ppuVar6 = ppuVar7;
      FUN_10ae079a0();
      func_0x00010ae02edc();
      FUN_10ae0314c();
      goto LAB_10a7d94fc;
    }
    FUN_10a7d95dc(&pppppppuStack_48,param_1);
    uVar9 = CONCAT17(cStack_39,uStack_40);
    pppppppuVar2 = pppppppuStack_48;
    if (-1 < uStack_34) {
      uVar9 = (ulong)uStack_34._3_1_;
      pppppppuVar2 = &pppppppuStack_48;
    }
    FUN_10ae03140(0,pppppppuVar2,uVar9);
    ppuVar7 = &PTR_PTR_113302cc8;
  }
  ppuVar6 = ppuVar7;
  FUN_10ae079a0();
  FUN_10ae0314c();
LAB_10a7d94fc:
  FUN_10ae07cd4(ppuVar6,ppuVar7);
  if (uStack_34 < 0) {
    __ZdlPv(pppppppuStack_48);
  }
  return (long *)0x0;
}



/* Entry: 10a7da90c; end: 10a7daa5f;  */

long FUN_10a7da90c(long param_1,int param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_3 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != *(long *)(param_1 + 0x30)) {
    iVar3 = *(int *)(param_1 + 0x14);
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = param_3 / iVar3;
    }
    lVar6 = *(long *)(param_1 + 0x20) * (long)iVar4;
    param_3 = param_3 - iVar4 * iVar3;
    uVar7 = (ulong)param_2;
    uVar1 = (long)param_3 + (long)param_2;
    uVar8 = *(long *)(param_1 + 0x30) - lVar2 >> 3;
    if (iVar3 < (int)uVar1) {
      if ((uVar7 < uVar8) && (param_3 = (param_2 - iVar3) + param_3, (ulong)(long)param_3 < uVar8))
      {
        return ((lVar6 + *(long *)(param_1 + 0x20)) - *(long *)(lVar2 + uVar7 * 8)) +
               *(long *)(lVar2 + (long)param_3 * 8);
      }
    }
    else if ((uVar1 < uVar8) && (uVar7 < uVar8)) {
      return (*(long *)(lVar2 + uVar1 * 8) + lVar6) - *(long *)(lVar2 + uVar7 * 8);
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a7da9c0);
    (*pcVar5)();
  }
  return *(long *)(param_1 + 0x18) * (long)param_3;
}



/* Entry: 10a7daa60; end: 10a7db127;  */

void FUN_10a7daa60(float param_1,long param_2)

{
  undefined8 ****ppppuVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  int iVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  double dVar13;
  undefined8 ***apppuStack_88 [2];
  char cStack_71;
  undefined1 *puStack_70;
  ulong *puStack_68;
  undefined1 uStack_59;
  ulong uStack_58;
  
  uVar7 = cntfrq_el0;
  InstructionSynchronizationBarrier();
  uStack_58 = cntvct_el0;
  if (uVar7 != 1000000000) {
    uVar2 = 0;
    if (uVar7 != 0) {
      uVar2 = uStack_58 / uVar7;
    }
    uVar3 = 0;
    if (uVar7 != 0) {
      uVar3 = ((uStack_58 - uVar2 * uVar7) * 1000000000) / uVar7;
    }
    uStack_58 = uVar3 + uVar2 * 1000000000;
  }
  uStack_59 = 0;
  puStack_70 = &uStack_59;
  puStack_68 = &uStack_58;
  lVar12 = param_2;
  __ZNSt3__16chrono12steady_clock3nowEv();
  if (*(char *)(param_2 + 0x160) == '\x01') {
    lVar10 = param_2 + 0x120;
    FUN_10a60f120();
    FUN_10a7da778(param_2);
    FUN_10a7d95dc(apppuStack_88,param_2);
    ppppuVar1 = (undefined8 ****)apppuStack_88[0];
    if (-1 < cStack_71) {
      ppppuVar1 = apppuStack_88;
    }
    func_0x00010ae06f08(1,0x14,&UNK_10f678718,&UNK_10f678718,0xffffffff,&UNK_10f678719,in_x6,in_x7,
                        lVar10,(double)param_1,ppppuVar1);
    if (cStack_71 < '\0') {
      __ZdlPv(apppuStack_88[0]);
    }
  }
  if (*(long *)(param_2 + 0x140) < 0) {
    *(long *)(param_2 + 0x140) = lVar12;
    goto LAB_10a7db08c;
  }
  lVar10 = SUB168(SEXT816((lVar12 - *(long *)(param_2 + 0x140)) + *(long *)(param_2 + 0x150) * 2) *
                  SEXT816(0x5555555555555556),8);
  uVar7 = lVar10 - (lVar10 >> 0x3f);
  uVar2 = uVar7 + *(long *)(param_2 + 0x148);
  *(ulong *)(param_2 + 0x148) = uVar2;
  *(ulong *)(param_2 + 0x150) = uVar7;
  *(long *)(param_2 + 0x140) = lVar12;
  lVar12 = param_2 + 0x120;
  FUN_10a60f120(lVar12);
  uVar3 = uVar7;
  if ((long)uVar7 <= (long)uVar2) {
    uVar3 = uVar2;
  }
  ppuVar6 = (undefined **)(param_2 + 0xe0);
  FUN_10a7db128(ppuVar6,uVar3,lVar12);
  if ((int)((ulong)(*(long *)(param_2 + 0x128) - *(long *)(param_2 + 0x120)) >> 4) < (int)ppuVar6) {
    if (*(char *)(param_2 + 0x160) == '\x01') {
      func_0x00010ae02fdc((double)(float)((double)(long)uVar7 * 1e-06),0);
      func_0x00010ae02fdc((double)(float)((double)(long)uVar2 * 1e-06));
      func_0x00010ae02ecc();
      ppuVar6 = &PTR_PTR_113302f18;
      FUN_10ae079a0();
      func_0x00010ae02fec((double)(float)((double)(long)uVar7 * 1e-06));
      func_0x00010ae02fec((double)(float)((double)(long)uVar2 * 1e-06));
      func_0x00010ae02edc();
      FUN_10ae07cd4(ppuVar6,&PTR_PTR_113302f18);
    }
    *(undefined8 *)(param_2 + 0x148) = 0;
    *(undefined8 *)(param_2 + 0x140) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x150) = 0x1fca056;
    __ZNSt3__16chrono12steady_clock3nowEv();
    *(undefined ***)(param_2 + 0x158) = ppuVar6;
    goto LAB_10a7db08c;
  }
  if (0 < (long)uVar2) {
    lVar12 = param_2 + 0x120;
    FUN_10a60f120(lVar12);
    lVar10 = param_2 + 0xe0;
    FUN_10a7db128(lVar10,uVar2,lVar12);
    iVar4 = (int)lVar10;
    if (iVar4 < 3) {
      iVar11 = iVar4 + -1;
      if (iVar4 < 1) goto LAB_10a7daebc;
    }
    else {
      iVar4 = 3;
      iVar11 = 2;
    }
    if ((iVar4 != 1) && ((*(byte *)(param_2 + 0x160) & 1) != 0)) {
      FUN_10a7fcc38(param_2 + 0x120);
      func_0x00010ae02fdc((double)(float)((double)uVar2 * 1e-06),0);
      func_0x00010ae02ecc();
      func_0x00010ae02ecc();
      ppuVar6 = &PTR_PTR_113302e18;
      FUN_10ae079a0();
      func_0x00010ae02fec((double)(float)((double)uVar2 * 1e-06));
      func_0x00010ae02edc();
      func_0x00010ae02edc();
      FUN_10ae07cd4(ppuVar6,&PTR_PTR_113302e18);
    }
    uVar7 = param_2 + 0x120;
    FUN_10a60f120();
    iVar5 = (int)uVar7;
    if ((iVar5 < 0) || (*(int *)(param_2 + 0xf4) <= iVar5)) {
      lVar12 = 0;
    }
    else {
      lVar12 = *(long *)(param_2 + 0x108);
      if ((ulong)(iVar5 + 1) < (ulong)(*(long *)(param_2 + 0x110) - lVar12 >> 3)) {
        lVar12 = *(long *)(lVar12 + (ulong)(iVar5 + 1) * 8) -
                 *(long *)(lVar12 + (uVar7 & 0xffffffff) * 8);
      }
      else {
        lVar12 = *(long *)(param_2 + 0xf8);
      }
    }
    lVar10 = param_2;
    FUN_10a7d93c0();
    uStack_59 = (undefined1)lVar10;
    if ((int)lVar10 == 0) {
      if (*(char *)(param_2 + 0x160) == '\x01') {
        lVar12 = *(long *)(param_2 + 0x148);
        FUN_10a7d95dc(apppuStack_88,param_2);
        dVar13 = (double)(float)((double)lVar12 * 1e-06);
        func_0x00010ae02fdc(dVar13,0);
        FUN_10ae03140();
        ppuVar6 = &PTR_PTR_113302ec0;
        FUN_10ae079a0();
        func_0x00010ae02fec(dVar13);
        FUN_10ae0314c();
        FUN_10ae07cd4(ppuVar6,&PTR_PTR_113302ec0);
        if (cStack_71 < '\0') {
          __ZdlPv(apppuStack_88[0]);
        }
      }
    }
    else {
      iVar9 = *(int *)(param_2 + 0x13c) - *(int *)(param_2 + 0x138);
      iVar8 = (int)((ulong)(*(long *)(param_2 + 0x128) - *(long *)(param_2 + 0x120)) >> 4);
      iVar5 = 0;
      if (iVar9 != 0) {
        iVar9 = iVar9 + iVar8;
        iVar5 = 0;
        if (iVar8 != 0) {
          iVar5 = iVar9 / iVar8;
        }
        iVar5 = (iVar9 - iVar5 * iVar8) + 1;
      }
      if (iVar5 < iVar8) {
        lVar10 = param_2 + 0x120;
        FUN_10a7fcc38(lVar10);
        iVar5 = *(int *)(param_2 + 0xf0);
        iVar4 = (int)lVar10 + iVar4;
        iVar9 = 0;
        if (iVar5 != 0) {
          iVar9 = iVar4 / iVar5;
        }
        FUN_10a7d9f28(param_2,iVar4 - iVar9 * iVar5);
        iVar4 = (int)lVar10 + 1;
        iVar9 = 0;
        if (iVar5 != 0) {
          iVar9 = iVar4 / iVar5;
        }
        lVar10 = param_2 + 0xe0;
        FUN_10a7da90c(lVar10,iVar4 - iVar9 * iVar5,iVar11);
        *(long *)(param_2 + 0x148) = (*(long *)(param_2 + 0x148) - lVar12) - lVar10;
      }
    }
  }
LAB_10a7daebc:
  iVar11 = *(int *)(param_2 + 0x13c) - *(int *)(param_2 + 0x138);
  iVar5 = (int)((ulong)(*(long *)(param_2 + 0x128) - *(long *)(param_2 + 0x120)) >> 4);
  iVar4 = 0;
  if (iVar11 != 0) {
    iVar11 = iVar11 + iVar5;
    iVar4 = 0;
    if (iVar5 != 0) {
      iVar4 = iVar11 / iVar5;
    }
    iVar4 = (iVar11 - iVar4 * iVar5) + 1;
  }
  if (iVar4 < iVar5) {
    if ((*(char *)(param_2 + 0x160) == '\x01') && ((bRam000000011330a9e8 >> 1 & 1) != 0)) {
      FUN_10a7d95dc(apppuStack_88,param_2);
      ppppuVar1 = (undefined8 ****)apppuStack_88[0];
      if (-1 < cStack_71) {
        ppppuVar1 = apppuStack_88;
      }
      func_0x00010ae06f08(1,2,&UNK_10f678735,&UNK_10f67877c,0x1ff,&UNK_10f6787c0,in_x6,in_x7,
                          ppppuVar1);
      if (cStack_71 < '\0') {
        __ZdlPv(apppuStack_88[0]);
      }
    }
    iVar4 = 0;
    while( true ) {
      iVar5 = *(int *)(param_2 + 0x13c) - *(int *)(param_2 + 0x138);
      iVar9 = (int)((ulong)(*(long *)(param_2 + 0x128) - *(long *)(param_2 + 0x120)) >> 4);
      iVar11 = 0;
      if (iVar5 != 0) {
        iVar5 = iVar5 + iVar9;
        iVar11 = 0;
        if (iVar9 != 0) {
          iVar11 = iVar5 / iVar9;
        }
        iVar11 = (iVar5 - iVar11 * iVar9) + 1;
      }
      if (iVar9 <= iVar11) break;
      lVar12 = param_2 + 0x120;
      FUN_10a7fcc38(lVar12);
      iVar11 = (int)lVar12 + 1;
      iVar5 = *(int *)(param_2 + 0xf0);
      iVar9 = 0;
      if (iVar5 != 0) {
        iVar9 = iVar11 / iVar5;
      }
      lVar12 = param_2;
      FUN_10a7d9f28(param_2,iVar11 - iVar9 * iVar5);
      if ((int)lVar12 < 0) break;
      iVar4 = iVar4 + 1;
    }
    if ((*(char *)(param_2 + 0x160) == '\x01') && ((bRam000000011330a9e8 >> 1 & 1) != 0)) {
      func_0x00010ae06f08(1,2,&UNK_10f678735,&UNK_10f67877c,0x205,&UNK_10f6787e7,in_x6,in_x7,iVar4);
    }
  }
  lVar10 = *(long *)(param_2 + 0x128);
  for (lVar12 = *(long *)(param_2 + 0x120); lVar12 != lVar10; lVar12 = lVar12 + 0x10) {
    FUN_10a12960c(lVar12);
  }
  if (*(char *)(param_2 + 0x160) == '\x01') {
    FUN_10a7d95dc(apppuStack_88,param_2);
    ppppuVar1 = (undefined8 ****)apppuStack_88[0];
    if (-1 < cStack_71) {
      ppppuVar1 = apppuStack_88;
    }
    func_0x00010ae06f08(1,0x14,&UNK_10f678718,&UNK_10f678718,0xffffffff,&UNK_10f678824,in_x6,in_x7,
                        ppppuVar1);
    if (cStack_71 < '\0') {
      __ZdlPv(apppuStack_88[0]);
    }
  }
LAB_10a7db08c:
  FUN_10a7db1a4(&puStack_70);
  return;
}



/* Entry: 10a7db128; end: 10a7db1a3;  */

/* WARNING: Possible PIC construction at 0x00010a7db16c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a7db170) */

int FUN_10a7db128(long param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  if (0 < (long)param_2) {
    if (*(long *)(param_1 + 0x28) != *(long *)(param_1 + 0x30)) {
      lVar6 = param_1;
      FUN_10a7da720(param_1,param_3);
      param_2 = lVar6 + param_2;
    }
    iVar4 = 0;
    if ((0 < (long)param_2) && (*(int *)(param_1 + 0x10) != 0)) {
      uVar5 = *(ulong *)(param_1 + 0x20);
      if ((long)uVar5 < 1) {
        iVar4 = 0;
      }
      else {
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar3 = param_2 / uVar5;
        }
        lVar6 = param_2 - uVar3 * uVar5;
        plVar2 = *(long **)(param_1 + 0x28);
        if (plVar2 == *(long **)(param_1 + 0x30)) {
          iVar4 = 0;
          if (*(long *)(param_1 + 0x18) != 0) {
            iVar4 = (int)(lVar6 / *(long *)(param_1 + 0x18));
          }
        }
        else {
          uVar5 = (long)*(long **)(param_1 + 0x30) - (long)plVar2 >> 3;
          plVar7 = plVar2;
          do {
            uVar8 = uVar5 >> 1;
            uVar1 = uVar5 + (uVar5 >> 1 ^ 0xffffffffffffffff);
            uVar5 = uVar8;
            if (plVar7[uVar8] <= lVar6) {
              uVar5 = uVar1;
              plVar7 = plVar7 + uVar8 + 1;
            }
          } while (uVar5 != 0);
          iVar4 = (int)((ulong)((long)plVar7 - (long)plVar2) >> 3);
          if (iVar4 < 2) {
            iVar4 = 1;
          }
          iVar4 = iVar4 + -1;
        }
        iVar4 = iVar4 + *(int *)(param_1 + 0x14) * (int)uVar3;
      }
    }
    return iVar4;
  }
  return 0;
}



/* Entry: 10a7db1a4; end: 10a7db39f;  */

undefined8 * FUN_10a7db1a4(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  code *pcVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined1 uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  
  puVar5 = PTR___tlv_bootstrap_11340d750;
  if (*(char *)*param_1 == '\x01') {
    uVar16 = *(undefined8 *)param_1[1];
    uVar4 = cntfrq_el0;
    InstructionSynchronizationBarrier();
    uVar15 = cntvct_el0;
    if (uVar4 != 1000000000) {
      uVar2 = 0;
      if (uVar4 != 0) {
        uVar2 = uVar15 / uVar4;
      }
      uVar3 = 0;
      if (uVar4 != 0) {
        uVar3 = ((uVar15 - uVar2 * uVar4) * 1000000000) / uVar4;
      }
      uVar15 = uVar3 + uVar2 * 1000000000;
    }
    ppuVar11 = &PTR___tlv_bootstrap_11340d750;
    ppuVar8 = ppuVar11;
    (*(code *)PTR___tlv_bootstrap_11340d750)();
    ppuVar9 = &PTR___tlv_bootstrap_11340d738;
    if (((ulong)*ppuVar8 & 1) == 0) {
      ppuVar8 = ppuVar9;
      (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
      __tlv_atexit(0x10a132a8c,ppuVar8,0x100000000);
      (*(code *)puVar5)();
      *(undefined1 *)ppuVar11 = 1;
    }
    (*(code *)PTR___tlv_bootstrap_11340d738)();
    puVar14 = (undefined8 *)ppuVar9[2];
    if (puVar14 == (undefined8 *)0x0) {
      return param_1;
    }
    lVar12 = puVar14[1];
    if (*(char *)(lVar12 + 0x17) != '\x01') {
      return param_1;
    }
    if (((*(byte *)(lVar12 + 0x42) | *(byte *)(lVar12 + 0x43)) & 1) == 0) {
      return param_1;
    }
    FUN_10a192960(puVar14,0x90c1f889,&DAT_10f67a25e);
    lVar12 = lRam00000001137ebd60;
    puVar10 = puVar14;
    FUN_10a1333cc();
    lVar6 = lRam00000001137ebd60;
    if (puVar10 != (undefined8 *)0x0) {
      uVar13 = 3;
      if (lRam00000001137ebd60 != lVar12) {
        uVar13 = 5;
      }
      lVar1 = 0;
      if (lRam00000001137ebd60 != lVar12) {
        lVar1 = lVar12;
      }
      *puVar10 = &UNK_10f67a251;
      puVar10[1] = lVar1;
      puVar10[2] = uVar16;
      *(undefined4 *)(puVar10 + 3) = 0x90c1f889;
      *(undefined2 *)((long)puVar10 + 0x1c) = 7;
      *(undefined1 *)((long)puVar10 + 0x1e) = uVar13;
      if ((*(byte *)(puVar14 + 0x38) & 1) == 0) goto LAB_10a7db39c;
      puVar14[0x18] = puVar14[0x18] + 1;
    }
    puVar10 = puVar14;
    FUN_10a1333cc();
    if (puVar10 != (undefined8 *)0x0) {
      uVar13 = 6;
      if (lRam00000001137ebd60 != lVar6) {
        uVar13 = 8;
      }
      lVar12 = 0;
      if (lRam00000001137ebd60 != lVar6) {
        lVar12 = lVar6;
      }
      *puVar10 = &UNK_10f67a251;
      puVar10[1] = lVar12;
      puVar10[2] = uVar15;
      *(undefined4 *)(puVar10 + 3) = 0x90c1f889;
      *(undefined2 *)((long)puVar10 + 0x1c) = 7;
      *(undefined1 *)((long)puVar10 + 0x1e) = uVar13;
      if ((*(byte *)(puVar14 + 0x38) & 1) == 0) {
LAB_10a7db39c:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10a7db3a0);
        (*pcVar7)();
      }
      puVar14[0x18] = puVar14[0x18] + 1;
    }
  }
  return param_1;
}



/* Entry: 10a7db3a0; end: 10a7db45f;  */

void FUN_10a7db3a0(long *param_1)

{
  code *pcVar1;
  long *plVar2;
  uint *puVar3;
  long lVar4;
  uint *puVar5;
  long lStack_38;
  
  plVar2 = param_1 + 5;
  param_1[6] = *plVar2;
  lVar4 = *param_1;
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else if ((ulong)(*(long *)(lVar4 + 0x248) - *(long *)(lVar4 + 0x240) >> 2) < 2) {
    lVar4 = param_1[3] * (long)*(int *)((long)param_1 + 0x14);
  }
  else {
    func_0x000107c27acc(plVar2);
    puVar5 = *(uint **)(lVar4 + 0x248);
    for (puVar3 = *(uint **)(lVar4 + 0x240); puVar3 != puVar5; puVar3 = puVar3 + 1) {
      lStack_38 = param_1[3] * (ulong)*puVar3;
      FUN_10a31f0e4(plVar2,&lStack_38);
    }
    if (param_1[5] == param_1[6]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a7db460);
      (*pcVar1)();
    }
    lVar4 = *(long *)(param_1[6] + -8);
  }
  param_1[4] = lVar4;
  return;
}



/* Entry: 10a7db460; end: 10a7dba53;  */

void FUN_10a7db460(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  
  if ((*(byte *)(param_3 + 0xc) & 1) == 0) {
LAB_10a7db520:
    bVar7 = *(float *)(param_3 + 0x10) <= 0.0;
  }
  else {
    uVar8 = param_2;
    FUN_10a08fe30();
    if (((uint)uVar8 >> 3 & 1) != 0) goto LAB_10a7db5c4;
    fVar14 = *(float *)((long)param_3 + 0x54);
    fVar12 = *(float *)((long)param_3 + 100);
    if (fVar12 <= 0.0) {
      bVar7 = false;
    }
    else {
      fVar15 = -((*(float *)(param_3 + 3) * 0.0 + *(float *)(param_3 + 5) * 0.0 +
                 *(float *)(param_3 + 7) * 0.0 + *(float *)(param_3 + 9)) * fVar14);
      if (fVar15 <= *(float *)(param_3 + 10) * fVar15) {
        fVar15 = *(float *)(param_3 + 10) * fVar15;
      }
      bVar7 = fVar15 / 1.2 < fVar12;
    }
    if (fVar14 <= 0.0 || bVar7) goto LAB_10a7db520;
    lVar11 = *param_3;
    if ((int)((ulong)(*(long *)(lVar11 + 0x30) - *(long *)(lVar11 + 0x28)) >> 4) < 1) {
LAB_10a7db5c4:
      bVar7 = false;
    }
    else {
      iVar10 = 0;
      while ((fVar15 = *(float *)(lVar11 + 0x5c), iVar10 == 1 ||
             (fVar15 = *(float *)(lVar11 + 0x58), iVar10 != 2))) {
        bVar7 = fVar15 < 0.0;
        while (iVar10 = iVar10 + 1, bVar7) {
          if (iVar10 == 2) goto LAB_10a7db5c4;
          bVar7 = true;
        }
      }
      if (*(float *)(lVar11 + 0x60) < 0.0) goto LAB_10a7db5c4;
      pcStack_a8 = *(code **)(lVar11 + 0x54);
      uStack_b0 = *(undefined8 *)(lVar11 + 0x4c);
      uStack_a0 = *(undefined8 *)(lVar11 + 0x5c);
      lVar11 = param_3[0xe];
      if ((lVar11 != 0) && (0.0 < *(float *)(param_3 + 0x10))) {
        iVar10 = 0;
        while ((fVar12 = *(float *)(lVar11 + 0x5c), iVar10 == 1 ||
               (fVar12 = *(float *)(lVar11 + 0x58), iVar10 != 2))) {
          bVar7 = fVar12 < 0.0;
          while (iVar10 = iVar10 + 1, bVar7) {
            if (iVar10 == 2) goto LAB_10a7db5c4;
            bVar7 = true;
          }
        }
        if (*(float *)(lVar11 + 0x60) < 0.0) goto LAB_10a7db5c4;
        FUN_10a01e958(&uStack_160,&uStack_b0,lVar11 + 0x4c);
        pcStack_a8 = pcStack_158;
        uStack_b0 = uStack_160;
        uStack_a0 = uStack_150;
        fVar14 = *(float *)((long)param_3 + 0x54);
        fVar12 = *(float *)((long)param_3 + 100);
      }
      fVar15 = *(float *)(param_3 + 0xb);
      fVar16 = *(float *)((long)param_3 + 0x5c);
      fVar17 = *(float *)(param_3 + 10);
      lStack_118 = 0;
      lStack_120 = 0;
      lStack_108 = 0;
      lStack_110 = 0;
      lStack_138 = 0;
      plStack_140 = (long *)0x0;
      lStack_128 = 0;
      lStack_130 = 0;
      pcStack_158 = (code *)0x0;
      uStack_160 = 0;
      lStack_148 = 0;
      uStack_150 = 0;
      FUN_10a0056c4(&uStack_b0,&uStack_160,8,param_3 + 2);
      lVar11 = 0;
      do {
        fVar13 = -*(float *)((long)&pcStack_158 + lVar11);
        bVar7 = true;
        if ((fVar15 <= fVar13) && (bVar7 = false, !NAN(fVar16) && !NAN(fVar13))) {
          bVar7 = fVar16 < fVar13;
        }
        if (((bVar7) ||
            (fVar13 = fVar14 * 1.2 * fVar13,
            fVar12 + fVar12 + fVar13 < ABS(*(float *)((long)&uStack_160 + lVar11 + 4)))) ||
           (fVar12 + fVar12 + fVar17 * fVar13 < ABS(*(float *)((long)&uStack_160 + lVar11))))
        goto LAB_10a7db5c4;
        lVar11 = lVar11 + 0xc;
      } while (lVar11 != 0x60);
      bVar7 = true;
    }
    fVar12 = *(float *)(param_3 + 0x10);
    if ((!bVar7) && (0.0 < fVar12)) {
      pcStack_158 = FUN_10a7dba54;
      goto LAB_10a7db610;
    }
    bVar2 = bVar7;
    if (0.0 < fVar12) {
      bVar2 = true;
    }
    bVar7 = (bool)(bVar7 ^ 1);
    if (fVar12 <= 0.0) {
      bVar7 = true;
    }
    if (!bVar2) {
      pcStack_158 = (code *)0x10a7dbf5c;
      goto LAB_10a7db610;
    }
  }
  pcStack_158 = FUN_10a7dc78c;
  if (!bVar7) {
    pcStack_158 = FUN_10a7dc3c0;
  }
LAB_10a7db610:
  lVar11 = *param_3;
  plVar4 = (long *)param_3[1];
  uStack_150 = 0;
  if (plVar4 != (long *)0x0) {
    plVar5 = plVar4 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar7) {
        *plVar5 = *plVar5 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  lStack_110 = param_3[7];
  lStack_118 = param_3[6];
  lStack_100 = param_3[9];
  lStack_108 = param_3[8];
  lStack_f0 = param_3[0xb];
  lStack_f8 = param_3[10];
  lStack_e0 = param_3[0xd];
  lStack_e8 = param_3[0xc];
  lStack_130 = param_3[3];
  lStack_138 = param_3[2];
  lStack_120 = param_3[5];
  lStack_128 = param_3[4];
  lVar3 = param_3[0xe];
  plVar5 = (long *)param_3[0xf];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  lStack_c0 = param_3[0x11];
  lStack_c8 = param_3[0x10];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  puVar9 = (undefined8 *)0xb0;
  uStack_160 = param_2;
  lStack_148 = lVar11;
  plStack_140 = plVar4;
  lStack_d8 = lVar3;
  plStack_d0 = plVar5;
  __Znwm();
  *puVar9 = &PTR_LAB_110c1f8a8;
  puVar9[2] = pcStack_158;
  puVar9[1] = uStack_160;
  puVar9[3] = uStack_150;
  puVar9[4] = lVar11;
  puVar9[5] = plVar4;
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  puVar9[0xb] = lStack_110;
  puVar9[10] = lStack_118;
  puVar9[0xd] = lStack_100;
  puVar9[0xc] = lStack_108;
  puVar9[0xf] = lStack_f0;
  puVar9[0xe] = lStack_f8;
  puVar9[0x11] = lStack_e0;
  puVar9[0x10] = lStack_e8;
  puVar9[7] = lStack_130;
  puVar9[6] = lStack_138;
  puVar9[9] = lStack_120;
  puVar9[8] = lStack_128;
  puVar9[0x12] = lVar3;
  puVar9[0x13] = plVar5;
  if (plVar5 == (long *)0x0) {
    puVar9[0x15] = lStack_c0;
    puVar9[0x14] = lStack_c8;
    *(undefined8 **)(param_1 + 0x18) = puVar9;
  }
  else {
    plVar1 = plVar5 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    puVar9[0x15] = lStack_c0;
    puVar9[0x14] = lStack_c8;
    *(undefined8 **)(param_1 + 0x18) = puVar9;
    do {
      lVar11 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  if (plVar4 != (long *)0x0) {
    plVar5 = plVar4 + 1;
    do {
      lVar11 = *plVar5;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar7) {
        *plVar5 = lVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_d0;
  if (plStack_d0 != (long *)0x0) {
    plVar5 = plStack_d0 + 1;
    do {
      lVar11 = *plVar5;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar7) {
        *plVar5 = lVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_140;
  if (plStack_140 != (long *)0x0) {
    plVar5 = plStack_140 + 1;
    do {
      lVar11 = *plVar5;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar7) {
        *plVar5 = lVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_140 + 0x10))(plStack_140);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a7dba54; end: 10a7dc3bf;  */

ulong FUN_10a7dba54(byte *param_1,long *param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  uint uVar11;
  long lVar12;
  float *pfVar13;
  uint *puVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  ulong uVar18;
  int iVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  float *pfVar25;
  int *piVar26;
  int iVar27;
  long lVar28;
  float fVar29;
  int iVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  float fVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  float fVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  
  lVar12 = *param_2;
  uVar24 = (ulong)(*(long *)(lVar12 + 0x30) - *(long *)(lVar12 + 0x28)) >> 4;
  lVar15 = param_2[0xe];
  if (lVar15 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = (uint)((ulong)(*(long *)(lVar15 + 0x30) - *(long *)(lVar15 + 0x28)) >> 4);
  }
  uVar23 = (uint)uVar24;
  if (uVar11 != uVar23) {
    if ((*param_1 & 1) == 0) {
      *param_1 = 1;
      func_0x00010ae02ecc(0,uVar24);
      func_0x00010ae02ecc();
      ppuVar10 = &PTR_PTR_113302c38;
      FUN_10ae079a0();
      func_0x00010ae02edc();
      func_0x00010ae02edc();
      FUN_10ae07cd4(ppuVar10,&PTR_PTR_113302c38);
      lVar12 = *param_2;
    }
    if ((int)uVar23 <= (int)uVar11) {
      uVar11 = uVar23;
    }
    uVar24 = (ulong)uVar11;
  }
  iVar27 = *(int *)(lVar12 + 0x40);
  iVar30 = (int)uVar24;
  lVar22 = (long)iVar30;
  func_0x00010742a308(param_1 + 8,lVar22);
  pfVar25 = *(float **)(param_1 + 8);
  FUN_10a8008d8(param_1 + 0x50,lVar22);
  lVar15 = *(long *)(param_1 + 0x50);
  func_0x000108a5942c(param_1 + 0x38,lVar22);
  lVar12 = 0;
  if (param_2[0xe] != 0) {
    lVar12 = *(long *)(param_2[0xe] + 0x28);
  }
  if (iVar30 < 1) {
    uVar21 = 0;
  }
  else {
    uVar16 = 0;
    uVar21 = 0;
    iVar19 = 0;
    uVar24 = uVar24 & 0xffffffff;
    fVar35 = -3.4028235e+38;
    fVar40 = 3.4028235e+38;
    piVar26 = *(int **)(param_1 + 0x38);
    lVar20 = *(long *)(*param_2 + 0x28);
    lVar28 = param_2[0x10];
    fVar29 = *(float *)(param_2 + 10);
    fVar31 = *(float *)((long)param_2 + 0x54);
    fVar32 = *(float *)(param_2 + 0xb);
    fVar33 = *(float *)((long)param_2 + 0x5c);
    fVar34 = *(float *)((long)param_2 + 100) + *(float *)((long)param_2 + 100);
    lVar37 = param_2[3];
    lVar36 = param_2[2];
    lVar39 = param_2[5];
    lVar38 = param_2[4];
    lVar42 = param_2[7];
    lVar41 = param_2[6];
    lVar44 = param_2[9];
    lVar43 = param_2[8];
    uVar11 = 0;
    do {
      *(uint *)(lVar15 + uVar16 * 4) = uVar11 & 0xffff | iVar19 << 0x10;
      bVar7 = uVar11 + 1 == iVar27;
      if (bVar7) {
        iVar19 = iVar19 + 1;
      }
      uVar23 = 0;
      if (!bVar7) {
        uVar23 = uVar11 + 1;
      }
      puVar9 = (undefined8 *)(lVar20 + uVar16 * 0x10);
      uVar50 = puVar9[1];
      uVar47 = *puVar9;
      puVar9 = (undefined8 *)(lVar12 + uVar16 * 0x10);
      uVar53 = puVar9[1];
      uVar52 = *puVar9;
      fVar45 = (float)uVar47;
      fVar48 = (float)((ulong)uVar47 >> 0x20);
      fVar49 = (float)uVar50;
      fVar51 = (float)((ulong)uVar50 >> 0x20);
      fVar46 = (float)lVar28;
      fVar45 = fVar45 + ((float)uVar52 - fVar45) * fVar46;
      fVar48 = fVar48 + ((float)((ulong)uVar52 >> 0x20) - fVar48) * fVar46;
      fVar49 = fVar49 + ((float)uVar53 - fVar49) * fVar46;
      fVar51 = fVar51 + ((float)((ulong)uVar53 >> 0x20) - fVar51) * fVar46;
      fVar46 = -((float)lVar37 * fVar45 + (float)lVar39 * fVar48 + (float)lVar42 * fVar49 +
                (float)lVar44 * fVar51);
      bVar7 = true;
      if ((fVar32 <= fVar46) && (bVar7 = false, !NAN(fVar33) && !NAN(fVar46))) {
        bVar7 = fVar33 < fVar46;
      }
      fVar55 = fVar31 * 1.2 * fVar46;
      fVar54 = ABS((float)((ulong)lVar36 >> 0x20) * fVar45 + (float)((ulong)lVar38 >> 0x20) * fVar48
                   + (float)((ulong)lVar41 >> 0x20) * fVar49 +
                   (float)((ulong)lVar43 >> 0x20) * fVar51);
      fVar56 = fVar34 + fVar55;
      bVar2 = false;
      bVar3 = false;
      bVar5 = false;
      if (!bVar7) {
        bVar2 = false;
        bVar3 = false;
        bVar5 = true;
        if (!NAN(fVar54) && !NAN(fVar56)) {
          bVar2 = fVar54 < fVar56;
          bVar3 = fVar54 == fVar56;
          bVar5 = false;
        }
      }
      fVar45 = ABS((float)lVar36 * fVar45 + (float)lVar38 * fVar48 + (float)lVar41 * fVar49 +
                   (float)lVar43 * fVar51);
      fVar48 = fVar34 + fVar29 * fVar55;
      bVar7 = false;
      bVar4 = false;
      bVar6 = false;
      if (bVar3 || bVar2 != bVar5) {
        bVar7 = false;
        bVar4 = false;
        bVar6 = true;
        if (!NAN(fVar45) && !NAN(fVar48)) {
          bVar7 = fVar45 < fVar48;
          bVar4 = fVar45 == fVar48;
          bVar6 = false;
        }
      }
      fVar45 = fVar35;
      if (bVar4 || bVar7 != bVar6) {
        piVar26[(int)uVar21] = (int)uVar16;
        pfVar25[uVar16] = fVar46;
        uVar21 = (ulong)((int)uVar21 + 1);
        fVar45 = fVar46;
        if (fVar40 <= fVar46) {
          fVar45 = fVar40;
        }
        fVar40 = fVar45;
        fVar45 = fVar46;
        if (fVar46 <= fVar35) {
          fVar45 = fVar35;
        }
      }
      fVar35 = fVar45;
      uVar16 = uVar16 + 1;
      uVar11 = uVar23;
    } while (uVar24 != uVar16);
    iVar27 = (int)uVar21;
    if (iVar27 == 1) {
      if (iVar30 < 2) {
        lVar12 = 0;
      }
      else {
        lVar12 = (long)*piVar26;
      }
      FUN_10a8009c4(param_2[0x11],lVar15 + lVar12 * 4);
      uVar21 = 1;
    }
    else if (iVar27 != 0) {
      if (0.001 <= fVar35 - fVar40) {
        uVar11 = iVar30 + 3U >> 2;
        if (0xffff < uVar11) {
          uVar11 = 0x10000;
        }
        func_0x000108a5942c(param_1 + 0x20,uVar11);
        piVar1 = *(int **)(param_1 + 0x20);
        if (0 < *(long *)(param_1 + 0x28) - (long)piVar1) {
          _bzero(piVar1);
        }
        fVar40 = (float)(uVar11 - 1) / (fVar40 - fVar35);
        pfVar13 = pfVar25;
        uVar16 = uVar24;
        if (iVar27 < iVar30) {
          uVar16 = uVar21;
          piVar17 = piVar26;
          if (0 < iVar27) {
            do {
              iVar19 = (int)(fVar40 * (pfVar25[*piVar17] - fVar35));
              piVar1[iVar19] = piVar1[iVar19] + 1;
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 1;
            } while (uVar16 != 0);
          }
        }
        else {
          do {
            iVar19 = (int)(fVar40 * (*pfVar13 - fVar35));
            piVar1[iVar19] = piVar1[iVar19] + 1;
            uVar16 = uVar16 - 1;
            pfVar13 = pfVar13 + 1;
          } while (uVar16 != 0);
        }
        if (4 < iVar30) {
          if (uVar11 < 3) {
            uVar11 = 2;
          }
          iVar19 = *piVar1;
          lVar12 = (ulong)uVar11 * 4 + -4;
          piVar17 = piVar1;
          do {
            piVar17 = piVar17 + 1;
            iVar19 = *piVar17 + iVar19;
            *piVar17 = iVar19;
            lVar12 = lVar12 + -4;
          } while (lVar12 != 0);
        }
        puVar9 = (undefined8 *)param_2[0x11];
        puVar14 = (uint *)*puVar9;
        uVar16 = (ulong)iVar27;
        if ((ulong)(puVar9[1] - (long)puVar14 >> 2) < uVar16) {
          FUN_10a8008d8(puVar9,uVar16);
          puVar14 = *(uint **)param_2[0x11];
        }
        if (iVar27 < iVar30) {
          if (0 < iVar27) {
            uVar24 = uVar21 + 1;
            piVar26 = piVar26 + uVar21;
            do {
              piVar26 = piVar26 + -1;
              iVar27 = *piVar26;
              iVar19 = (int)(fVar40 * (pfVar25[iVar27] - fVar35));
              iVar30 = piVar1[iVar19];
              piVar1[iVar19] = (int)((long)iVar30 + -1);
              puVar14[(long)iVar30 + -1] = *(uint *)(lVar15 + (long)iVar27 * 4);
              uVar24 = uVar24 - 1;
            } while (1 < uVar24);
          }
        }
        else {
          do {
            uVar18 = uVar24 - 1;
            iVar30 = (int)(fVar40 * (pfVar25[uVar18] - fVar35));
            iVar27 = piVar1[iVar30];
            piVar1[iVar30] = (int)((long)iVar27 + -1);
            puVar14[(long)iVar27 + -1] = *(uint *)(lVar15 + uVar18 * 4);
            bVar7 = 1 < uVar24;
            uVar24 = uVar18;
          } while (bVar7);
        }
        if ((char)param_2[0xd] == '\x01') {
          iVar27 = *(int *)(*param_2 + 0x40);
          iVar30 = *(int *)(*param_2 + 0x44);
          do {
            fVar35 = (1.0 / (float)iVar27) * ((float)(int)(short)*puVar14 + 0.5);
            fVar29 = (1.0 / (float)iVar30) * ((float)(int)*(short *)((long)puVar14 + 2) + 0.5);
            fVar40 = -1.0;
            if (-1.0 <= fVar35) {
              fVar40 = fVar35;
            }
            fVar35 = -1.0;
            if (-1.0 <= fVar29) {
              fVar35 = fVar29;
            }
            fVar29 = 1.0;
            if (fVar40 <= 1.0) {
              fVar29 = fVar40;
            }
            fVar40 = 1.0;
            if (fVar35 <= 1.0) {
              fVar40 = fVar35;
            }
            *puVar14 = (int)(fVar29 * 32767.0) & 0xffffU | (int)(fVar40 * 32767.0) << 0x10;
            uVar16 = uVar16 - 1;
            puVar14 = puVar14 + 1;
          } while (uVar16 != 0);
        }
      }
      else {
        FUN_10a8008d8(param_2[0x11],(long)iVar27);
        puVar8 = *(undefined4 **)param_2[0x11];
        if (iVar27 < iVar30) {
          uVar24 = uVar21;
          if (0 < iVar27) {
            do {
              *puVar8 = *(undefined4 *)(lVar15 + (long)*piVar26 * 4);
              uVar24 = uVar24 - 1;
              puVar8 = puVar8 + 1;
              piVar26 = piVar26 + 1;
            } while (uVar24 != 0);
          }
        }
        else {
          _memcpy(puVar8,lVar15,lVar22 << 2);
        }
      }
    }
  }
  return uVar21;
}



/* Entry: 10a7dc3c0; end: 10a7dc78b;  */

ulong FUN_10a7dc3c0(byte *param_1,long *param_2)

{
  uint uVar1;
  int *piVar2;
  bool bVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 *puVar6;
  float *pfVar7;
  int *piVar8;
  uint *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  uint *puVar19;
  float *pfVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  lVar5 = *param_2;
  uVar18 = (ulong)(*(long *)(lVar5 + 0x30) - *(long *)(lVar5 + 0x28)) >> 4;
  lVar10 = param_2[0xe];
  if (lVar10 == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = (uint)((ulong)(*(long *)(lVar10 + 0x30) - *(long *)(lVar10 + 0x28)) >> 4);
  }
  uVar16 = (uint)uVar18;
  if (uVar17 != uVar16) {
    if ((*param_1 & 1) == 0) {
      *param_1 = 1;
      func_0x00010ae02ecc(0,uVar18);
      func_0x00010ae02ecc();
      ppuVar4 = &PTR_PTR_113302c38;
      FUN_10ae079a0();
      func_0x00010ae02edc();
      func_0x00010ae02edc();
      FUN_10ae07cd4(ppuVar4,&PTR_PTR_113302c38);
      lVar5 = *param_2;
    }
    if ((int)uVar16 <= (int)uVar17) {
      uVar17 = uVar16;
    }
    uVar18 = (ulong)uVar17;
  }
  iVar13 = *(int *)(lVar5 + 0x40);
  uVar17 = (uint)uVar18;
  uVar18 = (ulong)(int)uVar17;
  func_0x00010742a308(param_1 + 8,uVar18);
  pfVar20 = *(float **)(param_1 + 8);
  FUN_10a8008d8(param_1 + 0x50,uVar18);
  puVar19 = *(uint **)(param_1 + 0x50);
  puVar6 = (undefined8 *)0x0;
  if (param_2[0xe] != 0) {
    puVar6 = *(undefined8 **)(param_2[0xe] + 0x28);
  }
  if ((int)uVar17 < 1) {
    fVar30 = 3.4028235e+38;
    fVar29 = -3.4028235e+38;
  }
  else {
    iVar14 = 0;
    lVar5 = param_2[0x10];
    lVar10 = param_2[3];
    lVar21 = param_2[5];
    fVar29 = -3.4028235e+38;
    lVar22 = param_2[7];
    lVar23 = param_2[9];
    fVar30 = 3.4028235e+38;
    puVar15 = *(undefined8 **)(*param_2 + 0x28);
    puVar9 = puVar19;
    pfVar7 = pfVar20;
    uVar12 = uVar18;
    uVar16 = 0;
    do {
      *puVar9 = uVar16 & 0xffff | iVar14 << 0x10;
      bVar3 = uVar16 + 1 == iVar13;
      if (bVar3) {
        iVar14 = iVar14 + 1;
      }
      fVar24 = (float)*puVar15;
      fVar26 = (float)((ulong)*puVar15 >> 0x20);
      fVar27 = (float)puVar15[1];
      fVar28 = (float)((ulong)puVar15[1] >> 0x20);
      fVar25 = (float)lVar5;
      fVar25 = -((float)lVar10 * (fVar24 + ((float)*puVar6 - fVar24) * fVar25) +
                 (float)lVar21 * (fVar26 + ((float)((ulong)*puVar6 >> 0x20) - fVar26) * fVar25) +
                 (float)lVar22 * (fVar27 + ((float)puVar6[1] - fVar27) * fVar25) +
                (float)lVar23 * (fVar28 + ((float)((ulong)puVar6[1] >> 0x20) - fVar28) * fVar25));
      *pfVar7 = fVar25;
      uVar1 = 0;
      if (!bVar3) {
        uVar1 = uVar16 + 1;
      }
      fVar24 = fVar25;
      if (fVar30 <= fVar25) {
        fVar24 = fVar30;
      }
      fVar30 = fVar24;
      if (fVar25 <= fVar29) {
        fVar25 = fVar29;
      }
      fVar29 = fVar25;
      uVar12 = uVar12 - 1;
      puVar6 = puVar6 + 2;
      puVar15 = puVar15 + 2;
      puVar9 = puVar9 + 1;
      pfVar7 = pfVar7 + 1;
      uVar16 = uVar1;
    } while (uVar12 != 0);
  }
  if (uVar17 != 0) {
    if (uVar17 == 1) {
      FUN_10a8009c4(param_2[0x11],puVar19);
    }
    else if (0.001 <= fVar29 - fVar30) {
      iVar13 = uVar17 + 6;
      if (-4 < (int)uVar17) {
        iVar13 = uVar17 + 3;
      }
      uVar16 = iVar13 >> 2;
      if (0xffff < (int)uVar16) {
        uVar16 = 0x10000;
      }
      func_0x000108a5942c(param_1 + 0x20,(long)(int)uVar16);
      piVar2 = *(int **)(param_1 + 0x20);
      if (0 < *(long *)(param_1 + 0x28) - (long)piVar2) {
        _bzero(piVar2);
      }
      fVar30 = (float)(int)(uVar16 - 1) / (fVar30 - fVar29);
      pfVar7 = pfVar20;
      uVar12 = uVar18;
      if (0 < (int)uVar17) {
        do {
          iVar13 = (int)(fVar30 * (*pfVar7 - fVar29));
          piVar2[iVar13] = piVar2[iVar13] + 1;
          uVar12 = uVar12 - 1;
          pfVar7 = pfVar7 + 1;
        } while (uVar12 != 0);
        if (4 < uVar17) {
          if ((int)uVar16 < 3) {
            uVar16 = 2;
          }
          iVar13 = *piVar2;
          lVar5 = (ulong)uVar16 - 1;
          piVar8 = piVar2;
          do {
            piVar8 = piVar8 + 1;
            iVar13 = *piVar8 + iVar13;
            *piVar8 = iVar13;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
        }
      }
      puVar6 = (undefined8 *)param_2[0x11];
      puVar9 = (uint *)*puVar6;
      if ((ulong)(puVar6[1] - (long)puVar9 >> 2) < uVar18) {
        FUN_10a8008d8(puVar6,uVar18);
        puVar9 = *(uint **)param_2[0x11];
      }
      uVar12 = uVar18;
      if (0 < (int)uVar17) {
        do {
          uVar11 = uVar12 - 1;
          iVar14 = (int)(fVar30 * (pfVar20[uVar11] - fVar29));
          iVar13 = piVar2[iVar14];
          piVar2[iVar14] = (int)((long)iVar13 + -1);
          puVar9[(long)iVar13 + -1] = puVar19[uVar11];
          bVar3 = 1 < uVar12;
          uVar12 = uVar11;
        } while (bVar3);
      }
      if ((*(byte *)(param_2 + 0xd) & 1) != 0) {
        iVar13 = *(int *)(*param_2 + 0x40);
        iVar14 = *(int *)(*param_2 + 0x44);
        uVar12 = uVar18;
        do {
          fVar29 = (1.0 / (float)iVar13) * ((float)(int)(short)*puVar9 + 0.5);
          fVar25 = (1.0 / (float)iVar14) * ((float)(int)*(short *)((long)puVar9 + 2) + 0.5);
          fVar30 = -1.0;
          if (-1.0 <= fVar29) {
            fVar30 = fVar29;
          }
          fVar29 = -1.0;
          if (-1.0 <= fVar25) {
            fVar29 = fVar25;
          }
          fVar25 = 1.0;
          if (fVar30 <= 1.0) {
            fVar25 = fVar30;
          }
          fVar30 = 1.0;
          if (fVar29 <= 1.0) {
            fVar30 = fVar29;
          }
          *puVar9 = (int)(fVar25 * 32767.0) & 0xffffU | (int)(fVar30 * 32767.0) << 0x10;
          uVar12 = uVar12 - 1;
          puVar9 = puVar9 + 1;
        } while (uVar12 != 0);
      }
    }
    else {
      FUN_10a8008d8(param_2[0x11],uVar18);
      _memcpy(*(undefined8 *)param_2[0x11],puVar19,uVar18 << 2);
    }
  }
  return uVar18;
}



/* Entry: 10a7dc78c; end: 10a7dcad3;  */

ulong FUN_10a7dc78c(long param_1,long *param_2)

{
  uint uVar1;
  int *piVar2;
  float fVar3;
  bool bVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  float *pfVar8;
  int *piVar9;
  uint *puVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  uint *puVar16;
  ulong uVar17;
  ulong uVar18;
  float *pfVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  lVar7 = *param_2;
  uVar18 = *(long *)(lVar7 + 0x30) - *(long *)(lVar7 + 0x28);
  iVar12 = *(int *)(lVar7 + 0x40);
  uVar11 = (long)(uVar18 * 0x10000000) >> 0x20;
  func_0x00010742a308(param_1 + 8,uVar11);
  pfVar19 = *(float **)(param_1 + 8);
  FUN_10a8008d8(param_1 + 0x50,uVar11);
  puVar16 = *(uint **)(param_1 + 0x50);
  uVar15 = (uint)(uVar18 >> 4);
  if ((int)uVar15 < 1) {
    fVar25 = 3.4028235e+38;
    fVar24 = -3.4028235e+38;
  }
  else {
    iVar13 = 0;
    lVar7 = param_2[3];
    lVar20 = param_2[5];
    lVar21 = param_2[7];
    lVar22 = param_2[9];
    uVar14 = uVar18 >> 4 & 0x7fffffff;
    fVar24 = -3.4028235e+38;
    fVar25 = 3.4028235e+38;
    puVar5 = *(undefined8 **)(*param_2 + 0x28);
    puVar10 = puVar16;
    pfVar8 = pfVar19;
    uVar6 = 0;
    do {
      *puVar10 = uVar6 & 0xffff | iVar13 << 0x10;
      bVar4 = uVar6 + 1 == iVar12;
      if (bVar4) {
        iVar13 = iVar13 + 1;
      }
      fVar23 = -((float)lVar7 * (float)*puVar5 + (float)lVar20 * (float)((ulong)*puVar5 >> 0x20) +
                 (float)lVar21 * (float)puVar5[1] +
                (float)lVar22 * (float)((ulong)puVar5[1] >> 0x20));
      *pfVar8 = fVar23;
      uVar1 = 0;
      if (!bVar4) {
        uVar1 = uVar6 + 1;
      }
      fVar3 = fVar23;
      if (fVar25 <= fVar23) {
        fVar3 = fVar25;
      }
      fVar25 = fVar3;
      if (fVar23 <= fVar24) {
        fVar23 = fVar24;
      }
      fVar24 = fVar23;
      uVar14 = uVar14 - 1;
      puVar5 = puVar5 + 2;
      puVar10 = puVar10 + 1;
      pfVar8 = pfVar8 + 1;
      uVar6 = uVar1;
    } while (uVar14 != 0);
  }
  if (uVar15 != 0) {
    if (uVar15 == 1) {
      FUN_10a8009c4(param_2[0x11],puVar16);
    }
    else if (0.001 <= fVar24 - fVar25) {
      iVar12 = uVar15 + 6;
      if (-4 < (int)uVar15) {
        iVar12 = uVar15 + 3;
      }
      uVar6 = iVar12 >> 2;
      if (0xffff < (int)uVar6) {
        uVar6 = 0x10000;
      }
      func_0x000108a5942c(param_1 + 0x20,(long)(int)uVar6);
      piVar2 = *(int **)(param_1 + 0x20);
      if (0 < *(long *)(param_1 + 0x28) - (long)piVar2) {
        _bzero(piVar2);
      }
      fVar25 = (float)(int)(uVar6 - 1) / (fVar25 - fVar24);
      uVar17 = uVar18 >> 4 & 0x7fffffff;
      pfVar8 = pfVar19;
      uVar14 = uVar17;
      if (0 < (int)uVar15) {
        do {
          iVar12 = (int)(fVar25 * (*pfVar8 - fVar24));
          piVar2[iVar12] = piVar2[iVar12] + 1;
          uVar14 = uVar14 - 1;
          pfVar8 = pfVar8 + 1;
        } while (uVar14 != 0);
        if (4 < uVar15) {
          if ((int)uVar6 < 3) {
            uVar6 = 2;
          }
          iVar12 = *piVar2;
          lVar7 = (ulong)uVar6 - 1;
          piVar9 = piVar2;
          do {
            piVar9 = piVar9 + 1;
            iVar12 = *piVar9 + iVar12;
            *piVar9 = iVar12;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
      }
      puVar5 = (undefined8 *)param_2[0x11];
      puVar10 = (uint *)*puVar5;
      if ((ulong)(puVar5[1] - (long)puVar10 >> 2) < uVar11) {
        FUN_10a8008d8(puVar5,uVar11);
        puVar10 = *(uint **)param_2[0x11];
      }
      if (0 < (int)uVar15) {
        do {
          uVar14 = uVar17 - 1;
          iVar13 = (int)(fVar25 * (pfVar19[uVar14] - fVar24));
          iVar12 = piVar2[iVar13];
          piVar2[iVar13] = (int)((long)iVar12 + -1);
          puVar10[(long)iVar12 + -1] = puVar16[uVar14];
          bVar4 = 1 < uVar17;
          uVar17 = uVar14;
        } while (bVar4);
      }
      if (((*(byte *)(param_2 + 0xd) & 1) != 0) && ((uVar18 & 0xfffffffff) >> 4 != 0)) {
        iVar12 = *(int *)(*param_2 + 0x40);
        iVar13 = *(int *)(*param_2 + 0x44);
        if (uVar11 < 2) {
          uVar11 = 1;
        }
        do {
          fVar24 = (1.0 / (float)iVar12) * ((float)(int)(short)*puVar10 + 0.5);
          fVar23 = (1.0 / (float)iVar13) * ((float)(int)*(short *)((long)puVar10 + 2) + 0.5);
          fVar25 = -1.0;
          if (-1.0 <= fVar24) {
            fVar25 = fVar24;
          }
          fVar24 = -1.0;
          if (-1.0 <= fVar23) {
            fVar24 = fVar23;
          }
          fVar23 = 1.0;
          if (fVar25 <= 1.0) {
            fVar23 = fVar25;
          }
          fVar25 = 1.0;
          if (fVar24 <= 1.0) {
            fVar25 = fVar24;
          }
          *puVar10 = (int)(fVar23 * 32767.0) & 0xffffU | (int)(fVar25 * 32767.0) << 0x10;
          uVar11 = uVar11 - 1;
          puVar10 = puVar10 + 1;
        } while (uVar11 != 0);
      }
    }
    else {
      FUN_10a8008d8(param_2[0x11],uVar11);
      _memcpy(*(undefined8 *)param_2[0x11],puVar16,uVar11 << 2);
    }
  }
  return uVar18 >> 4;
}



/* Entry: 10a7dcad4; end: 10a7ddfff;  */

undefined1 * FUN_10a7dcad4(long param_1,long param_2,uint *param_3)

{
  long lVar1;
  byte *pbVar2;
  ulong *puVar3;
  float **ppfVar4;
  ulong uVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  code *pcVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined1 *puVar13;
  long *plVar14;
  undefined1 *puVar15;
  float *pfVar16;
  undefined4 *puVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  float *pfVar21;
  float *pfVar22;
  ulong uVar23;
  float **ppfVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined1 uVar33;
  byte bVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  byte bVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  byte bVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  byte bVar43;
  undefined1 uVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  float fVar49;
  undefined8 uVar50;
  float fVar51;
  float fVar52;
  int iVar53;
  int iVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  ulong uVar60;
  float *pfStack_338;
  float *pfStack_330;
  undefined8 uStack_328;
  undefined1 auStack_320 [8];
  long lStack_318;
  undefined1 auStack_310 [80];
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  undefined8 auStack_2a8 [2];
  char cStack_291;
  long *aplStack_290 [2];
  char cStack_279;
  undefined8 uStack_278;
  long alStack_270 [2];
  float *pfStack_260;
  float *pfStack_258;
  ulong uStack_250;
  long *plStack_248;
  ulong uStack_240;
  undefined8 uStack_230;
  float *pfStack_228;
  float *pfStack_220;
  long *plStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  float *pfStack_1f0;
  float *pfStack_1e8;
  float *pfStack_1e0;
  long *plStack_1d8;
  float *pfStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  float *pfStack_1b0;
  float *pfStack_1a8;
  float *pfStack_1a0;
  undefined8 uStack_198;
  float afStack_190 [6];
  float *pfStack_178;
  float *pfStack_170;
  long lStack_168;
  float *pfStack_160;
  float *pfStack_158;
  ulong uStack_150;
  float *pfStack_148;
  float *pfStack_140;
  long lStack_138;
  float *pfStack_130;
  float *pfStack_128;
  undefined8 uStack_120;
  float *pfStack_118;
  float *pfStack_110;
  ulong uStack_108;
  float *pfStack_100;
  float *pfStack_f8;
  undefined8 uStack_f0;
  char cStack_e8;
  float *apfStack_e0 [3];
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_218 = (long *)((ulong)plStack_218 & 0xffffffffffffff00);
  uStack_210 = (float *)((ulong)uStack_210 & 0xffffffff00000000);
  uStack_230 = (float *)0x0;
  pfStack_228 = (float *)0x0;
  pfStack_220 = (float *)((ulong)pfStack_220 & 0xffffffffffffff00);
  func_0x0001092bcda8(auStack_310,&uStack_230);
  pfVar16 = pfStack_228;
  if (pfStack_228 != (float *)0x0) {
    pfVar21 = pfStack_228 + 2;
    do {
      lVar18 = *(long *)pfVar21;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pfVar21,0x10);
      if (bVar7) {
        *(long *)pfVar21 = lVar18 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*(long *)pfStack_228 + 0x10))(pfStack_228);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pfVar16);
    }
  }
  pfStack_260 = (float *)0x0;
  pfStack_258 = (float *)0x0;
  uStack_250 = 0;
  FUN_10a1319a4(&pfStack_260,param_1,param_1 + param_2,param_2);
  func_0x0001092be2f4(auStack_310,&pfStack_260);
  if (pfStack_260 != (float *)0x0) {
    pfStack_258 = pfStack_260;
    __ZdlPv();
  }
  func_0x0001092bea70(auStack_310);
  func_0x000107c2b054(&uStack_230,&UNK_10f67991b);
  FUN_10a7fcc7c(aplStack_290,auStack_310,&uStack_230);
  if ((long)pfStack_220 < 0) {
    __ZdlPv(uStack_230);
  }
  uStack_328 = 1;
  auStack_320[0] = 0;
  lStack_318 = 0;
  puVar10 = (undefined8 *)*aplStack_290[0];
  (**(code **)*puVar10)();
  puVar11 = (undefined8 *)*aplStack_290[0];
  (**(code **)*puVar11)();
  plVar12 = (long *)*aplStack_290[0];
  (**(code **)(*plVar12 + 0x18))();
  plStack_218 = (long *)0x0;
  FUN_10a0cd3f8(&uStack_278,puVar10,(long)puVar11 + (long)plVar12,&uStack_230,1,0);
  lVar18 = lStack_318;
  uVar33 = auStack_320[0];
  auStack_320[0] = (undefined1)uStack_278;
  uStack_278._0_4_ = CONCAT31(uStack_278._1_3_,uVar33);
  lStack_318 = alStack_270[0];
  alStack_270[0] = lVar18;
  func_0x000109380ffc(alStack_270);
  if (plStack_218 == &uStack_230) {
    lVar18 = 0x20;
LAB_10a7dccac:
    (**(code **)(*plStack_218 + lVar18))();
  }
  else if (plStack_218 != (long *)0x0) {
    lVar18 = 0x28;
    goto LAB_10a7dccac;
  }
  func_0x000107c2b054(&pfStack_260,"version");
  apfStack_e0[0] = (float *)CONCAT44(apfStack_e0[0]._4_4_,1);
  puVar13 = auStack_320;
  func_0x00010938988c(puVar13,&pfStack_260,apfStack_e0);
  uStack_328._0_4_ = (int)puVar13;
  if ((long)uStack_250 < 0) {
    __ZdlPv(pfStack_260);
  }
  if ((int)uStack_328 - 3U < 0xfffffffe) {
    apfStack_e0[0] = (float *)CONCAT44(apfStack_e0[0]._4_4_,(int)uStack_328);
    func_0x0001099a6214(&pfStack_260,&UNK_10f679949,0x21,1,apfStack_e0);
    FUN_10a0029c0(&pfStack_260);
  }
  else {
    func_0x000107c2b054(&pfStack_260,&DAT_10f637eac);
    func_0x0001094947d8(auStack_320,&pfStack_260);
    func_0x000109407a04();
    uStack_328._4_4_ = (uint)apfStack_e0[0];
    if ((long)uStack_250 < 0) {
      __ZdlPv(pfStack_260);
    }
    plVar12 = aplStack_290[0];
    if (uStack_328._4_4_ == 0) {
      FUN_10a00946c(&UNK_10f67996b);
    }
    else {
      aplStack_290[0] = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        plVar14 = (long *)*plVar12;
        *plVar12 = 0;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 0x40))();
        }
        __ZdlPv(plVar12);
      }
      uStack_f0 = 0;
      uStack_108 = 0;
      pfStack_110 = (float *)0x0;
      pfStack_f8 = (float *)0x0;
      pfStack_100 = (float *)0x0;
      pfStack_128 = (float *)0x0;
      pfStack_130 = (float *)0x0;
      pfStack_118 = (float *)0x0;
      uStack_120 = 0;
      pfStack_148 = (float *)0x0;
      uStack_150 = 0;
      lStack_138 = 0;
      pfStack_140 = (float *)0x0;
      lStack_168 = 0;
      pfStack_170 = (float *)0x0;
      pfStack_158 = (float *)0x0;
      pfStack_160 = (float *)0x0;
      afStack_190[2] = 0.0;
      afStack_190[3] = 0.0;
      afStack_190[0] = 0.0;
      afStack_190[1] = 0.0;
      pfStack_178 = (float *)0x0;
      afStack_190[4] = 0.0;
      afStack_190[5] = 0.0;
      pfStack_1a8 = (float *)0x0;
      pfStack_1b0 = (float *)0x0;
      uStack_198 = 0;
      pfStack_1a0 = (float *)0x0;
      lStack_1c8 = 0;
      pfStack_1d0 = (float *)0x0;
      uStack_1b8 = 0;
      lStack_1c0 = 0;
      pfStack_1e8 = (float *)0x0;
      pfStack_1f0 = (float *)0x0;
      plStack_1d8 = (long *)0x0;
      pfStack_1e0 = (float *)0x0;
      lStack_208 = 0;
      uStack_210 = (float *)0x0;
      uStack_1f8 = 0;
      lStack_200 = 0;
      pfStack_228 = (float *)0x0;
      uStack_230 = (float *)0x0;
      plStack_218 = (long *)0x0;
      pfStack_220 = (float *)0x0;
      cStack_e8 = (int)uStack_328 == 2;
      func_0x000107c2b054(&pfStack_260,&UNK_10f6799ac);
      puVar13 = auStack_320;
      func_0x000109406570(puVar13,&pfStack_260);
      if ((long)uStack_250 < 0) {
        __ZdlPv(pfStack_260);
      }
      func_0x000107c2b054(&pfStack_260,&UNK_10f6799b2);
      func_0x000109406570(puVar13,&pfStack_260);
      func_0x0001094a87f4(apfStack_e0);
      if ((long)uStack_250 < 0) {
        __ZdlPv(pfStack_260);
      }
      func_0x000107c2b054(&pfStack_260,&UNK_10f6799b7);
      func_0x000109406570(puVar13,&pfStack_260);
      func_0x0001094a87f4(&uStack_278);
      if ((long)uStack_250 < 0) {
        __ZdlPv(pfStack_260);
      }
      FUN_10a7fcdd0(apfStack_e0[0],apfStack_e0[1],CONCAT44(uStack_278._4_4_,(undefined4)uStack_278),
                    alStack_270[0],&UNK_10f6799ac);
      lVar18 = 0;
      pfStack_330 = afStack_190;
      pfStack_338 = afStack_190 + 1;
      do {
        if ((long)apfStack_e0[1] - (long)apfStack_e0[0] >> 2 == lVar18) {
LAB_10a7ddbf8:
          FUN_10a7fd55c();
          goto LAB_10a7ddf3c;
        }
        iVar53 = (int)lVar18;
        ppfVar24 = &pfStack_330;
        if (iVar53 == 1) {
          ppfVar24 = &pfStack_338;
        }
        pfVar16 = afStack_190 + 2;
        if (iVar53 != 2) {
          pfVar16 = *ppfVar24;
        }
        *pfVar16 = apfStack_e0[0][lVar18];
        if (alStack_270[0] - CONCAT44(uStack_278._4_4_,(undefined4)uStack_278) >> 2 == lVar18)
        goto LAB_10a7ddbf8;
        pfVar16 = afStack_190 + 3;
        if (iVar53 == 1) {
          pfVar16 = afStack_190 + 4;
        }
        pfVar21 = afStack_190 + 5;
        if (iVar53 != 2) {
          pfVar21 = pfVar16;
        }
        *pfVar21 = *(float *)(CONCAT44(uStack_278._4_4_,(undefined4)uStack_278) + lVar18 * 4);
        lVar18 = lVar18 + 1;
      } while (lVar18 != 3);
      func_0x000107c2b054(&pfStack_260,&DAT_10f3afcfb);
      func_0x000109406570(puVar13,&pfStack_260);
      if ((long)uStack_250 < 0) {
        __ZdlPv(pfStack_260);
      }
      FUN_10a7fd214(aplStack_290,puVar13,0,&UNK_10f6799ac);
      FUN_10a7fced4(&pfStack_260,auStack_310,aplStack_290);
      uStack_230 = pfStack_260;
      if (pfStack_228 != (float *)0x0) {
        pfStack_220 = pfStack_228;
        __ZdlPv();
      }
      pfStack_220 = (float *)uStack_250;
      pfStack_228 = pfStack_258;
      plStack_218 = plStack_248;
      uStack_250 = 0;
      plStack_248 = (long *)0x0;
      pfStack_258 = (float *)0x0;
      if (cStack_279 < '\0') {
        __ZdlPv(aplStack_290[0]);
      }
      FUN_10a7fd214(aplStack_290,puVar13,1,&UNK_10f6799ac);
      FUN_10a7fced4(&pfStack_260,auStack_310,aplStack_290);
      uStack_210 = pfStack_260;
      if (lStack_208 != 0) {
        lStack_200 = lStack_208;
        __ZdlPv();
      }
      lStack_200 = uStack_250;
      lStack_208 = (long)pfStack_258;
      uStack_1f8 = plStack_248;
      uStack_250 = 0;
      plStack_248 = (long *)0x0;
      pfStack_258 = (float *)0x0;
      if (cStack_279 < '\0') {
        __ZdlPv(aplStack_290[0]);
      }
      if ((int)uStack_230 == (int)uStack_210) {
        if (uStack_230._4_4_ == uStack_210._4_4_) {
          func_0x000107c2b054(auStack_2a8,&UNK_10f6799f6);
          puVar13 = auStack_320;
          func_0x000109406570(puVar13,auStack_2a8);
          func_0x000107c2b054(auStack_2c0,&DAT_10f3afcfb);
          func_0x000109406570(puVar13,auStack_2c0);
          FUN_10a7fd214(aplStack_290,puVar13,0,&UNK_10f6799f6);
          FUN_10a7fced4(&pfStack_260,auStack_310,aplStack_290);
          pfStack_1f0 = pfStack_260;
          if (pfStack_1e8 != (float *)0x0) {
            pfStack_1e0 = pfStack_1e8;
            __ZdlPv();
          }
          pfStack_1e0 = (float *)uStack_250;
          pfStack_1e8 = pfStack_258;
          plStack_1d8 = plStack_248;
          uStack_250 = 0;
          plStack_248 = (long *)0x0;
          pfStack_258 = (float *)0x0;
          if (cStack_279 < '\0') {
            __ZdlPv(aplStack_290[0]);
          }
          if (cStack_2a9 < '\0') {
            __ZdlPv(auStack_2c0[0]);
          }
          if (cStack_291 < '\0') {
            __ZdlPv(auStack_2a8[0]);
          }
          func_0x000107c2b054(&pfStack_260,&UNK_10f63d55b);
          puVar13 = auStack_320;
          func_0x000109406570(puVar13,&pfStack_260);
          if ((long)uStack_250 < 0) {
            __ZdlPv(pfStack_260);
          }
          func_0x000107c2b054(auStack_2a8,&DAT_10f3afcfb);
          puVar15 = puVar13;
          func_0x000109406570(puVar13,auStack_2a8);
          FUN_10a7fd214(aplStack_290,puVar15,0,&UNK_10f63d55b);
          FUN_10a7fced4(&pfStack_260,auStack_310,aplStack_290);
          pfStack_1d0 = pfStack_260;
          if (lStack_1c8 != 0) {
            lStack_1c0 = lStack_1c8;
            __ZdlPv();
          }
          lStack_1c0 = uStack_250;
          lStack_1c8 = (long)pfStack_258;
          uStack_1b8 = plStack_248;
          uStack_250 = 0;
          plStack_248 = (long *)0x0;
          pfStack_258 = (float *)0x0;
          if (cStack_279 < '\0') {
            __ZdlPv(aplStack_290[0]);
          }
          if (cStack_291 < '\0') {
            __ZdlPv(auStack_2a8[0]);
          }
          if (cStack_e8 == '\x01') {
            FUN_10a7fd2c0(&pfStack_260,puVar13);
            if (pfStack_178 != (float *)0x0) {
              pfStack_170 = pfStack_178;
              __ZdlPv();
            }
            pfStack_170 = pfStack_258;
            pfStack_178 = pfStack_260;
            lStack_168 = uStack_250;
          }
          else {
            func_0x000107c2b054(aplStack_290,&UNK_10f6799b2);
            func_0x000109406570(puVar13,aplStack_290);
            func_0x0001094a87f4(&pfStack_260);
            if (pfStack_148 != (float *)0x0) {
              pfStack_140 = pfStack_148;
              __ZdlPv();
            }
            pfStack_140 = pfStack_258;
            pfStack_148 = pfStack_260;
            lStack_138 = uStack_250;
            pfStack_258 = (float *)0x0;
            uStack_250 = 0;
            pfStack_260 = (float *)0x0;
            if (cStack_279 < '\0') {
              __ZdlPv(aplStack_290[0]);
            }
            func_0x000107c2b054(aplStack_290,&UNK_10f6799b7);
            func_0x000109406570(puVar13,aplStack_290);
            func_0x0001094a87f4(&pfStack_260);
            if (pfStack_130 != (float *)0x0) {
              pfStack_128 = pfStack_130;
              __ZdlPv();
            }
            pfStack_130 = pfStack_260;
            uStack_120 = uStack_250;
            pfStack_128 = pfStack_258;
            pfStack_258 = (float *)0x0;
            uStack_250 = 0;
            pfStack_260 = (float *)0x0;
            if (cStack_279 < '\0') {
              __ZdlPv(aplStack_290[0]);
            }
            FUN_10a7fcdd0(pfStack_148,pfStack_140,pfStack_130,pfStack_128,&UNK_10f63d55b);
          }
          func_0x000107c2b054(&pfStack_260,&UNK_10f6799fc);
          puVar13 = auStack_320;
          func_0x000109406570(puVar13,&pfStack_260);
          if ((long)uStack_250 < 0) {
            __ZdlPv(pfStack_260);
          }
          func_0x000107c2b054(auStack_2a8,&DAT_10f3afcfb);
          puVar15 = puVar13;
          func_0x000109406570(puVar13,auStack_2a8);
          FUN_10a7fd214(aplStack_290,puVar15,0,&UNK_10f6799fc);
          FUN_10a7fced4(&pfStack_260,auStack_310,aplStack_290);
          pfStack_1b0 = pfStack_260;
          if (pfStack_1a8 != (float *)0x0) {
            pfStack_1a0 = pfStack_1a8;
            __ZdlPv();
          }
          pfStack_1a0 = (float *)uStack_250;
          pfStack_1a8 = pfStack_258;
          uStack_198 = plStack_248;
          uStack_250 = 0;
          plStack_248 = (long *)0x0;
          pfStack_258 = (float *)0x0;
          if (cStack_279 < '\0') {
            __ZdlPv(aplStack_290[0]);
          }
          if (cStack_291 < '\0') {
            __ZdlPv(auStack_2a8[0]);
          }
          if (cStack_e8 == '\x01') {
            FUN_10a7fd2c0(&pfStack_260,puVar13);
            if (pfStack_160 != (float *)0x0) {
              pfStack_158 = pfStack_160;
              __ZdlPv();
            }
            pfStack_158 = pfStack_258;
            pfStack_160 = pfStack_260;
            uStack_150 = uStack_250;
          }
          else {
            func_0x000107c2b054(aplStack_290,&UNK_10f6799b2);
            func_0x000109406570(puVar13,aplStack_290);
            func_0x0001094a87f4(&pfStack_260);
            if (pfStack_118 != (float *)0x0) {
              pfStack_110 = pfStack_118;
              __ZdlPv();
            }
            pfStack_110 = pfStack_258;
            pfStack_118 = pfStack_260;
            uStack_108 = uStack_250;
            pfStack_258 = (float *)0x0;
            uStack_250 = 0;
            pfStack_260 = (float *)0x0;
            if (cStack_279 < '\0') {
              __ZdlPv(aplStack_290[0]);
            }
            func_0x000107c2b054(aplStack_290,&UNK_10f6799b7);
            func_0x000109406570(puVar13,aplStack_290);
            func_0x0001094a87f4(&pfStack_260);
            if (pfStack_100 != (float *)0x0) {
              pfStack_f8 = pfStack_100;
              __ZdlPv();
            }
            pfStack_100 = pfStack_260;
            uStack_f0 = uStack_250;
            pfStack_f8 = pfStack_258;
            pfStack_258 = (float *)0x0;
            uStack_250 = 0;
            pfStack_260 = (float *)0x0;
            if (cStack_279 < '\0') {
              __ZdlPv(aplStack_290[0]);
            }
            FUN_10a7fcdd0(pfStack_118,pfStack_110,pfStack_100,pfStack_f8,&UNK_10f6799fc);
          }
          if (CONCAT44(uStack_278._4_4_,(undefined4)uStack_278) != 0) {
            alStack_270[0] = CONCAT44(uStack_278._4_4_,(undefined4)uStack_278);
            __ZdlPv();
          }
          if (apfStack_e0[0] != (float *)0x0) {
            apfStack_e0[1] = apfStack_e0[0];
            __ZdlPv();
          }
          uVar8 = uStack_328._4_4_;
          uVar27 = (ulong)uStack_328._4_4_;
          pfVar16 = (float *)((long)pfStack_220 - (long)pfStack_228);
          if (pfVar16 < (float *)(uVar27 << 2)) {
            pfVar21 = (float *)((long)pfStack_1e0 - (long)pfStack_1e8);
          }
          else {
            pfVar22 = (float *)(uVar27 << 2);
            pfVar21 = (float *)((long)pfStack_1e0 - (long)pfStack_1e8);
            if ((((pfVar22 <= (float *)(lStack_200 - lStack_208)) && (pfVar22 <= pfVar21)) &&
                (pfVar22 <= (float *)(lStack_1c0 - lStack_1c8))) &&
               (pfVar22 <= (float *)((long)pfStack_1a0 - (long)pfStack_1a8))) {
              *param_3 = uStack_328._4_4_;
              func_0x0001096b5198(param_3 + 2,uVar27);
              func_0x0001096b5198(param_3 + 8,uVar27);
              func_0x00010983d018(param_3 + 0xe,uVar27);
              func_0x00010983d048(param_3 + 0x14,uVar27);
              if (uVar8 != 0) {
                lVar18 = 0;
                uVar29 = 0;
                uVar60 = NEON_fmov(0x3f800000,4);
                do {
                  pfVar16 = pfStack_228;
                  lVar28 = 0;
                  pfStack_260 = (float *)((ulong)pfStack_260 & 0xffffffff00000000);
                  apfStack_e0[0] = (float *)((ulong)apfStack_e0[0] & 0xffffffff00000000);
                  uStack_278._0_4_ = 0;
                  lVar1 = lStack_208 + lVar18;
                  do {
                    iVar53 = (int)lVar28;
                    pfVar21 = afStack_190 + 5;
                    pfVar22 = afStack_190 + 2;
                    if ((iVar53 != 2) &&
                       (pfVar21 = afStack_190 + 3, pfVar22 = pfStack_330, iVar53 == 1)) {
                      pfVar21 = afStack_190 + 4;
                      pfVar22 = pfStack_338;
                    }
                    fVar30 = (float)CONCAT11(*(undefined1 *)(lVar1 + lVar28),
                                             *(undefined1 *)((long)pfVar16 + lVar28 + lVar18)) /
                             65535.0;
                    fVar30 = fVar30 * *pfVar21 + (1.0 - fVar30) * *pfVar22;
                    if (0.0 <= fVar30) {
                      _expf();
                      fVar30 = fVar30 + -1.0;
                    }
                    else {
                      fVar30 = -fVar30;
                      _expf();
                      fVar30 = -(fVar30 + -1.0);
                    }
                    ppfVar24 = &pfStack_260;
                    if (iVar53 == 1) {
                      ppfVar24 = apfStack_e0;
                    }
                    ppfVar4 = (float **)&uStack_278;
                    if (iVar53 != 2) {
                      ppfVar4 = ppfVar24;
                    }
                    *(float *)ppfVar4 = fVar30;
                    pfVar22 = pfStack_130;
                    pfVar21 = pfStack_148;
                    lVar28 = lVar28 + 1;
                  } while (lVar28 != 3);
                  uVar19 = (*(long *)(param_3 + 4) - *(long *)(param_3 + 2) >> 2) *
                           -0x5555555555555555;
                  if (uVar19 < uVar29 || uVar19 - uVar29 == 0) goto LAB_10a7ddf3c;
                  puVar17 = (undefined4 *)(*(long *)(param_3 + 2) + uVar29 * 0xc);
                  *puVar17 = pfStack_260._0_4_;
                  puVar17[1] = (uint)apfStack_e0[0];
                  puVar17[2] = (undefined4)uStack_278;
                  pfVar16 = pfStack_1e8 + uVar29;
                  bVar34 = *(byte *)((long)pfVar16 + 3);
                  fVar31 = 1.0;
                  uVar33 = 0;
                  uVar36 = 0;
                  uVar39 = 0;
                  uVar42 = 0;
                  fVar52 = 1.0;
                  fVar30 = 0.0;
                  fVar49 = 0.0;
                  fVar51 = 0.0;
                  if (0xfb < bVar34) {
                    fVar30 = (float)NEON_ucvtf((uint)*(byte *)pfVar16);
                    fVar57 = (fVar30 / 255.0 + -0.5) * 1.4142135;
                    fVar30 = (float)NEON_ucvtf((uint)*(byte *)((long)pfVar16 + 1));
                    fVar49 = (fVar30 / 255.0 + -0.5) * 1.4142135;
                    fVar30 = (float)NEON_ucvtf((uint)*(byte *)((long)pfVar16 + 2));
                    fVar55 = (fVar30 / 255.0 + -0.5) * 1.4142135;
                    fVar56 = ((1.0 - fVar57 * fVar57) - fVar49 * fVar49) - fVar55 * fVar55;
                    if (fVar56 <= 0.0) {
                      fVar56 = 0.0;
                    }
                    fVar56 = SQRT(fVar56);
                    fVar52 = fVar57;
                    fVar51 = fVar55;
                    if (bVar34 < 0xfe) {
                      fVar30 = fVar56;
                      if (bVar34 == 0xfc) {
                        fVar52 = fVar56;
                        fVar30 = fVar57;
                      }
                    }
                    else {
                      fVar30 = fVar49;
                      fVar49 = fVar55;
                      fVar51 = fVar56;
                      if (bVar34 == 0xfe) {
                        fVar49 = fVar56;
                        fVar51 = fVar55;
                      }
                    }
                  }
                  fVar57 = fVar49 * fVar49 + fVar51 * fVar51 + fVar30 * fVar30 + fVar52 * fVar52;
                  if (fVar57 == 0.0) {
                    fVar49 = 0.0;
                    fVar51 = 0.0;
                  }
                  else {
                    fVar57 = 1.0 / SQRT(fVar57);
                    fVar31 = fVar52 * fVar57;
                    fVar30 = fVar30 * fVar57;
                    uVar33 = SUB41(fVar30,0);
                    uVar36 = (undefined1)((uint)fVar30 >> 8);
                    uVar39 = (undefined1)((uint)fVar30 >> 0x10);
                    uVar42 = (undefined1)((uint)fVar30 >> 0x18);
                    fVar49 = fVar49 * fVar57;
                    fVar51 = fVar51 * fVar57;
                  }
                  if ((ulong)(*(long *)(param_3 + 0x10) - *(long *)(param_3 + 0xe) >> 4) <= uVar29)
                  goto LAB_10a7ddf3c;
                  puVar17 = (undefined4 *)(*(long *)(param_3 + 0xe) + uVar29 * 0x10);
                  *puVar17 = CONCAT13(uVar42,CONCAT12(uVar39,CONCAT11(uVar36,uVar33)));
                  puVar17[1] = fVar49;
                  puVar17[2] = fVar51;
                  puVar17[3] = fVar31;
                  fVar52 = (float)uVar60;
                  fVar49 = (float)(uVar60 >> 0x20);
                  fVar30 = 1.0;
                  if (cStack_e8 == '\x01') {
                    if (pfStack_178 == pfStack_170) {
                      fVar57 = 0.0;
                      fVar31 = 0.0;
                      fVar51 = 0.0;
                    }
                    else {
                      pbVar2 = (byte *)(lStack_1c8 + uVar29 * 4);
                      uVar23 = (long)pfStack_170 - (long)pfStack_178 >> 2;
                      uVar25 = uVar23 - 1;
                      uVar19 = uVar25;
                      if (*pbVar2 <= uVar25) {
                        uVar19 = (ulong)*pbVar2;
                      }
                      if (uVar23 <= uVar19) goto LAB_10a7ddf3c;
                      uVar5 = uVar25;
                      if (pbVar2[1] <= uVar25) {
                        uVar5 = (ulong)pbVar2[1];
                      }
                      if (uVar23 <= uVar5) goto LAB_10a7ddf3c;
                      if (pbVar2[2] <= uVar25) {
                        uVar25 = (ulong)pbVar2[2];
                      }
                      if (uVar23 <= uVar25) goto LAB_10a7ddf3c;
                      fVar31 = pfStack_178[uVar19];
                      fVar57 = pfStack_178[uVar5];
                      fVar51 = pfStack_178[uVar25];
                    }
                    lVar28 = *(long *)(param_3 + 8);
                    uVar19 = (*(long *)(param_3 + 10) - lVar28 >> 2) * -0x5555555555555555;
                    if (uVar19 < uVar29 || uVar19 - uVar29 == 0) goto LAB_10a7ddf3c;
                    _expf();
                    _expf();
                    _expf();
                    pfVar16 = (float *)(lVar28 + uVar29 * 0xc);
                    *pfVar16 = fVar31;
                    pfVar16[1] = fVar57;
                    pfVar16[2] = fVar51;
                    pfVar16 = pfStack_1a8 + uVar29;
                    if (pfStack_160 == pfStack_158) {
                      uVar50 = 0x3f0000003f000000;
                      uVar33 = 0;
                      uVar36 = 0;
                      uVar39 = 0;
                      uVar42 = 0;
                    }
                    else {
                      uVar23 = (long)pfStack_158 - (long)pfStack_160 >> 2;
                      uVar25 = uVar23 - 1;
                      uVar19 = uVar25;
                      if (*(byte *)pfVar16 <= uVar25) {
                        uVar19 = (ulong)*(byte *)pfVar16;
                      }
                      if (uVar23 <= uVar19) goto LAB_10a7ddf3c;
                      uVar5 = uVar25;
                      if (*(byte *)((long)pfVar16 + 1) <= uVar25) {
                        uVar5 = (ulong)*(byte *)((long)pfVar16 + 1);
                      }
                      if (uVar23 <= uVar5) goto LAB_10a7ddf3c;
                      if (*(byte *)((long)pfVar16 + 2) <= uVar25) {
                        uVar25 = (ulong)*(byte *)((long)pfVar16 + 2);
                      }
                      if (uVar23 <= uVar25) goto LAB_10a7ddf3c;
                      fVar51 = pfStack_160[uVar25];
                      uVar33 = SUB41(fVar51,0);
                      uVar36 = (undefined1)((uint)fVar51 >> 8);
                      uVar39 = (undefined1)((uint)fVar51 >> 0x10);
                      uVar42 = (undefined1)((uint)fVar51 >> 0x18);
                      uVar50 = CONCAT44(pfStack_160[uVar5] * 0.2820948 + 0.5,
                                        pfStack_160[uVar19] * 0.2820948 + 0.5);
                    }
                    lVar28 = *(long *)(param_3 + 0x14);
                    if ((ulong)(*(long *)(param_3 + 0x16) - lVar28 >> 4) <= uVar29)
                    goto LAB_10a7ddf3c;
                    fVar51 = (float)NEON_ucvtf((uint)*(byte *)((long)pfVar16 + 3));
                    if (fVar51 / 255.0 <= 1.0) {
                      fVar30 = fVar51 / 255.0;
                    }
                    iVar53 = -(uint)((float)uVar50 < 0.0);
                    iVar54 = -(uint)((float)((ulong)uVar50 >> 0x20) < 0.0);
                    fVar51 = (float)CONCAT13((byte)((ulong)uVar50 >> 0x18) &
                                             ~(byte)((uint)iVar53 >> 0x18),
                                             CONCAT12((byte)((ulong)uVar50 >> 0x10) &
                                                      ~(byte)((uint)iVar53 >> 0x10),
                                                      CONCAT11((byte)((ulong)uVar50 >> 8) &
                                                               ~(byte)((uint)iVar53 >> 8),
                                                               (byte)uVar50 & ~(byte)iVar53)));
                    uVar19 = CONCAT17((byte)((ulong)uVar50 >> 0x38) & ~(byte)((uint)iVar54 >> 0x18),
                                      CONCAT16((byte)((ulong)uVar50 >> 0x30) &
                                               ~(byte)((uint)iVar54 >> 0x10),
                                               CONCAT15((byte)((ulong)uVar50 >> 0x28) &
                                                        ~(byte)((uint)iVar54 >> 8),
                                                        CONCAT14((byte)((ulong)uVar50 >> 0x20) &
                                                                 ~(byte)iVar54,fVar51))));
                    uVar19 = uVar19 ^ (uVar19 ^ uVar60) &
                                      CONCAT44(-(uint)(fVar49 < (float)(uVar19 >> 0x20)),
                                               -(uint)(fVar52 < fVar51));
                  }
                  else {
                    lVar28 = 0;
                    pfStack_260 = (float *)((ulong)pfStack_260 & 0xffffffff00000000);
                    apfStack_e0[0] = (float *)((ulong)apfStack_e0[0] & 0xffffffff00000000);
                    uStack_278._0_4_ = 0;
                    lVar20 = (long)pfStack_140 - (long)pfStack_148;
                    lVar26 = (long)pfStack_128 - (long)pfStack_130;
                    lVar1 = lStack_1c8 + lVar18;
                    do {
                      if ((lVar20 >> 2 == lVar28) || (lVar26 >> 2 == lVar28)) goto LAB_10a7ddf3c;
                      fVar51 = (float)NEON_ucvtf((uint)*(byte *)(lVar1 + lVar28));
                      ppfVar24 = &pfStack_260;
                      if ((int)lVar28 == 1) {
                        ppfVar24 = apfStack_e0;
                      }
                      ppfVar4 = (float **)&uStack_278;
                      if ((int)lVar28 != 2) {
                        ppfVar4 = ppfVar24;
                      }
                      *(float *)ppfVar4 =
                           pfVar22[lVar28] * (fVar51 / 255.0) +
                           (1.0 - fVar51 / 255.0) * pfVar21[lVar28];
                      lVar28 = lVar28 + 1;
                    } while (lVar28 != 3);
                    lVar28 = *(long *)(param_3 + 8);
                    uVar19 = (*(long *)(param_3 + 10) - lVar28 >> 2) * -0x5555555555555555;
                    if (uVar19 < uVar29 || uVar19 - uVar29 == 0) goto LAB_10a7ddf3c;
                    uVar58 = SUB84(pfStack_260,0);
                    uVar59 = SUB84(apfStack_e0[0],0);
                    uVar32 = (undefined4)uStack_278;
                    _expf();
                    _expf();
                    _expf();
                    puVar17 = (undefined4 *)(lVar28 + uVar29 * 0xc);
                    *puVar17 = uVar58;
                    puVar17[1] = uVar59;
                    puVar17[2] = uVar32;
                    if (((((pfStack_110 == pfStack_118) || (pfStack_f8 == pfStack_100)) ||
                         ((ulong)((long)pfStack_110 - (long)pfStack_118) < 5)) ||
                        (((ulong)((long)pfStack_f8 - (long)pfStack_100) < 5 ||
                         ((long)pfStack_110 - (long)pfStack_118 == 8)))) ||
                       (((long)pfStack_f8 - (long)pfStack_100 == 8 ||
                        (lVar28 = *(long *)(param_3 + 0x14),
                        (ulong)(*(long *)(param_3 + 0x16) - lVar28 >> 4) <= uVar29))))
                    goto LAB_10a7ddf3c;
                    pfVar16 = pfStack_1a8 + uVar29;
                    fVar51 = (float)NEON_ucvtf((uint)*(byte *)((long)pfVar16 + 3));
                    if (fVar51 / 255.0 <= 1.0) {
                      fVar30 = fVar51 / 255.0;
                    }
                    uVar50 = NEON_ucvtf((ulong)CONCAT14(*(byte *)((long)pfVar16 + 1),
                                                        (uint)*(byte *)pfVar16),4);
                    fVar51 = (float)uVar50 / 255.0;
                    fVar31 = (float)((ulong)uVar50 >> 0x20) / 255.0;
                    fVar51 = (*pfStack_100 * fVar51 + (fVar52 - fVar51) * *pfStack_118) * 0.2820948
                             + 0.5;
                    fVar31 = (pfStack_100[1] * fVar31 + (fVar49 - fVar31) * pfStack_118[1]) *
                             0.2820948 + 0.5;
                    iVar53 = -(uint)(fVar51 < 0.0);
                    iVar54 = -(uint)(fVar31 < 0.0);
                    bVar34 = SUB41(fVar51,0) & ~(byte)iVar53;
                    bVar37 = (byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar53 >> 8);
                    bVar40 = (byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar53 >> 0x10);
                    bVar43 = (byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar53 >> 0x18);
                    bVar45 = SUB41(fVar31,0) & ~(byte)iVar54;
                    bVar46 = (byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar54 >> 8);
                    bVar47 = (byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar54 >> 0x10);
                    bVar48 = (byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18);
                    uVar19 = CONCAT17(bVar48,CONCAT16(bVar47,CONCAT15(bVar46,CONCAT14(bVar45,
                                                  CONCAT13(bVar43,CONCAT12(bVar40,CONCAT11(bVar37,
                                                  bVar34))))))) ^
                             (CONCAT17(bVar48,CONCAT16(bVar47,CONCAT15(bVar46,CONCAT14(bVar45,
                                                  CONCAT13(bVar43,CONCAT12(bVar40,CONCAT11(bVar37,
                                                  bVar34))))))) ^ uVar60) &
                             CONCAT44(-(uint)(fVar49 < (float)CONCAT13(bVar48,CONCAT12(bVar47,
                                                  CONCAT11(bVar46,bVar45)))),
                                      -(uint)(fVar52 < (float)CONCAT13(bVar43,CONCAT12(bVar40,
                                                  CONCAT11(bVar37,bVar34)))));
                    fVar52 = (float)NEON_ucvtf((uint)*(byte *)((long)pfVar16 + 2));
                    fVar52 = pfStack_100[2] * (fVar52 / 255.0) +
                             (1.0 - fVar52 / 255.0) * pfStack_118[2];
                    uVar33 = SUB41(fVar52,0);
                    uVar36 = (undefined1)((uint)fVar52 >> 8);
                    uVar39 = (undefined1)((uint)fVar52 >> 0x10);
                    uVar42 = (undefined1)((uint)fVar52 >> 0x18);
                  }
                  fVar52 = (float)CONCAT13(uVar42,CONCAT12(uVar39,CONCAT11(uVar36,uVar33))) *
                           0.2820948 + 0.5;
                  uVar33 = 0;
                  uVar36 = 0;
                  uVar39 = 0;
                  uVar42 = 0;
                  if (0.0 <= fVar52) {
                    uVar33 = SUB41(fVar52,0);
                    uVar36 = (undefined1)((uint)fVar52 >> 8);
                    uVar39 = (undefined1)((uint)fVar52 >> 0x10);
                    uVar42 = (undefined1)((uint)fVar52 >> 0x18);
                  }
                  bVar7 = NAN((float)CONCAT13(uVar42,CONCAT12(uVar39,CONCAT11(uVar36,uVar33))));
                  uVar35 = 0;
                  uVar38 = 0;
                  uVar41 = 0x80;
                  uVar44 = 0x3f;
                  if (!bVar7 && (float)CONCAT13(uVar42,CONCAT12(uVar39,CONCAT11(uVar36,uVar33))) ==
                                1.0 ||
                      (!bVar7 &&
                      (float)CONCAT13(uVar42,CONCAT12(uVar39,CONCAT11(uVar36,uVar33))) < 1.0) !=
                      bVar7) {
                    uVar35 = uVar33;
                    uVar38 = uVar36;
                    uVar41 = uVar39;
                    uVar44 = uVar42;
                  }
                  puVar3 = (ulong *)(lVar28 + uVar29 * 0x10);
                  *puVar3 = uVar19;
                  *(uint *)(puVar3 + 1) = CONCAT13(uVar44,CONCAT12(uVar41,CONCAT11(uVar38,uVar35)));
                  *(float *)((long)puVar3 + 0xc) = fVar30;
                  uVar29 = uVar29 + 1;
                  lVar18 = lVar18 + 4;
                } while (uVar29 != uVar27);
              }
              FUN_10a7de000(&uStack_230);
              func_0x000109380ffc(&lStack_318,auStack_320[0]);
              puVar13 = auStack_310;
              func_0x0001092bce58();
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
                ___stack_chk_fail();
                if (CONCAT44(uStack_278._4_4_,(undefined4)uStack_278) != 0) {
                  alStack_270[0] = CONCAT44(uStack_278._4_4_,(undefined4)uStack_278);
                  __ZdlPv();
                }
                if (apfStack_e0[0] != (float *)0x0) {
                  apfStack_e0[1] = apfStack_e0[0];
                  __ZdlPv();
                }
                FUN_10a7de000(&uStack_230);
                func_0x000109380ffc(&lStack_318,auStack_320[0]);
                func_0x0001092bce58(auStack_310);
                __Unwind_Resume();
                if (*(long *)(puVar13 + 0x130) != 0) {
                  *(long *)(puVar13 + 0x138) = *(long *)(puVar13 + 0x130);
                  __ZdlPv();
                }
                if (*(long *)(puVar13 + 0x118) != 0) {
                  *(long *)(puVar13 + 0x120) = *(long *)(puVar13 + 0x118);
                  __ZdlPv();
                }
                if (*(long *)(puVar13 + 0x100) != 0) {
                  *(long *)(puVar13 + 0x108) = *(long *)(puVar13 + 0x100);
                  __ZdlPv();
                }
                if (*(long *)(puVar13 + 0xe8) != 0) {
                  *(long *)(puVar13 + 0xf0) = *(long *)(puVar13 + 0xe8);
                  __ZdlPv();
                }
                if (*(long *)(puVar13 + 0xd0) != 0) {
                  *(long *)(puVar13 + 0xd8) = *(long *)(puVar13 + 0xd0);
                  __ZdlPv();
                }
                if (*(long *)(puVar13 + 0xb8) != 0) {
                  *(long *)(puVar13 + 0xc0) = *(long *)(puVar13 + 0xb8);
                  __ZdlPv();
                }
                if (*(long *)(puVar13 + 0x88) != 0) {
                  *(long *)(puVar13 + 0x90) = *(long *)(puVar13 + 0x88);
                  __ZdlPv();
                }
                if (*(long *)(puVar13 + 0x68) != 0) {
                  *(long *)(puVar13 + 0x70) = *(long *)(puVar13 + 0x68);
                  __ZdlPv();
                }
                if (*(long *)(puVar13 + 0x48) != 0) {
                  *(long *)(puVar13 + 0x50) = *(long *)(puVar13 + 0x48);
                  __ZdlPv();
                }
                if (*(long *)(puVar13 + 0x28) != 0) {
                  *(long *)(puVar13 + 0x30) = *(long *)(puVar13 + 0x28);
                  __ZdlPv();
                }
                if (*(long *)(puVar13 + 8) != 0) {
                  *(long *)(puVar13 + 0x10) = *(long *)(puVar13 + 8);
                  __ZdlPv();
                }
                return puVar13;
              }
              return puVar13;
            }
          }
          apfStack_e0[0] = pfVar16;
          apfStack_e0[1] = (float *)(lStack_200 - lStack_208);
          apfStack_e0[2] = pfVar21;
          lStack_c8 = lStack_1c0 - lStack_1c8;
          lStack_c0 = (long)pfStack_1a0 - (long)pfStack_1a8;
          lVar18 = 8;
          ppfVar24 = apfStack_e0;
          do {
            pfVar21 = *(float **)((long)apfStack_e0 + lVar18);
            ppfVar4 = (float **)((long)apfStack_e0 + lVar18);
            if (pfVar16 <= pfVar21) {
              ppfVar4 = ppfVar24;
              pfVar21 = pfVar16;
            }
            pfVar16 = pfVar21;
            lVar18 = lVar18 + 8;
            ppfVar24 = ppfVar4;
          } while (lVar18 != 0x28);
          uStack_240 = (ulong)*ppfVar4 >> 2;
          pfStack_260 = (float *)CONCAT44(pfStack_260._4_4_,uStack_328._4_4_);
          uStack_250 = CONCAT44(uStack_250._4_4_,uStack_328._4_4_);
          func_0x0001099a6214(&uStack_278,&UNK_10f679c44,0x5b,0x422,&pfStack_260);
          FUN_10a0029c0(&uStack_278);
          goto LAB_10a7ddf3c;
        }
      }
      FUN_10a00946c(&UNK_10f6799bc);
    }
  }
LAB_10a7ddf3c:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a7ddf40);
  (*pcVar9)();
}



/* Entry: 10a7de000; end: 10a7de0cf;  */

long FUN_10a7de000(long param_1)

{
  if (*(long *)(param_1 + 0x130) != 0) {
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x130);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x118) != 0) {
    *(long *)(param_1 + 0x120) = *(long *)(param_1 + 0x118);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x100) != 0) {
    *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x100);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xe8);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xb8);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x88);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x68);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x48);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a7de0d0; end: 10a7deba7;  */

undefined1  [16]
FUN_10a7de0d0(char *param_1,ulong param_2,float *param_3,float param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  float *pfVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  code *pcVar12;
  float fVar13;
  float *pfVar14;
  undefined8 *puVar15;
  float *pfVar16;
  undefined4 *puVar17;
  byte *pbVar18;
  long lVar19;
  char *pcVar20;
  undefined8 *puVar21;
  uint uVar22;
  float *pfVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  undefined8 *puVar27;
  long lVar28;
  char *pcVar29;
  long lVar30;
  undefined8 *puVar31;
  float *pfVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  undefined1 uVar41;
  byte bVar42;
  undefined1 uVar43;
  byte bVar44;
  undefined1 uVar45;
  byte bVar46;
  undefined1 uVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auVar56 [16];
  float afStack_178 [6];
  float fStack_160;
  undefined4 uStack_15c;
  long lStack_158;
  char cStack_149;
  float afStack_140 [4];
  undefined8 uStack_130;
  undefined8 uStack_128;
  char *pcStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((param_2 < 2) || (*param_1 != '\x1f')) || (param_1[1] != -0x75)) {
    FUN_10a00946c(&UNK_10f678870);
LAB_10a7de980:
    FUN_10a00946c(&UNK_10f679ca0);
  }
  else {
    if (param_2 >> 0x20 != 0) goto LAB_10a7de980;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = (char *)0x0;
    uStack_118 = 0;
    pcStack_120 = (char *)0x0;
    puVar27 = &uStack_130;
    _inflateInit2_(puVar27,0x1f,&UNK_10f45dced,0x70);
    if ((int)puVar27 == 0) {
      uStack_128 = CONCAT44(uStack_128._4_4_,(int)param_2);
      uStack_130 = param_1;
      FUN_10a0dc020(&fStack_160,0x100000);
      lVar26 = 0;
      lVar25 = 0;
      pfVar14 = (float *)0x0;
      do {
        uStack_118 = CONCAT44(uStack_15c,fStack_160);
        uStack_110 = CONCAT44(uStack_110._4_4_,(int)lStack_158 - (int)fStack_160);
        puVar27 = &uStack_130;
        _inflate(puVar27,0);
        fVar13 = SUB84(puVar27,0);
        if (1 < (uint)fVar13) {
          afStack_140[0] = fVar13;
          func_0x0001099a6214(afStack_178,&UNK_10f679cda,0x1d,1,afStack_140);
          FUN_10a0029c0(afStack_178);
          goto LAB_10a7deb64;
        }
        lVar19 = CONCAT44(uStack_15c,fStack_160);
        lVar28 = lStack_158 - (lVar19 + (uStack_110 & 0xffffffff));
        pfVar32 = pfVar14;
        if (0 < lVar28) {
          if (lVar25 - lVar26 < lVar28) {
            lVar30 = lVar26 - (long)pfVar14;
            pfVar32 = (float *)(lVar28 + lVar30);
            if ((long)pfVar32 < 0) {
              FUN_109ffdf98();
              goto LAB_10a7deb64;
            }
            pfVar23 = (float *)((lVar25 - (long)pfVar14) * 2);
            if (pfVar23 < pfVar32 || (long)pfVar23 - (long)pfVar32 == 0) {
              pfVar23 = pfVar32;
            }
            if (0x3ffffffffffffffe < (ulong)(lVar25 - (long)pfVar14)) {
              pfVar23 = (float *)0x7fffffffffffffff;
            }
            if (pfVar23 == (float *)0x0) {
              pfVar32 = (float *)0x0;
            }
            else {
              pfVar32 = pfVar23;
              __Znwm();
            }
            lVar25 = (long)pfVar32 + (long)pfVar23;
            _memcpy((long)pfVar32 + lVar30,lVar19,lVar28);
            lVar26 = (long)pfVar32 + lVar30 + lVar28;
            _memcpy(pfVar32,pfVar14,lVar30);
            if (pfVar14 != (float *)0x0) {
              __ZdlPv(pfVar14);
            }
          }
          else {
            _memmove(lVar26,lVar19,lVar28);
            lVar26 = lVar26 + lVar28;
          }
        }
        pcVar29 = (char *)(lVar26 - (long)pfVar32);
        if ((char *)0x80000000 < pcVar29) {
          FUN_10a00946c(&UNK_10f679cf8);
          goto LAB_10a7deb64;
        }
        pfVar14 = pfVar32;
      } while (fVar13 != 1.4013e-45);
      _inflateEnd(&uStack_130);
      if (CONCAT44(uStack_15c,fStack_160) != 0) {
        __ZdlPv();
      }
      if (pcVar29 < (char *)0x10) {
        FUN_10a00946c(&UNK_10f678894);
      }
      else if (*pfVar32 == 1.4178662e+10) {
        fVar13 = pfVar32[1];
        if ((int)fVar13 - 4U < 0xfffffffd) {
          fStack_160 = fVar13;
          func_0x0001099a6214(&uStack_130,&UNK_10f6788d2,0x1c,2,&fStack_160);
          FUN_10a0029c0(&uStack_130);
        }
        else {
          fVar39 = pfVar32[2];
          puVar27 = (undefined8 *)(ulong)(uint)fVar39;
          if (fVar39 == 0.0) {
            FUN_10a00946c(&UNK_10f6788ef);
          }
          else if ((uint)param_4 < (uint)fVar39) {
            uStack_130 = (char *)CONCAT44(uStack_130._4_4_,fVar39);
            pcStack_120 = (char *)CONCAT44(pcStack_120._4_4_,param_4);
            func_0x0001099a6214(&fStack_160,&UNK_10f678901,0x23,0x22,&uStack_130);
            FUN_10a0029c0(&fStack_160);
          }
          else {
            bVar2 = *(byte *)((long)pfVar32 + 0xd);
            if (bVar2 < 0x20) {
              bVar3 = *(byte *)(pfVar32 + 3);
              lVar26 = 2;
              if (fVar13 != 1.4013e-45) {
                lVar26 = 3;
              }
              lVar25 = 3;
              if (2 < (uint)fVar13) {
                lVar25 = 4;
              }
              if (bVar3 < 4) {
                lVar19 = *(long *)(&UNK_10e4dcfb0 + (ulong)bVar3 * 8);
              }
              else {
                lVar19 = 0x48;
              }
              lVar26 = (long)puVar27 * 3 * lVar26;
              pcVar20 = (char *)((long)puVar27 +
                                (lVar25 + lVar19 + 6) * (long)puVar27 + lVar26 + 0x10);
              if (pcVar20 <= pcVar29) {
                *param_3 = fVar39;
                func_0x0001096b5198(param_3 + 2,puVar27);
                func_0x0001096b5198(param_3 + 8,puVar27);
                func_0x00010983d018(param_3 + 0xe,puVar27);
                puVar15 = puVar27;
                func_0x00010983d048(param_3 + 0x14,puVar27);
                puVar31 = (undefined8 *)0x0;
                pfVar14 = pfVar32 + 4;
                pfVar23 = (float *)((long)pfVar14 + lVar26);
                lVar26 = (long)pfVar23 + (long)puVar27;
                pcVar29 = (char *)((long)pfVar32 + 0x12);
                do {
                  fStack_160 = 0.0;
                  afStack_178[0] = 0.0;
                  afStack_140[0] = 0.0;
                  if (fVar13 == 1.4013e-45) {
                    lVar19 = 0;
                    do {
                      uVar4 = *(ushort *)((long)pfVar14 + lVar19 * 2);
                      uVar5 = (uint)(uVar4 >> 0xf);
                      uVar24 = uVar4 >> 10 & 0x1f;
                      uVar22 = uVar4 & 0x3ff;
                      if (uVar24 == 0x1f) {
                        uVar22 = uVar5 << 0x1f | (uint)uVar4 << 0xd;
                        if ((uVar4 & 0x3ff) == 0) {
                          uVar22 = uVar5 << 0x1f;
                        }
                        fVar39 = (float)(uVar22 | 0x7f800000);
                      }
                      else {
                        if ((uVar4 >> 10 & 0x1f) == 0) {
                          if ((uVar4 & 0x3ff) == 0) {
                            fVar39 = (float)(uVar5 << 0x1f);
                            goto LAB_10a7de4c0;
                          }
                          uVar24 = 0x16 - (uint)LZCOUNT(uVar22);
                          uVar22 = uVar22 << (ulong)(10 - ((uint)LZCOUNT(uVar22) ^ 0x1f) & 0x1f) &
                                   0x1fffbfe;
                        }
                        fVar39 = (float)(uVar24 * 0x800000 + 0x38000000 | uVar5 << 0x1f |
                                        uVar22 << 0xd);
                      }
LAB_10a7de4c0:
                      pfVar16 = &fStack_160;
                      if ((int)lVar19 == 1) {
                        pfVar16 = afStack_178;
                      }
                      pfVar1 = afStack_140;
                      if ((int)lVar19 != 2) {
                        pfVar1 = pfVar16;
                      }
                      *pfVar1 = fVar39;
                      lVar19 = lVar19 + 1;
                    } while (lVar19 != 3);
                  }
                  else {
                    lVar19 = 0;
                    pcVar20 = pcVar29;
                    do {
                      uVar24 = (uint)CONCAT12(*pcVar20,*(undefined2 *)(pcVar20 + -2));
                      uVar22 = uVar24 | 0xff000000;
                      if (-1 < *pcVar20) {
                        uVar22 = uVar24;
                      }
                      pfVar16 = &fStack_160;
                      if ((int)lVar19 == 1) {
                        pfVar16 = afStack_178;
                      }
                      pfVar1 = afStack_140;
                      if ((int)lVar19 != 2) {
                        pfVar1 = pfVar16;
                      }
                      *pfVar1 = (float)((uint)bVar2 * -0x800000 + 0x3f800000) * (float)(int)uVar22;
                      lVar19 = lVar19 + 1;
                      pcVar20 = pcVar20 + 3;
                    } while (lVar19 != 3);
                  }
                  puVar21 = (undefined8 *)
                            ((*(long *)(param_3 + 4) - *(long *)(param_3 + 2) >> 2) *
                            -0x5555555555555555);
                  if (puVar21 < puVar31 || (long)puVar21 - (long)puVar31 == 0) goto LAB_10a7deb64;
                  pfVar16 = (float *)(*(long *)(param_3 + 2) + (long)puVar31 * 0xc);
                  *pfVar16 = fStack_160;
                  pfVar16[1] = afStack_178[0];
                  pfVar16[2] = afStack_140[0];
                  lVar19 = *(long *)(param_3 + 8);
                  puVar21 = (undefined8 *)
                            ((*(long *)(param_3 + 10) - lVar19 >> 2) * -0x5555555555555555);
                  if (puVar21 < puVar31 || (long)puVar21 - (long)puVar31 == 0) goto LAB_10a7deb64;
                  uVar33 = _expf();
                  uVar34 = _expf();
                  uVar35 = _expf();
                  puVar17 = (undefined4 *)(lVar19 + (long)puVar31 * 0xc);
                  *puVar17 = uVar34;
                  puVar17[1] = uVar35;
                  puVar17[2] = uVar33;
                  pbVar18 = (byte *)(lVar26 + (long)puVar27 * 6 + lVar25 * (long)puVar31);
                  if ((uint)fVar13 < 3) {
                    fVar39 = (float)*pbVar18 / 127.5 + -1.0;
                    fVar37 = (float)NEON_ucvtf((uint)pbVar18[1]);
                    fVar37 = fVar37 / 127.5 + -1.0;
                    fVar36 = (float)NEON_ucvtf((uint)pbVar18[2]);
                    fVar54 = fVar36 / 127.5 + -1.0;
                    fVar36 = 1.0;
                    fVar53 = 1.0 - (fVar37 * fVar37 + fVar39 * fVar39 + fVar54 * fVar54);
                    fVar40 = 0.0;
                    if (fVar53 <= 0.0) {
                      fVar53 = 0.0;
                    }
                    fVar53 = SQRT(fVar53);
                    fVar55 = fVar37 * fVar37 + fVar54 * fVar54 + fVar39 * fVar39 + fVar53 * fVar53;
                    if (fVar55 == 0.0) {
                      uVar41 = 0;
                      uVar43 = 0;
                      uVar45 = 0;
                      uVar47 = 0;
                      fVar54 = 0.0;
                    }
                    else {
                      fVar55 = 1.0 / SQRT(fVar55);
                      fVar36 = fVar53 * fVar55;
                      fVar40 = fVar39 * fVar55;
                      fVar37 = fVar37 * fVar55;
                      uVar41 = SUB41(fVar37,0);
                      uVar43 = (undefined1)((uint)fVar37 >> 8);
                      uVar45 = (undefined1)((uint)fVar37 >> 0x10);
                      uVar47 = (undefined1)((uint)fVar37 >> 0x18);
                      fVar54 = fVar54 * fVar55;
                    }
                  }
                  else {
                    uVar22 = CONCAT13(pbVar18[3],CONCAT12(pbVar18[2],CONCAT11(pbVar18[1],*pbVar18)))
                    ;
                    uVar6 = (ulong)(pbVar18[3] >> 6);
                    uStack_130 = (char *)0x0;
                    uStack_128 = 0;
                    fVar39 = 0.0;
                    lVar19 = 0xc;
                    puVar15 = &uStack_130;
                    do {
                      if (uVar6 * 4 - lVar19 != 0) {
                        uVar24 = uVar22 & 0x1ff;
                        uVar5 = uVar22 & 0x200;
                        uVar22 = uVar22 >> 10;
                        fVar36 = (float)uVar24 / 511.0;
                        fVar37 = fVar36 * 0.70710677;
                        if (uVar5 != 0) {
                          fVar37 = -(fVar36 * 0.70710677);
                        }
                        *(float *)((long)puVar15 + lVar19) = fVar37;
                        fVar39 = fVar39 + fVar37 * fVar37;
                      }
                      lVar19 = lVar19 + -4;
                    } while (lVar19 != -4);
                    fVar36 = 1.0;
                    fVar39 = 1.0 - fVar39;
                    fVar40 = 0.0;
                    uVar41 = SUB41(fVar39,0);
                    uVar43 = (undefined1)((uint)fVar39 >> 8);
                    uVar45 = (undefined1)((uint)fVar39 >> 0x10);
                    uVar47 = (undefined1)((uint)fVar39 >> 0x18);
                    if (fVar39 <= 0.0) {
                      uVar41 = 0;
                      uVar43 = 0;
                      uVar45 = 0;
                      uVar47 = 0;
                    }
                    *(float *)((long)puVar15 + uVar6 * 4) =
                         SQRT((float)CONCAT13(uVar47,CONCAT12(uVar45,CONCAT11(uVar43,uVar41))));
                    fVar39 = uStack_128._4_4_ * uStack_128._4_4_ +
                             (float)uStack_130 * (float)uStack_130 +
                             uStack_130._4_4_ * uStack_130._4_4_ +
                             (float)uStack_128 * (float)uStack_128;
                    if (fVar39 == 0.0) {
                      uVar41 = 0;
                      uVar43 = 0;
                      uVar45 = 0;
                      uVar47 = 0;
                      fVar54 = 0.0;
                    }
                    else {
                      fVar54 = 1.0 / SQRT(fVar39);
                      fVar36 = uStack_128._4_4_ * fVar54;
                      fVar40 = (float)uStack_130 * fVar54;
                      fVar39 = uStack_130._4_4_ * fVar54;
                      uVar41 = SUB41(fVar39,0);
                      uVar43 = (undefined1)((uint)fVar39 >> 8);
                      uVar45 = (undefined1)((uint)fVar39 >> 0x10);
                      uVar47 = (undefined1)((uint)fVar39 >> 0x18);
                      fVar54 = (float)uStack_128 * fVar54;
                    }
                  }
                  if ((undefined8 *)(*(long *)(param_3 + 0x10) - *(long *)(param_3 + 0xe) >> 4) <=
                      puVar31) goto LAB_10a7deb64;
                  pfVar16 = (float *)(*(long *)(param_3 + 0xe) + (long)puVar31 * 0x10);
                  *pfVar16 = fVar40;
                  pfVar16[1] = (float)CONCAT13(uVar47,CONCAT12(uVar45,CONCAT11(uVar43,uVar41)));
                  pfVar16[2] = fVar54;
                  pfVar16[3] = fVar36;
                  if ((undefined8 *)(*(long *)(param_3 + 0x16) - *(long *)(param_3 + 0x14) >> 4) <=
                      puVar31) goto LAB_10a7deb64;
                  fVar37 = (float)NEON_ucvtf((uint)*(byte *)((long)pfVar23 + (long)puVar31));
                  pbVar18 = (byte *)(lVar26 + (long)puVar31 * 3);
                  uVar10 = NEON_ucvtf((ulong)CONCAT14(pbVar18[1],(uint)*pbVar18),4);
                  fVar39 = (((float)uVar10 / 255.0 + -0.5) / 0.15) * 0.2820948 + 0.5;
                  fVar36 = (((float)((ulong)uVar10 >> 0x20) / 255.0 + -0.5) / 0.15) * 0.2820948 +
                           0.5;
                  iVar9 = -(uint)(fVar39 < 0.0);
                  iVar11 = -(uint)(fVar36 < 0.0);
                  bVar42 = SUB41(fVar39,0) & ~(byte)iVar9;
                  bVar44 = (byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar9 >> 8);
                  bVar46 = (byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10);
                  bVar48 = (byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18);
                  bVar49 = SUB41(fVar36,0) & ~(byte)iVar11;
                  bVar50 = (byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar11 >> 8);
                  bVar51 = (byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10);
                  bVar52 = (byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18);
                  fVar39 = (float)NEON_ucvtf((uint)pbVar18[2]);
                  fVar36 = ((fVar39 / 255.0 + -0.5) / 0.15) * 0.2820948 + 0.5;
                  fVar39 = 0.0;
                  if (0.0 <= fVar36) {
                    fVar39 = fVar36;
                  }
                  auVar38 = NEON_fmov(0x3f800000,4);
                  auVar8[1] = bVar44;
                  auVar8[0] = bVar42;
                  auVar8[2] = bVar46;
                  auVar8[3] = bVar48;
                  auVar8[4] = bVar49;
                  auVar8[5] = bVar50;
                  auVar8[6] = bVar51;
                  auVar8[7] = bVar52;
                  auVar8._8_4_ = fVar39;
                  auVar8._12_4_ = fVar37 / 255.0;
                  auVar7._4_4_ = -(uint)(auVar38._4_4_ <
                                        (float)CONCAT13(bVar52,CONCAT12(bVar51,CONCAT11(bVar50,
                                                  bVar49))));
                  auVar7._0_4_ = -(uint)(auVar38._0_4_ <
                                        (float)CONCAT13(bVar48,CONCAT12(bVar46,CONCAT11(bVar44,
                                                  bVar42))));
                  auVar7._8_4_ = -(uint)(auVar38._8_4_ < fVar39);
                  auVar7._12_4_ = -(uint)(auVar38._12_4_ < fVar37 / 255.0);
                  auVar38 = auVar38 ^ (auVar38 ^ auVar8) & ~auVar7;
                  puVar21 = (undefined8 *)(*(long *)(param_3 + 0x14) + (long)puVar31 * 0x10);
                  puVar21[1] = auVar38._8_8_;
                  *puVar21 = auVar38._0_8_;
                  puVar31 = (undefined8 *)((long)puVar31 + 1);
                  pcVar29 = pcVar29 + 9;
                  pfVar14 = (float *)((long)pfVar14 + 6);
                  if (puVar31 == puVar27) {
                    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
                      puVar15 = (undefined8 *)0x4;
                      func_0x00010ae06f08(1,4,&UNK_10f678974,&UNK_10f6789b5,0xf3,&UNK_10f678a29,
                                          param_7,param_8,puVar27,fVar13,(ulong)bVar3,bVar2);
                    }
                    pfVar14 = pfVar32;
                    __ZdlPv(pfVar32);
                    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
                      auVar56._8_8_ = puVar15;
                      auVar56._0_8_ = pfVar14;
                      return auVar56;
                    }
                    ___stack_chk_fail();
                    if (cStack_149 < '\0') {
                      __ZdlPv(CONCAT44(uStack_15c,fStack_160));
                    }
                    __ZdlPv(pfVar32);
                    __Unwind_Resume(pfVar14);
                    func_0x000104bd46a0(pfVar14);
                    auVar38._8_8_ = 9;
                    auVar38._0_8_ = &UNK_10f654fa0;
                    return auVar38;
                  }
                } while( true );
              }
              uStack_130 = pcVar20;
              pcStack_120 = pcVar29;
              func_0x0001099a6214(&fStack_160,&UNK_10f678945,0x2e,0x44,&uStack_130);
              FUN_10a0029c0(&fStack_160);
            }
            else {
              fStack_160 = (float)(uint)bVar2;
              func_0x0001099a6214(&uStack_130,&UNK_10f678925,0x1f,2,&fStack_160);
              FUN_10a0029c0(&uStack_130);
            }
          }
        }
      }
      else {
        fStack_160 = *pfVar32;
        func_0x0001099a6214(&uStack_130,&UNK_10f6788b9,0x18,2,&fStack_160);
        FUN_10a0029c0(&uStack_130);
      }
      goto LAB_10a7deb64;
    }
  }
  FUN_10a00946c(&UNK_10f679cbb);
LAB_10a7deb64:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x10a7deb68);
  (*pcVar12)();
}



/* Entry: 10a7deba8; end: 10a7dec1f;  */

undefined1  [16] FUN_10a7deba8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 9;
  auVar1._0_8_ = &UNK_10f654fa0;
  return auVar1;
}



/* Entry: 10a7dec20; end: 10a7df1fb;  */

void FUN_10a7dec20(ulong param_1)

{
  long *plVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  long lVar9;
  long *plVar10;
  undefined8 ***pppuVar11;
  bool bVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uStack_120;
  long *plStack_118;
  undefined **ppuStack_110;
  undefined8 **ppuStack_108;
  undefined ***pppuStack_100;
  ulong uStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined **ppuStack_98;
  code *pcStack_90;
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
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar11 = (undefined8 ***)&UNK_10f654fa0;
  func_0x000109887da8(appuStack_c8,&UNK_10f654fa0,9);
  pppuVar2 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar2 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c1da08;
  pppuVar3 = (undefined8 ***)&UNK_10f678718;
  if (pppuVar2 != (undefined8 ***)0x0) {
    pppuVar3 = pppuVar2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar3);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  uStack_d8 = 0xffffffffffffffff;
  uStack_e0 = 0x100000019;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar2;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c1da08;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    ppuStack_98 = (undefined **)0x0;
    pcStack_90 = (code *)CONCAT71(pcStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar2,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a7df1d0;
    FUN_10a054dac(param_1,&UNK_10f674f25,FUN_10a800e14,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a7df1d0;
    FUN_10a054dac(param_1,&UNK_10f674f2e,FUN_10a800f4c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a7df1d0;
    FUN_10a054dac(param_1,&UNK_10f674f37,FUN_10a8027cc,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a7df1d0;
    FUN_10a054dac(param_1,&UNK_10f674f40,FUN_10a80296c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    FUN_10a052828(param_1,"key",FUN_10a802a34,FUN_10a802b14);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f678a6e,FUN_10a802cf4,FUN_10a802db0);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68f20c,FUN_10a802e70,FUN_10a802f28);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66de38,FUN_10a803154,FUN_10a803210);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f678a79,FUN_10a8032f4,FUN_10a8033b0);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    FUN_10a052828(param_1,"metadata",FUN_10a803470,FUN_10a803550);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    FUN_10a052828(param_1,"displayName",FUN_10a803608,FUN_10a8036e8);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    FUN_10a0605c4(param_1,"createdAt",FUN_10a8037a0,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar9 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) == lVar9) {
LAB_10a7df1d0:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10a7df1d4);
    (*pcVar7)();
  }
  ppuStack_98 = *(undefined ***)(lVar9 + -0x60);
  ppuStack_a0 = *(undefined8 ***)(lVar9 + -0x68);
  uStack_78 = *(undefined8 *)(lVar9 + -0x40);
  uVar13 = *(ulong *)(lVar9 + -0x48);
  uVar14 = *(ulong *)(lVar9 + -0x50);
  pcStack_90 = *(code **)(lVar9 + -0x58);
  uStack_68 = *(undefined8 *)(lVar9 + -0x30);
  uStack_70 = *(undefined8 *)(lVar9 + -0x38);
  uStack_58 = *(undefined8 *)(lVar9 + -0x20);
  uStack_60 = *(undefined8 *)(lVar9 + -0x28);
  uStack_40 = *(undefined8 *)(lVar9 + -8);
  uStack_48 = *(undefined8 *)(lVar9 + -0x10);
  uStack_50 = *(ulong *)(lVar9 + -0x18);
  *(long *)(param_1 + 0x170) = lVar9 + -0x68;
  uStack_88._4_4_ = (undefined4)(uVar14 >> 0x20);
  uVar5 = uStack_88._4_4_;
  uStack_80._4_4_ = (undefined4)(uVar13 >> 0x20);
  uVar6 = uStack_80._4_4_;
  uVar8 = param_1;
  uStack_88 = uVar14;
  uStack_80 = uVar13;
  FUN_10a0051e8(param_1,uVar14 & 0xffffffff,uVar5,uStack_50 & 0xffffffff,uVar13 & 0xffffffff,uVar6);
  if ((uVar8 & 1) == 0) {
    func_0x000109894f40(param_1,0);
    FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f654fa0,9);
    FUN_10a05431c(param_1);
  }
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  ppuStack_a0 = (undefined8 **)&UNK_10f654fa0;
  uStack_80 = uStack_d8;
  uStack_88 = uStack_e0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x00010a004eb4(param_1,&ppuStack_a0);
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    ppuStack_a0 = (undefined8 **)FUN_10a8038e4;
    ppuStack_98 = &PTR_FUN_110c1f940;
    pcStack_90 = FUN_10a7df1fc;
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a7df1d0;
    pppuVar11 = &ppuStack_a0;
    FUN_10a0544d8(param_1,&UNK_10f678a89,&ppuStack_a0,0,*(long *)(param_1 + 0x18) + -8);
    (*(code *)*ppuStack_98)(&ppuStack_98);
  }
  func_0x00010a004064();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar8 = param_1;
  __Unwind_Resume();
  ppuStack_110 = &PTR_DAT_110c1da08;
  pcStack_e8 = FUN_10a7df1fc;
  ppuStack_108 = pppuVar2;
  pppuStack_100 = (undefined ***)pppuVar11;
  uStack_f8 = param_1;
  puStack_f0 = &stack0xfffffffffffffff0;
  if (uVar8 == 0) {
    uStack_120 = 0;
  }
  else {
    FUN_10a725afc(&uStack_120,uVar8 + 0x18);
    if (plStack_118 != (long *)0x0) {
      plVar10 = plStack_118 + 2;
      do {
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar12) {
          *plVar10 = *plVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar1 = plStack_118 + 1;
      do {
        lVar9 = *plVar1;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_118 + 0x10))(plStack_118);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_118);
      }
      do {
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar12) {
          *plVar10 = *plVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar12 = false;
      plVar10 = plStack_118;
      goto LAB_10a7df298;
    }
  }
  plVar10 = (long *)0x0;
  bVar12 = true;
LAB_10a7df298:
  FUN_10a7df964(extraout_x8,uStack_120,plVar10);
  if (!bVar12) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
  }
  return;
}



/* Entry: 10a7df1fc; end: 10a7df2ef;  */

void FUN_10a7df1fc(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  undefined8 uStack_40;
  long *plStack_38;
  
  if (param_2 == 0) {
    uStack_40 = 0;
  }
  else {
    FUN_10a725afc(&uStack_40,param_2 + 0x18);
    if (plStack_38 != (long *)0x0) {
      plVar4 = plStack_38 + 2;
      do {
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar5) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plStack_38 + 1;
      do {
        lVar3 = *plVar1;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar3 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar3 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
      do {
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar5) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      bVar5 = false;
      plVar4 = plStack_38;
      goto LAB_10a7df298;
    }
  }
  plVar4 = (long *)0x0;
  bVar5 = true;
LAB_10a7df298:
  FUN_10a7df964(param_1,uStack_40,plVar4);
  if (!bVar5) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  return;
}



/* Entry: 10a7df2f0; end: 10a7df477;  */

void FUN_10a7df2f0(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f678a90;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_4c._4_4_,
                uStack_78 & 0xffffffff,uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f61d667;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a7df478(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f2ea6ee;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a7df478();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f302afc;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a7df478();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f674bb1;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a7df478();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a7df478; end: 10a7df51b;  */

undefined8 * FUN_10a7df478(undefined8 *param_1,undefined8 *param_2,int param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a7df51c);
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



/* Entry: 10a7df51c; end: 10a7df5eb;  */

undefined8 * FUN_10a7df51c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c1b5a8;
  if (*(char *)((long)param_1 + 0x187) < '\0') {
    __ZdlPv(param_1[0x2e]);
  }
  if (*(char *)((long)param_1 + 0x16f) < '\0') {
    __ZdlPv(param_1[0x2b]);
  }
  func_0x0001093c8ab0(param_1 + 0x26);
  func_0x00010a71259c(param_1 + 0x21);
  func_0x0001094b03dc(param_1 + 0x1c);
  if (*(char *)((long)param_1 + 0xdf) < '\0') {
    __ZdlPv(param_1[0x19]);
  }
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 0x11);
  if (*(char *)((long)param_1 + 0x87) < '\0') {
    __ZdlPv(param_1[0xe]);
  }
  FUN_10a07a538(param_1 + 0xb);
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a7df5ec; end: 10a7df5ef;  */

undefined8 * FUN_10a7df5ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c1b5a8;
  if (*(char *)((long)param_1 + 0x187) < '\0') {
    __ZdlPv(param_1[0x2e]);
  }
  if (*(char *)((long)param_1 + 0x16f) < '\0') {
    __ZdlPv(param_1[0x2b]);
  }
  func_0x0001093c8ab0(param_1 + 0x26);
  func_0x00010a71259c(param_1 + 0x21);
  func_0x0001094b03dc(param_1 + 0x1c);
  if (*(char *)((long)param_1 + 0xdf) < '\0') {
    __ZdlPv(param_1[0x19]);
  }
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 0x11);
  if (*(char *)((long)param_1 + 0x87) < '\0') {
    __ZdlPv(param_1[0xe]);
  }
  FUN_10a07a538(param_1 + 0xb);
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a7df5f0; end: 10a7df603;  */

void FUN_10a7df5f0(void)

{
  FUN_10a7df51c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7df604; end: 10a7df60b;  */

void FUN_10a7df604(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            (param_1 + 0x38);
  return;
}



/* Entry: 10a7df60c; end: 10a7df67f;  */

undefined8 * FUN_10a7df60c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10a7df680; end: 10a7df68f;  */

void FUN_10a7df680(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            (param_1 + 0x158);
  return;
}



/* Entry: 10a7df690; end: 10a7df963;  */

void FUN_10a7df690(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uStack_70;
  long *plStack_68;
  uint uStack_60;
  undefined1 uStack_49;
  long lStack_48;
  
  if (param_3 != 0) {
    plVar1 = (long *)(param_3 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a7df964(param_1,param_2,param_3);
  if (param_3 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(param_3);
  }
  lVar9 = *param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar9 + 0x38,*(ulong *)(param_4 + 0x78) & 0xfffffffffffffffc);
  *(undefined4 *)(lVar9 + 0x50) = *(undefined4 *)(param_4 + 200);
  FUN_10a038940(&uStack_70,param_4);
  plVar1 = plStack_68;
  uVar5 = uStack_70;
  uStack_70 = 0;
  plStack_68 = (long *)0x0;
  plVar8 = *(long **)(lVar9 + 0x60);
  *(long **)(lVar9 + 0x60) = plVar1;
  *(ulong *)(lVar9 + 0x58) = uVar5;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar1 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar8 = plStack_68 + 1;
    do {
      lVar7 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  *(undefined4 *)(lVar9 + 0x68) = *(undefined4 *)(param_4 + 0xd8);
  *(undefined4 *)(lVar9 + 0x6c) = *(undefined4 *)(param_4 + 0xdc);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar9 + 0x70,*(ulong *)(param_4 + 0x90) & 0xfffffffffffffffc);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar9 + 200,*(ulong *)(param_4 + 0x88) & 0xfffffffffffffffc);
  plStack_68 = (long *)(param_4 + 0x18);
  uStack_60 = *(uint *)(param_4 + 0x24);
  if (uStack_60 == *(uint *)(param_4 + 0x1c)) {
    uStack_60 = 0;
    uStack_70 = 0;
  }
  else {
    uStack_70 = *(ulong *)(*(long *)(param_4 + 0x28) + (ulong)uStack_60 * 8);
    if ((uStack_70 & 1) != 0) {
      uStack_70 = *(ulong *)(**(long **)(uStack_70 - 1) + 0x20);
    }
  }
  while (uVar5 = uStack_70, uStack_70 != 0) {
    lStack_48 = uStack_70 + 8;
    lVar7 = lVar9 + 0xe0;
    func_0x0001094ae8e8(lVar7,lStack_48,&UNK_10dd5b8f9,&lStack_48,&uStack_49);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (lVar7 + 0x18,uVar5 + 0x10);
    func_0x000107c27d54(&uStack_70);
  }
  plStack_68 = (long *)(param_4 + 0x38);
  uStack_60 = *(uint *)(param_4 + 0x44);
  if (uStack_60 == *(uint *)(param_4 + 0x3c)) {
    uStack_60 = 0;
    uStack_70 = 0;
  }
  else {
    uStack_70 = *(ulong *)(*(long *)(param_4 + 0x48) + (ulong)uStack_60 * 8);
    if ((uStack_70 & 1) != 0) {
      uStack_70 = *(ulong *)(**(long **)(uStack_70 - 1) + 0x20);
    }
  }
  while (uStack_70 != 0) {
    lStack_48 = uStack_70 + 8;
    uVar2 = *(undefined4 *)(uStack_70 + 0xc);
    lVar7 = lVar9 + 0x130;
    func_0x0001093c8fa4(lVar7,lStack_48,&UNK_10dd5b8f9,&lStack_48,&uStack_49);
    *(undefined4 *)(lVar7 + 0x14) = uVar2;
    func_0x000107c27d54(&uStack_70);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar9 + 0x158,*(ulong *)(param_4 + 0x98) & 0xfffffffffffffffc);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar9 + 0x170,*(ulong *)(param_4 + 0xa0) & 0xfffffffffffffffc);
  if ((*(byte *)(param_4 + 0x10) >> 1 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(param_4 + 0xb8) + 0x10);
    if ((*(byte *)(lVar9 + 400) & 1) == 0) {
      *(undefined1 *)(lVar9 + 400) = 1;
    }
    *(undefined8 *)(lVar9 + 0x188) = uVar6;
  }
  return;
}



/* Entry: 10a7df964; end: 10a7dfc0b;  */

void FUN_10a7df964(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  puVar4 = (undefined8 *)0x198;
  __Znwm();
  if (param_3 == 0) {
    puVar4[2] = 0;
    puVar4[1] = 0;
    puVar4[4] = 0;
    puVar4[3] = 0;
    *puVar4 = &PTR_FUN_110c1b5a8;
    puVar4[5] = param_2;
    puVar4[6] = 0;
  }
  else {
    plVar5 = (long *)(param_3 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar4[2] = 0;
    puVar4[1] = 0;
    puVar4[4] = 0;
    puVar4[3] = 0;
    *puVar4 = &PTR_FUN_110c1b5a8;
    puVar4[5] = param_2;
    puVar4[6] = param_3;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4[7] = 0;
  puVar4[0xc] = 0;
  puVar4[0xb] = 0;
  *(undefined4 *)(puVar4 + 10) = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[0xe] = 0;
  puVar4[0xd] = 0;
  puVar4[0x10] = 0;
  puVar4[0xf] = 0;
  __ZNSt3__115recursive_mutexC1Ev(puVar4 + 0x11);
  puVar4[0x1f] = 0;
  puVar4[0x1e] = 0;
  puVar4[0x1d] = 0;
  puVar4[0x1c] = 0;
  puVar4[0x1b] = 0;
  puVar4[0x1a] = 0;
  puVar4[0x19] = 0;
  *(undefined4 *)(puVar4 + 0x20) = 0x3f800000;
  puVar4[0x22] = 0;
  puVar4[0x21] = 0;
  puVar4[0x24] = 0;
  puVar4[0x23] = 0;
  *(undefined4 *)(puVar4 + 0x25) = 0x3f800000;
  puVar4[0x27] = 0;
  puVar4[0x26] = 0;
  puVar4[0x29] = 0;
  puVar4[0x28] = 0;
  *(undefined4 *)(puVar4 + 0x2a) = 0x3f800000;
  *(undefined1 *)(puVar4 + 0x32) = 0;
  *(undefined1 *)(puVar4 + 0x31) = 0;
  puVar4[0x2c] = 0;
  puVar4[0x2b] = 0;
  puVar4[0x2e] = 0;
  puVar4[0x2d] = 0;
  puVar4[0x30] = 0;
  puVar4[0x2f] = 0;
  *param_1 = puVar4;
  plVar5 = (long *)0x20;
  __Znwm();
  plVar7 = plVar5 + 1;
  *plVar7 = 0;
  *plVar5 = (long)&PTR_DAT_110c1f968;
  plVar5[2] = 0;
  plVar5[3] = (long)puVar4;
  param_1[1] = plVar5;
  if (puVar4[4] == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
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
    puVar4[3] = puVar4;
    puVar4[4] = plVar5;
  }
  else {
    if (*(long *)(puVar4[4] + 8) != -1) goto joined_r0x00010a7dfb58;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
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
    puVar4[3] = puVar4;
    puVar4[4] = plVar5;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
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
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
joined_r0x00010a7dfb58:
  if (param_3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(param_3);
  return;
}



/* Entry: 10a7dfc0c; end: 10a7dfc8b;  */

bool FUN_10a7dfc0c(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined4 uStack_24;
  
  uStack_24 = (undefined4)param_2;
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 0x88);
  lVar2 = param_1 + 0x108;
  FUN_10a803acc(lVar2,param_2);
  if (lVar2 == 0) {
    lVar2 = param_1 + 0xe0;
    func_0x0001094b22d8(lVar2,&uStack_24);
    bVar1 = lVar2 != 0;
  }
  else {
    bVar1 = true;
  }
  __ZNSt3__115recursive_mutex6unlockEv(param_1 + 0x88);
  return bVar1;
}



/* Entry: 10a7dfc8c; end: 10a7e0447;  */

void FUN_10a7dfc8c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 auStack_380 [2];
  char cStack_369;
  undefined8 auStack_368 [2];
  char cStack_351;
  long lStack_350;
  long *plStack_348;
  long *plStack_340;
  long *plStack_338;
  undefined8 uStack_330;
  long *plStack_328;
  long *plStack_320;
  long *plStack_318;
  undefined4 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  long *plStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  long *plStack_2c8;
  long lStack_2c0;
  undefined4 uStack_2b4;
  code *pcStack_2b0;
  undefined **ppuStack_2a8;
  long *plStack_2a0;
  long *plStack_298;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined8 *apuStack_180 [34];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_2b4 = (undefined4)param_3;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 0x88);
  FUN_10a79dddc(&plStack_2c8);
  lVar11 = param_2 + 0x108;
  FUN_10a803acc(lVar11,param_3);
  if (lVar11 == 0) {
    lVar11 = param_2 + 0xe0;
    func_0x0001094b22d8(lVar11,&uStack_2b4);
    if (lVar11 == 0) {
      FUN_10a009538(&pcStack_2b0,&UNK_10f678a9c);
      __ZNSt13runtime_errorC2ERKS_(&ppuStack_190,&pcStack_2b0);
      _memcpy(apuStack_180,&plStack_2a0,0x110);
      ppuStack_190 = &PTR_FUN_110b99e70;
      FUN_10a05bde0(&uStack_330,&ppuStack_190);
      __ZNSt13runtime_errorD2Ev(&ppuStack_190);
      func_0x000109d1b350(lStack_2c0,&uStack_330);
      __ZNSt13exception_ptrD1Ev(&uStack_330);
      __ZNSt13runtime_errorD2Ev(&pcStack_2b0);
      *param_1 = plStack_2c8;
      if (plStack_2c8 != (long *)0x0) {
        plVar6 = plStack_2c8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = *plVar6 + 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    else {
      plVar6 = *(long **)(param_2 + 0x20);
      if (plVar6 == (long *)0x0) goto LAB_10a7e0320;
      uVar14 = *(undefined8 *)(param_2 + 0x18);
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar6 == (long *)0x0) goto LAB_10a7e0320;
      plVar8 = plVar6 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = *plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar7 = plVar6 + 1;
      do {
        lVar10 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
      if (*(char *)(lVar11 + 0x2f) < '\0') {
        func_0x000107c3192c(&uStack_2e0,*(undefined8 *)(lVar11 + 0x18),
                            *(undefined8 *)(lVar11 + 0x20));
      }
      else {
        uStack_2d8 = *(undefined8 *)(lVar11 + 0x20);
        uStack_2e0 = *(undefined8 *)(lVar11 + 0x18);
        lStack_2d0 = *(long *)(lVar11 + 0x28);
      }
      plVar7 = (long *)0x20;
      __Znwm();
      plVar15 = plVar7 + 1;
      *plVar15 = 0;
      plVar7[2] = 0;
      plVar13 = plVar7 + 3;
      *plVar13 = lStack_2c0;
      *plVar7 = (long)&PTR_DAT_110c1f9e0;
      lStack_2c0 = 0;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = *plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *plVar15 = *plVar15 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uStack_310 = uStack_2b4;
      uStack_330 = uVar14;
      plStack_328 = plVar6;
      plStack_320 = plVar13;
      plStack_318 = plVar7;
      plStack_2f0 = plVar13;
      plStack_2e8 = plVar7;
      if (lStack_2d0 < 0) {
        func_0x000107c3192c(&uStack_308,uStack_2e0,uStack_2d8);
      }
      else {
        uStack_300 = uStack_2d8;
        uStack_308 = uStack_2e0;
        lStack_2f8 = lStack_2d0;
      }
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *plVar15 = *plVar15 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lStack_350 = 0;
      plStack_348 = (long *)0x0;
      plVar8 = *(long **)(param_2 + 0x30);
      plStack_340 = plVar13;
      plStack_338 = plVar7;
      if (((plVar8 == (long *)0x0) ||
          (__ZNSt3__119__shared_weak_count4lockEv(), plStack_348 = plVar8, plVar8 == (long *)0x0))
         || (lStack_350 = *(long *)(param_2 + 0x28), lStack_350 == 0)) {
        plVar8 = plStack_348;
        if ((bRam000000011330a9e8 & 1) != 0) {
          func_0x00010ae06f08(0,1,&UNK_10f678ac1,&UNK_10f678aff,0xb9,&UNK_10f678b31);
        }
        FUN_10a009538(&pcStack_2b0,&UNK_10f66e9e9);
        __ZNSt13runtime_errorC2ERKS_(&ppuStack_190,&pcStack_2b0);
        _memcpy(apuStack_180,&plStack_2a0,0x110);
        ppuStack_190 = &PTR_FUN_110b99e70;
        FUN_10a05bde0(auStack_368,&ppuStack_190);
        __ZNSt13runtime_errorD2Ev(&ppuStack_190);
        func_0x000109d1b350(lStack_2c0,auStack_368);
        __ZNSt13exception_ptrD1Ev(auStack_368);
        __ZNSt13runtime_errorD2Ev(&pcStack_2b0);
        *param_1 = plStack_2c8;
        if (plStack_2c8 != (long *)0x0) goto LAB_10a7e015c;
        if (plVar8 != (long *)0x0) goto LAB_10a7e0178;
      }
      else {
        uVar14 = *(undefined8 *)(lStack_350 + 0x888);
        func_0x000107c2b054(auStack_368,&UNK_10f678718);
        ppuStack_190 = (undefined **)FUN_10a803e20;
        ppuStack_188 = &PTR_FUN_110c1fa20;
        puVar9 = (undefined8 *)0x40;
        __Znwm();
        puVar9[1] = plStack_328;
        *puVar9 = uStack_330;
        if (plStack_328 != (long *)0x0) {
          plVar1 = plStack_328 + 2;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puVar9[3] = plStack_318;
        puVar9[2] = plStack_320;
        if (plStack_318 != (long *)0x0) {
          plVar1 = plStack_318 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        *(undefined4 *)(puVar9 + 4) = uStack_310;
        if (lStack_2f8 < 0) {
          func_0x000107c3192c(puVar9 + 5,uStack_308,uStack_300);
        }
        else {
          puVar9[6] = uStack_300;
          puVar9[5] = uStack_308;
          puVar9[7] = lStack_2f8;
        }
        pcStack_2b0 = FUN_10a804088;
        ppuStack_2a8 = &PTR_FUN_110c1fa38;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *plVar15 = *plVar15 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        plStack_2a0 = plVar13;
        plStack_298 = plVar7;
        apuStack_180[0] = puVar9;
        func_0x000107c2b054(auStack_380,&UNK_10f678718);
        FUN_10a76e644(uVar14,&uStack_2e0,5,param_2 + 200,auStack_368,&ppuStack_190,&pcStack_2b0,
                      auStack_380,&uStack_2e0);
        if (cStack_369 < '\0') {
          __ZdlPv(auStack_380[0]);
        }
        (*(code *)*ppuStack_2a8)(&ppuStack_2a8);
        (*(code *)*ppuStack_188)(&ppuStack_188);
        if (cStack_351 < '\0') {
          __ZdlPv(auStack_368[0]);
        }
        *param_1 = plStack_2c8;
        if (plStack_2c8 != (long *)0x0) {
LAB_10a7e015c:
          plVar8 = plStack_2c8 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *plVar8 = *plVar8 + 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          plVar8 = plStack_348;
          if (plStack_348 == (long *)0x0) goto LAB_10a7e01a8;
        }
LAB_10a7e0178:
        plVar7 = plVar8 + 1;
        do {
          lVar11 = *plVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
LAB_10a7e01a8:
      plVar8 = plStack_338;
      if (plStack_338 != (long *)0x0) {
        plVar7 = plStack_338 + 1;
        do {
          lVar11 = *plVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_338 + 0x10))(plStack_338);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (lStack_2f8 < 0) {
        __ZdlPv(uStack_308);
      }
      plVar8 = plStack_318;
      if (plStack_318 != (long *)0x0) {
        plVar7 = plStack_318 + 1;
        do {
          lVar11 = *plVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_318 + 0x10))(plStack_318);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (plStack_328 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      plVar8 = plStack_2e8;
      if (plStack_2e8 != (long *)0x0) {
        plVar7 = plStack_2e8 + 1;
        do {
          lVar11 = *plVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_2e8 + 0x10))(plStack_2e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (lStack_2d0 < 0) {
        __ZdlPv(uStack_2e0);
      }
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  else {
    FUN_10a70a5c8(lStack_2c0,lVar11 + 0x18);
    *param_1 = plStack_2c8;
    if (plStack_2c8 != (long *)0x0) {
      plVar6 = plStack_2c8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  if (lStack_2c0 != 0) {
    func_0x0001092b4274(&lStack_2c0);
  }
  if (plStack_2c8 != (long *)0x0) {
    puVar2 = (ulong *)(plStack_2c8 + 1);
    do {
      uVar12 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar12 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar12 & 0x1fffffffc) == 4) {
      do {
        uVar12 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar12 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar12 - 1 == 0) {
        (**(code **)(*plStack_2c8 + 8))();
      }
    }
  }
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 0x88);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_10a7e0320:
  FUN_10a043ecc();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a7e0328);
  (*pcVar5)();
}



/* Entry: 10a7e0448; end: 10a7e048b;  */

long FUN_10a7e0448(long param_1)

{
  if (*(char *)(param_1 + 0x3f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x28));
  }
  FUN_10a803bb4(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a7e048c; end: 10a7e0523;  */

void FUN_10a7e048c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uStack_34;
  
  uStack_34 = (undefined4)param_2;
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 0x88);
  lVar1 = param_1 + 0x108;
  FUN_10a803c0c(lVar1,param_2,&uStack_34);
  FUN_10a2e9dcc(lVar1 + 0x18,param_3);
  lVar1 = param_1 + 0xe0;
  func_0x0001094b22d8(lVar1,&uStack_34);
  if (lVar1 != 0) {
    func_0x0001094b2378(param_1 + 0xe0);
  }
  __ZNSt3__115recursive_mutex6unlockEv(param_1 + 0x88);
  return;
}



/* Entry: 10a7e0524; end: 10a7e06bb;  */

void FUN_10a7e0524(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 uStack_24;
  
  uStack_24 = (undefined4)param_2;
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 0x88);
  plVar2 = (long *)(param_1 + 0x108);
  FUN_10a803acc(plVar2,param_2);
  if (plVar2 == (long *)0x0) goto LAB_10a7e0674;
  uVar5 = *(ulong *)(param_1 + 0x110);
  lVar3 = *plVar2;
  uVar4 = plVar2[1];
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar4 = uVar6 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar8 * uVar5;
  }
  plVar1 = *(long **)(*(long *)(param_1 + 0x108) + uVar4 * 8);
  do {
    plVar7 = plVar1;
    plVar1 = (long *)*plVar7;
  } while ((long *)*plVar7 != plVar2);
  if (plVar7 == (long *)(param_1 + 0x118)) {
LAB_10a7e05d8:
    if (lVar3 == 0) {
LAB_10a7e060c:
      *(undefined8 *)(*(long *)(param_1 + 0x108) + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_10a7e0614;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar9 = uVar8 & uVar6;
    }
    else {
      uVar9 = uVar8;
      if (uVar5 <= uVar8) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar8 / uVar5;
        }
        uVar9 = uVar8 - uVar9 * uVar5;
      }
    }
    if (uVar9 != uVar4) goto LAB_10a7e060c;
LAB_10a7e061c:
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar6 * uVar5;
    }
    if (uVar8 != uVar4) {
      *(long **)(*(long *)(param_1 + 0x108) + uVar8 * 8) = plVar7;
      lVar3 = *plVar2;
    }
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar9 = 0;
      if (uVar5 != 0) {
        uVar9 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar9 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10a7e05d8;
LAB_10a7e0614:
    if (lVar3 != 0) {
      uVar8 = *(ulong *)(lVar3 + 8);
      goto LAB_10a7e061c;
    }
  }
  *plVar7 = lVar3;
  *plVar2 = 0;
  *(long *)(param_1 + 0x120) = *(long *)(param_1 + 0x120) + -1;
  func_0x00010a0536d4(plVar2 + 3);
  __ZdlPv(plVar2);
LAB_10a7e0674:
  lVar3 = param_1 + 0xe0;
  func_0x0001094b22d8(lVar3,&uStack_24);
  if (lVar3 != 0) {
    func_0x0001094b2378(param_1 + 0xe0);
  }
  __ZNSt3__115recursive_mutex6unlockEv(param_1 + 0x88);
  return;
}



/* Entry: 10a7e06bc; end: 10a7e073f;  */

undefined1  [16] FUN_10a7e06bc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x16;
  auVar1._0_8_ = &UNK_10f679d2a;
  return auVar1;
}



/* Entry: 10a7e0740; end: 10a7e0823;  */

void FUN_10a7e0740(undefined8 param_1)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xffffffff00000001;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x124;
  uStack_48 = 0xffffffff;
  FUN_10a7e0824(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f678a89;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  puStack_30 = (undefined *)0x0;
  uStack_28 = 0;
  FUN_10a804294();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f678b51;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  puStack_30 = &UNK_10f678718;
  uStack_28 = 0;
  func_0x00010a8044c0(param_1,&puStack_88);
  FUN_10a804740(param_1);
  return;
}



/* Entry: 10a7e0824; end: 10a7e08fb;  */

/* WARNING: Removing unreachable block (ram,0x00010a7e08bc) */

undefined1  [16] FUN_10a7e0824(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f679d2a,0x16);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a804198(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a7e08fc; end: 10a7e0d1f;  */

void FUN_10a7e08fc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lStack_70;
  long lStack_68;
  
  lVar11 = *(long *)(param_2 + 0xe0);
  plVar4 = (long *)0x88;
  __Znwm();
  plVar13 = plVar4 + 1;
  *plVar13 = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110c1fa60;
  plVar10 = plVar4 + 3;
  *plVar10 = (long)&PTR_FUN_110c1b718;
  plVar4[5] = 0;
  plVar4[4] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  if (*(char *)(param_2 + 0xff) < '\0') {
    func_0x000107c3192c(plVar4 + 10,*(undefined8 *)(param_2 + 0xe8),*(undefined8 *)(param_2 + 0xf0))
    ;
  }
  else {
    lVar8 = *(long *)(param_2 + 0xe8);
    plVar4[0xb] = *(long *)(param_2 + 0xf0);
    plVar4[10] = lVar8;
    plVar4[0xc] = *(long *)(param_2 + 0xf8);
  }
  plVar4[0xe] = 0;
  plVar4[0xd] = 0;
  plVar4[0x10] = 0;
  plVar4[0xf] = 0;
  if (lVar11 == 0) {
    lVar8 = 0;
    lVar9 = 0;
  }
  else {
    lVar8 = *(long *)(lVar11 + 0x18);
    lVar9 = *(long *)(lVar11 + 0x20);
    if (lVar9 != 0) {
      plVar6 = (long *)(lVar9 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  lVar5 = plVar4[9];
  plVar4[8] = lVar8;
  plVar4[9] = lVar9;
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar6 = (long *)0xb8;
  __Znwm();
  plVar12 = plVar6 + 1;
  *plVar12 = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_110c1fb50;
  FUN_10a6e7258(plVar6 + 3,lVar11,param_2 + 0xe8);
  if (plVar6[4] == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = *plVar12 + 1;
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
    plVar6[3] = (long)(plVar6 + 3);
    plVar6[4] = (long)plVar6;
  }
  else {
    if (*(long *)(plVar6[4] + 8) != -1) goto LAB_10a7e0ac8;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = *plVar12 + 1;
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
    plVar6[3] = (long)(plVar6 + 3);
    plVar6[4] = (long)plVar6;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar11 = *plVar12;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = lVar11 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar11 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
LAB_10a7e0ac8:
  plVar12 = (long *)plVar4[0xe];
  plVar4[0xd] = (long)(plVar6 + 3);
  plVar4[0xe] = (long)plVar6;
  if (plVar12 != (long *)0x0) {
    plVar6 = plVar12 + 1;
    do {
      lVar11 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  lVar11 = plVar4[9];
  lVar9 = plVar4[9];
  lVar8 = plVar4[8];
  puVar7 = (undefined8 *)0x40;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_DAT_110c1fba0;
  if (lVar11 != 0) {
    plVar6 = (long *)(lVar11 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_70 = lVar8;
  lStack_68 = lVar9;
  FUN_10a6e7d3c(puVar7 + 3,&lStack_70,param_2 + 0xe8);
  if (lVar11 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar11);
  }
  plVar6 = (long *)plVar4[0x10];
  plVar4[0xf] = (long)(puVar7 + 3);
  plVar4[0x10] = (long)puVar7;
  if (plVar6 != (long *)0x0) {
    plVar12 = plVar6 + 1;
    do {
      lVar11 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  *param_1 = plVar10;
  param_1[1] = plVar4;
  if (plVar4[7] == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = *plVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar6 = plVar4 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4[6] = (long)plVar10;
    plVar4[7] = (long)plVar4;
  }
  else {
    if (*(long *)(plVar4[7] + 8) != -1) {
      return;
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = *plVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar6 = plVar4 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4[6] = (long)plVar10;
    plVar4[7] = (long)plVar4;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar11 = *plVar13;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar3) {
      *plVar13 = lVar11 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar11 != 0) {
    return;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
  return;
}



/* Entry: 10a7e0d20; end: 10a7e0d93;  */

void FUN_10a7e0d20(long param_1,long *param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(*param_2 + 0xa8))(&uStack_38,param_2,&PTR_DAT_110c3fbe8,&UNK_10f68c0c1,0);
  if (*(char *)(param_1 + 0x6f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x60) = uStack_30;
  *(undefined8 *)(param_1 + 0x58) = uStack_38;
  *(undefined8 *)(param_1 + 0x68) = uStack_28;
  return;
}



/* Entry: 10a7e0d94; end: 10a7e107f;  */

void FUN_10a7e0d94(ulong param_1)

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
  ulong uVar10;
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
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f679d41,8);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c1da68;
  pppuVar2 = (undefined8 ***)&UNK_10f678718;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x124;
  uStack_50 = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c1da68;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a7e1060;
    FUN_10a054dac(param_1,"read",FUN_10a804878,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a7e1060;
    FUN_10a054dac(param_1,"write",FUN_10a8056dc,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a7e1060;
    FUN_10a054dac(param_1,&DAT_10f685720,FUN_10a806368,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a7e1060;
    FUN_10a054dac(param_1,&DAT_10f2d43f9,FUN_10a806860,4,*(undefined8 *)(param_1 + 0x40));
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
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f679d41,8);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a7e1060:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a7e1064);
  (*pcVar6)();
}



/* Entry: 10a7e1080; end: 10a7e12c7;  */

long ******* FUN_10a7e1080(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *****ppppplVar5;
  long lVar6;
  code *pcVar7;
  long ****pppplVar8;
  long *******ppppppplVar9;
  long *******ppppppplVar10;
  long ******pppppplVar11;
  ulong uVar12;
  long lVar13;
  long *****ppppplVar14;
  ulong uVar15;
  long ****pppplVar16;
  long ******pppppplVar17;
  long *****ppppplVar18;
  undefined8 *puVar19;
  long *****ppppplStack_b0;
  long *****ppppplStack_a8;
  undefined8 uStack_a0;
  long ******pppppplStack_98;
  char cStack_90;
  long ****pppplStack_88;
  long ****pppplStack_80;
  long ****pppplStack_78;
  long ***ppplStack_70;
  long *plStack_68;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x30);
  puVar3 = *(undefined8 **)(param_1 + 0x20);
  if (puVar3 < *(undefined8 **)(param_1 + 0x28)) {
    *puVar3 = *param_2;
    (**(code **)(param_2[1] + 0x18))(puVar3 + 1,param_2 + 1);
    pppplVar16 = (long ****)(puVar3 + 8);
    *(long *****)(param_1 + 0x20) = pppplVar16;
  }
  else {
    plVar1 = (long *)(param_1 + 0x18);
    lVar13 = (long)puVar3 - *plVar1;
    uVar2 = (lVar13 >> 6) + 1;
    if (uVar2 >> 0x3a != 0) {
      FUN_10a8087b0();
LAB_10a7e1274:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10a7e1278);
      (*pcVar7)();
    }
    uVar12 = (long)*(undefined8 **)(param_1 + 0x28) - *plVar1;
    uVar15 = (long)uVar12 >> 5;
    if (uVar15 <= uVar2) {
      uVar15 = uVar2;
    }
    if (0x7fffffffffffffbf < uVar12) {
      uVar15 = 0x3ffffffffffffff;
    }
    plStack_68 = plVar1;
    if (uVar15 == 0) {
      pppplVar8 = (long ****)0x0;
    }
    else {
      if (uVar15 >> 0x3a != 0) {
        func_0x000109ffded8();
        goto LAB_10a7e1274;
      }
      pppplVar8 = (long ****)(uVar15 << 6);
      __Znwm();
    }
    pppplVar16 = (long ****)((long)pppplVar8 + lVar13);
    *pppplVar16 = (long ***)*param_2;
    pppplStack_88 = pppplVar8;
    pppplStack_80 = pppplVar16;
    pppplStack_78 = pppplVar16;
    ppplStack_70 = (long ***)(pppplVar8 + uVar15 * 8);
    (**(code **)(param_2[1] + 0x18))(pppplVar16 + 1,param_2 + 1);
    ppppplVar18 = *(long ******)(param_1 + 0x18);
    ppppplVar5 = *(long ******)(param_1 + 0x20);
    puVar3 = (undefined8 *)((long)pppplVar16 + ((long)ppppplVar18 - (long)ppppplVar5));
    ppppplVar14 = ppppplVar18;
    puVar19 = puVar3;
    if (ppppplVar5 != ppppplVar18) {
      do {
        *puVar19 = *ppppplVar14;
        (*(code *)ppppplVar14[1][2])(puVar19 + 1,ppppplVar14 + 1);
        ppppplVar14 = ppppplVar14 + 8;
        puVar19 = puVar19 + 8;
      } while (ppppplVar14 != ppppplVar5);
      ppppplVar18 = ppppplVar18 + 1;
      do {
        ppppplVar14 = ppppplVar18 + 7;
        (*(code *)**ppppplVar18)(ppppplVar18);
        ppppplVar18 = ppppplVar18 + 8;
      } while (ppppplVar14 != ppppplVar5);
      ppppplVar18 = (long *****)*plVar1;
    }
    pppplVar16 = pppplVar16 + 8;
    *(undefined8 **)(param_1 + 0x18) = puVar3;
    *(long *****)(param_1 + 0x20) = pppplVar16;
    ppplStack_70 = *(long ****)(param_1 + 0x28);
    *(long *****)(param_1 + 0x28) = pppplVar8 + uVar15 * 8;
    pppplStack_88 = (long ****)ppppplVar18;
    pppplStack_80 = (long ****)ppppplVar18;
    pppplStack_78 = (long ****)ppppplVar18;
    FUN_10a8087c4(&pppplStack_88);
  }
  *(long *****)(param_1 + 0x20) = pppplVar16;
  ppppppplVar9 = (long *******)(param_1 + 0x30);
  __ZNSt3__15mutex6unlockEv(ppppppplVar9);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 8) + 0x10) >> 1 & 1) == 0) {
    return ppppppplVar9;
  }
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    cStack_90 = '\0';
    ppppppplVar9 = &pppppplStack_98;
    pppppplStack_98 = (long ******)(param_1 + 0x70);
    func_0x00010a701888();
    ppppppplVar10 = ppppppplVar9;
    if (((ulong)ppppppplVar9 & 1) != 0) {
      ppppplStack_b0 = (long *****)0x0;
      ppppplStack_a8 = (long *****)0x0;
      uStack_a0 = 0;
      __ZNSt3__15mutex4lockEv(param_1 + 0x30);
      pppppplVar17 = *(long *******)(param_1 + 0x18);
      uStack_a0 = *(undefined8 *)(param_1 + 0x28);
      pppppplVar11 = *(long *******)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      ppppplStack_b0 = (long *****)pppppplVar17;
      ppppplStack_a8 = (long *****)pppppplVar11;
      __ZNSt3__15mutex6unlockEv(param_1 + 0x30);
      for (; pppppplVar17 != pppppplVar11; pppppplVar17 = pppppplVar17 + 8) {
        pppplStack_88 = (long ****)*pppppplVar17;
        (*(code *)pppppplVar17[1][3])(&pppplStack_80,pppppplVar17 + 1);
        (*(code *)pppplStack_88)(param_1 + 8,&pppplStack_88);
        (*(code *)*pppplStack_80)(&pppplStack_80);
      }
      ppppppplVar10 = (long *******)&ppppplStack_b0;
      FUN_10a808548();
    }
    if (cStack_90 == '\x01') {
      ppppppplVar10 = (long *******)pppppplStack_98;
      __ZNSt3__15mutex6unlockEv();
    }
    if ((int)ppppppplVar9 == 0) break;
    __ZNSt3__15mutex4lockEv(param_1 + 0x30);
    lVar4 = *(long *)(param_1 + 0x18);
    lVar6 = *(long *)(param_1 + 0x20);
    ppppppplVar10 = (long *******)(param_1 + 0x30);
    __ZNSt3__15mutex6unlockEv();
  } while (lVar6 != lVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    FUN_10a808548(&ppppplStack_b0);
    if (cStack_90 == '\x01') {
      __ZNSt3__15mutex6unlockEv(pppppplStack_98);
    }
    __Unwind_Resume(ppppppplVar10);
    ppppppplVar9 = (long *******)&DAT_10f62a4d8;
    FUN_109ffde64();
    pppppplVar17 = ppppppplVar9[1];
    pppppplVar11 = ppppppplVar9[2];
    while (pppppplVar11 != pppppplVar17) {
      ppppplVar14 = pppppplVar11[-7];
      ppppppplVar9[2] = pppppplVar11 + -8;
      (*(code *)*ppppplVar14)();
      pppppplVar11 = ppppppplVar9[2];
    }
    if (*ppppppplVar9 != (long ******)0x0) {
      __ZdlPv();
    }
    return ppppppplVar9;
  }
  return ppppppplVar10;
}



/* Entry: 10a7e12c8; end: 10a7e12fb;  */

long FUN_10a7e12c8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a07a8a8(param_1 + 0x10);
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



/* Entry: 10a7e12fc; end: 10a7e19f7;  */

/* WARNING: Removing unreachable block (ram,0x00010a7e1450) */

long * FUN_10a7e12fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long *param_5,undefined8 *param_6,long *param_7,long *param_8)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plStack_350;
  long *plStack_348;
  long *plStack_340;
  long *plStack_338;
  long lStack_330;
  long *plStack_328;
  long lStack_320;
  ulong uStack_318;
  long lStack_310;
  long lStack_308;
  undefined4 uStack_300;
  long alStack_2f0 [36];
  undefined1 auStack_1d0 [8];
  undefined8 uStack_1c8;
  long *plStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 *puStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  ulong uStack_170;
  long lStack_168;
  long lStack_160;
  undefined4 uStack_158;
  undefined8 ****appppuStack_150 [2];
  long alStack_140 [7];
  undefined8 uStack_108;
  code *pcStack_100;
  undefined **ppuStack_f8;
  undefined8 *puStack_f0;
  undefined8 ****ppppuStack_c0;
  undefined7 uStack_b8;
  undefined4 uStack_b1;
  undefined1 uStack_ad;
  undefined1 uStack_a9;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_8 == 0) {
    puVar6 = (undefined8 *)0x20;
    __Znwm();
    puVar6[2] = 0;
    *puVar6 = &PTR_DAT_110b3f0e8;
    puVar6[1] = 0;
    plVar11 = (long *)param_8[1];
    param_8[1] = (long)puVar6;
    *(undefined4 *)(puVar6 + 3) = 3;
    *param_8 = (long)(puVar6 + 3);
    if (plVar11 != (long *)0x0) {
      plVar10 = plVar11 + 1;
      do {
        lVar8 = *plVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar2) {
          *plVar10 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
  }
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  plVar11 = *(long **)(param_1 + 0x20);
  uStack_1c8 = uVar7;
  if ((plVar11 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_1c0 = plVar11, plVar11 == (long *)0x0)) {
    FUN_10a043ecc();
    goto LAB_10a7e1930;
  }
  lVar8 = *param_8;
  plVar10 = (long *)param_8[1];
  if (plVar10 != (long *)0x0) {
    plVar5 = plVar10 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (param_5 != (long *)0x0) {
    plVar5 = param_5 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (param_7 != (long *)0x0) {
    plVar5 = param_7 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lStack_1b8 = lVar8;
  plStack_1b0 = plVar10;
  uStack_1a8 = param_4;
  plStack_1a0 = param_5;
  puStack_198 = param_6;
  plStack_190 = param_7;
  uStack_188 = param_2;
  uStack_180 = param_3;
  if (*(char *)(param_1 + 0x4f) < '\0') {
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_10a7e15b8;
LAB_10a7e13e0:
    uStack_300 = 0x3f800000;
    uStack_a9 = 0x13;
    uStack_318 = 0;
    lStack_320 = 0;
    lStack_308 = 0;
    lStack_310 = 0;
    uStack_b8 = 0x70612d73656d61;
    uStack_b1 = 0x64692d70;
    ppppuStack_c0 = (undefined8 *****)0x672d70616e732d78;
    uStack_ad = 0;
    appppuStack_150[0] = &ppppuStack_c0;
    plVar5 = &lStack_320;
    func_0x000104c5bc74(plVar5,&ppppuStack_c0,&UNK_10dd5b8f9,appppuStack_150,&pcStack_100);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (plVar5 + 5,param_1 + 0x38);
    lStack_330 = 0;
    plStack_328 = (long *)0x0;
    plVar5 = *(long **)(param_1 + 0x30);
    if (((plVar5 == (long *)0x0) ||
        (__ZNSt3__119__shared_weak_count4lockEv(), plStack_328 = plVar5, plVar5 == (long *)0x0)) ||
       (lVar12 = *(long *)(param_1 + 0x28), lStack_330 = lVar12, lVar12 == 0)) {
      plVar11 = plStack_328;
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f678b57,&UNK_10f678d68,0x106,&UNK_10f678c14);
      }
    }
    else {
      FUN_10a3bf5c8(appppuStack_150,param_4);
      lVar14 = *(long *)(lVar12 + 0x100);
      plVar5 = (long *)0x138;
      __Znwm();
      ppppuStack_c0 = appppuStack_150[0];
      plVar13 = plVar5 + 1;
      *plVar13 = 0;
      plVar5[2] = 0;
      *plVar5 = (long)&PTR_FUN_110b9f3b0;
      appppuStack_150[0] = (undefined8 *****)0x0;
      uStack_b8 = SUB87(appppuStack_150[1],0);
      uStack_b1._0_1_ = (undefined1)((ulong)appppuStack_150[1] >> 0x38);
      (**(code **)(alStack_140[0] + 0x10))((long)&uStack_b1 + 1,alStack_140);
      uStack_170 = uStack_318;
      lStack_178 = lStack_320;
      uStack_78 = uStack_108;
      lStack_320 = 0;
      uStack_318 = 0;
      lStack_168 = lStack_310;
      lStack_160 = lStack_308;
      uStack_158 = uStack_300;
      if (lStack_308 != 0) {
        uVar9 = *(ulong *)(lStack_310 + 8);
        if ((uStack_170 & uStack_170 - 1) == 0) {
          uVar9 = uVar9 & uStack_170 - 1;
        }
        else if (uStack_170 <= uVar9) {
          uVar3 = 0;
          if (uStack_170 != 0) {
            uVar3 = uVar9 / uStack_170;
          }
          uVar9 = uVar9 - uVar3 * uStack_170;
        }
        *(long **)(lStack_178 + uVar9 * 8) = &lStack_168;
        lStack_310 = 0;
        lStack_308 = 0;
      }
      uVar9 = *(ulong *)(lVar14 + 0x210);
      lVar4 = *(long *)(lVar14 + 0x208);
      if (-1 < (char)*(byte *)(lVar14 + 0x21f)) {
        uVar9 = (ulong)*(byte *)(lVar14 + 0x21f);
        lVar4 = lVar14 + 0x208;
      }
      pcStack_100 = FUN_10a809d04;
      ppuStack_f8 = &PTR_FUN_110c1fde0;
      puVar6 = (undefined8 *)0x50;
      __Znwm();
      plStack_350 = plVar5 + 3;
      *puVar6 = uVar7;
      puVar6[1] = plVar11;
      uStack_1c8 = 0;
      plStack_1c0 = (long *)0x0;
      puVar6[2] = lVar8;
      puVar6[3] = plVar10;
      lStack_1b8 = 0;
      plStack_1b0 = (long *)0x0;
      puVar6[4] = param_4;
      puVar6[5] = param_5;
      if (param_5 != (long *)0x0) {
        param_5 = param_5 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(param_5,0x10);
          if (bVar2) {
            *param_5 = *param_5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      puVar6[6] = param_6;
      puVar6[7] = param_7;
      puStack_198 = (undefined8 *)0x0;
      plStack_190 = (long *)0x0;
      puVar6[9] = uStack_180;
      puVar6[8] = uStack_188;
      puStack_f0 = puVar6;
      FUN_10a05c494(plStack_350,param_2,param_3,&UNK_10f647b49,4,&ppppuStack_c0,6,&lStack_178,lVar4,
                    uVar9,&pcStack_100);
      (*(code *)*ppuStack_f8)(&ppuStack_f8);
      func_0x000104c4f944(&lStack_178);
      FUN_10a042634(&ppppuStack_c0);
      plStack_340 = plStack_350;
      plStack_338 = plVar5;
      FUN_10a042634(appppuStack_150);
      uVar7 = *(undefined8 *)(lVar12 + 0x940);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar2) {
          *plVar13 = *plVar13 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plStack_348 = plVar5;
      FUN_10a25f3f4(uVar7,&plStack_350);
      do {
        lVar8 = *plVar13;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar2) {
          *plVar13 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
      plVar10 = plStack_338;
      plVar11 = plStack_328;
      if (plStack_338 != (long *)0x0) {
        plVar5 = plStack_338 + 1;
        do {
          lVar8 = *plVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_338 + 0x10))(plStack_338);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          plVar11 = plStack_328;
        }
      }
    }
    if (plVar11 != (long *)0x0) {
      plVar10 = plVar11 + 1;
      do {
        lVar8 = *plVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar2) {
          *plVar10 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    plVar11 = &lStack_320;
    func_0x000104c4f944();
    param_7 = plStack_190;
  }
  else {
    if (*(char *)(param_1 + 0x4f) != '\0') goto LAB_10a7e13e0;
LAB_10a7e15b8:
    FUN_10a009538(alStack_2f0,&UNK_10f678cbc);
    FUN_10a05bde0(auStack_1d0,alStack_2f0);
    func_0x000109d1b350(*param_6,auStack_1d0);
    FUN_10a808618(param_6);
    __ZNSt13exception_ptrD1Ev(auStack_1d0);
    plVar11 = alStack_2f0;
    __ZNSt13runtime_errorD2Ev();
  }
  if (param_7 != (long *)0x0) {
    plVar10 = param_7 + 1;
    do {
      lVar8 = *plVar10;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*param_7 + 0x10))(param_7);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar11 = param_7;
    }
  }
  plVar10 = plStack_1a0;
  if (plStack_1a0 != (long *)0x0) {
    plVar5 = plStack_1a0 + 1;
    do {
      lVar8 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_1a0 + 0x10))(plStack_1a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar11 = plVar10;
    }
  }
  plVar10 = plStack_1b0;
  if (plStack_1b0 != (long *)0x0) {
    plVar5 = plStack_1b0 + 1;
    do {
      lVar8 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar11 = plVar10;
    }
  }
  plVar10 = plStack_1c0;
  if (plStack_1c0 != (long *)0x0) {
    plVar5 = plStack_1c0 + 1;
    do {
      lVar8 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar11 = plVar10;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return plVar11;
  }
LAB_10a7e1930:
  ___stack_chk_fail();
  FUN_10a05bd88(&plStack_350);
  FUN_10a05bd88(&plStack_340);
  func_0x00010a3f61b0(&lStack_330);
  func_0x000104c4f944(&lStack_320);
  func_0x00010a7e1a2c(&uStack_1c8);
  __Unwind_Resume();
  if (plVar11[5] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a07a8a8(plVar11 + 2);
  plVar10 = (long *)plVar11[1];
  if (plVar10 != (long *)0x0) {
    plVar5 = plVar10 + 1;
    do {
      lVar8 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  return plVar11;
}



/* Entry: 10a7e19f8; end: 10a7e1a63;  */

long FUN_10a7e19f8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a07a8a8(param_1 + 0x10);
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



/* Entry: 10a7e1a64; end: 10a7e1afb;  */

undefined1  [16] FUN_10a7e1a64(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x16;
  auVar1._0_8_ = &UNK_10f654f89;
  return auVar1;
}



/* Entry: 10a7e1afc; end: 10a7e1ddb;  */

void FUN_10a7e1afc(ulong param_1)

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
  ulong uVar10;
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
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f654f89,0x16);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c1daa0;
  pppuVar2 = (undefined8 ***)&UNK_10f678718;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x124;
  uStack_50 = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c1daa0;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68f20c,FUN_10a80a1ac,FUN_10a80a264);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f678a6e,FUN_10a80a440,FUN_10a80a4fc);
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
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f654f89,0x16);
      FUN_10a05431c(param_1);
    }
    uStack_98 = 0;
    uStack_90 = 0;
    ppuStack_a0 = (undefined8 **)&UNK_10f654f89;
    uStack_80 = 0xffffffffffffffff;
    uStack_88 = 0x100000019;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_a0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a7e1dbc;
      FUN_10a054dac(param_1,&UNK_10f678a89,FUN_10a80a5bc,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a7e1dbc:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a7e1dc0);
  (*pcVar6)();
}



/* Entry: 10a7e1ddc; end: 10a7e1e63;  */

undefined8 * FUN_10a7e1ddc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c1b770;
  FUN_10a07a538(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a7e1e64; end: 10a7e1eb7;  */

void FUN_10a7e1e64(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0;
  uStack_1c = 0xffffffff00000110;
  FUN_10a7e1eb8(param_1,&uStack_58);
  FUN_10a80a830();
  return;
}



/* Entry: 10a7e1eb8; end: 10a7e1f8f;  */

/* WARNING: Removing unreachable block (ram,0x00010a7e1f50) */

undefined1  [16] FUN_10a7e1eb8(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f679d4a,0x18);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a80a734(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a7e1f90; end: 10a7e20bb;  */

void FUN_10a7e1f90(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  FUN_10a7f82b8();
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  FUN_10a009fa8(param_1 + 0x10,&uStack_30);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  FUN_10a7e20bc(param_1);
  return;
}



/* Entry: 10a7e20bc; end: 10a7e236f;  */

/* WARNING: Removing unreachable block (ram,0x00010a7e22ec) */

undefined8 FUN_10a7e20bc(long *param_1)

{
  char cVar1;
  bool bVar2;
  long ***ppplVar3;
  int iVar4;
  long lVar5;
  long *****ppppplVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uStack_a0;
  undefined7 uStack_98;
  undefined4 uStack_91;
  undefined1 uStack_8d;
  char cStack_89;
  long ****pppplStack_88;
  long *plStack_80;
  char cStack_71;
  long ****pppplStack_70;
  long ***ppplStack_68;
  long ***ppplStack_60;
  long ***ppplStack_50;
  long ***ppplStack_48;
  long ***ppplStack_40;
  
  plVar8 = param_1 + 2;
  if (((*plVar8 == 0) && (lVar5 = *param_1, lVar5 != 0)) && (func_0x00010aae9fd8(), lVar5 != 0)) {
    FUN_10a08d2e0(&pppplStack_88,lVar5 + 0x10);
    ppppplVar6 = &pppplStack_88;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(ppppplVar6,"/",1);
    ppplStack_68 = (long ***)ppppplVar6[1];
    pppplStack_70 = *ppppplVar6;
    ppplStack_60 = (long ***)ppppplVar6[2];
    ppppplVar6[1] = (long ****)0x0;
    ppppplVar6[2] = (long ****)0x0;
    *ppppplVar6 = (long ****)0x0;
    cStack_89 = '\x13';
    uStack_98 = 0x6e6f6974704f72;
    uStack_91 = 0x62702e73;
    uStack_a0 = 0x6f7461746f6e6e61;
    uStack_8d = 0;
    ppppplVar6 = &pppplStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppppplVar6,&uStack_a0,0x13);
    ppplStack_48 = (long ***)ppppplVar6[1];
    ppplStack_50 = (long ***)*ppppplVar6;
    ppplStack_40 = (long ***)ppppplVar6[2];
    ppppplVar6[1] = (long ****)0x0;
    ppppplVar6[2] = (long ****)0x0;
    *ppppplVar6 = (long ****)0x0;
    if (cStack_89 < '\0') {
      __ZdlPv(uStack_a0);
    }
    if ((long)ppplStack_60 < 0) {
      __ZdlPv(pppplStack_70);
    }
    if (cStack_71 < '\0') {
      __ZdlPv(pppplStack_88);
    }
    iVar4 = (int)&ppplStack_50;
    FUN_10ad01a04();
    if (iVar4 != 0) {
      plVar7 = (long *)0xc0;
      __Znwm();
      plVar7[2] = 0;
      plVar7[1] = 0;
      *plVar7 = (long)&PTR_DAT_110c204e0;
      plVar7[4] = 0;
      pppplStack_70 = (long ****)(plVar7 + 3);
      *pppplStack_70 = (long ***)&PTR_DAT_110aed388;
      plVar7[6] = 0;
      plVar7[5] = 0;
      plVar7[8] = 0;
      plVar7[7] = 0;
      plVar7[10] = 0;
      plVar7[9] = 0;
      plVar7[0xb] = 0;
      plVar7[0xc] = (long)&DAT_11383d918;
      *(undefined8 *)((long)plVar7 + 0xb4) = 0x8000000004;
      plVar7[0xe] = 0;
      plVar7[0xd] = 0;
      plVar7[0x10] = 0;
      plVar7[0xf] = 0;
      plVar7[0x12] = 0;
      plVar7[0x11] = 0;
      plVar7[0x14] = 0;
      plVar7[0x13] = 0;
      *(undefined8 *)((long)plVar7 + 0xac) = 0;
      *(undefined8 *)((long)plVar7 + 0xa4) = 0;
      ppplStack_68 = (long ***)plVar7;
      FUN_10a009fa8(plVar8,&pppplStack_70);
      ppplVar3 = ppplStack_68;
      if (ppplStack_68 != (long ***)0x0) {
        plVar7 = (long *)(ppplStack_68 + 1);
        do {
          lVar5 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 == 0) {
          (**(code **)((long)*ppplStack_68 + 0x10))(ppplStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar3);
        }
      }
      lVar5 = *plVar8;
      FUN_10ad01b0c(&pppplStack_70,&ppplStack_50);
      plStack_80 = (long *)ppplStack_68;
      pppplStack_88 = pppplStack_70;
      if (-1 < (long)ppplStack_60) {
        plStack_80 = (long *)((ulong)ppplStack_60 >> 0x38);
        pppplStack_88 = (long ****)&pppplStack_70;
      }
      func_0x000107c30348(lVar5,&pppplStack_88);
      if ((long)ppplStack_60 < 0) {
        __ZdlPv(pppplStack_70);
      }
      return 1;
    }
  }
  return 0;
}


