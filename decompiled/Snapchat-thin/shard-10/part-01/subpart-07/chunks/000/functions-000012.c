/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10789343c; end: 107893473;  */

long FUN_10789343c(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109e4aa8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1078936f0; end: 10789374b;  */

undefined8 * FUN_1078936f0(undefined8 *param_1)

{
  long lVar1;
  
  if ((*(byte *)((long)param_1 + 0x5a) & 1) == 0) {
    if (*(char *)((long)param_1 + 0x59) != '\x01') goto LAB_107893730;
    lVar1 = 0x28;
  }
  else {
    lVar1 = 0x20;
  }
  (**(code **)(*(long *)param_1[0xc] + lVar1))();
LAB_107893730:
  func_0x0001073ad824(param_1 + 0xc);
  *param_1 = &PTR_DAT_1109b5ab0;
  func_0x0001073ad3c4(param_1 + 8);
  func_0x0001073ad4a0(param_1 + 5);
  func_0x0001073ad4c4(param_1 + 3);
  func_0x0001073ad37c(param_1 + 1);
  return param_1;
}



/* Entry: 107893ad8; end: 107893b47;  */

void FUN_107893ad8(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 107893f04; end: 107893f0b;  */

void FUN_107893f04(void)

{
  return;
}



/* Entry: 1078948b8; end: 107894903;  */

uint FUN_1078948b8(long param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar3 = (*(long *)(param_1 + 0x1f8) - *(long *)(param_1 + 0x1f0)) / 3;
  if (param_2 < uVar3) {
    pbVar1 = (byte *)(*(long *)(param_1 + 0x1f0) + (ulong)param_2 * 3);
    uVar2 = (uint)*pbVar1;
    uVar3 = (ulong)pbVar1[1];
    uVar4 = (uint)pbVar1[2];
  }
  else {
    uVar4 = 0;
    uVar2 = 0;
  }
  return uVar4 << 0x10 | ((uint)uVar3 & 0xff) << 8 | uVar2;
}



/* Entry: 107894bb4; end: 107894be3;  */

void FUN_107894bb4(long param_1,long param_2,undefined4 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  param_2 = param_2 * 5;
  lVar1 = (long)*(undefined4 **)(param_1 + 8) + param_2;
  puVar3 = *(undefined4 **)(param_1 + 8);
  for (; param_2 != 0; param_2 = param_2 + -5) {
    uVar2 = *param_3;
    *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(param_3 + 1);
    *puVar3 = uVar2;
    puVar3 = (undefined4 *)((long)puVar3 + 5);
  }
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 107894de4; end: 107894e3f;  */

void FUN_107894de4(long param_1)

{
  long unaff_x19;
  
  func_0x000107895ecc();
  if (param_1 != 0) {
    func_0x000107250860();
  }
  func_0x0001072508a0();
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 107895df8; end: 107895fb3;  */

void FUN_107895df8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 10789629c; end: 1078962c7;  */

void FUN_10789629c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_DAT_1109e4dd0;
  lVar4 = *(long *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar5;
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
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  return;
}



/* Entry: 107896544; end: 107896593;  */

undefined8 * FUN_107896544(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  *param_1 = &PTR_DAT_1109e4f08;
  do {
    if (*(char *)((long)param_1 + lVar1 + 0x68) == '\x01') {
      func_0x000107896594((long)param_1 + lVar1 + 0x50);
    }
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != -0x60);
  return param_1;
}



/* Entry: 10789679c; end: 1078967af;  */

void FUN_10789679c(void)

{
  return;
}



/* Entry: 107897ee0; end: 107897f7b;  */

byte FUN_107897ee0(byte *param_1,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  
  switch(param_2) {
  case 1:
  case 2:
    do {
      bVar3 = *param_1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  case 3:
    do {
      bVar3 = *param_1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  case 4:
    do {
      bVar3 = *param_1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  case 5:
    do {
      bVar3 = *param_1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  default:
    do {
      bVar3 = *param_1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return bVar3 & 1;
}



/* Entry: 1078981ac; end: 1078981d3;  */

void FUN_1078981ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x8;
  __Znwm();
  *puVar1 = 0;
  *param_1 = puVar1;
  return;
}



/* Entry: 1078985a0; end: 1078986eb;  */

void FUN_1078985a0(undefined8 param_1,undefined8 param_2)

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
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 **ppuStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_88;
  long lStack_80;
  undefined1 *puStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_48;
  
  func_0x0001078994d4();
  uStack_48 = extraout_x8;
  FUN_107898fb8(&puStack_88);
  *puStack_88 = 0;
  puVar4 = (undefined8 *)0x98;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1109e5868;
  func_0x000105302f48(&puStack_68,param_2);
  puStack_78 = puStack_88;
  lStack_70 = lStack_80;
  if (lStack_80 != 0) {
    plVar1 = (long *)(lStack_80 + 8);
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
  puVar4[0xc] = puStack_88;
  puVar4[0xd] = lStack_80;
  puStack_78 = (undefined1 *)0x0;
  lStack_70 = 0;
  func_0x000105302f48(puVar4 + 0xe,&puStack_68);
  func_0x000100688f50(&puStack_78);
  func_0x0001006393ec(&puStack_68);
  puStack_68 = puVar4 + 3;
  puStack_60 = puVar4;
  func_0x000100688f50(&puStack_88);
  func_0x00010789955c();
  ppuVar5 = &puStack_68;
  func_0x000107898790();
  func_0x000107899470(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ppuVar6 = &puStack_68;
  func_0x000107898790();
  func_0x000107899498();
  puStack_98 = &DAT_1078986ec;
  puStack_b8 = ppuVar6[0x1b];
  puStack_c0 = ppuVar6[0x1a];
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
  puStack_b0 = puVar4;
  ppuStack_a8 = ppuVar5;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x000107314188(extraout_x8_00,&puStack_c0,ppuVar6[0x1c]);
  func_0x00010731486c();
  return;
}



/* Entry: 10789895c; end: 1078989d7;  */

void FUN_10789895c(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x0001072ab574(param_1 + 0x88);
  lVar1 = 0x58;
  if (param_2 == 0) {
    lVar1 = 0x28;
  }
  func_0x0001078989d8(param_1 + lVar1,param_3);
  func_0x000107898460(param_1);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000104c003e8(param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x88);
  return;
}



/* Entry: 107898e0c; end: 107898eb7;  */

void FUN_107898e0c(long *param_1)

{
  ulong uVar1;
  bool bVar2;
  long extraout_x8;
  long lVar3;
  long lVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  func_0x000107899510();
  lVar3 = param_1[1];
  if (lVar3 == *param_1) {
    uVar1 = *(ulong *)(unaff_x19 + 0x18);
    bVar2 = *(ulong *)(unaff_x19 + 0x10) == uVar1;
    if (*(ulong *)(unaff_x19 + 0x10) < uVar1) {
      func_0x0001078994ac();
      lVar3 = extraout_x8;
      if (!bVar2) {
        _memmove();
        lVar3 = *(long *)(unaff_x19 + 0x10);
      }
      *(long *)(unaff_x19 + 8) = unaff_x21;
      *(long *)(unaff_x19 + 0x10) = lVar3 + unaff_x22 * 8;
      lVar3 = unaff_x21;
    }
    else {
      lVar4 = (long)(uVar1 - lVar3) >> 2;
      if (uVar1 - lVar3 == 0) {
        lVar4 = 1;
      }
      lVar3 = *(long *)(unaff_x19 + 0x20);
      func_0x000107898eec();
      func_0x000107899420(lVar3 + (lVar4 * 2 + 6U & 0xfffffffffffffff8));
      func_0x0001078994f0();
      func_0x000107899408();
      lVar3 = *(long *)(unaff_x19 + 8);
    }
  }
  *(undefined8 *)(lVar3 + -8) = *unaff_x20;
  *(undefined8 **)(unaff_x19 + 8) = (undefined8 *)(lVar3 + -8);
  return;
}



/* Entry: 107898fb8; end: 107898fd7;  */

void FUN_107898fb8(void)

{
  undefined1 uStack_11;
  
  func_0x000107898fd8(&uStack_11);
  return;
}



/* Entry: 107899128; end: 107899137;  */

void FUN_107899128(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e5868;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107899274; end: 1078992ab;  */

long FUN_107899274(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109e5988);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10789935c; end: 107899363;  */

void FUN_10789935c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107899584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1078996ac; end: 1078996c3;  */

void FUN_1078996ac(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x0001078997d8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107899d5c; end: 107899da7;  */

long FUN_107899d5c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  plVar1 = *(long **)(param_1 + 0x10);
  while( true ) {
    if (plVar3 == plVar1) {
      return 0;
    }
    lVar2 = *plVar3;
    func_0x000107899ff4();
    if (lVar2 == param_2) break;
    plVar3 = plVar3 + 1;
  }
  return *plVar3;
}



/* Entry: 107899fcc; end: 10789a00b;  */

void FUN_107899fcc(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107899fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 10789a50c; end: 10789a6f3;  */

/* WARNING: Possible PIC construction at 0x00010789a53c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010789a540) */
/* WARNING: Removing unreachable block (ram,0x00010789a5b8) */
/* WARNING: Removing unreachable block (ram,0x00010789a544) */
/* WARNING: Removing unreachable block (ram,0x00010789a674) */
/* WARNING: Removing unreachable block (ram,0x00010789a694) */
/* WARNING: Removing unreachable block (ram,0x00010789a6ec) */
/* WARNING: Removing unreachable block (ram,0x00010789a680) */

bool FUN_10789a50c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  
  func_0x00010789b06c();
  uVar2 = param_2;
  func_0x000107264c5c();
  puVar1 = &uStack_120;
  uStack_108 = 0x10789a540;
  uStack_120 = param_2;
  uStack_118 = uVar2;
  puStack_110 = &stack0xfffffffffffffff0;
  func_0x00010772cd00(&uStack_120,&DAT_10f405966,0);
  return puVar1 == (undefined8 *)0x0;
}



/* Entry: 10789accc; end: 10789ad43;  */

long * FUN_10789accc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x00010789ad08(lVar1 + 8);
    func_0x0001004895c8(lVar1);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10789ae20; end: 10789ae7f;  */

void FUN_10789ae20(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  func_0x000104c2fe00();
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x40) = param_3[1];
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}



/* Entry: 10789af68; end: 10789af73;  */

void FUN_10789af68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010789b0fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10789b314; end: 10789b357;  */

undefined8 * FUN_10789b314(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e5cb8;
  func_0x00010789d648(param_1 + 3);
  func_0x00010789d248(param_1 + 2);
  func_0x00010789d29c(param_1 + 1);
  return param_1;
}



/* Entry: 10789bc1c; end: 10789bd2f;  */

void FUN_10789bc1c(undefined8 param_1,undefined8 *param_2,undefined1 *param_3,undefined *param_4)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [8];
  long lStack_98;
  undefined8 uStack_48;
  
  puVar1 = &stack0xfffffffffffffff0;
  func_0x00010789e754();
  func_0x00010789e4ec();
  uStack_48 = extraout_x8;
  func_0x00010789e558();
  if ((bool)in_ZR) {
    if (*(long *)(extraout_x8_00 + 8) != 0) {
      func_0x00010789e848();
      func_0x00010789e5b0();
      uStack_b0 = param_1;
      if (extraout_x8_01 != 0) {
        do {
          func_0x00010789e4dc();
        } while (extraout_w10 != 0);
      }
      func_0x00010789e780();
      if (lStack_98 != 0) {
        func_0x00010789e66c();
        param_2 = (undefined8 *)(unaff_x24 + 0x18);
        func_0x000105302f48();
        param_4 = &LAB_10789bd30;
        func_0x00010789e610();
        func_0x00010789e65c();
        param_3 = auStack_a0;
        func_0x00010789e624();
        func_0x00010789e604();
        if (param_2 != (undefined8 *)0x0) {
          func_0x00010789e4d0();
        }
      }
      func_0x00010789e5a0();
      func_0x00010789e5ec();
    }
LAB_10789bcf0:
    func_0x00010789e4bc(uStack_48);
    if ((bool)in_ZR) {
      return;
    }
  }
  else {
    param_2 = *(undefined8 **)(extraout_x8_00 + 0x10);
    if (param_2 == (undefined8 *)0x0) goto LAB_10789bcf0;
    func_0x00010789e4bc(uStack_48);
    if ((bool)in_ZR) {
      func_0x00010789e828();
      goto code_r0x00010789bd30;
    }
  }
  ___stack_chk_fail();
  func_0x00010789e5f4();
  if (param_2 != (undefined8 *)0x0) {
    func_0x00010789e4d0();
  }
  func_0x00010789e5a0();
  func_0x00010789e5ec();
  unaff_x30 = &LAB_10789bd30;
  func_0x00010789e550();
  register0x00000008 = (BADSPACEBASE *)auStack_c0;
  unaff_x29 = puVar1;
code_r0x00010789bd30:
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  (**(code **)(*(long *)*param_2 + 0x10))();
  if (*(long *)(param_4 + 0x18) == 0) {
    return;
  }
  if (*(long **)(param_4 + 0x18) == (long *)0x0) {
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    func_0x000104bfeb48();
    *(undefined1 **)((long)register0x00000008 + -0x20) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x18) = &UNK_104c00400;
    *(undefined1 **)((long)register0x00000008 + -0x28) = param_3;
    func_0x000104c00420();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104c01bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_4 + 0x18) + 0x30))();
  return;
}



/* Entry: 10789c05c; end: 10789c06b;  */

void FUN_10789c05c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010789c068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x60))();
  return;
}



/* Entry: 10789c530; end: 10789c563;  */

void FUN_10789c530(void)

{
  func_0x00010789e5bc();
  func_0x00010789e6fc();
  func_0x00010789e544();
  func_0x00010789e584();
  return;
}



/* Entry: 10789c9e8; end: 10789c9fb;  */

void FUN_10789c9e8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 8);
  if (lVar1 == 0) {
    return;
  }
  __ZNSt3__17promiseIvE9set_valueEv(*(undefined8 *)(lVar1 + 0x48));
  FUN_10787b420((undefined8 *)(lVar1 + 0x48),0);
  lVar2 = *(long *)(lVar1 + 0x40);
  *(long *)(lVar1 + 0x40) = 0;
  if (lVar2 != 0) {
    if (lVar2 != 0) {
      __ZNSt3__17promiseIvED1Ev(lVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10789ccd0; end: 10789cd07;  */

undefined8 FUN_10789ccd0(undefined8 param_1)

{
  func_0x00010789e6e4();
  func_0x00010789cde4();
  return param_1;
}



/* Entry: 10789ce50; end: 10789ce73;  */

undefined8 * FUN_10789ce50(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00010789e820();
  *puVar1 = &PTR_DAT_1109e5e18;
  func_0x00010789ce14(puVar1 + 1,param_1 + 1);
  return puVar1;
}



/* Entry: 10789d05c; end: 10789d077;  */

void FUN_10789d05c(void)

{
  func_0x00010789e714();
  return;
}



/* Entry: 10789d1b4; end: 10789d1ff;  */

void FUN_10789d1b4(void)

{
  func_0x00010789e58c();
  func_0x00010789e834();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)();
  return;
}



/* Entry: 10789d2f0; end: 10789d33b;  */

long FUN_10789d2f0(long param_1)

{
  func_0x00010789d31c(param_1 + 0x10);
  func_0x00010789d398(param_1 + 8);
  return param_1;
}



/* Entry: 10789d578; end: 10789d58b;  */

void FUN_10789d578(void)

{
  func_0x00010789d638();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10789d69c; end: 10789da33;  */

/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_10789d69c(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_170;
  undefined1 auStack_168 [24];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [8];
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined **appuStack_110 [3];
  undefined ***pppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long alStack_d0 [4];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [32];
  undefined8 uStack_68;
  
  puVar2 = param_1;
  func_0x00010789e4ec();
  *puVar2 = (char)param_4;
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  uStack_68 = extraout_x8;
  if (param_4 == 0) {
    puVar5 = (undefined8 *)0x20;
    __Znwm();
    uVar7 = param_2[1];
    uVar4 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    uVar9 = param_3[1];
    uVar8 = *param_3;
    *param_3 = 0;
    param_3[1] = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    puVar5[1] = uVar9;
    *puVar5 = uVar8;
    puVar5[3] = uVar7;
    puVar5[2] = uVar4;
    alStack_d0[0] = 0;
    alStack_d0[1] = 0;
    func_0x0001072aef7c(&uStack_f0);
    func_0x00010724bd50(alStack_d0);
    uStack_150 = 0;
    func_0x00010789d33c(puVar2 + 0x10,puVar5);
    func_0x00010789d31c(&uStack_150);
  }
  else {
    pppuStack_f8 = appuStack_110;
    appuStack_110[0] = &PTR_DAT_1109e3f18;
    lVar3 = 0x58;
    __Znwm();
    func_0x00010002b838(auStack_168,&UNK_10f432952);
    func_0x00010724cbe8(&uStack_f0,appuStack_110);
    uStack_148 = param_2[1];
    uStack_150 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    uStack_138 = param_3[1];
    uStack_140 = *param_3;
    *param_3 = 0;
    param_3[1] = 0;
    func_0x00010724b408(lVar3);
    *(undefined8 *)(lVar3 + 0x38) = 0;
    *(undefined8 *)(lVar3 + 0x30) = 0;
    *(undefined8 *)(lVar3 + 0x50) = 0;
    *(undefined8 *)(lVar3 + 0x48) = 0;
    *(undefined8 *)(lVar3 + 0x40) = 0;
    __ZNSt3__17promiseIvEC1Ev(&uStack_128);
    __ZNSt3__17promiseIvE10get_futureEv(alStack_d0,&uStack_128);
    func_0x00010787b1b0(lVar3 + 0x38,alStack_d0);
    __ZNSt3__16futureIvED1Ev(alStack_d0);
    alStack_d0[0] = lVar3;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (alStack_d0 + 1,auStack_168);
    uStack_a8 = uStack_148;
    uStack_b0 = uStack_150;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_98 = uStack_138;
    uStack_a0 = uStack_140;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_90 = uStack_128;
    uStack_128 = 0;
    func_0x000105302f48(auStack_88,&uStack_f0);
    uVar4 = 8;
    __Znwm();
    __ZNSt3__115__thread_structC1Ev();
    puVar5 = (undefined8 *)0x70;
    uStack_118 = uVar4;
    __Znwm();
    uStack_118 = 0;
    *puVar5 = uVar4;
    puVar5[1] = alStack_d0[0];
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (puVar5 + 2,alStack_d0 + 1);
    puVar5[6] = uStack_a8;
    puVar5[5] = uStack_b0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    puVar5[8] = uStack_98;
    puVar5[7] = uStack_a0;
    uStack_a0 = 0;
    uStack_98 = 0;
    puVar5[9] = uStack_90;
    uStack_90 = 0;
    func_0x000105302f48(puVar5 + 10,auStack_88);
    puVar6 = auStack_130;
    puStack_120 = puVar5;
    func_0x000100489040(puVar6,&UNK_10789da34,puVar5);
    if ((int)puVar6 != 0) goto LAB_10789d92c;
    puStack_120 = (undefined8 *)0x0;
    func_0x00010789db88(&puStack_120);
    func_0x0001004895c8(&uStack_118);
    func_0x0001004895f4((undefined8 *)(lVar3 + 0x30),auStack_130);
    __ZNSt3__16threadD1Ev(auStack_130);
    func_0x00010789dbc4(alStack_d0);
    __ZNSt3__17promiseIvED1Ev(&uStack_128);
    func_0x00010789dc00(&uStack_150);
    func_0x0001006393ec(&uStack_f0);
    func_0x00010789e6ec();
    uStack_170 = 0;
    func_0x00010789d3b8(puVar2 + 8,lVar3);
    func_0x00010789d398(&uStack_170);
    func_0x0001006393ec(appuStack_110);
  }
  func_0x00010789e4bc(uStack_68);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
LAB_10789d92c:
  __ZNSt3__120__throw_system_errorEiPKc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10789d93c);
  (*pcVar1)();
}



/* Entry: 10789dd70; end: 10789dd83;  */

void FUN_10789dd70(void)

{
  func_0x00010789dd44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10789dfa0; end: 10789dfa3;  */

undefined8 * FUN_10789dfa0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e6088;
  func_0x00010789e050(param_1 + 4);
  return param_1;
}



/* Entry: 10789e168; end: 10789e18b;  */

void FUN_10789e168(long param_1)

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
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1 + 0x20,param_1 + 0x38);
  return;
}



/* Entry: 10789e2bc; end: 10789e2e3;  */

void FUN_10789e2bc(void)

{
  func_0x00010789e7c0();
  func_0x00010789e7a8();
  return;
}



/* Entry: 10789e3dc; end: 10789e453;  */

undefined8 * FUN_10789e3dc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e61c8;
  func_0x00010789e408(param_1 + 4);
  return param_1;
}



/* Entry: 10789e8a0; end: 10789e8f7;  */

undefined8 FUN_10789e8a0(void)

{
  int iVar1;
  
  if ((bRam00000001138244f8 & 1) == 0) {
    iVar1 = 0x138244f8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010789e8f8(0x1138244e8);
      ___cxa_guard_release(0x1138244f8);
    }
  }
  return 0x1138244e8;
}



