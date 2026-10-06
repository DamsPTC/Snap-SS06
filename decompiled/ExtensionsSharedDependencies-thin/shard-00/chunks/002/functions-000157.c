/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 003da454; end: 003da55f;  */

void FUN_003da454(undefined8 *param_1,ulong param_2,ulong param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined **ppuVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = param_3;
  uStack_48 = param_4;
  FUN_003da29c(param_2,&uStack_50);
  if ((param_2 & 1) == 0) {
    func_0x005535fc(&uStack_40,"Unauthorized RPC request rejected.",0x22);
    FUN_0037849c(&uStack_58,&uStack_40);
    ppuVar5 = &PTR___tlv_bootstrap_00b2c390;
    (*(code *)PTR___tlv_bootstrap_00b2c390)();
    puVar6 = (ulong *)*ppuVar5;
    do {
      uVar7 = *puVar6;
      uVar1 = uVar7 + 0x10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar3) {
        *puVar6 = uVar1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar6[2] < uVar1) {
      func_0x003d6048(puVar6,0x10);
    }
    else {
      puVar6 = (ulong *)((long)puVar6 + uVar7 + 0x30);
    }
    *puVar6 = (ulong)&PTR_FUN_009de8c8;
    puVar6[1] = uStack_58;
    *param_1 = puVar6;
    if ((uStack_40 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    plVar4 = *(long **)(param_5 + 0x18);
    uStack_40 = param_3;
    uStack_38 = param_4;
    if (plVar4 == (long *)0x0) {
      FUN_0033e390();
      func_0x0040cf10();
      FUN_0033c494(&uStack_40);
      __Unwind_Resume();
      FUN_003da6dc(plVar4 + 0x3a);
      if (*(char *)((long)plVar4 + 0x1c7) < '\0') {
        __ZdlPv(plVar4[0x36]);
      }
      if (*(char *)((long)plVar4 + 0x11f) < '\0') {
        __ZdlPv(plVar4[0x21]);
      }
      if (plVar4[9] != 0) {
        plVar4[10] = plVar4[9];
        __ZdlPv();
      }
      if (plVar4[6] != 0) {
        plVar4[7] = plVar4[6];
        __ZdlPv();
      }
      FUN_003da5d0(plVar4 + 1);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_0099c620)(plVar4);
      return;
    }
    (**(code **)(*plVar4 + 0x30))(param_1,plVar4,&uStack_40);
  }
  return;
}



/* Entry: 003da560; end: 003da5cf;  */

void FUN_003da560(long param_1)

{
  FUN_003da6dc(param_1 + 0x1d0);
  if (*(char *)(param_1 + 0x1c7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x1b0));
  }
  if (*(char *)(param_1 + 0x11f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x108));
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x48);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x30);
    __ZdlPv();
  }
  FUN_003da5d0(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_1);
  return;
}



/* Entry: 003da5d0; end: 003da5ff;  */

long * FUN_003da5d0(long *param_1)

{
  if (*param_1 != 0) {
    FUN_003da600();
  }
  return param_1;
}



/* Entry: 003da600; end: 003da633;  */

void FUN_003da600(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  do {
    lVar3 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = lVar3 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 + -1 != 0 || param_1 == (long *)0x0) {
    return;
  }
  FUN_003da634();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 003da634; end: 003da6db;  */

long FUN_003da634(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  plVar3 = *(long **)(param_1 + 8);
  if (plVar3 != (long *)0x0) {
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
      FUN_003da634();
      __ZdlPv();
    }
  }
  *(undefined8 *)(param_1 + 8) = 0;
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar4 = 0;
      uVar5 = 0;
      do {
        FUN_003db40c(*(long *)(param_1 + 0x10) + lVar4);
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x18;
      } while (uVar5 < *(ulong *)(param_1 + 0x18));
      lVar4 = *(long *)(param_1 + 0x10);
    }
    FUN_00338cb8(lVar4);
  }
  FUN_003da5d0((undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 003da6dc; end: 003da76f;  */

undefined8 * FUN_003da6dc(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0xffffffff;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x20 == 1) {
      (**(code **)*plVar5)(plVar5);
    }
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return param_1;
}



/* Entry: 003da770; end: 003da7c7;  */

long * FUN_003da770(long *param_1,long *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0x36;
  if (*param_1 == 0) {
    FUN_0055142c(param_1);
  }
  return param_1;
}



/* Entry: 003da7c8; end: 003da913;  */

void FUN_003da7c8(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  param_1[1] = &PTR_FUN_009e0c20;
  param_1[2] = 0;
  param_1[2] = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  param_1[6] = *(undefined8 *)(param_2 + 0x28);
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[3] = uVar2;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  param_1[8] = *(undefined8 *)(param_2 + 0x38);
  param_1[7] = uVar2;
  param_1[9] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  param_1[0xb] = *(undefined8 *)(param_2 + 0x50);
  param_1[10] = uVar2;
  param_1[0xc] = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  uVar3 = *(undefined8 *)(param_2 + 0x68);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  uVar4 = *(undefined8 *)(param_2 + 0x70);
  param_1[0x10] = *(undefined8 *)(param_2 + 0x78);
  param_1[0xf] = uVar4;
  param_1[0xe] = uVar3;
  param_1[0xd] = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0xb8);
  uVar2 = *(undefined8 *)(param_2 + 0xb0);
  uVar5 = *(undefined8 *)(param_2 + 200);
  uVar4 = *(undefined8 *)(param_2 + 0xc0);
  uVar8 = *(undefined8 *)(param_2 + 0x90);
  uVar7 = *(undefined8 *)(param_2 + 0xa8);
  uVar6 = *(undefined8 *)(param_2 + 0xa0);
  param_1[0x14] = *(undefined8 *)(param_2 + 0x98);
  param_1[0x13] = uVar8;
  param_1[0x1a] = uVar5;
  param_1[0x19] = uVar4;
  param_1[0x18] = uVar3;
  param_1[0x17] = uVar2;
  param_1[0x16] = uVar7;
  param_1[0x15] = uVar6;
  uVar5 = *(undefined8 *)(param_2 + 0xe8);
  uVar4 = *(undefined8 *)(param_2 + 0xe0);
  uVar3 = *(undefined8 *)(param_2 + 0xf8);
  uVar2 = *(undefined8 *)(param_2 + 0xf0);
  uVar1 = *(undefined4 *)(param_2 + 0x100);
  uVar6 = *(undefined8 *)(param_2 + 0xd0);
  param_1[0x1c] = *(undefined8 *)(param_2 + 0xd8);
  param_1[0x1b] = uVar6;
  *(undefined4 *)(param_1 + 0x21) = uVar1;
  param_1[0x20] = uVar3;
  param_1[0x1f] = uVar2;
  param_1[0x1e] = uVar5;
  param_1[0x1d] = uVar4;
  uVar2 = *(undefined8 *)(param_2 + 0x80);
  param_1[0x12] = *(undefined8 *)(param_2 + 0x88);
  param_1[0x11] = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x110);
  uVar2 = *(undefined8 *)(param_2 + 0x108);
  param_1[0x24] = *(undefined8 *)(param_2 + 0x118);
  param_1[0x23] = uVar3;
  param_1[0x22] = uVar2;
  *(undefined8 *)(param_2 + 0x110) = 0;
  *(undefined8 *)(param_2 + 0x118) = 0;
  *(undefined8 *)(param_2 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x120);
  uVar2 = *(undefined8 *)(param_2 + 0x128);
  param_1[0x27] = *(undefined8 *)(param_2 + 0x130);
  param_1[0x26] = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x140);
  uVar2 = *(undefined8 *)(param_2 + 0x138);
  uVar5 = *(undefined8 *)(param_2 + 0x150);
  uVar4 = *(undefined8 *)(param_2 + 0x148);
  uVar6 = *(undefined8 *)(param_2 + 0x158);
  uVar8 = *(undefined8 *)(param_2 + 0x170);
  uVar7 = *(undefined8 *)(param_2 + 0x168);
  param_1[0x2d] = *(undefined8 *)(param_2 + 0x160);
  param_1[0x2c] = uVar6;
  param_1[0x2f] = uVar8;
  param_1[0x2e] = uVar7;
  param_1[0x29] = uVar3;
  param_1[0x28] = uVar2;
  param_1[0x2b] = uVar5;
  param_1[0x2a] = uVar4;
  uVar3 = *(undefined8 *)(param_2 + 0x180);
  uVar2 = *(undefined8 *)(param_2 + 0x178);
  uVar5 = *(undefined8 *)(param_2 + 400);
  uVar4 = *(undefined8 *)(param_2 + 0x188);
  uVar7 = *(undefined8 *)(param_2 + 0x1a0);
  uVar6 = *(undefined8 *)(param_2 + 0x198);
  *(undefined4 *)(param_1 + 0x36) = *(undefined4 *)(param_2 + 0x1a8);
  param_1[0x33] = uVar5;
  param_1[0x32] = uVar4;
  param_1[0x35] = uVar7;
  param_1[0x34] = uVar6;
  param_1[0x31] = uVar3;
  param_1[0x30] = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x1b8);
  uVar2 = *(undefined8 *)(param_2 + 0x1b0);
  param_1[0x39] = *(undefined8 *)(param_2 + 0x1c0);
  param_1[0x38] = uVar3;
  param_1[0x37] = uVar2;
  *(undefined8 *)(param_2 + 0x1b8) = 0;
  *(undefined8 *)(param_2 + 0x1c0) = 0;
  *(undefined8 *)(param_2 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x3a) = *(undefined4 *)(param_2 + 0x1c8);
  param_1[0x3b] = 0;
  param_1[0x3b] = *(undefined8 *)(param_2 + 0x1d0);
  *(undefined8 *)(param_2 + 0x1d0) = 0;
  *param_1 = 0;
  return;
}



/* Entry: 003da914; end: 003daa13;  */

void FUN_003da914(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long alStack_68 [3];
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar3 = *(long **)(param_2 + 8);
  FUN_0033f548(alStack_68,param_5);
  (**(code **)(*plVar3 + 8))(param_1,plVar3,param_3,param_4,alStack_68);
  if (plStack_50 == alStack_68) {
    lVar2 = 4;
    plVar3 = alStack_68;
LAB_003da99c:
    (**(code **)(*plVar3 + lVar2 * 8))();
  }
  else {
    plVar3 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      lVar2 = 5;
      goto LAB_003da99c;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (plStack_50 == alStack_68) {
    lVar2 = 4;
    plStack_50 = alStack_68;
  }
  else {
    if (plStack_50 == (long *)0x0) goto LAB_003daa0c;
    lVar2 = 5;
  }
  (**(code **)(*plStack_50 + lVar2 * 8))();
LAB_003daa0c:
  __Unwind_Resume();
  plVar1 = (long *)plVar3[1];
  (**(code **)(*plVar1 + 0x10))();
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003a6a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(plVar3[2] + 0x10))(plVar3 + 2,param_3);
  return;
}



/* Entry: 003daa14; end: 003daa9f;  */

void FUN_003daa14(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x10))();
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003a6a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))((long *)(param_1 + 0x10),param_2);
  return;
}



/* Entry: 003daaa0; end: 003daaa3;  */

undefined8 * FUN_003daaa0(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_009df7c8;
  param_1[1] = &PTR_FUN_009df820;
  if (param_1[0x16] == 0) {
    FUN_003ac6f4(param_1 + 0x14);
    if ((param_1[0x13] & 1) != 0) {
      FUN_0055293c();
    }
    (**(code **)(*(long *)param_1[0xb] + 8))();
    *param_1 = &PTR_FUN_009df6d8;
    param_1[1] = &PTR_FUN_009df730;
    return param_1;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
               ,0x3ba,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3aeb4c);
  (*pcVar1)();
}



/* Entry: 003daaa4; end: 003daab7;  */

void FUN_003daaa4(void)

{
  FUN_003aeaa8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 003daab8; end: 003daabf;  */

void FUN_003daab8(long param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined1 uStack_41;
  undefined1 **ppuStack_40;
  code *pcStack_38;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  lVar4 = *(long *)(param_1 + 0x10);
  plVar6 = (long *)(lVar4 + 0x48);
  do {
    lVar5 = *plVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 == 0) {
    return;
  }
  func_0x00771390();
  pcStack_18 = FUN_0033f680;
  plVar6 = *(long **)(lVar4 + 0x10);
  puVar3 = (undefined8 *)plVar6[7];
  plVar6[7] = 0;
  puStack_20 = &stack0xfffffffffffffff0;
  if (puVar3 != (undefined8 *)0x0) {
    puStack_20 = &stack0xfffffffffffffff0;
    (**(code **)*puVar3)();
  }
  (**(code **)(*plVar6 + 8))(plVar6);
  if (param_3 == 0) {
    return;
  }
  func_0x007713c4();
  pcStack_38 = FUN_0033f6d0;
  ppuStack_40 = &puStack_20;
  FUN_0033f6f8(&uStack_41,plVar6,param_2);
  return;
}



/* Entry: 003daac0; end: 003dab0f;  */

void FUN_003daac0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined1 uStack_31;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  plVar2 = *(long **)(param_1 + 0x10);
  puVar1 = (undefined8 *)plVar2[7];
  plVar2[7] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  (**(code **)(*plVar2 + 8))(plVar2);
  if (param_3 == 0) {
    return;
  }
  func_0x00774ad0();
  pcStack_28 = FUN_003dab10;
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_003dab38(&uStack_31,plVar2,param_2);
  return;
}



/* Entry: 003dab10; end: 003dab37;  */

