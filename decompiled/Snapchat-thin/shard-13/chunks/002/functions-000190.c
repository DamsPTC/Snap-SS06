/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a352220; end: 10a35225f;  */

void FUN_10a352220(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x1f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 8));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a352260; end: 10a352277;  */

void FUN_10a352260(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a352278; end: 10a3523ab;  */

void FUN_10a352278(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (*(undefined8 **)(param_1 + 8) != param_2) {
    puVar2 = *(undefined8 **)(param_1 + 8) + -0x11;
    do {
      (**(code **)puVar2[10])();
      func_0x00010a07a8a8(puVar2 + 7);
      (**(code **)*puVar2)(puVar2);
      puVar1 = puVar2 + -1;
      puVar2 = puVar2 + -0x12;
    } while (puVar1 != param_2);
  }
  *(undefined8 **)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10a3523ac; end: 10a3525ff;  */

void FUN_10a3523ac(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_178 [40];
  long lStack_150;
  long alStack_148 [2];
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 uStack_120;
  long *plStack_118;
  undefined8 auStack_108 [2];
  char cStack_f1;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a352600(auStack_178);
  if (lStack_150 != 0) {
    plVar1 = (long *)(lStack_150 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lStack_150;
  FUN_10a12add4(auStack_108,*param_2 + 0x10);
  puVar6 = auStack_108;
  FUN_10a1a5d00(puVar6,param_2 + 2,*(undefined4 *)(param_2[5] + 0x1c));
  if (((ulong)puVar6 & 1) != 0) {
    func_0x000107c2b054(auStack_108,&UNK_10f64efef);
    func_0x000107c2b054(auStack_138,&UNK_10f64efef);
    FUN_10a00d0e0(&uStack_120,param_2 + 2,auStack_108,auStack_138);
    lVar7 = alStack_148[0];
    plVar1 = (long *)(alStack_148[0] + 0x10);
    do {
      lVar8 = *plVar1;
      if (lVar8 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          if (*(char *)(alStack_148[0] + 0xa8) == '\x01') {
            func_0x00010a1f6f04(alStack_148[0] + 0x98);
          }
          *(long **)(lVar7 + 0xa0) = plStack_118;
          *(undefined8 *)(lVar7 + 0x98) = uStack_120;
          uStack_120 = 0;
          plStack_118 = (long *)0x0;
          *(undefined1 *)(lVar7 + 0xa8) = 1;
          *(undefined8 *)(lVar7 + 0x10) = 2;
          FUN_109d1b4dc(lVar7 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar8 >> 1 & 1) == 0);
    lVar7 = alStack_148[0];
    alStack_148[0] = 0;
    if (lVar7 != 0) {
      func_0x0001092b4274(alStack_148);
    }
    plVar1 = plStack_118;
    if (plStack_118 != (long *)0x0) {
      plVar2 = plStack_118 + 1;
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
        (**(code **)(*plStack_118 + 0x10))(plStack_118);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    if (cStack_f1 < '\0') {
      __ZdlPv(auStack_108[0]);
    }
    func_0x000109d1a1d0(auStack_178);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_10a00946c(&UNK_10f651238);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a352590);
  (*pcVar5)();
}



/* Entry: 10a352600; end: 10a35269f;  */

undefined8 * FUN_10a352600(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
  *(undefined2 *)(puVar1 + 3) = 4;
  uVar3 = 0;
  uVar4 = 0;
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
  *puVar1 = &PTR_FUN_110bc5f30;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x15) = 0;
  ppuVar2 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[4] = 0;
  FUN_109d18960(param_1,*ppuVar2,0);
  param_1[5] = puVar1;
  param_1[6] = puVar1;
  return param_1;
}



/* Entry: 10a3526a0; end: 10a352753;  */

undefined8 * FUN_10a3526a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc5f30;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    func_0x00010a1f6f04(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a352754; end: 10a35284f;  */

void FUN_10a352754(void)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uStack_58;
  
  bRam00000001137eafef = 10;
  ppuVar4 = &PTR___tlv_bootstrap_11340ddc8;
  (*(code *)PTR___tlv_bootstrap_11340ddc8)();
  uVar6 = 0;
  uRam00000001137eafd8 = 0;
  uRam00000001137eafdf = 0;
  do {
    FUN_10a0095ac();
    uStack_58 = 0x3d00000000;
    puVar5 = &uStack_58;
    func_0x00010937f57c(puVar5,ppuVar4,&uStack_58);
    uVar1 = CONCAT53(uRam00000001137eafe3,uRam00000001137eafdf._1_3_);
    if (-1 < (char)bRam00000001137eafef) {
      uVar1 = (ulong)bRam00000001137eafef;
    }
    if (uVar1 < uVar6) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a35282c);
      (*pcVar3)();
    }
    lVar2 = CONCAT17((undefined1)uRam00000001137eafdf,uRam00000001137eafd8);
    if (-1 < (char)bRam00000001137eafef) {
      lVar2 = 0x1137eafd8;
    }
    *(undefined *)(lVar2 + uVar6) = (&UNK_10e4b07dc)[(int)puVar5];
    uVar6 = uVar6 + 1;
  } while (uVar6 != 10);
  return;
}



/* Entry: 10a352850; end: 10a3528df;  */

long FUN_10a352850(long param_1)

{
  func_0x00010a07a8a8(param_1 + 0x40);
  FUN_10a3528f8(param_1 + 0x30);
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
  return param_1;
}



/* Entry: 10a3528e0; end: 10a3528f7;  */

void FUN_10a3528e0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a3528f8; end: 10a35294f;  */

long FUN_10a3528f8(long param_1)

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



/* Entry: 10a352950; end: 10a352aeb;  */

void FUN_10a352950(long *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  puVar10 = (undefined8 *)*param_1;
  if ((ulong)(param_1[2] - (long)puVar10 >> 4) < param_4) {
    plVar4 = param_1;
    FUN_10a352aec();
    if (param_4 >> 0x3c != 0) {
      FUN_10a352bfc();
      lVar9 = *plVar4;
      if (lVar9 != 0) {
        lVar5 = plVar4[1];
        lVar7 = lVar9;
        if (lVar5 != lVar9) {
          do {
            lVar5 = lVar5 + -0x10;
            func_0x00010a1f6f04();
          } while (lVar5 != lVar9);
          lVar7 = *plVar4;
        }
        plVar4[1] = lVar9;
        __ZdlPv(lVar7);
        *plVar4 = 0;
        plVar4[1] = 0;
        plVar4[2] = 0;
      }
      return;
    }
    uVar8 = param_1[2] - *param_1 >> 3;
    if (uVar8 <= param_4) {
      uVar8 = param_4;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar8 = 0xfffffffffffffff;
    }
    func_0x00010a352b48(param_1,uVar8);
    puVar6 = (undefined8 *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar9 = param_2[1];
      uVar11 = *param_2;
      puVar6[1] = param_2[1];
      *puVar6 = uVar11;
      if (lVar9 != 0) {
        plVar4 = (long *)(lVar9 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar6 = puVar6 + 2;
    }
  }
  else {
    puVar6 = (undefined8 *)param_1[1];
    lVar9 = (long)puVar6 - (long)puVar10;
    if (param_4 <= (ulong)(lVar9 >> 4)) {
      if (param_2 != param_3) {
        do {
          func_0x00010a352b80(puVar10,param_2);
          param_2 = param_2 + 2;
          puVar10 = puVar10 + 2;
        } while (param_2 != param_3);
        puVar6 = (undefined8 *)param_1[1];
      }
      while (puVar6 != puVar10) {
        puVar6 = puVar6 + -2;
        func_0x00010a1f6f04();
      }
      param_1[1] = (long)puVar10;
      return;
    }
    puVar1 = (undefined8 *)((long)param_2 + lVar9);
    if (puVar6 != puVar10) {
      do {
        func_0x00010a352b80(puVar10,param_2);
        param_2 = param_2 + 2;
        puVar10 = puVar10 + 2;
        lVar9 = lVar9 + -0x10;
      } while (lVar9 != 0);
      puVar6 = (undefined8 *)param_1[1];
    }
    for (; puVar1 != param_3; puVar1 = puVar1 + 2) {
      lVar9 = puVar1[1];
      uVar11 = *puVar1;
      puVar6[1] = puVar1[1];
      *puVar6 = uVar11;
      if (lVar9 != 0) {
        plVar4 = (long *)(lVar9 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar6 = puVar6 + 2;
    }
  }
  param_1[1] = (long)puVar6;
  return;
}



/* Entry: 10a352aec; end: 10a352bfb;  */

void FUN_10a352aec(long *param_1)

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
        func_0x00010a1f6f04();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10a352bfc; end: 10a352c0f;  */

void FUN_10a352bfc(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  plVar4 = (long *)*plVar1;
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    lVar2 = plVar4[1];
    lVar3 = lVar5;
    if (lVar2 != lVar5) {
      do {
        lVar2 = lVar2 + -0x10;
        func_0x00010a1f6f04();
      } while (lVar2 != lVar5);
      lVar3 = *(long *)*plVar1;
    }
    plVar4[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 10a352c10; end: 10a352c43;  */

void FUN_10a352c10(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a1f6f04();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a352c44; end: 10a352cb3;  */

void FUN_10a352c44(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a1f6f04();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a352cb4; end: 10a352d43;  */

long FUN_10a352cb4(long param_1)

{
  func_0x00010a07a8a8(param_1 + 0x40);
  FUN_10a3528f8(param_1 + 0x30);
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
  return param_1;
}



/* Entry: 10a352d44; end: 10a352d5b;  */

void FUN_10a352d44(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a352d5c; end: 10a352df7;  */

undefined8 * FUN_10a352d5c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  
  if (param_1 != param_2) {
    uVar4 = param_3[1];
    puVar1 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar4 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar1 = param_3;
    }
    do {
      plVar6 = (long *)*param_1;
      bVar3 = *(byte *)((long)plVar6 + 0x17);
      uVar2 = plVar6[1];
      if (-1 < (char)bVar3) {
        uVar2 = (ulong)bVar3;
      }
      if (uVar2 == uVar4) {
        plVar5 = (long *)*plVar6;
        if (-1 < (char)bVar3) {
          plVar5 = plVar6;
        }
        _memcmp(plVar5,puVar1,uVar4);
        if ((int)plVar5 == 0) {
          return param_1;
        }
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return param_2;
}



/* Entry: 10a352df8; end: 10a352dfb;  */

void FUN_10a352df8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a352dfc; end: 10a352e0f;  */

void FUN_10a352dfc(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a352e10; end: 10a352e27;  */

void FUN_10a352e10(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a352e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a352e28; end: 10a352e5f;  */

undefined8 FUN_10a352e28(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bc5fe8);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a352e60; end: 10a352eaf;  */

void FUN_10a352e60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a352eb0; end: 10a352f47;  */

long FUN_10a352eb0(long param_1)

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



/* Entry: 10a352f48; end: 10a352f5f;  */

void FUN_10a352f48(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a352f60; end: 10a352f9f;  */

void FUN_10a352f60(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a352fa0; end: 10a352ff7;  */

void FUN_10a352fa0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a352ff8; end: 10a35309b;  */

long FUN_10a352ff8(long param_1)

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



/* Entry: 10a35309c; end: 10a3531f3;  */

void FUN_10a35309c(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_2 + 0x68);
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 0x70);
  lVar4 = *(long *)(lVar4 + 0xb8);
  if ((*(byte *)(lVar4 + 0x1e0) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a3531b8);
    (*pcVar1)();
  }
  uVar2 = *(undefined8 *)(lVar4 + 0x50);
  uStack_68 = param_5[2];
  uStack_70 = param_5[1];
  uStack_78 = *param_5;
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  pcStack_88 = FUN_10a3531f4;
  ppuStack_80 = &PTR_DAT_110bc6060;
  FUN_10a12d658(&uStack_a8,uVar2,param_3,param_4,&pcStack_88);
  puVar3 = (undefined8 *)0x38;
  __Znwm();
  puVar3[4] = uStack_a0;
  puVar3[3] = uStack_a8;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_110ba7a48;
  puVar3[6] = uStack_90;
  puVar3[5] = uStack_98;
  uStack_98 = 0;
  uStack_90 = 0;
  *param_1 = (long)(puVar3 + 3);
  param_1[1] = (long)puVar3;
  (*(code *)*ppuStack_80)(&ppuStack_80);
  lVar4 = param_2 + 0x70;
  __ZNSt3__115recursive_mutex6unlockEv(lVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a12c460(&uStack_98);
  (*(code *)*ppuStack_80)(&ppuStack_80);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 0x70);
  __Unwind_Resume(lVar4);
  return;
}



/* Entry: 10a3531f4; end: 10a35323b;  */

void FUN_10a3531f4(void)

{
  return;
}



/* Entry: 10a35323c; end: 10a3532ab;  */

void FUN_10a35323c(long param_1,undefined2 *param_2,undefined2 *param_3,long param_4)

{
  undefined2 *puVar1;
  
  if (param_4 != 0) {
    FUN_10a14f690(param_1,param_4);
    puVar1 = *(undefined2 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined2 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10a3532ac; end: 10a353403;  */

/* WARNING: Removing unreachable block (ram,0x00010a3534ec) */
/* WARNING: Removing unreachable block (ram,0x00010a3534f4) */

undefined1  [16]
FUN_10a3532ac(long *param_1,long param_2,ulong param_3,ulong param_4,undefined8 *param_5)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  code **ppcVar10;
  ulong *extraout_x8;
  long lVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  long *plStack_138;
  long *plStack_130;
  undefined1 auStack_128 [8];
  undefined1 **ppuStack_120;
  undefined8 uStack_118;
  int in_stack_fffffffffffffef8;
  undefined8 *in_stack_ffffffffffffff00;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = *(long *)(param_2 + 0x68);
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 0x70);
  lVar11 = *(long *)(lVar11 + 0xb8);
  if ((*(byte *)(lVar11 + 0x1e0) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x10a3533c8);
    (*pcVar12)();
  }
  uVar3 = *(undefined8 *)(lVar11 + 0x50);
  uStack_68 = param_5[2];
  uStack_70 = param_5[1];
  uStack_78 = *param_5;
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  pcStack_88 = FUN_10a353ad0;
  ppuStack_80 = &PTR_DAT_110bc6078;
  ppcVar10 = &pcStack_88;
  FUN_10a353404(&uStack_a8,uVar3);
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[4] = uStack_a0;
  puVar4[3] = uStack_a8;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110bc7bf0;
  puVar4[6] = uStack_90;
  puVar4[5] = uStack_98;
  uStack_98 = 0;
  uStack_90 = 0;
  *param_1 = (long)(puVar4 + 3);
  param_1[1] = (long)puVar4;
  (*(code *)*ppuStack_80)(&ppuStack_80);
  plVar5 = (long *)(param_2 + 0x70);
  __ZNSt3__115recursive_mutex6unlockEv();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar13._8_8_ = param_3;
    auVar13._0_8_ = plVar5;
    return auVar13;
  }
  ___stack_chk_fail();
  FUN_10a12c460(&uStack_98);
  (*(code *)*ppuStack_80)(&ppuStack_80);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 0x70);
  __Unwind_Resume();
  puStack_c0 = &stack0xfffffffffffffff0;
  if (param_4 != 0) {
    pcStack_b8 = FUN_10a353404;
    extraout_x8[3] = 0;
    extraout_x8[2] = 0;
    extraout_x8[1] = 0;
    *extraout_x8 = 0;
    pcVar12 = ppcVar10[1];
    if (pcVar12[8] == (code)0x1) {
      puVar4 = (undefined8 *)0x40;
      __Znwm();
      *puVar4 = *ppcVar10;
      (**(code **)(pcVar12 + 0x10))(puVar4 + 1,ppcVar10 + 1);
    }
    else {
      puVar4 = (undefined8 *)0x0;
    }
    FUN_10a353844(&plStack_138,plVar5,param_3,param_4 << 1,FUN_10a353a5c,puVar4);
    FUN_10a12c3a8(auStack_128,(long)&uStack_118 + 7,&plStack_138);
    puVar8 = auStack_128;
    FUN_10a12c8c0(extraout_x8 + 2,puVar8);
    if (ppuStack_120 != (undefined1 **)0x0) {
      plVar5 = (long *)(ppuStack_120 + 1);
      do {
        lVar11 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar11 == 0) {
        (**(code **)((long)*ppuStack_120 + 0x10))(ppuStack_120);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_120);
      }
    }
    if ((3 < (int)plStack_138) && (plStack_130 != (undefined8 *)0x0)) {
      (**(code **)*plStack_130)();
    }
    *extraout_x8 = param_3;
    extraout_x8[1] = param_4;
    auVar16._8_8_ = puVar8;
    auVar16._0_8_ = extraout_x8;
    return auVar16;
  }
  pcStack_b8 = FUN_10a353404;
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))(plVar5);
  func_0x000109899ccc();
  (**(code **)(*plVar5 + 0x2b0))(&stack0xfffffffffffffef8,plVar5,plVar6,&stack0xffffffffffffff08,1);
  FUN_10a12c3a8(extraout_x8 + 2,&stack0xffffffffffffff08,&stack0xfffffffffffffef8);
  if ((3 < in_stack_fffffffffffffef8) && (in_stack_ffffffffffffff00 != (undefined8 *)0x0)) {
    (**(code **)*in_stack_ffffffffffffff00)();
  }
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x98))(plVar5,*(undefined8 *)(extraout_x8[2] + 8));
  puVar8 = &stack0xffffffffffffff08;
  FUN_10a353620();
  plVar7 = plVar6;
  puVar9 = puVar8;
  if (plVar6 != (long *)0x0) {
    (**(code **)*plVar6)();
  }
  *extraout_x8 = (ulong)plVar5;
  extraout_x8[1] = (ulong)puVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    if (plVar6 != (long *)0x0) {
      (**(code **)*plVar6)();
    }
    FUN_10a12c460(extraout_x8 + 2);
    plVar5 = plVar7;
    __Unwind_Resume();
    uStack_118 = FUN_10a353620;
    plVar6 = plVar5;
    plStack_130 = plVar7;
    ppuStack_120 = &puStack_c0;
    (**(code **)(*plVar5 + 0x98))();
    plVar7 = plVar5;
    plStack_138 = plVar6;
    (**(code **)(*plVar5 + 0x360))(plVar5,&plStack_138);
    (**(code **)(*plVar5 + 0x350))(plVar5,&plStack_138);
    if (plStack_138 != (long *)0x0) {
      (**(code **)*plStack_138)();
    }
    auVar15._8_8_ = (ulong)plVar5 >> 1;
    auVar15._0_8_ = plVar7;
    return auVar15;
  }
  auVar14._8_8_ = puVar9;
  auVar14._0_8_ = extraout_x8;
  return auVar14;
}



/* Entry: 10a353404; end: 10a353437;  */

/* WARNING: Removing unreachable block (ram,0x00010a3534ec) */
/* WARNING: Removing unreachable block (ram,0x00010a3534f4) */

undefined1  [16]
FUN_10a353404(ulong *param_1,long *param_2,ulong param_3,ulong param_4,undefined8 *param_5)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong **ppuVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  long *plStack_88;
  long *plStack_80;
  ulong *puStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  int in_stack_ffffffffffffffa8;
  undefined8 *in_stack_ffffffffffffffb0;
  
  if (param_4 != 0) {
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    lVar10 = param_5[1];
    if (*(char *)(lVar10 + 8) == '\x01') {
      puVar6 = (undefined8 *)0x40;
      __Znwm();
      *puVar6 = *param_5;
      (**(code **)(lVar10 + 0x10))(puVar6 + 1,param_5 + 1);
    }
    else {
      puVar6 = (undefined8 *)0x0;
    }
    FUN_10a353844(&plStack_88,param_2,param_3,param_4 << 1,FUN_10a353a5c,puVar6);
    FUN_10a12c3a8(&puStack_78,(long)&uStack_68 + 7,&plStack_88);
    ppuVar9 = &puStack_78;
    FUN_10a12c8c0(param_1 + 2,ppuVar9);
    if (plStack_70 != (long *)0x0) {
      plVar3 = plStack_70 + 1;
      do {
        lVar10 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
      }
    }
    if ((3 < (int)plStack_88) && (plStack_80 != (undefined8 *)0x0)) {
      (**(code **)*plStack_80)();
    }
    *param_1 = param_3;
    param_1[1] = param_4;
    auVar13._8_8_ = ppuVar9;
    auVar13._0_8_ = param_1;
    return auVar13;
  }
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  param_1[1] = 0;
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2);
  func_0x000109899ccc();
  (**(code **)(*param_2 + 0x2b0))
            (&stack0xffffffffffffffa8,param_2,plVar3,&stack0xffffffffffffffb8,1);
  FUN_10a12c3a8(param_1 + 2,&stack0xffffffffffffffb8,&stack0xffffffffffffffa8);
  if ((3 < in_stack_ffffffffffffffa8) && (in_stack_ffffffffffffffb0 != (undefined8 *)0x0)) {
    (**(code **)*in_stack_ffffffffffffffb0)();
  }
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_1[2] + 8));
  puVar7 = &stack0xffffffffffffffb8;
  FUN_10a353620();
  plVar4 = plVar3;
  puVar8 = puVar7;
  if (plVar3 != (long *)0x0) {
    (**(code **)*plVar3)();
  }
  *param_1 = (ulong)param_2;
  param_1[1] = (ulong)puVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    if (plVar3 != (long *)0x0) {
      (**(code **)*plVar3)();
    }
    FUN_10a12c460(param_1 + 2);
    plVar3 = plVar4;
    __Unwind_Resume();
    uStack_68 = FUN_10a353620;
    plVar5 = plVar3;
    plStack_80 = plVar4;
    puStack_78 = param_1;
    plStack_70 = (long *)&stack0xfffffffffffffff0;
    (**(code **)(*plVar3 + 0x98))();
    plVar4 = plVar3;
    plStack_88 = plVar5;
    (**(code **)(*plVar3 + 0x360))(plVar3,&plStack_88);
    (**(code **)(*plVar3 + 0x350))(plVar3,&plStack_88);
    if (plStack_88 != (long *)0x0) {
      (**(code **)*plStack_88)();
    }
    auVar12._8_8_ = (ulong)plVar3 >> 1;
    auVar12._0_8_ = plVar4;
    return auVar12;
  }
  auVar11._8_8_ = puVar8;
  auVar11._0_8_ = param_1;
  return auVar11;
}



/* Entry: 10a353438; end: 10a353457;  */

void FUN_10a353438(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bc7bf0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a353458; end: 10a353463;  */

long FUN_10a353458(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x30);
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
  return param_1 + 0x28;
}



/* Entry: 10a353464; end: 10a35361f;  */

undefined1  [16] FUN_10a353464(ulong *param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long **pplVar4;
  long **pplVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long *plStack_88;
  long *plStack_80;
  ulong *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  int aiStack_58 [2];
  undefined8 *puStack_50;
  long *plStack_48;
  undefined8 *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  param_1[1] = 0;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2);
  func_0x000109899ccc();
  puStack_40 = (undefined8 *)(double)param_3;
  plStack_48 = (long *)CONCAT44(plStack_48._4_4_,3);
  (**(code **)(*param_2 + 0x2b0))(aiStack_58,param_2,plVar1,&plStack_48,1);
  if ((3 < (int)plStack_48) && (puStack_40 != (undefined8 *)0x0)) {
    (**(code **)*puStack_40)();
  }
  FUN_10a12c3a8(param_1 + 2,&plStack_48,aiStack_58);
  if ((3 < aiStack_58[0]) && (puStack_50 != (undefined8 *)0x0)) {
    (**(code **)*puStack_50)();
  }
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_1[2] + 8));
  pplVar4 = &plStack_48;
  plStack_48 = plVar1;
  FUN_10a353620();
  plVar1 = plStack_48;
  pplVar5 = pplVar4;
  if (plStack_48 != (long *)0x0) {
    (**(code **)*plStack_48)();
  }
  *param_1 = (ulong)param_2;
  param_1[1] = (ulong)pplVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar6._8_8_ = pplVar5;
    auVar6._0_8_ = param_1;
    return auVar6;
  }
  ___stack_chk_fail();
  if (plStack_48 != (long *)0x0) {
    (**(code **)*plStack_48)();
  }
  FUN_10a12c460(param_1 + 2);
  plVar2 = plVar1;
  __Unwind_Resume();
  pcStack_68 = FUN_10a353620;
  plVar3 = plVar2;
  plStack_80 = plVar1;
  puStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  (**(code **)(*plVar2 + 0x98))();
  plVar1 = plVar2;
  plStack_88 = plVar3;
  (**(code **)(*plVar2 + 0x360))(plVar2,&plStack_88);
  (**(code **)(*plVar2 + 0x350))(plVar2,&plStack_88);
  if (plStack_88 != (long *)0x0) {
    (**(code **)*plStack_88)();
  }
  auVar7._8_8_ = (ulong)plVar2 >> 1;
  auVar7._0_8_ = plVar1;
  return auVar7;
}



/* Entry: 10a353620; end: 10a3536c7;  */

undefined1  [16] FUN_10a353620(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  long *plStack_28;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x98))(param_1,*param_2);
  plVar2 = param_1;
  plStack_28 = plVar1;
  (**(code **)(*param_1 + 0x360))(param_1,&plStack_28);
  (**(code **)(*param_1 + 0x350))(param_1,&plStack_28);
  if (plStack_28 != (long *)0x0) {
    (**(code **)*plStack_28)();
  }
  auVar3._8_8_ = (ulong)param_1 >> 1;
  auVar3._0_8_ = plVar2;
  return auVar3;
}



/* Entry: 10a3536c8; end: 10a353843;  */

undefined8 *
FUN_10a3536c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  int aiStack_88 [2];
  undefined8 *puStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  undefined1 uStack_61;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  lVar5 = param_5[1];
  if (*(char *)(lVar5 + 8) == '\x01') {
    puVar4 = (undefined8 *)0x40;
    __Znwm();
    *puVar4 = *param_5;
    (**(code **)(lVar5 + 0x10))(puVar4 + 1,param_5 + 1);
  }
  else {
    puVar4 = (undefined8 *)0x0;
  }
  FUN_10a353844(aiStack_88,param_2,param_3,param_4 << 1,FUN_10a353a5c,puVar4);
  FUN_10a12c3a8(auStack_78,&uStack_61,aiStack_88);
  FUN_10a12c8c0(param_1 + 2,auStack_78);
  if (plStack_70 != (long *)0x0) {
    plVar1 = plStack_70 + 1;
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
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
    }
  }
  if ((3 < aiStack_88[0]) && (puStack_80 != (undefined8 *)0x0)) {
    (**(code **)*puStack_80)();
  }
  *param_1 = param_3;
  param_1[1] = param_4;
  return param_1;
}



/* Entry: 10a353844; end: 10a353a5b;  */

void FUN_10a353844(undefined8 param_1,long *param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  int aiStack_68 [2];
  long *plStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  func_0x000109899ccc();
  plVar5 = (long *)0x40;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110ba7960;
  plVar5[4] = param_3;
  plVar5[5] = param_4;
  plVar5[6] = param_5;
  plVar5[7] = param_6;
  plStack_80 = plVar5 + 3;
  *plStack_80 = (long)&PTR_FUN_110ba79b0;
  plStack_88 = (long *)0x0;
  uStack_90 = 0;
  plStack_78 = plVar5;
  FUN_10a12c924(&plStack_70,param_2,&plStack_80);
  aiStack_68[0] = 7;
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x98))(param_2,plStack_70);
  plStack_60 = plVar5;
  (**(code **)(*param_2 + 0x2b0))(param_1,param_2,plVar4,aiStack_68,1);
  if ((3 < aiStack_68[0]) && (plStack_60 != (long *)0x0)) {
    (**(code **)*plStack_60)();
  }
  plVar5 = plStack_70;
  if (plStack_70 != (long *)0x0) {
    (**(code **)*plStack_70)();
  }
  plVar6 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
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
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar5 = plVar6;
    }
  }
  plVar6 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar1 = plStack_88 + 1;
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
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar5 = plVar6;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if ((3 < aiStack_68[0]) && (plStack_60 != (long *)0x0)) {
    (**(code **)*plStack_60)();
  }
  if (plStack_70 != (long *)0x0) {
    (**(code **)*plStack_70)();
  }
  FUN_10a12ca94(&plStack_80);
  func_0x00010a12caec(&uStack_90);
  __Unwind_Resume();
  if (plVar5 != (long *)0x0) {
    (*(code *)*plVar5)(plVar4,plVar5);
    (**(code **)plVar5[1])();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar5);
    return;
  }
  return;
}



/* Entry: 10a353a5c; end: 10a353acf;  */