/* Entry: 10789ea48; end: 10789ea73;  */

void FUN_10789ea48(undefined8 param_1,undefined8 param_2)

{
  func_0x00010789ed7c(param_2,param_1,&PTR_DAT_1109e62f0);
  func_0x00010789ed40();
  return;
}



/* Entry: 10789eb5c; end: 10789eb77;  */

void FUN_10789eb5c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109e6390;
  return;
}



/* Entry: 10789ee64; end: 10789ef17;  */

undefined1 * FUN_10789ee64(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_c8 [128];
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001072fb714(auStack_48,param_1 + 8);
  func_0x0001075281c8(auStack_c8,param_2);
  func_0x0001072fb768(auStack_48,auStack_c8);
  func_0x00010724b340(auStack_c8);
  puVar1 = auStack_48;
  func_0x0001072ad0c8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010724b340(auStack_c8);
  func_0x0001072ad0c8(auStack_48);
  __Unwind_Resume();
  puVar2 = puVar1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  return puVar2 + -*(long *)(puVar1 + 0x58);
}



/* Entry: 10789f310; end: 10789f397;  */

void FUN_10789f310(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  uVar1 = 0x40;
  __Znwm();
  func_0x00010002b838(auStack_48,param_3);
  func_0x00010789faac(uVar1,param_2,auStack_48);
  *param_1 = uVar1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  return;
}



