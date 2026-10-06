/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1092b27d8; end: 1092b282f;  */

long FUN_1092b27d8(long param_1)

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



/* Entry: 1092b2830; end: 1092b2893;  */

undefined8 * FUN_1092b2830(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  cVar3 = *(char *)((long)param_2 + 0x17);
  plVar1 = (long *)*param_2;
  if (-1 < (long)cVar3) {
    plVar1 = param_2;
  }
  lVar2 = param_2[1];
  if (-1 < cVar3) {
    lVar2 = (long)cVar3;
  }
  FUN_1092b2894(param_1,plVar1,(long)plVar1 + lVar2);
  return param_1;
}



/* Entry: 1092b2894; end: 1092b29f7;  */

undefined8 * FUN_1092b2894(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 ***pppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  uVar6 = (ulong)*(char *)((long)param_1 + 0x17);
  uVar1 = param_3 - (long)param_2;
  if ((long)uVar6 < 0) {
    if (uVar1 == 0) {
      return param_1;
    }
    uVar7 = param_1[1];
    lVar3 = (param_1[2] & 0x7fffffffffffffff) - 1;
    puVar5 = (undefined8 *)*param_1;
    uVar6 = (ulong)param_1[2] >> 0x38;
  }
  else {
    if (uVar1 == 0) {
      return param_1;
    }
    lVar3 = 0x16;
    puVar5 = param_1;
    uVar7 = uVar6;
  }
  uVar4 = (uint)uVar6;
  if ((param_2 < puVar5) || ((undefined8 *)((long)puVar5 + uVar7 + 1) <= param_2)) {
    if (lVar3 - uVar7 < uVar1) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                (param_1,lVar3,(uVar7 + uVar1) - lVar3,uVar7,uVar7,0,0);
      param_1[1] = uVar7;
      uVar4 = (uint)*(byte *)((long)param_1 + 0x17);
    }
    puVar5 = param_1;
    if ((uVar4 >> 7 & 1) != 0) {
      puVar5 = (undefined8 *)*param_1;
    }
    _memmove((long)puVar5 + uVar7,param_2,uVar1);
    *(undefined1 *)((long)puVar5 + uVar7 + uVar1) = 0;
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      param_1[1] = uVar7 + uVar1;
    }
    else {
      *(byte *)((long)param_1 + 0x17) = (byte)(uVar7 + uVar1) & 0x7f;
    }
  }
  else {
    FUN_1092b29f8(&pppuStack_58,param_2,param_3,uVar1);
    ppppuVar2 = (undefined8 ****)pppuStack_58;
    if (-1 < (char)bStack_41) {
      uStack_50 = (ulong)bStack_41;
      ppppuVar2 = &pppuStack_58;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,ppppuVar2,uStack_50);
    if ((char)bStack_41 < '\0') {
      __ZdlPv(pppuStack_58);
    }
  }
  return param_1;
}



/* Entry: 1092b29f8; end: 1092b2a93;  */

ulong * FUN_1092b29f8(ulong *param_1,long *param_2,long param_3,ulong param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  
  if (param_4 < 0x7ffffffffffffff8) {
    if (param_4 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)param_4;
      puVar1 = param_1;
    }
    else {
      puVar2 = (ulong *)0x19;
      if ((param_4 | 7) != 0x17) {
        puVar2 = (ulong *)((param_4 | 7) + 1);
      }
      puVar1 = puVar2;
      __Znwm();
      param_1[1] = param_4;
      param_1[2] = (ulong)puVar2 | 0x8000000000000000;
      *param_1 = (ulong)puVar1;
    }
    param_3 = param_3 - (long)param_2;
    puVar2 = puVar1;
    if (param_3 != 0) {
      _memmove(puVar1,param_2,param_3);
    }
    *(undefined1 *)((long)puVar1 + param_3) = 0;
    return puVar2;
  }
  func_0x000104c4f6b8();
  (**(code **)*param_1)();
  (**(code **)(*param_2 + 0x18))(param_1,param_2);
  return param_1;
}



/* Entry: 1092b2a94; end: 1092b2b03;  */

undefined8 * FUN_1092b2a94(undefined8 *param_1,long *param_2)

{
  (**(code **)*param_1)();
  (**(code **)(*param_2 + 0x18))(param_1,param_2);
  return param_1;
}



/* Entry: 1092b2b04; end: 1092b2c5b;  */

void FUN_1092b2b04(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(*(long *)(param_2 + 0x60) + 8) & 1) == 0) {
    FUN_1092bacdc(&uStack_40,param_3,param_2 + 0x48);
    puVar4 = (undefined8 *)0x30;
    __Znwm();
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_FUN_110ae8788;
    puVar4[3] = &PTR_FUN_110ae8c28;
    puVar4[5] = uStack_38;
    puVar4[4] = uStack_40;
    *param_1 = puVar4 + 3;
    param_1[1] = puVar4;
  }
  else {
    FUN_1092b49e0(&lStack_50,param_3,param_2 + 0x58);
    lStack_48 = lStack_50;
    lStack_50 = 0;
    FUN_1092b6040(&uStack_40,&lStack_48,param_3,param_2 + 8);
    puVar4 = (undefined8 *)0x30;
    __Znwm();
    uVar3 = uStack_38;
    uVar2 = uStack_40;
    lVar1 = lStack_48;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_FUN_110ae8788;
    puVar4[3] = &PTR_FUN_110ae8c28;
    uStack_40 = 0;
    uStack_38 = 0;
    puVar4[5] = uVar3;
    puVar4[4] = uVar2;
    *param_1 = puVar4 + 3;
    param_1[1] = puVar4;
    lStack_48 = 0;
    if (lVar1 != 0) {
      _fclose();
    }
    lVar1 = lStack_50;
    lStack_50 = 0;
    if (lVar1 != 0) {
      _fclose();
    }
  }
  return;
}



/* Entry: 1092b2c5c; end: 1092b2f93;  */

long * FUN_1092b2c5c(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plStack_98;
  undefined7 uStack_90;
  undefined1 uStack_89;
  undefined7 uStack_88;
  char cStack_81;
  long *plStack_80;
  long *plStack_78;
  char cStack_69;
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  undefined1 uStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(param_2 + 8))(&plStack_98,param_3);
  if (param_4 == 0) {
    plVar5 = (long *)0x60;
    __Znwm();
    cVar1 = cStack_81;
    plVar3 = plStack_98;
    plVar4 = plVar5 + 1;
    *plVar4 = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_110ae87d8;
    plVar6 = plVar5 + 3;
    uStack_68 = uStack_90;
    uStack_61 = uStack_89;
    uStack_60 = uStack_88;
    uStack_90 = 0;
    uStack_89 = 0;
    uStack_88 = 0;
    cStack_81 = '\0';
    plStack_98 = (long *)0x0;
    FUN_1092b8a1c(plVar6,param_2 + 0x48);
    *(undefined1 *)(plVar5 + 8) = 0;
    plVar5[3] = (long)&PTR_FUN_110ae8f30;
    plVar5[9] = (long)plVar3;
    plVar5[10] = CONCAT17(uStack_61,uStack_68);
    *(ulong *)((long)plVar5 + 0x57) = CONCAT71(uStack_60,uStack_61);
    *(char *)((long)plVar5 + 0x5f) = cVar1;
    plVar3 = (long *)0x38;
    plStack_80 = plVar6;
    plStack_78 = plVar5;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_FUN_110ae8828;
    plStack_80 = (long *)0x0;
    plStack_78 = (long *)0x0;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3[3] = (long)&PTR_FUN_110ae8c48;
    plVar3[4] = (long)plVar6;
    plVar3[5] = (long)plVar5;
    plVar3[6] = (long)plVar6;
    do {
      lVar7 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar6 = plVar3;
    if (lVar7 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar6 = plVar5;
    }
    *param_1 = (long)(plVar3 + 3);
    param_1[1] = (long)plVar3;
    if (plStack_78 == (long *)0x0) goto LAB_1092b2ed0;
    plVar3 = plStack_78 + 1;
    do {
      lVar7 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar5 = plStack_78;
    } while (cVar1 != '\0');
  }
  else {
    plVar3 = (long *)0x88;
    __Znwm();
    plVar5 = plVar3 + 1;
    *plVar5 = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_DAT_110ae8878;
    plVar6 = plVar3 + 3;
    plStack_78 = (long *)CONCAT17(uStack_89,uStack_90);
    plStack_80 = plStack_98;
    cStack_69 = cStack_81;
    plStack_98 = (long *)0x0;
    uStack_90 = 0;
    uStack_89 = 0;
    uStack_88 = 0;
    cStack_81 = '\0';
    FUN_1092bbb34(plVar6,&plStack_80,param_4,param_2 + 0x48);
    if (cStack_69 < '\0') {
      __ZdlPv(plStack_80);
    }
    uStack_68 = SUB87(plVar6,0);
    uStack_61 = (undefined1)((ulong)plVar6 >> 0x38);
    uStack_60 = SUB87(plVar3,0);
    uStack_59 = (undefined1)((ulong)plVar3 >> 0x38);
    plVar4 = (long *)0x38;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_FUN_110ae8828;
    uStack_68 = 0;
    uStack_61 = 0;
    uStack_60 = 0;
    uStack_59 = 0;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4[3] = (long)&PTR_FUN_110ae8c48;
    plVar4[4] = (long)plVar6;
    plVar4[5] = (long)plVar3;
    plVar4[6] = (long)plVar6;
    do {
      lVar7 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar6 = plVar4;
    if (lVar7 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar6 = plVar3;
    }
    *param_1 = (long)(plVar4 + 3);
    param_1[1] = (long)plVar4;
    plVar5 = (long *)CONCAT17(uStack_59,uStack_60);
    if (plVar5 == (long *)0x0) goto LAB_1092b2ed0;
    plVar3 = plVar5 + 1;
    do {
      lVar7 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    plVar6 = plVar5;
  }
LAB_1092b2ed0:
  if (cStack_81 < '\0') {
    plVar6 = plStack_98;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    FUN_1092b34e8(&plStack_80);
    if (cStack_81 < '\0') {
      __ZdlPv(plStack_98);
    }
    __Unwind_Resume();
    (**(code **)plVar6[0x1b])();
    (**(code **)plVar6[0x13])();
    (**(code **)plVar6[0xb])();
    func_0x0001092b3360(plVar6 + 8);
    (**(code **)plVar6[1])();
    return plVar6;
  }
  return plVar6;
}



/* Entry: 1092b2f94; end: 1092b2ff7;  */

long FUN_1092b2f94(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 0xd8))();
  (*(code *)**(undefined8 **)(param_1 + 0x98))();
  (*(code *)**(undefined8 **)(param_1 + 0x58))();
  func_0x0001092b3360(param_1 + 0x40);
  (*(code *)**(undefined8 **)(param_1 + 8))();
  return param_1;
}



