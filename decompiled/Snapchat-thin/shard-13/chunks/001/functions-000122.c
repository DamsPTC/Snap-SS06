/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a190930; end: 10a190943;  */

void FUN_10a190930(void)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *extraout_x8;
  long *plVar5;
  long lVar6;
  long lStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar3 = (long *)&UNK_10f6403f7;
  FUN_109ffde64();
  plVar4 = (long *)0x90;
  __Znwm();
  plVar5 = plVar4 + 1;
  *plVar5 = 0;
  *plVar4 = (long)&PTR_FUN_110b9fe30;
  lStack_50 = *plVar3;
  plStack_40 = plVar4 + 3;
  plVar4[4] = plVar3[1];
  *plStack_40 = lStack_50;
  plVar4[2] = 0;
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0x32aaaba7;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[0xd] = 0;
  plVar4[0xc] = 0;
  plVar4[0xf] = 0;
  plVar4[0xe] = 0;
  plVar4[0x11] = 0;
  plVar4[0x10] = 0;
  *extraout_x8 = lStack_50;
  extraout_x8[1] = (long)plVar4;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_48 = plVar4;
  plStack_38 = plVar4;
  func_0x00010a053e8c(plStack_40,&lStack_50);
  plVar3 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar4 = plStack_48 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (*plStack_40 != 0) {
    func_0x00010a053ee8(*plStack_40,&plStack_40);
  }
  plVar3 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar4 = plStack_38 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10a190944; end: 10a190aa7;  */

void FUN_10a190944(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar3 = (long *)0x90;
  __Znwm();
  plVar4 = plVar3 + 1;
  *plVar4 = 0;
  *plVar3 = (long)&PTR_FUN_110b9fe30;
  lStack_40 = *param_2;
  plStack_30 = plVar3 + 3;
  plVar3[4] = param_2[1];
  *plStack_30 = lStack_40;
  plVar3[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0x32aaaba7;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  *param_1 = lStack_40;
  param_1[1] = (long)plVar3;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_38 = plVar3;
  plStack_28 = plVar3;
  func_0x00010a053e8c(plStack_30,&lStack_40);
  plVar3 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar4 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (*plStack_30 != 0) {
    func_0x00010a053ee8(*plStack_30,&plStack_30);
  }
  plVar3 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar4 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10a190aa8; end: 10a190ab7;  */

void FUN_10a190aa8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bab160;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a190ab8; end: 10a190ad7;  */

void FUN_10a190ab8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bab160;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a190ad8; end: 10a190ae3;  */

undefined8 * FUN_10a190ad8(long param_1)

{
  FUN_10a190b28(param_1 + 0x240);
  *(undefined ***)(param_1 + 0xf8) = &PTR_FUN_110bab1b0;
  *(undefined ***)(param_1 + 0x188) = &PTR_DAT_110bab1e0;
  FUN_10a1c0a9c();
  *(undefined8 *)(param_1 + 0x18) = &PTR_FUN_110c3ec18;
  *(undefined ***)(param_1 + 0x28) = &PTR_DAT_110c3ecb8;
  *(undefined ***)(param_1 + 0x50) = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0xe8);
  if (*(long *)(param_1 + 0xe0) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x98);
  if (*(long *)(param_1 + 0x90) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)(param_1 + 0x87) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x70));
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x30);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 10a190ae4; end: 10a190b27;  */

undefined8 * FUN_10a190ae4(undefined8 *param_1)

{
  FUN_10a190b28(param_1 + 0x45);
  param_1[0x1c] = &PTR_FUN_110bab1b0;
  param_1[0x2e] = &PTR_DAT_110bab1e0;
  FUN_10a1c0a9c();
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a190b28; end: 10a190b63;  */

undefined8 FUN_10a190b28(undefined8 param_1)

{
  undefined8 uStack_28;
  
  FUN_10a190b64();
  uStack_28 = param_1;
  func_0x00010a190bd0(&uStack_28);
  return param_1;
}



/* Entry: 10a190b64; end: 10a190c3f;  */

void FUN_10a190b64(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[1];
  for (plVar1 = (long *)*param_1; plVar1 != plVar2; plVar1 = plVar1 + 2) {
    if (((plVar1[1] != 0) && (0 < *(long *)(plVar1[1] + 8))) && (*plVar1 != 0)) {
      func_0x00010a1be248(*plVar1 + 0xd0,(long)param_1 + (0xe0 - (ulong)uRam00000001133006e0));
    }
  }
  return;
}



/* Entry: 10a190c40; end: 10a190c73;  */

void FUN_10a190c40(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a190c44);
  (*pcVar1)();
}



/* Entry: 10a190c74; end: 10a190d23;  */

void FUN_10a190c74(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10a190d24; end: 10a190d33;  */

void FUN_10a190d24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110baa060;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a190d34; end: 10a190d53;  */

void FUN_10a190d34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110baa060;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a190d54; end: 10a190d5f;  */

long FUN_10a190d54(long param_1)

{
  undefined8 *puVar1;
  
  if (*(long **)(param_1 + 0x1a0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1a0) + 0x50))();
  }
  FUN_10a047524(param_1 + 0x2d8);
  func_0x00010a363560(param_1 + 0x2c0,*(undefined8 *)(param_1 + 0x2c8));
  func_0x00010a363518(param_1 + 0x2a8,*(undefined8 *)(param_1 + 0x2b0));
  func_0x00010a084504(param_1 + 0x298);
  FUN_10a363478(param_1 + 0x280);
  func_0x00010a3633d8(param_1 + 0x270);
  FUN_10a0da1b8(param_1 + 0x218,*(undefined8 *)(param_1 + 0x220));
  func_0x00010a363354(param_1 + 0x200,*(undefined8 *)(param_1 + 0x208));
  func_0x00010a362fa4(param_1 + 0x1e8,*(undefined8 *)(param_1 + 0x1f0));
  FUN_10a363274(param_1 + 0x1d0);
  if (*(char *)(param_1 + 0x1cf) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x1b8));
  }
  func_0x00010a36313c(param_1 + 0x1a0);
  puVar1 = (undefined8 *)(param_1 + 0x58);
  *puVar1 = &PTR_FUN_110bc6858;
  *(undefined ***)(param_1 + 0xe8) = &PTR_DAT_110bc6888;
  FUN_10a1c0a9c();
  if (puVar1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)(param_1 + 0x30) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x38);
  return param_1 + 0x18;
}



/* Entry: 10a190d60; end: 10a190e67;  */

void FUN_10a190d60(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10a190e68; end: 10a190edb;  */

long FUN_10a190e68(long param_1,uint param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((int)param_2 < -1) {
    uVar2 = (ulong)(param_2 & 0x7fffffff);
    uVar3 = (*(long *)(param_1 + 0x788) - *(long *)(param_1 + 0x780) >> 4) * -0x1111111111111111;
    if (uVar2 <= uVar3 && uVar3 - uVar2 != 0) {
      return *(long *)(param_1 + 0x780) + uVar2 * 0xf0;
    }
  }
  else {
    uVar2 = (*(long *)(param_1 + 0x5e0) - *(long *)(param_1 + 0x5d8) >> 4) * -0x1111111111111111;
    if (param_2 <= uVar2 && uVar2 - param_2 != 0) {
      return *(long *)(param_1 + 0x5d8) + (ulong)param_2 * 0xf0;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a190edc);
  (*pcVar1)();
}



/* Entry: 10a190edc; end: 10a190f73;  */

void FUN_10a190edc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_2 + 0xa8) != 0) {
    lVar1 = *(long *)(param_1 + 0x300);
    if (lVar1 != 0) {
      if ((*(byte *)(lVar1 + 0x2a) & 0x24) != 0) {
        FUN_10a3e8fd4(lVar1);
      }
      lVar2 = *(long *)(param_1 + 0x178);
      if ((*(byte *)(lVar2 + 0x2a) & 0x24) != 0) {
        FUN_10a3e8fd4(lVar2);
      }
      func_0x000109519fd0(&uStack_70,lVar2 + 0xc0,lVar1 + 0xc0);
      *(undefined8 *)(param_2 + 0xc) = uStack_68;
      *(undefined8 *)(param_2 + 4) = uStack_70;
      *(undefined8 *)(param_2 + 0x1c) = uStack_58;
      *(undefined8 *)(param_2 + 0x14) = uStack_60;
      *(undefined8 *)(param_2 + 0x2c) = uStack_48;
      *(undefined8 *)(param_2 + 0x24) = uStack_50;
      *(undefined8 *)(param_2 + 0x3c) = uStack_38;
      *(undefined8 *)(param_2 + 0x34) = uStack_40;
    }
  }
  return;
}



/* Entry: 10a190f74; end: 10a191133;  */

long FUN_10a190f74(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 *param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_850 [112];
  long lStack_7e0;
  long lStack_7d8;
  undefined8 *puStack_6e8;
  undefined8 *puStack_6e0;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_60;
  undefined4 uStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  iVar5 = 0;
  bVar1 = false;
  do {
    if (bVar1) {
      bVar1 = true;
    }
    else {
      fVar7 = *(float *)(param_2 + 0x114);
      if (iVar5 == 1) {
        fVar7 = *(float *)(param_2 + 0x118);
      }
      fVar8 = *(float *)(param_2 + 0x11c);
      if (iVar5 != 2) {
        fVar8 = fVar7;
      }
      bVar1 = fVar8 < 0.0;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 3);
  if (!bVar1) {
    param_5 = (undefined8 *)(param_2 + 0x108);
  }
  fStack_50 = (float)param_5[2];
  fStack_4c = (float)((ulong)param_5[2] >> 0x20);
  uStack_60 = *param_5;
  uStack_58 = (undefined4)param_5[1];
  fStack_54 = (float)((ulong)param_5[1] >> 0x20);
  fVar7 = *(float *)(param_2 + 0x104);
  fStack_54 = fVar7 + fStack_54;
  fStack_50 = fVar7 + fStack_50;
  fStack_4c = fVar7 + fStack_4c;
  lVar4 = param_3 + 4;
  if (!bVar1) {
    lVar4 = param_2 + 0x6c;
  }
  lVar2 = param_1 + 0x5c0;
  func_0x00010a04a0d4(lVar2,param_4);
  lVar3 = lVar2 + 0xe0;
  func_0x00010a175964(lVar3,&uStack_60,lVar4);
  if (((int)lVar3 != 0) && ((*(byte *)(param_1 + 0x340) & 1) != 0)) {
    FUN_10a5d2f5c(&lStack_78,lVar2,&uStack_60,lVar4);
    lVar4 = param_1;
    FUN_10a01f6d4(param_1,param_4);
    FUN_10a1912d4(auStack_850,lVar4);
    for (puVar6 = puStack_6e8; puVar6 != puStack_6e0; puVar6 = puVar6 + 6) {
      lVar4 = param_1 + 8;
      FUN_10a5e2454(lVar4,*puVar6);
      FUN_10a191134(param_1 + 0x7a0,lVar4,lStack_78,lStack_70 - lStack_78 >> 4);
    }
    if (puStack_6e8 != (undefined8 *)0x0) {
      __ZdlPv(puStack_6e8);
    }
    if (lStack_7e0 != 0) {
      lStack_7d8 = lStack_7e0;
      __ZdlPv();
    }
    if (lStack_78 != 0) {
      lStack_70 = lStack_78;
      __ZdlPv();
    }
  }
  return lVar3;
}



/* Entry: 10a191134; end: 10a191293;  */

long FUN_10a191134(long param_1,undefined2 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  float *pfVar3;
  uint *puVar4;
  uint *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  code *pcVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined2 uStack_5c;
  undefined1 uStack_59;
  undefined2 *puStack_58;
  
  puStack_58 = &uStack_5c;
  param_1 = param_1 + 0x28;
  uStack_5c = param_2;
  FUN_10a1917dc(param_1,&uStack_5c,&UNK_10dd5b8f9,&puStack_58,&uStack_59);
  plVar16 = (long *)(param_1 + 0x18);
  lVar14 = *plVar16;
  if (lVar14 == *(long *)(param_1 + 0x20)) {
    uVar15 = *(ulong *)(param_1 + 0x28);
    lVar17 = *(long *)(param_1 + 0x20);
    if (uVar15 - lVar14 < param_4 << 4) {
      uVar2 = (long)(param_4 << 4) >> 4;
      if (lVar14 != 0) {
        *(long *)(param_1 + 0x20) = lVar14;
        __ZdlPv();
        uVar15 = 0;
        *plVar16 = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x28) = 0;
      }
      if (uVar2 >> 0x3c != 0) {
        FUN_10a191ca4();
        if (*(long *)(lVar14 + 0x168) != 0) {
          *(long *)(lVar14 + 0x170) = *(long *)(lVar14 + 0x168);
          __ZdlPv();
        }
        if (*(long *)(lVar14 + 0x70) != 0) {
          *(long *)(lVar14 + 0x78) = *(long *)(lVar14 + 0x70);
          __ZdlPv();
        }
        return lVar14;
      }
      uVar1 = (long)uVar15 >> 3;
      if ((ulong)((long)uVar15 >> 3) <= uVar2) {
        uVar1 = uVar2;
      }
      if (0x7fffffffffffffef < uVar15) {
        uVar1 = 0xfffffffffffffff;
      }
      func_0x00010a191c6c(plVar16,uVar1);
      lVar14 = *(long *)(param_1 + 0x20);
      lVar17 = lVar14;
    }
    if (param_3 != param_3 + param_4 * 0x10) {
      _memmove(lVar17,param_3,param_4 * 0x10);
      lVar14 = lVar17;
    }
    *(ulong *)(param_1 + 0x20) = lVar14 + param_4 * 0x10;
  }
  else if (param_4 != 0) {
    uVar15 = 0;
    do {
      lVar17 = *(long *)(param_1 + 0x18);
      if ((ulong)(*(long *)(param_1 + 0x20) - lVar17 >> 4) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10a191290);
        (*pcVar13)();
      }
      pfVar3 = (float *)(lVar17 + uVar15 * 0x10);
      fVar6 = *pfVar3;
      fVar7 = pfVar3[1];
      fVar8 = pfVar3[2];
      fVar9 = pfVar3[3];
      puVar4 = (uint *)(param_3 + uVar15 * 0x10);
      uVar19 = *(undefined8 *)(puVar4 + 2);
      uVar18 = *(undefined8 *)puVar4;
      uVar10 = *puVar4;
      uVar11 = puVar4[1];
      uVar12 = puVar4[3];
      puVar5 = (uint *)(lVar17 + uVar15 * 0x10);
      puVar5[2] = (uint)fVar8 ^ ((uint)fVar8 ^ puVar4[2]) & -(uint)(fVar8 < (float)uVar19);
      puVar5[3] = (uint)fVar9 ^
                  ((uint)fVar9 ^ uVar12) & -(uint)(fVar9 < (float)((ulong)uVar19 >> 0x20));
      *puVar5 = (uint)fVar6 ^ ((uint)fVar6 ^ uVar10) & -(uint)((float)uVar18 < fVar6);
      puVar5[1] = (uint)fVar7 ^
                  ((uint)fVar7 ^ uVar11) & -(uint)((float)((ulong)uVar18 >> 0x20) < fVar7);
      uVar15 = uVar15 + 1;
    } while (param_4 != uVar15);
  }
  return lVar14;
}