/* Entry: 10789fa6c; end: 10789fa73;  */

void FUN_10789fa6c(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  puVar3 = (undefined8 *)(lVar1 + 0x30);
  __ZNSt3__17promiseIvE9set_valueEv(*puVar3);
  FUN_10787b420(puVar3,0);
  plVar2 = (long *)(lVar1 + 0x28);
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



/* Entry: 10789fefc; end: 10789ff0f;  */

void FUN_10789fefc(void)

{
  func_0x00010789ffbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078a000c; end: 1078a0037;  */

undefined8 * FUN_1078a000c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e6588;
  func_0x00010789aeec(param_1 + 4);
  return param_1;
}



/* Entry: 1078a0218; end: 1078a030b;  */

undefined8 *
FUN_1078a0218(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  
  *param_1 = &PTR_DAT_1109e6660;
  uStack_48 = param_4;
  FUN_10789e8a0();
  func_0x0001078a33d0(auStack_58);
  FUN_10789e8a0();
  func_0x0001078a33d0(auStack_68);
  FUN_10789e8a0();
  func_0x0001078a33d0(auStack_78);
  FUN_10789e8a0();
  func_0x0001078a33d0(auStack_88);
  func_0x0001078a030c(param_1 + 1,auStack_58,auStack_68,auStack_78,auStack_88,param_5,param_3,
                      &uStack_48);
  func_0x00010724bd50(auStack_88);
  func_0x00010724bd50(auStack_78);
  func_0x0001078a33a0();
  func_0x0001078a33c8();
  return param_1;
}



/* Entry: 1078a0db4; end: 1078a151b;  */

/* WARNING: Removing unreachable block (ram,0x0001078a11ac) */

undefined8 *
FUN_1078a0db4(long *param_1,undefined8 param_2,long param_3,undefined8 *param_4,undefined8 param_5)

{
  long *plVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  char *pcVar12;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  int extraout_w10;
  undefined8 uStack_18b8;
  ulong auStack_18b0 [4];
  undefined4 uStack_1890;
  undefined8 uStack_1830;
  undefined8 uStack_1828;
  undefined8 uStack_1820;
  undefined8 auStack_1818 [63];
  undefined1 auStack_1620 [544];
  long *plStack_1400;
  undefined8 uStack_13f8;
  undefined8 uStack_13f0;
  undefined1 auStack_13e8 [504];
  undefined1 auStack_11f0 [544];
  undefined1 auStack_fd0 [24];
  undefined8 *puStack_fb8;
  undefined8 auStack_fb0 [68];
  undefined1 auStack_d90 [32];
  undefined8 auStack_d70 [68];
  undefined1 auStack_b50 [32];
  undefined8 auStack_b30 [68];
  undefined1 auStack_910 [32];
  undefined8 auStack_8f0 [68];
  undefined1 auStack_6d0 [32];
  long *plStack_6b0;
  undefined1 auStack_6a8 [16];
  long lStack_698;
  char *pcStack_690;
  undefined4 uStack_680;
  undefined1 auStack_4b0 [544];
  undefined8 uStack_290;
  undefined8 uStack_288;
  long lStack_280;
  undefined1 auStack_278 [24];
  undefined1 uStack_260;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_68;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar6 = param_1;
  func_0x0001078a320c();
  lVar7 = *plVar6;
  uStack_68 = extraout_x8;
  if (lVar7 == 0) {
LAB_1078a0ec0:
    bVar2 = false;
  }
  else {
    func_0x0001078a32f0();
    iVar5 = (int)lVar7;
    func_0x0001078a3398();
    if (iVar5 == 0) goto LAB_1078a0ec0;
    pcVar12 = "url";
    func_0x0001078a330c();
    func_0x00010002b838();
    lVar7 = param_3 + 8;
    func_0x000107264c5c();
    uStack_680 = 0;
    auStack_18b0[1] = 0;
    auStack_18b0[0] = 0;
    auStack_18b0[3] = 0;
    auStack_18b0[2] = 0;
    uStack_1890 = 0x3f800000;
    lStack_698 = lVar7;
    pcStack_690 = pcVar12;
    func_0x0001078a34c8(auStack_18b0);
    func_0x0001072d4dbc();
    func_0x0001078a330c();
    func_0x00010724b1dc();
    uStack_290 = CONCAT44(uStack_290._4_4_,0x168);
    func_0x00010724b0bc(&uStack_288,auStack_18b0);
    bVar2 = true;
    uStack_260 = 1;
    func_0x0001078a330c();
    func_0x000107527ba8();
    func_0x0001078a34c8(param_3 + 0xd0);
    func_0x0001073261e8();
    func_0x0001078a330c();
    func_0x00010724b12c();
    func_0x00010724b15c(&uStack_288);
    func_0x00010724b17c(auStack_18b0);
  }
  uStack_288 = param_4[1];
  uStack_290 = *param_4;
  lStack_280 = param_4[2];
  if (lStack_280 != 0) {
    do {
      func_0x0001078a31ac();
    } while (extraout_w10 != 0);
  }
  func_0x0001078a3390(auStack_278);
  plStack_6b0 = param_1;
  uStack_80 = param_5;
  plStack_78 = param_1;
  func_0x0001078a3390(auStack_6a8);
  func_0x0001078a31cc(auStack_4b0);
  lVar7 = param_1[0xf];
  plVar1 = (long *)param_1[9];
  for (plVar6 = (long *)param_1[8]; uVar4 = plVar6 == plVar1, !(bool)uVar4; plVar6 = plVar6 + 2) {
    lVar8 = *plVar6;
    if (lVar8 != 0) {
      func_0x0001078a32f0();
      iVar5 = (int)lVar8;
      func_0x0001078a3398();
      if (iVar5 != 0) {
        func_0x0001078a31cc(auStack_8f0);
        puVar9 = auStack_6d0;
        func_0x0001078a1e14(puVar9,auStack_8f0);
        func_0x0001078a340c();
        func_0x0001078a3230(auStack_18b0);
        uStack_1830 = param_2;
        func_0x0001078a3200();
        func_0x0001078a3198();
        if (extraout_x8_01 != 0) {
          func_0x0001078a3144();
        }
        func_0x0001078a32c8();
        if (puVar9 != (undefined1 *)0x0) {
          func_0x0001078a3138();
        }
        func_0x0001078a3450();
        puVar10 = auStack_8f0;
        func_0x0001078a1f8c();
        goto LAB_1078a10c0;
      }
    }
  }
  if (bVar2) {
    func_0x0001078a31cc(auStack_b30);
    puVar9 = auStack_910;
    func_0x0001078a1e14(puVar9,auStack_b30);
    func_0x0001078a340c();
    func_0x0001078a3230(auStack_18b0);
    uStack_1830 = param_2;
    func_0x0001078a3200();
    func_0x0001078a3198();
    if (extraout_x8_00 != 0) {
      func_0x0001078a3144();
    }
    func_0x0001078a32c8();
    if (puVar9 != (undefined1 *)0x0) {
      func_0x0001078a3138();
    }
    func_0x0001072ad0c8(auStack_910);
    puVar10 = auStack_b30;
LAB_1078a1068:
    func_0x0001078a1f8c();
LAB_1078a106c:
    uVar4 = param_1[0xf] == lVar7;
    if (!(bool)uVar4) goto LAB_1078a10c0;
    auStack_18b0[0] = auStack_18b0[0] & 0xffffffffffffff00;
    func_0x0001078a328c();
    uStack_18b8 = CONCAT71(uStack_18b8._1_7_,6);
    func_0x00010789cc18(&uStack_1830,&uStack_18b8,&UNK_10f4329b8);
    uVar3 = uStack_1830;
    uStack_1830 = 0;
    func_0x00010724b300(auStack_18b0 + 2,uVar3);
    puVar10 = &uStack_1830;
    func_0x0001072d6f8c();
    func_0x0001078a3370();
  }
  else {
    lVar8 = param_1[4];
    if (lVar8 != 0) {
      func_0x0001078a32f0();
      iVar5 = (int)lVar8;
      func_0x0001078a3398();
      if (iVar5 != 0) {
        func_0x0001078a31cc(auStack_d70);
        puVar9 = auStack_b50;
        func_0x0001078a1e14(puVar9,auStack_d70);
        func_0x0001078a340c();
        func_0x0001078a3230(auStack_18b0);
        uStack_1830 = param_2;
        func_0x0001078a3200();
        func_0x0001078a3198();
        if (extraout_x8_02 != 0) {
          func_0x0001078a3144();
        }
        func_0x0001078a32c8();
        if (puVar9 != (undefined1 *)0x0) {
          func_0x0001078a3138();
        }
        func_0x0001072ad0c8(auStack_b50);
        puVar10 = auStack_d70;
        goto LAB_1078a1068;
      }
    }
    lVar8 = param_1[2];
    if (lVar8 == 0) {
LAB_1078a118c:
      func_0x0001078a34c8(auStack_18b0);
      func_0x0001078a1bf4();
      puVar10 = (undefined8 *)0x0;
      puVar11 = (undefined8 *)0x0;
      if (auStack_18b0[0] != 0) {
        uStack_1830 = param_2;
        func_0x0001078a3200();
        func_0x0001078a3198();
        puVar10 = puVar11;
        if (extraout_x8_03 != 0) {
          func_0x0001078a3144();
          puVar10 = puVar11;
        }
        func_0x0001078a32c8();
        if (puVar10 != (undefined8 *)0x0) {
          func_0x0001078a3138();
        }
      }
      goto LAB_1078a106c;
    }
    func_0x0001078a32f0();
    iVar5 = (int)lVar8;
    func_0x0001078a3398();
    if (iVar5 == 0) goto LAB_1078a118c;
    uVar4 = *(char *)(param_3 + 1) == '\x01';
    if (!(bool)uVar4) {
      if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
        func_0x0001078a3390(auStack_1818);
        func_0x0001078a31cc(auStack_1620);
        plStack_1400 = param_1;
        uStack_13f8 = param_2;
        func_0x0001078a34c8(&uStack_13f0);
        func_0x0001078a22e8();
        puStack_fb8 = (undefined8 *)0x0;
        puVar11 = (undefined8 *)0x850;
        __Znwm();
        *puVar11 = &PTR_FUN_1109e6890;
        func_0x0001072d488c(puVar11 + 1,auStack_1818);
        func_0x0001078a1f10(puVar11 + 0x40,auStack_1620);
        puVar11[0x85] = uStack_13f8;
        puVar11[0x84] = plStack_1400;
        puVar11[0x86] = uStack_13f0;
        func_0x0001072d488c(puVar11 + 0x87,auStack_13e8);
        puVar10 = puVar11 + 0xc6;
        func_0x0001078a1f10(puVar10,auStack_11f0);
        puStack_fb8 = puVar11;
        func_0x0001078a340c();
        func_0x0001078a3230(auStack_18b0);
        uStack_1830 = param_2;
        func_0x0001078a3200();
        func_0x0001078a3198();
        if (extraout_x8_05 != 0) {
          func_0x0001078a3144();
        }
        func_0x0001078a32c8();
        if (puVar10 != (undefined8 *)0x0) {
          func_0x0001078a3138();
        }
        func_0x0001072ad0c8(auStack_fd0);
        puVar10 = auStack_1818;
        func_0x0001078a2608();
        goto LAB_1078a106c;
      }
      goto LAB_1078a118c;
    }
    if (*(byte *)(param_1 + 0xc) == 0) {
      func_0x0001078a31cc(auStack_fb0);
      puVar9 = auStack_d90;
      func_0x0001078a1e14(puVar9,auStack_fb0);
      func_0x0001078a340c();
      func_0x0001078a3230(auStack_18b0);
      uStack_1830 = param_2;
      func_0x0001078a3200();
      func_0x0001078a3198();
      if (extraout_x8_04 != 0) {
        func_0x0001078a3144();
      }
      func_0x0001078a32c8();
      if (puVar9 != (undefined1 *)0x0) {
        func_0x0001078a3138();
      }
      func_0x0001072ad0c8(auStack_d90);
      puVar10 = auStack_fb0;
      goto LAB_1078a1068;
    }
    auStack_18b0[0] = CONCAT71(auStack_18b0[0]._1_7_,2);
    func_0x0001078a328c();
    puVar9 = (undefined1 *)0x30;
    __Znwm();
    func_0x00010002b838(&uStack_1830,&UNK_10f43299b);
    uVar3 = uStack_1820;
    *puVar9 = 2;
    *(undefined8 *)(puVar9 + 0x10) = uStack_1828;
    *(undefined8 *)(puVar9 + 8) = uStack_1830;
    uStack_1830 = 0;
    uStack_1828 = 0;
    uStack_1820 = 0;
    *(undefined8 *)(puVar9 + 0x20) = 0;
    *(undefined8 *)(puVar9 + 0x28) = 0;
    *(undefined8 *)(puVar9 + 0x18) = uVar3;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1830);
    uStack_18b8 = 0;
    func_0x00010724b300(auStack_18b0 + 2,puVar9);
    puVar10 = &uStack_18b8;
    func_0x0001072d6f8c();
    func_0x0001078a3370();
  }
  func_0x0001078a33b8();