/* Entry: 1092b2ff8; end: 1092b2ffb;  */

undefined8 * FUN_1092b2ff8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ae8758;
  (**(code **)param_1[0x1c])();
  (**(code **)param_1[0x14])();
  (**(code **)param_1[0xc])();
  func_0x0001092b3360(param_1 + 9);
  (**(code **)param_1[2])();
  return param_1;
}



/* Entry: 1092b2ffc; end: 1092b32d7;  */

void FUN_1092b2ffc(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *apuStack_260 [7];
  undefined8 uStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 *apuStack_210 [7];
  undefined8 uStack_1d8;
  undefined8 *apuStack_1d0 [7];
  undefined8 uStack_198;
  undefined8 *apuStack_190 [7];
  undefined8 uStack_158;
  undefined8 *apuStack_150 [7];
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 *apuStack_100 [7];
  undefined8 uStack_c8;
  undefined8 *apuStack_c0 [7];
  undefined8 uStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (undefined8 *)0x118;
  __Znwm();
  uVar6 = *param_2;
  (**(code **)(param_2[1] + 0x10))(apuStack_260);
  plStack_220 = (long *)param_2[9];
  uStack_228 = param_2[8];
  param_2[8] = 0;
  param_2[9] = 0;
  uStack_218 = param_2[10];
  (**(code **)(param_2[0xb] + 0x10))(apuStack_210);
  uStack_1d8 = param_2[0x12];
  (**(code **)(param_2[0x13] + 0x10))(apuStack_1d0);
  uStack_198 = param_2[0x1a];
  (**(code **)(param_2[0x1b] + 0x10))(apuStack_190,param_2 + 0x1b);
  uStack_158 = uVar6;
  (*(code *)apuStack_260[0][2])(apuStack_150,apuStack_260);
  plStack_110 = plStack_220;
  uStack_118 = uStack_228;
  uStack_228 = 0;
  plStack_220 = (long *)0x0;
  uStack_108 = uStack_218;
  (*(code *)apuStack_210[0][2])(apuStack_100,apuStack_210);
  uStack_c8 = uStack_1d8;
  (*(code *)apuStack_1d0[0][2])(apuStack_c0,apuStack_1d0);
  uStack_88 = uStack_198;
  (*(code *)apuStack_190[0][2])(apuStack_80,apuStack_190);
  *puVar5 = &PTR_DAT_110ae8758;
  puVar5[1] = uStack_158;
  (*(code *)apuStack_150[0][2])(puVar5 + 2,apuStack_150);
  puVar5[10] = plStack_110;
  puVar5[9] = uStack_118;
  uStack_118 = 0;
  plStack_110 = (long *)0x0;
  puVar5[0xb] = uStack_108;
  (*(code *)apuStack_100[0][2])(puVar5 + 0xc,apuStack_100);
  puVar5[0x13] = uStack_c8;
  (*(code *)apuStack_c0[0][2])(puVar5 + 0x14,apuStack_c0);
  puVar5[0x1b] = uStack_88;
  (*(code *)apuStack_80[0][2])(puVar5 + 0x1c,apuStack_80);
  (*(code *)*apuStack_80[0])(apuStack_80);
  (*(code *)*apuStack_c0[0])(apuStack_c0);
  (*(code *)*apuStack_100[0])(apuStack_100);
  plVar4 = plStack_110;
  if (plStack_110 != (long *)0x0) {
    plVar1 = plStack_110 + 1;
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
      (**(code **)(*plStack_110 + 0x10))(plStack_110);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  (*(code *)*apuStack_150[0])(apuStack_150);
  *puVar5 = &PTR_FUN_110ae8700;
  *param_1 = puVar5;
  (*(code *)*apuStack_190[0])(apuStack_190);
  (*(code *)*apuStack_1d0[0])(apuStack_1d0);
  (*(code *)*apuStack_210[0])(apuStack_210);
  plVar4 = plStack_220;
  if (plStack_220 != (long *)0x0) {
    plVar1 = plStack_220 + 1;
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
      (**(code **)(*plStack_220 + 0x10))(plStack_220);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  (*(code *)*apuStack_260[0])(apuStack_260);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  FUN_1092b32ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092b32d8; end: 1092b32eb;  */

void FUN_1092b32d8(void)

{
  FUN_1092b32ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092b32ec; end: 1092b340f;  */

undefined8 * FUN_1092b32ec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ae8758;
  (**(code **)param_1[0x1c])();
  (**(code **)param_1[0x14])();
  (**(code **)param_1[0xc])();
  func_0x0001092b3360(param_1 + 9);
  (**(code **)param_1[2])();
  return param_1;
}



/* Entry: 1092b3410; end: 1092b341f;  */

void FUN_1092b3410(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae8788;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1092b3420; end: 1092b343f;  */

void FUN_1092b3420(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae8788;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092b3440; end: 1092b344f;  */

void FUN_1092b3440(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001092b3448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1092b3450; end: 1092b34a7;  */

long FUN_1092b3450(long param_1)

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



/* Entry: 1092b34a8; end: 1092b34b7;  */

void FUN_1092b34a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae87d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1092b34b8; end: 1092b34d7;  */

void FUN_1092b34b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae87d8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092b34d8; end: 1092b34e7;  */

void FUN_1092b34d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001092b34e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1092b34e8; end: 1092b353f;  */

long FUN_1092b34e8(long param_1)

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



/* Entry: 1092b3540; end: 1092b354f;  */

void FUN_1092b3540(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae8828;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1092b3550; end: 1092b356f;  */

void FUN_1092b3550(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae8828;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092b3570; end: 1092b358f;  */

void FUN_1092b3570(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001092b3578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1092b3590; end: 1092b35af;  */

void FUN_1092b3590(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ae8878;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092b35b0; end: 1092b35bf;  */

void FUN_1092b35b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001092b35b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1092b35c0; end: 1092b3617;  */

long FUN_1092b35c0(long param_1)

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



/* Entry: 1092b3618; end: 1092b368b;  */

void FUN_1092b3618(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001092b361c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))();
  return;
}



/* Entry: 1092b368c; end: 1092b3817;  */

void FUN_1092b368c(undefined8 *param_1,long param_2,long param_3,ulong param_4,undefined8 *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 **ppuVar12;
  long *plVar14;
  undefined8 **ppuVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  long lVar18;
  long lVar19;
  long *plVar20;
  undefined1 auStack_200 [24];
  undefined4 uStack_1e8;
  undefined8 **ppuStack_1e0;
  code **ppcStack_1d8;
  code **ppcStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 **ppuStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  code *pcStack_198;
  undefined8 *apuStack_190 [7];
  code *pcStack_158;
  undefined8 *apuStack_150 [7];
  long lStack_118;
  long lStack_110;
  code **ppcStack_108;
  code **ppcStack_100;
  undefined8 *puStack_f8;
  long *plStack_f0;
  undefined8 **ppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  code *pcStack_c8;
  undefined8 *apuStack_c0 [7];
  code *pcStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  undefined1 *puVar13;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = (long *)0x18;
  uVar16 = param_4;
  puVar11 = param_5;
  __Znwm();
  lVar18 = 0x1132cee70;
  if (param_2 != 0) {
    lVar18 = param_2;
  }
  *plVar6 = lVar18;
  plVar6[1] = param_3;
  plVar6[2] = param_4;
  pcStack_c8 = (code *)*param_5;
  (**(code **)(param_5[1] + 0x10))(apuStack_c0,param_5 + 1);
  *param_1 = plVar6;
  puVar7 = (undefined8 *)0x60;
  __Znwm();
  pcStack_88 = pcStack_c8;
  (*(code *)apuStack_c0[0][2])(apuStack_80,apuStack_c0);
  *puVar7 = &PTR_FUN_110ae8920;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = plVar6;
  puVar7[4] = pcStack_88;
  ppuVar15 = apuStack_80;
  (*(code *)apuStack_80[0][2])(puVar7 + 5);
  param_1[1] = puVar7;
  (*(code *)*apuStack_80[0])(apuStack_80);
  ppuVar8 = apuStack_c0;
  (*(code *)*apuStack_c0[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar15 != 0) {
    ___cxa_begin_catch(ppuVar8);
    __ZdlPv(plVar6);
    (*pcStack_c8)(&pcStack_c8);
    ___cxa_rethrow();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1092b37e4);
    (*pcVar4)();
  }
  __Unwind_Resume(ppuVar8);
  ppuVar9 = ppuVar8;
  func_0x000104bd46a0();
  pcStack_d8 = FUN_1092b3818;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = (undefined8 *)0x20;
  uVar17 = uVar16;
  lStack_110 = param_2;
  ppcStack_108 = &pcStack_88;
  ppcStack_100 = &pcStack_c8;
  puStack_f8 = puVar7;
  plStack_f0 = plVar6;
  ppuStack_e8 = ppuVar8;
  puStack_e0 = &stack0xfffffffffffffff0;
  __Znwm();
  ppuVar8 = (undefined8 **)0x1132cee70;
  if (ppuVar9 != (undefined8 **)0x0) {
    ppuVar8 = ppuVar9;
  }
  *puVar10 = ppuVar8;
  puVar10[1] = ppuVar15;
  puVar10[2] = uVar16;
  puVar10[3] = ppuVar8;
  pcStack_198 = (code *)*puVar11;
  (**(code **)(puVar11[1] + 0x10))(apuStack_190,puVar11 + 1);
  *extraout_x8 = puVar10;
  puVar11 = (undefined8 *)0x60;
  __Znwm();
  pcStack_158 = pcStack_198;
  (*(code *)apuStack_190[0][2])(apuStack_150,apuStack_190);
  *puVar11 = &PTR_FUN_110ae8980;
  puVar11[1] = 0;
  puVar11[2] = 0;
  puVar11[3] = puVar10;
  puVar11[4] = pcStack_158;
  ppuVar15 = apuStack_150;
  (*(code *)apuStack_150[0][2])(puVar11 + 5);
  extraout_x8[1] = puVar11;
  (*(code *)*apuStack_150[0])(apuStack_150);
  ppuVar8 = apuStack_190;
  (*(code *)*apuStack_190[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar15 != 0) {
    ___cxa_begin_catch(ppuVar8);
    __ZdlPv(puVar10);
    (*pcStack_198)(&pcStack_198);
    ___cxa_rethrow();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1092b3970);
    (*pcVar4)();
  }
  __Unwind_Resume(ppuVar8);
  ppuVar12 = ppuVar8;
  func_0x000104bd46a0();
  pcStack_1a8 = FUN_1092b39a4;
  plVar6 = *ppuVar12;
  ppuStack_1e0 = ppuVar9;
  ppcStack_1d8 = &pcStack_158;
  ppcStack_1d0 = &pcStack_198;
  puStack_1c8 = puVar11;
  puStack_1c0 = puVar10;
  ppuStack_1b8 = ppuVar8;
  ppuStack_1b0 = &puStack_e0;
  if (plVar6 == (long *)0x0) {
    puVar11 = (undefined8 *)0x30;
    __Znwm();
    puVar11[1] = 0;
    puVar11[2] = 0;
    *puVar11 = &PTR_DAT_110ae89e0;
    puVar11[4] = 0;
    puVar11[5] = 0;
    extraout_x8_00[1] = puVar11;
    puVar11[3] = 0x1132cee70;
    *extraout_x8_00 = puVar11 + 3;
  }
  else {
    if ((undefined8 **)plVar6[1] < ppuVar15 || (ulong)(plVar6[1] - (long)ppuVar15) < uVar17) {
      puVar13 = auStack_200;
      func_0x000107c31940(puVar13,&UNK_10f563b47);
      uVar5 = SUB84(puVar13,0);
      __ZSt19uncaught_exceptionsv();
      uStack_1e8 = uVar5;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (auStack_200,&UNK_10f563b12,0x16);
      FUN_1092a22e8(auStack_200);
      plVar6 = *ppuVar12;
    }
    plVar14 = (long *)0x18;
    __Znwm();
    lVar19 = plVar6[2];
    lVar18 = 0x1132cee70;
    if (*plVar6 != 0) {
      lVar18 = *plVar6 + (long)ppuVar15;
    }
    *plVar14 = lVar18;
    plVar14[1] = uVar17;
    plVar14[2] = lVar19 + (long)ppuVar15;
    plVar20 = ppuVar12[1];
    if (plVar20 != (long *)0x0) {
      plVar1 = plVar20 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *extraout_x8_00 = plVar14;
    puVar11 = (undefined8 *)0x30;
    __Znwm();
    if (plVar20 == (long *)0x0) {
      *puVar11 = &PTR_FUN_110ae8a30;
      puVar11[1] = 0;
      puVar11[2] = 0;
      puVar11[3] = plVar14;
      puVar11[4] = plVar6;
      puVar11[5] = 0;
      extraout_x8_00[1] = puVar11;
    }
    else {
      plVar1 = plVar20 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *puVar11 = &PTR_FUN_110ae8a30;
      puVar11[1] = 0;
      puVar11[2] = 0;
      puVar11[3] = plVar14;
      puVar11[4] = plVar6;
      puVar11[5] = plVar20;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      extraout_x8_00[1] = puVar11;
      do {
        lVar18 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar18 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
      }
    }
    if (plVar20 != (long *)0x0) {
      plVar6 = plVar20 + 1;
      do {
        lVar18 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar18 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
      }
    }
  }
  return;
}



/* Entry: 1092b3818; end: 1092b39a3;  */

void FUN_1092b3818(undefined8 *param_1,long param_2,long param_3,ulong param_4,undefined8 *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar11;
  ulong uVar12;
  undefined8 *extraout_x8;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  undefined1 auStack_130 [24];
  undefined4 uStack_118;
  long lStack_110;
  code **ppcStack_108;
  code **ppcStack_100;
  undefined8 *puStack_f8;
  long *plStack_f0;
  undefined8 **ppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  code *pcStack_c8;
  undefined8 *apuStack_c0 [7];
  code *pcStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  undefined1 *puVar10;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = (long *)0x20;
  uVar12 = param_4;
  __Znwm();
  lVar13 = 0x1132cee70;
  if (param_2 != 0) {
    lVar13 = param_2;
  }
  *plVar6 = lVar13;
  plVar6[1] = param_3;
  plVar6[2] = param_4;
  plVar6[3] = lVar13;
  pcStack_c8 = (code *)*param_5;
  (**(code **)(param_5[1] + 0x10))(apuStack_c0,param_5 + 1);
  *param_1 = plVar6;
  puVar7 = (undefined8 *)0x60;
  __Znwm();
  pcStack_88 = pcStack_c8;
  (*(code *)apuStack_c0[0][2])(apuStack_80,apuStack_c0);
  *puVar7 = &PTR_FUN_110ae8980;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = plVar6;
  puVar7[4] = pcStack_88;
  ppuVar11 = apuStack_80;
  (*(code *)apuStack_80[0][2])(puVar7 + 5);
  param_1[1] = puVar7;
  (*(code *)*apuStack_80[0])(apuStack_80);
  ppuVar8 = apuStack_c0;
  (*(code *)*apuStack_c0[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar11 != 0) {
    ___cxa_begin_catch(ppuVar8);
    __ZdlPv(plVar6);
    (*pcStack_c8)(&pcStack_c8);
    ___cxa_rethrow();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1092b3970);
    (*pcVar4)();
  }
  __Unwind_Resume(ppuVar8);
  ppuVar9 = ppuVar8;
  func_0x000104bd46a0();
  pcStack_d8 = FUN_1092b39a4;
  plVar16 = *ppuVar9;
  lStack_110 = param_2;
  ppcStack_108 = &pcStack_88;
  ppcStack_100 = &pcStack_c8;
  puStack_f8 = puVar7;
  plStack_f0 = plVar6;
  ppuStack_e8 = ppuVar8;
  puStack_e0 = &stack0xfffffffffffffff0;
  if (plVar16 == (long *)0x0) {
    puVar7 = (undefined8 *)0x30;
    __Znwm();
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_DAT_110ae89e0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    extraout_x8[1] = puVar7;
    puVar7[3] = 0x1132cee70;
    *extraout_x8 = puVar7 + 3;
  }
  else {
    if ((undefined8 **)plVar16[1] < ppuVar11 || (ulong)(plVar16[1] - (long)ppuVar11) < uVar12) {
      puVar10 = auStack_130;
      func_0x000107c31940(puVar10,&UNK_10f563b47);
      uVar5 = SUB84(puVar10,0);
      __ZSt19uncaught_exceptionsv();
      uStack_118 = uVar5;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (auStack_130,&UNK_10f563b12,0x16);
      FUN_1092a22e8(auStack_130);
      plVar16 = *ppuVar9;
    }
    plVar6 = (long *)0x18;
    __Znwm();
    lVar14 = plVar16[2];
    lVar13 = 0x1132cee70;
    if (*plVar16 != 0) {
      lVar13 = *plVar16 + (long)ppuVar11;
    }
    *plVar6 = lVar13;
    plVar6[1] = uVar12;
    plVar6[2] = lVar14 + (long)ppuVar11;
    plVar15 = ppuVar9[1];
    if (plVar15 != (long *)0x0) {
      plVar1 = plVar15 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *extraout_x8 = plVar6;
    puVar7 = (undefined8 *)0x30;
    __Znwm();
    if (plVar15 == (long *)0x0) {
      *puVar7 = &PTR_FUN_110ae8a30;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = plVar6;
      puVar7[4] = plVar16;
      puVar7[5] = 0;
      extraout_x8[1] = puVar7;
    }
    else {
      plVar1 = plVar15 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *puVar7 = &PTR_FUN_110ae8a30;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = plVar6;
      puVar7[4] = plVar16;
      puVar7[5] = plVar15;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      extraout_x8[1] = puVar7;
      do {
        lVar13 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
      }
    }
    if (plVar15 != (long *)0x0) {
      plVar6 = plVar15 + 1;
      do {
        lVar13 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
      }
    }
  }
  return;
}



/* Entry: 1092b39a4; end: 1092b3bcb;  */

void FUN_1092b39a4(undefined8 *param_1,undefined8 *param_2,ulong param_3,ulong param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined1 auStack_60 [24];
  undefined4 uStack_48;
  undefined1 *puVar5;
  
  plVar11 = (long *)*param_2;
  if (plVar11 == (long *)0x0) {
    puVar7 = (undefined8 *)0x30;
    __Znwm();
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_DAT_110ae89e0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    param_1[1] = puVar7;
    puVar7[3] = 0x1132cee70;
    *param_1 = puVar7 + 3;
  }
  else {
    if ((ulong)plVar11[1] < param_3 || plVar11[1] - param_3 < param_4) {
      puVar5 = auStack_60;
      func_0x000107c31940(puVar5,&UNK_10f563b47);
      uVar4 = SUB84(puVar5,0);
      __ZSt19uncaught_exceptionsv();
      uStack_48 = uVar4;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (auStack_60,&UNK_10f563b12,0x16);
      FUN_1092a22e8(auStack_60);
      plVar11 = (long *)*param_2;
    }
    plVar6 = (long *)0x18;
    __Znwm();
    lVar9 = plVar11[2];
    lVar8 = 0x1132cee70;
    if (*plVar11 != 0) {
      lVar8 = *plVar11 + param_3;
    }
    *plVar6 = lVar8;
    plVar6[1] = param_4;
    plVar6[2] = lVar9 + param_3;
    plVar10 = (long *)param_2[1];
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *param_1 = plVar6;
    puVar7 = (undefined8 *)0x30;
    __Znwm();
    if (plVar10 == (long *)0x0) {
      *puVar7 = &PTR_FUN_110ae8a30;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = plVar6;
      puVar7[4] = plVar11;
      puVar7[5] = 0;
      param_1[1] = puVar7;
    }
    else {
      plVar1 = plVar10 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *puVar7 = &PTR_FUN_110ae8a30;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = plVar6;
      puVar7[4] = plVar11;
      puVar7[5] = plVar10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      param_1[1] = puVar7;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    if (plVar10 != (long *)0x0) {
      plVar11 = plVar10 + 1;
      do {
        lVar8 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  return;
}



/* Entry: 1092b3bcc; end: 1092b3df3;  */

void FUN_1092b3bcc(undefined8 *param_1,long *param_2,ulong param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  undefined1 auStack_60 [24];
  undefined4 uStack_48;
  undefined1 *puVar7;
  
  lVar11 = *param_2;
  if (lVar11 == 0) {
    puVar9 = (undefined8 *)0x38;
    __Znwm();
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = &PTR_DAT_110ae8a90;
    puVar9[4] = 0;
    puVar9[5] = 0;
    puVar9[6] = 0x1132cee70;
    param_1[1] = puVar9;
    puVar9[3] = 0x1132cee70;
    *param_1 = puVar9 + 3;
  }
  else {
    if (*(ulong *)(lVar11 + 8) < param_3 || *(ulong *)(lVar11 + 8) - param_3 < param_4) {
      puVar7 = auStack_60;
      func_0x000107c31940(puVar7,&UNK_10f563b47);
      uVar6 = SUB84(puVar7,0);
      __ZSt19uncaught_exceptionsv();
      uStack_48 = uVar6;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (auStack_60,&UNK_10f563b29,0x1d);
      FUN_1092a22e8(auStack_60);
      lVar11 = *param_2;
    }
    plVar8 = (long *)0x20;
    __Znwm();
    lVar3 = *(long *)(lVar11 + 0x10);
    lVar2 = 0x1132cee70;
    if (*(long *)(lVar11 + 0x18) != 0) {
      lVar2 = *(long *)(lVar11 + 0x18) + param_3;
    }
    *plVar8 = lVar2;
    plVar8[1] = param_4;
    plVar8[2] = lVar3 + param_3;
    plVar8[3] = lVar2;
    plVar10 = (long *)param_2[1];
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    *param_1 = plVar8;
    puVar9 = (undefined8 *)0x30;
    __Znwm();
    if (plVar10 == (long *)0x0) {
      *puVar9 = &PTR_FUN_110ae8ae0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = plVar8;
      puVar9[4] = lVar11;
      puVar9[5] = 0;
      param_1[1] = puVar9;
    }
    else {
      plVar1 = plVar10 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      *puVar9 = &PTR_FUN_110ae8ae0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = plVar8;
      puVar9[4] = lVar11;
      puVar9[5] = plVar10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      param_1[1] = puVar9;
      do {
        lVar11 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    if (plVar10 != (long *)0x0) {
      plVar8 = plVar10 + 1;
      do {
        lVar11 = *plVar8;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  return;
}



/* Entry: 1092b3df4; end: 1092b3e67;  */

void FUN_1092b3df4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae8920;
  (**(code **)param_1[5])();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 1092b3e68; end: 1092b3eab;  */

void FUN_1092b3e68(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    __ZdlPv();
  }
  (**(code **)(param_1 + 0x20))(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x0001092b3ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x28))((undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1092b3eac; end: 1092b3ee7;  */

long FUN_1092b3eac(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae8960);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1092b3ee8; end: 1092b3eeb;  */

void FUN_1092b3ee8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092b3eec; end: 1092b3f5f;  */

void FUN_1092b3eec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae8980;
  (**(code **)param_1[5])();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 1092b3f60; end: 1092b3fa3;  */

void FUN_1092b3f60(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    __ZdlPv();
  }
  (**(code **)(param_1 + 0x20))(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x0001092b3f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x28))((undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1092b3fa4; end: 1092b3fdf;  */

long FUN_1092b3fa4(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae89c0);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1092b3fe0; end: 1092b3ff3;  */

void FUN_1092b3fe0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092b3ff4; end: 1092b4013;  */

void FUN_1092b3ff4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ae89e0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092b4014; end: 1092b401b;  */

void FUN_1092b4014(void)

{
  return;
}



/* Entry: 1092b401c; end: 1092b40e7;  */

void FUN_1092b401c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae8a30;
  FUN_1092b0918(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 1092b40e8; end: 1092b40fb;  */

void FUN_1092b40e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092b40fc; end: 1092b411b;  */

void FUN_1092b40fc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ae8a90;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092b411c; end: 1092b4123;  */

void FUN_1092b411c(void)

{
  return;
}



/* Entry: 1092b4124; end: 1092b41ef;  */

void FUN_1092b4124(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae8ae0;
  func_0x0001092af864(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 1092b41f0; end: 1092b41f3;  */

void FUN_1092b41f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092b41f4; end: 1092b425f;  */

undefined8 * FUN_1092b41f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_FUN_110ae8c08;
  return param_1;
}



/* Entry: 1092b4260; end: 1092b4273;  */

void FUN_1092b4260(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae8c08;
  return;
}



/* Entry: 1092b4274; end: 1092b42f7;  */

void FUN_1092b4274(undefined8 param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  
  puVar1 = (ulong *)(param_2 + 1);
  do {
    uVar4 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar4 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar4 >> 0x21 == 1) {
    func_0x000109d1b3c4(param_2,1,param_1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((param_2 != (long *)0x0) && (uVar4 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 8))(param_2);
      return;
    }
  }
  return;
}



/* Entry: 1092b42f8; end: 1092b439f;  */

void FUN_1092b42f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x150;
  __Znwm();
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
  *(undefined2 *)(puVar1 + 3) = 4;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = puVar1 + 3;
  puVar1[0x12] = 0;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x14) = 0;
  *puVar1 = &PTR_FUN_110ae8b40;
  puVar1[0x15] = *param_2;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0x32aaaba7;
  puVar1[0x25] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x20] = 0;
  puVar1[0x1f] = 0;
  *param_1 = puVar1;
  param_1[1] = puVar1;
  param_1[2] = puVar1 + 0x15;
  return;
}



/* Entry: 1092b43a0; end: 1092b4523;  */

undefined8 * FUN_1092b43a0(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110ae8b40;
  lVar7 = 0xa8;
  do {
    lVar6 = lVar7 + -0x28;
    plVar4 = *(long **)((long)param_1 + lVar7 + 0x80);
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
    lVar7 = lVar6;
  } while (lVar6 != 0x58);
  __ZNSt3__15mutexD1Ev(param_1 + 0x18);
  if (param_1[0x16] != 0) {
    FUN_1092b4274();
  }
  *param_1 = &PTR_FUN_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_FUN_110ae8c08;
  return param_1;
}



/* Entry: 1092b4524; end: 1092b45b3;  */

long * FUN_1092b4524(long *param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_2 != param_1) {
    lVar5 = *param_2;
    if (lVar5 != 0) {
      plVar4 = (long *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar4 = (long *)*param_1;
    *param_1 = lVar5;
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
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
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
  }
  return param_1;
}



/* Entry: 1092b45b4; end: 1092b45d7;  */

void FUN_1092b45b4(long param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uStack_48;
  
  puVar6 = *(ulong **)(param_1 + 0x20);
  puVar9 = puVar6 + 0xb;
  lVar7 = param_1 - (long)puVar9 >> 3;
  lVar5 = lVar7 * -0x3333333333333333;
  puVar10 = puVar9 + lVar7;
  uVar1 = *puVar6;
  uVar8 = puVar6[1];
  plVar4 = (long *)(uVar8 + 0x10);
  do {
    lVar7 = *plVar4;
    if (lVar7 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        *(long *)(uVar8 + 0x98) = lVar5;
        *(undefined1 *)(uVar8 + 0xa0) = 1;
        *(undefined8 *)(uVar8 + 0x10) = 2;
        func_0x000109d1b4dc(uVar8 + 0x18);
        __ZNSt3__15mutex4lockEv(puVar6 + 3);
        plVar4 = (long *)*puVar10;
        *puVar10 = 0;
        if (plVar4 != (long *)0x0) {
          puVar10 = (ulong *)(plVar4 + 1);
          do {
            uVar8 = *puVar10;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar10,0x10);
            if (bVar3) {
              *puVar10 = uVar8 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar8 & 0x1fffffffc) == 4) {
            do {
              uVar8 = *puVar10;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar10,0x10);
              if (bVar3) {
                *puVar10 = uVar8 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar8 - 1 == 0) {
              (**(code **)(*plVar4 + 8))();
            }
          }
        }
        uVar8 = *puVar6;
        if (uVar8 != 0) {
          uVar11 = 0;
          do {
            if ((lVar5 - uVar11 != 0) && (*puVar9 != 0)) {
              func_0x000109d17fd4(puVar6,puVar9);
              uVar8 = *puVar6;
            }
            uVar11 = uVar11 + 1;
            puVar9 = puVar9 + 5;
          } while (uVar11 < uVar8);
        }
        goto code_r0x000109d18254;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar7 >> 1 & 1) != 0) {
      __ZNSt3__15mutex4lockEv(puVar6 + 3);
      plVar4 = (long *)*puVar10;
      *puVar10 = 0;
      if (plVar4 != (long *)0x0) {
        puVar9 = (ulong *)(plVar4 + 1);
        do {
          uVar8 = *puVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar9,0x10);
          if (bVar3) {
            *puVar9 = uVar8 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar9,0x10);
            if (bVar3) {
              *puVar9 = uVar8 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plVar4 + 8))();
          }
        }
      }
code_r0x000109d18254:
      __ZNSt3__15mutex6unlockEv(puVar6 + 3);
      puVar9 = puVar6 + 2;
      do {
        uVar8 = *puVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar9,0x10);
        if (bVar3) {
          *puVar9 = uVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar8 == uVar1 - 1) {
        uStack_48 = puVar6[1];
        puVar6[1] = 0;
        if (uStack_48 != 0) {
          FUN_1092b4274(&uStack_48);
        }
      }
      return;
    }
  } while( true );
}



/* Entry: 1092b45d8; end: 1092b46af;  */

undefined1 FUN_1092b45d8(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  code *pcStack_58;
  long *plStack_50;
  undefined **ppuStack_48;
  
  plVar5 = (long *)(param_1 + 0x58 + param_2 * 0x28);
  plVar5[4] = param_1;
  FUN_1092b4524(plVar5,param_3);
  lVar6 = *plVar5;
  plVar1 = (long *)(lVar6 + 0x10);
  do {
    lVar4 = *plVar1;
    if (lVar4 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar4 = lVar6 + 0x18;
        pcStack_58 = FUN_1092b45b4;
        ppuStack_48 = &PTR_PTR_1132fed68;
        plStack_50 = plVar5;
        func_0x000109d1b588(lVar4,&pcStack_58);
        *(undefined8 *)(lVar6 + 0x10) = 0;
        plVar5[2] = (long)plVar5;
        plVar5[3] = lVar4;
        plVar5[1] = (long)FUN_1092b45b4;
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar4 >> 1 & 1) != 0) {
      func_0x000109d182ac(param_1,param_2,param_1 + 0x58);
      return 0;
    }
  } while( true );
}



/* Entry: 1092b46b0; end: 1092b489f;  */

/* WARNING: Removing unreachable block (ram,0x0001092b47ac) */

void FUN_1092b46b0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined ***pppuVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  long lStack_b50;
  undefined **ppuStack_b48;
  undefined **ppuStack_b40;
  undefined1 auStack_b38 [56];
  undefined8 uStack_b00;
  char cStack_ae9;
  undefined **appuStack_ad8 [19];
  uint auStack_a40 [624];
  undefined8 uStack_80;
  undefined1 auStack_78 [7];
  undefined1 uStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  puVar2 = auStack_78;
  FUN_1092b48a0();
  __ZNSt3__113random_deviceclEv();
  auStack_a40[0] = (uint)puVar2;
  lVar5 = 1;
  do {
    uVar1 = (int)lVar5 + ((uint)puVar2 ^ (uint)puVar2 >> 0x1e) * 0x6c078965;
    puVar2 = (undefined1 *)(ulong)uVar1;
    auStack_a40[lVar5] = uVar1;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x270);
  uStack_80 = 0;
  FUN_10926db08(&ppuStack_b48);
  pppuVar3 = &ppuStack_b48;
  FUN_1092b4db8(pppuVar3,&UNK_10f563b4f,9);
  *(uint *)((long)pppuVar3 + (long)((*pppuVar3)[-3] + 8)) =
       *(uint *)((long)pppuVar3 + (long)((*pppuVar3)[-3] + 8)) & 0xffffffb5 | 8;
  puVar4 = &uStack_70;
  FUN_1092b505c(puVar4,auStack_a40,0x40);
  FUN_1092b5150();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEy(pppuVar3,puVar4);
  FUN_10926dc5c(&uStack_b60,&ppuStack_b40,&uStack_71);
  uStack_68 = uStack_b58;
  uStack_70 = uStack_b60;
  uStack_60 = lStack_b50;
  uStack_b60 = 0;
  uStack_b58 = 0;
  lStack_b50 = 0;
  FUN_1092b4910(param_1,param_2,&uStack_70);
  if (lStack_b50 < 0) {
    __ZdlPv(uStack_b60);
  }
  appuStack_ad8[0] = &PTR_DAT_11088d708;
  ppuStack_b48 = &PTR_SUB_11088d6e0;
  ppuStack_b40 = &PTR_DAT_11088d7b0;
  if (cStack_ae9 < '\0') {
    __ZdlPv(uStack_b00);
  }
  ppuStack_b40 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_b38);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_b48,&PTR_PTR_11088d720);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_ad8);
  __ZNSt3__113random_deviceD1Ev(auStack_78);
  return;
}



/* Entry: 1092b48a0; end: 1092b490f;  */

undefined8 FUN_1092b48a0(undefined8 param_1)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  func_0x000107c31940(auStack_38,&UNK_10f517992);
  __ZNSt3__113random_deviceC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
            (param_1,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 1092b4910; end: 1092b497f;  */

void FUN_1092b4910(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[2] = param_2[2];
  }
  func_0x0001092b4d44(param_1,param_3);
  return;
}



/* Entry: 1092b4980; end: 1092b49df;  */

undefined8 * FUN_1092b4980(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae8c28;
  FUN_1092b3450(param_1 + 1);
  return param_1;
}



/* Entry: 1092b49e0; end: 1092b4ce3;  */

void FUN_1092b49e0(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined1 **ppuVar1;
  undefined4 uVar2;
  undefined8 *****pppppuVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 ****ppppuStack_50;
  long lStack_48;
  long lStack_40;
  undefined4 uStack_38;
  
  if (*(char *)(param_3[1] + 8) == '\x01') {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(&ppppuStack_50,*param_2,param_2[1]);
    }
    else {
      lStack_48 = param_2[1];
      ppppuStack_50 = (undefined8 ****)*param_2;
      lStack_40 = param_2[2];
    }
    pppppuVar3 = (undefined8 *****)ppppuStack_50;
    if (-1 < lStack_40) {
      pppppuVar3 = &ppppuStack_50;
    }
    (*(code *)*param_3)(pppppuVar3,&UNK_10f432965,param_3);
  }
  else {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(&ppppuStack_50,*param_2,param_2[1]);
    }
    else {
      lStack_48 = param_2[1];
      ppppuStack_50 = (undefined8 ****)*param_2;
      lStack_40 = param_2[2];
    }
    pppppuVar3 = (undefined8 *****)ppppuStack_50;
    if (-1 < lStack_40) {
      pppppuVar3 = &ppppuStack_50;
    }
    _fopen(pppppuVar3,&UNK_10f432965);
  }
  *param_1 = pppppuVar3;
  if (lStack_40 < 0) {
    __ZdlPv(ppppuStack_50);
  }
  if (pppppuVar3 == (undefined8 *****)0x0) {
    if (*(char *)(param_3[1] + 8) == '\x01') {
      pppppuVar3 = &ppppuStack_50;
      func_0x000107c31940(pppppuVar3,&UNK_10f563b94);
      uVar2 = SUB84(pppppuVar3,0);
      __ZSt19uncaught_exceptionsv();
      uStack_38 = uVar2;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&ppppuStack_50,&UNK_10f563b59,0x29);
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c3192c(&puStack_70,*param_2,param_2[1]);
      }
      else {
        uStack_68 = param_2[1];
        puStack_70 = (undefined1 *)*param_2;
        uStack_60 = param_2[2];
      }
      uVar5 = uStack_68;
      ppuVar1 = (undefined1 **)puStack_70;
      if (-1 < (long)uStack_60) {
        uVar5 = uStack_60 >> 0x38;
        ppuVar1 = &puStack_70;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&ppppuStack_50,ppuVar1,uVar5);
      if ((long)uStack_60 < 0) {
        __ZdlPv(puStack_70);
      }
      FUN_1092a22e8(&ppppuStack_50);
    }
    else {
      pppppuVar3 = &ppppuStack_50;
      func_0x000107c31940(pppppuVar3,&UNK_10f563b94);
      uVar2 = SUB84(pppppuVar3,0);
      __ZSt19uncaught_exceptionsv();
      uStack_38 = uVar2;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&ppppuStack_50,&UNK_10f563b83,0x10);
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c3192c(&puStack_70,*param_2,param_2[1]);
      }
      else {
        uStack_68 = param_2[1];
        puStack_70 = (undefined1 *)*param_2;
        uStack_60 = param_2[2];
      }
      uVar5 = uStack_68;
      ppuVar1 = (undefined1 **)puStack_70;
      if (-1 < (long)uStack_60) {
        uVar5 = uStack_60 >> 0x38;
        ppuVar1 = &puStack_70;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&ppppuStack_50,ppuVar1,uVar5);
      pppppuVar3 = &ppppuStack_50;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppuVar3,": ",2);
      ___error();
      uVar4 = (ulong)*(uint *)pppppuVar3;
      _strerror(uVar4);
      uVar5 = uVar4;
      _strlen();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&ppppuStack_50,uVar4,uVar5);
      if ((long)uStack_60 < 0) {
        __ZdlPv(puStack_70);
      }
      FUN_1092a22e8(&ppppuStack_50);
    }
  }
  return;
}



/* Entry: 1092b4ce4; end: 1092b4db7;  */

undefined8 * FUN_1092b4ce4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae8c28;
  FUN_1092b3450(param_1 + 1);
  return param_1;
}



/* Entry: 1092b4db8; end: 1092b4f1f;  */

long * FUN_1092b4db8(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  char acStack_68 [16];
  long lStack_58;
  
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_(acStack_68,param_1);
  if (acStack_68[0] == '\x01') {
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    lVar5 = *(long *)(lVar1 + 0x28);
    uVar3 = *(uint *)(lVar1 + 8);
    iVar6 = *(int *)(lVar1 + 0x90);
    if (iVar6 == -1) {
      __ZNKSt3__18ios_base6getlocEv(&lStack_58,lVar1);
      plVar4 = &lStack_58;
      __ZNKSt3__16locale9use_facetERNS0_2idE(plVar4,PTR___ZNSt3__15ctypeIcE2idE_110346770);
      (**(code **)(*plVar4 + 0x38))();
      __ZNSt3__16localeD1Ev(&lStack_58);
      iVar6 = (int)plVar4;
      *(int *)(lVar1 + 0x90) = iVar6;
    }
    lVar2 = param_2 + param_3;
    if ((uVar3 & 0xb0) != 0x20) {
      lVar2 = param_2;
    }
    FUN_1092b4f20(lVar5,param_2,lVar2,param_2 + param_3,lVar1,(int)(char)iVar6);
    if (lVar5 == 0) {
      lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
      __ZNSt3__18ios_base5clearEj(lVar1,*(uint *)(lVar1 + 0x20) | 5);
    }
  }
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev(acStack_68);
  return param_1;
}



/* Entry: 1092b4f20; end: 1092b505b;  */

long * FUN_1092b4f20(long *param_1,long param_2,long param_3,long param_4,long param_5,
                    undefined8 param_6)

{
  undefined8 ***pppuVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 **appuStack_68 [2];
  char cStack_51;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  plVar3 = (long *)(*(long *)(param_5 + 0x18) - (param_4 - param_2));
  if (plVar3 == (long *)0x0 || *(long *)(param_5 + 0x18) < param_4 - param_2) {
    plVar3 = (long *)0x0;
  }
  plVar4 = (long *)(param_3 - param_2);
  if (((long)plVar4 < 1) ||
     (plVar2 = param_1, (**(code **)(*param_1 + 0x60))(param_1,param_2,plVar4), plVar2 == plVar4)) {
    if (0 < (long)plVar3) {
      func_0x000104c59120(appuStack_68,plVar3,param_6);
      pppuVar1 = (undefined8 ***)appuStack_68[0];
      if (-1 < cStack_51) {
        pppuVar1 = appuStack_68;
      }
      plVar4 = param_1;
      (**(code **)(*param_1 + 0x60))(param_1,pppuVar1,plVar3);
      if (cStack_51 < '\0') {
        __ZdlPv(appuStack_68[0]);
      }
      if (plVar4 != plVar3) {
        return (long *)0x0;
      }
    }
    plVar3 = (long *)(param_4 - param_3);
    if (((long)plVar3 < 1) ||
       (plVar4 = param_1, (**(code **)(*param_1 + 0x60))(param_1,param_3,plVar3), plVar4 == plVar3))
    {
      *(undefined8 *)(param_5 + 0x18) = 0;
      return param_1;
    }
  }
  return (long *)0x0;
}



/* Entry: 1092b505c; end: 1092b514f;  */

void FUN_1092b505c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  uVar7 = param_3 + 0x1fU >> 5;
  uVar5 = (uint)param_3 & 0xff;
  uVar8 = param_3 + 0x1fU >> 5;
  uVar1 = 0;
  if ((uVar8 & 0xff) != 0) {
    uVar1 = uVar5 / ((uint)uVar8 & 0xff);
  }
  uVar6 = (ulong)uVar1;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  uVar8 = -1L << (uVar6 & 0x3f) & 0x100000000;
  if (0x3f < uVar1) {
    uVar8 = 0;
  }
  param_1[5] = uVar8;
  uVar3 = 0;
  if (uVar7 != 0) {
    uVar3 = uVar8 / uVar7;
  }
  if (uVar3 < (uVar8 ^ 0x100000000)) {
    uVar7 = uVar7 + 1;
    uVar1 = 0;
    if ((uVar7 & 0xff) != 0) {
      uVar1 = uVar5 / ((uint)uVar7 & 0xff);
    }
    uVar6 = (ulong)uVar1;
    param_1[2] = uVar6;
    param_1[3] = uVar7;
    if (uVar1 < 0x40) {
      param_1[5] = -1L << (uVar6 & 0x3f) & 0x100000000;
      goto LAB_1092b50c8;
    }
    param_1[4] = uVar7 - (byte)((char)param_3 - (char)uVar1 * (char)uVar7);
    param_1[5] = 0;
    uVar4 = 0;
  }
  else {
LAB_1092b50c8:
    uVar4 = (uint)uVar6;
    uVar1 = (uint)uVar7 & 0xff;
    uVar2 = 0;
    if ((uVar7 & 0xff) != 0) {
      uVar2 = uVar5 / uVar1;
    }
    param_1[4] = uVar7 - (uVar5 - uVar2 * uVar1);
    if (uVar6 < 0x3f) {
      param_1[6] = (0x80000000UL >> (uVar6 & 0x3f)) << (uVar6 + 1 & 0x3f);
      uVar5 = 0;
      if (uVar6 != 0) {
        uVar5 = 0xffffffff >> (ulong)(-uVar4 & 0x1f);
      }
      *(uint *)(param_1 + 7) = uVar5;
      uVar5 = 0xffffffff >> (ulong)(~uVar4 & 0x1f);
      if (0x1e < uVar6) {
        uVar5 = 0xffffffff;
      }
      goto LAB_1092b5148;
    }
  }
  param_1[6] = 0;
  uVar5 = 0xffffffff;
  *(uint *)(param_1 + 7) = 0xffffffff >> (ulong)(-uVar4 & 0x1f);
LAB_1092b5148:
  *(uint *)((long)param_1 + 0x3c) = uVar5;
  return;
}



/* Entry: 1092b5150; end: 1092b521f;  */

long FUN_1092b5150(ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_1[4] == 0) {
    lVar2 = 0;
    uVar1 = 0;
  }
  else {
    lVar2 = 0;
    uVar3 = 0;
    do {
      do {
        uVar1 = *param_1;
        func_0x000107c284a0();
      } while (param_1[5] <= (uVar1 & 0xffffffff));
      lVar2 = lVar2 << (param_1[2] & 0x3f);
      if (0x3f < param_1[2]) {
        lVar2 = 0;
      }
      lVar2 = lVar2 + (ulong)((uint)param_1[7] & (uint)uVar1);
      uVar3 = uVar3 + 1;
      uVar1 = param_1[4];
    } while (uVar3 < uVar1);
  }
  if (uVar1 < param_1[3]) {
    do {
      do {
        uVar3 = *param_1;
        func_0x000107c284a0();
      } while (param_1[6] <= (uVar3 & 0xffffffff));
      lVar2 = lVar2 << (param_1[2] + 1 & 0x3f);
      if (0x3e < param_1[2]) {
        lVar2 = 0;
      }
      lVar2 = lVar2 + (ulong)(*(uint *)((long)param_1 + 0x3c) & (uint)uVar3);
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_1[3]);
  }
  return lVar2;
}



