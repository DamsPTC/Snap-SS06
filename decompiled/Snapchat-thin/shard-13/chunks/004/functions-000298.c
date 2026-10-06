/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a60a70c; end: 10a60a7c7;  */

void FUN_10a60a70c(undefined8 param_1,uint param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  FUN_10a60a1b0(&lStack_30,param_1);
  if (lStack_30 == 0) {
    FUN_10a00946c(&UNK_10f669671);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a60a7b4);
    (*pcVar4)();
  }
  if (param_2 < 3) {
    param_2 = 2;
  }
  if (799 < param_2) {
    param_2 = 800;
  }
  *(uint *)(lStack_30 + 0x2cc) = param_2;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_28);
      return;
    }
  }
  return;
}



/* Entry: 10a60a7c8; end: 10a60a8d3;  */

undefined8 FUN_10a60a7c8(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_50;
  long *plStack_48;
  
  FUN_10a60a1b0(&lStack_50,param_2);
  if (lStack_50 == 0) {
    param_1 = 0;
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f669443,&UNK_10f6696a2,0x57,&UNK_10f6696e3);
    }
  }
  else {
    FUN_10a1ea798();
  }
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
  return param_1;
}



/* Entry: 10a60a8d4; end: 10a60a97f;  */

void FUN_10a60a8d4(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long lStack_30;
  long *plStack_28;
  
  FUN_10a60a1b0(&lStack_30,param_1);
  if (lStack_30 == 0) {
    FUN_10a00946c(&UNK_10f669716);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a60a96c);
    (*pcVar4)();
  }
  uVar6 = *param_2;
  *(undefined8 *)(lStack_30 + 0x2dc) = param_2[1];
  *(undefined8 *)(lStack_30 + 0x2d4) = uVar6;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_28);
      return;
    }
  }
  return;
}



/* Entry: 10a60a980; end: 10a60aa2f;  */

void FUN_10a60a980(undefined8 param_1,byte param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  FUN_10a60a1b0(&lStack_30,param_1);
  if (lStack_30 == 0) {
    FUN_10a00946c(&UNK_10f6697fe);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a60aa1c);
    (*pcVar4)();
  }
  *(byte *)(lStack_30 + 0x2c8) = *(byte *)(lStack_30 + 0x2c8) & 0xfe | param_2;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_28);
      return;
    }
  }
  return;
}



/* Entry: 10a60aa30; end: 10a60ab13;  */

undefined1  [16] FUN_10a60aa30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auVar5 [16];
  long lStack_40;
  long *plStack_38;
  
  FUN_10a60a1b0(&lStack_40,param_3);
  if (lStack_40 == 0) {
    param_2 = 0;
    if ((bRam000000011330a9e8 & 1) == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010ae06f08(0,1,&UNK_10f669443,&UNK_10f66983e,0x85,&UNK_10f66988c);
      param_1 = 0;
    }
  }
  else {
    func_0x00010a1ea7b8();
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 10a60ab14; end: 10a60abd7;  */

void FUN_10a60ab14(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  float fVar6;
  long lStack_30;
  long *plStack_28;
  
  FUN_10a60a1b0(&lStack_30,param_1);
  if (lStack_30 == 0) {
    FUN_10a00946c(&UNK_10f6698c7);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a60abc4);
    (*pcVar4)();
  }
  fVar6 = (float)NEON_ucvtf(*(undefined4 *)(lStack_30 + 0x2cc));
  *(ulong *)(lStack_30 + 0x304) =
       CONCAT44((float)((ulong)*param_2 >> 0x20) / (fVar6 * 0.25),(float)*param_2 / (fVar6 * 0.25));
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_28);
      return;
    }
  }
  return;
}



/* Entry: 10a60abd8; end: 10a60acbb;  */

undefined1  [16] FUN_10a60abd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auVar5 [16];
  long lStack_40;
  long *plStack_38;
  
  FUN_10a60a1b0(&lStack_40,param_3);
  if (lStack_40 == 0) {
    param_2 = 0;
    if ((bRam000000011330a9e8 & 1) == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010ae06f08(0,1,&UNK_10f669443,&UNK_10f669905,0x95,&UNK_10f66988c);
      param_1 = 0;
    }
  }
  else {
    func_0x00010a1ea7ac();
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 10a60acbc; end: 10a60ad67;  */

void FUN_10a60acbc(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  FUN_10a60a1b0(&lStack_30,param_1);
  if (lStack_30 == 0) {
    FUN_10a00946c(&UNK_10f6698c7);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a60ad54);
    (*pcVar4)();
  }
  *(undefined8 *)(lStack_30 + 0x304) = *param_2;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_28);
      return;
    }
  }
  return;
}



/* Entry: 10a60ad68; end: 10a60ae4b;  */

undefined1  [16] FUN_10a60ad68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auVar5 [16];
  long lStack_40;
  long *plStack_38;
  
  FUN_10a60a1b0(&lStack_40,param_3);
  if (lStack_40 == 0) {
    param_2 = 0;
    if ((bRam000000011330a9e8 & 1) == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010ae06f08(0,1,&UNK_10f669443,&UNK_10f66994d,0xa5,&UNK_10f66999a);
      param_1 = 0;
    }
  }
  else {
    func_0x00010a1ea7f0();
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 10a60ae4c; end: 10a60aeff;  */

void FUN_10a60ae4c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined4 uVar6;
  long lStack_30;
  long *plStack_28;
  
  FUN_10a60a1b0(&lStack_30,param_1);
  if (lStack_30 == 0) {
    FUN_10a00946c(&UNK_10f6699d4);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a60aeec);
    (*pcVar4)();
  }
  uVar6 = (undefined4)*param_2;
  *(undefined8 *)(lStack_30 + 0x2fc) = *param_2;
  *(ulong *)(lStack_30 + 0x2f4) = CONCAT44(uVar6,uVar6);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_28);
      return;
    }
  }
  return;
}



/* Entry: 10a60af00; end: 10a60b00b;  */

undefined8 FUN_10a60af00(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_50;
  long *plStack_48;
  
  FUN_10a60a1b0(&lStack_50,param_2);
  if (lStack_50 == 0) {
    param_1 = 0;
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f669443,&UNK_10f669a12,0xb5,&UNK_10f66999a);
    }
  }
  else {
    func_0x00010a1ea7dc();
  }
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
  return param_1;
}



/* Entry: 10a60b00c; end: 10a60b0df;  */

void FUN_10a60b00c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lStack_50;
  long *plStack_48;
  
  FUN_10a60a1b0(&lStack_50,param_5);
  if (lStack_50 == 0) {
    FUN_10a00946c(&UNK_10f6699d4);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a60b0cc);
    (*pcVar4)();
  }
  *(undefined4 *)(lStack_50 + 0x2f4) = param_1;
  *(undefined4 *)(lStack_50 + 0x2f8) = param_2;
  *(undefined4 *)(lStack_50 + 0x2fc) = param_3;
  *(undefined4 *)(lStack_50 + 0x300) = param_4;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_48);
      return;
    }
  }
  return;
}



/* Entry: 10a60b0e0; end: 10a60b19b;  */

void FUN_10a60b0e0(undefined8 param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  byte bVar6;
  long lStack_30;
  long *plStack_28;
  
  FUN_10a60a1b0(&lStack_30,param_1);
  if (lStack_30 == 0) {
    FUN_10a00946c(&UNK_10f669ac9);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a60b188);
    (*pcVar4)();
  }
  bVar6 = 2;
  if (param_2 == 0) {
    bVar6 = 0;
  }
  *(byte *)(lStack_30 + 0x2c8) = *(byte *)(lStack_30 + 0x2c8) & 0xfd | bVar6;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_28);
      return;
    }
  }
  return;
}



/* Entry: 10a60b19c; end: 10a60b2a7;  */

undefined8 FUN_10a60b19c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_50;
  long *plStack_48;
  
  FUN_10a60a1b0(&lStack_50,param_2);
  if (lStack_50 == 0) {
    param_1 = 0;
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f669443,&UNK_10f669bb2,0xe5,&UNK_10f669bf6);
    }
  }
  else {
    func_0x00010a1ea7fc();
  }
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
  return param_1;
}



/* Entry: 10a60b2a8; end: 10a60b353;  */

void FUN_10a60b2a8(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long lStack_30;
  long *plStack_28;
  
  FUN_10a60a1b0(&lStack_30,param_1);
  if (lStack_30 == 0) {
    FUN_10a00946c(&UNK_10f669c2c);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a60b340);
    (*pcVar4)();
  }
  uVar6 = *param_2;
  *(undefined8 *)(lStack_30 + 0x2ec) = param_2[1];
  *(undefined8 *)(lStack_30 + 0x2e4) = uVar6;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_28);
      return;
    }
  }
  return;
}



/* Entry: 10a60b354; end: 10a60b54f;  */

float FUN_10a60b354(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code *pcVar6;
  long lVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  
  FUN_10a60a1b0(&lStack_60,param_1);
  if (lStack_60 != 0) {
    if (*(char *)(lStack_60 + 0x2c7) < '\0') {
      func_0x000107c3192c(&uStack_d0,*(undefined8 *)(lStack_60 + 0x2b0),
                          *(undefined8 *)(lStack_60 + 0x2b8));
    }
    else {
      uStack_c8 = *(undefined8 *)(lStack_60 + 0x2b8);
      uStack_d0 = *(undefined8 *)(lStack_60 + 0x2b0);
      lStack_c0 = *(long *)(lStack_60 + 0x2c0);
    }
    uStack_78 = *(undefined4 *)(lStack_60 + 0x308);
    uStack_b0 = *(undefined8 *)(lStack_60 + 0x2d0);
    uVar11 = *(undefined8 *)(lStack_60 + 0x2c8);
    uStack_a0 = *(undefined8 *)(lStack_60 + 0x2e0);
    uStack_a8 = *(undefined8 *)(lStack_60 + 0x2d8);
    uStack_90 = *(undefined8 *)(lStack_60 + 0x2f0);
    uStack_98 = *(undefined8 *)(lStack_60 + 0x2e8);
    uStack_80 = *(undefined8 *)(lStack_60 + 0x300);
    uStack_88 = *(undefined8 *)(lStack_60 + 0x2f8);
    plStack_68 = *(long **)(lStack_60 + 0x318);
    uVar9 = *(undefined8 *)(lStack_60 + 0x310);
    if (*(long *)(lStack_60 + 0x318) != 0) {
      plVar1 = (long *)(*(long *)(lStack_60 + 0x318) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_b8 = uVar11;
    uStack_70 = uVar9;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_d0,param_2);
    fVar8 = (float)uVar9;
    fVar10 = (float)uVar11;
    FUN_10a1e87a8(lStack_60,&uStack_d0);
    iVar5 = uStack_b8._4_4_;
    lVar7 = *(long *)(param_1 + 0x178);
    func_0x00010a0d8ae0(lVar7);
    plVar1 = plStack_68;
    fVar12 = *(float *)(lVar7 + 0x48);
    fVar13 = *(float *)(lVar7 + 0x4c);
    if (plStack_68 != (long *)0x0) {
      plVar2 = plStack_68 + 1;
      do {
        lVar7 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    if (lStack_c0 < 0) {
      __ZdlPv(uStack_d0);
    }
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
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
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
      }
    }
    return ((fVar8 / fVar10) * ((float)iVar5 / (64.0 / (0.0 / (float)(int)fVar10 + 1.0))) * fVar13)
           / fVar12;
  }
  FUN_10a00946c(&UNK_10f669c6b);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a60b520);
  (*pcVar6)();
}



/* Entry: 10a60b550; end: 10a60b5d3;  */

void FUN_10a60b550(long param_1,long *param_2)

