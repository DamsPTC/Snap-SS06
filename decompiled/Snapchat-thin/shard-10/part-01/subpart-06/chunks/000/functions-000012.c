/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107894db8; end: 107894de3;  */

void FUN_107894db8(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 9) == '\x01') {
    *(undefined1 *)((long)param_1 + 9) = 0;
    func_0x000107891038(param_1 + 1,*param_1);
  }
  return;
}



/* Entry: 107895d04; end: 107895df7;  */

void FUN_107895d04(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 auStack_b0 [2];
  undefined4 uStack_a8;
  undefined4 auStack_a0 [6];
  undefined4 uStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  auStack_a0[0] = 0xe3;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  ppuStack_80 = &PTR_DAT_110996720;
  uStack_78 = 0;
  uStack_60 = 0xe3;
  uStack_58 = 0;
  uStack_54 = 1;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  func_0x000107895fa0();
  func_0x00010729d56c(auStack_a0);
  func_0x00010729d56c(auStack_a0,&UNK_10f43188c,param_2);
  func_0x00010729d56c(auStack_a0,"stage",param_3);
  auStack_b0[0] = 1;
  uStack_a8 = 0;
  uStack_c0 = *param_1;
  uStack_b8 = 3;
  func_0x00010743fa9c(param_1,auStack_a0,auStack_b0,&uStack_c0,7);
  func_0x000107262330(auStack_a0);
  return;
}



/* Entry: 107896274; end: 10789629b;  */

void FUN_107896274(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)0x28;
  __Znwm();
  *puVar4 = &PTR_DAT_1109e4dd0;
  lVar5 = *(long *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 8);
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  puVar4[1] = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = *(undefined8 *)(param_1 + 0x20);
  return;
}



/* Entry: 10789653c; end: 107896543;  */

undefined8 FUN_10789653c(void)

{
  return 1;
}



/* Entry: 107896758; end: 10789679b;  */

