/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a4fa308; end: 10a4fa317;  */

void FUN_10a4fa308(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a4fa310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x58))();
  return;
}



/* Entry: 10a4fa318; end: 10a4fa4ef;  */

void FUN_10a4fa318(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 *extraout_x8;
  long *plVar7;
  long *plVar8;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined4 auStack_f0 [2];
  undefined8 uStack_e8;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  plVar5 = &lStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = (long *)0xd0;
  __Znwm();
  plVar7 = plVar4 + 1;
  *plVar7 = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_DAT_110be9708;
  plVar8 = plVar4 + 3;
  *plVar8 = (long)&PTR_DAT_110c6d4e8;
  plVar4[5] = 0;
  plVar4[4] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
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
  plVar4[0x13] = 0;
  plVar4[0x12] = 0;
  plVar4[0x15] = 0;
  plVar4[0x14] = 0;
  plVar4[0x17] = 0;
  plVar4[0x16] = 0;
  plVar4[0x19] = 0;
  plVar4[0x18] = 0;
  auStack_f0[0] = 1;
  uStack_e8 = 0;
  uStack_d8 = 3;
  uStack_d0 = 1000;
  uStack_c0 = 3;
  uStack_b8 = 2000;
  uStack_a8 = 1;
  uStack_a0 = 4000;
  uStack_90 = 1;
  uStack_88 = 8000;
  uStack_78 = 1;
  uStack_70 = 16000;
  uStack_60 = 1;
  uStack_58 = 20000;
  lStack_110 = 0;
  lStack_108 = 0;
  lStack_100 = 0;
  FUN_10a504768(&lStack_110,auStack_f0,&lStack_48,7);
  plVar4[6] = 0;
  plVar4[8] = lStack_108;
  plVar4[7] = lStack_110;
  plVar4[9] = lStack_100;
  plVar4[10] = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  plVar4[0x16] = 0;
  plVar4[0x15] = 0;
  plVar4[0x18] = 0;
  plVar4[0x17] = 0;
  plVar4[0xc] = 0;
  plVar4[0xb] = 0;
  plVar4[0xe] = 0;
  plVar4[0xd] = 0;
  *(undefined8 *)((long)plVar4 + 0x79) = 0;
  *(undefined8 *)((long)plVar4 + 0x71) = 0;
  plVar4[0x11] = 0;
  plVar4[0x12] = 0;
  *(undefined1 *)(plVar4 + 0x13) = 0;
  *(undefined4 *)(plVar4 + 0x19) = 0x3f800000;
  *param_1 = plVar8;
  param_1[1] = plVar4;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = *plVar7 + 1;
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
  plVar4[4] = (long)plVar8;
  plVar4[5] = (long)plVar4;
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
    (**(code **)(*plVar4 + 0x10))(plVar4);
    plVar5 = plVar4;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__119__shared_weak_countD2Ev(plVar4);
  __ZdlPv();
  __Unwind_Resume(plVar5);
  plVar5 = (long *)0x60;
  __Znwm();
  plVar7 = plVar5 + 1;
  *plVar7 = 0;
  plVar5[2] = 0;
  plVar4 = plVar5 + 3;
  *plVar5 = (long)&PTR_DAT_110be9778;
  FUN_10acdd768();
  *extraout_x8 = plVar4;
  extraout_x8[1] = plVar5;
  lVar6 = plVar5[5];
  if (lVar6 == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar8 = plVar5 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar5[4] = (long)plVar4;
    plVar5[5] = (long)plVar5;
  }
  else {
    if (*(long *)(lVar6 + 8) != -1) {
      return;
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar8 = plVar5 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar5[4] = (long)plVar4;
    plVar5[5] = (long)plVar5;
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar6);
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
  if (lVar6 != 0) {
    return;
  }
  (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
  return;
}



/* Entry: 10a4fa4f0; end: 10a4fa5ff;  */

void FUN_10a4fa4f0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  plVar4 = (long *)0x60;
  __Znwm();
  plVar7 = plVar4 + 1;
  *plVar7 = 0;
  plVar4[2] = 0;
  plVar5 = plVar4 + 3;
  *plVar4 = (long)&PTR_DAT_110be9778;
  FUN_10acdd768();
  *param_1 = plVar5;
  param_1[1] = plVar4;
  lVar6 = plVar4[5];
  if (lVar6 == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
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
    plVar4[4] = (long)plVar5;
    plVar4[5] = (long)plVar4;
  }
  else {
    if (*(long *)(lVar6 + 8) != -1) {
      return;
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
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
    plVar4[4] = (long)plVar5;
    plVar4[5] = (long)plVar4;
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar6);
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
  if (lVar6 != 0) {
    return;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
  return;
}



/* Entry: 10a4fa600; end: 10a4fa637;  */

void FUN_10a4fa600(undefined8 *param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(param_2 + 0x10))(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  return;
}



/* Entry: 10a4fa638; end: 10a4fa67b;  */

void FUN_10a4fa638(void)

{
  return;
}



/* Entry: 10a4fa67c; end: 10a4fa69b;  */

void FUN_10a4fa67c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110be9708;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4fa69c; end: 10a4fa6ab;  */

void FUN_10a4fa69c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a4fa6a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x58))();
  return;
}



/* Entry: 10a4fa6ac; end: 10a4fa6e3;  */

void FUN_10a4fa6ac(undefined8 *param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(param_2 + 0x10))(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  return;
}



/* Entry: 10a4fa6e4; end: 10a4fa727;  */

void FUN_10a4fa6e4(void)

{
  return;
}



/* Entry: 10a4fa728; end: 10a4fa747;  */

void FUN_10a4fa728(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110be9778;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4fa748; end: 10a4fa757;  */

void FUN_10a4fa748(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a4fa750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x58))();
  return;
}



/* Entry: 10a4fa758; end: 10a4fa7fb;  */

void FUN_10a4fa758(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x70;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110be97e8;
  puVar1[8] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 8) = 0x3f800000;
  puVar1[0xd] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0x3f800000;
  param_1[1] = puVar1;
  puVar1[3] = &PTR_FUN_110be8790;
  *param_1 = puVar1 + 3;
  return;
}



/* Entry: 10a4fa7fc; end: 10a4fa83f;  */

void FUN_10a4fa7fc(void)

{
  return;
}



/* Entry: 10a4fa840; end: 10a4fa85f;  */

void FUN_10a4fa840(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110be97e8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4fa860; end: 10a4fa86f;  */

void FUN_10a4fa860(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a4fa868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x58))();
  return;
}



/* Entry: 10a4fa870; end: 10a4fa8fb;  */

void FUN_10a4fa870(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110be9858;
  puVar3 = puVar1 + 3;
  *puVar3 = &PTR_DAT_110c6cb08;
  puVar2 = (undefined4 *)0x30;
  __Znwm();
  *puVar2 = 0;
  *(undefined8 *)(puVar2 + 2) = 0;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 10) = 0;
  *(undefined8 **)(puVar2 + 6) = puVar3;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[4] = puVar2;
  *param_1 = puVar3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a4fa8fc; end: 10a4fa933;  */

void FUN_10a4fa8fc(undefined8 *param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(param_2 + 0x10))(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  return;
}



/* Entry: 10a4fa934; end: 10a4fa977;  */

void FUN_10a4fa934(void)

{
  return;
}



/* Entry: 10a4fa978; end: 10a4fa997;  */

void FUN_10a4fa978(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110be9858;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4fa998; end: 10a4fa9a3;  */

long FUN_10a4fa998(long param_1)

{
  long lVar1;
  
  FUN_10ace6158(*(undefined8 *)(param_1 + 0x20));
  FUN_10a235538(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (lVar1 != 0) {
    FUN_10acefb2c((undefined8 *)(param_1 + 0x20));
  }
  return param_1 + 0x18;
}



/* Entry: 10a4fa9a4; end: 10a4fab27;  */

void FUN_10a4fa9a4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar4 = (long *)0x220;
  __Znwm();
  plVar6 = plVar4 + 1;
  *plVar6 = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_DAT_110be98c8;
  plVar7 = plVar4 + 4;
  plVar4[5] = 0;
  *plVar7 = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[0xd] = 0;
  plVar4[0xc] = 0;
  plVar4[0xf] = 0;
  plVar4[0xe] = 0;
  plVar4[0x11] = 0;
  plVar4[0x10] = 0;
  plVar4[0x13] = 0;
  plVar4[0x12] = 0;
  plVar4[0x15] = 0;
  plVar4[0x14] = 0;
  plVar4[0x17] = 0;
  plVar4[0x16] = 0;
  plVar4[0x19] = 0;
  plVar4[0x18] = 0;
  plVar4[0x1b] = 0;
  plVar4[0x1a] = 0;
  plVar4[0x1d] = 0;
  plVar4[0x1c] = 0;
  plVar4[0x1f] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x21] = 0;
  plVar4[0x20] = 0;
  plVar4[0x23] = 0;
  plVar4[0x22] = 0;
  plVar4[0x25] = 0;
  plVar4[0x24] = 0;
  plVar4[0x27] = 0;
  plVar4[0x26] = 0;
  plVar4[0x29] = 0;
  plVar4[0x28] = 0;
  plVar4[0x2b] = 0;
  plVar4[0x2a] = 0;
  plVar4[0x2d] = 0;
  plVar4[0x2c] = 0;
  plVar4[0x2f] = 0;
  plVar4[0x2e] = 0;
  plVar4[0x31] = 0;
  plVar4[0x30] = 0;
  plVar4[0x33] = 0;
  plVar4[0x32] = 0;
  plVar4[0x35] = 0;
  plVar4[0x34] = 0;
  plVar4[0x37] = 0;
  plVar4[0x36] = 0;
  plVar4[0x39] = 0;
  plVar4[0x38] = 0;
  plVar4[0x3b] = 0;
  plVar4[0x3a] = 0;
  plVar4[0x3d] = 0;
  plVar4[0x3c] = 0;
  plVar4[0x3f] = 0;
  plVar4[0x3e] = 0;
  plVar4[0x41] = 0;
  plVar4[0x40] = 0;
  plVar4[0x43] = 0;
  plVar4[0x42] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  *plVar7 = (long)&PTR_FUN_110c6de48;
  FUN_10acf6c0c();
  plVar4[0x41] = 0;
  plVar4[0x40] = 0;
  *(undefined4 *)(plVar4 + 0x42) = 0xffffffff;
  *param_1 = plVar7;
  param_1[1] = plVar4;
  if (plVar4[6] == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
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
    plVar4[5] = (long)plVar7;
    plVar4[6] = (long)plVar4;
  }
  else {
    if (*(long *)(plVar4[6] + 8) != -1) {
      return;
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
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
    plVar4[5] = (long)plVar7;
    plVar4[6] = (long)plVar4;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar5 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 != 0) {
    return;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
  return;
}



/* Entry: 10a4fab28; end: 10a4fab5f;  */

void FUN_10a4fab28(undefined8 *param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(param_2 + 0x10))(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  return;
}



/* Entry: 10a4fab60; end: 10a4faba3;  */

void FUN_10a4fab60(void)

{
  return;
}



/* Entry: 10a4faba4; end: 10a4fabc3;  */

void FUN_10a4faba4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110be98c8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4fabc4; end: 10a4fabd3;  */

void FUN_10a4fabc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a4fabcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x58))();
  return;
}