LAB_1078a10c0:
  func_0x0001078a330c();
  func_0x0001078a28e8();
  func_0x0001078a3444();
  func_0x0001078a3168(uStack_68);
  if ((bool)uVar4) {
    return puVar10;
  }
  ___stack_chk_fail();
  func_0x0001078a3244();
  if (puVar10 != (undefined8 *)0x0) {
    func_0x0001078a3138();
  }
  func_0x0001072ad0c8(auStack_fd0);
  puVar10 = auStack_1818;
  func_0x0001078a2608();
  func_0x0001078a330c();
  func_0x0001078a28e8();
  func_0x0001078a3444();
  func_0x0001078a323c();
  *puVar10 = &PTR_DAT_1109e66e0;
  func_0x00010724ae28(puVar10 + 2);
  return puVar10;
}



/* Entry: 1078a164c; end: 1078a1677;  */

undefined8 * FUN_1078a164c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e66e0;
  func_0x00010724ae28(param_1 + 2);
  return param_1;
}



/* Entry: 1078a181c; end: 1078a1873;  */

undefined8 * FUN_1078a181c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e67a0;
  func_0x0001078a1848(param_1 + 4);
  return param_1;
}



/* Entry: 1078a1e78; end: 1078a1eaf;  */

undefined8 FUN_1078a1e78(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x228;
  __Znwm(0x228);
  func_0x0001078a1f68();
  return uVar1;
}



/* Entry: 1078a20c4; end: 1078a2103;  */

void FUN_1078a20c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x19;
  
  func_0x0001078a3154();
  func_0x0001078a317c(param_1,param_2,*unaff_x19,unaff_x19[1]);
  func_0x0001078a34bc();
  func_0x00010729d62c();
  func_0x0001078a32dc();
  func_0x0001078a31f0();
  return;
}



/* Entry: 1078a2330; end: 1078a2333;  */

undefined8 * FUN_1078a2330(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e6890;
  func_0x0001078a2608(param_1 + 1);
  return param_1;
}



/* Entry: 1078a2594; end: 1078a2607;  */

long FUN_1078a2594(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x0001078a33d8(&PTR_FUN_1109e6890);
  func_0x0001078a1de0(param_1 + 0x200,param_2 + 0x1f8);
  uVar1 = *(undefined8 *)(param_2 + 0x418);
  *(undefined8 *)(param_1 + 0x428) = *(undefined8 *)(param_2 + 0x420);
  *(undefined8 *)(param_1 + 0x420) = uVar1;
  func_0x0001078a22e8(param_1 + 0x430,param_2 + 0x428);
  return param_1;
}



/* Entry: 1078a26bc; end: 1078a26bf;  */

undefined8 * FUN_1078a26bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e6970;
  func_0x0001078a28b8(param_1 + 1);
  return param_1;
}



/* Entry: 1078a2828; end: 1078a28b7;  */

undefined8 * FUN_1078a2828(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_1109e6970;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001078a31ac();
    } while (extraout_w10 != 0);
  }
  param_1[3] = param_2[2];
  func_0x0001072d488c(param_1 + 4,param_2 + 3);
  func_0x0001078a1de0(param_1 + 0x43,param_2 + 0x42);
  return param_1;
}



/* Entry: 1078a2a0c; end: 1078a2a1b;  */

void FUN_1078a2a0c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e69f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078a2e34; end: 1078a2e9f;  */

/* WARNING: Possible PIC construction at 0x0001078a2e58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078a2e68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078a2e5c) */
/* WARNING: Removing unreachable block (ram,0x0001078a2e6c) */

long FUN_1078a2e34(long param_1)

