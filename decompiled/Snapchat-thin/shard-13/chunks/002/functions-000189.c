/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a34e4fc; end: 10a34e5fb;  */

void FUN_10a34e4fc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_40;
  long lStack_38;
  long lStack_30;
  long *plStack_28;
  
  lStack_30 = 0;
  plStack_28 = (long *)0x0;
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_28 = plVar4;
    if (plVar4 != (long *)0x0) {
      lStack_30 = *(long *)(param_1 + 0x20);
      if (lStack_30 != 0) {
        FUN_10a0c3500(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x28));
      }
    }
  }
  lVar6 = *(long *)(param_1 + 0x30);
  lVar5 = *(long *)(lVar6 + 0x38);
  if (lVar5 != 0) {
    lStack_38 = *(long *)(lVar6 + 0x30);
    uStack_40 = *(undefined8 *)(lVar6 + 0x28);
    if (*(long *)(lVar6 + 0x30) != 0) {
      plVar1 = (long *)(*(long *)(lVar6 + 0x30) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a329ce8(lVar5,&uStack_40);
    if (lStack_38 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (plVar4 != (long *)0x0) {
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
  return;
}



/* Entry: 10a34e5fc; end: 10a34e627;  */

long FUN_10a34e5fc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
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



/* Entry: 10a34e628; end: 10a34e6ef;  */

void FUN_10a34e628(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110bc5a00;
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
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  return;
}



/* Entry: 10a34e6f0; end: 10a34e75f;  */

void FUN_10a34e6f0(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x98;
        FUN_10a34e760(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a34e760; end: 10a34e7b3;  */

void FUN_10a34e760(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
  if (-1 < *(char *)(param_1 + 0x27)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10a34e7b4; end: 10a34e7c7;  */

void FUN_10a34e7b4(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffdddc();
  if (param_4 != 0) {
    FUN_10a1871b8();
    lVar2 = *(long *)(puVar1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar2,param_2,param_3);
    }
    *(long *)(puVar1 + 8) = lVar2 + param_3;
  }
  return;
}



/* Entry: 10a34e7c8; end: 10a34e83f;  */

void FUN_10a34e7c8(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a1871b8(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10a34e840; end: 10a34ea2b;  */

long * FUN_10a34e840(long *param_1)

{
  long lVar1;
  
  func_0x00010a34e878(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a34ea2c; end: 10a34ea5f;  */

void FUN_10a34ea2c(void)

{
  return;
}



/* Entry: 10a34ea60; end: 10a34eacf;  */

undefined8 FUN_10a34ea60(undefined4 *param_1,long param_2)

{
  FUN_10a002568(*(undefined8 *)(param_2 + 0x10),&UNK_10f650fe1,2);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*param_1);
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(param_1[1]);
  FUN_10a002568();
  return 0;
}



/* Entry: 10a34ead0; end: 10a34eb03;  */

void FUN_10a34ead0(void)

{
  return;
}



/* Entry: 10a34eb04; end: 10a34ebaf;  */

undefined8 FUN_10a34eb04(undefined4 *param_1,undefined4 *param_2,long param_3)

{
  FUN_10a002568(*(undefined8 *)(param_3 + 0x10),&UNK_10f650fe4,2);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*param_1);
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(param_1[1]);
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*param_2);
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(param_2[1]);
  FUN_10a002568();
  return 0;
}



/* Entry: 10a34ebb0; end: 10a34ebe3;  */

void FUN_10a34ebb0(void)

{
  return;
}



/* Entry: 10a34ebe4; end: 10a34ecc3;  */

undefined8 FUN_10a34ebe4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,long param_4)

{
  FUN_10a002568(*(undefined8 *)(param_4 + 0x10),&UNK_10f650fe7,2);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*param_1);
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(param_1[1]);
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*param_2);
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(param_2[1]);
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*param_3);
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(param_3[1]);
  FUN_10a002568();
  return 0;
}



/* Entry: 10a34ecc4; end: 10a34ecf7;  */

void FUN_10a34ecc4(void)

{
  return;
}



/* Entry: 10a34ecf8; end: 10a34ee03;  */

void FUN_10a34ecf8(long *param_1,undefined8 *param_2)

{
  float fStack_18;
  float fStack_14;
  
  fStack_18 = (float)*param_1 / 64.0;
  fStack_14 = (float)param_1[1] / 64.0;
  (*(code *)*param_2)(&fStack_18);
  return;
}



/* Entry: 10a34ee04; end: 10a34ee73;  */

void FUN_10a34ee04(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x58;
        FUN_10a34ee74(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a34ee74; end: 10a34ef07;  */

void FUN_10a34ee74(long *param_1)

{
  long *plStack_28;
  
  plStack_28 = param_1 + 8;
  FUN_10a34ef08(&plStack_28);
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    _free();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    _free();
  }
  return;
}



/* Entry: 10a34ef08; end: 10a34ef77;  */

void FUN_10a34ef08(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x40;
        FUN_10a34ef78(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a34ef78; end: 10a34efbb;  */

void FUN_10a34ef78(long *param_1)

{
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    _free();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)();
    return;
  }
  return;
}



/* Entry: 10a34efbc; end: 10a34efcb;  */

void FUN_10a34efbc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc5b10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a34efcc; end: 10a34efeb;  */

void FUN_10a34efcc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc5b10;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a34efec; end: 10a34effb;  */

void FUN_10a34efec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a34eff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a34effc; end: 10a34f183;  */

undefined8 * FUN_10a34effc(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = &UNK_10e52b660;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) & 0xfe00;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[4] = &PTR_FUN_110bc81c0;
  param_1[0x19] = &UNK_10e52b660;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = &UNK_10e52b660;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(ushort *)((long)param_1 + 0x109) = *(ushort *)((long)param_1 + 0x109) & 0xfc00;
  param_1[0x2c] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  *param_1 = &PTR_FUN_110bc8118;
  param_1[1] = &PTR_FUN_110bc8170;
  param_1[0x15] = 0;
  param_1[0x16] = &PTR_FUN_110bc81f0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 0x2d,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[0x2f] = param_2[2];
    param_1[0x2e] = uVar2;
    param_1[0x2d] = uVar1;
  }
  uVar1 = param_2[3];
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x30] = uVar1;
  if (sRam0000000113301c26 == -1) {
    sRam0000000113301c26 = 0x188;
  }
  param_1[0x33] = 0x100000000;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x34] = 0;
  *(undefined8 *)((long)param_1 + 0x1b6) = 0;
  *(undefined2 *)((long)param_1 + 0x1be) = 1000;
  if (sRam0000000113301c28 == -1) {
    sRam0000000113301c28 = 0x198;
  }
  *(undefined2 *)(param_1 + 0x38) = param_3;
  return param_1;
}



/* Entry: 10a34f184; end: 10a34f28b;  */

undefined8 * FUN_10a34f184(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc8118;
  param_1[1] = &PTR_FUN_110bc8170;
  param_1[4] = &PTR_FUN_110bc81c0;
  param_1[0x16] = &PTR_FUN_110bc81f0;
  FUN_10a34f6a8(param_1 + 0x31);
  if (*(char *)((long)param_1 + 0x17f) < '\0') {
    __ZdlPv(param_1[0x2d]);
  }
  param_1[4] = &PTR_FUN_110bc82a0;
  param_1[0x16] = &PTR_DAT_110bc82d0;
  FUN_10a1c0a9c(param_1 + 4);
  if (param_1[3] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a34f28c; end: 10a34f2f3;  */

undefined8 FUN_10a34f28c(long param_1)

{
  if (*(long *)(param_1 + 0x188) != 0) {
    return *(undefined8 *)(*(long *)(param_1 + 0x188) + 0x268);
  }
  return 0;
}



/* Entry: 10a34f2f4; end: 10a34f37b;  */

void FUN_10a34f2f4(undefined8 *param_1)

{
  param_1[-1] = &PTR_FUN_110bc8118;
  *param_1 = &PTR_FUN_110bc8170;
  param_1[3] = &PTR_FUN_110bc81c0;
  param_1[0x15] = &PTR_FUN_110bc81f0;
  FUN_10a34f6a8(param_1 + 0x30);
  if (*(char *)((long)param_1 + 0x177) < '\0') {
    __ZdlPv(param_1[0x2c]);
  }
  param_1[3] = &PTR_FUN_110bc82a0;
  param_1[0x15] = &PTR_DAT_110bc82d0;
  FUN_10a1c0a9c(param_1 + 3);
  if (param_1[2] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a34f37c; end: 10a34f40f;  */

void FUN_10a34f37c(undefined8 *param_1)

{
  param_1[-1] = &PTR_FUN_110bc8118;
  *param_1 = &PTR_FUN_110bc8170;
  param_1[3] = &PTR_FUN_110bc81c0;
  param_1[0x15] = &PTR_FUN_110bc81f0;
  FUN_10a34f6a8(param_1 + 0x30);
  if (*(char *)((long)param_1 + 0x177) < '\0') {
    __ZdlPv(param_1[0x2c]);
  }
  param_1[3] = &PTR_FUN_110bc82a0;
  param_1[0x15] = &PTR_DAT_110bc82d0;
  FUN_10a1c0a9c(param_1 + 3);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -1);
  return;
}



/* Entry: 10a34f410; end: 10a34f473;  */

undefined8 FUN_10a34f410(long param_1)

{
  if (*(long *)(param_1 + 0x180) != 0) {
    return *(undefined8 *)(*(long *)(param_1 + 0x180) + 0x268);
  }
  return 0;
}



/* Entry: 10a34f474; end: 10a34f57f;  */

void FUN_10a34f474(undefined8 *param_1)

{
  param_1[-4] = &PTR_FUN_110bc8118;
  param_1[-3] = &PTR_FUN_110bc8170;
  *param_1 = &PTR_FUN_110bc81c0;
  param_1[0x12] = &PTR_FUN_110bc81f0;
  FUN_10a34f6a8(param_1 + 0x2d);
  if (*(char *)((long)param_1 + 0x15f) < '\0') {
    __ZdlPv(param_1[0x29]);
  }
  *param_1 = &PTR_FUN_110bc82a0;
  param_1[0x12] = &PTR_DAT_110bc82d0;
  FUN_10a1c0a9c(param_1);
  if (param_1[-1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a34f580; end: 10a34f583;  */

void FUN_10a34f580(void)

{
  return;
}



/* Entry: 10a34f584; end: 10a34f607;  */

void FUN_10a34f584(undefined8 *param_1)

{
  param_1[-0x16] = &PTR_FUN_110bc8118;
  param_1[-0x15] = &PTR_FUN_110bc8170;
  param_1[-0x12] = &PTR_FUN_110bc81c0;
  *param_1 = &PTR_FUN_110bc81f0;
  FUN_10a34f6a8(param_1 + 0x1b);
  if (*(char *)((long)param_1 + 0xcf) < '\0') {
    __ZdlPv(param_1[0x17]);
  }
  param_1[-0x12] = &PTR_FUN_110bc82a0;
  *param_1 = &PTR_DAT_110bc82d0;
  FUN_10a1c0a9c(param_1 + -0x12);
  if (param_1[-0x13] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a34f608; end: 10a34f697;  */

void FUN_10a34f608(undefined8 *param_1)

{
  param_1[-0x16] = &PTR_FUN_110bc8118;
  param_1[-0x15] = &PTR_FUN_110bc8170;
  param_1[-0x12] = &PTR_FUN_110bc81c0;
  *param_1 = &PTR_FUN_110bc81f0;
  FUN_10a34f6a8(param_1 + 0x1b);
  if (*(char *)((long)param_1 + 0xcf) < '\0') {
    __ZdlPv(param_1[0x17]);
  }
  param_1[-0x12] = &PTR_FUN_110bc82a0;
  *param_1 = &PTR_DAT_110bc82d0;
  FUN_10a1c0a9c(param_1 + -0x12);
  if (param_1[-0x13] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -0x16);
  return;
}



/* Entry: 10a34f698; end: 10a34f6a7;  */

void FUN_10a34f698(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a34f69c);
  (*pcVar1)();
}



/* Entry: 10a34f6a8; end: 10a34f6cf;  */

long FUN_10a34f6a8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a34f6d0();
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



/* Entry: 10a34f6d0; end: 10a34f707;  */

void FUN_10a34f6d0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar3 = *param_1;
  if (((lVar3 != 0) && (param_1[1] != 0)) && (0 < *(long *)(param_1[1] + 8))) {
    lStack_28 = (long)param_1 + (0x20 - (ulong)uRam0000000113301c26);
    lVar1 = lVar3 + 0x1e8;
    FUN_10a1be1cc(lVar1,&lStack_28);
    lStack_30 = lStack_28;
    lVar2 = lVar3 + 0x1c8;
    func_0x00010a1bde14(lVar2,&lStack_30);
    if (lVar1 != 0 || lVar2 != 0) {
      lStack_30 = lVar3 + 0x1b0;
      func_0x00010a1bd9e8(lStack_28 + 0x10,&lStack_30);
    }
    return;
  }
  return;
}



/* Entry: 10a34f708; end: 10a34f87f;  */

void FUN_10a34f708(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10a34f880; end: 10a34fa7f;  */

void FUN_10a34f880(long param_1)

{
  ushort uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
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
  undefined **ppuStack_48;
  
  uVar3 = 0;
  lVar4 = param_1 - (ulong)uRam0000000113301c26;
  if ((*(ushort *)(lVar4 + 0x109) >> 8 & 1) == 0) {
    if ((((*(long *)(lVar4 + 0xe0) != 0) || ((*(ushort *)(lVar4 + 0x109) >> 9 & 1) != 0)) ||
        (*(long *)(lVar4 + 0x100) != 0)) || ((*(ushort *)(lVar4 + 0x50) >> 8 & 1) == 0)) {
LAB_10a34f8e8:
      func_0x00010a1bd170();
      if ((uVar3 & 1) != 0) {
        return;
      }
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      ppuStack_48 = &PTR_DAT_110bc87d8;
      FUN_10a0dad0c((ulong)&uStack_a0 | 8,&ppuStack_48);
      plVar2 = (long *)((param_1 - (ulong)uRam0000000113301c26) + 0x20);
      (**(code **)(*plVar2 + 0x18))();
      lVar4 = param_1 - (ulong)uRam0000000113301c26;
      uVar1 = *(ushort *)(lVar4 + 0x50);
      if ((int)plVar2 == 0) {
        if ((uVar1 >> 8 & 1) == 0) {
          plVar2 = (long *)(lVar4 + 0x20);
          FUN_10a1bfe94(plVar2,&uStack_a0);
          if (((ulong)plVar2 & 1) == 0) {
            plVar2 = (long *)(param_1 - (ulong)uRam0000000113301c26);
            (**(code **)(*plVar2 + 0x40))(plVar2,&uStack_a0);
          }
        }
        else {
          FUN_10a1bd5e0();
          if (plVar2 != (long *)0x0) {
            FUN_10a1bd7d8();
          }
        }
      }
      else {
        if ((uVar1 >> 7 & 1) == 0) {
          *(undefined8 *)(lVar4 + 0x60) = uStack_a0;
          *(ushort *)(lVar4 + 0x50) = uVar1 | 0x80;
        }
        plVar2 = (long *)(lVar4 + 0x60);
        FUN_10a1bd398(plVar2,&uStack_a0);
      }
      uVar3 = (ulong)uRam0000000113301c26;
      if ((*(ushort *)((param_1 - uVar3) + 0x109) >> 8 & 1) != 0) {
        FUN_10a1bd5e0();
        uVar3 = (ulong)uRam0000000113301c26;
        if (plVar2 != (long *)0x0) {
          FUN_10a1bd648();
          uVar3 = (ulong)uRam0000000113301c26;
        }
      }
      FUN_10a1c054c((param_1 - uVar3) + 0xb0,&uStack_a0);
      return;
    }
    *(long *)(lVar4 + 0xc0) = *(long *)(lVar4 + 0xc0) + 1;
  }
  else if ((*(ushort *)(lVar4 + 0x50) >> 8 & 1) == 0) goto LAB_10a34f8e8;
  ppuVar6 = *(undefined ***)(lVar4 + 0x110);
  ppuVar5 = *(undefined ***)(lVar4 + 0x58);
  if ((ppuVar6 != &PTR_DAT_110bc87d8 || ppuVar5 != &PTR_DAT_110bc87d8) &&
     (FUN_10a1bd5e0(), param_1 != 0)) {
    if (ppuVar6 != &PTR_DAT_110bc87d8) {
      FUN_10a1bd648(param_1,lVar4 + 0xb0,&PTR_DAT_110bc87d8);
      *(undefined ***)(lVar4 + 0x110) = &PTR_DAT_110bc87d8;
    }
    if (ppuVar5 != &PTR_DAT_110bc87d8) {
      FUN_10a1bd7d8(param_1,lVar4 + 0x20,&PTR_DAT_110bc87d8);
      *(undefined ***)(lVar4 + 0x58) = &PTR_DAT_110bc87d8;
    }
  }
  return;
}



/* Entry: 10a34fa80; end: 10a34fcaf;  */

undefined ***** FUN_10a34fa80(long *param_1,long param_2)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  undefined *****pppppuVar7;
  undefined *****pppppuVar8;
  long lVar9;
  undefined *****pppppuVar10;
  long *extraout_x8;
  undefined ****ppppuVar11;
  undefined ****ppppuVar12;
  undefined ****ppppuVar13;
  undefined ****ppppuVar14;
  undefined1 auStack_158 [16];
  long lStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  code *pcStack_128;
  undefined ***pppuStack_120;
  long lStack_118;
  undefined1 uStack_110;
  long lStack_e8;
  code **ppcStack_e0;
  long lStack_d8;
  undefined ****ppppuStack_d0;
  undefined ****ppppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  code *pcStack_a8;
  undefined ****ppppuStack_a0;
  code *pcStack_98;
  undefined ****ppppuStack_90;
  code *pcStack_88;
  undefined ****ppppuStack_80;
  long lStack_78;
  undefined1 uStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_98 = (code *)0x0;
  ppppuStack_90 = (undefined ****)0x0;
  plVar5 = *(long **)(param_2 + 0x188);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x48))(&pcStack_88,plVar5,0,0);
    pcStack_98 = pcStack_88;
    ppppuStack_90 = ppppuStack_80;
  }
  ppppuVar12 = ppppuStack_90;
  pcVar4 = pcStack_98;
  lVar6 = 0x1c8;
  __Znwm();
  FUN_10a34effc();
  *param_1 = lVar6;
  lStack_78 = lVar6 + 0x20;
  uVar1 = *(ushort *)(lVar6 + 0x109);
  *(ushort *)(lVar6 + 0x109) = uVar1 & 0xff80 | uVar1 + 1 & 0x7f;
  *(ushort *)(lVar6 + 0x50) =
       *(ushort *)(lVar6 + 0x50) & 0xff80 | *(ushort *)(lVar6 + 0x50) + 1 & 0x7f;
  uStack_70 = 1;
  pcStack_88 = FUN_10a1d3648;
  ppppuStack_80 = (undefined ****)&PTR_FUN_110bad818;
  if ((undefined *****)ppppuVar12 != (undefined *****)0x0) {
    pppppuVar7 = (undefined *****)(ppppuVar12 + 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppppuVar7,0x10);
      if (bVar3) {
        *pppppuVar7 = (undefined ****)((long)*pppppuVar7 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pcStack_a8 = pcVar4;
  ppppuStack_a0 = ppppuVar12;
  func_0x00010a34f7b8(lVar6 + 0x188,&pcStack_a8);
  ppppuVar12 = ppppuStack_a0;
  if ((undefined *****)ppppuStack_a0 != (undefined *****)0x0) {
    pppppuVar7 = (undefined *****)(ppppuStack_a0 + 1);
    do {
      ppppuVar11 = *pppppuVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppppuVar7,0x10);
      if (bVar3) {
        *pppppuVar7 = (undefined ****)((long)ppppuVar11 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppppuVar11 == (undefined ****)0x0) {
      (*(code *)(*ppppuStack_a0)[2])(ppppuStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar12);
    }
  }
  lVar6 = *param_1;
  FUN_10a34fdec(lVar6 + 0x198,param_2 + 0x198);
  FUN_10a044790(&pcStack_88);
  pppppuVar7 = &ppppuStack_80;
  (*(code *)*ppppuStack_80)();
  ppppuVar12 = ppppuStack_90;
  if ((undefined *****)ppppuStack_90 != (undefined *****)0x0) {
    pppppuVar8 = (undefined *****)(ppppuStack_90 + 1);
    do {
      ppppuVar11 = *pppppuVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppppuVar8,0x10);
      if (bVar3) {
        *pppppuVar8 = (undefined ****)((long)ppppuVar11 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppppuVar11 == (undefined ****)0x0) {
      (*(code *)(*ppppuStack_90)[2])(ppppuStack_90);
      pppppuVar7 = (undefined *****)ppppuVar12;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    func_0x00010a05248c(&pcStack_98);
    pppppuVar8 = pppppuVar7;
    __Unwind_Resume();
    ppppuStack_c8 = ppppuVar12;
    pcStack_b8 = FUN_10a34fcb0;
    lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar9 = 0x1c8;
    ppcStack_e0 = &pcStack_88;
    lStack_d8 = lVar6;
    ppppuStack_d0 = (undefined ****)pppppuVar7;
    puStack_c0 = &stack0xfffffffffffffff0;
    __Znwm();
    FUN_10a34effc();
    *extraout_x8 = lVar9;
    lStack_118 = lVar9 + 0x20;
    uVar1 = *(ushort *)(lVar9 + 0x109);
    *(ushort *)(lVar9 + 0x109) = uVar1 & 0xff80 | uVar1 + 1 & 0x7f;
    *(ushort *)(lVar9 + 0x50) =
         *(ushort *)(lVar9 + 0x50) & 0xff80 | *(ushort *)(lVar9 + 0x50) + 1 & 0x7f;
    uStack_110 = 1;
    pcStack_128 = FUN_10a1d3648;
    pppuStack_120 = (undefined ***)&PTR_FUN_110bad818;
    FUN_10a350040(lVar9 + 0x188,pppppuVar8 + 0x31);
    pppppuVar8 = pppppuVar8 + 0x33;
    FUN_10a34fdec(lVar9 + 0x198);
    FUN_10a044790(&pcStack_128);
    pppppuVar7 = (undefined *****)&pppuStack_120;
    (*(code *)*pppuStack_120)();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
      ___stack_chk_fail();
      __ZdlPv(lVar9);
      __Unwind_Resume();
      pcStack_138 = FUN_10a34fdec;
      pppppuVar10 = pppppuVar7;
      lStack_148 = lVar9;
      ppuStack_140 = &puStack_c0;
      FUN_10a18ef08();
      if (((ulong)pppppuVar10 & 1) == 0) {
        ppppuVar11 = pppppuVar8[1];
        ppppuVar12 = *pppppuVar8;
        ppppuVar14 = pppppuVar8[3];
        ppppuVar13 = pppppuVar8[2];
        pppppuVar7[4] = pppppuVar8[4];
        pppppuVar7[1] = ppppuVar11;
        *pppppuVar7 = ppppuVar12;
        pppppuVar7[3] = ppppuVar14;
        pppppuVar7[2] = ppppuVar13;
        func_0x00010a1bd170(auStack_158);
        FUN_10a34fe40(pppppuVar7);
      }
      return pppppuVar7;
    }
    return pppppuVar7;
  }
  return pppppuVar7;
}



/* Entry: 10a34fcb0; end: 10a34fdeb;  */

undefined *** FUN_10a34fcb0(long *param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined1 auStack_a8 [8];
  long *plStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  undefined1 uStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0x1c8;
  __Znwm();
  FUN_10a34effc();
  *param_1 = lVar2;
  lStack_68 = lVar2 + 0x20;
  uVar1 = *(ushort *)(lVar2 + 0x109);
  *(ushort *)(lVar2 + 0x109) = uVar1 & 0xff80 | uVar1 + 1 & 0x7f;
  *(ushort *)(lVar2 + 0x50) =
       *(ushort *)(lVar2 + 0x50) & 0xff80 | *(ushort *)(lVar2 + 0x50) + 1 & 0x7f;
  uStack_60 = 1;
  pcStack_78 = FUN_10a1d3648;
  ppuStack_70 = &PTR_FUN_110bad818;
  FUN_10a350040(lVar2 + 0x188,param_2 + 0x188);
  puVar5 = (undefined8 *)(param_2 + 0x198);
  FUN_10a34fdec(lVar2 + 0x198);
  FUN_10a044790(&pcStack_78);
  pppuVar3 = &ppuStack_70;
  (*(code *)*ppuStack_70)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return pppuVar3;
  }
  ___stack_chk_fail();
  __ZdlPv(lVar2);
  __Unwind_Resume();
  pcStack_88 = FUN_10a34fdec;
  pppuVar4 = pppuVar3;
  plStack_a0 = param_1;
  lStack_98 = lVar2;
  puStack_90 = &stack0xfffffffffffffff0;
  FUN_10a18ef08();
  if (((ulong)pppuVar4 & 1) == 0) {
    ppuVar7 = (undefined **)puVar5[1];
    ppuVar6 = (undefined **)*puVar5;
    ppuVar9 = (undefined **)puVar5[3];
    ppuVar8 = (undefined **)puVar5[2];
    pppuVar3[4] = (undefined **)puVar5[4];
    pppuVar3[1] = ppuVar7;
    *pppuVar3 = ppuVar6;
    pppuVar3[3] = ppuVar9;
    pppuVar3[2] = ppuVar8;
    func_0x00010a1bd170(auStack_a8);
    FUN_10a34fe40(pppuVar3);
  }
  return pppuVar3;
}



/* Entry: 10a34fdec; end: 10a34fe3f;  */

undefined8 * FUN_10a34fdec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_28 [8];
  
  puVar1 = param_1;
  FUN_10a18ef08();
  if (((ulong)puVar1 & 1) == 0) {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    param_1[4] = param_2[4];
    param_1[1] = uVar3;
    *param_1 = uVar2;
    param_1[3] = uVar5;
    param_1[2] = uVar4;
    func_0x00010a1bd170(auStack_28);
    FUN_10a34fe40(param_1);
  }
  return param_1;
}



/* Entry: 10a34fe40; end: 10a35003f;  */

void FUN_10a34fe40(long param_1)

{
  ushort uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
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
  undefined **ppuStack_48;
  
  uVar3 = 0;
  lVar4 = param_1 - (ulong)uRam0000000113301c28;
  if ((*(ushort *)(lVar4 + 0x109) >> 8 & 1) == 0) {
    if ((((*(long *)(lVar4 + 0xe0) != 0) || ((*(ushort *)(lVar4 + 0x109) >> 9 & 1) != 0)) ||
        (*(long *)(lVar4 + 0x100) != 0)) || ((*(ushort *)(lVar4 + 0x50) >> 8 & 1) == 0)) {
LAB_10a34fea8:
      func_0x00010a1bd170();
      if ((uVar3 & 1) != 0) {
        return;
      }
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      ppuStack_48 = &PTR_DAT_110bc87f0;
      FUN_10a0dad0c((ulong)&uStack_a0 | 8,&ppuStack_48);
      plVar2 = (long *)((param_1 - (ulong)uRam0000000113301c28) + 0x20);
      (**(code **)(*plVar2 + 0x18))();
      lVar4 = param_1 - (ulong)uRam0000000113301c28;
      uVar1 = *(ushort *)(lVar4 + 0x50);
      if ((int)plVar2 == 0) {
        if ((uVar1 >> 8 & 1) == 0) {
          plVar2 = (long *)(lVar4 + 0x20);
          FUN_10a1bfe94(plVar2,&uStack_a0);
          if (((ulong)plVar2 & 1) == 0) {
            plVar2 = (long *)(param_1 - (ulong)uRam0000000113301c28);
            (**(code **)(*plVar2 + 0x40))(plVar2,&uStack_a0);
          }
        }
        else {
          FUN_10a1bd5e0();
          if (plVar2 != (long *)0x0) {
            FUN_10a1bd7d8();
          }
        }
      }
      else {
        if ((uVar1 >> 7 & 1) == 0) {
          *(undefined8 *)(lVar4 + 0x60) = uStack_a0;
          *(ushort *)(lVar4 + 0x50) = uVar1 | 0x80;
        }
        plVar2 = (long *)(lVar4 + 0x60);
        FUN_10a1bd398(plVar2,&uStack_a0);
      }
      uVar3 = (ulong)uRam0000000113301c28;
      if ((*(ushort *)((param_1 - uVar3) + 0x109) >> 8 & 1) != 0) {
        FUN_10a1bd5e0();
        uVar3 = (ulong)uRam0000000113301c28;
        if (plVar2 != (long *)0x0) {
          FUN_10a1bd648();
          uVar3 = (ulong)uRam0000000113301c28;
        }
      }
      FUN_10a1c054c((param_1 - uVar3) + 0xb0,&uStack_a0);
      return;
    }
    *(long *)(lVar4 + 0xc0) = *(long *)(lVar4 + 0xc0) + 1;
  }
  else if ((*(ushort *)(lVar4 + 0x50) >> 8 & 1) == 0) goto LAB_10a34fea8;
  ppuVar6 = *(undefined ***)(lVar4 + 0x110);
  ppuVar5 = *(undefined ***)(lVar4 + 0x58);
  if ((ppuVar6 != &PTR_DAT_110bc87f0 || ppuVar5 != &PTR_DAT_110bc87f0) &&
     (FUN_10a1bd5e0(), param_1 != 0)) {
    if (ppuVar6 != &PTR_DAT_110bc87f0) {
      FUN_10a1bd648(param_1,lVar4 + 0xb0,&PTR_DAT_110bc87f0);
      *(undefined ***)(lVar4 + 0x110) = &PTR_DAT_110bc87f0;
    }
    if (ppuVar5 != &PTR_DAT_110bc87f0) {
      FUN_10a1bd7d8(param_1,lVar4 + 0x20,&PTR_DAT_110bc87f0);
      *(undefined ***)(lVar4 + 0x58) = &PTR_DAT_110bc87f0;
    }
  }
  return;
}



/* Entry: 10a350040; end: 10a3500ab;  */

long * FUN_10a350040(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != *param_2) {
    if (lVar1 != 0) {
      func_0x00010a1bf190(lVar1 + 0x1b0,(long)param_1 + (0x20 - (ulong)uRam0000000113301c26));
    }
    func_0x00010a04a704(param_1,param_2);
    func_0x00010a34f824(param_1);
    FUN_10a34f880(param_1);
  }
  return param_1;
}



/* Entry: 10a3500ac; end: 10a35011b;  */

long * FUN_10a3500ac(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if (lVar2 == 0) {
    param_1[1] = 0;
  }
  else {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
    *puVar1 = &PTR_FUN_110bc5b78;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = lVar2;
    param_1[1] = (long)puVar1;
    FUN_10a34f708(param_1,lVar2 + 0x10,lVar2);
  }
  *param_2 = 0;
  return param_1;
}



/* Entry: 10a35011c; end: 10a35011f;  */

void FUN_10a35011c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a350120; end: 10a350133;  */

void FUN_10a350120(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a350134; end: 10a35014b;  */

void FUN_10a350134(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a350144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a35014c; end: 10a350183;  */

undefined8 FUN_10a35014c(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bc5bb8);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a350184; end: 10a350187;  */

void FUN_10a350184(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a350188; end: 10a3502b3;  */

undefined8 * FUN_10a350188(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a3502b4; end: 10a350543;  */

undefined8 *
FUN_10a3502b4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
             undefined1 param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  undefined1 auStack_58 [8];
  
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = &UNK_10e52b660;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = &UNK_10e52b660;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(ushort *)((long)param_1 + 0x71) = *(ushort *)((long)param_1 + 0x71) & 0xfc00;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[3] = &PTR_DAT_110bc5bf8;
  *param_1 = &PTR_FUN_110bc5bd8;
  param_1[1] = 0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 0x1a,*param_2,param_2[1]);
  }
  else {
    uVar8 = param_2[1];
    uVar7 = *param_2;
    param_1[0x1c] = param_2[2];
    param_1[0x1b] = uVar8;
    param_1[0x1a] = uVar7;
  }
  param_1[0x1d] = param_2[3];
  plStack_68 = (long *)param_3[1];
  uStack_70 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a35076c(param_1 + 0x1e,param_1,&uStack_70);
  plVar1 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  puVar5 = (undefined8 *)0x58;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_DAT_110bf7fc8;
  puVar5[8] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[5] = 0;
  *(undefined8 *)((long)puVar5 + 0x4d) = 0;
  *(undefined8 *)((long)puVar5 + 0x45) = 0;
  puVar5[4] = 0;
  puVar5[3] = 0;
  param_1[0x20] = puVar5 + 3;
  param_1[0x21] = puVar5;
  FUN_10a5cf1fc(param_1 + 0x20);
  uStack_80 = 0;
  plStack_78 = (long *)0x0;
  FUN_10a3507d4(param_1 + 0x22,param_1,&uStack_80);
  plVar1 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar2 = plStack_78 + 1;
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
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  *(undefined4 *)(param_1 + 0x24) = param_4;
  *(undefined1 *)((long)param_1 + 0x124) = param_5;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  if (sRam0000000113301c22 == -1) {
    sRam0000000113301c22 = 0x128;
  }
  func_0x00010a1bd170(auStack_58);
  return param_1;
}



/* Entry: 10a350544; end: 10a35073b;  */

undefined8 * FUN_10a350544(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc5bd8;
  param_1[3] = &PTR_DAT_110bc5bf8;
  func_0x00010a042cd8(param_1 + 0x22);
  func_0x00010a004e5c(param_1 + 0x20);
  FUN_10a35e824(param_1 + 0x1e);
  if (*(char *)((long)param_1 + 0xe7) < '\0') {
    __ZdlPv(param_1[0x1a]);
  }
  param_1[3] = &PTR_FUN_110bc5c18;
  FUN_10a1c00f4(param_1 + 3);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a35073c; end: 10a35074b;  */

undefined8 * FUN_10a35073c(undefined8 *param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  byte bVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  char *pcVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  uint6 uVar17;
  undefined8 uVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  byte bVar24;
  byte bVar25;
  undefined8 *puStack_68;
  
  *param_1 = &PTR_FUN_110bc5c18;
  *param_1 = &PTR_FUN_110bacbc0;
  pcVar12 = (char *)param_1[3];
  plVar1 = (long *)param_1[4];
  cVar19 = *pcVar12;
  while (puVar7 = param_1, cVar19 < -1) {
    uVar18 = *(undefined8 *)pcVar12;
    uVar9 = CONCAT17(-(-2 < (char)((ulong)uVar18 >> 0x38)),
                     CONCAT16(-(-2 < (char)((ulong)uVar18 >> 0x30)),
                              CONCAT15(-(-2 < (char)((ulong)uVar18 >> 0x28)),
                                       CONCAT14(-(-2 < (char)((ulong)uVar18 >> 0x20)),
                                                CONCAT13(-(-2 < (char)((ulong)uVar18 >> 0x18)),
                                                         CONCAT12(-(-2 < (char)((ulong)uVar18 >>
                                                                               0x10)),
                                                                  CONCAT11(-(-2 < (char)((ulong)
                                                  uVar18 >> 8)),-(-2 < (char)uVar18))))))));
    uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
    pcVar12 = pcVar12 + (uVar9 >> 3);
    plVar1 = plVar1 + (uVar9 >> 3) * 2;
    cVar19 = *pcVar12;
  }
  while (cVar19 != -1) {
    plVar14 = plVar1 + 2;
    puVar7 = (undefined8 *)(*plVar1 + 0x10);
    puStack_68 = param_1;
    func_0x00010a1bd9e8(puVar7,&puStack_68);
    pcVar12 = pcVar12 + 1;
    cVar19 = *pcVar12;
    while (plVar1 = plVar14, cVar19 < -1) {
      uVar18 = *(undefined8 *)pcVar12;
      uVar9 = CONCAT17(-(-2 < (char)((ulong)uVar18 >> 0x38)),
                       CONCAT16(-(-2 < (char)((ulong)uVar18 >> 0x30)),
                                CONCAT15(-(-2 < (char)((ulong)uVar18 >> 0x28)),
                                         CONCAT14(-(-2 < (char)((ulong)uVar18 >> 0x20)),
                                                  CONCAT13(-(-2 < (char)((ulong)uVar18 >> 0x18)),
                                                           CONCAT12(-(-2 < (char)((ulong)uVar18 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-2 < (char)((ulong)
                                                  uVar18 >> 8)),-(-2 < (char)uVar18))))))));
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
      pcVar12 = pcVar12 + (uVar9 >> 3);
      plVar14 = plVar14 + (uVar9 >> 3) * 2;
      cVar19 = *pcVar12;
    }
  }
  pcVar12 = (char *)param_1[7];
  plVar1 = (long *)param_1[8];
  cVar19 = *pcVar12;
  while (cVar19 < -1) {
    uVar18 = *(undefined8 *)pcVar12;
    uVar9 = CONCAT17(-(-2 < (char)((ulong)uVar18 >> 0x38)),
                     CONCAT16(-(-2 < (char)((ulong)uVar18 >> 0x30)),
                              CONCAT15(-(-2 < (char)((ulong)uVar18 >> 0x28)),
                                       CONCAT14(-(-2 < (char)((ulong)uVar18 >> 0x20)),
                                                CONCAT13(-(-2 < (char)((ulong)uVar18 >> 0x18)),
                                                         CONCAT12(-(-2 < (char)((ulong)uVar18 >>
                                                                               0x10)),
                                                                  CONCAT11(-(-2 < (char)((ulong)
                                                  uVar18 >> 8)),-(-2 < (char)uVar18))))))));
    uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
    pcVar12 = pcVar12 + (uVar9 >> 3);
    plVar1 = plVar1 + (uVar9 >> 3) * 2;
    cVar19 = *pcVar12;
  }
  while (cVar19 != -1) {
    plVar14 = plVar1 + 2;
    puVar7 = (undefined8 *)(*plVar1 + 0x10);
    puStack_68 = param_1;
    func_0x00010a1bd9e8(puVar7,&puStack_68);
    pcVar12 = pcVar12 + 1;
    cVar19 = *pcVar12;
    while (plVar1 = plVar14, cVar19 < -1) {
      uVar18 = *(undefined8 *)pcVar12;
      uVar9 = CONCAT17(-(-2 < (char)((ulong)uVar18 >> 0x38)),
                       CONCAT16(-(-2 < (char)((ulong)uVar18 >> 0x30)),
                                CONCAT15(-(-2 < (char)((ulong)uVar18 >> 0x28)),
                                         CONCAT14(-(-2 < (char)((ulong)uVar18 >> 0x20)),
                                                  CONCAT13(-(-2 < (char)((ulong)uVar18 >> 0x18)),
                                                           CONCAT12(-(-2 < (char)((ulong)uVar18 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-2 < (char)((ulong)
                                                  uVar18 >> 8)),-(-2 < (char)uVar18))))))));
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
      pcVar12 = pcVar12 + (uVar9 >> 3);
      plVar14 = plVar14 + (uVar9 >> 3) * 2;
      cVar19 = *pcVar12;
    }
  }
  lVar13 = param_1[1];
  if (lVar13 != 0) {
    puStack_68 = param_1;
    FUN_10a1bd024();
    if (puVar7[8] == lVar13) {
      FUN_10a1bd024();
      func_0x00010a1bd968();
    }
    __ZNSt3__15mutex4lockEv(lVar13);
    func_0x00010a1bd968(lVar13 + 0x80,&puStack_68);
    lVar10 = lVar13 + 0x40;
    puVar7 = puStack_68;
    FUN_10a1bfb78(lVar10,puStack_68);
    if (lVar10 != 0) {
      FUN_10a1cc04c(puVar7);
      FUN_10ae6cb48(lVar13 + 0x40,lVar10,0x48);
    }
    lVar10 = 0;
    uVar15 = *(ulong *)(lVar13 + 0x60);
    Hint_Prefetch(uVar15,0,2,0);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = puStack_68 + 0x2219159b;
    uVar9 = (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
            (long)(puStack_68 + 0x2219159b) * -0x622015f714c7d297) + (long)puStack_68;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar9;
    uVar11 = SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar9 * -0x622015f714c7d297;
    uVar9 = uVar11 >> 7 ^ uVar15 >> 0xc;
    bVar6 = (byte)uVar11;
    uVar17 = CONCAT15(bVar6,CONCAT14(bVar6,CONCAT13(bVar6,CONCAT12(bVar6,CONCAT11(bVar6,bVar6))))) &
             0x7f7f7f7f7f7f;
    while( true ) {
      uVar9 = uVar9 & *(ulong *)(lVar13 + 0x70);
      uVar18 = *(undefined8 *)(uVar15 + uVar9);
      cVar19 = (char)((ulong)uVar18 >> 8);
      cVar20 = (char)((ulong)uVar18 >> 0x10);
      cVar21 = (char)((ulong)uVar18 >> 0x18);
      cVar22 = (char)((ulong)uVar18 >> 0x20);
      cVar23 = (char)((ulong)uVar18 >> 0x28);
      bVar24 = (byte)((ulong)uVar18 >> 0x30);
      bVar25 = (byte)((ulong)uVar18 >> 0x38);
      for (uVar11 = CONCAT17(-(bVar25 == (bVar6 & 0x7f)),
                             CONCAT16(-(bVar24 == (bVar6 & 0x7f)),
                                      CONCAT15(-(cVar23 == (char)(uVar17 >> 0x28)),
                                               CONCAT14(-(cVar22 == (char)(uVar17 >> 0x20)),
                                                        CONCAT13(-(cVar21 == (char)(uVar17 >> 0x18))
                                                                 ,CONCAT12(-(cVar20 ==
                                                                            (char)(uVar17 >> 0x10)),
                                                                           CONCAT11(-(cVar19 ==
                                                                                     (char)(uVar17 
                                                  >> 8)),-((char)uVar18 == (char)uVar17)))))))) &
                    0x8080808080808080; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
        uVar16 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        uVar16 = uVar9 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) &
                 *(ulong *)(lVar13 + 0x70);
        if (*(undefined8 **)(*(long *)(lVar13 + 0x68) + uVar16 * 0x48) == puStack_68) {
          if (uVar15 != 0) {
            FUN_10a1cbfa4();
            FUN_10ae6cb48((ulong *)(lVar13 + 0x60),uVar15 + uVar16,0x48);
          }
          goto LAB_10a1c03bc;
        }
      }
      if (CONCAT17(-(bVar25 == 0x80),
                   CONCAT16(-(bVar24 == 0x80),
                            CONCAT15(-(cVar23 == -0x80),
                                     CONCAT14(-(cVar22 == -0x80),
                                              CONCAT13(-(cVar21 == -0x80),
                                                       CONCAT12(-(cVar20 == -0x80),
                                                                CONCAT11(-(cVar19 == -0x80),
                                                                         -((char)uVar18 == -0x80))))
                                             )))) != 0) break;
      lVar10 = lVar10 + 8;
      uVar9 = lVar10 + uVar9;
    }
LAB_10a1c03bc:
    func_0x00010a1bd9e8(lVar13 + 0xe0,&puStack_68);
    if (puStack_68[1] == lVar13) {
      puStack_68[1] = 0;
    }
    if ((((*(byte *)(lVar13 + 0x120) & 1) != 0) || ((*(byte *)(lVar13 + 0x121) & 1) != 0)) ||
       ((*(byte *)(lVar13 + 0x122) & 1) != 0)) {
      lVar10 = 0;
      puVar8 = (ulong *)(lVar13 + 0xc0);
      uVar11 = *puVar8;
      Hint_Prefetch(uVar11,0,2,0);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = puStack_68 + 0x2219159b;
      uVar9 = (SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^
              (long)(puStack_68 + 0x2219159b) * -0x622015f714c7d297) + (long)puStack_68;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar9;
      uVar9 = SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar9 * -0x622015f714c7d297;
      bVar6 = (byte)uVar9;
      uVar17 = CONCAT15(bVar6,CONCAT14(bVar6,CONCAT13(bVar6,CONCAT12(bVar6,CONCAT11(bVar6,bVar6)))))
               & 0x7f7f7f7f7f7f;
      uVar9 = uVar9 >> 7 ^ uVar11 >> 0xc;
      while( true ) {
        uVar9 = uVar9 & *(ulong *)(lVar13 + 0xd0);
        uVar18 = *(undefined8 *)(uVar11 + uVar9);
        cVar19 = (char)((ulong)uVar18 >> 8);
        cVar20 = (char)((ulong)uVar18 >> 0x10);
        cVar21 = (char)((ulong)uVar18 >> 0x18);
        cVar22 = (char)((ulong)uVar18 >> 0x20);
        cVar23 = (char)((ulong)uVar18 >> 0x28);
        bVar24 = (byte)((ulong)uVar18 >> 0x30);
        bVar25 = (byte)((ulong)uVar18 >> 0x38);
        uVar15 = CONCAT17(-(bVar25 == (bVar6 & 0x7f)),
                          CONCAT16(-(bVar24 == (bVar6 & 0x7f)),
                                   CONCAT15(-(cVar23 == (char)(uVar17 >> 0x28)),
                                            CONCAT14(-(cVar22 == (char)(uVar17 >> 0x20)),
                                                     CONCAT13(-(cVar21 == (char)(uVar17 >> 0x18)),
                                                              CONCAT12(-(cVar20 ==
                                                                        (char)(uVar17 >> 0x10)),
                                                                       CONCAT11(-(cVar19 ==
                                                                                 (char)(uVar17 >> 8)
                                                                                 ),-((char)uVar18 ==
                                                                                    (char)uVar17))))
                                                    )))) & 0x8080808080808080;
        if (uVar15 != 0) {
          do {
            uVar16 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            if (*(undefined8 **)
                 (*(long *)(lVar13 + 200) +
                 (uVar9 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) &
                 *(ulong *)(lVar13 + 0xd0)) * 8) == puStack_68) goto LAB_10a1c04b8;
            uVar15 = uVar15 - 1 & uVar15;
          } while (uVar15 != 0);
        }
        if (CONCAT17(-(bVar25 == 0x80),
                     CONCAT16(-(bVar24 == 0x80),
                              CONCAT15(-(cVar23 == -0x80),
                                       CONCAT14(-(cVar22 == -0x80),
                                                CONCAT13(-(cVar21 == -0x80),
                                                         CONCAT12(-(cVar20 == -0x80),
                                                                  CONCAT11(-(cVar19 == -0x80),
                                                                           -((char)uVar18 == -0x80))
                                                                 )))))) != 0) break;
        lVar10 = lVar10 + 8;
        uVar9 = lVar10 + uVar9;
      }
      FUN_10a1d1adc();
      *(undefined8 **)(*(long *)(lVar13 + 200) + (long)puVar8 * 8) = puStack_68;
    }
LAB_10a1c04b8:
    __ZNSt3__15mutex6unlockEv(lVar13);
  }
  if (param_1[9] != 0) {
    __ZdlPv(param_1[7] + -8);
  }
  if (param_1[5] != 0) {
    __ZdlPv(param_1[3] + -8);
  }
  return param_1;
}



/* Entry: 10a35074c; end: 10a35076b;  */

void FUN_10a35074c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc5c18;
  FUN_10a1c00f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a35076c; end: 10a3507d3;  */

undefined8 * FUN_10a35076c(undefined8 *param_1,short param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_28 [8];
  
  uVar1 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  if (sRam0000000113301758 == -1) {
    sRam0000000113301758 = (short)param_1 - param_2;
  }
  func_0x00010a1bd170(auStack_28);
  return param_1;
}



/* Entry: 10a3507d4; end: 10a35083b;  */

undefined8 * FUN_10a3507d4(undefined8 *param_1,short param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_28 [8];
  
  uVar1 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  if (sRam0000000113301c24 == -1) {
    sRam0000000113301c24 = (short)param_1 - param_2;
  }
  func_0x00010a1bd170(auStack_28);
  return param_1;
}



/* Entry: 10a35083c; end: 10a35084b;  */

void FUN_10a35083c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc82f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a35084c; end: 10a35086b;  */

void FUN_10a35084c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc82f0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a35086c; end: 10a350877;  */

long FUN_10a35086c(long param_1)

{
  FUN_10a350abc(param_1 + 0x30);
  if (*(long *)(param_1 + 0x20) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1 + 0x18;
}



/* Entry: 10a350878; end: 10a350957;  */

undefined8 * FUN_10a350878(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar5 = (undefined8 *)*param_2;
  lVar6 = puVar5[1];
  uVar7 = *puVar5;
  param_1[1] = puVar5[1];
  *param_1 = uVar7;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puVar5 = (undefined8 *)*param_2;
  }
  uVar2 = *(undefined4 *)(puVar5 + 2);
  param_1[6] = 0;
  param_1[5] = 0x3f800000;
  *(undefined4 *)(param_1 + 2) = uVar2;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  param_1[8] = 0;
  param_1[7] = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x54) = 0xffffffff00000000;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  FUN_10a350958(param_1,*param_2 + 0x18);
  uVar7 = *(undefined8 *)(*param_2 + 0x4c);
  *(undefined8 *)((long)param_1 + 0x54) = *(undefined8 *)(*param_2 + 0x54);
  *(undefined8 *)((long)param_1 + 0x4c) = uVar7;
  *(undefined1 *)((long)param_1 + 0x5c) = *(undefined1 *)(*param_2 + 0x5c);
  return param_1;
}



/* Entry: 10a350958; end: 10a350a6b;  */

void FUN_10a350958(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  func_0x00010a3509f0(param_1 + 3);
  lVar5 = param_1[3];
  if (lVar5 != 0) {
    uStack_30 = 0;
    plStack_28 = (long *)0x0;
    plVar4 = (long *)param_1[1];
    if (plVar4 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      plStack_28 = plVar4;
      if (plVar4 != (long *)0x0) {
        uStack_30 = *param_1;
      }
    }
    FUN_10a350a6c(lVar5,&uStack_30);
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
  }
  return;
}



/* Entry: 10a350a6c; end: 10a350abb;  */

void FUN_10a350a6c(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *param_2;
  if ((lVar5 != 0) &&
     ((lVar4 = *(long *)(param_1 + 0x38), lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    lVar6 = param_2[1];
    if (lVar6 != 0) {
      plVar1 = (long *)(lVar6 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = *(long *)(param_1 + 0x38);
    }
    *(long *)(param_1 + 0x30) = lVar5;
    *(long *)(param_1 + 0x38) = lVar6;
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(lVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a350abc; end: 10a350b13;  */

long FUN_10a350abc(long param_1)

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



/* Entry: 10a350b14; end: 10a350d33;  */

void FUN_10a350b14(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
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
  
  uVar1 = 0;
  lVar3 = param_1 - (ulong)uRam0000000113301c24;
  if ((*(ushort *)(lVar3 + 0x71) >> 8 & 1) == 0) {
    if (((*(long *)(lVar3 + 0x48) != 0) || ((*(ushort *)(lVar3 + 0x71) >> 9 & 1) != 0)) ||
       (*(long *)(lVar3 + 0x68) != 0)) {
      func_0x00010a1bd170();
      if ((uVar1 & 1) != 0) {
        return;
      }
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
      ppuStack_38 = &PTR_DAT_110bc80f0;
      uVar1 = (ulong)&uStack_90 | 8;
      FUN_10a0dad0c(uVar1,&ppuStack_38);
      uVar2 = (ulong)uRam0000000113301c24;
      if ((*(ushort *)((param_1 - uVar2) + 0x71) >> 8 & 1) != 0) {
        FUN_10a1bd5e0();
        uVar2 = (ulong)uRam0000000113301c24;
        if (uVar1 != 0) {
          FUN_10a1bd648();
          uVar2 = (ulong)uRam0000000113301c24;
        }
      }
      FUN_10a1c054c((param_1 - uVar2) + 0x18,&uStack_90);
      return;
    }
    *(long *)(lVar3 + 0x28) = *(long *)(lVar3 + 0x28) + 1;
  }
  if ((*(undefined ***)(lVar3 + 0x78) != &PTR_DAT_110bc80f0) && (FUN_10a1bd5e0(), param_1 != 0)) {
    FUN_10a1bd648();
    *(undefined ***)(lVar3 + 0x78) = &PTR_DAT_110bc80f0;
  }
  return;
}



/* Entry: 10a350d34; end: 10a350e5b;  */

undefined8 * FUN_10a350d34(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a350e5c; end: 10a350e5f;  */

void FUN_10a350e5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a350e60; end: 10a350e73;  */

void FUN_10a350e60(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a350e74; end: 10a350e8b;  */

void FUN_10a350e74(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a350e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a350e8c; end: 10a350ec3;  */

undefined8 FUN_10a350e8c(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bc5c78);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a350ec4; end: 10a350ec7;  */

void FUN_10a350ec4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a350ec8; end: 10a350fa3;  */

undefined8 * FUN_10a350ec8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a350fa4; end: 10a3511df;  */

undefined8 * FUN_10a350fa4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = &UNK_10e52b660;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = &UNK_10e52b660;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(ushort *)((long)param_1 + 0x71) = *(ushort *)((long)param_1 + 0x71) & 0xfc00;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[3] = &PTR_DAT_110bc5cb8;
  *param_1 = &PTR_FUN_110bc5c98;
  param_1[1] = 0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 0x1a,*param_2,param_2[1]);
  }
  else {
    uVar8 = param_2[1];
    uVar7 = *param_2;
    param_1[0x1c] = param_2[2];
    param_1[0x1b] = uVar8;
    param_1[0x1a] = uVar7;
  }
  param_1[0x1d] = param_2[3];
  plStack_38 = (long *)param_3[1];
  uStack_40 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a3513ec(param_1 + 0x1e,param_1,&uStack_40);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  puVar5 = (undefined8 *)0x58;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_DAT_110bf7fc8;
  puVar5[8] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[5] = 0;
  *(undefined8 *)((long)puVar5 + 0x4d) = 0;
  *(undefined8 *)((long)puVar5 + 0x45) = 0;
  puVar5[4] = 0;
  puVar5[3] = 0;
  param_1[0x20] = puVar5 + 3;
  param_1[0x21] = puVar5;
  FUN_10a5cf1fc(param_1 + 0x20);
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  FUN_10a351454(param_1 + 0x22,param_1,&uStack_50);
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  return param_1;
}



/* Entry: 10a3511e0; end: 10a3513b3;  */

undefined8 * FUN_10a3511e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc5c98;
  param_1[3] = &PTR_DAT_110bc5cb8;
  func_0x00010a35e8d4(param_1 + 0x24);
  func_0x00010a35e8d4(param_1 + 0x22);
  func_0x00010a004e5c(param_1 + 0x20);
  func_0x00010a35e87c(param_1 + 0x1e);
  if (*(char *)((long)param_1 + 0xe7) < '\0') {
    __ZdlPv(param_1[0x1a]);
  }
  param_1[3] = &PTR_DAT_110bc5d48;
  FUN_10a1c00f4(param_1 + 3);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a3513b4; end: 10a3513cb;  */

void FUN_10a3513b4(undefined8 *param_1)

{
  param_1[-3] = &PTR_FUN_110bc5c98;
  *param_1 = &PTR_DAT_110bc5cb8;
  func_0x00010a35e8d4(param_1 + 0x21);
  func_0x00010a35e8d4(param_1 + 0x1f);
  func_0x00010a004e5c(param_1 + 0x1d);
  func_0x00010a35e87c(param_1 + 0x1b);
  if (*(char *)((long)param_1 + 0xcf) < '\0') {
    __ZdlPv(param_1[0x17]);
  }
  *param_1 = &PTR_DAT_110bc5d48;
  FUN_10a1c00f4(param_1);
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -3);
  return;
}



/* Entry: 10a3513cc; end: 10a3513eb;  */

void FUN_10a3513cc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bc5d48;
  FUN_10a1c00f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3513ec; end: 10a351453;  */

undefined8 * FUN_10a3513ec(undefined8 *param_1,short param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_28 [8];
  
  uVar1 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  if (sRam000000011330175a == -1) {
    sRam000000011330175a = (short)param_1 - param_2;
  }
  func_0x00010a1bd170(auStack_28);
  return param_1;
}



/* Entry: 10a351454; end: 10a3514bb;  */

undefined8 * FUN_10a351454(undefined8 *param_1,short param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_28 [8];
  
  uVar1 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  if (sRam000000011330175c == -1) {
    sRam000000011330175c = (short)param_1 - param_2;
  }
  func_0x00010a1bd170(auStack_28);
  return param_1;
}



/* Entry: 10a3514bc; end: 10a351567;  */

void FUN_10a3514bc(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_2[1];
  if ((lVar4 == 0) || (*(long *)(lVar4 + 8) == -1)) {
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



/* Entry: 10a351568; end: 10a35156b;  */

void FUN_10a351568(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a35156c; end: 10a35157f;  */

void FUN_10a35156c(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a351580; end: 10a351597;  */

void FUN_10a351580(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a351590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a351598; end: 10a3515cf;  */

undefined8 FUN_10a351598(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bc5da8);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a3515d0; end: 10a3515d3;  */

void FUN_10a3515d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3515d4; end: 10a35165f;  */

long FUN_10a3515d4(long *param_1,char *param_2,ulong param_3)

{
  char *pcVar1;
  ulong uVar2;
  char *pcVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  lVar4 = *param_1;
  uVar2 = param_1[1];
  pcVar3 = param_2;
  _strlen();
  if (param_3 < uVar2 && pcVar3 != (char *)0x0) {
    pcVar1 = (char *)(lVar4 + uVar2);
    pcVar5 = (char *)(lVar4 + param_3);
    do {
      pcVar7 = pcVar3;
      pcVar8 = param_2;
      do {
        pcVar6 = pcVar5;
        if (*pcVar5 == *pcVar8) goto LAB_10a351644;
        pcVar7 = pcVar7 + -1;
        pcVar8 = pcVar8 + 1;
      } while (pcVar7 != (char *)0x0);
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar1;
    } while (pcVar5 != pcVar1);
LAB_10a351644:
    lVar4 = (long)pcVar6 - lVar4;
    if (pcVar6 == pcVar1) {
      lVar4 = -1;
    }
  }
  else {
    lVar4 = -1;
  }
  return lVar4;
}



/* Entry: 10a351660; end: 10a3516a7;  */

void FUN_10a351660(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10a3516a8(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a3516a8; end: 10a35171b;  */

void FUN_10a3516a8(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[6];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10a35171c(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = param_1[4];
  param_1[4] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*param_1);
    return;
  }
  return;
}



/* Entry: 10a35171c; end: 10a35175f;  */

void FUN_10a35171c(undefined8 *param_1)

{
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a351760; end: 10a3517fb;  */

long * FUN_10a351760(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = uVar2 - 1;
    if ((uVar2 & uVar3) == 0) {
      uVar4 = uVar3 & param_2;
    }
    else {
      uVar4 = param_2;
      if (uVar2 <= param_2) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = param_2 / uVar2;
        }
        uVar4 = param_2 - uVar4 * uVar2;
      }
    }
    plVar5 = *(long **)(*param_1 + uVar4 * 8);
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)*plVar5;
      do {
        if (plVar5 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar6 = plVar5[1];
        if (uVar6 == param_2) {
          if (plVar5[5] == param_2) {
            return plVar5;
          }
        }
        else {
          if ((uVar2 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar2 <= uVar6) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar6 / uVar2;
            }
            uVar6 = uVar6 - uVar1 * uVar2;
          }
          if (uVar6 != uVar4) {
            return (long *)0x0;
          }
        }
        plVar5 = (long *)*plVar5;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a3517fc; end: 10a351903;  */

void FUN_10a3517fc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10a35171c(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a351904; end: 10a351a83;  */

void FUN_10a351904(long *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_3 == 2) {
    *(undefined1 *)*param_1 = *(undefined1 *)param_2;
    return;
  }
  if (param_3 == 1) {
    *(undefined4 *)*param_1 = *(undefined4 *)param_2;
    return;
  }
  if (param_3 == 4) {
    puVar1 = (undefined8 *)*param_1;
    uVar2 = *param_2;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
  }
  else {
    if (param_3 != 3) {
      if (param_3 == 7) {
        puVar1 = (undefined8 *)*param_1;
        uVar3 = param_2[1];
        uVar2 = *param_2;
        uVar5 = param_2[3];
        uVar4 = param_2[2];
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_2 + 4);
        puVar1[1] = uVar3;
        *puVar1 = uVar2;
        puVar1[3] = uVar5;
        puVar1[2] = uVar4;
        return;
      }
      if ((param_3 == 6) || (param_3 == 5)) {
        puVar1 = (undefined8 *)*param_1;
        uVar2 = *param_2;
        puVar1[1] = param_2[1];
        *puVar1 = uVar2;
        return;
      }
      if (param_3 == 9) {
        *(undefined4 *)*param_1 = *(undefined4 *)param_2;
        return;
      }
      if (param_3 == 8) {
        puVar1 = (undefined8 *)*param_1;
        uVar3 = param_2[1];
        uVar2 = *param_2;
        uVar5 = param_2[3];
        uVar4 = param_2[2];
        uVar6 = param_2[4];
        uVar8 = param_2[7];
        uVar7 = param_2[6];
        puVar1[5] = param_2[5];
        puVar1[4] = uVar6;
        puVar1[7] = uVar8;
        puVar1[6] = uVar7;
        puVar1[1] = uVar3;
        *puVar1 = uVar2;
        puVar1[3] = uVar5;
        puVar1[2] = uVar4;
        return;
      }
      if (param_3 == 0xb) {
        puVar1 = (undefined8 *)*param_1;
        uVar2 = *param_2;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
      }
      else {
        if (param_3 != 10) {
          if (param_3 < 0xe) {
            if (param_3 != 0xc) {
              if (param_3 != 0xd) {
                return;
              }
              puVar1 = (undefined8 *)*param_1;
              uVar2 = *param_2;
LAB_10a351a7c:
              *puVar1 = uVar2;
              return;
            }
          }
          else {
            if (param_3 == 0xe) {
              puVar1 = (undefined8 *)*param_1;
              uVar2 = *param_2;
              *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
              goto LAB_10a351a7c;
            }
            if (param_3 != 0xf) {
              return;
            }
          }
          puVar1 = (undefined8 *)*param_1;
          uVar2 = *param_2;
          puVar1[1] = param_2[1];
          *puVar1 = uVar2;
          return;
        }
        puVar1 = (undefined8 *)*param_1;
        uVar2 = *param_2;
      }
      *puVar1 = uVar2;
      return;
    }
    puVar1 = (undefined8 *)*param_1;
    uVar2 = *param_2;
  }
  *puVar1 = uVar2;
  return;
}



/* Entry: 10a351a84; end: 10a351b5b;  */

undefined8 * FUN_10a351a84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_28 [8];
  
  puVar1 = param_1;
  FUN_10a18ef08();
  if (((ulong)puVar1 & 1) == 0) {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    param_1[4] = param_2[4];
    param_1[1] = uVar3;
    *param_1 = uVar2;
    param_1[3] = uVar5;
    param_1[2] = uVar4;
    func_0x00010a1bd170(auStack_28);
    FUN_10a34fe40(param_1);
  }
  return param_1;
}



/* Entry: 10a351b5c; end: 10a351bd7;  */

void FUN_10a351b5c(long param_1,undefined1 *param_2)

{
  int aiStack_20 [2];
  undefined1 uStack_18;
  undefined7 uStack_17;
  
  uStack_18 = *param_2;
  aiStack_20[0] = 2;
  func_0x0001098968d0(param_1 + 8,aiStack_20);
  if ((3 < aiStack_20[0]) && ((undefined8 *)CONCAT71(uStack_17,uStack_18) != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)CONCAT71(uStack_17,uStack_18))();
  }
  return;
}



/* Entry: 10a351bd8; end: 10a351c47;  */

/* WARNING: Removing unreachable block (ram,0x00010a351c10) */

void FUN_10a351bd8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  lVar3 = param_1[1];
  lVar1 = lVar2;
  if (lVar3 != lVar2) {
    do {
      lVar3 = lVar3 + -0x28;
    } while (lVar3 != lVar2);
    lVar1 = *param_1;
  }
  param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10a351c48; end: 10a351cfb;  */

void FUN_10a351c48(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar4 = 8;
  do {
    uVar1 = param_1[1];
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    }
    if (uVar1 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,&DAT_10f68f19e,2);
    }
    uVar3 = *(undefined8 *)(&UNK_110bc5e48 + lVar4);
    uVar2 = uVar3;
    _strlen(uVar3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,uVar3,uVar2);
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x98);
  return;
}



/* Entry: 10a351cfc; end: 10a351f43;  */

ulong * FUN_10a351cfc(ulong *param_1,ulong *param_2,undefined4 *param_3,long param_4,long param_5)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  undefined **ppuVar8;
  ulong *puVar9;
  undefined4 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  ulong *puVar15;
  long lVar16;
  
  puVar4 = param_1;
  if (0 < param_5) {
    puVar5 = (ulong *)param_1[1];
    if ((long)(param_1[2] - (long)puVar5) >> 2 < param_5) {
      uVar11 = *param_1;
      uVar1 = param_5 + ((long)((long)puVar5 - uVar11) >> 2);
      if (uVar1 >> 0x3e != 0) {
        FUN_10a001cf8();
        lVar7 = 0x90;
        ppuVar8 = &PTR_s_bool_110bc5e50;
        do {
          if ((uint)*(ushort *)(ppuVar8 + -1) == ((uint)param_2 & 0xffff)) {
            puVar4 = (ulong *)*ppuVar8;
            if (puVar4 != (ulong *)0x0) {
              puVar5 = puVar4;
              func_0x000107c613d0();
              if ((ulong *)0x7ffffffffffffff7 < puVar5) {
                func_0x000107c2b040();
                if ((bRam00000001132ffc88 & 1) == 0) {
                  puVar5 = (ulong *)0x1132ffc88;
                  func_0x000107c60e48();
                  if ((int)puVar5 != 0) {
                    puVar3 = (undefined8 *)0x30;
                    func_0x000107c60e20();
                    uRam00000001132ffc38 = 0x8000000000000030;
                    uRam00000001132ffc30 = 0x2c;
                    puRam00000001132ffc28 = puVar3;
                    puVar3[1] = 0x434948504152475f;
                    *puVar3 = 0x45524f43534e454c;
                    puVar3[3] = 0x525f595a414c5f54;
                    puVar3[2] = 0x5845544e4f435f53;
                    *(undefined8 *)((long)puVar3 + 0x24) = 0x54494e495f454352;
                    *(undefined8 *)((long)puVar3 + 0x1c) = 0x554f5345525f595a;
                    *(undefined1 *)((long)puVar3 + 0x2c) = 0;
                    uRam00000001132ffc40 = 0;
                    pcRam00000001132ffc48 = FUN_10a09e854;
                    ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
                    func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
                    puVar4 = (ulong *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
                    return puVar4;
                  }
                }
                return puVar5;
              }
              if (puVar5 < (ulong *)0x17) {
                *(char *)((long)param_1 + 0x17) = (char)puVar5;
                puVar9 = param_1;
                if (puVar5 == (ulong *)0x0) goto code_r0x0001000537e0;
              }
              else {
                puVar15 = (ulong *)0x19;
                if (((ulong)puVar5 | 7) != 0x17) {
                  puVar15 = (ulong *)(((ulong)puVar5 | 7) + 1);
                }
                puVar9 = puVar15;
                func_0x000107c60e20();
                param_1[1] = (ulong)puVar5;
                param_1[2] = (ulong)puVar15 | 0x8000000000000000;
                *param_1 = (ulong)puVar9;
              }
              func_0x000107c610b8(puVar9,puVar4,puVar5);
code_r0x0001000537e0:
              *(undefined1 *)((long)puVar9 + (long)puVar5) = 0;
              return param_1;
            }
            break;
          }
          ppuVar8 = ppuVar8 + 2;
          lVar7 = lVar7 + -0x10;
        } while (lVar7 != 0);
        puVar4 = (ulong *)&UNK_10f6511f4;
        FUN_10a0ee900(param_1,&UNK_10f6511f4,0xb);
        return puVar4;
      }
      uVar6 = param_1[2] - uVar11;
      uVar12 = (long)uVar6 >> 1;
      if (uVar12 <= uVar1) {
        uVar12 = uVar1;
      }
      if (0x7ffffffffffffffb < uVar6) {
        uVar12 = 0x3fffffffffffffff;
      }
      if (uVar12 == 0) {
        puVar4 = (ulong *)0x0;
      }
      else {
        FUN_10a001d0c();
      }
      puVar2 = (undefined4 *)((long)puVar4 + ((long)param_2 - uVar11));
      lVar7 = param_5 << 2;
      puVar10 = puVar2;
      do {
        *puVar10 = *param_3;
        lVar7 = lVar7 + -4;
        puVar10 = puVar10 + 1;
        param_3 = param_3 + 1;
      } while (lVar7 != 0);
      _memcpy(puVar2 + param_5,param_2,param_1[1] - (long)param_2);
      uVar1 = param_1[1];
      param_1[1] = (ulong)param_2;
      uVar11 = (long)puVar2 - ((long)param_2 - *param_1);
      _memcpy(uVar11);
      puVar5 = (ulong *)*param_1;
      *param_1 = uVar11;
      param_1[1] = (long)(puVar2 + param_5) + (uVar1 - (long)param_2);
      param_1[2] = (long)puVar4 + uVar12 * 4;
      puVar4 = (ulong *)0x0;
      if (puVar5 != (ulong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)();
        return puVar5;
      }
    }
    else {
      lVar7 = (long)puVar5 - (long)param_2;
      if (param_5 <= lVar7 >> 2) {
        puVar4 = (ulong *)((long)param_2 + param_5 * 4);
        puVar15 = puVar5;
        for (puVar9 = (ulong *)((long)puVar5 + param_5 * -4); puVar9 < puVar5;
            puVar9 = (ulong *)((long)puVar9 + 4)) {
          *(int *)puVar15 = (int)*puVar9;
          puVar15 = (ulong *)((long)puVar15 + 4);
        }
        param_1[1] = (ulong)puVar15;
        if (puVar5 != puVar4) {
          _memmove(puVar4,param_2);
        }
        lVar7 = param_5 << 2;
LAB_10a351e80:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memmove_11034c660)(param_2,param_3,lVar7);
        return param_2;
      }
      lVar16 = param_4 - ((long)param_3 + lVar7);
      if (lVar16 != 0) {
        puVar4 = puVar5;
        _memmove(puVar5,(long)param_3 + lVar7,lVar16);
      }
      puVar15 = (ulong *)((long)puVar5 + lVar16);
      param_1[1] = (ulong)puVar15;
      if (0 < lVar7 >> 2) {
        puVar9 = (ulong *)((long)param_2 + param_5 * 4);
        puVar14 = puVar15;
        if ((ulong *)((long)puVar15 + param_5 * -4) < puVar5) {
          lVar13 = -(long)param_3;
          param_4 = (long)param_2 + param_4;
          lVar16 = param_4 + param_5 * -4;
          do {
            *(undefined4 *)(param_4 + lVar13) = *(undefined4 *)(lVar16 + lVar13);
            lVar16 = lVar16 + 4;
            param_4 = param_4 + 4;
          } while ((ulong *)(lVar16 + lVar13) < puVar5);
          puVar14 = (ulong *)(param_4 - (long)param_3);
        }
        param_1[1] = (ulong)puVar14;
        if (puVar15 != puVar9) {
          _memmove(puVar9,param_2);
          puVar4 = puVar9;
        }
        if (puVar5 != param_2) goto LAB_10a351e80;
      }
    }
  }
  return puVar4;
}



/* Entry: 10a351f44; end: 10a351fbb;  */

ulong * FUN_10a351f44(ulong *param_1,short param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  ulong *puVar6;
  long lVar7;
  
  lVar7 = 0x90;
  ppuVar5 = &PTR_s_bool_110bc5e50;
  do {
    if (*(short *)(ppuVar5 + -1) == param_2) {
      puVar6 = (ulong *)*ppuVar5;
      if (puVar6 != (ulong *)0x0) {
        puVar2 = puVar6;
        func_0x000107c613d0();
        if ((ulong *)0x7ffffffffffffff7 < puVar2) {
          func_0x000107c2b040();
          if ((bRam00000001132ffc88 & 1) == 0) {
            puVar2 = (ulong *)0x1132ffc88;
            func_0x000107c60e48();
            if ((int)puVar2 != 0) {
              puVar4 = (undefined8 *)0x30;
              func_0x000107c60e20();
              uRam00000001132ffc38 = 0x8000000000000030;
              uRam00000001132ffc30 = 0x2c;
              puRam00000001132ffc28 = puVar4;
              puVar4[1] = 0x434948504152475f;
              *puVar4 = 0x45524f43534e454c;
              puVar4[3] = 0x525f595a414c5f54;
              puVar4[2] = 0x5845544e4f435f53;
              *(undefined8 *)((long)puVar4 + 0x24) = 0x54494e495f454352;
              *(undefined8 *)((long)puVar4 + 0x1c) = 0x554f5345525f595a;
              *(undefined1 *)((long)puVar4 + 0x2c) = 0;
              uRam00000001132ffc40 = 0;
              pcRam00000001132ffc48 = FUN_10a09e854;
              ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
              func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
              puVar6 = (ulong *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
              return puVar6;
            }
          }
          return puVar2;
        }
        if (puVar2 < (ulong *)0x17) {
          *(char *)((long)param_1 + 0x17) = (char)puVar2;
          puVar3 = param_1;
          if (puVar2 == (ulong *)0x0) goto code_r0x0001000537e0;
        }
        else {
          puVar1 = (ulong *)0x19;
          if (((ulong)puVar2 | 7) != 0x17) {
            puVar1 = (ulong *)(((ulong)puVar2 | 7) + 1);
          }
          puVar3 = puVar1;
          func_0x000107c60e20();
          param_1[1] = (ulong)puVar2;
          param_1[2] = (ulong)puVar1 | 0x8000000000000000;
          *param_1 = (ulong)puVar3;
        }
        func_0x000107c610b8(puVar3,puVar6,puVar2);
code_r0x0001000537e0:
        *(undefined1 *)((long)puVar3 + (long)puVar2) = 0;
        return param_1;
      }
      break;
    }
    ppuVar5 = ppuVar5 + 2;
    lVar7 = lVar7 + -0x10;
  } while (lVar7 != 0);
  puVar6 = (ulong *)&UNK_10f6511f4;
  FUN_10a0ee900(param_1,&UNK_10f6511f4,0xb);
  return puVar6;
}



/* Entry: 10a351fbc; end: 10a352043;  */

long * FUN_10a351fbc(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 auStack_40 [2];
  char cStack_29;
  ulong uStack_28;
  
  func_0x000107c2b074(auStack_40,param_2);
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  plVar4 = plVar3;
  if (plVar2 != (long *)0x0) {
    do {
      lVar1 = 8;
      if (uStack_28 <= (ulong)plVar2[7]) {
        lVar1 = 0;
        plVar4 = plVar2;
      }
      plVar2 = *(long **)((long)plVar2 + lVar1);
    } while (plVar2 != (long *)0x0);
    if ((plVar4 != plVar3) && ((ulong)plVar4[7] <= uStack_28)) goto LAB_10a352020;
  }
  plVar4 = plVar3;
LAB_10a352020:
  if (cStack_29 < '\0') {
    __ZdlPv(auStack_40[0]);
  }
  return plVar4;
}



/* Entry: 10a352044; end: 10a352053;  */

long FUN_10a352044(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x000105277f8c();
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



/* Entry: 10a352054; end: 10a35220b;  */

long FUN_10a352054(long param_1)

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



/* Entry: 10a35220c; end: 10a35221f;  */

void FUN_10a35220c(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  lVar2 = *(long *)(puVar1 + 8);
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x1f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar2 + 8));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}