/* Entry: 1092b5220; end: 1092b525f;  */

long * FUN_1092b5220(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  plVar1 = param_1;
  __ZSt19uncaught_exceptionsv();
  if ((int)lVar2 < (int)plVar1) {
    lVar2 = *param_1;
    _fclose(*(undefined8 *)(lVar2 + 0x40));
    *(undefined8 *)(lVar2 + 0x40) = 0;
  }
  return param_1;
}



/* Entry: 1092b5260; end: 1092b532b;  */

void FUN_1092b5260(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plStack_28;
  
  *param_1 = &PTR_FUN_110ae8c90;
  (**(code **)(*(long *)param_1[1] + 0x38))(&plStack_28);
  func_0x000109d1a244(&plStack_28);
  if (plStack_28 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_28 + 1);
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
        (**(code **)(*plStack_28 + 8))();
      }
    }
  }
  if (param_1[8] != 0) {
    _fclose();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xc);
  func_0x0001092ab60c(param_1 + 10);
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    __ZdlPv(param_1[5]);
  }
  FUN_1092b8ac8(param_1);
  return;
}



/* Entry: 1092b532c; end: 1092b532f;  */

void FUN_1092b532c(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plStack_28;
  
  *param_1 = &PTR_FUN_110ae8c90;
  (**(code **)(*(long *)param_1[1] + 0x38))(&plStack_28);
  func_0x000109d1a244(&plStack_28);
  if (plStack_28 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_28 + 1);
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
        (**(code **)(*plStack_28 + 8))();
      }
    }
  }
  if (param_1[8] != 0) {
    _fclose();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xc);
  func_0x0001092ab60c(param_1 + 10);
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    __ZdlPv(param_1[5]);
  }
  FUN_1092b8ac8(param_1);
  return;
}