long * FUN_107896758(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 107897e9c; end: 107897edf;  */

void FUN_107897e9c(long param_1)

{
  ulong uVar1;
  
  uVar1 = param_1 + 0x20;
  func_0x000107897ee0(uVar1,5);
  if ((uVar1 & 1) != 0) {
    return;
  }
  _CFRunLoopSourceSignal(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdba760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFRunLoopWakeUp_11034a820)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1078980a4; end: 1078981ab;  */

void FUN_1078980a4(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  func_0x0001078995a4();
  *(undefined8 *)(param_1 + 0x88) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  func_0x0001078981ac(param_1 + 200);
  func_0x00010726ed14(unaff_x19 + 0xd0);
  *(long *)(unaff_x19 + 0xe0) = unaff_x19;
  func_0x0001073af1cc();
  func_0x0001073af058();
  puStack_50 = &UNK_10789826c;
  uStack_48 = 0;
  func_0x0001078981d4(&uStack_38,&puStack_50);
  uVar1 = uStack_38;
  uStack_38 = 0;
  func_0x0001078992dc(*(undefined8 *)(unaff_x19 + 200),uVar1);
  func_0x0001078992b8(&uStack_38);
  return;
}



/* Entry: 10789846c; end: 10789859f;  */

void FUN_10789846c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 **ppuStack_128;
  undefined1 **ppuStack_120;
  undefined *puStack_118;
  undefined1 *puStack_108;
  long lStack_100;
  undefined1 *puStack_f8;
  long lStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_c8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  long lStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  func_0x0001078994d4();
  uStack_48 = extraout_x8;
  func_0x000107898fb8(&puStack_80);
  *puStack_80 = 0;
  puStack_58 = (undefined8 *)0x1;
  puVar4 = (undefined8 *)0x78;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_SUB_1109e59d8;
  puStack_70 = puStack_80;
  lStack_68 = lStack_78;
  if (lStack_78 != 0) {
    plVar1 = (long *)(lStack_78 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4[3] = &PTR_DAT_1109e5a28;
  puStack_50 = puVar4;
  __ZNSt3__115recursive_mutexC1Ev(puVar4 + 4);
  puVar4[0xc] = puStack_80;
  puVar4[0xd] = lStack_78;
  puStack_70 = (undefined1 *)0x0;
  lStack_68 = 0;
  func_0x000100688f50(&puStack_70);
  puStack_50 = (undefined8 *)0x0;
  func_0x000107899310(&puStack_60);
  puStack_60 = puVar4 + 3;
  puStack_58 = puVar4;
  func_0x000100688f50();
  func_0x00010789955c();
  func_0x00010789951c();
  func_0x000107899470(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010789951c();
  func_0x000107899498();
  puStack_88 = &DAT_1078985a0;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x0001078994d4();
  uStack_c8 = extraout_x8_00;
  func_0x000107898fb8(&puStack_108);
  *puStack_108 = 0;
  puVar4 = (undefined8 *)0x98;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1109e5868;
  func_0x000105302f48(&puStack_e8,param_2);
  puStack_f8 = puStack_108;
  lStack_f0 = lStack_100;
  if (lStack_100 != 0) {
    plVar1 = (long *)(lStack_100 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4[3] = &PTR_DAT_1109e58b8;
  __ZNSt3__115recursive_mutexC1Ev(puVar4 + 4);
  puVar4[0xc] = puStack_108;
  puVar4[0xd] = lStack_100;
  puStack_f8 = (undefined1 *)0x0;
  lStack_f0 = 0;
  func_0x000105302f48(puVar4 + 0xe,&puStack_e8);
  func_0x000100688f50(&puStack_f8);
  func_0x0001006393ec(&puStack_e8);
  puStack_e8 = puVar4 + 3;
  puStack_e0 = puVar4;
  func_0x000100688f50(&puStack_108);
  func_0x00010789955c();
  ppuVar5 = &puStack_e8;
  func_0x000107898790();
  func_0x000107899470(uStack_c8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ppuVar6 = &puStack_e8;
  func_0x000107898790();
  func_0x000107899498();
  puStack_118 = &DAT_1078986ec;
  puStack_138 = ppuVar6[0x1b];
  puStack_140 = ppuVar6[0x1a];
  if (ppuVar6[0x1b] != (undefined8 *)0x0) {
    plVar1 = ppuVar6[0x1b] + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puStack_130 = puVar4;
  ppuStack_128 = ppuVar5;
  ppuStack_120 = &puStack_90;
  func_0x000107314188(extraout_x8_01,&puStack_140,ppuVar6[0x1c]);
  func_0x00010731486c();
  return;
}



/* Entry: 107898938; end: 10789895b;  */

void FUN_107898938(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 107898d80; end: 107898e0b;  */

void FUN_107898d80(long param_1)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x19;
  
  func_0x000107899510();
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
    uVar4 = *unaff_x19;
    bVar2 = unaff_x19[1] == uVar4;
    if (uVar4 < unaff_x19[1]) {
      func_0x000107899454();
      if (!bVar2) {
        func_0x0001078994e4();
      }
      func_0x000107899534();
    }
    else {
      lVar1 = *(long *)(param_1 + 0x10) - uVar4;
      uVar4 = lVar1 >> 2;
      if (lVar1 == 0) {
        uVar4 = 0;
      }
      uVar3 = unaff_x19[4];
      func_0x0001078994a0(uVar3);
      func_0x000107899420(uVar3 + (uVar4 >> 2) * 8);
      func_0x0001078994f0();
      func_0x000107899408();
    }
  }
  func_0x000107899524();
  return;
}



/* Entry: 107898f94; end: 107898fb7;  */

void FUN_107898f94(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1078990c8; end: 107899127;  */

void FUN_1078990c8(void)

{
  func_0x00010789948c();
  func_0x000107899590();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)();
  return;
}



/* Entry: 107899220; end: 107899273;  */

void FUN_107899220(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_1109e5928;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107899348; end: 10789935b;  */

void FUN_107899348(void)

{
  func_0x000107899338();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107899640; end: 1078996ab;  */

void FUN_107899640(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x30;
  __Znwm();
  func_0x0001078996ec();
  *param_1 = uVar1;
  return;
}



/* Entry: 107899b2c; end: 107899d5b;  */

void FUN_107899b2c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  puVar4 = (undefined8 *)*param_2;
  func_0x000107899ff4();
  func_0x00010002b838(&uStack_68,*puVar4);
  uVar8 = uStack_58;
  uVar9 = uStack_60;
  uVar7 = uStack_68;
  uVar1 = uStack_60;
  if (-1 < (long)uStack_58) {
    uVar1 = uStack_58 >> 0x38;
  }
  if (uVar1 != 0) {
    uStack_78 = *param_2;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    plVar10 = (long *)(param_1 + 0x28);
    plVar6 = (long *)*plVar10;
    plVar12 = plVar10;
    uStack_88 = uVar9;
    uStack_90 = uVar7;
    uStack_80 = uVar8;
    while (plVar6 != (long *)0x0) {
      while (plVar12 = plVar6, uVar3 = (uint)&uStack_90, func_0x000100125af4(&uStack_90,plVar12 + 4)
            , (uVar3 >> 7 & 1) != 0) {
        plVar6 = (long *)*plVar12;
        plVar10 = plVar12;
        if ((long *)*plVar12 == (long *)0x0) goto LAB_107899bec;
      }
      plVar6 = plVar12 + 4;
      func_0x000100125af4(plVar6,&uStack_90);
      if (((uint)plVar6 >> 7 & 1) == 0) {
        if (*plVar10 != 0) goto LAB_107899c40;
        break;
      }
      plVar10 = plVar12 + 1;
      plVar6 = (long *)*plVar10;
    }
LAB_107899bec:
    puVar4 = (undefined8 *)0x40;
    __Znwm();
    uVar1 = uStack_80;
    puVar4[5] = uStack_88;
    puVar4[4] = uStack_90;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    puVar4[6] = uVar1;
    puVar4[7] = uStack_78;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = plVar12;
    *plVar10 = (long)puVar4;
    if (**(long **)(param_1 + 0x20) != 0) {
      *(long *)(param_1 + 0x20) = **(long **)(param_1 + 0x20);
    }
    func_0x00010002c5b0(*(undefined8 *)(param_1 + 0x28));
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
LAB_107899c40:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_90);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 < *(undefined8 **)(param_1 + 0x18)) {
    uVar7 = *param_2;
    *param_2 = 0;
    puVar14 = puVar4 + 1;
    *puVar4 = uVar7;
  }
  else {
    lVar11 = *(long *)(param_1 + 8);
    lVar13 = (long)puVar4 - lVar11;
    uVar1 = (lVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      func_0x000107899f20();
LAB_107899d34:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x107899d38);
      (*pcVar2)();
    }
    uVar8 = (long)*(undefined8 **)(param_1 + 0x18) - lVar11;
    uVar9 = (long)uVar8 >> 2;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar8) {
      uVar9 = 0x1fffffffffffffff;
    }
    if (uVar9 == 0) {
      lVar5 = 0;
    }
    else {
      if (uVar9 >> 0x3d != 0) {
        func_0x000104bd35f4();
        goto LAB_107899d34;
      }
      lVar5 = uVar9 << 3;
      __Znwm();
    }
    puVar4 = (undefined8 *)(lVar5 + lVar13);
    uVar7 = *param_2;
    *param_2 = 0;
    puVar14 = puVar4 + 1;
    *puVar4 = uVar7;
    _memcpy(puVar4 + -(lVar13 >> 3),lVar11,lVar13);
    *(undefined8 **)(param_1 + 8) = puVar4 + -(lVar13 >> 3);
    *(undefined8 **)(param_1 + 0x10) = puVar14;
    *(ulong *)(param_1 + 0x18) = lVar5 + uVar9 * 8;
    if (lVar11 != 0) {
      __ZdlPv(lVar11);
    }
  }
  *(undefined8 **)(param_1 + 0x10) = puVar14;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_68);
  return;
}



/* Entry: 107899f34; end: 107899fcb;  */

long FUN_107899f34(long param_1)

{
  func_0x000107899f64(param_1 + 0x20);
  func_0x000107899ecc(param_1 + 8);
  return param_1;
}



/* Entry: 10789a33c; end: 10789a50b;  */

/* WARNING: Possible PIC construction at 0x00010789a53c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010789a540) */
/* WARNING: Removing unreachable block (ram,0x00010789a5b8) */
/* WARNING: Removing unreachable block (ram,0x00010789a544) */
/* WARNING: Removing unreachable block (ram,0x00010789a674) */
/* WARNING: Removing unreachable block (ram,0x00010789a694) */
/* WARNING: Removing unreachable block (ram,0x00010789a6ec) */
/* WARNING: Removing unreachable block (ram,0x00010789a680) */

long * FUN_10789a33c(long *param_1,long param_2,undefined8 ****param_3,undefined8 param_4)

{
  undefined8 **ppuVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  undefined1 in_ZR;
  long *plVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 extraout_x8;
  undefined8 *puVar8;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 ***pppuStack_260;
  undefined8 ***pppuStack_258;
  undefined1 **ppuStack_250;
  undefined *puStack_248;
  long **pplStack_170;
  long lStack_168;
  undefined8 ***pppuStack_160;
  long *plStack_158;
  undefined1 *puStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 **ppuStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long alStack_108 [2];
  undefined1 auStack_f8 [80];
  undefined8 ***apppuStack_a8 [10];
  undefined8 uStack_58;
  
  ppppuVar5 = param_3;
  func_0x00010789b06c();
  uStack_58 = extraout_x8;
  func_0x0001072fc5ec(&lStack_110,param_4);
  ppuStack_128 = (undefined8 **)(*(long **)(param_2 + 8) + 2);
  puVar8 = (undefined8 *)**(long **)(param_2 + 8);
  uStack_118 = puVar8[1];
  uStack_120 = *puVar8;
  if (puVar8[1] != 0) {
    do {
      func_0x00010789b090();
    } while (extraout_w10 != 0);
  }
  lStack_140 = lStack_110;
  puVar8 = *(undefined8 **)(lStack_110 + 0x48);
  uStack_130 = puVar8[1];
  uStack_138 = *puVar8;
  if (puVar8[1] != 0) {
    do {
      func_0x00010789b090();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010724bb70(alStack_108,&uStack_120);
  ppuVar1 = ppuStack_128;
  if (alStack_108[0] != 0) {
    func_0x00010789ae20(auStack_f8,param_3 + 1,&lStack_140);
    param_3 = (undefined8 ****)0x70;
    __Znwm();
    func_0x00010789ae50(apppuStack_a8,auStack_f8);
    *param_3 = (undefined8 ***)&PTR_DAT_1109e5be0;
    param_3[1] = (undefined8 ***)ppuVar1;
    param_3[2] = (undefined8 ***)&UNK_10789a50c;
    param_3[3] = (undefined8 ***)0x0;
    func_0x00010789ae50(param_3 + 4,apppuStack_a8);
    func_0x00010789aeec(apppuStack_a8);
    apppuStack_a8[0] = param_3;
    func_0x00010789aeec(auStack_f8);
    ppppuVar5 = apppuStack_a8;
    func_0x0001073ae140(alStack_108[0]);
    pppuVar3 = apppuStack_a8[0];
    apppuStack_a8[0] = (undefined8 ***)0x0;
    if ((undefined8 ****)pppuVar3 != (undefined8 ****)0x0) {
      func_0x00010789b0e8();
    }
  }
  func_0x00010724bcd8(alStack_108);
  func_0x00010724ae28(&uStack_138);
  func_0x00010724ae28(&uStack_120);
  lVar2 = lStack_110;
  lStack_110 = 0;
  *param_1 = lVar2;
  plVar4 = &lStack_110;
  func_0x0001072fbe0c();
  func_0x00010789b058(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pppuVar3 = apppuStack_a8[0];
    apppuStack_a8[0] = (undefined8 ***)0x0;
    if (pppuVar3 != (undefined8 ***)0x0) {
      func_0x00010789b0e8();
    }
    func_0x00010724bcd8(alStack_108);
    func_0x00010724ae28(&uStack_138);
    func_0x00010724ae28(&uStack_120);
    func_0x0001072fbe0c(&lStack_110);
    func_0x00010789b0a0();
    lStack_168 = alStack_108[0];
    puStack_148 = &UNK_10789a50c;
    pplStack_170 = (long **)&ppuStack_128;
    pppuStack_160 = param_3;
    plStack_158 = plVar4;
    puStack_150 = &stack0xfffffffffffffff0;
    func_0x00010789b06c();
    ppppuVar7 = ppppuVar5;
    func_0x000107264c5c();
    ppppuVar6 = &pppuStack_260;
    puStack_248 = &UNK_10789a540;
    pppuStack_260 = ppppuVar5;
    pppuStack_258 = ppppuVar7;
    ppuStack_250 = &puStack_150;
    func_0x00010772cd00(&pppuStack_260,&DAT_10f405966,0);
    return (long *)(ulong)(ppppuVar6 == (undefined8 ****)0x0);
  }
  return plVar4;
}



/* Entry: 10789ac94; end: 10789accb;  */

long * FUN_10789ac94(long *param_1)

{
  func_0x0001073ada2c(*(undefined8 *)*param_1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(*param_1 + 0x10);
  return param_1;
}



/* Entry: 10789ae10; end: 10789ae1f;  */

void FUN_10789ae10(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e5b48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10789af54; end: 10789af67;  */

void FUN_10789af54(void)

{
  func_0x00010789b048();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10789b27c; end: 10789b313;  */

void FUN_10789b27c(void)

{
  undefined8 uVar1;
  undefined8 *extraout_x8;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010789e724();
  uVar1 = 0x18;
  __Znwm();
  uStack_48 = unaff_x23[1];
  uStack_50 = *unaff_x23;
  *unaff_x23 = 0;
  unaff_x23[1] = 0;
  uStack_58 = unaff_x22[1];
  uStack_60 = *unaff_x22;
  *unaff_x22 = 0;
  unaff_x22[1] = 0;
  func_0x00010789d69c();
  *extraout_x8 = uVar1;
  func_0x0001072aef7c(&uStack_60);
  func_0x00010724bd50(&uStack_50);
  return;
}



/* Entry: 10789bbc8; end: 10789bc1b;  */

void FUN_10789bbc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_78 = &uStack_20;
  puStack_70 = &uStack_28;
  puStack_68 = puStack_78;
  puStack_60 = puStack_70;
  puStack_58 = puStack_78;
  puStack_50 = puStack_70;
  puStack_48 = puStack_78;
  puStack_40 = puStack_70;
  puStack_38 = puStack_78;
  puStack_30 = puStack_70;
  uStack_28 = param_4;
  uStack_20 = param_2;
  uStack_18 = param_3;
  func_0x00010789cf78(param_1,&puStack_38,&puStack_48,&puStack_58,&puStack_68,&puStack_78);
  return;
}



/* Entry: 10789bf7c; end: 10789c05b;  */

void FUN_10789bf7c(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long *plVar2;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  undefined8 uStack_68;
  long lStack_48;
  undefined1 auStack_38 [8];
  
  func_0x00010789e558();
  if ((bool)in_ZR) {
    if (*(long *)(extraout_x8 + 8) != 0) {
      func_0x00010789e848();
      func_0x00010789e5b0();
      if (extraout_x8_00 != 0) {
        do {
          func_0x00010789e4dc();
        } while (extraout_w10 != 0);
      }
      func_0x00010789e78c();
      if (lStack_48 != 0) {
        puVar1 = auStack_38;
        func_0x00010789e240(puVar1,uStack_68,&UNK_10789c05c,0,param_2);
        func_0x00010789e7cc();
        func_0x00010789e604();
        if (puVar1 != (undefined1 *)0x0) {
          func_0x00010789e4d0();
        }
      }
      func_0x00010789e5a0();
      func_0x00010789e6dc();
    }
  }
  else if (*(undefined8 **)(extraout_x8 + 0x10) != (undefined8 *)0x0) {
    plVar2 = (long *)**(undefined8 **)(extraout_x8 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010789e6b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x60))(plVar2,param_2);
    return;
  }
  return;
}



/* Entry: 10789c51c; end: 10789c52f;  */

/* WARNING: Removing unreachable block (ram,0x00010789be88) */

void FUN_10789c51c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x8;
  long lVar4;
  long extraout_x8_00;
  int extraout_w10;
  long alStack_98 [2];
  undefined8 auStack_88 [4];
  undefined8 *apuStack_68 [4];
  undefined8 uStack_48;
  
  pcVar3 = *(char **)(param_1 + 8);
  UNRECOVERED_JUMPTABLE = (code *)&UNK_10789c530;
  func_0x00010789e4ec();
  uVar1 = *pcVar3 == '\x01';
  uStack_48 = extraout_x8;
  if ((bool)uVar1) {
    lVar4 = *(long *)(pcVar3 + 8);
    if (lVar4 != 0) {
      func_0x00010789e5b0();
      if (extraout_x8_00 != 0) {
        do {
          func_0x00010789e4dc();
        } while (extraout_w10 != 0);
      }
      func_0x00010724bb70(alStack_98);
      if (alStack_98[0] != 0) {
        puVar2 = auStack_88;
        func_0x00010740f0c4(puVar2,param_2);
        func_0x00010789e778();
        func_0x00010740f0c4(apuStack_68,auStack_88);
        *puVar2 = &PTR_DAT_1109e6108;
        puVar2[1] = lVar4 + 0x10;
        puVar2[2] = UNRECOVERED_JUMPTABLE;
        puVar2[3] = 0;
        func_0x00010740f0c4(puVar2 + 4,apuStack_68);
        func_0x00010724bfc0(apuStack_68);
        apuStack_68[0] = puVar2;
        func_0x00010724bfc0(auStack_88);
        func_0x00010789e624();
        puVar2 = apuStack_68[0];
        apuStack_68[0] = (undefined8 *)0x0;
        if (puVar2 != (undefined8 *)0x0) {
          func_0x00010789e4d0();
        }
      }
      func_0x00010789e5a0();
      func_0x00010789e598();
    }
  }
  else if (*(long *)(pcVar3 + 0x10) != 0) {
    func_0x00010789e4bc(extraout_x8);
    if ((bool)uVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010789beb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    goto code_r0x00010789becc;
  }
  func_0x00010789e4bc(uStack_48);
  if ((bool)uVar1) {
    return;
  }
code_r0x00010789becc:
  ___stack_chk_fail();
  puVar2 = apuStack_68[0];
  apuStack_68[0] = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010789e4d0();
  }
  func_0x00010789e5a0();
  func_0x00010789e598();
  func_0x00010789e550();
  func_0x00010789e5bc();
  func_0x00010789e6fc();
  func_0x00010789e544();
  func_0x00010789e584();
  return;
}



/* Entry: 10789c880; end: 10789c9e7;  */

void FUN_10789c880(long param_1)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_68 [8];
  undefined8 *puStack_60;
  long lStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 8);
  if (lVar3 != 0) {
    func_0x00010789af18(&puStack_50);
    puVar1 = puStack_50;
    puStack_50 = (undefined8 *)0x0;
    func_0x00010787b420(lVar3 + 0x40,puVar1);
    func_0x00010787b3fc(&puStack_50);
    func_0x00010789af18(&puStack_50);
    puVar1 = puStack_50;
    puStack_50 = (undefined8 *)0x0;
    func_0x00010787b420(lVar3 + 0x48,puVar1);
    func_0x00010787b3fc(&puStack_50);
    __ZNSt3__17promiseIvE10get_futureEv(auStack_68,*(undefined8 *)(lVar3 + 0x40));
    func_0x00010789ad44(lVar3 + 0x38);
    uVar2 = *(undefined8 *)(lVar3 + 0x50);
    func_0x000107898fb8(&puStack_60);
    *(undefined1 *)puStack_60 = 0;
    puVar1 = (undefined8 *)0x80;
    __Znwm();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_DAT_1109e5e98;
    puStack_50 = puStack_60;
    puStack_48 = (undefined8 *)lStack_58;
    if (lStack_58 != 0) {
      do {
        func_0x00010789e4dc();
      } while (extraout_w10 != 0);
    }
    puVar1[3] = &PTR_DAT_1109e5ee8;
    __ZNSt3__115recursive_mutexC1Ev(puVar1 + 4);
    puVar1[0xc] = puStack_60;
    puVar1[0xd] = lStack_58;
    puStack_50 = (undefined8 *)0x0;
    puStack_48 = (undefined8 *)0x0;
    puVar1[0xe] = lVar3;
    func_0x00010789e644();
    puStack_50 = puVar1 + 3;
    puStack_48 = puVar1;
    func_0x00010789e69c();
    func_0x00010789895c(uVar2,1,&puStack_50);
    func_0x00010789e64c();
    __ZNSt3__16futureIvE3getEv(auStack_68);
    func_0x00010789e6f4();
  }
  return;
}



/* Entry: 10789ccbc; end: 10789cccf;  */

void FUN_10789ccbc(void)

{
  func_0x00010789cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10789ce3c; end: 10789ce4f;  */

void FUN_10789ce3c(void)

{
  func_0x00010789cf20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10789cfb8; end: 10789d05b;  */

undefined8 * FUN_10789cfb8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  puVar2 = param_1;
  if (*(int *)(param_1 + 5) != 0) {
    if (*(int *)(param_1 + 5) == 1) {
      func_0x00010789e714(param_1,*(undefined8 *)param_2[2],((undefined8 *)param_2[2])[1],
                          *(undefined8 *)param_2[3]);
      return param_1;
    }
    if (*(int *)(param_1 + 5) == 2) {
      param_1 = (undefined8 *)*param_1;
      func_0x00010789e714(param_1,*(undefined8 *)param_2[4],((undefined8 *)param_2[4])[1],
                          *(undefined8 *)param_2[5]);
      return param_1;
    }
    if (*(int *)(param_1 + 5) != 3) {
      lVar5 = *(long *)param_2[8];
      uVar7 = ((long *)param_2[8])[1];
      uVar6 = *(ulong *)param_2[9];
      puVar2 = (undefined8 *)*param_1;
      uVar4 = param_1[1];
      goto code_r0x00010067f350;
    }
    param_2 = param_2 + 6;
    puVar2 = (undefined8 *)*param_1;
  }
  uVar6 = *(ulong *)param_2[1];
  lVar5 = *(long *)*param_2;
  uVar7 = ((long *)*param_2)[1];
  uVar4 = (ulong)*(char *)((long)puVar2 + 0x17);
  if ((long)uVar4 < 0) {
    uVar4 = puVar2[1];
    puVar2 = (undefined8 *)*puVar2;
  }
code_r0x00010067f350:
  uVar1 = uVar4;
  if (uVar6 <= uVar4) {
    uVar1 = uVar6;
  }
  uVar6 = uVar1 + uVar7;
  if (uVar4 - uVar1 <= uVar7) {
    uVar6 = uVar4;
  }
  puVar3 = puVar2;
  func_0x00010067f328(puVar2,(undefined8 *)((long)puVar2 + uVar6),lVar5,lVar5 + uVar7,&UNK_10067f248
                     );
  puVar8 = (undefined8 *)((long)puVar3 - (long)puVar2);
  if (puVar3 == (undefined8 *)((long)puVar2 + uVar6) && uVar7 != 0) {
    puVar8 = (undefined8 *)0xffffffffffffffff;
  }
  return puVar8;
}



/* Entry: 10789d140; end: 10789d1b3;  */

void FUN_10789d140(void)

{
  long unaff_x19;
  long lVar1;
  undefined1 auStack_28 [8];
  
  func_0x00010789e58c();
  if ((**(byte **)(unaff_x19 + 0x48) & 1) == 0) {
    lVar1 = *(long *)(unaff_x19 + 0x58);
    __ZNSt3__17promiseIvE10get_futureEv(auStack_28,*(undefined8 *)(lVar1 + 0x48));
    __ZNSt3__17promiseIvE9set_valueEv(*(undefined8 *)(lVar1 + 0x40));
    __ZNSt3__16futureIvE3getEv(auStack_28);
    func_0x00010789e6f4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x19 + 8);
  return;
}



/* Entry: 10789d2d4; end: 10789d2ef;  */

void FUN_10789d2d4(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010789d2f0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10789d574; end: 10789d577;  */

void FUN_10789d574(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e5f30;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10789d670; end: 10789d69b;  */

void FUN_10789d670(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107250860();
  }
  *param_1 = 0;
  param_1[1] = 0;
  func_0x0001072508cc(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 10789dcec; end: 10789dd6f;  */

undefined8 * FUN_10789dcec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e5fc8;
  func_0x00010789dd18(param_1 + 4);
  return param_1;
}



/* Entry: 10789df50; end: 10789df9f;  */

void FUN_10789df50(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010789e7c0();
  func_0x00010789e7a8();
  func_0x000105302f48(unaff_x19 + 0x278,unaff_x20 + 0x278);
  *(undefined8 *)(unaff_x19 + 0x298) = *(undefined8 *)(unaff_x20 + 0x298);
  *(undefined8 *)(unaff_x19 + 0x2a0) = *(undefined8 *)(unaff_x20 + 0x2a0);
  *(undefined8 *)(unaff_x20 + 0x2a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x298) = 0;
  return;
}



/* Entry: 10789e154; end: 10789e167;  */

void FUN_10789e154(void)

{
  func_0x00010789e18c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10789e290; end: 10789e2bb;  */

void FUN_10789e290(void)

{
  return;
}



/* Entry: 10789e3b8; end: 10789e3db;  */

void FUN_10789e3b8(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x00010789e6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1 + 0x20,param_1 + 0x218);
  return;
}



/* Entry: 10789e888; end: 10789e89f;  */

void FUN_10789e888(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10789ea00; end: 10789ea47;  */

void FUN_10789ea00(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010789ed10();
  func_0x00010789a02c();
  *param_1 = param_2;
  return;
}



/* Entry: 10789eb3c; end: 10789eb5b;  */

void FUN_10789eb3c(undefined8 *param_1)

{
  func_0x00010789ed10();
  *param_1 = &PTR_DAT_1109e6390;
  return;
}



/* Entry: 10789ee50; end: 10789ee63;  */

void FUN_10789ee50(void)

{
  func_0x00010789edf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10789f294; end: 10789f30f;  */

/* WARNING: Possible PIC construction at 0x00010789f2e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010789f2e4) */
/* WARNING: Removing unreachable block (ram,0x00010789f300) */
/* WARNING: Removing unreachable block (ram,0x00010789f2f4) */
/* WARNING: Removing unreachable block (ram,0x0001078a01e4) */

void FUN_10789f294(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_98 [24];
  undefined **appuStack_48 [3];
  undefined ***pppuStack_30;
  
  func_0x0001078a0154();
  *param_1 = &PTR_DAT_1109e6470;
  pppuStack_30 = appuStack_48;
  appuStack_48[0] = &PTR_DAT_1109e3f18;
  uVar1 = 0x40;
  __Znwm();
  func_0x00010002b838(auStack_98,&UNK_10f43297a);
  func_0x00010789faac(uVar1,appuStack_48,auStack_98);
  param_1[1] = uVar1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  return;
}



/* Entry: 10789f90c; end: 10789fa6b;  */

void FUN_10789f90c(long param_1)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_68 [8];
  undefined8 *puStack_60;
  long lStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010789af18(&puStack_50);
  puVar1 = puStack_50;
  puStack_50 = (undefined8 *)0x0;
  func_0x00010787b420(lVar3 + 0x28,puVar1);
  func_0x00010787b3fc(&puStack_50);
  func_0x00010789af18(&puStack_50);
  puVar1 = puStack_50;
  puStack_50 = (undefined8 *)0x0;
  func_0x00010787b420(lVar3 + 0x30,puVar1);
  func_0x00010787b3fc(&puStack_50);
  __ZNSt3__17promiseIvE10get_futureEv(auStack_68,*(undefined8 *)(lVar3 + 0x28));
  func_0x00010789ad44(lVar3 + 0x20);
  uVar2 = *(undefined8 *)(lVar3 + 0x38);
  func_0x000107898fb8(&puStack_60);
  *(undefined1 *)puStack_60 = 0;
  puVar1 = (undefined8 *)0x80;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_1109e65c8;
  puStack_50 = puStack_60;
  puStack_48 = (undefined8 *)lStack_58;
  if (lStack_58 != 0) {
    do {
      func_0x0001078a0178();
    } while (extraout_w10 != 0);
  }
  puVar1[3] = &PTR_DAT_1109e6618;
  __ZNSt3__115recursive_mutexC1Ev(puVar1 + 4);
  puVar1[0xc] = puStack_60;
  puVar1[0xd] = lStack_58;
  puStack_50 = (undefined8 *)0x0;
  puStack_48 = (undefined8 *)0x0;
  puVar1[0xe] = lVar3;
  func_0x0001078a01b0();
  puStack_50 = puVar1 + 3;
  puStack_48 = puVar1;
  func_0x0001078a01a0();
  func_0x00010789895c(uVar2,1,&puStack_50);
  func_0x0001078a01a8();
  __ZNSt3__16futureIvE3getEv(auStack_68);
  func_0x0001078a01b8();
  return;
}



/* Entry: 10789fef8; end: 10789fefb;  */

void FUN_10789fef8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e64f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10789ffe4; end: 1078a000b;  */

void FUN_10789ffe4(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x0001078a0008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1 + 0x20,param_1 + 0x58);
  return;
}



/* Entry: 1078a0130; end: 1078a0217;  */

void FUN_1078a0130(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e65c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078a0da8; end: 1078a0db3;  */

/* WARNING: Possible PIC construction at 0x0001078a2a3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078a2a40) */

void FUN_1078a0da8(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)(*(long *)(*(long *)(param_1 + 8) + 0x60) + 0xa8);
  __ZNSt3__17promiseIvE9set_valueEv(*plVar2);
  lVar1 = *plVar2;
  *plVar2 = 0;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      __ZNSt3__17promiseIvED1Ev(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078a1640; end: 1078a164b;  */

undefined ** FUN_1078a1640(void)

{
  return &PTR_DAT_1109e6780;
}



/* Entry: 1078a17ec; end: 1078a181b;  */

void FUN_1078a17ec(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x0001078a1818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (plVar1,*(undefined8 *)(param_1 + 0x20),param_1 + 0x28,param_1 + 0x220,
             *(undefined8 *)(param_1 + 0x238));
  return;
}



/* Entry: 1078a1e64; end: 1078a1e77;  */

void FUN_1078a1e64(void)

{
  func_0x0001078a1f44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078a2054; end: 1078a20c3;  */

long FUN_1078a2054(long param_1,uint param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x00010002b838(auStack_38,PTR_DAT_1131ad568);
  func_0x00010729d5c0(param_1 + 0x20,auStack_38,(&PTR_DAT_1131ad5c8)[param_2 & 7]);
  func_0x0001078a326c();
  *(undefined1 *)(param_1 + 0x4c) = 1;
  return param_1;
}



/* Entry: 1078a22e8; end: 1078a232f;  */

long FUN_1078a22e8(long param_1,undefined8 *param_2)

{
  func_0x0001078a33d8(*param_2,param_1,param_2 + 1);
  func_0x0001078a1de0(param_1 + 0x200,param_2 + 0x40);
  return param_1;
}



/* Entry: 1078a2568; end: 1078a2593;  */

undefined8 * FUN_1078a2568(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e6890;
  func_0x0001078a2608(param_1 + 1);
  return param_1;
}



/* Entry: 1078a2694; end: 1078a26bb;  */

long FUN_1078a2694(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1078a27fc; end: 1078a2827;  */

undefined8 * FUN_1078a27fc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e6970;
  func_0x0001078a28b8(param_1 + 1);
  return param_1;
}



/* Entry: 1078a29c0; end: 1078a2a0b;  */

void FUN_1078a29c0(void)

{
  func_0x0001078a3280();
  func_0x0001078a34e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)();
  return;
}



/* Entry: 1078a2e18; end: 1078a2e33;  */

void FUN_1078a2e18(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x0001078a2e34(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078a3088; end: 1078a309b;  */

void FUN_1078a3088(void)

{
  func_0x0001078a30f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078a3908; end: 1078a3b6b;  */

undefined1  [16] FUN_1078a3908(long *param_1,char *param_2,long param_3,int param_4,char *param_5)

{
  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  ulong uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long *plStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long *plStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  long lStack_60;
  char cStack_51;
  byte bStack_50;
  long lStack_48;
  
  if (*(long *)(param_3 + 0x10) != 0) {
    uVar1 = 0;
    lVar4 = 0;
    goto LAB_1078a3b04;
  }
  lVar3 = *(long *)(param_3 + 0x20);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (long)*(char *)(lVar3 + 0x17);
    if (lVar4 < 0) {
      lVar4 = *(long *)(lVar3 + 8);
    }
  }
  auStack_68[0] = 0;
  bStack_50 = 0;
  if (*param_5 == '\x01') {
    func_0x0001078a3828(&uStack_90,*param_2,param_3);
    func_0x0001002a8208(auStack_68,&uStack_90);
    func_0x0001001148fc(&uStack_90);
  }
  else {
    func_0x0001002a969c(auStack_68,param_5 + 8);
  }
  if ((bStack_50 == 1) && (lVar4 = (long)cStack_51, (long)cStack_51 < 0)) {
    lVar4 = lStack_60;
  }
  uStack_90 = uStack_90 & 0xffffffffffffff00;
  if (param_4 == 0) {
LAB_1078a39fc:
    plVar5 = param_1;
    if (*param_2 == '\x03') {
      if ((bStack_50 & 1) == 0) {
        puVar2 = *(undefined1 **)(param_3 + 0x20);
        if (puVar2 != (undefined1 *)0x0) goto LAB_1078a3a3c;
        func_0x0001078a3d54();
      }
      else {
        puVar2 = auStack_68;
LAB_1078a3a3c:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_b0,puVar2);
      }
      (**(code **)(*param_1 + 0x150))(param_1,param_2 + 0x80,param_3,&uStack_b0,bStack_50);
    }
    else {
      if ((bStack_50 & 1) == 0) {
        puVar2 = *(undefined1 **)(param_3 + 0x20);
        if (puVar2 != (undefined1 *)0x0) goto LAB_1078a3a70;
        func_0x0001078a3d54();
      }
      else {
        puVar2 = auStack_68;
LAB_1078a3a70:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_b0,puVar2);
      }
      (**(code **)(*param_1 + 0x148))(param_1,param_2,param_3,&uStack_b0,bStack_50);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_b0);
    if ((param_4 != 0) && ((char)param_1[2] == '\x01')) {
      lVar3 = param_1[1];
      (**(code **)(*plStack_78 + 200))(plStack_78,0,&uStack_b0,&lStack_48);
      uVar1 = (lVar3 - lStack_80) + (uStack_b0 - lStack_48) * uStack_90;
      param_1[1] = uVar1 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU);
    }
  }
  else {
    func_0x0001078a34fc(&uStack_b0,param_1);
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    plStack_78 = plStack_98;
    lStack_80 = lStack_a0;
    uStack_70 = 1;
    plVar5 = param_1;
    func_0x0001078a3658(param_1,lVar4,&uStack_90,0);
    if (((ulong)plVar5 & 1) != 0) goto LAB_1078a39fc;
    plVar5 = (long *)0x0;
    lVar4 = 0;
  }
  func_0x0001001148fc(auStack_68);
  uVar1 = (ulong)plVar5 & 0xffffffff;
LAB_1078a3b04:
  auVar6._8_8_ = lVar4;
  auVar6._0_8_ = uVar1;
  return auVar6;
}



/* Entry: 1078a3e48; end: 1078a3f13;  */

void FUN_1078a3e48(long *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  bool bVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long lVar5;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  puVar1 = (undefined1 *)register0x00000008;
  do {
    plVar4 = param_1;
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(long *)(puVar1 + -0x28) = unaff_x21;
    *(long *)(puVar1 + -0x20) = unaff_x20;
    *(long **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    func_0x0001078a7400();
    func_0x0001078a72c0();
    *(undefined8 *)(puVar1 + -0x38) = extraout_x8;
    unaff_x21 = *plVar4;
    lVar5 = unaff_x21 + 0x40;
    do {
      lVar5 = *(long *)(lVar5 + 8);
      if (lVar5 == unaff_x21 + 0x40) {
        plVar4 = (long *)(unaff_x21 + 0x60);
        func_0x0001078a52d4();
        bVar3 = (long *)(unaff_x21 + 0x68) != plVar4;
        uVar2 = bVar3 || unaff_x19 == (long *)0x7fffffffffffffff;
        if (!bVar3 && unaff_x19 != (long *)0x7fffffffffffffff) {
          *(undefined ***)(puVar1 + -0x58) = &PTR_DAT_1109e70b0;
          *(long *)(puVar1 + -0x50) = unaff_x20;
          *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x58;
          func_0x0001078995ec(unaff_x20 + 0x208,unaff_x19,0,puVar1 + -0x58);
          plVar4 = (long *)(puVar1 + -0x58);
          func_0x0001006393ec();
        }
        break;
      }
      uVar2 = *(long *)(lVar5 + 0x10) == unaff_x20;
    } while (!(bool)uVar2);
    func_0x0001078a7288(*(undefined8 *)(puVar1 + -0x38));
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    param_1 = (long *)(puVar1 + -0x58);
    func_0x0001006393ec();
    unaff_x30 = &UNK_1078a3f14;
    func_0x0001078a7304();
    puVar1 = puVar1 + -0x60;
    unaff_x19 = plVar4;
    if ((char)param_1[0x4d] != '\x04') {
      return;
    }
  } while( true );
}



/* Entry: 1078a45f4; end: 1078a4637;  */

void FUN_1078a45f4(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  func_0x0001078a7400();
  func_0x0001072ab574(param_2 + 0x58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x58);
  return;
}



/* Entry: 1078a4df0; end: 1078a4e93;  */

void FUN_1078a4df0(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = param_1 + 1;
  plVar1 = (long *)*plVar2;
  do {
    plVar3 = plVar2;
    if (plVar1 == (long *)0x0) {
LAB_1078a4e50:
      plVar1 = param_1;
      func_0x0001078a7328();
      plVar1[4] = param_2;
      *plVar1 = 0;
      plVar1[1] = 0;
      plVar1[2] = (long)plVar2;
      *plVar3 = (long)plVar1;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
      }
      func_0x00010002c5b0(param_1[1],plVar1);
      param_1[2] = param_1[2] + 1;
      return;
    }
    while (plVar2 = plVar1, (ulong)plVar2[4] <= param_2) {
      if (param_2 <= (ulong)plVar2[4]) {
        return;
      }
      plVar1 = (long *)plVar2[1];
      if ((long *)plVar2[1] == (long *)0x0) {
        plVar3 = plVar2 + 1;
        goto LAB_1078a4e50;
      }
    }
    plVar1 = (long *)*plVar2;
  } while( true );
}



/* Entry: 1078a4fc0; end: 1078a4fd3;  */

void FUN_1078a4fc0(void)

{
  func_0x0001078a5188();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078a5220; end: 1078a5233;  */

void FUN_1078a5220(void)

{
  func_0x0001078a5258();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078a5768; end: 1078a578b;  */

void FUN_1078a5768(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109e6d18;
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[3] = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x0001078a72dc();
    } while (extraout_w10 != 0);
  }
  param_2[4] = puVar1[3];
  return;
}



/* Entry: 1078a5a20; end: 1078a5ae7;  */

/* WARNING: Possible PIC construction at 0x0001078a5c3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078a5c40) */

void FUN_1078a5a20(long param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 uVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar12;
  long lVar13;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_288 [8];
  long lStack_280;
  undefined1 *puStack_278;
  char cStack_26f;
  undefined1 auStack_268 [16];
  undefined8 uStack_258;
  byte bStack_250;
  undefined1 *puStack_248;
  byte bStack_240;
  undefined7 uStack_23f;
  undefined1 auStack_238 [24];
  char cStack_220;
  undefined1 auStack_208 [128];
  undefined1 auStack_188 [32];
  undefined8 uStack_168;
  undefined8 uStack_118;
  long alStack_110 [2];
  undefined7 uStack_100;
  undefined4 uStack_f9;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined1 uStack_d8;
  undefined1 uStack_d0;
  undefined1 uStack_c8;
  undefined1 uStack_c0;
  undefined1 uStack_a8;
  undefined1 uStack_a0;
  undefined1 uStack_9c;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  lVar11 = *(long *)(param_1 + 0x50);
  if (lVar11 == 0) {
    return;
  }
  plVar5 = *(long **)(param_1 + 0x48);
  if (plVar5 == *(long **)(param_1 + 0x58)) {
    *(long *)(param_1 + 0x58) = (*(long **)(param_1 + 0x58))[1];
  }
  plVar9 = (long *)plVar5[1];
  lVar7 = plVar5[2];
  lVar13 = *plVar5;
  *(long **)(lVar13 + 8) = plVar9;
  *plVar9 = lVar13;
  *(long *)(param_1 + 0x50) = lVar11 + -1;
  __ZdlPv();
  func_0x0001078a7400(param_1,lVar7);
  func_0x0001078a72c0();
  uStack_38 = extraout_x8;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_90 = 0;
  puVar6 = (undefined8 *)(unaff_x20 + 0x60);
  lStack_88 = unaff_x20;
  lStack_80 = unaff_x19;
  lStack_78 = param_1;
  FUN_1078a4df0(puVar6,unaff_x19);
  uVar3 = *(char *)(unaff_x20 + 0x78) == '\x01';
  if ((bool)uVar3) {
    func_0x0001078a7328();
    *puVar6 = &PTR_DAT_1109e6dc8;
    puVar6[2] = lStack_88;
    puVar6[1] = CONCAT44(uStack_8c,uStack_90);
    puVar6[4] = lStack_78;
    puVar6[3] = lStack_80;
    plVar5 = (long *)(unaff_x19 + 8);
    puStack_40 = puVar6;
    func_0x0001078b70bc(alStack_110,unaff_x20 + 0x80,plVar5,auStack_58);
    lVar11 = alStack_110[0];
    alStack_110[0] = 0;
    lVar7 = *(long *)(unaff_x19 + 0x200);
    *(long *)(unaff_x19 + 0x200) = lVar11;
    if (lVar7 != 0) {
      func_0x0001078a729c();
      lVar11 = alStack_110[0];
      alStack_110[0] = 0;
      if (lVar11 != 0) {
        func_0x0001078a729c();
      }
    }
    func_0x0001072ad0c8();
    func_0x0001078a7288(uStack_38);
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    plVar9 = alStack_110;
    func_0x00010724b340();
    func_0x0001078a734c();
  }
  else {
    alStack_110[0] = CONCAT71(alStack_110[0]._1_7_,1);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_100 = 0;
    uStack_f9 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    puVar8 = (undefined1 *)0x30;
    __Znwm();
    func_0x00010002b838(&uStack_70,&UNK_10f432a3e);
    uVar12 = uStack_60;
    *puVar8 = 4;
    *(undefined8 *)(puVar8 + 0x10) = uStack_68;
    *(undefined8 *)(puVar8 + 8) = uStack_70;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    *(undefined8 *)(puVar8 + 0x20) = 0;
    *(undefined8 *)(puVar8 + 0x28) = 0;
    *(undefined8 *)(puVar8 + 0x18) = uVar12;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    uStack_118 = 0;
    func_0x00010724b300(&uStack_100,puVar8);
    func_0x0001072d6f8c(&uStack_118);
    plVar9 = (long *)&uStack_90;
    plVar5 = alStack_110;
  }
  plVar10 = plVar9;
  func_0x0001078a72c0();
  lVar11 = plVar10[1];
  uStack_168 = extraout_x8_00;
  func_0x0001078a5a84(lVar11 + 0x60,plVar10[2]);
  lVar13 = plVar9[2];
  lVar7 = *(long *)(lVar13 + 0x200);
  *(undefined8 *)(lVar13 + 0x200) = 0;
  if (lVar7 != 0) {
    func_0x0001078a729c();
    lVar13 = plVar9[2];
  }
  puVar8 = auStack_288;
  func_0x0001075281c8(puVar8,plVar5);
  lVar7 = plVar9[3];
  __ZNSt3__16chrono12steady_clock3nowEv();
  lStack_280 = ((long)puVar8 - lVar7) / 1000;
  if ((bStack_250 & 1) == 0) {
    uStack_258 = *(undefined8 *)(lVar13 + 0x118);
    bStack_250 = *(byte *)(lVar13 + 0x120);
  }
  else {
    *(undefined8 *)(lVar13 + 0x118) = uStack_258;
    *(byte *)(lVar13 + 0x120) = bStack_250;
  }
  if ((cStack_26f == '\x01') && (*(long *)(lVar13 + 0x158) != 0)) {
    puVar8 = auStack_268;
    func_0x000104c2f98c(puVar8,lVar13 + 0x158);
    cStack_26f = '\0';
  }
  if (bStack_240 == 1) {
    puVar1 = *(undefined1 **)(lVar13 + 0x128);
    uVar2 = *(ulong *)(lVar13 + 0x130);
    *(undefined1 **)(lVar13 + 0x128) = puStack_248;
    *(undefined1 *)(lVar13 + 0x130) = 1;
    func_0x00010789a00c();
    if ((long)puVar8 < (long)puStack_248) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
      if (((uVar2 & 1) != 0) &&
         (lVar7 = (long)puStack_248 - (long)puVar1, (long)puVar1 <= (long)puStack_248)) {
        if (lVar7 < 0x1f) {
          lVar7 = 0x1e;
        }
        bVar4 = puStack_248 == puVar1;
        puStack_248 = puVar1;
        if (!bVar4) {
          puStack_248 = puVar8 + lVar7;
        }
      }
    }
    if ((bStack_240 & 1) == 0) {
      bStack_240 = 1;
    }
    if (bVar4) {
      *(int *)(lVar13 + 0x260) = *(int *)(lVar13 + 0x260) + 1;
      goto code_r0x0001078a5df8;
    }
  }
  *(undefined4 *)(lVar13 + 0x260) = 0;
code_r0x0001078a5df8:
  uVar3 = cStack_220 == '\0';
  puVar8 = auStack_238;
  puVar1 = (undefined1 *)(lVar13 + 0x138);
  if ((bool)uVar3) {
    puVar8 = (undefined1 *)(lVar13 + 0x138);
    puVar1 = auStack_238;
  }
  func_0x0001002a969c(puVar1,puVar8);
  if (puStack_278 == (undefined1 *)0x0) {
    *(undefined4 *)(lVar13 + 0x264) = 0;
    *(undefined1 *)(lVar13 + 0x268) = 1;
  }
  else {
    *(int *)(lVar13 + 0x264) = *(int *)(lVar13 + 0x264) + 1;
    *(undefined1 *)(lVar13 + 0x268) = *puStack_278;
    uVar12 = *(undefined8 *)(puStack_278 + 0x20);
    *(undefined1 *)(lVar13 + 0x278) = puStack_278[0x28];
    *(undefined8 *)(lVar13 + 0x270) = uVar12;
  }
  lVar7 = lVar13;
  func_0x0001078a3dec(lVar13,puStack_248,CONCAT71(uStack_23f,bStack_240));
  FUN_1078a3e48(lVar13,lVar7);
  func_0x0001072fb714(auStack_188,lVar13 + 0x210);
  func_0x0001075281c8(auStack_208,auStack_288);
  func_0x0001072fb768(auStack_188,auStack_208);
  func_0x00010724b340(auStack_208);
  func_0x0001072ad0c8(auStack_188);
  func_0x00010724b340(auStack_288);
  FUN_1078a5a20(lVar11);
  func_0x0001078a7288(uStack_168);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x00010724b340(auStack_208);
    func_0x0001072ad0c8(auStack_188);
    func_0x00010724b340(auStack_288);
    func_0x0001078a7304();
    return;
  }
  return;
}



/* Entry: 1078a5fbc; end: 1078a5fdf;  */

undefined8 FUN_1078a5fbc(undefined8 param_1)

{
  func_0x0001078a5fe0(param_1,0);
  return param_1;
}



/* Entry: 1078a619c; end: 1078a61af;  */

void FUN_1078a619c(void)

{
  func_0x0001078a6244();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078a62b4; end: 1078a62bf;  */

void FUN_1078a62b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001078a7458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1078a64e0; end: 1078a64f3;  */

void FUN_1078a64e0(void)

{
  func_0x0001078a6558();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078a6720; end: 1078a67ab;  */

undefined8 * FUN_1078a6720(long param_1)

{
  long *plVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 auStack_50 [5];
  undefined8 uStack_28;
  
  puVar2 = auStack_50;
  puVar3 = auStack_50;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    pcVar4 = *(code **)(*plVar1 + ((ulong)pcVar4 & 0xffffffff));
  }
  func_0x0001078a67d8(auStack_50,param_1 + 0x20);
  (*pcVar4)(plVar1,auStack_50);
  func_0x00010724bd1c();
  func_0x0001078a7288(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010724bd1c();
  func_0x0001078a7304();
  *puVar3 = &PTR_DAT_1109e7070;
  func_0x00010724bd1c(puVar3 + 4);
  return puVar3;
}



/* Entry: 1078a6924; end: 1078a696b;  */

void FUN_1078a6924(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long *unaff_x20;
  long unaff_x21;
  
  func_0x0001078a74a4();
  plVar1 = (long *)0x18;
  __Znwm();
  plVar1[2] = param_3;
  lVar2 = *unaff_x20;
  *(long **)(lVar2 + 8) = plVar1;
  *unaff_x20 = (long)plVar1;
  *plVar1 = lVar2;
  plVar1[1] = (long)unaff_x20;
  *(long *)(unaff_x21 + 0x10) = *(long *)(unaff_x21 + 0x10) + 1;
  return;
}



/* Entry: 1078a6fc0; end: 1078a70c3;  */

void FUN_1078a6fc0(void)

{
  func_0x0001078a74b0();
  func_0x0001078a6fe0();
  return;
}



/* Entry: 1078a7230; end: 1078a727b;  */

void FUN_1078a7230(void)

{
  func_0x0001078a730c();
  func_0x0001078a7490();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)();
  return;
}



/* Entry: 1078a79bc; end: 1078a7af3;  */

void FUN_1078a79bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  code *pcVar1;
  char in_NG;
  char in_OV;
  undefined8 uVar2;
  undefined1 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [28];
  undefined4 uStack_34;
  
  uStack_34 = 0;
  uVar2 = param_2;
  func_0x0001078a89b0();
  func_0x000108144b98();
  func_0x0001078a8a90();
  if (in_NG != in_OV) {
    plVar5 = (long *)*param_4;
    plStack_80 = &lStack_78;
    plVar4 = param_4 + 1;
    lStack_78 = *plVar4;
    lStack_70 = param_4[2];
    if (lStack_70 != 0) {
      *(long **)(lStack_78 + 0x10) = plStack_80;
      *param_4 = (long)plVar4;
      *plVar4 = 0;
      param_4[2] = 0;
      plStack_80 = plVar5;
    }
    func_0x0001078a76f4(param_1,param_2,&plStack_80);
    func_0x0001074c71cc(&plStack_80);
    return;
  }
  func_0x0001078a8968();
  puVar3 = auStack_68;
  func_0x00010002b838(puVar3,&UNK_10f432a9e);
  func_0x0001078a8a5c();
  func_0x00010048a6c8(auStack_50,auStack_68,puVar3);
  __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (uVar2,auStack_50);
  func_0x0001078a894c();
  func_0x0001078a8a44();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1078a7ab0);
  (*pcVar1)();
}



/* Entry: 1078a82a8; end: 1078a82d3;  */

long * FUN_1078a82a8(long *param_1)

{
  func_0x0001078a82d4();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1078a8680; end: 1078a868b;  */

long * FUN_1078a8680(long *param_1)

{
  long lVar1;
  
  func_0x0001078a8a84();
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x30;
    func_0x0001074055b8();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1078a8890; end: 1078a892f;  */

undefined1  [16] FUN_1078a8890(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar2 = param_1;
  func_0x0001074c3ad4(param_1,&uStack_48,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    lVar3 = 0x28;
    __Znwm();
    uStack_50 = 1;
    *(undefined8 *)(lVar3 + 0x20) = *param_3;
    plStack_58 = param_1 + 1;
    func_0x0001074c3b24(param_1,uStack_48,plVar2,lVar3);
    uStack_60 = 0;
    func_0x0001074c3b70(&uStack_60);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 1078a93bc; end: 1078a93f3;  */

void FUN_1078a93bc(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0x80000000;
  for (uVar2 = 1; uVar2 < uVar3; uVar2 = uVar2 << 1) {
    uVar1 = uVar2 | uVar3;
    if ((param_1 & uVar1) != uVar2 && (param_1 & uVar1) != uVar3) {
      uVar1 = 0;
    }
    param_1 = uVar1 ^ param_1;
    uVar3 = uVar3 >> 1;
  }
  return;
}



/* Entry: 1078a9674; end: 1078a969f;  */

void FUN_1078a9674(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  uint uVar4;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long lStack_38;
  
  uVar1 = param_1[1];
  puVar2 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar2 = param_1;
  }
  func_0x0001078a9b2c(puVar2,(long)puVar2 + uVar1 * 2,0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm();
  do {
    while( true ) {
      if (unaff_x22 == unaff_x21) {
        return;
      }
      uVar4 = (uint)&lStack_38;
      func_0x0001078a99e8();
      if (0xfffffffd < uVar4) break;
      func_0x0001078a9a60();
      unaff_x22 = lStack_38;
    }
    unaff_x22 = lStack_38;
  } while (unaff_w20 != 1);
  ___cxa_allocate_exception(0x10);
  func_0x0001078a9908();
  func_0x0001078a9b0c();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1078a99c4);
  (*pcVar3)();
}



/* Entry: 1078a9b0c; end: 1078a9b67;  */

void FUN_1078a9b0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_throw_110346bf8)();
  return;
}



/* Entry: 1078aa2e4; end: 1078aa46b;  */

long FUN_1078aa2e4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  if (*(char *)(param_1 + 0x40) == '\x01') {
    lStack_38 = *(long *)(param_1 + 0x10);
    lStack_40 = *(long *)(param_1 + 8);
    func_0x0001078ae858(&lStack_40);
    lVar1 = lStack_40;
    lVar2 = lStack_38;
    while (lStack_40 = lVar1, lStack_38 = lVar2, lVar1 != 0) {
      uStack_48 = *(undefined8 *)(lVar2 + 8);
      func_0x0001009eba34(param_1 + 0x2b8,&uStack_48);
      lStack_40 = lVar1 + 1;
      lStack_38 = lVar2 + 0x10;
      func_0x0001078ae858(&lStack_40);
      lVar1 = lStack_40;
      lVar2 = lStack_38;
    }
    func_0x0001078ae268(*(undefined8 *)(param_1 + 0x288),*(undefined8 *)(param_1 + 0x290),
                        param_1 + 0x300);
    func_0x0001074287b0(param_1 + 0x288,0);
    func_0x0001078ae268(*(undefined8 *)(param_1 + 0x2a0),*(undefined8 *)(param_1 + 0x2a8),
                        param_1 + 0x300);
    func_0x0001074287b0(param_1 + 0x2a0,0);
    func_0x0001078ac204(param_1);
  }
  func_0x0001078ae820(param_1 + 0x3f0);
  func_0x0001078ae7bc(param_1 + 0x3b8);
  FUN_1078ae774(param_1 + 0x378);
  func_0x00010731e26c(param_1 + 0x360);
  func_0x00010731e26c(param_1 + 0x348);
  func_0x00010731e26c(param_1 + 0x330);
  func_0x00010731e26c(param_1 + 0x318);
  func_0x00010731e26c(param_1 + 0x300);
  func_0x00010731e26c(param_1 + 0x2e8);
  func_0x00010731e26c(param_1 + 0x2d0);
  func_0x00010731e26c(param_1 + 0x2b8);
  func_0x00010731e26c(param_1 + 0x2a0);
  func_0x00010731e26c(param_1 + 0x288);
  func_0x0001078ae204(param_1 + 0x1a0);
  func_0x00010788f710(param_1 + 0xe8);
  func_0x0001078ae6e0(param_1 + 0xe0);
  func_0x0001078ae6a8(param_1 + 0xd8);
  func_0x0001078ae680(param_1 + 200);
  FUN_1078ae648(param_1 + 0xc0);
  func_0x0001078ae610(param_1 + 0xb8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x48);
  func_0x0001078ae238(param_1 + 8);
  return param_1;
}



/* Entry: 1078aae9c; end: 1078ab3bb;  */

void FUN_1078aae9c(undefined8 param_1,int param_2,undefined8 *param_3,char *param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  int *unaff_x19;
  long unaff_x20;
  long lVar12;
  ulong uVar13;
  char *pcStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  undefined *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_148;
  undefined1 uStack_144;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined4 auStack_b8 [2];
  undefined4 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  uint uStack_88;
  int iStack_84;
  int aiStack_80 [2];
  
  aiStack_80[0] = param_2;
  func_0x0001078af318();
  _glCreateShader();
  _glShaderSource();
  _glCompileShader(aiStack_80[0]);
  iStack_84 = 0;
  _glGetShaderiv(aiStack_80[0],0x8b81,&iStack_84);
  if (iStack_84 == 0) {
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    _glGetShaderiv(aiStack_80[0],0x8b84,&uStack_88);
    if (0 < (int)uStack_88) {
      func_0x0001001548a8(&uStack_a0);
      uVar7 = (ulong)uStack_88;
      _glGetShaderInfoLog(aiStack_80[0],uVar7,&uStack_88,&uStack_a0);
      puVar2 = &uStack_a0;
      func_0x0001005d466c();
      puStack_180 = (undefined8 *)&DAT_10f4318a2;
      if (param_2 != 0x8b31) {
        puStack_180 = (undefined8 *)&DAT_10f4318a9;
      }
      pcStack_190 = "unknown";
      if (param_4 != (char *)0x0) {
        pcStack_190 = param_4;
      }
      puStack_188 = (undefined *)0x0;
      puStack_178 = (undefined *)0x0;
      puVar3 = (undefined8 *)&UNK_10f432cd4;
      puStack_170 = puVar2;
      puStack_168 = (undefined *)uVar7;
      func_0x0001003a91d4();
      func_0x0001003a9204(auStack_b8);
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      puVar11 = (undefined8 *)*param_3;
      for (puVar2 = puVar11; puVar2 != puVar11 + param_3[1]; puVar2 = puVar2 + 1) {
        func_0x00010002b838(&uStack_e8,*puVar2);
        func_0x00010048a6c8(&pcStack_190,&uStack_e8,&DAT_10f68f57e);
        puVar3 = &uStack_d0;
        func_0x0001004c3ca0(puVar3,&pcStack_190);
        func_0x0001078af340();
        func_0x0001078af484();
        puVar11 = (undefined8 *)*param_3;
      }
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      uVar7 = 0;
      for (lVar12 = 5; lVar12 != 0; lVar12 = lVar12 + -1) {
        uVar13 = uStack_c8;
        if (-1 < (long)uStack_c0) {
          uVar13 = uStack_c0 >> 0x38;
        }
        if (uVar13 <= uVar7) break;
        puVar2 = &uStack_d0;
        __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm(puVar2,10,uVar7);
        if (puVar2 == (undefined8 *)0xffffffffffffffff) {
          uVar13 = (long)uStack_c0._7_1_;
          if ((long)uStack_c0._7_1_ < 0) {
            uVar13 = uStack_c8;
          }
        }
        else {
          uVar13 = (long)puVar2 + 1;
        }
        puVar3 = &uStack_e8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendERKS5_mm
                  (puVar3,&uStack_d0,uVar7,uVar13 - uVar7);
        uVar7 = uVar13;
      }
      uVar7 = uStack_e0;
      if (-1 < (long)uStack_d8) {
        uVar7 = uStack_d8 >> 0x38;
      }
      uVar13 = uStack_c8;
      if (-1 < (long)uStack_c0) {
        uVar13 = uStack_c0 >> 0x38;
      }
      if (uVar7 < uVar13) {
        puVar3 = &uStack_e8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                  (puVar3,&UNK_10f432cfa);
      }
      func_0x0001078af4fc(PTR__glGetString_113230848);
      lVar12 = (long)*(char *)(unaff_x20 + 0x5f);
      if (lVar12 < 0) {
        lVar12 = *(long *)(unaff_x20 + 0x50);
      }
      cVar1 = *(char *)(unaff_x20 + 0x60);
      if (lVar12 == 0) {
        puVar8 = &DAT_10f432d4e;
        func_0x00010002b838(auStack_118);
      }
      else {
        puVar8 = (undefined *)(unaff_x20 + 0x48);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_118);
      }
      puVar4 = auStack_118;
      func_0x0001005d466c();
      pcVar5 = "OpenGL ES3.1";
      if (cVar1 != '\x01') {
        pcVar5 = "OpenGL ES3.0";
      }
      pcStack_190 = "OpenGL ES3.2";
      if (cVar1 != '\x02') {
        pcStack_190 = pcVar5;
      }
      puStack_188 = (undefined *)0x0;
      puStack_170 = (undefined8 *)&DAT_10f432d4e;
      if (puVar3 != (undefined8 *)0x0) {
        puStack_170 = puVar3;
      }
      puStack_168 = (undefined *)0x0;
      puStack_180 = (undefined8 *)puVar4;
      puStack_178 = puVar8;
      func_0x0001003a91d4(&UNK_10f432cff);
      func_0x0001003a9204(auStack_100);
      func_0x0001078af458();
      pcVar5 = auStack_100;
      func_0x0001005d466c();
      puVar2 = &uStack_e8;
      puVar9 = puVar8;
      func_0x0001005d466c();
      puVar6 = auStack_b8;
      puVar10 = puVar9;
      func_0x0001005d466c();
      pcStack_190 = pcVar5;
      puStack_188 = puVar8;
      puStack_180 = puVar2;
      puStack_178 = puVar9;
      puStack_170 = (undefined8 *)puVar6;
      puStack_168 = puVar10;
      func_0x0001003a91d4(&UNK_10f432d55);
      func_0x0001003a9204(auStack_118);
      func_0x00010786df04(10,auStack_118,0,0);
      func_0x0001078af458();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_100);
      func_0x0001078af484();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_d0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
    }
    pcStack_190 = (char *)CONCAT44(pcStack_190._4_4_,0xe3);
    puStack_178 = (undefined *)((ulong)puStack_178 & 0xffffffff00000000);
    uStack_160 = 0;
    uStack_158 = 0;
    func_0x0001078af3c0();
    puStack_168 = (undefined *)0x0;
    uStack_148 = 0;
    uStack_144 = 1;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_140 = 0;
    func_0x00010729d56c(&pcStack_190,"api",&UNK_10f432ccd);
    func_0x00010729d56c(&pcStack_190,&UNK_10f43188c,param_4);
    puVar8 = &DAT_10f4318a2;
    if (param_2 != 0x8b31) {
      puVar8 = &DAT_10f4318a9;
    }
    func_0x00010729d56c(&pcStack_190,"stage",puVar8);
    auStack_b8[0] = 1;
    uStack_b0 = 0;
    uStack_d0 = **(undefined8 **)(unaff_x20 + 0x30);
    uStack_c8 = CONCAT44(uStack_c8._4_4_,3);
    func_0x00010743fa9c(*(undefined8 **)(unaff_x20 + 0x30),&pcStack_190,auStack_b8,&uStack_d0,7);
    *unaff_x19 = 0;
    *(long *)(unaff_x19 + 2) = unaff_x20;
    *(undefined1 *)(unaff_x19 + 4) = 1;
    func_0x000107262330(&pcStack_190);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_a0);
  }
  else {
    *unaff_x19 = aiStack_80[0];
    *(long *)(unaff_x19 + 2) = unaff_x20;
    *(undefined1 *)(unaff_x19 + 4) = 1;
  }
  func_0x0001078aeb70(aiStack_80);
  return;
}



/* Entry: 1078ab8f8; end: 1078ab93f;  */

void FUN_1078ab8f8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x40;
  __Znwm();
  FUN_1078aebe4();
  *param_1 = uVar1;
  return;
}



/* Entry: 1078abfd8; end: 1078ac0ab;  */

void FUN_1078abfd8(int param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uStack_48;
  
  func_0x0001078af318();
  func_0x0001078aacb0();
  if (param_1 != 0) {
    uVar1 = *(ulong *)(unaff_x20 + 0x378);
    if (uVar1 == 0) {
      uVar2 = 8;
      __Znwm(8);
      func_0x0001078b0040();
      uStack_48 = 0;
      func_0x0001078ae794((ulong *)(unaff_x20 + 0x378),uVar2);
      FUN_1078ae774(&uStack_48);
      uVar1 = *(ulong *)(unaff_x20 + 0x378);
    }
    func_0x0001078b0130();
    if (uVar1 >> 0x20 != 0) {
      uStack_48 = CONCAT44(uStack_48._4_4_,(int)uVar1);
      uVar2 = 0x10;
      __Znwm();
      func_0x0001078b0d08();
      *unaff_x19 = uVar2;
      func_0x0001078aec88(&uStack_48);
      return;
    }
  }
  *unaff_x19 = 0;
  return;
}



/* Entry: 1078acaf0; end: 1078acb73;  */

void FUN_1078acaf0(undefined8 param_1,char *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  func_0x0001078af578();
  if ((*param_2 == '\a') && ((*(byte *)(unaff_x19 + 1) & 1) == 0)) {
    uStack_31 = 0;
    func_0x0001078acb74(unaff_x20 + 0x217,&uStack_31);
    func_0x0001078af4e8();
  }
  else {
    uStack_32 = 1;
    func_0x0001078acb74(unaff_x20 + 0x217,&uStack_32);
    func_0x0001078af4e8();
  }
  func_0x0001078ac994(unaff_x20 + 0x214,unaff_x19 + 1);
  func_0x0001078acbd8(unaff_x20 + 0x208,unaff_x19 + 4);
  return;
}



/* Entry: 1078ada64; end: 1078adaa7;  */

float * FUN_1078ada64(float *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = *param_2;
  if ((((uint)param_1[1] & 1) != 0) || (*param_1 != fVar1)) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = fVar1;
    func_0x0001078b6530(param_1);
  }
  return param_1;
}