/* Entry: 10a4fabd4; end: 10a4fac5b;  */

void FUN_10a4fabd4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110be9938;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  param_1[1] = puVar1;
  puVar1[3] = &PTR_FUN_110be8338;
  *param_1 = puVar1 + 3;
  return;
}



/* Entry: 10a4fac5c; end: 10a4fac9f;  */

void FUN_10a4fac5c(void)

{
  return;
}



/* Entry: 10a4faca0; end: 10a4facbf;  */

void FUN_10a4faca0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110be9938;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4facc0; end: 10a4faccf;  */

void FUN_10a4facc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a4facc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x58))();
  return;
}



/* Entry: 10a4facd0; end: 10a4face3;  */

undefined1  [16] FUN_10a4facd0(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3c == 0) {
    lVar2 = (long)plVar1 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = plVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    FUN_10a294174();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10a4face4; end: 10a4fad63;  */

undefined1  [16] FUN_10a4face4(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    FUN_10a294174();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a4fad64; end: 10a4fae67;  */

void FUN_10a4fad64(ulong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  puVar10 = (undefined8 *)param_1[2];
  if (puVar10 == (undefined8 *)param_1[3]) {
    puVar9 = (undefined8 *)*param_1;
    puVar8 = (undefined8 *)param_1[1];
    if (puVar8 < puVar9 || (long)puVar8 - (long)puVar9 == 0) {
      uVar5 = (long)puVar10 - (long)puVar9 >> 2;
      if ((long)puVar10 - (long)puVar9 == 0) {
        uVar5 = 1;
      }
      if (uVar5 >> 0x3d != 0) {
        func_0x000109ffded8();
        uVar5 = *param_1;
        if (uVar5 != 0) {
          uVar4 = param_1[1];
          uVar3 = uVar5;
          if (uVar4 != uVar5) {
            do {
              uVar4 = uVar4 - 0x10;
              FUN_10a294174();
            } while (uVar4 != uVar5);
            uVar3 = *param_1;
          }
          param_1[1] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(uVar3);
          return;
        }
        return;
      }
      uVar3 = uVar5 << 3;
      __Znwm();
      puVar1 = (undefined8 *)(uVar3 + (uVar5 >> 2) * 8);
      lVar6 = (long)puVar10 - (long)puVar8;
      puVar10 = puVar1;
      if (lVar6 != 0) {
        puVar10 = (undefined8 *)((long)puVar1 + lVar6);
        puVar7 = puVar1;
        do {
          *puVar7 = *puVar8;
          lVar6 = lVar6 + -8;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        } while (lVar6 != 0);
      }
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar10;
      param_1[3] = uVar3 + uVar5 * 8;
      if (puVar9 != (undefined8 *)0x0) {
        __ZdlPv(puVar9);
        puVar10 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar6 = (((long)puVar8 - (long)puVar9 >> 3) + 1) / 2;
      puVar9 = puVar8 + -lVar6;
      lVar2 = (long)puVar10 - (long)puVar8;
      if (lVar2 != 0) {
        _memmove(puVar9,puVar8,lVar2);
        puVar8 = (undefined8 *)param_1[1];
      }
      puVar10 = (undefined8 *)((long)puVar9 + lVar2);
      param_1[1] = (ulong)(puVar8 + -lVar6);
      param_1[2] = (ulong)puVar10;
    }
  }
  *puVar10 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10a4fae68; end: 10a4faec3;  */

void FUN_10a4fae68(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10a294174();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a4faec4; end: 10a4fb037;  */

void FUN_10a4faec4(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_110be99c8;
  puVar3[2] = 0;
  puVar3[3] = 0;
  plVar5 = *(long **)(param_2 + 0x40);
  plVar1 = *(long **)(param_2 + 0x48);
  lVar6 = (long)plVar1 - (long)plVar5;
  if (lVar6 != 0) {
    puVar4 = (undefined8 *)((lVar6 >> 3) * 0x6db6db6db6db6db7);
    if ((undefined8 *)0x492492492492492 < puVar4) {
      FUN_10a4fb4fc();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a4fb008);
      (*pcVar2)();
    }
    FUN_10a4fb510();
    puVar3[1] = puVar4;
    puVar3[2] = puVar4;
    puVar3[3] = puVar4 + param_3 * 7;
    ppuStack_78 = &puStack_60;
    ppuStack_70 = &puStack_58;
    uStack_68 = 0;
    puStack_80 = puVar3 + 1;
    puStack_60 = puVar4;
    do {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puStack_58 = puVar4;
      FUN_10a051a50(puVar4,*plVar5,plVar5[1],(plVar5[1] - *plVar5 >> 2) * -0x5555555555555555);
      lVar7 = plVar5[4];
      lVar6 = plVar5[3];
      uVar8 = *(undefined8 *)((long)plVar5 + 0x25);
      *(undefined8 *)((long)puVar4 + 0x2d) = *(undefined8 *)((long)plVar5 + 0x2d);
      *(undefined8 *)((long)puVar4 + 0x25) = uVar8;
      puVar4[4] = lVar7;
      puVar4[3] = lVar6;
      plVar5 = plVar5 + 7;
      puVar4 = puStack_58 + 7;
    } while (plVar5 != plVar1);
    uStack_68 = 1;
    puStack_58 = puVar4;
    FUN_10a4fb558(&puStack_80);
    puVar3[2] = puVar4;
  }
  *param_1 = puVar3;
  return;
}



/* Entry: 10a4fb038; end: 10a4fb303;  */

void FUN_10a4fb038(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plStack_70;
  long **pplStack_68;
  long **pplStack_60;
  undefined1 uStack_58;
  long *plStack_50;
  long *plStack_48;
  
  puVar10 = *(undefined8 **)(param_1 + 0x48);
  if (puVar10 < *(undefined8 **)(param_1 + 0x50)) {
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    uVar14 = *param_2;
    puVar10[1] = param_2[1];
    *puVar10 = uVar14;
    puVar10[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    uVar15 = param_2[4];
    uVar14 = param_2[3];
    uVar16 = *(undefined8 *)((long)param_2 + 0x25);
    *(undefined8 *)((long)puVar10 + 0x2d) = *(undefined8 *)((long)param_2 + 0x2d);
    *(undefined8 *)((long)puVar10 + 0x25) = uVar16;
    puVar10[4] = uVar15;
    puVar10[3] = uVar14;
    puVar10 = puVar10 + 7;
LAB_10a4fb218:
    *(undefined8 **)(param_1 + 0x48) = puVar10;
    return;
  }
  plVar12 = (long *)(param_1 + 0x40);
  lVar11 = (long)puVar10 - *plVar12;
  uVar6 = (lVar11 >> 3) * 0x6db6db6db6db6db7 + 1;
  if (uVar6 < 0x492492492492493) {
    lVar8 = (long)*(undefined8 **)(param_1 + 0x50) - *plVar12 >> 3;
    uVar9 = lVar8 * -0x2492492492492492;
    if (uVar9 < uVar6 || uVar9 - uVar6 == 0) {
      uVar9 = uVar6;
    }
    if (0x249249249249248 < (ulong)(lVar8 * 0x6db6db6db6db6db7)) {
      uVar9 = 0x492492492492492;
    }
    if (uVar9 == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      puVar5 = param_2;
      FUN_10a4fb510();
    }
    puVar1 = (undefined8 *)(uVar9 + lVar11);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    uVar14 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar14;
    puVar1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    uVar15 = param_2[4];
    uVar14 = param_2[3];
    uVar16 = *(undefined8 *)((long)param_2 + 0x25);
    *(undefined8 *)((long)puVar1 + 0x2d) = *(undefined8 *)((long)param_2 + 0x2d);
    *(undefined8 *)((long)puVar1 + 0x25) = uVar16;
    puVar1[4] = uVar15;
    puVar1[3] = uVar14;
    puVar10 = puVar1 + 7;
    plVar13 = *(long **)(param_1 + 0x40);
    plVar3 = *(long **)(param_1 + 0x48);
    pplStack_68 = &plStack_50;
    pplStack_60 = &plStack_48;
    plVar2 = (long *)((long)puVar1 + ((long)plVar13 - (long)plVar3));
    plStack_48 = plVar2;
    plVar7 = plVar13;
    plStack_70 = plVar12;
    plStack_50 = plVar2;
    if ((long)plVar13 - (long)plVar3 == 0) {
      uStack_58 = 1;
    }
    else {
      do {
        *plStack_48 = 0;
        plStack_48[1] = 0;
        plStack_48[2] = 0;
        lVar11 = *plVar7;
        plStack_48[1] = plVar7[1];
        *plStack_48 = lVar11;
        plStack_48[2] = plVar7[2];
        *plVar7 = 0;
        plVar7[1] = 0;
        plVar7[2] = 0;
        lVar8 = plVar7[4];
        lVar11 = plVar7[3];
        uVar14 = *(undefined8 *)((long)plVar7 + 0x25);
        *(undefined8 *)((long)plStack_48 + 0x2d) = *(undefined8 *)((long)plVar7 + 0x2d);
        *(undefined8 *)((long)plStack_48 + 0x25) = uVar14;
        plStack_48[4] = lVar8;
        plStack_48[3] = lVar11;
        plVar7 = plVar7 + 7;
        plStack_48 = plStack_48 + 7;
      } while (plVar7 != plVar3);
      uStack_58 = 1;
      do {
        if (*plVar13 != 0) {
          plVar13[1] = *plVar13;
          __ZdlPv();
        }
        plVar13 = plVar13 + 7;
      } while (plVar13 != plVar3);
    }
    FUN_10a4fb558(&plStack_70);
    lVar11 = *(long *)(param_1 + 0x40);
    *(long **)(param_1 + 0x40) = plVar2;
    *(undefined8 **)(param_1 + 0x48) = puVar10;
    *(ulong *)(param_1 + 0x50) = uVar9 + (long)puVar5 * 0x38;
    if (lVar11 != 0) {
      __ZdlPv();
    }
    goto LAB_10a4fb218;
  }
  FUN_10a4fb4fc();
  uVar9 = (ulong)(int)param_2;
  lVar11 = *(long *)(param_1 + 0x40);
  lVar8 = *(long *)(param_1 + 0x48);
  uVar6 = (lVar8 - lVar11 >> 3) * 0x6db6db6db6db6db7;
  if (uVar9 + 1 != uVar6) {
    if ((lVar11 == lVar8) || (uVar6 < uVar9 || uVar6 - uVar9 == 0)) goto LAB_10a4fb300;
    lVar11 = lVar11 + (long)(int)param_2 * 0x38;
    func_0x0001074293d0(lVar11,lVar8 + -0x38);
    uVar15 = *(undefined8 *)(lVar8 + -0x18);
    uVar14 = *(undefined8 *)(lVar8 + -0x20);
    uVar16 = *(undefined8 *)(lVar8 + -0x13);
    *(undefined8 *)(lVar11 + 0x2d) = *(undefined8 *)(lVar8 + -0xb);
    *(undefined8 *)(lVar11 + 0x25) = uVar16;
    *(undefined8 *)(lVar11 + 0x20) = uVar15;
    *(undefined8 *)(lVar11 + 0x18) = uVar14;
    lVar11 = *(long *)(param_1 + 0x40);
    lVar8 = *(long *)(param_1 + 0x48);
    uVar6 = (lVar8 - lVar11 >> 3) * 0x6db6db6db6db6db7;
    if (uVar6 < uVar9 || uVar6 - uVar9 == 0) goto LAB_10a4fb300;
  }
  if (lVar11 != lVar8) {
    lVar11 = *(long *)(lVar8 + -0x38);
    if (lVar11 != 0) {
      *(long *)(lVar8 + -0x30) = lVar11;
      __ZdlPv();
    }
    *(long **)(param_1 + 0x48) = (long *)(lVar8 + -0x38);
    return;
  }
LAB_10a4fb300:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a4fb304);
  (*pcVar4)();
}



/* Entry: 10a4fb304; end: 10a4fb363;  */

undefined8 * FUN_10a4fb304(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110be99c8;
  func_0x00010a4fb5bc(param_1 + 1);
  return param_1;
}



/* Entry: 10a4fb364; end: 10a4fb4fb;  */

undefined1  [16] FUN_10a4fb364(long param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  undefined *puVar5;
  code **ppcVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  long lStack_b0;
  long lStack_a8;
  code *pcStack_98;
  undefined **appuStack_90 [7];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a26d314(&lStack_b0,
                (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * 0x6db6db6db6db6db7);
  lVar4 = lStack_a8 - lStack_b0;
  if (lVar4 != 0) {
    lVar9 = 0;
    uVar10 = 0;
    do {
      uVar7 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * 0x6db6db6db6db6db7;
      if ((uVar7 < uVar10 || uVar7 - uVar10 == 0) ||
         (plVar3 = param_2,
         func_0x0001098ac018(param_2,&UNK_10e4c90da,0x22,*(long *)(param_1 + 8) + lVar9,2,1),
         (ulong)(lStack_a8 - lStack_b0 >> 2) <= uVar10)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a4fb4bc);
        (*pcVar2)();
      }
      *(int *)(lStack_b0 + uVar10 * 4) = (int)plVar3;
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 0x38;
    } while (lVar4 >> 2 != uVar10);
  }
  pcStack_98 = FUN_10a4fb630;
  appuStack_90[0] = &PTR_DAT_110be99f8;
  ppcVar6 = &pcStack_98;
  func_0x0001098bb6d0(*param_2 + 0x18,ppcVar6,&lStack_b0);
  (*(code *)*appuStack_90[0])(appuStack_90);
  lVar4 = lStack_b0;
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    (*(code *)*appuStack_90[0])(appuStack_90);
    if (lStack_b0 != 0) {
      lStack_a8 = lStack_b0;
      __ZdlPv();
    }
    __Unwind_Resume(lVar4);
    puVar5 = &DAT_10f62a4d8;
    FUN_109ffde64();
    if ((undefined *)0x492492492492492 < puVar5) {
      func_0x000109ffded8();
      if ((puVar5[0x18] & 1) == 0) {
        plVar8 = (long *)**(undefined8 **)(puVar5 + 8);
        plVar3 = (long *)**(long **)(puVar5 + 0x10);
        while (plVar1 = plVar3, plVar1 != plVar8) {
          plVar3 = plVar1 + -7;
          if (*plVar3 != 0) {
            plVar1[-6] = *plVar3;
            __ZdlPv();
          }
        }
      }
      auVar13._8_8_ = ppcVar6;
      auVar13._0_8_ = puVar5;
      return auVar13;
    }
    lVar4 = (long)puVar5 * 0x38;
    __Znwm(lVar4);
    auVar12._8_8_ = puVar5;
    auVar12._0_8_ = lVar4;
    return auVar12;
  }
  auVar11._8_8_ = ppcVar6;
  auVar11._0_8_ = lVar4;
  return auVar11;
}



/* Entry: 10a4fb4fc; end: 10a4fb50f;  */

undefined1  [16] FUN_10a4fb4fc(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  puVar2 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((undefined *)0x492492492492492 < puVar2) {
    func_0x000109ffded8();
    if ((puVar2[0x18] & 1) == 0) {
      plVar4 = (long *)**(undefined8 **)(puVar2 + 8);
      plVar5 = (long *)**(long **)(puVar2 + 0x10);
      while (plVar1 = plVar5, plVar1 != plVar4) {
        plVar5 = plVar1 + -7;
        if (*plVar5 != 0) {
          plVar1[-6] = *plVar5;
          __ZdlPv();
        }
      }
    }
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = puVar2;
    return auVar7;
  }
  lVar3 = (long)puVar2 * 0x38;
  __Znwm(lVar3);
  auVar6._8_8_ = puVar2;
  auVar6._0_8_ = lVar3;
  return auVar6;
}



/* Entry: 10a4fb510; end: 10a4fb557;  */

undefined1  [16] FUN_10a4fb510(ulong param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (0x492492492492492 < param_1) {
    func_0x000109ffded8();
    if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
      plVar3 = (long *)**(undefined8 **)(param_1 + 8);
      plVar4 = (long *)**(long **)(param_1 + 0x10);
      while (plVar1 = plVar4, plVar1 != plVar3) {
        plVar4 = plVar1 + -7;
        if (*plVar4 != 0) {
          plVar1[-6] = *plVar4;
          __ZdlPv();
        }
      }
    }
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = param_1;
    return auVar6;
  }
  lVar2 = param_1 * 0x38;
  __Znwm(lVar2);
  auVar5._8_8_ = param_1;
  auVar5._0_8_ = lVar2;
  return auVar5;
}



/* Entry: 10a4fb558; end: 10a4fb62f;  */

long FUN_10a4fb558(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    plVar2 = (long *)**(undefined8 **)(param_1 + 8);
    plVar3 = (long *)**(long **)(param_1 + 0x10);
    while (plVar1 = plVar3, plVar1 != plVar2) {
      plVar3 = plVar1 + -7;
      if (*plVar3 != 0) {
        plVar1[-6] = *plVar3;
        __ZdlPv();
      }
    }
  }
  return param_1;
}



/* Entry: 10a4fb630; end: 10a4fb647;  */

void FUN_10a4fb630(void)

{
  return;
}



/* Entry: 10a4fb648; end: 10a4fb6f7;  */

long * FUN_10a4fb648(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined5 uStack_38;
  undefined3 uStack_33;
  undefined5 uStack_30;
  undefined8 uStack_2b;
  
  lStack_58 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  FUN_10a051a50(&lStack_58,*param_2,param_2[1],(param_2[1] - *param_2 >> 2) * -0x5555555555555555);
  lStack_40 = param_2[3];
  uStack_38 = (undefined5)param_2[4];
  uStack_2b = *(undefined8 *)((long)param_2 + 0x2d);
  uStack_33 = (undefined3)*(undefined8 *)((long)param_2 + 0x25);
  uStack_30 = (undefined5)((ulong)*(undefined8 *)((long)param_2 + 0x25) >> 0x18);
  FUN_10aaaf6e4(&lStack_58,param_1);
  plVar1 = &lStack_58;
  FUN_10a4fb6f8(plVar1,param_2);
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10a4fb6f8; end: 10a4fb853;  */

bool FUN_10a4fb6f8(long *param_1,long *param_2)

{
  bool bVar1;
  float *pfVar2;
  float *pfVar3;
  
  pfVar2 = (float *)*param_1;
  pfVar3 = (float *)*param_2;
  if (param_1[1] - (long)pfVar2 == param_2[1] - (long)pfVar3) {
    for (; pfVar2 != (float *)param_1[1]; pfVar2 = pfVar2 + 3) {
      if (*pfVar2 != *pfVar3) {
        return false;
      }
      if (pfVar2[1] != pfVar3[1]) {
        return false;
      }
      if (pfVar2[2] != pfVar3[2]) {
        return false;
      }
      pfVar3 = pfVar3 + 3;
    }
    if ((*(byte *)(param_2 + 4) & *(byte *)(param_1 + 4)) == 0) {
      if (*(byte *)(param_1 + 4) != *(byte *)(param_2 + 4)) {
        return false;
      }
    }
    else {
      bVar1 = false;
      if ((*(float *)(param_1 + 3) == *(float *)(param_2 + 3)) &&
         (bVar1 = false,
         !NAN(*(float *)((long)param_1 + 0x1c)) && !NAN(*(float *)((long)param_2 + 0x1c)))) {
        bVar1 = *(float *)((long)param_1 + 0x1c) == *(float *)((long)param_2 + 0x1c);
      }
      if (!bVar1) {
        return false;
      }
    }
    if ((((*(char *)((long)param_1 + 0x24) == *(char *)((long)param_2 + 0x24)) &&
         (*(char *)((long)param_1 + 0x25) == *(char *)((long)param_2 + 0x25))) &&
        (*(char *)((long)param_1 + 0x26) == *(char *)((long)param_2 + 0x26))) &&
       (*(char *)((long)param_1 + 0x27) == *(char *)((long)param_2 + 0x27))) {
      bVar1 = *(byte *)((long)param_1 + 0x34) == *(byte *)((long)param_2 + 0x34);
      if ((*(byte *)((long)param_2 + 0x34) & *(byte *)((long)param_1 + 0x34)) != 0) {
        if ((*(float *)(param_1 + 5) == *(float *)(param_2 + 5)) &&
           (*(float *)((long)param_1 + 0x2c) == *(float *)((long)param_2 + 0x2c))) {
          bVar1 = *(float *)(param_1 + 6) == *(float *)(param_2 + 6);
        }
        else {
          bVar1 = false;
        }
      }
      return bVar1;
    }
  }
  return false;
}



/* Entry: 10a4fb854; end: 10a4fb90b;  */

void FUN_10a4fb854(ulong *param_1,long param_2,long *param_3,undefined4 param_4,undefined4 *param_5,
                  long param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lStack_50;
  long *plStack_48;
  
  plVar3 = &lStack_50;
  if (param_6 != 0) {
    lStack_50 = param_2;
    plStack_48 = param_3;
    func_0x0001098af634(&lStack_50,*param_5);
    if ((char)plVar3[3] != '\x01') {
      return;
    }
    FUN_10a26d738(param_3,param_4);
    puVar1 = (undefined8 *)0x113302308;
    if (*param_3 != -1) {
      puVar1 = (undefined8 *)(param_2 + *param_3);
    }
    if ((*(byte *)(plVar3 + 3) & 1) != 0) {
      if (*param_1 < (ulong)(plVar3[1] - *plVar3 >> 3)) {
        puVar4 = *(undefined8 **)(*plVar3 + *param_1 * 8);
        uVar5 = 0;
        if (puVar4 != (undefined8 *)0x0) {
          uVar5 = *puVar4;
        }
        *puVar1 = uVar5;
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a4fb90c);
  (*pcVar2)();
}



/* Entry: 10a4fb90c; end: 10a4fb92f;  */

void FUN_10a4fb90c(void)

{
  return;
}



/* Entry: 10a4fb930; end: 10a4fba07;  */

void FUN_10a4fb930(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_110be9a98;
  puVar3[2] = 0;
  puVar3[3] = 0;
  lVar1 = *(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40);
  if (lVar1 != 0) {
    uVar4 = lVar1 * -0x5555555555555555;
    if (0x5555555555555555 < uVar4) {
      FUN_10a4fbd80();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a4fb9e4);
      (*pcVar2)();
    }
    FUN_10a4fbd94();
    puVar3[1] = uVar4;
    puVar3[3] = uVar4 + param_3 * 3;
    _memmove();
    puVar3[2] = uVar4 + lVar1;
  }
  *param_1 = puVar3;
  return;
}



/* Entry: 10a4fba08; end: 10a4fbaf7;  */

void FUN_10a4fba08(long param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  code *pcVar3;
  undefined2 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = *(undefined2 **)(param_1 + 0x48);
  if (puVar1 < *(undefined2 **)(param_1 + 0x50)) {
    uVar2 = *param_2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
    *puVar1 = uVar2;
    lVar9 = (long)puVar1 + 3;
LAB_10a4fbae0:
    *(long *)(param_1 + 0x48) = lVar9;
    return;
  }
  lVar9 = (long)puVar1 - *(long *)(param_1 + 0x40);
  uVar6 = lVar9 * -0x5555555555555555 + 1;
  if (uVar6 < 0x5555555555555556) {
    lVar5 = (long)*(undefined2 **)(param_1 + 0x50) - *(long *)(param_1 + 0x40);
    uVar7 = lVar5 * 0x5555555555555556;
    if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
      uVar7 = uVar6;
    }
    if (0x2aaaaaaaaaaaaaa9 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar7 = 0x5555555555555555;
    }
    puVar4 = param_2;
    FUN_10a4fbd94();
    puVar1 = (undefined2 *)(uVar7 + lVar9);
    uVar2 = *param_2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
    *puVar1 = uVar2;
    lVar9 = (long)puVar1 + 3;
    lVar8 = (long)puVar1 - (*(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40));
    _memcpy(lVar8);
    lVar5 = *(long *)(param_1 + 0x40);
    *(long *)(param_1 + 0x40) = lVar8;
    *(long *)(param_1 + 0x48) = lVar9;
    *(ulong *)(param_1 + 0x50) = uVar7 + (long)puVar4 * 3;
    if (lVar5 != 0) {
      __ZdlPv();
    }
    goto LAB_10a4fbae0;
  }
  FUN_10a4fbd80();
  uVar6 = (ulong)(int)param_2;
  lVar9 = *(long *)(param_1 + 0x40);
  lVar5 = *(long *)(param_1 + 0x48);
  uVar7 = (lVar5 - lVar9) * -0x5555555555555555;
  if (uVar6 + 1 != uVar7) {
    if ((lVar9 == lVar5) || (uVar7 < uVar6 || uVar7 - uVar6 == 0)) goto LAB_10a4fbb74;
    puVar1 = (undefined2 *)(lVar9 + uVar6 * 3);
    uVar2 = *(undefined2 *)(lVar5 + -3);
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(lVar5 + -1);
    *puVar1 = uVar2;
    lVar9 = *(long *)(param_1 + 0x40);
    lVar5 = *(long *)(param_1 + 0x48);
    uVar7 = (lVar5 - lVar9) * -0x5555555555555555;
    if (uVar7 < uVar6 || uVar7 - uVar6 == 0) goto LAB_10a4fbb74;
  }
  if (lVar9 != lVar5) {
    *(long *)(param_1 + 0x48) = lVar5 + -3;
    return;
  }
LAB_10a4fbb74:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a4fbb78);
  (*pcVar3)();
}



/* Entry: 10a4fbaf8; end: 10a4fbb77;  */

void FUN_10a4fbaf8(long param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = (ulong)param_2;
  lVar5 = *(long *)(param_1 + 0x40);
  lVar4 = *(long *)(param_1 + 0x48);
  uVar7 = (lVar4 - lVar5) * -0x5555555555555555;
  if (uVar6 + 1 != uVar7) {
    if ((lVar5 == lVar4) || (uVar7 < uVar6 || uVar7 - uVar6 == 0)) goto LAB_10a4fbb74;
    puVar1 = (undefined2 *)(lVar5 + uVar6 * 3);
    uVar2 = *(undefined2 *)(lVar4 + -3);
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(lVar4 + -1);
    *puVar1 = uVar2;
    lVar5 = *(long *)(param_1 + 0x40);
    lVar4 = *(long *)(param_1 + 0x48);
    uVar7 = (lVar4 - lVar5) * -0x5555555555555555;
    if (uVar7 < uVar6 || uVar7 - uVar6 == 0) goto LAB_10a4fbb74;
  }
  if (lVar5 != lVar4) {
    *(long *)(param_1 + 0x48) = lVar4 + -3;
    return;
  }
LAB_10a4fbb74:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a4fbb78);
  (*pcVar3)();
}



