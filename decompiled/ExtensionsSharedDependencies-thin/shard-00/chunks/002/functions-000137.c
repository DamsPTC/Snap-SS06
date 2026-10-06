/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00362f44; end: 00362f7f;  */

long * FUN_00362f44(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  return param_1;
}



/* Entry: 00362f80; end: 00363013;  */

undefined8 * FUN_00362f80(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_009dd5e0;
  FUN_003a2a64(param_1[8]);
  puVar1 = (undefined8 *)param_1[0xf];
  param_1[0xf] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  plVar2 = (long *)param_1[0xb];
  param_1[0xb] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_0033d36c(param_1 + 9);
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    __ZdlPv(param_1[5]);
  }
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    __ZdlPv(param_1[2]);
  }
  return param_1;
}



/* Entry: 00363014; end: 0036301f;  */

void FUN_00363014(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x363018);
  (*pcVar1)();
}



/* Entry: 00363020; end: 003631d3;  */

/* WARNING: Removing unreachable block (ram,0x00363478) */

void FUN_00363020(long *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x21;
  ulong uVar9;
  
  if ((char)param_1[0x10] != '\0') {
    return;
  }
  if ((char)param_1[0x1e] == '\0') goto LAB_003631c0;
  plVar4 = param_1;
  func_0x003c1f6c();
  *(undefined1 *)(*plVar4 + 0x34) = 0;
  lVar7 = param_1[0x1c];
  uVar1 = param_1[0x1d];
  uVar9 = 0x7fffffffffffffff;
  uVar8 = 0x7fffffffffffffff;
  if (((uVar1 != 0x7fffffffffffffff && lVar7 != 0x7fffffffffffffff) &&
      (uVar8 = 0x8000000000000000, uVar1 != 0x8000000000000000)) && (lVar7 != -0x8000000000000000))
  {
    if ((long)uVar1 < 1) {
      if ((long)(-0x8000000000000000 - uVar1) <= lVar7) goto LAB_003630b4;
    }
    else if ((long)(uVar1 ^ 0x7fffffffffffffff) < lVar7) {
      uVar8 = 0x7fffffffffffffff;
    }
    else {
LAB_003630b4:
      uVar8 = lVar7 + uVar1;
    }
  }
  func_0x003c1f6c();
  puVar5 = (ulong *)*plVar4;
  FUN_003c1e28();
  if ((uVar8 != 0x7fffffffffffffff) && (puVar5 != (ulong *)0x8000000000000001)) {
    if ((uVar8 != 0x8000000000000000) && (puVar5 != (ulong *)0x8000000000000000)) {
      if ((long)uVar8 < 1) {
        if (-(long)puVar5 < (long)(-0x8000000000000000 - uVar8)) goto LAB_003631c0;
      }
      else if ((long)(uVar8 ^ 0x7fffffffffffffff) < -(long)puVar5) goto LAB_00363130;
      uVar9 = uVar8 - (long)puVar5;
      if (0 < (long)uVar9) goto LAB_00363130;
    }
LAB_003631c0:
    (**(code **)(*param_1 + 0x38))(&stack0xffffffffffffffd8);
    puVar6 = (undefined8 *)param_1[0xf];
    param_1[0xf] = unaff_x21;
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)();
    }
    plVar4 = (long *)0x0;
    func_0x003c1f6c();
    lVar7 = *plVar4;
    FUN_003c1e28();
    if ((char)param_1[0x1e] == '\0') {
      *(undefined1 *)(param_1 + 0x1e) = 1;
    }
    param_1[0x1d] = lVar7;
    return;
  }
LAB_00363130:
  *(undefined1 *)(param_1 + 0x10) = 1;
  plVar4 = param_1 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = *plVar4 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  param_1[0x19] = (long)FUN_00363264;
  param_1[0x1a] = (long)param_1;
  param_1[0x1b] = 0;
  func_0x003c1f6c();
  uVar8 = *puVar5;
  FUN_003c1e28();
  lVar7 = 0x7fffffffffffffff;
  if (((uVar9 != 0x7fffffffffffffff) && (uVar8 != 0x7fffffffffffffff)) &&
     (lVar7 = -0x8000000000000000, uVar8 != 0x8000000000000000)) {
    lVar7 = 0x7fffffffffffffff;
    if (uVar9 <= (uVar8 ^ 0x7fffffffffffffff) || (long)uVar8 < 1) {
      lVar7 = uVar8 + uVar9;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x003cf01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puRam0000000000b65d60)(param_1 + 0x11,lVar7,param_1 + 0x18);
  return;
}



/* Entry: 003631d4; end: 003631e3;  */

/* WARNING: Removing unreachable block (ram,0x00363478) */

void FUN_003631d4(long *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x21;
  
  if (param_1[0xf] != 0) {
    return;
  }
  if ((char)param_1[0x10] != '\0') {
    return;
  }
  if ((char)param_1[0x1e] == '\0') goto LAB_003631c0;
  plVar4 = param_1;
  func_0x003c1f6c();
  *(undefined1 *)(*plVar4 + 0x34) = 0;
  lVar7 = param_1[0x1c];
  uVar1 = param_1[0x1d];
  uVar9 = 0x7fffffffffffffff;
  uVar8 = 0x7fffffffffffffff;
  if (((uVar1 != 0x7fffffffffffffff && lVar7 != 0x7fffffffffffffff) &&
      (uVar8 = 0x8000000000000000, uVar1 != 0x8000000000000000)) && (lVar7 != -0x8000000000000000))
  {
    if ((long)uVar1 < 1) {
      if ((long)(-0x8000000000000000 - uVar1) <= lVar7) goto LAB_003630b4;
    }
    else if ((long)(uVar1 ^ 0x7fffffffffffffff) < lVar7) {
      uVar8 = 0x7fffffffffffffff;
    }
    else {
LAB_003630b4:
      uVar8 = lVar7 + uVar1;
    }
  }
  func_0x003c1f6c();
  puVar5 = (ulong *)*plVar4;
  FUN_003c1e28();
  if ((uVar8 != 0x7fffffffffffffff) && (puVar5 != (ulong *)0x8000000000000001)) {
    if ((uVar8 != 0x8000000000000000) && (puVar5 != (ulong *)0x8000000000000000)) {
      if ((long)uVar8 < 1) {
        if (-(long)puVar5 < (long)(-0x8000000000000000 - uVar8)) goto LAB_003631c0;
      }
      else if ((long)(uVar8 ^ 0x7fffffffffffffff) < -(long)puVar5) goto LAB_00363130;
      uVar9 = uVar8 - (long)puVar5;
      if (0 < (long)uVar9) goto LAB_00363130;
    }
LAB_003631c0:
    (**(code **)(*param_1 + 0x38))(&stack0xffffffffffffffd8);
    puVar6 = (undefined8 *)param_1[0xf];
    param_1[0xf] = unaff_x21;
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)();
    }
    plVar4 = (long *)0x0;
    func_0x003c1f6c();
    lVar7 = *plVar4;
    FUN_003c1e28();
    if ((char)param_1[0x1e] == '\0') {
      *(undefined1 *)(param_1 + 0x1e) = 1;
    }
    param_1[0x1d] = lVar7;
    return;
  }
LAB_00363130:
  *(undefined1 *)(param_1 + 0x10) = 1;
  plVar4 = param_1 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = *plVar4 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  param_1[0x19] = (long)FUN_00363264;
  param_1[0x1a] = (long)param_1;
  param_1[0x1b] = 0;
  func_0x003c1f6c();
  uVar8 = *puVar5;
  FUN_003c1e28();
  lVar7 = 0x7fffffffffffffff;
  if (((uVar9 != 0x7fffffffffffffff) && (uVar8 != 0x7fffffffffffffff)) &&
     (lVar7 = -0x8000000000000000, uVar8 != 0x8000000000000000)) {
    lVar7 = 0x7fffffffffffffff;
    if (uVar9 <= (uVar8 ^ 0x7fffffffffffffff) || (long)uVar8 < 1) {
      lVar7 = uVar8 + uVar9;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x003cf01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puRam0000000000b65d60)(param_1 + 0x11,lVar7,param_1 + 0x18);
  return;
}



/* Entry: 003631e4; end: 00363213;  */

void FUN_003631e4(long param_1)

{
  if (*(char *)(param_1 + 0x80) != '\0') {
    func_0x003cf020(param_1 + 0x88);
  }
  *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_1 + 0xf8);
  *(undefined1 *)(param_1 + 0x230) = 1;
  return;
}



/* Entry: 00363214; end: 00363263;  */

void FUN_00363214(long param_1)

{
  undefined8 *puVar1;
  
  *(undefined1 *)(param_1 + 0x70) = 1;
  if (*(char *)(param_1 + 0x80) != '\0') {
    func_0x003cf020(param_1 + 0x88);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  return;
}



/* Entry: 00363264; end: 0036338f;  */

dword * FUN_00363264(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  dword *pdVar3;
  dword *pdVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 uStack_69;
  long lStack_68;
  ulong uStack_60;
  dword adStack_58 [6];
  dword *pdStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  uVar8 = *param_2;
  if ((uVar8 & 1) != 0) {
    piVar5 = (int *)(uVar8 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  pdStack_40 = (dword *)0x0;
  pdVar3 = &MACH_HEADER.flags;
  lStack_68 = param_1;
  uStack_60 = uVar8;
  __Znwm();
  *(undefined ***)pdVar3 = &PTR_FUN_009dd648;
  *(long *)(pdVar3 + 2) = param_1;
  *(ulong *)(pdVar3 + 4) = uVar8;
  uStack_60 = 0x36;
  pdStack_40 = pdVar3;
  FUN_003d0dec(uVar7,adStack_58,&uStack_69);
  if (pdStack_40 == adStack_58) {
    lVar6 = 4;
    pdVar3 = adStack_58;
LAB_0036330c:
    (**(code **)(*(long *)pdVar3 + lVar6 * 8))();
  }
  else {
    pdVar3 = pdStack_40;
    if (pdStack_40 != (dword *)0x0) {
      lVar6 = 5;
      goto LAB_0036330c;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return pdVar3;
  }
  ___stack_chk_fail();
  if (pdStack_40 == adStack_58) {
    lVar6 = 4;
    pdVar4 = adStack_58;
  }
  else {
    if (pdStack_40 == (dword *)0x0) goto LAB_00363380;
    lVar6 = 5;
    pdVar4 = pdStack_40;
  }
  (**(code **)(*(long *)pdVar4 + lVar6 * 8))();
LAB_00363380:
  FUN_00363390(&lStack_68);
  __Unwind_Resume();
  if ((*(ulong *)(pdVar3 + 2) & 1) != 0) {
    FUN_0055293c();
  }
  return pdVar3;
}



/* Entry: 00363390; end: 003633bf;  */

long FUN_00363390(long param_1)

{
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 003633c0; end: 00363427;  */

void FUN_003633c0(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((*param_2 == 0) && ((char)param_1[0xe] == '\0')) {
    FUN_00363428(param_1);
  }
  plVar1 = param_1 + 1;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00363424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



/* Entry: 00363428; end: 003634bb;  */

void FUN_00363428(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long *plStack_28;
  
  (**(code **)(*param_1 + 0x38))(&plStack_28);
  plVar2 = plStack_28;
  plStack_28 = (long *)0x0;
  puVar1 = (undefined8 *)param_1[0xf];
  param_1[0xf] = (long)plVar2;
  plVar2 = (long *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
    plVar2 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)*plVar2)();
    }
  }
  func_0x003c1f6c();
  lVar3 = *plVar2;
  FUN_003c1e28();
  if ((char)param_1[0x1e] == '\0') {
    *(undefined1 *)(param_1 + 0x1e) = 1;
  }
  param_1[0x1d] = lVar3;
  return;
}



/* Entry: 003634bc; end: 003635ff;  */

long * FUN_003634bc(long param_1)

{
  char cVar1;
  bool bVar2;
  dword *pdVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  dword *pdVar8;
  long lVar9;
  undefined8 uVar10;
  long alStack_140 [10];
  undefined1 uStack_b1;
  long lStack_b0;
  long alStack_a8 [10];
  dword adStack_58 [6];
  dword *pdStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar4 = (long *)(param_1 + 8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  lStack_b0 = param_1;
  FUN_003d3a48(alStack_a8);
  pdStack_40 = (dword *)0x0;
  pdVar3 = &segment_command_00000020.nsects;
  __Znwm();
  *(undefined ***)pdVar3 = &PTR_FUN_009dd6c8;
  *(long *)(pdVar3 + 2) = lStack_b0;
  func_0x003d3ad8(pdVar3 + 4,alStack_a8);
  pdVar8 = adStack_58;
  pdStack_40 = pdVar3;
  FUN_003d0dec(uVar10,pdVar8,&uStack_b1);
  if (pdStack_40 == adStack_58) {
    lVar9 = 4;
    pdVar3 = adStack_58;
LAB_0036356c:
    (**(code **)(*(long *)pdVar3 + lVar9 * 8))();
  }
  else if (pdStack_40 != (dword *)0x0) {
    lVar9 = 5;
    pdVar3 = pdStack_40;
    goto LAB_0036356c;
  }
  plVar4 = alStack_a8;
  FUN_003d3950();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return plVar4;
  }
  ___stack_chk_fail();
  if (pdStack_40 == adStack_58) {
    lVar9 = 4;
    pdVar3 = adStack_58;
  }
  else {
    if (pdStack_40 == (dword *)0x0) goto LAB_003635e8;
    lVar9 = 5;
    pdVar3 = pdStack_40;
  }
  (**(code **)(*(long *)pdVar3 + lVar9 * 8))();
LAB_003635e8:
  FUN_003d3950(alStack_a8);
  __Unwind_Resume();
  plVar7 = alStack_140;
  plVar5 = (long *)plVar4[0xf];
  plVar4[0xf] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)*plVar5)();
  }
  if ((char)plVar4[0xe] == '\0') {
    if ((*(long *)(pdVar8 + 8) == 0) && (*(long *)pdVar8 == 0)) {
      FUN_003a15dc(plVar4 + 0x1f);
    }
    else {
      func_0x003c1f6c();
      *(undefined1 *)(*plVar5 + 0x34) = 0;
      plVar5 = plVar4 + 0x1f;
      FUN_003a15f4();
      plVar6 = plVar5;
      func_0x003c1f6c();
      plVar6 = (long *)*plVar6;
      FUN_003c1e28();
      if ((char)plVar4[0x10] != '\0') {
        FUN_00771ea8();
        FUN_003d3950(alStack_140);
        __Unwind_Resume();
        func_0x0040cf10();
        *plVar6 = (long)&PTR_FUN_009dd648;
        if ((plVar6[2] & 1U) != 0) {
          FUN_0055293c();
        }
        return plVar6;
      }
      *(undefined1 *)(plVar4 + 0x10) = 1;
      plVar6 = plVar4 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4[0x19] = (long)FUN_00363264;
      plVar4[0x1a] = (long)plVar4;
      plVar4[0x1b] = 0;
      func_0x003cf010(plVar4 + 0x11,plVar5,plVar4 + 0x18);
    }
    plVar5 = (long *)plVar4[0xb];
    func_0x003d3ad8(alStack_140,pdVar8);
    (**(code **)(*plVar5 + 0x10))(plVar5,alStack_140);
    FUN_003d3950(alStack_140);
    plVar5 = plVar7;
  }
  plVar7 = plVar4 + 1;
  do {
    lVar9 = *plVar7;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = lVar9 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar9 + -1 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    plVar5 = plVar4;
  }
  return plVar5;
}



/* Entry: 00363600; end: 00363747;  */

long * FUN_00363600(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long alStack_80 [10];
  
  plVar5 = alStack_80;
  plVar3 = (long *)param_1[0xf];
  param_1[0xf] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)*plVar3)();
  }
  if ((char)param_1[0xe] == '\0') {
    if ((param_2[4] == 0) && (*param_2 == 0)) {
      FUN_003a15dc(param_1 + 0x1f);
    }
    else {
      func_0x003c1f6c();
      *(undefined1 *)(*plVar3 + 0x34) = 0;
      plVar3 = param_1 + 0x1f;
      FUN_003a15f4();
      plVar4 = plVar3;
      func_0x003c1f6c();
      plVar4 = (long *)*plVar4;
      FUN_003c1e28();
      if ((char)param_1[0x10] != '\0') {
        FUN_00771ea8();
        FUN_003d3950(alStack_80);
        __Unwind_Resume();
        func_0x0040cf10();
        *plVar4 = (long)&PTR_FUN_009dd648;
        if ((plVar4[2] & 1U) != 0) {
          FUN_0055293c();
        }
        return plVar4;
      }
      *(undefined1 *)(param_1 + 0x10) = 1;
      plVar4 = param_1 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      param_1[0x19] = (long)FUN_00363264;
      param_1[0x1a] = (long)param_1;
      param_1[0x1b] = 0;
      func_0x003cf010(param_1 + 0x11,plVar3,param_1 + 0x18);
    }
    plVar3 = (long *)param_1[0xb];
    func_0x003d3ad8(alStack_80,param_2);
    (**(code **)(*plVar3 + 0x10))(plVar3,alStack_80);
    FUN_003d3950(alStack_80);
    plVar3 = plVar5;
  }
  plVar5 = param_1 + 1;
  do {
    lVar6 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 + -1 == 0) {
    (**(code **)(*param_1 + 0x10))(param_1);
    plVar3 = param_1;
  }
  return plVar3;
}



/* Entry: 00363748; end: 00363783;  */