void FUN_003dab10(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_003dab38(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 003dab38; end: 003dadd3;  */

ulong * FUN_003dab38(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong *puVar5;
  int iVar6;
  undefined8 *puVar7;
  int *piVar8;
  long lVar9;
  ulong uStack_230;
  undefined1 auStack_228 [8];
  long *plStack_220;
  ulong auStack_218 [2];
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  iVar6 = (int)param_3;
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  if (*(int *)(param_4 + 0x14) != 0) {
    func_0x00774b04();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x3dad8c);
    (*pcVar4)();
  }
  FUN_003a1d70(auStack_228,*(undefined8 *)(param_4 + 8));
  FUN_003da064(auStack_218,auStack_228);
  if (plStack_220 != (long *)0x0) {
    plVar1 = plStack_220 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_220 + 0x10))(plStack_220);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_220);
    }
  }
  puVar7 = *(undefined8 **)(param_3 + 8);
  if (auStack_218[0] == 0) {
    *puVar7 = &PTR_FUN_009e0c20;
    puVar7[1] = 0;
    puVar7[1] = uStack_208;
    uStack_208 = 0;
    puVar7[3] = uStack_1f8;
    puVar7[2] = uStack_200;
    puVar7[5] = uStack_1e8;
    puVar7[4] = uStack_1f0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[6] = 0;
    puVar7[7] = uStack_1d8;
    puVar7[6] = uStack_1e0;
    puVar7[8] = uStack_1d0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1e0 = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[9] = 0;
    puVar7[10] = uStack_1c0;
    puVar7[9] = uStack_1c8;
    puVar7[0xb] = uStack_1b8;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1c8 = 0;
    puVar7[0xd] = uStack_1a8;
    puVar7[0xc] = uStack_1b0;
    puVar7[0xf] = uStack_198;
    puVar7[0xe] = uStack_1a0;
    puVar7[0x11] = uStack_188;
    puVar7[0x10] = uStack_190;
    puVar7[0x17] = uStack_158;
    puVar7[0x16] = uStack_160;
    puVar7[0x19] = uStack_148;
    puVar7[0x18] = uStack_150;
    puVar7[0x13] = uStack_178;
    puVar7[0x12] = uStack_180;
    puVar7[0x15] = uStack_168;
    puVar7[0x14] = uStack_170;
    *(undefined4 *)(puVar7 + 0x20) = uStack_110;
    puVar7[0x1d] = uStack_128;
    puVar7[0x1c] = uStack_130;
    puVar7[0x1f] = uStack_118;
    puVar7[0x1e] = uStack_120;
    puVar7[0x1b] = uStack_138;
    puVar7[0x1a] = uStack_140;
    puVar7[0x23] = uStack_f8;
    puVar7[0x22] = uStack_100;
    puVar7[0x21] = uStack_108;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_108 = 0;
    *(undefined4 *)(puVar7 + 0x24) = uStack_f0;
    *(undefined4 *)(puVar7 + 0x35) = uStack_68;
    puVar7[0x32] = uStack_80;
    puVar7[0x31] = uStack_88;
    puVar7[0x34] = uStack_70;
    puVar7[0x33] = uStack_78;
    puVar7[0x30] = uStack_90;
    puVar7[0x2f] = uStack_98;
    puVar7[0x2c] = uStack_b0;
    puVar7[0x2b] = uStack_b8;
    puVar7[0x2e] = uStack_a0;
    puVar7[0x2d] = uStack_a8;
    puVar7[0x28] = uStack_d0;
    puVar7[0x27] = uStack_d8;
    puVar7[0x2a] = uStack_c0;
    puVar7[0x29] = uStack_c8;
    puVar7[0x26] = uStack_e0;
    puVar7[0x25] = uStack_e8;
    puVar7[0x38] = uStack_50;
    puVar7[0x37] = uStack_58;
    puVar7[0x36] = uStack_60;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    *(undefined4 *)(puVar7 + 0x39) = uStack_48;
    puVar7[0x3a] = 0;
    puVar7[0x3a] = uStack_40;
    uStack_40 = 0;
    *param_1 = 0;
  }
  else {
    *puVar7 = &PTR_FUN_009db778;
    uStack_230 = auStack_218[0];
    if ((auStack_218[0] & 1) != 0) {
      piVar8 = (int *)(auStack_218[0] - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = *piVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_003fbec4(param_1,&uStack_230);
    if ((uStack_230 & 1) != 0) {
      FUN_0055293c();
    }
  }
  puVar5 = auStack_218;
  FUN_003dadd4();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return puVar5;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    func_0x0040cf10();
    FUN_0033c494(&uStack_230);
    FUN_003dadd4(auStack_218);
  }
  __Unwind_Resume();
  if (*puVar5 == 0) {
    FUN_003da6dc(puVar5 + 0x3b);
    if (*(char *)((long)puVar5 + 0x1cf) < '\0') {
      __ZdlPv(puVar5[0x37]);
    }
    if (*(char *)((long)puVar5 + 0x127) < '\0') {
      __ZdlPv(puVar5[0x22]);
    }
    if (puVar5[10] != 0) {
      puVar5[0xb] = puVar5[10];
      __ZdlPv();
    }
    if (puVar5[7] != 0) {
      puVar5[8] = puVar5[7];
      __ZdlPv();
    }
    FUN_003da5d0(puVar5 + 2);
  }
  else if ((*puVar5 & 1) != 0) {
    FUN_0055293c();
  }
  return puVar5;
}



/* Entry: 003dadd4; end: 003dae5b;  */

ulong * FUN_003dadd4(ulong *param_1)

{
  if (*param_1 == 0) {
    FUN_003da6dc(param_1 + 0x3b);
    if (*(char *)((long)param_1 + 0x1cf) < '\0') {
      __ZdlPv(param_1[0x37]);
    }
    if (*(char *)((long)param_1 + 0x127) < '\0') {
      __ZdlPv(param_1[0x22]);
    }
    if (param_1[10] != 0) {
      param_1[0xb] = param_1[10];
      __ZdlPv();
    }
    if (param_1[7] != 0) {
      param_1[8] = param_1[7];
      __ZdlPv();
    }
    FUN_003da5d0(param_1 + 2);
  }
  else if ((*param_1 & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 003dae5c; end: 003dae7b;  */

void FUN_003dae5c(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x003dae68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_2 + 8))();
  return;
}



/* Entry: 003dae7c; end: 003daec3;  */

void FUN_003dae7c(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x18))();
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003a6a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x58))((long *)(param_1 + 0x10),param_2);
  return;
}



/* Entry: 003daec4; end: 003daecb;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003daec4(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined7 *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_1d8 [2];
  char cStack_1c1;
  undefined1 auStack_1c0 [56];
  undefined8 uStack_188;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  ulong auStack_138 [2];
  undefined7 *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  code *pcStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  byte abStack_88 [64];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar7 = (byte *)((long)&MACH_HEADER.magic + 2);
  uVar12 = param_2;
  FUN_00338e58();
  if ((int)pbVar7 != 0) {
    pbVar7 = abStack_88;
    _vsnprintf(pbVar7,0x40,param_4,&stack0x00000000);
    if ((int)(uint)pbVar7 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar7;
      if ((uint)pbVar7 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = abStack_88;
      }
      else {
        param_4 = (byte *)(((ulong)pbVar7 & 0xffffffff) + 1);
        FUN_00338c74();
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    uVar12 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    pbVar7 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return pbVar7;
  }
  ___stack_chk_fail();
  uStack_a8 = 2;
  pcStack_98 = FUN_00339178;
  lStack_d8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = 1;
  pbStack_d0 = unaff_x24;
  pbStack_c8 = unaff_x23;
  pbStack_c0 = param_4;
  uStack_b8 = param_1;
  uStack_b0 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_0033a598();
  lVar14 = *(long *)pbVar7;
  lVar2 = lVar14;
  uStack_188 = uVar1;
  _strrchr(lVar14,0x2f);
  if (lVar2 != 0) {
    lVar14 = lVar2 + 1;
  }
  puVar3 = &uStack_188;
  _localtime_r(puVar3,auStack_1c0);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_178 = 0x656d69746c6163;
    uStack_171 = 0;
    uStack_180 = 0x6c3a726f727265;
    uStack_179 = 0x6f;
  }
  else {
    puVar4 = &uStack_180;
    _strftime(puVar4,0x40,"%m%d %H:%M:%S",auStack_1c0);
    if (puVar4 == (undefined7 *)0x0) {
      uStack_180 = 0x733a726f727265;
      uStack_179 = 0x74;
      uStack_178 = 0x656d69746672;
    }
  }
  uVar5 = (ulong)*(uint *)(pbVar7 + 0xc);
  func_0x00338e1c();
  uVar6 = uVar5;
  _pthread_self();
  auStack_138[1] = 0x560e98;
  puStack_128 = &uStack_180;
  uStack_120 = 0x560e98;
  uStack_118 = uVar12 & 0xffffffff;
  uStack_110 = 0x5606ac;
  pcStack_100 = FUN_00560738;
  uStack_f0 = 0x560e98;
  uStack_e8 = (ulong)*(uint *)(pbVar7 + 8);
  uStack_e0 = 0x5606ac;
  puVar10 = auStack_138;
  auStack_138[0] = uVar5;
  uStack_108 = uVar6;
  lStack_f8 = lVar14;
  FUN_0056189c(apbStack_1d8,"%s%s.%09d %7ld %s:%d]",0x15,puVar10,6);
  uVar9 = *(uint *)(pbVar7 + 0xc);
  func_0x00338e6c();
  if (uVar9 == 0) {
    auStack_138[0] = auStack_138[0] & 0xffffffffffffff00;
    uStack_120 = uStack_120 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_138);
    if ((char)uStack_120 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1c1 < '\0') {
    pbVar7 = apbStack_1d8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_1c1 < '\0') {
    __ZdlPv(apbStack_1d8[0]);
  }
  __Unwind_Resume();
  uVar9 = (uint)puVar10;
  if ((char *)0x3 < pcVar8) {
    uVar12 = (ulong)pcVar8 >> 2;
    pbVar13 = pbVar7;
    do {
      uVar9 = (*(int *)pbVar13 * 0x16a88000 | (uint)(*(int *)pbVar13 * -0x3361d2af) >> 0x11) *
              0x1b873593 ^ (uint)puVar10;
      uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
      puVar10 = (ulong *)(ulong)uVar9;
      uVar12 = uVar12 - 1;
      pbVar13 = pbVar13 + 4;
    } while (uVar12 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar8 & 0xfffffffffffffffc);
  }
  uVar11 = 0;
  uVar12 = (ulong)pcVar8 & 3;
  if (uVar12 != 1) {
    if (uVar12 != 2) {
      if (uVar12 != 3) goto LAB_00339464;
      uVar11 = (uint)pbVar7[2] << 0x10;
    }
    uVar11 = uVar11 | (uint)pbVar7[1] << 8;
  }
  uVar9 = ((uVar11 ^ *pbVar7) * 0x16a88000 | (uVar11 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
          ^ uVar9;
LAB_00339464:
  uVar9 = uVar9 ^ (uint)pcVar8;
  uVar9 = (uVar9 ^ uVar9 >> 0x10) * -0x7a143595;
  uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar9 ^ uVar9 >> 0x10);
}



/* Entry: 003daecc; end: 003daf4f;  */

void FUN_003daecc(ulong *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  
  if (param_2 != 0) {
    plVar1 = (long *)(param_2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    uVar5 = *param_1;
    uVar2 = uVar5 + 0x20;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = uVar2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (param_1[2] < uVar2) {
    func_0x003d6048(param_1,0x20);
  }
  else {
    param_1 = (ulong *)((long)param_1 + uVar5 + 0x30);
  }
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



/* Entry: 003daf50; end: 003daf8b;  */

void FUN_003daf50(undefined8 param_1)

{
  undefined1 auStack_68 [72];
  
  FUN_003413d4(auStack_68);
  FUN_003daf8c(param_1);
  FUN_00341470(auStack_68);
  return;
}



/* Entry: 003daf8c; end: 003db01f;  */

long * FUN_003daf8c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined1 uStack_21;
  
  FUN_003db020(param_1 + 1,&uStack_21,"client_security_context",0);
  if ((param_1[2] != 0) && ((code *)param_1[3] != (code *)0x0)) {
    (*(code *)param_1[3])();
  }
  FUN_003da5d0(param_1 + 1);
  plVar4 = (long *)*param_1;
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
  return param_1;
}



/* Entry: 003db020; end: 003db06b;  */

void FUN_003db020(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
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
      FUN_003da634();
      __ZdlPv();
    }
  }
  *param_1 = param_4;
  return;
}



/* Entry: 003db06c; end: 003db0c3;  */

void FUN_003db06c(long param_1)

{
  undefined1 uStack_21;
  
  FUN_003db020(param_1,&uStack_21,"server_security_context",0);
  if ((*(long *)(param_1 + 8) != 0) && (*(code **)(param_1 + 0x10) != (code *)0x0)) {
    (**(code **)(param_1 + 0x10))();
  }
  FUN_003da5d0(param_1);
  return;
}



/* Entry: 003db0c4; end: 003db10b;  */

void FUN_003db0c4(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  
  do {
    uVar4 = *param_1;
    uVar1 = uVar4 + 0x20;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = uVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (param_1[2] < uVar1) {
    func_0x003d6048(param_1,0x20);
  }
  else {
    param_1 = (ulong *)((long)param_1 + uVar4 + 0x30);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 003db10c; end: 003db10f;  */

void FUN_003db10c(long param_1)

{
  undefined1 uStack_21;
  
  FUN_003db020(param_1,&uStack_21,"server_security_context",0);
  if ((*(long *)(param_1 + 8) != 0) && (*(code **)(param_1 + 0x10) != (code *)0x0)) {
    (**(code **)(param_1 + 0x10))();
  }
  FUN_003da5d0(param_1);
  return;
}



/* Entry: 003db110; end: 003db1a3;  */

bool FUN_003db110(long param_1,long param_2)

{
  long *plVar1;
  long alStack_38 [3];
  
  if ((param_1 == 0) || (alStack_38[0] = param_1, alStack_38[2] = param_2, param_2 == 0)) {
    alStack_38[0] = 0;
    alStack_38[2] = 0;
  }
  alStack_38[1] = 0;
  plVar1 = alStack_38;
  FUN_003db1c4();
  if (plVar1 == (long *)0x0) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/context/security_context.cc"
                 ,0xa0,2,"Property name %s not found in auth context.");
  }
  else {
    *(long *)(param_1 + 0x28) = *plVar1;
  }
  return plVar1 != (long *)0x0;
}



/* Entry: 003db1a4; end: 003db1c3;  */

void FUN_003db1a4(long *param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 != 0)) {
    *param_1 = param_2;
    param_1[1] = 0;
    param_1[2] = param_3;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 003db1c4; end: 003db2ab;  */

long * FUN_003db1c4(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long *extraout_x8;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  plVar1 = (long *)0x0;
  if (param_1 != (long *)0x0) {
    lVar4 = *param_1;
    if (lVar4 == 0) {
LAB_003db268:
      plVar1 = (long *)0x0;
    }
    else {
      uVar5 = param_1[1];
      plVar1 = param_1;
      while( true ) {
        uVar2 = *(ulong *)(lVar4 + 0x18);
        if (uVar5 == uVar2) {
          do {
            lVar4 = *(long *)(lVar4 + 8);
            if (lVar4 == 0) goto LAB_003db268;
            *param_1 = lVar4;
            param_1[1] = 0;
            uVar2 = *(ulong *)(lVar4 + 0x18);
          } while (uVar2 == 0);
          uVar5 = 0;
        }
        plVar3 = (long *)param_1[2];
        if (plVar3 == (long *)0x0) break;
        if (uVar2 <= uVar5) {
          uVar2 = uVar5;
        }
        lVar6 = uVar5 * 0x18;
        while (uVar2 != uVar5) {
          lVar7 = *(long *)(lVar4 + 0x10);
          uVar5 = uVar5 + 1;
          param_1[1] = uVar5;
          if (*(long *)(lVar7 + lVar6) == 0) {
            FUN_00774b60();
            *extraout_x8 = 0;
            extraout_x8[1] = 0;
            extraout_x8[2] = 0;
            if (plVar1 != (long *)0x0) {
              *extraout_x8 = (long)plVar1;
            }
            return plVar1;
          }
          plVar1 = plVar3;
          _strcmp();
          lVar6 = lVar6 + 0x18;
          if ((int)plVar1 == 0) {
            return (long *)(lVar7 + lVar6 + -0x18);
          }
        }
        plVar1 = (long *)0x0;
        if (lVar4 == 0) {
          return (long *)0x0;
        }
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      param_1[1] = uVar5 + 1;
      plVar1 = (long *)(lVar4 + uVar5 * 0x18);
    }
  }
  return plVar1;
}



/* Entry: 003db2ac; end: 003db2bf;  */

void FUN_003db2ac(long *param_1,long param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 003db2c0; end: 003db30f;  */

void FUN_003db2c0(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x20)) {
    uVar1 = lVar2 + 8U;
    if (lVar2 + 8U <= (ulong)(lVar2 * 2)) {
      uVar1 = lVar2 << 1;
    }
    *(ulong *)(param_1 + 0x20) = uVar1;
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    FUN_00338cbc(uVar3,uVar1 * 0x18);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
  }
  return;
}



/* Entry: 003db310; end: 003db39b;  */

void FUN_003db310(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  FUN_003db2c0();
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  puVar4 = (undefined8 *)(lVar1 + lVar2 * 0x18);
  FUN_00339490();
  *puVar4 = param_2;
  lVar3 = param_4 + 1;
  FUN_00338c74();
  plVar5 = puVar4 + 1;
  *plVar5 = lVar3;
  if (param_3 != 0) {
    _memcpy();
    lVar3 = *plVar5;
  }
  *(undefined1 *)(lVar3 + param_4) = 0;
  *(long *)(lVar1 + lVar2 * 0x18 + 0x10) = param_4;
  return;
}



/* Entry: 003db39c; end: 003db39f;  */

void FUN_003db39c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  FUN_003db2c0();
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  puVar4 = (undefined8 *)(lVar1 + lVar2 * 0x18);
  FUN_00339490();
  *puVar4 = param_2;
  lVar3 = param_4 + 1;
  FUN_00338c74();
  plVar5 = puVar4 + 1;
  *plVar5 = lVar3;
  if (param_3 != 0) {
    _memcpy();
    lVar3 = *plVar5;
  }
  *(undefined1 *)(lVar3 + param_4) = 0;
  *(long *)(lVar1 + lVar2 * 0x18 + 0x10) = param_4;
  return;
}