/* Entry: 10a4fbb78; end: 10a4fbbef;  */

undefined8 * FUN_10a4fbb78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110be9a98;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a4fbbf0; end: 10a4fbd7f;  */

void FUN_10a4fbbf0(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lStack_b0;
  long lStack_a8;
  code *pcStack_98;
  undefined **appuStack_90 [7];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a26d314(&lStack_b0,
                (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) * -0x5555555555555555);
  lVar3 = lStack_a8 - lStack_b0;
  if (lVar3 != 0) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      uVar5 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) * -0x5555555555555555;
      if (uVar5 < uVar7 || uVar5 - uVar7 == 0) {
LAB_10a4fbd3c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4fbd40);
        (*pcVar1)();
      }
      plVar2 = param_2;
      func_0x0001098ac018(param_2,&UNK_10e4c911b,0x23,*(long *)(param_1 + 8) + lVar6,2,1);
      if ((ulong)(lStack_a8 - lStack_b0 >> 2) <= uVar7) goto LAB_10a4fbd3c;
      *(int *)(lStack_b0 + uVar7 * 4) = (int)plVar2;
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 3;
    } while (lVar3 >> 2 != uVar7);
  }
  pcStack_98 = FUN_10a4fbdd0;
  appuStack_90[0] = &PTR_DAT_110be9ac8;
  func_0x0001098bb6d0(*param_2 + 0x18,&pcStack_98,&lStack_b0);
  (*(code *)*appuStack_90[0])(appuStack_90);
  lVar3 = lStack_b0;
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*appuStack_90[0])(appuStack_90);
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  __Unwind_Resume(lVar3);
  puVar4 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (puVar4 < (undefined *)0x5555555555555556) {
    __Znwm((long)puVar4 * 3);
    return;
  }
  func_0x000109ffded8();
  return;
}