/* Entry: 1078ae148; end: 1078ae17b;  */

void FUN_1078ae148(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x30))(param_1,&uStack_18);
    return;
  }
  func_0x000104bfeb48();
  uVar1 = param_1[0x7c] + 1;
  param_1[0x7c] = uVar1;
  if (uVar1 == 0xffffffffffffffff) {
    func_0x0001078aee88(param_1 + 0x77);
    param_1[0x7c] = 0;
  }
  else if (0xf < uVar1) {
    plVar2 = (long *)param_1[0x79];
    while (plVar2 != (long *)0x0) {
      if ((ulong)plVar2[3] < param_1[0x7c] - 0x10U) {
        plVar2 = param_1 + 0x77;
        func_0x0001078aeed4();
      }
      else {
        plVar2 = (long *)*plVar2;
      }
    }
  }
  return;
}



/* Entry: 1078ae540; end: 1078ae55f;  */

void FUN_1078ae540(void)

{
  func_0x0001078af2e8();
  func_0x0001078ae560();
  return;
}



/* Entry: 1078ae648; end: 1078ae667;  */

void FUN_1078ae648(void)

{
  func_0x0001078af2e8();
  func_0x0001078ae668();
  return;
}



/* Entry: 1078ae774; end: 1078ae793;  */

void FUN_1078ae774(void)