/* Entry: 003db3a0; end: 003db407;  */

void FUN_003db3a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  FUN_003db2c0();
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar1 + 1;
  puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar1 * 0x18);
  FUN_00339490();
  *puVar3 = param_2;
  uVar2 = param_3;
  FUN_00339490();
  puVar3[1] = uVar2;
  _strlen();
  puVar3[2] = param_3;
  return;
}



/* Entry: 003db408; end: 003db40b;  */

void FUN_003db408(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  FUN_003db2c0();
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar1 + 1;
  puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar1 * 0x18);
  FUN_00339490();
  *puVar3 = param_2;
  uVar2 = param_3;
  FUN_00339490();
  puVar3[1] = uVar2;
  _strlen();
  puVar3[2] = param_3;
  return;
}



/* Entry: 003db40c; end: 003db43f;  */

void FUN_003db40c(undefined8 *param_1)

{
  FUN_00338cb8(*param_1);
  FUN_00338cb8(param_1[1]);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 003db440; end: 003db457;  */

void FUN_003db440(undefined4 *param_1,undefined8 param_2)

{
  *param_1 = 2;
  *(char **)(param_1 + 2) = "grpc.auth_context";
  *(undefined8 *)(param_1 + 4) = param_2;
  *(undefined ***)(param_1 + 6) = &PTR_FUN_009e0d60;
  return;
}



/* Entry: 003db458; end: 003db4cb;  */

undefined8 FUN_003db458(int *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 2);
  _strcmp(uVar1,"grpc.auth_context");
  if ((int)uVar1 == 0) {
    if (*param_1 == 2) {
      return *(undefined8 *)(param_1 + 4);
    }
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/context/security_context.cc"
                 ,0x13a,2,"Invalid type %d for arg %s");
  }
  return 0;
}



/* Entry: 003db4cc; end: 003db52b;  */

void FUN_003db4cc(ulong *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if ((param_1 != (ulong *)0x0) && (*param_1 != 0)) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      lVar1 = param_1[1] + lVar2;
      FUN_003db458();
      if (lVar1 != 0) {
        return;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x20;
    } while (uVar3 < *param_1);
  }
  return;
}



/* Entry: 003db52c; end: 003db573;  */

long * FUN_003db52c(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uStack_28;
  
  if (param_1 != (long *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = *param_1 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uStack_28 = 0;
    FUN_003da5d0(&uStack_28);
  }
  return param_1;
}



/* Entry: 003db574; end: 003db5a7;  */

void FUN_003db574(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (param_1 != (long *)0x0) {
    do {
      lVar3 = *param_1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
      FUN_003da634();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_0099c620)();
      return;
    }
  }
  return;
}



/* Entry: 003db5a8; end: 003db5d7;  */

