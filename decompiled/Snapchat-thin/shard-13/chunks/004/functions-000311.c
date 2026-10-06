/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a65b8f4; end: 10a65ba23;  */

void FUN_10a65b8f4(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_30;
  long *plStack_28;
  
  lVar5 = *param_2;
  if (lVar5 == 0) {
    func_0x00010a677724(&lStack_30);
    func_0x00010a65b9c0(param_1 + 0x730,&lStack_30);
    if (plStack_28 == (long *)0x0) {
      return;
    }
    plVar1 = plStack_28 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_28;
    } while (cVar2 != '\0');
  }
  else {
    func_0x00010a677724(&lStack_30);
    uVar7 = *(undefined8 *)(lVar5 + 0x32);
    uVar6 = *(undefined8 *)(lVar5 + 0x2a);
    uVar10 = *(undefined8 *)(lVar5 + 0x10);
    uVar9 = *(undefined8 *)(lVar5 + 0x28);
    uVar8 = *(undefined8 *)(lVar5 + 0x20);
    *(undefined8 *)(lStack_30 + 0x18) = *(undefined8 *)(lVar5 + 0x18);
    *(undefined8 *)(lStack_30 + 0x10) = uVar10;
    *(undefined8 *)(lStack_30 + 0x28) = uVar9;
    *(undefined8 *)(lStack_30 + 0x20) = uVar8;
    *(undefined8 *)(lStack_30 + 0x32) = uVar7;
    *(undefined8 *)(lStack_30 + 0x2a) = uVar6;
    func_0x00010a04a704(lStack_30 + 0x40,lVar5 + 0x40);
    func_0x00010a65b9c0(param_1 + 0x730,&lStack_30);
    if (plStack_28 == (long *)0x0) {
      return;
    }
    plVar1 = plStack_28 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_28;
    } while (cVar2 != '\0');
  }
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  return;
}



/* Entry: 10a65ba24; end: 10a65bb47;  */

void FUN_10a65ba24(long param_1,long *param_2)

{
  long *plVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plStack_40;
  long *plStack_38;
  
  lVar6 = *param_2;
  if (lVar6 == 0) {
    FUN_10a677838(&plStack_40);
    FUN_10a65bb48(param_1 + 0x740,&plStack_40);
    if (plStack_38 == (long *)0x0) {
      return;
    }
    plVar5 = plStack_38 + 1;
    do {
      lVar6 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    uVar2 = *(undefined1 *)(lVar6 + 0x28);
    lVar7 = *(long *)(lVar6 + 0x38);
    lVar9 = *(long *)(lVar6 + 0x38);
    lVar8 = *(long *)(lVar6 + 0x30);
    plVar5 = (long *)0x60;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_110c07080;
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar6 = *(long *)(lVar6 + 0x40);
    *(undefined1 *)(plVar5 + 4) = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    plStack_40 = plVar5 + 3;
    *plStack_40 = (long)&PTR_DAT_110c03e00;
    plVar5[5] = (long)&PTR_DAT_110c03e58;
    *(undefined1 *)(plVar5 + 8) = uVar2;
    plVar5[10] = lVar9;
    plVar5[9] = lVar8;
    plVar5[0xb] = lVar6;
    plStack_38 = plVar5;
    FUN_10a65bb48(param_1 + 0x740,&plStack_40);
    if (plStack_38 == (long *)0x0) {
      return;
    }
    plVar5 = plStack_38 + 1;
    do {
      lVar6 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar5 = plStack_38;
  if (lVar6 == 0) {
    (**(code **)(*plStack_38 + 0x10))(plStack_38);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
  return;
}



/* Entry: 10a65bb48; end: 10a65bbab;  */

undefined8 * FUN_10a65bb48(undefined8 *param_1,undefined8 *param_2)

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
  *param_2 = 0;
  param_2[1] = 0;
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



/* Entry: 10a65bbac; end: 10a65bccf;  */

void FUN_10a65bbac(long param_1,long *param_2)

{
  long *plVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  long *plStack_40;
  long *plStack_38;
  
  lVar6 = *param_2;
  if (lVar6 == 0) {
    FUN_10a677998(&plStack_40);
    FUN_10a65bcd0(param_1 + 0x750,&plStack_40);
    if (plStack_38 == (long *)0x0) {
      return;
    }
    plVar5 = plStack_38 + 1;
    do {
      lVar6 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    uVar2 = *(undefined1 *)(lVar6 + 0x28);
    lVar7 = *(long *)(lVar6 + 0x38);
    lVar10 = *(long *)(lVar6 + 0x38);
    lVar9 = *(long *)(lVar6 + 0x30);
    plVar5 = (long *)0x60;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_110c070d0;
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uVar8 = *(undefined4 *)(lVar6 + 0x40);
    *(undefined1 *)(plVar5 + 4) = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    plStack_40 = plVar5 + 3;
    *plStack_40 = (long)&PTR_DAT_110c03eb0;
    plVar5[5] = (long)&PTR_DAT_110c03f08;
    *(undefined1 *)(plVar5 + 8) = uVar2;
    plVar5[10] = lVar10;
    plVar5[9] = lVar9;
    *(undefined4 *)(plVar5 + 0xb) = uVar8;
    plStack_38 = plVar5;
    FUN_10a65bcd0(param_1 + 0x750,&plStack_40);
    if (plStack_38 == (long *)0x0) {
      return;
    }
    plVar5 = plStack_38 + 1;
    do {
      lVar6 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar5 = plStack_38;
  if (lVar6 == 0) {
    (**(code **)(*plStack_38 + 0x10))(plStack_38);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
  return;
}



/* Entry: 10a65bcd0; end: 10a65becf;  */

undefined8 * FUN_10a65bcd0(undefined8 *param_1,undefined8 *param_2)

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
  *param_2 = 0;
  param_2[1] = 0;
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



/* Entry: 10a65bed0; end: 10a65bf5f;  */

byte * FUN_10a65bed0(byte *param_1,uint param_2)

{
  byte *pbVar1;
  long lVar2;
  undefined1 auStack_28 [8];
  
  param_1[0x77c] = (byte)param_2;
  if (((((param_1[0x6e0] & 1) == 0) && (*(long **)(param_1 + 0x2a0) != *(long **)(param_1 + 0x2a8)))
      && (lVar2 = **(long **)(param_1 + 0x2a0), lVar2 != 0)) &&
     ((*(long **)(lVar2 + 0x228) != *(long **)(lVar2 + 0x230) &&
      (lVar2 = **(long **)(lVar2 + 0x228), lVar2 != 0)))) {
    pbVar1 = (byte *)(lVar2 + 0x219);
    if (*pbVar1 != param_2) {
      *pbVar1 = (byte)param_2;
      func_0x00010a1bd170(auStack_28);
      func_0x00010a36439c(pbVar1);
    }
    return pbVar1;
  }
  return param_1;
}



/* Entry: 10a65bf60; end: 10a65bfff;  */

void FUN_10a65bf60(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined **ppuVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long *plStack_50;
  long *plStack_48;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  ppuVar4 = &puStack_20;
  *(char *)(param_1 + 0x782) = (char)param_2;
  if (((((*(byte *)(param_1 + 0x6e0) & 1) == 0) &&
       (*(long **)(param_1 + 0x2a0) != *(long **)(param_1 + 0x2a8))) &&
      (lVar6 = **(long **)(param_1 + 0x2a0), lVar6 != 0)) &&
     ((*(long **)(lVar6 + 0x228) != *(long **)(lVar6 + 0x230) &&
      (lVar6 = **(long **)(lVar6 + 0x228), lVar6 != 0)))) {
    lVar6 = *(long *)(lVar6 + 600);
    puStack_20 = &UNK_10f68e8d6;
    uStack_18 = 0x12;
    if ((uint)param_2 < 0x11) {
      lVar3 = ((ulong)param_2 & 0xffffffff) * 0x30;
      uVar7 = *(undefined8 *)(&UNK_10e4f4698 + lVar3);
      *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(&UNK_10e4f46a0 + lVar3);
      *(undefined8 *)(lVar6 + 0x28) = uVar7;
      uVar7 = *(undefined8 *)(&UNK_10e4f46a8 + lVar3);
      *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)(&UNK_10e4f46b0 + lVar3);
      *(undefined8 *)(lVar6 + 0x38) = uVar7;
      uVar7 = *(undefined8 *)(&UNK_10e4f46b8 + lVar3);
      *(undefined8 *)(lVar6 + 0x50) = *(undefined8 *)(&UNK_10e4f46c0 + lVar3);
      *(undefined8 *)(lVar6 + 0x48) = uVar7;
      return;
    }
    FUN_10a0edfc4(&puStack_20);
    lVar6 = *param_2;
    if (lVar6 == 0) {
      plVar5 = (long *)0x50;
      __Znwm();
      plVar5[1] = 0;
      plVar5[2] = 0;
      *plVar5 = (long)&PTR_FUN_110bcfba8;
      plVar5[4] = 0;
      plVar5[5] = 0;
      *(undefined1 *)(plVar5 + 7) = 0;
      plVar5[6] = (long)&PTR_FUN_110c6a940;
      *(undefined8 *)((long)plVar5 + 0x44) = 0;
      *(undefined8 *)((long)plVar5 + 0x3c) = 0;
      plStack_50 = plVar5 + 3;
      *plStack_50 = (long)&PTR_FUN_110c6a8d8;
      plStack_48 = plVar5;
      FUN_10a1ede50((undefined1 *)((long)ppuVar4 + 0x788),&plStack_50);
      if (plStack_48 == (long *)0x0) {
        return;
      }
      plVar5 = plStack_48 + 1;
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    else {
      plVar5 = (long *)0x50;
      __Znwm();
      plVar5[1] = 0;
      plVar5[2] = 0;
      *plVar5 = (long)&PTR_FUN_110bcfba8;
      plVar5[4] = 0;
      plVar5[5] = 0;
      *(undefined1 *)(plVar5 + 7) = 0;
      plStack_50 = plVar5 + 3;
      *plStack_50 = (long)&PTR_FUN_110c6a8d8;
      plVar5[6] = (long)&PTR_FUN_110c6a940;
      *(undefined8 *)((long)plVar5 + 0x3c) = *(undefined8 *)(lVar6 + 0x24);
      *(undefined8 *)((long)plVar5 + 0x44) = *(undefined8 *)(lVar6 + 0x2c);
      plStack_48 = plVar5;
      FUN_10a1ede50((undefined1 *)((long)ppuVar4 + 0x788),&plStack_50);
      if (plStack_48 == (long *)0x0) {
        return;
      }
      plVar5 = plStack_48 + 1;
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar5 = plStack_48;
    if (lVar6 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    return;
  }
  return;
}



/* Entry: 10a65c000; end: 10a65c423;  */

void FUN_10a65c000(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plStack_30;
  long *plStack_28;
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    plVar3 = (long *)0x50;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_FUN_110bcfba8;
    plVar3[4] = 0;
    plVar3[5] = 0;
    *(undefined1 *)(plVar3 + 7) = 0;
    plVar3[6] = (long)&PTR_FUN_110c6a940;
    *(undefined8 *)((long)plVar3 + 0x44) = 0;
    *(undefined8 *)((long)plVar3 + 0x3c) = 0;
    plStack_30 = plVar3 + 3;
    *plStack_30 = (long)&PTR_FUN_110c6a8d8;
    plStack_28 = plVar3;
    FUN_10a1ede50(param_1 + 0x788,&plStack_30);
    if (plStack_28 == (long *)0x0) {
      return;
    }
    plVar3 = plStack_28 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    plVar3 = (long *)0x50;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_FUN_110bcfba8;
    plVar3[4] = 0;
    plVar3[5] = 0;
    *(undefined1 *)(plVar3 + 7) = 0;
    plStack_30 = plVar3 + 3;
    *plStack_30 = (long)&PTR_FUN_110c6a8d8;
    plVar3[6] = (long)&PTR_FUN_110c6a940;
    *(undefined8 *)((long)plVar3 + 0x3c) = *(undefined8 *)(lVar4 + 0x24);
    *(undefined8 *)((long)plVar3 + 0x44) = *(undefined8 *)(lVar4 + 0x2c);
    plStack_28 = plVar3;
    FUN_10a1ede50(param_1 + 0x788,&plStack_30);
    if (plStack_28 == (long *)0x0) {
      return;
    }
    plVar3 = plStack_28 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar3 = plStack_28;
  if (lVar4 == 0) {
    (**(code **)(*plStack_28 + 0x10))(plStack_28);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
  }
  return;
}



/* Entry: 10a65c424; end: 10a65c547;  */

void FUN_10a65c424(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &UNK_10f64cb48;
  uStack_28 = 0x1e;
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  plVar4 = (long *)param_2[1];
  if ((plVar4 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_38 = plVar4, plVar4 == (long *)0x0)) {
    uStack_50 = 0;
    plStack_48 = (long *)0x0;
  }
  else {
    uStack_50 = *param_2;
    plVar1 = plVar4 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plStack_48 = plVar4;
      uStack_40 = uStack_50;
    } while (cVar2 != '\0');
  }
  (**(code **)(*param_1 + 0x108))(param_1,&PTR_DAT_110c037d8,&uStack_50,&puStack_30);
  plVar4 = plStack_48;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a65c548; end: 10a65cb8f;  */

undefined *** FUN_10a65c548(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined ***pppuVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  undefined ***pppuVar7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  undefined ***pppuVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  code **ppcVar14;
  undefined8 uVar15;
  long *extraout_x8;
  long *plVar16;
  long lVar17;
  undefined **ppuVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined1 auStack_349 [9];
  undefined **ppuStack_340;
  undefined ***pppuStack_338;
  undefined1 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_320;
  long *plStack_318;
  undefined8 uStack_310;
  undefined ***pppuStack_308;
  undefined1 auStack_300 [8];
  undefined **appuStack_2f8 [8];
  long lStack_2b8;
  undefined **ppuStack_2b0;
  undefined8 **ppuStack_2a8;
  undefined1 **ppuStack_2a0;
  code *pcStack_298;
  undefined8 auStack_288 [2];
  char cStack_271;
  code *pcStack_270;
  undefined8 *apuStack_268 [7];
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  code *pcStack_218;
  undefined **ppuStack_210;
  undefined8 *puStack_208;
  long lStack_1d8;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined ***pppuStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined ***pppuStack_160;
  undefined8 uStack_158;
  long lStack_150;
  code *pcStack_148;
  undefined **ppuStack_140;
  long lStack_138;
  code *pcStack_108;
  undefined **ppuStack_100;
  long lStack_f8;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  undefined1 uStack_b0;
  char *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a42241c();
  *(undefined1 *)(param_1 + 0x5a0) = 1;
  pppuStack_160 = (undefined ***)0x0;
  uStack_158 = 0;
  lStack_150 = 0;
  FUN_10a49e934(param_2,&PTR_s_text_110c06de8,&pppuStack_160);
  if (lStack_150 < 0) {
    func_0x000107c3192c(&pppuStack_180,pppuStack_160,uStack_158);
  }
  else {
    uStack_178 = uStack_158;
    pppuStack_180 = pppuStack_160;
    lStack_170 = lStack_150;
  }
  FUN_10a65b880(param_1,&pppuStack_180);
  if (lStack_170 < 0) {
    __ZdlPv(pppuStack_180);
  }
  pcVar1 = (code *)(param_1 + 0x688);
  ppuStack_c0 = (undefined **)((ulong)ppuStack_c0 & 0xffffffffffffff00);
  plVar16 = param_2;
  pcStack_c8 = pcVar1;
  FUN_10a1f53a4(param_2,&PTR_DAT_110c06e08,pcVar1);
  if (((ulong)plVar16 & 1) == 0) {
    pcStack_88 = "font";
    ppuStack_80 = (undefined **)0x4;
    FUN_10a1f5b2c(&uStack_78);
    FUN_10a1f53a4(param_2,&pcStack_88,pcVar1);
  }
  FUN_10a679974(&pcStack_c8);
  plVar16 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c06e48);
  fVar19 = *(float *)(param_1 + 0x720);
  if ((int)plVar16 == 0) {
    (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c03558);
  }
  else {
    plVar16 = param_2;
    (**(code **)(*param_2 + 0xd0))(param_2,&PTR_DAT_110c06e48,(int)fVar19);
    fVar19 = (float)((ulong)plVar16 & 0xffffffff);
  }
  fVar20 = 2.0;
  if (2.0 <= fVar19) {
    fVar20 = fVar19;
  }
  fVar19 = 800.0;
  if (fVar20 <= 800.0) {
    fVar19 = fVar20;
  }
  *(float *)(param_1 + 0x720) = fVar19;
  FUN_10a679b20(param_2,param_1 + 0x6a0);
  func_0x00010a679b9c(param_2,param_1 + 0x6a8);
  FUN_10a49e934(param_2,&PTR_DAT_110c03598,param_1 + 0x6b0);
  plVar16 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c035b8,*(undefined4 *)(param_1 + 0x724));
  *(int *)(param_1 + 0x724) = (int)plVar16;
  plVar16 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c035d8,*(undefined4 *)(param_1 + 0x728));
  *(int *)(param_1 + 0x728) = (int)plVar16;
  plVar16 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c035f8,*(undefined1 *)(param_1 + 0x600));
  *(char *)(param_1 + 0x600) = (char)plVar16;
  (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110c03618,*(undefined8 *)(param_1 + 0x730));
  (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110c03638,*(undefined8 *)(param_1 + 0x740));
  (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110c03658,*(undefined8 *)(param_1 + 0x750));
  (**(code **)(*param_2 + 0x1f8))(param_2,&PTR_DAT_110c03678,*(undefined8 *)(param_1 + 0x760));
  plVar16 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c03698,*(undefined1 *)(param_1 + 0x770));
  *(char *)(param_1 + 0x770) = (char)plVar16;
  uVar21 = *(undefined4 *)(param_1 + 0x774);
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c036b8);
  *(undefined4 *)(param_1 + 0x774) = uVar21;
  uVar21 = *(undefined4 *)(param_1 + 0x778);
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c036d8);
  *(undefined4 *)(param_1 + 0x778) = uVar21;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  pcStack_88 = &UNK_1053a6a3c;
  ppuStack_80 = &PTR_DAT_110ae9180;
  if ((((*(long **)(param_1 + 0x2a0) != *(long **)(param_1 + 0x2a8)) &&
       (lVar17 = **(long **)(param_1 + 0x2a0), lVar17 != 0)) &&
      (*(long **)(lVar17 + 0x228) != *(long **)(lVar17 + 0x230))) &&
     (lVar17 = **(long **)(lVar17 + 0x228), lVar17 != 0)) {
    lStack_b8 = lVar17 + 0x40;
    uVar4 = *(ushort *)(lVar17 + 0x129);
    *(ushort *)(lVar17 + 0x129) = uVar4 & 0xff80 | uVar4 + 1 & 0x7f;
    *(ushort *)(lVar17 + 0x70) =
         *(ushort *)(lVar17 + 0x70) & 0xff80 | *(ushort *)(lVar17 + 0x70) + 1 & 0x7f;
    uStack_b0 = 1;
    pcStack_c8 = FUN_10a1d3648;
    ppuStack_c0 = &PTR_FUN_110bad818;
    func_0x00010a108320(&pcStack_88,&pcStack_c8);
    FUN_10a044790(&pcStack_c8);
    (*(code *)*ppuStack_c0)(&ppuStack_c0);
  }
  plVar16 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c036f8,*(undefined1 *)(param_1 + 0x77c));
  FUN_10a65bed0(param_1,plVar16);
  plVar16 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c03718,*(undefined1 *)(param_1 + 0x77d));
  func_0x00010a65bf18(param_1,plVar16);
  plVar16 = param_2;
  (**(code **)(*param_2 + 0x180))(param_2,&PTR_DAT_110c03738,param_1 + 0x77e);
  FUN_10a650f34(param_1,(ulong)plVar16 & 0xffffffff);
  plVar16 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c03758,*(undefined1 *)(param_1 + 0x782));
  FUN_10a65bf60(param_1,(uint)plVar16 & 0xff);
  lVar17 = 0;
  if (*(long *)(param_1 + 0x788) != 0) {
    lVar17 = *(long *)(param_1 + 0x788) + 0x18;
  }
  (**(code **)(*param_2 + 0x1f8))(param_2,&PTR_DAT_110c03778,lVar17);
  plVar16 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c03798,*(undefined1 *)(param_1 + 0x4f8));
  *(char *)(param_1 + 0x4f8) = (char)plVar16;
  if ((int)plVar16 == 0) {
    FUN_10a9dc2b0(param_1 + 0x4f0);
  }
  else {
    FUN_10a9dc140(param_1 + 0x4f0);
  }
  plVar16 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c037b8,*(undefined1 *)(param_1 + 0x4f9));
  *(char *)(param_1 + 0x4f9) = (char)plVar16;
  pcStack_108 = FUN_10a679ed0;
  ppuStack_100 = &PTR_FUN_110c076b0;
  lStack_f8 = param_1;
  FUN_10a65cb90(param_2,&PTR_DAT_110c037d8,&pcStack_108,0);
  (*(code *)*ppuStack_100)(&ppuStack_100);
  plVar16 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c037f8,*(undefined1 *)(param_1 + 0x6c8));
  FUN_10a65cd5c(param_1,plVar16);
  pcStack_148 = FUN_10a679f70;
  ppuStack_140 = &PTR_FUN_110c076c8;
  ppuVar12 = &PTR_DAT_110c03818;
  ppcVar14 = &pcStack_148;
  uVar15 = 0;
  lStack_138 = param_1;
  FUN_10a1f46a0(param_2,&PTR_DAT_110c03818,ppcVar14,0);
  (*(code *)*ppuStack_140)(&ppuStack_140);
  FUN_10a044790(&pcStack_88);
  pppuVar7 = &ppuStack_80;
  (*(code *)*ppuStack_80)();
  if (lStack_150 < 0) {
    pppuVar7 = pppuStack_160;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppuVar7;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_140)(&ppuStack_140);
  FUN_10a044790(&pcStack_88);
  (*(code *)*ppuStack_80)(&ppuStack_80);
  if (lStack_150 < 0) {
    __ZdlPv(pppuStack_160);
  }
  __Unwind_Resume();
  pcStack_188 = FUN_10a65cb90;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_270 = *ppcVar14;
  puStack_190 = &stack0xfffffffffffffff0;
  (**(code **)(ppcVar14[1] + 0x10))(apuStack_268,ppcVar14 + 1);
  FUN_109ffe064(&uStack_230,*ppuVar12,ppuVar12[1]);
  pcStack_218 = FUN_10a679c14;
  ppuStack_210 = &PTR_FUN_110c07c48;
  puVar8 = (undefined8 *)0x58;
  __Znwm();
  *puVar8 = pcStack_270;
  (*(code *)apuStack_268[0][2])(puVar8 + 1,apuStack_268);
  puVar8[9] = uStack_228;
  puVar8[8] = uStack_230;
  puVar8[10] = lStack_220;
  uStack_228 = 0;
  lStack_220 = 0;
  uStack_230 = 0;
  puStack_208 = puVar8;
  func_0x000107c2b054(auStack_288,&UNK_10f66a659);
  ppuVar18 = ppuVar12;
  (*(code *)(*pppuVar7)[0x4a])(pppuVar7,ppuVar12,&pcStack_218,uVar15,auStack_288);
  if (cStack_271 < '\0') {
    __ZdlPv(auStack_288[0]);
  }
  (*(code *)*ppuStack_210)(&ppuStack_210);
  if (lStack_220 < 0) {
    __ZdlPv(uStack_230);
  }
  ppuVar9 = apuStack_268;
  (*(code *)*apuStack_268[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return pppuVar7;
  }
  ___stack_chk_fail();
  if (cStack_271 < '\0') {
    __ZdlPv(auStack_288[0]);
  }
  (*(code *)*ppuStack_210)(&ppuStack_210);
  if (lStack_220 < 0) {
    __ZdlPv(uStack_230);
  }
  (*(code *)*apuStack_268[0])(apuStack_268);
  ppuVar10 = ppuVar9;
  __Unwind_Resume();
  pcStack_298 = FUN_10a65cd5c;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_2b0 = ppuVar12;
  ppuStack_2a8 = ppuVar9;
  ppuStack_2a0 = &puStack_190;
  *(char *)(ppuVar10 + 0xd9) = (char)ppuVar18;
  FUN_10a650f80(&uStack_310,ppuVar10,*(undefined1 *)((long)ppuVar10 + 0x77c),(long)ppuVar10 + 0x77e,
                *(undefined1 *)((long)ppuVar10 + 0x782),*(undefined1 *)((long)ppuVar10 + 0x77d),
                ppuVar18);
  plStack_318 = (long *)pppuStack_308;
  uStack_320 = uStack_310;
  uStack_310 = 0;
  pppuStack_308 = (undefined ***)0x0;
  FUN_10a42646c(ppuVar10,&uStack_320);
  plVar16 = plStack_318;
  if (plStack_318 != (long *)0x0) {
    plVar2 = plStack_318 + 1;
    do {
      lVar17 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_318 + 0x10))(plStack_318);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  FUN_10a044790(auStack_300);
  pppuVar7 = appuStack_2f8;
  (*(code *)*appuStack_2f8[0])();
  pppuVar11 = pppuStack_308;
  if (pppuStack_308 != (undefined ***)0x0) {
    pppuVar3 = pppuStack_308 + 1;
    do {
      ppuVar18 = *pppuVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pppuVar3,0x10);
      if (bVar6) {
        *pppuVar3 = (undefined **)((long)ppuVar18 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (ppuVar18 == (undefined **)0x0) {
      (*(code *)(*pppuStack_308)[2])(pppuStack_308);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar7 = pppuVar11;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
    return pppuVar7;
  }
  ___stack_chk_fail();
  FUN_10a0617bc(&uStack_320);
  func_0x00010a015cb4(&uStack_310);
  pppuVar11 = pppuVar7;
  __Unwind_Resume();
  pcStack_328 = FUN_10a65ce98;
  puVar13 = pppuVar11[0xf4][0xb5];
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  *extraout_x8 = 0;
  lVar17 = 0;
  for (plVar16 = (long *)puVar13; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
    lVar17 = lVar17 + 1;
  }
  ppuStack_340 = ppuVar12;
  pppuStack_338 = pppuVar7;
  pppuStack_330 = &ppuStack_2a0;
  FUN_10a4f0f10(extraout_x8,puVar13,0,lVar17);
  pppuVar7 = (undefined ***)*extraout_x8;
  pppuVar11 = (undefined ***)extraout_x8[1];
  lVar17 = 0;
  if (pppuVar11 != pppuVar7) {
    lVar17 = LZCOUNT(((long)pppuVar11 - (long)pppuVar7 >> 3) * -0x5555555555555555) * -2 + 0x7e;
  }
  func_0x000107c281b4(pppuVar7,pppuVar11,auStack_349,lVar17,1);
  return pppuVar7;
}



/* Entry: 10a65cb90; end: 10a65cd5b;  */

undefined8 **
FUN_10a65cb90(undefined8 **param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  long lVar8;
  long *extraout_x8;
  long *plVar9;
  long lVar10;
  undefined1 auStack_1c9 [9];
  undefined8 *puStack_1c0;
  undefined8 **ppuStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  undefined8 uStack_190;
  undefined8 **ppuStack_188;
  undefined1 auStack_180 [8];
  undefined8 *apuStack_178 [8];
  long lStack_138;
  undefined8 *puStack_130;
  undefined8 **ppuStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 auStack_108 [2];
  char cStack_f1;
  undefined8 uStack_f0;
  undefined8 *apuStack_e8 [7];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_f0 = *param_3;
  (**(code **)(param_3[1] + 0x10))(apuStack_e8,param_3 + 1);
  FUN_109ffe064(&uStack_b0,*param_2,param_2[1]);
  pcStack_98 = FUN_10a679c14;
  ppuStack_90 = &PTR_FUN_110c07c48;
  puVar5 = (undefined8 *)0x58;
  __Znwm();
  *puVar5 = uStack_f0;
  (*(code *)apuStack_e8[0][2])(puVar5 + 1,apuStack_e8);
  puVar5[9] = uStack_a8;
  puVar5[8] = uStack_b0;
  puVar5[10] = lStack_a0;
  uStack_a8 = 0;
  lStack_a0 = 0;
  uStack_b0 = 0;
  puStack_88 = puVar5;
  func_0x000107c2b054(auStack_108,&UNK_10f66a659);
  puVar5 = param_2;
  (*(code *)(*param_1)[0x4a])(param_1,param_2,&pcStack_98,param_4,auStack_108);
  if (cStack_f1 < '\0') {
    __ZdlPv(auStack_108[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  ppuVar6 = apuStack_e8;
  (*(code *)*apuStack_e8[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  if (cStack_f1 < '\0') {
    __ZdlPv(auStack_108[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  (*(code *)*apuStack_e8[0])(apuStack_e8);
  ppuVar7 = ppuVar6;
  __Unwind_Resume();
  pcStack_118 = FUN_10a65cd5c;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_130 = param_2;
  ppuStack_128 = ppuVar6;
  puStack_120 = &stack0xfffffffffffffff0;
  *(char *)(ppuVar7 + 0xd9) = (char)puVar5;
  FUN_10a650f80(&uStack_190,ppuVar7,*(undefined1 *)((long)ppuVar7 + 0x77c),(long)ppuVar7 + 0x77e,
                *(undefined1 *)((long)ppuVar7 + 0x782),*(undefined1 *)((long)ppuVar7 + 0x77d),puVar5
               );
  plStack_198 = (long *)ppuStack_188;
  uStack_1a0 = uStack_190;
  uStack_190 = 0;
  ppuStack_188 = (undefined8 **)0x0;
  FUN_10a42646c(ppuVar7,&uStack_1a0);
  plVar9 = plStack_198;
  if (plStack_198 != (long *)0x0) {
    plVar1 = plStack_198 + 1;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_198 + 0x10))(plStack_198);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  FUN_10a044790(auStack_180);
  ppuVar6 = apuStack_178;
  (*(code *)*apuStack_178[0])();
  ppuVar7 = ppuStack_188;
  if (ppuStack_188 != (undefined8 **)0x0) {
    ppuVar2 = ppuStack_188 + 1;
    do {
      puVar5 = *ppuVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar4) {
        *ppuVar2 = (undefined8 *)((long)puVar5 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar5 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_188)[2])(ppuStack_188);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar6 = ppuVar7;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return ppuVar6;
  }
  ___stack_chk_fail();
  FUN_10a0617bc(&uStack_1a0);
  func_0x00010a015cb4(&uStack_190);
  ppuVar7 = ppuVar6;
  __Unwind_Resume();
  pcStack_1a8 = FUN_10a65ce98;
  lVar8 = ppuVar7[0xf4][0xb5];
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  *extraout_x8 = 0;
  lVar10 = 0;
  for (plVar9 = (long *)lVar8; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
    lVar10 = lVar10 + 1;
  }
  puStack_1c0 = param_2;
  ppuStack_1b8 = ppuVar6;
  ppuStack_1b0 = &puStack_120;
  FUN_10a4f0f10(extraout_x8,lVar8,0,lVar10);
  ppuVar6 = (undefined8 **)*extraout_x8;
  ppuVar7 = (undefined8 **)extraout_x8[1];
  lVar10 = 0;
  if (ppuVar7 != ppuVar6) {
    lVar10 = LZCOUNT(((long)ppuVar7 - (long)ppuVar6 >> 3) * -0x5555555555555555) * -2 + 0x7e;
  }
  func_0x000107c281b4(ppuVar6,ppuVar7,auStack_1c9,lVar10,1);
  return ppuVar6;
}



/* Entry: 10a65cd5c; end: 10a65ce97;  */

void FUN_10a65cd5c(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 **ppuVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  long lVar8;
  long *extraout_x8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined1 auStack_b9 [9];
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 **ppuStack_78;
  undefined1 auStack_70 [8];
  undefined8 *apuStack_68 [8];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(char *)(param_1 + 0x6c8) = (char)param_2;
  FUN_10a650f80(&uStack_80,param_1,*(undefined1 *)(param_1 + 0x77c),param_1 + 0x77e,
                *(undefined1 *)(param_1 + 0x782),*(undefined1 *)(param_1 + 0x77d),param_2);
  plStack_88 = (long *)ppuStack_78;
  uStack_90 = uStack_80;
  uStack_80 = 0;
  ppuStack_78 = (undefined8 **)0x0;
  FUN_10a42646c(param_1,&uStack_90);
  plVar9 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar1 = plStack_88 + 1;
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  FUN_10a044790(auStack_70);
  ppuVar6 = apuStack_68;
  (*(code *)*apuStack_68[0])();
  ppuVar7 = ppuStack_78;
  if (ppuStack_78 != (undefined8 **)0x0) {
    ppuVar2 = ppuStack_78 + 1;
    do {
      puVar11 = *ppuVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar5) {
        *ppuVar2 = (undefined8 *)((long)puVar11 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar11 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_78)[2])(ppuStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar6 = ppuVar7;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a0617bc(&uStack_90);
  func_0x00010a015cb4(&uStack_80);
  __Unwind_Resume();
  lVar8 = ppuVar6[0xf4][0xb5];
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  *extraout_x8 = 0;
  lVar10 = 0;
  for (plVar9 = (long *)lVar8; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
    lVar10 = lVar10 + 1;
  }
  FUN_10a4f0f10(extraout_x8,lVar8,0,lVar10);
  lVar8 = *extraout_x8;
  lVar3 = extraout_x8[1];
  lVar10 = 0;
  if (lVar3 != lVar8) {
    lVar10 = LZCOUNT((lVar3 - lVar8 >> 3) * -0x5555555555555555) * -2 + 0x7e;
  }
  func_0x000107c281b4(lVar8,lVar3,auStack_b9,lVar10,1);
  return;
}



/* Entry: 10a65ce98; end: 10a65cf3f;  */

void FUN_10a65ce98(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_29 [9];
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x7a0) + 0x5a8);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lVar3 = 0;
  for (plVar4 = (long *)lVar2; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    lVar3 = lVar3 + 1;
  }
  FUN_10a4f0f10(param_1,lVar2,0,lVar3);
  lVar2 = *param_1;
  lVar1 = param_1[1];
  lVar3 = 0;
  if (lVar1 != lVar2) {
    lVar3 = LZCOUNT((lVar1 - lVar2 >> 3) * -0x5555555555555555) * -2 + 0x7e;
  }
  func_0x000107c281b4(lVar2,lVar1,auStack_29,lVar3,1);
  return;
}



/* Entry: 10a65cf40; end: 10a65d4ef;  */

void FUN_10a65cf40(undefined8 *param_1,long *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  float fVar8;
  code *pcVar9;
  undefined1 **ppuVar10;
  undefined *puVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined1 *puVar16;
  long *plVar17;
  float fVar18;
  long lStack_d0;
  long *plStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 *puStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  long *plStack_68;
  undefined1 uStack_51;
  
  if (param_4 == 0) {
    plVar15 = param_2;
    uVar14 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_68 = (long *)param_2[9];
    puStack_70 = (undefined1 *)param_2[8];
    lVar13 = param_4 + 0x88;
    func_0x00010a35bf90(lVar13,&puStack_70);
    puVar4 = (undefined8 *)((ulong)&puStack_70 | 8);
    ppuVar10 = &puStack_70;
    if (lVar13 != 0) {
      puVar4 = (undefined8 *)(lVar13 + 0x28);
      ppuVar10 = (undefined1 **)(lVar13 + 0x20);
    }
    uVar14 = *puVar4;
    plVar15 = (long *)*ppuVar10;
  }
  puVar16 = (undefined1 *)param_2[0x2e];
  FUN_10a3dd220(puVar16);
  FUN_10a579610(puVar16,plVar15,uVar14);
  plVar15 = (long *)0x28;
  puStack_80 = puVar16;
  __Znwm();
  plVar17 = plVar15 + 1;
  *plVar17 = 0;
  *plVar15 = (long)&PTR_DAT_110c076f0;
  plVar15[2] = 0;
  plVar15[3] = (long)puVar16;
  plVar15[4] = (long)FUN_10a3df8cc;
  plStack_78 = plVar15;
  if (puVar16 != (undefined1 *)0x0) {
    if (*(long *)(puVar16 + 0x30) == 0) {
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar7) {
          *plVar17 = *plVar17 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar1 = plVar15 + 2;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      *(undefined1 **)(puVar16 + 0x28) = puVar16;
      *(long **)(puVar16 + 0x30) = plVar15;
    }
    else {
      if (*(long *)(*(long *)(puVar16 + 0x30) + 8) != -1) goto LAB_10a65d0ac;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar7) {
          *plVar17 = *plVar17 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar1 = plVar15 + 2;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      *(undefined1 **)(puVar16 + 0x28) = puVar16;
      *(long **)(puVar16 + 0x30) = plVar15;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar13 = *plVar17;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *plVar17 = lVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
LAB_10a65d0ac:
  puVar16 = puStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (puStack_80 + 0x150,param_2 + 0x2a);
  uVar2 = (*(ushort *)(param_2 + 0x30) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(puVar16 + 0x180) & 0xfffc;
  *(ushort *)(puVar16 + 0x180) = uVar3 | *(ushort *)(puVar16 + 0x180) & 1 | uVar2;
  *(ushort *)(puVar16 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x30) & 1;
  puStack_70 = puVar16;
  plStack_68 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar15 = plStack_78 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *plVar15 = *plVar15 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  FUN_10a3c7ce8(param_3,&puStack_70);
  plVar15 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar17 = plStack_68 + 1;
    do {
      lVar13 = *plVar17;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *plVar17 = lVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  puVar16 = puStack_80;
  plVar15 = param_2;
  (**(code **)(*param_2 + 0x128))();
  puVar16[0x20c] = 0;
  *(int *)(puVar16 + 0x210) = (int)plVar15;
  FUN_10a422d34(param_2,puVar16,param_4);
  if (*(char *)((long)param_2 + 0x687) < '\0') {
    func_0x000107c3192c(&lStack_a0,param_2[0xce],param_2[0xcf]);
  }
  else {
    lStack_98 = param_2[0xcf];
    lStack_a0 = param_2[0xce];
    lStack_90 = param_2[0xd0];
  }
  FUN_10a65b880(puVar16,&lStack_a0);
  if (lStack_90 < 0) {
    __ZdlPv(lStack_a0);
  }
  uVar5 = *(uint *)(puVar16 + 0x698);
  if ((uVar5 == 0xffffffff) || (*(uint *)(param_2 + 0xd3) != uVar5)) {
    if (*(uint *)(param_2 + 0xd3) == uVar5) goto LAB_10a65d228;
  }
  else {
    puStack_70 = &uStack_51;
    ppuVar10 = &puStack_70;
    (*(code *)(&PTR_FUN_110c07730)[uVar5])(ppuVar10,puVar16 + 0x688,param_2 + 0xd1);
    if (((ulong)ppuVar10 & 1) != 0) goto LAB_10a65d228;
  }
  FUN_10a67a178(puVar16 + 0x688);
  FUN_10a67a464(puVar16 + 0x688,param_2 + 0xd1);
  FUN_10a67a1c4(puVar16 + 0x688);
  FUN_10a67a228(puVar16 + 0x688);
LAB_10a65d228:
  lVar13 = param_2[0xd4];
  *(int *)(puVar16 + 0x6a0) = (int)lVar13;
  puVar16[0x6a4] = (char)((ulong)lVar13 >> 0x20);
  *(short *)(puVar16 + 0x6a8) = (short)param_2[0xd5];
  fVar18 = 2.0;
  if (2.0 <= *(float *)(param_2 + 0xe4)) {
    fVar18 = *(float *)(param_2 + 0xe4);
  }
  fVar8 = 800.0;
  if (fVar18 <= 800.0) {
    fVar8 = fVar18;
  }
  *(float *)(puVar16 + 0x720) = fVar8;
  if (*(byte *)((long)param_2 + 0x30a) < 3) {
    puVar16[0x30a] = *(byte *)((long)param_2 + 0x30a);
    if (*(byte *)((long)param_2 + 0x309) < 3) {
      puVar16[0x309] = *(byte *)((long)param_2 + 0x309);
      if (*(uint *)((long)param_2 + 0x724) < 3) {
        *(uint *)(puVar16 + 0x724) = *(uint *)((long)param_2 + 0x724);
        if (*(uint *)(param_2 + 0xe5) < 7) {
          *(uint *)(puVar16 + 0x728) = *(uint *)(param_2 + 0xe5);
          FUN_10a65ba24(puVar16,param_2 + 0xe8);
          FUN_10a65bbac(puVar16,param_2 + 0xea);
          FUN_10a65b8f4(puVar16,param_2 + 0xe6);
          puVar16[0x770] = (char)param_2[0xee];
          func_0x00010a65bd34(puVar16,param_2 + 0xec);
          *(undefined4 *)(puVar16 + 0x774) = *(undefined4 *)((long)param_2 + 0x774);
          *(int *)(puVar16 + 0x778) = (int)param_2[0xef];
          FUN_10a650f34(puVar16,*(undefined4 *)((long)param_2 + 0x77e));
          iVar12 = *(int *)(*(long *)(param_2[0x2e] + 0xa20) + 0x18);
          if (0x14f < iVar12) {
            FUN_10a65bf60(puVar16,*(undefined1 *)((long)param_2 + 0x782));
            iVar12 = *(int *)(*(long *)(param_2[0x2e] + 0xa20) + 0x18);
          }
          if ((0xda < iVar12) &&
             (FUN_10a65c000(puVar16,param_2 + 0xf1),
             0x174 < *(int *)(*(long *)(param_2[0x2e] + 0xa20) + 0x18))) {
            if (*(char *)((long)param_2 + 0x6c7) < '\0') {
              func_0x000107c3192c(&uStack_c0,param_2[0xd6],param_2[0xd7]);
            }
            else {
              lStack_b8 = param_2[0xd7];
              uStack_c0 = param_2[0xd6];
              uStack_b0 = param_2[0xd8];
            }
            if ((char)puVar16[0x6c7] < '\0') {
              __ZdlPv(*(ulong *)(puVar16 + 0x6b0));
            }
            *(long *)(puVar16 + 0x6b8) = lStack_b8;
            *(ulong *)(puVar16 + 0x6b0) = uStack_c0;
            *(ulong *)(puVar16 + 0x6c0) = uStack_b0;
            uStack_b0 = uStack_b0 & 0xffffffffffffff;
            uStack_c0 = uStack_c0 & 0xffffffffffffff00;
          }
          FUN_10a65cd5c(puVar16,(char)param_2[0xd9]);
          plStack_c8 = (long *)param_2[0xdb];
          lStack_d0 = param_2[0xda];
          if (param_2[0xdb] != 0) {
            plVar15 = (long *)(param_2[0xdb] + 8);
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar7) {
                *plVar15 = *plVar15 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          FUN_10a65d4f0(puVar16,&lStack_d0);
          plVar15 = plStack_c8;
          if (plStack_c8 != (long *)0x0) {
            plVar17 = plStack_c8 + 1;
            do {
              lVar13 = *plVar17;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar7) {
                *plVar17 = lVar13 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
            }
          }
          param_1[1] = plStack_78;
          *param_1 = puStack_80;
          return;
        }
        puVar11 = &UNK_10f66afd2;
      }
      else {
        puVar11 = &UNK_10f66af9c;
      }
    }
    else {
      puVar11 = &UNK_10f6577bb;
    }
  }
  else {
    puVar11 = &UNK_10f657788;
  }
  FUN_10a00946c(puVar11);
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a65d4cc);
  (*pcVar9)();
}



/* Entry: 10a65d4f0; end: 10a65d72f;  */

void FUN_10a65d4f0(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lStack_a0;
  long *plStack_98;
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
  undefined **ppuStack_38;
  
  lStack_a0 = *param_2;
  plStack_98 = (long *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  lVar9 = *(long *)(param_1 + 0x6d0);
  if (lVar9 != lStack_a0) {
    plVar1 = (long *)(param_1 + 0x6d0);
    if (lVar9 != 0) {
      lVar3 = -0x6d0;
      if (cRam00000001137eb710 == '\0') {
        lVar3 = -0xffff;
      }
      FUN_10a1bf080(lVar9 + 0x170,(long)plVar1 + lVar3 + 0xb8);
    }
    func_0x00010a015c50(plVar1,&lStack_a0);
    puVar7 = &uStack_90;
    func_0x00010a1bd170();
    if ((((ulong)puVar7 & 1) == 0) && (*plVar1 != 0)) {
      lVar9 = -0x6d0;
      if (cRam00000001137eb710 == '\0') {
        lVar9 = -0xffff;
      }
      puVar7 = (undefined8 *)(*plVar1 + 0x170);
      FUN_10a1bf2a0(puVar7,(long)plVar1 + lVar9 + 0xb8);
    }
    lVar9 = -0x6d0;
    if (cRam00000001137eb710 == '\0') {
      lVar9 = -0xffff;
    }
    if ((*(ushort *)((long)plVar1 + lVar9 + 0xe8) >> 8 & 1) == 0) {
      uVar8 = 0;
      func_0x00010a1bd170();
      if ((uVar8 & 1) == 0) {
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        ppuStack_38 = &PTR_DAT_110c06e68;
        uVar8 = (ulong)&uStack_90 | 8;
        FUN_10a0dad0c(uVar8,&ppuStack_38);
        lVar9 = -0x6d0;
        if (cRam00000001137eb710 == '\0') {
          lVar9 = -0xffff;
        }
        uVar4 = *(ushort *)((long)plVar1 + lVar9 + 0xe8);
        if ((uVar4 & 0x7f) == 0) {
          if ((uVar4 >> 8 & 1) == 0) {
            uVar8 = (long)plVar1 + lVar9 + 0xb8;
            FUN_10a1bfe94(uVar8,&uStack_90);
            if ((uVar8 & 1) == 0) {
              lVar9 = -0x6d0;
              if (cRam00000001137eb710 == '\0') {
                lVar9 = -0xffff;
              }
              FUN_10a650b2c((long)plVar1 + lVar9,&uStack_90);
            }
          }
          else {
            FUN_10a1bd5e0();
            if (uVar8 != 0) {
              FUN_10a1bd7d8();
            }
          }
        }
        else {
          if ((uVar4 >> 7 & 1) == 0) {
            *(undefined8 *)((long)plVar1 + lVar9 + 0xf8) = uStack_90;
            *(ushort *)((long)plVar1 + lVar9 + 0xe8) = uVar4 | 0x80;
          }
          FUN_10a1bd398((long)plVar1 + lVar9 + 0xf8,&uStack_90);
        }
      }
    }
    else if ((*(undefined ***)((long)plVar1 + lVar9 + 0xf0) != &PTR_DAT_110c06e68) &&
            (FUN_10a1bd5e0(), puVar7 != (undefined8 *)0x0)) {
      FUN_10a1bd7d8();
      *(undefined ***)((long)plVar1 + lVar9 + 0xf0) = &PTR_DAT_110c06e68;
    }
  }
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
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
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a65d730; end: 10a65d7cb;  */

long FUN_10a65d730(long param_1,long param_2)

{
  uint uVar1;
  undefined1 **ppuVar2;
  undefined1 uStack_29;
  undefined1 *puStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 == 0xffffffff || *(uint *)(param_2 + 0x10) != uVar1) {
    if (*(uint *)(param_2 + 0x10) == uVar1) {
      return param_1;
    }
  }
  else {
    puStack_28 = &uStack_29;
    ppuVar2 = &puStack_28;
    (*(code *)(&PTR_FUN_110c07730)[uVar1])(ppuVar2,param_1,param_2);
    if (((ulong)ppuVar2 & 1) != 0) {
      return param_1;
    }
  }
  FUN_10a67a178(param_1);
  FUN_10a1f6844(param_1,param_2);
  FUN_10a67a1c4(param_1);
  FUN_10a67a228(param_1);
  return param_1;
}



/* Entry: 10a65d7cc; end: 10a65d8b3;  */

void FUN_10a65d7cc(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  long lStack_48;
  long *plStack_40;
  uint uStack_38;
  
  FUN_10a1f6274(auStack_60,param_1 + 0x688);
  lVar4 = *param_2;
  plVar1 = (long *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = plVar1;
  if (lVar4 != 0) {
    plVar5 = (long *)0x0;
    lStack_48 = lVar4;
    plStack_40 = plVar1;
  }
  uStack_38 = (uint)(lVar4 != 0);
  FUN_10a1f6844(auStack_60,&lStack_48);
  FUN_10a1f57fc(&lStack_48);
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
  FUN_10a1f5b9c(auStack_78,auStack_60);
  FUN_10a65d730(param_1 + 0x688,auStack_78);
  FUN_10a1f57fc(auStack_78);
  FUN_10a1f57fc(auStack_60);
  return;
}



/* Entry: 10a65d8b4; end: 10a65d96b;  */

undefined1  [16] FUN_10a65d8b4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = &UNK_10f6634a1;
  return auVar1;
}



/* Entry: 10a65d96c; end: 10a65e3bf;  */

void FUN_10a65d96c(ulong param_1)

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
  undefined8 **appuStack_d8 [2];
  char cStack_c1;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x000109887da8(appuStack_d8,&UNK_10f6634a1,0x10);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c06258;
  pppuVar2 = (undefined8 ***)&UNK_10f66a659;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0x9f;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c06258;
    uStack_b8 = 0;
    ppuStack_b0 = (undefined8 **)&PTR_DAT_110bc3458;
    uStack_a8 = 0;
    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_c0,&ppuStack_b0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(appuStack_d8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a65e3a0;
    FUN_10a054dac(param_1,&DAT_10f595cf3,FUN_10a67a76c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,4,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a65e3a0;
    FUN_10a054dac(param_1,&UNK_10f66aba5,FUN_10a67a988,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a65e3a0;
    FUN_10a054dac(param_1,&UNK_10f66ab61,FUN_10a67aa90,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a65e3a0;
    FUN_10a054dac(param_1,&UNK_10f66ab70,FUN_10a67b044,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a65e3a0;
    FUN_10a054dac(param_1,&UNK_10f66ab82,FUN_10a67b880,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a65e3a0;
    FUN_10a054dac(param_1,&UNK_10f66ab95,FUN_10a67b978,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"text",FUN_10a67baa4,FUN_10a67bb54);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f644f55,FUN_10a67be4c,FUN_10a67bf30);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"font",FUN_10a67c068,FUN_10a67c198);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66ab55,FUN_10a67c300,FUN_10a67c3c8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"italic",FUN_10a67c504,FUN_10a67c5c8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f478ae0,FUN_10a67c6fc,FUN_10a67c7ac);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66abb6,FUN_10a67c864,FUN_10a67c91c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66ab5c,FUN_10a67c9dc,FUN_10a67ca98);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66b00a,FUN_10a67cba4,FUN_10a67cc60);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66b019,FUN_10a67cd50,FUN_10a67ce0c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66abd4,FUN_10a67cef0,FUN_10a67cfac);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66abe5,FUN_10a67d084,FUN_10a67d140);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66ac37,FUN_10a67d218,FUN_10a67d2d0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2db9e8,FUN_10a67d390,FUN_10a67d44c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66ac41,FUN_10a67d53c,FUN_10a67d5f8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66b02a,FUN_10a67d6e8,FUN_10a67d7a0);
  }
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000064;
  uStack_a8 = 0;
  uStack_a0 = 0;
  ppuStack_b0 = (undefined8 **)&UNK_10f65823f;
  puStack_88 = &UNK_10f66a659;
  uStack_80 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0x16c;
  uStack_60._0_4_ = 0xffffffff;
  uStack_58 = 0;
  uStack_50 = 0;
  uVar7 = param_1;
  FUN_10a67d860(param_1,&ppuStack_b0);
  uStack_a8 = 0;
  uStack_a0 = 0;
  ppuStack_b0 = (undefined8 **)&DAT_10f65824a;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x200000064;
  puStack_88 = &UNK_10f66b039;
  uStack_80 = 0x32;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0x16c;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  FUN_10a67d860();
  FUN_10a0051e8();
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65828c,FUN_10a67da8c,FUN_10a67db44);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66ac7e,FUN_10a67dc04,FUN_10a67dcc0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66ac95,FUN_10a67dd80,FUN_10a67de38);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66ac9e,FUN_10a67df10,FUN_10a67dfc8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66acb1,FUN_10a67e088,FUN_10a67e140);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&UNK_10f66acbe,FUN_10a67e23c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110c07c90,FUN_10a676788);
    FUN_10a0605c4(param_1,&UNK_10f66accf,FUN_10a67e2f4,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110c07c90,FUN_10a676788);
    FUN_10a0605c4(param_1,&UNK_10f66ace0,FUN_10a67e3b0,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_a8 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_b0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_88 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_a0 = *(undefined8 *)(lVar3 + -0x58);
    uStack_78 = *(undefined8 *)(lVar3 + -0x30);
    uStack_80 = *(undefined8 *)(lVar3 + -0x38);
    uStack_68 = *(undefined8 *)(lVar3 + -0x20);
    uStack_70 = *(undefined8 *)(lVar3 + -0x28);
    uStack_50 = *(undefined8 *)(lVar3 + -8);
    uStack_58 = *(undefined8 *)(lVar3 + -0x10);
    uStack_60 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_98._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_98._4_4_;
    uStack_90._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_90._4_4_;
    uVar7 = param_1;
    uStack_98 = uVar9;
    uStack_90 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_60 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f6634a1,0x10);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a65e3a0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a65e3a4);
  (*pcVar6)();
}



/* Entry: 10a65e3c0; end: 10a65e52f;  */

void FUN_10a65e3c0(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f66b06c;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f66a659;
  uStack_78 = 0;
  puStack_70 = &UNK_10f66a659;
  uStack_68 = 0;
  uStack_60 = 0x16c;
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
  puStack_a8 = &UNK_10f66b083;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f66a659;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x16c;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a65e530(param_1,&puStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f66b08c;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f66a659;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x16c;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a65e530();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f643ac2;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f66a659;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x16c;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a65e530();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a65e530; end: 10a65e5d7;  */

undefined8 * FUN_10a65e530(undefined8 *param_1,undefined8 *param_2,byte param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a65e5d8);
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



/* Entry: 10a65e5d8; end: 10a65e607;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10a65e5d8(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (-1 < *(char *)(param_2 + 0x5f7)) {
    uVar3 = *(undefined8 *)(param_2 + 0x5e0);
    param_1[1] = *(undefined8 *)(param_2 + 0x5e8);
    *param_1 = uVar3;
    param_1[2] = *(undefined8 *)(param_2 + 0x5f0);
    return;
  }
  lVar1 = *(long *)(param_2 + 0x5e0);
  uVar2 = *(ulong *)(param_2 + 0x5e8);
  if (0x16 < uVar2) {
    if (uVar2 < 0x7ffffffffffffff7) {
      lVar1 = 0x19;
      if ((uVar2 | 7) != 0x17) {
        lVar1 = (uVar2 | 7) + 1;
      }
    }
    else {
      func_0x000104bd47d4();
    }
    func_0x000107c60e20(lVar1);
    return;
  }
  *(char *)((long)param_1 + 0x17) = (char)uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(param_1,lVar1,uVar2 + 1);
  return;
}



/* Entry: 10a65e608; end: 10a65e6bf;  */

void FUN_10a65e608(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x5f7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x5e0));
  }
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x5f0) = param_2[2];
  *(undefined8 *)(param_1 + 0x5e8) = uVar2;
  *(undefined8 *)(param_1 + 0x5e0) = uVar1;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  return;
}



/* Entry: 10a65e6c0; end: 10a65eebb;  */

undefined8 * FUN_10a65e6c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plStack_c8;
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
  undefined **ppuStack_68;
  
  param_1[0xdf] = &PTR_FUN_110c383b8;
  param_1[0xe1] = 0;
  param_1[0xe0] = 0;
  *(undefined2 *)(param_1 + 0xe2) = 0x100;
  puVar6 = param_1;
  FUN_10a4213cc(param_1,&PTR_PTR_110c03ca0,param_2,param_3,0x16);
  *puVar6 = &PTR_FUN_110c03850;
  puVar6[2] = &PTR_FUN_110c03a98;
  puVar6[7] = &PTR_FUN_110c03af0;
  puVar6[0xd] = &PTR_FUN_110c03b10;
  puVar6[0xdf] = &PTR_FUN_110c03c58;
  puVar6[0x16] = &PTR_FUN_110c03b80;
  puVar6[0x17] = &PTR_FUN_110c03bb0;
  puVar6[0x9e] = &PTR_FUN_110c03be0;
  puVar6[0xb0] = &PTR_DAT_110c03c00;
  FUN_10a9dbf98(puVar6 + 0x9e,param_1);
  param_1[0x9e] = &PTR_FUN_110c077c0;
  FUN_10a38da90(param_1 + 0xb0);
  *param_1 = &PTR_FUN_110c03850;
  param_1[2] = &PTR_FUN_110c03a98;
  param_1[7] = &PTR_FUN_110c03af0;
  param_1[0xd] = &PTR_FUN_110c03b10;
  param_1[0xdf] = &PTR_FUN_110c03c58;
  param_1[0x16] = &PTR_FUN_110c03b80;
  param_1[0x17] = &PTR_FUN_110c03bb0;
  param_1[0x9e] = &PTR_FUN_110c03be0;
  param_1[0xb0] = &PTR_DAT_110c03c00;
  func_0x000107c2b054(param_1 + 0xb4,&UNK_10f66a659);
  *(undefined4 *)(param_1 + 0xb9) = 0;
  if ((bRam00000001137eb726 & 1) == 0) {
    bRam00000001137eb726 = 1;
  }
  *(undefined1 *)(param_1 + 0xba) = 0;
  *(undefined1 *)((long)param_1 + 0x5d4) = 0;
  *(undefined2 *)(param_1 + 0xbb) = 0;
  *(undefined2 *)((long)param_1 + 0x5f7) = 7;
  *(undefined4 *)(param_1 + 0xbc) = 0x75676552;
  *(undefined4 *)((long)param_1 + 0x5e3) = 0x72616c75;
  *(undefined1 *)((long)param_1 + 0x5e7) = 0;
  *(undefined8 *)((long)param_1 + 0x5fc) = 0x3ecccccd42400000;
  *(undefined1 *)((long)param_1 + 0x604) = 2;
  *(undefined8 *)((long)param_1 + 0x614) = 0x3f80000000000000;
  param_1[0xc1] = 0;
  *(undefined1 *)(param_1 + 0xc2) = 0;
  *(undefined1 *)((long)param_1 + 0x61c) = 0;
  puVar6 = (undefined8 *)0x50;
  __Znwm();
  puVar6[2] = 0;
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_110bcfba8;
  puVar6[5] = 0;
  puVar6[4] = 0;
  *(undefined1 *)(puVar6 + 7) = 0;
  puVar6[3] = &PTR_FUN_110c6a8d8;
  puVar6[6] = &PTR_FUN_110c6a940;
  *(undefined8 *)((long)puVar6 + 0x44) = 0x4010000040f00000;
  *(undefined8 *)((long)puVar6 + 0x3c) = 0xc0100000c0f00000;
  param_1[0xc4] = puVar6 + 3;
  param_1[0xc5] = puVar6;
  *(undefined1 *)(param_1 + 0xc6) = 0;
  plVar1 = param_1 + 199;
  param_1[200] = 0;
  *plVar1 = 0;
  if ((bRam00000001137eb728 & 1) == 0) {
    bRam00000001137eb728 = 1;
  }
  param_1[0xc9] = 5;
  param_1[0xcb] = 0;
  param_1[0xca] = 0;
  param_1[0xcd] = 0;
  param_1[0xcc] = 0;
  param_1[0xce] = 0;
  *(undefined4 *)(param_1 + 0xcf) = 0x3f800000;
  FUN_10a66cfac(param_1 + 0xd0);
  plVar7 = (long *)0x450;
  __Znwm();
  plVar10 = plVar7 + 1;
  *plVar10 = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_FUN_110c07800;
  _bzero(plVar7 + 4,0x430);
  plVar7[0xb] = 0;
  plVar7[10] = 0;
  plVar7[0xd] = 0;
  plVar7[0xc] = 0;
  plVar7[0xf] = 0;
  plVar7[0xe] = 0;
  plVar7[0x11] = 0;
  plVar7[0x10] = 0;
  plVar7[0x13] = 0;
  plVar7[0x12] = 0;
  plVar7[0x14] = 0;
  plVar7[0x16] = 0;
  plVar7[0x17] = 0;
  plVar7[5] = (long)&UNK_10e52b660;
  plVar7[6] = 0;
  plVar7[7] = 0;
  plVar7[8] = 0;
  *(undefined2 *)(plVar7 + 9) = 0;
  plVar7[0x18] = (long)&UNK_10e52b660;
  plVar7[0x19] = 0;
  plVar7[0x1a] = 0;
  plVar7[0x1b] = 0;
  plVar7[0x1c] = (long)&UNK_10e52b660;
  plVar11 = plVar7 + 3;
  *plVar11 = (long)&PTR_DAT_110c07850;
  plVar7[0x2d] = 0;
  plVar7[0x2a] = 0;
  plVar7[0x29] = 0;
  plVar7[0x2c] = 0;
  plVar7[0x2b] = 0;
  plVar7[0x26] = 0;
  plVar7[0x25] = 0;
  plVar7[0x28] = 0;
  plVar7[0x27] = 0;
  plVar7[0x22] = 0;
  plVar7[0x21] = 0;
  plVar7[0x24] = 0;
  plVar7[0x23] = 0;
  plVar7[0x1e] = 0;
  plVar7[0x1f] = 0;
  *(undefined4 *)((long)plVar7 + 0xff) = 0;
  plVar7[0x1d] = 0;
  plVar7[0x15] = (long)&PTR_DAT_110c07880;
  func_0x000107c2b054(plVar7 + 0x2f,&UNK_10f66a659);
  plVar7[0x32] = 0;
  *(undefined4 *)(plVar7 + 0x33) = 0;
  *(undefined1 *)((long)plVar7 + 0x1bc) = 0;
  *(undefined2 *)(plVar7 + 0x38) = 0;
  *(undefined8 *)((long)plVar7 + 0x1e4) = 0;
  plVar7[0x34] = 0;
  *(undefined1 *)(plVar7 + 0x37) = 0;
  plVar7[0x36] = 0;
  plVar7[0x35] = 0;
  plVar7[0x39] = 0;
  plVar7[0x3b] = 0;
  plVar7[0x3a] = 0;
  *(undefined1 *)(plVar7 + 0x3c) = 0;
  *(undefined2 *)((long)plVar7 + 0x1ec) = 0x101;
  plVar7[0x3e] = 0x3f80000000000000;
  *(undefined4 *)(plVar7 + 0x3f) = 0x3ecccccd;
  *(undefined1 *)((long)plVar7 + 0x1fc) = 2;
  plVar7[0x42] = 0;
  plVar7[0x41] = 0;
  *(undefined1 *)(plVar7 + 0x44) = 0;
  plVar7[0x40] = (long)&PTR_FUN_110c6a8d8;
  plVar7[0x43] = (long)&PTR_FUN_110c6a940;
  *(undefined8 *)((long)plVar7 + 0x22c) = 0;
  *(undefined8 *)((long)plVar7 + 0x224) = 0;
  plVar7[0x49] = 0;
  plVar7[0x48] = 0;
  *(undefined1 *)(plVar7 + 0x4b) = 0;
  plVar7[0x47] = (long)&PTR_FUN_110c6a8d8;
  plVar7[0x4a] = (long)&PTR_FUN_110c6a940;
  *(undefined8 *)((long)plVar7 + 0x264) = 0;
  *(undefined8 *)((long)plVar7 + 0x25c) = 0;
  plVar7[0x4f] = 0;
  plVar7[0x4e] = 0;
  plVar7[0x51] = 0;
  plVar7[0x50] = 0;
  plVar7[0x53] = 0;
  plVar7[0x52] = 0;
  plVar7[0x54] = 0;
  *(undefined4 *)(plVar7 + 0x55) = 0x3f800000;
  plVar7[0x57] = 0;
  plVar7[0x56] = 0;
  plVar7[0x59] = 0;
  plVar7[0x58] = 0;
  plVar7[0x5b] = 0;
  plVar7[0x5a] = 0;
  plVar7[0x5c] = 0;
  *(undefined4 *)(plVar7 + 0x5d) = 0x3f800000;
  plVar7[0x5f] = 0;
  plVar7[0x5e] = 0;
  plVar7[0x61] = 0;
  plVar7[0x60] = 0;
  *(undefined4 *)(plVar7 + 0x62) = 0x3f800000;
  plVar7[100] = 0;
  plVar7[99] = 0;
  plVar7[0x66] = 0;
  plVar7[0x65] = 0;
  plVar7[0x68] = 0;
  plVar7[0x67] = 0;
  plVar7[0x6a] = 0;
  plVar7[0x69] = 0;
  plVar7[0x6c] = 0;
  plVar7[0x6b] = 0;
  plVar7[0x6e] = 0;
  plVar7[0x6d] = 0;
  plVar7[0x70] = 0;
  plVar7[0x6f] = 0;
  plVar7[0x72] = 0;
  plVar7[0x71] = 0;
  *(undefined4 *)(plVar7 + 0x73) = 0x3f800000;
  plVar7[0x74] = 0;
  if ((bRam00000001137eb72a & 1) == 0) {
    bRam00000001137eb72a = 1;
  }
  plVar7[0x77] = 0;
  plVar7[0x76] = 0;
  plVar7[0x75] = 0;
  if ((bRam00000001137eb72c & 1) == 0) {
    bRam00000001137eb72c = 1;
  }
  plVar7[0x79] = 0;
  plVar7[0x78] = 0;
  if ((bRam00000001137eb72e & 1) == 0) {
    bRam00000001137eb72e = 1;
  }
  plVar7[0x7b] = 0;
  plVar7[0x7a] = 0;
  if ((bRam00000001137eb730 & 1) == 0) {
    bRam00000001137eb730 = 1;
  }
  *(undefined4 *)(plVar7 + 0x7c) = 0;
  plVar7[0x89] = 0;
  plVar7[0x7e] = 0;
  plVar7[0x7d] = 0;
  plVar7[0x80] = 0;
  plVar7[0x7f] = 0;
  plVar7[0x82] = 0;
  plVar7[0x81] = 0;
  plVar7[0x84] = 0;
  plVar7[0x83] = 0;
  plVar7[0x86] = 0;
  plVar7[0x85] = 0;
  plVar7[0x88] = 0;
  plVar7[0x87] = 0;
  if (plVar7[0x2d] == 0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar2 = plVar7 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar7[0x2c] = (long)plVar11;
    plVar7[0x2d] = (long)plVar7;
  }
  else {
    if (*(long *)(plVar7[0x2d] + 8) != -1) goto LAB_10a65eb70;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar2 = plVar7 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar7[0x2c] = (long)plVar11;
    plVar7[0x2d] = (long)plVar7;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
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
    (**(code **)(*plVar7 + 0x10))(plVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
LAB_10a65eb70:
  plVar10 = (long *)*plVar1;
  plStack_c8 = plVar7;
  if (plVar10 != plVar11) {
    if (plVar10 != (long *)0x0) {
      lVar9 = -0x638;
      if (bRam00000001137eb728 == 0) {
        lVar9 = -0xffff;
      }
      FUN_10a1bf080(plVar10 + 0x12,(long)plVar1 + lVar9 + 0xb8);
    }
    plStack_c8 = (long *)0x0;
    param_1[199] = plVar11;
    plVar11 = (long *)param_1[200];
    param_1[200] = plVar7;
    if (plVar11 != (long *)0x0) {
      plVar7 = plVar11 + 1;
      do {
        lVar9 = *plVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    puVar6 = &uStack_c0;
    func_0x00010a1bd170();
    if ((((ulong)puVar6 & 1) == 0) && (*plVar1 != 0)) {
      lVar9 = -0x638;
      if (bRam00000001137eb728 == 0) {
        lVar9 = -0xffff;
      }
      puVar6 = (undefined8 *)(*plVar1 + 0x90);
      FUN_10a1bf2a0(puVar6,(long)plVar1 + lVar9 + 0xb8);
    }
    lVar9 = -0x638;
    if (bRam00000001137eb728 == 0) {
      lVar9 = -0xffff;
    }
    if ((*(ushort *)((long)plVar1 + lVar9 + 0xe8) >> 8 & 1) == 0) {
      uVar8 = 0;
      func_0x00010a1bd170();
      if ((uVar8 & 1) == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        ppuStack_68 = &PTR_DAT_110c072d0;
        uVar8 = (ulong)&uStack_c0 | 8;
        FUN_10a0dad0c(uVar8,&ppuStack_68);
        lVar9 = -0x638;
        if (bRam00000001137eb728 == 0) {
          lVar9 = -0xffff;
        }
        uVar3 = *(ushort *)((long)plVar1 + lVar9 + 0xe8);
        if ((uVar3 & 0x7f) == 0) {
          if ((uVar3 >> 8 & 1) == 0) {
            uVar8 = (long)plVar1 + lVar9 + 0xb8;
            FUN_10a1bfe94(uVar8,&uStack_c0);
            if ((uVar8 & 1) == 0) {
              lVar9 = -0x638;
              if (bRam00000001137eb728 == 0) {
                lVar9 = -0xffff;
              }
              FUN_10a65eebc((long)plVar1 + lVar9,&uStack_c0);
            }
          }
          else {
            FUN_10a1bd5e0();
            if (uVar8 != 0) {
              FUN_10a1bd7d8();
            }
          }
        }
        else {
          if ((uVar3 >> 7 & 1) == 0) {
            *(undefined8 *)((long)plVar1 + lVar9 + 0xf8) = uStack_c0;
            *(ushort *)((long)plVar1 + lVar9 + 0xe8) = uVar3 | 0x80;
          }
          FUN_10a1bd398((long)plVar1 + lVar9 + 0xf8,&uStack_c0);
        }
      }
    }
    else if ((*(undefined ***)((long)plVar1 + lVar9 + 0xf0) != &PTR_DAT_110c072d0) &&
            (FUN_10a1bd5e0(), puVar6 != (undefined8 *)0x0)) {
      FUN_10a1bd7d8();
      *(undefined ***)((long)plVar1 + lVar9 + 0xf0) = &PTR_DAT_110c072d0;
    }
  }
  if (plStack_c8 != (long *)0x0) {
    plVar1 = plStack_c8 + 1;
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
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c8);
    }
  }
  return param_1;
}



/* Entry: 10a65eebc; end: 10a65ef3b;  */

void FUN_10a65eebc(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined **ppuVar11;
  long *plVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  long lStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  lVar9 = 0;
  do {
    if (param_2[9] != 0) {
      lVar10 = param_2[9] << 3;
      plVar12 = param_2;
      do {
        plVar12 = plVar12 + 1;
        if (*plVar12 == *(long *)((long)&PTR_PTR_110c06e98 + lVar9)) {
          FUN_10a421ba8(param_1);
          goto FUN_10a42212c;
        }
        lVar10 = lVar10 + -8;
      } while (lVar10 != 0);
    }
    lVar9 = lVar9 + 8;
  } while (lVar9 != 0x20);
FUN_10a42212c:
  lVar9 = 0;
  do {
    if (param_2[9] != 0) {
      lVar10 = param_2[9] << 3;
      plVar12 = param_2;
      do {
        plVar12 = plVar12 + 1;
        if (*plVar12 == *(long *)((long)&PTR_PTR_110bd9238 + lVar9)) {
          FUN_10a3c73cc(param_1,8);
          if (param_2[9] == 0) goto LAB_10a4221dc;
          lVar9 = param_2[9] << 3;
          plVar12 = param_2;
          goto LAB_10a4221b8;
        }
        lVar10 = lVar10 + -8;
      } while (lVar10 != 0);
    }
    lVar9 = lVar9 + 8;
    if (lVar9 == 0xb8) {
      return;
    }
  } while( true );
LAB_10a4222f8:
  bVar5 = true;
LAB_10a4222fc:
  if (param_2 == plVar12) goto LAB_10a422310;
  goto LAB_10a422250;
LAB_10a422310:
  if (!bVar5) {
    if (bVar4) {
      for (plVar12 = (long *)param_1[0x59]; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
        FUN_10a421cf4(plVar12 + 7);
        FUN_10a019700(plVar12 + 3);
        func_0x00010a421d30(plVar12 + 5);
      }
      FUN_10a421b44(param_1);
    }
    if (!bVar6) {
      return;
    }
    for (plVar12 = (long *)param_1[0x59]; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
      if ((*(char *)(plVar12 + 0x13) == '\x01') && (plVar12[0x11] != 0)) {
        FUN_10a779760();
      }
    }
    return;
  }
  goto code_r0x00010a421ba8;
  while (lVar9 = lVar9 + -8, lVar9 != 0) {
LAB_10a4221b8:
    plVar12 = plVar12 + 1;
    if ((undefined **)*plVar12 == &PTR_DAT_110bcf620) {
      FUN_10a421f1c(param_1);
      break;
    }
  }
LAB_10a4221dc:
  plVar12 = param_1;
  (**(code **)(*param_1 + 0x1c8))();
  if (((int)plVar12 != 0) && (0x171 < *(int *)(*(long *)(param_1[0x2e] + 0xa20) + 0x18))) {
    if (param_2[9] == 0) {
      return;
    }
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    plVar12 = param_2 + param_2[9];
LAB_10a422250:
    lVar9 = 0;
    param_2 = param_2 + 1;
    ppuVar11 = (undefined **)*param_2;
    do {
      if (*(undefined ***)((long)&PTR_PTR_110bd9308 + lVar9) == ppuVar11) goto LAB_10a4222f8;
      lVar9 = lVar9 + 8;
    } while (lVar9 != 0x68);
    lVar9 = 0;
    do {
      iVar13 = -(uint)(*(undefined ***)((long)&PTR_PTR_110bd9370 + lVar9) == ppuVar11);
      iVar14 = -(uint)(*(undefined ***)((long)&PTR_PTR_110bd9378 + lVar9) == ppuVar11);
      uVar8 = CONCAT44(iVar14,iVar13);
      uVar15 = NEON_umaxp(uVar8,uVar8,4);
      if ((uVar15 & 1) != 0) break;
      bVar7 = lVar9 != 0x10;
      lVar9 = lVar9 + 0x10;
    } while (bVar7);
    if ((byte)(((byte)iVar13 & 1) + ((byte)iVar14 & 2)) == '\0') {
      if (ppuVar11 != &PTR_DAT_110ba2010) {
        if (((ppuVar11 == &PTR_DAT_110bc32f0) || (ppuVar11 == &PTR_DAT_110bd9f60)) ||
           (ppuVar11 == &PTR_DAT_110bda018)) {
          bVar6 = true;
          bVar4 = true;
        }
        else {
          lVar9 = 0;
          do {
            if (*(undefined ***)((long)&PTR_PTR_110bd9238 + lVar9) == ppuVar11) goto LAB_10a4222f8;
            lVar9 = lVar9 + 8;
          } while (lVar9 != 0xb8);
        }
      }
    }
    else {
      bVar4 = true;
    }
    goto LAB_10a4222fc;
  }
code_r0x00010a421ba8:
  lVar9 = param_1[0x2e];
  if (lVar9 != 0) {
    for (plVar12 = (long *)param_1[0x59]; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
      if (*(char *)(plVar12 + 0x13) == '\x01') {
        uVar8 = *(undefined8 *)(lVar9 + 0xc50);
        plStack_58 = (long *)plVar12[0x10];
        lStack_60 = plVar12[0xf];
        if (plVar12[0x10] != 0) {
          plVar1 = (long *)(plVar12[0x10] + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plStack_48 = (long *)plVar12[0x12];
        uStack_50 = plVar12[0x11];
        if (plVar12[0x12] != 0) {
          plVar1 = (long *)(plVar12[0x12] + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_10a78871c(uVar8,&lStack_60);
        plVar1 = plStack_48;
        if (plStack_48 != (long *)0x0) {
          plVar2 = plStack_48 + 1;
          do {
            lVar10 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plStack_48 + 0x10))(plStack_48);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
        plVar1 = plStack_58;
        if (plStack_58 != (long *)0x0) {
          plVar2 = plStack_58 + 1;
          do {
            lVar10 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plStack_58 + 0x10))(plStack_58);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
      }
    }
  }
  FUN_10a447a88(param_1 + 0x57);
  FUN_10a421b44(param_1);
  return;
}



/* Entry: 10a65ef3c; end: 10a65ef43;  */

void FUN_10a65ef3c(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  long *plVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  long lStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  plVar9 = (long *)(param_1 + -0xb8);
  lVar10 = 0;
  do {
    if (param_2[9] != 0) {
      lVar11 = param_2[9] << 3;
      plVar13 = param_2;
      do {
        plVar13 = plVar13 + 1;
        if (*plVar13 == *(long *)((long)&PTR_PTR_110c06e98 + lVar10)) {
          FUN_10a421ba8(plVar9);
          goto FUN_10a42212c;
        }
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
    }
    lVar10 = lVar10 + 8;
  } while (lVar10 != 0x20);
FUN_10a42212c:
  lVar10 = 0;
  do {
    if (param_2[9] != 0) {
      lVar11 = param_2[9] << 3;
      plVar13 = param_2;
      do {
        plVar13 = plVar13 + 1;
        if (*plVar13 == *(long *)((long)&PTR_PTR_110bd9238 + lVar10)) {
          FUN_10a3c73cc(plVar9,8);
          if (param_2[9] == 0) goto LAB_10a4221dc;
          lVar10 = param_2[9] << 3;
          plVar13 = param_2;
          goto LAB_10a4221b8;
        }
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
    }
    lVar10 = lVar10 + 8;
    if (lVar10 == 0xb8) {
      return;
    }
  } while( true );
LAB_10a4222f8:
  bVar5 = true;
LAB_10a4222fc:
  if (param_2 == plVar13) goto LAB_10a422310;
  goto LAB_10a422250;
LAB_10a422310:
  if (!bVar5) {
    if (bVar4) {
      for (plVar13 = *(long **)(param_1 + 0x210); plVar13 != (long *)0x0; plVar13 = (long *)*plVar13
          ) {
        FUN_10a421cf4(plVar13 + 7);
        FUN_10a019700(plVar13 + 3);
        func_0x00010a421d30(plVar13 + 5);
      }
      FUN_10a421b44(plVar9);
    }
    if (!bVar6) {
      return;
    }
    for (plVar9 = *(long **)(param_1 + 0x210); plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if ((*(char *)(plVar9 + 0x13) == '\x01') && (plVar9[0x11] != 0)) {
        FUN_10a779760();
      }
    }
    return;
  }
  goto code_r0x00010a421ba8;
  while (lVar10 = lVar10 + -8, lVar10 != 0) {
LAB_10a4221b8:
    plVar13 = plVar13 + 1;
    if ((undefined **)*plVar13 == &PTR_DAT_110bcf620) {
      FUN_10a421f1c(plVar9);
      break;
    }
  }
LAB_10a4221dc:
  plVar13 = plVar9;
  (**(code **)(*plVar9 + 0x1c8))();
  if (((int)plVar13 != 0) && (0x171 < *(int *)(*(long *)(*(long *)(param_1 + 0xb8) + 0xa20) + 0x18))
     ) {
    if (param_2[9] == 0) {
      return;
    }
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    plVar13 = param_2 + param_2[9];
LAB_10a422250:
    lVar10 = 0;
    param_2 = param_2 + 1;
    ppuVar12 = (undefined **)*param_2;
    do {
      if (*(undefined ***)((long)&PTR_PTR_110bd9308 + lVar10) == ppuVar12) goto LAB_10a4222f8;
      lVar10 = lVar10 + 8;
    } while (lVar10 != 0x68);
    lVar10 = 0;
    do {
      iVar14 = -(uint)(*(undefined ***)((long)&PTR_PTR_110bd9370 + lVar10) == ppuVar12);
      iVar15 = -(uint)(*(undefined ***)((long)&PTR_PTR_110bd9378 + lVar10) == ppuVar12);
      uVar8 = CONCAT44(iVar15,iVar14);
      uVar16 = NEON_umaxp(uVar8,uVar8,4);
      if ((uVar16 & 1) != 0) break;
      bVar7 = lVar10 != 0x10;
      lVar10 = lVar10 + 0x10;
    } while (bVar7);
    if ((byte)(((byte)iVar14 & 1) + ((byte)iVar15 & 2)) == '\0') {
      if (ppuVar12 != &PTR_DAT_110ba2010) {
        if (((ppuVar12 == &PTR_DAT_110bc32f0) || (ppuVar12 == &PTR_DAT_110bd9f60)) ||
           (ppuVar12 == &PTR_DAT_110bda018)) {
          bVar6 = true;
          bVar4 = true;
        }
        else {
          lVar10 = 0;
          do {
            if (*(undefined ***)((long)&PTR_PTR_110bd9238 + lVar10) == ppuVar12) goto LAB_10a4222f8;
            lVar10 = lVar10 + 8;
          } while (lVar10 != 0xb8);
        }
      }
    }
    else {
      bVar4 = true;
    }
    goto LAB_10a4222fc;
  }
code_r0x00010a421ba8:
  lVar10 = *(long *)(param_1 + 0xb8);
  if (lVar10 != 0) {
    for (plVar13 = *(long **)(param_1 + 0x210); plVar13 != (long *)0x0; plVar13 = (long *)*plVar13)
    {
      if (*(char *)(plVar13 + 0x13) == '\x01') {
        uVar8 = *(undefined8 *)(lVar10 + 0xc50);
        plStack_58 = (long *)plVar13[0x10];
        lStack_60 = plVar13[0xf];
        if (plVar13[0x10] != 0) {
          plVar1 = (long *)(plVar13[0x10] + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plStack_48 = (long *)plVar13[0x12];
        uStack_50 = plVar13[0x11];
        if (plVar13[0x12] != 0) {
          plVar1 = (long *)(plVar13[0x12] + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_10a78871c(uVar8,&lStack_60);
        plVar1 = plStack_48;
        if (plStack_48 != (long *)0x0) {
          plVar2 = plStack_48 + 1;
          do {
            lVar11 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_48 + 0x10))(plStack_48);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
        plVar1 = plStack_58;
        if (plStack_58 != (long *)0x0) {
          plVar2 = plStack_58 + 1;
          do {
            lVar11 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_58 + 0x10))(plStack_58);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
      }
    }
  }
  FUN_10a447a88(param_1 + 0x200);
  FUN_10a421b44(plVar9);
  return;
}



/* Entry: 10a65ef44; end: 10a65f03f;  */

void FUN_10a65ef44(long param_1)

{
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_48;
  
  FUN_10a66ac20();
  *(undefined8 *)(param_1 + 0x680) = *(undefined8 *)(param_1 + 0x170);
  func_0x0001094f981c(*(undefined8 *)(param_1 + 0x690));
  FUN_10a1c4e78(&lStack_60,param_1 + 0x680,param_1 + 0x5a0);
  for (; lStack_60 != lStack_58; lStack_60 = lStack_60 + 0x18) {
    FUN_10a1d5490(*(undefined8 *)(param_1 + 0x690),lStack_60,lStack_60,&UNK_10f642cb1);
    FUN_10a1c5098(param_1 + 0x680,lStack_60);
  }
  puStack_48 = (undefined1 *)&lStack_60;
  FUN_10a0426d8(&puStack_48);
  return;
}



/* Entry: 10a65f040; end: 10a65f09b;  */

void FUN_10a65f040(float param_1,float param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined4 uStack_64;
  long lStack_60;
  long *plStack_58;
  
  lVar7 = param_3[0xf];
  plVar4 = param_3;
  (**(code **)(*param_3 + 8))();
  lVar6 = plVar4[0x28];
  if ((*(byte *)(lVar6 + 0x2a) & 0x24) != 0) {
    FUN_10a3e8fd4(lVar6);
  }
  if ((char)param_3[1] == '\x01') {
    plVar4 = (long *)param_3[3];
    if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0)
       ) {
      lVar8 = param_3[2];
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
      if (lVar8 != 0) {
        return;
      }
    }
    plVar4 = param_3;
    (**(code **)(*param_3 + 8))();
    lVar8 = plVar4[0x49];
    if (lVar8 == 0) {
      uVar14 = *(undefined8 *)(*(long *)(lVar7 + 0x620) + 0x24);
      uVar13 = *(undefined8 *)(*(long *)(lVar7 + 0x620) + 0x2c);
      FUN_10a9dc58c();
      lStack_60 = 0;
      plStack_58 = (long *)0x0;
      plVar4 = (long *)param_3[1];
      if ((plVar4 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plStack_58 = plVar4, plVar4 != (long *)0x0)) {
        lStack_60 = *param_3;
      }
      plVar4 = plStack_58;
      fVar9 = (float)uVar13;
      fVar10 = (float)((ulong)uVar13 >> 0x20);
      fVar11 = ((float)uVar14 + fVar9) * 0.5;
      fVar12 = ((float)((ulong)uVar14 >> 0x20) + fVar10) * 0.5;
      uStack_78 = CONCAT44(fVar12,fVar11);
      uStack_70 = 0;
      uStack_6c = CONCAT44(fVar10 - fVar12,fVar9 - fVar11);
      uStack_64 = 0;
      FUN_10a602f60();
      if (plVar4 == (long *)0x0) {
        return;
      }
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
    }
    else {
      FUN_10a9dc58c();
      lStack_60 = 0;
      plStack_58 = (long *)0x0;
      plVar4 = (long *)param_3[1];
      if ((plVar4 == (long *)0x0) ||
         (__ZNSt3__119__shared_weak_count4lockEv(), plStack_58 = plVar4, plVar4 == (long *)0x0)) {
        lVar7 = 0;
      }
      else {
        lVar7 = *param_3;
        lStack_60 = lVar7;
      }
      plVar4 = plStack_58;
      FUN_10a394a64(lVar8);
      func_0x00010acae698(lVar8 + 0x268);
      uVar13 = NEON_fmov(0x3f800000,4);
      fVar10 = (float)((ulong)uVar13 >> 0x20);
      fVar11 = ((float)*(undefined8 *)(lVar8 + 0x2a0) + (float)uVar13) * 0.5;
      fVar12 = ((float)((ulong)*(undefined8 *)(lVar8 + 0x2a0) >> 0x20) + fVar10) * 0.5;
      fVar9 = param_1 * ((float)uVar13 - fVar11);
      fVar10 = param_2 * (fVar10 - fVar12);
      fVar11 = (fVar9 - param_1 * fVar11) * 0.5;
      fVar12 = (fVar10 - param_2 * fVar12) * 0.5;
      uStack_78 = CONCAT44(fVar12,fVar11);
      uStack_70 = 0;
      uStack_6c = CONCAT44(fVar10 - fVar12,fVar9 - fVar11);
      uStack_64 = 0;
      FUN_10a602f60(lVar7,&uStack_78,lVar6 + 0xc0);
      if (plVar4 == (long *)0x0) {
        return;
      }
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
    }
    if (lVar6 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a65f09c; end: 10a65f0db;  */

void FUN_10a65f09c(float param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined4 uStack_64;
  long lStack_60;
  long *plStack_58;
  
  fVar10 = (float)param_2;
  for (plVar7 = *(long **)(*(long *)(param_3 + 0x628) + 0x10); plVar7 != (long *)0x0;
      plVar7 = (long *)*plVar7) {
    FUN_10a1c5098(param_3 + 0x618,plVar7 + 2);
    fVar10 = (float)param_2;
  }
  plVar7 = (long *)(param_3 + 0x488);
  lVar8 = *(long *)(param_3 + 0x500);
  plVar4 = plVar7;
  (**(code **)(*plVar7 + 8))();
  lVar6 = plVar4[0x28];
  if ((*(byte *)(lVar6 + 0x2a) & 0x24) != 0) {
    FUN_10a3e8fd4(lVar6);
  }
  if (*(char *)(param_3 + 0x490) == '\x01') {
    plVar4 = *(long **)(param_3 + 0x4a0);
    if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0)
       ) {
      lVar9 = *(long *)(param_3 + 0x498);
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
      if (lVar9 != 0) {
        return;
      }
    }
    plVar4 = plVar7;
    (**(code **)(*plVar7 + 8))();
    lVar9 = plVar4[0x49];
    if (lVar9 == 0) {
      lVar6 = *(long *)(lVar8 + 0x620);
      uVar16 = *(undefined8 *)(lVar6 + 0x24);
      uVar15 = *(undefined8 *)(lVar6 + 0x2c);
      FUN_10a9dc58c();
      lStack_60 = 0;
      plStack_58 = (long *)0x0;
      plVar4 = (long *)plVar7[1];
      if ((plVar4 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plStack_58 = plVar4, plVar4 != (long *)0x0)) {
        lStack_60 = *plVar7;
      }
      plVar7 = plStack_58;
      fVar11 = (float)uVar15;
      fVar12 = (float)((ulong)uVar15 >> 0x20);
      fVar10 = ((float)uVar16 + fVar11) * 0.5;
      fVar13 = ((float)((ulong)uVar16 >> 0x20) + fVar12) * 0.5;
      uStack_78 = CONCAT44(fVar13,fVar10);
      uStack_70 = 0;
      uStack_6c = CONCAT44(fVar12 - fVar13,fVar11 - fVar10);
      uStack_64 = 0;
      FUN_10a602f60();
      if (plVar7 == (long *)0x0) {
        return;
      }
      plVar4 = plVar7 + 1;
      do {
        lVar6 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      FUN_10a9dc58c();
      lStack_60 = 0;
      plStack_58 = (long *)0x0;
      plVar4 = (long *)plVar7[1];
      if ((plVar4 == (long *)0x0) ||
         (__ZNSt3__119__shared_weak_count4lockEv(), plStack_58 = plVar4, plVar4 == (long *)0x0)) {
        lVar8 = 0;
      }
      else {
        lVar8 = *plVar7;
        lStack_60 = lVar8;
      }
      plVar7 = plStack_58;
      FUN_10a394a64(lVar9);
      func_0x00010acae698(lVar9 + 0x268);
      uVar15 = NEON_fmov(0x3f800000,4);
      fVar12 = (float)((ulong)uVar15 >> 0x20);
      fVar13 = ((float)*(undefined8 *)(lVar9 + 0x2a0) + (float)uVar15) * 0.5;
      fVar14 = ((float)((ulong)*(undefined8 *)(lVar9 + 0x2a0) >> 0x20) + fVar12) * 0.5;
      fVar11 = param_1 * ((float)uVar15 - fVar13);
      fVar12 = fVar10 * (fVar12 - fVar14);
      fVar13 = (fVar11 - param_1 * fVar13) * 0.5;
      fVar10 = (fVar12 - fVar10 * fVar14) * 0.5;
      uStack_78 = CONCAT44(fVar10,fVar13);
      uStack_70 = 0;
      uStack_6c = CONCAT44(fVar12 - fVar10,fVar11 - fVar13);
      uStack_64 = 0;
      FUN_10a602f60(lVar8,&uStack_78,lVar6 + 0xc0);
      if (plVar7 == (long *)0x0) {
        return;
      }
      plVar4 = plVar7 + 1;
      do {
        lVar6 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return;
}



/* Entry: 10a65f0dc; end: 10a65f107;  */

void FUN_10a65f0dc(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((*(long *)(param_1[0x2d] + 0x248) == 0) ||
     ((*(ushort *)(*(long *)(param_1[0x2d] + 0x248) + 0x180) & 0x17) != 0)) {
    lVar2 = param_1[0x60];
    param_1[0x60] = 0;
    if (lVar2 != 0) {
      func_0x00010a3f1eac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
    return;
  }
  lVar2 = *(long *)(param_1[0x2d] + 0x248);
  if ((lVar2 != 0) && ((*(ushort *)(lVar2 + 0x180) & 0x17) == 0)) {
    plVar1 = param_1;
    FUN_10a00ff8c();
    if (plVar1 != (long *)0x0) {
      uVar3 = *(undefined8 *)(param_1[0x2e] + 0xa20);
      FUN_10a394a64(lVar2);
      FUN_10a396450(0x3f800000,uVar3,lVar2 + 0x268,param_1,(long)plVar1 + 0x144,plVar1 + 0x27,0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010a423d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x210))(param_1,lVar2);
    return;
  }
  return;
}



/* Entry: 10a65f108; end: 10a65f273;  */

void FUN_10a65f108(long *param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    if ((((char)param_1[0xc6] == '\x01') &&
        (unaff_x20 = (long *)param_1[0x2d], unaff_x20[0x49] == 0)) &&
       (lVar2 = param_1[0xc4], lVar2 != 0)) {
      unaff_x21 = (long *)param_1[0x2e];
      uVar3 = *(undefined4 *)(lVar2 + 0x24);
      uVar4 = *(uint *)(lVar2 + 0x28);
      uVar5 = *(undefined4 *)(lVar2 + 0x2c);
      uVar6 = *(uint *)(lVar2 + 0x30);
      *(undefined4 *)((long)register0x00000008 + -0x84) = uVar3;
      *(ulong *)((long)register0x00000008 + -0x80) = (ulong)uVar4;
      *(undefined4 *)((long)register0x00000008 + -0x90) = uVar5;
      *(ulong *)((long)register0x00000008 + -0x8c) = (ulong)uVar4;
      *(undefined4 *)((long)register0x00000008 + -0x9c) = uVar5;
      *(ulong *)((long)register0x00000008 + -0x98) = (ulong)uVar6;
      *(undefined4 *)((long)register0x00000008 + -0xa8) = uVar3;
      *(ulong *)((long)register0x00000008 + -0xa4) = (ulong)uVar6;
      unaff_x19 = unaff_x20[0x28];
      if ((*(byte *)(unaff_x19 + 0x2a) & 0x24) != 0) {
        FUN_10a3e8fd4(unaff_x19);
      }
      *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x3f8000003f800000;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = 0x3f66666600000000;
      param_1 = unaff_x21;
      plVar1 = unaff_x20;
      FUN_10a3df648(unaff_x21,unaff_x20,(undefined1 *)((long)register0x00000008 + -0x78),8);
      if (plVar1 != (long *)0x0) {
        lVar2 = (long)plVar1 << 3;
        plVar1 = param_1;
        do {
          unaff_x20 = plVar1 + 1;
          unaff_x21 = (long *)*plVar1;
          FUN_10aaf962c(unaff_x21,unaff_x19 + 0xc0,(undefined1 *)((long)register0x00000008 + -0x84),
                        (undefined1 *)((long)register0x00000008 + -0x90),
                        (undefined1 *)((long)register0x00000008 + -0xc0),0);
          FUN_10aaf962c(unaff_x21,unaff_x19 + 0xc0,(undefined1 *)((long)register0x00000008 + -0x90),
                        (undefined1 *)((long)register0x00000008 + -0x9c),
                        (undefined1 *)((long)register0x00000008 + -0xc0),0);
          FUN_10aaf962c(unaff_x21,unaff_x19 + 0xc0,(undefined1 *)((long)register0x00000008 + -0x9c),
                        (undefined1 *)((long)register0x00000008 + -0xa8),
                        (undefined1 *)((long)register0x00000008 + -0xc0),0);
          param_1 = unaff_x21;
          FUN_10aaf962c(unaff_x21,unaff_x19 + 0xc0,(undefined1 *)((long)register0x00000008 + -0xa8),
                        (undefined1 *)((long)register0x00000008 + -0x84),
                        (undefined1 *)((long)register0x00000008 + -0xc0),0);
          lVar2 = lVar2 + -8;
          plVar1 = unaff_x20;
        } while (lVar2 != 0);
        unaff_x22 = 0;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
    break;
    unaff_x30 = FUN_10a65f274;
    ___stack_chk_fail();
    param_1 = param_1 + -0xd;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
  }
  return;
}



/* Entry: 10a65f274; end: 10a65f27b;  */

void FUN_10a65f274(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  
  while( true ) {
    plVar1 = (long *)(param_1 + -0x68);
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    if (((*(char *)(param_1 + 0x5c8) == '\x01') &&
        (unaff_x20 = *(long **)(param_1 + 0x100), unaff_x20[0x49] == 0)) &&
       (lVar3 = *(long *)(param_1 + 0x5b8), lVar3 != 0)) {
      unaff_x21 = *(long *)(param_1 + 0x108);
      uVar4 = *(undefined4 *)(lVar3 + 0x24);
      uVar5 = *(uint *)(lVar3 + 0x28);
      uVar6 = *(undefined4 *)(lVar3 + 0x2c);
      uVar7 = *(uint *)(lVar3 + 0x30);
      *(undefined4 *)((long)register0x00000008 + -0x84) = uVar4;
      *(ulong *)((long)register0x00000008 + -0x80) = (ulong)uVar5;
      *(undefined4 *)((long)register0x00000008 + -0x90) = uVar6;
      *(ulong *)((long)register0x00000008 + -0x8c) = (ulong)uVar5;
      *(undefined4 *)((long)register0x00000008 + -0x9c) = uVar6;
      *(ulong *)((long)register0x00000008 + -0x98) = (ulong)uVar7;
      *(undefined4 *)((long)register0x00000008 + -0xa8) = uVar4;
      *(ulong *)((long)register0x00000008 + -0xa4) = (ulong)uVar7;
      unaff_x19 = unaff_x20[0x28];
      if ((*(byte *)(unaff_x19 + 0x2a) & 0x24) != 0) {
        FUN_10a3e8fd4(unaff_x19);
      }
      *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x3f8000003f800000;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = 0x3f66666600000000;
      plVar1 = (long *)unaff_x21;
      plVar2 = unaff_x20;
      FUN_10a3df648(unaff_x21,unaff_x20,(undefined1 *)((long)register0x00000008 + -0x78),8);
      if (plVar2 != (long *)0x0) {
        lVar3 = (long)plVar2 << 3;
        plVar2 = plVar1;
        do {
          unaff_x20 = plVar2 + 1;
          unaff_x21 = *plVar2;
          FUN_10aaf962c(unaff_x21,unaff_x19 + 0xc0,(undefined1 *)((long)register0x00000008 + -0x84),
                        (undefined1 *)((long)register0x00000008 + -0x90),
                        (undefined1 *)((long)register0x00000008 + -0xc0),0);
          FUN_10aaf962c(unaff_x21,unaff_x19 + 0xc0,(undefined1 *)((long)register0x00000008 + -0x90),
                        (undefined1 *)((long)register0x00000008 + -0x9c),
                        (undefined1 *)((long)register0x00000008 + -0xc0),0);
          FUN_10aaf962c(unaff_x21,unaff_x19 + 0xc0,(undefined1 *)((long)register0x00000008 + -0x9c),
                        (undefined1 *)((long)register0x00000008 + -0xa8),
                        (undefined1 *)((long)register0x00000008 + -0xc0),0);
          plVar1 = (long *)unaff_x21;
          FUN_10aaf962c(unaff_x21,unaff_x19 + 0xc0,(undefined1 *)((long)register0x00000008 + -0xa8),
                        (undefined1 *)((long)register0x00000008 + -0x84),
                        (undefined1 *)((long)register0x00000008 + -0xc0),0);
          lVar3 = lVar3 + -8;
          plVar2 = unaff_x20;
        } while (lVar3 != 0);
        unaff_x22 = 0;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
    break;
    unaff_x30 = FUN_10a65f274;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    param_1 = (long)plVar1;
  }
  return;
}



/* Entry: 10a65f27c; end: 10a65f36f;  */

undefined1 * FUN_10a65f27c(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  ppuVar2 = &puStack_30;
  puVar1 = param_1;
  if (0xcd < *(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18)) {
    puVar1 = *(undefined1 **)(param_1 + 0x168);
    FUN_10a433470();
    if ((int)puVar1 != 0) {
      puVar1 = *(undefined1 **)(*(long *)(param_1 + 0x168) + 0x248);
      puStack_30 = &UNK_10f66ad98;
      uStack_28 = 0x3a;
      if ((puVar1 == (undefined1 *)0x0) || (FUN_10a3958f0(), puVar1 == (undefined1 *)0x0)) {
        uStack_28 = 0x3a;
        puStack_30 = &UNK_10f66ad98;
        FUN_10a0edfc4();
        *(undefined ***)((long)ppuVar2 + 200) = &PTR_DAT_110b17898;
        func_0x00010a004dac((undefined1 *)((long)ppuVar2 + 0xd0));
        *(undefined ***)((long)ppuVar2 + 0x90) = &PTR_DAT_110b17898;
        func_0x00010a004dac((undefined1 *)((long)ppuVar2 + 0x98));
        if (*(char *)((long)ppuVar2 + 0x6f) < '\0') {
          __ZdlPv(*(undefined8 *)((long)ppuVar2 + 0x58));
        }
        if (*(char *)((long)ppuVar2 + 0x1f) < '\0') {
          __ZdlPv(*(undefined8 *)((long)ppuVar2 + 8));
        }
        return (undefined1 *)ppuVar2;
      }
    }
  }
  return puVar1;
}



/* Entry: 10a65f370; end: 10a65f77f;  */

/* WARNING: Removing unreachable block (ram,0x00010a65f5d0) */
/* WARNING: Removing unreachable block (ram,0x00010a65f664) */

void FUN_10a65f370(undefined8 *param_1,long param_2,int param_3,int param_4,long *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ushort uVar6;
  long *plVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  ushort uVar10;
  long lStack_108;
  long *plStack_100;
  char cStack_f1;
  char cStack_f0;
  undefined8 auStack_e8 [2];
  char cStack_d1;
  char cStack_d0;
  undefined8 uStack_c8;
  ushort uStack_c0;
  char cStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  char cStack_81;
  char cStack_80;
  undefined2 uStack_74;
  undefined1 uStack_72;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if ((param_4 == 0) || (param_3 != 0)) {
    if (*(char *)(param_2 + 0x7f) < '\0') {
      func_0x000107c3192c(&uStack_70,*(undefined8 *)(param_2 + 0x68),*(undefined8 *)(param_2 + 0x70)
                         );
    }
    else {
      uStack_68 = *(undefined8 *)(param_2 + 0x70);
      uStack_70 = *(undefined8 *)(param_2 + 0x68);
      uStack_60 = *(undefined8 *)(param_2 + 0x78);
    }
  }
  else {
    func_0x000107c2b054(&uStack_70,"default");
  }
  uStack_98 = 0;
  cStack_80 = '\0';
  uStack_b0 = 0;
  uStack_a8 = 0;
  lStack_a0 = 0;
  lVar4 = *param_5;
  if (lVar4 == 0) {
    uVar9 = 0;
    uVar8 = 0;
    uVar10 = 0;
    uVar6 = 0;
    goto LAB_10a65f5b4;
  }
  lStack_108 = CONCAT44(lStack_108._4_4_,8);
  FUN_10a1cc830(lVar4,&lStack_108);
  if (lVar4 == 0) {
LAB_10a65f524:
    uVar6 = 0;
    uVar10 = 0;
    uVar8 = 0;
    uVar9 = 0;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x18);
    ___dynamic_cast(lVar5,&PTR_DAT_110baded8,&PTR_DAT_110badf00,0);
    plVar7 = *(long **)(lVar4 + 0x20);
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
    lStack_108 = lVar5;
    plStack_100 = plVar7;
    FUN_10a1ccb30(auStack_e8,lVar5 + 0x10);
    uStack_c8 = *(undefined8 *)(lVar5 + 0x30);
    uStack_c0 = *(ushort *)(lVar5 + 0x38);
    cStack_b8 = '\x01';
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
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
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    uVar6 = uStack_c0;
    if (cStack_b8 != '\x01') goto LAB_10a65f524;
    uVar8 = (undefined1)uStack_c8;
    uStack_74 = uStack_c8._1_2_;
    uStack_72 = uStack_c8._3_1_;
    uVar9 = uStack_c8._4_1_;
    func_0x00010a1cca60(&uStack_98,auStack_e8);
    uVar10 = uVar6 >> 8;
    if (((cStack_b8 == '\x01') && (cStack_d0 == '\x01')) && (cStack_d1 < '\0')) {
      __ZdlPv(auStack_e8[0]);
    }
  }
  FUN_10a65f780(auStack_e8,param_5);
  if (cStack_d0 == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_b0,auStack_e8);
  }
  else {
    FUN_10a65f898(&lStack_108,param_5);
    if (((cStack_f0 == '\x01') &&
        (__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                   (&uStack_b0,&lStack_108), cStack_f0 == '\x01')) && (cStack_f1 < '\0')) {
      __ZdlPv(lStack_108);
    }
  }
  if ((cStack_d0 == '\x01') && (cStack_d1 < '\0')) {
    __ZdlPv(auStack_e8[0]);
  }
LAB_10a65f5b4:
  param_1[1] = uStack_68;
  *param_1 = uStack_70;
  param_1[2] = uStack_60;
  *(undefined1 *)(param_1 + 3) = uVar8;
  *(undefined2 *)((long)param_1 + 0x19) = uStack_74;
  *(undefined1 *)((long)param_1 + 0x1b) = uStack_72;
  *(undefined1 *)((long)param_1 + 0x1c) = uVar9;
  *(ushort *)(param_1 + 4) = uVar6 & 0xff | uVar10 << 8;
  FUN_10a1ccb30(param_1 + 5,&uStack_98);
  if (lStack_a0 < 0) {
    func_0x000107c3192c(param_1 + 9,uStack_b0,uStack_a8);
    if (lStack_a0 < 0) {
      __ZdlPv(uStack_b0);
    }
  }
  else {
    param_1[10] = uStack_a8;
    param_1[9] = uStack_b0;
    param_1[0xb] = lStack_a0;
  }
  if ((cStack_80 == '\x01') && (cStack_81 < '\0')) {
    __ZdlPv(CONCAT71(uStack_97,uStack_98));
  }
  return;
}



/* Entry: 10a65f780; end: 10a65f897;  */

void FUN_10a65f780(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_30;
  long *plStack_28;
  
  lVar5 = *param_2;
  lStack_30 = CONCAT44(lStack_30._4_4_,6);
  FUN_10a1cc830(lVar5,&lStack_30);
  if (lVar5 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    lVar6 = *(long *)(lVar5 + 0x18);
    if ((lVar6 == 0) || (___dynamic_cast(lVar6,&PTR_DAT_110baded8,&PTR_DAT_110badee8,0), lVar6 == 0)
       ) {
      lStack_30 = 0;
      plStack_28 = (long *)0x0;
    }
    else {
      plStack_28 = *(long **)(lVar5 + 0x20);
      lStack_30 = lVar6;
      if (plStack_28 != (long *)0x0) {
        plVar1 = plStack_28 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    plVar1 = plStack_28;
    if (*(char *)(lStack_30 + 0x27) < '\0') {
      func_0x000107c3192c(param_1,*(undefined8 *)(lStack_30 + 0x10),
                          *(undefined8 *)(lStack_30 + 0x18));
    }
    else {
      uVar8 = *(undefined8 *)(lStack_30 + 0x18);
      uVar7 = *(undefined8 *)(lStack_30 + 0x10);
      param_1[2] = *(undefined8 *)(lStack_30 + 0x20);
      param_1[1] = uVar8;
      *param_1 = uVar7;
    }
    *(undefined1 *)(param_1 + 3) = 1;
    if (plVar1 != (long *)0x0) {
      plVar2 = plVar1 + 1;
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
        (**(code **)(*plVar1 + 0x10))(plVar1);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a65f898; end: 10a65f9af;  */

void FUN_10a65f898(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_30;
  long *plStack_28;
  
  lVar5 = *param_2;
  lStack_30 = CONCAT44(lStack_30._4_4_,7);
  FUN_10a1cc830(lVar5,&lStack_30);
  if (lVar5 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    lVar6 = *(long *)(lVar5 + 0x18);
    if ((lVar6 == 0) || (___dynamic_cast(lVar6,&PTR_DAT_110baded8,&PTR_DAT_110badee8,0), lVar6 == 0)
       ) {
      lStack_30 = 0;
      plStack_28 = (long *)0x0;
    }
    else {
      plStack_28 = *(long **)(lVar5 + 0x20);
      lStack_30 = lVar6;
      if (plStack_28 != (long *)0x0) {
        plVar1 = plStack_28 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    plVar1 = plStack_28;
    if (*(char *)(lStack_30 + 0x27) < '\0') {
      func_0x000107c3192c(param_1,*(undefined8 *)(lStack_30 + 0x10),
                          *(undefined8 *)(lStack_30 + 0x18));
    }
    else {
      uVar8 = *(undefined8 *)(lStack_30 + 0x18);
      uVar7 = *(undefined8 *)(lStack_30 + 0x10);
      param_1[2] = *(undefined8 *)(lStack_30 + 0x20);
      param_1[1] = uVar8;
      *param_1 = uVar7;
    }
    *(undefined1 *)(param_1 + 3) = 1;
    if (plVar1 != (long *)0x0) {
      plVar2 = plVar1 + 1;
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
        (**(code **)(*plVar1 + 0x10))(plVar1);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a65f9b0; end: 10a65fab7;  */

long ** FUN_10a65f9b0(long **param_1,byte *param_2,byte *param_3,long param_4)

{
  float *pfVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  float fVar6;
  undefined **ppuVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  code *pcVar14;
  bool bVar15;
  long **pplVar16;
  long *plVar17;
  long *plVar18;
  ulong *puVar19;
  undefined **ppuVar20;
  undefined8 *puVar21;
  short sVar22;
  int iVar23;
  undefined ***pppuVar24;
  undefined ***pppuVar25;
  float *pfVar26;
  ulong uVar27;
  long lVar28;
  short *psVar29;
  undefined *puVar30;
  long lVar31;
  ulong uVar32;
  long **pplVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  long *plVar37;
  undefined8 uVar38;
  long lVar39;
  long **pplVar40;
  undefined ***pppuVar41;
  short *psVar42;
  char *pcVar43;
  undefined **ppuVar44;
  long *plVar45;
  long **pplVar46;
  undefined ***pppuVar47;
  undefined ***pppuVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  float fVar55;
  long lVar56;
  long lVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fStack_438;
  undefined1 uStack_3b8;
  undefined7 uStack_3b7;
  long lStack_3b0;
  undefined7 uStack_3a8;
  undefined1 uStack_3a1;
  long **pplStack_3a0;
  long *plStack_398;
  undefined **ppuStack_390;
  undefined **ppuStack_388;
  undefined **ppuStack_380;
  long *plStack_378;
  undefined2 uStack_370;
  undefined6 uStack_36e;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined7 uStack_358;
  char cStack_351;
  char cStack_350;
  undefined7 uStack_34f;
  long *plStack_348;
  long *plStack_340;
  undefined7 uStack_338;
  char cStack_331;
  long *plStack_330;
  undefined ***pppuStack_328;
  long **pplStack_320;
  ulong uStack_318;
  float fStack_310;
  long **pplStack_308;
  long *plStack_300;
  long lStack_2f8;
  undefined1 uStack_2e9;
  undefined ***pppuStack_2e8;
  long *plStack_2e0;
  long *plStack_2d0;
  long *plStack_2c8;
  long **pplStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined8 *apuStack_2a8 [7];
  long *plStack_270;
  long *plStack_268;
  long **pplStack_260;
  undefined8 *apuStack_258 [7];
  undefined1 uStack_220;
  undefined7 uStack_21f;
  long *plStack_218;
  undefined7 uStack_210;
  char cStack_209;
  undefined8 auStack_200 [2];
  char acStack_1e9 [9];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 uStack_1b8;
  undefined **ppuStack_1b0;
  float fStack_1a8;
  undefined2 uStack_1a4;
  undefined2 uStack_1a2;
  float fStack_1a0;
  undefined2 uStack_19c;
  undefined2 uStack_19a;
  float fStack_198;
  float fStack_194;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  float fStack_140;
  undefined **appuStack_138 [2];
  undefined **ppuStack_128;
  char cStack_121;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  float fStack_108;
  long lStack_f8;
  
  plVar45 = param_1[1];
  if (plVar45 < param_1[2]) {
    lVar39 = *(long *)(param_2 + 8);
    lVar31 = *(long *)param_2;
    lVar28 = *(long *)(param_2 + 0x10);
    lVar57 = *(long *)(param_2 + 0x28);
    lVar56 = *(long *)(param_2 + 0x20);
    plVar45[3] = *(long *)(param_2 + 0x18);
    plVar45[2] = lVar28;
    plVar45[5] = lVar57;
    plVar45[4] = lVar56;
    plVar45[1] = lVar39;
    *plVar45 = lVar31;
    plVar45 = plVar45 + 6;
    pplVar46 = param_1;
LAB_10a65fa98:
    param_1[1] = plVar45;
    return pplVar46;
  }
  pplVar40 = (long **)*param_1;
  uVar27 = ((long)plVar45 - (long)pplVar40 >> 4) * -0x5555555555555555 + 1;
  if (uVar27 < 0x555555555555556) {
    lVar31 = (long)param_1[2] - (long)pplVar40 >> 4;
    uVar32 = lVar31 * 0x5555555555555556;
    if (uVar32 < uVar27 || uVar32 - uVar27 == 0) {
      uVar32 = uVar27;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar31 * -0x5555555555555555)) {
      uVar32 = 0x555555555555555;
    }
    if (uVar32 < 0x555555555555556) {
      pplVar16 = (long **)(uVar32 * 0x30);
      __Znwm();
      puVar21 = (undefined8 *)((long)pplVar16 + ((long)plVar45 - (long)pplVar40));
      uVar38 = *(undefined8 *)param_2;
      uVar54 = *(undefined8 *)(param_2 + 0x18);
      uVar53 = *(undefined8 *)(param_2 + 0x10);
      puVar21[1] = *(undefined8 *)(param_2 + 8);
      *puVar21 = uVar38;
      puVar21[3] = uVar54;
      puVar21[2] = uVar53;
      uVar38 = *(undefined8 *)(param_2 + 0x20);
      puVar21[5] = *(undefined8 *)(param_2 + 0x28);
      puVar21[4] = uVar38;
      plVar45 = puVar21 + 6;
      pplVar46 = pplVar16;
      _memcpy();
      *param_1 = (long *)pplVar16;
      param_1[1] = plVar45;
      param_1[2] = (long *)(pplVar16 + uVar32 * 6);
      if (pplVar40 != (long **)0x0) {
        __ZdlPv(pplVar40);
        pplVar46 = pplVar40;
      }
      goto LAB_10a65fa98;
    }
  }
  else {
    FUN_10a66dd08();
  }
  func_0x000109ffded8();
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar45 = param_1[0x71];
  fVar6 = 0.0;
  if (1e-06 <= *(float *)(param_1 + 0x79)) {
    fVar6 = 1.0 / *(float *)(param_1 + 0x79);
  }
  fVar55 = *(float *)(param_3 + 0x88) * 100.0;
  bVar3 = *param_3;
  fStack_438 = 0.0;
  fVar51 = 0.0;
  if (param_3[0x8c] == 0) {
    fVar51 = fVar55 * 0.5;
  }
  fVar50 = fVar55 * -0.5;
  if (param_3[0x8c] != 1) {
    fVar50 = fVar51;
  }
  pppuStack_328 = (undefined ***)0x0;
  plStack_330 = (long *)0x0;
  uStack_318 = 0;
  pplStack_320 = (long **)0x0;
  fStack_310 = 1.0;
  lVar31 = plVar45[3];
  lVar39 = plVar45[4];
  if (lVar39 != lVar31) {
    uVar27 = 0;
    do {
      pppuVar41 = (undefined ***)**(undefined8 **)(lVar31 + uVar27 * 0x70 + 0x28);
      if (pppuVar41 == (undefined ***)0x0) {
        pppuVar47 = (undefined ***)0x0;
      }
      else {
        pppuVar47 = pppuVar41;
        ___dynamic_cast(pppuVar41,&PTR_DAT_110c48fb0,&PTR_DAT_110c46458,0);
      }
      uVar32 = (lVar39 - lVar31 >> 4) * 0x6db6db6db6db6db7;
      if (uVar32 < uVar27 || uVar32 - uVar27 == 0) goto LAB_10a662420;
      FUN_10a65f370(&ppuStack_390,pppuVar41,pppuVar47 != (undefined ***)0x0,bVar3 >> 1 & 1,
                    lVar31 + uVar27 * 0x70 + 0x50);
      uVar32 = (plVar45[4] - plVar45[3] >> 4) * 0x6db6db6db6db6db7;
      if (uVar32 < uVar27 || uVar32 - uVar27 == 0) goto LAB_10a662420;
      lVar31 = **(long **)(plVar45[3] + uVar27 * 0x70 + 0x28);
      FUN_10ab29680(fVar55);
      if (lVar31 != 0) {
        FUN_10a3ad2b8(&pplStack_3a0);
        plVar17 = pplStack_3a0[0x1c];
        if (plVar17 == (long *)0x0) {
LAB_10a65fcf0:
          lVar31 = 0;
        }
        else {
          (**(code **)(*plVar17 + 0x90))();
          lVar31 = *plVar17;
          if (lVar31 == 0) goto LAB_10a65fcf0;
          ___dynamic_cast(lVar31,&PTR_DAT_110c4a868,&PTR_DAT_110bf06a0,0);
        }
        pppuVar48 = &ppuStack_390;
        FUN_10a67e860();
        pppuVar25 = pppuStack_328;
        if (pppuStack_328 != (undefined ***)0x0) {
          uVar32 = (long)pppuStack_328 - 1;
          if (((ulong)pppuStack_328 & uVar32) == 0) {
            pppuVar41 = (undefined ***)(uVar32 & (ulong)pppuVar48);
          }
          else {
            pppuVar41 = pppuVar48;
            if (pppuStack_328 <= pppuVar48) {
              uVar34 = 0;
              if (pppuStack_328 != (undefined ***)0x0) {
                uVar34 = (ulong)pppuVar48 / (ulong)pppuStack_328;
              }
              pppuVar41 = (undefined ***)((long)pppuVar48 - uVar34 * (long)pppuStack_328);
            }
          }
          if (((undefined8 *)plStack_330[(long)pppuVar41] != (undefined8 *)0x0) &&
             (pplVar46 = *(long ***)plStack_330[(long)pppuVar41], pplVar46 != (long **)0x0)) {
LAB_10a65fd44:
            pppuVar24 = (undefined ***)pplVar46[1];
            if (pppuVar24 == pppuVar48) {
              pplVar40 = pplVar46 + 2;
              FUN_10a67e958(pplVar40,&ppuStack_390);
              if (((ulong)pplVar40 & 1) == 0) goto LAB_10a65fd8c;
              if ((bVar3 >> 1 & 1) == 0) goto LAB_10a6600b4;
              if (((ulong)pplVar46[0x13] & 1) == 0) {
                FUN_10a56327c(&uStack_1e0,&plStack_270);
                pplVar40 = pplVar46 + 0x10;
                FUN_10a551e24(pplVar40,&uStack_1e0);
                pplVar16 = uStack_1d8;
                if (uStack_1d8 != (long **)0x0) {
                  pplVar33 = uStack_1d8 + 1;
                  do {
                    plVar17 = *pplVar33;
                    cVar5 = '\x01';
                    bVar15 = (bool)ExclusiveMonitorPass(pplVar33,0x10);
                    if (bVar15) {
                      *pplVar33 = (long *)((long)plVar17 + -1);
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (plVar17 == (long *)0x0) {
                    (*(code *)(*uStack_1d8)[2])(uStack_1d8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                    pplVar40 = pplVar16;
                  }
                }
                FUN_10ab6e728();
                if (*(char *)((long)pplVar40 + 0x17) < '\0') {
                  pplVar16 = (long **)&uStack_1e0;
                  func_0x000107c3192c(pplVar16,*pplVar40,pplVar40[1]);
                }
                else {
                  uStack_1d8 = (long **)pplVar40[1];
                  uStack_1e0 = (long **)*pplVar40;
                  uStack_1d0 = SUB84(pplVar40[2],0);
                  uStack_1cc = (undefined4)((ulong)pplVar40[2] >> 0x20);
                  pplVar16 = pplVar40;
                }
                uStack_1c8 = SUB84(pplVar40[3],0);
                uStack_1c4 = (undefined4)((ulong)pplVar40[3] >> 0x20);
                uStack_1b8 = (undefined **)pplVar40[5];
                uStack_1c0 = SUB84(pplVar40[4],0);
                uStack_1bc = (undefined4)((ulong)pplVar40[4] >> 0x20);
                ppuStack_1b0 = (undefined **)CONCAT44(ppuStack_1b0._4_4_,*(float *)(pplVar40 + 6));
                FUN_10ab6e9d8();
                if (*(char *)((long)pplVar16 + 0x17) < '\0') {
                  pplVar40 = (long **)&fStack_1a8;
                  func_0x000107c3192c(&fStack_1a8,*pplVar16,pplVar16[1]);
                }
                else {
                  plVar37 = pplVar16[1];
                  plVar17 = *pplVar16;
                  fStack_194 = (float)((ulong)pplVar16[2] >> 0x20);
                  fStack_198 = SUB84(pplVar16[2],0);
                  uStack_19a = (undefined2)((ulong)plVar37 >> 0x30);
                  uStack_19c = (undefined2)((ulong)plVar37 >> 0x20);
                  fStack_1a0 = SUB84(plVar37,0);
                  uStack_1a2 = (undefined2)((ulong)plVar17 >> 0x30);
                  uStack_1a4 = (undefined2)((ulong)plVar17 >> 0x20);
                  fStack_1a8 = SUB84(plVar17,0);
                  pplVar40 = pplVar16;
                }
                uStack_190 = (undefined **)pplVar16[3];
                uStack_180 = (undefined **)pplVar16[5];
                uStack_188 = (undefined **)pplVar16[4];
                uStack_178 = CONCAT44(uStack_178._4_4_,*(float *)(pplVar16 + 6));
                FUN_10ab6eb18();
                if (*(char *)((long)pplVar40 + 0x17) < '\0') {
                  pplVar16 = (long **)&uStack_170;
                  func_0x000107c3192c(&uStack_170,*pplVar40,pplVar40[1]);
                }
                else {
                  ppuStack_168 = (undefined **)pplVar40[1];
                  uStack_170 = (undefined **)*pplVar40;
                  ppuStack_160 = (undefined **)pplVar40[2];
                  pplVar16 = pplVar40;
                }
                ppuStack_158 = (undefined **)pplVar40[3];
                ppuStack_148 = (undefined **)pplVar40[5];
                ppuStack_150 = (undefined **)pplVar40[4];
                fStack_140 = *(float *)(pplVar40 + 6);
                FUN_10ab6f020();
                if (*(char *)((long)pplVar16 + 0x17) < '\0') {
                  func_0x000107c3192c(appuStack_138,*pplVar16,pplVar16[1]);
                }
                else {
                  appuStack_138[1] = (undefined **)pplVar16[1];
                  appuStack_138[0] = (undefined **)*pplVar16;
                  ppuStack_128 = (undefined **)pplVar16[2];
                }
                ppuStack_120 = (undefined **)pplVar16[3];
                ppuStack_110 = (undefined **)pplVar16[5];
                ppuStack_118 = (undefined **)pplVar16[4];
                fStack_108 = *(float *)(pplVar16 + 6);
                FUN_10ab6f520(&plStack_270,&uStack_1e0,4);
                lVar39 = 0;
                do {
                  if ((&cStack_121)[lVar39] < '\0') {
                    __ZdlPv(*(undefined8 *)((long)appuStack_138 + lVar39));
                  }
                  lVar39 = lVar39 + -0x38;
                } while (lVar39 != -0xe0);
                FUN_10a54c2ec(pplVar46[0x10],&plStack_270);
                pplVar46[0x10][0x1d] = 1;
                uStack_1d8._0_4_ = 0.0;
                uStack_1d8._4_4_ = 0;
                uStack_1e0 = (long **)0x0;
                FUN_10a192264(pplVar46 + 0xe,&uStack_1e0);
                plVar17 = (long *)CONCAT44(uStack_1d8._4_4_,(float)uStack_1d8);
                if (plVar17 != (long *)0x0) {
                  plVar37 = plVar17 + 1;
                  do {
                    lVar39 = *plVar37;
                    cVar5 = '\x01';
                    bVar15 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                    if (bVar15) {
                      *plVar37 = lVar39 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (lVar39 == 0) {
                    (**(code **)(*plVar17 + 0x10))(plVar17);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
                  }
                }
                uVar2 = *(uint *)(lVar31 + 0xf0);
                iVar23 = 0;
                if (uVar2 != 0) {
                  iVar23 = 0;
                  if ((ulong)uVar2 != 0) {
                    iVar23 = (int)((ulong)(*(long *)(lVar31 + 0x18) - *(long *)(lVar31 + 0x10)) /
                                  (ulong)uVar2);
                  }
                }
                *(int *)(pplVar46 + 0x12) = *(int *)(pplVar46 + 0x12) + iVar23;
                FUN_10ab4a5b4();
                *(int *)((long)pplVar46 + 0x94) = *(int *)((long)pplVar46 + 0x94) + (int)lVar31;
                *(undefined1 *)(pplVar46 + 0x13) = 1;
                uStack_1e0 = &plStack_268;
                func_0x00010a190844(&uStack_1e0);
                pplVar40 = (long **)CONCAT44(uStack_1d8._4_4_,(float)uStack_1d8);
                goto LAB_10a660714;
              }
              goto LAB_10a6600bc;
            }
            if (((ulong)pppuVar25 & uVar32) == 0) {
              pppuVar24 = (undefined ***)((ulong)pppuVar24 & uVar32);
            }
            else if (pppuVar25 <= pppuVar24) {
              uVar34 = 0;
              if (pppuVar25 != (undefined ***)0x0) {
                uVar34 = (ulong)pppuVar24 / (ulong)pppuVar25;
              }
              pppuVar24 = (undefined ***)((long)pppuVar24 - uVar34 * (long)pppuVar25);
            }
            if (pppuVar24 == pppuVar41) goto LAB_10a65fd8c;
          }
        }
LAB_10a65fd98:
        pplVar46 = (long **)0xc0;
        __Znwm();
        uStack_1d0 = 0;
        uStack_1cc = 0;
        *pplVar46 = (long *)0x0;
        pplVar46[1] = (long *)pppuVar48;
        uStack_1e0 = pplVar46;
        uStack_1d8 = &plStack_330;
        if ((long)ppuStack_380 < 0) {
          func_0x000107c3192c(pplVar46 + 2,ppuStack_390,ppuStack_388);
        }
        else {
          pplVar46[3] = (long *)ppuStack_388;
          pplVar46[2] = (long *)ppuStack_390;
          pplVar46[4] = (long *)ppuStack_380;
        }
        pplVar46[5] = plStack_378;
        *(undefined2 *)(pplVar46 + 6) = uStack_370;
        FUN_10a1ccb30(pplVar46 + 7,&uStack_368);
        if (cStack_331 < '\0') {
          func_0x000107c3192c(pplVar46 + 0xb,plStack_348,plStack_340);
        }
        else {
          pplVar46[0xc] = plStack_340;
          pplVar46[0xb] = plStack_348;
          pplVar46[0xd] = (long *)CONCAT17(cStack_331,uStack_338);
        }
        pplVar46[0x15] = (long *)0x0;
        pplVar46[0x14] = (long *)0x0;
        pplVar46[0x17] = (long *)0x0;
        pplVar46[0x16] = (long *)0x0;
        pplVar46[0x11] = (long *)0x0;
        pplVar46[0x10] = (long *)0x0;
        pplVar46[0x13] = (long *)0x0;
        pplVar46[0x12] = (long *)0x0;
        pplVar46[0xf] = (long *)0x0;
        pplVar46[0xe] = (long *)0x0;
        uStack_1d0 = CONCAT31(uStack_1d0._1_3_,1);
        if ((pppuVar25 == (undefined ***)0x0) ||
           (fStack_310 * (float)pppuVar25 < (float)(uStack_318 + 1))) {
          if (pppuVar25 < (undefined ***)0x3) {
            uVar32 = 1;
          }
          else {
            uVar32 = (ulong)(((ulong)pppuVar25 & (long)pppuVar25 - 1U) != 0);
          }
          pppuVar41 = (undefined ***)(uVar32 | (long)pppuVar25 << 1);
          pppuVar25 = (undefined ***)(long)((float)(uStack_318 + 1) / fStack_310);
          if (pppuVar41 <= pppuVar25) {
            pppuVar41 = pppuVar25;
          }
          if ((long)pppuVar41 - 1U == 0) {
            pppuVar41 = (undefined ***)0x2;
          }
          else if (((ulong)pppuVar41 & (long)pppuVar41 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
          }
          pppuVar25 = pppuStack_328;
          if (pppuStack_328 < pppuVar41) {
LAB_10a65fec8:
            if ((ulong)pppuVar41 >> 0x3d != 0) {
              func_0x000109ffded8();
              goto LAB_10a662420;
            }
            plVar17 = (long *)((long)pppuVar41 << 3);
            __Znwm();
            bVar15 = plStack_330 != (long *)0x0;
            plStack_330 = plVar17;
            if (bVar15) {
              __ZdlPv();
            }
            pppuVar25 = (undefined ***)0x0;
            do {
              plStack_330[(long)pppuVar25] = 0;
              pppuVar25 = (undefined ***)((long)pppuVar25 + 1);
            } while (pppuVar41 != pppuVar25);
            pppuStack_328 = pppuVar41;
            if (pplStack_320 != (long **)0x0) {
              pppuVar25 = (undefined ***)pplStack_320[1];
              uVar32 = (long)pppuVar41 - 1;
              if (((ulong)pppuVar41 & uVar32) == 0) {
                pppuVar25 = (undefined ***)((ulong)pppuVar25 & uVar32);
              }
              else if (pppuVar41 <= pppuVar25) {
                uVar34 = 0;
                if (pppuVar41 != (undefined ***)0x0) {
                  uVar34 = (ulong)pppuVar25 / (ulong)pppuVar41;
                }
                pppuVar25 = (undefined ***)((long)pppuVar25 - uVar34 * (long)pppuVar41);
              }
              plStack_330[(long)pppuVar25] = (long)&pplStack_320;
              pplVar40 = (long **)*pplStack_320;
              pplVar16 = pplStack_320;
              while (pplVar40 != (long **)0x0) {
                pppuVar24 = (undefined ***)pplVar40[1];
                if (((ulong)pppuVar41 & uVar32) == 0) {
                  pppuVar24 = (undefined ***)((ulong)pppuVar24 & uVar32);
                }
                else if (pppuVar41 <= pppuVar24) {
                  uVar34 = 0;
                  if (pppuVar41 != (undefined ***)0x0) {
                    uVar34 = (ulong)pppuVar24 / (ulong)pppuVar41;
                  }
                  pppuVar24 = (undefined ***)((long)pppuVar24 - uVar34 * (long)pppuVar41);
                }
                pplVar33 = pplVar40;
                if (pppuVar24 != pppuVar25) {
                  if (plStack_330[(long)pppuVar24] == 0) {
                    plStack_330[(long)pppuVar24] = (long)pplVar16;
                    pppuVar25 = pppuVar24;
                  }
                  else {
                    *pplVar16 = *pplVar40;
                    *pplVar40 = *(long **)plStack_330[(long)pppuVar24];
                    *(long ***)plStack_330[(long)pppuVar24] = pplVar40;
                    pplVar33 = pplVar16;
                  }
                }
                pplVar16 = pplVar33;
                pplVar40 = (long **)*pplVar33;
              }
            }
          }
          else if (pppuVar41 < pppuStack_328) {
            pppuVar24 = (undefined ***)(long)((float)uStack_318 / fStack_310);
            if ((pppuStack_328 < (undefined ***)0x3) ||
               (((ulong)pppuStack_328 & (long)pppuStack_328 - 1U) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if ((undefined ***)0x1 < pppuVar24) {
              pppuVar24 = (undefined ***)(1L << (-LZCOUNT((long)pppuVar24 + -1) & 0x3fU));
            }
            plVar17 = plStack_330;
            if (pppuVar41 <= pppuVar24) {
              pppuVar41 = pppuVar24;
            }
            if (pppuVar41 < pppuVar25) {
              if (pppuVar41 != (undefined ***)0x0) goto LAB_10a65fec8;
              plStack_330 = (long *)0x0;
              if (plVar17 != (long *)0x0) {
                __ZdlPv();
              }
              pppuStack_328 = (undefined ***)0x0;
            }
          }
          pppuVar25 = pppuStack_328;
          if (((ulong)pppuStack_328 & (long)pppuStack_328 - 1U) == 0) {
            pppuVar41 = (undefined ***)((long)pppuStack_328 - 1U & (ulong)pppuVar48);
          }
          else {
            pppuVar41 = pppuVar48;
            if (pppuStack_328 <= pppuVar48) {
              uVar32 = 0;
              if (pppuStack_328 != (undefined ***)0x0) {
                uVar32 = (ulong)pppuVar48 / (ulong)pppuStack_328;
              }
              pppuVar41 = (undefined ***)((long)pppuVar48 - uVar32 * (long)pppuStack_328);
            }
          }
        }
        puVar21 = (undefined8 *)plStack_330[(long)pppuVar41];
        if (puVar21 == (undefined8 *)0x0) {
          *pplVar46 = (long *)pplStack_320;
          plStack_330[(long)pppuVar41] = (long)&pplStack_320;
          pplStack_320 = pplVar46;
          if (*pplVar46 != (long *)0x0) {
            pppuVar41 = (undefined ***)(*pplVar46)[1];
            if (((ulong)pppuVar25 & (long)pppuVar25 - 1U) == 0) {
              pppuVar41 = (undefined ***)((ulong)pppuVar41 & (long)pppuVar25 - 1U);
            }
            else if (pppuVar25 <= pppuVar41) {
              uVar32 = 0;
              if (pppuVar25 != (undefined ***)0x0) {
                uVar32 = (ulong)pppuVar41 / (ulong)pppuVar25;
              }
              pppuVar41 = (undefined ***)((long)pppuVar41 - uVar32 * (long)pppuVar25);
            }
            plStack_330[(long)pppuVar41] = (long)pplVar46;
          }
        }
        else {
          *pplVar46 = (long *)*puVar21;
          *puVar21 = pplVar46;
        }
        uStack_318 = uStack_318 + 1;
LAB_10a6600b4:
        if (((ulong)pplVar46[0x13] & 1) == 0) {
          uStack_1d8._0_4_ = SUB84(plStack_398,0);
          uStack_1d8._4_4_ = (undefined4)((ulong)plStack_398 >> 0x20);
          uStack_1e0 = pplStack_3a0;
          if (plStack_398 != (long *)0x0) {
            plVar17 = plStack_398 + 1;
            do {
              cVar5 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar15) {
                *plVar17 = *plVar17 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          uStack_1d0 = 0;
          uStack_1cc = 0;
          uStack_1c8 = 0;
          uStack_1c4 = 0;
          uVar2 = *(uint *)(lVar31 + 0xf0);
          uStack_1c0 = 0;
          if (uVar2 != 0) {
            uStack_1c0 = 0;
            if ((ulong)uVar2 != 0) {
              uStack_1c0 = (undefined4)
                           ((ulong)(*(long *)(lVar31 + 0x18) - *(long *)(lVar31 + 0x10)) /
                           (ulong)uVar2);
            }
          }
          FUN_10ab4a5b4();
          uStack_1bc = (undefined4)lVar31;
          uStack_1b8 = (undefined **)((ulong)uStack_1b8 & 0xffffffffffffff00);
          fStack_198 = 0.0;
          ppuStack_1b0 = (undefined **)0x0;
          fStack_1a8 = 0.0;
          uStack_1a4 = 0;
          uStack_1a2 = 0;
          fStack_1a0 = 0.0;
          uStack_19c = 0;
          FUN_10a192264(pplVar46 + 0xe,&uStack_1e0);
          FUN_10a551e24(pplVar46 + 0x10,&uStack_1d0);
          pplVar46[0x12] = (long *)CONCAT44(uStack_1bc,uStack_1c0);
          *(undefined1 *)(pplVar46 + 0x13) = (undefined1)uStack_1b8;
          func_0x00010a015c50(pplVar46 + 0x14,&ppuStack_1b0);
          pplVar46[0x16] = (long *)CONCAT26(uStack_19a,CONCAT24(uStack_19c,fStack_1a0));
          *(float *)(pplVar46 + 0x17) = fStack_198;
          plVar17 = (long *)CONCAT26(uStack_1a2,CONCAT24(uStack_1a4,fStack_1a8));
          if (plVar17 != (long *)0x0) {
            plVar37 = plVar17 + 1;
            do {
              lVar31 = *plVar37;
              cVar5 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(plVar37,0x10);
              if (bVar15) {
                *plVar37 = lVar31 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar31 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
            }
          }
          plVar17 = (long *)CONCAT44(uStack_1c4,uStack_1c8);
          if (plVar17 != (long *)0x0) {
            plVar37 = plVar17 + 1;
            do {
              lVar31 = *plVar37;
              cVar5 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(plVar37,0x10);
              if (bVar15) {
                *plVar37 = lVar31 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar31 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
            }
          }
          pplVar40 = (long **)CONCAT44(uStack_1d8._4_4_,(float)uStack_1d8);
          if (pplVar40 != (long **)0x0) {
            pplVar16 = pplVar40 + 1;
            do {
              plVar17 = *pplVar16;
              cVar5 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(pplVar16,0x10);
              if (bVar15) {
                *pplVar16 = (long *)((long)plVar17 + -1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (plVar17 == (long *)0x0) {
              (*(code *)(*pplVar40)[2])(pplVar40);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar40);
              pplVar40 = (long **)CONCAT44(uStack_1d8._4_4_,(float)uStack_1d8);
            }
          }
          if (pppuVar47 != (undefined ***)0x0) {
            FUN_10a651e28(&uStack_1e0,*(undefined8 *)(param_4 + 0x170));
            func_0x00010a015c50(pplVar46 + 0x14,&uStack_1e0);
            plVar17 = pplVar46[0x14];
            func_0x000107c2b054(&uStack_3b8,&UNK_10f66b0b7);
            if (*(char *)((long)plVar17 + 0x6f) < '\0') {
              __ZdlPv(plVar17[0xb]);
            }
            plVar17[0xc] = lStack_3b0;
            plVar17[0xb] = CONCAT71(uStack_3b7,uStack_3b8);
            plVar17[0xd] = CONCAT17(uStack_3a1,uStack_3a8);
            uStack_3a1 = 0;
            uStack_3b8 = 0;
            plVar18 = (long *)0x300;
            __Znwm();
            plVar18[1] = 0;
            plVar18[2] = 0;
            *plVar18 = (long)&PTR_FUN_110baa060;
            func_0x000107c2b054(&pplStack_2c0,&UNK_10f646e22);
            plVar37 = plVar18 + 3;
            FUN_10a330b88(plVar37,0,&pplStack_2c0,1);
            if ((long)ppuStack_2b0 < 0) {
              __ZdlPv(pplStack_2c0);
            }
            plStack_2d0 = plVar37;
            plStack_2c8 = plVar18;
            FUN_10a190d60(&plStack_2d0,plVar18 + 9,plVar37);
            apuStack_2a8[0] = (undefined8 *)plStack_2d0[7];
            ppuStack_2b0 = (undefined **)plStack_2d0[6];
            if (plStack_2d0[7] != 0) {
              plVar37 = (long *)(plStack_2d0[7] + 0x10);
              do {
                cVar5 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                if (bVar15) {
                  *plVar37 = *plVar37 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            pplStack_2c0 = (long **)0x10a3635a8;
            ppuStack_2b8 = &PTR_FUN_110bc68e8;
            func_0x000107c2b07c(&uStack_220,&UNK_10f66b096);
            func_0x000107c2b07c(auStack_200,&DAT_10f646e0e);
            FUN_10a0d9f14(&pppuStack_2e8,&uStack_220,2,&uStack_2e9);
            lVar31 = 0;
            do {
              if (acStack_1e9[lVar31] < '\0') {
                __ZdlPv(*(undefined8 *)((long)auStack_200 + lVar31));
              }
              plVar37 = plStack_2d0;
              lVar31 = lVar31 + -0x20;
            } while (lVar31 != -0x40);
            FUN_10a0e3500(&pplStack_308,&pppuStack_2e8);
            FUN_10a0da1b8(plVar37 + 0x40,plVar37[0x41]);
            plVar37[0x40] = (long)pplStack_308;
            plVar37[0x41] = (long)plStack_300;
            plVar37[0x42] = lStack_2f8;
            if (lStack_2f8 == 0) {
              plVar37[0x40] = (long)(plVar37 + 0x41);
            }
            else {
              plStack_300[2] = (long)(plVar37 + 0x41);
              plStack_300 = (long *)0x0;
              lStack_2f8 = 0;
              pplStack_308 = &plStack_300;
            }
            FUN_10a0da1b8(&pplStack_308,plStack_300);
            plVar37 = plStack_2d0;
            func_0x000107c2b054(&uStack_220,&UNK_10f66b0a4);
            if (*(char *)((long)plVar37 + 0x1b7) < '\0') {
              __ZdlPv(plVar37[0x34]);
            }
            plVar37[0x35] = (long)plStack_218;
            plVar37[0x34] = CONCAT71(uStack_21f,uStack_220);
            plVar37[0x36] = CONCAT17(cStack_209,uStack_210);
            cStack_209 = '\0';
            uStack_220 = 0;
            func_0x00010a3326b8(plStack_2d0 + 0x43,1);
            func_0x00010a33256c(plStack_2d0,0);
            if (param_2[3] == 1) {
              bVar4 = *param_2;
              *(uint *)((long)plStack_2d0 + 0x21e) =
                   ((uint)bVar4 << 0x15 | (uint)bVar4 << 0xe) & 0x1010101 |
                   (bVar4 & 2) << 7 | bVar4 & 1;
              if ((param_2[3] & 1) == 0) goto LAB_10a662420;
              func_0x00010a332748((long)plStack_2d0 + 0x219,param_2[1]);
              if ((param_2[3] & 1) == 0) goto LAB_10a662420;
              func_0x00010a332700((long)plStack_2d0 + 0x21a,param_2[2]);
            }
            plStack_268 = plStack_2c8;
            plStack_270 = plStack_2d0;
            if (plStack_2c8 != (long *)0x0) {
              plVar37 = plStack_2c8 + 1;
              do {
                cVar5 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                if (bVar15) {
                  *plVar37 = *plVar37 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            pplStack_260 = pplStack_2c0;
            (*(code *)ppuStack_2b8[2])(apuStack_258,&ppuStack_2b8);
            pplStack_2c0 = (long **)&UNK_1053a6a3c;
            (*(code *)*ppuStack_2b8)(&ppuStack_2b8);
            ppuStack_2b8 = &PTR_DAT_110ae9180;
            FUN_10a0da1b8(&pppuStack_2e8,plStack_2e0);
            FUN_10a044790(&pplStack_2c0);
            (*(code *)*ppuStack_2b8)(&ppuStack_2b8);
            plVar37 = plStack_2c8;
            if (plStack_2c8 != (long *)0x0) {
              plVar18 = plStack_2c8 + 1;
              do {
                lVar31 = *plVar18;
                cVar5 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar15) {
                  *plVar18 = lVar31 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar31 == 0) {
                (**(code **)(*plStack_2c8 + 0x10))(plStack_2c8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar37);
              }
            }
            FUN_10ab46914(plVar17 + 0x45,&plStack_270);
            FUN_10aaea8f4(&pplStack_2c0,pppuVar47);
            if ((undefined8 *)plVar17[0x45] == (undefined8 *)plVar17[0x46]) {
              uVar38 = 0;
            }
            else {
              uVar38 = *(undefined8 *)plVar17[0x45];
            }
            func_0x000107c2b074(&uStack_220,&PTR_DAT_110c06db8);
            FUN_10a3368d0(uVar38,&uStack_220,&pplStack_2c0,&UNK_10e4ac8a8,0xd);
            if (cStack_209 < '\0') {
              __ZdlPv(CONCAT71(uStack_21f,uStack_220));
            }
            FUN_10a044790(&ppuStack_2b0);
            (*(code *)*apuStack_2a8[0])(apuStack_2a8);
            ppuVar44 = ppuStack_2b8;
            if (ppuStack_2b8 != (undefined **)0x0) {
              ppuVar20 = ppuStack_2b8 + 1;
              do {
                puVar30 = *ppuVar20;
                cVar5 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
                if (bVar15) {
                  *ppuVar20 = puVar30 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (puVar30 == (undefined *)0x0) {
                (**(code **)(*ppuStack_2b8 + 0x10))(ppuStack_2b8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar44);
              }
            }
            FUN_10a044790(&pplStack_260);
            (*(code *)*apuStack_258[0])(apuStack_258);
            plVar17 = plStack_268;
            if (plStack_268 != (long *)0x0) {
              plVar37 = plStack_268 + 1;
              do {
                lVar31 = *plVar37;
                cVar5 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                if (bVar15) {
                  *plVar37 = lVar31 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar31 == 0) {
                (**(code **)(*plStack_268 + 0x10))(plStack_268);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
              }
            }
            FUN_10a044790(&uStack_1d0);
            (**(code **)CONCAT44(uStack_1c4,uStack_1c8))(&uStack_1c8);
            pplVar40 = (long **)CONCAT44(uStack_1d8._4_4_,(float)uStack_1d8);
            if (pplVar40 != (long **)0x0) {
              pplVar46 = pplVar40 + 1;
              do {
                plVar17 = *pplVar46;
                cVar5 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(pplVar46,0x10);
                if (bVar15) {
                  *pplVar46 = (long *)((long)plVar17 + -1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (plVar17 == (long *)0x0) {
                (*(code *)(*pplVar40)[2])(pplVar40);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar40);
                pplVar40 = (long **)CONCAT44(uStack_1d8._4_4_,(float)uStack_1d8);
              }
            }
          }
        }
        else {
LAB_10a6600bc:
          uVar2 = *(uint *)(lVar31 + 0xf0);
          iVar23 = 0;
          if (uVar2 != 0) {
            iVar23 = 0;
            if ((ulong)uVar2 != 0) {
              iVar23 = (int)((ulong)(*(long *)(lVar31 + 0x18) - *(long *)(lVar31 + 0x10)) /
                            (ulong)uVar2);
            }
          }
          *(int *)(pplVar46 + 0x12) = *(int *)(pplVar46 + 0x12) + iVar23;
          FUN_10ab4a5b4();
          *(int *)((long)pplVar46 + 0x94) = *(int *)((long)pplVar46 + 0x94) + (int)lVar31;
          pplVar40 = uStack_1d8;
        }
LAB_10a660714:
        plVar17 = plStack_398;
        uStack_1d8 = pplVar40;
        if (plStack_398 != (long *)0x0) {
          plVar37 = plStack_398 + 1;
          do {
            lVar31 = *plVar37;
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar37,0x10);
            if (bVar15) {
              *plVar37 = lVar31 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar31 == 0) {
            (**(code **)(*plStack_398 + 0x10))(plStack_398);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
      }
      if (cStack_331 < '\0') {
        __ZdlPv(plStack_348);
      }
      if ((cStack_350 == '\x01') && (cStack_351 < '\0')) {
        __ZdlPv(uStack_368);
      }
      if ((long)ppuStack_380 < 0) {
        __ZdlPv(ppuStack_390);
      }
      uVar27 = uVar27 + 1;
      lVar31 = plVar45[3];
      lVar39 = plVar45[4];
      uVar32 = (lVar39 - lVar31 >> 4) * 0x6db6db6db6db6db7;
    } while (uVar27 <= uVar32 && uVar32 - uVar27 != 0);
    if (((bVar3 >> 1 & 1) != 0) && (pplVar46 = pplStack_320, pplStack_320 != (long **)0x0)) {
      do {
        if (*(char *)(pplVar46 + 0x13) == '\x01') {
          FUN_10ab4a154(pplVar46[0x10],*(undefined4 *)(pplVar46 + 0x12));
          FUN_10ab4cb54(pplVar46[0x10],*(undefined4 *)((long)pplVar46 + 0x94));
        }
        pplVar46 = (long **)*pplVar46;
      } while (pplVar46 != (long **)0x0);
      lVar31 = plVar45[3];
      lVar39 = plVar45[4];
    }
  }
  plStack_268 = (long *)0x0;
  plStack_270 = (long *)0x0;
  fVar51 = 0.0;
  pplStack_260 = (long **)0x0;
  if (lVar39 != lVar31) {
    uVar27 = 0;
    fVar51 = 0.0;
    fStack_438 = 0.0;
    do {
      lVar31 = **(long **)(lVar31 + uVar27 * 0x70 + 0x28);
      FUN_10ab29680(fVar55);
      if (lVar31 != 0) {
        FUN_10a3ad2b8(&uStack_220);
        lVar31 = plVar45[3];
        uVar32 = (plVar45[4] - lVar31 >> 4) * 0x6db6db6db6db6db7;
        if (uVar32 < uVar27 || uVar32 - uVar27 == 0) goto LAB_10a662420;
        lVar39 = **(long **)(lVar31 + uVar27 * 0x70 + 0x28);
        if (lVar39 == 0) {
          bVar15 = false;
        }
        else {
          lVar28 = lVar39;
          ___dynamic_cast(lVar39,&PTR_DAT_110c48fb0,&PTR_DAT_110c46458,0);
          bVar15 = lVar28 != 0;
        }
        FUN_10a65f370(&ppuStack_390,lVar39,bVar15,bVar3 >> 1 & 1,lVar31 + uVar27 * 0x70 + 0x50);
        pppuVar41 = &ppuStack_390;
        FUN_10a67e860();
        pppuVar47 = pppuStack_328;
        if (pppuStack_328 == (undefined ***)0x0) {
LAB_10a660c38:
          plVar17 = (long *)0x0;
        }
        else {
          uVar32 = (long)pppuStack_328 - 1;
          if (((ulong)pppuStack_328 & uVar32) == 0) {
            pppuVar48 = (undefined ***)(uVar32 & (ulong)pppuVar41);
          }
          else {
            pppuVar48 = pppuVar41;
            if (pppuStack_328 <= pppuVar41) {
              uVar34 = 0;
              if (pppuStack_328 != (undefined ***)0x0) {
                uVar34 = (ulong)pppuVar41 / (ulong)pppuStack_328;
              }
              pppuVar48 = (undefined ***)((long)pppuVar41 - uVar34 * (long)pppuStack_328);
            }
          }
          if ((long *)plStack_330[(long)pppuVar48] == (long *)0x0) goto LAB_10a660c38;
          for (plVar17 = *(long **)plStack_330[(long)pppuVar48]; plVar17 != (long *)0x0;
              plVar17 = (long *)*plVar17) {
            pppuVar25 = (undefined ***)plVar17[1];
            if (pppuVar25 == pppuVar41) {
              uVar34 = (ulong)(plVar17 + 2);
              FUN_10a67e958(uVar34,&ppuStack_390);
              if ((uVar34 & 1) != 0) break;
            }
            else {
              if (((ulong)pppuVar47 & uVar32) == 0) {
                pppuVar25 = (undefined ***)((ulong)pppuVar25 & uVar32);
              }
              else if (pppuVar47 <= pppuVar25) {
                uVar34 = 0;
                if (pppuVar47 != (undefined ***)0x0) {
                  uVar34 = (ulong)pppuVar25 / (ulong)pppuVar47;
                }
                pppuVar25 = (undefined ***)((long)pppuVar25 - uVar34 * (long)pppuVar47);
              }
              if (pppuVar25 != pppuVar48) goto LAB_10a660c38;
            }
          }
        }
        uVar32 = (plVar45[4] - plVar45[3] >> 4) * 0x6db6db6db6db6db7;
        if (uVar32 < uVar27 || uVar32 - uVar27 == 0) goto LAB_10a662420;
        pfVar26 = (float *)(plVar45[3] + uVar27 * 0x70);
        fVar61 = *pfVar26;
        fVar63 = pfVar26[1];
        fVar49 = pfVar26[3] - fVar63;
        if (fVar49 <= fVar51) {
          fVar49 = fVar51;
        }
        fVar64 = pfVar26[0x18];
        fVar51 = fVar64;
        if (fVar64 <= fStack_438) {
          fVar51 = fStack_438;
        }
        fVar65 = fVar51;
        (**(code **)(*(long *)**(undefined8 **)(pfVar26 + 10) + 0x50))();
        fVar63 = fVar6 * fVar63;
        fVar64 = fVar6 * fVar64;
        fVar58 = fVar6 * fVar61 * 0.0;
        fVar60 = fVar63 * 0.0;
        fVar67 = fVar58 + fVar60;
        fVar62 = fVar50 * fVar64 * 0.0;
        fVar61 = fVar6 * fVar61 + fVar60 + fVar62 + 0.0;
        fVar58 = fVar58 + fVar63 + fVar62 + 0.0;
        fVar60 = fVar67 + fVar50 * fVar64 + 0.0;
        fVar65 = fVar64 * fVar65;
        fVar63 = fVar65 * 0.0;
        fVar69 = fVar64 * 0.0;
        if (((bVar3 >> 1 & 1) == 0) || ((*(byte *)((long)plVar17 + 0x98) & 1) == 0)) {
          ppuStack_1b0 = (undefined **)0x0;
          uStack_1c8 = 0;
          uStack_1c4 = 0;
          uStack_1d0 = 0;
          uStack_1cc = 0;
          uStack_1b8 = (undefined **)0x0;
          uStack_1c0 = 0;
          uStack_1bc = 0;
          uStack_1d8._0_4_ = 0.0;
          uStack_1d8._4_4_ = 0;
          uStack_1e0 = (long **)0x0;
          fStack_1a0 = 0.0;
          uStack_19c = 0;
          uStack_19a = 0;
          fStack_1a8 = 1.0;
          uStack_1a4 = 0;
          uStack_1a2 = 0;
          uStack_190 = (undefined **)0x0;
          fStack_198 = 0.0;
          fStack_194 = 1.0;
          uStack_180 = (undefined **)0x3f800000;
          uStack_188 = (undefined **)0x0;
          uStack_170 = (undefined **)0x3f80000000000000;
          uStack_178 = 0;
          ppuStack_168 = (undefined **)0x0;
          ppuStack_160 = (undefined **)0x0;
          func_0x00010a04a780(&ppuStack_168,(long)plVar17 + 0xa0);
          plVar37 = *(long **)(*(long *)((long)plVar17 + 0x70) + 0xe0);
          if (plVar37 == (long *)0x0) {
            lVar31 = 0;
          }
          else {
            (**(code **)(*plVar37 + 0x90))();
            lVar31 = *plVar37;
          }
          uStack_1c8 = (undefined4)lVar31;
          uStack_1c4 = (undefined4)((ulong)lVar31 >> 0x20);
          FUN_10a19ad28(&uStack_1e0,(long)plVar17 + 0x70);
          uStack_19c = SUB42(fVar63,0);
          uStack_19a = (undefined2)((uint)fVar63 >> 0x10);
          uStack_190 = (undefined **)CONCAT44(fVar63,fVar63);
          uStack_188 = (undefined **)CONCAT44(fVar69,fVar69);
          uStack_180 = (undefined **)CONCAT44(fVar69,fVar64);
          uStack_178 = CONCAT44(fVar58,fVar61);
          uStack_170 = (undefined **)CONCAT44(fVar67 + fVar62 + 1.0,fVar60);
          plVar17 = *(long **)((long)plVar17 + 0x70);
          uStack_1d0 = (undefined4)plVar17[0x1c];
          uStack_1cc = (undefined4)((ulong)plVar17[0x1c] >> 0x20);
          fStack_1a8 = fVar65;
          uStack_1a4 = uStack_19c;
          uStack_1a2 = uStack_19a;
          fStack_1a0 = fVar63;
          fStack_198 = fVar63;
          fStack_194 = fVar65;
          FUN_10a347d04();
          if (plVar17 == (long *)0x0) {
            ppuStack_2b8 = (undefined **)0xff7fffff00000000;
            pplStack_2c0 = (long **)0x0;
            ppuStack_2b0 = (undefined **)0xff7fffffff7fffff;
          }
          else {
            (**(code **)(*plVar17 + 0x38))(&pplStack_2c0);
          }
          uStack_1b8 = ppuStack_2b8;
          uStack_1c0 = SUB84(pplStack_2c0,0);
          uStack_1bc = (undefined4)((ulong)pplStack_2c0 >> 0x20);
          ppuStack_1b0 = ppuStack_2b0;
          FUN_10a6628dc(&plStack_270,&uStack_1e0);
          ppuVar44 = ppuStack_160;
          if (ppuStack_160 != (undefined **)0x0) {
            ppuVar20 = ppuStack_160 + 1;
            do {
              puVar30 = *ppuVar20;
              cVar5 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
              if (bVar15) {
                *ppuVar20 = puVar30 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (puVar30 == (undefined *)0x0) {
              (**(code **)(*ppuStack_160 + 0x10))(ppuStack_160);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar44);
            }
          }
          pplVar46 = (long **)CONCAT44(uStack_1d8._4_4_,(float)uStack_1d8);
          if (pplVar46 != (long **)0x0) {
            pplVar40 = pplVar46 + 1;
            do {
              plVar17 = *pplVar40;
              cVar5 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(pplVar40,0x10);
              if (bVar15) {
                *pplVar40 = (long *)((long)plVar17 + -1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (plVar17 == (long *)0x0) {
              (*(code *)(*pplVar46)[2])(pplVar46);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar46);
              pplVar46 = (long **)CONCAT44(uStack_1d8._4_4_,(float)uStack_1d8);
            }
          }
        }
        else {
          lVar31 = *(long *)((long)plVar17 + 0x80);
          lVar39 = *(long *)(lVar31 + 0x28);
          puVar19 = *(ulong **)(CONCAT71(uStack_21f,uStack_220) + 0xe0);
          uVar32 = 0;
          if (puVar19 != (ulong *)0x0) {
            (**(code **)(*puVar19 + 0x90))();
            uVar32 = *puVar19;
          }
          ___dynamic_cast(uVar32,&PTR_DAT_110c4a868,&PTR_DAT_110bf06a0,0);
          lVar28 = *(long *)(uVar32 + 0x18) - *(long *)(uVar32 + 0x10);
          if (lVar28 != 0) {
            _memmove((ulong)*(uint *)((long)plVar17 + 0xb0) + *(long *)(lVar31 + 0x10),
                     *(long *)(uVar32 + 0x10),lVar28);
          }
          lVar31 = *(long *)((long)plVar17 + 0x80);
          uVar2 = *(uint *)(lVar31 + 0x110);
          if (uVar2 == 0xffffffff) {
            lVar28 = 0;
          }
          else {
            uVar34 = (*(long *)(lVar31 + 0x100) - *(long *)(lVar31 + 0xf8) >> 3) *
                     0x6db6db6db6db6db7;
            if (uVar34 < uVar2 || uVar34 - uVar2 == 0) {
              FUN_10ab725fc();
              goto LAB_10a662420;
            }
            lVar28 = *(long *)(lVar31 + 0xf8) + (ulong)uVar2 * 0x38;
          }
          uVar2 = *(int *)(lVar28 + 0x24) - 1;
          if (uVar2 < 7) {
            iVar23 = *(int *)(&UNK_10e4d1d38 + (ulong)uVar2 * 4);
          }
          else {
            iVar23 = 0;
          }
          if (*(int *)(lVar28 + 0x28) * iVar23 == 0xc) {
            lVar28 = *(long *)(lVar31 + 0x10) + (ulong)*(uint *)(lVar28 + 0x30);
            uVar34 = (ulong)*(uint *)(lVar31 + 0xf0);
          }
          else {
            lVar28 = 0;
            uVar34 = 0;
          }
          uVar35 = (ulong)*(ushort *)((long)plVar17 + 0xb4);
          pfVar26 = (float *)(lVar28 + uVar34 * uVar35 + 8);
          uVar36 = uVar35;
          while( true ) {
            uVar2 = *(uint *)(uVar32 + 0xf0);
            if (uVar2 == 0) {
              iVar23 = 0;
            }
            else {
              iVar23 = 0;
              if ((ulong)uVar2 != 0) {
                iVar23 = (int)((ulong)(*(long *)(uVar32 + 0x18) - *(long *)(uVar32 + 0x10)) /
                              (ulong)uVar2);
              }
            }
            if ((uint)(iVar23 + (int)uVar36) <= uVar35) break;
            fVar62 = fVar63 * pfVar26[-2];
            fVar67 = fVar63 * pfVar26[-1];
            fVar59 = fVar69 * *pfVar26;
            pfVar26[-2] = fVar65 * pfVar26[-2] + fVar67 + fVar61 + fVar59;
            pfVar26[-1] = fVar62 + fVar65 * pfVar26[-1] + fVar58 + fVar59;
            *pfVar26 = fVar62 + fVar67 + fVar60 + fVar64 * *pfVar26;
            uVar35 = uVar35 + 1;
            uVar36 = (ulong)*(ushort *)((long)plVar17 + 0xb4);
            pfVar26 = (float *)((long)pfVar26 + uVar34);
          }
          psVar42 = *(short **)(uVar32 + 0x28);
          uVar34 = uVar32;
          FUN_10ab4a5b4();
          if ((int)uVar34 != 0) {
            sVar22 = *(short *)((long)plVar17 + 0xb4);
            lVar31 = (uVar34 & 0xffffffff) << 1;
            psVar29 = (short *)(lVar39 + (ulong)*(uint *)((long)plVar17 + 0xb8) * 2);
            do {
              *psVar29 = *psVar42 + sVar22;
              lVar31 = lVar31 + -2;
              psVar29 = psVar29 + 1;
              psVar42 = psVar42 + 1;
            } while (lVar31 != 0);
          }
          uVar35 = *(long *)(uVar32 + 0x18) - *(long *)(uVar32 + 0x10);
          *(int *)((long)plVar17 + 0xb0) = *(int *)((long)plVar17 + 0xb0) + (int)uVar35;
          uVar2 = *(uint *)(uVar32 + 0xf0);
          if (uVar2 == 0) {
            sVar22 = 0;
          }
          else {
            sVar22 = 0;
            if ((ulong)uVar2 != 0) {
              sVar22 = (short)(uVar35 / uVar2);
            }
          }
          *(short *)((long)plVar17 + 0xb4) = *(short *)((long)plVar17 + 0xb4) + sVar22;
          *(int *)((long)plVar17 + 0xb8) = *(int *)((long)plVar17 + 0xb8) + (int)uVar34;
          pplVar46 = uStack_1d8;
        }
        uStack_1d8 = pplVar46;
        if (cStack_331 < '\0') {
          __ZdlPv(plStack_348);
        }
        if ((cStack_350 == '\x01') && (cStack_351 < '\0')) {
          __ZdlPv(uStack_368);
        }
        if ((long)ppuStack_380 < 0) {
          __ZdlPv(ppuStack_390);
        }
        plVar17 = plStack_218;
        fStack_438 = fVar51;
        fVar51 = fVar49;
        if (plStack_218 != (long *)0x0) {
          plVar37 = plStack_218 + 1;
          do {
            lVar31 = *plVar37;
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar37,0x10);
            if (bVar15) {
              *plVar37 = lVar31 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar31 == 0) {
            (**(code **)(*plStack_218 + 0x10))(plStack_218);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
      }
      uVar27 = uVar27 + 1;
      lVar31 = plVar45[3];
      uVar32 = (plVar45[4] - lVar31 >> 4) * 0x6db6db6db6db6db7;
    } while (uVar27 <= uVar32 && uVar32 - uVar27 != 0);
  }
  pplStack_2c0 = param_1 + 0x72;
  ppuStack_2b8 = (undefined **)((ulong)ppuStack_2b8 & 0xffffffffffffff00);
  FUN_10a19aac8();
  param_1[0x73] = plStack_268;
  param_1[0x72] = plStack_270;
  param_1[0x74] = (long *)pplStack_260;
  pplStack_260 = (long **)0x0;
  plStack_268 = (long *)0x0;
  plStack_270 = (long *)0x0;
  pplVar46 = pplStack_320;
  if ((bVar3 >> 1 & 1) != 0) {
    for (; pplVar46 != (long **)0x0; pplVar46 = (long **)*pplVar46) {
      ppuVar44 = (undefined **)pplVar46[0x10];
      if (ppuVar44 != (undefined **)0x0) {
        plVar45 = pplVar46[0x11];
        ppuVar20 = (undefined **)0x108;
        __Znwm();
        ppuVar20[1] = (undefined *)0x0;
        ppuVar20[2] = (undefined *)0x0;
        *ppuVar20 = (undefined *)&PTR_FUN_110ba2088;
        uStack_1d8._0_4_ = SUB84(plVar45,0);
        uStack_1d8._4_4_ = (undefined4)((ulong)plVar45 >> 0x20);
        if (plVar45 != (long *)0x0) {
          plVar45 = plVar45 + 1;
          do {
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar45,0x10);
            if (bVar15) {
              *plVar45 = *plVar45 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        ppuVar7 = ppuVar20 + 3;
        uStack_1e0 = (long **)ppuVar44;
        FUN_10a347c5c(ppuVar7,0,&uStack_1e0);
        plVar45 = (long *)CONCAT44(uStack_1d8._4_4_,(float)uStack_1d8);
        if (plVar45 != (long *)0x0) {
          plVar17 = plVar45 + 1;
          do {
            lVar31 = *plVar17;
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar15) {
              *plVar17 = lVar31 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar31 == 0) {
            (**(code **)(*plVar45 + 0x10))(plVar45);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar45);
          }
        }
        ppuStack_390 = ppuVar7;
        ppuStack_388 = ppuVar20;
        FUN_10a0cfb64(&ppuStack_390,ppuVar20 + 8,ppuVar7);
        FUN_10a0cf858(&uStack_220,&ppuStack_390);
        ppuVar44 = ppuStack_388;
        if (ppuStack_388 != (undefined **)0x0) {
          ppuVar20 = ppuStack_388 + 1;
          do {
            puVar30 = *ppuVar20;
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
            if (bVar15) {
              *ppuVar20 = puVar30 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (puVar30 == (undefined *)0x0) {
            (**(code **)(*ppuStack_388 + 0x10))(ppuStack_388);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar44);
          }
        }
        ppuStack_1b0 = (undefined **)0x0;
        uStack_1c8 = 0;
        uStack_1c4 = 0;
        uStack_1d0 = 0;
        uStack_1cc = 0;
        uStack_1b8 = (undefined **)0x0;
        uStack_1c0 = 0;
        uStack_1bc = 0;
        uStack_1d8._0_4_ = 0.0;
        uStack_1d8._4_4_ = 0;
        uStack_1e0 = (long **)0x0;
        fStack_1a0 = 0.0;
        uStack_19c = 0;
        uStack_19a = 0;
        fStack_1a8 = 1.0;
        uStack_1a4 = 0;
        uStack_1a2 = 0;
        uStack_190 = (undefined **)0x0;
        fStack_198 = 0.0;
        fStack_194 = 1.0;
        uStack_180 = (undefined **)0x3f800000;
        uStack_188 = (undefined **)0x0;
        uStack_170 = (undefined **)0x3f80000000000000;
        uStack_178 = 0;
        ppuStack_168 = (undefined **)0x0;
        ppuStack_160 = (undefined **)0x0;
        FUN_10a19ad28(&uStack_1e0,&uStack_220);
        func_0x00010a04a780(&ppuStack_168,pplVar46 + 0x14);
        plVar45 = (long *)CONCAT71(uStack_21f,uStack_220);
        plVar17 = (long *)plVar45[0x1c];
        if (plVar17 == (long *)0x0) {
          lVar39 = 0;
          lVar31 = 0;
        }
        else {
          (**(code **)(*plVar17 + 0x90))();
          lVar31 = *plVar17;
          plVar45 = (long *)CONCAT71(uStack_21f,uStack_220);
          lVar39 = plVar45[0x1c];
        }
        uStack_1c8 = (undefined4)lVar31;
        uStack_1c4 = (undefined4)((ulong)lVar31 >> 0x20);
        uStack_1d0 = (undefined4)lVar39;
        uStack_1cc = (undefined4)((ulong)lVar39 >> 0x20);
        FUN_10a347d04();
        if (plVar45 == (long *)0x0) {
          ppuStack_388 = (undefined **)0xff7fffff00000000;
          ppuStack_390 = (undefined **)0x0;
          ppuStack_380 = (undefined **)0xff7fffffff7fffff;
        }
        else {
          (**(code **)(*plVar45 + 0x38))(&ppuStack_390);
        }
        uStack_1b8 = ppuStack_388;
        uStack_1c0 = SUB84(ppuStack_390,0);
        uStack_1bc = (undefined4)((ulong)ppuStack_390 >> 0x20);
        ppuStack_1b0 = ppuStack_380;
        FUN_10a6628dc(pplStack_2c0,&uStack_1e0);
        ppuVar44 = ppuStack_160;
        if (ppuStack_160 != (undefined **)0x0) {
          ppuVar20 = ppuStack_160 + 1;
          do {
            puVar30 = *ppuVar20;
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
            if (bVar15) {
              *ppuVar20 = puVar30 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (puVar30 == (undefined *)0x0) {
            (**(code **)(*ppuStack_160 + 0x10))(ppuStack_160);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar44);
          }
        }
        plVar45 = (long *)CONCAT44(uStack_1d8._4_4_,(float)uStack_1d8);
        if (plVar45 != (long *)0x0) {
          plVar17 = plVar45 + 1;
          do {
            lVar31 = *plVar17;
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar15) {
              *plVar17 = lVar31 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar31 == 0) {
            (**(code **)(*plVar45 + 0x10))(plVar45);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar45);
          }
        }
        plVar45 = plStack_218;
        uStack_1d8 = (long **)CONCAT44(uStack_1d8._4_4_,(float)uStack_1d8);
        if (plStack_218 != (long *)0x0) {
          plVar17 = plStack_218 + 1;
          do {
            lVar31 = *plVar17;
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar15) {
              *plVar17 = lVar31 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          uStack_1d8 = (long **)CONCAT44(uStack_1d8._4_4_,(float)uStack_1d8);
          if (lVar31 == 0) {
            (**(code **)(*plStack_218 + 0x10))(plStack_218);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar45);
          }
        }
      }
    }
  }
  pfVar26 = (float *)param_1[0x71][0x13];
  pfVar1 = (float *)param_1[0x71][0x14];
  if (pfVar26 != pfVar1) {
    fVar50 = fVar6 * 0.0;
    do {
      fVar63 = pfVar26[10];
      fVar49 = fVar51;
      if (0.0 < fStack_438) {
        fVar49 = fVar51 * (fVar63 / fStack_438);
      }
      pppuVar41 = &ppuStack_390;
      FUN_10a56327c(&uStack_220);
      FUN_10ab6e728();
      if (*(char *)((long)pppuVar41 + 0x17) < '\0') {
        pppuVar47 = (undefined ***)&uStack_1e0;
        func_0x000107c3192c(pppuVar47,*pppuVar41,pppuVar41[1]);
      }
      else {
        uStack_1d8 = (long **)pppuVar41[1];
        uStack_1e0 = (long **)*pppuVar41;
        uStack_1d0 = SUB84(pppuVar41[2],0);
        uStack_1cc = (undefined4)((ulong)pppuVar41[2] >> 0x20);
        pppuVar47 = pppuVar41;
      }
      uStack_1c8 = SUB84(pppuVar41[3],0);
      uStack_1c4 = (undefined4)((ulong)pppuVar41[3] >> 0x20);
      uStack_1b8 = pppuVar41[5];
      uStack_1c0 = SUB84(pppuVar41[4],0);
      uStack_1bc = (undefined4)((ulong)pppuVar41[4] >> 0x20);
      ppuStack_1b0 = (undefined **)CONCAT44(ppuStack_1b0._4_4_,*(float *)(pppuVar41 + 6));
      FUN_10ab6e9d8();
      if (*(char *)((long)pppuVar47 + 0x17) < '\0') {
        pppuVar41 = (undefined ***)&fStack_1a8;
        func_0x000107c3192c(&fStack_1a8,*pppuVar47,pppuVar47[1]);
      }
      else {
        ppuVar20 = pppuVar47[1];
        ppuVar44 = *pppuVar47;
        fStack_194 = (float)((ulong)pppuVar47[2] >> 0x20);
        fStack_198 = SUB84(pppuVar47[2],0);
        uStack_19a = (undefined2)((ulong)ppuVar20 >> 0x30);
        uStack_19c = (undefined2)((ulong)ppuVar20 >> 0x20);
        fStack_1a0 = SUB84(ppuVar20,0);
        uStack_1a2 = (undefined2)((ulong)ppuVar44 >> 0x30);
        uStack_1a4 = (undefined2)((ulong)ppuVar44 >> 0x20);
        fStack_1a8 = SUB84(ppuVar44,0);
        pppuVar41 = pppuVar47;
      }
      uStack_190 = pppuVar47[3];
      uStack_180 = pppuVar47[5];
      uStack_188 = pppuVar47[4];
      uStack_178 = CONCAT44(uStack_178._4_4_,*(float *)(pppuVar47 + 6));
      FUN_10ab6eb18();
      if (*(char *)((long)pppuVar41 + 0x17) < '\0') {
        pppuVar47 = (undefined ***)&uStack_170;
        func_0x000107c3192c(&uStack_170,*pppuVar41,pppuVar41[1]);
      }
      else {
        ppuStack_160 = pppuVar41[2];
        ppuStack_168 = pppuVar41[1];
        uStack_170 = *pppuVar41;
        pppuVar47 = pppuVar41;
      }
      ppuStack_158 = pppuVar41[3];
      ppuStack_148 = pppuVar41[5];
      ppuStack_150 = pppuVar41[4];
      fStack_140 = *(float *)(pppuVar41 + 6);
      FUN_10ab6f020();
      if (*(char *)((long)pppuVar47 + 0x17) < '\0') {
        func_0x000107c3192c(appuStack_138,*pppuVar47,pppuVar47[1]);
      }
      else {
        ppuStack_128 = pppuVar47[2];
        appuStack_138[1] = pppuVar47[1];
        appuStack_138[0] = *pppuVar47;
      }
      ppuStack_120 = pppuVar47[3];
      ppuStack_110 = pppuVar47[5];
      ppuStack_118 = pppuVar47[4];
      fStack_108 = *(float *)(pppuVar47 + 6);
      FUN_10ab6f520(&ppuStack_390,&uStack_1e0,4);
      lVar31 = CONCAT71(uStack_21f,uStack_220);
      *(undefined4 *)(lVar31 + 0xf0) = ppuStack_390._0_4_;
      if ((undefined ***)(lVar31 + 0xf0) != &ppuStack_390) {
        FUN_10a1903c4(lVar31 + 0xf8,ppuStack_388,ppuStack_380,
                      ((long)ppuStack_380 - (long)ppuStack_388 >> 3) * 0x6db6db6db6db6db7);
      }
      fVar63 = fVar55 * fVar63 * 1.01;
      *(undefined8 *)(lVar31 + 0x118) = uStack_368;
      *(ulong *)(lVar31 + 0x110) = CONCAT62(uStack_36e,uStack_370);
      *(ulong *)(lVar31 + 0x128) = CONCAT17(cStack_351,uStack_358);
      *(undefined8 *)(lVar31 + 0x120) = uStack_360;
      *(ulong *)(lVar31 + 0x130) = CONCAT71(uStack_34f,cStack_350);
      pppuStack_2e8 = &ppuStack_388;
      func_0x00010a190844(&pppuStack_2e8);
      lVar31 = 0;
      do {
        if ((&cStack_121)[lVar31] < '\0') {
          __ZdlPv(*(undefined8 *)((long)appuStack_138 + lVar31));
        }
        lVar31 = lVar31 + -0x38;
      } while (lVar31 != -0xe0);
      *(undefined8 *)(CONCAT71(uStack_21f,uStack_220) + 0xe8) = 1;
      fVar61 = *pfVar26;
      fVar64 = pfVar26[1];
      fVar58 = pfVar26[3];
      fVar60 = pfVar26[4];
      ppuVar44 = (undefined **)0x480;
      __Znwm();
      fVar64 = fVar64 - fVar61;
      fVar62 = fVar60 * 0.5;
      fVar65 = fVar63 * 0.5;
      ppuStack_380 = ppuVar44 + 0x90;
      uStack_1e0 = (long **)((ulong)(uint)fVar62 << 0x20);
      uStack_1cc = 0x3f800000;
      uVar10 = uStack_1cc;
      uStack_1c8 = 0x3f800000;
      uVar11 = uStack_1c8;
      uStack_1d8._4_4_ = 0;
      uVar8 = uStack_1d8._4_4_;
      uStack_1d0 = 0;
      uVar9 = uStack_1d0;
      uStack_1c0 = 0;
      uStack_1c4 = 0;
      uStack_1bc = 0x3f800000;
      fVar61 = fVar60;
      if (0.0 <= fVar58) {
        fVar61 = fVar60 + (fVar58 - fVar62);
      }
      fVar59 = (fVar64 * 0.5) / fVar49;
      fVar52 = 0.5 - fVar59;
      fVar66 = (fVar61 / fVar49) * 0.5 + 0.5;
      uStack_1b8 = (undefined **)CONCAT44(fVar66,fVar52);
      ppuStack_390 = ppuVar44;
      ppuStack_388 = ppuVar44;
      uStack_1d8._0_4_ = fVar65;
      FUN_10a65f9b0(&ppuStack_390,&uStack_1e0);
      uStack_1e0 = (long **)CONCAT44(fVar62,fVar64);
      uStack_1c0 = 0;
      uStack_1c4 = 0;
      uStack_1bc = 0x3f800000;
      fVar67 = (fVar64 * 0.0 * 0.5) / fVar49;
      fVar68 = 0.5 - fVar67;
      uStack_1b8 = (undefined **)CONCAT44(fVar66,fVar68);
      uStack_1d8._0_4_ = fVar65;
      uStack_1d8._4_4_ = uVar8;
      uStack_1d0 = uVar9;
      uStack_1cc = uVar10;
      uStack_1c8 = uVar11;
      FUN_10a65f9b0(&ppuStack_390,&uStack_1e0);
      fVar69 = fVar60 * -0.5;
      uStack_1e0 = (long **)CONCAT44(fVar69,fVar64);
      uStack_1cc = 0x3f800000;
      uVar10 = uStack_1cc;
      uStack_1d8._4_4_ = 0;
      uVar8 = uStack_1d8._4_4_;
      uStack_1c0 = 0;
      uStack_1c4 = 0;
      uStack_1bc = 0x3f800000;
      fVar61 = fVar60 * 0.0;
      if (0.0 <= fVar58) {
        fVar61 = (fVar58 - fVar62) + fVar60 * 0.0;
      }
      fVar61 = (fVar61 / fVar49) * 0.5 + 0.5;
      uStack_1b8 = (undefined **)CONCAT44(fVar61,fVar68);
      uStack_1d8._0_4_ = fVar65;
      uStack_1d0 = uVar9;
      uStack_1c8 = uVar11;
      FUN_10a65f9b0(&ppuStack_390,&uStack_1e0);
      uStack_1e0 = (long **)((ulong)(uint)fVar69 << 0x20);
      uStack_1c0 = 0;
      uStack_1c4 = 0;
      uStack_1bc = 0x3f800000;
      uStack_1b8 = (undefined **)CONCAT44(fVar61,fVar52);
      uStack_1d8._0_4_ = fVar65;
      uStack_1d8._4_4_ = uVar8;
      uStack_1d0 = uVar9;
      uStack_1cc = uVar10;
      uStack_1c8 = uVar11;
      FUN_10a65f9b0(&ppuStack_390,&uStack_1e0);
      fVar49 = fVar63 * -0.5;
      uStack_1e0 = (long **)CONCAT44(fVar62,fVar64);
      uStack_1cc = 0xbf800000;
      uVar10 = uStack_1cc;
      uStack_1c8 = 0xbf800000;
      uVar11 = uStack_1c8;
      uStack_1d8._4_4_ = 0;
      uVar8 = uStack_1d8._4_4_;
      uStack_1d0 = 0;
      uVar9 = uStack_1d0;
      uStack_1c0 = 0;
      uStack_1c4 = 0;
      uStack_1bc = 0x3f800000;
      fVar67 = fVar67 + 0.5;
      uStack_1b8 = (undefined **)CONCAT44(fVar66,fVar67);
      uStack_1d8._0_4_ = fVar49;
      FUN_10a65f9b0(&ppuStack_390,&uStack_1e0);
      uStack_1e0 = (long **)((ulong)(uint)fVar62 << 0x20);
      uStack_1c0 = 0;
      uStack_1c4 = 0;
      uStack_1bc = 0x3f800000;
      fVar59 = fVar59 + 0.5;
      uStack_1b8 = (undefined **)CONCAT44(fVar66,fVar59);
      uStack_1d8._0_4_ = fVar49;
      uStack_1d8._4_4_ = uVar8;
      uStack_1d0 = uVar9;
      uStack_1cc = uVar10;
      uStack_1c8 = uVar11;
      FUN_10a65f9b0(&ppuStack_390,&uStack_1e0);
      uStack_1e0 = (long **)((ulong)(uint)fVar69 << 0x20);
      uStack_1cc = 0xbf800000;
      uVar10 = uStack_1cc;
      uStack_1d8._4_4_ = 0;
      uVar8 = uStack_1d8._4_4_;
      uStack_1c0 = 0;
      uStack_1c4 = 0;
      uStack_1bc = 0x3f800000;
      uStack_1b8 = (undefined **)CONCAT44(fVar61,fVar59);
      uStack_1d8._0_4_ = fVar49;
      uStack_1d0 = uVar9;
      uStack_1c8 = uVar11;
      FUN_10a65f9b0(&ppuStack_390,&uStack_1e0);
      uStack_1e0 = (long **)CONCAT44(fVar69,fVar64);
      uStack_1c0 = 0;
      uStack_1c4 = 0;
      uStack_1bc = 0x3f800000;
      uStack_1b8 = (undefined **)CONCAT44(fVar61,fVar67);
      uStack_1d8._0_4_ = fVar49;
      uStack_1d8._4_4_ = uVar8;
      uStack_1d0 = uVar9;
      uStack_1cc = uVar10;
      uStack_1c8 = uVar11;
      FUN_10a65f9b0(&ppuStack_390,&uStack_1e0);
      uStack_1e0 = (long **)CONCAT44(fVar62,fVar64);
      uStack_1cc = 0;
      uVar10 = uStack_1cc;
      uStack_1c8 = 0;
      uVar11 = uStack_1c8;
      uStack_1d8._4_4_ = 0x3f800000;
      uVar8 = uStack_1d8._4_4_;
      uStack_1d0 = 0;
      uVar9 = uStack_1d0;
      uStack_1c4 = 0xbf800000;
      uVar12 = uStack_1c4;
      uStack_1c0 = 0;
      uVar13 = uStack_1c0;
      uStack_1bc = 0x3f800000;
      fVar58 = ((fVar60 * 0.0) / fVar63) * 0.25;
      uStack_1b8 = (undefined **)CONCAT44(0x3f000000,fVar58);
      uStack_1d8._0_4_ = fVar65;
      FUN_10a65f9b0(&ppuStack_390,&uStack_1e0);
      uStack_1e0 = (long **)CONCAT44(fVar62,fVar64);
      uStack_1bc = 0x3f800000;
      uStack_1b8 = (undefined **)CONCAT44(0x3e800000,fVar58);
      uStack_1d8._0_4_ = fVar49;
      uStack_1d8._4_4_ = uVar8;
      uStack_1d0 = uVar9;
      uStack_1cc = uVar10;
      uStack_1c8 = uVar11;
      uStack_1c4 = uVar12;
      uStack_1c0 = uVar13;
      FUN_10a65f9b0(&ppuStack_390,&uStack_1e0);
      uStack_1e0 = (long **)CONCAT44(fVar69,fVar64);
      uStack_1cc = 0;
      uVar10 = uStack_1cc;
      uStack_1d8._4_4_ = 0x3f800000;
      uVar8 = uStack_1d8._4_4_;
      uStack_1c4 = 0xbf800000;
      uVar12 = uStack_1c4;
      uStack_1bc = 0x3f800000;
      fVar61 = (fVar60 / fVar63) * 0.25;
      uStack_1b8 = (undefined **)CONCAT44(0x3e800000,fVar61);
      uStack_1d8._0_4_ = fVar49;
      uStack_1d0 = uVar9;
      uStack_1c8 = uVar11;
      uStack_1c0 = uVar13;
      FUN_10a65f9b0(&ppuStack_390,&uStack_1e0);
      uStack_1e0 = (long **)CONCAT44(fVar69,fVar64);
      uStack_1bc = 0x3f800000;
      uStack_1b8 = (undefined **)CONCAT44(0x3f000000,fVar61);
      uStack_1d8._0_4_ = fVar65;
      uStack_1d8._4_4_ = uVar8;
      uStack_1d0 = uVar9;
      uStack_1cc = uVar10;
      uStack_1c8 = uVar11;
      uStack_1c4 = uVar12;
      uStack_1c0 = uVar13;
      FUN_10a65f9b0(&ppuStack_390,&uStack_1e0);
      uStack_1e0 = (long **)((ulong)(uint)fVar62 << 0x20);
      uStack_1cc = 0;
      uStack_1c8 = 0;
      uStack_1d8._4_4_ = 0xbf800000;
      uStack_1d0 = 0;
      uStack_1c4 = 0x3f800000;
      uStack_1c0 = 0;
      uStack_1bc = 0x3f800000;
      uStack_1b8 = (undefined **)CONCAT44(0x3e800000,fVar61);
      uStack_1d8._0_4_ = fVar49;
      FUN_10a65f9b0(&ppuStack_390,&uStack_1e0);
      uStack_1e0 = (long **)((ulong)(uint)fVar62 << 0x20);
      uStack_1cc = 0;
      uStack_1c8 = 0;
      uStack_1d8._4_4_ = 0xbf800000;
      uStack_1d0 = 0;
      uStack_1c4 = 0x3f800000;
      uStack_1c0 = 0;
      uStack_1bc = 0x3f800000;
      uStack_1b8 = (undefined **)CONCAT44(0x3f000000,fVar61);
      uStack_1d8._0_4_ = fVar65;
      FUN_10a65f9b0(&ppuStack_390,&uStack_1e0);
      uStack_1e0 = (long **)((ulong)(uint)fVar69 << 0x20);
      uStack_1cc = 0;
      uStack_1c8 = 0;
      uStack_1d8._4_4_ = 0xbf800000;
      uStack_1d0 = 0;
      uStack_1c4 = 0x3f800000;
      uStack_1c0 = 0;
      uStack_1bc = 0x3f800000;
      uStack_1b8 = (undefined **)CONCAT44(0x3f000000,fVar58);
      uStack_1d8._0_4_ = fVar65;
      FUN_10a65f9b0(&ppuStack_390,&uStack_1e0);
      uStack_1e0 = (long **)((ulong)(uint)fVar69 << 0x20);
      uStack_1cc = 0;
      uStack_1c8 = 0;
      uStack_1d8._4_4_ = 0xbf800000;
      uStack_1d0 = 0;
      uStack_1c4 = 0x3f800000;
      uStack_1c0 = 0;
      uStack_1bc = 0x3f800000;
      uStack_1b8 = (undefined **)CONCAT44(0x3e800000,fVar58);
      uStack_1d8._0_4_ = fVar49;
      FUN_10a65f9b0(&ppuStack_390,&uStack_1e0);
      uStack_1e0 = (long **)((ulong)(uint)fVar62 << 0x20);
      uStack_1cc = 0;
      uStack_1c8 = 0x3f800000;
      uStack_1d8._4_4_ = 0;
      uStack_1d0 = 0x3f800000;
      uStack_1c0 = 0;
      uStack_1c4 = 0;
      uStack_1bc = 0x3f800000;
      fVar61 = ((fVar64 * 0.0) / fVar63) * 0.25;
      uStack_1b8 = (undefined **)CONCAT44(0x3f000000,fVar61);
      uStack_1d8._0_4_ = fVar65;
      FUN_10a65f9b0(&ppuStack_390,&uStack_1e0);
      uStack_1e0 = (long **)((ulong)(uint)fVar62 << 0x20);
      uStack_1cc = 0;
      uStack_1c8 = 0x3f800000;
      uStack_1d8._4_4_ = 0;
      uStack_1d0 = 0x3f800000;
      uStack_1c0 = 0;
      uStack_1c4 = 0;
      uStack_1bc = 0x3f800000;
      uStack_1b8 = (undefined **)CONCAT44(0x3e800000,fVar61);
      uStack_1d8._0_4_ = fVar49;
      FUN_10a65f9b0(&ppuStack_390,&uStack_1e0);
      uStack_1e0 = (long **)CONCAT44(fVar62,fVar64);
      uStack_1cc = 0;
      uStack_1c8 = 0x3f800000;
      uStack_1d8._4_4_ = 0;
      uStack_1d0 = 0x3f800000;
      uStack_1c0 = 0;
      uStack_1c4 = 0;
      uStack_1bc = 0x3f800000;
      fVar63 = (fVar64 / fVar63) * 0.25;
      uStack_1b8 = (undefined **)CONCAT44(0x3e800000,fVar63);
      uStack_1d8._0_4_ = fVar49;
      FUN_10a65f9b0(&ppuStack_390,&uStack_1e0);
      uStack_1e0 = (long **)CONCAT44(fVar62,fVar64);
      uStack_1cc = 0;
      uStack_1c8 = 0x3f800000;
      uStack_1d8._4_4_ = 0;
      uStack_1d0 = 0x3f800000;
      uStack_1c0 = 0;
      uStack_1c4 = 0;
      uStack_1bc = 0x3f800000;
      uStack_1b8 = (undefined **)CONCAT44(0x3f000000,fVar63);
      uStack_1d8._0_4_ = fVar65;
      FUN_10a65f9b0(&ppuStack_390,&uStack_1e0);
      uStack_1e0 = (long **)((ulong)(uint)fVar69 << 0x20);
      uStack_1cc = 0;
      uStack_1c8 = 0xbf800000;
      uStack_1d8._4_4_ = 0;
      uStack_1d0 = 0xbf800000;
      uStack_1c0 = 0;
      uStack_1c4 = 0;
      uStack_1bc = 0x3f800000;
      uStack_1b8 = (undefined **)CONCAT44(0x3e800000,fVar63);
      uStack_1d8._0_4_ = fVar49;
      FUN_10a65f9b0(&ppuStack_390,&uStack_1e0);
      uStack_1e0 = (long **)((ulong)(uint)fVar69 << 0x20);
      uStack_1cc = 0;
      uStack_1c8 = 0xbf800000;
      uStack_1d8._4_4_ = 0;
      uStack_1d0 = 0xbf800000;
      uStack_1c0 = 0;
      uStack_1c4 = 0;
      uStack_1bc = 0x3f800000;
      uStack_1b8 = (undefined **)CONCAT44(0x3f000000,fVar63);
      uStack_1d8._0_4_ = fVar65;
      FUN_10a65f9b0(&ppuStack_390,&uStack_1e0);
      uStack_1e0 = (long **)CONCAT44(fVar69,fVar64);
      uStack_1cc = 0;
      uStack_1c8 = 0xbf800000;
      uStack_1d8._4_4_ = 0;
      uStack_1d0 = 0xbf800000;
      uStack_1c0 = 0;
      uStack_1c4 = 0;
      uStack_1bc = 0x3f800000;
      uStack_1b8 = (undefined **)CONCAT44(0x3f000000,fVar61);
      uStack_1d8._0_4_ = fVar65;
      FUN_10a65f9b0(&ppuStack_390,&uStack_1e0);
      uStack_1e0 = (long **)CONCAT44(fVar69,fVar64);
      uStack_1cc = 0;
      uStack_1c8 = 0xbf800000;
      uStack_1d8._4_4_ = 0;
      uStack_1d0 = 0xbf800000;
      uStack_1c0 = 0;
      uStack_1c4 = 0;
      uStack_1bc = 0x3f800000;
      uStack_1b8 = (undefined **)CONCAT44(0x3e800000,fVar61);
      uStack_1d8._0_4_ = fVar49;
      FUN_10a65f9b0(&ppuStack_390,&uStack_1e0);
      ppuVar20 = ppuStack_388;
      ppuVar44 = ppuStack_390;
      FUN_10ab4a154(CONCAT71(uStack_21f,uStack_220),
                    ((long)ppuStack_388 - (long)ppuStack_390 >> 4) * -0x5555555555555555);
      lVar31 = CONCAT71(uStack_21f,uStack_220);
      uVar2 = *(uint *)(lVar31 + 0x110);
      if (uVar2 == 0xffffffff) {
        lVar39 = 0;
      }
      else {
        uVar27 = (*(long *)(lVar31 + 0x100) - *(long *)(lVar31 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
        if (uVar27 < uVar2 || uVar27 - uVar2 == 0) {
          FUN_10ab725fc();
LAB_10a662420:
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x10a662424);
          (*pcVar14)();
        }
        lVar39 = *(long *)(lVar31 + 0xf8) + (ulong)uVar2 * 0x38;
      }
      uVar2 = *(int *)(lVar39 + 0x24) - 1;
      if (uVar2 < 7) {
        iVar23 = *(int *)(&UNK_10e4d1d38 + (ulong)uVar2 * 4);
      }
      else {
        iVar23 = 0;
      }
      if (*(int *)(lVar39 + 0x28) * iVar23 == 0xc) {
        plVar45 = (long *)(*(long *)(lVar31 + 0x10) + (ulong)*(uint *)(lVar39 + 0x30));
        uVar27 = (ulong)*(uint *)(lVar31 + 0xf0);
      }
      else {
        plVar45 = (long *)0x0;
        uVar27 = 0;
      }
      uVar2 = *(uint *)(lVar31 + 0x114);
      if (uVar2 == 0xffffffff) {
        lVar39 = 0;
      }
      else {
        uVar32 = (*(long *)(lVar31 + 0x100) - *(long *)(lVar31 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
        if (uVar32 < uVar2 || uVar32 - uVar2 == 0) {
          FUN_10ab725fc();
          goto LAB_10a662420;
        }
        lVar39 = *(long *)(lVar31 + 0xf8) + (ulong)uVar2 * 0x38;
      }
      uVar2 = *(int *)(lVar39 + 0x24) - 1;
      if (uVar2 < 7) {
        iVar23 = *(int *)(&UNK_10e4d1d38 + (ulong)uVar2 * 4);
      }
      else {
        iVar23 = 0;
      }
      if (*(int *)(lVar39 + 0x28) * iVar23 == 0xc) {
        puVar21 = (undefined8 *)(*(long *)(lVar31 + 0x10) + (ulong)*(uint *)(lVar39 + 0x30));
        uVar32 = (ulong)*(uint *)(lVar31 + 0xf0);
      }
      else {
        puVar21 = (undefined8 *)0x0;
        uVar32 = 0;
      }
      uVar2 = *(uint *)(lVar31 + 0x118);
      if (uVar2 == 0xffffffff) {
        lVar39 = 0;
      }
      else {
        uVar34 = (*(long *)(lVar31 + 0x100) - *(long *)(lVar31 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
        if (uVar34 < uVar2 || uVar34 - uVar2 == 0) {
          FUN_10ab725fc();
          goto LAB_10a662420;
        }
        lVar39 = *(long *)(lVar31 + 0xf8) + (ulong)uVar2 * 0x38;
      }
      uVar2 = *(int *)(lVar39 + 0x24) - 1;
      if (uVar2 < 7) {
        iVar23 = *(int *)(&UNK_10e4d1d38 + (ulong)uVar2 * 4);
      }
      else {
        iVar23 = 0;
      }
      if (*(int *)(lVar39 + 0x28) * iVar23 == 0x10) {
        plVar17 = (long *)(*(long *)(lVar31 + 0x10) + (ulong)*(uint *)(lVar39 + 0x30));
        uVar34 = (ulong)*(uint *)(lVar31 + 0xf0);
      }
      else {
        plVar17 = (long *)0x0;
        uVar34 = 0;
      }
      uVar2 = *(uint *)(lVar31 + 0x120);
      if (uVar2 == 0xffffffff) {
        lVar39 = 0;
      }
      else {
        uVar35 = (*(long *)(lVar31 + 0x100) - *(long *)(lVar31 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
        if (uVar35 < uVar2 || uVar35 - uVar2 == 0) {
          FUN_10ab725fc();
          goto LAB_10a662420;
        }
        lVar39 = *(long *)(lVar31 + 0xf8) + (ulong)uVar2 * 0x38;
      }
      uVar2 = *(int *)(lVar39 + 0x24) - 1;
      if (uVar2 < 7) {
        iVar23 = *(int *)(&UNK_10e4d1d38 + (ulong)uVar2 * 4);
      }
      else {
        iVar23 = 0;
      }
      ppuVar7 = ppuVar44;
      if (*(int *)(lVar39 + 0x28) * iVar23 == 8) {
        plVar37 = (long *)(*(long *)(lVar31 + 0x10) + (ulong)*(uint *)(lVar39 + 0x30));
        uVar35 = (ulong)*(uint *)(lVar31 + 0xf0);
      }
      else {
        plVar37 = (long *)0x0;
        uVar35 = 0;
      }
      for (; ppuVar7 != ppuVar20; ppuVar7 = ppuVar7 + 6) {
        puVar30 = *ppuVar7;
        *(undefined4 *)(plVar45 + 1) = *(undefined4 *)(ppuVar7 + 1);
        *plVar45 = (long)puVar30;
        uVar38 = *(undefined8 *)((long)ppuVar7 + 0xc);
        *(undefined4 *)(puVar21 + 1) = *(undefined4 *)((long)ppuVar7 + 0x14);
        *puVar21 = uVar38;
        puVar30 = ppuVar7[3];
        plVar17[1] = (long)ppuVar7[4];
        *plVar17 = (long)puVar30;
        *plVar37 = (long)ppuVar7[5];
        plVar37 = (long *)((long)plVar37 + uVar35);
        plVar17 = (long *)((long)plVar17 + uVar34);
        puVar21 = (undefined8 *)((long)puVar21 + uVar32);
        plVar45 = (long *)((long)plVar45 + uVar27);
      }
      puVar21 = (undefined8 *)0x48;
      __Znwm();
      puVar21[8] = 0x16001700140015;
      puVar21[5] = 0xe000f000c000d;
      puVar21[4] = 0xe000c000a000b;
      puVar21[7] = 0x16001400120013;
      puVar21[6] = 0x10001100120010;
      puVar21[1] = 0x6000400020003;
      *puVar21 = &UNK_100020000;
      puVar21[3] = 0x80009000a0008;
      puVar21[2] = 0x6000700040005;
      lVar28 = CONCAT71(uStack_21f,uStack_220);
      lVar39 = *(long *)(lVar28 + 0x28);
      lVar31 = *(long *)(lVar28 + 0x30);
      uVar27 = lVar31 - lVar39;
      if (uVar27 < 0x48) {
        func_0x000107c27d58((long *)(lVar28 + 0x28),0x48 - uVar27);
        lVar39 = *(long *)(CONCAT71(uStack_21f,uStack_220) + 0x28);
        lVar31 = *(long *)(CONCAT71(uStack_21f,uStack_220) + 0x30);
      }
      else if (uVar27 != 0x48) {
        lVar31 = lVar39 + 0x48;
        *(long *)(lVar28 + 0x30) = lVar31;
      }
      _memcpy(lVar39,puVar21,lVar31 - lVar39);
      FUN_10ab4e0a4(CONCAT71(uStack_21f,uStack_220));
      __ZdlPv(puVar21);
      if (ppuVar44 != (undefined **)0x0) {
        __ZdlPv(ppuVar44);
      }
      if (CONCAT71(uStack_21f,uStack_220) != 0) {
        ppuStack_1b0 = (undefined **)0x0;
        uStack_1c8 = 0;
        uStack_1c4 = 0;
        uStack_1d0 = 0;
        uStack_1cc = 0;
        uStack_1b8 = (undefined **)0x0;
        uStack_1c0 = 0;
        uStack_1bc = 0;
        uStack_1d8._0_4_ = 0.0;
        uStack_1d8._4_4_ = 0;
        uStack_1e0 = (long **)0x0;
        ppuStack_168 = (undefined **)0x0;
        ppuStack_160 = (undefined **)0x0;
        if ((param_3[0x8c] != 1) && (fVar49 = 0.0, param_3[0x8c] == 0)) {
          fVar49 = fVar65;
        }
        fVar63 = (pfVar26[2] + pfVar26[3]) * fVar6;
        fVar61 = fVar63 * 0.0;
        fVar64 = *pfVar26 * fVar6 * 0.0;
        fVar65 = fVar61 + fVar64;
        fVar58 = fVar6 * fVar49 * 0.0;
        uStack_19c = SUB42(fVar50,0);
        uStack_19a = (undefined2)((uint)fVar50 >> 0x10);
        uStack_180 = (undefined **)CONCAT44(fVar50,fVar6);
        uVar38 = NEON_rev64(CONCAT44(*pfVar26 * fVar6,fVar63),4);
        uStack_178 = CONCAT44(fVar64 + (float)((ulong)uVar38 >> 0x20) + fVar58 + 0.0,
                              fVar61 + (float)uVar38 + fVar58 + 0.0);
        uStack_170 = (undefined **)CONCAT44(fVar65 + fVar58 + 1.0,fVar65 + fVar6 * fVar49 + 0.0);
        ppuStack_390 = (undefined **)0x0;
        fStack_1a8 = fVar6;
        uStack_1a4 = uStack_19c;
        uStack_1a2 = uStack_19a;
        fStack_1a0 = fVar50;
        fStack_198 = fVar50;
        fStack_194 = fVar6;
        uStack_190 = (undefined **)CONCAT44(fVar50,fVar50);
        uStack_188 = (undefined **)CONCAT44(fVar50,fVar50);
        FUN_10a5632fc(&pppuStack_2e8,&pplStack_308,&ppuStack_390,&uStack_220);
        ppuStack_390 = *(undefined ***)(param_4 + 0x170);
        FUN_10a551eec(&pplStack_308,&ppuStack_390,&pppuStack_2e8);
        FUN_10a19ad28(&uStack_1e0,&pplStack_308);
        plVar45 = pplStack_308[0x1c];
        if (plVar45 == (long *)0x0) {
          plVar45 = (long *)0x0;
          lVar31 = 0;
        }
        else {
          (**(code **)(*plVar45 + 0x90))();
          lVar31 = *plVar45;
          plVar45 = pplStack_308[0x1c];
        }
        uStack_1c8 = (undefined4)lVar31;
        uStack_1c4 = (undefined4)((ulong)lVar31 >> 0x20);
        uStack_1d0 = SUB84(plVar45,0);
        uStack_1cc = (undefined4)((ulong)plVar45 >> 0x20);
        pplVar46 = pplStack_308;
        FUN_10a347d04();
        if (pplVar46 == (long **)0x0) {
          ppuStack_388 = (undefined **)0xff7fffff00000000;
          ppuStack_390 = (undefined **)0x0;
          ppuStack_380 = (undefined **)0xff7fffffff7fffff;
        }
        else {
          (*(code *)(*pplVar46)[7])(&ppuStack_390);
        }
        ppuVar44 = ppuStack_160;
        uStack_1b8 = ppuStack_388;
        uStack_1c0 = SUB84(ppuStack_390,0);
        uStack_1bc = (undefined4)((ulong)ppuStack_390 >> 0x20);
        ppuStack_1b0 = ppuStack_380;
        ppuStack_160 = (undefined **)0x0;
        ppuStack_168 = (undefined **)0x0;
        if (ppuVar44 != (undefined **)0x0) {
          plVar45 = (long *)(ppuVar44 + 1);
          do {
            lVar31 = *plVar45;
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar45,0x10);
            if (bVar15) {
              *plVar45 = lVar31 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar31 == 0) {
            (**(code **)((long)*ppuVar44 + 0x10))(ppuVar44);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar44);
          }
        }
        FUN_10a6628dc(pplStack_2c0,&uStack_1e0);
        plVar45 = plStack_300;
        if (plStack_300 != (long *)0x0) {
          plVar17 = plStack_300 + 1;
          do {
            lVar31 = *plVar17;
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar15) {
              *plVar17 = lVar31 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar31 == 0) {
            (**(code **)(*plStack_300 + 0x10))(plStack_300);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar45);
          }
        }
        plVar45 = plStack_2e0;
        if (plStack_2e0 != (long *)0x0) {
          plVar17 = plStack_2e0 + 1;
          do {
            lVar31 = *plVar17;
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar15) {
              *plVar17 = lVar31 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar31 == 0) {
            (**(code **)(*plStack_2e0 + 0x10))(plStack_2e0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar45);
          }
        }
        ppuVar44 = ppuStack_160;
        if (ppuStack_160 != (undefined **)0x0) {
          ppuVar20 = ppuStack_160 + 1;
          do {
            puVar30 = *ppuVar20;
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
            if (bVar15) {
              *ppuVar20 = puVar30 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (puVar30 == (undefined *)0x0) {
            (**(code **)(*ppuStack_160 + 0x10))(ppuStack_160);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar44);
          }
        }
        plVar45 = (long *)CONCAT44(uStack_1d8._4_4_,(float)uStack_1d8);
        if (plVar45 != (long *)0x0) {
          plVar17 = plVar45 + 1;
          do {
            lVar31 = *plVar17;
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar15) {
              *plVar17 = lVar31 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar31 == 0) {
            (**(code **)(*plVar45 + 0x10))(plVar45);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar45);
          }
        }
      }
      plVar45 = plStack_218;
      if (plStack_218 != (long *)0x0) {
        plVar17 = plStack_218 + 1;
        do {
          lVar31 = *plVar17;
          cVar5 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar15) {
            *plVar17 = lVar31 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar31 == 0) {
          (**(code **)(*plStack_218 + 0x10))(plStack_218);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar45);
        }
      }
      pfVar26 = pfVar26 + 0xe;
    } while (pfVar26 != pfVar1);
  }
  FUN_10a67eac4(&pplStack_2c0);
  uStack_1e0 = &plStack_270;
  func_0x00010a19a750(&uStack_1e0);
  pplVar46 = &plStack_330;
  FUN_10a67e78c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return pplVar46;
  }
  ___stack_chk_fail();
  lVar31 = -0xe0;
  pcVar43 = &cStack_121;
  do {
    if (*pcVar43 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar43 + -0x17));
    }
    lVar31 = lVar31 + 0x38;
    pcVar43 = pcVar43 + -0x38;
  } while (lVar31 != 0);
  FUN_10a0e3194(&pplStack_3a0);
  FUN_10a662880(&ppuStack_390);
  FUN_10a67e78c(&plStack_330);
  __Unwind_Resume();
  if (*(char *)((long)pplVar46 + 0x5f) < '\0') {
    __ZdlPv(pplVar46[9]);
  }
  if ((*(char *)(pplVar46 + 8) == '\x01') && (*(char *)((long)pplVar46 + 0x3f) < '\0')) {
    __ZdlPv(pplVar46[5]);
  }
  if (*(char *)((long)pplVar46 + 0x17) < '\0') {
    __ZdlPv(*pplVar46);
  }
  return pplVar46;
LAB_10a65fd8c:
  pplVar46 = (long **)*pplVar46;
  if (pplVar46 == (long **)0x0) goto LAB_10a65fd98;
  goto LAB_10a65fd44;
}



/* Entry: 10a65fab8; end: 10a66287f;  */

long ** FUN_10a65fab8(long param_1,byte *param_2,byte *param_3,long param_4)

{
  float *pfVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  float fVar6;
  undefined **ppuVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  code *pcVar14;
  bool bVar15;
  long lVar16;
  long *plVar17;
  long **pplVar18;
  ulong *puVar19;
  undefined **ppuVar20;
  undefined8 *puVar21;
  short sVar22;
  int iVar23;
  ulong uVar24;
  undefined ***pppuVar25;
  undefined ***pppuVar26;
  float *pfVar27;
  long *plVar28;
  long lVar29;
  short *psVar30;
  undefined *puVar31;
  long **pplVar32;
  long **pplVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  long *plVar37;
  undefined8 uVar38;
  long lVar39;
  undefined ***pppuVar40;
  short *psVar41;
  char *pcVar42;
  ulong uVar43;
  undefined **ppuVar44;
  long lVar45;
  long **pplVar46;
  undefined ***pppuVar47;
  undefined ***pppuVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fStack_3f8;
  undefined1 uStack_378;
  undefined7 uStack_377;
  long lStack_370;
  undefined7 uStack_368;
  undefined1 uStack_361;
  long **pplStack_360;
  long *plStack_358;
  undefined **ppuStack_350;
  undefined **ppuStack_348;
  undefined **ppuStack_340;
  long *plStack_338;
  undefined2 uStack_330;
  undefined6 uStack_32e;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined7 uStack_318;
  char cStack_311;
  char cStack_310;
  undefined7 uStack_30f;
  long *plStack_308;
  long *plStack_300;
  undefined7 uStack_2f8;
  char cStack_2f1;
  long *plStack_2f0;
  undefined ***pppuStack_2e8;
  long **pplStack_2e0;
  ulong uStack_2d8;
  float fStack_2d0;
  long **pplStack_2c8;
  long *plStack_2c0;
  long lStack_2b8;
  undefined1 uStack_2a9;
  undefined ***pppuStack_2a8;
  long *plStack_2a0;
  long *plStack_290;
  long *plStack_288;
  undefined *puStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined8 *apuStack_268 [7];
  long *plStack_230;
  long *plStack_228;
  undefined *puStack_220;
  undefined8 *apuStack_218 [7];
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  long *plStack_1d8;
  undefined7 uStack_1d0;
  char cStack_1c9;
  undefined8 auStack_1c0 [2];
  char acStack_1a9 [9];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined **ppuStack_170;
  float fStack_168;
  undefined2 uStack_164;
  undefined2 uStack_162;
  float fStack_160;
  undefined2 uStack_15c;
  undefined2 uStack_15a;
  float fStack_158;
  float fStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  float fStack_100;
  undefined **appuStack_f8 [2];
  undefined **ppuStack_e8;
  char cStack_e1;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  float fStack_c8;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar45 = *(long *)(param_1 + 0x388);
  fVar6 = 0.0;
  if (1e-06 <= *(float *)(param_1 + 0x3c8)) {
    fVar6 = 1.0 / *(float *)(param_1 + 0x3c8);
  }
  fVar53 = *(float *)(param_3 + 0x88) * 100.0;
  bVar3 = *param_3;
  fStack_3f8 = 0.0;
  fVar51 = 0.0;
  if (param_3[0x8c] == 0) {
    fVar51 = fVar53 * 0.5;
  }
  fVar50 = fVar53 * -0.5;
  if (param_3[0x8c] != 1) {
    fVar50 = fVar51;
  }
  pppuStack_2e8 = (undefined ***)0x0;
  plStack_2f0 = (long *)0x0;
  uStack_2d8 = 0;
  pplStack_2e0 = (long **)0x0;
  fStack_2d0 = 1.0;
  lVar16 = *(long *)(lVar45 + 0x18);
  lVar39 = *(long *)(lVar45 + 0x20);
  if (lVar39 != lVar16) {
    uVar43 = 0;
    do {
      pppuVar40 = (undefined ***)**(undefined8 **)(lVar16 + uVar43 * 0x70 + 0x28);
      if (pppuVar40 == (undefined ***)0x0) {
        pppuVar47 = (undefined ***)0x0;
      }
      else {
        pppuVar47 = pppuVar40;
        ___dynamic_cast(pppuVar40,&PTR_DAT_110c48fb0,&PTR_DAT_110c46458,0);
      }
      uVar24 = (lVar39 - lVar16 >> 4) * 0x6db6db6db6db6db7;
      if (uVar24 < uVar43 || uVar24 - uVar43 == 0) goto LAB_10a662420;
      FUN_10a65f370(&ppuStack_350,pppuVar40,pppuVar47 != (undefined ***)0x0,bVar3 >> 1 & 1,
                    lVar16 + uVar43 * 0x70 + 0x50);
      uVar24 = (*(long *)(lVar45 + 0x20) - *(long *)(lVar45 + 0x18) >> 4) * 0x6db6db6db6db6db7;
      if (uVar24 < uVar43 || uVar24 - uVar43 == 0) goto LAB_10a662420;
      lVar16 = **(long **)(*(long *)(lVar45 + 0x18) + uVar43 * 0x70 + 0x28);
      FUN_10ab29680(fVar53);
      if (lVar16 != 0) {
        FUN_10a3ad2b8(&pplStack_360);
        plVar17 = pplStack_360[0x1c];
        if (plVar17 == (long *)0x0) {
LAB_10a65fcf0:
          lVar16 = 0;
        }
        else {
          (**(code **)(*plVar17 + 0x90))();
          lVar16 = *plVar17;
          if (lVar16 == 0) goto LAB_10a65fcf0;
          ___dynamic_cast(lVar16,&PTR_DAT_110c4a868,&PTR_DAT_110bf06a0,0);
        }
        pppuVar48 = &ppuStack_350;
        FUN_10a67e860();
        pppuVar26 = pppuStack_2e8;
        if (pppuStack_2e8 != (undefined ***)0x0) {
          uVar24 = (long)pppuStack_2e8 - 1;
          if (((ulong)pppuStack_2e8 & uVar24) == 0) {
            pppuVar40 = (undefined ***)(uVar24 & (ulong)pppuVar48);
          }
          else {
            pppuVar40 = pppuVar48;
            if (pppuStack_2e8 <= pppuVar48) {
              uVar34 = 0;
              if (pppuStack_2e8 != (undefined ***)0x0) {
                uVar34 = (ulong)pppuVar48 / (ulong)pppuStack_2e8;
              }
              pppuVar40 = (undefined ***)((long)pppuVar48 - uVar34 * (long)pppuStack_2e8);
            }
          }
          if (((undefined8 *)plStack_2f0[(long)pppuVar40] != (undefined8 *)0x0) &&
             (pplVar46 = *(long ***)plStack_2f0[(long)pppuVar40], pplVar46 != (long **)0x0)) {
LAB_10a65fd44:
            pppuVar25 = (undefined ***)pplVar46[1];
            if (pppuVar25 == pppuVar48) {
              pplVar32 = pplVar46 + 2;
              FUN_10a67e958(pplVar32,&ppuStack_350);
              if (((ulong)pplVar32 & 1) == 0) goto LAB_10a65fd8c;
              if ((bVar3 >> 1 & 1) == 0) goto LAB_10a6600b4;
              if (((ulong)pplVar46[0x13] & 1) == 0) {
                FUN_10a56327c(&uStack_1a0,&plStack_230);
                pplVar32 = pplVar46 + 0x10;
                FUN_10a551e24(pplVar32,&uStack_1a0);
                pplVar18 = uStack_198;
                if (uStack_198 != (long **)0x0) {
                  pplVar33 = uStack_198 + 1;
                  do {
                    plVar17 = *pplVar33;
                    cVar5 = '\x01';
                    bVar15 = (bool)ExclusiveMonitorPass(pplVar33,0x10);
                    if (bVar15) {
                      *pplVar33 = (long *)((long)plVar17 + -1);
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (plVar17 == (long *)0x0) {
                    (*(code *)(*uStack_198)[2])(uStack_198);
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                    pplVar32 = pplVar18;
                  }
                }
                FUN_10ab6e728();
                if (*(char *)((long)pplVar32 + 0x17) < '\0') {
                  pplVar18 = (long **)&uStack_1a0;
                  func_0x000107c3192c(pplVar18,*pplVar32,pplVar32[1]);
                }
                else {
                  uStack_198 = (long **)pplVar32[1];
                  uStack_1a0 = (long **)*pplVar32;
                  uStack_190 = SUB84(pplVar32[2],0);
                  uStack_18c = (undefined4)((ulong)pplVar32[2] >> 0x20);
                  pplVar18 = pplVar32;
                }
                uStack_188 = SUB84(pplVar32[3],0);
                uStack_184 = (undefined4)((ulong)pplVar32[3] >> 0x20);
                uStack_178 = (undefined **)pplVar32[5];
                uStack_180 = SUB84(pplVar32[4],0);
                uStack_17c = (undefined4)((ulong)pplVar32[4] >> 0x20);
                ppuStack_170 = (undefined **)CONCAT44(ppuStack_170._4_4_,*(float *)(pplVar32 + 6));
                FUN_10ab6e9d8();
                if (*(char *)((long)pplVar18 + 0x17) < '\0') {
                  pplVar32 = (long **)&fStack_168;
                  func_0x000107c3192c(&fStack_168,*pplVar18,pplVar18[1]);
                }
                else {
                  plVar28 = pplVar18[1];
                  plVar17 = *pplVar18;
                  fStack_154 = (float)((ulong)pplVar18[2] >> 0x20);
                  fStack_158 = SUB84(pplVar18[2],0);
                  uStack_15a = (undefined2)((ulong)plVar28 >> 0x30);
                  uStack_15c = (undefined2)((ulong)plVar28 >> 0x20);
                  fStack_160 = SUB84(plVar28,0);
                  uStack_162 = (undefined2)((ulong)plVar17 >> 0x30);
                  uStack_164 = (undefined2)((ulong)plVar17 >> 0x20);
                  fStack_168 = SUB84(plVar17,0);
                  pplVar32 = pplVar18;
                }
                uStack_150 = (undefined **)pplVar18[3];
                uStack_140 = (undefined **)pplVar18[5];
                uStack_148 = (undefined **)pplVar18[4];
                uStack_138 = CONCAT44(uStack_138._4_4_,*(float *)(pplVar18 + 6));
                FUN_10ab6eb18();
                if (*(char *)((long)pplVar32 + 0x17) < '\0') {
                  pplVar18 = (long **)&uStack_130;
                  func_0x000107c3192c(&uStack_130,*pplVar32,pplVar32[1]);
                }
                else {
                  ppuStack_128 = (undefined **)pplVar32[1];
                  uStack_130 = (undefined **)*pplVar32;
                  ppuStack_120 = (undefined **)pplVar32[2];
                  pplVar18 = pplVar32;
                }
                ppuStack_118 = (undefined **)pplVar32[3];
                ppuStack_108 = (undefined **)pplVar32[5];
                ppuStack_110 = (undefined **)pplVar32[4];
                fStack_100 = *(float *)(pplVar32 + 6);
                FUN_10ab6f020();
                if (*(char *)((long)pplVar18 + 0x17) < '\0') {
                  func_0x000107c3192c(appuStack_f8,*pplVar18,pplVar18[1]);
                }
                else {
                  appuStack_f8[1] = (undefined **)pplVar18[1];
                  appuStack_f8[0] = (undefined **)*pplVar18;
                  ppuStack_e8 = (undefined **)pplVar18[2];
                }
                ppuStack_e0 = (undefined **)pplVar18[3];
                ppuStack_d0 = (undefined **)pplVar18[5];
                ppuStack_d8 = (undefined **)pplVar18[4];
                fStack_c8 = *(float *)(pplVar18 + 6);
                FUN_10ab6f520(&plStack_230,&uStack_1a0,4);
                lVar39 = 0;
                do {
                  if ((&cStack_e1)[lVar39] < '\0') {
                    __ZdlPv(*(undefined8 *)((long)appuStack_f8 + lVar39));
                  }
                  lVar39 = lVar39 + -0x38;
                } while (lVar39 != -0xe0);
                FUN_10a54c2ec(pplVar46[0x10],&plStack_230);
                pplVar46[0x10][0x1d] = 1;
                uStack_198._0_4_ = 0.0;
                uStack_198._4_4_ = 0;
                uStack_1a0 = (long **)0x0;
                FUN_10a192264(pplVar46 + 0xe,&uStack_1a0);
                plVar17 = (long *)CONCAT44(uStack_198._4_4_,(float)uStack_198);
                if (plVar17 != (long *)0x0) {
                  plVar28 = plVar17 + 1;
                  do {
                    lVar39 = *plVar28;
                    cVar5 = '\x01';
                    bVar15 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                    if (bVar15) {
                      *plVar28 = lVar39 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (lVar39 == 0) {
                    (**(code **)(*plVar17 + 0x10))(plVar17);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
                  }
                }
                uVar2 = *(uint *)(lVar16 + 0xf0);
                iVar23 = 0;
                if (uVar2 != 0) {
                  iVar23 = 0;
                  if ((ulong)uVar2 != 0) {
                    iVar23 = (int)((ulong)(*(long *)(lVar16 + 0x18) - *(long *)(lVar16 + 0x10)) /
                                  (ulong)uVar2);
                  }
                }
                *(int *)(pplVar46 + 0x12) = *(int *)(pplVar46 + 0x12) + iVar23;
                FUN_10ab4a5b4();
                *(int *)((long)pplVar46 + 0x94) = *(int *)((long)pplVar46 + 0x94) + (int)lVar16;
                *(undefined1 *)(pplVar46 + 0x13) = 1;
                uStack_1a0 = &plStack_228;
                func_0x00010a190844(&uStack_1a0);
                pplVar32 = (long **)CONCAT44(uStack_198._4_4_,(float)uStack_198);
                goto LAB_10a660714;
              }
              goto LAB_10a6600bc;
            }
            if (((ulong)pppuVar26 & uVar24) == 0) {
              pppuVar25 = (undefined ***)((ulong)pppuVar25 & uVar24);
            }
            else if (pppuVar26 <= pppuVar25) {
              uVar34 = 0;
              if (pppuVar26 != (undefined ***)0x0) {
                uVar34 = (ulong)pppuVar25 / (ulong)pppuVar26;
              }
              pppuVar25 = (undefined ***)((long)pppuVar25 - uVar34 * (long)pppuVar26);
            }
            if (pppuVar25 == pppuVar40) goto LAB_10a65fd8c;
          }
        }
LAB_10a65fd98:
        pplVar46 = (long **)0xc0;
        __Znwm();
        uStack_190 = 0;
        uStack_18c = 0;
        *pplVar46 = (long *)0x0;
        pplVar46[1] = (long *)pppuVar48;
        uStack_1a0 = pplVar46;
        uStack_198 = &plStack_2f0;
        if ((long)ppuStack_340 < 0) {
          func_0x000107c3192c(pplVar46 + 2,ppuStack_350,ppuStack_348);
        }
        else {
          pplVar46[3] = (long *)ppuStack_348;
          pplVar46[2] = (long *)ppuStack_350;
          pplVar46[4] = (long *)ppuStack_340;
        }
        pplVar46[5] = plStack_338;
        *(undefined2 *)(pplVar46 + 6) = uStack_330;
        FUN_10a1ccb30(pplVar46 + 7,&uStack_328);
        if (cStack_2f1 < '\0') {
          func_0x000107c3192c(pplVar46 + 0xb,plStack_308,plStack_300);
        }
        else {
          pplVar46[0xc] = plStack_300;
          pplVar46[0xb] = plStack_308;
          pplVar46[0xd] = (long *)CONCAT17(cStack_2f1,uStack_2f8);
        }
        pplVar46[0x15] = (long *)0x0;
        pplVar46[0x14] = (long *)0x0;
        pplVar46[0x17] = (long *)0x0;
        pplVar46[0x16] = (long *)0x0;
        pplVar46[0x11] = (long *)0x0;
        pplVar46[0x10] = (long *)0x0;
        pplVar46[0x13] = (long *)0x0;
        pplVar46[0x12] = (long *)0x0;
        pplVar46[0xf] = (long *)0x0;
        pplVar46[0xe] = (long *)0x0;
        uStack_190 = CONCAT31(uStack_190._1_3_,1);
        if ((pppuVar26 == (undefined ***)0x0) ||
           (fStack_2d0 * (float)pppuVar26 < (float)(uStack_2d8 + 1))) {
          if (pppuVar26 < (undefined ***)0x3) {
            uVar24 = 1;
          }
          else {
            uVar24 = (ulong)(((ulong)pppuVar26 & (long)pppuVar26 - 1U) != 0);
          }
          pppuVar40 = (undefined ***)(uVar24 | (long)pppuVar26 << 1);
          pppuVar26 = (undefined ***)(long)((float)(uStack_2d8 + 1) / fStack_2d0);
          if (pppuVar40 <= pppuVar26) {
            pppuVar40 = pppuVar26;
          }
          if ((long)pppuVar40 - 1U == 0) {
            pppuVar40 = (undefined ***)0x2;
          }
          else if (((ulong)pppuVar40 & (long)pppuVar40 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
          }
          pppuVar26 = pppuStack_2e8;
          if (pppuStack_2e8 < pppuVar40) {
LAB_10a65fec8:
            if ((ulong)pppuVar40 >> 0x3d != 0) {
              func_0x000109ffded8();
              goto LAB_10a662420;
            }
            plVar17 = (long *)((long)pppuVar40 << 3);
            __Znwm();
            bVar15 = plStack_2f0 != (long *)0x0;
            plStack_2f0 = plVar17;
            if (bVar15) {
              __ZdlPv();
            }
            pppuVar26 = (undefined ***)0x0;
            do {
              plStack_2f0[(long)pppuVar26] = 0;
              pppuVar26 = (undefined ***)((long)pppuVar26 + 1);
            } while (pppuVar40 != pppuVar26);
            pppuStack_2e8 = pppuVar40;
            if (pplStack_2e0 != (long **)0x0) {
              pppuVar26 = (undefined ***)pplStack_2e0[1];
              uVar24 = (long)pppuVar40 - 1;
              if (((ulong)pppuVar40 & uVar24) == 0) {
                pppuVar26 = (undefined ***)((ulong)pppuVar26 & uVar24);
              }
              else if (pppuVar40 <= pppuVar26) {
                uVar34 = 0;
                if (pppuVar40 != (undefined ***)0x0) {
                  uVar34 = (ulong)pppuVar26 / (ulong)pppuVar40;
                }
                pppuVar26 = (undefined ***)((long)pppuVar26 - uVar34 * (long)pppuVar40);
              }
              plStack_2f0[(long)pppuVar26] = (long)&pplStack_2e0;
              pplVar32 = (long **)*pplStack_2e0;
              pplVar18 = pplStack_2e0;
              while (pplVar32 != (long **)0x0) {
                pppuVar25 = (undefined ***)pplVar32[1];
                if (((ulong)pppuVar40 & uVar24) == 0) {
                  pppuVar25 = (undefined ***)((ulong)pppuVar25 & uVar24);
                }
                else if (pppuVar40 <= pppuVar25) {
                  uVar34 = 0;
                  if (pppuVar40 != (undefined ***)0x0) {
                    uVar34 = (ulong)pppuVar25 / (ulong)pppuVar40;
                  }
                  pppuVar25 = (undefined ***)((long)pppuVar25 - uVar34 * (long)pppuVar40);
                }
                pplVar33 = pplVar32;
                if (pppuVar25 != pppuVar26) {
                  if (plStack_2f0[(long)pppuVar25] == 0) {
                    plStack_2f0[(long)pppuVar25] = (long)pplVar18;
                    pppuVar26 = pppuVar25;
                  }
                  else {
                    *pplVar18 = *pplVar32;
                    *pplVar32 = *(long **)plStack_2f0[(long)pppuVar25];
                    *(long ***)plStack_2f0[(long)pppuVar25] = pplVar32;
                    pplVar33 = pplVar18;
                  }
                }
                pplVar18 = pplVar33;
                pplVar32 = (long **)*pplVar33;
              }
            }
          }
          else if (pppuVar40 < pppuStack_2e8) {
            pppuVar25 = (undefined ***)(long)((float)uStack_2d8 / fStack_2d0);
            if ((pppuStack_2e8 < (undefined ***)0x3) ||
               (((ulong)pppuStack_2e8 & (long)pppuStack_2e8 - 1U) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if ((undefined ***)0x1 < pppuVar25) {
              pppuVar25 = (undefined ***)(1L << (-LZCOUNT((long)pppuVar25 + -1) & 0x3fU));
            }
            plVar17 = plStack_2f0;
            if (pppuVar40 <= pppuVar25) {
              pppuVar40 = pppuVar25;
            }
            if (pppuVar40 < pppuVar26) {
              if (pppuVar40 != (undefined ***)0x0) goto LAB_10a65fec8;
              plStack_2f0 = (long *)0x0;
              if (plVar17 != (long *)0x0) {
                __ZdlPv();
              }
              pppuStack_2e8 = (undefined ***)0x0;
            }
          }
          pppuVar26 = pppuStack_2e8;
          if (((ulong)pppuStack_2e8 & (long)pppuStack_2e8 - 1U) == 0) {
            pppuVar40 = (undefined ***)((long)pppuStack_2e8 - 1U & (ulong)pppuVar48);
          }
          else {
            pppuVar40 = pppuVar48;
            if (pppuStack_2e8 <= pppuVar48) {
              uVar24 = 0;
              if (pppuStack_2e8 != (undefined ***)0x0) {
                uVar24 = (ulong)pppuVar48 / (ulong)pppuStack_2e8;
              }
              pppuVar40 = (undefined ***)((long)pppuVar48 - uVar24 * (long)pppuStack_2e8);
            }
          }
        }
        puVar21 = (undefined8 *)plStack_2f0[(long)pppuVar40];
        if (puVar21 == (undefined8 *)0x0) {
          *pplVar46 = (long *)pplStack_2e0;
          plStack_2f0[(long)pppuVar40] = (long)&pplStack_2e0;
          pplStack_2e0 = pplVar46;
          if (*pplVar46 != (long *)0x0) {
            pppuVar40 = (undefined ***)(*pplVar46)[1];
            if (((ulong)pppuVar26 & (long)pppuVar26 - 1U) == 0) {
              pppuVar40 = (undefined ***)((ulong)pppuVar40 & (long)pppuVar26 - 1U);
            }
            else if (pppuVar26 <= pppuVar40) {
              uVar24 = 0;
              if (pppuVar26 != (undefined ***)0x0) {
                uVar24 = (ulong)pppuVar40 / (ulong)pppuVar26;
              }
              pppuVar40 = (undefined ***)((long)pppuVar40 - uVar24 * (long)pppuVar26);
            }
            plStack_2f0[(long)pppuVar40] = (long)pplVar46;
          }
        }
        else {
          *pplVar46 = (long *)*puVar21;
          *puVar21 = pplVar46;
        }
        uStack_2d8 = uStack_2d8 + 1;
LAB_10a6600b4:
        if (((ulong)pplVar46[0x13] & 1) == 0) {
          uStack_198._0_4_ = SUB84(plStack_358,0);
          uStack_198._4_4_ = (undefined4)((ulong)plStack_358 >> 0x20);
          uStack_1a0 = pplStack_360;
          if (plStack_358 != (long *)0x0) {
            plVar17 = plStack_358 + 1;
            do {
              cVar5 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar15) {
                *plVar17 = *plVar17 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          uStack_190 = 0;
          uStack_18c = 0;
          uStack_188 = 0;
          uStack_184 = 0;
          uVar2 = *(uint *)(lVar16 + 0xf0);
          uStack_180 = 0;
          if (uVar2 != 0) {
            uStack_180 = 0;
            if ((ulong)uVar2 != 0) {
              uStack_180 = (undefined4)
                           ((ulong)(*(long *)(lVar16 + 0x18) - *(long *)(lVar16 + 0x10)) /
                           (ulong)uVar2);
            }
          }
          FUN_10ab4a5b4();
          uStack_17c = (undefined4)lVar16;
          uStack_178 = (undefined **)((ulong)uStack_178 & 0xffffffffffffff00);
          fStack_158 = 0.0;
          ppuStack_170 = (undefined **)0x0;
          fStack_168 = 0.0;
          uStack_164 = 0;
          uStack_162 = 0;
          fStack_160 = 0.0;
          uStack_15c = 0;
          FUN_10a192264(pplVar46 + 0xe,&uStack_1a0);
          FUN_10a551e24(pplVar46 + 0x10,&uStack_190);
          pplVar46[0x12] = (long *)CONCAT44(uStack_17c,uStack_180);
          *(undefined1 *)(pplVar46 + 0x13) = (undefined1)uStack_178;
          func_0x00010a015c50(pplVar46 + 0x14,&ppuStack_170);
          pplVar46[0x16] = (long *)CONCAT26(uStack_15a,CONCAT24(uStack_15c,fStack_160));
          *(float *)(pplVar46 + 0x17) = fStack_158;
          plVar17 = (long *)CONCAT26(uStack_162,CONCAT24(uStack_164,fStack_168));
          if (plVar17 != (long *)0x0) {
            plVar28 = plVar17 + 1;
            do {
              lVar16 = *plVar28;
              cVar5 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar15) {
                *plVar28 = lVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
            }
          }
          plVar17 = (long *)CONCAT44(uStack_184,uStack_188);
          if (plVar17 != (long *)0x0) {
            plVar28 = plVar17 + 1;
            do {
              lVar16 = *plVar28;
              cVar5 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar15) {
                *plVar28 = lVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
            }
          }
          pplVar32 = (long **)CONCAT44(uStack_198._4_4_,(float)uStack_198);
          if (pplVar32 != (long **)0x0) {
            pplVar18 = pplVar32 + 1;
            do {
              plVar17 = *pplVar18;
              cVar5 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(pplVar18,0x10);
              if (bVar15) {
                *pplVar18 = (long *)((long)plVar17 + -1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (plVar17 == (long *)0x0) {
              (*(code *)(*pplVar32)[2])(pplVar32);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar32);
              pplVar32 = (long **)CONCAT44(uStack_198._4_4_,(float)uStack_198);
            }
          }
          if (pppuVar47 != (undefined ***)0x0) {
            FUN_10a651e28(&uStack_1a0,*(undefined8 *)(param_4 + 0x170));
            func_0x00010a015c50(pplVar46 + 0x14,&uStack_1a0);
            plVar17 = pplVar46[0x14];
            func_0x000107c2b054(&uStack_378,&UNK_10f66b0b7);
            if (*(char *)((long)plVar17 + 0x6f) < '\0') {
              __ZdlPv(plVar17[0xb]);
            }
            plVar17[0xc] = lStack_370;
            plVar17[0xb] = CONCAT71(uStack_377,uStack_378);
            plVar17[0xd] = CONCAT17(uStack_361,uStack_368);
            uStack_361 = 0;
            uStack_378 = 0;
            plVar37 = (long *)0x300;
            __Znwm();
            plVar37[1] = 0;
            plVar37[2] = 0;
            *plVar37 = (long)&PTR_FUN_110baa060;
            func_0x000107c2b054(&puStack_280,&UNK_10f646e22);
            plVar28 = plVar37 + 3;
            FUN_10a330b88(plVar28,0,&puStack_280,1);
            if ((long)ppuStack_270 < 0) {
              __ZdlPv(puStack_280);
            }
            plStack_290 = plVar28;
            plStack_288 = plVar37;
            FUN_10a190d60(&plStack_290,plVar37 + 9,plVar28);
            apuStack_268[0] = (undefined8 *)plStack_290[7];
            ppuStack_270 = (undefined **)plStack_290[6];
            if (plStack_290[7] != 0) {
              plVar28 = (long *)(plStack_290[7] + 0x10);
              do {
                cVar5 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                if (bVar15) {
                  *plVar28 = *plVar28 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            puStack_280 = (undefined *)0x10a3635a8;
            ppuStack_278 = &PTR_FUN_110bc68e8;
            func_0x000107c2b07c(&uStack_1e0,&UNK_10f66b096);
            func_0x000107c2b07c(auStack_1c0,&DAT_10f646e0e);
            FUN_10a0d9f14(&pppuStack_2a8,&uStack_1e0,2,&uStack_2a9);
            lVar16 = 0;
            do {
              if (acStack_1a9[lVar16] < '\0') {
                __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar16));
              }
              plVar28 = plStack_290;
              lVar16 = lVar16 + -0x20;
            } while (lVar16 != -0x40);
            FUN_10a0e3500(&pplStack_2c8,&pppuStack_2a8);
            FUN_10a0da1b8(plVar28 + 0x40,plVar28[0x41]);
            plVar28[0x40] = (long)pplStack_2c8;
            plVar28[0x41] = (long)plStack_2c0;
            plVar28[0x42] = lStack_2b8;
            if (lStack_2b8 == 0) {
              plVar28[0x40] = (long)(plVar28 + 0x41);
            }
            else {
              plStack_2c0[2] = (long)(plVar28 + 0x41);
              plStack_2c0 = (long *)0x0;
              lStack_2b8 = 0;
              pplStack_2c8 = &plStack_2c0;
            }
            FUN_10a0da1b8(&pplStack_2c8,plStack_2c0);
            plVar28 = plStack_290;
            func_0x000107c2b054(&uStack_1e0,&UNK_10f66b0a4);
            if (*(char *)((long)plVar28 + 0x1b7) < '\0') {
              __ZdlPv(plVar28[0x34]);
            }
            plVar28[0x35] = (long)plStack_1d8;
            plVar28[0x34] = CONCAT71(uStack_1df,uStack_1e0);
            plVar28[0x36] = CONCAT17(cStack_1c9,uStack_1d0);
            cStack_1c9 = '\0';
            uStack_1e0 = 0;
            func_0x00010a3326b8(plStack_290 + 0x43,1);
            func_0x00010a33256c(plStack_290,0);
            if (param_2[3] == 1) {
              bVar4 = *param_2;
              *(uint *)((long)plStack_290 + 0x21e) =
                   ((uint)bVar4 << 0x15 | (uint)bVar4 << 0xe) & 0x1010101 |
                   (bVar4 & 2) << 7 | bVar4 & 1;
              if ((param_2[3] & 1) == 0) goto LAB_10a662420;
              func_0x00010a332748((long)plStack_290 + 0x219,param_2[1]);
              if ((param_2[3] & 1) == 0) goto LAB_10a662420;
              func_0x00010a332700((long)plStack_290 + 0x21a,param_2[2]);
            }
            plStack_228 = plStack_288;
            plStack_230 = plStack_290;
            if (plStack_288 != (long *)0x0) {
              plVar28 = plStack_288 + 1;
              do {
                cVar5 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                if (bVar15) {
                  *plVar28 = *plVar28 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            puStack_220 = puStack_280;
            (*(code *)ppuStack_278[2])(apuStack_218,&ppuStack_278);
            puStack_280 = &UNK_1053a6a3c;
            (*(code *)*ppuStack_278)(&ppuStack_278);
            ppuStack_278 = &PTR_DAT_110ae9180;
            FUN_10a0da1b8(&pppuStack_2a8,plStack_2a0);
            FUN_10a044790(&puStack_280);
            (*(code *)*ppuStack_278)(&ppuStack_278);
            plVar28 = plStack_288;
            if (plStack_288 != (long *)0x0) {
              plVar37 = plStack_288 + 1;
              do {
                lVar16 = *plVar37;
                cVar5 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                if (bVar15) {
                  *plVar37 = lVar16 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar16 == 0) {
                (**(code **)(*plStack_288 + 0x10))(plStack_288);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar28);
              }
            }
            FUN_10ab46914(plVar17 + 0x45,&plStack_230);
            FUN_10aaea8f4(&puStack_280,pppuVar47);
            if ((undefined8 *)plVar17[0x45] == (undefined8 *)plVar17[0x46]) {
              uVar38 = 0;
            }
            else {
              uVar38 = *(undefined8 *)plVar17[0x45];
            }
            func_0x000107c2b074(&uStack_1e0,&PTR_DAT_110c06db8);
            FUN_10a3368d0(uVar38,&uStack_1e0,&puStack_280,&UNK_10e4ac8a8,0xd);
            if (cStack_1c9 < '\0') {
              __ZdlPv(CONCAT71(uStack_1df,uStack_1e0));
            }
            FUN_10a044790(&ppuStack_270);
            (*(code *)*apuStack_268[0])(apuStack_268);
            ppuVar44 = ppuStack_278;
            if (ppuStack_278 != (undefined **)0x0) {
              ppuVar20 = ppuStack_278 + 1;
              do {
                puVar31 = *ppuVar20;
                cVar5 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
                if (bVar15) {
                  *ppuVar20 = puVar31 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (puVar31 == (undefined *)0x0) {
                (**(code **)(*ppuStack_278 + 0x10))(ppuStack_278);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar44);
              }
            }
            FUN_10a044790(&puStack_220);
            (*(code *)*apuStack_218[0])(apuStack_218);
            plVar17 = plStack_228;
            if (plStack_228 != (long *)0x0) {
              plVar28 = plStack_228 + 1;
              do {
                lVar16 = *plVar28;
                cVar5 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                if (bVar15) {
                  *plVar28 = lVar16 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar16 == 0) {
                (**(code **)(*plStack_228 + 0x10))(plStack_228);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
              }
            }
            FUN_10a044790(&uStack_190);
            (**(code **)CONCAT44(uStack_184,uStack_188))(&uStack_188);
            pplVar32 = (long **)CONCAT44(uStack_198._4_4_,(float)uStack_198);
            if (pplVar32 != (long **)0x0) {
              pplVar46 = pplVar32 + 1;
              do {
                plVar17 = *pplVar46;
                cVar5 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(pplVar46,0x10);
                if (bVar15) {
                  *pplVar46 = (long *)((long)plVar17 + -1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (plVar17 == (long *)0x0) {
                (*(code *)(*pplVar32)[2])(pplVar32);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar32);
                pplVar32 = (long **)CONCAT44(uStack_198._4_4_,(float)uStack_198);
              }
            }
          }
        }
        else {
LAB_10a6600bc:
          uVar2 = *(uint *)(lVar16 + 0xf0);
          iVar23 = 0;
          if (uVar2 != 0) {
            iVar23 = 0;
            if ((ulong)uVar2 != 0) {
              iVar23 = (int)((ulong)(*(long *)(lVar16 + 0x18) - *(long *)(lVar16 + 0x10)) /
                            (ulong)uVar2);
            }
          }
          *(int *)(pplVar46 + 0x12) = *(int *)(pplVar46 + 0x12) + iVar23;
          FUN_10ab4a5b4();
          *(int *)((long)pplVar46 + 0x94) = *(int *)((long)pplVar46 + 0x94) + (int)lVar16;
          pplVar32 = uStack_198;
        }
LAB_10a660714:
        plVar17 = plStack_358;
        uStack_198 = pplVar32;
        if (plStack_358 != (long *)0x0) {
          plVar28 = plStack_358 + 1;
          do {
            lVar16 = *plVar28;
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar15) {
              *plVar28 = lVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plStack_358 + 0x10))(plStack_358);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
      }
      if (cStack_2f1 < '\0') {
        __ZdlPv(plStack_308);
      }
      if ((cStack_310 == '\x01') && (cStack_311 < '\0')) {
        __ZdlPv(uStack_328);
      }
      if ((long)ppuStack_340 < 0) {
        __ZdlPv(ppuStack_350);
      }
      uVar43 = uVar43 + 1;
      lVar16 = *(long *)(lVar45 + 0x18);
      lVar39 = *(long *)(lVar45 + 0x20);
      uVar24 = (lVar39 - lVar16 >> 4) * 0x6db6db6db6db6db7;
    } while (uVar43 <= uVar24 && uVar24 - uVar43 != 0);
    if (((bVar3 >> 1 & 1) != 0) && (pplVar46 = pplStack_2e0, pplStack_2e0 != (long **)0x0)) {
      do {
        if (*(char *)(pplVar46 + 0x13) == '\x01') {
          FUN_10ab4a154(pplVar46[0x10],*(undefined4 *)(pplVar46 + 0x12));
          FUN_10ab4cb54(pplVar46[0x10],*(undefined4 *)((long)pplVar46 + 0x94));
        }
        pplVar46 = (long **)*pplVar46;
      } while (pplVar46 != (long **)0x0);
      lVar16 = *(long *)(lVar45 + 0x18);
      lVar39 = *(long *)(lVar45 + 0x20);
    }
  }
  plStack_228 = (long *)0x0;
  plStack_230 = (long *)0x0;
  fVar51 = 0.0;
  puStack_220 = (undefined *)0x0;
  if (lVar39 != lVar16) {
    uVar43 = 0;
    fVar51 = 0.0;
    fStack_3f8 = 0.0;
    do {
      lVar16 = **(long **)(lVar16 + uVar43 * 0x70 + 0x28);
      FUN_10ab29680(fVar53);
      if (lVar16 != 0) {
        FUN_10a3ad2b8(&uStack_1e0);
        lVar16 = *(long *)(lVar45 + 0x18);
        uVar24 = (*(long *)(lVar45 + 0x20) - lVar16 >> 4) * 0x6db6db6db6db6db7;
        if (uVar24 < uVar43 || uVar24 - uVar43 == 0) goto LAB_10a662420;
        lVar39 = **(long **)(lVar16 + uVar43 * 0x70 + 0x28);
        if (lVar39 == 0) {
          bVar15 = false;
        }
        else {
          lVar29 = lVar39;
          ___dynamic_cast(lVar39,&PTR_DAT_110c48fb0,&PTR_DAT_110c46458,0);
          bVar15 = lVar29 != 0;
        }
        FUN_10a65f370(&ppuStack_350,lVar39,bVar15,bVar3 >> 1 & 1,lVar16 + uVar43 * 0x70 + 0x50);
        pppuVar40 = &ppuStack_350;
        FUN_10a67e860();
        pppuVar47 = pppuStack_2e8;
        if (pppuStack_2e8 == (undefined ***)0x0) {
LAB_10a660c38:
          plVar17 = (long *)0x0;
        }
        else {
          uVar24 = (long)pppuStack_2e8 - 1;
          if (((ulong)pppuStack_2e8 & uVar24) == 0) {
            pppuVar48 = (undefined ***)(uVar24 & (ulong)pppuVar40);
          }
          else {
            pppuVar48 = pppuVar40;
            if (pppuStack_2e8 <= pppuVar40) {
              uVar34 = 0;
              if (pppuStack_2e8 != (undefined ***)0x0) {
                uVar34 = (ulong)pppuVar40 / (ulong)pppuStack_2e8;
              }
              pppuVar48 = (undefined ***)((long)pppuVar40 - uVar34 * (long)pppuStack_2e8);
            }
          }
          if ((long *)plStack_2f0[(long)pppuVar48] == (long *)0x0) goto LAB_10a660c38;
          for (plVar17 = *(long **)plStack_2f0[(long)pppuVar48]; plVar17 != (long *)0x0;
              plVar17 = (long *)*plVar17) {
            pppuVar26 = (undefined ***)plVar17[1];
            if (pppuVar26 == pppuVar40) {
              uVar34 = (ulong)(plVar17 + 2);
              FUN_10a67e958(uVar34,&ppuStack_350);
              if ((uVar34 & 1) != 0) break;
            }
            else {
              if (((ulong)pppuVar47 & uVar24) == 0) {
                pppuVar26 = (undefined ***)((ulong)pppuVar26 & uVar24);
              }
              else if (pppuVar47 <= pppuVar26) {
                uVar34 = 0;
                if (pppuVar47 != (undefined ***)0x0) {
                  uVar34 = (ulong)pppuVar26 / (ulong)pppuVar47;
                }
                pppuVar26 = (undefined ***)((long)pppuVar26 - uVar34 * (long)pppuVar47);
              }
              if (pppuVar26 != pppuVar48) goto LAB_10a660c38;
            }
          }
        }
        uVar24 = (*(long *)(lVar45 + 0x20) - *(long *)(lVar45 + 0x18) >> 4) * 0x6db6db6db6db6db7;
        if (uVar24 < uVar43 || uVar24 - uVar43 == 0) goto LAB_10a662420;
        pfVar27 = (float *)(*(long *)(lVar45 + 0x18) + uVar43 * 0x70);
        fVar57 = *pfVar27;
        fVar59 = pfVar27[1];
        fVar49 = pfVar27[3] - fVar59;
        if (fVar49 <= fVar51) {
          fVar49 = fVar51;
        }
        fVar60 = pfVar27[0x18];
        fVar51 = fVar60;
        if (fVar60 <= fStack_3f8) {
          fVar51 = fStack_3f8;
        }
        fVar61 = fVar51;
        (**(code **)(*(long *)**(undefined8 **)(pfVar27 + 10) + 0x50))();
        fVar59 = fVar6 * fVar59;
        fVar60 = fVar6 * fVar60;
        fVar54 = fVar6 * fVar57 * 0.0;
        fVar56 = fVar59 * 0.0;
        fVar63 = fVar54 + fVar56;
        fVar58 = fVar50 * fVar60 * 0.0;
        fVar57 = fVar6 * fVar57 + fVar56 + fVar58 + 0.0;
        fVar54 = fVar54 + fVar59 + fVar58 + 0.0;
        fVar56 = fVar63 + fVar50 * fVar60 + 0.0;
        fVar61 = fVar60 * fVar61;
        fVar59 = fVar61 * 0.0;
        fVar65 = fVar60 * 0.0;
        if (((bVar3 >> 1 & 1) == 0) || ((*(byte *)((long)plVar17 + 0x98) & 1) == 0)) {
          ppuStack_170 = (undefined **)0x0;
          uStack_188 = 0;
          uStack_184 = 0;
          uStack_190 = 0;
          uStack_18c = 0;
          uStack_178 = (undefined **)0x0;
          uStack_180 = 0;
          uStack_17c = 0;
          uStack_198._0_4_ = 0.0;
          uStack_198._4_4_ = 0;
          uStack_1a0 = (long **)0x0;
          fStack_160 = 0.0;
          uStack_15c = 0;
          uStack_15a = 0;
          fStack_168 = 1.0;
          uStack_164 = 0;
          uStack_162 = 0;
          uStack_150 = (undefined **)0x0;
          fStack_158 = 0.0;
          fStack_154 = 1.0;
          uStack_140 = (undefined **)0x3f800000;
          uStack_148 = (undefined **)0x0;
          uStack_130 = (undefined **)0x3f80000000000000;
          uStack_138 = 0;
          ppuStack_128 = (undefined **)0x0;
          ppuStack_120 = (undefined **)0x0;
          func_0x00010a04a780(&ppuStack_128,(long)plVar17 + 0xa0);
          plVar28 = *(long **)(*(long *)((long)plVar17 + 0x70) + 0xe0);
          if (plVar28 == (long *)0x0) {
            lVar16 = 0;
          }
          else {
            (**(code **)(*plVar28 + 0x90))();
            lVar16 = *plVar28;
          }
          uStack_188 = (undefined4)lVar16;
          uStack_184 = (undefined4)((ulong)lVar16 >> 0x20);
          FUN_10a19ad28(&uStack_1a0,(long)plVar17 + 0x70);
          uStack_15c = SUB42(fVar59,0);
          uStack_15a = (undefined2)((uint)fVar59 >> 0x10);
          uStack_150 = (undefined **)CONCAT44(fVar59,fVar59);
          uStack_148 = (undefined **)CONCAT44(fVar65,fVar65);
          uStack_140 = (undefined **)CONCAT44(fVar65,fVar60);
          uStack_138 = CONCAT44(fVar54,fVar57);
          uStack_130 = (undefined **)CONCAT44(fVar63 + fVar58 + 1.0,fVar56);
          plVar17 = *(long **)((long)plVar17 + 0x70);
          uStack_190 = (undefined4)plVar17[0x1c];
          uStack_18c = (undefined4)((ulong)plVar17[0x1c] >> 0x20);
          fStack_168 = fVar61;
          uStack_164 = uStack_15c;
          uStack_162 = uStack_15a;
          fStack_160 = fVar59;
          fStack_158 = fVar59;
          fStack_154 = fVar61;
          FUN_10a347d04();
          if (plVar17 == (long *)0x0) {
            ppuStack_278 = (undefined **)0xff7fffff00000000;
            puStack_280 = (undefined *)0x0;
            ppuStack_270 = (undefined **)0xff7fffffff7fffff;
          }
          else {
            (**(code **)(*plVar17 + 0x38))(&puStack_280);
          }
          uStack_178 = ppuStack_278;
          uStack_180 = SUB84(puStack_280,0);
          uStack_17c = (undefined4)((ulong)puStack_280 >> 0x20);
          ppuStack_170 = ppuStack_270;
          FUN_10a6628dc(&plStack_230,&uStack_1a0);
          ppuVar44 = ppuStack_120;
          if (ppuStack_120 != (undefined **)0x0) {
            ppuVar20 = ppuStack_120 + 1;
            do {
              puVar31 = *ppuVar20;
              cVar5 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
              if (bVar15) {
                *ppuVar20 = puVar31 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (puVar31 == (undefined *)0x0) {
              (**(code **)(*ppuStack_120 + 0x10))(ppuStack_120);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar44);
            }
          }
          pplVar46 = (long **)CONCAT44(uStack_198._4_4_,(float)uStack_198);
          if (pplVar46 != (long **)0x0) {
            pplVar32 = pplVar46 + 1;
            do {
              plVar17 = *pplVar32;
              cVar5 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(pplVar32,0x10);
              if (bVar15) {
                *pplVar32 = (long *)((long)plVar17 + -1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (plVar17 == (long *)0x0) {
              (*(code *)(*pplVar46)[2])(pplVar46);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar46);
              pplVar46 = (long **)CONCAT44(uStack_198._4_4_,(float)uStack_198);
            }
          }
        }
        else {
          lVar16 = *(long *)((long)plVar17 + 0x80);
          lVar39 = *(long *)(lVar16 + 0x28);
          puVar19 = *(ulong **)(CONCAT71(uStack_1df,uStack_1e0) + 0xe0);
          uVar24 = 0;
          if (puVar19 != (ulong *)0x0) {
            (**(code **)(*puVar19 + 0x90))();
            uVar24 = *puVar19;
          }
          ___dynamic_cast(uVar24,&PTR_DAT_110c4a868,&PTR_DAT_110bf06a0,0);
          lVar29 = *(long *)(uVar24 + 0x18) - *(long *)(uVar24 + 0x10);
          if (lVar29 != 0) {
            _memmove((ulong)*(uint *)((long)plVar17 + 0xb0) + *(long *)(lVar16 + 0x10),
                     *(long *)(uVar24 + 0x10),lVar29);
          }
          lVar16 = *(long *)((long)plVar17 + 0x80);
          uVar2 = *(uint *)(lVar16 + 0x110);
          if (uVar2 == 0xffffffff) {
            lVar29 = 0;
          }
          else {
            uVar34 = (*(long *)(lVar16 + 0x100) - *(long *)(lVar16 + 0xf8) >> 3) *
                     0x6db6db6db6db6db7;
            if (uVar34 < uVar2 || uVar34 - uVar2 == 0) {
              FUN_10ab725fc();
              goto LAB_10a662420;
            }
            lVar29 = *(long *)(lVar16 + 0xf8) + (ulong)uVar2 * 0x38;
          }
          uVar2 = *(int *)(lVar29 + 0x24) - 1;
          if (uVar2 < 7) {
            iVar23 = *(int *)(&UNK_10e4d1d38 + (ulong)uVar2 * 4);
          }
          else {
            iVar23 = 0;
          }
          if (*(int *)(lVar29 + 0x28) * iVar23 == 0xc) {
            lVar29 = *(long *)(lVar16 + 0x10) + (ulong)*(uint *)(lVar29 + 0x30);
            uVar34 = (ulong)*(uint *)(lVar16 + 0xf0);
          }
          else {
            lVar29 = 0;
            uVar34 = 0;
          }
          uVar35 = (ulong)*(ushort *)((long)plVar17 + 0xb4);
          pfVar27 = (float *)(lVar29 + uVar34 * uVar35 + 8);
          uVar36 = uVar35;
          while( true ) {
            uVar2 = *(uint *)(uVar24 + 0xf0);
            if (uVar2 == 0) {
              iVar23 = 0;
            }
            else {
              iVar23 = 0;
              if ((ulong)uVar2 != 0) {
                iVar23 = (int)((ulong)(*(long *)(uVar24 + 0x18) - *(long *)(uVar24 + 0x10)) /
                              (ulong)uVar2);
              }
            }
            if ((uint)(iVar23 + (int)uVar36) <= uVar35) break;
            fVar58 = fVar59 * pfVar27[-2];
            fVar63 = fVar59 * pfVar27[-1];
            fVar55 = fVar65 * *pfVar27;
            pfVar27[-2] = fVar61 * pfVar27[-2] + fVar63 + fVar57 + fVar55;
            pfVar27[-1] = fVar58 + fVar61 * pfVar27[-1] + fVar54 + fVar55;
            *pfVar27 = fVar58 + fVar63 + fVar56 + fVar60 * *pfVar27;
            uVar35 = uVar35 + 1;
            uVar36 = (ulong)*(ushort *)((long)plVar17 + 0xb4);
            pfVar27 = (float *)((long)pfVar27 + uVar34);
          }
          psVar41 = *(short **)(uVar24 + 0x28);
          uVar34 = uVar24;
          FUN_10ab4a5b4();
          if ((int)uVar34 != 0) {
            sVar22 = *(short *)((long)plVar17 + 0xb4);
            lVar16 = (uVar34 & 0xffffffff) << 1;
            psVar30 = (short *)(lVar39 + (ulong)*(uint *)((long)plVar17 + 0xb8) * 2);
            do {
              *psVar30 = *psVar41 + sVar22;
              lVar16 = lVar16 + -2;
              psVar30 = psVar30 + 1;
              psVar41 = psVar41 + 1;
            } while (lVar16 != 0);
          }
          uVar35 = *(long *)(uVar24 + 0x18) - *(long *)(uVar24 + 0x10);
          *(int *)((long)plVar17 + 0xb0) = *(int *)((long)plVar17 + 0xb0) + (int)uVar35;
          uVar2 = *(uint *)(uVar24 + 0xf0);
          if (uVar2 == 0) {
            sVar22 = 0;
          }
          else {
            sVar22 = 0;
            if ((ulong)uVar2 != 0) {
              sVar22 = (short)(uVar35 / uVar2);
            }
          }
          *(short *)((long)plVar17 + 0xb4) = *(short *)((long)plVar17 + 0xb4) + sVar22;
          *(int *)((long)plVar17 + 0xb8) = *(int *)((long)plVar17 + 0xb8) + (int)uVar34;
          pplVar46 = uStack_198;
        }
        uStack_198 = pplVar46;
        if (cStack_2f1 < '\0') {
          __ZdlPv(plStack_308);
        }
        if ((cStack_310 == '\x01') && (cStack_311 < '\0')) {
          __ZdlPv(uStack_328);
        }
        if ((long)ppuStack_340 < 0) {
          __ZdlPv(ppuStack_350);
        }
        plVar17 = plStack_1d8;
        fStack_3f8 = fVar51;
        fVar51 = fVar49;
        if (plStack_1d8 != (long *)0x0) {
          plVar28 = plStack_1d8 + 1;
          do {
            lVar16 = *plVar28;
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar15) {
              *plVar28 = lVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
      }
      uVar43 = uVar43 + 1;
      lVar16 = *(long *)(lVar45 + 0x18);
      uVar24 = (*(long *)(lVar45 + 0x20) - lVar16 >> 4) * 0x6db6db6db6db6db7;
    } while (uVar43 <= uVar24 && uVar24 - uVar43 != 0);
  }
  puStack_280 = (undefined *)(param_1 + 0x390);
  ppuStack_278 = (undefined **)((ulong)ppuStack_278 & 0xffffffffffffff00);
  FUN_10a19aac8();
  *(long **)(param_1 + 0x398) = plStack_228;
  *(long **)(param_1 + 0x390) = plStack_230;
  *(undefined **)(param_1 + 0x3a0) = puStack_220;
  puStack_220 = (undefined *)0x0;
  plStack_228 = (long *)0x0;
  plStack_230 = (long *)0x0;
  pplVar46 = pplStack_2e0;
  if ((bVar3 >> 1 & 1) != 0) {
    for (; pplVar46 != (long **)0x0; pplVar46 = (long **)*pplVar46) {
      ppuVar44 = (undefined **)pplVar46[0x10];
      if (ppuVar44 != (undefined **)0x0) {
        plVar17 = pplVar46[0x11];
        ppuVar20 = (undefined **)0x108;
        __Znwm();
        ppuVar20[1] = (undefined *)0x0;
        ppuVar20[2] = (undefined *)0x0;
        *ppuVar20 = (undefined *)&PTR_FUN_110ba2088;
        uStack_198._0_4_ = SUB84(plVar17,0);
        uStack_198._4_4_ = (undefined4)((ulong)plVar17 >> 0x20);
        if (plVar17 != (long *)0x0) {
          plVar17 = plVar17 + 1;
          do {
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar15) {
              *plVar17 = *plVar17 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        ppuVar7 = ppuVar20 + 3;
        uStack_1a0 = (long **)ppuVar44;
        FUN_10a347c5c(ppuVar7,0,&uStack_1a0);
        plVar17 = (long *)CONCAT44(uStack_198._4_4_,(float)uStack_198);
        if (plVar17 != (long *)0x0) {
          plVar28 = plVar17 + 1;
          do {
            lVar45 = *plVar28;
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar15) {
              *plVar28 = lVar45 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar45 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
        ppuStack_350 = ppuVar7;
        ppuStack_348 = ppuVar20;
        FUN_10a0cfb64(&ppuStack_350,ppuVar20 + 8,ppuVar7);
        FUN_10a0cf858(&uStack_1e0,&ppuStack_350);
        ppuVar44 = ppuStack_348;
        if (ppuStack_348 != (undefined **)0x0) {
          ppuVar20 = ppuStack_348 + 1;
          do {
            puVar31 = *ppuVar20;
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
            if (bVar15) {
              *ppuVar20 = puVar31 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (puVar31 == (undefined *)0x0) {
            (**(code **)(*ppuStack_348 + 0x10))(ppuStack_348);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar44);
          }
        }
        ppuStack_170 = (undefined **)0x0;
        uStack_188 = 0;
        uStack_184 = 0;
        uStack_190 = 0;
        uStack_18c = 0;
        uStack_178 = (undefined **)0x0;
        uStack_180 = 0;
        uStack_17c = 0;
        uStack_198._0_4_ = 0.0;
        uStack_198._4_4_ = 0;
        uStack_1a0 = (long **)0x0;
        fStack_160 = 0.0;
        uStack_15c = 0;
        uStack_15a = 0;
        fStack_168 = 1.0;
        uStack_164 = 0;
        uStack_162 = 0;
        uStack_150 = (undefined **)0x0;
        fStack_158 = 0.0;
        fStack_154 = 1.0;
        uStack_140 = (undefined **)0x3f800000;
        uStack_148 = (undefined **)0x0;
        uStack_130 = (undefined **)0x3f80000000000000;
        uStack_138 = 0;
        ppuStack_128 = (undefined **)0x0;
        ppuStack_120 = (undefined **)0x0;
        FUN_10a19ad28(&uStack_1a0,&uStack_1e0);
        func_0x00010a04a780(&ppuStack_128,pplVar46 + 0x14);
        plVar17 = (long *)CONCAT71(uStack_1df,uStack_1e0);
        plVar28 = (long *)plVar17[0x1c];
        if (plVar28 == (long *)0x0) {
          lVar16 = 0;
          lVar45 = 0;
        }
        else {
          (**(code **)(*plVar28 + 0x90))();
          lVar45 = *plVar28;
          plVar17 = (long *)CONCAT71(uStack_1df,uStack_1e0);
          lVar16 = plVar17[0x1c];
        }
        uStack_188 = (undefined4)lVar45;
        uStack_184 = (undefined4)((ulong)lVar45 >> 0x20);
        uStack_190 = (undefined4)lVar16;
        uStack_18c = (undefined4)((ulong)lVar16 >> 0x20);
        FUN_10a347d04();
        if (plVar17 == (long *)0x0) {
          ppuStack_348 = (undefined **)0xff7fffff00000000;
          ppuStack_350 = (undefined **)0x0;
          ppuStack_340 = (undefined **)0xff7fffffff7fffff;
        }
        else {
          (**(code **)(*plVar17 + 0x38))(&ppuStack_350);
        }
        uStack_178 = ppuStack_348;
        uStack_180 = SUB84(ppuStack_350,0);
        uStack_17c = (undefined4)((ulong)ppuStack_350 >> 0x20);
        ppuStack_170 = ppuStack_340;
        FUN_10a6628dc(puStack_280,&uStack_1a0);
        ppuVar44 = ppuStack_120;
        if (ppuStack_120 != (undefined **)0x0) {
          ppuVar20 = ppuStack_120 + 1;
          do {
            puVar31 = *ppuVar20;
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
            if (bVar15) {
              *ppuVar20 = puVar31 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (puVar31 == (undefined *)0x0) {
            (**(code **)(*ppuStack_120 + 0x10))(ppuStack_120);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar44);
          }
        }
        plVar17 = (long *)CONCAT44(uStack_198._4_4_,(float)uStack_198);
        if (plVar17 != (long *)0x0) {
          plVar28 = plVar17 + 1;
          do {
            lVar45 = *plVar28;
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar15) {
              *plVar28 = lVar45 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar45 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
        plVar17 = plStack_1d8;
        uStack_198 = (long **)CONCAT44(uStack_198._4_4_,(float)uStack_198);
        if (plStack_1d8 != (long *)0x0) {
          plVar28 = plStack_1d8 + 1;
          do {
            lVar45 = *plVar28;
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar15) {
              *plVar28 = lVar45 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          uStack_198 = (long **)CONCAT44(uStack_198._4_4_,(float)uStack_198);
          if (lVar45 == 0) {
            (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
      }
    }
  }
  pfVar27 = *(float **)(*(long *)(param_1 + 0x388) + 0x98);
  pfVar1 = *(float **)(*(long *)(param_1 + 0x388) + 0xa0);
  if (pfVar27 != pfVar1) {
    fVar50 = fVar6 * 0.0;
    do {
      fVar59 = pfVar27[10];
      fVar49 = fVar51;
      if (0.0 < fStack_3f8) {
        fVar49 = fVar51 * (fVar59 / fStack_3f8);
      }
      pppuVar40 = &ppuStack_350;
      FUN_10a56327c(&uStack_1e0);
      FUN_10ab6e728();
      if (*(char *)((long)pppuVar40 + 0x17) < '\0') {
        pppuVar47 = (undefined ***)&uStack_1a0;
        func_0x000107c3192c(pppuVar47,*pppuVar40,pppuVar40[1]);
      }
      else {
        uStack_198 = (long **)pppuVar40[1];
        uStack_1a0 = (long **)*pppuVar40;
        uStack_190 = SUB84(pppuVar40[2],0);
        uStack_18c = (undefined4)((ulong)pppuVar40[2] >> 0x20);
        pppuVar47 = pppuVar40;
      }
      uStack_188 = SUB84(pppuVar40[3],0);
      uStack_184 = (undefined4)((ulong)pppuVar40[3] >> 0x20);
      uStack_178 = pppuVar40[5];
      uStack_180 = SUB84(pppuVar40[4],0);
      uStack_17c = (undefined4)((ulong)pppuVar40[4] >> 0x20);
      ppuStack_170 = (undefined **)CONCAT44(ppuStack_170._4_4_,*(float *)(pppuVar40 + 6));
      FUN_10ab6e9d8();
      if (*(char *)((long)pppuVar47 + 0x17) < '\0') {
        pppuVar40 = (undefined ***)&fStack_168;
        func_0x000107c3192c(&fStack_168,*pppuVar47,pppuVar47[1]);
      }
      else {
        ppuVar20 = pppuVar47[1];
        ppuVar44 = *pppuVar47;
        fStack_154 = (float)((ulong)pppuVar47[2] >> 0x20);
        fStack_158 = SUB84(pppuVar47[2],0);
        uStack_15a = (undefined2)((ulong)ppuVar20 >> 0x30);
        uStack_15c = (undefined2)((ulong)ppuVar20 >> 0x20);
        fStack_160 = SUB84(ppuVar20,0);
        uStack_162 = (undefined2)((ulong)ppuVar44 >> 0x30);
        uStack_164 = (undefined2)((ulong)ppuVar44 >> 0x20);
        fStack_168 = SUB84(ppuVar44,0);
        pppuVar40 = pppuVar47;
      }
      uStack_150 = pppuVar47[3];
      uStack_140 = pppuVar47[5];
      uStack_148 = pppuVar47[4];
      uStack_138 = CONCAT44(uStack_138._4_4_,*(float *)(pppuVar47 + 6));
      FUN_10ab6eb18();
      if (*(char *)((long)pppuVar40 + 0x17) < '\0') {
        pppuVar47 = (undefined ***)&uStack_130;
        func_0x000107c3192c(&uStack_130,*pppuVar40,pppuVar40[1]);
      }
      else {
        ppuStack_120 = pppuVar40[2];
        ppuStack_128 = pppuVar40[1];
        uStack_130 = *pppuVar40;
        pppuVar47 = pppuVar40;
      }
      ppuStack_118 = pppuVar40[3];
      ppuStack_108 = pppuVar40[5];
      ppuStack_110 = pppuVar40[4];
      fStack_100 = *(float *)(pppuVar40 + 6);
      FUN_10ab6f020();
      if (*(char *)((long)pppuVar47 + 0x17) < '\0') {
        func_0x000107c3192c(appuStack_f8,*pppuVar47,pppuVar47[1]);
      }
      else {
        ppuStack_e8 = pppuVar47[2];
        appuStack_f8[1] = pppuVar47[1];
        appuStack_f8[0] = *pppuVar47;
      }
      ppuStack_e0 = pppuVar47[3];
      ppuStack_d0 = pppuVar47[5];
      ppuStack_d8 = pppuVar47[4];
      fStack_c8 = *(float *)(pppuVar47 + 6);
      FUN_10ab6f520(&ppuStack_350,&uStack_1a0,4);
      lVar45 = CONCAT71(uStack_1df,uStack_1e0);
      *(undefined4 *)(lVar45 + 0xf0) = ppuStack_350._0_4_;
      if ((undefined ***)(lVar45 + 0xf0) != &ppuStack_350) {
        FUN_10a1903c4(lVar45 + 0xf8,ppuStack_348,ppuStack_340,
                      ((long)ppuStack_340 - (long)ppuStack_348 >> 3) * 0x6db6db6db6db6db7);
      }
      fVar59 = fVar53 * fVar59 * 1.01;
      *(undefined8 *)(lVar45 + 0x118) = uStack_328;
      *(ulong *)(lVar45 + 0x110) = CONCAT62(uStack_32e,uStack_330);
      *(ulong *)(lVar45 + 0x128) = CONCAT17(cStack_311,uStack_318);
      *(undefined8 *)(lVar45 + 0x120) = uStack_320;
      *(ulong *)(lVar45 + 0x130) = CONCAT71(uStack_30f,cStack_310);
      pppuStack_2a8 = &ppuStack_348;
      func_0x00010a190844(&pppuStack_2a8);
      lVar45 = 0;
      do {
        if ((&cStack_e1)[lVar45] < '\0') {
          __ZdlPv(*(undefined8 *)((long)appuStack_f8 + lVar45));
        }
        lVar45 = lVar45 + -0x38;
      } while (lVar45 != -0xe0);
      *(undefined8 *)(CONCAT71(uStack_1df,uStack_1e0) + 0xe8) = 1;
      fVar57 = *pfVar27;
      fVar60 = pfVar27[1];
      fVar54 = pfVar27[3];
      fVar56 = pfVar27[4];
      ppuVar44 = (undefined **)0x480;
      __Znwm();
      fVar60 = fVar60 - fVar57;
      fVar58 = fVar56 * 0.5;
      fVar61 = fVar59 * 0.5;
      ppuStack_340 = ppuVar44 + 0x90;
      uStack_1a0 = (long **)((ulong)(uint)fVar58 << 0x20);
      uStack_18c = 0x3f800000;
      uVar10 = uStack_18c;
      uStack_188 = 0x3f800000;
      uVar11 = uStack_188;
      uStack_198._4_4_ = 0;
      uVar8 = uStack_198._4_4_;
      uStack_190 = 0;
      uVar9 = uStack_190;
      uStack_180 = 0;
      uStack_184 = 0;
      uStack_17c = 0x3f800000;
      fVar57 = fVar56;
      if (0.0 <= fVar54) {
        fVar57 = fVar56 + (fVar54 - fVar58);
      }
      fVar55 = (fVar60 * 0.5) / fVar49;
      fVar52 = 0.5 - fVar55;
      fVar62 = (fVar57 / fVar49) * 0.5 + 0.5;
      uStack_178 = (undefined **)CONCAT44(fVar62,fVar52);
      ppuStack_350 = ppuVar44;
      ppuStack_348 = ppuVar44;
      uStack_198._0_4_ = fVar61;
      FUN_10a65f9b0(&ppuStack_350,&uStack_1a0);
      uStack_1a0 = (long **)CONCAT44(fVar58,fVar60);
      uStack_180 = 0;
      uStack_184 = 0;
      uStack_17c = 0x3f800000;
      fVar63 = (fVar60 * 0.0 * 0.5) / fVar49;
      fVar64 = 0.5 - fVar63;
      uStack_178 = (undefined **)CONCAT44(fVar62,fVar64);
      uStack_198._0_4_ = fVar61;
      uStack_198._4_4_ = uVar8;
      uStack_190 = uVar9;
      uStack_18c = uVar10;
      uStack_188 = uVar11;
      FUN_10a65f9b0(&ppuStack_350,&uStack_1a0);
      fVar65 = fVar56 * -0.5;
      uStack_1a0 = (long **)CONCAT44(fVar65,fVar60);
      uStack_18c = 0x3f800000;
      uVar10 = uStack_18c;
      uStack_198._4_4_ = 0;
      uVar8 = uStack_198._4_4_;
      uStack_180 = 0;
      uStack_184 = 0;
      uStack_17c = 0x3f800000;
      fVar57 = fVar56 * 0.0;
      if (0.0 <= fVar54) {
        fVar57 = (fVar54 - fVar58) + fVar56 * 0.0;
      }
      fVar57 = (fVar57 / fVar49) * 0.5 + 0.5;
      uStack_178 = (undefined **)CONCAT44(fVar57,fVar64);
      uStack_198._0_4_ = fVar61;
      uStack_190 = uVar9;
      uStack_188 = uVar11;
      FUN_10a65f9b0(&ppuStack_350,&uStack_1a0);
      uStack_1a0 = (long **)((ulong)(uint)fVar65 << 0x20);
      uStack_180 = 0;
      uStack_184 = 0;
      uStack_17c = 0x3f800000;
      uStack_178 = (undefined **)CONCAT44(fVar57,fVar52);
      uStack_198._0_4_ = fVar61;
      uStack_198._4_4_ = uVar8;
      uStack_190 = uVar9;
      uStack_18c = uVar10;
      uStack_188 = uVar11;
      FUN_10a65f9b0(&ppuStack_350,&uStack_1a0);
      fVar49 = fVar59 * -0.5;
      uStack_1a0 = (long **)CONCAT44(fVar58,fVar60);
      uStack_18c = 0xbf800000;
      uVar10 = uStack_18c;
      uStack_188 = 0xbf800000;
      uVar11 = uStack_188;
      uStack_198._4_4_ = 0;
      uVar8 = uStack_198._4_4_;
      uStack_190 = 0;
      uVar9 = uStack_190;
      uStack_180 = 0;
      uStack_184 = 0;
      uStack_17c = 0x3f800000;
      fVar63 = fVar63 + 0.5;
      uStack_178 = (undefined **)CONCAT44(fVar62,fVar63);
      uStack_198._0_4_ = fVar49;
      FUN_10a65f9b0(&ppuStack_350,&uStack_1a0);
      uStack_1a0 = (long **)((ulong)(uint)fVar58 << 0x20);
      uStack_180 = 0;
      uStack_184 = 0;
      uStack_17c = 0x3f800000;
      fVar55 = fVar55 + 0.5;
      uStack_178 = (undefined **)CONCAT44(fVar62,fVar55);
      uStack_198._0_4_ = fVar49;
      uStack_198._4_4_ = uVar8;
      uStack_190 = uVar9;
      uStack_18c = uVar10;
      uStack_188 = uVar11;
      FUN_10a65f9b0(&ppuStack_350,&uStack_1a0);
      uStack_1a0 = (long **)((ulong)(uint)fVar65 << 0x20);
      uStack_18c = 0xbf800000;
      uVar10 = uStack_18c;
      uStack_198._4_4_ = 0;
      uVar8 = uStack_198._4_4_;
      uStack_180 = 0;
      uStack_184 = 0;
      uStack_17c = 0x3f800000;
      uStack_178 = (undefined **)CONCAT44(fVar57,fVar55);
      uStack_198._0_4_ = fVar49;
      uStack_190 = uVar9;
      uStack_188 = uVar11;
      FUN_10a65f9b0(&ppuStack_350,&uStack_1a0);
      uStack_1a0 = (long **)CONCAT44(fVar65,fVar60);
      uStack_180 = 0;
      uStack_184 = 0;
      uStack_17c = 0x3f800000;
      uStack_178 = (undefined **)CONCAT44(fVar57,fVar63);
      uStack_198._0_4_ = fVar49;
      uStack_198._4_4_ = uVar8;
      uStack_190 = uVar9;
      uStack_18c = uVar10;
      uStack_188 = uVar11;
      FUN_10a65f9b0(&ppuStack_350,&uStack_1a0);
      uStack_1a0 = (long **)CONCAT44(fVar58,fVar60);
      uStack_18c = 0;
      uVar10 = uStack_18c;
      uStack_188 = 0;
      uVar11 = uStack_188;
      uStack_198._4_4_ = 0x3f800000;
      uVar8 = uStack_198._4_4_;
      uStack_190 = 0;
      uVar9 = uStack_190;
      uStack_184 = 0xbf800000;
      uVar12 = uStack_184;
      uStack_180 = 0;
      uVar13 = uStack_180;
      uStack_17c = 0x3f800000;
      fVar54 = ((fVar56 * 0.0) / fVar59) * 0.25;
      uStack_178 = (undefined **)CONCAT44(0x3f000000,fVar54);
      uStack_198._0_4_ = fVar61;
      FUN_10a65f9b0(&ppuStack_350,&uStack_1a0);
      uStack_1a0 = (long **)CONCAT44(fVar58,fVar60);
      uStack_17c = 0x3f800000;
      uStack_178 = (undefined **)CONCAT44(0x3e800000,fVar54);
      uStack_198._0_4_ = fVar49;
      uStack_198._4_4_ = uVar8;
      uStack_190 = uVar9;
      uStack_18c = uVar10;
      uStack_188 = uVar11;
      uStack_184 = uVar12;
      uStack_180 = uVar13;
      FUN_10a65f9b0(&ppuStack_350,&uStack_1a0);
      uStack_1a0 = (long **)CONCAT44(fVar65,fVar60);
      uStack_18c = 0;
      uVar10 = uStack_18c;
      uStack_198._4_4_ = 0x3f800000;
      uVar8 = uStack_198._4_4_;
      uStack_184 = 0xbf800000;
      uVar12 = uStack_184;
      uStack_17c = 0x3f800000;
      fVar57 = (fVar56 / fVar59) * 0.25;
      uStack_178 = (undefined **)CONCAT44(0x3e800000,fVar57);
      uStack_198._0_4_ = fVar49;
      uStack_190 = uVar9;
      uStack_188 = uVar11;
      uStack_180 = uVar13;
      FUN_10a65f9b0(&ppuStack_350,&uStack_1a0);
      uStack_1a0 = (long **)CONCAT44(fVar65,fVar60);
      uStack_17c = 0x3f800000;
      uStack_178 = (undefined **)CONCAT44(0x3f000000,fVar57);
      uStack_198._0_4_ = fVar61;
      uStack_198._4_4_ = uVar8;
      uStack_190 = uVar9;
      uStack_18c = uVar10;
      uStack_188 = uVar11;
      uStack_184 = uVar12;
      uStack_180 = uVar13;
      FUN_10a65f9b0(&ppuStack_350,&uStack_1a0);
      uStack_1a0 = (long **)((ulong)(uint)fVar58 << 0x20);
      uStack_18c = 0;
      uStack_188 = 0;
      uStack_198._4_4_ = 0xbf800000;
      uStack_190 = 0;
      uStack_184 = 0x3f800000;
      uStack_180 = 0;
      uStack_17c = 0x3f800000;
      uStack_178 = (undefined **)CONCAT44(0x3e800000,fVar57);
      uStack_198._0_4_ = fVar49;
      FUN_10a65f9b0(&ppuStack_350,&uStack_1a0);
      uStack_1a0 = (long **)((ulong)(uint)fVar58 << 0x20);
      uStack_18c = 0;
      uStack_188 = 0;
      uStack_198._4_4_ = 0xbf800000;
      uStack_190 = 0;
      uStack_184 = 0x3f800000;
      uStack_180 = 0;
      uStack_17c = 0x3f800000;
      uStack_178 = (undefined **)CONCAT44(0x3f000000,fVar57);
      uStack_198._0_4_ = fVar61;
      FUN_10a65f9b0(&ppuStack_350,&uStack_1a0);
      uStack_1a0 = (long **)((ulong)(uint)fVar65 << 0x20);
      uStack_18c = 0;
      uStack_188 = 0;
      uStack_198._4_4_ = 0xbf800000;
      uStack_190 = 0;
      uStack_184 = 0x3f800000;
      uStack_180 = 0;
      uStack_17c = 0x3f800000;
      uStack_178 = (undefined **)CONCAT44(0x3f000000,fVar54);
      uStack_198._0_4_ = fVar61;
      FUN_10a65f9b0(&ppuStack_350,&uStack_1a0);
      uStack_1a0 = (long **)((ulong)(uint)fVar65 << 0x20);
      uStack_18c = 0;
      uStack_188 = 0;
      uStack_198._4_4_ = 0xbf800000;
      uStack_190 = 0;
      uStack_184 = 0x3f800000;
      uStack_180 = 0;
      uStack_17c = 0x3f800000;
      uStack_178 = (undefined **)CONCAT44(0x3e800000,fVar54);
      uStack_198._0_4_ = fVar49;
      FUN_10a65f9b0(&ppuStack_350,&uStack_1a0);
      uStack_1a0 = (long **)((ulong)(uint)fVar58 << 0x20);
      uStack_18c = 0;
      uStack_188 = 0x3f800000;
      uStack_198._4_4_ = 0;
      uStack_190 = 0x3f800000;
      uStack_180 = 0;
      uStack_184 = 0;
      uStack_17c = 0x3f800000;
      fVar57 = ((fVar60 * 0.0) / fVar59) * 0.25;
      uStack_178 = (undefined **)CONCAT44(0x3f000000,fVar57);
      uStack_198._0_4_ = fVar61;
      FUN_10a65f9b0(&ppuStack_350,&uStack_1a0);
      uStack_1a0 = (long **)((ulong)(uint)fVar58 << 0x20);
      uStack_18c = 0;
      uStack_188 = 0x3f800000;
      uStack_198._4_4_ = 0;
      uStack_190 = 0x3f800000;
      uStack_180 = 0;
      uStack_184 = 0;
      uStack_17c = 0x3f800000;
      uStack_178 = (undefined **)CONCAT44(0x3e800000,fVar57);
      uStack_198._0_4_ = fVar49;
      FUN_10a65f9b0(&ppuStack_350,&uStack_1a0);
      uStack_1a0 = (long **)CONCAT44(fVar58,fVar60);
      uStack_18c = 0;
      uStack_188 = 0x3f800000;
      uStack_198._4_4_ = 0;
      uStack_190 = 0x3f800000;
      uStack_180 = 0;
      uStack_184 = 0;
      uStack_17c = 0x3f800000;
      fVar59 = (fVar60 / fVar59) * 0.25;
      uStack_178 = (undefined **)CONCAT44(0x3e800000,fVar59);
      uStack_198._0_4_ = fVar49;
      FUN_10a65f9b0(&ppuStack_350,&uStack_1a0);
      uStack_1a0 = (long **)CONCAT44(fVar58,fVar60);
      uStack_18c = 0;
      uStack_188 = 0x3f800000;
      uStack_198._4_4_ = 0;
      uStack_190 = 0x3f800000;
      uStack_180 = 0;
      uStack_184 = 0;
      uStack_17c = 0x3f800000;
      uStack_178 = (undefined **)CONCAT44(0x3f000000,fVar59);
      uStack_198._0_4_ = fVar61;
      FUN_10a65f9b0(&ppuStack_350,&uStack_1a0);
      uStack_1a0 = (long **)((ulong)(uint)fVar65 << 0x20);
      uStack_18c = 0;
      uStack_188 = 0xbf800000;
      uStack_198._4_4_ = 0;
      uStack_190 = 0xbf800000;
      uStack_180 = 0;
      uStack_184 = 0;
      uStack_17c = 0x3f800000;
      uStack_178 = (undefined **)CONCAT44(0x3e800000,fVar59);
      uStack_198._0_4_ = fVar49;
      FUN_10a65f9b0(&ppuStack_350,&uStack_1a0);
      uStack_1a0 = (long **)((ulong)(uint)fVar65 << 0x20);
      uStack_18c = 0;
      uStack_188 = 0xbf800000;
      uStack_198._4_4_ = 0;
      uStack_190 = 0xbf800000;
      uStack_180 = 0;
      uStack_184 = 0;
      uStack_17c = 0x3f800000;
      uStack_178 = (undefined **)CONCAT44(0x3f000000,fVar59);
      uStack_198._0_4_ = fVar61;
      FUN_10a65f9b0(&ppuStack_350,&uStack_1a0);
      uStack_1a0 = (long **)CONCAT44(fVar65,fVar60);
      uStack_18c = 0;
      uStack_188 = 0xbf800000;
      uStack_198._4_4_ = 0;
      uStack_190 = 0xbf800000;
      uStack_180 = 0;
      uStack_184 = 0;
      uStack_17c = 0x3f800000;
      uStack_178 = (undefined **)CONCAT44(0x3f000000,fVar57);
      uStack_198._0_4_ = fVar61;
      FUN_10a65f9b0(&ppuStack_350,&uStack_1a0);
      uStack_1a0 = (long **)CONCAT44(fVar65,fVar60);
      uStack_18c = 0;
      uStack_188 = 0xbf800000;
      uStack_198._4_4_ = 0;
      uStack_190 = 0xbf800000;
      uStack_180 = 0;
      uStack_184 = 0;
      uStack_17c = 0x3f800000;
      uStack_178 = (undefined **)CONCAT44(0x3e800000,fVar57);
      uStack_198._0_4_ = fVar49;
      FUN_10a65f9b0(&ppuStack_350,&uStack_1a0);
      ppuVar20 = ppuStack_348;
      ppuVar44 = ppuStack_350;
      FUN_10ab4a154(CONCAT71(uStack_1df,uStack_1e0),
                    ((long)ppuStack_348 - (long)ppuStack_350 >> 4) * -0x5555555555555555);
      lVar45 = CONCAT71(uStack_1df,uStack_1e0);
      uVar2 = *(uint *)(lVar45 + 0x110);
      if (uVar2 == 0xffffffff) {
        lVar16 = 0;
      }
      else {
        uVar43 = (*(long *)(lVar45 + 0x100) - *(long *)(lVar45 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
        if (uVar43 < uVar2 || uVar43 - uVar2 == 0) {
          FUN_10ab725fc();
LAB_10a662420:
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x10a662424);
          (*pcVar14)();
        }
        lVar16 = *(long *)(lVar45 + 0xf8) + (ulong)uVar2 * 0x38;
      }
      uVar2 = *(int *)(lVar16 + 0x24) - 1;
      if (uVar2 < 7) {
        iVar23 = *(int *)(&UNK_10e4d1d38 + (ulong)uVar2 * 4);
      }
      else {
        iVar23 = 0;
      }
      if (*(int *)(lVar16 + 0x28) * iVar23 == 0xc) {
        plVar17 = (long *)(*(long *)(lVar45 + 0x10) + (ulong)*(uint *)(lVar16 + 0x30));
        uVar43 = (ulong)*(uint *)(lVar45 + 0xf0);
      }
      else {
        plVar17 = (long *)0x0;
        uVar43 = 0;
      }
      uVar2 = *(uint *)(lVar45 + 0x114);
      if (uVar2 == 0xffffffff) {
        lVar16 = 0;
      }
      else {
        uVar24 = (*(long *)(lVar45 + 0x100) - *(long *)(lVar45 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
        if (uVar24 < uVar2 || uVar24 - uVar2 == 0) {
          FUN_10ab725fc();
          goto LAB_10a662420;
        }
        lVar16 = *(long *)(lVar45 + 0xf8) + (ulong)uVar2 * 0x38;
      }
      uVar2 = *(int *)(lVar16 + 0x24) - 1;
      if (uVar2 < 7) {
        iVar23 = *(int *)(&UNK_10e4d1d38 + (ulong)uVar2 * 4);
      }
      else {
        iVar23 = 0;
      }
      if (*(int *)(lVar16 + 0x28) * iVar23 == 0xc) {
        puVar21 = (undefined8 *)(*(long *)(lVar45 + 0x10) + (ulong)*(uint *)(lVar16 + 0x30));
        uVar24 = (ulong)*(uint *)(lVar45 + 0xf0);
      }
      else {
        puVar21 = (undefined8 *)0x0;
        uVar24 = 0;
      }
      uVar2 = *(uint *)(lVar45 + 0x118);
      if (uVar2 == 0xffffffff) {
        lVar16 = 0;
      }
      else {
        uVar34 = (*(long *)(lVar45 + 0x100) - *(long *)(lVar45 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
        if (uVar34 < uVar2 || uVar34 - uVar2 == 0) {
          FUN_10ab725fc();
          goto LAB_10a662420;
        }
        lVar16 = *(long *)(lVar45 + 0xf8) + (ulong)uVar2 * 0x38;
      }
      uVar2 = *(int *)(lVar16 + 0x24) - 1;
      if (uVar2 < 7) {
        iVar23 = *(int *)(&UNK_10e4d1d38 + (ulong)uVar2 * 4);
      }
      else {
        iVar23 = 0;
      }
      if (*(int *)(lVar16 + 0x28) * iVar23 == 0x10) {
        plVar28 = (long *)(*(long *)(lVar45 + 0x10) + (ulong)*(uint *)(lVar16 + 0x30));
        uVar34 = (ulong)*(uint *)(lVar45 + 0xf0);
      }
      else {
        plVar28 = (long *)0x0;
        uVar34 = 0;
      }
      uVar2 = *(uint *)(lVar45 + 0x120);
      if (uVar2 == 0xffffffff) {
        lVar16 = 0;
      }
      else {
        uVar35 = (*(long *)(lVar45 + 0x100) - *(long *)(lVar45 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
        if (uVar35 < uVar2 || uVar35 - uVar2 == 0) {
          FUN_10ab725fc();
          goto LAB_10a662420;
        }
        lVar16 = *(long *)(lVar45 + 0xf8) + (ulong)uVar2 * 0x38;
      }
      uVar2 = *(int *)(lVar16 + 0x24) - 1;
      if (uVar2 < 7) {
        iVar23 = *(int *)(&UNK_10e4d1d38 + (ulong)uVar2 * 4);
      }
      else {
        iVar23 = 0;
      }
      ppuVar7 = ppuVar44;
      if (*(int *)(lVar16 + 0x28) * iVar23 == 8) {
        plVar37 = (long *)(*(long *)(lVar45 + 0x10) + (ulong)*(uint *)(lVar16 + 0x30));
        uVar35 = (ulong)*(uint *)(lVar45 + 0xf0);
      }
      else {
        plVar37 = (long *)0x0;
        uVar35 = 0;
      }
      for (; ppuVar7 != ppuVar20; ppuVar7 = ppuVar7 + 6) {
        puVar31 = *ppuVar7;
        *(undefined4 *)(plVar17 + 1) = *(undefined4 *)(ppuVar7 + 1);
        *plVar17 = (long)puVar31;
        uVar38 = *(undefined8 *)((long)ppuVar7 + 0xc);
        *(undefined4 *)(puVar21 + 1) = *(undefined4 *)((long)ppuVar7 + 0x14);
        *puVar21 = uVar38;
        puVar31 = ppuVar7[3];
        plVar28[1] = (long)ppuVar7[4];
        *plVar28 = (long)puVar31;
        *plVar37 = (long)ppuVar7[5];
        plVar37 = (long *)((long)plVar37 + uVar35);
        plVar28 = (long *)((long)plVar28 + uVar34);
        puVar21 = (undefined8 *)((long)puVar21 + uVar24);
        plVar17 = (long *)((long)plVar17 + uVar43);
      }
      puVar21 = (undefined8 *)0x48;
      __Znwm();
      puVar21[8] = 0x16001700140015;
      puVar21[5] = 0xe000f000c000d;
      puVar21[4] = 0xe000c000a000b;
      puVar21[7] = 0x16001400120013;
      puVar21[6] = 0x10001100120010;
      puVar21[1] = 0x6000400020003;
      *puVar21 = &UNK_100020000;
      puVar21[3] = 0x80009000a0008;
      puVar21[2] = 0x6000700040005;
      lVar39 = CONCAT71(uStack_1df,uStack_1e0);
      lVar16 = *(long *)(lVar39 + 0x28);
      lVar45 = *(long *)(lVar39 + 0x30);
      uVar43 = lVar45 - lVar16;
      if (uVar43 < 0x48) {
        func_0x000107c27d58((long *)(lVar39 + 0x28),0x48 - uVar43);
        lVar16 = *(long *)(CONCAT71(uStack_1df,uStack_1e0) + 0x28);
        lVar45 = *(long *)(CONCAT71(uStack_1df,uStack_1e0) + 0x30);
      }
      else if (uVar43 != 0x48) {
        lVar45 = lVar16 + 0x48;
        *(long *)(lVar39 + 0x30) = lVar45;
      }
      _memcpy(lVar16,puVar21,lVar45 - lVar16);
      FUN_10ab4e0a4(CONCAT71(uStack_1df,uStack_1e0));
      __ZdlPv(puVar21);
      if (ppuVar44 != (undefined **)0x0) {
        __ZdlPv(ppuVar44);
      }
      if (CONCAT71(uStack_1df,uStack_1e0) != 0) {
        ppuStack_170 = (undefined **)0x0;
        uStack_188 = 0;
        uStack_184 = 0;
        uStack_190 = 0;
        uStack_18c = 0;
        uStack_178 = (undefined **)0x0;
        uStack_180 = 0;
        uStack_17c = 0;
        uStack_198._0_4_ = 0.0;
        uStack_198._4_4_ = 0;
        uStack_1a0 = (long **)0x0;
        ppuStack_128 = (undefined **)0x0;
        ppuStack_120 = (undefined **)0x0;
        if ((param_3[0x8c] != 1) && (fVar49 = 0.0, param_3[0x8c] == 0)) {
          fVar49 = fVar61;
        }
        fVar59 = (pfVar27[2] + pfVar27[3]) * fVar6;
        fVar57 = fVar59 * 0.0;
        fVar60 = *pfVar27 * fVar6 * 0.0;
        fVar61 = fVar57 + fVar60;
        fVar54 = fVar6 * fVar49 * 0.0;
        uStack_15c = SUB42(fVar50,0);
        uStack_15a = (undefined2)((uint)fVar50 >> 0x10);
        uStack_140 = (undefined **)CONCAT44(fVar50,fVar6);
        uVar38 = NEON_rev64(CONCAT44(*pfVar27 * fVar6,fVar59),4);
        uStack_138 = CONCAT44(fVar60 + (float)((ulong)uVar38 >> 0x20) + fVar54 + 0.0,
                              fVar57 + (float)uVar38 + fVar54 + 0.0);
        uStack_130 = (undefined **)CONCAT44(fVar61 + fVar54 + 1.0,fVar61 + fVar6 * fVar49 + 0.0);
        ppuStack_350 = (undefined **)0x0;
        fStack_168 = fVar6;
        uStack_164 = uStack_15c;
        uStack_162 = uStack_15a;
        fStack_160 = fVar50;
        fStack_158 = fVar50;
        fStack_154 = fVar6;
        uStack_150 = (undefined **)CONCAT44(fVar50,fVar50);
        uStack_148 = (undefined **)CONCAT44(fVar50,fVar50);
        FUN_10a5632fc(&pppuStack_2a8,&pplStack_2c8,&ppuStack_350,&uStack_1e0);
        ppuStack_350 = *(undefined ***)(param_4 + 0x170);
        FUN_10a551eec(&pplStack_2c8,&ppuStack_350,&pppuStack_2a8);
        FUN_10a19ad28(&uStack_1a0,&pplStack_2c8);
        plVar17 = pplStack_2c8[0x1c];
        if (plVar17 == (long *)0x0) {
          plVar17 = (long *)0x0;
          lVar45 = 0;
        }
        else {
          (**(code **)(*plVar17 + 0x90))();
          lVar45 = *plVar17;
          plVar17 = pplStack_2c8[0x1c];
        }
        uStack_188 = (undefined4)lVar45;
        uStack_184 = (undefined4)((ulong)lVar45 >> 0x20);
        uStack_190 = SUB84(plVar17,0);
        uStack_18c = (undefined4)((ulong)plVar17 >> 0x20);
        pplVar46 = pplStack_2c8;
        FUN_10a347d04();
        if (pplVar46 == (long **)0x0) {
          ppuStack_348 = (undefined **)0xff7fffff00000000;
          ppuStack_350 = (undefined **)0x0;
          ppuStack_340 = (undefined **)0xff7fffffff7fffff;
        }
        else {
          (*(code *)(*pplVar46)[7])(&ppuStack_350);
        }
        ppuVar44 = ppuStack_120;
        uStack_178 = ppuStack_348;
        uStack_180 = SUB84(ppuStack_350,0);
        uStack_17c = (undefined4)((ulong)ppuStack_350 >> 0x20);
        ppuStack_170 = ppuStack_340;
        ppuStack_120 = (undefined **)0x0;
        ppuStack_128 = (undefined **)0x0;
        if (ppuVar44 != (undefined **)0x0) {
          plVar17 = (long *)(ppuVar44 + 1);
          do {
            lVar45 = *plVar17;
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar15) {
              *plVar17 = lVar45 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar45 == 0) {
            (**(code **)((long)*ppuVar44 + 0x10))(ppuVar44);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar44);
          }
        }
        FUN_10a6628dc(puStack_280,&uStack_1a0);
        plVar17 = plStack_2c0;
        if (plStack_2c0 != (long *)0x0) {
          plVar28 = plStack_2c0 + 1;
          do {
            lVar45 = *plVar28;
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar15) {
              *plVar28 = lVar45 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar45 == 0) {
            (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
        plVar17 = plStack_2a0;
        if (plStack_2a0 != (long *)0x0) {
          plVar28 = plStack_2a0 + 1;
          do {
            lVar45 = *plVar28;
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar15) {
              *plVar28 = lVar45 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar45 == 0) {
            (**(code **)(*plStack_2a0 + 0x10))(plStack_2a0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
        ppuVar44 = ppuStack_120;
        if (ppuStack_120 != (undefined **)0x0) {
          ppuVar20 = ppuStack_120 + 1;
          do {
            puVar31 = *ppuVar20;
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
            if (bVar15) {
              *ppuVar20 = puVar31 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (puVar31 == (undefined *)0x0) {
            (**(code **)(*ppuStack_120 + 0x10))(ppuStack_120);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar44);
          }
        }
        plVar17 = (long *)CONCAT44(uStack_198._4_4_,(float)uStack_198);
        if (plVar17 != (long *)0x0) {
          plVar28 = plVar17 + 1;
          do {
            lVar45 = *plVar28;
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar15) {
              *plVar28 = lVar45 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar45 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
      }
      plVar17 = plStack_1d8;
      if (plStack_1d8 != (long *)0x0) {
        plVar28 = plStack_1d8 + 1;
        do {
          lVar45 = *plVar28;
          cVar5 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar15) {
            *plVar28 = lVar45 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar45 == 0) {
          (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      pfVar27 = pfVar27 + 0xe;
    } while (pfVar27 != pfVar1);
  }
  FUN_10a67eac4(&puStack_280);
  uStack_1a0 = &plStack_230;
  func_0x00010a19a750(&uStack_1a0);
  pplVar46 = &plStack_2f0;
  FUN_10a67e78c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return pplVar46;
  }
  ___stack_chk_fail();
  lVar45 = -0xe0;
  pcVar42 = &cStack_e1;
  do {
    if (*pcVar42 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar42 + -0x17));
    }
    lVar45 = lVar45 + 0x38;
    pcVar42 = pcVar42 + -0x38;
  } while (lVar45 != 0);
  FUN_10a0e3194(&pplStack_360);
  FUN_10a662880(&ppuStack_350);
  FUN_10a67e78c(&plStack_2f0);
  __Unwind_Resume();
  if (*(char *)((long)pplVar46 + 0x5f) < '\0') {
    __ZdlPv(pplVar46[9]);
  }
  if ((*(char *)(pplVar46 + 8) == '\x01') && (*(char *)((long)pplVar46 + 0x3f) < '\0')) {
    __ZdlPv(pplVar46[5]);
  }
  if (*(char *)((long)pplVar46 + 0x17) < '\0') {
    __ZdlPv(*pplVar46);
  }
  return pplVar46;
LAB_10a65fd8c:
  pplVar46 = (long **)*pplVar46;
  if (pplVar46 == (long **)0x0) goto LAB_10a65fd98;
  goto LAB_10a65fd44;
}



/* Entry: 10a662880; end: 10a6628db;  */

undefined8 * FUN_10a662880(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if ((*(char *)(param_1 + 8) == '\x01') && (*(char *)((long)param_1 + 0x3f) < '\0')) {
    __ZdlPv(param_1[5]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a6628dc; end: 10a662b57;  */

long * FUN_10a6628dc(undefined8 param_1,float param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  char cVar10;
  int7 iVar11;
  code *pcVar12;
  long *plVar13;
  long *plVar14;
  undefined8 ****ppppuVar15;
  undefined8 ****ppppuVar16;
  code ***pppcVar17;
  undefined8 *puVar18;
  undefined8 **ppuVar19;
  long *plVar20;
  bool bVar21;
  byte bVar22;
  ushort uVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  undefined8 uVar27;
  ulong uVar28;
  float *pfVar29;
  int iVar30;
  uint uVar31;
  long lVar32;
  undefined8 *puVar33;
  float *pfVar34;
  undefined *puVar35;
  long lVar36;
  long lVar37;
  ulong uVar38;
  float *pfVar39;
  undefined4 *puVar40;
  ulong uVar41;
  long lVar42;
  ulong uVar43;
  long *plVar44;
  int *piVar45;
  long *plVar46;
  undefined8 *puVar47;
  undefined8 *puVar48;
  undefined **ppuVar49;
  undefined **ppuVar50;
  long lVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  float fVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  float fVar61;
  undefined8 uStack_4b0;
  long *plStack_4a8;
  undefined8 ***pppuStack_4a0;
  long *plStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  byte abStack_480 [8];
  undefined8 ***pppuStack_478;
  ulong uStack_470;
  byte bStack_461;
  undefined8 ***pppuStack_460;
  undefined8 uStack_458;
  long lStack_450;
  long lStack_448;
  undefined2 uStack_440;
  undefined2 uStack_43e;
  float fStack_43c;
  undefined1 uStack_438;
  undefined1 uStack_437;
  undefined2 uStack_436;
  uint uStack_434;
  byte bStack_430;
  byte bStack_42f;
  undefined8 ***pppuStack_428;
  ulong uStack_420;
  ulong uStack_418;
  uint uStack_410;
  int iStack_40c;
  uint uStack_408;
  char cStack_404;
  char cStack_403;
  undefined2 uStack_402;
  float fStack_400;
  float fStack_3fc;
  float fStack_3f8;
  char cStack_3f4;
  undefined **ppuStack_3f0;
  undefined8 uStack_3e8;
  long *plStack_3e0;
  undefined **ppuStack_3d8;
  undefined1 uStack_3d0;
  undefined8 uStack_3cc;
  long *plStack_3c4;
  undefined **ppuStack_3b8;
  undefined8 uStack_3b0;
  long *plStack_3a8;
  undefined **ppuStack_3a0;
  undefined1 uStack_398;
  long lStack_394;
  long *plStack_38c;
  byte bStack_37c;
  undefined2 uStack_37b;
  undefined1 uStack_379;
  undefined **ppuStack_378;
  undefined8 uStack_370;
  long *plStack_368;
  undefined **ppuStack_360;
  undefined1 uStack_358;
  long lStack_354;
  long *plStack_34c;
  char cStack_340;
  long lStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_320;
  undefined8 ***pppuStack_318;
  undefined8 *puStack_310;
  long *plStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined4 uStack_2f0;
  undefined1 uStack_2e1;
  undefined ***pppuStack_2e0;
  byte *pbStack_2d8;
  long *plStack_2d0;
  undefined ****ppppuStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 *puStack_2a0;
  long lStack_298;
  ulong uStack_290;
  undefined8 uStack_288;
  long lStack_280;
  undefined8 uStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  undefined4 uStack_258;
  undefined1 auStack_240 [40];
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 uStack_1d0;
  undefined7 uStack_1cf;
  undefined8 uStack_1c8;
  undefined7 uStack_1c0;
  undefined1 uStack_1b9;
  undefined1 auStack_1b8 [40];
  code *pcStack_190;
  undefined **ppuStack_188;
  long lStack_180;
  undefined1 uStack_178;
  code **ppcStack_150;
  undefined **ppuStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  puVar18 = (undefined8 *)param_3[1];
  if (puVar18 < (undefined8 *)param_3[2]) {
    lVar32 = param_4[1];
    uVar27 = *param_4;
    puVar18[1] = param_4[1];
    *puVar18 = uVar27;
    if (lVar32 != 0) {
      plVar14 = (long *)(lVar32 + 8);
      do {
        cVar9 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar21) {
          *plVar14 = *plVar14 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    uVar55 = param_4[3];
    uVar27 = param_4[2];
    uVar56 = param_4[4];
    uVar59 = param_4[7];
    uVar57 = param_4[6];
    puVar18[5] = param_4[5];
    puVar18[4] = uVar56;
    puVar18[7] = uVar59;
    puVar18[6] = uVar57;
    puVar18[3] = uVar55;
    puVar18[2] = uVar27;
    uVar55 = param_4[9];
    uVar27 = param_4[8];
    uVar57 = param_4[0xb];
    uVar56 = param_4[10];
    uVar60 = param_4[0xd];
    uVar59 = param_4[0xc];
    puVar18[0xe] = param_4[0xe];
    puVar18[0xb] = uVar57;
    puVar18[10] = uVar56;
    puVar18[0xd] = uVar60;
    puVar18[0xc] = uVar59;
    puVar18[9] = uVar55;
    puVar18[8] = uVar27;
    lVar32 = param_4[0x10];
    uVar27 = param_4[0xf];
    puVar18[0x10] = param_4[0x10];
    puVar18[0xf] = uVar27;
    if (lVar32 != 0) {
      plVar14 = (long *)(lVar32 + 8);
      do {
        cVar9 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar21) {
          *plVar14 = *plVar14 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    puVar18 = puVar18 + 0x11;
    plVar14 = param_3;
LAB_10a662b38:
    param_3[1] = (long)puVar18;
    return plVar14;
  }
  lVar32 = (long)puVar18 - *param_3;
  uVar25 = (lVar32 >> 3) * -0xf0f0f0f0f0f0f0f + 1;
  if (uVar25 < 0x1e1e1e1e1e1e1e2) {
    lVar37 = param_3[2] - *param_3 >> 3;
    uVar41 = lVar37 * -0x1e1e1e1e1e1e1e1e;
    if (uVar41 < uVar25 || uVar41 - uVar25 == 0) {
      uVar41 = uVar25;
    }
    if (0xf0f0f0f0f0f0ef < (ulong)(lVar37 * -0xf0f0f0f0f0f0f0f)) {
      uVar41 = 0x1e1e1e1e1e1e1e1;
    }
    if (uVar41 == 0) {
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = param_3;
      FUN_10a19adb8();
    }
    puVar47 = (undefined8 *)((long)plVar13 + lVar32);
    lVar32 = param_4[1];
    uVar27 = *param_4;
    puVar47[1] = param_4[1];
    *puVar47 = uVar27;
    if (lVar32 != 0) {
      plVar14 = (long *)(lVar32 + 8);
      do {
        cVar9 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar21) {
          *plVar14 = *plVar14 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    uVar55 = param_4[3];
    uVar27 = param_4[2];
    uVar56 = param_4[4];
    uVar59 = param_4[7];
    uVar57 = param_4[6];
    puVar47[5] = param_4[5];
    puVar47[4] = uVar56;
    puVar47[7] = uVar59;
    puVar47[6] = uVar57;
    puVar47[3] = uVar55;
    puVar47[2] = uVar27;
    uVar55 = param_4[9];
    uVar27 = param_4[8];
    uVar57 = param_4[0xb];
    uVar56 = param_4[10];
    uVar60 = param_4[0xd];
    uVar59 = param_4[0xc];
    puVar47[0xe] = param_4[0xe];
    puVar47[0xb] = uVar57;
    puVar47[10] = uVar56;
    puVar47[0xd] = uVar60;
    puVar47[0xc] = uVar59;
    puVar47[9] = uVar55;
    puVar47[8] = uVar27;
    lVar32 = param_4[0x10];
    uVar27 = param_4[0xf];
    puVar47[0x10] = param_4[0x10];
    puVar47[0xf] = uVar27;
    if (lVar32 != 0) {
      plVar14 = (long *)(lVar32 + 8);
      do {
        cVar9 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar21) {
          *plVar14 = *plVar14 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    puVar18 = puVar47 + 0x11;
    puVar48 = (undefined8 *)*param_3;
    puVar5 = (undefined8 *)param_3[1];
    puVar47 = (undefined8 *)((long)puVar47 + ((long)puVar48 - (long)puVar5));
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    puStack_48 = puVar47;
    puVar33 = puVar48;
    plStack_70 = param_3;
    puStack_50 = puVar47;
    if (puVar5 == puVar48) {
      uStack_58 = 1;
    }
    else {
      do {
        uVar27 = *puVar33;
        puStack_48[1] = puVar33[1];
        *puStack_48 = uVar27;
        *puVar33 = 0;
        puVar33[1] = 0;
        uVar57 = puVar33[0xb];
        uVar56 = puVar33[10];
        uVar55 = puVar33[0xd];
        uVar27 = puVar33[0xc];
        uVar60 = puVar33[9];
        uVar59 = puVar33[8];
        puStack_48[0xe] = puVar33[0xe];
        puStack_48[0xb] = uVar57;
        puStack_48[10] = uVar56;
        puStack_48[0xd] = uVar55;
        puStack_48[0xc] = uVar27;
        puStack_48[9] = uVar60;
        puStack_48[8] = uVar59;
        uVar56 = puVar33[4];
        uVar55 = puVar33[7];
        uVar27 = puVar33[6];
        uVar59 = puVar33[3];
        uVar57 = puVar33[2];
        puStack_48[5] = puVar33[5];
        puStack_48[4] = uVar56;
        puStack_48[7] = uVar55;
        puStack_48[6] = uVar27;
        puStack_48[3] = uVar59;
        puStack_48[2] = uVar57;
        uVar27 = puVar33[0xf];
        puStack_48[0x10] = puVar33[0x10];
        puStack_48[0xf] = uVar27;
        puVar33[0xf] = 0;
        puVar33[0x10] = 0;
        puVar33 = puVar33 + 0x11;
        puStack_48 = puStack_48 + 0x11;
      } while (puVar33 != puVar5);
      uStack_58 = 1;
      do {
        FUN_10a0617bc(puVar48 + 0xf);
        FUN_10a0e3194(puVar48);
        puVar48 = puVar48 + 0x11;
      } while (puVar48 != puVar5);
    }
    FUN_10a19ac20(&plStack_70);
    plVar14 = (long *)*param_3;
    *param_3 = (long)puVar47;
    param_3[1] = (long)puVar18;
    param_3[2] = (long)(plVar13 + uVar41 * 0x11);
    if (plVar14 != (long *)0x0) {
      __ZdlPv();
    }
    goto LAB_10a662b38;
  }
  plVar14 = param_3;
  FUN_10a19ada4();
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_338 = *(long *)(plVar14[0x2e] + 0xa90);
  lVar26 = *(long *)(plVar14[0x2e] + 0xa20);
  lVar51 = plVar14[199];
  ppuStack_378 = (undefined **)((ulong)ppuStack_378 & 0xffffffffffffff00);
  cStack_340 = '\0';
  lVar37 = *(long *)(plVar14[0x2d] + 0x248);
  if ((lVar37 == 0) || ((*(ushort *)(lVar37 + 0x180) & 0x17) != 0)) {
    bVar21 = false;
  }
  else {
    FUN_10a394a64();
    uStack_358 = 0;
    ppuStack_378 = &PTR_FUN_110c6a8d8;
    uStack_370 = 0;
    plStack_368 = (long *)0x0;
    ppuStack_360 = &PTR_FUN_110c6a940;
    lVar32 = *(long *)(lVar37 + 0x28c);
    param_3 = *(long **)(lVar37 + 0x294);
    bVar21 = true;
    cStack_340 = '\x01';
    lStack_354 = lVar32;
    plStack_34c = param_3;
  }
  bStack_37c = 0;
  uStack_379 = 0;
  if (((((long *)plVar14[0x54] != (long *)plVar14[0x55]) &&
       (lVar37 = *(long *)plVar14[0x54], lVar37 != 0)) &&
      (*(long **)(lVar37 + 0x228) != *(long **)(lVar37 + 0x230))) &&
     (lVar37 = **(long **)(lVar37 + 0x228), lVar37 != 0)) {
    uStack_379 = 1;
    uVar31 = *(uint *)(lVar37 + 0x21e);
    bStack_37c = (byte)(uVar31 >> 7) & 0xfe | (byte)uVar31 |
                 (byte)(uVar31 >> 0xe) & 0xfc | (byte)(uVar31 >> 0x15) & 0xf8;
    uStack_37b = *(undefined2 *)(lVar37 + 0x219);
  }
  abStack_480[0] = 0;
  func_0x000107c2b054(&pppuStack_478,&UNK_10f66a659);
  pppuStack_460 = (undefined8 ****)0x0;
  uStack_458 = (long *)((ulong)uStack_458._4_4_ << 0x20);
  uStack_434 = uStack_434 & 0xffffff00;
  bStack_430 = 0;
  bStack_42f = 0;
  uStack_408 = 0;
  iStack_40c = 0;
  lStack_450 = 0;
  uStack_438 = 0;
  uStack_420 = 0;
  uStack_418 = 0;
  pppuStack_428 = (undefined8 ****)0x0;
  uStack_410 = uStack_410 & 0xffffff00;
  cStack_404 = '\x01';
  cStack_403 = '\x01';
  fStack_400 = 0.0;
  fStack_3fc = 1.0;
  fStack_3f8 = 0.4;
  cStack_3f4 = '\x02';
  uStack_3d0 = 0;
  ppuStack_3f0 = &PTR_FUN_110c6a8d8;
  uStack_3e8 = 0;
  plStack_3e0 = (long *)0x0;
  ppuStack_3d8 = &PTR_FUN_110c6a940;
  uStack_3cc = 0;
  plStack_3c4 = (long *)0x0;
  uStack_398 = 0;
  ppuStack_3b8 = &PTR_FUN_110c6a8d8;
  uStack_3b0 = 0;
  plStack_3a8 = (long *)0x0;
  ppuStack_3a0 = &PTR_FUN_110c6a940;
  plStack_38c = (long *)0x0;
  lStack_394 = 0;
  lStack_448 = *(long *)(*(long *)(plVar14[0x2e] + 0x900) + 0xa0);
  uStack_440 = 0;
  uStack_43e = 0;
  fStack_43c = 0.0;
  FUN_10a1c462c(&uStack_2c0,plVar14 + 0xd0,plVar14 + 0xb4);
  if ((char)bStack_461 < '\0') {
    __ZdlPv(pppuStack_478);
  }
  uStack_470 = (ulong)uStack_2b8;
  pppuStack_478 = uStack_2c0;
  bStack_461 = uStack_2b0._7_1_;
  uStack_2c0 = (undefined8 ****)0x0;
  uStack_2b8 = (long *)((ulong)uStack_2b8 & 0xffffffff00000000);
  uStack_2b0 = 0;
  pcStack_190 = (code *)&uStack_2c0;
  if (*(uint *)(plVar14 + 0xb9) == 0xffffffff) {
    FUN_10a0d459c();
    goto LAB_10a664cec;
  }
  ppcStack_150 = &pcStack_190;
  (*(code *)(&PTR_DAT_110c06c48)[*(uint *)(plVar14 + 0xb9)])(&ppcStack_150,plVar14 + 0xb7);
  uStack_458 = uStack_2b8;
  pppuStack_460 = uStack_2c0;
  lStack_450 = uStack_2b0;
  uVar6 = (undefined4)plVar14[0xba];
  uStack_438 = (undefined1)uVar6;
  uStack_437 = (undefined1)((uint)uVar6 >> 8);
  uStack_436 = (undefined2)((uint)uVar6 >> 0x10);
  uStack_434 = CONCAT31(uStack_434._1_3_,*(undefined1 *)((long)plVar14 + 0x5d4));
  bStack_430 = (byte)(short)plVar14[0xbb];
  bStack_42f = (byte)((ushort)(short)plVar14[0xbb] >> 8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (&pppuStack_428,plVar14 + 0xbc);
  uStack_410 = CONCAT31(uStack_410._1_3_,(char)plVar14[0xbf]);
  fStack_43c = *(float *)((long)plVar14 + 0x5fc);
  fVar52 = fStack_43c;
  FUN_10a65f27c(plVar14);
  uStack_440 = SUB42(fVar52,0);
  uStack_43e = (undefined2)((uint)fVar52 >> 0x10);
  fStack_400 = (float)*(undefined8 *)((long)plVar14 + 0x614);
  fStack_3fc = (float)((ulong)*(undefined8 *)((long)plVar14 + 0x614) >> 0x20);
  fStack_3f8 = *(float *)(plVar14 + 0xc0);
  cStack_3f4 = *(char *)((long)plVar14 + 0x604);
  iStack_40c = (int)plVar14[0xc1];
  uStack_408 = (uint)((ulong)plVar14[0xc1] >> 0x20);
  cStack_404 = *(char *)((long)plVar14 + 0x30a);
  cStack_403 = *(char *)((long)plVar14 + 0x309);
  lStack_394 = *(long *)(plVar14[0xc4] + 0x24);
  plStack_38c = *(long **)(plVar14[0xc4] + 0x2c);
  abStack_480[0] =
       abStack_480[0] & 0xfc | *(byte *)(plVar14 + 0xc2) | *(char *)((long)plVar14 + 0x61c) << 1;
  *(ushort *)(lVar51 + 0xe9) =
       *(ushort *)(lVar51 + 0xe9) & 0xff80 | *(ushort *)(lVar51 + 0xe9) + 1 & 0x7f;
  *(ushort *)(lVar51 + 0x30) =
       *(ushort *)(lVar51 + 0x30) & 0xff80 | *(ushort *)(lVar51 + 0x30) + 1 & 0x7f;
  uStack_178 = 0;
  pcStack_190 = FUN_10a1d3648;
  ppuStack_188 = &PTR_FUN_110bad818;
  plStack_3c4 = param_3;
  uStack_3cc = lVar32;
  if (!bVar21) {
    plStack_3c4 = plStack_38c;
    uStack_3cc = lStack_394;
  }
  uVar25 = uStack_470;
  if (-1 < (char)bStack_461) {
    uVar25 = (ulong)bStack_461;
  }
  bVar22 = *(byte *)(lVar51 + 0x177);
  uVar41 = *(ulong *)(lVar51 + 0x168);
  if (-1 < (char)bVar22) {
    uVar41 = (ulong)bVar22;
  }
  lStack_180 = lVar51;
  if (uVar25 == uVar41) {
    ppppuVar15 = (undefined8 ****)pppuStack_478;
    if (-1 < (char)bStack_461) {
      ppppuVar15 = &pppuStack_478;
    }
    lVar32 = *(long *)(lVar51 + 0x160);
    if (-1 < (char)bVar22) {
      lVar32 = lVar51 + 0x160;
    }
    _memcmp(ppppuVar15,lVar32);
    if ((int)ppppuVar15 != 0) goto LAB_10a662f54;
    ppppuVar15 = &pppuStack_460;
    func_0x00010a66d1cc(ppppuVar15,lVar51 + 0x178);
    if ((((int)ppppuVar15 == 0) || (lStack_448 != *(long *)(lVar51 + 400))) ||
       ((param_2 = *(float *)(lVar51 + 0x198), (float)CONCAT22(uStack_43e,uStack_440) != param_2 ||
        (((uStack_408 & 0xfffffffe) == 4 && ((*(uint *)(lVar51 + 0x1d0) & 0xfffffffe) != 4))))))
    goto LAB_10a662f54;
    uVar24 = uStack_434 & 0xff;
    uVar31 = (uint)*(byte *)(lVar51 + 0x1a4);
    if ((*(byte *)(lVar51 + 0x1a4) & (byte)uStack_434) != 0) {
      uVar24 = CONCAT22(uStack_436,CONCAT11(uStack_437,uStack_438));
      uVar31 = *(uint *)(lVar51 + 0x1a0);
    }
    if (uVar24 != uVar31) goto LAB_10a662f54;
    bVar8 = *(byte *)(lVar51 + 0x1a9);
    bVar22 = bStack_42f;
    if ((bVar8 & bStack_42f) != 0) {
      bVar8 = *(byte *)(lVar51 + 0x1a8);
      bVar22 = bStack_430;
    }
    if (((bVar22 != bVar8) ||
        (ppppuVar15 = &pppuStack_428, FUN_10a0a4dc8(&pppuStack_428,lVar51 + 0x1b0),
        ((ulong)ppppuVar15 & 1) == 0)) || ((uStack_410 & 0xff) != (uint)*(byte *)(lVar51 + 0x1c8)))
    goto LAB_10a662f54;
    bVar22 = *(byte *)(lVar51 + 0x158) ^ abStack_480[0];
    if ((((bVar22 & 1) != 0) ||
        (param_2 = ABS(fStack_400 - *(float *)(lVar51 + 0x1d8)), 1e-06 <= param_2)) ||
       ((param_2 = ABS(fStack_3fc - *(float *)(lVar51 + 0x1dc)), 1e-06 <= param_2 ||
        (iStack_40c != *(int *)(lVar51 + 0x1cc))))) {
      bVar21 = false;
      goto LAB_10a662f58;
    }
    if (((uStack_408 == *(uint *)(lVar51 + 0x1d0)) && (cStack_404 == *(char *)(lVar51 + 0x1d4))) &&
       (cStack_403 == *(char *)(lVar51 + 0x1d5))) {
      lVar32 = lVar51 + 0x1e8;
      func_0x00010acae644(lVar32,&ppuStack_3f0);
      if ((int)lVar32 == 0) goto LAB_10a664cb0;
      param_2 = *(float *)(lVar51 + 0x1e0);
      if ((fStack_3f8 == param_2) && (cStack_3f4 == *(char *)(lVar51 + 0x1e4))) {
        bVar8 = 0;
        bVar22 = bVar22 >> 1 & 1;
      }
      else {
        bVar8 = 0;
        bVar22 = 1;
      }
    }
    else {
LAB_10a664cb0:
      bVar22 = 1;
      bVar8 = 1;
    }
    bVar21 = false;
  }
  else {
LAB_10a662f54:
    bVar21 = true;
LAB_10a662f58:
    bVar8 = 1;
    bVar22 = 1;
  }
  uVar25 = (long)(char)bStack_461;
  ppppuVar15 = &pppuStack_478;
  if (((long)(char)bStack_461 < 0) &&
     (uVar25 = uStack_470, ppppuVar15 = (undefined8 ****)pppuStack_478, 10000 < uStack_470)) {
    uVar25 = 10000;
    do {
      if (-0x41 < *(char *)((long)pppuStack_478 + uVar25)) {
        if ((long)uVar25 < 0) goto LAB_10a664cec;
        break;
      }
      uVar25 = uVar25 - 1;
    } while (uVar25 != 0);
  }
  if ((*(char *)(lVar51 + 0x435) == '\x01') &&
     (bVar7 = *(byte *)(lVar51 + 0x434), (uint)bVar7 == (uStack_410 & 0xff))) {
    uVar41 = (ulong)*(char *)(lVar51 + 0x3ff);
    if ((long)uVar41 < 0) {
      lVar32 = *(long *)(lVar51 + 1000);
      uVar41 = *(ulong *)(lVar51 + 0x3f0);
    }
    else {
      lVar32 = lVar51 + 1000;
    }
    if ((uVar25 != uVar41) ||
       (ppppuVar16 = ppppuVar15, _memcmp(ppppuVar15,lVar32,uVar25), (int)ppppuVar16 != 0))
    goto LAB_10a662ff4;
    if (((*(byte *)(lVar51 + 0x436) & 1) == 0) ||
       (param_2 = *(float *)(lVar51 + 0x430), param_2 != fStack_43c)) goto LAB_10a663078;
  }
  else {
LAB_10a662ff4:
    lVar32 = lVar51 + 1000;
    func_0x000107c2c4d8(lVar32,ppppuVar15,uVar25);
    lVar37 = (long)*(char *)(lVar51 + 0x3ff);
    if (lVar37 < 0) {
      lVar32 = *(long *)(lVar51 + 1000);
      lVar37 = *(long *)(lVar51 + 0x3f0);
    }
    FUN_10a1c0bf8(&uStack_2c0,lVar32,lVar37,(byte)uStack_410);
    func_0x00010a66d31c(lVar51 + 0x400);
    *(long **)(lVar51 + 0x408) = uStack_2b8;
    *(undefined8 *****)(lVar51 + 0x400) = uStack_2c0;
    *(long *)(lVar51 + 0x410) = uStack_2b0;
    uStack_2b0 = 0;
    uStack_2b8 = (long *)0x0;
    uStack_2c0 = (undefined8 ****)0x0;
    ppcStack_150 = (code **)&uStack_2c0;
    FUN_10a1cd268(&ppcStack_150);
    *(byte *)(lVar51 + 0x434) = (byte)uStack_410;
    *(undefined2 *)(lVar51 + 0x435) = 1;
    bVar7 = (byte)uStack_410;
LAB_10a663078:
    FUN_10a657c70(fStack_43c,&uStack_2c0,lVar51 + 0x400,bVar7 & 1);
    plVar13 = (long *)(lVar51 + 0x418);
    if (*plVar13 != 0) {
      *(long *)(lVar51 + 0x420) = *plVar13;
      __ZdlPv();
      *plVar13 = 0;
      *(undefined8 *)(lVar51 + 0x420) = 0;
      *(undefined8 *)(lVar51 + 0x428) = 0;
    }
    *(long **)(lVar51 + 0x420) = uStack_2b8;
    *plVar13 = (long)uStack_2c0;
    *(long *)(lVar51 + 0x428) = uStack_2b0;
    *(float *)(lVar51 + 0x430) = fStack_43c;
    *(undefined1 *)(lVar51 + 0x436) = 1;
  }
  if ((bVar8 == 0) || (*(long *)(lVar51 + 0x388) == 0)) {
    if (bVar21) goto LAB_10a663108;
    bVar7 = 0;
    fVar52 = fStack_43c;
LAB_10a663380:
    if (bVar8 != 0) goto LAB_10a663388;
  }
  else {
    fVar52 = ABS(*(float *)(*(long *)(lVar51 + 0x388) + 0x10) + -1.0);
    param_2 = 1e-06;
    if (1e-06 <= fVar52) {
      bVar21 = true;
    }
    if (bVar21) {
LAB_10a663108:
      uVar25 = uStack_420;
      ppppuVar15 = (undefined8 ****)pppuStack_428;
      if (-1 < (long)uStack_418) {
        uVar25 = uStack_418 >> 0x38;
        ppppuVar15 = &pppuStack_428;
      }
      FUN_10a9e2380(&uStack_2c0,*(undefined8 *)(lStack_338 + 0x18),lVar51 + 0x400,lVar51 + 0x418,
                    &pppuStack_460,
                    CONCAT44(uStack_434,CONCAT22(uStack_436,CONCAT11(uStack_437,uStack_438))),
                    CONCAT11(bStack_42f,bStack_430),ppppuVar15,uVar25);
      func_0x00010a66d3b8(lVar51 + 600);
      *(long **)(lVar51 + 0x260) = uStack_2b8;
      *(undefined8 *****)(lVar51 + 600) = uStack_2c0;
      *(long *)(lVar51 + 0x268) = uStack_2b0;
      uStack_2c0 = (undefined8 ****)0x0;
      uStack_2b8 = (long *)0x0;
      uStack_2b0 = 0;
      plVar13 = (long *)(lVar51 + 0x270);
      if (*(long *)(lVar51 + 0x288) != 0) {
        func_0x00010a283f20(plVar13,*(undefined8 *)(lVar51 + 0x280));
        *(undefined8 *)(lVar51 + 0x280) = 0;
        lVar32 = *(long *)(lVar51 + 0x278);
        if (lVar32 != 0) {
          lVar37 = 0;
          do {
            *(undefined8 *)(*plVar13 + lVar37 * 8) = 0;
            lVar37 = lVar37 + 1;
          } while (lVar32 != lVar37);
        }
        *(undefined8 *)(lVar51 + 0x288) = 0;
      }
      puVar18 = uStack_2a8;
      uStack_2a8 = (undefined8 *)0x0;
      lVar32 = *plVar13;
      *plVar13 = (long)puVar18;
      if (lVar32 != 0) {
        __ZdlPv();
      }
      puVar18 = puStack_2a0;
      *(undefined8 **)(lVar51 + 0x278) = puStack_2a0;
      puStack_2a0 = (undefined8 *)0x0;
      *(ulong *)(lVar51 + 0x288) = uStack_290;
      *(undefined4 *)(lVar51 + 0x290) = (undefined4)uStack_288;
      *(long *)(lVar51 + 0x280) = lStack_298;
      if (uStack_290 != 0) {
        puVar47 = *(undefined8 **)(lStack_298 + 8);
        if (((ulong)puVar18 & (long)puVar18 - 1U) == 0) {
          puVar47 = (undefined8 *)((ulong)puVar47 & (long)puVar18 - 1U);
        }
        else if (puVar18 <= puVar47) {
          uVar25 = 0;
          if (puVar18 != (undefined8 *)0x0) {
            uVar25 = (ulong)puVar47 / (ulong)puVar18;
          }
          puVar47 = (undefined8 *)((long)puVar47 - uVar25 * (long)puVar18);
        }
        *(long *)(*plVar13 + (long)puVar47 * 8) = lVar51 + 0x280;
        lStack_298 = 0;
        uStack_290 = 0;
      }
      plVar13 = (long *)(lVar51 + 0x298);
      if (*plVar13 != 0) {
        *(long *)(lVar51 + 0x2a0) = *plVar13;
        __ZdlPv();
        *plVar13 = 0;
        *(undefined8 *)(lVar51 + 0x2a0) = 0;
        *(undefined8 *)(lVar51 + 0x2a8) = 0;
      }
      *(long *)(lVar51 + 0x2a0) = uStack_278;
      *plVar13 = lStack_280;
      *(long *)(lVar51 + 0x2a8) = lStack_270;
      lStack_280 = 0;
      uStack_278 = 0;
      lStack_270 = 0;
      func_0x00010a66d440(lVar51 + 0x2b0,&lStack_268);
      func_0x00010a66d518(lVar51 + 0x2d8,auStack_240);
      if (*(long *)(lVar51 + 0x300) != 0) {
        *(long *)(lVar51 + 0x308) = *(long *)(lVar51 + 0x300);
        __ZdlPv();
        *(undefined8 *)(lVar51 + 0x300) = 0;
        *(undefined8 *)(lVar51 + 0x308) = 0;
        *(undefined8 *)(lVar51 + 0x310) = 0;
      }
      *(undefined8 *)(lVar51 + 0x308) = uStack_210;
      *(undefined8 *)(lVar51 + 0x300) = uStack_218;
      *(undefined8 *)(lVar51 + 0x310) = uStack_208;
      uStack_210 = 0;
      uStack_208 = 0;
      uStack_218 = 0;
      func_0x00010937d1e4((undefined8 *)(lVar51 + 0x318));
      *(undefined8 *)(lVar51 + 800) = uStack_1f8;
      *(undefined8 *)(lVar51 + 0x318) = uStack_200;
      *(undefined8 *)(lVar51 + 0x328) = uStack_1f0;
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      if (*(long *)(lVar51 + 0x330) != 0) {
        *(long *)(lVar51 + 0x338) = *(long *)(lVar51 + 0x330);
        __ZdlPv();
        *(undefined8 *)(lVar51 + 0x330) = 0;
        *(undefined8 *)(lVar51 + 0x338) = 0;
        *(undefined8 *)(lVar51 + 0x340) = 0;
      }
      *(undefined8 *)(lVar51 + 0x338) = uStack_1e0;
      *(undefined8 *)(lVar51 + 0x330) = uStack_1e8;
      *(undefined8 *)(lVar51 + 0x340) = uStack_1d8;
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      uStack_1e8 = 0;
      if (*(char *)(lVar51 + 0x35f) < '\0') {
        __ZdlPv(*(undefined8 *)(lVar51 + 0x348));
      }
      *(undefined8 *)(lVar51 + 0x350) = uStack_1c8;
      *(undefined8 *)(lVar51 + 0x348) = CONCAT71(uStack_1cf,uStack_1d0);
      *(ulong *)(lVar51 + 0x358) = CONCAT17(uStack_1b9,uStack_1c0);
      uStack_1b9 = 0;
      uStack_1d0 = 0;
      func_0x000107c283f0(lVar51 + 0x360,auStack_1b8);
      func_0x00010a283e44(&uStack_2c0);
      param_2 = 4388.572;
      fVar52 = 4388.572 / (float)CONCAT22(uStack_43e,uStack_440);
      *(float *)(lVar51 + 0x3c8) = fVar52;
      bVar7 = 1;
      goto LAB_10a663380;
    }
    bVar7 = 0;
LAB_10a663388:
    func_0x00010acae698(&ppuStack_3f0);
    fVar54 = uStack_3cc._4_4_;
    fVar61 = (float)uStack_3cc;
    fVar52 = fVar61 + fVar52;
    param_2 = uStack_3cc._4_4_ + param_2;
    lVar32 = uStack_3cc;
    fVar58 = param_2;
    if (cStack_340 == '\x01') {
      fVar53 = fVar52;
      func_0x00010acae6ac(&ppuStack_3f0);
      lVar32 = CONCAT44(fVar54 - fVar58,fVar61 - fVar53);
      fVar52 = fVar52 - fVar53;
      param_2 = param_2 - fVar58;
    }
    fVar54 = *(float *)(lVar51 + 0x3c8);
    uVar27 = CONCAT44((float)((ulong)lVar32 >> 0x20) * fVar54,(float)lVar32 * fVar54);
    uStack_488 = CONCAT44(param_2 * fVar54,fVar52 * fVar54);
    uVar25 = uStack_420;
    ppppuVar15 = (undefined8 ****)pppuStack_428;
    if (-1 < (long)uStack_418) {
      uVar25 = uStack_418 >> 0x38;
      ppppuVar15 = &pppuStack_428;
    }
    uStack_490 = uVar27;
    FUN_10a9e8ce0(lStack_338,&pppuStack_460,
                  CONCAT44(uStack_434,CONCAT22(uStack_436,CONCAT11(uStack_437,uStack_438))),
                  CONCAT11(bStack_42f,bStack_430),ppppuVar15,uVar25,100);
    fVar54 = fStack_3fc;
    fVar52 = fStack_400;
    cVar10 = cStack_403;
    cVar9 = cStack_404;
    uVar31 = uStack_408;
    iVar30 = iStack_40c;
    bVar4 = abStack_480[0];
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    lStack_140 = 0;
    ppcStack_150 = (code **)FUN_10a67efcc;
    ppuStack_148 = &PTR_DAT_110950c70;
    pbStack_2d8 = abStack_480;
    pppuStack_2e0 = (undefined ***)&PTR_FUN_110c07950;
    plStack_2d0 = &lStack_338;
    ppppuStack_2c8 = &pppuStack_2e0;
    pppcVar17 = (code ***)(lVar51 + 600);
    FUN_10a67ed7c(fStack_400,fStack_3fc,&lStack_320,&uStack_490,pppcVar17,abStack_480[0] & 1,
                  uStack_408,iStack_40c,&pppuStack_2e0,lVar26,0);
    lVar32 = lStack_320;
    if (*(long *)(lStack_320 + 0x10) == 0) {
      puVar18 = (undefined8 *)0xb0;
      __Znwm();
      *(undefined8 *)((long)puVar18 + 0x2c) = 0;
      *(undefined8 *)((long)puVar18 + 0x24) = 0;
      *(undefined8 *)((long)puVar18 + 0x1c) = 0;
      *(undefined8 *)((long)puVar18 + 0x14) = 0;
      *(undefined8 *)((long)puVar18 + 0x3c) = 0;
      *(undefined8 *)((long)puVar18 + 0x34) = 0;
      *(undefined8 *)((long)puVar18 + 0x4c) = 0;
      *(undefined8 *)((long)puVar18 + 0x44) = 0;
      *(undefined8 *)((long)puVar18 + 0x5c) = 0;
      *(undefined8 *)((long)puVar18 + 0x54) = 0;
      *(undefined8 *)((long)puVar18 + 0x6c) = 0;
      *(undefined8 *)((long)puVar18 + 100) = 0;
      *(undefined8 *)((long)puVar18 + 0x7c) = 0;
      *(undefined8 *)((long)puVar18 + 0x74) = 0;
      *(undefined8 *)((long)puVar18 + 0x8c) = 0;
      *(undefined8 *)((long)puVar18 + 0x84) = 0;
      *(undefined4 *)(puVar18 + 2) = 0x3f800000;
      puVar18[4] = 0;
      puVar18[3] = 0;
      puVar18[6] = 0;
      puVar18[5] = 0;
      puVar18[8] = 0;
      puVar18[7] = 0;
      puVar18[10] = 0;
      puVar18[9] = 0;
      puVar18[0xc] = 0;
      puVar18[0xb] = 0;
      puVar18[0xe] = 0;
      puVar18[0xd] = 0;
      puVar18[0x10] = 0;
      puVar18[0xf] = 0;
      puVar18[0x11] = 0;
      *(undefined4 *)(puVar18 + 0x12) = 0x3f800000;
      *(undefined4 *)((long)puVar18 + 0x94) = 0;
      puVar18[0x13] = 0;
      puVar18[0x14] = 0;
      puVar18[0x15] = 0;
      puVar18[1] = uStack_488;
      *puVar18 = uStack_490;
      fVar52 = (float)uStack_488;
      if ((cVar10 != '\x02') && (fVar52 = (float)uStack_490, cVar10 == '\x01')) {
        fVar52 = ((float)uStack_490 + (float)uStack_488) * 0.5;
      }
      fVar58 = (float)uVar27 + fVar58;
      fVar54 = uStack_490._4_4_;
      if (cVar9 == '\0') {
LAB_10a663d60:
        fVar54 = fVar58 + fVar54;
      }
      else {
        fVar54 = uStack_488._4_4_;
        if (cVar9 == '\x01') {
          fVar58 = fVar58 * 0.5;
          fVar54 = (uStack_490._4_4_ + uStack_488._4_4_) * 0.5;
          goto LAB_10a663d60;
        }
      }
      uStack_2c0 = (undefined8 ****)CONCAT44(fVar54 - (float)uVar27,fVar52);
      uStack_2b8 = (long *)0x0;
      uStack_2b0 = CONCAT71(uStack_2b0._1_7_,1);
      FUN_10a20699c(puVar18 + 8,&uStack_2c0);
    }
    else {
      if (*(char *)(ppuStack_148 + 1) == '\x01') {
        pppcVar17 = &ppcStack_150;
        (*(code *)ppcStack_150)(*(undefined4 *)(lStack_320 + 0x18));
        if (pppcVar17 == (code ***)0x0) {
          puVar18 = (undefined8 *)0xb0;
          __Znwm();
          *(undefined8 *)((long)puVar18 + 0x2c) = 0;
          *(undefined8 *)((long)puVar18 + 0x24) = 0;
          *(undefined8 *)((long)puVar18 + 0x1c) = 0;
          *(undefined8 *)((long)puVar18 + 0x14) = 0;
          *(undefined8 *)((long)puVar18 + 0x3c) = 0;
          *(undefined8 *)((long)puVar18 + 0x34) = 0;
          *(undefined8 *)((long)puVar18 + 0x4c) = 0;
          *(undefined8 *)((long)puVar18 + 0x44) = 0;
          *(undefined8 *)((long)puVar18 + 0x5c) = 0;
          *(undefined8 *)((long)puVar18 + 0x54) = 0;
          *(undefined8 *)((long)puVar18 + 0x6c) = 0;
          *(undefined8 *)((long)puVar18 + 100) = 0;
          *(undefined8 *)((long)puVar18 + 0x7c) = 0;
          *(undefined8 *)((long)puVar18 + 0x74) = 0;
          *(undefined8 *)((long)puVar18 + 0x8c) = 0;
          *(undefined8 *)((long)puVar18 + 0x84) = 0;
          *(undefined4 *)(puVar18 + 2) = 0x3f800000;
          puVar18[4] = 0;
          puVar18[3] = 0;
          puVar18[6] = 0;
          puVar18[5] = 0;
          puVar18[8] = 0;
          puVar18[7] = 0;
          puVar18[10] = 0;
          puVar18[9] = 0;
          puVar18[0xc] = 0;
          puVar18[0xb] = 0;
          puVar18[0xe] = 0;
          puVar18[0xd] = 0;
          puVar18[0x10] = 0;
          puVar18[0xf] = 0;
          puVar18[0x11] = 0;
          *(undefined4 *)(puVar18 + 0x12) = 0x3f800000;
          *(undefined4 *)((long)puVar18 + 0x94) = 0;
          puVar18[0x13] = 0;
          puVar18[0x14] = 0;
          puVar18[0x15] = 0;
          puVar18[1] = uStack_488;
          *puVar18 = uStack_490;
          goto LAB_10a663d88;
        }
        uVar24 = 0;
        if (iVar30 == 2) {
          uVar24 = (uint)(uVar31 == 2);
        }
        uVar2 = 0;
        if ((bVar4 & 1) == 0 && uVar31 != 3) {
          uVar2 = uVar31;
        }
        iVar3 = 0;
        if ((bVar4 & 1) == 0 && iVar30 != 2) {
          iVar3 = iVar30;
        }
        FUN_10a67ed7c(fVar52,fVar54,&uStack_2c0,&uStack_490,pppcVar17,0,uVar2,iVar3,&pppuStack_2e0,
                      lVar26,uVar24 | 0x100);
        ppppuVar15 = uStack_2c0;
        uStack_2c0 = (undefined8 ****)0x0;
        func_0x00010a67ef88(&lStack_320,ppppuVar15);
        func_0x00010a67ef88(&uStack_2c0,0);
      }
      else {
        for (lVar37 = *(long *)(lStack_320 + 8); lVar37 != lVar32; lVar37 = *(long *)(lVar37 + 8)) {
          FUN_10a24f238(*(undefined4 *)(lVar32 + 0x18),lVar37 + 0x10);
        }
      }
      uStack_330 = 0;
      uStack_328 = 0;
      FUN_10a2527a0(fVar54,lStack_320);
      FUN_10a2528fc(lStack_320,&uStack_490,cVar10,cVar9,&uStack_330);
      puVar18 = (undefined8 *)0xb0;
      __Znwm();
      *(undefined8 *)((long)puVar18 + 0x8c) = 0;
      *(undefined8 *)((long)puVar18 + 0x84) = 0;
      *(undefined8 *)((long)puVar18 + 0x7c) = 0;
      *(undefined8 *)((long)puVar18 + 0x74) = 0;
      *(undefined8 *)((long)puVar18 + 0x6c) = 0;
      *(undefined8 *)((long)puVar18 + 100) = 0;
      *(undefined8 *)((long)puVar18 + 0x5c) = 0;
      *(undefined8 *)((long)puVar18 + 0x54) = 0;
      *(undefined8 *)((long)puVar18 + 0x4c) = 0;
      *(undefined8 *)((long)puVar18 + 0x44) = 0;
      *(undefined8 *)((long)puVar18 + 0x3c) = 0;
      *(undefined8 *)((long)puVar18 + 0x34) = 0;
      *(undefined8 *)((long)puVar18 + 0x2c) = 0;
      *(undefined8 *)((long)puVar18 + 0x24) = 0;
      *(undefined8 *)((long)puVar18 + 0x1c) = 0;
      *(undefined8 *)((long)puVar18 + 0x14) = 0;
      *(undefined4 *)(puVar18 + 0x12) = 0x3f800000;
      *(undefined4 *)((long)puVar18 + 0x94) = 0;
      puVar18[0x13] = 0;
      puVar18[0x14] = 0;
      puVar18[0x15] = 0;
      puVar18[1] = uStack_488;
      *puVar18 = uStack_490;
      *(undefined4 *)(puVar18 + 2) = *(undefined4 *)(lStack_320 + 0x18);
      FUN_10a252a88(&uStack_2c0,lStack_320,pppcVar17);
      lVar32 = puVar18[3];
      if (lVar32 != 0) {
        lVar37 = lVar32;
        lVar36 = puVar18[4];
        if (puVar18[4] != lVar32) {
          do {
            lVar37 = lVar36 + -0x70;
            FUN_10a1d37cc(lVar36 + -0x20);
            lVar36 = lVar37;
          } while (lVar37 != lVar32);
          lVar37 = puVar18[3];
        }
        puVar18[4] = lVar32;
        __ZdlPv(lVar37);
        puVar18[3] = 0;
        puVar18[4] = 0;
        puVar18[5] = 0;
      }
      puVar18[4] = uStack_2b8;
      puVar18[3] = uStack_2c0;
      puVar18[5] = uStack_2b0;
      uStack_2b0 = 0;
      uStack_2b8 = (long *)0x0;
      uStack_2c0 = (undefined8 ****)0x0;
      puStack_310 = &uStack_2c0;
      FUN_10a26a99c(&puStack_310);
      if (puVar18[0x11] != 0) {
        func_0x00010a67ef4c(puVar18[0x10]);
        puVar18[0x10] = 0;
        lVar32 = puVar18[0xf];
        if (lVar32 != 0) {
          lVar37 = 0;
          do {
            *(undefined8 *)(puVar18[0xe] + lVar37 * 8) = 0;
            lVar37 = lVar37 + 1;
          } while (lVar32 != lVar37);
        }
        puVar18[0x11] = 0;
      }
      uVar27 = *(undefined8 *)(lStack_320 + 0x20);
      *(undefined8 *)(lStack_320 + 0x20) = 0;
      lVar32 = puVar18[0xe];
      puVar18[0xe] = uVar27;
      if (lVar32 != 0) {
        __ZdlPv();
      }
      lVar32 = *(long *)(lStack_320 + 0x30);
      uVar25 = *(ulong *)(lStack_320 + 0x28);
      puVar18[0x10] = lVar32;
      puVar18[0xf] = uVar25;
      *(undefined8 *)(lStack_320 + 0x28) = 0;
      lVar37 = *(long *)(lStack_320 + 0x38);
      puVar18[0x11] = lVar37;
      *(undefined4 *)(puVar18 + 0x12) = *(undefined4 *)(lStack_320 + 0x40);
      if (lVar37 != 0) {
        uVar41 = *(ulong *)(lVar32 + 8);
        if ((uVar25 & uVar25 - 1) == 0) {
          uVar41 = uVar41 & uVar25 - 1;
        }
        else if (uVar25 <= uVar41) {
          uVar28 = 0;
          if (uVar25 != 0) {
            uVar28 = uVar41 / uVar25;
          }
          uVar41 = uVar41 - uVar28 * uVar25;
        }
        *(undefined8 **)(puVar18[0xe] + uVar41 * 8) = puVar18 + 0x10;
        *(long *)(lStack_320 + 0x30) = 0;
        *(undefined8 *)(lStack_320 + 0x38) = 0;
      }
      FUN_10a252e1c(&uStack_2c0,lStack_320);
      FUN_10a20d9b0(puVar18 + 0x13);
      puVar18[0x14] = uStack_2b8;
      puVar18[0x13] = uStack_2c0;
      puVar18[0x15] = uStack_2b0;
      uStack_2b0 = 0;
      uStack_2b8 = (long *)0x0;
      uStack_2c0 = (undefined8 ****)0x0;
      puStack_310 = &uStack_2c0;
      FUN_10a208bbc(&puStack_310);
      plStack_308 = (long *)0x0;
      puStack_310 = (undefined8 *)0x0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_2f0 = 0x3f800000;
      func_0x00010a20da18(&puStack_310,(long)(float)*(ulong *)(lStack_320 + 0x10));
      pfVar29 = (float *)puVar18[3];
      pfVar34 = (float *)puVar18[4];
      if (pfVar34 != pfVar29) {
        puVar47 = (undefined8 *)0x0;
        lVar32 = 0x40;
        do {
          pppuStack_318 = *(undefined8 ****)((long)pfVar29 + lVar32);
          ppuVar19 = &puStack_310;
          FUN_10a20dc24(ppuVar19,&pppuStack_318);
          if (ppuVar19 == (undefined8 **)0x0) {
            ppuVar19 = &puStack_310;
            uStack_2c0 = &pppuStack_318;
            FUN_10a20dcc4(ppuVar19,&pppuStack_318,&UNK_10dd5b8f9,&uStack_2c0,&uStack_2e1);
            ppuVar19[3] = puVar47;
          }
          puVar47 = (undefined8 *)((long)puVar47 + 1);
          ppuVar19[4] = puVar47;
          pfVar29 = (float *)puVar18[3];
          pfVar34 = (float *)puVar18[4];
          lVar32 = lVar32 + 0x70;
        } while (puVar47 < (undefined8 *)(((long)pfVar34 - (long)pfVar29 >> 4) * 0x6db6db6db6db6db7)
                );
      }
      pppuStack_318 = (undefined8 ****)0x0;
      lVar32 = *(long *)(lStack_320 + 8);
      if (lVar32 != lStack_320) {
        do {
          lVar37 = *(long *)(lVar32 + 8);
          FUN_10a20ded0(puVar18 + 8,puVar18[9],*(long *)(lVar32 + 0x58),*(long *)(lVar32 + 0x60),
                        (*(long *)(lVar32 + 0x60) - *(long *)(lVar32 + 0x58) >> 3) *
                        -0x5555555555555555);
          uVar25 = lVar32 + 0x10;
          FUN_10a24d004();
          if (uVar25 != 0) {
            uVar41 = 0;
            do {
              uStack_290 = 0;
              lStack_298 = 0;
              puStack_2a0 = (undefined8 *)0x0;
              uStack_2a8 = (undefined8 *)0x0;
              uStack_2b0 = 0;
              uStack_2b8 = (long *)0x0;
              uVar28 = 0;
              if (*(long *)(lVar32 + 0x20) != 0) {
                uVar28 = (ulong)*(byte *)(*(long *)(lVar32 + 0x18) + 0x70);
              }
              uStack_288 = (uVar28 & 1) << 0x30;
              uVar28 = (*(long *)(lVar32 + 0x130) - *(long *)(lVar32 + 0x128) >> 2) *
                       -0x5555555555555555;
              uStack_2c0 = (undefined8 ****)pppuStack_318;
              if (uVar28 < uVar41 || uVar28 - uVar41 == 0) goto LAB_10a664cec;
              plVar13 = (long *)(*(long *)(lVar32 + 0x128) + uVar41 * 0xc);
              lStack_298 = *plVar13;
              uStack_290 = (ulong)*(uint *)(plVar13 + 1);
              ppuVar19 = &puStack_310;
              FUN_10a20dc24(ppuVar19,&pppuStack_318);
              if (ppuVar19 == (undefined8 **)0x0) {
                uStack_2a8 = (undefined8 *)
                             (((long)(puVar18[4] - puVar18[3]) >> 4) * 0x6db6db6db6db6db7);
                puStack_2a0 = uStack_2a8;
              }
              else {
                uStack_2a8 = ppuVar19[3];
                puStack_2a0 = ppuVar19[4];
              }
              lVar36 = *(long *)(lVar32 + 0x70);
              if (uVar41 == 0) {
                uVar28 = 0;
                uVar38 = *(long *)(lVar32 + 0x78) - lVar36 >> 3;
              }
              else {
                uVar38 = *(long *)(lVar32 + 0x78) - lVar36 >> 3;
                if (uVar38 <= uVar41 - 1) goto LAB_10a664cec;
                uVar28 = *(long *)(lVar36 + (uVar41 - 1) * 8) + 1;
              }
              if (uVar41 < uVar38) {
                uVar38 = *(ulong *)(lVar36 + uVar41 * 8);
                lVar36 = *(long *)(lVar32 + 0x40);
                lVar42 = *(long *)(lVar32 + 0x48);
              }
              else {
                lVar36 = *(long *)(lVar32 + 0x40);
                lVar42 = *(long *)(lVar32 + 0x48);
                uVar38 = (lVar42 - lVar36 >> 3) * -0x70a3d70a3d70a3d7 - 1;
              }
              uStack_2b8 = (long *)0xffffffffffffffff;
              if ((lVar36 == lVar42) ||
                 (uVar43 = (lVar42 - lVar36 >> 3) * -0x70a3d70a3d70a3d7,
                 uVar43 <= uVar28 || uVar38 < uVar28)) {
LAB_10a663ab0:
                plVar13 = *(long **)(lVar32 + 0xc0);
                uStack_2b8 = plVar13;
              }
              else {
                plVar13 = (long *)0x0;
                piVar45 = (int *)(lVar36 + uVar28 * 200 + 0xb0);
                plVar44 = (long *)0xffffffffffffffff;
                do {
                  plVar20 = plVar44;
                  if ((char)piVar45[-0x20] == '\x01') {
                    plVar46 = *(long **)(piVar45 + -0x22);
                    plVar20 = plVar46;
                    if (plVar44 <= plVar46) {
                      plVar20 = plVar44;
                    }
                    uStack_2b8 = plVar20;
                    if (plVar13 <= (long *)((long)plVar46 + (long)*piVar45)) {
                      plVar13 = (long *)((long)plVar46 + (long)*piVar45);
                    }
                  }
                  if (uVar38 <= uVar28) break;
                  uVar28 = uVar28 + 1;
                  piVar45 = piVar45 + 0x32;
                  plVar44 = plVar20;
                } while (uVar28 < uVar43);
                if (plVar20 == (long *)0xffffffffffffffff) goto LAB_10a663ab0;
              }
              bVar21 = false;
              uStack_288._0_7_ = (uint7)CONCAT31(uStack_288._5_3_,lVar36 == lVar42) << 0x20;
              iVar11 = (int7)uStack_288;
              uStack_288 = CONCAT17(*(undefined1 *)(lVar32 + 0x120),(int7)uStack_288);
              iVar30 = 0;
              if ((uVar41 == uVar25 - 1) && (lVar37 != lStack_320)) {
                iVar30 = *(int *)(lVar37 + 200);
                bVar21 = 0 < iVar30;
              }
              uStack_288._0_6_ = CONCAT15(bVar21,(int5)iVar11);
              uStack_288 = CONCAT44(uStack_288._4_4_,iVar30);
              uStack_2b0 = (long)plVar13 + (long)iVar30;
              FUN_10a20ce00(puVar18 + 0xb,&uStack_2c0);
              pppuStack_318 = (undefined8 ***)((long)pppuStack_318 + 1);
              uVar41 = uVar41 + 1;
            } while (uVar41 != uVar25);
          }
          lVar32 = *(long *)(lVar32 + 8);
        } while (lVar32 != lStack_320);
        pfVar29 = (float *)puVar18[3];
        pfVar34 = (float *)puVar18[4];
      }
      if (*(int *)(lVar26 + 0x18) < 0x15c) {
        if (pfVar29 != pfVar34) {
          fVar52 = *pfVar29;
          *(float *)(puVar18 + 6) = fVar52;
          fVar54 = pfVar29[2];
          *(float *)(puVar18 + 7) = fVar54;
          pfVar39 = pfVar29;
          do {
            fVar58 = *pfVar39;
            if (fVar58 < fVar52) {
              *(float *)(puVar18 + 6) = fVar58;
              fVar52 = fVar58;
            }
            fVar58 = pfVar39[2];
            if (fVar54 < fVar58) {
              *(float *)(puVar18 + 7) = fVar58;
              fVar54 = fVar58;
            }
            pfVar39 = pfVar39 + 0x1c;
          } while (pfVar39 != pfVar34);
          goto LAB_10a663c1c;
        }
LAB_10a663c24:
        if (*(long *)(lStack_320 + 0x10) != 0) {
          *(float *)(puVar18 + 6) = (float)uStack_490;
          *(float *)(puVar18 + 7) = (float)uStack_488;
        }
      }
      else {
        if (pfVar29 == pfVar34) goto LAB_10a663c24;
        fVar52 = *pfVar29 + pfVar29[8];
        *(float *)(puVar18 + 6) = fVar52;
        fVar54 = pfVar29[2] - pfVar29[8];
        *(float *)(puVar18 + 7) = fVar54;
        pfVar39 = pfVar29;
        do {
          fVar58 = pfVar39[8];
          fVar61 = *pfVar39 + fVar58;
          if (fVar61 < fVar52) {
            *(float *)(puVar18 + 6) = fVar61;
            fVar58 = pfVar39[8];
            fVar52 = fVar61;
          }
          fVar58 = pfVar39[2] - fVar58;
          if (fVar54 < fVar58) {
            *(float *)(puVar18 + 7) = fVar58;
            fVar54 = fVar58;
          }
          pfVar39 = pfVar39 + 0x1c;
        } while (pfVar39 != pfVar34);
LAB_10a663c1c:
        if (pfVar29 == pfVar34) goto LAB_10a663c24;
      }
      func_0x00010a20e170(&puStack_310);
      *(undefined4 *)((long)puVar18 + 0x34) = uStack_330._4_4_;
      *(undefined4 *)((long)puVar18 + 0x3c) = uStack_328._4_4_;
      lVar32 = puVar18[0xb];
      if (lVar32 != puVar18[0xc]) {
        uVar25 = puVar18[0xc] - lVar32 >> 6;
        *(undefined4 *)(lVar32 + 0x34) = uStack_328._4_4_;
        if (1 < uVar25) {
          lVar37 = uVar25 - 1;
          pfVar29 = (float *)(lVar32 + 0x74);
          do {
            *pfVar29 = pfVar29[-0x10] - pfVar29[-0x11];
            lVar37 = lVar37 + -1;
            pfVar29 = pfVar29 + 0x10;
          } while (lVar37 != 0);
        }
      }
    }
LAB_10a663d88:
    func_0x00010a67ef88(&lStack_320,0);
    plVar13 = (long *)(lVar51 + 0x388);
    puVar47 = *(undefined8 **)(lVar51 + 0x388);
    if (puVar47 == puVar18) {
      FUN_10a67f39c(puVar18);
    }
    else {
      *plVar13 = (long)puVar18;
      if (puVar47 != (undefined8 *)0x0) {
        FUN_10a67f39c();
      }
      func_0x00010a1bd170(&uStack_2c0);
      FUN_10a67f410(plVar13);
    }
    if (ppppuStack_2c8 == &pppuStack_2e0) {
      lVar32 = 0x20;
LAB_10a663dec:
      (**(code **)((long)*ppppuStack_2c8 + lVar32))();
    }
    else if (ppppuStack_2c8 != (undefined ****)0x0) {
      lVar32 = 0x28;
      goto LAB_10a663dec;
    }
    (*(code *)*ppuStack_148)(&ppuStack_148);
    lVar32 = *plVar13;
    if (lVar32 == 0) {
      uStack_2b8 = (long *)0x0;
      uStack_2c0 = (undefined8 ****)0x0;
      uStack_2b0 = 0;
    }
    else {
      fVar52 = *(float *)(lVar51 + 0x3c8);
      uStack_2b0 = 0;
      uStack_2c0 = (undefined8 ****)0x0;
      uStack_2b8 = (long *)0x0;
      FUN_10a679050(&uStack_2c0,
                    (*(long *)(lVar32 + 0x48) - *(long *)(lVar32 + 0x40) >> 3) * -0x5555555555555555
                   );
      puVar47 = *(undefined8 **)(lVar32 + 0x48);
      for (puVar18 = *(undefined8 **)(lVar32 + 0x40); puVar18 != puVar47; puVar18 = puVar18 + 3) {
        if (*(char *)(puVar18 + 2) == '\x01') {
          ppcStack_150 = (code **)CONCAT44((float)((ulong)*puVar18 >> 0x20) / fVar52,
                                           (float)*puVar18 / fVar52);
          ppuStack_148 = (undefined **)puVar18[1];
          func_0x00010a6790e0(&uStack_2c0,&ppcStack_150);
        }
      }
    }
    if (*(long *)(lVar51 + 0x3d0) != 0) {
      *(long *)(lVar51 + 0x3d8) = *(long *)(lVar51 + 0x3d0);
      __ZdlPv();
      *(undefined8 *)(lVar51 + 0x3d0) = 0;
      *(undefined8 *)(lVar51 + 0x3d8) = 0;
      *(undefined8 *)(lVar51 + 0x3e0) = 0;
    }
    *(long **)(lVar51 + 0x3d8) = uStack_2b8;
    *(undefined8 *****)(lVar51 + 0x3d0) = uStack_2c0;
    *(long *)(lVar51 + 0x3e0) = uStack_2b0;
  }
  plVar13 = (long *)(lVar51 + 0x388);
  lVar32 = *(long *)(lVar51 + 0x388);
  if (lVar32 == 0) {
LAB_10a66499c:
    FUN_10a67f410(plVar13);
    plVar13 = (long *)0x0;
LAB_10a6649ac:
    if ((byte)(bVar22 | bVar8 | bVar7) == 1) {
      *(byte *)(lVar51 + 0x158) = abStack_480[0];
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (lVar51 + 0x160,&pppuStack_478);
      *(long **)(lVar51 + 0x180) = uStack_458;
      *(undefined8 ****)(lVar51 + 0x178) = pppuStack_460;
      *(long *)(lVar51 + 0x188) = lStack_450;
      *(ulong *)(lVar51 + 0x198) = CONCAT44(fStack_43c,CONCAT22(uStack_43e,uStack_440));
      *(long *)(lVar51 + 400) = lStack_448;
      *(ulong *)(lVar51 + 0x1a2) =
           CONCAT17(bStack_42f,CONCAT16(bStack_430,CONCAT42(uStack_434,uStack_436)));
      *(ulong *)(lVar51 + 0x19a) =
           CONCAT17(uStack_437,CONCAT16(uStack_438,CONCAT42(fStack_43c,uStack_43e)));
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (lVar51 + 0x1b0,&pppuStack_428);
      *(ulong *)(lVar51 + 0x1d0) =
           CONCAT26(uStack_402,CONCAT15(cStack_403,CONCAT14(cStack_404,uStack_408)));
      *(ulong *)(lVar51 + 0x1c8) = CONCAT44(iStack_40c,uStack_410);
      *(ulong *)(lVar51 + 0x1dd) = CONCAT17(cStack_3f4,CONCAT43(fStack_3f8,fStack_3fc._1_3_));
      *(ulong *)(lVar51 + 0x1d5) =
           CONCAT17(fStack_3fc._0_1_,CONCAT43(fStack_400,CONCAT21(uStack_402,cStack_403)));
      *(long **)(lVar51 + 0x214) = plStack_3c4;
      *(long *)(lVar51 + 0x20c) = uStack_3cc;
      *(long **)(lVar51 + 0x24c) = plStack_38c;
      *(long *)(lVar51 + 0x244) = lStack_394;
    }
    if (plVar14[0x4c] == 0) {
      lVar32 = *(long *)(lVar51 + 0x3b8);
      if (lVar32 == 0) goto LAB_10a664b5c;
      lVar37 = 0;
LAB_10a664aa4:
      if (lVar37 != lVar32) {
        FUN_10a6589d4(&uStack_2c0,plVar14[0x2e],lVar32,*(undefined8 *)(lVar51 + 0x3c0));
        plStack_498 = uStack_2b8;
        pppuStack_4a0 = uStack_2c0;
        if (uStack_2b8 != (long *)0x0) {
          plVar44 = uStack_2b8 + 1;
          do {
            cVar9 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(plVar44,0x10);
            if (bVar21) {
              *plVar44 = *plVar44 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
        }
        FUN_10a426824(plVar14,&pppuStack_4a0);
        plVar14 = plStack_498;
        if (plStack_498 != (long *)0x0) {
          plVar44 = plStack_498 + 1;
          do {
            lVar32 = *plVar44;
            cVar9 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(plVar44,0x10);
            if (bVar21) {
              *plVar44 = lVar32 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar32 == 0) {
            (**(code **)(*plStack_498 + 0x10))(plStack_498);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
          }
        }
        if (uStack_2b8 != (long *)0x0) {
          plVar14 = uStack_2b8 + 1;
          do {
            lVar32 = *plVar14;
            cVar9 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar21) {
              *plVar14 = lVar32 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
            plVar44 = uStack_2b8;
          } while (cVar9 != '\0');
          goto LAB_10a664b40;
        }
      }
    }
    else {
      lVar37 = *(long *)(plVar14[0x4c] + 0xe0);
      lVar32 = *(long *)(lVar51 + 0x3b8);
      if (lVar32 != 0) goto LAB_10a664aa4;
      if (lVar37 != 0) {
        uStack_4b0 = 0;
        plStack_4a8 = (long *)0x0;
        FUN_10a426824(plVar14,&uStack_4b0);
        if (plStack_4a8 == (long *)0x0) goto LAB_10a664b5c;
        plVar14 = plStack_4a8 + 1;
        do {
          lVar32 = *plVar14;
          cVar9 = '\x01';
          bVar21 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar21) {
            *plVar14 = lVar32 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
          plVar44 = plStack_4a8;
        } while (cVar9 != '\0');
LAB_10a664b40:
        if (lVar32 == 0) {
          (**(code **)(*plVar44 + 0x10))(plVar44);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar44);
        }
      }
    }
LAB_10a664b5c:
    *(char *)(lVar51 + 0x437) = (char)plVar13;
    FUN_10a044790(&pcStack_190);
    (*(code *)*ppuStack_188)(&ppuStack_188);
    plVar14 = plStack_3a8;
    ppuStack_3b8 = &PTR_DAT_110b17898;
    if (plStack_3a8 != (long *)0x0) {
      plVar44 = plStack_3a8 + 1;
      do {
        lVar32 = *plVar44;
        cVar9 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(plVar44,0x10);
        if (bVar21) {
          *plVar44 = lVar32 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar32 == 0) {
        (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      }
    }
    plVar14 = plStack_3e0;
    ppuStack_3f0 = &PTR_DAT_110b17898;
    if (plStack_3e0 != (long *)0x0) {
      plVar44 = plStack_3e0 + 1;
      do {
        lVar32 = *plVar44;
        cVar9 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(plVar44,0x10);
        if (bVar21) {
          *plVar44 = lVar32 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar32 == 0) {
        (**(code **)(*plStack_3e0 + 0x10))(plStack_3e0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      }
    }
    if ((long)uStack_418 < 0) {
      __ZdlPv(pppuStack_428);
    }
    if ((char)bStack_461 < '\0') {
      __ZdlPv(pppuStack_478);
    }
    plVar14 = plStack_368;
    if ((cStack_340 == '\x01') && (ppuStack_378 = &PTR_DAT_110b17898, plStack_368 != (long *)0x0)) {
      plVar44 = plStack_368 + 1;
      do {
        lVar32 = *plVar44;
        cVar9 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(plVar44,0x10);
        if (bVar21) {
          *plVar44 = lVar32 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar32 == 0) {
        (**(code **)(*plStack_368 + 0x10))(plStack_368);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
      return plVar13;
    }
    ___stack_chk_fail();
  }
  else {
    lVar37 = *(long *)(lVar32 + 0x18);
    lVar32 = *(long *)(lVar32 + 0x20);
    bVar4 = bVar22 ^ 1;
    if (lVar32 == lVar37) {
      bVar4 = 1;
    }
    if (bVar4 != 0) {
LAB_10a664968:
      if ((lVar32 == lVar37) || (*(long *)(lVar51 + 0x390) == *(long *)(lVar51 + 0x398))) {
        lVar32 = *plVar13;
        *plVar13 = 0;
        if (lVar32 != 0) {
          FUN_10a67f39c();
        }
        goto LAB_10a66499c;
      }
      plVar13 = (long *)0x1;
      goto LAB_10a6649ac;
    }
    plVar44 = (long *)(lVar51 + 0x3a8);
    lVar26 = *(long *)(lVar51 + 0x3a8);
    if (lVar26 == 0) {
      plVar20 = &uStack_2c0;
      FUN_10a0d0194(&puStack_310);
      if ((undefined8 *)*plVar44 != puStack_310) {
        func_0x00010a19b5ac(plVar44,&puStack_310);
        plVar46 = &uStack_2c0;
        func_0x00010a1bd170();
        lVar26 = -0x3a8;
        if (cRam00000001137eb72e == '\0') {
          lVar26 = -0xffff;
        }
        lVar26 = (long)plVar44 + lVar26;
        if ((*(ushort *)(lVar26 + 0xe9) >> 8 & 1) == 0) {
          if ((((*(long *)(lVar26 + 0xc0) != 0) || ((*(ushort *)(lVar26 + 0xe9) >> 9 & 1) != 0)) ||
              (*(long *)(lVar26 + 0xe0) != 0)) || ((*(ushort *)(lVar26 + 0x30) >> 8 & 1) == 0)) {
LAB_10a663fa8:
            plVar20 = &uStack_2c0;
            func_0x00010a1bd170();
            if (((ulong)plVar20 & 1) == 0) {
              uStack_288 = 0;
              uStack_290 = 0;
              uStack_278 = 0;
              lStack_280 = 0;
              uStack_2a8 = (undefined8 *)0x0;
              uStack_2b0 = 0;
              lStack_298 = 0;
              puStack_2a0 = (undefined8 *)0x0;
              uStack_2b8 = (long *)0x0;
              uStack_2c0 = (undefined8 ****)0x0;
              ppcStack_150 = (code **)&PTR_DAT_110c06b58;
              FUN_10a0dad0c((ulong)&uStack_2c0 | 8,&ppcStack_150);
              lVar26 = -0x3a8;
              if (cRam00000001137eb72e == '\0') {
                lVar26 = -0xffff;
              }
              iVar30 = (int)plVar44 + (int)lVar26;
              (**(code **)(*(long *)((long)plVar44 + lVar26) + 0x18))();
              lVar26 = -0x3a8;
              if (cRam00000001137eb72e == '\0') {
                lVar26 = -0xffff;
              }
              uVar25 = (long)plVar44 + lVar26;
              uVar23 = *(ushort *)(uVar25 + 0x30);
              if (iVar30 == 0) {
                if ((uVar23 >> 8 & 1) == 0) {
                  FUN_10a1bfe94(uVar25,&uStack_2c0);
                  if ((uVar25 & 1) == 0) {
                    lVar26 = -0x3a8;
                    if (cRam00000001137eb72e == '\0') {
                      lVar26 = -0xffff;
                    }
                    uVar25 = (long)plVar44 + lVar26;
                    (**(code **)(*(long *)((long)plVar44 + lVar26) + 0x10))(uVar25,&uStack_2c0);
                  }
                }
                else {
                  FUN_10a1bd5e0();
                  if (uVar25 != 0) {
                    FUN_10a1bd7d8();
                  }
                }
              }
              else {
                if ((uVar23 >> 7 & 1) == 0) {
                  *(undefined8 *****)(uVar25 + 0x40) = uStack_2c0;
                  *(ushort *)(uVar25 + 0x30) = uVar23 | 0x80;
                }
                uVar25 = uVar25 + 0x40;
                FUN_10a1bd398(uVar25,&uStack_2c0);
              }
              uVar23 = 0x3a8;
              if (cRam00000001137eb72e == '\0') {
                uVar23 = 0xffff;
              }
              lVar26 = 0x3a8;
              if (cRam00000001137eb72e == '\0') {
                lVar26 = 0xffff;
              }
              if ((*(ushort *)((long)plVar44 + (0xe9 - lVar26)) >> 8 & 1) != 0) {
                FUN_10a1bd5e0();
                uVar23 = 0x3a8;
                if (cRam00000001137eb72e == '\0') {
                  uVar23 = 0xffff;
                }
                if (uVar25 != 0) {
                  FUN_10a1bd648();
                  uVar23 = 0x3a8;
                  if (cRam00000001137eb72e == '\0') {
                    uVar23 = 0xffff;
                  }
                }
              }
              plVar20 = (long *)((long)plVar44 + (0x90 - (ulong)uVar23));
              FUN_10a1c054c(plVar20,&uStack_2c0);
            }
            goto LAB_10a6642e0;
          }
          *(long *)(lVar26 + 0xa0) = *(long *)(lVar26 + 0xa0) + 1;
        }
        else if ((*(ushort *)(lVar26 + 0x30) >> 8 & 1) == 0) goto LAB_10a663fa8;
        ppuVar50 = *(undefined ***)(lVar26 + 0xf0);
        ppuVar49 = *(undefined ***)(lVar26 + 0x38);
        if (((ppuVar50 != &PTR_DAT_110c06b58) || (plVar20 = plVar46, ppuVar49 != &PTR_DAT_110c06b58)
            ) && (FUN_10a1bd5e0(), plVar20 = plVar46, plVar46 != (long *)0x0)) {
          if (ppuVar50 != &PTR_DAT_110c06b58) {
            FUN_10a1bd648(plVar46,lVar26 + 0x90,&PTR_DAT_110c06b58);
            *(undefined ***)(lVar26 + 0xf0) = &PTR_DAT_110c06b58;
          }
          if (ppuVar49 != &PTR_DAT_110c06b58) {
            FUN_10a1bd7d8(plVar46,lVar26,&PTR_DAT_110c06b58);
            *(undefined ***)(lVar26 + 0x38) = &PTR_DAT_110c06b58;
            plVar20 = plVar46;
          }
        }
      }
LAB_10a6642e0:
      plVar46 = plStack_308;
      if (plStack_308 != (long *)0x0) {
        plVar1 = plStack_308 + 1;
        do {
          lVar26 = *plVar1;
          cVar9 = '\x01';
          bVar21 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar21) {
            *plVar1 = lVar26 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar26 == 0) {
          (**(code **)(*plStack_308 + 0x10))(plStack_308);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar20 = plVar46;
        }
      }
      FUN_10ab6e728();
      if (*(char *)((long)plVar20 + 0x17) < '\0') {
        plVar46 = &uStack_2c0;
        func_0x000107c3192c(plVar46,*plVar20,plVar20[1]);
      }
      else {
        uStack_2b0 = plVar20[2];
        uStack_2b8 = (long *)plVar20[1];
        uStack_2c0 = (undefined8 ****)*plVar20;
        plVar46 = plVar20;
      }
      uStack_2a8 = (undefined8 *)plVar20[3];
      lStack_298 = plVar20[5];
      puStack_2a0 = (undefined8 *)plVar20[4];
      uStack_290 = CONCAT44(uStack_290._4_4_,(int)plVar20[6]);
      FUN_10ab6f020();
      if (*(char *)((long)plVar46 + 0x17) < '\0') {
        func_0x000107c3192c(&uStack_288,*plVar46,plVar46[1]);
      }
      else {
        uStack_278 = plVar46[2];
        lStack_280 = plVar46[1];
        uStack_288 = *plVar46;
      }
      lStack_270 = plVar46[3];
      lStack_260 = plVar46[5];
      lStack_268 = plVar46[4];
      uStack_258 = (undefined4)plVar46[6];
      FUN_10ab6f520(&ppcStack_150,&uStack_2c0,2);
      lVar26 = *plVar44;
      *(undefined4 *)(lVar26 + 0xf0) = ppcStack_150._0_4_;
      if ((code ***)(lVar26 + 0xf0) != &ppcStack_150) {
        FUN_10a1903c4(lVar26 + 0xf8,ppuStack_148,lStack_140,
                      (lStack_140 - (long)ppuStack_148 >> 3) * 0x6db6db6db6db6db7);
      }
      *(undefined8 *)(lVar26 + 0x118) = uStack_128;
      *(undefined8 *)(lVar26 + 0x110) = uStack_130;
      *(undefined8 *)(lVar26 + 0x128) = uStack_118;
      *(undefined8 *)(lVar26 + 0x120) = uStack_120;
      *(undefined8 *)(lVar26 + 0x130) = uStack_110;
      pppuStack_2e0 = &ppuStack_148;
      func_0x00010a190844(&pppuStack_2e0);
      lVar26 = 0;
      do {
        if (*(char *)((long)&uStack_278 + lVar26 + 7) < '\0') {
          __ZdlPv(*(undefined8 *)((long)&uStack_288 + lVar26));
        }
        lVar26 = lVar26 + -0x38;
      } while (lVar26 != -0x70);
      *(undefined8 *)(*plVar44 + 0xe8) = 1;
      uStack_330 = 0;
      FUN_10a678318(&ppcStack_150,&uStack_2c0,&uStack_330,plVar44);
      plVar20 = (long *)(lVar51 + 0x3b8);
      if (*(code ***)(lVar51 + 0x3b8) != ppcStack_150) {
        func_0x00010a19a938(plVar20,&ppcStack_150);
        puVar18 = &uStack_2c0;
        func_0x00010a1bd170();
        lVar26 = -0x3b8;
        if (cRam00000001137eb730 == '\0') {
          lVar26 = -0xffff;
        }
        lVar26 = (long)plVar20 + lVar26;
        if ((*(ushort *)(lVar26 + 0xe9) >> 8 & 1) == 0) {
          if (((*(long *)(lVar26 + 0xc0) != 0) || ((*(ushort *)(lVar26 + 0xe9) >> 9 & 1) != 0)) ||
             ((*(long *)(lVar26 + 0xe0) != 0 || ((*(ushort *)(lVar26 + 0x30) >> 8 & 1) == 0)))) {
LAB_10a664504:
            uVar25 = 0;
            func_0x00010a1bd170();
            if ((uVar25 & 1) == 0) {
              uStack_288 = 0;
              uStack_290 = 0;
              uStack_278 = 0;
              lStack_280 = 0;
              uStack_2a8 = (undefined8 *)0x0;
              uStack_2b0 = 0;
              lStack_298 = 0;
              puStack_2a0 = (undefined8 *)0x0;
              uStack_2b8 = (long *)0x0;
              uStack_2c0 = (undefined8 ****)0x0;
              pppuStack_2e0 = (undefined ***)&PTR_DAT_110c06b70;
              FUN_10a0dad0c((ulong)&uStack_2c0 | 8,&pppuStack_2e0);
              lVar26 = -0x3b8;
              if (cRam00000001137eb730 == '\0') {
                lVar26 = -0xffff;
              }
              iVar30 = (int)plVar20 + (int)lVar26;
              (**(code **)(*(long *)((long)plVar20 + lVar26) + 0x18))();
              lVar26 = -0x3b8;
              if (cRam00000001137eb730 == '\0') {
                lVar26 = -0xffff;
              }
              uVar25 = (long)plVar20 + lVar26;
              uVar23 = *(ushort *)(uVar25 + 0x30);
              if (iVar30 == 0) {
                if ((uVar23 >> 8 & 1) == 0) {
                  FUN_10a1bfe94(uVar25,&uStack_2c0);
                  if ((uVar25 & 1) == 0) {
                    lVar26 = -0x3b8;
                    if (cRam00000001137eb730 == '\0') {
                      lVar26 = -0xffff;
                    }
                    uVar25 = (long)plVar20 + lVar26;
                    (**(code **)(*(long *)((long)plVar20 + lVar26) + 0x10))(uVar25,&uStack_2c0);
                  }
                }
                else {
                  FUN_10a1bd5e0();
                  if (uVar25 != 0) {
                    FUN_10a1bd7d8();
                  }
                }
              }
              else {
                if ((uVar23 >> 7 & 1) == 0) {
                  *(undefined8 *****)(uVar25 + 0x40) = uStack_2c0;
                  *(ushort *)(uVar25 + 0x30) = uVar23 | 0x80;
                }
                uVar25 = uVar25 + 0x40;
                FUN_10a1bd398(uVar25,&uStack_2c0);
              }
              uVar23 = 0x3b8;
              if (cRam00000001137eb730 == '\0') {
                uVar23 = 0xffff;
              }
              lVar26 = 0x3b8;
              if (cRam00000001137eb730 == '\0') {
                lVar26 = 0xffff;
              }
              if ((*(ushort *)((long)plVar20 + (0xe9 - lVar26)) >> 8 & 1) != 0) {
                FUN_10a1bd5e0();
                uVar23 = 0x3b8;
                if (cRam00000001137eb730 == '\0') {
                  uVar23 = 0xffff;
                }
                if (uVar25 != 0) {
                  FUN_10a1bd648();
                  uVar23 = 0x3b8;
                  if (cRam00000001137eb730 == '\0') {
                    uVar23 = 0xffff;
                  }
                }
              }
              FUN_10a1c054c((long)plVar20 + (0x90 - (ulong)uVar23),&uStack_2c0);
            }
            goto LAB_10a6646e4;
          }
          *(long *)(lVar26 + 0xa0) = *(long *)(lVar26 + 0xa0) + 1;
        }
        else if ((*(ushort *)(lVar26 + 0x30) >> 8 & 1) == 0) goto LAB_10a664504;
        ppuVar50 = *(undefined ***)(lVar26 + 0xf0);
        ppuVar49 = *(undefined ***)(lVar26 + 0x38);
        if ((ppuVar50 != &PTR_DAT_110c06b70 || ppuVar49 != &PTR_DAT_110c06b70) &&
           (FUN_10a1bd5e0(), puVar18 != (undefined8 *)0x0)) {
          if (ppuVar50 != &PTR_DAT_110c06b70) {
            FUN_10a1bd648(puVar18,lVar26 + 0x90,&PTR_DAT_110c06b70);
            *(undefined ***)(lVar26 + 0xf0) = &PTR_DAT_110c06b70;
          }
          if (ppuVar49 != &PTR_DAT_110c06b70) {
            FUN_10a1bd7d8(puVar18,lVar26,&PTR_DAT_110c06b70);
            *(undefined ***)(lVar26 + 0x38) = &PTR_DAT_110c06b70;
          }
        }
      }
LAB_10a6646e4:
      ppuVar49 = ppuStack_148;
      if (ppuStack_148 != (undefined **)0x0) {
        ppuVar50 = ppuStack_148 + 1;
        do {
          puVar35 = *ppuVar50;
          cVar9 = '\x01';
          bVar21 = (bool)ExclusiveMonitorPass(ppuVar50,0x10);
          if (bVar21) {
            *ppuVar50 = puVar35 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (puVar35 == (undefined *)0x0) {
          (**(code **)(*ppuStack_148 + 0x10))(ppuStack_148);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar49);
        }
      }
      plVar46 = (long *)*plVar20;
      if (*(char *)((long)plVar46 + 0xb9) != '\x01') {
        *(undefined1 *)((long)plVar46 + 0xb9) = 1;
        (**(code **)(*plVar46 + 0xa0))(plVar46);
        plVar46 = (long *)*plVar20;
      }
      if (*(char *)((long)plVar46 + 0xba) != '\x01') {
        *(undefined1 *)((long)plVar46 + 0xba) = 1;
        (**(code **)(*plVar46 + 0xa0))(plVar46);
        plVar46 = (long *)*plVar20;
      }
      FUN_10a6589d4(&uStack_2c0,plVar14[0x2e],plVar46,*(undefined8 *)(lVar51 + 0x3c0));
      FUN_10ab4a154(*plVar44,4);
      lVar26 = *plVar44;
      puVar18 = *(undefined8 **)(lVar26 + 0x28);
      uVar25 = *(long *)(lVar26 + 0x30) - (long)puVar18;
      if (uVar25 < 0xc) {
        func_0x000107c27d58((undefined8 *)(lVar26 + 0x28),0xc - uVar25);
        puVar18 = *(undefined8 **)(*plVar44 + 0x28);
      }
      else if (uVar25 != 0xc) {
        *(long *)(lVar26 + 0x30) = (long)puVar18 + 0xc;
      }
      plVar20 = uStack_2b8;
      *puVar18 = 0x200010000;
      *(undefined4 *)(puVar18 + 1) = 0x30002;
      if (uStack_2b8 != (long *)0x0) {
        plVar46 = uStack_2b8 + 1;
        do {
          lVar26 = *plVar46;
          cVar9 = '\x01';
          bVar21 = (bool)ExclusiveMonitorPass(plVar46,0x10);
          if (bVar21) {
            *plVar46 = lVar26 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar26 == 0) {
          (**(code **)(*uStack_2b8 + 0x10))(uStack_2b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
        }
      }
      lVar26 = *plVar44;
    }
    uVar31 = *(uint *)(lVar26 + 0x110);
    if (uVar31 == 0xffffffff) {
      lVar36 = 0;
LAB_10a664870:
      uVar31 = *(int *)(lVar36 + 0x24) - 1;
      if (uVar31 < 7) {
        iVar30 = *(int *)(&UNK_10e4d1d38 + (ulong)uVar31 * 4);
      }
      else {
        iVar30 = 0;
      }
      if (*(int *)(lVar36 + 0x28) * iVar30 == 0xc) {
        lVar36 = *(long *)(lVar26 + 0x10) + (ulong)*(uint *)(lVar36 + 0x30);
        uVar25 = (ulong)*(uint *)(lVar26 + 0xf0);
      }
      else {
        lVar36 = 0;
        uVar25 = 0;
      }
      lVar26 = 0;
      lVar42 = *(long *)(lVar51 + 0x388);
      fVar52 = *(float *)(lVar51 + 0x3c8);
      fVar54 = *(float *)(lVar42 + 0x30) / fVar52;
      fVar58 = *(float *)(lVar42 + 0x34) / fVar52;
      fVar61 = *(float *)(lVar42 + 0x38) / fVar52;
      uStack_2b8 = (long *)CONCAT44(fVar58,fVar61);
      uStack_2c0 = (undefined8 ****)CONCAT44(fVar58,fVar54);
      fVar52 = *(float *)(lVar42 + 0x3c) / fVar52;
      uStack_2a8 = (undefined8 *)CONCAT44(fVar52,fVar54);
      uStack_2b0 = CONCAT44(fVar52,fVar61);
      puVar40 = (undefined4 *)(lVar36 + 8);
      do {
        *(undefined8 *)(puVar40 + -2) = *(undefined8 *)((long)&uStack_2c0 + lVar26);
        *puVar40 = 0;
        puVar40 = (undefined4 *)((long)puVar40 + uVar25);
        lVar26 = lVar26 + 8;
      } while (lVar26 != 0x20);
      FUN_10ab4e0a4(*plVar44);
      FUN_10ac645fc(*(undefined8 *)(lVar51 + 0x3b8),plVar44);
      FUN_10a65fab8(lVar51,&bStack_37c,abStack_480,plVar14);
      goto LAB_10a664968;
    }
    uVar25 = (*(long *)(lVar26 + 0x100) - *(long *)(lVar26 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
    if (uVar31 <= uVar25 && uVar25 - uVar31 != 0) {
      lVar36 = *(long *)(lVar26 + 0xf8) + (ulong)uVar31 * 0x38;
      goto LAB_10a664870;
    }
  }
  FUN_10ab725fc();
LAB_10a664cec:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x10a664cf0);
  (*pcVar12)();
}



/* Entry: 10a662b58; end: 10a664f1f;  */

undefined1 FUN_10a662b58(undefined8 param_1,float param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  undefined4 uVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  char cVar9;
  int7 iVar10;
  code *pcVar11;
  long lVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  code ***pppcVar15;
  undefined8 *puVar16;
  undefined8 **ppuVar17;
  long *plVar18;
  long lVar19;
  bool bVar20;
  byte bVar21;
  ushort uVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  undefined8 uVar26;
  ulong uVar27;
  long *plVar28;
  float *pfVar29;
  int iVar30;
  uint uVar31;
  float *pfVar32;
  undefined *puVar33;
  long lVar34;
  ulong uVar35;
  float *pfVar36;
  undefined4 *puVar37;
  long lVar38;
  ulong uVar39;
  long *plVar40;
  int *piVar41;
  long *plVar42;
  undefined8 unaff_x19;
  undefined8 *puVar43;
  undefined **ppuVar44;
  undefined8 unaff_x21;
  undefined **ppuVar45;
  undefined1 uVar46;
  ulong uVar47;
  long lVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined8 uStack_440;
  long *plStack_438;
  undefined8 ***pppuStack_430;
  long *plStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  byte abStack_410 [8];
  undefined8 ***pppuStack_408;
  ulong uStack_400;
  byte bStack_3f1;
  undefined8 ***pppuStack_3f0;
  undefined8 uStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  undefined2 uStack_3d0;
  undefined2 uStack_3ce;
  float fStack_3cc;
  undefined1 uStack_3c8;
  undefined1 uStack_3c7;
  undefined2 uStack_3c6;
  uint uStack_3c4;
  byte bStack_3c0;
  byte bStack_3bf;
  undefined8 ***pppuStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  uint uStack_3a0;
  int iStack_39c;
  uint uStack_398;
  char cStack_394;
  char cStack_393;
  undefined2 uStack_392;
  float fStack_390;
  float fStack_38c;
  float fStack_388;
  char cStack_384;
  undefined **ppuStack_380;
  undefined8 uStack_378;
  long *plStack_370;
  undefined **ppuStack_368;
  undefined1 uStack_360;
  undefined8 uStack_35c;
  undefined8 uStack_354;
  undefined **ppuStack_348;
  undefined8 uStack_340;
  long *plStack_338;
  undefined **ppuStack_330;
  undefined1 uStack_328;
  undefined8 uStack_324;
  undefined8 uStack_31c;
  byte bStack_30c;
  undefined2 uStack_30b;
  undefined1 uStack_309;
  undefined **ppuStack_308;
  undefined8 uStack_300;
  long *plStack_2f8;
  undefined **ppuStack_2f0;
  undefined1 uStack_2e8;
  undefined8 uStack_2e4;
  undefined8 uStack_2dc;
  char cStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined8 ***pppuStack_2a8;
  undefined8 *puStack_2a0;
  long *plStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined4 uStack_280;
  undefined1 uStack_271;
  undefined ***pppuStack_270;
  byte *pbStack_268;
  long *plStack_260;
  undefined ****ppppuStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 *puStack_230;
  long lStack_228;
  ulong uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined4 uStack_1e8;
  undefined1 auStack_1d0 [40];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined8 uStack_158;
  undefined7 uStack_150;
  undefined1 uStack_149;
  undefined1 auStack_148 [40];
  code *pcStack_120;
  undefined **ppuStack_118;
  long lStack_110;
  undefined1 uStack_108;
  code **ppcStack_e0;
  undefined **ppuStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_2c8 = *(long *)(*(long *)(param_3 + 0x170) + 0xa90);
  lVar24 = *(long *)(*(long *)(param_3 + 0x170) + 0xa20);
  lVar48 = *(long *)(param_3 + 0x638);
  ppuStack_308 = (undefined **)((ulong)ppuStack_308 & 0xffffffffffffff00);
  cStack_2d0 = '\0';
  lVar12 = *(long *)(*(long *)(param_3 + 0x168) + 0x248);
  if ((lVar12 == 0) || ((*(ushort *)(lVar12 + 0x180) & 0x17) != 0)) {
    bVar20 = false;
  }
  else {
    FUN_10a394a64();
    uStack_2e8 = 0;
    ppuStack_308 = &PTR_FUN_110c6a8d8;
    uStack_300 = 0;
    plStack_2f8 = (long *)0x0;
    ppuStack_2f0 = &PTR_FUN_110c6a940;
    unaff_x21 = *(undefined8 *)(lVar12 + 0x28c);
    unaff_x19 = *(undefined8 *)(lVar12 + 0x294);
    bVar20 = true;
    cStack_2d0 = '\x01';
    uStack_2e4 = unaff_x21;
    uStack_2dc = unaff_x19;
  }
  bStack_30c = 0;
  uStack_309 = 0;
  if ((((*(long **)(param_3 + 0x2a0) != *(long **)(param_3 + 0x2a8)) &&
       (lVar12 = **(long **)(param_3 + 0x2a0), lVar12 != 0)) &&
      (*(long **)(lVar12 + 0x228) != *(long **)(lVar12 + 0x230))) &&
     (lVar12 = **(long **)(lVar12 + 0x228), lVar12 != 0)) {
    uStack_309 = 1;
    uVar31 = *(uint *)(lVar12 + 0x21e);
    bStack_30c = (byte)(uVar31 >> 7) & 0xfe | (byte)uVar31 |
                 (byte)(uVar31 >> 0xe) & 0xfc | (byte)(uVar31 >> 0x15) & 0xf8;
    uStack_30b = *(undefined2 *)(lVar12 + 0x219);
  }
  abStack_410[0] = 0;
  func_0x000107c2b054(&pppuStack_408,&UNK_10f66a659);
  pppuStack_3f0 = (undefined8 ****)0x0;
  uStack_3e8 = (long *)((ulong)uStack_3e8._4_4_ << 0x20);
  uStack_3c4 = uStack_3c4 & 0xffffff00;
  bStack_3c0 = 0;
  bStack_3bf = 0;
  uStack_398 = 0;
  iStack_39c = 0;
  lStack_3e0 = 0;
  uStack_3c8 = 0;
  uStack_3b0 = 0;
  uStack_3a8 = 0;
  pppuStack_3b8 = (undefined8 ****)0x0;
  uStack_3a0 = uStack_3a0 & 0xffffff00;
  cStack_394 = '\x01';
  cStack_393 = '\x01';
  fStack_390 = 0.0;
  fStack_38c = 1.0;
  fStack_388 = 0.4;
  cStack_384 = '\x02';
  uStack_360 = 0;
  ppuStack_380 = &PTR_FUN_110c6a8d8;
  uStack_378 = 0;
  plStack_370 = (long *)0x0;
  ppuStack_368 = &PTR_FUN_110c6a940;
  uStack_35c = 0;
  uStack_354 = 0;
  uStack_328 = 0;
  ppuStack_348 = &PTR_FUN_110c6a8d8;
  uStack_340 = 0;
  plStack_338 = (long *)0x0;
  ppuStack_330 = &PTR_FUN_110c6a940;
  uStack_31c = 0;
  uStack_324 = 0;
  lStack_3d8 = *(long *)(*(long *)(*(long *)(param_3 + 0x170) + 0x900) + 0xa0);
  uStack_3d0 = 0;
  uStack_3ce = 0;
  fStack_3cc = 0.0;
  FUN_10a1c462c(&uStack_250,param_3 + 0x680,param_3 + 0x5a0);
  if ((char)bStack_3f1 < '\0') {
    __ZdlPv(pppuStack_408);
  }
  uStack_400 = (ulong)uStack_248;
  pppuStack_408 = uStack_250;
  bStack_3f1 = uStack_240._7_1_;
  uStack_250 = (undefined8 ****)0x0;
  uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
  uStack_240 = 0;
  pcStack_120 = (code *)&uStack_250;
  if (*(uint *)(param_3 + 0x5c8) == 0xffffffff) {
    FUN_10a0d459c();
    goto LAB_10a664cec;
  }
  ppcStack_e0 = &pcStack_120;
  (*(code *)(&PTR_DAT_110c06c48)[*(uint *)(param_3 + 0x5c8)])(&ppcStack_e0,param_3 + 0x5b8);
  uStack_3e8 = uStack_248;
  pppuStack_3f0 = uStack_250;
  lStack_3e0 = uStack_240;
  uVar5 = *(undefined4 *)(param_3 + 0x5d0);
  uStack_3c8 = (undefined1)uVar5;
  uStack_3c7 = (undefined1)((uint)uVar5 >> 8);
  uStack_3c6 = (undefined2)((uint)uVar5 >> 0x10);
  uStack_3c4 = CONCAT31(uStack_3c4._1_3_,*(undefined1 *)(param_3 + 0x5d4));
  bStack_3c0 = (byte)*(undefined2 *)(param_3 + 0x5d8);
  bStack_3bf = (byte)((ushort)*(undefined2 *)(param_3 + 0x5d8) >> 8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (&pppuStack_3b8,param_3 + 0x5e0);
  uStack_3a0 = CONCAT31(uStack_3a0._1_3_,*(undefined1 *)(param_3 + 0x5f8));
  fStack_3cc = *(float *)(param_3 + 0x5fc);
  fVar49 = fStack_3cc;
  FUN_10a65f27c(param_3);
  uStack_3d0 = SUB42(fVar49,0);
  uStack_3ce = (undefined2)((uint)fVar49 >> 0x10);
  fStack_390 = (float)*(undefined8 *)(param_3 + 0x614);
  fStack_38c = (float)((ulong)*(undefined8 *)(param_3 + 0x614) >> 0x20);
  fStack_388 = *(float *)(param_3 + 0x600);
  cStack_384 = *(char *)(param_3 + 0x604);
  iStack_39c = (int)*(undefined8 *)(param_3 + 0x608);
  uStack_398 = (uint)((ulong)*(undefined8 *)(param_3 + 0x608) >> 0x20);
  cStack_394 = *(char *)(param_3 + 0x30a);
  cStack_393 = *(char *)(param_3 + 0x309);
  uStack_324 = *(undefined8 *)(*(long *)(param_3 + 0x620) + 0x24);
  uStack_31c = *(undefined8 *)(*(long *)(param_3 + 0x620) + 0x2c);
  abStack_410[0] =
       abStack_410[0] & 0xfc | *(byte *)(param_3 + 0x610) | *(char *)(param_3 + 0x61c) << 1;
  *(ushort *)(lVar48 + 0xe9) =
       *(ushort *)(lVar48 + 0xe9) & 0xff80 | *(ushort *)(lVar48 + 0xe9) + 1 & 0x7f;
  *(ushort *)(lVar48 + 0x30) =
       *(ushort *)(lVar48 + 0x30) & 0xff80 | *(ushort *)(lVar48 + 0x30) + 1 & 0x7f;
  uStack_108 = 0;
  pcStack_120 = FUN_10a1d3648;
  ppuStack_118 = &PTR_FUN_110bad818;
  uStack_354 = unaff_x19;
  uStack_35c = unaff_x21;
  if (!bVar20) {
    uStack_354 = uStack_31c;
    uStack_35c = uStack_324;
  }
  uVar47 = uStack_400;
  if (-1 < (char)bStack_3f1) {
    uVar47 = (ulong)bStack_3f1;
  }
  bVar21 = *(byte *)(lVar48 + 0x177);
  uVar25 = *(ulong *)(lVar48 + 0x168);
  if (-1 < (char)bVar21) {
    uVar25 = (ulong)bVar21;
  }
  lStack_110 = lVar48;
  if (uVar47 == uVar25) {
    ppppuVar13 = (undefined8 ****)pppuStack_408;
    if (-1 < (char)bStack_3f1) {
      ppppuVar13 = &pppuStack_408;
    }
    lVar12 = *(long *)(lVar48 + 0x160);
    if (-1 < (char)bVar21) {
      lVar12 = lVar48 + 0x160;
    }
    _memcmp(ppppuVar13,lVar12);
    if ((int)ppppuVar13 != 0) goto LAB_10a662f54;
    ppppuVar13 = &pppuStack_3f0;
    func_0x00010a66d1cc(ppppuVar13,lVar48 + 0x178);
    if ((((int)ppppuVar13 == 0) || (lStack_3d8 != *(long *)(lVar48 + 400))) ||
       ((param_2 = *(float *)(lVar48 + 0x198), (float)CONCAT22(uStack_3ce,uStack_3d0) != param_2 ||
        (((uStack_398 & 0xfffffffe) == 4 && ((*(uint *)(lVar48 + 0x1d0) & 0xfffffffe) != 4))))))
    goto LAB_10a662f54;
    uVar23 = uStack_3c4 & 0xff;
    uVar31 = (uint)*(byte *)(lVar48 + 0x1a4);
    if ((*(byte *)(lVar48 + 0x1a4) & (byte)uStack_3c4) != 0) {
      uVar23 = CONCAT22(uStack_3c6,CONCAT11(uStack_3c7,uStack_3c8));
      uVar31 = *(uint *)(lVar48 + 0x1a0);
    }
    if (uVar23 != uVar31) goto LAB_10a662f54;
    bVar7 = *(byte *)(lVar48 + 0x1a9);
    bVar21 = bStack_3bf;
    if ((bVar7 & bStack_3bf) != 0) {
      bVar7 = *(byte *)(lVar48 + 0x1a8);
      bVar21 = bStack_3c0;
    }
    if (((bVar21 != bVar7) ||
        (ppppuVar13 = &pppuStack_3b8, FUN_10a0a4dc8(&pppuStack_3b8,lVar48 + 0x1b0),
        ((ulong)ppppuVar13 & 1) == 0)) || ((uStack_3a0 & 0xff) != (uint)*(byte *)(lVar48 + 0x1c8)))
    goto LAB_10a662f54;
    bVar21 = *(byte *)(lVar48 + 0x158) ^ abStack_410[0];
    if ((((bVar21 & 1) != 0) ||
        (param_2 = ABS(fStack_390 - *(float *)(lVar48 + 0x1d8)), 1e-06 <= param_2)) ||
       ((param_2 = ABS(fStack_38c - *(float *)(lVar48 + 0x1dc)), 1e-06 <= param_2 ||
        (iStack_39c != *(int *)(lVar48 + 0x1cc))))) {
      bVar20 = false;
      goto LAB_10a662f58;
    }
    if (((uStack_398 == *(uint *)(lVar48 + 0x1d0)) && (cStack_394 == *(char *)(lVar48 + 0x1d4))) &&
       (cStack_393 == *(char *)(lVar48 + 0x1d5))) {
      lVar12 = lVar48 + 0x1e8;
      func_0x00010acae644(lVar12,&ppuStack_380);
      if ((int)lVar12 == 0) goto LAB_10a664cb0;
      param_2 = *(float *)(lVar48 + 0x1e0);
      if ((fStack_388 == param_2) && (cStack_384 == *(char *)(lVar48 + 0x1e4))) {
        bVar7 = 0;
        bVar21 = bVar21 >> 1 & 1;
      }
      else {
        bVar7 = 0;
        bVar21 = 1;
      }
    }
    else {
LAB_10a664cb0:
      bVar21 = 1;
      bVar7 = 1;
    }
    bVar20 = false;
  }
  else {
LAB_10a662f54:
    bVar20 = true;
LAB_10a662f58:
    bVar7 = 1;
    bVar21 = 1;
  }
  uVar47 = (long)(char)bStack_3f1;
  ppppuVar13 = &pppuStack_408;
  if (((long)(char)bStack_3f1 < 0) &&
     (uVar47 = uStack_400, ppppuVar13 = (undefined8 ****)pppuStack_408, 10000 < uStack_400)) {
    uVar47 = 10000;
    do {
      if (-0x41 < *(char *)((long)pppuStack_408 + uVar47)) {
        if ((long)uVar47 < 0) goto LAB_10a664cec;
        break;
      }
      uVar47 = uVar47 - 1;
    } while (uVar47 != 0);
  }
  if ((*(char *)(lVar48 + 0x435) == '\x01') &&
     (bVar6 = *(byte *)(lVar48 + 0x434), (uint)bVar6 == (uStack_3a0 & 0xff))) {
    uVar25 = (ulong)*(char *)(lVar48 + 0x3ff);
    if ((long)uVar25 < 0) {
      lVar12 = *(long *)(lVar48 + 1000);
      uVar25 = *(ulong *)(lVar48 + 0x3f0);
    }
    else {
      lVar12 = lVar48 + 1000;
    }
    if ((uVar47 != uVar25) ||
       (ppppuVar14 = ppppuVar13, _memcmp(ppppuVar13,lVar12,uVar47), (int)ppppuVar14 != 0))
    goto LAB_10a662ff4;
    if (((*(byte *)(lVar48 + 0x436) & 1) == 0) ||
       (param_2 = *(float *)(lVar48 + 0x430), param_2 != fStack_3cc)) goto LAB_10a663078;
  }
  else {
LAB_10a662ff4:
    lVar12 = lVar48 + 1000;
    func_0x000107c2c4d8(lVar12,ppppuVar13,uVar47);
    lVar19 = (long)*(char *)(lVar48 + 0x3ff);
    if (lVar19 < 0) {
      lVar12 = *(long *)(lVar48 + 1000);
      lVar19 = *(long *)(lVar48 + 0x3f0);
    }
    FUN_10a1c0bf8(&uStack_250,lVar12,lVar19,(byte)uStack_3a0);
    func_0x00010a66d31c(lVar48 + 0x400);
    *(long **)(lVar48 + 0x408) = uStack_248;
    *(undefined8 *****)(lVar48 + 0x400) = uStack_250;
    *(long *)(lVar48 + 0x410) = uStack_240;
    uStack_240 = 0;
    uStack_248 = (long *)0x0;
    uStack_250 = (undefined8 ****)0x0;
    ppcStack_e0 = (code **)&uStack_250;
    FUN_10a1cd268(&ppcStack_e0);
    *(byte *)(lVar48 + 0x434) = (byte)uStack_3a0;
    *(undefined2 *)(lVar48 + 0x435) = 1;
    bVar6 = (byte)uStack_3a0;
LAB_10a663078:
    FUN_10a657c70(fStack_3cc,&uStack_250,lVar48 + 0x400,bVar6 & 1);
    plVar28 = (long *)(lVar48 + 0x418);
    if (*plVar28 != 0) {
      *(long *)(lVar48 + 0x420) = *plVar28;
      __ZdlPv();
      *plVar28 = 0;
      *(undefined8 *)(lVar48 + 0x420) = 0;
      *(undefined8 *)(lVar48 + 0x428) = 0;
    }
    *(long **)(lVar48 + 0x420) = uStack_248;
    *plVar28 = (long)uStack_250;
    *(long *)(lVar48 + 0x428) = uStack_240;
    *(float *)(lVar48 + 0x430) = fStack_3cc;
    *(undefined1 *)(lVar48 + 0x436) = 1;
  }
  if ((bVar7 == 0) || (*(long *)(lVar48 + 0x388) == 0)) {
    if (bVar20) goto LAB_10a663108;
    bVar6 = 0;
    fVar49 = fStack_3cc;
LAB_10a663380:
    if (bVar7 != 0) goto LAB_10a663388;
  }
  else {
    fVar49 = ABS(*(float *)(*(long *)(lVar48 + 0x388) + 0x10) + -1.0);
    param_2 = 1e-06;
    if (1e-06 <= fVar49) {
      bVar20 = true;
    }
    if (bVar20) {
LAB_10a663108:
      uVar47 = uStack_3b0;
      ppppuVar13 = (undefined8 ****)pppuStack_3b8;
      if (-1 < (long)uStack_3a8) {
        uVar47 = uStack_3a8 >> 0x38;
        ppppuVar13 = &pppuStack_3b8;
      }
      FUN_10a9e2380(&uStack_250,*(undefined8 *)(lStack_2c8 + 0x18),lVar48 + 0x400,lVar48 + 0x418,
                    &pppuStack_3f0,
                    CONCAT44(uStack_3c4,CONCAT22(uStack_3c6,CONCAT11(uStack_3c7,uStack_3c8))),
                    CONCAT11(bStack_3bf,bStack_3c0),ppppuVar13,uVar47);
      func_0x00010a66d3b8(lVar48 + 600);
      *(long **)(lVar48 + 0x260) = uStack_248;
      *(undefined8 *****)(lVar48 + 600) = uStack_250;
      *(long *)(lVar48 + 0x268) = uStack_240;
      uStack_250 = (undefined8 ****)0x0;
      uStack_248 = (long *)0x0;
      uStack_240 = 0;
      plVar28 = (long *)(lVar48 + 0x270);
      if (*(long *)(lVar48 + 0x288) != 0) {
        func_0x00010a283f20(plVar28,*(undefined8 *)(lVar48 + 0x280));
        *(undefined8 *)(lVar48 + 0x280) = 0;
        lVar12 = *(long *)(lVar48 + 0x278);
        if (lVar12 != 0) {
          lVar19 = 0;
          do {
            *(undefined8 *)(*plVar28 + lVar19 * 8) = 0;
            lVar19 = lVar19 + 1;
          } while (lVar12 != lVar19);
        }
        *(undefined8 *)(lVar48 + 0x288) = 0;
      }
      puVar16 = uStack_238;
      uStack_238 = (undefined8 *)0x0;
      lVar12 = *plVar28;
      *plVar28 = (long)puVar16;
      if (lVar12 != 0) {
        __ZdlPv();
      }
      puVar16 = puStack_230;
      *(undefined8 **)(lVar48 + 0x278) = puStack_230;
      puStack_230 = (undefined8 *)0x0;
      *(ulong *)(lVar48 + 0x288) = uStack_220;
      *(undefined4 *)(lVar48 + 0x290) = (undefined4)uStack_218;
      *(long *)(lVar48 + 0x280) = lStack_228;
      if (uStack_220 != 0) {
        puVar43 = *(undefined8 **)(lStack_228 + 8);
        if (((ulong)puVar16 & (long)puVar16 - 1U) == 0) {
          puVar43 = (undefined8 *)((ulong)puVar43 & (long)puVar16 - 1U);
        }
        else if (puVar16 <= puVar43) {
          uVar47 = 0;
          if (puVar16 != (undefined8 *)0x0) {
            uVar47 = (ulong)puVar43 / (ulong)puVar16;
          }
          puVar43 = (undefined8 *)((long)puVar43 - uVar47 * (long)puVar16);
        }
        *(long *)(*plVar28 + (long)puVar43 * 8) = lVar48 + 0x280;
        lStack_228 = 0;
        uStack_220 = 0;
      }
      plVar28 = (long *)(lVar48 + 0x298);
      if (*plVar28 != 0) {
        *(long *)(lVar48 + 0x2a0) = *plVar28;
        __ZdlPv();
        *plVar28 = 0;
        *(undefined8 *)(lVar48 + 0x2a0) = 0;
        *(undefined8 *)(lVar48 + 0x2a8) = 0;
      }
      *(long *)(lVar48 + 0x2a0) = uStack_208;
      *plVar28 = lStack_210;
      *(long *)(lVar48 + 0x2a8) = lStack_200;
      lStack_210 = 0;
      uStack_208 = 0;
      lStack_200 = 0;
      func_0x00010a66d440(lVar48 + 0x2b0,&lStack_1f8);
      func_0x00010a66d518(lVar48 + 0x2d8,auStack_1d0);
      if (*(long *)(lVar48 + 0x300) != 0) {
        *(long *)(lVar48 + 0x308) = *(long *)(lVar48 + 0x300);
        __ZdlPv();
        *(undefined8 *)(lVar48 + 0x300) = 0;
        *(undefined8 *)(lVar48 + 0x308) = 0;
        *(undefined8 *)(lVar48 + 0x310) = 0;
      }
      *(undefined8 *)(lVar48 + 0x308) = uStack_1a0;
      *(undefined8 *)(lVar48 + 0x300) = uStack_1a8;
      *(undefined8 *)(lVar48 + 0x310) = uStack_198;
      uStack_1a0 = 0;
      uStack_198 = 0;
      uStack_1a8 = 0;
      func_0x00010937d1e4((undefined8 *)(lVar48 + 0x318));
      *(undefined8 *)(lVar48 + 800) = uStack_188;
      *(undefined8 *)(lVar48 + 0x318) = uStack_190;
      *(undefined8 *)(lVar48 + 0x328) = uStack_180;
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_180 = 0;
      if (*(long *)(lVar48 + 0x330) != 0) {
        *(long *)(lVar48 + 0x338) = *(long *)(lVar48 + 0x330);
        __ZdlPv();
        *(undefined8 *)(lVar48 + 0x330) = 0;
        *(undefined8 *)(lVar48 + 0x338) = 0;
        *(undefined8 *)(lVar48 + 0x340) = 0;
      }
      *(undefined8 *)(lVar48 + 0x338) = uStack_170;
      *(undefined8 *)(lVar48 + 0x330) = uStack_178;
      *(undefined8 *)(lVar48 + 0x340) = uStack_168;
      uStack_170 = 0;
      uStack_168 = 0;
      uStack_178 = 0;
      if (*(char *)(lVar48 + 0x35f) < '\0') {
        __ZdlPv(*(undefined8 *)(lVar48 + 0x348));
      }
      *(undefined8 *)(lVar48 + 0x350) = uStack_158;
      *(undefined8 *)(lVar48 + 0x348) = CONCAT71(uStack_15f,uStack_160);
      *(ulong *)(lVar48 + 0x358) = CONCAT17(uStack_149,uStack_150);
      uStack_149 = 0;
      uStack_160 = 0;
      func_0x000107c283f0(lVar48 + 0x360,auStack_148);
      func_0x00010a283e44(&uStack_250);
      param_2 = 4388.572;
      fVar49 = 4388.572 / (float)CONCAT22(uStack_3ce,uStack_3d0);
      *(float *)(lVar48 + 0x3c8) = fVar49;
      bVar6 = 1;
      goto LAB_10a663380;
    }
    bVar6 = 0;
LAB_10a663388:
    func_0x00010acae698(&ppuStack_380);
    fVar51 = uStack_35c._4_4_;
    fVar53 = (float)uStack_35c;
    fVar49 = fVar53 + fVar49;
    param_2 = uStack_35c._4_4_ + param_2;
    uVar26 = uStack_35c;
    fVar52 = param_2;
    if (cStack_2d0 == '\x01') {
      fVar50 = fVar49;
      func_0x00010acae6ac(&ppuStack_380);
      uVar26 = CONCAT44(fVar51 - fVar52,fVar53 - fVar50);
      fVar49 = fVar49 - fVar50;
      param_2 = param_2 - fVar52;
    }
    fVar51 = *(float *)(lVar48 + 0x3c8);
    uVar26 = CONCAT44((float)((ulong)uVar26 >> 0x20) * fVar51,(float)uVar26 * fVar51);
    uStack_418 = CONCAT44(param_2 * fVar51,fVar49 * fVar51);
    uVar47 = uStack_3b0;
    ppppuVar13 = (undefined8 ****)pppuStack_3b8;
    if (-1 < (long)uStack_3a8) {
      uVar47 = uStack_3a8 >> 0x38;
      ppppuVar13 = &pppuStack_3b8;
    }
    uStack_420 = uVar26;
    FUN_10a9e8ce0(lStack_2c8,&pppuStack_3f0,
                  CONCAT44(uStack_3c4,CONCAT22(uStack_3c6,CONCAT11(uStack_3c7,uStack_3c8))),
                  CONCAT11(bStack_3bf,bStack_3c0),ppppuVar13,uVar47,100);
    fVar51 = fStack_38c;
    fVar49 = fStack_390;
    cVar9 = cStack_393;
    cVar8 = cStack_394;
    uVar31 = uStack_398;
    iVar30 = iStack_39c;
    bVar4 = abStack_410[0];
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    lStack_d0 = 0;
    ppcStack_e0 = (code **)FUN_10a67efcc;
    ppuStack_d8 = &PTR_DAT_110950c70;
    pbStack_268 = abStack_410;
    pppuStack_270 = (undefined ***)&PTR_FUN_110c07950;
    plStack_260 = &lStack_2c8;
    ppppuStack_258 = &pppuStack_270;
    pppcVar15 = (code ***)(lVar48 + 600);
    FUN_10a67ed7c(fStack_390,fStack_38c,&lStack_2b0,&uStack_420,pppcVar15,abStack_410[0] & 1,
                  uStack_398,iStack_39c,&pppuStack_270,lVar24,0);
    lVar12 = lStack_2b0;
    if (*(long *)(lStack_2b0 + 0x10) == 0) {
      puVar16 = (undefined8 *)0xb0;
      __Znwm();
      *(undefined8 *)((long)puVar16 + 0x2c) = 0;
      *(undefined8 *)((long)puVar16 + 0x24) = 0;
      *(undefined8 *)((long)puVar16 + 0x1c) = 0;
      *(undefined8 *)((long)puVar16 + 0x14) = 0;
      *(undefined8 *)((long)puVar16 + 0x3c) = 0;
      *(undefined8 *)((long)puVar16 + 0x34) = 0;
      *(undefined8 *)((long)puVar16 + 0x4c) = 0;
      *(undefined8 *)((long)puVar16 + 0x44) = 0;
      *(undefined8 *)((long)puVar16 + 0x5c) = 0;
      *(undefined8 *)((long)puVar16 + 0x54) = 0;
      *(undefined8 *)((long)puVar16 + 0x6c) = 0;
      *(undefined8 *)((long)puVar16 + 100) = 0;
      *(undefined8 *)((long)puVar16 + 0x7c) = 0;
      *(undefined8 *)((long)puVar16 + 0x74) = 0;
      *(undefined8 *)((long)puVar16 + 0x8c) = 0;
      *(undefined8 *)((long)puVar16 + 0x84) = 0;
      *(undefined4 *)(puVar16 + 2) = 0x3f800000;
      puVar16[4] = 0;
      puVar16[3] = 0;
      puVar16[6] = 0;
      puVar16[5] = 0;
      puVar16[8] = 0;
      puVar16[7] = 0;
      puVar16[10] = 0;
      puVar16[9] = 0;
      puVar16[0xc] = 0;
      puVar16[0xb] = 0;
      puVar16[0xe] = 0;
      puVar16[0xd] = 0;
      puVar16[0x10] = 0;
      puVar16[0xf] = 0;
      puVar16[0x11] = 0;
      *(undefined4 *)(puVar16 + 0x12) = 0x3f800000;
      *(undefined4 *)((long)puVar16 + 0x94) = 0;
      puVar16[0x13] = 0;
      puVar16[0x14] = 0;
      puVar16[0x15] = 0;
      puVar16[1] = uStack_418;
      *puVar16 = uStack_420;
      fVar49 = (float)uStack_418;
      if ((cVar9 != '\x02') && (fVar49 = (float)uStack_420, cVar9 == '\x01')) {
        fVar49 = ((float)uStack_420 + (float)uStack_418) * 0.5;
      }
      fVar52 = (float)uVar26 + fVar52;
      fVar51 = uStack_420._4_4_;
      if (cVar8 == '\0') {
LAB_10a663d60:
        fVar51 = fVar52 + fVar51;
      }
      else {
        fVar51 = uStack_418._4_4_;
        if (cVar8 == '\x01') {
          fVar52 = fVar52 * 0.5;
          fVar51 = (uStack_420._4_4_ + uStack_418._4_4_) * 0.5;
          goto LAB_10a663d60;
        }
      }
      uStack_250 = (undefined8 ****)CONCAT44(fVar51 - (float)uVar26,fVar49);
      uStack_248 = (long *)0x0;
      uStack_240 = CONCAT71(uStack_240._1_7_,1);
      FUN_10a20699c(puVar16 + 8,&uStack_250);
    }
    else {
      if (*(char *)(ppuStack_d8 + 1) == '\x01') {
        pppcVar15 = &ppcStack_e0;
        (*(code *)ppcStack_e0)(*(undefined4 *)(lStack_2b0 + 0x18));
        if (pppcVar15 == (code ***)0x0) {
          puVar16 = (undefined8 *)0xb0;
          __Znwm();
          *(undefined8 *)((long)puVar16 + 0x2c) = 0;
          *(undefined8 *)((long)puVar16 + 0x24) = 0;
          *(undefined8 *)((long)puVar16 + 0x1c) = 0;
          *(undefined8 *)((long)puVar16 + 0x14) = 0;
          *(undefined8 *)((long)puVar16 + 0x3c) = 0;
          *(undefined8 *)((long)puVar16 + 0x34) = 0;
          *(undefined8 *)((long)puVar16 + 0x4c) = 0;
          *(undefined8 *)((long)puVar16 + 0x44) = 0;
          *(undefined8 *)((long)puVar16 + 0x5c) = 0;
          *(undefined8 *)((long)puVar16 + 0x54) = 0;
          *(undefined8 *)((long)puVar16 + 0x6c) = 0;
          *(undefined8 *)((long)puVar16 + 100) = 0;
          *(undefined8 *)((long)puVar16 + 0x7c) = 0;
          *(undefined8 *)((long)puVar16 + 0x74) = 0;
          *(undefined8 *)((long)puVar16 + 0x8c) = 0;
          *(undefined8 *)((long)puVar16 + 0x84) = 0;
          *(undefined4 *)(puVar16 + 2) = 0x3f800000;
          puVar16[4] = 0;
          puVar16[3] = 0;
          puVar16[6] = 0;
          puVar16[5] = 0;
          puVar16[8] = 0;
          puVar16[7] = 0;
          puVar16[10] = 0;
          puVar16[9] = 0;
          puVar16[0xc] = 0;
          puVar16[0xb] = 0;
          puVar16[0xe] = 0;
          puVar16[0xd] = 0;
          puVar16[0x10] = 0;
          puVar16[0xf] = 0;
          puVar16[0x11] = 0;
          *(undefined4 *)(puVar16 + 0x12) = 0x3f800000;
          *(undefined4 *)((long)puVar16 + 0x94) = 0;
          puVar16[0x13] = 0;
          puVar16[0x14] = 0;
          puVar16[0x15] = 0;
          puVar16[1] = uStack_418;
          *puVar16 = uStack_420;
          goto LAB_10a663d88;
        }
        uVar23 = 0;
        if (iVar30 == 2) {
          uVar23 = (uint)(uVar31 == 2);
        }
        uVar2 = 0;
        if ((bVar4 & 1) == 0 && uVar31 != 3) {
          uVar2 = uVar31;
        }
        iVar3 = 0;
        if ((bVar4 & 1) == 0 && iVar30 != 2) {
          iVar3 = iVar30;
        }
        FUN_10a67ed7c(fVar49,fVar51,&uStack_250,&uStack_420,pppcVar15,0,uVar2,iVar3,&pppuStack_270,
                      lVar24,uVar23 | 0x100);
        ppppuVar13 = uStack_250;
        uStack_250 = (undefined8 ****)0x0;
        func_0x00010a67ef88(&lStack_2b0,ppppuVar13);
        func_0x00010a67ef88(&uStack_250,0);
      }
      else {
        for (lVar19 = *(long *)(lStack_2b0 + 8); lVar19 != lVar12; lVar19 = *(long *)(lVar19 + 8)) {
          FUN_10a24f238(*(undefined4 *)(lVar12 + 0x18),lVar19 + 0x10);
        }
      }
      uStack_2c0 = 0;
      uStack_2b8 = 0;
      FUN_10a2527a0(fVar51,lStack_2b0);
      FUN_10a2528fc(lStack_2b0,&uStack_420,cVar9,cVar8,&uStack_2c0);
      puVar16 = (undefined8 *)0xb0;
      __Znwm();
      *(undefined8 *)((long)puVar16 + 0x8c) = 0;
      *(undefined8 *)((long)puVar16 + 0x84) = 0;
      *(undefined8 *)((long)puVar16 + 0x7c) = 0;
      *(undefined8 *)((long)puVar16 + 0x74) = 0;
      *(undefined8 *)((long)puVar16 + 0x6c) = 0;
      *(undefined8 *)((long)puVar16 + 100) = 0;
      *(undefined8 *)((long)puVar16 + 0x5c) = 0;
      *(undefined8 *)((long)puVar16 + 0x54) = 0;
      *(undefined8 *)((long)puVar16 + 0x4c) = 0;
      *(undefined8 *)((long)puVar16 + 0x44) = 0;
      *(undefined8 *)((long)puVar16 + 0x3c) = 0;
      *(undefined8 *)((long)puVar16 + 0x34) = 0;
      *(undefined8 *)((long)puVar16 + 0x2c) = 0;
      *(undefined8 *)((long)puVar16 + 0x24) = 0;
      *(undefined8 *)((long)puVar16 + 0x1c) = 0;
      *(undefined8 *)((long)puVar16 + 0x14) = 0;
      *(undefined4 *)(puVar16 + 0x12) = 0x3f800000;
      *(undefined4 *)((long)puVar16 + 0x94) = 0;
      puVar16[0x13] = 0;
      puVar16[0x14] = 0;
      puVar16[0x15] = 0;
      puVar16[1] = uStack_418;
      *puVar16 = uStack_420;
      *(undefined4 *)(puVar16 + 2) = *(undefined4 *)(lStack_2b0 + 0x18);
      FUN_10a252a88(&uStack_250,lStack_2b0,pppcVar15);
      lVar12 = puVar16[3];
      if (lVar12 != 0) {
        lVar19 = lVar12;
        lVar34 = puVar16[4];
        if (puVar16[4] != lVar12) {
          do {
            lVar19 = lVar34 + -0x70;
            FUN_10a1d37cc(lVar34 + -0x20);
            lVar34 = lVar19;
          } while (lVar19 != lVar12);
          lVar19 = puVar16[3];
        }
        puVar16[4] = lVar12;
        __ZdlPv(lVar19);
        puVar16[3] = 0;
        puVar16[4] = 0;
        puVar16[5] = 0;
      }
      puVar16[4] = uStack_248;
      puVar16[3] = uStack_250;
      puVar16[5] = uStack_240;
      uStack_240 = 0;
      uStack_248 = (long *)0x0;
      uStack_250 = (undefined8 ****)0x0;
      puStack_2a0 = &uStack_250;
      FUN_10a26a99c(&puStack_2a0);
      if (puVar16[0x11] != 0) {
        func_0x00010a67ef4c(puVar16[0x10]);
        puVar16[0x10] = 0;
        lVar12 = puVar16[0xf];
        if (lVar12 != 0) {
          lVar19 = 0;
          do {
            *(undefined8 *)(puVar16[0xe] + lVar19 * 8) = 0;
            lVar19 = lVar19 + 1;
          } while (lVar12 != lVar19);
        }
        puVar16[0x11] = 0;
      }
      uVar26 = *(undefined8 *)(lStack_2b0 + 0x20);
      *(undefined8 *)(lStack_2b0 + 0x20) = 0;
      lVar12 = puVar16[0xe];
      puVar16[0xe] = uVar26;
      if (lVar12 != 0) {
        __ZdlPv();
      }
      lVar12 = *(long *)(lStack_2b0 + 0x30);
      uVar47 = *(ulong *)(lStack_2b0 + 0x28);
      puVar16[0x10] = lVar12;
      puVar16[0xf] = uVar47;
      *(undefined8 *)(lStack_2b0 + 0x28) = 0;
      lVar19 = *(long *)(lStack_2b0 + 0x38);
      puVar16[0x11] = lVar19;
      *(undefined4 *)(puVar16 + 0x12) = *(undefined4 *)(lStack_2b0 + 0x40);
      if (lVar19 != 0) {
        uVar25 = *(ulong *)(lVar12 + 8);
        if ((uVar47 & uVar47 - 1) == 0) {
          uVar25 = uVar25 & uVar47 - 1;
        }
        else if (uVar47 <= uVar25) {
          uVar27 = 0;
          if (uVar47 != 0) {
            uVar27 = uVar25 / uVar47;
          }
          uVar25 = uVar25 - uVar27 * uVar47;
        }
        *(undefined8 **)(puVar16[0xe] + uVar25 * 8) = puVar16 + 0x10;
        *(long *)(lStack_2b0 + 0x30) = 0;
        *(undefined8 *)(lStack_2b0 + 0x38) = 0;
      }
      FUN_10a252e1c(&uStack_250,lStack_2b0);
      FUN_10a20d9b0(puVar16 + 0x13);
      puVar16[0x14] = uStack_248;
      puVar16[0x13] = uStack_250;
      puVar16[0x15] = uStack_240;
      uStack_240 = 0;
      uStack_248 = (long *)0x0;
      uStack_250 = (undefined8 ****)0x0;
      puStack_2a0 = &uStack_250;
      FUN_10a208bbc(&puStack_2a0);
      plStack_298 = (long *)0x0;
      puStack_2a0 = (undefined8 *)0x0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_280 = 0x3f800000;
      func_0x00010a20da18(&puStack_2a0,(long)(float)*(ulong *)(lStack_2b0 + 0x10));
      pfVar29 = (float *)puVar16[3];
      pfVar32 = (float *)puVar16[4];
      if (pfVar32 != pfVar29) {
        puVar43 = (undefined8 *)0x0;
        lVar12 = 0x40;
        do {
          pppuStack_2a8 = *(undefined8 ****)((long)pfVar29 + lVar12);
          ppuVar17 = &puStack_2a0;
          FUN_10a20dc24(ppuVar17,&pppuStack_2a8);
          if (ppuVar17 == (undefined8 **)0x0) {
            ppuVar17 = &puStack_2a0;
            uStack_250 = &pppuStack_2a8;
            FUN_10a20dcc4(ppuVar17,&pppuStack_2a8,&UNK_10dd5b8f9,&uStack_250,&uStack_271);
            ppuVar17[3] = puVar43;
          }
          puVar43 = (undefined8 *)((long)puVar43 + 1);
          ppuVar17[4] = puVar43;
          pfVar29 = (float *)puVar16[3];
          pfVar32 = (float *)puVar16[4];
          lVar12 = lVar12 + 0x70;
        } while (puVar43 < (undefined8 *)(((long)pfVar32 - (long)pfVar29 >> 4) * 0x6db6db6db6db6db7)
                );
      }
      pppuStack_2a8 = (undefined8 ****)0x0;
      lVar12 = *(long *)(lStack_2b0 + 8);
      if (lVar12 != lStack_2b0) {
        do {
          lVar19 = *(long *)(lVar12 + 8);
          FUN_10a20ded0(puVar16 + 8,puVar16[9],*(long *)(lVar12 + 0x58),*(long *)(lVar12 + 0x60),
                        (*(long *)(lVar12 + 0x60) - *(long *)(lVar12 + 0x58) >> 3) *
                        -0x5555555555555555);
          uVar47 = lVar12 + 0x10;
          FUN_10a24d004();
          if (uVar47 != 0) {
            uVar25 = 0;
            do {
              uStack_220 = 0;
              lStack_228 = 0;
              puStack_230 = (undefined8 *)0x0;
              uStack_238 = (undefined8 *)0x0;
              uStack_240 = 0;
              uStack_248 = (long *)0x0;
              uVar27 = 0;
              if (*(long *)(lVar12 + 0x20) != 0) {
                uVar27 = (ulong)*(byte *)(*(long *)(lVar12 + 0x18) + 0x70);
              }
              uStack_218 = (uVar27 & 1) << 0x30;
              uVar27 = (*(long *)(lVar12 + 0x130) - *(long *)(lVar12 + 0x128) >> 2) *
                       -0x5555555555555555;
              uStack_250 = (undefined8 ****)pppuStack_2a8;
              if (uVar27 < uVar25 || uVar27 - uVar25 == 0) goto LAB_10a664cec;
              plVar28 = (long *)(*(long *)(lVar12 + 0x128) + uVar25 * 0xc);
              lStack_228 = *plVar28;
              uStack_220 = (ulong)*(uint *)(plVar28 + 1);
              ppuVar17 = &puStack_2a0;
              FUN_10a20dc24(ppuVar17,&pppuStack_2a8);
              if (ppuVar17 == (undefined8 **)0x0) {
                uStack_238 = (undefined8 *)
                             (((long)(puVar16[4] - puVar16[3]) >> 4) * 0x6db6db6db6db6db7);
                puStack_230 = uStack_238;
              }
              else {
                uStack_238 = ppuVar17[3];
                puStack_230 = ppuVar17[4];
              }
              lVar34 = *(long *)(lVar12 + 0x70);
              if (uVar25 == 0) {
                uVar27 = 0;
                uVar35 = *(long *)(lVar12 + 0x78) - lVar34 >> 3;
              }
              else {
                uVar35 = *(long *)(lVar12 + 0x78) - lVar34 >> 3;
                if (uVar35 <= uVar25 - 1) goto LAB_10a664cec;
                uVar27 = *(long *)(lVar34 + (uVar25 - 1) * 8) + 1;
              }
              if (uVar25 < uVar35) {
                uVar35 = *(ulong *)(lVar34 + uVar25 * 8);
                lVar34 = *(long *)(lVar12 + 0x40);
                lVar38 = *(long *)(lVar12 + 0x48);
              }
              else {
                lVar34 = *(long *)(lVar12 + 0x40);
                lVar38 = *(long *)(lVar12 + 0x48);
                uVar35 = (lVar38 - lVar34 >> 3) * -0x70a3d70a3d70a3d7 - 1;
              }
              uStack_248 = (long *)0xffffffffffffffff;
              if ((lVar34 == lVar38) ||
                 (uVar39 = (lVar38 - lVar34 >> 3) * -0x70a3d70a3d70a3d7,
                 uVar39 <= uVar27 || uVar35 < uVar27)) {
LAB_10a663ab0:
                plVar28 = *(long **)(lVar12 + 0xc0);
                uStack_248 = plVar28;
              }
              else {
                plVar28 = (long *)0x0;
                piVar41 = (int *)(lVar34 + uVar27 * 200 + 0xb0);
                plVar40 = (long *)0xffffffffffffffff;
                do {
                  plVar18 = plVar40;
                  if ((char)piVar41[-0x20] == '\x01') {
                    plVar42 = *(long **)(piVar41 + -0x22);
                    plVar18 = plVar42;
                    if (plVar40 <= plVar42) {
                      plVar18 = plVar40;
                    }
                    uStack_248 = plVar18;
                    if (plVar28 <= (long *)((long)plVar42 + (long)*piVar41)) {
                      plVar28 = (long *)((long)plVar42 + (long)*piVar41);
                    }
                  }
                  if (uVar35 <= uVar27) break;
                  uVar27 = uVar27 + 1;
                  piVar41 = piVar41 + 0x32;
                  plVar40 = plVar18;
                } while (uVar27 < uVar39);
                if (plVar18 == (long *)0xffffffffffffffff) goto LAB_10a663ab0;
              }
              bVar20 = false;
              uStack_218._0_7_ = (uint7)CONCAT31(uStack_218._5_3_,lVar34 == lVar38) << 0x20;
              iVar10 = (int7)uStack_218;
              uStack_218 = CONCAT17(*(undefined1 *)(lVar12 + 0x120),(int7)uStack_218);
              iVar30 = 0;
              if ((uVar25 == uVar47 - 1) && (lVar19 != lStack_2b0)) {
                iVar30 = *(int *)(lVar19 + 200);
                bVar20 = 0 < iVar30;
              }
              uStack_218._0_6_ = CONCAT15(bVar20,(int5)iVar10);
              uStack_218 = CONCAT44(uStack_218._4_4_,iVar30);
              uStack_240 = (long)plVar28 + (long)iVar30;
              FUN_10a20ce00(puVar16 + 0xb,&uStack_250);
              pppuStack_2a8 = (undefined8 ***)((long)pppuStack_2a8 + 1);
              uVar25 = uVar25 + 1;
            } while (uVar25 != uVar47);
          }
          lVar12 = *(long *)(lVar12 + 8);
        } while (lVar12 != lStack_2b0);
        pfVar29 = (float *)puVar16[3];
        pfVar32 = (float *)puVar16[4];
      }
      if (*(int *)(lVar24 + 0x18) < 0x15c) {
        if (pfVar29 != pfVar32) {
          fVar49 = *pfVar29;
          *(float *)(puVar16 + 6) = fVar49;
          fVar51 = pfVar29[2];
          *(float *)(puVar16 + 7) = fVar51;
          pfVar36 = pfVar29;
          do {
            fVar52 = *pfVar36;
            if (fVar52 < fVar49) {
              *(float *)(puVar16 + 6) = fVar52;
              fVar49 = fVar52;
            }
            fVar52 = pfVar36[2];
            if (fVar51 < fVar52) {
              *(float *)(puVar16 + 7) = fVar52;
              fVar51 = fVar52;
            }
            pfVar36 = pfVar36 + 0x1c;
          } while (pfVar36 != pfVar32);
          goto LAB_10a663c1c;
        }
LAB_10a663c24:
        if (*(long *)(lStack_2b0 + 0x10) != 0) {
          *(float *)(puVar16 + 6) = (float)uStack_420;
          *(float *)(puVar16 + 7) = (float)uStack_418;
        }
      }
      else {
        if (pfVar29 == pfVar32) goto LAB_10a663c24;
        fVar49 = *pfVar29 + pfVar29[8];
        *(float *)(puVar16 + 6) = fVar49;
        fVar51 = pfVar29[2] - pfVar29[8];
        *(float *)(puVar16 + 7) = fVar51;
        pfVar36 = pfVar29;
        do {
          fVar52 = pfVar36[8];
          fVar53 = *pfVar36 + fVar52;
          if (fVar53 < fVar49) {
            *(float *)(puVar16 + 6) = fVar53;
            fVar52 = pfVar36[8];
            fVar49 = fVar53;
          }
          fVar52 = pfVar36[2] - fVar52;
          if (fVar51 < fVar52) {
            *(float *)(puVar16 + 7) = fVar52;
            fVar51 = fVar52;
          }
          pfVar36 = pfVar36 + 0x1c;
        } while (pfVar36 != pfVar32);
LAB_10a663c1c:
        if (pfVar29 == pfVar32) goto LAB_10a663c24;
      }
      func_0x00010a20e170(&puStack_2a0);
      *(undefined4 *)((long)puVar16 + 0x34) = uStack_2c0._4_4_;
      *(undefined4 *)((long)puVar16 + 0x3c) = uStack_2b8._4_4_;
      lVar12 = puVar16[0xb];
      if (lVar12 != puVar16[0xc]) {
        uVar47 = puVar16[0xc] - lVar12 >> 6;
        *(undefined4 *)(lVar12 + 0x34) = uStack_2b8._4_4_;
        if (1 < uVar47) {
          lVar24 = uVar47 - 1;
          pfVar29 = (float *)(lVar12 + 0x74);
          do {
            *pfVar29 = pfVar29[-0x10] - pfVar29[-0x11];
            lVar24 = lVar24 + -1;
            pfVar29 = pfVar29 + 0x10;
          } while (lVar24 != 0);
        }
      }
    }
LAB_10a663d88:
    func_0x00010a67ef88(&lStack_2b0,0);
    plVar28 = (long *)(lVar48 + 0x388);
    puVar43 = *(undefined8 **)(lVar48 + 0x388);
    if (puVar43 == puVar16) {
      FUN_10a67f39c(puVar16);
    }
    else {
      *plVar28 = (long)puVar16;
      if (puVar43 != (undefined8 *)0x0) {
        FUN_10a67f39c();
      }
      func_0x00010a1bd170(&uStack_250);
      FUN_10a67f410(plVar28);
    }
    if (ppppuStack_258 == &pppuStack_270) {
      lVar12 = 0x20;
LAB_10a663dec:
      (**(code **)((long)*ppppuStack_258 + lVar12))();
    }
    else if (ppppuStack_258 != (undefined ****)0x0) {
      lVar12 = 0x28;
      goto LAB_10a663dec;
    }
    (*(code *)*ppuStack_d8)(&ppuStack_d8);
    lVar12 = *plVar28;
    if (lVar12 == 0) {
      uStack_248 = (long *)0x0;
      uStack_250 = (undefined8 ****)0x0;
      uStack_240 = 0;
    }
    else {
      fVar49 = *(float *)(lVar48 + 0x3c8);
      uStack_240 = 0;
      uStack_250 = (undefined8 ****)0x0;
      uStack_248 = (long *)0x0;
      FUN_10a679050(&uStack_250,
                    (*(long *)(lVar12 + 0x48) - *(long *)(lVar12 + 0x40) >> 3) * -0x5555555555555555
                   );
      puVar43 = *(undefined8 **)(lVar12 + 0x48);
      for (puVar16 = *(undefined8 **)(lVar12 + 0x40); puVar16 != puVar43; puVar16 = puVar16 + 3) {
        if (*(char *)(puVar16 + 2) == '\x01') {
          ppcStack_e0 = (code **)CONCAT44((float)((ulong)*puVar16 >> 0x20) / fVar49,
                                          (float)*puVar16 / fVar49);
          ppuStack_d8 = (undefined **)puVar16[1];
          func_0x00010a6790e0(&uStack_250,&ppcStack_e0);
        }
      }
    }
    if (*(long *)(lVar48 + 0x3d0) != 0) {
      *(long *)(lVar48 + 0x3d8) = *(long *)(lVar48 + 0x3d0);
      __ZdlPv();
      *(undefined8 *)(lVar48 + 0x3d0) = 0;
      *(undefined8 *)(lVar48 + 0x3d8) = 0;
      *(undefined8 *)(lVar48 + 0x3e0) = 0;
    }
    *(long **)(lVar48 + 0x3d8) = uStack_248;
    *(undefined8 *****)(lVar48 + 0x3d0) = uStack_250;
    *(long *)(lVar48 + 0x3e0) = uStack_240;
  }
  plVar28 = (long *)(lVar48 + 0x388);
  lVar12 = *(long *)(lVar48 + 0x388);
  if (lVar12 == 0) {
LAB_10a66499c:
    FUN_10a67f410(plVar28);
    uVar46 = 0;
LAB_10a6649ac:
    if ((byte)(bVar21 | bVar7 | bVar6) == 1) {
      *(byte *)(lVar48 + 0x158) = abStack_410[0];
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (lVar48 + 0x160,&pppuStack_408);
      *(long **)(lVar48 + 0x180) = uStack_3e8;
      *(undefined8 ****)(lVar48 + 0x178) = pppuStack_3f0;
      *(long *)(lVar48 + 0x188) = lStack_3e0;
      *(ulong *)(lVar48 + 0x198) = CONCAT44(fStack_3cc,CONCAT22(uStack_3ce,uStack_3d0));
      *(long *)(lVar48 + 400) = lStack_3d8;
      *(ulong *)(lVar48 + 0x1a2) =
           CONCAT17(bStack_3bf,CONCAT16(bStack_3c0,CONCAT42(uStack_3c4,uStack_3c6)));
      *(ulong *)(lVar48 + 0x19a) =
           CONCAT17(uStack_3c7,CONCAT16(uStack_3c8,CONCAT42(fStack_3cc,uStack_3ce)));
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (lVar48 + 0x1b0,&pppuStack_3b8);
      *(ulong *)(lVar48 + 0x1d0) =
           CONCAT26(uStack_392,CONCAT15(cStack_393,CONCAT14(cStack_394,uStack_398)));
      *(ulong *)(lVar48 + 0x1c8) = CONCAT44(iStack_39c,uStack_3a0);
      *(ulong *)(lVar48 + 0x1dd) = CONCAT17(cStack_384,CONCAT43(fStack_388,fStack_38c._1_3_));
      *(ulong *)(lVar48 + 0x1d5) =
           CONCAT17(fStack_38c._0_1_,CONCAT43(fStack_390,CONCAT21(uStack_392,cStack_393)));
      *(undefined8 *)(lVar48 + 0x214) = uStack_354;
      *(undefined8 *)(lVar48 + 0x20c) = uStack_35c;
      *(undefined8 *)(lVar48 + 0x24c) = uStack_31c;
      *(undefined8 *)(lVar48 + 0x244) = uStack_324;
    }
    if (*(long *)(param_3 + 0x260) == 0) {
      lVar12 = *(long *)(lVar48 + 0x3b8);
      if (lVar12 == 0) goto LAB_10a664b5c;
      lVar24 = 0;
LAB_10a664aa4:
      if (lVar24 != lVar12) {
        FUN_10a6589d4(&uStack_250,*(undefined8 *)(param_3 + 0x170),lVar12,
                      *(undefined8 *)(lVar48 + 0x3c0));
        plStack_428 = uStack_248;
        pppuStack_430 = uStack_250;
        if (uStack_248 != (long *)0x0) {
          plVar28 = uStack_248 + 1;
          do {
            cVar8 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar20) {
              *plVar28 = *plVar28 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        FUN_10a426824(param_3,&pppuStack_430);
        plVar28 = plStack_428;
        if (plStack_428 != (long *)0x0) {
          plVar40 = plStack_428 + 1;
          do {
            lVar12 = *plVar40;
            cVar8 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plVar40,0x10);
            if (bVar20) {
              *plVar40 = lVar12 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_428 + 0x10))(plStack_428);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar28);
          }
        }
        if (uStack_248 != (long *)0x0) {
          plVar28 = uStack_248 + 1;
          do {
            lVar12 = *plVar28;
            cVar8 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar20) {
              *plVar28 = lVar12 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
            plVar40 = uStack_248;
          } while (cVar8 != '\0');
          goto LAB_10a664b40;
        }
      }
    }
    else {
      lVar24 = *(long *)(*(long *)(param_3 + 0x260) + 0xe0);
      lVar12 = *(long *)(lVar48 + 0x3b8);
      if (lVar12 != 0) goto LAB_10a664aa4;
      if (lVar24 != 0) {
        uStack_440 = 0;
        plStack_438 = (long *)0x0;
        FUN_10a426824(param_3,&uStack_440);
        if (plStack_438 == (long *)0x0) goto LAB_10a664b5c;
        plVar28 = plStack_438 + 1;
        do {
          lVar12 = *plVar28;
          cVar8 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar20) {
            *plVar28 = lVar12 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
          plVar40 = plStack_438;
        } while (cVar8 != '\0');
LAB_10a664b40:
        if (lVar12 == 0) {
          (**(code **)(*plVar40 + 0x10))(plVar40);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar40);
        }
      }
    }
LAB_10a664b5c:
    *(undefined1 *)(lVar48 + 0x437) = uVar46;
    FUN_10a044790(&pcStack_120);
    (*(code *)*ppuStack_118)(&ppuStack_118);
    plVar28 = plStack_338;
    ppuStack_348 = &PTR_DAT_110b17898;
    if (plStack_338 != (long *)0x0) {
      plVar40 = plStack_338 + 1;
      do {
        lVar12 = *plVar40;
        cVar8 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(plVar40,0x10);
        if (bVar20) {
          *plVar40 = lVar12 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_338 + 0x10))(plStack_338);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar28);
      }
    }
    plVar28 = plStack_370;
    ppuStack_380 = &PTR_DAT_110b17898;
    if (plStack_370 != (long *)0x0) {
      plVar40 = plStack_370 + 1;
      do {
        lVar12 = *plVar40;
        cVar8 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(plVar40,0x10);
        if (bVar20) {
          *plVar40 = lVar12 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_370 + 0x10))(plStack_370);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar28);
      }
    }
    if ((long)uStack_3a8 < 0) {
      __ZdlPv(pppuStack_3b8);
    }
    if ((char)bStack_3f1 < '\0') {
      __ZdlPv(pppuStack_408);
    }
    plVar28 = plStack_2f8;
    if ((cStack_2d0 == '\x01') && (ppuStack_308 = &PTR_DAT_110b17898, plStack_2f8 != (long *)0x0)) {
      plVar40 = plStack_2f8 + 1;
      do {
        lVar12 = *plVar40;
        cVar8 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(plVar40,0x10);
        if (bVar20) {
          *plVar40 = lVar12 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar28);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
      return uVar46;
    }
    ___stack_chk_fail();
  }
  else {
    lVar24 = *(long *)(lVar12 + 0x18);
    lVar12 = *(long *)(lVar12 + 0x20);
    bVar4 = bVar21 ^ 1;
    if (lVar12 == lVar24) {
      bVar4 = 1;
    }
    if (bVar4 != 0) {
LAB_10a664968:
      if ((lVar12 == lVar24) || (*(long *)(lVar48 + 0x390) == *(long *)(lVar48 + 0x398))) {
        lVar12 = *plVar28;
        *plVar28 = 0;
        if (lVar12 != 0) {
          FUN_10a67f39c();
        }
        goto LAB_10a66499c;
      }
      uVar46 = 1;
      goto LAB_10a6649ac;
    }
    plVar40 = (long *)(lVar48 + 0x3a8);
    lVar19 = *(long *)(lVar48 + 0x3a8);
    if (lVar19 == 0) {
      plVar18 = &uStack_250;
      FUN_10a0d0194(&puStack_2a0);
      if ((undefined8 *)*plVar40 != puStack_2a0) {
        func_0x00010a19b5ac(plVar40,&puStack_2a0);
        plVar42 = &uStack_250;
        func_0x00010a1bd170();
        lVar19 = -0x3a8;
        if (cRam00000001137eb72e == '\0') {
          lVar19 = -0xffff;
        }
        lVar19 = (long)plVar40 + lVar19;
        if ((*(ushort *)(lVar19 + 0xe9) >> 8 & 1) == 0) {
          if ((((*(long *)(lVar19 + 0xc0) != 0) || ((*(ushort *)(lVar19 + 0xe9) >> 9 & 1) != 0)) ||
              (*(long *)(lVar19 + 0xe0) != 0)) || ((*(ushort *)(lVar19 + 0x30) >> 8 & 1) == 0)) {
LAB_10a663fa8:
            plVar18 = &uStack_250;
            func_0x00010a1bd170();
            if (((ulong)plVar18 & 1) == 0) {
              uStack_218 = 0;
              uStack_220 = 0;
              uStack_208 = 0;
              lStack_210 = 0;
              uStack_238 = (undefined8 *)0x0;
              uStack_240 = 0;
              lStack_228 = 0;
              puStack_230 = (undefined8 *)0x0;
              uStack_248 = (long *)0x0;
              uStack_250 = (undefined8 ****)0x0;
              ppcStack_e0 = (code **)&PTR_DAT_110c06b58;
              FUN_10a0dad0c((ulong)&uStack_250 | 8,&ppcStack_e0);
              lVar19 = -0x3a8;
              if (cRam00000001137eb72e == '\0') {
                lVar19 = -0xffff;
              }
              iVar30 = (int)plVar40 + (int)lVar19;
              (**(code **)(*(long *)((long)plVar40 + lVar19) + 0x18))();
              lVar19 = -0x3a8;
              if (cRam00000001137eb72e == '\0') {
                lVar19 = -0xffff;
              }
              uVar47 = (long)plVar40 + lVar19;
              uVar22 = *(ushort *)(uVar47 + 0x30);
              if (iVar30 == 0) {
                if ((uVar22 >> 8 & 1) == 0) {
                  FUN_10a1bfe94(uVar47,&uStack_250);
                  if ((uVar47 & 1) == 0) {
                    lVar19 = -0x3a8;
                    if (cRam00000001137eb72e == '\0') {
                      lVar19 = -0xffff;
                    }
                    uVar47 = (long)plVar40 + lVar19;
                    (**(code **)(*(long *)((long)plVar40 + lVar19) + 0x10))(uVar47,&uStack_250);
                  }
                }
                else {
                  FUN_10a1bd5e0();
                  if (uVar47 != 0) {
                    FUN_10a1bd7d8();
                  }
                }
              }
              else {
                if ((uVar22 >> 7 & 1) == 0) {
                  *(undefined8 *****)(uVar47 + 0x40) = uStack_250;
                  *(ushort *)(uVar47 + 0x30) = uVar22 | 0x80;
                }
                uVar47 = uVar47 + 0x40;
                FUN_10a1bd398(uVar47,&uStack_250);
              }
              uVar22 = 0x3a8;
              if (cRam00000001137eb72e == '\0') {
                uVar22 = 0xffff;
              }
              lVar19 = 0x3a8;
              if (cRam00000001137eb72e == '\0') {
                lVar19 = 0xffff;
              }
              if ((*(ushort *)((long)plVar40 + (0xe9 - lVar19)) >> 8 & 1) != 0) {
                FUN_10a1bd5e0();
                uVar22 = 0x3a8;
                if (cRam00000001137eb72e == '\0') {
                  uVar22 = 0xffff;
                }
                if (uVar47 != 0) {
                  FUN_10a1bd648();
                  uVar22 = 0x3a8;
                  if (cRam00000001137eb72e == '\0') {
                    uVar22 = 0xffff;
                  }
                }
              }
              plVar18 = (long *)((long)plVar40 + (0x90 - (ulong)uVar22));
              FUN_10a1c054c(plVar18,&uStack_250);
            }
            goto LAB_10a6642e0;
          }
          *(long *)(lVar19 + 0xa0) = *(long *)(lVar19 + 0xa0) + 1;
        }
        else if ((*(ushort *)(lVar19 + 0x30) >> 8 & 1) == 0) goto LAB_10a663fa8;
        ppuVar45 = *(undefined ***)(lVar19 + 0xf0);
        ppuVar44 = *(undefined ***)(lVar19 + 0x38);
        if (((ppuVar45 != &PTR_DAT_110c06b58) || (plVar18 = plVar42, ppuVar44 != &PTR_DAT_110c06b58)
            ) && (FUN_10a1bd5e0(), plVar18 = plVar42, plVar42 != (long *)0x0)) {
          if (ppuVar45 != &PTR_DAT_110c06b58) {
            FUN_10a1bd648(plVar42,lVar19 + 0x90,&PTR_DAT_110c06b58);
            *(undefined ***)(lVar19 + 0xf0) = &PTR_DAT_110c06b58;
          }
          if (ppuVar44 != &PTR_DAT_110c06b58) {
            FUN_10a1bd7d8(plVar42,lVar19,&PTR_DAT_110c06b58);
            *(undefined ***)(lVar19 + 0x38) = &PTR_DAT_110c06b58;
            plVar18 = plVar42;
          }
        }
      }
LAB_10a6642e0:
      plVar42 = plStack_298;
      if (plStack_298 != (long *)0x0) {
        plVar1 = plStack_298 + 1;
        do {
          lVar19 = *plVar1;
          cVar8 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar20) {
            *plVar1 = lVar19 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plStack_298 + 0x10))(plStack_298);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar18 = plVar42;
        }
      }
      FUN_10ab6e728();
      if (*(char *)((long)plVar18 + 0x17) < '\0') {
        plVar42 = &uStack_250;
        func_0x000107c3192c(plVar42,*plVar18,plVar18[1]);
      }
      else {
        uStack_240 = plVar18[2];
        uStack_248 = (long *)plVar18[1];
        uStack_250 = (undefined8 ****)*plVar18;
        plVar42 = plVar18;
      }
      uStack_238 = (undefined8 *)plVar18[3];
      lStack_228 = plVar18[5];
      puStack_230 = (undefined8 *)plVar18[4];
      uStack_220 = CONCAT44(uStack_220._4_4_,(int)plVar18[6]);
      FUN_10ab6f020();
      if (*(char *)((long)plVar42 + 0x17) < '\0') {
        func_0x000107c3192c(&uStack_218,*plVar42,plVar42[1]);
      }
      else {
        uStack_208 = plVar42[2];
        lStack_210 = plVar42[1];
        uStack_218 = *plVar42;
      }
      lStack_200 = plVar42[3];
      lStack_1f0 = plVar42[5];
      lStack_1f8 = plVar42[4];
      uStack_1e8 = (undefined4)plVar42[6];
      FUN_10ab6f520(&ppcStack_e0,&uStack_250,2);
      lVar19 = *plVar40;
      *(undefined4 *)(lVar19 + 0xf0) = ppcStack_e0._0_4_;
      if ((code ***)(lVar19 + 0xf0) != &ppcStack_e0) {
        FUN_10a1903c4(lVar19 + 0xf8,ppuStack_d8,lStack_d0,
                      (lStack_d0 - (long)ppuStack_d8 >> 3) * 0x6db6db6db6db6db7);
      }
      *(undefined8 *)(lVar19 + 0x118) = uStack_b8;
      *(undefined8 *)(lVar19 + 0x110) = uStack_c0;
      *(undefined8 *)(lVar19 + 0x128) = uStack_a8;
      *(undefined8 *)(lVar19 + 0x120) = uStack_b0;
      *(undefined8 *)(lVar19 + 0x130) = uStack_a0;
      pppuStack_270 = &ppuStack_d8;
      func_0x00010a190844(&pppuStack_270);
      lVar19 = 0;
      do {
        if (*(char *)((long)&uStack_208 + lVar19 + 7) < '\0') {
          __ZdlPv(*(undefined8 *)((long)&uStack_218 + lVar19));
        }
        lVar19 = lVar19 + -0x38;
      } while (lVar19 != -0x70);
      *(undefined8 *)(*plVar40 + 0xe8) = 1;
      uStack_2c0 = 0;
      FUN_10a678318(&ppcStack_e0,&uStack_250,&uStack_2c0,plVar40);
      plVar18 = (long *)(lVar48 + 0x3b8);
      if (*(code ***)(lVar48 + 0x3b8) != ppcStack_e0) {
        func_0x00010a19a938(plVar18,&ppcStack_e0);
        puVar16 = &uStack_250;
        func_0x00010a1bd170();
        lVar19 = -0x3b8;
        if (cRam00000001137eb730 == '\0') {
          lVar19 = -0xffff;
        }
        lVar19 = (long)plVar18 + lVar19;
        if ((*(ushort *)(lVar19 + 0xe9) >> 8 & 1) == 0) {
          if (((*(long *)(lVar19 + 0xc0) != 0) || ((*(ushort *)(lVar19 + 0xe9) >> 9 & 1) != 0)) ||
             ((*(long *)(lVar19 + 0xe0) != 0 || ((*(ushort *)(lVar19 + 0x30) >> 8 & 1) == 0)))) {
LAB_10a664504:
            uVar47 = 0;
            func_0x00010a1bd170();
            if ((uVar47 & 1) == 0) {
              uStack_218 = 0;
              uStack_220 = 0;
              uStack_208 = 0;
              lStack_210 = 0;
              uStack_238 = (undefined8 *)0x0;
              uStack_240 = 0;
              lStack_228 = 0;
              puStack_230 = (undefined8 *)0x0;
              uStack_248 = (long *)0x0;
              uStack_250 = (undefined8 ****)0x0;
              pppuStack_270 = (undefined ***)&PTR_DAT_110c06b70;
              FUN_10a0dad0c((ulong)&uStack_250 | 8,&pppuStack_270);
              lVar19 = -0x3b8;
              if (cRam00000001137eb730 == '\0') {
                lVar19 = -0xffff;
              }
              iVar30 = (int)plVar18 + (int)lVar19;
              (**(code **)(*(long *)((long)plVar18 + lVar19) + 0x18))();
              lVar19 = -0x3b8;
              if (cRam00000001137eb730 == '\0') {
                lVar19 = -0xffff;
              }
              uVar47 = (long)plVar18 + lVar19;
              uVar22 = *(ushort *)(uVar47 + 0x30);
              if (iVar30 == 0) {
                if ((uVar22 >> 8 & 1) == 0) {
                  FUN_10a1bfe94(uVar47,&uStack_250);
                  if ((uVar47 & 1) == 0) {
                    lVar19 = -0x3b8;
                    if (cRam00000001137eb730 == '\0') {
                      lVar19 = -0xffff;
                    }
                    uVar47 = (long)plVar18 + lVar19;
                    (**(code **)(*(long *)((long)plVar18 + lVar19) + 0x10))(uVar47,&uStack_250);
                  }
                }
                else {
                  FUN_10a1bd5e0();
                  if (uVar47 != 0) {
                    FUN_10a1bd7d8();
                  }
                }
              }
              else {
                if ((uVar22 >> 7 & 1) == 0) {
                  *(undefined8 *****)(uVar47 + 0x40) = uStack_250;
                  *(ushort *)(uVar47 + 0x30) = uVar22 | 0x80;
                }
                uVar47 = uVar47 + 0x40;
                FUN_10a1bd398(uVar47,&uStack_250);
              }
              uVar22 = 0x3b8;
              if (cRam00000001137eb730 == '\0') {
                uVar22 = 0xffff;
              }
              lVar19 = 0x3b8;
              if (cRam00000001137eb730 == '\0') {
                lVar19 = 0xffff;
              }
              if ((*(ushort *)((long)plVar18 + (0xe9 - lVar19)) >> 8 & 1) != 0) {
                FUN_10a1bd5e0();
                uVar22 = 0x3b8;
                if (cRam00000001137eb730 == '\0') {
                  uVar22 = 0xffff;
                }
                if (uVar47 != 0) {
                  FUN_10a1bd648();
                  uVar22 = 0x3b8;
                  if (cRam00000001137eb730 == '\0') {
                    uVar22 = 0xffff;
                  }
                }
              }
              FUN_10a1c054c((long)plVar18 + (0x90 - (ulong)uVar22),&uStack_250);
            }
            goto LAB_10a6646e4;
          }
          *(long *)(lVar19 + 0xa0) = *(long *)(lVar19 + 0xa0) + 1;
        }
        else if ((*(ushort *)(lVar19 + 0x30) >> 8 & 1) == 0) goto LAB_10a664504;
        ppuVar45 = *(undefined ***)(lVar19 + 0xf0);
        ppuVar44 = *(undefined ***)(lVar19 + 0x38);
        if ((ppuVar45 != &PTR_DAT_110c06b70 || ppuVar44 != &PTR_DAT_110c06b70) &&
           (FUN_10a1bd5e0(), puVar16 != (undefined8 *)0x0)) {
          if (ppuVar45 != &PTR_DAT_110c06b70) {
            FUN_10a1bd648(puVar16,lVar19 + 0x90,&PTR_DAT_110c06b70);
            *(undefined ***)(lVar19 + 0xf0) = &PTR_DAT_110c06b70;
          }
          if (ppuVar44 != &PTR_DAT_110c06b70) {
            FUN_10a1bd7d8(puVar16,lVar19,&PTR_DAT_110c06b70);
            *(undefined ***)(lVar19 + 0x38) = &PTR_DAT_110c06b70;
          }
        }
      }
LAB_10a6646e4:
      ppuVar44 = ppuStack_d8;
      if (ppuStack_d8 != (undefined **)0x0) {
        ppuVar45 = ppuStack_d8 + 1;
        do {
          puVar33 = *ppuVar45;
          cVar8 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(ppuVar45,0x10);
          if (bVar20) {
            *ppuVar45 = puVar33 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (puVar33 == (undefined *)0x0) {
          (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar44);
        }
      }
      plVar42 = (long *)*plVar18;
      if (*(char *)((long)plVar42 + 0xb9) != '\x01') {
        *(undefined1 *)((long)plVar42 + 0xb9) = 1;
        (**(code **)(*plVar42 + 0xa0))(plVar42);
        plVar42 = (long *)*plVar18;
      }
      if (*(char *)((long)plVar42 + 0xba) != '\x01') {
        *(undefined1 *)((long)plVar42 + 0xba) = 1;
        (**(code **)(*plVar42 + 0xa0))(plVar42);
        plVar42 = (long *)*plVar18;
      }
      FUN_10a6589d4(&uStack_250,*(undefined8 *)(param_3 + 0x170),plVar42,
                    *(undefined8 *)(lVar48 + 0x3c0));
      FUN_10ab4a154(*plVar40,4);
      lVar19 = *plVar40;
      puVar16 = *(undefined8 **)(lVar19 + 0x28);
      uVar47 = *(long *)(lVar19 + 0x30) - (long)puVar16;
      if (uVar47 < 0xc) {
        func_0x000107c27d58((undefined8 *)(lVar19 + 0x28),0xc - uVar47);
        puVar16 = *(undefined8 **)(*plVar40 + 0x28);
      }
      else if (uVar47 != 0xc) {
        *(long *)(lVar19 + 0x30) = (long)puVar16 + 0xc;
      }
      plVar18 = uStack_248;
      *puVar16 = 0x200010000;
      *(undefined4 *)(puVar16 + 1) = 0x30002;
      if (uStack_248 != (long *)0x0) {
        plVar42 = uStack_248 + 1;
        do {
          lVar19 = *plVar42;
          cVar8 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar42,0x10);
          if (bVar20) {
            *plVar42 = lVar19 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*uStack_248 + 0x10))(uStack_248);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
        }
      }
      lVar19 = *plVar40;
    }
    uVar31 = *(uint *)(lVar19 + 0x110);
    if (uVar31 == 0xffffffff) {
      lVar34 = 0;
LAB_10a664870:
      uVar31 = *(int *)(lVar34 + 0x24) - 1;
      if (uVar31 < 7) {
        iVar30 = *(int *)(&UNK_10e4d1d38 + (ulong)uVar31 * 4);
      }
      else {
        iVar30 = 0;
      }
      if (*(int *)(lVar34 + 0x28) * iVar30 == 0xc) {
        lVar34 = *(long *)(lVar19 + 0x10) + (ulong)*(uint *)(lVar34 + 0x30);
        uVar47 = (ulong)*(uint *)(lVar19 + 0xf0);
      }
      else {
        lVar34 = 0;
        uVar47 = 0;
      }
      lVar19 = 0;
      lVar38 = *(long *)(lVar48 + 0x388);
      fVar49 = *(float *)(lVar48 + 0x3c8);
      fVar51 = *(float *)(lVar38 + 0x30) / fVar49;
      fVar52 = *(float *)(lVar38 + 0x34) / fVar49;
      fVar53 = *(float *)(lVar38 + 0x38) / fVar49;
      uStack_248 = (long *)CONCAT44(fVar52,fVar53);
      uStack_250 = (undefined8 ****)CONCAT44(fVar52,fVar51);
      fVar49 = *(float *)(lVar38 + 0x3c) / fVar49;
      uStack_238 = (undefined8 *)CONCAT44(fVar49,fVar51);
      uStack_240 = CONCAT44(fVar49,fVar53);
      puVar37 = (undefined4 *)(lVar34 + 8);
      do {
        *(undefined8 *)(puVar37 + -2) = *(undefined8 *)((long)&uStack_250 + lVar19);
        *puVar37 = 0;
        puVar37 = (undefined4 *)((long)puVar37 + uVar47);
        lVar19 = lVar19 + 8;
      } while (lVar19 != 0x20);
      FUN_10ab4e0a4(*plVar40);
      FUN_10ac645fc(*(undefined8 *)(lVar48 + 0x3b8),plVar40);
      FUN_10a65fab8(lVar48,&bStack_30c,abStack_410,param_3);
      goto LAB_10a664968;
    }
    uVar47 = (*(long *)(lVar19 + 0x100) - *(long *)(lVar19 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
    if (uVar31 <= uVar47 && uVar47 - uVar31 != 0) {
      lVar34 = *(long *)(lVar19 + 0xf8) + (ulong)uVar31 * 0x38;
      goto LAB_10a664870;
    }
  }
  FUN_10ab725fc();
LAB_10a664cec:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x10a664cf0);
  (*pcVar11)();
}



/* Entry: 10a664f20; end: 10a664f6f;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */
/* WARNING: Removing unreachable block (ram,0x00010a1c4cb0) */
/* WARNING: Removing unreachable block (ram,0x00010a1c47c0) */
/* WARNING: Removing unreachable block (ram,0x00010a1c4860) */
/* WARNING: Removing unreachable block (ram,0x00010a1c477c) */
/* WARNING: Removing unreachable block (ram,0x00010a1c4a94) */
/* WARNING: Removing unreachable block (ram,0x00010a1c4d1c) */
/* WARNING: Removing unreachable block (ram,0x00010a1c482c) */
/* WARNING: Removing unreachable block (ram,0x00010a1c4820) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a664f20(long *param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  undefined8 ******ppppppuVar6;
  byte bVar7;
  byte bVar8;
  bool bVar9;
  code *pcVar10;
  char cVar11;
  long *plVar12;
  char *pcVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *******pppppppuVar15;
  undefined *puVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  undefined8 ******ppppppuVar24;
  long lVar25;
  uint uVar26;
  uint uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined2 uStack_130;
  undefined1 uStack_12e;
  undefined5 uStack_12d;
  char cStack_119;
  undefined8 uStack_118;
  char cStack_101;
  undefined8 *******pppppppuStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 *******pppppppuStack_e0;
  undefined8 ******ppppppuStack_d8;
  undefined8 uStack_d0;
  undefined8 *******pppppppuStack_c0;
  undefined8 ******ppppppuStack_b8;
  undefined8 ******ppppppuStack_b0;
  undefined8 *******pppppppuStack_a0;
  undefined8 ******ppppppuStack_98;
  undefined8 uStack_90;
  char acStack_80 [16];
  undefined7 uStack_70;
  byte bStack_69;
  long lStack_68;
  
  if (((*(long *)(*(long *)(param_2 + 0x690) + 0x18) != 0) &&
      (lVar19 = *(long *)(*(long *)(param_2 + 0x170) + 0x100), 99 < *(int *)(lVar19 + 0x288))) &&
     (*(int *)(lVar19 + 0x28c) == 1)) {
    puVar16 = &UNK_10f66af54;
    FUN_10a00946c();
    puVar3 = (undefined8 *)(puVar16 + 0x5a0);
    if ((char)puVar16[0x5b7] < '\0') {
      __ZdlPv(*puVar3);
    }
    uVar29 = param_3[1];
    uVar28 = *param_3;
    *(undefined8 *)(puVar16 + 0x5b0) = param_3[2];
    *(undefined8 *)(puVar16 + 0x5a8) = uVar29;
    *puVar3 = uVar28;
    *(undefined1 *)((long)param_3 + 0x17) = 0;
    *(undefined1 *)param_3 = 0;
    if ((*(ushort *)(puVar16 + 0x180) >> 6 & 1) == 0) {
      return;
    }
    func_0x0001094f981c(*(undefined8 *)(puVar16 + 0x690));
    FUN_10a1c4e78(&uStack_70,puVar16 + 0x680,puVar3);
    for (lVar19 = CONCAT17(bStack_69,uStack_70); lVar19 != lStack_68; lVar19 = lVar19 + 0x18) {
      FUN_10a1d5490(*(undefined8 *)(puVar16 + 0x690),lVar19,lVar19,&UNK_10f642cb1);
      FUN_10a1c5098(puVar16 + 0x680,lVar19);
    }
    FUN_10a0426d8(&stack0xffffffffffffffa8);
    return;
  }
  plVar2 = (long *)(param_2 + 0x5a0);
  lVar22 = *(long *)(*(long *)(param_2 + 0x690) + 0x18);
  lVar25 = *(long *)(*(long *)(param_2 + 0x680) + 0x900);
  lVar19 = *(long *)(lVar25 + 0xa0);
  if ((lVar22 == 0) && (*(char *)(param_2 + 0x6f0) == '\x01')) {
    bVar7 = *(byte *)(param_2 + 0x6c7);
    uVar20 = *(ulong *)(param_2 + 0x6b8);
    if (-1 < (char)bVar7) {
      uVar20 = (ulong)bVar7;
    }
    bVar8 = *(byte *)(param_2 + 0x5b7);
    uVar23 = *(ulong *)(param_2 + 0x5a8);
    if (-1 < (char)bVar8) {
      uVar23 = (ulong)bVar8;
    }
    if (uVar20 == uVar23) {
      plVar12 = (long *)*(long *)(param_2 + 0x6b0);
      if (-1 < (char)bVar7) {
        plVar12 = (long *)(param_2 + 0x6b0);
      }
      plVar4 = (long *)*plVar2;
      if (-1 < (char)bVar8) {
        plVar4 = plVar2;
      }
      _memcmp(plVar12,plVar4);
      if ((((int)plVar12 == 0) && (*(char *)(param_2 + 0x6e0) == *(char *)(param_2 + 0x688))) &&
         (*(long *)(param_2 + 0x6e8) == lVar19)) {
        if (-1 < *(char *)(param_2 + 0x6df)) {
          lVar19 = *(long *)(param_2 + 0x6c8);
          param_1[1] = *(long *)(param_2 + 0x6d0);
          *param_1 = lVar19;
          param_1[2] = *(long *)(param_2 + 0x6d8);
          return;
        }
        lVar19 = *(long *)(param_2 + 0x6c8);
        uVar20 = *(ulong *)(param_2 + 0x6d0);
        if (uVar20 < 0x17) {
          *(char *)((long)param_1 + 0x17) = (char)uVar20;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__memmove_11034c660)(param_1,lVar19,uVar20 + 1);
          return;
        }
        if (uVar20 < 0x7ffffffffffffff7) {
          lVar19 = 0x19;
          if ((uVar20 | 7) != 0x17) {
            lVar19 = (uVar20 | 7) + 1;
          }
        }
        else {
          func_0x000104bd47d4();
        }
        func_0x000107c60e20(lVar19);
        return;
      }
    }
  }
  FUN_10a597328(acStack_80,lVar25,plVar2);
  func_0x000107c2b054(&pppppppuStack_a0,&UNK_10f642cb1);
  uVar27 = 0;
  uVar26 = 0xffffffff;
  while( true ) {
    uVar20 = (ulong)(int)uVar27;
    uVar23 = (ulong)(int)(uint)bStack_69;
    if (bStack_69 <= uVar27) break;
    if (uVar23 < uVar20) goto LAB_10a1c4d70;
    if ((acStack_80[uVar20] == '\\') && (uVar1 = uVar20 + 1, (uint)uVar1 < (uint)bStack_69)) {
      if (uVar23 < uVar1) goto LAB_10a1c4d70;
      if (acStack_80[uVar20 + 1] != '{') {
        if (uVar23 < uVar1) goto LAB_10a1c4d70;
        if (acStack_80[uVar20 + 1] != '}') goto joined_r0x00010a1c4834;
      }
      if (uVar23 < uVar1) goto LAB_10a1c4d70;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (&pppppppuStack_a0,(long)acStack_80[uVar20 + 1]);
      iVar17 = 2;
LAB_10a1c4928:
      uVar27 = uVar27 + iVar17;
    }
    else {
joined_r0x00010a1c4834:
      if ((int)uVar26 < 0) {
        if (uVar23 < uVar20) goto LAB_10a1c4d6c;
        uVar21 = uVar23 - uVar20;
        uVar1 = uVar21;
        if (1 < uVar21) {
          uVar1 = 2;
        }
        pcVar13 = acStack_80 + uVar20;
        _memcmp(pcVar13,&UNK_10f643d36,uVar1);
        if ((uVar21 < 2) || ((int)pcVar13 != 0)) {
          if (uVar20 <= uVar23) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (&pppppppuStack_a0,(long)acStack_80[uVar20]);
            iVar17 = 1;
            goto LAB_10a1c4928;
          }
          goto LAB_10a1c4d70;
        }
        uVar27 = uVar27 + 2;
        uVar26 = uVar27;
      }
      else {
        if (uVar23 < uVar20) {
LAB_10a1c4d6c:
          FUN_109ffddc8();
          goto LAB_10a1c4d70;
        }
        uVar23 = uVar23 - uVar20;
        uVar1 = uVar23;
        if (1 < uVar23) {
          uVar1 = 2;
        }
        pcVar13 = acStack_80 + uVar20;
        _memcmp(pcVar13,&UNK_10f643d39,uVar1);
        iVar17 = 1;
        if ((uVar23 < 2) || ((int)pcVar13 != 0)) goto LAB_10a1c4928;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                  (&pppppppuStack_c0,acStack_80,uVar26,(long)(int)(uVar27 - uVar26),
                   &pppppppuStack_e0);
        lVar25 = *(long *)(param_2 + 0x690);
        FUN_109ce5028(lVar25,&pppppppuStack_c0);
        if (lVar25 == 0) {
          cStack_101 = '\x02';
          uStack_118._0_2_ = 0x7b7b;
          uStack_118._2_1_ = 0;
          ppppppuVar5 = ppppppuStack_b8;
          pppppppuVar14 = pppppppuStack_c0;
          if (-1 < (long)ppppppuStack_b0) {
            ppppppuVar5 = (undefined8 ******)((ulong)ppppppuStack_b0 >> 0x38);
            pppppppuVar14 = &pppppppuStack_c0;
          }
          plVar12 = &uStack_118;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (plVar12,pppppppuVar14,ppppppuVar5);
          uStack_f8 = plVar12[1];
          pppppppuStack_100 = (undefined8 *******)*plVar12;
          uStack_f0 = plVar12[2];
          plVar12[1] = 0;
          plVar12[2] = 0;
          *plVar12 = 0;
          cStack_119 = '\x02';
          uStack_130 = 0x7d7d;
          uStack_12e = 0;
          pppppppuVar14 = &pppppppuStack_100;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppppppuVar14,&uStack_130,2);
          ppppppuStack_d8 = pppppppuVar14[1];
          pppppppuStack_e0 = (undefined8 *******)*pppppppuVar14;
          uStack_d0 = pppppppuVar14[2];
          pppppppuVar14[1] = (undefined8 ******)0x0;
          pppppppuVar14[2] = (undefined8 ******)0x0;
          *pppppppuVar14 = (undefined8 ******)0x0;
          ppppppuVar5 = ppppppuStack_d8;
          pppppppuVar14 = pppppppuStack_e0;
          if (-1 < (long)uStack_d0) {
            ppppppuVar5 = (undefined8 ******)((ulong)uStack_d0 >> 0x38);
            pppppppuVar14 = &pppppppuStack_e0;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&pppppppuStack_a0,pppppppuVar14,ppppppuVar5);
          if ((long)uStack_d0 < 0) {
            __ZdlPv(pppppppuStack_e0);
          }
          if (cStack_119 < '\0') {
            __ZdlPv(CONCAT53(uStack_12d,CONCAT12(uStack_12e,uStack_130)));
          }
          if ((long)uStack_f0 < 0) {
            __ZdlPv(pppppppuStack_100);
          }
          if (cStack_101 < '\0') {
            __ZdlPv(CONCAT53(uStack_118._3_5_,CONCAT12(uStack_118._2_1_,(undefined2)uStack_118)));
          }
LAB_10a1c4a4c:
          uVar27 = uVar27 + 2;
          uVar26 = 0xffffffff;
          bVar9 = true;
        }
        else {
          cVar11 = *(char *)(lVar25 + 0x3f);
          if ((long)cVar11 < 0) {
            lVar18 = *(long *)(lVar25 + 0x30);
            if (lVar18 != 0) goto LAB_10a1c4a30;
          }
          else if (cVar11 != '\0') {
            lVar18 = *(long *)(lVar25 + 0x30);
LAB_10a1c4a30:
            plVar12 = (long *)*(long *)(lVar25 + 0x28);
            if (-1 < cVar11) {
              lVar18 = (long)cVar11;
              plVar12 = (long *)(lVar25 + 0x28);
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (&pppppppuStack_a0,plVar12,lVar18);
            goto LAB_10a1c4a4c;
          }
          func_0x000107c2b054(param_1,&UNK_10f642cb1);
          bVar9 = false;
        }
        if ((long)ppppppuStack_b0 < 0) {
          __ZdlPv(pppppppuStack_c0);
          if (!bVar9) {
            return;
          }
        }
        else if (!bVar9) {
          return;
        }
      }
    }
  }
  if (-1 < (int)uVar26) {
    uStack_d0 = (undefined8 ******)CONCAT17(2,(undefined7)uStack_d0);
    pppppppuStack_e0 = (undefined8 *******)CONCAT53(pppppppuStack_e0._3_5_,0x7b7b);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
              (&pppppppuStack_100,acStack_80,uVar26,0xffffffffffffffff,&uStack_118);
    uVar20 = uStack_f8;
    pppppppuVar14 = pppppppuStack_100;
    if (-1 < (long)uStack_f0) {
      uVar20 = uStack_f0 >> 0x38;
      pppppppuVar14 = &pppppppuStack_100;
    }
    pppppppuVar15 = &pppppppuStack_e0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppppuVar15,pppppppuVar14,uVar20);
    ppppppuStack_b8 = pppppppuVar15[1];
    pppppppuStack_c0 = (undefined8 *******)*pppppppuVar15;
    ppppppuStack_b0 = pppppppuVar15[2];
    pppppppuVar15[1] = (undefined8 ******)0x0;
    pppppppuVar15[2] = (undefined8 ******)0x0;
    *pppppppuVar15 = (undefined8 ******)0x0;
    ppppppuVar5 = ppppppuStack_b8;
    pppppppuVar14 = pppppppuStack_c0;
    if (-1 < (long)ppppppuStack_b0) {
      ppppppuVar5 = (undefined8 ******)((ulong)ppppppuStack_b0 >> 0x38);
      pppppppuVar14 = &pppppppuStack_c0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&pppppppuStack_a0,pppppppuVar14,ppppppuVar5);
    if ((long)ppppppuStack_b0 < 0) {
      __ZdlPv(pppppppuStack_c0);
    }
    if ((long)uStack_f0 < 0) {
      __ZdlPv(pppppppuStack_100);
    }
    if ((long)uStack_d0 < 0) {
      __ZdlPv(pppppppuStack_e0);
    }
  }
  if (*(char *)(param_2 + 0x688) == '\x01') {
    ppppppuVar5 = ppppppuStack_98;
    pppppppuVar14 = pppppppuStack_a0;
    if (-1 < (long)uStack_90) {
      ppppppuVar5 = (undefined8 ******)(ulong)uStack_90._7_1_;
      pppppppuVar14 = &pppppppuStack_a0;
    }
    ppppppuStack_b8 = (undefined8 ******)0x0;
    ppppppuStack_b0 = (undefined8 ******)0x0;
    pppppppuStack_c0 = (undefined8 *******)0x0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
              (&pppppppuStack_c0,ppppppuVar5,0);
    puVar16 = PTR___DefaultRuneLocale_11034bcf8;
    if (ppppppuVar5 != (undefined8 ******)0x0) {
      ppppppuVar24 = (undefined8 ******)0x0;
      do {
        cVar11 = *(char *)((long)pppppppuVar14 + (long)ppppppuVar24);
        lVar25 = (long)cVar11;
        if ((-1 < lVar25) && ((*(uint *)(puVar16 + lVar25 * 4 + 0x3c) >> 0xf & 1) != 0)) {
          ___tolower();
          cVar11 = (char)lVar25;
        }
        ppppppuVar6 = ppppppuStack_b8;
        if (-1 < (long)ppppppuStack_b0) {
          ppppppuVar6 = (undefined8 ******)((ulong)ppppppuStack_b0 >> 0x38);
        }
        if (ppppppuVar6 < ppppppuVar24) goto LAB_10a1c4d70;
        pppppppuVar15 = pppppppuStack_c0;
        if (-1 < (long)ppppppuStack_b0) {
          pppppppuVar15 = &pppppppuStack_c0;
        }
        *(char *)((long)pppppppuVar15 + (long)ppppppuVar24) = cVar11;
        ppppppuVar24 = (undefined8 ******)((long)ppppppuVar24 + 1);
      } while (ppppppuVar5 != ppppppuVar24);
    }
  }
  else {
    if (*(char *)(param_2 + 0x688) != '\x02') goto LAB_10a1c4cc8;
    ppppppuVar5 = ppppppuStack_98;
    pppppppuVar14 = pppppppuStack_a0;
    if (-1 < (long)uStack_90) {
      ppppppuVar5 = (undefined8 ******)(ulong)uStack_90._7_1_;
      pppppppuVar14 = &pppppppuStack_a0;
    }
    ppppppuStack_b8 = (undefined8 ******)0x0;
    ppppppuStack_b0 = (undefined8 ******)0x0;
    pppppppuStack_c0 = (undefined8 *******)0x0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
              (&pppppppuStack_c0,ppppppuVar5,0);
    if (ppppppuVar5 != (undefined8 ******)0x0) {
      ppppppuVar24 = (undefined8 ******)0x0;
      do {
        cVar11 = *(char *)((long)pppppppuVar14 + (long)ppppppuVar24);
        if (-1 < cVar11) {
          ___toupper();
        }
        ppppppuVar6 = ppppppuStack_b8;
        if (-1 < (long)ppppppuStack_b0) {
          ppppppuVar6 = (undefined8 ******)((ulong)ppppppuStack_b0 >> 0x38);
        }
        if (ppppppuVar6 < ppppppuVar24) {
LAB_10a1c4d70:
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10a1c4d74);
          (*pcVar10)();
        }
        pppppppuVar15 = pppppppuStack_c0;
        if (-1 < (long)ppppppuStack_b0) {
          pppppppuVar15 = &pppppppuStack_c0;
        }
        *(char *)((long)pppppppuVar15 + (long)ppppppuVar24) = cVar11;
        ppppppuVar24 = (undefined8 ******)((long)ppppppuVar24 + 1);
      } while (ppppppuVar5 != ppppppuVar24);
    }
  }
  ppppppuStack_98 = ppppppuStack_b8;
  pppppppuStack_a0 = pppppppuStack_c0;
  uStack_90 = ppppppuStack_b0;
LAB_10a1c4cc8:
  if (lVar22 == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_2 + 0x6b0,plVar2)
    ;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_2 + 0x6c8,&pppppppuStack_a0);
    *(undefined1 *)(param_2 + 0x6e0) = *(undefined1 *)(param_2 + 0x688);
    *(long *)(param_2 + 0x6e8) = lVar19;
    *(undefined1 *)(param_2 + 0x6f0) = 1;
  }
  param_1[1] = (long)ppppppuStack_98;
  *param_1 = (long)pppppppuStack_a0;
  param_1[2] = (long)uStack_90;
  return;
}



/* Entry: 10a664f70; end: 10a664fe3;  */

void FUN_10a664f70(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_48;
  
  puVar1 = (undefined8 *)(param_1 + 0x5a0);
  if (*(char *)(param_1 + 0x5b7) < '\0') {
    __ZdlPv(*puVar1);
  }
  uVar3 = param_2[1];
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x5b0) = param_2[2];
  *(undefined8 *)(param_1 + 0x5a8) = uVar3;
  *puVar1 = uVar2;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  if ((*(ushort *)(param_1 + 0x180) >> 6 & 1) == 0) {
    return;
  }
  func_0x0001094f981c(*(undefined8 *)(param_1 + 0x690));
  FUN_10a1c4e78(&lStack_60,param_1 + 0x680,puVar1);
  for (; lStack_60 != lStack_58; lStack_60 = lStack_60 + 0x18) {
    FUN_10a1d5490(*(undefined8 *)(param_1 + 0x690),lStack_60,lStack_60,&UNK_10f642cb1);
    FUN_10a1c5098(param_1 + 0x680,lStack_60);
  }
  puStack_48 = (undefined1 *)&lStack_60;
  FUN_10a0426d8(&puStack_48);
  return;
}



/* Entry: 10a664fe4; end: 10a66510f;  */

void FUN_10a664fe4(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plStack_30;
  long *plStack_28;
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    plVar3 = (long *)0x50;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_FUN_110bcfba8;
    plVar3[4] = 0;
    plVar3[5] = 0;
    *(undefined1 *)(plVar3 + 7) = 0;
    plVar3[6] = (long)&PTR_FUN_110c6a940;
    *(undefined8 *)((long)plVar3 + 0x44) = 0;
    *(undefined8 *)((long)plVar3 + 0x3c) = 0;
    plStack_30 = plVar3 + 3;
    *plStack_30 = (long)&PTR_FUN_110c6a8d8;
    plStack_28 = plVar3;
    FUN_10a1ede50(param_1 + 0x620,&plStack_30);
    if (plStack_28 == (long *)0x0) {
      return;
    }
    plVar3 = plStack_28 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    plVar3 = (long *)0x50;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_FUN_110bcfba8;
    plVar3[4] = 0;
    plVar3[5] = 0;
    *(undefined1 *)(plVar3 + 7) = 0;
    plStack_30 = plVar3 + 3;
    *plStack_30 = (long)&PTR_FUN_110c6a8d8;
    plVar3[6] = (long)&PTR_FUN_110c6a940;
    *(undefined8 *)((long)plVar3 + 0x3c) = *(undefined8 *)(lVar4 + 0x24);
    *(undefined8 *)((long)plVar3 + 0x44) = *(undefined8 *)(lVar4 + 0x2c);
    plStack_28 = plVar3;
    FUN_10a1ede50(param_1 + 0x620,&plStack_30);
    if (plStack_28 == (long *)0x0) {
      return;
    }
    plVar3 = plStack_28 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar3 = plStack_28;
  if (lVar4 == 0) {
    (**(code **)(*plStack_28 + 0x10))(plStack_28);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
  }
  return;
}



/* Entry: 10a665110; end: 10a665147;  */

long FUN_10a665110(undefined8 param_1,float param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  undefined4 uVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  char cVar9;
  int7 iVar10;
  code *pcVar11;
  long lVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  code ***pppcVar15;
  undefined8 *puVar16;
  undefined8 **ppuVar17;
  long *plVar18;
  long lVar19;
  bool bVar20;
  byte bVar21;
  ushort uVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  undefined8 uVar26;
  ulong uVar27;
  long *plVar28;
  float *pfVar29;
  int iVar30;
  uint uVar31;
  float *pfVar32;
  undefined *puVar33;
  long lVar34;
  ulong uVar35;
  float *pfVar36;
  undefined4 *puVar37;
  long lVar38;
  ulong uVar39;
  long *plVar40;
  int *piVar41;
  long *plVar42;
  undefined8 *puVar43;
  undefined8 unaff_x19;
  undefined **ppuVar44;
  undefined **ppuVar45;
  undefined8 unaff_x21;
  ulong uVar46;
  long lVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined8 uStack_440;
  long *plStack_438;
  undefined8 ***pppuStack_430;
  long *plStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  byte abStack_410 [8];
  undefined8 ***pppuStack_408;
  ulong uStack_400;
  byte bStack_3f1;
  undefined8 ***pppuStack_3f0;
  undefined8 uStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  undefined2 uStack_3d0;
  undefined2 uStack_3ce;
  float fStack_3cc;
  undefined1 uStack_3c8;
  undefined1 uStack_3c7;
  undefined2 uStack_3c6;
  uint uStack_3c4;
  byte bStack_3c0;
  byte bStack_3bf;
  undefined8 ***pppuStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  uint uStack_3a0;
  int iStack_39c;
  uint uStack_398;
  char cStack_394;
  char cStack_393;
  undefined2 uStack_392;
  float fStack_390;
  float fStack_38c;
  float fStack_388;
  char cStack_384;
  undefined **ppuStack_380;
  undefined8 uStack_378;
  long *plStack_370;
  undefined **ppuStack_368;
  undefined1 uStack_360;
  undefined8 uStack_35c;
  undefined8 uStack_354;
  undefined **ppuStack_348;
  undefined8 uStack_340;
  long *plStack_338;
  undefined **ppuStack_330;
  undefined1 uStack_328;
  undefined8 uStack_324;
  undefined8 uStack_31c;
  byte bStack_30c;
  undefined2 uStack_30b;
  undefined1 uStack_309;
  undefined **ppuStack_308;
  undefined8 uStack_300;
  long *plStack_2f8;
  undefined **ppuStack_2f0;
  undefined1 uStack_2e8;
  undefined8 uStack_2e4;
  undefined8 uStack_2dc;
  char cStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined8 ***pppuStack_2a8;
  undefined8 *puStack_2a0;
  long *plStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined4 uStack_280;
  undefined1 uStack_271;
  undefined ***pppuStack_270;
  byte *pbStack_268;
  long *plStack_260;
  undefined ****ppppuStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 *puStack_230;
  long lStack_228;
  ulong uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined4 uStack_1e8;
  undefined1 auStack_1d0 [40];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined8 uStack_158;
  undefined7 uStack_150;
  undefined1 uStack_149;
  undefined1 auStack_148 [40];
  code *pcStack_120;
  undefined **ppuStack_118;
  long lStack_110;
  undefined1 uStack_108;
  code **ppcStack_e0;
  undefined **ppuStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  
  if ((*(ushort *)(param_3 + 0x180) & 0x17) != 0) {
    return param_3;
  }
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_2c8 = *(long *)(*(long *)(param_3 + 0x170) + 0xa90);
  lVar24 = *(long *)(*(long *)(param_3 + 0x170) + 0xa20);
  lVar47 = *(long *)(param_3 + 0x638);
  ppuStack_308 = (undefined **)((ulong)ppuStack_308 & 0xffffffffffffff00);
  cStack_2d0 = '\0';
  lVar12 = *(long *)(*(long *)(param_3 + 0x168) + 0x248);
  if ((lVar12 == 0) || ((*(ushort *)(lVar12 + 0x180) & 0x17) != 0)) {
    bVar20 = false;
  }
  else {
    FUN_10a394a64();
    uStack_2e8 = 0;
    ppuStack_308 = &PTR_FUN_110c6a8d8;
    uStack_300 = 0;
    plStack_2f8 = (long *)0x0;
    ppuStack_2f0 = &PTR_FUN_110c6a940;
    unaff_x21 = *(undefined8 *)(lVar12 + 0x28c);
    unaff_x19 = *(undefined8 *)(lVar12 + 0x294);
    bVar20 = true;
    cStack_2d0 = '\x01';
    uStack_2e4 = unaff_x21;
    uStack_2dc = unaff_x19;
  }
  bStack_30c = 0;
  uStack_309 = 0;
  if ((((*(long **)(param_3 + 0x2a0) != *(long **)(param_3 + 0x2a8)) &&
       (lVar12 = **(long **)(param_3 + 0x2a0), lVar12 != 0)) &&
      (*(long **)(lVar12 + 0x228) != *(long **)(lVar12 + 0x230))) &&
     (lVar12 = **(long **)(lVar12 + 0x228), lVar12 != 0)) {
    uStack_309 = 1;
    uVar31 = *(uint *)(lVar12 + 0x21e);
    bStack_30c = (byte)(uVar31 >> 7) & 0xfe | (byte)uVar31 |
                 (byte)(uVar31 >> 0xe) & 0xfc | (byte)(uVar31 >> 0x15) & 0xf8;
    uStack_30b = *(undefined2 *)(lVar12 + 0x219);
  }
  abStack_410[0] = 0;
  func_0x000107c2b054(&pppuStack_408,&UNK_10f66a659);
  pppuStack_3f0 = (undefined8 ****)0x0;
  uStack_3e8 = (long *)((ulong)uStack_3e8._4_4_ << 0x20);
  uStack_3c4 = uStack_3c4 & 0xffffff00;
  bStack_3c0 = 0;
  bStack_3bf = 0;
  uStack_398 = 0;
  iStack_39c = 0;
  lStack_3e0 = 0;
  uStack_3c8 = 0;
  uStack_3b0 = 0;
  uStack_3a8 = 0;
  pppuStack_3b8 = (undefined8 ****)0x0;
  uStack_3a0 = uStack_3a0 & 0xffffff00;
  cStack_394 = '\x01';
  cStack_393 = '\x01';
  fStack_390 = 0.0;
  fStack_38c = 1.0;
  fStack_388 = 0.4;
  cStack_384 = '\x02';
  uStack_360 = 0;
  ppuStack_380 = &PTR_FUN_110c6a8d8;
  uStack_378 = 0;
  plStack_370 = (long *)0x0;
  ppuStack_368 = &PTR_FUN_110c6a940;
  uStack_35c = 0;
  uStack_354 = 0;
  uStack_328 = 0;
  ppuStack_348 = &PTR_FUN_110c6a8d8;
  uStack_340 = 0;
  plStack_338 = (long *)0x0;
  ppuStack_330 = &PTR_FUN_110c6a940;
  uStack_31c = 0;
  uStack_324 = 0;
  lStack_3d8 = *(long *)(*(long *)(*(long *)(param_3 + 0x170) + 0x900) + 0xa0);
  uStack_3d0 = 0;
  uStack_3ce = 0;
  fStack_3cc = 0.0;
  FUN_10a1c462c(&uStack_250,param_3 + 0x680,param_3 + 0x5a0);
  if ((char)bStack_3f1 < '\0') {
    __ZdlPv(pppuStack_408);
  }
  uStack_400 = (ulong)uStack_248;
  pppuStack_408 = uStack_250;
  bStack_3f1 = uStack_240._7_1_;
  uStack_250 = (undefined8 ****)0x0;
  uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
  uStack_240 = 0;
  pcStack_120 = (code *)&uStack_250;
  if (*(uint *)(param_3 + 0x5c8) == 0xffffffff) {
    FUN_10a0d459c();
    goto LAB_10a664cec;
  }
  ppcStack_e0 = &pcStack_120;
  (*(code *)(&PTR_DAT_110c06c48)[*(uint *)(param_3 + 0x5c8)])(&ppcStack_e0,param_3 + 0x5b8);
  uStack_3e8 = uStack_248;
  pppuStack_3f0 = uStack_250;
  lStack_3e0 = uStack_240;
  uVar5 = *(undefined4 *)(param_3 + 0x5d0);
  uStack_3c8 = (undefined1)uVar5;
  uStack_3c7 = (undefined1)((uint)uVar5 >> 8);
  uStack_3c6 = (undefined2)((uint)uVar5 >> 0x10);
  uStack_3c4 = CONCAT31(uStack_3c4._1_3_,*(undefined1 *)(param_3 + 0x5d4));
  bStack_3c0 = (byte)*(undefined2 *)(param_3 + 0x5d8);
  bStack_3bf = (byte)((ushort)*(undefined2 *)(param_3 + 0x5d8) >> 8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (&pppuStack_3b8,param_3 + 0x5e0);
  uStack_3a0 = CONCAT31(uStack_3a0._1_3_,*(undefined1 *)(param_3 + 0x5f8));
  fStack_3cc = *(float *)(param_3 + 0x5fc);
  fVar48 = fStack_3cc;
  FUN_10a65f27c(param_3);
  uStack_3d0 = SUB42(fVar48,0);
  uStack_3ce = (undefined2)((uint)fVar48 >> 0x10);
  fStack_390 = (float)*(undefined8 *)(param_3 + 0x614);
  fStack_38c = (float)((ulong)*(undefined8 *)(param_3 + 0x614) >> 0x20);
  fStack_388 = *(float *)(param_3 + 0x600);
  cStack_384 = *(char *)(param_3 + 0x604);
  iStack_39c = (int)*(undefined8 *)(param_3 + 0x608);
  uStack_398 = (uint)((ulong)*(undefined8 *)(param_3 + 0x608) >> 0x20);
  cStack_394 = *(char *)(param_3 + 0x30a);
  cStack_393 = *(char *)(param_3 + 0x309);
  uStack_324 = *(undefined8 *)(*(long *)(param_3 + 0x620) + 0x24);
  uStack_31c = *(undefined8 *)(*(long *)(param_3 + 0x620) + 0x2c);
  abStack_410[0] =
       abStack_410[0] & 0xfc | *(byte *)(param_3 + 0x610) | *(char *)(param_3 + 0x61c) << 1;
  *(ushort *)(lVar47 + 0xe9) =
       *(ushort *)(lVar47 + 0xe9) & 0xff80 | *(ushort *)(lVar47 + 0xe9) + 1 & 0x7f;
  *(ushort *)(lVar47 + 0x30) =
       *(ushort *)(lVar47 + 0x30) & 0xff80 | *(ushort *)(lVar47 + 0x30) + 1 & 0x7f;
  uStack_108 = 0;
  pcStack_120 = FUN_10a1d3648;
  ppuStack_118 = &PTR_FUN_110bad818;
  uStack_354 = unaff_x19;
  uStack_35c = unaff_x21;
  if (!bVar20) {
    uStack_354 = uStack_31c;
    uStack_35c = uStack_324;
  }
  uVar46 = uStack_400;
  if (-1 < (char)bStack_3f1) {
    uVar46 = (ulong)bStack_3f1;
  }
  bVar21 = *(byte *)(lVar47 + 0x177);
  uVar25 = *(ulong *)(lVar47 + 0x168);
  if (-1 < (char)bVar21) {
    uVar25 = (ulong)bVar21;
  }
  lStack_110 = lVar47;
  if (uVar46 == uVar25) {
    ppppuVar13 = (undefined8 ****)pppuStack_408;
    if (-1 < (char)bStack_3f1) {
      ppppuVar13 = &pppuStack_408;
    }
    lVar12 = *(long *)(lVar47 + 0x160);
    if (-1 < (char)bVar21) {
      lVar12 = lVar47 + 0x160;
    }
    _memcmp(ppppuVar13,lVar12);
    if ((int)ppppuVar13 != 0) goto LAB_10a662f54;
    ppppuVar13 = &pppuStack_3f0;
    func_0x00010a66d1cc(ppppuVar13,lVar47 + 0x178);
    if ((((int)ppppuVar13 == 0) || (lStack_3d8 != *(long *)(lVar47 + 400))) ||
       ((param_2 = *(float *)(lVar47 + 0x198), (float)CONCAT22(uStack_3ce,uStack_3d0) != param_2 ||
        (((uStack_398 & 0xfffffffe) == 4 && ((*(uint *)(lVar47 + 0x1d0) & 0xfffffffe) != 4))))))
    goto LAB_10a662f54;
    uVar23 = uStack_3c4 & 0xff;
    uVar31 = (uint)*(byte *)(lVar47 + 0x1a4);
    if ((*(byte *)(lVar47 + 0x1a4) & (byte)uStack_3c4) != 0) {
      uVar23 = CONCAT22(uStack_3c6,CONCAT11(uStack_3c7,uStack_3c8));
      uVar31 = *(uint *)(lVar47 + 0x1a0);
    }
    if (uVar23 != uVar31) goto LAB_10a662f54;
    bVar7 = *(byte *)(lVar47 + 0x1a9);
    bVar21 = bStack_3bf;
    if ((bVar7 & bStack_3bf) != 0) {
      bVar7 = *(byte *)(lVar47 + 0x1a8);
      bVar21 = bStack_3c0;
    }
    if (((bVar21 != bVar7) ||
        (ppppuVar13 = &pppuStack_3b8, FUN_10a0a4dc8(&pppuStack_3b8,lVar47 + 0x1b0),
        ((ulong)ppppuVar13 & 1) == 0)) || ((uStack_3a0 & 0xff) != (uint)*(byte *)(lVar47 + 0x1c8)))
    goto LAB_10a662f54;
    bVar21 = *(byte *)(lVar47 + 0x158) ^ abStack_410[0];
    if ((((bVar21 & 1) != 0) ||
        (param_2 = ABS(fStack_390 - *(float *)(lVar47 + 0x1d8)), 1e-06 <= param_2)) ||
       ((param_2 = ABS(fStack_38c - *(float *)(lVar47 + 0x1dc)), 1e-06 <= param_2 ||
        (iStack_39c != *(int *)(lVar47 + 0x1cc))))) {
      bVar20 = false;
      goto LAB_10a662f58;
    }
    if (((uStack_398 == *(uint *)(lVar47 + 0x1d0)) && (cStack_394 == *(char *)(lVar47 + 0x1d4))) &&
       (cStack_393 == *(char *)(lVar47 + 0x1d5))) {
      lVar12 = lVar47 + 0x1e8;
      func_0x00010acae644(lVar12,&ppuStack_380);
      if ((int)lVar12 == 0) goto LAB_10a664cb0;
      param_2 = *(float *)(lVar47 + 0x1e0);
      if ((fStack_388 == param_2) && (cStack_384 == *(char *)(lVar47 + 0x1e4))) {
        bVar7 = 0;
        bVar21 = bVar21 >> 1 & 1;
      }
      else {
        bVar7 = 0;
        bVar21 = 1;
      }
    }
    else {
LAB_10a664cb0:
      bVar21 = 1;
      bVar7 = 1;
    }
    bVar20 = false;
  }
  else {
LAB_10a662f54:
    bVar20 = true;
LAB_10a662f58:
    bVar7 = 1;
    bVar21 = 1;
  }
  uVar46 = (long)(char)bStack_3f1;
  ppppuVar13 = &pppuStack_408;
  if (((long)(char)bStack_3f1 < 0) &&
     (uVar46 = uStack_400, ppppuVar13 = (undefined8 ****)pppuStack_408, 10000 < uStack_400)) {
    uVar46 = 10000;
    do {
      if (-0x41 < *(char *)((long)pppuStack_408 + uVar46)) {
        if ((long)uVar46 < 0) goto LAB_10a664cec;
        break;
      }
      uVar46 = uVar46 - 1;
    } while (uVar46 != 0);
  }
  if ((*(char *)(lVar47 + 0x435) == '\x01') &&
     (bVar6 = *(byte *)(lVar47 + 0x434), (uint)bVar6 == (uStack_3a0 & 0xff))) {
    uVar25 = (ulong)*(char *)(lVar47 + 0x3ff);
    if ((long)uVar25 < 0) {
      lVar12 = *(long *)(lVar47 + 1000);
      uVar25 = *(ulong *)(lVar47 + 0x3f0);
    }
    else {
      lVar12 = lVar47 + 1000;
    }
    if ((uVar46 != uVar25) ||
       (ppppuVar14 = ppppuVar13, _memcmp(ppppuVar13,lVar12,uVar46), (int)ppppuVar14 != 0))
    goto LAB_10a662ff4;
    if (((*(byte *)(lVar47 + 0x436) & 1) == 0) ||
       (param_2 = *(float *)(lVar47 + 0x430), param_2 != fStack_3cc)) goto LAB_10a663078;
  }
  else {
LAB_10a662ff4:
    lVar12 = lVar47 + 1000;
    func_0x000107c2c4d8(lVar12,ppppuVar13,uVar46);
    lVar19 = (long)*(char *)(lVar47 + 0x3ff);
    if (lVar19 < 0) {
      lVar12 = *(long *)(lVar47 + 1000);
      lVar19 = *(long *)(lVar47 + 0x3f0);
    }
    FUN_10a1c0bf8(&uStack_250,lVar12,lVar19,(byte)uStack_3a0);
    func_0x00010a66d31c(lVar47 + 0x400);
    *(long **)(lVar47 + 0x408) = uStack_248;
    *(undefined8 *****)(lVar47 + 0x400) = uStack_250;
    *(long *)(lVar47 + 0x410) = uStack_240;
    uStack_240 = 0;
    uStack_248 = (long *)0x0;
    uStack_250 = (undefined8 ****)0x0;
    ppcStack_e0 = (code **)&uStack_250;
    FUN_10a1cd268(&ppcStack_e0);
    *(byte *)(lVar47 + 0x434) = (byte)uStack_3a0;
    *(undefined2 *)(lVar47 + 0x435) = 1;
    bVar6 = (byte)uStack_3a0;
LAB_10a663078:
    FUN_10a657c70(fStack_3cc,&uStack_250,lVar47 + 0x400,bVar6 & 1);
    plVar28 = (long *)(lVar47 + 0x418);
    if (*plVar28 != 0) {
      *(long *)(lVar47 + 0x420) = *plVar28;
      __ZdlPv();
      *plVar28 = 0;
      *(undefined8 *)(lVar47 + 0x420) = 0;
      *(undefined8 *)(lVar47 + 0x428) = 0;
    }
    *(long **)(lVar47 + 0x420) = uStack_248;
    *plVar28 = (long)uStack_250;
    *(long *)(lVar47 + 0x428) = uStack_240;
    *(float *)(lVar47 + 0x430) = fStack_3cc;
    *(undefined1 *)(lVar47 + 0x436) = 1;
  }
  if ((bVar7 == 0) || (*(long *)(lVar47 + 0x388) == 0)) {
    if (bVar20) goto LAB_10a663108;
    bVar6 = 0;
    fVar48 = fStack_3cc;
LAB_10a663380:
    if (bVar7 != 0) goto LAB_10a663388;
  }
  else {
    fVar48 = ABS(*(float *)(*(long *)(lVar47 + 0x388) + 0x10) + -1.0);
    param_2 = 1e-06;
    if (1e-06 <= fVar48) {
      bVar20 = true;
    }
    if (bVar20) {
LAB_10a663108:
      uVar46 = uStack_3b0;
      ppppuVar13 = (undefined8 ****)pppuStack_3b8;
      if (-1 < (long)uStack_3a8) {
        uVar46 = uStack_3a8 >> 0x38;
        ppppuVar13 = &pppuStack_3b8;
      }
      FUN_10a9e2380(&uStack_250,*(undefined8 *)(lStack_2c8 + 0x18),lVar47 + 0x400,lVar47 + 0x418,
                    &pppuStack_3f0,
                    CONCAT44(uStack_3c4,CONCAT22(uStack_3c6,CONCAT11(uStack_3c7,uStack_3c8))),
                    CONCAT11(bStack_3bf,bStack_3c0),ppppuVar13,uVar46);
      func_0x00010a66d3b8(lVar47 + 600);
      *(long **)(lVar47 + 0x260) = uStack_248;
      *(undefined8 *****)(lVar47 + 600) = uStack_250;
      *(long *)(lVar47 + 0x268) = uStack_240;
      uStack_250 = (undefined8 ****)0x0;
      uStack_248 = (long *)0x0;
      uStack_240 = 0;
      plVar28 = (long *)(lVar47 + 0x270);
      if (*(long *)(lVar47 + 0x288) != 0) {
        func_0x00010a283f20(plVar28,*(undefined8 *)(lVar47 + 0x280));
        *(undefined8 *)(lVar47 + 0x280) = 0;
        lVar12 = *(long *)(lVar47 + 0x278);
        if (lVar12 != 0) {
          lVar19 = 0;
          do {
            *(undefined8 *)(*plVar28 + lVar19 * 8) = 0;
            lVar19 = lVar19 + 1;
          } while (lVar12 != lVar19);
        }
        *(undefined8 *)(lVar47 + 0x288) = 0;
      }
      puVar16 = uStack_238;
      uStack_238 = (undefined8 *)0x0;
      lVar12 = *plVar28;
      *plVar28 = (long)puVar16;
      if (lVar12 != 0) {
        __ZdlPv();
      }
      puVar16 = puStack_230;
      *(undefined8 **)(lVar47 + 0x278) = puStack_230;
      puStack_230 = (undefined8 *)0x0;
      *(ulong *)(lVar47 + 0x288) = uStack_220;
      *(undefined4 *)(lVar47 + 0x290) = (undefined4)uStack_218;
      *(long *)(lVar47 + 0x280) = lStack_228;
      if (uStack_220 != 0) {
        puVar43 = *(undefined8 **)(lStack_228 + 8);
        if (((ulong)puVar16 & (long)puVar16 - 1U) == 0) {
          puVar43 = (undefined8 *)((ulong)puVar43 & (long)puVar16 - 1U);
        }
        else if (puVar16 <= puVar43) {
          uVar46 = 0;
          if (puVar16 != (undefined8 *)0x0) {
            uVar46 = (ulong)puVar43 / (ulong)puVar16;
          }
          puVar43 = (undefined8 *)((long)puVar43 - uVar46 * (long)puVar16);
        }
        *(long *)(*plVar28 + (long)puVar43 * 8) = lVar47 + 0x280;
        lStack_228 = 0;
        uStack_220 = 0;
      }
      plVar28 = (long *)(lVar47 + 0x298);
      if (*plVar28 != 0) {
        *(long *)(lVar47 + 0x2a0) = *plVar28;
        __ZdlPv();
        *plVar28 = 0;
        *(undefined8 *)(lVar47 + 0x2a0) = 0;
        *(undefined8 *)(lVar47 + 0x2a8) = 0;
      }
      *(long *)(lVar47 + 0x2a0) = uStack_208;
      *plVar28 = lStack_210;
      *(long *)(lVar47 + 0x2a8) = lStack_200;
      lStack_210 = 0;
      uStack_208 = 0;
      lStack_200 = 0;
      func_0x00010a66d440(lVar47 + 0x2b0,&lStack_1f8);
      func_0x00010a66d518(lVar47 + 0x2d8,auStack_1d0);
      if (*(long *)(lVar47 + 0x300) != 0) {
        *(long *)(lVar47 + 0x308) = *(long *)(lVar47 + 0x300);
        __ZdlPv();
        *(undefined8 *)(lVar47 + 0x300) = 0;
        *(undefined8 *)(lVar47 + 0x308) = 0;
        *(undefined8 *)(lVar47 + 0x310) = 0;
      }
      *(undefined8 *)(lVar47 + 0x308) = uStack_1a0;
      *(undefined8 *)(lVar47 + 0x300) = uStack_1a8;
      *(undefined8 *)(lVar47 + 0x310) = uStack_198;
      uStack_1a0 = 0;
      uStack_198 = 0;
      uStack_1a8 = 0;
      func_0x00010937d1e4((undefined8 *)(lVar47 + 0x318));
      *(undefined8 *)(lVar47 + 800) = uStack_188;
      *(undefined8 *)(lVar47 + 0x318) = uStack_190;
      *(undefined8 *)(lVar47 + 0x328) = uStack_180;
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_180 = 0;
      if (*(long *)(lVar47 + 0x330) != 0) {
        *(long *)(lVar47 + 0x338) = *(long *)(lVar47 + 0x330);
        __ZdlPv();
        *(undefined8 *)(lVar47 + 0x330) = 0;
        *(undefined8 *)(lVar47 + 0x338) = 0;
        *(undefined8 *)(lVar47 + 0x340) = 0;
      }
      *(undefined8 *)(lVar47 + 0x338) = uStack_170;
      *(undefined8 *)(lVar47 + 0x330) = uStack_178;
      *(undefined8 *)(lVar47 + 0x340) = uStack_168;
      uStack_170 = 0;
      uStack_168 = 0;
      uStack_178 = 0;
      if (*(char *)(lVar47 + 0x35f) < '\0') {
        __ZdlPv(*(undefined8 *)(lVar47 + 0x348));
      }
      *(undefined8 *)(lVar47 + 0x350) = uStack_158;
      *(undefined8 *)(lVar47 + 0x348) = CONCAT71(uStack_15f,uStack_160);
      *(ulong *)(lVar47 + 0x358) = CONCAT17(uStack_149,uStack_150);
      uStack_149 = 0;
      uStack_160 = 0;
      func_0x000107c283f0(lVar47 + 0x360,auStack_148);
      func_0x00010a283e44(&uStack_250);
      param_2 = 4388.572;
      fVar48 = 4388.572 / (float)CONCAT22(uStack_3ce,uStack_3d0);
      *(float *)(lVar47 + 0x3c8) = fVar48;
      bVar6 = 1;
      goto LAB_10a663380;
    }
    bVar6 = 0;
LAB_10a663388:
    func_0x00010acae698(&ppuStack_380);
    fVar50 = uStack_35c._4_4_;
    fVar52 = (float)uStack_35c;
    fVar48 = fVar52 + fVar48;
    param_2 = uStack_35c._4_4_ + param_2;
    uVar26 = uStack_35c;
    fVar51 = param_2;
    if (cStack_2d0 == '\x01') {
      fVar49 = fVar48;
      func_0x00010acae6ac(&ppuStack_380);
      uVar26 = CONCAT44(fVar50 - fVar51,fVar52 - fVar49);
      fVar48 = fVar48 - fVar49;
      param_2 = param_2 - fVar51;
    }
    fVar50 = *(float *)(lVar47 + 0x3c8);
    uVar26 = CONCAT44((float)((ulong)uVar26 >> 0x20) * fVar50,(float)uVar26 * fVar50);
    uStack_418 = CONCAT44(param_2 * fVar50,fVar48 * fVar50);
    uVar46 = uStack_3b0;
    ppppuVar13 = (undefined8 ****)pppuStack_3b8;
    if (-1 < (long)uStack_3a8) {
      uVar46 = uStack_3a8 >> 0x38;
      ppppuVar13 = &pppuStack_3b8;
    }
    uStack_420 = uVar26;
    FUN_10a9e8ce0(lStack_2c8,&pppuStack_3f0,
                  CONCAT44(uStack_3c4,CONCAT22(uStack_3c6,CONCAT11(uStack_3c7,uStack_3c8))),
                  CONCAT11(bStack_3bf,bStack_3c0),ppppuVar13,uVar46,100);
    fVar50 = fStack_38c;
    fVar48 = fStack_390;
    cVar9 = cStack_393;
    cVar8 = cStack_394;
    uVar31 = uStack_398;
    iVar30 = iStack_39c;
    bVar4 = abStack_410[0];
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    lStack_d0 = 0;
    ppcStack_e0 = (code **)FUN_10a67efcc;
    ppuStack_d8 = &PTR_DAT_110950c70;
    pbStack_268 = abStack_410;
    pppuStack_270 = (undefined ***)&PTR_FUN_110c07950;
    plStack_260 = &lStack_2c8;
    ppppuStack_258 = &pppuStack_270;
    pppcVar15 = (code ***)(lVar47 + 600);
    FUN_10a67ed7c(fStack_390,fStack_38c,&lStack_2b0,&uStack_420,pppcVar15,abStack_410[0] & 1,
                  uStack_398,iStack_39c,&pppuStack_270,lVar24,0);
    lVar12 = lStack_2b0;
    if (*(long *)(lStack_2b0 + 0x10) == 0) {
      puVar16 = (undefined8 *)0xb0;
      __Znwm();
      *(undefined8 *)((long)puVar16 + 0x2c) = 0;
      *(undefined8 *)((long)puVar16 + 0x24) = 0;
      *(undefined8 *)((long)puVar16 + 0x1c) = 0;
      *(undefined8 *)((long)puVar16 + 0x14) = 0;
      *(undefined8 *)((long)puVar16 + 0x3c) = 0;
      *(undefined8 *)((long)puVar16 + 0x34) = 0;
      *(undefined8 *)((long)puVar16 + 0x4c) = 0;
      *(undefined8 *)((long)puVar16 + 0x44) = 0;
      *(undefined8 *)((long)puVar16 + 0x5c) = 0;
      *(undefined8 *)((long)puVar16 + 0x54) = 0;
      *(undefined8 *)((long)puVar16 + 0x6c) = 0;
      *(undefined8 *)((long)puVar16 + 100) = 0;
      *(undefined8 *)((long)puVar16 + 0x7c) = 0;
      *(undefined8 *)((long)puVar16 + 0x74) = 0;
      *(undefined8 *)((long)puVar16 + 0x8c) = 0;
      *(undefined8 *)((long)puVar16 + 0x84) = 0;
      *(undefined4 *)(puVar16 + 2) = 0x3f800000;
      puVar16[4] = 0;
      puVar16[3] = 0;
      puVar16[6] = 0;
      puVar16[5] = 0;
      puVar16[8] = 0;
      puVar16[7] = 0;
      puVar16[10] = 0;
      puVar16[9] = 0;
      puVar16[0xc] = 0;
      puVar16[0xb] = 0;
      puVar16[0xe] = 0;
      puVar16[0xd] = 0;
      puVar16[0x10] = 0;
      puVar16[0xf] = 0;
      puVar16[0x11] = 0;
      *(undefined4 *)(puVar16 + 0x12) = 0x3f800000;
      *(undefined4 *)((long)puVar16 + 0x94) = 0;
      puVar16[0x13] = 0;
      puVar16[0x14] = 0;
      puVar16[0x15] = 0;
      puVar16[1] = uStack_418;
      *puVar16 = uStack_420;
      fVar48 = (float)uStack_418;
      if ((cVar9 != '\x02') && (fVar48 = (float)uStack_420, cVar9 == '\x01')) {
        fVar48 = ((float)uStack_420 + (float)uStack_418) * 0.5;
      }
      fVar51 = (float)uVar26 + fVar51;
      fVar50 = uStack_420._4_4_;
      if (cVar8 == '\0') {
LAB_10a663d60:
        fVar50 = fVar51 + fVar50;
      }
      else {
        fVar50 = uStack_418._4_4_;
        if (cVar8 == '\x01') {
          fVar51 = fVar51 * 0.5;
          fVar50 = (uStack_420._4_4_ + uStack_418._4_4_) * 0.5;
          goto LAB_10a663d60;
        }
      }
      uStack_250 = (undefined8 ****)CONCAT44(fVar50 - (float)uVar26,fVar48);
      uStack_248 = (long *)0x0;
      uStack_240 = CONCAT71(uStack_240._1_7_,1);
      FUN_10a20699c(puVar16 + 8,&uStack_250);
    }
    else {
      if (*(char *)(ppuStack_d8 + 1) == '\x01') {
        pppcVar15 = &ppcStack_e0;
        (*(code *)ppcStack_e0)(*(undefined4 *)(lStack_2b0 + 0x18));
        if (pppcVar15 == (code ***)0x0) {
          puVar16 = (undefined8 *)0xb0;
          __Znwm();
          *(undefined8 *)((long)puVar16 + 0x2c) = 0;
          *(undefined8 *)((long)puVar16 + 0x24) = 0;
          *(undefined8 *)((long)puVar16 + 0x1c) = 0;
          *(undefined8 *)((long)puVar16 + 0x14) = 0;
          *(undefined8 *)((long)puVar16 + 0x3c) = 0;
          *(undefined8 *)((long)puVar16 + 0x34) = 0;
          *(undefined8 *)((long)puVar16 + 0x4c) = 0;
          *(undefined8 *)((long)puVar16 + 0x44) = 0;
          *(undefined8 *)((long)puVar16 + 0x5c) = 0;
          *(undefined8 *)((long)puVar16 + 0x54) = 0;
          *(undefined8 *)((long)puVar16 + 0x6c) = 0;
          *(undefined8 *)((long)puVar16 + 100) = 0;
          *(undefined8 *)((long)puVar16 + 0x7c) = 0;
          *(undefined8 *)((long)puVar16 + 0x74) = 0;
          *(undefined8 *)((long)puVar16 + 0x8c) = 0;
          *(undefined8 *)((long)puVar16 + 0x84) = 0;
          *(undefined4 *)(puVar16 + 2) = 0x3f800000;
          puVar16[4] = 0;
          puVar16[3] = 0;
          puVar16[6] = 0;
          puVar16[5] = 0;
          puVar16[8] = 0;
          puVar16[7] = 0;
          puVar16[10] = 0;
          puVar16[9] = 0;
          puVar16[0xc] = 0;
          puVar16[0xb] = 0;
          puVar16[0xe] = 0;
          puVar16[0xd] = 0;
          puVar16[0x10] = 0;
          puVar16[0xf] = 0;
          puVar16[0x11] = 0;
          *(undefined4 *)(puVar16 + 0x12) = 0x3f800000;
          *(undefined4 *)((long)puVar16 + 0x94) = 0;
          puVar16[0x13] = 0;
          puVar16[0x14] = 0;
          puVar16[0x15] = 0;
          puVar16[1] = uStack_418;
          *puVar16 = uStack_420;
          goto LAB_10a663d88;
        }
        uVar23 = 0;
        if (iVar30 == 2) {
          uVar23 = (uint)(uVar31 == 2);
        }
        uVar2 = 0;
        if ((bVar4 & 1) == 0 && uVar31 != 3) {
          uVar2 = uVar31;
        }
        iVar3 = 0;
        if ((bVar4 & 1) == 0 && iVar30 != 2) {
          iVar3 = iVar30;
        }
        FUN_10a67ed7c(fVar48,fVar50,&uStack_250,&uStack_420,pppcVar15,0,uVar2,iVar3,&pppuStack_270,
                      lVar24,uVar23 | 0x100);
        ppppuVar13 = uStack_250;
        uStack_250 = (undefined8 ****)0x0;
        func_0x00010a67ef88(&lStack_2b0,ppppuVar13);
        func_0x00010a67ef88(&uStack_250,0);
      }
      else {
        for (lVar19 = *(long *)(lStack_2b0 + 8); lVar19 != lVar12; lVar19 = *(long *)(lVar19 + 8)) {
          FUN_10a24f238(*(undefined4 *)(lVar12 + 0x18),lVar19 + 0x10);
        }
      }
      uStack_2c0 = 0;
      uStack_2b8 = 0;
      FUN_10a2527a0(fVar50,lStack_2b0);
      FUN_10a2528fc(lStack_2b0,&uStack_420,cVar9,cVar8,&uStack_2c0);
      puVar16 = (undefined8 *)0xb0;
      __Znwm();
      *(undefined8 *)((long)puVar16 + 0x8c) = 0;
      *(undefined8 *)((long)puVar16 + 0x84) = 0;
      *(undefined8 *)((long)puVar16 + 0x7c) = 0;
      *(undefined8 *)((long)puVar16 + 0x74) = 0;
      *(undefined8 *)((long)puVar16 + 0x6c) = 0;
      *(undefined8 *)((long)puVar16 + 100) = 0;
      *(undefined8 *)((long)puVar16 + 0x5c) = 0;
      *(undefined8 *)((long)puVar16 + 0x54) = 0;
      *(undefined8 *)((long)puVar16 + 0x4c) = 0;
      *(undefined8 *)((long)puVar16 + 0x44) = 0;
      *(undefined8 *)((long)puVar16 + 0x3c) = 0;
      *(undefined8 *)((long)puVar16 + 0x34) = 0;
      *(undefined8 *)((long)puVar16 + 0x2c) = 0;
      *(undefined8 *)((long)puVar16 + 0x24) = 0;
      *(undefined8 *)((long)puVar16 + 0x1c) = 0;
      *(undefined8 *)((long)puVar16 + 0x14) = 0;
      *(undefined4 *)(puVar16 + 0x12) = 0x3f800000;
      *(undefined4 *)((long)puVar16 + 0x94) = 0;
      puVar16[0x13] = 0;
      puVar16[0x14] = 0;
      puVar16[0x15] = 0;
      puVar16[1] = uStack_418;
      *puVar16 = uStack_420;
      *(undefined4 *)(puVar16 + 2) = *(undefined4 *)(lStack_2b0 + 0x18);
      FUN_10a252a88(&uStack_250,lStack_2b0,pppcVar15);
      lVar12 = puVar16[3];
      if (lVar12 != 0) {
        lVar19 = lVar12;
        lVar34 = puVar16[4];
        if (puVar16[4] != lVar12) {
          do {
            lVar19 = lVar34 + -0x70;
            FUN_10a1d37cc(lVar34 + -0x20);
            lVar34 = lVar19;
          } while (lVar19 != lVar12);
          lVar19 = puVar16[3];
        }
        puVar16[4] = lVar12;
        __ZdlPv(lVar19);
        puVar16[3] = 0;
        puVar16[4] = 0;
        puVar16[5] = 0;
      }
      puVar16[4] = uStack_248;
      puVar16[3] = uStack_250;
      puVar16[5] = uStack_240;
      uStack_240 = 0;
      uStack_248 = (long *)0x0;
      uStack_250 = (undefined8 ****)0x0;
      puStack_2a0 = &uStack_250;
      FUN_10a26a99c(&puStack_2a0);
      if (puVar16[0x11] != 0) {
        func_0x00010a67ef4c(puVar16[0x10]);
        puVar16[0x10] = 0;
        lVar12 = puVar16[0xf];
        if (lVar12 != 0) {
          lVar19 = 0;
          do {
            *(undefined8 *)(puVar16[0xe] + lVar19 * 8) = 0;
            lVar19 = lVar19 + 1;
          } while (lVar12 != lVar19);
        }
        puVar16[0x11] = 0;
      }
      uVar26 = *(undefined8 *)(lStack_2b0 + 0x20);
      *(undefined8 *)(lStack_2b0 + 0x20) = 0;
      lVar12 = puVar16[0xe];
      puVar16[0xe] = uVar26;
      if (lVar12 != 0) {
        __ZdlPv();
      }
      lVar12 = *(long *)(lStack_2b0 + 0x30);
      uVar46 = *(ulong *)(lStack_2b0 + 0x28);
      puVar16[0x10] = lVar12;
      puVar16[0xf] = uVar46;
      *(undefined8 *)(lStack_2b0 + 0x28) = 0;
      lVar19 = *(long *)(lStack_2b0 + 0x38);
      puVar16[0x11] = lVar19;
      *(undefined4 *)(puVar16 + 0x12) = *(undefined4 *)(lStack_2b0 + 0x40);
      if (lVar19 != 0) {
        uVar25 = *(ulong *)(lVar12 + 8);
        if ((uVar46 & uVar46 - 1) == 0) {
          uVar25 = uVar25 & uVar46 - 1;
        }
        else if (uVar46 <= uVar25) {
          uVar27 = 0;
          if (uVar46 != 0) {
            uVar27 = uVar25 / uVar46;
          }
          uVar25 = uVar25 - uVar27 * uVar46;
        }
        *(undefined8 **)(puVar16[0xe] + uVar25 * 8) = puVar16 + 0x10;
        *(long *)(lStack_2b0 + 0x30) = 0;
        *(undefined8 *)(lStack_2b0 + 0x38) = 0;
      }
      FUN_10a252e1c(&uStack_250,lStack_2b0);
      FUN_10a20d9b0(puVar16 + 0x13);
      puVar16[0x14] = uStack_248;
      puVar16[0x13] = uStack_250;
      puVar16[0x15] = uStack_240;
      uStack_240 = 0;
      uStack_248 = (long *)0x0;
      uStack_250 = (undefined8 ****)0x0;
      puStack_2a0 = &uStack_250;
      FUN_10a208bbc(&puStack_2a0);
      plStack_298 = (long *)0x0;
      puStack_2a0 = (undefined8 *)0x0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_280 = 0x3f800000;
      func_0x00010a20da18(&puStack_2a0,(long)(float)*(ulong *)(lStack_2b0 + 0x10));
      pfVar29 = (float *)puVar16[3];
      pfVar32 = (float *)puVar16[4];
      if (pfVar32 != pfVar29) {
        puVar43 = (undefined8 *)0x0;
        lVar12 = 0x40;
        do {
          pppuStack_2a8 = *(undefined8 ****)((long)pfVar29 + lVar12);
          ppuVar17 = &puStack_2a0;
          FUN_10a20dc24(ppuVar17,&pppuStack_2a8);
          if (ppuVar17 == (undefined8 **)0x0) {
            ppuVar17 = &puStack_2a0;
            uStack_250 = &pppuStack_2a8;
            FUN_10a20dcc4(ppuVar17,&pppuStack_2a8,&UNK_10dd5b8f9,&uStack_250,&uStack_271);
            ppuVar17[3] = puVar43;
          }
          puVar43 = (undefined8 *)((long)puVar43 + 1);
          ppuVar17[4] = puVar43;
          pfVar29 = (float *)puVar16[3];
          pfVar32 = (float *)puVar16[4];
          lVar12 = lVar12 + 0x70;
        } while (puVar43 < (undefined8 *)(((long)pfVar32 - (long)pfVar29 >> 4) * 0x6db6db6db6db6db7)
                );
      }
      pppuStack_2a8 = (undefined8 ****)0x0;
      lVar12 = *(long *)(lStack_2b0 + 8);
      if (lVar12 != lStack_2b0) {
        do {
          lVar19 = *(long *)(lVar12 + 8);
          FUN_10a20ded0(puVar16 + 8,puVar16[9],*(long *)(lVar12 + 0x58),*(long *)(lVar12 + 0x60),
                        (*(long *)(lVar12 + 0x60) - *(long *)(lVar12 + 0x58) >> 3) *
                        -0x5555555555555555);
          uVar46 = lVar12 + 0x10;
          FUN_10a24d004();
          if (uVar46 != 0) {
            uVar25 = 0;
            do {
              uStack_220 = 0;
              lStack_228 = 0;
              puStack_230 = (undefined8 *)0x0;
              uStack_238 = (undefined8 *)0x0;
              uStack_240 = 0;
              uStack_248 = (long *)0x0;
              uVar27 = 0;
              if (*(long *)(lVar12 + 0x20) != 0) {
                uVar27 = (ulong)*(byte *)(*(long *)(lVar12 + 0x18) + 0x70);
              }
              uStack_218 = (uVar27 & 1) << 0x30;
              uVar27 = (*(long *)(lVar12 + 0x130) - *(long *)(lVar12 + 0x128) >> 2) *
                       -0x5555555555555555;
              uStack_250 = (undefined8 ****)pppuStack_2a8;
              if (uVar27 < uVar25 || uVar27 - uVar25 == 0) goto LAB_10a664cec;
              plVar28 = (long *)(*(long *)(lVar12 + 0x128) + uVar25 * 0xc);
              lStack_228 = *plVar28;
              uStack_220 = (ulong)*(uint *)(plVar28 + 1);
              ppuVar17 = &puStack_2a0;
              FUN_10a20dc24(ppuVar17,&pppuStack_2a8);
              if (ppuVar17 == (undefined8 **)0x0) {
                uStack_238 = (undefined8 *)
                             (((long)(puVar16[4] - puVar16[3]) >> 4) * 0x6db6db6db6db6db7);
                puStack_230 = uStack_238;
              }
              else {
                uStack_238 = ppuVar17[3];
                puStack_230 = ppuVar17[4];
              }
              lVar34 = *(long *)(lVar12 + 0x70);
              if (uVar25 == 0) {
                uVar27 = 0;
                uVar35 = *(long *)(lVar12 + 0x78) - lVar34 >> 3;
              }
              else {
                uVar35 = *(long *)(lVar12 + 0x78) - lVar34 >> 3;
                if (uVar35 <= uVar25 - 1) goto LAB_10a664cec;
                uVar27 = *(long *)(lVar34 + (uVar25 - 1) * 8) + 1;
              }
              if (uVar25 < uVar35) {
                uVar35 = *(ulong *)(lVar34 + uVar25 * 8);
                lVar34 = *(long *)(lVar12 + 0x40);
                lVar38 = *(long *)(lVar12 + 0x48);
              }
              else {
                lVar34 = *(long *)(lVar12 + 0x40);
                lVar38 = *(long *)(lVar12 + 0x48);
                uVar35 = (lVar38 - lVar34 >> 3) * -0x70a3d70a3d70a3d7 - 1;
              }
              uStack_248 = (long *)0xffffffffffffffff;
              if ((lVar34 == lVar38) ||
                 (uVar39 = (lVar38 - lVar34 >> 3) * -0x70a3d70a3d70a3d7,
                 uVar39 <= uVar27 || uVar35 < uVar27)) {
LAB_10a663ab0:
                plVar28 = *(long **)(lVar12 + 0xc0);
                uStack_248 = plVar28;
              }
              else {
                plVar28 = (long *)0x0;
                piVar41 = (int *)(lVar34 + uVar27 * 200 + 0xb0);
                plVar40 = (long *)0xffffffffffffffff;
                do {
                  plVar18 = plVar40;
                  if ((char)piVar41[-0x20] == '\x01') {
                    plVar42 = *(long **)(piVar41 + -0x22);
                    plVar18 = plVar42;
                    if (plVar40 <= plVar42) {
                      plVar18 = plVar40;
                    }
                    uStack_248 = plVar18;
                    if (plVar28 <= (long *)((long)plVar42 + (long)*piVar41)) {
                      plVar28 = (long *)((long)plVar42 + (long)*piVar41);
                    }
                  }
                  if (uVar35 <= uVar27) break;
                  uVar27 = uVar27 + 1;
                  piVar41 = piVar41 + 0x32;
                  plVar40 = plVar18;
                } while (uVar27 < uVar39);
                if (plVar18 == (long *)0xffffffffffffffff) goto LAB_10a663ab0;
              }
              bVar20 = false;
              uStack_218._0_7_ = (uint7)CONCAT31(uStack_218._5_3_,lVar34 == lVar38) << 0x20;
              iVar10 = (int7)uStack_218;
              uStack_218 = CONCAT17(*(undefined1 *)(lVar12 + 0x120),(int7)uStack_218);
              iVar30 = 0;
              if ((uVar25 == uVar46 - 1) && (lVar19 != lStack_2b0)) {
                iVar30 = *(int *)(lVar19 + 200);
                bVar20 = 0 < iVar30;
              }
              uStack_218._0_6_ = CONCAT15(bVar20,(int5)iVar10);
              uStack_218 = CONCAT44(uStack_218._4_4_,iVar30);
              uStack_240 = (long)plVar28 + (long)iVar30;
              FUN_10a20ce00(puVar16 + 0xb,&uStack_250);
              pppuStack_2a8 = (undefined8 ***)((long)pppuStack_2a8 + 1);
              uVar25 = uVar25 + 1;
            } while (uVar25 != uVar46);
          }
          lVar12 = *(long *)(lVar12 + 8);
        } while (lVar12 != lStack_2b0);
        pfVar29 = (float *)puVar16[3];
        pfVar32 = (float *)puVar16[4];
      }
      if (*(int *)(lVar24 + 0x18) < 0x15c) {
        if (pfVar29 != pfVar32) {
          fVar48 = *pfVar29;
          *(float *)(puVar16 + 6) = fVar48;
          fVar50 = pfVar29[2];
          *(float *)(puVar16 + 7) = fVar50;
          pfVar36 = pfVar29;
          do {
            fVar51 = *pfVar36;
            if (fVar51 < fVar48) {
              *(float *)(puVar16 + 6) = fVar51;
              fVar48 = fVar51;
            }
            fVar51 = pfVar36[2];
            if (fVar50 < fVar51) {
              *(float *)(puVar16 + 7) = fVar51;
              fVar50 = fVar51;
            }
            pfVar36 = pfVar36 + 0x1c;
          } while (pfVar36 != pfVar32);
          goto LAB_10a663c1c;
        }
LAB_10a663c24:
        if (*(long *)(lStack_2b0 + 0x10) != 0) {
          *(float *)(puVar16 + 6) = (float)uStack_420;
          *(float *)(puVar16 + 7) = (float)uStack_418;
        }
      }
      else {
        if (pfVar29 == pfVar32) goto LAB_10a663c24;
        fVar48 = *pfVar29 + pfVar29[8];
        *(float *)(puVar16 + 6) = fVar48;
        fVar50 = pfVar29[2] - pfVar29[8];
        *(float *)(puVar16 + 7) = fVar50;
        pfVar36 = pfVar29;
        do {
          fVar51 = pfVar36[8];
          fVar52 = *pfVar36 + fVar51;
          if (fVar52 < fVar48) {
            *(float *)(puVar16 + 6) = fVar52;
            fVar51 = pfVar36[8];
            fVar48 = fVar52;
          }
          fVar51 = pfVar36[2] - fVar51;
          if (fVar50 < fVar51) {
            *(float *)(puVar16 + 7) = fVar51;
            fVar50 = fVar51;
          }
          pfVar36 = pfVar36 + 0x1c;
        } while (pfVar36 != pfVar32);
LAB_10a663c1c:
        if (pfVar29 == pfVar32) goto LAB_10a663c24;
      }
      func_0x00010a20e170(&puStack_2a0);
      *(undefined4 *)((long)puVar16 + 0x34) = uStack_2c0._4_4_;
      *(undefined4 *)((long)puVar16 + 0x3c) = uStack_2b8._4_4_;
      lVar12 = puVar16[0xb];
      if (lVar12 != puVar16[0xc]) {
        uVar46 = puVar16[0xc] - lVar12 >> 6;
        *(undefined4 *)(lVar12 + 0x34) = uStack_2b8._4_4_;
        if (1 < uVar46) {
          lVar24 = uVar46 - 1;
          pfVar29 = (float *)(lVar12 + 0x74);
          do {
            *pfVar29 = pfVar29[-0x10] - pfVar29[-0x11];
            lVar24 = lVar24 + -1;
            pfVar29 = pfVar29 + 0x10;
          } while (lVar24 != 0);
        }
      }
    }
LAB_10a663d88:
    func_0x00010a67ef88(&lStack_2b0,0);
    plVar28 = (long *)(lVar47 + 0x388);
    puVar43 = *(undefined8 **)(lVar47 + 0x388);
    if (puVar43 == puVar16) {
      FUN_10a67f39c(puVar16);
    }
    else {
      *plVar28 = (long)puVar16;
      if (puVar43 != (undefined8 *)0x0) {
        FUN_10a67f39c();
      }
      func_0x00010a1bd170(&uStack_250);
      FUN_10a67f410(plVar28);
    }
    if (ppppuStack_258 == &pppuStack_270) {
      lVar12 = 0x20;
LAB_10a663dec:
      (**(code **)((long)*ppppuStack_258 + lVar12))();
    }
    else if (ppppuStack_258 != (undefined ****)0x0) {
      lVar12 = 0x28;
      goto LAB_10a663dec;
    }
    (*(code *)*ppuStack_d8)(&ppuStack_d8);
    lVar12 = *plVar28;
    if (lVar12 == 0) {
      uStack_248 = (long *)0x0;
      uStack_250 = (undefined8 ****)0x0;
      uStack_240 = 0;
    }
    else {
      fVar48 = *(float *)(lVar47 + 0x3c8);
      uStack_240 = 0;
      uStack_250 = (undefined8 ****)0x0;
      uStack_248 = (long *)0x0;
      FUN_10a679050(&uStack_250,
                    (*(long *)(lVar12 + 0x48) - *(long *)(lVar12 + 0x40) >> 3) * -0x5555555555555555
                   );
      puVar43 = *(undefined8 **)(lVar12 + 0x48);
      for (puVar16 = *(undefined8 **)(lVar12 + 0x40); puVar16 != puVar43; puVar16 = puVar16 + 3) {
        if (*(char *)(puVar16 + 2) == '\x01') {
          ppcStack_e0 = (code **)CONCAT44((float)((ulong)*puVar16 >> 0x20) / fVar48,
                                          (float)*puVar16 / fVar48);
          ppuStack_d8 = (undefined **)puVar16[1];
          func_0x00010a6790e0(&uStack_250,&ppcStack_e0);
        }
      }
    }
    if (*(long *)(lVar47 + 0x3d0) != 0) {
      *(long *)(lVar47 + 0x3d8) = *(long *)(lVar47 + 0x3d0);
      __ZdlPv();
      *(undefined8 *)(lVar47 + 0x3d0) = 0;
      *(undefined8 *)(lVar47 + 0x3d8) = 0;
      *(undefined8 *)(lVar47 + 0x3e0) = 0;
    }
    *(long **)(lVar47 + 0x3d8) = uStack_248;
    *(undefined8 *****)(lVar47 + 0x3d0) = uStack_250;
    *(long *)(lVar47 + 0x3e0) = uStack_240;
  }
  plVar28 = (long *)(lVar47 + 0x388);
  lVar12 = *(long *)(lVar47 + 0x388);
  if (lVar12 == 0) {
LAB_10a66499c:
    FUN_10a67f410(plVar28);
    lVar12 = 0;
LAB_10a6649ac:
    if ((byte)(bVar21 | bVar7 | bVar6) == 1) {
      *(byte *)(lVar47 + 0x158) = abStack_410[0];
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (lVar47 + 0x160,&pppuStack_408);
      *(long **)(lVar47 + 0x180) = uStack_3e8;
      *(undefined8 ****)(lVar47 + 0x178) = pppuStack_3f0;
      *(long *)(lVar47 + 0x188) = lStack_3e0;
      *(ulong *)(lVar47 + 0x198) = CONCAT44(fStack_3cc,CONCAT22(uStack_3ce,uStack_3d0));
      *(long *)(lVar47 + 400) = lStack_3d8;
      *(ulong *)(lVar47 + 0x1a2) =
           CONCAT17(bStack_3bf,CONCAT16(bStack_3c0,CONCAT42(uStack_3c4,uStack_3c6)));
      *(ulong *)(lVar47 + 0x19a) =
           CONCAT17(uStack_3c7,CONCAT16(uStack_3c8,CONCAT42(fStack_3cc,uStack_3ce)));
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (lVar47 + 0x1b0,&pppuStack_3b8);
      *(ulong *)(lVar47 + 0x1d0) =
           CONCAT26(uStack_392,CONCAT15(cStack_393,CONCAT14(cStack_394,uStack_398)));
      *(ulong *)(lVar47 + 0x1c8) = CONCAT44(iStack_39c,uStack_3a0);
      *(ulong *)(lVar47 + 0x1dd) = CONCAT17(cStack_384,CONCAT43(fStack_388,fStack_38c._1_3_));
      *(ulong *)(lVar47 + 0x1d5) =
           CONCAT17(fStack_38c._0_1_,CONCAT43(fStack_390,CONCAT21(uStack_392,cStack_393)));
      *(undefined8 *)(lVar47 + 0x214) = uStack_354;
      *(undefined8 *)(lVar47 + 0x20c) = uStack_35c;
      *(undefined8 *)(lVar47 + 0x24c) = uStack_31c;
      *(undefined8 *)(lVar47 + 0x244) = uStack_324;
    }
    if (*(long *)(param_3 + 0x260) == 0) {
      lVar24 = *(long *)(lVar47 + 0x3b8);
      if (lVar24 == 0) goto LAB_10a664b5c;
      lVar19 = 0;
LAB_10a664aa4:
      if (lVar19 != lVar24) {
        FUN_10a6589d4(&uStack_250,*(undefined8 *)(param_3 + 0x170),lVar24,
                      *(undefined8 *)(lVar47 + 0x3c0));
        plStack_428 = uStack_248;
        pppuStack_430 = uStack_250;
        if (uStack_248 != (long *)0x0) {
          plVar28 = uStack_248 + 1;
          do {
            cVar8 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar20) {
              *plVar28 = *plVar28 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        FUN_10a426824(param_3,&pppuStack_430);
        plVar28 = plStack_428;
        if (plStack_428 != (long *)0x0) {
          plVar40 = plStack_428 + 1;
          do {
            lVar24 = *plVar40;
            cVar8 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plVar40,0x10);
            if (bVar20) {
              *plVar40 = lVar24 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (lVar24 == 0) {
            (**(code **)(*plStack_428 + 0x10))(plStack_428);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar28);
          }
        }
        if (uStack_248 != (long *)0x0) {
          plVar28 = uStack_248 + 1;
          do {
            lVar24 = *plVar28;
            cVar8 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar20) {
              *plVar28 = lVar24 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
            plVar40 = uStack_248;
          } while (cVar8 != '\0');
          goto LAB_10a664b40;
        }
      }
    }
    else {
      lVar19 = *(long *)(*(long *)(param_3 + 0x260) + 0xe0);
      lVar24 = *(long *)(lVar47 + 0x3b8);
      if (lVar24 != 0) goto LAB_10a664aa4;
      if (lVar19 != 0) {
        uStack_440 = 0;
        plStack_438 = (long *)0x0;
        FUN_10a426824(param_3,&uStack_440);
        if (plStack_438 == (long *)0x0) goto LAB_10a664b5c;
        plVar28 = plStack_438 + 1;
        do {
          lVar24 = *plVar28;
          cVar8 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar20) {
            *plVar28 = lVar24 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
          plVar40 = plStack_438;
        } while (cVar8 != '\0');
LAB_10a664b40:
        if (lVar24 == 0) {
          (**(code **)(*plVar40 + 0x10))(plVar40);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar40);
        }
      }
    }
LAB_10a664b5c:
    *(char *)(lVar47 + 0x437) = (char)lVar12;
    FUN_10a044790(&pcStack_120);
    (*(code *)*ppuStack_118)(&ppuStack_118);
    plVar28 = plStack_338;
    ppuStack_348 = &PTR_DAT_110b17898;
    if (plStack_338 != (long *)0x0) {
      plVar40 = plStack_338 + 1;
      do {
        lVar24 = *plVar40;
        cVar8 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(plVar40,0x10);
        if (bVar20) {
          *plVar40 = lVar24 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar24 == 0) {
        (**(code **)(*plStack_338 + 0x10))(plStack_338);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar28);
      }
    }
    plVar28 = plStack_370;
    ppuStack_380 = &PTR_DAT_110b17898;
    if (plStack_370 != (long *)0x0) {
      plVar40 = plStack_370 + 1;
      do {
        lVar24 = *plVar40;
        cVar8 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(plVar40,0x10);
        if (bVar20) {
          *plVar40 = lVar24 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar24 == 0) {
        (**(code **)(*plStack_370 + 0x10))(plStack_370);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar28);
      }
    }
    if ((long)uStack_3a8 < 0) {
      __ZdlPv(pppuStack_3b8);
    }
    if ((char)bStack_3f1 < '\0') {
      __ZdlPv(pppuStack_408);
    }
    plVar28 = plStack_2f8;
    if ((cStack_2d0 == '\x01') && (ppuStack_308 = &PTR_DAT_110b17898, plStack_2f8 != (long *)0x0)) {
      plVar40 = plStack_2f8 + 1;
      do {
        lVar24 = *plVar40;
        cVar8 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(plVar40,0x10);
        if (bVar20) {
          *plVar40 = lVar24 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar24 == 0) {
        (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar28);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
      return lVar12;
    }
    ___stack_chk_fail();
  }
  else {
    lVar24 = *(long *)(lVar12 + 0x18);
    lVar12 = *(long *)(lVar12 + 0x20);
    bVar4 = bVar21 ^ 1;
    if (lVar12 == lVar24) {
      bVar4 = 1;
    }
    if (bVar4 != 0) {
LAB_10a664968:
      if ((lVar12 == lVar24) || (*(long *)(lVar47 + 0x390) == *(long *)(lVar47 + 0x398))) {
        lVar12 = *plVar28;
        *plVar28 = 0;
        if (lVar12 != 0) {
          FUN_10a67f39c();
        }
        goto LAB_10a66499c;
      }
      lVar12 = 1;
      goto LAB_10a6649ac;
    }
    plVar40 = (long *)(lVar47 + 0x3a8);
    lVar19 = *(long *)(lVar47 + 0x3a8);
    if (lVar19 == 0) {
      plVar18 = &uStack_250;
      FUN_10a0d0194(&puStack_2a0);
      if ((undefined8 *)*plVar40 != puStack_2a0) {
        func_0x00010a19b5ac(plVar40,&puStack_2a0);
        plVar42 = &uStack_250;
        func_0x00010a1bd170();
        lVar19 = -0x3a8;
        if (cRam00000001137eb72e == '\0') {
          lVar19 = -0xffff;
        }
        lVar19 = (long)plVar40 + lVar19;
        if ((*(ushort *)(lVar19 + 0xe9) >> 8 & 1) == 0) {
          if ((((*(long *)(lVar19 + 0xc0) != 0) || ((*(ushort *)(lVar19 + 0xe9) >> 9 & 1) != 0)) ||
              (*(long *)(lVar19 + 0xe0) != 0)) || ((*(ushort *)(lVar19 + 0x30) >> 8 & 1) == 0)) {
LAB_10a663fa8:
            plVar18 = &uStack_250;
            func_0x00010a1bd170();
            if (((ulong)plVar18 & 1) == 0) {
              uStack_218 = 0;
              uStack_220 = 0;
              uStack_208 = 0;
              lStack_210 = 0;
              uStack_238 = (undefined8 *)0x0;
              uStack_240 = 0;
              lStack_228 = 0;
              puStack_230 = (undefined8 *)0x0;
              uStack_248 = (long *)0x0;
              uStack_250 = (undefined8 ****)0x0;
              ppcStack_e0 = (code **)&PTR_DAT_110c06b58;
              FUN_10a0dad0c((ulong)&uStack_250 | 8,&ppcStack_e0);
              lVar19 = -0x3a8;
              if (cRam00000001137eb72e == '\0') {
                lVar19 = -0xffff;
              }
              iVar30 = (int)plVar40 + (int)lVar19;
              (**(code **)(*(long *)((long)plVar40 + lVar19) + 0x18))();
              lVar19 = -0x3a8;
              if (cRam00000001137eb72e == '\0') {
                lVar19 = -0xffff;
              }
              uVar46 = (long)plVar40 + lVar19;
              uVar22 = *(ushort *)(uVar46 + 0x30);
              if (iVar30 == 0) {
                if ((uVar22 >> 8 & 1) == 0) {
                  FUN_10a1bfe94(uVar46,&uStack_250);
                  if ((uVar46 & 1) == 0) {
                    lVar19 = -0x3a8;
                    if (cRam00000001137eb72e == '\0') {
                      lVar19 = -0xffff;
                    }
                    uVar46 = (long)plVar40 + lVar19;
                    (**(code **)(*(long *)((long)plVar40 + lVar19) + 0x10))(uVar46,&uStack_250);
                  }
                }
                else {
                  FUN_10a1bd5e0();
                  if (uVar46 != 0) {
                    FUN_10a1bd7d8();
                  }
                }
              }
              else {
                if ((uVar22 >> 7 & 1) == 0) {
                  *(undefined8 *****)(uVar46 + 0x40) = uStack_250;
                  *(ushort *)(uVar46 + 0x30) = uVar22 | 0x80;
                }
                uVar46 = uVar46 + 0x40;
                FUN_10a1bd398(uVar46,&uStack_250);
              }
              uVar22 = 0x3a8;
              if (cRam00000001137eb72e == '\0') {
                uVar22 = 0xffff;
              }
              lVar19 = 0x3a8;
              if (cRam00000001137eb72e == '\0') {
                lVar19 = 0xffff;
              }
              if ((*(ushort *)((long)plVar40 + (0xe9 - lVar19)) >> 8 & 1) != 0) {
                FUN_10a1bd5e0();
                uVar22 = 0x3a8;
                if (cRam00000001137eb72e == '\0') {
                  uVar22 = 0xffff;
                }
                if (uVar46 != 0) {
                  FUN_10a1bd648();
                  uVar22 = 0x3a8;
                  if (cRam00000001137eb72e == '\0') {
                    uVar22 = 0xffff;
                  }
                }
              }
              plVar18 = (long *)((long)plVar40 + (0x90 - (ulong)uVar22));
              FUN_10a1c054c(plVar18,&uStack_250);
            }
            goto LAB_10a6642e0;
          }
          *(long *)(lVar19 + 0xa0) = *(long *)(lVar19 + 0xa0) + 1;
        }
        else if ((*(ushort *)(lVar19 + 0x30) >> 8 & 1) == 0) goto LAB_10a663fa8;
        ppuVar45 = *(undefined ***)(lVar19 + 0xf0);
        ppuVar44 = *(undefined ***)(lVar19 + 0x38);
        if (((ppuVar45 != &PTR_DAT_110c06b58) || (plVar18 = plVar42, ppuVar44 != &PTR_DAT_110c06b58)
            ) && (FUN_10a1bd5e0(), plVar18 = plVar42, plVar42 != (long *)0x0)) {
          if (ppuVar45 != &PTR_DAT_110c06b58) {
            FUN_10a1bd648(plVar42,lVar19 + 0x90,&PTR_DAT_110c06b58);
            *(undefined ***)(lVar19 + 0xf0) = &PTR_DAT_110c06b58;
          }
          if (ppuVar44 != &PTR_DAT_110c06b58) {
            FUN_10a1bd7d8(plVar42,lVar19,&PTR_DAT_110c06b58);
            *(undefined ***)(lVar19 + 0x38) = &PTR_DAT_110c06b58;
            plVar18 = plVar42;
          }
        }
      }
LAB_10a6642e0:
      plVar42 = plStack_298;
      if (plStack_298 != (long *)0x0) {
        plVar1 = plStack_298 + 1;
        do {
          lVar19 = *plVar1;
          cVar8 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar20) {
            *plVar1 = lVar19 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plStack_298 + 0x10))(plStack_298);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar18 = plVar42;
        }
      }
      FUN_10ab6e728();
      if (*(char *)((long)plVar18 + 0x17) < '\0') {
        plVar42 = &uStack_250;
        func_0x000107c3192c(plVar42,*plVar18,plVar18[1]);
      }
      else {
        uStack_240 = plVar18[2];
        uStack_248 = (long *)plVar18[1];
        uStack_250 = (undefined8 ****)*plVar18;
        plVar42 = plVar18;
      }
      uStack_238 = (undefined8 *)plVar18[3];
      lStack_228 = plVar18[5];
      puStack_230 = (undefined8 *)plVar18[4];
      uStack_220 = CONCAT44(uStack_220._4_4_,(int)plVar18[6]);
      FUN_10ab6f020();
      if (*(char *)((long)plVar42 + 0x17) < '\0') {
        func_0x000107c3192c(&uStack_218,*plVar42,plVar42[1]);
      }
      else {
        uStack_208 = plVar42[2];
        lStack_210 = plVar42[1];
        uStack_218 = *plVar42;
      }
      lStack_200 = plVar42[3];
      lStack_1f0 = plVar42[5];
      lStack_1f8 = plVar42[4];
      uStack_1e8 = (undefined4)plVar42[6];
      FUN_10ab6f520(&ppcStack_e0,&uStack_250,2);
      lVar19 = *plVar40;
      *(undefined4 *)(lVar19 + 0xf0) = ppcStack_e0._0_4_;
      if ((code ***)(lVar19 + 0xf0) != &ppcStack_e0) {
        FUN_10a1903c4(lVar19 + 0xf8,ppuStack_d8,lStack_d0,
                      (lStack_d0 - (long)ppuStack_d8 >> 3) * 0x6db6db6db6db6db7);
      }
      *(undefined8 *)(lVar19 + 0x118) = uStack_b8;
      *(undefined8 *)(lVar19 + 0x110) = uStack_c0;
      *(undefined8 *)(lVar19 + 0x128) = uStack_a8;
      *(undefined8 *)(lVar19 + 0x120) = uStack_b0;
      *(undefined8 *)(lVar19 + 0x130) = uStack_a0;
      pppuStack_270 = &ppuStack_d8;
      func_0x00010a190844(&pppuStack_270);
      lVar19 = 0;
      do {
        if (*(char *)((long)&uStack_208 + lVar19 + 7) < '\0') {
          __ZdlPv(*(undefined8 *)((long)&uStack_218 + lVar19));
        }
        lVar19 = lVar19 + -0x38;
      } while (lVar19 != -0x70);
      *(undefined8 *)(*plVar40 + 0xe8) = 1;
      uStack_2c0 = 0;
      FUN_10a678318(&ppcStack_e0,&uStack_250,&uStack_2c0,plVar40);
      plVar18 = (long *)(lVar47 + 0x3b8);
      if (*(code ***)(lVar47 + 0x3b8) != ppcStack_e0) {
        func_0x00010a19a938(plVar18,&ppcStack_e0);
        puVar16 = &uStack_250;
        func_0x00010a1bd170();
        lVar19 = -0x3b8;
        if (cRam00000001137eb730 == '\0') {
          lVar19 = -0xffff;
        }
        lVar19 = (long)plVar18 + lVar19;
        if ((*(ushort *)(lVar19 + 0xe9) >> 8 & 1) == 0) {
          if (((*(long *)(lVar19 + 0xc0) != 0) || ((*(ushort *)(lVar19 + 0xe9) >> 9 & 1) != 0)) ||
             ((*(long *)(lVar19 + 0xe0) != 0 || ((*(ushort *)(lVar19 + 0x30) >> 8 & 1) == 0)))) {
LAB_10a664504:
            uVar46 = 0;
            func_0x00010a1bd170();
            if ((uVar46 & 1) == 0) {
              uStack_218 = 0;
              uStack_220 = 0;
              uStack_208 = 0;
              lStack_210 = 0;
              uStack_238 = (undefined8 *)0x0;
              uStack_240 = 0;
              lStack_228 = 0;
              puStack_230 = (undefined8 *)0x0;
              uStack_248 = (long *)0x0;
              uStack_250 = (undefined8 ****)0x0;
              pppuStack_270 = (undefined ***)&PTR_DAT_110c06b70;
              FUN_10a0dad0c((ulong)&uStack_250 | 8,&pppuStack_270);
              lVar19 = -0x3b8;
              if (cRam00000001137eb730 == '\0') {
                lVar19 = -0xffff;
              }
              iVar30 = (int)plVar18 + (int)lVar19;
              (**(code **)(*(long *)((long)plVar18 + lVar19) + 0x18))();
              lVar19 = -0x3b8;
              if (cRam00000001137eb730 == '\0') {
                lVar19 = -0xffff;
              }
              uVar46 = (long)plVar18 + lVar19;
              uVar22 = *(ushort *)(uVar46 + 0x30);
              if (iVar30 == 0) {
                if ((uVar22 >> 8 & 1) == 0) {
                  FUN_10a1bfe94(uVar46,&uStack_250);
                  if ((uVar46 & 1) == 0) {
                    lVar19 = -0x3b8;
                    if (cRam00000001137eb730 == '\0') {
                      lVar19 = -0xffff;
                    }
                    uVar46 = (long)plVar18 + lVar19;
                    (**(code **)(*(long *)((long)plVar18 + lVar19) + 0x10))(uVar46,&uStack_250);
                  }
                }
                else {
                  FUN_10a1bd5e0();
                  if (uVar46 != 0) {
                    FUN_10a1bd7d8();
                  }
                }
              }
              else {
                if ((uVar22 >> 7 & 1) == 0) {
                  *(undefined8 *****)(uVar46 + 0x40) = uStack_250;
                  *(ushort *)(uVar46 + 0x30) = uVar22 | 0x80;
                }
                uVar46 = uVar46 + 0x40;
                FUN_10a1bd398(uVar46,&uStack_250);
              }
              uVar22 = 0x3b8;
              if (cRam00000001137eb730 == '\0') {
                uVar22 = 0xffff;
              }
              lVar19 = 0x3b8;
              if (cRam00000001137eb730 == '\0') {
                lVar19 = 0xffff;
              }
              if ((*(ushort *)((long)plVar18 + (0xe9 - lVar19)) >> 8 & 1) != 0) {
                FUN_10a1bd5e0();
                uVar22 = 0x3b8;
                if (cRam00000001137eb730 == '\0') {
                  uVar22 = 0xffff;
                }
                if (uVar46 != 0) {
                  FUN_10a1bd648();
                  uVar22 = 0x3b8;
                  if (cRam00000001137eb730 == '\0') {
                    uVar22 = 0xffff;
                  }
                }
              }
              FUN_10a1c054c((long)plVar18 + (0x90 - (ulong)uVar22),&uStack_250);
            }
            goto LAB_10a6646e4;
          }
          *(long *)(lVar19 + 0xa0) = *(long *)(lVar19 + 0xa0) + 1;
        }
        else if ((*(ushort *)(lVar19 + 0x30) >> 8 & 1) == 0) goto LAB_10a664504;
        ppuVar45 = *(undefined ***)(lVar19 + 0xf0);
        ppuVar44 = *(undefined ***)(lVar19 + 0x38);
        if ((ppuVar45 != &PTR_DAT_110c06b70 || ppuVar44 != &PTR_DAT_110c06b70) &&
           (FUN_10a1bd5e0(), puVar16 != (undefined8 *)0x0)) {
          if (ppuVar45 != &PTR_DAT_110c06b70) {
            FUN_10a1bd648(puVar16,lVar19 + 0x90,&PTR_DAT_110c06b70);
            *(undefined ***)(lVar19 + 0xf0) = &PTR_DAT_110c06b70;
          }
          if (ppuVar44 != &PTR_DAT_110c06b70) {
            FUN_10a1bd7d8(puVar16,lVar19,&PTR_DAT_110c06b70);
            *(undefined ***)(lVar19 + 0x38) = &PTR_DAT_110c06b70;
          }
        }
      }
LAB_10a6646e4:
      ppuVar44 = ppuStack_d8;
      if (ppuStack_d8 != (undefined **)0x0) {
        ppuVar45 = ppuStack_d8 + 1;
        do {
          puVar33 = *ppuVar45;
          cVar8 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(ppuVar45,0x10);
          if (bVar20) {
            *ppuVar45 = puVar33 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (puVar33 == (undefined *)0x0) {
          (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar44);
        }
      }
      plVar42 = (long *)*plVar18;
      if (*(char *)((long)plVar42 + 0xb9) != '\x01') {
        *(undefined1 *)((long)plVar42 + 0xb9) = 1;
        (**(code **)(*plVar42 + 0xa0))(plVar42);
        plVar42 = (long *)*plVar18;
      }
      if (*(char *)((long)plVar42 + 0xba) != '\x01') {
        *(undefined1 *)((long)plVar42 + 0xba) = 1;
        (**(code **)(*plVar42 + 0xa0))(plVar42);
        plVar42 = (long *)*plVar18;
      }
      FUN_10a6589d4(&uStack_250,*(undefined8 *)(param_3 + 0x170),plVar42,
                    *(undefined8 *)(lVar47 + 0x3c0));
      FUN_10ab4a154(*plVar40,4);
      lVar19 = *plVar40;
      puVar16 = *(undefined8 **)(lVar19 + 0x28);
      uVar46 = *(long *)(lVar19 + 0x30) - (long)puVar16;
      if (uVar46 < 0xc) {
        func_0x000107c27d58((undefined8 *)(lVar19 + 0x28),0xc - uVar46);
        puVar16 = *(undefined8 **)(*plVar40 + 0x28);
      }
      else if (uVar46 != 0xc) {
        *(long *)(lVar19 + 0x30) = (long)puVar16 + 0xc;
      }
      plVar18 = uStack_248;
      *puVar16 = 0x200010000;
      *(undefined4 *)(puVar16 + 1) = 0x30002;
      if (uStack_248 != (long *)0x0) {
        plVar42 = uStack_248 + 1;
        do {
          lVar19 = *plVar42;
          cVar8 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar42,0x10);
          if (bVar20) {
            *plVar42 = lVar19 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*uStack_248 + 0x10))(uStack_248);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
        }
      }
      lVar19 = *plVar40;
    }
    uVar31 = *(uint *)(lVar19 + 0x110);
    if (uVar31 == 0xffffffff) {
      lVar34 = 0;
LAB_10a664870:
      uVar31 = *(int *)(lVar34 + 0x24) - 1;
      if (uVar31 < 7) {
        iVar30 = *(int *)(&UNK_10e4d1d38 + (ulong)uVar31 * 4);
      }
      else {
        iVar30 = 0;
      }
      if (*(int *)(lVar34 + 0x28) * iVar30 == 0xc) {
        lVar34 = *(long *)(lVar19 + 0x10) + (ulong)*(uint *)(lVar34 + 0x30);
        uVar46 = (ulong)*(uint *)(lVar19 + 0xf0);
      }
      else {
        lVar34 = 0;
        uVar46 = 0;
      }
      lVar19 = 0;
      lVar38 = *(long *)(lVar47 + 0x388);
      fVar48 = *(float *)(lVar47 + 0x3c8);
      fVar50 = *(float *)(lVar38 + 0x30) / fVar48;
      fVar51 = *(float *)(lVar38 + 0x34) / fVar48;
      fVar52 = *(float *)(lVar38 + 0x38) / fVar48;
      uStack_248 = (long *)CONCAT44(fVar51,fVar52);
      uStack_250 = (undefined8 ****)CONCAT44(fVar51,fVar50);
      fVar48 = *(float *)(lVar38 + 0x3c) / fVar48;
      uStack_238 = (undefined8 *)CONCAT44(fVar48,fVar50);
      uStack_240 = CONCAT44(fVar48,fVar52);
      puVar37 = (undefined4 *)(lVar34 + 8);
      do {
        *(undefined8 *)(puVar37 + -2) = *(undefined8 *)((long)&uStack_250 + lVar19);
        *puVar37 = 0;
        puVar37 = (undefined4 *)((long)puVar37 + uVar46);
        lVar19 = lVar19 + 8;
      } while (lVar19 != 0x20);
      FUN_10ab4e0a4(*plVar40);
      FUN_10ac645fc(*(undefined8 *)(lVar47 + 0x3b8),plVar40);
      FUN_10a65fab8(lVar47,&bStack_30c,abStack_410,param_3);
      goto LAB_10a664968;
    }
    uVar46 = (*(long *)(lVar19 + 0x100) - *(long *)(lVar19 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
    if (uVar31 <= uVar46 && uVar46 - uVar31 != 0) {
      lVar34 = *(long *)(lVar19 + 0xf8) + (ulong)uVar31 * 0x38;
      goto LAB_10a664870;
    }
  }
  FUN_10ab725fc();
LAB_10a664cec:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x10a664cf0);
  (*pcVar11)();
}



/* Entry: 10a665148; end: 10a6651c7;  */

void FUN_10a665148(long param_1)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  func_0x000107c2b054(auStack_38,&DAT_10f66add3);
  FUN_10a65af94(param_1 + 0x648,auStack_38,
                *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x170) + 0x850) + 0x2c));
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  FUN_10a662b58(param_1);
  return;
}



/* Entry: 10a6651c8; end: 10a66526f;  */

void FUN_10a6651c8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_29 [9];
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x638) + 0x370);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lVar3 = 0;
  for (plVar4 = (long *)lVar2; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    lVar3 = lVar3 + 1;
  }
  FUN_10a4f0f10(param_1,lVar2,0,lVar3);
  lVar2 = *param_1;
  lVar1 = param_1[1];
  lVar3 = 0;
  if (lVar1 != lVar2) {
    lVar3 = LZCOUNT((lVar1 - lVar2 >> 3) * -0x5555555555555555) * -2 + 0x7e;
  }
  func_0x000107c281b4(lVar2,lVar1,auStack_29,lVar3,1);
  return;
}



/* Entry: 10a665270; end: 10a6652cb;  */

void FUN_10a665270(ulong *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *extraout_x8;
  undefined8 **ppuVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 *puVar20;
  long *plVar21;
  undefined8 *puVar22;
  long *plStack_248;
  long *plStack_240;
  long *plStack_208;
  long *plStack_200;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long lStack_1a8;
  undefined1 uStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  undefined8 *puStack_d0;
  long *plStack_c8;
  undefined8 *puStack_c0;
  long *plStack_b8;
  undefined8 *puStack_a8;
  long *plStack_a0;
  char cStack_91;
  undefined *puStack_90;
  undefined8 uStack_88;
  
  if (*(char *)(param_2 + 0x5f8) != '\x01') {
    FUN_10a665148();
    lVar15 = *(long *)(param_2 + 0x638);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    lVar13 = *(long *)(lVar15 + 0x3d0);
    lVar15 = *(long *)(lVar15 + 0x3d8);
    uVar14 = lVar15 - lVar13 >> 4;
    if (uVar14 != 0) {
      if (uVar14 >> 0x3c != 0) {
        FUN_10a66d9b4();
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a66d998);
        (*pcVar5)();
      }
      lVar7 = lVar13;
      FUN_10a66d9c8();
      *param_1 = uVar14;
      param_1[1] = uVar14;
      param_1[2] = uVar14 + lVar7 * 0x10;
      lVar15 = lVar15 - lVar13;
      if (lVar15 != 0) {
        _memmove(uVar14,lVar13,lVar15);
      }
      param_1[1] = uVar14 + lVar15;
    }
    return;
  }
  puVar6 = &UNK_10f66aecf;
  FUN_10a00946c();
  if (puVar6[0x61c] == '\x01') {
    puVar6 = &UNK_10f66b0ce;
    FUN_10a00946c();
    FUN_10a66dd30(extraout_x8);
    __Unwind_Resume();
    puVar9 = puVar6;
    FUN_10a665148();
    if ((int)puVar9 != 0) {
      lVar15 = *(long *)(puVar6 + 0x638);
      lStack_1a8 = lVar15 + 0x390;
      uStack_1a0 = 0;
      plVar21 = *(long **)(lVar15 + 0x398);
      for (plVar19 = *(long **)(lVar15 + 0x390); plVar19 != plVar21; plVar19 = plVar19 + 0x11) {
        uVar8 = *(undefined8 *)(puVar6 + 0x170);
        plVar10 = (long *)0x128;
        __Znwm();
        plVar10[1] = 0;
        plVar10[2] = 0;
        plVar12 = plVar10 + 3;
        *plVar10 = (long)&PTR_FUN_110bf0850;
        FUN_10ac28a40(plVar12,uVar8);
        plStack_1b8 = plVar12;
        plStack_1b0 = plVar10;
        FUN_10a5633f0(&plStack_1b8,plVar10 + 0xb,plVar12);
        plVar10 = plStack_1b0;
        plVar12 = plStack_1b8;
        *(undefined1 *)(plStack_1b8 + 1) = 1;
        lVar15 = *(long *)(puVar6 + 0x170);
        if (lVar15 == 0) {
          plVar11 = (long *)0x108;
          __Znwm();
          plVar11[1] = 0;
          plVar11[2] = 0;
          *plVar11 = (long)&PTR_FUN_110ba2088;
          plStack_208 = plVar12;
          plStack_200 = plVar10;
          if (plVar10 != (long *)0x0) {
            plVar12 = plVar10 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar4) {
                *plVar12 = *plVar12 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          plVar12 = plVar11 + 3;
          FUN_10a347bd4(plVar12,0,&plStack_208);
          if (plVar10 != (long *)0x0) {
            plVar1 = plVar10 + 1;
            do {
              lVar15 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar15 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar15 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
            }
          }
          plStack_248 = plVar12;
          plStack_240 = plVar11;
          FUN_10a0cfb64(&plStack_248,plVar11 + 8,plVar12);
          FUN_10a0cf858(&plStack_1c8,&plStack_248);
          if (plStack_240 != (long *)0x0) {
            plVar12 = plStack_240 + 1;
            do {
              lVar15 = *plVar12;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar4) {
                *plVar12 = lVar15 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              plVar10 = plStack_240;
            } while (cVar3 != '\0');
            goto LAB_10a665a74;
          }
        }
        else {
          plStack_198 = *(long **)(lVar15 + 0x858);
          plStack_190 = *(long **)(lVar15 + 0x860);
          if (plStack_190 != (long *)0x0) {
            plVar11 = plStack_190 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar4) {
                *plVar11 = *plVar11 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          plVar11 = (long *)0xf0;
          __Znwm();
          plStack_208 = plVar12;
          plStack_200 = plVar10;
          if (plVar10 != (long *)0x0) {
            plVar12 = plVar10 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar4) {
                *plVar12 = *plVar12 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          FUN_10a347bd4(plVar11,lVar15,&plStack_208);
          plStack_188 = plVar11;
          if (plVar10 != (long *)0x0) {
            plVar12 = plVar10 + 1;
            do {
              lVar15 = *plVar12;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar4) {
                *plVar12 = lVar15 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar15 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
            }
          }
          plVar11 = plStack_188;
          plStack_188 = (long *)0x0;
          FUN_10a0cfa2c(&plStack_188,0);
          plVar10 = plStack_190;
          plVar12 = plStack_198;
          plStack_188 = plStack_198;
          plStack_180 = plStack_190;
          if (plStack_190 != (long *)0x0) {
            plVar1 = plStack_190 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = *plVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            plVar1 = plStack_190 + 2;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = *plVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = *plVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_190);
          }
          plStack_208 = plVar12;
          plStack_200 = plVar10;
          FUN_10a0cfac4(&plStack_248,plVar11,&plStack_208);
          FUN_10a0cf858(&plStack_1c8,&plStack_248);
          plVar12 = plStack_240;
          if (plStack_240 != (long *)0x0) {
            plVar10 = plStack_240 + 1;
            do {
              lVar15 = *plVar10;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar4) {
                *plVar10 = lVar15 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar15 == 0) {
              (**(code **)(*plStack_240 + 0x10))(plStack_240);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
            }
          }
          if (plStack_200 != (long *)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          plVar12 = plStack_180;
          if (plStack_180 != (long *)0x0) {
            plVar10 = plStack_180 + 1;
            do {
              lVar15 = *plVar10;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar4) {
                *plVar10 = lVar15 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar15 == 0) {
              (**(code **)(*plStack_180 + 0x10))(plStack_180);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
            }
          }
          if ((plStack_198 != (long *)0x0) && (plStack_1c8 != (long *)0x0)) {
            plStack_248 = plStack_1c8;
            plStack_240 = plStack_1c0;
            if (plStack_1c0 != (long *)0x0) {
              plVar12 = plStack_1c0 + 1;
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                if (bVar4) {
                  *plVar12 = *plVar12 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            FUN_10aa88c30(plStack_198,&plStack_248);
            plVar12 = plStack_240;
            if (plStack_240 != (long *)0x0) {
              plVar10 = plStack_240 + 1;
              do {
                lVar15 = *plVar10;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar4) {
                  *plVar10 = lVar15 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar15 == 0) {
                (**(code **)(*plStack_240 + 0x10))(plStack_240);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
              }
            }
          }
          if (plStack_190 != (long *)0x0) {
            plVar12 = plStack_190 + 1;
            do {
              lVar15 = *plVar12;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar4) {
                *plVar12 = lVar15 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              plVar10 = plStack_190;
            } while (cVar3 != '\0');
LAB_10a665a74:
            if (lVar15 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
            }
          }
        }
        plVar12 = plStack_1b8;
        *(undefined1 *)(plStack_1c8 + 1) = 1;
        plVar10 = *(long **)(*plVar19 + 0xe0);
        if (plVar10 == (long *)0x0) {
          lVar15 = 0;
        }
        else {
          (**(code **)(*plVar10 + 0x90))();
          lVar15 = *plVar10;
        }
        FUN_10a54c73c(plVar12[0x1b],lVar15);
        func_0x00010ac6ec94(plVar12);
        FUN_10a19ad28(plVar19,&plStack_1c8);
        plVar19[2] = (long)plStack_1b8;
        plVar12 = (long *)plStack_1c8[0x1c];
        if (plVar12 == (long *)0x0) {
          lVar15 = 0;
        }
        else {
          (**(code **)(*plVar12 + 0x90))();
          lVar15 = *plVar12;
        }
        func_0x00010a424420(&plStack_248,puVar6);
        func_0x000109519fd0(&plStack_208,&plStack_248,plVar19 + 7);
        FUN_10a4244c0(puVar6,param_3,lVar15,&plStack_208);
        plVar12 = (long *)plStack_1c8[0x1c];
        if (plVar12 == (long *)0x0) {
          lVar15 = 0;
        }
        else {
          (**(code **)(*plVar12 + 0x90))();
          lVar15 = *plVar12;
        }
        plVar12 = plStack_1c0;
        plVar19[3] = lVar15;
        if (plStack_1c0 != (long *)0x0) {
          plVar10 = plStack_1c0 + 1;
          do {
            lVar15 = *plVar10;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar4) {
              *plVar10 = lVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
        plVar12 = plStack_1b0;
        if (plStack_1b0 != (long *)0x0) {
          plVar10 = plStack_1b0 + 1;
          do {
            lVar15 = *plVar10;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar4) {
              *plVar10 = lVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
      }
      FUN_10a67eac4(&lStack_1a8);
    }
    return;
  }
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  puVar9 = puVar6;
  FUN_10a665148();
  if ((int)puVar9 != 0) {
    puVar20 = *(undefined8 **)(*(long *)(puVar6 + 0x638) + 0x390);
    puVar22 = *(undefined8 **)(*(long *)(puVar6 + 0x638) + 0x398);
    if (puVar20 != puVar22) {
      do {
        lVar13 = *(long *)(puVar6 + 0x170);
        puVar9 = &UNK_10f66a659;
        func_0x000107c2b054(&puStack_a8,&UNK_10f66a659);
        lVar15 = lVar13;
        FUN_10a3dd220(lVar13);
        func_0x00010a0fda30();
        FUN_10a3dd268(lVar13,lVar15,puVar9,&puStack_a8);
        if (cStack_91 < '\0') {
          __ZdlPv(puStack_a8);
        }
        FUN_10a0c3500(lVar13,*(undefined8 *)(puVar6 + 0x168));
        func_0x00010a3e8440(*(undefined8 *)(lVar13 + 0x140),puVar20 + 7);
        puStack_90 = &UNK_10f63972b;
        uStack_88 = 0x1a;
        FUN_10a3e51f0(&puStack_a8,lVar13,&puStack_90);
        puStack_d0 = puStack_a8;
        plStack_c8 = plStack_a0;
        if (puStack_a8 == (undefined8 *)0x0) {
          ppuVar16 = &puStack_c0;
        }
        else {
          puStack_c0 = puStack_a8;
          plStack_b8 = plStack_a0;
          ppuVar16 = &puStack_d0;
        }
        *ppuVar16 = (undefined8 *)0x0;
        ppuVar16[1] = (undefined8 *)0x0;
        puVar2 = (undefined8 *)extraout_x8[1];
        if (puVar2 < (undefined8 *)extraout_x8[2]) {
          puVar2[1] = plStack_b8;
          *puVar2 = puStack_c0;
          puStack_c0 = (undefined8 *)0x0;
          plStack_b8 = (long *)0x0;
        }
        else {
          lVar15 = *extraout_x8;
          lVar13 = (long)puVar2 - lVar15;
          uVar14 = (lVar13 >> 4) + 1;
          if (uVar14 >> 0x3c != 0) {
            func_0x00010a66dd1c();
            goto LAB_10a665644;
          }
          uVar17 = extraout_x8[2] - lVar15;
          uVar18 = (long)uVar17 >> 3;
          if (uVar18 <= uVar14) {
            uVar18 = uVar14;
          }
          if (0x7fffffffffffffef < uVar17) {
            uVar18 = 0xfffffffffffffff;
          }
          if (uVar18 >> 0x3c != 0) {
            func_0x000109ffded8();
            goto LAB_10a665644;
          }
          lVar7 = uVar18 << 4;
          __Znwm();
          puVar2 = (undefined8 *)(lVar7 + lVar13);
          puVar2[1] = plStack_b8;
          *puVar2 = puStack_c0;
          puStack_c0 = (undefined8 *)0x0;
          plStack_b8 = (long *)0x0;
          _memcpy(puVar2 + (lVar13 >> 4) * -2,lVar15,lVar13);
          *extraout_x8 = (long)(puVar2 + (lVar13 >> 4) * -2);
          extraout_x8[2] = lVar7 + uVar18 * 0x10;
          if (lVar15 != 0) {
            __ZdlPv(lVar15);
          }
        }
        plVar19 = plStack_c8;
        extraout_x8[1] = (long)(puVar2 + 2);
        if (plStack_c8 != (long *)0x0) {
          plVar21 = plStack_c8 + 1;
          do {
            lVar15 = *plVar21;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar4) {
              *plVar21 = lVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
          }
        }
        if (*extraout_x8 == extraout_x8[1]) {
LAB_10a665644:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a665648);
          (*pcVar5)();
        }
        uVar8 = *(undefined8 *)(extraout_x8[1] + -0x10);
        plStack_d8 = (long *)puVar20[1];
        uStack_e0 = *puVar20;
        if (puVar20[1] != 0) {
          plVar19 = (long *)(puVar20[1] + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar4) {
              *plVar19 = *plVar19 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_10a0d4a88(uVar8,&uStack_e0);
        plVar19 = plStack_d8;
        if (plStack_d8 != (long *)0x0) {
          plVar21 = plStack_d8 + 1;
          do {
            lVar15 = *plVar21;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar4) {
              *plVar21 = lVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
          }
        }
        lVar13 = puVar20[0xf];
        lVar15 = extraout_x8[1];
        if (lVar13 == 0) {
          if (*extraout_x8 == lVar15) goto LAB_10a665644;
          uVar8 = *(undefined8 *)(lVar15 + -0x10);
          uStack_108 = 0;
          uStack_100 = 0;
          uStack_f8 = 0;
          FUN_10a2e23e0(&uStack_108,*(long *)(puVar6 + 0x2a0),*(long *)(puVar6 + 0x2a8),
                        *(long *)(puVar6 + 0x2a8) - *(long *)(puVar6 + 0x2a0) >> 4);
          FUN_10a4212b8(uVar8,&uStack_108);
          puStack_a8 = &uStack_108;
          FUN_10a0d4a18(&puStack_a8);
        }
        else {
          if (*extraout_x8 == lVar15) goto LAB_10a665644;
          uVar8 = *(undefined8 *)(lVar15 + -0x10);
          plStack_e8 = (long *)puVar20[0x10];
          if (plStack_e8 != (long *)0x0) {
            plVar19 = plStack_e8 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar4) {
                *plVar19 = *plVar19 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          lStack_f0 = lVar13;
          FUN_10a2d54dc(uVar8,&lStack_f0);
          plVar19 = plStack_e8;
          if (plStack_e8 != (long *)0x0) {
            plVar21 = plStack_e8 + 1;
            do {
              lVar15 = *plVar21;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar4) {
                *plVar21 = lVar15 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar15 == 0) {
              (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
            }
          }
        }
        puVar20 = puVar20 + 0x11;
      } while (puVar20 != puVar22);
    }
  }
  FUN_10a3c762c(puVar6);
  return;
}



/* Entry: 10a6652cc; end: 10a6656e7;  */

void FUN_10a6652cc(long *param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 **ppuVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  undefined8 *puVar20;
  long *plVar21;
  undefined8 *puVar22;
  long *plStack_228;
  long *plStack_220;
  long *plStack_1e8;
  long *plStack_1e0;
  long *plStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long lStack_188;
  undefined1 uStack_180;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  long *plStack_160;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 *puStack_b0;
  long *plStack_a8;
  undefined8 *puStack_a0;
  long *plStack_98;
  undefined8 *puStack_88;
  long *plStack_80;
  char cStack_71;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  if (*(char *)(param_2 + 0x61c) == '\x01') {
    puVar9 = &UNK_10f66b0ce;
    FUN_10a00946c();
    FUN_10a66dd30(param_1);
    __Unwind_Resume();
    puVar10 = puVar9;
    FUN_10a665148();
    if ((int)puVar10 != 0) {
      lVar16 = *(long *)(puVar9 + 0x638);
      lStack_188 = lVar16 + 0x390;
      uStack_180 = 0;
      plVar21 = *(long **)(lVar16 + 0x398);
      for (plVar18 = *(long **)(lVar16 + 0x390); plVar18 != plVar21; plVar18 = plVar18 + 0x11) {
        uVar8 = *(undefined8 *)(puVar9 + 0x170);
        plVar11 = (long *)0x128;
        __Znwm();
        plVar11[1] = 0;
        plVar11[2] = 0;
        plVar13 = plVar11 + 3;
        *plVar11 = (long)&PTR_FUN_110bf0850;
        FUN_10ac28a40(plVar13,uVar8);
        plStack_198 = plVar13;
        plStack_190 = plVar11;
        FUN_10a5633f0(&plStack_198,plVar11 + 0xb,plVar13);
        plVar11 = plStack_190;
        plVar13 = plStack_198;
        *(undefined1 *)(plStack_198 + 1) = 1;
        lVar16 = *(long *)(puVar9 + 0x170);
        if (lVar16 == 0) {
          plVar12 = (long *)0x108;
          __Znwm();
          plVar12[1] = 0;
          plVar12[2] = 0;
          *plVar12 = (long)&PTR_FUN_110ba2088;
          plStack_1e8 = plVar13;
          plStack_1e0 = plVar11;
          if (plVar11 != (long *)0x0) {
            plVar13 = plVar11 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar5) {
                *plVar13 = *plVar13 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          plVar13 = plVar12 + 3;
          FUN_10a347bd4(plVar13,0,&plStack_1e8);
          if (plVar11 != (long *)0x0) {
            plVar2 = plVar11 + 1;
            do {
              lVar16 = *plVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = lVar16 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
            }
          }
          plStack_228 = plVar13;
          plStack_220 = plVar12;
          FUN_10a0cfb64(&plStack_228,plVar12 + 8,plVar13);
          FUN_10a0cf858(&plStack_1a8,&plStack_228);
          if (plStack_220 != (long *)0x0) {
            plVar13 = plStack_220 + 1;
            do {
              lVar16 = *plVar13;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar5) {
                *plVar13 = lVar16 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              plVar11 = plStack_220;
            } while (cVar4 != '\0');
            goto LAB_10a665a74;
          }
        }
        else {
          plStack_178 = *(long **)(lVar16 + 0x858);
          plStack_170 = *(long **)(lVar16 + 0x860);
          if (plStack_170 != (long *)0x0) {
            plVar12 = plStack_170 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar5) {
                *plVar12 = *plVar12 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          plVar12 = (long *)0xf0;
          __Znwm();
          plStack_1e8 = plVar13;
          plStack_1e0 = plVar11;
          if (plVar11 != (long *)0x0) {
            plVar13 = plVar11 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar5) {
                *plVar13 = *plVar13 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          FUN_10a347bd4(plVar12,lVar16,&plStack_1e8);
          plStack_168 = plVar12;
          if (plVar11 != (long *)0x0) {
            plVar13 = plVar11 + 1;
            do {
              lVar16 = *plVar13;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar5) {
                *plVar13 = lVar16 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
            }
          }
          plVar12 = plStack_168;
          plStack_168 = (long *)0x0;
          FUN_10a0cfa2c(&plStack_168,0);
          plVar11 = plStack_170;
          plVar13 = plStack_178;
          plStack_168 = plStack_178;
          plStack_160 = plStack_170;
          if (plStack_170 != (long *)0x0) {
            plVar2 = plStack_170 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = *plVar2 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            plVar2 = plStack_170 + 2;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = *plVar2 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = *plVar2 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_170);
          }
          plStack_1e8 = plVar13;
          plStack_1e0 = plVar11;
          FUN_10a0cfac4(&plStack_228,plVar12,&plStack_1e8);
          FUN_10a0cf858(&plStack_1a8,&plStack_228);
          plVar13 = plStack_220;
          if (plStack_220 != (long *)0x0) {
            plVar11 = plStack_220 + 1;
            do {
              lVar16 = *plVar11;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar5) {
                *plVar11 = lVar16 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plStack_220 + 0x10))(plStack_220);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
            }
          }
          if (plStack_1e0 != (long *)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          plVar13 = plStack_160;
          if (plStack_160 != (long *)0x0) {
            plVar11 = plStack_160 + 1;
            do {
              lVar16 = *plVar11;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar5) {
                *plVar11 = lVar16 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plStack_160 + 0x10))(plStack_160);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
            }
          }
          if ((plStack_178 != (long *)0x0) && (plStack_1a8 != (long *)0x0)) {
            plStack_228 = plStack_1a8;
            plStack_220 = plStack_1a0;
            if (plStack_1a0 != (long *)0x0) {
              plVar13 = plStack_1a0 + 1;
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar5) {
                  *plVar13 = *plVar13 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            FUN_10aa88c30(plStack_178,&plStack_228);
            plVar13 = plStack_220;
            if (plStack_220 != (long *)0x0) {
              plVar11 = plStack_220 + 1;
              do {
                lVar16 = *plVar11;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                if (bVar5) {
                  *plVar11 = lVar16 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar16 == 0) {
                (**(code **)(*plStack_220 + 0x10))(plStack_220);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
              }
            }
          }
          if (plStack_170 != (long *)0x0) {
            plVar13 = plStack_170 + 1;
            do {
              lVar16 = *plVar13;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar5) {
                *plVar13 = lVar16 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              plVar11 = plStack_170;
            } while (cVar4 != '\0');
LAB_10a665a74:
            if (lVar16 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
            }
          }
        }
        plVar13 = plStack_198;
        *(undefined1 *)(plStack_1a8 + 1) = 1;
        plVar11 = *(long **)(*plVar18 + 0xe0);
        if (plVar11 == (long *)0x0) {
          lVar16 = 0;
        }
        else {
          (**(code **)(*plVar11 + 0x90))();
          lVar16 = *plVar11;
        }
        FUN_10a54c73c(plVar13[0x1b],lVar16);
        func_0x00010ac6ec94(plVar13);
        FUN_10a19ad28(plVar18,&plStack_1a8);
        plVar18[2] = (long)plStack_198;
        plVar13 = (long *)plStack_1a8[0x1c];
        if (plVar13 == (long *)0x0) {
          lVar16 = 0;
        }
        else {
          (**(code **)(*plVar13 + 0x90))();
          lVar16 = *plVar13;
        }
        func_0x00010a424420(&plStack_228,puVar9);
        func_0x000109519fd0(&plStack_1e8,&plStack_228,plVar18 + 7);
        FUN_10a4244c0(puVar9,param_3,lVar16,&plStack_1e8);
        plVar13 = (long *)plStack_1a8[0x1c];
        if (plVar13 == (long *)0x0) {
          lVar16 = 0;
        }
        else {
          (**(code **)(*plVar13 + 0x90))();
          lVar16 = *plVar13;
        }
        plVar13 = plStack_1a0;
        plVar18[3] = lVar16;
        if (plStack_1a0 != (long *)0x0) {
          plVar11 = plStack_1a0 + 1;
          do {
            lVar16 = *plVar11;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar5) {
              *plVar11 = lVar16 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plStack_1a0 + 0x10))(plStack_1a0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
        plVar13 = plStack_190;
        if (plStack_190 != (long *)0x0) {
          plVar11 = plStack_190 + 1;
          do {
            lVar16 = *plVar11;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar5) {
              *plVar11 = lVar16 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plStack_190 + 0x10))(plStack_190);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
      }
      FUN_10a67eac4(&lStack_188);
    }
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar16 = param_2;
  FUN_10a665148();
  if ((int)lVar16 != 0) {
    puVar20 = *(undefined8 **)(*(long *)(param_2 + 0x638) + 0x390);
    puVar22 = *(undefined8 **)(*(long *)(param_2 + 0x638) + 0x398);
    if (puVar20 != puVar22) {
      do {
        lVar19 = *(long *)(param_2 + 0x170);
        puVar9 = &UNK_10f66a659;
        func_0x000107c2b054(&puStack_88,&UNK_10f66a659);
        lVar16 = lVar19;
        FUN_10a3dd220(lVar19);
        func_0x00010a0fda30();
        FUN_10a3dd268(lVar19,lVar16,puVar9,&puStack_88);
        if (cStack_71 < '\0') {
          __ZdlPv(puStack_88);
        }
        FUN_10a0c3500(lVar19,*(undefined8 *)(param_2 + 0x168));
        func_0x00010a3e8440(*(undefined8 *)(lVar19 + 0x140),puVar20 + 7);
        puStack_70 = &UNK_10f63972b;
        uStack_68 = 0x1a;
        FUN_10a3e51f0(&puStack_88,lVar19,&puStack_70);
        puStack_b0 = puStack_88;
        plStack_a8 = plStack_80;
        if (puStack_88 == (undefined8 *)0x0) {
          ppuVar14 = &puStack_a0;
        }
        else {
          puStack_a0 = puStack_88;
          plStack_98 = plStack_80;
          ppuVar14 = &puStack_b0;
        }
        *ppuVar14 = (undefined8 *)0x0;
        ppuVar14[1] = (undefined8 *)0x0;
        puVar3 = (undefined8 *)param_1[1];
        if (puVar3 < (undefined8 *)param_1[2]) {
          puVar3[1] = plStack_98;
          *puVar3 = puStack_a0;
          puStack_a0 = (undefined8 *)0x0;
          plStack_98 = (long *)0x0;
        }
        else {
          lVar16 = *param_1;
          lVar19 = (long)puVar3 - lVar16;
          uVar1 = (lVar19 >> 4) + 1;
          if (uVar1 >> 0x3c != 0) {
            func_0x00010a66dd1c();
            goto LAB_10a665644;
          }
          uVar15 = param_1[2] - lVar16;
          uVar17 = (long)uVar15 >> 3;
          if (uVar17 <= uVar1) {
            uVar17 = uVar1;
          }
          if (0x7fffffffffffffef < uVar15) {
            uVar17 = 0xfffffffffffffff;
          }
          if (uVar17 >> 0x3c != 0) {
            func_0x000109ffded8();
            goto LAB_10a665644;
          }
          lVar7 = uVar17 << 4;
          __Znwm();
          puVar3 = (undefined8 *)(lVar7 + lVar19);
          puVar3[1] = plStack_98;
          *puVar3 = puStack_a0;
          puStack_a0 = (undefined8 *)0x0;
          plStack_98 = (long *)0x0;
          _memcpy(puVar3 + (lVar19 >> 4) * -2,lVar16,lVar19);
          *param_1 = (long)(puVar3 + (lVar19 >> 4) * -2);
          param_1[2] = lVar7 + uVar17 * 0x10;
          if (lVar16 != 0) {
            __ZdlPv(lVar16);
          }
        }
        plVar18 = plStack_a8;
        param_1[1] = (long)(puVar3 + 2);
        if (plStack_a8 != (long *)0x0) {
          plVar21 = plStack_a8 + 1;
          do {
            lVar16 = *plVar21;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar5) {
              *plVar21 = lVar16 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
          }
        }
        if (*param_1 == param_1[1]) {
LAB_10a665644:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10a665648);
          (*pcVar6)();
        }
        uVar8 = *(undefined8 *)(param_1[1] + -0x10);
        plStack_b8 = (long *)puVar20[1];
        uStack_c0 = *puVar20;
        if (puVar20[1] != 0) {
          plVar18 = (long *)(puVar20[1] + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar5) {
              *plVar18 = *plVar18 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        FUN_10a0d4a88(uVar8,&uStack_c0);
        plVar18 = plStack_b8;
        if (plStack_b8 != (long *)0x0) {
          plVar21 = plStack_b8 + 1;
          do {
            lVar16 = *plVar21;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar5) {
              *plVar21 = lVar16 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
          }
        }
        lVar19 = puVar20[0xf];
        lVar16 = param_1[1];
        if (lVar19 == 0) {
          if (*param_1 == lVar16) goto LAB_10a665644;
          uVar8 = *(undefined8 *)(lVar16 + -0x10);
          uStack_e8 = 0;
          uStack_e0 = 0;
          uStack_d8 = 0;
          FUN_10a2e23e0(&uStack_e8,*(long *)(param_2 + 0x2a0),*(long *)(param_2 + 0x2a8),
                        *(long *)(param_2 + 0x2a8) - *(long *)(param_2 + 0x2a0) >> 4);
          FUN_10a4212b8(uVar8,&uStack_e8);
          puStack_88 = &uStack_e8;
          FUN_10a0d4a18(&puStack_88);
        }
        else {
          if (*param_1 == lVar16) goto LAB_10a665644;
          uVar8 = *(undefined8 *)(lVar16 + -0x10);
          plStack_c8 = (long *)puVar20[0x10];
          if (plStack_c8 != (long *)0x0) {
            plVar18 = plStack_c8 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar5) {
                *plVar18 = *plVar18 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          lStack_d0 = lVar19;
          FUN_10a2d54dc(uVar8,&lStack_d0);
          plVar18 = plStack_c8;
          if (plStack_c8 != (long *)0x0) {
            plVar21 = plStack_c8 + 1;
            do {
              lVar16 = *plVar21;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar5) {
                *plVar21 = lVar16 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
            }
          }
        }
        puVar20 = puVar20 + 0x11;
      } while (puVar20 != puVar22);
    }
  }
  FUN_10a3c762c(param_2);
  return;
}



/* Entry: 10a6656e8; end: 10a665ce3;  */

void FUN_10a6656e8(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plStack_138;
  long *plStack_130;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long lStack_98;
  undefined1 uStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  
  lVar7 = param_1;
  FUN_10a665148();
  if ((int)lVar7 != 0) {
    lVar7 = *(long *)(param_1 + 0x638);
    lStack_98 = lVar7 + 0x390;
    uStack_90 = 0;
    plVar10 = *(long **)(lVar7 + 0x398);
    for (plVar8 = *(long **)(lVar7 + 0x390); plVar8 != plVar10; plVar8 = plVar8 + 0x11) {
      uVar9 = *(undefined8 *)(param_1 + 0x170);
      plVar4 = (long *)0x128;
      __Znwm();
      plVar4[1] = 0;
      plVar4[2] = 0;
      plVar6 = plVar4 + 3;
      *plVar4 = (long)&PTR_FUN_110bf0850;
      FUN_10ac28a40(plVar6,uVar9);
      plStack_a8 = plVar6;
      plStack_a0 = plVar4;
      FUN_10a5633f0(&plStack_a8,plVar4 + 0xb,plVar6);
      plVar4 = plStack_a0;
      plVar6 = plStack_a8;
      *(undefined1 *)(plStack_a8 + 1) = 1;
      lVar7 = *(long *)(param_1 + 0x170);
      if (lVar7 == 0) {
        plVar5 = (long *)0x108;
        __Znwm();
        plVar5[1] = 0;
        plVar5[2] = 0;
        *plVar5 = (long)&PTR_FUN_110ba2088;
        plStack_f8 = plVar6;
        plStack_f0 = plVar4;
        if (plVar4 != (long *)0x0) {
          plVar6 = plVar4 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = *plVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plVar6 = plVar5 + 3;
        FUN_10a347bd4(plVar6,0,&plStack_f8);
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
        plStack_138 = plVar6;
        plStack_130 = plVar5;
        FUN_10a0cfb64(&plStack_138,plVar5 + 8,plVar6);
        FUN_10a0cf858(&plStack_b8,&plStack_138);
        if (plStack_130 != (long *)0x0) {
          plVar6 = plStack_130 + 1;
          do {
            lVar7 = *plVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            plVar4 = plStack_130;
          } while (cVar2 != '\0');
          goto LAB_10a665a74;
        }
      }
      else {
        plStack_88 = *(long **)(lVar7 + 0x858);
        plStack_80 = *(long **)(lVar7 + 0x860);
        if (plStack_80 != (long *)0x0) {
          plVar5 = plStack_80 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = *plVar5 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plVar5 = (long *)0xf0;
        __Znwm();
        plStack_f8 = plVar6;
        plStack_f0 = plVar4;
        if (plVar4 != (long *)0x0) {
          plVar6 = plVar4 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = *plVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        FUN_10a347bd4(plVar5,lVar7,&plStack_f8);
        plStack_78 = plVar5;
        if (plVar4 != (long *)0x0) {
          plVar6 = plVar4 + 1;
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
            (**(code **)(*plVar4 + 0x10))(plVar4);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
        plVar5 = plStack_78;
        plStack_78 = (long *)0x0;
        FUN_10a0cfa2c(&plStack_78,0);
        plVar4 = plStack_80;
        plVar6 = plStack_88;
        plStack_78 = plStack_88;
        plStack_70 = plStack_80;
        if (plStack_80 != (long *)0x0) {
          plVar1 = plStack_80 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          plVar1 = plStack_80 + 2;
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
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
        }
        plStack_f8 = plVar6;
        plStack_f0 = plVar4;
        FUN_10a0cfac4(&plStack_138,plVar5,&plStack_f8);
        FUN_10a0cf858(&plStack_b8,&plStack_138);
        plVar6 = plStack_130;
        if (plStack_130 != (long *)0x0) {
          plVar4 = plStack_130 + 1;
          do {
            lVar7 = *plVar4;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plStack_130 + 0x10))(plStack_130);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        if (plStack_f0 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        plVar6 = plStack_70;
        if (plStack_70 != (long *)0x0) {
          plVar4 = plStack_70 + 1;
          do {
            lVar7 = *plVar4;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plStack_70 + 0x10))(plStack_70);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        if ((plStack_88 != (long *)0x0) && (plStack_b8 != (long *)0x0)) {
          plStack_138 = plStack_b8;
          plStack_130 = plStack_b0;
          if (plStack_b0 != (long *)0x0) {
            plVar6 = plStack_b0 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar3) {
                *plVar6 = *plVar6 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          FUN_10aa88c30(plStack_88,&plStack_138);
          plVar6 = plStack_130;
          if (plStack_130 != (long *)0x0) {
            plVar4 = plStack_130 + 1;
            do {
              lVar7 = *plVar4;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar3) {
                *plVar4 = lVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar7 == 0) {
              (**(code **)(*plStack_130 + 0x10))(plStack_130);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            }
          }
        }
        if (plStack_80 != (long *)0x0) {
          plVar6 = plStack_80 + 1;
          do {
            lVar7 = *plVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            plVar4 = plStack_80;
          } while (cVar2 != '\0');
LAB_10a665a74:
          if (lVar7 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
      }
      plVar6 = plStack_a8;
      *(undefined1 *)(plStack_b8 + 1) = 1;
      plVar4 = *(long **)(*plVar8 + 0xe0);
      if (plVar4 == (long *)0x0) {
        lVar7 = 0;
      }
      else {
        (**(code **)(*plVar4 + 0x90))();
        lVar7 = *plVar4;
      }
      FUN_10a54c73c(plVar6[0x1b],lVar7);
      func_0x00010ac6ec94(plVar6);
      FUN_10a19ad28(plVar8,&plStack_b8);
      plVar8[2] = (long)plStack_a8;
      plVar6 = (long *)plStack_b8[0x1c];
      if (plVar6 == (long *)0x0) {
        lVar7 = 0;
      }
      else {
        (**(code **)(*plVar6 + 0x90))();
        lVar7 = *plVar6;
      }
      func_0x00010a424420(&plStack_138,param_1);
      func_0x000109519fd0(&plStack_f8,&plStack_138,plVar8 + 7);
      FUN_10a4244c0(param_1,param_2,lVar7,&plStack_f8);
      plVar6 = (long *)plStack_b8[0x1c];
      if (plVar6 == (long *)0x0) {
        lVar7 = 0;
      }
      else {
        (**(code **)(*plVar6 + 0x90))();
        lVar7 = *plVar6;
      }
      plVar6 = plStack_b0;
      plVar8[3] = lVar7;
      if (plStack_b0 != (long *)0x0) {
        plVar4 = plStack_b0 + 1;
        do {
          lVar7 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      plVar6 = plStack_a0;
      if (plStack_a0 != (long *)0x0) {
        plVar4 = plStack_a0 + 1;
        do {
          lVar7 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
    }
    FUN_10a67eac4(&lStack_98);
  }
  return;
}



/* Entry: 10a665ce4; end: 10a665f2f;  */

void FUN_10a665ce4(long param_1,long *param_2)

{
  long lVar1;
  
  FUN_10a2d5884();
  FUN_10a00d760(param_2,&PTR_s_text_110c06de8,param_1 + 0x5a0);
  FUN_10a1f5c70(param_2,&PTR_DAT_110c06e08,param_1 + 0x5b8);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x5fc),param_2,&PTR_DAT_110c03558);
  if (*(char *)(param_1 + 0x5d4) == '\x01') {
    (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c03578,*(undefined4 *)(param_1 + 0x5d0));
  }
  if (*(char *)(param_1 + 0x5d9) == '\x01') {
    (**(code **)(*param_2 + 0x70))(param_2,&PTR_s_italic_110c06e28,*(undefined1 *)(param_1 + 0x5d8))
    ;
  }
  FUN_10a00d760(param_2,&PTR_DAT_110c03598,param_1 + 0x5e0);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c035b8,*(undefined4 *)(param_1 + 0x608));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c035d8,*(undefined4 *)(param_1 + 0x60c));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c035f8,*(undefined1 *)(param_1 + 0x688));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c03698,*(undefined1 *)(param_1 + 0x610));
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x614),param_2,&PTR_DAT_110c036b8);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x618),param_2,&PTR_DAT_110c036d8);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x600),param_2,&PTR_DAT_110c03ce0);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c03d00,*(undefined1 *)(param_1 + 0x604));
  lVar1 = 0;
  if (*(long *)(param_1 + 0x620) != 0) {
    lVar1 = *(long *)(param_1 + 0x620) + 0x18;
  }
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c03778,lVar1);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c03798,*(undefined1 *)(param_1 + 0x4f8));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c037b8,*(undefined1 *)(param_1 + 0x4f9));
  FUN_10a65c424(param_2,param_1 + 0x500);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c03d20,*(undefined1 *)(param_1 + 0x61c));
                    /* WARNING: Could not recover jumptable at 0x00010a665f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c037f8,*(undefined1 *)(param_1 + 0x5f8));
  return;
}



/* Entry: 10a665f30; end: 10a666373;  */

void FUN_10a665f30(long param_1,long *param_2)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long *plVar8;
  undefined1 **ppuVar9;
  undefined *puVar10;
  long **pplVar11;
  ulong uVar12;
  undefined8 *extraout_x8;
  long lVar13;
  long **pplVar14;
  long *plVar15;
  undefined1 *puVar16;
  long *plVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined1 *puStack_160;
  long *plStack_158;
  undefined1 *puStack_150;
  long *plStack_148;
  undefined1 uStack_131;
  long lStack_e0;
  undefined1 uStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long *plStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  char *pcStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a2d5304();
  plStack_b0 = (long *)0x0;
  uStack_a8 = 0;
  lStack_a0 = 0;
  FUN_10a49e934(param_2,&PTR_s_text_110c06de8,&plStack_b0);
  if (lStack_a0 < 0) {
    func_0x000107c3192c(&plStack_d0,plStack_b0,uStack_a8);
  }
  else {
    uStack_c8 = uStack_a8;
    plStack_d0 = plStack_b0;
    lStack_c0 = lStack_a0;
  }
  FUN_10a664f70(param_1,&plStack_d0);
  if (lStack_c0 < 0) {
    __ZdlPv(plStack_d0);
  }
  lVar13 = param_1 + 0x5b8;
  uStack_d8 = 0;
  plVar8 = param_2;
  lStack_e0 = lVar13;
  FUN_10a1f53a4(param_2,&PTR_DAT_110c06e08,lVar13);
  if (((ulong)plVar8 & 1) == 0) {
    pcStack_58 = "font";
    uStack_50 = 4;
    FUN_10a1f5b2c(auStack_48);
    FUN_10a1f53a4(param_2,&pcStack_58,lVar13);
  }
  FUN_10a67f670(&lStack_e0);
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c06e48);
  fVar18 = *(float *)(param_1 + 0x5fc);
  if ((int)plVar8 == 0) {
    (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c03558);
  }
  else {
    plVar8 = param_2;
    (**(code **)(*param_2 + 0xd0))(param_2,&PTR_DAT_110c06e48,(int)fVar18);
    fVar18 = (float)((ulong)plVar8 & 0xffffffff);
  }
  fVar19 = 2.0;
  if (2.0 <= fVar18) {
    fVar19 = fVar18;
  }
  fVar18 = 800.0;
  if (fVar19 <= 800.0) {
    fVar18 = fVar19;
  }
  *(float *)(param_1 + 0x5fc) = fVar18;
  FUN_10a679b20(param_2,param_1 + 0x5d0);
  func_0x00010a679b9c(param_2,param_1 + 0x5d8);
  FUN_10a49e934(param_2,&PTR_DAT_110c03598,param_1 + 0x5e0);
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c035b8,*(undefined4 *)(param_1 + 0x608));
  *(int *)(param_1 + 0x608) = (int)plVar8;
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c035d8,*(undefined4 *)(param_1 + 0x60c));
  *(int *)(param_1 + 0x60c) = (int)plVar8;
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c035f8,*(undefined1 *)(param_1 + 0x688));
  *(char *)(param_1 + 0x688) = (char)plVar8;
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c03698,*(undefined1 *)(param_1 + 0x610));
  *(char *)(param_1 + 0x610) = (char)plVar8;
  uVar20 = *(undefined4 *)(param_1 + 0x614);
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c036b8);
  *(undefined4 *)(param_1 + 0x614) = uVar20;
  uVar20 = *(undefined4 *)(param_1 + 0x618);
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c036d8);
  *(undefined4 *)(param_1 + 0x618) = uVar20;
  uVar20 = *(undefined4 *)(param_1 + 0x600);
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c03ce0);
  *(undefined4 *)(param_1 + 0x600) = uVar20;
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c03d00,*(undefined1 *)(param_1 + 0x604));
  *(char *)(param_1 + 0x604) = (char)plVar8;
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c03d20,*(undefined1 *)(param_1 + 0x61c));
  *(char *)(param_1 + 0x61c) = (char)plVar8;
  lVar13 = 0;
  if (*(long *)(param_1 + 0x620) != 0) {
    lVar13 = *(long *)(param_1 + 0x620) + 0x18;
  }
  (**(code **)(*param_2 + 0x1f8))(param_2,&PTR_DAT_110c03778,lVar13);
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c03798,*(undefined1 *)(param_1 + 0x4f8));
  *(char *)(param_1 + 0x4f8) = (char)plVar8;
  if ((int)plVar8 == 0) {
    FUN_10a9dc2b0(param_1 + 0x4f0);
  }
  else {
    FUN_10a9dc140(param_1 + 0x4f0);
  }
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c037b8,*(undefined1 *)(param_1 + 0x4f9));
  *(char *)(param_1 + 0x4f9) = (char)plVar8;
  pcStack_98 = FUN_10a67f81c;
  ppuStack_90 = &PTR_FUN_110c079d0;
  lStack_88 = param_1;
  FUN_10a65cb90(param_2,&PTR_DAT_110c037d8,&pcStack_98,0);
  (*(code *)*ppuStack_90)(&ppuStack_90);
  uVar12 = (ulong)*(byte *)(param_1 + 0x5f8);
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c037f8);
  *(char *)(param_1 + 0x5f8) = (char)param_2;
  *(undefined8 *)(param_1 + 0x680) = *(undefined8 *)(param_1 + 0x170);
  plVar8 = (long *)(param_1 + 0x680);
  pplVar11 = &plStack_b0;
  FUN_10a1c5558(plVar8,pplVar11);
  if (lStack_a0 < 0) {
    plVar8 = plStack_b0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (lStack_a0 < 0) {
    __ZdlPv(plStack_b0);
  }
  __Unwind_Resume();
  if (uVar12 == 0) {
    plVar15 = plVar8;
    pplVar14 = pplVar11;
    func_0x00010a0fda30();
  }
  else {
    plStack_148 = (long *)plVar8[9];
    puStack_150 = (undefined1 *)plVar8[8];
    lVar13 = uVar12 + 0x88;
    func_0x00010a35bf90(lVar13,&puStack_150);
    plVar15 = (long *)((ulong)&puStack_150 | 8);
    ppuVar9 = &puStack_150;
    if (lVar13 != 0) {
      plVar15 = (long *)(lVar13 + 0x28);
      ppuVar9 = (undefined1 **)(lVar13 + 0x20);
    }
    pplVar14 = (long **)*plVar15;
    plVar15 = (long *)*ppuVar9;
  }
  puVar16 = (undefined1 *)plVar8[0x2e];
  FUN_10a3dd220(puVar16);
  FUN_10a57966c(puVar16,plVar15,pplVar14);
  plVar15 = (long *)0x28;
  puStack_160 = puVar16;
  __Znwm();
  plVar17 = plVar15 + 1;
  *plVar17 = 0;
  *plVar15 = (long)&PTR_DAT_110c079f8;
  plVar15[2] = 0;
  plVar15[3] = (long)puVar16;
  plVar15[4] = (long)FUN_10a3df8cc;
  plStack_158 = plVar15;
  if (puVar16 != (undefined1 *)0x0) {
    if (*(long *)(puVar16 + 0x30) == 0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *plVar17 = *plVar17 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar15 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(undefined1 **)(puVar16 + 0x28) = puVar16;
      *(long **)(puVar16 + 0x30) = plVar15;
    }
    else {
      if (*(long *)(*(long *)(puVar16 + 0x30) + 8) != -1) goto LAB_10a6664e0;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *plVar17 = *plVar17 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar15 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(undefined1 **)(puVar16 + 0x28) = puVar16;
      *(long **)(puVar16 + 0x30) = plVar15;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar13 = *plVar17;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *plVar17 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
LAB_10a6664e0:
  puVar16 = puStack_160;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (puStack_160 + 0x150,plVar8 + 0x2a);
  uVar2 = (*(ushort *)(plVar8 + 0x30) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(puVar16 + 0x180) & 0xfffc;
  *(ushort *)(puVar16 + 0x180) = uVar3 | *(ushort *)(puVar16 + 0x180) & 1 | uVar2;
  *(ushort *)(puVar16 + 0x180) = uVar3 | uVar2 | *(ushort *)(plVar8 + 0x30) & 1;
  puStack_150 = puVar16;
  plStack_148 = plStack_158;
  if (plStack_158 != (long *)0x0) {
    plVar15 = plStack_158 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *plVar15 = *plVar15 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_10a3c7ce8(pplVar11,&puStack_150);
  plVar15 = plStack_148;
  if (plStack_148 != (long *)0x0) {
    plVar17 = plStack_148 + 1;
    do {
      lVar13 = *plVar17;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *plVar17 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_148 + 0x10))(plStack_148);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  puVar16 = puStack_160;
  plVar15 = plVar8;
  (**(code **)(*plVar8 + 0x128))();
  puVar16[0x20c] = 0;
  *(int *)(puVar16 + 0x210) = (int)plVar15;
  FUN_10a2d597c(plVar8,puVar16,uVar12);
  if (*(char *)((long)plVar8 + 0x5b7) < '\0') {
    func_0x000107c3192c(&lStack_180,plVar8[0xb4],plVar8[0xb5]);
  }
  else {
    lStack_178 = plVar8[0xb5];
    lStack_180 = plVar8[0xb4];
    lStack_170 = plVar8[0xb6];
  }
  FUN_10a664f70(puVar16,&lStack_180);
  if (lStack_170 < 0) {
    __ZdlPv(lStack_180);
  }
  uVar4 = *(uint *)(puVar16 + 0x5c8);
  if ((uVar4 == 0xffffffff) || (*(uint *)(plVar8 + 0xb9) != uVar4)) {
    if (*(uint *)(plVar8 + 0xb9) == uVar4) goto LAB_10a66665c;
  }
  else {
    puStack_150 = &uStack_131;
    ppuVar9 = &puStack_150;
    (*(code *)(&PTR_FUN_110c07730)[uVar4])(ppuVar9,puVar16 + 0x5b8,plVar8 + 0xb7);
    if (((ulong)ppuVar9 & 1) != 0) goto LAB_10a66665c;
  }
  FUN_10a67f988(puVar16 + 0x5b8);
  FUN_10a67a464(puVar16 + 0x5b8,plVar8 + 0xb7);
  FUN_10a67f9d4(puVar16 + 0x5b8);
  FUN_10a67fa38(puVar16 + 0x5b8);
LAB_10a66665c:
  lVar13 = plVar8[0xba];
  *(int *)(puVar16 + 0x5d0) = (int)lVar13;
  puVar16[0x5d4] = (char)((ulong)lVar13 >> 0x20);
  *(short *)(puVar16 + 0x5d8) = (short)plVar8[0xbb];
  fVar18 = 2.0;
  if (2.0 <= *(float *)((long)plVar8 + 0x5fc)) {
    fVar18 = *(float *)((long)plVar8 + 0x5fc);
  }
  fVar19 = 800.0;
  if (fVar18 <= 800.0) {
    fVar19 = fVar18;
  }
  *(float *)(puVar16 + 0x5fc) = fVar19;
  if (*(byte *)((long)plVar8 + 0x30a) < 3) {
    puVar16[0x30a] = *(byte *)((long)plVar8 + 0x30a);
    if (*(byte *)((long)plVar8 + 0x309) < 3) {
      puVar16[0x309] = *(byte *)((long)plVar8 + 0x309);
      if (*(uint *)(plVar8 + 0xc1) < 3) {
        *(uint *)(puVar16 + 0x608) = *(uint *)(plVar8 + 0xc1);
        if (*(uint *)((long)plVar8 + 0x60c) < 7) {
          *(uint *)(puVar16 + 0x60c) = *(uint *)((long)plVar8 + 0x60c);
          puVar16[0x610] = (char)plVar8[0xc2];
          *(undefined4 *)(puVar16 + 0x614) = *(undefined4 *)((long)plVar8 + 0x614);
          *(int *)(puVar16 + 0x618) = (int)plVar8[0xc3];
          *(int *)(puVar16 + 0x600) = (int)plVar8[0xc0];
          puVar16[0x604] = *(undefined1 *)((long)plVar8 + 0x604);
          FUN_10a664fe4(puVar16,plVar8 + 0xc4);
          puVar16[0x61c] = *(undefined1 *)((long)plVar8 + 0x61c);
          if (0x174 < *(int *)(*(long *)(plVar8[0x2e] + 0xa20) + 0x18)) {
            if (*(char *)((long)plVar8 + 0x5f7) < '\0') {
              func_0x000107c3192c(&lStack_1a0,plVar8[0xbc],plVar8[0xbd]);
            }
            else {
              lStack_198 = plVar8[0xbd];
              lStack_1a0 = plVar8[0xbc];
              lStack_190 = plVar8[0xbe];
            }
            if ((char)puVar16[0x5f7] < '\0') {
              __ZdlPv(*(long *)(puVar16 + 0x5e0));
            }
            *(long *)(puVar16 + 0x5e8) = lStack_198;
            *(long *)(puVar16 + 0x5e0) = lStack_1a0;
            *(long *)(puVar16 + 0x5f0) = lStack_190;
          }
          puVar16[0x5f8] = (char)plVar8[0xbf];
          *extraout_x8 = puVar16;
          extraout_x8[1] = plStack_158;
          return;
        }
        puVar10 = &UNK_10f66afd2;
      }
      else {
        puVar10 = &UNK_10f66af9c;
      }
    }
    else {
      puVar10 = &UNK_10f6577bb;
    }
  }
  else {
    puVar10 = &UNK_10f657788;
  }
  FUN_10a00946c(puVar10);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a666820);
  (*pcVar7)();
}



/* Entry: 10a666374; end: 10a666843;  */

void FUN_10a666374(undefined8 *param_1,long *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  float fVar8;
  code *pcVar9;
  undefined1 **ppuVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined1 *puVar15;
  long *plVar16;
  float fVar17;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 *puStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  long *plStack_68;
  undefined1 uStack_51;
  
  if (param_4 == 0) {
    plVar14 = param_2;
    uVar13 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_68 = (long *)param_2[9];
    puStack_70 = (undefined1 *)param_2[8];
    lVar12 = param_4 + 0x88;
    func_0x00010a35bf90(lVar12,&puStack_70);
    puVar4 = (undefined8 *)((ulong)&puStack_70 | 8);
    ppuVar10 = &puStack_70;
    if (lVar12 != 0) {
      puVar4 = (undefined8 *)(lVar12 + 0x28);
      ppuVar10 = (undefined1 **)(lVar12 + 0x20);
    }
    uVar13 = *puVar4;
    plVar14 = (long *)*ppuVar10;
  }
  puVar15 = (undefined1 *)param_2[0x2e];
  FUN_10a3dd220(puVar15);
  FUN_10a57966c(puVar15,plVar14,uVar13);
  plVar14 = (long *)0x28;
  puStack_80 = puVar15;
  __Znwm();
  plVar16 = plVar14 + 1;
  *plVar16 = 0;
  *plVar14 = (long)&PTR_DAT_110c079f8;
  plVar14[2] = 0;
  plVar14[3] = (long)puVar15;
  plVar14[4] = (long)FUN_10a3df8cc;
  plStack_78 = plVar14;
  if (puVar15 != (undefined1 *)0x0) {
    if (*(long *)(puVar15 + 0x30) == 0) {
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar7) {
          *plVar16 = *plVar16 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar1 = plVar14 + 2;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      *(undefined1 **)(puVar15 + 0x28) = puVar15;
      *(long **)(puVar15 + 0x30) = plVar14;
    }
    else {
      if (*(long *)(*(long *)(puVar15 + 0x30) + 8) != -1) goto LAB_10a6664e0;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar7) {
          *plVar16 = *plVar16 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar1 = plVar14 + 2;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      *(undefined1 **)(puVar15 + 0x28) = puVar15;
      *(long **)(puVar15 + 0x30) = plVar14;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar12 = *plVar16;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *plVar16 = lVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
  }
LAB_10a6664e0:
  puVar15 = puStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (puStack_80 + 0x150,param_2 + 0x2a);
  uVar2 = (*(ushort *)(param_2 + 0x30) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(puVar15 + 0x180) & 0xfffc;
  *(ushort *)(puVar15 + 0x180) = uVar3 | *(ushort *)(puVar15 + 0x180) & 1 | uVar2;
  *(ushort *)(puVar15 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x30) & 1;
  puStack_70 = puVar15;
  plStack_68 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar14 = plStack_78 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar7) {
        *plVar14 = *plVar14 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  FUN_10a3c7ce8(param_3,&puStack_70);
  plVar14 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar16 = plStack_68 + 1;
    do {
      lVar12 = *plVar16;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *plVar16 = lVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
  }
  puVar15 = puStack_80;
  plVar14 = param_2;
  (**(code **)(*param_2 + 0x128))();
  puVar15[0x20c] = 0;
  *(int *)(puVar15 + 0x210) = (int)plVar14;
  FUN_10a2d597c(param_2,puVar15,param_4);
  if (*(char *)((long)param_2 + 0x5b7) < '\0') {
    func_0x000107c3192c(&lStack_a0,param_2[0xb4],param_2[0xb5]);
  }
  else {
    lStack_98 = param_2[0xb5];
    lStack_a0 = param_2[0xb4];
    lStack_90 = param_2[0xb6];
  }
  FUN_10a664f70(puVar15,&lStack_a0);
  if (lStack_90 < 0) {
    __ZdlPv(lStack_a0);
  }
  uVar5 = *(uint *)(puVar15 + 0x5c8);
  if ((uVar5 == 0xffffffff) || (*(uint *)(param_2 + 0xb9) != uVar5)) {
    if (*(uint *)(param_2 + 0xb9) == uVar5) goto LAB_10a66665c;
  }
  else {
    puStack_70 = &uStack_51;
    ppuVar10 = &puStack_70;
    (*(code *)(&PTR_FUN_110c07730)[uVar5])(ppuVar10,puVar15 + 0x5b8,param_2 + 0xb7);
    if (((ulong)ppuVar10 & 1) != 0) goto LAB_10a66665c;
  }
  FUN_10a67f988(puVar15 + 0x5b8);
  FUN_10a67a464(puVar15 + 0x5b8,param_2 + 0xb7);
  FUN_10a67f9d4(puVar15 + 0x5b8);
  FUN_10a67fa38(puVar15 + 0x5b8);
LAB_10a66665c:
  lVar12 = param_2[0xba];
  *(int *)(puVar15 + 0x5d0) = (int)lVar12;
  puVar15[0x5d4] = (char)((ulong)lVar12 >> 0x20);
  *(short *)(puVar15 + 0x5d8) = (short)param_2[0xbb];
  fVar17 = 2.0;
  if (2.0 <= *(float *)((long)param_2 + 0x5fc)) {
    fVar17 = *(float *)((long)param_2 + 0x5fc);
  }
  fVar8 = 800.0;
  if (fVar17 <= 800.0) {
    fVar8 = fVar17;
  }
  *(float *)(puVar15 + 0x5fc) = fVar8;
  if (*(byte *)((long)param_2 + 0x30a) < 3) {
    puVar15[0x30a] = *(byte *)((long)param_2 + 0x30a);
    if (*(byte *)((long)param_2 + 0x309) < 3) {
      puVar15[0x309] = *(byte *)((long)param_2 + 0x309);
      if (*(uint *)(param_2 + 0xc1) < 3) {
        *(uint *)(puVar15 + 0x608) = *(uint *)(param_2 + 0xc1);
        if (*(uint *)((long)param_2 + 0x60c) < 7) {
          *(uint *)(puVar15 + 0x60c) = *(uint *)((long)param_2 + 0x60c);
          puVar15[0x610] = (char)param_2[0xc2];
          *(undefined4 *)(puVar15 + 0x614) = *(undefined4 *)((long)param_2 + 0x614);
          *(int *)(puVar15 + 0x618) = (int)param_2[0xc3];
          *(int *)(puVar15 + 0x600) = (int)param_2[0xc0];
          puVar15[0x604] = *(undefined1 *)((long)param_2 + 0x604);
          FUN_10a664fe4(puVar15,param_2 + 0xc4);
          puVar15[0x61c] = *(undefined1 *)((long)param_2 + 0x61c);
          if (0x174 < *(int *)(*(long *)(param_2[0x2e] + 0xa20) + 0x18)) {
            if (*(char *)((long)param_2 + 0x5f7) < '\0') {
              func_0x000107c3192c(&lStack_c0,param_2[0xbc],param_2[0xbd]);
            }
            else {
              lStack_b8 = param_2[0xbd];
              lStack_c0 = param_2[0xbc];
              lStack_b0 = param_2[0xbe];
            }
            if ((char)puVar15[0x5f7] < '\0') {
              __ZdlPv(*(long *)(puVar15 + 0x5e0));
            }
            *(long *)(puVar15 + 0x5e8) = lStack_b8;
            *(long *)(puVar15 + 0x5e0) = lStack_c0;
            *(long *)(puVar15 + 0x5f0) = lStack_b0;
          }
          puVar15[0x5f8] = (char)param_2[0xbf];
          *param_1 = puVar15;
          param_1[1] = plStack_78;
          return;
        }
        puVar11 = &UNK_10f66afd2;
      }
      else {
        puVar11 = &UNK_10f66af9c;
      }
    }
    else {
      puVar11 = &UNK_10f6577bb;
    }
  }
  else {
    puVar11 = &UNK_10f657788;
  }
  FUN_10a00946c(puVar11);
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a666820);
  (*pcVar9)();
}



/* Entry: 10a666844; end: 10a6668df;  */

long FUN_10a666844(long param_1,long param_2)

{
  uint uVar1;
  undefined1 **ppuVar2;
  undefined1 uStack_29;
  undefined1 *puStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 == 0xffffffff || *(uint *)(param_2 + 0x10) != uVar1) {
    if (*(uint *)(param_2 + 0x10) == uVar1) {
      return param_1;
    }
  }
  else {
    puStack_28 = &uStack_29;
    ppuVar2 = &puStack_28;
    (*(code *)(&PTR_FUN_110c07730)[uVar1])(ppuVar2,param_1,param_2);
    if (((ulong)ppuVar2 & 1) != 0) {
      return param_1;
    }
  }
  FUN_10a67f988(param_1);
  FUN_10a1f6844(param_1,param_2);
  FUN_10a67f9d4(param_1);
  FUN_10a67fa38(param_1);
  return param_1;
}



/* Entry: 10a6668e0; end: 10a6669c7;  */

void FUN_10a6668e0(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  long lStack_48;
  long *plStack_40;
  uint uStack_38;
  
  FUN_10a1f6274(auStack_60,param_1 + 0x5b8);
  lVar4 = *param_2;
  plVar1 = (long *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = plVar1;
  if (lVar4 != 0) {
    plVar5 = (long *)0x0;
    lStack_48 = lVar4;
    plStack_40 = plVar1;
  }
  uStack_38 = (uint)(lVar4 != 0);
  FUN_10a1f6844(auStack_60,&lStack_48);
  FUN_10a1f57fc(&lStack_48);
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
  FUN_10a1f5b9c(auStack_78,auStack_60);
  FUN_10a666844(param_1 + 0x5b8,auStack_78);
  FUN_10a1f57fc(auStack_78);
  FUN_10a1f57fc(auStack_60);
  return;
}



/* Entry: 10a6669c8; end: 10a666acf;  */

void FUN_10a6669c8(undefined8 param_1)

{
  undefined1 uStack_99;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b109;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f66a659;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  puStack_60 = &UNK_10f66a659;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a666ad0(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b116;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f66a659;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_99 = 0;
  FUN_10a666b28(param_1,&puStack_98,&uStack_99);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b11c;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f66a659;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_99 = 1;
  FUN_10a666b28(param_1,&puStack_98,&uStack_99);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a666ad0; end: 10a666b27;  */

ulong FUN_10a666ad0(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10a666b28; end: 10a666fcf;  */

ulong FUN_10a666b28(ulong param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a67fcb0(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a666fd0; end: 10a667227;  */

undefined1  [16] FUN_10a666fd0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 8;
  auVar1._0_8_ = &UNK_10f66b5db;
  return auVar1;
}



/* Entry: 10a667228; end: 10a6675af;  */

void FUN_10a667228(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f66b5db,8);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c062b0;
  pppuVar2 = (undefined8 ***)&UNK_10f66a659;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
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
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c062b0;
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
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"mode",FUN_10a67fd24,FUN_10a67fde0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68f0f0,FUN_10a67ffac,FUN_10a680078);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66b168,FUN_10a68013c,FUN_10a680208);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66b172,FUN_10a6802cc,FUN_10a680388);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66b17c,FUN_10a680478,FUN_10a680534);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66b185,FUN_10a680618,FUN_10a6806d4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f636fd0,FUN_10a680794,FUN_10a68084c);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f66b5db,8);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a667594);
  (*pcVar6)();
}



/* Entry: 10a6675b0; end: 10a6676d3;  */

void FUN_10a6675b0(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f66a659;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f66a659;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a6676d4(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f66b194;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f66a659;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f66a659;
  uStack_38 = 0;
  FUN_10a680a98();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f66b19c;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f66a659;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = (undefined *)0x0;
  uStack_38 = 0;
  func_0x00010a680d38(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f66ab01;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f66a659;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f66a659;
  uStack_38 = 0;
  FUN_10a680f64(param_1,&puStack_98);
  FUN_10a68114c(param_1);
  return;
}



/* Entry: 10a6676d4; end: 10a6677ab;  */

/* WARNING: Removing unreachable block (ram,0x00010a66776c) */

undefined1  [16] FUN_10a6676d4(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66b5e4,0x12);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a68099c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a6677ac; end: 10a6678cf;  */

void FUN_10a6677ac(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f66a659;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f66a659;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a6678d0(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f66b194;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f66a659;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f66a659;
  uStack_38 = 0;
  FUN_10a681304();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f66b19c;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f66a659;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = (undefined *)0x0;
  uStack_38 = 0;
  func_0x00010a6815a4(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f66ab5c;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f66a659;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f66a659;
  uStack_38 = 0;
  FUN_10a6817d0(param_1,&puStack_98);
  FUN_10a6819d4(param_1);
  return;
}



/* Entry: 10a6678d0; end: 10a6679a7;  */

/* WARNING: Removing unreachable block (ram,0x00010a667968) */

undefined1  [16] FUN_10a6678d0(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66b5f7,0xf);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a681208(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a6679a8; end: 10a667c6f;  */

void FUN_10a6679a8(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f66b607,0x12);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c06368;
  pppuVar2 = (undefined8 ***)&UNK_10f66a659;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
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
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c06368;
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
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66b194,FUN_10a681a90,FUN_10a681b48);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66b19c,FUN_10a681cd8,FUN_10a681d90);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66b1a1,FUN_10a681eac,FUN_10a681f64);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f36a360,FUN_10a682080,FUN_10a68213c);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f66b607,0x12);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a667c54);
  (*pcVar6)();
}



/* Entry: 10a667c70; end: 10a667d6b;  */

void FUN_10a667c70(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = &UNK_10f66b61a;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f66a659;
  uStack_78 = 0;
  puStack_70 = &UNK_10f66a659;
  uStack_68 = 0;
  uStack_60 = 0x144;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a68222c(param_1,&puStack_98,100);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66a857;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f66a659;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a68231c();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b1a9;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f66a659;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a682480(param_1,&puStack_98);
  FUN_10a682590(param_1);
  return;
}



/* Entry: 10a667d6c; end: 10a667e4f;  */

void FUN_10a667d6c(long param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_s_mode_110c06eb8,*(undefined1 *)(param_1 + 0x10));
  (**(code **)(*param_2 + 0x90))(param_2,&PTR_DAT_110c06ed8,param_1 + 0x14);
  (**(code **)(*param_2 + 0x90))(param_2,&PTR_DAT_110c04000,param_1 + 0x24);
  FUN_10a02e188(param_2,&PTR_DAT_110c04020,param_1 + 0x40,&UNK_10f633e9d,0xd);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x34),param_2,&PTR_DAT_110c04040);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c04060,*(undefined1 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010a667e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c04080,*(undefined1 *)(param_1 + 0x39));
  return;
}



/* Entry: 10a667e50; end: 10a667fe3;  */

void FUN_10a667e50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,long *param_6)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_s_mode_110c06eb8,*(undefined1 *)(param_5 + 0x10));
  *(char *)(param_5 + 0x10) = (char)plVar1;
  (**(code **)(*param_6 + 0x110))(param_6,&PTR_DAT_110c06ed8,param_5 + 0x14);
  *(undefined4 *)(param_5 + 0x14) = param_1;
  *(undefined4 *)(param_5 + 0x18) = param_2;
  *(undefined4 *)(param_5 + 0x1c) = param_3;
  *(undefined4 *)(param_5 + 0x20) = param_4;
  (**(code **)(*param_6 + 0x110))(param_6,&PTR_DAT_110c04000,param_5 + 0x24);
  *(undefined4 *)(param_5 + 0x24) = param_1;
  *(undefined4 *)(param_5 + 0x28) = param_2;
  *(undefined4 *)(param_5 + 0x2c) = param_3;
  *(undefined4 *)(param_5 + 0x30) = param_4;
  uStack_78 = 0x10a6826d0;
  ppuStack_70 = &PTR_FUN_110c07a78;
  lStack_68 = param_5;
  FUN_10a02d928(param_6,&PTR_DAT_110c04020,&uStack_78,0);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  uVar3 = *(undefined4 *)(param_5 + 0x34);
  (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110c04040);
  *(undefined4 *)(param_5 + 0x34) = uVar3;
  plVar1 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110c04060,*(undefined1 *)(param_5 + 0x38));
  *(undefined1 *)(param_5 + 0x38) = (char)plVar1;
  ppuVar2 = &PTR_DAT_110c04080;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110c04080,*(undefined1 *)(param_5 + 0x39));
  *(undefined1 *)(param_5 + 0x39) = (char)param_6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(param_5 + 0x40);
  __Unwind_Resume();
  (**(code **)(*ppuVar2 + 0x70))(ppuVar2,&PTR_DAT_110c040a0,(char)param_6[5]);
  (**(code **)(*ppuVar2 + 0x118))(ppuVar2,&PTR_DAT_110c06ef8,param_6[6]);
                    /* WARNING: Could not recover jumptable at 0x00010a668050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*ppuVar2 + 0x78))(ppuVar2,&PTR_DAT_110c040c0,param_6 + 8);
  return;
}



/* Entry: 10a667fe4; end: 10a668687;  */

void FUN_10a667fe4(long param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c040a0,*(undefined1 *)(param_1 + 0x28));
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c06ef8,*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010a668050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x78))(param_2,&PTR_DAT_110c040c0,param_1 + 0x40);
  return;
}



/* Entry: 10a668688; end: 10a66876b;  */

undefined1  [16] FUN_10a668688(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1f;
  auVar1._0_8_ = &UNK_10f66b629;
  return auVar1;
}



/* Entry: 10a66876c; end: 10a66885b;  */

void FUN_10a66876c(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000002;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f66a659;
  puStack_70 = (undefined *)0x0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = CONCAT44(uStack_58._4_4_,0x16b);
  FUN_10a66885c(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b1cf;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x200000064;
  puStack_70 = &UNK_10f66a659;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0x16b;
  puStack_40 = (undefined *)0x0;
  uStack_38 = 0;
  FUN_10a682874();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b1d7;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x200000064;
  puStack_70 = &UNK_10f66a659;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0x16b;
  puStack_40 = &UNK_10f66a659;
  uStack_38 = 0;
  func_0x00010a682a0c(param_1,&puStack_98);
  FUN_10a682e0c(param_1);
  return;
}



/* Entry: 10a66885c; end: 10a668933;  */

/* WARNING: Removing unreachable block (ram,0x00010a6688f4) */

undefined1  [16] FUN_10a66885c(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66b629,0x1f);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a682778(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a668934; end: 10a668a23;  */

undefined8 * FUN_10a668934(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  param_1[0x55] = &PTR_FUN_110c383b8;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  *(undefined2 *)(param_1 + 0x58) = 0x100;
  puVar1 = param_1;
  FUN_10a3c575c(param_1,&PTR_PTR_110c04450,param_2,param_3);
  FUN_10a0040d0(puVar1 + 0x3e,&PTR_PTR_110c04460);
  *param_1 = &PTR_FUN_110c04138;
  param_1[2] = &PTR_DAT_110c04248;
  param_1[7] = &PTR_DAT_110c042a0;
  param_1[0xd] = &PTR_DAT_110c042c0;
  param_1[0x55] = &PTR_DAT_110c04410;
  param_1[0x16] = &PTR_DAT_110c04330;
  param_1[0x17] = &PTR_DAT_110c04360;
  param_1[0x3e] = &PTR_DAT_110c04398;
  param_1[0x44] = 0;
  param_1[0x43] = 0x3f800000;
  param_1[0x46] = 0;
  param_1[0x45] = 0x3f80000000000000;
  param_1[0x48] = 0x3f800000;
  param_1[0x47] = 0;
  param_1[0x4a] = 0x3f80000000000000;
  param_1[0x49] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0x3f800000;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0x3f80000000000000;
  param_1[0x50] = 0x3f800000;
  param_1[0x4f] = 0;
  param_1[0x52] = 0x3f80000000000000;
  param_1[0x51] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  return param_1;
}



/* Entry: 10a668a24; end: 10a668ab7;  */

void FUN_10a668a24(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c04138;
  param_1[2] = &PTR_DAT_110c04248;
  param_1[7] = &PTR_DAT_110c042a0;
  param_1[0xd] = &PTR_DAT_110c042c0;
  param_1[0x55] = &PTR_DAT_110c04410;
  param_1[0x16] = &PTR_DAT_110c04330;
  param_1[0x17] = &PTR_DAT_110c04360;
  param_1[0x3e] = &PTR_DAT_110c04398;
  func_0x00010a682ec8(param_1 + 0x53);
  param_1[0x3e] = &PTR_DAT_110c06538;
  param_1[0x55] = &PTR_FUN_110c065b0;
  func_0x00010a004e5c(param_1 + 0x41);
  func_0x00010a004e04(param_1 + 0x3f);
  *param_1 = &PTR_FUN_110c063b8;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x55] = &PTR_DAT_110c064e8;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar1 = param_1[0x14];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x15];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a668ab8; end: 10a668afb;  */

void FUN_10a668ab8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c04138;
  param_1[2] = &PTR_DAT_110c04248;
  param_1[7] = &PTR_DAT_110c042a0;
  param_1[0xd] = &PTR_DAT_110c042c0;
  param_1[0x55] = &PTR_DAT_110c04410;
  param_1[0x16] = &PTR_DAT_110c04330;
  param_1[0x17] = &PTR_DAT_110c04360;
  param_1[0x3e] = &PTR_DAT_110c04398;
  func_0x00010a682ec8(param_1 + 0x53);
  param_1[0x3e] = &PTR_DAT_110c06538;
  param_1[0x55] = &PTR_FUN_110c065b0;
  func_0x00010a004e5c(param_1 + 0x41);
  func_0x00010a004e04(param_1 + 0x3f);
  *param_1 = &PTR_FUN_110c063b8;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x55] = &PTR_DAT_110c064e8;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar1 = param_1[0x14];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x15];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a668afc; end: 10a668b9f;  */

void FUN_10a668afc(void)

{
  FUN_10a668a24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a668ba0; end: 10a668bcf;  */

void FUN_10a668ba0(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a668a24((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a668bd0; end: 10a668c4b;  */

void FUN_10a668bd0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 0x170);
  plVar1 = (long *)(param_1 + 0x1f0 + *(long *)(*(long *)(param_1 + 0x1f0) + -0x18));
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = lVar5;
    if (lVar5 != 0) {
      plVar1[1] = *(long *)(*(long *)(lVar5 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  lVar4 = *(long *)(param_1 + 0x208);
  if (*(long *)(lVar4 + 0x20) == 0) {
    *(long *)(lVar4 + 0x30) = lVar5;
    lVar6 = *(long *)(lVar4 + 0x18);
    if (*(long *)(lVar4 + 0x18) != 0) {
      plVar1 = (long *)(*(long *)(lVar4 + 0x18) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a3cf744(lVar5,&stack0xffffffffffffffd0,&PTR_DAT_110b99f08,param_1 + 0x1f0);
    if (lVar6 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((int)lVar5 != 0) {
      *(int *)(lVar4 + 0x38) = (int)lVar5;
      *(undefined1 *)(lVar4 + 0x3c) = 1;
    }
  }
  else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    FUN_10ae06f30(1,8,&UNK_10f665c8c,&UNK_10f665cc3,0x71,&UNK_10f665d1c,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 10a668c4c; end: 10a668c53;  */

void FUN_10a668c4c(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x208);
  if (*(char *)((long)plVar3 + 0x3c) == '\x01') {
    FUN_10a3cf620(plVar3[6],(int)plVar3[7],plVar3);
    *(undefined4 *)(plVar3 + 7) = 0;
  }
  else {
    if (*(char *)((long)plVar3 + 0x3c) != '\x02') {
      return;
    }
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
  }
  *(undefined1 *)((long)plVar3 + 0x3c) = 0;
  return;
}



/* Entry: 10a668c54; end: 10a668cc7;  */

undefined8 * FUN_10a668c54(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10a668cc8; end: 10a668d57;  */

void FUN_10a668cc8(long param_1,long param_2)

{
  int *piVar1;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined1 uStack_24;
  
  if (((*(long *)(param_1 + 0x298) != 0) &&
      (piVar1 = *(int **)(*(long *)(param_1 + 0x298) + 0x40), piVar1 != (int *)0x0)) &&
     (*piVar1 != 0)) {
    uStack_38 = 0;
    lStack_50 = 0;
    uStack_48 = 0;
    lStack_58 = 0;
    uStack_40 = 0;
    uStack_34 = 0x1000000;
    uStack_30 = 0;
    uStack_24 = 0;
    FUN_10a051998(param_2 + 0x138,&lStack_58);
    if (lStack_58 != 0) {
      lStack_50 = lStack_58;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10a668d58; end: 10a668d5f;  */

void FUN_10a668d58(long param_1,long param_2)

{
  int *piVar1;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined1 uStack_24;
  
  if (((*(long *)(param_1 + 0xa8) != 0) &&
      (piVar1 = *(int **)(*(long *)(param_1 + 0xa8) + 0x40), piVar1 != (int *)0x0)) &&
     (*piVar1 != 0)) {
    uStack_38 = 0;
    lStack_50 = 0;
    uStack_48 = 0;
    lStack_58 = 0;
    uStack_40 = 0;
    uStack_34 = 0x1000000;
    uStack_30 = 0;
    uStack_24 = 0;
    FUN_10a051998(param_2 + 0x138,&lStack_58);
    if (lStack_58 != 0) {
      lStack_50 = lStack_58;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10a668d60; end: 10a668df7;  */

void FUN_10a668d60(long param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(long *)(param_2 + 0xd0) != 0) {
    lVar1 = *(long *)(param_1 + 0x298);
    if ((((lVar1 == 0) || (*(int **)(lVar1 + 0x40) == (int *)0x0)) ||
        (**(int **)(lVar1 + 0x40) == 0)) || (*(char *)(lVar1 + 0x20) != '\x01')) {
      *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_1 + 0x260);
      *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_1 + 600);
      *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_1 + 0x270);
      *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(param_1 + 0x268);
      *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_1 + 0x280);
      *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_1 + 0x278);
      *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_1 + 0x290);
      *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(param_1 + 0x288);
    }
    else {
      FUN_10acb3a18(&uStack_60);
      *(undefined8 *)(param_1 + 0x220) = uStack_58;
      *(undefined8 *)(param_1 + 0x218) = uStack_60;
      *(undefined8 *)(param_1 + 0x230) = uStack_48;
      *(undefined8 *)(param_1 + 0x228) = uStack_50;
      *(undefined8 *)(param_1 + 0x240) = uStack_38;
      *(undefined8 *)(param_1 + 0x238) = uStack_40;
      *(undefined8 *)(param_1 + 0x250) = uStack_28;
      *(undefined8 *)(param_1 + 0x248) = uStack_30;
    }
    FUN_10a3e28b8(*(undefined8 *)(*(long *)(param_1 + 0x168) + 0x140),param_1 + 0x218);
  }
  return;
}



/* Entry: 10a668df8; end: 10a668dff;  */

void FUN_10a668df8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(long *)(param_2 + 0xd0) != 0) {
    lVar1 = *(long *)(param_1 + 0xa8);
    if ((((lVar1 == 0) || (*(int **)(lVar1 + 0x40) == (int *)0x0)) ||
        (**(int **)(lVar1 + 0x40) == 0)) || (*(char *)(lVar1 + 0x20) != '\x01')) {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x90);
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x88);
      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0xa0);
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x98);
    }
    else {
      FUN_10acb3a18(&uStack_60);
      *(undefined8 *)(param_1 + 0x30) = uStack_58;
      *(undefined8 *)(param_1 + 0x28) = uStack_60;
      *(undefined8 *)(param_1 + 0x40) = uStack_48;
      *(undefined8 *)(param_1 + 0x38) = uStack_50;
      *(undefined8 *)(param_1 + 0x50) = uStack_38;
      *(undefined8 *)(param_1 + 0x48) = uStack_40;
      *(undefined8 *)(param_1 + 0x60) = uStack_28;
      *(undefined8 *)(param_1 + 0x58) = uStack_30;
    }
    FUN_10a3e28b8(*(undefined8 *)(*(long *)(param_1 + -0x88) + 0x140),param_1 + 0x28);
  }
  return;
}



/* Entry: 10a668e00; end: 10a66909f;  */

void FUN_10a668e00(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lStack_50;
  long *plStack_48;
  
  if (param_4 == 0) {
    lVar9 = param_2;
    uVar8 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_48 = *(long **)(param_2 + 0x48);
    lStack_50 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_50);
    puVar4 = (undefined8 *)((ulong)&lStack_50 | 8);
    plVar7 = &lStack_50;
    if (param_4 != 0) {
      puVar4 = (undefined8 *)(param_4 + 0x28);
      plVar7 = (long *)(param_4 + 0x20);
    }
    uVar8 = *puVar4;
    lVar9 = *plVar7;
  }
  lVar10 = *(long *)(param_2 + 0x170);
  FUN_10a3dd220(lVar10);
  FUN_10a576184(lVar10,lVar9,uVar8);
  plVar7 = (long *)0x28;
  __Znwm();
  plVar11 = plVar7 + 1;
  *plVar11 = 0;
  *plVar7 = (long)&PTR_FUN_110c07aa0;
  plVar7[2] = 0;
  plVar7[3] = lVar10;
  plVar7[4] = (long)FUN_10a3df8cc;
  if (lVar10 != 0) {
    if (*(long *)(lVar10 + 0x30) == 0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar10 + 0x28) = lVar10;
      *(long **)(lVar10 + 0x30) = plVar7;
    }
    else {
      if (*(long *)(*(long *)(lVar10 + 0x30) + 8) != -1) goto LAB_10a668f64;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar10 + 0x28) = lVar10;
      *(long **)(lVar10 + 0x30) = plVar7;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar9 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
LAB_10a668f64:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar10 + 0x150,param_2 + 0x150);
  uVar2 = (*(ushort *)(param_2 + 0x180) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(lVar10 + 0x180) & 0xfffc;
  *(ushort *)(lVar10 + 0x180) = uVar3 | *(ushort *)(lVar10 + 0x180) & 1 | uVar2;
  *(ushort *)(lVar10 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x180) & 1;
  if (plVar7 != (long *)0x0) {
    plVar11 = plVar7 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lStack_50 = lVar10;
  plStack_48 = plVar7;
  FUN_10a3c7ce8(param_3,&lStack_50);
  plVar11 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar9 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  uVar8 = *(undefined8 *)(param_2 + 0x278);
  uVar13 = *(undefined8 *)(param_2 + 0x290);
  uVar12 = *(undefined8 *)(param_2 + 0x288);
  uVar17 = *(undefined8 *)(param_2 + 0x260);
  uVar16 = *(undefined8 *)(param_2 + 600);
  uVar15 = *(undefined8 *)(param_2 + 0x270);
  uVar14 = *(undefined8 *)(param_2 + 0x268);
  *(undefined8 *)(lVar10 + 0x240) = *(undefined8 *)(param_2 + 0x280);
  *(undefined8 *)(lVar10 + 0x238) = uVar8;
  *(undefined8 *)(lVar10 + 0x250) = uVar13;
  *(undefined8 *)(lVar10 + 0x248) = uVar12;
  *(undefined8 *)(lVar10 + 0x220) = uVar17;
  *(undefined8 *)(lVar10 + 0x218) = uVar16;
  *(undefined8 *)(lVar10 + 0x230) = uVar15;
  *(undefined8 *)(lVar10 + 0x228) = uVar14;
  uVar14 = *(undefined8 *)(param_2 + 0x280);
  uVar13 = *(undefined8 *)(param_2 + 0x278);
  uVar12 = *(undefined8 *)(param_2 + 0x290);
  uVar8 = *(undefined8 *)(param_2 + 0x288);
  uVar17 = *(undefined8 *)(param_2 + 600);
  uVar16 = *(undefined8 *)(param_2 + 0x270);
  uVar15 = *(undefined8 *)(param_2 + 0x268);
  *(undefined8 *)(lVar10 + 0x260) = *(undefined8 *)(param_2 + 0x260);
  *(undefined8 *)(lVar10 + 600) = uVar17;
  *(undefined8 *)(lVar10 + 0x270) = uVar16;
  *(undefined8 *)(lVar10 + 0x268) = uVar15;
  *(undefined8 *)(lVar10 + 0x280) = uVar14;
  *(undefined8 *)(lVar10 + 0x278) = uVar13;
  *(undefined8 *)(lVar10 + 0x290) = uVar12;
  *(undefined8 *)(lVar10 + 0x288) = uVar8;
  FUN_10a668c54(lVar10 + 0x298,*(undefined8 *)(param_2 + 0x298),*(undefined8 *)(param_2 + 0x2a0));
  *param_1 = lVar10;
  param_1[1] = (long)plVar7;
  return;
}



/* Entry: 10a6690a0; end: 10a6692bf;  */

void FUN_10a6690a0(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f66b1e4;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f66a659;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 300;
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
  puStack_a8 = &DAT_10f30064f;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f66a659;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 300;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a6692c0(param_1,&puStack_a8,1);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f66b1ee;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f66a659;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 300;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a6692c0();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f66b1fa;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f66a659;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 300;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a6692c0();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f66b1ff;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f66a659;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 300;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a6692c0();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f66b207;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f66a659;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 300;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a6692c0();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f66b20e;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f66a659;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 300;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a6692c0();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a6692c0; end: 10a669367;  */

undefined8 * FUN_10a6692c0(undefined8 *param_1,undefined8 *param_2,byte param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a669368);
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



/* Entry: 10a669368; end: 10a669477;  */

void FUN_10a669368(undefined8 param_1)

{
  undefined1 uStack_99;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b219;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f66a659;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x155;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a669478(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66a65a;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x155;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_99 = 0;
  FUN_10a6694d0(param_1,&puStack_98,&uStack_99);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b225;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x155;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_99 = 2;
  FUN_10a6694d0(param_1,&puStack_98,&uStack_99);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a669478; end: 10a6694cf;  */

ulong FUN_10a669478(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10a6694d0; end: 10a669527;  */

ulong FUN_10a6694d0(ulong param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a682fec(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a669528; end: 10a66968b;  */

void FUN_10a669528(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b22f;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f66a659;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x133;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_48,uStack_78 & 0xffffffff,
                uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66a65a;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x133;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a66968c(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b23a;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x133;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a66968c();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b245;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x133;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a66968c();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a66968c; end: 10a669733;  */

undefined8 * FUN_10a66968c(undefined8 *param_1,undefined8 *param_2,byte param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a669734);
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



/* Entry: 10a669734; end: 10a669887;  */

void FUN_10a669734(ulong param_1)

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
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b24f;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x160;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_48,uStack_78 & 0xffffffff,
                uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b260;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x160;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a669888(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b26c;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x160;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a669888();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b275;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x160;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a669888();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a669888; end: 10a669c27;  */

undefined8 * FUN_10a669888(undefined8 *param_1,undefined8 *param_2,byte param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a669930);
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



/* Entry: 10a669c28; end: 10a669da3;  */

void FUN_10a669c28(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f66b2bd;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_88);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_70 & 0xffffffff,uStack_70._4_4_,uStack_38,uStack_68 & 0xffffffff,
                uStack_68._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_88);
  }
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f66a65a;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a669da4(param_1,&puStack_88,0);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f65220f;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a669da4();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f652216;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a669da4();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &DAT_10f643ac2;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a669da4();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a669da4; end: 10a669e4b;  */

undefined8 * FUN_10a669da4(undefined8 *param_1,undefined8 *param_2,byte param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a669e4c);
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



/* Entry: 10a669e4c; end: 10a669f17;  */

undefined1  [16] FUN_10a669e4c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x15;
  auVar1._0_8_ = &UNK_10f66b649;
  return auVar1;
}



/* Entry: 10a669f18; end: 10a66a003;  */

void FUN_10a669f18(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f66a659;
  puStack_70 = (undefined *)0x0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a66a004(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f66b2cc;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f66a659;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f66a659;
  uStack_38 = 0;
  FUN_10a68315c();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f66ab55;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f66a659;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f66a659;
  uStack_38 = 0;
  func_0x00010a683430(param_1,&puStack_98);
  FUN_10a683648(param_1);
  return;
}



/* Entry: 10a66a004; end: 10a66a0db;  */

/* WARNING: Removing unreachable block (ram,0x00010a66a09c) */

undefined1  [16] FUN_10a66a004(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66b649,0x15);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a683060(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a66a0dc; end: 10a66a0e3;  */

void FUN_10a66a0dc(void)

{
  return;
}