undefined8 * FUN_00363748(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009dd648;
  if ((param_1[2] & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 00363784; end: 003637bf;  */

void FUN_00363784(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009dd648;
  if ((param_1[2] & 1) != 0) {
    FUN_0055293c();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_1);
  return;
}



/* Entry: 003637c0; end: 0036380f;  */

void FUN_003637c0(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  dword *pdVar5;
  int *piVar6;
  
  pdVar5 = &MACH_HEADER.flags;
  __Znwm();
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(ulong *)(param_1 + 0x10);
  *(undefined ***)pdVar5 = &PTR_FUN_009dd648;
  *(undefined8 *)(pdVar5 + 2) = uVar1;
  *(ulong *)(pdVar5 + 4) = uVar2;
  if ((uVar2 & 1) != 0) {
    piVar6 = (int *)(uVar2 - 1);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar4) {
        *piVar6 = *piVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}



/* Entry: 00363810; end: 00363847;  */

void FUN_00363810(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(ulong *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_009dd648;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  if ((uVar2 & 1) != 0) {
    piVar5 = (int *)(uVar2 - 1);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar4) {
        *piVar5 = *piVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}



/* Entry: 00363848; end: 0036386f;  */

void FUN_00363848(long param_1)

{
  FUN_00363934(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_1);
  return;
}



/* Entry: 00363870; end: 003638eb;  */

void FUN_00363870(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uVar5;
  ulong uStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(ulong *)(param_1 + 0x10);
  if ((uVar5 & 1) != 0) {
    piVar4 = (int *)(uVar5 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_28 = uVar5;
  FUN_003633c0(uVar3,&uStack_28);
  if ((uVar5 & 1) != 0) {
    FUN_0055293c(uVar5);
  }
  return;
}



/* Entry: 003638ec; end: 00363927;  */

long FUN_003638ec(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009dd6a8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 00363928; end: 00363933;  */

undefined ** FUN_00363928(void)

{
  return &PTR_DAT_009dd6a8;
}



/* Entry: 00363934; end: 00363953;  */

void FUN_00363934(long param_1)

{
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 00363954; end: 003639b3;  */

undefined8 * FUN_00363954(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009dd6c8;
  FUN_003d3950(param_1 + 2);
  return param_1;
}



/* Entry: 003639b4; end: 00363a0b;  */

dword * FUN_003639b4(long param_1)

{
  dword *pdVar1;
  undefined8 uVar2;
  
  pdVar1 = &segment_command_00000020.nsects;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined ***)pdVar1 = &PTR_FUN_009dd6c8;
  *(undefined8 *)(pdVar1 + 2) = uVar2;
  FUN_003d3a48(pdVar1 + 4,param_1 + 0x10);
  return pdVar1;
}



/* Entry: 00363a0c; end: 00363a33;  */

undefined8 * FUN_00363a0c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar7 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_009dd6c8;
  param_2[1] = uVar7;
  puVar4 = param_2 + 2;
  FUN_0035b954();
  uVar5 = *(ulong *)(param_1 + 0x30);
  if (uVar5 == 0) {
    param_2[7] = 0;
    uVar7 = 0;
    if (*(long *)(param_1 + 0x38) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x38) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar7 = *(undefined8 *)(param_1 + 0x38);
    }
    param_2[6] = 0;
    param_2[7] = uVar7;
  }
  else {
    puVar4[4] = uVar5;
    if ((uVar5 & 1) != 0) {
      piVar6 = (int *)(uVar5 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  if (*(char *)(param_1 + 0x57) < '\0') {
    FUN_002971d4(param_2 + 8,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x48);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    param_2[10] = *(undefined8 *)(param_1 + 0x50);
    param_2[9] = uVar8;
    param_2[8] = uVar7;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  FUN_003a277c();
  param_2[0xb] = uVar7;
  return param_2 + 2;
}



/* Entry: 00363a34; end: 00363a5b;  */

void FUN_00363a34(long param_1)

{
  FUN_003d3950(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_1);
  return;
}



/* Entry: 00363a5c; end: 00363ab3;  */

void FUN_00363a5c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_70 [80];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x003d3ad8(auStack_70,param_1 + 0x10);
  FUN_00363600(uVar1,auStack_70);
  FUN_003d3950(auStack_70);
  return;
}



/* Entry: 00363ab4; end: 00363aef;  */

long FUN_00363ab4(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009dd728);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 00363af0; end: 00363afb;  */

undefined ** FUN_00363af0(void)

{
  return &PTR_DAT_009dd728;
}



/* Entry: 00363afc; end: 00363c6f;  */

void FUN_00363afc(long param_1)

{
  dword *pdVar1;
  dword *pdStack_40;
  dword *pdStack_38;
  dword *pdStack_30;
  dword *pdStack_28;
  
  param_1 = param_1 + 0xf0;
  pdVar1 = &MACH_HEADER.cpusubtype;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_FUN_009dd748;
  pdStack_28 = pdVar1;
  FUN_003d3fe8(param_1,&pdStack_28);
  pdVar1 = pdStack_28;
  pdStack_28 = (dword *)0x0;
  if (pdVar1 != (dword *)0x0) {
    (**(code **)(*(long *)pdVar1 + 8))();
  }
  pdVar1 = &MACH_HEADER.cpusubtype;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_DAT_009dd800;
  pdStack_30 = pdVar1;
  FUN_003d3fe8(param_1,&pdStack_30);
  pdVar1 = pdStack_30;
  pdStack_30 = (dword *)0x0;
  if (pdVar1 != (dword *)0x0) {
    (**(code **)(*(long *)pdVar1 + 8))();
  }
  pdVar1 = &MACH_HEADER.cpusubtype;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_FUN_009dd858;
  pdStack_38 = pdVar1;
  FUN_003d3fe8(param_1,&pdStack_38);
  pdVar1 = pdStack_38;
  pdStack_38 = (dword *)0x0;
  if (pdVar1 != (dword *)0x0) {
    (**(code **)(*(long *)pdVar1 + 8))();
  }
  pdVar1 = &MACH_HEADER.cpusubtype;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_DAT_009dd8b0;
  pdStack_40 = pdVar1;
  FUN_003d3fe8(param_1,&pdStack_40);
  pdVar1 = pdStack_40;
  pdStack_40 = (dword *)0x0;
  if (pdVar1 != (dword *)0x0) {
    (**(code **)(*(long *)pdVar1 + 8))();
  }
  return;
}



/* Entry: 00363c70; end: 00363c9b;  */

void FUN_00363c70(void)

{
  return;
}



/* Entry: 00363c9c; end: 00363d17;  */

void FUN_00363c9c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_d8 [144];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_0035ae18(auStack_d8);
  uStack_40 = *(undefined8 *)(param_3 + 0x98);
  uStack_48 = *(undefined8 *)(param_3 + 0x90);
  uStack_30 = *(undefined8 *)(param_3 + 0xa8);
  uStack_38 = *(undefined8 *)(param_3 + 0xa0);
  *(undefined8 *)(param_3 + 0xa0) = 0;
  *(undefined8 *)(param_3 + 0xa8) = 0;
  uStack_28 = *(undefined8 *)(param_3 + 0xb0);
  *(undefined8 *)(param_3 + 0xb0) = 0;
  FUN_003640ec(param_1,auStack_d8,FUN_0039fd1c);
  FUN_00361fc0(auStack_d8);
  return;
}



/* Entry: 00363d18; end: 003640eb;  */

void FUN_00363d18(undefined8 *param_1,code *param_2,long param_3)

{
  qword qVar1;
  code *pcVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *extraout_x8;
  long unaff_x19;
  qword *pqVar9;
  code *unaff_x21;
  undefined1 *unaff_x22;
  ulong unaff_x25;
  undefined8 *****unaff_x27;
  undefined8 unaff_x28;
  qword qStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 *apuStack_388 [18];
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  qword qStack_2d8;
  qword qStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  qword *pqStack_2b8;
  undefined8 uStack_2b0;
  undefined8 ****ppppuStack_2a8;
  undefined1 *puStack_2a0;
  code *pcStack_298;
  ulong uStack_290;
  long lStack_288;
  undefined1 *puStack_280;
  code *pcStack_278;
  undefined8 *puStack_270;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 auStack_250 [2];
  char cStack_239;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 ****ppppuStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  undefined8 auStack_208 [2];
  char cStack_1f1;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined1 auStack_1d0 [144];
  ulong uStack_140;
  int iStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 **ppuStack_120;
  undefined1 uStack_118;
  undefined8 *puStack_110;
  ulong uStack_108;
  undefined1 uStack_100;
  undefined8 *apuStack_f8 [17];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar3 = param_1[4];
  if (-1 < (char)*(byte *)((long)param_1 + 0x2f)) {
    uVar3 = (ulong)*(byte *)((long)param_1 + 0x2f);
  }
  if (uVar3 != 0) {
    puStack_270 = (undefined8 *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      puStack_270 = param_1;
    }
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/resolver/sockaddr/sockaddr_resolver.cc"
                 ,0x5b,2,"authority-based URIs not supported by the %s scheme");
    param_3 = unaff_x19;
    param_2 = unaff_x21;
LAB_00363d94:
    uVar3 = 0;
    goto LAB_00363ff8;
  }
  uStack_108 = param_1[7];
  puStack_110 = (undefined8 *)param_1[6];
  if (-1 < (char)*(byte *)((long)param_1 + 0x47)) {
    uStack_108 = (ulong)*(byte *)((long)param_1 + 0x47);
    puStack_110 = param_1 + 6;
  }
  uStack_100 = 0x2c;
  uStack_140 = 0;
  iStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  ppuStack_120 = &puStack_110;
  uStack_118 = 0x2c;
  if (puStack_110 == (undefined8 *)0x0) {
    iStack_138 = 2;
    uStack_140 = uStack_108;
LAB_00363e28:
    if (uStack_140 != uStack_108) goto LAB_00363e30;
  }
  else {
    FUN_00667b38(&uStack_140);
    if (iStack_138 == 2) goto LAB_00363e28;
LAB_00363e30:
    uVar3 = uStack_108;
    unaff_x22 = auStack_1d0;
    lStack_260 = param_3 + 0x10;
    do {
      unaff_x25 = uStack_128;
      uVar8 = uStack_130;
      if (uStack_128 != 0) {
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          FUN_002971d4(&uStack_1f0,*param_1,param_1[1]);
        }
        else {
          uStack_1e8 = param_1[1];
          uStack_1f0 = *param_1;
          lStack_1e0 = param_1[2];
        }
        FUN_00353254(auStack_208,"");
        if (0x7ffffffffffffff7 < unaff_x25) {
          func_0x0033b318(&ppppuStack_220);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x364048);
          (*pcVar2)();
        }
        if (unaff_x25 < 0x17) {
          uStack_210 = CONCAT17((char)unaff_x25,(undefined7)uStack_210);
          unaff_x27 = &ppppuStack_220;
        }
        else {
          uVar6 = (unaff_x25 & 0xfffffffffffffff8) + 8;
          if ((unaff_x25 | 7) != 0x17) {
            uVar6 = unaff_x25 | 7;
          }
          unaff_x27 = (undefined8 *****)(uVar6 + 1);
          __Znwm();
          uStack_210 = uVar6 + 1 | 0x8000000000000000;
          uStack_218 = unaff_x25;
          ppppuStack_220 = unaff_x27;
        }
        unaff_x28 = 0x7ffffffffffffff8;
        _memmove(unaff_x27,uVar8,unaff_x25);
        *(undefined1 *)((long)unaff_x27 + unaff_x25) = 0;
        uStack_230 = 0;
        uStack_228 = 0;
        uStack_238 = 0;
        FUN_00353254(auStack_250,"");
        FUN_00401f2c(&lStack_1d8,&uStack_1f0,auStack_208,&ppppuStack_220,&uStack_238,auStack_250);
        if (cStack_239 < '\0') {
          __ZdlPv(auStack_250[0]);
        }
        apuStack_f8[0] = &uStack_238;
        FUN_0035af5c(apuStack_f8);
        if ((long)uStack_210 < 0) {
          __ZdlPv(ppppuStack_220);
        }
        if (cStack_1f1 < '\0') {
          __ZdlPv(auStack_208[0]);
        }
        if (lStack_1e0 < 0) {
          __ZdlPv(uStack_1f0);
        }
        if ((lStack_1d8 != 0) ||
           (puVar4 = unaff_x22, (*param_2)(unaff_x22,apuStack_f8), ((ulong)puVar4 & 1) == 0)) {
          FUN_0035afe0(&lStack_1d8);
          goto LAB_00363d94;
        }
        if (param_3 != 0) {
          uStack_258 = 0;
          unaff_x25 = *(ulong *)(param_3 + 8);
          if (unaff_x25 < *(ulong *)(param_3 + 0x10)) {
            FUN_00361dc0(lStack_260,unaff_x25,apuStack_f8,&uStack_258);
            lVar5 = unaff_x25 + 0xa8;
            *(long *)(param_3 + 8) = lVar5;
          }
          else {
            lVar5 = param_3;
            FUN_00361c8c(param_3,apuStack_f8,&uStack_258);
          }
          *(long *)(param_3 + 8) = lVar5;
        }
        FUN_0035afe0(&lStack_1d8);
      }
      unaff_x28 = 0x7ffffffffffffff8;
      FUN_00667b38(&uStack_140);
    } while (iStack_138 != 2 || uStack_140 != uVar3);
  }
  uVar3 = 1;
LAB_00363ff8:
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_70) {
    ___stack_chk_fail();
    *(ulong *)(param_3 + 8) = unaff_x25;
    FUN_0035afe0(&lStack_1d8);
    uVar6 = uVar3;
    __Unwind_Resume();
    pcStack_278 = FUN_003640ec;
    qStack_3a0 = 0;
    uStack_398 = 0;
    uStack_390 = 0;
    uVar7 = uVar6;
    uStack_2b0 = unaff_x28;
    ppppuStack_2a8 = unaff_x27;
    puStack_2a0 = unaff_x22;
    pcStack_298 = param_2;
    uStack_290 = uVar3;
    lStack_288 = param_3;
    puStack_280 = &stack0xfffffffffffffff0;
    FUN_00363d18();
    if ((uVar7 & 1) == 0) {
      pqVar9 = (qword *)0x0;
    }
    else {
      pqVar9 = &segment_command_00000020.vmaddr;
      __Znwm();
      uStack_2c8 = uStack_398;
      qStack_2d0 = qStack_3a0;
      uStack_2c0 = uStack_390;
      uStack_398 = 0;
      uStack_390 = 0;
      qStack_3a0 = 0;
      FUN_0035ae18(apuStack_388,uVar6);
      uStack_2f0 = *(undefined8 *)(uVar6 + 0x98);
      uStack_2f8 = *(undefined8 *)(uVar6 + 0x90);
      uStack_2e0 = *(undefined8 *)(uVar6 + 0xa8);
      uStack_2e8 = *(undefined8 *)(uVar6 + 0xa0);
      *(undefined8 *)(uVar6 + 0xa0) = 0;
      *(undefined8 *)(uVar6 + 0xa8) = 0;
      qStack_2d8 = *(qword *)(uVar6 + 0xb0);
      *(undefined8 *)(uVar6 + 0xb0) = 0;
      func_0x003d38f8(pqVar9);
      qVar1 = qStack_2d8;
      *pqVar9 = (qword)&PTR_FUN_009dd7a0;
      qStack_2d8 = 0;
      pqVar9[4] = uStack_2c8;
      pqVar9[3] = qStack_2d0;
      pqVar9[2] = qVar1;
      pqVar9[5] = uStack_2c0;
      qStack_2d0 = 0;
      uStack_2c8 = 0;
      uStack_2c0 = 0;
      uVar8 = uStack_2f8;
      FUN_003a277c();
      pqVar9[6] = uVar8;
      FUN_00361fc0(apuStack_388);
      pqStack_2b8 = &qStack_2d0;
      FUN_0034a1ec(&pqStack_2b8);
    }
    *extraout_x8 = pqVar9;
    apuStack_388[0] = (undefined1 *)&qStack_3a0;
    FUN_0034a1ec(apuStack_388);
    return;
  }
  return;
}



/* Entry: 003640ec; end: 00364273;  */

void FUN_003640ec(undefined8 *param_1,ulong param_2,undefined8 param_3)

{
  qword qVar1;
  ulong uVar2;
  undefined8 uVar3;
  qword *pqVar4;
  qword qStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 *apuStack_118 [18];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  qword qStack_68;
  qword qStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  
  qStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  uVar2 = param_2;
  FUN_00363d18(param_2,param_3,&qStack_130);
  if ((uVar2 & 1) == 0) {
    pqVar4 = (qword *)0x0;
  }
  else {
    pqVar4 = &segment_command_00000020.vmaddr;
    __Znwm();
    uStack_58 = uStack_128;
    qStack_60 = qStack_130;
    uStack_50 = uStack_120;
    uStack_128 = 0;
    uStack_120 = 0;
    qStack_130 = 0;
    FUN_0035ae18(apuStack_118,param_2);
    uStack_80 = *(undefined8 *)(param_2 + 0x98);
    uStack_88 = *(undefined8 *)(param_2 + 0x90);
    uStack_70 = *(undefined8 *)(param_2 + 0xa8);
    uStack_78 = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    qStack_68 = *(qword *)(param_2 + 0xb0);
    *(undefined8 *)(param_2 + 0xb0) = 0;
    func_0x003d38f8(pqVar4);
    qVar1 = qStack_68;
    *pqVar4 = (qword)&PTR_FUN_009dd7a0;
    qStack_68 = 0;
    pqVar4[4] = uStack_58;
    pqVar4[3] = qStack_60;
    pqVar4[2] = qVar1;
    pqVar4[5] = uStack_50;
    qStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uVar3 = uStack_88;
    FUN_003a277c();
    pqVar4[6] = uVar3;
    FUN_00361fc0(apuStack_118);
    puStack_48 = &qStack_60;
    FUN_0034a1ec(&puStack_48);
  }
  *param_1 = pqVar4;
  apuStack_118[0] = (undefined1 *)&qStack_130;
  FUN_0034a1ec(apuStack_118);
  return;
}



/* Entry: 00364274; end: 003642db;  */

undefined8 * FUN_00364274(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_009dd7a0;
  FUN_003a2a64(param_1[6]);
  puStack_28 = param_1 + 3;
  FUN_0034a1ec(&puStack_28);
  plVar1 = (long *)param_1[2];
  param_1[2] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 003642dc; end: 003642ef;  */

void FUN_003642dc(void)

{
  FUN_00364274();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 003642f0; end: 00364397;  */

void FUN_003642f0(long param_1)

{
  long *plVar1;
  undefined1 auStack_c0 [80];
  undefined1 auStack_70 [32];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_0034a0d4(auStack_70);
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  FUN_0034a334(auStack_70,param_1 + 0x18);
  uStack_28 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  plVar1 = *(long **)(param_1 + 0x10);
  func_0x003d3ad8(auStack_c0,auStack_70);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_c0);
  FUN_003d3950(auStack_c0);
  FUN_003d3950(auStack_70);
  return;
}



/* Entry: 00364398; end: 003643cb;  */

void FUN_00364398(void)

{
  return;
}



/* Entry: 003643cc; end: 00364447;  */

void FUN_003643cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_d8 [144];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_0035ae18(auStack_d8);
  uStack_40 = *(undefined8 *)(param_3 + 0x98);
  uStack_48 = *(undefined8 *)(param_3 + 0x90);
  uStack_30 = *(undefined8 *)(param_3 + 0xa8);
  uStack_38 = *(undefined8 *)(param_3 + 0xa0);
  *(undefined8 *)(param_3 + 0xa0) = 0;
  *(undefined8 *)(param_3 + 0xa8) = 0;
  uStack_28 = *(undefined8 *)(param_3 + 0xb0);
  *(undefined8 *)(param_3 + 0xb0) = 0;
  FUN_003640ec(param_1,auStack_d8,FUN_003a024c);
  FUN_00361fc0(auStack_d8);
  return;
}



/* Entry: 00364448; end: 00364473;  */

void FUN_00364448(void)

{
  return;
}



/* Entry: 00364474; end: 003644ef;  */

void FUN_00364474(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_d8 [144];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_0035ae18(auStack_d8);
  uStack_40 = *(undefined8 *)(param_3 + 0x98);
  uStack_48 = *(undefined8 *)(param_3 + 0x90);
  uStack_30 = *(undefined8 *)(param_3 + 0xa8);
  uStack_38 = *(undefined8 *)(param_3 + 0xa0);
  *(undefined8 *)(param_3 + 0xa0) = 0;
  *(undefined8 *)(param_3 + 0xa8) = 0;
  uStack_28 = *(undefined8 *)(param_3 + 0xb0);
  *(undefined8 *)(param_3 + 0xb0) = 0;
  FUN_003640ec(param_1,auStack_d8,FUN_0039f3f8);
  FUN_00361fc0(auStack_d8);
  return;
}



/* Entry: 003644f0; end: 0036452b;  */

ulong * FUN_003644f0(ulong *param_1)

{
  ulong uVar1;
  char *pcVar2;
  ulong *puVar3;
  
  pcVar2 = "localhost";
  _strlen();
  if ((char *)0x7ffffffffffffff7 < pcVar2) {
    func_0x0033b318();
    if (*param_1 != 0) {
      func_0x003711f8();
    }
    return param_1;
  }
  if (pcVar2 < "") {
    *(char *)((long)param_1 + 0x17) = (char)pcVar2;
    puVar3 = param_1;
    if (pcVar2 == (char *)0x0) goto LAB_003532e0;
  }
  else {
    uVar1 = ((ulong)pcVar2 & 0xfffffffffffffff8) + 8;
    if (((ulong)pcVar2 | 7) != 0x17) {
      uVar1 = (ulong)pcVar2 | 7;
    }
    puVar3 = (ulong *)(uVar1 + 1);
    __Znwm();
    param_1[1] = (ulong)pcVar2;
    param_1[2] = uVar1 + 1 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
  }
  _memmove(puVar3,"localhost",pcVar2);
LAB_003532e0:
  *(char *)((long)puVar3 + (long)pcVar2) = '\0';
  return param_1;
}



/* Entry: 0036452c; end: 003645a7;  */

void FUN_0036452c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_d8 [144];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_0035ae18(auStack_d8);
  uStack_40 = *(undefined8 *)(param_3 + 0x98);
  uStack_48 = *(undefined8 *)(param_3 + 0x90);
  uStack_30 = *(undefined8 *)(param_3 + 0xa8);
  uStack_38 = *(undefined8 *)(param_3 + 0xa0);
  *(undefined8 *)(param_3 + 0xa0) = 0;
  *(undefined8 *)(param_3 + 0xa8) = 0;
  uStack_28 = *(undefined8 *)(param_3 + 0xb0);
  *(undefined8 *)(param_3 + 0xb0) = 0;
  FUN_003640ec(param_1,auStack_d8,FUN_0039f710);
  FUN_00361fc0(auStack_d8);
  return;
}



/* Entry: 003645a8; end: 003645b7;  */

ulong * FUN_003645a8(ulong *param_1)

{
  ulong uVar1;
  char *pcVar2;
  ulong *puVar3;
  
  pcVar2 = "localhost";
  _strlen();
  if ((char *)0x7ffffffffffffff7 < pcVar2) {
    func_0x0033b318();
    if (*param_1 != 0) {
      func_0x003711f8();
    }
    return param_1;
  }
  if (pcVar2 < "") {
    *(char *)((long)param_1 + 0x17) = (char)pcVar2;
    puVar3 = param_1;
    if (pcVar2 == (char *)0x0) goto LAB_003532e0;
  }
  else {
    uVar1 = ((ulong)pcVar2 & 0xfffffffffffffff8) + 8;
    if (((ulong)pcVar2 | 7) != 0x17) {
      uVar1 = (ulong)pcVar2 | 7;
    }
    puVar3 = (ulong *)(uVar1 + 1);
    __Znwm();
    param_1[1] = (ulong)pcVar2;
    param_1[2] = uVar1 + 1 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
  }
  _memmove(puVar3,"localhost",pcVar2);
LAB_003532e0:
  *(char *)((long)puVar3 + (long)pcVar2) = '\0';
  return param_1;
}



/* Entry: 003645b8; end: 003645eb;  */

ulong FUN_003645b8(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  
  lVar2 = lRam0000000000b65d18;
  if (lRam0000000000b65d18 == 0) {
    FUN_003b171c();
  }
  lVar5 = *(long *)(lVar2 + 0xd8);
  if (*(long *)(lVar2 + 0xe0) != lVar5) {
    uVar6 = 0;
    pcVar4 = "client_channel";
    do {
      plVar3 = *(long **)(lVar5 + uVar6 * 8);
      (**(code **)(*plVar3 + 0x10))();
      iVar1 = (int)plVar3;
      if ((pcVar4 == "") && (pcVar4 = "client_channel", _memcmp(), iVar1 == 0)) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar5 = *(long *)(lVar2 + 0xd8);
    } while (uVar6 < (ulong)(*(long *)(lVar2 + 0xe0) - lVar5 >> 3));
  }
  return 0xffffffffffffffff;
}



/* Entry: 003645ec; end: 0036466f;  */

void FUN_003645ec(long param_1)

{
  dword *pdVar1;
  dword *pdStack_28;
  
  pdVar1 = &MACH_HEADER.cpusubtype;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_FUN_009dd908;
  pdStack_28 = pdVar1;
  FUN_003ead58(param_1 + 0xd8,&pdStack_28);
  pdVar1 = pdStack_28;
  pdStack_28 = (dword *)0x0;
  if (pdVar1 != (dword *)0x0) {
    (**(code **)(*(long *)pdVar1 + 8))();
  }
  return;
}



/* Entry: 00364670; end: 003653ef;  */

/* WARNING: Removing unreachable block (ram,0x00364c78) */
/* WARNING: Removing unreachable block (ram,0x00364850) */
/* WARNING: Removing unreachable block (ram,0x003646dc) */
/* WARNING: Removing unreachable block (ram,0x00364c20) */
/* WARNING: Removing unreachable block (ram,0x00364fc8) */

void FUN_00364670(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 ulong *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 ***pppuVar4;
  undefined7 uVar5;
  undefined7 uVar6;
  byte bVar7;
  ulong **ppuVar8;
  code *pcVar9;
  undefined1 uVar10;
  ulong ***pppuVar11;
  char *pcVar12;
  char *pcVar13;
  ulong uVar14;
  qword *pqVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 ****ppppuVar18;
  undefined1 extraout_w13;
  undefined1 uVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  char *pcStack_1c0;
  ulong *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 ***pppuStack_170;
  undefined7 uStack_168;
  undefined1 uStack_161;
  undefined7 uStack_160;
  byte bStack_159;
  long lStack_158;
  ulong **ppuStack_150;
  ulong **ppuStack_148;
  ulong **ppuStack_140;
  ulong **ppuStack_138;
  ulong **ppuStack_130;
  ulong **ppuStack_128;
  ulong **ppuStack_120;
  char *pcStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined1 uStack_f9;
  ulong **ppuStack_f8;
  undefined1 auStack_f0 [8];
  byte bStack_e8;
  undefined6 uStack_e7;
  undefined1 uStack_e1;
  undefined7 uStack_e0;
  undefined1 uStack_d9;
  char cStack_d1;
  char cStack_d0;
  undefined8 ***pppuStack_b8;
  undefined7 uStack_b0;
  undefined1 uStack_a9;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  char cStack_a0;
  undefined8 uStack_88;
  undefined7 uStack_80;
  undefined1 uStack_79;
  ulong ***pppuStack_78;
  ulong ***pppuStack_70;
  ulong ***pppuStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  lStack_158 = 0;
  ppuStack_150 = (ulong **)0x0;
  ppuStack_148 = (ulong **)0x0;
  FUN_00353254(&uStack_88,"loadBalancingConfig");
  lVar17 = param_4 + 0x20;
  lVar21 = lVar17;
  FUN_0035d420(lVar17,&uStack_88);
  param_4 = param_4 + 0x28;
  if (param_4 == lVar21) {
    plVar20 = (long *)0x0;
LAB_00364820:
    pppuStack_170 = (undefined8 ****)0x0;
    uStack_168 = 0;
    uStack_161 = 0;
    uStack_160 = 0;
    bStack_159 = 0;
    FUN_00353254(&uStack_88,"loadBalancingPolicy");
    lVar21 = lVar17;
    FUN_0035d420(lVar17,&uStack_88);
    if (param_4 != lVar21) {
      if (*(int *)(lVar21 + 0x38) == 4) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&pppuStack_170,lVar21 + 0x40);
        uVar22 = 0;
        do {
          if ((char)bStack_159 < '\0') {
            ppppuVar18 = (undefined8 ****)pppuStack_170;
            if (CONCAT17(uStack_161,uStack_168) <= uVar22) goto LAB_00364988;
          }
          else if (bStack_159 <= uVar22) goto LAB_00364924;
          ppppuVar18 = (undefined8 ****)pppuStack_170;
          if (-1 < (char)bStack_159) {
            ppppuVar18 = &pppuStack_170;
          }
          uVar10 = *(undefined1 *)((long)ppppuVar18 + uVar22);
          ___tolower();
          ppppuVar18 = (undefined8 ****)pppuStack_170;
          if (-1 < (char)bStack_159) {
            ppppuVar18 = &pppuStack_170;
          }
          *(undefined1 *)((long)ppppuVar18 + uVar22) = uVar10;
          uVar22 = uVar22 + 1;
        } while( true );
      }
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_188 = 0;
      FUN_003b646c(&bStack_e8,2,"field:loadBalancingPolicy error:type should be string",0x35,
                   &ppuStack_140,&uStack_188);
      if (ppuStack_150 < ppuStack_148) {
        *ppuStack_150 = (ulong *)CONCAT17(uStack_e1,CONCAT61(uStack_e7,bStack_e8));
        bStack_e8 = 0x36;
        uStack_e7 = 0;
        uStack_e1 = 0;
        ppuStack_150 = ppuStack_150 + 1;
      }
      else {
        lVar21 = (long)ppuStack_150 - lStack_158 >> 3;
        uVar22 = lVar21 + 1;
        if (uVar22 >> 0x3d != 0) {
          FUN_0035d520(&lStack_158);
          goto LAB_00365104;
        }
        pppuVar11 = &ppuStack_148;
        uVar14 = (long)ppuStack_148 - lStack_158 >> 2;
        if (uVar14 <= uVar22) {
          uVar14 = uVar22;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)ppuStack_148 - lStack_158)) {
          uVar14 = 0x1fffffffffffffff;
        }
        pppuStack_68 = pppuVar11;
        if (uVar14 == 0) {
          pppuStack_70 = (ulong ***)0x0;
        }
        else {
          FUN_0035d534();
          pppuStack_70 = pppuVar11;
        }
        pppuVar11 = pppuStack_70 + lVar21;
        uStack_88._0_7_ = SUB87(pppuStack_70,0);
        uStack_88._7_1_ = (undefined1)((ulong)pppuStack_70 >> 0x38);
        uStack_80 = SUB87(pppuVar11,0);
        uStack_79 = (undefined1)((ulong)pppuVar11 >> 0x38);
        pppuStack_70 = pppuStack_70 + uVar14;
        *pppuVar11 = (ulong **)CONCAT17(uStack_e1,CONCAT61(uStack_e7,bStack_e8));
        bStack_e8 = 0x36;
        uStack_e7 = 0;
        uStack_e1 = 0;
        pppuStack_78 = pppuVar11 + 1;
        FUN_0035d4ac(&lStack_158,&uStack_88);
        ppuVar8 = ppuStack_150;
        FUN_0035d67c(&uStack_88);
        ppuStack_150 = ppuVar8;
        if ((bStack_e8 & 1) != 0) {
          FUN_0055293c();
        }
      }
      puVar16 = &uStack_188;
      goto LAB_00364be4;
    }
    goto LAB_00364bf0;
  }
  ppuStack_140 = (ulong **)0x0;
  FUN_0035feb8(&uStack_88,lVar21 + 0x38,&ppuStack_140);
  plVar20 = (long *)CONCAT17(uStack_88._7_1_,(undefined7)uStack_88);
  if (ppuStack_140 == (ulong **)0x0) goto LAB_00364820;
  pppuStack_b8 = (undefined8 ****)0x0;
  uStack_b0 = 0;
  uStack_a9 = 0;
  uStack_a8 = 0;
  uStack_a1 = 0;
  FUN_0035d2f8(&pppuStack_b8,&ppuStack_140);
  FUN_003653f0(&bStack_e8,&pcStack_118,"field:loadBalancingConfig",0x19,&pppuStack_b8);
  if (ppuStack_150 < ppuStack_148) {
    *ppuStack_150 = (ulong *)CONCAT17(uStack_e1,CONCAT61(uStack_e7,bStack_e8));
    ppuStack_150 = ppuStack_150 + 1;
LAB_00364804:
    uStack_88._0_7_ = SUB87(&pppuStack_b8,0);
    uStack_88._7_1_ = (undefined1)((ulong)&pppuStack_b8 >> 0x38);
    FUN_0033d548(&uStack_88);
    if (((ulong)ppuStack_140 & 1) != 0) {
      FUN_0055293c();
    }
    goto LAB_00364820;
  }
  lVar21 = (long)ppuStack_150 - lStack_158 >> 3;
  uVar22 = lVar21 + 1;
  if (uVar22 >> 0x3d == 0) {
    pppuVar11 = &ppuStack_148;
    uVar14 = (long)ppuStack_148 - lStack_158 >> 2;
    if (uVar14 <= uVar22) {
      uVar14 = uVar22;
    }
    if (0x7ffffffffffffff7 < (ulong)((long)ppuStack_148 - lStack_158)) {
      uVar14 = 0x1fffffffffffffff;
    }
    pppuStack_68 = pppuVar11;
    if (uVar14 == 0) {
      pppuStack_70 = (ulong ***)0x0;
    }
    else {
      FUN_0035d534();
      pppuStack_70 = pppuVar11;
    }
    pppuVar11 = pppuStack_70 + lVar21;
    uStack_88._0_7_ = SUB87(pppuStack_70,0);
    uStack_88._7_1_ = (undefined1)((ulong)pppuStack_70 >> 0x38);
    uStack_80 = SUB87(pppuVar11,0);
    uStack_79 = (undefined1)((ulong)pppuVar11 >> 0x38);
    pppuStack_70 = pppuStack_70 + uVar14;
    *pppuVar11 = (ulong **)CONCAT17(uStack_e1,CONCAT61(uStack_e7,bStack_e8));
    bStack_e8 = 0x36;
    uStack_e7 = 0;
    uStack_e1 = 0;
    pppuStack_78 = pppuVar11 + 1;
    FUN_0035d4ac(&lStack_158,&uStack_88);
    ppuVar8 = ppuStack_150;
    FUN_0035d67c(&uStack_88);
    ppuStack_150 = ppuVar8;
    if ((bStack_e8 & 1) != 0) {
      FUN_0055293c();
    }
    goto LAB_00364804;
  }
  goto LAB_003650cc;
LAB_00364924:
  ppppuVar18 = &pppuStack_170;
LAB_00364988:
  pcStack_1c0 = (char *)((ulong)pcStack_1c0 & 0xffffffffffffff00);
  FUN_0035fd88(ppppuVar18,&pcStack_1c0);
  if (((ulong)ppppuVar18 & 1) == 0) {
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a0 = 0;
    FUN_003b646c(&bStack_e8,2,"field:loadBalancingPolicy error:Unknown lb policy",0x31,&ppuStack_140
                 ,&uStack_1a0);
    if (ppuStack_150 < ppuStack_148) {
      *ppuStack_150 = (ulong *)CONCAT17(uStack_e1,CONCAT61(uStack_e7,bStack_e8));
      bStack_e8 = 0x36;
      uStack_e7 = 0;
      uStack_e1 = 0;
      ppuStack_150 = ppuStack_150 + 1;
    }
    else {
      lVar21 = (long)ppuStack_150 - lStack_158 >> 3;
      uVar22 = lVar21 + 1;
      if (uVar22 >> 0x3d != 0) {
        FUN_0035d520(&lStack_158);
        goto LAB_00365104;
      }
      pppuVar11 = &ppuStack_148;
      uVar14 = (long)ppuStack_148 - lStack_158 >> 2;
      if (uVar14 <= uVar22) {
        uVar14 = uVar22;
      }
      if (0x7ffffffffffffff7 < (ulong)((long)ppuStack_148 - lStack_158)) {
        uVar14 = 0x1fffffffffffffff;
      }
      pppuStack_68 = pppuVar11;
      if (uVar14 == 0) {
        pppuStack_70 = (ulong ***)0x0;
      }
      else {
        FUN_0035d534();
        pppuStack_70 = pppuVar11;
      }
      pppuVar11 = pppuStack_70 + lVar21;
      uStack_88._0_7_ = SUB87(pppuStack_70,0);
      uStack_88._7_1_ = (undefined1)((ulong)pppuStack_70 >> 0x38);
      uStack_80 = SUB87(pppuVar11,0);
      uStack_79 = (undefined1)((ulong)pppuVar11 >> 0x38);
      pppuStack_70 = pppuStack_70 + uVar14;
      *pppuVar11 = (ulong **)CONCAT17(uStack_e1,CONCAT61(uStack_e7,bStack_e8));
      bStack_e8 = 0x36;
      uStack_e7 = 0;
      uStack_e1 = 0;
      pppuStack_78 = pppuVar11 + 1;
      FUN_0035d4ac(&lStack_158,&uStack_88);
      ppuVar8 = ppuStack_150;
      FUN_0035d67c(&uStack_88);
      ppuStack_150 = ppuVar8;
      if ((bStack_e8 & 1) != 0) {
        FUN_0055293c();
      }
    }
    puVar16 = &uStack_1a0;
LAB_00364be4:
    uStack_88._0_7_ = SUB87(puVar16,0);
    uStack_88._7_1_ = (undefined1)((ulong)puVar16 >> 0x38);
    FUN_0033d548(&uStack_88);
  }
  else if ((char)pcStack_1c0 != '\0') {
    uStack_88._0_7_ = 0x8c1a17;
    uStack_88._7_1_ = 0;
    uStack_80 = 0x20;
    uStack_79 = 0;
    uVar22 = CONCAT17(uStack_161,uStack_168);
    pppuStack_b8 = pppuStack_170;
    if (-1 < (char)bStack_159) {
      uVar22 = (ulong)bStack_159;
      pppuStack_b8 = &pppuStack_170;
    }
    uStack_b0 = (undefined7)uVar22;
    uStack_a9 = (undefined1)(uVar22 >> 0x38);
    bStack_e8 = 0x38;
    uStack_e7 = 0x8c1a;
    uStack_e1 = 0;
    uStack_e0 = 0x3b;
    uStack_d9 = 0;
    FUN_00575ddc(&pcStack_118,&uStack_88,&pppuStack_b8,&bStack_e8);
    uVar22 = uStack_110;
    pcVar12 = pcStack_118;
    if (-1 < (long)uStack_108) {
      uVar22 = uStack_108 >> 0x38;
      pcVar12 = (char *)&pcStack_118;
    }
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    puStack_1b8 = (ulong *)0x0;
    FUN_003b646c(&ppuStack_f8,2,pcVar12,uVar22,&uStack_f9,&puStack_1b8);
    if (ppuStack_150 < ppuStack_148) {
      *ppuStack_150 = (ulong *)ppuStack_f8;
      ppuStack_f8 = (ulong **)0x36;
      ppuStack_150 = ppuStack_150 + 1;
    }
    else {
      lVar21 = (long)ppuStack_150 - lStack_158 >> 3;
      uVar22 = lVar21 + 1;
      if (uVar22 >> 0x3d != 0) {
        FUN_0035d520(&lStack_158);
        goto LAB_00365104;
      }
      pppuVar11 = &ppuStack_148;
      uVar14 = (long)ppuStack_148 - lStack_158 >> 2;
      if (uVar14 <= uVar22) {
        uVar14 = uVar22;
      }
      if (0x7ffffffffffffff7 < (ulong)((long)ppuStack_148 - lStack_158)) {
        uVar14 = 0x1fffffffffffffff;
      }
      ppuStack_120 = (ulong **)pppuVar11;
      if (uVar14 == 0) {
        ppuStack_140 = (ulong **)0x0;
      }
      else {
        FUN_0035d534();
        ppuStack_140 = (ulong **)pppuVar11;
      }
      ppuStack_138 = ppuStack_140 + lVar21;
      ppuStack_128 = ppuStack_140 + uVar14;
      pppuVar11 = (ulong ***)(ppuStack_138 + 1);
      *ppuStack_138 = (ulong *)ppuStack_f8;
      ppuStack_f8 = (ulong **)0x36;
      ppuStack_130 = (ulong **)pppuVar11;
      FUN_0035d4ac(&lStack_158,&ppuStack_140);
      ppuVar8 = ppuStack_150;
      FUN_0035d67c(&ppuStack_140);
      ppuStack_150 = ppuVar8;
      if (((ulong)ppuStack_f8 & 1) != 0) {
        FUN_0055293c();
      }
    }
    ppuStack_140 = &puStack_1b8;
    FUN_0033d548(&ppuStack_140);
    if ((long)uStack_108 < 0) {
      __ZdlPv(pcStack_118);
    }
  }
LAB_00364bf0:
  pppuStack_b8 = (undefined8 ***)((ulong)pppuStack_b8 & 0xffffffffffffff00);
  cStack_a0 = '\0';
  FUN_00353254(&uStack_88,"healthCheckConfig");
  FUN_0035d420(lVar17,&uStack_88);
  if (param_4 != lVar17) {
    pcStack_1c0 = (char *)0x0;
    if (*(int *)(lVar17 + 0x38) == 5) {
      ppuStack_140 = (ulong **)0x0;
      ppuStack_138 = (ulong **)0x0;
      ppuStack_130 = (ulong **)0x0;
      bStack_e8 = 0;
      cStack_d0 = '\0';
      FUN_00353254(&uStack_88,"serviceName");
      lVar21 = lVar17 + 0x58;
      FUN_0035d420(lVar21,&uStack_88);
      if (lVar17 + 0x60 != lVar21) {
        if (*(int *)(lVar21 + 0x38) == 4) {
          FUN_003657a8(&bStack_e8,lVar21 + 0x40);
        }
        else {
          uStack_110 = 0;
          uStack_108 = 0;
          pcStack_118 = (char *)0x0;
          FUN_003b646c(&ppuStack_f8,2,"field:serviceName error:should be of type string",0x30,
                       &uStack_f9,&pcStack_118);
          if (ppuStack_138 < ppuStack_130) {
            *ppuStack_138 = (ulong *)ppuStack_f8;
            ppuStack_f8 = (ulong **)0x36;
            ppuStack_138 = ppuStack_138 + 1;
          }
          else {
            lVar17 = (long)ppuStack_138 - (long)ppuStack_140 >> 3;
            uVar22 = lVar17 + 1;
            if (uVar22 >> 0x3d != 0) {
              FUN_0035d520(&ppuStack_140);
              goto LAB_00365104;
            }
            pppuVar11 = &ppuStack_130;
            uVar14 = (long)ppuStack_130 - (long)ppuStack_140 >> 2;
            if (uVar14 <= uVar22) {
              uVar14 = uVar22;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)ppuStack_130 - (long)ppuStack_140)) {
              uVar14 = 0x1fffffffffffffff;
            }
            pppuStack_68 = pppuVar11;
            if (uVar14 == 0) {
              pppuStack_70 = (ulong ***)0x0;
            }
            else {
              FUN_0035d534();
              pppuStack_70 = pppuVar11;
            }
            pppuVar11 = pppuStack_70 + lVar17;
            uStack_88._0_7_ = SUB87(pppuStack_70,0);
            uStack_88._7_1_ = (undefined1)((ulong)pppuStack_70 >> 0x38);
            uStack_80 = SUB87(pppuVar11,0);
            uStack_79 = (undefined1)((ulong)pppuVar11 >> 0x38);
            pppuStack_70 = pppuStack_70 + uVar14;
            *pppuVar11 = ppuStack_f8;
            ppuStack_f8 = (ulong **)0x36;
            pppuStack_78 = pppuVar11 + 1;
            FUN_0035d4ac(&ppuStack_140,&uStack_88);
            ppuVar8 = ppuStack_138;
            FUN_0035d67c(&uStack_88);
            ppuStack_138 = ppuVar8;
            if (((ulong)ppuStack_f8 & 1) != 0) {
              FUN_0055293c();
            }
          }
          uStack_88._0_7_ = SUB87(&pcStack_118,0);
          uStack_88._7_1_ = (undefined1)((ulong)&pcStack_118 >> 0x38);
          FUN_0033d548(&uStack_88);
        }
      }
      FUN_003653f0(&uStack_88,auStack_f0,"field:healthCheckConfig",0x17,&ppuStack_140);
      pcVar12 = (char *)CONCAT17(uStack_88._7_1_,(undefined7)uStack_88);
      pcVar13 = pcStack_1c0;
      if (pcVar12 == pcStack_1c0) {
LAB_00364e5c:
        if (((ulong)pcVar13 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        uStack_88._0_7_ = 0x36;
        uStack_88._7_1_ = 0;
        uVar22 = (ulong)pcStack_1c0 & 1;
        pcStack_1c0 = pcVar12;
        if (uVar22 != 0) {
          FUN_0055293c();
          pcVar13 = (char *)CONCAT17(uStack_88._7_1_,(undefined7)uStack_88);
          goto LAB_00364e5c;
        }
      }
      uStack_88._0_7_ = SUB87(&ppuStack_140,0);
      uStack_88._7_1_ = (undefined1)((ulong)&ppuStack_140 >> 0x38);
      FUN_0033d548(&uStack_88);
    }
    else {
      uStack_80 = 0;
      uStack_79 = 0;
      pppuStack_78 = (ulong ***)0x0;
      uStack_88._0_7_ = 0;
      uStack_88._7_1_ = 0;
      FUN_003b646c(&pcStack_118,2,"field:healthCheckConfig error:should be of type object",0x36,
                   auStack_f0,&uStack_88);
      pcVar12 = pcStack_1c0;
      if (pcStack_118 == pcStack_1c0) {
LAB_00364cf8:
        if (((ulong)pcVar12 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        pcStack_1c0 = pcStack_118;
        pcStack_118 = segment_command_00000020.segname + 0xe;
        if (((ulong)pcVar12 & 1) != 0) {
          FUN_0055293c();
          pcVar12 = pcStack_118;
          goto LAB_00364cf8;
        }
      }
      ppuStack_140 = (ulong **)&uStack_88;
      FUN_0033d548(&ppuStack_140);
      bStack_e8 = 0;
      cStack_d0 = '\0';
    }
    func_0x00365810(&pppuStack_b8,&bStack_e8);
    if ((cStack_d0 != '\0') && (cStack_d1 < '\0')) {
      __ZdlPv(CONCAT17(uStack_e1,CONCAT61(uStack_e7,bStack_e8)));
    }
    if ((pcStack_1c0 != (char *)0x0) &&
       (FUN_0035d2f8(&lStack_158,&pcStack_1c0), ((ulong)pcStack_1c0 & 1) != 0)) {
      FUN_0055293c();
    }
  }
  FUN_003653f0(&uStack_88,&bStack_e8,"Client channel global parser",0x1c,&lStack_158);
  uVar14 = *param_5;
  uVar22 = CONCAT17(uStack_88._7_1_,(undefined7)uStack_88);
  if (uVar22 == uVar14) {
LAB_00364efc:
    if ((uVar14 & 1) != 0) {
      FUN_0055293c();
    }
    uVar22 = *param_5;
  }
  else {
    *param_5 = uVar22;
    uStack_88._0_7_ = 0x36;
    uStack_88._7_1_ = 0;
    if ((uVar14 & 1) != 0) {
      FUN_0055293c();
      uVar14 = CONCAT17(uStack_88._7_1_,(undefined7)uStack_88);
      goto LAB_00364efc;
    }
  }
  if (uVar22 == 0) {
    pqVar15 = &segment_command_00000020.fileoff;
    __Znwm();
    uVar19 = uStack_a1;
    ppppuVar18 = (undefined8 ****)pppuStack_b8;
    bVar7 = bStack_159;
    uVar6 = uStack_160;
    uVar10 = uStack_161;
    uVar5 = uStack_168;
    pppuVar4 = pppuStack_170;
    uStack_88._0_7_ = uStack_168;
    uStack_88._7_1_ = uStack_161;
    uStack_80 = uStack_160;
    uStack_168 = 0;
    uStack_161 = 0;
    uStack_160 = 0;
    bStack_159 = 0;
    pppuStack_170 = (undefined8 ****)0x0;
    if (cStack_a0 == '\0') {
      ppppuVar18 = (undefined8 ****)0x0;
      uVar19 = extraout_w13;
    }
    else {
      bStack_e8 = (byte)uStack_b0;
      uStack_e7 = (undefined6)((uint7)uStack_b0 >> 8);
      uStack_e1 = uStack_a9;
      uStack_e0 = uStack_a8;
      uStack_b0 = 0;
      uStack_a9 = 0;
      uStack_a8 = 0;
      uStack_a1 = 0;
      pppuStack_b8 = (undefined8 ****)0x0;
    }
    *pqVar15 = (qword)&PTR_DAT_009dd968;
    pqVar15[1] = (qword)plVar20;
    pqVar15[2] = (qword)pppuVar4;
    pqVar15[3] = CONCAT17(uVar10,uVar5);
    *(ulong *)((long)pqVar15 + 0x1f) = CONCAT71(uVar6,uVar10);
    *(byte *)((long)pqVar15 + 0x27) = bVar7;
    *(undefined1 *)(pqVar15 + 5) = 0;
    *(undefined1 *)(pqVar15 + 8) = 0;
    if (cStack_a0 != '\0') {
      pqVar15[5] = (qword)ppppuVar18;
      pqVar15[6] = CONCAT17(uStack_e1,CONCAT61(uStack_e7,bStack_e8));
      *(ulong *)((long)pqVar15 + 0x37) = CONCAT71(uStack_e0,uStack_e1);
      *(undefined1 *)((long)pqVar15 + 0x3f) = uVar19;
      *(undefined1 *)(pqVar15 + 8) = 1;
    }
    plVar20 = (long *)0x0;
  }
  else {
    pqVar15 = (qword *)0x0;
  }
  *param_1 = pqVar15;
  if ((char)bStack_159 < '\0') {
    __ZdlPv(pppuStack_170);
  }
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 1;
    do {
      lVar17 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar17 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar17 + -1 == 0) {
      (**(code **)(*plVar20 + 8))(plVar20);
    }
  }
  uStack_88._0_7_ = SUB87(&lStack_158,0);
  uStack_88._7_1_ = (undefined1)((ulong)&lStack_158 >> 0x38);
  FUN_0033d548(&uStack_88);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
LAB_003650cc:
  FUN_0035d520(&lStack_158);
LAB_00365104:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x365108);
  (*pcVar9)();
}