uint FUN_003db5a8(ulong param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 < param_1);
  if (param_1 < param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 003db5d8; end: 003db7a3;  */

void FUN_003db5d8(undefined8 *param_1,long *param_2,undefined **param_3,ulong param_4)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  long *plStack_60;
  ulong uStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  
  plVar1 = param_2 + 1;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = *plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  puVar9 = (undefined8 *)param_2[3];
  puStack_68 = (undefined8 *)param_2[4];
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = *plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  puStack_70 = puVar9;
  plStack_60 = param_2;
  uStack_58 = param_4;
  ppuStack_50 = param_3;
  if (puVar9 != puStack_68) {
    (**(code **)(*(long *)*puVar9 + 0x10))(&ppuStack_48);
    ppuStack_50 = ppuStack_48;
    ppuStack_48 = &PTR_PTR_00afb048;
    (**(code **)(PTR_PTR_00afb048 + 8))(&PTR_PTR_00afb048);
  }
  ppuVar5 = &PTR___tlv_bootstrap_00b2c390;
  (*(code *)PTR___tlv_bootstrap_00b2c390)();
  puVar6 = (ulong *)*ppuVar5;
  do {
    uVar7 = *puVar6;
    uVar2 = uVar7 + 0x30;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar6,0x10);
    if (bVar4) {
      *puVar6 = uVar2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (puVar6[2] < uVar2) {
    func_0x003d6048(puVar6,0x30);
    puVar9 = puStack_70;
  }
  else {
    puVar6 = (ulong *)((long)puVar6 + uVar7 + 0x30);
  }
  *puVar6 = (ulong)&PTR_FUN_009e0e60;
  puVar6[1] = (ulong)puVar9;
  puVar6[2] = (ulong)puStack_68;
  puVar6[4] = uStack_58;
  puVar6[3] = (ulong)plStack_60;
  puVar6[5] = (ulong)ppuStack_50;
  ppuStack_50 = (undefined **)0x0;
  if (puVar9 != puStack_68) {
    ppuStack_50 = &PTR_PTR_00afb048;
  }
  plStack_60 = (long *)0x0;
  *param_1 = puVar6;
  FUN_003db7a4(&puStack_70);
  do {
    lVar8 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar8 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar8 + -1 == 0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  return;
}



/* Entry: 003db7a4; end: 003db813;  */

long * FUN_003db7a4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  if (*param_1 != param_1[1]) {
    (**(code **)(*(long *)param_1[4] + 8))();
  }
  plVar4 = (long *)param_1[2];
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
  return param_1;
}



/* Entry: 003db814; end: 003db8af;  */

void FUN_003db814(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if ((bRam0000000000b5ebe0 & 1) == 0) {
    iVar1 = 0xb5ebe0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_003ba418(0xb5ebd8,"Composite",9);
      ___cxa_guard_release(0xb5ebe0);
    }
  }
  if ((char)*(byte *)((long)puRam0000000000b5ebd8 + 0x17) < '\0') {
    puVar2 = (undefined8 *)*puRam0000000000b5ebd8;
    uVar3 = puRam0000000000b5ebd8[1];
  }
  else {
    uVar3 = (ulong)*(byte *)((long)puRam0000000000b5ebd8 + 0x17);
    puVar2 = puRam0000000000b5ebd8;
  }
  *param_1 = puVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 003db8b0; end: 003dbb4f;  */

long ****** FUN_003db8b0(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long **pplVar6;
  code *pcVar7;
  long ******pppppplVar8;
  long ******pppppplVar9;
  long ******pppppplVar10;
  long ****pppplVar11;
  undefined8 ******ppppppuVar12;
  undefined8 ******ppppppuVar13;
  char **ppcVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined8 ****ppppuVar19;
  undefined8 *****pppppuVar20;
  undefined8 *puVar21;
  long lVar22;
  long *****ppppplVar23;
  long *****ppppplVar24;
  long lVar25;
  ulong uVar26;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long *plStack_270;
  undefined8 ****ppppuStack_268;
  long alStack_260 [2];
  long alStack_250 [2];
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  ulong uStack_228;
  undefined8 *puStack_220;
  long lStack_218;
  undefined8 *****pppppuStack_210;
  long *****ppppplStack_208;
  undefined1 ***pppuStack_200;
  code *pcStack_1f8;
  long *****ppppplStack_1e8;
  long *****ppppplStack_1e0;
  long *****ppppplStack_1d8;
  long *****ppppplStack_1d0;
  long *****ppppplStack_1c8;
  undefined8 *puStack_1c0;
  long lStack_1b8;
  undefined8 *****pppppuStack_1b0;
  long *****ppppplStack_1a8;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  long *****ppppplStack_188;
  long *****ppppplStack_180;
  long *****ppppplStack_178;
  long *****ppppplStack_170;
  long *****ppppplStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *****pppppuStack_150;
  long *****ppppplStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 *****pppppuStack_128;
  ulong uStack_120;
  byte bStack_111;
  long ***ppplStack_110;
  long **pplStack_108;
  long ***ppplStack_100;
  char *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 *****pppppuStack_c8;
  long ***ppplStack_c0;
  long ***ppplStack_b8;
  long ****pppplStack_98;
  long ****pppplStack_90;
  long ****pppplStack_88;
  long ****pppplStack_80;
  long ****pppplStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  ppplStack_110 = (long ***)0x0;
  pplStack_108 = (long **)0x0;
  ppplStack_100 = (long ***)0x0;
  puVar21 = *(undefined8 **)(param_2 + 0x18);
  puVar2 = *(undefined8 **)(param_2 + 0x20);
  if (puVar21 != puVar2) {
    unaff_x23 = 0xaaaaaaaaaaaaaaa;
    unaff_x24 = 0xaaaaaaaaaaaaaaab;
    unaff_x25 = 0x555555555555555;
    unaff_x26 = 0x18;
    do {
      (**(code **)(*(long *)*puVar21 + 0x20))(&pppppuStack_c8);
      if (pplStack_108 < ppplStack_100) {
        pplStack_108[2] = (long *)ppplStack_b8;
        pplStack_108[1] = (long *)ppplStack_c0;
        *pplStack_108 = (long *)pppppuStack_c8;
        pplStack_108 = pplStack_108 + 3;
      }
      else {
        lVar22 = (long)pplStack_108 - (long)ppplStack_110 >> 3;
        uVar26 = lVar22 * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar26) {
          FUN_0037b568(&ppplStack_110);
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x3dbaec);
          (*pcVar7)();
        }
        lVar25 = (long)ppplStack_100 - (long)ppplStack_110 >> 3;
        uVar17 = lVar25 * 0x5555555555555556;
        if (uVar17 < uVar26 || uVar17 - uVar26 == 0) {
          uVar17 = uVar26;
        }
        if (0x555555555555554 < (ulong)(lVar25 * -0x5555555555555555)) {
          uVar17 = unaff_x23;
        }
        pppplStack_78 = &ppplStack_100;
        if (uVar17 == 0) {
          ppppplVar23 = (long *****)0x0;
        }
        else {
          ppppplVar23 = (long *****)&ppplStack_100;
          FUN_0037b57c();
        }
        ppppplVar24 = ppppplVar23 + lVar22;
        pppplStack_80 = (long ****)(ppppplVar23 + uVar17 * 3);
        pppplStack_98 = (long ****)ppppplVar23;
        pppplStack_90 = (long ****)ppppplVar24;
        ppppplVar24[2] = (long ****)ppplStack_b8;
        ppppplVar24[1] = (long ****)ppplStack_c0;
        *ppppplVar24 = (long ****)pppppuStack_c8;
        ppplStack_c0 = (long ***)0x0;
        ppplStack_b8 = (long ***)0x0;
        pppppuStack_c8 = (undefined8 *****)0x0;
        pppplStack_88 = (long ****)(ppppplVar24 + 3);
        FUN_0045a5fc(&ppplStack_110,&pppplStack_98);
        pplVar6 = pplStack_108;
        func_0x00427834(&pppplStack_98);
        pplStack_108 = pplVar6;
        if ((long)ppplStack_b8 < 0) {
          __ZdlPv(pppppuStack_c8);
        }
      }
      puVar21 = puVar21 + 1;
    } while (puVar21 != puVar2);
  }
  pppplStack_98 = (long ****)0x8cadfa;
  pppplStack_90 = (long ****)0x19;
  FUN_0037b5c0(&pppppuStack_128,ppplStack_110,pplStack_108,",",1);
  ppplStack_c0 = (long ***)uStack_120;
  pppppuStack_c8 = pppppuStack_128;
  if (-1 < (char)bStack_111) {
    ppplStack_c0 = (long ***)(ulong)bStack_111;
    pppppuStack_c8 = &pppppuStack_128;
  }
  pcStack_f8 = "}";
  uStack_f0 = 1;
  ppppppuVar12 = &pppppuStack_c8;
  ppcVar14 = &pcStack_f8;
  FUN_00575ddc(param_1,&pppplStack_98);
  if ((char)bStack_111 < '\0') {
    __ZdlPv(pppppuStack_128);
  }
  pppplStack_98 = &ppplStack_110;
  pppppplVar8 = (long ******)&pppplStack_98;
  FUN_0037b728();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return pppppplVar8;
  }
  ___stack_chk_fail();
  if ((char)bStack_111 < '\0') {
    __ZdlPv(pppppuStack_128);
  }
  pppppuStack_c8 = (undefined8 *****)&ppplStack_110;
  FUN_0037b728(&pppppuStack_c8);
  pppppplVar9 = pppppplVar8;
  __Unwind_Resume();
  puStack_160 = puVar2;
  puStack_158 = puVar21;
  pppppuStack_150 = &pppppuStack_128;
  ppppplStack_148 = (long *****)pppppplVar8;
  puStack_140 = &stack0xfffffffffffffff0;
  if (((ulong)ppcVar14 & 1) != 0) {
    pcStack_138 = FUN_003dbb50;
    pppppuVar20 = *ppppppuVar12;
    ppppuVar19 = pppppuVar20[3];
    if (pppppuVar20[4] != ppppuVar19) {
      lVar22 = 0;
      uVar26 = 0;
      pppppplVar8 = pppppplVar9 + 3;
      do {
        pppppplVar9 = pppppplVar8;
        FUN_003dbcbc(pppppplVar8,(long)ppppuVar19 + lVar22);
        uVar26 = uVar26 + 1;
        ppppuVar19 = pppppuVar20[3];
        lVar22 = lVar22 + 8;
      } while (uVar26 < (ulong)((long)pppppuVar20[4] - (long)ppppuVar19 >> 3));
    }
    return pppppplVar9;
  }
  pppppplVar8 = pppppplVar9 + 3;
  pcStack_138 = FUN_003dbb50;
  pppppplVar10 = pppppplVar9 + 5;
  ppppplVar23 = pppppplVar9[4];
  if (ppppplVar23 < *pppppplVar10) {
    *ppppplVar23 = (long ****)0x0;
    ppppplVar24 = ppppplVar23 + 1;
    *ppppplVar23 = (long ****)*ppppppuVar12;
    *ppppppuVar12 = (undefined8 *****)0x0;
    pppppplVar9[4] = ppppplVar24;
  }
  else {
    lVar22 = (long)ppppplVar23 - (long)*pppppplVar8 >> 3;
    uVar26 = lVar22 + 1;
    if (uVar26 >> 0x3d != 0) {
      ppppppuVar13 = ppppppuVar12;
      FUN_003dc8b0();
      func_0x003dca20(&ppppplStack_188);
      pppppplVar10 = pppppplVar8;
      __Unwind_Resume();
      pcStack_198 = FUN_003dbcbc;
      pppuStack_200 = &ppuStack_1a0;
      pppppplVar9 = pppppplVar10 + 2;
      ppppplVar23 = pppppplVar10[1];
      if (ppppplVar23 < *pppppplVar9) {
        *ppppplVar23 = (long ****)0x0;
        pppppuVar20 = (undefined8 *****)0x0;
        if (*ppppppuVar13 != (undefined8 *****)0x0) {
          pppppuVar20 = *ppppppuVar13 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppppuVar20,0x10);
            if (bVar5) {
              *pppppuVar20 = (undefined8 ****)((long)*pppppuVar20 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          pppppuVar20 = *ppppppuVar13;
        }
        ppppplVar24 = ppppplVar23 + 1;
        *ppppplVar23 = (long ****)pppppuVar20;
        pppppplVar10[1] = ppppplVar24;
      }
      else {
        lVar25 = (long)ppppplVar23 - (long)*pppppplVar10 >> 3;
        uVar26 = lVar25 + 1;
        puStack_1c0 = puVar2;
        lStack_1b8 = lVar22;
        pppppuStack_1b0 = ppppppuVar12;
        ppppplStack_1a8 = (long *****)pppppplVar8;
        ppuStack_1a0 = &puStack_140;
        if (uVar26 >> 0x3d != 0) {
          ppppppuVar12 = ppppppuVar13;
          FUN_003dc8b0();
          func_0x003dca20(&ppppplStack_1e8);
          pppppplVar8 = pppppplVar10;
          __Unwind_Resume();
          pcStack_1f8 = FUN_003dbdec;
          uStack_240 = unaff_x26;
          uStack_238 = unaff_x25;
          uStack_230 = unaff_x24;
          uStack_228 = unaff_x23;
          puStack_220 = puVar2;
          lStack_218 = lVar25;
          pppppuStack_210 = ppppppuVar13;
          ppppplStack_208 = (long *****)pppppplVar10;
          *(undefined4 *)(pppppplVar8 + 2) = 2;
          pppppplVar9 = pppppplVar8 + 3;
          *pppppplVar9 = (long *****)0x0;
          *pppppplVar8 = (long *****)&PTR_FUN_009e0d88;
          pppppplVar8[1] = (long *****)0x1;
          pppppplVar8[4] = (long *****)0x0;
          pppppplVar8[5] = (long *****)0x0;
          (*(code *)(**ppppppuVar12)[5])(alStack_250);
          FUN_003db814(alStack_260);
          lVar25 = alStack_250[0];
          lVar22 = alStack_260[0];
          (**(code **)(*(long *)*ppcVar14 + 0x28))(alStack_250);
          FUN_003db814(alStack_260);
          if (lVar25 == lVar22) {
            lVar16 = (long)(*ppppppuVar12)[4] - (long)(*ppppppuVar12)[3] >> 3;
          }
          else {
            lVar16 = 1;
          }
          if (alStack_250[0] == alStack_260[0]) {
            lVar18 = *(long *)(*ppcVar14 + 0x20) - *(long *)(*ppcVar14 + 0x18) >> 3;
          }
          else {
            lVar18 = 1;
          }
          FUN_003dc06c(pppppplVar9,lVar18 + lVar16);
          ppppuStack_268 = *ppppppuVar12;
          *ppppppuVar12 = (undefined8 *****)0x0;
          FUN_003dbb50(pppppplVar8,&ppppuStack_268,lVar25 == lVar22);
          if ((undefined8 *****)ppppuStack_268 != (undefined8 *****)0x0) {
            pppppuVar20 = (undefined8 *****)(ppppuStack_268 + 1);
            do {
              ppppuVar19 = *pppppuVar20;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppppuVar20,0x10);
              if (bVar5) {
                *pppppuVar20 = (undefined8 ****)((long)ppppuVar19 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((undefined8 ****)((long)ppppuVar19 + -1) == (undefined8 ****)0x0) {
              (*(code *)(*ppppuStack_268)[1])();
            }
          }
          plStack_270 = (long *)*ppcVar14;
          *ppcVar14 = (char *)0x0;
          FUN_003dbb50(pppppplVar8,&plStack_270,alStack_250[0] == alStack_260[0]);
          if (plStack_270 != (long *)0x0) {
            plVar1 = plStack_270 + 1;
            do {
              lVar22 = *plVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar22 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar22 + -1 == 0) {
              (**(code **)(*plStack_270 + 8))();
            }
          }
          *(undefined4 *)((long)pppppplVar8 + 0x14) = 0;
          ppppplVar23 = pppppplVar8[3];
          if (pppppplVar8[4] != ppppplVar23) {
            uVar26 = 0;
            do {
              iVar3 = *(int *)((long)pppppplVar8 + 0x14);
              pppplVar11 = ppppplVar23[uVar26];
              (*(code *)(*pppplVar11)[3])();
              if (iVar3 < (int)pppplVar11) {
                pppplVar11 = (*pppppplVar9)[uVar26];
                (*(code *)(*pppplVar11)[3])();
                *(int *)((long)pppppplVar8 + 0x14) = (int)pppplVar11;
              }
              uVar26 = uVar26 + 1;
              ppppplVar23 = pppppplVar8[3];
            } while (uVar26 < (ulong)((long)pppppplVar8[4] - (long)ppppplVar23 >> 3));
          }
          return pppppplVar8;
        }
        uVar15 = (long)*pppppplVar9 - (long)*pppppplVar10;
        uVar17 = (long)uVar15 >> 2;
        if (uVar17 <= uVar26) {
          uVar17 = uVar26;
        }
        if (0x7ffffffffffffff7 < uVar15) {
          uVar17 = 0x1fffffffffffffff;
        }
        ppppplStack_1c8 = (long *****)pppppplVar9;
        if (uVar17 == 0) {
          ppppplStack_1e8 = (long *****)0x0;
        }
        else {
          FUN_003dc8c4();
          ppppplStack_1e8 = (long *****)pppppplVar9;
        }
        ppppplStack_1e0 = ppppplStack_1e8 + lVar25;
        ppppplStack_1d0 = ppppplStack_1e8 + uVar17;
        *ppppplStack_1e0 = (long ****)0x0;
        ppppplVar23 = (long *****)0x0;
        if (*ppppppuVar13 != (undefined8 *****)0x0) {
          pppppuVar20 = *ppppppuVar13 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppppuVar20,0x10);
            if (bVar5) {
              *pppppuVar20 = (undefined8 ****)((long)*pppppuVar20 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          ppppplVar23 = *ppppppuVar13;
        }
        ppppplStack_1d8 = ppppplStack_1e0 + 1;
        *ppppplStack_1e0 = (long ****)ppppplVar23;
        FUN_003dc83c(pppppplVar10,&ppppplStack_1e8);
        ppppplVar24 = pppppplVar10[1];
        pppppplVar9 = &ppppplStack_1e8;
        func_0x003dca20(pppppplVar9);
      }
      pppppplVar10[1] = ppppplVar24;
      return pppppplVar9;
    }
    uVar15 = (long)*pppppplVar10 - (long)*pppppplVar8;
    uVar17 = (long)uVar15 >> 2;
    if (uVar17 <= uVar26) {
      uVar17 = uVar26;
    }
    if (0x7ffffffffffffff7 < uVar15) {
      uVar17 = 0x1fffffffffffffff;
    }
    ppppplStack_168 = (long *****)pppppplVar10;
    if (uVar17 == 0) {
      ppppplStack_188 = (long *****)0x0;
    }
    else {
      FUN_003dc8c4();
      ppppplStack_188 = (long *****)pppppplVar10;
    }
    ppppplStack_180 = ppppplStack_188 + lVar22;
    ppppplStack_170 = ppppplStack_188 + uVar17;
    *ppppplStack_180 = (long ****)0x0;
    ppppplStack_178 = ppppplStack_180 + 1;
    *ppppplStack_180 = (long ****)*ppppppuVar12;
    *ppppppuVar12 = (undefined8 *****)0x0;
    FUN_003dc83c(pppppplVar8,&ppppplStack_188);
    ppppplVar24 = pppppplVar9[4];
    pppppplVar10 = &ppppplStack_188;
    func_0x003dca20(pppppplVar10);
  }
  pppppplVar9[4] = ppppplVar24;
  return pppppplVar10;
}



/* Entry: 003dbb50; end: 003dbbbb;  */

long ****** FUN_003dbb50(long ******param_1,long *param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long ******pppppplVar5;
  long ******pppppplVar6;
  ulong uVar7;
  long ****pppplVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *****ppppplVar13;
  long lVar14;
  long *****ppppplVar15;
  ulong uVar16;
  long *plStack_140;
  long *plStack_138;
  long alStack_130 [2];
  long alStack_120 [2];
  long *****ppppplStack_b8;
  long *****ppppplStack_b0;
  long *****ppppplStack_a8;
  long *****ppppplStack_a0;
  long *****ppppplStack_98;
  long *****ppppplStack_58;
  long *****ppppplStack_50;
  long *****ppppplStack_48;
  long *****ppppplStack_40;
  long *****ppppplStack_38;
  
  if (((ulong)param_3 & 1) != 0) {
    lVar11 = *param_2;
    lVar14 = *(long *)(lVar11 + 0x18);
    if (*(long *)(lVar11 + 0x20) != lVar14) {
      lVar12 = 0;
      uVar16 = 0;
      pppppplVar5 = param_1 + 3;
      do {
        param_1 = pppppplVar5;
        FUN_003dbcbc(pppppplVar5,lVar14 + lVar12);
        uVar16 = uVar16 + 1;
        lVar14 = *(long *)(lVar11 + 0x18);
        lVar12 = lVar12 + 8;
      } while (uVar16 < (ulong)(*(long *)(lVar11 + 0x20) - lVar14 >> 3));
    }
    return param_1;
  }
  pppppplVar5 = param_1 + 3;
  pppppplVar6 = param_1 + 5;
  ppppplVar13 = param_1[4];
  if (ppppplVar13 < *pppppplVar6) {
    *ppppplVar13 = (long ****)0x0;
    ppppplVar15 = ppppplVar13 + 1;
    *ppppplVar13 = (long ****)*param_2;
    *param_2 = 0;
    param_1[4] = ppppplVar15;
  }
  else {
    lVar14 = (long)ppppplVar13 - (long)*pppppplVar5 >> 3;
    uVar16 = lVar14 + 1;
    if (uVar16 >> 0x3d != 0) {
      FUN_003dc8b0();
      func_0x003dca20(&ppppplStack_58);
      __Unwind_Resume();
      pppppplVar6 = pppppplVar5 + 2;
      ppppplVar13 = pppppplVar5[1];
      if (ppppplVar13 < *pppppplVar6) {
        *ppppplVar13 = (long ****)0x0;
        pppplVar8 = (long ****)0x0;
        if (*param_2 != 0) {
          plVar1 = (long *)(*param_2 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          pppplVar8 = (long ****)*param_2;
        }
        ppppplVar15 = ppppplVar13 + 1;
        *ppppplVar13 = pppplVar8;
        pppppplVar5[1] = ppppplVar15;
      }
      else {
        lVar14 = (long)ppppplVar13 - (long)*pppppplVar5 >> 3;
        uVar16 = lVar14 + 1;
        if (uVar16 >> 0x3d != 0) {
          FUN_003dc8b0();
          func_0x003dca20(&ppppplStack_b8);
          __Unwind_Resume();
          *(undefined4 *)(pppppplVar5 + 2) = 2;
          pppppplVar6 = pppppplVar5 + 3;
          *pppppplVar6 = (long *****)0x0;
          *pppppplVar5 = (long *****)&PTR_FUN_009e0d88;
          pppppplVar5[1] = (long *****)0x1;
          pppppplVar5[4] = (long *****)0x0;
          pppppplVar5[5] = (long *****)0x0;
          (**(code **)(*(long *)*param_2 + 0x28))(alStack_120);
          FUN_003db814(alStack_130);
          lVar11 = alStack_120[0];
          lVar14 = alStack_130[0];
          (**(code **)(*(long *)*param_3 + 0x28))(alStack_120);
          FUN_003db814(alStack_130);
          if (lVar11 == lVar14) {
            lVar12 = *(long *)(*param_2 + 0x20) - *(long *)(*param_2 + 0x18) >> 3;
          }
          else {
            lVar12 = 1;
          }
          if (alStack_120[0] == alStack_130[0]) {
            lVar10 = *(long *)(*param_3 + 0x20) - *(long *)(*param_3 + 0x18) >> 3;
          }
          else {
            lVar10 = 1;
          }
          FUN_003dc06c(pppppplVar6,lVar10 + lVar12);
          plStack_138 = (long *)*param_2;
          *param_2 = 0;
          FUN_003dbb50(pppppplVar5,&plStack_138,lVar11 == lVar14);
          if (plStack_138 != (long *)0x0) {
            plVar1 = plStack_138 + 1;
            do {
              lVar14 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar14 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar14 + -1 == 0) {
              (**(code **)(*plStack_138 + 8))();
            }
          }
          plStack_140 = (long *)*param_3;
          *param_3 = 0;
          FUN_003dbb50(pppppplVar5,&plStack_140,alStack_120[0] == alStack_130[0]);
          if (plStack_140 != (long *)0x0) {
            plVar1 = plStack_140 + 1;
            do {
              lVar14 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar14 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar14 + -1 == 0) {
              (**(code **)(*plStack_140 + 8))();
            }
          }
          *(undefined4 *)((long)pppppplVar5 + 0x14) = 0;
          ppppplVar13 = pppppplVar5[3];
          if (pppppplVar5[4] != ppppplVar13) {
            uVar16 = 0;
            do {
              iVar2 = *(int *)((long)pppppplVar5 + 0x14);
              pppplVar8 = ppppplVar13[uVar16];
              (*(code *)(*pppplVar8)[3])();
              if (iVar2 < (int)pppplVar8) {
                pppplVar8 = (*pppppplVar6)[uVar16];
                (*(code *)(*pppplVar8)[3])();
                *(int *)((long)pppppplVar5 + 0x14) = (int)pppplVar8;
              }
              uVar16 = uVar16 + 1;
              ppppplVar13 = pppppplVar5[3];
            } while (uVar16 < (ulong)((long)pppppplVar5[4] - (long)ppppplVar13 >> 3));
          }
          return pppppplVar5;
        }
        uVar7 = (long)*pppppplVar6 - (long)*pppppplVar5;
        uVar9 = (long)uVar7 >> 2;
        if (uVar9 <= uVar16) {
          uVar9 = uVar16;
        }
        if (0x7ffffffffffffff7 < uVar7) {
          uVar9 = 0x1fffffffffffffff;
        }
        ppppplStack_98 = (long *****)pppppplVar6;
        if (uVar9 == 0) {
          ppppplStack_b8 = (long *****)0x0;
        }
        else {
          FUN_003dc8c4();
          ppppplStack_b8 = (long *****)pppppplVar6;
        }
        ppppplStack_b0 = ppppplStack_b8 + lVar14;
        ppppplStack_a0 = ppppplStack_b8 + uVar9;
        *ppppplStack_b0 = (long ****)0x0;
        ppppplVar13 = (long *****)0x0;
        if (*param_2 != 0) {
          plVar1 = (long *)(*param_2 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          ppppplVar13 = (long *****)*param_2;
        }
        ppppplStack_a8 = ppppplStack_b0 + 1;
        *ppppplStack_b0 = (long ****)ppppplVar13;
        FUN_003dc83c(pppppplVar5,&ppppplStack_b8);
        ppppplVar15 = pppppplVar5[1];
        pppppplVar6 = &ppppplStack_b8;
        func_0x003dca20(pppppplVar6);
      }
      pppppplVar5[1] = ppppplVar15;
      return pppppplVar6;
    }
    uVar7 = (long)*pppppplVar6 - (long)*pppppplVar5;
    uVar9 = (long)uVar7 >> 2;
    if (uVar9 <= uVar16) {
      uVar9 = uVar16;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar9 = 0x1fffffffffffffff;
    }
    ppppplStack_38 = (long *****)pppppplVar6;
    if (uVar9 == 0) {
      ppppplStack_58 = (long *****)0x0;
    }
    else {
      FUN_003dc8c4();
      ppppplStack_58 = (long *****)pppppplVar6;
    }
    ppppplStack_50 = ppppplStack_58 + lVar14;
    ppppplStack_40 = ppppplStack_58 + uVar9;
    *ppppplStack_50 = (long ****)0x0;
    ppppplStack_48 = ppppplStack_50 + 1;
    *ppppplStack_50 = (long ****)*param_2;
    *param_2 = 0;
    FUN_003dc83c(pppppplVar5,&ppppplStack_58);
    ppppplVar15 = param_1[4];
    pppppplVar6 = &ppppplStack_58;
    func_0x003dca20(pppppplVar6);
  }
  param_1[4] = ppppplVar15;
  return pppppplVar6;
}



/* Entry: 003dbbbc; end: 003dbcbb;  */

long ****** FUN_003dbbbc(long ******param_1,long *param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long ******pppppplVar6;
  ulong uVar7;
  long ****pppplVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *****ppppplVar12;
  long lVar13;
  long *****ppppplVar14;
  ulong uVar15;
  long *plStack_140;
  long *plStack_138;
  long alStack_130 [2];
  long alStack_120 [2];
  long *****ppppplStack_b8;
  long *****ppppplStack_b0;
  long *****ppppplStack_a8;
  long *****ppppplStack_a0;
  long *****ppppplStack_98;
  long *****ppppplStack_58;
  long *****ppppplStack_50;
  long *****ppppplStack_48;
  long *****ppppplStack_40;
  long *****ppppplStack_38;
  
  pppppplVar6 = param_1 + 2;
  ppppplVar12 = param_1[1];
  if (ppppplVar12 < *pppppplVar6) {
    *ppppplVar12 = (long ****)0x0;
    ppppplVar14 = ppppplVar12 + 1;
    *ppppplVar12 = (long ****)*param_2;
    *param_2 = 0;
    param_1[1] = ppppplVar14;
  }
  else {
    lVar13 = (long)ppppplVar12 - (long)*param_1 >> 3;
    uVar15 = lVar13 + 1;
    if (uVar15 >> 0x3d != 0) {
      FUN_003dc8b0();
      func_0x003dca20(&ppppplStack_58);
      __Unwind_Resume();
      pppppplVar6 = param_1 + 2;
      ppppplVar12 = param_1[1];
      if (ppppplVar12 < *pppppplVar6) {
        *ppppplVar12 = (long ****)0x0;
        pppplVar8 = (long ****)0x0;
        if (*param_2 != 0) {
          plVar1 = (long *)(*param_2 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          pppplVar8 = (long ****)*param_2;
        }
        ppppplVar14 = ppppplVar12 + 1;
        *ppppplVar12 = pppplVar8;
        param_1[1] = ppppplVar14;
      }
      else {
        lVar13 = (long)ppppplVar12 - (long)*param_1 >> 3;
        uVar15 = lVar13 + 1;
        if (uVar15 >> 0x3d != 0) {
          FUN_003dc8b0();
          func_0x003dca20(&ppppplStack_b8);
          __Unwind_Resume();
          *(undefined4 *)(param_1 + 2) = 2;
          pppppplVar6 = param_1 + 3;
          *pppppplVar6 = (long *****)0x0;
          *param_1 = (long *****)&PTR_FUN_009e0d88;
          param_1[1] = (long *****)0x1;
          param_1[4] = (long *****)0x0;
          param_1[5] = (long *****)0x0;
          (**(code **)(*(long *)*param_2 + 0x28))(alStack_120);
          FUN_003db814(alStack_130);
          lVar5 = alStack_120[0];
          lVar13 = alStack_130[0];
          (**(code **)(*(long *)*param_3 + 0x28))(alStack_120);
          FUN_003db814(alStack_130);
          if (lVar5 == lVar13) {
            lVar9 = *(long *)(*param_2 + 0x20) - *(long *)(*param_2 + 0x18) >> 3;
          }
          else {
            lVar9 = 1;
          }
          if (alStack_120[0] == alStack_130[0]) {
            lVar11 = *(long *)(*param_3 + 0x20) - *(long *)(*param_3 + 0x18) >> 3;
          }
          else {
            lVar11 = 1;
          }
          FUN_003dc06c(pppppplVar6,lVar11 + lVar9);
          plStack_138 = (long *)*param_2;
          *param_2 = 0;
          FUN_003dbb50(param_1,&plStack_138,lVar5 == lVar13);
          if (plStack_138 != (long *)0x0) {
            plVar1 = plStack_138 + 1;
            do {
              lVar13 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar13 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar13 + -1 == 0) {
              (**(code **)(*plStack_138 + 8))();
            }
          }
          plStack_140 = (long *)*param_3;
          *param_3 = 0;
          FUN_003dbb50(param_1,&plStack_140,alStack_120[0] == alStack_130[0]);
          if (plStack_140 != (long *)0x0) {
            plVar1 = plStack_140 + 1;
            do {
              lVar13 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar13 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar13 + -1 == 0) {
              (**(code **)(*plStack_140 + 8))();
            }
          }
          *(undefined4 *)((long)param_1 + 0x14) = 0;
          ppppplVar12 = param_1[3];
          if (param_1[4] != ppppplVar12) {
            uVar15 = 0;
            do {
              iVar2 = *(int *)((long)param_1 + 0x14);
              pppplVar8 = ppppplVar12[uVar15];
              (*(code *)(*pppplVar8)[3])();
              if (iVar2 < (int)pppplVar8) {
                pppplVar8 = (*pppppplVar6)[uVar15];
                (*(code *)(*pppplVar8)[3])();
                *(int *)((long)param_1 + 0x14) = (int)pppplVar8;
              }
              uVar15 = uVar15 + 1;
              ppppplVar12 = param_1[3];
            } while (uVar15 < (ulong)((long)param_1[4] - (long)ppppplVar12 >> 3));
          }
          return param_1;
        }
        uVar7 = (long)*pppppplVar6 - (long)*param_1;
        uVar10 = (long)uVar7 >> 2;
        if (uVar10 <= uVar15) {
          uVar10 = uVar15;
        }
        if (0x7ffffffffffffff7 < uVar7) {
          uVar10 = 0x1fffffffffffffff;
        }
        ppppplStack_98 = (long *****)pppppplVar6;
        if (uVar10 == 0) {
          ppppplStack_b8 = (long *****)0x0;
        }
        else {
          FUN_003dc8c4();
          ppppplStack_b8 = (long *****)pppppplVar6;
        }
        ppppplStack_b0 = ppppplStack_b8 + lVar13;
        ppppplStack_a0 = ppppplStack_b8 + uVar10;
        *ppppplStack_b0 = (long ****)0x0;
        ppppplVar12 = (long *****)0x0;
        if (*param_2 != 0) {
          plVar1 = (long *)(*param_2 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          ppppplVar12 = (long *****)*param_2;
        }
        ppppplStack_a8 = ppppplStack_b0 + 1;
        *ppppplStack_b0 = (long ****)ppppplVar12;
        FUN_003dc83c(param_1,&ppppplStack_b8);
        ppppplVar14 = param_1[1];
        pppppplVar6 = &ppppplStack_b8;
        func_0x003dca20(pppppplVar6);
      }
      param_1[1] = ppppplVar14;
      return pppppplVar6;
    }
    uVar7 = (long)*pppppplVar6 - (long)*param_1;
    uVar10 = (long)uVar7 >> 2;
    if (uVar10 <= uVar15) {
      uVar10 = uVar15;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar10 = 0x1fffffffffffffff;
    }
    ppppplStack_38 = (long *****)pppppplVar6;
    if (uVar10 == 0) {
      ppppplStack_58 = (long *****)0x0;
    }
    else {
      FUN_003dc8c4();
      ppppplStack_58 = (long *****)pppppplVar6;
    }
    ppppplStack_50 = ppppplStack_58 + lVar13;
    ppppplStack_40 = ppppplStack_58 + uVar10;
    *ppppplStack_50 = (long ****)0x0;
    ppppplStack_48 = ppppplStack_50 + 1;
    *ppppplStack_50 = (long ****)*param_2;
    *param_2 = 0;
    FUN_003dc83c(param_1,&ppppplStack_58);
    ppppplVar14 = param_1[1];
    pppppplVar6 = &ppppplStack_58;
    func_0x003dca20(pppppplVar6);
  }
  param_1[1] = ppppplVar14;
  return pppppplVar6;
}



/* Entry: 003dbcbc; end: 003dbdeb;  */

long ****** FUN_003dbcbc(long ******param_1,long *param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long ******pppppplVar6;
  long ****pppplVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *****ppppplVar12;
  long lVar13;
  long *****ppppplVar14;
  ulong uVar15;
  long *plStack_e0;
  long *plStack_d8;
  long alStack_d0 [2];
  long alStack_c0 [2];
  long *****ppppplStack_58;
  long *****ppppplStack_50;
  long *****ppppplStack_48;
  long *****ppppplStack_40;
  long *****ppppplStack_38;
  
  pppppplVar6 = param_1 + 2;
  ppppplVar12 = param_1[1];
  if (ppppplVar12 < *pppppplVar6) {
    *ppppplVar12 = (long ****)0x0;
    pppplVar7 = (long ****)0x0;
    if (*param_2 != 0) {
      plVar1 = (long *)(*param_2 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      pppplVar7 = (long ****)*param_2;
    }
    ppppplVar14 = ppppplVar12 + 1;
    *ppppplVar12 = pppplVar7;
    param_1[1] = ppppplVar14;
  }
  else {
    lVar13 = (long)ppppplVar12 - (long)*param_1 >> 3;
    uVar15 = lVar13 + 1;
    if (uVar15 >> 0x3d != 0) {
      FUN_003dc8b0();
      func_0x003dca20(&ppppplStack_58);
      __Unwind_Resume();
      *(undefined4 *)(param_1 + 2) = 2;
      pppppplVar6 = param_1 + 3;
      *pppppplVar6 = (long *****)0x0;
      *param_1 = (long *****)&PTR_FUN_009e0d88;
      param_1[1] = (long *****)0x1;
      param_1[4] = (long *****)0x0;
      param_1[5] = (long *****)0x0;
      (**(code **)(*(long *)*param_2 + 0x28))(alStack_c0);
      FUN_003db814(alStack_d0);
      lVar5 = alStack_c0[0];
      lVar13 = alStack_d0[0];
      (**(code **)(*(long *)*param_3 + 0x28))(alStack_c0);
      FUN_003db814(alStack_d0);
      if (lVar5 == lVar13) {
        lVar9 = *(long *)(*param_2 + 0x20) - *(long *)(*param_2 + 0x18) >> 3;
      }
      else {
        lVar9 = 1;
      }
      if (alStack_c0[0] == alStack_d0[0]) {
        lVar11 = *(long *)(*param_3 + 0x20) - *(long *)(*param_3 + 0x18) >> 3;
      }
      else {
        lVar11 = 1;
      }
      FUN_003dc06c(pppppplVar6,lVar11 + lVar9);
      plStack_d8 = (long *)*param_2;
      *param_2 = 0;
      FUN_003dbb50(param_1,&plStack_d8,lVar5 == lVar13);
      if (plStack_d8 != (long *)0x0) {
        plVar1 = plStack_d8 + 1;
        do {
          lVar13 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar13 + -1 == 0) {
          (**(code **)(*plStack_d8 + 8))();
        }
      }
      plStack_e0 = (long *)*param_3;
      *param_3 = 0;
      FUN_003dbb50(param_1,&plStack_e0,alStack_c0[0] == alStack_d0[0]);
      if (plStack_e0 != (long *)0x0) {
        plVar1 = plStack_e0 + 1;
        do {
          lVar13 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar13 + -1 == 0) {
          (**(code **)(*plStack_e0 + 8))();
        }
      }
      *(undefined4 *)((long)param_1 + 0x14) = 0;
      ppppplVar12 = param_1[3];
      if (param_1[4] != ppppplVar12) {
        uVar15 = 0;
        do {
          iVar2 = *(int *)((long)param_1 + 0x14);
          pppplVar7 = ppppplVar12[uVar15];
          (*(code *)(*pppplVar7)[3])();
          if (iVar2 < (int)pppplVar7) {
            pppplVar7 = (*pppppplVar6)[uVar15];
            (*(code *)(*pppplVar7)[3])();
            *(int *)((long)param_1 + 0x14) = (int)pppplVar7;
          }
          uVar15 = uVar15 + 1;
          ppppplVar12 = param_1[3];
        } while (uVar15 < (ulong)((long)param_1[4] - (long)ppppplVar12 >> 3));
      }
      return param_1;
    }
    uVar8 = (long)*pppppplVar6 - (long)*param_1;
    uVar10 = (long)uVar8 >> 2;
    if (uVar10 <= uVar15) {
      uVar10 = uVar15;
    }
    if (0x7ffffffffffffff7 < uVar8) {
      uVar10 = 0x1fffffffffffffff;
    }
    ppppplStack_38 = (long *****)pppppplVar6;
    if (uVar10 == 0) {
      ppppplStack_58 = (long *****)0x0;
    }
    else {
      FUN_003dc8c4();
      ppppplStack_58 = (long *****)pppppplVar6;
    }
    ppppplStack_50 = ppppplStack_58 + lVar13;
    ppppplStack_40 = ppppplStack_58 + uVar10;
    *ppppplStack_50 = (long ****)0x0;
    ppppplVar12 = (long *****)0x0;
    if (*param_2 != 0) {
      plVar1 = (long *)(*param_2 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      ppppplVar12 = (long *****)*param_2;
    }
    ppppplStack_48 = ppppplStack_50 + 1;
    *ppppplStack_50 = (long ****)ppppplVar12;
    FUN_003dc83c(param_1,&ppppplStack_58);
    ppppplVar14 = param_1[1];
    pppppplVar6 = &ppppplStack_58;
    func_0x003dca20(pppppplVar6);
  }
  param_1[1] = ppppplVar14;
  return pppppplVar6;
}



/* Entry: 003dbdec; end: 003dc06b;  */

undefined8 * FUN_003dbdec(undefined8 *param_1,long *param_2,long *param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plStack_80;
  long *plStack_78;
  long alStack_70 [2];
  long alStack_60 [2];
  
  *(undefined4 *)(param_1 + 2) = 2;
  plVar9 = param_1 + 3;
  *plVar9 = 0;
  *param_1 = &PTR_FUN_009e0d88;
  param_1[1] = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  (**(code **)(*(long *)*param_2 + 0x28))(alStack_60);
  FUN_003db814(alStack_70);
  lVar4 = alStack_60[0];
  lVar8 = alStack_70[0];
  (**(code **)(*(long *)*param_3 + 0x28))(alStack_60);
  FUN_003db814(alStack_70);
  if (lVar4 == lVar8) {
    lVar6 = *(long *)(*param_2 + 0x20) - *(long *)(*param_2 + 0x18) >> 3;
  }
  else {
    lVar6 = 1;
  }
  if (alStack_60[0] == alStack_70[0]) {
    lVar7 = *(long *)(*param_3 + 0x20) - *(long *)(*param_3 + 0x18) >> 3;
  }
  else {
    lVar7 = 1;
  }
  FUN_003dc06c(plVar9,lVar7 + lVar6);
  plStack_78 = (long *)*param_2;
  *param_2 = 0;
  FUN_003dbb50(param_1,&plStack_78,lVar4 == lVar8);
  if (plStack_78 != (long *)0x0) {
    plVar5 = plStack_78 + 1;
    do {
      lVar8 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plStack_78 + 8))();
    }
  }
  plStack_80 = (long *)*param_3;
  *param_3 = 0;
  FUN_003dbb50(param_1,&plStack_80,alStack_60[0] == alStack_70[0]);
  if (plStack_80 != (long *)0x0) {
    plVar5 = plStack_80 + 1;
    do {
      lVar8 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plStack_80 + 8))();
    }
  }
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar8 = param_1[3];
  if (param_1[4] != lVar8) {
    uVar10 = 0;
    do {
      iVar1 = *(int *)((long)param_1 + 0x14);
      plVar5 = *(long **)(lVar8 + uVar10 * 8);
      (**(code **)(*plVar5 + 0x18))();
      if (iVar1 < (int)plVar5) {
        plVar5 = *(long **)(*plVar9 + uVar10 * 8);
        (**(code **)(*plVar5 + 0x18))();
        *(int *)((long)param_1 + 0x14) = (int)plVar5;
      }
      uVar10 = uVar10 + 1;
      lVar8 = param_1[3];
    } while (uVar10 < (ulong)(param_1[4] - lVar8 >> 3));
  }
  return param_1;
}



/* Entry: 003dc06c; end: 003dc0fb;  */

long **** FUN_003dc06c(long ****param_1,long ****param_2,long param_3)

{
  long ****pppplVar1;
  char cVar2;
  bool bVar3;
  long ****pppplVar4;
  long ***ppplVar5;
  long ***ppplVar6;
  long ***ppplStack_88;
  long ***ppplStack_80;
  long ***ppplStack_78;
  long ***ppplStack_48;
  long lStack_40;
  long lStack_38;
  long ***ppplStack_30;
  long ***ppplStack_28;
  
  pppplVar4 = param_1 + 2;
  ppplVar5 = *param_1;
  if (param_2 <= (long ****)((long)*pppplVar4 - (long)ppplVar5 >> 3)) {
    return pppplVar4;
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    ppplVar6 = param_1[1];
    ppplStack_28 = (long ***)pppplVar4;
    FUN_003dc8c4();
    lStack_40 = (long)pppplVar4 + ((long)ppplVar6 - (long)ppplVar5);
    ppplStack_30 = (long ***)(pppplVar4 + (long)param_2);
    ppplStack_48 = (long ***)pppplVar4;
    lStack_38 = lStack_40;
    FUN_003dc83c(param_1,&ppplStack_48);
    pppplVar4 = &ppplStack_48;
    func_0x003dca20(pppplVar4);
    return pppplVar4;
  }
  FUN_003dc8b0();
  func_0x003dca20(&ppplStack_48);
  pppplVar4 = param_1;
  __Unwind_Resume();
  if (param_3 == 0) {
    if (pppplVar4 == (long ****)0x0) goto LAB_003dc1b8;
    if (param_2 == (long ****)0x0) goto LAB_003dc1bc;
    pppplVar1 = pppplVar4 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppplVar1,0x10);
      if (bVar3) {
        *pppplVar1 = (long ***)((long)*pppplVar1 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    pppplVar1 = param_2 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppplVar1,0x10);
      if (bVar3) {
        *pppplVar1 = (long ***)((long)*pppplVar1 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    ppplStack_88 = (long ***)param_2;
    ppplStack_80 = (long ***)pppplVar4;
    FUN_003dc200(&ppplStack_78,&ppplStack_80,&ppplStack_88);
    param_1 = (long ****)ppplStack_78;
    ppplStack_78 = (long ***)0x0;
    if ((long ****)ppplStack_88 == (long ****)0x0) goto LAB_003dc180;
    pppplVar4 = (long ****)(ppplStack_88 + 1);
    do {
      ppplVar5 = *pppplVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppplVar4,0x10);
      if (bVar3) {
        *pppplVar4 = (long ***)((long)ppplVar5 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    pppplVar4 = (long ****)ppplStack_88;
    if ((long ***)((long)ppplVar5 + -1) != (long ***)0x0) goto LAB_003dc180;
  }
  else {
    FUN_00774c54();
LAB_003dc1b8:
    func_0x00774ba4();
LAB_003dc1bc:
    func_0x00774bd8();
  }
  (*(code *)(*pppplVar4)[1])();
LAB_003dc180:
  if ((long ****)ppplStack_80 != (long ****)0x0) {
    pppplVar4 = (long ****)(ppplStack_80 + 1);
    do {
      ppplVar5 = *pppplVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppplVar4,0x10);
      if (bVar3) {
        *pppplVar4 = (long ***)((long)ppplVar5 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((long ***)((long)ppplVar5 + -1) == (long ***)0x0) {
      (*(code *)(*ppplStack_80)[1])();
    }
  }
  return param_1;
}



/* Entry: 003dc0fc; end: 003dc1ff;  */

undefined8 FUN_003dc0fc(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 unaff_x19;
  long *plStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  if (param_3 == 0) {
    if (param_1 == (long *)0x0) goto LAB_003dc1b8;
    if (param_2 == (long *)0x0) goto LAB_003dc1bc;
    plVar1 = param_1 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = param_2 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_38 = param_2;
    plStack_30 = param_1;
    FUN_003dc200(&uStack_28,&plStack_30,&plStack_38);
    unaff_x19 = uStack_28;
    uStack_28 = 0;
    if (plStack_38 == (long *)0x0) goto LAB_003dc180;
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
    param_1 = plStack_38;
    if (lVar4 + -1 != 0) goto LAB_003dc180;
  }
  else {
    FUN_00774c54();
LAB_003dc1b8:
    func_0x00774ba4();
LAB_003dc1bc:
    func_0x00774bd8();
  }
  (**(code **)(*param_1 + 8))();
LAB_003dc180:
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
    if (lVar4 + -1 == 0) {
      (**(code **)(*plStack_30 + 8))();
    }
  }
  return unaff_x19;
}



/* Entry: 003dc200; end: 003dc2eb;  */

void FUN_003dc200(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  uVar4 = 0x30;
  __Znwm();
  plVar6 = (long *)*param_2;
  *param_2 = 0;
  plVar5 = (long *)*param_3;
  *param_3 = 0;
  FUN_003dbdec();
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
  if (plVar6 != (long *)0x0) {
    plVar5 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 8))();
    }
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 003dc2ec; end: 003dc377;  */

undefined8 * FUN_003dc2ec(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 3;
  *param_1 = &PTR_FUN_009e0d88;
  func_0x003dcabc(&puStack_28);
  return param_1;
}



/* Entry: 003dc378; end: 003dc39b;  */

undefined4 FUN_003dc378(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 003dc39c; end: 003dc453;  */

void FUN_003dc39c(long *param_1,long param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  long lVar3;
  long lStack_38;
  long lStack_30;
  int iStack_28;
  
  if (*(long *)(param_2 + 8) == *(long *)(param_2 + 0x10)) {
    lStack_30 = *(long *)(param_2 + 0x28);
    *(undefined8 *)(param_2 + 0x28) = 0;
    lStack_38 = 0;
    iStack_28 = 1;
LAB_003dc404:
    lVar3 = 0;
    param_1[1] = lStack_30;
    lStack_30 = 0;
  }
  else {
    FUN_003dc45c(&lStack_38,(long *)(param_2 + 8));
    lVar3 = lStack_38;
    uVar2 = 0;
    if (iStack_28 == 0) goto LAB_003dc41c;
    if (iStack_28 != 1) {
      FUN_0033e178();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x3dc440);
      (*pcVar1)();
    }
    if (lStack_38 == 0) goto LAB_003dc404;
    lStack_38 = 0x36;
  }
  *param_1 = lVar3;
  uVar2 = 1;
LAB_003dc41c:
  *(undefined4 *)(param_1 + 2) = uVar2;
  FUN_003dc7e4(&lStack_38);
  return;
}



/* Entry: 003dc454; end: 003dc45b;  */

long * FUN_003dc454(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 8) != *(long *)(param_1 + 0x10)) {
    (**(code **)(**(long **)(param_1 + 0x28) + 8))();
  }
  plVar4 = *(long **)(param_1 + 0x18);
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
  return (long *)(param_1 + 8);
}



/* Entry: 003dc45c; end: 003dc64f;  */

void FUN_003dc45c(long *param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long alStack_78 [4];
  int iStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_38;
  long lStack_30;
  undefined **ppuStack_28;
  
  (*(code *)**(undefined8 **)param_2[4])(&lStack_50);
  FUN_003dc650(alStack_78 + 2,&lStack_50);
  FUN_003dc7e4(&lStack_50);
  lVar1 = alStack_78[3];
  if (iStack_58 == 1) {
    if (alStack_78[2] == 0) {
      alStack_78[3] = 0;
      alStack_78[0] = 0;
      alStack_78[1] = 0;
      lStack_38 = 0;
      lStack_30 = lVar1;
      if (*param_2 + 8 == param_2[1]) {
        lStack_30 = 0;
        *param_1 = 0;
        param_1[1] = lVar1;
        *(undefined4 *)(param_1 + 2) = 1;
      }
      else {
        *param_2 = *param_2 + 8;
        (**(code **)(*(long *)param_2[4] + 8))();
        lVar1 = lStack_30;
        if (lStack_38 != 0) {
          lStack_50 = lStack_38;
          lStack_38 = 0x36;
          FUN_0055169c(&lStack_50);
          goto LAB_003dc600;
        }
        lStack_30 = 0;
        lStack_50 = 0;
        lStack_48 = 0;
        (**(code **)(**(long **)*param_2 + 0x10))(&ppuStack_28,*(long **)*param_2,lVar1,param_2[3]);
        param_2[4] = (long)ppuStack_28;
        ppuStack_28 = &PTR_PTR_00afb048;
        (**(code **)(PTR_PTR_00afb048 + 8))();
        FUN_003dc7b4(&lStack_50);
        FUN_003dc45c(param_1,param_2);
      }
      plVar3 = &lStack_38;
    }
    else {
      alStack_78[0] = alStack_78[2];
      alStack_78[2] = 0x36;
      FUN_003dc74c(&lStack_50,alStack_78);
      lVar1 = lStack_50;
      if (lStack_50 == 0) {
        param_1[1] = lStack_48;
        lStack_48 = 0;
      }
      else {
        lStack_50 = 0x36;
      }
      *param_1 = lVar1;
      *(undefined4 *)(param_1 + 2) = 1;
      plVar3 = &lStack_50;
    }
    FUN_003dc7b4(plVar3);
    FUN_003dc7b4(alStack_78);
  }
  else {
    if (iStack_58 != 0) {
      FUN_0033e178();
LAB_003dc600:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x3dc604);
      (*pcVar2)();
    }
    FUN_003dc650(param_1,alStack_78 + 2);
  }
  FUN_003dc7e4(alStack_78 + 2);
  return;
}



/* Entry: 003dc650; end: 003dc683;  */

undefined1 * FUN_003dc650(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  FUN_003dc684();
  return param_1;
}



/* Entry: 003dc684; end: 003dc70f;  */

void FUN_003dc684(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    (*(code *)(&PTR_FUN_009e0e88)[*(uint *)(param_1 + 0x10)])(&uStack_31,param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  uVar1 = *(uint *)(param_2 + 0x10);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_DAT_009e0e98)[uVar1])(&uStack_32,param_1,param_2);
    *(uint *)(param_1 + 0x10) = uVar1;
  }
  return;
}



/* Entry: 003dc710; end: 003dc74b;  */

void FUN_003dc710(void)

{
  return;
}



/* Entry: 003dc74c; end: 003dc7b3;  */

ulong * FUN_003dc74c(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  
  uVar3 = *param_2;
  *param_1 = uVar3;
  if ((uVar3 & 1) != 0) {
    piVar4 = (int *)(uVar3 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar3 = *param_1;
  }
  if (uVar3 == 0) {
    FUN_0055142c(param_1);
  }
  return param_1;
}



/* Entry: 003dc7b4; end: 003dc7e3;  */

ulong * FUN_003dc7b4(ulong *param_1)

{
  if ((*param_1 & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 003dc7e4; end: 003dc83b;  */

long FUN_003dc7e4(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    (*(code *)(&PTR_FUN_009e0e88)[*(uint *)(param_1 + 0x10)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return param_1;
}



/* Entry: 003dc83c; end: 003dc8af;  */

void FUN_003dc83c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[1];
  func_0x003dc8f8(param_1 + 2,uVar2,uVar2,*param_1,*param_1,param_2[1],param_2[1]);
  param_2[1] = uVar2;
  uVar1 = *param_1;
  *param_1 = uVar2;
  param_2[1] = uVar1;
  uVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar2;
  uVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 003dc8b0; end: 003dc8c3;  */

undefined1  [16]
FUN_003dc8b0(undefined8 param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
            undefined8 *param_5,undefined8 param_6,undefined8 *param_7)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char *pcStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  
  pcVar1 = "vector";
  FUN_0033b32c();
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  FUN_00349558();
  puStack_88 = &uStack_70;
  puStack_80 = &uStack_60;
  puStack_58 = param_7;
  puVar3 = param_7;
  while (param_3 != param_5) {
    puStack_58 = puStack_58 + -1;
    *puStack_58 = 0;
    param_3 = param_3 + -1;
    *puStack_58 = *param_3;
    *param_3 = 0;
    puVar3 = puVar3 + -1;
  }
  uStack_78 = 1;
  pcStack_90 = pcVar1;
  uStack_70 = param_6;
  puStack_68 = param_7;
  uStack_60 = param_6;
  FUN_003dc988(&pcStack_90);
  auVar5._8_8_ = puVar3;
  auVar5._0_8_ = param_6;
  return auVar5;
}



/* Entry: 003dc8c4; end: 003dc987;  */

undefined1  [16]
FUN_003dc8c4(undefined8 param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
            undefined8 *param_5,undefined8 param_6,undefined8 *param_7)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  FUN_00349558();
  puStack_78 = &uStack_60;
  puStack_70 = &uStack_50;
  puStack_48 = param_7;
  puVar2 = param_7;
  while (param_3 != param_5) {
    puStack_48 = puStack_48 + -1;
    *puStack_48 = 0;
    param_3 = param_3 + -1;
    *puStack_48 = *param_3;
    *param_3 = 0;
    puVar2 = puVar2 + -1;
  }
  uStack_68 = 1;
  uStack_80 = param_1;
  uStack_60 = param_6;
  puStack_58 = param_7;
  uStack_50 = param_6;
  FUN_003dc988(&uStack_80);
  auVar4._8_8_ = puVar2;
  auVar4._0_8_ = param_6;
  return auVar4;
}



/* Entry: 003dc988; end: 003dc9bb;  */

long FUN_003dc988(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\0') {
    FUN_003dc9bc(param_1);
  }
  return param_1;
}



/* Entry: 003dc9bc; end: 003dcafb;  */

void FUN_003dc9bc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar7 = *(long **)(*(long *)(param_1 + 8) + 8);
  for (plVar6 = *(long **)(*(long *)(param_1 + 0x10) + 8); plVar6 != plVar7; plVar6 = plVar6 + 1) {
    plVar4 = (long *)*plVar6;
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
  }
  return;
}



/* Entry: 003dcafc; end: 003dcb5f;  */

void FUN_003dcafc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  plVar2 = (long *)*param_1;
  plVar7 = (long *)param_1[1];
  while (plVar7 != plVar2) {
    plVar7 = plVar7 + -1;
    plVar5 = (long *)*plVar7;
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  param_1[1] = (long)plVar2;
  return;
}



/* Entry: 003dcb60; end: 003dcb73;  */

void FUN_003dcb60(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x003dcb68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 003dcb74; end: 003dcc4b;  */

void FUN_003dcb74(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_68 [72];
  
  FUN_003413d4(auStack_68);
  if (param_1 != (long *)0x0) {
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
    if (lVar4 + -1 == 0) {
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  FUN_00341470(auStack_68);
  return;
}



/* Entry: 003dcc4c; end: 003dccab;  */

void FUN_003dcc4c(ulong *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if ((param_1 != (ulong *)0x0) && (*param_1 != 0)) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      lVar1 = param_1[1] + lVar2;
      func_0x003dcbd8();
      if (lVar1 != 0) {
        return;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x20;
    } while (uVar3 < *param_1);
  }
  return;
}



/* Entry: 003dccac; end: 003dcd1f;  */

undefined8 FUN_003dccac(int *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 2);
  _strcmp(uVar1,"grpc.server_credentials");
  if ((int)uVar1 == 0) {
    if (*param_1 == 2) {
      return *(undefined8 *)(param_1 + 4);
    }
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/credentials/credentials.cc"
                 ,0x8e,2,"Invalid type %d for arg %s");
  }
  return 0;
}



/* Entry: 003dcd20; end: 003dcd7f;  */

void FUN_003dcd20(ulong *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if ((param_1 != (ulong *)0x0) && (*param_1 != 0)) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      lVar1 = param_1[1] + lVar2;
      FUN_003dccac();
      if (lVar1 != 0) {
        return;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x20;
    } while (uVar3 < *param_1);
  }
  return;
}



/* Entry: 003dcd80; end: 003dcea3;  */

void FUN_003dcd80(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_003dcd80(param_1,*param_2);
    FUN_003dcd80(param_1,param_2[1]);
    func_0x003dcdc8(param_2 + 4);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_2);
    return;
  }
  return;
}



/* Entry: 003dcea4; end: 003dcf3f;  */

void FUN_003dcea4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lStack_88;
  int iStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_003dcf40(&lStack_88);
  if (iStack_80 != 2 || lStack_88 != *(long *)(param_2 + 8)) {
    uStack_38 = uStack_70;
    uStack_40 = uStack_78;
    plVar1 = &lStack_88;
    FUN_003dcf80();
    if ((int)plVar1[1] != 2 || *plVar1 != *(long *)(param_2 + 8)) {
      uStack_48 = uStack_70;
      uStack_50 = uStack_78;
    }
  }
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[3] = uStack_48;
  param_1[2] = uStack_50;
  return;
}



/* Entry: 003dcf40; end: 003dcf7f;  */

ulong * FUN_003dcf40(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong *extraout_x8;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uStack_190;
  int iStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 auStack_160 [32];
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar5 = param_2[2];
  param_1[4] = (ulong)param_2;
  param_1[5] = uVar5;
  *(int *)(param_1 + 6) = (int)param_2[3];
  if (*param_2 == 0) {
    uVar5 = param_2[1];
    *(undefined4 *)(param_1 + 1) = 2;
    *param_1 = uVar5;
    return param_2;
  }
  if ((int)param_1[1] == 1) {
    *(undefined4 *)(param_1 + 1) = 2;
  }
  else {
    lVar8 = *(long *)param_1[4];
    uVar5 = ((long *)param_1[4])[1];
    uVar4 = param_1[6];
    *(int *)(param_1 + 6) = (int)uVar4 + 1;
    if ((int)uVar4 == *(int *)((long)param_1 + 0x2c)) {
      lVar3 = 0;
      puVar2 = (ulong *)(lVar8 + uVar5);
    }
    else {
      puVar2 = param_1 + 5;
      lVar3 = lVar8;
      FUN_00576578(puVar2,lVar8,uVar5,*param_1);
    }
    if ((ulong *)(lVar8 + uVar5) == puVar2) {
      *(undefined4 *)(param_1 + 1) = 1;
    }
    uVar4 = *param_1;
    if (uVar5 < uVar4) {
      FUN_0033b2a4("string_view::substr");
      puVar2 = &uStack_190;
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      FUN_00667bdc(&uStack_190,0,lVar3);
      do {
        if (iStack_188 == 2) {
          return puVar2;
        }
        puVar7 = auStack_160;
        lVar8 = 0;
        do {
          *puVar7 = uStack_180;
          puVar7[1] = uStack_178;
          FUN_00667b38(&uStack_190);
          puVar7 = puVar7 + 2;
          if (lVar8 == 0xf) break;
          lVar8 = lVar8 + 1;
        } while (iStack_188 != 2);
        puVar2 = extraout_x8;
        FUN_003dd10c(extraout_x8,extraout_x8[1],auStack_160,puVar7);
      } while( true );
    }
    uVar6 = (long)puVar2 - (lVar8 + uVar4);
    uVar1 = uVar5 - uVar4;
    if (uVar6 <= uVar5 - uVar4) {
      uVar1 = uVar6;
    }
    param_1[2] = lVar8 + uVar4;
    param_1[3] = uVar1;
    *param_1 = uVar4 + lVar3 + uVar1;
  }
  return param_1;
}



/* Entry: 003dcf80; end: 003dd047;  */

ulong * FUN_003dcf80(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  ulong *extraout_x8;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uStack_190;
  int iStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 auStack_160 [32];
  
  if ((int)param_1[1] == 1) {
    *(undefined4 *)(param_1 + 1) = 2;
  }
  else {
    lVar8 = *(long *)param_1[4];
    uVar2 = ((long *)param_1[4])[1];
    uVar5 = param_1[6];
    *(int *)(param_1 + 6) = (int)uVar5 + 1;
    if ((int)uVar5 == *(int *)((long)param_1 + 0x2c)) {
      lVar4 = 0;
      puVar3 = (ulong *)(lVar8 + uVar2);
    }
    else {
      puVar3 = param_1 + 5;
      lVar4 = lVar8;
      FUN_00576578(puVar3,lVar8,uVar2,*param_1);
    }
    if ((ulong *)(lVar8 + uVar2) == puVar3) {
      *(undefined4 *)(param_1 + 1) = 1;
    }
    uVar5 = *param_1;
    if (uVar2 < uVar5) {
      FUN_0033b2a4("string_view::substr");
      puVar3 = &uStack_190;
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      FUN_00667bdc(&uStack_190,0,lVar4);
      do {
        if (iStack_188 == 2) {
          return puVar3;
        }
        puVar7 = auStack_160;
        lVar8 = 0;
        do {
          *puVar7 = uStack_180;
          puVar7[1] = uStack_178;
          FUN_00667b38(&uStack_190);
          puVar7 = puVar7 + 2;
          if (lVar8 == 0xf) break;
          lVar8 = lVar8 + 1;
        } while (iStack_188 != 2);
        puVar3 = extraout_x8;
        FUN_003dd10c(extraout_x8,extraout_x8[1],auStack_160,puVar7);
      } while( true );
    }
    uVar6 = (long)puVar3 - (lVar8 + uVar5);
    uVar1 = uVar2 - uVar5;
    if (uVar6 <= uVar2 - uVar5) {
      uVar1 = uVar6;
    }
    param_1[2] = lVar8 + uVar5;
    param_1[3] = uVar1;
    *param_1 = uVar5 + lVar4 + uVar1;
  }
  return param_1;
}



/* Entry: 003dd048; end: 003dd10b;  */

void FUN_003dd048(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 auStack_160 [8];
  int iStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 auStack_130 [32];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_00667bdc(auStack_160,0,param_3);
  do {
    if (iStack_158 == 2) {
      return;
    }
    puVar1 = auStack_130;
    lVar2 = 0;
    do {
      *puVar1 = uStack_150;
      puVar1[1] = uStack_148;
      FUN_00667b38(auStack_160);
      puVar1 = puVar1 + 2;
      if (lVar2 == 0xf) break;
      lVar2 = lVar2 + 1;
    } while (iStack_158 != 2);
    FUN_003dd10c(param_1,param_1[1],auStack_130,puVar1);
  } while( true );
}



/* Entry: 003dd10c; end: 003dd31f;  */

long * FUN_003dd10c(long *param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *extraout_x8;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  if (0 < param_5) {
    plVar6 = param_1 + 2;
    plVar5 = (long *)param_1[1];
    if (*plVar6 - (long)plVar5 >> 4 < param_5) {
      lVar8 = *param_1;
      uVar1 = param_5 + ((long)plVar5 - lVar8 >> 4);
      if (uVar1 >> 0x3c != 0) {
        FUN_0035b540();
        if (plStack_58 != plStack_60) {
          plStack_58 = (long *)((long)plStack_58 +
                               (((long)plStack_60 - (long)plStack_58) + 0xfU & 0xfffffffffffffff0));
        }
        if (plStack_68 != (long *)0x0) {
          __ZdlPv();
        }
        __Unwind_Resume();
        plVar6 = param_1 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar4 = 0x38;
        __Znwm();
        plVar6 = (long *)*param_2;
        *param_2 = 0;
        FUN_003dd598();
        if (plVar6 != (long *)0x0) {
          plVar5 = plVar6 + 1;
          do {
            lVar8 = *plVar5;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 + -1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
        if (param_1 != (long *)0x0) {
          plVar6 = param_1 + 1;
          do {
            lVar8 = *plVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 + -1 == 0) {
            (**(code **)(*param_1 + 8))();
          }
        }
        *extraout_x8 = uVar4;
        return param_1;
      }
      uVar7 = *plVar6 - lVar8;
      uVar9 = (long)uVar7 >> 3;
      if (uVar9 <= uVar1) {
        uVar9 = uVar1;
      }
      if (0x7fffffffffffffef < uVar7) {
        uVar9 = 0xfffffffffffffff;
      }
      plStack_48 = plVar6;
      if (uVar9 == 0) {
        plStack_68 = (long *)0x0;
      }
      else {
        FUN_0035b554();
        plStack_68 = plVar6;
      }
      plStack_60 = plStack_68 + ((long)param_2 - lVar8 >> 4) * 2;
      plStack_50 = plStack_68 + uVar9 * 2;
      plStack_58 = plStack_60 + param_5 * 2;
      plVar6 = plStack_60;
      do {
        lVar8 = param_3[1];
        plVar5 = plVar6 + 2;
        *plVar6 = *param_3;
        plVar6[1] = lVar8;
        plVar6 = plVar5;
        param_3 = param_3 + 2;
      } while (plVar5 != plStack_58);
      FUN_0035b46c(param_1,&plStack_68,param_2);
      if (plStack_58 != plStack_60) {
        plStack_58 = (long *)((long)plStack_58 +
                             ((long)plStack_60 + (0xf - (long)plStack_58) & 0xfffffffffffffff0U));
      }
      param_2 = param_1;
      if (plStack_68 != (long *)0x0) {
        __ZdlPv();
      }
    }
    else {
      lVar8 = (long)plVar5 - (long)param_2 >> 4;
      plVar6 = plVar5;
      if (lVar8 < param_5) {
        plVar12 = param_3 + lVar8 * 2;
        plVar11 = plVar5;
        for (plVar10 = plVar12; plVar10 != param_4; plVar10 = plVar10 + 2) {
          lVar8 = plVar10[1];
          *plVar11 = *plVar10;
          plVar11[1] = lVar8;
          plVar6 = plVar6 + 2;
          plVar11 = plVar11 + 2;
        }
        param_1[1] = (long)plVar6;
        if ((long)plVar5 - (long)param_2 < 1) {
          return param_2;
        }
      }
      else {
        plVar12 = param_3 + param_5 * 2;
      }
      plVar10 = plVar6;
      for (plVar11 = plVar6 + param_5 * -2; plVar11 < plVar5; plVar11 = plVar11 + 2) {
        lVar8 = *plVar11;
        plVar10[1] = plVar11[1];
        *plVar10 = lVar8;
        plVar10 = plVar10 + 2;
      }
      param_1[1] = (long)plVar10;
      plVar5 = param_2;
      if (plVar6 != param_2 + param_5 * 2) {
        _memmove(plVar6 + ((long)plVar6 - (long)(param_2 + param_5 * 2) >> 4) * -2,param_2);
      }
      for (; plVar12 != param_3; param_3 = param_3 + 2) {
        lVar8 = param_3[1];
        *plVar5 = *param_3;
        plVar5[1] = lVar8;
        plVar5 = plVar5 + 2;
      }
    }
  }
  return param_2;
}



/* Entry: 003dd320; end: 003dd44f;  */

void FUN_003dd320(undefined8 *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = param_2 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar4 = 0x38;
  __Znwm();
  plVar5 = (long *)*param_3;
  *param_3 = 0;
  FUN_003dd598();
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  if (param_2 != (long *)0x0) {
    plVar5 = param_2 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*param_2 + 8))();
    }
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 003dd450; end: 003dd4eb;  */

void FUN_003dd450(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if ((bRam0000000000b5ebf0 & 1) == 0) {
    iVar1 = 0xb5ebf0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_003ba418(0xb5ebe8,"Insecure",8);
      ___cxa_guard_release(0xb5ebf0);
    }
  }
  if ((char)*(byte *)((long)puRam0000000000b5ebe8 + 0x17) < '\0') {
    puVar2 = (undefined8 *)*puRam0000000000b5ebe8;
    uVar3 = puRam0000000000b5ebe8[1];
  }
  else {
    uVar3 = (ulong)*(byte *)((long)puRam0000000000b5ebe8 + 0x17);
    puVar2 = puRam0000000000b5ebe8;
  }
  *param_1 = puVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 003dd4ec; end: 003dd4f3;  */

undefined8 FUN_003dd4ec(void)

{
  return 0;
}



/* Entry: 003dd4f4; end: 003dd58b;  */

void FUN_003dd4f4(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  dword *pdVar4;
  
  if ((bRam0000000000b5ec00 & 1) == 0) {
    iVar3 = 0xb5ec00;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      pdVar4 = &MACH_HEADER.ncmds;
      __Znwm();
      *(undefined ***)pdVar4 = &PTR_FUN_009e0eb8;
      *(undefined8 *)(pdVar4 + 2) = 1;
      pdRam0000000000b5ebf8 = pdVar4;
      ___cxa_guard_release(0xb5ec00);
    }
  }
  pdVar4 = pdRam0000000000b5ebf8 + 2;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(pdVar4,0x10);
    if (bVar2) {
      *(long *)pdVar4 = *(long *)pdVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return;
}



/* Entry: 003dd58c; end: 003dd597;  */

void FUN_003dd58c(void)

{
  return;
}



/* Entry: 003dd598; end: 003dd67b;  */

undefined8 * FUN_003dd598(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)*param_2;
  *param_2 = 0;
  plStack_30 = (long *)*param_3;
  *param_3 = 0;
  FUN_003de790(param_1,"",0,&plStack_28,&plStack_30);
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
    if (lVar4 + -1 == 0) {
      (**(code **)(*plStack_30 + 8))();
    }
  }
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      (**(code **)(*plStack_28 + 8))();
    }
  }
  *param_1 = &PTR_FUN_009e0fb0;
  return param_1;
}