{
  long lVar1;
  
  func_0x0001078a2e7c(param_1 + 0x60);
  func_0x0001072aeba4(param_1 + 0x40);
  lVar1 = param_1 + 0x30;
  func_0x00010724ce4c();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1078a309c; end: 1078a30db;  */

void FUN_1078a309c(void)

{
  long unaff_x19;
  
  func_0x0001078a3280();
  if ((**(byte **)(unaff_x19 + 0x48) & 1) == 0) {
    __ZNSt3__17promiseIvE9set_valueEv(*(undefined8 *)(unaff_x19 + 0x58));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x19 + 8);
  return;
}



/* Entry: 1078a3b6c; end: 1078a3c4b;  */

void FUN_1078a3b6c(long *param_1,char *param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long alStack_78 [4];
  long alStack_58 [4];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_2 == '\x03') {
    plVar2 = alStack_58;
    func_0x0001073181d0(alStack_58,param_3);
    param_2 = param_2 + 0x80;
    (**(code **)(*param_1 + 0x120))(param_1,param_2,alStack_58);
  }
  else {
    plVar2 = alStack_78;
    func_0x0001073181d0(alStack_78,param_3);
    (**(code **)(*param_1 + 0x128))(param_1,param_2,alStack_78);
  }
  func_0x000107319d0c(plVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    plVar2 = alStack_78;
    func_0x000107319d0c();
    func_0x0001078a3d80();
    lVar1 = 0x130;
    if (*param_2 != '\x03') {
      lVar1 = 0x138;
    }
                    /* WARNING: Could not recover jumptable at 0x0001078a3c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + lVar1))();
    return;
  }
  return;
}



/* Entry: 1078a3f14; end: 1078a3f2b;  */

void FUN_1078a3f14(long *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  long *plVar3;
  undefined8 extraout_x8;
  long lVar4;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    plVar3 = param_1;
    if ((char)plVar3[0x4d] != '\x04') {
      return;
    }
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001078a7400();
    func_0x0001078a72c0();
    *(undefined8 *)((long)register0x00000008 + -0x38) = extraout_x8;
    unaff_x21 = *plVar3;
    lVar4 = unaff_x21 + 0x40;
    do {
      lVar4 = *(long *)(lVar4 + 8);
      if (lVar4 == unaff_x21 + 0x40) {
        plVar3 = (long *)(unaff_x21 + 0x60);
        func_0x0001078a52d4();
        bVar2 = (long *)(unaff_x21 + 0x68) != plVar3;
        uVar1 = bVar2 || unaff_x19 == (long *)0x7fffffffffffffff;
        if (!bVar2 && unaff_x19 != (long *)0x7fffffffffffffff) {
          *(undefined ***)((long)register0x00000008 + -0x58) = &PTR_DAT_1109e70b0;
          *(long *)((long)register0x00000008 + -0x50) = unaff_x20;
          *(undefined1 **)((long)register0x00000008 + -0x40) =
               (undefined1 *)((long)register0x00000008 + -0x58);
          func_0x0001078995ec(unaff_x20 + 0x208,unaff_x19,0,
                              (undefined1 *)((long)register0x00000008 + -0x58));
          plVar3 = (long *)((long)register0x00000008 + -0x58);
          func_0x0001006393ec();
        }
        break;
      }
      uVar1 = *(long *)(lVar4 + 0x10) == unaff_x20;
    } while (!(bool)uVar1);
    func_0x0001078a7288(*(undefined8 *)((long)register0x00000008 + -0x38));
    if ((bool)uVar1) {
      return;
    }
    ___stack_chk_fail();
    param_1 = (long *)((long)register0x00000008 + -0x58);
    func_0x0001006393ec();
    unaff_x30 = FUN_1078a3f14;
    func_0x0001078a7304();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    unaff_x19 = plVar3;
  } while( true );
}



/* Entry: 1078a4638; end: 1078a467b;  */

void FUN_1078a4638(undefined8 param_1,undefined8 param_2)

{
  func_0x0001078a7400();
  func_0x0001072ab574(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 1078a4e94; end: 1078a4eb7;  */

void FUN_1078a4e94(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x0001078a4eb8(&uStack_11,param_1);
  return;
}



/* Entry: 1078a4fd4; end: 1078a4ffb;  */

void FUN_1078a4fd4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  puVar2 = (undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_1109e6c58;
  uVar4 = *puVar2;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar4;
  lVar3 = *(long *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x0001078a72dc();
    } while (extraout_w10 != 0);
  }
  *(undefined1 *)(puVar1 + 5) = *(undefined1 *)(puVar2 + 4);
  lVar3 = puVar2[6];
  uVar4 = puVar2[5];
  puVar1[7] = puVar2[6];
  puVar1[6] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x0001078a72dc();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1078a5234; end: 1078a5257;  */

void FUN_1078a5234(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x0001078a5254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1 + 0x20);
  return;
}



/* Entry: 1078a578c; end: 1078a582f;  */

void FUN_1078a578c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long alStack_40 [2];
  
  puVar1 = (undefined8 *)(param_1 + 0x10);
  func_0x00010724bb70(alStack_40);
  if (alStack_40[0] != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x0001078a7328();
    *puVar1 = &PTR_DAT_1109e6d88;
    puVar1[1] = uVar3;
    puVar1[2] = &UNK_1078a58d0;
    puVar1[3] = 0;
    puVar1[4] = uVar2;
    func_0x0001078a7354();
    func_0x0001078a7484();
    if (puVar1 != (undefined8 *)0x0) {
      func_0x0001078a729c();
    }
  }
  func_0x0001078a73c8();
  return;
}



/* Entry: 1078a5ae8; end: 1078a5c9b;  */

/* WARNING: Possible PIC construction at 0x0001078a5c3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078a5c40) */

void FUN_1078a5ae8(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar12;
  long unaff_x19;
  long unaff_x20;
  long lVar13;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  func_0x0001078a7400();
  func_0x0001078a72c0();
  uStack_38 = extraout_x8;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_90 = 0;
  puVar6 = (undefined8 *)(unaff_x20 + 0x60);
  func_0x0001078a4df0();
  uVar4 = *(char *)(unaff_x20 + 0x78) == '\x01';
  if ((bool)uVar4) {
    func_0x0001078a7328();
    *puVar6 = &PTR_DAT_1109e6dc8;
    puVar6[2] = unaff_x20;
    puVar6[1] = CONCAT44(uStack_8c,uStack_90);
    puVar6[4] = param_1;
    puVar6[3] = unaff_x19;
    plVar11 = (long *)(unaff_x19 + 8);
    puStack_40 = puVar6;
    func_0x0001078b70bc(alStack_110,unaff_x20 + 0x80,plVar11,auStack_58);
    lVar1 = alStack_110[0];
    alStack_110[0] = 0;
    lVar7 = *(long *)(unaff_x19 + 0x200);
    *(long *)(unaff_x19 + 0x200) = lVar1;
    if (lVar7 != 0) {
      func_0x0001078a729c();
      lVar1 = alStack_110[0];
      alStack_110[0] = 0;
      if (lVar1 != 0) {
        func_0x0001078a729c();
      }
    }
    func_0x0001072ad0c8();
    func_0x0001078a7288(uStack_38);
    if ((bool)uVar4) {
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
    plVar11 = alStack_110;
  }
  plVar10 = plVar9;
  func_0x0001078a72c0();
  lVar1 = plVar10[1];
  uStack_168 = extraout_x8_00;
  func_0x0001078a5a84(lVar1 + 0x60,plVar10[2]);
  lVar13 = plVar9[2];
  lVar7 = *(long *)(lVar13 + 0x200);
  *(undefined8 *)(lVar13 + 0x200) = 0;
  if (lVar7 != 0) {
    func_0x0001078a729c();
    lVar13 = plVar9[2];
  }
  puVar8 = auStack_288;
  func_0x0001075281c8(puVar8,plVar11);
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
    puVar2 = *(undefined1 **)(lVar13 + 0x128);
    uVar3 = *(ulong *)(lVar13 + 0x130);
    *(undefined1 **)(lVar13 + 0x128) = puStack_248;
    *(undefined1 *)(lVar13 + 0x130) = 1;
    func_0x00010789a00c();
    if ((long)puVar8 < (long)puStack_248) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
      if (((uVar3 & 1) != 0) &&
         (lVar7 = (long)puStack_248 - (long)puVar2, (long)puVar2 <= (long)puStack_248)) {
        if (lVar7 < 0x1f) {
          lVar7 = 0x1e;
        }
        bVar5 = puStack_248 == puVar2;
        puStack_248 = puVar2;
        if (!bVar5) {
          puStack_248 = puVar8 + lVar7;
        }
      }
    }
    if ((bStack_240 & 1) == 0) {
      bStack_240 = 1;
    }
    if (bVar5) {
      *(int *)(lVar13 + 0x260) = *(int *)(lVar13 + 0x260) + 1;
      goto code_r0x0001078a5df8;
    }
  }
  *(undefined4 *)(lVar13 + 0x260) = 0;
code_r0x0001078a5df8:
  uVar4 = cStack_220 == '\0';
  puVar8 = auStack_238;
  puVar2 = (undefined1 *)(lVar13 + 0x138);
  if ((bool)uVar4) {
    puVar8 = (undefined1 *)(lVar13 + 0x138);
    puVar2 = auStack_238;
  }
  func_0x0001002a969c(puVar2,puVar8);
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
  func_0x0001078a3e48(lVar13,lVar7);
  func_0x0001072fb714(auStack_188,lVar13 + 0x210);
  func_0x0001075281c8(auStack_208,auStack_288);
  func_0x0001072fb768(auStack_188,auStack_208);
  func_0x00010724b340(auStack_208);
  func_0x0001072ad0c8(auStack_188);
  func_0x00010724b340(auStack_288);
  func_0x0001078a5a20(lVar1);
  func_0x0001078a7288(uStack_168);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    func_0x00010724b340(auStack_208);
    func_0x0001072ad0c8(auStack_188);
    func_0x00010724b340(auStack_288);
    func_0x0001078a7304();
    return;
  }
  return;
}



/* Entry: 1078a5fe0; end: 1078a6047;  */

void FUN_1078a5fe0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x250) != 0) {
      func_0x0001073ada2c();
    }
    func_0x00010724b54c(lVar1 + 0x250);
    func_0x0001006393ec(lVar1 + 0x230);
    func_0x0001072ad0c8(lVar1 + 0x210);
    func_0x0001078996c4(lVar1 + 0x208);
    func_0x0001072aca78(lVar1 + 0x200);
    func_0x0001078a747c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1078a61b0; end: 1078a61d3;  */

undefined8 * FUN_1078a61b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x0001078a7398();
  *puVar1 = &PTR_DAT_1109e6e98;
  func_0x00010789cb98(puVar1 + 1,param_1 + 1);
  return puVar1;
}



/* Entry: 1078a62c0; end: 1078a62d3;  */

void FUN_1078a62c0(void)

{
  func_0x0001078a6364();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078a64f4; end: 1078a6557;  */

void FUN_1078a64f4(long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    pcVar2 = *(code **)(*plVar1 + ((ulong)pcVar2 & 0xffffffff));
  }
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  (*pcVar2)(plVar1,&uStack_40);
  func_0x0001078a73b0();
  return;
}



/* Entry: 1078a67ac; end: 1078a67fb;  */

undefined8 * FUN_1078a67ac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e7070;
  func_0x00010724bd1c(param_1 + 4);
  return param_1;
}