/* Entry: 10a191294; end: 10a1912d3;  */

long FUN_10a191294(long param_1)

{
  if (*(long *)(param_1 + 0x168) != 0) {
    *(long *)(param_1 + 0x170) = *(long *)(param_1 + 0x168);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x70);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a1912d4; end: 10a19150f;  */

undefined8 * FUN_10a1912d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  *(undefined8 *)((long)param_1 + 0x3d) = *(undefined8 *)((long)param_2 + 0x3d);
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  uVar3 = param_2[10];
  uVar2 = param_2[9];
  uVar5 = param_2[0xc];
  uVar4 = param_2[0xb];
  uVar1 = param_2[0xd];
  param_1[0xe] = 0;
  param_1[0xd] = uVar1;
  param_1[0xc] = uVar5;
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  param_1[9] = uVar2;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_10a191510(param_1 + 0xe,param_2[0xe],param_2[0xf],
                ((long)(param_2[0xf] - param_2[0xe]) >> 4) * -0x3333333333333333);
  uVar2 = param_2[0x12];
  uVar1 = param_2[0x11];
  uVar3 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar3;
  param_1[0x12] = uVar2;
  param_1[0x11] = uVar1;
  uVar2 = param_2[0x16];
  uVar1 = param_2[0x15];
  uVar4 = param_2[0x18];
  uVar3 = param_2[0x17];
  uVar6 = param_2[0x1a];
  uVar5 = param_2[0x19];
  uVar7 = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1b] = uVar7;
  param_1[0x1a] = uVar6;
  param_1[0x19] = uVar5;
  param_1[0x18] = uVar4;
  param_1[0x17] = uVar3;
  param_1[0x16] = uVar2;
  param_1[0x15] = uVar1;
  uVar2 = param_2[0x20];
  uVar1 = param_2[0x1f];
  uVar4 = param_2[0x22];
  uVar3 = param_2[0x21];
  uVar6 = param_2[0x24];
  uVar5 = param_2[0x23];
  uVar7 = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1d] = uVar7;
  param_1[0x24] = uVar6;
  param_1[0x23] = uVar5;
  param_1[0x22] = uVar4;
  param_1[0x21] = uVar3;
  param_1[0x20] = uVar2;
  param_1[0x1f] = uVar1;
  uVar2 = param_2[0x26];
  uVar1 = param_2[0x25];
  uVar4 = param_2[0x28];
  uVar3 = param_2[0x27];
  uVar6 = param_2[0x2a];
  uVar5 = param_2[0x29];
  uVar7 = param_2[0x2b];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2b] = uVar7;
  param_1[0x2a] = uVar6;
  param_1[0x29] = uVar5;
  param_1[0x28] = uVar4;
  param_1[0x27] = uVar3;
  param_1[0x26] = uVar2;
  param_1[0x25] = uVar1;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2d] = 0;
  FUN_10a191628(param_1 + 0x2d,param_2[0x2d],param_2[0x2e],
                ((long)(param_2[0x2e] - param_2[0x2d]) >> 4) * -0x5555555555555555);
  uVar2 = param_2[0x31];
  uVar1 = param_2[0x30];
  uVar4 = param_2[0x33];
  uVar3 = param_2[0x32];
  uVar5 = param_2[0x34];
  uVar7 = param_2[0x37];
  uVar6 = param_2[0x36];
  param_1[0x35] = param_2[0x35];
  param_1[0x34] = uVar5;
  param_1[0x37] = uVar7;
  param_1[0x36] = uVar6;
  param_1[0x31] = uVar2;
  param_1[0x30] = uVar1;
  param_1[0x33] = uVar4;
  param_1[0x32] = uVar3;
  uVar2 = param_2[0x39];
  uVar1 = param_2[0x38];
  uVar4 = param_2[0x3b];
  uVar3 = param_2[0x3a];
  uVar6 = param_2[0x3d];
  uVar5 = param_2[0x3c];
  uVar7 = *(undefined8 *)((long)param_2 + 0x1e9);
  *(undefined8 *)((long)param_1 + 0x1f1) = *(undefined8 *)((long)param_2 + 0x1f1);
  *(undefined8 *)((long)param_1 + 0x1e9) = uVar7;
  param_1[0x3b] = uVar4;
  param_1[0x3a] = uVar3;
  param_1[0x3d] = uVar6;
  param_1[0x3c] = uVar5;
  param_1[0x39] = uVar2;
  param_1[0x38] = uVar1;
  uVar4 = param_2[0x45];
  uVar3 = param_2[0x44];
  uVar2 = param_2[0x47];
  uVar1 = param_2[0x46];
  uVar6 = param_2[0x43];
  uVar5 = param_2[0x42];
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  param_1[0x45] = uVar4;
  param_1[0x44] = uVar3;
  param_1[0x47] = uVar2;
  param_1[0x46] = uVar1;
  param_1[0x43] = uVar6;
  param_1[0x42] = uVar5;
  uVar1 = param_2[0x40];
  param_1[0x41] = param_2[0x41];
  param_1[0x40] = uVar1;
  uVar5 = param_2[0x4e];
  uVar4 = param_2[0x4d];
  uVar2 = param_2[0x50];
  uVar1 = param_2[0x4f];
  uVar3 = *(undefined8 *)((long)param_2 + 0x282);
  uVar7 = param_2[0x4c];
  uVar6 = param_2[0x4b];
  *(undefined8 *)((long)param_1 + 0x28a) = *(undefined8 *)((long)param_2 + 0x28a);
  *(undefined8 *)((long)param_1 + 0x282) = uVar3;
  param_1[0x4e] = uVar5;
  param_1[0x4d] = uVar4;
  param_1[0x50] = uVar2;
  param_1[0x4f] = uVar1;
  param_1[0x4c] = uVar7;
  param_1[0x4b] = uVar6;
  uVar1 = param_2[0x49];
  param_1[0x4a] = param_2[0x4a];
  param_1[0x49] = uVar1;
  FUN_10a191740(param_1 + 0x53,param_2 + 0x53);
  uVar1 = param_2[0x84];
  param_1[0x85] = param_2[0x85];
  param_1[0x84] = uVar1;
  uVar2 = param_2[0x87];
  uVar1 = param_2[0x86];
  uVar4 = param_2[0x89];
  uVar3 = param_2[0x88];
  uVar6 = param_2[0x8b];
  uVar5 = param_2[0x8a];
  uVar7 = *(undefined8 *)((long)param_2 + 0x45a);
  *(undefined8 *)((long)param_1 + 0x462) = *(undefined8 *)((long)param_2 + 0x462);
  *(undefined8 *)((long)param_1 + 0x45a) = uVar7;
  param_1[0x8b] = uVar6;
  param_1[0x8a] = uVar5;
  param_1[0x89] = uVar4;
  param_1[0x88] = uVar3;
  param_1[0x87] = uVar2;
  param_1[0x86] = uVar1;
  FUN_10a191740(param_1 + 0x8e,param_2 + 0x8e);
  uVar1 = param_2[0xbf];
  param_1[0xc0] = param_2[0xc0];
  param_1[0xbf] = uVar1;
  uVar2 = param_2[0xc2];
  uVar1 = param_2[0xc1];
  uVar4 = param_2[0xc4];
  uVar3 = param_2[0xc3];
  uVar6 = param_2[0xc6];
  uVar5 = param_2[0xc5];
  uVar7 = *(undefined8 *)((long)param_2 + 0x632);
  *(undefined8 *)((long)param_1 + 0x63a) = *(undefined8 *)((long)param_2 + 0x63a);
  *(undefined8 *)((long)param_1 + 0x632) = uVar7;
  param_1[0xc4] = uVar4;
  param_1[0xc3] = uVar3;
  param_1[0xc6] = uVar6;
  param_1[0xc5] = uVar5;
  param_1[0xc2] = uVar2;
  param_1[0xc1] = uVar1;
  FUN_10a191740(param_1 + 0xc9,param_2 + 0xc9);
  param_1[0xfa] = param_2[0xfa];
  return param_1;
}



/* Entry: 10a191510; end: 10a191587;  */

void FUN_10a191510(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a191588(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10a191588; end: 10a1915cf;  */

void FUN_10a191588(long *param_1,ulong param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_2 < 0x333333333333334) {
    plVar1 = param_1;
    FUN_10a1915e4();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 10);
    return;
  }
  FUN_10a1915d0();
  puVar2 = &UNK_10f6403f7;
  FUN_109ffde64();
  if (param_2 < 0x333333333333334) {
    __Znwm(param_2 * 0x50);
    return;
  }
  func_0x000109ffded8();
  if (param_4 != 0) {
    FUN_10a1916a0();
    lVar3 = *(long *)(puVar2 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar3,param_2,param_3 + -6);
    }
    *(long *)(puVar2 + 8) = lVar3 + param_3;
  }
  return;
}



/* Entry: 10a1915d0; end: 10a1915e3;  */

void FUN_10a1915d0(undefined8 param_1,ulong param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = &UNK_10f6403f7;
  FUN_109ffde64();
  if (param_2 < 0x333333333333334) {
    __Znwm(param_2 * 0x50);
    return;
  }
  func_0x000109ffded8();
  if (param_4 != 0) {
    FUN_10a1916a0();
    lVar2 = *(long *)(puVar1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar2,param_2,param_3 + -6);
    }
    *(long *)(puVar1 + 8) = lVar2 + param_3;
  }
  return;
}



/* Entry: 10a1915e4; end: 10a191627;  */

void FUN_10a1915e4(long param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_2 < 0x333333333333334) {
    __Znwm(param_2 * 0x50);
    return;
  }
  func_0x000109ffded8();
  if (param_4 != 0) {
    FUN_10a1916a0();
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3 + -6);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10a191628; end: 10a19169f;  */

void FUN_10a191628(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a1916a0(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3 + -6);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10a1916a0; end: 10a1916e7;  */

undefined1  [16] FUN_10a1916a0(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_2 < (undefined8 *)0x555555555555556) {
    plVar1 = param_1;
    FUN_10a1916fc();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 6);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = plVar1;
    return auVar5;
  }
  FUN_10a1916e8();
  puVar2 = (undefined8 *)&UNK_10f6403f7;
  FUN_109ffde64();
  if (param_2 < (undefined8 *)0x555555555555556) {
    lVar3 = (long)param_2 * 0x30;
    __Znwm(lVar3);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar3;
    return auVar6;
  }
  func_0x000109ffded8();
  *puVar2 = 0;
  puVar4 = puVar2 + 1;
  *puVar2 = *param_2;
  FUN_10a19177c();
  auVar7._8_8_ = puVar4;
  auVar7._0_8_ = puVar2;
  return auVar7;
}



/* Entry: 10a1916e8; end: 10a1916fb;  */

undefined1  [16] FUN_10a1916e8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  puVar1 = (undefined8 *)&UNK_10f6403f7;
  FUN_109ffde64();
  if (param_2 < (undefined8 *)0x555555555555556) {
    lVar2 = (long)param_2 * 0x30;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  *puVar1 = 0;
  puVar3 = puVar1 + 1;
  *puVar1 = *param_2;
  FUN_10a19177c();
  auVar5._8_8_ = puVar3;
  auVar5._0_8_ = puVar1;
  return auVar5;
}



/* Entry: 10a1916fc; end: 10a19173f;  */