/* Entry: 10a4fbd80; end: 10a4fbd93;  */

void FUN_10a4fbd80(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (puVar1 < (undefined *)0x5555555555555556) {
    __Znwm((long)puVar1 * 3);
    return;
  }
  func_0x000109ffded8();
  return;
}



/* Entry: 10a4fbd94; end: 10a4fbdcf;  */

void FUN_10a4fbd94(ulong param_1)

{
  if (param_1 < 0x5555555555555556) {
    __Znwm(param_1 * 3);
    return;
  }
  func_0x000109ffded8();
  return;
}



/* Entry: 10a4fbdd0; end: 10a4fbe0b;  */

void FUN_10a4fbdd0(void)

{
  return;
}



/* Entry: 10a4fbe0c; end: 10a4fbec3;  */

void FUN_10a4fbe0c(ulong *param_1,long param_2,long *param_3,undefined4 param_4,undefined4 *param_5,
                  long param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lStack_50;
  long *plStack_48;
  
  plVar3 = &lStack_50;
  if (param_6 != 0) {
    lStack_50 = param_2;
    plStack_48 = param_3;
    func_0x0001098af634(&lStack_50,*param_5);
    if ((char)plVar3[3] != '\x01') {
      return;
    }
    FUN_10a26d738(param_3,param_4);
    puVar1 = (undefined8 *)0x113302310;
    if (*param_3 != -1) {
      puVar1 = (undefined8 *)(param_2 + *param_3);
    }
    if ((*(byte *)(plVar3 + 3) & 1) != 0) {
      if (*param_1 < (ulong)(plVar3[1] - *plVar3 >> 3)) {
        puVar4 = *(undefined8 **)(*plVar3 + *param_1 * 8);
        uVar5 = 0;
        if (puVar4 != (undefined8 *)0x0) {
          uVar5 = *puVar4;
        }
        *puVar1 = uVar5;
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a4fbec4);
  (*pcVar2)();
}



/* Entry: 10a4fbec4; end: 10a4fbee7;  */

void FUN_10a4fbec4(void)

{
  return;
}



/* Entry: 10a4fbee8; end: 10a4fbfe3;  */

undefined8 ** FUN_10a4fbee8(undefined8 **param_1,undefined8 *param_2,long *param_3)

{
  undefined8 **ppuVar1;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = *param_2;
  (**(code **)(param_2[1] + 0x10))(apuStack_70);
  lStack_88 = param_3[1];
  lStack_90 = *param_3;
  lStack_80 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  func_0x0001098aeecc(param_1,&uStack_78,&UNK_110be9b18,&lStack_90);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  ppuVar1 = apuStack_70;
  (*(code *)*apuStack_70[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  (*(code *)*apuStack_70[0])(apuStack_70);
  __Unwind_Resume();
  *ppuVar1 = (undefined8 *)0x0;
  return ppuVar1;
}



/* Entry: 10a4fbfe4; end: 10a4fbfff;  */

void FUN_10a4fbfe4(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10a4fc000; end: 10a4fc0a7;  */

long FUN_10a4fc000(long *param_1,undefined4 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if ((bRam00000001133025b8 & 1) == 0) {
    iVar1 = 0x133025b8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x10a4c5f18,0x1133025b0,0x100000000);
      ___cxa_guard_release(0x1133025b8);
    }
  }
  plVar2 = (long *)param_1[1];
  FUN_10a26d738(plVar2,param_2);
  if (*plVar2 == -1) {
    lVar3 = 0x1133025b0;
  }
  else {
    lVar3 = *param_1 + *plVar2;
  }
  return lVar3;
}



/* Entry: 10a4fc0a8; end: 10a4fc0b7;  */

void FUN_10a4fc0a8(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  long in_x3;
  undefined8 *extraout_x8;
  
  func_0x000105277f8c();
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_110be9b88;
  puVar3[2] = 0;
  puVar3[3] = 0;
  lVar1 = *(long *)(in_x3 + 0x48) - *(long *)(in_x3 + 0x40);
  if (lVar1 != 0) {
    if (lVar1 < 0) {
      FUN_10a4fc450();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a4fc14c);
      (*pcVar2)();
    }
    lVar4 = lVar1;
    __Znwm();
    puVar3[1] = lVar4;
    puVar3[3] = lVar4 + lVar1;
    _memcpy();
    puVar3[2] = lVar4 + lVar1;
  }
  *extraout_x8 = puVar3;
  return;
}



/* Entry: 10a4fc0b8; end: 10a4fc16f;  */

void FUN_10a4fc0b8(undefined8 *param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_110be9b88;
  puVar3[2] = 0;
  puVar3[3] = 0;
  lVar1 = *(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40);
  if (lVar1 != 0) {
    if (lVar1 < 0) {
      FUN_10a4fc450();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a4fc14c);
      (*pcVar2)();
    }
    lVar4 = lVar1;
    __Znwm();
    puVar3[1] = lVar4;
    puVar3[3] = lVar4 + lVar1;
    _memcpy();
    puVar3[2] = lVar4 + lVar1;
  }
  *param_1 = puVar3;
  return;
}



/* Entry: 10a4fc170; end: 10a4fc22f;  */

void FUN_10a4fc170(long param_1,int param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 0x48);
  if (uVar7 < *(ulong *)(param_1 + 0x50)) {
    lVar6 = uVar7 + 1;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x40);
    lVar5 = uVar7 - lVar4;
    uVar7 = lVar5 + 1;
    if ((long)uVar7 < 0) {
      FUN_10a4fc450();
      lVar4 = *(long *)(param_1 + 0x40);
      lVar5 = *(long *)(param_1 + 0x48);
      if ((((long)param_2 + 1U == lVar5 - lVar4) ||
          ((lVar4 != lVar5 && ((ulong)(long)param_2 < (ulong)(lVar5 - lVar4))))) && (lVar4 != lVar5)
         ) {
        *(long *)(param_1 + 0x48) = lVar5 + -1;
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4fc270);
      (*pcVar1)();
    }
    uVar2 = *(ulong *)(param_1 + 0x50) - lVar4;
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar7 || uVar3 - uVar7 == 0) {
      uVar3 = uVar7;
    }
    if (0x3ffffffffffffffe < uVar2) {
      uVar3 = 0x7fffffffffffffff;
    }
    if (uVar3 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar3;
      __Znwm();
    }
    lVar6 = uVar7 + lVar5 + 1;
    _memcpy(uVar7,lVar4,lVar5);
    *(ulong *)(param_1 + 0x40) = uVar7;
    *(long *)(param_1 + 0x48) = lVar6;
    *(ulong *)(param_1 + 0x50) = uVar7 + uVar3;
    if (lVar4 != 0) {
      __ZdlPv(lVar4);
    }
  }
  *(long *)(param_1 + 0x48) = lVar6;
  return;
}