/* Entry: 1092b5330; end: 1092b5343;  */

void FUN_1092b5330(void)

{
  FUN_1092b5260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092b5344; end: 1092b56eb;  */

/* WARNING: Removing unreachable block (ram,0x0001092b5784) */
/* WARNING: Removing unreachable block (ram,0x0001092b5788) */
/* WARNING: Removing unreachable block (ram,0x0001092b5790) */
/* WARNING: Removing unreachable block (ram,0x0001092b5798) */
/* WARNING: Removing unreachable block (ram,0x0001092b57a4) */
/* WARNING: Removing unreachable block (ram,0x0001092b57ac) */
/* WARNING: Removing unreachable block (ram,0x0001092b57b4) */
/* WARNING: Removing unreachable block (ram,0x0001092b57b8) */

void FUN_1092b5344(undefined8 param_1,long *****param_2,long ****param_3,long ****param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  long ****pppplVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  undefined8 *puVar9;
  undefined8 *extraout_x8;
  long lVar10;
  long ****pppplVar11;
  long ****unaff_x21;
  long ****unaff_x22;
  undefined8 *puStack_128;
  long ***ppplStack_120;
  long ***ppplStack_118;
  long ****pppplStack_110;
  long ****pppplStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined1 auStack_e8 [8];
  long *plStack_e0;
  long ***ppplStack_d8;
  long ***ppplStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long ****pppplStack_b8;
  long ****pppplStack_b0;
  long ***ppplStack_a8;
  undefined4 uStack_a0;
  long ***ppplStack_98;
  long ***ppplStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  long ***ppplStack_78;
  long ***ppplStack_70;
  long ***ppplStack_68;
  long ***ppplStack_60;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppplStack_90 = (long ***)param_4;
  if (param_4 == (long ****)0x0) {
    ppppplVar7 = (long *****)0x30;
    __Znwm();
    ppppplVar7[1] = (long ****)0x0;
    ppppplVar7[2] = (long ****)0x0;
    *ppppplVar7 = (long ****)&PTR_DAT_110ae89e0;
    ppppplVar7[4] = (long ****)0x0;
    ppppplVar7[5] = (long ****)0x0;
    pppplStack_b8 = (long ****)(ppppplVar7 + 3);
    *pppplStack_b8 = (long ***)0x1132cee70;
    ppppplVar8 = &pppplStack_b8;
    pppplStack_b0 = (long ****)ppppplVar7;
    FUN_1092b56ec(param_1);
    param_2 = (long *****)pppplStack_b0;
    pppplVar6 = param_3;
    if ((long *****)pppplStack_b0 != (long *****)0x0) {
      ppppplVar7 = (long *****)(pppplStack_b0 + 1);
      do {
        pppplVar11 = *ppppplVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
        if (bVar4) {
          *ppppplVar7 = (long ****)((long)pppplVar11 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pppplVar11 == (long ****)0x0) {
        (*(code *)(*pppplStack_b0)[2])(pppplStack_b0);
        ppppplVar8 = param_2;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppplVar6 = param_3;
      }
    }
  }
  else {
    pppplVar6 = param_2[10];
    (*(code *)(*pppplVar6)[2])(pppplVar6,param_4,8);
    pppplStack_b0 = &ppplStack_98;
    ppplStack_a8 = (long ***)&ppplStack_90;
    pppplStack_b8 = (long ****)param_2;
    ppplStack_98 = (long ***)pppplVar6;
    __ZSt19uncaught_exceptionsv();
    uStack_a0 = SUB84(pppplVar6,0);
    __ZNSt3__15mutex4lockEv(param_2 + 0xc);
    pppplVar6 = param_2[8];
    _fseek(pppplVar6,param_3,0);
    if ((int)pppplVar6 != 0) {
      pppplVar6 = &ppplStack_d8;
      func_0x000107c31940(pppplVar6,&UNK_10f563c10);
      uVar5 = SUB84(pppplVar6,0);
      __ZSt19uncaught_exceptionsv();
      plStack_c0 = (long *)CONCAT44(plStack_c0._4_4_,uVar5);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&ppplStack_d8,&UNK_10f563bdb,0x10);
      FUN_1092acc7c(&ppplStack_d8,param_3);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
      FUN_1092a22e8(&ppplStack_d8);
    }
    unaff_x22 = (long ****)ppplStack_98;
    _fread(ppplStack_98,1,ppplStack_90,param_2[8]);
    if (unaff_x22 != (long ****)ppplStack_90) {
      pppplVar6 = &ppplStack_d8;
      func_0x000107c31940(pppplVar6,&UNK_10f563c10);
      uVar5 = SUB84(pppplVar6,0);
      __ZSt19uncaught_exceptionsv();
      plStack_c0 = (long *)CONCAT44(plStack_c0._4_4_,uVar5);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&ppplStack_d8,&UNK_10f563bf4,0xf);
      pppplVar6 = &ppplStack_d8;
      FUN_1092acc7c(pppplVar6,unaff_x22);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
      FUN_1092acc7c(pppplVar6,ppplStack_90);
      FUN_1092a22e8(&ppplStack_d8);
      unaff_x22 = (long ****)ppplStack_90;
    }
    ppplStack_d8 = ppplStack_98;
    ppplStack_60 = (long ***)param_2[0xb];
    ppplStack_68 = (long ***)param_2[10];
    if (param_2[0xb] != (long ****)0x0) {
      pppplVar6 = param_2[0xb] + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppplVar6,0x10);
        if (bVar4) {
          *pppplVar6 = (long ***)((long)*pppplVar6 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pcStack_88 = FUN_1092b5f58;
    ppuStack_80 = &PTR_DAT_110ae8d50;
    ppplStack_78 = ppplStack_98;
    uStack_c8 = 0;
    plStack_c0 = (long *)0x0;
    pppplVar6 = unaff_x22;
    ppplStack_d0 = (long ***)unaff_x22;
    ppplStack_70 = (long ***)unaff_x22;
    FUN_1092b368c(auStack_e8,ppplStack_98,unaff_x22,param_3,&pcStack_88);
    FUN_1092b56ec(param_1,auStack_e8);
    if (plStack_e0 != (long *)0x0) {
      plVar1 = plStack_e0 + 1;
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
        (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e0);
      }
    }
    (*(code *)*ppuStack_80)(&ppuStack_80);
    plVar1 = plStack_c0;
    if (plStack_c0 != (long *)0x0) {
      plVar2 = plStack_c0 + 1;
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
        (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    __ZNSt3__15mutex6unlockEv(param_2 + 0xc);
    ppppplVar8 = &pppplStack_b8;
    FUN_1092b57dc();
    unaff_x21 = param_3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_1092b0918(&pppplStack_b8);
    do {
      __Unwind_Resume();
    } while ((int)pppplVar6 == 0);
    func_0x000104bd46a0(ppppplVar8);
    pcStack_f8 = FUN_1092b56ec;
    puVar9 = (undefined8 *)0xb0;
    ppplStack_120 = (long ***)unaff_x22;
    ppplStack_118 = (long ***)unaff_x21;
    pppplStack_110 = (long ****)ppppplVar8;
    pppplStack_108 = (long ****)param_2;
    puStack_100 = &stack0xfffffffffffffff0;
    __Znwm();
    *(undefined2 *)(puVar9 + 3) = 4;
    puVar9[2] = 0;
    puVar9[1] = 0x200000006;
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[7] = 0;
    puVar9[6] = 0;
    puVar9[9] = 0;
    puVar9[8] = 0;
    puVar9[0xb] = 0;
    puVar9[10] = 0;
    puVar9[0xd] = 0;
    puVar9[0xc] = 0;
    puVar9[0xf] = 0;
    puVar9[0xe] = 0;
    puVar9[0x10] = 0;
    puVar9[0x11] = puVar9 + 3;
    puVar9[0x12] = 0;
    *puVar9 = &PTR_FUN_110ae8d90;
    *(undefined1 *)(puVar9 + 0x13) = 0;
    *(undefined1 *)(puVar9 + 0x15) = 0;
    puStack_128 = puVar9;
    FUN_1092b5e04();
    *extraout_x8 = puVar9;
    FUN_1092b4274(&puStack_128,puVar9);
    return;
  }
  return;
}



/* Entry: 1092b56ec; end: 1092b57db;  */

/* WARNING: Removing unreachable block (ram,0x0001092b5784) */
/* WARNING: Removing unreachable block (ram,0x0001092b5788) */
/* WARNING: Removing unreachable block (ram,0x0001092b5790) */
/* WARNING: Removing unreachable block (ram,0x0001092b5798) */
/* WARNING: Removing unreachable block (ram,0x0001092b57a4) */
/* WARNING: Removing unreachable block (ram,0x0001092b57ac) */
/* WARNING: Removing unreachable block (ram,0x0001092b57b4) */
/* WARNING: Removing unreachable block (ram,0x0001092b57b8) */

void FUN_1092b56ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_38;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  *(undefined2 *)(puVar1 + 3) = 4;
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = puVar1 + 3;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_FUN_110ae8d90;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x15) = 0;
  puStack_38 = puVar1;
  FUN_1092b5e04();
  *param_1 = puVar1;
  FUN_1092b4274(&puStack_38,puVar1);
  return;
}



/* Entry: 1092b57dc; end: 1092b5833;  */

long * FUN_1092b57dc(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = param_1[3];
  plVar2 = param_1;
  __ZSt19uncaught_exceptionsv();
  if ((int)lVar1 < (int)plVar2) {
    (**(code **)(**(long **)(*param_1 + 0x50) + 0x18))
              (*(long **)(*param_1 + 0x50),*(undefined8 *)param_1[1],*(undefined8 *)param_1[2],8);
  }
  return param_1;
}



/* Entry: 1092b5834; end: 1092b5923;  */

/* WARNING: Removing unreachable block (ram,0x0001092b58cc) */
/* WARNING: Removing unreachable block (ram,0x0001092b58d0) */
/* WARNING: Removing unreachable block (ram,0x0001092b58d8) */
/* WARNING: Removing unreachable block (ram,0x0001092b58e0) */
/* WARNING: Removing unreachable block (ram,0x0001092b58ec) */
/* WARNING: Removing unreachable block (ram,0x0001092b58f4) */
/* WARNING: Removing unreachable block (ram,0x0001092b58fc) */
/* WARNING: Removing unreachable block (ram,0x0001092b5900) */

void FUN_1092b5834(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_38;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  *(undefined2 *)(puVar1 + 3) = 4;
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = puVar1 + 3;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_FUN_110ae8d90;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x15) = 0;
  puStack_38 = puVar1;
  FUN_1092b5fa0();
  *param_1 = puVar1;
  FUN_1092b4274(&puStack_38,puVar1);
  return;
}



/* Entry: 1092b5924; end: 1092b593b;  */

undefined8 FUN_1092b5924(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1092b593c; end: 1092b59b3;  */

void FUN_1092b593c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0xb8;
  __Znwm();
  FUN_1092b59b4();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 1092b59b4; end: 1092b59fb;  */

undefined8 * FUN_1092b59b4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ae8d10;
  FUN_1092b5a3c(param_1 + 3);
  return param_1;
}



/* Entry: 1092b59fc; end: 1092b5a0b;  */

void FUN_1092b59fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae8d10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1092b5a0c; end: 1092b5a2b;  */

void FUN_1092b5a0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae8d10;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092b5a2c; end: 1092b5a3b;  */

void FUN_1092b5a2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001092b5a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1092b5a3c; end: 1092b5e03;  */

undefined8 *
FUN_1092b5a3c(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4,undefined8 param_5
             )

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puStack_a0;
  undefined4 uStack_98;
  undefined8 **ppuStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined1 auStack_70 [24];
  undefined4 uStack_58;
  undefined1 *puVar7;
  
  lVar9 = *param_2;
  *param_2 = 0;
  uVar8 = *param_4;
  uVar2 = param_4[1];
  *param_4 = 0;
  param_4[1] = 0;
  puVar5 = param_1;
  FUN_1092b8a1c(param_1,param_5);
  uStack_98 = SUB84(puVar5,0);
  plVar6 = param_1 + 5;
  *param_1 = &PTR_FUN_110ae8c90;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar6,*param_3,param_3[1]);
    uStack_98 = SUB84(plVar6,0);
  }
  else {
    lVar11 = param_3[1];
    lVar10 = *param_3;
    param_1[7] = param_3[2];
    param_1[6] = lVar11;
    *plVar6 = lVar10;
  }
  param_1[10] = uVar8;
  param_1[8] = lVar9;
  param_1[9] = 0;
  param_1[0xb] = uVar2;
  param_1[0xc] = 0x32aaaba7;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  if (lVar9 == 0) {
    puVar7 = auStack_70;
    func_0x000107c31940(puVar7,&UNK_10f563c10);
    uVar4 = SUB84(puVar7,0);
    __ZSt19uncaught_exceptionsv();
    uStack_58 = uVar4;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (auStack_70,&UNK_10f563bac,0x10);
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      func_0x000107c3192c(&ppuStack_90,*param_3,param_3[1]);
    }
    else {
      uStack_88 = param_3[1];
      ppuStack_90 = (undefined8 **)*param_3;
      uStack_80 = param_3[2];
    }
    uVar1 = uStack_88;
    pppuVar3 = (undefined8 ***)ppuStack_90;
    if (-1 < (long)uStack_80) {
      uVar1 = uStack_80 >> 0x38;
      pppuVar3 = &ppuStack_90;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (auStack_70,pppuVar3,uVar1);
    if ((long)uStack_80 < 0) {
      __ZdlPv(ppuStack_90);
    }
    uStack_98 = SUB84(auStack_70,0);
    FUN_1092a22e8();
  }
  puStack_a0 = param_1;
  __ZSt19uncaught_exceptionsv();
  uVar8 = param_1[8];
  _fseek(uVar8,0,2);
  if ((int)uVar8 != 0) {
    puVar7 = auStack_70;
    func_0x000107c31940(puVar7,&UNK_10f563c10);
    uVar4 = SUB84(puVar7,0);
    __ZSt19uncaught_exceptionsv();
    uStack_58 = uVar4;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (auStack_70,&UNK_10f563bbd,0xe);
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      func_0x000107c3192c(&ppuStack_90,*param_3,param_3[1]);
    }
    else {
      uStack_88 = param_3[1];
      ppuStack_90 = (undefined8 **)*param_3;
      uStack_80 = param_3[2];
    }
    uVar1 = uStack_88;
    pppuVar3 = (undefined8 ***)ppuStack_90;
    if (-1 < (long)uStack_80) {
      uVar1 = uStack_80 >> 0x38;
      pppuVar3 = &ppuStack_90;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (auStack_70,pppuVar3,uVar1);
    if ((long)uStack_80 < 0) {
      __ZdlPv(ppuStack_90);
    }
    FUN_1092a22e8(auStack_70);
  }
  lVar9 = param_1[8];
  _ftell();
  if (lVar9 < 0) {
    puVar7 = auStack_70;
    func_0x000107c31940(puVar7,&UNK_10f563c10);
    uVar4 = SUB84(puVar7,0);
    __ZSt19uncaught_exceptionsv();
    uStack_58 = uVar4;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (auStack_70,&UNK_10f563bcc,0xe);
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      func_0x000107c3192c(&ppuStack_90,*param_3,param_3[1]);
    }
    else {
      uStack_88 = param_3[1];
      ppuStack_90 = (undefined8 **)*param_3;
      uStack_80 = param_3[2];
    }
    uVar1 = uStack_88;
    pppuVar3 = (undefined8 ***)ppuStack_90;
    if (-1 < (long)uStack_80) {
      uVar1 = uStack_80 >> 0x38;
      pppuVar3 = &ppuStack_90;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (auStack_70,pppuVar3,uVar1);
    if ((long)uStack_80 < 0) {
      __ZdlPv(ppuStack_90);
    }
    FUN_1092a22e8(auStack_70);
  }
  param_1[9] = lVar9;
  _fseek(param_1[8],0,0);
  FUN_1092b5220(&puStack_a0);
  return param_1;
}