/* Entry: 1078a696c; end: 1078a6cb7;  */

undefined8 * FUN_1078a696c(undefined8 *param_1)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  undefined ****ppppuVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *puVar11;
  undefined **ppuVar12;
  undefined ***pppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined auStack_2c0 [232];
  undefined1 auStack_1d8 [24];
  undefined **ppuStack_1c0;
  undefined1 auStack_1b8 [24];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [8];
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined **appuStack_f8 [3];
  undefined ***pppuStack_e0;
  undefined1 auStack_d8 [32];
  long lStack_b8;
  undefined1 auStack_b0 [32];
  undefined8 uStack_90;
  undefined1 auStack_88 [32];
  undefined8 uStack_68;
  
  puVar2 = param_1;
  func_0x0001078a72c0();
  *puVar2 = 0x32aaaba7;
  puVar2[0xb] = 0x32aaaba7;
  puVar2[2] = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  puVar2[3] = 0;
  puVar2[6] = 0;
  puVar2[5] = 0;
  puVar2[8] = 0;
  puVar2[7] = 0;
  puVar2[10] = 0;
  puVar2[9] = 0;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[0xf] = 0;
  puVar2[0xe] = 0;
  puVar2[0x11] = 0;
  puVar2[0x10] = 0;
  puVar2[0x12] = 0;
  uStack_68 = extraout_x8;
  func_0x00010002b838(puVar2 + 0x13,&UNK_10f4060f0);
  param_1[0x16] = 0x32aaaba7;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0x14;
  pppuStack_e0 = appuStack_f8;
  appuStack_f8[0] = &PTR_DAT_1109e3f18;
  lVar3 = 0x118;
  __Znwm();
  func_0x00010002b838(auStack_130,&UNK_10f432a5f);
  func_0x00010724cbe8(auStack_d8,appuStack_f8);
  func_0x00010724b408(lVar3);
  puVar11 = (undefined8 *)(lVar3 + 0xf0);
  *(undefined8 *)(lVar3 + 0xf8) = 0;
  *puVar11 = 0;
  *(undefined8 *)(lVar3 + 0x110) = 0;
  *(undefined8 *)(lVar3 + 0x108) = 0;
  *(undefined8 *)(lVar3 + 0x100) = 0;
  __ZNSt3__17promiseIvEC1Ev(&uStack_110);
  __ZNSt3__17promiseIvE10get_futureEv(&lStack_b8,&uStack_110);
  func_0x00010787b1b0(lVar3 + 0xf8,&lStack_b8);
  __ZNSt3__16futureIvED1Ev(&lStack_b8);
  lStack_b8 = lVar3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_b0,auStack_130);
  uStack_90 = uStack_110;
  uStack_110 = 0;
  func_0x000105302f48(auStack_88,auStack_d8);
  uVar4 = 8;
  __Znwm();
  __ZNSt3__115__thread_structC1Ev();
  puVar5 = (undefined8 *)0x58;
  uStack_100 = uVar4;
  __Znwm();
  uStack_100 = 0;
  *puVar5 = uVar4;
  puVar5[1] = lStack_b8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar5 + 2,auStack_b0);
  puVar5[6] = uStack_90;
  uStack_90 = 0;
  func_0x000105302f48(puVar5 + 7,auStack_88);
  puVar6 = auStack_118;
  puStack_108 = puVar5;
  func_0x000100489040(puVar6,&UNK_1078a6cb8,puVar5);
  if ((int)puVar6 != 0) {
    __ZNSt3__120__throw_system_errorEiPKc();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1078a6ba8);
    (*pcVar1)();
  }
  puStack_108 = (undefined8 *)0x0;
  func_0x0001078a7148(&puStack_108);
  func_0x0001004895c8(&uStack_100);
  func_0x0001004895f4(puVar11,auStack_118);
  __ZNSt3__16threadD1Ev(auStack_118);
  func_0x0001078a7184(&lStack_b8);
  __ZNSt3__17promiseIvED1Ev(&uStack_110);
  func_0x0001006393ec(auStack_d8);
  param_1[0x1f] = lVar3;
  func_0x0001078a73b0();
  pppuVar7 = appuStack_f8;
  func_0x0001006393ec();
  func_0x0001078a7288(uStack_68);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001004895c8(puVar5);
  __ZdlPv();
  func_0x0001004895c8(&uStack_100);
  func_0x0001078a7184(&lStack_b8);
  __ZNSt3__17promiseIvED1Ev(&uStack_110);
  func_0x00010787b3fc(lVar3 + 0x108);
  func_0x00010787b3fc(lVar3 + 0x100);
  __ZNSt3__16futureIvED1Ev(lVar3 + 0xf8);
  __ZNSt3__16threadD1Ev(puVar11);
  func_0x00010724b54c(lVar3);
  func_0x0001006393ec(auStack_d8);
  func_0x0001078a73b0();
  __ZdlPv(lVar3);
  func_0x0001006393ec(appuStack_f8);
  __ZNSt3__15mutexD1Ev(param_1 + 0x16);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x13);
  __ZNSt3__15mutexD1Ev(puVar2 + 0xb);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 8);
  __ZNSt3__15mutexD1Ev(param_1);
  __Unwind_Resume();
  ppppuVar10 = &pppuStack_2d0;
  pppuVar8 = pppuVar7;
  func_0x0001078a72c0();
  pppuStack_2d0 = pppuVar8;
  uStack_198 = extraout_x8_00;
  __ZNSt3__119__thread_local_dataEv();
  *pppuVar7 = (undefined **)0x0;
  func_0x000100491558();
  ppuVar12 = pppuVar7[1];
  func_0x0001078bba88(pppuVar7 + 2);
  if (pppuVar7[10] != (undefined **)0x0) {
    func_0x000104c003e8(pppuVar7 + 7);
  }
  func_0x0001078980a4(auStack_2c0);
  ppuVar12[0x22] = auStack_2c0;
  uStack_1a0 = 0;
  ppuStack_2c8 = ppuVar12;
  func_0x000107528168(ppuVar12 + 2,auStack_1b8);
  *(undefined4 *)(ppuVar12 + 6) = 0;
  func_0x00010724bd1c(auStack_1b8);
  ppuVar12[0xf] = (undefined *)0x0;
  ppuVar12[0xe] = (undefined *)(ppuVar12 + 0xf);
  ppuVar12[8] = (undefined *)0x0;
  ppuVar12[7] = (undefined *)(ppuVar12 + 8);
  ppuVar9 = ppuVar12 + 10;
  ppuVar12[9] = (undefined *)0x0;
  ppuVar12[10] = (undefined *)ppuVar9;
  ppuVar12[0xb] = (undefined *)ppuVar9;
  ppuVar12[0xc] = (undefined *)0x0;
  ppuVar12[0xd] = (undefined *)ppuVar9;
  ppuVar12[0x10] = (undefined *)0x0;
  *(undefined1 *)(ppuVar12 + 0x11) = 1;
  ppuVar9 = ppuVar12 + 0x12;
  func_0x0001078b7014();
  func_0x0001078a7398();
  *ppuVar9 = (undefined *)&PTR_DAT_1109e7130;
  ppuVar9[1] = &UNK_1078a65fc;
  ppuVar9[2] = (undefined *)0x0;
  ppuVar9[3] = (undefined *)(ppuVar12 + 2);
  ppuStack_1c0 = ppuVar9;
  func_0x000107897e30(ppuVar12 + 0x14,auStack_1d8);
  func_0x0001006393ec(auStack_1d8);
  ppuVar12[0x15] = (undefined *)0x0;
  ppuVar12[0x16] = (undefined *)0x0;
  ppuVar12[0x17] = (undefined *)0x0;
  func_0x00010002b838(ppuVar12 + 0x18,&UNK_10f4060f0);
  ppuVar12[0x1c] = (undefined *)0x0;
  ppuVar12[0x1b] = (undefined *)(ppuVar12 + 0x1c);
  ppuVar12[0x1d] = (undefined *)0x0;
  func_0x0001075264a0(ppuVar12 + 0x14);
  *(undefined4 *)((long)ppuVar12 + 0x8c) = 0x14;
  func_0x0001073ada24(*ppuVar12,auStack_2c0);
  __ZNSt3__17promiseIvE9set_valueEv(pppuVar7 + 6);
  _CFRunLoopRun();
  ppuVar12[0x22] = (undefined *)0x0;
  FUN_1078a70c4(&ppuStack_2c8);
  func_0x0001078983f0(auStack_2c0);
  func_0x0001078a7148(&pppuStack_2d0);
  func_0x0001078a7288(uStack_198);
  if ((bool)in_ZR) {
    return (undefined8 *)0x0;
  }
  ___stack_chk_fail();
  func_0x0001078983f0(auStack_2c0);
  func_0x0001078a7148(&pppuStack_2d0);
  func_0x0001078a7304();
  return ppppuVar10;
}



/* Entry: 1078a70c4; end: 1078a7147;  */

long * FUN_1078a70c4(long *param_1)

{
  long lVar1;
  
  func_0x0001073ada2c(*(undefined8 *)*param_1);
  lVar1 = *param_1;
  func_0x0001075264fc(lVar1 + 0xa0);
  func_0x0001078a6fc0(lVar1 + 0xd8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0xc0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0xa8);
  func_0x000107898014(lVar1 + 0xa0);
  FUN_1078b7078(lVar1 + 0x90);
  func_0x0001078a701c(lVar1 + 0x70);
  func_0x0001078a7070(lVar1 + 0x50);
  func_0x0001078a701c(lVar1 + 0x38);
  func_0x00010724bd1c(lVar1 + 0x10);
  return param_1;
}



/* Entry: 1078a727c; end: 1078a74bb;  */

void FUN_1078a727c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e71e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078a7af4; end: 1078a80df;  */