/* Entry: 003dd67c; end: 003dd693;  */

void FUN_003dd67c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x003dd684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 003dd694; end: 003dd6c3;  */

ulong * FUN_003dd694(ulong *param_1)

{
  if ((*param_1 & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 003dd6c4; end: 003dd76f;  */

undefined8 * FUN_003dd6c4(long param_1,undefined8 *param_2,long *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  FUN_00339490();
  *(undefined8 **)(param_1 + 0x18) = param_2;
  if (param_3 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
LAB_003dd734:
    if (param_4 == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    else {
      uVar3 = param_4[1];
      uVar1 = *param_4;
      *(undefined8 *)(param_1 + 0x30) = param_4[2];
      *(undefined8 *)(param_1 + 0x28) = uVar3;
      *(undefined8 *)(param_1 + 0x20) = uVar1;
    }
    return param_2;
  }
  if (*param_3 == 0) {
    func_0x00774da4();
  }
  else if (param_3[1] != 0) {
    uVar1 = 0x10;
    func_0x00338c94();
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    lVar2 = param_3[1];
    FUN_00339490();
    *(long *)(*(long *)(param_1 + 0x10) + 8) = lVar2;
    param_2 = (undefined8 *)*param_3;
    FUN_00339490();
    **(undefined8 **)(param_1 + 0x10) = param_2;
    goto LAB_003dd734;
  }
  func_0x00774dd8();
  *param_2 = &PTR_FUN_009e0f18;
  FUN_00338cb8(param_2[3]);
  func_0x003df968(param_2[2],1);
  if ((code *)param_2[6] != (code *)0x0) {
    (*(code *)param_2[6])(param_2[5]);
  }
  return param_2;
}



/* Entry: 003dd770; end: 003dd7c3;  */

undefined8 * FUN_003dd770(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e0f18;
  FUN_00338cb8(param_1[3]);
  func_0x003df968(param_1[2],1);
  if ((code *)param_1[6] != (code *)0x0) {
    (*(code *)param_1[6])(param_1[5]);
  }
  return param_1;
}



/* Entry: 003dd7c4; end: 003dd7c7;  */

undefined8 * FUN_003dd7c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e0f18;
  FUN_00338cb8(param_1[3]);
  func_0x003df968(param_1[2],1);
  if ((code *)param_1[6] != (code *)0x0) {
    (*(code *)param_1[6])(param_1[5]);
  }
  return param_1;
}



/* Entry: 003dd7c8; end: 003dd7db;  */

void FUN_003dd7c8(void)

{
  FUN_003dd770();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 003dd7dc; end: 003dd9f7;  */

void FUN_003dd7dc(long *param_1,long *param_2,undefined8 *param_3,undefined8 param_4,long *param_5,
                 long *param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_90 [32];
  long *plStack_70;
  long *plStack_68;
  
  if ((param_5 == (long *)0x0) || (lVar6 = *param_5, lVar6 == 0)) {
    uVar8 = 0;
    uVar9 = 0;
  }
  else {
    uVar8 = 0;
    uVar9 = 0;
    puVar7 = (undefined8 *)(param_5[1] + 0x10);
    do {
      uVar5 = puVar7[-1];
      uVar4 = uVar5;
      _strcmp(uVar5,"grpc.ssl_target_name_override");
      if (((int)uVar4 == 0) && (*(int *)(puVar7 + -2) == 0)) {
        uVar9 = *puVar7;
      }
      _strcmp(uVar5,"grpc.ssl_session_cache");
      if (((int)uVar5 == 0) && (*(int *)(puVar7 + -2) == 2)) {
        uVar8 = *puVar7;
      }
      puVar7 = puVar7 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  plVar1 = param_2 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plStack_70 = (long *)*param_3;
  *param_3 = 0;
  plStack_68 = param_2;
  FUN_003de978(param_1,&plStack_68,&plStack_70,param_2 + 2,param_4,uVar9,uVar8);
  if (plStack_70 != (long *)0x0) {
    plVar1 = plStack_70 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plStack_70 + 8))();
    }
  }
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plStack_68 + 8))();
    }
  }
  if (*param_1 != 0) {
    FUN_003a2ec4(auStack_90,"grpc.http2_scheme",&DAT_0091e19c);
    FUN_003a1ecc(param_5,auStack_90,1);
    *param_6 = (long)param_5;
  }
  return;
}