/* Entry: 1092b5e04; end: 1092b5ea3;  */

undefined1 FUN_1092b5e04(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  plVar1 = (long *)(param_1 + 0x10);
  do {
    lVar4 = *plVar1;
    if (lVar4 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (*(char *)(param_1 + 0xa8) == '\x01') {
          FUN_1092b0918(param_1 + 0x98);
        }
        uVar5 = *param_2;
        *(undefined8 *)(param_1 + 0xa0) = param_2[1];
        *(undefined8 *)(param_1 + 0x98) = uVar5;
        *param_2 = 0;
        param_2[1] = 0;
        *(undefined1 *)(param_1 + 0xa8) = 1;
        *(undefined8 *)(param_1 + 0x10) = 2;
        func_0x000109d1b4dc(param_1 + 0x18);
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar4 >> 1 & 1) != 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 1092b5ea4; end: 1092b5f57;  */

undefined8 * FUN_1092b5ea4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae8d90;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    FUN_1092b0918(param_1 + 0x13);
  }
  *param_1 = &PTR_FUN_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_FUN_110ae8c08;
  return param_1;
}



/* Entry: 1092b5f58; end: 1092b5f9f;  */

void FUN_1092b5f58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001092b5f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
            (*(long **)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10),
             *(undefined8 *)(param_1 + 0x18),8);
  return;
}