{
  func_0x00010a3a3858();
                    /* WARNING: Could not recover jumptable at 0x00010a60b588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x78))(param_2,&PTR_DAT_110bfc6c0,param_1 + 0x538);
  return;
}



/* Entry: 10a60b5d4; end: 10a60c193;  */

/* WARNING: Removing unreachable block (ram,0x00010a60c308) */

void FUN_10a60b5d4(undefined8 *param_1,undefined8 **param_2,undefined8 param_3,long param_4)

{
  ushort uVar1;
  ushort uVar2;
  ulong uVar3;
  undefined8 *****pppppuVar4;
  char cVar5;
  bool bVar6;
  undefined **ppuVar7;
  undefined8 **ppuVar8;
  undefined8 uVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  undefined8 *****pppppuVar12;
  undefined8 ****ppppuVar13;
  undefined8 ***pppuVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *extraout_x8;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 **ppuVar21;
  undefined8 **ppuVar22;
  undefined8 ****ppppuStack_2b8;
  ulong uStack_2b0;
  byte bStack_2a1;
  undefined8 ****ppppuStack_2a0;
  ulong uStack_298;
  byte bStack_289;
  undefined8 ****appppuStack_288 [2];
  char cStack_271;
  undefined8 ***pppuStack_270;
  undefined8 ***pppuStack_268;
  undefined8 ***pppuStack_260;
  undefined8 **ppuStack_250;
  undefined8 **ppuStack_248;
  undefined8 **ppuStack_240;
  undefined8 ****ppppuStack_238;
  ulong uStack_230;
  byte bStack_221;
  undefined8 **ppuStack_220;
  undefined8 **ppuStack_218;
  undefined8 **ppuStack_210;
  undefined8 **ppuStack_208;
  undefined8 **ppuStack_200;
  undefined8 *puStack_1f8;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 **ppuStack_1d0;
  undefined8 **ppuStack_1c8;
  undefined8 **ppuStack_1b8;
  undefined8 **ppuStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  undefined8 *puStack_190;
  undefined8 **ppuStack_188;
  undefined8 **ppuStack_180;
  undefined8 **ppuStack_178;
  undefined8 **ppuStack_170;
  undefined8 **ppuStack_168;
  undefined8 **ppuStack_160;
  undefined8 **ppuStack_158;
  undefined8 *puStack_150;
  undefined8 **ppuStack_148;
  undefined1 auStack_140 [8];
  undefined8 *apuStack_138 [7];
  undefined8 **ppuStack_100;
  undefined8 **ppuStack_f8;
  undefined8 uStack_f0;
  undefined **ppuStack_e8;
  undefined8 **ppuStack_e0;
  undefined8 **ppuStack_d8;
  undefined8 **ppuStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 == 0) {
    ppuVar21 = param_2;
    uVar20 = param_3;
    func_0x00010a0fda30();
  }
  else {
    ppuStack_f8 = (undefined8 **)param_2[9];
    ppuStack_100 = (undefined8 **)param_2[8];
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&ppuStack_100);
    puVar15 = (undefined8 *)((ulong)&ppuStack_100 | 8);
    pppuVar14 = &ppuStack_100;
    if (param_4 != 0) {
      puVar15 = (undefined8 *)(param_4 + 0x28);
      pppuVar14 = (undefined8 ***)(param_4 + 0x20);
    }
    uVar20 = *puVar15;
    ppuVar21 = *pppuVar14;
  }
  ppuVar22 = (undefined8 **)param_2[0x2e];
  FUN_10a3dd220(ppuVar22);
  ppuVar7 = (undefined **)ppuVar22;
  FUN_10a579548(ppuVar22,ppuVar21,uVar20);
  ppuVar21 = (undefined8 **)0x28;
  ppuStack_180 = (undefined8 **)ppuVar7;
  __Znwm();
  ppuVar8 = ppuVar21 + 1;
  *ppuVar8 = (undefined8 *)0x0;
  *ppuVar21 = &PTR_FUN_110c01cc0;
  ppuVar21[2] = (undefined8 *)0x0;
  ppuVar21[3] = ppuVar7;
  ppuVar21[4] = (undefined8 *)FUN_10a3df8cc;
  ppuStack_178 = ppuVar21;
  if ((undefined8 **)ppuVar7 != (undefined8 **)0x0) {
    if ((undefined8 *)ppuVar7[6] == (undefined8 *)0x0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
        if (bVar6) {
          *ppuVar8 = (undefined8 *)((long)*ppuVar8 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      ppuVar10 = ppuVar21 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
        if (bVar6) {
          *ppuVar10 = (undefined8 *)((long)*ppuVar10 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      ppuVar7[5] = (undefined *)ppuVar7;
      ppuVar7[6] = (undefined *)ppuVar21;
    }
    else {
      if (*(long *)((long)ppuVar7[6] + 8) != -1) goto LAB_10a60b750;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
        if (bVar6) {
          *ppuVar8 = (undefined8 *)((long)*ppuVar8 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      ppuVar10 = ppuVar21 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
        if (bVar6) {
          *ppuVar10 = (undefined8 *)((long)*ppuVar10 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      ppuVar7[5] = (undefined *)ppuVar7;
      ppuVar7[6] = (undefined *)ppuVar21;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      puVar15 = *ppuVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
      if (bVar6) {
        *ppuVar8 = (undefined8 *)((long)puVar15 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar15 == (undefined8 *)0x0) {
      (*(code *)(*ppuVar21)[2])(ppuVar21);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar21);
    }
  }
LAB_10a60b750:
  ppuVar8 = ppuStack_180;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (ppuStack_180 + 0x2a,param_2 + 0x2a);
  uVar1 = (*(ushort *)(param_2 + 0x30) >> 1 & 1) << 1;
  uVar2 = *(ushort *)(ppuVar8 + 0x30) & 0xfffc;
  *(ushort *)(ppuVar8 + 0x30) = uVar2 | *(ushort *)(ppuVar8 + 0x30) & 1 | uVar1;
  *(ushort *)(ppuVar8 + 0x30) = uVar2 | uVar1 | *(ushort *)(param_2 + 0x30) & 1;
  ppuStack_100 = ppuVar8;
  ppuStack_f8 = ppuStack_178;
  if (ppuStack_178 != (undefined8 **)0x0) {
    ppuVar8 = ppuStack_178 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
      if (bVar6) {
        *ppuVar8 = (undefined8 *)((long)*ppuVar8 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_10a3c7ce8(param_3,&ppuStack_100);
  ppuVar8 = ppuStack_f8;
  if (ppuStack_f8 != (undefined8 **)0x0) {
    ppuVar10 = ppuStack_f8 + 1;
    do {
      puVar15 = *ppuVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
      if (bVar6) {
        *ppuVar10 = (undefined8 *)((long)puVar15 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar15 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_f8)[2])(ppuStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
    }
  }
  ppuVar10 = ppuStack_180;
  ppuVar8 = param_2;
  (*(code *)(*param_2)[0x25])(param_2);
  (*(code *)(*ppuVar10)[0x26])(ppuVar10,ppuVar8);
  ppuVar8 = param_2;
  (*(code *)(*param_2)[0x25])(param_2);
  (*(code *)(*ppuVar10)[0x26])(ppuVar10,ppuVar8);
  FUN_10a3a3634(ppuVar10);
  puVar19 = param_2[0x9f];
  puVar15 = param_2[0x9e];
  puVar17 = param_2[0xa1];
  puVar18 = param_2[0xa0];
  *(undefined4 *)(ppuVar10 + 0xa2) = *(undefined4 *)(param_2 + 0xa2);
  ppuVar10[0xa1] = puVar17;
  ppuVar10[0xa0] = puVar18;
  ppuVar10[0x9f] = puVar19;
  ppuVar10[0x9e] = puVar15;
  ppuVar8 = param_2;
  (*(code *)(*param_2)[0x44])(param_2);
  (*(code *)(*ppuVar10)[0x45])(ppuVar10,ppuVar8);
  ppuVar8 = ppuVar10;
  (*(code *)(*ppuVar10)[0x46])();
  puVar15 = param_2[0x54];
  puVar19 = param_2[0x55];
  if (puVar15 != puVar19) {
    ppuVar7 = &PTR_DAT_110bb27b8;
    puStack_1e0 = param_1;
    puStack_1d8 = puVar19;
    do {
      FUN_10ab45900(&puStack_150,*puVar15,0);
      ppuStack_188 = ppuStack_148;
      puStack_190 = puStack_150;
      if (ppuStack_148 != (undefined8 **)0x0) {
        ppuVar21 = ppuStack_148 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
          if (bVar6) {
            *ppuVar21 = (undefined8 *)((long)*ppuVar21 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      FUN_10a0d4b14(ppuStack_180,&puStack_190);
      ppuVar21 = ppuStack_188;
      if (ppuStack_188 != (undefined8 **)0x0) {
        ppuVar8 = ppuStack_188 + 1;
        do {
          puVar18 = *ppuVar8;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
          if (bVar6) {
            *ppuVar8 = (undefined8 *)((long)puVar18 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar18 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_188)[2])(ppuStack_188);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar21);
        }
      }
      if (((long *)puStack_150[0x45] != (long *)puStack_150[0x46]) &&
         (lVar16 = *(long *)puStack_150[0x45], lVar16 != 0)) {
        FUN_10a64a494(&puStack_1a8,lVar16 + 0x1e8);
        func_0x00010a1bd170(&ppuStack_100);
        puVar19 = puStack_1a8;
        while (puVar19 != auStack_1a0) {
          lVar16 = *(long *)(*(long *)(puVar19[8] + 0x188) + 0x268);
          if ((lVar16 != 0) &&
             (___dynamic_cast(lVar16,&PTR_DAT_110bb3788,&PTR_DAT_110bb27b8,0), lVar16 != 0)) {
            puVar18 = param_2[0x2e];
            ppuVar21 = (undefined8 **)0x410;
            __Znwm();
            ppuVar22 = ppuVar21 + 1;
            *ppuVar22 = (undefined8 *)0x0;
            ppuVar21[2] = (undefined8 *)0x0;
            ppuVar8 = ppuVar21 + 3;
            *ppuVar21 = &PTR_FUN_110c01d10;
            FUN_10a1e7c3c(ppuVar8,puVar18,lVar16 + 0x2b0);
            puVar17 = ppuVar21[0xc];
            ppuStack_1b8 = ppuVar8;
            ppuStack_1b0 = ppuVar21;
            if (puVar17 == (undefined8 *)0x0) {
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppuVar22,0x10);
                if (bVar6) {
                  *ppuVar22 = (undefined8 *)((long)*ppuVar22 + 1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              ppuVar10 = ppuVar21 + 2;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
                if (bVar6) {
                  *ppuVar10 = (undefined8 *)((long)*ppuVar10 + 1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              ppuVar21[0xb] = ppuVar8;
              ppuVar21[0xc] = ppuVar21;
LAB_10a60ba38:
              do {
                puVar17 = *ppuVar22;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppuVar22,0x10);
                if (bVar6) {
                  *ppuVar22 = (undefined8 *)((long)puVar17 + -1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (puVar17 == (undefined8 *)0x0) {
                (*(code *)(*ppuVar21)[2])(ppuVar21);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar21);
              }
            }
            else if (puVar17[1] == -1) {
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppuVar22,0x10);
                if (bVar6) {
                  *ppuVar22 = (undefined8 *)((long)*ppuVar22 + 1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              ppuVar10 = ppuVar21 + 2;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
                if (bVar6) {
                  *ppuVar10 = (undefined8 *)((long)*ppuVar10 + 1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              ppuVar21[0xb] = ppuVar8;
              ppuVar21[0xc] = ppuVar21;
              __ZNSt3__119__shared_weak_count14__release_weakEv(puVar17);
              goto LAB_10a60ba38;
            }
            ppuVar8 = ppuStack_1b0;
            ppuVar21 = ppuStack_1b8;
            puVar17 = param_2[0x2e];
            if (puVar17 == (undefined8 *)0x0) {
              ppuVar22 = (undefined8 **)0x2c0;
              __Znwm();
              ppuVar22[1] = (undefined8 *)0x0;
              ppuVar22[2] = (undefined8 *)0x0;
              *ppuVar22 = &PTR_DAT_110b9fda0;
              ppuStack_b0 = ppuVar21;
              ppuStack_a8 = ppuVar8;
              if (ppuVar8 != (undefined8 **)0x0) {
                ppuVar21 = ppuVar8 + 1;
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
                  if (bVar6) {
                    *ppuVar21 = (undefined8 *)((long)*ppuVar21 + 1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              ppuVar21 = ppuVar22 + 3;
              ppuVar10 = ppuVar22;
              func_0x00010a0fda30();
              FUN_10ab6a888(ppuVar21,0,&ppuStack_b0,ppuVar10,puVar18);
              if (ppuVar8 != (undefined8 **)0x0) {
                ppuVar10 = ppuVar8 + 1;
                do {
                  puVar18 = *ppuVar10;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
                  if (bVar6) {
                    *ppuVar10 = (undefined8 *)((long)puVar18 + -1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (puVar18 == (undefined8 *)0x0) {
                  (*(code *)(*ppuVar8)[2])(ppuVar8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
                }
              }
              ppuStack_170 = ppuVar21;
              ppuStack_168 = ppuVar22;
              FUN_10a05b2a8(&ppuStack_170,ppuVar22 + 8,ppuVar21);
              FUN_10a05b04c(&ppuStack_160,&ppuStack_170);
              ppuVar21 = ppuStack_168;
              if (ppuStack_168 != (undefined8 **)0x0) {
                ppuVar8 = ppuStack_168 + 1;
                do {
                  puVar18 = *ppuVar8;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
                  if (bVar6) {
                    *ppuVar8 = (undefined8 *)((long)puVar18 + -1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (puVar18 == (undefined8 *)0x0) {
                  (*(code *)(*ppuStack_168)[2])(ppuStack_168);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar21);
                }
              }
              if (ppuStack_158 == (undefined8 **)0x0) {
                ppuStack_f8 = (undefined8 **)0x0;
              }
              else {
                ppuVar21 = ppuStack_158 + 1;
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
                  if (bVar6) {
                    *ppuVar21 = (undefined8 *)((long)*ppuVar21 + 1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                ppuStack_f8 = ppuStack_158;
                if (ppuStack_158 != (undefined8 **)0x0) {
                  ppuVar21 = ppuStack_158 + 1;
                  do {
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
                    if (bVar6) {
                      *ppuVar21 = (undefined8 *)((long)*ppuVar21 + 1);
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                }
              }
              ppuStack_100 = ppuStack_160;
              uStack_f0 = 0x10a64a8b0;
              ppuStack_e8 = &PTR_DAT_110c01d50;
              ppuStack_e0 = ppuStack_160;
              ppuStack_d8 = ppuStack_158;
              uStack_a0 = 0;
              uStack_98 = 0;
              ppuStack_b0 = (undefined8 **)&UNK_1053a6a3c;
              ppuStack_a8 = (undefined8 **)&PTR_DAT_110ae9180;
              FUN_10a044790(&ppuStack_b0);
              (*(code *)*ppuStack_a8)(&ppuStack_a8);
              ppuVar21 = ppuStack_158;
              if (ppuStack_158 != (undefined8 **)0x0) {
                ppuVar8 = ppuStack_158 + 1;
                do {
                  puVar18 = *ppuVar8;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
                  if (bVar6) {
                    *ppuVar8 = (undefined8 *)((long)puVar18 + -1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (puVar18 == (undefined8 *)0x0) {
                  (*(code *)(*ppuStack_158)[2])(ppuStack_158);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar21);
                }
              }
              ppuStack_1c8 = ppuStack_f8;
              ppuStack_1d0 = ppuStack_100;
              if (ppuStack_f8 != (undefined8 **)0x0) {
                ppuVar21 = ppuStack_f8 + 1;
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
                  if (bVar6) {
                    *ppuVar21 = (undefined8 *)((long)*ppuVar21 + 1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              FUN_10a044790(&uStack_f0);
              (*(code *)*ppuStack_e8)(&ppuStack_e8);
              if (ppuStack_f8 != (undefined8 **)0x0) {
                ppuVar21 = ppuStack_f8 + 1;
                do {
                  puVar18 = *ppuVar21;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
                  if (bVar6) {
                    *ppuVar21 = (undefined8 *)((long)puVar18 + -1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  ppuVar8 = ppuStack_f8;
                } while (cVar5 != '\0');
                goto LAB_10a60be94;
              }
            }
            else {
              ppuStack_170 = (undefined8 **)puVar17[0x10b];
              ppuStack_168 = (undefined8 **)puVar17[0x10c];
              if (ppuStack_168 != (undefined8 **)0x0) {
                ppuVar22 = ppuStack_168 + 1;
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(ppuVar22,0x10);
                  if (bVar6) {
                    *ppuVar22 = (undefined8 *)((long)*ppuVar22 + 1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              uVar20 = 0x2a8;
              __Znwm(0x2a8);
              ppuStack_100 = ppuVar21;
              ppuStack_f8 = ppuVar8;
              if (ppuVar8 != (undefined8 **)0x0) {
                ppuVar21 = ppuVar8 + 1;
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
                  if (bVar6) {
                    *ppuVar21 = (undefined8 *)((long)*ppuVar21 + 1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              uVar9 = uVar20;
              func_0x00010a0fda30();
              FUN_10ab6a888(uVar20,puVar17,&ppuStack_100,uVar9,puVar18);
              if (ppuVar8 != (undefined8 **)0x0) {
                ppuVar21 = ppuVar8 + 1;
                do {
                  puVar18 = *ppuVar21;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
                  if (bVar6) {
                    *ppuVar21 = (undefined8 *)((long)puVar18 + -1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (puVar18 == (undefined8 *)0x0) {
                  (*(code *)(*ppuVar8)[2])(ppuVar8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
                }
              }
              ppuVar8 = ppuStack_168;
              ppuVar21 = ppuStack_170;
              ppuStack_160 = ppuStack_170;
              ppuStack_158 = ppuStack_168;
              if (ppuStack_168 != (undefined8 **)0x0) {
                ppuVar22 = ppuStack_168 + 1;
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(ppuVar22,0x10);
                  if (bVar6) {
                    *ppuVar22 = (undefined8 *)((long)*ppuVar22 + 1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                ppuVar22 = ppuStack_168 + 2;
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(ppuVar22,0x10);
                  if (bVar6) {
                    *ppuVar22 = (undefined8 *)((long)*ppuVar22 + 1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(ppuVar22,0x10);
                  if (bVar6) {
                    *ppuVar22 = (undefined8 *)((long)*ppuVar22 + 1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_168);
              }
              ppuStack_100 = ppuVar21;
              ppuStack_f8 = ppuVar8;
              FUN_10a05b208(&ppuStack_b0,uVar20,&ppuStack_100);
              FUN_10a05b04c(&ppuStack_1d0);
              ppuVar21 = ppuStack_a8;
              if (ppuStack_a8 != (undefined8 **)0x0) {
                ppuVar8 = ppuStack_a8 + 1;
                do {
                  puVar18 = *ppuVar8;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
                  if (bVar6) {
                    *ppuVar8 = (undefined8 *)((long)puVar18 + -1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (puVar18 == (undefined8 *)0x0) {
                  (*(code *)(*ppuStack_a8)[2])(ppuStack_a8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar21);
                }
              }
              if (ppuStack_f8 != (undefined8 **)0x0) {
                __ZNSt3__119__shared_weak_count14__release_weakEv();
              }
              ppuVar21 = ppuStack_158;
              if (ppuStack_158 != (undefined8 **)0x0) {
                ppuVar8 = ppuStack_158 + 1;
                do {
                  puVar18 = *ppuVar8;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
                  if (bVar6) {
                    *ppuVar8 = (undefined8 *)((long)puVar18 + -1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (puVar18 == (undefined8 *)0x0) {
                  (*(code *)(*ppuStack_158)[2])(ppuStack_158);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar21);
                }
              }
              if ((ppuStack_170 != (undefined8 **)0x0) && (ppuStack_1d0 != (undefined8 **)0x0)) {
                ppuStack_b0 = ppuStack_1d0;
                ppuStack_a8 = ppuStack_1c8;
                if (ppuStack_1c8 != (undefined8 **)0x0) {
                  ppuVar21 = ppuStack_1c8 + 1;
                  do {
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
                    if (bVar6) {
                      *ppuVar21 = (undefined8 *)((long)*ppuVar21 + 1);
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                }
                FUN_10aa88c30(ppuStack_170,&ppuStack_b0);
                ppuVar21 = ppuStack_a8;
                if (ppuStack_a8 != (undefined8 **)0x0) {
                  ppuVar8 = ppuStack_a8 + 1;
                  do {
                    puVar18 = *ppuVar8;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
                    if (bVar6) {
                      *ppuVar8 = (undefined8 *)((long)puVar18 + -1);
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (puVar18 == (undefined8 *)0x0) {
                    (*(code *)(*ppuStack_a8)[2])(ppuStack_a8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar21);
                  }
                }
              }
              if (ppuStack_168 != (undefined8 **)0x0) {
                ppuVar21 = ppuStack_168 + 1;
                do {
                  puVar18 = *ppuVar21;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
                  if (bVar6) {
                    *ppuVar21 = (undefined8 *)((long)puVar18 + -1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  ppuVar8 = ppuStack_168;
                } while (cVar5 != '\0');
LAB_10a60be94:
                if (puVar18 == (undefined8 *)0x0) {
                  (*(code *)(*ppuVar8)[2])(ppuVar8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
                }
              }
            }
            FUN_10a32f140(puVar19[8],&ppuStack_1d0);
            ppuVar21 = ppuStack_1c8;
            if (ppuStack_1c8 != (undefined8 **)0x0) {
              ppuVar8 = ppuStack_1c8 + 1;
              do {
                puVar18 = *ppuVar8;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
                if (bVar6) {
                  *ppuVar8 = (undefined8 *)((long)puVar18 + -1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (puVar18 == (undefined8 *)0x0) {
                (*(code *)(*ppuStack_1c8)[2])(ppuStack_1c8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar21);
              }
            }
            ppuVar21 = ppuStack_1b0;
            if (ppuStack_1b0 != (undefined8 **)0x0) {
              ppuVar8 = ppuStack_1b0 + 1;
              do {
                puVar18 = *ppuVar8;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
                if (bVar6) {
                  *ppuVar8 = (undefined8 *)((long)puVar18 + -1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (puVar18 == (undefined8 *)0x0) {
                (*(code *)(*ppuStack_1b0)[2])(ppuStack_1b0);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar21);
              }
            }
          }
          puVar18 = (undefined8 *)puVar19[1];
          puVar17 = puVar19;
          if ((undefined8 *)puVar19[1] == (undefined8 *)0x0) {
            do {
              puVar19 = (undefined8 *)puVar17[2];
              bVar6 = (undefined8 *)*puVar19 != puVar17;
              puVar17 = puVar19;
            } while (bVar6);
          }
          else {
            do {
              puVar19 = puVar18;
              puVar18 = (undefined8 *)*puVar19;
            } while ((undefined8 *)*puVar19 != (undefined8 *)0x0);
          }
        }
        func_0x00010a363354(&puStack_1a8,auStack_1a0[0]);
        puVar19 = puStack_1d8;
      }
      ppuVar22 = &puStack_150;
      FUN_10a044790(auStack_140);
      ppuVar8 = apuStack_138;
      (*(code *)*apuStack_138[0])();
      ppuVar21 = ppuStack_148;
      if (ppuStack_148 != (undefined8 **)0x0) {
        ppuVar10 = ppuStack_148 + 1;
        do {
          puVar18 = *ppuVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
          if (bVar6) {
            *ppuVar10 = (undefined8 *)((long)puVar18 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar18 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_148)[2])(ppuStack_148);
          ppuVar8 = ppuVar21;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      puVar15 = puVar15 + 2;
      ppuVar10 = ppuStack_180;
      param_1 = puStack_1e0;
    } while (puVar15 != puVar19);
  }
  *param_1 = ppuVar10;
  param_1[1] = ppuStack_178;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a0d4f28(&ppuStack_100);
  FUN_10a64a43c(&ppuStack_180);
  ppuVar11 = ppuVar8;
  __Unwind_Resume(ppuVar8);
  pcStack_1e8 = FUN_10a60c194;
  ppuStack_220 = ppuVar22;
  ppuStack_218 = ppuVar21;
  ppuStack_210 = (undefined8 **)ppuVar7;
  ppuStack_208 = ppuVar10;
  ppuStack_200 = ppuVar8;
  puStack_1f8 = puVar19;
  puStack_1f0 = &stack0xfffffffffffffff0;
  FUN_10a3c829c(&ppppuStack_238);
  uVar3 = uStack_230;
  if (-1 < (char)bStack_221) {
    uVar3 = (ulong)bStack_221;
  }
  FUN_10a003c90(appppuStack_288,uVar3 + 8,&ppppuStack_2a0);
  pppppuVar4 = (undefined8 *****)appppuStack_288[0];
  if (-1 < cStack_271) {
    pppppuVar4 = appppuStack_288;
  }
  if (uVar3 != 0) {
    pppppuVar12 = (undefined8 *****)ppppuStack_238;
    if (-1 < (char)bStack_221) {
      pppppuVar12 = &ppppuStack_238;
    }
    _memmove(pppppuVar4,pppppuVar12,uVar3);
  }
  *(undefined8 *)((long)pppppuVar4 + uVar3) = 0x203a657a6973202c;
  *(undefined1 *)((undefined8 *)((long)pppppuVar4 + uVar3) + 1) = 0;
  FUN_10a60a648(ppuVar11);
  __ZNSt3__19to_stringEj(&ppppuStack_2a0);
  pppppuVar4 = (undefined8 *****)ppppuStack_2a0;
  if (-1 < (char)bStack_289) {
    uStack_298 = (ulong)bStack_289;
    pppppuVar4 = &ppppuStack_2a0;
  }
  pppppuVar12 = appppuStack_288;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppuVar12,pppppuVar4,uStack_298);
  pppuStack_268 = pppppuVar12[1];
  pppuStack_270 = *pppppuVar12;
  pppuStack_260 = pppppuVar12[2];
  pppppuVar12[1] = (undefined8 ****)0x0;
  pppppuVar12[2] = (undefined8 ****)0x0;
  *pppppuVar12 = (undefined8 ****)0x0;
  ppppuVar13 = &pppuStack_270;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppuVar13,&UNK_10f669c98,8);
  ppuStack_248 = ppppuVar13[1];
  ppuStack_250 = *ppppuVar13;
  ppuStack_240 = ppppuVar13[2];
  ppppuVar13[1] = (undefined8 ***)0x0;
  ppppuVar13[2] = (undefined8 ***)0x0;
  *ppppuVar13 = (undefined8 ***)0x0;
  FUN_10a60a0a8(&ppppuStack_2b8,ppuVar11);
  pppppuVar4 = (undefined8 *****)ppppuStack_2b8;
  if (-1 < (char)bStack_2a1) {
    uStack_2b0 = (ulong)bStack_2a1;
    pppppuVar4 = &ppppuStack_2b8;
  }
  pppuVar14 = &ppuStack_250;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar14,pppppuVar4,uStack_2b0);
  ppuVar21 = *pppuVar14;
  extraout_x8[1] = pppuVar14[1];
  *extraout_x8 = ppuVar21;
  extraout_x8[2] = pppuVar14[2];
  pppuVar14[1] = (undefined8 **)0x0;
  pppuVar14[2] = (undefined8 **)0x0;
  *pppuVar14 = (undefined8 **)0x0;
  if ((char)bStack_2a1 < '\0') {
    __ZdlPv(ppppuStack_2b8);
  }
  if ((long)pppuStack_260 < 0) {
    __ZdlPv(pppuStack_270);
  }
  if ((char)bStack_289 < '\0') {
    __ZdlPv(ppppuStack_2a0);
  }
  if (cStack_271 < '\0') {
    __ZdlPv(appppuStack_288[0]);
  }
  if ((char)bStack_221 < '\0') {
    __ZdlPv(ppppuStack_238);
  }
  return;
}



/* Entry: 10a60c194; end: 10a60c3fb;  */

/* WARNING: Removing unreachable block (ram,0x00010a60c308) */

void FUN_10a60c194(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 **ppuStack_d8;
  ulong uStack_d0;
  byte bStack_c1;
  undefined8 **ppuStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined8 **appuStack_a8 [2];
  char cStack_91;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  FUN_10a3c829c(&ppuStack_58);
  uVar1 = uStack_50;
  if (-1 < (char)bStack_41) {
    uVar1 = (ulong)bStack_41;
  }
  FUN_10a003c90(appuStack_a8,uVar1 + 8,&ppuStack_c0);
  pppuVar2 = (undefined8 ***)appuStack_a8[0];
  if (-1 < cStack_91) {
    pppuVar2 = appuStack_a8;
  }
  if (uVar1 != 0) {
    pppuVar3 = (undefined8 ***)ppuStack_58;
    if (-1 < (char)bStack_41) {
      pppuVar3 = &ppuStack_58;
    }
    _memmove(pppuVar2,pppuVar3,uVar1);
  }
  *(undefined8 *)((long)pppuVar2 + uVar1) = 0x203a657a6973202c;
  *(undefined1 *)((undefined8 *)((long)pppuVar2 + uVar1) + 1) = 0;
  FUN_10a60a648(param_2);
  __ZNSt3__19to_stringEj(&ppuStack_c0);
  pppuVar2 = (undefined8 ***)ppuStack_c0;
  if (-1 < (char)bStack_a9) {
    uStack_b8 = (ulong)bStack_a9;
    pppuVar2 = &ppuStack_c0;
  }
  pppuVar3 = appuStack_a8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar3,pppuVar2,uStack_b8);
  puStack_88 = pppuVar3[1];
  puStack_90 = *pppuVar3;
  puStack_80 = pppuVar3[2];
  pppuVar3[1] = (undefined8 **)0x0;
  pppuVar3[2] = (undefined8 **)0x0;
  *pppuVar3 = (undefined8 **)0x0;
  ppuVar4 = &puStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar4,&UNK_10f669c98,8);
  uStack_68 = ppuVar4[1];
  uStack_70 = *ppuVar4;
  uStack_60 = ppuVar4[2];
  ppuVar4[1] = (undefined8 *)0x0;
  ppuVar4[2] = (undefined8 *)0x0;
  *ppuVar4 = (undefined8 *)0x0;
  FUN_10a60a0a8(&ppuStack_d8,param_2);
  pppuVar2 = (undefined8 ***)ppuStack_d8;
  if (-1 < (char)bStack_c1) {
    uStack_d0 = (ulong)bStack_c1;
    pppuVar2 = &ppuStack_d8;
  }
  puVar5 = &uStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar5,pppuVar2,uStack_d0);
  uVar6 = *puVar5;
  param_1[1] = puVar5[1];
  *param_1 = uVar6;
  param_1[2] = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  if ((char)bStack_c1 < '\0') {
    __ZdlPv(ppuStack_d8);
  }
  if ((long)puStack_80 < 0) {
    __ZdlPv(puStack_90);
  }
  if ((char)bStack_a9 < '\0') {
    __ZdlPv(ppuStack_c0);
  }
  if (cStack_91 < '\0') {
    __ZdlPv(appuStack_a8[0]);
  }
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 10a60c3fc; end: 10a60c48b;  */

/* WARNING: Removing unreachable block (ram,0x00010a60c308) */

void FUN_10a60c3fc(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 **ppuStack_d8;
  ulong uStack_d0;
  byte bStack_c1;
  undefined8 **ppuStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined8 **appuStack_a8 [2];
  char cStack_91;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  FUN_10a3c829c(&ppuStack_58);
  uVar1 = uStack_50;
  if (-1 < (char)bStack_41) {
    uVar1 = (ulong)bStack_41;
  }
  FUN_10a003c90(appuStack_a8,uVar1 + 8,&ppuStack_c0);
  pppuVar2 = (undefined8 ***)appuStack_a8[0];
  if (-1 < cStack_91) {
    pppuVar2 = appuStack_a8;
  }
  if (uVar1 != 0) {
    pppuVar3 = (undefined8 ***)ppuStack_58;
    if (-1 < (char)bStack_41) {
      pppuVar3 = &ppuStack_58;
    }
    _memmove(pppuVar2,pppuVar3,uVar1);
  }
  *(undefined8 *)((long)pppuVar2 + uVar1) = 0x203a657a6973202c;
  *(undefined1 *)((undefined8 *)((long)pppuVar2 + uVar1) + 1) = 0;
  FUN_10a60a648(param_2 + -0x10);
  __ZNSt3__19to_stringEj(&ppuStack_c0);
  pppuVar2 = (undefined8 ***)ppuStack_c0;
  if (-1 < (char)bStack_a9) {
    uStack_b8 = (ulong)bStack_a9;
    pppuVar2 = &ppuStack_c0;
  }
  pppuVar3 = appuStack_a8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar3,pppuVar2,uStack_b8);
  puStack_88 = pppuVar3[1];
  puStack_90 = *pppuVar3;
  puStack_80 = pppuVar3[2];
  pppuVar3[1] = (undefined8 **)0x0;
  pppuVar3[2] = (undefined8 **)0x0;
  *pppuVar3 = (undefined8 **)0x0;
  ppuVar4 = &puStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar4,&UNK_10f669c98,8);
  uStack_68 = ppuVar4[1];
  uStack_70 = *ppuVar4;
  uStack_60 = ppuVar4[2];
  ppuVar4[1] = (undefined8 *)0x0;
  ppuVar4[2] = (undefined8 *)0x0;
  *ppuVar4 = (undefined8 *)0x0;
  FUN_10a60a0a8(&ppuStack_d8,param_2 + -0x10);
  pppuVar2 = (undefined8 ***)ppuStack_d8;
  if (-1 < (char)bStack_c1) {
    uStack_d0 = (ulong)bStack_c1;
    pppuVar2 = &ppuStack_d8;
  }
  puVar5 = &uStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar5,pppuVar2,uStack_d0);
  uVar6 = *puVar5;
  param_1[1] = puVar5[1];
  *param_1 = uVar6;
  param_1[2] = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  if ((char)bStack_c1 < '\0') {
    __ZdlPv(ppuStack_d8);
  }
  if ((long)puStack_80 < 0) {
    __ZdlPv(puStack_90);
  }
  if ((char)bStack_a9 < '\0') {
    __ZdlPv(ppuStack_c0);
  }
  if (cStack_91 < '\0') {
    __ZdlPv(appuStack_a8[0]);
  }
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 10a60c48c; end: 10a60c57b;  */

void FUN_10a60c48c(long param_1)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plStack_40;
  long *plStack_38;
  
  FUN_10a60a1b0(&plStack_40,param_1);
  if (plStack_40 != (long *)0x0) {
    uVar1 = *(undefined4 *)((long)plStack_40 + 0x2cc);
    plVar4 = plStack_40;
    (**(code **)(*plStack_40 + 0xb0))(plStack_40);
    plVar5 = plStack_40;
    (**(code **)(*plStack_40 + 0xb8))(plStack_40);
    func_0x00010a60c420(param_1 + 0x4f0,param_1 + 0x538,plStack_40 + 0x72,uVar1,plVar4,plVar5);
  }
  FUN_10a3a4528(param_1);
  if (plStack_38 != (long *)0x0) {
    plVar4 = plStack_38 + 1;
    do {
      lVar6 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_38);
      return;
    }
  }
  return;
}



/* Entry: 10a60c57c; end: 10a60c603;  */

void FUN_10a60c57c(long *param_1)

{
  FUN_10a66ac20();
  FUN_10a3a3634(param_1);
  (**(code **)(*param_1 + 0x230))(param_1);
  *(undefined1 *)((long)param_1 + 0x4f2) = 3;
  return;
}



/* Entry: 10a60c604; end: 10a60c607;  */

void FUN_10a60c604(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  func_0x00010a004e5c(param_1 + 0xb7);
  plVar2 = (long *)param_1[0xb6];
  param_1[0xb6] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a60eb20(param_1 + 0xb1);
  if (param_1[0xae] != 0) {
    param_1[0xaf] = param_1[0xae];
    __ZdlPv();
  }
  if (param_1[0xab] != 0) {
    param_1[0xac] = param_1[0xab];
    __ZdlPv();
  }
  if (param_1[0xa8] != 0) {
    param_1[0xa9] = param_1[0xa8];
    __ZdlPv();
  }
  plVar2 = (long *)param_1[0xa7];
  param_1[0xa7] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a3a75a8(param_1 + 0xa4);
  param_1[0x9e] = &PTR_DAT_110bfcdd8;
  param_1[0xb9] = &PTR_FUN_110bfce50;
  func_0x00010a004e5c(param_1 + 0xa1);
  func_0x00010a004e04(param_1 + 0x9f);
  *param_1 = &PTR_FUN_110bfc6f8;
  param_1[2] = &PTR_DAT_110bd5880;
  param_1[7] = &PTR_DAT_110bd58d8;
  param_1[0xd] = &PTR_DAT_110bd58f8;
  param_1[0x16] = &PTR_DAT_110bd5968;
  param_1[0xb9] = &PTR_DAT_110bfc958;
  param_1[0x17] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x9c);
  func_0x00010a004e5c(param_1 + 0x9a);
  param_1[0x72] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x90;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x8d;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x86;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x83;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x7e);
  puStack_28 = param_1 + 0x78;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x75;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[0x71];
  param_1[0x71] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[99] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x6c);
  FUN_10a44a358(param_1 + 0x65);
  plVar2 = (long *)param_1[0x62];
  param_1[0x62] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x60,0);
  FUN_10a4477fc(param_1 + 0x5e);
  func_0x00010a4477a4(param_1 + 0x5c);
  func_0x00010a4476d0(param_1 + 0x57);
  FUN_10a44763c(param_1 + 0x54);
  if (param_1[0x53] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x51] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x4c);
  if (param_1[0x4a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1,&PTR_PTR_110bf8aa8);
  return;
}



/* Entry: 10a60c608; end: 10a60c61b;  */

void FUN_10a60c608(void)

{
  FUN_10a60fa24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a60c61c; end: 10a60c633;  */

long FUN_10a60c61c(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a60c634; end: 10a60c683;  */

void FUN_10a60c634(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_48;
  undefined *puStack_18;
  
  if (*(uint *)(param_1 + 0xa6) != 0xffffffff) {
    puStack_18 = &UNK_10e4b16d3;
    (*(code *)(&PTR_FUN_110c00ca8)[*(uint *)(param_1 + 0xa6)])(&puStack_18,param_1 + 0xa4);
    return;
  }
  FUN_10a0d459c();
  func_0x00010a004e5c(param_1 + 0xb5);
  plVar2 = (long *)param_1[0xb4];
  param_1[0xb4] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a60eb20(param_1 + 0xaf);
  if (param_1[0xac] != 0) {
    param_1[0xad] = param_1[0xac];
    __ZdlPv();
  }
  if (param_1[0xa9] != 0) {
    param_1[0xaa] = param_1[0xa9];
    __ZdlPv();
  }
  if (param_1[0xa6] != 0) {
    param_1[0xa7] = param_1[0xa6];
    __ZdlPv();
  }
  plVar2 = (long *)param_1[0xa5];
  param_1[0xa5] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a3a75a8(param_1 + 0xa2);
  param_1[0x9c] = &PTR_DAT_110bfcdd8;
  param_1[0xb7] = &PTR_FUN_110bfce50;
  func_0x00010a004e5c(param_1 + 0x9f);
  func_0x00010a004e04(param_1 + 0x9d);
  param_1[-2] = &PTR_FUN_110bfc6f8;
  *param_1 = &PTR_DAT_110bd5880;
  param_1[5] = &PTR_DAT_110bd58d8;
  param_1[0xb] = &PTR_DAT_110bd58f8;
  param_1[0x14] = &PTR_DAT_110bd5968;
  param_1[0xb7] = &PTR_DAT_110bfc958;
  param_1[0x15] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x9a);
  func_0x00010a004e5c(param_1 + 0x98);
  param_1[0x70] = &PTR_FUN_110b9ec48;
  puStack_48 = param_1 + 0x8e;
  func_0x00010a04aad4(&puStack_48);
  puStack_48 = param_1 + 0x8b;
  func_0x00010a04aad4(&puStack_48);
  puStack_48 = param_1 + 0x84;
  func_0x00010a04aad4(&puStack_48);
  puStack_48 = param_1 + 0x81;
  func_0x00010a04aad4(&puStack_48);
  FUN_10a0617bc(param_1 + 0x7c);
  puStack_48 = param_1 + 0x76;
  func_0x00010a04aad4(&puStack_48);
  puStack_48 = param_1 + 0x73;
  func_0x00010a04aad4(&puStack_48);
  lVar1 = param_1[0x6f];
  param_1[0x6f] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x61] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x6a);
  FUN_10a44a358(param_1 + 99);
  plVar2 = (long *)param_1[0x60];
  param_1[0x60] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x5e,0);
  FUN_10a4477fc(param_1 + 0x5c);
  func_0x00010a4477a4(param_1 + 0x5a);
  func_0x00010a4476d0(param_1 + 0x55);
  FUN_10a44763c(param_1 + 0x52);
  if (param_1[0x51] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x4a);
  if (param_1[0x48] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -2,&PTR_PTR_110bf8aa8);
  return;
}



/* Entry: 10a60c684; end: 10a60c68b;  */

void FUN_10a60c684(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  func_0x00010a004e5c(param_1 + 0xb5);
  plVar2 = (long *)param_1[0xb4];
  param_1[0xb4] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a60eb20(param_1 + 0xaf);
  if (param_1[0xac] != 0) {
    param_1[0xad] = param_1[0xac];
    __ZdlPv();
  }
  if (param_1[0xa9] != 0) {
    param_1[0xaa] = param_1[0xa9];
    __ZdlPv();
  }
  if (param_1[0xa6] != 0) {
    param_1[0xa7] = param_1[0xa6];
    __ZdlPv();
  }
  plVar2 = (long *)param_1[0xa5];
  param_1[0xa5] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a3a75a8(param_1 + 0xa2);
  param_1[0x9c] = &PTR_DAT_110bfcdd8;
  param_1[0xb7] = &PTR_FUN_110bfce50;
  func_0x00010a004e5c(param_1 + 0x9f);
  func_0x00010a004e04(param_1 + 0x9d);
  param_1[-2] = &PTR_FUN_110bfc6f8;
  *param_1 = &PTR_DAT_110bd5880;
  param_1[5] = &PTR_DAT_110bd58d8;
  param_1[0xb] = &PTR_DAT_110bd58f8;
  param_1[0x14] = &PTR_DAT_110bd5968;
  param_1[0xb7] = &PTR_DAT_110bfc958;
  param_1[0x15] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x9a);
  func_0x00010a004e5c(param_1 + 0x98);
  param_1[0x70] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x8e;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x8b;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x84;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x81;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x7c);
  puStack_28 = param_1 + 0x76;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x73;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[0x6f];
  param_1[0x6f] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x61] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x6a);
  FUN_10a44a358(param_1 + 99);
  plVar2 = (long *)param_1[0x60];
  param_1[0x60] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x5e,0);
  FUN_10a4477fc(param_1 + 0x5c);
  func_0x00010a4477a4(param_1 + 0x5a);
  func_0x00010a4476d0(param_1 + 0x55);
  FUN_10a44763c(param_1 + 0x52);
  if (param_1[0x51] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x4a);
  if (param_1[0x48] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -2,&PTR_PTR_110bf8aa8);
  return;
}



/* Entry: 10a60c68c; end: 10a60c6a3;  */

void FUN_10a60c68c(long param_1)

{
  FUN_10a60fa24(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a60c6a4; end: 10a60c6ab;  */

void FUN_10a60c6a4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  func_0x00010a004e5c(param_1 + 0xb0);
  plVar2 = (long *)param_1[0xaf];
  param_1[0xaf] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a60eb20(param_1 + 0xaa);
  if (param_1[0xa7] != 0) {
    param_1[0xa8] = param_1[0xa7];
    __ZdlPv();
  }
  if (param_1[0xa4] != 0) {
    param_1[0xa5] = param_1[0xa4];
    __ZdlPv();
  }
  if (param_1[0xa1] != 0) {
    param_1[0xa2] = param_1[0xa1];
    __ZdlPv();
  }
  plVar2 = (long *)param_1[0xa0];
  param_1[0xa0] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a3a75a8(param_1 + 0x9d);
  param_1[0x97] = &PTR_DAT_110bfcdd8;
  param_1[0xb2] = &PTR_FUN_110bfce50;
  func_0x00010a004e5c(param_1 + 0x9a);
  func_0x00010a004e04(param_1 + 0x98);
  param_1[-7] = &PTR_FUN_110bfc6f8;
  param_1[-5] = &PTR_DAT_110bd5880;
  *param_1 = &PTR_DAT_110bd58d8;
  param_1[6] = &PTR_DAT_110bd58f8;
  param_1[0xf] = &PTR_DAT_110bd5968;
  param_1[0xb2] = &PTR_DAT_110bfc958;
  param_1[0x10] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x95);
  func_0x00010a004e5c(param_1 + 0x93);
  param_1[0x6b] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x89;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x86;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x7f;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x7c;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x77);
  puStack_28 = param_1 + 0x71;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x6e;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[0x6a];
  param_1[0x6a] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x5c] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x65);
  FUN_10a44a358(param_1 + 0x5e);
  plVar2 = (long *)param_1[0x5b];
  param_1[0x5b] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x59,0);
  FUN_10a4477fc(param_1 + 0x57);
  func_0x00010a4477a4(param_1 + 0x55);
  func_0x00010a4476d0(param_1 + 0x50);
  FUN_10a44763c(param_1 + 0x4d);
  if (param_1[0x4c] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x48] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x45);
  if (param_1[0x43] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -7,&PTR_PTR_110bf8aa8);
  return;
}



/* Entry: 10a60c6ac; end: 10a60c6c3;  */

void FUN_10a60c6ac(long param_1)

{
  FUN_10a60fa24(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a60c6c4; end: 10a60c6cb;  */

void FUN_10a60c6c4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  func_0x00010a004e5c(param_1 + 0xaa);
  plVar2 = (long *)param_1[0xa9];
  param_1[0xa9] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a60eb20(param_1 + 0xa4);
  if (param_1[0xa1] != 0) {
    param_1[0xa2] = param_1[0xa1];
    __ZdlPv();
  }
  if (param_1[0x9e] != 0) {
    param_1[0x9f] = param_1[0x9e];
    __ZdlPv();
  }
  if (param_1[0x9b] != 0) {
    param_1[0x9c] = param_1[0x9b];
    __ZdlPv();
  }
  plVar2 = (long *)param_1[0x9a];
  param_1[0x9a] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a3a75a8(param_1 + 0x97);
  param_1[0x91] = &PTR_DAT_110bfcdd8;
  param_1[0xac] = &PTR_FUN_110bfce50;
  func_0x00010a004e5c(param_1 + 0x94);
  func_0x00010a004e04(param_1 + 0x92);
  param_1[-0xd] = &PTR_FUN_110bfc6f8;
  param_1[-0xb] = &PTR_DAT_110bd5880;
  param_1[-6] = &PTR_DAT_110bd58d8;
  *param_1 = &PTR_DAT_110bd58f8;
  param_1[9] = &PTR_DAT_110bd5968;
  param_1[0xac] = &PTR_DAT_110bfc958;
  param_1[10] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x8f);
  func_0x00010a004e5c(param_1 + 0x8d);
  param_1[0x65] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x83;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x80;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x79;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x76;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x71);
  puStack_28 = param_1 + 0x6b;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x68;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[100];
  param_1[100] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x56] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x5f);
  FUN_10a44a358(param_1 + 0x58);
  plVar2 = (long *)param_1[0x55];
  param_1[0x55] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x53,0);
  FUN_10a4477fc(param_1 + 0x51);
  func_0x00010a4477a4(param_1 + 0x4f);
  func_0x00010a4476d0(param_1 + 0x4a);
  FUN_10a44763c(param_1 + 0x47);
  if (param_1[0x46] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x44] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x42] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x3f);
  if (param_1[0x3d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -0xd,&PTR_PTR_110bf8aa8);
  return;
}



/* Entry: 10a60c6cc; end: 10a60c6e3;  */

void FUN_10a60c6cc(long param_1)

{
  FUN_10a60fa24(param_1 + -0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a60c6e4; end: 10a60c6eb;  */

void FUN_10a60c6e4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  func_0x00010a004e5c(param_1 + 0xa1);
  plVar2 = (long *)param_1[0xa0];
  param_1[0xa0] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a60eb20(param_1 + 0x9b);
  if (param_1[0x98] != 0) {
    param_1[0x99] = param_1[0x98];
    __ZdlPv();
  }
  if (param_1[0x95] != 0) {
    param_1[0x96] = param_1[0x95];
    __ZdlPv();
  }
  if (param_1[0x92] != 0) {
    param_1[0x93] = param_1[0x92];
    __ZdlPv();
  }
  plVar2 = (long *)param_1[0x91];
  param_1[0x91] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a3a75a8(param_1 + 0x8e);
  param_1[0x88] = &PTR_DAT_110bfcdd8;
  param_1[0xa3] = &PTR_FUN_110bfce50;
  func_0x00010a004e5c(param_1 + 0x8b);
  func_0x00010a004e04(param_1 + 0x89);
  param_1[-0x16] = &PTR_FUN_110bfc6f8;
  param_1[-0x14] = &PTR_DAT_110bd5880;
  param_1[-0xf] = &PTR_DAT_110bd58d8;
  param_1[-9] = &PTR_DAT_110bd58f8;
  *param_1 = &PTR_DAT_110bd5968;
  param_1[0xa3] = &PTR_DAT_110bfc958;
  param_1[1] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x86);
  func_0x00010a004e5c(param_1 + 0x84);
  param_1[0x5c] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x7a;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x77;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x70;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x6d;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x68);
  puStack_28 = param_1 + 0x62;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x5f;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[0x5b];
  param_1[0x5b] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x4d] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x56);
  FUN_10a44a358(param_1 + 0x4f);
  plVar2 = (long *)param_1[0x4c];
  param_1[0x4c] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x4a,0);
  FUN_10a4477fc(param_1 + 0x48);
  func_0x00010a4477a4(param_1 + 0x46);
  func_0x00010a4476d0(param_1 + 0x41);
  FUN_10a44763c(param_1 + 0x3e);
  if (param_1[0x3d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x3b] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x39] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x36);
  if (param_1[0x34] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -0x16,&PTR_PTR_110bf8aa8);
  return;
}



/* Entry: 10a60c6ec; end: 10a60c703;  */

void FUN_10a60c6ec(long param_1)

{
  FUN_10a60fa24(param_1 + -0xb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a60c704; end: 10a60c70b;  */

void FUN_10a60c704(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  func_0x00010a004e5c(param_1 + 0xa0);
  plVar2 = (long *)param_1[0x9f];
  param_1[0x9f] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a60eb20(param_1 + 0x9a);
  if (param_1[0x97] != 0) {
    param_1[0x98] = param_1[0x97];
    __ZdlPv();
  }
  if (param_1[0x94] != 0) {
    param_1[0x95] = param_1[0x94];
    __ZdlPv();
  }
  if (param_1[0x91] != 0) {
    param_1[0x92] = param_1[0x91];
    __ZdlPv();
  }
  plVar2 = (long *)param_1[0x90];
  param_1[0x90] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a3a75a8(param_1 + 0x8d);
  param_1[0x87] = &PTR_DAT_110bfcdd8;
  param_1[0xa2] = &PTR_FUN_110bfce50;
  func_0x00010a004e5c(param_1 + 0x8a);
  func_0x00010a004e04(param_1 + 0x88);
  param_1[-0x17] = &PTR_FUN_110bfc6f8;
  param_1[-0x15] = &PTR_DAT_110bd5880;
  param_1[-0x10] = &PTR_DAT_110bd58d8;
  param_1[-10] = &PTR_DAT_110bd58f8;
  param_1[-1] = &PTR_DAT_110bd5968;
  param_1[0xa2] = &PTR_DAT_110bfc958;
  *param_1 = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x85);
  func_0x00010a004e5c(param_1 + 0x83);
  param_1[0x5b] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x79;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x76;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x6f;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x6c;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x67);
  puStack_28 = param_1 + 0x61;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x5e;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[0x5a];
  param_1[0x5a] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x4c] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x55);
  FUN_10a44a358(param_1 + 0x4e);
  plVar2 = (long *)param_1[0x4b];
  param_1[0x4b] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x49,0);
  FUN_10a4477fc(param_1 + 0x47);
  func_0x00010a4477a4(param_1 + 0x45);
  func_0x00010a4476d0(param_1 + 0x40);
  FUN_10a44763c(param_1 + 0x3d);
  if (param_1[0x3c] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x3a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x38] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x35);
  if (param_1[0x33] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -0x17,&PTR_PTR_110bf8aa8);
  return;
}



/* Entry: 10a60c70c; end: 10a60c723;  */

void FUN_10a60c70c(long param_1)

{
  FUN_10a60fa24(param_1 + -0xb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a60c724; end: 10a60c72b;  */

void FUN_10a60c724(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  func_0x00010a004e5c(param_1 + 0x19);
  plVar2 = (long *)param_1[0x18];
  param_1[0x18] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a60eb20(param_1 + 0x13);
  if (param_1[0x10] != 0) {
    param_1[0x11] = param_1[0x10];
    __ZdlPv();
  }
  if (param_1[0xd] != 0) {
    param_1[0xe] = param_1[0xd];
    __ZdlPv();
  }
  if (param_1[10] != 0) {
    param_1[0xb] = param_1[10];
    __ZdlPv();
  }
  plVar2 = (long *)param_1[9];
  param_1[9] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a3a75a8(param_1 + 6);
  *param_1 = &PTR_DAT_110bfcdd8;
  param_1[0x1b] = &PTR_FUN_110bfce50;
  func_0x00010a004e5c(param_1 + 3);
  func_0x00010a004e04(param_1 + 1);
  param_1[-0x9e] = &PTR_FUN_110bfc6f8;
  param_1[-0x9c] = &PTR_DAT_110bd5880;
  param_1[-0x97] = &PTR_DAT_110bd58d8;
  param_1[-0x91] = &PTR_DAT_110bd58f8;
  param_1[-0x88] = &PTR_DAT_110bd5968;
  param_1[0x1b] = &PTR_DAT_110bfc958;
  param_1[-0x87] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + -2);
  func_0x00010a004e5c(param_1 + -4);
  param_1[-0x2c] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + -0xe;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + -0x11;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + -0x18;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + -0x1b;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + -0x20);
  puStack_28 = param_1 + -0x26;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + -0x29;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[-0x2d];
  param_1[-0x2d] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[-0x3b] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + -0x32);
  FUN_10a44a358(param_1 + -0x39);
  plVar2 = (long *)param_1[-0x3c];
  param_1[-0x3c] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + -0x3e,0);
  FUN_10a4477fc(param_1 + -0x40);
  func_0x00010a4477a4(param_1 + -0x42);
  func_0x00010a4476d0(param_1 + -0x47);
  FUN_10a44763c(param_1 + -0x4a);
  if (param_1[-0x4b] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[-0x4d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[-0x4f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + -0x52);
  if (param_1[-0x54] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -0x9e,&PTR_PTR_110bf8aa8);
  return;
}



/* Entry: 10a60c72c; end: 10a60c793;  */

void FUN_10a60c72c(long param_1)

{
  FUN_10a60fa24(param_1 + -0x4f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a60c794; end: 10a60c7a3;  */

void FUN_10a60c794(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puStack_28;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  func_0x00010a004e5c(puVar1 + 0xb7);
  plVar3 = (long *)puVar1[0xb6];
  puVar1[0xb6] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  FUN_10a60eb20(puVar1 + 0xb1);
  if (puVar1[0xae] != 0) {
    puVar1[0xaf] = puVar1[0xae];
    __ZdlPv();
  }
  if (puVar1[0xab] != 0) {
    puVar1[0xac] = puVar1[0xab];
    __ZdlPv();
  }
  if (puVar1[0xa8] != 0) {
    puVar1[0xa9] = puVar1[0xa8];
    __ZdlPv();
  }
  plVar3 = (long *)puVar1[0xa7];
  puVar1[0xa7] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  FUN_10a3a75a8(puVar1 + 0xa4);
  puVar1[0x9e] = &PTR_DAT_110bfcdd8;
  puVar1[0xb9] = &PTR_FUN_110bfce50;
  func_0x00010a004e5c(puVar1 + 0xa1);
  func_0x00010a004e04(puVar1 + 0x9f);
  *puVar1 = &PTR_FUN_110bfc6f8;
  puVar1[2] = &PTR_DAT_110bd5880;
  puVar1[7] = &PTR_DAT_110bd58d8;
  puVar1[0xd] = &PTR_DAT_110bd58f8;
  puVar1[0x16] = &PTR_DAT_110bd5968;
  puVar1[0xb9] = &PTR_DAT_110bfc958;
  puVar1[0x17] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(puVar1 + 0x9c);
  func_0x00010a004e5c(puVar1 + 0x9a);
  puVar1[0x72] = &PTR_FUN_110b9ec48;
  puStack_28 = puVar1 + 0x90;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x8d;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x86;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x83;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(puVar1 + 0x7e);
  puStack_28 = puVar1 + 0x78;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x75;
  func_0x00010a04aad4(&puStack_28);
  lVar2 = puVar1[0x71];
  puVar1[0x71] = 0;
  if (lVar2 != 0) {
    FUN_10a447854();
  }
  puVar1[99] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(puVar1 + 0x6c);
  FUN_10a44a358(puVar1 + 0x65);
  plVar3 = (long *)puVar1[0x62];
  puVar1[0x62] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  FUN_10a425f6c(puVar1 + 0x60,0);
  FUN_10a4477fc(puVar1 + 0x5e);
  func_0x00010a4477a4(puVar1 + 0x5c);
  func_0x00010a4476d0(puVar1 + 0x57);
  FUN_10a44763c(puVar1 + 0x54);
  if (puVar1[0x53] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (puVar1[0x51] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (puVar1[0x4f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(puVar1 + 0x4c);
  if (puVar1[0x4a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(puVar1,&PTR_PTR_110bf8aa8);
  return;
}



/* Entry: 10a60c7a4; end: 10a60c927;  */

void FUN_10a60c7a4(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a60fa24((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a60c928; end: 10a60c92f;  */

long FUN_10a60c928(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a60c930; end: 10a60d2e3;  */

void FUN_10a60c930(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puStack_28;
  
  puVar3 = param_1 + -2;
  *puVar3 = &PTR_DAT_110bf8c38;
  *param_1 = &PTR_FUN_110bf8e78;
  param_1[5] = &PTR_DAT_110bf8ed0;
  param_1[0xb] = &PTR_DAT_110bf8ef0;
  param_1[0xb0] = &PTR_DAT_110bf9018;
  param_1[0x14] = &PTR_DAT_110bf8f60;
  param_1[0x15] = &PTR_DAT_110bf8f90;
  param_1[0x9c] = &PTR_DAT_110bf8fc0;
  FUN_10a1449ec(param_1 + 0xae);
  FUN_10a613d08(param_1 + 0xac);
  func_0x00010a0d6180(param_1 + 0xa3);
  FUN_10a133db8(param_1 + 0xa1);
  param_1[0x9c] = &PTR_DAT_110bcfa30;
  if ((undefined8 *)param_1[0x9f] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x9f] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x9d);
  *puVar3 = &PTR_FUN_110bfd188;
  *param_1 = &PTR_DAT_110bd5880;
  param_1[5] = &PTR_DAT_110bd58d8;
  param_1[0xb] = &PTR_DAT_110bd58f8;
  param_1[0x14] = &PTR_DAT_110bd5968;
  param_1[0xb0] = &PTR_DAT_110bfd3e8;
  param_1[0x15] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x9a);
  func_0x00010a004e5c(param_1 + 0x98);
  param_1[0x70] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x8e;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x8b;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x84;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x81;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x7c);
  puStack_28 = param_1 + 0x76;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x73;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[0x6f];
  param_1[0x6f] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x61] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x6a);
  FUN_10a44a358(param_1 + 99);
  plVar2 = (long *)param_1[0x60];
  param_1[0x60] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x5e,0);
  FUN_10a4477fc(param_1 + 0x5c);
  func_0x00010a4477a4(param_1 + 0x5a);
  func_0x00010a4476d0(param_1 + 0x55);
  FUN_10a44763c(param_1 + 0x52);
  if (param_1[0x51] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x4a);
  if (param_1[0x48] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(puVar3,&PTR_PTR_110bf9068);
  return;
}



/* Entry: 10a60d2e4; end: 10a60d2ef;  */

long FUN_10a60d2e4(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a60d2f0; end: 10a60d303;  */

void FUN_10a60d2f0(void)

{
  func_0x00010a60fae8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a60d304; end: 10a60d313;  */

long FUN_10a60d304(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a60d314; end: 10a60d32b;  */

void FUN_10a60d314(long param_1)

{
  func_0x00010a60fae8(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a60d32c; end: 10a60d333;  */

void FUN_10a60d32c(long param_1)

{
  long lVar1;
  long *plVar2;
  long lStack_28;
  
  if (*(long *)(param_1 + 0x640) != 0) {
    *(long *)(param_1 + 0x648) = *(long *)(param_1 + 0x640);
    __ZdlPv();
  }
  func_0x00010a61bd58(*(undefined8 *)(param_1 + 0x620));
  lVar1 = *(long *)(param_1 + 0x610);
  *(undefined8 *)(param_1 + 0x610) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x00010a61bd20(param_1 + 0x5e8);
  func_0x00010a61bd20(param_1 + 0x5c0);
  func_0x00010a61bcd4(*(undefined8 *)(param_1 + 0x5a8));
  lVar1 = *(long *)(param_1 + 0x598);
  *(undefined8 *)(param_1 + 0x598) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  lVar1 = *(long *)(param_1 + 0x590);
  *(undefined8 *)(param_1 + 0x590) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  plVar2 = *(long **)(param_1 + 0x588);
  *(undefined8 *)(param_1 + 0x588) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  func_0x00010a1943a0(param_1 + 0x578);
  func_0x00010a61bc7c(param_1 + 0x550);
  FUN_10a0617bc(param_1 + 0x520);
  FUN_10a0617bc(param_1 + 0x510);
  func_0x00010a0d8dac(param_1 + 0x4e8);
  lStack_28 = param_1 + 0x4d0;
  func_0x00010a4aec24(&lStack_28);
  if (*(long *)(param_1 + 0x4c8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a420f70(param_1 + -0x38,&PTR_PTR_110bf9930);
  return;
}



/* Entry: 10a60d334; end: 10a60d34b;  */

void FUN_10a60d334(long param_1)

{
  func_0x00010a60fae8(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a60d34c; end: 10a60d353;  */

void FUN_10a60d34c(long param_1)

{
  long lVar1;
  long *plVar2;
  long lStack_28;
  
  if (*(long *)(param_1 + 0x610) != 0) {
    *(long *)(param_1 + 0x618) = *(long *)(param_1 + 0x610);
    __ZdlPv();
  }
  func_0x00010a61bd58(*(undefined8 *)(param_1 + 0x5f0));
  lVar1 = *(long *)(param_1 + 0x5e0);
  *(undefined8 *)(param_1 + 0x5e0) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x00010a61bd20(param_1 + 0x5b8);
  func_0x00010a61bd20(param_1 + 0x590);
  func_0x00010a61bcd4(*(undefined8 *)(param_1 + 0x578));
  lVar1 = *(long *)(param_1 + 0x568);
  *(undefined8 *)(param_1 + 0x568) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  lVar1 = *(long *)(param_1 + 0x560);
  *(undefined8 *)(param_1 + 0x560) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  plVar2 = *(long **)(param_1 + 0x558);
  *(undefined8 *)(param_1 + 0x558) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  func_0x00010a1943a0(param_1 + 0x548);
  func_0x00010a61bc7c(param_1 + 0x520);
  FUN_10a0617bc(param_1 + 0x4f0);
  FUN_10a0617bc(param_1 + 0x4e0);
  func_0x00010a0d8dac(param_1 + 0x4b8);
  lStack_28 = param_1 + 0x4a0;
  func_0x00010a4aec24(&lStack_28);
  if (*(long *)(param_1 + 0x498) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a420f70(param_1 + -0x68,&PTR_PTR_110bf9930);
  return;
}



/* Entry: 10a60d354; end: 10a60d36b;  */

void FUN_10a60d354(long param_1)

{
  func_0x00010a60fae8(param_1 + -0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a60d36c; end: 10a60d373;  */

void FUN_10a60d36c(long param_1)

{
  long lVar1;
  long *plVar2;
  long lStack_28;
  
  if (*(long *)(param_1 + 0x5c8) != 0) {
    *(long *)(param_1 + 0x5d0) = *(long *)(param_1 + 0x5c8);
    __ZdlPv();
  }
  func_0x00010a61bd58(*(undefined8 *)(param_1 + 0x5a8));
  lVar1 = *(long *)(param_1 + 0x598);
  *(undefined8 *)(param_1 + 0x598) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x00010a61bd20(param_1 + 0x570);
  func_0x00010a61bd20(param_1 + 0x548);
  func_0x00010a61bcd4(*(undefined8 *)(param_1 + 0x530));
  lVar1 = *(long *)(param_1 + 0x520);
  *(undefined8 *)(param_1 + 0x520) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  lVar1 = *(long *)(param_1 + 0x518);
  *(undefined8 *)(param_1 + 0x518) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  plVar2 = *(long **)(param_1 + 0x510);
  *(undefined8 *)(param_1 + 0x510) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  func_0x00010a1943a0(param_1 + 0x500);
  func_0x00010a61bc7c(param_1 + 0x4d8);
  FUN_10a0617bc(param_1 + 0x4a8);
  FUN_10a0617bc(param_1 + 0x498);
  func_0x00010a0d8dac(param_1 + 0x470);
  lStack_28 = param_1 + 0x458;
  func_0x00010a4aec24(&lStack_28);
  if (*(long *)(param_1 + 0x450) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a420f70(param_1 + -0xb0,&PTR_PTR_110bf9930);
  return;
}



/* Entry: 10a60d374; end: 10a60d38b;  */

void FUN_10a60d374(long param_1)

{
  func_0x00010a60fae8(param_1 + -0xb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a60d38c; end: 10a60d393;  */

void FUN_10a60d38c(long param_1)

{
  long lVar1;
  long *plVar2;
  long lStack_28;
  
  if (*(long *)(param_1 + 0x5c0) != 0) {
    *(long *)(param_1 + 0x5c8) = *(long *)(param_1 + 0x5c0);
    __ZdlPv();
  }
  func_0x00010a61bd58(*(undefined8 *)(param_1 + 0x5a0));
  lVar1 = *(long *)(param_1 + 0x590);
  *(undefined8 *)(param_1 + 0x590) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x00010a61bd20(param_1 + 0x568);
  func_0x00010a61bd20(param_1 + 0x540);
  func_0x00010a61bcd4(*(undefined8 *)(param_1 + 0x528));
  lVar1 = *(long *)(param_1 + 0x518);
  *(undefined8 *)(param_1 + 0x518) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  lVar1 = *(long *)(param_1 + 0x510);
  *(undefined8 *)(param_1 + 0x510) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  plVar2 = *(long **)(param_1 + 0x508);
  *(undefined8 *)(param_1 + 0x508) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  func_0x00010a1943a0(param_1 + 0x4f8);
  func_0x00010a61bc7c(param_1 + 0x4d0);
  FUN_10a0617bc(param_1 + 0x4a0);
  FUN_10a0617bc(param_1 + 0x490);
  func_0x00010a0d8dac(param_1 + 0x468);
  lStack_28 = param_1 + 0x450;
  func_0x00010a4aec24(&lStack_28);
  if (*(long *)(param_1 + 0x448) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a420f70(param_1 + -0xb8,&PTR_PTR_110bf9930);
  return;
}



/* Entry: 10a60d394; end: 10a60d3ab;  */

void FUN_10a60d394(long param_1)

{
  func_0x00010a60fae8(param_1 + -0xb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a60d3ac; end: 10a60d3bb;  */

void FUN_10a60d3ac(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_28;
  
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  if (*(long *)(lVar1 + 0x678) != 0) {
    *(long *)(lVar1 + 0x680) = *(long *)(lVar1 + 0x678);
    __ZdlPv();
  }
  func_0x00010a61bd58(*(undefined8 *)(lVar1 + 0x658));
  lVar2 = *(long *)(lVar1 + 0x648);
  *(undefined8 *)(lVar1 + 0x648) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  func_0x00010a61bd20(lVar1 + 0x620);
  func_0x00010a61bd20(lVar1 + 0x5f8);
  func_0x00010a61bcd4(*(undefined8 *)(lVar1 + 0x5e0));
  lVar2 = *(long *)(lVar1 + 0x5d0);
  *(undefined8 *)(lVar1 + 0x5d0) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  lVar2 = *(long *)(lVar1 + 0x5c8);
  *(undefined8 *)(lVar1 + 0x5c8) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar3 = *(long **)(lVar1 + 0x5c0);
  *(undefined8 *)(lVar1 + 0x5c0) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  func_0x00010a1943a0(lVar1 + 0x5b0);
  func_0x00010a61bc7c(lVar1 + 0x588);
  FUN_10a0617bc(lVar1 + 0x558);
  FUN_10a0617bc(lVar1 + 0x548);
  func_0x00010a0d8dac(lVar1 + 0x520);
  lStack_28 = lVar1 + 0x508;
  func_0x00010a4aec24(&lStack_28);
  if (*(long *)(lVar1 + 0x500) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a420f70(lVar1,&PTR_PTR_110bf9930);
  return;
}



/* Entry: 10a60d3bc; end: 10a60d3eb;  */

void FUN_10a60d3bc(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010a60fae8((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a60d3ec; end: 10a60d423;  */

long FUN_10a60d3ec(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a60d424; end: 10a60d473;  */

undefined ** FUN_10a60d424(long param_1)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined *puStack_18;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x228) + 200);
  if (uVar1 != 0xffffffff) {
    puStack_18 = &UNK_10e4b16d3;
    ppuVar2 = &puStack_18;
    (*(code *)(&PTR_FUN_110c00ca8)[uVar1])(ppuVar2,*(long *)(param_1 + 0x228) + 0xb8);
    return ppuVar2;
  }
  FUN_10a0d459c();
  return (undefined **)0xd88b8b8a073aaad7;
}



/* Entry: 10a60d474; end: 10a60d4bb;  */

undefined8 FUN_10a60d474(void)

{
  return 0xd88b8b8a073aaad7;
}



/* Entry: 10a60d4bc; end: 10a60d4d7;  */

void FUN_10a60d4bc(undefined8 param_1)

{
  FUN_10a3c59d8(param_1,&PTR_PTR_110bfac28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a60d4d8; end: 10a60d4ef;  */

long FUN_10a60d4d8(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a60d4f0; end: 10a60d50f;  */

void FUN_10a60d4f0(long param_1)

{
  FUN_10a3c59d8(param_1 + -0x10,&PTR_PTR_110bfac28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a60d510; end: 10a60d51f;  */

void FUN_10a60d510(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-7] = &PTR_FUN_110bfe3c8;
  param_1[-5] = &PTR_DAT_110bcfec8;
  *param_1 = &PTR_DAT_110bcff20;
  param_1[6] = &PTR_DAT_110bcff40;
  param_1[0xf] = &PTR_DAT_110bcffb0;
  param_1[0x37] = &PTR_DAT_110bfe4f8;
  param_1[0x10] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x2e);
  (**(code **)param_1[0x2f])(param_1 + 0x2f);
  func_0x00010a004e5c(param_1 + 0x2c);
  if (*(char *)((long)param_1 + 0x12f) < '\0') {
    __ZdlPv(param_1[0x23]);
  }
  param_1[0x10] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x10);
  lVar1 = param_1[0xd];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xe];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  lVar1 = param_1[0xb];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xc];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  lVar1 = param_1[9];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[10];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[9] = 0;
    param_1[10] = 0;
  }
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[8];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  puStack_28 = param_1 + 3;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -7);
  return;
}



/* Entry: 10a60d520; end: 10a60d53f;  */

void FUN_10a60d520(long param_1)

{
  FUN_10a3c59d8(param_1 + -0x38,&PTR_PTR_110bfac28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a60d540; end: 10a60d54f;  */

void FUN_10a60d540(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-0xd] = &PTR_FUN_110bfe3c8;
  param_1[-0xb] = &PTR_DAT_110bcfec8;
  param_1[-6] = &PTR_DAT_110bcff20;
  *param_1 = &PTR_DAT_110bcff40;
  param_1[9] = &PTR_DAT_110bcffb0;
  param_1[0x31] = &PTR_DAT_110bfe4f8;
  param_1[10] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x28);
  (**(code **)param_1[0x29])(param_1 + 0x29);
  func_0x00010a004e5c(param_1 + 0x26);
  if (*(char *)((long)param_1 + 0xff) < '\0') {
    __ZdlPv(param_1[0x1d]);
  }
  param_1[10] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 10);
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[8];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  lVar1 = param_1[5];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[6];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[4];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[2];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  puStack_28 = param_1 + -3;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -0xd);
  return;
}



/* Entry: 10a60d550; end: 10a60d56f;  */

void FUN_10a60d550(long param_1)

{
  FUN_10a3c59d8(param_1 + -0x68,&PTR_PTR_110bfac28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a60d570; end: 10a60d57f;  */

void FUN_10a60d570(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-0x16] = &PTR_FUN_110bfe3c8;
  param_1[-0x14] = &PTR_DAT_110bcfec8;
  param_1[-0xf] = &PTR_DAT_110bcff20;
  param_1[-9] = &PTR_DAT_110bcff40;
  *param_1 = &PTR_DAT_110bcffb0;
  param_1[0x28] = &PTR_DAT_110bfe4f8;
  param_1[1] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x1f);
  (**(code **)param_1[0x20])(param_1 + 0x20);
  func_0x00010a004e5c(param_1 + 0x1d);
  if (*(char *)((long)param_1 + 0xb7) < '\0') {
    __ZdlPv(param_1[0x14]);
  }
  param_1[1] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 1);
  lVar1 = param_1[-2];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-1];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-2] = 0;
    param_1[-1] = 0;
  }
  lVar1 = param_1[-4];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-3];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-4] = 0;
    param_1[-3] = 0;
  }
  lVar1 = param_1[-6];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-5];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-6] = 0;
    param_1[-5] = 0;
  }
  lVar1 = param_1[-8];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-7];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-8] = 0;
    param_1[-7] = 0;
  }
  puStack_28 = param_1 + -0xc;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -0x16);
  return;
}



/* Entry: 10a60d580; end: 10a60d59f;  */

void FUN_10a60d580(long param_1)

{
  FUN_10a3c59d8(param_1 + -0xb0,&PTR_PTR_110bfac28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a60d5a0; end: 10a60d5af;  */

void FUN_10a60d5a0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-0x17] = &PTR_FUN_110bfe3c8;
  param_1[-0x15] = &PTR_DAT_110bcfec8;
  param_1[-0x10] = &PTR_DAT_110bcff20;
  param_1[-10] = &PTR_DAT_110bcff40;
  param_1[-1] = &PTR_DAT_110bcffb0;
  param_1[0x27] = &PTR_DAT_110bfe4f8;
  *param_1 = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x1e);
  (**(code **)param_1[0x1f])(param_1 + 0x1f);
  func_0x00010a004e5c(param_1 + 0x1c);
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    __ZdlPv(param_1[0x13]);
  }
  *param_1 = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1);
  lVar1 = param_1[-3];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-2];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-3] = 0;
    param_1[-2] = 0;
  }
  lVar1 = param_1[-5];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-4];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-5] = 0;
    param_1[-4] = 0;
  }
  lVar1 = param_1[-7];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-6];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-7] = 0;
    param_1[-6] = 0;
  }
  lVar1 = param_1[-9];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-8];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-9] = 0;
    param_1[-8] = 0;
  }
  puStack_28 = param_1 + -0xd;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -0x17);
  return;
}



/* Entry: 10a60d5b0; end: 10a60d5cf;  */

void FUN_10a60d5b0(long param_1)

{
  FUN_10a3c59d8(param_1 + -0xb8,&PTR_PTR_110bfac28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a60d5d0; end: 10a60d5e7;  */

void FUN_10a60d5d0(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puStack_28;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_110bfe3c8;
  puVar1[2] = &PTR_DAT_110bcfec8;
  puVar1[7] = &PTR_DAT_110bcff20;
  puVar1[0xd] = &PTR_DAT_110bcff40;
  puVar1[0x16] = &PTR_DAT_110bcffb0;
  puVar1[0x3e] = &PTR_DAT_110bfe4f8;
  puVar1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(puVar1 + 0x35);
  (**(code **)puVar1[0x36])(puVar1 + 0x36);
  func_0x00010a004e5c(puVar1 + 0x33);
  if (*(char *)((long)puVar1 + 0x167) < '\0') {
    __ZdlPv(puVar1[0x2a]);
  }
  puVar1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(puVar1 + 0x17);
  lVar2 = puVar1[0x14];
  if (lVar2 != 0) {
    plVar3 = (long *)puVar1[0x15];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
  }
  lVar2 = puVar1[0x12];
  if (lVar2 != 0) {
    plVar3 = (long *)puVar1[0x13];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
  }
  lVar2 = puVar1[0x10];
  if (lVar2 != 0) {
    plVar3 = (long *)puVar1[0x11];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
  }
  lVar2 = puVar1[0xe];
  if (lVar2 != 0) {
    plVar3 = (long *)puVar1[0xf];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
  }
  puStack_28 = puVar1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(puVar1);
  return;
}



/* Entry: 10a60d5e8; end: 10a60d703;  */

void FUN_10a60d5e8(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a3c59d8((long)param_1 + lVar1,&PTR_PTR_110bfac28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a60d704; end: 10a60d713;  */

long FUN_10a60d704(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a60d714; end: 10a60dca3;  */

void FUN_10a60d714(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puStack_28;
  
  puVar3 = param_1 + -2;
  *puVar3 = &PTR_DAT_110bfac58;
  *param_1 = &PTR_FUN_110bfae88;
  param_1[5] = &PTR_DAT_110bfaee0;
  param_1[0xb] = &PTR_DAT_110bfaf00;
  param_1[0xa5] = &PTR_DAT_110bfb000;
  param_1[0x14] = &PTR_DAT_110bfaf70;
  param_1[0x15] = &PTR_DAT_110bfafa0;
  func_0x00010a1932f0(param_1 + 0xa3);
  func_0x00010a193298(param_1 + 0xa1);
  *puVar3 = &PTR_FUN_110bfe810;
  *param_1 = &PTR_DAT_110bd5880;
  param_1[5] = &PTR_DAT_110bd58d8;
  param_1[0xb] = &PTR_DAT_110bd58f8;
  param_1[0x14] = &PTR_DAT_110bd5968;
  param_1[0xa5] = &PTR_DAT_110bfea70;
  param_1[0x15] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x9a);
  func_0x00010a004e5c(param_1 + 0x98);
  param_1[0x70] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x8e;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x8b;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x84;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x81;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x7c);
  puStack_28 = param_1 + 0x76;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x73;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[0x6f];
  param_1[0x6f] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x61] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x6a);
  FUN_10a44a358(param_1 + 99);
  plVar2 = (long *)param_1[0x60];
  param_1[0x60] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x5e,0);
  FUN_10a4477fc(param_1 + 0x5c);
  func_0x00010a4477a4(param_1 + 0x5a);
  func_0x00010a4476d0(param_1 + 0x55);
  FUN_10a44763c(param_1 + 0x52);
  if (param_1[0x51] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x4a);
  if (param_1[0x48] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(puVar3,&PTR_PTR_110bfb050);
  return;
}



/* Entry: 10a60dca4; end: 10a60dcaf;  */

void FUN_10a60dca4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bff398;
  param_1[2] = &PTR_DAT_110bd5880;
  param_1[7] = &PTR_DAT_110bd58d8;
  param_1[0xd] = &PTR_DAT_110bd58f8;
  param_1[0x16] = &PTR_DAT_110bd5968;
  param_1[0x9e] = &PTR_DAT_110bff5f8;
  param_1[0x17] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x9c);
  func_0x00010a004e5c(param_1 + 0x9a);
  param_1[0x72] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x90;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x8d;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x86;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x83;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x7e);
  puStack_28 = param_1 + 0x78;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x75;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[0x71];
  param_1[0x71] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[99] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x6c);
  FUN_10a44a358(param_1 + 0x65);
  plVar2 = (long *)param_1[0x62];
  param_1[0x62] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x60,0);
  FUN_10a4477fc(param_1 + 0x5e);
  func_0x00010a4477a4(param_1 + 0x5c);
  func_0x00010a4476d0(param_1 + 0x57);
  FUN_10a44763c(param_1 + 0x54);
  if (param_1[0x53] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x51] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x4c);
  if (param_1[0x4a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1,&PTR_PTR_110bfb4c0);
  return;
}



/* Entry: 10a60dcb0; end: 10a60dccb;  */

void FUN_10a60dcb0(undefined8 param_1)

{
  FUN_10a420f70(param_1,&PTR_PTR_110bfb4b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a60dccc; end: 10a60dce3;  */

long FUN_10a60dccc(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a60dce4; end: 10a60dd03;  */

void FUN_10a60dce4(long param_1)

{
  FUN_10a420f70(param_1 + -0x10,&PTR_PTR_110bfb4b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a60dd04; end: 10a60dd13;  */

void FUN_10a60dd04(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-7] = &PTR_FUN_110bff398;
  param_1[-5] = &PTR_DAT_110bd5880;
  *param_1 = &PTR_DAT_110bd58d8;
  param_1[6] = &PTR_DAT_110bd58f8;
  param_1[0xf] = &PTR_DAT_110bd5968;
  param_1[0x97] = &PTR_DAT_110bff5f8;
  param_1[0x10] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x95);
  func_0x00010a004e5c(param_1 + 0x93);
  param_1[0x6b] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x89;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x86;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x7f;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x7c;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x77);
  puStack_28 = param_1 + 0x71;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x6e;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[0x6a];
  param_1[0x6a] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x5c] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x65);
  FUN_10a44a358(param_1 + 0x5e);
  plVar2 = (long *)param_1[0x5b];
  param_1[0x5b] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x59,0);
  FUN_10a4477fc(param_1 + 0x57);
  func_0x00010a4477a4(param_1 + 0x55);
  func_0x00010a4476d0(param_1 + 0x50);
  FUN_10a44763c(param_1 + 0x4d);
  if (param_1[0x4c] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x48] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x45);
  if (param_1[0x43] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -7,&PTR_PTR_110bfb4c0);
  return;
}



/* Entry: 10a60dd14; end: 10a60dd33;  */

void FUN_10a60dd14(long param_1)

{
  FUN_10a420f70(param_1 + -0x38,&PTR_PTR_110bfb4b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a60dd34; end: 10a60dd43;  */

void FUN_10a60dd34(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-0xd] = &PTR_FUN_110bff398;
  param_1[-0xb] = &PTR_DAT_110bd5880;
  param_1[-6] = &PTR_DAT_110bd58d8;
  *param_1 = &PTR_DAT_110bd58f8;
  param_1[9] = &PTR_DAT_110bd5968;
  param_1[0x91] = &PTR_DAT_110bff5f8;
  param_1[10] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x8f);
  func_0x00010a004e5c(param_1 + 0x8d);
  param_1[0x65] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x83;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x80;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x79;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x76;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x71);
  puStack_28 = param_1 + 0x6b;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x68;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[100];
  param_1[100] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x56] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x5f);
  FUN_10a44a358(param_1 + 0x58);
  plVar2 = (long *)param_1[0x55];
  param_1[0x55] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x53,0);
  FUN_10a4477fc(param_1 + 0x51);
  func_0x00010a4477a4(param_1 + 0x4f);
  func_0x00010a4476d0(param_1 + 0x4a);
  FUN_10a44763c(param_1 + 0x47);
  if (param_1[0x46] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x44] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x42] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x3f);
  if (param_1[0x3d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -0xd,&PTR_PTR_110bfb4c0);
  return;
}



/* Entry: 10a60dd44; end: 10a60dd63;  */

void FUN_10a60dd44(long param_1)

{
  FUN_10a420f70(param_1 + -0x68,&PTR_PTR_110bfb4b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a60dd64; end: 10a60dd73;  */

void FUN_10a60dd64(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-0x16] = &PTR_FUN_110bff398;
  param_1[-0x14] = &PTR_DAT_110bd5880;
  param_1[-0xf] = &PTR_DAT_110bd58d8;
  param_1[-9] = &PTR_DAT_110bd58f8;
  *param_1 = &PTR_DAT_110bd5968;
  param_1[0x88] = &PTR_DAT_110bff5f8;
  param_1[1] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x86);
  func_0x00010a004e5c(param_1 + 0x84);
  param_1[0x5c] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x7a;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x77;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x70;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x6d;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x68);
  puStack_28 = param_1 + 0x62;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x5f;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[0x5b];
  param_1[0x5b] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x4d] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x56);
  FUN_10a44a358(param_1 + 0x4f);
  plVar2 = (long *)param_1[0x4c];
  param_1[0x4c] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x4a,0);
  FUN_10a4477fc(param_1 + 0x48);
  func_0x00010a4477a4(param_1 + 0x46);
  func_0x00010a4476d0(param_1 + 0x41);
  FUN_10a44763c(param_1 + 0x3e);
  if (param_1[0x3d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x3b] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x39] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x36);
  if (param_1[0x34] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -0x16,&PTR_PTR_110bfb4c0);
  return;
}



/* Entry: 10a60dd74; end: 10a60dd93;  */

void FUN_10a60dd74(long param_1)

{
  FUN_10a420f70(param_1 + -0xb0,&PTR_PTR_110bfb4b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a60dd94; end: 10a60dda3;  */

void FUN_10a60dd94(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-0x17] = &PTR_FUN_110bff398;
  param_1[-0x15] = &PTR_DAT_110bd5880;
  param_1[-0x10] = &PTR_DAT_110bd58d8;
  param_1[-10] = &PTR_DAT_110bd58f8;
  param_1[-1] = &PTR_DAT_110bd5968;
  param_1[0x87] = &PTR_DAT_110bff5f8;
  *param_1 = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x85);
  func_0x00010a004e5c(param_1 + 0x83);
  param_1[0x5b] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x79;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x76;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x6f;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x6c;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x67);
  puStack_28 = param_1 + 0x61;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x5e;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[0x5a];
  param_1[0x5a] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x4c] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x55);
  FUN_10a44a358(param_1 + 0x4e);
  plVar2 = (long *)param_1[0x4b];
  param_1[0x4b] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x49,0);
  FUN_10a4477fc(param_1 + 0x47);
  func_0x00010a4477a4(param_1 + 0x45);
  func_0x00010a4476d0(param_1 + 0x40);
  FUN_10a44763c(param_1 + 0x3d);
  if (param_1[0x3c] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x3a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x38] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x35);
  if (param_1[0x33] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -0x17,&PTR_PTR_110bfb4c0);
  return;
}



/* Entry: 10a60dda4; end: 10a60ddc3;  */

void FUN_10a60dda4(long param_1)

{
  FUN_10a420f70(param_1 + -0xb8,&PTR_PTR_110bfb4b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a60ddc4; end: 10a60dddb;  */

void FUN_10a60ddc4(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puStack_28;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_110bff398;
  puVar1[2] = &PTR_DAT_110bd5880;
  puVar1[7] = &PTR_DAT_110bd58d8;
  puVar1[0xd] = &PTR_DAT_110bd58f8;
  puVar1[0x16] = &PTR_DAT_110bd5968;
  puVar1[0x9e] = &PTR_DAT_110bff5f8;
  puVar1[0x17] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(puVar1 + 0x9c);
  func_0x00010a004e5c(puVar1 + 0x9a);
  puVar1[0x72] = &PTR_FUN_110b9ec48;
  puStack_28 = puVar1 + 0x90;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x8d;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x86;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x83;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(puVar1 + 0x7e);
  puStack_28 = puVar1 + 0x78;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x75;
  func_0x00010a04aad4(&puStack_28);
  lVar2 = puVar1[0x71];
  puVar1[0x71] = 0;
  if (lVar2 != 0) {
    FUN_10a447854();
  }
  puVar1[99] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(puVar1 + 0x6c);
  FUN_10a44a358(puVar1 + 0x65);
  plVar3 = (long *)puVar1[0x62];
  puVar1[0x62] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  FUN_10a425f6c(puVar1 + 0x60,0);
  FUN_10a4477fc(puVar1 + 0x5e);
  func_0x00010a4477a4(puVar1 + 0x5c);
  func_0x00010a4476d0(puVar1 + 0x57);
  FUN_10a44763c(puVar1 + 0x54);
  if (puVar1[0x53] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (puVar1[0x51] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (puVar1[0x4f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(puVar1 + 0x4c);
  if (puVar1[0x4a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(puVar1,&PTR_PTR_110bfb4c0);
  return;
}



/* Entry: 10a60dddc; end: 10a60de73;  */

void FUN_10a60dddc(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a420f70((long)param_1 + lVar1,&PTR_PTR_110bfb4b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a60de74; end: 10a60de77;  */

void FUN_10a60de74(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x5c8) != 0) {
    *(long *)(param_1 + 0x5d0) = *(long *)(param_1 + 0x5c8);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x5b0) != 0) {
    *(long *)(param_1 + 0x5b8) = *(long *)(param_1 + 0x5b0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x598) != 0) {
    *(long *)(param_1 + 0x5a0) = *(long *)(param_1 + 0x598);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x580) != 0) {
    *(long *)(param_1 + 0x588) = *(long *)(param_1 + 0x580);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x568) != 0) {
    *(long *)(param_1 + 0x570) = *(long *)(param_1 + 0x568);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x550) != 0) {
    *(long *)(param_1 + 0x558) = *(long *)(param_1 + 0x550);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0x538;
  func_0x00010a580ea0(&lStack_28);
  lStack_28 = param_1 + 0x520;
  FUN_10a580f68(&lStack_28);
  lStack_28 = param_1 + 0x508;
  FUN_10a581030(&lStack_28);
  if (*(long *)(param_1 + 0x4f0) != 0) {
    *(long *)(param_1 + 0x4f8) = *(long *)(param_1 + 0x4f0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x4d8) != 0) {
    *(long *)(param_1 + 0x4e0) = *(long *)(param_1 + 0x4d8);
    __ZdlPv();
  }
  func_0x00010a5810f8(param_1 + 0x4b0);
  if (*(long *)(param_1 + 0x498) != 0) {
    *(long *)(param_1 + 0x4a0) = *(long *)(param_1 + 0x498);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x480) != 0) {
    *(long *)(param_1 + 0x488) = *(long *)(param_1 + 0x480);
    __ZdlPv();
  }
  func_0x000107c28478(param_1 + 0x468,*(undefined8 *)(param_1 + 0x470));
  if (*(long *)(param_1 + 0x450) != 0) {
    *(long *)(param_1 + 0x458) = *(long *)(param_1 + 0x450);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x438) != 0) {
    *(long *)(param_1 + 0x440) = *(long *)(param_1 + 0x438);
    __ZdlPv();
  }
  FUN_10a044790(param_1 + 0x3d8);
  (*(code *)**(undefined8 **)(param_1 + 0x3e0))(param_1 + 0x3e0);
  lStack_28 = param_1 + 0x3b8;
  FUN_10a0426d8(&lStack_28);
  func_0x00010a004e5c(param_1 + 0x3a0);
  lStack_28 = param_1 + 0x388;
  func_0x00010a581140(&lStack_28);
  if (*(long *)(param_1 + 0x380) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a5811c8(param_1 + 0x368);
  func_0x00010a581220(param_1 + 0x358);
  func_0x00010a581278(param_1 + 0x348);
  func_0x00010a5812d0(param_1 + 0x338);
  func_0x00010a581328(param_1 + 0x328);
  func_0x00010a581380(param_1 + 0x318);
  func_0x00010a5813d8(param_1 + 0x308);
  func_0x00010a581430(param_1 + 0x2f8);
  func_0x00010a581488(param_1 + 0x2e8);
  func_0x00010a5814e0(param_1 + 0x2d8);
  func_0x00010a581538(param_1 + 0x2c8);
  func_0x00010a581590(param_1 + 0x2b8);
  func_0x00010a5815e8(param_1 + 0x2a8);
  func_0x00010a581640(param_1 + 0x298);
  func_0x00010a581698(param_1 + 0x288);
  func_0x00010a5816f0(param_1 + 0x278);
  func_0x00010a581748(param_1 + 0x268);
  func_0x00010a5817a0(param_1 + 600);
  func_0x00010a5817f8(param_1 + 0x248);
  func_0x00010a581850(param_1 + 0x238);
  func_0x00010a5818a8(param_1 + 0x228);
  func_0x00010a581900(param_1 + 0x218);
  func_0x00010a581958(param_1 + 0x208);
  func_0x00010a5819b0(param_1 + 0x1f8);
  FUN_10a3c59d8(param_1,&PTR_PTR_110c020a8);
  return;
}



/* Entry: 10a60de78; end: 10a60de8b;  */

void FUN_10a60de78(void)

{
  func_0x00010a60fbd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a60de8c; end: 10a60decb;  */

long FUN_10a60de8c(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a60decc; end: 10a60dee3;  */

void FUN_10a60decc(long param_1)

{
  func_0x00010a60fbd8(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a60dee4; end: 10a60deeb;  */

void FUN_10a60dee4(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x590) != 0) {
    *(long *)(param_1 + 0x598) = *(long *)(param_1 + 0x590);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x578) != 0) {
    *(long *)(param_1 + 0x580) = *(long *)(param_1 + 0x578);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x560) != 0) {
    *(long *)(param_1 + 0x568) = *(long *)(param_1 + 0x560);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x548) != 0) {
    *(long *)(param_1 + 0x550) = *(long *)(param_1 + 0x548);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x530) != 0) {
    *(long *)(param_1 + 0x538) = *(long *)(param_1 + 0x530);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x518) != 0) {
    *(long *)(param_1 + 0x520) = *(long *)(param_1 + 0x518);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0x500;
  func_0x00010a580ea0(&lStack_28);
  lStack_28 = param_1 + 0x4e8;
  FUN_10a580f68(&lStack_28);
  lStack_28 = param_1 + 0x4d0;
  FUN_10a581030(&lStack_28);
  if (*(long *)(param_1 + 0x4b8) != 0) {
    *(long *)(param_1 + 0x4c0) = *(long *)(param_1 + 0x4b8);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x4a0) != 0) {
    *(long *)(param_1 + 0x4a8) = *(long *)(param_1 + 0x4a0);
    __ZdlPv();
  }
  func_0x00010a5810f8(param_1 + 0x478);
  if (*(long *)(param_1 + 0x460) != 0) {
    *(long *)(param_1 + 0x468) = *(long *)(param_1 + 0x460);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x448) != 0) {
    *(long *)(param_1 + 0x450) = *(long *)(param_1 + 0x448);
    __ZdlPv();
  }
  func_0x000107c28478(param_1 + 0x430,*(undefined8 *)(param_1 + 0x438));
  if (*(long *)(param_1 + 0x418) != 0) {
    *(long *)(param_1 + 0x420) = *(long *)(param_1 + 0x418);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x400) != 0) {
    *(long *)(param_1 + 0x408) = *(long *)(param_1 + 0x400);
    __ZdlPv();
  }
  FUN_10a044790(param_1 + 0x3a0);
  (*(code *)**(undefined8 **)(param_1 + 0x3a8))(param_1 + 0x3a8);
  lStack_28 = param_1 + 0x380;
  FUN_10a0426d8(&lStack_28);
  func_0x00010a004e5c(param_1 + 0x368);
  lStack_28 = param_1 + 0x350;
  func_0x00010a581140(&lStack_28);
  if (*(long *)(param_1 + 0x348) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a5811c8(param_1 + 0x330);
  func_0x00010a581220(param_1 + 800);
  func_0x00010a581278(param_1 + 0x310);
  func_0x00010a5812d0(param_1 + 0x300);
  func_0x00010a581328(param_1 + 0x2f0);
  func_0x00010a581380(param_1 + 0x2e0);
  func_0x00010a5813d8(param_1 + 0x2d0);
  func_0x00010a581430(param_1 + 0x2c0);
  func_0x00010a581488(param_1 + 0x2b0);
  func_0x00010a5814e0(param_1 + 0x2a0);
  func_0x00010a581538(param_1 + 0x290);
  func_0x00010a581590(param_1 + 0x280);
  func_0x00010a5815e8(param_1 + 0x270);
  func_0x00010a581640(param_1 + 0x260);
  func_0x00010a581698(param_1 + 0x250);
  func_0x00010a5816f0(param_1 + 0x240);
  func_0x00010a581748(param_1 + 0x230);
  func_0x00010a5817a0(param_1 + 0x220);
  func_0x00010a5817f8(param_1 + 0x210);
  func_0x00010a581850(param_1 + 0x200);
  func_0x00010a5818a8(param_1 + 0x1f0);
  func_0x00010a581900(param_1 + 0x1e0);
  func_0x00010a581958(param_1 + 0x1d0);
  func_0x00010a5819b0(param_1 + 0x1c0);
  FUN_10a3c59d8(param_1 + -0x38,&PTR_PTR_110c020a8);
  return;
}



/* Entry: 10a60deec; end: 10a60df03;  */

void FUN_10a60deec(long param_1)

{
  func_0x00010a60fbd8(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a60df04; end: 10a60df0b;  */

void FUN_10a60df04(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x560) != 0) {
    *(long *)(param_1 + 0x568) = *(long *)(param_1 + 0x560);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x548) != 0) {
    *(long *)(param_1 + 0x550) = *(long *)(param_1 + 0x548);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x530) != 0) {
    *(long *)(param_1 + 0x538) = *(long *)(param_1 + 0x530);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x518) != 0) {
    *(long *)(param_1 + 0x520) = *(long *)(param_1 + 0x518);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x500) != 0) {
    *(long *)(param_1 + 0x508) = *(long *)(param_1 + 0x500);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x4e8) != 0) {
    *(long *)(param_1 + 0x4f0) = *(long *)(param_1 + 0x4e8);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0x4d0;
  func_0x00010a580ea0(&lStack_28);
  lStack_28 = param_1 + 0x4b8;
  FUN_10a580f68(&lStack_28);
  lStack_28 = param_1 + 0x4a0;
  FUN_10a581030(&lStack_28);
  if (*(long *)(param_1 + 0x488) != 0) {
    *(long *)(param_1 + 0x490) = *(long *)(param_1 + 0x488);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x470) != 0) {
    *(long *)(param_1 + 0x478) = *(long *)(param_1 + 0x470);
    __ZdlPv();
  }
  func_0x00010a5810f8(param_1 + 0x448);
  if (*(long *)(param_1 + 0x430) != 0) {
    *(long *)(param_1 + 0x438) = *(long *)(param_1 + 0x430);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x418) != 0) {
    *(long *)(param_1 + 0x420) = *(long *)(param_1 + 0x418);
    __ZdlPv();
  }
  func_0x000107c28478(param_1 + 0x400,*(undefined8 *)(param_1 + 0x408));
  if (*(long *)(param_1 + 1000) != 0) {
    *(long *)(param_1 + 0x3f0) = *(long *)(param_1 + 1000);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x3d0) != 0) {
    *(long *)(param_1 + 0x3d8) = *(long *)(param_1 + 0x3d0);
    __ZdlPv();
  }
  FUN_10a044790(param_1 + 0x370);
  (*(code *)**(undefined8 **)(param_1 + 0x378))(param_1 + 0x378);
  lStack_28 = param_1 + 0x350;
  FUN_10a0426d8(&lStack_28);
  func_0x00010a004e5c(param_1 + 0x338);
  lStack_28 = param_1 + 800;
  func_0x00010a581140(&lStack_28);
  if (*(long *)(param_1 + 0x318) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a5811c8(param_1 + 0x300);
  func_0x00010a581220(param_1 + 0x2f0);
  func_0x00010a581278(param_1 + 0x2e0);
  func_0x00010a5812d0(param_1 + 0x2d0);
  func_0x00010a581328(param_1 + 0x2c0);
  func_0x00010a581380(param_1 + 0x2b0);
  func_0x00010a5813d8(param_1 + 0x2a0);
  func_0x00010a581430(param_1 + 0x290);
  func_0x00010a581488(param_1 + 0x280);
  func_0x00010a5814e0(param_1 + 0x270);
  func_0x00010a581538(param_1 + 0x260);
  func_0x00010a581590(param_1 + 0x250);
  func_0x00010a5815e8(param_1 + 0x240);
  func_0x00010a581640(param_1 + 0x230);
  func_0x00010a581698(param_1 + 0x220);
  func_0x00010a5816f0(param_1 + 0x210);
  func_0x00010a581748(param_1 + 0x200);
  func_0x00010a5817a0(param_1 + 0x1f0);
  func_0x00010a5817f8(param_1 + 0x1e0);
  func_0x00010a581850(param_1 + 0x1d0);
  func_0x00010a5818a8(param_1 + 0x1c0);
  func_0x00010a581900(param_1 + 0x1b0);
  func_0x00010a581958(param_1 + 0x1a0);
  func_0x00010a5819b0(param_1 + 400);
  FUN_10a3c59d8(param_1 + -0x68,&PTR_PTR_110c020a8);
  return;
}



/* Entry: 10a60df0c; end: 10a60df23;  */

void FUN_10a60df0c(long param_1)

{
  func_0x00010a60fbd8(param_1 + -0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a60df24; end: 10a60df2b;  */

void FUN_10a60df24(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x518) != 0) {
    *(long *)(param_1 + 0x520) = *(long *)(param_1 + 0x518);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x500) != 0) {
    *(long *)(param_1 + 0x508) = *(long *)(param_1 + 0x500);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x4e8) != 0) {
    *(long *)(param_1 + 0x4f0) = *(long *)(param_1 + 0x4e8);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x4d0) != 0) {
    *(long *)(param_1 + 0x4d8) = *(long *)(param_1 + 0x4d0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x4b8) != 0) {
    *(long *)(param_1 + 0x4c0) = *(long *)(param_1 + 0x4b8);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x4a0) != 0) {
    *(long *)(param_1 + 0x4a8) = *(long *)(param_1 + 0x4a0);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0x488;
  func_0x00010a580ea0(&lStack_28);
  lStack_28 = param_1 + 0x470;
  FUN_10a580f68(&lStack_28);
  lStack_28 = param_1 + 0x458;
  FUN_10a581030(&lStack_28);
  if (*(long *)(param_1 + 0x440) != 0) {
    *(long *)(param_1 + 0x448) = *(long *)(param_1 + 0x440);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x428) != 0) {
    *(long *)(param_1 + 0x430) = *(long *)(param_1 + 0x428);
    __ZdlPv();
  }
  func_0x00010a5810f8(param_1 + 0x400);
  if (*(long *)(param_1 + 1000) != 0) {
    *(long *)(param_1 + 0x3f0) = *(long *)(param_1 + 1000);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x3d0) != 0) {
    *(long *)(param_1 + 0x3d8) = *(long *)(param_1 + 0x3d0);
    __ZdlPv();
  }
  func_0x000107c28478(param_1 + 0x3b8,*(undefined8 *)(param_1 + 0x3c0));
  if (*(long *)(param_1 + 0x3a0) != 0) {
    *(long *)(param_1 + 0x3a8) = *(long *)(param_1 + 0x3a0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x388) != 0) {
    *(long *)(param_1 + 0x390) = *(long *)(param_1 + 0x388);
    __ZdlPv();
  }
  FUN_10a044790(param_1 + 0x328);
  (*(code *)**(undefined8 **)(param_1 + 0x330))(param_1 + 0x330);
  lStack_28 = param_1 + 0x308;
  FUN_10a0426d8(&lStack_28);
  func_0x00010a004e5c(param_1 + 0x2f0);
  lStack_28 = param_1 + 0x2d8;
  func_0x00010a581140(&lStack_28);
  if (*(long *)(param_1 + 0x2d0) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a5811c8(param_1 + 0x2b8);
  func_0x00010a581220(param_1 + 0x2a8);
  func_0x00010a581278(param_1 + 0x298);
  func_0x00010a5812d0(param_1 + 0x288);
  func_0x00010a581328(param_1 + 0x278);
  func_0x00010a581380(param_1 + 0x268);
  func_0x00010a5813d8(param_1 + 600);
  func_0x00010a581430(param_1 + 0x248);
  func_0x00010a581488(param_1 + 0x238);
  func_0x00010a5814e0(param_1 + 0x228);
  func_0x00010a581538(param_1 + 0x218);
  func_0x00010a581590(param_1 + 0x208);
  func_0x00010a5815e8(param_1 + 0x1f8);
  func_0x00010a581640(param_1 + 0x1e8);
  func_0x00010a581698(param_1 + 0x1d8);
  func_0x00010a5816f0(param_1 + 0x1c8);
  func_0x00010a581748(param_1 + 0x1b8);
  func_0x00010a5817a0(param_1 + 0x1a8);
  func_0x00010a5817f8(param_1 + 0x198);
  func_0x00010a581850(param_1 + 0x188);
  func_0x00010a5818a8(param_1 + 0x178);
  func_0x00010a581900(param_1 + 0x168);
  func_0x00010a581958(param_1 + 0x158);
  func_0x00010a5819b0(param_1 + 0x148);
  FUN_10a3c59d8(param_1 + -0xb0,&PTR_PTR_110c020a8);
  return;
}



/* Entry: 10a60df2c; end: 10a60df43;  */

void FUN_10a60df2c(long param_1)

{
  func_0x00010a60fbd8(param_1 + -0xb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a60df44; end: 10a60df7f;  */

undefined8 FUN_10a60df44(void)

{
  return 0xc2c0ac5e4c065340;
}



/* Entry: 10a60df80; end: 10a60df97;  */

void FUN_10a60df80(long param_1)

{
  func_0x00010a60fbd8(param_1 + -0xb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