/* Entry: 003dd9f8; end: 003dda93;  */

void FUN_003dd9f8(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if ((bRam0000000000b5ec10 & 1) == 0) {
    iVar1 = 0xb5ec10;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_003ba418(0xb5ec08,"Ssl",3);
      ___cxa_guard_release(0xb5ec10);
    }
  }
  if ((char)*(byte *)((long)puRam0000000000b5ec08 + 0x17) < '\0') {
    puVar2 = (undefined8 *)*puRam0000000000b5ec08;
    uVar3 = puRam0000000000b5ec08[1];
  }
  else {
    uVar3 = (ulong)*(byte *)((long)puRam0000000000b5ec08 + 0x17);
    puVar2 = puRam0000000000b5ec08;
  }
  *param_1 = puVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 003dda94; end: 003ddb17;  */

qword * FUN_003dda94(qword *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  qword *pqVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x8;
  ulong uVar3;
  
  if (param_4 == 0) {
    pqVar1 = &segment_command_00000020.vmsize;
    __Znwm();
    *pqVar1 = (qword)&PTR_FUN_009e0f18;
    pqVar1[1] = 1;
    pqVar1[7] = 0x100000000;
    FUN_003dd6c4();
    return pqVar1;
  }
  func_0x00774e3c();
  __ZdlPv();
  __Unwind_Resume(param_1);
  if ((bRam0000000000b5ec10 & 1) == 0) {
    param_1 = (qword *)0xb5ec10;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      FUN_003ba418(0xb5ec08,"Ssl",3);
      param_1 = (qword *)0xb5ec10;
      ___cxa_guard_release(0xb5ec10);
    }
  }
  if ((char)*(byte *)((long)puRam0000000000b5ec08 + 0x17) < '\0') {
    puVar2 = (undefined8 *)*puRam0000000000b5ec08;
    uVar3 = puRam0000000000b5ec08[1];
  }
  else {
    uVar3 = (ulong)*(byte *)((long)puRam0000000000b5ec08 + 0x17);
    puVar2 = puRam0000000000b5ec08;
  }
  *extraout_x8 = puVar2;
  extraout_x8[1] = uVar3;
  return param_1;
}