/* Entry: 003653f0; end: 0036548f;  */

void FUN_003653f0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  *param_1 = 0;
  if (param_5[1] - *param_5 != 0) {
    FUN_003bdf2c(&lStack_38,2,param_3,param_4,param_2,param_5[1] - *param_5 >> 3);
    if (lStack_38 != 0) {
      *param_1 = lStack_38;
    }
    lVar1 = *param_5;
    lVar2 = param_5[1];
    if (lVar2 != lVar1) {
      do {
        lVar2 = lVar2 + -8;
        FUN_0033d5cc(param_5 + 2,lVar2);
      } while (lVar2 != lVar1);
    }
    param_5[1] = lVar1;
  }
  return;
}



/* Entry: 00365490; end: 0036578f;  */

void FUN_00365490(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 ulong *param_5)

{
  long lVar1;
  ulong *puVar2;
  code *pcVar3;
  ulong **ppuVar4;
  ulong uVar5;
  dword *pdVar6;
  ulong uVar7;
  ushort uVar8;
  long lVar9;
  short sVar10;
  ulong *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_91;
  ulong *puStack_90;
  ulong *puStack_88;
  ulong *puStack_80;
  ulong *puStack_78;
  ulong **ppuStack_70;
  ulong **ppuStack_68;
  ulong **ppuStack_60;
  ulong **ppuStack_58;
  ulong **ppuStack_50;
  ulong uStack_48;
  
  puStack_88 = (ulong *)0x0;
  puStack_80 = (ulong *)0x0;
  puStack_78 = (ulong *)0x0;
  FUN_00353254(&ppuStack_70,"waitForReady");
  lVar1 = param_4 + 0x20;
  lVar9 = lVar1;
  FUN_0035d420(lVar1,&ppuStack_70);
  if ((long)ppuStack_60 < 0) {
    __ZdlPv(ppuStack_70);
  }
  if (param_4 + 0x28 == lVar9) {
LAB_00365620:
    uVar8 = 0;
    sVar10 = 0;
  }
  else {
    if (*(int *)(lVar9 + 0x38) == 1) {
      uVar8 = 1;
    }
    else {
      if (*(int *)(lVar9 + 0x38) != 2) {
        uStack_a8 = 0;
        uStack_a0 = 0;
        puStack_b0 = (ulong *)0x0;
        FUN_003b646c(&puStack_90,2,"field:waitForReady error:Type should be true/false",0x32,
                     &uStack_91,&puStack_b0);
        if (puStack_80 < puStack_78) {
          *puStack_80 = (ulong)puStack_90;
          puStack_90 = (ulong *)0x36;
          puStack_80 = puStack_80 + 1;
        }
        else {
          lVar9 = (long)puStack_80 - (long)puStack_88 >> 3;
          uVar7 = lVar9 + 1;
          if (uVar7 >> 0x3d != 0) {
            FUN_0035d520(&puStack_88);
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x365700);
            (*pcVar3)();
          }
          ppuVar4 = &puStack_78;
          uVar5 = (long)puStack_78 - (long)puStack_88 >> 2;
          if (uVar5 <= uVar7) {
            uVar5 = uVar7;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)puStack_78 - (long)puStack_88)) {
            uVar5 = 0x1fffffffffffffff;
          }
          ppuStack_50 = ppuVar4;
          if (uVar5 == 0) {
            ppuStack_70 = (ulong **)0x0;
          }
          else {
            FUN_0035d534();
            ppuStack_70 = ppuVar4;
          }
          ppuStack_68 = ppuStack_70 + lVar9;
          ppuStack_58 = ppuStack_70 + uVar5;
          ppuVar4 = ppuStack_68 + 1;
          *ppuStack_68 = puStack_90;
          puStack_90 = (ulong *)0x36;
          ppuStack_60 = ppuVar4;
          FUN_0035d4ac(&puStack_88,&ppuStack_70);
          puVar2 = puStack_80;
          FUN_0035d67c(&ppuStack_70);
          puStack_80 = puVar2;
          if (((ulong)puStack_90 & 1) != 0) {
            FUN_0055293c();
          }
        }
        ppuStack_70 = &puStack_b0;
        FUN_0033d548(&ppuStack_70);
        goto LAB_00365620;
      }
      uVar8 = 0;
    }
    sVar10 = 1;
  }
  ppuStack_70 = (ulong **)0x0;
  FUN_003d2d74(lVar1,"timeout",7,&ppuStack_70,&puStack_88,0);
  FUN_003653f0(&uStack_48,&puStack_90,"Client channel parser",0x15,&puStack_88);
  uVar7 = uStack_48;
  uVar5 = *param_5;
  if (uStack_48 != uVar5) {
    *param_5 = uStack_48;
    uStack_48 = 0x36;
    if ((uVar5 & 1) == 0) goto LAB_0036569c;
    FUN_0055293c();
    uVar5 = uStack_48;
  }
  if ((uVar5 & 1) != 0) {
    FUN_0055293c();
  }
  uVar7 = *param_5;