{
  func_0x0001078af2e8();
  func_0x0001078ae794();
  return;
}



/* Entry: 1078ae950; end: 1078ae957;  */

void FUN_1078ae950(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 1078aea54; end: 1078aea7b;  */

void FUN_1078aea54(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001078af538();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109e7588;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1078aebe4; end: 1078aec4b;  */

void FUN_1078aebe4(undefined8 *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_1109e7e38;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 2);
  param_1[4] = *(undefined8 *)(param_2 + 4);
  param_1[3] = uVar1;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)(param_2 + 6) = 0;
  *(undefined2 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = param_3;
  return;
}



/* Entry: 1078aee0c; end: 1078aee2b;  */

void FUN_1078aee0c(void)

{
  func_0x0001078af2e8();
  func_0x0001078aee2c();
  return;
}



/* Entry: 1078afd7c; end: 1078afd7f;  */

undefined8 * FUN_1078afd7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e76d0;
  func_0x0001078aebc0(param_1 + 3);
  return param_1;
}



/* Entry: 1078afe9c; end: 1078aff17;  */

void FUN_1078afe9c(long *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[1] == '\x01')) {
    func_0x0001078b0024(*param_1 + 0x2b8);
  }
  return;
}



/* Entry: 1078b019c; end: 1078b01af;  */

void FUN_1078b019c(long *param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uStack_24;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uStack_24 = *param_2;
    lVar2 = lVar1 + 0x40;
    func_0x000107272170(lVar2,&uStack_24);
    if (lVar2 != 0) {
      func_0x0001078b04dc(lVar1 + 0x10,&uStack_24);
    }
    return;
  }
  return;
}



/* Entry: 1078b055c; end: 1078b0577;  */

void FUN_1078b055c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x0001078b01ec(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