/* Entry: 003ddb18; end: 003ddb43;  */

void FUN_003ddb18(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if ((bRam0000000000b5ec10 & 1) == 0) {
    iVar1 = 0xb5ec10;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_003ba418(0xb5ec08,"Ssl",3);
      ___cxa_guard_release(0xb5ec10);
    }
  }
  if ((char)*(byte *)((long)puRam0000000000b5ec08 + 0x17) < '\0') {
    puVar2 = (undefined8 *)*puRam0000000000b5ec08;
    uVar3 = puRam0000000000b5ec08[1];
  }
  else {
    uVar3 = (ulong)*(byte *)((long)puRam0000000000b5ec08 + 0x17);
    puVar2 = puRam0000000000b5ec08;
  }
  *param_1 = puVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 003ddb44; end: 003ddbdb;  */

undefined1  [16] FUN_003ddb44(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_38 [24];
  
  FUN_003db1a4(auStack_38);
  puVar1 = auStack_38;
  FUN_003db1c4();
  if (puVar1 == (undefined1 *)0x0) {
    pcVar3 = "No value found for %s property.";
    uVar4 = 99;
  }
  else {
    puVar2 = auStack_38;
    FUN_003db1c4();
    if (puVar2 == (undefined1 *)0x0) {
      pcVar3 = *(char **)(puVar1 + 8);
      uVar4 = *(undefined8 *)(puVar1 + 0x10);
      goto LAB_003ddbcc;
    }
    pcVar3 = "Multiple values found for %s property.";
    uVar4 = 0x67;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/credentials/tls/tls_utils.cc"
               ,uVar4,0,pcVar3);
  uVar4 = 0;
  pcVar3 = "";
LAB_003ddbcc:
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = pcVar3;
  return auVar5;
}