void FUN_1078a7af4(long *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  char cVar6;
  code *pcVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 ****ppppuVar11;
  char *pcVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long lVar22;
  int iVar23;
  long lStack_128;
  undefined8 ***pppuStack_118;
  ulong uStack_110;
  byte bStack_101;
  char cStack_f9;
  int iStack_f8;
  int iStack_f4;
  char acStack_f0 [24];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  int iStack_b4;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  int aiStack_6c [3];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iStack_b4 = 0;
  plVar8 = param_2;
  func_0x0001078a89b0();
  func_0x000108144b98();
  if (0 < iStack_b4) {
    func_0x0001078a8968();
    plVar14 = &lStack_b0;
    func_0x00010002b838(plVar14,&UNK_10f432ab2);
    func_0x0001078a8a54();
    func_0x00010048a6c8(acStack_f0,&lStack_b0,plVar14);
    __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
              (plVar8,acStack_f0);
    func_0x0001078a8930();
LAB_1078a7fbc:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1078a7fc0);
    (*pcVar7)();
  }
  func_0x0001078a75f8(param_2,param_4);
  lStack_128 = 0;
  puVar20 = (undefined8 *)*param_4;
  plVar8 = param_1 + 2;
  do {
    if (puVar20 == param_4 + 1) {
      return;
    }
    lVar15 = puVar20[4];
    uStack_d8 = 0;
    acStack_f0[0x10] = '\0';
    acStack_f0[0x11] = '\0';
    acStack_f0[0x12] = '\0';
    acStack_f0[0x13] = '\0';
    acStack_f0[0x14] = '\0';
    acStack_f0[0x15] = '\0';
    acStack_f0[0x16] = '\0';
    acStack_f0[0x17] = '\0';
    uStack_c8 = 0;
    uStack_d0 = 0;
    acStack_f0[8] = '\0';
    acStack_f0[9] = '\0';
    acStack_f0[10] = '\0';
    acStack_f0[0xb] = '\0';
    acStack_f0[0xc] = '\0';
    acStack_f0[0xd] = '\0';
    acStack_f0[0xe] = '\0';
    acStack_f0[0xf] = '\0';
    acStack_f0[0] = '\0';
    acStack_f0[1] = '\0';
    acStack_f0[2] = '\0';
    acStack_f0[3] = '\0';
    acStack_f0[4] = '\0';
    acStack_f0[5] = '\0';
    acStack_f0[6] = '\0';
    acStack_f0[7] = '\0';
    func_0x00010089a97c(&uStack_d8,lVar15 - lStack_128);
    iStack_b4 = 0;
    func_0x000108147d2c(*(undefined8 *)*param_2,lStack_128,lVar15,((undefined8 *)*param_2)[1],
                        &iStack_b4);
    if (0 < iStack_b4) {
      func_0x0001078a8968();
      func_0x0001078a8a70();
      func_0x0001078a8a54();
      func_0x0001078a8988();
      func_0x0001078a8970();
      func_0x0001078a8930();
      goto LAB_1078a7fbc;
    }
    iStack_b4 = 0;
    uVar9 = *(undefined8 *)(*param_2 + 8);
    func_0x0001081480fc(uVar9,&iStack_b4);
    if (0 < iStack_b4) {
      func_0x0001078a8968();
      func_0x0001078a8a70();
      func_0x0001078a8a54();
      func_0x0001078a8988();
      func_0x0001078a8970();
      func_0x0001078a8930();
      goto LAB_1078a7fbc;
    }
    for (iVar23 = 0; iVar23 != (int)uVar9; iVar23 = iVar23 + 1) {
      uVar10 = *(undefined8 *)(*param_2 + 8);
      func_0x000108148624(uVar10,iVar23,&iStack_f4,&iStack_f8);
      lVar19 = (long)iStack_f8;
      uVar18 = lStack_128 + iStack_f4;
      if ((int)uVar10 == 0) {
        func_0x0001077fc1d8(&lStack_b0,param_3,uVar18,lVar19);
        FUN_107827d54(acStack_f0,&lStack_b0);
        func_0x00010089ccb4(&lStack_b0);
        func_0x0001078a80e0(&uStack_d8,uStack_d0,uVar18 + param_3[3],uVar18 + param_3[3] + lVar19);
      }
      else {
        uVar16 = (uVar18 + lVar19) - 1;
        ppppuVar11 = (undefined8 ****)(param_3 + 3);
        func_0x000107405928(ppppuVar11,uVar16);
        cStack_f9 = *(char *)ppppuVar11;
        uVar17 = uVar18 + lVar19;
        do {
          cVar6 = cStack_f9;
          if (uVar16 < uVar18) break;
          func_0x0001078a8a78();
          uVar21 = uVar17;
          if (cVar6 != *(char *)ppppuVar11 || uVar16 == uVar18) {
            uVar21 = uVar16;
            if (uVar16 != uVar18) {
              uVar21 = uVar16 + 1;
            }
            aiStack_6c[0] = 0;
            iVar5 = (int)uVar17 - (int)uVar21;
            iVar1 = iVar5 + 1;
            func_0x0001078a8a1c(&pppuStack_118,(long)iVar1);
            plVar14 = (long *)*param_3;
            if (-1 < *(char *)((long)param_3 + 0x17)) {
              plVar14 = param_3;
            }
            lVar19 = (long)plVar14 + uVar21 * 2;
            ppppuVar11 = (undefined8 ****)pppuStack_118;
            if (-1 < (char)bStack_101) {
              ppppuVar11 = &pppuStack_118;
            }
            func_0x000108148a48(lVar19,iVar5,ppppuVar11,iVar1,10,aiStack_6c);
            if (0 < aiStack_6c[0]) {
              func_0x0001078a8968();
              func_0x0001078a8a70();
              func_0x00010814b0c8(aiStack_6c[0]);
              func_0x0001078a8988();
              func_0x0001078a8970();
              func_0x0001078a8930();
              goto LAB_1078a7fbc;
            }
            func_0x0001078a80e8(&pppuStack_118,(long)(int)lVar19);
            pcVar12 = acStack_f0;
            FUN_107827d54(pcVar12,&pppuStack_118);
            uVar17 = 0;
            while( true ) {
              uVar3 = uStack_110;
              if (-1 < (char)bStack_101) {
                uVar3 = (ulong)bStack_101;
              }
              if (uVar3 <= uVar17) break;
              pcVar12 = (char *)&uStack_d8;
              func_0x0001078a8438(pcVar12,&cStack_f9);
              uVar17 = uVar17 + 1;
            }
            func_0x0001078a8a78();
            cStack_f9 = *pcVar12;
            ppppuVar11 = &pppuStack_118;
            func_0x00010089ccb4();
          }
          bVar2 = uVar16 != 0;
          uVar16 = uVar16 - 1;
          uVar17 = uVar21;
        } while (bVar2);
      }
    }
    uVar18 = param_1[1];
    if (uVar18 < (ulong)param_1[2]) {
      FUN_107827440(uVar18,acStack_f0);
      lVar13 = uVar18 + 0x30;
    }
    else {
      lVar19 = uVar18 - *param_1;
      uVar18 = lVar19 / 0x30 + 1;
      if (0x555555555555555 < uVar18) {
        func_0x0001078a8680();
        goto LAB_1078a7fbc;
      }
      uVar17 = (param_1[2] - *param_1) / 0x30;
      uVar16 = uVar17 * 2;
      if (uVar16 < uVar18 || uVar16 - uVar18 == 0) {
        uVar16 = uVar18;
      }
      if (0x2aaaaaaaaaaaaa9 < uVar17) {
        uVar16 = 0x555555555555555;
      }
      plStack_90 = plVar8;
      if (uVar16 == 0) {
        lVar13 = 0;
      }
      else {
        if (0x555555555555555 < uVar16) {
          func_0x000104bd35f4();
          goto LAB_1078a7fbc;
        }
        lVar13 = uVar16 * 0x30;
        __Znwm();
      }
      lVar19 = lVar13 + lVar19;
      lVar22 = lVar13 + uVar16 * 0x30;
      lStack_b0 = lVar13;
      lStack_a8 = lVar19;
      lStack_a0 = lVar19;
      lStack_98 = lVar22;
      FUN_107827440(lVar19,acStack_f0);
      lVar13 = lVar19 + 0x30;
      lVar4 = *param_1;
      lVar19 = lVar19 + ((param_1[1] - lVar4) / -0x30) * 0x30;
      _memcpy(lVar19,lVar4);
      *param_1 = lVar19;
      param_1[1] = lVar13;
      lStack_98 = param_1[2];
      param_1[2] = lVar22;
      lStack_b0 = lVar4;
      lStack_a8 = lVar4;
      lStack_a0 = lVar4;
      FUN_1078a868c(&lStack_b0);
    }
    param_1[1] = lVar13;
    func_0x0001074055b8(acStack_f0);
    func_0x00010002c7d4();
    lStack_128 = lVar15;
  } while( true );
}



/* Entry: 1078a82d4; end: 1078a82db;  */

void FUN_1078a82d4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x18;
    func_0x00010089ccb4();
  }
  return;
}



/* Entry: 1078a868c; end: 1078a86d3;  */

long * FUN_1078a868c(long *param_1)

{
  long lVar1;
  
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



/* Entry: 1078a8930; end: 1078a8a9b;  */

void FUN_1078a8930(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_throw_110346bf8)();
  return;
}



/* Entry: 1078a93f4; end: 1078a9563;  */

void FUN_1078a93f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if ((bRam00000001137265b8 & 1) == 0) {
    iVar2 = 0x137265b8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      if ((bRam00000001137265c0 & 1) == 0) {
        iVar2 = 0x137265c0;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          for (uVar5 = 0; (uVar5 & 0xffff) < 0x100; uVar5 = uVar5 + 1) {
            uVar4 = 0x80;
            uVar6 = uVar5;
            for (uVar3 = 1; (uVar3 & 0xffff) < uVar4; uVar3 = (uVar3 & 0xffff) << 1) {
              uVar1 = uVar3 | uVar4;
              if ((uVar3 & 0xffff) != (uVar6 & uVar1 & 0xffff) && uVar4 != (uVar6 & uVar1 & 0xffff))
              {
                uVar1 = 0;
              }
              uVar6 = uVar1 ^ uVar6;
              uVar4 = uVar4 >> 1;
            }
            uVar3 = 0;
            iVar2 = -8;
            uVar4 = uVar6;
            do {
              uVar3 = (int)(uVar3 ^ uVar4 << 0x1f) >> 0x1f & 0x4c11db7U ^ uVar3 << 1;
              uVar4 = uVar4 >> 1 & 0x7fff;
              iVar2 = iVar2 + 1;
            } while (iVar2 != 0);
            func_0x0001078a93bc();
            *(uint *)((ulong)(ushort)uVar6 * 4 + 0x1137265c8) = uVar3;
          }
          ___cxa_guard_release(0x1137265c0);
        }
      }
      uRam00000001137265b0 = 0x1137265c8;
      ___cxa_guard_release(0x1137265b8);
    }
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
  }
  return;
}