undefined1  [16] FUN_10a1916fc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 < (undefined8 *)0x555555555555556) {
    lVar1 = (long)param_2 * 0x30;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  *param_1 = 0;
  puVar2 = param_1 + 1;
  *param_1 = *param_2;
  FUN_10a19177c();
  auVar4._8_8_ = puVar2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a191740; end: 10a19177b;  */

undefined8 * FUN_10a191740(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  FUN_10a19177c(param_1,param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 10a19177c; end: 10a1917db;  */

void FUN_10a19177c(long *param_1,undefined2 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined2 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = 0;
    lVar3 = param_3;
    do {
      puVar4 = (undefined2 *)(param_3 + lVar2 * 0x30);
      *param_2 = *puVar4;
      *(undefined8 *)(param_2 + 4) = 0;
      lVar5 = *(long *)(puVar4 + 4);
      *(long *)(param_2 + 4) = lVar5;
      if (lVar5 != 0) {
        lVar6 = 0x10;
        do {
          *(undefined8 *)((long)param_2 + lVar6) = *(undefined8 *)(lVar3 + lVar6);
          lVar6 = lVar6 + 8;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      param_2 = param_2 + 0x18;
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x30;
    } while (lVar2 != lVar1);
  }
  return;
}



/* Entry: 10a1917dc; end: 10a191a0f;  */

undefined1  [16] FUN_10a1917dc(long *param_1,ushort *param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong unaff_x24;
  undefined1 auVar14 [16];
  
  uVar13 = (ulong)*param_2;
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar4 = uVar11 - 1;
    uVar10 = (uint)uVar11;
    uVar12 = (uint)*param_2;
    if ((uVar11 & uVar4) == 0) {
      unaff_x24 = uVar10 - 1 & uVar13;
    }
    else {
      unaff_x24 = uVar13;
      if (uVar11 <= uVar13) {
        uVar1 = 0;
        if (uVar10 != 0) {
          uVar1 = uVar12 / uVar10;
        }
        unaff_x24 = (ulong)(uVar12 - uVar1 * uVar10);
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      for (plVar9 = (long *)*puVar6; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        uVar7 = plVar9[1];
        if (uVar7 == uVar13) {
          if (*(ushort *)(plVar9 + 2) == uVar12) {
            uVar3 = 0;
            goto LAB_10a1919d0;
          }
        }
        else {
          if ((uVar11 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar11 <= uVar7) {
            uVar2 = 0;
            if (uVar11 != 0) {
              uVar2 = uVar7 / uVar11;
            }
            uVar7 = uVar7 - uVar2 * uVar11;
          }
          if (uVar7 != unaff_x24) break;
        }
      }
    }
  }
  plVar9 = (long *)0x30;
  __Znwm();
  *plVar9 = 0;
  plVar9[1] = uVar13;
  *(undefined2 *)(plVar9 + 2) = *(undefined2 *)*param_4;
  plVar9[4] = 0;
  plVar9[5] = 0;
  plVar9[3] = 0;
  if ((uVar11 == 0) || (*(float *)(param_1 + 4) * (float)uVar11 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar11) {
      uVar4 = (ulong)((uVar11 & uVar11 - 1) != 0);
    }
    uVar4 = uVar4 | uVar11 << 1;
    uVar11 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar11) {
      uVar4 = uVar11;
    }
    FUN_10a191a10(param_1,uVar4);
    uVar11 = param_1[1];
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x24 = (int)uVar11 - 1 & uVar13;
    }
    else {
      unaff_x24 = uVar13;
      if (uVar11 <= uVar13) {
        uVar4 = 0;
        if (uVar11 != 0) {
          uVar4 = uVar13 / uVar11;
        }
        unaff_x24 = uVar13 - uVar4 * uVar11;
      }
    }
  }
  lVar8 = *param_1;
  plVar5 = *(long **)(lVar8 + unaff_x24 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar9 = *plVar5;
    *plVar5 = (long)plVar9;
    *(long **)(lVar8 + unaff_x24 * 8) = plVar5;
    if (*plVar9 == 0) goto LAB_10a1919c0;
    uVar13 = *(ulong *)(*plVar9 + 8);
    if ((uVar11 & uVar11 - 1) == 0) {
      uVar13 = uVar13 & uVar11 - 1;
    }
    else if (uVar11 <= uVar13) {
      uVar4 = 0;
      if (uVar11 != 0) {
        uVar4 = uVar13 / uVar11;
      }
      uVar13 = uVar13 - uVar4 * uVar11;
    }
    plVar5 = (long *)(*param_1 + uVar13 * 8);
  }
  else {
    *plVar9 = *plVar5;
  }
  *plVar5 = (long)plVar9;
LAB_10a1919c0:
  param_1[3] = param_1[3] + 1;
  uVar3 = 1;
LAB_10a1919d0:
  auVar14._8_8_ = uVar3;
  auVar14._0_8_ = plVar9;
  return auVar14;
}



/* Entry: 10a191a10; end: 10a191adf;  */

void FUN_10a191a10(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar9 = param_1[1];
  if (uVar9 < param_2) {
LAB_10a191a58:
    if (param_2 == 0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000109ffded8();
        if ((char)param_1[1] == '\x01') {
          if (*(long *)(param_2 + 0x18) != 0) {
            *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x18);
            __ZdlPv();
          }
        }
        else if (param_2 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(param_2);
        return;
      }
      lVar2 = param_2 << 3;
      __Znwm();
      lVar3 = *param_1;
      *param_1 = lVar2;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      uVar9 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar9 * 8) = 0;
        uVar9 = uVar9 + 1;
      } while (param_2 != uVar9);
      plVar5 = (long *)param_1[2];
      if (plVar5 != (long *)0x0) {
        uVar9 = plVar5[1];
        uVar4 = param_2 - 1;
        if ((param_2 & uVar4) == 0) {
          uVar9 = uVar9 & uVar4;
        }
        else if (param_2 <= uVar9) {
          uVar8 = 0;
          if (param_2 != 0) {
            uVar8 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar8 * param_2;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar6 = (long *)*plVar5;
        while (plVar6 != (long *)0x0) {
          uVar8 = plVar6[1];
          if ((param_2 & uVar4) == 0) {
            uVar8 = uVar8 & uVar4;
          }
          else if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          plVar7 = plVar6;
          if (uVar8 != uVar9) {
            lVar2 = *param_1;
            if (*(long *)(lVar2 + uVar8 * 8) == 0) {
              *(long **)(lVar2 + uVar8 * 8) = plVar5;
              uVar9 = uVar8;
            }
            else {
              *plVar5 = *plVar6;
              *plVar6 = **(undefined8 **)(lVar2 + uVar8 * 8);
              **(long **)(lVar2 + uVar8 * 8) = (long)plVar6;
              plVar7 = plVar5;
            }
          }
          plVar5 = plVar7;
          plVar6 = (long *)*plVar7;
        }
      }
    }
    return;
  }
  if (param_2 < uVar9) {
    uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar9 < 3) || ((uVar9 & uVar9 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar4) {
      uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
    }
    if (param_2 <= uVar4) {
      param_2 = uVar4;
    }
    if (param_2 < uVar9) goto LAB_10a191a58;
  }
  return;
}



/* Entry: 10a191ae0; end: 10a191ca3;  */

void FUN_10a191ae0(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      if ((char)param_1[1] == '\x01') {
        if (*(long *)(param_2 + 0x18) != 0) {
          *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x18);
          __ZdlPv();
        }
      }
      else if (param_2 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_2);
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      uVar4 = plVar6[1];
      uVar5 = param_2 - 1;
      if ((param_2 & uVar5) == 0) {
        uVar4 = uVar4 & uVar5;
      }
      else if (param_2 <= uVar4) {
        uVar9 = 0;
        if (param_2 != 0) {
          uVar9 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar9 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar6;
      while (plVar7 != (long *)0x0) {
        uVar9 = plVar7[1];
        if ((param_2 & uVar5) == 0) {
          uVar9 = uVar9 & uVar5;
        }
        else if (param_2 <= uVar9) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar1 * param_2;
        }
        plVar8 = plVar7;
        if (uVar9 != uVar4) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar9 * 8) == 0) {
            *(long **)(lVar2 + uVar9 * 8) = plVar6;
            uVar4 = uVar9;
          }
          else {
            *plVar6 = *plVar7;
            *plVar7 = **(undefined8 **)(lVar2 + uVar9 * 8);
            **(long **)(lVar2 + uVar9 * 8) = (long)plVar7;
            plVar8 = plVar6;
          }
        }
        plVar6 = plVar8;
        plVar7 = (long *)*plVar8;
      }
    }
  }
  return;
}



/* Entry: 10a191ca4; end: 10a191cb7;  */

void FUN_10a191ca4(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_e4 [64];
  undefined1 uStack_a4;
  undefined1 auStack_a0 [40];
  undefined1 uStack_78;
  
  puVar1 = &UNK_10f6403f7;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  uVar2 = param_2;
  func_0x00010a01e9ec(param_2,param_3);
  uVar3 = param_2;
  FUN_10a015150(param_2,param_3);
  auStack_a0[0] = 0;
  uStack_78 = 0;
  auStack_e4[0] = 0;
  uStack_a4 = 0;
  FUN_10abfc924(puVar1,param_2,param_3,param_4,1,*(long *)(uVar3 + 0xb8),
                *(long *)(uVar3 + 0xc0) - *(long *)(uVar3 + 0xb8) >> 1,auStack_a0,auStack_e4);
  puVar1[10] = *(byte *)(uVar2 + 0x18) & 1 | puVar1[10];
  return;
}



/* Entry: 10a191cb8; end: 10a191ceb;  */

void FUN_10a191cb8(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_d4 [64];
  undefined1 uStack_94;
  undefined1 auStack_90 [40];
  undefined1 uStack_68;
  
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  uVar1 = param_2;
  func_0x00010a01e9ec(param_2,param_3);
  uVar2 = param_2;
  FUN_10a015150(param_2,param_3);
  auStack_90[0] = 0;
  uStack_68 = 0;
  auStack_d4[0] = 0;
  uStack_94 = 0;
  FUN_10abfc924(param_1,param_2,param_3,param_4,1,*(long *)(uVar2 + 0xb8),
                *(long *)(uVar2 + 0xc0) - *(long *)(uVar2 + 0xb8) >> 1,auStack_90,auStack_d4);
  *(byte *)(param_1 + 10) = *(byte *)(uVar1 + 0x18) & 1 | *(byte *)(param_1 + 10);
  return;
}



/* Entry: 10a191cec; end: 10a191d9b;  */

void FUN_10a191cec(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_b4 [64];
  undefined1 uStack_74;
  undefined1 auStack_70 [40];
  undefined1 uStack_48;
  
  lVar1 = param_2;
  func_0x00010a01e9ec(param_2,param_3);
  lVar2 = param_2;
  FUN_10a015150(param_2,param_3);
  auStack_70[0] = 0;
  uStack_48 = 0;
  auStack_b4[0] = 0;
  uStack_74 = 0;
  FUN_10abfc924(param_1,param_2,param_3,param_4,1,*(long *)(lVar2 + 0xb8),
                *(long *)(lVar2 + 0xc0) - *(long *)(lVar2 + 0xb8) >> 1,auStack_70,auStack_b4);
  *(byte *)(param_1 + 10) = *(byte *)(lVar1 + 0x18) & 1 | *(byte *)(param_1 + 10);
  return;
}



/* Entry: 10a191d9c; end: 10a191e5f;  */

void FUN_10a191d9c(long param_1,long param_2,undefined8 param_3,long param_4)