/* Entry: 003ddbdc; end: 003ddd63;  */

void FUN_003ddbdc(long *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  code *pcVar5;
  undefined1 *puVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_68 [24];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_003db1a4(auStack_68);
  puVar6 = auStack_68;
  FUN_003db1c4();
  do {
    if (puVar6 == (undefined1 *)0x0) {
      if (*param_1 == param_1[1]) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/credentials/tls/tls_utils.cc"
                     ,0x78,0,"No value found for %s property.");
      }
      return;
    }
    puVar2 = (undefined8 *)param_1[1];
    if (puVar2 < (undefined8 *)param_1[2]) {
      uVar3 = *(undefined8 *)(puVar6 + 0x10);
      *puVar2 = *(undefined8 *)(puVar6 + 8);
      puVar2[1] = uVar3;
      plVar12 = puVar2 + 2;
    }
    else {
      lVar13 = (long)puVar2 - *param_1 >> 4;
      uVar1 = lVar13 + 1;
      if (uVar1 >> 0x3c != 0) {
        FUN_0035b540(param_1);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x3ddd40);
        (*pcVar5)();
      }
      uVar8 = param_1[2] - *param_1;
      uVar9 = (long)uVar8 >> 3;
      if (uVar9 <= uVar1) {
        uVar9 = uVar1;
      }
      if (0x7fffffffffffffef < uVar8) {
        uVar9 = 0xfffffffffffffff;
      }
      plVar7 = param_1 + 2;
      FUN_0035b554();
      plVar12 = plVar7 + lVar13 * 2;
      lVar13 = *(long *)(puVar6 + 0x10);
      *plVar12 = *(long *)(puVar6 + 8);
      plVar12[1] = lVar13;
      lVar13 = *param_1;
      lVar11 = param_1[1];
      plVar10 = plVar12;
      if (lVar11 != lVar13) {
        do {
          plVar4 = (long *)(lVar11 + -8);
          lVar14 = *(long *)(lVar11 + -0x10);
          lVar11 = lVar11 + -0x10;
          plVar10[-1] = *plVar4;
          plVar10[-2] = lVar14;
          plVar10 = plVar10 + -2;
        } while (lVar11 != lVar13);
        lVar11 = *param_1;
      }
      plVar12 = plVar12 + 2;
      *param_1 = (long)plVar10;
      param_1[1] = (long)plVar12;
      param_1[2] = (long)(plVar7 + uVar9 * 2);
      if (lVar11 != 0) {
        __ZdlPv(lVar11);
      }
    }
    param_1[1] = (long)plVar12;
    puVar6 = auStack_68;
    FUN_003db1c4();
  } while( true );
}