/* Entry: 1078a96a0; end: 1078a976b;  */

long * FUN_1078a96a0(long *param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  
  if (param_2 < (byte *)0x7ffffffffffffff7) {
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      pbVar7 = (byte *)((param_1[2] & 0x7fffffffffffffffU) - 1);
    }
    else {
      pbVar7 = (byte *)0xa;
    }
    plVar4 = param_1;
    if (pbVar7 < param_2) {
      uVar14 = 0xd;
      if (((ulong)param_2 | 3) != 0xb) {
        uVar14 = ((ulong)param_2 | 3) + 1;
      }
      uVar5 = 0xb;
      if ((byte *)0xa < param_2) {
        uVar5 = uVar14;
      }
      plVar3 = param_1;
      func_0x000107407b7c();
      uVar8 = (ulong)*(char *)((long)param_1 + 0x17);
      plVar6 = param_1;
      uVar14 = uVar8;
      if ((long)uVar8 < 0) {
        plVar6 = (long *)*param_1;
        uVar14 = param_1[1];
      }
      plVar4 = plVar3;
      if (uVar14 != 0xffffffffffffffff) {
        _memmove(plVar3,plVar6,(uVar14 + 1) * 2);
        uVar8 = (ulong)*(byte *)((long)param_1 + 0x17);
      }
      if (((uint)uVar8 >> 7 & 1) != 0) {
        plVar4 = (long *)*param_1;
        __ZdlPv(plVar4);
      }
      param_1[1] = uVar14;
      param_1[2] = uVar5 | 0x8000000000000000;
      *param_1 = (long)plVar3;
    }
    return plVar4;
  }
  func_0x000107407b68();
  pbVar7 = (byte *)*param_1;
  if (pbVar7 == param_2) {
code_r0x0001078a98a0:
    plVar4 = (long *)0xfffffffe;
  }
  else {
    pbVar10 = pbVar7 + 1;
    *param_1 = (long)pbVar10;
    uVar12 = (uint)*pbVar7;
    if (-1 < (char)*pbVar7) {
      return (long *)(ulong)uVar12;
    }
    if (0xc1 < uVar12) {
      if (uVar12 < 0xe0) {
        uVar12 = uVar12 & 0x1f;
        iVar11 = 2;
code_r0x0001078a9820:
        if (pbVar10 == param_2) goto code_r0x0001078a98a0;
        *param_1 = (long)(pbVar10 + 1);
        if ((char)*pbVar10 < -0x40) {
          if (0x10 < uVar12 >> 10) {
            return (long *)0xffffffff;
          }
          if ((uVar12 & 0x7fe0) == 0x360) {
            return (long *)0xffffffff;
          }
          uVar2 = *pbVar10 & 0x3f | uVar12 << 6;
          iVar13 = 3;
          if (0x3ff < uVar12) {
            iVar13 = 4;
          }
          iVar1 = 2;
          if (0x1f < uVar12) {
            iVar1 = iVar13;
          }
          iVar13 = 1;
          if (1 < uVar12) {
            iVar13 = iVar1;
          }
          if (iVar13 != iVar11) {
            uVar2 = 0xffffffff;
          }
          return (long *)(ulong)uVar2;
        }
      }
      else if (uVar12 < 0xf0) {
        uVar12 = uVar12 & 0xf;
        iVar11 = 3;
        pbVar9 = pbVar10;
code_r0x0001078a97f4:
        if (pbVar9 == param_2) goto code_r0x0001078a98a0;
        pbVar10 = pbVar9 + 1;
        *param_1 = (long)pbVar10;
        if ((char)*pbVar9 < -0x40) {
          uVar12 = *pbVar9 & 0x3f | uVar12 << 6;
          goto code_r0x0001078a9820;
        }
      }
      else if (uVar12 < 0xf5) {
        if (pbVar10 == param_2) goto code_r0x0001078a98a0;
        pbVar9 = pbVar7 + 2;
        *param_1 = (long)pbVar9;
        if ((char)pbVar7[1] < -0x40) {
          uVar12 = pbVar7[1] & 0x3f | (uVar12 & 7) << 6;
          iVar11 = 4;
          goto code_r0x0001078a97f4;
        }
      }
    }
    plVar4 = (long *)0xffffffff;
  }
  return plVar4;
}



/* Entry: 1078a9b68; end: 1078a9ba3;  */

long FUN_1078a9b68(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x000104c003e8(param_1 + 0x10);
  }
  func_0x0001006393ec(param_1 + 0x10);
  return param_1;
}



/* Entry: 1078aa46c; end: 1078aa46f;  */

long FUN_1078aa46c(long param_1)

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
  func_0x0001078ae774(param_1 + 0x378);
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
  func_0x0001078ae648(param_1 + 0xc0);
  func_0x0001078ae610(param_1 + 0xb8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x48);
  func_0x0001078ae238(param_1 + 8);
  return param_1;
}



/* Entry: 1078ab3bc; end: 1078ab3e3;  */

bool FUN_1078ab3bc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lStack_50;
  int iStack_48;
  int iStack_44;
  
  _glLinkProgram(param_2);
  _glGetProgramiv(param_2,0x8b82,&iStack_44);
  if (iStack_44 != 1) {
    _glGetProgramiv(param_2,0x8b84,&iStack_48);
    lVar1 = (long)iStack_48;
    __Znam();
    _bzero();
    lStack_50 = lVar1;
    if (0 < iStack_48) {
      _glGetProgramInfoLog(param_2,iStack_48,&iStack_48,lVar1);
    }
    func_0x0001078ae540(&lStack_50);
  }
  return iStack_44 == 1;
}



/* Entry: 1078ab940; end: 1078ab9a7;  */

void FUN_1078ab940(undefined8 param_1,undefined1 *param_2)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  undefined1 *unaff_x19;
  
  func_0x0001078af3ac();
  if (((extraout_x8 & 1) != 0) || (func_0x0001078af1b8(), !(bool)in_ZR)) {
    unaff_x19[1] = 0;
    *unaff_x19 = *param_2;
    func_0x0001078b6538();
  }
  return;
}



/* Entry: 1078ac0ac; end: 1078ac0f3;  */

void FUN_1078ac0ac(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x100;
  __Znwm();
  func_0x0001078b28cc();
  *param_1 = uVar1;
  return;
}



/* Entry: 1078acb74; end: 1078acc03;  */

void FUN_1078acb74(void)

{
  undefined1 in_ZR;
  uint extraout_w8;
  undefined4 extraout_w8_00;
  undefined4 extraout_var;
  
  func_0x0001078af3ac();
  if (((extraout_w8 & 1) != 0) || (func_0x0001078af1b8(), !(bool)in_ZR)) {
    func_0x0001078af074();
    (*(code *)CONCAT44(extraout_var,extraout_w8_00))(0xb71);
  }
  return;
}



/* Entry: 1078adaa8; end: 1078adb6b;  */

void FUN_1078adaa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *puVar4;
  
  func_0x0001078af3e0();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x0001078af4c4();
  }
  puVar1 = PTR__glDrawArraysInstanced_113230880;
  uVar2 = (int)param_5 == 1;
  if ((bool)uVar2) {
    func_0x0001078af294();
    _glDrawArrays(param_1,param_3,param_4);
  }
  else if ((*(byte *)(unaff_x19 + 0x3e9) & 1) == 0) {
    lVar3 = *(long *)(unaff_x19 + 0xd8);
    if ((lVar3 == 0) || (uVar2 = *(char *)(lVar3 + 0x30) == '\x02', (bool)uVar2))
    goto LAB_1078adb58;
    puVar4 = *(undefined8 **)(lVar3 + 0x38);
    func_0x0001078af294();
    (*(code *)*puVar4)(param_1,param_3,param_4,param_5);
  }
  else {
    func_0x0001078af294();
    (*(code *)puVar1)(param_1,param_3,param_4,param_5);
  }
  *(int *)(unaff_x19 + 0xa8) = *(int *)(unaff_x19 + 0xa8) + (int)param_5;
LAB_1078adb58:
  func_0x0001078af3f8();
  if ((bool)uVar2) {
    func_0x0001078af410();
  }
  return;
}



/* Entry: 1078ae17c; end: 1078ae1ef;  */

void FUN_1078ae17c(long param_1)

{
  ulong uVar1;
  long *plVar2;
  
  uVar1 = *(long *)(param_1 + 0x3e0) + 1;
  *(ulong *)(param_1 + 0x3e0) = uVar1;
  if (uVar1 == 0xffffffffffffffff) {
    func_0x0001078aee88(param_1 + 0x3b8);
    *(undefined8 *)(param_1 + 0x3e0) = 0;
  }
  else if (0xf < uVar1) {
    plVar2 = *(long **)(param_1 + 0x3c8);
    while (plVar2 != (long *)0x0) {
      if ((ulong)plVar2[3] < *(long *)(param_1 + 0x3e0) - 0x10U) {
        plVar2 = (long *)(param_1 + 0x3b8);
        func_0x0001078aeed4();
      }
      else {
        plVar2 = (long *)*plVar2;
      }
    }
  }
  return;
}



/* Entry: 1078ae560; end: 1078ae577;  */

void FUN_1078ae560(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 1078ae668; end: 1078ae67f;  */

void FUN_1078ae668(long *param_1,long param_2)

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



/* Entry: 1078ae794; end: 1078ae7bb;  */

void FUN_1078ae794(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x0001078b0520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078ae958; end: 1078ae98b;  */

long FUN_1078ae958(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001078af518(param_2,param_1,&PTR_DAT_1109e74d8);
  param_1 = param_1 + 0x18;
  if ((int)lVar1 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1078aea7c; end: 1078aeab7;  */

void FUN_1078aea7c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109e7588;
  param_2[1] = uVar1;
  return;
}