void FUN_10a353a5c(undefined8 *param_1,undefined8 param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (*(code *)*param_1)(param_2,param_1);
    (**(code **)param_1[1])();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a353ad0; end: 10a353b17;  */

void FUN_10a353ad0(void)

{
  return;
}



/* Entry: 10a353b18; end: 10a353c6f;  */

/* WARNING: Removing unreachable block (ram,0x00010a353d58) */
/* WARNING: Removing unreachable block (ram,0x00010a353d60) */

undefined1  [16]
FUN_10a353b18(long *param_1,long param_2,ulong param_3,ulong param_4,undefined8 *param_5)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  code **ppcVar10;
  ulong *extraout_x8;
  long lVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  long *plStack_138;
  long *plStack_130;
  undefined1 auStack_128 [8];
  undefined1 **ppuStack_120;
  undefined8 uStack_118;
  int in_stack_fffffffffffffef8;
  undefined8 *in_stack_ffffffffffffff00;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = *(long *)(param_2 + 0x68);
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 0x70);
  lVar11 = *(long *)(lVar11 + 0xb8);
  if ((*(byte *)(lVar11 + 0x1e0) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x10a353c34);
    (*pcVar12)();
  }
  uVar3 = *(undefined8 *)(lVar11 + 0x50);
  uStack_68 = param_5[2];
  uStack_70 = param_5[1];
  uStack_78 = *param_5;
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  pcStack_88 = FUN_10a35433c;
  ppuStack_80 = &PTR_DAT_110bc8508;
  ppcVar10 = &pcStack_88;
  FUN_10a353c70(&uStack_a8,uVar3);
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[4] = uStack_a0;
  puVar4[3] = uStack_a8;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110bc84c8;
  puVar4[6] = uStack_90;
  puVar4[5] = uStack_98;
  uStack_98 = 0;
  uStack_90 = 0;
  *param_1 = (long)(puVar4 + 3);
  param_1[1] = (long)puVar4;
  (*(code *)*ppuStack_80)(&ppuStack_80);
  plVar5 = (long *)(param_2 + 0x70);
  __ZNSt3__115recursive_mutex6unlockEv();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar13._8_8_ = param_3;
    auVar13._0_8_ = plVar5;
    return auVar13;
  }
  ___stack_chk_fail();
  FUN_10a12c460(&uStack_98);
  (*(code *)*ppuStack_80)(&ppuStack_80);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 0x70);
  __Unwind_Resume();
  puStack_c0 = &stack0xfffffffffffffff0;
  if (param_4 != 0) {
    pcStack_b8 = FUN_10a353c70;
    extraout_x8[3] = 0;
    extraout_x8[2] = 0;
    extraout_x8[1] = 0;
    *extraout_x8 = 0;
    pcVar12 = ppcVar10[1];
    if (pcVar12[8] == (code)0x1) {
      puVar4 = (undefined8 *)0x40;
      __Znwm();
      *puVar4 = *ppcVar10;
      (**(code **)(pcVar12 + 0x10))(puVar4 + 1,ppcVar10 + 1);
    }
    else {
      puVar4 = (undefined8 *)0x0;
    }
    FUN_10a3540b0(&plStack_138,plVar5,param_3,param_4 << 2,FUN_10a3542c8,puVar4);
    FUN_10a12c3a8(auStack_128,(long)&uStack_118 + 7,&plStack_138);
    puVar8 = auStack_128;
    FUN_10a12c8c0(extraout_x8 + 2,puVar8);
    if (ppuStack_120 != (undefined1 **)0x0) {
      plVar5 = (long *)(ppuStack_120 + 1);
      do {
        lVar11 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar11 == 0) {
        (**(code **)((long)*ppuStack_120 + 0x10))(ppuStack_120);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_120);
      }
    }
    if ((3 < (int)plStack_138) && (plStack_130 != (undefined8 *)0x0)) {
      (**(code **)*plStack_130)();
    }
    *extraout_x8 = param_3;
    extraout_x8[1] = param_4;
    auVar16._8_8_ = puVar8;
    auVar16._0_8_ = extraout_x8;
    return auVar16;
  }
  pcStack_b8 = FUN_10a353c70;
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))(plVar5);
  func_0x000109899ccc();
  (**(code **)(*plVar5 + 0x2b0))(&stack0xfffffffffffffef8,plVar5,plVar6,&stack0xffffffffffffff08,1);
  FUN_10a12c3a8(extraout_x8 + 2,&stack0xffffffffffffff08,&stack0xfffffffffffffef8);
  if ((3 < in_stack_fffffffffffffef8) && (in_stack_ffffffffffffff00 != (undefined8 *)0x0)) {
    (**(code **)*in_stack_ffffffffffffff00)();
  }
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x98))(plVar5,*(undefined8 *)(extraout_x8[2] + 8));
  puVar8 = &stack0xffffffffffffff08;
  FUN_10a353e8c();
  plVar7 = plVar6;
  puVar9 = puVar8;
  if (plVar6 != (long *)0x0) {
    (**(code **)*plVar6)();
  }
  *extraout_x8 = (ulong)plVar5;
  extraout_x8[1] = (ulong)puVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    if (plVar6 != (long *)0x0) {
      (**(code **)*plVar6)();
    }
    FUN_10a12c460(extraout_x8 + 2);
    plVar5 = plVar7;
    __Unwind_Resume();
    uStack_118 = FUN_10a353e8c;
    plVar6 = plVar5;
    plStack_130 = plVar7;
    ppuStack_120 = &puStack_c0;
    (**(code **)(*plVar5 + 0x98))();
    plVar7 = plVar5;
    plStack_138 = plVar6;
    (**(code **)(*plVar5 + 0x360))(plVar5,&plStack_138);
    (**(code **)(*plVar5 + 0x350))(plVar5,&plStack_138);
    if (plStack_138 != (long *)0x0) {
      (**(code **)*plStack_138)();
    }
    auVar15._8_8_ = (ulong)plVar5 >> 2;
    auVar15._0_8_ = plVar7;
    return auVar15;
  }
  auVar14._8_8_ = puVar9;
  auVar14._0_8_ = extraout_x8;
  return auVar14;
}



/* Entry: 10a353c70; end: 10a353ca3;  */

/* WARNING: Removing unreachable block (ram,0x00010a353d58) */
/* WARNING: Removing unreachable block (ram,0x00010a353d60) */

undefined1  [16]
FUN_10a353c70(ulong *param_1,long *param_2,ulong param_3,ulong param_4,undefined8 *param_5)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong **ppuVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  long *plStack_88;
  long *plStack_80;
  ulong *puStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  int in_stack_ffffffffffffffa8;
  undefined8 *in_stack_ffffffffffffffb0;
  
  if (param_4 != 0) {
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    lVar10 = param_5[1];
    if (*(char *)(lVar10 + 8) == '\x01') {
      puVar6 = (undefined8 *)0x40;
      __Znwm();
      *puVar6 = *param_5;
      (**(code **)(lVar10 + 0x10))(puVar6 + 1,param_5 + 1);
    }
    else {
      puVar6 = (undefined8 *)0x0;
    }
    FUN_10a3540b0(&plStack_88,param_2,param_3,param_4 << 2,FUN_10a3542c8,puVar6);
    FUN_10a12c3a8(&puStack_78,(long)&uStack_68 + 7,&plStack_88);
    ppuVar9 = &puStack_78;
    FUN_10a12c8c0(param_1 + 2,ppuVar9);
    if (plStack_70 != (long *)0x0) {
      plVar3 = plStack_70 + 1;
      do {
        lVar10 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
      }
    }
    if ((3 < (int)plStack_88) && (plStack_80 != (undefined8 *)0x0)) {
      (**(code **)*plStack_80)();
    }
    *param_1 = param_3;
    param_1[1] = param_4;
    auVar13._8_8_ = ppuVar9;
    auVar13._0_8_ = param_1;
    return auVar13;
  }
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  param_1[1] = 0;
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2);
  func_0x000109899ccc();
  (**(code **)(*param_2 + 0x2b0))
            (&stack0xffffffffffffffa8,param_2,plVar3,&stack0xffffffffffffffb8,1);
  FUN_10a12c3a8(param_1 + 2,&stack0xffffffffffffffb8,&stack0xffffffffffffffa8);
  if ((3 < in_stack_ffffffffffffffa8) && (in_stack_ffffffffffffffb0 != (undefined8 *)0x0)) {
    (**(code **)*in_stack_ffffffffffffffb0)();
  }
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_1[2] + 8));
  puVar7 = &stack0xffffffffffffffb8;
  FUN_10a353e8c();
  plVar4 = plVar3;
  puVar8 = puVar7;
  if (plVar3 != (long *)0x0) {
    (**(code **)*plVar3)();
  }
  *param_1 = (ulong)param_2;
  param_1[1] = (ulong)puVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    if (plVar3 != (long *)0x0) {
      (**(code **)*plVar3)();
    }
    FUN_10a12c460(param_1 + 2);
    plVar3 = plVar4;
    __Unwind_Resume();
    uStack_68 = FUN_10a353e8c;
    plVar5 = plVar3;
    plStack_80 = plVar4;
    puStack_78 = param_1;
    plStack_70 = (long *)&stack0xfffffffffffffff0;
    (**(code **)(*plVar3 + 0x98))();
    plVar4 = plVar3;
    plStack_88 = plVar5;
    (**(code **)(*plVar3 + 0x360))(plVar3,&plStack_88);
    (**(code **)(*plVar3 + 0x350))(plVar3,&plStack_88);
    if (plStack_88 != (long *)0x0) {
      (**(code **)*plStack_88)();
    }
    auVar12._8_8_ = (ulong)plVar3 >> 2;
    auVar12._0_8_ = plVar4;
    return auVar12;
  }
  auVar11._8_8_ = puVar8;
  auVar11._0_8_ = param_1;
  return auVar11;
}



/* Entry: 10a353ca4; end: 10a353cc3;  */

void FUN_10a353ca4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bc84c8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a353cc4; end: 10a353ccf;  */

long FUN_10a353cc4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x30);
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
  return param_1 + 0x28;
}



/* Entry: 10a353cd0; end: 10a353e8b;  */

undefined1  [16] FUN_10a353cd0(ulong *param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long **pplVar4;
  long **pplVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long *plStack_88;
  long *plStack_80;
  ulong *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  int aiStack_58 [2];
  undefined8 *puStack_50;
  long *plStack_48;
  undefined8 *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  param_1[1] = 0;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2);
  func_0x000109899ccc();
  puStack_40 = (undefined8 *)(double)param_3;
  plStack_48 = (long *)CONCAT44(plStack_48._4_4_,3);
  (**(code **)(*param_2 + 0x2b0))(aiStack_58,param_2,plVar1,&plStack_48,1);
  if ((3 < (int)plStack_48) && (puStack_40 != (undefined8 *)0x0)) {
    (**(code **)*puStack_40)();
  }
  FUN_10a12c3a8(param_1 + 2,&plStack_48,aiStack_58);
  if ((3 < aiStack_58[0]) && (puStack_50 != (undefined8 *)0x0)) {
    (**(code **)*puStack_50)();
  }
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_1[2] + 8));
  pplVar4 = &plStack_48;
  plStack_48 = plVar1;
  FUN_10a353e8c();
  plVar1 = plStack_48;
  pplVar5 = pplVar4;
  if (plStack_48 != (long *)0x0) {
    (**(code **)*plStack_48)();
  }
  *param_1 = (ulong)param_2;
  param_1[1] = (ulong)pplVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar6._8_8_ = pplVar5;
    auVar6._0_8_ = param_1;
    return auVar6;
  }
  ___stack_chk_fail();
  if (plStack_48 != (long *)0x0) {
    (**(code **)*plStack_48)();
  }
  FUN_10a12c460(param_1 + 2);
  plVar2 = plVar1;
  __Unwind_Resume();
  pcStack_68 = FUN_10a353e8c;
  plVar3 = plVar2;
  plStack_80 = plVar1;
  puStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  (**(code **)(*plVar2 + 0x98))();
  plVar1 = plVar2;
  plStack_88 = plVar3;
  (**(code **)(*plVar2 + 0x360))(plVar2,&plStack_88);
  (**(code **)(*plVar2 + 0x350))(plVar2,&plStack_88);
  if (plStack_88 != (long *)0x0) {
    (**(code **)*plStack_88)();
  }
  auVar7._8_8_ = (ulong)plVar2 >> 2;
  auVar7._0_8_ = plVar1;
  return auVar7;
}



/* Entry: 10a353e8c; end: 10a353f33;  */

undefined1  [16] FUN_10a353e8c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  long *plStack_28;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x98))(param_1,*param_2);
  plVar2 = param_1;
  plStack_28 = plVar1;
  (**(code **)(*param_1 + 0x360))(param_1,&plStack_28);
  (**(code **)(*param_1 + 0x350))(param_1,&plStack_28);
  if (plStack_28 != (long *)0x0) {
    (**(code **)*plStack_28)();
  }
  auVar3._8_8_ = (ulong)param_1 >> 2;
  auVar3._0_8_ = plVar2;
  return auVar3;
}



/* Entry: 10a353f34; end: 10a3540af;  */

undefined8 *
FUN_10a353f34(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  int aiStack_88 [2];
  undefined8 *puStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  undefined1 uStack_61;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  lVar5 = param_5[1];
  if (*(char *)(lVar5 + 8) == '\x01') {
    puVar4 = (undefined8 *)0x40;
    __Znwm();
    *puVar4 = *param_5;
    (**(code **)(lVar5 + 0x10))(puVar4 + 1,param_5 + 1);
  }
  else {
    puVar4 = (undefined8 *)0x0;
  }
  FUN_10a3540b0(aiStack_88,param_2,param_3,param_4 << 2,FUN_10a3542c8,puVar4);
  FUN_10a12c3a8(auStack_78,&uStack_61,aiStack_88);
  FUN_10a12c8c0(param_1 + 2,auStack_78);
  if (plStack_70 != (long *)0x0) {
    plVar1 = plStack_70 + 1;
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
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
    }
  }
  if ((3 < aiStack_88[0]) && (puStack_80 != (undefined8 *)0x0)) {
    (**(code **)*puStack_80)();
  }
  *param_1 = param_3;
  param_1[1] = param_4;
  return param_1;
}



/* Entry: 10a3540b0; end: 10a3542c7;  */

void FUN_10a3540b0(undefined8 param_1,long *param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  int aiStack_68 [2];
  long *plStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  func_0x000109899ccc();
  plVar5 = (long *)0x40;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110ba7960;
  plVar5[4] = param_3;
  plVar5[5] = param_4;
  plVar5[6] = param_5;
  plVar5[7] = param_6;
  plStack_80 = plVar5 + 3;
  *plStack_80 = (long)&PTR_FUN_110ba79b0;
  plStack_88 = (long *)0x0;
  uStack_90 = 0;
  plStack_78 = plVar5;
  FUN_10a12c924(&plStack_70,param_2,&plStack_80);
  aiStack_68[0] = 7;
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x98))(param_2,plStack_70);
  plStack_60 = plVar5;
  (**(code **)(*param_2 + 0x2b0))(param_1,param_2,plVar4,aiStack_68,1);
  if ((3 < aiStack_68[0]) && (plStack_60 != (long *)0x0)) {
    (**(code **)*plStack_60)();
  }
  plVar5 = plStack_70;
  if (plStack_70 != (long *)0x0) {
    (**(code **)*plStack_70)();
  }
  plVar6 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
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
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar5 = plVar6;
    }
  }
  plVar6 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar1 = plStack_88 + 1;
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
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar5 = plVar6;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if ((3 < aiStack_68[0]) && (plStack_60 != (long *)0x0)) {
    (**(code **)*plStack_60)();
  }
  if (plStack_70 != (long *)0x0) {
    (**(code **)*plStack_70)();
  }
  FUN_10a12ca94(&plStack_80);
  func_0x00010a12caec(&uStack_90);
  __Unwind_Resume();
  if (plVar5 != (long *)0x0) {
    (*(code *)*plVar5)(plVar4,plVar5);
    (**(code **)plVar5[1])();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar5);
    return;
  }
  return;
}



/* Entry: 10a3542c8; end: 10a35433b;  */

