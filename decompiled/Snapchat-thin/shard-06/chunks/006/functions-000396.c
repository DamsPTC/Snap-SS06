/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104aae940; end: 104aae953;  */

void FUN_104aae940(void)

{
  FUN_104aaebc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104aae954; end: 104aae9cb;  */

undefined8 * FUN_104aae954(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c4ae8;
  func_0x0001078f0080(param_1 + 0x29,param_1[0x2a]);
  func_0x0001078f0080(param_1 + 0x26,param_1[0x27]);
  func_0x0001005a5f48(param_1 + 0x1e);
  FUN_104aab304(param_1 + 0xe);
  if (param_1[10] != 0) {
    param_1[0xb] = param_1[10];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  *param_1 = &PTR_FUN_1107c4ac0;
  func_0x00010047dc18();
  FUN_104aaeff4();
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  return param_1;
}



/* Entry: 104aae9cc; end: 104aaea47;  */

void FUN_104aae9cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c4ae8;
  func_0x0001078f0080(param_1 + 0x29,param_1[0x2a]);
  func_0x0001078f0080(param_1 + 0x26,param_1[0x27]);
  func_0x0001005a5f48(param_1 + 0x1e);
  FUN_104aab304(param_1 + 0xe);
  if (param_1[10] != 0) {
    param_1[0xb] = param_1[10];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  FUN_104aac064(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104aaea48; end: 104aaea5b;  */

uint FUN_104aaea48(ulong param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 < param_1);
  if (param_1 < param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 104aaea5c; end: 104aaeac7;  */

long FUN_104aaea5c(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  func_0x00010002b024();
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 0x18) = 3;
  __ZNSt3__19to_stringEi(param_1 + 0x20,uVar1);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 **)(param_1 + 0x38) = (undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  return param_1;
}



/* Entry: 104aaeac8; end: 104aaeb1b;  */

long FUN_104aaeac8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010002b024();
  FUN_104a81d0c(lVar1 + 0x18,param_3,0);
  return param_1;
}



/* Entry: 104aaeb1c; end: 104aaeb6f;  */

long FUN_104aaeb1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010002b024();
  FUN_104a81d0c(lVar1 + 0x18,param_3,0);
  return param_1;
}



/* Entry: 104aaeb70; end: 104aaebc3;  */

long FUN_104aaeb70(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010002b024();
  FUN_104a81c4c(lVar1 + 0x18,*param_3,0);
  return param_1;
}



/* Entry: 104aaebc4; end: 104aaec3f;  */

undefined8 * FUN_104aaebc4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_1107c4b28;
  plVar4 = (long *)param_1[0x17];
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
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (*(char *)((long)param_1 + 0xb7) < '\0') {
    __ZdlPv(param_1[0x14]);
  }
  if (*(char *)((long)param_1 + 0x9f) < '\0') {
    __ZdlPv(param_1[0x11]);
  }
  *param_1 = &PTR_FUN_1107c4ac0;
  func_0x00010047dc18();
  FUN_104aaeff4();
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  return param_1;
}



/* Entry: 104aaec40; end: 104aaec53;  */

long FUN_104aaec40(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  FUN_104a6fa70();
  lVar10 = plVar3[1] - *plVar3 >> 6;
  uVar1 = lVar10 + 1;
  if (uVar1 >> 0x3a == 0) {
    plVar8 = plVar3 + 2;
    uVar5 = *plVar8 - *plVar3;
    uVar7 = (long)uVar5 >> 5;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffbf < uVar5) {
      uVar7 = 0x3ffffffffffffff;
    }
    plStack_38 = plVar8;
    if (uVar7 == 0) {
      plStack_58 = (long *)0x0;
    }
    else {
      func_0x00010047e37c();
      plStack_58 = plVar8;
    }
    plStack_50 = plStack_58 + lVar10 * 8;
    plStack_40 = plStack_58 + uVar7 * 8;
    plStack_50[1] = 0;
    *plStack_50 = 0;
    plStack_50[3] = 0;
    plStack_50[2] = 0;
    plStack_50[5] = 0;
    plStack_50[4] = 0;
    plStack_50[7] = 0;
    plStack_50[6] = 0;
    plStack_48 = plStack_50 + 8;
    func_0x00010047e488(plVar3,&plStack_58);
    lVar10 = plVar3[1];
    if (plStack_48 != plStack_50) {
      plStack_48 = (long *)((long)plStack_48 +
                           ((long)plStack_50 + (0x3f - (long)plStack_48) & 0xffffffffffffffc0U));
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
    return lVar10;
  }
  FUN_104aaec40();
  if (plStack_48 != plStack_50) {
    plStack_48 = (long *)((long)plStack_48 +
                         (((long)plStack_50 - (long)plStack_48) + 0x3fU & 0xffffffffffffffc0));
  }
  if (plStack_58 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  lVar10 = plVar3[1] - *plVar3 >> 4;
  uVar1 = lVar10 * -0x3333333333333333 + 1;
  if (0x333333333333333 < uVar1) {
    FUN_104a77a24();
    FUN_104aabfe4(&plStack_b8);
    __Unwind_Resume();
    plVar3 = plVar3 + 1;
    plVar8 = (long *)*plVar3;
    if (plVar8 != (long *)0x0) {
      plVar4 = plVar3;
      do {
        plVar2 = plVar8 + 1;
        if (*param_2 <= plVar8[4]) {
          plVar4 = plVar8;
          plVar2 = plVar8;
        }
        plVar8 = (long *)*plVar2;
      } while (plVar8 != (long *)0x0);
      if ((plVar4 != plVar3) && (plVar4[4] <= *param_2)) {
        FUN_104aaef24();
        return 1;
      }
    }
    return 0;
  }
  plVar8 = plVar3 + 2;
  lVar6 = *plVar8 - *plVar3 >> 4;
  uVar7 = lVar6 * -0x6666666666666666;
  if (uVar7 < uVar1 || uVar7 - uVar1 == 0) {
    uVar7 = uVar1;
  }
  if (0x199999999999998 < (ulong)(lVar6 * -0x3333333333333333)) {
    uVar7 = 0x333333333333333;
  }
  plStack_98 = plVar8;
  if (uVar7 == 0) {
    plStack_b8 = (long *)0x0;
  }
  else {
    FUN_104a77a38();
    plStack_b8 = plVar8;
  }
  plStack_b0 = plStack_b8 + lVar10 * 2;
  plStack_a0 = plStack_b8 + uVar7 * 10;
  *(undefined4 *)plStack_b0 = 5;
  plStack_b0[2] = 0;
  plStack_b0[3] = 0;
  plStack_b0[1] = 0;
  plStack_b0[4] = *param_2;
  plVar8 = param_2 + 1;
  lVar6 = *plVar8;
  plVar4 = plStack_b0 + 5;
  *plVar4 = lVar6;
  lVar9 = param_2[2];
  plStack_b0[6] = lVar9;
  if (lVar9 == 0) {
    plStack_b0[4] = (long)plVar4;
  }
  else {
    *(long **)(lVar6 + 0x10) = plVar4;
    *param_2 = (long)plVar8;
    *plVar8 = 0;
    param_2[2] = 0;
  }
  plStack_b8[lVar10 * 2 + 7] = 0;
  plStack_b8[lVar10 * 2 + 8] = 0;
  plStack_b8[lVar10 * 2 + 9] = 0;
  plStack_a8 = plStack_b0 + 10;
  FUN_104aabe2c(plVar3,&plStack_b8);
  lVar10 = plVar3[1];
  FUN_104aabfe4(&plStack_b8);
  return lVar10;
}



/* Entry: 104aaec54; end: 104aaed6f;  */

long FUN_104aaec54(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  lVar9 = param_1[1] - *param_1 >> 6;
  uVar1 = lVar9 + 1;
  if (uVar1 >> 0x3a == 0) {
    plVar7 = param_1 + 2;
    uVar4 = *plVar7 - *param_1;
    uVar6 = (long)uVar4 >> 5;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffbf < uVar4) {
      uVar6 = 0x3ffffffffffffff;
    }
    plStack_28 = plVar7;
    if (uVar6 == 0) {
      plStack_48 = (long *)0x0;
    }
    else {
      func_0x00010047e37c();
      plStack_48 = plVar7;
    }
    plStack_40 = plStack_48 + lVar9 * 8;
    plStack_30 = plStack_48 + uVar6 * 8;
    plStack_40[1] = 0;
    *plStack_40 = 0;
    plStack_40[3] = 0;
    plStack_40[2] = 0;
    plStack_40[5] = 0;
    plStack_40[4] = 0;
    plStack_40[7] = 0;
    plStack_40[6] = 0;
    plStack_38 = plStack_40 + 8;
    func_0x00010047e488(param_1,&plStack_48);
    lVar9 = param_1[1];
    if (plStack_38 != plStack_40) {
      plStack_38 = (long *)((long)plStack_38 +
                           ((long)plStack_40 + (0x3f - (long)plStack_38) & 0xffffffffffffffc0U));
    }
    if (plStack_48 != (long *)0x0) {
      __ZdlPv();
    }
    return lVar9;
  }
  FUN_104aaec40();
  if (plStack_38 != plStack_40) {
    plStack_38 = (long *)((long)plStack_38 +
                         (((long)plStack_40 - (long)plStack_38) + 0x3fU & 0xffffffffffffffc0));
  }
  if (plStack_48 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  lVar9 = param_1[1] - *param_1 >> 4;
  uVar1 = lVar9 * -0x3333333333333333 + 1;
  if (0x333333333333333 < uVar1) {
    FUN_104a77a24();
    FUN_104aabfe4(&plStack_a8);
    __Unwind_Resume();
    param_1 = param_1 + 1;
    plVar7 = (long *)*param_1;
    if (plVar7 != (long *)0x0) {
      plVar3 = param_1;
      do {
        plVar2 = plVar7 + 1;
        if (*param_2 <= plVar7[4]) {
          plVar3 = plVar7;
          plVar2 = plVar7;
        }
        plVar7 = (long *)*plVar2;
      } while (plVar7 != (long *)0x0);
      if ((plVar3 != param_1) && (plVar3[4] <= *param_2)) {
        FUN_104aaef24();
        return 1;
      }
    }
    return 0;
  }
  plVar7 = param_1 + 2;
  lVar5 = *plVar7 - *param_1 >> 4;
  uVar6 = lVar5 * -0x6666666666666666;
  if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
    uVar6 = uVar1;
  }
  if (0x199999999999998 < (ulong)(lVar5 * -0x3333333333333333)) {
    uVar6 = 0x333333333333333;
  }
  plStack_88 = plVar7;
  if (uVar6 == 0) {
    plStack_a8 = (long *)0x0;
  }
  else {
    FUN_104a77a38();
    plStack_a8 = plVar7;
  }
  plStack_a0 = plStack_a8 + lVar9 * 2;
  plStack_90 = plStack_a8 + uVar6 * 10;
  *(undefined4 *)plStack_a0 = 5;
  plStack_a0[2] = 0;
  plStack_a0[3] = 0;
  plStack_a0[1] = 0;
  plStack_a0[4] = *param_2;
  plVar7 = param_2 + 1;
  lVar5 = *plVar7;
  plVar3 = plStack_a0 + 5;
  *plVar3 = lVar5;
  lVar8 = param_2[2];
  plStack_a0[6] = lVar8;
  if (lVar8 == 0) {
    plStack_a0[4] = (long)plVar3;
  }
  else {
    *(long **)(lVar5 + 0x10) = plVar3;
    *param_2 = (long)plVar7;
    *plVar7 = 0;
    param_2[2] = 0;
  }
  plStack_a8[lVar9 * 2 + 7] = 0;
  plStack_a8[lVar9 * 2 + 8] = 0;
  plStack_a8[lVar9 * 2 + 9] = 0;
  plStack_98 = plStack_a0 + 10;
  FUN_104aabe2c(param_1,&plStack_a8);
  lVar9 = param_1[1];
  FUN_104aabfe4(&plStack_a8);
  return lVar9;
}



/* Entry: 104aaed70; end: 104aaeebf;  */

long FUN_104aaed70(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar5 = param_1[1] - *param_1 >> 4;
  uVar1 = lVar5 * -0x3333333333333333 + 1;
  if (uVar1 < 0x333333333333334) {
    plVar6 = param_1 + 2;
    lVar4 = *plVar6 - *param_1 >> 4;
    uVar7 = lVar4 * -0x6666666666666666;
    if (uVar7 < uVar1 || uVar7 - uVar1 == 0) {
      uVar7 = uVar1;
    }
    if (0x199999999999998 < (ulong)(lVar4 * -0x3333333333333333)) {
      uVar7 = 0x333333333333333;
    }
    plStack_38 = plVar6;
    if (uVar7 == 0) {
      plStack_58 = (long *)0x0;
    }
    else {
      FUN_104a77a38();
      plStack_58 = plVar6;
    }
    plStack_50 = plStack_58 + lVar5 * 2;
    plStack_40 = plStack_58 + uVar7 * 10;
    *(undefined4 *)plStack_50 = 5;
    plStack_50[2] = 0;
    plStack_50[3] = 0;
    plStack_50[1] = 0;
    plStack_50[4] = *param_2;
    plVar6 = param_2 + 1;
    lVar4 = *plVar6;
    plVar3 = plStack_50 + 5;
    *plVar3 = lVar4;
    lVar8 = param_2[2];
    plStack_50[6] = lVar8;
    if (lVar8 == 0) {
      plStack_50[4] = (long)plVar3;
    }
    else {
      *(long **)(lVar4 + 0x10) = plVar3;
      *param_2 = (long)plVar6;
      *plVar6 = 0;
      param_2[2] = 0;
    }
    plStack_58[lVar5 * 2 + 7] = 0;
    plStack_58[lVar5 * 2 + 8] = 0;
    plStack_58[lVar5 * 2 + 9] = 0;
    plStack_48 = plStack_50 + 10;
    FUN_104aabe2c(param_1,&plStack_58);
    lVar5 = param_1[1];
    FUN_104aabfe4(&plStack_58);
    return lVar5;
  }
  FUN_104a77a24();
  FUN_104aabfe4(&plStack_58);
  __Unwind_Resume();
  param_1 = param_1 + 1;
  plVar6 = (long *)*param_1;
  if (plVar6 != (long *)0x0) {
    plVar3 = param_1;
    do {
      plVar2 = plVar6 + 1;
      if (*param_2 <= plVar6[4]) {
        plVar3 = plVar6;
        plVar2 = plVar6;
      }
      plVar6 = (long *)*plVar2;
    } while (plVar6 != (long *)0x0);
    if ((plVar3 != param_1) && (plVar3[4] <= *param_2)) {
      FUN_104aaef24();
      return 1;
    }
  }
  return 0;
}



/* Entry: 104aaeec0; end: 104aaef23;  */

undefined8 FUN_104aaeec0(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar3;
  if (plVar4 != (long *)0x0) {
    plVar2 = plVar3;
    do {
      plVar1 = plVar4 + 1;
      if (*param_2 <= plVar4[4]) {
        plVar2 = plVar4;
        plVar1 = plVar4;
      }
      plVar4 = (long *)*plVar1;
    } while (plVar4 != (long *)0x0);
    if ((plVar2 != plVar3) && (plVar2[4] <= *param_2)) {
      FUN_104aaef24();
      return 1;
    }
  }
  return 0;
}



/* Entry: 104aaef24; end: 104aaeff3;  */

undefined8 FUN_104aaef24(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  func_0x000104aaef84();
  plVar4 = *(long **)(param_2 + 0x28);
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
      (**(code **)(*plVar4 + 8))();
    }
  }
  __ZdlPv(param_2);
  return param_1;
}



/* Entry: 104aaeff4; end: 104aaf09b;  */

void FUN_104aaeff4(long param_1,long param_2)

{
  code *pcVar1;
  long lStack_28;
  
  lStack_28 = param_2;
  if (param_2 < 1) {
    func_0x00010bdab730();
  }
  else {
    func_0x000100460448();
    if (param_2 <= *(long *)(param_1 + 0x58)) {
      FUN_104aaf09c(param_1 + 0x40,&lStack_28);
      func_0x000100466b80(param_1);
      return;
    }
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channelz_registry.cc"
                      ,0x3c,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104aaf080);
  (*pcVar1)();
}



/* Entry: 104aaf09c; end: 104aaf183;  */

undefined8 FUN_104aaf09c(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar2;
  if (plVar3 != (long *)0x0) {
    plVar4 = plVar2;
    do {
      plVar1 = plVar3 + 1;
      if (*param_2 <= plVar3[4]) {
        plVar4 = plVar3;
        plVar1 = plVar3;
      }
      plVar3 = (long *)*plVar1;
    } while (plVar3 != (long *)0x0);
    if ((plVar4 != plVar2) && (plVar4[4] <= *param_2)) {
      func_0x000104aaf114(param_1,plVar4);
      __ZdlPv(plVar4);
      return 1;
    }
  }
  return 0;
}



/* Entry: 104aaf184; end: 104aaf19b;  */

void FUN_104aaf184(long param_1)

{
  if ((long *)**(long **)(param_1 + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104adfc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)**(long **)(param_1 + 8) + 0x48))();
    return;
  }
  return;
}



/* Entry: 104aaf19c; end: 104aaf213;  */