LAB_0036569c:
  if (uVar7 == 0) {
    pdVar6 = &MACH_HEADER.flags;
    __Znwm();
    *(undefined ***)pdVar6 = &PTR_FUN_009dd9b0;
    *(ulong ***)(pdVar6 + 2) = ppuStack_70;
    *(ushort *)(pdVar6 + 4) = uVar8 | sVar10 << 8;
  }
  else {
    pdVar6 = (dword *)0x0;
  }
  *param_1 = pdVar6;
  ppuStack_70 = &puStack_88;
  FUN_0033d548(&ppuStack_70);
  return;
}



/* Entry: 00365790; end: 003657a7;  */

void FUN_00365790(void)

{
  return;
}



/* Entry: 003657a8; end: 003659b3;  */

undefined8 * FUN_003657a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 3) == '\0') {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      FUN_002971d4(param_1,*param_2,param_2[1]);
    }
    else {
      uVar2 = param_2[1];
      uVar1 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar2;
      *param_1 = uVar1;
    }
    *(undefined1 *)(param_1 + 3) = 1;
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1);
  }
  return param_1;
}



/* Entry: 003659b4; end: 003659bb;  */

void FUN_003659b4(void)

{
  return;
}



/* Entry: 003659bc; end: 00365ebf;  */

/* WARNING: Removing unreachable block (ram,0x003483dc) */
/* WARNING: Type propagation algorithm not settling */