void FUN_10a3542c8(undefined8 *param_1,undefined8 param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (*(code *)*param_1)(param_2,param_1);
    (**(code **)param_1[1])();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a35433c; end: 10a354383;  */

void FUN_10a35433c(void)

{
  return;
}



/* Entry: 10a354384; end: 10a3543b3;  */

void FUN_10a354384(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x50);
  FUN_10a3543b4();
                    /* WARNING: Could not recover jumptable at 0x00010a3543b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10a3543b4; end: 10a354b9b;  */

void FUN_10a3543b4(code *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined *extraout_x8;
  undefined8 ****ppppuVar10;
  long lVar11;
  long *plVar12;
  undefined *puVar13;
  long lStack_148;
  undefined8 ***pppuStack_140;
  long lStack_138;
  long lStack_130;
  undefined1 uStack_128;
  undefined8 ***pppuStack_120;
  long *plStack_118;
  long lStack_110;
  undefined1 uStack_108;
  undefined8 ***pppuStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 ***pppuStack_e8;
  long *plStack_e0;
  undefined7 uStack_d8;
  char cStack_d1;
  undefined8 **ppuStack_d0;
  long *plStack_c8;
  long lStack_c0;
  undefined8 **ppuStack_b0;
  long *plStack_a8;
  long lStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 ***pppuStack_88;
  long *plStack_80;
  long lStack_78;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((byte)param_1[0x40] & 1) == 0) goto LAB_10a354940;
  lStack_148 = *(long *)(param_1 + 0x48);
  *(long *)(param_1 + 0x48) = 0;
  pcStack_98 = (code *)&UNK_10f653c20;
  ppuStack_90 = (undefined **)0x21;
  if (*(long *)(*(long *)(*(long *)(*(long *)param_1 + 0x50) + 0x100) + 0x260) == 0) {
    FUN_10a0edfc4(&pcStack_98);
    goto LAB_10a354940;
  }
  ppuVar6 = &PTR___tlv_bootstrap_11340dee8;
  (*(code *)PTR___tlv_bootstrap_11340dee8)();
  puVar13 = *ppuVar6;
  *ppuVar6 = extraout_x8;
  ppuVar7 = ppuVar6;
  __ZNSt3__16chrono12steady_clock3nowEv();
  ppuVar8 = ppuVar7;
  __ZNSt3__16chrono12steady_clock3nowEv();
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    func_0x00010ae06f08(1,8,&UNK_10f650611,&UNK_10f6512f4,0xa0,&UNK_10f6513e8,in_x6,in_x7,
                        *(long *)param_1,(double)((long)ppuVar8 - (long)ppuVar7) / 1000000000.0);
  }
  ppppuVar10 = *(undefined8 *****)(param_1 + 0x10);
  if (ppppuVar10 != (undefined8 ****)0x0) {
    plVar12 = *(long **)(param_1 + 0x18);
    if (plVar12 != (long *)0x0) {
      plVar1 = plVar12 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lStack_110 = *(long *)(param_1 + 0x20);
    lVar11 = *(long *)(param_1 + 0x28);
    lVar9 = *(long *)(param_1 + 0x30);
    pcStack_98 = FUN_10a354fcc;
    ppuStack_90 = &PTR_DAT_110bc6100;
    if (plVar12 != (long *)0x0) {
      plVar1 = plVar12 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pppuStack_120 = ppppuVar10;
    plStack_118 = plVar12;
    pppuStack_88 = ppppuVar10;
    plStack_80 = plVar12;
    lStack_78 = lStack_110;
    FUN_10a3e05f0(lVar11,lVar9,&pcStack_98);
    (*(code *)*ppuStack_90)(&ppuStack_90);
    if (plVar12 != (long *)0x0) {
      plVar1 = plVar12 + 1;
      do {
        lVar11 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
  }
  ppuStack_b0 = *(undefined8 ***)param_1;
  plStack_a8 = *(long **)(param_1 + 8);
  if (plStack_a8 == (long *)0x0) {
    lStack_c0 = *(long *)(param_1 + 0x20);
    plStack_c8 = (long *)0x0;
    ppuStack_d0 = ppuStack_b0;
    lStack_a0 = lStack_c0;
  }
  else {
    plVar12 = plStack_a8 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = *plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lStack_a0 = *(long *)(param_1 + 0x20);
    plStack_c8 = *(long **)(param_1 + 8);
    ppuStack_d0 = *(undefined8 ***)param_1;
    lStack_c0 = lStack_a0;
    if (*(long *)(param_1 + 8) != 0) {
      plVar12 = (long *)(*(long *)(param_1 + 8) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lStack_c0 = *(long *)(param_1 + 0x20);
    }
  }
  lVar11 = *(long *)(param_1 + 0x28);
  FUN_10a3e03a0(lVar11,*(long *)(param_1 + 0x30));
  iVar5 = (int)lVar11;
  pppuStack_88 = &ppuStack_b0;
  pcStack_98 = param_1;
  ppuStack_90 = (undefined **)(param_1 + 0x30);
  __ZSt19uncaught_exceptionsv();
  plStack_80 = (long *)CONCAT44(plStack_80._4_4_,iVar5);
  FUN_10ad055a0();
  if (iVar5 == 0) {
LAB_10a354608:
    FUN_10a34a3a8(&pppuStack_120,*(long *)param_1,*(long *)(param_1 + 0x10),0);
    func_0x00010a328268(*(long *)(param_1 + 0x20) + 0x28,&pppuStack_120);
    plVar12 = plStack_118;
    if (plStack_118 != (long *)0x0) {
      plVar1 = plStack_118 + 1;
      do {
        lVar11 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_118 + 0x10))(plStack_118);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    FUN_10a354d64(&pcStack_98);
    plVar12 = plStack_c8;
    if (plStack_c8 != (long *)0x0) {
      plVar1 = plStack_c8 + 1;
      do {
        lVar11 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    plVar12 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      plVar1 = plStack_a8 + 1;
      do {
        lVar11 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    lVar11 = lStack_148;
    *ppuVar6 = puVar13;
    plVar12 = (long *)(lStack_148 + 0x10);
    do {
      lVar9 = *plVar12;
      if (lVar9 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = 2;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          FUN_109d1b4dc(lStack_148 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar9 >> 1 & 1) == 0);
    if (param_1[0x40] == (code)0x1) {
      FUN_10a35b840(param_1 + 0x10);
      FUN_10a37985c(param_1);
      param_1[0x40] = (code)0x0;
    }
    lStack_148 = 0;
    if ((lVar11 != 0) && (func_0x0001092b4274(&lStack_148,lVar11), lStack_148 != 0)) {
      func_0x0001092b4274(&lStack_148);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    ppuVar7 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar7 == (undefined *)0x0) {
      ppuVar7 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar12 = (long *)*ppuVar7;
      if ((plVar12 == (long *)0x0) || ((**(code **)(*plVar12 + 0x18))(), plVar12 == (long *)0x0))
      goto LAB_10a354608;
      plVar12 = plVar12 + 7;
    }
    else {
      plVar12 = (long *)(*ppuVar7 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar12 + 0x10) >> 1 & 1) == 0) goto LAB_10a354608;
  }
  func_0x000107c2b054(&pppuStack_e8,&UNK_10f651421);
  lVar11 = *(long *)(*(long *)(*(long *)param_1 + 0x50) + 0x100);
  if (*(char *)(lVar11 + 0x21f) < '\0') {
    func_0x000107c3192c(&pppuStack_100,*(undefined8 *)(lVar11 + 0x208),
                        *(undefined8 *)(lVar11 + 0x210));
  }
  else {
    lStack_f8 = *(long *)(lVar11 + 0x210);
    pppuStack_100 = *(undefined8 ****)(lVar11 + 0x208);
    uStack_f0 = *(long *)(lVar11 + 0x218);
  }
  if (cStack_d1 < '\0') {
    pppuStack_120 = (undefined8 ***)"null";
    if (plStack_e0 != (long *)0x0) {
      pppuStack_120 = pppuStack_e8;
    }
  }
  else {
    pppuStack_120 = (undefined8 ***)"null";
    if (cStack_d1 != '\0') {
      pppuStack_120 = &pppuStack_e8;
    }
  }
  if (uStack_f0 < 0) {
    pppuStack_140 = (undefined8 ***)"null";
    if (lStack_f8 != 0) {
      pppuStack_140 = pppuStack_100;
    }
  }
  else {
    pppuStack_140 = (undefined8 ***)"null";
    if (uStack_f0._7_1_ != '\0') {
      pppuStack_140 = &pppuStack_100;
    }
  }
  FUN_10a224324(&pppuStack_120,&pppuStack_140);
  if (cStack_d1 < '\0') {
    if (plStack_e0 != (long *)0x0) {
      func_0x000107c3192c(&pppuStack_120,pppuStack_e8);
      goto LAB_10a3548e4;
    }
LAB_10a3548c8:
    uStack_108 = 0;
    pppuStack_120 = (undefined8 ***)((ulong)pppuStack_120 & 0xffffffffffffff00);
  }
  else {
    if (cStack_d1 == '\0') goto LAB_10a3548c8;
    plStack_118 = plStack_e0;
    pppuStack_120 = pppuStack_e8;
    lStack_110 = CONCAT17(cStack_d1,uStack_d8);
LAB_10a3548e4:
    uStack_108 = 1;
  }
  if (uStack_f0 < 0) {
    if (lStack_f8 != 0) {
      func_0x000107c3192c(&pppuStack_140,pppuStack_100);
      goto LAB_10a35492c;
    }
LAB_10a354910:
    uStack_128 = 0;
    pppuStack_140 = (undefined8 ***)((ulong)pppuStack_140 & 0xffffffffffffff00);
  }
  else {
    if (uStack_f0._7_1_ == '\0') goto LAB_10a354910;
    lStack_138 = lStack_f8;
    pppuStack_140 = pppuStack_100;
    lStack_130 = uStack_f0;
LAB_10a35492c:
    uStack_128 = 1;
  }
  FUN_10a234a0c(&pppuStack_120,&pppuStack_140);
LAB_10a354940:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a354944);
  (*pcVar4)();
}



/* Entry: 10a354b9c; end: 10a354d63;  */

undefined8 * FUN_10a354b9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc60a0;
  if (param_1[0x1d] != 0) {
    func_0x0001092b4274();
  }
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    FUN_10a35b840(param_1 + 0x16);
    FUN_10a37985c(param_1 + 0x14);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a354d64; end: 10a354e3b;  */

undefined *** FUN_10a354d64(undefined ***param_1)

{
  undefined8 uVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 *unaff_x20;
  undefined8 uStack_148;
  undefined **ppuStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  long lStack_108;
  undefined8 *puStack_100;
  undefined ***pppuStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_98;
  undefined8 *puStack_90;
  undefined ***pppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar3 = param_1;
  __ZSt19uncaught_exceptionsv();
  if ((int)pppuVar3 <= *(int *)(param_1 + 3)) {
    uVar1 = *(undefined8 *)(**param_1 + 0x50);
    puVar4 = *param_1[1];
    ppuVar5 = param_1[2];
    unaff_x20 = &uStack_68;
    uStack_68 = 0x10a355040;
    ppuStack_60 = &PTR_DAT_110bc6118;
    puStack_50 = ppuVar5[1];
    puStack_58 = *ppuVar5;
    *ppuVar5 = (undefined *)0x0;
    ppuVar5[1] = (undefined *)0x0;
    puStack_48 = ppuVar5[2];
    FUN_10a3e0c90(uVar1,puVar4,&uStack_68);
    pppuVar3 = &ppuStack_60;
    (*(code *)*ppuStack_60)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(unaff_x20 + 1);
  pppuVar2 = pppuVar3;
  __Unwind_Resume();
  pcStack_78 = FUN_10a354e3c;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(**pppuVar2 + 0x50);
  puVar4 = *pppuVar2[1];
  ppuVar5 = pppuVar2[2];
  uStack_d8 = 0x10a355084;
  ppuStack_d0 = &PTR_FUN_110bc6130;
  puStack_c0 = ppuVar5[1];
  puStack_c8 = *ppuVar5;
  *ppuVar5 = (undefined *)0x0;
  ppuVar5[1] = (undefined *)0x0;
  puStack_b8 = ppuVar5[2];
  puStack_90 = unaff_x20;
  pppuStack_88 = pppuVar3;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_10a3e0e30(uVar1,puVar4,&uStack_d8);
  pppuVar3 = &ppuStack_d0;
  (*(code *)*ppuStack_d0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return pppuVar2;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_d0)(&ppuStack_d0);
  pppuVar2 = pppuVar3;
  __Unwind_Resume();
  pcStack_e8 = FUN_10a354f04;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(**pppuVar2 + 0x50);
  puVar4 = *pppuVar2[1];
  ppuVar5 = pppuVar2[2];
  uStack_148 = 0x10a355084;
  ppuStack_140 = &PTR_FUN_110bc6130;
  puStack_130 = ppuVar5[1];
  puStack_138 = *ppuVar5;
  *ppuVar5 = (undefined *)0x0;
  ppuVar5[1] = (undefined *)0x0;
  puStack_128 = ppuVar5[2];
  puStack_100 = &uStack_d8;
  pppuStack_f8 = pppuVar3;
  ppuStack_f0 = &puStack_80;
  FUN_10a3e0e30(uVar1,puVar4,&uStack_148);
  pppuVar3 = &ppuStack_140;
  (*(code *)*ppuStack_140)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return pppuVar2;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_140)(&ppuStack_140);
  __Unwind_Resume();
  ppuVar5 = pppuVar3[4];
  if (*(float *)(ppuVar5 + 4) < *(float *)pppuVar3[2]) {
    *(float *)(ppuVar5 + 4) = *(float *)pppuVar3[2];
    pppuVar3 = (undefined ***)ppuVar5[0xb];
                    /* WARNING: Could not recover jumptable at 0x00010a354ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*pppuVar3)();
    return pppuVar3;
  }
  return pppuVar3;
}



/* Entry: 10a354e3c; end: 10a354f03;  */

undefined *** FUN_10a354e3c(undefined ***param_1)

{
  undefined8 uVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_98;
  undefined8 *puStack_90;
  undefined ***pppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(**param_1 + 0x50);
  puVar4 = *param_1[1];
  ppuVar5 = param_1[2];
  uStack_68 = 0x10a355084;
  ppuStack_60 = &PTR_FUN_110bc6130;
  puStack_50 = ppuVar5[1];
  puStack_58 = *ppuVar5;
  *ppuVar5 = (undefined *)0x0;
  ppuVar5[1] = (undefined *)0x0;
  puStack_48 = ppuVar5[2];
  FUN_10a3e0e30(uVar1,puVar4,&uStack_68);
  pppuVar3 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  pppuVar2 = pppuVar3;
  __Unwind_Resume();
  pcStack_78 = FUN_10a354f04;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(**pppuVar2 + 0x50);
  puVar4 = *pppuVar2[1];
  ppuVar5 = pppuVar2[2];
  uStack_d8 = 0x10a355084;
  ppuStack_d0 = &PTR_FUN_110bc6130;
  puStack_c0 = ppuVar5[1];
  puStack_c8 = *ppuVar5;
  *ppuVar5 = (undefined *)0x0;
  ppuVar5[1] = (undefined *)0x0;
  puStack_b8 = ppuVar5[2];
  puStack_90 = &uStack_68;
  pppuStack_88 = pppuVar3;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_10a3e0e30(uVar1,puVar4,&uStack_d8);
  pppuVar3 = &ppuStack_d0;
  (*(code *)*ppuStack_d0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return pppuVar2;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_d0)(&ppuStack_d0);
  __Unwind_Resume();
  ppuVar5 = pppuVar3[4];
  if (*(float *)(ppuVar5 + 4) < *(float *)pppuVar3[2]) {
    *(float *)(ppuVar5 + 4) = *(float *)pppuVar3[2];
    pppuVar3 = (undefined ***)ppuVar5[0xb];
                    /* WARNING: Could not recover jumptable at 0x00010a354ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*pppuVar3)();
    return pppuVar3;
  }
  return pppuVar3;
}



/* Entry: 10a354f04; end: 10a354fcb;  */

undefined *** FUN_10a354f04(undefined ***param_1)

{
  undefined8 uVar1;
  undefined ***pppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(**param_1 + 0x50);
  puVar3 = *param_1[1];
  ppuVar4 = param_1[2];
  uStack_68 = 0x10a355084;
  ppuStack_60 = &PTR_FUN_110bc6130;
  puStack_50 = ppuVar4[1];
  puStack_58 = *ppuVar4;
  *ppuVar4 = (undefined *)0x0;
  ppuVar4[1] = (undefined *)0x0;
  puStack_48 = ppuVar4[2];
  FUN_10a3e0e30(uVar1,puVar3,&uStack_68);
  pppuVar2 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume();
  ppuVar4 = pppuVar2[4];
  if (*(float *)(ppuVar4 + 4) < *(float *)pppuVar2[2]) {
    *(float *)(ppuVar4 + 4) = *(float *)pppuVar2[2];
    pppuVar2 = (undefined ***)ppuVar4[0xb];
                    /* WARNING: Could not recover jumptable at 0x00010a354ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*pppuVar2)();
    return pppuVar2;
  }
  return pppuVar2;
}



/* Entry: 10a354fcc; end: 10a35509b;  */

void FUN_10a354fcc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(float *)(lVar1 + 0x20) < **(float **)(param_1 + 0x10)) {
    *(float *)(lVar1 + 0x20) = **(float **)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010a354ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(lVar1 + 0x58))();
    return;
  }
  return;
}



/* Entry: 10a35509c; end: 10a355127;  */

void FUN_10a35509c(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  pcVar1 = (code *)*param_1;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_40,*param_2,param_2[1]);
  }
  else {
    uStack_38 = param_2[1];
    uStack_40 = *param_2;
    lStack_30 = param_2[2];
  }
  (*pcVar1)(&uStack_40,param_1);
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  return;
}



/* Entry: 10a355128; end: 10a355153;  */

long FUN_10a355128(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
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



/* Entry: 10a355154; end: 10a355167;  */

void FUN_10a355154(void)

{
  func_0x00010a0f618c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a355168; end: 10a3551d3;  */

void FUN_10a355168(long *param_1,long param_2)

{
  ulong uVar1;
  
  FUN_10a0fd89c();
  uVar1 = *(ulong *)(param_2 + 0x148);
  if (*param_1 != 0) {
    uVar1 = uVar1 + 1;
  }
  *(ulong *)(param_2 + 0x148) = uVar1;
  if (*(long **)(param_2 + 0x150) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0x150) + 0x10))
              ((float)uVar1 / (float)*(ulong *)(param_2 + 0x140));
  }
  return;
}



/* Entry: 10a3551d4; end: 10a3551db;  */

void FUN_10a3551d4(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puStack_28;
  
  param_1[-0xf] = &PTR_FUN_110ba2ec8;
  *param_1 = &PTR_DAT_110ba3140;
  puStack_28 = param_1 + 0x15;
  func_0x00010a107224(&puStack_28);
  if (param_1[0x12] != 0) {
    param_1[0x13] = param_1[0x12];
    __ZdlPv();
  }
  plVar1 = (long *)param_1[0x11];
  param_1[0x11] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[0xe] != 0) {
    param_1[0xf] = param_1[0xe];
    __ZdlPv();
  }
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  FUN_10a0f6124(param_1 + -0xf);
  return;
}



/* Entry: 10a3551dc; end: 10a3551f3;  */

void FUN_10a3551dc(long param_1)

{
  func_0x00010a0f618c(param_1 + -0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3551f4; end: 10a3552f7;  */

undefined8 * FUN_10a3551f4(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  *param_1 = &PTR_DAT_110bc50b0;
  param_1[2] = &PTR_DAT_110bc5160;
  param_1[7] = &PTR_DAT_110bc51b8;
  param_1[0x1c] = &PTR_FUN_110bc51d8;
  func_0x00010a081120(param_1 + 0x2e);
  func_0x00010a1bb0e8(param_1 + 0x2c);
  if (param_1[0x2a] != 0) {
    plVar1 = (long *)param_1[0x29];
    plVar2 = *(long **)(param_1[0x28] + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    param_1[0x2a] = 0;
    while (plVar1 != param_1 + 0x28) {
      plVar2 = (long *)plVar1[1];
      FUN_10a3552f8(plVar1 + 2);
      __ZdlPv(plVar1);
      plVar1 = plVar2;
    }
  }
  plVar1 = (long *)param_1[0x25];
  while (plVar1 != (long *)0x0) {
    lVar3 = *plVar1;
    func_0x00010a35537c(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar3;
  }
  lVar3 = param_1[0x23];
  param_1[0x23] = 0;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  func_0x00010a05a86c(param_1 + 0x21);
  param_1[0x1c] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x1f] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x1f] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x1d);
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



/* Entry: 10a3552f8; end: 10a3553cb;  */

void FUN_10a3552f8(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  
  func_0x00010a07a8a8(param_1 + 9);
  (**(code **)param_1[2])();
  param_1 = (long *)*param_1;
  if (param_1 != (long *)0x0) {
    puVar1 = (ulong *)(param_1 + 1);
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
                    /* WARNING: Could not recover jumptable at 0x00010a35536c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 8))();
        return;
      }
    }
  }
  return;
}



/* Entry: 10a3553cc; end: 10a3554c7;  */

undefined1  [16] FUN_10a3553cc(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bc55c0;
  puVar1 = &UNK_10f64efef;
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
    ppuStack_40 = &PTR_DAT_110bc55c0;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c42c58;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a3554c8; end: 10a35552b;  */

ulong FUN_10a3554c8(ulong param_1,undefined8 *param_2)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a35552c);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a35552c,1,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a35552c; end: 10a35563f;  */

void FUN_10a35552c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffb8;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = param_2;
  FUN_10a355640(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a3271d8(&stack0xffffffffffffffb8,plVar7);
  FUN_10a13e614(param_1,param_2,&stack0xffffffffffffffb8);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    puVar1 = (ulong *)(in_stack_ffffffffffffffb8 + 1);
    do {
      uVar10 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar10 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar10 & 0x1fffffffc) == 4) {
      do {
        uVar10 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar10 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*in_stack_ffffffffffffffb8 + 8))();
      }
    }
  }
  plVar7 = plVar6 + 0x4b;
  lVar8 = plVar6[0x59];
  uVar10 = lVar8 - 1;
  plVar6[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar7[lVar8 + 2];
    if (plVar6[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar10) {
      return;
    }
  }
  lVar8 = *plVar7;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar10) {
    uVar16 = uVar10 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar10 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar8 >> 3;
        if (uVar9 <= uVar10) {
          uVar9 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar7 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar8;
          lStack_80 = lVar8;
          lStack_78 = lVar8;
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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar10 < uVar15) {
    lVar8 = lVar8 + uVar10 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar10;
  return;
}



/* Entry: 10a355640; end: 10a35570b;  */

undefined ** FUN_10a355640(undefined **param_1,undefined **param_2)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  ppuVar2 = param_1;
  func_0x000109898688();
  if (ppuVar2 != (undefined **)0x0) {
    FUN_10a053854();
    param_2 = ppuVar2;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return param_1;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  ppuVar2 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar3 = ppuVar2;
  FUN_10a0051e8();
  if (((ulong)ppuVar3 & 1) == 0) {
    if (((ulong)ppuVar2[0xf] & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a35570c);
      (*pcVar1)();
    }
    FUN_10a054dac(ppuVar2,*param_2,FUN_10a35570c,1,ppuVar2[8]);
  }
  return ppuVar2;
}



/* Entry: 10a35570c; end: 10a3558cb;  */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_10a35570c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined8 *in_stack_ffffffffffffffb8;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = param_2;
  FUN_10a355640(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a326fe4(&plStack_70,plVar7);
  FUN_10a3558cc(&stack0xffffffffffffffb8,param_2,&stack0xffffffffffffffa0);
  (**(code **)(*param_2 + 0x30))(&plStack_68,param_2);
  func_0x0001098843c0(&stack0xffffffffffffffa0,&plStack_68,param_2,&UNK_10f634758);
  (**(code **)(*param_2 + 0x2b0))
            (param_1,param_2,&stack0xffffffffffffffa0,&stack0xffffffffffffffb0,1);
  if (&stack0x00000000 != (undefined1 *)0x70) {
    (*(code *)*plStack_70)();
  }
  if (plStack_68 != (long *)0x0) {
    (**(code **)*plStack_68)();
  }
  if (in_stack_ffffffffffffffb8 != (undefined8 *)0x0) {
    (**(code **)*in_stack_ffffffffffffffb8)();
  }
  if (plStack_70 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_70 + 1);
    do {
      uVar10 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar10 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar10 & 0x1fffffffc) == 4) {
      do {
        uVar10 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar10 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*plStack_70 + 8))();
      }
    }
  }
  plVar7 = plVar6 + 0x4b;
  lVar8 = plVar6[0x59];
  uVar10 = lVar8 - 1;
  plVar6[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar7[lVar8 + 2];
    if (plVar6[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar10) {
      return;
    }
  }
  lVar8 = *plVar7;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar10) {
    uVar16 = uVar10 - uVar15;
    plVar14 = (long *)plVar6[0x4d];
    if ((ulong)((long)plVar14 - lVar13 >> 4) < uVar16) {
      if (uVar10 >> 0x3c == 0) {
        uVar9 = (long)plVar14 - lVar8 >> 3;
        if (uVar9 <= uVar10) {
          uVar9 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)((long)plVar14 - lVar8)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar7 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar8;
          lStack_80 = lVar8;
          lStack_78 = lVar8;
          plStack_70 = plVar14;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar10 < uVar15) {
    lVar8 = lVar8 + uVar10 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar10;
  return;
}



/* Entry: 10a3558cc; end: 10a3559df;  */

void FUN_10a3558cc(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                  long param_5)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  undefined4 *extraout_x8;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *unaff_x26;
  int aiStack_168 [2];
  undefined8 *puStack_160;
  undefined8 uStack_158;
  int iStack_150;
  undefined8 *puStack_148;
  int aiStack_140 [2];
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  int iStack_108;
  undefined4 uStack_104;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  int iStack_f0;
  undefined8 *puStack_e8;
  long lStack_d8;
  undefined8 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  iVar10 = (int)&puStack_80;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_2 + 0xb0))(&puStack_80,param_2,0,0);
  pcStack_78 = FUN_10a3559e0;
  ppuStack_70 = &PTR_FUN_110bc6470;
  uStack_60 = param_3[1];
  uStack_68 = *param_3;
  lVar11 = 2;
  (**(code **)(*param_2 + 0x2a0))(param_1,param_2,&puStack_80,2,&pcStack_78);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  puVar7 = puStack_80;
  if (puStack_80 != (undefined8 *)0x0) {
    (**(code **)*puStack_80)();
    puVar7 = puStack_80;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (iVar10 == 0) {
    __Unwind_Resume(puVar7);
  }
  else {
    (*(code *)*ppuStack_70)(&ppuStack_70);
  }
  func_0x000104bd46a0(puVar7);
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = *(long **)(param_5 + 0x10);
  plVar14 = *(long **)(param_5 + 0x18);
  (**(code **)(*plVar14 + 0x58))();
  lVar16 = plVar14[0x47];
  uVar13 = *(undefined8 *)(param_5 + 0x18);
  func_0x0001098849a4(aiStack_140,uVar13,lVar11);
  puVar7 = puStack_138;
  iVar10 = aiStack_140[0];
  if (aiStack_140[0] == 3) {
    puStack_130 = puStack_138;
    unaff_x26 = puVar7;
  }
  else if (aiStack_140[0] == 2) {
    puStack_130 = (undefined8 *)CONCAT71(puStack_130._1_7_,puStack_138._0_1_);
    unaff_x26 = (undefined8 *)((ulong)puStack_138 & 0xff);
  }
  else if (3 < aiStack_140[0]) {
    puStack_138 = (undefined8 *)0x0;
    puStack_130 = puVar7;
    unaff_x26 = puVar7;
  }
  aiStack_140[0] = 0;
  uVar15 = *(undefined8 *)(param_5 + 0x18);
  func_0x0001098849a4(aiStack_168,uVar15,lVar11 + 0x10);
  iVar5 = aiStack_168[0];
  iStack_150 = aiStack_168[0];
  if (aiStack_168[0] == 3) {
    puStack_148 = puStack_160;
  }
  else if (aiStack_168[0] == 2) {
    puStack_148 = (undefined8 *)CONCAT71(puStack_148._1_7_,puStack_160._0_1_);
  }
  else if (3 < aiStack_168[0]) {
    puStack_148 = puStack_160;
    puStack_160 = (undefined8 *)0x0;
  }
  aiStack_168[0] = 0;
  uStack_158 = uVar15;
  if (*plVar9 == 0) {
    FUN_10a35649c(&uStack_110,uVar15,&UNK_10f634760,0x34);
    FUN_10a05589c(&uStack_158,&uStack_110);
    if ((3 < (int)uStack_110) &&
       ((undefined8 *)CONCAT44(uStack_104,iStack_108) != (undefined8 *)0x0)) {
      (*(code *)**(undefined8 **)CONCAT44(uStack_104,iStack_108))();
    }
    plVar14 = (long *)(ulong)(3 < iVar10);
LAB_10a3560e8:
    if ((3 < iStack_150) && (puStack_148 != (undefined8 *)0x0)) {
      (**(code **)*puStack_148)();
    }
    if ((3 < aiStack_168[0]) && (puStack_160 != (undefined8 *)0x0)) {
      (**(code **)*puStack_160)();
    }
    if (((int)plVar14 != 0) && (puStack_130 != (undefined8 *)0x0)) {
      (**(code **)*puStack_130)();
    }
    if ((3 < aiStack_140[0]) && (puStack_138 != (undefined8 *)0x0)) {
      (**(code **)*puStack_138)();
    }
    *extraout_x8 = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    iStack_108 = iVar10;
    if (iVar10 == 3) {
      puStack_100 = puStack_130;
    }
    else if (iVar10 == 2) {
      puStack_100 = (undefined8 *)CONCAT71(puStack_100._1_7_,(char)unaff_x26);
    }
    else if (3 < iVar10) {
      puStack_100 = puStack_130;
      puStack_130 = (undefined8 *)0x0;
    }
    iStack_f0 = iVar5;
    if (iVar5 == 3) {
      puStack_e8 = puStack_148;
    }
    else if (iVar5 == 2) {
      puStack_e8 = (undefined8 *)CONCAT71(puStack_e8._1_7_,puStack_148._0_1_);
    }
    else if (3 < iVar5) {
      puStack_e8 = puStack_148;
      puStack_148 = (undefined8 *)0x0;
    }
    iStack_150 = 0;
    uStack_110 = uVar13;
    uStack_f8 = uVar15;
    if (((uint)*(undefined8 *)(*plVar9 + 0x10) >> 1 & 1) == 0) {
      puVar7 = (undefined8 *)0xe8;
      __Znwm();
      *puVar7 = FUN_10a389014;
      puVar7[1] = FUN_10a389474;
      func_0x0001092ba17c(puVar7 + 2);
      plVar14 = (long *)puVar7[7];
      if (plVar14 != (long *)0x0) {
        plVar1 = plVar14 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar7[9] = *plVar9;
      *plVar9 = 0;
      puVar7[10] = uStack_110;
      *(int *)(puVar7 + 0xb) = iStack_108;
      if (iStack_108 == 3) {
        puVar7[0xc] = puStack_100;
      }
      else if (iStack_108 == 2) {
        *(undefined1 *)(puVar7 + 0xc) = puStack_100._0_1_;
      }
      else if (3 < iStack_108) {
        puVar7[0xc] = puStack_100;
        puStack_100 = (undefined8 *)0x0;
      }
      iStack_108 = 0;
      puVar7[0xd] = uStack_f8;
      *(int *)(puVar7 + 0xe) = iStack_f0;
      if (iStack_f0 == 3) {
        puVar7[0xf] = puStack_e8;
      }
      else if (iStack_f0 == 2) {
        *(undefined1 *)(puVar7 + 0xf) = puStack_e8._0_1_;
      }
      else if (3 < iStack_f0) {
        puVar7[0xf] = puStack_e8;
        puStack_e8 = (undefined8 *)0x0;
      }
      iStack_f0 = 0;
      puVar7[0x18] = lVar16;
      *(undefined1 *)(puVar7 + 0x19) = 0;
      *(undefined1 *)(puVar7 + 0x1c) = 0;
      puVar8 = puVar7 + 0x18;
      func_0x0001092ba064(puVar8,puVar7);
      if (((ulong)puVar8 & 1) == 0) {
        puVar7[0x1b] = puVar7[9];
        puVar7[9] = 0;
        puVar7[0x11] = puVar7[10];
        iVar10 = *(int *)(puVar7 + 0xb);
        *(int *)(puVar7 + 0x12) = iVar10;
        if (iVar10 == 3) {
          puVar7[0x13] = puVar7[0xc];
        }
        else if (iVar10 == 2) {
          *(undefined1 *)(puVar7 + 0x13) = *(undefined1 *)(puVar7 + 0xc);
        }
        else if (3 < iVar10) {
          puVar7[0x13] = puVar7[0xc];
          puVar7[0xc] = 0;
        }
        *(undefined4 *)(puVar7 + 0xb) = 0;
        puVar7[0x14] = puVar7[0xd];
        iVar10 = *(int *)(puVar7 + 0xe);
        *(int *)(puVar7 + 0x15) = iVar10;
        if (iVar10 == 3) {
          puVar7[0x16] = puVar7[0xf];
        }
        else if (iVar10 == 2) {
          *(undefined1 *)(puVar7 + 0x16) = *(undefined1 *)(puVar7 + 0xf);
        }
        else if (3 < iVar10) {
          puVar7[0x16] = puVar7[0xf];
          puVar7[0xf] = 0;
        }
        *(undefined4 *)(puVar7 + 0xe) = 0;
        FUN_10a356920(puVar7 + 0x1a,puVar7 + 0x1b,puVar7 + 0x11);
        puVar7[0x18] = puVar7[0x1a];
        plVar9 = (long *)(puVar7[0x1a] + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = *plVar9 + 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (((uint)*(undefined8 *)(puVar7[0x18] + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(puVar7 + 0x1c) = 1;
          lVar11 = puVar7[0x18];
          plVar9 = (long *)(lVar11 + 0x10);
          uVar13 = puVar7[3];
          do {
            lVar16 = *plVar9;
            if (lVar16 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar4) {
                *plVar9 = 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                uStack_128 = 0;
                puStack_120 = puVar7;
                uStack_118 = uVar13;
                func_0x000109d1b588(lVar11 + 0x18,&uStack_128);
                *(undefined8 *)(lVar11 + 0x10) = 0;
                if (plVar14 == (long *)0x0) goto LAB_10a3560a4;
                goto LAB_10a356060;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar16 >> 1 & 1) == 0);
        }
        plVar9 = (long *)puVar7[0x18];
        if (((uint)*(undefined8 *)(puVar7[0x18] + 0x10) >> 5 & 1) != 0) {
          func_0x0001092af97c(plVar9 + 0x12);
          goto LAB_10a35622c;
        }
        if (plVar9 != (long *)0x0) {
          puVar2 = (ulong *)(plVar9 + 1);
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
              (**(code **)(*plVar9 + 8))();
            }
          }
        }
        plVar9 = (long *)puVar7[0x1a];
        if (plVar9 != (long *)0x0) {
          puVar2 = (ulong *)(plVar9 + 1);
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
              (**(code **)(*plVar9 + 8))();
            }
          }
        }
        if ((3 < *(int *)(puVar7 + 0x15)) && ((undefined8 *)puVar7[0x16] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar7[0x16])();
        }
        if ((3 < *(int *)(puVar7 + 0x12)) && ((undefined8 *)puVar7[0x13] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar7[0x13])();
        }
        plVar9 = (long *)puVar7[0x1b];
        if (plVar9 != (long *)0x0) {
          puVar2 = (ulong *)(plVar9 + 1);
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
              (**(code **)(*plVar9 + 8))();
            }
          }
        }
        func_0x0001092ba100(puVar7 + 2);
        if ((3 < *(int *)(puVar7 + 0xe)) && ((undefined8 *)puVar7[0xf] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar7[0xf])();
        }
        if ((3 < *(int *)(puVar7 + 0xb)) && ((undefined8 *)puVar7[0xc] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar7[0xc])();
        }
        plVar9 = (long *)puVar7[9];
        if (plVar9 != (long *)0x0) {
          puVar2 = (ulong *)(plVar9 + 1);
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
              (**(code **)(*plVar9 + 8))();
            }
          }
        }
        func_0x000109d1a1d0(puVar7 + 2);
        __ZdlPv(puVar7);
      }
      if (plVar14 != (long *)0x0) {
LAB_10a356060:
        puVar2 = (ulong *)(plVar14 + 1);
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
            uVar12 = *puVar2 - 1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar12;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          goto LAB_10a356090;
        }
      }
LAB_10a3560a4:
      if ((3 < iStack_f0) && (puStack_e8 != (undefined8 *)0x0)) {
        (**(code **)*puStack_e8)();
      }
      if ((3 < iStack_108) && (puStack_100 != (undefined8 *)0x0)) {
        (**(code **)*puStack_100)();
      }
      plVar14 = (long *)0x0;
      goto LAB_10a3560e8;
    }
    plVar14 = (long *)*plVar9;
    *plVar9 = 0;
    if (((uint)plVar14[2] >> 5 & 1) != 0) {
      __ZNSt13exception_ptrC1ERKS_(&uStack_128,plVar14 + 0x12);
      FUN_10a3567cc(&uStack_f8,&uStack_128);
      __ZNSt13exception_ptrD1Ev(&uStack_128);
LAB_10a355cac:
      puVar2 = (ulong *)(plVar14 + 1);
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
          uVar12 = *puVar2 - 1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar12;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
LAB_10a356090:
        if (uVar12 == 0) {
          (**(code **)(*plVar14 + 8))(plVar14);
        }
      }
      goto LAB_10a3560a4;
    }
    if ((((uint)plVar14[2] >> 1 & 1) != 0) && (((uint)plVar14[2] >> 5 & 1) == 0)) {
      if ((*(byte *)(plVar14 + 0x15) & 1) == 0) goto LAB_10a35622c;
      FUN_10a356630(&uStack_110,plVar14 + 0x13);
      goto LAB_10a355cac;
    }
  }
  if (((uint)plVar14[2] >> 5 & 1) == 0) {
    puVar7 = (undefined8 *)0x10;
    ___cxa_allocate_exception();
    __ZNSt13runtime_errorC2EPKc();
    *puVar7 = &PTR_DAT_110ae85c0;
    ___cxa_throw(puVar7,&PTR_DAT_110ae8598,&DAT_1092af9d8);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&uStack_128,plVar14 + 0x12);
    func_0x0001092af97c(&uStack_128);
  }
LAB_10a35622c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a356230);
  (*pcVar6)();
}



/* Entry: 10a3559e0; end: 10a35649b;  */

void FUN_10a3559e0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  ulong *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *unaff_x26;
  int aiStack_e8 [2];
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  int iStack_d0;
  undefined8 *puStack_c8;
  int aiStack_c0 [2];
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  int iStack_88;
  undefined4 uStack_84;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  int iStack_70;
  undefined8 *puStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = *(long **)(param_6 + 0x10);
  plVar14 = *(long **)(param_6 + 0x18);
  (**(code **)(*plVar14 + 0x58))();
  lVar16 = plVar14[0x47];
  uVar13 = *(undefined8 *)(param_6 + 0x18);
  func_0x0001098849a4(aiStack_c0,uVar13,param_4);
  puVar8 = puStack_b8;
  iVar3 = aiStack_c0[0];
  if (aiStack_c0[0] == 3) {
    puStack_b0 = puStack_b8;
    unaff_x26 = puVar8;
  }
  else if (aiStack_c0[0] == 2) {
    puStack_b0 = (undefined8 *)CONCAT71(puStack_b0._1_7_,puStack_b8._0_1_);
    unaff_x26 = (undefined8 *)((ulong)puStack_b8 & 0xff);
  }
  else if (3 < aiStack_c0[0]) {
    puStack_b8 = (undefined8 *)0x0;
    puStack_b0 = puVar8;
    unaff_x26 = puVar8;
  }
  aiStack_c0[0] = 0;
  uVar15 = *(undefined8 *)(param_6 + 0x18);
  func_0x0001098849a4(aiStack_e8,uVar15,param_4 + 0x10);
  iVar6 = aiStack_e8[0];
  iStack_d0 = aiStack_e8[0];
  if (aiStack_e8[0] == 3) {
    puStack_c8 = puStack_e0;
  }
  else if (aiStack_e8[0] == 2) {
    puStack_c8 = (undefined8 *)CONCAT71(puStack_c8._1_7_,puStack_e0._0_1_);
  }
  else if (3 < aiStack_e8[0]) {
    puStack_c8 = puStack_e0;
    puStack_e0 = (undefined8 *)0x0;
  }
  aiStack_e8[0] = 0;
  uStack_d8 = uVar15;
  if (*plVar10 == 0) {
    FUN_10a35649c(&uStack_90,uVar15,&UNK_10f634760,0x34);
    FUN_10a05589c(&uStack_d8,&uStack_90);
    if ((3 < (int)uStack_90) && ((undefined8 *)CONCAT44(uStack_84,iStack_88) != (undefined8 *)0x0))
    {
      (*(code *)**(undefined8 **)CONCAT44(uStack_84,iStack_88))();
    }
    plVar14 = (long *)(ulong)(3 < iVar3);
LAB_10a3560e8:
    if ((3 < iStack_d0) && (puStack_c8 != (undefined8 *)0x0)) {
      (**(code **)*puStack_c8)();
    }
    if ((3 < aiStack_e8[0]) && (puStack_e0 != (undefined8 *)0x0)) {
      (**(code **)*puStack_e0)();
    }
    if (((int)plVar14 != 0) && (puStack_b0 != (undefined8 *)0x0)) {
      (**(code **)*puStack_b0)();
    }
    if ((3 < aiStack_c0[0]) && (puStack_b8 != (undefined8 *)0x0)) {
      (**(code **)*puStack_b8)();
    }
    *param_1 = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    iStack_88 = iVar3;
    if (iVar3 == 3) {
      puStack_80 = puStack_b0;
    }
    else if (iVar3 == 2) {
      puStack_80 = (undefined8 *)CONCAT71(puStack_80._1_7_,(char)unaff_x26);
    }
    else if (3 < iVar3) {
      puStack_80 = puStack_b0;
      puStack_b0 = (undefined8 *)0x0;
    }
    iStack_70 = iVar6;
    if (iVar6 == 3) {
      puStack_68 = puStack_c8;
    }
    else if (iVar6 == 2) {
      puStack_68 = (undefined8 *)CONCAT71(puStack_68._1_7_,puStack_c8._0_1_);
    }
    else if (3 < iVar6) {
      puStack_68 = puStack_c8;
      puStack_c8 = (undefined8 *)0x0;
    }
    iStack_d0 = 0;
    uStack_90 = uVar13;
    uStack_78 = uVar15;
    if (((uint)*(undefined8 *)(*plVar10 + 0x10) >> 1 & 1) == 0) {
      puVar8 = (undefined8 *)0xe8;
      __Znwm();
      *puVar8 = FUN_10a389014;
      puVar8[1] = FUN_10a389474;
      func_0x0001092ba17c(puVar8 + 2);
      plVar14 = (long *)puVar8[7];
      if (plVar14 != (long *)0x0) {
        plVar1 = plVar14 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar8[9] = *plVar10;
      *plVar10 = 0;
      puVar8[10] = uStack_90;
      *(int *)(puVar8 + 0xb) = iStack_88;
      if (iStack_88 == 3) {
        puVar8[0xc] = puStack_80;
      }
      else if (iStack_88 == 2) {
        *(undefined1 *)(puVar8 + 0xc) = puStack_80._0_1_;
      }
      else if (3 < iStack_88) {
        puVar8[0xc] = puStack_80;
        puStack_80 = (undefined8 *)0x0;
      }
      iStack_88 = 0;
      puVar8[0xd] = uStack_78;
      *(int *)(puVar8 + 0xe) = iStack_70;
      if (iStack_70 == 3) {
        puVar8[0xf] = puStack_68;
      }
      else if (iStack_70 == 2) {
        *(undefined1 *)(puVar8 + 0xf) = puStack_68._0_1_;
      }
      else if (3 < iStack_70) {
        puVar8[0xf] = puStack_68;
        puStack_68 = (undefined8 *)0x0;
      }
      iStack_70 = 0;
      puVar8[0x18] = lVar16;
      *(undefined1 *)(puVar8 + 0x19) = 0;
      *(undefined1 *)(puVar8 + 0x1c) = 0;
      puVar9 = puVar8 + 0x18;
      func_0x0001092ba064(puVar9,puVar8);
      if (((ulong)puVar9 & 1) == 0) {
        puVar8[0x1b] = puVar8[9];
        puVar8[9] = 0;
        puVar8[0x11] = puVar8[10];
        iVar3 = *(int *)(puVar8 + 0xb);
        *(int *)(puVar8 + 0x12) = iVar3;
        if (iVar3 == 3) {
          puVar8[0x13] = puVar8[0xc];
        }
        else if (iVar3 == 2) {
          *(undefined1 *)(puVar8 + 0x13) = *(undefined1 *)(puVar8 + 0xc);
        }
        else if (3 < iVar3) {
          puVar8[0x13] = puVar8[0xc];
          puVar8[0xc] = 0;
        }
        *(undefined4 *)(puVar8 + 0xb) = 0;
        puVar8[0x14] = puVar8[0xd];
        iVar3 = *(int *)(puVar8 + 0xe);
        *(int *)(puVar8 + 0x15) = iVar3;
        if (iVar3 == 3) {
          puVar8[0x16] = puVar8[0xf];
        }
        else if (iVar3 == 2) {
          *(undefined1 *)(puVar8 + 0x16) = *(undefined1 *)(puVar8 + 0xf);
        }
        else if (3 < iVar3) {
          puVar8[0x16] = puVar8[0xf];
          puVar8[0xf] = 0;
        }
        *(undefined4 *)(puVar8 + 0xe) = 0;
        FUN_10a356920(puVar8 + 0x1a,puVar8 + 0x1b,puVar8 + 0x11);
        puVar8[0x18] = puVar8[0x1a];
        plVar10 = (long *)(puVar8[0x1a] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = *plVar10 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (((uint)*(undefined8 *)(puVar8[0x18] + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(puVar8 + 0x1c) = 1;
          lVar16 = puVar8[0x18];
          plVar10 = (long *)(lVar16 + 0x10);
          uVar13 = puVar8[3];
          do {
            lVar12 = *plVar10;
            if (lVar12 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar5) {
                *plVar10 = 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                uStack_a8 = 0;
                puStack_a0 = puVar8;
                uStack_98 = uVar13;
                func_0x000109d1b588(lVar16 + 0x18,&uStack_a8);
                *(undefined8 *)(lVar16 + 0x10) = 0;
                if (plVar14 == (long *)0x0) goto LAB_10a3560a4;
                goto LAB_10a356060;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar12 >> 1 & 1) == 0);
        }
        plVar10 = (long *)puVar8[0x18];
        if (((uint)*(undefined8 *)(puVar8[0x18] + 0x10) >> 5 & 1) != 0) {
          func_0x0001092af97c(plVar10 + 0x12);
          goto LAB_10a35622c;
        }
        if (plVar10 != (long *)0x0) {
          puVar2 = (ulong *)(plVar10 + 1);
          do {
            uVar11 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar11 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar11 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plVar10 + 8))();
            }
          }
        }
        plVar10 = (long *)puVar8[0x1a];
        if (plVar10 != (long *)0x0) {
          puVar2 = (ulong *)(plVar10 + 1);
          do {
            uVar11 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar11 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar11 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plVar10 + 8))();
            }
          }
        }
        if ((3 < *(int *)(puVar8 + 0x15)) && ((undefined8 *)puVar8[0x16] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar8[0x16])();
        }
        if ((3 < *(int *)(puVar8 + 0x12)) && ((undefined8 *)puVar8[0x13] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar8[0x13])();
        }
        plVar10 = (long *)puVar8[0x1b];
        if (plVar10 != (long *)0x0) {
          puVar2 = (ulong *)(plVar10 + 1);
          do {
            uVar11 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar11 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar11 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plVar10 + 8))();
            }
          }
        }
        func_0x0001092ba100(puVar8 + 2);
        if ((3 < *(int *)(puVar8 + 0xe)) && ((undefined8 *)puVar8[0xf] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar8[0xf])();
        }
        if ((3 < *(int *)(puVar8 + 0xb)) && ((undefined8 *)puVar8[0xc] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar8[0xc])();
        }
        plVar10 = (long *)puVar8[9];
        if (plVar10 != (long *)0x0) {
          puVar2 = (ulong *)(plVar10 + 1);
          do {
            uVar11 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar11 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar11 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plVar10 + 8))();
            }
          }
        }
        func_0x000109d1a1d0(puVar8 + 2);
        __ZdlPv(puVar8);
      }
      if (plVar14 != (long *)0x0) {
LAB_10a356060:
        puVar2 = (ulong *)(plVar14 + 1);
        do {
          uVar11 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar11 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          do {
            uVar11 = *puVar2 - 1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar11;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          goto LAB_10a356090;
        }
      }
LAB_10a3560a4:
      if ((3 < iStack_70) && (puStack_68 != (undefined8 *)0x0)) {
        (**(code **)*puStack_68)();
      }
      if ((3 < iStack_88) && (puStack_80 != (undefined8 *)0x0)) {
        (**(code **)*puStack_80)();
      }
      plVar14 = (long *)0x0;
      goto LAB_10a3560e8;
    }
    plVar14 = (long *)*plVar10;
    *plVar10 = 0;
    if (((uint)plVar14[2] >> 5 & 1) != 0) {
      __ZNSt13exception_ptrC1ERKS_(&uStack_a8,plVar14 + 0x12);
      FUN_10a3567cc(&uStack_78,&uStack_a8);
      __ZNSt13exception_ptrD1Ev(&uStack_a8);
LAB_10a355cac:
      puVar2 = (ulong *)(plVar14 + 1);
      do {
        uVar11 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar11 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar2 - 1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_10a356090:
        if (uVar11 == 0) {
          (**(code **)(*plVar14 + 8))(plVar14);
        }
      }
      goto LAB_10a3560a4;
    }
    if ((((uint)plVar14[2] >> 1 & 1) != 0) && (((uint)plVar14[2] >> 5 & 1) == 0)) {
      if ((*(byte *)(plVar14 + 0x15) & 1) == 0) goto LAB_10a35622c;
      FUN_10a356630(&uStack_90,plVar14 + 0x13);
      goto LAB_10a355cac;
    }
  }
  if (((uint)plVar14[2] >> 5 & 1) == 0) {
    puVar8 = (undefined8 *)0x10;
    ___cxa_allocate_exception();
    __ZNSt13runtime_errorC2EPKc();
    *puVar8 = &PTR_DAT_110ae85c0;
    ___cxa_throw(puVar8,&PTR_DAT_110ae8598,&DAT_1092af9d8);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&uStack_a8,plVar14 + 0x12);
    func_0x0001092af97c(&uStack_a8);
  }