/* Entry: 10a4fc230; end: 10a4fc26f;  */

void FUN_10a4fc230(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar1 = *(long *)(param_1 + 0x40);
  lVar2 = *(long *)(param_1 + 0x48);
  if ((((long)param_2 + 1U == lVar2 - lVar1) ||
      ((lVar1 != lVar2 && ((ulong)(long)param_2 < (ulong)(lVar2 - lVar1))))) && (lVar1 != lVar2)) {
    *(long *)(param_1 + 0x48) = lVar2 + -1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a4fc270);
  (*pcVar3)();
}



/* Entry: 10a4fc270; end: 10a4fc2e7;  */

undefined8 * FUN_10a4fc270(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110be9b88;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a4fc2e8; end: 10a4fc44f;  */

void FUN_10a4fc2e8(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lStack_a0;
  long lStack_98;
  code *pcStack_88;
  undefined **appuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a26d314(&lStack_a0,*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8));
  lVar3 = lStack_98 - lStack_a0;
  if (lVar3 != 0) {
    uVar4 = 0;
    do {
      if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) <= uVar4) {
LAB_10a4fc40c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4fc410);
        (*pcVar1)();
      }
      plVar2 = param_2;
      func_0x0001098ac018(param_2,&UNK_10e4c8fa1,0x27,*(long *)(param_1 + 8) + uVar4,2,1);
      if ((ulong)(lStack_98 - lStack_a0 >> 2) <= uVar4) goto LAB_10a4fc40c;
      *(int *)(lStack_a0 + uVar4 * 4) = (int)plVar2;
      uVar4 = uVar4 + 1;
    } while (lVar3 >> 2 != uVar4);
  }
  pcStack_88 = FUN_10a4fc464;
  appuStack_80[0] = &PTR_DAT_110be9bb8;
  func_0x0001098bb6d0(*param_2 + 0x18,&pcStack_88,&lStack_a0);
  (*(code *)*appuStack_80[0])(appuStack_80);
  lVar3 = lStack_a0;
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*appuStack_80[0])(appuStack_80);
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  __Unwind_Resume(lVar3);
  FUN_109ffde64(&DAT_10f62a4d8);
  return;
}



/* Entry: 10a4fc450; end: 10a4fc463;  */

void FUN_10a4fc450(void)

{
  FUN_109ffde64(&DAT_10f62a4d8);
  return;
}



/* Entry: 10a4fc464; end: 10a4fc49f;  */

void FUN_10a4fc464(void)

{
  return;
}



/* Entry: 10a4fc4a0; end: 10a4fc557;  */