void FUN_003659bc(long param_1,long *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong *puVar14;
  ulong uStack_118;
  char *pcStack_110;
  long lStack_108;
  undefined8 *apuStack_100 [19];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar13 = *(long **)(param_1 + 0x10);
  lVar6 = plVar13[0x39];
  if (lVar6 == 0) {
    puVar12 = (undefined8 *)plVar13[0x36];
    if (puVar12 != (undefined8 *)0x0) {
      if (((ulong)puVar12 & 1) != 0) {
        piVar9 = (int *)((long)puVar12 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar3) {
            *piVar9 = *piVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      apuStack_100[0] = puVar12;
      FUN_004007f4(param_2,apuStack_100,plVar13[0x34]);
      if (((ulong)apuStack_100[0] & 1) != 0) {
        FUN_0055293c();
      }
LAB_00365c3c:
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
        return;
      }
      goto LAB_00365e24;
    }
    bVar1 = *(byte *)(param_2 + 2);
    if ((bVar1 >> 6 & 1) == 0) {
      if ((bVar1 & 1) != 0) {
        lVar6 = 0;
LAB_00365ac8:
        if (plVar13[lVar6 * 2 + 0x3b] != 0) {
          func_0x00771ee0();
          goto LAB_00365e44;
        }
        plVar13[lVar6 * 2 + 0x3b] = (long)param_2;
        *(undefined1 *)(plVar13 + lVar6 * 2 + 0x3c) = 0;
        bVar1 = *(byte *)(param_2 + 2);
        if ((bVar1 & 1) != 0) {
          *(byte *)(plVar13 + 0x47) = *(byte *)(plVar13 + 0x47) | 1;
          apuStack_100[0] = (undefined8 *)((ulong)apuStack_100[0] & 0xffffffff00000000);
          FUN_00367450(*(undefined8 *)param_2[1],apuStack_100);
          plVar13[0x3a] = plVar13[0x3a] + ((ulong)apuStack_100[0] & 0xffffffff);
          bVar1 = *(byte *)(param_2 + 2);
        }
        if ((bVar1 >> 2 & 1) != 0) {
          *(byte *)(plVar13 + 0x47) = *(byte *)(plVar13 + 0x47) | 2;
          plVar13[0x3a] = plVar13[0x3a] + *(long *)(*(long *)(param_2[1] + 0x28) + 0x20);
          bVar1 = *(byte *)(param_2 + 2);
        }
        if ((bVar1 >> 1 & 1) != 0) {
          *(byte *)(plVar13 + 0x47) = *(byte *)(plVar13 + 0x47) | 4;
        }
        if (*(ulong *)(*plVar13 + 8) < (ulong)plVar13[0x3a]) {
          FUN_003666b4(plVar13,plVar13[0x38]);
        }
        bVar1 = *(byte *)(plVar13 + 0x47);
        if ((bVar1 >> 4 & 1) == 0) {
          if (plVar13[0x38] == 0) {
            if (((bVar1 & 0x28) == 8) &&
               ((plVar13[3] == 0 || (*(char *)(plVar13[3] + 0x30) == '\0')))) {
              FUN_003667e8(plVar13,plVar13 + lVar6 * 2 + 0x3b);
              FUN_00366844(apuStack_100,plVar13,*(long *)(plVar13[0x35] + 0x40) + 0x28,0);
              puVar12 = apuStack_100[0];
              apuStack_100[0] = (undefined8 *)0x0;
              puVar7 = (undefined8 *)plVar13[0x39];
              plVar13[0x39] = (long)puVar12;
              if (puVar7 != (undefined8 *)0x0) {
                (**(code **)*puVar7)();
                puVar12 = apuStack_100[0];
                apuStack_100[0] = (undefined8 *)0x0;
                if (puVar12 != (undefined8 *)0x0) {
                  (**(code **)*puVar12)();
                }
              }
              FUN_003482a0(plVar13[0x39],param_2);
            }
            else {
              *(byte *)(plVar13 + 0x47) = bVar1 | 0x20;
              FUN_00366970(plVar13,0);
            }
          }
          else {
            FUN_00366d34();
          }
        }
        else {
          FUN_003bb974(plVar13[0x34],"added pending batch while retry timer pending");
        }
        goto LAB_00365c3c;
      }
      if ((bVar1 >> 2 & 1) != 0) {
        lVar6 = 1;
        goto LAB_00365ac8;
      }
      if ((bVar1 >> 1 & 1) != 0) {
        lVar6 = 2;
        goto LAB_00365ac8;
      }
      if ((bVar1 >> 3 & 1) != 0) {
        lVar6 = 3;
        goto LAB_00365ac8;
      }
      if ((bVar1 >> 4 & 1) != 0) {
        lVar6 = 4;
        goto LAB_00365ac8;
      }
      if ((bVar1 >> 5 & 1) != 0) {
        lVar6 = 5;
        goto LAB_00365ac8;
      }
      goto LAB_00365e28;
    }
    lVar6 = param_2[1];
    uVar8 = *(ulong *)(lVar6 + 0x98);
    if (uVar8 != 0) {
      if ((uVar8 & 1) != 0) {
        piVar9 = (int *)(uVar8 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar3) {
            *piVar9 = *piVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar8 = *(ulong *)(lVar6 + 0x98);
      }
      plVar13[0x36] = uVar8;
      if ((uVar8 & 1) == 0) {
        if (uVar8 == 0) goto LAB_00365e40;
      }
      else {
        piVar9 = (int *)(uVar8 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar3) {
            *piVar9 = *piVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      piVar9 = (int *)(uVar8 - 1);
      lVar6 = 0;
      apuStack_100[0] = (undefined8 *)0x0;
      do {
        lVar10 = plVar13[lVar6 * 2 + 0x3b];
        if (lVar10 != 0) {
          *(long **)(lVar10 + 0x18) = plVar13;
          *(code **)(lVar10 + 0x28) = FUN_00366dbc;
          *(long *)(lVar10 + 0x30) = lVar10;
          *(undefined8 *)(lVar10 + 0x38) = 0;
          if ((uVar8 & 1) != 0) {
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
              if (bVar3) {
                *piVar9 = *piVar9 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          lStack_108 = lVar10 + 0x20;
          pcStack_110 = "PendingBatchesFail";
          uStack_118 = uVar8;
          FUN_0034accc(apuStack_100,&lStack_108,&uStack_118,&pcStack_110);
          if ((uStack_118 & 1) != 0) {
            FUN_0055293c();
          }
          FUN_003667e8(plVar13,plVar13 + lVar6 * 2 + 0x3b);
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 != 6);
      FUN_003470dc(apuStack_100,plVar13[0x34]);
      FUN_0034afe4(apuStack_100);
      if ((uVar8 & 1) != 0) {
        FUN_0055293c(uVar8);
      }
      if (plVar13[0x38] == 0) {
        if ((*(byte *)(plVar13 + 0x47) >> 4 & 1) != 0) {
          *(byte *)(plVar13 + 0x47) = *(byte *)(plVar13 + 0x47) & 0xef;
          func_0x003cf020(plVar13 + 0x48);
          func_0x00366768(plVar13);
        }
        apuStack_100[0] = (undefined8 *)plVar13[0x36];
        if (((ulong)apuStack_100[0] & 1) != 0) {
          piVar9 = (int *)((long)apuStack_100[0] + -1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar3) {
              *piVar9 = *piVar9 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        FUN_004007f4(param_2,apuStack_100,plVar13[0x34]);
        if (((ulong)apuStack_100[0] & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        FUN_003666b4(plVar13);
        lVar6 = plVar13[0x38];
        if (*(char *)(lVar6 + 0x90) != '\0') {
          *(undefined1 *)(lVar6 + 0x90) = 0;
          func_0x003cf020(lVar6 + 0x38);
        }
        FUN_003671b8(lVar6);
        FUN_003482a0(*(undefined8 *)(lVar6 + 0x28),param_2);
      }
      goto LAB_00365c3c;
    }
  }
  else {
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
      plVar13 = *(long **)(lVar6 + 0x78);
      if (plVar13 != (long *)0x0) {
        if ((*(byte *)(param_2 + 2) >> 6 & 1) != 0) {
          uVar8 = *(ulong *)(param_2[1] + 0x98);
          if ((uVar8 & 1) != 0) {
            piVar9 = (int *)(uVar8 - 1);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
              if (bVar3) {
                *piVar9 = *piVar9 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          (**(code **)(*plVar13 + 0x48))(plVar13,&stack0xffffffffffffffc8);
          if ((uVar8 & 1) != 0) {
            FUN_0055293c();
          }
        }
        bVar1 = *(byte *)(param_2 + 2);
        if ((bVar1 & 1) != 0) {
          (**(code **)(**(long **)(lVar6 + 0x78) + 0x10))
                    (*(long **)(lVar6 + 0x78),*(undefined8 *)param_2[1],
                     *(undefined4 *)((undefined8 *)param_2[1] + 1));
          lVar10 = *param_2;
          *(undefined8 *)(lVar6 + 0xf8) = *(undefined8 *)(param_2[1] + 0x10);
          *(code **)(lVar6 + 0x108) = FUN_003485d0;
          *(long *)(lVar6 + 0x110) = lVar6;
          *(undefined8 *)(lVar6 + 0x118) = 0;
          *(long *)(lVar6 + 0x120) = lVar10;
          *param_2 = lVar6 + 0x100;
          bVar1 = *(byte *)(param_2 + 2);
        }
        if ((bVar1 >> 2 & 1) != 0) {
          (**(code **)(**(long **)(lVar6 + 0x78) + 0x28))
                    (*(long **)(lVar6 + 0x78),*(undefined8 *)(param_2[1] + 0x28));
          bVar1 = *(byte *)(param_2 + 2);
        }
        if ((bVar1 >> 1 & 1) != 0) {
          (**(code **)(**(long **)(lVar6 + 0x78) + 0x20))
                    (*(long **)(lVar6 + 0x78),*(undefined8 *)(param_2[1] + 0x18));
          bVar1 = *(byte *)(param_2 + 2);
        }
        if ((bVar1 >> 3 & 1) != 0) {
          lVar10 = param_2[1];
          *(undefined8 *)(lVar6 + 0x128) = *(undefined8 *)(lVar10 + 0x38);
          uVar11 = *(undefined8 *)(lVar10 + 0x48);
          *(code **)(lVar6 + 0x138) = FUN_00348660;
          *(long *)(lVar6 + 0x140) = lVar6;
          *(undefined8 *)(lVar6 + 0x148) = 0;
          *(undefined8 *)(lVar6 + 0x150) = uVar11;
          *(long *)(param_2[1] + 0x48) = lVar6 + 0x130;
          bVar1 = *(byte *)(param_2 + 2);
        }
        if ((bVar1 >> 4 & 1) != 0) {
          lVar10 = param_2[1];
          *(undefined8 *)(lVar6 + 0x158) = *(undefined8 *)(lVar10 + 0x60);
          uVar11 = *(undefined8 *)(lVar10 + 0x78);
          *(code **)(lVar6 + 0x168) = FUN_003486fc;
          *(long *)(lVar6 + 0x170) = lVar6;
          *(undefined8 *)(lVar6 + 0x178) = 0;
          *(undefined8 *)(lVar6 + 0x180) = uVar11;
          *(long *)(param_2[1] + 0x78) = lVar6 + 0x160;
        }
      }
      if ((*(byte *)(param_2 + 2) >> 5 & 1) != 0) {
        lVar10 = param_2[1];
        uVar11 = *(undefined8 *)(lVar10 + 0x80);
        *(undefined8 *)(lVar6 + 400) = *(undefined8 *)(lVar10 + 0x88);
        *(undefined8 *)(lVar6 + 0x188) = uVar11;
        uVar11 = *(undefined8 *)(lVar10 + 0x90);
        *(code **)(lVar6 + 0x1a0) = FUN_00348794;
        *(long *)(lVar6 + 0x1a8) = lVar6;
        *(undefined8 *)(lVar6 + 0x1b0) = 0;
        *(undefined8 *)(lVar6 + 0x1b8) = uVar11;
        *(long *)(param_2[1] + 0x90) = lVar6 + 0x198;
      }
      if (*(long *)(lVar6 + 0xf0) == 0) {
        puVar14 = (ulong *)(lVar6 + 0x88);
        uVar8 = *puVar14;
        if (uVar8 == 0) {
          if ((*(byte *)(param_2 + 2) >> 6 & 1) == 0) {
            FUN_00347f10(lVar6,param_2);
            if ((*(byte *)(param_2 + 2) & 1) != 0) {
              FUN_00348a34(lVar6,&stack0xffffffffffffffa8);
              return;
            }
            FUN_003bb974(*(undefined8 *)(lVar6 + 0x50),
                         "batch does not include send_initial_metadata");
            return;
          }
          FUN_003450b4(puVar14,param_2[1] + 0x98);
          if ((*puVar14 & 1) != 0) {
            piVar9 = (int *)(*puVar14 - 1);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
              if (bVar3) {
                *piVar9 = *piVar9 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          FUN_00347fc4(lVar6,&stack0xffffffffffffffb8,FUN_00348a2c);
          FUN_0033c494(&stack0xffffffffffffffb8);
          if ((*puVar14 & 1) != 0) {
            piVar9 = (int *)(*puVar14 - 1);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
              if (bVar3) {
                *piVar9 = *piVar9 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          FUN_004007f4(param_2,&stack0xffffffffffffffb0,*(undefined8 *)(lVar6 + 0x50));
          puVar5 = &stack0xffffffffffffffb0;
        }
        else {
          if ((uVar8 & 1) != 0) {
            piVar9 = (int *)(uVar8 - 1);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
              if (bVar3) {
                *piVar9 = *piVar9 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          FUN_004007f4(param_2,&stack0xffffffffffffffc0,*(undefined8 *)(lVar6 + 0x50));
          puVar5 = &stack0xffffffffffffffc0;
        }
        FUN_0033c494(puVar5);
      }
      else {
        FUN_00371108(*(long *)(lVar6 + 0xf0),param_2);
      }
      return;
    }
LAB_00365e24:
    ___stack_chk_fail();
LAB_00365e28:
    func_0x00338df0("return (size_t)-1",
                    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/retry_filter.cc"
                    ,0x988);
  }
LAB_00365e40:
  func_0x00771f14();
LAB_00365e44:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x365e48);
  (*pcVar4)();
}



/* Entry: 00365ec0; end: 00365ec3;  */

void FUN_00365ec0(void)

{
  return;
}



/* Entry: 00365ec4; end: 003660f3;  */

void FUN_00365ec4(undefined8 *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 uStack_50;
  double dStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar6 = *(long *)(param_2 + 8);
  plVar2 = *(long **)(param_2 + 0x10);
  *plVar2 = lVar6;
  plVar2[2] = 0;
  lVar8 = 0;
  if (*(long *)(lVar6 + 0x10) != 0) {
    plVar9 = (long *)(*(long *)(lVar6 + 0x10) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar8 = *(long *)(lVar6 + 0x10);
  }
  plVar2[2] = lVar8;
  if (((param_3[2] == 0) || (lVar8 = *(long *)(param_3[2] + 0x40), lVar8 == 0)) ||
     (plVar9 = *(long **)(lVar8 + 8), plVar9 == (long *)0x0)) {
    plVar2[3] = 0;
  }
  else {
    lVar6 = *(long *)(*plVar9 + *(long *)(lVar6 + 0x18) * 8);
    plVar2[3] = lVar6;
    if (lVar6 != 0) {
      uStack_50 = *(undefined8 *)(lVar6 + 0x10);
      uStack_38 = *(undefined8 *)(lVar6 + 0x18);
      dStack_48 = (double)*(float *)(lVar6 + 0x20);
      goto LAB_00365f74;
    }
  }
  uStack_38 = 0;
  uStack_50 = 0;
  dStack_48 = 0.0;
LAB_00365f74:
  uStack_40 = 0x3fc999999999999a;
  func_0x003a15f0(plVar2 + 4,&uStack_50);
  plVar9 = (long *)param_3[3];
  plVar10 = (long *)*plVar9;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar10) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar6 = *plVar9;
  lVar11 = plVar9[3];
  lVar8 = plVar9[2];
  plVar2[0x2e] = plVar9[1];
  plVar2[0x2d] = lVar6;
  plVar2[0x30] = lVar11;
  plVar2[0x2f] = lVar8;
  plVar2[0x31] = param_3[5];
  puVar5 = (ulong *)param_3[6];
  plVar2[0x32] = (long)puVar5;
  plVar2[0x33] = *param_3;
  plVar2[0x34] = param_3[7];
  plVar2[0x35] = param_3[2];
  plVar2[0x36] = 0;
  do {
    uVar7 = *puVar5;
    uVar1 = uVar7 + 0x20;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar4) {
      *puVar5 = uVar1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (puVar5[2] < uVar1) {
    func_0x003d6048(puVar5,0x20);
  }
  else {
    puVar5 = (ulong *)((long)puVar5 + uVar7 + 0x30);
  }
  *puVar5 = (ulong)&PTR_FUN_009ddb38;
  puVar5[1] = 1;
  puVar5[2] = 0;
  plVar9 = plVar2 + 0x3b;
  plVar2[0x37] = (long)puVar5;
  plVar2[0x38] = 0;
  plVar2[0x39] = 0;
  plVar2[0x3a] = 0;
  do {
    *plVar9 = 0;
    *(undefined1 *)(plVar9 + 1) = 0;
    plVar9 = plVar9 + 2;
  } while (plVar9 != plVar2 + 0x47);
  *(byte *)(plVar2 + 0x47) = *(byte *)(plVar2 + 0x47) & 0x80;
  *(undefined4 *)((long)plVar2 + 0x23c) = 0;
  *(undefined1 *)(plVar2 + 0x53) = 0;
  *(undefined4 *)(plVar2 + 0x54) = 0;
  plVar2[0x92] = plVar2[0x32];
  plVar2[0x94] = 0;
  plVar2[0x93] = 0;
  plVar2[0x97] = 0;
  *(undefined1 *)(plVar2 + 0x9e) = 0;
  *(undefined4 *)(plVar2 + 0x9f) = 0;
  plVar2[0xdd] = plVar2[0x32];
  plVar2[0xdf] = 0;
  plVar2[0xde] = 0;
  *param_1 = 0;
  return;
}



/* Entry: 003660f4; end: 003660ff;  */

void FUN_003660f4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(*(long *)(param_1 + 0x10) + 8) = param_2;
  return;
}



/* Entry: 00366100; end: 003662cf;  */

void FUN_00366100(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_1 + 0x10);
  puVar8 = *(undefined8 **)(lVar9 + 0x1b8);
  *(undefined8 *)(lVar9 + 0x1b8) = 0;
  func_0x00366768(lVar9);
  plVar5 = *(long **)(lVar9 + 0x168);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar5) {
    do {
      lVar7 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plVar5[1])();
    }
  }
  lVar7 = 0;
  do {
    if (*(long *)(lVar9 + 0x1d8 + lVar7) != 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/retry_filter.cc"
                   ,0x89a,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x366274);
      (*pcVar4)();
    }
    lVar7 = lVar7 + 0x10;
  } while (lVar7 != 0x60);
  FUN_0036d7cc(lVar9 + 0x4f8);
  if ((*(byte *)(lVar9 + 0x4b8) & 1) != 0) {
    __ZdlPv(*(undefined8 *)(lVar9 + 0x4c0));
  }
  FUN_0036d7cc(lVar9 + 0x2a0);
  puVar6 = *(undefined8 **)(lVar9 + 0x1c8);
  *(undefined8 *)(lVar9 + 0x1c8) = 0;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)();
  }
  plVar5 = *(long **)(lVar9 + 0x1c0);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  puVar6 = *(undefined8 **)(lVar9 + 0x1b8);
  if (puVar6 != (undefined8 *)0x0) {
    plVar5 = puVar6 + 1;
    do {
      lVar7 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)*puVar6)();
    }
  }
  if ((*(ulong *)(lVar9 + 0x1b0) & 1) != 0) {
    FUN_0055293c();
  }
  plVar5 = *(long **)(lVar9 + 0x10);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  puVar8[2] = param_3;
  plVar5 = puVar8 + 1;
  do {
    lVar9 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar9 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar9 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00366290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar8)(puVar8);
  return;
}



/* Entry: 003662d0; end: 0036667b;  */

void FUN_003662d0(char *param_1,long *param_2,long param_3)

{
  char *******pppppppcVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int *piVar6;
  undefined8 *******pppppppuVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  int *piVar11;
  ulong uVar12;
  undefined8 *unaff_x25;
  undefined8 ******ppppppuStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_f9;
  long lStack_f8;
  undefined8 ****ppppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  char ******ppppppcStack_b8;
  ulong uStack_b0;
  byte bStack_a1;
  char *pcStack_58;
  
  if (*(int *)(param_3 + 0x14) == 0) {
    func_0x00771f48();
LAB_003665b4:
    func_0x00771f7c();
LAB_003665b8:
    (**(code **)(*param_2 + 8))();
  }
  else {
    if ((undefined **)*param_2 != &PTR_FUN_009dd9d8) goto LAB_003665b4;
    *(undefined8 *)param_1 = 0;
    unaff_x25 = (undefined8 *)param_2[1];
    piVar11 = *(int **)(param_3 + 8);
    piVar6 = piVar11;
    FUN_003a28d0(piVar11,"grpc.internal.client_channel");
    if ((piVar6 == (int *)0x0) || (*piVar6 != 2)) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(piVar6 + 4);
    }
    *unaff_x25 = uVar8;
    piVar6 = piVar11;
    func_0x003a2d4c(piVar11,"grpc.per_rpc_retry_buffer_size",0x40000,0x7fffffff);
    unaff_x25[1] = (long)(int)piVar6;
    unaff_x25[2] = 0;
    FUN_0036d8b0();
    unaff_x25[3] = piVar6;
    piVar6 = piVar11;
    FUN_003a28d0(piVar11,"grpc.internal.service_config_obj");
    if (piVar6 == (int *)0x0) {
      return;
    }
    if (*piVar6 != 2) {
      return;
    }
    plVar10 = *(long **)(piVar6 + 4);
    if (plVar10 == (long *)0x0) {
      return;
    }
    FUN_0036d8b0();
    (**(code **)(*plVar10 + 0x18))(plVar10,piVar6);
    if (plVar10 == (long *)0x0) {
      return;
    }
    func_0x003a2dcc(piVar11,"grpc.server_uri");
    if (piVar11 == (int *)0x0) {
      uStack_e8 = 0;
      uStack_e0 = 0;
      ppppuStack_f0 = (undefined8 *****)0x0;
      FUN_003b646c(&pcStack_58,2,
                   "server URI channel arg missing or wrong type in client channel filter",0x45,
                   &lStack_f8,&ppppuStack_f0);
      if (pcStack_58 != (char *)0x0) {
        *(char **)param_1 = pcStack_58;
        pcStack_58 = segment_command_00000020.segname + 0xe;
      }
      ppppppuStack_118 = (undefined8 ******)&ppppuStack_f0;
      FUN_0033d548(&ppppppuStack_118);
      return;
    }
    piVar6 = piVar11;
    _strlen(piVar11);
    FUN_004011d4(&ppppuStack_f0,piVar11,piVar6);
    if ((undefined8 *****)ppppuStack_f0 != (undefined8 *****)0x0) {
LAB_003663f0:
      uStack_110 = 0;
      uStack_108 = 0;
      ppppppuStack_118 = (undefined8 *******)0x0;
      FUN_003b646c(&lStack_f8,2,"could not extract server name from target URI",0x2d,&uStack_f9,
                   &ppppppuStack_118);
      if (lStack_f8 != 0) {
        *(long *)param_1 = lStack_f8;
        lStack_f8 = 0x36;
      }
      pcStack_58 = (char *)&ppppppuStack_118;
      FUN_0033d548(&pcStack_58);
      goto LAB_00366440;
    }
    if ((char)bStack_a1 < '\0') {
      if (uStack_b0 != 0) goto LAB_003664e0;
      goto LAB_003663f0;
    }
    uStack_b0 = (ulong)bStack_a1;
    if (bStack_a1 == 0) goto LAB_003663f0;
    ppppppcStack_b8 = (char ******)&ppppppcStack_b8;
LAB_003664e0:
    pppppppcVar1 = (char *******)ppppppcStack_b8;
    if (*(char *)ppppppcStack_b8 == '/') {
      pppppppcVar1 = (char *******)((long)ppppppcStack_b8 + 1);
    }
    uVar12 = uStack_b0 - (*(char *)ppppppcStack_b8 == '/');
    if (0x7ffffffffffffff7 < uVar12) {
      func_0x0033b318(&ppppppuStack_118);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x3665d4);
      (*pcVar5)();
    }
    if (uVar12 < 0x17) {
      uStack_108 = CONCAT17((char)uVar12,(undefined7)uStack_108);
      pppppppuVar7 = &ppppppuStack_118;
      if (uVar12 != 0) goto LAB_0036654c;
    }
    else {
      uVar2 = (uVar12 & 0xfffffffffffffff8) + 8;
      if ((uVar12 | 7) != 0x17) {
        uVar2 = uVar12 | 7;
      }
      pppppppuVar7 = (undefined8 *******)(uVar2 + 1);
      __Znwm();
      uStack_108 = uVar2 + 1 | 0x8000000000000000;
      ppppppuStack_118 = pppppppuVar7;
      uStack_110 = uVar12;
LAB_0036654c:
      _memmove(pppppppuVar7,pppppppcVar1,uVar12);
    }
    *(undefined1 *)((long)pppppppuVar7 + uVar12) = 0;
    FUN_0036ff58();
    FUN_00370008(&pcStack_58);
    param_2 = (long *)unaff_x25[2];
    param_1 = pcStack_58;
    if (param_2 != (long *)0x0) {
      plVar10 = param_2 + 1;
      do {
        lVar9 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 + -1 != 0) goto LAB_00366598;
      goto LAB_003665b8;
    }
  }
LAB_00366598:
  unaff_x25[2] = param_1;
  if ((long)uStack_108 < 0) {
    __ZdlPv(ppppppuStack_118);
  }
LAB_00366440:
  FUN_0035afe0(&ppppuStack_f0);
  return;
}



/* Entry: 0036667c; end: 003666b3;  */

void FUN_0036667c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(*(long *)(param_1 + 8) + 0x10);
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
    if (lVar5 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x003666ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 003666b4; end: 003667e7;  */

void FUN_003666b4(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  
  if (((*(byte *)(param_1 + 0x238) >> 3 & 1) == 0) &&
     (*(byte *)(param_1 + 0x238) = *(byte *)(param_1 + 0x238) | 8, param_2 != 0)) {
    if (*(char *)(param_2 + 0x30) != '\0') {
      (**(code **)(*(long *)(*(long *)(*(long *)(param_1 + 0x1a8) + 0x40) + 0x28) + 0x18))();
    }
    if ((*(ushort *)(param_2 + 0xb50) >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_2 + 0x10);
      FUN_00366e68(lVar2 + 0x2a0);
      FUN_00367130(lVar2 + 0x490);
    }
    if (*(long *)(param_2 + 0xb38) != 0) {
      uVar3 = 0;
      do {
        FUN_00366e30(*(undefined8 *)(param_2 + 0x10),uVar3);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ulong *)(param_2 + 0xb38));
    }
    if ((*(ushort *)(param_2 + 0xb50) >> 3 & 1) != 0) {
      lVar2 = *(long *)(param_2 + 0x10);
      FUN_00366e68(lVar2 + 0x4f8);
      plVar5 = *(long **)(lVar2 + 0x6f0);
      if (plVar5 == (long *)0x0) {
        uVar1 = 0;
      }
      else {
        do {
          if (plVar5[1] == 0) break;
          uVar3 = 0;
          plVar4 = plVar5 + 6;
          do {
            FUN_0034b418(plVar4);
            FUN_0034b418(plVar4 + -4);
            uVar3 = uVar3 + 1;
            plVar4 = plVar4 + 8;
          } while (uVar3 < (ulong)plVar5[1]);
          plVar5[1] = 0;
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
        uVar1 = *(undefined8 *)(lVar2 + 0x6f0);
      }
      *(undefined8 *)(lVar2 + 0x6f8) = uVar1;
      return;
    }
  }
  return;
}



/* Entry: 003667e8; end: 00366843;  */

void FUN_003667e8(long param_1,long *param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(*param_2 + 0x10);
  if ((bVar1 & 1) != 0) {
    *(byte *)(param_1 + 0x238) = *(byte *)(param_1 + 0x238) & 0xfe;
    bVar1 = *(byte *)(*param_2 + 0x10);
  }
  if ((bVar1 >> 2 & 1) != 0) {
    *(byte *)(param_1 + 0x238) = *(byte *)(param_1 + 0x238) & 0xfd;
    bVar1 = *(byte *)(*param_2 + 0x10);
  }
  if ((bVar1 >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x238) = *(byte *)(param_1 + 0x238) & 0xfb;
  }
  *param_2 = 0;
  return;
}



/* Entry: 00366844; end: 0036692b;  */

void FUN_00366844(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_80 = param_2[0x33];
  uStack_48 = param_2[0x34];
  uStack_78 = 0;
  uStack_70 = param_2[0x35];
  puStack_68 = param_2 + 0x2d;
  uStack_60 = 0;
  uStack_50 = param_2[0x32];
  uStack_58 = param_2[0x31];
  uVar3 = param_2[1];
  uVar8 = *(undefined8 *)*param_2;
  uVar9 = param_2[0x37];
  plVar1 = (long *)(uVar9 + 8);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = *plVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  puVar6 = (ulong *)param_2[0x32];
  do {
    uVar7 = *puVar6;
    uVar2 = uVar7 + 0x20;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
    if (bVar5) {
      *puVar6 = uVar2;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (puVar6[2] < uVar2) {
    func_0x003d6048(puVar6,0x20);
  }
  else {
    puVar6 = (ulong *)((long)puVar6 + uVar7 + 0x30);
  }
  *puVar6 = 0;
  puVar6[1] = (ulong)FUN_003685b4;
  puVar6[2] = uVar9;
  puVar6[3] = 0;
  FUN_0034336c(param_1,uVar8,&uStack_80,uVar3,puVar6,param_3,param_4);
  return;
}



/* Entry: 0036692c; end: 0036696f;  */

long * FUN_0036692c(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *param_2;
  *param_2 = 0;
  puVar1 = (undefined8 *)*param_1;
  *param_1 = lVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  return param_1;
}



/* Entry: 00366970; end: 00366d33;  */

void FUN_00366970(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  qword *pqVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  dword *pdVar12;
  ulong *puStack_58;
  
  pqVar4 = &section_00000ba0.size;
  __Znwm();
  pdVar12 = (dword *)(pqVar4 + 1);
  *(long *)pdVar12 = 1;
  *pqVar4 = (qword)&PTR_FUN_009dda50;
  pqVar4[2] = param_1;
  pqVar4[3] = (qword)&PTR_FUN_009ddaa0;
  pqVar4[4] = (qword)pqVar4;
  pqVar4[5] = 0;
  *(undefined1 *)(pqVar4 + 6) = 0;
  *(undefined1 *)(pqVar4 + 0x12) = 0;
  uVar9 = *(undefined8 *)(param_1 + 0x1a8);
  pqVar4[0x13] = 0;
  *(undefined4 *)(pqVar4 + 0x14) = 0;
  *(undefined4 *)(pqVar4 + 0x19) = 0;
  *(undefined1 *)((long)pqVar4 + 0xcc) = 0;
  pqVar4[0x15] = 0;
  pqVar4[0x17] = 0;
  pqVar4[0x16] = 0;
  pqVar4[0x1b] = 0;
  pqVar4[0x1a] = 0;
  pqVar4[0x1d] = 0;
  pqVar4[0x1c] = 0;
  pqVar4[0x1f] = 0;
  pqVar4[0x1e] = 0;
  pqVar4[0x21] = 0;
  pqVar4[0x20] = 0;
  pqVar4[0x23] = 0;
  pqVar4[0x22] = 0;
  pqVar4[0x25] = 0;
  pqVar4[0x24] = 0;
  pqVar4[0x26] = 0;
  pqVar4[0x27] = uVar9;
  uVar9 = *(undefined8 *)(param_1 + 400);
  *(undefined4 *)(pqVar4 + 0x28) = 0;
  pqVar4[0x66] = uVar9;
  *(undefined4 *)(pqVar4 + 0x69) = 0;
  pqVar4[0x68] = 0;
  pqVar4[0x67] = 0;
  pqVar4[0xa7] = uVar9;
  *(undefined4 *)(pqVar4 + 0xaa) = 0;
  pqVar4[0xa9] = 0;
  pqVar4[0xa8] = 0;
  pqVar4[0xe8] = uVar9;
  pqVar4[0xea] = 0;
  pqVar4[0xe9] = 0;
  *(undefined1 *)(pqVar4 + 0xef) = 0;
  *(undefined1 *)(pqVar4 + 0xf4) = 0;
  *(undefined1 *)(pqVar4 + 0x119) = 0;
  *(undefined4 *)(pqVar4 + 0x11b) = 0;
  pqVar4[0x159] = uVar9;
  pqVar4[0x15b] = 0;
  pqVar4[0x15a] = 0;
  pqVar4[0x15d] = 0;
  pqVar4[0x15c] = 0;
  pqVar4[0x15f] = 0;
  pqVar4[0x15e] = 0;
  pqVar4[0x161] = 0;
  pqVar4[0x160] = 0;
  pqVar4[0x16f] = 0;
  pqVar4[0x16c] = 0;
  pqVar4[0x16b] = 0;
  pqVar4[0x16e] = 0;
  pqVar4[0x16d] = 0;
  *(undefined2 *)(pqVar4 + 0x16a) = 0;
  pqVar4[0x169] = 0;
  pqVar4[0x168] = 0;
  pqVar4[0x167] = 0;
  pqVar4[0x166] = 0;
  *(undefined1 *)(pqVar4 + 0x178) = 0;
  pqVar4[0x177] = 0;
  pqVar4[0x176] = 0;
  FUN_00366844(&puStack_58,param_1,pqVar4 + 3,param_2);
  puVar6 = puStack_58;
  puStack_58 = (ulong *)0x0;
  puVar5 = (undefined8 *)pqVar4[5];
  pqVar4[5] = (qword)puVar6;
  puVar6 = (ulong *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)();
    puVar6 = puStack_58;
    puStack_58 = (ulong *)0x0;
    if (puVar6 != (ulong *)0x0) {
      (**(code **)*puVar6)();
    }
  }
  if ((*(long *)(param_1 + 0x18) == 0) || (*(char *)(*(long *)(param_1 + 0x18) + 0x30) == '\0'))
  goto LAB_00366b84;
  func_0x003c1f6c();
  uVar7 = *puVar6;
  FUN_003c1e28();
  lVar8 = 0x7fffffffffffffff;
  if ((uVar7 != 0x7fffffffffffffff) &&
     (((lVar10 = *(long *)(*(long *)(param_1 + 0x18) + 0x28), lVar10 != 0x7fffffffffffffff &&
       (lVar8 = -0x8000000000000000, uVar7 != 0x8000000000000000)) &&
      (lVar10 != -0x8000000000000000)))) {
    if ((long)uVar7 < 1) {
      if ((long)(-0x8000000000000000 - uVar7) <= lVar10) goto LAB_00366b38;
    }
    else if ((long)(uVar7 ^ 0x7fffffffffffffff) < lVar10) {
      lVar8 = 0x7fffffffffffffff;
    }
    else {
LAB_00366b38:
      lVar8 = lVar10 + uVar7;
    }
  }
  pqVar4[0xf] = (qword)FUN_003685dc;
  pqVar4[0x10] = (qword)pqVar4;
  pqVar4[0x11] = 0;
  plVar11 = *(long **)(param_1 + 0x198);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = *plVar11 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pdVar12,0x10);
    if (bVar3) {
      *(long *)pdVar12 = *(long *)pdVar12 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(undefined1 *)(pqVar4 + 0x12) = 1;
  func_0x003cf010(pqVar4 + 7,lVar8,pqVar4 + 0xe);
LAB_00366b84:
  plVar11 = *(long **)(param_1 + 0x1c0);
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar11 + 8))();
    }
  }
  *(qword **)(param_1 + 0x1c0) = pqVar4;
  FUN_00366d34(pqVar4);
  return;
}



/* Entry: 00366d34; end: 00366dbb;  */

void FUN_00366d34(long param_1)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 auStack_c0 [19];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  auStack_c0[0] = 0;
  FUN_0036b7c4(param_1,auStack_c0);
  puVar3 = *(ulong **)(*(long *)(param_1 + 0x10) + 0x1a0);
  FUN_00346f8c(auStack_c0);
  FUN_0034afe4();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  FUN_0034afe4(auStack_c0);
  __Unwind_Resume();
  uVar4 = *puVar3;
  if ((uVar4 & 1) != 0) {
    piVar5 = (int *)(uVar4 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_004007f4();
  if ((uVar4 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 00366dbc; end: 00366e2f;  */

void FUN_00366dbc(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  ulong uStack_28;
  
  lVar3 = *(long *)(param_1 + 0x18);
  uStack_28 = *param_2;
  if ((uStack_28 & 1) != 0) {
    piVar4 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_004007f4(param_1,&uStack_28,*(undefined8 *)(lVar3 + 0x1a0));
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 00366e30; end: 00366e67;  */

void FUN_00366e30(long param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x4c0);
  if ((*(byte *)(param_1 + 0x4b8) & 1) != 0) {
    puVar1 = (undefined8 *)*puVar1;
  }
  if (puVar1[param_2 * 2] != 0) {
    puVar1[param_2 * 2] = 0;
    FUN_003ede40();
  }
  return;
}



/* Entry: 00366e68; end: 00366fab;  */

uint * FUN_00366e68(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  uVar2 = uVar3 & 0xfffffffe;
  *param_1 = uVar2;
  puVar1 = param_1;
  if ((uVar3 & 1) != 0) {
    puVar1 = param_1 + 0x74;
    FUN_0034b418(puVar1);
    uVar2 = *param_1;
  }
  uVar3 = uVar2 & 0xfffffffd;
  *param_1 = uVar3;
  if ((uVar2 >> 1 & 1) != 0) {
    puVar1 = param_1 + 0x6c;
    FUN_0034b418(puVar1);
    uVar3 = *param_1;
  }
  uVar2 = uVar3 & 0xffff8003;
  *param_1 = uVar2;
  if ((uVar3 >> 0xe & 1) != 0) {
    puVar1 = param_1 + 0x54;
    FUN_0034b418(puVar1);
    uVar2 = *param_1;
  }
  uVar3 = uVar2 & 0xffff7fff;
  *param_1 = uVar3;
  if ((uVar2 >> 0xf & 1) != 0) {
    puVar1 = param_1 + 0x4c;
    FUN_0034b418(puVar1);
    uVar3 = *param_1;
  }
  uVar2 = uVar3 & 0xfffeffff;
  *param_1 = uVar2;
  if ((uVar3 >> 0x10 & 1) != 0) {
    puVar1 = param_1 + 0x44;
    FUN_0034b418(puVar1);
    uVar2 = *param_1;
  }
  uVar3 = uVar2 & 0xfffdffff;
  *param_1 = uVar3;
  if ((uVar2 >> 0x11 & 1) != 0) {
    puVar1 = param_1 + 0x3c;
    FUN_0034b418(puVar1);
    uVar3 = *param_1;
  }
  uVar2 = uVar3 & 0xfffbffff;
  *param_1 = uVar2;
  if ((uVar3 >> 0x12 & 1) != 0) {
    puVar1 = param_1 + 0x34;
    FUN_0034b418(puVar1);
    uVar2 = *param_1;
  }
  uVar3 = uVar2 & 0xfff7ffff;
  *param_1 = uVar3;
  if ((uVar2 >> 0x13 & 1) != 0) {
    puVar1 = param_1 + 0x2c;
    FUN_0034b418(puVar1);
    uVar3 = *param_1;
  }
  uVar2 = uVar3 & 0xffefffff;
  *param_1 = uVar2;
  if ((uVar3 >> 0x14 & 1) != 0) {
    puVar1 = param_1 + 0x24;
    FUN_0034b418(puVar1);
    uVar2 = *param_1;
  }
  uVar3 = uVar2 & 0xff9fffff;
  *param_1 = uVar3;
  if ((uVar2 >> 0x16 & 1) != 0) {
    puVar1 = param_1 + 0x18;
    FUN_00366fac(puVar1);
    uVar3 = *param_1;
  }
  uVar2 = uVar3 & 0xff7fffff;
  *param_1 = uVar2;
  if ((uVar3 >> 0x17 & 1) != 0) {
    puVar1 = param_1 + 0x10;
    FUN_0034b418(puVar1);
    uVar2 = *param_1;
  }
  *param_1 = uVar2 & 0xf8ffffff;
  if ((uVar2 >> 0x1a & 1) == 0) {
    return puVar1;
  }
  param_1 = param_1 + 2;
  if (*(long *)param_1 != 0) {
    FUN_003670a0(param_1);
  }
  return param_1;
}



/* Entry: 00366fac; end: 00366fdf;  */

long * FUN_00366fac(long *param_1)

{
  if (*param_1 != 0) {
    FUN_00366fe0(param_1);
  }
  return param_1;
}



/* Entry: 00366fe0; end: 0036706b;  */

void FUN_00366fe0(ulong *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  puVar3 = param_1 + 1;
  uVar1 = *param_1;
  puVar2 = puVar3;
  if ((uVar1 & 1) != 0) {
    puVar2 = (ulong *)*puVar3;
  }
  if (1 < uVar1) {
    uVar1 = uVar1 >> 1;
    puVar2 = puVar2 + uVar1 * 4 + -3;
    do {
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        __ZdlPv(*puVar2);
      }
      puVar2 = puVar2 + -4;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
    uVar1 = *param_1;
  }
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(*puVar3);
    return;
  }
  return;
}



/* Entry: 0036706c; end: 0036709f;  */

long * FUN_0036706c(long *param_1)

{
  if (*param_1 != 0) {
    FUN_003670a0(param_1);
  }
  return param_1;
}



/* Entry: 003670a0; end: 0036712f;  */

void FUN_003670a0(ulong *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  puVar3 = param_1 + 1;
  uVar1 = *param_1;
  puVar2 = puVar3;
  if ((uVar1 & 1) != 0) {
    puVar2 = (ulong *)*puVar3;
  }
  if (1 < uVar1) {
    uVar1 = uVar1 >> 1;
    puVar2 = puVar2 + uVar1 * 3;
    do {
      if (*(char *)((long)puVar2 + -1) < '\0') {
        __ZdlPv(puVar2[-3]);
      }
      uVar1 = uVar1 - 1;
      puVar2 = puVar2 + -3;
    } while (uVar1 != 0);
    uVar1 = *param_1;
  }
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(*puVar3);
    return;
  }
  return;
}



/* Entry: 00367130; end: 003671b7;  */

void FUN_00367130(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  
  plVar3 = *(long **)(param_1 + 8);
  if (plVar3 == (long *)0x0) {
    uVar1 = 0;
  }
  else {
    do {
      if (plVar3[1] == 0) break;
      uVar4 = 0;
      plVar2 = plVar3 + 6;
      do {
        FUN_0034b418(plVar2);
        FUN_0034b418(plVar2 + -4);
        uVar4 = uVar4 + 1;
        plVar2 = plVar2 + 8;
      } while (uVar4 < (ulong)plVar3[1]);
      plVar3[1] = 0;
      plVar3 = (long *)*plVar3;
    } while (plVar3 != (long *)0x0);
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}



/* Entry: 003671b8; end: 0036736f;  */

void FUN_003671b8(long param_1)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  
  bVar2 = *(byte *)(param_1 + 0xbc0);
  *(byte *)(param_1 + 0xbc0) = bVar2 | 2;
  if (((*(ushort *)(param_1 + 0xb50) >> 6 & 1) != 0) && ((bVar2 & 1) == 0)) {
    puVar5 = *(undefined8 **)(param_1 + 0xbb0);
    if (puVar5 != (undefined8 *)0x0) {
      plVar8 = puVar5 + 1;
      do {
        lVar7 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)*puVar5)();
      }
    }
    *(undefined8 *)(param_1 + 0xbb0) = 0;
  }
  uVar6 = *(ulong *)(param_1 + 3000);
  if ((uVar6 != 0) && (*(undefined8 *)(param_1 + 3000) = 0, (uVar6 & 1) != 0)) {
    FUN_0055293c();
  }
  puVar5 = *(undefined8 **)(param_1 + 0xb58);
  if (puVar5 != (undefined8 *)0x0) {
    plVar8 = puVar5 + 1;
    do {
      lVar7 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)*puVar5)();
    }
  }
  *(undefined8 *)(param_1 + 0xb58) = 0;
  uVar6 = *(ulong *)(param_1 + 0xb60);
  if ((uVar6 != 0) && (*(undefined8 *)(param_1 + 0xb60) = 0, (uVar6 & 1) != 0)) {
    FUN_0055293c();
  }
  puVar5 = *(undefined8 **)(param_1 + 0xb68);
  if (puVar5 != (undefined8 *)0x0) {
    plVar8 = puVar5 + 1;
    do {
      lVar7 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)*puVar5)();
    }
  }
  *(undefined8 *)(param_1 + 0xb68) = 0;
  uVar6 = *(ulong *)(param_1 + 0xb70);
  if ((uVar6 != 0) && (*(undefined8 *)(param_1 + 0xb70) = 0, (uVar6 & 1) != 0)) {
    FUN_0055293c();
  }
  puVar1 = (ulong *)(param_1 + 0xb78);
  uVar6 = *(ulong *)(param_1 + 0xb78);
  plVar8 = (long *)(param_1 + 0xb80);
  if ((uVar6 & 1) != 0) {
    plVar8 = (long *)*plVar8;
  }
  if (1 < uVar6) {
    plVar9 = plVar8;
    do {
      puVar5 = (undefined8 *)*plVar9;
      if (puVar5 != (undefined8 *)0x0) {
        plVar10 = puVar5 + 1;
        do {
          lVar7 = *plVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 + -1 == 0) {
          (**(code **)*puVar5)();
        }
      }
      plVar10 = plVar9 + 2;
      *plVar9 = 0;
      plVar9 = plVar10;
    } while (plVar10 != plVar8 + (uVar6 & 0xfffffffffffffffe));
  }
  puVar11 = (undefined8 *)(param_1 + 0xb80);
  uVar6 = *puVar1;
  puVar5 = puVar11;
  if ((uVar6 & 1) != 0) {
    puVar5 = (undefined8 *)*puVar11;
  }
  if (1 < uVar6) {
    uVar6 = uVar6 >> 1;
    puVar5 = puVar5 + uVar6 * 2;
    do {
      puVar5 = puVar5 + -2;
      FUN_003673f0(puVar5);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    uVar6 = *puVar1;
  }
  if ((uVar6 & 1) != 0) {
    __ZdlPv(*puVar11);
  }
  *puVar1 = 0;
  return;
}



/* Entry: 00367370; end: 003673ef;  */

void FUN_00367370(ulong *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  puVar3 = param_1 + 1;
  uVar1 = *param_1;
  puVar2 = puVar3;
  if ((uVar1 & 1) != 0) {
    puVar2 = (ulong *)*puVar3;
  }
  if (1 < uVar1) {
    uVar1 = uVar1 >> 1;
    puVar2 = puVar2 + uVar1 * 2;
    do {
      puVar2 = puVar2 + -2;
      FUN_003673f0(puVar2);
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
    uVar1 = *param_1;
  }
  if ((uVar1 & 1) != 0) {
    __ZdlPv(*puVar3);
  }
  *param_1 = 0;
  return;
}



/* Entry: 003673f0; end: 0036744f;  */

void FUN_003673f0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if ((param_1[1] & 1U) != 0) {
    FUN_0055293c();
  }
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = puVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00367448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar4)();
      return;
    }
  }
  return;
}