/* Entry: 1092b5fa0; end: 1092b603f;  */

undefined1 FUN_1092b5fa0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  plVar1 = (long *)(param_1 + 0x10);
  do {
    lVar4 = *plVar1;
    if (lVar4 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (*(char *)(param_1 + 0xa8) == '\x01') {
          FUN_1092b0918(param_1 + 0x98);
        }
        uVar5 = *param_2;
        *(undefined8 *)(param_1 + 0xa0) = param_2[1];
        *(undefined8 *)(param_1 + 0x98) = uVar5;
        *param_2 = 0;
        param_2[1] = 0;
        *(undefined1 *)(param_1 + 0xa8) = 1;
        *(undefined8 *)(param_1 + 0x10) = 2;
        func_0x000109d1b4dc(param_1 + 0x18);
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar4 >> 1 & 1) != 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 1092b6040; end: 1092b6463;  */

void FUN_1092b6040(long *param_1,long *param_2,long *param_3,long param_4)

{
  long *plVar1;
  undefined8 ***pppuVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined **ppuStack_108;
  long *plStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  int iStack_d4;
  undefined8 **ppuStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_70;
  
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(&lStack_f0,*param_3,param_3[1]);
  }
  else {
    lStack_e8 = param_3[1];
    lStack_f0 = *param_3;
    lStack_e0 = param_3[2];
  }
  plVar6 = &lStack_f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (plVar6,0,&UNK_10f563c48,0x23);
  lStack_c8 = plVar6[1];
  ppuStack_d0 = (undefined8 **)*plVar6;
  lStack_c0 = plVar6[2];
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = 0;
  pppuVar2 = (undefined8 ***)ppuStack_d0;
  if (-1 < lStack_c0) {
    pppuVar2 = &ppuStack_d0;
  }
  (**(code **)(param_4 + 0x90))(pppuVar2,param_4 + 0x90);
  if (lStack_c0 < 0) {
    __ZdlPv(ppuStack_d0);
  }
  if (lStack_e0 < 0) {
    __ZdlPv(lStack_f0);
  }
  if (*param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_1092bb4c8(&iStack_d4,*param_2,param_3,param_4);
    if (iStack_d4 < 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      _fstat(iStack_d4,&ppuStack_d0);
      lVar5 = *param_2;
      *param_2 = 0;
      if ((iStack_d4 == 0) && (lStack_70 == 0)) {
        if (lVar5 != 0) {
          _fclose();
        }
        if (*(char *)((long)param_3 + 0x17) < '\0') {
          func_0x000107c3192c(&lStack_f0,*param_3,param_3[1]);
        }
        else {
          lStack_e8 = param_3[1];
          lStack_f0 = *param_3;
          lStack_e0 = param_3[2];
        }
        plVar6 = &lStack_f0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,&UNK_10f563c28,0x1f);
        lStack_c8 = plVar6[1];
        ppuStack_d0 = (undefined8 **)*plVar6;
        lStack_c0 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        pppuVar2 = (undefined8 ***)ppuStack_d0;
        if (-1 < lStack_c0) {
          pppuVar2 = &ppuStack_d0;
        }
        (**(code **)(param_4 + 0x90))(pppuVar2,param_4 + 0x90);
        if (lStack_c0 < 0) {
          __ZdlPv(ppuStack_d0);
        }
        if (lStack_e0 < 0) {
          __ZdlPv(lStack_f0);
        }
        FUN_1092b6494(&ppuStack_d0,&lStack_f0,param_3,param_4 + 0x40);
      }
      else {
        if (lVar5 != 0) {
          _fclose();
        }
        FUN_1092b679c(&ppuStack_d0,&lStack_f0,&iStack_d4,param_3,param_4 + 0x40);
      }
      param_1[1] = lStack_c8;
      *param_1 = (long)ppuStack_d0;
    }
    FUN_1092b6464(&iStack_d4);
    if (*param_1 != 0) {
      return;
    }
  }
  func_0x0001092b33b8(param_1);
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(&lStack_f0,*param_3,param_3[1]);
  }
  else {
    lStack_e8 = param_3[1];
    lStack_f0 = *param_3;
    lStack_e0 = param_3[2];
  }
  plVar6 = &lStack_f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (plVar6,0,&UNK_10f563c6c,0x1c);
  lStack_c8 = plVar6[1];
  ppuStack_d0 = (undefined8 **)*plVar6;
  lStack_c0 = plVar6[2];
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = 0;
  pppuVar2 = (undefined8 ***)ppuStack_d0;
  if (-1 < lStack_c0) {
    pppuVar2 = &ppuStack_d0;
  }
  (**(code **)(param_4 + 0x90))(pppuVar2,param_4 + 0x90);
  if (lStack_c0 < 0) {
    __ZdlPv(ppuStack_d0);
  }
  if (lStack_e0 < 0) {
    __ZdlPv(lStack_f0);
  }
  lStack_f8 = *param_2;
  *param_2 = 0;
  ppuStack_108 = &PTR_PTR_1132cee78;
  plVar6 = (long *)0x20;
  __Znwm();
  *plVar6 = (long)&PTR_FUN_110ae8db0;
  plVar6[1] = 0;
  plVar6[2] = 0;
  plVar6[3] = (long)&PTR_PTR_1132cee78;
  plStack_100 = plVar6;
  FUN_1092b593c(&ppuStack_d0,&lStack_f0,&lStack_f8,param_3,&ppuStack_108,param_4 + 0x40);
  plVar6 = plStack_100;
  param_1[1] = lStack_c8;
  *param_1 = (long)ppuStack_d0;
  ppuStack_d0 = (undefined8 **)0x0;
  lStack_c8 = 0;
  if (plStack_100 != (long *)0x0) {
    plVar1 = plStack_100 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_100 + 0x10))(plStack_100);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  lVar5 = lStack_f8;
  lStack_f8 = 0;
  if (lVar5 != 0) {
    _fclose();
  }
  return;
}



