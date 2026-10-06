/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a003a8c; end: 10a003c47;  */

long FUN_10a003a8c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  FUN_10a0033a4(param_1 + 0x188,*(undefined8 *)(param_1 + 400));
  (*(code *)**(undefined8 **)(param_1 + 0x148))(param_1 + 0x148);
  if (*(long *)(param_1 + 0x118) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x118) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xe0);
    }
  }
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  if (0 < *(int *)(param_1 + 0xe4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x120);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0xe4));
  }
  lVar5 = *(long *)(param_1 + 0x128);
  if (lVar5 != param_1 + 0x130 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  FUN_109fff0a0(param_1 + 0xc0,*(undefined8 *)(param_1 + 200));
  if (*(long *)(param_1 + 0x98) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x98) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x60);
    }
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (0 < *(int *)(param_1 + 100)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0xa0);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 100));
  }
  lVar5 = *(long *)(param_1 + 0xa8);
  if (lVar5 != param_1 + 0xb0 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != param_1 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 10a003c48; end: 10a003c5b;  */

undefined1  [16] FUN_10a003c48(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  puVar2 = (ulong *)&UNK_10f630bba;
  FUN_109ffde64();
  if ((ulong)puVar2 >> 0x3e == 0) {
    lVar3 = (long)puVar2 << 2;
    __Znwm(lVar3);
    auVar8._8_8_ = puVar2;
    auVar8._0_8_ = lVar3;
    return auVar8;
  }
  func_0x000109ffded8();
  if (param_2 < 0x7ffffffffffffff8) {
    uVar7 = param_2;
    if (param_2 < 0x17) {
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = 0;
      *(char *)((long)puVar2 + 0x17) = (char)param_2;
    }
    else {
      uVar1 = 0x19;
      if ((param_2 | 7) != 0x17) {
        uVar1 = (param_2 | 7) + 1;
      }
      uVar4 = uVar1;
      __Znwm();
      puVar2[1] = param_2;
      puVar2[2] = uVar1 | 0x8000000000000000;
      *puVar2 = uVar4;
    }
    auVar9._8_8_ = uVar7;
    auVar9._0_8_ = puVar2;
    return auVar9;
  }
  func_0x000109ffde50();
  uVar7 = puVar2[1];
  puVar5 = (ulong *)*puVar2;
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    uVar7 = (ulong)*(byte *)((long)puVar2 + 0x17);
    puVar5 = puVar2;
  }
  uVar4 = param_2;
  _strlen();
  uVar1 = uVar4;
  if (uVar7 <= uVar4) {
    uVar1 = uVar7;
  }
  _memcmp(puVar5,param_2,uVar1);
  if ((int)puVar5 == 0) {
    if (uVar7 == uVar4) {
      uVar6 = 0;
      goto LAB_10a003dac;
    }
    if (uVar7 < uVar4) goto LAB_10a003da8;
  }
  else if ((int)puVar5 < 0) {
LAB_10a003da8:
    uVar6 = 0xff;
    goto LAB_10a003dac;
  }
  uVar6 = 1;
LAB_10a003dac:
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = uVar6;
  return auVar10;
}



/* Entry: 10a003c5c; end: 10a003c8f;  */

undefined1  [16] FUN_10a003c5c(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if ((ulong)param_1 >> 0x3e == 0) {
    lVar2 = (long)param_1 << 2;
    __Znwm(lVar2);
    auVar7._8_8_ = param_1;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  func_0x000109ffded8();
  if (param_2 < 0x7ffffffffffffff8) {
    uVar6 = param_2;
    if (param_2 < 0x17) {
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      *(char *)((long)param_1 + 0x17) = (char)param_2;
    }
    else {
      uVar1 = 0x19;
      if ((param_2 | 7) != 0x17) {
        uVar1 = (param_2 | 7) + 1;
      }
      uVar3 = uVar1;
      __Znwm();
      param_1[1] = param_2;
      param_1[2] = uVar1 | 0x8000000000000000;
      *param_1 = uVar3;
    }
    auVar8._8_8_ = uVar6;
    auVar8._0_8_ = param_1;
    return auVar8;
  }
  func_0x000109ffde50();
  uVar6 = param_1[1];
  puVar4 = (ulong *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar6 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar4 = param_1;
  }
  uVar3 = param_2;
  _strlen();
  uVar1 = uVar3;
  if (uVar6 <= uVar3) {
    uVar1 = uVar6;
  }
  _memcmp(puVar4,param_2,uVar1);
  if ((int)puVar4 == 0) {
    if (uVar6 == uVar3) {
      uVar5 = 0;
      goto LAB_10a003dac;
    }
    if (uVar6 < uVar3) goto LAB_10a003da8;
  }
  else if ((int)puVar4 < 0) {
LAB_10a003da8:
    uVar5 = 0xff;
    goto LAB_10a003dac;
  }
  uVar5 = 1;
LAB_10a003dac:
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = uVar5;
  return auVar9;
}



/* Entry: 10a003c90; end: 10a003d5b;  */

ulong * FUN_10a003c90(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if (param_2 < 0x7ffffffffffffff8) {
    if (param_2 < 0x17) {
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      *(char *)((long)param_1 + 0x17) = (char)param_2;
    }
    else {
      uVar1 = 0x19;
      if ((param_2 | 7) != 0x17) {
        uVar1 = (param_2 | 7) + 1;
      }
      uVar2 = uVar1;
      __Znwm();
      param_1[1] = param_2;
      param_1[2] = uVar1 | 0x8000000000000000;
      *param_1 = uVar2;
    }
    return param_1;
  }
  func_0x000109ffde50();
  uVar1 = param_1[1];
  puVar4 = (ulong *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar4 = param_1;
  }
  uVar3 = param_2;
  _strlen();
  uVar2 = uVar3;
  if (uVar1 <= uVar3) {
    uVar2 = uVar1;
  }
  _memcmp(puVar4,param_2,uVar2);
  if ((int)puVar4 == 0) {
    if (uVar1 == uVar3) {
      return (ulong *)0x0;
    }
    if (uVar1 < uVar3) {
      return (ulong *)0xff;
    }
  }
  else if ((int)puVar4 < 0) {
    return (ulong *)0xff;
  }
  return (ulong *)0x1;
}



/* Entry: 10a003d5c; end: 10a003db7;  */

undefined8 FUN_10a003d5c(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  
  uVar1 = param_4;
  if (param_2 <= param_4) {
    uVar1 = param_2;
  }
  _memcmp(param_1,param_3,uVar1);
  if ((int)param_1 == 0) {
    if (param_2 == param_4) {
      return 0;
    }
    if (param_2 < param_4) {
      return 0xff;
    }
  }
  else if ((int)param_1 < 0) {
    return 0xff;
  }
  return 1;
}



/* Entry: 10a003db8; end: 10a003e3b;  */

long * FUN_10a003db8(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  plVar4 = plVar3;
  while (plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, FUN_10a003e3c(param_3,plVar4 + 4),
          ((uint)uVar1 >> 7 & 1) != 0) {
      plVar2 = (long *)*plVar4;
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_10a003e24;
    }
    plVar2 = plVar4 + 4;
    FUN_10a003e3c(plVar2,param_3);
    if (((uint)plVar2 >> 7 & 1) == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_10a003e24:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 10a003e3c; end: 10a003e73;  */

undefined8 FUN_10a003e3c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  uVar2 = param_1[1];
  puVar5 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar5 = param_1;
  }
  uVar3 = param_2[1];
  puVar4 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar3 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar4 = param_2;
  }
  uVar1 = uVar3;
  if (uVar2 <= uVar3) {
    uVar1 = uVar2;
  }
  _memcmp(puVar5,puVar4,uVar1);
  if ((int)puVar5 == 0) {
    if (uVar2 == uVar3) {
      return 0;
    }
    if (uVar2 < uVar3) {
      return 0xff;
    }
  }
  else if ((int)puVar5 < 0) {
    return 0xff;
  }
  return 1;
}



/* Entry: 10a003e74; end: 10a003ff3;  */

/* WARNING: Removing unreachable block (ram,0x00010a003f54) */

long FUN_10a003e74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x170);
  for (puVar6 = *(undefined8 **)(param_1 + 0x168); puVar6 != puVar1; puVar6 = puVar6 + 0xd) {
    uVar5 = *puVar6;
    uVar3 = uVar5;
    _strlen(uVar5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&uStack_68,uVar5,uVar3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&uStack_68,&DAT_10f62a9de,1);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_68,param_2,param_3);
  lVar4 = param_1 + 0x180;
  FUN_10a004f04(lVar4,&uStack_68);
  if (lVar4 != 0) {
    uStack_c8 = *(undefined8 *)(lVar4 + 0x30);
    uStack_98 = *(undefined8 *)(lVar4 + 0x60);
    uStack_a0 = *(undefined8 *)(lVar4 + 0x58);
    uStack_88 = *(undefined8 *)(lVar4 + 0x70);
    uStack_90 = *(undefined8 *)(lVar4 + 0x68);
    uStack_78 = *(undefined8 *)(lVar4 + 0x80);
    uStack_80 = *(undefined8 *)(lVar4 + 0x78);
    uStack_70 = *(undefined8 *)(lVar4 + 0x88);
    uStack_a8 = *(undefined8 *)(lVar4 + 0x50);
    uStack_b0 = *(undefined8 *)(lVar4 + 0x48);
    uStack_b8 = *(undefined8 *)(lVar4 + 0x40);
    uStack_c0 = *(undefined8 *)(lVar4 + 0x38);
    uStack_d0 = param_2;
    func_0x00010a004eb4(param_1,&uStack_d0);
    return param_1;
  }
  func_0x00010b0ae4b8(&uStack_d0,&UNK_10f630de7,0x3b);
  func_0x00010989842c(&uStack_d0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a003fb4);
  (*pcVar2)();
}



/* Entry: 10a003ff4; end: 10a0040cf;  */

void FUN_10a003ff4(ulong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined4 uVar6;
  code *pcVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  
  *(undefined1 *)(param_1 + 0x1ac) = 0;
  lVar5 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar5) {
    uVar1 = *(undefined4 *)(lVar5 + -0x50);
    uVar3 = *(undefined4 *)(lVar5 + -0x4c);
    uVar2 = *(undefined4 *)(lVar5 + -0x48);
    uVar4 = *(undefined4 *)(lVar5 + -0x44);
    uVar6 = *(undefined4 *)(lVar5 + -0x18);
    *(long *)(param_1 + 0x170) = lVar5 + -0x68;
    uVar8 = param_1;
    FUN_10a0051e8(param_1,uVar1,uVar3,uVar6,uVar2,uVar4);
    if ((uVar8 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a004060;
      plVar10 = (long *)(*(long *)(param_1 + 0x18) + -8);
      puVar9 = (undefined8 *)*plVar10;
      if (puVar9 != (undefined8 *)0x0) {
        (**(code **)*puVar9)();
      }
      *(long **)(param_1 + 0x18) = plVar10;
    }
    return;
  }
LAB_10a004060:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a004064);
  (*pcVar7)();
}



/* Entry: 10a0040d0; end: 10a004173;  */

long * FUN_10a0040d0(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 uStack_21;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  *(long *)((long)param_1 + *(long *)(lVar2 + -0x18)) = param_2[1];
  FUN_10a0043cc(param_1 + 1,&uStack_21);
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110bf7fc8;
  puVar1[8] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((long)puVar1 + 0x4d) = 0;
  *(undefined8 *)((long)puVar1 + 0x45) = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  param_1[3] = (long)(puVar1 + 3);
  param_1[4] = (long)puVar1;
  FUN_10a5cf1fc(param_1 + 3);
  return param_1;
}



/* Entry: 10a004174; end: 10a0042af;  */

long * FUN_10a004174(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[1];
  func_0x00010a004e5c(param_1 + 3);
  func_0x00010a004e04(param_1 + 1);
  return param_1;
}



/* Entry: 10a0042b0; end: 10a0042c7;  */

undefined8 FUN_10a0042b0(void)

{
  return 0;
}



/* Entry: 10a0042c8; end: 10a00430b;  */

undefined8 * FUN_10a0042c8(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  puVar2 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar2 = &PTR_DAT_110b9a138;
  puVar2[5] = &PTR_FUN_110b9a1b0;
  func_0x00010a004e5c(puVar2 + 3);
  plVar6 = (long *)puVar2[2];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return puVar2 + 1;
}



/* Entry: 10a00430c; end: 10a00431b;  */

void FUN_10a00430c(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_DAT_110b9a138;
  puVar1[5] = &PTR_FUN_110b9a1b0;
  func_0x00010a004e5c(puVar1 + 3);
  func_0x00010a004e04(puVar1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 10a00431c; end: 10a004393;  */

void FUN_10a00431c(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_30;
  long lStack_28;
  
  param_1 = (long *)((long)param_1 + *(long *)(*param_1 + -0x20));
  plVar1 = (long *)((long)param_1 + *(long *)(*param_1 + -0x18));
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = param_2;
    if (param_2 != 0) {
      plVar1[1] = *(long *)(*(long *)(param_2 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  lVar4 = param_1[3];
  if (*(long *)(lVar4 + 0x20) == 0) {
    *(long *)(lVar4 + 0x30) = param_2;
    lStack_28 = *(long *)(lVar4 + 0x18);
    uStack_30 = *(undefined8 *)(lVar4 + 0x10);
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
    FUN_10a3cf744(param_2,&uStack_30,&PTR_DAT_110b99f08,param_1);
    if (lStack_28 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((int)param_2 != 0) {
      *(int *)(lVar4 + 0x38) = (int)param_2;
      *(undefined1 *)(lVar4 + 0x3c) = 1;
    }
  }
  else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    FUN_10ae06f30(1,8,&UNK_10f665c8c,&UNK_10f665cc3,0x71,&UNK_10f665d1c,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 10a004394; end: 10a0043cb;  */

void FUN_10a004394(void)

{
  return;
}



/* Entry: 10a0043cc; end: 10a004413;  */

void FUN_10a0043cc(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x68;
  __Znwm();
  FUN_10a004414();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a004414; end: 10a004473;  */

undefined8 * FUN_10a004414(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110b99f40;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  FUN_10a0044b4();
  return param_1;
}



/* Entry: 10a004474; end: 10a004483;  */

void FUN_10a004474(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b99f40;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a004484; end: 10a0044a3;  */

void FUN_10a004484(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b99f40;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0044a4; end: 10a0044b3;  */

void FUN_10a0044a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a0044ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a0044b4; end: 10a004633;  */

undefined8 * FUN_10a0044b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110c6c6b8;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110b99f90;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  puVar1[3] = &PTR_FUN_110b99fe0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0xb] = FUN_10a0048b0;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[3] = puVar1 + 3;
  param_1[4] = puVar1;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110b9a070;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[3] = &PTR_FUN_110b9a0c0;
  puVar1[0x12] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0xb] = FUN_10a004c4c;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[5] = puVar1 + 3;
  param_1[6] = puVar1;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110b9a070;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  puVar1[3] = &PTR_FUN_110b9a0c0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0xb] = FUN_10a004c4c;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[7] = puVar1 + 3;
  param_1[8] = puVar1;
  *(undefined1 *)(param_1 + 9) = 0;
  return param_1;
}



/* Entry: 10a004634; end: 10a004643;  */

void FUN_10a004634(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b99f90;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a004644; end: 10a004663;  */

void FUN_10a004644(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b99f90;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a004664; end: 10a004673;  */

void FUN_10a004664(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a00466c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a004674; end: 10a00471b;  */

undefined8 * FUN_10a004674(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b99fe0;
  (**(code **)param_1[9])();
  FUN_10a0048c0(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a00471c; end: 10a00477f;  */

bool FUN_10a00471c(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x4e) {
    iVar1 = 0xe482987;
    _memcmp(&UNK_10e482987);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a004780; end: 10a00489f;  */

void FUN_10a004780(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  undefined7 uStack_28;
  byte bStack_21;
  
  func_0x000107c2b054(param_1,"");
  uVar1 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (uVar1 == 0) {
    func_0x00010989f98c(&ppuStack_38,param_2);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    param_1[1] = uStack_30;
    *param_1 = (long)ppuStack_38;
    param_1[2] = CONCAT17(bStack_21,uStack_28);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&UNK_10f685178,7);
  __ZNSt3__19to_stringEm(&ppuStack_38,*(undefined8 *)(param_2 + 0x30));
  pppuVar2 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar2 = &ppuStack_38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar2,uStack_30);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f684600,1);
  return;
}



/* Entry: 10a0048a0; end: 10a0048af;  */

undefined1  [16] FUN_10a0048a0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4e;
  auVar1._0_8_ = &UNK_10e482987;
  return auVar1;
}



/* Entry: 10a0048b0; end: 10a0048bf;  */

long * FUN_10a0048b0(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  func_0x000105277f8c();
  FUN_10a0048f8();
  lVar1 = *param_2;
  *param_2 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_2;
}



/* Entry: 10a0048c0; end: 10a0048f7;  */

long * FUN_10a0048c0(long *param_1)

{
  long lVar1;
  
  FUN_10a0048f8(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a0048f8; end: 10a00495f;  */

void FUN_10a0048f8(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  
  while( true ) {
    if (param_2 == (long *)0x0) {
      return;
    }
    if (3 < (ulong)*(byte *)(param_2 + 0xc)) break;
    lVar2 = *param_2;
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0xc)])(param_2 + 4);
    FUN_10a004978(param_2 + 2);
    __ZdlPv(param_2);
    param_2 = (long *)lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a004960);
  (*pcVar1)();
}



/* Entry: 10a004960; end: 10a004977;  */

void FUN_10a004960(void)

{
  return;
}



/* Entry: 10a004978; end: 10a0049cf;  */

long FUN_10a004978(long param_1)

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



/* Entry: 10a0049d0; end: 10a0049df;  */

void FUN_10a0049d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9a070;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a0049e0; end: 10a0049ff;  */

void FUN_10a0049e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9a070;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a004a00; end: 10a004a0f;  */

void FUN_10a004a00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a004a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a004a10; end: 10a004ab7;  */

undefined8 * FUN_10a004a10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9a0c0;
  (**(code **)param_1[9])();
  FUN_10a004c5c(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a004ab8; end: 10a004b1b;  */

bool FUN_10a004ab8(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x48) {
    iVar1 = 0xe482a75;
    _memcmp(&UNK_10e482a75);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a004b1c; end: 10a004c3b;  */

void FUN_10a004b1c(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  undefined7 uStack_28;
  byte bStack_21;
  
  func_0x000107c2b054(param_1,"");
  uVar1 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (uVar1 == 0) {
    func_0x00010989f98c(&ppuStack_38,param_2);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    param_1[1] = uStack_30;
    *param_1 = (long)ppuStack_38;
    param_1[2] = CONCAT17(bStack_21,uStack_28);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&UNK_10f685178,7);
  __ZNSt3__19to_stringEm(&ppuStack_38,*(undefined8 *)(param_2 + 0x30));
  pppuVar2 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar2 = &ppuStack_38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar2,uStack_30);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f684600,1);
  return;
}



/* Entry: 10a004c3c; end: 10a004c4b;  */

undefined1  [16] FUN_10a004c3c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x48;
  auVar1._0_8_ = &UNK_10e482a75;
  return auVar1;
}



/* Entry: 10a004c4c; end: 10a004c5b;  */

long * FUN_10a004c4c(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  func_0x000105277f8c();
  FUN_10a004c94();
  lVar1 = *param_2;
  *param_2 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_2;
}



/* Entry: 10a004c5c; end: 10a004c93;  */

long * FUN_10a004c5c(long *param_1)

{
  long lVar1;
  
  FUN_10a004c94(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a004c94; end: 10a004cfb;  */

void FUN_10a004c94(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  
  while( true ) {
    if (param_2 == (long *)0x0) {
      return;
    }
    if (3 < (ulong)*(byte *)(param_2 + 0xc)) break;
    lVar2 = *param_2;
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0xc)])(param_2 + 4);
    FUN_10a004978(param_2 + 2);
    __ZdlPv(param_2);
    param_2 = (long *)lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a004cfc);
  (*pcVar1)();
}



/* Entry: 10a004cfc; end: 10a004f03;  */

long FUN_10a004cfc(long param_1)

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



/* Entry: 10a004f04; end: 10a004fe7;  */

long FUN_10a004f04(long *param_1,undefined8 param_2)

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



/* Entry: 10a004fe8; end: 10a0050a7;  */

long FUN_10a004fe8(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar6 = *(long *)((long)param_1 + param_2 + -0x10);
  uVar9 = *param_1 + (lVar6 + param_2) * -0x3c5a37a36834ced9;
  lVar7 = param_1[3];
  uVar8 = uVar9 + param_1[1];
  uVar1 = uVar8 + param_1[2];
  uVar2 = *(long *)((long)param_1 + param_2 + -0x20) + param_1[2];
  lVar3 = *(long *)((long)param_1 + param_2 + -8) + lVar7;
  uVar4 = lVar3 + uVar2;
  lVar5 = (uVar8 >> 7 | uVar8 << 0x39) + (uVar9 >> 0x25 | uVar9 * 0x8000000) +
          (uVar9 + lVar7 >> 0x34 | (uVar9 + lVar7) * 0x1000) + (uVar1 >> 0x1f | uVar1 << 0x21);
  uVar8 = *(long *)((long)param_1 + param_2 + -0x18) + uVar2;
  uVar9 = uVar8 + lVar6;
  uVar8 = (uVar9 + lVar3 + lVar5) * -0x3c5a37a36834ced9 +
          (uVar1 + lVar7 + (uVar2 >> 0x25 | uVar2 * 0x8000000) + (uVar8 >> 7 | uVar8 << 0x39) +
                   (uVar4 >> 0x34 | uVar4 * 0x1000) + (uVar9 >> 0x1f | uVar9 << 0x21)) *
          -0x651e95c4d06fbfb1;
  uVar8 = lVar5 + (uVar8 ^ uVar8 >> 0x2f) * -0x3c5a37a36834ced9;
  return (uVar8 ^ uVar8 >> 0x2f) * -0x651e95c4d06fbfb1;
}



/* Entry: 10a0050a8; end: 10a0051e7;  */

long * FUN_10a0050a8(long *param_1,undefined8 *param_2,ulong param_3,int param_4,ulong param_5,
                    ulong param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar11 = (undefined8 *)param_1[1];
  if (puVar11 < (undefined8 *)param_1[2]) {
    uVar13 = param_2[1];
    uVar12 = *param_2;
    uVar14 = param_2[2];
    uVar16 = param_2[5];
    uVar15 = param_2[4];
    puVar11[3] = param_2[3];
    puVar11[2] = uVar14;
    puVar11[5] = uVar16;
    puVar11[4] = uVar15;
    puVar11[1] = uVar13;
    *puVar11 = uVar12;
    uVar13 = param_2[7];
    uVar12 = param_2[6];
    uVar15 = param_2[9];
    uVar14 = param_2[8];
    uVar17 = param_2[0xb];
    uVar16 = param_2[10];
    puVar11[0xc] = param_2[0xc];
    puVar11[9] = uVar15;
    puVar11[8] = uVar14;
    puVar11[0xb] = uVar17;
    puVar11[10] = uVar16;
    puVar11[7] = uVar13;
    puVar11[6] = uVar12;
    puVar11 = puVar11 + 0xd;
    plVar3 = param_1;
  }
  else {
    lVar10 = (long)puVar11 - *param_1;
    uVar6 = (lVar10 >> 3) * 0x4ec4ec4ec4ec4ec5 + 1;
    if (0x276276276276276 < uVar6) {
      FUN_10a0052ac();
      lVar10 = param_1[0x2d];
      while( true ) {
        uVar4 = (uint)param_2;
        uVar5 = (uint)param_3;
        if (lVar10 == param_1[0x2e]) break;
        uVar2 = *(uint *)(lVar10 + 0x18);
        if ((int)uVar4 <= (int)*(uint *)(lVar10 + 0x18)) {
          uVar2 = uVar4;
        }
        param_2 = (undefined8 *)(ulong)uVar2;
        param_3 = (ulong)(*(uint *)(lVar10 + 0x1c) | uVar5);
        param_5 = (ulong)(*(uint *)(lVar10 + 0x20) & (uint)param_5);
        param_6 = (ulong)(*(uint *)(lVar10 + 0x24) & (uint)param_6);
        lVar10 = lVar10 + 0x68;
      }
      if ((((int)uVar4 < (int)param_1[0x2c]) ||
          ((((uVar4 = *(uint *)(param_1 + 0x3c), uVar4 != 0 && (param_4 != -1)) &&
            (*(int *)((long)param_1 + 0x1e4) != 0)) &&
           (((uint)(*(int *)((long)param_1 + 0x1e4) + param_4) <= uVar4 &&
            ((*(uint *)(param_1 + 0x3a) >> 1 & 1) == 0)))))) ||
         (((uVar5 >> 10 & 1) != 0 && ((*(uint *)(param_1 + 0x3a) >> 10 & 1) == 0)))) {
        plVar7 = (long *)0x1;
      }
      else {
        plVar7 = (long *)0x1;
        if (((*(uint *)(param_1 + 0x3b) & (uint)param_5) != 0) &&
           ((*(uint *)((long)param_1 + 0x1dc) & (uint)param_6) != 0)) {
          if (99 < (int)param_1[0x2c]) {
            uVar5 = (uint)((int)param_1[0x35] == 1) & uVar5 >> 8;
            if (uVar4 == 0) {
              return (long *)(ulong)uVar5;
            }
            if (uVar5 != 0) {
              return (long *)(ulong)uVar5;
            }
          }
          plVar7 = (long *)0x0;
        }
      }
      return plVar7;
    }
    lVar8 = param_1[2] - *param_1 >> 3;
    uVar9 = lVar8 * -0x6276276276276276;
    if (uVar9 < uVar6 || uVar9 - uVar6 == 0) {
      uVar9 = uVar6;
    }
    if (0x13b13b13b13b13a < (ulong)(lVar8 * 0x4ec4ec4ec4ec4ec5)) {
      uVar9 = 0x276276276276276;
    }
    plVar7 = param_1;
    FUN_10a0052c0();
    puVar1 = (undefined8 *)((long)plVar7 + lVar10);
    uVar15 = param_2[3];
    uVar14 = param_2[2];
    uVar13 = param_2[5];
    uVar12 = param_2[4];
    uVar16 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar16;
    puVar1[3] = uVar15;
    puVar1[2] = uVar14;
    puVar1[5] = uVar13;
    puVar1[4] = uVar12;
    uVar15 = param_2[9];
    uVar14 = param_2[8];
    uVar13 = param_2[0xb];
    uVar12 = param_2[10];
    uVar17 = param_2[7];
    uVar16 = param_2[6];
    puVar1[0xc] = param_2[0xc];
    puVar1[9] = uVar15;
    puVar1[8] = uVar14;
    puVar1[0xb] = uVar13;
    puVar1[10] = uVar12;
    puVar1[7] = uVar17;
    puVar1[6] = uVar16;
    puVar11 = puVar1 + 0xd;
    lVar10 = (long)puVar1 - (param_1[1] - *param_1);
    _memcpy(lVar10);
    plVar3 = (long *)*param_1;
    *param_1 = lVar10;
    param_1[1] = (long)puVar11;
    param_1[2] = (long)(plVar7 + uVar9 * 0xd);
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar11;
  return plVar3;
}



/* Entry: 10a0051e8; end: 10a0052ab;  */

uint FUN_10a0051e8(long param_1,int param_2,uint param_3,int param_4,uint param_5,uint param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  for (lVar4 = *(long *)(param_1 + 0x168); lVar4 != *(long *)(param_1 + 0x170); lVar4 = lVar4 + 0x68
      ) {
    iVar1 = *(int *)(lVar4 + 0x18);
    if (param_2 <= *(int *)(lVar4 + 0x18)) {
      iVar1 = param_2;
    }
    param_3 = *(uint *)(lVar4 + 0x1c) | param_3;
    param_5 = *(uint *)(lVar4 + 0x20) & param_5;
    param_6 = *(uint *)(lVar4 + 0x24) & param_6;
    param_2 = iVar1;
  }
  if (((param_2 < *(int *)(param_1 + 0x160)) ||
      ((((uVar2 = *(uint *)(param_1 + 0x1e0), uVar2 != 0 && (param_4 != -1)) &&
        (*(int *)(param_1 + 0x1e4) != 0)) &&
       (((uint)(*(int *)(param_1 + 0x1e4) + param_4) <= uVar2 &&
        ((*(uint *)(param_1 + 0x1d0) >> 1 & 1) == 0)))))) ||
     (((param_3 >> 10 & 1) != 0 && ((*(uint *)(param_1 + 0x1d0) >> 10 & 1) == 0)))) {
    uVar3 = 1;
  }
  else {
    uVar3 = 1;
    if (((*(uint *)(param_1 + 0x1d8) & param_5) != 0) &&
       ((*(uint *)(param_1 + 0x1dc) & param_6) != 0)) {
      if (99 < *(int *)(param_1 + 0x160)) {
        uVar3 = (uint)(*(int *)(param_1 + 0x1a8) == 1) & param_3 >> 8;
        if (uVar2 == 0) {
          return uVar3;
        }
        if (uVar3 != 0) {
          return uVar3;
        }
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* Entry: 10a0052ac; end: 10a0052bf;  */

void FUN_10a0052ac(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puStack_68;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 < (long *)0x276276276276277) {
    __Znwm((long)param_2 * 0x68);
    return;
  }
  func_0x000109ffded8();
  uVar2 = param_3;
  _strlen(param_3);
  (**(code **)(*param_2 + 0xb0))(&puStack_68,param_2,param_3,uVar2);
  (**(code **)(*param_2 + 0x1d0))(param_2,puVar1,&puStack_68,param_4);
  if (puStack_68 != (undefined8 *)0x0) {
    (**(code **)*puStack_68)();
  }
  return;
}



/* Entry: 10a0052c0; end: 10a005307;  */

void FUN_10a0052c0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puStack_58;
  
  if (param_2 < (long *)0x276276276276277) {
    __Znwm((long)param_2 * 0x68);
    return;
  }
  func_0x000109ffded8();
  uVar1 = param_3;
  _strlen(param_3);
  (**(code **)(*param_2 + 0xb0))(&puStack_58,param_2,param_3,uVar1);
  (**(code **)(*param_2 + 0x1d0))(param_2,param_1,&puStack_58,param_4);
  if (puStack_58 != (undefined8 *)0x0) {
    (**(code **)*puStack_58)();
  }
  return;
}



/* Entry: 10a005308; end: 10a005397;  */

void FUN_10a005308(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puStack_38;
  
  uVar1 = param_3;
  _strlen(param_3);
  (**(code **)(*param_2 + 0xb0))(&puStack_38,param_2,param_3,uVar1);
  (**(code **)(*param_2 + 0x1d0))(param_2,param_1,&puStack_38,param_4);
  if (puStack_38 != (undefined8 *)0x0) {
    (**(code **)*puStack_38)();
  }
  return;
}



/* Entry: 10a005398; end: 10a005447;  */

void FUN_10a005398(long *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if (param_3 == 2) {
    puVar5 = (undefined8 *)*param_1;
    lVar4 = param_2[1];
    uVar6 = *param_2;
    puVar5[1] = param_2[1];
    *puVar5 = uVar6;
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar4 = param_2[3];
    uVar6 = param_2[2];
    puVar5[3] = param_2[3];
    puVar5[2] = uVar6;
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
  }
  else if (param_3 == 1) {
    puVar5 = (undefined8 *)*param_1;
    *puVar5 = *param_2;
    (**(code **)(param_2[1] + 0x18))(puVar5 + 1);
  }
  return;
}



/* Entry: 10a005448; end: 10a005557;  */

void FUN_10a005448(float *param_1,undefined8 *param_2,float *param_3)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  fVar11 = *param_3;
  fVar13 = param_3[4];
  fVar2 = (float)*param_2;
  fVar3 = (float)((ulong)*param_2 >> 0x20);
  fVar6 = *(float *)(param_2 + 1);
  uVar10 = *(undefined8 *)(param_3 + 1);
  fVar14 = param_3[2];
  uVar5 = *(undefined8 *)(param_3 + 5);
  fVar15 = param_3[6];
  uVar17 = *(ulong *)(param_3 + 8);
  fVar19 = param_3[10];
  uVar7 = *(undefined8 *)(param_3 + 9);
  fVar16 = (float)uVar17;
  uVar8 = *(undefined8 *)(param_3 + 0xd);
  fVar9 = (float)uVar10;
  uVar1 = CONCAT44(-fVar9,-fVar13) ^
          (CONCAT44(-fVar9,-fVar13) ^ CONCAT44(fVar9,fVar13)) &
          CONCAT44(-(uint)(0.0 <= fVar9),-(uint)(0.0 <= fVar13));
  fVar4 = (float)uVar5;
  if (fVar14 < 0.0) {
    fVar14 = -fVar14;
  }
  uVar12 = CONCAT44(-fVar4,-fVar11) ^
           (CONCAT44(-fVar4,-fVar11) ^ CONCAT44(fVar4,fVar11)) &
           CONCAT44(-(uint)(0.0 <= fVar4),-(uint)(0.0 <= fVar11));
  if (fVar15 < 0.0) {
    fVar15 = -fVar15;
  }
  fVar18 = (float)(uVar17 >> 0x20);
  fVar21 = -fVar18;
  uVar17 = CONCAT44(fVar21,-fVar16) ^
           (CONCAT44(fVar21,-fVar16) ^ uVar17) &
           CONCAT44(-(uint)(0.0 <= fVar18),-(uint)(0.0 <= fVar16));
  if (fVar19 < 0.0) {
    fVar19 = -fVar19;
  }
  fVar18 = (float)*(undefined8 *)((long)param_2 + 0xc);
  fVar21 = (float)((ulong)*(undefined8 *)((long)param_2 + 0xc) >> 0x20);
  fVar22 = *(float *)(param_2 + 2);
  fVar20 = *(float *)((long)param_2 + 0x14);
  *param_1 = fVar11 * fVar2 + *(float *)((long)param_2 + 4) * fVar13 + fVar6 * fVar16 + param_3[0xc]
  ;
  *(ulong *)(param_1 + 3) =
       CONCAT44((float)(uVar1 >> 0x20) * fVar18 + (float)(uVar12 >> 0x20) * fVar21 +
                (float)(uVar17 >> 0x20) * fVar20,
                (float)uVar1 * fVar21 + (float)uVar12 * fVar18 + (float)uVar17 * fVar20);
  *(ulong *)(param_1 + 1) =
       CONCAT44((float)((ulong)uVar10 >> 0x20) * fVar2 + (float)((ulong)uVar5 >> 0x20) * fVar3 +
                (float)((ulong)uVar7 >> 0x20) * fVar6 + (float)((ulong)uVar8 >> 0x20),
                fVar9 * fVar2 + fVar4 * fVar3 + (float)uVar7 * fVar6 + (float)uVar8);
  param_1[5] = fVar14 * fVar18 + fVar15 * fVar22 + fVar19 * fVar20;
  return;
}



/* Entry: 10a005558; end: 10a00561b;  */

void FUN_10a005558(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  float fVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulong uVar15;
  ulong uStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  auStack_78 = (undefined1  [8])0x0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  func_0x00010a005770(param_2,&uStack_80,8,param_3);
  lVar1 = 0;
  uVar2 = auStack_78[0];
  uVar4 = auStack_78[1];
  uVar6 = auStack_78[2];
  uVar8 = auStack_78[3];
  uVar11 = uStack_80;
  do {
    fVar14 = *(float *)((long)&uStack_70 + lVar1 + 4);
    fVar10 = fVar14;
    if ((float)auStack_78._0_4_ <= fVar14) {
      fVar10 = (float)auStack_78._0_4_;
    }
    auStack_78._0_4_ = fVar10;
    uVar15 = *(ulong *)(auStack_78 + lVar1 + 4);
    fVar10 = (float)(uVar15 >> 0x20);
    uVar11 = uVar11 ^ (uVar11 ^ uVar15) &
                      CONCAT44(-(uint)(fVar10 < (float)(uVar11 >> 0x20)),
                               -(uint)((float)uVar15 < (float)uVar11));
    uStack_80 = uStack_80 ^
                (uStack_80 ^ uVar15) &
                CONCAT44(-(uint)((float)(uStack_80 >> 0x20) < fVar10),
                         -(uint)((float)uStack_80 < (float)uVar15));
    uVar3 = SUB41(fVar14,0);
    uVar5 = (char)((uint)fVar14 >> 8);
    uVar7 = (char)((uint)fVar14 >> 0x10);
    uVar9 = (char)((uint)fVar14 >> 0x18);
    if (fVar14 <= (float)CONCAT13(uVar8,CONCAT12(uVar6,CONCAT11(uVar4,uVar2)))) {
      uVar3 = uVar2;
      uVar5 = uVar4;
      uVar7 = uVar6;
      uVar9 = uVar8;
    }
    lVar1 = lVar1 + 0xc;
    uVar2 = uVar3;
    uVar4 = uVar5;
    uVar6 = uVar7;
    uVar8 = uVar9;
  } while (lVar1 != 0x54);
  fVar10 = (float)(uStack_80 >> 0x20);
  fVar13 = ((float)auStack_78._0_4_ + (float)CONCAT13(uVar9,CONCAT12(uVar7,CONCAT11(uVar5,uVar3))))
           * 0.5;
  fVar14 = ((float)uVar11 + (float)uStack_80) * 0.5;
  fVar12 = ((float)(uVar11 >> 0x20) + fVar10) * 0.5;
  *param_1 = CONCAT44(fVar12,fVar14);
  *(float *)(param_1 + 1) = fVar13;
  *(ulong *)((long)param_1 + 0xc) = CONCAT44(fVar10 - fVar12,(float)uStack_80 - fVar14);
  *(float *)((long)param_1 + 0x14) =
       (float)CONCAT13(uVar9,CONCAT12(uVar7,CONCAT11(uVar5,uVar3))) - fVar13;
  return;
}



/* Entry: 10a00561c; end: 10a0056c3;  */

void FUN_10a00561c(float *param_1,float *param_2,ulong param_3)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (param_3 != 0) {
    fVar4 = *param_1;
    fVar7 = param_1[1];
    fVar3 = param_1[2];
    fVar6 = param_1[3];
    fVar8 = fVar4 - fVar6;
    fVar9 = param_1[4];
    fVar10 = param_1[5];
    fVar5 = fVar7 - fVar9;
    fVar2 = fVar3 - fVar10;
    *param_2 = fVar8;
    param_2[1] = fVar5;
    param_2[2] = fVar2;
    if (param_3 != 1) {
      fVar3 = fVar3 + fVar10;
      param_2[3] = fVar8;
      param_2[4] = fVar5;
      param_2[5] = fVar3;
      if (2 < param_3) {
        fVar7 = fVar7 + fVar9;
        param_2[6] = fVar8;
        param_2[7] = fVar7;
        param_2[8] = fVar2;
        if (param_3 != 3) {
          param_2[9] = fVar8;
          param_2[10] = fVar7;
          param_2[0xb] = fVar3;
          if (4 < param_3) {
            fVar4 = fVar4 + fVar6;
            param_2[0xc] = fVar4;
            param_2[0xd] = fVar5;
            param_2[0xe] = fVar2;
            if (param_3 != 5) {
              param_2[0xf] = fVar4;
              param_2[0x10] = fVar5;
              param_2[0x11] = fVar3;
              if (6 < param_3) {
                param_2[0x12] = fVar4;
                param_2[0x13] = fVar7;
                param_2[0x14] = fVar2;
                if (param_3 != 7) {
                  param_2[0x15] = fVar4;
                  param_2[0x16] = fVar7;
                  param_2[0x17] = fVar3;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0056c4);
  (*pcVar1)();
}



/* Entry: 10a0056c4; end: 10a00583f;  */

void FUN_10a0056c4(undefined8 param_1,long param_2,long param_3,undefined8 *param_4)

{
  code *pcVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  FUN_10a00561c();
  lVar3 = 0x60;
  pfVar2 = (float *)(param_2 + 8);
  do {
    if (param_3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a005770);
      (*pcVar1)();
    }
    fVar4 = pfVar2[-2];
    fVar5 = pfVar2[-1];
    fVar6 = *pfVar2;
    fVar7 = *(float *)(param_4 + 1);
    fVar8 = *(float *)(param_4 + 3);
    fVar9 = *(float *)(param_4 + 5);
    fVar10 = *(float *)(param_4 + 7);
    *(ulong *)(pfVar2 + -2) =
         CONCAT44((float)((ulong)*param_4 >> 0x20) * fVar4 +
                  (float)((ulong)param_4[2] >> 0x20) * fVar5 +
                  (float)((ulong)param_4[4] >> 0x20) * fVar6 + (float)((ulong)param_4[6] >> 0x20),
                  (float)*param_4 * fVar4 + (float)param_4[2] * fVar5 +
                  (float)param_4[4] * fVar6 + (float)param_4[6]);
    *pfVar2 = fVar4 * fVar7 + fVar5 * fVar8 + fVar6 * fVar9 + fVar10;
    param_3 = param_3 + -1;
    lVar3 = lVar3 + -0xc;
    pfVar2 = pfVar2 + 3;
  } while (lVar3 != 0);
  return;
}



/* Entry: 10a005840; end: 10a005a93;  */

float FUN_10a005840(undefined8 *param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar8;
  float fVar9;
  ulong uVar7;
  float fVar10;
  float fVar11;
  
  fVar2 = (float)*param_1;
  fVar5 = (float)*(undefined8 *)((long)param_1 + 0xc);
  fVar1 = (float)((ulong)*param_1 >> 0x20);
  fVar8 = (float)((ulong)*(undefined8 *)((long)param_1 + 0xc) >> 0x20);
  fVar6 = (float)*param_2;
  fVar9 = (float)((ulong)*param_2 >> 0x20);
  fVar3 = (float)*(undefined8 *)((long)param_2 + 0xc);
  fVar10 = (((fVar2 - fVar5) + -1.1920929e-07) - fVar6) * fVar3;
  fVar4 = (float)((ulong)*(undefined8 *)((long)param_2 + 0xc) >> 0x20);
  fVar11 = (((fVar1 - fVar8) + -1.1920929e-07) - fVar9) * fVar4;
  uVar7 = CONCAT44(fVar11,fVar10);
  fVar3 = ((fVar2 + fVar5 + 1.1920929e-07) - fVar6) * fVar3;
  fVar4 = ((fVar1 + fVar8 + 1.1920929e-07) - fVar9) * fVar4;
  uVar7 = uVar7 ^ (uVar7 ^ CONCAT44(fVar4,fVar3)) &
                  CONCAT44(-(uint)(fVar4 < fVar11),-(uint)(fVar3 < fVar10));
  fVar2 = (float)(uVar7 >> 0x20);
  fVar3 = (float)uVar7;
  if (fVar2 <= fVar3) {
    fVar2 = fVar3;
  }
  fVar1 = (((*(float *)(param_1 + 1) - *(float *)((long)param_1 + 0x14)) + -1.1920929e-07) -
          *(float *)(param_2 + 1)) * *(float *)((long)param_2 + 0x14);
  fVar3 = ((*(float *)(param_1 + 1) + *(float *)((long)param_1 + 0x14) + 1.1920929e-07) -
          *(float *)(param_2 + 1)) * *(float *)((long)param_2 + 0x14);
  if (fVar1 <= fVar3) {
    fVar3 = fVar1;
  }
  if (fVar3 <= fVar2) {
    fVar3 = fVar2;
  }
  return fVar3;
}



/* Entry: 10a005a94; end: 10a005cab;  */

bool FUN_10a005a94(long param_1,float *param_2,undefined8 *param_3)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  byte *pbVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  undefined8 uVar26;
  byte abStack_6 [6];
  
  lVar5 = 0;
  uVar9 = NEON_fmov(0x3f800000,4);
  fVar8 = *param_2;
  uVar15 = param_3[5];
  uVar4 = param_3[4];
  uVar12 = param_3[7];
  uVar2 = param_3[6];
  uVar14 = param_3[1];
  uVar3 = *param_3;
  uVar17 = param_3[3];
  uVar16 = param_3[2];
  uVar10 = *(undefined8 *)(param_2 + 1);
  uVar11 = *(undefined8 *)(param_2 + 4);
  fVar13 = param_2[3];
  do {
    iVar6 = 0;
    pfVar1 = (float *)(param_1 + lVar5);
    fVar22 = *pfVar1;
    fVar20 = pfVar1[1];
    fVar23 = pfVar1[2];
    fVar25 = pfVar1[3];
    fVar18 = (float)((ulong)uVar16 >> 0x20) * fVar20 + fVar22 * (float)uVar16 +
             (float)uVar17 * fVar23 + (float)((ulong)uVar17 >> 0x20) * fVar25;
    fVar19 = (float)((ulong)uVar4 >> 0x20) * fVar20 + fVar22 * (float)uVar4 + (float)uVar15 * fVar23
             + (float)((ulong)uVar15 >> 0x20) * fVar25;
    fVar21 = (float)((ulong)uVar3 >> 0x20) * fVar20 + fVar22 * (float)uVar3 + (float)uVar14 * fVar23
             + (float)((ulong)uVar14 >> 0x20) * fVar25;
    fVar22 = (float)((ulong)uVar2 >> 0x20) * fVar20 + fVar22 * (float)uVar2 + (float)uVar12 * fVar23
             + (float)((ulong)uVar12 >> 0x20) * fVar25;
    abStack_6[2] = 1;
    abStack_6[1] = 1;
    abStack_6[0] = 1;
    do {
      if (iVar6 == 1) {
        pbVar7 = abStack_6 + 1;
        fVar20 = fVar18;
      }
      else if (iVar6 == 2) {
        pbVar7 = abStack_6;
        fVar20 = fVar19;
      }
      else {
        if (iVar6 == 3) {
          fVar20 = 1.0;
          if (fVar22 <= 0.0) {
            fVar20 = 0.0;
          }
          goto LAB_10a005ba8;
        }
        pbVar7 = abStack_6 + 2;
        fVar20 = fVar21;
      }
      *pbVar7 = 0.0 < fVar20;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 4);
    fVar20 = 1.0;
LAB_10a005ba8:
    iVar6 = 0;
    abStack_6[5] = 1;
    abStack_6[4] = 1;
    abStack_6[3] = 1;
    do {
      if (iVar6 == 1) {
        pbVar7 = abStack_6 + 4;
        fVar23 = fVar18;
      }
      else if (iVar6 == 2) {
        pbVar7 = abStack_6 + 3;
        fVar23 = fVar19;
      }
      else {
        if (iVar6 == 3) {
          fVar23 = 1.0;
          if (0.0 <= fVar22) {
            fVar23 = 0.0;
          }
          goto LAB_10a005c24;
        }
        pbVar7 = abStack_6 + 5;
        fVar23 = fVar21;
      }
      *pbVar7 = fVar23 < 0.0;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 4);
    fVar23 = 1.0;
LAB_10a005c24:
    uVar24 = NEON_ucvtf((ulong)(CONCAT14(abStack_6[0],(uint)abStack_6[1]) & 0xffffffff01) &
                        0xffffff01ffffffff,4);
    uVar26 = NEON_ucvtf((ulong)CONCAT14(abStack_6[3],(uint)abStack_6[4]) & 0x100000001,4);
    fVar22 = fVar21 * (fVar8 + fVar13 * ((float)(abStack_6[2] & 1) - (float)(abStack_6[5] & 1))) +
             fVar18 * ((float)uVar10 + (float)uVar11 * ((float)uVar24 - (float)uVar26)) +
             fVar22 * ((float)((ulong)uVar9 >> 0x20) + (fVar20 - fVar23) * 0.0) +
             fVar19 * ((float)((ulong)uVar10 >> 0x20) +
                      (float)((ulong)uVar11 >> 0x20) *
                      ((float)((ulong)uVar24 >> 0x20) - (float)((ulong)uVar26 >> 0x20)));
    if ((fVar22 < 0.0) || (lVar5 = lVar5 + 0x10, lVar5 == 0x60)) {
      return 0.0 <= fVar22;
    }
  } while( true );
}



/* Entry: 10a005cac; end: 10a005d63;  */

void FUN_10a005cac(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 auStack_a0 [12];
  
  *param_1 = 0;
  FUN_10a005d64(param_1);
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      lVar1 = 0;
      do {
        *(undefined8 *)((long)auStack_a0 + lVar1 + 8) = 0x3f800000;
        *(undefined8 *)((long)auStack_a0 + lVar1) = 0;
        lVar1 = lVar1 + 0x10;
      } while (lVar1 != 0x60);
      func_0x00010a0058fc(auStack_a0,param_2 + lVar3 * 0x40);
      puVar2 = param_1 + lVar3 * 0xc + 1;
      puVar2[5] = auStack_a0[5];
      puVar2[4] = auStack_a0[4];
      puVar2[7] = auStack_a0[7];
      puVar2[6] = auStack_a0[6];
      puVar2[9] = auStack_a0[9];
      puVar2[8] = auStack_a0[8];
      puVar2[0xb] = auStack_a0[0xb];
      puVar2[10] = auStack_a0[10];
      puVar2[1] = auStack_a0[1];
      *puVar2 = auStack_a0[0];
      puVar2[3] = auStack_a0[3];
      puVar2[2] = auStack_a0[2];
      lVar3 = lVar3 + 1;
    } while (lVar3 != param_3);
  }
  return;
}



/* Entry: 10a005d64; end: 10a006723;  */

void FUN_10a005d64(ulong *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  
  uVar2 = *param_1;
  lVar1 = param_2 - uVar2;
  if ((uVar2 <= param_2) && (lVar1 != 0)) {
    puVar3 = param_1 + uVar2 * 0xc + 1;
    do {
      lVar4 = 0;
      do {
        ((undefined8 *)((long)puVar3 + lVar4))[1] = 0x3f800000;
        *(undefined8 *)((long)puVar3 + lVar4) = 0;
        lVar4 = lVar4 + 0x10;
      } while (lVar4 != 0x60);
      puVar3 = puVar3 + 0xc;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  *param_1 = param_2;
  return;
}



/* Entry: 10a006724; end: 10a006aff;  */

void FUN_10a006724(float *param_1,undefined1 *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long lVar3;
  uint *puVar4;
  long lVar5;
  float *pfVar6;
  undefined1 *puVar7;
  float fVar8;
  int iVar9;
  int iVar16;
  undefined8 uVar10;
  float fVar17;
  int iVar19;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar14;
  float fVar15;
  float fVar18;
  float fVar20;
  float fVar21;
  undefined1 auVar13 [16];
  int iVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  float fVar30;
  float fVar31;
  int iVar32;
  float fVar33;
  float fVar34;
  int iVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  int iVar38;
  float fVar39;
  float fVar40;
  int iVar41;
  float fVar42;
  float fVar47;
  float fVar48;
  int iVar49;
  float fVar50;
  int iVar51;
  float fVar52;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  int iVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  float fVar58;
  float fVar59;
  float fVar62;
  float fVar63;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar64;
  ulong uVar65;
  ulong uVar66;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  
  if (param_3 < 4) {
    lVar3 = 0;
  }
  else {
    auVar11 = NEON_fmov(0x3f800000,4);
    fStack_b8 = auVar11._8_4_;
    fStack_b4 = auVar11._12_4_;
    fStack_c0 = auVar11._0_4_;
    fStack_bc = auVar11._4_4_;
    auVar12 = NEON_fmov(0xbf800000,4);
    lVar5 = 0;
    pfVar6 = param_1;
    puVar7 = param_2;
    do {
      fVar59 = *pfVar6;
      fVar23 = pfVar6[1];
      fVar39 = pfVar6[2];
      fVar27 = pfVar6[3];
      fVar14 = pfVar6[4];
      fVar30 = pfVar6[5];
      fVar47 = pfVar6[6];
      fVar8 = pfVar6[7];
      fVar17 = pfVar6[8];
      fVar33 = pfVar6[9];
      fVar50 = pfVar6[10];
      fVar42 = pfVar6[0xb];
      fVar20 = pfVar6[0xc];
      fVar36 = pfVar6[0xd];
      fVar52 = pfVar6[0xe];
      fVar26 = pfVar6[0xf];
      pfVar6 = pfVar6 + 0x10;
      auVar60._0_4_ = fVar59 * fVar59 + fVar23 * fVar23 + fVar39 * fVar39 + fVar27 * fVar27;
      auVar60._4_4_ = fVar14 * fVar14 + fVar30 * fVar30 + fVar47 * fVar47 + fVar8 * fVar8;
      auVar60._8_4_ = fVar17 * fVar17 + fVar33 * fVar33 + fVar50 * fVar50 + fVar42 * fVar42;
      auVar60._12_4_ = fVar20 * fVar20 + fVar36 * fVar36 + fVar52 * fVar52 + fVar26 * fVar26;
      auVar61._8_4_ = 0x2b8cbccc;
      auVar61._0_8_ = 0x2b8cbccc2b8cbccc;
      auVar61._12_4_ = 0x2b8cbccc;
      auVar61 = NEON_fmax(auVar60,auVar61,4);
      fVar58 = fStack_c0 / SQRT(auVar61._0_4_);
      fVar62 = fStack_bc / SQRT(auVar61._4_4_);
      fVar63 = fStack_b8 / SQRT(auVar61._8_4_);
      fVar64 = fStack_b4 / SQRT(auVar61._12_4_);
      fVar24 = ABS(fVar27 * fVar58);
      fVar31 = ABS(fVar8 * fVar62);
      fVar34 = ABS(fVar42 * fVar63);
      fVar37 = ABS(fVar26 * fVar64);
      uStack_120 = auVar12._0_4_;
      uStack_11c = auVar12._4_4_;
      uStack_118 = auVar12._8_4_;
      uStack_114 = auVar12._12_4_;
      fVar27 = (float)((uint)fStack_c0 ^
                      ((uint)fStack_c0 ^ uStack_120) & -(uint)(fVar27 * fVar58 < 0.0));
      fVar15 = (float)((uint)fStack_bc ^
                      ((uint)fStack_bc ^ uStack_11c) & -(uint)(fVar8 * fVar62 < 0.0));
      fVar18 = (float)((uint)fStack_b8 ^
                      ((uint)fStack_b8 ^ uStack_118) & -(uint)(fVar42 * fVar63 < 0.0));
      fVar21 = (float)((uint)fStack_b4 ^
                      ((uint)fStack_b4 ^ uStack_114) & -(uint)(fVar26 * fVar64 < 0.0));
      fVar8 = fStack_c0 - fVar24 * fVar24;
      fVar26 = fStack_bc - fVar31 * fVar31;
      fVar40 = fStack_c0 / SQRT(fVar8 + 1e-06);
      fVar48 = fStack_bc / SQRT(fVar26 + 1e-06);
      fVar42 = (float)_atanf();
      fVar8 = (float)_atanf(CONCAT44((fVar26 * fVar48) / fVar31,(fVar8 * fVar40) / fVar24));
      fVar26 = (float)_atanf();
      fVar24 = (float)_atanf();
      auVar2._8_4_ = 0x447fc000;
      auVar2._0_8_ = 0x447fc000447fc000;
      auVar1._8_4_ = 0x447fc000;
      auVar1._0_8_ = 0x447fc000447fc000;
      auVar46._8_4_ = 0x447fc000;
      auVar46._0_8_ = 0x447fc000447fc000;
      fVar40 = fVar40 * fVar8 * 0.63661975;
      fVar48 = fVar48 * fVar42 * 0.63661975;
      fVar8 = (fStack_b8 / SQRT((fStack_b8 - fVar34 * fVar34) + 1e-06)) * fVar26 * 0.63661975;
      fVar42 = (fStack_b4 / SQRT((fStack_b4 - fVar37 * fVar37) + 1e-06)) * fVar24 * 0.63661975;
      auVar28._0_4_ = fVar59 * fVar58 * fVar27 * fVar40 * 0.5 + 0.5;
      auVar28._4_4_ = fVar14 * fVar62 * fVar15 * fVar48 * 0.5 + 0.5;
      auVar28._8_4_ = fVar17 * fVar63 * fVar18 * fVar8 * 0.5 + 0.5;
      auVar28._12_4_ = fVar20 * fVar64 * fVar21 * fVar42 * 0.5 + 0.5;
      auVar61 = NEON_fmax(auVar28,ZEXT216(0),4);
      auVar61 = NEON_fmin(auVar61,auVar11,4);
      auVar29._0_4_ = (int)(auVar61._0_4_ * 1023.0 + 0.5);
      auVar29._4_4_ = (int)(auVar61._4_4_ * 1023.0 + 0.5);
      auVar29._8_4_ = (int)(auVar61._8_4_ * 1023.0 + 0.5);
      auVar29._12_4_ = (int)(auVar61._12_4_ * 1023.0 + 0.5);
      auVar43._0_4_ = fVar23 * fVar58 * fVar27 * fVar40 * 0.5 + 0.5;
      auVar43._4_4_ = fVar30 * fVar62 * fVar15 * fVar48 * 0.5 + 0.5;
      auVar43._8_4_ = fVar33 * fVar63 * fVar18 * fVar8 * 0.5 + 0.5;
      auVar43._12_4_ = fVar36 * fVar64 * fVar21 * fVar42 * 0.5 + 0.5;
      auVar61 = NEON_fmax(auVar43,ZEXT216(0),4);
      auVar44 = NEON_fmin(auVar61,auVar11,4);
      auVar46._12_4_ = 0x447fc000;
      auVar61 = NEON_fmin(auVar29,auVar46,4);
      auVar45._0_4_ = (int)(auVar44._0_4_ * 1023.0 + 0.5);
      auVar45._4_4_ = (int)(auVar44._4_4_ * 1023.0 + 0.5);
      auVar45._8_4_ = (int)(auVar44._8_4_ * 1023.0 + 0.5);
      auVar45._12_4_ = (int)(auVar44._12_4_ * 1023.0 + 0.5);
      auVar1._12_4_ = 0x447fc000;
      auVar46 = NEON_fmin(auVar45,auVar1,4);
      auVar44._0_4_ = fVar39 * fVar58 * fVar27 * fVar40 * 0.5 + 0.5;
      auVar44._4_4_ = fVar47 * fVar62 * fVar15 * fVar48 * 0.5 + 0.5;
      auVar44._8_4_ = fVar50 * fVar63 * fVar18 * fVar8 * 0.5 + 0.5;
      auVar44._12_4_ = fVar52 * fVar64 * fVar21 * fVar42 * 0.5 + 0.5;
      iVar25 = (int)auVar61._0_4_;
      iVar32 = (int)auVar61._4_4_;
      iVar35 = (int)auVar61._8_4_;
      iVar38 = (int)auVar61._12_4_;
      auVar61 = NEON_fmax(auVar44,ZEXT216(0),4);
      auVar61 = NEON_fmin(auVar61,auVar11,4);
      auVar13._0_4_ = (int)(auVar61._0_4_ * 1023.0 + 0.5);
      auVar13._4_4_ = (int)(auVar61._4_4_ * 1023.0 + 0.5);
      auVar13._8_4_ = (int)(auVar61._8_4_ * 1023.0 + 0.5);
      auVar13._12_4_ = (int)(auVar61._12_4_ * 1023.0 + 0.5);
      auVar2._12_4_ = 0x447fc000;
      auVar61 = NEON_fmin(auVar13,auVar2,4);
      iVar41 = (int)auVar46._0_4_ << 10;
      iVar49 = (int)auVar46._4_4_ << 10;
      iVar51 = (int)auVar46._8_4_ << 10;
      iVar53 = (int)auVar46._12_4_ << 10;
      iVar9 = (int)auVar61._0_4_ << 0x14;
      iVar16 = (int)auVar61._4_4_ << 0x14;
      iVar19 = (int)auVar61._8_4_ << 0x14;
      iVar22 = (int)auVar61._12_4_ << 0x14;
      puVar7[8] = (char)iVar35;
      puVar7[9] = (byte)((uint)iVar51 >> 8) | (byte)((uint)iVar35 >> 8);
      puVar7[10] = (byte)((uint)iVar51 >> 0x10) | (byte)((uint)iVar35 >> 0x10) |
                   (byte)((uint)iVar19 >> 0x10);
      puVar7[0xb] = (byte)((uint)iVar51 >> 0x18) | (byte)((uint)iVar35 >> 0x18) |
                    (byte)((uint)iVar19 >> 0x18);
      puVar7[0xc] = (char)iVar38;
      puVar7[0xd] = (byte)((uint)iVar53 >> 8) | (byte)((uint)iVar38 >> 8);
      puVar7[0xe] = (byte)((uint)iVar53 >> 0x10) | (byte)((uint)iVar38 >> 0x10) |
                    (byte)((uint)iVar22 >> 0x10);
      puVar7[0xf] = (byte)((uint)iVar53 >> 0x18) | (byte)((uint)iVar38 >> 0x18) |
                    (byte)((uint)iVar22 >> 0x18);
      *puVar7 = (char)iVar25;
      puVar7[1] = (byte)((uint)iVar41 >> 8) | (byte)((uint)iVar25 >> 8);
      puVar7[2] = (byte)((uint)iVar41 >> 0x10) | (byte)((uint)iVar25 >> 0x10) |
                  (byte)((uint)iVar9 >> 0x10);
      puVar7[3] = (byte)((uint)iVar41 >> 0x18) | (byte)((uint)iVar25 >> 0x18) |
                  (byte)((uint)iVar9 >> 0x18);
      puVar7[4] = (char)iVar32;
      puVar7[5] = (byte)((uint)iVar49 >> 8) | (byte)((uint)iVar32 >> 8);
      puVar7[6] = (byte)((uint)iVar49 >> 0x10) | (byte)((uint)iVar32 >> 0x10) |
                  (byte)((uint)iVar16 >> 0x10);
      puVar7[7] = (byte)((uint)iVar49 >> 0x18) | (byte)((uint)iVar32 >> 0x18) |
                  (byte)((uint)iVar16 >> 0x18);
      lVar3 = lVar5 + 4;
      uVar66 = lVar5 + 8;
      lVar5 = lVar3;
      puVar7 = puVar7 + 0x10;
    } while (uVar66 <= param_3);
  }
  lVar5 = param_3 - lVar3;
  if (lVar5 != 0) {
    param_1 = param_1 + lVar3 * 4 + 2;
    uVar66 = NEON_fmov(0x3f800000,4);
    puVar4 = (uint *)(param_2 + lVar3 * 4);
    do {
      fVar27 = *param_1;
      fVar8 = param_1[1];
      fVar42 = param_1[-2];
      fVar59 = param_1[-1];
      fVar26 = fVar8 * fVar8 + fVar42 * fVar42 + fVar59 * fVar59 + fVar27 * fVar27;
      if (fVar26 == 0.0) {
        fVar42 = 0.0;
        fVar59 = 0.0;
        uVar54 = 0;
        uVar55 = 0;
        uVar56 = 0;
        uVar57 = 0;
        fVar8 = 1.0;
      }
      else {
        fVar26 = 1.0 / SQRT(fVar26);
        fVar8 = fVar8 * fVar26;
        fVar42 = fVar42 * fVar26;
        fVar59 = fVar59 * fVar26;
        fVar27 = fVar27 * fVar26;
        uVar54 = SUB41(fVar27,0);
        uVar55 = (undefined1)((uint)fVar27 >> 8);
        uVar56 = (undefined1)((uint)fVar27 >> 0x10);
        uVar57 = (undefined1)((uint)fVar27 >> 0x18);
      }
      param_1 = param_1 + 4;
      fVar27 = (float)CONCAT13(uVar57,CONCAT12(uVar56,CONCAT11(uVar55,uVar54)));
      uVar65 = CONCAT44(fVar27,fVar59);
      fVar27 = -fVar27;
      uVar65 = uVar65 ^ (uVar65 ^ CONCAT17((char)((uint)fVar27 >> 0x18),
                                           CONCAT16((char)((uint)fVar27 >> 0x10),
                                                    CONCAT15((char)((uint)fVar27 >> 8),
                                                             CONCAT14(SUB41(fVar27,0),-fVar59))))) &
                        CONCAT44(-(uint)(fVar8 < 0.0),-(uint)(fVar8 < 0.0));
      fVar27 = -fVar8;
      fVar26 = -fVar42;
      if (0.0 <= fVar8) {
        fVar27 = fVar8;
        fVar26 = fVar42;
      }
      fVar8 = (float)_atanf();
      fVar8 = (1.0 / SQRT((1.0 - fVar27 * fVar27) + 1e-06)) * fVar8 * 0.63661975;
      fVar42 = fVar26 * fVar8 * 0.5 + 0.5;
      fVar27 = 0.0;
      if (0.0 <= fVar42) {
        fVar27 = fVar42;
      }
      fVar42 = 1.0;
      if (fVar27 <= 1.0) {
        fVar42 = fVar27;
      }
      fVar27 = (float)uVar65 * fVar8 * 0.5 + 0.5;
      fVar8 = (float)(uVar65 >> 0x20) * fVar8 * 0.5 + 0.5;
      iVar9 = -(uint)(fVar27 < 0.0);
      iVar16 = -(uint)(fVar8 < 0.0);
      fVar27 = (float)CONCAT13((byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18),
                               CONCAT12((byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10),
                                        CONCAT11((byte)((uint)fVar27 >> 8) &
                                                 ~(byte)((uint)iVar9 >> 8),
                                                 SUB41(fVar27,0) & ~(byte)iVar9)));
      uVar65 = CONCAT17((byte)((uint)fVar8 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                        CONCAT16((byte)((uint)fVar8 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                                 CONCAT15((byte)((uint)fVar8 >> 8) & ~(byte)((uint)iVar16 >> 8),
                                          CONCAT14(SUB41(fVar8,0) & ~(byte)iVar16,fVar27))));
      uVar65 = uVar65 ^ (uVar65 ^ uVar66) &
                        CONCAT44(-(uint)((float)(uVar66 >> 0x20) < (float)(uVar65 >> 0x20)),
                                 -(uint)((float)uVar66 < fVar27));
      uVar10 = NEON_ushl(CONCAT44((int)(float)(int)((float)(uVar65 >> 0x20) * 1023.0 + 0.5),
                                  (int)(float)(int)((float)uVar65 * 1023.0 + 0.5)),0x140000000a,4);
      *puVar4 = (uint)uVar10 | (int)(fVar42 * 1023.0 + 0.5) | (uint)((ulong)uVar10 >> 0x20);
      lVar5 = lVar5 + -1;
      puVar4 = puVar4 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 10a006b00; end: 10a006dcb;  */

void FUN_10a006b00(float *param_1,undefined1 *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  long lVar4;
  float *pfVar5;
  uint *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar13;
  float fVar14;
  int iVar15;
  float fVar16;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int iVar17;
  float fVar18;
  int iVar19;
  float fVar20;
  int iVar21;
  float fVar22;
  int iVar23;
  float fVar24;
  int iVar25;
  float fVar26;
  int iVar27;
  float fVar28;
  int iVar29;
  float fVar31;
  int iVar32;
  int iVar33;
  undefined8 uVar30;
  float fVar34;
  int iVar35;
  float fVar36;
  int iVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar48;
  ulong uVar45;
  float fVar49;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar50;
  float fVar51;
  undefined1 auVar52 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  
  if (param_3 < 4) {
    lVar8 = 0;
  }
  else {
    auVar9 = NEON_fmov(0x3f800000,4);
    auVar10 = NEON_fmov(0xbf800000,4);
    lVar4 = 0;
    pfVar5 = param_1;
    puVar7 = param_2;
    do {
      fVar51 = *pfVar5;
      fVar18 = pfVar5[1];
      fVar26 = pfVar5[2];
      fVar38 = pfVar5[3];
      fVar13 = pfVar5[4];
      fVar20 = pfVar5[5];
      fVar31 = pfVar5[6];
      fVar40 = pfVar5[7];
      fVar14 = pfVar5[8];
      fVar22 = pfVar5[9];
      fVar34 = pfVar5[10];
      fVar41 = pfVar5[0xb];
      fVar16 = pfVar5[0xc];
      fVar24 = pfVar5[0xd];
      fVar36 = pfVar5[0xe];
      fVar42 = pfVar5[0xf];
      pfVar5 = pfVar5 + 0x10;
      auVar46._0_4_ = fVar51 * fVar51 + fVar18 * fVar18 + fVar26 * fVar26 + fVar38 * fVar38;
      auVar46._4_4_ = fVar13 * fVar13 + fVar20 * fVar20 + fVar31 * fVar31 + fVar40 * fVar40;
      auVar46._8_4_ = fVar14 * fVar14 + fVar22 * fVar22 + fVar34 * fVar34 + fVar41 * fVar41;
      auVar46._12_4_ = fVar16 * fVar16 + fVar24 * fVar24 + fVar36 * fVar36 + fVar42 * fVar42;
      auVar47._8_4_ = 0x2b8cbccc;
      auVar47._0_8_ = 0x2b8cbccc2b8cbccc;
      auVar47._12_4_ = 0x2b8cbccc;
      auVar47 = NEON_fmax(auVar46,auVar47,4);
      fVar28 = auVar9._0_4_;
      fVar43 = fVar28 / SQRT(auVar47._0_4_);
      fVar44 = auVar9._4_4_;
      fVar48 = fVar44 / SQRT(auVar47._4_4_);
      fVar39 = auVar9._8_4_;
      fVar49 = fVar39 / SQRT(auVar47._8_4_);
      fVar54 = auVar9._12_4_;
      fVar50 = fVar54 / SQRT(auVar47._12_4_);
      fVar53 = ABS(fVar38 * fVar43);
      fVar55 = ABS(fVar40 * fVar48);
      fVar56 = ABS(fVar41 * fVar49);
      fVar57 = ABS(fVar42 * fVar50);
      auVar52._0_4_ = -(uint)(fVar38 * fVar43 < 0.0);
      auVar52._4_4_ = -(uint)(fVar40 * fVar48 < 0.0);
      auVar52._8_4_ = -(uint)(fVar41 * fVar49 < 0.0);
      auVar52._12_4_ = -(uint)(fVar42 * fVar50 < 0.0);
      auVar47 = auVar9 ^ (auVar9 ^ auVar10) & auVar52;
      fVar38 = auVar47._0_4_;
      fVar40 = auVar47._4_4_;
      fVar41 = auVar47._8_4_;
      fVar42 = auVar47._12_4_;
      fVar28 = (fVar28 / (fVar53 + fVar28 + SQRT(fVar53 + fVar53 + 2.0))) * 2.4142137;
      fVar44 = (fVar44 / (fVar55 + fVar44 + SQRT(fVar55 + fVar55 + 2.0))) * 2.4142137;
      fVar39 = (fVar39 / (fVar56 + fVar39 + SQRT(fVar56 + fVar56 + 2.0))) * 2.4142137;
      fVar54 = (fVar54 / (fVar57 + fVar54 + SQRT(fVar57 + fVar57 + 2.0))) * 2.4142137;
      auVar58._0_4_ = fVar51 * fVar43 * fVar38 * fVar28 * 0.5 + 0.5;
      auVar58._4_4_ = fVar13 * fVar48 * fVar40 * fVar44 * 0.5 + 0.5;
      auVar58._8_4_ = fVar14 * fVar49 * fVar41 * fVar39 * 0.5 + 0.5;
      auVar58._12_4_ = fVar16 * fVar50 * fVar42 * fVar54 * 0.5 + 0.5;
      auVar47 = NEON_fmax(auVar58,ZEXT216(0),4);
      auVar47 = NEON_fmin(auVar47,auVar9,4);
      auVar59._0_4_ = (int)(auVar47._0_4_ * 1023.0 + 0.5);
      auVar59._4_4_ = (int)(auVar47._4_4_ * 1023.0 + 0.5);
      auVar59._8_4_ = (int)(auVar47._8_4_ * 1023.0 + 0.5);
      auVar59._12_4_ = (int)(auVar47._12_4_ * 1023.0 + 0.5);
      auVar60._0_4_ = fVar18 * fVar43 * fVar38 * fVar28 * 0.5 + 0.5;
      auVar60._4_4_ = fVar20 * fVar48 * fVar40 * fVar44 * 0.5 + 0.5;
      auVar60._8_4_ = fVar22 * fVar49 * fVar41 * fVar39 * 0.5 + 0.5;
      auVar60._12_4_ = fVar24 * fVar50 * fVar42 * fVar54 * 0.5 + 0.5;
      auVar61._8_4_ = 0x447fc000;
      auVar61._0_8_ = 0x447fc000447fc000;
      auVar61._12_4_ = 0x447fc000;
      auVar47 = NEON_fmin(auVar59,auVar61,4);
      auVar61 = NEON_fmax(auVar60,ZEXT216(0),4);
      auVar61 = NEON_fmin(auVar61,auVar9,4);
      auVar62._0_4_ = (int)(auVar61._0_4_ * 1023.0 + 0.5);
      auVar62._4_4_ = (int)(auVar61._4_4_ * 1023.0 + 0.5);
      auVar62._8_4_ = (int)(auVar61._8_4_ * 1023.0 + 0.5);
      auVar62._12_4_ = (int)(auVar61._12_4_ * 1023.0 + 0.5);
      auVar1._8_4_ = 0x447fc000;
      auVar1._0_8_ = 0x447fc000447fc000;
      auVar1._12_4_ = 0x447fc000;
      auVar61 = NEON_fmin(auVar62,auVar1,4);
      auVar11._0_4_ = fVar26 * fVar43 * fVar38 * fVar28 * 0.5 + 0.5;
      auVar11._4_4_ = fVar31 * fVar48 * fVar40 * fVar44 * 0.5 + 0.5;
      auVar11._8_4_ = fVar34 * fVar49 * fVar41 * fVar39 * 0.5 + 0.5;
      auVar11._12_4_ = fVar36 * fVar50 * fVar42 * fVar54 * 0.5 + 0.5;
      iVar19 = (int)auVar47._0_4_;
      iVar21 = (int)auVar47._4_4_;
      iVar23 = (int)auVar47._8_4_;
      iVar25 = (int)auVar47._12_4_;
      auVar47 = NEON_fmax(auVar11,ZEXT216(0),4);
      auVar47 = NEON_fmin(auVar47,auVar9,4);
      auVar12._0_4_ = (int)(auVar47._0_4_ * 1023.0 + 0.5);
      auVar12._4_4_ = (int)(auVar47._4_4_ * 1023.0 + 0.5);
      auVar12._8_4_ = (int)(auVar47._8_4_ * 1023.0 + 0.5);
      auVar12._12_4_ = (int)(auVar47._12_4_ * 1023.0 + 0.5);
      auVar2._8_4_ = 0x447fc000;
      auVar2._0_8_ = 0x447fc000447fc000;
      auVar2._12_4_ = 0x447fc000;
      auVar47 = NEON_fmin(auVar12,auVar2,4);
      iVar27 = (int)auVar61._0_4_ << 10;
      iVar32 = (int)auVar61._4_4_ << 10;
      iVar35 = (int)auVar61._8_4_ << 10;
      iVar37 = (int)auVar61._12_4_ << 10;
      iVar29 = (int)auVar47._0_4_ << 0x14;
      iVar33 = (int)auVar47._4_4_ << 0x14;
      iVar15 = (int)auVar47._8_4_ << 0x14;
      iVar17 = (int)auVar47._12_4_ << 0x14;
      puVar7[8] = (char)iVar23;
      puVar7[9] = (byte)((uint)iVar35 >> 8) | (byte)((uint)iVar23 >> 8);
      puVar7[10] = (byte)((uint)iVar35 >> 0x10) | (byte)((uint)iVar23 >> 0x10) |
                   (byte)((uint)iVar15 >> 0x10);
      puVar7[0xb] = (byte)((uint)iVar35 >> 0x18) | (byte)((uint)iVar23 >> 0x18) |
                    (byte)((uint)iVar15 >> 0x18);
      puVar7[0xc] = (char)iVar25;
      puVar7[0xd] = (byte)((uint)iVar37 >> 8) | (byte)((uint)iVar25 >> 8);
      puVar7[0xe] = (byte)((uint)iVar37 >> 0x10) | (byte)((uint)iVar25 >> 0x10) |
                    (byte)((uint)iVar17 >> 0x10);
      puVar7[0xf] = (byte)((uint)iVar37 >> 0x18) | (byte)((uint)iVar25 >> 0x18) |
                    (byte)((uint)iVar17 >> 0x18);
      *puVar7 = (char)iVar19;
      puVar7[1] = (byte)((uint)iVar27 >> 8) | (byte)((uint)iVar19 >> 8);
      puVar7[2] = (byte)((uint)iVar27 >> 0x10) | (byte)((uint)iVar19 >> 0x10) |
                  (byte)((uint)iVar29 >> 0x10);
      puVar7[3] = (byte)((uint)iVar27 >> 0x18) | (byte)((uint)iVar19 >> 0x18) |
                  (byte)((uint)iVar29 >> 0x18);
      puVar7[4] = (char)iVar21;
      puVar7[5] = (byte)((uint)iVar32 >> 8) | (byte)((uint)iVar21 >> 8);
      puVar7[6] = (byte)((uint)iVar32 >> 0x10) | (byte)((uint)iVar21 >> 0x10) |
                  (byte)((uint)iVar33 >> 0x10);
      puVar7[7] = (byte)((uint)iVar32 >> 0x18) | (byte)((uint)iVar21 >> 0x18) |
                  (byte)((uint)iVar33 >> 0x18);
      lVar8 = lVar4 + 4;
      uVar3 = lVar4 + 8;
      lVar4 = lVar8;
      puVar7 = puVar7 + 0x10;
    } while (uVar3 <= param_3);
  }
  lVar4 = param_3 - lVar8;
  if (lVar4 != 0) {
    param_1 = param_1 + lVar8 * 4 + 2;
    uVar3 = NEON_fmov(0x3f800000,4);
    puVar6 = (uint *)(param_2 + lVar8 * 4);
    do {
      fVar51 = *param_1;
      fVar28 = param_1[1];
      fVar44 = param_1[-2];
      fVar54 = param_1[-1];
      fVar39 = fVar28 * fVar28 + fVar44 * fVar44 + fVar54 * fVar54 + fVar51 * fVar51;
      if (fVar39 == 0.0) {
        fVar44 = 0.0;
        fVar54 = 0.0;
        fVar51 = 0.0;
        fVar28 = 1.0;
      }
      else {
        fVar39 = 1.0 / SQRT(fVar39);
        fVar28 = fVar28 * fVar39;
        fVar44 = fVar44 * fVar39;
        fVar54 = fVar54 * fVar39;
        fVar51 = fVar51 * fVar39;
      }
      param_1 = param_1 + 4;
      uVar45 = CONCAT44(fVar51,fVar54) ^
               (CONCAT44(fVar51,fVar54) ^ CONCAT44(-fVar51,-fVar54)) &
               CONCAT44(-(uint)(fVar28 < 0.0),-(uint)(fVar28 < 0.0));
      fVar54 = -fVar28;
      fVar39 = -fVar44;
      if (0.0 <= fVar28) {
        fVar54 = fVar28;
        fVar39 = fVar44;
      }
      fVar54 = fVar54 + 1.0 + SQRT(fVar54 * 2.0 + 2.0);
      fVar44 = ((fVar39 * 2.4142137) / fVar54) * 0.5 + 0.5;
      fVar28 = 0.0;
      if (0.0 <= fVar44) {
        fVar28 = fVar44;
      }
      fVar44 = 1.0;
      if (fVar28 <= 1.0) {
        fVar44 = fVar28;
      }
      fVar28 = (((float)uVar45 * 2.4142137) / fVar54) * 0.5 + 0.5;
      fVar39 = (((float)(uVar45 >> 0x20) * 2.4142137) / fVar54) * 0.5 + 0.5;
      iVar29 = -(uint)(fVar28 < 0.0);
      iVar33 = -(uint)(fVar39 < 0.0);
      fVar28 = (float)CONCAT13((byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                               CONCAT12((byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar28 >> 8) &
                                                  ~(byte)((uint)iVar29 >> 8),
                                                  SUB41(fVar28,0) & ~(byte)iVar29)));
      uVar45 = CONCAT17((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18),
                        CONCAT16((byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10),
                                 CONCAT15((byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar33 >> 8),
                                          CONCAT14(SUB41(fVar39,0) & ~(byte)iVar33,fVar28))));
      uVar45 = uVar45 ^ (uVar45 ^ uVar3) &
                        CONCAT44(-(uint)((float)(uVar3 >> 0x20) < (float)(uVar45 >> 0x20)),
                                 -(uint)((float)uVar3 < fVar28));
      uVar30 = NEON_ushl(CONCAT44((int)(float)(int)((float)(uVar45 >> 0x20) * 1023.0 + 0.5),
                                  (int)(float)(int)((float)uVar45 * 1023.0 + 0.5)),0x140000000a,4);
      *puVar6 = (uint)uVar30 | (uint)((ulong)uVar30 >> 0x20) | (int)(fVar44 * 1023.0 + 0.5);
      lVar4 = lVar4 + -1;
      puVar6 = puVar6 + 1;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 10a006dcc; end: 10a006fd3;  */

void FUN_10a006dcc(float *param_1,undefined1 *param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  long lVar11;
  float *pfVar12;
  undefined1 *puVar13;
  long lVar14;
  uint *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar23;
  float fVar24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar25;
  undefined1 auVar22 [16];
  undefined1 auVar26 [16];
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar51;
  float fVar48;
  int iVar49;
  byte bVar52;
  byte bVar55;
  float fVar53;
  int iVar54;
  byte bVar56;
  byte bVar59;
  float fVar57;
  int iVar58;
  byte bVar60;
  byte bVar63;
  float fVar61;
  int iVar62;
  undefined1 auVar50 [16];
  float fVar64;
  int iVar65;
  float fVar66;
  int iVar67;
  float fVar68;
  int iVar69;
  float fVar70;
  int iVar71;
  int iVar72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  short sVar75;
  float fVar77;
  float fVar81;
  float fVar82;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar83;
  int iVar84;
  int iVar86;
  int iVar87;
  int iVar88;
  undefined1 auVar85 [16];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  int iStack_44;
  undefined4 uVar76;
  undefined6 uVar78;
  
  if (param_3 < 4) {
    lVar14 = 0;
  }
  else {
    auVar16 = NEON_fmov(0x3f800000,4);
    auVar17 = NEON_fmov(0xbf800000,4);
    auVar18 = NEON_fmov(0x40400000,4);
    lVar11 = 0;
    pfVar12 = param_1;
    puVar13 = param_2;
    do {
      fVar77 = *pfVar12;
      fVar7 = pfVar12[1];
      fVar48 = pfVar12[2];
      fVar64 = pfVar12[3];
      fVar81 = pfVar12[4];
      fVar8 = pfVar12[5];
      fVar53 = pfVar12[6];
      fVar66 = pfVar12[7];
      fVar82 = pfVar12[8];
      fVar9 = pfVar12[9];
      fVar57 = pfVar12[10];
      fVar68 = pfVar12[0xb];
      fVar83 = pfVar12[0xc];
      fVar10 = pfVar12[0xd];
      fVar61 = pfVar12[0xe];
      fVar70 = pfVar12[0xf];
      pfVar12 = pfVar12 + 0x10;
      auVar20._0_4_ = fVar77 * fVar77 + fVar7 * fVar7 + fVar48 * fVar48 + fVar64 * fVar64;
      auVar20._4_4_ = fVar81 * fVar81 + fVar8 * fVar8 + fVar53 * fVar53 + fVar66 * fVar66;
      auVar20._8_4_ = fVar82 * fVar82 + fVar9 * fVar9 + fVar57 * fVar57 + fVar68 * fVar68;
      auVar20._12_4_ = fVar83 * fVar83 + fVar10 * fVar10 + fVar61 * fVar61 + fVar70 * fVar70;
      auVar21._8_4_ = 0x2b8cbccc;
      auVar21._0_8_ = 0x2b8cbccc2b8cbccc;
      auVar21._12_4_ = 0x2b8cbccc;
      auVar21 = NEON_fmax(auVar20,auVar21,4);
      fVar19 = auVar16._0_4_ / SQRT(auVar21._0_4_);
      fVar23 = auVar16._4_4_ / SQRT(auVar21._4_4_);
      fVar24 = auVar16._8_4_ / SQRT(auVar21._8_4_);
      fVar25 = auVar16._12_4_ / SQRT(auVar21._12_4_);
      auVar26._0_4_ = fVar77 * fVar19;
      auVar26._4_4_ = fVar81 * fVar23;
      auVar26._8_4_ = fVar82 * fVar24;
      auVar26._12_4_ = fVar83 * fVar25;
      auVar73._0_4_ = fVar7 * fVar19;
      auVar73._4_4_ = fVar8 * fVar23;
      auVar73._8_4_ = fVar9 * fVar24;
      auVar73._12_4_ = fVar10 * fVar25;
      auVar74._0_4_ = fVar64 * fVar19;
      auVar74._4_4_ = fVar66 * fVar23;
      auVar74._8_4_ = fVar68 * fVar24;
      auVar74._12_4_ = fVar70 * fVar25;
      auVar22._0_4_ = fVar48 * fVar19;
      auVar22._4_4_ = fVar53 * fVar23;
      auVar22._8_4_ = fVar57 * fVar24;
      auVar22._12_4_ = fVar61 * fVar25;
      iVar49 = -(uint)(ABS(auVar26._0_4_) <= ABS(auVar74._0_4_));
      iVar54 = -(uint)(ABS(auVar26._4_4_) <= ABS(auVar74._4_4_));
      iVar58 = -(uint)(ABS(auVar26._8_4_) <= ABS(auVar74._8_4_));
      iVar62 = -(uint)(ABS(auVar26._12_4_) <= ABS(auVar74._12_4_));
      iVar65 = -(uint)(ABS(auVar73._0_4_) <= ABS(auVar74._0_4_));
      iVar69 = -(uint)(ABS(auVar73._4_4_) <= ABS(auVar74._4_4_));
      iVar84 = -(uint)(ABS(auVar73._8_4_) <= ABS(auVar74._8_4_));
      iVar87 = -(uint)(ABS(auVar73._12_4_) <= ABS(auVar74._12_4_));
      iVar67 = -(uint)(ABS(auVar22._0_4_) <= ABS(auVar74._0_4_));
      iVar71 = -(uint)(ABS(auVar22._4_4_) <= ABS(auVar74._4_4_));
      iVar86 = -(uint)(ABS(auVar22._8_4_) <= ABS(auVar74._8_4_));
      iVar88 = -(uint)(ABS(auVar22._12_4_) <= ABS(auVar74._12_4_));
      bVar27 = (byte)iVar67 & (byte)iVar65 & (byte)iVar49;
      bVar28 = (byte)((uint)iVar67 >> 8) & (byte)((uint)iVar65 >> 8) & (byte)((uint)iVar49 >> 8);
      bVar29 = (byte)((uint)iVar67 >> 0x10) &
               (byte)((uint)iVar65 >> 0x10) & (byte)((uint)iVar49 >> 0x10);
      bVar30 = (byte)((uint)iVar67 >> 0x18) &
               (byte)((uint)iVar65 >> 0x18) & (byte)((uint)iVar49 >> 0x18);
      bVar31 = (byte)iVar71 & (byte)iVar69 & (byte)iVar54;
      bVar32 = (byte)((uint)iVar71 >> 8) & (byte)((uint)iVar69 >> 8) & (byte)((uint)iVar54 >> 8);
      bVar33 = (byte)((uint)iVar71 >> 0x10) &
               (byte)((uint)iVar69 >> 0x10) & (byte)((uint)iVar54 >> 0x10);
      bVar34 = (byte)((uint)iVar71 >> 0x18) &
               (byte)((uint)iVar69 >> 0x18) & (byte)((uint)iVar54 >> 0x18);
      bVar35 = (byte)iVar86 & (byte)iVar84 & (byte)iVar58;
      bVar36 = (byte)((uint)iVar86 >> 8) & (byte)((uint)iVar84 >> 8) & (byte)((uint)iVar58 >> 8);
      bVar37 = (byte)((uint)iVar86 >> 0x10) &
               (byte)((uint)iVar84 >> 0x10) & (byte)((uint)iVar58 >> 0x10);
      bVar38 = (byte)((uint)iVar86 >> 0x18) &
               (byte)((uint)iVar84 >> 0x18) & (byte)((uint)iVar58 >> 0x18);
      bVar39 = (byte)iVar88 & (byte)iVar87 & (byte)iVar62;
      bVar40 = (byte)((uint)iVar88 >> 8) & (byte)((uint)iVar87 >> 8) & (byte)((uint)iVar62 >> 8);
      bVar41 = (byte)((uint)iVar88 >> 0x10) &
               (byte)((uint)iVar87 >> 0x10) & (byte)((uint)iVar62 >> 0x10);
      bVar42 = (byte)((uint)iVar88 >> 0x18) &
               (byte)((uint)iVar87 >> 0x18) & (byte)((uint)iVar62 >> 0x18);
      iVar49 = -(uint)(ABS(auVar73._0_4_) <= ABS(auVar26._0_4_));
      iVar54 = -(uint)(ABS(auVar73._4_4_) <= ABS(auVar26._4_4_));
      iVar58 = -(uint)(ABS(auVar73._8_4_) <= ABS(auVar26._8_4_));
      iVar62 = -(uint)(ABS(auVar73._12_4_) <= ABS(auVar26._12_4_));
      iVar65 = -(uint)(ABS(auVar22._0_4_) <= ABS(auVar26._0_4_));
      iVar67 = -(uint)(ABS(auVar22._4_4_) <= ABS(auVar26._4_4_));
      iVar69 = -(uint)(ABS(auVar22._8_4_) <= ABS(auVar26._8_4_));
      iVar71 = -(uint)(ABS(auVar22._12_4_) <= ABS(auVar26._12_4_));
      bVar47 = (byte)iVar65 & (byte)iVar49;
      bVar51 = (byte)((uint)iVar65 >> 8) & (byte)((uint)iVar49 >> 8);
      bVar52 = (byte)iVar67 & (byte)iVar54;
      bVar55 = (byte)((uint)iVar67 >> 8) & (byte)((uint)iVar54 >> 8);
      bVar56 = (byte)iVar69 & (byte)iVar58;
      bVar59 = (byte)((uint)iVar69 >> 8) & (byte)((uint)iVar58 >> 8);
      bVar60 = (byte)iVar71 & (byte)iVar62;
      bVar63 = (byte)((uint)iVar71 >> 8) & (byte)((uint)iVar62 >> 8);
      sVar75 = CONCAT11(bVar51 & ~bVar28,bVar47 & ~bVar27);
      uVar76 = CONCAT13(bVar55 & ~bVar32,CONCAT12(bVar52 & ~bVar31,sVar75));
      uVar78 = CONCAT15(bVar59 & ~bVar36,CONCAT14(bVar56 & ~bVar35,uVar76));
      auVar79._0_4_ = (int)sVar75;
      auVar79._4_4_ = (int)(short)((uint)uVar76 >> 0x10);
      auVar79._8_4_ = (int)(short)((uint6)uVar78 >> 0x20);
      auVar79._12_4_ =
           (int)(short)(CONCAT17(bVar63 & ~bVar40,CONCAT16(bVar60 & ~bVar39,uVar78)) >> 0x30);
      iVar84 = -(uint)(ABS(auVar22._0_4_) <= ABS(auVar73._0_4_));
      iVar86 = -(uint)(ABS(auVar22._4_4_) <= ABS(auVar73._4_4_));
      iVar87 = -(uint)(ABS(auVar22._8_4_) <= ABS(auVar73._8_4_));
      iVar88 = -(uint)(ABS(auVar22._12_4_) <= ABS(auVar73._12_4_));
      auVar50._0_8_ =
           CONCAT17((byte)((uint)iVar67 >> 0x18) & (byte)((uint)iVar54 >> 0x18) |
                    ~(byte)((uint)iVar86 >> 0x18) | bVar34,
                    CONCAT16((byte)((uint)iVar67 >> 0x10) & (byte)((uint)iVar54 >> 0x10) |
                             ~(byte)((uint)iVar86 >> 0x10) | bVar33,
                             CONCAT15(bVar55 | ~(byte)((uint)iVar86 >> 8) | bVar32,
                                      CONCAT14(bVar52 | ~(byte)iVar86 | bVar31,
                                               CONCAT13((byte)((uint)iVar65 >> 0x18) &
                                                        (byte)((uint)iVar49 >> 0x18) |
                                                        ~(byte)((uint)iVar84 >> 0x18) | bVar30,
                                                        CONCAT12((byte)((uint)iVar65 >> 0x10) &
                                                                 (byte)((uint)iVar49 >> 0x10) |
                                                                 ~(byte)((uint)iVar84 >> 0x10) |
                                                                 bVar29,CONCAT11(bVar51 | ~(byte)((
                                                  uint)iVar84 >> 8) | bVar28,
                                                  bVar47 | ~(byte)iVar84 | bVar27)))))));
      auVar50[8] = bVar56 | ~(byte)iVar87 | bVar35;
      auVar50[9] = bVar59 | ~(byte)((uint)iVar87 >> 8) | bVar36;
      auVar50[10] = (byte)((uint)iVar69 >> 0x10) & (byte)((uint)iVar58 >> 0x10) |
                    ~(byte)((uint)iVar87 >> 0x10) | bVar37;
      auVar50[0xb] = (byte)((uint)iVar69 >> 0x18) & (byte)((uint)iVar58 >> 0x18) |
                     ~(byte)((uint)iVar87 >> 0x18) | bVar38;
      auVar50[0xc] = bVar60 | ~(byte)iVar88 | bVar39;
      auVar50[0xd] = bVar63 | ~(byte)((uint)iVar88 >> 8) | bVar40;
      auVar50[0xe] = (byte)((uint)iVar71 >> 0x10) & (byte)((uint)iVar62 >> 0x10) |
                     ~(byte)((uint)iVar88 >> 0x10) | bVar41;
      auVar50[0xf] = (byte)((uint)iVar71 >> 0x18) & (byte)((uint)iVar62 >> 0x18) |
                     ~(byte)((uint)iVar88 >> 0x18) | bVar42;
      auVar85._8_8_ = auVar50._8_8_;
      auVar85._0_8_ = auVar50._0_8_;
      auVar21 = auVar73 ^ (auVar73 ^ auVar22) & auVar85;
      auVar21 = auVar21 ^ (auVar21 ^ auVar26) & auVar79;
      auVar3[1] = bVar28;
      auVar3[0] = bVar27;
      auVar3[2] = bVar29;
      auVar3[3] = bVar30;
      auVar3[4] = bVar31;
      auVar3[5] = bVar32;
      auVar3[6] = bVar33;
      auVar3[7] = bVar34;
      auVar3[8] = bVar35;
      auVar3[9] = bVar36;
      auVar3[10] = bVar37;
      auVar3[0xb] = bVar38;
      auVar3[0xc] = bVar39;
      auVar3[0xd] = bVar40;
      auVar3[0xe] = bVar41;
      auVar3[0xf] = bVar42;
      auVar21 = auVar21 ^ (auVar21 ^ auVar74) & auVar3;
      auVar80._0_4_ = -(uint)(auVar21._0_4_ < 0.0);
      auVar80._4_4_ = -(uint)(auVar21._4_4_ < 0.0);
      auVar80._8_4_ = -(uint)(auVar21._8_4_ < 0.0);
      auVar80._12_4_ = -(uint)(auVar21._12_4_ < 0.0);
      auVar21 = auVar16 ^ (auVar16 ^ auVar17) & auVar80;
      auVar4[1] = bVar28;
      auVar4[0] = bVar27;
      auVar4[2] = bVar29;
      auVar4[3] = bVar30;
      auVar4[4] = bVar31;
      auVar4[5] = bVar32;
      auVar4[6] = bVar33;
      auVar4[7] = bVar34;
      auVar4[8] = bVar35;
      auVar4[9] = bVar36;
      auVar4[10] = bVar37;
      auVar4[0xb] = bVar38;
      auVar4[0xc] = bVar39;
      auVar4[0xd] = bVar40;
      auVar4[0xe] = bVar41;
      auVar4[0xf] = bVar42;
      auVar74 = auVar74 ^ (auVar74 ^ auVar26) & auVar4;
      fVar77 = auVar21._0_4_;
      fVar81 = auVar21._4_4_;
      fVar82 = auVar21._8_4_;
      fVar83 = auVar21._12_4_;
      iVar49 = -(uint)((int)((uint)CONCAT12(bVar31 | bVar52,(ushort)(bVar27 | bVar47)) << 0x1f) < 0)
      ;
      iVar54 = -(uint)((int)((uint)(bVar31 | bVar52) << 0x1f) < 0);
      bVar47 = (byte)iVar54;
      bVar51 = (byte)((uint)iVar54 >> 8);
      bVar52 = (byte)((uint)iVar54 >> 0x10);
      bVar55 = (byte)((uint)iVar54 >> 0x18);
      iVar54 = -(uint)((int)((uint)(bVar35 | bVar56) << 0x1f) < 0);
      bVar56 = (byte)iVar54;
      bVar59 = (byte)((uint)iVar54 >> 8);
      bVar63 = (byte)((uint)iVar54 >> 0x10);
      bVar43 = (byte)((uint)iVar54 >> 0x18);
      iVar54 = -(uint)((int)((uint)(bVar39 | bVar60) << 0x1f) < 0);
      bVar60 = (byte)iVar54;
      bVar44 = (byte)((uint)iVar54 >> 8);
      bVar45 = (byte)((uint)iVar54 >> 0x10);
      bVar46 = (byte)((uint)iVar54 >> 0x18);
      auVar5[4] = bVar47;
      auVar5._0_4_ = iVar49;
      auVar5[5] = bVar51;
      auVar5[6] = bVar52;
      auVar5[7] = bVar55;
      auVar5[8] = bVar56;
      auVar5[9] = bVar59;
      auVar5[10] = bVar63;
      auVar5[0xb] = bVar43;
      auVar5[0xc] = bVar60;
      auVar5[0xd] = bVar44;
      auVar5[0xe] = bVar45;
      auVar5[0xf] = bVar46;
      auVar26 = auVar26 ^ (auVar26 ^ auVar73) & auVar5;
      iVar86 = (int)(float)(int)(auVar74._0_4_ * fVar77 * 511.5 + 511.5);
      iVar87 = (int)(float)(int)(auVar74._4_4_ * fVar81 * 511.5 + 511.5);
      iVar88 = (int)(float)(int)(auVar74._8_4_ * fVar82 * 511.5 + 511.5);
      iVar72 = (int)(float)(int)(auVar74._12_4_ * fVar83 * 511.5 + 511.5);
      auVar6[4] = bVar47;
      auVar6._0_4_ = iVar49;
      auVar6[5] = bVar51;
      auVar6[6] = bVar52;
      auVar6[7] = bVar55;
      auVar6[8] = bVar56;
      auVar6[9] = bVar59;
      auVar6[10] = bVar63;
      auVar6[0xb] = bVar43;
      auVar6[0xc] = bVar60;
      auVar6[0xd] = bVar44;
      auVar6[0xe] = bVar45;
      auVar6[0xf] = bVar46;
      auVar22 = auVar22 ^ (auVar22 ^ auVar73 ^ (auVar73 ^ auVar22) & ~auVar50) & ~auVar6;
      auVar2._8_4_ = 0x40000000;
      auVar2._0_8_ = 0x4000000040000000;
      auVar2._12_4_ = 0x40000000;
      auVar21 = auVar16 ^ (auVar16 ^ auVar2) & auVar50;
      iVar67 = (int)(float)(int)(auVar26._0_4_ * fVar77 * 511.5 + 511.5) << 10;
      iVar69 = (int)(float)(int)(auVar26._4_4_ * fVar81 * 511.5 + 511.5) << 10;
      iVar71 = (int)(float)(int)(auVar26._8_4_ * fVar82 * 511.5 + 511.5) << 10;
      iVar84 = (int)(float)(int)(auVar26._12_4_ * fVar83 * 511.5 + 511.5) << 10;
      iVar54 = (int)(float)(int)(auVar22._0_4_ * fVar77 * 511.5 + 511.5) << 0x14;
      iVar58 = (int)(float)(int)(auVar22._4_4_ * fVar81 * 511.5 + 511.5) << 0x14;
      iVar62 = (int)(float)(int)(auVar22._8_4_ * fVar82 * 511.5 + 511.5) << 0x14;
      iVar65 = (int)(float)(int)(auVar22._12_4_ * fVar83 * 511.5 + 511.5) << 0x14;
      puVar13[8] = (char)iVar88;
      puVar13[9] = (byte)((uint)iVar88 >> 8) | (byte)((uint)iVar71 >> 8);
      puVar13[10] = (byte)((uint)iVar88 >> 0x10) | (byte)((uint)iVar71 >> 0x10) |
                    (byte)((uint)iVar62 >> 0x10);
      puVar13[0xb] = (byte)((uint)((int)(float)CONCAT13(auVar21[0xb] & ~bVar43 |
                                                        bVar38 & auVar18[0xb],
                                                        CONCAT12(auVar21[10] & ~bVar63 |
                                                                 bVar37 & auVar18[10],
                                                                 CONCAT11(auVar21[9] & ~bVar59 |
                                                                          bVar36 & auVar18[9],
                                                                          auVar21[8] & ~bVar56 |
                                                                          bVar35 & auVar18[8]))) <<
                                  0x1e) >> 0x18) | (byte)((uint)iVar88 >> 0x18) |
                     (byte)((uint)iVar71 >> 0x18) | (byte)((uint)iVar62 >> 0x18);
      puVar13[0xc] = (char)iVar72;
      puVar13[0xd] = (byte)((uint)iVar72 >> 8) | (byte)((uint)iVar84 >> 8);
      puVar13[0xe] = (byte)((uint)iVar72 >> 0x10) | (byte)((uint)iVar84 >> 0x10) |
                     (byte)((uint)iVar65 >> 0x10);
      puVar13[0xf] = (byte)((uint)((int)(float)CONCAT13(auVar21[0xf] & ~bVar46 |
                                                        bVar42 & auVar18[0xf],
                                                        CONCAT12(auVar21[0xe] & ~bVar45 |
                                                                 bVar41 & auVar18[0xe],
                                                                 CONCAT11(auVar21[0xd] & ~bVar44 |
                                                                          bVar40 & auVar18[0xd],
                                                                          auVar21[0xc] & ~bVar60 |
                                                                          bVar39 & auVar18[0xc])))
                                  << 0x1e) >> 0x18) | (byte)((uint)iVar72 >> 0x18) |
                     (byte)((uint)iVar84 >> 0x18) | (byte)((uint)iVar65 >> 0x18);
      *puVar13 = (char)iVar86;
      puVar13[1] = (byte)((uint)iVar86 >> 8) | (byte)((uint)iVar67 >> 8);
      puVar13[2] = (byte)((uint)iVar86 >> 0x10) | (byte)((uint)iVar67 >> 0x10) |
                   (byte)((uint)iVar54 >> 0x10);
      puVar13[3] = (byte)((uint)((int)(float)CONCAT13(auVar21[3] & ~(byte)((uint)iVar49 >> 0x18) |
                                                      bVar30 & auVar18[3],
                                                      CONCAT12(auVar21[2] &
                                                               ~(byte)((uint)iVar49 >> 0x10) |
                                                               bVar29 & auVar18[2],
                                                               CONCAT11(auVar21[1] &
                                                                        ~(byte)((uint)iVar49 >> 8) |
                                                                        bVar28 & auVar18[1],
                                                                        auVar21[0] & ~(byte)iVar49 |
                                                                        bVar27 & auVar18[0]))) <<
                                0x1e) >> 0x18) | (byte)((uint)iVar86 >> 0x18) |
                   (byte)((uint)iVar67 >> 0x18) | (byte)((uint)iVar54 >> 0x18);
      puVar13[4] = (char)iVar87;
      puVar13[5] = (byte)((uint)iVar87 >> 8) | (byte)((uint)iVar69 >> 8);
      puVar13[6] = (byte)((uint)iVar87 >> 0x10) | (byte)((uint)iVar69 >> 0x10) |
                   (byte)((uint)iVar58 >> 0x10);
      puVar13[7] = (byte)((uint)((int)(float)CONCAT13(auVar21[7] & ~bVar55 | bVar34 & auVar18[7],
                                                      CONCAT12(auVar21[6] & ~bVar52 |
                                                               bVar33 & auVar18[6],
                                                               CONCAT11(auVar21[5] & ~bVar51 |
                                                                        bVar32 & auVar18[5],
                                                                        auVar21[4] & ~bVar47 |
                                                                        bVar31 & auVar18[4]))) <<
                                0x1e) >> 0x18) | (byte)((uint)iVar87 >> 0x18) |
                   (byte)((uint)iVar69 >> 0x18) | (byte)((uint)iVar58 >> 0x18);
      lVar14 = lVar11 + 4;
      uVar1 = lVar11 + 8;
      lVar11 = lVar14;
      puVar13 = puVar13 + 0x10;
    } while (uVar1 <= param_3);
  }
  lVar11 = param_3 - lVar14;
  if (lVar11 != 0) {
    param_1 = param_1 + lVar14 * 4;
    puVar15 = (uint *)(param_2 + lVar14 * 4);
    do {
      func_0x00010a005e80(&fStack_50,param_1);
      *puVar15 = (int)(fStack_50 * 511.5 + 511.5) | (int)(fStack_4c * 511.5 + 511.5) << 10 |
                 iStack_44 << 0x1e | (int)(fStack_48 * 511.5 + 511.5) << 0x14;
      param_1 = param_1 + 4;
      lVar11 = lVar11 + -1;
      puVar15 = puVar15 + 1;
    } while (lVar11 != 0);
  }
  return;
}



/* Entry: 10a006fd4; end: 10a007297;  */

void FUN_10a006fd4(undefined1 (*param_1) [16],float *param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  float *pfVar10;
  undefined1 (*pauVar11) [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  int iVar33;
  int iVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  ulong uVar38;
  undefined8 uVar39;
  float fVar41;
  undefined1 auVar40 [16];
  float fVar42;
  float fVar43;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  if (param_3 < 4) {
    lVar9 = 0;
  }
  else {
    auVar12 = NEON_fmov(0xbf800000,4);
    auVar40 = NEON_fmov(0x3f800000,4);
    pfVar10 = param_2;
    lVar8 = 0;
    uVar38 = param_3;
    pauVar11 = param_1;
    do {
      auVar17 = *pauVar11;
      auVar15._0_6_ =
           CONCAT15(auVar17[5],CONCAT14(auVar17[4],(uint)(auVar17._0_2_ & 0x3ff))) & 0x3ffffffffff;
      auVar15._6_2_ = 0;
      auVar15[8] = auVar17[8];
      auVar15[9] = auVar17[9] & 3;
      auVar15._10_2_ = 0;
      auVar15[0xc] = auVar17[0xc];
      auVar15[0xd] = auVar17[0xd] & 3;
      auVar15._14_2_ = 0;
      uVar2 = auVar17._4_4_ >> 10;
      uVar3 = auVar17._8_4_ >> 10;
      uVar4 = auVar17._12_4_ >> 10;
      auVar13._0_8_ = CONCAT44(auVar17._4_4_ >> 0x14,auVar17._0_4_ >> 0x14) & 0xfffff3fffffff3ff;
      auVar13._8_4_ = auVar17._8_4_ >> 0x14 & 0xfffff3ff;
      auVar13._12_4_ = auVar17._12_4_ >> 0x14 & 0xfffff3ff;
      auVar16 = NEON_ucvtf(auVar15,4);
      fStack_6c = auVar12._4_4_;
      fStack_68 = auVar12._8_4_;
      fStack_64 = auVar12._12_4_;
      auVar14._6_2_ = 0;
      auVar14._0_6_ =
           CONCAT15((char)(uVar2 >> 8),
                    CONCAT14((char)uVar2,(uint)((ushort)(auVar17._0_4_ >> 10) & 0x3ff))) &
           0x3ffffffffff;
      auVar14[8] = (char)uVar3;
      auVar14[9] = (byte)(uVar3 >> 8) & 3;
      auVar14._10_2_ = 0;
      auVar14[0xc] = (char)uVar4;
      auVar14[0xd] = (byte)(uVar4 >> 8) & 3;
      auVar14._14_2_ = 0;
      auVar17 = NEON_ucvtf(auVar14,4);
      auVar14 = NEON_ucvtf(auVar13,4);
      fVar42 = auVar12._0_4_;
      fVar43 = fVar42 + auVar16._0_4_ * 0.0009775171 * 2.0;
      fVar18 = fStack_6c + auVar16._4_4_ * 0.0009775171 * 2.0;
      fVar19 = fStack_68 + auVar16._8_4_ * 0.0009775171 * 2.0;
      fVar20 = fStack_64 + auVar16._12_4_ * 0.0009775171 * 2.0;
      fVar35 = fVar42 + auVar17._0_4_ * 0.0009775171 * 2.0;
      fVar36 = fStack_6c + auVar17._4_4_ * 0.0009775171 * 2.0;
      fVar37 = fStack_68 + auVar17._8_4_ * 0.0009775171 * 2.0;
      fVar41 = fStack_64 + auVar17._12_4_ * 0.0009775171 * 2.0;
      fVar42 = fVar42 + auVar14._0_4_ * 0.0009775171 * 2.0;
      fStack_6c = fStack_6c + auVar14._4_4_ * 0.0009775171 * 2.0;
      fStack_68 = fStack_68 + auVar14._8_4_ * 0.0009775171 * 2.0;
      fStack_64 = fStack_64 + auVar14._12_4_ * 0.0009775171 * 2.0;
      fVar21 = fVar43 * fVar43 + fVar35 * fVar35 + fVar42 * fVar42;
      fVar22 = fVar18 * fVar18 + fVar36 * fVar36 + fStack_6c * fStack_6c;
      fVar23 = fVar19 * fVar19 + fVar37 * fVar37 + fStack_68 * fStack_68;
      fVar24 = fVar20 * fVar20 + fVar41 * fVar41 + fStack_64 * fStack_64;
      iVar5 = -(uint)(auVar40._0_4_ <= fVar21);
      iVar33 = -(uint)(auVar40._4_4_ <= fVar22);
      bVar29 = (byte)iVar33;
      bVar30 = (byte)((uint)iVar33 >> 8);
      bVar31 = (byte)((uint)iVar33 >> 0x10);
      bVar32 = (byte)((uint)iVar33 >> 0x18);
      iVar33 = -(uint)(auVar40._8_4_ <= fVar23);
      iVar34 = -(uint)(auVar40._12_4_ <= fVar24);
      auVar17[4] = bVar29;
      auVar17._0_4_ = iVar5;
      auVar17[5] = bVar30;
      auVar17[6] = bVar31;
      auVar17[7] = bVar32;
      auVar17._8_4_ = iVar33;
      auVar17._12_4_ = iVar34;
      auVar16[4] = bVar29;
      auVar16._0_4_ = iVar5;
      auVar16[5] = bVar30;
      auVar16[6] = bVar31;
      auVar16[7] = bVar32;
      auVar16._8_4_ = iVar33;
      auVar16._12_4_ = iVar34;
      auVar14 = NEON_ext(auVar17,auVar16,8,1);
      bVar25 = (byte)iVar5 | auVar14[0];
      bVar26 = (byte)((uint)iVar5 >> 8) | auVar14[1];
      bVar27 = (byte)((uint)iVar5 >> 0x10) | auVar14[2];
      bVar28 = (byte)((uint)iVar5 >> 0x18) | auVar14[3];
      bVar29 = bVar29 | auVar14[4];
      bVar30 = bVar30 | auVar14[5];
      bVar31 = bVar31 | auVar14[6];
      bVar32 = bVar32 | auVar14[7];
      uVar6 = NEON_umaxp(CONCAT17(bVar32,CONCAT16(bVar31,CONCAT15(bVar30,CONCAT14(bVar29,CONCAT13(
                                                  bVar28,CONCAT12(bVar27,CONCAT11(bVar26,bVar25)))))
                                                 )),
                         CONCAT17(bVar32,CONCAT16(bVar31,CONCAT15(bVar30,CONCAT14(bVar29,CONCAT13(
                                                  bVar28,CONCAT12(bVar27,CONCAT11(bVar26,bVar25)))))
                                                 )),4);
      if ((int)uVar6 == 0) {
        *pfVar10 = fVar35;
        pfVar10[1] = fVar42;
        pfVar10[2] = SQRT(auVar40._0_4_ - fVar21);
        pfVar10[3] = fVar43;
        pfVar10[4] = fVar36;
        pfVar10[5] = fStack_6c;
        pfVar10[6] = SQRT(auVar40._4_4_ - fVar22);
        pfVar10[7] = fVar18;
        pfVar10[8] = fVar37;
        pfVar10[9] = fStack_68;
        pfVar10[10] = SQRT(auVar40._8_4_ - fVar23);
        pfVar10[0xb] = fVar19;
        pfVar10[0xc] = fVar41;
        pfVar10[0xd] = fStack_64;
        pfVar10[0xe] = SQRT(auVar40._12_4_ - fVar24);
        pfVar10[0xf] = fVar20;
      }
      else {
        uVar1 = uVar38;
        if (3 < uVar38) {
          uVar1 = 4;
        }
        FUN_10a009298(pauVar11,pfVar10,uVar1);
      }
      lVar9 = lVar8 + 4;
      uVar1 = lVar8 + 8;
      pfVar10 = pfVar10 + 0x10;
      uVar38 = uVar38 - 4;
      lVar8 = lVar9;
      pauVar11 = pauVar11 + 1;
    } while (uVar1 <= param_3);
  }
  lVar8 = param_3 - lVar9;
  if (lVar8 != 0) {
    param_2 = param_2 + lVar9 * 4 + 3;
    uVar6 = NEON_fmov(0xbf800000,4);
    puVar7 = (uint *)(*param_1 + lVar9 * 4);
    do {
      uVar2 = *puVar7;
      fVar35 = (float)(uVar2 & 0x3ff) * 0.0009775171;
      uVar38 = NEON_ushl(CONCAT44(uVar2,uVar2),0xffffffecfffffff6,4);
      uVar39 = NEON_ucvtf(uVar38 & 0x3ff000003ff,4);
      fVar36 = fVar35 + fVar35 + -1.0;
      fVar35 = (float)uVar39 * 0.0009775171;
      fVar41 = (float)((ulong)uVar39 >> 0x20) * 0.0009775171;
      fVar37 = fVar35 + fVar35 + (float)uVar6;
      fVar41 = fVar41 + fVar41 + (float)((ulong)uVar6 >> 0x20);
      fVar42 = fVar41 * fVar41 + fVar36 * fVar36 + fVar37 * fVar37;
      fVar43 = 1.0 / SQRT(fVar42);
      fVar35 = SQRT(1.0 - fVar42);
      uVar39 = CONCAT44(fVar41,fVar37);
      if (1.0 <= fVar42) {
        fVar35 = fVar43 * 0.0;
        uVar39 = CONCAT44(fVar41 * fVar43,fVar37 * fVar43);
      }
      *(undefined8 *)(param_2 + -3) = uVar39;
      if (1.0 <= fVar42) {
        fVar36 = fVar36 * fVar43;
      }
      param_2[-1] = fVar35;
      *param_2 = fVar36;
      param_2 = param_2 + 4;
      lVar8 = lVar8 + -1;
      puVar7 = puVar7 + 1;
    } while (lVar8 != 0);
  }
  return;
}



/* Entry: 10a007298; end: 10a00740f;  */

void FUN_10a007298(undefined1 (*param_1) [16],float *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  float *pfVar3;
  uint *puVar4;
  undefined1 (*pauVar5) [16];
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar14;
  float fVar15;
  undefined1 auVar13 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar20;
  float fVar21;
  uint uVar22;
  float fVar23;
  uint uVar24;
  undefined1 auVar19 [16];
  float fVar25;
  float fVar26;
  float fVar28;
  float fVar30;
  undefined8 uVar29;
  float fVar32;
  float fVar33;
  float fVar35;
  float fVar37;
  float fVar27;
  float fVar31;
  float fVar34;
  float fVar36;
  
  if (param_3 < 4) {
    lVar6 = 0;
  }
  else {
    auVar8 = NEON_fmov(0xbf800000,4);
    auVar9 = NEON_fmov(0x3f800000,4);
    lVar2 = 0;
    pfVar3 = param_2;
    pauVar5 = param_1;
    do {
      auVar11 = *pauVar5;
      auVar13._0_6_ =
           CONCAT15(auVar11[5],CONCAT14(auVar11[4],(uint)(auVar11._0_2_ & 0x3ff))) & 0x3ffffffffff;
      auVar13._6_2_ = 0;
      auVar13[8] = auVar11[8];
      auVar13[9] = auVar11[9] & 3;
      auVar13._10_2_ = 0;
      auVar13[0xc] = auVar11[0xc];
      auVar13[0xd] = auVar11[0xd] & 3;
      auVar13._14_2_ = 0;
      uVar20 = auVar11._4_4_ >> 10;
      uVar22 = auVar11._8_4_ >> 10;
      uVar24 = auVar11._12_4_ >> 10;
      auVar19._0_6_ =
           CONCAT15((char)(uVar20 >> 8),
                    CONCAT14((char)uVar20,(uint)((ushort)(auVar11._0_4_ >> 10) & 0x3ff))) &
           0x3ffffffffff;
      auVar19._6_2_ = 0;
      auVar19[8] = (undefined1)uVar22;
      auVar19[9] = (byte)(uVar22 >> 8) & 3;
      auVar19._10_2_ = 0;
      auVar19[0xc] = (undefined1)uVar24;
      auVar19[0xd] = (byte)(uVar24 >> 8) & 3;
      auVar19._14_2_ = 0;
      auVar10._0_8_ = CONCAT44(auVar11._4_4_ >> 0x14,auVar11._0_4_ >> 0x14) & 0xfffff3fffffff3ff;
      auVar10._8_4_ = auVar11._8_4_ >> 0x14 & 0xfffff3ff;
      auVar10._12_4_ = auVar11._12_4_ >> 0x14 & 0xfffff3ff;
      auVar13 = NEON_ucvtf(auVar13,4);
      auVar19 = NEON_ucvtf(auVar19,4);
      auVar11 = NEON_ucvtf(auVar10,4);
      fVar27 = auVar8._0_4_;
      fVar31 = auVar8._4_4_;
      fVar26 = fVar27 + auVar13._0_4_ * 0.0009775171 * 2.0;
      fVar30 = fVar31 + auVar13._4_4_ * 0.0009775171 * 2.0;
      fVar34 = auVar8._8_4_;
      fVar36 = auVar8._12_4_;
      fVar33 = fVar34 + auVar13._8_4_ * 0.0009775171 * 2.0;
      fVar35 = fVar36 + auVar13._12_4_ * 0.0009775171 * 2.0;
      fVar12 = fVar27 + auVar19._0_4_ * 0.0009775171 * 2.0;
      fVar14 = fVar31 + auVar19._4_4_ * 0.0009775171 * 2.0;
      fVar15 = fVar34 + auVar19._8_4_ * 0.0009775171 * 2.0;
      fVar16 = fVar36 + auVar19._12_4_ * 0.0009775171 * 2.0;
      fVar17 = fVar27 + auVar11._0_4_ * 0.0009775171 * 2.0;
      fVar21 = fVar31 + auVar11._4_4_ * 0.0009775171 * 2.0;
      fVar23 = fVar34 + auVar11._8_4_ * 0.0009775171 * 2.0;
      fVar25 = fVar36 + auVar11._12_4_ * 0.0009775171 * 2.0;
      fVar18 = auVar9._0_4_ / (fVar26 * fVar26 + fVar12 * fVar12 + fVar17 * fVar17 + auVar9._0_4_);
      fVar28 = auVar9._4_4_ / (fVar30 * fVar30 + fVar14 * fVar14 + fVar21 * fVar21 + auVar9._4_4_);
      fVar32 = auVar9._8_4_ / (fVar33 * fVar33 + fVar15 * fVar15 + fVar23 * fVar23 + auVar9._8_4_);
      fVar37 = auVar9._12_4_ / (fVar35 * fVar35 + fVar16 * fVar16 + fVar25 * fVar25 + auVar9._12_4_)
      ;
      fVar18 = fVar18 + fVar18;
      fVar28 = fVar28 + fVar28;
      fVar32 = fVar32 + fVar32;
      fVar37 = fVar37 + fVar37;
      *pfVar3 = fVar26 * fVar18;
      pfVar3[1] = fVar12 * fVar18;
      pfVar3[2] = fVar17 * fVar18;
      pfVar3[3] = fVar18 + fVar27;
      pfVar3[4] = fVar30 * fVar28;
      pfVar3[5] = fVar14 * fVar28;
      pfVar3[6] = fVar21 * fVar28;
      pfVar3[7] = fVar28 + fVar31;
      pfVar3[8] = fVar33 * fVar32;
      pfVar3[9] = fVar15 * fVar32;
      pfVar3[10] = fVar23 * fVar32;
      pfVar3[0xb] = fVar32 + fVar34;
      pfVar3[0xc] = fVar35 * fVar37;
      pfVar3[0xd] = fVar16 * fVar37;
      pfVar3[0xe] = fVar25 * fVar37;
      pfVar3[0xf] = fVar37 + fVar36;
      pfVar3 = pfVar3 + 0x10;
      lVar6 = lVar2 + 4;
      uVar1 = lVar2 + 8;
      lVar2 = lVar6;
      pauVar5 = pauVar5 + 1;
    } while (uVar1 <= param_3);
  }
  lVar2 = param_3 - lVar6;
  if (lVar2 != 0) {
    uVar7 = NEON_fmov(0xbf800000,4);
    puVar4 = (uint *)(*param_1 + lVar6 * 4);
    pfVar3 = param_2 + lVar6 * 4;
    do {
      uVar20 = *puVar4;
      fVar18 = (float)(uVar20 >> 0x14 & 0x3ff) * 0.0009775171;
      uVar29 = NEON_ucvtf(CONCAT44(uVar20 >> 10,uVar20) & 0x3ff000003ff,4);
      fVar28 = (float)uVar29 * 0.0009775171;
      fVar32 = (float)((ulong)uVar29 >> 0x20) * 0.0009775171;
      fVar28 = fVar28 + fVar28 + (float)uVar7;
      fVar32 = fVar32 + fVar32 + (float)((ulong)uVar7 >> 0x20);
      fVar18 = fVar18 + fVar18 + -1.0;
      fVar37 = 2.0 / (fVar18 * fVar18 + fVar28 * fVar28 + fVar32 * fVar32 + 1.0);
      pfVar3[2] = fVar18 * fVar37;
      pfVar3[3] = fVar37 + -1.0;
      *pfVar3 = fVar28 * fVar37;
      pfVar3[1] = fVar32 * fVar37;
      lVar2 = lVar2 + -1;
      puVar4 = puVar4 + 1;
      pfVar3 = pfVar3 + 4;
    } while (lVar2 != 0);
  }
  return;
}



/* Entry: 10a007410; end: 10a0076bf;  */

void FUN_10a007410(undefined1 (*param_1) [16],float *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  float *pfVar5;
  undefined1 (*pauVar6) [16];
  float fVar7;
  undefined8 uVar8;
  float fVar13;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auVar14 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  
  if (param_3 < 4) {
    lVar2 = 0;
  }
  else {
    auVar9 = NEON_fmov(0xbf800000,4);
    auVar10 = NEON_fmov(0x3f800000,4);
    lVar4 = 0;
    pfVar5 = param_2;
    pauVar6 = param_1;
    do {
      auVar12 = *pauVar6;
      uVar15 = auVar12._4_4_ >> 10;
      uVar16 = auVar12._8_4_ >> 10;
      uVar17 = auVar12._12_4_ >> 10;
      auVar18._0_6_ =
           CONCAT15(auVar12[5],CONCAT14(auVar12[4],(uint)(auVar12._0_2_ & 0x3ff))) & 0x3ffffffffff;
      auVar18._6_2_ = 0;
      auVar18[8] = auVar12[8];
      auVar18[9] = auVar12[9] & 3;
      auVar18._10_2_ = 0;
      auVar18[0xc] = auVar12[0xc];
      auVar18[0xd] = auVar12[0xd] & 3;
      auVar18._14_2_ = 0;
      auVar14._0_6_ =
           CONCAT15((char)(uVar15 >> 8),
                    CONCAT14((char)uVar15,(uint)((ushort)(auVar12._0_4_ >> 10) & 0x3ff))) &
           0x3ffffffffff;
      auVar14._6_2_ = 0;
      auVar14[8] = (undefined1)uVar16;
      auVar14[9] = (byte)(uVar16 >> 8) & 3;
      auVar14._10_2_ = 0;
      auVar14[0xc] = (undefined1)uVar17;
      auVar14[0xd] = (byte)(uVar17 >> 8) & 3;
      auVar14._14_2_ = 0;
      auVar11._0_8_ = CONCAT44(auVar12._4_4_ >> 0x14,auVar12._0_4_ >> 0x14) & 0xfffff3fffffff3ff;
      auVar11._8_4_ = auVar12._8_4_ >> 0x14 & 0xfffff3ff;
      auVar11._12_4_ = auVar12._12_4_ >> 0x14 & 0xfffff3ff;
      auVar18 = NEON_ucvtf(auVar18,4);
      auVar14 = NEON_ucvtf(auVar14,4);
      auVar12 = NEON_ucvtf(auVar11,4);
      fVar29 = auVar9._0_4_;
      fVar30 = auVar9._4_4_;
      fVar21 = fVar29 + auVar18._0_4_ * 0.0009775171 * 2.0;
      fVar22 = fVar30 + auVar18._4_4_ * 0.0009775171 * 2.0;
      fVar19 = auVar9._8_4_;
      fVar20 = auVar9._12_4_;
      fVar23 = fVar19 + auVar18._8_4_ * 0.0009775171 * 2.0;
      fVar24 = fVar20 + auVar18._12_4_ * 0.0009775171 * 2.0;
      fVar25 = fVar29 + auVar14._0_4_ * 0.0009775171 * 2.0;
      fVar26 = fVar30 + auVar14._4_4_ * 0.0009775171 * 2.0;
      fVar27 = fVar19 + auVar14._8_4_ * 0.0009775171 * 2.0;
      fVar28 = fVar20 + auVar14._12_4_ * 0.0009775171 * 2.0;
      fVar29 = fVar29 + auVar12._0_4_ * 0.0009775171 * 2.0;
      fVar30 = fVar30 + auVar12._4_4_ * 0.0009775171 * 2.0;
      fVar19 = fVar19 + auVar12._8_4_ * 0.0009775171 * 2.0;
      fVar20 = fVar20 + auVar12._12_4_ * 0.0009775171 * 2.0;
      fVar7 = fVar25 * fVar25 + fVar21 * fVar21 + fVar29 * fVar29;
      fVar13 = fVar26 * fVar26 + fVar22 * fVar22 + fVar30 * fVar30;
      fStack_190 = auVar10._0_4_;
      fStack_18c = auVar10._4_4_;
      fStack_188 = auVar10._8_4_;
      fStack_184 = auVar10._12_4_;
      fStack_190 = fStack_190 / SQRT(fVar7 + 1e-06);
      fStack_18c = fStack_18c / SQRT(fVar13 + 1e-06);
      uVar31 = ___sincosf_stret();
      uVar8 = ___sincosf_stret(CONCAT44(fVar13 * fStack_18c * 1.5707964,
                                        fVar7 * fStack_190 * 1.5707964));
      uVar32 = ___sincosf_stret();
      uVar33 = ___sincosf_stret();
      fStack_190 = fStack_190 * (float)uVar8;
      fStack_18c = fStack_18c * (float)uVar31;
      fVar7 = (fStack_188 / SQRT(fVar27 * fVar27 + fVar23 * fVar23 + fVar19 * fVar19 + 1e-06)) *
              (float)uVar32;
      fVar13 = (fStack_184 / SQRT(fVar28 * fVar28 + fVar24 * fVar24 + fVar20 * fVar20 + 1e-06)) *
               (float)uVar33;
      *pfVar5 = fVar21 * fStack_190;
      pfVar5[1] = fVar25 * fStack_190;
      pfVar5[2] = fVar29 * fStack_190;
      pfVar5[3] = (float)((ulong)uVar8 >> 0x20);
      pfVar5[4] = fVar22 * fStack_18c;
      pfVar5[5] = fVar26 * fStack_18c;
      pfVar5[6] = fVar30 * fStack_18c;
      pfVar5[7] = (float)((ulong)uVar31 >> 0x20);
      pfVar5[8] = fVar23 * fVar7;
      pfVar5[9] = fVar27 * fVar7;
      pfVar5[10] = fVar19 * fVar7;
      pfVar5[0xb] = (float)((ulong)uVar32 >> 0x20);
      pfVar5[0xc] = fVar24 * fVar13;
      pfVar5[0xd] = fVar28 * fVar13;
      pfVar5[0xe] = fVar20 * fVar13;
      pfVar5[0xf] = (float)((ulong)uVar33 >> 0x20);
      pfVar5 = pfVar5 + 0x10;
      lVar2 = lVar4 + 4;
      uVar1 = lVar4 + 8;
      lVar4 = lVar2;
      pauVar6 = pauVar6 + 1;
    } while (uVar1 <= param_3);
  }
  lVar4 = param_3 - lVar2;
  if (lVar4 != 0) {
    param_2 = param_2 + lVar2 * 4 + 3;
    uVar31 = NEON_fmov(0xbf800000,4);
    puVar3 = (uint *)(*param_1 + lVar2 * 4);
    do {
      uVar15 = *puVar3;
      fVar7 = (float)(uVar15 >> 0x14 & 0x3ff) * 0.0009775171;
      fVar29 = fVar7 + fVar7 + -1.0;
      uVar8 = NEON_ucvtf(CONCAT44(uVar15 >> 10,uVar15) & 0x3ff000003ff,4);
      fVar7 = (float)uVar8 * 0.0009775171;
      fVar13 = (float)((ulong)uVar8 >> 0x20) * 0.0009775171;
      fVar30 = fVar7 + fVar7 + (float)uVar31;
      fVar13 = fVar13 + fVar13 + (float)((ulong)uVar31 >> 0x20);
      uVar8 = ___sincosf_stret();
      fVar7 = (1.0 / SQRT(fVar29 * fVar29 + fVar30 * fVar30 + fVar13 * fVar13 + 1e-06)) *
              (float)uVar8;
      *(ulong *)(param_2 + -3) = CONCAT44(fVar13 * fVar7,fVar30 * fVar7);
      param_2[-1] = fVar29 * fVar7;
      *param_2 = (float)((ulong)uVar8 >> 0x20);
      param_2 = param_2 + 4;
      lVar4 = lVar4 + -1;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 10a0076c0; end: 10a007897;  */

void FUN_10a0076c0(undefined1 (*param_1) [16],float *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  float *pfVar3;
  uint *puVar4;
  undefined1 (*pauVar5) [16];
  long lVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar22;
  float fVar23;
  undefined1 auVar21 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar30;
  undefined8 uVar27;
  uint uVar29;
  float fVar31;
  uint uVar32;
  float fVar33;
  uint uVar34;
  undefined1 auVar28 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  
  if (param_3 < 4) {
    lVar6 = 0;
  }
  else {
    auVar7 = NEON_fmov(0xbf800000,4);
    auVar9 = NEON_fmov(0x3f800000,4);
    auVar10 = NEON_fmov(0xc0c00000,4);
    lVar2 = 0;
    pfVar3 = param_2;
    pauVar5 = param_1;
    do {
      auVar12 = *pauVar5;
      auVar21._0_6_ =
           CONCAT15(auVar12[5],CONCAT14(auVar12[4],(uint)(auVar12._0_2_ & 0x3ff))) & 0x3ffffffffff;
      auVar21._6_2_ = 0;
      auVar21[8] = auVar12[8];
      auVar21[9] = auVar12[9] & 3;
      auVar21._10_2_ = 0;
      auVar21[0xc] = auVar12[0xc];
      auVar21[0xd] = auVar12[0xd] & 3;
      auVar21._14_2_ = 0;
      uVar29 = auVar12._4_4_ >> 10;
      uVar32 = auVar12._8_4_ >> 10;
      uVar34 = auVar12._12_4_ >> 10;
      auVar28._0_6_ =
           CONCAT15((char)(uVar29 >> 8),
                    CONCAT14((char)uVar29,(uint)((ushort)(auVar12._0_4_ >> 10) & 0x3ff))) &
           0x3ffffffffff;
      auVar28._6_2_ = 0;
      auVar28[8] = (undefined1)uVar32;
      auVar28[9] = (byte)(uVar32 >> 8) & 3;
      auVar28._10_2_ = 0;
      auVar28[0xc] = (undefined1)uVar34;
      auVar28[0xd] = (byte)(uVar34 >> 8) & 3;
      auVar28._14_2_ = 0;
      auVar11._0_8_ = CONCAT44(auVar12._4_4_ >> 0x14,auVar12._0_4_ >> 0x14) & 0xfffff3fffffff3ff;
      auVar11._8_4_ = auVar12._8_4_ >> 0x14 & 0xfffff3ff;
      auVar11._12_4_ = auVar12._12_4_ >> 0x14 & 0xfffff3ff;
      auVar21 = NEON_ucvtf(auVar21,4);
      auVar28 = NEON_ucvtf(auVar28,4);
      auVar12 = NEON_ucvtf(auVar11,4);
      fVar25 = auVar7._0_4_;
      fVar30 = auVar7._4_4_;
      fVar36 = fVar25 + auVar21._0_4_ * 0.0009775171 * 2.0;
      fVar38 = fVar30 + auVar21._4_4_ * 0.0009775171 * 2.0;
      fVar33 = auVar7._8_4_;
      fVar35 = auVar7._12_4_;
      fVar39 = fVar33 + auVar21._8_4_ * 0.0009775171 * 2.0;
      fVar40 = fVar35 + auVar21._12_4_ * 0.0009775171 * 2.0;
      fVar19 = fVar25 + auVar28._0_4_ * 0.0009775171 * 2.0;
      fVar22 = fVar30 + auVar28._4_4_ * 0.0009775171 * 2.0;
      fVar23 = fVar33 + auVar28._8_4_ * 0.0009775171 * 2.0;
      fVar24 = fVar35 + auVar28._12_4_ * 0.0009775171 * 2.0;
      fVar25 = fVar25 + auVar12._0_4_ * 0.0009775171 * 2.0;
      fVar30 = fVar30 + auVar12._4_4_ * 0.0009775171 * 2.0;
      fVar33 = fVar33 + auVar12._8_4_ * 0.0009775171 * 2.0;
      fVar35 = fVar35 + auVar12._12_4_ * 0.0009775171 * 2.0;
      fVar42 = (fVar36 * fVar36 + fVar19 * fVar19 + fVar25 * fVar25) * 0.17157288;
      fVar13 = (fVar38 * fVar38 + fVar22 * fVar22 + fVar30 * fVar30) * 0.17157288;
      fVar15 = (fVar39 * fVar39 + fVar23 * fVar23 + fVar33 * fVar33) * 0.17157288;
      fVar17 = (fVar40 * fVar40 + fVar24 * fVar24 + fVar35 * fVar35) * 0.17157288;
      fVar20 = auVar9._0_4_;
      fVar26 = auVar9._4_4_;
      fVar31 = auVar9._8_4_;
      fVar37 = auVar9._12_4_;
      fVar41 = fVar20 / ((fVar42 + fVar20) * (fVar42 + fVar20));
      fVar43 = fVar26 / ((fVar13 + fVar26) * (fVar13 + fVar26));
      fVar44 = fVar31 / ((fVar15 + fVar31) * (fVar15 + fVar31));
      fVar45 = fVar37 / ((fVar17 + fVar37) * (fVar17 + fVar37));
      fVar46 = (fVar20 - fVar42) * 1.6568543 * fVar41;
      fVar14 = (fVar26 - fVar13) * 1.6568543 * fVar43;
      fVar16 = (fVar31 - fVar15) * 1.6568543 * fVar44;
      fVar18 = (fVar37 - fVar17) * 1.6568543 * fVar45;
      *pfVar3 = fVar36 * fVar46;
      pfVar3[1] = fVar19 * fVar46;
      pfVar3[2] = fVar25 * fVar46;
      pfVar3[3] = (fVar42 * (fVar42 + auVar10._0_4_) + fVar20) * fVar41;
      pfVar3[4] = fVar38 * fVar14;
      pfVar3[5] = fVar22 * fVar14;
      pfVar3[6] = fVar30 * fVar14;
      pfVar3[7] = (fVar13 * (fVar13 + auVar10._4_4_) + fVar26) * fVar43;
      pfVar3[8] = fVar39 * fVar16;
      pfVar3[9] = fVar23 * fVar16;
      pfVar3[10] = fVar33 * fVar16;
      pfVar3[0xb] = (fVar15 * (fVar15 + auVar10._8_4_) + fVar31) * fVar44;
      pfVar3[0xc] = fVar40 * fVar18;
      pfVar3[0xd] = fVar24 * fVar18;
      pfVar3[0xe] = fVar35 * fVar18;
      pfVar3[0xf] = (fVar17 * (fVar17 + auVar10._12_4_) + fVar37) * fVar45;
      pfVar3 = pfVar3 + 0x10;
      lVar6 = lVar2 + 4;
      uVar1 = lVar2 + 8;
      lVar2 = lVar6;
      pauVar5 = pauVar5 + 1;
    } while (uVar1 <= param_3);
  }
  lVar2 = param_3 - lVar6;
  if (lVar2 != 0) {
    uVar8 = NEON_fmov(0xbf800000,4);
    puVar4 = (uint *)(*param_1 + lVar6 * 4);
    pfVar3 = param_2 + lVar6 * 4;
    do {
      uVar29 = *puVar4;
      fVar20 = (float)(uVar29 >> 0x14 & 0x3ff) * 0.0009775171;
      fVar20 = fVar20 + fVar20 + -1.0;
      uVar27 = NEON_ucvtf(CONCAT44(uVar29 >> 10,uVar29) & 0x3ff000003ff,4);
      fVar26 = (float)uVar27 * 0.0009775171;
      fVar31 = (float)((ulong)uVar27 >> 0x20) * 0.0009775171;
      fVar26 = fVar26 + fVar26 + (float)uVar8;
      fVar31 = fVar31 + fVar31 + (float)((ulong)uVar8 >> 0x20);
      fVar37 = (fVar20 * fVar20 + fVar26 * fVar26 + fVar31 * fVar31) * 0.17157288;
      fVar46 = (1.0 - fVar37) * 1.6568543;
      fVar42 = 1.0 / ((fVar37 + 1.0) * (fVar37 + 1.0));
      pfVar3[2] = fVar20 * fVar46 * fVar42;
      pfVar3[3] = ((fVar37 + -6.0) * fVar37 + 1.0) * fVar42;
      *pfVar3 = fVar26 * fVar46 * fVar42;
      pfVar3[1] = fVar31 * fVar46 * fVar42;
      lVar2 = lVar2 + -1;
      puVar4 = puVar4 + 1;
      pfVar3 = pfVar3 + 4;
    } while (lVar2 != 0);
  }
  return;
}



/* Entry: 10a007898; end: 10a007a5f;  */

void FUN_10a007898(undefined1 (*param_1) [16],uint *param_2,ulong param_3)

{
  long lVar1;
  uint *puVar2;
  undefined1 (*pauVar3) [16];
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint extraout_s2;
  undefined1 auVar9 [16];
  uint extraout_s3;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar22;
  float fVar23;
  undefined1 auVar21 [16];
  float fVar24;
  float fVar25;
  float fVar29;
  float fVar30;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fStack_70;
  undefined8 uStack_6c;
  uint uStack_64;
  
  if (param_3 < 4) {
    lVar4 = 0;
  }
  else {
    auVar9 = NEON_fmov(0xbf800000,4);
    auVar10 = NEON_fmov(0x3f800000,4);
    lVar1 = 0;
    puVar2 = param_2;
    pauVar3 = param_1;
    do {
      auVar21 = *pauVar3;
      auVar27._0_6_ =
           CONCAT15(auVar21[5],CONCAT14(auVar21[4],(uint)(auVar21._0_2_ & 0x3ff))) & 0x3ffffffffff;
      auVar27._6_2_ = 0;
      auVar27[8] = auVar21[8];
      auVar27[9] = auVar21[9] & 3;
      auVar27._10_2_ = 0;
      auVar27[0xc] = auVar21[0xc];
      auVar27[0xd] = auVar21[0xd] & 3;
      auVar27._14_2_ = 0;
      uVar12 = auVar21._0_4_;
      uVar14 = auVar21._4_4_;
      uVar16 = auVar21._8_4_;
      uVar18 = auVar21._12_4_;
      auVar26._0_6_ =
           CONCAT15((char)((uVar14 >> 10) >> 8),
                    CONCAT14((char)(uVar14 >> 10),(uint)((ushort)(uVar12 >> 10) & 0x3ff))) &
           0x3ffffffffff;
      auVar26._6_2_ = 0;
      auVar26[8] = (undefined1)(uVar16 >> 10);
      auVar26[9] = (byte)((uVar16 >> 10) >> 8) & 3;
      auVar26._10_2_ = 0;
      auVar26[0xc] = (undefined1)(uVar18 >> 10);
      auVar26[0xd] = (byte)((uVar18 >> 10) >> 8) & 3;
      auVar26._14_2_ = 0;
      uVar36 = uVar12 >> 0x1e;
      uVar38 = uVar14 >> 0x1e;
      uVar40 = uVar16 >> 0x1e;
      uVar42 = uVar18 >> 0x1e;
      auVar21 = NEON_ucvtf(auVar27,4);
      fVar34 = auVar9._8_4_;
      fVar35 = auVar9._12_4_;
      fVar32 = auVar9._0_4_;
      fVar33 = auVar9._4_4_;
      auVar27 = NEON_ucvtf(auVar26,4);
      fVar44 = fVar32 + auVar21._0_4_ * 0.0019550342;
      fVar45 = fVar33 + auVar21._4_4_ * 0.0019550342;
      fVar46 = fVar34 + auVar21._8_4_ * 0.0019550342;
      fVar47 = fVar35 + auVar21._12_4_ * 0.0019550342;
      fVar20 = fVar32 + auVar27._0_4_ * 0.0019550342;
      fVar22 = fVar33 + auVar27._4_4_ * 0.0019550342;
      fVar23 = fVar34 + auVar27._8_4_ * 0.0019550342;
      fVar24 = fVar35 + auVar27._12_4_ * 0.0019550342;
      auVar21._8_4_ = uVar16 >> 0x14 & 0xfffff3ff;
      auVar21._0_8_ = CONCAT44(uVar14 >> 0x14,uVar12 >> 0x14) & 0xfffff3fffffff3ff;
      auVar21._12_4_ = uVar18 >> 0x14 & 0xfffff3ff;
      auVar21 = NEON_ucvtf(auVar21,4);
      fVar32 = fVar32 + auVar21._0_4_ * 0.0019550342;
      fVar33 = fVar33 + auVar21._4_4_ * 0.0019550342;
      fVar34 = fVar34 + auVar21._8_4_ * 0.0019550342;
      fVar35 = fVar35 + auVar21._12_4_ * 0.0019550342;
      auVar28._0_4_ = auVar10._0_4_ - (fVar44 * fVar44 + fVar20 * fVar20 + fVar32 * fVar32);
      auVar28._4_4_ = auVar10._4_4_ - (fVar45 * fVar45 + fVar22 * fVar22 + fVar33 * fVar33);
      auVar28._8_4_ = auVar10._8_4_ - (fVar46 * fVar46 + fVar23 * fVar23 + fVar34 * fVar34);
      auVar28._12_4_ = auVar10._12_4_ - (fVar47 * fVar47 + fVar24 * fVar24 + fVar35 * fVar35);
      auVar21 = NEON_fmax(auVar28,ZEXT216(0),4);
      fVar25 = SQRT(auVar21._0_4_);
      fVar29 = SQRT(auVar21._4_4_);
      fVar30 = SQRT(auVar21._8_4_);
      fVar31 = SQRT(auVar21._12_4_);
      uVar37 = (uint)fVar20 ^ ((uint)fVar20 ^ (uint)fVar44) & -(uint)(uVar36 == 3);
      uVar39 = (uint)fVar22 ^ ((uint)fVar22 ^ (uint)fVar45) & -(uint)(uVar38 == 3);
      uVar41 = (uint)fVar23 ^ ((uint)fVar23 ^ (uint)fVar46) & -(uint)(uVar40 == 3);
      uVar43 = (uint)fVar24 ^ ((uint)fVar24 ^ (uint)fVar47) & -(uint)(uVar42 == 3);
      uVar13 = (uint)fVar20 ^ ((uint)fVar20 ^ (uint)fVar32) & -(uint)(uVar36 == 2);
      uVar15 = (uint)fVar22 ^ ((uint)fVar22 ^ (uint)fVar33) & -(uint)(uVar38 == 2);
      uVar17 = (uint)fVar23 ^ ((uint)fVar23 ^ (uint)fVar34) & -(uint)(uVar40 == 2);
      uVar19 = (uint)fVar24 ^ ((uint)fVar24 ^ (uint)fVar35) & -(uint)(uVar42 == 2);
      *puVar2 = uVar37 ^ (uVar37 ^ (uint)fVar25) & -(uint)(uVar12 < 0x40000000);
      puVar2[1] = uVar13 ^ (uVar13 ^ (uint)fVar25) & -(uint)(uVar36 == 1);
      puVar2[2] = (uint)fVar32 ^ ((uint)fVar32 ^ (uint)fVar25) & -(uint)(uVar36 == 2);
      puVar2[3] = (uint)fVar44 ^ ((uint)fVar44 ^ (uint)fVar25) & -(uint)(uVar36 == 3);
      puVar2[4] = uVar39 ^ (uVar39 ^ (uint)fVar29) & -(uint)(uVar14 < 0x40000000);
      puVar2[5] = uVar15 ^ (uVar15 ^ (uint)fVar29) & -(uint)(uVar38 == 1);
      puVar2[6] = (uint)fVar33 ^ ((uint)fVar33 ^ (uint)fVar29) & -(uint)(uVar38 == 2);
      puVar2[7] = (uint)fVar45 ^ ((uint)fVar45 ^ (uint)fVar29) & -(uint)(uVar38 == 3);
      puVar2[8] = uVar41 ^ (uVar41 ^ (uint)fVar30) & -(uint)(uVar16 < 0x40000000);
      puVar2[9] = uVar17 ^ (uVar17 ^ (uint)fVar30) & -(uint)(uVar40 == 1);
      puVar2[10] = (uint)fVar34 ^ ((uint)fVar34 ^ (uint)fVar30) & -(uint)(uVar40 == 2);
      puVar2[0xb] = (uint)fVar46 ^ ((uint)fVar46 ^ (uint)fVar30) & -(uint)(uVar40 == 3);
      puVar2[0xc] = uVar43 ^ (uVar43 ^ (uint)fVar31) & -(uint)(uVar18 < 0x40000000);
      puVar2[0xd] = uVar19 ^ (uVar19 ^ (uint)fVar31) & -(uint)(uVar42 == 1);
      puVar2[0xe] = (uint)fVar35 ^ ((uint)fVar35 ^ (uint)fVar31) & -(uint)(uVar42 == 2);
      puVar2[0xf] = (uint)fVar47 ^ ((uint)fVar47 ^ (uint)fVar31) & -(uint)(uVar42 == 3);
      puVar2 = puVar2 + 0x10;
      lVar4 = lVar1 + 4;
      uVar6 = lVar1 + 8;
      lVar1 = lVar4;
      pauVar3 = pauVar3 + 1;
    } while (uVar6 <= param_3);
  }
  lVar1 = param_3 - lVar4;
  if (lVar1 != 0) {
    uVar11 = NEON_fmov(0xbf800000,4);
    puVar2 = (uint *)(*param_1 + lVar4 * 4);
    puVar5 = param_2 + lVar4 * 4 + 2;
    do {
      uVar12 = *puVar2;
      uStack_64 = uVar12 >> 0x1e;
      fStack_70 = (float)(uVar12 & 0x3ff) * 0.0019550342 + -1.0;
      uVar6 = NEON_ushl(CONCAT44(uVar12,uVar12),0xffffffecfffffff6,4);
      uVar7 = NEON_ucvtf(uVar6 & 0x3ff000003ff,4);
      uVar8 = CONCAT44((float)((ulong)uVar11 >> 0x20) + (float)((ulong)uVar7 >> 0x20) * 0.0019550342
                       ,(float)uVar11 + (float)uVar7 * 0.0019550342);
      uStack_6c = uVar8;
      func_0x00010a005ddc(&fStack_70);
      puVar5[-2] = (uint)uVar7;
      puVar5[-1] = (uint)uVar8;
      *puVar5 = extraout_s2;
      puVar5[1] = extraout_s3;
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 4;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 10a007a60; end: 10a007c8f;  */

/* WARNING: Possible PIC construction at 0x00010a007224: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a007228) */

undefined1 (*) [16]
FUN_10a007a60(undefined1 (*param_1) [16],float *param_2,ulong param_3,int param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  undefined1 (*pauVar4) [16];
  float *pfVar5;
  undefined1 (*pauVar6) [16];
  long lVar7;
  long lVar8;
  float *pfVar9;
  uint *puVar10;
  long lVar11;
  undefined1 (*pauVar12) [16];
  float extraout_s0;
  float fVar13;
  int iVar14;
  undefined8 uVar15;
  int iVar26;
  undefined8 uVar16;
  float fVar27;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar25;
  float fVar29;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  int iVar28;
  int iVar30;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar31;
  float fVar32;
  int iVar33;
  float extraout_s1;
  float fVar34;
  float fVar40;
  float fVar41;
  float fVar44;
  float fVar45;
  float fVar48;
  float fVar49;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  int iVar42;
  int iVar46;
  int iVar50;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  uint uVar43;
  uint uVar47;
  uint uVar51;
  undefined1 auVar39 [16];
  float fVar52;
  float fVar53;
  int iVar54;
  float extraout_s2;
  float fVar55;
  ulong uVar56;
  float fVar64;
  float fVar65;
  float fVar67;
  float fVar69;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  int iVar66;
  int iVar68;
  int iVar70;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float extraout_s3;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar78;
  float fVar79;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar80;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar95;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined8 unaff_d10;
  ulong uVar102;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined1 auVar103 [12];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar108 [16];
  uint uVar111;
  uint uVar112;
  uint uVar113;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  uint uVar114;
  uint uVar115;
  byte bVar116;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  float fVar136;
  uint uVar137;
  uint uVar138;
  uint uVar145;
  uint uVar146;
  uint uVar147;
  uint uVar148;
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  uint uVar149;
  uint uVar150;
  short sVar151;
  float fVar162;
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined8 uVar168;
  undefined8 uVar169;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  uint uStack_1a0;
  uint uStack_19c;
  uint uStack_198;
  uint uStack_194;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  undefined8 uStack_130;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined8 in_stack_ffffffffffffff30;
  undefined8 in_stack_ffffffffffffff38;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  int iStack_74;
  undefined1 auVar107 [16];
  undefined4 uVar152;
  undefined6 uVar153;
  
  iVar14 = (int)param_2;
  if (iVar14 < 3) {
    if (iVar14 == 0) {
      return param_1;
    }
    if (iVar14 == 2) {
      ___sincosf_stret();
      return param_1;
    }
    if (iVar14 == 1) {
      FUN_10a00946c(&UNK_10f630e88);
    }
  }
  else {
    if (iVar14 == 3) {
      return param_1;
    }
    if (iVar14 == 4) {
      return param_1;
    }
    if (iVar14 == 5) {
      return param_1;
    }
  }
  pfVar5 = (float *)&UNK_10f630e62;
  FUN_10a00946c();
  iVar14 = (int)param_2;
  if (iVar14 < 3) {
    if (iVar14 == 0) {
      fVar73 = pfVar5[2];
      fVar13 = pfVar5[3];
      fVar55 = *pfVar5;
      fVar34 = pfVar5[1];
      fVar71 = fVar13 * fVar13 + fVar55 * fVar55 + fVar34 * fVar34 + fVar73 * fVar73;
      if (fVar71 == 0.0) {
        fVar55 = 0.0;
        fVar34 = 0.0;
        fVar73 = 0.0;
        fVar13 = 1.0;
      }
      else {
        fVar71 = 1.0 / SQRT(fVar71);
        fVar13 = fVar13 * fVar71;
        fVar55 = fVar55 * fVar71;
        fVar34 = fVar34 * fVar71;
        fVar73 = fVar73 * fVar71;
      }
      bVar3 = fVar73 < 0.0;
      fVar73 = -fVar13;
      if (!bVar3) {
        fVar73 = fVar13;
      }
      fVar73 = fVar73 * 0.5 + 0.5;
      fVar13 = 0.0;
      if (0.0 <= fVar73) {
        fVar13 = fVar73;
      }
      fVar73 = 1.0;
      if (fVar13 <= 1.0) {
        fVar73 = fVar13;
      }
      uVar47 = (uint)(fVar73 * 1023.0 + 0.5);
      uVar102 = CONCAT44(fVar34,fVar55) ^
                (CONCAT44(fVar34,fVar55) ^ CONCAT44(-fVar34,-fVar55)) &
                CONCAT44(-(uint)((int)((uint)bVar3 << 0x1f) < 0),
                         -(uint)((int)((uint)bVar3 << 0x1f) < 0));
      fVar13 = (float)uVar102 * 0.5 + 0.5;
      fVar55 = (float)(uVar102 >> 0x20) * 0.5 + 0.5;
      iVar14 = -(uint)(fVar13 < 0.0);
      iVar26 = -(uint)(fVar55 < 0.0);
      fVar13 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                               CONCAT12((byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar13 >> 8) &
                                                  ~(byte)((uint)iVar14 >> 8),
                                                  SUB41(fVar13,0) & ~(byte)iVar14)));
      uVar102 = CONCAT17((byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                         CONCAT16((byte)((uint)fVar55 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10),
                                  CONCAT15((byte)((uint)fVar55 >> 8) & ~(byte)((uint)iVar26 >> 8),
                                           CONCAT14(SUB41(fVar55,0) & ~(byte)iVar26,fVar13))));
      uVar56 = NEON_fmov(0x3f800000,4);
      uVar102 = uVar102 ^ (uVar102 ^ uVar56) &
                          CONCAT44(-(uint)((float)(uVar56 >> 0x20) < (float)(uVar102 >> 0x20)),
                                   -(uint)((float)uVar56 < fVar13));
      uVar16 = NEON_ushl(CONCAT44((int)(float)(int)((float)(uVar102 >> 0x20) * 1023.0 + 0.5),
                                  (int)(float)(int)((float)uVar102 * 1023.0 + 0.5)),0x140000000a,4);
      uVar43 = (uint)((ulong)uVar16 >> 0x20);
LAB_10a00813c:
      return (undefined1 (*) [16])(ulong)((uint)uVar16 | uVar47 | uVar43);
    }
    if (iVar14 == 1) {
      func_0x00010a005e80(&fStack_80,pfVar5);
      return (undefined1 (*) [16])
             (ulong)(uint)((int)(fStack_80 * 511.5 + 511.5) | (int)(fStack_7c * 511.5 + 511.5) << 10
                           | iStack_74 << 0x1e | (int)(fStack_78 * 511.5 + 511.5) << 0x14);
    }
    if (iVar14 != 2) {
LAB_10a00822c:
      pauVar6 = (undefined1 (*) [16])&UNK_10f630e62;
      FUN_10a00946c();
      fStack_100 = (float)unaff_d13;
      fStack_fc = (float)((ulong)unaff_d13 >> 0x20);
      fStack_f8 = (float)unaff_d12;
      fStack_f4 = (float)((ulong)unaff_d12 >> 0x20);
      if (param_4 < 3) {
        if (param_4 == 0) {
          if (param_3 < 4) {
            lVar8 = 0;
          }
          else {
            auVar58._8_4_ = 0x2b8cbccc;
            auVar58._0_8_ = 0x2b8cbccc2b8cbccc;
            auVar58._12_4_ = 0x2b8cbccc;
            auVar17 = NEON_fmov(0x3f800000,4);
            auVar18 = ZEXT216(0);
            auVar75 = NEON_fmov(0xbf800000,4);
            auVar81._8_4_ = 0x447fc000;
            auVar81._0_8_ = 0x447fc000447fc000;
            auVar81._12_4_ = 0x447fc000;
            lVar11 = 0;
            pauVar4 = pauVar6;
            pfVar5 = param_2;
            do {
              fVar95 = *(float *)*pauVar4;
              fVar29 = *(float *)(*pauVar4 + 4);
              fVar71 = *(float *)(*pauVar4 + 8);
              fVar41 = *(float *)(*pauVar4 + 0xc);
              fVar65 = *(float *)pauVar4[1];
              fVar162 = *(float *)(pauVar4[1] + 4);
              fVar32 = *(float *)(pauVar4[1] + 8);
              fVar44 = *(float *)(pauVar4[1] + 0xc);
              fVar27 = *(float *)pauVar4[2];
              fVar31 = *(float *)(pauVar4[2] + 4);
              fVar53 = *(float *)(pauVar4[2] + 8);
              fVar45 = *(float *)(pauVar4[2] + 0xc);
              fVar136 = *(float *)pauVar4[3];
              fVar40 = *(float *)(pauVar4[3] + 4);
              fVar25 = *(float *)(pauVar4[3] + 8);
              fVar48 = *(float *)(pauVar4[3] + 0xc);
              pauVar4 = pauVar4 + 4;
              auVar85._0_4_ = fVar95 * fVar95 + fVar29 * fVar29 + fVar71 * fVar71 + fVar41 * fVar41;
              auVar85._4_4_ =
                   fVar65 * fVar65 + fVar162 * fVar162 + fVar32 * fVar32 + fVar44 * fVar44;
              auVar85._8_4_ = fVar27 * fVar27 + fVar31 * fVar31 + fVar53 * fVar53 + fVar45 * fVar45;
              auVar85._12_4_ =
                   fVar136 * fVar136 + fVar40 * fVar40 + fVar25 * fVar25 + fVar48 * fVar48;
              auVar63 = NEON_fmax(auVar85,auVar58,4);
              fVar13 = auVar17._0_4_ / SQRT(auVar63._0_4_);
              fVar55 = auVar17._4_4_ / SQRT(auVar63._4_4_);
              fVar34 = auVar17._8_4_ / SQRT(auVar63._8_4_);
              fVar73 = auVar17._12_4_ / SQRT(auVar63._12_4_);
              auVar96._0_4_ = -(uint)(0.0 <= fVar71 * fVar13);
              auVar96._4_4_ = -(uint)(0.0 <= fVar32 * fVar55);
              auVar96._8_4_ = -(uint)(0.0 <= fVar53 * fVar34);
              auVar96._12_4_ = -(uint)(0.0 <= fVar25 * fVar73);
              auVar63 = auVar75 ^ (auVar75 ^ auVar17) & auVar96;
              fVar71 = auVar63._0_4_;
              fVar32 = auVar63._4_4_;
              fVar53 = auVar63._8_4_;
              fVar25 = auVar63._12_4_;
              auVar130._0_4_ = fVar41 * fVar13 * fVar71 * 0.5 + 0.5;
              auVar130._4_4_ = fVar44 * fVar55 * fVar32 * 0.5 + 0.5;
              auVar130._8_4_ = fVar45 * fVar34 * fVar53 * 0.5 + 0.5;
              auVar130._12_4_ = fVar48 * fVar73 * fVar25 * 0.5 + 0.5;
              auVar63 = NEON_fmax(auVar130,auVar18,4);
              auVar63 = NEON_fmin(auVar63,auVar17,4);
              auVar139._0_4_ = fVar95 * fVar13 * fVar71 * 0.5 + 0.5;
              auVar139._4_4_ = fVar65 * fVar55 * fVar32 * 0.5 + 0.5;
              auVar139._8_4_ = fVar27 * fVar34 * fVar53 * 0.5 + 0.5;
              auVar139._12_4_ = fVar136 * fVar73 * fVar25 * 0.5 + 0.5;
              auVar131._0_4_ = (int)(auVar63._0_4_ * 1023.0 + 0.5);
              auVar131._4_4_ = (int)(auVar63._4_4_ * 1023.0 + 0.5);
              auVar131._8_4_ = (int)(auVar63._8_4_ * 1023.0 + 0.5);
              auVar131._12_4_ = (int)(auVar63._12_4_ * 1023.0 + 0.5);
              auVar63 = NEON_fmax(auVar139,auVar18,4);
              auVar63 = NEON_fmin(auVar63,auVar17,4);
              auVar140._0_4_ = (int)(auVar63._0_4_ * 1023.0 + 0.5);
              auVar140._4_4_ = (int)(auVar63._4_4_ * 1023.0 + 0.5);
              auVar140._8_4_ = (int)(auVar63._8_4_ * 1023.0 + 0.5);
              auVar140._12_4_ = (int)(auVar63._12_4_ * 1023.0 + 0.5);
              auVar63 = NEON_fmin(auVar131,auVar81,4);
              auVar119 = NEON_fmin(auVar140,auVar81,4);
              auVar86._0_4_ = fVar29 * fVar13 * fVar71 * 0.5 + 0.5;
              auVar86._4_4_ = fVar162 * fVar55 * fVar32 * 0.5 + 0.5;
              auVar86._8_4_ = fVar31 * fVar34 * fVar53 * 0.5 + 0.5;
              auVar86._12_4_ = fVar40 * fVar73 * fVar25 * 0.5 + 0.5;
              iVar33 = (int)auVar63._0_4_;
              iVar42 = (int)auVar63._4_4_;
              iVar46 = (int)auVar63._8_4_;
              iVar50 = (int)auVar63._12_4_;
              auVar63 = NEON_fmax(auVar86,auVar18,4);
              auVar63 = NEON_fmin(auVar63,auVar17,4);
              auVar87._0_4_ = (int)(auVar63._0_4_ * 1023.0 + 0.5);
              auVar87._4_4_ = (int)(auVar63._4_4_ * 1023.0 + 0.5);
              auVar87._8_4_ = (int)(auVar63._8_4_ * 1023.0 + 0.5);
              auVar87._12_4_ = (int)(auVar63._12_4_ * 1023.0 + 0.5);
              auVar63 = NEON_fmin(auVar87,auVar81,4);
              iVar54 = (int)auVar119._0_4_ << 10;
              iVar66 = (int)auVar119._4_4_ << 10;
              iVar68 = (int)auVar119._8_4_ << 10;
              iVar70 = (int)auVar119._12_4_ << 10;
              iVar14 = (int)auVar63._0_4_ << 0x14;
              iVar26 = (int)auVar63._4_4_ << 0x14;
              iVar28 = (int)auVar63._8_4_ << 0x14;
              iVar30 = (int)auVar63._12_4_ << 0x14;
              *(char *)(pfVar5 + 2) = (char)iVar46;
              *(byte *)((long)pfVar5 + 9) = (byte)((uint)iVar68 >> 8) | (byte)((uint)iVar46 >> 8);
              *(byte *)((long)pfVar5 + 10) =
                   (byte)((uint)iVar68 >> 0x10) | (byte)((uint)iVar46 >> 0x10) |
                   (byte)((uint)iVar28 >> 0x10);
              *(byte *)((long)pfVar5 + 0xb) =
                   (byte)((uint)iVar68 >> 0x18) | (byte)((uint)iVar46 >> 0x18) |
                   (byte)((uint)iVar28 >> 0x18);
              *(char *)(pfVar5 + 3) = (char)iVar50;
              *(byte *)((long)pfVar5 + 0xd) = (byte)((uint)iVar70 >> 8) | (byte)((uint)iVar50 >> 8);
              *(byte *)((long)pfVar5 + 0xe) =
                   (byte)((uint)iVar70 >> 0x10) | (byte)((uint)iVar50 >> 0x10) |
                   (byte)((uint)iVar30 >> 0x10);
              *(byte *)((long)pfVar5 + 0xf) =
                   (byte)((uint)iVar70 >> 0x18) | (byte)((uint)iVar50 >> 0x18) |
                   (byte)((uint)iVar30 >> 0x18);
              *(char *)pfVar5 = (char)iVar33;
              *(byte *)((long)pfVar5 + 1) = (byte)((uint)iVar54 >> 8) | (byte)((uint)iVar33 >> 8);
              *(byte *)((long)pfVar5 + 2) =
                   (byte)((uint)iVar54 >> 0x10) | (byte)((uint)iVar33 >> 0x10) |
                   (byte)((uint)iVar14 >> 0x10);
              *(byte *)((long)pfVar5 + 3) =
                   (byte)((uint)iVar54 >> 0x18) | (byte)((uint)iVar33 >> 0x18) |
                   (byte)((uint)iVar14 >> 0x18);
              *(char *)(pfVar5 + 1) = (char)iVar42;
              *(byte *)((long)pfVar5 + 5) = (byte)((uint)iVar66 >> 8) | (byte)((uint)iVar42 >> 8);
              *(byte *)((long)pfVar5 + 6) =
                   (byte)((uint)iVar66 >> 0x10) | (byte)((uint)iVar42 >> 0x10) |
                   (byte)((uint)iVar26 >> 0x10);
              *(byte *)((long)pfVar5 + 7) =
                   (byte)((uint)iVar66 >> 0x18) | (byte)((uint)iVar42 >> 0x18) |
                   (byte)((uint)iVar26 >> 0x18);
              lVar8 = lVar11 + 4;
              uVar102 = lVar11 + 8;
              lVar11 = lVar8;
              pfVar5 = pfVar5 + 4;
            } while (uVar102 <= param_3);
          }
          lVar11 = param_3 - lVar8;
          if (lVar11 != 0) {
            pfVar5 = (float *)(pauVar6[lVar8] + 8);
            uVar102 = NEON_fmov(0x3f800000,4);
            pfVar9 = param_2 + lVar8;
            do {
              fVar71 = *pfVar5;
              fVar13 = pfVar5[1];
              fVar55 = pfVar5[-2];
              fVar34 = pfVar5[-1];
              fVar73 = fVar13 * fVar13 + fVar55 * fVar55 + fVar34 * fVar34 + fVar71 * fVar71;
              if (fVar73 == 0.0) {
                fVar55 = 0.0;
                fVar34 = 0.0;
                fVar71 = 0.0;
                fVar13 = 1.0;
              }
              else {
                fVar73 = 1.0 / SQRT(fVar73);
                fVar13 = fVar13 * fVar73;
                fVar55 = fVar55 * fVar73;
                fVar34 = fVar34 * fVar73;
                fVar71 = fVar71 * fVar73;
              }
              bVar3 = fVar71 < 0.0;
              fVar73 = -fVar13;
              if (!bVar3) {
                fVar73 = fVar13;
              }
              fVar73 = fVar73 * 0.5 + 0.5;
              fVar13 = 0.0;
              if (0.0 <= fVar73) {
                fVar13 = fVar73;
              }
              fVar73 = 1.0;
              if (fVar13 <= 1.0) {
                fVar73 = fVar13;
              }
              uVar56 = CONCAT44(fVar34,fVar55) ^
                       (CONCAT44(fVar34,fVar55) ^ CONCAT44(-fVar34,-fVar55)) &
                       CONCAT44(-(uint)((int)((uint)bVar3 << 0x1f) < 0),
                                -(uint)((int)((uint)bVar3 << 0x1f) < 0));
              fVar13 = (float)uVar56 * 0.5 + 0.5;
              fVar55 = (float)(uVar56 >> 0x20) * 0.5 + 0.5;
              iVar14 = -(uint)(fVar13 < 0.0);
              iVar26 = -(uint)(fVar55 < 0.0);
              fVar13 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                                       CONCAT12((byte)((uint)fVar13 >> 0x10) &
                                                ~(byte)((uint)iVar14 >> 0x10),
                                                CONCAT11((byte)((uint)fVar13 >> 8) &
                                                         ~(byte)((uint)iVar14 >> 8),
                                                         SUB41(fVar13,0) & ~(byte)iVar14)));
              uVar56 = CONCAT17((byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                                CONCAT16((byte)((uint)fVar55 >> 0x10) &
                                         ~(byte)((uint)iVar26 >> 0x10),
                                         CONCAT15((byte)((uint)fVar55 >> 8) &
                                                  ~(byte)((uint)iVar26 >> 8),
                                                  CONCAT14(SUB41(fVar55,0) & ~(byte)iVar26,fVar13)))
                               );
              uVar56 = uVar56 ^ (uVar56 ^ uVar102) &
                                CONCAT44(-(uint)((float)(uVar102 >> 0x20) < (float)(uVar56 >> 0x20))
                                         ,-(uint)((float)uVar102 < fVar13));
              uVar16 = NEON_ushl(CONCAT44((int)(float)(int)((float)(uVar56 >> 0x20) * 1023.0 + 0.5),
                                          (int)(float)(int)((float)uVar56 * 1023.0 + 0.5)),
                                 0x140000000a,4);
              pfVar5 = pfVar5 + 4;
              *pfVar9 = (float)((uint)uVar16 | (int)(fVar73 * 1023.0 + 0.5) |
                               (uint)((ulong)uVar16 >> 0x20));
              lVar11 = lVar11 + -1;
              pfVar9 = pfVar9 + 1;
            } while (lVar11 != 0);
          }
          return pauVar6;
        }
        if (param_4 == 1) {
          if (param_3 < 4) {
            lVar8 = 0;
          }
          else {
            auVar21._8_4_ = 0x2b8cbccc;
            auVar21._0_8_ = 0x2b8cbccc2b8cbccc;
            auVar21._12_4_ = 0x2b8cbccc;
            auVar17 = NEON_fmov(0x3f800000,4);
            auVar18 = NEON_fmov(0xbf800000,4);
            auVar76._8_4_ = 0x40000000;
            auVar76._0_8_ = 0x4000000040000000;
            auVar76._12_4_ = 0x40000000;
            auVar75 = NEON_fmov(0x40400000,4);
            lVar11 = 0;
            pauVar4 = pauVar6;
            pfVar5 = param_2;
            do {
              fVar71 = *(float *)*pauVar4;
              fVar95 = *(float *)(*pauVar4 + 4);
              fVar29 = *(float *)(*pauVar4 + 8);
              fVar41 = *(float *)(*pauVar4 + 0xc);
              fVar32 = *(float *)pauVar4[1];
              fVar65 = *(float *)(pauVar4[1] + 4);
              fVar162 = *(float *)(pauVar4[1] + 8);
              fVar44 = *(float *)(pauVar4[1] + 0xc);
              fVar53 = *(float *)pauVar4[2];
              fVar27 = *(float *)(pauVar4[2] + 4);
              fVar31 = *(float *)(pauVar4[2] + 8);
              fVar45 = *(float *)(pauVar4[2] + 0xc);
              fVar25 = *(float *)pauVar4[3];
              fVar136 = *(float *)(pauVar4[3] + 4);
              fVar40 = *(float *)(pauVar4[3] + 8);
              fVar48 = *(float *)(pauVar4[3] + 0xc);
              pauVar4 = pauVar4 + 4;
              auVar92._0_4_ = fVar71 * fVar71 + fVar95 * fVar95 + fVar29 * fVar29 + fVar41 * fVar41;
              auVar92._4_4_ =
                   fVar32 * fVar32 + fVar65 * fVar65 + fVar162 * fVar162 + fVar44 * fVar44;
              auVar92._8_4_ = fVar53 * fVar53 + fVar27 * fVar27 + fVar31 * fVar31 + fVar45 * fVar45;
              auVar92._12_4_ =
                   fVar25 * fVar25 + fVar136 * fVar136 + fVar40 * fVar40 + fVar48 * fVar48;
              auVar58 = NEON_fmax(auVar92,auVar21,4);
              fVar13 = auVar17._0_4_ / SQRT(auVar58._0_4_);
              fVar55 = auVar17._4_4_ / SQRT(auVar58._4_4_);
              fVar34 = auVar17._8_4_ / SQRT(auVar58._8_4_);
              fVar73 = auVar17._12_4_ / SQRT(auVar58._12_4_);
              auVar100._0_4_ = fVar71 * fVar13;
              auVar100._4_4_ = fVar32 * fVar55;
              auVar100._8_4_ = fVar53 * fVar34;
              auVar100._12_4_ = fVar25 * fVar73;
              auVar134._0_4_ = fVar95 * fVar13;
              auVar134._4_4_ = fVar65 * fVar55;
              auVar134._8_4_ = fVar27 * fVar34;
              auVar134._12_4_ = fVar136 * fVar73;
              auVar144._0_4_ = fVar41 * fVar13;
              auVar144._4_4_ = fVar44 * fVar55;
              auVar144._8_4_ = fVar45 * fVar34;
              auVar144._12_4_ = fVar48 * fVar73;
              auVar93._0_4_ = fVar29 * fVar13;
              auVar93._4_4_ = fVar162 * fVar55;
              auVar93._8_4_ = fVar31 * fVar34;
              auVar93._12_4_ = fVar40 * fVar73;
              iVar14 = -(uint)(ABS(auVar100._0_4_) <= ABS(auVar144._0_4_));
              iVar26 = -(uint)(ABS(auVar100._4_4_) <= ABS(auVar144._4_4_));
              iVar28 = -(uint)(ABS(auVar100._8_4_) <= ABS(auVar144._8_4_));
              iVar30 = -(uint)(ABS(auVar100._12_4_) <= ABS(auVar144._12_4_));
              iVar33 = -(uint)(ABS(auVar134._0_4_) <= ABS(auVar144._0_4_));
              iVar46 = -(uint)(ABS(auVar134._4_4_) <= ABS(auVar144._4_4_));
              iVar54 = -(uint)(ABS(auVar134._8_4_) <= ABS(auVar144._8_4_));
              iVar68 = -(uint)(ABS(auVar134._12_4_) <= ABS(auVar144._12_4_));
              iVar42 = -(uint)(ABS(auVar93._0_4_) <= ABS(auVar144._0_4_));
              iVar50 = -(uint)(ABS(auVar93._4_4_) <= ABS(auVar144._4_4_));
              iVar66 = -(uint)(ABS(auVar93._8_4_) <= ABS(auVar144._8_4_));
              iVar70 = -(uint)(ABS(auVar93._12_4_) <= ABS(auVar144._12_4_));
              auVar106[0] = (byte)iVar42 & (byte)iVar33 & (byte)iVar14;
              auVar106[1] = (byte)((uint)iVar42 >> 8) &
                            (byte)((uint)iVar33 >> 8) & (byte)((uint)iVar14 >> 8);
              auVar106[2] = (byte)((uint)iVar42 >> 0x10) &
                            (byte)((uint)iVar33 >> 0x10) & (byte)((uint)iVar14 >> 0x10);
              auVar106[3] = (byte)((uint)iVar42 >> 0x18) &
                            (byte)((uint)iVar33 >> 0x18) & (byte)((uint)iVar14 >> 0x18);
              auVar106[4] = (byte)iVar50 & (byte)iVar46 & (byte)iVar26;
              auVar106[5] = (byte)((uint)iVar50 >> 8) &
                            (byte)((uint)iVar46 >> 8) & (byte)((uint)iVar26 >> 8);
              auVar106[6] = (byte)((uint)iVar50 >> 0x10) &
                            (byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar26 >> 0x10);
              auVar106[7] = (byte)((uint)iVar50 >> 0x18) &
                            (byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar26 >> 0x18);
              auVar106[8] = (byte)iVar66 & (byte)iVar54 & (byte)iVar28;
              auVar106[9] = (byte)((uint)iVar66 >> 8) &
                            (byte)((uint)iVar54 >> 8) & (byte)((uint)iVar28 >> 8);
              auVar106[10] = (byte)((uint)iVar66 >> 0x10) &
                             (byte)((uint)iVar54 >> 0x10) & (byte)((uint)iVar28 >> 0x10);
              auVar106[0xb] =
                   (byte)((uint)iVar66 >> 0x18) &
                   (byte)((uint)iVar54 >> 0x18) & (byte)((uint)iVar28 >> 0x18);
              auVar106[0xc] = (byte)iVar70 & (byte)iVar68 & (byte)iVar30;
              auVar106[0xd] =
                   (byte)((uint)iVar70 >> 8) & (byte)((uint)iVar68 >> 8) & (byte)((uint)iVar30 >> 8)
              ;
              auVar106[0xe] =
                   (byte)((uint)iVar70 >> 0x10) &
                   (byte)((uint)iVar68 >> 0x10) & (byte)((uint)iVar30 >> 0x10);
              auVar106[0xf] =
                   (byte)((uint)iVar70 >> 0x18) &
                   (byte)((uint)iVar68 >> 0x18) & (byte)((uint)iVar30 >> 0x18);
              iVar14 = -(uint)(ABS(auVar134._0_4_) <= ABS(auVar100._0_4_));
              iVar26 = -(uint)(ABS(auVar134._4_4_) <= ABS(auVar100._4_4_));
              iVar28 = -(uint)(ABS(auVar134._8_4_) <= ABS(auVar100._8_4_));
              iVar30 = -(uint)(ABS(auVar134._12_4_) <= ABS(auVar100._12_4_));
              iVar33 = -(uint)(ABS(auVar93._0_4_) <= ABS(auVar100._0_4_));
              iVar42 = -(uint)(ABS(auVar93._4_4_) <= ABS(auVar100._4_4_));
              iVar46 = -(uint)(ABS(auVar93._8_4_) <= ABS(auVar100._8_4_));
              iVar50 = -(uint)(ABS(auVar93._12_4_) <= ABS(auVar100._12_4_));
              bVar116 = (byte)iVar33 & (byte)iVar14;
              bVar121 = (byte)((uint)iVar33 >> 8) & (byte)((uint)iVar14 >> 8);
              bVar122 = (byte)iVar42 & (byte)iVar26;
              bVar123 = (byte)((uint)iVar42 >> 8) & (byte)((uint)iVar26 >> 8);
              bVar124 = (byte)iVar46 & (byte)iVar28;
              bVar125 = (byte)((uint)iVar46 >> 8) & (byte)((uint)iVar28 >> 8);
              bVar126 = (byte)iVar50 & (byte)iVar30;
              bVar127 = (byte)((uint)iVar50 >> 8) & (byte)((uint)iVar30 >> 8);
              sVar151 = CONCAT11(bVar121 & ~auVar106[1],bVar116 & ~auVar106[0]);
              uVar152 = CONCAT13(bVar123 & ~auVar106[5],CONCAT12(bVar122 & ~auVar106[4],sVar151));
              uVar153 = CONCAT15(bVar125 & ~auVar106[9],CONCAT14(bVar124 & ~auVar106[8],uVar152));
              auVar160._0_4_ = (int)sVar151;
              auVar160._4_4_ = (int)(short)((uint)uVar152 >> 0x10);
              auVar160._8_4_ = (int)(short)((uint6)uVar153 >> 0x20);
              auVar160._12_4_ =
                   (int)(short)(CONCAT17(bVar127 & ~auVar106[0xd],
                                         CONCAT16(bVar126 & ~auVar106[0xc],uVar153)) >> 0x30);
              iVar54 = -(uint)(ABS(auVar93._0_4_) <= ABS(auVar134._0_4_));
              iVar66 = -(uint)(ABS(auVar93._4_4_) <= ABS(auVar134._4_4_));
              iVar68 = -(uint)(ABS(auVar93._8_4_) <= ABS(auVar134._8_4_));
              iVar70 = -(uint)(ABS(auVar93._12_4_) <= ABS(auVar134._12_4_));
              auVar117._0_8_ =
                   CONCAT17((byte)((uint)iVar42 >> 0x18) & (byte)((uint)iVar26 >> 0x18) |
                            ~(byte)((uint)iVar66 >> 0x18) | auVar106[7],
                            CONCAT16((byte)((uint)iVar42 >> 0x10) & (byte)((uint)iVar26 >> 0x10) |
                                     ~(byte)((uint)iVar66 >> 0x10) | auVar106[6],
                                     CONCAT15(bVar123 | ~(byte)((uint)iVar66 >> 8) | auVar106[5],
                                              CONCAT14(bVar122 | ~(byte)iVar66 | auVar106[4],
                                                       CONCAT13((byte)((uint)iVar33 >> 0x18) &
                                                                (byte)((uint)iVar14 >> 0x18) |
                                                                ~(byte)((uint)iVar54 >> 0x18) |
                                                                auVar106[3],
                                                                CONCAT12((byte)((uint)iVar33 >> 0x10
                                                                               ) & (byte)((uint)
                                                  iVar14 >> 0x10) | ~(byte)((uint)iVar54 >> 0x10) |
                                                  auVar106[2],
                                                  CONCAT11(bVar121 | ~(byte)((uint)iVar54 >> 8) |
                                                           auVar106[1],
                                                           bVar116 | ~(byte)iVar54 | auVar106[0]))))
                                             )));
              auVar117[8] = bVar124 | ~(byte)iVar68 | auVar106[8];
              auVar117[9] = bVar125 | ~(byte)((uint)iVar68 >> 8) | auVar106[9];
              auVar117[10] = (byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar28 >> 0x10) |
                             ~(byte)((uint)iVar68 >> 0x10) | auVar106[10];
              auVar117[0xb] =
                   (byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar28 >> 0x18) |
                   ~(byte)((uint)iVar68 >> 0x18) | auVar106[0xb];
              auVar117[0xc] = bVar126 | ~(byte)iVar70 | auVar106[0xc];
              auVar117[0xd] = bVar127 | ~(byte)((uint)iVar70 >> 8) | auVar106[0xd];
              auVar117[0xe] =
                   (byte)((uint)iVar50 >> 0x10) & (byte)((uint)iVar30 >> 0x10) |
                   ~(byte)((uint)iVar70 >> 0x10) | auVar106[0xe];
              auVar117[0xf] =
                   (byte)((uint)iVar50 >> 0x18) & (byte)((uint)iVar30 >> 0x18) |
                   ~(byte)((uint)iVar70 >> 0x18) | auVar106[0xf];
              auVar165._8_8_ = auVar117._8_8_;
              auVar165._0_8_ = auVar117._0_8_;
              auVar58 = auVar134 ^ (auVar134 ^ auVar93) & auVar165;
              auVar58 = auVar58 ^ (auVar58 ^ auVar100) & auVar160;
              auVar58 = auVar58 ^ (auVar58 ^ auVar144) & auVar106;
              auVar161._0_4_ = -(uint)(auVar58._0_4_ < 0.0);
              auVar161._4_4_ = -(uint)(auVar58._4_4_ < 0.0);
              auVar161._8_4_ = -(uint)(auVar58._8_4_ < 0.0);
              auVar161._12_4_ = -(uint)(auVar58._12_4_ < 0.0);
              auVar58 = auVar17 ^ (auVar17 ^ auVar18) & auVar161;
              auVar144 = auVar144 ^ (auVar144 ^ auVar100) & auVar106;
              fVar55 = auVar58._0_4_;
              fVar34 = auVar58._4_4_;
              fVar73 = auVar58._8_4_;
              fVar71 = auVar58._12_4_;
              auVar109._0_4_ =
                   -(uint)((int)((uint)CONCAT12(auVar106[4] | bVar122,
                                                (ushort)(auVar106[0] | bVar116)) << 0x1f) < 0);
              auVar109._4_4_ = -(uint)((int)((uint)(auVar106[4] | bVar122) << 0x1f) < 0);
              auVar109._8_4_ = -(uint)((int)((uint)(auVar106[8] | bVar124) << 0x1f) < 0);
              auVar109._12_4_ = -(uint)((int)((uint)(auVar106[0xc] | bVar126) << 0x1f) < 0);
              auVar100 = auVar100 ^ (auVar100 ^ auVar134) & auVar109;
              iVar54 = (int)(float)(int)(auVar144._0_4_ * fVar55 * 511.5 + 511.5);
              iVar66 = (int)(float)(int)(auVar144._4_4_ * fVar34 * 511.5 + 511.5);
              iVar68 = (int)(float)(int)(auVar144._8_4_ * fVar73 * 511.5 + 511.5);
              iVar70 = (int)(float)(int)(auVar144._12_4_ * fVar71 * 511.5 + 511.5);
              auVar93 = auVar93 ^ (auVar93 ^ auVar134 ^ (auVar134 ^ auVar93) & ~auVar117) &
                                  ~auVar109;
              auVar58 = auVar17 ^ (auVar17 ^ auVar76) & auVar117;
              fVar13 = (float)CONCAT13(auVar58[3] & ~(byte)((uint)auVar109._0_4_ >> 0x18) |
                                       auVar106[3] & auVar75[3],
                                       CONCAT12(auVar58[2] & ~(byte)((uint)auVar109._0_4_ >> 0x10) |
                                                auVar106[2] & auVar75[2],
                                                CONCAT11(auVar58[1] &
                                                         ~(byte)((uint)auVar109._0_4_ >> 8) |
                                                         auVar106[1] & auVar75[1],
                                                         auVar58[0] & ~(byte)auVar109._0_4_ |
                                                         auVar106[0] & auVar75[0])));
              auVar103._0_8_ =
                   CONCAT17(auVar58[7] & ~(byte)((uint)auVar109._4_4_ >> 0x18) |
                            auVar106[7] & auVar75[7],
                            CONCAT16(auVar58[6] & ~(byte)((uint)auVar109._4_4_ >> 0x10) |
                                     auVar106[6] & auVar75[6],
                                     CONCAT15(auVar58[5] & ~(byte)((uint)auVar109._4_4_ >> 8) |
                                              auVar106[5] & auVar75[5],
                                              CONCAT14(auVar58[4] & ~(byte)auVar109._4_4_ |
                                                       auVar106[4] & auVar75[4],fVar13))));
              auVar103[8] = auVar58[8] & ~(byte)auVar109._8_4_ | auVar106[8] & auVar75[8];
              auVar103[9] = auVar58[9] & ~(byte)((uint)auVar109._8_4_ >> 8) |
                            auVar106[9] & auVar75[9];
              auVar103[10] = auVar58[10] & ~(byte)((uint)auVar109._8_4_ >> 0x10) |
                             auVar106[10] & auVar75[10];
              auVar103[0xb] =
                   auVar58[0xb] & ~(byte)((uint)auVar109._8_4_ >> 0x18) |
                   auVar106[0xb] & auVar75[0xb];
              auVar107[0xc] = auVar58[0xc] & ~(byte)auVar109._12_4_ | auVar106[0xc] & auVar75[0xc];
              auVar107._0_12_ = auVar103;
              auVar107[0xd] =
                   auVar58[0xd] & ~(byte)((uint)auVar109._12_4_ >> 8) | auVar106[0xd] & auVar75[0xd]
              ;
              auVar107[0xe] =
                   auVar58[0xe] & ~(byte)((uint)auVar109._12_4_ >> 0x10) |
                   auVar106[0xe] & auVar75[0xe];
              auVar107[0xf] =
                   auVar58[0xf] & ~(byte)((uint)auVar109._12_4_ >> 0x18) |
                   auVar106[0xf] & auVar75[0xf];
              iVar33 = (int)(float)(int)(auVar100._0_4_ * fVar55 * 511.5 + 511.5) << 10;
              iVar42 = (int)(float)(int)(auVar100._4_4_ * fVar34 * 511.5 + 511.5) << 10;
              iVar46 = (int)(float)(int)(auVar100._8_4_ * fVar73 * 511.5 + 511.5) << 10;
              iVar50 = (int)(float)(int)(auVar100._12_4_ * fVar71 * 511.5 + 511.5) << 10;
              iVar14 = (int)(float)(int)(auVar93._0_4_ * fVar55 * 511.5 + 511.5) << 0x14;
              iVar26 = (int)(float)(int)(auVar93._4_4_ * fVar34 * 511.5 + 511.5) << 0x14;
              iVar28 = (int)(float)(int)(auVar93._8_4_ * fVar73 * 511.5 + 511.5) << 0x14;
              iVar30 = (int)(float)(int)(auVar93._12_4_ * fVar71 * 511.5 + 511.5) << 0x14;
              *(char *)(pfVar5 + 2) = (char)iVar68;
              *(byte *)((long)pfVar5 + 9) = (byte)((uint)iVar68 >> 8) | (byte)((uint)iVar46 >> 8);
              *(byte *)((long)pfVar5 + 10) =
                   (byte)((uint)iVar68 >> 0x10) | (byte)((uint)iVar46 >> 0x10) |
                   (byte)((uint)iVar28 >> 0x10);
              *(byte *)((long)pfVar5 + 0xb) =
                   (byte)((uint)((int)auVar103._8_4_ << 0x1e) >> 0x18) |
                   (byte)((uint)iVar68 >> 0x18) | (byte)((uint)iVar46 >> 0x18) |
                   (byte)((uint)iVar28 >> 0x18);
              *(char *)(pfVar5 + 3) = (char)iVar70;
              *(byte *)((long)pfVar5 + 0xd) = (byte)((uint)iVar70 >> 8) | (byte)((uint)iVar50 >> 8);
              *(byte *)((long)pfVar5 + 0xe) =
                   (byte)((uint)iVar70 >> 0x10) | (byte)((uint)iVar50 >> 0x10) |
                   (byte)((uint)iVar30 >> 0x10);
              *(byte *)((long)pfVar5 + 0xf) =
                   (byte)((uint)((int)auVar107._12_4_ << 0x1e) >> 0x18) |
                   (byte)((uint)iVar70 >> 0x18) | (byte)((uint)iVar50 >> 0x18) |
                   (byte)((uint)iVar30 >> 0x18);
              *(char *)pfVar5 = (char)iVar54;
              *(byte *)((long)pfVar5 + 1) = (byte)((uint)iVar54 >> 8) | (byte)((uint)iVar33 >> 8);
              *(byte *)((long)pfVar5 + 2) =
                   (byte)((uint)iVar54 >> 0x10) | (byte)((uint)iVar33 >> 0x10) |
                   (byte)((uint)iVar14 >> 0x10);
              *(byte *)((long)pfVar5 + 3) =
                   (byte)((uint)((int)fVar13 << 0x1e) >> 0x18) | (byte)((uint)iVar54 >> 0x18) |
                   (byte)((uint)iVar33 >> 0x18) | (byte)((uint)iVar14 >> 0x18);
              *(char *)(pfVar5 + 1) = (char)iVar66;
              *(byte *)((long)pfVar5 + 5) = (byte)((uint)iVar66 >> 8) | (byte)((uint)iVar42 >> 8);
              *(byte *)((long)pfVar5 + 6) =
                   (byte)((uint)iVar66 >> 0x10) | (byte)((uint)iVar42 >> 0x10) |
                   (byte)((uint)iVar26 >> 0x10);
              *(byte *)((long)pfVar5 + 7) =
                   (byte)((uint)((int)(float)((ulong)auVar103._0_8_ >> 0x20) << 0x1e) >> 0x18) |
                   (byte)((uint)iVar66 >> 0x18) | (byte)((uint)iVar42 >> 0x18) |
                   (byte)((uint)iVar26 >> 0x18);
              lVar8 = lVar11 + 4;
              uVar102 = lVar11 + 8;
              lVar11 = lVar8;
              pfVar5 = pfVar5 + 4;
            } while (uVar102 <= param_3);
          }
          lVar11 = param_3 - lVar8;
          if (lVar11 != 0) {
            pauVar4 = pauVar6 + lVar8;
            pfVar5 = param_2 + lVar8;
            do {
              pauVar6 = (undefined1 (*) [16])&stack0xffffffffffffff30;
              func_0x00010a005e80(&stack0xffffffffffffff30,pauVar4);
              *pfVar5 = (float)((int)((float)in_stack_ffffffffffffff30 * 511.5 + 511.5) |
                                (int)(SUB84(in_stack_ffffffffffffff30,4) * 511.5 + 511.5) << 10 |
                                SUB84(in_stack_ffffffffffffff38,4) << 0x1e |
                               (int)((float)in_stack_ffffffffffffff38 * 511.5 + 511.5) << 0x14);
              pauVar4 = pauVar4 + 1;
              lVar11 = lVar11 + -1;
              pfVar5 = pfVar5 + 1;
            } while (lVar11 != 0);
          }
          return pauVar6;
        }
        if (param_4 == 2) {
          pauVar4 = pauVar6;
          if (param_3 < 4) {
            lVar8 = 0;
          }
          else {
            auVar17 = NEON_fmov(0x3f800000,4);
            fStack_138 = auVar17._8_4_;
            fStack_134 = auVar17._12_4_;
            fStack_140 = auVar17._0_4_;
            fStack_13c = auVar17._4_4_;
            auVar18 = NEON_fmov(0xbf800000,4);
            lVar11 = 0;
            pauVar12 = pauVar6;
            pfVar5 = param_2;
            do {
              fVar13 = *(float *)*pauVar12;
              fVar31 = *(float *)(*pauVar12 + 4);
              fVar52 = *(float *)(*pauVar12 + 8);
              fVar55 = *(float *)(*pauVar12 + 0xc);
              fVar25 = *(float *)pauVar12[1];
              fVar40 = *(float *)(pauVar12[1] + 4);
              fVar64 = *(float *)(pauVar12[1] + 8);
              fVar34 = *(float *)(pauVar12[1] + 0xc);
              fVar27 = *(float *)pauVar12[2];
              fVar44 = *(float *)(pauVar12[2] + 4);
              fVar67 = *(float *)(pauVar12[2] + 8);
              fVar73 = *(float *)(pauVar12[2] + 0xc);
              fVar29 = *(float *)pauVar12[3];
              fVar48 = *(float *)(pauVar12[3] + 4);
              fVar69 = *(float *)(pauVar12[3] + 8);
              fVar71 = *(float *)(pauVar12[3] + 0xc);
              pauVar12 = pauVar12 + 4;
              auVar74._0_4_ = fVar13 * fVar13 + fVar31 * fVar31 + fVar52 * fVar52 + fVar55 * fVar55;
              auVar74._4_4_ = fVar25 * fVar25 + fVar40 * fVar40 + fVar64 * fVar64 + fVar34 * fVar34;
              auVar74._8_4_ = fVar27 * fVar27 + fVar44 * fVar44 + fVar67 * fVar67 + fVar73 * fVar73;
              auVar74._12_4_ = fVar29 * fVar29 + fVar48 * fVar48 + fVar69 * fVar69 + fVar71 * fVar71
              ;
              auVar2._8_4_ = 0x2b8cbccc;
              auVar2._0_8_ = 0x2b8cbccc2b8cbccc;
              auVar2._12_4_ = 0x2b8cbccc;
              auVar75 = NEON_fmax(auVar74,auVar2,4);
              fVar72 = fStack_140 / SQRT(auVar75._0_4_);
              fVar78 = fStack_13c / SQRT(auVar75._4_4_);
              fVar79 = fStack_138 / SQRT(auVar75._8_4_);
              fVar80 = fStack_134 / SQRT(auVar75._12_4_);
              fVar32 = ABS(fVar55 * fVar72);
              fVar41 = ABS(fVar34 * fVar78);
              fVar45 = ABS(fVar73 * fVar79);
              fVar49 = ABS(fVar71 * fVar80);
              uStack_1a0 = auVar18._0_4_;
              uStack_19c = auVar18._4_4_;
              uStack_198 = auVar18._8_4_;
              uStack_194 = auVar18._12_4_;
              fVar55 = (float)((uint)fStack_140 ^
                              ((uint)fStack_140 ^ uStack_1a0) & -(uint)(fVar55 * fVar72 < 0.0));
              fVar95 = (float)((uint)fStack_13c ^
                              ((uint)fStack_13c ^ uStack_19c) & -(uint)(fVar34 * fVar78 < 0.0));
              fVar136 = (float)((uint)fStack_138 ^
                               ((uint)fStack_138 ^ uStack_198) & -(uint)(fVar73 * fVar79 < 0.0));
              fVar162 = (float)((uint)fStack_134 ^
                               ((uint)fStack_134 ^ uStack_194) & -(uint)(fVar71 * fVar80 < 0.0));
              fVar34 = fStack_140 - fVar32 * fVar32;
              fVar71 = fStack_13c - fVar41 * fVar41;
              fVar53 = fStack_140 / SQRT(fVar34 + 1e-06);
              fVar65 = fStack_13c / SQRT(fVar71 + 1e-06);
              fVar73 = (float)_atanf();
              fVar34 = (float)_atanf(CONCAT44((fVar71 * fVar65) / fVar41,(fVar34 * fVar53) / fVar32)
                                    );
              fVar71 = (float)_atanf();
              fVar32 = (float)_atanf();
              auVar1._8_4_ = 0x447fc000;
              auVar1._0_8_ = 0x447fc000447fc000;
              auVar1._12_4_ = 0x447fc000;
              fVar53 = fVar53 * fVar34 * 0.63661975;
              fVar65 = fVar65 * fVar73 * 0.63661975;
              fVar34 = (fStack_138 / SQRT((fStack_138 - fVar45 * fVar45) + 1e-06)) *
                       fVar71 * 0.63661975;
              fVar73 = (fStack_134 / SQRT((fStack_134 - fVar49 * fVar49) + 1e-06)) *
                       fVar32 * 0.63661975;
              auVar35._0_4_ = fVar13 * fVar72 * fVar55 * fVar53 * 0.5 + 0.5;
              auVar35._4_4_ = fVar25 * fVar78 * fVar95 * fVar65 * 0.5 + 0.5;
              auVar35._8_4_ = fVar27 * fVar79 * fVar136 * fVar34 * 0.5 + 0.5;
              auVar35._12_4_ = fVar29 * fVar80 * fVar162 * fVar73 * 0.5 + 0.5;
              auVar63 = ZEXT216(0);
              auVar75 = NEON_fmax(auVar35,auVar63,4);
              auVar75 = NEON_fmin(auVar75,auVar17,4);
              auVar36._0_4_ = (int)(auVar75._0_4_ * 1023.0 + 0.5);
              auVar36._4_4_ = (int)(auVar75._4_4_ * 1023.0 + 0.5);
              auVar36._8_4_ = (int)(auVar75._8_4_ * 1023.0 + 0.5);
              auVar36._12_4_ = (int)(auVar75._12_4_ * 1023.0 + 0.5);
              auVar57._0_4_ = fVar31 * fVar72 * fVar55 * fVar53 * 0.5 + 0.5;
              auVar57._4_4_ = fVar40 * fVar78 * fVar95 * fVar65 * 0.5 + 0.5;
              auVar57._8_4_ = fVar44 * fVar79 * fVar136 * fVar34 * 0.5 + 0.5;
              auVar57._12_4_ = fVar48 * fVar80 * fVar162 * fVar73 * 0.5 + 0.5;
              auVar75 = NEON_fmax(auVar57,auVar63,4);
              auVar58 = NEON_fmin(auVar75,auVar17,4);
              auVar75 = NEON_fmin(auVar36,auVar1,4);
              auVar59._0_4_ = (int)(auVar58._0_4_ * 1023.0 + 0.5);
              auVar59._4_4_ = (int)(auVar58._4_4_ * 1023.0 + 0.5);
              auVar59._8_4_ = (int)(auVar58._8_4_ * 1023.0 + 0.5);
              auVar59._12_4_ = (int)(auVar58._12_4_ * 1023.0 + 0.5);
              auVar58 = NEON_fmin(auVar59,auVar1,4);
              auVar19._0_4_ = fVar52 * fVar72 * fVar55 * fVar53 * 0.5 + 0.5;
              auVar19._4_4_ = fVar64 * fVar78 * fVar95 * fVar65 * 0.5 + 0.5;
              auVar19._8_4_ = fVar67 * fVar79 * fVar136 * fVar34 * 0.5 + 0.5;
              auVar19._12_4_ = fVar69 * fVar80 * fVar162 * fVar73 * 0.5 + 0.5;
              iVar33 = (int)auVar75._0_4_;
              iVar42 = (int)auVar75._4_4_;
              iVar46 = (int)auVar75._8_4_;
              iVar50 = (int)auVar75._12_4_;
              auVar75 = NEON_fmax(auVar19,auVar63,4);
              auVar75 = NEON_fmin(auVar75,auVar17,4);
              auVar20._0_4_ = (int)(auVar75._0_4_ * 1023.0 + 0.5);
              auVar20._4_4_ = (int)(auVar75._4_4_ * 1023.0 + 0.5);
              auVar20._8_4_ = (int)(auVar75._8_4_ * 1023.0 + 0.5);
              auVar20._12_4_ = (int)(auVar75._12_4_ * 1023.0 + 0.5);
              auVar75 = NEON_fmin(auVar20,auVar1,4);
              iVar54 = (int)auVar58._0_4_ << 10;
              iVar66 = (int)auVar58._4_4_ << 10;
              iVar68 = (int)auVar58._8_4_ << 10;
              iVar70 = (int)auVar58._12_4_ << 10;
              iVar14 = (int)auVar75._0_4_ << 0x14;
              iVar26 = (int)auVar75._4_4_ << 0x14;
              iVar28 = (int)auVar75._8_4_ << 0x14;
              iVar30 = (int)auVar75._12_4_ << 0x14;
              *(char *)(pfVar5 + 2) = (char)iVar46;
              *(byte *)((long)pfVar5 + 9) = (byte)((uint)iVar68 >> 8) | (byte)((uint)iVar46 >> 8);
              *(byte *)((long)pfVar5 + 10) =
                   (byte)((uint)iVar68 >> 0x10) | (byte)((uint)iVar46 >> 0x10) |
                   (byte)((uint)iVar28 >> 0x10);
              *(byte *)((long)pfVar5 + 0xb) =
                   (byte)((uint)iVar68 >> 0x18) | (byte)((uint)iVar46 >> 0x18) |
                   (byte)((uint)iVar28 >> 0x18);
              *(char *)(pfVar5 + 3) = (char)iVar50;
              *(byte *)((long)pfVar5 + 0xd) = (byte)((uint)iVar70 >> 8) | (byte)((uint)iVar50 >> 8);
              *(byte *)((long)pfVar5 + 0xe) =
                   (byte)((uint)iVar70 >> 0x10) | (byte)((uint)iVar50 >> 0x10) |
                   (byte)((uint)iVar30 >> 0x10);
              *(byte *)((long)pfVar5 + 0xf) =
                   (byte)((uint)iVar70 >> 0x18) | (byte)((uint)iVar50 >> 0x18) |
                   (byte)((uint)iVar30 >> 0x18);
              *(char *)pfVar5 = (char)iVar33;
              *(byte *)((long)pfVar5 + 1) = (byte)((uint)iVar54 >> 8) | (byte)((uint)iVar33 >> 8);
              *(byte *)((long)pfVar5 + 2) =
                   (byte)((uint)iVar54 >> 0x10) | (byte)((uint)iVar33 >> 0x10) |
                   (byte)((uint)iVar14 >> 0x10);
              *(byte *)((long)pfVar5 + 3) =
                   (byte)((uint)iVar54 >> 0x18) | (byte)((uint)iVar33 >> 0x18) |
                   (byte)((uint)iVar14 >> 0x18);
              *(char *)(pfVar5 + 1) = (char)iVar42;
              *(byte *)((long)pfVar5 + 5) = (byte)((uint)iVar66 >> 8) | (byte)((uint)iVar42 >> 8);
              *(byte *)((long)pfVar5 + 6) =
                   (byte)((uint)iVar66 >> 0x10) | (byte)((uint)iVar42 >> 0x10) |
                   (byte)((uint)iVar26 >> 0x10);
              *(byte *)((long)pfVar5 + 7) =
                   (byte)((uint)iVar66 >> 0x18) | (byte)((uint)iVar42 >> 0x18) |
                   (byte)((uint)iVar26 >> 0x18);
              lVar8 = lVar11 + 4;
              uVar102 = lVar11 + 8;
              lVar11 = lVar8;
              pfVar5 = pfVar5 + 4;
            } while (uVar102 <= param_3);
          }
          lVar11 = param_3 - lVar8;
          if (lVar11 != 0) {
            pfVar5 = (float *)(pauVar6[lVar8] + 8);
            uVar102 = NEON_fmov(0x3f800000,4);
            pfVar9 = param_2 + lVar8;
            do {
              fVar71 = *pfVar5;
              fVar13 = pfVar5[1];
              fVar55 = pfVar5[-2];
              fVar73 = pfVar5[-1];
              fVar34 = fVar13 * fVar13 + fVar55 * fVar55 + fVar73 * fVar73 + fVar71 * fVar71;
              if (fVar34 == 0.0) {
                fVar55 = 0.0;
                fVar73 = 0.0;
                fVar71 = 0.0;
                fVar13 = 1.0;
              }
              else {
                fVar34 = 1.0 / SQRT(fVar34);
                fVar13 = fVar13 * fVar34;
                fVar55 = fVar55 * fVar34;
                fVar73 = fVar73 * fVar34;
                fVar71 = fVar71 * fVar34;
              }
              pfVar5 = pfVar5 + 4;
              uVar56 = CONCAT44(fVar71,fVar73) ^
                       (CONCAT44(fVar71,fVar73) ^ CONCAT44(-fVar71,-fVar73)) &
                       CONCAT44(-(uint)(fVar13 < 0.0),-(uint)(fVar13 < 0.0));
              fVar34 = -fVar13;
              fVar73 = -fVar55;
              if (0.0 <= fVar13) {
                fVar34 = fVar13;
                fVar73 = fVar55;
              }
              fVar13 = (float)_atanf();
              fVar55 = (1.0 / SQRT((1.0 - fVar34 * fVar34) + 1e-06)) * fVar13 * 0.63661975;
              fVar34 = fVar73 * fVar55 * 0.5 + 0.5;
              fVar13 = 0.0;
              if (0.0 <= fVar34) {
                fVar13 = fVar34;
              }
              fVar34 = 1.0;
              if (fVar13 <= 1.0) {
                fVar34 = fVar13;
              }
              fVar13 = (float)uVar56 * fVar55 * 0.5 + 0.5;
              fVar55 = (float)(uVar56 >> 0x20) * fVar55 * 0.5 + 0.5;
              iVar14 = -(uint)(fVar13 < 0.0);
              iVar26 = -(uint)(fVar55 < 0.0);
              fVar13 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                                       CONCAT12((byte)((uint)fVar13 >> 0x10) &
                                                ~(byte)((uint)iVar14 >> 0x10),
                                                CONCAT11((byte)((uint)fVar13 >> 8) &
                                                         ~(byte)((uint)iVar14 >> 8),
                                                         SUB41(fVar13,0) & ~(byte)iVar14)));
              uVar56 = CONCAT17((byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                                CONCAT16((byte)((uint)fVar55 >> 0x10) &
                                         ~(byte)((uint)iVar26 >> 0x10),
                                         CONCAT15((byte)((uint)fVar55 >> 8) &
                                                  ~(byte)((uint)iVar26 >> 8),
                                                  CONCAT14(SUB41(fVar55,0) & ~(byte)iVar26,fVar13)))
                               );
              uVar56 = uVar56 ^ (uVar56 ^ uVar102) &
                                CONCAT44(-(uint)((float)(uVar102 >> 0x20) < (float)(uVar56 >> 0x20))
                                         ,-(uint)((float)uVar102 < fVar13));
              uVar16 = NEON_ushl(CONCAT44((int)(float)(int)((float)(uVar56 >> 0x20) * 1023.0 + 0.5),
                                          (int)(float)(int)((float)uVar56 * 1023.0 + 0.5)),
                                 0x140000000a,4);
              *pfVar9 = (float)((uint)uVar16 | (int)(fVar34 * 1023.0 + 0.5) |
                               (uint)((ulong)uVar16 >> 0x20));
              lVar11 = lVar11 + -1;
              pfVar9 = pfVar9 + 1;
            } while (lVar11 != 0);
          }
          return pauVar4;
        }
      }
      else {
        if (param_4 == 3) {
          if (param_3 < 4) {
            lVar8 = 0;
          }
          else {
            auVar17._8_4_ = 0x2b8cbccc;
            auVar17._0_8_ = 0x2b8cbccc2b8cbccc;
            auVar17._12_4_ = 0x2b8cbccc;
            auVar18 = NEON_fmov(0x3f800000,4);
            auVar75 = ZEXT216(0);
            auVar58 = NEON_fmov(0xbf800000,4);
            auVar63._8_4_ = 0x447fc000;
            auVar63._0_8_ = 0x447fc000447fc000;
            auVar63._12_4_ = 0x447fc000;
            lVar11 = 0;
            pauVar4 = pauVar6;
            pfVar5 = param_2;
            do {
              fVar29 = *(float *)*pauVar4;
              fVar41 = *(float *)(*pauVar4 + 4);
              fVar49 = *(float *)(*pauVar4 + 8);
              fVar69 = *(float *)(*pauVar4 + 0xc);
              fVar162 = *(float *)pauVar4[1];
              fVar44 = *(float *)(pauVar4[1] + 4);
              fVar52 = *(float *)(pauVar4[1] + 8);
              fVar72 = *(float *)(pauVar4[1] + 0xc);
              fVar31 = *(float *)pauVar4[2];
              fVar45 = *(float *)(pauVar4[2] + 4);
              fVar64 = *(float *)(pauVar4[2] + 8);
              fVar78 = *(float *)(pauVar4[2] + 0xc);
              fVar40 = *(float *)pauVar4[3];
              fVar48 = *(float *)(pauVar4[3] + 4);
              fVar67 = *(float *)(pauVar4[3] + 8);
              fVar79 = *(float *)(pauVar4[3] + 0xc);
              pauVar4 = pauVar4 + 4;
              auVar119._0_4_ = fVar29 * fVar29 + fVar41 * fVar41 + fVar49 * fVar49 + fVar69 * fVar69
              ;
              auVar119._4_4_ =
                   fVar162 * fVar162 + fVar44 * fVar44 + fVar52 * fVar52 + fVar72 * fVar72;
              auVar119._8_4_ = fVar31 * fVar31 + fVar45 * fVar45 + fVar64 * fVar64 + fVar78 * fVar78
              ;
              auVar119._12_4_ =
                   fVar40 * fVar40 + fVar48 * fVar48 + fVar67 * fVar67 + fVar79 * fVar79;
              auVar119 = NEON_fmax(auVar119,auVar17,4);
              fVar13 = auVar18._0_4_;
              fVar71 = fVar13 / SQRT(auVar119._0_4_);
              fVar55 = auVar18._4_4_;
              fVar32 = fVar55 / SQRT(auVar119._4_4_);
              fVar34 = auVar18._8_4_;
              fVar53 = fVar34 / SQRT(auVar119._8_4_);
              fVar73 = auVar18._12_4_;
              fVar25 = fVar73 / SQRT(auVar119._12_4_);
              auVar159._0_4_ = -(uint)(fVar69 * fVar71 < 0.0);
              auVar159._4_4_ = -(uint)(fVar72 * fVar32 < 0.0);
              auVar159._8_4_ = -(uint)(fVar78 * fVar53 < 0.0);
              auVar159._12_4_ = -(uint)(fVar79 * fVar25 < 0.0);
              auVar119 = auVar18 ^ (auVar18 ^ auVar58) & auVar159;
              fVar95 = auVar119._0_4_;
              fVar65 = auVar119._4_4_;
              fVar27 = auVar119._8_4_;
              fVar136 = auVar119._12_4_;
              fVar13 = fVar13 / (ABS(fVar69 * fVar71) + fVar13);
              fVar55 = fVar55 / (ABS(fVar72 * fVar32) + fVar55);
              fVar34 = fVar34 / (ABS(fVar78 * fVar53) + fVar34);
              fVar73 = fVar73 / (ABS(fVar79 * fVar25) + fVar73);
              auVar141._0_4_ = fVar29 * fVar71 * fVar95 * fVar13 * 0.5 + 0.5;
              auVar141._4_4_ = fVar162 * fVar32 * fVar65 * fVar55 * 0.5 + 0.5;
              auVar141._8_4_ = fVar31 * fVar53 * fVar27 * fVar34 * 0.5 + 0.5;
              auVar141._12_4_ = fVar40 * fVar25 * fVar136 * fVar73 * 0.5 + 0.5;
              auVar119 = NEON_fmax(auVar141,auVar75,4);
              auVar119 = NEON_fmin(auVar119,auVar18,4);
              auVar142._0_4_ = (int)(auVar119._0_4_ * 1023.0 + 0.5);
              auVar142._4_4_ = (int)(auVar119._4_4_ * 1023.0 + 0.5);
              auVar142._8_4_ = (int)(auVar119._8_4_ * 1023.0 + 0.5);
              auVar142._12_4_ = (int)(auVar119._12_4_ * 1023.0 + 0.5);
              auVar156._0_4_ = fVar41 * fVar71 * fVar95 * fVar13 * 0.5 + 0.5;
              auVar156._4_4_ = fVar44 * fVar32 * fVar65 * fVar55 * 0.5 + 0.5;
              auVar156._8_4_ = fVar45 * fVar53 * fVar27 * fVar34 * 0.5 + 0.5;
              auVar156._12_4_ = fVar48 * fVar25 * fVar136 * fVar73 * 0.5 + 0.5;
              auVar119 = NEON_fmin(auVar142,auVar63,4);
              auVar157 = NEON_fmax(auVar156,auVar75,4);
              auVar157 = NEON_fmin(auVar157,auVar18,4);
              auVar158._0_4_ = (int)(auVar157._0_4_ * 1023.0 + 0.5);
              auVar158._4_4_ = (int)(auVar157._4_4_ * 1023.0 + 0.5);
              auVar158._8_4_ = (int)(auVar157._8_4_ * 1023.0 + 0.5);
              auVar158._12_4_ = (int)(auVar157._12_4_ * 1023.0 + 0.5);
              auVar159 = NEON_fmin(auVar158,auVar63,4);
              auVar157._0_4_ = fVar49 * fVar71 * fVar95 * fVar13 * 0.5 + 0.5;
              auVar157._4_4_ = fVar52 * fVar32 * fVar65 * fVar55 * 0.5 + 0.5;
              auVar157._8_4_ = fVar64 * fVar53 * fVar27 * fVar34 * 0.5 + 0.5;
              auVar157._12_4_ = fVar67 * fVar25 * fVar136 * fVar73 * 0.5 + 0.5;
              iVar33 = (int)auVar119._0_4_;
              iVar42 = (int)auVar119._4_4_;
              iVar46 = (int)auVar119._8_4_;
              iVar50 = (int)auVar119._12_4_;
              auVar119 = NEON_fmax(auVar157,auVar75,4);
              auVar119 = NEON_fmin(auVar119,auVar18,4);
              auVar91._0_4_ = (int)(auVar119._0_4_ * 1023.0 + 0.5);
              auVar91._4_4_ = (int)(auVar119._4_4_ * 1023.0 + 0.5);
              auVar91._8_4_ = (int)(auVar119._8_4_ * 1023.0 + 0.5);
              auVar91._12_4_ = (int)(auVar119._12_4_ * 1023.0 + 0.5);
              auVar119 = NEON_fmin(auVar91,auVar63,4);
              iVar54 = (int)auVar159._0_4_ << 10;
              iVar66 = (int)auVar159._4_4_ << 10;
              iVar68 = (int)auVar159._8_4_ << 10;
              iVar70 = (int)auVar159._12_4_ << 10;
              iVar14 = (int)auVar119._0_4_ << 0x14;
              iVar26 = (int)auVar119._4_4_ << 0x14;
              iVar28 = (int)auVar119._8_4_ << 0x14;
              iVar30 = (int)auVar119._12_4_ << 0x14;
              *(char *)(pfVar5 + 2) = (char)iVar46;
              *(byte *)((long)pfVar5 + 9) = (byte)((uint)iVar68 >> 8) | (byte)((uint)iVar46 >> 8);
              *(byte *)((long)pfVar5 + 10) =
                   (byte)((uint)iVar68 >> 0x10) | (byte)((uint)iVar46 >> 0x10) |
                   (byte)((uint)iVar28 >> 0x10);
              *(byte *)((long)pfVar5 + 0xb) =
                   (byte)((uint)iVar68 >> 0x18) | (byte)((uint)iVar46 >> 0x18) |
                   (byte)((uint)iVar28 >> 0x18);
              *(char *)(pfVar5 + 3) = (char)iVar50;
              *(byte *)((long)pfVar5 + 0xd) = (byte)((uint)iVar70 >> 8) | (byte)((uint)iVar50 >> 8);
              *(byte *)((long)pfVar5 + 0xe) =
                   (byte)((uint)iVar70 >> 0x10) | (byte)((uint)iVar50 >> 0x10) |
                   (byte)((uint)iVar30 >> 0x10);
              *(byte *)((long)pfVar5 + 0xf) =
                   (byte)((uint)iVar70 >> 0x18) | (byte)((uint)iVar50 >> 0x18) |
                   (byte)((uint)iVar30 >> 0x18);
              *(char *)pfVar5 = (char)iVar33;
              *(byte *)((long)pfVar5 + 1) = (byte)((uint)iVar54 >> 8) | (byte)((uint)iVar33 >> 8);
              *(byte *)((long)pfVar5 + 2) =
                   (byte)((uint)iVar54 >> 0x10) | (byte)((uint)iVar33 >> 0x10) |
                   (byte)((uint)iVar14 >> 0x10);
              *(byte *)((long)pfVar5 + 3) =
                   (byte)((uint)iVar54 >> 0x18) | (byte)((uint)iVar33 >> 0x18) |
                   (byte)((uint)iVar14 >> 0x18);
              *(char *)(pfVar5 + 1) = (char)iVar42;
              *(byte *)((long)pfVar5 + 5) = (byte)((uint)iVar66 >> 8) | (byte)((uint)iVar42 >> 8);
              *(byte *)((long)pfVar5 + 6) =
                   (byte)((uint)iVar66 >> 0x10) | (byte)((uint)iVar42 >> 0x10) |
                   (byte)((uint)iVar26 >> 0x10);
              *(byte *)((long)pfVar5 + 7) =
                   (byte)((uint)iVar66 >> 0x18) | (byte)((uint)iVar42 >> 0x18) |
                   (byte)((uint)iVar26 >> 0x18);
              lVar8 = lVar11 + 4;
              uVar102 = lVar11 + 8;
              lVar11 = lVar8;
              pfVar5 = pfVar5 + 4;
            } while (uVar102 <= param_3);
          }
          lVar11 = param_3 - lVar8;
          if (lVar11 != 0) {
            pfVar5 = (float *)(pauVar6[lVar8] + 8);
            uVar102 = NEON_fmov(0x3f800000,4);
            pfVar9 = param_2 + lVar8;
            do {
              fVar71 = *pfVar5;
              fVar13 = pfVar5[1];
              fVar55 = pfVar5[-2];
              fVar73 = pfVar5[-1];
              fVar34 = fVar13 * fVar13 + fVar55 * fVar55 + fVar73 * fVar73 + fVar71 * fVar71;
              if (fVar34 == 0.0) {
                fVar55 = 0.0;
                fVar73 = 0.0;
                fVar71 = 0.0;
                fVar13 = 1.0;
              }
              else {
                fVar34 = 1.0 / SQRT(fVar34);
                fVar13 = fVar13 * fVar34;
                fVar55 = fVar55 * fVar34;
                fVar73 = fVar73 * fVar34;
                fVar71 = fVar71 * fVar34;
              }
              uVar56 = CONCAT44(fVar71,fVar73) ^
                       (CONCAT44(fVar71,fVar73) ^ CONCAT44(-fVar71,-fVar73)) &
                       CONCAT44(-(uint)(fVar13 < 0.0),-(uint)(fVar13 < 0.0));
              fVar34 = -fVar13;
              fVar73 = -fVar55;
              if (0.0 <= fVar13) {
                fVar34 = fVar13;
                fVar73 = fVar55;
              }
              fVar34 = 1.0 / (fVar34 + 1.0);
              fVar55 = fVar73 * fVar34 * 0.5 + 0.5;
              fVar13 = 0.0;
              if (0.0 <= fVar55) {
                fVar13 = fVar55;
              }
              fVar55 = 1.0;
              if (fVar13 <= 1.0) {
                fVar55 = fVar13;
              }
              fVar13 = (float)uVar56 * fVar34 * 0.5 + 0.5;
              fVar34 = (float)(uVar56 >> 0x20) * fVar34 * 0.5 + 0.5;
              iVar14 = -(uint)(fVar13 < 0.0);
              iVar26 = -(uint)(fVar34 < 0.0);
              fVar13 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                                       CONCAT12((byte)((uint)fVar13 >> 0x10) &
                                                ~(byte)((uint)iVar14 >> 0x10),
                                                CONCAT11((byte)((uint)fVar13 >> 8) &
                                                         ~(byte)((uint)iVar14 >> 8),
                                                         SUB41(fVar13,0) & ~(byte)iVar14)));
              uVar56 = CONCAT17((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                                CONCAT16((byte)((uint)fVar34 >> 0x10) &
                                         ~(byte)((uint)iVar26 >> 0x10),
                                         CONCAT15((byte)((uint)fVar34 >> 8) &
                                                  ~(byte)((uint)iVar26 >> 8),
                                                  CONCAT14(SUB41(fVar34,0) & ~(byte)iVar26,fVar13)))
                               );
              uVar56 = uVar56 ^ (uVar56 ^ uVar102) &
                                CONCAT44(-(uint)((float)(uVar102 >> 0x20) < (float)(uVar56 >> 0x20))
                                         ,-(uint)((float)uVar102 < fVar13));
              uVar16 = NEON_ushl(CONCAT44((int)(float)(int)((float)(uVar56 >> 0x20) * 1023.0 + 0.5),
                                          (int)(float)(int)((float)uVar56 * 1023.0 + 0.5)),
                                 0x140000000a,4);
              pfVar5 = pfVar5 + 4;
              *pfVar9 = (float)((uint)uVar16 | (int)(fVar55 * 1023.0 + 0.5) |
                               (uint)((ulong)uVar16 >> 0x20));
              lVar11 = lVar11 + -1;
              pfVar9 = pfVar9 + 1;
            } while (lVar11 != 0);
          }
          return pauVar6;
        }
        if (param_4 == 4) {
          if (param_3 < 4) {
            lVar8 = 0;
          }
          else {
            auVar18._8_4_ = 0x2b8cbccc;
            auVar18._0_8_ = 0x2b8cbccc2b8cbccc;
            auVar18._12_4_ = 0x2b8cbccc;
            auVar17 = NEON_fmov(0x3f800000,4);
            auVar75 = ZEXT216(0);
            auVar58 = NEON_fmov(0xbf800000,4);
            auVar82._8_4_ = 0x447fc000;
            auVar82._0_8_ = 0x447fc000447fc000;
            auVar82._12_4_ = 0x447fc000;
            lVar11 = 0;
            pauVar4 = pauVar6;
            pfVar5 = param_2;
            do {
              fVar95 = *(float *)*pauVar4;
              fVar29 = *(float *)(*pauVar4 + 4);
              fVar41 = *(float *)(*pauVar4 + 8);
              fVar49 = *(float *)(*pauVar4 + 0xc);
              fVar65 = *(float *)pauVar4[1];
              fVar162 = *(float *)(pauVar4[1] + 4);
              fVar44 = *(float *)(pauVar4[1] + 8);
              fVar52 = *(float *)(pauVar4[1] + 0xc);
              fVar27 = *(float *)pauVar4[2];
              fVar31 = *(float *)(pauVar4[2] + 4);
              fVar45 = *(float *)(pauVar4[2] + 8);
              fVar64 = *(float *)(pauVar4[2] + 0xc);
              fVar136 = *(float *)pauVar4[3];
              fVar40 = *(float *)(pauVar4[3] + 4);
              fVar48 = *(float *)(pauVar4[3] + 8);
              fVar67 = *(float *)(pauVar4[3] + 0xc);
              pauVar4 = pauVar4 + 4;
              auVar88._0_4_ = fVar95 * fVar95 + fVar29 * fVar29 + fVar41 * fVar41 + fVar49 * fVar49;
              auVar88._4_4_ =
                   fVar65 * fVar65 + fVar162 * fVar162 + fVar44 * fVar44 + fVar52 * fVar52;
              auVar88._8_4_ = fVar27 * fVar27 + fVar31 * fVar31 + fVar45 * fVar45 + fVar64 * fVar64;
              auVar88._12_4_ =
                   fVar136 * fVar136 + fVar40 * fVar40 + fVar48 * fVar48 + fVar67 * fVar67;
              auVar63 = NEON_fmax(auVar88,auVar18,4);
              fVar13 = auVar17._0_4_;
              fVar71 = fVar13 / SQRT(auVar63._0_4_);
              fVar55 = auVar17._4_4_;
              fVar32 = fVar55 / SQRT(auVar63._4_4_);
              fVar34 = auVar17._8_4_;
              fVar53 = fVar34 / SQRT(auVar63._8_4_);
              fVar73 = auVar17._12_4_;
              fVar25 = fVar73 / SQRT(auVar63._12_4_);
              auVar132._0_4_ = -(uint)(fVar49 * fVar71 < 0.0);
              auVar132._4_4_ = -(uint)(fVar52 * fVar32 < 0.0);
              auVar132._8_4_ = -(uint)(fVar64 * fVar53 < 0.0);
              auVar132._12_4_ = -(uint)(fVar67 * fVar25 < 0.0);
              auVar63 = auVar17 ^ (auVar17 ^ auVar58) & auVar132;
              fVar69 = auVar63._0_4_;
              fVar72 = auVar63._4_4_;
              fVar78 = auVar63._8_4_;
              fVar79 = auVar63._12_4_;
              fVar13 = fVar13 / SQRT(ABS(fVar49 * fVar71) + fVar13);
              fVar55 = fVar55 / SQRT(ABS(fVar52 * fVar32) + fVar55);
              fVar34 = fVar34 / SQRT(ABS(fVar64 * fVar53) + fVar34);
              fVar73 = fVar73 / SQRT(ABS(fVar67 * fVar25) + fVar73);
              auVar97._0_4_ = fVar95 * fVar71 * fVar69 * fVar13 * 0.5 + 0.5;
              auVar97._4_4_ = fVar65 * fVar32 * fVar72 * fVar55 * 0.5 + 0.5;
              auVar97._8_4_ = fVar27 * fVar53 * fVar78 * fVar34 * 0.5 + 0.5;
              auVar97._12_4_ = fVar136 * fVar25 * fVar79 * fVar73 * 0.5 + 0.5;
              auVar63 = NEON_fmax(auVar97,auVar75,4);
              auVar63 = NEON_fmin(auVar63,auVar17,4);
              auVar98._0_4_ = (int)(auVar63._0_4_ * 1023.0 + 0.5);
              auVar98._4_4_ = (int)(auVar63._4_4_ * 1023.0 + 0.5);
              auVar98._8_4_ = (int)(auVar63._8_4_ * 1023.0 + 0.5);
              auVar98._12_4_ = (int)(auVar63._12_4_ * 1023.0 + 0.5);
              auVar154._0_4_ = fVar29 * fVar71 * fVar69 * fVar13 * 0.5 + 0.5;
              auVar154._4_4_ = fVar162 * fVar32 * fVar72 * fVar55 * 0.5 + 0.5;
              auVar154._8_4_ = fVar31 * fVar53 * fVar78 * fVar34 * 0.5 + 0.5;
              auVar154._12_4_ = fVar40 * fVar25 * fVar79 * fVar73 * 0.5 + 0.5;
              auVar63 = NEON_fmin(auVar98,auVar82,4);
              auVar119 = NEON_fmax(auVar154,auVar75,4);
              auVar119 = NEON_fmin(auVar119,auVar17,4);
              auVar155._0_4_ = (int)(auVar119._0_4_ * 1023.0 + 0.5);
              auVar155._4_4_ = (int)(auVar119._4_4_ * 1023.0 + 0.5);
              auVar155._8_4_ = (int)(auVar119._8_4_ * 1023.0 + 0.5);
              auVar155._12_4_ = (int)(auVar119._12_4_ * 1023.0 + 0.5);
              auVar119 = NEON_fmin(auVar155,auVar82,4);
              auVar89._0_4_ = fVar41 * fVar71 * fVar69 * fVar13 * 0.5 + 0.5;
              auVar89._4_4_ = fVar44 * fVar32 * fVar72 * fVar55 * 0.5 + 0.5;
              auVar89._8_4_ = fVar45 * fVar53 * fVar78 * fVar34 * 0.5 + 0.5;
              auVar89._12_4_ = fVar48 * fVar25 * fVar79 * fVar73 * 0.5 + 0.5;
              iVar33 = (int)auVar63._0_4_;
              iVar42 = (int)auVar63._4_4_;
              iVar46 = (int)auVar63._8_4_;
              iVar50 = (int)auVar63._12_4_;
              auVar63 = NEON_fmax(auVar89,auVar75,4);
              auVar63 = NEON_fmin(auVar63,auVar17,4);
              auVar90._0_4_ = (int)(auVar63._0_4_ * 1023.0 + 0.5);
              auVar90._4_4_ = (int)(auVar63._4_4_ * 1023.0 + 0.5);
              auVar90._8_4_ = (int)(auVar63._8_4_ * 1023.0 + 0.5);
              auVar90._12_4_ = (int)(auVar63._12_4_ * 1023.0 + 0.5);
              auVar63 = NEON_fmin(auVar90,auVar82,4);
              iVar54 = (int)auVar119._0_4_ << 10;
              iVar66 = (int)auVar119._4_4_ << 10;
              iVar68 = (int)auVar119._8_4_ << 10;
              iVar70 = (int)auVar119._12_4_ << 10;
              iVar14 = (int)auVar63._0_4_ << 0x14;
              iVar26 = (int)auVar63._4_4_ << 0x14;
              iVar28 = (int)auVar63._8_4_ << 0x14;
              iVar30 = (int)auVar63._12_4_ << 0x14;
              *(char *)(pfVar5 + 2) = (char)iVar46;
              *(byte *)((long)pfVar5 + 9) = (byte)((uint)iVar68 >> 8) | (byte)((uint)iVar46 >> 8);
              *(byte *)((long)pfVar5 + 10) =
                   (byte)((uint)iVar68 >> 0x10) | (byte)((uint)iVar46 >> 0x10) |
                   (byte)((uint)iVar28 >> 0x10);
              *(byte *)((long)pfVar5 + 0xb) =
                   (byte)((uint)iVar68 >> 0x18) | (byte)((uint)iVar46 >> 0x18) |
                   (byte)((uint)iVar28 >> 0x18);
              *(char *)(pfVar5 + 3) = (char)iVar50;
              *(byte *)((long)pfVar5 + 0xd) = (byte)((uint)iVar70 >> 8) | (byte)((uint)iVar50 >> 8);
              *(byte *)((long)pfVar5 + 0xe) =
                   (byte)((uint)iVar70 >> 0x10) | (byte)((uint)iVar50 >> 0x10) |
                   (byte)((uint)iVar30 >> 0x10);
              *(byte *)((long)pfVar5 + 0xf) =
                   (byte)((uint)iVar70 >> 0x18) | (byte)((uint)iVar50 >> 0x18) |
                   (byte)((uint)iVar30 >> 0x18);
              *(char *)pfVar5 = (char)iVar33;
              *(byte *)((long)pfVar5 + 1) = (byte)((uint)iVar54 >> 8) | (byte)((uint)iVar33 >> 8);
              *(byte *)((long)pfVar5 + 2) =
                   (byte)((uint)iVar54 >> 0x10) | (byte)((uint)iVar33 >> 0x10) |
                   (byte)((uint)iVar14 >> 0x10);
              *(byte *)((long)pfVar5 + 3) =
                   (byte)((uint)iVar54 >> 0x18) | (byte)((uint)iVar33 >> 0x18) |
                   (byte)((uint)iVar14 >> 0x18);
              *(char *)(pfVar5 + 1) = (char)iVar42;
              *(byte *)((long)pfVar5 + 5) = (byte)((uint)iVar66 >> 8) | (byte)((uint)iVar42 >> 8);
              *(byte *)((long)pfVar5 + 6) =
                   (byte)((uint)iVar66 >> 0x10) | (byte)((uint)iVar42 >> 0x10) |
                   (byte)((uint)iVar26 >> 0x10);
              *(byte *)((long)pfVar5 + 7) =
                   (byte)((uint)iVar66 >> 0x18) | (byte)((uint)iVar42 >> 0x18) |
                   (byte)((uint)iVar26 >> 0x18);
              lVar8 = lVar11 + 4;
              uVar102 = lVar11 + 8;
              lVar11 = lVar8;
              pfVar5 = pfVar5 + 4;
            } while (uVar102 <= param_3);
          }
          lVar11 = param_3 - lVar8;
          if (lVar11 != 0) {
            pfVar5 = (float *)(pauVar6[lVar8] + 8);
            uVar102 = NEON_fmov(0x3f800000,4);
            pfVar9 = param_2 + lVar8;
            do {
              fVar71 = *pfVar5;
              fVar13 = pfVar5[1];
              fVar55 = pfVar5[-2];
              fVar73 = pfVar5[-1];
              fVar34 = fVar13 * fVar13 + fVar55 * fVar55 + fVar73 * fVar73 + fVar71 * fVar71;
              if (fVar34 == 0.0) {
                fVar55 = 0.0;
                fVar73 = 0.0;
                fVar71 = 0.0;
                fVar13 = 1.0;
              }
              else {
                fVar34 = 1.0 / SQRT(fVar34);
                fVar13 = fVar13 * fVar34;
                fVar55 = fVar55 * fVar34;
                fVar73 = fVar73 * fVar34;
                fVar71 = fVar71 * fVar34;
              }
              uVar56 = CONCAT44(fVar71,fVar73) ^
                       (CONCAT44(fVar71,fVar73) ^ CONCAT44(-fVar71,-fVar73)) &
                       CONCAT44(-(uint)(fVar13 < 0.0),-(uint)(fVar13 < 0.0));
              fVar34 = -fVar13;
              fVar73 = -fVar55;
              if (0.0 <= fVar13) {
                fVar34 = fVar13;
                fVar73 = fVar55;
              }
              fVar34 = 1.0 / SQRT(fVar34 + 1.0);
              fVar55 = fVar73 * fVar34 * 0.5 + 0.5;
              fVar13 = 0.0;
              if (0.0 <= fVar55) {
                fVar13 = fVar55;
              }
              fVar55 = 1.0;
              if (fVar13 <= 1.0) {
                fVar55 = fVar13;
              }
              fVar13 = (float)uVar56 * fVar34 * 0.5 + 0.5;
              fVar34 = (float)(uVar56 >> 0x20) * fVar34 * 0.5 + 0.5;
              iVar14 = -(uint)(fVar13 < 0.0);
              iVar26 = -(uint)(fVar34 < 0.0);
              fVar13 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                                       CONCAT12((byte)((uint)fVar13 >> 0x10) &
                                                ~(byte)((uint)iVar14 >> 0x10),
                                                CONCAT11((byte)((uint)fVar13 >> 8) &
                                                         ~(byte)((uint)iVar14 >> 8),
                                                         SUB41(fVar13,0) & ~(byte)iVar14)));
              uVar56 = CONCAT17((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                                CONCAT16((byte)((uint)fVar34 >> 0x10) &
                                         ~(byte)((uint)iVar26 >> 0x10),
                                         CONCAT15((byte)((uint)fVar34 >> 8) &
                                                  ~(byte)((uint)iVar26 >> 8),
                                                  CONCAT14(SUB41(fVar34,0) & ~(byte)iVar26,fVar13)))
                               );
              uVar56 = uVar56 ^ (uVar56 ^ uVar102) &
                                CONCAT44(-(uint)((float)(uVar102 >> 0x20) < (float)(uVar56 >> 0x20))
                                         ,-(uint)((float)uVar102 < fVar13));
              uVar16 = NEON_ushl(CONCAT44((int)(float)(int)((float)(uVar56 >> 0x20) * 1023.0 + 0.5),
                                          (int)(float)(int)((float)uVar56 * 1023.0 + 0.5)),
                                 0x140000000a,4);
              pfVar5 = pfVar5 + 4;
              *pfVar9 = (float)((uint)uVar16 | (int)(fVar55 * 1023.0 + 0.5) |
                               (uint)((ulong)uVar16 >> 0x20));
              lVar11 = lVar11 + -1;
              pfVar9 = pfVar9 + 1;
            } while (lVar11 != 0);
          }
          return pauVar6;
        }
        if (param_4 == 5) {
          if (param_3 < 4) {
            lVar8 = 0;
          }
          else {
            auVar75._8_4_ = 0x2b8cbccc;
            auVar75._0_8_ = 0x2b8cbccc2b8cbccc;
            auVar75._12_4_ = 0x2b8cbccc;
            auVar17 = NEON_fmov(0x3f800000,4);
            auVar18 = ZEXT216(0);
            auVar58 = NEON_fmov(0xbf800000,4);
            auVar99._8_4_ = 0x447fc000;
            auVar99._0_8_ = 0x447fc000447fc000;
            auVar99._12_4_ = 0x447fc000;
            lVar11 = 0;
            pauVar4 = pauVar6;
            pfVar5 = param_2;
            do {
              fVar71 = *(float *)*pauVar4;
              fVar95 = *(float *)(*pauVar4 + 4);
              fVar29 = *(float *)(*pauVar4 + 8);
              fVar41 = *(float *)(*pauVar4 + 0xc);
              fVar32 = *(float *)pauVar4[1];
              fVar65 = *(float *)(pauVar4[1] + 4);
              fVar162 = *(float *)(pauVar4[1] + 8);
              fVar44 = *(float *)(pauVar4[1] + 0xc);
              fVar53 = *(float *)pauVar4[2];
              fVar27 = *(float *)(pauVar4[2] + 4);
              fVar31 = *(float *)(pauVar4[2] + 8);
              fVar45 = *(float *)(pauVar4[2] + 0xc);
              fVar25 = *(float *)pauVar4[3];
              fVar136 = *(float *)(pauVar4[3] + 4);
              fVar40 = *(float *)(pauVar4[3] + 8);
              fVar48 = *(float *)(pauVar4[3] + 0xc);
              pauVar4 = pauVar4 + 4;
              auVar133._0_4_ = fVar71 * fVar71 + fVar95 * fVar95 + fVar29 * fVar29 + fVar41 * fVar41
              ;
              auVar133._4_4_ =
                   fVar32 * fVar32 + fVar65 * fVar65 + fVar162 * fVar162 + fVar44 * fVar44;
              auVar133._8_4_ = fVar53 * fVar53 + fVar27 * fVar27 + fVar31 * fVar31 + fVar45 * fVar45
              ;
              auVar133._12_4_ =
                   fVar25 * fVar25 + fVar136 * fVar136 + fVar40 * fVar40 + fVar48 * fVar48;
              auVar63 = NEON_fmax(auVar133,auVar75,4);
              fVar13 = auVar17._0_4_;
              fVar49 = fVar13 / SQRT(auVar63._0_4_);
              fVar55 = auVar17._4_4_;
              fVar52 = fVar55 / SQRT(auVar63._4_4_);
              fVar34 = auVar17._8_4_;
              fVar64 = fVar34 / SQRT(auVar63._8_4_);
              fVar73 = auVar17._12_4_;
              fVar67 = fVar73 / SQRT(auVar63._12_4_);
              fVar69 = ABS(fVar41 * fVar49);
              fVar72 = ABS(fVar44 * fVar52);
              fVar78 = ABS(fVar45 * fVar64);
              fVar79 = ABS(fVar48 * fVar67);
              auVar143._0_4_ = -(uint)(fVar41 * fVar49 < 0.0);
              auVar143._4_4_ = -(uint)(fVar44 * fVar52 < 0.0);
              auVar143._8_4_ = -(uint)(fVar45 * fVar64 < 0.0);
              auVar143._12_4_ = -(uint)(fVar48 * fVar67 < 0.0);
              auVar63 = auVar17 ^ (auVar17 ^ auVar58) & auVar143;
              fVar41 = auVar63._0_4_;
              fVar44 = auVar63._4_4_;
              fVar45 = auVar63._8_4_;
              fVar48 = auVar63._12_4_;
              fVar13 = (fVar13 / (fVar69 + fVar13 + SQRT(fVar69 + fVar69 + 2.0))) * 2.4142137;
              fVar55 = (fVar55 / (fVar72 + fVar55 + SQRT(fVar72 + fVar72 + 2.0))) * 2.4142137;
              fVar34 = (fVar34 / (fVar78 + fVar34 + SQRT(fVar78 + fVar78 + 2.0))) * 2.4142137;
              fVar73 = (fVar73 / (fVar79 + fVar73 + SQRT(fVar79 + fVar79 + 2.0))) * 2.4142137;
              auVar163._0_4_ = fVar71 * fVar49 * fVar41 * fVar13 * 0.5 + 0.5;
              auVar163._4_4_ = fVar32 * fVar52 * fVar44 * fVar55 * 0.5 + 0.5;
              auVar163._8_4_ = fVar53 * fVar64 * fVar45 * fVar34 * 0.5 + 0.5;
              auVar163._12_4_ = fVar25 * fVar67 * fVar48 * fVar73 * 0.5 + 0.5;
              auVar63 = NEON_fmax(auVar163,auVar18,4);
              auVar63 = NEON_fmin(auVar63,auVar17,4);
              auVar164._0_4_ = (int)(auVar63._0_4_ * 1023.0 + 0.5);
              auVar164._4_4_ = (int)(auVar63._4_4_ * 1023.0 + 0.5);
              auVar164._8_4_ = (int)(auVar63._8_4_ * 1023.0 + 0.5);
              auVar164._12_4_ = (int)(auVar63._12_4_ * 1023.0 + 0.5);
              auVar166._0_4_ = fVar95 * fVar49 * fVar41 * fVar13 * 0.5 + 0.5;
              auVar166._4_4_ = fVar65 * fVar52 * fVar44 * fVar55 * 0.5 + 0.5;
              auVar166._8_4_ = fVar27 * fVar64 * fVar45 * fVar34 * 0.5 + 0.5;
              auVar166._12_4_ = fVar136 * fVar67 * fVar48 * fVar73 * 0.5 + 0.5;
              auVar63 = NEON_fmin(auVar164,auVar99,4);
              auVar119 = NEON_fmax(auVar166,auVar18,4);
              auVar119 = NEON_fmin(auVar119,auVar17,4);
              auVar167._0_4_ = (int)(auVar119._0_4_ * 1023.0 + 0.5);
              auVar167._4_4_ = (int)(auVar119._4_4_ * 1023.0 + 0.5);
              auVar167._8_4_ = (int)(auVar119._8_4_ * 1023.0 + 0.5);
              auVar167._12_4_ = (int)(auVar119._12_4_ * 1023.0 + 0.5);
              auVar119 = NEON_fmin(auVar167,auVar99,4);
              auVar104._0_4_ = fVar29 * fVar49 * fVar41 * fVar13 * 0.5 + 0.5;
              auVar104._4_4_ = fVar162 * fVar52 * fVar44 * fVar55 * 0.5 + 0.5;
              auVar104._8_4_ = fVar31 * fVar64 * fVar45 * fVar34 * 0.5 + 0.5;
              auVar104._12_4_ = fVar40 * fVar67 * fVar48 * fVar73 * 0.5 + 0.5;
              iVar33 = (int)auVar63._0_4_;
              iVar42 = (int)auVar63._4_4_;
              iVar46 = (int)auVar63._8_4_;
              iVar50 = (int)auVar63._12_4_;
              auVar63 = NEON_fmax(auVar104,auVar18,4);
              auVar63 = NEON_fmin(auVar63,auVar17,4);
              auVar105._0_4_ = (int)(auVar63._0_4_ * 1023.0 + 0.5);
              auVar105._4_4_ = (int)(auVar63._4_4_ * 1023.0 + 0.5);
              auVar105._8_4_ = (int)(auVar63._8_4_ * 1023.0 + 0.5);
              auVar105._12_4_ = (int)(auVar63._12_4_ * 1023.0 + 0.5);
              auVar63 = NEON_fmin(auVar105,auVar99,4);
              iVar54 = (int)auVar119._0_4_ << 10;
              iVar66 = (int)auVar119._4_4_ << 10;
              iVar68 = (int)auVar119._8_4_ << 10;
              iVar70 = (int)auVar119._12_4_ << 10;
              iVar14 = (int)auVar63._0_4_ << 0x14;
              iVar26 = (int)auVar63._4_4_ << 0x14;
              iVar28 = (int)auVar63._8_4_ << 0x14;
              iVar30 = (int)auVar63._12_4_ << 0x14;
              *(char *)(pfVar5 + 2) = (char)iVar46;
              *(byte *)((long)pfVar5 + 9) = (byte)((uint)iVar68 >> 8) | (byte)((uint)iVar46 >> 8);
              *(byte *)((long)pfVar5 + 10) =
                   (byte)((uint)iVar68 >> 0x10) | (byte)((uint)iVar46 >> 0x10) |
                   (byte)((uint)iVar28 >> 0x10);
              *(byte *)((long)pfVar5 + 0xb) =
                   (byte)((uint)iVar68 >> 0x18) | (byte)((uint)iVar46 >> 0x18) |
                   (byte)((uint)iVar28 >> 0x18);
              *(char *)(pfVar5 + 3) = (char)iVar50;
              *(byte *)((long)pfVar5 + 0xd) = (byte)((uint)iVar70 >> 8) | (byte)((uint)iVar50 >> 8);
              *(byte *)((long)pfVar5 + 0xe) =
                   (byte)((uint)iVar70 >> 0x10) | (byte)((uint)iVar50 >> 0x10) |
                   (byte)((uint)iVar30 >> 0x10);
              *(byte *)((long)pfVar5 + 0xf) =
                   (byte)((uint)iVar70 >> 0x18) | (byte)((uint)iVar50 >> 0x18) |
                   (byte)((uint)iVar30 >> 0x18);
              *(char *)pfVar5 = (char)iVar33;
              *(byte *)((long)pfVar5 + 1) = (byte)((uint)iVar54 >> 8) | (byte)((uint)iVar33 >> 8);
              *(byte *)((long)pfVar5 + 2) =
                   (byte)((uint)iVar54 >> 0x10) | (byte)((uint)iVar33 >> 0x10) |
                   (byte)((uint)iVar14 >> 0x10);
              *(byte *)((long)pfVar5 + 3) =
                   (byte)((uint)iVar54 >> 0x18) | (byte)((uint)iVar33 >> 0x18) |
                   (byte)((uint)iVar14 >> 0x18);
              *(char *)(pfVar5 + 1) = (char)iVar42;
              *(byte *)((long)pfVar5 + 5) = (byte)((uint)iVar66 >> 8) | (byte)((uint)iVar42 >> 8);
              *(byte *)((long)pfVar5 + 6) =
                   (byte)((uint)iVar66 >> 0x10) | (byte)((uint)iVar42 >> 0x10) |
                   (byte)((uint)iVar26 >> 0x10);
              *(byte *)((long)pfVar5 + 7) =
                   (byte)((uint)iVar66 >> 0x18) | (byte)((uint)iVar42 >> 0x18) |
                   (byte)((uint)iVar26 >> 0x18);
              lVar8 = lVar11 + 4;
              uVar102 = lVar11 + 8;
              lVar11 = lVar8;
              pfVar5 = pfVar5 + 4;
            } while (uVar102 <= param_3);
          }
          lVar11 = param_3 - lVar8;
          if (lVar11 != 0) {
            pfVar5 = (float *)(pauVar6[lVar8] + 8);
            uVar102 = NEON_fmov(0x3f800000,4);
            pfVar9 = param_2 + lVar8;
            do {
              fVar71 = *pfVar5;
              fVar13 = pfVar5[1];
              fVar55 = pfVar5[-2];
              fVar73 = pfVar5[-1];
              fVar34 = fVar13 * fVar13 + fVar55 * fVar55 + fVar73 * fVar73 + fVar71 * fVar71;
              if (fVar34 == 0.0) {
                fVar55 = 0.0;
                fVar73 = 0.0;
                fVar71 = 0.0;
                fVar13 = 1.0;
              }
              else {
                fVar34 = 1.0 / SQRT(fVar34);
                fVar13 = fVar13 * fVar34;
                fVar55 = fVar55 * fVar34;
                fVar73 = fVar73 * fVar34;
                fVar71 = fVar71 * fVar34;
              }
              pfVar5 = pfVar5 + 4;
              uVar56 = CONCAT44(fVar71,fVar73) ^
                       (CONCAT44(fVar71,fVar73) ^ CONCAT44(-fVar71,-fVar73)) &
                       CONCAT44(-(uint)(fVar13 < 0.0),-(uint)(fVar13 < 0.0));
              fVar34 = -fVar13;
              fVar73 = -fVar55;
              if (0.0 <= fVar13) {
                fVar34 = fVar13;
                fVar73 = fVar55;
              }
              fVar34 = fVar34 + 1.0 + SQRT(fVar34 * 2.0 + 2.0);
              fVar55 = ((fVar73 * 2.4142137) / fVar34) * 0.5 + 0.5;
              fVar13 = 0.0;
              if (0.0 <= fVar55) {
                fVar13 = fVar55;
              }
              fVar55 = 1.0;
              if (fVar13 <= 1.0) {
                fVar55 = fVar13;
              }
              fVar13 = (((float)uVar56 * 2.4142137) / fVar34) * 0.5 + 0.5;
              fVar34 = (((float)(uVar56 >> 0x20) * 2.4142137) / fVar34) * 0.5 + 0.5;
              iVar14 = -(uint)(fVar13 < 0.0);
              iVar26 = -(uint)(fVar34 < 0.0);
              fVar13 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                                       CONCAT12((byte)((uint)fVar13 >> 0x10) &
                                                ~(byte)((uint)iVar14 >> 0x10),
                                                CONCAT11((byte)((uint)fVar13 >> 8) &
                                                         ~(byte)((uint)iVar14 >> 8),
                                                         SUB41(fVar13,0) & ~(byte)iVar14)));
              uVar56 = CONCAT17((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                                CONCAT16((byte)((uint)fVar34 >> 0x10) &
                                         ~(byte)((uint)iVar26 >> 0x10),
                                         CONCAT15((byte)((uint)fVar34 >> 8) &
                                                  ~(byte)((uint)iVar26 >> 8),
                                                  CONCAT14(SUB41(fVar34,0) & ~(byte)iVar26,fVar13)))
                               );
              uVar56 = uVar56 ^ (uVar56 ^ uVar102) &
                                CONCAT44(-(uint)((float)(uVar102 >> 0x20) < (float)(uVar56 >> 0x20))
                                         ,-(uint)((float)uVar102 < fVar13));
              uVar16 = NEON_ushl(CONCAT44((int)(float)(int)((float)(uVar56 >> 0x20) * 1023.0 + 0.5),
                                          (int)(float)(int)((float)uVar56 * 1023.0 + 0.5)),
                                 0x140000000a,4);
              *pfVar9 = (float)((uint)uVar16 | (uint)((ulong)uVar16 >> 0x20) |
                               (int)(fVar55 * 1023.0 + 0.5));
              lVar11 = lVar11 + -1;
              pfVar9 = pfVar9 + 1;
            } while (lVar11 != 0);
          }
          return pauVar6;
        }
      }
      pauVar6 = (undefined1 (*) [16])&UNK_10f630e62;
      FUN_10a00946c();
      if (param_4 < 3) {
        if (param_4 == 0) {
          if (param_3 < 4) {
            lVar8 = 0;
          }
          else {
            auVar17 = NEON_fmov(0xbf800000,4);
            fStack_f8 = auVar17._8_4_;
            fStack_f4 = auVar17._12_4_;
            fStack_100 = auVar17._0_4_;
            fStack_fc = auVar17._4_4_;
            auVar17 = NEON_fmov(0x3f800000,4);
            pfVar5 = param_2;
            lVar11 = 0;
            uVar102 = param_3;
            pauVar4 = pauVar6;
            do {
              auVar18 = *pauVar4;
              auVar37._0_6_ =
                   CONCAT15(auVar18[5],CONCAT14(auVar18[4],(uint)(auVar18._0_2_ & 0x3ff))) &
                   0x3ffffffffff;
              auVar37._6_2_ = 0;
              auVar37[8] = auVar18[8];
              auVar37[9] = auVar18[9] & 3;
              auVar37._10_2_ = 0;
              auVar37[0xc] = auVar18[0xc];
              auVar37[0xd] = auVar18[0xd] & 3;
              auVar37._14_2_ = 0;
              uVar43 = auVar18._4_4_ >> 10;
              uVar47 = auVar18._8_4_ >> 10;
              uVar51 = auVar18._12_4_ >> 10;
              auVar60._0_6_ =
                   CONCAT15((char)(uVar43 >> 8),
                            CONCAT14((char)uVar43,(uint)((ushort)(auVar18._0_4_ >> 10) & 0x3ff))) &
                   0x3ffffffffff;
              auVar60._6_2_ = 0;
              auVar60[8] = (undefined1)uVar47;
              auVar60[9] = (byte)(uVar47 >> 8) & 3;
              auVar60._10_2_ = 0;
              auVar60[0xc] = (undefined1)uVar51;
              auVar60[0xd] = (byte)(uVar51 >> 8) & 3;
              auVar60._14_2_ = 0;
              auVar22._0_8_ =
                   CONCAT44(auVar18._4_4_ >> 0x14,auVar18._0_4_ >> 0x14) & 0xfffff3fffffff3ff;
              auVar22._8_4_ = auVar18._8_4_ >> 0x14 & 0xfffff3ff;
              auVar22._12_4_ = auVar18._12_4_ >> 0x14 & 0xfffff3ff;
              auVar75 = NEON_ucvtf(auVar37,4);
              auVar58 = NEON_ucvtf(auVar60,4);
              auVar18 = NEON_ucvtf(auVar22,4);
              fVar95 = fStack_100 + auVar75._0_4_ * 0.0009775171 * 2.0;
              fVar65 = fStack_fc + auVar75._4_4_ * 0.0009775171 * 2.0;
              fVar27 = fStack_f8 + auVar75._8_4_ * 0.0009775171 * 2.0;
              fVar136 = fStack_f4 + auVar75._12_4_ * 0.0009775171 * 2.0;
              fVar13 = fStack_100 + auVar58._0_4_ * 0.0009775171 * 2.0;
              fVar55 = fStack_fc + auVar58._4_4_ * 0.0009775171 * 2.0;
              fVar34 = fStack_f8 + auVar58._8_4_ * 0.0009775171 * 2.0;
              fVar73 = fStack_f4 + auVar58._12_4_ * 0.0009775171 * 2.0;
              fVar71 = fStack_100 + auVar18._0_4_ * 0.0009775171 * 2.0;
              fVar32 = fStack_fc + auVar18._4_4_ * 0.0009775171 * 2.0;
              fVar53 = fStack_f8 + auVar18._8_4_ * 0.0009775171 * 2.0;
              fVar25 = fStack_f4 + auVar18._12_4_ * 0.0009775171 * 2.0;
              fVar29 = fVar95 * fVar95 + fVar13 * fVar13 + fVar71 * fVar71;
              fVar162 = fVar65 * fVar65 + fVar55 * fVar55 + fVar32 * fVar32;
              fVar31 = fVar27 * fVar27 + fVar34 * fVar34 + fVar53 * fVar53;
              fVar40 = fVar136 * fVar136 + fVar73 * fVar73 + fVar25 * fVar25;
              auVar83._0_4_ = -(uint)(auVar17._0_4_ <= fVar29);
              auVar83._4_4_ = -(uint)(auVar17._4_4_ <= fVar162);
              auVar83._8_4_ = -(uint)(auVar17._8_4_ <= fVar31);
              auVar83._12_4_ = -(uint)(auVar17._12_4_ <= fVar40);
              auVar18 = NEON_ext(auVar83,auVar83,8,1);
              uVar16 = CONCAT17((byte)((uint)auVar83._4_4_ >> 0x18) | auVar18[7],
                                CONCAT16((byte)((uint)auVar83._4_4_ >> 0x10) | auVar18[6],
                                         CONCAT15((byte)((uint)auVar83._4_4_ >> 8) | auVar18[5],
                                                  CONCAT14((byte)auVar83._4_4_ | auVar18[4],
                                                           CONCAT13((byte)((uint)auVar83._0_4_ >>
                                                                          0x18) | auVar18[3],
                                                                    CONCAT12((byte)((uint)auVar83.
                                                  _0_4_ >> 0x10) | auVar18[2],
                                                  CONCAT11((byte)((uint)auVar83._0_4_ >> 8) |
                                                           auVar18[1],
                                                           (byte)auVar83._0_4_ | auVar18[0])))))));
              uVar16 = NEON_umaxp(uVar16,uVar16,4);
              if ((int)uVar16 == 0) {
                *pfVar5 = fVar13;
                pfVar5[1] = fVar71;
                pfVar5[2] = SQRT(auVar17._0_4_ - fVar29);
                pfVar5[3] = fVar95;
                pfVar5[4] = fVar55;
                pfVar5[5] = fVar32;
                pfVar5[6] = SQRT(auVar17._4_4_ - fVar162);
                pfVar5[7] = fVar65;
                pfVar5[8] = fVar34;
                pfVar5[9] = fVar53;
                pfVar5[10] = SQRT(auVar17._8_4_ - fVar31);
                pfVar5[0xb] = fVar27;
                pfVar5[0xc] = fVar73;
                pfVar5[0xd] = fVar25;
                pfVar5[0xe] = SQRT(auVar17._12_4_ - fVar40);
                pfVar5[0xf] = fVar136;
              }
              else {
                uVar56 = uVar102;
                if (3 < uVar102) {
                  uVar56 = 4;
                }
                FUN_10a009298(pauVar4,pfVar5,uVar56);
              }
              lVar8 = lVar11 + 4;
              uVar56 = lVar11 + 8;
              pfVar5 = pfVar5 + 0x10;
              uVar102 = uVar102 - 4;
              lVar11 = lVar8;
              pauVar4 = pauVar4 + 1;
            } while (uVar56 <= param_3);
          }
          pauVar6 = (undefined1 (*) [16])(*pauVar6 + lVar8 * 4);
          lVar11 = param_3 - lVar8;
          if (lVar11 != 0) {
            param_2 = param_2 + lVar8 * 4 + 3;
            uVar16 = NEON_fmov(0xbf800000,4);
            pauVar4 = pauVar6;
            do {
              pauVar6 = (undefined1 (*) [16])(*pauVar4 + 4);
              uVar43 = *(uint *)*pauVar4;
              fVar13 = (float)(uVar43 & 0x3ff) * 0.0009775171;
              uVar102 = NEON_ushl(CONCAT44(uVar43,uVar43),0xffffffecfffffff6,4);
              uVar15 = NEON_ucvtf(uVar102 & 0x3ff000003ff,4);
              fVar55 = fVar13 + fVar13 + -1.0;
              fVar13 = (float)uVar15 * 0.0009775171;
              fVar73 = (float)((ulong)uVar15 >> 0x20) * 0.0009775171;
              fVar34 = fVar13 + fVar13 + (float)uVar16;
              fVar73 = fVar73 + fVar73 + (float)((ulong)uVar16 >> 0x20);
              fVar71 = fVar73 * fVar73 + fVar55 * fVar55 + fVar34 * fVar34;
              fVar32 = 1.0 / SQRT(fVar71);
              fVar13 = SQRT(1.0 - fVar71);
              uVar15 = CONCAT44(fVar73,fVar34);
              if (1.0 <= fVar71) {
                fVar13 = fVar32 * 0.0;
                uVar15 = CONCAT44(fVar73 * fVar32,fVar34 * fVar32);
              }
              *(undefined8 *)(param_2 + -3) = uVar15;
              if (1.0 <= fVar71) {
                fVar55 = fVar55 * fVar32;
              }
              param_2[-1] = fVar13;
              *param_2 = fVar55;
              param_2 = param_2 + 4;
              lVar11 = lVar11 + -1;
              pauVar4 = pauVar6;
            } while (lVar11 != 0);
          }
          return pauVar6;
        }
        if (param_4 == 1) {
          if (param_3 < 4) {
            lVar8 = 0;
          }
          else {
            auVar17 = NEON_fmov(0xbf800000,4);
            auVar18 = NEON_fmov(0x3f800000,4);
            lVar11 = 0;
            pfVar5 = param_2;
            pauVar4 = pauVar6;
            do {
              auVar75 = *pauVar4;
              auVar120._0_6_ =
                   CONCAT15(auVar75[5],CONCAT14(auVar75[4],(uint)(auVar75._0_2_ & 0x3ff))) &
                   0x3ffffffffff;
              auVar120._6_2_ = 0;
              auVar120[8] = auVar75[8];
              auVar120[9] = auVar75[9] & 3;
              auVar120._10_2_ = 0;
              auVar120[0xc] = auVar75[0xc];
              auVar120[0xd] = auVar75[0xd] & 3;
              auVar120._14_2_ = 0;
              uVar43 = auVar75._0_4_;
              uVar51 = auVar75._4_4_;
              uVar112 = auVar75._8_4_;
              uVar114 = auVar75._12_4_;
              auVar128._0_6_ =
                   CONCAT15((char)((uVar51 >> 10) >> 8),
                            CONCAT14((char)(uVar51 >> 10),(uint)((ushort)(uVar43 >> 10) & 0x3ff))) &
                   0x3ffffffffff;
              auVar128._6_2_ = 0;
              auVar128[8] = (undefined1)(uVar112 >> 10);
              auVar128[9] = (byte)((uVar112 >> 10) >> 8) & 3;
              auVar128._10_2_ = 0;
              auVar128[0xc] = (undefined1)(uVar114 >> 10);
              auVar128[0xd] = (byte)((uVar114 >> 10) >> 8) & 3;
              auVar128._14_2_ = 0;
              auVar135._0_8_ = CONCAT44(uVar51 >> 0x14,uVar43 >> 0x14) & 0xfffff3fffffff3ff;
              auVar135._8_4_ = uVar112 >> 0x14 & 0xfffff3ff;
              auVar135._12_4_ = uVar114 >> 0x14 & 0xfffff3ff;
              uVar137 = uVar43 >> 0x1e;
              uVar145 = uVar51 >> 0x1e;
              uVar147 = uVar112 >> 0x1e;
              uVar149 = uVar114 >> 0x1e;
              auVar75 = NEON_ucvtf(auVar120,4);
              auVar58 = NEON_ucvtf(auVar128,4);
              fVar95 = auVar17._0_4_;
              fVar29 = fVar95 + auVar75._0_4_ * 0.0019550342;
              fVar65 = auVar17._4_4_;
              fVar162 = fVar65 + auVar75._4_4_ * 0.0019550342;
              fVar27 = auVar17._8_4_;
              fVar136 = auVar17._12_4_;
              fVar31 = fVar27 + auVar75._8_4_ * 0.0019550342;
              fVar40 = fVar136 + auVar75._12_4_ * 0.0019550342;
              fVar13 = fVar95 + auVar58._0_4_ * 0.0019550342;
              fVar55 = fVar65 + auVar58._4_4_ * 0.0019550342;
              fVar34 = fVar27 + auVar58._8_4_ * 0.0019550342;
              fVar73 = fVar136 + auVar58._12_4_ * 0.0019550342;
              auVar75 = NEON_ucvtf(auVar135,4);
              fVar95 = fVar95 + auVar75._0_4_ * 0.0019550342;
              fVar65 = fVar65 + auVar75._4_4_ * 0.0019550342;
              fVar27 = fVar27 + auVar75._8_4_ * 0.0019550342;
              fVar136 = fVar136 + auVar75._12_4_ * 0.0019550342;
              auVar129._0_4_ = auVar18._0_4_ - (fVar29 * fVar29 + fVar13 * fVar13 + fVar95 * fVar95)
              ;
              auVar129._4_4_ =
                   auVar18._4_4_ - (fVar162 * fVar162 + fVar55 * fVar55 + fVar65 * fVar65);
              auVar129._8_4_ = auVar18._8_4_ - (fVar31 * fVar31 + fVar34 * fVar34 + fVar27 * fVar27)
              ;
              auVar129._12_4_ =
                   auVar18._12_4_ - (fVar40 * fVar40 + fVar73 * fVar73 + fVar136 * fVar136);
              auVar75 = NEON_fmax(auVar129,ZEXT216(0),4);
              fVar71 = SQRT(auVar75._0_4_);
              fVar32 = SQRT(auVar75._4_4_);
              fVar53 = SQRT(auVar75._8_4_);
              fVar25 = SQRT(auVar75._12_4_);
              uVar138 = (uint)fVar13 ^ ((uint)fVar13 ^ (uint)fVar29) & -(uint)(uVar137 == 3);
              uVar146 = (uint)fVar55 ^ ((uint)fVar55 ^ (uint)fVar162) & -(uint)(uVar145 == 3);
              uVar148 = (uint)fVar34 ^ ((uint)fVar34 ^ (uint)fVar31) & -(uint)(uVar147 == 3);
              uVar150 = (uint)fVar73 ^ ((uint)fVar73 ^ (uint)fVar40) & -(uint)(uVar149 == 3);
              uVar47 = (uint)fVar13 ^ ((uint)fVar13 ^ (uint)fVar95) & -(uint)(uVar137 == 2);
              uVar111 = (uint)fVar55 ^ ((uint)fVar55 ^ (uint)fVar65) & -(uint)(uVar145 == 2);
              uVar113 = (uint)fVar34 ^ ((uint)fVar34 ^ (uint)fVar27) & -(uint)(uVar147 == 2);
              uVar115 = (uint)fVar73 ^ ((uint)fVar73 ^ (uint)fVar136) & -(uint)(uVar149 == 2);
              *pfVar5 = (float)(uVar138 ^ (uVar138 ^ (uint)fVar71) & -(uint)(uVar43 < 0x40000000));
              pfVar5[1] = (float)(uVar47 ^ (uVar47 ^ (uint)fVar71) & -(uint)(uVar137 == 1));
              pfVar5[2] = (float)((uint)fVar95 ^
                                 ((uint)fVar95 ^ (uint)fVar71) & -(uint)(uVar137 == 2));
              pfVar5[3] = (float)((uint)fVar29 ^
                                 ((uint)fVar29 ^ (uint)fVar71) & -(uint)(uVar137 == 3));
              pfVar5[4] = (float)(uVar146 ^ (uVar146 ^ (uint)fVar32) & -(uint)(uVar51 < 0x40000000))
              ;
              pfVar5[5] = (float)(uVar111 ^ (uVar111 ^ (uint)fVar32) & -(uint)(uVar145 == 1));
              pfVar5[6] = (float)((uint)fVar65 ^
                                 ((uint)fVar65 ^ (uint)fVar32) & -(uint)(uVar145 == 2));
              pfVar5[7] = (float)((uint)fVar162 ^
                                 ((uint)fVar162 ^ (uint)fVar32) & -(uint)(uVar145 == 3));
              pfVar5[8] = (float)(uVar148 ^ (uVar148 ^ (uint)fVar53) & -(uint)(uVar112 < 0x40000000)
                                 );
              pfVar5[9] = (float)(uVar113 ^ (uVar113 ^ (uint)fVar53) & -(uint)(uVar147 == 1));
              pfVar5[10] = (float)((uint)fVar27 ^
                                  ((uint)fVar27 ^ (uint)fVar53) & -(uint)(uVar147 == 2));
              pfVar5[0xb] = (float)((uint)fVar31 ^
                                   ((uint)fVar31 ^ (uint)fVar53) & -(uint)(uVar147 == 3));
              pfVar5[0xc] = (float)(uVar150 ^
                                   (uVar150 ^ (uint)fVar25) & -(uint)(uVar114 < 0x40000000));
              pfVar5[0xd] = (float)(uVar115 ^ (uVar115 ^ (uint)fVar25) & -(uint)(uVar149 == 1));
              pfVar5[0xe] = (float)((uint)fVar136 ^
                                   ((uint)fVar136 ^ (uint)fVar25) & -(uint)(uVar149 == 2));
              pfVar5[0xf] = (float)((uint)fVar40 ^
                                   ((uint)fVar40 ^ (uint)fVar25) & -(uint)(uVar149 == 3));
              pfVar5 = pfVar5 + 0x10;
              lVar8 = lVar11 + 4;
              uVar102 = lVar11 + 8;
              lVar11 = lVar8;
              pauVar4 = pauVar4 + 1;
            } while (uVar102 <= param_3);
          }
          lVar11 = param_3 - lVar8;
          if (lVar11 != 0) {
            uVar16 = NEON_fmov(0xbf800000,4);
            puVar10 = (uint *)(*pauVar6 + lVar8 * 4);
            pfVar5 = param_2 + lVar8 * 4 + 2;
            do {
              uVar43 = *puVar10;
              fStack_f4 = (float)(uVar43 >> 0x1e);
              fStack_100 = (float)(uVar43 & 0x3ff) * 0.0019550342 + -1.0;
              uVar102 = NEON_ushl(CONCAT44(uVar43,uVar43),0xffffffecfffffff6,4);
              uVar15 = NEON_ucvtf(uVar102 & 0x3ff000003ff,4);
              fStack_fc = (float)uVar16 + (float)uVar15 * 0.0019550342;
              fStack_f8 = (float)((ulong)uVar16 >> 0x20) +
                          (float)((ulong)uVar15 >> 0x20) * 0.0019550342;
              pauVar6 = (undefined1 (*) [16])&fStack_100;
              func_0x00010a005ddc(&fStack_100);
              pfVar5[-2] = extraout_s0;
              pfVar5[-1] = extraout_s1;
              *pfVar5 = extraout_s2;
              pfVar5[1] = extraout_s3;
              lVar11 = lVar11 + -1;
              puVar10 = puVar10 + 1;
              pfVar5 = pfVar5 + 4;
            } while (lVar11 != 0);
          }
          return pauVar6;
        }
        if (param_4 == 2) {
          fStack_100 = (float)unaff_d11;
          fStack_fc = (float)((ulong)unaff_d11 >> 0x20);
          fStack_f8 = (float)unaff_d10;
          fStack_f4 = (float)((ulong)unaff_d10 >> 0x20);
          pauVar4 = pauVar6;
          if (param_3 < 4) {
            lVar8 = 0;
          }
          else {
            auVar17 = NEON_fmov(0xbf800000,4);
            auVar18 = NEON_fmov(0x3f800000,4);
            lVar11 = 0;
            pfVar5 = param_2;
            pauVar12 = pauVar6;
            do {
              auVar75 = *pauVar12;
              uVar43 = auVar75._4_4_ >> 10;
              uVar47 = auVar75._8_4_ >> 10;
              uVar51 = auVar75._12_4_ >> 10;
              auVar62._0_6_ =
                   CONCAT15(auVar75[5],CONCAT14(auVar75[4],(uint)(auVar75._0_2_ & 0x3ff))) &
                   0x3ffffffffff;
              auVar62._6_2_ = 0;
              auVar62[8] = auVar75[8];
              auVar62[9] = auVar75[9] & 3;
              auVar62._10_2_ = 0;
              auVar62[0xc] = auVar75[0xc];
              auVar62[0xd] = auVar75[0xd] & 3;
              auVar62._14_2_ = 0;
              auVar39._0_6_ =
                   CONCAT15((char)(uVar43 >> 8),
                            CONCAT14((char)uVar43,(uint)((ushort)(auVar75._0_4_ >> 10) & 0x3ff))) &
                   0x3ffffffffff;
              auVar39._6_2_ = 0;
              auVar39[8] = (undefined1)uVar47;
              auVar39[9] = (byte)(uVar47 >> 8) & 3;
              auVar39._10_2_ = 0;
              auVar39[0xc] = (undefined1)uVar51;
              auVar39[0xd] = (byte)(uVar51 >> 8) & 3;
              auVar39._14_2_ = 0;
              auVar24._0_8_ =
                   CONCAT44(auVar75._4_4_ >> 0x14,auVar75._0_4_ >> 0x14) & 0xfffff3fffffff3ff;
              auVar24._8_4_ = auVar75._8_4_ >> 0x14 & 0xfffff3ff;
              auVar24._12_4_ = auVar75._12_4_ >> 0x14 & 0xfffff3ff;
              auVar63 = NEON_ucvtf(auVar62,4);
              auVar58 = NEON_ucvtf(auVar39,4);
              fStack_200 = auVar17._0_4_;
              fStack_1fc = auVar17._4_4_;
              fStack_1f8 = auVar17._8_4_;
              fStack_1f4 = auVar17._12_4_;
              auVar75 = NEON_ucvtf(auVar24,4);
              fVar34 = fStack_200 + auVar63._0_4_ * 0.0009775171 * 2.0;
              fVar73 = fStack_1fc + auVar63._4_4_ * 0.0009775171 * 2.0;
              fVar71 = fStack_1f8 + auVar63._8_4_ * 0.0009775171 * 2.0;
              fVar32 = fStack_1f4 + auVar63._12_4_ * 0.0009775171 * 2.0;
              fVar53 = fStack_200 + auVar58._0_4_ * 0.0009775171 * 2.0;
              fVar25 = fStack_1fc + auVar58._4_4_ * 0.0009775171 * 2.0;
              fVar95 = fStack_1f8 + auVar58._8_4_ * 0.0009775171 * 2.0;
              fVar65 = fStack_1f4 + auVar58._12_4_ * 0.0009775171 * 2.0;
              fStack_200 = fStack_200 + auVar75._0_4_ * 0.0009775171 * 2.0;
              fStack_1fc = fStack_1fc + auVar75._4_4_ * 0.0009775171 * 2.0;
              fStack_1f8 = fStack_1f8 + auVar75._8_4_ * 0.0009775171 * 2.0;
              fStack_1f4 = fStack_1f4 + auVar75._12_4_ * 0.0009775171 * 2.0;
              fVar13 = fVar53 * fVar53 + fVar34 * fVar34 + fStack_200 * fStack_200;
              fVar55 = fVar25 * fVar25 + fVar73 * fVar73 + fStack_1fc * fStack_1fc;
              fStack_220 = auVar18._0_4_;
              fStack_21c = auVar18._4_4_;
              fStack_218 = auVar18._8_4_;
              fStack_214 = auVar18._12_4_;
              fStack_220 = fStack_220 / SQRT(fVar13 + 1e-06);
              fStack_21c = fStack_21c / SQRT(fVar55 + 1e-06);
              uStack_130 = CONCAT44(fVar55 * fStack_21c * 1.5707964,fVar13 * fStack_220 * 1.5707964)
              ;
              uVar16 = ___sincosf_stret();
              uVar15 = ___sincosf_stret(uStack_130);
              uVar168 = ___sincosf_stret();
              uVar169 = ___sincosf_stret();
              fStack_220 = fStack_220 * (float)uVar15;
              fStack_21c = fStack_21c * (float)uVar16;
              fVar13 = (fStack_218 /
                       SQRT(fVar95 * fVar95 + fVar71 * fVar71 + fStack_1f8 * fStack_1f8 + 1e-06)) *
                       (float)uVar168;
              fVar55 = (fStack_214 /
                       SQRT(fVar65 * fVar65 + fVar32 * fVar32 + fStack_1f4 * fStack_1f4 + 1e-06)) *
                       (float)uVar169;
              *pfVar5 = fVar34 * fStack_220;
              pfVar5[1] = fVar53 * fStack_220;
              pfVar5[2] = fStack_200 * fStack_220;
              pfVar5[3] = (float)((ulong)uVar15 >> 0x20);
              pfVar5[4] = fVar73 * fStack_21c;
              pfVar5[5] = fVar25 * fStack_21c;
              pfVar5[6] = fStack_1fc * fStack_21c;
              pfVar5[7] = (float)((ulong)uVar16 >> 0x20);
              pfVar5[8] = fVar71 * fVar13;
              pfVar5[9] = fVar95 * fVar13;
              pfVar5[10] = fStack_1f8 * fVar13;
              pfVar5[0xb] = (float)((ulong)uVar168 >> 0x20);
              pfVar5[0xc] = fVar32 * fVar55;
              pfVar5[0xd] = fVar65 * fVar55;
              pfVar5[0xe] = fStack_1f4 * fVar55;
              pfVar5[0xf] = (float)((ulong)uVar169 >> 0x20);
              pfVar5 = pfVar5 + 0x10;
              lVar8 = lVar11 + 4;
              uVar102 = lVar11 + 8;
              lVar11 = lVar8;
              pauVar12 = pauVar12 + 1;
            } while (uVar102 <= param_3);
          }
          lVar11 = param_3 - lVar8;
          if (lVar11 != 0) {
            param_2 = param_2 + lVar8 * 4 + 3;
            uVar16 = NEON_fmov(0xbf800000,4);
            puVar10 = (uint *)(*pauVar6 + lVar8 * 4);
            do {
              uVar43 = *puVar10;
              fVar13 = (float)(uVar43 >> 0x14 & 0x3ff) * 0.0009775171;
              fVar34 = fVar13 + fVar13 + -1.0;
              uVar15 = NEON_ucvtf(CONCAT44(uVar43 >> 10,uVar43) & 0x3ff000003ff,4);
              fVar13 = (float)uVar15 * 0.0009775171;
              fVar55 = (float)((ulong)uVar15 >> 0x20) * 0.0009775171;
              fVar73 = fVar13 + fVar13 + (float)uVar16;
              fVar55 = fVar55 + fVar55 + (float)((ulong)uVar16 >> 0x20);
              uVar15 = ___sincosf_stret();
              fVar13 = (1.0 / SQRT(fVar34 * fVar34 + fVar73 * fVar73 + fVar55 * fVar55 + 1e-06)) *
                       (float)uVar15;
              *(ulong *)(param_2 + -3) = CONCAT44(fVar55 * fVar13,fVar73 * fVar13);
              param_2[-1] = fVar34 * fVar13;
              *param_2 = (float)((ulong)uVar15 >> 0x20);
              param_2 = param_2 + 4;
              lVar11 = lVar11 + -1;
              puVar10 = puVar10 + 1;
            } while (lVar11 != 0);
          }
          return pauVar4;
        }
      }
      else {
        if (param_4 == 3) {
          if (param_3 < 4) {
            lVar8 = 0;
          }
          else {
            auVar17 = NEON_fmov(0xbf800000,4);
            auVar18 = NEON_fmov(0x3f800000,4);
            lVar11 = 0;
            pfVar5 = param_2;
            pauVar4 = pauVar6;
            do {
              auVar75 = *pauVar4;
              auVar94._0_6_ =
                   CONCAT15(auVar75[5],CONCAT14(auVar75[4],(uint)(auVar75._0_2_ & 0x3ff))) &
                   0x3ffffffffff;
              auVar94._6_2_ = 0;
              auVar94[8] = auVar75[8];
              auVar94[9] = auVar75[9] & 3;
              auVar94._10_2_ = 0;
              auVar94[0xc] = auVar75[0xc];
              auVar94[0xd] = auVar75[0xd] & 3;
              auVar94._14_2_ = 0;
              uVar43 = auVar75._4_4_ >> 10;
              uVar47 = auVar75._8_4_ >> 10;
              uVar51 = auVar75._12_4_ >> 10;
              auVar101._0_6_ =
                   CONCAT15((char)(uVar43 >> 8),
                            CONCAT14((char)uVar43,(uint)((ushort)(auVar75._0_4_ >> 10) & 0x3ff))) &
                   0x3ffffffffff;
              auVar101._6_2_ = 0;
              auVar101[8] = (undefined1)uVar47;
              auVar101[9] = (byte)(uVar47 >> 8) & 3;
              auVar101._10_2_ = 0;
              auVar101[0xc] = (undefined1)uVar51;
              auVar101[0xd] = (byte)(uVar51 >> 8) & 3;
              auVar101._14_2_ = 0;
              auVar84._0_8_ =
                   CONCAT44(auVar75._4_4_ >> 0x14,auVar75._0_4_ >> 0x14) & 0xfffff3fffffff3ff;
              auVar84._8_4_ = auVar75._8_4_ >> 0x14 & 0xfffff3ff;
              auVar84._12_4_ = auVar75._12_4_ >> 0x14 & 0xfffff3ff;
              auVar58 = NEON_ucvtf(auVar94,4);
              auVar63 = NEON_ucvtf(auVar101,4);
              auVar75 = NEON_ucvtf(auVar84,4);
              fVar162 = auVar17._0_4_;
              fVar29 = fVar162 + auVar58._0_4_ * 0.0009775171 * 2.0;
              fVar40 = auVar17._4_4_;
              fVar31 = fVar40 + auVar58._4_4_ * 0.0009775171 * 2.0;
              fVar41 = auVar17._8_4_;
              fVar48 = auVar17._12_4_;
              fVar44 = fVar41 + auVar58._8_4_ * 0.0009775171 * 2.0;
              fVar45 = fVar48 + auVar58._12_4_ * 0.0009775171 * 2.0;
              fVar71 = fVar162 + auVar63._0_4_ * 0.0009775171 * 2.0;
              fVar32 = fVar40 + auVar63._4_4_ * 0.0009775171 * 2.0;
              fVar53 = fVar41 + auVar63._8_4_ * 0.0009775171 * 2.0;
              fVar25 = fVar48 + auVar63._12_4_ * 0.0009775171 * 2.0;
              fVar95 = fVar162 + auVar75._0_4_ * 0.0009775171 * 2.0;
              fVar65 = fVar40 + auVar75._4_4_ * 0.0009775171 * 2.0;
              fVar27 = fVar41 + auVar75._8_4_ * 0.0009775171 * 2.0;
              fVar136 = fVar48 + auVar75._12_4_ * 0.0009775171 * 2.0;
              fVar13 = auVar18._0_4_ /
                       (fVar29 * fVar29 + fVar71 * fVar71 + fVar95 * fVar95 + auVar18._0_4_);
              fVar55 = auVar18._4_4_ /
                       (fVar31 * fVar31 + fVar32 * fVar32 + fVar65 * fVar65 + auVar18._4_4_);
              fVar34 = auVar18._8_4_ /
                       (fVar44 * fVar44 + fVar53 * fVar53 + fVar27 * fVar27 + auVar18._8_4_);
              fVar73 = auVar18._12_4_ /
                       (fVar45 * fVar45 + fVar25 * fVar25 + fVar136 * fVar136 + auVar18._12_4_);
              fVar13 = fVar13 + fVar13;
              fVar55 = fVar55 + fVar55;
              fVar34 = fVar34 + fVar34;
              fVar73 = fVar73 + fVar73;
              *pfVar5 = fVar29 * fVar13;
              pfVar5[1] = fVar71 * fVar13;
              pfVar5[2] = fVar95 * fVar13;
              pfVar5[3] = fVar13 + fVar162;
              pfVar5[4] = fVar31 * fVar55;
              pfVar5[5] = fVar32 * fVar55;
              pfVar5[6] = fVar65 * fVar55;
              pfVar5[7] = fVar55 + fVar40;
              pfVar5[8] = fVar44 * fVar34;
              pfVar5[9] = fVar53 * fVar34;
              pfVar5[10] = fVar27 * fVar34;
              pfVar5[0xb] = fVar34 + fVar41;
              pfVar5[0xc] = fVar45 * fVar73;
              pfVar5[0xd] = fVar25 * fVar73;
              pfVar5[0xe] = fVar136 * fVar73;
              pfVar5[0xf] = fVar73 + fVar48;
              pfVar5 = pfVar5 + 0x10;
              lVar8 = lVar11 + 4;
              uVar102 = lVar11 + 8;
              lVar11 = lVar8;
              pauVar4 = pauVar4 + 1;
            } while (uVar102 <= param_3);
          }
          lVar11 = param_3 - lVar8;
          if (lVar11 != 0) {
            uVar16 = NEON_fmov(0xbf800000,4);
            puVar10 = (uint *)(*pauVar6 + lVar8 * 4);
            pfVar5 = param_2 + lVar8 * 4;
            do {
              uVar43 = *puVar10;
              fVar13 = (float)(uVar43 >> 0x14 & 0x3ff) * 0.0009775171;
              uVar15 = NEON_ucvtf(CONCAT44(uVar43 >> 10,uVar43) & 0x3ff000003ff,4);
              fVar55 = (float)uVar15 * 0.0009775171;
              fVar34 = (float)((ulong)uVar15 >> 0x20) * 0.0009775171;
              fVar55 = fVar55 + fVar55 + (float)uVar16;
              fVar34 = fVar34 + fVar34 + (float)((ulong)uVar16 >> 0x20);
              fVar13 = fVar13 + fVar13 + -1.0;
              fVar73 = 2.0 / (fVar13 * fVar13 + fVar55 * fVar55 + fVar34 * fVar34 + 1.0);
              pfVar5[2] = fVar13 * fVar73;
              pfVar5[3] = fVar73 + -1.0;
              *pfVar5 = fVar55 * fVar73;
              pfVar5[1] = fVar34 * fVar73;
              lVar11 = lVar11 + -1;
              puVar10 = puVar10 + 1;
              pfVar5 = pfVar5 + 4;
            } while (lVar11 != 0);
          }
          return pauVar6;
        }
        if (param_4 == 4) {
          if (param_3 < 4) {
            lVar8 = 0;
          }
          else {
            auVar17 = NEON_fmov(0xbf800000,4);
            fStack_f8 = auVar17._8_4_;
            fStack_f4 = auVar17._12_4_;
            fStack_100 = auVar17._0_4_;
            fStack_fc = auVar17._4_4_;
            auVar17 = NEON_fmov(0x3f800000,4);
            fStack_108 = auVar17._8_4_;
            fStack_104 = auVar17._12_4_;
            fStack_110 = auVar17._0_4_;
            fStack_10c = auVar17._4_4_;
            pfVar5 = param_2;
            lVar11 = 0;
            uVar102 = param_3;
            pauVar4 = pauVar6;
            do {
              auVar17 = *pauVar4;
              auVar38._0_6_ =
                   CONCAT15(auVar17[5],CONCAT14(auVar17[4],(uint)(auVar17._0_2_ & 0x3ff))) &
                   0x3ffffffffff;
              auVar38._6_2_ = 0;
              auVar38[8] = auVar17[8];
              auVar38[9] = auVar17[9] & 3;
              auVar38._10_2_ = 0;
              auVar38[0xc] = auVar17[0xc];
              auVar38[0xd] = auVar17[0xd] & 3;
              auVar38._14_2_ = 0;
              uVar43 = auVar17._4_4_ >> 10;
              uVar47 = auVar17._8_4_ >> 10;
              uVar51 = auVar17._12_4_ >> 10;
              auVar61._0_6_ =
                   CONCAT15((char)(uVar43 >> 8),
                            CONCAT14((char)uVar43,(uint)((ushort)(auVar17._0_4_ >> 10) & 0x3ff))) &
                   0x3ffffffffff;
              auVar61._6_2_ = 0;
              auVar61[8] = (undefined1)uVar47;
              auVar61[9] = (byte)(uVar47 >> 8) & 3;
              auVar61._10_2_ = 0;
              auVar61[0xc] = (undefined1)uVar51;
              auVar61[0xd] = (byte)(uVar51 >> 8) & 3;
              auVar61._14_2_ = 0;
              auVar23._0_8_ =
                   CONCAT44(auVar17._4_4_ >> 0x14,auVar17._0_4_ >> 0x14) & 0xfffff3fffffff3ff;
              auVar23._8_4_ = auVar17._8_4_ >> 0x14 & 0xfffff3ff;
              auVar23._12_4_ = auVar17._12_4_ >> 0x14 & 0xfffff3ff;
              auVar18 = NEON_ucvtf(auVar38,4);
              auVar75 = NEON_ucvtf(auVar61,4);
              auVar17 = NEON_ucvtf(auVar23,4);
              fVar13 = fStack_100 + auVar18._0_4_ * 0.0009775171 * 2.0;
              fVar55 = fStack_fc + auVar18._4_4_ * 0.0009775171 * 2.0;
              fVar34 = fStack_f8 + auVar18._8_4_ * 0.0009775171 * 2.0;
              fVar73 = fStack_f4 + auVar18._12_4_ * 0.0009775171 * 2.0;
              fVar71 = fStack_100 + auVar75._0_4_ * 0.0009775171 * 2.0;
              fVar32 = fStack_fc + auVar75._4_4_ * 0.0009775171 * 2.0;
              fVar53 = fStack_f8 + auVar75._8_4_ * 0.0009775171 * 2.0;
              fVar25 = fStack_f4 + auVar75._12_4_ * 0.0009775171 * 2.0;
              fVar95 = fStack_100 + auVar17._0_4_ * 0.0009775171 * 2.0;
              fVar65 = fStack_fc + auVar17._4_4_ * 0.0009775171 * 2.0;
              fVar27 = fStack_f8 + auVar17._8_4_ * 0.0009775171 * 2.0;
              fVar136 = fStack_f4 + auVar17._12_4_ * 0.0009775171 * 2.0;
              fVar29 = fVar13 * fVar13 + fVar71 * fVar71 + fVar95 * fVar95;
              fVar162 = fVar55 * fVar55 + fVar32 * fVar32 + fVar65 * fVar65;
              fVar31 = fVar34 * fVar34 + fVar53 * fVar53 + fVar27 * fVar27;
              fVar40 = fVar73 * fVar73 + fVar25 * fVar25 + fVar136 * fVar136;
              auVar77._0_4_ = -(uint)(2.0 <= fVar29);
              auVar77._4_4_ = -(uint)(2.0 <= fVar162);
              auVar77._8_4_ = -(uint)(2.0 <= fVar31);
              auVar77._12_4_ = -(uint)(2.0 <= fVar40);
              auVar17 = NEON_ext(auVar77,auVar77,8,1);
              uVar16 = CONCAT17((byte)((uint)auVar77._4_4_ >> 0x18) | auVar17[7],
                                CONCAT16((byte)((uint)auVar77._4_4_ >> 0x10) | auVar17[6],
                                         CONCAT15((byte)((uint)auVar77._4_4_ >> 8) | auVar17[5],
                                                  CONCAT14((byte)auVar77._4_4_ | auVar17[4],
                                                           CONCAT13((byte)((uint)auVar77._0_4_ >>
                                                                          0x18) | auVar17[3],
                                                                    CONCAT12((byte)((uint)auVar77.
                                                  _0_4_ >> 0x10) | auVar17[2],
                                                  CONCAT11((byte)((uint)auVar77._0_4_ >> 8) |
                                                           auVar17[1],
                                                           (byte)auVar77._0_4_ | auVar17[0])))))));
              uVar16 = NEON_umaxp(uVar16,uVar16,4);
              if ((int)uVar16 != 0) {
                if (3 < uVar102) {
                  uVar102 = 4;
                }
                goto SUB_10a00935c;
              }
              fVar41 = SQRT(2.0 - fVar29);
              fVar44 = SQRT(2.0 - fVar162);
              fVar45 = SQRT(2.0 - fVar31);
              fVar48 = SQRT(2.0 - fVar40);
              *pfVar5 = fVar13 * fVar41;
              pfVar5[1] = fVar71 * fVar41;
              pfVar5[2] = fVar95 * fVar41;
              pfVar5[3] = fStack_110 - fVar29;
              pfVar5[4] = fVar55 * fVar44;
              pfVar5[5] = fVar32 * fVar44;
              pfVar5[6] = fVar65 * fVar44;
              pfVar5[7] = fStack_10c - fVar162;
              pfVar5[8] = fVar34 * fVar45;
              pfVar5[9] = fVar53 * fVar45;
              pfVar5[10] = fVar27 * fVar45;
              pfVar5[0xb] = fStack_108 - fVar31;
              pfVar5[0xc] = fVar73 * fVar48;
              pfVar5[0xd] = fVar25 * fVar48;
              pfVar5[0xe] = fVar136 * fVar48;
              pfVar5[0xf] = fStack_104 - fVar40;
              lVar8 = lVar11 + 4;
              uVar56 = lVar11 + 8;
              pfVar5 = pfVar5 + 0x10;
              uVar102 = uVar102 - 4;
              lVar11 = lVar8;
              pauVar4 = pauVar4 + 1;
            } while (uVar56 <= param_3);
          }
          pauVar4 = (undefined1 (*) [16])(*pauVar6 + lVar8 * 4);
          pfVar5 = param_2 + lVar8 * 4;
          uVar102 = param_3 - lVar8;
SUB_10a00935c:
          if (uVar102 != 0) {
            pfVar5 = pfVar5 + 3;
            uVar16 = NEON_fmov(0xbf800000,4);
            pauVar6 = pauVar4;
            do {
              pauVar4 = (undefined1 (*) [16])(*pauVar6 + 4);
              uVar43 = *(uint *)*pauVar6;
              fVar13 = (float)(uVar43 >> 0x14 & 0x3ff) * 0.0009775171;
              uVar15 = NEON_ucvtf(CONCAT44(uVar43 >> 10,uVar43) & 0x3ff000003ff,4);
              fVar55 = (float)uVar15 * 0.0009775171;
              fVar34 = (float)((ulong)uVar15 >> 0x20) * 0.0009775171;
              fVar73 = fVar55 + fVar55 + (float)uVar16;
              fVar34 = fVar34 + fVar34 + (float)((ulong)uVar16 >> 0x20);
              fVar55 = -1.0;
              fVar13 = fVar13 + fVar13 + -1.0;
              fVar71 = fVar13 * fVar13 + fVar73 * fVar73 + fVar34 * fVar34;
              if (2.0 <= fVar71) {
                uVar15 = 0;
                fVar13 = 0.0;
              }
              else {
                fVar32 = SQRT(2.0 - fVar71);
                fVar55 = 1.0 - fVar71;
                uVar15 = CONCAT44(fVar34 * fVar32,fVar73 * fVar32);
                fVar13 = fVar13 * fVar32;
              }
              *(undefined8 *)(pfVar5 + -3) = uVar15;
              pfVar5[-1] = fVar13;
              *pfVar5 = fVar55;
              pfVar5 = pfVar5 + 4;
              uVar102 = uVar102 - 1;
              pauVar6 = pauVar4;
            } while (uVar102 != 0);
          }
          return pauVar4;
        }
        if (param_4 == 5) {
          if (param_3 < 4) {
            lVar8 = 0;
          }
          else {
            auVar17 = NEON_fmov(0xbf800000,4);
            auVar18 = NEON_fmov(0x3f800000,4);
            auVar75 = NEON_fmov(0xc0c00000,4);
            lVar11 = 0;
            pfVar5 = param_2;
            pauVar4 = pauVar6;
            do {
              auVar58 = *pauVar4;
              auVar110._0_6_ =
                   CONCAT15(auVar58[5],CONCAT14(auVar58[4],(uint)(auVar58._0_2_ & 0x3ff))) &
                   0x3ffffffffff;
              auVar110._6_2_ = 0;
              auVar110[8] = auVar58[8];
              auVar110[9] = auVar58[9] & 3;
              auVar110._10_2_ = 0;
              auVar110[0xc] = auVar58[0xc];
              auVar110[0xd] = auVar58[0xd] & 3;
              auVar110._14_2_ = 0;
              uVar43 = auVar58._4_4_ >> 10;
              uVar47 = auVar58._8_4_ >> 10;
              uVar51 = auVar58._12_4_ >> 10;
              auVar118._0_6_ =
                   CONCAT15((char)(uVar43 >> 8),
                            CONCAT14((char)uVar43,(uint)((ushort)(auVar58._0_4_ >> 10) & 0x3ff))) &
                   0x3ffffffffff;
              auVar118._6_2_ = 0;
              auVar118[8] = (undefined1)uVar47;
              auVar118[9] = (byte)(uVar47 >> 8) & 3;
              auVar118._10_2_ = 0;
              auVar118[0xc] = (undefined1)uVar51;
              auVar118[0xd] = (byte)(uVar51 >> 8) & 3;
              auVar118._14_2_ = 0;
              auVar108._0_8_ =
                   CONCAT44(auVar58._4_4_ >> 0x14,auVar58._0_4_ >> 0x14) & 0xfffff3fffffff3ff;
              auVar108._8_4_ = auVar58._8_4_ >> 0x14 & 0xfffff3ff;
              auVar108._12_4_ = auVar58._12_4_ >> 0x14 & 0xfffff3ff;
              auVar63 = NEON_ucvtf(auVar110,4);
              auVar119 = NEON_ucvtf(auVar118,4);
              auVar58 = NEON_ucvtf(auVar108,4);
              fVar41 = auVar17._0_4_;
              fVar49 = fVar41 + auVar63._0_4_ * 0.0009775171 * 2.0;
              fVar44 = auVar17._4_4_;
              fVar52 = fVar44 + auVar63._4_4_ * 0.0009775171 * 2.0;
              fVar45 = auVar17._8_4_;
              fVar48 = auVar17._12_4_;
              fVar64 = fVar45 + auVar63._8_4_ * 0.0009775171 * 2.0;
              fVar67 = fVar48 + auVar63._12_4_ * 0.0009775171 * 2.0;
              fVar29 = fVar41 + auVar119._0_4_ * 0.0009775171 * 2.0;
              fVar162 = fVar44 + auVar119._4_4_ * 0.0009775171 * 2.0;
              fVar31 = fVar45 + auVar119._8_4_ * 0.0009775171 * 2.0;
              fVar40 = fVar48 + auVar119._12_4_ * 0.0009775171 * 2.0;
              fVar41 = fVar41 + auVar58._0_4_ * 0.0009775171 * 2.0;
              fVar44 = fVar44 + auVar58._4_4_ * 0.0009775171 * 2.0;
              fVar45 = fVar45 + auVar58._8_4_ * 0.0009775171 * 2.0;
              fVar48 = fVar48 + auVar58._12_4_ * 0.0009775171 * 2.0;
              fVar71 = (fVar49 * fVar49 + fVar29 * fVar29 + fVar41 * fVar41) * 0.17157288;
              fVar53 = (fVar52 * fVar52 + fVar162 * fVar162 + fVar44 * fVar44) * 0.17157288;
              fVar95 = (fVar64 * fVar64 + fVar31 * fVar31 + fVar45 * fVar45) * 0.17157288;
              fVar27 = (fVar67 * fVar67 + fVar40 * fVar40 + fVar48 * fVar48) * 0.17157288;
              fVar13 = auVar18._0_4_;
              fVar55 = auVar18._4_4_;
              fVar34 = auVar18._8_4_;
              fVar73 = auVar18._12_4_;
              fVar69 = fVar13 / ((fVar71 + fVar13) * (fVar71 + fVar13));
              fVar72 = fVar55 / ((fVar53 + fVar55) * (fVar53 + fVar55));
              fVar78 = fVar34 / ((fVar95 + fVar34) * (fVar95 + fVar34));
              fVar79 = fVar73 / ((fVar27 + fVar73) * (fVar27 + fVar73));
              fVar32 = (fVar13 - fVar71) * 1.6568543 * fVar69;
              fVar25 = (fVar55 - fVar53) * 1.6568543 * fVar72;
              fVar65 = (fVar34 - fVar95) * 1.6568543 * fVar78;
              fVar136 = (fVar73 - fVar27) * 1.6568543 * fVar79;
              *pfVar5 = fVar49 * fVar32;
              pfVar5[1] = fVar29 * fVar32;
              pfVar5[2] = fVar41 * fVar32;
              pfVar5[3] = (fVar71 * (fVar71 + auVar75._0_4_) + fVar13) * fVar69;
              pfVar5[4] = fVar52 * fVar25;
              pfVar5[5] = fVar162 * fVar25;
              pfVar5[6] = fVar44 * fVar25;
              pfVar5[7] = (fVar53 * (fVar53 + auVar75._4_4_) + fVar55) * fVar72;
              pfVar5[8] = fVar64 * fVar65;
              pfVar5[9] = fVar31 * fVar65;
              pfVar5[10] = fVar45 * fVar65;
              pfVar5[0xb] = (fVar95 * (fVar95 + auVar75._8_4_) + fVar34) * fVar78;
              pfVar5[0xc] = fVar67 * fVar136;
              pfVar5[0xd] = fVar40 * fVar136;
              pfVar5[0xe] = fVar48 * fVar136;
              pfVar5[0xf] = (fVar27 * (fVar27 + auVar75._12_4_) + fVar73) * fVar79;
              pfVar5 = pfVar5 + 0x10;
              lVar8 = lVar11 + 4;
              uVar102 = lVar11 + 8;
              lVar11 = lVar8;
              pauVar4 = pauVar4 + 1;
            } while (uVar102 <= param_3);
          }
          lVar11 = param_3 - lVar8;
          if (lVar11 != 0) {
            uVar16 = NEON_fmov(0xbf800000,4);
            puVar10 = (uint *)(*pauVar6 + lVar8 * 4);
            pfVar5 = param_2 + lVar8 * 4;
            do {
              uVar43 = *puVar10;
              fVar13 = (float)(uVar43 >> 0x14 & 0x3ff) * 0.0009775171;
              fVar13 = fVar13 + fVar13 + -1.0;
              uVar15 = NEON_ucvtf(CONCAT44(uVar43 >> 10,uVar43) & 0x3ff000003ff,4);
              fVar55 = (float)uVar15 * 0.0009775171;
              fVar34 = (float)((ulong)uVar15 >> 0x20) * 0.0009775171;
              fVar55 = fVar55 + fVar55 + (float)uVar16;
              fVar34 = fVar34 + fVar34 + (float)((ulong)uVar16 >> 0x20);
              fVar73 = (fVar13 * fVar13 + fVar55 * fVar55 + fVar34 * fVar34) * 0.17157288;
              fVar32 = (1.0 - fVar73) * 1.6568543;
              fVar71 = 1.0 / ((fVar73 + 1.0) * (fVar73 + 1.0));
              pfVar5[2] = fVar13 * fVar32 * fVar71;
              pfVar5[3] = ((fVar73 + -6.0) * fVar73 + 1.0) * fVar71;
              *pfVar5 = fVar55 * fVar32 * fVar71;
              pfVar5[1] = fVar34 * fVar32 * fVar71;
              lVar11 = lVar11 + -1;
              puVar10 = puVar10 + 1;
              pfVar5 = pfVar5 + 4;
            } while (lVar11 != 0);
          }
          return pauVar6;
        }
      }
      pauVar6 = (undefined1 (*) [16])&UNK_10f630e62;
      FUN_10a00946c();
      lVar11 = *(long *)*pauVar6;
      if (lVar11 != 0) {
        lVar7 = *(long *)(*pauVar6 + 8);
        lVar8 = lVar11;
        if (lVar7 != lVar11) {
          do {
            lVar7 = lVar7 + -0x10;
            FUN_10a009414();
          } while (lVar7 != lVar11);
          lVar8 = *(long *)*pauVar6;
        }
        *(long *)(*pauVar6 + 8) = lVar11;
        __ZdlPv(lVar8);
      }
      return pauVar6;
    }
    fVar71 = pfVar5[2];
    fVar13 = pfVar5[3];
    fVar55 = *pfVar5;
    fVar73 = pfVar5[1];
    fVar34 = fVar13 * fVar13 + fVar55 * fVar55 + fVar73 * fVar73 + fVar71 * fVar71;
    if (fVar34 == 0.0) {
      fVar55 = 0.0;
      fVar73 = 0.0;
      fVar71 = 0.0;
      fVar13 = 1.0;
    }
    else {
      fVar34 = 1.0 / SQRT(fVar34);
      fVar13 = fVar13 * fVar34;
      fVar55 = fVar55 * fVar34;
      fVar73 = fVar73 * fVar34;
      fVar71 = fVar71 * fVar34;
    }
    uVar102 = CONCAT44(fVar71,fVar73) ^
              (CONCAT44(fVar71,fVar73) ^ CONCAT44(-fVar71,-fVar73)) &
              CONCAT44(-(uint)(fVar13 < 0.0),-(uint)(fVar13 < 0.0));
    fVar34 = -fVar13;
    fVar73 = -fVar55;
    if (0.0 <= fVar13) {
      fVar34 = fVar13;
      fVar73 = fVar55;
    }
    fVar13 = (float)_atanf();
    fVar71 = (1.0 / SQRT((1.0 - fVar34 * fVar34) + 1e-06)) * fVar13 * 0.63661975;
    fVar55 = fVar73 * fVar71 * 0.5 + 0.5;
    fVar13 = 0.0;
    if (0.0 <= fVar55) {
      fVar13 = fVar55;
    }
    fVar32 = 1.0;
    if (fVar13 <= 1.0) {
      fVar32 = fVar13;
    }
    fVar55 = (float)uVar102 * fVar71;
    fVar71 = (float)(uVar102 >> 0x20) * fVar71;
  }
  else {
    if (iVar14 == 3) {
      fVar34 = pfVar5[2];
      fVar13 = pfVar5[3];
      fVar71 = *pfVar5;
      fVar55 = pfVar5[1];
      fVar73 = fVar13 * fVar13 + fVar71 * fVar71 + fVar55 * fVar55 + fVar34 * fVar34;
      if (fVar73 == 0.0) {
        fVar71 = 0.0;
        fVar55 = 0.0;
        fVar34 = 0.0;
        fVar13 = 1.0;
      }
      else {
        fVar73 = 1.0 / SQRT(fVar73);
        fVar13 = fVar13 * fVar73;
        fVar71 = fVar71 * fVar73;
        fVar55 = fVar55 * fVar73;
        fVar34 = fVar34 * fVar73;
      }
      fVar73 = -fVar71;
      if (0.0 <= fVar13) {
        fVar73 = fVar71;
      }
      fVar71 = -fVar13;
      if (0.0 <= fVar13) {
        fVar71 = fVar13;
      }
      fVar71 = fVar71 + 1.0;
    }
    else {
      if (iVar14 != 4) {
        if (iVar14 != 5) goto LAB_10a00822c;
        fVar71 = pfVar5[2];
        fVar13 = pfVar5[3];
        fVar55 = *pfVar5;
        fVar73 = pfVar5[1];
        fVar34 = fVar13 * fVar13 + fVar55 * fVar55 + fVar73 * fVar73 + fVar71 * fVar71;
        if (fVar34 == 0.0) {
          fVar55 = 0.0;
          fVar73 = 0.0;
          fVar71 = 0.0;
          fVar13 = 1.0;
        }
        else {
          fVar34 = 1.0 / SQRT(fVar34);
          fVar13 = fVar13 * fVar34;
          fVar55 = fVar55 * fVar34;
          fVar73 = fVar73 * fVar34;
          fVar71 = fVar71 * fVar34;
        }
        uVar102 = CONCAT44(fVar71,fVar73) ^
                  (CONCAT44(fVar71,fVar73) ^ CONCAT44(-fVar71,-fVar73)) &
                  CONCAT44(-(uint)(fVar13 < 0.0),-(uint)(fVar13 < 0.0));
        fVar34 = -fVar13;
        fVar73 = -fVar55;
        if (0.0 <= fVar13) {
          fVar34 = fVar13;
          fVar73 = fVar55;
        }
        fVar34 = fVar34 + 1.0 + SQRT(fVar34 * 2.0 + 2.0);
        fVar55 = ((fVar73 * 2.4142137) / fVar34) * 0.5 + 0.5;
        fVar13 = 0.0;
        if (0.0 <= fVar55) {
          fVar13 = fVar55;
        }
        fVar55 = 1.0;
        if (fVar13 <= 1.0) {
          fVar55 = fVar13;
        }
        uVar43 = (uint)(fVar55 * 1023.0 + 0.5);
        fVar13 = (((float)uVar102 * 2.4142137) / fVar34) * 0.5 + 0.5;
        fVar55 = (((float)(uVar102 >> 0x20) * 2.4142137) / fVar34) * 0.5 + 0.5;
        iVar14 = -(uint)(fVar13 < 0.0);
        iVar26 = -(uint)(fVar55 < 0.0);
        fVar13 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                                 CONCAT12((byte)((uint)fVar13 >> 0x10) &
                                          ~(byte)((uint)iVar14 >> 0x10),
                                          CONCAT11((byte)((uint)fVar13 >> 8) &
                                                   ~(byte)((uint)iVar14 >> 8),
                                                   SUB41(fVar13,0) & ~(byte)iVar14)));
        uVar102 = CONCAT17((byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                           CONCAT16((byte)((uint)fVar55 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10),
                                    CONCAT15((byte)((uint)fVar55 >> 8) & ~(byte)((uint)iVar26 >> 8),
                                             CONCAT14(SUB41(fVar55,0) & ~(byte)iVar26,fVar13))));
        uVar56 = NEON_fmov(0x3f800000,4);
        uVar102 = uVar102 ^ (uVar102 ^ uVar56) &
                            CONCAT44(-(uint)((float)(uVar56 >> 0x20) < (float)(uVar102 >> 0x20)),
                                     -(uint)((float)uVar56 < fVar13));
        uVar16 = NEON_ushl(CONCAT44((int)(float)(int)((float)(uVar102 >> 0x20) * 1023.0 + 0.5),
                                    (int)(float)(int)((float)uVar102 * 1023.0 + 0.5)),0x140000000a,4
                          );
        uVar47 = (uint)((ulong)uVar16 >> 0x20);
        goto LAB_10a00813c;
      }
      fVar34 = pfVar5[2];
      fVar13 = pfVar5[3];
      fVar71 = *pfVar5;
      fVar55 = pfVar5[1];
      fVar73 = fVar13 * fVar13 + fVar71 * fVar71 + fVar55 * fVar55 + fVar34 * fVar34;
      if (fVar73 == 0.0) {
        fVar71 = 0.0;
        fVar55 = 0.0;
        fVar34 = 0.0;
        fVar13 = 1.0;
      }
      else {
        fVar73 = 1.0 / SQRT(fVar73);
        fVar13 = fVar13 * fVar73;
        fVar71 = fVar71 * fVar73;
        fVar55 = fVar55 * fVar73;
        fVar34 = fVar34 * fVar73;
      }
      fVar73 = -fVar71;
      if (0.0 <= fVar13) {
        fVar73 = fVar71;
      }
      fVar71 = -fVar13;
      if (0.0 <= fVar13) {
        fVar71 = fVar13;
      }
      fVar71 = SQRT(fVar71 + 1.0);
    }
    fVar71 = 1.0 / fVar71;
    fVar32 = fVar73 * fVar71 * 0.5 + 0.5;
    fVar73 = 0.0;
    if (0.0 <= fVar32) {
      fVar73 = fVar32;
    }
    fVar32 = 1.0;
    if (fVar73 <= 1.0) {
      fVar32 = fVar73;
    }
    fVar55 = (float)((uint)fVar55 ^ ((uint)fVar55 ^ (uint)-fVar55) & -(uint)(fVar13 < 0.0)) * fVar71
    ;
    fVar71 = (float)((uint)fVar34 ^ ((uint)fVar34 ^ (uint)-fVar34) & -(uint)(fVar13 < 0.0)) * fVar71
    ;
  }
  fVar13 = fVar55 * 0.5 + 0.5;
  fVar55 = fVar71 * 0.5 + 0.5;
  iVar14 = -(uint)(fVar13 < 0.0);
  iVar26 = -(uint)(fVar55 < 0.0);
  fVar13 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                           CONCAT12((byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10),
                                    CONCAT11((byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar14 >> 8),
                                             SUB41(fVar13,0) & ~(byte)iVar14)));
  uVar102 = CONCAT17((byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                     CONCAT16((byte)((uint)fVar55 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10),
                              CONCAT15((byte)((uint)fVar55 >> 8) & ~(byte)((uint)iVar26 >> 8),
                                       CONCAT14(SUB41(fVar55,0) & ~(byte)iVar26,fVar13))));
  uVar56 = NEON_fmov(0x3f800000,4);
  uVar102 = uVar102 ^ (uVar102 ^ uVar56) &
                      CONCAT44(-(uint)((float)(uVar56 >> 0x20) < (float)(uVar102 >> 0x20)),
                               -(uint)((float)uVar56 < fVar13));
  uVar16 = NEON_ushl(CONCAT44((int)(float)(int)((float)(uVar102 >> 0x20) * 1023.0 + 0.5),
                              (int)(float)(int)((float)uVar102 * 1023.0 + 0.5)),0x140000000a,4);
  return (undefined1 (*) [16])
         (ulong)((uint)uVar16 | (int)(fVar32 * 1023.0 + 0.5) | (uint)((ulong)uVar16 >> 0x20));
}



/* Entry: 10a007c90; end: 10a008237;  */

/* WARNING: Possible PIC construction at 0x00010a007224: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a007228) */

undefined1 (*) [16] FUN_10a007c90(float *param_1,float *param_2,ulong param_3,int param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  long lVar6;
  float *pfVar7;
  long lVar8;
  float *pfVar9;
  uint *puVar10;
  long lVar11;
  undefined1 (*pauVar12) [16];
  float extraout_s0;
  float fVar13;
  int iVar14;
  undefined8 uVar15;
  int iVar26;
  undefined8 uVar16;
  float fVar27;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar25;
  float fVar29;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  int iVar28;
  int iVar30;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar31;
  float fVar32;
  int iVar33;
  float extraout_s1;
  float fVar34;
  float fVar40;
  float fVar41;
  float fVar44;
  float fVar45;
  float fVar48;
  float fVar49;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  int iVar42;
  int iVar46;
  int iVar50;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  uint uVar43;
  uint uVar47;
  uint uVar51;
  undefined1 auVar39 [16];
  float fVar52;
  float fVar53;
  int iVar54;
  float extraout_s2;
  float fVar55;
  ulong uVar56;
  float fVar64;
  float fVar65;
  float fVar67;
  float fVar69;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  int iVar66;
  int iVar68;
  int iVar70;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float extraout_s3;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar78;
  float fVar79;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar80;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar95;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined8 unaff_d10;
  ulong uVar102;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined1 auVar103 [12];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar108 [16];
  uint uVar111;
  uint uVar112;
  uint uVar113;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  uint uVar114;
  uint uVar115;
  byte bVar116;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  float fVar136;
  uint uVar137;
  uint uVar138;
  uint uVar145;
  uint uVar146;
  uint uVar147;
  uint uVar148;
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  uint uVar149;
  uint uVar150;
  short sVar151;
  float fVar162;
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined8 uVar168;
  undefined8 uVar169;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  uint uStack_170;
  uint uStack_16c;
  uint uStack_168;
  uint uStack_164;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  undefined8 uStack_100;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined8 in_stack_ffffffffffffff60;
  undefined8 in_stack_ffffffffffffff68;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  int iStack_44;
  undefined1 auVar107 [16];
  undefined4 uVar152;
  undefined6 uVar153;
  
  iVar14 = (int)param_2;
  if (iVar14 < 3) {
    if (iVar14 == 0) {
      fVar73 = param_1[2];
      fVar13 = param_1[3];
      fVar55 = *param_1;
      fVar34 = param_1[1];
      fVar71 = fVar13 * fVar13 + fVar55 * fVar55 + fVar34 * fVar34 + fVar73 * fVar73;
      if (fVar71 == 0.0) {
        fVar55 = 0.0;
        fVar34 = 0.0;
        fVar73 = 0.0;
        fVar13 = 1.0;
      }
      else {
        fVar71 = 1.0 / SQRT(fVar71);
        fVar13 = fVar13 * fVar71;
        fVar55 = fVar55 * fVar71;
        fVar34 = fVar34 * fVar71;
        fVar73 = fVar73 * fVar71;
      }
      bVar3 = fVar73 < 0.0;
      fVar73 = -fVar13;
      if (!bVar3) {
        fVar73 = fVar13;
      }
      fVar73 = fVar73 * 0.5 + 0.5;
      fVar13 = 0.0;
      if (0.0 <= fVar73) {
        fVar13 = fVar73;
      }
      fVar73 = 1.0;
      if (fVar13 <= 1.0) {
        fVar73 = fVar13;
      }
      uVar47 = (uint)(fVar73 * 1023.0 + 0.5);
      uVar102 = CONCAT44(fVar34,fVar55) ^
                (CONCAT44(fVar34,fVar55) ^ CONCAT44(-fVar34,-fVar55)) &
                CONCAT44(-(uint)((int)((uint)bVar3 << 0x1f) < 0),
                         -(uint)((int)((uint)bVar3 << 0x1f) < 0));
      fVar13 = (float)uVar102 * 0.5 + 0.5;
      fVar55 = (float)(uVar102 >> 0x20) * 0.5 + 0.5;
      iVar14 = -(uint)(fVar13 < 0.0);
      iVar26 = -(uint)(fVar55 < 0.0);
      fVar13 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                               CONCAT12((byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar13 >> 8) &
                                                  ~(byte)((uint)iVar14 >> 8),
                                                  SUB41(fVar13,0) & ~(byte)iVar14)));
      uVar102 = CONCAT17((byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                         CONCAT16((byte)((uint)fVar55 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10),
                                  CONCAT15((byte)((uint)fVar55 >> 8) & ~(byte)((uint)iVar26 >> 8),
                                           CONCAT14(SUB41(fVar55,0) & ~(byte)iVar26,fVar13))));
      uVar56 = NEON_fmov(0x3f800000,4);
      uVar102 = uVar102 ^ (uVar102 ^ uVar56) &
                          CONCAT44(-(uint)((float)(uVar56 >> 0x20) < (float)(uVar102 >> 0x20)),
                                   -(uint)((float)uVar56 < fVar13));
      uVar16 = NEON_ushl(CONCAT44((int)(float)(int)((float)(uVar102 >> 0x20) * 1023.0 + 0.5),
                                  (int)(float)(int)((float)uVar102 * 1023.0 + 0.5)),0x140000000a,4);
      uVar43 = (uint)((ulong)uVar16 >> 0x20);
LAB_10a00813c:
      return (undefined1 (*) [16])(ulong)((uint)uVar16 | uVar47 | uVar43);
    }
    if (iVar14 == 1) {
      func_0x00010a005e80(&fStack_50,param_1);
      return (undefined1 (*) [16])
             (ulong)(uint)((int)(fStack_50 * 511.5 + 511.5) | (int)(fStack_4c * 511.5 + 511.5) << 10
                           | iStack_44 << 0x1e | (int)(fStack_48 * 511.5 + 511.5) << 0x14);
    }
    if (iVar14 != 2) {
LAB_10a00822c:
      pauVar5 = (undefined1 (*) [16])&UNK_10f630e62;
      FUN_10a00946c();
      fStack_d0 = (float)unaff_d13;
      fStack_cc = (float)((ulong)unaff_d13 >> 0x20);
      fStack_c8 = (float)unaff_d12;
      fStack_c4 = (float)((ulong)unaff_d12 >> 0x20);
      if (param_4 < 3) {
        if (param_4 == 0) {
          if (param_3 < 4) {
            lVar8 = 0;
          }
          else {
            auVar58._8_4_ = 0x2b8cbccc;
            auVar58._0_8_ = 0x2b8cbccc2b8cbccc;
            auVar58._12_4_ = 0x2b8cbccc;
            auVar17 = NEON_fmov(0x3f800000,4);
            auVar18 = ZEXT216(0);
            auVar75 = NEON_fmov(0xbf800000,4);
            auVar81._8_4_ = 0x447fc000;
            auVar81._0_8_ = 0x447fc000447fc000;
            auVar81._12_4_ = 0x447fc000;
            lVar11 = 0;
            pauVar4 = pauVar5;
            pfVar7 = param_2;
            do {
              fVar95 = *(float *)*pauVar4;
              fVar29 = *(float *)(*pauVar4 + 4);
              fVar71 = *(float *)(*pauVar4 + 8);
              fVar41 = *(float *)(*pauVar4 + 0xc);
              fVar65 = *(float *)pauVar4[1];
              fVar162 = *(float *)(pauVar4[1] + 4);
              fVar32 = *(float *)(pauVar4[1] + 8);
              fVar44 = *(float *)(pauVar4[1] + 0xc);
              fVar27 = *(float *)pauVar4[2];
              fVar31 = *(float *)(pauVar4[2] + 4);
              fVar53 = *(float *)(pauVar4[2] + 8);
              fVar45 = *(float *)(pauVar4[2] + 0xc);
              fVar136 = *(float *)pauVar4[3];
              fVar40 = *(float *)(pauVar4[3] + 4);
              fVar25 = *(float *)(pauVar4[3] + 8);
              fVar48 = *(float *)(pauVar4[3] + 0xc);
              pauVar4 = pauVar4 + 4;
              auVar85._0_4_ = fVar95 * fVar95 + fVar29 * fVar29 + fVar71 * fVar71 + fVar41 * fVar41;
              auVar85._4_4_ =
                   fVar65 * fVar65 + fVar162 * fVar162 + fVar32 * fVar32 + fVar44 * fVar44;
              auVar85._8_4_ = fVar27 * fVar27 + fVar31 * fVar31 + fVar53 * fVar53 + fVar45 * fVar45;
              auVar85._12_4_ =
                   fVar136 * fVar136 + fVar40 * fVar40 + fVar25 * fVar25 + fVar48 * fVar48;
              auVar63 = NEON_fmax(auVar85,auVar58,4);
              fVar13 = auVar17._0_4_ / SQRT(auVar63._0_4_);
              fVar55 = auVar17._4_4_ / SQRT(auVar63._4_4_);
              fVar34 = auVar17._8_4_ / SQRT(auVar63._8_4_);
              fVar73 = auVar17._12_4_ / SQRT(auVar63._12_4_);
              auVar96._0_4_ = -(uint)(0.0 <= fVar71 * fVar13);
              auVar96._4_4_ = -(uint)(0.0 <= fVar32 * fVar55);
              auVar96._8_4_ = -(uint)(0.0 <= fVar53 * fVar34);
              auVar96._12_4_ = -(uint)(0.0 <= fVar25 * fVar73);
              auVar63 = auVar75 ^ (auVar75 ^ auVar17) & auVar96;
              fVar71 = auVar63._0_4_;
              fVar32 = auVar63._4_4_;
              fVar53 = auVar63._8_4_;
              fVar25 = auVar63._12_4_;
              auVar130._0_4_ = fVar41 * fVar13 * fVar71 * 0.5 + 0.5;
              auVar130._4_4_ = fVar44 * fVar55 * fVar32 * 0.5 + 0.5;
              auVar130._8_4_ = fVar45 * fVar34 * fVar53 * 0.5 + 0.5;
              auVar130._12_4_ = fVar48 * fVar73 * fVar25 * 0.5 + 0.5;
              auVar63 = NEON_fmax(auVar130,auVar18,4);
              auVar63 = NEON_fmin(auVar63,auVar17,4);
              auVar139._0_4_ = fVar95 * fVar13 * fVar71 * 0.5 + 0.5;
              auVar139._4_4_ = fVar65 * fVar55 * fVar32 * 0.5 + 0.5;
              auVar139._8_4_ = fVar27 * fVar34 * fVar53 * 0.5 + 0.5;
              auVar139._12_4_ = fVar136 * fVar73 * fVar25 * 0.5 + 0.5;
              auVar131._0_4_ = (int)(auVar63._0_4_ * 1023.0 + 0.5);
              auVar131._4_4_ = (int)(auVar63._4_4_ * 1023.0 + 0.5);
              auVar131._8_4_ = (int)(auVar63._8_4_ * 1023.0 + 0.5);
              auVar131._12_4_ = (int)(auVar63._12_4_ * 1023.0 + 0.5);
              auVar63 = NEON_fmax(auVar139,auVar18,4);
              auVar63 = NEON_fmin(auVar63,auVar17,4);
              auVar140._0_4_ = (int)(auVar63._0_4_ * 1023.0 + 0.5);
              auVar140._4_4_ = (int)(auVar63._4_4_ * 1023.0 + 0.5);
              auVar140._8_4_ = (int)(auVar63._8_4_ * 1023.0 + 0.5);
              auVar140._12_4_ = (int)(auVar63._12_4_ * 1023.0 + 0.5);
              auVar63 = NEON_fmin(auVar131,auVar81,4);
              auVar119 = NEON_fmin(auVar140,auVar81,4);
              auVar86._0_4_ = fVar29 * fVar13 * fVar71 * 0.5 + 0.5;
              auVar86._4_4_ = fVar162 * fVar55 * fVar32 * 0.5 + 0.5;
              auVar86._8_4_ = fVar31 * fVar34 * fVar53 * 0.5 + 0.5;
              auVar86._12_4_ = fVar40 * fVar73 * fVar25 * 0.5 + 0.5;
              iVar33 = (int)auVar63._0_4_;
              iVar42 = (int)auVar63._4_4_;
              iVar46 = (int)auVar63._8_4_;
              iVar50 = (int)auVar63._12_4_;
              auVar63 = NEON_fmax(auVar86,auVar18,4);
              auVar63 = NEON_fmin(auVar63,auVar17,4);
              auVar87._0_4_ = (int)(auVar63._0_4_ * 1023.0 + 0.5);
              auVar87._4_4_ = (int)(auVar63._4_4_ * 1023.0 + 0.5);
              auVar87._8_4_ = (int)(auVar63._8_4_ * 1023.0 + 0.5);
              auVar87._12_4_ = (int)(auVar63._12_4_ * 1023.0 + 0.5);
              auVar63 = NEON_fmin(auVar87,auVar81,4);
              iVar54 = (int)auVar119._0_4_ << 10;
              iVar66 = (int)auVar119._4_4_ << 10;
              iVar68 = (int)auVar119._8_4_ << 10;
              iVar70 = (int)auVar119._12_4_ << 10;
              iVar14 = (int)auVar63._0_4_ << 0x14;
              iVar26 = (int)auVar63._4_4_ << 0x14;
              iVar28 = (int)auVar63._8_4_ << 0x14;
              iVar30 = (int)auVar63._12_4_ << 0x14;
              *(char *)(pfVar7 + 2) = (char)iVar46;
              *(byte *)((long)pfVar7 + 9) = (byte)((uint)iVar68 >> 8) | (byte)((uint)iVar46 >> 8);
              *(byte *)((long)pfVar7 + 10) =
                   (byte)((uint)iVar68 >> 0x10) | (byte)((uint)iVar46 >> 0x10) |
                   (byte)((uint)iVar28 >> 0x10);
              *(byte *)((long)pfVar7 + 0xb) =
                   (byte)((uint)iVar68 >> 0x18) | (byte)((uint)iVar46 >> 0x18) |
                   (byte)((uint)iVar28 >> 0x18);
              *(char *)(pfVar7 + 3) = (char)iVar50;
              *(byte *)((long)pfVar7 + 0xd) = (byte)((uint)iVar70 >> 8) | (byte)((uint)iVar50 >> 8);
              *(byte *)((long)pfVar7 + 0xe) =
                   (byte)((uint)iVar70 >> 0x10) | (byte)((uint)iVar50 >> 0x10) |
                   (byte)((uint)iVar30 >> 0x10);
              *(byte *)((long)pfVar7 + 0xf) =
                   (byte)((uint)iVar70 >> 0x18) | (byte)((uint)iVar50 >> 0x18) |
                   (byte)((uint)iVar30 >> 0x18);
              *(char *)pfVar7 = (char)iVar33;
              *(byte *)((long)pfVar7 + 1) = (byte)((uint)iVar54 >> 8) | (byte)((uint)iVar33 >> 8);
              *(byte *)((long)pfVar7 + 2) =
                   (byte)((uint)iVar54 >> 0x10) | (byte)((uint)iVar33 >> 0x10) |
                   (byte)((uint)iVar14 >> 0x10);
              *(byte *)((long)pfVar7 + 3) =
                   (byte)((uint)iVar54 >> 0x18) | (byte)((uint)iVar33 >> 0x18) |
                   (byte)((uint)iVar14 >> 0x18);
              *(char *)(pfVar7 + 1) = (char)iVar42;
              *(byte *)((long)pfVar7 + 5) = (byte)((uint)iVar66 >> 8) | (byte)((uint)iVar42 >> 8);
              *(byte *)((long)pfVar7 + 6) =
                   (byte)((uint)iVar66 >> 0x10) | (byte)((uint)iVar42 >> 0x10) |
                   (byte)((uint)iVar26 >> 0x10);
              *(byte *)((long)pfVar7 + 7) =
                   (byte)((uint)iVar66 >> 0x18) | (byte)((uint)iVar42 >> 0x18) |
                   (byte)((uint)iVar26 >> 0x18);
              lVar8 = lVar11 + 4;
              uVar102 = lVar11 + 8;
              lVar11 = lVar8;
              pfVar7 = pfVar7 + 4;
            } while (uVar102 <= param_3);
          }
          lVar11 = param_3 - lVar8;
          if (lVar11 != 0) {
            pfVar7 = (float *)(pauVar5[lVar8] + 8);
            uVar102 = NEON_fmov(0x3f800000,4);
            pfVar9 = param_2 + lVar8;
            do {
              fVar71 = *pfVar7;
              fVar13 = pfVar7[1];
              fVar55 = pfVar7[-2];
              fVar34 = pfVar7[-1];
              fVar73 = fVar13 * fVar13 + fVar55 * fVar55 + fVar34 * fVar34 + fVar71 * fVar71;
              if (fVar73 == 0.0) {
                fVar55 = 0.0;
                fVar34 = 0.0;
                fVar71 = 0.0;
                fVar13 = 1.0;
              }
              else {
                fVar73 = 1.0 / SQRT(fVar73);
                fVar13 = fVar13 * fVar73;
                fVar55 = fVar55 * fVar73;
                fVar34 = fVar34 * fVar73;
                fVar71 = fVar71 * fVar73;
              }
              bVar3 = fVar71 < 0.0;
              fVar73 = -fVar13;
              if (!bVar3) {
                fVar73 = fVar13;
              }
              fVar73 = fVar73 * 0.5 + 0.5;
              fVar13 = 0.0;
              if (0.0 <= fVar73) {
                fVar13 = fVar73;
              }
              fVar73 = 1.0;
              if (fVar13 <= 1.0) {
                fVar73 = fVar13;
              }
              uVar56 = CONCAT44(fVar34,fVar55) ^
                       (CONCAT44(fVar34,fVar55) ^ CONCAT44(-fVar34,-fVar55)) &
                       CONCAT44(-(uint)((int)((uint)bVar3 << 0x1f) < 0),
                                -(uint)((int)((uint)bVar3 << 0x1f) < 0));
              fVar13 = (float)uVar56 * 0.5 + 0.5;
              fVar55 = (float)(uVar56 >> 0x20) * 0.5 + 0.5;
              iVar14 = -(uint)(fVar13 < 0.0);
              iVar26 = -(uint)(fVar55 < 0.0);
              fVar13 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                                       CONCAT12((byte)((uint)fVar13 >> 0x10) &
                                                ~(byte)((uint)iVar14 >> 0x10),
                                                CONCAT11((byte)((uint)fVar13 >> 8) &
                                                         ~(byte)((uint)iVar14 >> 8),
                                                         SUB41(fVar13,0) & ~(byte)iVar14)));
              uVar56 = CONCAT17((byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                                CONCAT16((byte)((uint)fVar55 >> 0x10) &
                                         ~(byte)((uint)iVar26 >> 0x10),
                                         CONCAT15((byte)((uint)fVar55 >> 8) &
                                                  ~(byte)((uint)iVar26 >> 8),
                                                  CONCAT14(SUB41(fVar55,0) & ~(byte)iVar26,fVar13)))
                               );
              uVar56 = uVar56 ^ (uVar56 ^ uVar102) &
                                CONCAT44(-(uint)((float)(uVar102 >> 0x20) < (float)(uVar56 >> 0x20))
                                         ,-(uint)((float)uVar102 < fVar13));
              uVar16 = NEON_ushl(CONCAT44((int)(float)(int)((float)(uVar56 >> 0x20) * 1023.0 + 0.5),
                                          (int)(float)(int)((float)uVar56 * 1023.0 + 0.5)),
                                 0x140000000a,4);
              pfVar7 = pfVar7 + 4;
              *pfVar9 = (float)((uint)uVar16 | (int)(fVar73 * 1023.0 + 0.5) |
                               (uint)((ulong)uVar16 >> 0x20));
              lVar11 = lVar11 + -1;
              pfVar9 = pfVar9 + 1;
            } while (lVar11 != 0);
          }
          return pauVar5;
        }
        if (param_4 == 1) {
          if (param_3 < 4) {
            lVar8 = 0;
          }
          else {
            auVar21._8_4_ = 0x2b8cbccc;
            auVar21._0_8_ = 0x2b8cbccc2b8cbccc;
            auVar21._12_4_ = 0x2b8cbccc;
            auVar17 = NEON_fmov(0x3f800000,4);
            auVar18 = NEON_fmov(0xbf800000,4);
            auVar76._8_4_ = 0x40000000;
            auVar76._0_8_ = 0x4000000040000000;
            auVar76._12_4_ = 0x40000000;
            auVar75 = NEON_fmov(0x40400000,4);
            lVar11 = 0;
            pauVar4 = pauVar5;
            pfVar7 = param_2;
            do {
              fVar71 = *(float *)*pauVar4;
              fVar95 = *(float *)(*pauVar4 + 4);
              fVar29 = *(float *)(*pauVar4 + 8);
              fVar41 = *(float *)(*pauVar4 + 0xc);
              fVar32 = *(float *)pauVar4[1];
              fVar65 = *(float *)(pauVar4[1] + 4);
              fVar162 = *(float *)(pauVar4[1] + 8);
              fVar44 = *(float *)(pauVar4[1] + 0xc);
              fVar53 = *(float *)pauVar4[2];
              fVar27 = *(float *)(pauVar4[2] + 4);
              fVar31 = *(float *)(pauVar4[2] + 8);
              fVar45 = *(float *)(pauVar4[2] + 0xc);
              fVar25 = *(float *)pauVar4[3];
              fVar136 = *(float *)(pauVar4[3] + 4);
              fVar40 = *(float *)(pauVar4[3] + 8);
              fVar48 = *(float *)(pauVar4[3] + 0xc);
              pauVar4 = pauVar4 + 4;
              auVar92._0_4_ = fVar71 * fVar71 + fVar95 * fVar95 + fVar29 * fVar29 + fVar41 * fVar41;
              auVar92._4_4_ =
                   fVar32 * fVar32 + fVar65 * fVar65 + fVar162 * fVar162 + fVar44 * fVar44;
              auVar92._8_4_ = fVar53 * fVar53 + fVar27 * fVar27 + fVar31 * fVar31 + fVar45 * fVar45;
              auVar92._12_4_ =
                   fVar25 * fVar25 + fVar136 * fVar136 + fVar40 * fVar40 + fVar48 * fVar48;
              auVar58 = NEON_fmax(auVar92,auVar21,4);
              fVar13 = auVar17._0_4_ / SQRT(auVar58._0_4_);
              fVar55 = auVar17._4_4_ / SQRT(auVar58._4_4_);
              fVar34 = auVar17._8_4_ / SQRT(auVar58._8_4_);
              fVar73 = auVar17._12_4_ / SQRT(auVar58._12_4_);
              auVar100._0_4_ = fVar71 * fVar13;
              auVar100._4_4_ = fVar32 * fVar55;
              auVar100._8_4_ = fVar53 * fVar34;
              auVar100._12_4_ = fVar25 * fVar73;
              auVar134._0_4_ = fVar95 * fVar13;
              auVar134._4_4_ = fVar65 * fVar55;
              auVar134._8_4_ = fVar27 * fVar34;
              auVar134._12_4_ = fVar136 * fVar73;
              auVar144._0_4_ = fVar41 * fVar13;
              auVar144._4_4_ = fVar44 * fVar55;
              auVar144._8_4_ = fVar45 * fVar34;
              auVar144._12_4_ = fVar48 * fVar73;
              auVar93._0_4_ = fVar29 * fVar13;
              auVar93._4_4_ = fVar162 * fVar55;
              auVar93._8_4_ = fVar31 * fVar34;
              auVar93._12_4_ = fVar40 * fVar73;
              iVar14 = -(uint)(ABS(auVar100._0_4_) <= ABS(auVar144._0_4_));
              iVar26 = -(uint)(ABS(auVar100._4_4_) <= ABS(auVar144._4_4_));
              iVar28 = -(uint)(ABS(auVar100._8_4_) <= ABS(auVar144._8_4_));
              iVar30 = -(uint)(ABS(auVar100._12_4_) <= ABS(auVar144._12_4_));
              iVar33 = -(uint)(ABS(auVar134._0_4_) <= ABS(auVar144._0_4_));
              iVar46 = -(uint)(ABS(auVar134._4_4_) <= ABS(auVar144._4_4_));
              iVar54 = -(uint)(ABS(auVar134._8_4_) <= ABS(auVar144._8_4_));
              iVar68 = -(uint)(ABS(auVar134._12_4_) <= ABS(auVar144._12_4_));
              iVar42 = -(uint)(ABS(auVar93._0_4_) <= ABS(auVar144._0_4_));
              iVar50 = -(uint)(ABS(auVar93._4_4_) <= ABS(auVar144._4_4_));
              iVar66 = -(uint)(ABS(auVar93._8_4_) <= ABS(auVar144._8_4_));
              iVar70 = -(uint)(ABS(auVar93._12_4_) <= ABS(auVar144._12_4_));
              auVar106[0] = (byte)iVar42 & (byte)iVar33 & (byte)iVar14;
              auVar106[1] = (byte)((uint)iVar42 >> 8) &
                            (byte)((uint)iVar33 >> 8) & (byte)((uint)iVar14 >> 8);
              auVar106[2] = (byte)((uint)iVar42 >> 0x10) &
                            (byte)((uint)iVar33 >> 0x10) & (byte)((uint)iVar14 >> 0x10);
              auVar106[3] = (byte)((uint)iVar42 >> 0x18) &
                            (byte)((uint)iVar33 >> 0x18) & (byte)((uint)iVar14 >> 0x18);
              auVar106[4] = (byte)iVar50 & (byte)iVar46 & (byte)iVar26;
              auVar106[5] = (byte)((uint)iVar50 >> 8) &
                            (byte)((uint)iVar46 >> 8) & (byte)((uint)iVar26 >> 8);
              auVar106[6] = (byte)((uint)iVar50 >> 0x10) &
                            (byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar26 >> 0x10);
              auVar106[7] = (byte)((uint)iVar50 >> 0x18) &
                            (byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar26 >> 0x18);
              auVar106[8] = (byte)iVar66 & (byte)iVar54 & (byte)iVar28;
              auVar106[9] = (byte)((uint)iVar66 >> 8) &
                            (byte)((uint)iVar54 >> 8) & (byte)((uint)iVar28 >> 8);
              auVar106[10] = (byte)((uint)iVar66 >> 0x10) &
                             (byte)((uint)iVar54 >> 0x10) & (byte)((uint)iVar28 >> 0x10);
              auVar106[0xb] =
                   (byte)((uint)iVar66 >> 0x18) &
                   (byte)((uint)iVar54 >> 0x18) & (byte)((uint)iVar28 >> 0x18);
              auVar106[0xc] = (byte)iVar70 & (byte)iVar68 & (byte)iVar30;
              auVar106[0xd] =
                   (byte)((uint)iVar70 >> 8) & (byte)((uint)iVar68 >> 8) & (byte)((uint)iVar30 >> 8)
              ;
              auVar106[0xe] =
                   (byte)((uint)iVar70 >> 0x10) &
                   (byte)((uint)iVar68 >> 0x10) & (byte)((uint)iVar30 >> 0x10);
              auVar106[0xf] =
                   (byte)((uint)iVar70 >> 0x18) &
                   (byte)((uint)iVar68 >> 0x18) & (byte)((uint)iVar30 >> 0x18);
              iVar14 = -(uint)(ABS(auVar134._0_4_) <= ABS(auVar100._0_4_));
              iVar26 = -(uint)(ABS(auVar134._4_4_) <= ABS(auVar100._4_4_));
              iVar28 = -(uint)(ABS(auVar134._8_4_) <= ABS(auVar100._8_4_));
              iVar30 = -(uint)(ABS(auVar134._12_4_) <= ABS(auVar100._12_4_));
              iVar33 = -(uint)(ABS(auVar93._0_4_) <= ABS(auVar100._0_4_));
              iVar42 = -(uint)(ABS(auVar93._4_4_) <= ABS(auVar100._4_4_));
              iVar46 = -(uint)(ABS(auVar93._8_4_) <= ABS(auVar100._8_4_));
              iVar50 = -(uint)(ABS(auVar93._12_4_) <= ABS(auVar100._12_4_));
              bVar116 = (byte)iVar33 & (byte)iVar14;
              bVar121 = (byte)((uint)iVar33 >> 8) & (byte)((uint)iVar14 >> 8);
              bVar122 = (byte)iVar42 & (byte)iVar26;
              bVar123 = (byte)((uint)iVar42 >> 8) & (byte)((uint)iVar26 >> 8);
              bVar124 = (byte)iVar46 & (byte)iVar28;
              bVar125 = (byte)((uint)iVar46 >> 8) & (byte)((uint)iVar28 >> 8);
              bVar126 = (byte)iVar50 & (byte)iVar30;
              bVar127 = (byte)((uint)iVar50 >> 8) & (byte)((uint)iVar30 >> 8);
              sVar151 = CONCAT11(bVar121 & ~auVar106[1],bVar116 & ~auVar106[0]);
              uVar152 = CONCAT13(bVar123 & ~auVar106[5],CONCAT12(bVar122 & ~auVar106[4],sVar151));
              uVar153 = CONCAT15(bVar125 & ~auVar106[9],CONCAT14(bVar124 & ~auVar106[8],uVar152));
              auVar160._0_4_ = (int)sVar151;
              auVar160._4_4_ = (int)(short)((uint)uVar152 >> 0x10);
              auVar160._8_4_ = (int)(short)((uint6)uVar153 >> 0x20);
              auVar160._12_4_ =
                   (int)(short)(CONCAT17(bVar127 & ~auVar106[0xd],
                                         CONCAT16(bVar126 & ~auVar106[0xc],uVar153)) >> 0x30);
              iVar54 = -(uint)(ABS(auVar93._0_4_) <= ABS(auVar134._0_4_));
              iVar66 = -(uint)(ABS(auVar93._4_4_) <= ABS(auVar134._4_4_));
              iVar68 = -(uint)(ABS(auVar93._8_4_) <= ABS(auVar134._8_4_));
              iVar70 = -(uint)(ABS(auVar93._12_4_) <= ABS(auVar134._12_4_));
              auVar117._0_8_ =
                   CONCAT17((byte)((uint)iVar42 >> 0x18) & (byte)((uint)iVar26 >> 0x18) |
                            ~(byte)((uint)iVar66 >> 0x18) | auVar106[7],
                            CONCAT16((byte)((uint)iVar42 >> 0x10) & (byte)((uint)iVar26 >> 0x10) |
                                     ~(byte)((uint)iVar66 >> 0x10) | auVar106[6],
                                     CONCAT15(bVar123 | ~(byte)((uint)iVar66 >> 8) | auVar106[5],
                                              CONCAT14(bVar122 | ~(byte)iVar66 | auVar106[4],
                                                       CONCAT13((byte)((uint)iVar33 >> 0x18) &
                                                                (byte)((uint)iVar14 >> 0x18) |
                                                                ~(byte)((uint)iVar54 >> 0x18) |
                                                                auVar106[3],
                                                                CONCAT12((byte)((uint)iVar33 >> 0x10
                                                                               ) & (byte)((uint)
                                                  iVar14 >> 0x10) | ~(byte)((uint)iVar54 >> 0x10) |
                                                  auVar106[2],
                                                  CONCAT11(bVar121 | ~(byte)((uint)iVar54 >> 8) |
                                                           auVar106[1],
                                                           bVar116 | ~(byte)iVar54 | auVar106[0]))))
                                             )));
              auVar117[8] = bVar124 | ~(byte)iVar68 | auVar106[8];
              auVar117[9] = bVar125 | ~(byte)((uint)iVar68 >> 8) | auVar106[9];
              auVar117[10] = (byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar28 >> 0x10) |
                             ~(byte)((uint)iVar68 >> 0x10) | auVar106[10];
              auVar117[0xb] =
                   (byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar28 >> 0x18) |
                   ~(byte)((uint)iVar68 >> 0x18) | auVar106[0xb];
              auVar117[0xc] = bVar126 | ~(byte)iVar70 | auVar106[0xc];
              auVar117[0xd] = bVar127 | ~(byte)((uint)iVar70 >> 8) | auVar106[0xd];
              auVar117[0xe] =
                   (byte)((uint)iVar50 >> 0x10) & (byte)((uint)iVar30 >> 0x10) |
                   ~(byte)((uint)iVar70 >> 0x10) | auVar106[0xe];
              auVar117[0xf] =
                   (byte)((uint)iVar50 >> 0x18) & (byte)((uint)iVar30 >> 0x18) |
                   ~(byte)((uint)iVar70 >> 0x18) | auVar106[0xf];
              auVar165._8_8_ = auVar117._8_8_;
              auVar165._0_8_ = auVar117._0_8_;
              auVar58 = auVar134 ^ (auVar134 ^ auVar93) & auVar165;
              auVar58 = auVar58 ^ (auVar58 ^ auVar100) & auVar160;
              auVar58 = auVar58 ^ (auVar58 ^ auVar144) & auVar106;
              auVar161._0_4_ = -(uint)(auVar58._0_4_ < 0.0);
              auVar161._4_4_ = -(uint)(auVar58._4_4_ < 0.0);
              auVar161._8_4_ = -(uint)(auVar58._8_4_ < 0.0);
              auVar161._12_4_ = -(uint)(auVar58._12_4_ < 0.0);
              auVar58 = auVar17 ^ (auVar17 ^ auVar18) & auVar161;
              auVar144 = auVar144 ^ (auVar144 ^ auVar100) & auVar106;
              fVar55 = auVar58._0_4_;
              fVar34 = auVar58._4_4_;
              fVar73 = auVar58._8_4_;
              fVar71 = auVar58._12_4_;
              auVar109._0_4_ =
                   -(uint)((int)((uint)CONCAT12(auVar106[4] | bVar122,
                                                (ushort)(auVar106[0] | bVar116)) << 0x1f) < 0);
              auVar109._4_4_ = -(uint)((int)((uint)(auVar106[4] | bVar122) << 0x1f) < 0);
              auVar109._8_4_ = -(uint)((int)((uint)(auVar106[8] | bVar124) << 0x1f) < 0);
              auVar109._12_4_ = -(uint)((int)((uint)(auVar106[0xc] | bVar126) << 0x1f) < 0);
              auVar100 = auVar100 ^ (auVar100 ^ auVar134) & auVar109;
              iVar54 = (int)(float)(int)(auVar144._0_4_ * fVar55 * 511.5 + 511.5);
              iVar66 = (int)(float)(int)(auVar144._4_4_ * fVar34 * 511.5 + 511.5);
              iVar68 = (int)(float)(int)(auVar144._8_4_ * fVar73 * 511.5 + 511.5);
              iVar70 = (int)(float)(int)(auVar144._12_4_ * fVar71 * 511.5 + 511.5);
              auVar93 = auVar93 ^ (auVar93 ^ auVar134 ^ (auVar134 ^ auVar93) & ~auVar117) &
                                  ~auVar109;
              auVar58 = auVar17 ^ (auVar17 ^ auVar76) & auVar117;
              fVar13 = (float)CONCAT13(auVar58[3] & ~(byte)((uint)auVar109._0_4_ >> 0x18) |
                                       auVar106[3] & auVar75[3],
                                       CONCAT12(auVar58[2] & ~(byte)((uint)auVar109._0_4_ >> 0x10) |
                                                auVar106[2] & auVar75[2],
                                                CONCAT11(auVar58[1] &
                                                         ~(byte)((uint)auVar109._0_4_ >> 8) |
                                                         auVar106[1] & auVar75[1],
                                                         auVar58[0] & ~(byte)auVar109._0_4_ |
                                                         auVar106[0] & auVar75[0])));
              auVar103._0_8_ =
                   CONCAT17(auVar58[7] & ~(byte)((uint)auVar109._4_4_ >> 0x18) |
                            auVar106[7] & auVar75[7],
                            CONCAT16(auVar58[6] & ~(byte)((uint)auVar109._4_4_ >> 0x10) |
                                     auVar106[6] & auVar75[6],
                                     CONCAT15(auVar58[5] & ~(byte)((uint)auVar109._4_4_ >> 8) |
                                              auVar106[5] & auVar75[5],
                                              CONCAT14(auVar58[4] & ~(byte)auVar109._4_4_ |
                                                       auVar106[4] & auVar75[4],fVar13))));
              auVar103[8] = auVar58[8] & ~(byte)auVar109._8_4_ | auVar106[8] & auVar75[8];
              auVar103[9] = auVar58[9] & ~(byte)((uint)auVar109._8_4_ >> 8) |
                            auVar106[9] & auVar75[9];
              auVar103[10] = auVar58[10] & ~(byte)((uint)auVar109._8_4_ >> 0x10) |
                             auVar106[10] & auVar75[10];
              auVar103[0xb] =
                   auVar58[0xb] & ~(byte)((uint)auVar109._8_4_ >> 0x18) |
                   auVar106[0xb] & auVar75[0xb];
              auVar107[0xc] = auVar58[0xc] & ~(byte)auVar109._12_4_ | auVar106[0xc] & auVar75[0xc];
              auVar107._0_12_ = auVar103;
              auVar107[0xd] =
                   auVar58[0xd] & ~(byte)((uint)auVar109._12_4_ >> 8) | auVar106[0xd] & auVar75[0xd]
              ;
              auVar107[0xe] =
                   auVar58[0xe] & ~(byte)((uint)auVar109._12_4_ >> 0x10) |
                   auVar106[0xe] & auVar75[0xe];
              auVar107[0xf] =
                   auVar58[0xf] & ~(byte)((uint)auVar109._12_4_ >> 0x18) |
                   auVar106[0xf] & auVar75[0xf];
              iVar33 = (int)(float)(int)(auVar100._0_4_ * fVar55 * 511.5 + 511.5) << 10;
              iVar42 = (int)(float)(int)(auVar100._4_4_ * fVar34 * 511.5 + 511.5) << 10;
              iVar46 = (int)(float)(int)(auVar100._8_4_ * fVar73 * 511.5 + 511.5) << 10;
              iVar50 = (int)(float)(int)(auVar100._12_4_ * fVar71 * 511.5 + 511.5) << 10;
              iVar14 = (int)(float)(int)(auVar93._0_4_ * fVar55 * 511.5 + 511.5) << 0x14;
              iVar26 = (int)(float)(int)(auVar93._4_4_ * fVar34 * 511.5 + 511.5) << 0x14;
              iVar28 = (int)(float)(int)(auVar93._8_4_ * fVar73 * 511.5 + 511.5) << 0x14;
              iVar30 = (int)(float)(int)(auVar93._12_4_ * fVar71 * 511.5 + 511.5) << 0x14;
              *(char *)(pfVar7 + 2) = (char)iVar68;
              *(byte *)((long)pfVar7 + 9) = (byte)((uint)iVar68 >> 8) | (byte)((uint)iVar46 >> 8);
              *(byte *)((long)pfVar7 + 10) =
                   (byte)((uint)iVar68 >> 0x10) | (byte)((uint)iVar46 >> 0x10) |
                   (byte)((uint)iVar28 >> 0x10);
              *(byte *)((long)pfVar7 + 0xb) =
                   (byte)((uint)((int)auVar103._8_4_ << 0x1e) >> 0x18) |
                   (byte)((uint)iVar68 >> 0x18) | (byte)((uint)iVar46 >> 0x18) |
                   (byte)((uint)iVar28 >> 0x18);
              *(char *)(pfVar7 + 3) = (char)iVar70;
              *(byte *)((long)pfVar7 + 0xd) = (byte)((uint)iVar70 >> 8) | (byte)((uint)iVar50 >> 8);
              *(byte *)((long)pfVar7 + 0xe) =
                   (byte)((uint)iVar70 >> 0x10) | (byte)((uint)iVar50 >> 0x10) |
                   (byte)((uint)iVar30 >> 0x10);
              *(byte *)((long)pfVar7 + 0xf) =
                   (byte)((uint)((int)auVar107._12_4_ << 0x1e) >> 0x18) |
                   (byte)((uint)iVar70 >> 0x18) | (byte)((uint)iVar50 >> 0x18) |
                   (byte)((uint)iVar30 >> 0x18);
              *(char *)pfVar7 = (char)iVar54;
              *(byte *)((long)pfVar7 + 1) = (byte)((uint)iVar54 >> 8) | (byte)((uint)iVar33 >> 8);
              *(byte *)((long)pfVar7 + 2) =
                   (byte)((uint)iVar54 >> 0x10) | (byte)((uint)iVar33 >> 0x10) |
                   (byte)((uint)iVar14 >> 0x10);
              *(byte *)((long)pfVar7 + 3) =
                   (byte)((uint)((int)fVar13 << 0x1e) >> 0x18) | (byte)((uint)iVar54 >> 0x18) |
                   (byte)((uint)iVar33 >> 0x18) | (byte)((uint)iVar14 >> 0x18);
              *(char *)(pfVar7 + 1) = (char)iVar66;
              *(byte *)((long)pfVar7 + 5) = (byte)((uint)iVar66 >> 8) | (byte)((uint)iVar42 >> 8);
              *(byte *)((long)pfVar7 + 6) =
                   (byte)((uint)iVar66 >> 0x10) | (byte)((uint)iVar42 >> 0x10) |
                   (byte)((uint)iVar26 >> 0x10);
              *(byte *)((long)pfVar7 + 7) =
                   (byte)((uint)((int)(float)((ulong)auVar103._0_8_ >> 0x20) << 0x1e) >> 0x18) |
                   (byte)((uint)iVar66 >> 0x18) | (byte)((uint)iVar42 >> 0x18) |
                   (byte)((uint)iVar26 >> 0x18);
              lVar8 = lVar11 + 4;
              uVar102 = lVar11 + 8;
              lVar11 = lVar8;
              pfVar7 = pfVar7 + 4;
            } while (uVar102 <= param_3);
          }
          lVar11 = param_3 - lVar8;
          if (lVar11 != 0) {
            pauVar4 = pauVar5 + lVar8;
            pfVar7 = param_2 + lVar8;
            do {
              pauVar5 = (undefined1 (*) [16])&stack0xffffffffffffff60;
              func_0x00010a005e80(&stack0xffffffffffffff60,pauVar4);
              *pfVar7 = (float)((int)((float)in_stack_ffffffffffffff60 * 511.5 + 511.5) |
                                (int)(SUB84(in_stack_ffffffffffffff60,4) * 511.5 + 511.5) << 10 |
                                SUB84(in_stack_ffffffffffffff68,4) << 0x1e |
                               (int)((float)in_stack_ffffffffffffff68 * 511.5 + 511.5) << 0x14);
              pauVar4 = pauVar4 + 1;
              lVar11 = lVar11 + -1;
              pfVar7 = pfVar7 + 1;
            } while (lVar11 != 0);
          }
          return pauVar5;
        }
        if (param_4 == 2) {
          pauVar4 = pauVar5;
          if (param_3 < 4) {
            lVar8 = 0;
          }
          else {
            auVar17 = NEON_fmov(0x3f800000,4);
            fStack_108 = auVar17._8_4_;
            fStack_104 = auVar17._12_4_;
            fStack_110 = auVar17._0_4_;
            fStack_10c = auVar17._4_4_;
            auVar18 = NEON_fmov(0xbf800000,4);
            lVar11 = 0;
            pauVar12 = pauVar5;
            pfVar7 = param_2;
            do {
              fVar13 = *(float *)*pauVar12;
              fVar31 = *(float *)(*pauVar12 + 4);
              fVar52 = *(float *)(*pauVar12 + 8);
              fVar55 = *(float *)(*pauVar12 + 0xc);
              fVar25 = *(float *)pauVar12[1];
              fVar40 = *(float *)(pauVar12[1] + 4);
              fVar64 = *(float *)(pauVar12[1] + 8);
              fVar34 = *(float *)(pauVar12[1] + 0xc);
              fVar27 = *(float *)pauVar12[2];
              fVar44 = *(float *)(pauVar12[2] + 4);
              fVar67 = *(float *)(pauVar12[2] + 8);
              fVar73 = *(float *)(pauVar12[2] + 0xc);
              fVar29 = *(float *)pauVar12[3];
              fVar48 = *(float *)(pauVar12[3] + 4);
              fVar69 = *(float *)(pauVar12[3] + 8);
              fVar71 = *(float *)(pauVar12[3] + 0xc);
              pauVar12 = pauVar12 + 4;
              auVar74._0_4_ = fVar13 * fVar13 + fVar31 * fVar31 + fVar52 * fVar52 + fVar55 * fVar55;
              auVar74._4_4_ = fVar25 * fVar25 + fVar40 * fVar40 + fVar64 * fVar64 + fVar34 * fVar34;
              auVar74._8_4_ = fVar27 * fVar27 + fVar44 * fVar44 + fVar67 * fVar67 + fVar73 * fVar73;
              auVar74._12_4_ = fVar29 * fVar29 + fVar48 * fVar48 + fVar69 * fVar69 + fVar71 * fVar71
              ;
              auVar2._8_4_ = 0x2b8cbccc;
              auVar2._0_8_ = 0x2b8cbccc2b8cbccc;
              auVar2._12_4_ = 0x2b8cbccc;
              auVar75 = NEON_fmax(auVar74,auVar2,4);
              fVar72 = fStack_110 / SQRT(auVar75._0_4_);
              fVar78 = fStack_10c / SQRT(auVar75._4_4_);
              fVar79 = fStack_108 / SQRT(auVar75._8_4_);
              fVar80 = fStack_104 / SQRT(auVar75._12_4_);
              fVar32 = ABS(fVar55 * fVar72);
              fVar41 = ABS(fVar34 * fVar78);
              fVar45 = ABS(fVar73 * fVar79);
              fVar49 = ABS(fVar71 * fVar80);
              uStack_170 = auVar18._0_4_;
              uStack_16c = auVar18._4_4_;
              uStack_168 = auVar18._8_4_;
              uStack_164 = auVar18._12_4_;
              fVar55 = (float)((uint)fStack_110 ^
                              ((uint)fStack_110 ^ uStack_170) & -(uint)(fVar55 * fVar72 < 0.0));
              fVar95 = (float)((uint)fStack_10c ^
                              ((uint)fStack_10c ^ uStack_16c) & -(uint)(fVar34 * fVar78 < 0.0));
              fVar136 = (float)((uint)fStack_108 ^
                               ((uint)fStack_108 ^ uStack_168) & -(uint)(fVar73 * fVar79 < 0.0));
              fVar162 = (float)((uint)fStack_104 ^
                               ((uint)fStack_104 ^ uStack_164) & -(uint)(fVar71 * fVar80 < 0.0));
              fVar34 = fStack_110 - fVar32 * fVar32;
              fVar71 = fStack_10c - fVar41 * fVar41;
              fVar53 = fStack_110 / SQRT(fVar34 + 1e-06);
              fVar65 = fStack_10c / SQRT(fVar71 + 1e-06);
              fVar73 = (float)_atanf();
              fVar34 = (float)_atanf(CONCAT44((fVar71 * fVar65) / fVar41,(fVar34 * fVar53) / fVar32)
                                    );
              fVar71 = (float)_atanf();
              fVar32 = (float)_atanf();
              auVar1._8_4_ = 0x447fc000;
              auVar1._0_8_ = 0x447fc000447fc000;
              auVar1._12_4_ = 0x447fc000;
              fVar53 = fVar53 * fVar34 * 0.63661975;
              fVar65 = fVar65 * fVar73 * 0.63661975;
              fVar34 = (fStack_108 / SQRT((fStack_108 - fVar45 * fVar45) + 1e-06)) *
                       fVar71 * 0.63661975;
              fVar73 = (fStack_104 / SQRT((fStack_104 - fVar49 * fVar49) + 1e-06)) *
                       fVar32 * 0.63661975;
              auVar35._0_4_ = fVar13 * fVar72 * fVar55 * fVar53 * 0.5 + 0.5;
              auVar35._4_4_ = fVar25 * fVar78 * fVar95 * fVar65 * 0.5 + 0.5;
              auVar35._8_4_ = fVar27 * fVar79 * fVar136 * fVar34 * 0.5 + 0.5;
              auVar35._12_4_ = fVar29 * fVar80 * fVar162 * fVar73 * 0.5 + 0.5;
              auVar63 = ZEXT216(0);
              auVar75 = NEON_fmax(auVar35,auVar63,4);
              auVar75 = NEON_fmin(auVar75,auVar17,4);
              auVar36._0_4_ = (int)(auVar75._0_4_ * 1023.0 + 0.5);
              auVar36._4_4_ = (int)(auVar75._4_4_ * 1023.0 + 0.5);
              auVar36._8_4_ = (int)(auVar75._8_4_ * 1023.0 + 0.5);
              auVar36._12_4_ = (int)(auVar75._12_4_ * 1023.0 + 0.5);
              auVar57._0_4_ = fVar31 * fVar72 * fVar55 * fVar53 * 0.5 + 0.5;
              auVar57._4_4_ = fVar40 * fVar78 * fVar95 * fVar65 * 0.5 + 0.5;
              auVar57._8_4_ = fVar44 * fVar79 * fVar136 * fVar34 * 0.5 + 0.5;
              auVar57._12_4_ = fVar48 * fVar80 * fVar162 * fVar73 * 0.5 + 0.5;
              auVar75 = NEON_fmax(auVar57,auVar63,4);
              auVar58 = NEON_fmin(auVar75,auVar17,4);
              auVar75 = NEON_fmin(auVar36,auVar1,4);
              auVar59._0_4_ = (int)(auVar58._0_4_ * 1023.0 + 0.5);
              auVar59._4_4_ = (int)(auVar58._4_4_ * 1023.0 + 0.5);
              auVar59._8_4_ = (int)(auVar58._8_4_ * 1023.0 + 0.5);
              auVar59._12_4_ = (int)(auVar58._12_4_ * 1023.0 + 0.5);
              auVar58 = NEON_fmin(auVar59,auVar1,4);
              auVar19._0_4_ = fVar52 * fVar72 * fVar55 * fVar53 * 0.5 + 0.5;
              auVar19._4_4_ = fVar64 * fVar78 * fVar95 * fVar65 * 0.5 + 0.5;
              auVar19._8_4_ = fVar67 * fVar79 * fVar136 * fVar34 * 0.5 + 0.5;
              auVar19._12_4_ = fVar69 * fVar80 * fVar162 * fVar73 * 0.5 + 0.5;
              iVar33 = (int)auVar75._0_4_;
              iVar42 = (int)auVar75._4_4_;
              iVar46 = (int)auVar75._8_4_;
              iVar50 = (int)auVar75._12_4_;
              auVar75 = NEON_fmax(auVar19,auVar63,4);
              auVar75 = NEON_fmin(auVar75,auVar17,4);
              auVar20._0_4_ = (int)(auVar75._0_4_ * 1023.0 + 0.5);
              auVar20._4_4_ = (int)(auVar75._4_4_ * 1023.0 + 0.5);
              auVar20._8_4_ = (int)(auVar75._8_4_ * 1023.0 + 0.5);
              auVar20._12_4_ = (int)(auVar75._12_4_ * 1023.0 + 0.5);
              auVar75 = NEON_fmin(auVar20,auVar1,4);
              iVar54 = (int)auVar58._0_4_ << 10;
              iVar66 = (int)auVar58._4_4_ << 10;
              iVar68 = (int)auVar58._8_4_ << 10;
              iVar70 = (int)auVar58._12_4_ << 10;
              iVar14 = (int)auVar75._0_4_ << 0x14;
              iVar26 = (int)auVar75._4_4_ << 0x14;
              iVar28 = (int)auVar75._8_4_ << 0x14;
              iVar30 = (int)auVar75._12_4_ << 0x14;
              *(char *)(pfVar7 + 2) = (char)iVar46;
              *(byte *)((long)pfVar7 + 9) = (byte)((uint)iVar68 >> 8) | (byte)((uint)iVar46 >> 8);
              *(byte *)((long)pfVar7 + 10) =
                   (byte)((uint)iVar68 >> 0x10) | (byte)((uint)iVar46 >> 0x10) |
                   (byte)((uint)iVar28 >> 0x10);
              *(byte *)((long)pfVar7 + 0xb) =
                   (byte)((uint)iVar68 >> 0x18) | (byte)((uint)iVar46 >> 0x18) |
                   (byte)((uint)iVar28 >> 0x18);
              *(char *)(pfVar7 + 3) = (char)iVar50;
              *(byte *)((long)pfVar7 + 0xd) = (byte)((uint)iVar70 >> 8) | (byte)((uint)iVar50 >> 8);
              *(byte *)((long)pfVar7 + 0xe) =
                   (byte)((uint)iVar70 >> 0x10) | (byte)((uint)iVar50 >> 0x10) |
                   (byte)((uint)iVar30 >> 0x10);
              *(byte *)((long)pfVar7 + 0xf) =
                   (byte)((uint)iVar70 >> 0x18) | (byte)((uint)iVar50 >> 0x18) |
                   (byte)((uint)iVar30 >> 0x18);
              *(char *)pfVar7 = (char)iVar33;
              *(byte *)((long)pfVar7 + 1) = (byte)((uint)iVar54 >> 8) | (byte)((uint)iVar33 >> 8);
              *(byte *)((long)pfVar7 + 2) =
                   (byte)((uint)iVar54 >> 0x10) | (byte)((uint)iVar33 >> 0x10) |
                   (byte)((uint)iVar14 >> 0x10);
              *(byte *)((long)pfVar7 + 3) =
                   (byte)((uint)iVar54 >> 0x18) | (byte)((uint)iVar33 >> 0x18) |
                   (byte)((uint)iVar14 >> 0x18);
              *(char *)(pfVar7 + 1) = (char)iVar42;
              *(byte *)((long)pfVar7 + 5) = (byte)((uint)iVar66 >> 8) | (byte)((uint)iVar42 >> 8);
              *(byte *)((long)pfVar7 + 6) =
                   (byte)((uint)iVar66 >> 0x10) | (byte)((uint)iVar42 >> 0x10) |
                   (byte)((uint)iVar26 >> 0x10);
              *(byte *)((long)pfVar7 + 7) =
                   (byte)((uint)iVar66 >> 0x18) | (byte)((uint)iVar42 >> 0x18) |
                   (byte)((uint)iVar26 >> 0x18);
              lVar8 = lVar11 + 4;
              uVar102 = lVar11 + 8;
              lVar11 = lVar8;
              pfVar7 = pfVar7 + 4;
            } while (uVar102 <= param_3);
          }
          lVar11 = param_3 - lVar8;
          if (lVar11 != 0) {
            pfVar7 = (float *)(pauVar5[lVar8] + 8);
            uVar102 = NEON_fmov(0x3f800000,4);
            pfVar9 = param_2 + lVar8;
            do {
              fVar71 = *pfVar7;
              fVar13 = pfVar7[1];
              fVar55 = pfVar7[-2];
              fVar73 = pfVar7[-1];
              fVar34 = fVar13 * fVar13 + fVar55 * fVar55 + fVar73 * fVar73 + fVar71 * fVar71;
              if (fVar34 == 0.0) {
                fVar55 = 0.0;
                fVar73 = 0.0;
                fVar71 = 0.0;
                fVar13 = 1.0;
              }
              else {
                fVar34 = 1.0 / SQRT(fVar34);
                fVar13 = fVar13 * fVar34;
                fVar55 = fVar55 * fVar34;
                fVar73 = fVar73 * fVar34;
                fVar71 = fVar71 * fVar34;
              }
              pfVar7 = pfVar7 + 4;
              uVar56 = CONCAT44(fVar71,fVar73) ^
                       (CONCAT44(fVar71,fVar73) ^ CONCAT44(-fVar71,-fVar73)) &
                       CONCAT44(-(uint)(fVar13 < 0.0),-(uint)(fVar13 < 0.0));
              fVar34 = -fVar13;
              fVar73 = -fVar55;
              if (0.0 <= fVar13) {
                fVar34 = fVar13;
                fVar73 = fVar55;
              }
              fVar13 = (float)_atanf();
              fVar55 = (1.0 / SQRT((1.0 - fVar34 * fVar34) + 1e-06)) * fVar13 * 0.63661975;
              fVar34 = fVar73 * fVar55 * 0.5 + 0.5;
              fVar13 = 0.0;
              if (0.0 <= fVar34) {
                fVar13 = fVar34;
              }
              fVar34 = 1.0;
              if (fVar13 <= 1.0) {
                fVar34 = fVar13;
              }
              fVar13 = (float)uVar56 * fVar55 * 0.5 + 0.5;
              fVar55 = (float)(uVar56 >> 0x20) * fVar55 * 0.5 + 0.5;
              iVar14 = -(uint)(fVar13 < 0.0);
              iVar26 = -(uint)(fVar55 < 0.0);
              fVar13 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                                       CONCAT12((byte)((uint)fVar13 >> 0x10) &
                                                ~(byte)((uint)iVar14 >> 0x10),
                                                CONCAT11((byte)((uint)fVar13 >> 8) &
                                                         ~(byte)((uint)iVar14 >> 8),
                                                         SUB41(fVar13,0) & ~(byte)iVar14)));
              uVar56 = CONCAT17((byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                                CONCAT16((byte)((uint)fVar55 >> 0x10) &
                                         ~(byte)((uint)iVar26 >> 0x10),
                                         CONCAT15((byte)((uint)fVar55 >> 8) &
                                                  ~(byte)((uint)iVar26 >> 8),
                                                  CONCAT14(SUB41(fVar55,0) & ~(byte)iVar26,fVar13)))
                               );
              uVar56 = uVar56 ^ (uVar56 ^ uVar102) &
                                CONCAT44(-(uint)((float)(uVar102 >> 0x20) < (float)(uVar56 >> 0x20))
                                         ,-(uint)((float)uVar102 < fVar13));
              uVar16 = NEON_ushl(CONCAT44((int)(float)(int)((float)(uVar56 >> 0x20) * 1023.0 + 0.5),
                                          (int)(float)(int)((float)uVar56 * 1023.0 + 0.5)),
                                 0x140000000a,4);
              *pfVar9 = (float)((uint)uVar16 | (int)(fVar34 * 1023.0 + 0.5) |
                               (uint)((ulong)uVar16 >> 0x20));
              lVar11 = lVar11 + -1;
              pfVar9 = pfVar9 + 1;
            } while (lVar11 != 0);
          }
          return pauVar4;
        }
      }
      else {
        if (param_4 == 3) {
          if (param_3 < 4) {
            lVar8 = 0;
          }
          else {
            auVar17._8_4_ = 0x2b8cbccc;
            auVar17._0_8_ = 0x2b8cbccc2b8cbccc;
            auVar17._12_4_ = 0x2b8cbccc;
            auVar18 = NEON_fmov(0x3f800000,4);
            auVar75 = ZEXT216(0);
            auVar58 = NEON_fmov(0xbf800000,4);
            auVar63._8_4_ = 0x447fc000;
            auVar63._0_8_ = 0x447fc000447fc000;
            auVar63._12_4_ = 0x447fc000;
            lVar11 = 0;
            pauVar4 = pauVar5;
            pfVar7 = param_2;
            do {
              fVar29 = *(float *)*pauVar4;
              fVar41 = *(float *)(*pauVar4 + 4);
              fVar49 = *(float *)(*pauVar4 + 8);
              fVar69 = *(float *)(*pauVar4 + 0xc);
              fVar162 = *(float *)pauVar4[1];
              fVar44 = *(float *)(pauVar4[1] + 4);
              fVar52 = *(float *)(pauVar4[1] + 8);
              fVar72 = *(float *)(pauVar4[1] + 0xc);
              fVar31 = *(float *)pauVar4[2];
              fVar45 = *(float *)(pauVar4[2] + 4);
              fVar64 = *(float *)(pauVar4[2] + 8);
              fVar78 = *(float *)(pauVar4[2] + 0xc);
              fVar40 = *(float *)pauVar4[3];
              fVar48 = *(float *)(pauVar4[3] + 4);
              fVar67 = *(float *)(pauVar4[3] + 8);
              fVar79 = *(float *)(pauVar4[3] + 0xc);
              pauVar4 = pauVar4 + 4;
              auVar119._0_4_ = fVar29 * fVar29 + fVar41 * fVar41 + fVar49 * fVar49 + fVar69 * fVar69
              ;
              auVar119._4_4_ =
                   fVar162 * fVar162 + fVar44 * fVar44 + fVar52 * fVar52 + fVar72 * fVar72;
              auVar119._8_4_ = fVar31 * fVar31 + fVar45 * fVar45 + fVar64 * fVar64 + fVar78 * fVar78
              ;
              auVar119._12_4_ =
                   fVar40 * fVar40 + fVar48 * fVar48 + fVar67 * fVar67 + fVar79 * fVar79;
              auVar119 = NEON_fmax(auVar119,auVar17,4);
              fVar13 = auVar18._0_4_;
              fVar71 = fVar13 / SQRT(auVar119._0_4_);
              fVar55 = auVar18._4_4_;
              fVar32 = fVar55 / SQRT(auVar119._4_4_);
              fVar34 = auVar18._8_4_;
              fVar53 = fVar34 / SQRT(auVar119._8_4_);
              fVar73 = auVar18._12_4_;
              fVar25 = fVar73 / SQRT(auVar119._12_4_);
              auVar159._0_4_ = -(uint)(fVar69 * fVar71 < 0.0);
              auVar159._4_4_ = -(uint)(fVar72 * fVar32 < 0.0);
              auVar159._8_4_ = -(uint)(fVar78 * fVar53 < 0.0);
              auVar159._12_4_ = -(uint)(fVar79 * fVar25 < 0.0);
              auVar119 = auVar18 ^ (auVar18 ^ auVar58) & auVar159;
              fVar95 = auVar119._0_4_;
              fVar65 = auVar119._4_4_;
              fVar27 = auVar119._8_4_;
              fVar136 = auVar119._12_4_;
              fVar13 = fVar13 / (ABS(fVar69 * fVar71) + fVar13);
              fVar55 = fVar55 / (ABS(fVar72 * fVar32) + fVar55);
              fVar34 = fVar34 / (ABS(fVar78 * fVar53) + fVar34);
              fVar73 = fVar73 / (ABS(fVar79 * fVar25) + fVar73);
              auVar141._0_4_ = fVar29 * fVar71 * fVar95 * fVar13 * 0.5 + 0.5;
              auVar141._4_4_ = fVar162 * fVar32 * fVar65 * fVar55 * 0.5 + 0.5;
              auVar141._8_4_ = fVar31 * fVar53 * fVar27 * fVar34 * 0.5 + 0.5;
              auVar141._12_4_ = fVar40 * fVar25 * fVar136 * fVar73 * 0.5 + 0.5;
              auVar119 = NEON_fmax(auVar141,auVar75,4);
              auVar119 = NEON_fmin(auVar119,auVar18,4);
              auVar142._0_4_ = (int)(auVar119._0_4_ * 1023.0 + 0.5);
              auVar142._4_4_ = (int)(auVar119._4_4_ * 1023.0 + 0.5);
              auVar142._8_4_ = (int)(auVar119._8_4_ * 1023.0 + 0.5);
              auVar142._12_4_ = (int)(auVar119._12_4_ * 1023.0 + 0.5);
              auVar156._0_4_ = fVar41 * fVar71 * fVar95 * fVar13 * 0.5 + 0.5;
              auVar156._4_4_ = fVar44 * fVar32 * fVar65 * fVar55 * 0.5 + 0.5;
              auVar156._8_4_ = fVar45 * fVar53 * fVar27 * fVar34 * 0.5 + 0.5;
              auVar156._12_4_ = fVar48 * fVar25 * fVar136 * fVar73 * 0.5 + 0.5;
              auVar119 = NEON_fmin(auVar142,auVar63,4);
              auVar157 = NEON_fmax(auVar156,auVar75,4);
              auVar157 = NEON_fmin(auVar157,auVar18,4);
              auVar158._0_4_ = (int)(auVar157._0_4_ * 1023.0 + 0.5);
              auVar158._4_4_ = (int)(auVar157._4_4_ * 1023.0 + 0.5);
              auVar158._8_4_ = (int)(auVar157._8_4_ * 1023.0 + 0.5);
              auVar158._12_4_ = (int)(auVar157._12_4_ * 1023.0 + 0.5);
              auVar159 = NEON_fmin(auVar158,auVar63,4);
              auVar157._0_4_ = fVar49 * fVar71 * fVar95 * fVar13 * 0.5 + 0.5;
              auVar157._4_4_ = fVar52 * fVar32 * fVar65 * fVar55 * 0.5 + 0.5;
              auVar157._8_4_ = fVar64 * fVar53 * fVar27 * fVar34 * 0.5 + 0.5;
              auVar157._12_4_ = fVar67 * fVar25 * fVar136 * fVar73 * 0.5 + 0.5;
              iVar33 = (int)auVar119._0_4_;
              iVar42 = (int)auVar119._4_4_;
              iVar46 = (int)auVar119._8_4_;
              iVar50 = (int)auVar119._12_4_;
              auVar119 = NEON_fmax(auVar157,auVar75,4);
              auVar119 = NEON_fmin(auVar119,auVar18,4);
              auVar91._0_4_ = (int)(auVar119._0_4_ * 1023.0 + 0.5);
              auVar91._4_4_ = (int)(auVar119._4_4_ * 1023.0 + 0.5);
              auVar91._8_4_ = (int)(auVar119._8_4_ * 1023.0 + 0.5);
              auVar91._12_4_ = (int)(auVar119._12_4_ * 1023.0 + 0.5);
              auVar119 = NEON_fmin(auVar91,auVar63,4);
              iVar54 = (int)auVar159._0_4_ << 10;
              iVar66 = (int)auVar159._4_4_ << 10;
              iVar68 = (int)auVar159._8_4_ << 10;
              iVar70 = (int)auVar159._12_4_ << 10;
              iVar14 = (int)auVar119._0_4_ << 0x14;
              iVar26 = (int)auVar119._4_4_ << 0x14;
              iVar28 = (int)auVar119._8_4_ << 0x14;
              iVar30 = (int)auVar119._12_4_ << 0x14;
              *(char *)(pfVar7 + 2) = (char)iVar46;
              *(byte *)((long)pfVar7 + 9) = (byte)((uint)iVar68 >> 8) | (byte)((uint)iVar46 >> 8);
              *(byte *)((long)pfVar7 + 10) =
                   (byte)((uint)iVar68 >> 0x10) | (byte)((uint)iVar46 >> 0x10) |
                   (byte)((uint)iVar28 >> 0x10);
              *(byte *)((long)pfVar7 + 0xb) =
                   (byte)((uint)iVar68 >> 0x18) | (byte)((uint)iVar46 >> 0x18) |
                   (byte)((uint)iVar28 >> 0x18);
              *(char *)(pfVar7 + 3) = (char)iVar50;
              *(byte *)((long)pfVar7 + 0xd) = (byte)((uint)iVar70 >> 8) | (byte)((uint)iVar50 >> 8);
              *(byte *)((long)pfVar7 + 0xe) =
                   (byte)((uint)iVar70 >> 0x10) | (byte)((uint)iVar50 >> 0x10) |
                   (byte)((uint)iVar30 >> 0x10);
              *(byte *)((long)pfVar7 + 0xf) =
                   (byte)((uint)iVar70 >> 0x18) | (byte)((uint)iVar50 >> 0x18) |
                   (byte)((uint)iVar30 >> 0x18);
              *(char *)pfVar7 = (char)iVar33;
              *(byte *)((long)pfVar7 + 1) = (byte)((uint)iVar54 >> 8) | (byte)((uint)iVar33 >> 8);
              *(byte *)((long)pfVar7 + 2) =
                   (byte)((uint)iVar54 >> 0x10) | (byte)((uint)iVar33 >> 0x10) |
                   (byte)((uint)iVar14 >> 0x10);
              *(byte *)((long)pfVar7 + 3) =
                   (byte)((uint)iVar54 >> 0x18) | (byte)((uint)iVar33 >> 0x18) |
                   (byte)((uint)iVar14 >> 0x18);
              *(char *)(pfVar7 + 1) = (char)iVar42;
              *(byte *)((long)pfVar7 + 5) = (byte)((uint)iVar66 >> 8) | (byte)((uint)iVar42 >> 8);
              *(byte *)((long)pfVar7 + 6) =
                   (byte)((uint)iVar66 >> 0x10) | (byte)((uint)iVar42 >> 0x10) |
                   (byte)((uint)iVar26 >> 0x10);
              *(byte *)((long)pfVar7 + 7) =
                   (byte)((uint)iVar66 >> 0x18) | (byte)((uint)iVar42 >> 0x18) |
                   (byte)((uint)iVar26 >> 0x18);
              lVar8 = lVar11 + 4;
              uVar102 = lVar11 + 8;
              lVar11 = lVar8;
              pfVar7 = pfVar7 + 4;
            } while (uVar102 <= param_3);
          }
          lVar11 = param_3 - lVar8;
          if (lVar11 != 0) {
            pfVar7 = (float *)(pauVar5[lVar8] + 8);
            uVar102 = NEON_fmov(0x3f800000,4);
            pfVar9 = param_2 + lVar8;
            do {
              fVar71 = *pfVar7;
              fVar13 = pfVar7[1];
              fVar55 = pfVar7[-2];
              fVar73 = pfVar7[-1];
              fVar34 = fVar13 * fVar13 + fVar55 * fVar55 + fVar73 * fVar73 + fVar71 * fVar71;
              if (fVar34 == 0.0) {
                fVar55 = 0.0;
                fVar73 = 0.0;
                fVar71 = 0.0;
                fVar13 = 1.0;
              }
              else {
                fVar34 = 1.0 / SQRT(fVar34);
                fVar13 = fVar13 * fVar34;
                fVar55 = fVar55 * fVar34;
                fVar73 = fVar73 * fVar34;
                fVar71 = fVar71 * fVar34;
              }
              uVar56 = CONCAT44(fVar71,fVar73) ^
                       (CONCAT44(fVar71,fVar73) ^ CONCAT44(-fVar71,-fVar73)) &
                       CONCAT44(-(uint)(fVar13 < 0.0),-(uint)(fVar13 < 0.0));
              fVar34 = -fVar13;
              fVar73 = -fVar55;
              if (0.0 <= fVar13) {
                fVar34 = fVar13;
                fVar73 = fVar55;
              }
              fVar34 = 1.0 / (fVar34 + 1.0);
              fVar55 = fVar73 * fVar34 * 0.5 + 0.5;
              fVar13 = 0.0;
              if (0.0 <= fVar55) {
                fVar13 = fVar55;
              }
              fVar55 = 1.0;
              if (fVar13 <= 1.0) {
                fVar55 = fVar13;
              }
              fVar13 = (float)uVar56 * fVar34 * 0.5 + 0.5;
              fVar34 = (float)(uVar56 >> 0x20) * fVar34 * 0.5 + 0.5;
              iVar14 = -(uint)(fVar13 < 0.0);
              iVar26 = -(uint)(fVar34 < 0.0);
              fVar13 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                                       CONCAT12((byte)((uint)fVar13 >> 0x10) &
                                                ~(byte)((uint)iVar14 >> 0x10),
                                                CONCAT11((byte)((uint)fVar13 >> 8) &
                                                         ~(byte)((uint)iVar14 >> 8),
                                                         SUB41(fVar13,0) & ~(byte)iVar14)));
              uVar56 = CONCAT17((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                                CONCAT16((byte)((uint)fVar34 >> 0x10) &
                                         ~(byte)((uint)iVar26 >> 0x10),
                                         CONCAT15((byte)((uint)fVar34 >> 8) &
                                                  ~(byte)((uint)iVar26 >> 8),
                                                  CONCAT14(SUB41(fVar34,0) & ~(byte)iVar26,fVar13)))
                               );
              uVar56 = uVar56 ^ (uVar56 ^ uVar102) &
                                CONCAT44(-(uint)((float)(uVar102 >> 0x20) < (float)(uVar56 >> 0x20))
                                         ,-(uint)((float)uVar102 < fVar13));
              uVar16 = NEON_ushl(CONCAT44((int)(float)(int)((float)(uVar56 >> 0x20) * 1023.0 + 0.5),
                                          (int)(float)(int)((float)uVar56 * 1023.0 + 0.5)),
                                 0x140000000a,4);
              pfVar7 = pfVar7 + 4;
              *pfVar9 = (float)((uint)uVar16 | (int)(fVar55 * 1023.0 + 0.5) |
                               (uint)((ulong)uVar16 >> 0x20));
              lVar11 = lVar11 + -1;
              pfVar9 = pfVar9 + 1;
            } while (lVar11 != 0);
          }
          return pauVar5;
        }
        if (param_4 == 4) {
          if (param_3 < 4) {
            lVar8 = 0;
          }
          else {
            auVar18._8_4_ = 0x2b8cbccc;
            auVar18._0_8_ = 0x2b8cbccc2b8cbccc;
            auVar18._12_4_ = 0x2b8cbccc;
            auVar17 = NEON_fmov(0x3f800000,4);
            auVar75 = ZEXT216(0);
            auVar58 = NEON_fmov(0xbf800000,4);
            auVar82._8_4_ = 0x447fc000;
            auVar82._0_8_ = 0x447fc000447fc000;
            auVar82._12_4_ = 0x447fc000;
            lVar11 = 0;
            pauVar4 = pauVar5;
            pfVar7 = param_2;
            do {
              fVar95 = *(float *)*pauVar4;
              fVar29 = *(float *)(*pauVar4 + 4);
              fVar41 = *(float *)(*pauVar4 + 8);
              fVar49 = *(float *)(*pauVar4 + 0xc);
              fVar65 = *(float *)pauVar4[1];
              fVar162 = *(float *)(pauVar4[1] + 4);
              fVar44 = *(float *)(pauVar4[1] + 8);
              fVar52 = *(float *)(pauVar4[1] + 0xc);
              fVar27 = *(float *)pauVar4[2];
              fVar31 = *(float *)(pauVar4[2] + 4);
              fVar45 = *(float *)(pauVar4[2] + 8);
              fVar64 = *(float *)(pauVar4[2] + 0xc);
              fVar136 = *(float *)pauVar4[3];
              fVar40 = *(float *)(pauVar4[3] + 4);
              fVar48 = *(float *)(pauVar4[3] + 8);
              fVar67 = *(float *)(pauVar4[3] + 0xc);
              pauVar4 = pauVar4 + 4;
              auVar88._0_4_ = fVar95 * fVar95 + fVar29 * fVar29 + fVar41 * fVar41 + fVar49 * fVar49;
              auVar88._4_4_ =
                   fVar65 * fVar65 + fVar162 * fVar162 + fVar44 * fVar44 + fVar52 * fVar52;
              auVar88._8_4_ = fVar27 * fVar27 + fVar31 * fVar31 + fVar45 * fVar45 + fVar64 * fVar64;
              auVar88._12_4_ =
                   fVar136 * fVar136 + fVar40 * fVar40 + fVar48 * fVar48 + fVar67 * fVar67;
              auVar63 = NEON_fmax(auVar88,auVar18,4);
              fVar13 = auVar17._0_4_;
              fVar71 = fVar13 / SQRT(auVar63._0_4_);
              fVar55 = auVar17._4_4_;
              fVar32 = fVar55 / SQRT(auVar63._4_4_);
              fVar34 = auVar17._8_4_;
              fVar53 = fVar34 / SQRT(auVar63._8_4_);
              fVar73 = auVar17._12_4_;
              fVar25 = fVar73 / SQRT(auVar63._12_4_);
              auVar132._0_4_ = -(uint)(fVar49 * fVar71 < 0.0);
              auVar132._4_4_ = -(uint)(fVar52 * fVar32 < 0.0);
              auVar132._8_4_ = -(uint)(fVar64 * fVar53 < 0.0);
              auVar132._12_4_ = -(uint)(fVar67 * fVar25 < 0.0);
              auVar63 = auVar17 ^ (auVar17 ^ auVar58) & auVar132;
              fVar69 = auVar63._0_4_;
              fVar72 = auVar63._4_4_;
              fVar78 = auVar63._8_4_;
              fVar79 = auVar63._12_4_;
              fVar13 = fVar13 / SQRT(ABS(fVar49 * fVar71) + fVar13);
              fVar55 = fVar55 / SQRT(ABS(fVar52 * fVar32) + fVar55);
              fVar34 = fVar34 / SQRT(ABS(fVar64 * fVar53) + fVar34);
              fVar73 = fVar73 / SQRT(ABS(fVar67 * fVar25) + fVar73);
              auVar97._0_4_ = fVar95 * fVar71 * fVar69 * fVar13 * 0.5 + 0.5;
              auVar97._4_4_ = fVar65 * fVar32 * fVar72 * fVar55 * 0.5 + 0.5;
              auVar97._8_4_ = fVar27 * fVar53 * fVar78 * fVar34 * 0.5 + 0.5;
              auVar97._12_4_ = fVar136 * fVar25 * fVar79 * fVar73 * 0.5 + 0.5;
              auVar63 = NEON_fmax(auVar97,auVar75,4);
              auVar63 = NEON_fmin(auVar63,auVar17,4);
              auVar98._0_4_ = (int)(auVar63._0_4_ * 1023.0 + 0.5);
              auVar98._4_4_ = (int)(auVar63._4_4_ * 1023.0 + 0.5);
              auVar98._8_4_ = (int)(auVar63._8_4_ * 1023.0 + 0.5);
              auVar98._12_4_ = (int)(auVar63._12_4_ * 1023.0 + 0.5);
              auVar154._0_4_ = fVar29 * fVar71 * fVar69 * fVar13 * 0.5 + 0.5;
              auVar154._4_4_ = fVar162 * fVar32 * fVar72 * fVar55 * 0.5 + 0.5;
              auVar154._8_4_ = fVar31 * fVar53 * fVar78 * fVar34 * 0.5 + 0.5;
              auVar154._12_4_ = fVar40 * fVar25 * fVar79 * fVar73 * 0.5 + 0.5;
              auVar63 = NEON_fmin(auVar98,auVar82,4);
              auVar119 = NEON_fmax(auVar154,auVar75,4);
              auVar119 = NEON_fmin(auVar119,auVar17,4);
              auVar155._0_4_ = (int)(auVar119._0_4_ * 1023.0 + 0.5);
              auVar155._4_4_ = (int)(auVar119._4_4_ * 1023.0 + 0.5);
              auVar155._8_4_ = (int)(auVar119._8_4_ * 1023.0 + 0.5);
              auVar155._12_4_ = (int)(auVar119._12_4_ * 1023.0 + 0.5);
              auVar119 = NEON_fmin(auVar155,auVar82,4);
              auVar89._0_4_ = fVar41 * fVar71 * fVar69 * fVar13 * 0.5 + 0.5;
              auVar89._4_4_ = fVar44 * fVar32 * fVar72 * fVar55 * 0.5 + 0.5;
              auVar89._8_4_ = fVar45 * fVar53 * fVar78 * fVar34 * 0.5 + 0.5;
              auVar89._12_4_ = fVar48 * fVar25 * fVar79 * fVar73 * 0.5 + 0.5;
              iVar33 = (int)auVar63._0_4_;
              iVar42 = (int)auVar63._4_4_;
              iVar46 = (int)auVar63._8_4_;
              iVar50 = (int)auVar63._12_4_;
              auVar63 = NEON_fmax(auVar89,auVar75,4);
              auVar63 = NEON_fmin(auVar63,auVar17,4);
              auVar90._0_4_ = (int)(auVar63._0_4_ * 1023.0 + 0.5);
              auVar90._4_4_ = (int)(auVar63._4_4_ * 1023.0 + 0.5);
              auVar90._8_4_ = (int)(auVar63._8_4_ * 1023.0 + 0.5);
              auVar90._12_4_ = (int)(auVar63._12_4_ * 1023.0 + 0.5);
              auVar63 = NEON_fmin(auVar90,auVar82,4);
              iVar54 = (int)auVar119._0_4_ << 10;
              iVar66 = (int)auVar119._4_4_ << 10;
              iVar68 = (int)auVar119._8_4_ << 10;
              iVar70 = (int)auVar119._12_4_ << 10;
              iVar14 = (int)auVar63._0_4_ << 0x14;
              iVar26 = (int)auVar63._4_4_ << 0x14;
              iVar28 = (int)auVar63._8_4_ << 0x14;
              iVar30 = (int)auVar63._12_4_ << 0x14;
              *(char *)(pfVar7 + 2) = (char)iVar46;
              *(byte *)((long)pfVar7 + 9) = (byte)((uint)iVar68 >> 8) | (byte)((uint)iVar46 >> 8);
              *(byte *)((long)pfVar7 + 10) =
                   (byte)((uint)iVar68 >> 0x10) | (byte)((uint)iVar46 >> 0x10) |
                   (byte)((uint)iVar28 >> 0x10);
              *(byte *)((long)pfVar7 + 0xb) =
                   (byte)((uint)iVar68 >> 0x18) | (byte)((uint)iVar46 >> 0x18) |
                   (byte)((uint)iVar28 >> 0x18);
              *(char *)(pfVar7 + 3) = (char)iVar50;
              *(byte *)((long)pfVar7 + 0xd) = (byte)((uint)iVar70 >> 8) | (byte)((uint)iVar50 >> 8);
              *(byte *)((long)pfVar7 + 0xe) =
                   (byte)((uint)iVar70 >> 0x10) | (byte)((uint)iVar50 >> 0x10) |
                   (byte)((uint)iVar30 >> 0x10);
              *(byte *)((long)pfVar7 + 0xf) =
                   (byte)((uint)iVar70 >> 0x18) | (byte)((uint)iVar50 >> 0x18) |
                   (byte)((uint)iVar30 >> 0x18);
              *(char *)pfVar7 = (char)iVar33;
              *(byte *)((long)pfVar7 + 1) = (byte)((uint)iVar54 >> 8) | (byte)((uint)iVar33 >> 8);
              *(byte *)((long)pfVar7 + 2) =
                   (byte)((uint)iVar54 >> 0x10) | (byte)((uint)iVar33 >> 0x10) |
                   (byte)((uint)iVar14 >> 0x10);
              *(byte *)((long)pfVar7 + 3) =
                   (byte)((uint)iVar54 >> 0x18) | (byte)((uint)iVar33 >> 0x18) |
                   (byte)((uint)iVar14 >> 0x18);
              *(char *)(pfVar7 + 1) = (char)iVar42;
              *(byte *)((long)pfVar7 + 5) = (byte)((uint)iVar66 >> 8) | (byte)((uint)iVar42 >> 8);
              *(byte *)((long)pfVar7 + 6) =
                   (byte)((uint)iVar66 >> 0x10) | (byte)((uint)iVar42 >> 0x10) |
                   (byte)((uint)iVar26 >> 0x10);
              *(byte *)((long)pfVar7 + 7) =
                   (byte)((uint)iVar66 >> 0x18) | (byte)((uint)iVar42 >> 0x18) |
                   (byte)((uint)iVar26 >> 0x18);
              lVar8 = lVar11 + 4;
              uVar102 = lVar11 + 8;
              lVar11 = lVar8;
              pfVar7 = pfVar7 + 4;
            } while (uVar102 <= param_3);
          }
          lVar11 = param_3 - lVar8;
          if (lVar11 != 0) {
            pfVar7 = (float *)(pauVar5[lVar8] + 8);
            uVar102 = NEON_fmov(0x3f800000,4);
            pfVar9 = param_2 + lVar8;
            do {
              fVar71 = *pfVar7;
              fVar13 = pfVar7[1];
              fVar55 = pfVar7[-2];
              fVar73 = pfVar7[-1];
              fVar34 = fVar13 * fVar13 + fVar55 * fVar55 + fVar73 * fVar73 + fVar71 * fVar71;
              if (fVar34 == 0.0) {
                fVar55 = 0.0;
                fVar73 = 0.0;
                fVar71 = 0.0;
                fVar13 = 1.0;
              }
              else {
                fVar34 = 1.0 / SQRT(fVar34);
                fVar13 = fVar13 * fVar34;
                fVar55 = fVar55 * fVar34;
                fVar73 = fVar73 * fVar34;
                fVar71 = fVar71 * fVar34;
              }
              uVar56 = CONCAT44(fVar71,fVar73) ^
                       (CONCAT44(fVar71,fVar73) ^ CONCAT44(-fVar71,-fVar73)) &
                       CONCAT44(-(uint)(fVar13 < 0.0),-(uint)(fVar13 < 0.0));
              fVar34 = -fVar13;
              fVar73 = -fVar55;
              if (0.0 <= fVar13) {
                fVar34 = fVar13;
                fVar73 = fVar55;
              }
              fVar34 = 1.0 / SQRT(fVar34 + 1.0);
              fVar55 = fVar73 * fVar34 * 0.5 + 0.5;
              fVar13 = 0.0;
              if (0.0 <= fVar55) {
                fVar13 = fVar55;
              }
              fVar55 = 1.0;
              if (fVar13 <= 1.0) {
                fVar55 = fVar13;
              }
              fVar13 = (float)uVar56 * fVar34 * 0.5 + 0.5;
              fVar34 = (float)(uVar56 >> 0x20) * fVar34 * 0.5 + 0.5;
              iVar14 = -(uint)(fVar13 < 0.0);
              iVar26 = -(uint)(fVar34 < 0.0);
              fVar13 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                                       CONCAT12((byte)((uint)fVar13 >> 0x10) &
                                                ~(byte)((uint)iVar14 >> 0x10),
                                                CONCAT11((byte)((uint)fVar13 >> 8) &
                                                         ~(byte)((uint)iVar14 >> 8),
                                                         SUB41(fVar13,0) & ~(byte)iVar14)));
              uVar56 = CONCAT17((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                                CONCAT16((byte)((uint)fVar34 >> 0x10) &
                                         ~(byte)((uint)iVar26 >> 0x10),
                                         CONCAT15((byte)((uint)fVar34 >> 8) &
                                                  ~(byte)((uint)iVar26 >> 8),
                                                  CONCAT14(SUB41(fVar34,0) & ~(byte)iVar26,fVar13)))
                               );
              uVar56 = uVar56 ^ (uVar56 ^ uVar102) &
                                CONCAT44(-(uint)((float)(uVar102 >> 0x20) < (float)(uVar56 >> 0x20))
                                         ,-(uint)((float)uVar102 < fVar13));
              uVar16 = NEON_ushl(CONCAT44((int)(float)(int)((float)(uVar56 >> 0x20) * 1023.0 + 0.5),
                                          (int)(float)(int)((float)uVar56 * 1023.0 + 0.5)),
                                 0x140000000a,4);
              pfVar7 = pfVar7 + 4;
              *pfVar9 = (float)((uint)uVar16 | (int)(fVar55 * 1023.0 + 0.5) |
                               (uint)((ulong)uVar16 >> 0x20));
              lVar11 = lVar11 + -1;
              pfVar9 = pfVar9 + 1;
            } while (lVar11 != 0);
          }
          return pauVar5;
        }
        if (param_4 == 5) {
          if (param_3 < 4) {
            lVar8 = 0;
          }
          else {
            auVar75._8_4_ = 0x2b8cbccc;
            auVar75._0_8_ = 0x2b8cbccc2b8cbccc;
            auVar75._12_4_ = 0x2b8cbccc;
            auVar17 = NEON_fmov(0x3f800000,4);
            auVar18 = ZEXT216(0);
            auVar58 = NEON_fmov(0xbf800000,4);
            auVar99._8_4_ = 0x447fc000;
            auVar99._0_8_ = 0x447fc000447fc000;
            auVar99._12_4_ = 0x447fc000;
            lVar11 = 0;
            pauVar4 = pauVar5;
            pfVar7 = param_2;
            do {
              fVar71 = *(float *)*pauVar4;
              fVar95 = *(float *)(*pauVar4 + 4);
              fVar29 = *(float *)(*pauVar4 + 8);
              fVar41 = *(float *)(*pauVar4 + 0xc);
              fVar32 = *(float *)pauVar4[1];
              fVar65 = *(float *)(pauVar4[1] + 4);
              fVar162 = *(float *)(pauVar4[1] + 8);
              fVar44 = *(float *)(pauVar4[1] + 0xc);
              fVar53 = *(float *)pauVar4[2];
              fVar27 = *(float *)(pauVar4[2] + 4);
              fVar31 = *(float *)(pauVar4[2] + 8);
              fVar45 = *(float *)(pauVar4[2] + 0xc);
              fVar25 = *(float *)pauVar4[3];
              fVar136 = *(float *)(pauVar4[3] + 4);
              fVar40 = *(float *)(pauVar4[3] + 8);
              fVar48 = *(float *)(pauVar4[3] + 0xc);
              pauVar4 = pauVar4 + 4;
              auVar133._0_4_ = fVar71 * fVar71 + fVar95 * fVar95 + fVar29 * fVar29 + fVar41 * fVar41
              ;
              auVar133._4_4_ =
                   fVar32 * fVar32 + fVar65 * fVar65 + fVar162 * fVar162 + fVar44 * fVar44;
              auVar133._8_4_ = fVar53 * fVar53 + fVar27 * fVar27 + fVar31 * fVar31 + fVar45 * fVar45
              ;
              auVar133._12_4_ =
                   fVar25 * fVar25 + fVar136 * fVar136 + fVar40 * fVar40 + fVar48 * fVar48;
              auVar63 = NEON_fmax(auVar133,auVar75,4);
              fVar13 = auVar17._0_4_;
              fVar49 = fVar13 / SQRT(auVar63._0_4_);
              fVar55 = auVar17._4_4_;
              fVar52 = fVar55 / SQRT(auVar63._4_4_);
              fVar34 = auVar17._8_4_;
              fVar64 = fVar34 / SQRT(auVar63._8_4_);
              fVar73 = auVar17._12_4_;
              fVar67 = fVar73 / SQRT(auVar63._12_4_);
              fVar69 = ABS(fVar41 * fVar49);
              fVar72 = ABS(fVar44 * fVar52);
              fVar78 = ABS(fVar45 * fVar64);
              fVar79 = ABS(fVar48 * fVar67);
              auVar143._0_4_ = -(uint)(fVar41 * fVar49 < 0.0);
              auVar143._4_4_ = -(uint)(fVar44 * fVar52 < 0.0);
              auVar143._8_4_ = -(uint)(fVar45 * fVar64 < 0.0);
              auVar143._12_4_ = -(uint)(fVar48 * fVar67 < 0.0);
              auVar63 = auVar17 ^ (auVar17 ^ auVar58) & auVar143;
              fVar41 = auVar63._0_4_;
              fVar44 = auVar63._4_4_;
              fVar45 = auVar63._8_4_;
              fVar48 = auVar63._12_4_;
              fVar13 = (fVar13 / (fVar69 + fVar13 + SQRT(fVar69 + fVar69 + 2.0))) * 2.4142137;
              fVar55 = (fVar55 / (fVar72 + fVar55 + SQRT(fVar72 + fVar72 + 2.0))) * 2.4142137;
              fVar34 = (fVar34 / (fVar78 + fVar34 + SQRT(fVar78 + fVar78 + 2.0))) * 2.4142137;
              fVar73 = (fVar73 / (fVar79 + fVar73 + SQRT(fVar79 + fVar79 + 2.0))) * 2.4142137;
              auVar163._0_4_ = fVar71 * fVar49 * fVar41 * fVar13 * 0.5 + 0.5;
              auVar163._4_4_ = fVar32 * fVar52 * fVar44 * fVar55 * 0.5 + 0.5;
              auVar163._8_4_ = fVar53 * fVar64 * fVar45 * fVar34 * 0.5 + 0.5;
              auVar163._12_4_ = fVar25 * fVar67 * fVar48 * fVar73 * 0.5 + 0.5;
              auVar63 = NEON_fmax(auVar163,auVar18,4);
              auVar63 = NEON_fmin(auVar63,auVar17,4);
              auVar164._0_4_ = (int)(auVar63._0_4_ * 1023.0 + 0.5);
              auVar164._4_4_ = (int)(auVar63._4_4_ * 1023.0 + 0.5);
              auVar164._8_4_ = (int)(auVar63._8_4_ * 1023.0 + 0.5);
              auVar164._12_4_ = (int)(auVar63._12_4_ * 1023.0 + 0.5);
              auVar166._0_4_ = fVar95 * fVar49 * fVar41 * fVar13 * 0.5 + 0.5;
              auVar166._4_4_ = fVar65 * fVar52 * fVar44 * fVar55 * 0.5 + 0.5;
              auVar166._8_4_ = fVar27 * fVar64 * fVar45 * fVar34 * 0.5 + 0.5;
              auVar166._12_4_ = fVar136 * fVar67 * fVar48 * fVar73 * 0.5 + 0.5;
              auVar63 = NEON_fmin(auVar164,auVar99,4);
              auVar119 = NEON_fmax(auVar166,auVar18,4);
              auVar119 = NEON_fmin(auVar119,auVar17,4);
              auVar167._0_4_ = (int)(auVar119._0_4_ * 1023.0 + 0.5);
              auVar167._4_4_ = (int)(auVar119._4_4_ * 1023.0 + 0.5);
              auVar167._8_4_ = (int)(auVar119._8_4_ * 1023.0 + 0.5);
              auVar167._12_4_ = (int)(auVar119._12_4_ * 1023.0 + 0.5);
              auVar119 = NEON_fmin(auVar167,auVar99,4);
              auVar104._0_4_ = fVar29 * fVar49 * fVar41 * fVar13 * 0.5 + 0.5;
              auVar104._4_4_ = fVar162 * fVar52 * fVar44 * fVar55 * 0.5 + 0.5;
              auVar104._8_4_ = fVar31 * fVar64 * fVar45 * fVar34 * 0.5 + 0.5;
              auVar104._12_4_ = fVar40 * fVar67 * fVar48 * fVar73 * 0.5 + 0.5;
              iVar33 = (int)auVar63._0_4_;
              iVar42 = (int)auVar63._4_4_;
              iVar46 = (int)auVar63._8_4_;
              iVar50 = (int)auVar63._12_4_;
              auVar63 = NEON_fmax(auVar104,auVar18,4);
              auVar63 = NEON_fmin(auVar63,auVar17,4);
              auVar105._0_4_ = (int)(auVar63._0_4_ * 1023.0 + 0.5);
              auVar105._4_4_ = (int)(auVar63._4_4_ * 1023.0 + 0.5);
              auVar105._8_4_ = (int)(auVar63._8_4_ * 1023.0 + 0.5);
              auVar105._12_4_ = (int)(auVar63._12_4_ * 1023.0 + 0.5);
              auVar63 = NEON_fmin(auVar105,auVar99,4);
              iVar54 = (int)auVar119._0_4_ << 10;
              iVar66 = (int)auVar119._4_4_ << 10;
              iVar68 = (int)auVar119._8_4_ << 10;
              iVar70 = (int)auVar119._12_4_ << 10;
              iVar14 = (int)auVar63._0_4_ << 0x14;
              iVar26 = (int)auVar63._4_4_ << 0x14;
              iVar28 = (int)auVar63._8_4_ << 0x14;
              iVar30 = (int)auVar63._12_4_ << 0x14;
              *(char *)(pfVar7 + 2) = (char)iVar46;
              *(byte *)((long)pfVar7 + 9) = (byte)((uint)iVar68 >> 8) | (byte)((uint)iVar46 >> 8);
              *(byte *)((long)pfVar7 + 10) =
                   (byte)((uint)iVar68 >> 0x10) | (byte)((uint)iVar46 >> 0x10) |
                   (byte)((uint)iVar28 >> 0x10);
              *(byte *)((long)pfVar7 + 0xb) =
                   (byte)((uint)iVar68 >> 0x18) | (byte)((uint)iVar46 >> 0x18) |
                   (byte)((uint)iVar28 >> 0x18);
              *(char *)(pfVar7 + 3) = (char)iVar50;
              *(byte *)((long)pfVar7 + 0xd) = (byte)((uint)iVar70 >> 8) | (byte)((uint)iVar50 >> 8);
              *(byte *)((long)pfVar7 + 0xe) =
                   (byte)((uint)iVar70 >> 0x10) | (byte)((uint)iVar50 >> 0x10) |
                   (byte)((uint)iVar30 >> 0x10);
              *(byte *)((long)pfVar7 + 0xf) =
                   (byte)((uint)iVar70 >> 0x18) | (byte)((uint)iVar50 >> 0x18) |
                   (byte)((uint)iVar30 >> 0x18);
              *(char *)pfVar7 = (char)iVar33;
              *(byte *)((long)pfVar7 + 1) = (byte)((uint)iVar54 >> 8) | (byte)((uint)iVar33 >> 8);
              *(byte *)((long)pfVar7 + 2) =
                   (byte)((uint)iVar54 >> 0x10) | (byte)((uint)iVar33 >> 0x10) |
                   (byte)((uint)iVar14 >> 0x10);
              *(byte *)((long)pfVar7 + 3) =
                   (byte)((uint)iVar54 >> 0x18) | (byte)((uint)iVar33 >> 0x18) |
                   (byte)((uint)iVar14 >> 0x18);
              *(char *)(pfVar7 + 1) = (char)iVar42;
              *(byte *)((long)pfVar7 + 5) = (byte)((uint)iVar66 >> 8) | (byte)((uint)iVar42 >> 8);
              *(byte *)((long)pfVar7 + 6) =
                   (byte)((uint)iVar66 >> 0x10) | (byte)((uint)iVar42 >> 0x10) |
                   (byte)((uint)iVar26 >> 0x10);
              *(byte *)((long)pfVar7 + 7) =
                   (byte)((uint)iVar66 >> 0x18) | (byte)((uint)iVar42 >> 0x18) |
                   (byte)((uint)iVar26 >> 0x18);
              lVar8 = lVar11 + 4;
              uVar102 = lVar11 + 8;
              lVar11 = lVar8;
              pfVar7 = pfVar7 + 4;
            } while (uVar102 <= param_3);
          }
          lVar11 = param_3 - lVar8;
          if (lVar11 != 0) {
            pfVar7 = (float *)(pauVar5[lVar8] + 8);
            uVar102 = NEON_fmov(0x3f800000,4);
            pfVar9 = param_2 + lVar8;
            do {
              fVar71 = *pfVar7;
              fVar13 = pfVar7[1];
              fVar55 = pfVar7[-2];
              fVar73 = pfVar7[-1];
              fVar34 = fVar13 * fVar13 + fVar55 * fVar55 + fVar73 * fVar73 + fVar71 * fVar71;
              if (fVar34 == 0.0) {
                fVar55 = 0.0;
                fVar73 = 0.0;
                fVar71 = 0.0;
                fVar13 = 1.0;
              }
              else {
                fVar34 = 1.0 / SQRT(fVar34);
                fVar13 = fVar13 * fVar34;
                fVar55 = fVar55 * fVar34;
                fVar73 = fVar73 * fVar34;
                fVar71 = fVar71 * fVar34;
              }
              pfVar7 = pfVar7 + 4;
              uVar56 = CONCAT44(fVar71,fVar73) ^
                       (CONCAT44(fVar71,fVar73) ^ CONCAT44(-fVar71,-fVar73)) &
                       CONCAT44(-(uint)(fVar13 < 0.0),-(uint)(fVar13 < 0.0));
              fVar34 = -fVar13;
              fVar73 = -fVar55;
              if (0.0 <= fVar13) {
                fVar34 = fVar13;
                fVar73 = fVar55;
              }
              fVar34 = fVar34 + 1.0 + SQRT(fVar34 * 2.0 + 2.0);
              fVar55 = ((fVar73 * 2.4142137) / fVar34) * 0.5 + 0.5;
              fVar13 = 0.0;
              if (0.0 <= fVar55) {
                fVar13 = fVar55;
              }
              fVar55 = 1.0;
              if (fVar13 <= 1.0) {
                fVar55 = fVar13;
              }
              fVar13 = (((float)uVar56 * 2.4142137) / fVar34) * 0.5 + 0.5;
              fVar34 = (((float)(uVar56 >> 0x20) * 2.4142137) / fVar34) * 0.5 + 0.5;
              iVar14 = -(uint)(fVar13 < 0.0);
              iVar26 = -(uint)(fVar34 < 0.0);
              fVar13 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                                       CONCAT12((byte)((uint)fVar13 >> 0x10) &
                                                ~(byte)((uint)iVar14 >> 0x10),
                                                CONCAT11((byte)((uint)fVar13 >> 8) &
                                                         ~(byte)((uint)iVar14 >> 8),
                                                         SUB41(fVar13,0) & ~(byte)iVar14)));
              uVar56 = CONCAT17((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                                CONCAT16((byte)((uint)fVar34 >> 0x10) &
                                         ~(byte)((uint)iVar26 >> 0x10),
                                         CONCAT15((byte)((uint)fVar34 >> 8) &
                                                  ~(byte)((uint)iVar26 >> 8),
                                                  CONCAT14(SUB41(fVar34,0) & ~(byte)iVar26,fVar13)))
                               );
              uVar56 = uVar56 ^ (uVar56 ^ uVar102) &
                                CONCAT44(-(uint)((float)(uVar102 >> 0x20) < (float)(uVar56 >> 0x20))
                                         ,-(uint)((float)uVar102 < fVar13));
              uVar16 = NEON_ushl(CONCAT44((int)(float)(int)((float)(uVar56 >> 0x20) * 1023.0 + 0.5),
                                          (int)(float)(int)((float)uVar56 * 1023.0 + 0.5)),
                                 0x140000000a,4);
              *pfVar9 = (float)((uint)uVar16 | (uint)((ulong)uVar16 >> 0x20) |
                               (int)(fVar55 * 1023.0 + 0.5));
              lVar11 = lVar11 + -1;
              pfVar9 = pfVar9 + 1;
            } while (lVar11 != 0);
          }
          return pauVar5;
        }
      }
      pauVar5 = (undefined1 (*) [16])&UNK_10f630e62;
      FUN_10a00946c();
      if (param_4 < 3) {
        if (param_4 == 0) {
          if (param_3 < 4) {
            lVar8 = 0;
          }
          else {
            auVar17 = NEON_fmov(0xbf800000,4);
            fStack_c8 = auVar17._8_4_;
            fStack_c4 = auVar17._12_4_;
            fStack_d0 = auVar17._0_4_;
            fStack_cc = auVar17._4_4_;
            auVar17 = NEON_fmov(0x3f800000,4);
            pfVar7 = param_2;
            lVar11 = 0;
            uVar102 = param_3;
            pauVar4 = pauVar5;
            do {
              auVar18 = *pauVar4;
              auVar37._0_6_ =
                   CONCAT15(auVar18[5],CONCAT14(auVar18[4],(uint)(auVar18._0_2_ & 0x3ff))) &
                   0x3ffffffffff;
              auVar37._6_2_ = 0;
              auVar37[8] = auVar18[8];
              auVar37[9] = auVar18[9] & 3;
              auVar37._10_2_ = 0;
              auVar37[0xc] = auVar18[0xc];
              auVar37[0xd] = auVar18[0xd] & 3;
              auVar37._14_2_ = 0;
              uVar43 = auVar18._4_4_ >> 10;
              uVar47 = auVar18._8_4_ >> 10;
              uVar51 = auVar18._12_4_ >> 10;
              auVar60._0_6_ =
                   CONCAT15((char)(uVar43 >> 8),
                            CONCAT14((char)uVar43,(uint)((ushort)(auVar18._0_4_ >> 10) & 0x3ff))) &
                   0x3ffffffffff;
              auVar60._6_2_ = 0;
              auVar60[8] = (undefined1)uVar47;
              auVar60[9] = (byte)(uVar47 >> 8) & 3;
              auVar60._10_2_ = 0;
              auVar60[0xc] = (undefined1)uVar51;
              auVar60[0xd] = (byte)(uVar51 >> 8) & 3;
              auVar60._14_2_ = 0;
              auVar22._0_8_ =
                   CONCAT44(auVar18._4_4_ >> 0x14,auVar18._0_4_ >> 0x14) & 0xfffff3fffffff3ff;
              auVar22._8_4_ = auVar18._8_4_ >> 0x14 & 0xfffff3ff;
              auVar22._12_4_ = auVar18._12_4_ >> 0x14 & 0xfffff3ff;
              auVar75 = NEON_ucvtf(auVar37,4);
              auVar58 = NEON_ucvtf(auVar60,4);
              auVar18 = NEON_ucvtf(auVar22,4);
              fVar95 = fStack_d0 + auVar75._0_4_ * 0.0009775171 * 2.0;
              fVar65 = fStack_cc + auVar75._4_4_ * 0.0009775171 * 2.0;
              fVar27 = fStack_c8 + auVar75._8_4_ * 0.0009775171 * 2.0;
              fVar136 = fStack_c4 + auVar75._12_4_ * 0.0009775171 * 2.0;
              fVar13 = fStack_d0 + auVar58._0_4_ * 0.0009775171 * 2.0;
              fVar55 = fStack_cc + auVar58._4_4_ * 0.0009775171 * 2.0;
              fVar34 = fStack_c8 + auVar58._8_4_ * 0.0009775171 * 2.0;
              fVar73 = fStack_c4 + auVar58._12_4_ * 0.0009775171 * 2.0;
              fVar71 = fStack_d0 + auVar18._0_4_ * 0.0009775171 * 2.0;
              fVar32 = fStack_cc + auVar18._4_4_ * 0.0009775171 * 2.0;
              fVar53 = fStack_c8 + auVar18._8_4_ * 0.0009775171 * 2.0;
              fVar25 = fStack_c4 + auVar18._12_4_ * 0.0009775171 * 2.0;
              fVar29 = fVar95 * fVar95 + fVar13 * fVar13 + fVar71 * fVar71;
              fVar162 = fVar65 * fVar65 + fVar55 * fVar55 + fVar32 * fVar32;
              fVar31 = fVar27 * fVar27 + fVar34 * fVar34 + fVar53 * fVar53;
              fVar40 = fVar136 * fVar136 + fVar73 * fVar73 + fVar25 * fVar25;
              auVar83._0_4_ = -(uint)(auVar17._0_4_ <= fVar29);
              auVar83._4_4_ = -(uint)(auVar17._4_4_ <= fVar162);
              auVar83._8_4_ = -(uint)(auVar17._8_4_ <= fVar31);
              auVar83._12_4_ = -(uint)(auVar17._12_4_ <= fVar40);
              auVar18 = NEON_ext(auVar83,auVar83,8,1);
              uVar16 = CONCAT17((byte)((uint)auVar83._4_4_ >> 0x18) | auVar18[7],
                                CONCAT16((byte)((uint)auVar83._4_4_ >> 0x10) | auVar18[6],
                                         CONCAT15((byte)((uint)auVar83._4_4_ >> 8) | auVar18[5],
                                                  CONCAT14((byte)auVar83._4_4_ | auVar18[4],
                                                           CONCAT13((byte)((uint)auVar83._0_4_ >>
                                                                          0x18) | auVar18[3],
                                                                    CONCAT12((byte)((uint)auVar83.
                                                  _0_4_ >> 0x10) | auVar18[2],
                                                  CONCAT11((byte)((uint)auVar83._0_4_ >> 8) |
                                                           auVar18[1],
                                                           (byte)auVar83._0_4_ | auVar18[0])))))));
              uVar16 = NEON_umaxp(uVar16,uVar16,4);
              if ((int)uVar16 == 0) {
                *pfVar7 = fVar13;
                pfVar7[1] = fVar71;
                pfVar7[2] = SQRT(auVar17._0_4_ - fVar29);
                pfVar7[3] = fVar95;
                pfVar7[4] = fVar55;
                pfVar7[5] = fVar32;
                pfVar7[6] = SQRT(auVar17._4_4_ - fVar162);
                pfVar7[7] = fVar65;
                pfVar7[8] = fVar34;
                pfVar7[9] = fVar53;
                pfVar7[10] = SQRT(auVar17._8_4_ - fVar31);
                pfVar7[0xb] = fVar27;
                pfVar7[0xc] = fVar73;
                pfVar7[0xd] = fVar25;
                pfVar7[0xe] = SQRT(auVar17._12_4_ - fVar40);
                pfVar7[0xf] = fVar136;
              }
              else {
                uVar56 = uVar102;
                if (3 < uVar102) {
                  uVar56 = 4;
                }
                FUN_10a009298(pauVar4,pfVar7,uVar56);
              }
              lVar8 = lVar11 + 4;
              uVar56 = lVar11 + 8;
              pfVar7 = pfVar7 + 0x10;
              uVar102 = uVar102 - 4;
              lVar11 = lVar8;
              pauVar4 = pauVar4 + 1;
            } while (uVar56 <= param_3);
          }
          pauVar5 = (undefined1 (*) [16])(*pauVar5 + lVar8 * 4);
          lVar11 = param_3 - lVar8;
          if (lVar11 != 0) {
            param_2 = param_2 + lVar8 * 4 + 3;
            uVar16 = NEON_fmov(0xbf800000,4);
            pauVar4 = pauVar5;
            do {
              pauVar5 = (undefined1 (*) [16])(*pauVar4 + 4);
              uVar43 = *(uint *)*pauVar4;
              fVar13 = (float)(uVar43 & 0x3ff) * 0.0009775171;
              uVar102 = NEON_ushl(CONCAT44(uVar43,uVar43),0xffffffecfffffff6,4);
              uVar15 = NEON_ucvtf(uVar102 & 0x3ff000003ff,4);
              fVar55 = fVar13 + fVar13 + -1.0;
              fVar13 = (float)uVar15 * 0.0009775171;
              fVar73 = (float)((ulong)uVar15 >> 0x20) * 0.0009775171;
              fVar34 = fVar13 + fVar13 + (float)uVar16;
              fVar73 = fVar73 + fVar73 + (float)((ulong)uVar16 >> 0x20);
              fVar71 = fVar73 * fVar73 + fVar55 * fVar55 + fVar34 * fVar34;
              fVar32 = 1.0 / SQRT(fVar71);
              fVar13 = SQRT(1.0 - fVar71);
              uVar15 = CONCAT44(fVar73,fVar34);
              if (1.0 <= fVar71) {
                fVar13 = fVar32 * 0.0;
                uVar15 = CONCAT44(fVar73 * fVar32,fVar34 * fVar32);
              }
              *(undefined8 *)(param_2 + -3) = uVar15;
              if (1.0 <= fVar71) {
                fVar55 = fVar55 * fVar32;
              }
              param_2[-1] = fVar13;
              *param_2 = fVar55;
              param_2 = param_2 + 4;
              lVar11 = lVar11 + -1;
              pauVar4 = pauVar5;
            } while (lVar11 != 0);
          }
          return pauVar5;
        }
        if (param_4 == 1) {
          if (param_3 < 4) {
            lVar8 = 0;
          }
          else {
            auVar17 = NEON_fmov(0xbf800000,4);
            auVar18 = NEON_fmov(0x3f800000,4);
            lVar11 = 0;
            pfVar7 = param_2;
            pauVar4 = pauVar5;
            do {
              auVar75 = *pauVar4;
              auVar120._0_6_ =
                   CONCAT15(auVar75[5],CONCAT14(auVar75[4],(uint)(auVar75._0_2_ & 0x3ff))) &
                   0x3ffffffffff;
              auVar120._6_2_ = 0;
              auVar120[8] = auVar75[8];
              auVar120[9] = auVar75[9] & 3;
              auVar120._10_2_ = 0;
              auVar120[0xc] = auVar75[0xc];
              auVar120[0xd] = auVar75[0xd] & 3;
              auVar120._14_2_ = 0;
              uVar43 = auVar75._0_4_;
              uVar51 = auVar75._4_4_;
              uVar112 = auVar75._8_4_;
              uVar114 = auVar75._12_4_;
              auVar128._0_6_ =
                   CONCAT15((char)((uVar51 >> 10) >> 8),
                            CONCAT14((char)(uVar51 >> 10),(uint)((ushort)(uVar43 >> 10) & 0x3ff))) &
                   0x3ffffffffff;
              auVar128._6_2_ = 0;
              auVar128[8] = (undefined1)(uVar112 >> 10);
              auVar128[9] = (byte)((uVar112 >> 10) >> 8) & 3;
              auVar128._10_2_ = 0;
              auVar128[0xc] = (undefined1)(uVar114 >> 10);
              auVar128[0xd] = (byte)((uVar114 >> 10) >> 8) & 3;
              auVar128._14_2_ = 0;
              auVar135._0_8_ = CONCAT44(uVar51 >> 0x14,uVar43 >> 0x14) & 0xfffff3fffffff3ff;
              auVar135._8_4_ = uVar112 >> 0x14 & 0xfffff3ff;
              auVar135._12_4_ = uVar114 >> 0x14 & 0xfffff3ff;
              uVar137 = uVar43 >> 0x1e;
              uVar145 = uVar51 >> 0x1e;
              uVar147 = uVar112 >> 0x1e;
              uVar149 = uVar114 >> 0x1e;
              auVar75 = NEON_ucvtf(auVar120,4);
              auVar58 = NEON_ucvtf(auVar128,4);
              fVar95 = auVar17._0_4_;
              fVar29 = fVar95 + auVar75._0_4_ * 0.0019550342;
              fVar65 = auVar17._4_4_;
              fVar162 = fVar65 + auVar75._4_4_ * 0.0019550342;
              fVar27 = auVar17._8_4_;
              fVar136 = auVar17._12_4_;
              fVar31 = fVar27 + auVar75._8_4_ * 0.0019550342;
              fVar40 = fVar136 + auVar75._12_4_ * 0.0019550342;
              fVar13 = fVar95 + auVar58._0_4_ * 0.0019550342;
              fVar55 = fVar65 + auVar58._4_4_ * 0.0019550342;
              fVar34 = fVar27 + auVar58._8_4_ * 0.0019550342;
              fVar73 = fVar136 + auVar58._12_4_ * 0.0019550342;
              auVar75 = NEON_ucvtf(auVar135,4);
              fVar95 = fVar95 + auVar75._0_4_ * 0.0019550342;
              fVar65 = fVar65 + auVar75._4_4_ * 0.0019550342;
              fVar27 = fVar27 + auVar75._8_4_ * 0.0019550342;
              fVar136 = fVar136 + auVar75._12_4_ * 0.0019550342;
              auVar129._0_4_ = auVar18._0_4_ - (fVar29 * fVar29 + fVar13 * fVar13 + fVar95 * fVar95)
              ;
              auVar129._4_4_ =
                   auVar18._4_4_ - (fVar162 * fVar162 + fVar55 * fVar55 + fVar65 * fVar65);
              auVar129._8_4_ = auVar18._8_4_ - (fVar31 * fVar31 + fVar34 * fVar34 + fVar27 * fVar27)
              ;
              auVar129._12_4_ =
                   auVar18._12_4_ - (fVar40 * fVar40 + fVar73 * fVar73 + fVar136 * fVar136);
              auVar75 = NEON_fmax(auVar129,ZEXT216(0),4);
              fVar71 = SQRT(auVar75._0_4_);
              fVar32 = SQRT(auVar75._4_4_);
              fVar53 = SQRT(auVar75._8_4_);
              fVar25 = SQRT(auVar75._12_4_);
              uVar138 = (uint)fVar13 ^ ((uint)fVar13 ^ (uint)fVar29) & -(uint)(uVar137 == 3);
              uVar146 = (uint)fVar55 ^ ((uint)fVar55 ^ (uint)fVar162) & -(uint)(uVar145 == 3);
              uVar148 = (uint)fVar34 ^ ((uint)fVar34 ^ (uint)fVar31) & -(uint)(uVar147 == 3);
              uVar150 = (uint)fVar73 ^ ((uint)fVar73 ^ (uint)fVar40) & -(uint)(uVar149 == 3);
              uVar47 = (uint)fVar13 ^ ((uint)fVar13 ^ (uint)fVar95) & -(uint)(uVar137 == 2);
              uVar111 = (uint)fVar55 ^ ((uint)fVar55 ^ (uint)fVar65) & -(uint)(uVar145 == 2);
              uVar113 = (uint)fVar34 ^ ((uint)fVar34 ^ (uint)fVar27) & -(uint)(uVar147 == 2);
              uVar115 = (uint)fVar73 ^ ((uint)fVar73 ^ (uint)fVar136) & -(uint)(uVar149 == 2);
              *pfVar7 = (float)(uVar138 ^ (uVar138 ^ (uint)fVar71) & -(uint)(uVar43 < 0x40000000));
              pfVar7[1] = (float)(uVar47 ^ (uVar47 ^ (uint)fVar71) & -(uint)(uVar137 == 1));
              pfVar7[2] = (float)((uint)fVar95 ^
                                 ((uint)fVar95 ^ (uint)fVar71) & -(uint)(uVar137 == 2));
              pfVar7[3] = (float)((uint)fVar29 ^
                                 ((uint)fVar29 ^ (uint)fVar71) & -(uint)(uVar137 == 3));
              pfVar7[4] = (float)(uVar146 ^ (uVar146 ^ (uint)fVar32) & -(uint)(uVar51 < 0x40000000))
              ;
              pfVar7[5] = (float)(uVar111 ^ (uVar111 ^ (uint)fVar32) & -(uint)(uVar145 == 1));
              pfVar7[6] = (float)((uint)fVar65 ^
                                 ((uint)fVar65 ^ (uint)fVar32) & -(uint)(uVar145 == 2));
              pfVar7[7] = (float)((uint)fVar162 ^
                                 ((uint)fVar162 ^ (uint)fVar32) & -(uint)(uVar145 == 3));
              pfVar7[8] = (float)(uVar148 ^ (uVar148 ^ (uint)fVar53) & -(uint)(uVar112 < 0x40000000)
                                 );
              pfVar7[9] = (float)(uVar113 ^ (uVar113 ^ (uint)fVar53) & -(uint)(uVar147 == 1));
              pfVar7[10] = (float)((uint)fVar27 ^
                                  ((uint)fVar27 ^ (uint)fVar53) & -(uint)(uVar147 == 2));
              pfVar7[0xb] = (float)((uint)fVar31 ^
                                   ((uint)fVar31 ^ (uint)fVar53) & -(uint)(uVar147 == 3));
              pfVar7[0xc] = (float)(uVar150 ^
                                   (uVar150 ^ (uint)fVar25) & -(uint)(uVar114 < 0x40000000));
              pfVar7[0xd] = (float)(uVar115 ^ (uVar115 ^ (uint)fVar25) & -(uint)(uVar149 == 1));
              pfVar7[0xe] = (float)((uint)fVar136 ^
                                   ((uint)fVar136 ^ (uint)fVar25) & -(uint)(uVar149 == 2));
              pfVar7[0xf] = (float)((uint)fVar40 ^
                                   ((uint)fVar40 ^ (uint)fVar25) & -(uint)(uVar149 == 3));
              pfVar7 = pfVar7 + 0x10;
              lVar8 = lVar11 + 4;
              uVar102 = lVar11 + 8;
              lVar11 = lVar8;
              pauVar4 = pauVar4 + 1;
            } while (uVar102 <= param_3);
          }
          lVar11 = param_3 - lVar8;
          if (lVar11 != 0) {
            uVar16 = NEON_fmov(0xbf800000,4);
            puVar10 = (uint *)(*pauVar5 + lVar8 * 4);
            pfVar7 = param_2 + lVar8 * 4 + 2;
            do {
              uVar43 = *puVar10;
              fStack_c4 = (float)(uVar43 >> 0x1e);
              fStack_d0 = (float)(uVar43 & 0x3ff) * 0.0019550342 + -1.0;
              uVar102 = NEON_ushl(CONCAT44(uVar43,uVar43),0xffffffecfffffff6,4);
              uVar15 = NEON_ucvtf(uVar102 & 0x3ff000003ff,4);
              fStack_cc = (float)uVar16 + (float)uVar15 * 0.0019550342;
              fStack_c8 = (float)((ulong)uVar16 >> 0x20) +
                          (float)((ulong)uVar15 >> 0x20) * 0.0019550342;
              pauVar5 = (undefined1 (*) [16])&fStack_d0;
              func_0x00010a005ddc(&fStack_d0);
              pfVar7[-2] = extraout_s0;
              pfVar7[-1] = extraout_s1;
              *pfVar7 = extraout_s2;
              pfVar7[1] = extraout_s3;
              lVar11 = lVar11 + -1;
              puVar10 = puVar10 + 1;
              pfVar7 = pfVar7 + 4;
            } while (lVar11 != 0);
          }
          return pauVar5;
        }
        if (param_4 == 2) {
          fStack_d0 = (float)unaff_d11;
          fStack_cc = (float)((ulong)unaff_d11 >> 0x20);
          fStack_c8 = (float)unaff_d10;
          fStack_c4 = (float)((ulong)unaff_d10 >> 0x20);
          pauVar4 = pauVar5;
          if (param_3 < 4) {
            lVar8 = 0;
          }
          else {
            auVar17 = NEON_fmov(0xbf800000,4);
            auVar18 = NEON_fmov(0x3f800000,4);
            lVar11 = 0;
            pfVar7 = param_2;
            pauVar12 = pauVar5;
            do {
              auVar75 = *pauVar12;
              uVar43 = auVar75._4_4_ >> 10;
              uVar47 = auVar75._8_4_ >> 10;
              uVar51 = auVar75._12_4_ >> 10;
              auVar62._0_6_ =
                   CONCAT15(auVar75[5],CONCAT14(auVar75[4],(uint)(auVar75._0_2_ & 0x3ff))) &
                   0x3ffffffffff;
              auVar62._6_2_ = 0;
              auVar62[8] = auVar75[8];
              auVar62[9] = auVar75[9] & 3;
              auVar62._10_2_ = 0;
              auVar62[0xc] = auVar75[0xc];
              auVar62[0xd] = auVar75[0xd] & 3;
              auVar62._14_2_ = 0;
              auVar39._0_6_ =
                   CONCAT15((char)(uVar43 >> 8),
                            CONCAT14((char)uVar43,(uint)((ushort)(auVar75._0_4_ >> 10) & 0x3ff))) &
                   0x3ffffffffff;
              auVar39._6_2_ = 0;
              auVar39[8] = (undefined1)uVar47;
              auVar39[9] = (byte)(uVar47 >> 8) & 3;
              auVar39._10_2_ = 0;
              auVar39[0xc] = (undefined1)uVar51;
              auVar39[0xd] = (byte)(uVar51 >> 8) & 3;
              auVar39._14_2_ = 0;
              auVar24._0_8_ =
                   CONCAT44(auVar75._4_4_ >> 0x14,auVar75._0_4_ >> 0x14) & 0xfffff3fffffff3ff;
              auVar24._8_4_ = auVar75._8_4_ >> 0x14 & 0xfffff3ff;
              auVar24._12_4_ = auVar75._12_4_ >> 0x14 & 0xfffff3ff;
              auVar63 = NEON_ucvtf(auVar62,4);
              auVar58 = NEON_ucvtf(auVar39,4);
              fStack_1d0 = auVar17._0_4_;
              fStack_1cc = auVar17._4_4_;
              fStack_1c8 = auVar17._8_4_;
              fStack_1c4 = auVar17._12_4_;
              auVar75 = NEON_ucvtf(auVar24,4);
              fVar34 = fStack_1d0 + auVar63._0_4_ * 0.0009775171 * 2.0;
              fVar73 = fStack_1cc + auVar63._4_4_ * 0.0009775171 * 2.0;
              fVar71 = fStack_1c8 + auVar63._8_4_ * 0.0009775171 * 2.0;
              fVar32 = fStack_1c4 + auVar63._12_4_ * 0.0009775171 * 2.0;
              fVar53 = fStack_1d0 + auVar58._0_4_ * 0.0009775171 * 2.0;
              fVar25 = fStack_1cc + auVar58._4_4_ * 0.0009775171 * 2.0;
              fVar95 = fStack_1c8 + auVar58._8_4_ * 0.0009775171 * 2.0;
              fVar65 = fStack_1c4 + auVar58._12_4_ * 0.0009775171 * 2.0;
              fStack_1d0 = fStack_1d0 + auVar75._0_4_ * 0.0009775171 * 2.0;
              fStack_1cc = fStack_1cc + auVar75._4_4_ * 0.0009775171 * 2.0;
              fStack_1c8 = fStack_1c8 + auVar75._8_4_ * 0.0009775171 * 2.0;
              fStack_1c4 = fStack_1c4 + auVar75._12_4_ * 0.0009775171 * 2.0;
              fVar13 = fVar53 * fVar53 + fVar34 * fVar34 + fStack_1d0 * fStack_1d0;
              fVar55 = fVar25 * fVar25 + fVar73 * fVar73 + fStack_1cc * fStack_1cc;
              fStack_1f0 = auVar18._0_4_;
              fStack_1ec = auVar18._4_4_;
              fStack_1e8 = auVar18._8_4_;
              fStack_1e4 = auVar18._12_4_;
              fStack_1f0 = fStack_1f0 / SQRT(fVar13 + 1e-06);
              fStack_1ec = fStack_1ec / SQRT(fVar55 + 1e-06);
              uStack_100 = CONCAT44(fVar55 * fStack_1ec * 1.5707964,fVar13 * fStack_1f0 * 1.5707964)
              ;
              uVar16 = ___sincosf_stret();
              uVar15 = ___sincosf_stret(uStack_100);
              uVar168 = ___sincosf_stret();
              uVar169 = ___sincosf_stret();
              fStack_1f0 = fStack_1f0 * (float)uVar15;
              fStack_1ec = fStack_1ec * (float)uVar16;
              fVar13 = (fStack_1e8 /
                       SQRT(fVar95 * fVar95 + fVar71 * fVar71 + fStack_1c8 * fStack_1c8 + 1e-06)) *
                       (float)uVar168;
              fVar55 = (fStack_1e4 /
                       SQRT(fVar65 * fVar65 + fVar32 * fVar32 + fStack_1c4 * fStack_1c4 + 1e-06)) *
                       (float)uVar169;
              *pfVar7 = fVar34 * fStack_1f0;
              pfVar7[1] = fVar53 * fStack_1f0;
              pfVar7[2] = fStack_1d0 * fStack_1f0;
              pfVar7[3] = (float)((ulong)uVar15 >> 0x20);
              pfVar7[4] = fVar73 * fStack_1ec;
              pfVar7[5] = fVar25 * fStack_1ec;
              pfVar7[6] = fStack_1cc * fStack_1ec;
              pfVar7[7] = (float)((ulong)uVar16 >> 0x20);
              pfVar7[8] = fVar71 * fVar13;
              pfVar7[9] = fVar95 * fVar13;
              pfVar7[10] = fStack_1c8 * fVar13;
              pfVar7[0xb] = (float)((ulong)uVar168 >> 0x20);
              pfVar7[0xc] = fVar32 * fVar55;
              pfVar7[0xd] = fVar65 * fVar55;
              pfVar7[0xe] = fStack_1c4 * fVar55;
              pfVar7[0xf] = (float)((ulong)uVar169 >> 0x20);
              pfVar7 = pfVar7 + 0x10;
              lVar8 = lVar11 + 4;
              uVar102 = lVar11 + 8;
              lVar11 = lVar8;
              pauVar12 = pauVar12 + 1;
            } while (uVar102 <= param_3);
          }
          lVar11 = param_3 - lVar8;
          if (lVar11 != 0) {
            param_2 = param_2 + lVar8 * 4 + 3;
            uVar16 = NEON_fmov(0xbf800000,4);
            puVar10 = (uint *)(*pauVar5 + lVar8 * 4);
            do {
              uVar43 = *puVar10;
              fVar13 = (float)(uVar43 >> 0x14 & 0x3ff) * 0.0009775171;
              fVar34 = fVar13 + fVar13 + -1.0;
              uVar15 = NEON_ucvtf(CONCAT44(uVar43 >> 10,uVar43) & 0x3ff000003ff,4);
              fVar13 = (float)uVar15 * 0.0009775171;
              fVar55 = (float)((ulong)uVar15 >> 0x20) * 0.0009775171;
              fVar73 = fVar13 + fVar13 + (float)uVar16;
              fVar55 = fVar55 + fVar55 + (float)((ulong)uVar16 >> 0x20);
              uVar15 = ___sincosf_stret();
              fVar13 = (1.0 / SQRT(fVar34 * fVar34 + fVar73 * fVar73 + fVar55 * fVar55 + 1e-06)) *
                       (float)uVar15;
              *(ulong *)(param_2 + -3) = CONCAT44(fVar55 * fVar13,fVar73 * fVar13);
              param_2[-1] = fVar34 * fVar13;
              *param_2 = (float)((ulong)uVar15 >> 0x20);
              param_2 = param_2 + 4;
              lVar11 = lVar11 + -1;
              puVar10 = puVar10 + 1;
            } while (lVar11 != 0);
          }
          return pauVar4;
        }
      }
      else {
        if (param_4 == 3) {
          if (param_3 < 4) {
            lVar8 = 0;
          }
          else {
            auVar17 = NEON_fmov(0xbf800000,4);
            auVar18 = NEON_fmov(0x3f800000,4);
            lVar11 = 0;
            pfVar7 = param_2;
            pauVar4 = pauVar5;
            do {
              auVar75 = *pauVar4;
              auVar94._0_6_ =
                   CONCAT15(auVar75[5],CONCAT14(auVar75[4],(uint)(auVar75._0_2_ & 0x3ff))) &
                   0x3ffffffffff;
              auVar94._6_2_ = 0;
              auVar94[8] = auVar75[8];
              auVar94[9] = auVar75[9] & 3;
              auVar94._10_2_ = 0;
              auVar94[0xc] = auVar75[0xc];
              auVar94[0xd] = auVar75[0xd] & 3;
              auVar94._14_2_ = 0;
              uVar43 = auVar75._4_4_ >> 10;
              uVar47 = auVar75._8_4_ >> 10;
              uVar51 = auVar75._12_4_ >> 10;
              auVar101._0_6_ =
                   CONCAT15((char)(uVar43 >> 8),
                            CONCAT14((char)uVar43,(uint)((ushort)(auVar75._0_4_ >> 10) & 0x3ff))) &
                   0x3ffffffffff;
              auVar101._6_2_ = 0;
              auVar101[8] = (undefined1)uVar47;
              auVar101[9] = (byte)(uVar47 >> 8) & 3;
              auVar101._10_2_ = 0;
              auVar101[0xc] = (undefined1)uVar51;
              auVar101[0xd] = (byte)(uVar51 >> 8) & 3;
              auVar101._14_2_ = 0;
              auVar84._0_8_ =
                   CONCAT44(auVar75._4_4_ >> 0x14,auVar75._0_4_ >> 0x14) & 0xfffff3fffffff3ff;
              auVar84._8_4_ = auVar75._8_4_ >> 0x14 & 0xfffff3ff;
              auVar84._12_4_ = auVar75._12_4_ >> 0x14 & 0xfffff3ff;
              auVar58 = NEON_ucvtf(auVar94,4);
              auVar63 = NEON_ucvtf(auVar101,4);
              auVar75 = NEON_ucvtf(auVar84,4);
              fVar162 = auVar17._0_4_;
              fVar29 = fVar162 + auVar58._0_4_ * 0.0009775171 * 2.0;
              fVar40 = auVar17._4_4_;
              fVar31 = fVar40 + auVar58._4_4_ * 0.0009775171 * 2.0;
              fVar41 = auVar17._8_4_;
              fVar48 = auVar17._12_4_;
              fVar44 = fVar41 + auVar58._8_4_ * 0.0009775171 * 2.0;
              fVar45 = fVar48 + auVar58._12_4_ * 0.0009775171 * 2.0;
              fVar71 = fVar162 + auVar63._0_4_ * 0.0009775171 * 2.0;
              fVar32 = fVar40 + auVar63._4_4_ * 0.0009775171 * 2.0;
              fVar53 = fVar41 + auVar63._8_4_ * 0.0009775171 * 2.0;
              fVar25 = fVar48 + auVar63._12_4_ * 0.0009775171 * 2.0;
              fVar95 = fVar162 + auVar75._0_4_ * 0.0009775171 * 2.0;
              fVar65 = fVar40 + auVar75._4_4_ * 0.0009775171 * 2.0;
              fVar27 = fVar41 + auVar75._8_4_ * 0.0009775171 * 2.0;
              fVar136 = fVar48 + auVar75._12_4_ * 0.0009775171 * 2.0;
              fVar13 = auVar18._0_4_ /
                       (fVar29 * fVar29 + fVar71 * fVar71 + fVar95 * fVar95 + auVar18._0_4_);
              fVar55 = auVar18._4_4_ /
                       (fVar31 * fVar31 + fVar32 * fVar32 + fVar65 * fVar65 + auVar18._4_4_);
              fVar34 = auVar18._8_4_ /
                       (fVar44 * fVar44 + fVar53 * fVar53 + fVar27 * fVar27 + auVar18._8_4_);
              fVar73 = auVar18._12_4_ /
                       (fVar45 * fVar45 + fVar25 * fVar25 + fVar136 * fVar136 + auVar18._12_4_);
              fVar13 = fVar13 + fVar13;
              fVar55 = fVar55 + fVar55;
              fVar34 = fVar34 + fVar34;
              fVar73 = fVar73 + fVar73;
              *pfVar7 = fVar29 * fVar13;
              pfVar7[1] = fVar71 * fVar13;
              pfVar7[2] = fVar95 * fVar13;
              pfVar7[3] = fVar13 + fVar162;
              pfVar7[4] = fVar31 * fVar55;
              pfVar7[5] = fVar32 * fVar55;
              pfVar7[6] = fVar65 * fVar55;
              pfVar7[7] = fVar55 + fVar40;
              pfVar7[8] = fVar44 * fVar34;
              pfVar7[9] = fVar53 * fVar34;
              pfVar7[10] = fVar27 * fVar34;
              pfVar7[0xb] = fVar34 + fVar41;
              pfVar7[0xc] = fVar45 * fVar73;
              pfVar7[0xd] = fVar25 * fVar73;
              pfVar7[0xe] = fVar136 * fVar73;
              pfVar7[0xf] = fVar73 + fVar48;
              pfVar7 = pfVar7 + 0x10;
              lVar8 = lVar11 + 4;
              uVar102 = lVar11 + 8;
              lVar11 = lVar8;
              pauVar4 = pauVar4 + 1;
            } while (uVar102 <= param_3);
          }
          lVar11 = param_3 - lVar8;
          if (lVar11 != 0) {
            uVar16 = NEON_fmov(0xbf800000,4);
            puVar10 = (uint *)(*pauVar5 + lVar8 * 4);
            pfVar7 = param_2 + lVar8 * 4;
            do {
              uVar43 = *puVar10;
              fVar13 = (float)(uVar43 >> 0x14 & 0x3ff) * 0.0009775171;
              uVar15 = NEON_ucvtf(CONCAT44(uVar43 >> 10,uVar43) & 0x3ff000003ff,4);
              fVar55 = (float)uVar15 * 0.0009775171;
              fVar34 = (float)((ulong)uVar15 >> 0x20) * 0.0009775171;
              fVar55 = fVar55 + fVar55 + (float)uVar16;
              fVar34 = fVar34 + fVar34 + (float)((ulong)uVar16 >> 0x20);
              fVar13 = fVar13 + fVar13 + -1.0;
              fVar73 = 2.0 / (fVar13 * fVar13 + fVar55 * fVar55 + fVar34 * fVar34 + 1.0);
              pfVar7[2] = fVar13 * fVar73;
              pfVar7[3] = fVar73 + -1.0;
              *pfVar7 = fVar55 * fVar73;
              pfVar7[1] = fVar34 * fVar73;
              lVar11 = lVar11 + -1;
              puVar10 = puVar10 + 1;
              pfVar7 = pfVar7 + 4;
            } while (lVar11 != 0);
          }
          return pauVar5;
        }
        if (param_4 == 4) {
          if (param_3 < 4) {
            lVar8 = 0;
          }
          else {
            auVar17 = NEON_fmov(0xbf800000,4);
            fStack_c8 = auVar17._8_4_;
            fStack_c4 = auVar17._12_4_;
            fStack_d0 = auVar17._0_4_;
            fStack_cc = auVar17._4_4_;
            auVar17 = NEON_fmov(0x3f800000,4);
            fStack_d8 = auVar17._8_4_;
            fStack_d4 = auVar17._12_4_;
            fStack_e0 = auVar17._0_4_;
            fStack_dc = auVar17._4_4_;
            pfVar7 = param_2;
            lVar11 = 0;
            uVar102 = param_3;
            pauVar4 = pauVar5;
            do {
              auVar17 = *pauVar4;
              auVar38._0_6_ =
                   CONCAT15(auVar17[5],CONCAT14(auVar17[4],(uint)(auVar17._0_2_ & 0x3ff))) &
                   0x3ffffffffff;
              auVar38._6_2_ = 0;
              auVar38[8] = auVar17[8];
              auVar38[9] = auVar17[9] & 3;
              auVar38._10_2_ = 0;
              auVar38[0xc] = auVar17[0xc];
              auVar38[0xd] = auVar17[0xd] & 3;
              auVar38._14_2_ = 0;
              uVar43 = auVar17._4_4_ >> 10;
              uVar47 = auVar17._8_4_ >> 10;
              uVar51 = auVar17._12_4_ >> 10;
              auVar61._0_6_ =
                   CONCAT15((char)(uVar43 >> 8),
                            CONCAT14((char)uVar43,(uint)((ushort)(auVar17._0_4_ >> 10) & 0x3ff))) &
                   0x3ffffffffff;
              auVar61._6_2_ = 0;
              auVar61[8] = (undefined1)uVar47;
              auVar61[9] = (byte)(uVar47 >> 8) & 3;
              auVar61._10_2_ = 0;
              auVar61[0xc] = (undefined1)uVar51;
              auVar61[0xd] = (byte)(uVar51 >> 8) & 3;
              auVar61._14_2_ = 0;
              auVar23._0_8_ =
                   CONCAT44(auVar17._4_4_ >> 0x14,auVar17._0_4_ >> 0x14) & 0xfffff3fffffff3ff;
              auVar23._8_4_ = auVar17._8_4_ >> 0x14 & 0xfffff3ff;
              auVar23._12_4_ = auVar17._12_4_ >> 0x14 & 0xfffff3ff;
              auVar18 = NEON_ucvtf(auVar38,4);
              auVar75 = NEON_ucvtf(auVar61,4);
              auVar17 = NEON_ucvtf(auVar23,4);
              fVar13 = fStack_d0 + auVar18._0_4_ * 0.0009775171 * 2.0;
              fVar55 = fStack_cc + auVar18._4_4_ * 0.0009775171 * 2.0;
              fVar34 = fStack_c8 + auVar18._8_4_ * 0.0009775171 * 2.0;
              fVar73 = fStack_c4 + auVar18._12_4_ * 0.0009775171 * 2.0;
              fVar71 = fStack_d0 + auVar75._0_4_ * 0.0009775171 * 2.0;
              fVar32 = fStack_cc + auVar75._4_4_ * 0.0009775171 * 2.0;
              fVar53 = fStack_c8 + auVar75._8_4_ * 0.0009775171 * 2.0;
              fVar25 = fStack_c4 + auVar75._12_4_ * 0.0009775171 * 2.0;
              fVar95 = fStack_d0 + auVar17._0_4_ * 0.0009775171 * 2.0;
              fVar65 = fStack_cc + auVar17._4_4_ * 0.0009775171 * 2.0;
              fVar27 = fStack_c8 + auVar17._8_4_ * 0.0009775171 * 2.0;
              fVar136 = fStack_c4 + auVar17._12_4_ * 0.0009775171 * 2.0;
              fVar29 = fVar13 * fVar13 + fVar71 * fVar71 + fVar95 * fVar95;
              fVar162 = fVar55 * fVar55 + fVar32 * fVar32 + fVar65 * fVar65;
              fVar31 = fVar34 * fVar34 + fVar53 * fVar53 + fVar27 * fVar27;
              fVar40 = fVar73 * fVar73 + fVar25 * fVar25 + fVar136 * fVar136;
              auVar77._0_4_ = -(uint)(2.0 <= fVar29);
              auVar77._4_4_ = -(uint)(2.0 <= fVar162);
              auVar77._8_4_ = -(uint)(2.0 <= fVar31);
              auVar77._12_4_ = -(uint)(2.0 <= fVar40);
              auVar17 = NEON_ext(auVar77,auVar77,8,1);
              uVar16 = CONCAT17((byte)((uint)auVar77._4_4_ >> 0x18) | auVar17[7],
                                CONCAT16((byte)((uint)auVar77._4_4_ >> 0x10) | auVar17[6],
                                         CONCAT15((byte)((uint)auVar77._4_4_ >> 8) | auVar17[5],
                                                  CONCAT14((byte)auVar77._4_4_ | auVar17[4],
                                                           CONCAT13((byte)((uint)auVar77._0_4_ >>
                                                                          0x18) | auVar17[3],
                                                                    CONCAT12((byte)((uint)auVar77.
                                                  _0_4_ >> 0x10) | auVar17[2],
                                                  CONCAT11((byte)((uint)auVar77._0_4_ >> 8) |
                                                           auVar17[1],
                                                           (byte)auVar77._0_4_ | auVar17[0])))))));
              uVar16 = NEON_umaxp(uVar16,uVar16,4);
              if ((int)uVar16 != 0) {
                if (3 < uVar102) {
                  uVar102 = 4;
                }
                goto SUB_10a00935c;
              }
              fVar41 = SQRT(2.0 - fVar29);
              fVar44 = SQRT(2.0 - fVar162);
              fVar45 = SQRT(2.0 - fVar31);
              fVar48 = SQRT(2.0 - fVar40);
              *pfVar7 = fVar13 * fVar41;
              pfVar7[1] = fVar71 * fVar41;
              pfVar7[2] = fVar95 * fVar41;
              pfVar7[3] = fStack_e0 - fVar29;
              pfVar7[4] = fVar55 * fVar44;
              pfVar7[5] = fVar32 * fVar44;
              pfVar7[6] = fVar65 * fVar44;
              pfVar7[7] = fStack_dc - fVar162;
              pfVar7[8] = fVar34 * fVar45;
              pfVar7[9] = fVar53 * fVar45;
              pfVar7[10] = fVar27 * fVar45;
              pfVar7[0xb] = fStack_d8 - fVar31;
              pfVar7[0xc] = fVar73 * fVar48;
              pfVar7[0xd] = fVar25 * fVar48;
              pfVar7[0xe] = fVar136 * fVar48;
              pfVar7[0xf] = fStack_d4 - fVar40;
              lVar8 = lVar11 + 4;
              uVar56 = lVar11 + 8;
              pfVar7 = pfVar7 + 0x10;
              uVar102 = uVar102 - 4;
              lVar11 = lVar8;
              pauVar4 = pauVar4 + 1;
            } while (uVar56 <= param_3);
          }
          pauVar4 = (undefined1 (*) [16])(*pauVar5 + lVar8 * 4);
          pfVar7 = param_2 + lVar8 * 4;
          uVar102 = param_3 - lVar8;
SUB_10a00935c:
          if (uVar102 != 0) {
            pfVar7 = pfVar7 + 3;
            uVar16 = NEON_fmov(0xbf800000,4);
            pauVar5 = pauVar4;
            do {
              pauVar4 = (undefined1 (*) [16])(*pauVar5 + 4);
              uVar43 = *(uint *)*pauVar5;
              fVar13 = (float)(uVar43 >> 0x14 & 0x3ff) * 0.0009775171;
              uVar15 = NEON_ucvtf(CONCAT44(uVar43 >> 10,uVar43) & 0x3ff000003ff,4);
              fVar55 = (float)uVar15 * 0.0009775171;
              fVar34 = (float)((ulong)uVar15 >> 0x20) * 0.0009775171;
              fVar73 = fVar55 + fVar55 + (float)uVar16;
              fVar34 = fVar34 + fVar34 + (float)((ulong)uVar16 >> 0x20);
              fVar55 = -1.0;
              fVar13 = fVar13 + fVar13 + -1.0;
              fVar71 = fVar13 * fVar13 + fVar73 * fVar73 + fVar34 * fVar34;
              if (2.0 <= fVar71) {
                uVar15 = 0;
                fVar13 = 0.0;
              }
              else {
                fVar32 = SQRT(2.0 - fVar71);
                fVar55 = 1.0 - fVar71;
                uVar15 = CONCAT44(fVar34 * fVar32,fVar73 * fVar32);
                fVar13 = fVar13 * fVar32;
              }
              *(undefined8 *)(pfVar7 + -3) = uVar15;
              pfVar7[-1] = fVar13;
              *pfVar7 = fVar55;
              pfVar7 = pfVar7 + 4;
              uVar102 = uVar102 - 1;
              pauVar5 = pauVar4;
            } while (uVar102 != 0);
          }
          return pauVar4;
        }
        if (param_4 == 5) {
          if (param_3 < 4) {
            lVar8 = 0;
          }
          else {
            auVar17 = NEON_fmov(0xbf800000,4);
            auVar18 = NEON_fmov(0x3f800000,4);
            auVar75 = NEON_fmov(0xc0c00000,4);
            lVar11 = 0;
            pfVar7 = param_2;
            pauVar4 = pauVar5;
            do {
              auVar58 = *pauVar4;
              auVar110._0_6_ =
                   CONCAT15(auVar58[5],CONCAT14(auVar58[4],(uint)(auVar58._0_2_ & 0x3ff))) &
                   0x3ffffffffff;
              auVar110._6_2_ = 0;
              auVar110[8] = auVar58[8];
              auVar110[9] = auVar58[9] & 3;
              auVar110._10_2_ = 0;
              auVar110[0xc] = auVar58[0xc];
              auVar110[0xd] = auVar58[0xd] & 3;
              auVar110._14_2_ = 0;
              uVar43 = auVar58._4_4_ >> 10;
              uVar47 = auVar58._8_4_ >> 10;
              uVar51 = auVar58._12_4_ >> 10;
              auVar118._0_6_ =
                   CONCAT15((char)(uVar43 >> 8),
                            CONCAT14((char)uVar43,(uint)((ushort)(auVar58._0_4_ >> 10) & 0x3ff))) &
                   0x3ffffffffff;
              auVar118._6_2_ = 0;
              auVar118[8] = (undefined1)uVar47;
              auVar118[9] = (byte)(uVar47 >> 8) & 3;
              auVar118._10_2_ = 0;
              auVar118[0xc] = (undefined1)uVar51;
              auVar118[0xd] = (byte)(uVar51 >> 8) & 3;
              auVar118._14_2_ = 0;
              auVar108._0_8_ =
                   CONCAT44(auVar58._4_4_ >> 0x14,auVar58._0_4_ >> 0x14) & 0xfffff3fffffff3ff;
              auVar108._8_4_ = auVar58._8_4_ >> 0x14 & 0xfffff3ff;
              auVar108._12_4_ = auVar58._12_4_ >> 0x14 & 0xfffff3ff;
              auVar63 = NEON_ucvtf(auVar110,4);
              auVar119 = NEON_ucvtf(auVar118,4);
              auVar58 = NEON_ucvtf(auVar108,4);
              fVar41 = auVar17._0_4_;
              fVar49 = fVar41 + auVar63._0_4_ * 0.0009775171 * 2.0;
              fVar44 = auVar17._4_4_;
              fVar52 = fVar44 + auVar63._4_4_ * 0.0009775171 * 2.0;
              fVar45 = auVar17._8_4_;
              fVar48 = auVar17._12_4_;
              fVar64 = fVar45 + auVar63._8_4_ * 0.0009775171 * 2.0;
              fVar67 = fVar48 + auVar63._12_4_ * 0.0009775171 * 2.0;
              fVar29 = fVar41 + auVar119._0_4_ * 0.0009775171 * 2.0;
              fVar162 = fVar44 + auVar119._4_4_ * 0.0009775171 * 2.0;
              fVar31 = fVar45 + auVar119._8_4_ * 0.0009775171 * 2.0;
              fVar40 = fVar48 + auVar119._12_4_ * 0.0009775171 * 2.0;
              fVar41 = fVar41 + auVar58._0_4_ * 0.0009775171 * 2.0;
              fVar44 = fVar44 + auVar58._4_4_ * 0.0009775171 * 2.0;
              fVar45 = fVar45 + auVar58._8_4_ * 0.0009775171 * 2.0;
              fVar48 = fVar48 + auVar58._12_4_ * 0.0009775171 * 2.0;
              fVar71 = (fVar49 * fVar49 + fVar29 * fVar29 + fVar41 * fVar41) * 0.17157288;
              fVar53 = (fVar52 * fVar52 + fVar162 * fVar162 + fVar44 * fVar44) * 0.17157288;
              fVar95 = (fVar64 * fVar64 + fVar31 * fVar31 + fVar45 * fVar45) * 0.17157288;
              fVar27 = (fVar67 * fVar67 + fVar40 * fVar40 + fVar48 * fVar48) * 0.17157288;
              fVar13 = auVar18._0_4_;
              fVar55 = auVar18._4_4_;
              fVar34 = auVar18._8_4_;
              fVar73 = auVar18._12_4_;
              fVar69 = fVar13 / ((fVar71 + fVar13) * (fVar71 + fVar13));
              fVar72 = fVar55 / ((fVar53 + fVar55) * (fVar53 + fVar55));
              fVar78 = fVar34 / ((fVar95 + fVar34) * (fVar95 + fVar34));
              fVar79 = fVar73 / ((fVar27 + fVar73) * (fVar27 + fVar73));
              fVar32 = (fVar13 - fVar71) * 1.6568543 * fVar69;
              fVar25 = (fVar55 - fVar53) * 1.6568543 * fVar72;
              fVar65 = (fVar34 - fVar95) * 1.6568543 * fVar78;
              fVar136 = (fVar73 - fVar27) * 1.6568543 * fVar79;
              *pfVar7 = fVar49 * fVar32;
              pfVar7[1] = fVar29 * fVar32;
              pfVar7[2] = fVar41 * fVar32;
              pfVar7[3] = (fVar71 * (fVar71 + auVar75._0_4_) + fVar13) * fVar69;
              pfVar7[4] = fVar52 * fVar25;
              pfVar7[5] = fVar162 * fVar25;
              pfVar7[6] = fVar44 * fVar25;
              pfVar7[7] = (fVar53 * (fVar53 + auVar75._4_4_) + fVar55) * fVar72;
              pfVar7[8] = fVar64 * fVar65;
              pfVar7[9] = fVar31 * fVar65;
              pfVar7[10] = fVar45 * fVar65;
              pfVar7[0xb] = (fVar95 * (fVar95 + auVar75._8_4_) + fVar34) * fVar78;
              pfVar7[0xc] = fVar67 * fVar136;
              pfVar7[0xd] = fVar40 * fVar136;
              pfVar7[0xe] = fVar48 * fVar136;
              pfVar7[0xf] = (fVar27 * (fVar27 + auVar75._12_4_) + fVar73) * fVar79;
              pfVar7 = pfVar7 + 0x10;
              lVar8 = lVar11 + 4;
              uVar102 = lVar11 + 8;
              lVar11 = lVar8;
              pauVar4 = pauVar4 + 1;
            } while (uVar102 <= param_3);
          }
          lVar11 = param_3 - lVar8;
          if (lVar11 != 0) {
            uVar16 = NEON_fmov(0xbf800000,4);
            puVar10 = (uint *)(*pauVar5 + lVar8 * 4);
            pfVar7 = param_2 + lVar8 * 4;
            do {
              uVar43 = *puVar10;
              fVar13 = (float)(uVar43 >> 0x14 & 0x3ff) * 0.0009775171;
              fVar13 = fVar13 + fVar13 + -1.0;
              uVar15 = NEON_ucvtf(CONCAT44(uVar43 >> 10,uVar43) & 0x3ff000003ff,4);
              fVar55 = (float)uVar15 * 0.0009775171;
              fVar34 = (float)((ulong)uVar15 >> 0x20) * 0.0009775171;
              fVar55 = fVar55 + fVar55 + (float)uVar16;
              fVar34 = fVar34 + fVar34 + (float)((ulong)uVar16 >> 0x20);
              fVar73 = (fVar13 * fVar13 + fVar55 * fVar55 + fVar34 * fVar34) * 0.17157288;
              fVar32 = (1.0 - fVar73) * 1.6568543;
              fVar71 = 1.0 / ((fVar73 + 1.0) * (fVar73 + 1.0));
              pfVar7[2] = fVar13 * fVar32 * fVar71;
              pfVar7[3] = ((fVar73 + -6.0) * fVar73 + 1.0) * fVar71;
              *pfVar7 = fVar55 * fVar32 * fVar71;
              pfVar7[1] = fVar34 * fVar32 * fVar71;
              lVar11 = lVar11 + -1;
              puVar10 = puVar10 + 1;
              pfVar7 = pfVar7 + 4;
            } while (lVar11 != 0);
          }
          return pauVar5;
        }
      }
      pauVar5 = (undefined1 (*) [16])&UNK_10f630e62;
      FUN_10a00946c();
      lVar11 = *(long *)*pauVar5;
      if (lVar11 != 0) {
        lVar6 = *(long *)(*pauVar5 + 8);
        lVar8 = lVar11;
        if (lVar6 != lVar11) {
          do {
            lVar6 = lVar6 + -0x10;
            FUN_10a009414();
          } while (lVar6 != lVar11);
          lVar8 = *(long *)*pauVar5;
        }
        *(long *)(*pauVar5 + 8) = lVar11;
        __ZdlPv(lVar8);
      }
      return pauVar5;
    }
    fVar71 = param_1[2];
    fVar13 = param_1[3];
    fVar55 = *param_1;
    fVar73 = param_1[1];
    fVar34 = fVar13 * fVar13 + fVar55 * fVar55 + fVar73 * fVar73 + fVar71 * fVar71;
    if (fVar34 == 0.0) {
      fVar55 = 0.0;
      fVar73 = 0.0;
      fVar71 = 0.0;
      fVar13 = 1.0;
    }
    else {
      fVar34 = 1.0 / SQRT(fVar34);
      fVar13 = fVar13 * fVar34;
      fVar55 = fVar55 * fVar34;
      fVar73 = fVar73 * fVar34;
      fVar71 = fVar71 * fVar34;
    }
    uVar102 = CONCAT44(fVar71,fVar73) ^
              (CONCAT44(fVar71,fVar73) ^ CONCAT44(-fVar71,-fVar73)) &
              CONCAT44(-(uint)(fVar13 < 0.0),-(uint)(fVar13 < 0.0));
    fVar34 = -fVar13;
    fVar73 = -fVar55;
    if (0.0 <= fVar13) {
      fVar34 = fVar13;
      fVar73 = fVar55;
    }
    fVar13 = (float)_atanf();
    fVar71 = (1.0 / SQRT((1.0 - fVar34 * fVar34) + 1e-06)) * fVar13 * 0.63661975;
    fVar55 = fVar73 * fVar71 * 0.5 + 0.5;
    fVar13 = 0.0;
    if (0.0 <= fVar55) {
      fVar13 = fVar55;
    }
    fVar32 = 1.0;
    if (fVar13 <= 1.0) {
      fVar32 = fVar13;
    }
    fVar55 = (float)uVar102 * fVar71;
    fVar71 = (float)(uVar102 >> 0x20) * fVar71;
  }
  else {
    if (iVar14 == 3) {
      fVar34 = param_1[2];
      fVar13 = param_1[3];
      fVar71 = *param_1;
      fVar55 = param_1[1];
      fVar73 = fVar13 * fVar13 + fVar71 * fVar71 + fVar55 * fVar55 + fVar34 * fVar34;
      if (fVar73 == 0.0) {
        fVar71 = 0.0;
        fVar55 = 0.0;
        fVar34 = 0.0;
        fVar13 = 1.0;
      }
      else {
        fVar73 = 1.0 / SQRT(fVar73);
        fVar13 = fVar13 * fVar73;
        fVar71 = fVar71 * fVar73;
        fVar55 = fVar55 * fVar73;
        fVar34 = fVar34 * fVar73;
      }
      fVar73 = -fVar71;
      if (0.0 <= fVar13) {
        fVar73 = fVar71;
      }
      fVar71 = -fVar13;
      if (0.0 <= fVar13) {
        fVar71 = fVar13;
      }
      fVar71 = fVar71 + 1.0;
    }
    else {
      if (iVar14 != 4) {
        if (iVar14 != 5) goto LAB_10a00822c;
        fVar71 = param_1[2];
        fVar13 = param_1[3];
        fVar55 = *param_1;
        fVar73 = param_1[1];
        fVar34 = fVar13 * fVar13 + fVar55 * fVar55 + fVar73 * fVar73 + fVar71 * fVar71;
        if (fVar34 == 0.0) {
          fVar55 = 0.0;
          fVar73 = 0.0;
          fVar71 = 0.0;
          fVar13 = 1.0;
        }
        else {
          fVar34 = 1.0 / SQRT(fVar34);
          fVar13 = fVar13 * fVar34;
          fVar55 = fVar55 * fVar34;
          fVar73 = fVar73 * fVar34;
          fVar71 = fVar71 * fVar34;
        }
        uVar102 = CONCAT44(fVar71,fVar73) ^
                  (CONCAT44(fVar71,fVar73) ^ CONCAT44(-fVar71,-fVar73)) &
                  CONCAT44(-(uint)(fVar13 < 0.0),-(uint)(fVar13 < 0.0));
        fVar34 = -fVar13;
        fVar73 = -fVar55;
        if (0.0 <= fVar13) {
          fVar34 = fVar13;
          fVar73 = fVar55;
        }
        fVar34 = fVar34 + 1.0 + SQRT(fVar34 * 2.0 + 2.0);
        fVar55 = ((fVar73 * 2.4142137) / fVar34) * 0.5 + 0.5;
        fVar13 = 0.0;
        if (0.0 <= fVar55) {
          fVar13 = fVar55;
        }
        fVar55 = 1.0;
        if (fVar13 <= 1.0) {
          fVar55 = fVar13;
        }
        uVar43 = (uint)(fVar55 * 1023.0 + 0.5);
        fVar13 = (((float)uVar102 * 2.4142137) / fVar34) * 0.5 + 0.5;
        fVar55 = (((float)(uVar102 >> 0x20) * 2.4142137) / fVar34) * 0.5 + 0.5;
        iVar14 = -(uint)(fVar13 < 0.0);
        iVar26 = -(uint)(fVar55 < 0.0);
        fVar13 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                                 CONCAT12((byte)((uint)fVar13 >> 0x10) &
                                          ~(byte)((uint)iVar14 >> 0x10),
                                          CONCAT11((byte)((uint)fVar13 >> 8) &
                                                   ~(byte)((uint)iVar14 >> 8),
                                                   SUB41(fVar13,0) & ~(byte)iVar14)));
        uVar102 = CONCAT17((byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                           CONCAT16((byte)((uint)fVar55 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10),
                                    CONCAT15((byte)((uint)fVar55 >> 8) & ~(byte)((uint)iVar26 >> 8),
                                             CONCAT14(SUB41(fVar55,0) & ~(byte)iVar26,fVar13))));
        uVar56 = NEON_fmov(0x3f800000,4);
        uVar102 = uVar102 ^ (uVar102 ^ uVar56) &
                            CONCAT44(-(uint)((float)(uVar56 >> 0x20) < (float)(uVar102 >> 0x20)),
                                     -(uint)((float)uVar56 < fVar13));
        uVar16 = NEON_ushl(CONCAT44((int)(float)(int)((float)(uVar102 >> 0x20) * 1023.0 + 0.5),
                                    (int)(float)(int)((float)uVar102 * 1023.0 + 0.5)),0x140000000a,4
                          );
        uVar47 = (uint)((ulong)uVar16 >> 0x20);
        goto LAB_10a00813c;
      }
      fVar34 = param_1[2];
      fVar13 = param_1[3];
      fVar71 = *param_1;
      fVar55 = param_1[1];
      fVar73 = fVar13 * fVar13 + fVar71 * fVar71 + fVar55 * fVar55 + fVar34 * fVar34;
      if (fVar73 == 0.0) {
        fVar71 = 0.0;
        fVar55 = 0.0;
        fVar34 = 0.0;
        fVar13 = 1.0;
      }
      else {
        fVar73 = 1.0 / SQRT(fVar73);
        fVar13 = fVar13 * fVar73;
        fVar71 = fVar71 * fVar73;
        fVar55 = fVar55 * fVar73;
        fVar34 = fVar34 * fVar73;
      }
      fVar73 = -fVar71;
      if (0.0 <= fVar13) {
        fVar73 = fVar71;
      }
      fVar71 = -fVar13;
      if (0.0 <= fVar13) {
        fVar71 = fVar13;
      }
      fVar71 = SQRT(fVar71 + 1.0);
    }
    fVar71 = 1.0 / fVar71;
    fVar32 = fVar73 * fVar71 * 0.5 + 0.5;
    fVar73 = 0.0;
    if (0.0 <= fVar32) {
      fVar73 = fVar32;
    }
    fVar32 = 1.0;
    if (fVar73 <= 1.0) {
      fVar32 = fVar73;
    }
    fVar55 = (float)((uint)fVar55 ^ ((uint)fVar55 ^ (uint)-fVar55) & -(uint)(fVar13 < 0.0)) * fVar71
    ;
    fVar71 = (float)((uint)fVar34 ^ ((uint)fVar34 ^ (uint)-fVar34) & -(uint)(fVar13 < 0.0)) * fVar71
    ;
  }
  fVar13 = fVar55 * 0.5 + 0.5;
  fVar55 = fVar71 * 0.5 + 0.5;
  iVar14 = -(uint)(fVar13 < 0.0);
  iVar26 = -(uint)(fVar55 < 0.0);
  fVar13 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                           CONCAT12((byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10),
                                    CONCAT11((byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar14 >> 8),
                                             SUB41(fVar13,0) & ~(byte)iVar14)));
  uVar102 = CONCAT17((byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                     CONCAT16((byte)((uint)fVar55 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10),
                              CONCAT15((byte)((uint)fVar55 >> 8) & ~(byte)((uint)iVar26 >> 8),
                                       CONCAT14(SUB41(fVar55,0) & ~(byte)iVar26,fVar13))));
  uVar56 = NEON_fmov(0x3f800000,4);
  uVar102 = uVar102 ^ (uVar102 ^ uVar56) &
                      CONCAT44(-(uint)((float)(uVar56 >> 0x20) < (float)(uVar102 >> 0x20)),
                               -(uint)((float)uVar56 < fVar13));
  uVar16 = NEON_ushl(CONCAT44((int)(float)(int)((float)(uVar102 >> 0x20) * 1023.0 + 0.5),
                              (int)(float)(int)((float)uVar102 * 1023.0 + 0.5)),0x140000000a,4);
  return (undefined1 (*) [16])
         (ulong)((uint)uVar16 | (int)(fVar32 * 1023.0 + 0.5) | (uint)((ulong)uVar16 >> 0x20));
}



/* Entry: 10a008238; end: 10a0082f7;  */

/* WARNING: Possible PIC construction at 0x00010a007224: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a007228) */

undefined1 (*) [16]
FUN_10a008238(undefined1 (*param_1) [16],float *param_2,ulong param_3,int param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  long lVar6;
  float *pfVar7;
  long lVar8;
  float *pfVar9;
  uint *puVar10;
  long lVar11;
  undefined1 (*pauVar12) [16];
  float fVar13;
  int iVar14;
  float extraout_s0;
  int iVar26;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar27;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar25;
  float fVar29;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  int iVar28;
  int iVar30;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar31;
  float fVar32;
  int iVar33;
  float fVar34;
  float extraout_s1;
  float fVar40;
  float fVar41;
  float fVar44;
  float fVar45;
  float fVar48;
  float fVar49;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  int iVar42;
  int iVar46;
  int iVar50;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  uint uVar43;
  uint uVar47;
  uint uVar51;
  undefined1 auVar39 [16];
  float fVar52;
  float fVar53;
  int iVar54;
  float fVar55;
  float extraout_s2;
  float fVar63;
  float fVar64;
  float fVar66;
  float fVar68;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  int iVar65;
  int iVar67;
  int iVar69;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar70;
  float extraout_s3;
  float fVar71;
  float fVar72;
  float fVar77;
  float fVar78;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar79;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar94;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  ulong uVar101;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  ulong uVar102;
  undefined1 auVar103 [12];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar108 [16];
  uint uVar111;
  uint uVar112;
  uint uVar113;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  uint uVar114;
  uint uVar115;
  byte bVar116;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  float fVar136;
  uint uVar137;
  uint uVar138;
  uint uVar145;
  uint uVar146;
  uint uVar147;
  uint uVar148;
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  uint uVar149;
  uint uVar150;
  short sVar151;
  float fVar162;
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined8 uVar168;
  undefined8 uVar169;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined8 uStack_b0;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined8 in_stack_ffffffffffffffb0;
  undefined8 in_stack_ffffffffffffffb8;
  undefined1 auVar107 [16];
  undefined4 uVar152;
  undefined6 uVar153;
  
  fStack_80 = (float)unaff_d13;
  fStack_7c = (float)((ulong)unaff_d13 >> 0x20);
  fStack_78 = (float)unaff_d12;
  fStack_74 = (float)((ulong)unaff_d12 >> 0x20);
  if (param_4 < 3) {
    if (param_4 == 0) {
      if (param_3 < 4) {
        lVar8 = 0;
      }
      else {
        auVar57._8_4_ = 0x2b8cbccc;
        auVar57._0_8_ = 0x2b8cbccc2b8cbccc;
        auVar57._12_4_ = 0x2b8cbccc;
        auVar17 = NEON_fmov(0x3f800000,4);
        auVar18 = ZEXT216(0);
        auVar74 = NEON_fmov(0xbf800000,4);
        auVar80._8_4_ = 0x447fc000;
        auVar80._0_8_ = 0x447fc000447fc000;
        auVar80._12_4_ = 0x447fc000;
        lVar11 = 0;
        pauVar5 = param_1;
        pfVar7 = param_2;
        do {
          fVar94 = *(float *)*pauVar5;
          fVar29 = *(float *)(*pauVar5 + 4);
          fVar70 = *(float *)(*pauVar5 + 8);
          fVar41 = *(float *)(*pauVar5 + 0xc);
          fVar64 = *(float *)pauVar5[1];
          fVar162 = *(float *)(pauVar5[1] + 4);
          fVar32 = *(float *)(pauVar5[1] + 8);
          fVar44 = *(float *)(pauVar5[1] + 0xc);
          fVar27 = *(float *)pauVar5[2];
          fVar31 = *(float *)(pauVar5[2] + 4);
          fVar53 = *(float *)(pauVar5[2] + 8);
          fVar45 = *(float *)(pauVar5[2] + 0xc);
          fVar136 = *(float *)pauVar5[3];
          fVar40 = *(float *)(pauVar5[3] + 4);
          fVar25 = *(float *)(pauVar5[3] + 8);
          fVar48 = *(float *)(pauVar5[3] + 0xc);
          pauVar5 = pauVar5 + 4;
          auVar84._0_4_ = fVar94 * fVar94 + fVar29 * fVar29 + fVar70 * fVar70 + fVar41 * fVar41;
          auVar84._4_4_ = fVar64 * fVar64 + fVar162 * fVar162 + fVar32 * fVar32 + fVar44 * fVar44;
          auVar84._8_4_ = fVar27 * fVar27 + fVar31 * fVar31 + fVar53 * fVar53 + fVar45 * fVar45;
          auVar84._12_4_ = fVar136 * fVar136 + fVar40 * fVar40 + fVar25 * fVar25 + fVar48 * fVar48;
          auVar62 = NEON_fmax(auVar84,auVar57,4);
          fVar13 = auVar17._0_4_ / SQRT(auVar62._0_4_);
          fVar55 = auVar17._4_4_ / SQRT(auVar62._4_4_);
          fVar34 = auVar17._8_4_ / SQRT(auVar62._8_4_);
          fVar72 = auVar17._12_4_ / SQRT(auVar62._12_4_);
          auVar95._0_4_ = -(uint)(0.0 <= fVar70 * fVar13);
          auVar95._4_4_ = -(uint)(0.0 <= fVar32 * fVar55);
          auVar95._8_4_ = -(uint)(0.0 <= fVar53 * fVar34);
          auVar95._12_4_ = -(uint)(0.0 <= fVar25 * fVar72);
          auVar62 = auVar74 ^ (auVar74 ^ auVar17) & auVar95;
          fVar70 = auVar62._0_4_;
          fVar32 = auVar62._4_4_;
          fVar53 = auVar62._8_4_;
          fVar25 = auVar62._12_4_;
          auVar130._0_4_ = fVar41 * fVar13 * fVar70 * 0.5 + 0.5;
          auVar130._4_4_ = fVar44 * fVar55 * fVar32 * 0.5 + 0.5;
          auVar130._8_4_ = fVar45 * fVar34 * fVar53 * 0.5 + 0.5;
          auVar130._12_4_ = fVar48 * fVar72 * fVar25 * 0.5 + 0.5;
          auVar62 = NEON_fmax(auVar130,auVar18,4);
          auVar62 = NEON_fmin(auVar62,auVar17,4);
          auVar139._0_4_ = fVar94 * fVar13 * fVar70 * 0.5 + 0.5;
          auVar139._4_4_ = fVar64 * fVar55 * fVar32 * 0.5 + 0.5;
          auVar139._8_4_ = fVar27 * fVar34 * fVar53 * 0.5 + 0.5;
          auVar139._12_4_ = fVar136 * fVar72 * fVar25 * 0.5 + 0.5;
          auVar131._0_4_ = (int)(auVar62._0_4_ * 1023.0 + 0.5);
          auVar131._4_4_ = (int)(auVar62._4_4_ * 1023.0 + 0.5);
          auVar131._8_4_ = (int)(auVar62._8_4_ * 1023.0 + 0.5);
          auVar131._12_4_ = (int)(auVar62._12_4_ * 1023.0 + 0.5);
          auVar62 = NEON_fmax(auVar139,auVar18,4);
          auVar62 = NEON_fmin(auVar62,auVar17,4);
          auVar140._0_4_ = (int)(auVar62._0_4_ * 1023.0 + 0.5);
          auVar140._4_4_ = (int)(auVar62._4_4_ * 1023.0 + 0.5);
          auVar140._8_4_ = (int)(auVar62._8_4_ * 1023.0 + 0.5);
          auVar140._12_4_ = (int)(auVar62._12_4_ * 1023.0 + 0.5);
          auVar62 = NEON_fmin(auVar131,auVar80,4);
          auVar119 = NEON_fmin(auVar140,auVar80,4);
          auVar85._0_4_ = fVar29 * fVar13 * fVar70 * 0.5 + 0.5;
          auVar85._4_4_ = fVar162 * fVar55 * fVar32 * 0.5 + 0.5;
          auVar85._8_4_ = fVar31 * fVar34 * fVar53 * 0.5 + 0.5;
          auVar85._12_4_ = fVar40 * fVar72 * fVar25 * 0.5 + 0.5;
          iVar33 = (int)auVar62._0_4_;
          iVar42 = (int)auVar62._4_4_;
          iVar46 = (int)auVar62._8_4_;
          iVar50 = (int)auVar62._12_4_;
          auVar62 = NEON_fmax(auVar85,auVar18,4);
          auVar62 = NEON_fmin(auVar62,auVar17,4);
          auVar86._0_4_ = (int)(auVar62._0_4_ * 1023.0 + 0.5);
          auVar86._4_4_ = (int)(auVar62._4_4_ * 1023.0 + 0.5);
          auVar86._8_4_ = (int)(auVar62._8_4_ * 1023.0 + 0.5);
          auVar86._12_4_ = (int)(auVar62._12_4_ * 1023.0 + 0.5);
          auVar62 = NEON_fmin(auVar86,auVar80,4);
          iVar54 = (int)auVar119._0_4_ << 10;
          iVar65 = (int)auVar119._4_4_ << 10;
          iVar67 = (int)auVar119._8_4_ << 10;
          iVar69 = (int)auVar119._12_4_ << 10;
          iVar14 = (int)auVar62._0_4_ << 0x14;
          iVar26 = (int)auVar62._4_4_ << 0x14;
          iVar28 = (int)auVar62._8_4_ << 0x14;
          iVar30 = (int)auVar62._12_4_ << 0x14;
          *(char *)(pfVar7 + 2) = (char)iVar46;
          *(byte *)((long)pfVar7 + 9) = (byte)((uint)iVar67 >> 8) | (byte)((uint)iVar46 >> 8);
          *(byte *)((long)pfVar7 + 10) =
               (byte)((uint)iVar67 >> 0x10) | (byte)((uint)iVar46 >> 0x10) |
               (byte)((uint)iVar28 >> 0x10);
          *(byte *)((long)pfVar7 + 0xb) =
               (byte)((uint)iVar67 >> 0x18) | (byte)((uint)iVar46 >> 0x18) |
               (byte)((uint)iVar28 >> 0x18);
          *(char *)(pfVar7 + 3) = (char)iVar50;
          *(byte *)((long)pfVar7 + 0xd) = (byte)((uint)iVar69 >> 8) | (byte)((uint)iVar50 >> 8);
          *(byte *)((long)pfVar7 + 0xe) =
               (byte)((uint)iVar69 >> 0x10) | (byte)((uint)iVar50 >> 0x10) |
               (byte)((uint)iVar30 >> 0x10);
          *(byte *)((long)pfVar7 + 0xf) =
               (byte)((uint)iVar69 >> 0x18) | (byte)((uint)iVar50 >> 0x18) |
               (byte)((uint)iVar30 >> 0x18);
          *(char *)pfVar7 = (char)iVar33;
          *(byte *)((long)pfVar7 + 1) = (byte)((uint)iVar54 >> 8) | (byte)((uint)iVar33 >> 8);
          *(byte *)((long)pfVar7 + 2) =
               (byte)((uint)iVar54 >> 0x10) | (byte)((uint)iVar33 >> 0x10) |
               (byte)((uint)iVar14 >> 0x10);
          *(byte *)((long)pfVar7 + 3) =
               (byte)((uint)iVar54 >> 0x18) | (byte)((uint)iVar33 >> 0x18) |
               (byte)((uint)iVar14 >> 0x18);
          *(char *)(pfVar7 + 1) = (char)iVar42;
          *(byte *)((long)pfVar7 + 5) = (byte)((uint)iVar65 >> 8) | (byte)((uint)iVar42 >> 8);
          *(byte *)((long)pfVar7 + 6) =
               (byte)((uint)iVar65 >> 0x10) | (byte)((uint)iVar42 >> 0x10) |
               (byte)((uint)iVar26 >> 0x10);
          *(byte *)((long)pfVar7 + 7) =
               (byte)((uint)iVar65 >> 0x18) | (byte)((uint)iVar42 >> 0x18) |
               (byte)((uint)iVar26 >> 0x18);
          lVar8 = lVar11 + 4;
          uVar102 = lVar11 + 8;
          lVar11 = lVar8;
          pfVar7 = pfVar7 + 4;
        } while (uVar102 <= param_3);
      }
      lVar11 = param_3 - lVar8;
      if (lVar11 != 0) {
        pfVar7 = (float *)(param_1[lVar8] + 8);
        uVar102 = NEON_fmov(0x3f800000,4);
        pfVar9 = param_2 + lVar8;
        do {
          fVar70 = *pfVar7;
          fVar13 = pfVar7[1];
          fVar55 = pfVar7[-2];
          fVar34 = pfVar7[-1];
          fVar72 = fVar13 * fVar13 + fVar55 * fVar55 + fVar34 * fVar34 + fVar70 * fVar70;
          if (fVar72 == 0.0) {
            fVar55 = 0.0;
            fVar34 = 0.0;
            fVar70 = 0.0;
            fVar13 = 1.0;
          }
          else {
            fVar72 = 1.0 / SQRT(fVar72);
            fVar13 = fVar13 * fVar72;
            fVar55 = fVar55 * fVar72;
            fVar34 = fVar34 * fVar72;
            fVar70 = fVar70 * fVar72;
          }
          bVar3 = fVar70 < 0.0;
          fVar72 = -fVar13;
          if (!bVar3) {
            fVar72 = fVar13;
          }
          fVar72 = fVar72 * 0.5 + 0.5;
          fVar13 = 0.0;
          if (0.0 <= fVar72) {
            fVar13 = fVar72;
          }
          fVar72 = 1.0;
          if (fVar13 <= 1.0) {
            fVar72 = fVar13;
          }
          uVar101 = CONCAT44(fVar34,fVar55) ^
                    (CONCAT44(fVar34,fVar55) ^ CONCAT44(-fVar34,-fVar55)) &
                    CONCAT44(-(uint)((int)((uint)bVar3 << 0x1f) < 0),
                             -(uint)((int)((uint)bVar3 << 0x1f) < 0));
          fVar13 = (float)uVar101 * 0.5 + 0.5;
          fVar55 = (float)(uVar101 >> 0x20) * 0.5 + 0.5;
          iVar14 = -(uint)(fVar13 < 0.0);
          iVar26 = -(uint)(fVar55 < 0.0);
          fVar13 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                                   CONCAT12((byte)((uint)fVar13 >> 0x10) &
                                            ~(byte)((uint)iVar14 >> 0x10),
                                            CONCAT11((byte)((uint)fVar13 >> 8) &
                                                     ~(byte)((uint)iVar14 >> 8),
                                                     SUB41(fVar13,0) & ~(byte)iVar14)));
          uVar101 = CONCAT17((byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                             CONCAT16((byte)((uint)fVar55 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10),
                                      CONCAT15((byte)((uint)fVar55 >> 8) &
                                               ~(byte)((uint)iVar26 >> 8),
                                               CONCAT14(SUB41(fVar55,0) & ~(byte)iVar26,fVar13))));
          uVar101 = uVar101 ^ (uVar101 ^ uVar102) &
                              CONCAT44(-(uint)((float)(uVar102 >> 0x20) < (float)(uVar101 >> 0x20)),
                                       -(uint)((float)uVar102 < fVar13));
          uVar15 = NEON_ushl(CONCAT44((int)(float)(int)((float)(uVar101 >> 0x20) * 1023.0 + 0.5),
                                      (int)(float)(int)((float)uVar101 * 1023.0 + 0.5)),0x140000000a
                             ,4);
          pfVar7 = pfVar7 + 4;
          *pfVar9 = (float)((uint)uVar15 | (int)(fVar72 * 1023.0 + 0.5) |
                           (uint)((ulong)uVar15 >> 0x20));
          lVar11 = lVar11 + -1;
          pfVar9 = pfVar9 + 1;
        } while (lVar11 != 0);
      }
      return param_1;
    }
    if (param_4 == 1) {
      if (param_3 < 4) {
        lVar8 = 0;
      }
      else {
        auVar21._8_4_ = 0x2b8cbccc;
        auVar21._0_8_ = 0x2b8cbccc2b8cbccc;
        auVar21._12_4_ = 0x2b8cbccc;
        auVar17 = NEON_fmov(0x3f800000,4);
        auVar18 = NEON_fmov(0xbf800000,4);
        auVar75._8_4_ = 0x40000000;
        auVar75._0_8_ = 0x4000000040000000;
        auVar75._12_4_ = 0x40000000;
        auVar74 = NEON_fmov(0x40400000,4);
        lVar11 = 0;
        pauVar5 = param_1;
        pfVar7 = param_2;
        do {
          fVar70 = *(float *)*pauVar5;
          fVar94 = *(float *)(*pauVar5 + 4);
          fVar29 = *(float *)(*pauVar5 + 8);
          fVar41 = *(float *)(*pauVar5 + 0xc);
          fVar32 = *(float *)pauVar5[1];
          fVar64 = *(float *)(pauVar5[1] + 4);
          fVar162 = *(float *)(pauVar5[1] + 8);
          fVar44 = *(float *)(pauVar5[1] + 0xc);
          fVar53 = *(float *)pauVar5[2];
          fVar27 = *(float *)(pauVar5[2] + 4);
          fVar31 = *(float *)(pauVar5[2] + 8);
          fVar45 = *(float *)(pauVar5[2] + 0xc);
          fVar25 = *(float *)pauVar5[3];
          fVar136 = *(float *)(pauVar5[3] + 4);
          fVar40 = *(float *)(pauVar5[3] + 8);
          fVar48 = *(float *)(pauVar5[3] + 0xc);
          pauVar5 = pauVar5 + 4;
          auVar91._0_4_ = fVar70 * fVar70 + fVar94 * fVar94 + fVar29 * fVar29 + fVar41 * fVar41;
          auVar91._4_4_ = fVar32 * fVar32 + fVar64 * fVar64 + fVar162 * fVar162 + fVar44 * fVar44;
          auVar91._8_4_ = fVar53 * fVar53 + fVar27 * fVar27 + fVar31 * fVar31 + fVar45 * fVar45;
          auVar91._12_4_ = fVar25 * fVar25 + fVar136 * fVar136 + fVar40 * fVar40 + fVar48 * fVar48;
          auVar57 = NEON_fmax(auVar91,auVar21,4);
          fVar13 = auVar17._0_4_ / SQRT(auVar57._0_4_);
          fVar55 = auVar17._4_4_ / SQRT(auVar57._4_4_);
          fVar34 = auVar17._8_4_ / SQRT(auVar57._8_4_);
          fVar72 = auVar17._12_4_ / SQRT(auVar57._12_4_);
          auVar99._0_4_ = fVar70 * fVar13;
          auVar99._4_4_ = fVar32 * fVar55;
          auVar99._8_4_ = fVar53 * fVar34;
          auVar99._12_4_ = fVar25 * fVar72;
          auVar134._0_4_ = fVar94 * fVar13;
          auVar134._4_4_ = fVar64 * fVar55;
          auVar134._8_4_ = fVar27 * fVar34;
          auVar134._12_4_ = fVar136 * fVar72;
          auVar144._0_4_ = fVar41 * fVar13;
          auVar144._4_4_ = fVar44 * fVar55;
          auVar144._8_4_ = fVar45 * fVar34;
          auVar144._12_4_ = fVar48 * fVar72;
          auVar92._0_4_ = fVar29 * fVar13;
          auVar92._4_4_ = fVar162 * fVar55;
          auVar92._8_4_ = fVar31 * fVar34;
          auVar92._12_4_ = fVar40 * fVar72;
          iVar14 = -(uint)(ABS(auVar99._0_4_) <= ABS(auVar144._0_4_));
          iVar26 = -(uint)(ABS(auVar99._4_4_) <= ABS(auVar144._4_4_));
          iVar28 = -(uint)(ABS(auVar99._8_4_) <= ABS(auVar144._8_4_));
          iVar30 = -(uint)(ABS(auVar99._12_4_) <= ABS(auVar144._12_4_));
          iVar33 = -(uint)(ABS(auVar134._0_4_) <= ABS(auVar144._0_4_));
          iVar46 = -(uint)(ABS(auVar134._4_4_) <= ABS(auVar144._4_4_));
          iVar54 = -(uint)(ABS(auVar134._8_4_) <= ABS(auVar144._8_4_));
          iVar67 = -(uint)(ABS(auVar134._12_4_) <= ABS(auVar144._12_4_));
          iVar42 = -(uint)(ABS(auVar92._0_4_) <= ABS(auVar144._0_4_));
          iVar50 = -(uint)(ABS(auVar92._4_4_) <= ABS(auVar144._4_4_));
          iVar65 = -(uint)(ABS(auVar92._8_4_) <= ABS(auVar144._8_4_));
          iVar69 = -(uint)(ABS(auVar92._12_4_) <= ABS(auVar144._12_4_));
          auVar106[0] = (byte)iVar42 & (byte)iVar33 & (byte)iVar14;
          auVar106[1] = (byte)((uint)iVar42 >> 8) &
                        (byte)((uint)iVar33 >> 8) & (byte)((uint)iVar14 >> 8);
          auVar106[2] = (byte)((uint)iVar42 >> 0x10) &
                        (byte)((uint)iVar33 >> 0x10) & (byte)((uint)iVar14 >> 0x10);
          auVar106[3] = (byte)((uint)iVar42 >> 0x18) &
                        (byte)((uint)iVar33 >> 0x18) & (byte)((uint)iVar14 >> 0x18);
          auVar106[4] = (byte)iVar50 & (byte)iVar46 & (byte)iVar26;
          auVar106[5] = (byte)((uint)iVar50 >> 8) &
                        (byte)((uint)iVar46 >> 8) & (byte)((uint)iVar26 >> 8);
          auVar106[6] = (byte)((uint)iVar50 >> 0x10) &
                        (byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar26 >> 0x10);
          auVar106[7] = (byte)((uint)iVar50 >> 0x18) &
                        (byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar26 >> 0x18);
          auVar106[8] = (byte)iVar65 & (byte)iVar54 & (byte)iVar28;
          auVar106[9] = (byte)((uint)iVar65 >> 8) &
                        (byte)((uint)iVar54 >> 8) & (byte)((uint)iVar28 >> 8);
          auVar106[10] = (byte)((uint)iVar65 >> 0x10) &
                         (byte)((uint)iVar54 >> 0x10) & (byte)((uint)iVar28 >> 0x10);
          auVar106[0xb] =
               (byte)((uint)iVar65 >> 0x18) &
               (byte)((uint)iVar54 >> 0x18) & (byte)((uint)iVar28 >> 0x18);
          auVar106[0xc] = (byte)iVar69 & (byte)iVar67 & (byte)iVar30;
          auVar106[0xd] =
               (byte)((uint)iVar69 >> 8) & (byte)((uint)iVar67 >> 8) & (byte)((uint)iVar30 >> 8);
          auVar106[0xe] =
               (byte)((uint)iVar69 >> 0x10) &
               (byte)((uint)iVar67 >> 0x10) & (byte)((uint)iVar30 >> 0x10);
          auVar106[0xf] =
               (byte)((uint)iVar69 >> 0x18) &
               (byte)((uint)iVar67 >> 0x18) & (byte)((uint)iVar30 >> 0x18);
          iVar14 = -(uint)(ABS(auVar134._0_4_) <= ABS(auVar99._0_4_));
          iVar26 = -(uint)(ABS(auVar134._4_4_) <= ABS(auVar99._4_4_));
          iVar28 = -(uint)(ABS(auVar134._8_4_) <= ABS(auVar99._8_4_));
          iVar30 = -(uint)(ABS(auVar134._12_4_) <= ABS(auVar99._12_4_));
          iVar33 = -(uint)(ABS(auVar92._0_4_) <= ABS(auVar99._0_4_));
          iVar42 = -(uint)(ABS(auVar92._4_4_) <= ABS(auVar99._4_4_));
          iVar46 = -(uint)(ABS(auVar92._8_4_) <= ABS(auVar99._8_4_));
          iVar50 = -(uint)(ABS(auVar92._12_4_) <= ABS(auVar99._12_4_));
          bVar116 = (byte)iVar33 & (byte)iVar14;
          bVar121 = (byte)((uint)iVar33 >> 8) & (byte)((uint)iVar14 >> 8);
          bVar122 = (byte)iVar42 & (byte)iVar26;
          bVar123 = (byte)((uint)iVar42 >> 8) & (byte)((uint)iVar26 >> 8);
          bVar124 = (byte)iVar46 & (byte)iVar28;
          bVar125 = (byte)((uint)iVar46 >> 8) & (byte)((uint)iVar28 >> 8);
          bVar126 = (byte)iVar50 & (byte)iVar30;
          bVar127 = (byte)((uint)iVar50 >> 8) & (byte)((uint)iVar30 >> 8);
          sVar151 = CONCAT11(bVar121 & ~auVar106[1],bVar116 & ~auVar106[0]);
          uVar152 = CONCAT13(bVar123 & ~auVar106[5],CONCAT12(bVar122 & ~auVar106[4],sVar151));
          uVar153 = CONCAT15(bVar125 & ~auVar106[9],CONCAT14(bVar124 & ~auVar106[8],uVar152));
          auVar160._0_4_ = (int)sVar151;
          auVar160._4_4_ = (int)(short)((uint)uVar152 >> 0x10);
          auVar160._8_4_ = (int)(short)((uint6)uVar153 >> 0x20);
          auVar160._12_4_ =
               (int)(short)(CONCAT17(bVar127 & ~auVar106[0xd],
                                     CONCAT16(bVar126 & ~auVar106[0xc],uVar153)) >> 0x30);
          iVar54 = -(uint)(ABS(auVar92._0_4_) <= ABS(auVar134._0_4_));
          iVar65 = -(uint)(ABS(auVar92._4_4_) <= ABS(auVar134._4_4_));
          iVar67 = -(uint)(ABS(auVar92._8_4_) <= ABS(auVar134._8_4_));
          iVar69 = -(uint)(ABS(auVar92._12_4_) <= ABS(auVar134._12_4_));
          auVar117._0_8_ =
               CONCAT17((byte)((uint)iVar42 >> 0x18) & (byte)((uint)iVar26 >> 0x18) |
                        ~(byte)((uint)iVar65 >> 0x18) | auVar106[7],
                        CONCAT16((byte)((uint)iVar42 >> 0x10) & (byte)((uint)iVar26 >> 0x10) |
                                 ~(byte)((uint)iVar65 >> 0x10) | auVar106[6],
                                 CONCAT15(bVar123 | ~(byte)((uint)iVar65 >> 8) | auVar106[5],
                                          CONCAT14(bVar122 | ~(byte)iVar65 | auVar106[4],
                                                   CONCAT13((byte)((uint)iVar33 >> 0x18) &
                                                            (byte)((uint)iVar14 >> 0x18) |
                                                            ~(byte)((uint)iVar54 >> 0x18) |
                                                            auVar106[3],
                                                            CONCAT12((byte)((uint)iVar33 >> 0x10) &
                                                                     (byte)((uint)iVar14 >> 0x10) |
                                                                     ~(byte)((uint)iVar54 >> 0x10) |
                                                                     auVar106[2],
                                                                     CONCAT11(bVar121 | ~(byte)((
                                                  uint)iVar54 >> 8) | auVar106[1],
                                                  bVar116 | ~(byte)iVar54 | auVar106[0])))))));
          auVar117[8] = bVar124 | ~(byte)iVar67 | auVar106[8];
          auVar117[9] = bVar125 | ~(byte)((uint)iVar67 >> 8) | auVar106[9];
          auVar117[10] = (byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar28 >> 0x10) |
                         ~(byte)((uint)iVar67 >> 0x10) | auVar106[10];
          auVar117[0xb] =
               (byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar28 >> 0x18) |
               ~(byte)((uint)iVar67 >> 0x18) | auVar106[0xb];
          auVar117[0xc] = bVar126 | ~(byte)iVar69 | auVar106[0xc];
          auVar117[0xd] = bVar127 | ~(byte)((uint)iVar69 >> 8) | auVar106[0xd];
          auVar117[0xe] =
               (byte)((uint)iVar50 >> 0x10) & (byte)((uint)iVar30 >> 0x10) |
               ~(byte)((uint)iVar69 >> 0x10) | auVar106[0xe];
          auVar117[0xf] =
               (byte)((uint)iVar50 >> 0x18) & (byte)((uint)iVar30 >> 0x18) |
               ~(byte)((uint)iVar69 >> 0x18) | auVar106[0xf];
          auVar165._8_8_ = auVar117._8_8_;
          auVar165._0_8_ = auVar117._0_8_;
          auVar57 = auVar134 ^ (auVar134 ^ auVar92) & auVar165;
          auVar57 = auVar57 ^ (auVar57 ^ auVar99) & auVar160;
          auVar57 = auVar57 ^ (auVar57 ^ auVar144) & auVar106;
          auVar161._0_4_ = -(uint)(auVar57._0_4_ < 0.0);
          auVar161._4_4_ = -(uint)(auVar57._4_4_ < 0.0);
          auVar161._8_4_ = -(uint)(auVar57._8_4_ < 0.0);
          auVar161._12_4_ = -(uint)(auVar57._12_4_ < 0.0);
          auVar57 = auVar17 ^ (auVar17 ^ auVar18) & auVar161;
          auVar144 = auVar144 ^ (auVar144 ^ auVar99) & auVar106;
          fVar55 = auVar57._0_4_;
          fVar34 = auVar57._4_4_;
          fVar72 = auVar57._8_4_;
          fVar70 = auVar57._12_4_;
          auVar109._0_4_ =
               -(uint)((int)((uint)CONCAT12(auVar106[4] | bVar122,(ushort)(auVar106[0] | bVar116))
                            << 0x1f) < 0);
          auVar109._4_4_ = -(uint)((int)((uint)(auVar106[4] | bVar122) << 0x1f) < 0);
          auVar109._8_4_ = -(uint)((int)((uint)(auVar106[8] | bVar124) << 0x1f) < 0);
          auVar109._12_4_ = -(uint)((int)((uint)(auVar106[0xc] | bVar126) << 0x1f) < 0);
          auVar99 = auVar99 ^ (auVar99 ^ auVar134) & auVar109;
          iVar54 = (int)(float)(int)(auVar144._0_4_ * fVar55 * 511.5 + 511.5);
          iVar65 = (int)(float)(int)(auVar144._4_4_ * fVar34 * 511.5 + 511.5);
          iVar67 = (int)(float)(int)(auVar144._8_4_ * fVar72 * 511.5 + 511.5);
          iVar69 = (int)(float)(int)(auVar144._12_4_ * fVar70 * 511.5 + 511.5);
          auVar92 = auVar92 ^ (auVar92 ^ auVar134 ^ (auVar134 ^ auVar92) & ~auVar117) & ~auVar109;
          auVar57 = auVar17 ^ (auVar17 ^ auVar75) & auVar117;
          fVar13 = (float)CONCAT13(auVar57[3] & ~(byte)((uint)auVar109._0_4_ >> 0x18) |
                                   auVar106[3] & auVar74[3],
                                   CONCAT12(auVar57[2] & ~(byte)((uint)auVar109._0_4_ >> 0x10) |
                                            auVar106[2] & auVar74[2],
                                            CONCAT11(auVar57[1] & ~(byte)((uint)auVar109._0_4_ >> 8)
                                                     | auVar106[1] & auVar74[1],
                                                     auVar57[0] & ~(byte)auVar109._0_4_ |
                                                     auVar106[0] & auVar74[0])));
          auVar103._0_8_ =
               CONCAT17(auVar57[7] & ~(byte)((uint)auVar109._4_4_ >> 0x18) |
                        auVar106[7] & auVar74[7],
                        CONCAT16(auVar57[6] & ~(byte)((uint)auVar109._4_4_ >> 0x10) |
                                 auVar106[6] & auVar74[6],
                                 CONCAT15(auVar57[5] & ~(byte)((uint)auVar109._4_4_ >> 8) |
                                          auVar106[5] & auVar74[5],
                                          CONCAT14(auVar57[4] & ~(byte)auVar109._4_4_ |
                                                   auVar106[4] & auVar74[4],fVar13))));
          auVar103[8] = auVar57[8] & ~(byte)auVar109._8_4_ | auVar106[8] & auVar74[8];
          auVar103[9] = auVar57[9] & ~(byte)((uint)auVar109._8_4_ >> 8) | auVar106[9] & auVar74[9];
          auVar103[10] = auVar57[10] & ~(byte)((uint)auVar109._8_4_ >> 0x10) |
                         auVar106[10] & auVar74[10];
          auVar103[0xb] =
               auVar57[0xb] & ~(byte)((uint)auVar109._8_4_ >> 0x18) | auVar106[0xb] & auVar74[0xb];
          auVar107[0xc] = auVar57[0xc] & ~(byte)auVar109._12_4_ | auVar106[0xc] & auVar74[0xc];
          auVar107._0_12_ = auVar103;
          auVar107[0xd] =
               auVar57[0xd] & ~(byte)((uint)auVar109._12_4_ >> 8) | auVar106[0xd] & auVar74[0xd];
          auVar107[0xe] =
               auVar57[0xe] & ~(byte)((uint)auVar109._12_4_ >> 0x10) | auVar106[0xe] & auVar74[0xe];
          auVar107[0xf] =
               auVar57[0xf] & ~(byte)((uint)auVar109._12_4_ >> 0x18) | auVar106[0xf] & auVar74[0xf];
          iVar33 = (int)(float)(int)(auVar99._0_4_ * fVar55 * 511.5 + 511.5) << 10;
          iVar42 = (int)(float)(int)(auVar99._4_4_ * fVar34 * 511.5 + 511.5) << 10;
          iVar46 = (int)(float)(int)(auVar99._8_4_ * fVar72 * 511.5 + 511.5) << 10;
          iVar50 = (int)(float)(int)(auVar99._12_4_ * fVar70 * 511.5 + 511.5) << 10;
          iVar14 = (int)(float)(int)(auVar92._0_4_ * fVar55 * 511.5 + 511.5) << 0x14;
          iVar26 = (int)(float)(int)(auVar92._4_4_ * fVar34 * 511.5 + 511.5) << 0x14;
          iVar28 = (int)(float)(int)(auVar92._8_4_ * fVar72 * 511.5 + 511.5) << 0x14;
          iVar30 = (int)(float)(int)(auVar92._12_4_ * fVar70 * 511.5 + 511.5) << 0x14;
          *(char *)(pfVar7 + 2) = (char)iVar67;
          *(byte *)((long)pfVar7 + 9) = (byte)((uint)iVar67 >> 8) | (byte)((uint)iVar46 >> 8);
          *(byte *)((long)pfVar7 + 10) =
               (byte)((uint)iVar67 >> 0x10) | (byte)((uint)iVar46 >> 0x10) |
               (byte)((uint)iVar28 >> 0x10);
          *(byte *)((long)pfVar7 + 0xb) =
               (byte)((uint)((int)auVar103._8_4_ << 0x1e) >> 0x18) | (byte)((uint)iVar67 >> 0x18) |
               (byte)((uint)iVar46 >> 0x18) | (byte)((uint)iVar28 >> 0x18);
          *(char *)(pfVar7 + 3) = (char)iVar69;
          *(byte *)((long)pfVar7 + 0xd) = (byte)((uint)iVar69 >> 8) | (byte)((uint)iVar50 >> 8);
          *(byte *)((long)pfVar7 + 0xe) =
               (byte)((uint)iVar69 >> 0x10) | (byte)((uint)iVar50 >> 0x10) |
               (byte)((uint)iVar30 >> 0x10);
          *(byte *)((long)pfVar7 + 0xf) =
               (byte)((uint)((int)auVar107._12_4_ << 0x1e) >> 0x18) | (byte)((uint)iVar69 >> 0x18) |
               (byte)((uint)iVar50 >> 0x18) | (byte)((uint)iVar30 >> 0x18);
          *(char *)pfVar7 = (char)iVar54;
          *(byte *)((long)pfVar7 + 1) = (byte)((uint)iVar54 >> 8) | (byte)((uint)iVar33 >> 8);
          *(byte *)((long)pfVar7 + 2) =
               (byte)((uint)iVar54 >> 0x10) | (byte)((uint)iVar33 >> 0x10) |
               (byte)((uint)iVar14 >> 0x10);
          *(byte *)((long)pfVar7 + 3) =
               (byte)((uint)((int)fVar13 << 0x1e) >> 0x18) | (byte)((uint)iVar54 >> 0x18) |
               (byte)((uint)iVar33 >> 0x18) | (byte)((uint)iVar14 >> 0x18);
          *(char *)(pfVar7 + 1) = (char)iVar65;
          *(byte *)((long)pfVar7 + 5) = (byte)((uint)iVar65 >> 8) | (byte)((uint)iVar42 >> 8);
          *(byte *)((long)pfVar7 + 6) =
               (byte)((uint)iVar65 >> 0x10) | (byte)((uint)iVar42 >> 0x10) |
               (byte)((uint)iVar26 >> 0x10);
          *(byte *)((long)pfVar7 + 7) =
               (byte)((uint)((int)(float)((ulong)auVar103._0_8_ >> 0x20) << 0x1e) >> 0x18) |
               (byte)((uint)iVar65 >> 0x18) | (byte)((uint)iVar42 >> 0x18) |
               (byte)((uint)iVar26 >> 0x18);
          lVar8 = lVar11 + 4;
          uVar102 = lVar11 + 8;
          lVar11 = lVar8;
          pfVar7 = pfVar7 + 4;
        } while (uVar102 <= param_3);
      }
      lVar11 = param_3 - lVar8;
      if (lVar11 != 0) {
        pauVar5 = param_1 + lVar8;
        pfVar7 = param_2 + lVar8;
        do {
          param_1 = (undefined1 (*) [16])&stack0xffffffffffffffb0;
          func_0x00010a005e80(&stack0xffffffffffffffb0,pauVar5);
          *pfVar7 = (float)((int)((float)in_stack_ffffffffffffffb0 * 511.5 + 511.5) |
                            (int)(SUB84(in_stack_ffffffffffffffb0,4) * 511.5 + 511.5) << 10 |
                            SUB84(in_stack_ffffffffffffffb8,4) << 0x1e |
                           (int)((float)in_stack_ffffffffffffffb8 * 511.5 + 511.5) << 0x14);
          pauVar5 = pauVar5 + 1;
          lVar11 = lVar11 + -1;
          pfVar7 = pfVar7 + 1;
        } while (lVar11 != 0);
      }
      return param_1;
    }
    if (param_4 == 2) {
      pauVar5 = param_1;
      if (param_3 < 4) {
        lVar8 = 0;
      }
      else {
        auVar17 = NEON_fmov(0x3f800000,4);
        fStack_b8 = auVar17._8_4_;
        fStack_b4 = auVar17._12_4_;
        fStack_c0 = auVar17._0_4_;
        fStack_bc = auVar17._4_4_;
        auVar18 = NEON_fmov(0xbf800000,4);
        lVar11 = 0;
        pauVar4 = param_1;
        pfVar7 = param_2;
        do {
          fVar13 = *(float *)*pauVar4;
          fVar31 = *(float *)(*pauVar4 + 4);
          fVar52 = *(float *)(*pauVar4 + 8);
          fVar55 = *(float *)(*pauVar4 + 0xc);
          fVar25 = *(float *)pauVar4[1];
          fVar40 = *(float *)(pauVar4[1] + 4);
          fVar63 = *(float *)(pauVar4[1] + 8);
          fVar34 = *(float *)(pauVar4[1] + 0xc);
          fVar27 = *(float *)pauVar4[2];
          fVar44 = *(float *)(pauVar4[2] + 4);
          fVar66 = *(float *)(pauVar4[2] + 8);
          fVar72 = *(float *)(pauVar4[2] + 0xc);
          fVar29 = *(float *)pauVar4[3];
          fVar48 = *(float *)(pauVar4[3] + 4);
          fVar68 = *(float *)(pauVar4[3] + 8);
          fVar70 = *(float *)(pauVar4[3] + 0xc);
          pauVar4 = pauVar4 + 4;
          auVar73._0_4_ = fVar13 * fVar13 + fVar31 * fVar31 + fVar52 * fVar52 + fVar55 * fVar55;
          auVar73._4_4_ = fVar25 * fVar25 + fVar40 * fVar40 + fVar63 * fVar63 + fVar34 * fVar34;
          auVar73._8_4_ = fVar27 * fVar27 + fVar44 * fVar44 + fVar66 * fVar66 + fVar72 * fVar72;
          auVar73._12_4_ = fVar29 * fVar29 + fVar48 * fVar48 + fVar68 * fVar68 + fVar70 * fVar70;
          auVar2._8_4_ = 0x2b8cbccc;
          auVar2._0_8_ = 0x2b8cbccc2b8cbccc;
          auVar2._12_4_ = 0x2b8cbccc;
          auVar74 = NEON_fmax(auVar73,auVar2,4);
          fVar71 = fStack_c0 / SQRT(auVar74._0_4_);
          fVar77 = fStack_bc / SQRT(auVar74._4_4_);
          fVar78 = fStack_b8 / SQRT(auVar74._8_4_);
          fVar79 = fStack_b4 / SQRT(auVar74._12_4_);
          fVar32 = ABS(fVar55 * fVar71);
          fVar41 = ABS(fVar34 * fVar77);
          fVar45 = ABS(fVar72 * fVar78);
          fVar49 = ABS(fVar70 * fVar79);
          uStack_120 = auVar18._0_4_;
          uStack_11c = auVar18._4_4_;
          uStack_118 = auVar18._8_4_;
          uStack_114 = auVar18._12_4_;
          fVar55 = (float)((uint)fStack_c0 ^
                          ((uint)fStack_c0 ^ uStack_120) & -(uint)(fVar55 * fVar71 < 0.0));
          fVar94 = (float)((uint)fStack_bc ^
                          ((uint)fStack_bc ^ uStack_11c) & -(uint)(fVar34 * fVar77 < 0.0));
          fVar136 = (float)((uint)fStack_b8 ^
                           ((uint)fStack_b8 ^ uStack_118) & -(uint)(fVar72 * fVar78 < 0.0));
          fVar162 = (float)((uint)fStack_b4 ^
                           ((uint)fStack_b4 ^ uStack_114) & -(uint)(fVar70 * fVar79 < 0.0));
          fVar34 = fStack_c0 - fVar32 * fVar32;
          fVar70 = fStack_bc - fVar41 * fVar41;
          fVar53 = fStack_c0 / SQRT(fVar34 + 1e-06);
          fVar64 = fStack_bc / SQRT(fVar70 + 1e-06);
          fVar72 = (float)_atanf();
          fVar34 = (float)_atanf(CONCAT44((fVar70 * fVar64) / fVar41,(fVar34 * fVar53) / fVar32));
          fVar70 = (float)_atanf();
          fVar32 = (float)_atanf();
          auVar1._8_4_ = 0x447fc000;
          auVar1._0_8_ = 0x447fc000447fc000;
          auVar1._12_4_ = 0x447fc000;
          fVar53 = fVar53 * fVar34 * 0.63661975;
          fVar64 = fVar64 * fVar72 * 0.63661975;
          fVar34 = (fStack_b8 / SQRT((fStack_b8 - fVar45 * fVar45) + 1e-06)) * fVar70 * 0.63661975;
          fVar72 = (fStack_b4 / SQRT((fStack_b4 - fVar49 * fVar49) + 1e-06)) * fVar32 * 0.63661975;
          auVar35._0_4_ = fVar13 * fVar71 * fVar55 * fVar53 * 0.5 + 0.5;
          auVar35._4_4_ = fVar25 * fVar77 * fVar94 * fVar64 * 0.5 + 0.5;
          auVar35._8_4_ = fVar27 * fVar78 * fVar136 * fVar34 * 0.5 + 0.5;
          auVar35._12_4_ = fVar29 * fVar79 * fVar162 * fVar72 * 0.5 + 0.5;
          auVar62 = ZEXT216(0);
          auVar74 = NEON_fmax(auVar35,auVar62,4);
          auVar74 = NEON_fmin(auVar74,auVar17,4);
          auVar36._0_4_ = (int)(auVar74._0_4_ * 1023.0 + 0.5);
          auVar36._4_4_ = (int)(auVar74._4_4_ * 1023.0 + 0.5);
          auVar36._8_4_ = (int)(auVar74._8_4_ * 1023.0 + 0.5);
          auVar36._12_4_ = (int)(auVar74._12_4_ * 1023.0 + 0.5);
          auVar56._0_4_ = fVar31 * fVar71 * fVar55 * fVar53 * 0.5 + 0.5;
          auVar56._4_4_ = fVar40 * fVar77 * fVar94 * fVar64 * 0.5 + 0.5;
          auVar56._8_4_ = fVar44 * fVar78 * fVar136 * fVar34 * 0.5 + 0.5;
          auVar56._12_4_ = fVar48 * fVar79 * fVar162 * fVar72 * 0.5 + 0.5;
          auVar74 = NEON_fmax(auVar56,auVar62,4);
          auVar57 = NEON_fmin(auVar74,auVar17,4);
          auVar74 = NEON_fmin(auVar36,auVar1,4);
          auVar58._0_4_ = (int)(auVar57._0_4_ * 1023.0 + 0.5);
          auVar58._4_4_ = (int)(auVar57._4_4_ * 1023.0 + 0.5);
          auVar58._8_4_ = (int)(auVar57._8_4_ * 1023.0 + 0.5);
          auVar58._12_4_ = (int)(auVar57._12_4_ * 1023.0 + 0.5);
          auVar57 = NEON_fmin(auVar58,auVar1,4);
          auVar19._0_4_ = fVar52 * fVar71 * fVar55 * fVar53 * 0.5 + 0.5;
          auVar19._4_4_ = fVar63 * fVar77 * fVar94 * fVar64 * 0.5 + 0.5;
          auVar19._8_4_ = fVar66 * fVar78 * fVar136 * fVar34 * 0.5 + 0.5;
          auVar19._12_4_ = fVar68 * fVar79 * fVar162 * fVar72 * 0.5 + 0.5;
          iVar33 = (int)auVar74._0_4_;
          iVar42 = (int)auVar74._4_4_;
          iVar46 = (int)auVar74._8_4_;
          iVar50 = (int)auVar74._12_4_;
          auVar74 = NEON_fmax(auVar19,auVar62,4);
          auVar74 = NEON_fmin(auVar74,auVar17,4);
          auVar20._0_4_ = (int)(auVar74._0_4_ * 1023.0 + 0.5);
          auVar20._4_4_ = (int)(auVar74._4_4_ * 1023.0 + 0.5);
          auVar20._8_4_ = (int)(auVar74._8_4_ * 1023.0 + 0.5);
          auVar20._12_4_ = (int)(auVar74._12_4_ * 1023.0 + 0.5);
          auVar74 = NEON_fmin(auVar20,auVar1,4);
          iVar54 = (int)auVar57._0_4_ << 10;
          iVar65 = (int)auVar57._4_4_ << 10;
          iVar67 = (int)auVar57._8_4_ << 10;
          iVar69 = (int)auVar57._12_4_ << 10;
          iVar14 = (int)auVar74._0_4_ << 0x14;
          iVar26 = (int)auVar74._4_4_ << 0x14;
          iVar28 = (int)auVar74._8_4_ << 0x14;
          iVar30 = (int)auVar74._12_4_ << 0x14;
          *(char *)(pfVar7 + 2) = (char)iVar46;
          *(byte *)((long)pfVar7 + 9) = (byte)((uint)iVar67 >> 8) | (byte)((uint)iVar46 >> 8);
          *(byte *)((long)pfVar7 + 10) =
               (byte)((uint)iVar67 >> 0x10) | (byte)((uint)iVar46 >> 0x10) |
               (byte)((uint)iVar28 >> 0x10);
          *(byte *)((long)pfVar7 + 0xb) =
               (byte)((uint)iVar67 >> 0x18) | (byte)((uint)iVar46 >> 0x18) |
               (byte)((uint)iVar28 >> 0x18);
          *(char *)(pfVar7 + 3) = (char)iVar50;
          *(byte *)((long)pfVar7 + 0xd) = (byte)((uint)iVar69 >> 8) | (byte)((uint)iVar50 >> 8);
          *(byte *)((long)pfVar7 + 0xe) =
               (byte)((uint)iVar69 >> 0x10) | (byte)((uint)iVar50 >> 0x10) |
               (byte)((uint)iVar30 >> 0x10);
          *(byte *)((long)pfVar7 + 0xf) =
               (byte)((uint)iVar69 >> 0x18) | (byte)((uint)iVar50 >> 0x18) |
               (byte)((uint)iVar30 >> 0x18);
          *(char *)pfVar7 = (char)iVar33;
          *(byte *)((long)pfVar7 + 1) = (byte)((uint)iVar54 >> 8) | (byte)((uint)iVar33 >> 8);
          *(byte *)((long)pfVar7 + 2) =
               (byte)((uint)iVar54 >> 0x10) | (byte)((uint)iVar33 >> 0x10) |
               (byte)((uint)iVar14 >> 0x10);
          *(byte *)((long)pfVar7 + 3) =
               (byte)((uint)iVar54 >> 0x18) | (byte)((uint)iVar33 >> 0x18) |
               (byte)((uint)iVar14 >> 0x18);
          *(char *)(pfVar7 + 1) = (char)iVar42;
          *(byte *)((long)pfVar7 + 5) = (byte)((uint)iVar65 >> 8) | (byte)((uint)iVar42 >> 8);
          *(byte *)((long)pfVar7 + 6) =
               (byte)((uint)iVar65 >> 0x10) | (byte)((uint)iVar42 >> 0x10) |
               (byte)((uint)iVar26 >> 0x10);
          *(byte *)((long)pfVar7 + 7) =
               (byte)((uint)iVar65 >> 0x18) | (byte)((uint)iVar42 >> 0x18) |
               (byte)((uint)iVar26 >> 0x18);
          lVar8 = lVar11 + 4;
          uVar102 = lVar11 + 8;
          lVar11 = lVar8;
          pfVar7 = pfVar7 + 4;
        } while (uVar102 <= param_3);
      }
      lVar11 = param_3 - lVar8;
      if (lVar11 != 0) {
        pfVar7 = (float *)(param_1[lVar8] + 8);
        uVar102 = NEON_fmov(0x3f800000,4);
        pfVar9 = param_2 + lVar8;
        do {
          fVar70 = *pfVar7;
          fVar13 = pfVar7[1];
          fVar55 = pfVar7[-2];
          fVar72 = pfVar7[-1];
          fVar34 = fVar13 * fVar13 + fVar55 * fVar55 + fVar72 * fVar72 + fVar70 * fVar70;
          if (fVar34 == 0.0) {
            fVar55 = 0.0;
            fVar72 = 0.0;
            fVar70 = 0.0;
            fVar13 = 1.0;
          }
          else {
            fVar34 = 1.0 / SQRT(fVar34);
            fVar13 = fVar13 * fVar34;
            fVar55 = fVar55 * fVar34;
            fVar72 = fVar72 * fVar34;
            fVar70 = fVar70 * fVar34;
          }
          pfVar7 = pfVar7 + 4;
          uVar101 = CONCAT44(fVar70,fVar72) ^
                    (CONCAT44(fVar70,fVar72) ^ CONCAT44(-fVar70,-fVar72)) &
                    CONCAT44(-(uint)(fVar13 < 0.0),-(uint)(fVar13 < 0.0));
          fVar34 = -fVar13;
          fVar72 = -fVar55;
          if (0.0 <= fVar13) {
            fVar34 = fVar13;
            fVar72 = fVar55;
          }
          fVar13 = (float)_atanf();
          fVar55 = (1.0 / SQRT((1.0 - fVar34 * fVar34) + 1e-06)) * fVar13 * 0.63661975;
          fVar34 = fVar72 * fVar55 * 0.5 + 0.5;
          fVar13 = 0.0;
          if (0.0 <= fVar34) {
            fVar13 = fVar34;
          }
          fVar34 = 1.0;
          if (fVar13 <= 1.0) {
            fVar34 = fVar13;
          }
          fVar13 = (float)uVar101 * fVar55 * 0.5 + 0.5;
          fVar55 = (float)(uVar101 >> 0x20) * fVar55 * 0.5 + 0.5;
          iVar14 = -(uint)(fVar13 < 0.0);
          iVar26 = -(uint)(fVar55 < 0.0);
          fVar13 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                                   CONCAT12((byte)((uint)fVar13 >> 0x10) &
                                            ~(byte)((uint)iVar14 >> 0x10),
                                            CONCAT11((byte)((uint)fVar13 >> 8) &
                                                     ~(byte)((uint)iVar14 >> 8),
                                                     SUB41(fVar13,0) & ~(byte)iVar14)));
          uVar101 = CONCAT17((byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                             CONCAT16((byte)((uint)fVar55 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10),
                                      CONCAT15((byte)((uint)fVar55 >> 8) &
                                               ~(byte)((uint)iVar26 >> 8),
                                               CONCAT14(SUB41(fVar55,0) & ~(byte)iVar26,fVar13))));
          uVar101 = uVar101 ^ (uVar101 ^ uVar102) &
                              CONCAT44(-(uint)((float)(uVar102 >> 0x20) < (float)(uVar101 >> 0x20)),
                                       -(uint)((float)uVar102 < fVar13));
          uVar15 = NEON_ushl(CONCAT44((int)(float)(int)((float)(uVar101 >> 0x20) * 1023.0 + 0.5),
                                      (int)(float)(int)((float)uVar101 * 1023.0 + 0.5)),0x140000000a
                             ,4);
          *pfVar9 = (float)((uint)uVar15 | (int)(fVar34 * 1023.0 + 0.5) |
                           (uint)((ulong)uVar15 >> 0x20));
          lVar11 = lVar11 + -1;
          pfVar9 = pfVar9 + 1;
        } while (lVar11 != 0);
      }
      return pauVar5;
    }
  }
  else {
    if (param_4 == 3) {
      if (param_3 < 4) {
        lVar8 = 0;
      }
      else {
        auVar17._8_4_ = 0x2b8cbccc;
        auVar17._0_8_ = 0x2b8cbccc2b8cbccc;
        auVar17._12_4_ = 0x2b8cbccc;
        auVar18 = NEON_fmov(0x3f800000,4);
        auVar74 = ZEXT216(0);
        auVar57 = NEON_fmov(0xbf800000,4);
        auVar62._8_4_ = 0x447fc000;
        auVar62._0_8_ = 0x447fc000447fc000;
        auVar62._12_4_ = 0x447fc000;
        lVar11 = 0;
        pauVar5 = param_1;
        pfVar7 = param_2;
        do {
          fVar29 = *(float *)*pauVar5;
          fVar41 = *(float *)(*pauVar5 + 4);
          fVar49 = *(float *)(*pauVar5 + 8);
          fVar68 = *(float *)(*pauVar5 + 0xc);
          fVar162 = *(float *)pauVar5[1];
          fVar44 = *(float *)(pauVar5[1] + 4);
          fVar52 = *(float *)(pauVar5[1] + 8);
          fVar71 = *(float *)(pauVar5[1] + 0xc);
          fVar31 = *(float *)pauVar5[2];
          fVar45 = *(float *)(pauVar5[2] + 4);
          fVar63 = *(float *)(pauVar5[2] + 8);
          fVar77 = *(float *)(pauVar5[2] + 0xc);
          fVar40 = *(float *)pauVar5[3];
          fVar48 = *(float *)(pauVar5[3] + 4);
          fVar66 = *(float *)(pauVar5[3] + 8);
          fVar78 = *(float *)(pauVar5[3] + 0xc);
          pauVar5 = pauVar5 + 4;
          auVar119._0_4_ = fVar29 * fVar29 + fVar41 * fVar41 + fVar49 * fVar49 + fVar68 * fVar68;
          auVar119._4_4_ = fVar162 * fVar162 + fVar44 * fVar44 + fVar52 * fVar52 + fVar71 * fVar71;
          auVar119._8_4_ = fVar31 * fVar31 + fVar45 * fVar45 + fVar63 * fVar63 + fVar77 * fVar77;
          auVar119._12_4_ = fVar40 * fVar40 + fVar48 * fVar48 + fVar66 * fVar66 + fVar78 * fVar78;
          auVar119 = NEON_fmax(auVar119,auVar17,4);
          fVar13 = auVar18._0_4_;
          fVar70 = fVar13 / SQRT(auVar119._0_4_);
          fVar55 = auVar18._4_4_;
          fVar32 = fVar55 / SQRT(auVar119._4_4_);
          fVar34 = auVar18._8_4_;
          fVar53 = fVar34 / SQRT(auVar119._8_4_);
          fVar72 = auVar18._12_4_;
          fVar25 = fVar72 / SQRT(auVar119._12_4_);
          auVar159._0_4_ = -(uint)(fVar68 * fVar70 < 0.0);
          auVar159._4_4_ = -(uint)(fVar71 * fVar32 < 0.0);
          auVar159._8_4_ = -(uint)(fVar77 * fVar53 < 0.0);
          auVar159._12_4_ = -(uint)(fVar78 * fVar25 < 0.0);
          auVar119 = auVar18 ^ (auVar18 ^ auVar57) & auVar159;
          fVar94 = auVar119._0_4_;
          fVar64 = auVar119._4_4_;
          fVar27 = auVar119._8_4_;
          fVar136 = auVar119._12_4_;
          fVar13 = fVar13 / (ABS(fVar68 * fVar70) + fVar13);
          fVar55 = fVar55 / (ABS(fVar71 * fVar32) + fVar55);
          fVar34 = fVar34 / (ABS(fVar77 * fVar53) + fVar34);
          fVar72 = fVar72 / (ABS(fVar78 * fVar25) + fVar72);
          auVar141._0_4_ = fVar29 * fVar70 * fVar94 * fVar13 * 0.5 + 0.5;
          auVar141._4_4_ = fVar162 * fVar32 * fVar64 * fVar55 * 0.5 + 0.5;
          auVar141._8_4_ = fVar31 * fVar53 * fVar27 * fVar34 * 0.5 + 0.5;
          auVar141._12_4_ = fVar40 * fVar25 * fVar136 * fVar72 * 0.5 + 0.5;
          auVar119 = NEON_fmax(auVar141,auVar74,4);
          auVar119 = NEON_fmin(auVar119,auVar18,4);
          auVar142._0_4_ = (int)(auVar119._0_4_ * 1023.0 + 0.5);
          auVar142._4_4_ = (int)(auVar119._4_4_ * 1023.0 + 0.5);
          auVar142._8_4_ = (int)(auVar119._8_4_ * 1023.0 + 0.5);
          auVar142._12_4_ = (int)(auVar119._12_4_ * 1023.0 + 0.5);
          auVar156._0_4_ = fVar41 * fVar70 * fVar94 * fVar13 * 0.5 + 0.5;
          auVar156._4_4_ = fVar44 * fVar32 * fVar64 * fVar55 * 0.5 + 0.5;
          auVar156._8_4_ = fVar45 * fVar53 * fVar27 * fVar34 * 0.5 + 0.5;
          auVar156._12_4_ = fVar48 * fVar25 * fVar136 * fVar72 * 0.5 + 0.5;
          auVar119 = NEON_fmin(auVar142,auVar62,4);
          auVar157 = NEON_fmax(auVar156,auVar74,4);
          auVar157 = NEON_fmin(auVar157,auVar18,4);
          auVar158._0_4_ = (int)(auVar157._0_4_ * 1023.0 + 0.5);
          auVar158._4_4_ = (int)(auVar157._4_4_ * 1023.0 + 0.5);
          auVar158._8_4_ = (int)(auVar157._8_4_ * 1023.0 + 0.5);
          auVar158._12_4_ = (int)(auVar157._12_4_ * 1023.0 + 0.5);
          auVar159 = NEON_fmin(auVar158,auVar62,4);
          auVar157._0_4_ = fVar49 * fVar70 * fVar94 * fVar13 * 0.5 + 0.5;
          auVar157._4_4_ = fVar52 * fVar32 * fVar64 * fVar55 * 0.5 + 0.5;
          auVar157._8_4_ = fVar63 * fVar53 * fVar27 * fVar34 * 0.5 + 0.5;
          auVar157._12_4_ = fVar66 * fVar25 * fVar136 * fVar72 * 0.5 + 0.5;
          iVar33 = (int)auVar119._0_4_;
          iVar42 = (int)auVar119._4_4_;
          iVar46 = (int)auVar119._8_4_;
          iVar50 = (int)auVar119._12_4_;
          auVar119 = NEON_fmax(auVar157,auVar74,4);
          auVar119 = NEON_fmin(auVar119,auVar18,4);
          auVar90._0_4_ = (int)(auVar119._0_4_ * 1023.0 + 0.5);
          auVar90._4_4_ = (int)(auVar119._4_4_ * 1023.0 + 0.5);
          auVar90._8_4_ = (int)(auVar119._8_4_ * 1023.0 + 0.5);
          auVar90._12_4_ = (int)(auVar119._12_4_ * 1023.0 + 0.5);
          auVar119 = NEON_fmin(auVar90,auVar62,4);
          iVar54 = (int)auVar159._0_4_ << 10;
          iVar65 = (int)auVar159._4_4_ << 10;
          iVar67 = (int)auVar159._8_4_ << 10;
          iVar69 = (int)auVar159._12_4_ << 10;
          iVar14 = (int)auVar119._0_4_ << 0x14;
          iVar26 = (int)auVar119._4_4_ << 0x14;
          iVar28 = (int)auVar119._8_4_ << 0x14;
          iVar30 = (int)auVar119._12_4_ << 0x14;
          *(char *)(pfVar7 + 2) = (char)iVar46;
          *(byte *)((long)pfVar7 + 9) = (byte)((uint)iVar67 >> 8) | (byte)((uint)iVar46 >> 8);
          *(byte *)((long)pfVar7 + 10) =
               (byte)((uint)iVar67 >> 0x10) | (byte)((uint)iVar46 >> 0x10) |
               (byte)((uint)iVar28 >> 0x10);
          *(byte *)((long)pfVar7 + 0xb) =
               (byte)((uint)iVar67 >> 0x18) | (byte)((uint)iVar46 >> 0x18) |
               (byte)((uint)iVar28 >> 0x18);
          *(char *)(pfVar7 + 3) = (char)iVar50;
          *(byte *)((long)pfVar7 + 0xd) = (byte)((uint)iVar69 >> 8) | (byte)((uint)iVar50 >> 8);
          *(byte *)((long)pfVar7 + 0xe) =
               (byte)((uint)iVar69 >> 0x10) | (byte)((uint)iVar50 >> 0x10) |
               (byte)((uint)iVar30 >> 0x10);
          *(byte *)((long)pfVar7 + 0xf) =
               (byte)((uint)iVar69 >> 0x18) | (byte)((uint)iVar50 >> 0x18) |
               (byte)((uint)iVar30 >> 0x18);
          *(char *)pfVar7 = (char)iVar33;
          *(byte *)((long)pfVar7 + 1) = (byte)((uint)iVar54 >> 8) | (byte)((uint)iVar33 >> 8);
          *(byte *)((long)pfVar7 + 2) =
               (byte)((uint)iVar54 >> 0x10) | (byte)((uint)iVar33 >> 0x10) |
               (byte)((uint)iVar14 >> 0x10);
          *(byte *)((long)pfVar7 + 3) =
               (byte)((uint)iVar54 >> 0x18) | (byte)((uint)iVar33 >> 0x18) |
               (byte)((uint)iVar14 >> 0x18);
          *(char *)(pfVar7 + 1) = (char)iVar42;
          *(byte *)((long)pfVar7 + 5) = (byte)((uint)iVar65 >> 8) | (byte)((uint)iVar42 >> 8);
          *(byte *)((long)pfVar7 + 6) =
               (byte)((uint)iVar65 >> 0x10) | (byte)((uint)iVar42 >> 0x10) |
               (byte)((uint)iVar26 >> 0x10);
          *(byte *)((long)pfVar7 + 7) =
               (byte)((uint)iVar65 >> 0x18) | (byte)((uint)iVar42 >> 0x18) |
               (byte)((uint)iVar26 >> 0x18);
          lVar8 = lVar11 + 4;
          uVar102 = lVar11 + 8;
          lVar11 = lVar8;
          pfVar7 = pfVar7 + 4;
        } while (uVar102 <= param_3);
      }
      lVar11 = param_3 - lVar8;
      if (lVar11 != 0) {
        pfVar7 = (float *)(param_1[lVar8] + 8);
        uVar102 = NEON_fmov(0x3f800000,4);
        pfVar9 = param_2 + lVar8;
        do {
          fVar70 = *pfVar7;
          fVar13 = pfVar7[1];
          fVar55 = pfVar7[-2];
          fVar72 = pfVar7[-1];
          fVar34 = fVar13 * fVar13 + fVar55 * fVar55 + fVar72 * fVar72 + fVar70 * fVar70;
          if (fVar34 == 0.0) {
            fVar55 = 0.0;
            fVar72 = 0.0;
            fVar70 = 0.0;
            fVar13 = 1.0;
          }
          else {
            fVar34 = 1.0 / SQRT(fVar34);
            fVar13 = fVar13 * fVar34;
            fVar55 = fVar55 * fVar34;
            fVar72 = fVar72 * fVar34;
            fVar70 = fVar70 * fVar34;
          }
          uVar101 = CONCAT44(fVar70,fVar72) ^
                    (CONCAT44(fVar70,fVar72) ^ CONCAT44(-fVar70,-fVar72)) &
                    CONCAT44(-(uint)(fVar13 < 0.0),-(uint)(fVar13 < 0.0));
          fVar34 = -fVar13;
          fVar72 = -fVar55;
          if (0.0 <= fVar13) {
            fVar34 = fVar13;
            fVar72 = fVar55;
          }
          fVar34 = 1.0 / (fVar34 + 1.0);
          fVar55 = fVar72 * fVar34 * 0.5 + 0.5;
          fVar13 = 0.0;
          if (0.0 <= fVar55) {
            fVar13 = fVar55;
          }
          fVar55 = 1.0;
          if (fVar13 <= 1.0) {
            fVar55 = fVar13;
          }
          fVar13 = (float)uVar101 * fVar34 * 0.5 + 0.5;
          fVar34 = (float)(uVar101 >> 0x20) * fVar34 * 0.5 + 0.5;
          iVar14 = -(uint)(fVar13 < 0.0);
          iVar26 = -(uint)(fVar34 < 0.0);
          fVar13 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                                   CONCAT12((byte)((uint)fVar13 >> 0x10) &
                                            ~(byte)((uint)iVar14 >> 0x10),
                                            CONCAT11((byte)((uint)fVar13 >> 8) &
                                                     ~(byte)((uint)iVar14 >> 8),
                                                     SUB41(fVar13,0) & ~(byte)iVar14)));
          uVar101 = CONCAT17((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                             CONCAT16((byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10),
                                      CONCAT15((byte)((uint)fVar34 >> 8) &
                                               ~(byte)((uint)iVar26 >> 8),
                                               CONCAT14(SUB41(fVar34,0) & ~(byte)iVar26,fVar13))));
          uVar101 = uVar101 ^ (uVar101 ^ uVar102) &
                              CONCAT44(-(uint)((float)(uVar102 >> 0x20) < (float)(uVar101 >> 0x20)),
                                       -(uint)((float)uVar102 < fVar13));
          uVar15 = NEON_ushl(CONCAT44((int)(float)(int)((float)(uVar101 >> 0x20) * 1023.0 + 0.5),
                                      (int)(float)(int)((float)uVar101 * 1023.0 + 0.5)),0x140000000a
                             ,4);
          pfVar7 = pfVar7 + 4;
          *pfVar9 = (float)((uint)uVar15 | (int)(fVar55 * 1023.0 + 0.5) |
                           (uint)((ulong)uVar15 >> 0x20));
          lVar11 = lVar11 + -1;
          pfVar9 = pfVar9 + 1;
        } while (lVar11 != 0);
      }
      return param_1;
    }
    if (param_4 == 4) {
      if (param_3 < 4) {
        lVar8 = 0;
      }
      else {
        auVar18._8_4_ = 0x2b8cbccc;
        auVar18._0_8_ = 0x2b8cbccc2b8cbccc;
        auVar18._12_4_ = 0x2b8cbccc;
        auVar17 = NEON_fmov(0x3f800000,4);
        auVar74 = ZEXT216(0);
        auVar57 = NEON_fmov(0xbf800000,4);
        auVar81._8_4_ = 0x447fc000;
        auVar81._0_8_ = 0x447fc000447fc000;
        auVar81._12_4_ = 0x447fc000;
        lVar11 = 0;
        pauVar5 = param_1;
        pfVar7 = param_2;
        do {
          fVar94 = *(float *)*pauVar5;
          fVar29 = *(float *)(*pauVar5 + 4);
          fVar41 = *(float *)(*pauVar5 + 8);
          fVar49 = *(float *)(*pauVar5 + 0xc);
          fVar64 = *(float *)pauVar5[1];
          fVar162 = *(float *)(pauVar5[1] + 4);
          fVar44 = *(float *)(pauVar5[1] + 8);
          fVar52 = *(float *)(pauVar5[1] + 0xc);
          fVar27 = *(float *)pauVar5[2];
          fVar31 = *(float *)(pauVar5[2] + 4);
          fVar45 = *(float *)(pauVar5[2] + 8);
          fVar63 = *(float *)(pauVar5[2] + 0xc);
          fVar136 = *(float *)pauVar5[3];
          fVar40 = *(float *)(pauVar5[3] + 4);
          fVar48 = *(float *)(pauVar5[3] + 8);
          fVar66 = *(float *)(pauVar5[3] + 0xc);
          pauVar5 = pauVar5 + 4;
          auVar87._0_4_ = fVar94 * fVar94 + fVar29 * fVar29 + fVar41 * fVar41 + fVar49 * fVar49;
          auVar87._4_4_ = fVar64 * fVar64 + fVar162 * fVar162 + fVar44 * fVar44 + fVar52 * fVar52;
          auVar87._8_4_ = fVar27 * fVar27 + fVar31 * fVar31 + fVar45 * fVar45 + fVar63 * fVar63;
          auVar87._12_4_ = fVar136 * fVar136 + fVar40 * fVar40 + fVar48 * fVar48 + fVar66 * fVar66;
          auVar62 = NEON_fmax(auVar87,auVar18,4);
          fVar13 = auVar17._0_4_;
          fVar70 = fVar13 / SQRT(auVar62._0_4_);
          fVar55 = auVar17._4_4_;
          fVar32 = fVar55 / SQRT(auVar62._4_4_);
          fVar34 = auVar17._8_4_;
          fVar53 = fVar34 / SQRT(auVar62._8_4_);
          fVar72 = auVar17._12_4_;
          fVar25 = fVar72 / SQRT(auVar62._12_4_);
          auVar132._0_4_ = -(uint)(fVar49 * fVar70 < 0.0);
          auVar132._4_4_ = -(uint)(fVar52 * fVar32 < 0.0);
          auVar132._8_4_ = -(uint)(fVar63 * fVar53 < 0.0);
          auVar132._12_4_ = -(uint)(fVar66 * fVar25 < 0.0);
          auVar62 = auVar17 ^ (auVar17 ^ auVar57) & auVar132;
          fVar68 = auVar62._0_4_;
          fVar71 = auVar62._4_4_;
          fVar77 = auVar62._8_4_;
          fVar78 = auVar62._12_4_;
          fVar13 = fVar13 / SQRT(ABS(fVar49 * fVar70) + fVar13);
          fVar55 = fVar55 / SQRT(ABS(fVar52 * fVar32) + fVar55);
          fVar34 = fVar34 / SQRT(ABS(fVar63 * fVar53) + fVar34);
          fVar72 = fVar72 / SQRT(ABS(fVar66 * fVar25) + fVar72);
          auVar96._0_4_ = fVar94 * fVar70 * fVar68 * fVar13 * 0.5 + 0.5;
          auVar96._4_4_ = fVar64 * fVar32 * fVar71 * fVar55 * 0.5 + 0.5;
          auVar96._8_4_ = fVar27 * fVar53 * fVar77 * fVar34 * 0.5 + 0.5;
          auVar96._12_4_ = fVar136 * fVar25 * fVar78 * fVar72 * 0.5 + 0.5;
          auVar62 = NEON_fmax(auVar96,auVar74,4);
          auVar62 = NEON_fmin(auVar62,auVar17,4);
          auVar97._0_4_ = (int)(auVar62._0_4_ * 1023.0 + 0.5);
          auVar97._4_4_ = (int)(auVar62._4_4_ * 1023.0 + 0.5);
          auVar97._8_4_ = (int)(auVar62._8_4_ * 1023.0 + 0.5);
          auVar97._12_4_ = (int)(auVar62._12_4_ * 1023.0 + 0.5);
          auVar154._0_4_ = fVar29 * fVar70 * fVar68 * fVar13 * 0.5 + 0.5;
          auVar154._4_4_ = fVar162 * fVar32 * fVar71 * fVar55 * 0.5 + 0.5;
          auVar154._8_4_ = fVar31 * fVar53 * fVar77 * fVar34 * 0.5 + 0.5;
          auVar154._12_4_ = fVar40 * fVar25 * fVar78 * fVar72 * 0.5 + 0.5;
          auVar62 = NEON_fmin(auVar97,auVar81,4);
          auVar119 = NEON_fmax(auVar154,auVar74,4);
          auVar119 = NEON_fmin(auVar119,auVar17,4);
          auVar155._0_4_ = (int)(auVar119._0_4_ * 1023.0 + 0.5);
          auVar155._4_4_ = (int)(auVar119._4_4_ * 1023.0 + 0.5);
          auVar155._8_4_ = (int)(auVar119._8_4_ * 1023.0 + 0.5);
          auVar155._12_4_ = (int)(auVar119._12_4_ * 1023.0 + 0.5);
          auVar119 = NEON_fmin(auVar155,auVar81,4);
          auVar88._0_4_ = fVar41 * fVar70 * fVar68 * fVar13 * 0.5 + 0.5;
          auVar88._4_4_ = fVar44 * fVar32 * fVar71 * fVar55 * 0.5 + 0.5;
          auVar88._8_4_ = fVar45 * fVar53 * fVar77 * fVar34 * 0.5 + 0.5;
          auVar88._12_4_ = fVar48 * fVar25 * fVar78 * fVar72 * 0.5 + 0.5;
          iVar33 = (int)auVar62._0_4_;
          iVar42 = (int)auVar62._4_4_;
          iVar46 = (int)auVar62._8_4_;
          iVar50 = (int)auVar62._12_4_;
          auVar62 = NEON_fmax(auVar88,auVar74,4);
          auVar62 = NEON_fmin(auVar62,auVar17,4);
          auVar89._0_4_ = (int)(auVar62._0_4_ * 1023.0 + 0.5);
          auVar89._4_4_ = (int)(auVar62._4_4_ * 1023.0 + 0.5);
          auVar89._8_4_ = (int)(auVar62._8_4_ * 1023.0 + 0.5);
          auVar89._12_4_ = (int)(auVar62._12_4_ * 1023.0 + 0.5);
          auVar62 = NEON_fmin(auVar89,auVar81,4);
          iVar54 = (int)auVar119._0_4_ << 10;
          iVar65 = (int)auVar119._4_4_ << 10;
          iVar67 = (int)auVar119._8_4_ << 10;
          iVar69 = (int)auVar119._12_4_ << 10;
          iVar14 = (int)auVar62._0_4_ << 0x14;
          iVar26 = (int)auVar62._4_4_ << 0x14;
          iVar28 = (int)auVar62._8_4_ << 0x14;
          iVar30 = (int)auVar62._12_4_ << 0x14;
          *(char *)(pfVar7 + 2) = (char)iVar46;
          *(byte *)((long)pfVar7 + 9) = (byte)((uint)iVar67 >> 8) | (byte)((uint)iVar46 >> 8);
          *(byte *)((long)pfVar7 + 10) =
               (byte)((uint)iVar67 >> 0x10) | (byte)((uint)iVar46 >> 0x10) |
               (byte)((uint)iVar28 >> 0x10);
          *(byte *)((long)pfVar7 + 0xb) =
               (byte)((uint)iVar67 >> 0x18) | (byte)((uint)iVar46 >> 0x18) |
               (byte)((uint)iVar28 >> 0x18);
          *(char *)(pfVar7 + 3) = (char)iVar50;
          *(byte *)((long)pfVar7 + 0xd) = (byte)((uint)iVar69 >> 8) | (byte)((uint)iVar50 >> 8);
          *(byte *)((long)pfVar7 + 0xe) =
               (byte)((uint)iVar69 >> 0x10) | (byte)((uint)iVar50 >> 0x10) |
               (byte)((uint)iVar30 >> 0x10);
          *(byte *)((long)pfVar7 + 0xf) =
               (byte)((uint)iVar69 >> 0x18) | (byte)((uint)iVar50 >> 0x18) |
               (byte)((uint)iVar30 >> 0x18);
          *(char *)pfVar7 = (char)iVar33;
          *(byte *)((long)pfVar7 + 1) = (byte)((uint)iVar54 >> 8) | (byte)((uint)iVar33 >> 8);
          *(byte *)((long)pfVar7 + 2) =
               (byte)((uint)iVar54 >> 0x10) | (byte)((uint)iVar33 >> 0x10) |
               (byte)((uint)iVar14 >> 0x10);
          *(byte *)((long)pfVar7 + 3) =
               (byte)((uint)iVar54 >> 0x18) | (byte)((uint)iVar33 >> 0x18) |
               (byte)((uint)iVar14 >> 0x18);
          *(char *)(pfVar7 + 1) = (char)iVar42;
          *(byte *)((long)pfVar7 + 5) = (byte)((uint)iVar65 >> 8) | (byte)((uint)iVar42 >> 8);
          *(byte *)((long)pfVar7 + 6) =
               (byte)((uint)iVar65 >> 0x10) | (byte)((uint)iVar42 >> 0x10) |
               (byte)((uint)iVar26 >> 0x10);
          *(byte *)((long)pfVar7 + 7) =
               (byte)((uint)iVar65 >> 0x18) | (byte)((uint)iVar42 >> 0x18) |
               (byte)((uint)iVar26 >> 0x18);
          lVar8 = lVar11 + 4;
          uVar102 = lVar11 + 8;
          lVar11 = lVar8;
          pfVar7 = pfVar7 + 4;
        } while (uVar102 <= param_3);
      }
      lVar11 = param_3 - lVar8;
      if (lVar11 != 0) {
        pfVar7 = (float *)(param_1[lVar8] + 8);
        uVar102 = NEON_fmov(0x3f800000,4);
        pfVar9 = param_2 + lVar8;
        do {
          fVar70 = *pfVar7;
          fVar13 = pfVar7[1];
          fVar55 = pfVar7[-2];
          fVar72 = pfVar7[-1];
          fVar34 = fVar13 * fVar13 + fVar55 * fVar55 + fVar72 * fVar72 + fVar70 * fVar70;
          if (fVar34 == 0.0) {
            fVar55 = 0.0;
            fVar72 = 0.0;
            fVar70 = 0.0;
            fVar13 = 1.0;
          }
          else {
            fVar34 = 1.0 / SQRT(fVar34);
            fVar13 = fVar13 * fVar34;
            fVar55 = fVar55 * fVar34;
            fVar72 = fVar72 * fVar34;
            fVar70 = fVar70 * fVar34;
          }
          uVar101 = CONCAT44(fVar70,fVar72) ^
                    (CONCAT44(fVar70,fVar72) ^ CONCAT44(-fVar70,-fVar72)) &
                    CONCAT44(-(uint)(fVar13 < 0.0),-(uint)(fVar13 < 0.0));
          fVar34 = -fVar13;
          fVar72 = -fVar55;
          if (0.0 <= fVar13) {
            fVar34 = fVar13;
            fVar72 = fVar55;
          }
          fVar34 = 1.0 / SQRT(fVar34 + 1.0);
          fVar55 = fVar72 * fVar34 * 0.5 + 0.5;
          fVar13 = 0.0;
          if (0.0 <= fVar55) {
            fVar13 = fVar55;
          }
          fVar55 = 1.0;
          if (fVar13 <= 1.0) {
            fVar55 = fVar13;
          }
          fVar13 = (float)uVar101 * fVar34 * 0.5 + 0.5;
          fVar34 = (float)(uVar101 >> 0x20) * fVar34 * 0.5 + 0.5;
          iVar14 = -(uint)(fVar13 < 0.0);
          iVar26 = -(uint)(fVar34 < 0.0);
          fVar13 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                                   CONCAT12((byte)((uint)fVar13 >> 0x10) &
                                            ~(byte)((uint)iVar14 >> 0x10),
                                            CONCAT11((byte)((uint)fVar13 >> 8) &
                                                     ~(byte)((uint)iVar14 >> 8),
                                                     SUB41(fVar13,0) & ~(byte)iVar14)));
          uVar101 = CONCAT17((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                             CONCAT16((byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10),
                                      CONCAT15((byte)((uint)fVar34 >> 8) &
                                               ~(byte)((uint)iVar26 >> 8),
                                               CONCAT14(SUB41(fVar34,0) & ~(byte)iVar26,fVar13))));
          uVar101 = uVar101 ^ (uVar101 ^ uVar102) &
                              CONCAT44(-(uint)((float)(uVar102 >> 0x20) < (float)(uVar101 >> 0x20)),
                                       -(uint)((float)uVar102 < fVar13));
          uVar15 = NEON_ushl(CONCAT44((int)(float)(int)((float)(uVar101 >> 0x20) * 1023.0 + 0.5),
                                      (int)(float)(int)((float)uVar101 * 1023.0 + 0.5)),0x140000000a
                             ,4);
          pfVar7 = pfVar7 + 4;
          *pfVar9 = (float)((uint)uVar15 | (int)(fVar55 * 1023.0 + 0.5) |
                           (uint)((ulong)uVar15 >> 0x20));
          lVar11 = lVar11 + -1;
          pfVar9 = pfVar9 + 1;
        } while (lVar11 != 0);
      }
      return param_1;
    }
    if (param_4 == 5) {
      if (param_3 < 4) {
        lVar8 = 0;
      }
      else {
        auVar74._8_4_ = 0x2b8cbccc;
        auVar74._0_8_ = 0x2b8cbccc2b8cbccc;
        auVar74._12_4_ = 0x2b8cbccc;
        auVar17 = NEON_fmov(0x3f800000,4);
        auVar18 = ZEXT216(0);
        auVar57 = NEON_fmov(0xbf800000,4);
        auVar98._8_4_ = 0x447fc000;
        auVar98._0_8_ = 0x447fc000447fc000;
        auVar98._12_4_ = 0x447fc000;
        lVar11 = 0;
        pauVar5 = param_1;
        pfVar7 = param_2;
        do {
          fVar70 = *(float *)*pauVar5;
          fVar94 = *(float *)(*pauVar5 + 4);
          fVar29 = *(float *)(*pauVar5 + 8);
          fVar41 = *(float *)(*pauVar5 + 0xc);
          fVar32 = *(float *)pauVar5[1];
          fVar64 = *(float *)(pauVar5[1] + 4);
          fVar162 = *(float *)(pauVar5[1] + 8);
          fVar44 = *(float *)(pauVar5[1] + 0xc);
          fVar53 = *(float *)pauVar5[2];
          fVar27 = *(float *)(pauVar5[2] + 4);
          fVar31 = *(float *)(pauVar5[2] + 8);
          fVar45 = *(float *)(pauVar5[2] + 0xc);
          fVar25 = *(float *)pauVar5[3];
          fVar136 = *(float *)(pauVar5[3] + 4);
          fVar40 = *(float *)(pauVar5[3] + 8);
          fVar48 = *(float *)(pauVar5[3] + 0xc);
          pauVar5 = pauVar5 + 4;
          auVar133._0_4_ = fVar70 * fVar70 + fVar94 * fVar94 + fVar29 * fVar29 + fVar41 * fVar41;
          auVar133._4_4_ = fVar32 * fVar32 + fVar64 * fVar64 + fVar162 * fVar162 + fVar44 * fVar44;
          auVar133._8_4_ = fVar53 * fVar53 + fVar27 * fVar27 + fVar31 * fVar31 + fVar45 * fVar45;
          auVar133._12_4_ = fVar25 * fVar25 + fVar136 * fVar136 + fVar40 * fVar40 + fVar48 * fVar48;
          auVar62 = NEON_fmax(auVar133,auVar74,4);
          fVar13 = auVar17._0_4_;
          fVar49 = fVar13 / SQRT(auVar62._0_4_);
          fVar55 = auVar17._4_4_;
          fVar52 = fVar55 / SQRT(auVar62._4_4_);
          fVar34 = auVar17._8_4_;
          fVar63 = fVar34 / SQRT(auVar62._8_4_);
          fVar72 = auVar17._12_4_;
          fVar66 = fVar72 / SQRT(auVar62._12_4_);
          fVar68 = ABS(fVar41 * fVar49);
          fVar71 = ABS(fVar44 * fVar52);
          fVar77 = ABS(fVar45 * fVar63);
          fVar78 = ABS(fVar48 * fVar66);
          auVar143._0_4_ = -(uint)(fVar41 * fVar49 < 0.0);
          auVar143._4_4_ = -(uint)(fVar44 * fVar52 < 0.0);
          auVar143._8_4_ = -(uint)(fVar45 * fVar63 < 0.0);
          auVar143._12_4_ = -(uint)(fVar48 * fVar66 < 0.0);
          auVar62 = auVar17 ^ (auVar17 ^ auVar57) & auVar143;
          fVar41 = auVar62._0_4_;
          fVar44 = auVar62._4_4_;
          fVar45 = auVar62._8_4_;
          fVar48 = auVar62._12_4_;
          fVar13 = (fVar13 / (fVar68 + fVar13 + SQRT(fVar68 + fVar68 + 2.0))) * 2.4142137;
          fVar55 = (fVar55 / (fVar71 + fVar55 + SQRT(fVar71 + fVar71 + 2.0))) * 2.4142137;
          fVar34 = (fVar34 / (fVar77 + fVar34 + SQRT(fVar77 + fVar77 + 2.0))) * 2.4142137;
          fVar72 = (fVar72 / (fVar78 + fVar72 + SQRT(fVar78 + fVar78 + 2.0))) * 2.4142137;
          auVar163._0_4_ = fVar70 * fVar49 * fVar41 * fVar13 * 0.5 + 0.5;
          auVar163._4_4_ = fVar32 * fVar52 * fVar44 * fVar55 * 0.5 + 0.5;
          auVar163._8_4_ = fVar53 * fVar63 * fVar45 * fVar34 * 0.5 + 0.5;
          auVar163._12_4_ = fVar25 * fVar66 * fVar48 * fVar72 * 0.5 + 0.5;
          auVar62 = NEON_fmax(auVar163,auVar18,4);
          auVar62 = NEON_fmin(auVar62,auVar17,4);
          auVar164._0_4_ = (int)(auVar62._0_4_ * 1023.0 + 0.5);
          auVar164._4_4_ = (int)(auVar62._4_4_ * 1023.0 + 0.5);
          auVar164._8_4_ = (int)(auVar62._8_4_ * 1023.0 + 0.5);
          auVar164._12_4_ = (int)(auVar62._12_4_ * 1023.0 + 0.5);
          auVar166._0_4_ = fVar94 * fVar49 * fVar41 * fVar13 * 0.5 + 0.5;
          auVar166._4_4_ = fVar64 * fVar52 * fVar44 * fVar55 * 0.5 + 0.5;
          auVar166._8_4_ = fVar27 * fVar63 * fVar45 * fVar34 * 0.5 + 0.5;
          auVar166._12_4_ = fVar136 * fVar66 * fVar48 * fVar72 * 0.5 + 0.5;
          auVar62 = NEON_fmin(auVar164,auVar98,4);
          auVar119 = NEON_fmax(auVar166,auVar18,4);
          auVar119 = NEON_fmin(auVar119,auVar17,4);
          auVar167._0_4_ = (int)(auVar119._0_4_ * 1023.0 + 0.5);
          auVar167._4_4_ = (int)(auVar119._4_4_ * 1023.0 + 0.5);
          auVar167._8_4_ = (int)(auVar119._8_4_ * 1023.0 + 0.5);
          auVar167._12_4_ = (int)(auVar119._12_4_ * 1023.0 + 0.5);
          auVar119 = NEON_fmin(auVar167,auVar98,4);
          auVar104._0_4_ = fVar29 * fVar49 * fVar41 * fVar13 * 0.5 + 0.5;
          auVar104._4_4_ = fVar162 * fVar52 * fVar44 * fVar55 * 0.5 + 0.5;
          auVar104._8_4_ = fVar31 * fVar63 * fVar45 * fVar34 * 0.5 + 0.5;
          auVar104._12_4_ = fVar40 * fVar66 * fVar48 * fVar72 * 0.5 + 0.5;
          iVar33 = (int)auVar62._0_4_;
          iVar42 = (int)auVar62._4_4_;
          iVar46 = (int)auVar62._8_4_;
          iVar50 = (int)auVar62._12_4_;
          auVar62 = NEON_fmax(auVar104,auVar18,4);
          auVar62 = NEON_fmin(auVar62,auVar17,4);
          auVar105._0_4_ = (int)(auVar62._0_4_ * 1023.0 + 0.5);
          auVar105._4_4_ = (int)(auVar62._4_4_ * 1023.0 + 0.5);
          auVar105._8_4_ = (int)(auVar62._8_4_ * 1023.0 + 0.5);
          auVar105._12_4_ = (int)(auVar62._12_4_ * 1023.0 + 0.5);
          auVar62 = NEON_fmin(auVar105,auVar98,4);
          iVar54 = (int)auVar119._0_4_ << 10;
          iVar65 = (int)auVar119._4_4_ << 10;
          iVar67 = (int)auVar119._8_4_ << 10;
          iVar69 = (int)auVar119._12_4_ << 10;
          iVar14 = (int)auVar62._0_4_ << 0x14;
          iVar26 = (int)auVar62._4_4_ << 0x14;
          iVar28 = (int)auVar62._8_4_ << 0x14;
          iVar30 = (int)auVar62._12_4_ << 0x14;
          *(char *)(pfVar7 + 2) = (char)iVar46;
          *(byte *)((long)pfVar7 + 9) = (byte)((uint)iVar67 >> 8) | (byte)((uint)iVar46 >> 8);
          *(byte *)((long)pfVar7 + 10) =
               (byte)((uint)iVar67 >> 0x10) | (byte)((uint)iVar46 >> 0x10) |
               (byte)((uint)iVar28 >> 0x10);
          *(byte *)((long)pfVar7 + 0xb) =
               (byte)((uint)iVar67 >> 0x18) | (byte)((uint)iVar46 >> 0x18) |
               (byte)((uint)iVar28 >> 0x18);
          *(char *)(pfVar7 + 3) = (char)iVar50;
          *(byte *)((long)pfVar7 + 0xd) = (byte)((uint)iVar69 >> 8) | (byte)((uint)iVar50 >> 8);
          *(byte *)((long)pfVar7 + 0xe) =
               (byte)((uint)iVar69 >> 0x10) | (byte)((uint)iVar50 >> 0x10) |
               (byte)((uint)iVar30 >> 0x10);
          *(byte *)((long)pfVar7 + 0xf) =
               (byte)((uint)iVar69 >> 0x18) | (byte)((uint)iVar50 >> 0x18) |
               (byte)((uint)iVar30 >> 0x18);
          *(char *)pfVar7 = (char)iVar33;
          *(byte *)((long)pfVar7 + 1) = (byte)((uint)iVar54 >> 8) | (byte)((uint)iVar33 >> 8);
          *(byte *)((long)pfVar7 + 2) =
               (byte)((uint)iVar54 >> 0x10) | (byte)((uint)iVar33 >> 0x10) |
               (byte)((uint)iVar14 >> 0x10);
          *(byte *)((long)pfVar7 + 3) =
               (byte)((uint)iVar54 >> 0x18) | (byte)((uint)iVar33 >> 0x18) |
               (byte)((uint)iVar14 >> 0x18);
          *(char *)(pfVar7 + 1) = (char)iVar42;
          *(byte *)((long)pfVar7 + 5) = (byte)((uint)iVar65 >> 8) | (byte)((uint)iVar42 >> 8);
          *(byte *)((long)pfVar7 + 6) =
               (byte)((uint)iVar65 >> 0x10) | (byte)((uint)iVar42 >> 0x10) |
               (byte)((uint)iVar26 >> 0x10);
          *(byte *)((long)pfVar7 + 7) =
               (byte)((uint)iVar65 >> 0x18) | (byte)((uint)iVar42 >> 0x18) |
               (byte)((uint)iVar26 >> 0x18);
          lVar8 = lVar11 + 4;
          uVar102 = lVar11 + 8;
          lVar11 = lVar8;
          pfVar7 = pfVar7 + 4;
        } while (uVar102 <= param_3);
      }
      lVar11 = param_3 - lVar8;
      if (lVar11 != 0) {
        pfVar7 = (float *)(param_1[lVar8] + 8);
        uVar102 = NEON_fmov(0x3f800000,4);
        pfVar9 = param_2 + lVar8;
        do {
          fVar70 = *pfVar7;
          fVar13 = pfVar7[1];
          fVar55 = pfVar7[-2];
          fVar72 = pfVar7[-1];
          fVar34 = fVar13 * fVar13 + fVar55 * fVar55 + fVar72 * fVar72 + fVar70 * fVar70;
          if (fVar34 == 0.0) {
            fVar55 = 0.0;
            fVar72 = 0.0;
            fVar70 = 0.0;
            fVar13 = 1.0;
          }
          else {
            fVar34 = 1.0 / SQRT(fVar34);
            fVar13 = fVar13 * fVar34;
            fVar55 = fVar55 * fVar34;
            fVar72 = fVar72 * fVar34;
            fVar70 = fVar70 * fVar34;
          }
          pfVar7 = pfVar7 + 4;
          uVar101 = CONCAT44(fVar70,fVar72) ^
                    (CONCAT44(fVar70,fVar72) ^ CONCAT44(-fVar70,-fVar72)) &
                    CONCAT44(-(uint)(fVar13 < 0.0),-(uint)(fVar13 < 0.0));
          fVar34 = -fVar13;
          fVar72 = -fVar55;
          if (0.0 <= fVar13) {
            fVar34 = fVar13;
            fVar72 = fVar55;
          }
          fVar34 = fVar34 + 1.0 + SQRT(fVar34 * 2.0 + 2.0);
          fVar55 = ((fVar72 * 2.4142137) / fVar34) * 0.5 + 0.5;
          fVar13 = 0.0;
          if (0.0 <= fVar55) {
            fVar13 = fVar55;
          }
          fVar55 = 1.0;
          if (fVar13 <= 1.0) {
            fVar55 = fVar13;
          }
          fVar13 = (((float)uVar101 * 2.4142137) / fVar34) * 0.5 + 0.5;
          fVar34 = (((float)(uVar101 >> 0x20) * 2.4142137) / fVar34) * 0.5 + 0.5;
          iVar14 = -(uint)(fVar13 < 0.0);
          iVar26 = -(uint)(fVar34 < 0.0);
          fVar13 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                                   CONCAT12((byte)((uint)fVar13 >> 0x10) &
                                            ~(byte)((uint)iVar14 >> 0x10),
                                            CONCAT11((byte)((uint)fVar13 >> 8) &
                                                     ~(byte)((uint)iVar14 >> 8),
                                                     SUB41(fVar13,0) & ~(byte)iVar14)));
          uVar101 = CONCAT17((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                             CONCAT16((byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10),
                                      CONCAT15((byte)((uint)fVar34 >> 8) &
                                               ~(byte)((uint)iVar26 >> 8),
                                               CONCAT14(SUB41(fVar34,0) & ~(byte)iVar26,fVar13))));
          uVar101 = uVar101 ^ (uVar101 ^ uVar102) &
                              CONCAT44(-(uint)((float)(uVar102 >> 0x20) < (float)(uVar101 >> 0x20)),
                                       -(uint)((float)uVar102 < fVar13));
          uVar15 = NEON_ushl(CONCAT44((int)(float)(int)((float)(uVar101 >> 0x20) * 1023.0 + 0.5),
                                      (int)(float)(int)((float)uVar101 * 1023.0 + 0.5)),0x140000000a
                             ,4);
          *pfVar9 = (float)((uint)uVar15 | (uint)((ulong)uVar15 >> 0x20) |
                           (int)(fVar55 * 1023.0 + 0.5));
          lVar11 = lVar11 + -1;
          pfVar9 = pfVar9 + 1;
        } while (lVar11 != 0);
      }
      return param_1;
    }
  }
  pauVar5 = (undefined1 (*) [16])&UNK_10f630e62;
  FUN_10a00946c();
  if (param_4 < 3) {
    if (param_4 == 0) {
      if (param_3 < 4) {
        lVar8 = 0;
      }
      else {
        auVar17 = NEON_fmov(0xbf800000,4);
        fStack_78 = auVar17._8_4_;
        fStack_74 = auVar17._12_4_;
        fStack_80 = auVar17._0_4_;
        fStack_7c = auVar17._4_4_;
        auVar17 = NEON_fmov(0x3f800000,4);
        pfVar7 = param_2;
        lVar11 = 0;
        uVar102 = param_3;
        pauVar4 = pauVar5;
        do {
          auVar18 = *pauVar4;
          auVar37._0_6_ =
               CONCAT15(auVar18[5],CONCAT14(auVar18[4],(uint)(auVar18._0_2_ & 0x3ff))) &
               0x3ffffffffff;
          auVar37._6_2_ = 0;
          auVar37[8] = auVar18[8];
          auVar37[9] = auVar18[9] & 3;
          auVar37._10_2_ = 0;
          auVar37[0xc] = auVar18[0xc];
          auVar37[0xd] = auVar18[0xd] & 3;
          auVar37._14_2_ = 0;
          uVar43 = auVar18._4_4_ >> 10;
          uVar47 = auVar18._8_4_ >> 10;
          uVar51 = auVar18._12_4_ >> 10;
          auVar59._0_6_ =
               CONCAT15((char)(uVar43 >> 8),
                        CONCAT14((char)uVar43,(uint)((ushort)(auVar18._0_4_ >> 10) & 0x3ff))) &
               0x3ffffffffff;
          auVar59._6_2_ = 0;
          auVar59[8] = (undefined1)uVar47;
          auVar59[9] = (byte)(uVar47 >> 8) & 3;
          auVar59._10_2_ = 0;
          auVar59[0xc] = (undefined1)uVar51;
          auVar59[0xd] = (byte)(uVar51 >> 8) & 3;
          auVar59._14_2_ = 0;
          auVar22._0_8_ = CONCAT44(auVar18._4_4_ >> 0x14,auVar18._0_4_ >> 0x14) & 0xfffff3fffffff3ff
          ;
          auVar22._8_4_ = auVar18._8_4_ >> 0x14 & 0xfffff3ff;
          auVar22._12_4_ = auVar18._12_4_ >> 0x14 & 0xfffff3ff;
          auVar74 = NEON_ucvtf(auVar37,4);
          auVar57 = NEON_ucvtf(auVar59,4);
          auVar18 = NEON_ucvtf(auVar22,4);
          fVar94 = fStack_80 + auVar74._0_4_ * 0.0009775171 * 2.0;
          fVar64 = fStack_7c + auVar74._4_4_ * 0.0009775171 * 2.0;
          fVar27 = fStack_78 + auVar74._8_4_ * 0.0009775171 * 2.0;
          fVar136 = fStack_74 + auVar74._12_4_ * 0.0009775171 * 2.0;
          fVar13 = fStack_80 + auVar57._0_4_ * 0.0009775171 * 2.0;
          fVar55 = fStack_7c + auVar57._4_4_ * 0.0009775171 * 2.0;
          fVar34 = fStack_78 + auVar57._8_4_ * 0.0009775171 * 2.0;
          fVar72 = fStack_74 + auVar57._12_4_ * 0.0009775171 * 2.0;
          fVar70 = fStack_80 + auVar18._0_4_ * 0.0009775171 * 2.0;
          fVar32 = fStack_7c + auVar18._4_4_ * 0.0009775171 * 2.0;
          fVar53 = fStack_78 + auVar18._8_4_ * 0.0009775171 * 2.0;
          fVar25 = fStack_74 + auVar18._12_4_ * 0.0009775171 * 2.0;
          fVar29 = fVar94 * fVar94 + fVar13 * fVar13 + fVar70 * fVar70;
          fVar162 = fVar64 * fVar64 + fVar55 * fVar55 + fVar32 * fVar32;
          fVar31 = fVar27 * fVar27 + fVar34 * fVar34 + fVar53 * fVar53;
          fVar40 = fVar136 * fVar136 + fVar72 * fVar72 + fVar25 * fVar25;
          auVar82._0_4_ = -(uint)(auVar17._0_4_ <= fVar29);
          auVar82._4_4_ = -(uint)(auVar17._4_4_ <= fVar162);
          auVar82._8_4_ = -(uint)(auVar17._8_4_ <= fVar31);
          auVar82._12_4_ = -(uint)(auVar17._12_4_ <= fVar40);
          auVar18 = NEON_ext(auVar82,auVar82,8,1);
          uVar15 = CONCAT17((byte)((uint)auVar82._4_4_ >> 0x18) | auVar18[7],
                            CONCAT16((byte)((uint)auVar82._4_4_ >> 0x10) | auVar18[6],
                                     CONCAT15((byte)((uint)auVar82._4_4_ >> 8) | auVar18[5],
                                              CONCAT14((byte)auVar82._4_4_ | auVar18[4],
                                                       CONCAT13((byte)((uint)auVar82._0_4_ >> 0x18)
                                                                | auVar18[3],
                                                                CONCAT12((byte)((uint)auVar82._0_4_
                                                                               >> 0x10) | auVar18[2]
                                                                         ,CONCAT11((byte)((uint)
                                                  auVar82._0_4_ >> 8) | auVar18[1],
                                                  (byte)auVar82._0_4_ | auVar18[0])))))));
          uVar15 = NEON_umaxp(uVar15,uVar15,4);
          if ((int)uVar15 == 0) {
            *pfVar7 = fVar13;
            pfVar7[1] = fVar70;
            pfVar7[2] = SQRT(auVar17._0_4_ - fVar29);
            pfVar7[3] = fVar94;
            pfVar7[4] = fVar55;
            pfVar7[5] = fVar32;
            pfVar7[6] = SQRT(auVar17._4_4_ - fVar162);
            pfVar7[7] = fVar64;
            pfVar7[8] = fVar34;
            pfVar7[9] = fVar53;
            pfVar7[10] = SQRT(auVar17._8_4_ - fVar31);
            pfVar7[0xb] = fVar27;
            pfVar7[0xc] = fVar72;
            pfVar7[0xd] = fVar25;
            pfVar7[0xe] = SQRT(auVar17._12_4_ - fVar40);
            pfVar7[0xf] = fVar136;
          }
          else {
            uVar101 = uVar102;
            if (3 < uVar102) {
              uVar101 = 4;
            }
            FUN_10a009298(pauVar4,pfVar7,uVar101);
          }
          lVar8 = lVar11 + 4;
          uVar101 = lVar11 + 8;
          pfVar7 = pfVar7 + 0x10;
          uVar102 = uVar102 - 4;
          lVar11 = lVar8;
          pauVar4 = pauVar4 + 1;
        } while (uVar101 <= param_3);
      }
      pauVar5 = (undefined1 (*) [16])(*pauVar5 + lVar8 * 4);
      lVar11 = param_3 - lVar8;
      if (lVar11 != 0) {
        param_2 = param_2 + lVar8 * 4 + 3;
        uVar15 = NEON_fmov(0xbf800000,4);
        pauVar4 = pauVar5;
        do {
          pauVar5 = (undefined1 (*) [16])(*pauVar4 + 4);
          uVar43 = *(uint *)*pauVar4;
          fVar13 = (float)(uVar43 & 0x3ff) * 0.0009775171;
          uVar102 = NEON_ushl(CONCAT44(uVar43,uVar43),0xffffffecfffffff6,4);
          uVar16 = NEON_ucvtf(uVar102 & 0x3ff000003ff,4);
          fVar55 = fVar13 + fVar13 + -1.0;
          fVar13 = (float)uVar16 * 0.0009775171;
          fVar72 = (float)((ulong)uVar16 >> 0x20) * 0.0009775171;
          fVar34 = fVar13 + fVar13 + (float)uVar15;
          fVar72 = fVar72 + fVar72 + (float)((ulong)uVar15 >> 0x20);
          fVar70 = fVar72 * fVar72 + fVar55 * fVar55 + fVar34 * fVar34;
          fVar32 = 1.0 / SQRT(fVar70);
          fVar13 = SQRT(1.0 - fVar70);
          uVar16 = CONCAT44(fVar72,fVar34);
          if (1.0 <= fVar70) {
            fVar13 = fVar32 * 0.0;
            uVar16 = CONCAT44(fVar72 * fVar32,fVar34 * fVar32);
          }
          *(undefined8 *)(param_2 + -3) = uVar16;
          if (1.0 <= fVar70) {
            fVar55 = fVar55 * fVar32;
          }
          param_2[-1] = fVar13;
          *param_2 = fVar55;
          param_2 = param_2 + 4;
          lVar11 = lVar11 + -1;
          pauVar4 = pauVar5;
        } while (lVar11 != 0);
      }
      return pauVar5;
    }
    if (param_4 == 1) {
      if (param_3 < 4) {
        lVar8 = 0;
      }
      else {
        auVar17 = NEON_fmov(0xbf800000,4);
        auVar18 = NEON_fmov(0x3f800000,4);
        lVar11 = 0;
        pfVar7 = param_2;
        pauVar4 = pauVar5;
        do {
          auVar74 = *pauVar4;
          auVar120._0_6_ =
               CONCAT15(auVar74[5],CONCAT14(auVar74[4],(uint)(auVar74._0_2_ & 0x3ff))) &
               0x3ffffffffff;
          auVar120._6_2_ = 0;
          auVar120[8] = auVar74[8];
          auVar120[9] = auVar74[9] & 3;
          auVar120._10_2_ = 0;
          auVar120[0xc] = auVar74[0xc];
          auVar120[0xd] = auVar74[0xd] & 3;
          auVar120._14_2_ = 0;
          uVar43 = auVar74._0_4_;
          uVar51 = auVar74._4_4_;
          uVar112 = auVar74._8_4_;
          uVar114 = auVar74._12_4_;
          auVar128._0_6_ =
               CONCAT15((char)((uVar51 >> 10) >> 8),
                        CONCAT14((char)(uVar51 >> 10),(uint)((ushort)(uVar43 >> 10) & 0x3ff))) &
               0x3ffffffffff;
          auVar128._6_2_ = 0;
          auVar128[8] = (undefined1)(uVar112 >> 10);
          auVar128[9] = (byte)((uVar112 >> 10) >> 8) & 3;
          auVar128._10_2_ = 0;
          auVar128[0xc] = (undefined1)(uVar114 >> 10);
          auVar128[0xd] = (byte)((uVar114 >> 10) >> 8) & 3;
          auVar128._14_2_ = 0;
          auVar135._0_8_ = CONCAT44(uVar51 >> 0x14,uVar43 >> 0x14) & 0xfffff3fffffff3ff;
          auVar135._8_4_ = uVar112 >> 0x14 & 0xfffff3ff;
          auVar135._12_4_ = uVar114 >> 0x14 & 0xfffff3ff;
          uVar137 = uVar43 >> 0x1e;
          uVar145 = uVar51 >> 0x1e;
          uVar147 = uVar112 >> 0x1e;
          uVar149 = uVar114 >> 0x1e;
          auVar74 = NEON_ucvtf(auVar120,4);
          auVar57 = NEON_ucvtf(auVar128,4);
          fVar94 = auVar17._0_4_;
          fVar29 = fVar94 + auVar74._0_4_ * 0.0019550342;
          fVar64 = auVar17._4_4_;
          fVar162 = fVar64 + auVar74._4_4_ * 0.0019550342;
          fVar27 = auVar17._8_4_;
          fVar136 = auVar17._12_4_;
          fVar31 = fVar27 + auVar74._8_4_ * 0.0019550342;
          fVar40 = fVar136 + auVar74._12_4_ * 0.0019550342;
          fVar13 = fVar94 + auVar57._0_4_ * 0.0019550342;
          fVar55 = fVar64 + auVar57._4_4_ * 0.0019550342;
          fVar34 = fVar27 + auVar57._8_4_ * 0.0019550342;
          fVar72 = fVar136 + auVar57._12_4_ * 0.0019550342;
          auVar74 = NEON_ucvtf(auVar135,4);
          fVar94 = fVar94 + auVar74._0_4_ * 0.0019550342;
          fVar64 = fVar64 + auVar74._4_4_ * 0.0019550342;
          fVar27 = fVar27 + auVar74._8_4_ * 0.0019550342;
          fVar136 = fVar136 + auVar74._12_4_ * 0.0019550342;
          auVar129._0_4_ = auVar18._0_4_ - (fVar29 * fVar29 + fVar13 * fVar13 + fVar94 * fVar94);
          auVar129._4_4_ = auVar18._4_4_ - (fVar162 * fVar162 + fVar55 * fVar55 + fVar64 * fVar64);
          auVar129._8_4_ = auVar18._8_4_ - (fVar31 * fVar31 + fVar34 * fVar34 + fVar27 * fVar27);
          auVar129._12_4_ = auVar18._12_4_ - (fVar40 * fVar40 + fVar72 * fVar72 + fVar136 * fVar136)
          ;
          auVar74 = NEON_fmax(auVar129,ZEXT216(0),4);
          fVar70 = SQRT(auVar74._0_4_);
          fVar32 = SQRT(auVar74._4_4_);
          fVar53 = SQRT(auVar74._8_4_);
          fVar25 = SQRT(auVar74._12_4_);
          uVar138 = (uint)fVar13 ^ ((uint)fVar13 ^ (uint)fVar29) & -(uint)(uVar137 == 3);
          uVar146 = (uint)fVar55 ^ ((uint)fVar55 ^ (uint)fVar162) & -(uint)(uVar145 == 3);
          uVar148 = (uint)fVar34 ^ ((uint)fVar34 ^ (uint)fVar31) & -(uint)(uVar147 == 3);
          uVar150 = (uint)fVar72 ^ ((uint)fVar72 ^ (uint)fVar40) & -(uint)(uVar149 == 3);
          uVar47 = (uint)fVar13 ^ ((uint)fVar13 ^ (uint)fVar94) & -(uint)(uVar137 == 2);
          uVar111 = (uint)fVar55 ^ ((uint)fVar55 ^ (uint)fVar64) & -(uint)(uVar145 == 2);
          uVar113 = (uint)fVar34 ^ ((uint)fVar34 ^ (uint)fVar27) & -(uint)(uVar147 == 2);
          uVar115 = (uint)fVar72 ^ ((uint)fVar72 ^ (uint)fVar136) & -(uint)(uVar149 == 2);
          *pfVar7 = (float)(uVar138 ^ (uVar138 ^ (uint)fVar70) & -(uint)(uVar43 < 0x40000000));
          pfVar7[1] = (float)(uVar47 ^ (uVar47 ^ (uint)fVar70) & -(uint)(uVar137 == 1));
          pfVar7[2] = (float)((uint)fVar94 ^ ((uint)fVar94 ^ (uint)fVar70) & -(uint)(uVar137 == 2));
          pfVar7[3] = (float)((uint)fVar29 ^ ((uint)fVar29 ^ (uint)fVar70) & -(uint)(uVar137 == 3));
          pfVar7[4] = (float)(uVar146 ^ (uVar146 ^ (uint)fVar32) & -(uint)(uVar51 < 0x40000000));
          pfVar7[5] = (float)(uVar111 ^ (uVar111 ^ (uint)fVar32) & -(uint)(uVar145 == 1));
          pfVar7[6] = (float)((uint)fVar64 ^ ((uint)fVar64 ^ (uint)fVar32) & -(uint)(uVar145 == 2));
          pfVar7[7] = (float)((uint)fVar162 ^ ((uint)fVar162 ^ (uint)fVar32) & -(uint)(uVar145 == 3)
                             );
          pfVar7[8] = (float)(uVar148 ^ (uVar148 ^ (uint)fVar53) & -(uint)(uVar112 < 0x40000000));
          pfVar7[9] = (float)(uVar113 ^ (uVar113 ^ (uint)fVar53) & -(uint)(uVar147 == 1));
          pfVar7[10] = (float)((uint)fVar27 ^ ((uint)fVar27 ^ (uint)fVar53) & -(uint)(uVar147 == 2))
          ;
          pfVar7[0xb] = (float)((uint)fVar31 ^ ((uint)fVar31 ^ (uint)fVar53) & -(uint)(uVar147 == 3)
                               );
          pfVar7[0xc] = (float)(uVar150 ^ (uVar150 ^ (uint)fVar25) & -(uint)(uVar114 < 0x40000000));
          pfVar7[0xd] = (float)(uVar115 ^ (uVar115 ^ (uint)fVar25) & -(uint)(uVar149 == 1));
          pfVar7[0xe] = (float)((uint)fVar136 ^
                               ((uint)fVar136 ^ (uint)fVar25) & -(uint)(uVar149 == 2));
          pfVar7[0xf] = (float)((uint)fVar40 ^ ((uint)fVar40 ^ (uint)fVar25) & -(uint)(uVar149 == 3)
                               );
          pfVar7 = pfVar7 + 0x10;
          lVar8 = lVar11 + 4;
          uVar102 = lVar11 + 8;
          lVar11 = lVar8;
          pauVar4 = pauVar4 + 1;
        } while (uVar102 <= param_3);
      }
      lVar11 = param_3 - lVar8;
      if (lVar11 != 0) {
        uVar15 = NEON_fmov(0xbf800000,4);
        puVar10 = (uint *)(*pauVar5 + lVar8 * 4);
        pfVar7 = param_2 + lVar8 * 4 + 2;
        do {
          uVar43 = *puVar10;
          fStack_74 = (float)(uVar43 >> 0x1e);
          fStack_80 = (float)(uVar43 & 0x3ff) * 0.0019550342 + -1.0;
          uVar102 = NEON_ushl(CONCAT44(uVar43,uVar43),0xffffffecfffffff6,4);
          uVar16 = NEON_ucvtf(uVar102 & 0x3ff000003ff,4);
          fStack_7c = (float)uVar15 + (float)uVar16 * 0.0019550342;
          fStack_78 = (float)((ulong)uVar15 >> 0x20) + (float)((ulong)uVar16 >> 0x20) * 0.0019550342
          ;
          pauVar5 = (undefined1 (*) [16])&fStack_80;
          func_0x00010a005ddc(&fStack_80);
          pfVar7[-2] = extraout_s0;
          pfVar7[-1] = extraout_s1;
          *pfVar7 = extraout_s2;
          pfVar7[1] = extraout_s3;
          lVar11 = lVar11 + -1;
          puVar10 = puVar10 + 1;
          pfVar7 = pfVar7 + 4;
        } while (lVar11 != 0);
      }
      return pauVar5;
    }
    if (param_4 == 2) {
      fStack_80 = (float)unaff_d11;
      fStack_7c = (float)((ulong)unaff_d11 >> 0x20);
      fStack_78 = (float)unaff_d10;
      fStack_74 = (float)((ulong)unaff_d10 >> 0x20);
      pauVar4 = pauVar5;
      if (param_3 < 4) {
        lVar8 = 0;
      }
      else {
        auVar17 = NEON_fmov(0xbf800000,4);
        auVar18 = NEON_fmov(0x3f800000,4);
        lVar11 = 0;
        pfVar7 = param_2;
        pauVar12 = pauVar5;
        do {
          auVar74 = *pauVar12;
          uVar43 = auVar74._4_4_ >> 10;
          uVar47 = auVar74._8_4_ >> 10;
          uVar51 = auVar74._12_4_ >> 10;
          auVar61._0_6_ =
               CONCAT15(auVar74[5],CONCAT14(auVar74[4],(uint)(auVar74._0_2_ & 0x3ff))) &
               0x3ffffffffff;
          auVar61._6_2_ = 0;
          auVar61[8] = auVar74[8];
          auVar61[9] = auVar74[9] & 3;
          auVar61._10_2_ = 0;
          auVar61[0xc] = auVar74[0xc];
          auVar61[0xd] = auVar74[0xd] & 3;
          auVar61._14_2_ = 0;
          auVar39._0_6_ =
               CONCAT15((char)(uVar43 >> 8),
                        CONCAT14((char)uVar43,(uint)((ushort)(auVar74._0_4_ >> 10) & 0x3ff))) &
               0x3ffffffffff;
          auVar39._6_2_ = 0;
          auVar39[8] = (undefined1)uVar47;
          auVar39[9] = (byte)(uVar47 >> 8) & 3;
          auVar39._10_2_ = 0;
          auVar39[0xc] = (undefined1)uVar51;
          auVar39[0xd] = (byte)(uVar51 >> 8) & 3;
          auVar39._14_2_ = 0;
          auVar24._0_8_ = CONCAT44(auVar74._4_4_ >> 0x14,auVar74._0_4_ >> 0x14) & 0xfffff3fffffff3ff
          ;
          auVar24._8_4_ = auVar74._8_4_ >> 0x14 & 0xfffff3ff;
          auVar24._12_4_ = auVar74._12_4_ >> 0x14 & 0xfffff3ff;
          auVar62 = NEON_ucvtf(auVar61,4);
          auVar57 = NEON_ucvtf(auVar39,4);
          fStack_180 = auVar17._0_4_;
          fStack_17c = auVar17._4_4_;
          fStack_178 = auVar17._8_4_;
          fStack_174 = auVar17._12_4_;
          auVar74 = NEON_ucvtf(auVar24,4);
          fVar34 = fStack_180 + auVar62._0_4_ * 0.0009775171 * 2.0;
          fVar72 = fStack_17c + auVar62._4_4_ * 0.0009775171 * 2.0;
          fVar70 = fStack_178 + auVar62._8_4_ * 0.0009775171 * 2.0;
          fVar32 = fStack_174 + auVar62._12_4_ * 0.0009775171 * 2.0;
          fVar53 = fStack_180 + auVar57._0_4_ * 0.0009775171 * 2.0;
          fVar25 = fStack_17c + auVar57._4_4_ * 0.0009775171 * 2.0;
          fVar94 = fStack_178 + auVar57._8_4_ * 0.0009775171 * 2.0;
          fVar64 = fStack_174 + auVar57._12_4_ * 0.0009775171 * 2.0;
          fStack_180 = fStack_180 + auVar74._0_4_ * 0.0009775171 * 2.0;
          fStack_17c = fStack_17c + auVar74._4_4_ * 0.0009775171 * 2.0;
          fStack_178 = fStack_178 + auVar74._8_4_ * 0.0009775171 * 2.0;
          fStack_174 = fStack_174 + auVar74._12_4_ * 0.0009775171 * 2.0;
          fVar13 = fVar53 * fVar53 + fVar34 * fVar34 + fStack_180 * fStack_180;
          fVar55 = fVar25 * fVar25 + fVar72 * fVar72 + fStack_17c * fStack_17c;
          fStack_1a0 = auVar18._0_4_;
          fStack_19c = auVar18._4_4_;
          fStack_198 = auVar18._8_4_;
          fStack_194 = auVar18._12_4_;
          fStack_1a0 = fStack_1a0 / SQRT(fVar13 + 1e-06);
          fStack_19c = fStack_19c / SQRT(fVar55 + 1e-06);
          uStack_b0 = CONCAT44(fVar55 * fStack_19c * 1.5707964,fVar13 * fStack_1a0 * 1.5707964);
          uVar15 = ___sincosf_stret();
          uVar16 = ___sincosf_stret(uStack_b0);
          uVar168 = ___sincosf_stret();
          uVar169 = ___sincosf_stret();
          fStack_1a0 = fStack_1a0 * (float)uVar16;
          fStack_19c = fStack_19c * (float)uVar15;
          fVar13 = (fStack_198 /
                   SQRT(fVar94 * fVar94 + fVar70 * fVar70 + fStack_178 * fStack_178 + 1e-06)) *
                   (float)uVar168;
          fVar55 = (fStack_194 /
                   SQRT(fVar64 * fVar64 + fVar32 * fVar32 + fStack_174 * fStack_174 + 1e-06)) *
                   (float)uVar169;
          *pfVar7 = fVar34 * fStack_1a0;
          pfVar7[1] = fVar53 * fStack_1a0;
          pfVar7[2] = fStack_180 * fStack_1a0;
          pfVar7[3] = (float)((ulong)uVar16 >> 0x20);
          pfVar7[4] = fVar72 * fStack_19c;
          pfVar7[5] = fVar25 * fStack_19c;
          pfVar7[6] = fStack_17c * fStack_19c;
          pfVar7[7] = (float)((ulong)uVar15 >> 0x20);
          pfVar7[8] = fVar70 * fVar13;
          pfVar7[9] = fVar94 * fVar13;
          pfVar7[10] = fStack_178 * fVar13;
          pfVar7[0xb] = (float)((ulong)uVar168 >> 0x20);
          pfVar7[0xc] = fVar32 * fVar55;
          pfVar7[0xd] = fVar64 * fVar55;
          pfVar7[0xe] = fStack_174 * fVar55;
          pfVar7[0xf] = (float)((ulong)uVar169 >> 0x20);
          pfVar7 = pfVar7 + 0x10;
          lVar8 = lVar11 + 4;
          uVar102 = lVar11 + 8;
          lVar11 = lVar8;
          pauVar12 = pauVar12 + 1;
        } while (uVar102 <= param_3);
      }
      lVar11 = param_3 - lVar8;
      if (lVar11 != 0) {
        param_2 = param_2 + lVar8 * 4 + 3;
        uVar15 = NEON_fmov(0xbf800000,4);
        puVar10 = (uint *)(*pauVar5 + lVar8 * 4);
        do {
          uVar43 = *puVar10;
          fVar13 = (float)(uVar43 >> 0x14 & 0x3ff) * 0.0009775171;
          fVar34 = fVar13 + fVar13 + -1.0;
          uVar16 = NEON_ucvtf(CONCAT44(uVar43 >> 10,uVar43) & 0x3ff000003ff,4);
          fVar13 = (float)uVar16 * 0.0009775171;
          fVar55 = (float)((ulong)uVar16 >> 0x20) * 0.0009775171;
          fVar72 = fVar13 + fVar13 + (float)uVar15;
          fVar55 = fVar55 + fVar55 + (float)((ulong)uVar15 >> 0x20);
          uVar16 = ___sincosf_stret();
          fVar13 = (1.0 / SQRT(fVar34 * fVar34 + fVar72 * fVar72 + fVar55 * fVar55 + 1e-06)) *
                   (float)uVar16;
          *(ulong *)(param_2 + -3) = CONCAT44(fVar55 * fVar13,fVar72 * fVar13);
          param_2[-1] = fVar34 * fVar13;
          *param_2 = (float)((ulong)uVar16 >> 0x20);
          param_2 = param_2 + 4;
          lVar11 = lVar11 + -1;
          puVar10 = puVar10 + 1;
        } while (lVar11 != 0);
      }
      return pauVar4;
    }
  }
  else {
    if (param_4 == 3) {
      if (param_3 < 4) {
        lVar8 = 0;
      }
      else {
        auVar17 = NEON_fmov(0xbf800000,4);
        auVar18 = NEON_fmov(0x3f800000,4);
        lVar11 = 0;
        pfVar7 = param_2;
        pauVar4 = pauVar5;
        do {
          auVar74 = *pauVar4;
          auVar93._0_6_ =
               CONCAT15(auVar74[5],CONCAT14(auVar74[4],(uint)(auVar74._0_2_ & 0x3ff))) &
               0x3ffffffffff;
          auVar93._6_2_ = 0;
          auVar93[8] = auVar74[8];
          auVar93[9] = auVar74[9] & 3;
          auVar93._10_2_ = 0;
          auVar93[0xc] = auVar74[0xc];
          auVar93[0xd] = auVar74[0xd] & 3;
          auVar93._14_2_ = 0;
          uVar43 = auVar74._4_4_ >> 10;
          uVar47 = auVar74._8_4_ >> 10;
          uVar51 = auVar74._12_4_ >> 10;
          auVar100._0_6_ =
               CONCAT15((char)(uVar43 >> 8),
                        CONCAT14((char)uVar43,(uint)((ushort)(auVar74._0_4_ >> 10) & 0x3ff))) &
               0x3ffffffffff;
          auVar100._6_2_ = 0;
          auVar100[8] = (undefined1)uVar47;
          auVar100[9] = (byte)(uVar47 >> 8) & 3;
          auVar100._10_2_ = 0;
          auVar100[0xc] = (undefined1)uVar51;
          auVar100[0xd] = (byte)(uVar51 >> 8) & 3;
          auVar100._14_2_ = 0;
          auVar83._0_8_ = CONCAT44(auVar74._4_4_ >> 0x14,auVar74._0_4_ >> 0x14) & 0xfffff3fffffff3ff
          ;
          auVar83._8_4_ = auVar74._8_4_ >> 0x14 & 0xfffff3ff;
          auVar83._12_4_ = auVar74._12_4_ >> 0x14 & 0xfffff3ff;
          auVar57 = NEON_ucvtf(auVar93,4);
          auVar62 = NEON_ucvtf(auVar100,4);
          auVar74 = NEON_ucvtf(auVar83,4);
          fVar29 = auVar17._0_4_;
          fVar162 = fVar29 + auVar57._0_4_ * 0.0009775171 * 2.0;
          fVar31 = auVar17._4_4_;
          fVar40 = fVar31 + auVar57._4_4_ * 0.0009775171 * 2.0;
          fVar41 = auVar17._8_4_;
          fVar48 = auVar17._12_4_;
          fVar44 = fVar41 + auVar57._8_4_ * 0.0009775171 * 2.0;
          fVar45 = fVar48 + auVar57._12_4_ * 0.0009775171 * 2.0;
          fVar70 = fVar29 + auVar62._0_4_ * 0.0009775171 * 2.0;
          fVar32 = fVar31 + auVar62._4_4_ * 0.0009775171 * 2.0;
          fVar53 = fVar41 + auVar62._8_4_ * 0.0009775171 * 2.0;
          fVar25 = fVar48 + auVar62._12_4_ * 0.0009775171 * 2.0;
          fVar94 = fVar29 + auVar74._0_4_ * 0.0009775171 * 2.0;
          fVar64 = fVar31 + auVar74._4_4_ * 0.0009775171 * 2.0;
          fVar27 = fVar41 + auVar74._8_4_ * 0.0009775171 * 2.0;
          fVar136 = fVar48 + auVar74._12_4_ * 0.0009775171 * 2.0;
          fVar13 = auVar18._0_4_ /
                   (fVar162 * fVar162 + fVar70 * fVar70 + fVar94 * fVar94 + auVar18._0_4_);
          fVar55 = auVar18._4_4_ /
                   (fVar40 * fVar40 + fVar32 * fVar32 + fVar64 * fVar64 + auVar18._4_4_);
          fVar34 = auVar18._8_4_ /
                   (fVar44 * fVar44 + fVar53 * fVar53 + fVar27 * fVar27 + auVar18._8_4_);
          fVar72 = auVar18._12_4_ /
                   (fVar45 * fVar45 + fVar25 * fVar25 + fVar136 * fVar136 + auVar18._12_4_);
          fVar13 = fVar13 + fVar13;
          fVar55 = fVar55 + fVar55;
          fVar34 = fVar34 + fVar34;
          fVar72 = fVar72 + fVar72;
          *pfVar7 = fVar162 * fVar13;
          pfVar7[1] = fVar70 * fVar13;
          pfVar7[2] = fVar94 * fVar13;
          pfVar7[3] = fVar13 + fVar29;
          pfVar7[4] = fVar40 * fVar55;
          pfVar7[5] = fVar32 * fVar55;
          pfVar7[6] = fVar64 * fVar55;
          pfVar7[7] = fVar55 + fVar31;
          pfVar7[8] = fVar44 * fVar34;
          pfVar7[9] = fVar53 * fVar34;
          pfVar7[10] = fVar27 * fVar34;
          pfVar7[0xb] = fVar34 + fVar41;
          pfVar7[0xc] = fVar45 * fVar72;
          pfVar7[0xd] = fVar25 * fVar72;
          pfVar7[0xe] = fVar136 * fVar72;
          pfVar7[0xf] = fVar72 + fVar48;
          pfVar7 = pfVar7 + 0x10;
          lVar8 = lVar11 + 4;
          uVar102 = lVar11 + 8;
          lVar11 = lVar8;
          pauVar4 = pauVar4 + 1;
        } while (uVar102 <= param_3);
      }
      lVar11 = param_3 - lVar8;
      if (lVar11 != 0) {
        uVar15 = NEON_fmov(0xbf800000,4);
        puVar10 = (uint *)(*pauVar5 + lVar8 * 4);
        pfVar7 = param_2 + lVar8 * 4;
        do {
          uVar43 = *puVar10;
          fVar13 = (float)(uVar43 >> 0x14 & 0x3ff) * 0.0009775171;
          uVar16 = NEON_ucvtf(CONCAT44(uVar43 >> 10,uVar43) & 0x3ff000003ff,4);
          fVar55 = (float)uVar16 * 0.0009775171;
          fVar34 = (float)((ulong)uVar16 >> 0x20) * 0.0009775171;
          fVar55 = fVar55 + fVar55 + (float)uVar15;
          fVar34 = fVar34 + fVar34 + (float)((ulong)uVar15 >> 0x20);
          fVar13 = fVar13 + fVar13 + -1.0;
          fVar72 = 2.0 / (fVar13 * fVar13 + fVar55 * fVar55 + fVar34 * fVar34 + 1.0);
          pfVar7[2] = fVar13 * fVar72;
          pfVar7[3] = fVar72 + -1.0;
          *pfVar7 = fVar55 * fVar72;
          pfVar7[1] = fVar34 * fVar72;
          lVar11 = lVar11 + -1;
          puVar10 = puVar10 + 1;
          pfVar7 = pfVar7 + 4;
        } while (lVar11 != 0);
      }
      return pauVar5;
    }
    if (param_4 == 4) {
      if (param_3 < 4) {
        lVar8 = 0;
      }
      else {
        auVar17 = NEON_fmov(0xbf800000,4);
        fStack_78 = auVar17._8_4_;
        fStack_74 = auVar17._12_4_;
        fStack_80 = auVar17._0_4_;
        fStack_7c = auVar17._4_4_;
        auVar17 = NEON_fmov(0x3f800000,4);
        fStack_88 = auVar17._8_4_;
        fStack_84 = auVar17._12_4_;
        fStack_90 = auVar17._0_4_;
        fStack_8c = auVar17._4_4_;
        pfVar7 = param_2;
        lVar11 = 0;
        uVar102 = param_3;
        pauVar4 = pauVar5;
        do {
          auVar17 = *pauVar4;
          auVar38._0_6_ =
               CONCAT15(auVar17[5],CONCAT14(auVar17[4],(uint)(auVar17._0_2_ & 0x3ff))) &
               0x3ffffffffff;
          auVar38._6_2_ = 0;
          auVar38[8] = auVar17[8];
          auVar38[9] = auVar17[9] & 3;
          auVar38._10_2_ = 0;
          auVar38[0xc] = auVar17[0xc];
          auVar38[0xd] = auVar17[0xd] & 3;
          auVar38._14_2_ = 0;
          uVar43 = auVar17._4_4_ >> 10;
          uVar47 = auVar17._8_4_ >> 10;
          uVar51 = auVar17._12_4_ >> 10;
          auVar60._0_6_ =
               CONCAT15((char)(uVar43 >> 8),
                        CONCAT14((char)uVar43,(uint)((ushort)(auVar17._0_4_ >> 10) & 0x3ff))) &
               0x3ffffffffff;
          auVar60._6_2_ = 0;
          auVar60[8] = (undefined1)uVar47;
          auVar60[9] = (byte)(uVar47 >> 8) & 3;
          auVar60._10_2_ = 0;
          auVar60[0xc] = (undefined1)uVar51;
          auVar60[0xd] = (byte)(uVar51 >> 8) & 3;
          auVar60._14_2_ = 0;
          auVar23._0_8_ = CONCAT44(auVar17._4_4_ >> 0x14,auVar17._0_4_ >> 0x14) & 0xfffff3fffffff3ff
          ;
          auVar23._8_4_ = auVar17._8_4_ >> 0x14 & 0xfffff3ff;
          auVar23._12_4_ = auVar17._12_4_ >> 0x14 & 0xfffff3ff;
          auVar18 = NEON_ucvtf(auVar38,4);
          auVar74 = NEON_ucvtf(auVar60,4);
          auVar17 = NEON_ucvtf(auVar23,4);
          fVar13 = fStack_80 + auVar18._0_4_ * 0.0009775171 * 2.0;
          fVar55 = fStack_7c + auVar18._4_4_ * 0.0009775171 * 2.0;
          fVar34 = fStack_78 + auVar18._8_4_ * 0.0009775171 * 2.0;
          fVar72 = fStack_74 + auVar18._12_4_ * 0.0009775171 * 2.0;
          fVar70 = fStack_80 + auVar74._0_4_ * 0.0009775171 * 2.0;
          fVar32 = fStack_7c + auVar74._4_4_ * 0.0009775171 * 2.0;
          fVar53 = fStack_78 + auVar74._8_4_ * 0.0009775171 * 2.0;
          fVar25 = fStack_74 + auVar74._12_4_ * 0.0009775171 * 2.0;
          fVar94 = fStack_80 + auVar17._0_4_ * 0.0009775171 * 2.0;
          fVar64 = fStack_7c + auVar17._4_4_ * 0.0009775171 * 2.0;
          fVar27 = fStack_78 + auVar17._8_4_ * 0.0009775171 * 2.0;
          fVar136 = fStack_74 + auVar17._12_4_ * 0.0009775171 * 2.0;
          fVar29 = fVar13 * fVar13 + fVar70 * fVar70 + fVar94 * fVar94;
          fVar162 = fVar55 * fVar55 + fVar32 * fVar32 + fVar64 * fVar64;
          fVar31 = fVar34 * fVar34 + fVar53 * fVar53 + fVar27 * fVar27;
          fVar40 = fVar72 * fVar72 + fVar25 * fVar25 + fVar136 * fVar136;
          auVar76._0_4_ = -(uint)(2.0 <= fVar29);
          auVar76._4_4_ = -(uint)(2.0 <= fVar162);
          auVar76._8_4_ = -(uint)(2.0 <= fVar31);
          auVar76._12_4_ = -(uint)(2.0 <= fVar40);
          auVar17 = NEON_ext(auVar76,auVar76,8,1);
          uVar15 = CONCAT17((byte)((uint)auVar76._4_4_ >> 0x18) | auVar17[7],
                            CONCAT16((byte)((uint)auVar76._4_4_ >> 0x10) | auVar17[6],
                                     CONCAT15((byte)((uint)auVar76._4_4_ >> 8) | auVar17[5],
                                              CONCAT14((byte)auVar76._4_4_ | auVar17[4],
                                                       CONCAT13((byte)((uint)auVar76._0_4_ >> 0x18)
                                                                | auVar17[3],
                                                                CONCAT12((byte)((uint)auVar76._0_4_
                                                                               >> 0x10) | auVar17[2]
                                                                         ,CONCAT11((byte)((uint)
                                                  auVar76._0_4_ >> 8) | auVar17[1],
                                                  (byte)auVar76._0_4_ | auVar17[0])))))));
          uVar15 = NEON_umaxp(uVar15,uVar15,4);
          if ((int)uVar15 != 0) {
            if (3 < uVar102) {
              uVar102 = 4;
            }
            goto SUB_10a00935c;
          }
          fVar41 = SQRT(2.0 - fVar29);
          fVar44 = SQRT(2.0 - fVar162);
          fVar45 = SQRT(2.0 - fVar31);
          fVar48 = SQRT(2.0 - fVar40);
          *pfVar7 = fVar13 * fVar41;
          pfVar7[1] = fVar70 * fVar41;
          pfVar7[2] = fVar94 * fVar41;
          pfVar7[3] = fStack_90 - fVar29;
          pfVar7[4] = fVar55 * fVar44;
          pfVar7[5] = fVar32 * fVar44;
          pfVar7[6] = fVar64 * fVar44;
          pfVar7[7] = fStack_8c - fVar162;
          pfVar7[8] = fVar34 * fVar45;
          pfVar7[9] = fVar53 * fVar45;
          pfVar7[10] = fVar27 * fVar45;
          pfVar7[0xb] = fStack_88 - fVar31;
          pfVar7[0xc] = fVar72 * fVar48;
          pfVar7[0xd] = fVar25 * fVar48;
          pfVar7[0xe] = fVar136 * fVar48;
          pfVar7[0xf] = fStack_84 - fVar40;
          lVar8 = lVar11 + 4;
          uVar101 = lVar11 + 8;
          pfVar7 = pfVar7 + 0x10;
          uVar102 = uVar102 - 4;
          lVar11 = lVar8;
          pauVar4 = pauVar4 + 1;
        } while (uVar101 <= param_3);
      }
      pauVar4 = (undefined1 (*) [16])(*pauVar5 + lVar8 * 4);
      pfVar7 = param_2 + lVar8 * 4;
      uVar102 = param_3 - lVar8;
SUB_10a00935c:
      if (uVar102 != 0) {
        pfVar7 = pfVar7 + 3;
        uVar15 = NEON_fmov(0xbf800000,4);
        pauVar5 = pauVar4;
        do {
          pauVar4 = (undefined1 (*) [16])(*pauVar5 + 4);
          uVar43 = *(uint *)*pauVar5;
          fVar13 = (float)(uVar43 >> 0x14 & 0x3ff) * 0.0009775171;
          uVar16 = NEON_ucvtf(CONCAT44(uVar43 >> 10,uVar43) & 0x3ff000003ff,4);
          fVar55 = (float)uVar16 * 0.0009775171;
          fVar34 = (float)((ulong)uVar16 >> 0x20) * 0.0009775171;
          fVar72 = fVar55 + fVar55 + (float)uVar15;
          fVar34 = fVar34 + fVar34 + (float)((ulong)uVar15 >> 0x20);
          fVar55 = -1.0;
          fVar13 = fVar13 + fVar13 + -1.0;
          fVar70 = fVar13 * fVar13 + fVar72 * fVar72 + fVar34 * fVar34;
          if (2.0 <= fVar70) {
            uVar16 = 0;
            fVar13 = 0.0;
          }
          else {
            fVar32 = SQRT(2.0 - fVar70);
            fVar55 = 1.0 - fVar70;
            uVar16 = CONCAT44(fVar34 * fVar32,fVar72 * fVar32);
            fVar13 = fVar13 * fVar32;
          }
          *(undefined8 *)(pfVar7 + -3) = uVar16;
          pfVar7[-1] = fVar13;
          *pfVar7 = fVar55;
          pfVar7 = pfVar7 + 4;
          uVar102 = uVar102 - 1;
          pauVar5 = pauVar4;
        } while (uVar102 != 0);
      }
      return pauVar4;
    }
    if (param_4 == 5) {
      if (param_3 < 4) {
        lVar8 = 0;
      }
      else {
        auVar17 = NEON_fmov(0xbf800000,4);
        auVar18 = NEON_fmov(0x3f800000,4);
        auVar74 = NEON_fmov(0xc0c00000,4);
        lVar11 = 0;
        pfVar7 = param_2;
        pauVar4 = pauVar5;
        do {
          auVar57 = *pauVar4;
          auVar110._0_6_ =
               CONCAT15(auVar57[5],CONCAT14(auVar57[4],(uint)(auVar57._0_2_ & 0x3ff))) &
               0x3ffffffffff;
          auVar110._6_2_ = 0;
          auVar110[8] = auVar57[8];
          auVar110[9] = auVar57[9] & 3;
          auVar110._10_2_ = 0;
          auVar110[0xc] = auVar57[0xc];
          auVar110[0xd] = auVar57[0xd] & 3;
          auVar110._14_2_ = 0;
          uVar43 = auVar57._4_4_ >> 10;
          uVar47 = auVar57._8_4_ >> 10;
          uVar51 = auVar57._12_4_ >> 10;
          auVar118._0_6_ =
               CONCAT15((char)(uVar43 >> 8),
                        CONCAT14((char)uVar43,(uint)((ushort)(auVar57._0_4_ >> 10) & 0x3ff))) &
               0x3ffffffffff;
          auVar118._6_2_ = 0;
          auVar118[8] = (undefined1)uVar47;
          auVar118[9] = (byte)(uVar47 >> 8) & 3;
          auVar118._10_2_ = 0;
          auVar118[0xc] = (undefined1)uVar51;
          auVar118[0xd] = (byte)(uVar51 >> 8) & 3;
          auVar118._14_2_ = 0;
          auVar108._0_8_ =
               CONCAT44(auVar57._4_4_ >> 0x14,auVar57._0_4_ >> 0x14) & 0xfffff3fffffff3ff;
          auVar108._8_4_ = auVar57._8_4_ >> 0x14 & 0xfffff3ff;
          auVar108._12_4_ = auVar57._12_4_ >> 0x14 & 0xfffff3ff;
          auVar62 = NEON_ucvtf(auVar110,4);
          auVar119 = NEON_ucvtf(auVar118,4);
          auVar57 = NEON_ucvtf(auVar108,4);
          fVar41 = auVar17._0_4_;
          fVar49 = fVar41 + auVar62._0_4_ * 0.0009775171 * 2.0;
          fVar44 = auVar17._4_4_;
          fVar52 = fVar44 + auVar62._4_4_ * 0.0009775171 * 2.0;
          fVar45 = auVar17._8_4_;
          fVar48 = auVar17._12_4_;
          fVar63 = fVar45 + auVar62._8_4_ * 0.0009775171 * 2.0;
          fVar66 = fVar48 + auVar62._12_4_ * 0.0009775171 * 2.0;
          fVar29 = fVar41 + auVar119._0_4_ * 0.0009775171 * 2.0;
          fVar162 = fVar44 + auVar119._4_4_ * 0.0009775171 * 2.0;
          fVar31 = fVar45 + auVar119._8_4_ * 0.0009775171 * 2.0;
          fVar40 = fVar48 + auVar119._12_4_ * 0.0009775171 * 2.0;
          fVar41 = fVar41 + auVar57._0_4_ * 0.0009775171 * 2.0;
          fVar44 = fVar44 + auVar57._4_4_ * 0.0009775171 * 2.0;
          fVar45 = fVar45 + auVar57._8_4_ * 0.0009775171 * 2.0;
          fVar48 = fVar48 + auVar57._12_4_ * 0.0009775171 * 2.0;
          fVar70 = (fVar49 * fVar49 + fVar29 * fVar29 + fVar41 * fVar41) * 0.17157288;
          fVar53 = (fVar52 * fVar52 + fVar162 * fVar162 + fVar44 * fVar44) * 0.17157288;
          fVar94 = (fVar63 * fVar63 + fVar31 * fVar31 + fVar45 * fVar45) * 0.17157288;
          fVar27 = (fVar66 * fVar66 + fVar40 * fVar40 + fVar48 * fVar48) * 0.17157288;
          fVar13 = auVar18._0_4_;
          fVar55 = auVar18._4_4_;
          fVar34 = auVar18._8_4_;
          fVar72 = auVar18._12_4_;
          fVar68 = fVar13 / ((fVar70 + fVar13) * (fVar70 + fVar13));
          fVar71 = fVar55 / ((fVar53 + fVar55) * (fVar53 + fVar55));
          fVar77 = fVar34 / ((fVar94 + fVar34) * (fVar94 + fVar34));
          fVar78 = fVar72 / ((fVar27 + fVar72) * (fVar27 + fVar72));
          fVar32 = (fVar13 - fVar70) * 1.6568543 * fVar68;
          fVar25 = (fVar55 - fVar53) * 1.6568543 * fVar71;
          fVar64 = (fVar34 - fVar94) * 1.6568543 * fVar77;
          fVar136 = (fVar72 - fVar27) * 1.6568543 * fVar78;
          *pfVar7 = fVar49 * fVar32;
          pfVar7[1] = fVar29 * fVar32;
          pfVar7[2] = fVar41 * fVar32;
          pfVar7[3] = (fVar70 * (fVar70 + auVar74._0_4_) + fVar13) * fVar68;
          pfVar7[4] = fVar52 * fVar25;
          pfVar7[5] = fVar162 * fVar25;
          pfVar7[6] = fVar44 * fVar25;
          pfVar7[7] = (fVar53 * (fVar53 + auVar74._4_4_) + fVar55) * fVar71;
          pfVar7[8] = fVar63 * fVar64;
          pfVar7[9] = fVar31 * fVar64;
          pfVar7[10] = fVar45 * fVar64;
          pfVar7[0xb] = (fVar94 * (fVar94 + auVar74._8_4_) + fVar34) * fVar77;
          pfVar7[0xc] = fVar66 * fVar136;
          pfVar7[0xd] = fVar40 * fVar136;
          pfVar7[0xe] = fVar48 * fVar136;
          pfVar7[0xf] = (fVar27 * (fVar27 + auVar74._12_4_) + fVar72) * fVar78;
          pfVar7 = pfVar7 + 0x10;
          lVar8 = lVar11 + 4;
          uVar102 = lVar11 + 8;
          lVar11 = lVar8;
          pauVar4 = pauVar4 + 1;
        } while (uVar102 <= param_3);
      }
      lVar11 = param_3 - lVar8;
      if (lVar11 != 0) {
        uVar15 = NEON_fmov(0xbf800000,4);
        puVar10 = (uint *)(*pauVar5 + lVar8 * 4);
        pfVar7 = param_2 + lVar8 * 4;
        do {
          uVar43 = *puVar10;
          fVar13 = (float)(uVar43 >> 0x14 & 0x3ff) * 0.0009775171;
          fVar13 = fVar13 + fVar13 + -1.0;
          uVar16 = NEON_ucvtf(CONCAT44(uVar43 >> 10,uVar43) & 0x3ff000003ff,4);
          fVar55 = (float)uVar16 * 0.0009775171;
          fVar34 = (float)((ulong)uVar16 >> 0x20) * 0.0009775171;
          fVar55 = fVar55 + fVar55 + (float)uVar15;
          fVar34 = fVar34 + fVar34 + (float)((ulong)uVar15 >> 0x20);
          fVar72 = (fVar13 * fVar13 + fVar55 * fVar55 + fVar34 * fVar34) * 0.17157288;
          fVar32 = (1.0 - fVar72) * 1.6568543;
          fVar70 = 1.0 / ((fVar72 + 1.0) * (fVar72 + 1.0));
          pfVar7[2] = fVar13 * fVar32 * fVar70;
          pfVar7[3] = ((fVar72 + -6.0) * fVar72 + 1.0) * fVar70;
          *pfVar7 = fVar55 * fVar32 * fVar70;
          pfVar7[1] = fVar34 * fVar32 * fVar70;
          lVar11 = lVar11 + -1;
          puVar10 = puVar10 + 1;
          pfVar7 = pfVar7 + 4;
        } while (lVar11 != 0);
      }
      return pauVar5;
    }
  }
  pauVar5 = (undefined1 (*) [16])&UNK_10f630e62;
  FUN_10a00946c();
  lVar11 = *(long *)*pauVar5;
  if (lVar11 != 0) {
    lVar6 = *(long *)(*pauVar5 + 8);
    lVar8 = lVar11;
    if (lVar6 != lVar11) {
      do {
        lVar6 = lVar6 + -0x10;
        FUN_10a009414();
      } while (lVar6 != lVar11);
      lVar8 = *(long *)*pauVar5;
    }
    *(long *)(*pauVar5 + 8) = lVar11;
    __ZdlPv(lVar8);
  }
  return pauVar5;
}



/* Entry: 10a0082f8; end: 10a00834f;  */

long * FUN_10a0082f8(long *param_1)

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
        FUN_10a009414();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar2);
  }
  return param_1;
}



/* Entry: 10a008350; end: 10a00840f;  */

undefined8 FUN_10a008350(void)

{
  code *pcVar1;
  undefined **ppuVar2;
  long *extraout_x8;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  FUN_10a0095ac();
  ppuVar2 = &PTR___tlv_bootstrap_11340dde0;
  (*(code *)PTR___tlv_bootstrap_11340dde0)();
  if (*ppuVar2 == ppuVar2[1]) {
    _pthread_self();
    _pthread_mach_thread_np();
    __ZNSt3__19to_stringEm(auStack_50,(ulong)ppuVar2 & 0xffffffff);
    FUN_109feb280(auStack_38,&UNK_10f630ec9,auStack_50);
    FUN_10a0029c0(auStack_38);
  }
  else {
    FUN_10a0095ac(ppuVar2);
    if (*extraout_x8 != extraout_x8[1]) {
      return *(undefined8 *)(extraout_x8[1] + -0x10);
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0083dc);
  (*pcVar1)();
}



/* Entry: 10a008410; end: 10a008543;  */

void FUN_10a008410(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  float fStack_18;
  float fStack_14;
  
  uStack_50 = 0x3f800000;
  uStack_44 = 0;
  uStack_4c = 0;
  uStack_3c = 0x3f800000;
  uStack_38 = 0;
  uStack_30 = 0;
  fVar2 = param_1[6] * 0.0;
  fVar1 = (float)*(undefined8 *)(param_1 + 4);
  fVar4 = fVar1 * 0.0;
  fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  fVar5 = fVar3 * 0.0;
  uVar6 = NEON_rev64(CONCAT44(fVar5,fVar4),4);
  fVar4 = fVar4 + fVar5;
  uStack_20 = CONCAT44(fVar3 + (float)((ulong)uVar6 >> 0x20) + fVar2 + 0.0,
                       fVar1 + (float)uVar6 + fVar2 + 0.0);
  fStack_18 = param_1[6] + fVar4 + 0.0;
  fStack_14 = fVar4 + fVar2 + 1.0;
  uStack_28 = 0x3f800000;
  fVar2 = *param_1;
  fVar1 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  fStack_90 = (fVar1 * fVar1 + fVar3 * fVar3) * -2.0 + 1.0;
  fStack_8c = fVar2 * fVar1 + fVar3 * fVar4;
  fStack_8c = fStack_8c + fStack_8c;
  fStack_88 = fVar2 * fVar3 - fVar1 * fVar4;
  fStack_88 = fStack_88 + fStack_88;
  fStack_80 = fVar2 * fVar1 - fVar3 * fVar4;
  fStack_80 = fStack_80 + fStack_80;
  fStack_7c = (fVar2 * fVar2 + fVar3 * fVar3) * -2.0 + 1.0;
  fStack_78 = fVar1 * fVar3 + fVar2 * fVar4;
  fStack_78 = fStack_78 + fStack_78;
  fStack_70 = fVar2 * fVar3 + fVar1 * fVar4;
  fStack_70 = fStack_70 + fStack_70;
  fStack_6c = fVar1 * fVar3 - fVar2 * fVar4;
  fStack_6c = fStack_6c + fStack_6c;
  uStack_84 = 0;
  uStack_74 = 0;
  fStack_68 = (fVar2 * fVar2 + fVar1 * fVar1) * -2.0 + 1.0;
  uStack_5c = 0;
  uStack_64 = 0;
  uStack_54 = 0x3f800000;
  func_0x000109519fd0(&uStack_50,&fStack_90);
  return;
}



/* Entry: 10a008544; end: 10a0087af;  */

void FUN_10a008544(undefined8 *param_1,float *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  iVar3 = 0;
  fVar18 = (float)*(undefined8 *)(param_2 + 9);
  fVar8 = (float)((ulong)*(undefined8 *)(param_2 + 9) >> 0x20);
  fVar13 = param_2[8] * param_2[8] + fVar18 * fVar18 + fVar8 * fVar8;
  fVar5 = SQRT(fVar13);
  fVar18 = (float)*(undefined8 *)param_2;
  fVar10 = (float)*(undefined8 *)(param_2 + 4);
  fVar8 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  fVar12 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
  fVar11 = fVar18 * fVar18 + fVar8 * fVar8 +
           (float)*(undefined8 *)(param_2 + 2) * (float)*(undefined8 *)(param_2 + 2);
  fVar12 = fVar10 * fVar10 + fVar12 * fVar12 + param_2[6] * param_2[6];
  fVar8 = SQRT(fVar11);
  fVar10 = SQRT(fVar12);
  *param_1 = CONCAT44(fVar10,fVar8);
  *(float *)(param_1 + 1) = fVar5;
  fVar18 = fVar8;
  if (fVar11 < 0.0) {
    fVar18 = -fVar8;
  }
  fVar11 = fVar10;
  if (fVar12 < 0.0) {
    fVar11 = -fVar10;
  }
  fVar12 = fVar5;
  if (fVar13 < 0.0) {
    fVar12 = -fVar5;
  }
  while ((fVar13 = fVar11, iVar3 == 1 || (fVar13 = fVar18, iVar3 != 2))) {
    bVar4 = fVar13 <= 1e-06;
    while (iVar3 = iVar3 + 1, bVar4) {
      if (iVar3 == 2) goto LAB_10a008784;
      bVar4 = true;
    }
  }
  if (1e-06 < fVar12) {
    fVar13 = 1.0;
    fVar8 = 1.0 / fVar8;
    fVar10 = 1.0 / fVar10;
    fVar5 = 1.0 / fVar5;
    fVar11 = fVar8 * *param_2;
    fVar14 = fVar10 * param_2[5];
    fVar6 = fVar5 * param_2[10];
    fVar15 = (fVar11 - fVar14) - fVar6;
    fVar12 = (fVar14 - fVar11) - fVar6;
    fVar18 = (fVar6 - fVar11) - fVar14;
    fVar6 = fVar11 + fVar14 + fVar6;
    fVar11 = fVar15;
    if (fVar15 <= fVar6) {
      fVar11 = fVar6;
    }
    bVar1 = 2;
    if (fVar12 <= fVar11) {
      fVar12 = fVar11;
      bVar1 = fVar6 < fVar15;
    }
    bVar2 = 3;
    if (fVar18 <= fVar12) {
      fVar18 = fVar12;
      bVar2 = bVar1;
    }
    fVar7 = SQRT(fVar18 + 1.0) * 0.5;
    fVar14 = 0.25 / fVar7;
    fVar6 = (fVar5 * param_2[8] - fVar8 * param_2[2]) * fVar14;
    fVar16 = (fVar8 * param_2[1] + fVar10 * param_2[4]) * fVar14;
    fVar17 = (fVar10 * param_2[6] + fVar5 * param_2[9]) * fVar14;
    fVar11 = (fVar8 * param_2[1] - fVar10 * param_2[4]) * fVar14;
    fVar9 = (fVar8 * param_2[2] + fVar5 * param_2[8]) * fVar14;
    fVar15 = fVar6;
    fVar18 = fVar17;
    fVar8 = fVar7;
    fVar12 = fVar16;
    if (bVar2 != 2) {
      fVar15 = fVar11;
      fVar18 = fVar7;
      fVar8 = fVar17;
      fVar12 = fVar9;
    }
    fVar14 = (fVar10 * param_2[6] - fVar5 * param_2[9]) * fVar14;
    fVar10 = fVar7;
    if (bVar2 != 0) {
      fVar10 = fVar14;
      fVar11 = fVar9;
      fVar6 = fVar16;
      fVar14 = fVar7;
    }
    if (bVar2 < 2) {
      fVar15 = fVar10;
      fVar18 = fVar11;
      fVar8 = fVar6;
      fVar12 = fVar14;
    }
    fVar10 = fVar8 * fVar8 + fVar18 * fVar18 + fVar12 * fVar12 + fVar15 * fVar15;
    if (fVar10 == 0.0) {
      fVar12 = 0.0;
      fVar8 = 0.0;
      fVar18 = 0.0;
    }
    else {
      fVar10 = 1.0 / SQRT(fVar10);
      fVar13 = fVar15 * fVar10;
      fVar12 = fVar12 * fVar10;
      fVar8 = fVar8 * fVar10;
      fVar18 = fVar18 * fVar10;
    }
    *(float *)((long)param_1 + 0xc) = fVar12;
    *(float *)(param_1 + 2) = fVar8;
    *(float *)((long)param_1 + 0x14) = fVar18;
    *(float *)(param_1 + 3) = fVar13;
    return;
  }
LAB_10a008784:
  *(undefined8 *)((long)param_1 + 0x14) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  return;
}



/* Entry: 10a0087b0; end: 10a00891b;  */

void FUN_10a0087b0(undefined8 *param_1,float *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined4 uStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  float fStack_68;
  float fStack_64;
  undefined1 auStack_60 [48];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_a0 = 0x3f800000;
  uStack_94 = 0;
  uStack_9c = 0;
  uStack_8c = 0x3f800000;
  uStack_88 = 0;
  uStack_80 = 0;
  fVar2 = *(float *)(param_3 + 1) * 0.0;
  fVar1 = (float)*param_3;
  fVar4 = fVar1 * 0.0;
  fVar3 = (float)((ulong)*param_3 >> 0x20);
  fVar5 = fVar3 * 0.0;
  uVar6 = NEON_rev64(CONCAT44(fVar5,fVar4),4);
  fVar4 = fVar4 + fVar5;
  uStack_70 = CONCAT44(fVar3 + (float)((ulong)uVar6 >> 0x20) + fVar2 + 0.0,
                       fVar1 + (float)uVar6 + fVar2 + 0.0);
  fStack_68 = *(float *)(param_3 + 1) + fVar4 + 0.0;
  fStack_64 = fVar4 + fVar2 + 1.0;
  uStack_78 = 0x3f800000;
  fVar2 = param_2[3];
  fVar1 = param_2[4];
  fVar3 = param_2[5];
  fVar4 = param_2[6];
  fStack_e0 = (fVar1 * fVar1 + fVar3 * fVar3) * -2.0 + 1.0;
  fStack_dc = fVar2 * fVar1 + fVar3 * fVar4;
  fStack_dc = fStack_dc + fStack_dc;
  fStack_d8 = fVar2 * fVar3 - fVar1 * fVar4;
  fStack_d8 = fStack_d8 + fStack_d8;
  fStack_d0 = fVar2 * fVar1 - fVar3 * fVar4;
  fStack_d0 = fStack_d0 + fStack_d0;
  fStack_cc = (fVar2 * fVar2 + fVar3 * fVar3) * -2.0 + 1.0;
  fStack_c8 = fVar1 * fVar3 + fVar2 * fVar4;
  fStack_c8 = fStack_c8 + fStack_c8;
  fStack_c0 = fVar2 * fVar3 + fVar1 * fVar4;
  fStack_c0 = fStack_c0 + fStack_c0;
  fStack_bc = fVar1 * fVar3 - fVar2 * fVar4;
  fStack_bc = fStack_bc + fStack_bc;
  uStack_d4 = 0;
  uStack_c4 = 0;
  fStack_b8 = (fVar2 * fVar2 + fVar1 * fVar1) * -2.0 + 1.0;
  uStack_ac = 0;
  uStack_b4 = 0;
  uStack_a4 = 0x3f800000;
  func_0x000109519fd0(auStack_60,&uStack_a0,&fStack_e0);
  fVar2 = *param_2;
  fVar1 = param_2[1];
  param_1[1] = CONCAT44(SUB84(auStack_60._8_8_,4) * fVar2,(float)auStack_60._8_8_ * fVar2);
  *param_1 = CONCAT44(SUB84(auStack_60._0_8_,4) * fVar2,(float)auStack_60._0_8_ * fVar2);
  param_1[3] = CONCAT44(SUB84(auStack_60._24_8_,4) * fVar1,(float)auStack_60._24_8_ * fVar1);
  param_1[2] = CONCAT44(SUB84(auStack_60._16_8_,4) * fVar1,(float)auStack_60._16_8_ * fVar1);
  fVar2 = param_2[2];
  param_1[5] = CONCAT44(SUB84(auStack_60._40_8_,4) * fVar2,(float)auStack_60._40_8_ * fVar2);
  param_1[4] = CONCAT44(SUB84(auStack_60._32_8_,4) * fVar2,(float)auStack_60._32_8_ * fVar2);
  param_1[7] = uStack_28;
  param_1[6] = uStack_30;
  return;
}



/* Entry: 10a00891c; end: 10a0089a7;  */

float FUN_10a00891c(float param_1,float param_2,float param_3,float *param_4,float *param_5,
                   float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *param_5;
  fVar1 = *param_4 - fVar2;
  fVar3 = *param_6 + fVar1 * param_1;
  fVar1 = param_2 * (fVar1 + param_3 * fVar3);
  *param_6 = -(fVar1 * param_1) + param_2 * fVar3;
  fVar3 = param_6[1] + (param_4[1] - param_5[1]) * param_1;
  param_6[1] = -(param_2 * ((param_4[1] - param_5[1]) + param_3 * fVar3) * param_1) +
               param_2 * fVar3;
  fVar3 = param_6[2] + (param_4[2] - param_5[2]) * param_1;
  param_6[2] = -(param_2 * ((param_4[2] - param_5[2]) + param_3 * fVar3) * param_1) +
               param_2 * fVar3;
  return fVar2 + fVar1;
}



/* Entry: 10a0089a8; end: 10a008b63;  */

float FUN_10a0089a8(float param_1,float param_2,float param_3,float *param_4,float *param_5,
                   undefined8 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uStack_78;
  undefined4 uStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  fVar3 = *param_4;
  fVar2 = param_4[1];
  fVar4 = param_4[2];
  fVar5 = param_4[3];
  fVar8 = *param_5;
  fVar6 = param_5[1];
  fVar7 = param_5[2];
  fVar10 = param_5[3];
  fVar1 = fVar3 * fVar8 + fVar5 * fVar10 + fVar2 * fVar6 + fVar4 * fVar7;
  fVar9 = 1.0 - fVar1 * fVar1;
  if (1.1920929e-07 <= fVar9) {
    _acosf();
    fStack_64 = (fVar1 + fVar1) / SQRT(fVar9);
    fStack_6c = (((fVar5 * fVar8 - fVar3 * fVar10) - fVar4 * fVar6) + fVar2 * fVar7) * fStack_64;
    fStack_68 = (((fVar5 * fVar6 - fVar2 * fVar10) - fVar3 * fVar7) + fVar4 * fVar8) * fStack_64;
    fStack_64 = (((fVar5 * fVar7 - fVar4 * fVar10) - fVar2 * fVar8) + fVar3 * fVar6) * fStack_64;
  }
  else {
    fStack_6c = 0.0;
    fStack_68 = 0.0;
    fStack_64 = 0.0;
  }
  uStack_78 = 0;
  uStack_70 = 0;
  FUN_10a00891c(&uStack_78,&fStack_6c,param_6);
  fVar1 = SQRT(param_3 * param_3 + param_1 * param_1 + param_2 * param_2);
  if (1e-06 <= fVar1) {
    fVar2 = 1.0 / fVar1;
    fVar3 = param_2 * fVar2;
    fVar1 = fVar1 * 0.5;
    ___sincosf_stret(fVar1);
    fVar1 = (param_1 * fVar2 * fVar1 * param_4[3] + *param_4 * param_2 + param_4[2] * fVar3 * fVar1)
            - param_4[1] * fVar1 * param_3 * fVar2;
  }
  else {
    fVar1 = *param_4;
  }
  return fVar1;
}



/* Entry: 10a008b64; end: 10a008fbb;  */

void FUN_10a008b64(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar5 = param_2[6];
  fVar6 = param_2[7];
  fVar8 = param_2[8];
  fVar9 = 1.0 / SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
  fVar1 = fVar1 * fVar9;
  fVar2 = fVar2 * fVar9;
  fVar3 = fVar3 * fVar9;
  fVar10 = param_2[5] * fVar3 + param_2[3] * fVar1 + param_2[4] * fVar2;
  fVar9 = param_2[3] - fVar1 * fVar10;
  fVar4 = param_2[4] - fVar2 * fVar10;
  fVar10 = param_2[5] - fVar3 * fVar10;
  fVar11 = 1.0 / SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar4 * fVar4);
  fVar9 = fVar9 * fVar11;
  fVar4 = fVar4 * fVar11;
  fVar10 = fVar10 * fVar11;
  fVar12 = fVar5 * fVar1 + fVar2 * fVar6 + fVar3 * fVar8;
  fVar11 = fVar8 * fVar10 + fVar5 * fVar9 + fVar6 * fVar4;
  fVar7 = (fVar5 - fVar1 * fVar12) + fVar9 * fVar11;
  fVar6 = (fVar6 - fVar2 * fVar12) + fVar4 * fVar11;
  fVar5 = (fVar8 - fVar3 * fVar12) + fVar10 * fVar11;
  fVar11 = 1.0 / SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6);
  *param_1 = fVar1;
  param_1[1] = fVar2;
  param_1[2] = fVar3;
  param_1[3] = fVar9;
  param_1[4] = fVar4;
  param_1[5] = fVar10;
  param_1[6] = fVar7 * fVar11;
  param_1[7] = fVar6 * fVar11;
  param_1[8] = fVar5 * fVar11;
  return;
}



/* Entry: 10a008fbc; end: 10a009297;  */

ulong FUN_10a008fbc(undefined8 param_1,ulong *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar4;
  undefined8 uVar3;
  float fVar5;
  float fVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar8 = *(float *)(param_3 + 1);
  uVar7 = *param_2;
  fVar11 = *(float *)((long)param_2 + 4);
  fVar5 = *(float *)(param_2 + 1);
  fVar1 = (float)uVar7;
  fVar6 = (float)*param_3;
  fVar2 = (float)(uVar7 >> 0x20);
  fVar4 = (float)((ulong)*param_3 >> 0x20);
  fVar2 = fVar1 * fVar1 + fVar2 * fVar2 + fVar5 * fVar5;
  fVar4 = fVar6 * fVar6 + fVar4 * fVar4 + fVar8 * fVar8;
  if ((9.999999e-09 <= fVar2) && (9.999999e-09 <= fVar4)) {
    fVar13 = *(float *)((long)param_3 + 4);
    fVar2 = SQRT(fVar2);
    uVar3 = NEON_fmov(0x3f800000,4);
    fVar4 = (float)((ulong)uVar3 >> 0x20) / SQRT(fVar4);
    fVar12 = (fVar1 * fVar6 + fVar11 * fVar13 + fVar5 * fVar8) * ((float)uVar3 / fVar2) * fVar4;
    if (fVar12 <= 0.99999845) {
      fVar10 = fVar12;
      _acosf();
      fVar9 = 3.1415927;
      if (-0.99999845 <= fVar12) {
        fVar9 = fVar10;
      }
      if (fVar9 <= (float)param_1) {
        uVar7 = (ulong)(uint)(fVar6 * fVar4 * fVar2);
      }
      else if (3.1415927 <= fVar9 - (float)param_1) {
        uVar7 = (ulong)(uint)(fVar6 * -fVar4 * fVar2);
      }
      else {
        if (-0.99999845 <= fVar12) {
          fVar2 = -(fVar6 * fVar11) + fVar13 * fVar1;
          fVar4 = -(fVar8 * fVar1) + fVar6 * fVar5;
          fVar12 = -(fVar13 * fVar5) + fVar8 * fVar11;
          fVar13 = fVar5;
        }
        else {
          fVar13 = fVar13 - fVar11;
          fVar8 = fVar8 - fVar5;
          fVar2 = fVar6 - fVar1;
          fVar4 = 0.0;
          fVar12 = -fVar8;
          if (fVar8 * fVar8 <= fVar13 * fVar13) {
            fVar2 = 0.0;
            fVar4 = -(fVar6 - fVar1);
            fVar12 = fVar13;
          }
        }
        ___sincosf_stret(param_1,fVar13);
        fVar6 = 1.0 / SQRT(fVar12 * fVar12 + fVar4 * fVar4 + fVar2 * fVar2);
        fVar12 = fVar12 * fVar6;
        fVar4 = fVar4 * fVar6;
        fVar2 = fVar2 * fVar6;
        fVar8 = 1.0 - fVar13;
        fVar9 = fVar8 * fVar12;
        fVar10 = fVar8 * fVar4;
        fVar8 = fVar8 * fVar2;
        fVar6 = (float)param_1;
        uVar7 = (ulong)(uint)(fVar11 * ((fVar6 * fVar12 + fVar2 * fVar10) * 0.0 +
                                       -(fVar6 * fVar2) + fVar12 * fVar10 +
                                       (fVar13 + fVar4 * fVar10) * 0.0) +
                              fVar1 * ((-(fVar6 * fVar4) + fVar2 * fVar9) * 0.0 +
                                      fVar13 + fVar12 * fVar9 +
                                      (fVar6 * fVar2 + fVar4 * fVar9) * 0.0) +
                             fVar5 * ((fVar13 + fVar2 * fVar8) * 0.0 +
                                     fVar6 * fVar4 + fVar12 * fVar8 +
                                     (-(fVar6 * fVar12) + fVar4 * fVar8) * 0.0));
      }
    }
    else {
      uVar7 = (ulong)(uint)(fVar6 * fVar4 * fVar2);
    }
  }
  return uVar7;
}



/* Entry: 10a009298; end: 10a009413;  */

void FUN_10a009298(uint *param_1,long param_2,long param_3)

{
  uint uVar1;
  float *pfVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulong uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (param_3 != 0) {
    pfVar2 = (float *)(param_2 + 0xc);
    uVar3 = NEON_fmov(0xbf800000,4);
    do {
      uVar1 = *param_1;
      fVar4 = (float)(uVar1 & 0x3ff) * 0.0009775171;
      uVar7 = NEON_ushl(CONCAT44(uVar1,uVar1),0xffffffecfffffff6,4);
      uVar8 = NEON_ucvtf(uVar7 & 0x3ff000003ff,4);
      fVar4 = fVar4 + fVar4 + -1.0;
      fVar5 = (float)uVar8 * 0.0009775171;
      fVar9 = (float)((ulong)uVar8 >> 0x20) * 0.0009775171;
      fVar6 = fVar5 + fVar5 + (float)uVar3;
      fVar9 = fVar9 + fVar9 + (float)((ulong)uVar3 >> 0x20);
      fVar10 = fVar9 * fVar9 + fVar4 * fVar4 + fVar6 * fVar6;
      fVar11 = 1.0 / SQRT(fVar10);
      fVar5 = SQRT(1.0 - fVar10);
      uVar8 = CONCAT44(fVar9,fVar6);
      if (1.0 <= fVar10) {
        fVar5 = fVar11 * 0.0;
        uVar8 = CONCAT44(fVar9 * fVar11,fVar6 * fVar11);
      }
      *(undefined8 *)(pfVar2 + -3) = uVar8;
      if (1.0 <= fVar10) {
        fVar4 = fVar4 * fVar11;
      }
      pfVar2[-1] = fVar5;
      *pfVar2 = fVar4;
      pfVar2 = pfVar2 + 4;
      param_3 = param_3 + -1;
      param_1 = param_1 + 1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 10a009414; end: 10a00946b;  */

long FUN_10a009414(long param_1)

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



/* Entry: 10a00946c; end: 10a009537;  */

void FUN_10a00946c(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_258 [264];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [264];
  char cStack_38;
  
  FUN_10a009538(auStack_150,param_1);
  func_0x00010a0ec6dc(auStack_258,1);
  if (cStack_38 == '\x01') {
    _memcpy(auStack_140,auStack_258,0x104);
  }
  else {
    _memcpy(auStack_140,auStack_258,0x108);
    cStack_38 = '\x01';
  }
  puVar2 = (undefined8 *)0x120;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_140,0x110);
  *puVar2 = &PTR_FUN_110b99e70;
  ___cxa_throw(puVar2,&PTR_DAT_110b99e48,FUN_10a002a90);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a009520);
  (*pcVar1)();
}



/* Entry: 10a009538; end: 10a0095ab;  */

undefined8 * FUN_10a009538(undefined8 *param_1)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  func_0x000107c2b054(auStack_38);
  FUN_10a002a94(param_1,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  *param_1 = &PTR_FUN_110b99e70;
  return param_1;
}



/* Entry: 10a0095ac; end: 10a00976f;  */

void FUN_10a0095ac(void)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined1 *extraout_x8;
  code *extraout_x9;
  
  ppuVar1 = &PTR___tlv_bootstrap_11340ddf8;
  (*(code *)PTR___tlv_bootstrap_11340ddf8)();
  if (*(char *)ppuVar1 == '\0') {
    puVar2 = extraout_x8;
    (*extraout_x9)();
    *puVar2 = 1;
    func_0x00010a009704();
    ppuVar1 = &PTR___tlv_bootstrap_11340dde0;
    (*(code *)PTR___tlv_bootstrap_11340dde0)();
    __tlv_atexit(FUN_10a0082f8,ppuVar1,0x100000000);
  }
  return;
}



/* Entry: 10a009770; end: 10a009803;  */

undefined1  [16] FUN_10a009770(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1c;
  auVar1._0_8_ = &UNK_10f633480;
  return auVar1;
}



/* Entry: 10a009804; end: 10a0098e3;  */

void FUN_10a009804(undefined8 param_1)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xffffffff00000001;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  puStack_70 = &UNK_10f630f1d;
  uStack_68 = 0;
  puStack_60 = &UNK_10f630f1d;
  uStack_58 = 0;
  uStack_50 = 0x118;
  uStack_48 = CONCAT44(uStack_48._4_4_,0xffffffff);
  FUN_10a0098e4(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &DAT_10f630f1e;
  uStack_68 = 0xffffffffffffffff;
  puStack_70 = (undefined *)0x100000019;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a0527d0();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &DAT_10f630f34;
  uStack_68 = 0xffffffffffffffff;
  puStack_70 = (undefined *)0x100000019;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a053f80(param_1,&puStack_88);
  FUN_10a054178(param_1);
  return;
}



/* Entry: 10a0098e4; end: 10a0099bb;  */

/* WARNING: Removing unreachable block (ram,0x00010a00997c) */

undefined1  [16] FUN_10a0098e4(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f633480,0x1c);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a052594(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a0099bc; end: 10a009a87;  */

void FUN_10a0099bc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  uVar2 = param_2;
  func_0x00010a0fda30();
  FUN_10aa7093c(param_1,param_2,puVar1,uVar2);
  *param_1 = &PTR_FUN_110b9a228;
  param_1[2] = &PTR_DAT_110b9a2f8;
  param_1[7] = &PTR_FUN_110b9a350;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  return;
}



/* Entry: 10a009a88; end: 10a009b1f;  */

void FUN_10a009a88(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined1 auStack_40 [6];
  undefined1 auStack_3a [2];
  long *plStack_38;
  
  func_0x00010aa70b70();
  FUN_10a009b20(param_2,&PTR_DAT_110b9a360,param_1 + 0x120,&UNK_10f63349d,0xe);
  _auStack_40 = (uint7)(uint6)auStack_40;
  plStack_38 = (long *)(auStack_40 + 6);
  param_1 = param_1 + 0x140;
  FUN_10a814778(param_1,auStack_40 + 6,&UNK_10dd5b8f9,&plStack_38,auStack_40 + 7);
  plStack_38 = *(long **)(param_1 + 0x20);
  _auStack_40 = *(undefined8 *)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x20) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)(*param_2 + 0x108))(param_2,&PTR_DAT_110b9a380,auStack_40,&stack0xffffffffffffffd0);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a009b20; end: 10a009bc7;  */

void FUN_10a009b20(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
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
  uStack_30 = param_4;
  uStack_28 = param_5;
  (**(code **)(*param_1 + 0x108))(param_1,param_2,&uStack_40,&uStack_30);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a009bc8; end: 10a009bd7;  */

void FUN_10a009bc8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined1 *puStack_28;
  
  lVar1 = param_1 + 0x120;
  uStack_2a = 0;
  puStack_28 = &uStack_2a;
  param_1 = param_1 + 0x140;
  FUN_10a814778(param_1,&uStack_2a,&UNK_10dd5b8f9,&puStack_28,&uStack_29);
  FUN_10a7f82b8(param_1 + 0x18,param_2);
  lVar2 = lVar1;
  FUN_10a7f8334(lVar1,uStack_2a);
  if (lVar2 != 0) {
    if ((*(ulong *)(lVar2 + 0x38) & 3) != 0) {
      puVar3 = (undefined8 *)(*(ulong *)(lVar2 + 0x38) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar3 + 0x17) < '\0') {
        *(undefined1 *)*puVar3 = 0;
        puVar3[1] = 0;
      }
      else {
        *(undefined1 *)puVar3 = 0;
        *(undefined1 *)((long)puVar3 + 0x17) = 0;
      }
    }
    *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) & 0xfffffffd;
  }
  FUN_10a7e2370(lVar1,uStack_2a);
  return;
}



/* Entry: 10a009bd8; end: 10a009c07;  */

void FUN_10a009bd8(long *param_1)

{
  FUN_10a7e1f90(param_1 + 0x24);
                    /* WARNING: Could not recover jumptable at 0x00010a009c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}



/* Entry: 10a009c08; end: 10a009fa7;  */

void FUN_10a009c08(long param_1)

{
  long *plVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long *plStack_60;
  undefined1 *puStack_58;
  
  FUN_10a7e20bc(param_1 + 0x120);
  FUN_10a7e2370(param_1 + 0x120,0);
  plStack_80 = *(long **)(param_1 + 0x130);
  plVar3 = *(long **)(param_1 + 0x138);
  if (plVar3 == (long *)0x0) {
    if (*(long **)(param_1 + 0x168) == plStack_80) {
      return;
    }
    plStack_78 = (long *)0x0;
  }
  else {
    plVar1 = plVar3 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar10 = *(long **)(param_1 + 0x168);
    do {
      lVar7 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
    if (plVar10 == plStack_80) {
      return;
    }
    plStack_78 = *(long **)(param_1 + 0x138);
    plStack_80 = *(long **)(param_1 + 0x130);
    if (*(long *)(param_1 + 0x138) != 0) {
      plVar3 = (long *)(*(long *)(param_1 + 0x138) + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = *plVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  FUN_10a009fa8(param_1 + 0x168,&plStack_80);
  plVar3 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
    do {
      lVar7 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  lVar7 = *(long *)(param_1 + 0x130);
  plVar3 = *(long **)(param_1 + 0x138);
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar14 = *(long *)(param_1 + 0x108);
  lVar9 = *(long *)(param_1 + 0x110);
  lStack_68 = lVar7;
  plStack_60 = plVar3;
  while (lVar9 != lVar14) {
    lVar9 = lVar9 + -0x80;
    FUN_10a042100(lVar9);
  }
  *(long *)(param_1 + 0x110) = lVar14;
  FUN_10a05485c(param_1 + 0xe0);
  if (lVar7 != 0) {
    plVar1 = (long *)(param_1 + 0x108);
    ppuVar11 = &PTR_DAT_1132ff5c0;
    lVar14 = 0xa0;
    do {
      func_0x000107c2b038(param_1 + 0xe0,ppuVar11,ppuVar11);
      ppuVar11 = ppuVar11 + 2;
      lVar14 = lVar14 + -0x10;
    } while (lVar14 != 0);
    ppuVar11 = &PTR_PTR_1132cfc60;
    if (*(undefined ***)(lVar7 + 0x68) != (undefined **)0x0) {
      ppuVar11 = *(undefined ***)(lVar7 + 0x68);
    }
    ppuVar2 = &PTR_PTR_1132d70f0;
    if ((undefined **)ppuVar11[0x1a] != (undefined **)0x0) {
      ppuVar2 = (undefined **)ppuVar11[0x1a];
    }
    FUN_10a7f75e0(&plStack_80,ppuVar2);
    func_0x00010a0421b4(plVar1);
    *(long **)(param_1 + 0x110) = plStack_78;
    *plVar1 = (long)plStack_80;
    *(undefined8 *)(param_1 + 0x118) = uStack_70;
    plStack_78 = (long *)0x0;
    uStack_70 = 0;
    plStack_80 = (long *)0x0;
    puStack_58 = (undefined1 *)&plStack_80;
    func_0x00010a042144(&puStack_58);
    puVar4 = *(undefined8 **)(param_1 + 0x110);
    puVar12 = puVar4;
    if (*(undefined8 **)(param_1 + 0x108) != puVar4) {
      puVar15 = *(undefined8 **)(param_1 + 0x108) + 0x17;
      do {
        plStack_78 = (long *)puVar15[-0x15];
        plStack_80 = (long *)puVar15[-0x16];
        if (-1 < (char)*(byte *)((long)puVar15 + -0x99)) {
          plStack_78 = (long *)(ulong)*(byte *)((long)puVar15 + -0x99);
          plStack_80 = puVar15 + -0x16;
        }
        lVar7 = param_1 + 0xe0;
        func_0x0001086eb2c8(lVar7,&plStack_80);
        if (lVar7 == 0) {
          puVar13 = puVar15 + -0x17;
          if (puVar13 != puVar4) {
            puVar8 = puVar15 + -7;
            while (puVar12 = puVar13, puVar8 != puVar4) {
              plVar10 = puVar15 + -6;
              plStack_78 = (long *)puVar15[-5];
              plStack_80 = (long *)*plVar10;
              if (-1 < (char)*(byte *)((long)puVar15 + -0x19)) {
                plStack_78 = (long *)(ulong)*(byte *)((long)puVar15 + -0x19);
                plStack_80 = plVar10;
              }
              lVar7 = param_1 + 0xe0;
              func_0x0001086eb2c8(lVar7,&plStack_80);
              if (lVar7 != 0) {
                *(undefined4 *)puVar13 = *(undefined4 *)(puVar15 + -7);
                if (*(char *)((long)puVar13 + 0x1f) < '\0') {
                  __ZdlPv(puVar13[1]);
                }
                uVar16 = puVar15[-5];
                lVar7 = *plVar10;
                puVar13[3] = puVar15[-4];
                puVar13[2] = uVar16;
                puVar13[1] = lVar7;
                *(undefined1 *)((long)puVar15 + -0x19) = 0;
                *(undefined1 *)(puVar15 + -6) = 0;
                if (*(char *)((long)puVar13 + 0x37) < '\0') {
                  __ZdlPv(puVar13[4]);
                }
                uVar17 = puVar15[-2];
                uVar16 = puVar15[-3];
                puVar13[6] = puVar15[-1];
                puVar13[5] = uVar17;
                puVar13[4] = uVar16;
                *(undefined1 *)((long)puVar15 + -1) = 0;
                *(undefined1 *)(puVar15 + -3) = 0;
                uVar16 = *puVar15;
                puVar13[8] = puVar15[1];
                puVar13[7] = uVar16;
                uVar17 = puVar15[3];
                uVar16 = puVar15[2];
                uVar19 = puVar15[5];
                uVar18 = puVar15[4];
                uVar21 = puVar15[7];
                uVar20 = puVar15[6];
                *(undefined4 *)(puVar13 + 0xf) = *(undefined4 *)(puVar15 + 8);
                puVar13[0xe] = uVar21;
                puVar13[0xd] = uVar20;
                puVar13[0xc] = uVar19;
                puVar13[0xb] = uVar18;
                puVar13[10] = uVar17;
                puVar13[9] = uVar16;
                puVar13 = puVar13 + 0x10;
              }
              puVar8 = puVar15 + 9;
              puVar15 = puVar15 + 0x10;
            }
          }
          break;
        }
        puVar13 = puVar15 + -7;
        puVar15 = puVar15 + 0x10;
      } while (puVar13 != puVar4);
    }
    func_0x00010a042218(plVar1,puVar12,*(undefined8 *)(param_1 + 0x110));
  }
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      lVar7 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10a009fa8; end: 10a00a00b;  */

undefined8 * FUN_10a009fa8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a00a00c; end: 10a00a027;  */

void FUN_10a00a00c(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = *(long *)(param_2 + 0x108);
  lVar2 = *(long *)(param_2 + 0x110);
  lVar4 = lVar2 - lVar1 >> 7;
  if (lVar4 != 0) {
    FUN_10a041f30(param_1,lVar4);
    puVar3 = param_1;
    FUN_10a041fb0(param_1,lVar1,lVar2,param_1[1]);
    param_1[1] = puVar3;
  }
  return;
}



/* Entry: 10a00a028; end: 10a00a057;  */

bool FUN_10a00a028(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  param_1 = param_1 + 0xe0;
  uStack_20 = param_2;
  uStack_18 = param_3;
  func_0x0001086eb2c8(param_1,&uStack_20);
  return param_1 != 0;
}



/* Entry: 10a00a058; end: 10a00a0f7;  */

void FUN_10a00a058(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *param_1 = puVar1;
  param_1[2] = 0x8000000000000020;
  param_1[1] = 0x1c;
  puVar1[1] = 0x5479646f42726570;
  *puVar1 = 0x70552e7465737341;
  *(undefined8 *)((long)puVar1 + 0x14) = 0x7465737341676e69;
  *(undefined8 *)((long)puVar1 + 0xc) = 0x6b6361725479646f;
  *(undefined1 *)((long)puVar1 + 0x1c) = 0;
  return;
}



/* Entry: 10a00a0f8; end: 10a00a183;  */

void FUN_10a00a0f8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  FUN_10a00a184(auStack_30);
  uVar4 = 0xa8;
  __Znwm();
  FUN_10a7f9d30();
  *param_1 = uVar4;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  return;
}