/* Entry: 00367450; end: 0036770f;  */

void FUN_00367450(long param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  
  func_0x003674f0();
  plVar3 = *(long **)(param_1 + 0x1f8);
  if ((plVar3 != (long *)0x0) && (plVar3[1] != 0)) {
    lVar5 = 0;
    iVar4 = *param_2;
    do {
      uVar1 = *(uint *)(plVar3 + lVar5 * 8 + 3) & 0xff;
      if (plVar3[lVar5 * 8 + 2] != 0) {
        uVar1 = *(uint *)(plVar3 + lVar5 * 8 + 3);
      }
      uVar2 = *(uint *)(plVar3 + lVar5 * 8 + 7) & 0xff;
      if (plVar3[lVar5 * 8 + 6] != 0) {
        uVar2 = *(uint *)(plVar3 + lVar5 * 8 + 7);
      }
      iVar4 = iVar4 + uVar2 + uVar1 + 0x20;
      *param_2 = iVar4;
      lVar5 = lVar5 + 1;
      do {
        if (lVar5 != plVar3[1]) goto LAB_003674dc;
        lVar5 = 0;
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
      lVar5 = 0;
LAB_003674dc:
    } while ((plVar3 != (long *)0x0) || (lVar5 != 0));
  }
  return;
}



/* Entry: 00367710; end: 0036779b;  */

void FUN_00367710(byte *param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long lStack_e8;
  uint uStack_e0;
  long lStack_c8;
  long lStack_98;
  uint uStack_90;
  long lStack_78;
  long lStack_48;
  uint uStack_40;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((*param_1 >> 2 & 1) != 0) {
    piVar6 = (int *)*param_2;
    param_1 = (byte *)(ulong)*(uint *)(param_1 + 0x1a8);
    FUN_003fed34(&lStack_48);
    uVar1 = uStack_40 & 0xff;
    if (lStack_48 != 0) {
      uVar1 = uStack_40;
    }
    *piVar6 = *piVar6 + uVar1 + 0x27;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((*param_1 >> 4 & 1) != 0) {
    piVar6 = (int *)*param_2;
    param_1 = (byte *)(ulong)*(uint *)(param_1 + 0x1a0);
    FUN_003febf4(&lStack_98);
    uVar1 = uStack_90 & 0xff;
    if (lStack_98 != 0) {
      uVar1 = uStack_90;
    }
    *piVar6 = *piVar6 + uVar1 + 0x27;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((*param_1 >> 6 & 1) != 0) {
    piVar6 = (int *)*param_2;
    param_1 = (byte *)(ulong)param_1[0x198];
    FUN_0034f090(&lStack_e8);
    uVar1 = uStack_e0 & 0xff;
    if (lStack_e8 != 0) {
      uVar1 = uStack_e0;
    }
    *piVar6 = *piVar6 + uVar1 + 0x22;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar4 = (long *)*param_2;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4 = (long *)*param_2;
  }
  if (plVar4 == (long *)0x0) {
    *(uint *)param_1 = *(int *)param_1 + ((uint)param_2[1] & 0xff) + 0x25;
  }
  else {
    *(uint *)param_1 = (uint)param_2[1] + *(int *)param_1 + 0x25;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
      do {
        lVar5 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (*(code *)plVar4[1])();
      }
    }
  }
  return;
}



/* Entry: 0036779c; end: 00367827;  */

void FUN_0036779c(byte *param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long lStack_98;
  uint uStack_90;
  long lStack_78;
  long lStack_48;
  uint uStack_40;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((*param_1 >> 4 & 1) != 0) {
    piVar6 = (int *)*param_2;
    param_1 = (byte *)(ulong)*(uint *)(param_1 + 0x1a0);
    FUN_003febf4(&lStack_48);
    uVar1 = uStack_40 & 0xff;
    if (lStack_48 != 0) {
      uVar1 = uStack_40;
    }
    *piVar6 = *piVar6 + uVar1 + 0x27;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((*param_1 >> 6 & 1) != 0) {
    piVar6 = (int *)*param_2;
    param_1 = (byte *)(ulong)param_1[0x198];
    FUN_0034f090(&lStack_98);
    uVar1 = uStack_90 & 0xff;
    if (lStack_98 != 0) {
      uVar1 = uStack_90;
    }
    *piVar6 = *piVar6 + uVar1 + 0x22;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar4 = (long *)*param_2;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4 = (long *)*param_2;
  }
  if (plVar4 == (long *)0x0) {
    *(uint *)param_1 = *(int *)param_1 + ((uint)param_2[1] & 0xff) + 0x25;
  }
  else {
    *(uint *)param_1 = (uint)param_2[1] + *(int *)param_1 + 0x25;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
      do {
        lVar5 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (*(code *)plVar4[1])();
      }
    }
  }
  return;
}



/* Entry: 00367828; end: 003678b3;  */

void FUN_00367828(byte *param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long lStack_48;
  uint uStack_40;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((*param_1 >> 6 & 1) != 0) {
    piVar6 = (int *)*param_2;
    param_1 = (byte *)(ulong)param_1[0x198];
    FUN_0034f090(&lStack_48);
    uVar1 = uStack_40 & 0xff;
    if (lStack_48 != 0) {
      uVar1 = uStack_40;
    }
    *piVar6 = *piVar6 + uVar1 + 0x22;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar4 = (long *)*param_2;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4 = (long *)*param_2;
  }
  if (plVar4 == (long *)0x0) {
    *(uint *)param_1 = *(int *)param_1 + ((uint)param_2[1] & 0xff) + 0x25;
  }
  else {
    *(uint *)param_1 = (uint)param_2[1] + *(int *)param_1 + 0x25;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
      do {
        lVar5 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (*(code *)plVar4[1])();
      }
    }
  }
  return;
}



/* Entry: 003678b4; end: 0036793b;  */

void FUN_003678b4(int *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_2;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar3) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3 = (long *)*param_2;
  }
  if (plVar3 == (long *)0x0) {
    *param_1 = *param_1 + ((uint)param_2[1] & 0xff) + 0x25;
  }
  else {
    *param_1 = (uint)param_2[1] + *param_1 + 0x25;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar3) {
      do {
        lVar4 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 + -1 == 0) {
        (*(code *)plVar3[1])();
      }
    }
  }
  return;
}