{
  short sVar1;
  short *psVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  FUN_10a191e60(param_2,param_3);
  if (param_2 == 0) {
    psVar2 = *(short **)(param_4 + 0xb8);
    do {
      if (psVar2 == *(short **)(param_4 + 0xc0)) {
        return;
      }
      sVar1 = *psVar2;
      psVar2 = psVar2 + 1;
    } while (sVar1 == -1);
    lVar4 = param_1;
    FUN_10a021e20();
    uVar5 = *(ulong *)(lVar4 + 0xe8);
    FUN_10a191f18(uVar5,*(undefined8 *)(lVar4 + 0xf0),0x71 < *(int *)(param_1 + 0x20));
    uVar6 = (*(long *)(lVar4 + 0xf0) - *(long *)(lVar4 + 0xe8) >> 3) * 0x4ec4ec4ec4ec4ec5;
    if ((uVar5 != uVar6) && (uVar6 < uVar5 || uVar6 - uVar5 == 0)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a191e60);
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10a191e60; end: 10a191f17;  */

long * FUN_10a191e60(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if ((param_2 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    plVar2 = *(long **)(param_1 + 0x10);
    lVar3 = *(long *)(param_1 + 0x18) << 4;
    do {
      plVar1 = (long *)*plVar2;
      (**(code **)(*plVar1 + 0x30))();
      if (plVar1[3] == -0x572641c70cf8d377) {
LAB_10a191efc:
        plVar2 = (long *)*plVar2;
                    /* WARNING: Could not recover jumptable at 0x00010a191f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x18))();
        return plVar2;
      }
      plVar1 = (long *)*plVar2;
      (**(code **)(*plVar1 + 0x30))();
      if (plVar1[3] == 0x1e4f0bc3ca722c5d) goto LAB_10a191efc;
      plVar2 = plVar2 + 2;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  return (long *)0x0;
}



/* Entry: 10a191f18; end: 10a192017;  */

long FUN_10a191f18(long param_1,long param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = param_2 - param_1;
  if (lVar4 != 0) {
    lVar3 = 0;
    lVar5 = 0;
    lVar6 = param_1;
    do {
      lVar1 = lVar6;
      if (*(long *)(lVar6 + 0x18) != 0x1e4f0bc3ca722c5d) {
        lVar1 = lVar3;
      }
      lVar2 = lVar6;
      if (*(long *)(lVar6 + 0x18) != -0x572641c70cf8d377) {
        lVar3 = lVar1;
        lVar2 = lVar5;
      }
      lVar5 = lVar2;
      lVar6 = lVar6 + 0x68;
    } while (lVar6 != param_2);
    if (lVar5 == 0) {
      if (lVar3 == 0) {
        lVar3 = param_1;
        lVar6 = param_1;
        if ((param_3 & 1) == 0) {
          while (lVar4 = lVar3, lVar6 = lVar6 + 0x68, lVar6 != param_2) {
            lVar5 = lVar6;
            FUN_10a003e3c(lVar6,lVar4);
            lVar3 = lVar6;
            if (-1 < (char)lVar5) {
              lVar3 = lVar4;
            }
          }
          lVar4 = lVar4 - param_1;
        }
      }
      else {
        lVar4 = lVar3 - param_1;
      }
    }
    else {
      lVar4 = lVar5 - param_1;
    }
    return (lVar4 >> 3) * 0x4ec4ec4ec4ec4ec5;
  }
  return 0;
}



/* Entry: 10a192018; end: 10a19205f;  */

void FUN_10a192018(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10a192060(lVar1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a192060; end: 10a1920bb;  */

long * FUN_10a192060(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x00010a192104(plVar1 + 4);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a1920bc; end: 10a1921cf;  */

void FUN_10a1920bc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a192104(lVar1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a1921d0; end: 10a192263;  */

void FUN_10a1921d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 uStack_39;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  FUN_10a192404(auStack_38,&uStack_21,&uStack_39,param_2,param_3);
  FUN_10a0cf858(param_1,auStack_38);
  if (plStack_30 != (long *)0x0) {
    plVar1 = plStack_30 + 1;
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
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
    }
  }
  return;
}



/* Entry: 10a192264; end: 10a192313;  */

undefined8 * FUN_10a192264(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a192314; end: 10a192323;  */

void FUN_10a192314(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bab2f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a192324; end: 10a192343;  */

void FUN_10a192324(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bab2f0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a192344; end: 10a192353;  */

void FUN_10a192344(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a19234c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a192354; end: 10a192403;  */

void FUN_10a192354(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10a192404; end: 10a19247b;  */

void FUN_10a192404(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x108;
  __Znwm();
  FUN_10a19247c();
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



/* Entry: 10a19247c; end: 10a1924c3;  */

undefined8 * FUN_10a19247c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ba2088;
  FUN_10a1924c4(param_1 + 3);
  return param_1;
}



/* Entry: 10a1924c4; end: 10a192567;  */

undefined8
FUN_10a1924c4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar4 = *param_3;
  plVar6 = (long *)param_4[1];
  uStack_28 = param_4[1];
  uStack_30 = *param_4;
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
  }
  FUN_10a347bd4(param_1,uVar4,&uStack_30);
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return param_1;
}



/* Entry: 10a192568; end: 10a1925bf;  */

long FUN_10a192568(long param_1)

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



/* Entry: 10a1925c0; end: 10a19295f;  */

void FUN_10a1925c0(long param_1,long param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  code *pcVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined **ppuVar11;
  ulong *puVar12;
  undefined8 in_x6;
  undefined8 in_x7;
  int iVar13;
  long lVar14;
  long lVar15;
  undefined1 uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  
  func_0x0001092af8bc(param_1 + 0x80);
  plVar6 = *(long **)(param_1 + 0x80);
  if ((*(byte *)(plVar6 + 0x22) & 1) != 0) {
    lVar24 = plVar6[0x1c];
    lVar15 = plVar6[0x1b];
    lVar31 = plVar6[0x1e];
    lVar28 = plVar6[0x1d];
    lVar25 = plVar6[0x20];
    lVar21 = plVar6[0x1f];
    lVar14 = plVar6[0x21];
    lVar26 = plVar6[0x14];
    lVar22 = plVar6[0x13];
    lVar32 = plVar6[0x16];
    lVar29 = plVar6[0x15];
    lVar27 = plVar6[0x18];
    lVar23 = plVar6[0x17];
    lVar33 = plVar6[0x1a];
    lVar30 = plVar6[0x19];
    puVar12 = (ulong *)(plVar6 + 1);
    *(undefined8 *)(param_1 + 0x80) = 0;
    do {
      uVar17 = *puVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar12,0x10);
      if (bVar3) {
        *puVar12 = uVar17 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar17 & 0x1fffffffc) == 4) {
      do {
        uVar17 = *puVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar3) {
          *puVar12 = uVar17 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar17 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    *(long *)(param_1 + 0x100) = lVar24;
    *(long *)(param_1 + 0xf8) = lVar15;
    *(long *)(param_1 + 0xc0) = lVar26;
    *(long *)(param_1 + 0xb8) = lVar22;
    *(long *)(param_1 + 0xd0) = lVar32;
    *(long *)(param_1 + 200) = lVar29;
    *(long *)(param_1 + 0xe0) = lVar27;
    *(long *)(param_1 + 0xd8) = lVar23;
    *(long *)(param_1 + 0x128) = lVar14;
    *(long *)(param_1 + 0xf0) = lVar33;
    *(long *)(param_1 + 0xe8) = lVar30;
    *(long *)(param_1 + 0x110) = lVar31;
    *(long *)(param_1 + 0x108) = lVar28;
    *(long *)(param_1 + 0x120) = lVar25;
    *(long *)(param_1 + 0x118) = lVar21;
    *(undefined4 *)(param_2 + 0x510) = *(undefined4 *)(param_1 + 0x10c);
    puVar4 = PTR___tlv_bootstrap_11340d750;
    lVar14 = *(long *)(param_1 + 0x110);
    if (lVar14 != 0) {
      uVar20 = *(undefined8 *)(param_1 + 0x118);
      ppuVar11 = &PTR___tlv_bootstrap_11340d750;
      ppuVar7 = ppuVar11;
      (*(code *)PTR___tlv_bootstrap_11340d750)();
      ppuVar8 = &PTR___tlv_bootstrap_11340d738;
      if (((ulong)*ppuVar7 & 1) == 0) {
        ppuVar7 = ppuVar8;
        (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
        __tlv_atexit(0x10a132a8c,ppuVar7,0x100000000);
        (*(code *)puVar4)();
        *(undefined1 *)ppuVar11 = 1;
      }
      (*(code *)PTR___tlv_bootstrap_11340d738)();
      puVar18 = (undefined8 *)ppuVar8[2];
      if (((puVar18 != (undefined8 *)0x0) &&
          (lVar15 = puVar18[1], *(char *)(lVar15 + 0x17) == '\x01')) &&
         (((*(byte *)(lVar15 + 0x42) | *(byte *)(lVar15 + 0x43)) & 1) != 0)) {
        FUN_10a192960(puVar18,0x90ba9b79,&DAT_10f64126d);
        lVar15 = lRam00000001137ea760;
        puVar9 = puVar18;
        FUN_10a1333cc();
        lVar21 = lRam00000001137ea760;
        if (puVar9 != (undefined8 *)0x0) {
          uVar16 = 3;
          if (lRam00000001137ea760 != lVar15) {
            uVar16 = 5;
          }
          lVar22 = 0;
          if (lRam00000001137ea760 != lVar15) {
            lVar22 = lVar15;
          }
          *puVar9 = &UNK_10f641166;
          puVar9[1] = lVar22;
          puVar9[2] = lVar14;
          *(undefined4 *)(puVar9 + 3) = 0x90ba9b79;
          *(undefined2 *)((long)puVar9 + 0x1c) = 7;
          *(undefined1 *)((long)puVar9 + 0x1e) = uVar16;
          if ((*(byte *)(puVar18 + 0x38) & 1) == 0) goto LAB_10a19295c;
          puVar18[0x18] = puVar18[0x18] + 1;
        }
        puVar9 = puVar18;
        FUN_10a1333cc();
        if (puVar9 != (undefined8 *)0x0) {
          uVar16 = 6;
          if (lRam00000001137ea760 != lVar21) {
            uVar16 = 8;
          }
          lVar14 = 0;
          if (lRam00000001137ea760 != lVar21) {
            lVar14 = lVar21;
          }
          *puVar9 = &UNK_10f641166;
          puVar9[1] = lVar14;
          puVar9[2] = uVar20;
          *(undefined4 *)(puVar9 + 3) = 0x90ba9b79;
          *(undefined2 *)((long)puVar9 + 0x1c) = 7;
          *(undefined1 *)((long)puVar9 + 0x1e) = uVar16;
          if ((*(byte *)(puVar18 + 0x38) & 1) == 0) goto LAB_10a19295c;
          puVar18[0x18] = puVar18[0x18] + 1;
        }
      }
    }
    iVar1 = *(int *)(*(long *)(param_2 + 0x518) + 0x184);
    iVar13 = *(int *)(param_1 + 0x104);
    if (iVar1 < iVar13) {
      if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
        func_0x00010ae06f08(1,2,&UNK_10f640ca6,&UNK_10f641173,0x15c,&UNK_10f64120b,in_x6,in_x7,
                            iVar13,iVar1);
      }
      *(int *)(param_1 + 0x104) = iVar1;
      iVar13 = iVar1;
    }
    if (0 < iVar13) {
      puVar12 = (ulong *)0x1;
      FUN_10a061940(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0xe0));
      plVar19 = (long *)*puVar12;
      uVar20 = *(undefined8 *)(param_1 + 0xa0);
      plVar6 = plVar19;
      (**(code **)(*plVar19 + 0xa0))(plVar19);
      (**(code **)(*plVar19 + 0x28))();
      iVar13 = *(int *)(param_1 + 0x104);
      plVar10 = plVar19;
      (**(code **)(*plVar19 + 0x20))();
      if (plVar10 < (long *)(ulong)(uint)(iVar1 << 2)) {
        (**(code **)(*plVar19 + 0x18))(plVar19,(long *)(ulong)(uint)(iVar1 << 2),plVar6);
      }
                    /* WARNING: Could not recover jumptable at 0x00010a192900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar19 + 0x10))(plVar19,uVar20,(long)iVar13 << 2,0,plVar6);
      return;
    }
    return;
  }
LAB_10a19295c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a192960);
  (*pcVar5)();
}



/* Entry: 10a192960; end: 10a1929fb;  */

void FUN_10a192960(undefined8 *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  code *pcVar2;
  undefined8 *puVar3;
  int *piVar4;
  int iStack_34;
  
  piVar4 = (int *)param_1[8];
  while (piVar4 != (int *)param_1[9]) {
    iVar1 = *piVar4;
    piVar4 = piVar4 + 1;
    if (iVar1 == param_2) {
      return;
    }
  }
  puVar3 = param_1;
  iStack_34 = param_2;
  FUN_10a1333cc();
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = param_3;
  *(int *)(puVar3 + 3) = param_2;
  *(undefined4 *)((long)puVar3 + 0x1c) = 0x140000;
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    param_1[0x18] = param_1[0x18] + 1;
    FUN_10a0e6678(param_1 + 8,&iStack_34);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a1929fc);
  (*pcVar2)();
}



/* Entry: 10a1929fc; end: 10a192b1b;  */

undefined8 **
FUN_10a1929fc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  int iVar7;
  int *piVar8;
  undefined1 *puVar9;
  long *extraout_x8;
  undefined8 *puVar10;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined **ppuStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  long lStack_118;
  undefined1 auStack_c8 [8];
  undefined8 *apuStack_c0 [7];
  undefined1 auStack_88 [72];
  int *piStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a192b1c(param_3,param_4,param_5);
  FUN_10a061dc8(auStack_c8,param_2);
  puVar9 = auStack_c8;
  FUN_10a062bb4(param_1,param_3);
  piVar8 = piStack_40;
  if (piStack_40 != (int *)0x0) {
    func_0x0001092b4274(&piStack_40);
    piVar8 = piStack_40;
  }
  func_0x0001092ba41c(auStack_88);
  ppuVar4 = apuStack_c0;
  (*(code *)*apuStack_c0[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  if ((int)piVar8 != 0) {
    ___cxa_begin_catch(ppuVar4);
    if (param_3 != 0) {
      (**(code **)(*(long *)(param_3 + 0x18) + 0x10))((long *)(param_3 + 0x18));
    }
    ___cxa_rethrow();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a192af8);
    (*pcVar1)();
  }
  __Unwind_Resume(ppuVar4);
  func_0x000104bd46a0();
  ppuVar5 = (undefined8 **)0xb8;
  __Znwm();
  puVar10 = *ppuVar4;
  puVar6 = puVar10;
  _strlen();
  iVar7 = *piVar8;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined8 *)0x158;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar3 = puVar2 + 3;
  *puVar2 = &PTR_FUN_110b3f488;
  FUN_109d2079c(puVar3,(long)iVar7,puVar9);
  puStack_158 = &UNK_109896774;
  ppuStack_150 = &PTR_DAT_110b17068;
  puStack_160 = puVar3;
  puStack_148 = puVar3;
  puStack_140 = puVar2;
  func_0x000109d18d1c(ppuVar5,puVar10,puVar6,&puStack_160);
  iVar7 = (int)puVar10;
  func_0x0001092ba41c(&puStack_160);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return ppuVar5;
  }
  ___stack_chk_fail();
  if (iVar7 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  ppuVar5 = (undefined8 **)0xd0;
  __Znwm();
  ppuVar4 = ppuVar5;
  FUN_109d22a1c();
  *extraout_x8 = (long)(ppuVar5 + 3);
  extraout_x8[1] = (long)ppuVar5;
  return ppuVar4;
}



/* Entry: 10a192b1c; end: 10a192b73;  */

long FUN_10a192b1c(undefined8 *param_1,int *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long *extraout_x8;
  undefined8 uVar7;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long lStack_48;
  
  lVar4 = 0xb8;
  __Znwm();
  uVar7 = *param_1;
  uVar5 = uVar7;
  _strlen();
  iVar6 = *param_2;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined8 *)0x158;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_FUN_110b3f488;
  FUN_109d2079c(puVar2,(long)iVar6,param_3);
  puStack_88 = &UNK_109896774;
  ppuStack_80 = &PTR_DAT_110b17068;
  puStack_90 = puVar2;
  puStack_78 = puVar2;
  puStack_70 = puVar1;
  func_0x000109d18d1c(lVar4,uVar7,uVar5,&puStack_90);
  iVar6 = (int)uVar7;
  func_0x0001092ba41c(&puStack_90);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar4;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  lVar3 = 0xd0;
  __Znwm();
  lVar4 = lVar3;
  FUN_109d22a1c();
  *extraout_x8 = lVar3 + 0x18;
  extraout_x8[1] = lVar3;
  return lVar4;
}



/* Entry: 10a192b74; end: 10a192ba3;  */

void FUN_10a192b74(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x38);
  FUN_10a192ba4();
                    /* WARNING: Could not recover jumptable at 0x00010a192ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10a192ba4; end: 10a192d0b;  */

void FUN_10a192ba4(long *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
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
  
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
LAB_10a192cdc:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a192ce0);
    (*pcVar3)();
  }
  lVar6 = param_1[6];
  param_1[6] = 0;
  lStack_28 = lVar6;
  if ((long *)param_1[3] == (long *)0x0) {
    FUN_10a06186c();
    goto LAB_10a192cdc;
  }
  (**(code **)(*(long *)param_1[3] + 0x30))(&uStack_a0);
  plVar4 = (long *)(lVar6 + 0x10);
  do {
    lVar5 = *plVar4;
    if (lVar5 == 0) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        *(undefined8 *)(lVar6 + 0xe0) = uStack_58;
        *(undefined8 *)(lVar6 + 0xd8) = uStack_60;
        *(undefined8 *)(lVar6 + 0xf0) = uStack_48;
        *(undefined8 *)(lVar6 + 0xe8) = uStack_50;
        *(undefined8 *)(lVar6 + 0x100) = uStack_38;
        *(undefined8 *)(lVar6 + 0xf8) = uStack_40;
        *(undefined8 *)(lVar6 + 0xa0) = uStack_98;
        *(undefined8 *)(lVar6 + 0x98) = uStack_a0;
        *(undefined8 *)(lVar6 + 0xb0) = uStack_88;
        *(undefined8 *)(lVar6 + 0xa8) = uStack_90;
        *(undefined8 *)(lVar6 + 0xc0) = uStack_78;
        *(undefined8 *)(lVar6 + 0xb8) = uStack_80;
        *(undefined8 *)(lVar6 + 0x108) = uStack_30;
        *(undefined8 *)(lVar6 + 0xd0) = uStack_68;
        *(undefined8 *)(lVar6 + 200) = uStack_70;
        *(undefined1 *)(lVar6 + 0x110) = 1;
        *(undefined8 *)(lVar6 + 0x10) = 2;
        FUN_109d1b4dc(lVar6 + 0x18);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)lVar5 >> 1 & 1) == 0);
  if ((char)param_1[5] != '\x01') goto LAB_10a192ca4;
  plVar4 = (long *)param_1[3];
  if (plVar4 == param_1) {
    lVar5 = 0x20;
LAB_10a192c94:
    (**(code **)(*plVar4 + lVar5))();
  }
  else if (plVar4 != (long *)0x0) {
    lVar5 = 0x28;
    goto LAB_10a192c94;
  }
  *(undefined1 *)(param_1 + 5) = 0;
LAB_10a192ca4:
  lStack_28 = 0;
  if ((lVar6 != 0) && (func_0x0001092b4274(&lStack_28,lVar6), lStack_28 != 0)) {
    func_0x0001092b4274(&lStack_28);
  }
  return;
}



/* Entry: 10a192d0c; end: 10a192e27;  */

undefined8 * FUN_10a192d0c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110ba9b98;
  if (param_1[0x29] != 0) {
    func_0x0001092b4274(param_1 + 0x29);
  }
  if (*(char *)(param_1 + 0x28) == '\x01') {
    plVar1 = (long *)param_1[0x26];
    if (plVar1 == param_1 + 0x23) {
      lVar2 = 0x20;
    }
    else {
      if (plVar1 == (long *)0x0) goto LAB_10a192d70;
      lVar2 = 0x28;
    }
    (**(code **)(*plVar1 + lVar2))();
  }
LAB_10a192d70:
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a192e28; end: 10a192e8b;  */

long FUN_10a192e28(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 0x18);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    plVar1 = (long *)(param_1 + 0x18);
  }
  else {
    if (lVar2 == param_2) {
      *(long *)(param_1 + 0x18) = param_1;
      (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,param_1);
      return param_1;
    }
    *(long *)(param_1 + 0x18) = lVar2;
  }
  *plVar1 = 0;
  return param_1;
}



/* Entry: 10a192e8c; end: 10a192fa7;  */

undefined8 * FUN_10a192e8c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110ba9be8;
  if (param_1[0x29] != 0) {
    func_0x0001092b4274(param_1 + 0x29);
  }
  if (*(char *)(param_1 + 0x28) == '\x01') {
    plVar1 = (long *)param_1[0x26];
    if (plVar1 == param_1 + 0x23) {
      lVar2 = 0x20;
    }
    else {
      if (plVar1 == (long *)0x0) goto LAB_10a192ef0;
      lVar2 = 0x28;
    }
    (**(code **)(*plVar1 + lVar2))();
  }
LAB_10a192ef0:
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a192fa8; end: 10a192fbf;  */

void FUN_10a192fa8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glFlush_11034b590)();
  return;
}



/* Entry: 10a192fc0; end: 10a193097;  */

undefined8 * FUN_10a192fc0(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10a193098; end: 10a19314f;  */

void FUN_10a193098(undefined8 param_1,undefined8 param_2,float *param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  float fStack_18;
  float fStack_14;
  
  fVar3 = *(float *)(param_4 + 1) * 0.0;
  fVar1 = (float)*param_4;
  fVar4 = fVar1 * 0.0;
  fVar2 = (float)((ulong)*param_4 >> 0x20);
  fVar5 = fVar2 * 0.0;
  uVar6 = NEON_rev64(CONCAT44(fVar5,fVar4),4);
  fVar4 = fVar4 + fVar5;
  uStack_20 = CONCAT44(fVar2 + (float)((ulong)uVar6 >> 0x20) + fVar3 + 0.0,
                       fVar1 + (float)uVar6 + fVar3 + 0.0);
  fStack_18 = *(float *)(param_4 + 1) + fVar4 + 0.0;
  fStack_14 = fVar4 + fVar3 + 1.0;
  fStack_50 = *param_3;
  fStack_4c = fStack_50 * 0.0;
  fVar3 = (float)*(undefined8 *)(param_3 + 1);
  fVar2 = fVar3 * 0.0;
  fVar1 = (float)((ulong)*(undefined8 *)(param_3 + 1) >> 0x20);
  fVar4 = fVar1 * 0.0;
  uStack_30 = CONCAT44(fVar4,fVar4);
  uStack_40 = CONCAT44(fVar3,fVar2);
  uStack_38 = CONCAT44(fVar2,fVar2);
  uStack_28 = CONCAT44(fVar4,fVar1);
  fStack_48 = fStack_4c;
  fStack_44 = fStack_4c;
  func_0x000109519fd0(param_1,param_2,&fStack_50);
  return;
}



/* Entry: 10a193150; end: 10a19315f;  */

void FUN_10a193150(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bab268;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a193160; end: 10a19317f;  */

void FUN_10a193160(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bab268;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a193180; end: 10a19318f;  */

void FUN_10a193180(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a193188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a193190; end: 10a193347;  */

long FUN_10a193190(long param_1)

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



/* Entry: 10a193348; end: 10a1933c3;  */

void FUN_10a193348(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auStack_a4 [64];
  undefined1 uStack_64;
  undefined1 auStack_60 [40];
  undefined1 uStack_38;
  
  lVar1 = param_2;
  FUN_10a015150(param_2,param_3);
  auStack_60[0] = 0;
  uStack_38 = 0;
  auStack_a4[0] = 0;
  uStack_64 = 0;
  FUN_10a1933c4(param_1,param_2,param_3,param_4,*(long *)(lVar1 + 0xb8),
                *(long *)(lVar1 + 0xc0) - *(long *)(lVar1 + 0xb8) >> 1,auStack_60,auStack_a4);
  return;
}



/* Entry: 10a1933c4; end: 10a193c13;  */

/* WARNING: Possible PIC construction at 0x00010a193b24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a193b28) */

void FUN_10a1933c4(undefined8 *param_1,undefined **param_2,undefined ***param_3,undefined8 *param_4,
                  ushort *param_5,long param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined4 *puVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  undefined1 uVar6;
  ushort uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  code *pcVar11;
  undefined ***pppuVar12;
  long *plVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined ***pppuVar16;
  undefined8 *puVar17;
  ushort *puVar18;
  undefined ***pppuVar19;
  ushort uVar20;
  long lVar21;
  ulong uVar22;
  byte bVar23;
  undefined **ppuVar24;
  long *plVar25;
  long lVar26;
  uint uVar27;
  undefined **ppuVar28;
  ulong uVar29;
  undefined **ppuVar30;
  long *plVar31;
  long *plVar32;
  undefined1 **ppuVar33;
  undefined8 uVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined **ppuVar39;
  undefined *puVar40;
  undefined *puVar41;
  undefined *puVar42;
  undefined **ppuVar43;
  float fVar44;
  undefined1 auStack_220 [64];
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  undefined1 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  uint uStack_19c;
  undefined **ppuStack_198;
  uint uStack_18c;
  undefined8 *puStack_188;
  undefined4 uStack_17c;
  ushort *puStack_178;
  ushort *puStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined4 *puStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  uint uStack_f0;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined4 uStack_90;
  int iStack_88;
  int iStack_84;
  byte bStack_80;
  
  pppuVar12 = &ppuStack_1b0;
  ppuVar33 = (undefined1 **)&stack0xfffffffffffffff0;
  cVar3 = *(char *)((long)param_2 + 0x349);
  bVar23 = *(byte *)(param_2 + 0x6a);
  ppuVar24 = (undefined **)(ulong)bVar23;
  cVar4 = *(char *)(param_2 + 0x6c);
  uStack_17c = SUB84(param_3,0);
  pppuVar16 = param_3;
  puVar17 = param_4;
  ppuStack_168 = param_2;
  func_0x00010a01e9ec();
  ppuVar15 = ppuStack_168;
  uVar10 = uStack_17c;
  *(byte *)((long)param_1 + 10) = *(byte *)(param_2 + 3) & 1 | *(byte *)((long)param_1 + 10);
  if (cVar3 == '\x02') {
    puStack_158 = (undefined4 *)param_7[1];
    ppuStack_160 = (undefined **)*param_7;
    ppuStack_148 = (undefined **)param_7[3];
    ppuStack_150 = (undefined **)param_7[2];
    uStack_138 = param_7[5];
    ppuStack_140 = (undefined **)param_7[4];
    uStack_108 = param_8[5];
    uStack_110 = param_8[4];
    uStack_f8 = param_8[7];
    uStack_100 = param_8[6];
    uStack_f0 = *(uint *)(param_8 + 8);
    uStack_128 = param_8[1];
    puStack_130 = (undefined *)*param_8;
    uStack_118 = param_8[3];
    lStack_120 = param_8[2];
    param_5 = (ushort *)((long)ppuStack_168 + 0x34c);
LAB_10a193684:
    param_6 = 1;
LAB_10a193858:
    ppuStack_1b0 = &puStack_130;
    FUN_10abfc924(param_1,ppuStack_168,uStack_17c,param_4,1,param_5,param_6,&ppuStack_160);
    return;
  }
  uVar27 = (uint)param_4;
  if (cVar3 == '\x01') {
    uStack_d8 = param_7[1];
    puStack_e0 = (undefined *)*param_7;
    uStack_c8 = param_7[3];
    uStack_d0 = param_7[2];
    uStack_c0 = param_7[4];
    uStack_19c = (uint)*(byte *)(param_7 + 5);
    uStack_108 = param_8[5];
    uStack_110 = param_8[4];
    uStack_f8 = param_8[7];
    uStack_100 = param_8[6];
    uStack_f0 = *(uint *)(param_8 + 8);
    uStack_128 = param_8[1];
    puStack_130 = (undefined *)*param_8;
    uStack_118 = param_8[3];
    lStack_120 = param_8[2];
    ppuVar24 = ppuStack_168;
    uStack_18c = uVar27;
    puStack_188 = param_1;
    func_0x00010a01e9ec(ppuStack_168,uStack_17c);
    ppuStack_198 = ppuVar24;
    FUN_10a015150(ppuVar15,uVar10);
    puVar18 = (ushort *)ppuVar15[0x17];
    puStack_178 = (ushort *)ppuVar15[0x18];
    if (puVar18 == puStack_178) {
      return;
    }
    bVar23 = 0;
    plVar25 = (long *)0x0;
    plVar31 = (long *)0x0;
    ppuStack_1a8 = ppuVar15;
    do {
      uVar7 = *puVar18;
      puStack_170 = puVar18;
      if (uVar7 != 0xffff) {
        ppuVar24 = ppuStack_168;
        FUN_10a021e20(ppuStack_168,uVar7);
        bVar5 = *(byte *)((long)ppuVar24 + 0x1a);
        if ((ulong)bVar5 != 0) {
          uVar29 = 0;
          do {
            ppuVar24 = ppuStack_168;
            FUN_10a021e20(ppuStack_168,(uint)uVar7 + (int)uVar29 & 0xffff);
            puVar36 = ppuVar24[0x1e];
            for (puVar35 = ppuVar24[0x1d]; puVar35 != puVar36; puVar35 = puVar35 + 0x68) {
              plVar32 = *(long **)(puVar35 + 0x30);
              if (plVar32 != (long *)0x0) {
                plVar13 = plVar32;
                (**(code **)(*plVar32 + 0xb0))();
                (**(code **)(*plVar32 + 0xb8))();
                uVar27 = (uint)plVar13;
                if ((uint)plVar13 <= (uint)plVar32) {
                  uVar27 = (uint)plVar32;
                }
                uVar2 = (uint)plVar25;
                if ((uint)plVar25 <= (uint)plVar31) {
                  uVar2 = (uint)plVar31;
                }
                if (uVar2 < uVar27) {
                  bVar23 = puVar35[0x3c];
                  plVar25 = plVar13;
                  plVar31 = plVar32;
                }
              }
            }
            uVar29 = uVar29 + 1;
          } while (uVar29 != bVar5);
        }
      }
      ppuVar15 = ppuStack_1a8;
      puVar18 = puStack_170 + 1;
    } while (puVar18 != puStack_178);
    iStack_88 = (int)plVar25;
    if (iStack_88 == 0) {
      return;
    }
    iStack_84 = (int)plVar31;
    if (iStack_84 == 0) {
      return;
    }
    bStack_80 = bVar23 & 1;
    ppuVar14 = (undefined **)puStack_188[4];
    func_0x00010a244f78();
    (**(code **)(*ppuVar14 + 0x10))();
    ppuVar24 = ppuStack_168;
    if (*ppuVar14 == (undefined *)0x0) {
      ppuVar30 = (undefined **)0xffff;
      param_3 = (undefined ***)0x0;
      ppuVar39 = ppuStack_198;
      uVar27 = uStack_18c;
    }
    else {
      ppuVar30 = ppuStack_168;
      FUN_10a5dfd94();
      FUN_10a01eacc(ppuVar24,ppuVar30);
      ppuStack_98 = (undefined **)NEON_ucvtf(CONCAT44(iStack_84,iStack_88),4);
      uStack_90 = 0x3f800000;
      if (bStack_80 == 0) {
        uStack_90 = 0;
      }
      uStack_a8 = 0x12;
      puStack_b0 = &DAT_10f641387;
      uStack_a0 = 0xc20b28733a8f1f0c;
      func_0x000107c2b074(&ppuStack_160,&puStack_b0);
      uVar27 = uStack_18c;
      param_3 = &ppuStack_160;
      pppuVar16 = &ppuStack_98;
      func_0x00010a01f3c4();
      ppuVar39 = ppuStack_198;
      ppuVar14 = ppuVar24;
      if ((long)ppuStack_150 < 0) {
        ppuVar14 = ppuStack_160;
        __ZdlPv();
      }
    }
    fVar44 = *(float *)(puStack_188 + 3) -
             (*(float *)((long)puStack_188 + 0xc) * *(float *)(ppuVar39 + 0xc) +
              *(float *)(puStack_188 + 2) * *(float *)((long)ppuVar39 + 100) +
             *(float *)((long)puStack_188 + 0x14) * *(float *)(ppuVar39 + 0xd));
    ppuVar28 = (undefined **)*puStack_188;
    uVar2 = *(uint *)(ppuVar39 + 3);
    uVar7 = (ushort)(uVar2 >> 1) & 1;
    ppuVar24 = &puStack_130;
    if ((uStack_f0 & 1) == 0) {
      ppuVar24 = (undefined **)((long)ppuVar15 + 4);
    }
    puVar1 = (undefined4 *)ppuVar28[1];
    uVar9 = SUB82(ppuVar30,0);
    if (puVar1 < ppuVar28[2]) {
      uVar8 = *(undefined2 *)(puStack_188 + 1);
      uVar6 = *(undefined *)((long)ppuVar39 + 1);
      *puVar1 = uStack_17c;
      *(undefined2 *)(puVar1 + 1) = uVar9;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(undefined2 *)(puVar1 + 4) = uVar8;
      puVar35 = ppuVar39[8];
      *(undefined8 *)(puVar1 + 8) = 0;
      *(undefined8 *)(puVar1 + 10) = 0;
      *(undefined8 *)(puVar1 + 6) = 0;
      puVar1[0xc] = uVar27;
      *(undefined2 *)(puVar1 + 0xd) = 0;
      *(undefined1 *)((long)puVar1 + 0x36) = 0;
      *(undefined1 *)((long)puVar1 + 0x37) = uVar6;
      *(undefined **)(puVar1 + 0xe) = puVar35;
      *(undefined1 *)(puVar1 + 0x10) = 0;
      *(undefined1 *)(puVar1 + 0x16) = 0;
      puVar1[0x17] = fVar44;
      *(undefined2 *)(puVar1 + 0x18) = 0;
      *(undefined1 *)((long)puVar1 + 0x62) = 0;
      puVar1[0x19] = 0;
      *(undefined2 *)(puVar1 + 0x1a) = 0xffff;
      puVar36 = ppuVar24[1];
      puVar35 = *ppuVar24;
      puVar38 = ppuVar24[3];
      puVar37 = ppuVar24[2];
      puVar41 = ppuVar24[5];
      puVar40 = ppuVar24[4];
      puVar42 = ppuVar24[6];
      *(undefined **)(puVar1 + 0x29) = ppuVar24[7];
      *(undefined **)(puVar1 + 0x27) = puVar42;
      *(undefined **)(puVar1 + 0x25) = puVar41;
      *(undefined **)(puVar1 + 0x23) = puVar40;
      *(undefined **)(puVar1 + 0x21) = puVar38;
      *(undefined **)(puVar1 + 0x1f) = puVar37;
      *(undefined **)(puVar1 + 0x1d) = puVar36;
      *(undefined **)(puVar1 + 0x1b) = puVar35;
      *(undefined8 *)(puVar1 + 0x2e) = 0;
      *(undefined8 *)(puVar1 + 0x2c) = 0;
      *(undefined8 *)(puVar1 + 0x32) = 0;
      *(undefined8 *)(puVar1 + 0x30) = 0;
      *(undefined8 *)(puVar1 + 0x36) = 0;
      *(undefined8 *)(puVar1 + 0x34) = 0;
      *(undefined8 *)(puVar1 + 0x38) = 0xbf800000;
      *(undefined1 *)(puVar1 + 0x3a) = 0;
      *(undefined8 *)(puVar1 + 0x3b) = 0xffffffff00000000;
      *(undefined8 *)(puVar1 + 0x3e) = 0;
      puVar1[0x40] = 0;
      uVar20 = 0;
      if ((uVar2 >> 1 & 1) == 0) {
        uVar20 = 0x80;
      }
      *(ushort *)(puVar1 + 0x18) = uVar20 | uVar7 | 0x100;
      ppuVar28[1] = (undefined *)(puVar1 + 0x42);
      ppuVar28[1] = (undefined *)(puVar1 + 0x42);
      lVar26 = ((long *)*puStack_188)[1];
      if (*(long *)*puStack_188 != lVar26) {
        *(uint *)(lVar26 + -0xa4) = uVar27;
        *(undefined2 *)(lVar26 + -0xa0) = uVar9;
        if ((uStack_19c & 1) == 0) {
          return;
        }
        *(undefined8 *)(lVar26 + -0x50) = uStack_d8;
        *(undefined **)(lVar26 + -0x58) = puStack_e0;
        *(undefined8 *)(lVar26 + -0x40) = uStack_c8;
        *(undefined8 *)(lVar26 + -0x48) = uStack_d0;
        *(undefined8 *)(lVar26 + -0x38) = uStack_c0;
        return;
      }
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10a193bd4);
      (*pcVar11)();
    }
    lVar26 = (long)puVar1 - (long)*ppuVar28;
    uVar29 = (lVar26 >> 3) * 0xf83e0f83e0f83e1 + 1;
    if (uVar29 < 0xf83e0f83e0f83f) {
      lVar21 = (long)ppuVar28[2] - (long)*ppuVar28 >> 3;
      uVar22 = lVar21 * 0x1f07c1f07c1f07c2;
      if (uVar22 < uVar29 || uVar22 - uVar29 == 0) {
        uVar22 = uVar29;
      }
      if (0x7c1f07c1f07c1e < (ulong)(lVar21 * 0xf83e0f83e0f83e1)) {
        uVar22 = 0xf83e0f83e0f83e;
      }
      ppuStack_140 = ppuVar28;
      if (uVar22 == 0) {
        ppuVar15 = (undefined **)0x0;
      }
      else {
        ppuVar15 = ppuVar28;
        FUN_10a193c28();
      }
      puStack_158 = (undefined4 *)((long)ppuVar15 + lVar26);
      ppuStack_160 = ppuVar15;
      ppuStack_148 = ppuVar15 + uVar22 * 0x21;
      uVar8 = *(undefined2 *)(puStack_188 + 1);
      uVar6 = *(undefined *)((long)ppuStack_198 + 1);
      *puStack_158 = uStack_17c;
      *(undefined2 *)(puStack_158 + 1) = uVar9;
      *(undefined8 *)(puStack_158 + 2) = 0;
      *(undefined2 *)(puStack_158 + 4) = uVar8;
      puVar35 = ppuStack_198[8];
      *(undefined8 *)(puStack_158 + 8) = 0;
      *(undefined8 *)(puStack_158 + 10) = 0;
      *(undefined8 *)(puStack_158 + 6) = 0;
      puStack_158[0xc] = uVar27;
      *(undefined2 *)(puStack_158 + 0xd) = 0;
      *(undefined1 *)((long)puStack_158 + 0x36) = 0;
      *(undefined1 *)((long)puStack_158 + 0x37) = uVar6;
      *(undefined **)(puStack_158 + 0xe) = puVar35;
      *(undefined1 *)(puStack_158 + 0x10) = 0;
      *(undefined1 *)(puStack_158 + 0x16) = 0;
      puStack_158[0x17] = fVar44;
      *(undefined2 *)(puStack_158 + 0x18) = 0;
      *(undefined1 *)((long)puStack_158 + 0x62) = 0;
      puStack_158[0x19] = 0;
      *(undefined2 *)(puStack_158 + 0x1a) = 0xffff;
      puVar36 = ppuVar24[5];
      puVar35 = ppuVar24[4];
      puVar38 = ppuVar24[7];
      puVar37 = ppuVar24[6];
      puVar41 = ppuVar24[1];
      puVar40 = *ppuVar24;
      puVar42 = ppuVar24[2];
      *(undefined **)(puStack_158 + 0x21) = ppuVar24[3];
      *(undefined **)(puStack_158 + 0x1f) = puVar42;
      *(undefined **)(puStack_158 + 0x1d) = puVar41;
      *(undefined **)(puStack_158 + 0x1b) = puVar40;
      *(undefined **)(puStack_158 + 0x29) = puVar38;
      *(undefined **)(puStack_158 + 0x27) = puVar37;
      *(undefined **)(puStack_158 + 0x25) = puVar36;
      *(undefined **)(puStack_158 + 0x23) = puVar35;
      *(undefined8 *)(puStack_158 + 0x2e) = 0;
      *(undefined8 *)(puStack_158 + 0x2c) = 0;
      *(undefined8 *)(puStack_158 + 0x32) = 0;
      *(undefined8 *)(puStack_158 + 0x30) = 0;
      *(undefined8 *)(puStack_158 + 0x36) = 0;
      *(undefined8 *)(puStack_158 + 0x34) = 0;
      *(undefined8 *)(puStack_158 + 0x38) = 0xbf800000;
      *(undefined1 *)(puStack_158 + 0x3a) = 0;
      *(undefined8 *)(puStack_158 + 0x3b) = 0xffffffff00000000;
      *(undefined8 *)(puStack_158 + 0x3e) = 0;
      puStack_158[0x40] = 0;
      uVar20 = 0;
      if ((uVar2 >> 1 & 1) == 0) {
        uVar20 = 0x80;
      }
      *(ushort *)(puStack_158 + 0x18) = uVar20 | uVar7 | 0x100;
      ppuVar14 = (undefined **)(puStack_158 + 0x42);
      ppuStack_150 = ppuVar14;
      param_3 = (undefined ***)*ppuVar28;
      pppuVar16 = (undefined ***)ppuVar28[1];
      puVar17 = (undefined8 *)((long)puStack_158 + ((long)param_3 - (long)pppuVar16));
      uVar34 = 0x10a193b28;
      goto SUB_10a193c70;
    }
  }
  else {
    if ((((bVar23 == 1 && param_6 == 1) &&
         (param_3 = (undefined ***)(ulong)*param_5, *param_5 != 0xffff)) &&
        (FUN_10a021e20(), *(char *)((long)ppuVar15 + 0x1a) == '\x01')) &&
       ((*(char *)((long)ppuVar15 + 0x1b) == '\0' && ((*(byte *)(ppuVar15 + 3) >> 1 & 1) != 0)))) {
      puStack_158 = (undefined4 *)param_7[1];
      ppuStack_160 = (undefined **)*param_7;
      ppuStack_148 = (undefined **)param_7[3];
      ppuStack_150 = (undefined **)param_7[2];
      uStack_138 = param_7[5];
      ppuStack_140 = (undefined **)param_7[4];
      uStack_108 = param_8[5];
      uStack_110 = param_8[4];
      uStack_f8 = param_8[7];
      uStack_100 = param_8[6];
      uStack_f0 = *(uint *)(param_8 + 8);
      uStack_128 = param_8[1];
      puStack_130 = (undefined *)*param_8;
      uStack_118 = param_8[3];
      lStack_120 = param_8[2];
      param_5 = (ushort *)((long)ppuStack_168 + 0x34e);
      goto LAB_10a193684;
    }
    if (cVar4 != '\x01') {
      puStack_158 = (undefined4 *)param_7[1];
      ppuStack_160 = (undefined **)*param_7;
      ppuStack_148 = (undefined **)param_7[3];
      ppuStack_150 = (undefined **)param_7[2];
      uStack_138 = param_7[5];
      ppuStack_140 = (undefined **)param_7[4];
      uStack_108 = param_8[5];
      uStack_110 = param_8[4];
      uStack_f8 = param_8[7];
      uStack_100 = param_8[6];
      uStack_f0 = *(uint *)(param_8 + 8);
      uStack_128 = param_8[1];
      puStack_130 = (undefined *)*param_8;
      uStack_118 = param_8[3];
      lStack_120 = param_8[2];
      goto LAB_10a193858;
    }
    puStack_130 = &UNK_10f64133f;
    uStack_128 = 0x31;
    puStack_170 = param_5;
    if (ppuStack_168[0x6b] != (undefined *)0x0) {
      uStack_d8 = 0x15;
      puStack_e0 = &DAT_10f641371;
      uStack_d0 = 0xfc5c5391f662f353;
      uStack_18c = uVar27;
      puStack_188 = param_1;
      if (param_6 != 0) {
        puVar18 = param_5 + param_6;
        do {
          uVar7 = *param_5;
          ppuVar24 = ppuStack_168;
          FUN_10a021e20(ppuStack_168,uVar7);
          bVar23 = *(byte *)((long)ppuVar24 + 0x1a);
          if ((ulong)bVar23 != 0) {
            uVar29 = 0;
            do {
              ppuVar24 = ppuStack_168;
              FUN_10a01eacc(ppuStack_168,(uint)uVar7 + (int)uVar29 & 0xffff);
              func_0x000107c2b074(&puStack_130,&puStack_e0);
              if (lStack_120 < 0) {
                __ZdlPv(puStack_130);
              }
              if (*(char *)(ppuVar24 + 4) != '\x06') {
                ppuVar24[5] = (undefined *)0x0;
                ppuVar24[4] = (undefined *)0x7;
                ppuVar24[7] = (undefined *)0x1;
                ppuVar24[6] = (undefined *)0x601060100000000;
                ppuVar24[9] = (undefined *)0x0;
                ppuVar24[8] = (undefined *)0x0;
              }
              uVar29 = uVar29 + 1;
            } while (bVar23 != uVar29);
          }
          param_5 = param_5 + 1;
        } while (param_5 != puVar18);
      }
      puStack_158 = (undefined4 *)param_7[1];
      ppuStack_160 = (undefined **)*param_7;
      ppuStack_148 = (undefined **)param_7[3];
      ppuStack_150 = (undefined **)param_7[2];
      uStack_138 = param_7[5];
      ppuStack_140 = (undefined **)param_7[4];
      uStack_108 = param_8[5];
      uStack_110 = param_8[4];
      uStack_f8 = param_8[7];
      uStack_100 = param_8[6];
      uStack_f0 = *(uint *)(param_8 + 8);
      uStack_128 = param_8[1];
      puStack_130 = (undefined *)*param_8;
      uStack_118 = param_8[3];
      lStack_120 = param_8[2];
      param_4 = (undefined8 *)(ulong)uStack_18c;
      param_1 = puStack_188;
      param_5 = puStack_170;
      goto LAB_10a193858;
    }
    ppuVar14 = &puStack_130;
    uStack_18c = uVar27;
    puStack_188 = param_1;
    FUN_10a0edfc4();
  }
  FUN_10a193c14();
  func_0x00010a193e00(&ppuStack_160);
  __Unwind_Resume(ppuVar14);
  pcStack_1b8 = FUN_10a193c14;
  ppuVar28 = (undefined **)&UNK_10f6403f7;
  ppuStack_1c0 = ppuVar33;
  FUN_109ffde64();
  pppuVar12 = &ppuStack_1e0;
  pcStack_1c8 = FUN_10a193c28;
  ppuVar33 = &puStack_1d0;
  ppuStack_1e0 = ppuVar24;
  ppuStack_1d8 = ppuVar14;
  if (param_3 < (undefined ***)0xf83e0f83e0f83f) {
    puStack_1d0 = (undefined1 *)&ppuStack_1c0;
    __Znwm((long)param_3 * 0x108);
    return;
  }
  uVar34 = 0x10a193c70;
  puStack_1d0 = (undefined1 *)&ppuStack_1c0;
  func_0x000109ffded8();
SUB_10a193c70:
  *(undefined ***)((long)pppuVar12 + -0x20) = ppuVar24;
  *(undefined ***)((long)pppuVar12 + -0x18) = ppuVar14;
  *(undefined1 ***)((long)pppuVar12 + -0x10) = ppuVar33;
  *(undefined8 *)((long)pppuVar12 + -8) = uVar34;
  *(undefined8 **)((long)pppuVar12 + -0x30) = puVar17;
  *(undefined8 **)((long)pppuVar12 + -0x38) = puVar17;
  *(undefined ***)((long)pppuVar12 + -0x58) = ppuVar28;
  *(undefined1 **)((long)pppuVar12 + -0x50) = (undefined1 *)((long)pppuVar12 + -0x38);
  *(undefined1 **)((long)pppuVar12 + -0x48) = (undefined1 *)((long)pppuVar12 + -0x30);
  pppuVar19 = param_3;
  if (param_3 == pppuVar16) {
    *(undefined1 *)((long)pppuVar12 + -0x40) = 1;
  }
  else {
    do {
      ppuVar15 = pppuVar19[1];
      ppuVar24 = *pppuVar19;
      *(undefined2 *)(puVar17 + 2) = *(undefined2 *)(pppuVar19 + 2);
      puVar17[1] = ppuVar15;
      *puVar17 = ppuVar24;
      puVar17[4] = 0;
      puVar17[5] = 0;
      puVar17[3] = 0;
      ppuVar24 = pppuVar19[3];
      puVar17[4] = pppuVar19[4];
      puVar17[3] = ppuVar24;
      puVar17[5] = pppuVar19[5];
      pppuVar19[4] = (undefined **)0x0;
      pppuVar19[5] = (undefined **)0x0;
      pppuVar19[3] = (undefined **)0x0;
      ppuVar24 = pppuVar19[0xe];
      ppuVar14 = pppuVar19[0x11];
      ppuVar15 = pppuVar19[0x10];
      ppuVar43 = pppuVar19[0xb];
      ppuVar28 = pppuVar19[10];
      ppuVar30 = pppuVar19[0xd];
      ppuVar39 = pppuVar19[0xc];
      puVar17[0xf] = pppuVar19[0xf];
      puVar17[0xe] = ppuVar24;
      puVar17[0x11] = ppuVar14;
      puVar17[0x10] = ppuVar15;
      puVar17[0xb] = ppuVar43;
      puVar17[10] = ppuVar28;
      puVar17[0xd] = ppuVar30;
      puVar17[0xc] = ppuVar39;
      ppuVar24 = pppuVar19[0x16];
      ppuVar14 = pppuVar19[0x19];
      ppuVar15 = pppuVar19[0x18];
      ppuVar43 = pppuVar19[0x13];
      ppuVar28 = pppuVar19[0x12];
      ppuVar30 = pppuVar19[0x15];
      ppuVar39 = pppuVar19[0x14];
      puVar17[0x17] = pppuVar19[0x17];
      puVar17[0x16] = ppuVar24;
      puVar17[0x19] = ppuVar14;
      puVar17[0x18] = ppuVar15;
      puVar17[0x13] = ppuVar43;
      puVar17[0x12] = ppuVar28;
      puVar17[0x15] = ppuVar30;
      puVar17[0x14] = ppuVar39;
      ppuVar39 = pppuVar19[0x1d];
      ppuVar14 = pppuVar19[0x1c];
      ppuVar15 = pppuVar19[0x1f];
      ppuVar24 = pppuVar19[0x1e];
      ppuVar28 = pppuVar19[0x1b];
      ppuVar30 = pppuVar19[0x1a];
      *(undefined4 *)(puVar17 + 0x20) = *(undefined4 *)(pppuVar19 + 0x20);
      puVar17[0x1d] = ppuVar39;
      puVar17[0x1c] = ppuVar14;
      puVar17[0x1f] = ppuVar15;
      puVar17[0x1e] = ppuVar24;
      puVar17[0x1b] = ppuVar28;
      puVar17[0x1a] = ppuVar30;
      ppuVar24 = pppuVar19[6];
      ppuVar14 = pppuVar19[9];
      ppuVar15 = pppuVar19[8];
      puVar17[7] = pppuVar19[7];
      puVar17[6] = ppuVar24;
      puVar17[9] = ppuVar14;
      puVar17[8] = ppuVar15;
      pppuVar19 = pppuVar19 + 0x21;
      puVar17 = puVar17 + 0x21;
    } while (pppuVar19 != pppuVar16);
    *(undefined8 **)((long)pppuVar12 + -0x30) = puVar17;
    *(undefined1 *)((long)pppuVar12 + -0x40) = 1;
    do {
      *(undefined ****)((long)pppuVar12 + -0x28) = param_3 + 3;
      FUN_10a1901f0((undefined1 *)((long)pppuVar12 + -0x28));
      param_3 = param_3 + 0x21;
    } while (param_3 != pppuVar16);
  }
  FUN_10a193d78((undefined1 *)((long)pppuVar12 + -0x58));
  return;
}



/* Entry: 10a193c14; end: 10a193c27;  */

void FUN_10a193c14(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_88;
  undefined8 **ppuStack_80;
  undefined8 **ppuStack_78;
  undefined1 uStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar1 = &UNK_10f6403f7;
  FUN_109ffde64();
  if ((undefined8 *)0xf83e0f83e0f83e < param_2) {
    func_0x000109ffded8();
    ppuStack_80 = &puStack_68;
    ppuStack_78 = &puStack_60;
    puStack_60 = param_4;
    puVar2 = param_2;
    puStack_88 = puVar1;
    puStack_68 = param_4;
    if (param_2 == param_3) {
      uStack_70 = 1;
    }
    else {
      do {
        uVar4 = puVar2[1];
        uVar3 = *puVar2;
        *(undefined2 *)(puStack_60 + 2) = *(undefined2 *)(puVar2 + 2);
        puStack_60[1] = uVar4;
        *puStack_60 = uVar3;
        puStack_60[4] = 0;
        puStack_60[5] = 0;
        puStack_60[3] = 0;
        uVar3 = puVar2[3];
        puStack_60[4] = puVar2[4];
        puStack_60[3] = uVar3;
        puStack_60[5] = puVar2[5];
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[3] = 0;
        uVar3 = puVar2[0xe];
        uVar5 = puVar2[0x11];
        uVar4 = puVar2[0x10];
        uVar9 = puVar2[0xb];
        uVar8 = puVar2[10];
        uVar7 = puVar2[0xd];
        uVar6 = puVar2[0xc];
        puStack_60[0xf] = puVar2[0xf];
        puStack_60[0xe] = uVar3;
        puStack_60[0x11] = uVar5;
        puStack_60[0x10] = uVar4;
        puStack_60[0xb] = uVar9;
        puStack_60[10] = uVar8;
        puStack_60[0xd] = uVar7;
        puStack_60[0xc] = uVar6;
        uVar3 = puVar2[0x16];
        uVar5 = puVar2[0x19];
        uVar4 = puVar2[0x18];
        uVar9 = puVar2[0x13];
        uVar8 = puVar2[0x12];
        uVar7 = puVar2[0x15];
        uVar6 = puVar2[0x14];
        puStack_60[0x17] = puVar2[0x17];
        puStack_60[0x16] = uVar3;
        puStack_60[0x19] = uVar5;
        puStack_60[0x18] = uVar4;
        puStack_60[0x13] = uVar9;
        puStack_60[0x12] = uVar8;
        puStack_60[0x15] = uVar7;
        puStack_60[0x14] = uVar6;
        uVar6 = puVar2[0x1d];
        uVar5 = puVar2[0x1c];
        uVar4 = puVar2[0x1f];
        uVar3 = puVar2[0x1e];
        uVar8 = puVar2[0x1b];
        uVar7 = puVar2[0x1a];
        *(undefined4 *)(puStack_60 + 0x20) = *(undefined4 *)(puVar2 + 0x20);
        puStack_60[0x1d] = uVar6;
        puStack_60[0x1c] = uVar5;
        puStack_60[0x1f] = uVar4;
        puStack_60[0x1e] = uVar3;
        puStack_60[0x1b] = uVar8;
        puStack_60[0x1a] = uVar7;
        uVar3 = puVar2[6];
        uVar5 = puVar2[9];
        uVar4 = puVar2[8];
        puStack_60[7] = puVar2[7];
        puStack_60[6] = uVar3;
        puStack_60[9] = uVar5;
        puStack_60[8] = uVar4;
        puVar2 = puVar2 + 0x21;
        puStack_60 = puStack_60 + 0x21;
      } while (puVar2 != param_3);
      uStack_70 = 1;
      do {
        puStack_58 = param_2 + 3;
        FUN_10a1901f0(&puStack_58);
        param_2 = param_2 + 0x21;
      } while (param_2 != param_3);
    }
    FUN_10a193d78(&puStack_88);
    return;
  }
  __Znwm((long)param_2 * 0x108);
  return;
}



/* Entry: 10a193c28; end: 10a193d77;  */

void FUN_10a193c28(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_78;
  undefined8 **ppuStack_70;
  undefined8 **ppuStack_68;
  undefined1 uStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  if ((undefined8 *)0xf83e0f83e0f83e < param_2) {
    func_0x000109ffded8();
    ppuStack_70 = &puStack_58;
    ppuStack_68 = &puStack_50;
    puStack_50 = param_4;
    puVar1 = param_2;
    uStack_78 = param_1;
    puStack_58 = param_4;
    if (param_2 == param_3) {
      uStack_60 = 1;
    }
    else {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        *(undefined2 *)(puStack_50 + 2) = *(undefined2 *)(puVar1 + 2);
        puStack_50[1] = uVar3;
        *puStack_50 = uVar2;
        puStack_50[4] = 0;
        puStack_50[5] = 0;
        puStack_50[3] = 0;
        uVar2 = puVar1[3];
        puStack_50[4] = puVar1[4];
        puStack_50[3] = uVar2;
        puStack_50[5] = puVar1[5];
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[3] = 0;
        uVar2 = puVar1[0xe];
        uVar4 = puVar1[0x11];
        uVar3 = puVar1[0x10];
        uVar8 = puVar1[0xb];
        uVar7 = puVar1[10];
        uVar6 = puVar1[0xd];
        uVar5 = puVar1[0xc];
        puStack_50[0xf] = puVar1[0xf];
        puStack_50[0xe] = uVar2;
        puStack_50[0x11] = uVar4;
        puStack_50[0x10] = uVar3;
        puStack_50[0xb] = uVar8;
        puStack_50[10] = uVar7;
        puStack_50[0xd] = uVar6;
        puStack_50[0xc] = uVar5;
        uVar2 = puVar1[0x16];
        uVar4 = puVar1[0x19];
        uVar3 = puVar1[0x18];
        uVar8 = puVar1[0x13];
        uVar7 = puVar1[0x12];
        uVar6 = puVar1[0x15];
        uVar5 = puVar1[0x14];
        puStack_50[0x17] = puVar1[0x17];
        puStack_50[0x16] = uVar2;
        puStack_50[0x19] = uVar4;
        puStack_50[0x18] = uVar3;
        puStack_50[0x13] = uVar8;
        puStack_50[0x12] = uVar7;
        puStack_50[0x15] = uVar6;
        puStack_50[0x14] = uVar5;
        uVar5 = puVar1[0x1d];
        uVar4 = puVar1[0x1c];
        uVar3 = puVar1[0x1f];
        uVar2 = puVar1[0x1e];
        uVar7 = puVar1[0x1b];
        uVar6 = puVar1[0x1a];
        *(undefined4 *)(puStack_50 + 0x20) = *(undefined4 *)(puVar1 + 0x20);
        puStack_50[0x1d] = uVar5;
        puStack_50[0x1c] = uVar4;
        puStack_50[0x1f] = uVar3;
        puStack_50[0x1e] = uVar2;
        puStack_50[0x1b] = uVar7;
        puStack_50[0x1a] = uVar6;
        uVar2 = puVar1[6];
        uVar4 = puVar1[9];
        uVar3 = puVar1[8];
        puStack_50[7] = puVar1[7];
        puStack_50[6] = uVar2;
        puStack_50[9] = uVar4;
        puStack_50[8] = uVar3;
        puVar1 = puVar1 + 0x21;
        puStack_50 = puStack_50 + 0x21;
      } while (puVar1 != param_3);
      uStack_60 = 1;
      do {
        puStack_48 = param_2 + 3;
        FUN_10a1901f0(&puStack_48);
        param_2 = param_2 + 0x21;
      } while (param_2 != param_3);
    }
    FUN_10a193d78(&uStack_78);
    return;
  }
  __Znwm((long)param_2 * 0x108);
  return;
}



/* Entry: 10a193d78; end: 10a193dab;  */

long FUN_10a193d78(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a193dac(param_1);
  }
  return param_1;
}



/* Entry: 10a193dac; end: 10a193e83;  */

void FUN_10a193dac(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  lVar2 = **(long **)(param_1 + 8);
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0x108) {
    lStack_28 = lVar1 + -0xf0;
    FUN_10a1901f0(&lStack_28);
  }
  return;
}



/* Entry: 10a193e84; end: 10a19410f;  */

undefined8 * FUN_10a193e84(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar5 = param_2[1];
  uVar4 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  param_1[4] = param_2[4];
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_10a191510(param_1 + 5,param_2[5],param_2[6],
                ((long)(param_2[6] - param_2[5]) >> 4) * -0x3333333333333333);
  uVar4 = param_2[8];
  uVar6 = param_2[0xb];
  uVar5 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar4;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  uVar5 = param_2[0xd];
  uVar4 = param_2[0xc];
  uVar7 = param_2[0xf];
  uVar6 = param_2[0xe];
  uVar8 = param_2[0x10];
  uVar10 = param_2[0x13];
  uVar9 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar8;
  param_1[0x13] = uVar10;
  param_1[0x12] = uVar9;
  param_1[0xd] = uVar5;
  param_1[0xc] = uVar4;
  param_1[0xf] = uVar7;
  param_1[0xe] = uVar6;
  uVar5 = param_2[0x15];
  uVar4 = param_2[0x14];
  uVar7 = param_2[0x17];
  uVar6 = param_2[0x16];
  uVar8 = param_2[0x18];
  uVar10 = param_2[0x1b];
  uVar9 = param_2[0x1a];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar8;
  param_1[0x1b] = uVar10;
  param_1[0x1a] = uVar9;
  param_1[0x15] = uVar5;
  param_1[0x14] = uVar4;
  param_1[0x17] = uVar7;
  param_1[0x16] = uVar6;
  param_1[0x1c] = 0;
  lVar1 = param_2[0x1c];
  param_1[0x1c] = lVar1;
  if (lVar1 != 0) {
    puVar2 = param_2 + 0x1d;
    puVar3 = param_1 + 0x1d;
    do {
      uVar4 = *puVar2;
      uVar6 = puVar2[3];
      uVar5 = puVar2[2];
      puVar3[1] = puVar2[1];
      *puVar3 = uVar4;
      puVar3[3] = uVar6;
      puVar3[2] = uVar5;
      uVar5 = puVar2[5];
      uVar4 = puVar2[4];
      uVar7 = puVar2[7];
      uVar6 = puVar2[6];
      uVar8 = puVar2[8];
      uVar10 = puVar2[0xb];
      uVar9 = puVar2[10];
      puVar3[9] = puVar2[9];
      puVar3[8] = uVar8;
      puVar3[0xb] = uVar10;
      puVar3[10] = uVar9;
      puVar3[5] = uVar5;
      puVar3[4] = uVar4;
      puVar3[7] = uVar7;
      puVar3[6] = uVar6;
      puVar3 = puVar3 + 0xc;
      puVar2 = puVar2 + 0xc;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  _memcpy(param_1 + 0x35,param_2 + 0x35,0x110);
  param_1[0x57] = 0;
  lVar1 = param_2[0x57];
  param_1[0x57] = lVar1;
  if (lVar1 != 0) {
    puVar2 = param_2 + 0x58;
    puVar3 = param_1 + 0x58;
    do {
      _memcpy(puVar3,puVar2,0x110);
      puVar3 = puVar3 + 0x22;
      puVar2 = puVar2 + 0x22;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  param_1[0x9c] = 0;
  lVar1 = param_2[0x9c];
  param_1[0x9c] = lVar1;
  if (lVar1 != 0) {
    puVar2 = param_2 + 0x9d;
    puVar3 = param_1 + 0x9d;
    do {
      uVar4 = *puVar2;
      uVar6 = puVar2[3];
      uVar5 = puVar2[2];
      puVar3[1] = puVar2[1];
      *puVar3 = uVar4;
      puVar3[3] = uVar6;
      puVar3[2] = uVar5;
      uVar5 = puVar2[5];
      uVar4 = puVar2[4];
      uVar7 = puVar2[7];
      uVar6 = puVar2[6];
      uVar8 = puVar2[8];
      uVar10 = puVar2[0xb];
      uVar9 = puVar2[10];
      puVar3[9] = puVar2[9];
      puVar3[8] = uVar8;
      puVar3[0xb] = uVar10;
      puVar3[10] = uVar9;
      puVar3[5] = uVar5;
      puVar3[4] = uVar4;
      puVar3[7] = uVar7;
      puVar3[6] = uVar6;
      puVar3 = puVar3 + 0xc;
      puVar2 = puVar2 + 0xc;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  _memcpy(param_1 + 0xb5,param_2 + 0xb5,0x110);
  param_1[0xd7] = 0;
  lVar1 = param_2[0xd7];
  param_1[0xd7] = lVar1;
  if (lVar1 != 0) {
    puVar2 = param_2 + 0xd8;
    puVar3 = param_1 + 0xd8;
    do {
      _memcpy(puVar3,puVar2,0x110);
      puVar3 = puVar3 + 0x22;
      puVar2 = puVar2 + 0x22;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  param_1[0x11e] = 0;
  param_1[0x11d] = 0;
  param_1[0x11c] = 0;
  FUN_10a194110(param_1 + 0x11c,param_2[0x11c],param_2[0x11d],
                (long)(param_2[0x11d] - param_2[0x11c]) >> 2);
  *(undefined1 *)(param_1 + 0x11f) = *(undefined1 *)(param_2 + 0x11f);
  uVar5 = param_2[0x121];
  uVar4 = param_2[0x120];
  param_1[0x122] = param_2[0x122];
  param_1[0x121] = uVar5;
  param_1[0x120] = uVar4;
  func_0x00010a194208(param_1 + 0x123,param_2 + 0x123);
  param_1[0x129] = 0;
  param_1[0x128] = 0;
  param_1[0x127] = 0;
  FUN_10a194110();
  *(undefined1 *)(param_1 + 0x12a) = *(undefined1 *)(param_2 + 0x12a);
  return param_1;
}



/* Entry: 10a194110; end: 10a194187;  */

void FUN_10a194110(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a194188(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10a194188; end: 10a1941bf;  */

undefined1  [16] FUN_10a194188(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if ((ulong)param_2 >> 0x3e == 0) {
    plVar1 = param_1;
    FUN_10a1941d4();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)plVar1 + (long)param_2 * 4;
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = plVar1;
    return auVar4;
  }
  FUN_10a1941c0();
  plVar1 = (long *)&UNK_10f6403f7;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3e == 0) {
    lVar2 = (long)param_2 << 2;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000109ffded8();
  plVar3 = (long *)param_2[3];
  if (plVar3 == (long *)0x0) {
    plVar1[3] = 0;
  }
  else if (plVar3 == param_2) {
    plVar1[3] = (long)plVar1;
    plVar3 = param_2 + 3;
    param_2 = plVar1;
    (**(code **)(*(long *)*plVar3 + 0x18))((long *)*plVar3,plVar1);
  }
  else {
    (**(code **)(*plVar3 + 0x10))();
    plVar1[3] = (long)plVar3;
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = plVar1;
  return auVar6;
}



/* Entry: 10a1941c0; end: 10a1941d3;  */

undefined1  [16] FUN_10a1941c0(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&UNK_10f6403f7;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3e == 0) {
    lVar2 = (long)param_2 << 2;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  plVar3 = (long *)param_2[3];
  if (plVar3 == (long *)0x0) {
    plVar1[3] = 0;
  }
  else if (plVar3 == param_2) {
    plVar1[3] = (long)plVar1;
    plVar3 = param_2 + 3;
    param_2 = plVar1;
    (**(code **)(*(long *)*plVar3 + 0x18))((long *)*plVar3,plVar1);
  }
  else {
    (**(code **)(*plVar3 + 0x10))();
    plVar1[3] = (long)plVar3;
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10a1941d4; end: 10a19426b;  */

undefined1  [16] FUN_10a1941d4(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_2 >> 0x3e == 0) {
    lVar1 = (long)param_2 << 2;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  plVar2 = (long *)param_2[3];
  if (plVar2 == (long *)0x0) {
    param_1[3] = 0;
  }
  else if (plVar2 == param_2) {
    param_1[3] = (long)param_1;
    plVar2 = param_2 + 3;
    param_2 = param_1;
    (**(code **)(*(long *)*plVar2 + 0x18))((long *)*plVar2,param_1);
  }
  else {
    (**(code **)(*plVar2 + 0x10))();
    param_1[3] = (long)plVar2;
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a19426c; end: 10a19433b;  */

void FUN_10a19426c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  long lVar1;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  lVar1 = param_2;
  func_0x00010a01e9ec(param_2,param_3);
  uStack_78 = param_6[1];
  uStack_80 = *param_6;
  uStack_68 = param_6[3];
  uStack_70 = param_6[2];
  uStack_60 = param_6[4];
  uStack_58 = 1;
  uStack_c8 = param_7[1];
  uStack_d0 = *param_7;
  uStack_b8 = param_7[3];
  uStack_c0 = param_7[2];
  uStack_a8 = param_7[5];
  uStack_b0 = param_7[4];
  uStack_98 = param_7[7];
  uStack_a0 = param_7[6];
  uStack_90 = 1;
  FUN_10abfc924(param_1,param_2,param_3,2,1,param_4,param_5,&uStack_80,&uStack_d0);
  *(byte *)(param_1 + 10) = *(byte *)(lVar1 + 0x18) & 1 | *(byte *)(param_1 + 10);
  return;
}



/* Entry: 10a19433c; end: 10a19444f;  */

long FUN_10a19433c(long param_1)

{
  long lVar1;
  
  func_0x00010a194568(param_1 + 0x70);
  func_0x00010a194568(param_1 + 0x60);
  func_0x00010a15805c(param_1 + 0x48);
  FUN_10a1586e8(param_1 + 0x38);
  FUN_10a09a130(param_1 + 0x28);
  func_0x00010a09dbbc(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 8);
  *(long *)(param_1 + 8) = 0;
  if (lVar1 != 0) {
    func_0x00010a1944f0();
  }
  return param_1;
}



/* Entry: 10a194450; end: 10a1944ef;  */

long * FUN_10a194450(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = *(ulong *)(param_2 + 0x18);
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar3 == uVar7) {
          if (plVar6[5] == uVar3) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a1944f0; end: 10a1945bf;  */

void FUN_10a1944f0(undefined8 param_1,long param_2)

{
  long lStack_28;
  
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x77) < '\0') {
      __ZdlPv(*(undefined8 *)(param_2 + 0x60));
    }
    if (*(char *)(param_2 + 0x5f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_2 + 0x48));
    }
    lStack_28 = param_2 + 0x30;
    FUN_10a0426d8(&lStack_28);
    func_0x000107c34ee4(param_2 + 0x18,*(undefined8 *)(param_2 + 0x20));
    lStack_28 = param_2;
    FUN_10a0426d8(&lStack_28);
    __ZdlPv(param_2);
  }
  return;
}



/* Entry: 10a1945c0; end: 10a19465b;  */

undefined1  [16]
FUN_10a1945c0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  func_0x000109567058(param_1,&uStack_38,param_2);
  lVar4 = *plVar2;
  bVar1 = lVar4 == 0;
  if (bVar1) {
    lVar4 = 0x50;
    __Znwm();
    param_4 = (undefined8 *)*param_4;
    uVar3 = param_4[2];
    uVar5 = *param_4;
    *(undefined8 *)(lVar4 + 0x28) = param_4[1];
    *(undefined8 *)(lVar4 + 0x20) = uVar5;
    *(undefined8 *)(lVar4 + 0x30) = uVar3;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    *(undefined8 *)(lVar4 + 0x38) = 0;
    *(undefined8 *)(lVar4 + 0x40) = 0;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    func_0x000107c34eec(param_1,uStack_38,plVar2,lVar4);
  }
  auVar6[8] = bVar1;
  auVar6._0_8_ = lVar4;
  auVar6._9_7_ = 0;
  return auVar6;
}



/* Entry: 10a19465c; end: 10a19481f;  */

undefined8 *
FUN_10a19465c(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined1 param_6,undefined1 param_7,int param_8,
             undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
             undefined2 *param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a0cf0cc(param_1,*param_2,param_2[1],(param_2[1] - *param_2 >> 3) * -0x5555555555555555);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = param_1 + 4;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_10a0cf0cc(param_1 + 6,*param_3,param_3[1],(param_3[1] - *param_3 >> 3) * -0x5555555555555555);
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 9,*param_4,param_4[1]);
  }
  else {
    uVar2 = param_4[1];
    uVar1 = *param_4;
    param_1[0xb] = param_4[2];
    param_1[10] = uVar2;
    param_1[9] = uVar1;
  }
  if (*(char *)((long)param_5 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 0xc,*param_5,param_5[1]);
  }
  else {
    uVar2 = param_5[1];
    uVar1 = *param_5;
    param_1[0xe] = param_5[2];
    param_1[0xd] = uVar2;
    param_1[0xc] = uVar1;
  }
  *(undefined1 *)(param_1 + 0xf) = param_6;
  *(undefined1 *)((long)param_1 + 0x79) = param_7;
  if (3 < param_8) {
    param_8 = 4;
  }
  *(int *)((long)param_1 + 0x7c) = param_8;
  *(undefined1 *)(param_1 + 0x10) = (undefined1)param_9;
  *(undefined1 *)((long)param_1 + 0x81) = param_9._1_1_;
  *(undefined1 *)((long)param_1 + 0x82) = param_9._2_1_;
  *(undefined1 *)((long)param_1 + 0x83) = param_9._3_1_;
  *(undefined1 *)((long)param_1 + 0x84) = (undefined1)param_10;
  *(undefined1 *)((long)param_1 + 0x85) = param_10._1_1_;
  *(undefined1 *)((long)param_1 + 0x86) = param_10._2_1_;
  *(undefined1 *)((long)param_1 + 0x87) = param_10._3_1_;
  *(undefined4 *)(param_1 + 0x11) = param_11;
  *(undefined4 *)((long)param_1 + 0x8c) = param_12;
  *(undefined2 *)(param_1 + 0x12) = *param_13;
  return param_1;
}



/* Entry: 10a194820; end: 10a19484f;  */

long FUN_10a194820(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
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



/* Entry: 10a194850; end: 10a1948fb;  */

undefined8 FUN_10a194850(ulong *param_1,ulong *param_2,undefined8 *param_3)

{
  byte bVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if (param_1 != param_2) {
    param_3 = (undefined8 *)*param_3;
    bVar1 = *(byte *)((long)param_3 + 0x17);
    do {
      uVar5 = *param_1;
      uVar3 = uVar5;
      _strlen();
      if ((char)bVar1 < '\0') {
        if (uVar3 == param_3[1]) {
          if (uVar3 == 0xffffffffffffffff) {
            FUN_109ffddc8();
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10a1948f8);
            (*pcVar2)();
          }
          puVar4 = (undefined8 *)*param_3;
          goto LAB_10a1948b8;
        }
      }
      else {
        puVar4 = param_3;
        if (uVar3 == bVar1) {
LAB_10a1948b8:
          _memcmp(puVar4,uVar5);
          if ((int)puVar4 == 0) {
            return 1;
          }
        }
      }
      param_1 = param_1 + 3;
    } while (param_1 != param_2);
  }
  return 0;
}



/* Entry: 10a1948fc; end: 10a19490b;  */

void FUN_10a1948fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110baa410;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a19490c; end: 10a19492b;  */

void FUN_10a19490c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110baa410;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a19492c; end: 10a194953;  */

long FUN_10a19492c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_110baa260;
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



/* Entry: 10a194954; end: 10a194973;  */

void FUN_10a194954(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ba9d28;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a194974; end: 10a19497f;  */

undefined8 * FUN_10a194974(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_28;
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  __ZNSt3__15mutexD1Ev(param_1 + 0x170);
  __ZNSt3__15mutexD1Ev(param_1 + 0x130);
  FUN_10a183cbc(param_1 + 0xc0);
  func_0x00010a183d18(param_1 + 0xa8);
  lStack_28 = param_1 + 0x90;
  FUN_10a0426d8(&lStack_28);
  lVar2 = 0x68;
  do {
    func_0x00010a0eb124((long)puVar1 + lVar2);
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != 0x38);
  FUN_10a1586e8(param_1 + 0x50);
  func_0x00010a09dbbc(param_1 + 0x40);
  *puVar1 = &PTR_FUN_110baa260;
  func_0x00010a183e14(param_1 + 0x20);
  return puVar1;
}



/* Entry: 10a194980; end: 10a194b6b;  */

long * FUN_10a194980(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (*(char *)((long)plVar1 + 0x27) < '\0') {
      __ZdlPv(plVar1[2]);
    }
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a194b6c; end: 10a194f63;  */

long * FUN_10a194b6c(long *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x24;
  
  uVar4 = (uint)((ulong)param_2 >> 0x20);
  uVar8 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)uVar4) * -0x622015f714c7d297;
  uVar8 = ((ulong)uVar4 ^ uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
  uVar15 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar5 = uVar8 - 1;
    if ((uVar8 & uVar5) == 0) {
      unaff_x24 = uVar5 & uVar15;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar8 <= uVar15) {
        uVar10 = 0;
        if (uVar8 != 0) {
          uVar10 = uVar15 / uVar8;
        }
        unaff_x24 = uVar15 - uVar10 * uVar8;
      }
    }
    plVar9 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar9 != (long *)0x0) {
      for (plVar9 = (long *)*plVar9; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        uVar10 = plVar9[1];
        if (uVar10 == uVar15) {
          if (plVar9[2] == param_2) {
            return plVar9;
          }
        }
        else {
          if ((uVar8 & uVar5) == 0) {
            uVar10 = uVar10 & uVar5;
          }
          else if (uVar8 <= uVar10) {
            uVar7 = 0;
            if (uVar8 != 0) {
              uVar7 = uVar10 / uVar8;
            }
            uVar10 = uVar10 - uVar7 * uVar8;
          }
          if (uVar10 != unaff_x24) break;
        }
      }
    }
  }
  plVar9 = (long *)0x28;
  __Znwm();
  *plVar9 = 0;
  plVar9[1] = uVar15;
  lVar6 = *param_3;
  plVar9[3] = 0;
  plVar9[4] = 0;
  plVar9[2] = lVar6;
  if ((uVar8 == 0) || (*(float *)(param_1 + 4) * (float)uVar8 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar8) {
      uVar5 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar5 = uVar5 | uVar8 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar10) {
      uVar5 = uVar10;
    }
    if (uVar5 - 1 == 0) {
      uVar5 = 2;
    }
    else if ((uVar5 & uVar5 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar8 = param_1[1];
    }
    if (uVar8 < uVar5) {
LAB_10a194d04:
      if (uVar5 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a194f50);
        (*pcVar2)();
      }
      lVar6 = uVar5 << 3;
      __Znwm();
      lVar3 = *param_1;
      *param_1 = lVar6;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      uVar8 = 0;
      param_1[1] = uVar5;
      do {
        *(undefined8 *)(*param_1 + uVar8 * 8) = 0;
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
      plVar11 = (long *)param_1[2];
      uVar8 = uVar5;
      if (plVar11 != (long *)0x0) {
        uVar10 = plVar11[1];
        uVar7 = uVar5 - 1;
        if ((uVar5 & uVar7) == 0) {
          uVar10 = uVar10 & uVar7;
        }
        else if (uVar5 <= uVar10) {
          uVar14 = 0;
          if (uVar5 != 0) {
            uVar14 = uVar10 / uVar5;
          }
          uVar10 = uVar10 - uVar14 * uVar5;
        }
        *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
        plVar12 = (long *)*plVar11;
        while (plVar12 != (long *)0x0) {
          uVar14 = plVar12[1];
          if ((uVar5 & uVar7) == 0) {
            uVar14 = uVar14 & uVar7;
          }
          else if (uVar5 <= uVar14) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar14 / uVar5;
            }
            uVar14 = uVar14 - uVar1 * uVar5;
          }
          plVar13 = plVar12;
          if (uVar14 != uVar10) {
            lVar6 = *param_1;
            if (*(long *)(lVar6 + uVar14 * 8) == 0) {
              *(long **)(lVar6 + uVar14 * 8) = plVar11;
              uVar10 = uVar14;
            }
            else {
              *plVar11 = *plVar12;
              *plVar12 = **(undefined8 **)(lVar6 + uVar14 * 8);
              **(long **)(lVar6 + uVar14 * 8) = (long)plVar12;
              plVar13 = plVar11;
            }
          }
          plVar11 = plVar13;
          plVar12 = (long *)*plVar13;
        }
      }
    }
    else if (uVar5 < uVar8) {
      uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar8 < 3) || ((uVar8 & uVar8 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar10) {
        uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
      }
      if (uVar5 <= uVar10) {
        uVar5 = uVar10;
      }
      if (uVar5 < uVar8) {
        if (uVar5 != 0) goto LAB_10a194d04;
        lVar6 = *param_1;
        *param_1 = 0;
        if (lVar6 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar8 = 0;
      }
      else {
        uVar8 = param_1[1];
      }
    }
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = uVar8 - 1 & uVar15;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar8 <= uVar15) {
        uVar5 = 0;
        if (uVar8 != 0) {
          uVar5 = uVar15 / uVar8;
        }
        unaff_x24 = uVar15 - uVar5 * uVar8;
      }
    }
  }
  lVar6 = *param_1;
  plVar11 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar11 == (long *)0x0) {
    plVar11 = param_1 + 2;
    *plVar9 = *plVar11;
    *plVar11 = (long)plVar9;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar11;
    if (*plVar9 == 0) goto LAB_10a194ee4;
    uVar15 = *(ulong *)(*plVar9 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar15 = uVar15 & uVar8 - 1;
    }
    else if (uVar8 <= uVar15) {
      uVar5 = 0;
      if (uVar8 != 0) {
        uVar5 = uVar15 / uVar8;
      }
      uVar15 = uVar15 - uVar5 * uVar8;
    }
    plVar11 = (long *)(*param_1 + uVar15 * 8);
  }
  else {
    *plVar9 = *plVar11;
  }
  *plVar11 = (long)plVar9;
LAB_10a194ee4:
  param_1[3] = param_1[3] + 1;
  return plVar9;
}



/* Entry: 10a194f64; end: 10a194fab;  */

void FUN_10a194f64(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a0eb82c(lVar1 + 0x18);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a194fac; end: 10a1950eb;  */

long * FUN_10a194fac(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = *(ulong *)(param_2 + 0x18);
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (plVar6[5] == uVar3) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a1950ec; end: 10a195143;  */

long FUN_10a1950ec(long param_1)

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



/* Entry: 10a195144; end: 10a195227;  */

long FUN_10a195144(long *param_1,undefined8 param_2)

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



/* Entry: 10a195228; end: 10a19527f;  */

void FUN_10a195228(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x570;
  __Znwm();
  FUN_10a195280();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a195280; end: 10a1952c7;  */

undefined8 * FUN_10a195280(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110baa010;
  FUN_10a15d74c(param_1 + 3);
  return param_1;
}