/* Entry: 1092b6464; end: 1092b6493;  */

int * FUN_1092b6464(int *param_1)

{
  if (-1 < *param_1) {
    _close();
  }
  return param_1;
}



/* Entry: 1092b6494; end: 1092b64f3;  */

void FUN_1092b6494(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x58;
  __Znwm();
  FUN_1092b64f4();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 1092b64f4; end: 1092b653b;  */

undefined8 * FUN_1092b64f4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ae8e10;
  FUN_1092b657c(param_1 + 3);
  return param_1;
}



/* Entry: 1092b653c; end: 1092b654b;  */

void FUN_1092b653c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae8e10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1092b654c; end: 1092b656b;  */

void FUN_1092b654c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae8e10;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092b656c; end: 1092b657b;  */

void FUN_1092b656c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001092b6574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1092b657c; end: 1092b6617;  */

undefined8 * FUN_1092b657c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_40,*param_2,param_2[1]);
  }
  else {
    uStack_38 = param_2[1];
    uStack_40 = *param_2;
    uStack_30 = param_2[2];
  }
  FUN_1092b8a1c(param_1,param_3);
  *param_1 = &PTR_FUN_110ae8e60;
  param_1[6] = uStack_38;
  param_1[5] = uStack_40;
  param_1[7] = uStack_30;
  return param_1;
}