void FUN_10a4fc4a0(ulong *param_1,long param_2,long *param_3,undefined4 param_4,undefined4 *param_5,
                  long param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lStack_50;
  long *plStack_48;
  
  plVar3 = &lStack_50;
  if (param_6 != 0) {
    lStack_50 = param_2;
    plStack_48 = param_3;
    func_0x0001098af634(&lStack_50,*param_5);
    if ((char)plVar3[3] != '\x01') {
      return;
    }
    FUN_10a26d738(param_3,param_4);
    puVar1 = (undefined8 *)0x113302318;
    if (*param_3 != -1) {
      puVar1 = (undefined8 *)(param_2 + *param_3);
    }
    if ((*(byte *)(plVar3 + 3) & 1) != 0) {
      if (*param_1 < (ulong)(plVar3[1] - *plVar3 >> 3)) {
        puVar4 = *(undefined8 **)(*plVar3 + *param_1 * 8);
        uVar5 = 0;
        if (puVar4 != (undefined8 *)0x0) {
          uVar5 = *puVar4;
        }
        *puVar1 = uVar5;
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a4fc558);
  (*pcVar2)();
}



/* Entry: 10a4fc558; end: 10a4fc57b;  */

void FUN_10a4fc558(void)

{
  return;
}



/* Entry: 10a4fc57c; end: 10a4fc677;  */

undefined8 ** FUN_10a4fc57c(undefined8 **param_1,undefined8 *param_2,long *param_3)

{
  undefined8 **ppuVar1;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = *param_2;
  (**(code **)(param_2[1] + 0x10))(apuStack_70);
  lStack_88 = param_3[1];
  lStack_90 = *param_3;
  lStack_80 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  func_0x0001098aeecc(param_1,&uStack_78,&UNK_110be9c08,&lStack_90);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  ppuVar1 = apuStack_70;
  (*(code *)*apuStack_70[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  (*(code *)*apuStack_70[0])(apuStack_70);
  __Unwind_Resume();
  *ppuVar1 = (undefined8 *)0x0;
  ppuVar1[1] = (undefined8 *)0x0;
  return ppuVar1;
}



/* Entry: 10a4fc678; end: 10a4fc693;  */

void FUN_10a4fc678(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a4fc694; end: 10a4fc6b3;  */

void FUN_10a4fc694(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110be9c38;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4fc6b4; end: 10a4fc707;  */

void FUN_10a4fc6b4(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x48);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x30);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a4fc708; end: 10a4fc70b;  */

void FUN_10a4fc708(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4fc70c; end: 10a4fc7b3;  */

long FUN_10a4fc70c(long *param_1,undefined4 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if ((bRam0000000113302558 & 1) == 0) {
    iVar1 = 0x13302558;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(FUN_10a4c5f4c,0x113302548,0x100000000);
      ___cxa_guard_release(0x113302558);
    }
  }
  plVar2 = (long *)param_1[1];
  FUN_10a26d738(plVar2,param_2);
  if (*plVar2 == -1) {
    lVar3 = 0x113302548;
  }
  else {
    lVar3 = *param_1 + *plVar2;
  }
  return lVar3;
}



/* Entry: 10a4fc7b4; end: 10a4fc7c3;  */

void FUN_10a4fc7b4(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  long in_x3;
  undefined8 *extraout_x8;
  
  func_0x000105277f8c();
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_110be9cc8;
  puVar3[2] = 0;
  puVar3[3] = 0;
  lVar1 = *(long *)(in_x3 + 0x48) - *(long *)(in_x3 + 0x40);
  if (lVar1 != 0) {
    if (lVar1 < 0) {
      FUN_10a4fcb78();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a4fc858);
      (*pcVar2)();
    }
    lVar4 = lVar1;
    __Znwm();
    puVar3[1] = lVar4;
    puVar3[3] = lVar4 + lVar1;
    _memcpy();
    puVar3[2] = lVar4 + lVar1;
  }
  *extraout_x8 = puVar3;
  return;
}



/* Entry: 10a4fc7c4; end: 10a4fc87b;  */

void FUN_10a4fc7c4(undefined8 *param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_110be9cc8;
  puVar3[2] = 0;
  puVar3[3] = 0;
  lVar1 = *(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40);
  if (lVar1 != 0) {
    if (lVar1 < 0) {
      FUN_10a4fcb78();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a4fc858);
      (*pcVar2)();
    }
    lVar4 = lVar1;
    __Znwm();
    puVar3[1] = lVar4;
    puVar3[3] = lVar4 + lVar1;
    _memcpy();
    puVar3[2] = lVar4 + lVar1;
  }
  *param_1 = puVar3;
  return;
}



/* Entry: 10a4fc87c; end: 10a4fc94f;  */

void FUN_10a4fc87c(long param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  
  puVar1 = *(undefined1 **)(param_1 + 0x48);
  if (puVar1 < *(undefined1 **)(param_1 + 0x50)) {
    puVar8 = puVar1 + 1;
    *puVar1 = *param_2;
LAB_10a4fc930:
    *(undefined1 **)(param_1 + 0x48) = puVar8;
    return;
  }
  lVar5 = *(long *)(param_1 + 0x40);
  lVar6 = (long)puVar1 - lVar5;
  uVar7 = lVar6 + 1;
  if (-1 < (long)uVar7) {
    uVar3 = (long)*(undefined1 **)(param_1 + 0x50) - lVar5;
    uVar4 = uVar3 * 2;
    if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
      uVar4 = uVar7;
    }
    if (0x3ffffffffffffffe < uVar3) {
      uVar4 = 0x7fffffffffffffff;
    }
    if (uVar4 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar4;
      __Znwm();
    }
    puVar8 = (undefined1 *)(uVar7 + lVar6) + 1;
    *(undefined1 *)(uVar7 + lVar6) = *param_2;
    _memcpy(uVar7,lVar5,lVar6);
    *(ulong *)(param_1 + 0x40) = uVar7;
    *(undefined1 **)(param_1 + 0x48) = puVar8;
    *(ulong *)(param_1 + 0x50) = uVar7 + uVar4;
    if (lVar5 != 0) {
      __ZdlPv(lVar5);
    }
    goto LAB_10a4fc930;
  }
  FUN_10a4fcb78();
  uVar7 = (ulong)(int)param_2;
  lVar5 = *(long *)(param_1 + 0x40);
  lVar6 = *(long *)(param_1 + 0x48);
  if (uVar7 + 1 != lVar6 - lVar5) {
    if ((lVar5 == lVar6) || ((ulong)(lVar6 - lVar5) <= uVar7)) goto LAB_10a4fc994;
    *(undefined1 *)(lVar5 + uVar7) = *(undefined1 *)(lVar6 + -1);
  }
  if (lVar5 != lVar6) {
    *(long *)(param_1 + 0x48) = lVar6 + -1;
    return;
  }
LAB_10a4fc994:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a4fc998);
  (*pcVar2)();
}



/* Entry: 10a4fc950; end: 10a4fc997;  */

void FUN_10a4fc950(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  
  uVar4 = (ulong)param_2;
  lVar1 = *(long *)(param_1 + 0x40);
  lVar2 = *(long *)(param_1 + 0x48);
  if (uVar4 + 1 != lVar2 - lVar1) {
    if ((lVar1 == lVar2) || ((ulong)(lVar2 - lVar1) <= uVar4)) goto LAB_10a4fc994;
    *(undefined1 *)(lVar1 + uVar4) = *(undefined1 *)(lVar2 + -1);
  }
  if (lVar1 != lVar2) {
    *(long *)(param_1 + 0x48) = lVar2 + -1;
    return;
  }
LAB_10a4fc994:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a4fc998);
  (*pcVar3)();
}



/* Entry: 10a4fc998; end: 10a4fca0f;  */

undefined8 * FUN_10a4fc998(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110be9cc8;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a4fca10; end: 10a4fcb77;  */

void FUN_10a4fca10(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lStack_a0;
  long lStack_98;
  code *pcStack_88;
  undefined **appuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a26d314(&lStack_a0,*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8));
  lVar3 = lStack_98 - lStack_a0;
  if (lVar3 != 0) {
    uVar4 = 0;
    do {
      if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) <= uVar4) {
LAB_10a4fcb34:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4fcb38);
        (*pcVar1)();
      }
      plVar2 = param_2;
      func_0x0001098ac018(param_2,&UNK_10e4c90b0,0x29,*(long *)(param_1 + 8) + uVar4,2,1);
      if ((ulong)(lStack_98 - lStack_a0 >> 2) <= uVar4) goto LAB_10a4fcb34;
      *(int *)(lStack_a0 + uVar4 * 4) = (int)plVar2;
      uVar4 = uVar4 + 1;
    } while (lVar3 >> 2 != uVar4);
  }
  pcStack_88 = FUN_10a4fcb8c;
  appuStack_80[0] = &PTR_DAT_110be9cf8;
  func_0x0001098bb6d0(*param_2 + 0x18,&pcStack_88,&lStack_a0);
  (*(code *)*appuStack_80[0])(appuStack_80);
  lVar3 = lStack_a0;
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*appuStack_80[0])(appuStack_80);
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  __Unwind_Resume(lVar3);
  FUN_109ffde64(&DAT_10f62a4d8);
  return;
}



/* Entry: 10a4fcb78; end: 10a4fcb8b;  */

void FUN_10a4fcb78(void)

{
  FUN_109ffde64(&DAT_10f62a4d8);
  return;
}



/* Entry: 10a4fcb8c; end: 10a4fcbc7;  */

void FUN_10a4fcb8c(void)

{
  return;
}



/* Entry: 10a4fcbc8; end: 10a4fcc7f;  */