LAB_10a35622c:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a356230);
  (*pcVar7)();
}



/* Entry: 10a35649c; end: 10a3565cf;  */

void FUN_10a35649c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puStack_68;
  long *plStack_60;
  int iStack_58;
  undefined8 *puStack_50;
  undefined1 auStack_48 [8];
  int iStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_3;
  uStack_28 = param_4;
  (**(code **)(*param_2 + 0x30))(&puStack_68,param_2);
  puStack_50 = puStack_68;
  puStack_68 = (undefined8 *)0x0;
  iStack_58 = 7;
  plStack_60 = param_2;
  FUN_10a055e1c(auStack_48,&plStack_60,&DAT_10f685520);
  FUN_10a055f9c(param_1,auStack_48,&uStack_30);
  if ((3 < iStack_40) && (puStack_38 != (undefined8 *)0x0)) {
    (**(code **)*puStack_38)();
  }
  if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
    (**(code **)*puStack_50)();
  }
  if (puStack_68 != (undefined8 *)0x0) {
    (**(code **)*puStack_68)();
  }
  return;
}



/* Entry: 10a3565d0; end: 10a35662f;  */

long FUN_10a3565d0(long param_1)

{
  if ((3 < *(int *)(param_1 + 0x20)) && (*(undefined8 **)(param_1 + 0x28) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x28))();
  }
  if ((3 < *(int *)(param_1 + 8)) && (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x10))();
  }
  return param_1;
}



/* Entry: 10a356630; end: 10a3567cb;  */

void FUN_10a356630(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  int aiStack_60 [2];
  undefined8 *puStack_58;
  undefined8 **ppuStack_50;
  long *plStack_48;
  undefined1 *puStack_40;
  undefined4 **ppuStack_38;
  int *piStack_30;
  undefined8 uStack_28;
  
  func_0x000109884c0c(&ppuStack_50,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_78,&ppuStack_50,*param_1);
  if (ppuStack_50 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_50)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_80);
  plVar1 = (long *)*param_1;
  if (*param_2 == 0) {
    aiStack_60[0] = 1;
  }
  else {
    func_0x0001098849a4(aiStack_60,plVar1,*param_2 + 8);
  }
  piStack_30 = aiStack_60;
  uStack_28 = 1;
  (**(code **)(*plVar1 + 0x58))(plVar1);
  ppuStack_50 = &puStack_78;
  ppuStack_38 = &piStack_30;
  plStack_48 = plVar1;
  puStack_40 = (undefined1 *)&puStack_80;
  func_0x0001098960c0(aiStack_70);
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if ((3 < aiStack_60[0]) && (puStack_58 != (undefined8 *)0x0)) {
    (**(code **)*puStack_58)();
  }
  if (puStack_80 != (undefined8 *)0x0) {
    (**(code **)*puStack_80)();
  }
  if (puStack_78 != (undefined8 *)0x0) {
    (**(code **)*puStack_78)();
  }
  return;
}



/* Entry: 10a3567cc; end: 10a35691f;  */

void FUN_10a3567cc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x0001092af97c(param_2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a3567f4);
  (*pcVar1)();
}



/* Entry: 10a356920; end: 10a356eab;  */

void FUN_10a356920(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puVar6 = (undefined8 *)0xb0;
  __Znwm();
  *puVar6 = FUN_10a388a10;
  puVar6[1] = FUN_10a388e1c;
  uVar9 = *param_2;
  *param_2 = 0;
  puVar6[9] = *param_3;
  puVar6[0x10] = uVar9;
  iVar2 = *(int *)(param_3 + 1);
  *(int *)(puVar6 + 10) = iVar2;
  if (iVar2 == 3) {
    puVar6[0xb] = param_3[2];
  }
  else if (iVar2 == 2) {
    *(undefined1 *)(puVar6 + 0xb) = *(undefined1 *)(param_3 + 2);
  }
  else if (3 < iVar2) {
    puVar6[0xb] = param_3[2];
    param_3[2] = 0;
  }
  *(undefined4 *)(param_3 + 1) = 0;
  puVar6[0xc] = param_3[3];
  iVar2 = *(int *)(param_3 + 4);
  *(int *)(puVar6 + 0xd) = iVar2;
  if (iVar2 == 3) {
    puVar6[0xe] = param_3[5];
  }
  else if (iVar2 == 2) {
    *(undefined1 *)(puVar6 + 0xe) = *(undefined1 *)(param_3 + 5);
  }
  else if (3 < iVar2) {
    puVar6[0xe] = param_3[5];
    param_3[5] = 0;
  }
  *(undefined4 *)(param_3 + 4) = 0;
  func_0x0001092ba17c(puVar6 + 2);
  lVar10 = puVar6[7];
  if (lVar10 != 0) {
    plVar8 = (long *)(lVar10 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar10;
  puVar6[0x12] = 0;
  *(undefined1 *)(puVar6 + 0x15) = 0;
  puVar7 = puVar6 + 0x12;
  FUN_10a057268(puVar7,puVar6);
  if (((ulong)puVar7 & 1) == 0) {
    puVar6[0x11] = puVar6[0x12];
    FUN_10a356f54(puVar6 + 0x13,puVar6 + 0x11,puVar6[0x10]);
    puVar6[0x12] = puVar6[0x13];
    plVar8 = (long *)(puVar6[0x13] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(puVar6[0x12] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar6 + 0x15) = 1;
      lVar10 = puVar6[0x12];
      plVar8 = (long *)(lVar10 + 0x10);
      uStack_48 = puVar6[3];
      do {
        lVar12 = *plVar8;
        if (lVar12 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_58 = 0;
            puStack_50 = puVar6;
            func_0x000109d1b588(lVar10 + 0x18,&uStack_58);
            *(undefined8 *)(lVar10 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar12 >> 1 & 1) == 0);
    }
    plVar8 = (long *)puVar6[0x12];
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar11 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar11 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    plVar8 = (long *)puVar6[0x13];
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar11 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar11 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    if (((uint)*(undefined8 *)(puVar6[0x11] + 0x10) >> 1 & 1) == 0) {
      lVar10 = puVar6[0x10];
      puVar6[0x14] = lVar10;
      puVar6[0x10] = 0;
      if (((uint)*(undefined8 *)(lVar10 + 0x10) >> 5 & 1) == 0) {
        func_0x0001092af8bc(puVar6 + 0x14);
        if ((*(byte *)(puVar6[0x14] + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a356d68);
          (*pcVar5)();
        }
        FUN_10a356630(puVar6 + 9,puVar6[0x14] + 0x98);
      }
      else {
        __ZNSt13exception_ptrC1ERKS_(&uStack_58,puVar6[0x14] + 0x90);
        FUN_10a3567cc(puVar6 + 0xc,&uStack_58);
        __ZNSt13exception_ptrD1Ev(&uStack_58);
      }
      plVar8 = (long *)puVar6[0x14];
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          do {
            uVar11 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar11 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar11 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
    }
    func_0x0001092ba100(puVar6 + 2);
    plVar8 = (long *)puVar6[0x11];
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar11 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar11 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar8 + 8))(plVar8);
        }
      }
    }
    func_0x000109d1a1d0(puVar6 + 2);
    if ((3 < *(int *)(puVar6 + 0xd)) && ((undefined8 *)puVar6[0xe] != (undefined8 *)0x0)) {
      (*(code *)**(undefined8 **)puVar6[0xe])();
    }
    if ((3 < *(int *)(puVar6 + 10)) && ((undefined8 *)puVar6[0xb] != (undefined8 *)0x0)) {
      (*(code *)**(undefined8 **)puVar6[0xb])();
    }
    plVar8 = (long *)puVar6[0x10];
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar11 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar11 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    __ZdlPv(puVar6);
  }
  return;
}



/* Entry: 10a356eac; end: 10a356f53;  */

long * FUN_10a356eac(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if ((3 < (int)param_1[5]) && ((undefined8 *)param_1[6] != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)param_1[6])();
  }
  if ((3 < (int)param_1[2]) && ((undefined8 *)param_1[3] != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)param_1[3])();
  }
  plVar4 = (long *)*param_1;
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
  return param_1;
}



/* Entry: 10a356f54; end: 10a3574d7;  */

/* WARNING: Removing unreachable block (ram,0x00010a3570ac) */
/* WARNING: Removing unreachable block (ram,0x00010a3572bc) */
/* WARNING: Removing unreachable block (ram,0x00010a35706c) */
/* WARNING: Removing unreachable block (ram,0x00010a357200) */

void FUN_10a356f54(long *param_1,long *param_2,long param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  code *pcStack_68;
  long *plStack_60;
  undefined **ppuStack_58;
  
  if (param_3 != 0) {
    plVar9 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)0x118;
  __Znwm();
  plVar4[2] = 0;
  plVar4[1] = 0x200000006;
  *(undefined2 *)(plVar4 + 3) = 4;
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
  plVar4[0x10] = 0;
  plVar4[0x11] = (long)(plVar4 + 3);
  plVar4[0x12] = 0;
  *(undefined1 *)(plVar4 + 0x13) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 0;
  *plVar4 = (long)&PTR_FUN_110bc6448;
  plVar10 = plVar4 + 0x16;
  *plVar10 = param_3;
  plVar9 = (long *)(*param_2 + 8);
  plVar4[0x17] = *param_2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = *plVar9 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[0x1a] = 0;
  plVar4[0x1b] = 0x32aaaba7;
  plVar4[0x1d] = 0;
  plVar4[0x1c] = 0;
  plVar4[0x1f] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x21] = 0;
  plVar4[0x20] = 0;
  plVar4[0x22] = 0;
  lStack_78 = 0;
  plVar4[0x18] = (long)plVar4;
  plVar4[0x19] = 0;
  plStack_70 = plVar10;
  if (((uint)*(undefined8 *)(plVar4[0x17] + 0x10) >> 1 & 1) == 0) {
    __ZNSt3__15mutex4lockEv(plVar4 + 0x1b);
    lVar8 = *plVar10;
    plVar9 = (long *)(lVar8 + 0x10);
    do {
      lVar6 = *plVar9;
      if (lVar6 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar6 = lVar8 + 0x18;
          pcStack_68 = FUN_10a3574d8;
          ppuStack_58 = &PTR_PTR_1132fed68;
          plStack_60 = plVar10;
          func_0x000109d1b588(lVar6,&pcStack_68);
          *(undefined8 *)(lVar8 + 0x10) = 0;
          plStack_70[3] = lVar6;
          lVar8 = plVar4[0x17];
          plVar9 = (long *)(lVar8 + 0x10);
          goto LAB_10a3571ec;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar6 >> 1 & 1) == 0);
    plStack_70[3] = 0;
    lVar8 = plVar4[0x18];
    plVar9 = (long *)(lVar8 + 0x10);
    do {
      lVar6 = *plVar9;
      if (lVar6 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = 2;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          func_0x000109d1b4dc(lVar8 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar6 >> 1 & 1) == 0);
    plVar9 = (long *)plVar4[0x17];
    plVar4[0x17] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
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
        (**(code **)(*plVar9 + 0x10))(plVar9);
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
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar8 = plVar4[0x18];
    plVar4[0x18] = 0;
    if (lVar8 != 0) {
      func_0x0001092b4274(plVar4 + 0x18);
    }
    *param_1 = *plVar10;
    *plVar10 = 0;
    plStack_80 = plVar4;
LAB_10a35742c:
    __ZNSt3__15mutex6unlockEv(plVar4 + 0x1b);
  }
  else {
    lVar8 = plVar4[0x18];
    plVar9 = plVar4;
    FUN_109d1857c();
    func_0x000109d1b350(lVar8,plVar9);
    plVar9 = (long *)*plVar10;
    *plVar10 = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
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
          (**(code **)(*plVar9 + 8))();
        }
      }
    }
    plVar9 = (long *)plVar4[0x17];
    plVar4[0x17] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
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
        (**(code **)(*plVar9 + 0x10))(plVar9);
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
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar8 = plVar4[0x18];
    plVar4[0x18] = 0;
    if (lVar8 != 0) {
      func_0x0001092b4274(plVar4 + 0x18);
    }
    *param_1 = (long)plVar4;
    plStack_80 = (long *)0x0;
  }
  if (lStack_78 != 0) {
    func_0x0001092b4274(&lStack_78);
  }
  if (plStack_80 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_80 + 1);
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
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  return;
LAB_10a3571ec:
  do {
    lVar7 = *plVar9;
    if (lVar7 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar6 = lVar8 + 0x18;
        pcStack_68 = FUN_10a357674;
        ppuStack_58 = &PTR_PTR_1132fed68;
        plStack_60 = plVar10;
        func_0x000109d1b588(lVar6,&pcStack_68);
        *(undefined8 *)(lVar8 + 0x10) = 0;
        plStack_70[4] = lVar6;
        *param_1 = (long)plVar4;
        goto LAB_10a357428;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)lVar7 >> 1 & 1) == 0);
  plStack_70[4] = 0;
  lVar8 = plVar4[0x18];
  FUN_109d1857c();
  func_0x000109d1b350(lVar8,lVar6);
  plVar9 = (long *)plVar4[0x17];
  plVar4[0x17] = 0;
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
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
      (**(code **)(*plVar9 + 0x10))(plVar9);
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
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  lVar6 = *plVar10;
  plVar9 = (long *)(lVar6 + 0x10);
  lVar8 = plStack_70[3];
  while (lVar7 = *plVar9, lVar7 != 0) {
    ClearExclusiveLocal();
LAB_10a3572d0:
    if (((uint)lVar7 >> 1 & 1) != 0) goto LAB_10a357420;
  }
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar3) {
    *plVar9 = 1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 != '\0') goto LAB_10a3572d0;
  pcStack_68 = FUN_10a3574d8;
  ppuStack_58 = &PTR_PTR_1132fed68;
  plStack_60 = plVar10;
  FUN_109d1b624(lVar6 + 0x18,&pcStack_68,lVar8);
  *(undefined8 *)(lVar6 + 0x10) = 0;
  plStack_70[3] = 0;
  plVar9 = (long *)*plVar10;
  *plVar10 = 0;
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
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
        (**(code **)(*plVar9 + 8))();
      }
    }
  }
  lVar8 = plVar4[0x18];
  plVar4[0x18] = 0;
  if (lVar8 != 0) {
    func_0x0001092b4274(plVar4 + 0x18);
  }
LAB_10a357420:
  *param_1 = (long)plVar4;
LAB_10a357428:
  plStack_80 = (long *)0x0;
  goto LAB_10a35742c;
}



/* Entry: 10a3574d8; end: 10a357673;  */

void FUN_10a3574d8(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  code *pcStack_48;
  long *plStack_40;
  undefined **ppuStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 5);
  pcStack_48 = FUN_10a357674;
  ppuStack_38 = &PTR_PTR_1132fed68;
  plStack_40 = param_1;
  func_0x0001092ba560(param_1 + 1,param_1 + 4,&pcStack_48);
  lVar8 = param_1[2];
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    func_0x0001092af8bc(param_1);
    lVar9 = *param_1;
    if ((*(byte *)(lVar9 + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a357670);
      (*pcVar4)();
    }
    plVar5 = (long *)(lVar8 + 0x10);
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
          if (*(char *)(lVar8 + 0xa8) == '\x01') {
            func_0x00010a004dac(lVar8 + 0x98);
            *(undefined1 *)(lVar8 + 0xa8) = 0;
          }
          lVar7 = *(long *)(lVar9 + 0xa0);
          uVar10 = *(undefined8 *)(lVar9 + 0x98);
          *(undefined8 *)(lVar8 + 0xa0) = *(undefined8 *)(lVar9 + 0xa0);
          *(undefined8 *)(lVar8 + 0x98) = uVar10;
          if (lVar7 != 0) {
            plVar5 = (long *)(lVar7 + 8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar3) {
                *plVar5 = *plVar5 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          *(undefined1 *)(lVar8 + 0xa8) = 1;
          *(undefined8 *)(lVar8 + 0x10) = 2;
          FUN_109d1b4dc(lVar8 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar7 >> 1 & 1) == 0);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&pcStack_48,*param_1 + 0x90);
    func_0x000109d1b350(lVar8,&pcStack_48);
    __ZNSt13exception_ptrD1Ev(&pcStack_48);
  }
  plVar5 = (long *)*param_1;
  *param_1 = 0;
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
  FUN_10a357a14(param_1,param_1 + 3);
  return;
}



/* Entry: 10a357674; end: 10a357753;  */

void FUN_10a357674(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  pcStack_48 = FUN_10a3574d8;
  ppuStack_38 = &PTR_PTR_1132fed68;
  lVar4 = param_1;
  lStack_40 = param_1;
  func_0x0001098adf90(param_1,param_1 + 0x18,&pcStack_48);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  FUN_109d1857c();
  func_0x000109d1b350(uVar6,lVar4);
  plVar7 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
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
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  FUN_10a357a14(param_1,param_1 + 0x20);
  return;
}



/* Entry: 10a357754; end: 10a3577c7;  */

long * FUN_10a357754(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (param_1[1] != 0) {
    func_0x0001092b4274();
  }
  plVar4 = (long *)*param_1;
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
  return param_1;
}



/* Entry: 10a3577c8; end: 10a357a13;  */

undefined8 * FUN_10a3577c8(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110bc6448;
  __ZNSt3__15mutexD1Ev(param_1 + 0x1b);
  if (param_1[0x18] != 0) {
    func_0x0001092b4274();
  }
  plVar5 = (long *)param_1[0x17];
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
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
  plVar5 = (long *)param_1[0x16];
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
  *param_1 = &PTR_FUN_110bc5718;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    func_0x00010a004dac(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a357a14; end: 10a357a83;  */

void FUN_10a357a14(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lStack_28;
  
  *param_2 = 0;
  if ((*(long *)(param_1 + 0x18) == 0) && (*(long *)(param_1 + 0x20) == 0)) {
    lVar1 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    __ZNSt3__15mutex6unlockEv(param_1 + 0x28);
    lStack_28 = 0;
    if (lVar1 != 0) {
      func_0x0001092b4274(&lStack_28,lVar1);
      if (lStack_28 != 0) {
        func_0x0001092b4274(&lStack_28);
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x28);
  return;
}



/* Entry: 10a357a84; end: 10a357a9f;  */

void FUN_10a357a84(void)

{
  return;
}



/* Entry: 10a357aa0; end: 10a357b5b;  */

void FUN_10a357aa0(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f650afb,0x18);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a357b5c);
  (*pcVar4)();
}



/* Entry: 10a357b5c; end: 10a357b6b;  */

void FUN_10a357b5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc6498;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a357b6c; end: 10a357b8b;  */

void FUN_10a357b6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc6498;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a357b8c; end: 10a357b93;  */

void FUN_10a357b8c(void)

{
  return;
}



/* Entry: 10a357b94; end: 10a357d9f;  */

undefined1  [16] FUN_10a357b94(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined1 auVar11 [16];
  
  uVar10 = param_2[1];
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar9 & uVar3) == 0) {
      unaff_x24 = uVar3 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar7 * uVar9;
      }
    }
    puVar5 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if ((puVar5 != (undefined8 *)0x0) && (plVar8 = (long *)*puVar5, plVar8 != (long *)0x0)) {
      do {
        uVar7 = plVar8[1];
        if (uVar7 == uVar10) {
          if (plVar8[2] == *param_2 && plVar8[3] == uVar10) {
            uVar2 = 0;
            goto LAB_10a357d6c;
          }
        }
        else {
          if ((uVar9 & uVar3) == 0) {
            uVar7 = uVar7 & uVar3;
          }
          else if (uVar9 <= uVar7) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar7 / uVar9;
            }
            uVar7 = uVar7 - uVar1 * uVar9;
          }
          if (uVar7 != unaff_x24) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  plVar8 = (long *)0x20;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar10;
  lVar6 = *param_3;
  plVar8[3] = param_3[1];
  plVar8[2] = lVar6;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar9) {
      uVar3 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar3 = uVar3 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    FUN_10a34cdc4(param_1,uVar3);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar3 * uVar9;
      }
    }
  }
  lVar6 = *param_1;
  plVar4 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar8 = *plVar4;
    *plVar4 = (long)plVar8;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar4;
    if (*plVar8 == 0) goto LAB_10a357d5c;
    uVar10 = *(ulong *)(*plVar8 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar10 = uVar10 & uVar9 - 1;
    }
    else if (uVar9 <= uVar10) {
      uVar3 = 0;
      if (uVar9 != 0) {
        uVar3 = uVar10 / uVar9;
      }
      uVar10 = uVar10 - uVar3 * uVar9;
    }
    plVar4 = (long *)(*param_1 + uVar10 * 8);
  }
  else {
    *plVar8 = *plVar4;
  }
  *plVar4 = (long)plVar8;
LAB_10a357d5c:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_10a357d6c:
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 10a357da0; end: 10a357e9b;  */

undefined1  [16] FUN_10a357da0(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bc8450;
  puVar1 = &UNK_10f64efef;
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
    ppuStack_40 = &PTR_DAT_110bc8450;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c42c58;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a357e9c; end: 10a357f57;  */

void FUN_10a357e9c(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f650b20,0x13);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a357f58);
  (*pcVar4)();
}



/* Entry: 10a357f58; end: 10a3580ab;  */

/* WARNING: Removing unreachable block (ram,0x00010a358018) */
/* WARNING: Removing unreachable block (ram,0x00010a358020) */

void FUN_10a357f58(undefined8 param_1,long *param_2,undefined8 param_3,uint *param_4,long param_5)