/* Entry: 0036793c; end: 003679c3;  */

void FUN_0036793c(int *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_2;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar3) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3 = (long *)*param_2;
  }
  if (plVar3 == (long *)0x0) {
    *param_1 = *param_1 + ((uint)param_2[1] & 0xff) + 0x2a;
  }
  else {
    *param_1 = (uint)param_2[1] + *param_1 + 0x2a;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar3) {
      do {
        lVar4 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 + -1 == 0) {
        (*(code *)plVar3[1])();
      }
    }
  }
  return;
}



/* Entry: 003679c4; end: 00367a83;  */

void FUN_003679c4(int *param_1,undefined4 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  int *piVar4;
  long *plVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  uint uVar9;
  long *plStack_2c8;
  uint uStack_2c0;
  long lStack_2a8;
  long *plStack_278;
  uint uStack_270;
  long lStack_258;
  long *plStack_228;
  uint uStack_220;
  long lStack_208;
  long *plStack_1d8;
  uint uStack_1d0;
  long lStack_1b8;
  undefined1 uStack_189;
  long *plStack_188;
  uint uStack_180;
  long lStack_168;
  long *plStack_138;
  uint uStack_130;
  long lStack_118;
  long *plStack_e8;
  uint uStack_e0;
  long lStack_c8;
  long lStack_98;
  uint uStack_90;
  long lStack_78;
  long *plStack_48;
  uint uStack_40;
  long lStack_28;
  
  uVar7 = (undefined4)((ulong)param_2 >> 0x20);
  iVar6 = (int)param_2;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034eb70(&plStack_48,*param_2);
  plVar3 = plStack_48;
  if (plStack_48 == (long *)0x0) {
    *param_1 = (uStack_40 & 0xff) + *param_1 + 0x27;
  }
  else {
    *param_1 = uStack_40 + *param_1 + 0x27;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_48) {
      do {
        lVar8 = *plStack_48;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
        if (bVar2) {
          *plStack_48 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_48[1])();
        plVar3 = plStack_48;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  piVar4 = (int *)(ulong)*(uint *)CONCAT44(uVar7,iVar6);
  if (*(uint *)CONCAT44(uVar7,iVar6) != 2) {
    func_0x003fe828(&lStack_98);
    uVar9 = uStack_90 & 0xff;
    if (lStack_98 != 0) {
      uVar9 = uStack_90;
    }
    *(uint *)plVar3 = (int)*plVar3 + uVar9 + 0x2c;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034f290(&plStack_e8,*(undefined4 *)CONCAT44(uVar7,iVar6));
  plVar3 = plStack_e8;
  if (plStack_e8 == (long *)0x0) {
    *piVar4 = (uStack_e0 & 0xff) + *piVar4 + 0x2d;
  }
  else {
    *piVar4 = uStack_e0 + *piVar4 + 0x2d;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_e8) {
      do {
        lVar8 = *plStack_e8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_e8,0x10);
        if (bVar2) {
          *plStack_e8 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_e8[1])();
        plVar3 = plStack_e8;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  lStack_118 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034f290(&plStack_138,*(undefined4 *)CONCAT44(uVar7,iVar6));
  plVar5 = plStack_138;
  if (plStack_138 == (long *)0x0) {
    *(uint *)plVar3 = (uStack_130 & 0xff) + (int)*plVar3 + 0x3e;
  }
  else {
    *(uint *)plVar3 = uStack_130 + (int)*plVar3 + 0x3e;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_138) {
      do {
        lVar8 = *plStack_138;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_138,0x10);
        if (bVar2) {
          *plStack_138 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_138[1])();
        plVar5 = plStack_138;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  lStack_168 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_189 = *(undefined1 *)CONCAT44(uVar7,iVar6);
  func_0x003b095c(&plStack_188,&uStack_189);
  plVar3 = plStack_188;
  if (plStack_188 == (long *)0x0) {
    *(uint *)plVar5 = (uStack_180 & 0xff) + (int)*plVar5 + 0x34;
  }
  else {
    *(uint *)plVar5 = uStack_180 + (int)*plVar5 + 0x34;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_188) {
      do {
        lVar8 = *plStack_188;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_188,0x10);
        if (bVar2) {
          *plStack_188 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_188[1])();
        plVar3 = plStack_188;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  lStack_1b8 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034eb70(&plStack_1d8,(long)*(int *)CONCAT44(uVar7,iVar6));
  plVar5 = plStack_1d8;
  if (plStack_1d8 == (long *)0x0) {
    *(uint *)plVar3 = (uStack_1d0 & 0xff) + (int)*plVar3 + 0x2b;
  }
  else {
    *(uint *)plVar3 = uStack_1d0 + (int)*plVar3 + 0x2b;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_1d8) {
      do {
        lVar8 = *plStack_1d8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_1d8,0x10);
        if (bVar2) {
          *plStack_1d8 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_1d8[1])();
        plVar5 = plStack_1d8;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  lStack_208 = *(long *)PTR____stack_chk_guard_00999f88;
  func_0x003fe980(&plStack_228,*(undefined8 *)CONCAT44(uVar7,iVar6));
  plVar3 = plStack_228;
  if (plStack_228 == (long *)0x0) {
    *(uint *)plVar5 = (uStack_220 & 0xff) + (int)*plVar5 + 0x2c;
  }
  else {
    *(uint *)plVar5 = uStack_220 + (int)*plVar5 + 0x2c;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_228) {
      do {
        lVar8 = *plStack_228;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_228,0x10);
        if (bVar2) {
          *plStack_228 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_228[1])();
        plVar3 = plStack_228;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  lStack_258 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034eb70(&plStack_278,*(undefined4 *)CONCAT44(uVar7,iVar6));
  plVar5 = plStack_278;
  if (plStack_278 == (long *)0x0) {
    *(uint *)plVar3 = (uStack_270 & 0xff) + (int)*plVar3 + 0x3a;
  }
  else {
    *(uint *)plVar3 = uStack_270 + (int)*plVar3 + 0x3a;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_278) {
      do {
        lVar8 = *plStack_278;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_278,0x10);
        if (bVar2) {
          *plStack_278 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_278[1])();
        plVar5 = plStack_278;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_258) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  lStack_2a8 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034eb70(&plStack_2c8,*(undefined8 *)CONCAT44(uVar7,iVar6));
  plVar3 = plStack_2c8;
  if (plStack_2c8 == (long *)0x0) {
    *(uint *)plVar5 = (uStack_2c0 & 0xff) + (int)*plVar5 + 0x36;
  }
  else {
    *(uint *)plVar5 = uStack_2c0 + (int)*plVar5 + 0x36;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_2c8) {
      do {
        lVar8 = *plStack_2c8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_2c8,0x10);
        if (bVar2) {
          *plStack_2c8 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_2c8[1])();
        plVar3 = plStack_2c8;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  plVar5 = *(long **)CONCAT44(uVar7,iVar6);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar5) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar5 = *(long **)CONCAT44(uVar7,iVar6);
  }
  uVar9 = (uint)*(undefined8 *)(CONCAT44(uVar7,iVar6) + 8);
  if (plVar5 == (long *)0x0) {
    *(uint *)plVar3 = (int)*plVar3 + (uVar9 & 0xff) + 0x2a;
  }
  else {
    *(uint *)plVar3 = uVar9 + (int)*plVar3 + 0x2a;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar5) {
      do {
        lVar8 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plVar5[1])();
      }
    }
  }
  return;
}



/* Entry: 00367a84; end: 00367b0f;  */

void FUN_00367a84(int *param_1,uint *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  uint uVar9;
  long *plStack_278;
  uint uStack_270;
  long lStack_258;
  long *plStack_228;
  uint uStack_220;
  long lStack_208;
  long *plStack_1d8;
  uint uStack_1d0;
  long lStack_1b8;
  long *plStack_188;
  uint uStack_180;
  long lStack_168;
  undefined1 uStack_139;
  long *plStack_138;
  uint uStack_130;
  long lStack_118;
  long *plStack_e8;
  uint uStack_e0;
  long lStack_c8;
  long *plStack_98;
  uint uStack_90;
  long lStack_78;
  long lStack_48;
  uint uStack_40;
  long lStack_28;
  
  uVar7 = (undefined4)((ulong)param_2 >> 0x20);
  iVar6 = (int)param_2;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  piVar3 = (int *)(ulong)*param_2;
  if (*param_2 != 2) {
    func_0x003fe828(&lStack_48);
    uVar9 = uStack_40 & 0xff;
    if (lStack_48 != 0) {
      uVar9 = uStack_40;
    }
    *param_1 = *param_1 + uVar9 + 0x2c;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034f290(&plStack_98,*(undefined4 *)CONCAT44(uVar7,iVar6));
  plVar4 = plStack_98;
  if (plStack_98 == (long *)0x0) {
    *piVar3 = (uStack_90 & 0xff) + *piVar3 + 0x2d;
  }
  else {
    *piVar3 = uStack_90 + *piVar3 + 0x2d;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_98) {
      do {
        lVar8 = *plStack_98;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_98,0x10);
        if (bVar2) {
          *plStack_98 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_98[1])();
        plVar4 = plStack_98;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034f290(&plStack_e8,*(undefined4 *)CONCAT44(uVar7,iVar6));
  plVar5 = plStack_e8;
  if (plStack_e8 == (long *)0x0) {
    *(uint *)plVar4 = (uStack_e0 & 0xff) + (int)*plVar4 + 0x3e;
  }
  else {
    *(uint *)plVar4 = uStack_e0 + (int)*plVar4 + 0x3e;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_e8) {
      do {
        lVar8 = *plStack_e8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_e8,0x10);
        if (bVar2) {
          *plStack_e8 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_e8[1])();
        plVar5 = plStack_e8;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  lStack_118 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_139 = *(undefined1 *)CONCAT44(uVar7,iVar6);
  func_0x003b095c(&plStack_138,&uStack_139);
  plVar4 = plStack_138;
  if (plStack_138 == (long *)0x0) {
    *(uint *)plVar5 = (uStack_130 & 0xff) + (int)*plVar5 + 0x34;
  }
  else {
    *(uint *)plVar5 = uStack_130 + (int)*plVar5 + 0x34;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_138) {
      do {
        lVar8 = *plStack_138;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_138,0x10);
        if (bVar2) {
          *plStack_138 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_138[1])();
        plVar4 = plStack_138;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  lStack_168 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034eb70(&plStack_188,(long)*(int *)CONCAT44(uVar7,iVar6));
  plVar5 = plStack_188;
  if (plStack_188 == (long *)0x0) {
    *(uint *)plVar4 = (uStack_180 & 0xff) + (int)*plVar4 + 0x2b;
  }
  else {
    *(uint *)plVar4 = uStack_180 + (int)*plVar4 + 0x2b;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_188) {
      do {
        lVar8 = *plStack_188;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_188,0x10);
        if (bVar2) {
          *plStack_188 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_188[1])();
        plVar5 = plStack_188;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  lStack_1b8 = *(long *)PTR____stack_chk_guard_00999f88;
  func_0x003fe980(&plStack_1d8,*(undefined8 *)CONCAT44(uVar7,iVar6));
  plVar4 = plStack_1d8;
  if (plStack_1d8 == (long *)0x0) {
    *(uint *)plVar5 = (uStack_1d0 & 0xff) + (int)*plVar5 + 0x2c;
  }
  else {
    *(uint *)plVar5 = uStack_1d0 + (int)*plVar5 + 0x2c;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_1d8) {
      do {
        lVar8 = *plStack_1d8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_1d8,0x10);
        if (bVar2) {
          *plStack_1d8 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_1d8[1])();
        plVar4 = plStack_1d8;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  lStack_208 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034eb70(&plStack_228,*(undefined4 *)CONCAT44(uVar7,iVar6));
  plVar5 = plStack_228;
  if (plStack_228 == (long *)0x0) {
    *(uint *)plVar4 = (uStack_220 & 0xff) + (int)*plVar4 + 0x3a;
  }
  else {
    *(uint *)plVar4 = uStack_220 + (int)*plVar4 + 0x3a;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_228) {
      do {
        lVar8 = *plStack_228;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_228,0x10);
        if (bVar2) {
          *plStack_228 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_228[1])();
        plVar5 = plStack_228;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  lStack_258 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034eb70(&plStack_278,*(undefined8 *)CONCAT44(uVar7,iVar6));
  plVar4 = plStack_278;
  if (plStack_278 == (long *)0x0) {
    *(uint *)plVar5 = (uStack_270 & 0xff) + (int)*plVar5 + 0x36;
  }
  else {
    *(uint *)plVar5 = uStack_270 + (int)*plVar5 + 0x36;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_278) {
      do {
        lVar8 = *plStack_278;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_278,0x10);
        if (bVar2) {
          *plStack_278 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_278[1])();
        plVar4 = plStack_278;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_258) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  plVar5 = *(long **)CONCAT44(uVar7,iVar6);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar5) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar5 = *(long **)CONCAT44(uVar7,iVar6);
  }
  uVar9 = (uint)*(undefined8 *)(CONCAT44(uVar7,iVar6) + 8);
  if (plVar5 == (long *)0x0) {
    *(uint *)plVar4 = (int)*plVar4 + (uVar9 & 0xff) + 0x2a;
  }
  else {
    *(uint *)plVar4 = uVar9 + (int)*plVar4 + 0x2a;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar5) {
      do {
        lVar8 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plVar5[1])();
      }
    }
  }
  return;
}



/* Entry: 00367b10; end: 00367bcf;  */

void FUN_00367b10(int *param_1,undefined4 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  uint uVar8;
  long *plStack_228;
  uint uStack_220;
  long lStack_208;
  long *plStack_1d8;
  uint uStack_1d0;
  long lStack_1b8;
  long *plStack_188;
  uint uStack_180;
  long lStack_168;
  long *plStack_138;
  uint uStack_130;
  long lStack_118;
  undefined1 uStack_e9;
  long *plStack_e8;
  uint uStack_e0;
  long lStack_c8;
  long *plStack_98;
  uint uStack_90;
  long lStack_78;
  long *plStack_48;
  uint uStack_40;
  long lStack_28;
  
  uVar6 = (undefined4)((ulong)param_2 >> 0x20);
  iVar5 = (int)param_2;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034f290(&plStack_48,*param_2);
  plVar3 = plStack_48;
  if (plStack_48 == (long *)0x0) {
    *param_1 = (uStack_40 & 0xff) + *param_1 + 0x2d;
  }
  else {
    *param_1 = uStack_40 + *param_1 + 0x2d;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_48) {
      do {
        lVar7 = *plStack_48;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
        if (bVar2) {
          *plStack_48 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_48[1])();
        plVar3 = plStack_48;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034f290(&plStack_98,*(undefined4 *)CONCAT44(uVar6,iVar5));
  plVar4 = plStack_98;
  if (plStack_98 == (long *)0x0) {
    *(uint *)plVar3 = (uStack_90 & 0xff) + (int)*plVar3 + 0x3e;
  }
  else {
    *(uint *)plVar3 = uStack_90 + (int)*plVar3 + 0x3e;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_98) {
      do {
        lVar7 = *plStack_98;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_98,0x10);
        if (bVar2) {
          *plStack_98 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_98[1])();
        plVar4 = plStack_98;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_e9 = *(undefined1 *)CONCAT44(uVar6,iVar5);
  func_0x003b095c(&plStack_e8,&uStack_e9);
  plVar3 = plStack_e8;
  if (plStack_e8 == (long *)0x0) {
    *(uint *)plVar4 = (uStack_e0 & 0xff) + (int)*plVar4 + 0x34;
  }
  else {
    *(uint *)plVar4 = uStack_e0 + (int)*plVar4 + 0x34;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_e8) {
      do {
        lVar7 = *plStack_e8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_e8,0x10);
        if (bVar2) {
          *plStack_e8 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_e8[1])();
        plVar3 = plStack_e8;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  lStack_118 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034eb70(&plStack_138,(long)*(int *)CONCAT44(uVar6,iVar5));
  plVar4 = plStack_138;
  if (plStack_138 == (long *)0x0) {
    *(uint *)plVar3 = (uStack_130 & 0xff) + (int)*plVar3 + 0x2b;
  }
  else {
    *(uint *)plVar3 = uStack_130 + (int)*plVar3 + 0x2b;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_138) {
      do {
        lVar7 = *plStack_138;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_138,0x10);
        if (bVar2) {
          *plStack_138 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_138[1])();
        plVar4 = plStack_138;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  lStack_168 = *(long *)PTR____stack_chk_guard_00999f88;
  func_0x003fe980(&plStack_188,*(undefined8 *)CONCAT44(uVar6,iVar5));
  plVar3 = plStack_188;
  if (plStack_188 == (long *)0x0) {
    *(uint *)plVar4 = (uStack_180 & 0xff) + (int)*plVar4 + 0x2c;
  }
  else {
    *(uint *)plVar4 = uStack_180 + (int)*plVar4 + 0x2c;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_188) {
      do {
        lVar7 = *plStack_188;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_188,0x10);
        if (bVar2) {
          *plStack_188 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_188[1])();
        plVar3 = plStack_188;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  lStack_1b8 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034eb70(&plStack_1d8,*(undefined4 *)CONCAT44(uVar6,iVar5));
  plVar4 = plStack_1d8;
  if (plStack_1d8 == (long *)0x0) {
    *(uint *)plVar3 = (uStack_1d0 & 0xff) + (int)*plVar3 + 0x3a;
  }
  else {
    *(uint *)plVar3 = uStack_1d0 + (int)*plVar3 + 0x3a;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_1d8) {
      do {
        lVar7 = *plStack_1d8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_1d8,0x10);
        if (bVar2) {
          *plStack_1d8 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_1d8[1])();
        plVar4 = plStack_1d8;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  lStack_208 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034eb70(&plStack_228,*(undefined8 *)CONCAT44(uVar6,iVar5));
  plVar3 = plStack_228;
  if (plStack_228 == (long *)0x0) {
    *(uint *)plVar4 = (uStack_220 & 0xff) + (int)*plVar4 + 0x36;
  }
  else {
    *(uint *)plVar4 = uStack_220 + (int)*plVar4 + 0x36;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_228) {
      do {
        lVar7 = *plStack_228;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_228,0x10);
        if (bVar2) {
          *plStack_228 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_228[1])();
        plVar3 = plStack_228;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  plVar4 = *(long **)CONCAT44(uVar6,iVar5);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4 = *(long **)CONCAT44(uVar6,iVar5);
  }
  uVar8 = (uint)*(undefined8 *)(CONCAT44(uVar6,iVar5) + 8);
  if (plVar4 == (long *)0x0) {
    *(uint *)plVar3 = (int)*plVar3 + (uVar8 & 0xff) + 0x2a;
  }
  else {
    *(uint *)plVar3 = uVar8 + (int)*plVar3 + 0x2a;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
      do {
        lVar7 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plVar4[1])();
      }
    }
  }
  return;
}



/* Entry: 00367bd0; end: 00367c8f;  */

void FUN_00367bd0(int *param_1,undefined4 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  uint uVar8;
  long *plStack_1d8;
  uint uStack_1d0;
  long lStack_1b8;
  long *plStack_188;
  uint uStack_180;
  long lStack_168;
  long *plStack_138;
  uint uStack_130;
  long lStack_118;
  long *plStack_e8;
  uint uStack_e0;
  long lStack_c8;
  undefined1 uStack_99;
  long *plStack_98;
  uint uStack_90;
  long lStack_78;
  long *plStack_48;
  uint uStack_40;
  long lStack_28;
  
  uVar6 = (undefined4)((ulong)param_2 >> 0x20);
  iVar5 = (int)param_2;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034f290(&plStack_48,*param_2);
  plVar4 = plStack_48;
  if (plStack_48 == (long *)0x0) {
    *param_1 = (uStack_40 & 0xff) + *param_1 + 0x3e;
  }
  else {
    *param_1 = uStack_40 + *param_1 + 0x3e;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_48) {
      do {
        lVar7 = *plStack_48;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
        if (bVar2) {
          *plStack_48 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_48[1])();
        plVar4 = plStack_48;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_99 = *(undefined1 *)CONCAT44(uVar6,iVar5);
  func_0x003b095c(&plStack_98,&uStack_99);
  plVar3 = plStack_98;
  if (plStack_98 == (long *)0x0) {
    *(uint *)plVar4 = (uStack_90 & 0xff) + (int)*plVar4 + 0x34;
  }
  else {
    *(uint *)plVar4 = uStack_90 + (int)*plVar4 + 0x34;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_98) {
      do {
        lVar7 = *plStack_98;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_98,0x10);
        if (bVar2) {
          *plStack_98 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_98[1])();
        plVar3 = plStack_98;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034eb70(&plStack_e8,(long)*(int *)CONCAT44(uVar6,iVar5));
  plVar4 = plStack_e8;
  if (plStack_e8 == (long *)0x0) {
    *(uint *)plVar3 = (uStack_e0 & 0xff) + (int)*plVar3 + 0x2b;
  }
  else {
    *(uint *)plVar3 = uStack_e0 + (int)*plVar3 + 0x2b;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_e8) {
      do {
        lVar7 = *plStack_e8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_e8,0x10);
        if (bVar2) {
          *plStack_e8 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_e8[1])();
        plVar4 = plStack_e8;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  lStack_118 = *(long *)PTR____stack_chk_guard_00999f88;
  func_0x003fe980(&plStack_138,*(undefined8 *)CONCAT44(uVar6,iVar5));
  plVar3 = plStack_138;
  if (plStack_138 == (long *)0x0) {
    *(uint *)plVar4 = (uStack_130 & 0xff) + (int)*plVar4 + 0x2c;
  }
  else {
    *(uint *)plVar4 = uStack_130 + (int)*plVar4 + 0x2c;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_138) {
      do {
        lVar7 = *plStack_138;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_138,0x10);
        if (bVar2) {
          *plStack_138 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_138[1])();
        plVar3 = plStack_138;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  lStack_168 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034eb70(&plStack_188,*(undefined4 *)CONCAT44(uVar6,iVar5));
  plVar4 = plStack_188;
  if (plStack_188 == (long *)0x0) {
    *(uint *)plVar3 = (uStack_180 & 0xff) + (int)*plVar3 + 0x3a;
  }
  else {
    *(uint *)plVar3 = uStack_180 + (int)*plVar3 + 0x3a;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_188) {
      do {
        lVar7 = *plStack_188;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_188,0x10);
        if (bVar2) {
          *plStack_188 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_188[1])();
        plVar4 = plStack_188;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  lStack_1b8 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034eb70(&plStack_1d8,*(undefined8 *)CONCAT44(uVar6,iVar5));
  plVar3 = plStack_1d8;
  if (plStack_1d8 == (long *)0x0) {
    *(uint *)plVar4 = (uStack_1d0 & 0xff) + (int)*plVar4 + 0x36;
  }
  else {
    *(uint *)plVar4 = uStack_1d0 + (int)*plVar4 + 0x36;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_1d8) {
      do {
        lVar7 = *plStack_1d8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_1d8,0x10);
        if (bVar2) {
          *plStack_1d8 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_1d8[1])();
        plVar3 = plStack_1d8;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  plVar4 = *(long **)CONCAT44(uVar6,iVar5);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4 = *(long **)CONCAT44(uVar6,iVar5);
  }
  uVar8 = (uint)*(undefined8 *)(CONCAT44(uVar6,iVar5) + 8);
  if (plVar4 == (long *)0x0) {
    *(uint *)plVar3 = (int)*plVar3 + (uVar8 & 0xff) + 0x2a;
  }
  else {
    *(uint *)plVar3 = uVar8 + (int)*plVar3 + 0x2a;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
      do {
        lVar7 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plVar4[1])();
      }
    }
  }
  return;
}



/* Entry: 00367c90; end: 00367d57;  */

void FUN_00367c90(int *param_1,undefined1 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  uint uVar8;
  long *plStack_188;
  uint uStack_180;
  long lStack_168;
  long *plStack_138;
  uint uStack_130;
  long lStack_118;
  long *plStack_e8;
  uint uStack_e0;
  long lStack_c8;
  long *plStack_98;
  uint uStack_90;
  long lStack_78;
  undefined1 uStack_49;
  long *plStack_48;
  uint uStack_40;
  long lStack_28;
  
  uVar6 = (undefined4)((ulong)param_2 >> 0x20);
  iVar5 = (int)param_2;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_49 = *param_2;
  func_0x003b095c(&plStack_48,&uStack_49);
  plVar3 = plStack_48;
  if (plStack_48 == (long *)0x0) {
    *param_1 = (uStack_40 & 0xff) + *param_1 + 0x34;
  }
  else {
    *param_1 = uStack_40 + *param_1 + 0x34;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_48) {
      do {
        lVar7 = *plStack_48;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
        if (bVar2) {
          *plStack_48 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_48[1])();
        plVar3 = plStack_48;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034eb70(&plStack_98,(long)*(int *)CONCAT44(uVar6,iVar5));
  plVar4 = plStack_98;
  if (plStack_98 == (long *)0x0) {
    *(uint *)plVar3 = (uStack_90 & 0xff) + (int)*plVar3 + 0x2b;
  }
  else {
    *(uint *)plVar3 = uStack_90 + (int)*plVar3 + 0x2b;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_98) {
      do {
        lVar7 = *plStack_98;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_98,0x10);
        if (bVar2) {
          *plStack_98 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_98[1])();
        plVar4 = plStack_98;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
  func_0x003fe980(&plStack_e8,*(undefined8 *)CONCAT44(uVar6,iVar5));
  plVar3 = plStack_e8;
  if (plStack_e8 == (long *)0x0) {
    *(uint *)plVar4 = (uStack_e0 & 0xff) + (int)*plVar4 + 0x2c;
  }
  else {
    *(uint *)plVar4 = uStack_e0 + (int)*plVar4 + 0x2c;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_e8) {
      do {
        lVar7 = *plStack_e8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_e8,0x10);
        if (bVar2) {
          *plStack_e8 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_e8[1])();
        plVar3 = plStack_e8;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  lStack_118 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034eb70(&plStack_138,*(undefined4 *)CONCAT44(uVar6,iVar5));
  plVar4 = plStack_138;
  if (plStack_138 == (long *)0x0) {
    *(uint *)plVar3 = (uStack_130 & 0xff) + (int)*plVar3 + 0x3a;
  }
  else {
    *(uint *)plVar3 = uStack_130 + (int)*plVar3 + 0x3a;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_138) {
      do {
        lVar7 = *plStack_138;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_138,0x10);
        if (bVar2) {
          *plStack_138 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_138[1])();
        plVar4 = plStack_138;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  lStack_168 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034eb70(&plStack_188,*(undefined8 *)CONCAT44(uVar6,iVar5));
  plVar3 = plStack_188;
  if (plStack_188 == (long *)0x0) {
    *(uint *)plVar4 = (uStack_180 & 0xff) + (int)*plVar4 + 0x36;
  }
  else {
    *(uint *)plVar4 = uStack_180 + (int)*plVar4 + 0x36;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_188) {
      do {
        lVar7 = *plStack_188;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_188,0x10);
        if (bVar2) {
          *plStack_188 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_188[1])();
        plVar3 = plStack_188;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  plVar4 = *(long **)CONCAT44(uVar6,iVar5);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4 = *(long **)CONCAT44(uVar6,iVar5);
  }
  uVar8 = (uint)*(undefined8 *)(CONCAT44(uVar6,iVar5) + 8);
  if (plVar4 == (long *)0x0) {
    *(uint *)plVar3 = (int)*plVar3 + (uVar8 & 0xff) + 0x2a;
  }
  else {
    *(uint *)plVar3 = uVar8 + (int)*plVar3 + 0x2a;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
      do {
        lVar7 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plVar4[1])();
      }
    }
  }
  return;
}



/* Entry: 00367d58; end: 00367e17;  */

void FUN_00367d58(int *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  uint uVar8;
  long *plStack_138;
  uint uStack_130;
  long lStack_118;
  long *plStack_e8;
  uint uStack_e0;
  long lStack_c8;
  long *plStack_98;
  uint uStack_90;
  long lStack_78;
  long *plStack_48;
  uint uStack_40;
  long lStack_28;
  
  uVar6 = (undefined4)((ulong)param_2 >> 0x20);
  iVar5 = (int)param_2;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034eb70(&plStack_48,(long)*param_2);
  plVar4 = plStack_48;
  if (plStack_48 == (long *)0x0) {
    *param_1 = (uStack_40 & 0xff) + *param_1 + 0x2b;
  }
  else {
    *param_1 = uStack_40 + *param_1 + 0x2b;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_48) {
      do {
        lVar7 = *plStack_48;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
        if (bVar2) {
          *plStack_48 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_48[1])();
        plVar4 = plStack_48;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  func_0x003fe980(&plStack_98,*(undefined8 *)CONCAT44(uVar6,iVar5));
  plVar3 = plStack_98;
  if (plStack_98 == (long *)0x0) {
    *(uint *)plVar4 = (uStack_90 & 0xff) + (int)*plVar4 + 0x2c;
  }
  else {
    *(uint *)plVar4 = uStack_90 + (int)*plVar4 + 0x2c;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_98) {
      do {
        lVar7 = *plStack_98;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_98,0x10);
        if (bVar2) {
          *plStack_98 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_98[1])();
        plVar3 = plStack_98;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034eb70(&plStack_e8,*(undefined4 *)CONCAT44(uVar6,iVar5));
  plVar4 = plStack_e8;
  if (plStack_e8 == (long *)0x0) {
    *(uint *)plVar3 = (uStack_e0 & 0xff) + (int)*plVar3 + 0x3a;
  }
  else {
    *(uint *)plVar3 = uStack_e0 + (int)*plVar3 + 0x3a;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_e8) {
      do {
        lVar7 = *plStack_e8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_e8,0x10);
        if (bVar2) {
          *plStack_e8 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_e8[1])();
        plVar4 = plStack_e8;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  lStack_118 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034eb70(&plStack_138,*(undefined8 *)CONCAT44(uVar6,iVar5));
  plVar3 = plStack_138;
  if (plStack_138 == (long *)0x0) {
    *(uint *)plVar4 = (uStack_130 & 0xff) + (int)*plVar4 + 0x36;
  }
  else {
    *(uint *)plVar4 = uStack_130 + (int)*plVar4 + 0x36;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_138) {
      do {
        lVar7 = *plStack_138;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_138,0x10);
        if (bVar2) {
          *plStack_138 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_138[1])();
        plVar3 = plStack_138;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  plVar4 = *(long **)CONCAT44(uVar6,iVar5);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4 = *(long **)CONCAT44(uVar6,iVar5);
  }
  uVar8 = (uint)*(undefined8 *)(CONCAT44(uVar6,iVar5) + 8);
  if (plVar4 == (long *)0x0) {
    *(uint *)plVar3 = (int)*plVar3 + (uVar8 & 0xff) + 0x2a;
  }
  else {
    *(uint *)plVar3 = uVar8 + (int)*plVar3 + 0x2a;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
      do {
        lVar7 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plVar4[1])();
      }
    }
  }
  return;
}



/* Entry: 00367e18; end: 00367ed7;  */

void FUN_00367e18(int *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  uint uVar8;
  long *plStack_e8;
  uint uStack_e0;
  long lStack_c8;
  long *plStack_98;
  uint uStack_90;
  long lStack_78;
  long *plStack_48;
  uint uStack_40;
  long lStack_28;
  
  uVar6 = (undefined4)((ulong)param_2 >> 0x20);
  iVar5 = (int)param_2;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  func_0x003fe980(&plStack_48,*param_2);
  plVar3 = plStack_48;
  if (plStack_48 == (long *)0x0) {
    *param_1 = (uStack_40 & 0xff) + *param_1 + 0x2c;
  }
  else {
    *param_1 = uStack_40 + *param_1 + 0x2c;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_48) {
      do {
        lVar7 = *plStack_48;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
        if (bVar2) {
          *plStack_48 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_48[1])();
        plVar3 = plStack_48;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034eb70(&plStack_98,*(undefined4 *)CONCAT44(uVar6,iVar5));
  plVar4 = plStack_98;
  if (plStack_98 == (long *)0x0) {
    *(uint *)plVar3 = (uStack_90 & 0xff) + (int)*plVar3 + 0x3a;
  }
  else {
    *(uint *)plVar3 = uStack_90 + (int)*plVar3 + 0x3a;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_98) {
      do {
        lVar7 = *plStack_98;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_98,0x10);
        if (bVar2) {
          *plStack_98 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_98[1])();
        plVar4 = plStack_98;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034eb70(&plStack_e8,*(undefined8 *)CONCAT44(uVar6,iVar5));
  plVar3 = plStack_e8;
  if (plStack_e8 == (long *)0x0) {
    *(uint *)plVar4 = (uStack_e0 & 0xff) + (int)*plVar4 + 0x36;
  }
  else {
    *(uint *)plVar4 = uStack_e0 + (int)*plVar4 + 0x36;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_e8) {
      do {
        lVar7 = *plStack_e8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_e8,0x10);
        if (bVar2) {
          *plStack_e8 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_e8[1])();
        plVar3 = plStack_e8;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  plVar4 = *(long **)CONCAT44(uVar6,iVar5);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4 = *(long **)CONCAT44(uVar6,iVar5);
  }
  uVar8 = (uint)*(undefined8 *)(CONCAT44(uVar6,iVar5) + 8);
  if (plVar4 == (long *)0x0) {
    *(uint *)plVar3 = (int)*plVar3 + (uVar8 & 0xff) + 0x2a;
  }
  else {
    *(uint *)plVar3 = uVar8 + (int)*plVar3 + 0x2a;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
      do {
        lVar7 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plVar4[1])();
      }
    }
  }
  return;
}



/* Entry: 00367ed8; end: 00367f97;  */

void FUN_00367ed8(int *param_1,undefined4 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  uint uVar8;
  long *plStack_98;
  uint uStack_90;
  long lStack_78;
  long *plStack_48;
  uint uStack_40;
  long lStack_28;
  
  uVar6 = (undefined4)((ulong)param_2 >> 0x20);
  iVar5 = (int)param_2;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034eb70(&plStack_48,*param_2);
  plVar4 = plStack_48;
  if (plStack_48 == (long *)0x0) {
    *param_1 = (uStack_40 & 0xff) + *param_1 + 0x3a;
  }
  else {
    *param_1 = uStack_40 + *param_1 + 0x3a;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_48) {
      do {
        lVar7 = *plStack_48;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
        if (bVar2) {
          *plStack_48 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_48[1])();
        plVar4 = plStack_48;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034eb70(&plStack_98,*(undefined8 *)CONCAT44(uVar6,iVar5));
  plVar3 = plStack_98;
  if (plStack_98 == (long *)0x0) {
    *(uint *)plVar4 = (uStack_90 & 0xff) + (int)*plVar4 + 0x36;
  }
  else {
    *(uint *)plVar4 = uStack_90 + (int)*plVar4 + 0x36;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_98) {
      do {
        lVar7 = *plStack_98;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_98,0x10);
        if (bVar2) {
          *plStack_98 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_98[1])();
        plVar3 = plStack_98;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  plVar4 = *(long **)CONCAT44(uVar6,iVar5);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4 = *(long **)CONCAT44(uVar6,iVar5);
  }
  uVar8 = (uint)*(undefined8 *)(CONCAT44(uVar6,iVar5) + 8);
  if (plVar4 == (long *)0x0) {
    *(uint *)plVar3 = (int)*plVar3 + (uVar8 & 0xff) + 0x2a;
  }
  else {
    *(uint *)plVar3 = uVar8 + (int)*plVar3 + 0x2a;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
      do {
        lVar7 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plVar4[1])();
      }
    }
  }
  return;
}



/* Entry: 00367f98; end: 00368057;  */

void FUN_00367f98(int *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  uint uVar8;
  long *plStack_48;
  uint uStack_40;
  long lStack_28;
  
  uVar6 = (undefined4)((ulong)param_2 >> 0x20);
  iVar5 = (int)param_2;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034eb70(&plStack_48,*param_2);
  plVar3 = plStack_48;
  if (plStack_48 == (long *)0x0) {
    *param_1 = (uStack_40 & 0xff) + *param_1 + 0x36;
  }
  else {
    *param_1 = uStack_40 + *param_1 + 0x36;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_48) {
      do {
        lVar7 = *plStack_48;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
        if (bVar2) {
          *plStack_48 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_48[1])();
        plVar3 = plStack_48;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  plVar4 = *(long **)CONCAT44(uVar6,iVar5);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4 = *(long **)CONCAT44(uVar6,iVar5);
  }
  uVar8 = (uint)*(undefined8 *)(CONCAT44(uVar6,iVar5) + 8);
  if (plVar4 == (long *)0x0) {
    *(uint *)plVar3 = (int)*plVar3 + (uVar8 & 0xff) + 0x2a;
  }
  else {
    *(uint *)plVar3 = uVar8 + (int)*plVar3 + 0x2a;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
      do {
        lVar7 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plVar4[1])();
      }
    }
  }
  return;
}



/* Entry: 00368058; end: 003680df;  */

void FUN_00368058(int *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_2;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar3) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3 = (long *)*param_2;
  }
  if (plVar3 == (long *)0x0) {
    *param_1 = *param_1 + ((uint)param_2[1] & 0xff) + 0x2a;
  }
  else {
    *param_1 = (uint)param_2[1] + *param_1 + 0x2a;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar3) {
      do {
        lVar4 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 + -1 == 0) {
        (*(code *)plVar3[1])();
      }
    }
  }
  return;
}



/* Entry: 003680e0; end: 00368167;  */

void FUN_003680e0(int *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_2;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar3) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3 = (long *)*param_2;
  }
  if (plVar3 == (long *)0x0) {
    *param_1 = *param_1 + ((uint)param_2[1] & 0xff) + 0x2c;
  }
  else {
    *param_1 = (uint)param_2[1] + *param_1 + 0x2c;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar3) {
      do {
        lVar4 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 + -1 == 0) {
        (*(code *)plVar3[1])();
      }
    }
  }
  return;
}



/* Entry: 00368168; end: 003681ef;  */

void FUN_00368168(int *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_2;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar3) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3 = (long *)*param_2;
  }
  if (plVar3 == (long *)0x0) {
    *param_1 = *param_1 + ((uint)param_2[1] & 0xff) + 0x24;
  }
  else {
    *param_1 = (uint)param_2[1] + *param_1 + 0x24;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar3) {
      do {
        lVar4 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 + -1 == 0) {
        (*(code *)plVar3[1])();
      }
    }
  }
  return;
}



/* Entry: 003681f0; end: 00368277;  */

void FUN_003681f0(int *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_2;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar3) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3 = (long *)*param_2;
  }
  if (plVar3 == (long *)0x0) {
    *param_1 = *param_1 + ((uint)param_2[1] & 0xff) + 0x39;
  }
  else {
    *param_1 = (uint)param_2[1] + *param_1 + 0x39;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar3) {
      do {
        lVar4 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 + -1 == 0) {
        (*(code *)plVar3[1])();
      }
    }
  }
  return;
}



/* Entry: 00368278; end: 003682ff;  */

void FUN_00368278(int *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_2;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar3) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3 = (long *)*param_2;
  }
  if (plVar3 == (long *)0x0) {
    *param_1 = *param_1 + ((uint)param_2[1] & 0xff) + 0x35;
  }
  else {
    *param_1 = (uint)param_2[1] + *param_1 + 0x35;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar3) {
      do {
        lVar4 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 + -1 == 0) {
        (*(code *)plVar3[1])();
      }
    }
  }
  return;
}



/* Entry: 00368300; end: 00368387;  */

void FUN_00368300(int *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_2;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar3) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3 = (long *)*param_2;
  }
  if (plVar3 == (long *)0x0) {
    *param_1 = *param_1 + ((uint)param_2[1] & 0xff) + 0x2e;
  }
  else {
    *param_1 = (uint)param_2[1] + *param_1 + 0x2e;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar3) {
      do {
        lVar4 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 + -1 == 0) {
        (*(code *)plVar3[1])();
      }
    }
  }
  return;
}



/* Entry: 00368388; end: 0036840f;  */

void FUN_00368388(int *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_2;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar3) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3 = (long *)*param_2;
  }
  if (plVar3 == (long *)0x0) {
    *param_1 = *param_1 + ((uint)param_2[1] & 0xff) + 0x2d;
  }
  else {
    *param_1 = (uint)param_2[1] + *param_1 + 0x2d;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar3) {
      do {
        lVar4 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 + -1 == 0) {
        (*(code *)plVar3[1])();
      }
    }
  }
  return;
}



/* Entry: 00368410; end: 0036846b;  */

void FUN_00368410(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  
  puVar2 = param_1 + 1;
  uVar1 = *param_1;
  if ((uVar1 & 1) != 0) {
    puVar2 = (ulong *)*puVar2;
  }
  if (1 < uVar1) {
    lVar3 = (uVar1 >> 1) << 5;
    do {
      FUN_0036846c(param_2,puVar2);
      puVar2 = puVar2 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 0036846c; end: 0036852b;  */

void FUN_0036846c(int *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  uint uVar8;
  long *plStack_48;
  uint uStack_40;
  long lStack_28;
  
  uVar6 = (undefined4)((ulong)param_2 >> 0x20);
  iVar5 = (int)param_2;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003fee84(&plStack_48,param_2);
  plVar3 = plStack_48;
  if (plStack_48 == (long *)0x0) {
    *param_1 = (uStack_40 & 0xff) + *param_1 + 0x2b;
  }
  else {
    *param_1 = uStack_40 + *param_1 + 0x2b;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_48) {
      do {
        lVar7 = *plStack_48;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
        if (bVar2) {
          *plStack_48 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_48[1])();
        plVar3 = plStack_48;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  plVar4 = *(long **)CONCAT44(uVar6,iVar5);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4 = *(long **)CONCAT44(uVar6,iVar5);
  }
  uVar8 = (uint)*(undefined8 *)(CONCAT44(uVar6,iVar5) + 8);
  if (plVar4 == (long *)0x0) {
    *(uint *)plVar3 = (int)*plVar3 + (uVar8 & 0xff) + 0x28;
  }
  else {
    *(uint *)plVar3 = uVar8 + (int)*plVar3 + 0x28;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
      do {
        lVar7 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plVar4[1])();
      }
    }
  }
  return;
}