void FUN_104aaf19c(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uVar4;
  ulong uStack_28;
  
  uVar4 = *param_2;
  if ((uVar4 & 1) != 0) {
    piVar3 = (int *)(uVar4 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_28 = uVar4;
  func_0x00010082b66c(param_1,&uStack_28);
  if ((uVar4 & 1) != 0) {
    func_0x00010084dad0(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 104aaf214; end: 104aaf21b;  */

void FUN_104aaf214(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104aaf218);
  (*pcVar1)();
}



/* Entry: 104aaf21c; end: 104aaf227;  */

void FUN_104aaf21c(long param_1)

{
  char cVar1;
  bool bVar2;
  long *extraout_x8;
  long *plVar3;
  
  _abort();
  plVar3 = *(long **)(param_1 + 0x10);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = *plVar3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *extraout_x8 = param_1 + 8;
  return;
}



/* Entry: 104aaf228; end: 104aaf267;  */

void FUN_104aaf228(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_2 + 0x10);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = *plVar3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *param_1 = param_2 + 8;
  return;
}



/* Entry: 104aaf268; end: 104aaf2ef;  */

void FUN_104aaf268(long param_1)

{
  undefined8 *puVar1;
  ulong uStack_28;
  
  puVar1 = (undefined8 *)0x30;
  func_0x000100460200();
  *puVar1 = FUN_104ab0b54;
  puVar1[1] = param_1;
  puVar1[3] = &UNK_1004be1e0;
  puVar1[4] = puVar1;
  puVar1[5] = 0;
  uStack_28 = 0;
  func_0x0001004bd618(*(undefined8 *)(param_1 + 0x28),puVar1 + 2,&uStack_28,"wakeup");
  if ((uStack_28 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104aaf2f0; end: 104aaf337;  */

void FUN_104aaf2f0(long param_1)

{
  undefined8 *puVar1;
  ulong uStack_28;
  
  puVar1 = (undefined8 *)0x30;
  func_0x000100460200();
  *puVar1 = FUN_104ab0b54;
  puVar1[1] = param_1 + -8;
  puVar1[3] = &UNK_1004be1e0;
  puVar1[4] = puVar1;
  puVar1[5] = 0;
  uStack_28 = 0;
  func_0x0001004bd618(*(undefined8 *)(param_1 + 0x20),puVar1 + 2,&uStack_28,"wakeup");
  if ((uStack_28 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104aaf338; end: 104aaf37b;  */

void FUN_104aaf338(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  puVar2 = &stack0xfffffffffffffff0;
  puVar3 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar3 == (undefined8 *)0x0) {
    unaff_x30 = FUN_104aaf37c;
    puVar3 = param_2;
    func_0x00010bdab840();
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    param_2 = param_1;
    unaff_x29 = puVar2;
  }
  else if ((puVar3[7] == 0) || (lVar1 = puVar3[7] + -1, puVar3[7] = lVar1, lVar1 != 0)) {
    return;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *puVar3;
  *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
  *(char **)((long)register0x00000008 + -0x30) = "Flusher::Complete";
  func_0x0001004dfd88(param_2 + 3,(undefined1 *)((long)register0x00000008 + -0x28),
                      (undefined1 *)((long)register0x00000008 + -0x38),
                      (undefined1 *)((long)register0x00000008 + -0x30));
  if ((*(ulong *)((long)register0x00000008 + -0x38) & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104aaf37c; end: 104aaf3e7;  */

void FUN_104aaf37c(long param_1,undefined8 *param_2)

{
  ulong uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *param_2;
  uStack_38 = 0;
  pcStack_30 = "Flusher::Complete";
  func_0x0001004dfd88(param_1 + 0x18,&uStack_28,&uStack_38,&pcStack_30);
  if ((uStack_38 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104aaf3e8; end: 104aaf47b;  */

void FUN_104aaf3e8(long *param_1,ulong *param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  ulong uStack_58;
  ulong uStack_28;
  
  lVar3 = *param_1;
  *param_1 = 0;
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x38) != 0) {
      *(undefined8 *)(lVar3 + 0x38) = 0;
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
      FUN_104aaf47c(param_3,lVar3,&uStack_28);
      if ((uStack_28 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    return;
  }
  func_0x00010bdab874();
  FUN_104bd46a0();
  func_0x0001004bdf74(&uStack_28);
  __Unwind_Resume(param_1);
  uStack_58 = *param_3;
  if ((uStack_58 & 1) != 0) {
    piVar4 = (int *)(uStack_58 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_104adfce8(lVar3,&uStack_58,param_1 + 3);
  if ((uStack_58 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104aaf47c; end: 104aaf4f3;  */

void FUN_104aaf47c(long param_1,undefined8 param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uStack_28;
  
  uStack_28 = *param_3;
  if ((uStack_28 & 1) != 0) {
    piVar3 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_104adfce8(param_2,&uStack_28,param_1 + 0x18);
  if ((uStack_28 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104aaf4f4; end: 104aaf4f7;  */

undefined8 * FUN_104aaf4f4(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_1107c4cb8;
  param_1[1] = &PTR_FUN_1107c4d10;
  if (param_1[0x16] == 0) {
    if ((param_1[0x14] & 1) != 0) {
      func_0x00010084dad0();
    }
    func_0x0001006153ac(param_1 + 0xc);
    (**(code **)(*(long *)param_1[0xb] + 8))();
    *param_1 = &PTR_FUN_1107c4c40;
    param_1[1] = &PTR_FUN_1107c4c98;
    return param_1;
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                      ,0x1e5,2,"assertion failed: %s");
  func_0x000107c60ebc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100837134);
  (*pcVar1)();
}



/* Entry: 104aaf4f8; end: 104aaf50b;  */

void FUN_104aaf4f8(void)

{
  func_0x000100837090();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104aaf50c; end: 104aaf6cf;  */

void FUN_104aaf50c(long param_1,ulong *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uStack_30;
  ulong uStack_28;
  
  uVar4 = *(ulong *)(param_1 + 0xa0);
  uVar7 = *param_2;
  if (uVar7 != uVar4) {
    if ((uVar7 & 1) != 0) {
      piVar8 = (int *)(uVar7 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = *piVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar7 = *param_2;
    }
    *(ulong *)(param_1 + 0xa0) = uVar7;
    if ((uVar4 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  (**(code **)(**(long **)(param_1 + 0x58) + 8))();
  *(undefined ***)(param_1 + 0x58) = &PTR_PTR_1130a5848;
  (**(code **)(PTR_PTR_1130a5848 + 8))();
  iVar1 = *(int *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xa8) = 3;
  if (iVar1 == 1) {
    if (*(int *)(param_1 + 0xac) == 1) {
      *(undefined4 *)(param_1 + 0xac) = 5;
    }
    puVar5 = (undefined8 *)0x30;
    __Znwm();
    *puVar5 = 0;
    puVar5[1] = FUN_104ab0cf8;
    puVar5[2] = puVar5;
    puVar5[3] = 0;
    uVar9 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    puVar5[4] = uVar9;
    puVar5[5] = param_1;
    plVar10 = *(long **)(param_1 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    uStack_28 = *(ulong *)(param_1 + 0xa0);
    if ((uStack_28 & 1) != 0) {
      piVar8 = (int *)(uStack_28 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = *piVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x0001004bd618(uVar9,puVar5,&uStack_28,"cancel pending batch");
    if ((uStack_28 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  piVar8 = *(int **)(param_1 + 0x70);
  if ((piVar8 != (int *)0x0) && (*piVar8 - 5U < 3)) {
    *piVar8 = 8;
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    uVar6 = *(undefined8 *)(piVar8 + 2);
    piVar8[2] = 0;
    piVar8[3] = 0;
    uStack_30 = *param_2;
    if ((uStack_30 & 1) != 0) {
      piVar8 = (int *)(uStack_30 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = *piVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x0001004bd618(uVar9,uVar6,&uStack_30,"propagate cancellation");
    if ((uStack_30 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  return;
}



/* Entry: 104aaf6d0; end: 104aaf913;  */

/* WARNING: Removing unreachable block (ram,0x000104aaf834) */
/* WARNING: Removing unreachable block (ram,0x000104aaf8b0) */

undefined8 * FUN_104aaf6d0(long param_1,uint *param_2,ulong *param_3)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  int iVar12;
  int *piVar13;
  long lVar14;
  undefined8 extraout_x8;
  ulong uVar15;
  long *plVar16;
  undefined *extraout_x9;
  undefined *extraout_x9_00;
  undefined *extraout_x9_01;
  undefined *extraout_x9_02;
  uint *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 auStack_1c0 [3];
  undefined8 uStack_1a8;
  undefined8 *puStack_110;
  long lStack_108;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  ulong uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  uint uStack_4c;
  long *aplStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_4c = 2;
  puStack_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  lStack_58 = 0;
  uStack_70 = *param_3;
  if ((uStack_70 & 1) != 0) {
    piVar13 = (int *)(uStack_70 - 1);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar4) {
        *piVar13 = *piVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  func_0x000100831658(&uStack_70,*(undefined8 *)(param_1 + 0x30),&uStack_4c,&puStack_68,0,0);
  if ((uStack_70 & 1) != 0) {
    func_0x00010084dad0();
  }
  *param_2 = *param_2 | 0x400;
  param_2[0x62] = uStack_4c;
  if (lStack_58 < 0) {
    func_0x000100033dac(&puStack_90,puStack_68,uStack_60);
  }
  else {
    uStack_88 = uStack_60;
    puStack_90 = puStack_68;
    lStack_80 = lStack_58;
  }
  func_0x000100561708(aplStack_48,&puStack_90);
  func_0x00010084bde4(param_2,aplStack_48);
  if ((long *)0x1 < aplStack_48[0]) {
    do {
      lVar14 = *aplStack_48[0];
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(aplStack_48[0],0x10);
      if (bVar4) {
        *aplStack_48[0] = lVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar14 + -1 == 0) {
      (*(code *)aplStack_48[0][1])();
    }
  }
  if (lStack_80 < 0) {
    __ZdlPv(puStack_90);
  }
  uVar2 = *param_2;
  puVar17 = param_2 + 2;
  *param_2 = uVar2 | 0x4000000;
  if ((uVar2 >> 0x1a & 1) == 0) {
    param_2[4] = 0;
    param_2[5] = 0;
    puVar17[0] = 0;
    puVar17[1] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
  }
  puStack_98 = (undefined8 *)*param_3;
  if (((ulong)puStack_98 & 1) != 0) {
    piVar13 = (int *)((long)puStack_98 - 1);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar4) {
        *piVar13 = *piVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_104aba950(aplStack_48,&puStack_98);
  iVar12 = (int)aplStack_48;
  func_0x000104ab1148(puVar17);
  puVar5 = puStack_98;
  if (((ulong)puStack_98 & 1) != 0) {
    func_0x00010084dad0();
  }
  if (lStack_58 < 0) {
    puVar5 = puStack_68;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    if (iVar12 != 0) {
      FUN_104bd46a0();
      func_0x0001004bdf74(&puStack_98);
      if (lStack_58 < 0) {
        __ZdlPv(puStack_68);
      }
    }
    __Unwind_Resume();
    puVar10 = auStack_1c0;
    lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
    auStack_1c0[0] = 0;
    uStack_1a8 = 0;
    plVar16 = (long *)puVar5[2];
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *plVar16 = *plVar16 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    ppuVar6 = &PTR___tlv_bootstrap_11340d8b8;
    puStack_110 = puVar5;
    (*(code *)PTR___tlv_bootstrap_11340d8b8)();
    puVar18 = *ppuVar6;
    *ppuVar6 = extraout_x9;
    ppuVar7 = &PTR___tlv_bootstrap_11340d8d0;
    (*(code *)PTR___tlv_bootstrap_11340d8d0)();
    puVar19 = *ppuVar7;
    *ppuVar7 = extraout_x9_00;
    ppuVar8 = &PTR___tlv_bootstrap_11340d8e8;
    (*(code *)PTR___tlv_bootstrap_11340d8e8)();
    puVar20 = *ppuVar8;
    *ppuVar8 = extraout_x9_01;
    ppuVar9 = &PTR___tlv_bootstrap_11340d900;
    (*(code *)PTR___tlv_bootstrap_11340d900)();
    puVar21 = *ppuVar9;
    *ppuVar9 = extraout_x9_02;
    func_0x00010082bc50(extraout_x8,auStack_1c0);
    *ppuVar9 = puVar21;
    *ppuVar8 = puVar20;
    *ppuVar7 = puVar19;
    *ppuVar6 = puVar18;
    func_0x00010061694c();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
      ___stack_chk_fail();
      *ppuVar9 = puVar21;
      *ppuVar8 = puVar20;
      *ppuVar7 = puVar19;
      *ppuVar6 = puVar18;
      func_0x00010061694c(auStack_1c0);
      __Unwind_Resume();
      puVar5 = puVar10;
      func_0x00010061180c();
      *puVar5 = &PTR_FUN_1107c4d30;
      puVar5[1] = &PTR_FUN_1107c4d88;
      puVar5[0x14] = 0;
      puVar5[0x13] = 0;
      puVar5[0xb] = &PTR_PTR_1130a5848;
      puVar5[0xc] = 0;
      puVar5[0xd] = 0;
      puVar5[0xe] = 0;
      puVar5[0x16] = 0;
      puVar5[0x15] = 0;
      *(undefined1 *)(puVar5 + 0x17) = 0;
      if (puVar5[10] != 0) {
        puVar11 = (ulong *)puVar10[4];
        do {
          uVar15 = *puVar11;
          uVar1 = uVar15 + 0x20;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar11,0x10);
          if (bVar4) {
            *puVar11 = uVar1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar11[2] < uVar1) {
          func_0x0001004bbee0(puVar11,0x20);
        }
        else {
          puVar11 = (ulong *)((long)puVar11 + uVar15 + 0x30);
        }
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar11[2] = 0;
        puVar10[0xd] = puVar11;
      }
      puVar10[0x10] = FUN_104aafb70;
      puVar10[0x11] = puVar10;
      puVar10[0x12] = 0;
      return puVar10;
    }
    return puVar10;
  }
  return puVar5;
}



/* Entry: 104aaf914; end: 104aafa73;  */

undefined8 * FUN_104aaf914(long param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  undefined8 extraout_x8;
  ulong uVar11;
  long *plVar12;
  undefined *extraout_x9;
  undefined *extraout_x9_00;
  undefined *extraout_x9_01;
  undefined *extraout_x9_02;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 auStack_120 [3];
  undefined8 uStack_108;
  long lStack_70;
  long lStack_68;
  
  puVar8 = auStack_120;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_120[0] = 0;
  uStack_108 = 0;
  plVar12 = *(long **)(param_1 + 0x10);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = *plVar12 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  ppuVar4 = &PTR___tlv_bootstrap_11340d8b8;
  lStack_70 = param_1;
  (*(code *)PTR___tlv_bootstrap_11340d8b8)();
  puVar13 = *ppuVar4;
  *ppuVar4 = extraout_x9;
  ppuVar5 = &PTR___tlv_bootstrap_11340d8d0;
  (*(code *)PTR___tlv_bootstrap_11340d8d0)();
  puVar14 = *ppuVar5;
  *ppuVar5 = extraout_x9_00;
  ppuVar6 = &PTR___tlv_bootstrap_11340d8e8;
  (*(code *)PTR___tlv_bootstrap_11340d8e8)();
  puVar15 = *ppuVar6;
  *ppuVar6 = extraout_x9_01;
  ppuVar7 = &PTR___tlv_bootstrap_11340d900;
  (*(code *)PTR___tlv_bootstrap_11340d900)();
  puVar16 = *ppuVar7;
  *ppuVar7 = extraout_x9_02;
  func_0x00010082bc50(extraout_x8,auStack_120);
  *ppuVar7 = puVar16;
  *ppuVar6 = puVar15;
  *ppuVar5 = puVar14;
  *ppuVar4 = puVar13;
  func_0x00010061694c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar8;
  }
  ___stack_chk_fail();
  *ppuVar7 = puVar16;
  *ppuVar6 = puVar15;
  *ppuVar5 = puVar14;
  *ppuVar4 = puVar13;
  func_0x00010061694c(auStack_120);
  __Unwind_Resume();
  puVar9 = puVar8;
  func_0x00010061180c();
  *puVar9 = &PTR_FUN_1107c4d30;
  puVar9[1] = &PTR_FUN_1107c4d88;
  puVar9[0x14] = 0;
  puVar9[0x13] = 0;
  puVar9[0xb] = &PTR_PTR_1130a5848;
  puVar9[0xc] = 0;
  puVar9[0xd] = 0;
  puVar9[0xe] = 0;
  puVar9[0x16] = 0;
  puVar9[0x15] = 0;
  *(undefined1 *)(puVar9 + 0x17) = 0;
  if (puVar9[10] != 0) {
    puVar10 = (ulong *)puVar8[4];
    do {
      uVar11 = *puVar10;
      uVar1 = uVar11 + 0x20;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar10,0x10);
      if (bVar3) {
        *puVar10 = uVar1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar10[2] < uVar1) {
      func_0x0001004bbee0(puVar10,0x20);
    }
    else {
      puVar10 = (ulong *)((long)puVar10 + uVar11 + 0x30);
    }
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar8[0xd] = puVar10;
  }
  puVar8[0x10] = FUN_104aafb70;
  puVar8[0x11] = puVar8;
  puVar8[0x12] = 0;
  return puVar8;
}



/* Entry: 104aafa74; end: 104aafb6f;  */

undefined8 * FUN_104aafa74(undefined8 *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  
  puVar4 = param_1;
  func_0x00010061180c();
  *puVar4 = &PTR_FUN_1107c4d30;
  puVar4[1] = &PTR_FUN_1107c4d88;
  puVar4[0x14] = 0;
  puVar4[0x13] = 0;
  puVar4[0xb] = &PTR_PTR_1130a5848;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  puVar4[0x16] = 0;
  puVar4[0x15] = 0;
  *(undefined1 *)(puVar4 + 0x17) = 0;
  if (puVar4[10] != 0) {
    puVar5 = (ulong *)param_1[4];
    do {
      uVar6 = *puVar5;
      uVar1 = uVar6 + 0x20;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar3) {
        *puVar5 = uVar1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar5[2] < uVar1) {
      func_0x0001004bbee0(puVar5,0x20);
    }
    else {
      puVar5 = (ulong *)((long)puVar5 + uVar6 + 0x30);
    }
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    param_1[0xd] = puVar5;
  }
  param_1[0x10] = FUN_104aafb70;
  param_1[0x11] = param_1;
  param_1[0x12] = 0;
  return param_1;
}



/* Entry: 104aafb70; end: 104aafbdb;  */

void FUN_104aafb70(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uVar4;
  ulong uStack_28;
  
  uVar4 = *param_2;
  if ((uVar4 & 1) != 0) {
    piVar3 = (int *)(uVar4 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_28 = uVar4;
  FUN_104ab0810(param_1,&uStack_28);
  if ((uVar4 & 1) != 0) {
    func_0x00010084dad0(uVar4);
  }
  return;
}



/* Entry: 104aafbdc; end: 104aafc8b;  */

undefined8 * FUN_104aafbdc(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_1107c4d30;
  param_1[1] = &PTR_FUN_1107c4d88;
  if (param_1[0x16] == 0) {
    func_0x0001006153ac(param_1 + 0x14);
    if ((param_1[0x13] & 1) != 0) {
      func_0x00010084dad0();
    }
    (**(code **)(*(long *)param_1[0xb] + 8))();
    *param_1 = &PTR_FUN_1107c4c40;
    param_1[1] = &PTR_FUN_1107c4c98;
    return param_1;
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                      ,0x3ba,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104aafc80);
  (*pcVar1)();
}



/* Entry: 104aafc8c; end: 104aafc8f;  */

undefined8 * FUN_104aafc8c(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_1107c4d30;
  param_1[1] = &PTR_FUN_1107c4d88;
  if (param_1[0x16] == 0) {
    func_0x0001006153ac(param_1 + 0x14);
    if ((param_1[0x13] & 1) != 0) {
      func_0x00010084dad0();
    }
    (**(code **)(*(long *)param_1[0xb] + 8))();
    *param_1 = &PTR_FUN_1107c4c40;
    param_1[1] = &PTR_FUN_1107c4c98;
    return param_1;
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                      ,0x3ba,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104aafc80);
  (*pcVar1)();
}



/* Entry: 104aafc90; end: 104aafcc7;  */

void FUN_104aafc90(void)

{
  FUN_104aafbdc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104aafcc8; end: 104ab00c7;  */

void FUN_104aafcc8(long param_1,ulong *param_2,ulong *param_3)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  code *pcVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  ulong **ppuVar12;
  ulong *puVar13;
  ulong *puVar14;
  undefined8 uVar15;
  undefined *extraout_x8;
  undefined *extraout_x8_00;
  undefined *extraout_x8_01;
  undefined *extraout_x8_02;
  long *plVar16;
  ulong uVar17;
  undefined4 *puVar18;
  ulong *puVar19;
  int *piVar20;
  undefined4 uVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  char *pcStack_160;
  undefined *puStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong *puStack_130;
  ulong auStack_128 [3];
  undefined8 uStack_110;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = &PTR___tlv_bootstrap_11340d8b8;
  (*(code *)PTR___tlv_bootstrap_11340d8b8)(*(undefined8 *)(param_1 + 0x20));
  puStack_150 = *ppuVar7;
  *ppuVar7 = extraout_x8;
  ppuVar8 = &PTR___tlv_bootstrap_11340d8d0;
  (*(code *)PTR___tlv_bootstrap_11340d8d0)(*(undefined8 *)(param_1 + 0x40));
  puVar22 = *ppuVar8;
  *ppuVar8 = extraout_x8_00;
  ppuVar9 = &PTR___tlv_bootstrap_11340d8e8;
  (*(code *)PTR___tlv_bootstrap_11340d8e8)(*(undefined8 *)(param_1 + 0x48));
  puVar23 = *ppuVar9;
  *ppuVar9 = extraout_x8_01;
  ppuVar10 = &PTR___tlv_bootstrap_11340d900;
  (*(code *)PTR___tlv_bootstrap_11340d900)(param_1 + 0x38);
  puVar24 = *ppuVar10;
  *ppuVar10 = extraout_x8_02;
  param_2[7] = 1;
  auStack_128[0] = 0;
  uStack_110 = 0;
  plVar16 = *(long **)(param_1 + 0x10);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar4) {
      *plVar16 = *plVar16 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar2 = (byte)param_2[2];
  puStack_130 = param_2;
  lStack_78 = param_1;
  if ((bVar2 >> 6 & 1) != 0) {
    if ((bVar2 & 0x3f) != 0) {
      pcStack_160 = 
      "!batch->send_initial_metadata && !batch->send_trailing_metadata && !batch->send_message && !batch->recv_initial_metadata && !batch->recv_message && !batch->recv_trailing_metadata"
      ;
      uVar15 = 0x3d2;
      goto LAB_104ab0020;
    }
    uVar17 = *(ulong *)(param_2[1] + 0x98);
    if ((uVar17 & 1) != 0) {
      piVar20 = (int *)(uVar17 - 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar4) {
          *piVar20 = *piVar20 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    param_3 = auStack_128;
    uStack_138 = uVar17;
    FUN_104ab00c8(param_1,&uStack_138,param_3);
    if ((uVar17 & 1) != 0) {
      func_0x00010084dad0(uVar17);
    }
    lVar11 = *(long *)(param_1 + 0x10);
    func_0x0001004bd910(lVar11,*(long *)(lVar11 + 0x28) + -1);
    if (lVar11 == *(long *)(param_1 + 0x18)) {
      puVar14 = auStack_128;
      FUN_104aaf338(&puStack_130);
      goto LAB_104aaff68;
    }
    goto LAB_104aaff5c;
  }
  if ((bVar2 >> 3 & 1) != 0) {
    if ((bVar2 & 0x37) == 0) {
      if (*(int *)(param_1 + 0xa8) == 0) {
        uVar17 = param_2[1];
        *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(uVar17 + 0x38);
        *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(uVar17 + 0x48);
        *(long *)(uVar17 + 0x48) = param_1 + 0x78;
        *(undefined4 *)(param_1 + 0xa8) = 1;
        goto LAB_104aafdf0;
      }
      pcStack_160 = "recv_initial_state_ == RecvInitialState::kInitial";
      uVar15 = 0x3e5;
    }
    else {
      pcStack_160 = 
      "!batch->send_initial_metadata && !batch->send_trailing_metadata && !batch->send_message && !batch->recv_message && !batch->recv_trailing_metadata"
      ;
      uVar15 = 0x3e3;
    }
LAB_104ab0020:
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                        ,uVar15,2,"assertion failed: %s");
    goto LAB_104ab003c;
  }
LAB_104aafdf0:
  puVar18 = *(undefined4 **)(param_1 + 0x68);
  if ((puVar18 == (undefined4 *)0x0) || ((param_2[2] & 1) == 0)) {
    bVar4 = false;
    goto LAB_104aafec8;
  }
  uVar21 = 2;
  switch(*puVar18) {
  case 1:
    uVar21 = 3;
  case 0:
    *puVar18 = uVar21;
    break;
  case 2:
  case 3:
  case 4:
  case 5:
    goto LAB_104ab003c;
  case 6:
    uVar17 = *(ulong *)(param_1 + 0x98);
    if ((uVar17 & 1) != 0) {
      piVar20 = (int *)(uVar17 - 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar4) {
          *piVar20 = *piVar20 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    param_3 = auStack_128;
    uStack_140 = uVar17;
    FUN_104aaf3e8(&puStack_130,&uStack_140,param_3);
    if ((uVar17 & 1) != 0) {
      func_0x00010084dad0(uVar17);
    }
  }
  func_0x000100615414(*(long *)(param_1 + 0x68) + 8,&puStack_130);
  if (puStack_130 == (ulong *)0x0) {
LAB_104aaff48:
    puVar14 = auStack_128;
    FUN_104ab0298(param_1);
  }
  else {
    bVar4 = true;
LAB_104aafec8:
    puVar14 = puStack_130;
    if (((byte)puStack_130[2] >> 1 & 1) != 0) {
      iVar1 = *(int *)(param_1 + 0xac);
      if (iVar1 == 0) {
        func_0x000100615414(param_1 + 0xa0,&puStack_130);
        *(undefined4 *)(param_1 + 0xac) = 1;
        goto LAB_104aaff48;
      }
      if (iVar1 == 3) {
        uVar17 = *(ulong *)(param_1 + 0x98);
        if ((uVar17 & 1) != 0) {
          piVar20 = (int *)(uVar17 - 1);
          do {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar20,0x10);
            if (bVar5) {
              *piVar20 = *piVar20 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puVar14 = &uStack_148;
        param_3 = auStack_128;
        uStack_148 = uVar17;
        FUN_104aaf3e8(&puStack_130,puVar14,param_3);
        if ((uVar17 & 1) != 0) {
          func_0x00010084dad0(uVar17);
        }
      }
      else if (iVar1 - 1U < 2) {
LAB_104ab003c:
        _abort();
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x104ab0044);
        (*pcVar6)();
      }
    }
    if (bVar4) goto LAB_104aaff48;
  }
  if (puStack_130 != (ulong *)0x0) {
LAB_104aaff5c:
    puVar14 = auStack_128;
    func_0x00010061664c(&puStack_130);
  }
LAB_104aaff68:
  func_0x00010061694c(auStack_128);
  ppuVar12 = &puStack_130;
  func_0x0001006153ac();
  *ppuVar10 = puVar24;
  *ppuVar9 = puVar23;
  *ppuVar8 = puVar22;
  *ppuVar7 = puStack_150;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if ((int)puVar14 != 0) {
      FUN_104bd46a0();
      func_0x0001004bdf74(&uStack_138);
      func_0x00010061694c(auStack_128);
      func_0x0001006153ac(&puStack_130);
      *ppuVar10 = puVar24;
      *ppuVar9 = puVar23;
      *ppuVar8 = puVar22;
      *ppuVar7 = puStack_150;
    }
    __Unwind_Resume();
    pcStack_168 = FUN_104ab00c8;
    puVar13 = ppuVar12[0x13];
    puVar19 = (ulong *)*puVar14;
    ppuStack_190 = ppuVar10;
    ppuStack_188 = ppuVar9;
    ppuStack_180 = ppuVar8;
    ppuStack_178 = ppuVar7;
    puStack_170 = &stack0xfffffffffffffff0;
    if (puVar19 != puVar13) {
      if (((ulong)puVar19 & 1) != 0) {
        piVar20 = (int *)((long)puVar19 + -1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar4) {
            *piVar20 = *piVar20 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puVar19 = (ulong *)*puVar14;
      }
      ppuVar12[0x13] = puVar19;
      if (((ulong)puVar13 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    (**(code **)(*ppuVar12[0xb] + 8))();
    ppuVar12[0xb] = (ulong *)&PTR_PTR_1130a5848;
    (**(code **)(PTR_PTR_1130a5848 + 8))();
    iVar1 = *(int *)((long)ppuVar12 + 0xac);
    *(undefined4 *)((long)ppuVar12 + 0xac) = 3;
    if (iVar1 == 1) {
      uVar17 = *puVar14;
      if ((uVar17 & 1) != 0) {
        piVar20 = (int *)(uVar17 - 1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar4) {
            *piVar20 = *piVar20 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uStack_198 = uVar17;
      FUN_104aaf3e8(ppuVar12 + 0x14,&uStack_198,param_3);
      if ((uVar17 & 1) != 0) {
        func_0x00010084dad0(uVar17);
      }
    }
    puVar13 = ppuVar12[0xd];
    if (puVar13 != (ulong *)0x0) {
      if ((int)*puVar13 - 2U < 3) {
        uVar17 = *puVar14;
        if ((uVar17 & 1) != 0) {
          piVar20 = (int *)(uVar17 - 1);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
            if (bVar4) {
              *piVar20 = *piVar20 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        uStack_1a0 = uVar17;
        FUN_104aaf3e8(puVar13 + 1,&uStack_1a0,param_3);
        if ((uVar17 & 1) != 0) {
          func_0x00010084dad0(uVar17);
        }
      }
      *(undefined4 *)ppuVar12[0xd] = 6;
    }
    puVar13 = ppuVar12[0xe];
    ppuVar12[0xe] = (ulong *)0x0;
    if (puVar13 != (ulong *)0x0) {
      uStack_1a8 = *puVar14;
      if ((uStack_1a8 & 1) != 0) {
        piVar20 = (int *)(uStack_1a8 - 1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar4) {
            *piVar20 = *piVar20 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      func_0x00010082bfa8(param_3,puVar13,&uStack_1a8,"original_recv_initial_metadata");
      if ((uStack_1a8 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    return;
  }
  return;
}



/* Entry: 104ab00c8; end: 104ab0297;  */

void FUN_104ab00c8(long param_1,ulong *param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  int *piVar8;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  uVar4 = *(ulong *)(param_1 + 0x98);
  uVar6 = *param_2;
  if (uVar6 != uVar4) {
    if ((uVar6 & 1) != 0) {
      piVar7 = (int *)(uVar6 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar6 = *param_2;
    }
    *(ulong *)(param_1 + 0x98) = uVar6;
    if ((uVar4 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  (**(code **)(**(long **)(param_1 + 0x58) + 8))();
  *(undefined ***)(param_1 + 0x58) = &PTR_PTR_1130a5848;
  (**(code **)(PTR_PTR_1130a5848 + 8))();
  iVar1 = *(int *)(param_1 + 0xac);
  *(undefined4 *)(param_1 + 0xac) = 3;
  if (iVar1 == 1) {
    uVar4 = *param_2;
    if ((uVar4 & 1) != 0) {
      piVar7 = (int *)(uVar4 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_38 = uVar4;
    FUN_104aaf3e8(param_1 + 0xa0,&uStack_38,param_3);
    if ((uVar4 & 1) != 0) {
      func_0x00010084dad0(uVar4);
    }
  }
  piVar7 = *(int **)(param_1 + 0x68);
  if (piVar7 != (int *)0x0) {
    if (*piVar7 - 2U < 3) {
      uVar4 = *param_2;
      if ((uVar4 & 1) != 0) {
        piVar8 = (int *)(uVar4 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = *piVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_40 = uVar4;
      FUN_104aaf3e8(piVar7 + 2,&uStack_40,param_3);
      if ((uVar4 & 1) != 0) {
        func_0x00010084dad0(uVar4);
      }
    }
    **(undefined4 **)(param_1 + 0x68) = 6;
  }
  lVar5 = *(long *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (lVar5 != 0) {
    uStack_48 = *param_2;
    if ((uStack_48 & 1) != 0) {
      piVar7 = (int *)(uStack_48 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x00010082bfa8(param_3,lVar5,&uStack_48,"original_recv_initial_metadata");
    if ((uStack_48 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  return;
}



/* Entry: 104ab0298; end: 104ab06ab;  */

undefined1  [16] FUN_104ab0298(undefined ***param_1,undefined ***param_2)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  char *pcVar8;
  ulong *puVar9;
  long *plVar10;
  undefined ***pppuVar11;
  char *pcVar12;
  undefined **ppuVar13;
  undefined ***pppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **extraout_x8;
  ulong uVar19;
  ulong uVar20;
  int *piVar21;
  undefined *extraout_x8_00;
  undefined **extraout_x8_01;
  undefined *extraout_x8_02;
  undefined *extraout_x8_03;
  long lVar22;
  undefined4 uVar23;
  undefined **unaff_x22;
  undefined *unaff_x24;
  undefined **unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined ***unaff_x28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  ulong uStack_2b8;
  undefined1 uStack_2a9;
  ulong uStack_2a8;
  undefined ***pppuStack_2a0;
  undefined **ppuStack_298;
  undefined1 *puStack_290;
  code *pcStack_288;
  undefined1 **ppuStack_280;
  code *pcStack_278;
  char *pcStack_270;
  ulong uStack_260;
  undefined **ppuStack_258;
  ulong uStack_250;
  undefined **ppuStack_248;
  undefined ***pppuStack_240;
  undefined ***pppuStack_230;
  long alStack_228 [3];
  undefined8 uStack_210;
  undefined ***pppuStack_178;
  long lStack_170;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined ***pppuStack_f0;
  undefined ***pppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  char *pcStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_99;
  ulong uStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined ***pppuStack_80;
  undefined **ppuStack_78;
  int iStack_70;
  undefined **appuStack_68 [3];
  undefined1 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar6 = appuStack_68;
  pppuVar11 = param_1;
  pppuVar14 = param_2;
  FUN_104ab0e3c();
  ppuVar17 = param_1[0xd];
  if ((ppuVar17 != (undefined **)0x0) && (*(int *)ppuVar17 == 3)) {
    *(int *)ppuVar17 = 4;
    puVar1 = (undefined8 *)ppuVar17[2];
    *puVar1 = **(undefined8 **)(ppuVar17[1] + 8);
    *(undefined1 *)(puVar1 + 1) = 1;
    if (*(char *)((long)puVar1 + 9) != '\0') {
      *(undefined1 *)((long)puVar1 + 9) = 0;
      func_0x00010047a478();
      (**(code **)(**pppuVar6 + 0x18))();
    }
  }
  uStack_50 = 0;
  ppuVar7 = param_1[0xb];
  ppuVar17 = &PTR_PTR_1130a5848;
  if (ppuVar7 != &PTR_PTR_1130a5848) {
    iStack_70 = 0;
    (**(code **)*ppuVar7)();
    pppuVar6 = &ppuStack_88;
    ppuStack_88 = ppuVar7;
    pppuStack_80 = pppuVar11;
    FUN_104ab0e8c(&ppuStack_78);
    ppuVar7 = param_1[0xd];
    pppuVar11 = pppuVar6;
    if ((ppuVar7 != (undefined **)0x0) && (*(int *)ppuVar7 == 4)) {
      ppuVar18 = param_1[10];
      if (*(char *)(ppuVar18 + 1) == '\0') {
        *(undefined1 *)((long)ppuVar18 + 9) = 1;
      }
      else {
        if ((undefined *)**(undefined8 **)(ppuVar7[1] + 8) != *ppuVar18) {
          func_0x0001004e23e0((undefined *)**(undefined8 **)(ppuVar7[1] + 8));
          ppuVar7 = param_1[0xd];
        }
        *(int *)ppuVar7 = 5;
        pppuVar11 = param_2;
        func_0x00010061664c(ppuVar7 + 1);
      }
    }
    if (iStack_70 == 1) {
      (**(code **)(*param_1[0xb] + 8))();
      param_1[0xb] = &PTR_PTR_1130a5848;
      (**(code **)(PTR_PTR_1130a5848 + 8))(&PTR_PTR_1130a5848);
      ppuVar17 = ppuStack_78;
      ppuStack_78 = (undefined **)0x0;
      iVar2 = *(int *)((long)param_1 + 0xac);
      if (iVar2 == 0) {
        if (*(int *)(ppuVar17 + 0x31) == 0) {
          pcStack_d0 = "*md->get_pointer(GrpcStatusMetadata()) != GRPC_STATUS_OK";
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                              ,0x4d5,2,"assertion failed: %s");
LAB_104ab05f4:
          _abort();
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x104ab05fc);
          (*pcVar5)();
        }
        uStack_b0 = 0;
        uStack_a8 = 0;
        puStack_b8 = (undefined *)0x0;
        FUN_104ab5920(&uStack_98,2,"early return from promise based filter",0x26,&uStack_99,
                      &puStack_b8);
        FUN_104abaa50(&ppuStack_90,&uStack_98,3,(long)*(int *)(ppuVar17 + 0x31));
        if ((uStack_98 & 1) != 0) {
          func_0x00010084dad0();
        }
        ppuStack_88 = &puStack_b8;
        func_0x000100482b64(&ppuStack_88);
        if (*(char *)((long)ppuVar17 + 1) < '\0') {
          ppuStack_c0 = ppuStack_90;
          if (((ulong)ppuStack_90 & 1) != 0) {
            piVar21 = (int *)((long)ppuStack_90 + -1);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
              if (bVar4) {
                *piVar21 = *piVar21 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (ppuVar17[0x26] == (undefined *)0x0) {
            puVar15 = (undefined *)((long)ppuVar17 + 0x139);
            puVar16 = (undefined *)(ulong)*(byte *)(ppuVar17 + 0x27);
          }
          else {
            puVar16 = ppuVar17[0x27];
            puVar15 = ppuVar17[0x28];
          }
          func_0x00010084caf8(&ppuStack_88,&ppuStack_c0,5,puVar15,puVar16);
          ppuVar7 = ppuStack_90;
          if (ppuStack_88 == ppuStack_90) {
LAB_104ab0530:
            if (((ulong)ppuVar7 & 1) != 0) {
              func_0x00010084dad0();
            }
          }
          else {
            ppuStack_90 = ppuStack_88;
            ppuStack_88 = (undefined **)0x36;
            if (((ulong)ppuVar7 & 1) != 0) {
              func_0x00010084dad0();
              ppuVar7 = ppuStack_88;
              goto LAB_104ab0530;
            }
          }
          if (((ulong)ppuStack_c0 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
        unaff_x22 = ppuStack_90;
        ppuStack_c8 = ppuStack_90;
        if (((ulong)ppuStack_90 & 1) != 0) {
          piVar21 = (int *)((long)ppuStack_90 + -1);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
            if (bVar4) {
              *piVar21 = *piVar21 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        pppuVar11 = &ppuStack_c8;
        pppuVar14 = param_2;
        FUN_104ab00c8(param_1);
        if (((ulong)unaff_x22 & 1) != 0) {
          func_0x00010084dad0(unaff_x22);
        }
        if (((ulong)ppuStack_90 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      else if (iVar2 == 1) {
        unaff_x22 = *(undefined ***)(param_1[0x14][1] + 0x18);
        if (unaff_x22 != ppuVar17) {
          func_0x0001004e23e0(unaff_x22,ppuVar17);
        }
        pppuVar11 = param_2;
        func_0x00010061664c(param_1 + 0x14);
        pcVar8 = (char *)((long)param_1 + 0xac);
        pcVar8[0] = '\x02';
        pcVar8[1] = '\0';
        pcVar8[2] = '\0';
        pcVar8[3] = '\0';
        if (unaff_x22 == ppuVar17) goto LAB_104ab0594;
      }
      else if (iVar2 == 2) goto LAB_104ab05f4;
      func_0x0001004e2bc8(ppuVar17);
    }
  }
LAB_104ab0594:
  pppuVar6 = appuStack_68;
  FUN_104ab0f40();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar25._8_8_ = pppuVar11;
    auVar25._0_8_ = pppuVar6;
    return auVar25;
  }
  ___stack_chk_fail();
  func_0x0001004bdf74(&ppuStack_88);
  func_0x0001004bdf74(&ppuStack_c0);
  func_0x0001004bdf74(&ppuStack_90);
  FUN_104ab0f40(appuStack_68);
  pcVar8 = (char *)pppuVar6;
  __Unwind_Resume();
  pcStack_d8 = FUN_104ab06ac;
  pppuStack_f0 = param_2;
  pppuStack_e8 = pppuVar6;
  puStack_e0 = &stack0xfffffffffffffff0;
  if (*(int *)((long)pcVar8 + 0xa8) == 2) {
    ppuVar7 = (undefined **)pcVar8;
    if (*(undefined ****)((long)pcVar8 + 0x60) != pppuVar11) goto LAB_104ab0794;
    *(char *)((long)pcVar8 + 0xb8) = '\x01';
    ppuVar18 = *(undefined ***)((long)pcVar8 + 0x68);
    if (ppuVar18 != (undefined **)0x0) {
      if (ppuVar18[2] != (undefined *)0x0) goto LAB_104ab0798;
      if (pppuVar14 != (undefined ***)0x0) {
        ppuVar18[2] = (undefined *)pppuVar14;
        uVar23 = 1;
        switch(*(undefined4 *)ppuVar18) {
        case 1:
        case 3:
        case 4:
        case 5:
          goto code_r0x000104ab07a4;
        case 2:
          uVar23 = 3;
        case 0:
          *(undefined4 *)ppuVar18 = uVar23;
LAB_104ab0730:
          ppuVar17 = &PTR___tlv_bootstrap_11340d8b8;
          (*(code *)PTR___tlv_bootstrap_11340d8b8)();
          puVar9 = (ulong *)*ppuVar17;
          do {
            uVar19 = *puVar9;
            uVar20 = uVar19 + 0x10;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar9,0x10);
            if (bVar4) {
              *puVar9 = uVar20;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (puVar9[2] < uVar20) {
            pppuVar11 = (undefined ***)0x10;
            func_0x0001004bbee0(puVar9,0x10);
          }
          else {
            puVar9 = (ulong *)((long)puVar9 + uVar19 + 0x30);
          }
          *puVar9 = (ulong)&PTR_FUN_1107c4f00;
          puVar9[1] = (ulong)pcVar8;
          *extraout_x8 = (undefined *)puVar9;
          auVar26._8_8_ = pppuVar11;
          auVar26._0_8_ = puVar9;
          return auVar26;
        default:
          goto LAB_104ab0730;
        }
      }
      goto LAB_104ab079c;
    }
    if (pppuVar14 == (undefined ***)0x0) goto LAB_104ab0730;
  }
  else {
    func_0x00010bdabbb4();
    ppuVar7 = (undefined **)param_2;
LAB_104ab0794:
    func_0x00010bdabb80();
LAB_104ab0798:
    func_0x00010bdabb4c();
LAB_104ab079c:
    func_0x00010bdabb18();
  }
  func_0x00010bdabae4();
code_r0x000104ab07a4:
  _abort();
  ppuStack_100 = &puStack_e0;
  pcStack_f8 = FUN_104ab07a8;
  uVar20 = (ulong)*(uint *)((long)pcVar8 + 0xac);
  pcVar12 = (char *)0x0;
  switch(uVar20) {
  case 1:
    uVar20 = *(ulong *)((*(undefined ***)((long)pcVar8 + 0xa0))[1] + 0x18);
    pcVar12 = (char *)0x1;
  case 0:
  case 3:
    auVar27._8_8_ = pcVar12;
    auVar27._0_8_ = uVar20;
    return auVar27;
  case 2:
    break;
  default:
    pcVar8 = "return Pending{}";
    pcVar12 = 
    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
    ;
    FUN_104a6e964("return Pending{}",
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                  ,0x47a);
  }
  _abort();
  puStack_110 = (undefined1 *)&ppuStack_100;
  pcStack_108 = FUN_104ab0810;
  lStack_170 = *(long *)PTR____stack_chk_guard_11034bdc0;
  alStack_228[0] = 0;
  uStack_210 = 0;
  pppuStack_178 = (undefined ***)pcVar8;
  ppuVar18 = *(undefined ***)((long)pcVar8 + 0x10);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
    if (bVar4) {
      *ppuVar18 = *ppuVar18 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (*(int *)((long)pcVar8 + 0xa8) != 1) {
    pcStack_270 = "recv_initial_state_ == RecvInitialState::kForwarded";
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                        ,0x484,2,"assertion failed: %s");
    _abort();
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x104ab0aa8);
    (*pcVar5)();
  }
  uVar20 = *(ulong *)pcVar12;
  if (uVar20 == 0) {
    *(undefined4 *)((long)pcVar8 + 0xa8) = 2;
    ppuVar18 = &PTR___tlv_bootstrap_11340d8b8;
    (*(code *)PTR___tlv_bootstrap_11340d8b8)(*(undefined ***)((long)pcVar8 + 0x20));
    unaff_x24 = *ppuVar18;
    *ppuVar18 = extraout_x8_00;
    ppuVar7 = &PTR___tlv_bootstrap_11340d8d0;
    (*(code *)PTR___tlv_bootstrap_11340d8d0)(*(undefined ***)((long)pcVar8 + 0x40));
    unaff_x25 = (undefined **)*ppuVar7;
    *ppuVar7 = (undefined *)extraout_x8_01;
    ppuVar17 = &PTR___tlv_bootstrap_11340d8e8;
    (*(code *)PTR___tlv_bootstrap_11340d8e8)(*(undefined ***)((long)pcVar8 + 0x48));
    unaff_x26 = *ppuVar17;
    *ppuVar17 = extraout_x8_02;
    unaff_x22 = &PTR___tlv_bootstrap_11340d900;
    (*(code *)PTR___tlv_bootstrap_11340d900)((undefined ***)((long)pcVar8 + 0x38));
    unaff_x27 = *unaff_x22;
    *unaff_x22 = extraout_x8_03;
    ppuStack_248 = &PTR_DAT_1107c4f38;
    unaff_x28 = &ppuStack_248;
    pppuStack_240 = (undefined ***)pcVar8;
    pppuStack_230 = unaff_x28;
    (**(code **)(*(long *)(*(undefined ***)((long)pcVar8 + 0x18))[1] + 8))
              (&ppuStack_258,(*(undefined ***)((long)pcVar8 + 0x18))[1],
               *(undefined ***)((long)pcVar8 + 0x60),*(undefined ***)((long)pcVar8 + 0x50),
               &ppuStack_248);
    (**(code **)(**(undefined ***)((long)pcVar8 + 0x58) + 8))();
    *(undefined ***)((long)pcVar8 + 0x58) = ppuStack_258;
    ppuStack_258 = &PTR_PTR_1130a5848;
    (**(code **)(PTR_PTR_1130a5848 + 8))();
    if (pppuStack_230 == &ppuStack_248) {
      lVar22 = 4;
      pppuVar11 = &ppuStack_248;
LAB_104ab09e0:
      (*(code *)(*pppuVar11)[lVar22])();
    }
    else if (pppuStack_230 != (undefined ***)0x0) {
      lVar22 = 5;
      pppuVar11 = pppuStack_230;
      goto LAB_104ab09e0;
    }
    FUN_104ab0298(pcVar8,alStack_228);
    ppuVar13 = *(undefined ***)((long)pcVar8 + 0x70);
    *(undefined ***)((long)pcVar8 + 0x70) = (undefined **)0x0;
    if (ppuVar13 != (undefined **)0x0) {
      uStack_260 = 0;
      func_0x00010082bfa8(alStack_228,ppuVar13,&uStack_260,"original_recv_initial_metadata");
      if ((uStack_260 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    *unaff_x22 = unaff_x27;
    *ppuVar17 = unaff_x26;
    *ppuVar7 = (undefined *)unaff_x25;
    *ppuVar18 = unaff_x24;
  }
  else {
    *(undefined4 *)((long)pcVar8 + 0xa8) = 3;
    ppuVar13 = *(undefined ***)((long)pcVar8 + 0x70);
    *(undefined ***)((long)pcVar8 + 0x70) = (undefined **)0x0;
    if ((uVar20 & 1) != 0) {
      piVar21 = (int *)(uVar20 - 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar4) {
          *piVar21 = *piVar21 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_250 = uVar20;
    func_0x00010082bfa8(alStack_228,ppuVar13,&uStack_250,"propagate error");
    ppuVar18 = extraout_x8;
    if ((uStack_250 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  plVar10 = alStack_228;
  func_0x00010061694c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_170) {
    auVar28._8_8_ = ppuVar13;
    auVar28._0_8_ = plVar10;
    return auVar28;
  }
  ___stack_chk_fail();
  if ((int)ppuVar13 == 0) goto LAB_104ab0b40;
  FUN_104bd46a0();
  if (pppuStack_230 == unaff_x28) {
    lVar22 = 4;
    pppuVar11 = &ppuStack_248;
LAB_104ab0b04:
    (*(code *)(*pppuVar11)[lVar22])();
  }
  else if (pppuStack_230 != (undefined ***)0x0) {
    lVar22 = 5;
    pppuVar11 = pppuStack_230;
    goto LAB_104ab0b04;
  }
  *unaff_x22 = unaff_x27;
  *ppuVar17 = unaff_x26;
  *ppuVar7 = (undefined *)unaff_x25;
  *ppuVar18 = unaff_x24;
  func_0x00010061694c(alStack_228);
LAB_104ab0b40:
  __Unwind_Resume();
  pcStack_278 = FUN_104ab0b48;
  ppuStack_280 = &puStack_110;
  _abort();
  pcStack_288 = FUN_104ab0b54;
  pppuStack_2a0 = (undefined ***)ppuVar7;
  ppuStack_298 = ppuVar18;
  puStack_290 = (undefined1 *)&ppuStack_280;
  (**(code **)(*plVar10 + 0x40))();
  auVar29._0_8_ = (long *)plVar10[2];
  do {
    lVar22 = *auVar29._0_8_;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(auVar29._0_8_,0x10);
    if (bVar4) {
      *auVar29._0_8_ = lVar22 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar22 + -1 == 0) {
    plVar10 = auVar29._0_8_;
    func_0x000100836ca0();
    if ((((ulong)plVar10 & 1) == 0) &&
       (func_0x000100460dc4(), (*(byte *)(*plVar10 + 0x28) >> 1 & 1) != 0)) {
      uStack_2a8 = 0;
      puVar9 = &uStack_2a8;
      func_0x0001004c1168(auVar29._0_8_ + 1,puVar9,0,0);
      uStack_2b8 = uStack_2a8;
      if ((uStack_2a8 & 1) != 0) {
        func_0x00010084dad0();
        uStack_2b8 = uStack_2a8;
      }
    }
    else {
      puVar9 = (ulong *)(auVar29._0_8_ + 1);
      uStack_2b8 = 0;
      func_0x0001004bd7e8(&uStack_2a9,puVar9,&uStack_2b8);
      if ((uStack_2b8 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    auVar24._8_8_ = puVar9;
    auVar24._0_8_ = uStack_2b8;
    return auVar24;
  }
  auVar29._8_8_ = ppuVar13;
  return auVar29;
}



/* Entry: 104ab06ac; end: 104ab07a7;  */

undefined1  [16] FUN_104ab06ac(undefined **param_1,char *param_2,undefined *param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined **ppuVar4;
  ulong *puVar5;
  undefined ***pppuVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  int *piVar13;
  undefined *extraout_x8;
  undefined *extraout_x8_00;
  undefined *extraout_x8_01;
  undefined *extraout_x8_02;
  long lVar14;
  undefined4 uVar15;
  undefined **unaff_x20;
  undefined **unaff_x21;
  undefined **unaff_x22;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined ***unaff_x28;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  ulong uStack_1e8;
  undefined1 uStack_1d9;
  ulong uStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  char *pcStack_1a0;
  ulong uStack_190;
  undefined **ppuStack_188;
  ulong uStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined ***pppuStack_160;
  long alStack_158 [3];
  undefined8 uStack_140;
  undefined **ppuStack_a8;
  long lStack_a0;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if (*(int *)((long)param_2 + 0xa8) == 2) {
    unaff_x20 = (undefined **)param_2;
    if (*(undefined **)((long)param_2 + 0x60) != param_3) goto LAB_104ab0794;
    *(char *)((long)param_2 + 0xb8) = '\x01';
    puVar9 = *(undefined4 **)((long)param_2 + 0x68);
    if (puVar9 != (undefined4 *)0x0) {
      if (*(long *)(puVar9 + 4) != 0) goto LAB_104ab0798;
      if (param_4 != 0) {
        *(long *)(puVar9 + 4) = param_4;
        uVar15 = 1;
        switch(*puVar9) {
        case 1:
        case 3:
        case 4:
        case 5:
          goto code_r0x000104ab07a4;
        case 2:
          uVar15 = 3;
        case 0:
          *puVar9 = uVar15;
LAB_104ab0730:
          ppuVar4 = &PTR___tlv_bootstrap_11340d8b8;
          (*(code *)PTR___tlv_bootstrap_11340d8b8)();
          puVar5 = (ulong *)*ppuVar4;
          do {
            uVar10 = *puVar5;
            uVar11 = uVar10 + 0x10;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(puVar5,0x10);
            if (bVar2) {
              *puVar5 = uVar11;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (puVar5[2] < uVar11) {
            param_3 = (undefined *)0x10;
            func_0x0001004bbee0(puVar5,0x10);
          }
          else {
            puVar5 = (ulong *)((long)puVar5 + uVar10 + 0x30);
          }
          *puVar5 = (ulong)&PTR_FUN_1107c4f00;
          puVar5[1] = (ulong)param_2;
          *param_1 = (undefined *)puVar5;
          auVar17._8_8_ = param_3;
          auVar17._0_8_ = puVar5;
          return auVar17;
        default:
          goto LAB_104ab0730;
        }
      }
      goto LAB_104ab079c;
    }
    if (param_4 == 0) goto LAB_104ab0730;
  }
  else {
    func_0x00010bdabbb4();
LAB_104ab0794:
    func_0x00010bdabb80();
LAB_104ab0798:
    func_0x00010bdabb4c();
LAB_104ab079c:
    func_0x00010bdabb18();
  }
  func_0x00010bdabae4();
code_r0x000104ab07a4:
  _abort();
  pcStack_28 = FUN_104ab07a8;
  uVar11 = (ulong)*(uint *)((long)param_2 + 0xac);
  pcVar7 = (char *)0x0;
  puStack_30 = &stack0xfffffffffffffff0;
  switch(uVar11) {
  case 1:
    uVar11 = *(ulong *)(*(long *)(*(undefined **)((long)param_2 + 0xa0) + 8) + 0x18);
    pcVar7 = (char *)0x1;
  case 0:
  case 3:
    auVar18._8_8_ = pcVar7;
    auVar18._0_8_ = uVar11;
    return auVar18;
  case 2:
    break;
  default:
    param_2 = "return Pending{}";
    pcVar7 = 
    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
    ;
    FUN_104a6e964("return Pending{}",
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                  ,0x47a);
  }
  _abort();
  pcStack_38 = FUN_104ab0810;
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  alStack_158[0] = 0;
  uStack_140 = 0;
  plVar12 = *(long **)((long)param_2 + 0x10);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar2) {
      *plVar12 = *plVar12 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  ppuStack_a8 = (undefined **)param_2;
  if (*(int *)((long)param_2 + 0xa8) != 1) {
    pcStack_1a0 = "recv_initial_state_ == RecvInitialState::kForwarded";
    puStack_40 = (undefined1 *)&puStack_30;
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                        ,0x484,2,"assertion failed: %s");
    _abort();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104ab0aa8);
    (*pcVar3)();
  }
  uVar11 = *(ulong *)pcVar7;
  if (uVar11 == 0) {
    *(undefined4 *)((long)param_2 + 0xa8) = 2;
    param_1 = &PTR___tlv_bootstrap_11340d8b8;
    puStack_40 = (undefined1 *)&puStack_30;
    (*(code *)PTR___tlv_bootstrap_11340d8b8)(*(undefined **)((long)param_2 + 0x20));
    unaff_x24 = *param_1;
    *param_1 = extraout_x8;
    unaff_x20 = &PTR___tlv_bootstrap_11340d8d0;
    (*(code *)PTR___tlv_bootstrap_11340d8d0)(*(undefined **)((long)param_2 + 0x40));
    unaff_x25 = *unaff_x20;
    *unaff_x20 = extraout_x8_00;
    unaff_x21 = &PTR___tlv_bootstrap_11340d8e8;
    (*(code *)PTR___tlv_bootstrap_11340d8e8)(*(undefined **)((long)param_2 + 0x48));
    unaff_x26 = *unaff_x21;
    *unaff_x21 = extraout_x8_01;
    unaff_x22 = &PTR___tlv_bootstrap_11340d900;
    (*(code *)PTR___tlv_bootstrap_11340d900)((undefined **)((long)param_2 + 0x38));
    unaff_x27 = *unaff_x22;
    *unaff_x22 = extraout_x8_02;
    ppuStack_178 = &PTR_DAT_1107c4f38;
    unaff_x28 = &ppuStack_178;
    ppuStack_170 = (undefined **)param_2;
    pppuStack_160 = unaff_x28;
    (**(code **)(**(long **)(*(undefined **)((long)param_2 + 0x18) + 8) + 8))
              (&ppuStack_188,*(long **)(*(undefined **)((long)param_2 + 0x18) + 8),
               *(undefined **)((long)param_2 + 0x60),*(undefined **)((long)param_2 + 0x50),
               &ppuStack_178);
    (**(code **)(**(long **)((long)param_2 + 0x58) + 8))();
    *(undefined ***)((long)param_2 + 0x58) = ppuStack_188;
    ppuStack_188 = &PTR_PTR_1130a5848;
    (**(code **)(PTR_PTR_1130a5848 + 8))();
    if (pppuStack_160 == &ppuStack_178) {
      lVar14 = 4;
      pppuVar6 = &ppuStack_178;
LAB_104ab09e0:
      (*(code *)(*pppuVar6)[lVar14])();
    }
    else if (pppuStack_160 != (undefined ***)0x0) {
      lVar14 = 5;
      pppuVar6 = pppuStack_160;
      goto LAB_104ab09e0;
    }
    FUN_104ab0298(param_2,alStack_158);
    puVar8 = *(undefined **)((long)param_2 + 0x70);
    *(undefined **)((long)param_2 + 0x70) = (undefined *)0x0;
    if (puVar8 != (undefined *)0x0) {
      uStack_190 = 0;
      func_0x00010082bfa8(alStack_158,puVar8,&uStack_190,"original_recv_initial_metadata");
      if ((uStack_190 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    *unaff_x22 = unaff_x27;
    *unaff_x21 = unaff_x26;
    *unaff_x20 = unaff_x25;
    *param_1 = unaff_x24;
  }
  else {
    *(undefined4 *)((long)param_2 + 0xa8) = 3;
    puVar8 = *(undefined **)((long)param_2 + 0x70);
    *(undefined **)((long)param_2 + 0x70) = (undefined *)0x0;
    if ((uVar11 & 1) != 0) {
      piVar13 = (int *)(uVar11 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar2) {
          *piVar13 = *piVar13 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_180 = uVar11;
    puStack_40 = (undefined1 *)&puStack_30;
    func_0x00010082bfa8(alStack_158,puVar8,&uStack_180,"propagate error");
    if ((uStack_180 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  plVar12 = alStack_158;
  func_0x00010061694c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    auVar19._8_8_ = puVar8;
    auVar19._0_8_ = plVar12;
    return auVar19;
  }
  ___stack_chk_fail();
  if ((int)puVar8 == 0) goto LAB_104ab0b40;
  FUN_104bd46a0();
  if (pppuStack_160 == unaff_x28) {
    lVar14 = 4;
    pppuVar6 = &ppuStack_178;
LAB_104ab0b04:
    (*(code *)(*pppuVar6)[lVar14])();
  }
  else if (pppuStack_160 != (undefined ***)0x0) {
    lVar14 = 5;
    pppuVar6 = pppuStack_160;
    goto LAB_104ab0b04;
  }
  *unaff_x22 = unaff_x27;
  *unaff_x21 = unaff_x26;
  *unaff_x20 = unaff_x25;
  *param_1 = unaff_x24;
  func_0x00010061694c(alStack_158);
LAB_104ab0b40:
  __Unwind_Resume();
  pcStack_1a8 = FUN_104ab0b48;
  ppuStack_1b0 = &puStack_40;
  _abort();
  pcStack_1b8 = FUN_104ab0b54;
  ppuStack_1d0 = unaff_x20;
  ppuStack_1c8 = param_1;
  puStack_1c0 = (undefined1 *)&ppuStack_1b0;
  (**(code **)(*plVar12 + 0x40))();
  auVar20._0_8_ = (long *)plVar12[2];
  do {
    lVar14 = *auVar20._0_8_;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(auVar20._0_8_,0x10);
    if (bVar2) {
      *auVar20._0_8_ = lVar14 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar14 + -1 == 0) {
    plVar12 = auVar20._0_8_;
    func_0x000100836ca0();
    if ((((ulong)plVar12 & 1) == 0) &&
       (func_0x000100460dc4(), (*(byte *)(*plVar12 + 0x28) >> 1 & 1) != 0)) {
      uStack_1d8 = 0;
      puVar5 = &uStack_1d8;
      func_0x0001004c1168(auVar20._0_8_ + 1,puVar5,0,0);
      uStack_1e8 = uStack_1d8;
      if ((uStack_1d8 & 1) != 0) {
        func_0x00010084dad0();
        uStack_1e8 = uStack_1d8;
      }
    }
    else {
      puVar5 = (ulong *)(auVar20._0_8_ + 1);
      uStack_1e8 = 0;
      func_0x0001004bd7e8(&uStack_1d9,puVar5,&uStack_1e8);
      if ((uStack_1e8 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    auVar16._8_8_ = puVar5;
    auVar16._0_8_ = uStack_1e8;
    return auVar16;
  }
  auVar20._8_8_ = puVar8;
  return auVar20;
}



/* Entry: 104ab07a8; end: 104ab080f;  */

undefined1  [16] FUN_104ab07a8(char *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined ***pppuVar4;
  ulong *puVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  int *piVar10;
  undefined *extraout_x8;
  undefined *extraout_x8_00;
  undefined *extraout_x8_01;
  undefined *extraout_x8_02;
  long lVar11;
  undefined **unaff_x19;
  undefined **unaff_x20;
  undefined **unaff_x21;
  undefined **unaff_x22;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined ***unaff_x28;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulong uStack_1c8;
  undefined1 uStack_1b9;
  ulong uStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  char *pcStack_180;
  ulong uStack_170;
  undefined **ppuStack_168;
  ulong uStack_160;
  undefined **ppuStack_158;
  char *pcStack_150;
  undefined ***pppuStack_140;
  long alStack_138 [3];
  undefined8 uStack_120;
  char *pcStack_88;
  long lStack_80;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  uVar8 = (ulong)*(uint *)(param_1 + 0xac);
  pcVar6 = (char *)0x0;
  switch(uVar8) {
  case 1:
    uVar8 = *(ulong *)(*(long *)(*(long *)(param_1 + 0xa0) + 8) + 0x18);
    pcVar6 = (char *)0x1;
  case 0:
  case 3:
    auVar13._8_8_ = pcVar6;
    auVar13._0_8_ = uVar8;
    return auVar13;
  case 2:
    break;
  default:
    param_1 = "return Pending{}";
    pcVar6 = 
    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
    ;
    FUN_104a6e964("return Pending{}",
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                  ,0x47a);
  }
  _abort();
  pcStack_18 = FUN_104ab0810;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  alStack_138[0] = 0;
  uStack_120 = 0;
  plVar9 = *(long **)(param_1 + 0x10);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = *plVar9 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  pcStack_88 = param_1;
  if (*(int *)(param_1 + 0xa8) != 1) {
    pcStack_180 = "recv_initial_state_ == RecvInitialState::kForwarded";
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                        ,0x484,2,"assertion failed: %s");
    _abort();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104ab0aa8);
    (*pcVar3)();
  }
  uVar8 = *(ulong *)pcVar6;
  if (uVar8 == 0) {
    param_1[0xa8] = '\x02';
    param_1[0xa9] = '\0';
    param_1[0xaa] = '\0';
    param_1[0xab] = '\0';
    unaff_x19 = &PTR___tlv_bootstrap_11340d8b8;
    puStack_20 = &stack0xfffffffffffffff0;
    (*(code *)PTR___tlv_bootstrap_11340d8b8)(*(undefined8 *)(param_1 + 0x20));
    unaff_x24 = *unaff_x19;
    *unaff_x19 = extraout_x8;
    unaff_x20 = &PTR___tlv_bootstrap_11340d8d0;
    (*(code *)PTR___tlv_bootstrap_11340d8d0)(*(undefined8 *)(param_1 + 0x40));
    unaff_x25 = *unaff_x20;
    *unaff_x20 = extraout_x8_00;
    unaff_x21 = &PTR___tlv_bootstrap_11340d8e8;
    (*(code *)PTR___tlv_bootstrap_11340d8e8)(*(undefined8 *)(param_1 + 0x48));
    unaff_x26 = *unaff_x21;
    *unaff_x21 = extraout_x8_01;
    unaff_x22 = &PTR___tlv_bootstrap_11340d900;
    (*(code *)PTR___tlv_bootstrap_11340d900)(param_1 + 0x38);
    unaff_x27 = *unaff_x22;
    *unaff_x22 = extraout_x8_02;
    ppuStack_158 = &PTR_DAT_1107c4f38;
    unaff_x28 = &ppuStack_158;
    pcStack_150 = param_1;
    pppuStack_140 = unaff_x28;
    (**(code **)(**(long **)(*(long *)(param_1 + 0x18) + 8) + 8))
              (&ppuStack_168,*(long **)(*(long *)(param_1 + 0x18) + 8),
               *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x50),&ppuStack_158);
    (**(code **)(**(long **)(param_1 + 0x58) + 8))();
    *(undefined ***)(param_1 + 0x58) = ppuStack_168;
    ppuStack_168 = &PTR_PTR_1130a5848;
    (**(code **)(PTR_PTR_1130a5848 + 8))();
    if (pppuStack_140 == &ppuStack_158) {
      lVar7 = 4;
      pppuVar4 = &ppuStack_158;
LAB_104ab09e0:
      (*(code *)(*pppuVar4)[lVar7])();
    }
    else if (pppuStack_140 != (undefined ***)0x0) {
      lVar7 = 5;
      pppuVar4 = pppuStack_140;
      goto LAB_104ab09e0;
    }
    FUN_104ab0298(param_1,alStack_138);
    lVar7 = *(long *)(param_1 + 0x70);
    param_1[0x70] = '\0';
    param_1[0x71] = '\0';
    param_1[0x72] = '\0';
    param_1[0x73] = '\0';
    param_1[0x74] = '\0';
    param_1[0x75] = '\0';
    param_1[0x76] = '\0';
    param_1[0x77] = '\0';
    if (lVar7 != 0) {
      uStack_170 = 0;
      func_0x00010082bfa8(alStack_138,lVar7,&uStack_170,"original_recv_initial_metadata");
      if ((uStack_170 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    *unaff_x22 = unaff_x27;
    *unaff_x21 = unaff_x26;
    *unaff_x20 = unaff_x25;
    *unaff_x19 = unaff_x24;
  }
  else {
    param_1[0xa8] = '\x03';
    param_1[0xa9] = '\0';
    param_1[0xaa] = '\0';
    param_1[0xab] = '\0';
    lVar7 = *(long *)(param_1 + 0x70);
    param_1[0x70] = '\0';
    param_1[0x71] = '\0';
    param_1[0x72] = '\0';
    param_1[0x73] = '\0';
    param_1[0x74] = '\0';
    param_1[0x75] = '\0';
    param_1[0x76] = '\0';
    param_1[0x77] = '\0';
    if ((uVar8 & 1) != 0) {
      piVar10 = (int *)(uVar8 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = *piVar10 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_160 = uVar8;
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x00010082bfa8(alStack_138,lVar7,&uStack_160,"propagate error");
    if ((uStack_160 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  plVar9 = alStack_138;
  func_0x00010061694c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    auVar14._8_8_ = lVar7;
    auVar14._0_8_ = plVar9;
    return auVar14;
  }
  ___stack_chk_fail();
  if ((int)lVar7 == 0) goto LAB_104ab0b40;
  FUN_104bd46a0();
  if (pppuStack_140 == unaff_x28) {
    lVar11 = 4;
    pppuVar4 = &ppuStack_158;
LAB_104ab0b04:
    (*(code *)(*pppuVar4)[lVar11])();
  }
  else if (pppuStack_140 != (undefined ***)0x0) {
    lVar11 = 5;
    pppuVar4 = pppuStack_140;
    goto LAB_104ab0b04;
  }
  *unaff_x22 = unaff_x27;
  *unaff_x21 = unaff_x26;
  *unaff_x20 = unaff_x25;
  *unaff_x19 = unaff_x24;
  func_0x00010061694c(alStack_138);
LAB_104ab0b40:
  __Unwind_Resume();
  pcStack_188 = FUN_104ab0b48;
  ppuStack_190 = &puStack_20;
  _abort();
  pcStack_198 = FUN_104ab0b54;
  ppuStack_1b0 = unaff_x20;
  ppuStack_1a8 = unaff_x19;
  puStack_1a0 = (undefined1 *)&ppuStack_190;
  (**(code **)(*plVar9 + 0x40))();
  auVar15._0_8_ = (long *)plVar9[2];
  do {
    lVar11 = *auVar15._0_8_;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(auVar15._0_8_,0x10);
    if (bVar2) {
      *auVar15._0_8_ = lVar11 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar11 + -1 == 0) {
    plVar9 = auVar15._0_8_;
    func_0x000100836ca0();
    if ((((ulong)plVar9 & 1) == 0) &&
       (func_0x000100460dc4(), (*(byte *)(*plVar9 + 0x28) >> 1 & 1) != 0)) {
      uStack_1b8 = 0;
      puVar5 = &uStack_1b8;
      func_0x0001004c1168(auVar15._0_8_ + 1,puVar5,0,0);
      uStack_1c8 = uStack_1b8;
      if ((uStack_1b8 & 1) != 0) {
        func_0x00010084dad0();
        uStack_1c8 = uStack_1b8;
      }
    }
    else {
      puVar5 = (ulong *)(auVar15._0_8_ + 1);
      uStack_1c8 = 0;
      func_0x0001004bd7e8(&uStack_1b9,puVar5,&uStack_1c8);
      if ((uStack_1c8 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    auVar12._8_8_ = puVar5;
    auVar12._0_8_ = uStack_1c8;
    return auVar12;
  }
  auVar15._8_8_ = lVar7;
  return auVar15;
}



/* Entry: 104ab0810; end: 104ab0b47;  */

void FUN_104ab0810(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  undefined ***pppuVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  int *piVar10;
  undefined *extraout_x8;
  undefined *extraout_x8_00;
  undefined *extraout_x8_01;
  undefined *extraout_x8_02;
  long lVar11;
  undefined **unaff_x19;
  undefined **unaff_x20;
  undefined **unaff_x21;
  undefined **unaff_x22;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined ***unaff_x28;
  ulong uStack_1b8;
  undefined1 uStack_1a9;
  ulong uStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  char *pcStack_170;
  ulong uStack_160;
  undefined **ppuStack_158;
  ulong uStack_150;
  undefined **ppuStack_148;
  long lStack_140;
  undefined ***pppuStack_130;
  long alStack_128 [3];
  undefined8 uStack_110;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  alStack_128[0] = 0;
  uStack_110 = 0;
  plVar8 = *(long **)(param_1 + 0x10);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = *plVar8 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lStack_78 = param_1;
  if (*(int *)(param_1 + 0xa8) != 1) {
    pcStack_170 = "recv_initial_state_ == RecvInitialState::kForwarded";
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                        ,0x484,2,"assertion failed: %s");
    _abort();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104ab0aa8);
    (*pcVar3)();
  }
  uVar9 = *param_2;
  if (uVar9 == 0) {
    *(undefined4 *)(param_1 + 0xa8) = 2;
    unaff_x19 = &PTR___tlv_bootstrap_11340d8b8;
    (*(code *)PTR___tlv_bootstrap_11340d8b8)(*(undefined8 *)(param_1 + 0x20));
    unaff_x24 = *unaff_x19;
    *unaff_x19 = extraout_x8;
    unaff_x20 = &PTR___tlv_bootstrap_11340d8d0;
    (*(code *)PTR___tlv_bootstrap_11340d8d0)(*(undefined8 *)(param_1 + 0x40));
    unaff_x25 = *unaff_x20;
    *unaff_x20 = extraout_x8_00;
    unaff_x21 = &PTR___tlv_bootstrap_11340d8e8;
    (*(code *)PTR___tlv_bootstrap_11340d8e8)(*(undefined8 *)(param_1 + 0x48));
    unaff_x26 = *unaff_x21;
    *unaff_x21 = extraout_x8_01;
    unaff_x22 = &PTR___tlv_bootstrap_11340d900;
    (*(code *)PTR___tlv_bootstrap_11340d900)(param_1 + 0x38);
    unaff_x27 = *unaff_x22;
    *unaff_x22 = extraout_x8_02;
    plVar8 = *(long **)(*(long *)(param_1 + 0x18) + 8);
    ppuStack_148 = &PTR_DAT_1107c4f38;
    unaff_x28 = &ppuStack_148;
    lStack_140 = param_1;
    pppuStack_130 = unaff_x28;
    (**(code **)(*plVar8 + 8))
              (&ppuStack_158,plVar8,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x50),
               &ppuStack_148);
    (**(code **)(**(long **)(param_1 + 0x58) + 8))();
    *(undefined ***)(param_1 + 0x58) = ppuStack_158;
    ppuStack_158 = &PTR_PTR_1130a5848;
    (**(code **)(PTR_PTR_1130a5848 + 8))();
    if (pppuStack_130 == &ppuStack_148) {
      lVar11 = 4;
      pppuVar5 = &ppuStack_148;
LAB_104ab09e0:
      (*(code *)(*pppuVar5)[lVar11])();
    }
    else if (pppuStack_130 != (undefined ***)0x0) {
      lVar11 = 5;
      pppuVar5 = pppuStack_130;
      goto LAB_104ab09e0;
    }
    FUN_104ab0298(param_1,alStack_128);
    lVar11 = *(long *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
    if (lVar11 != 0) {
      uStack_160 = 0;
      func_0x00010082bfa8(alStack_128,lVar11,&uStack_160,"original_recv_initial_metadata");
      if ((uStack_160 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    iVar6 = (int)lVar11;
    *unaff_x22 = unaff_x27;
    *unaff_x21 = unaff_x26;
    *unaff_x20 = unaff_x25;
    *unaff_x19 = unaff_x24;
  }
  else {
    *(undefined4 *)(param_1 + 0xa8) = 3;
    uVar7 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
    if ((uVar9 & 1) != 0) {
      piVar10 = (int *)(uVar9 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = *piVar10 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_150 = uVar9;
    func_0x00010082bfa8(alStack_128,uVar7,&uStack_150,"propagate error");
    iVar6 = (int)uVar7;
    if ((uStack_150 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  plVar8 = alStack_128;
  func_0x00010061694c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) goto LAB_104ab0b40;
  FUN_104bd46a0();
  if (pppuStack_130 == unaff_x28) {
    lVar11 = 4;
    pppuVar5 = &ppuStack_148;
LAB_104ab0b04:
    (*(code *)(*pppuVar5)[lVar11])();
  }
  else if (pppuStack_130 != (undefined ***)0x0) {
    lVar11 = 5;
    pppuVar5 = pppuStack_130;
    goto LAB_104ab0b04;
  }
  *unaff_x22 = unaff_x27;
  *unaff_x21 = unaff_x26;
  *unaff_x20 = unaff_x25;
  *unaff_x19 = unaff_x24;
  func_0x00010061694c(alStack_128);
LAB_104ab0b40:
  __Unwind_Resume();
  pcStack_178 = FUN_104ab0b48;
  puStack_180 = &stack0xfffffffffffffff0;
  _abort();
  pcStack_188 = FUN_104ab0b54;
  ppuStack_1a0 = unaff_x20;
  ppuStack_198 = unaff_x19;
  puStack_190 = (undefined1 *)&puStack_180;
  (**(code **)(*plVar8 + 0x40))();
  plVar8 = (long *)plVar8[2];
  do {
    lVar11 = *plVar8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = lVar11 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar11 + -1 == 0) {
    plVar4 = plVar8;
    func_0x000100836ca0();
    if ((((ulong)plVar4 & 1) == 0) &&
       (func_0x000100460dc4(), (*(byte *)(*plVar4 + 0x28) >> 1 & 1) != 0)) {
      uStack_1a8 = 0;
      func_0x0001004c1168(plVar8 + 1,&uStack_1a8,0,0);
      if ((uStack_1a8 & 1) == 0) {
        return;
      }
      func_0x00010084dad0();
      return;
    }
    uStack_1b8 = 0;
    func_0x0001004bd7e8(&uStack_1a9,plVar8 + 1,&uStack_1b8);
    if ((uStack_1b8 & 1) != 0) {
      func_0x00010084dad0();
    }
    return;
  }
  return;
}



/* Entry: 104ab0b48; end: 104ab0b53;  */

void FUN_104ab0b48(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uStack_48;
  undefined1 uStack_39;
  ulong uStack_38;
  
  _abort();
  (**(code **)(*param_1 + 0x40))();
  plVar4 = (long *)param_1[2];
  do {
    lVar5 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 + -1 == 0) {
    plVar3 = plVar4;
    func_0x000100836ca0();
    if ((((ulong)plVar3 & 1) == 0) &&
       (func_0x000100460dc4(), (*(byte *)(*plVar3 + 0x28) >> 1 & 1) != 0)) {
      uStack_38 = 0;
      func_0x0001004c1168(plVar4 + 1,&uStack_38,0,0);
      if ((uStack_38 & 1) == 0) {
        return;
      }
      func_0x00010084dad0();
      return;
    }
    uStack_48 = 0;
    func_0x0001004bd7e8(&uStack_39,plVar4 + 1,&uStack_48);
    if ((uStack_48 & 1) != 0) {
      func_0x00010084dad0();
    }
    return;
  }
  return;
}



/* Entry: 104ab0b54; end: 104ab0b9f;  */

void FUN_104ab0b54(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uStack_38;
  undefined1 uStack_29;
  ulong uStack_28;
  
  (**(code **)(*param_1 + 0x40))();
  plVar4 = (long *)param_1[2];
  do {
    lVar5 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 + -1 == 0) {
    plVar3 = plVar4;
    func_0x000100836ca0();
    if ((((ulong)plVar3 & 1) == 0) &&
       (func_0x000100460dc4(), (*(byte *)(*plVar3 + 0x28) >> 1 & 1) != 0)) {
      uStack_28 = 0;
      func_0x0001004c1168(plVar4 + 1,&uStack_28,0,0);
      if ((uStack_28 & 1) == 0) {
        return;
      }
      func_0x00010084dad0();
      return;
    }
    uStack_38 = 0;
    func_0x0001004bd7e8(&uStack_29,plVar4 + 1,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      func_0x00010084dad0();
    }
    return;
  }
  return;
}



/* Entry: 104ab0ba0; end: 104ab0c77;  */

ulong * FUN_104ab0ba0(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puStack_50;
  ulong uStack_48;
  
  ppuVar2 = &puStack_50;
  puVar6 = param_1 + 1;
  uVar7 = *param_1;
  if ((uVar7 & 1) == 0) {
    uVar3 = 4;
  }
  else {
    puVar6 = (ulong *)param_1[1];
    uVar3 = param_1[2] << 1;
  }
  puStack_50 = (ulong *)0x0;
  uStack_48 = 0;
  FUN_104ab0c78();
  uVar4 = uVar7 >> 1;
  puVar1 = (ulong *)(ppuVar2 + uVar4);
  puStack_50 = (ulong *)ppuVar2;
  uStack_48 = uVar3;
  *puVar1 = *param_2;
  puVar5 = puStack_50;
  if (1 < uVar7) {
    do {
      *puVar5 = *puVar6;
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar4 != 0);
  }
  uVar7 = *param_1;
  if ((uVar7 & 1) != 0) {
    __ZdlPv(param_1[1]);
    uVar7 = *param_1;
    uVar3 = uStack_48;
  }
  param_1[1] = (ulong)puStack_50;
  param_1[2] = uVar3;
  *param_1 = (uVar7 | 1) + 2;
  return puVar1;
}



/* Entry: 104ab0c78; end: 104ab0cf7;  */

void FUN_104ab0c78(long param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uStack_58;
  undefined1 uStack_49;
  ulong uStack_48;
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  FUN_104a7757c();
  lVar5 = *(long *)(param_1 + 0x18);
  func_0x000100614e94(*(undefined8 *)(lVar5 + 0x18),param_1);
  plVar4 = *(long **)(lVar5 + 0x10);
  do {
    lVar5 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 + -1 == 0) {
    plVar3 = plVar4;
    func_0x000100836ca0();
    if ((((ulong)plVar3 & 1) == 0) &&
       (func_0x000100460dc4(), (*(byte *)(*plVar3 + 0x28) >> 1 & 1) != 0)) {
      uStack_48 = 0;
      func_0x0001004c1168(plVar4 + 1,&uStack_48,0,0);
      if ((uStack_48 & 1) == 0) {
        return;
      }
      func_0x00010084dad0();
      return;
    }
    uStack_58 = 0;
    func_0x0001004bd7e8(&uStack_49,plVar4 + 1,&uStack_58);
    if ((uStack_58 & 1) != 0) {
      func_0x00010084dad0();
    }
    return;
  }
  return;
}



/* Entry: 104ab0cf8; end: 104ab0e2f;  */

long * FUN_104ab0cf8(long *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  long *plStack_138;
  long *plStack_130;
  undefined1 uStack_121;
  long *plStack_120;
  long *plStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  ulong uStack_f8;
  undefined8 auStack_f0 [3];
  undefined8 uStack_d8;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_40 = param_1[5];
  auStack_f0[0] = 0;
  uStack_d8 = 0;
  plVar5 = *(long **)(lStack_40 + 0x10);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uVar8 = *param_2;
  if ((uVar8 & 1) != 0) {
    piVar6 = (int *)(uVar8 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = *piVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar5 = param_1 + 4;
  uStack_f8 = uVar8;
  FUN_104aaf3e8(plVar5,&uStack_f8,auStack_f0);
  if ((uVar8 & 1) != 0) {
    func_0x00010084dad0(uVar8);
  }
  plVar3 = *(long **)(param_1[5] + 0x10);
  do {
    lVar7 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar7 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar7 + -1 == 0) {
    func_0x000100836ca4();
  }
  func_0x00010061694c(auStack_f0);
  func_0x0001006153ac(plVar5);
  __ZdlPv();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010061694c(auStack_f0);
  __Unwind_Resume(param_1);
  plVar3 = param_1;
  FUN_104bd46a0();
  pcStack_108 = FUN_104ab0e30;
  do {
    lVar4 = *plVar3;
    lVar7 = lVar4 + -1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar7;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar7 != 0) {
    plStack_120 = plVar5;
    plStack_118 = param_1;
    puStack_110 = &stack0xfffffffffffffff0;
    if (lVar4 == 0) {
      func_0x000107c2c340();
      FUN_104bd46a0();
      FUN_104bd46a0();
      func_0x0001004bdf74(&plStack_138);
      func_0x0001004bdf74(&plStack_130);
      func_0x000107c60bd8(plVar3);
      return plRam0000000113815c70;
    }
    plVar3 = plVar3 + 1;
    plVar5 = plVar3;
    func_0x0001004920d0(plVar3,&uStack_121);
    while (plVar5 == (long *)0x0) {
      plVar5 = plVar3;
      func_0x0001004920d0(plVar3,&uStack_121);
    }
    func_0x0001004bd8dc(&plStack_130,plVar5[3]);
    plVar3 = plStack_130;
    plVar5[3] = 0;
    plStack_138 = plStack_130;
    if (((ulong)plStack_130 & 1) != 0) {
      piVar6 = (int *)((long)plStack_130 + -1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    func_0x0001004bd778();
    if (((ulong)plVar3 & 1) != 0) {
      func_0x00010084dad0(plVar3);
    }
    plVar3 = plStack_130;
    if (((ulong)plStack_130 & 1) != 0) {
      func_0x00010084dad0();
      plVar3 = plStack_130;
    }
  }
  return plVar3;
}



/* Entry: 104ab0e30; end: 104ab0e3b;  */

long * FUN_104ab0e30(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  long *plStack_38;
  long *plStack_30;
  undefined1 uStack_21;
  
  do {
    lVar6 = *param_1;
    lVar3 = lVar6 + -1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 != 0) {
    if (lVar6 == 0) {
      func_0x000107c2c340(param_1,"finish_cancel");
      FUN_104bd46a0();
      FUN_104bd46a0();
      func_0x0001004bdf74(&plStack_38);
      func_0x0001004bdf74(&plStack_30);
      func_0x000107c60bd8(param_1);
      return plRam0000000113815c70;
    }
    param_1 = param_1 + 1;
    plVar5 = param_1;
    func_0x0001004920d0(param_1,&uStack_21);
    while (plVar5 == (long *)0x0) {
      plVar5 = param_1;
      func_0x0001004920d0(param_1,&uStack_21);
    }
    func_0x0001004bd8dc(&plStack_30,plVar5[3]);
    plVar4 = plStack_30;
    plVar5[3] = 0;
    plStack_38 = plStack_30;
    if (((ulong)plStack_30 & 1) != 0) {
      piVar7 = (int *)((long)plStack_30 + -1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = *piVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    func_0x0001004bd778();
    if (((ulong)plVar4 & 1) != 0) {
      func_0x00010084dad0(plVar4);
    }
    param_1 = plStack_30;
    if (((ulong)plStack_30 & 1) != 0) {
      func_0x00010084dad0();
      param_1 = plStack_30;
    }
  }
  return param_1;
}



/* Entry: 104ab0e3c; end: 104ab0e8b;  */

undefined8 * FUN_104ab0e3c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x10;
  undefined8 *puStack_38;
  
  param_1[1] = param_2;
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 3) = 0;
  if (*(long *)(param_2 + 0xb0) == 0) {
    *(undefined8 **)(param_2 + 0xb0) = param_1;
    func_0x00010047a478(param_1);
    *extraout_x8 = *param_1;
    func_0x00010047a478();
    *param_1 = extraout_x10;
    *(undefined1 *)((long)extraout_x8_00 + 0x19) = 1;
    return extraout_x8_00;
  }
  func_0x00010bdabc1c();
  uVar1 = *(uint *)(param_2 + 8);
  if (*(int *)(param_1 + 1) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      *(undefined4 *)(param_1 + 1) = 0xffffffff;
    }
    else {
      puStack_38 = param_1;
      (*(code *)(&PTR_FUN_1107c4e28)[uVar1])(&puStack_38,param_1,param_2);
    }
  }
  return param_1;
}



/* Entry: 104ab0e8c; end: 104ab0efb;  */

long FUN_104ab0e8c(long param_1,long param_2)

{
  uint uVar1;
  long lStack_28;
  
  uVar1 = *(uint *)(param_2 + 8);
  if (*(int *)(param_1 + 8) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
    }
    else {
      lStack_28 = param_1;
      (*(code *)(&PTR_FUN_1107c4e28)[uVar1])(&lStack_28,param_1,param_2);
    }
  }
  return param_1;
}



/* Entry: 104ab0efc; end: 104ab0f3f;  */

void FUN_104ab0efc(long *param_1)

{
  if (*(int *)(*param_1 + 8) != 0) {
    *(undefined4 *)(*param_1 + 8) = 0;
  }
  return;
}



/* Entry: 104ab0f40; end: 104ab0ff3;  */

undefined8 * FUN_104ab0f40(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  long *plVar4;
  long lVar5;
  ulong uStack_28;
  
  *(undefined8 *)(param_1[1] + 0xb0) = 0;
  if (*(char *)((long)param_1 + 0x19) != '\0') {
    puVar3 = param_1;
    func_0x00010047a478(*param_1);
    *puVar3 = extraout_x8;
  }
  if (*(char *)(param_1 + 3) != '\0') {
    puVar3 = (undefined8 *)0x30;
    __Znwm();
    *puVar3 = 0;
    puVar3[1] = 0;
    lVar5 = param_1[1];
    plVar4 = *(long **)(lVar5 + 0x10);
    puVar3[4] = plVar4;
    puVar3[5] = lVar5;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    puVar3[1] = FUN_104ab0ff4;
    puVar3[2] = puVar3;
    puVar3[3] = 0;
    uStack_28 = 0;
    func_0x00010082bfa8(param_1[2],puVar3,&uStack_28,"re-poll");
    if ((uStack_28 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  return param_1;
}



/* Entry: 104ab0ff4; end: 104ab10bf;  */

void FUN_104ab0ff4(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 auStack_e0 [3];
  undefined8 uStack_c8;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_30 = *(long *)(param_1 + 0x28);
  auStack_e0[0] = 0;
  uStack_c8 = 0;
  plVar3 = *(long **)(lStack_30 + 0x10);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = *plVar3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  FUN_104ab0298(*(undefined8 *)(param_1 + 0x28),auStack_e0);
  func_0x00010061694c(auStack_e0);
  plVar3 = *(long **)(param_1 + 0x20);
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
    func_0x000100836ca4();
  }
  __ZdlPv(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume(param_1);
  return;
}



/* Entry: 104ab10c0; end: 104ab10c7;  */

void FUN_104ab10c0(void)

{
  return;
}



/* Entry: 104ab10c8; end: 104ab10fb;  */

void FUN_104ab10c8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1107c4e48;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 104ab10fc; end: 104ab10ff;  */

void FUN_104ab10fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104ab1100; end: 104ab113b;  */

long FUN_104ab1100(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c4ea8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104ab113c; end: 104ab11a3;  */

undefined ** FUN_104ab113c(void)

{
  return &PTR_DAT_1107c4ea8;
}



/* Entry: 104ab11a4; end: 104ab12c7;  */

ulong * FUN_104ab11a4(ulong *param_1,ulong *param_2)

{
  ulong **ppuVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puStack_50;
  ulong uStack_48;
  
  ppuVar1 = &puStack_50;
  puVar5 = param_1 + 1;
  uVar7 = *param_1;
  if ((uVar7 & 1) == 0) {
    uVar2 = 2;
  }
  else {
    puVar5 = (ulong *)param_1[1];
    uVar2 = param_1[2] << 1;
  }
  puStack_50 = (ulong *)0x0;
  uStack_48 = 0;
  FUN_104a8a074();
  uVar6 = uVar7 >> 1;
  puVar4 = (ulong *)(ppuVar1 + uVar6 * 3);
  uVar9 = param_2[1];
  uVar8 = *param_2;
  puVar4[2] = param_2[2];
  uStack_48 = uVar2;
  puVar4[1] = uVar9;
  puStack_50 = (ulong *)ppuVar1;
  *puVar4 = uVar8;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar2 = uVar6;
  puVar3 = puVar5;
  if (1 < uVar7) {
    do {
      uVar8 = puVar3[1];
      uVar7 = *puVar3;
      ppuVar1[2] = (ulong *)puVar3[2];
      ppuVar1[1] = (ulong *)uVar8;
      *ppuVar1 = (ulong *)uVar7;
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      uVar2 = uVar2 - 1;
      ppuVar1 = ppuVar1 + 3;
      puVar3 = puVar3 + 3;
    } while (uVar2 != 0);
    puVar5 = puVar5 + uVar6 * 3;
    do {
      if (*(char *)((long)puVar5 + -1) < '\0') {
        __ZdlPv(puVar5[-3]);
      }
      uVar6 = uVar6 - 1;
      puVar5 = puVar5 + -3;
    } while (uVar6 != 0);
  }
  uVar7 = *param_1;
  if ((uVar7 & 1) != 0) {
    __ZdlPv(param_1[1]);
    uVar7 = *param_1;
  }
  param_1[1] = (ulong)puStack_50;
  param_1[2] = uStack_48;
  *param_1 = (uVar7 | 1) + 2;
  return puVar4;
}



/* Entry: 104ab12c8; end: 104ab12ef;  */

void FUN_104ab12c8(long param_1,ulong param_2)

{
  FUN_104ab07a8(*(undefined8 *)(param_1 + 8));
  if ((param_2 & 0xfffffffe) == 0) {
    return;
  }
  FUN_104a71e10();
  return;
}



/* Entry: 104ab12f0; end: 104ab12fb;  */

void FUN_104ab12f0(void)

{
  return;
}



/* Entry: 104ab12fc; end: 104ab132f;  */

void FUN_104ab12fc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_1107c4f38;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 104ab1330; end: 104ab135f;  */

void FUN_104ab1330(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1107c4f38;
  param_2[1] = uVar1;
  return;
}



/* Entry: 104ab1360; end: 104ab139b;  */

long FUN_104ab1360(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c4f98);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104ab139c; end: 104ab13af;  */

undefined ** FUN_104ab139c(void)

{
  return &PTR_DAT_1107c4f98;
}



/* Entry: 104ab13b0; end: 104ab1443;  */

bool FUN_104ab13b0(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined **ppuVar6;
  
  uVar3 = param_1;
  _strcmp(param_1,"OK");
  if ((int)uVar3 == 0) {
    lVar4 = 0;
    bVar2 = true;
  }
  else {
    uVar1 = 0xffffffffffffffff;
    ppuVar6 = &PTR_s_CANCELLED_1107c4fb8;
    do {
      uVar5 = uVar1;
      if (uVar5 == 0xf) {
        return false;
      }
      uVar3 = param_1;
      _strcmp(param_1,*ppuVar6);
      uVar1 = uVar5 + 1;
      ppuVar6 = ppuVar6 + 2;
    } while ((int)uVar3 != 0);
    bVar2 = uVar5 + 1 < 0x10;
    lVar4 = uVar5 + 2;
  }
  *param_2 = *(undefined4 *)(&UNK_1107c4fb0 + lVar4 * 0x10);
  return bVar2;
}



/* Entry: 104ab1444; end: 104ab146f;  */

void FUN_104ab1444(long param_1,long *param_2)

{
  FUN_104ab1470();
  if (param_1 != 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 104ab1470; end: 104ab148f;  */

undefined * FUN_104ab1470(uint param_1)

{
  if (param_1 < 3) {
    return (&PTR_DAT_1107c50b8)[(int)param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 104ab1490; end: 104ab162b;  */

ulong FUN_104ab1490(long param_1,ulong param_2)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  uint *****pppppuVar4;
  long lVar5;
  uint uStack_5c;
  ulong uStack_58;
  uint ****appppuStack_50 [2];
  uint auStack_40 [2];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar2 = (int)param_2;
  if (3 < iVar2) {
    func_0x00010bdabc50(param_2);
    goto LAB_104ab1600;
  }
  if (iVar2 == 0) {
LAB_104ab1538:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return param_2;
    }
    ___stack_chk_fail();
  }
  else {
    if (iVar2 < 1) {
      func_0x00010bdabc80();
      goto LAB_104ab1600;
    }
    lVar5 = 0;
    uStack_58 = 0;
    auStack_40[0] = 2;
    auStack_40[1] = 1;
    do {
      uStack_5c = *(uint *)((long)auStack_40 + lVar5);
      if ((*(byte *)(param_1 + ((ulong)(long)(int)uStack_5c >> 3)) >> (ulong)(uStack_5c & 7) & 1) !=
          0) {
        func_0x000104ab1654(&uStack_58,&uStack_5c);
      }
      lVar5 = lVar5 + 4;
    } while (lVar5 != 8);
    if (uStack_58 < 2) {
      param_2 = 0;
      uVar3 = uStack_58;
joined_r0x000104ab152c:
      if (uVar3 != 0) {
        __ZdlPv(appppuStack_50[0]);
      }
      goto LAB_104ab1538;
    }
    if (iVar2 == 1) {
      pppppuVar4 = appppuStack_50;
      if ((uStack_58 & 1) != 0) {
        pppppuVar4 = (uint *****)appppuStack_50[0];
      }
LAB_104ab15d8:
      uVar3 = uStack_58 & 1;
      param_2 = (ulong)*(uint *)pppppuVar4;
      goto joined_r0x000104ab152c;
    }
    if (iVar2 == 2) {
      pppppuVar4 = appppuStack_50;
      if ((uStack_58 & 1) != 0) {
        pppppuVar4 = (uint *****)appppuStack_50[0];
      }
      pppppuVar4 = (uint *****)((long)pppppuVar4 + (uStack_58 & 0xfffffffffffffffc));
      goto LAB_104ab15d8;
    }
    if (iVar2 == 3) {
      pppppuVar4 = appppuStack_50;
      if ((uStack_58 & 1) != 0) {
        pppppuVar4 = (uint *****)appppuStack_50[0];
      }
      pppppuVar4 = (uint *****)((long)pppppuVar4 + ((uStack_58 >> 1) - 1) * 4);
      goto LAB_104ab15d8;
    }
  }
  _abort();
LAB_104ab1600:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104ab1604);
  (*pcVar1)();
}



/* Entry: 104ab162c; end: 104ab1697;  */

undefined1  [16] FUN_104ab162c(byte *param_1)

{
  return *(undefined1 (*) [16])(((ulong)*param_1 & 7) * 0x10 + 0x1136a1e58);
}



/* Entry: 104ab1698; end: 104ab176b;  */

undefined4 * FUN_104ab1698(ulong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined4 *puStack_50;
  ulong uStack_48;
  
  ppuVar2 = &puStack_50;
  puVar6 = param_1 + 1;
  uVar7 = *param_1;
  if ((uVar7 & 1) == 0) {
    uVar3 = 8;
  }
  else {
    puVar6 = (ulong *)param_1[1];
    uVar3 = param_1[2] << 1;
  }
  puStack_50 = (undefined4 *)0x0;
  uStack_48 = 0;
  FUN_104ab176c();
  uVar4 = uVar7 >> 1;
  puVar1 = (undefined4 *)((long)ppuVar2 + uVar4 * 4);
  puStack_50 = (undefined4 *)ppuVar2;
  uStack_48 = uVar3;
  *puVar1 = *param_2;
  puVar5 = (undefined4 *)ppuVar2;
  if (1 < uVar7) {
    do {
      *puVar5 = (int)*puVar6;
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 1;
      puVar6 = (ulong *)((long)puVar6 + 4);
    } while (uVar4 != 0);
  }
  uVar7 = *param_1;
  if ((uVar7 & 1) != 0) {
    __ZdlPv(param_1[1]);
    uVar7 = *param_1;
    ppuVar2 = (undefined4 **)puStack_50;
    uVar3 = uStack_48;
  }
  param_1[1] = (ulong)ppuVar2;
  param_1[2] = uVar3;
  *param_1 = (uVar7 | 1) + 2;
  return puVar1;
}



/* Entry: 104ab176c; end: 104ab182f;  */

undefined1  [16] FUN_104ab176c(int param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 >> 0x3e == 0) {
    lVar1 = param_2 << 2;
    __Znwm(lVar1);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar1;
    return auVar5;
  }
  FUN_104a7757c();
  if (param_1 != 0) {
    if (param_1 == 1) {
      uVar4 = 0;
    }
    else {
      if (param_1 != 2) {
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/compression/message_compress.cc"
                            ,0xa7,2,"invalid compression algorithm %d");
        goto LAB_104ab1810;
      }
      uVar4 = 1;
    }
    uVar2 = param_2;
    uVar3 = param_3;
    FUN_104ab1a7c(param_2,param_3,uVar4);
    if ((int)uVar2 != 0) {
      uVar4 = 1;
      param_3 = uVar3;
      goto LAB_104ab1820;
    }
  }
LAB_104ab1810:
  FUN_104ab1830(param_2,param_3);
  uVar4 = 0;
LAB_104ab1820:
  auVar6._8_8_ = param_3;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Entry: 104ab1830; end: 104ab18df;  */

char * FUN_104ab1830(char *param_1,char *param_2,long param_3)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  ulong uVar7;
  char *pcVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  long *plVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  char *pcStack_130;
  long lStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  char acStack_110 [64];
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar13 = param_1;
  pcVar6 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar14 = 0;
    do {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + uVar14 * 0x20);
      plVar12 = (long *)*puVar1;
      if ((long *)0x1 < plVar12) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = *plVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_58 = puVar1[1];
      uStack_60 = *puVar1;
      uStack_48 = puVar1[3];
      uStack_50 = puVar1[2];
      pcVar13 = param_2;
      pcVar6 = (char *)&uStack_60;
      func_0x0001005a70c4();
      uVar14 = uVar14 + 1;
    } while (uVar14 < *(ulong *)(param_1 + 0x10));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return pcVar13;
  }
  ___stack_chk_fail();
  iVar5 = (int)pcVar13;
  puStack_70 = &stack0xfffffffffffffff0;
  if (iVar5 == 2) {
    bVar3 = true;
  }
  else {
    if (iVar5 != 1) {
      pcStack_68 = FUN_104ab18e0;
      if (iVar5 != 0) {
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/compression/message_compress.cc"
                            ,0xc0,2,"invalid compression algorithm %d");
      }
      else {
        FUN_104ab1830(pcVar6,param_3);
      }
      return (char *)(ulong)(iVar5 == 0);
    }
    bVar3 = false;
  }
  pcVar13 = acStack_110;
  pcVar8 = acStack_110;
  pcStack_68 = FUN_104ab18e0;
  uVar14 = *(ulong *)(param_3 + 0x10);
  uVar16 = *(undefined8 *)(param_3 + 0x20);
  acStack_110[8] = '\0';
  acStack_110[9] = '\0';
  acStack_110[10] = '\0';
  acStack_110[0xb] = '\0';
  acStack_110[0xc] = '\0';
  acStack_110[0xd] = '\0';
  acStack_110[0xe] = '\0';
  acStack_110[0xf] = '\0';
  acStack_110[0] = '\0';
  acStack_110[1] = '\0';
  acStack_110[2] = '\0';
  acStack_110[3] = '\0';
  acStack_110[4] = '\0';
  acStack_110[5] = '\0';
  acStack_110[6] = '\0';
  acStack_110[7] = '\0';
  acStack_110[0x18] = '\0';
  acStack_110[0x19] = '\0';
  acStack_110[0x1a] = '\0';
  acStack_110[0x1b] = '\0';
  acStack_110[0x1c] = '\0';
  acStack_110[0x1d] = '\0';
  acStack_110[0x1e] = '\0';
  acStack_110[0x1f] = '\0';
  acStack_110[0x10] = '\0';
  acStack_110[0x11] = '\0';
  acStack_110[0x12] = '\0';
  acStack_110[0x13] = '\0';
  acStack_110[0x14] = '\0';
  acStack_110[0x15] = '\0';
  acStack_110[0x16] = '\0';
  acStack_110[0x17] = '\0';
  acStack_110[0x28] = '\0';
  acStack_110[0x29] = '\0';
  acStack_110[0x2a] = '\0';
  acStack_110[0x2b] = '\0';
  acStack_110[0x2c] = '\0';
  acStack_110[0x2d] = '\0';
  acStack_110[0x2e] = '\0';
  acStack_110[0x2f] = '\0';
  acStack_110[0x20] = '\0';
  acStack_110[0x21] = '\0';
  acStack_110[0x22] = '\0';
  acStack_110[0x23] = '\0';
  acStack_110[0x24] = '\0';
  acStack_110[0x25] = '\0';
  acStack_110[0x26] = '\0';
  acStack_110[0x27] = '\0';
  acStack_110[0x38] = '\0';
  acStack_110[0x39] = '\0';
  acStack_110[0x3a] = '\0';
  acStack_110[0x3b] = '\0';
  acStack_110[0x3c] = '\0';
  acStack_110[0x3d] = '\0';
  acStack_110[0x3e] = '\0';
  acStack_110[0x3f] = '\0';
  acStack_110[0x30] = '\0';
  acStack_110[0x31] = '\0';
  acStack_110[0x32] = '\0';
  acStack_110[0x33] = '\0';
  acStack_110[0x34] = '\0';
  acStack_110[0x35] = '\0';
  acStack_110[0x36] = '\0';
  acStack_110[0x37] = '\0';
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uVar11 = 0xf;
  if (bVar3) {
    uVar11 = 0x1f;
  }
  uVar7 = (ulong)uVar11;
  pcStack_d0 = FUN_104ab1bb4;
  uStack_c8 = 0x104ab1bbc;
  _inflateInit2_();
  if ((int)pcVar13 == 0) {
    FUN_104ab1bc4(acStack_110,pcVar6,param_3,PTR__inflate_11034bc00);
    if ((int)pcVar8 == 0) {
      uVar7 = uVar14;
      if (uVar14 < *(ulong *)(param_3 + 0x10)) {
        do {
          plVar12 = *(long **)(*(long *)(param_3 + 8) + uVar7 * 0x20);
          if ((long *)0x1 < plVar12) {
            do {
              lVar10 = *plVar12;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar3) {
                *plVar12 = lVar10 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar10 + -1 == 0) {
              (*(code *)plVar12[1])();
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(ulong *)(param_3 + 0x10));
      }
      *(ulong *)(param_3 + 0x10) = uVar14;
      *(undefined8 *)(param_3 + 0x20) = uVar16;
    }
    _inflateEnd(acStack_110);
    return pcVar8;
  }
  func_0x00010bdabcb8();
  iVar5 = (int)&uStack_1b0;
  iVar4 = (int)&uStack_1b0;
  pcStack_118 = FUN_104ab1a7c;
  uVar15 = *(ulong *)(uVar7 + 0x10);
  uVar17 = *(undefined8 *)(uVar7 + 0x20);
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  pcStack_170 = FUN_104ab1bb4;
  uStack_168 = 0x104ab1bbc;
  pcVar8 = (char *)0xffffffff;
  iVar9 = 8;
  uStack_140 = uVar16;
  uStack_138 = uVar14;
  pcStack_130 = pcVar6;
  lStack_128 = param_3;
  ppuStack_120 = &puStack_70;
  _deflateInit2_();
  if (iVar5 == 0) {
    FUN_104ab1bc4(&uStack_1b0,pcVar13,uVar7,PTR__deflate_11034bbd0);
    if ((iVar4 == 0) || (*(ulong *)(pcVar13 + 0x20) <= *(ulong *)(uVar7 + 0x20))) {
      uVar14 = uVar15;
      if (uVar15 < *(ulong *)(uVar7 + 0x10)) {
        do {
          plVar12 = *(long **)(*(long *)(uVar7 + 8) + uVar14 * 0x20);
          if ((long *)0x1 < plVar12) {
            do {
              lVar10 = *plVar12;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar3) {
                *plVar12 = lVar10 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar10 + -1 == 0) {
              (*(code *)plVar12[1])();
            }
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < *(ulong *)(uVar7 + 0x10));
      }
      pcVar13 = (char *)0x0;
      *(ulong *)(uVar7 + 0x10) = uVar15;
      *(undefined8 *)(uVar7 + 0x20) = uVar17;
    }
    else {
      pcVar13 = (char *)0x1;
    }
    _deflateEnd(&uStack_1b0);
    return pcVar13;
  }
  func_0x00010bdabcec();
  pcVar13 = (char *)(ulong)(uint)(iVar9 * (int)pcVar8);
  if ((pcVar13 == (char *)0x0) || (func_0x000107c610a0(), pcVar13 != (char *)0x0)) {
    return pcVar13;
  }
  func_0x000107c60ebc();
  lVar10 = -2;
  do {
    iVar5 = (int)*pcVar13;
    func_0x000107c60e80();
    iVar4 = (int)*pcVar8;
    func_0x000107c60e80();
    bVar3 = lVar10 != 0;
    lVar10 = lVar10 + -1;
    if ((iVar4 == 0 || iVar5 == 0) || iVar5 != iVar4) break;
    pcVar8 = pcVar8 + 1;
    pcVar13 = pcVar13 + 1;
  } while (bVar3);
  return (char *)(ulong)(uint)(iVar5 - iVar4);
}



/* Entry: 104ab18e0; end: 104ab1963;  */

char * FUN_104ab18e0(int param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  char *pcVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  char acStack_b0 [64];
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_1 == 2) {
    bVar2 = true;
  }
  else {
    if (param_1 != 1) {
      if (param_1 != 0) {
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/compression/message_compress.cc"
                            ,0xc0,2,"invalid compression algorithm %d");
      }
      else {
        FUN_104ab1830(param_2,param_3);
      }
      return (char *)(ulong)(param_1 == 0);
    }
    bVar2 = false;
  }
  pcVar11 = acStack_b0;
  pcVar7 = acStack_b0;
  uVar12 = *(ulong *)(param_3 + 0x10);
  uVar14 = *(undefined8 *)(param_3 + 0x20);
  acStack_b0[8] = '\0';
  acStack_b0[9] = '\0';
  acStack_b0[10] = '\0';
  acStack_b0[0xb] = '\0';
  acStack_b0[0xc] = '\0';
  acStack_b0[0xd] = '\0';
  acStack_b0[0xe] = '\0';
  acStack_b0[0xf] = '\0';
  acStack_b0[0] = '\0';
  acStack_b0[1] = '\0';
  acStack_b0[2] = '\0';
  acStack_b0[3] = '\0';
  acStack_b0[4] = '\0';
  acStack_b0[5] = '\0';
  acStack_b0[6] = '\0';
  acStack_b0[7] = '\0';
  acStack_b0[0x18] = '\0';
  acStack_b0[0x19] = '\0';
  acStack_b0[0x1a] = '\0';
  acStack_b0[0x1b] = '\0';
  acStack_b0[0x1c] = '\0';
  acStack_b0[0x1d] = '\0';
  acStack_b0[0x1e] = '\0';
  acStack_b0[0x1f] = '\0';
  acStack_b0[0x10] = '\0';
  acStack_b0[0x11] = '\0';
  acStack_b0[0x12] = '\0';
  acStack_b0[0x13] = '\0';
  acStack_b0[0x14] = '\0';
  acStack_b0[0x15] = '\0';
  acStack_b0[0x16] = '\0';
  acStack_b0[0x17] = '\0';
  acStack_b0[0x28] = '\0';
  acStack_b0[0x29] = '\0';
  acStack_b0[0x2a] = '\0';
  acStack_b0[0x2b] = '\0';
  acStack_b0[0x2c] = '\0';
  acStack_b0[0x2d] = '\0';
  acStack_b0[0x2e] = '\0';
  acStack_b0[0x2f] = '\0';
  acStack_b0[0x20] = '\0';
  acStack_b0[0x21] = '\0';
  acStack_b0[0x22] = '\0';
  acStack_b0[0x23] = '\0';
  acStack_b0[0x24] = '\0';
  acStack_b0[0x25] = '\0';
  acStack_b0[0x26] = '\0';
  acStack_b0[0x27] = '\0';
  acStack_b0[0x38] = '\0';
  acStack_b0[0x39] = '\0';
  acStack_b0[0x3a] = '\0';
  acStack_b0[0x3b] = '\0';
  acStack_b0[0x3c] = '\0';
  acStack_b0[0x3d] = '\0';
  acStack_b0[0x3e] = '\0';
  acStack_b0[0x3f] = '\0';
  acStack_b0[0x30] = '\0';
  acStack_b0[0x31] = '\0';
  acStack_b0[0x32] = '\0';
  acStack_b0[0x33] = '\0';
  acStack_b0[0x34] = '\0';
  acStack_b0[0x35] = '\0';
  acStack_b0[0x36] = '\0';
  acStack_b0[0x37] = '\0';
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uVar10 = 0xf;
  if (bVar2) {
    uVar10 = 0x1f;
  }
  uVar6 = (ulong)uVar10;
  pcStack_70 = FUN_104ab1bb4;
  uStack_68 = 0x104ab1bbc;
  _inflateInit2_();
  if ((int)pcVar11 == 0) {
    FUN_104ab1bc4(acStack_b0,param_2,param_3,PTR__inflate_11034bc00);
    if ((int)pcVar7 == 0) {
      uVar6 = uVar12;
      if (uVar12 < *(ulong *)(param_3 + 0x10)) {
        do {
          plVar5 = *(long **)(*(long *)(param_3 + 8) + uVar6 * 0x20);
          if ((long *)0x1 < plVar5) {
            do {
              lVar9 = *plVar5;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar2) {
                *plVar5 = lVar9 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar9 + -1 == 0) {
              (*(code *)plVar5[1])();
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(ulong *)(param_3 + 0x10));
      }
      *(ulong *)(param_3 + 0x10) = uVar12;
      *(undefined8 *)(param_3 + 0x20) = uVar14;
    }
    _inflateEnd(acStack_b0);
    return pcVar7;
  }
  func_0x00010bdabcb8();
  iVar3 = (int)&uStack_150;
  iVar4 = (int)&uStack_150;
  pcStack_b8 = FUN_104ab1a7c;
  uVar13 = *(ulong *)(uVar6 + 0x10);
  uVar15 = *(undefined8 *)(uVar6 + 0x20);
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  pcStack_110 = FUN_104ab1bb4;
  uStack_108 = 0x104ab1bbc;
  pcVar7 = (char *)0xffffffff;
  iVar8 = 8;
  uStack_e0 = uVar14;
  uStack_d8 = uVar12;
  uStack_d0 = param_2;
  lStack_c8 = param_3;
  puStack_c0 = &stack0xfffffffffffffff0;
  _deflateInit2_();
  if (iVar3 == 0) {
    FUN_104ab1bc4(&uStack_150,pcVar11,uVar6,PTR__deflate_11034bbd0);
    if ((iVar4 == 0) || (*(ulong *)(pcVar11 + 0x20) <= *(ulong *)(uVar6 + 0x20))) {
      uVar12 = uVar13;
      if (uVar13 < *(ulong *)(uVar6 + 0x10)) {
        do {
          plVar5 = *(long **)(*(long *)(uVar6 + 8) + uVar12 * 0x20);
          if ((long *)0x1 < plVar5) {
            do {
              lVar9 = *plVar5;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar2) {
                *plVar5 = lVar9 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar9 + -1 == 0) {
              (*(code *)plVar5[1])();
            }
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(ulong *)(uVar6 + 0x10));
      }
      pcVar11 = (char *)0x0;
      *(ulong *)(uVar6 + 0x10) = uVar13;
      *(undefined8 *)(uVar6 + 0x20) = uVar15;
    }
    else {
      pcVar11 = (char *)0x1;
    }
    _deflateEnd(&uStack_150);
    return pcVar11;
  }
  func_0x00010bdabcec();
  pcVar11 = (char *)(ulong)(uint)(iVar8 * (int)pcVar7);
  if ((pcVar11 == (char *)0x0) || (func_0x000107c610a0(), pcVar11 != (char *)0x0)) {
    return pcVar11;
  }
  func_0x000107c60ebc();
  lVar9 = -2;
  do {
    iVar3 = (int)*pcVar11;
    func_0x000107c60e80();
    iVar4 = (int)*pcVar7;
    func_0x000107c60e80();
    bVar2 = lVar9 != 0;
    lVar9 = lVar9 + -1;
    if ((iVar4 == 0 || iVar3 == 0) || iVar3 != iVar4) break;
    pcVar7 = pcVar7 + 1;
    pcVar11 = pcVar11 + 1;
  } while (bVar2);
  return (char *)(ulong)(uint)(iVar3 - iVar4);
}



/* Entry: 104ab1964; end: 104ab1a7b;  */

char * FUN_104ab1964(undefined8 param_1,long param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  char *pcVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  char acStack_b0 [64];
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pcVar11 = acStack_b0;
  pcVar7 = acStack_b0;
  uVar12 = *(ulong *)(param_2 + 0x10);
  uVar14 = *(undefined8 *)(param_2 + 0x20);
  acStack_b0[8] = '\0';
  acStack_b0[9] = '\0';
  acStack_b0[10] = '\0';
  acStack_b0[0xb] = '\0';
  acStack_b0[0xc] = '\0';
  acStack_b0[0xd] = '\0';
  acStack_b0[0xe] = '\0';
  acStack_b0[0xf] = '\0';
  acStack_b0[0] = '\0';
  acStack_b0[1] = '\0';
  acStack_b0[2] = '\0';
  acStack_b0[3] = '\0';
  acStack_b0[4] = '\0';
  acStack_b0[5] = '\0';
  acStack_b0[6] = '\0';
  acStack_b0[7] = '\0';
  acStack_b0[0x18] = '\0';
  acStack_b0[0x19] = '\0';
  acStack_b0[0x1a] = '\0';
  acStack_b0[0x1b] = '\0';
  acStack_b0[0x1c] = '\0';
  acStack_b0[0x1d] = '\0';
  acStack_b0[0x1e] = '\0';
  acStack_b0[0x1f] = '\0';
  acStack_b0[0x10] = '\0';
  acStack_b0[0x11] = '\0';
  acStack_b0[0x12] = '\0';
  acStack_b0[0x13] = '\0';
  acStack_b0[0x14] = '\0';
  acStack_b0[0x15] = '\0';
  acStack_b0[0x16] = '\0';
  acStack_b0[0x17] = '\0';
  acStack_b0[0x28] = '\0';
  acStack_b0[0x29] = '\0';
  acStack_b0[0x2a] = '\0';
  acStack_b0[0x2b] = '\0';
  acStack_b0[0x2c] = '\0';
  acStack_b0[0x2d] = '\0';
  acStack_b0[0x2e] = '\0';
  acStack_b0[0x2f] = '\0';
  acStack_b0[0x20] = '\0';
  acStack_b0[0x21] = '\0';
  acStack_b0[0x22] = '\0';
  acStack_b0[0x23] = '\0';
  acStack_b0[0x24] = '\0';
  acStack_b0[0x25] = '\0';
  acStack_b0[0x26] = '\0';
  acStack_b0[0x27] = '\0';
  acStack_b0[0x38] = '\0';
  acStack_b0[0x39] = '\0';
  acStack_b0[0x3a] = '\0';
  acStack_b0[0x3b] = '\0';
  acStack_b0[0x3c] = '\0';
  acStack_b0[0x3d] = '\0';
  acStack_b0[0x3e] = '\0';
  acStack_b0[0x3f] = '\0';
  acStack_b0[0x30] = '\0';
  acStack_b0[0x31] = '\0';
  acStack_b0[0x32] = '\0';
  acStack_b0[0x33] = '\0';
  acStack_b0[0x34] = '\0';
  acStack_b0[0x35] = '\0';
  acStack_b0[0x36] = '\0';
  acStack_b0[0x37] = '\0';
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uVar10 = 0xf;
  if (param_3 != 0) {
    uVar10 = 0x1f;
  }
  uVar6 = (ulong)uVar10;
  pcStack_70 = FUN_104ab1bb4;
  uStack_68 = 0x104ab1bbc;
  _inflateInit2_();
  if ((int)pcVar11 == 0) {
    FUN_104ab1bc4(acStack_b0,param_1,param_2,PTR__inflate_11034bc00);
    if ((int)pcVar7 == 0) {
      uVar6 = uVar12;
      if (uVar12 < *(ulong *)(param_2 + 0x10)) {
        do {
          plVar5 = *(long **)(*(long *)(param_2 + 8) + uVar6 * 0x20);
          if ((long *)0x1 < plVar5) {
            do {
              lVar9 = *plVar5;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar2) {
                *plVar5 = lVar9 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar9 + -1 == 0) {
              (*(code *)plVar5[1])();
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(ulong *)(param_2 + 0x10));
      }
      *(ulong *)(param_2 + 0x10) = uVar12;
      *(undefined8 *)(param_2 + 0x20) = uVar14;
    }
    _inflateEnd(acStack_b0);
    return pcVar7;
  }
  func_0x00010bdabcb8();
  iVar3 = (int)&uStack_150;
  iVar4 = (int)&uStack_150;
  pcStack_b8 = FUN_104ab1a7c;
  uVar13 = *(ulong *)(uVar6 + 0x10);
  uVar15 = *(undefined8 *)(uVar6 + 0x20);
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  pcStack_110 = FUN_104ab1bb4;
  uStack_108 = 0x104ab1bbc;
  pcVar7 = (char *)0xffffffff;
  iVar8 = 8;
  uStack_e0 = uVar14;
  uStack_d8 = uVar12;
  uStack_d0 = param_1;
  lStack_c8 = param_2;
  puStack_c0 = &stack0xfffffffffffffff0;
  _deflateInit2_();
  if (iVar3 == 0) {
    FUN_104ab1bc4(&uStack_150,pcVar11,uVar6,PTR__deflate_11034bbd0);
    if ((iVar4 == 0) || (*(ulong *)(pcVar11 + 0x20) <= *(ulong *)(uVar6 + 0x20))) {
      uVar12 = uVar13;
      if (uVar13 < *(ulong *)(uVar6 + 0x10)) {
        do {
          plVar5 = *(long **)(*(long *)(uVar6 + 8) + uVar12 * 0x20);
          if ((long *)0x1 < plVar5) {
            do {
              lVar9 = *plVar5;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar2) {
                *plVar5 = lVar9 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar9 + -1 == 0) {
              (*(code *)plVar5[1])();
            }
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(ulong *)(uVar6 + 0x10));
      }
      pcVar11 = (char *)0x0;
      *(ulong *)(uVar6 + 0x10) = uVar13;
      *(undefined8 *)(uVar6 + 0x20) = uVar15;
    }
    else {
      pcVar11 = (char *)0x1;
    }
    _deflateEnd(&uStack_150);
    return pcVar11;
  }
  func_0x00010bdabcec();
  pcVar11 = (char *)(ulong)(uint)(iVar8 * (int)pcVar7);
  if ((pcVar11 == (char *)0x0) || (func_0x000107c610a0(), pcVar11 != (char *)0x0)) {
    return pcVar11;
  }
  func_0x000107c60ebc();
  lVar9 = -2;
  do {
    iVar3 = (int)*pcVar11;
    func_0x000107c60e80();
    iVar4 = (int)*pcVar7;
    func_0x000107c60e80();
    bVar2 = lVar9 != 0;
    lVar9 = lVar9 + -1;
    if ((iVar4 == 0 || iVar3 == 0) || iVar3 != iVar4) break;
    pcVar7 = pcVar7 + 1;
    pcVar11 = pcVar11 + 1;
  } while (bVar2);
  return (char *)(ulong)(uint)(iVar3 - iVar4);
}



/* Entry: 104ab1a7c; end: 104ab1bb3;  */

char * FUN_104ab1a7c(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar3 = (int)&uStack_a0;
  iVar4 = (int)&uStack_a0;
  uVar11 = *(ulong *)(param_2 + 0x10);
  uVar12 = *(undefined8 *)(param_2 + 0x20);
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  pcStack_60 = FUN_104ab1bb4;
  uStack_58 = 0x104ab1bbc;
  pcVar7 = (char *)0xffffffff;
  iVar8 = 8;
  _deflateInit2_();
  if (iVar3 == 0) {
    FUN_104ab1bc4(&uStack_a0,param_1,param_2,PTR__deflate_11034bbd0);
    if ((iVar4 == 0) || (*(ulong *)(param_1 + 0x20) <= *(ulong *)(param_2 + 0x20))) {
      uVar10 = uVar11;
      if (uVar11 < *(ulong *)(param_2 + 0x10)) {
        do {
          plVar5 = *(long **)(*(long *)(param_2 + 8) + uVar10 * 0x20);
          if ((long *)0x1 < plVar5) {
            do {
              lVar9 = *plVar5;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar2) {
                *plVar5 = lVar9 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar9 + -1 == 0) {
              (*(code *)plVar5[1])();
            }
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(ulong *)(param_2 + 0x10));
      }
      pcVar7 = (char *)0x0;
      *(ulong *)(param_2 + 0x10) = uVar11;
      *(undefined8 *)(param_2 + 0x20) = uVar12;
    }
    else {
      pcVar7 = (char *)0x1;
    }
    _deflateEnd(&uStack_a0);
    return pcVar7;
  }
  func_0x00010bdabcec();
  pcVar6 = (char *)(ulong)(uint)(iVar8 * (int)pcVar7);
  if ((pcVar6 == (char *)0x0) || (func_0x000107c610a0(), pcVar6 != (char *)0x0)) {
    return pcVar6;
  }
  func_0x000107c60ebc();
  lVar9 = -2;
  do {
    iVar3 = (int)*pcVar6;
    func_0x000107c60e80();
    iVar4 = (int)*pcVar7;
    func_0x000107c60e80();
    bVar2 = lVar9 != 0;
    lVar9 = lVar9 + -1;
    if ((iVar4 == 0 || iVar3 == 0) || iVar3 != iVar4) break;
    pcVar7 = pcVar7 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar2);
  return (char *)(ulong)(uint)(iVar3 - iVar4);
}



/* Entry: 104ab1bb4; end: 104ab1bc3;  */

char * FUN_104ab1bb4(undefined8 param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  long lVar7;
  
  uVar5 = (undefined4)((ulong)param_2 >> 0x20);
  iVar4 = (int)param_2;
  pcVar3 = (char *)(ulong)(uint)(param_3 * iVar4);
  if ((pcVar3 == (char *)0x0) || (func_0x000107c610a0(), pcVar3 != (char *)0x0)) {
    return pcVar3;
  }
  func_0x000107c60ebc();
  lVar7 = -2;
  pcVar6 = (char *)CONCAT44(uVar5,iVar4);
  do {
    iVar4 = (int)*pcVar3;
    func_0x000107c60e80();
    iVar2 = (int)*pcVar6;
    func_0x000107c60e80();
    bVar1 = lVar7 != 0;
    lVar7 = lVar7 + -1;
    if ((iVar2 == 0 || iVar4 == 0) || iVar4 != iVar2) break;
    pcVar6 = pcVar6 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar1);
  return (char *)(ulong)(uint)(iVar4 - iVar2);
}



/* Entry: 104ab1bc4; end: 104ab1e33;  */

/* WARNING: Possible PIC construction at 0x000104ab1d88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104ab1d8c) */
/* WARNING: Removing unreachable block (ram,0x000104ab1d98) */
/* WARNING: Removing unreachable block (ram,0x000104ab1da0) */
/* WARNING: Removing unreachable block (ram,0x000104ab1da8) */
/* WARNING: Removing unreachable block (ram,0x000104ab1db0) */
/* WARNING: Removing unreachable block (ram,0x000104ab1db8) */

undefined1  [16] FUN_104ab1bc4(long *param_1,long *param_2,undefined8 param_3,code *param_4)

{
  int iVar1;
  char *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  long *plVar13;
  long unaff_x24;
  ulong uVar14;
  code *pcVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  long alStack_178 [8];
  long lStack_138;
  long lStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  long *aplStack_f0 [2];
  long lStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  ulong uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = &lStack_80;
  pcVar2 = (char *)0x400;
  plVar4 = param_2;
  pcVar6 = (char *)param_4;
  func_0x0001005a7e6c(&lStack_80,0x400);
  if (lStack_80 == 0 || uStack_78 >> 0x20 == 0) {
    uVar12 = (uint)uStack_78;
    if (lStack_80 == 0) {
      uVar12 = (uint)uStack_78 & 0xff;
    }
    uVar8 = (ulong)uVar12;
    *(uint *)(param_1 + 4) = uVar12;
    unaff_x24 = (long)&uStack_78 + 1;
    lVar10 = unaff_x24;
    if (lStack_80 != 0) {
      lVar10 = lStack_70;
    }
    param_1[3] = lVar10;
    uVar9 = param_2[2];
    if (uVar9 != 0) {
      uVar14 = 0;
      plVar13 = (long *)0x0;
      do {
        uVar12 = 4;
        if (uVar14 != uVar9 - 1) {
          uVar12 = (uint)plVar13;
        }
        plVar13 = (long *)(ulong)uVar12;
        lVar10 = param_2[1];
        plVar5 = (long *)(lVar10 + uVar14 * 0x20);
        if (*plVar5 == 0) {
          lVar10 = (long)plVar5 + 9;
          *(uint *)(param_1 + 1) = (uint)(byte)plVar5[1];
        }
        else {
          uVar9 = plVar5[1];
          if (uVar9 >> 0x20 != 0) {
LAB_104ab1e24:
            func_0x00010bdabdbc();
            goto LAB_104ab1e28;
          }
          *(int *)(param_1 + 1) = (int)uVar9;
          lVar10 = *(long *)(lVar10 + uVar14 * 0x20 + 0x10);
        }
        *param_1 = lVar10;
        uVar9 = uVar8;
        do {
          if ((int)uVar9 == 0) {
            uStack_98 = uStack_78;
            lStack_a0 = lStack_80;
            uStack_88 = uStack_68;
            lStack_90 = lStack_70;
            plVar4 = &lStack_a0;
            func_0x0001005a7ec4(param_3);
            pcVar2 = (char *)0x400;
            func_0x0001005a7e6c(&lStack_c0,0x400);
            uStack_78 = uStack_b8;
            lStack_80 = lStack_c0;
            uStack_68 = uStack_a8;
            lStack_70 = lStack_b0;
            if ((lStack_c0 != 0) && (uStack_b8 >> 0x20 != 0)) {
              func_0x00010bdabd88();
              goto LAB_104ab1e24;
            }
            uVar8 = uStack_b8;
            if (lStack_c0 == 0) {
              uVar8 = (ulong)((uint)uStack_b8 & 0xff);
            }
            *(int *)(param_1 + 4) = (int)uVar8;
            lVar10 = unaff_x24;
            if (lStack_c0 != 0) {
              lVar10 = lStack_b0;
            }
            param_1[3] = lVar10;
          }
          pcVar2 = (char *)param_1;
          plVar4 = plVar13;
          (*param_4)();
          iVar1 = (int)pcVar2;
          if ((iVar1 < 0) && (iVar1 != -5)) {
            pcVar6 = "zlib error (%d)";
            plVar4 = (long *)0x40;
            aplStack_f0[0] = (long *)pcVar2;
            goto LAB_104ab1d84;
          }
          uVar9 = 0;
          uVar8 = (ulong)*(uint *)(param_1 + 4);
        } while (*(uint *)(param_1 + 4) == 0);
        if ((int)param_1[1] != 0) {
          pcVar6 = "zlib: not all input consumed";
          plVar4 = (long *)0x45;
          goto LAB_104ab1d84;
        }
        uVar14 = uVar14 + 1;
        uVar9 = param_2[2];
      } while (uVar14 < uVar9);
      if (iVar1 != 1) {
        pcVar6 = "zlib: Data error";
        plVar4 = (long *)0x4a;
LAB_104ab1d84:
        pcVar2 = 
        "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/compression/message_compress.cc"
        ;
        plVar5 = (long *)0x1;
        pcVar15 = (code *)0x104ab1d8c;
        goto code_r0x0001004686cc;
      }
    }
    if (lStack_80 == 0) goto LAB_104ab1e2c;
    uStack_d8 = uStack_78 - uVar8;
    lStack_e0 = lStack_80;
    uStack_c8 = uStack_68;
    lStack_d0 = lStack_70;
    plVar4 = &lStack_e0;
    uStack_78 = uStack_d8;
    func_0x0001005a7ec4(param_3);
    pcVar2 = (char *)0x1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      auVar19._8_8_ = plVar4;
      auVar19._0_8_ = 1;
      return auVar19;
    }
  }
  else {
LAB_104ab1e28:
    func_0x00010bdabd20();
LAB_104ab1e2c:
    func_0x00010bdabd54();
  }
  pcVar15 = FUN_104ab1e34;
  ___stack_chk_fail();
  plVar5 = (long *)0x2;
code_r0x0001004686cc:
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar5;
  plVar3 = plVar4;
  lStack_130 = unaff_x24;
  plStack_128 = plVar13;
  plStack_120 = param_1;
  plStack_118 = param_2;
  pcStack_110 = param_4;
  uStack_108 = param_3;
  puStack_100 = &stack0xfffffffffffffff0;
  pcStack_f8 = pcVar15;
  func_0x0001004686b8();
  if ((int)plVar11 != 0) {
    plVar13 = alStack_178;
    func_0x000107c616d0(plVar13,0x40,pcVar6,aplStack_f0);
    if ((int)(uint)plVar13 < 0) {
      plVar13 = (long *)0x0;
      plVar11 = (long *)0x0;
    }
    else if ((uint)plVar13 < 0x40) {
      plVar11 = (long *)0x0;
      plVar13 = alStack_178;
    }
    else {
      plVar11 = (long *)(((ulong)plVar13 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar13 = plVar11;
    }
    FUN_104a6e9e0(pcVar2,plVar4,plVar5,plVar13);
    func_0x000100460314();
    plVar3 = plVar4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    auVar16._8_8_ = plVar3;
    auVar16._0_8_ = plVar11;
    return auVar16;
  }
  func_0x000107c60e78();
  if ((ulong)plVar3 >> 0x3d == 0) {
    lVar10 = (long)plVar3 << 3;
    func_0x000107c60e20(lVar10);
    auVar17._8_8_ = plVar3;
    auVar17._0_8_ = lVar10;
    return auVar17;
  }
  FUN_104a7757c();
  lVar10 = plVar11[1];
  lVar7 = plVar11[2];
  while (lVar7 != lVar10) {
    plVar11[2] = lVar7 + -8;
    plVar13 = *(long **)(lVar7 + -8);
    *(undefined8 *)(lVar7 + -8) = 0;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    lVar7 = plVar11[2];
  }
  if (*plVar11 != 0) {
    func_0x000107c60e14();
  }
  auVar18._8_8_ = plVar3;
  auVar18._0_8_ = plVar11;
  return auVar18;
}



/* Entry: 104ab1e34; end: 104ab1e3b;  */

undefined1  [16]
FUN_104ab1e34(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long alStack_88 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  uVar4 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_88;
    func_0x000107c616d0(plVar1,0x40,param_4,&stack0x00000000);
    if ((int)(uint)plVar1 < 0) {
      plVar3 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar3 = alStack_88;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar3 = plVar1;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar3);
    func_0x000100460314();
    uVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = plVar1;
    return auVar6;
  }
  func_0x000107c60e78();
  if (uVar4 >> 0x3d == 0) {
    lVar2 = uVar4 << 3;
    func_0x000107c60e20(lVar2);
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar5 = plVar1[2];
  while (lVar5 != lVar2) {
    plVar1[2] = lVar5 + -8;
    plVar3 = *(long **)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar5 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar1;
  return auVar8;
}



/* Entry: 104ab1e3c; end: 104ab1ee3;  */

long FUN_104ab1e3c(long param_1)

{
  long lVar1;
  long lStack_28;
  
  if (*(char *)(param_1 + 0x11f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x108));
  }
  func_0x000100472450(param_1 + 0xf0,*(undefined8 *)(param_1 + 0xf8));
  lStack_28 = param_1 + 0xd8;
  func_0x000100476c60(&lStack_28);
  func_0x000100476de4(param_1 + 0xc0,*(undefined8 *)(param_1 + 200));
  lVar1 = 0xa8;
  do {
    lStack_28 = param_1 + lVar1;
    func_0x000100476e3c(&lStack_28);
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0x78);
  do {
    lStack_28 = param_1 + lVar1;
    func_0x000100476eb8(&lStack_28);
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0);
  lStack_28 = param_1;
  func_0x000100477424(&lStack_28);
  return param_1;
}



/* Entry: 104ab1ee4; end: 104ab1f7b;  */

void FUN_104ab1ee4(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  
  puVar4 = (undefined8 *)*param_1;
  plVar5 = (long *)*puVar4;
  if (plVar5 == (long *)0x0) {
    return;
  }
  plVar1 = plVar5;
  plVar2 = (long *)puVar4[1];
  if ((long *)puVar4[1] != plVar5) {
    do {
      plVar6 = plVar2 + -4;
      plVar1 = (long *)plVar2[-1];
      if (plVar6 == plVar1) {
        lVar3 = 4;
        plVar1 = plVar6;
LAB_104ab1f38:
        (**(code **)(*plVar1 + lVar3 * 8))();
      }
      else if (plVar1 != (long *)0x0) {
        lVar3 = 5;
        goto LAB_104ab1f38;
      }
      plVar2 = plVar6;
    } while (plVar6 != plVar5);
    plVar1 = *(long **)*param_1;
  }
  puVar4[1] = plVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar1);
  return;
}



/* Entry: 104ab1f7c; end: 104ab1f8f;  */

void FUN_104ab1f7c(undefined8 param_1,ulong param_2)

{
  FUN_104a6fa70(&DAT_10f62a4d8);
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  FUN_104a7757c();
  return;
}



/* Entry: 104ab1f90; end: 104ab1fc3;  */

void FUN_104ab1f90(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  FUN_104a7757c();
  return;
}



/* Entry: 104ab1fc4; end: 104ab1fcf;  */

void FUN_104ab1fc4(void)

{
  return;
}



/* Entry: 104ab1fd0; end: 104ab2013;  */

void FUN_104ab1fd0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x240;
  __Znwm();
  FUN_104ab21fc();
  *param_1 = uVar1;
  return;
}



/* Entry: 104ab2014; end: 104ab204f;  */

long * FUN_104ab2014(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plStack_38;
  
  if (lRam00000001136a1f38 == 0) {
    plVar3 = (long *)0x240;
    __Znwm();
    plVar4 = plVar3;
    FUN_104ab21fc();
    *param_1 = plVar3;
    return plVar4;
  }
  plVar4 = *(long **)(lRam00000001136a1f38 + 0x18);
  if (plVar4 == (long *)0x0) {
    FUN_104a71f98();
    plVar4 = plRam00000001136a1f40;
    if (plRam00000001136a1f40 == (long *)0x0) {
      FUN_104ab2014(&plStack_38);
      do {
        plVar4 = plRam00000001136a1f40;
        if (plRam00000001136a1f40 != (long *)0x0) {
          ClearExclusiveLocal();
          if (plStack_38 == (long *)0x0) {
            return plRam00000001136a1f40;
          }
          (**(code **)(*plStack_38 + 0x20))();
          return plVar4;
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x1136a1f40,0x10);
        if (bVar2) {
          plRam00000001136a1f40 = plStack_38;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar4 = plStack_38;
      } while (cVar1 != '\0');
    }
    return plVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x000104ab2040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x30))();
  return plVar4;
}



/* Entry: 104ab2050; end: 104ab2167;  */

long * FUN_104ab2050(void)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plStack_28;
  
  plVar3 = plRam00000001136a1f40;
  if (plRam00000001136a1f40 == (long *)0x0) {
    FUN_104ab2014(&plStack_28);
    do {
      plVar3 = plRam00000001136a1f40;
      if (plRam00000001136a1f40 != (long *)0x0) {
        ClearExclusiveLocal();
        if (plStack_28 == (long *)0x0) {
          return plRam00000001136a1f40;
        }
        (**(code **)(*plStack_28 + 0x20))();
        return plVar3;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136a1f40,0x10);
      if (bVar2) {
        plRam00000001136a1f40 = plStack_28;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar3 = plStack_28;
    } while (cVar1 != '\0');
  }
  return plVar3;
}



/* Entry: 104ab2168; end: 104ab21fb;  */

undefined8 * FUN_104ab2168(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_1107c50e0;
  FUN_104ab53bc(param_1 + 1);
  FUN_104ab3708(param_1 + 0x1b,2);
  func_0x000100460318(param_1 + 0x3b);
  param_1[0x43] = &UNK_10e52b660;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  return param_1;
}



/* Entry: 104ab21fc; end: 104ab21ff;  */

undefined8 * FUN_104ab21fc(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_1107c50e0;
  FUN_104ab53bc(param_1 + 1);
  FUN_104ab3708(param_1 + 0x1b,2);
  func_0x000100460318(param_1 + 0x3b);
  param_1[0x43] = &UNK_10e52b660;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  return param_1;
}



/* Entry: 104ab2200; end: 104ab22ab;  */

long FUN_104ab2200(long param_1)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = param_1 + 0x1d8;
  func_0x000100460448(lVar1);
  if (*(long *)(param_1 + 0x230) == 0) {
    func_0x000100466b80(lVar1);
    if (*(long *)(param_1 + 0x228) != 0) {
      __ZdlPv(*(long *)(param_1 + 0x218) + -8);
    }
    func_0x0001005a5f48(lVar1);
    FUN_104ab382c(param_1 + 0xd8);
    FUN_104ab54f4(param_1 + 8);
    return param_1;
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/event_engine/iomgr_engine/iomgr_engine.cc"
                      ,0x51,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104ab22a0);
  (*pcVar2)();
}



/* Entry: 104ab22ac; end: 104ab22af;  */

long FUN_104ab22ac(long param_1)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = param_1 + 0x1d8;
  func_0x000100460448(lVar1);
  if (*(long *)(param_1 + 0x230) == 0) {
    func_0x000100466b80(lVar1);
    if (*(long *)(param_1 + 0x228) != 0) {
      __ZdlPv(*(long *)(param_1 + 0x218) + -8);
    }
    func_0x0001005a5f48(lVar1);
    FUN_104ab382c(param_1 + 0xd8);
    FUN_104ab54f4(param_1 + 8);
    return param_1;
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/event_engine/iomgr_engine/iomgr_engine.cc"
                      ,0x51,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104ab22a0);
  (*pcVar2)();
}



/* Entry: 104ab22b0; end: 104ab22c3;  */

void FUN_104ab22b0(void)

{
  FUN_104ab2200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104ab22c4; end: 104ab23b3;  */

long FUN_104ab22c4(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_40 = param_2;
  uStack_38 = param_3;
  func_0x000100460448(param_1 + 0x1d8);
  lVar5 = param_1 + 0x218;
  lVar6 = lVar5;
  func_0x000104ab2ad4(lVar5,&lStack_40);
  lVar2 = lStack_40;
  if (lVar6 == 0) {
    lVar6 = 0;
    goto LAB_104ab2374;
  }
  lVar6 = param_1 + 8;
  func_0x000104ab53c8(lVar6,lStack_40 + 0x28);
  FUN_104ab23b4(lVar5,&lStack_40);
  uVar1 = (uint)lVar6 ^ 1;
  if (lVar2 == 0) {
    uVar1 = 1;
  }
  if ((uVar1 & 1) != 0) goto LAB_104ab2374;
  plVar4 = (long *)(lVar2 + 8);
  plVar3 = *(long **)(lVar2 + 0x20);
  if (plVar3 == plVar4) {
    lVar5 = 4;
LAB_104ab235c:
    (**(code **)(*plVar4 + lVar5 * 8))();
  }
  else if (plVar3 != (long *)0x0) {
    lVar5 = 5;
    plVar4 = plVar3;
    goto LAB_104ab235c;
  }
  __ZdlPv(lVar2);
  lVar6 = 1;
LAB_104ab2374:
  func_0x000100466b80(param_1 + 0x1d8);
  return lVar6;
}



/* Entry: 104ab23b4; end: 104ab243b;  */

void FUN_104ab23b4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104ab29f4();
  if (lVar1 != 0) {
    func_0x00010ae6cb48(param_1,lVar1,0x10);
  }
  return;
}



/* Entry: 104ab243c; end: 104ab252b;  */

undefined1  [16] FUN_104ab243c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 **ppuVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined8 *puStack_a0;
  long lStack_98;
  long alStack_58 [3];
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001004be264(alStack_58,param_3);
  plVar8 = alStack_58;
  FUN_104ab252c(param_1,param_2,plVar8);
  if (plStack_40 == alStack_58) {
    lVar10 = 4;
    plVar5 = alStack_58;
LAB_104ab24b0:
    (**(code **)(*plVar5 + lVar10 * 8))();
  }
  else {
    plVar5 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      lVar10 = 5;
      goto LAB_104ab24b0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = param_1;
    return auVar11;
  }
  ___stack_chk_fail();
  if (plStack_40 == alStack_58) {
    lVar10 = 4;
    plStack_40 = alStack_58;
  }
  else {
    if (plStack_40 == (long *)0x0) goto LAB_104ab2524;
    lVar10 = 5;
  }
  (**(code **)(*plStack_40 + lVar10 * 8))();
LAB_104ab2524:
  __Unwind_Resume();
  ppuVar9 = &puStack_a0;
  plVar6 = plVar5;
  func_0x000104ab20c8();
  puVar7 = (undefined8 *)0x80;
  __Znwm();
  *puVar7 = &PTR_DAT_1107c5178;
  puVar7[4] = 0;
  FUN_104ab2c80(puVar7 + 1,plVar8);
  puVar7[0xd] = plVar5;
  plVar8 = plVar5 + 0x47;
  do {
    lStack_98 = *plVar8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = lStack_98 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puStack_a0 = puVar7;
  func_0x000100460448(plVar5 + 0x3b);
  plVar8 = plVar5 + 0x43;
  FUN_104ab2d10();
  if (((ulong)ppuVar9 & 0xff) != 0) {
    puVar3 = (undefined8 *)(plVar5[0x44] + (long)plVar8 * 0x10);
    puVar3[1] = lStack_98;
    *puVar3 = puStack_a0;
  }
  puVar7[0xf] = lStack_98;
  puVar7[0xe] = puStack_a0;
  FUN_104ab53bc(plVar5 + 1,puVar7 + 5,plVar6,puVar7);
  func_0x000100466b80(plVar5 + 0x3b);
  auVar4._8_8_ = lStack_98;
  auVar4._0_8_ = puStack_a0;
  return auVar4;
}



/* Entry: 104ab252c; end: 104ab261f;  */

undefined1  [16] FUN_104ab252c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  
  puVar6 = (undefined1 *)0xffffffffffffffc0;
  lVar7 = param_1;
  func_0x000104ab20c8();
  puVar8 = (undefined8 *)0x80;
  __Znwm();
  *puVar8 = &PTR_DAT_1107c5178;
  puVar8[4] = 0;
  FUN_104ab2c80(puVar8 + 1,param_3);
  puVar8[0xd] = param_1;
  plVar1 = (long *)(param_1 + 0x238);
  do {
    lVar10 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar10 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  func_0x000100460448(param_1 + 0x1d8);
  lVar9 = param_1 + 0x218;
  FUN_104ab2d10();
  if (((ulong)puVar6 & 0xff) != 0) {
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x220) + lVar9 * 0x10);
    puVar4[1] = lVar10;
    *puVar4 = puVar8;
  }
  puVar8[0xf] = lVar10;
  puVar8[0xe] = puVar8;
  FUN_104ab53bc(param_1 + 8,puVar8 + 5,lVar7,puVar8);
  func_0x000100466b80(param_1 + 0x1d8);
  auVar5._8_8_ = lVar10;
  auVar5._0_8_ = puVar8;
  return auVar5;
}



/* Entry: 104ab2620; end: 104ab2703;  */

undefined1  [16] FUN_104ab2620(undefined8 param_1,undefined ***param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined ***pppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_58 = &PTR_DAT_1107c51c8;
  uStack_50 = param_3;
  pppuStack_40 = &ppuStack_58;
  FUN_104ab252c(param_1,param_2,&ppuStack_58);
  pppuVar3 = param_2;
  if (pppuStack_40 == &ppuStack_58) {
    lVar4 = 4;
    pppuVar1 = &ppuStack_58;
LAB_104ab2688:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else {
    pppuVar1 = pppuStack_40;
    if (pppuStack_40 != (undefined ***)0x0) {
      lVar4 = 5;
      goto LAB_104ab2688;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = param_1;
    return auVar5;
  }
  ___stack_chk_fail();
  if (pppuStack_40 == &ppuStack_58) {
    lVar4 = 4;
    pppuVar2 = &ppuStack_58;
  }
  else {
    if (pppuStack_40 == (undefined ***)0x0) goto LAB_104ab26fc;
    lVar4 = 5;
    pppuVar2 = pppuStack_40;
  }
  (*(code *)(*pppuVar2)[lVar4])();
LAB_104ab26fc:
  __Unwind_Resume();
  pppuVar2 = pppuVar1 + 0x1b;
  func_0x000100460448();
  func_0x000104ab3b10(pppuVar1 + 0x30,pppuVar3);
  if (*(int *)(pppuVar1 + 0x37) == 0) {
    *(int *)((long)pppuVar1 + 0x1b4) = *(int *)((long)pppuVar1 + 0x1b4) + 1;
    __Znwm(0x28);
    pppuVar3 = pppuVar2;
    FUN_104ab3184();
  }
  else {
    func_0x000100466b64(pppuVar1 + 0x23);
  }
  if (pppuVar1[0x38] != pppuVar1[0x39]) {
    FUN_104ab370c();
  }
  func_0x000100466b80(pppuVar2);
  auVar6._8_8_ = pppuVar3;
  auVar6._0_8_ = pppuVar2;
  return auVar6;
}



/* Entry: 104ab2704; end: 104ab270b;  */

void FUN_104ab2704(long param_1,undefined8 param_2)

{
  func_0x000100460448();
  func_0x000104ab3b10(param_1 + 0x180,param_2);
  if (*(int *)(param_1 + 0x1b8) == 0) {
    *(int *)(param_1 + 0x1b4) = *(int *)(param_1 + 0x1b4) + 1;
    __Znwm(0x28);
    FUN_104ab3184();
  }
  else {
    func_0x000100466b64(param_1 + 0x118);
  }
  if (*(long *)(param_1 + 0x1c0) != *(long *)(param_1 + 0x1c8)) {
    FUN_104ab370c();
  }
  func_0x000100466b80(param_1 + 0xd8);
  return;
}



/* Entry: 104ab270c; end: 104ab27df;  */

void FUN_104ab270c(long param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  char *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR_DAT_1107c5248;
  uStack_40 = param_2;
  pppuStack_30 = &ppuStack_48;
  FUN_104ab3830(param_1 + 0xd8,&ppuStack_48);
  if (pppuStack_30 == &ppuStack_48) {
    lVar6 = 4;
    pppuVar1 = &ppuStack_48;
LAB_104ab276c:
    (*(code *)(*pppuVar1)[lVar6])();
  }
  else {
    pppuVar1 = pppuStack_30;
    if (pppuStack_30 != (undefined ***)0x0) {
      lVar6 = 5;
      goto LAB_104ab276c;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (pppuStack_30 == &ppuStack_48) {
    lVar6 = 4;
    pppuVar2 = &ppuStack_48;
LAB_104ab27cc:
    (*(code *)(*pppuVar2)[lVar6])();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar2 = pppuStack_30;
    goto LAB_104ab27cc;
  }
  __Unwind_Resume(pppuVar1);
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/event_engine/iomgr_engine/iomgr_engine.cc"
                      ,0x83,2,"assertion failed: %s");
  _abort();
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/event_engine/iomgr_engine/iomgr_engine.cc"
                      ,0x87,2,"assertion failed: %s");
  _abort();
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/event_engine/iomgr_engine/iomgr_engine.cc"
                      ,0x8b,2,"assertion failed: %s");
  _abort();
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/event_engine/iomgr_engine/iomgr_engine.cc"
                      ,0x92,2,"assertion failed: %s");
  _abort();
  pcVar3 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/event_engine/iomgr_engine/iomgr_engine.cc"
  ;
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/event_engine/iomgr_engine/iomgr_engine.cc"
                      ,0x9b,2,"assertion failed: %s");
  _abort();
  plVar5 = (long *)(pcVar3 + 8);
  plVar4 = *(long **)(pcVar3 + 0x20);
  if (plVar4 == plVar5) {
    lVar6 = 4;
  }
  else {
    if (plVar4 == (long *)0x0) goto LAB_104ab2938;
    lVar6 = 5;
    plVar5 = plVar4;
  }
  (**(code **)(*plVar5 + lVar6 * 8))();
LAB_104ab2938:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(pcVar3);
  return;
}