void FUN_10a4fcbc8(ulong *param_1,long param_2,long *param_3,undefined4 param_4,undefined4 *param_5,
                  long param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lStack_50;
  long *plStack_48;
  
  plVar3 = &lStack_50;
  if (param_6 != 0) {
    lStack_50 = param_2;
    plStack_48 = param_3;
    func_0x0001098af634(&lStack_50,*param_5);
    if ((char)plVar3[3] != '\x01') {
      return;
    }
    FUN_10a26d738(param_3,param_4);
    puVar1 = (undefined8 *)0x113302560;
    if (*param_3 != -1) {
      puVar1 = (undefined8 *)(param_2 + *param_3);
    }
    if ((*(byte *)(plVar3 + 3) & 1) != 0) {
      if (*param_1 < (ulong)(plVar3[1] - *plVar3 >> 3)) {
        puVar4 = *(undefined8 **)(*plVar3 + *param_1 * 8);
        uVar5 = 0;
        if (puVar4 != (undefined8 *)0x0) {
          uVar5 = *puVar4;
        }
        *puVar1 = uVar5;
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a4fcc80);
  (*pcVar2)();
}



/* Entry: 10a4fcc80; end: 10a4fcca3;  */

void FUN_10a4fcc80(void)

{
  return;
}



/* Entry: 10a4fcca4; end: 10a4fcd9f;  */

undefined8 ** FUN_10a4fcca4(undefined8 **param_1,undefined8 *param_2,long *param_3)

{
  undefined8 **ppuVar1;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = *param_2;
  (**(code **)(param_2[1] + 0x10))(apuStack_70);
  lStack_88 = param_3[1];
  lStack_90 = *param_3;
  lStack_80 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  func_0x0001098aeecc(param_1,&uStack_78,&UNK_110bef760,&lStack_90);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  ppuVar1 = apuStack_70;
  (*(code *)*apuStack_70[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  (*(code *)*apuStack_70[0])(apuStack_70);
  __Unwind_Resume();
  *ppuVar1 = (undefined8 *)0x0;
  return ppuVar1;
}



/* Entry: 10a4fcda0; end: 10a4fcdbb;  */

void FUN_10a4fcda0(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10a4fcdbc; end: 10a4fce63;  */

long FUN_10a4fcdbc(long *param_1,undefined4 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if ((bRam0000000113302588 & 1) == 0) {
    iVar1 = 0x13302588;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x10a4c5ee4,0x113302580,0x100000000);
      ___cxa_guard_release(0x113302588);
    }
  }
  plVar2 = (long *)param_1[1];
  FUN_10a26d738(plVar2,param_2);
  if (*plVar2 == -1) {
    lVar3 = 0x113302580;
  }
  else {
    lVar3 = *param_1 + *plVar2;
  }
  return lVar3;
}



/* Entry: 10a4fce64; end: 10a4fce73;  */

undefined8 * FUN_10a4fce64(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puStack_88;
  long *plStack_80;
  undefined1 uStack_71;
  
  func_0x000105277f8c();
  *(undefined1 *)(param_4 + 1) = *(undefined1 *)(param_2 + 8);
  *param_4 = &PTR_FUN_110bef718;
  puVar10 = param_4 + 2;
  param_4[3] = 0;
  *puVar10 = 0;
  param_4[5] = 0;
  param_4[4] = 0;
  *(undefined4 *)(param_4 + 6) = 0x3f800000;
  FUN_10a4f204c(puVar10,(long)(float)*(ulong *)(param_2 + 0x28));
  for (puVar11 = *(undefined8 **)(param_2 + 0x20); puVar11 != (undefined8 *)0x0;
      puVar11 = (undefined8 *)*puVar11) {
    puVar1 = puVar11 + 2;
    puVar7 = puVar10;
    puStack_88 = puVar1;
    FUN_10a502118(puVar10,puVar1,&UNK_10dd5b8f9,&puStack_88,&uStack_71);
    FUN_10a4d40d8(puVar7 + 0x10,(long)(puVar11[0x11] - puVar11[0x10]) >> 4);
    puVar3 = (undefined8 *)puVar11[0x11];
    for (puVar8 = (undefined8 *)puVar11[0x10]; puVar8 != puVar3; puVar8 = puVar8 + 2) {
      (**(code **)(*(long *)*puVar8 + 0x48))(&puStack_88);
      FUN_10a4d80ac(puVar7 + 0x10,&puStack_88);
      plVar6 = plStack_80;
      if (plStack_80 != (long *)0x0) {
        plVar2 = plStack_80 + 1;
        do {
          lVar9 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_80 + 0x10))(plStack_80);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
    }
    puVar8 = puVar10;
    puStack_88 = puVar1;
    FUN_10a502118(puVar10,puVar1,&UNK_10dd5b8f9,&puStack_88,&uStack_71);
    if (puVar11 != puVar8) {
      *(undefined4 *)(puVar8 + 0x1c) = *(undefined4 *)(puVar11 + 0x1c);
      FUN_10a4fd060(puVar8 + 0x18,puVar11[0x1a],0);
    }
    puVar8 = puVar10;
    puStack_88 = puVar1;
    FUN_10a502118(puVar10,puVar1,&UNK_10dd5b8f9,&puStack_88,&uStack_71);
    if (puVar11 != puVar8) {
      *(undefined4 *)(puVar8 + 0x17) = *(undefined4 *)(puVar11 + 0x17);
      FUN_10a4fd798(puVar8 + 0x13,puVar11[0x15],0);
    }
  }
  return param_4;
}



/* Entry: 10a4fce74; end: 10a4fd05f;  */

undefined8 * FUN_10a4fce74(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puStack_78;
  long *plStack_70;
  undefined1 uStack_61;
  
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  *param_1 = &PTR_FUN_110bef718;
  puVar10 = param_1 + 2;
  param_1[3] = 0;
  *puVar10 = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  FUN_10a4f204c(puVar10,(long)(float)*(ulong *)(param_2 + 0x28));
  for (puVar11 = *(undefined8 **)(param_2 + 0x20); puVar11 != (undefined8 *)0x0;
      puVar11 = (undefined8 *)*puVar11) {
    puVar1 = puVar11 + 2;
    puVar7 = puVar10;
    puStack_78 = puVar1;
    FUN_10a502118(puVar10,puVar1,&UNK_10dd5b8f9,&puStack_78,&uStack_61);
    FUN_10a4d40d8(puVar7 + 0x10,(long)(puVar11[0x11] - puVar11[0x10]) >> 4);
    puVar3 = (undefined8 *)puVar11[0x11];
    for (puVar8 = (undefined8 *)puVar11[0x10]; puVar8 != puVar3; puVar8 = puVar8 + 2) {
      (**(code **)(*(long *)*puVar8 + 0x48))(&puStack_78);
      FUN_10a4d80ac(puVar7 + 0x10,&puStack_78);
      plVar6 = plStack_70;
      if (plStack_70 != (long *)0x0) {
        plVar2 = plStack_70 + 1;
        do {
          lVar9 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_70 + 0x10))(plStack_70);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
    }
    puVar8 = puVar10;
    puStack_78 = puVar1;
    FUN_10a502118(puVar10,puVar1,&UNK_10dd5b8f9,&puStack_78,&uStack_61);
    if (puVar11 != puVar8) {
      *(undefined4 *)(puVar8 + 0x1c) = *(undefined4 *)(puVar11 + 0x1c);
      FUN_10a4fd060(puVar8 + 0x18,puVar11[0x1a],0);
    }
    puVar8 = puVar10;
    puStack_78 = puVar1;
    FUN_10a502118(puVar10,puVar1,&UNK_10dd5b8f9,&puStack_78,&uStack_61);
    if (puVar11 != puVar8) {
      *(undefined4 *)(puVar8 + 0x17) = *(undefined4 *)(puVar11 + 0x17);
      FUN_10a4fd798(puVar8 + 0x13,puVar11[0x15],0);
    }
  }
  return param_1;
}



/* Entry: 10a4fd060; end: 10a4fd177;  */

void FUN_10a4fd060(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(*param_1 + lVar2 * 8) = 0;
      lVar2 = lVar2 + 1;
    } while (lVar1 != lVar2);
    plVar3 = (long *)param_1[2];
    param_1[2] = 0;
    param_1[3] = 0;
    plVar4 = plVar3;
    if (plVar3 != (long *)0x0 && param_2 != param_3) {
      do {
        plVar4[2] = param_2[2];
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (plVar4 + 3,param_2 + 3);
        lVar2 = param_2[7];
        lVar1 = param_2[6];
        lVar6 = param_2[9];
        lVar5 = param_2[8];
        *(undefined8 *)((long)plVar4 + 0x4d) = *(undefined8 *)((long)param_2 + 0x4d);
        plVar4[7] = lVar2;
        plVar4[6] = lVar1;
        plVar4[9] = lVar6;
        plVar4[8] = lVar5;
        *(int *)(plVar4 + 0xb) = (int)param_2[0xb];
        plVar3 = (long *)*plVar4;
        FUN_10a4fd178(param_1,plVar4);
        param_2 = (long *)*param_2;
        if (plVar3 == (long *)0x0) break;
        plVar4 = plVar3;
      } while (param_2 != param_3);
    }
    func_0x00010a4f1a60(param_1,plVar3);
  }
  for (; param_2 != param_3; param_2 = (long *)*param_2) {
    FUN_10a4fd644(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 10a4fd178; end: 10a4fd1c7;  */

long FUN_10a4fd178(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  FUN_10a22f7e8(param_1,param_2 + 0x10);
  *(undefined8 *)(param_2 + 8) = uVar1;
  uVar2 = param_1;
  FUN_10a4fd1c8(param_1,uVar1,param_2 + 0x10);
  FUN_10a4fd31c(param_1,param_2,uVar2);
  return param_2;
}



/* Entry: 10a4fd1c8; end: 10a4fd31b;  */

long * FUN_10a4fd1c8(long *param_1,ulong param_2,undefined8 param_3)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  
  uVar9 = param_1[1];
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar9) {
      uVar4 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar4 = uVar4 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar9) {
      uVar4 = uVar9;
    }
    FUN_10a4fd3ec(param_1,uVar4);
    uVar9 = param_1[1];
  }
  uVar4 = uVar9 - 1;
  if ((uVar9 & uVar4) == 0) {
    uVar10 = uVar4 & param_2;
  }
  else {
    uVar10 = param_2;
    if (uVar9 <= param_2) {
      uVar10 = 0;
      if (uVar9 != 0) {
        uVar10 = param_2 / uVar9;
      }
      uVar10 = param_2 - uVar10 * uVar9;
    }
  }
  plVar8 = *(long **)(*param_1 + uVar10 * 8);
  if ((plVar8 != (long *)0x0) && (lVar5 = *plVar8, lVar5 != 0)) {
    uVar11 = 0;
    bVar1 = 0;
    do {
      uVar6 = *(ulong *)(lVar5 + 8);
      if ((uVar9 & uVar4) == 0) {
        uVar7 = uVar6 & uVar4;
      }
      else {
        uVar7 = uVar6;
        if (uVar9 <= uVar6) {
          uVar7 = 0;
          if (uVar9 != 0) {
            uVar7 = uVar6 / uVar9;
          }
          uVar7 = uVar6 - uVar7 * uVar9;
        }
      }
      if (uVar7 != uVar10) {
        return plVar8;
      }
      if (uVar6 == param_2) {
        lVar5 = lVar5 + 0x10;
        FUN_10a22f8c4(lVar5,param_3);
        uVar3 = (uint)lVar5;
      }
      else {
        uVar3 = 0;
      }
      bVar2 = uVar3 != uVar11;
      if ((bool)(bVar1 & bVar2)) {
        return plVar8;
      }
      uVar11 = uVar11 | bVar2;
      bVar1 = bVar1 | bVar2;
      plVar8 = (long *)*plVar8;
      lVar5 = *plVar8;
    } while (lVar5 != 0);
  }
  return plVar8;
}



/* Entry: 10a4fd31c; end: 10a4fd3eb;  */

void FUN_10a4fd31c(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  uVar3 = uVar1 - 1;
  if ((uVar1 & uVar3) == 0) {
    uVar2 = uVar3 & uVar2;
    if (param_3 != (long *)0x0) goto LAB_10a4fd344;
LAB_10a4fd380:
    plVar5 = param_1 + 2;
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    *(long **)(*param_1 + uVar2 * 8) = plVar5;
    if (*param_2 == 0) goto LAB_10a4fd3dc;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar2 * uVar1;
    }
  }
  else {
    if (uVar1 <= uVar2) {
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = uVar2 / uVar1;
      }
      uVar2 = uVar2 - uVar4 * uVar1;
    }
    if (param_3 == (long *)0x0) goto LAB_10a4fd380;
LAB_10a4fd344:
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 == 0) goto LAB_10a4fd3dc;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar3 * uVar1;
    }
    if (uVar4 == uVar2) goto LAB_10a4fd3dc;
  }
  *(long **)(*param_1 + uVar4 * 8) = param_2;