/* Entry: 1092b6618; end: 1092b661b;  */

void FUN_1092b6618(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plStack_28;
  
  *param_1 = &PTR_FUN_110ae8e60;
  (**(code **)(*(long *)param_1[1] + 0x38))(&plStack_28);
  func_0x000109d1a244(&plStack_28);
  if (plStack_28 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_28 + 1);
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
        (**(code **)(*plStack_28 + 8))();
      }
    }
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    __ZdlPv(param_1[5]);
  }
  FUN_1092b8ac8(param_1);
  return;
}



/* Entry: 1092b661c; end: 1092b662f;  */

void FUN_1092b661c(void)

{
  FUN_1092b66ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092b6630; end: 1092b663f;  */

undefined8 FUN_1092b6630(void)

{
  return 0;
}



/* Entry: 1092b6640; end: 1092b66eb;  */

void FUN_1092b6640(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plStack_30;
  long *plStack_28;
  
  plVar4 = (long *)0x30;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_DAT_110ae89e0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plStack_30 = plVar4 + 3;
  *plStack_30 = 0x1132cee70;
  plStack_28 = plVar4;
  FUN_1092b56ec(param_1,&plStack_30);
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
  return;
}



/* Entry: 1092b66ec; end: 1092b679b;  */

void FUN_1092b66ec(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plStack_28;
  
  *param_1 = &PTR_FUN_110ae8e60;
  (**(code **)(*(long *)param_1[1] + 0x38))(&plStack_28);
  func_0x000109d1a244(&plStack_28);
  if (plStack_28 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_28 + 1);
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
        (**(code **)(*plStack_28 + 8))();
      }
    }
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    __ZdlPv(param_1[5]);
  }
  FUN_1092b8ac8(param_1);
  return;
}



/* Entry: 1092b679c; end: 1092b680b;  */

void FUN_1092b679c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x78;
  __Znwm();
  FUN_1092b680c();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 1092b680c; end: 1092b6853;  */

undefined8 * FUN_1092b680c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ae8ec8;
  FUN_1092b6894(param_1 + 3);
  return param_1;
}



/* Entry: 1092b6854; end: 1092b6863;  */

void FUN_1092b6854(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae8ec8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}