{
  uint *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa8;
  
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
  FUN_10a3580ac(param_2,param_3);
  FUN_10a358114(param_5);
  puVar1 = (uint *)&stack0xffffffffffffffb0;
  if (param_5 != 0) {
    puVar1 = param_4;
  }
  if (*puVar1 < 2) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar6 = param_2;
    FUN_10a358138(param_2);
  }
  FUN_10a329c24(&stack0xffffffffffffffa0,plVar5,plVar6);
  FUN_10a26f500(param_1,param_2,&stack0xffffffffffffffa0);
  if (in_stack_ffffffffffffffa8 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar5 = plVar4 + 0x4b;
  lVar7 = plVar4[0x59];
  uVar8 = lVar7 - 1;
  plVar4[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar5[lVar7 + 2];
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
  lVar7 = *plVar5;
  lVar12 = plVar4[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar4[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar9 >> 0x3c == 0) {
          lVar3 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar3 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar5 = lVar11;
          plVar4[0x4c] = lVar12 + uVar15 * 0x10;
          plVar4[0x4d] = lVar3 + uVar9 * 0x10;
          lStack_88 = lVar7;
          lStack_80 = lVar7;
          lStack_78 = lVar7;
          lStack_70 = lVar13;
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
    _bzero(lVar12,uVar15 * 0x10);
    plVar4[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar4[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar8;
  return;
}



/* Entry: 10a3580ac; end: 10a358113;  */

void FUN_10a3580ac(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  bool bVar11;
  code *pcVar12;
  undefined8 ***pppuVar13;
  undefined4 uVar14;
  long lVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  long *plVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  long *plVar25;
  undefined **ppuVar26;
  ulong uVar27;
  undefined4 *extraout_x8;
  undefined8 uVar28;
  ulong uVar29;
  long lVar30;
  long *plVar31;
  long *plVar32;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar33;
  undefined8 unaff_x22;
  long lVar34;
  long lVar35;
  undefined8 unaff_x23;
  long *plVar36;
  long lVar37;
  undefined8 unaff_x24;
  ulong uVar38;
  undefined8 unaff_x25;
  ulong uVar39;
  undefined8 unaff_x26;
  undefined4 *puVar40;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ****ppppuVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 ***pppuStack_40;
  code *pcStack_38;
  undefined8 **ppuStack_30;
  code *pcStack_28;
  
  ppuVar16 = param_1;
  func_0x000109898688();
  if (ppuVar16 != (undefined **)0x0) {
    ppuVar26 = param_1;
    FUN_10a053854(param_1,ppuVar16);
    if (ppuVar26 != (undefined **)0x0) {
      param_4 = 0x10;
      ___dynamic_cast();
      if (ppuVar26 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  ppuVar16 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  if ((uint)ppuVar16 < 2) {
    return;
  }
  pcStack_28 = FUN_10a358114;
  ppuVar17 = (undefined **)0x1;
  ppuVar26 = (undefined **)0x1;
  ppuStack_30 = (undefined8 **)&stack0xfffffffffffffff0;
  FUN_10a052ee0(1,1);
  pppuVar13 = (undefined8 ***)&stack0xffffffffffffffb0;
  pcStack_38 = FUN_10a358138;
  ppppuVar41 = &pppuStack_40;
  ppuVar18 = ppuVar17;
  pppuStack_40 = &ppuStack_30;
  func_0x000109898688();
  if (ppuVar18 == (undefined **)0x0) {
    ppuVar19 = (undefined **)&UNK_10f68f52e;
    pcVar12 = FUN_10a358170;
    func_0x00010988bd28();
  }
  else {
    pppuVar13 = &ppuStack_30;
    ppuVar19 = ppuVar17;
    ppuVar26 = ppuVar18;
    ppuVar17 = param_1;
    ppppuVar41 = (undefined8 ****)pppuStack_40;
    pcVar12 = pcStack_38;
  }
  *(undefined8 *****)((long)pppuVar13 + -0x10) = ppppuVar41;
  *(code **)((long)pppuVar13 + -8) = pcVar12;
  FUN_10a053854();
  if (ppuVar19 != (undefined **)0x0) {
    ppuVar26 = &PTR_DAT_110b178e0;
    ppuVar16 = &PTR_DAT_110bd3290;
    param_4 = 0x10;
    ___dynamic_cast();
    if (ppuVar19 != (undefined **)0x0) {
      return;
    }
  }
  plVar21 = (long *)&UNK_10f685496;
  func_0x00010988bd28();
  *(undefined8 *)((long)pppuVar13 + -0x70) = unaff_x28;
  *(undefined8 *)((long)pppuVar13 + -0x68) = unaff_x27;
  *(undefined8 *)((long)pppuVar13 + -0x60) = unaff_x26;
  *(undefined8 *)((long)pppuVar13 + -0x58) = unaff_x25;
  *(undefined8 *)((long)pppuVar13 + -0x50) = unaff_x24;
  *(undefined8 *)((long)pppuVar13 + -0x48) = unaff_x23;
  *(undefined8 *)((long)pppuVar13 + -0x40) = unaff_x22;
  *(undefined8 *)((long)pppuVar13 + -0x38) = unaff_x21;
  *(undefined8 *)((long)pppuVar13 + -0x30) = unaff_x20;
  *(undefined ***)((long)pppuVar13 + -0x28) = ppuVar17;
  *(undefined1 **)((long)pppuVar13 + -0x20) = (undefined1 *)((long)pppuVar13 + -0x10);
  *(code **)((long)pppuVar13 + -0x18) = FUN_10a3581b0;
  plVar20 = plVar21;
  (**(code **)(*plVar21 + 0x58))();
  if ((ulong)plVar20[0x59] < 8) {
    plVar20[plVar20[0x59] + 0x4e] = plVar20[0x5a];
    plVar20[0x59] = plVar20[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar20 + 0x4b);
  }
  plVar25 = plVar21;
  FUN_10a3580ac(plVar21,ppuVar26);
  FUN_10a358d5c(param_4);
  if (*(uint *)ppuVar16 < 2) {
    plVar36 = (long *)0x0;
  }
  else {
    plVar36 = plVar21;
    FUN_10a358138(plVar21,ppuVar16);
  }
  FUN_10a358d80((undefined1 *)((long)pppuVar13 + -0x1d0),plVar21,ppuVar16 + 2);
  FUN_10a1cf048((undefined1 *)((long)pppuVar13 + -0x1e0),plVar21,ppuVar16 + 4);
  FUN_10a358dd8((undefined1 *)((long)pppuVar13 + -0x1f0),plVar21,ppuVar16 + 6);
  lVar35 = *(long *)((long)pppuVar13 + -0x1d0);
  *(undefined8 *)((long)pppuVar13 + -0x1f8) = *(undefined8 *)((long)pppuVar13 + -0x1c8);
  *(long *)((long)pppuVar13 + -0x200) = lVar35;
  *(long *)((long)pppuVar13 + -0x1a0) = lVar35;
  *(undefined8 *)((long)pppuVar13 + -0x198) = *(undefined8 *)((long)pppuVar13 + -0x1c8);
  *(undefined8 *)((long)pppuVar13 + -0x1d0) = 0;
  *(undefined8 *)((long)pppuVar13 + -0x1c8) = 0;
  *(undefined8 *)((long)pppuVar13 + -0x208) = *(undefined8 *)((long)pppuVar13 + -0x1d8);
  *(undefined8 *)((long)pppuVar13 + -0x210) = *(undefined8 *)((long)pppuVar13 + -0x1e0);
  *(undefined8 *)((long)pppuVar13 + -0x1b0) = *(undefined8 *)((long)pppuVar13 + -0x1e0);
  *(undefined8 *)((long)pppuVar13 + -0x1a8) = *(undefined8 *)((long)pppuVar13 + -0x1d8);
  *(undefined8 *)((long)pppuVar13 + -0x1e0) = 0;
  *(undefined8 *)((long)pppuVar13 + -0x1d8) = 0;
  lVar30 = *(long *)((long)pppuVar13 + -0x1f0);
  uVar28 = *(undefined8 *)((long)pppuVar13 + -0x1e8);
  *(long *)((long)pppuVar13 + -0x1c0) = lVar30;
  *(undefined8 *)((long)pppuVar13 + -0x1b8) = uVar28;
  *(undefined8 *)((long)pppuVar13 + -0x1f0) = 0;
  *(undefined8 *)((long)pppuVar13 + -0x1e8) = 0;
  if (plVar36 == (long *)0x0) {
    *(undefined8 *)((long)pppuVar13 + -0xc0) = 0;
    *(undefined8 *)((long)pppuVar13 + -0xb8) = 0;
  }
  else {
    plVar21 = plVar36;
    FUN_10a329a58((undefined1 *)((long)pppuVar13 + -0xc0));
  }
  if (plVar25[0x1c] == plVar25[0x1d]) {
    FUN_10a35b718();
LAB_10a358b64:
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x10a358b68);
    (*pcVar12)();
  }
  puVar40 = extraout_x8;
  if (((*(byte *)(plVar25[10] + 0xe2a) & 1) == 0) && (FUN_10a1c5b90(), ((ulong)plVar21 & 1) == 0)) {
    if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      func_0x00010ae06f08(1,8,&UNK_10f64f076,&UNK_10f64f1db,499,&UNK_10f64f34f);
    }
    if (lVar30 == 0) {
      puVar22 = (undefined8 *)0x0;
      *(undefined8 *)((long)pppuVar13 + -0x218) = 0;
      *(undefined8 *)((long)pppuVar13 + -0xd0) = 0;
      *(undefined8 *)((long)pppuVar13 + -200) = 0;
    }
    else {
      puVar22 = (undefined8 *)0x20;
      __Znwm();
      puVar22[1] = 0;
      puVar22[2] = 0;
      *puVar22 = &PTR_FUN_110bc6608;
      puVar23 = puVar22 + 3;
      *(undefined4 *)puVar23 = 0;
      *(undefined8 **)((long)pppuVar13 + -0x218) = puVar23;
      *(undefined8 **)((long)pppuVar13 + -0xd0) = puVar23;
      *(undefined8 **)((long)pppuVar13 + -200) = puVar22;
    }
    lVar35 = plVar25[10];
    plVar21 = (long *)plVar25[0x21];
    *(undefined8 *)((long)pppuVar13 + -0xe0) = 0;
    *(undefined8 *)((long)pppuVar13 + -0xd8) = 0;
    *(undefined8 *)((long)pppuVar13 + -0xe8) = 0;
    if (plVar21 == (long *)0x0) {
      plVar36 = (long *)0x0;
      lVar33 = 0;
    }
    else {
      lVar33 = 0;
      plVar36 = plVar21;
      do {
        lVar33 = lVar33 + 1;
        plVar36 = (long *)*plVar36;
      } while (plVar36 != (long *)0x0);
      FUN_10a187ce4((undefined1 *)((long)pppuVar13 + -0xe8),lVar33);
      plVar36 = *(long **)((long)pppuVar13 + -0xe0);
      plVar31 = plVar36;
      do {
        lVar33 = plVar21[2];
        plVar32 = plVar31 + 2;
        plVar31[1] = plVar21[3];
        *plVar31 = lVar33;
        plVar21 = (long *)*plVar21;
        plVar36 = plVar36 + 2;
        plVar31 = plVar32;
      } while (plVar21 != (long *)0x0);
      *(long **)((long)pppuVar13 + -0xe0) = plVar32;
      lVar33 = *(long *)((long)pppuVar13 + -0xe8);
    }
    FUN_10a3c3f80((undefined1 *)((long)pppuVar13 + -0xf8),*(undefined8 *)(lVar35 + 0x858),lVar33,
                  (long)plVar36 - lVar33 >> 4);
    lVar33 = lVar35;
    FUN_10a3e0428();
    *(long *)((long)pppuVar13 + -0x100) = lVar33;
    puVar23 = (undefined8 *)0x78;
    __Znwm();
    *(undefined4 *)(puVar23 + 4) = 0;
    puVar23[2] = 0;
    puVar23[3] = 0;
    puVar23[5] = 0;
    puVar23[6] = 0;
    *(undefined8 *)((long)pppuVar13 + -0x1a0) = 0;
    *(undefined8 *)((long)pppuVar13 + -0x198) = 0;
    uVar44 = *(undefined8 *)((long)pppuVar13 + -0x210);
    uVar43 = *(undefined8 *)((long)pppuVar13 + -0x1f8);
    uVar42 = *(undefined8 *)((long)pppuVar13 + -0x200);
    puVar23[10] = *(undefined8 *)((long)pppuVar13 + -0x208);
    puVar23[9] = uVar44;
    puVar23[8] = uVar43;
    puVar23[7] = uVar42;
    *(undefined8 *)((long)pppuVar13 + -0x1b0) = 0;
    *(undefined8 *)((long)pppuVar13 + -0x1a8) = 0;
    puVar23[0xb] = lVar30;
    puVar23[0xc] = uVar28;
    *(undefined8 *)((long)pppuVar13 + -0x1c0) = 0;
    *(undefined8 *)((long)pppuVar13 + -0x1b8) = 0;
    *puVar23 = &PTR_DAT_110bc6658;
    puVar23[1] = 0;
    puVar23[0xe] = 0;
    puVar23[0xd] = 0;
    FUN_10a3c0130(puVar23 + 0xd,(undefined1 *)((long)pppuVar13 + -0xf8));
    plVar21 = *(long **)(*(long *)((long)pppuVar13 + -0x100) + 0x150);
    *(undefined8 **)(*(long *)((long)pppuVar13 + -0x100) + 0x150) = puVar23;
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 8))();
      puVar23 = *(undefined8 **)(*(long *)((long)pppuVar13 + -0x100) + 0x150);
    }
    uVar14 = SUB84(plVar21,0);
    *(undefined8 **)((long)pppuVar13 + -0x108) = puVar23;
    *(undefined1 **)((long)pppuVar13 + -0x128) = (undefined1 *)((long)pppuVar13 + -0x108);
    *(long **)((long)pppuVar13 + -0x120) = plVar25;
    *(undefined1 **)((long)pppuVar13 + -0x118) = (undefined1 *)((long)pppuVar13 + -0x100);
    __ZSt19uncaught_exceptionsv();
    *(undefined4 *)((long)pppuVar13 + -0x110) = uVar14;
    (**(code **)(*plVar25 + 0x50))((undefined1 *)((long)pppuVar13 + -400),plVar25);
    *(undefined8 *)((long)pppuVar13 + -0x138) = *(undefined8 *)((long)pppuVar13 + -0x188);
    *(undefined8 *)((long)pppuVar13 + -0x140) = *(undefined8 *)((long)pppuVar13 + -400);
    if (*(long *)((long)pppuVar13 + -0x188) != 0) {
      plVar21 = (long *)(*(long *)((long)pppuVar13 + -0x188) + 8);
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar11) {
          *plVar21 = *plVar21 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      plVar21 = *(long **)((long)pppuVar13 + -0x188);
      if (plVar21 != (long *)0x0) {
        plVar36 = plVar21 + 1;
        do {
          lVar30 = *plVar36;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar36,0x10);
          if (bVar11) {
            *plVar36 = lVar30 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar30 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
        }
      }
    }
    uVar28 = *(undefined8 *)((long)pppuVar13 + -0x140);
    uVar42 = *(undefined8 *)((long)pppuVar13 + -0x138);
    *(undefined8 *)((long)pppuVar13 + -400) = uVar28;
    *(undefined8 *)((long)pppuVar13 + -0x188) = uVar42;
    *(undefined8 *)((long)pppuVar13 + -0x140) = 0;
    *(undefined8 *)((long)pppuVar13 + -0x138) = 0;
    *(undefined8 *)((long)pppuVar13 + -0x180) = *(undefined8 *)((long)pppuVar13 + -0x218);
    *(undefined8 **)((long)pppuVar13 + -0x178) = puVar22;
    if (puVar22 != (undefined8 *)0x0) {
      plVar21 = puVar22 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar11) {
          *plVar21 = *plVar21 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    *(undefined8 *)((long)pppuVar13 + -0x170) = *(undefined8 *)((long)pppuVar13 + -0x108);
    *(long *)((long)pppuVar13 + -0x168) = lVar35;
    uVar43 = *(undefined8 *)((long)pppuVar13 + -0xc0);
    lVar30 = *(long *)((long)pppuVar13 + -0xb8);
    *(undefined8 *)((long)pppuVar13 + -0x160) = *(undefined8 *)((long)pppuVar13 + -0x100);
    *(undefined8 *)((long)pppuVar13 + -0x158) = uVar43;
    *(long *)((long)pppuVar13 + -0x150) = lVar30;
    if (lVar30 != 0) {
      plVar21 = (long *)(lVar30 + 0x10);
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar11) {
          *plVar21 = *plVar21 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    if ((*(byte *)(plVar25[10] + 0x1f8) & 1) == 0) goto LAB_10a358b64;
    puVar23 = *(undefined8 **)(plVar25[10] + 0x1b0);
    plVar21 = (long *)puVar23[2];
    *(undefined8 *)((long)pppuVar13 + -0xa8) = 0;
    *(undefined8 *)((long)pppuVar13 + -0xa0) = 0;
    if (plVar21 == (long *)0x0) {
      *(undefined8 *)((long)pppuVar13 + -0x188) = 0;
      *(undefined8 *)((long)pppuVar13 + -400) = 0;
      *(undefined8 *)((long)pppuVar13 + -0x178) = 0;
      *(undefined8 *)((long)pppuVar13 + -0x180) = 0;
      if (lVar30 != 0) {
        plVar21 = (long *)(lVar30 + 0x10);
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar11) {
            *plVar21 = *plVar21 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      puVar24 = (undefined8 *)0x100;
      __Znwm();
      puVar24[2] = 0;
      puVar24[1] = 0x200000006;
      *(undefined2 *)(puVar24 + 3) = 4;
      puVar24[5] = 0;
      puVar24[4] = 0;
      puVar24[7] = 0;
      puVar24[6] = 0;
      puVar24[9] = 0;
      puVar24[8] = 0;
      puVar24[0xb] = 0;
      puVar24[10] = 0;
      puVar24[0xd] = 0;
      puVar24[0xc] = 0;
      puVar24[0xf] = 0;
      puVar24[0xe] = 0;
      puVar24[0x10] = 0;
      puVar24[0x11] = puVar24 + 3;
      puVar24[0x12] = 0;
      *(undefined2 *)(puVar24 + 0x13) = 0;
      *puVar24 = &PTR_DAT_110bc59c0;
      puVar24[0x14] = uVar28;
      uVar28 = *(undefined8 *)((long)pppuVar13 + -0x218);
      puVar24[0x15] = uVar42;
      puVar24[0x16] = uVar28;
      puVar24[0x17] = puVar22;
      uVar28 = *(undefined8 *)((long)pppuVar13 + -0x160);
      uVar42 = *(undefined8 *)((long)pppuVar13 + -0x170);
      puVar24[0x19] = *(undefined8 *)((long)pppuVar13 + -0x168);
      puVar24[0x18] = uVar42;
      puVar24[0x1a] = uVar28;
      puVar24[0x1b] = uVar43;
      puVar24[0x1c] = lVar30;
      if (lVar30 != 0) {
        plVar21 = (long *)(lVar30 + 0x10);
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar11) {
            *plVar21 = *plVar21 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      *(undefined1 *)(puVar24 + 0x1e) = 1;
      puVar24[0x1f] = 0;
      *(undefined8 **)((long)pppuVar13 + -0xa8) = puVar24;
      if (*(long *)((long)pppuVar13 + -0xa0) != 0) {
        func_0x0001092b4274((undefined1 *)((long)pppuVar13 + -0xa0));
      }
      *(undefined8 **)((long)pppuVar13 + -0xa0) = puVar24;
      *(undefined8 **)((long)pppuVar13 + -0xb0) = puVar24 + 0x14;
      if (lVar30 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv(lVar30);
      }
      *(code **)((long)pppuVar13 + -0x98) = FUN_10a34d694;
    }
    else {
      *(undefined8 *)((long)pppuVar13 + -0x90) = 0;
      (**(code **)(*plVar21 + 0x28))(plVar21,0,(undefined1 *)((long)pppuVar13 + -0x90));
      if (*(long *)((long)pppuVar13 + -0x90) != 0) {
        func_0x0001092af97c((undefined1 *)((long)pppuVar13 + -0x90));
        goto LAB_10a358b64;
      }
      *(undefined8 *)((long)pppuVar13 + -0x188) = 0;
      *(undefined8 *)((long)pppuVar13 + -400) = 0;
      *(undefined8 *)((long)pppuVar13 + -0x178) = 0;
      *(undefined8 *)((long)pppuVar13 + -0x180) = 0;
      if (lVar30 != 0) {
        plVar25 = (long *)(lVar30 + 0x10);
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar11) {
            *plVar25 = *plVar25 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      *(undefined4 **)((long)pppuVar13 + -0x200) = extraout_x8;
      puVar24 = (undefined8 *)0x108;
      __Znwm();
      puVar24[2] = 0;
      puVar24[1] = 0x200000006;
      *(undefined2 *)(puVar24 + 3) = 4;
      puVar24[5] = 0;
      puVar24[4] = 0;
      puVar24[7] = 0;
      puVar24[6] = 0;
      puVar24[9] = 0;
      puVar24[8] = 0;
      puVar24[0xb] = 0;
      puVar24[10] = 0;
      puVar24[0xd] = 0;
      puVar24[0xc] = 0;
      puVar24[0xf] = 0;
      puVar24[0xe] = 0;
      puVar24[0x10] = 0;
      puVar24[0x11] = puVar24 + 3;
      puVar24[0x12] = 0;
      *(undefined2 *)(puVar24 + 0x13) = 0;
      *puVar24 = &PTR_FUN_110bc5988;
      puVar24[0x14] = uVar28;
      uVar28 = *(undefined8 *)((long)pppuVar13 + -0x218);
      puVar24[0x15] = uVar42;
      puVar24[0x16] = uVar28;
      puVar24[0x17] = puVar22;
      uVar28 = *(undefined8 *)((long)pppuVar13 + -0x160);
      uVar42 = *(undefined8 *)((long)pppuVar13 + -0x170);
      puVar24[0x19] = *(undefined8 *)((long)pppuVar13 + -0x168);
      puVar24[0x18] = uVar42;
      puVar24[0x1a] = uVar28;
      puVar24[0x1b] = uVar43;
      puVar24[0x1c] = lVar30;
      if (lVar30 != 0) {
        plVar25 = (long *)(lVar30 + 0x10);
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar11) {
            *plVar25 = *plVar25 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      *(undefined1 *)(puVar24 + 0x1e) = 1;
      puVar24[0x1f] = 0;
      puVar24[0x20] = plVar21;
      plVar21 = *(long **)((long)pppuVar13 + -0xa8);
      if (plVar21 != (long *)0x0) {
        puVar1 = (ulong *)(plVar21 + 1);
        do {
          uVar27 = *puVar1;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar11) {
            *puVar1 = uVar27 - 4;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if ((uVar27 & 0x1fffffffc) == 4) {
          do {
            uVar27 = *puVar1;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar11) {
              *puVar1 = uVar27 - 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (uVar27 - 1 == 0) {
            (**(code **)(*plVar21 + 8))();
          }
        }
      }
      *(undefined8 **)((long)pppuVar13 + -0xa8) = puVar24;
      if (*(long *)((long)pppuVar13 + -0xa0) != 0) {
        func_0x0001092b4274((undefined1 *)((long)pppuVar13 + -0xa0));
      }
      *(undefined8 **)((long)pppuVar13 + -0xa0) = puVar24;
      *(undefined8 **)((long)pppuVar13 + -0xb0) = puVar24 + 0x14;
      if (lVar30 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv(lVar30);
      }
      *(undefined8 *)((long)pppuVar13 + -0x98) = 0x10a34d664;
      __ZNSt13exception_ptrD1Ev((undefined1 *)((long)pppuVar13 + -0x90));
      puVar40 = *(undefined4 **)((long)pppuVar13 + -0x200);
    }
    lVar33 = *(long *)((long)pppuVar13 + -0xb0);
    lVar35 = lVar33;
    if (*(long *)(lVar33 + 0x58) != 0) {
      func_0x0001092b4274();
      lVar35 = *(long *)((long)pppuVar13 + -0xb0);
    }
    uVar28 = *(undefined8 *)((long)pppuVar13 + -0x98);
    *(undefined8 *)(lVar33 + 0x58) = *(undefined8 *)((long)pppuVar13 + -0xa0);
    *(undefined8 *)((long)pppuVar13 + -0xa0) = 0;
    *(undefined8 *)((long)pppuVar13 + -0x90) = uVar28;
    *(long *)((long)pppuVar13 + -0x88) = lVar35;
    *(undefined8 **)((long)pppuVar13 + -0x80) = puVar23;
    (**(code **)*puVar23)(puVar23,(undefined1 *)((long)pppuVar13 + -0x90));
    plVar21 = *(long **)((long)pppuVar13 + -0xa8);
    *(undefined8 *)((long)pppuVar13 + -0xa8) = 0;
    if (*(long *)((long)pppuVar13 + -0xa0) != 0) {
      func_0x0001092b4274((undefined1 *)((long)pppuVar13 + -0xa0));
      plVar25 = *(long **)((long)pppuVar13 + -0xa8);
      if (plVar25 != (long *)0x0) {
        puVar1 = (ulong *)(plVar25 + 1);
        do {
          uVar27 = *puVar1;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar11) {
            *puVar1 = uVar27 - 4;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if ((uVar27 & 0x1fffffffc) == 4) {
          do {
            uVar27 = *puVar1;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar11) {
              *puVar1 = uVar27 - 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (uVar27 - 1 == 0) {
            (**(code **)(*plVar25 + 8))();
          }
        }
      }
    }
    if (plVar21 != (long *)0x0) {
      puVar1 = (ulong *)(plVar21 + 1);
      do {
        uVar27 = *puVar1;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar11) {
          *puVar1 = uVar27 - 4;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if ((uVar27 & 0x1fffffffc) == 4) {
        do {
          uVar27 = *puVar1;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar11) {
            *puVar1 = uVar27 - 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (uVar27 - 1 == 0) {
          (**(code **)(*plVar21 + 8))(plVar21);
        }
      }
    }
    if (lVar30 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv(lVar30);
    }
    plVar21 = *(long **)((long)pppuVar13 + -0x138);
    if (plVar21 != (long *)0x0) {
      plVar25 = plVar21 + 1;
      do {
        lVar30 = *plVar25;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar11) {
          *plVar25 = lVar30 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar30 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      }
    }
    FUN_10a329b50((undefined1 *)((long)pppuVar13 + -0x128));
    if (*(long *)((long)pppuVar13 + -0xf0) != 0) {
      uVar28 = *(undefined8 *)((long)pppuVar13 + -0xf8);
      *(undefined8 *)((long)pppuVar13 + -0xf8) = 0;
      *(undefined8 *)((long)pppuVar13 + -0xf0) = 0;
      FUN_10a3c017c(uVar28);
    }
    if (*(long *)((long)pppuVar13 + -0xe8) != 0) {
      *(long *)((long)pppuVar13 + -0xe0) = *(long *)((long)pppuVar13 + -0xe8);
      __ZdlPv();
    }
    plVar21 = *(long **)((long)pppuVar13 + -200);
    if (plVar21 != (long *)0x0) {
      plVar25 = plVar21 + 1;
      do {
        lVar30 = *plVar25;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar11) {
          *plVar25 = lVar30 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar30 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
        goto LAB_10a35835c;
      }
    }
  }
  else {
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f64f076,&UNK_10f64f1db,0x264,&UNK_10f64f396);
    }
    FUN_10a329c24((undefined1 *)((long)pppuVar13 + -0xb0),plVar25,plVar36);
    if (lVar35 != 0) {
      FUN_10a329ce8(lVar35,(undefined1 *)((long)pppuVar13 + -0xb0));
    }
    plVar21 = *(long **)((long)pppuVar13 + -0xa8);
    if (plVar21 != (long *)0x0) {
LAB_10a35835c:
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
    }
  }
  if (*(long *)((long)pppuVar13 + -0xb8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar21 = *(long **)((long)pppuVar13 + -0x1b8);
  if (plVar21 != (long *)0x0) {
    plVar25 = plVar21 + 1;
    do {
      lVar30 = *plVar25;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar11) {
        *plVar25 = lVar30 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar30 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
    }
  }
  plVar21 = *(long **)((long)pppuVar13 + -0x1a8);
  if (plVar21 != (long *)0x0) {
    plVar25 = plVar21 + 1;
    do {
      lVar30 = *plVar25;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar11) {
        *plVar25 = lVar30 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar30 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
    }
  }
  plVar21 = *(long **)((long)pppuVar13 + -0x198);
  if (plVar21 != (long *)0x0) {
    plVar25 = plVar21 + 1;
    do {
      lVar30 = *plVar25;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar11) {
        *plVar25 = lVar30 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar30 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
    }
  }
  plVar21 = *(long **)((long)pppuVar13 + -0x1e8);
  if (plVar21 != (long *)0x0) {
    plVar25 = plVar21 + 1;
    do {
      lVar30 = *plVar25;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar11) {
        *plVar25 = lVar30 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar30 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
    }
  }
  plVar21 = *(long **)((long)pppuVar13 + -0x1d8);
  if (plVar21 != (long *)0x0) {
    plVar25 = plVar21 + 1;
    do {
      lVar30 = *plVar25;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar11) {
        *plVar25 = lVar30 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar30 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
    }
  }
  plVar21 = *(long **)((long)pppuVar13 + -0x1c8);
  if (plVar21 != (long *)0x0) {
    plVar25 = plVar21 + 1;
    do {
      lVar30 = *plVar25;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar11) {
        *plVar25 = lVar30 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar30 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
    }
  }
  *puVar40 = 0;
  plVar21 = plVar20 + 0x4b;
  uVar28 = *(undefined8 *)((long)pppuVar13 + -0x20);
  uVar4 = *(undefined8 *)((long)pppuVar13 + -0x18);
  uVar42 = *(undefined8 *)((long)pppuVar13 + -0x30);
  uVar5 = *(undefined8 *)((long)pppuVar13 + -0x28);
  uVar43 = *(undefined8 *)((long)pppuVar13 + -0x40);
  uVar6 = *(undefined8 *)((long)pppuVar13 + -0x38);
  uVar44 = *(undefined8 *)((long)pppuVar13 + -0x50);
  uVar7 = *(undefined8 *)((long)pppuVar13 + -0x48);
  uVar2 = *(undefined8 *)((long)pppuVar13 + -0x60);
  uVar8 = *(undefined8 *)((long)pppuVar13 + -0x58);
  uVar3 = *(undefined8 *)((long)pppuVar13 + -0x70);
  uVar9 = *(undefined8 *)((long)pppuVar13 + -0x68);
  lVar30 = plVar20[0x59];
  uVar27 = lVar30 - 1;
  plVar20[0x59] = uVar27;
  if (uVar27 < 8) {
    uVar27 = plVar21[lVar30 + 2];
    if (plVar20[0x5a] == uVar27) {
      return;
    }
  }
  else {
    uVar27 = *(ulong *)(plVar20[0x57] + -8);
    plVar20[0x57] = plVar20[0x57] + -8;
    if (plVar20[0x5a] == uVar27) {
      return;
    }
  }
  *(undefined8 *)((long)pppuVar13 + -0x70) = uVar3;
  *(undefined8 *)((long)pppuVar13 + -0x68) = uVar9;
  *(undefined8 *)((long)pppuVar13 + -0x60) = uVar2;
  *(undefined8 *)((long)pppuVar13 + -0x58) = uVar8;
  *(undefined8 *)((long)pppuVar13 + -0x50) = uVar44;
  *(undefined8 *)((long)pppuVar13 + -0x48) = uVar7;
  *(undefined8 *)((long)pppuVar13 + -0x40) = uVar43;
  *(undefined8 *)((long)pppuVar13 + -0x38) = uVar6;
  *(undefined8 *)((long)pppuVar13 + -0x30) = uVar42;
  *(undefined8 *)((long)pppuVar13 + -0x28) = uVar5;
  *(undefined8 *)((long)pppuVar13 + -0x20) = uVar28;
  *(undefined8 *)((long)pppuVar13 + -0x18) = uVar4;
  lVar30 = *plVar21;
  lVar35 = plVar20[0x4c];
  lVar33 = lVar35 - lVar30;
  uVar38 = lVar33 >> 4;
  if (uVar38 < uVar27) {
    uVar39 = uVar27 - uVar38;
    lVar37 = plVar20[0x4d];
    if ((ulong)(lVar37 - lVar35 >> 4) < uVar39) {
      if (uVar27 >> 0x3c == 0) {
        uVar29 = lVar37 - lVar30 >> 3;
        if (uVar29 <= uVar27) {
          uVar29 = uVar27;
        }
        if (0x7fffffffffffffef < (ulong)(lVar37 - lVar30)) {
          uVar29 = 0xfffffffffffffff;
        }
        *(long **)((long)pppuVar13 + -0x78) = plVar21;
        if (uVar29 >> 0x3c == 0) {
          lVar15 = uVar29 << 4;
          __Znwm();
          lVar35 = lVar15 + lVar33;
          _bzero(lVar35,uVar39 * 0x10);
          lVar34 = lVar35 + uVar38 * -0x10;
          _memcpy(lVar34,lVar30,lVar33);
          *plVar21 = lVar34;
          plVar20[0x4c] = lVar35 + uVar39 * 0x10;
          plVar20[0x4d] = lVar15 + uVar29 * 0x10;
          *(long *)((long)pppuVar13 + -0x88) = lVar30;
          *(long *)((long)pppuVar13 + -0x80) = lVar37;
          *(long *)((long)pppuVar13 + -0x98) = lVar30;
          *(long *)((long)pppuVar13 + -0x90) = lVar30;
          func_0x00010988c1b8((undefined1 *)((long)pppuVar13 + -0x98));
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar12)();
    }
    _bzero(lVar35,uVar39 * 0x10);
    plVar20[0x4c] = lVar35 + uVar39 * 0x10;
  }
  else if (uVar27 < uVar38) {
    lVar30 = lVar30 + uVar27 * 0x10;
    while (lVar35 != lVar30) {
      lVar35 = lVar35 + -0x10;
      func_0x00010988c204(lVar35);
    }
    plVar20[0x4c] = lVar30;
  }
code_r0x00010988c138:
  plVar20[0x5a] = uVar27;
  return;
}



/* Entry: 10a358114; end: 10a358137;  */

void FUN_10a358114(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  bool bVar11;
  code *pcVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  long lVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  long *plVar19;
  long *plVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long *plVar24;
  undefined **ppuVar25;
  ulong uVar26;
  undefined4 *extraout_x8;
  undefined8 uVar27;
  ulong uVar28;
  long lVar29;
  long *plVar30;
  long *plVar31;
  undefined **unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar32;
  undefined8 unaff_x22;
  long lVar33;
  long lVar34;
  undefined8 unaff_x23;
  long *plVar35;
  long lVar36;
  undefined8 unaff_x24;
  ulong uVar37;
  undefined8 unaff_x25;
  ulong uVar38;
  undefined8 unaff_x26;
  undefined4 *puVar39;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ****ppppuVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 ***pppuStack_20;
  code *pcStack_18;
  
  if ((uint)param_1 < 2) {
    return;
  }
  ppuVar16 = (undefined **)0x1;
  ppuVar25 = (undefined **)0x1;
  FUN_10a052ee0(1,1);
  puVar13 = &stack0xffffffffffffffd0;
  pcStack_18 = FUN_10a358138;
  ppppuVar40 = &pppuStack_20;
  ppuVar17 = ppuVar16;
  pppuStack_20 = (undefined8 ***)&stack0xfffffffffffffff0;
  func_0x000109898688();
  if (ppuVar17 == (undefined **)0x0) {
    ppuVar18 = (undefined **)&UNK_10f68f52e;
    pcVar12 = FUN_10a358170;
    func_0x00010988bd28();
  }
  else {
    puVar13 = &stack0xfffffffffffffff0;
    ppuVar18 = ppuVar16;
    ppuVar25 = ppuVar17;
    ppuVar16 = unaff_x19;
    ppppuVar40 = (undefined8 ****)pppuStack_20;
    pcVar12 = pcStack_18;
  }
  *(undefined8 *****)(puVar13 + -0x10) = ppppuVar40;
  *(code **)(puVar13 + -8) = pcVar12;
  FUN_10a053854();
  if (ppuVar18 != (undefined **)0x0) {
    ppuVar25 = &PTR_DAT_110b178e0;
    param_1 = &PTR_DAT_110bd3290;
    param_4 = 0x10;
    ___dynamic_cast();
    if (ppuVar18 != (undefined **)0x0) {
      return;
    }
  }
  plVar20 = (long *)&UNK_10f685496;
  func_0x00010988bd28();
  *(undefined8 *)(puVar13 + -0x70) = unaff_x28;
  *(undefined8 *)(puVar13 + -0x68) = unaff_x27;
  *(undefined8 *)(puVar13 + -0x60) = unaff_x26;
  *(undefined8 *)(puVar13 + -0x58) = unaff_x25;
  *(undefined8 *)(puVar13 + -0x50) = unaff_x24;
  *(undefined8 *)(puVar13 + -0x48) = unaff_x23;
  *(undefined8 *)(puVar13 + -0x40) = unaff_x22;
  *(undefined8 *)(puVar13 + -0x38) = unaff_x21;
  *(undefined8 *)(puVar13 + -0x30) = unaff_x20;
  *(undefined ***)(puVar13 + -0x28) = ppuVar16;
  *(undefined1 **)(puVar13 + -0x20) = puVar13 + -0x10;
  *(code **)(puVar13 + -0x18) = FUN_10a3581b0;
  plVar19 = plVar20;
  (**(code **)(*plVar20 + 0x58))();
  if ((ulong)plVar19[0x59] < 8) {
    plVar19[plVar19[0x59] + 0x4e] = plVar19[0x5a];
    plVar19[0x59] = plVar19[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar19 + 0x4b);
  }
  plVar24 = plVar20;
  FUN_10a3580ac(plVar20,ppuVar25);
  FUN_10a358d5c(param_4);
  if (*(uint *)param_1 < 2) {
    plVar35 = (long *)0x0;
  }
  else {
    plVar35 = plVar20;
    FUN_10a358138(plVar20,param_1);
  }
  FUN_10a358d80(puVar13 + -0x1d0,plVar20,param_1 + 2);
  FUN_10a1cf048(puVar13 + -0x1e0,plVar20,param_1 + 4);
  FUN_10a358dd8(puVar13 + -0x1f0,plVar20,param_1 + 6);
  lVar34 = *(long *)(puVar13 + -0x1d0);
  *(undefined8 *)(puVar13 + -0x1f8) = *(undefined8 *)(puVar13 + -0x1c8);
  *(long *)(puVar13 + -0x200) = lVar34;
  *(long *)(puVar13 + -0x1a0) = lVar34;
  *(undefined8 *)(puVar13 + -0x198) = *(undefined8 *)(puVar13 + -0x1c8);
  *(undefined8 *)(puVar13 + -0x1d0) = 0;
  *(undefined8 *)(puVar13 + -0x1c8) = 0;
  *(undefined8 *)(puVar13 + -0x208) = *(undefined8 *)(puVar13 + -0x1d8);
  *(undefined8 *)(puVar13 + -0x210) = *(undefined8 *)(puVar13 + -0x1e0);
  *(undefined8 *)(puVar13 + -0x1b0) = *(undefined8 *)(puVar13 + -0x1e0);
  *(undefined8 *)(puVar13 + -0x1a8) = *(undefined8 *)(puVar13 + -0x1d8);
  *(undefined8 *)(puVar13 + -0x1e0) = 0;
  *(undefined8 *)(puVar13 + -0x1d8) = 0;
  lVar29 = *(long *)(puVar13 + -0x1f0);
  uVar27 = *(undefined8 *)(puVar13 + -0x1e8);
  *(long *)(puVar13 + -0x1c0) = lVar29;
  *(undefined8 *)(puVar13 + -0x1b8) = uVar27;
  *(undefined8 *)(puVar13 + -0x1f0) = 0;
  *(undefined8 *)(puVar13 + -0x1e8) = 0;
  if (plVar35 == (long *)0x0) {
    *(undefined8 *)(puVar13 + -0xc0) = 0;
    *(undefined8 *)(puVar13 + -0xb8) = 0;
  }
  else {
    plVar20 = plVar35;
    FUN_10a329a58(puVar13 + -0xc0);
  }
  if (plVar24[0x1c] == plVar24[0x1d]) {
    FUN_10a35b718();
LAB_10a358b64:
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x10a358b68);
    (*pcVar12)();
  }
  puVar39 = extraout_x8;
  if (((*(byte *)(plVar24[10] + 0xe2a) & 1) == 0) && (FUN_10a1c5b90(), ((ulong)plVar20 & 1) == 0)) {
    if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      func_0x00010ae06f08(1,8,&UNK_10f64f076,&UNK_10f64f1db,499,&UNK_10f64f34f);
    }
    if (lVar29 == 0) {
      puVar21 = (undefined8 *)0x0;
      *(undefined8 *)(puVar13 + -0x218) = 0;
      *(undefined8 *)(puVar13 + -0xd0) = 0;
      *(undefined8 *)(puVar13 + -200) = 0;
    }
    else {
      puVar21 = (undefined8 *)0x20;
      __Znwm();
      puVar21[1] = 0;
      puVar21[2] = 0;
      *puVar21 = &PTR_FUN_110bc6608;
      puVar22 = puVar21 + 3;
      *(undefined4 *)puVar22 = 0;
      *(undefined8 **)(puVar13 + -0x218) = puVar22;
      *(undefined8 **)(puVar13 + -0xd0) = puVar22;
      *(undefined8 **)(puVar13 + -200) = puVar21;
    }
    lVar34 = plVar24[10];
    plVar20 = (long *)plVar24[0x21];
    *(undefined8 *)(puVar13 + -0xe0) = 0;
    *(undefined8 *)(puVar13 + -0xd8) = 0;
    *(undefined8 *)(puVar13 + -0xe8) = 0;
    if (plVar20 == (long *)0x0) {
      plVar35 = (long *)0x0;
      lVar32 = 0;
    }
    else {
      lVar32 = 0;
      plVar35 = plVar20;
      do {
        lVar32 = lVar32 + 1;
        plVar35 = (long *)*plVar35;
      } while (plVar35 != (long *)0x0);
      FUN_10a187ce4(puVar13 + -0xe8,lVar32);
      plVar35 = *(long **)(puVar13 + -0xe0);
      plVar30 = plVar35;
      do {
        lVar32 = plVar20[2];
        plVar31 = plVar30 + 2;
        plVar30[1] = plVar20[3];
        *plVar30 = lVar32;
        plVar20 = (long *)*plVar20;
        plVar35 = plVar35 + 2;
        plVar30 = plVar31;
      } while (plVar20 != (long *)0x0);
      *(long **)(puVar13 + -0xe0) = plVar31;
      lVar32 = *(long *)(puVar13 + -0xe8);
    }
    FUN_10a3c3f80(puVar13 + -0xf8,*(undefined8 *)(lVar34 + 0x858),lVar32,(long)plVar35 - lVar32 >> 4
                 );
    lVar32 = lVar34;
    FUN_10a3e0428();
    *(long *)(puVar13 + -0x100) = lVar32;
    puVar22 = (undefined8 *)0x78;
    __Znwm();
    *(undefined4 *)(puVar22 + 4) = 0;
    puVar22[2] = 0;
    puVar22[3] = 0;
    puVar22[5] = 0;
    puVar22[6] = 0;
    *(undefined8 *)(puVar13 + -0x1a0) = 0;
    *(undefined8 *)(puVar13 + -0x198) = 0;
    uVar43 = *(undefined8 *)(puVar13 + -0x210);
    uVar42 = *(undefined8 *)(puVar13 + -0x1f8);
    uVar41 = *(undefined8 *)(puVar13 + -0x200);
    puVar22[10] = *(undefined8 *)(puVar13 + -0x208);
    puVar22[9] = uVar43;
    puVar22[8] = uVar42;
    puVar22[7] = uVar41;
    *(undefined8 *)(puVar13 + -0x1b0) = 0;
    *(undefined8 *)(puVar13 + -0x1a8) = 0;
    puVar22[0xb] = lVar29;
    puVar22[0xc] = uVar27;
    *(undefined8 *)(puVar13 + -0x1c0) = 0;
    *(undefined8 *)(puVar13 + -0x1b8) = 0;
    *puVar22 = &PTR_DAT_110bc6658;
    puVar22[1] = 0;
    puVar22[0xe] = 0;
    puVar22[0xd] = 0;
    FUN_10a3c0130(puVar22 + 0xd,puVar13 + -0xf8);
    plVar20 = *(long **)(*(long *)(puVar13 + -0x100) + 0x150);
    *(undefined8 **)(*(long *)(puVar13 + -0x100) + 0x150) = puVar22;
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 8))();
      puVar22 = *(undefined8 **)(*(long *)(puVar13 + -0x100) + 0x150);
    }
    uVar14 = SUB84(plVar20,0);
    *(undefined8 **)(puVar13 + -0x108) = puVar22;
    *(undefined1 **)(puVar13 + -0x128) = puVar13 + -0x108;
    *(long **)(puVar13 + -0x120) = plVar24;
    *(undefined1 **)(puVar13 + -0x118) = puVar13 + -0x100;
    __ZSt19uncaught_exceptionsv();
    *(undefined4 *)(puVar13 + -0x110) = uVar14;
    (**(code **)(*plVar24 + 0x50))(puVar13 + -400,plVar24);
    *(undefined8 *)(puVar13 + -0x138) = *(undefined8 *)(puVar13 + -0x188);
    *(undefined8 *)(puVar13 + -0x140) = *(undefined8 *)(puVar13 + -400);
    if (*(long *)(puVar13 + -0x188) != 0) {
      plVar20 = (long *)(*(long *)(puVar13 + -0x188) + 8);
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar11) {
          *plVar20 = *plVar20 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      plVar20 = *(long **)(puVar13 + -0x188);
      if (plVar20 != (long *)0x0) {
        plVar35 = plVar20 + 1;
        do {
          lVar29 = *plVar35;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar35,0x10);
          if (bVar11) {
            *plVar35 = lVar29 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar29 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
        }
      }
    }
    uVar27 = *(undefined8 *)(puVar13 + -0x140);
    uVar41 = *(undefined8 *)(puVar13 + -0x138);
    *(undefined8 *)(puVar13 + -400) = uVar27;
    *(undefined8 *)(puVar13 + -0x188) = uVar41;
    *(undefined8 *)(puVar13 + -0x140) = 0;
    *(undefined8 *)(puVar13 + -0x138) = 0;
    *(undefined8 *)(puVar13 + -0x180) = *(undefined8 *)(puVar13 + -0x218);
    *(undefined8 **)(puVar13 + -0x178) = puVar21;
    if (puVar21 != (undefined8 *)0x0) {
      plVar20 = puVar21 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar11) {
          *plVar20 = *plVar20 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    *(undefined8 *)(puVar13 + -0x170) = *(undefined8 *)(puVar13 + -0x108);
    *(long *)(puVar13 + -0x168) = lVar34;
    uVar42 = *(undefined8 *)(puVar13 + -0xc0);
    lVar29 = *(long *)(puVar13 + -0xb8);
    *(undefined8 *)(puVar13 + -0x160) = *(undefined8 *)(puVar13 + -0x100);
    *(undefined8 *)(puVar13 + -0x158) = uVar42;
    *(long *)(puVar13 + -0x150) = lVar29;
    if (lVar29 != 0) {
      plVar20 = (long *)(lVar29 + 0x10);
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar11) {
          *plVar20 = *plVar20 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    if ((*(byte *)(plVar24[10] + 0x1f8) & 1) == 0) goto LAB_10a358b64;
    puVar22 = *(undefined8 **)(plVar24[10] + 0x1b0);
    plVar20 = (long *)puVar22[2];
    *(undefined8 *)(puVar13 + -0xa8) = 0;
    *(undefined8 *)(puVar13 + -0xa0) = 0;
    if (plVar20 == (long *)0x0) {
      *(undefined8 *)(puVar13 + -0x188) = 0;
      *(undefined8 *)(puVar13 + -400) = 0;
      *(undefined8 *)(puVar13 + -0x178) = 0;
      *(undefined8 *)(puVar13 + -0x180) = 0;
      if (lVar29 != 0) {
        plVar20 = (long *)(lVar29 + 0x10);
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar11) {
            *plVar20 = *plVar20 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      puVar23 = (undefined8 *)0x100;
      __Znwm();
      puVar23[2] = 0;
      puVar23[1] = 0x200000006;
      *(undefined2 *)(puVar23 + 3) = 4;
      puVar23[5] = 0;
      puVar23[4] = 0;
      puVar23[7] = 0;
      puVar23[6] = 0;
      puVar23[9] = 0;
      puVar23[8] = 0;
      puVar23[0xb] = 0;
      puVar23[10] = 0;
      puVar23[0xd] = 0;
      puVar23[0xc] = 0;
      puVar23[0xf] = 0;
      puVar23[0xe] = 0;
      puVar23[0x10] = 0;
      puVar23[0x11] = puVar23 + 3;
      puVar23[0x12] = 0;
      *(undefined2 *)(puVar23 + 0x13) = 0;
      *puVar23 = &PTR_DAT_110bc59c0;
      puVar23[0x14] = uVar27;
      uVar27 = *(undefined8 *)(puVar13 + -0x218);
      puVar23[0x15] = uVar41;
      puVar23[0x16] = uVar27;
      puVar23[0x17] = puVar21;
      uVar27 = *(undefined8 *)(puVar13 + -0x160);
      uVar41 = *(undefined8 *)(puVar13 + -0x170);
      puVar23[0x19] = *(undefined8 *)(puVar13 + -0x168);
      puVar23[0x18] = uVar41;
      puVar23[0x1a] = uVar27;
      puVar23[0x1b] = uVar42;
      puVar23[0x1c] = lVar29;
      if (lVar29 != 0) {
        plVar20 = (long *)(lVar29 + 0x10);
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar11) {
            *plVar20 = *plVar20 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      *(undefined1 *)(puVar23 + 0x1e) = 1;
      puVar23[0x1f] = 0;
      *(undefined8 **)(puVar13 + -0xa8) = puVar23;
      if (*(long *)(puVar13 + -0xa0) != 0) {
        func_0x0001092b4274(puVar13 + -0xa0);
      }
      *(undefined8 **)(puVar13 + -0xa0) = puVar23;
      *(undefined8 **)(puVar13 + -0xb0) = puVar23 + 0x14;
      if (lVar29 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv(lVar29);
      }
      *(code **)(puVar13 + -0x98) = FUN_10a34d694;
    }
    else {
      *(undefined8 *)(puVar13 + -0x90) = 0;
      (**(code **)(*plVar20 + 0x28))(plVar20,0,puVar13 + -0x90);
      if (*(long *)(puVar13 + -0x90) != 0) {
        func_0x0001092af97c(puVar13 + -0x90);
        goto LAB_10a358b64;
      }
      *(undefined8 *)(puVar13 + -0x188) = 0;
      *(undefined8 *)(puVar13 + -400) = 0;
      *(undefined8 *)(puVar13 + -0x178) = 0;
      *(undefined8 *)(puVar13 + -0x180) = 0;
      if (lVar29 != 0) {
        plVar24 = (long *)(lVar29 + 0x10);
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar11) {
            *plVar24 = *plVar24 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      *(undefined4 **)(puVar13 + -0x200) = extraout_x8;
      puVar23 = (undefined8 *)0x108;
      __Znwm();
      puVar23[2] = 0;
      puVar23[1] = 0x200000006;
      *(undefined2 *)(puVar23 + 3) = 4;
      puVar23[5] = 0;
      puVar23[4] = 0;
      puVar23[7] = 0;
      puVar23[6] = 0;
      puVar23[9] = 0;
      puVar23[8] = 0;
      puVar23[0xb] = 0;
      puVar23[10] = 0;
      puVar23[0xd] = 0;
      puVar23[0xc] = 0;
      puVar23[0xf] = 0;
      puVar23[0xe] = 0;
      puVar23[0x10] = 0;
      puVar23[0x11] = puVar23 + 3;
      puVar23[0x12] = 0;
      *(undefined2 *)(puVar23 + 0x13) = 0;
      *puVar23 = &PTR_FUN_110bc5988;
      puVar23[0x14] = uVar27;
      uVar27 = *(undefined8 *)(puVar13 + -0x218);
      puVar23[0x15] = uVar41;
      puVar23[0x16] = uVar27;
      puVar23[0x17] = puVar21;
      uVar27 = *(undefined8 *)(puVar13 + -0x160);
      uVar41 = *(undefined8 *)(puVar13 + -0x170);
      puVar23[0x19] = *(undefined8 *)(puVar13 + -0x168);
      puVar23[0x18] = uVar41;
      puVar23[0x1a] = uVar27;
      puVar23[0x1b] = uVar42;
      puVar23[0x1c] = lVar29;
      if (lVar29 != 0) {
        plVar24 = (long *)(lVar29 + 0x10);
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar11) {
            *plVar24 = *plVar24 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      *(undefined1 *)(puVar23 + 0x1e) = 1;
      puVar23[0x1f] = 0;
      puVar23[0x20] = plVar20;
      plVar20 = *(long **)(puVar13 + -0xa8);
      if (plVar20 != (long *)0x0) {
        puVar1 = (ulong *)(plVar20 + 1);
        do {
          uVar26 = *puVar1;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar11) {
            *puVar1 = uVar26 - 4;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if ((uVar26 & 0x1fffffffc) == 4) {
          do {
            uVar26 = *puVar1;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar11) {
              *puVar1 = uVar26 - 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (uVar26 - 1 == 0) {
            (**(code **)(*plVar20 + 8))();
          }
        }
      }
      *(undefined8 **)(puVar13 + -0xa8) = puVar23;
      if (*(long *)(puVar13 + -0xa0) != 0) {
        func_0x0001092b4274(puVar13 + -0xa0);
      }
      *(undefined8 **)(puVar13 + -0xa0) = puVar23;
      *(undefined8 **)(puVar13 + -0xb0) = puVar23 + 0x14;
      if (lVar29 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv(lVar29);
      }
      *(undefined8 *)(puVar13 + -0x98) = 0x10a34d664;
      __ZNSt13exception_ptrD1Ev(puVar13 + -0x90);
      puVar39 = *(undefined4 **)(puVar13 + -0x200);
    }
    lVar32 = *(long *)(puVar13 + -0xb0);
    lVar34 = lVar32;
    if (*(long *)(lVar32 + 0x58) != 0) {
      func_0x0001092b4274();
      lVar34 = *(long *)(puVar13 + -0xb0);
    }
    uVar27 = *(undefined8 *)(puVar13 + -0x98);
    *(undefined8 *)(lVar32 + 0x58) = *(undefined8 *)(puVar13 + -0xa0);
    *(undefined8 *)(puVar13 + -0xa0) = 0;
    *(undefined8 *)(puVar13 + -0x90) = uVar27;
    *(long *)(puVar13 + -0x88) = lVar34;
    *(undefined8 **)(puVar13 + -0x80) = puVar22;
    (**(code **)*puVar22)(puVar22,puVar13 + -0x90);
    plVar20 = *(long **)(puVar13 + -0xa8);
    *(undefined8 *)(puVar13 + -0xa8) = 0;
    if (*(long *)(puVar13 + -0xa0) != 0) {
      func_0x0001092b4274(puVar13 + -0xa0);
      plVar24 = *(long **)(puVar13 + -0xa8);
      if (plVar24 != (long *)0x0) {
        puVar1 = (ulong *)(plVar24 + 1);
        do {
          uVar26 = *puVar1;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar11) {
            *puVar1 = uVar26 - 4;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if ((uVar26 & 0x1fffffffc) == 4) {
          do {
            uVar26 = *puVar1;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar11) {
              *puVar1 = uVar26 - 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (uVar26 - 1 == 0) {
            (**(code **)(*plVar24 + 8))();
          }
        }
      }
    }
    if (plVar20 != (long *)0x0) {
      puVar1 = (ulong *)(plVar20 + 1);
      do {
        uVar26 = *puVar1;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar11) {
          *puVar1 = uVar26 - 4;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if ((uVar26 & 0x1fffffffc) == 4) {
        do {
          uVar26 = *puVar1;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar11) {
            *puVar1 = uVar26 - 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (uVar26 - 1 == 0) {
          (**(code **)(*plVar20 + 8))(plVar20);
        }
      }
    }
    if (lVar29 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv(lVar29);
    }
    plVar20 = *(long **)(puVar13 + -0x138);
    if (plVar20 != (long *)0x0) {
      plVar24 = plVar20 + 1;
      do {
        lVar29 = *plVar24;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar11) {
          *plVar24 = lVar29 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar29 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
      }
    }
    FUN_10a329b50(puVar13 + -0x128);
    if (*(long *)(puVar13 + -0xf0) != 0) {
      uVar27 = *(undefined8 *)(puVar13 + -0xf8);
      *(undefined8 *)(puVar13 + -0xf8) = 0;
      *(undefined8 *)(puVar13 + -0xf0) = 0;
      FUN_10a3c017c(uVar27);
    }
    if (*(long *)(puVar13 + -0xe8) != 0) {
      *(long *)(puVar13 + -0xe0) = *(long *)(puVar13 + -0xe8);
      __ZdlPv();
    }
    plVar20 = *(long **)(puVar13 + -200);
    if (plVar20 != (long *)0x0) {
      plVar24 = plVar20 + 1;
      do {
        lVar29 = *plVar24;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar11) {
          *plVar24 = lVar29 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar29 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        goto LAB_10a35835c;
      }
    }
  }
  else {
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f64f076,&UNK_10f64f1db,0x264,&UNK_10f64f396);
    }
    FUN_10a329c24(puVar13 + -0xb0,plVar24,plVar35);
    if (lVar34 != 0) {
      FUN_10a329ce8(lVar34,puVar13 + -0xb0);
    }
    plVar20 = *(long **)(puVar13 + -0xa8);
    if (plVar20 != (long *)0x0) {
LAB_10a35835c:
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
    }
  }
  if (*(long *)(puVar13 + -0xb8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar20 = *(long **)(puVar13 + -0x1b8);
  if (plVar20 != (long *)0x0) {
    plVar24 = plVar20 + 1;
    do {
      lVar29 = *plVar24;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar11) {
        *plVar24 = lVar29 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar29 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
    }
  }
  plVar20 = *(long **)(puVar13 + -0x1a8);
  if (plVar20 != (long *)0x0) {
    plVar24 = plVar20 + 1;
    do {
      lVar29 = *plVar24;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar11) {
        *plVar24 = lVar29 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar29 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
    }
  }
  plVar20 = *(long **)(puVar13 + -0x198);
  if (plVar20 != (long *)0x0) {
    plVar24 = plVar20 + 1;
    do {
      lVar29 = *plVar24;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar11) {
        *plVar24 = lVar29 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar29 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
    }
  }
  plVar20 = *(long **)(puVar13 + -0x1e8);
  if (plVar20 != (long *)0x0) {
    plVar24 = plVar20 + 1;
    do {
      lVar29 = *plVar24;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar11) {
        *plVar24 = lVar29 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar29 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
    }
  }
  plVar20 = *(long **)(puVar13 + -0x1d8);
  if (plVar20 != (long *)0x0) {
    plVar24 = plVar20 + 1;
    do {
      lVar29 = *plVar24;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar11) {
        *plVar24 = lVar29 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar29 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
    }
  }
  plVar20 = *(long **)(puVar13 + -0x1c8);
  if (plVar20 != (long *)0x0) {
    plVar24 = plVar20 + 1;
    do {
      lVar29 = *plVar24;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar11) {
        *plVar24 = lVar29 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar29 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
    }
  }
  *puVar39 = 0;
  plVar20 = plVar19 + 0x4b;
  uVar27 = *(undefined8 *)(puVar13 + -0x20);
  uVar4 = *(undefined8 *)(puVar13 + -0x18);
  uVar41 = *(undefined8 *)(puVar13 + -0x30);
  uVar5 = *(undefined8 *)(puVar13 + -0x28);
  uVar42 = *(undefined8 *)(puVar13 + -0x40);
  uVar6 = *(undefined8 *)(puVar13 + -0x38);
  uVar43 = *(undefined8 *)(puVar13 + -0x50);
  uVar7 = *(undefined8 *)(puVar13 + -0x48);
  uVar2 = *(undefined8 *)(puVar13 + -0x60);
  uVar8 = *(undefined8 *)(puVar13 + -0x58);
  uVar3 = *(undefined8 *)(puVar13 + -0x70);
  uVar9 = *(undefined8 *)(puVar13 + -0x68);
  lVar29 = plVar19[0x59];
  uVar26 = lVar29 - 1;
  plVar19[0x59] = uVar26;
  if (uVar26 < 8) {
    uVar26 = plVar20[lVar29 + 2];
    if (plVar19[0x5a] == uVar26) {
      return;
    }
  }
  else {
    uVar26 = *(ulong *)(plVar19[0x57] + -8);
    plVar19[0x57] = plVar19[0x57] + -8;
    if (plVar19[0x5a] == uVar26) {
      return;
    }
  }
  *(undefined8 *)(puVar13 + -0x70) = uVar3;
  *(undefined8 *)(puVar13 + -0x68) = uVar9;
  *(undefined8 *)(puVar13 + -0x60) = uVar2;
  *(undefined8 *)(puVar13 + -0x58) = uVar8;
  *(undefined8 *)(puVar13 + -0x50) = uVar43;
  *(undefined8 *)(puVar13 + -0x48) = uVar7;
  *(undefined8 *)(puVar13 + -0x40) = uVar42;
  *(undefined8 *)(puVar13 + -0x38) = uVar6;
  *(undefined8 *)(puVar13 + -0x30) = uVar41;
  *(undefined8 *)(puVar13 + -0x28) = uVar5;
  *(undefined8 *)(puVar13 + -0x20) = uVar27;
  *(undefined8 *)(puVar13 + -0x18) = uVar4;
  lVar29 = *plVar20;
  lVar34 = plVar19[0x4c];
  lVar32 = lVar34 - lVar29;
  uVar37 = lVar32 >> 4;
  if (uVar37 < uVar26) {
    uVar38 = uVar26 - uVar37;
    lVar36 = plVar19[0x4d];
    if ((ulong)(lVar36 - lVar34 >> 4) < uVar38) {
      if (uVar26 >> 0x3c == 0) {
        uVar28 = lVar36 - lVar29 >> 3;
        if (uVar28 <= uVar26) {
          uVar28 = uVar26;
        }
        if (0x7fffffffffffffef < (ulong)(lVar36 - lVar29)) {
          uVar28 = 0xfffffffffffffff;
        }
        *(long **)(puVar13 + -0x78) = plVar20;
        if (uVar28 >> 0x3c == 0) {
          lVar15 = uVar28 << 4;
          __Znwm();
          lVar34 = lVar15 + lVar32;
          _bzero(lVar34,uVar38 * 0x10);
          lVar33 = lVar34 + uVar37 * -0x10;
          _memcpy(lVar33,lVar29,lVar32);
          *plVar20 = lVar33;
          plVar19[0x4c] = lVar34 + uVar38 * 0x10;
          plVar19[0x4d] = lVar15 + uVar28 * 0x10;
          *(long *)(puVar13 + -0x88) = lVar29;
          *(long *)(puVar13 + -0x80) = lVar36;
          *(long *)(puVar13 + -0x98) = lVar29;
          *(long *)(puVar13 + -0x90) = lVar29;
          func_0x00010988c1b8(puVar13 + -0x98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar12)();
    }
    _bzero(lVar34,uVar38 * 0x10);
    plVar19[0x4c] = lVar34 + uVar38 * 0x10;
  }
  else if (uVar26 < uVar37) {
    lVar29 = lVar29 + uVar26 * 0x10;
    while (lVar34 != lVar29) {
      lVar34 = lVar34 + -0x10;
      func_0x00010988c204(lVar34);
    }
    plVar19[0x4c] = lVar29;
  }
code_r0x00010988c138:
  plVar19[0x5a] = uVar26;
  return;
}



/* Entry: 10a358138; end: 10a35816f;  */

void FUN_10a358138(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  bool bVar12;
  code *pcVar13;
  undefined4 uVar14;
  long lVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  long *plVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long *plVar23;
  ulong uVar24;
  undefined4 *extraout_x8;
  undefined8 uVar25;
  ulong uVar26;
  long lVar27;
  long *plVar28;
  long *plVar29;
  undefined **unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar30;
  undefined8 unaff_x22;
  long lVar31;
  long lVar32;
  undefined8 unaff_x23;
  long *plVar33;
  long lVar34;
  undefined8 unaff_x24;
  ulong uVar35;
  undefined8 unaff_x25;
  ulong uVar36;
  undefined8 unaff_x26;
  undefined4 *puVar37;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  
  puVar1 = &stack0xfffffffffffffff0;
  ppuVar16 = param_1;
  func_0x000109898688();
  ppuVar17 = param_1;
  if (ppuVar16 == (undefined **)0x0) {
    ppuVar17 = (undefined **)&UNK_10f68f52e;
    unaff_x30 = FUN_10a358170;
    func_0x00010988bd28();
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    ppuVar16 = param_2;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  FUN_10a053854();
  if (ppuVar17 != (undefined **)0x0) {
    ppuVar16 = &PTR_DAT_110b178e0;
    param_3 = &PTR_DAT_110bd3290;
    param_4 = 0x10;
    ___dynamic_cast();
    if (ppuVar17 != (undefined **)0x0) {
      return;
    }
  }
  plVar19 = (long *)&UNK_10f685496;
  func_0x00010988bd28();
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x20;
  *(undefined ***)((long)register0x00000008 + -0x28) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x20) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x18) = FUN_10a3581b0;
  plVar18 = plVar19;
  (**(code **)(*plVar19 + 0x58))();
  if ((ulong)plVar18[0x59] < 8) {
    plVar18[plVar18[0x59] + 0x4e] = plVar18[0x5a];
    plVar18[0x59] = plVar18[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar18 + 0x4b);
  }
  plVar23 = plVar19;
  FUN_10a3580ac(plVar19,ppuVar16);
  FUN_10a358d5c(param_4);
  if (*(uint *)param_3 < 2) {
    plVar33 = (long *)0x0;
  }
  else {
    plVar33 = plVar19;
    FUN_10a358138(plVar19,param_3);
  }
  FUN_10a358d80((undefined1 *)((long)register0x00000008 + -0x1d0),plVar19,param_3 + 2);
  FUN_10a1cf048((undefined1 *)((long)register0x00000008 + -0x1e0),plVar19,param_3 + 4);
  FUN_10a358dd8((undefined1 *)((long)register0x00000008 + -0x1f0),plVar19,param_3 + 6);
  lVar32 = *(long *)((long)register0x00000008 + -0x1d0);
  *(undefined8 *)((long)register0x00000008 + -0x1f8) =
       *(undefined8 *)((long)register0x00000008 + -0x1c8);
  *(long *)((long)register0x00000008 + -0x200) = lVar32;
  *(long *)((long)register0x00000008 + -0x1a0) = lVar32;
  *(undefined8 *)((long)register0x00000008 + -0x198) =
       *(undefined8 *)((long)register0x00000008 + -0x1c8);
  *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x1c8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x208) =
       *(undefined8 *)((long)register0x00000008 + -0x1d8);
  *(undefined8 *)((long)register0x00000008 + -0x210) =
       *(undefined8 *)((long)register0x00000008 + -0x1e0);
  *(undefined8 *)((long)register0x00000008 + -0x1b0) =
       *(undefined8 *)((long)register0x00000008 + -0x1e0);
  *(undefined8 *)((long)register0x00000008 + -0x1a8) =
       *(undefined8 *)((long)register0x00000008 + -0x1d8);
  *(undefined8 *)((long)register0x00000008 + -0x1e0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0;
  lVar27 = *(long *)((long)register0x00000008 + -0x1f0);
  uVar25 = *(undefined8 *)((long)register0x00000008 + -0x1e8);
  *(long *)((long)register0x00000008 + -0x1c0) = lVar27;
  *(undefined8 *)((long)register0x00000008 + -0x1b8) = uVar25;
  *(undefined8 *)((long)register0x00000008 + -0x1f0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0;
  if (plVar33 == (long *)0x0) {
    *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
  }
  else {
    plVar19 = plVar33;
    FUN_10a329a58((undefined1 *)((long)register0x00000008 + -0xc0));
  }
  if (plVar23[0x1c] == plVar23[0x1d]) {
    FUN_10a35b718();
LAB_10a358b64:
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x10a358b68);
    (*pcVar13)();
  }
  puVar37 = extraout_x8;
  if (((*(byte *)(plVar23[10] + 0xe2a) & 1) == 0) && (FUN_10a1c5b90(), ((ulong)plVar19 & 1) == 0)) {
    if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      func_0x00010ae06f08(1,8,&UNK_10f64f076,&UNK_10f64f1db,499,&UNK_10f64f34f);
    }
    if (lVar27 == 0) {
      puVar20 = (undefined8 *)0x0;
      *(undefined8 *)((long)register0x00000008 + -0x218) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
      *(undefined8 *)((long)register0x00000008 + -200) = 0;
    }
    else {
      puVar20 = (undefined8 *)0x20;
      __Znwm();
      puVar20[1] = 0;
      puVar20[2] = 0;
      *puVar20 = &PTR_FUN_110bc6608;
      puVar21 = puVar20 + 3;
      *(undefined4 *)puVar21 = 0;
      *(undefined8 **)((long)register0x00000008 + -0x218) = puVar21;
      *(undefined8 **)((long)register0x00000008 + -0xd0) = puVar21;
      *(undefined8 **)((long)register0x00000008 + -200) = puVar20;
    }
    lVar32 = plVar23[10];
    plVar19 = (long *)plVar23[0x21];
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
    if (plVar19 == (long *)0x0) {
      plVar33 = (long *)0x0;
      lVar30 = 0;
    }
    else {
      lVar30 = 0;
      plVar33 = plVar19;
      do {
        lVar30 = lVar30 + 1;
        plVar33 = (long *)*plVar33;
      } while (plVar33 != (long *)0x0);
      FUN_10a187ce4((undefined1 *)((long)register0x00000008 + -0xe8),lVar30);
      plVar33 = *(long **)((long)register0x00000008 + -0xe0);
      plVar28 = plVar33;
      do {
        lVar30 = plVar19[2];
        plVar29 = plVar28 + 2;
        plVar28[1] = plVar19[3];
        *plVar28 = lVar30;
        plVar19 = (long *)*plVar19;
        plVar33 = plVar33 + 2;
        plVar28 = plVar29;
      } while (plVar19 != (long *)0x0);
      *(long **)((long)register0x00000008 + -0xe0) = plVar29;
      lVar30 = *(long *)((long)register0x00000008 + -0xe8);
    }
    FUN_10a3c3f80((undefined1 *)((long)register0x00000008 + -0xf8),*(undefined8 *)(lVar32 + 0x858),
                  lVar30,(long)plVar33 - lVar30 >> 4);
    lVar30 = lVar32;
    FUN_10a3e0428();
    *(long *)((long)register0x00000008 + -0x100) = lVar30;
    puVar21 = (undefined8 *)0x78;
    __Znwm();
    *(undefined4 *)(puVar21 + 4) = 0;
    puVar21[2] = 0;
    puVar21[3] = 0;
    puVar21[5] = 0;
    puVar21[6] = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1a0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x198) = 0;
    uVar40 = *(undefined8 *)((long)register0x00000008 + -0x210);
    uVar39 = *(undefined8 *)((long)register0x00000008 + -0x1f8);
    uVar38 = *(undefined8 *)((long)register0x00000008 + -0x200);
    puVar21[10] = *(undefined8 *)((long)register0x00000008 + -0x208);
    puVar21[9] = uVar40;
    puVar21[8] = uVar39;
    puVar21[7] = uVar38;
    *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1a8) = 0;
    puVar21[0xb] = lVar27;
    puVar21[0xc] = uVar25;
    *(undefined8 *)((long)register0x00000008 + -0x1c0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1b8) = 0;
    *puVar21 = &PTR_DAT_110bc6658;
    puVar21[1] = 0;
    puVar21[0xe] = 0;
    puVar21[0xd] = 0;
    FUN_10a3c0130(puVar21 + 0xd,(undefined1 *)((long)register0x00000008 + -0xf8));
    plVar19 = *(long **)(*(long *)((long)register0x00000008 + -0x100) + 0x150);
    *(undefined8 **)(*(long *)((long)register0x00000008 + -0x100) + 0x150) = puVar21;
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 8))();
      puVar21 = *(undefined8 **)(*(long *)((long)register0x00000008 + -0x100) + 0x150);
    }
    uVar14 = SUB84(plVar19,0);
    *(undefined8 **)((long)register0x00000008 + -0x108) = puVar21;
    *(undefined1 **)((long)register0x00000008 + -0x128) =
         (undefined1 *)((long)register0x00000008 + -0x108);
    *(long **)((long)register0x00000008 + -0x120) = plVar23;
    *(undefined1 **)((long)register0x00000008 + -0x118) =
         (undefined1 *)((long)register0x00000008 + -0x100);
    __ZSt19uncaught_exceptionsv();
    *(undefined4 *)((long)register0x00000008 + -0x110) = uVar14;
    (**(code **)(*plVar23 + 0x50))((undefined1 *)((long)register0x00000008 + -400),plVar23);
    *(undefined8 *)((long)register0x00000008 + -0x138) =
         *(undefined8 *)((long)register0x00000008 + -0x188);
    *(undefined8 *)((long)register0x00000008 + -0x140) =
         *(undefined8 *)((long)register0x00000008 + -400);
    if (*(long *)((long)register0x00000008 + -0x188) != 0) {
      plVar19 = (long *)(*(long *)((long)register0x00000008 + -0x188) + 8);
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar12) {
          *plVar19 = *plVar19 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      plVar19 = *(long **)((long)register0x00000008 + -0x188);
      if (plVar19 != (long *)0x0) {
        plVar33 = plVar19 + 1;
        do {
          lVar27 = *plVar33;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar12) {
            *plVar33 = lVar27 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (lVar27 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
        }
      }
    }
    uVar25 = *(undefined8 *)((long)register0x00000008 + -0x140);
    uVar38 = *(undefined8 *)((long)register0x00000008 + -0x138);
    *(undefined8 *)((long)register0x00000008 + -400) = uVar25;
    *(undefined8 *)((long)register0x00000008 + -0x188) = uVar38;
    *(undefined8 *)((long)register0x00000008 + -0x140) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x180) =
         *(undefined8 *)((long)register0x00000008 + -0x218);
    *(undefined8 **)((long)register0x00000008 + -0x178) = puVar20;
    if (puVar20 != (undefined8 *)0x0) {
      plVar19 = puVar20 + 1;
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar12) {
          *plVar19 = *plVar19 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    *(undefined8 *)((long)register0x00000008 + -0x170) =
         *(undefined8 *)((long)register0x00000008 + -0x108);
    *(long *)((long)register0x00000008 + -0x168) = lVar32;
    uVar39 = *(undefined8 *)((long)register0x00000008 + -0xc0);
    lVar27 = *(long *)((long)register0x00000008 + -0xb8);
    *(undefined8 *)((long)register0x00000008 + -0x160) =
         *(undefined8 *)((long)register0x00000008 + -0x100);
    *(undefined8 *)((long)register0x00000008 + -0x158) = uVar39;
    *(long *)((long)register0x00000008 + -0x150) = lVar27;
    if (lVar27 != 0) {
      plVar19 = (long *)(lVar27 + 0x10);
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar12) {
          *plVar19 = *plVar19 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    if ((*(byte *)(plVar23[10] + 0x1f8) & 1) == 0) goto LAB_10a358b64;
    puVar21 = *(undefined8 **)(plVar23[10] + 0x1b0);
    plVar19 = (long *)puVar21[2];
    *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
    if (plVar19 == (long *)0x0) {
      *(undefined8 *)((long)register0x00000008 + -0x188) = 0;
      *(undefined8 *)((long)register0x00000008 + -400) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x178) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x180) = 0;
      if (lVar27 != 0) {
        plVar19 = (long *)(lVar27 + 0x10);
        do {
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar12) {
            *plVar19 = *plVar19 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
      }
      puVar22 = (undefined8 *)0x100;
      __Znwm();
      puVar22[2] = 0;
      puVar22[1] = 0x200000006;
      *(undefined2 *)(puVar22 + 3) = 4;
      puVar22[5] = 0;
      puVar22[4] = 0;
      puVar22[7] = 0;
      puVar22[6] = 0;
      puVar22[9] = 0;
      puVar22[8] = 0;
      puVar22[0xb] = 0;
      puVar22[10] = 0;
      puVar22[0xd] = 0;
      puVar22[0xc] = 0;
      puVar22[0xf] = 0;
      puVar22[0xe] = 0;
      puVar22[0x10] = 0;
      puVar22[0x11] = puVar22 + 3;
      puVar22[0x12] = 0;
      *(undefined2 *)(puVar22 + 0x13) = 0;
      *puVar22 = &PTR_DAT_110bc59c0;
      puVar22[0x14] = uVar25;
      uVar25 = *(undefined8 *)((long)register0x00000008 + -0x218);
      puVar22[0x15] = uVar38;
      puVar22[0x16] = uVar25;
      puVar22[0x17] = puVar20;
      uVar25 = *(undefined8 *)((long)register0x00000008 + -0x160);
      uVar38 = *(undefined8 *)((long)register0x00000008 + -0x170);
      puVar22[0x19] = *(undefined8 *)((long)register0x00000008 + -0x168);
      puVar22[0x18] = uVar38;
      puVar22[0x1a] = uVar25;
      puVar22[0x1b] = uVar39;
      puVar22[0x1c] = lVar27;
      if (lVar27 != 0) {
        plVar19 = (long *)(lVar27 + 0x10);
        do {
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar12) {
            *plVar19 = *plVar19 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
      }
      *(undefined1 *)(puVar22 + 0x1e) = 1;
      puVar22[0x1f] = 0;
      *(undefined8 **)((long)register0x00000008 + -0xa8) = puVar22;
      if (*(long *)((long)register0x00000008 + -0xa0) != 0) {
        func_0x0001092b4274((undefined1 *)((long)register0x00000008 + -0xa0));
      }
      *(undefined8 **)((long)register0x00000008 + -0xa0) = puVar22;
      *(undefined8 **)((long)register0x00000008 + -0xb0) = puVar22 + 0x14;
      if (lVar27 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv(lVar27);
      }
      *(code **)((long)register0x00000008 + -0x98) = FUN_10a34d694;
    }
    else {
      *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
      (**(code **)(*plVar19 + 0x28))(plVar19,0,(undefined1 *)((long)register0x00000008 + -0x90));
      if (*(long *)((long)register0x00000008 + -0x90) != 0) {
        func_0x0001092af97c((undefined1 *)((long)register0x00000008 + -0x90));
        goto LAB_10a358b64;
      }
      *(undefined8 *)((long)register0x00000008 + -0x188) = 0;
      *(undefined8 *)((long)register0x00000008 + -400) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x178) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x180) = 0;
      if (lVar27 != 0) {
        plVar23 = (long *)(lVar27 + 0x10);
        do {
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar12) {
            *plVar23 = *plVar23 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
      }
      *(undefined4 **)((long)register0x00000008 + -0x200) = extraout_x8;
      puVar22 = (undefined8 *)0x108;
      __Znwm();
      puVar22[2] = 0;
      puVar22[1] = 0x200000006;
      *(undefined2 *)(puVar22 + 3) = 4;
      puVar22[5] = 0;
      puVar22[4] = 0;
      puVar22[7] = 0;
      puVar22[6] = 0;
      puVar22[9] = 0;
      puVar22[8] = 0;
      puVar22[0xb] = 0;
      puVar22[10] = 0;
      puVar22[0xd] = 0;
      puVar22[0xc] = 0;
      puVar22[0xf] = 0;
      puVar22[0xe] = 0;
      puVar22[0x10] = 0;
      puVar22[0x11] = puVar22 + 3;
      puVar22[0x12] = 0;
      *(undefined2 *)(puVar22 + 0x13) = 0;
      *puVar22 = &PTR_FUN_110bc5988;
      puVar22[0x14] = uVar25;
      uVar25 = *(undefined8 *)((long)register0x00000008 + -0x218);
      puVar22[0x15] = uVar38;
      puVar22[0x16] = uVar25;
      puVar22[0x17] = puVar20;
      uVar25 = *(undefined8 *)((long)register0x00000008 + -0x160);
      uVar38 = *(undefined8 *)((long)register0x00000008 + -0x170);
      puVar22[0x19] = *(undefined8 *)((long)register0x00000008 + -0x168);
      puVar22[0x18] = uVar38;
      puVar22[0x1a] = uVar25;
      puVar22[0x1b] = uVar39;
      puVar22[0x1c] = lVar27;
      if (lVar27 != 0) {
        plVar23 = (long *)(lVar27 + 0x10);
        do {
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar12) {
            *plVar23 = *plVar23 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
      }
      *(undefined1 *)(puVar22 + 0x1e) = 1;
      puVar22[0x1f] = 0;
      puVar22[0x20] = plVar19;
      plVar19 = *(long **)((long)register0x00000008 + -0xa8);
      if (plVar19 != (long *)0x0) {
        puVar2 = (ulong *)(plVar19 + 1);
        do {
          uVar24 = *puVar2;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar12) {
            *puVar2 = uVar24 - 4;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if ((uVar24 & 0x1fffffffc) == 4) {
          do {
            uVar24 = *puVar2;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar12) {
              *puVar2 = uVar24 - 1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (uVar24 - 1 == 0) {
            (**(code **)(*plVar19 + 8))();
          }
        }
      }
      *(undefined8 **)((long)register0x00000008 + -0xa8) = puVar22;
      if (*(long *)((long)register0x00000008 + -0xa0) != 0) {
        func_0x0001092b4274((undefined1 *)((long)register0x00000008 + -0xa0));
      }
      *(undefined8 **)((long)register0x00000008 + -0xa0) = puVar22;
      *(undefined8 **)((long)register0x00000008 + -0xb0) = puVar22 + 0x14;
      if (lVar27 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv(lVar27);
      }
      *(undefined8 *)((long)register0x00000008 + -0x98) = 0x10a34d664;
      __ZNSt13exception_ptrD1Ev((undefined1 *)((long)register0x00000008 + -0x90));
      puVar37 = *(undefined4 **)((long)register0x00000008 + -0x200);
    }
    lVar30 = *(long *)((long)register0x00000008 + -0xb0);
    lVar32 = lVar30;
    if (*(long *)(lVar30 + 0x58) != 0) {
      func_0x0001092b4274();
      lVar32 = *(long *)((long)register0x00000008 + -0xb0);
    }
    uVar25 = *(undefined8 *)((long)register0x00000008 + -0x98);
    *(undefined8 *)(lVar30 + 0x58) = *(undefined8 *)((long)register0x00000008 + -0xa0);
    *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x90) = uVar25;
    *(long *)((long)register0x00000008 + -0x88) = lVar32;
    *(undefined8 **)((long)register0x00000008 + -0x80) = puVar21;
    (**(code **)*puVar21)(puVar21,(undefined1 *)((long)register0x00000008 + -0x90));
    plVar19 = *(long **)((long)register0x00000008 + -0xa8);
    *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
    if (*(long *)((long)register0x00000008 + -0xa0) != 0) {
      func_0x0001092b4274((undefined1 *)((long)register0x00000008 + -0xa0));
      plVar23 = *(long **)((long)register0x00000008 + -0xa8);
      if (plVar23 != (long *)0x0) {
        puVar2 = (ulong *)(plVar23 + 1);
        do {
          uVar24 = *puVar2;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar12) {
            *puVar2 = uVar24 - 4;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if ((uVar24 & 0x1fffffffc) == 4) {
          do {
            uVar24 = *puVar2;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar12) {
              *puVar2 = uVar24 - 1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (uVar24 - 1 == 0) {
            (**(code **)(*plVar23 + 8))();
          }
        }
      }
    }
    if (plVar19 != (long *)0x0) {
      puVar2 = (ulong *)(plVar19 + 1);
      do {
        uVar24 = *puVar2;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar12) {
          *puVar2 = uVar24 - 4;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if ((uVar24 & 0x1fffffffc) == 4) {
        do {
          uVar24 = *puVar2;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar12) {
            *puVar2 = uVar24 - 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (uVar24 - 1 == 0) {
          (**(code **)(*plVar19 + 8))(plVar19);
        }
      }
    }
    if (lVar27 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv(lVar27);
    }
    plVar19 = *(long **)((long)register0x00000008 + -0x138);
    if (plVar19 != (long *)0x0) {
      plVar23 = plVar19 + 1;
      do {
        lVar27 = *plVar23;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar12) {
          *plVar23 = lVar27 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar27 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
      }
    }
    FUN_10a329b50((undefined1 *)((long)register0x00000008 + -0x128));
    if (*(long *)((long)register0x00000008 + -0xf0) != 0) {
      uVar25 = *(undefined8 *)((long)register0x00000008 + -0xf8);
      *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
      FUN_10a3c017c(uVar25);
    }
    if (*(long *)((long)register0x00000008 + -0xe8) != 0) {
      *(long *)((long)register0x00000008 + -0xe0) = *(long *)((long)register0x00000008 + -0xe8);
      __ZdlPv();
    }
    plVar19 = *(long **)((long)register0x00000008 + -200);
    if (plVar19 != (long *)0x0) {
      plVar23 = plVar19 + 1;
      do {
        lVar27 = *plVar23;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar12) {
          *plVar23 = lVar27 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar27 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        goto LAB_10a35835c;
      }
    }
  }
  else {
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f64f076,&UNK_10f64f1db,0x264,&UNK_10f64f396);
    }
    FUN_10a329c24((undefined1 *)((long)register0x00000008 + -0xb0),plVar23,plVar33);
    if (lVar32 != 0) {
      FUN_10a329ce8(lVar32,(undefined1 *)((long)register0x00000008 + -0xb0));
    }
    plVar19 = *(long **)((long)register0x00000008 + -0xa8);
    if (plVar19 != (long *)0x0) {
LAB_10a35835c:
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
    }
  }
  if (*(long *)((long)register0x00000008 + -0xb8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar19 = *(long **)((long)register0x00000008 + -0x1b8);
  if (plVar19 != (long *)0x0) {
    plVar23 = plVar19 + 1;
    do {
      lVar27 = *plVar23;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar12) {
        *plVar23 = lVar27 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
    }
  }
  plVar19 = *(long **)((long)register0x00000008 + -0x1a8);
  if (plVar19 != (long *)0x0) {
    plVar23 = plVar19 + 1;
    do {
      lVar27 = *plVar23;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar12) {
        *plVar23 = lVar27 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
    }
  }
  plVar19 = *(long **)((long)register0x00000008 + -0x198);
  if (plVar19 != (long *)0x0) {
    plVar23 = plVar19 + 1;
    do {
      lVar27 = *plVar23;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar12) {
        *plVar23 = lVar27 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
    }
  }
  plVar19 = *(long **)((long)register0x00000008 + -0x1e8);
  if (plVar19 != (long *)0x0) {
    plVar23 = plVar19 + 1;
    do {
      lVar27 = *plVar23;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar12) {
        *plVar23 = lVar27 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
    }
  }
  plVar19 = *(long **)((long)register0x00000008 + -0x1d8);
  if (plVar19 != (long *)0x0) {
    plVar23 = plVar19 + 1;
    do {
      lVar27 = *plVar23;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar12) {
        *plVar23 = lVar27 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
    }
  }
  plVar19 = *(long **)((long)register0x00000008 + -0x1c8);
  if (plVar19 != (long *)0x0) {
    plVar23 = plVar19 + 1;
    do {
      lVar27 = *plVar23;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar12) {
        *plVar23 = lVar27 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
    }
  }
  *puVar37 = 0;
  plVar19 = plVar18 + 0x4b;
  uVar25 = *(undefined8 *)((long)register0x00000008 + -0x20);
  uVar5 = *(undefined8 *)((long)register0x00000008 + -0x18);
  uVar38 = *(undefined8 *)((long)register0x00000008 + -0x30);
  uVar6 = *(undefined8 *)((long)register0x00000008 + -0x28);
  uVar39 = *(undefined8 *)((long)register0x00000008 + -0x40);
  uVar7 = *(undefined8 *)((long)register0x00000008 + -0x38);
  uVar40 = *(undefined8 *)((long)register0x00000008 + -0x50);
  uVar8 = *(undefined8 *)((long)register0x00000008 + -0x48);
  uVar3 = *(undefined8 *)((long)register0x00000008 + -0x60);
  uVar9 = *(undefined8 *)((long)register0x00000008 + -0x58);
  uVar4 = *(undefined8 *)((long)register0x00000008 + -0x70);
  uVar10 = *(undefined8 *)((long)register0x00000008 + -0x68);
  lVar27 = plVar18[0x59];
  uVar24 = lVar27 - 1;
  plVar18[0x59] = uVar24;
  if (uVar24 < 8) {
    uVar24 = plVar19[lVar27 + 2];
    if (plVar18[0x5a] == uVar24) {
      return;
    }
  }
  else {
    uVar24 = *(ulong *)(plVar18[0x57] + -8);
    plVar18[0x57] = plVar18[0x57] + -8;
    if (plVar18[0x5a] == uVar24) {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x70) = uVar4;
  *(undefined8 *)((long)register0x00000008 + -0x68) = uVar10;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar3;
  *(undefined8 *)((long)register0x00000008 + -0x58) = uVar9;
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar40;
  *(undefined8 *)((long)register0x00000008 + -0x48) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar39;
  *(undefined8 *)((long)register0x00000008 + -0x38) = uVar7;
  *(undefined8 *)((long)register0x00000008 + -0x30) = uVar38;
  *(undefined8 *)((long)register0x00000008 + -0x28) = uVar6;
  *(undefined8 *)((long)register0x00000008 + -0x20) = uVar25;
  *(undefined8 *)((long)register0x00000008 + -0x18) = uVar5;
  lVar27 = *plVar19;
  lVar32 = plVar18[0x4c];
  lVar30 = lVar32 - lVar27;
  uVar35 = lVar30 >> 4;
  if (uVar35 < uVar24) {
    uVar36 = uVar24 - uVar35;
    lVar34 = plVar18[0x4d];
    if ((ulong)(lVar34 - lVar32 >> 4) < uVar36) {
      if (uVar24 >> 0x3c == 0) {
        uVar26 = lVar34 - lVar27 >> 3;
        if (uVar26 <= uVar24) {
          uVar26 = uVar24;
        }
        if (0x7fffffffffffffef < (ulong)(lVar34 - lVar27)) {
          uVar26 = 0xfffffffffffffff;
        }
        *(long **)((long)register0x00000008 + -0x78) = plVar19;
        if (uVar26 >> 0x3c == 0) {
          lVar15 = uVar26 << 4;
          __Znwm();
          lVar32 = lVar15 + lVar30;
          _bzero(lVar32,uVar36 * 0x10);
          lVar31 = lVar32 + uVar35 * -0x10;
          _memcpy(lVar31,lVar27,lVar30);
          *plVar19 = lVar31;
          plVar18[0x4c] = lVar32 + uVar36 * 0x10;
          plVar18[0x4d] = lVar15 + uVar26 * 0x10;
          *(long *)((long)register0x00000008 + -0x88) = lVar27;
          *(long *)((long)register0x00000008 + -0x80) = lVar34;
          *(long *)((long)register0x00000008 + -0x98) = lVar27;
          *(long *)((long)register0x00000008 + -0x90) = lVar27;
          func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x98));
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar13)();
    }
    _bzero(lVar32,uVar36 * 0x10);
    plVar18[0x4c] = lVar32 + uVar36 * 0x10;
  }
  else if (uVar24 < uVar35) {
    lVar27 = lVar27 + uVar24 * 0x10;
    while (lVar32 != lVar27) {
      lVar32 = lVar32 + -0x10;
      func_0x00010988c204(lVar32);
    }
    plVar18[0x4c] = lVar27;
  }
code_r0x00010988c138:
  plVar18[0x5a] = uVar24;
  return;
}



/* Entry: 10a358170; end: 10a3581af;  */

void FUN_10a358170(long param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  undefined4 *extraout_x8;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  code *pcVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  ulong uVar27;
  long *plVar28;
  long lStack_1f0;
  long *plStack_1e8;
  undefined8 uStack_1e0;
  long *plStack_1d8;
  long lStack_1d0;
  long *plStack_1c8;
  long lStack_1c0;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long lStack_1a0;
  long *plStack_198;
  long lStack_190;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined8 *puStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_140;
  long *plStack_138;
  undefined8 **ppuStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined4 uStack_110;
  undefined8 *puStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  code *pcStack_98;
  code *pcStack_90;
  code *pcStack_88;
  undefined8 *puStack_80;
  long *plStack_78;
  
  FUN_10a053854();
  if (param_1 != 0) {
    param_2 = &PTR_DAT_110b178e0;
    param_3 = &PTR_DAT_110bd3290;
    param_4 = 0x10;
    ___dynamic_cast();
    if (param_1 != 0) {
      return;
    }
  }
  plVar9 = (long *)&UNK_10f685496;
  func_0x00010988bd28();
  plVar8 = plVar9;
  (**(code **)(*plVar9 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar26 = plVar9;
  FUN_10a3580ac(plVar9,param_2);
  FUN_10a358d5c(param_4);
  if (*(uint *)param_3 < 2) {
    plVar22 = (long *)0x0;
  }
  else {
    plVar22 = plVar9;
    FUN_10a358138(plVar9,param_3);
  }
  FUN_10a358d80(&lStack_1d0,plVar9,param_3 + 2);
  FUN_10a1cf048(&uStack_1e0,plVar9,param_3 + 4);
  FUN_10a358dd8(&lStack_1f0,plVar9,param_3 + 6);
  plVar28 = plStack_1c8;
  lVar24 = lStack_1d0;
  plVar12 = plStack_1d8;
  uVar4 = uStack_1e0;
  plVar11 = plStack_1e8;
  lVar16 = lStack_1f0;
  lStack_1a0 = lStack_1d0;
  plStack_198 = plStack_1c8;
  lStack_1d0 = 0;
  plStack_1c8 = (long *)0x0;
  uStack_1b0 = uStack_1e0;
  plStack_1a8 = plStack_1d8;
  uStack_1e0 = 0;
  plStack_1d8 = (long *)0x0;
  lStack_1c0 = lStack_1f0;
  plStack_1b8 = plStack_1e8;
  lStack_1f0 = 0;
  plStack_1e8 = (long *)0x0;
  if (plVar22 == (long *)0x0) {
    lStack_c0 = 0;
    lStack_b8 = 0;
  }
  else {
    plVar9 = plVar22;
    FUN_10a329a58(&lStack_c0);
  }
  if (plVar26[0x1c] == plVar26[0x1d]) {
    FUN_10a35b718();
LAB_10a358b64:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a358b68);
    (*pcVar5)();
  }
  if (((*(byte *)(plVar26[10] + 0xe2a) & 1) == 0) && (FUN_10a1c5b90(), ((ulong)plVar9 & 1) == 0)) {
    if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      func_0x00010ae06f08(1,8,&UNK_10f64f076,&UNK_10f64f1db,499,&UNK_10f64f34f);
    }
    if (lVar16 == 0) {
      plStack_d0 = (long *)0x0;
      plStack_c8 = (long *)0x0;
    }
    else {
      plVar9 = (long *)0x20;
      __Znwm();
      plVar9[1] = 0;
      plVar9[2] = 0;
      *plVar9 = (long)&PTR_FUN_110bc6608;
      plStack_d0 = plVar9 + 3;
      *(undefined4 *)plStack_d0 = 0;
      plStack_c8 = plVar9;
    }
    plVar22 = plStack_c8;
    plVar9 = plStack_d0;
    lVar23 = plVar26[10];
    plVar19 = (long *)plVar26[0x21];
    plStack_e0 = (long *)0x0;
    uStack_d8 = 0;
    plStack_e8 = (long *)0x0;
    if (plVar19 == (long *)0x0) {
      plVar14 = (long *)0x0;
      plVar18 = plStack_e0;
    }
    else {
      lVar7 = 0;
      plVar14 = plVar19;
      do {
        lVar7 = lVar7 + 1;
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
      FUN_10a187ce4(&plStack_e8,lVar7);
      plVar17 = plStack_e0;
      do {
        lVar7 = plVar19[2];
        plVar18 = plVar17 + 2;
        plVar17[1] = plVar19[3];
        *plVar17 = lVar7;
        plVar19 = (long *)*plVar19;
        plStack_e0 = plStack_e0 + 2;
        plVar14 = plStack_e0;
        plVar17 = plVar18;
      } while (plVar19 != (long *)0x0);
    }
    plStack_e0 = plVar18;
    FUN_10a3c3f80(&uStack_f8,*(undefined8 *)(lVar23 + 0x858),plStack_e8,
                  (long)plVar14 - (long)plStack_e8 >> 4);
    lVar7 = lVar23;
    FUN_10a3e0428();
    puVar10 = (undefined8 *)0x78;
    lStack_100 = lVar7;
    __Znwm();
    *(undefined4 *)(puVar10 + 4) = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[5] = 0;
    puVar10[6] = 0;
    lStack_1a0 = 0;
    plStack_198 = (long *)0x0;
    puVar10[10] = plVar12;
    puVar10[9] = uVar4;
    puVar10[8] = plVar28;
    puVar10[7] = lVar24;
    uStack_1b0 = 0;
    plStack_1a8 = (long *)0x0;
    puVar10[0xb] = lVar16;
    puVar10[0xc] = plVar11;
    lStack_1c0 = 0;
    plStack_1b8 = (long *)0x0;
    *puVar10 = &PTR_DAT_110bc6658;
    puVar10[1] = 0;
    puVar10[0xe] = 0;
    puVar10[0xd] = 0;
    FUN_10a3c0130(puVar10 + 0xd,&uStack_f8);
    plVar11 = *(long **)(lStack_100 + 0x150);
    *(undefined8 **)(lStack_100 + 0x150) = puVar10;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 8))();
      puVar10 = *(undefined8 **)(lStack_100 + 0x150);
    }
    uVar6 = SUB84(plVar11,0);
    ppuStack_128 = &puStack_108;
    plStack_118 = &lStack_100;
    plStack_120 = plVar26;
    puStack_108 = puVar10;
    __ZSt19uncaught_exceptionsv();
    uStack_110 = uVar6;
    (**(code **)(*plVar26 + 0x50))(&lStack_190,plVar26);
    plStack_138 = plStack_188;
    lStack_140 = lStack_190;
    if (plStack_188 != (long *)0x0) {
      plVar11 = plStack_188 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = *plVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (plStack_188 != (long *)0x0) {
        plVar11 = plStack_188 + 1;
        do {
          lVar16 = *plVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = lVar16 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_188 + 0x10))(plStack_188);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_188);
        }
      }
    }
    lVar7 = lStack_b8;
    lVar24 = lStack_c0;
    plVar11 = plStack_138;
    lVar16 = lStack_140;
    lStack_190 = lStack_140;
    plStack_188 = plStack_138;
    lStack_140 = 0;
    plStack_138 = (long *)0x0;
    plStack_180 = plVar9;
    if (plVar22 != (long *)0x0) {
      plVar12 = plVar22 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puStack_170 = puStack_108;
    lStack_160 = lStack_100;
    lStack_158 = lStack_c0;
    lStack_150 = lStack_b8;
    if (lStack_b8 != 0) {
      plVar12 = (long *)(lStack_b8 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plStack_178 = plVar22;
    lStack_168 = lVar23;
    if ((*(byte *)(plVar26[10] + 0x1f8) & 1) == 0) goto LAB_10a358b64;
    puVar10 = *(undefined8 **)(plVar26[10] + 0x1b0);
    plVar26 = (long *)puVar10[2];
    plStack_a8 = (long *)0x0;
    plStack_a0 = (long *)0x0;
    if (plVar26 == (long *)0x0) {
      plStack_188 = (long *)0x0;
      lStack_190 = 0;
      plStack_178 = (long *)0x0;
      plStack_180 = (long *)0x0;
      if (lStack_b8 != 0) {
        plVar26 = (long *)(lStack_b8 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar3) {
            *plVar26 = *plVar26 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar26 = (long *)0x100;
      __Znwm();
      plVar26[2] = 0;
      plVar26[1] = 0x200000006;
      *(undefined2 *)(plVar26 + 3) = 4;
      plVar26[5] = 0;
      plVar26[4] = 0;
      plVar26[7] = 0;
      plVar26[6] = 0;
      plVar26[9] = 0;
      plVar26[8] = 0;
      plVar26[0xb] = 0;
      plVar26[10] = 0;
      plVar26[0xd] = 0;
      plVar26[0xc] = 0;
      plVar26[0xf] = 0;
      plVar26[0xe] = 0;
      plVar26[0x10] = 0;
      plVar26[0x11] = (long)(plVar26 + 3);
      plVar26[0x12] = 0;
      *(undefined2 *)(plVar26 + 0x13) = 0;
      *plVar26 = (long)&PTR_DAT_110bc59c0;
      plStack_b0 = plVar26 + 0x14;
      *plStack_b0 = lVar16;
      plVar26[0x15] = (long)plVar11;
      plVar26[0x16] = (long)plVar9;
      plVar26[0x17] = (long)plVar22;
      plVar26[0x19] = lStack_168;
      plVar26[0x18] = (long)puStack_170;
      plVar26[0x1a] = lStack_160;
      plVar26[0x1b] = lVar24;
      plVar26[0x1c] = lVar7;
      if (lVar7 != 0) {
        plVar9 = (long *)(lVar7 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *(undefined1 *)(plVar26 + 0x1e) = 1;
      plVar26[0x1f] = 0;
      plStack_a8 = plVar26;
      if (plStack_a0 != (long *)0x0) {
        func_0x0001092b4274(&plStack_a0);
      }
      plStack_a0 = plVar26;
      if (lVar7 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv(lVar7);
      }
      pcStack_98 = FUN_10a34d694;
    }
    else {
      pcStack_90 = (code *)0x0;
      (**(code **)(*plVar26 + 0x28))(plVar26,0,&pcStack_90);
      if (pcStack_90 != (code *)0x0) {
        func_0x0001092af97c(&pcStack_90);
        goto LAB_10a358b64;
      }
      plStack_188 = (long *)0x0;
      lStack_190 = 0;
      plStack_178 = (long *)0x0;
      plStack_180 = (long *)0x0;
      if (lVar7 != 0) {
        plVar12 = (long *)(lVar7 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = *plVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar12 = (long *)0x108;
      __Znwm();
      plVar12[2] = 0;
      plVar12[1] = 0x200000006;
      *(undefined2 *)(plVar12 + 3) = 4;
      plVar12[5] = 0;
      plVar12[4] = 0;
      plVar12[7] = 0;
      plVar12[6] = 0;
      plVar12[9] = 0;
      plVar12[8] = 0;
      plVar12[0xb] = 0;
      plVar12[10] = 0;
      plVar12[0xd] = 0;
      plVar12[0xc] = 0;
      plVar12[0xf] = 0;
      plVar12[0xe] = 0;
      plVar12[0x10] = 0;
      plVar12[0x11] = (long)(plVar12 + 3);
      plVar12[0x12] = 0;
      *(undefined2 *)(plVar12 + 0x13) = 0;
      *plVar12 = (long)&PTR_FUN_110bc5988;
      plVar28 = plVar12 + 0x14;
      *plVar28 = lVar16;
      plVar12[0x15] = (long)plVar11;
      plVar12[0x16] = (long)plVar9;
      plVar12[0x17] = (long)plVar22;
      plVar12[0x19] = lStack_168;
      plVar12[0x18] = (long)puStack_170;
      plVar12[0x1a] = lStack_160;
      plVar12[0x1b] = lVar24;
      plVar12[0x1c] = lVar7;
      if (lVar7 != 0) {
        plVar9 = (long *)(lVar7 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *(undefined1 *)(plVar12 + 0x1e) = 1;
      plVar12[0x1f] = 0;
      plVar12[0x20] = (long)plVar26;
      if (plStack_a8 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_a8 + 1);
        do {
          uVar13 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar13 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          do {
            uVar13 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar13 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plStack_a8 + 8))();
          }
        }
      }
      plStack_a8 = plVar12;
      if (plStack_a0 != (long *)0x0) {
        func_0x0001092b4274(&plStack_a0);
      }
      plStack_b0 = plVar28;
      plStack_a0 = plVar12;
      if (lVar7 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv(lVar7);
      }
      pcStack_98 = (code *)0x10a34d664;
      __ZNSt13exception_ptrD1Ev(&pcStack_90);
    }
    plVar9 = plStack_b0;
    if (plStack_b0[0xb] != 0) {
      func_0x0001092b4274();
    }
    plVar9[0xb] = (long)plStack_a0;
    plStack_a0 = (long *)0x0;
    pcStack_90 = pcStack_98;
    pcStack_88 = (code *)plStack_b0;
    puStack_80 = puVar10;
    (**(code **)*puVar10)(puVar10,&pcStack_90);
    plVar9 = plStack_a8;
    plStack_a8 = (long *)0x0;
    if ((plStack_a0 != (long *)0x0) && (func_0x0001092b4274(&plStack_a0), plStack_a8 != (long *)0x0)
       ) {
      puVar1 = (ulong *)(plStack_a8 + 1);
      do {
        uVar13 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar13 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar13 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*plStack_a8 + 8))();
        }
      }
    }
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar13 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar13 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar13 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    if (lVar7 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv(lVar7);
    }
    plVar9 = plStack_138;
    if (plStack_138 != (long *)0x0) {
      plVar26 = plStack_138 + 1;
      do {
        lVar16 = *plVar26;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar3) {
          *plVar26 = lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_138 + 0x10))(plStack_138);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    FUN_10a329b50(&ppuStack_128);
    uVar4 = uStack_f8;
    if (lStack_f0 != 0) {
      uStack_f8 = 0;
      lStack_f0 = 0;
      FUN_10a3c017c(uVar4);
    }
    if (plStack_e8 != (long *)0x0) {
      plStack_e0 = plStack_e8;
      __ZdlPv();
    }
    plVar9 = plStack_c8;
    if (plStack_c8 != (long *)0x0) {
      plVar26 = plStack_c8 + 1;
      do {
        lVar16 = *plVar26;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar3) {
          *plVar26 = lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
        goto LAB_10a35835c;
      }
    }
  }
  else {
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f64f076,&UNK_10f64f1db,0x264,&UNK_10f64f396);
    }
    FUN_10a329c24(&plStack_b0,plVar26,plVar22);
    if (lVar24 != 0) {
      FUN_10a329ce8(lVar24,&plStack_b0);
    }
    plVar9 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
LAB_10a35835c:
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  if (lStack_b8 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar9 = plStack_1b8;
  if (plStack_1b8 != (long *)0x0) {
    plVar26 = plStack_1b8 + 1;
    do {
      lVar16 = *plVar26;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar3) {
        *plVar26 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = plStack_1a8;
  if (plStack_1a8 != (long *)0x0) {
    plVar26 = plStack_1a8 + 1;
    do {
      lVar16 = *plVar26;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar3) {
        *plVar26 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = plStack_198;
  if (plStack_198 != (long *)0x0) {
    plVar26 = plStack_198 + 1;
    do {
      lVar16 = *plVar26;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar3) {
        *plVar26 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_198 + 0x10))(plStack_198);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = plStack_1e8;
  if (plStack_1e8 != (long *)0x0) {
    plVar26 = plStack_1e8 + 1;
    do {
      lVar16 = *plVar26;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar3) {
        *plVar26 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = plStack_1d8;
  if (plStack_1d8 != (long *)0x0) {
    plVar26 = plStack_1d8 + 1;
    do {
      lVar16 = *plVar26;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar3) {
        *plVar26 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = plStack_1c8;
  if (plStack_1c8 != (long *)0x0) {
    plVar26 = plStack_1c8 + 1;
    do {
      lVar16 = *plVar26;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar3) {
        *plVar26 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  *extraout_x8 = 0;
  plVar9 = plVar8 + 0x4b;
  lVar16 = plVar8[0x59];
  uVar13 = lVar16 - 1;
  plVar8[0x59] = uVar13;
  if (uVar13 < 8) {
    uVar13 = plVar9[lVar16 + 2];
    if (plVar8[0x5a] == uVar13) {
      return;
    }
  }
  else {
    uVar13 = *(ulong *)(plVar8[0x57] + -8);
    plVar8[0x57] = plVar8[0x57] + -8;
    if (plVar8[0x5a] == uVar13) {
      return;
    }
  }
  pcVar5 = (code *)*plVar9;
  pcVar21 = (code *)plVar8[0x4c];
  lVar16 = (long)pcVar21 - (long)pcVar5;
  uVar25 = lVar16 >> 4;
  if (uVar25 < uVar13) {
    uVar27 = uVar13 - uVar25;
    lVar24 = plVar8[0x4d];
    if ((ulong)(lVar24 - (long)pcVar21 >> 4) < uVar27) {
      if (uVar13 >> 0x3c == 0) {
        uVar15 = lVar24 - (long)pcVar5 >> 3;
        if (uVar15 <= uVar13) {
          uVar15 = uVar13;
        }
        if (0x7fffffffffffffef < (ulong)(lVar24 - (long)pcVar5)) {
          uVar15 = 0xfffffffffffffff;
        }
        plStack_78 = plVar9;
        if (uVar15 >> 0x3c == 0) {
          lVar7 = uVar15 << 4;
          __Znwm();
          lVar23 = lVar7 + lVar16;
          _bzero(lVar23,uVar27 * 0x10);
          lVar20 = lVar23 + uVar25 * -0x10;
          _memcpy(lVar20,pcVar5,lVar16);
          *plVar9 = lVar20;
          plVar8[0x4c] = lVar23 + uVar27 * 0x10;
          plVar8[0x4d] = lVar7 + uVar15 * 0x10;
          pcStack_98 = pcVar5;
          pcStack_90 = pcVar5;
          pcStack_88 = pcVar5;
          puStack_80 = (undefined8 *)lVar24;
          func_0x00010988c1b8(&pcStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar5)();
    }
    _bzero(pcVar21,uVar27 * 0x10);
    plVar8[0x4c] = (long)(pcVar21 + uVar27 * 0x10);
  }
  else if (uVar13 < uVar25) {
    while (pcVar21 != pcVar5 + uVar13 * 0x10) {
      pcVar21 = pcVar21 + -0x10;
      func_0x00010988c204(pcVar21);
    }
    plVar8[0x4c] = (long)(pcVar5 + uVar13 * 0x10);
  }
code_r0x00010988c138:
  plVar8[0x5a] = uVar13;
  return;
}



/* Entry: 10a3581b0; end: 10a358d5b;  */

void FUN_10a3581b0(undefined4 *param_1,long *param_2,undefined8 param_3,uint *param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  code *pcVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  code *pcVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  ulong uVar27;
  long *plVar28;
  long lStack_1e0;
  long *plStack_1d8;
  undefined8 uStack_1d0;
  long *plStack_1c8;
  long lStack_1c0;
  long *plStack_1b8;
  long lStack_1b0;
  long *plStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  long lStack_190;
  long *plStack_188;
  long lStack_180;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  undefined8 *puStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_130;
  long *plStack_128;
  undefined8 **ppuStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined4 uStack_100;
  undefined8 *puStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  code *pcStack_88;
  code *pcStack_80;
  code *pcStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  
  plVar9 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  plVar26 = param_2;
  FUN_10a3580ac(param_2,param_3);
  FUN_10a358d5c(param_5);
  if (*param_4 < 2) {
    plVar22 = (long *)0x0;
  }
  else {
    plVar22 = param_2;
    FUN_10a358138(param_2,param_4);
  }
  FUN_10a358d80(&lStack_1c0,param_2,param_4 + 4);
  FUN_10a1cf048(&uStack_1d0,param_2,param_4 + 8);
  FUN_10a358dd8(&lStack_1e0,param_2,param_4 + 0xc);
  plVar28 = plStack_1b8;
  lVar24 = lStack_1c0;
  plVar12 = plStack_1c8;
  uVar4 = uStack_1d0;
  plVar11 = plStack_1d8;
  lVar16 = lStack_1e0;
  lStack_190 = lStack_1c0;
  plStack_188 = plStack_1b8;
  lStack_1c0 = 0;
  plStack_1b8 = (long *)0x0;
  uStack_1a0 = uStack_1d0;
  plStack_198 = plStack_1c8;
  uStack_1d0 = 0;
  plStack_1c8 = (long *)0x0;
  lStack_1b0 = lStack_1e0;
  plStack_1a8 = plStack_1d8;
  lStack_1e0 = 0;
  plStack_1d8 = (long *)0x0;
  if (plVar22 == (long *)0x0) {
    lStack_b0 = 0;
    lStack_a8 = 0;
  }
  else {
    param_2 = plVar22;
    FUN_10a329a58(&lStack_b0);
  }
  if (plVar26[0x1c] == plVar26[0x1d]) {
    FUN_10a35b718();
LAB_10a358b64:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a358b68);
    (*pcVar6)();
  }
  if (((*(byte *)(plVar26[10] + 0xe2a) & 1) == 0) && (FUN_10a1c5b90(), ((ulong)param_2 & 1) == 0)) {
    if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      func_0x00010ae06f08(1,8,&UNK_10f64f076,&UNK_10f64f1db,499,&UNK_10f64f34f);
    }
    if (lVar16 == 0) {
      plStack_c0 = (long *)0x0;
      plStack_b8 = (long *)0x0;
    }
    else {
      plVar22 = (long *)0x20;
      __Znwm();
      plVar22[1] = 0;
      plVar22[2] = 0;
      *plVar22 = (long)&PTR_FUN_110bc6608;
      plStack_c0 = plVar22 + 3;
      *(undefined4 *)plStack_c0 = 0;
      plStack_b8 = plVar22;
    }
    plVar5 = plStack_b8;
    plVar22 = plStack_c0;
    lVar23 = plVar26[10];
    plVar19 = (long *)plVar26[0x21];
    plStack_d0 = (long *)0x0;
    uStack_c8 = 0;
    plStack_d8 = (long *)0x0;
    if (plVar19 == (long *)0x0) {
      plVar14 = (long *)0x0;
      plVar18 = plStack_d0;
    }
    else {
      lVar8 = 0;
      plVar14 = plVar19;
      do {
        lVar8 = lVar8 + 1;
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
      FUN_10a187ce4(&plStack_d8,lVar8);
      plVar17 = plStack_d0;
      do {
        lVar8 = plVar19[2];
        plVar18 = plVar17 + 2;
        plVar17[1] = plVar19[3];
        *plVar17 = lVar8;
        plVar19 = (long *)*plVar19;
        plStack_d0 = plStack_d0 + 2;
        plVar14 = plStack_d0;
        plVar17 = plVar18;
      } while (plVar19 != (long *)0x0);
    }
    plStack_d0 = plVar18;
    FUN_10a3c3f80(&uStack_e8,*(undefined8 *)(lVar23 + 0x858),plStack_d8,
                  (long)plVar14 - (long)plStack_d8 >> 4);
    lVar8 = lVar23;
    FUN_10a3e0428();
    puVar10 = (undefined8 *)0x78;
    lStack_f0 = lVar8;
    __Znwm();
    *(undefined4 *)(puVar10 + 4) = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[5] = 0;
    puVar10[6] = 0;
    lStack_190 = 0;
    plStack_188 = (long *)0x0;
    puVar10[10] = plVar12;
    puVar10[9] = uVar4;
    puVar10[8] = plVar28;
    puVar10[7] = lVar24;
    uStack_1a0 = 0;
    plStack_198 = (long *)0x0;
    puVar10[0xb] = lVar16;
    puVar10[0xc] = plVar11;
    lStack_1b0 = 0;
    plStack_1a8 = (long *)0x0;
    *puVar10 = &PTR_DAT_110bc6658;
    puVar10[1] = 0;
    puVar10[0xe] = 0;
    puVar10[0xd] = 0;
    FUN_10a3c0130(puVar10 + 0xd,&uStack_e8);
    plVar11 = *(long **)(lStack_f0 + 0x150);
    *(undefined8 **)(lStack_f0 + 0x150) = puVar10;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 8))();
      puVar10 = *(undefined8 **)(lStack_f0 + 0x150);
    }
    uVar7 = SUB84(plVar11,0);
    ppuStack_118 = &puStack_f8;
    plStack_108 = &lStack_f0;
    plStack_110 = plVar26;
    puStack_f8 = puVar10;
    __ZSt19uncaught_exceptionsv();
    uStack_100 = uVar7;
    (**(code **)(*plVar26 + 0x50))(&lStack_180,plVar26);
    plStack_128 = plStack_178;
    lStack_130 = lStack_180;
    if (plStack_178 != (long *)0x0) {
      plVar11 = plStack_178 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = *plVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (plStack_178 != (long *)0x0) {
        plVar11 = plStack_178 + 1;
        do {
          lVar16 = *plVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = lVar16 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_178 + 0x10))(plStack_178);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_178);
        }
      }
    }
    lVar8 = lStack_a8;
    lVar24 = lStack_b0;
    plVar11 = plStack_128;
    lVar16 = lStack_130;
    lStack_180 = lStack_130;
    plStack_178 = plStack_128;
    lStack_130 = 0;
    plStack_128 = (long *)0x0;
    plStack_170 = plVar22;
    if (plVar5 != (long *)0x0) {
      plVar12 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puStack_160 = puStack_f8;
    lStack_150 = lStack_f0;
    lStack_148 = lStack_b0;
    lStack_140 = lStack_a8;
    if (lStack_a8 != 0) {
      plVar12 = (long *)(lStack_a8 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plStack_168 = plVar5;
    lStack_158 = lVar23;
    if ((*(byte *)(plVar26[10] + 0x1f8) & 1) == 0) goto LAB_10a358b64;
    puVar10 = *(undefined8 **)(plVar26[10] + 0x1b0);
    plVar26 = (long *)puVar10[2];
    plStack_98 = (long *)0x0;
    plStack_90 = (long *)0x0;
    if (plVar26 == (long *)0x0) {
      plStack_178 = (long *)0x0;
      lStack_180 = 0;
      plStack_168 = (long *)0x0;
      plStack_170 = (long *)0x0;
      if (lStack_a8 != 0) {
        plVar26 = (long *)(lStack_a8 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar3) {
            *plVar26 = *plVar26 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar26 = (long *)0x100;
      __Znwm();
      plVar26[2] = 0;
      plVar26[1] = 0x200000006;
      *(undefined2 *)(plVar26 + 3) = 4;
      plVar26[5] = 0;
      plVar26[4] = 0;
      plVar26[7] = 0;
      plVar26[6] = 0;
      plVar26[9] = 0;
      plVar26[8] = 0;
      plVar26[0xb] = 0;
      plVar26[10] = 0;
      plVar26[0xd] = 0;
      plVar26[0xc] = 0;
      plVar26[0xf] = 0;
      plVar26[0xe] = 0;
      plVar26[0x10] = 0;
      plVar26[0x11] = (long)(plVar26 + 3);
      plVar26[0x12] = 0;
      *(undefined2 *)(plVar26 + 0x13) = 0;
      *plVar26 = (long)&PTR_DAT_110bc59c0;
      plStack_a0 = plVar26 + 0x14;
      *plStack_a0 = lVar16;
      plVar26[0x15] = (long)plVar11;
      plVar26[0x16] = (long)plVar22;
      plVar26[0x17] = (long)plVar5;
      plVar26[0x19] = lStack_158;
      plVar26[0x18] = (long)puStack_160;
      plVar26[0x1a] = lStack_150;
      plVar26[0x1b] = lVar24;
      plVar26[0x1c] = lVar8;
      if (lVar8 != 0) {
        plVar22 = (long *)(lVar8 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar3) {
            *plVar22 = *plVar22 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *(undefined1 *)(plVar26 + 0x1e) = 1;
      plVar26[0x1f] = 0;
      plStack_98 = plVar26;
      if (plStack_90 != (long *)0x0) {
        func_0x0001092b4274(&plStack_90);
      }
      plStack_90 = plVar26;
      if (lVar8 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv(lVar8);
      }
      pcStack_88 = FUN_10a34d694;
    }
    else {
      pcStack_80 = (code *)0x0;
      (**(code **)(*plVar26 + 0x28))(plVar26,0,&pcStack_80);
      if (pcStack_80 != (code *)0x0) {
        func_0x0001092af97c(&pcStack_80);
        goto LAB_10a358b64;
      }
      plStack_178 = (long *)0x0;
      lStack_180 = 0;
      plStack_168 = (long *)0x0;
      plStack_170 = (long *)0x0;
      if (lVar8 != 0) {
        plVar12 = (long *)(lVar8 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = *plVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar12 = (long *)0x108;
      __Znwm();
      plVar12[2] = 0;
      plVar12[1] = 0x200000006;
      *(undefined2 *)(plVar12 + 3) = 4;
      plVar12[5] = 0;
      plVar12[4] = 0;
      plVar12[7] = 0;
      plVar12[6] = 0;
      plVar12[9] = 0;
      plVar12[8] = 0;
      plVar12[0xb] = 0;
      plVar12[10] = 0;
      plVar12[0xd] = 0;
      plVar12[0xc] = 0;
      plVar12[0xf] = 0;
      plVar12[0xe] = 0;
      plVar12[0x10] = 0;
      plVar12[0x11] = (long)(plVar12 + 3);
      plVar12[0x12] = 0;
      *(undefined2 *)(plVar12 + 0x13) = 0;
      *plVar12 = (long)&PTR_FUN_110bc5988;
      plVar28 = plVar12 + 0x14;
      *plVar28 = lVar16;
      plVar12[0x15] = (long)plVar11;
      plVar12[0x16] = (long)plVar22;
      plVar12[0x17] = (long)plVar5;
      plVar12[0x19] = lStack_158;
      plVar12[0x18] = (long)puStack_160;
      plVar12[0x1a] = lStack_150;
      plVar12[0x1b] = lVar24;
      plVar12[0x1c] = lVar8;
      if (lVar8 != 0) {
        plVar22 = (long *)(lVar8 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar3) {
            *plVar22 = *plVar22 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *(undefined1 *)(plVar12 + 0x1e) = 1;
      plVar12[0x1f] = 0;
      plVar12[0x20] = (long)plVar26;
      if (plStack_98 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_98 + 1);
        do {
          uVar13 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar13 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          do {
            uVar13 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar13 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plStack_98 + 8))();
          }
        }
      }
      plStack_98 = plVar12;
      if (plStack_90 != (long *)0x0) {
        func_0x0001092b4274(&plStack_90);
      }
      plStack_a0 = plVar28;
      plStack_90 = plVar12;
      if (lVar8 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv(lVar8);
      }
      pcStack_88 = (code *)0x10a34d664;
      __ZNSt13exception_ptrD1Ev(&pcStack_80);
    }
    plVar26 = plStack_a0;
    if (plStack_a0[0xb] != 0) {
      func_0x0001092b4274();
    }
    plVar26[0xb] = (long)plStack_90;
    plStack_90 = (long *)0x0;
    pcStack_80 = pcStack_88;
    pcStack_78 = (code *)plStack_a0;
    puStack_70 = puVar10;
    (**(code **)*puVar10)(puVar10,&pcStack_80);
    plVar26 = plStack_98;
    plStack_98 = (long *)0x0;
    if ((plStack_90 != (long *)0x0) && (func_0x0001092b4274(&plStack_90), plStack_98 != (long *)0x0)
       ) {
      puVar1 = (ulong *)(plStack_98 + 1);
      do {
        uVar13 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar13 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar13 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*plStack_98 + 8))();
        }
      }
    }
    if (plVar26 != (long *)0x0) {
      puVar1 = (ulong *)(plVar26 + 1);
      do {
        uVar13 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar13 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar13 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*plVar26 + 8))(plVar26);
        }
      }
    }
    if (lVar8 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv(lVar8);
    }
    plVar26 = plStack_128;
    if (plStack_128 != (long *)0x0) {
      plVar22 = plStack_128 + 1;
      do {
        lVar16 = *plVar22;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar3) {
          *plVar22 = lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_128 + 0x10))(plStack_128);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
      }
    }
    FUN_10a329b50(&ppuStack_118);
    uVar4 = uStack_e8;
    if (lStack_e0 != 0) {
      uStack_e8 = 0;
      lStack_e0 = 0;
      FUN_10a3c017c(uVar4);
    }
    if (plStack_d8 != (long *)0x0) {
      plStack_d0 = plStack_d8;
      __ZdlPv();
    }
    plVar26 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar22 = plStack_b8 + 1;
      do {
        lVar16 = *plVar22;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar3) {
          *plVar22 = lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        goto LAB_10a35835c;
      }
    }
  }
  else {
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f64f076,&UNK_10f64f1db,0x264,&UNK_10f64f396);
    }
    FUN_10a329c24(&plStack_a0,plVar26,plVar22);
    if (lVar24 != 0) {
      FUN_10a329ce8(lVar24,&plStack_a0);
    }
    plVar26 = plStack_98;
    if (plStack_98 != (long *)0x0) {
LAB_10a35835c:
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
    }
  }
  if (lStack_a8 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar26 = plStack_1a8;
  if (plStack_1a8 != (long *)0x0) {
    plVar22 = plStack_1a8 + 1;
    do {
      lVar16 = *plVar22;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar3) {
        *plVar22 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
    }
  }
  plVar26 = plStack_198;
  if (plStack_198 != (long *)0x0) {
    plVar22 = plStack_198 + 1;
    do {
      lVar16 = *plVar22;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar3) {
        *plVar22 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_198 + 0x10))(plStack_198);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
    }
  }
  plVar26 = plStack_188;
  if (plStack_188 != (long *)0x0) {
    plVar22 = plStack_188 + 1;
    do {
      lVar16 = *plVar22;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar3) {
        *plVar22 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_188 + 0x10))(plStack_188);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
    }
  }
  plVar26 = plStack_1d8;
  if (plStack_1d8 != (long *)0x0) {
    plVar22 = plStack_1d8 + 1;
    do {
      lVar16 = *plVar22;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar3) {
        *plVar22 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
    }
  }
  plVar26 = plStack_1c8;
  if (plStack_1c8 != (long *)0x0) {
    plVar22 = plStack_1c8 + 1;
    do {
      lVar16 = *plVar22;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar3) {
        *plVar22 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
    }
  }
  plVar26 = plStack_1b8;
  if (plStack_1b8 != (long *)0x0) {
    plVar22 = plStack_1b8 + 1;
    do {
      lVar16 = *plVar22;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar3) {
        *plVar22 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
    }
  }
  *param_1 = 0;
  plVar26 = plVar9 + 0x4b;
  lVar16 = plVar9[0x59];
  uVar13 = lVar16 - 1;
  plVar9[0x59] = uVar13;
  if (uVar13 < 8) {
    uVar13 = plVar26[lVar16 + 2];
    if (plVar9[0x5a] == uVar13) {
      return;
    }
  }
  else {
    uVar13 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar13) {
      return;
    }
  }
  pcVar6 = (code *)*plVar26;
  pcVar21 = (code *)plVar9[0x4c];
  lVar16 = (long)pcVar21 - (long)pcVar6;
  uVar25 = lVar16 >> 4;
  if (uVar25 < uVar13) {
    uVar27 = uVar13 - uVar25;
    lVar24 = plVar9[0x4d];
    if ((ulong)(lVar24 - (long)pcVar21 >> 4) < uVar27) {
      if (uVar13 >> 0x3c == 0) {
        uVar15 = lVar24 - (long)pcVar6 >> 3;
        if (uVar15 <= uVar13) {
          uVar15 = uVar13;
        }
        if (0x7fffffffffffffef < (ulong)(lVar24 - (long)pcVar6)) {
          uVar15 = 0xfffffffffffffff;
        }
        plStack_68 = plVar26;
        if (uVar15 >> 0x3c == 0) {
          lVar8 = uVar15 << 4;
          __Znwm();
          lVar23 = lVar8 + lVar16;
          _bzero(lVar23,uVar27 * 0x10);
          lVar20 = lVar23 + uVar25 * -0x10;
          _memcpy(lVar20,pcVar6,lVar16);
          *plVar26 = lVar20;
          plVar9[0x4c] = lVar23 + uVar27 * 0x10;
          plVar9[0x4d] = lVar8 + uVar15 * 0x10;
          pcStack_88 = pcVar6;
          pcStack_80 = pcVar6;
          pcStack_78 = pcVar6;
          puStack_70 = (undefined8 *)lVar24;
          func_0x00010988c1b8(&pcStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar6)();
    }
    _bzero(pcVar21,uVar27 * 0x10);
    plVar9[0x4c] = (long)(pcVar21 + uVar27 * 0x10);
  }
  else if (uVar13 < uVar25) {
    while (pcVar21 != pcVar6 + uVar13 * 0x10) {
      pcVar21 = pcVar21 + -0x10;
      func_0x00010988c204(pcVar21);
    }
    plVar9[0x4c] = (long)(pcVar6 + uVar13 * 0x10);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar13;
  return;
}



/* Entry: 10a358d5c; end: 10a358d7f;  */

void FUN_10a358d5c(undefined8 param_1)

{
  undefined8 extraout_x8;
  undefined1 auStack_58 [39];
  undefined1 uStack_31;
  
  if ((int)param_1 == 4) {
    return;
  }
  FUN_10a052ee0(4,0,param_1);
  FUN_10a358e30(auStack_58);
  FUN_10a358f68(extraout_x8,&uStack_31,auStack_58);
  FUN_10a688c1c(auStack_58);
  return;
}