LAB_10a4fd3dc:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a4fd3ec; end: 10a4fd4bb;  */

void FUN_10a4fd3ec(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 auStack_88 [3];
  ulong uStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar10) {
        uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
      }
      if (param_2 <= uVar10) {
        param_2 = uVar10;
      }
      if (param_2 < uVar7) goto LAB_10a4fd434;
    }
    return;
  }
LAB_10a4fd434:
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
      plVar8 = param_1;
      func_0x000109ffded8();
      pcStack_58 = FUN_10a4fd644;
      uStack_70 = param_2;
      plStack_68 = param_1;
      puStack_60 = &stack0xfffffffffffffff0;
      FUN_10a4fd6a0(auStack_88);
      FUN_10a4fd178(plVar8,auStack_88[0]);
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar7 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
      uVar7 = uVar7 + 1;
    } while (param_2 != uVar7);
    plVar8 = (long *)param_1[2];
    if (plVar8 != (long *)0x0) {
      uVar7 = plVar8[1];
      uVar10 = param_2 - 1;
      if ((param_2 & uVar10) == 0) {
        uVar7 = uVar7 & uVar10;
      }
      else if (param_2 <= uVar7) {
        uVar11 = 0;
        if (param_2 != 0) {
          uVar11 = uVar7 / param_2;
        }
        uVar7 = uVar7 - uVar11 * param_2;
      }
      *(long **)(*param_1 + uVar7 * 8) = param_1 + 2;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        uVar11 = plVar8[1];
        if ((param_2 & uVar10) == 0) {
          uVar11 = uVar11 & uVar10;
        }
        else if (param_2 <= uVar11) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar11 / param_2;
          }
          uVar11 = uVar11 - uVar1 * param_2;
        }
        if (uVar11 != uVar7) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar11 * 8) == 0) {
            *(long **)(lVar2 + uVar11 * 8) = plVar9;
            uVar7 = uVar11;
          }
          else {
            lVar3 = *plVar8;
            plVar6 = plVar8;
            if (lVar3 == 0) {
              plVar5 = (long *)0x0;
            }
            else {
              do {
                plVar4 = plVar8 + 2;
                FUN_10a22f8c4(plVar4,lVar3 + 0x10);
                plVar5 = (long *)*plVar6;
                if ((int)plVar4 == 0) goto LAB_10a4fd620;
                lVar3 = *plVar5;
                plVar6 = plVar5;
              } while (lVar3 != 0);
              plVar5 = (long *)0x0;
LAB_10a4fd620:
              lVar2 = *param_1;
            }
            *plVar9 = (long)plVar5;
            *plVar6 = **(long **)(lVar2 + uVar11 * 8);
            **(undefined8 **)(lVar2 + uVar11 * 8) = plVar8;
            plVar8 = plVar9;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10a4fd4bc; end: 10a4fd643;  */

void FUN_10a4fd4bc(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 auStack_88 [3];
  ulong uStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
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
      plVar8 = param_1;
      func_0x000109ffded8();
      pcStack_58 = FUN_10a4fd644;
      uStack_70 = param_2;
      plStack_68 = param_1;
      puStack_60 = &stack0xfffffffffffffff0;
      FUN_10a4fd6a0(auStack_88);
      FUN_10a4fd178(plVar8,auStack_88[0]);
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar5 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
    plVar8 = (long *)param_1[2];
    if (plVar8 != (long *)0x0) {
      uVar5 = plVar8[1];
      uVar10 = param_2 - 1;
      if ((param_2 & uVar10) == 0) {
        uVar5 = uVar5 & uVar10;
      }
      else if (param_2 <= uVar5) {
        uVar11 = 0;
        if (param_2 != 0) {
          uVar11 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar11 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        uVar11 = plVar8[1];
        if ((param_2 & uVar10) == 0) {
          uVar11 = uVar11 & uVar10;
        }
        else if (param_2 <= uVar11) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar11 / param_2;
          }
          uVar11 = uVar11 - uVar1 * param_2;
        }
        if (uVar11 != uVar5) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar11 * 8) == 0) {
            *(long **)(lVar2 + uVar11 * 8) = plVar9;
            uVar5 = uVar11;
          }
          else {
            lVar3 = *plVar8;
            plVar7 = plVar8;
            if (lVar3 == 0) {
              plVar6 = (long *)0x0;
            }
            else {
              do {
                plVar4 = plVar8 + 2;
                FUN_10a22f8c4(plVar4,lVar3 + 0x10);
                plVar6 = (long *)*plVar7;
                if ((int)plVar4 == 0) goto LAB_10a4fd620;
                lVar3 = *plVar6;
                plVar7 = plVar6;
              } while (lVar3 != 0);
              plVar6 = (long *)0x0;
LAB_10a4fd620:
              lVar2 = *param_1;
            }
            *plVar9 = (long)plVar6;
            *plVar7 = **(long **)(lVar2 + uVar11 * 8);
            **(undefined8 **)(lVar2 + uVar11 * 8) = plVar8;
            plVar8 = plVar9;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10a4fd644; end: 10a4fd69f;  */

void FUN_10a4fd644(undefined8 param_1)

{
  undefined8 auStack_38 [3];
  
  FUN_10a4fd6a0(auStack_38);
  FUN_10a4fd178(param_1,auStack_38[0]);
  return;
}



/* Entry: 10a4fd6a0; end: 10a4fd72f;  */

void FUN_10a4fd6a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x60;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_10a4fd730(puVar1 + 2,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  FUN_10a22f7e8(param_2,puVar1 + 2);
  puVar1[1] = param_2;
  return;
}



/* Entry: 10a4fd730; end: 10a4fd797;  */

undefined8 * FUN_10a4fd730(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    func_0x000107c3192c(param_1 + 1,param_2[1],param_2[2]);
  }
  else {
    uVar2 = param_2[2];
    uVar1 = param_2[1];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[1] = uVar1;
  }
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  param_1[8] = param_2[8];
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  return param_1;
}



/* Entry: 10a4fd798; end: 10a4fd8a7;  */

void FUN_10a4fd798(long *param_1,long *param_2,undefined8 *param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      *(undefined8 *)(*param_1 + lVar3 * 8) = 0;
      lVar3 = lVar3 + 1;
    } while (lVar2 != lVar3);
    plVar4 = (long *)param_1[2];
    param_1[2] = 0;
    param_1[3] = 0;
    while (plVar4 != (long *)0x0) {
      if (param_2 == param_3) goto LAB_10a4fd830;
      bVar1 = *(byte *)(param_2 + 2);
      *(byte *)(plVar4 + 2) = bVar1;
      uVar6 = *(undefined8 *)((long)param_2 + 0x14);
      *(undefined8 *)((long)plVar4 + 0x1c) = *(undefined8 *)((long)param_2 + 0x1c);
      *(undefined8 *)((long)plVar4 + 0x14) = uVar6;
      lVar2 = *plVar4;
      plVar4[1] = (ulong)bVar1;
      plVar5 = param_1;
      FUN_10a4fd8a8(param_1);
      FUN_10a4fd9f0(param_1,plVar4,plVar5);
      param_2 = (long *)*param_2;
      plVar4 = (long *)lVar2;
    }
  }
LAB_10a4fd858:
  for (; param_2 != param_3; param_2 = (long *)*param_2) {
    FUN_10a4fdcdc(param_1,param_2 + 2);
  }
  return;
LAB_10a4fd830:
  do {
    plVar5 = (long *)*plVar4;
    __ZdlPv(plVar4);
    plVar4 = plVar5;
  } while (plVar5 != (long *)0x0);
  goto LAB_10a4fd858;
}



/* Entry: 10a4fd8a8; end: 10a4fd9ef;  */

long * FUN_10a4fd8a8(long *param_1,ulong param_2,char *param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  bool bVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar5 = param_1[1];
  if ((uVar5 == 0) || (*(float *)(param_1 + 4) * (float)uVar5 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar5) {
      uVar6 = (ulong)((uVar5 & uVar5 - 1) != 0);
    }
    uVar6 = uVar6 | uVar5 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    FUN_10a4fdac0(param_1,uVar6);
    uVar5 = param_1[1];
  }
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar7 = uVar6 & param_2;
  }
  else {
    uVar7 = param_2;
    if (uVar5 <= param_2) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = param_2 / uVar5;
      }
      uVar7 = param_2 - uVar7 * uVar5;
    }
  }
  plVar8 = *(long **)(*param_1 + uVar7 * 8);
  if (plVar8 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    bVar9 = false;
    bVar1 = 0;
    do {
      plVar4 = plVar8;
      plVar8 = (long *)*plVar4;
      if (plVar8 == (long *)0x0) {
        return plVar4;
      }
      uVar10 = plVar8[1];
      if ((uVar5 & uVar6) == 0) {
        uVar11 = uVar10 & uVar6;
      }
      else {
        uVar11 = uVar10;
        if (uVar5 <= uVar10) {
          uVar11 = 0;
          if (uVar5 != 0) {
            uVar11 = uVar10 / uVar5;
          }
          uVar11 = uVar10 - uVar11 * uVar5;
        }
      }
      if (uVar11 != uVar7) {
        return plVar4;
      }
      if (uVar10 == param_2) {
        bVar2 = *(char *)(plVar8 + 2) == *param_3;
      }
      else {
        bVar2 = false;
      }
      bVar3 = bVar2 != bVar9;
      bVar2 = (bool)(bVar1 & bVar3);
      bVar9 = (bool)(bVar9 | bVar3);
      bVar1 = bVar1 | bVar3;
    } while (!bVar2);
  }
  return plVar4;
}


