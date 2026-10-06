/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1078917d4; end: 1078918ab;  */

undefined8 FUN_1078917d4(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (param_2 < *(uint *)(param_1 + 0x38)) {
    uVar1 = *(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x18);
    func_0x000107889104();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d290)(uVar1,param_1);
    return uVar1;
  }
  return 0;
}



/* Entry: 107891ab0; end: 107891af3;  */

long FUN_107891ab0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010788893c();
    _objc_msgSend(lVar2,lVar1);
  }
  func_0x0001074996e0(param_1 + 0x28);
  return param_1;
}



/* Entry: 107891ca8; end: 107891ddf;  */

void FUN_107891ca8(long *param_1,long param_2,ulong param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  long lStack_48;
  
  if ((((int)param_3 == 0) || (param_3 >> 0x20 == 0)) || (param_4 == 0)) {
    *param_1 = 0;
  }
  else {
    func_0x00010788c678(&uStack_60,*(undefined8 *)(*(long *)(param_2 + 0x20) + 8),param_3,param_4,
                        param_6,(int)param_7);
    func_0x000107892294(&lStack_48);
    func_0x000107887f60(&uStack_60);
    func_0x000107892280(param_5,param_7,param_6);
    uStack_60 = (undefined4)param_5;
    uStack_5c = (undefined1)((ulong)param_5 >> 0x20);
    lVar1 = *(long *)(*(long *)(param_2 + 0x20) + 8);
    func_0x00010788cd4c(lVar1,&uStack_60);
    *(long *)(lStack_48 + 0x20) = lVar1;
    if ((int)param_7 != 0) {
      lVar3 = lVar1;
      lVar4 = *(long *)(param_2 + 0x30);
      if (*(long *)(param_2 + 0x30) == 0) {
        lVar3 = *(long *)(*(long *)(param_2 + 0x20) + 0x10);
        func_0x00010788846c();
        _objc_msgSend(lVar3,lVar1);
        *(long *)(param_2 + 0x30) = lVar3;
        lVar4 = lVar3;
      }
      uVar2 = *(undefined8 *)(lStack_48 + 0x30);
      func_0x000107888a18();
      _objc_msgSend(lVar4,lVar3,uVar2);
      *(undefined1 *)(lStack_48 + 0x28) = 1;
    }
    *param_1 = lStack_48;
  }
  return;
}



/* Entry: 1078922f8; end: 107892337;  */

undefined8 * FUN_1078922f8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e4948;
  func_0x000107892b74(param_1 + 0xc);
  __ZNSt3__15mutexD1Ev(param_1 + 4);
  *param_1 = &PTR_DAT_1109abcb0;
  func_0x0001073caf1c(param_1 + 1);
  return param_1;
}



/* Entry: 107892bec; end: 107892c2b;  */

void FUN_107892bec(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107893644();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x28) {
    func_0x00010725b6a4(lVar1 + -0x20);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107892eb4; end: 107892f57;  */

void FUN_107892eb4(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x28) {
    func_0x00010725b620(param_4,lVar1);
    param_4 = lStack_38 + 0x28;
  }
  uStack_48 = 1;
  func_0x000107892f58(param_1,param_2,param_3);
  func_0x000107892f8c(&uStack_60);
  return;
}



/* Entry: 1078930a4; end: 1078930b7;  */

void FUN_1078930a4(void)

{
  func_0x0001078930c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107893474; end: 10789347f;  */

undefined ** FUN_107893474(void)

{
  return &PTR_DAT_1109e4aa8;
}



/* Entry: 10789374c; end: 10789374f;  */

undefined8 * FUN_10789374c(undefined8 *param_1)

{
  long lVar1;
  
  if ((*(byte *)((long)param_1 + 0x5a) & 1) == 0) {
    if (*(char *)((long)param_1 + 0x59) != '\x01') goto code_r0x000107893730;
    lVar1 = 0x28;
  }
  else {
    lVar1 = 0x20;
  }
  (**(code **)(*(long *)param_1[0xc] + lVar1))();
code_r0x000107893730:
  func_0x0001073ad824(param_1 + 0xc);
  *param_1 = &PTR_DAT_1109b5ab0;
  func_0x0001073ad3c4(param_1 + 8);
  func_0x0001073ad4a0(param_1 + 5);
  func_0x0001073ad4c4(param_1 + 3);
  func_0x0001073ad37c(param_1 + 1);
  return param_1;
}



/* Entry: 107893b48; end: 107893b5b;  */

void FUN_107893b48(void)

{
  func_0x000107893b64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107893f0c; end: 107893f1f;  */

void FUN_107893f0c(void)

{
  func_0x000107893f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107894904; end: 107894a27;  */

void FUN_107894904(long *param_1,ulong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 uStack_41;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  lVar4 = param_1[2];
  puVar2 = (undefined4 *)*param_1;
  if (param_2 <= (ulong)((lVar4 - (long)puVar2) / 5)) {
    uVar5 = (param_1[1] - (long)puVar2) / 5;
    uVar3 = uVar5;
    if (param_2 <= uVar5) {
      uVar3 = param_2;
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar1 = *param_3;
      *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_3 + 1);
      *puVar2 = uVar1;
      puVar2 = (undefined4 *)((long)puVar2 + 5);
    }
    uVar3 = param_2 - uVar5;
    if (param_2 < uVar5 || uVar3 == 0) {
      param_1[1] = *param_1 + param_2 * 5;
      return;
    }
LAB_1078949f8:
    lVar6 = uVar3 * 5;
    lVar4 = param_1[1] + lVar6;
    puVar2 = (undefined4 *)param_1[1];
    for (; lVar6 != 0; lVar6 = lVar6 + -5) {
      uVar1 = *param_3;
      *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_3 + 1);
      *puVar2 = uVar1;
      puVar2 = (undefined4 *)((long)puVar2 + 5);
    }
    param_1[1] = lVar4;
    return;
  }
  if (puVar2 != (undefined4 *)0x0) {
    param_1[1] = (long)puVar2;
    __ZdlPv();
    lVar4 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_2 < 0x3333333333333334) {
    uVar5 = (lVar4 / 5) * 2;
    if (uVar5 < param_2 || uVar5 - param_2 == 0) {
      uVar5 = param_2;
    }
    if (0x1999999999999998 < (ulong)(lVar4 / 5)) {
      uVar5 = 0x3333333333333333;
    }
    if (uVar5 < 0x3333333333333334) {
      lVar4 = uVar5 * 5;
      __Znwm();
      *param_1 = lVar4;
      param_1[1] = lVar4;
      param_1[2] = lVar4 + uVar5 * 5;
      uVar3 = param_2;
      goto LAB_1078949f8;
    }
  }
  FUN_107894be4();
  puStack_38 = &UNK_107894a28;
  puStack_40 = &stack0xfffffffffffffff0;
  func_0x000107894cdc(&uStack_41,puVar2);
  return;
}



/* Entry: 107894be4; end: 107894bfb;  */

void FUN_107894be4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long extraout_x8;
  
  func_0x000107895e0c();
  func_0x000107895e0c();
  func_0x000107895eb4();
  _memcpy(extraout_x8 + (param_3 / -3) * 3);
  func_0x000107895e18();
  return;
}



/* Entry: 107894e40; end: 107894e53;  */

void FUN_107894e40(void)

{
  func_0x000107894e14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107895fb4; end: 10789600b;  */

undefined8 * FUN_107895fb4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  *param_3 = 0;
  param_1[2] = uVar1;
  *param_1 = &PTR_DAT_1109959b0;
  param_1[1] = param_2;
  func_0x00010726ed14(param_1 + 3);
  param_1[5] = param_1;
  return param_1;
}



/* Entry: 1078962c8; end: 10789639b;  */

void FUN_1078962c8(long param_1)

{
  long lVar1;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  func_0x00010726fc00(&plStack_30,param_1 + 8);
  if (plStack_30 != (long *)0x0) {
    func_0x00010726fc3c();
    uStack_48 = uStack_28;
    plStack_50 = plStack_30;
    if (*plStack_30 != -1) {
      plStack_30 = (long *)0x0;
      uStack_28 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      func_0x0001072508cc(&uStack_40);
      goto LAB_107896334;
    }
    func_0x00010726fc88();
  }
  func_0x00010789642c();
  plStack_50 = (long *)0x0;
  uStack_48 = 0;
  plStack_30 = (long *)0x0;
  uStack_28 = 0;
LAB_107896334:
  func_0x00010789642c();
  func_0x00010726fc00(&plStack_30,param_1 + 8);
  if (plStack_30 == (long *)0x0) {
    func_0x00010789642c();
  }
  else {
    lVar1 = *plStack_30;
    func_0x00010789642c();
    if (lVar1 != -1) {
      (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
    }
  }
  func_0x000107270b00(&plStack_50);
  return;
}



/* Entry: 107896594; end: 1078965bf;  */

void FUN_107896594(undefined8 *param_1)

{
  if (*(char *)(param_1 + 2) == '\x01') {
    *(undefined1 *)(param_1 + 2) = 0;
    func_0x000107891064(param_1 + 1,*param_1);
  }
  return;
}



/* Entry: 1078967b0; end: 10789682f;  */

undefined1  [16] FUN_1078967b0(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  uVar2 = param_1;
  _strlen();
  puVar3 = (undefined8 *)&UNK_1109e4f3c;
  lVar4 = 0x37;
  do {
    if (uVar2 == *(uint *)((long)puVar3 + -4)) {
      uVar1 = *(undefined8 *)((long)puVar3 + -0xc);
      _strncmp(uVar1,param_1,uVar2);
      if ((int)uVar1 == 0) {
        uVar1 = *puVar3;
        uVar2 = (ulong)*(uint *)(puVar3 + 1) | 0x100000000;
        goto LAB_107896820;
      }
    }
    puVar3 = puVar3 + 3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  uVar2 = 0;
  uVar1 = 0;
LAB_107896820:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = uVar1;
  return auVar5;
}



/* Entry: 107897f7c; end: 107898007;  */

long FUN_107897f7c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1;
  func_0x000105302f48();
  *(undefined1 *)(lVar1 + 0x20) = 0;
  _CFRunLoopGetCurrent();
  *(long *)(param_1 + 0x28) = lVar1;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_30 = 0;
  puStack_28 = &UNK_107898008;
  uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  lStack_68 = param_1;
  _CFRunLoopSourceCreate(uVar2,0,&uStack_70);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  _CFRunLoopAddSource(*(undefined8 *)(param_1 + 0x28),uVar2,
                      *(undefined8 *)PTR__kCFRunLoopCommonModes_11034abe0);
  return param_1;
}



/* Entry: 1078981d4; end: 10789826b;  */

void FUN_1078981d4(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 extraout_x8;
  ulong *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lStack_f0;
  undefined1 uStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  func_0x0001078994d4();
  lVar2 = 8;
  uStack_38 = extraout_x8;
  __Znwm();
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_60 = param_2[2];
  func_0x000107899190(auStack_58,&uStack_70);
  func_0x000107897e30(lVar2,auStack_58);
  *param_1 = lVar2;
  func_0x0001006393ec();
  func_0x000107899470(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __ZdlPv();
  func_0x000107899498();
  plStack_e0 = (long *)0x0;
  uStack_d8 = 0;
  lStack_f0 = lVar2 + 0x88;
  uStack_e8 = 1;
  func_0x0001072ab574();
  while ((puVar3 = (ulong *)(lVar2 + 0x78), plVar5 = (long *)(lVar2 + 0x60), lVar4 = lVar2 + 0x58,
         *(long *)(lVar2 + 0x80) != 0 ||
         (puVar3 = (ulong *)(lVar2 + 0x48), plVar5 = (long *)(lVar2 + 0x30), lVar4 = lVar2 + 0x28,
         *(long *)(lVar2 + 0x50) != 0))) {
    puVar1 = (undefined8 *)(*(long *)(*plVar5 + (*puVar3 >> 8) * 8) + (*puVar3 & 0xff) * 0x10);
    uVar7 = puVar1[1];
    plVar5 = (long *)*puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    uStack_c8 = uStack_d8;
    plStack_d0 = plStack_e0;
    plStack_e0 = plVar5;
    uStack_d8 = uVar7;
    func_0x000107898790(&plStack_d0);
    func_0x000107898790(*(long *)(*(long *)(lVar4 + 8) + (*(ulong *)(lVar4 + 0x20) >> 8) * 8) +
                        (*(ulong *)(lVar4 + 0x20) & 0xff) * 0x10);
    uVar6 = *(long *)(lVar4 + 0x20) + 1;
    *(long *)(lVar4 + 0x28) = *(long *)(lVar4 + 0x28) + -1;
    *(ulong *)(lVar4 + 0x20) = uVar6;
    if (0x1ff < uVar6) {
      __ZdlPv(**(undefined8 **)(lVar4 + 8));
      *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 8;
      *(long *)(lVar4 + 0x20) = *(long *)(lVar4 + 0x20) + -0x100;
    }
    func_0x0001078986fc(&lStack_f0);
    (**(code **)(*plStack_e0 + 0x10))();
    uStack_c8 = uStack_d8;
    plStack_d0 = plStack_e0;
    plStack_e0 = (long *)0x0;
    uStack_d8 = 0;
    func_0x000107898790(&plStack_d0);
    func_0x000107898738(&lStack_f0);
  }
  func_0x00010735fc14(&lStack_f0);
  func_0x00010789951c();
  return;
}



/* Entry: 1078986ec; end: 1078986fb;  */

void FUN_1078986ec(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(param_2 + 0xd8);
  uStack_30 = *(undefined8 *)(param_2 + 0xd0);
  if (*(long *)(param_2 + 0xd8) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0xd8) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107314188(param_1,&uStack_30,*(undefined8 *)(param_2 + 0xe0));
  func_0x00010731486c();
  return;
}



/* Entry: 1078989d8; end: 107898a37;  */

undefined8 * FUN_1078989d8(long *param_1,undefined8 *param_2)

{
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x000107899510();
  func_0x000107898a38();
  if (param_1 == (long *)0x0) {
    param_1 = unaff_x19;
    func_0x000107898a60();
  }
  func_0x000107899554();
  uVar1 = *unaff_x20;
  param_2[1] = unaff_x20[1];
  *param_2 = uVar1;
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  unaff_x19[5] = unaff_x19[5] + 1;
  func_0x000107899554();
  if ((undefined8 *)*param_1 == param_2) {
    param_2 = (undefined8 *)(param_1[-1] + 0x1000);
  }
  return param_2 + -2;
}



/* Entry: 107898eb8; end: 107898eeb;  */

void FUN_107898eb8(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar2 = param_3 - (long)param_2 >> 3;
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = puVar3;
  for (lVar4 = lVar2 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
    param_2 = param_2 + 1;
  }
  *(undefined8 **)(param_1 + 0x10) = puVar3 + lVar2;
  return;
}



/* Entry: 107898fd8; end: 107899057;  */

void FUN_107898fd8(long *param_1)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 auStack_40 [2];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  func_0x0001078994d4();
  uStack_28 = extraout_x8;
  func_0x000100688ba0(auStack_40,1);
  puVar1 = puStack_30;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_DAT_110877d38;
  puStack_30[1] = 0;
  *(undefined1 *)(puStack_30 + 3) = 0;
  puStack_30 = (undefined8 *)0x0;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  func_0x000100688bf4();
  func_0x000107899470(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *puVar2 = &PTR_DAT_1109e5868;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107899138; end: 10789915b;  */

undefined8 FUN_107899138(undefined8 param_1)

{
  func_0x00010789915c(param_1,0);
  return param_1;
}



/* Entry: 1078992ac; end: 1078992b7;  */

undefined ** FUN_1078992ac(void)

{
  return &PTR_DAT_1109e5988;
}



/* Entry: 107899364; end: 10789939f;  */

undefined8 * FUN_107899364(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e5a28;
  func_0x000100688f50(param_1 + 9);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 1078996c4; end: 1078996eb;  */

undefined8 FUN_1078996c4(undefined8 param_1)

{
  func_0x0001078996ac(param_1,0);
  return param_1;
}



/* Entry: 107899da8; end: 107899e5b;  */

long FUN_107899da8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  bool bVar2;
  undefined1 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_2;
  uStack_38 = param_3;
  func_0x000100060b18(auStack_58,&uStack_40);
  plVar1 = (long *)(param_1 + 0x28);
  plVar5 = plVar1;
  plVar6 = plVar1;
  while (plVar7 = (long *)*plVar5, plVar7 != (long *)0x0) {
    lVar4 = (long)(plVar7 + 4);
    func_0x000100125af4(lVar4,auStack_58);
    bVar2 = -1 < (char)lVar4;
    lVar4 = 8;
    if (bVar2) {
      lVar4 = 0;
    }
    plVar5 = (long *)((long)plVar7 + lVar4);
    if (bVar2) {
      plVar6 = plVar7;
    }
  }
  if (plVar1 != plVar6) {
    puVar3 = auStack_58;
    func_0x000100125af4(puVar3,plVar6 + 4);
    if (((uint)puVar3 >> 7 & 1) == 0) goto LAB_107899e28;
  }
  plVar6 = plVar1;
LAB_107899e28:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  if (plVar1 == plVar6) {
    lVar4 = 0;
  }
  else {
    lVar4 = plVar6[7];
  }
  return lVar4;
}



/* Entry: 10789a00c; end: 10789a02b;  */

long FUN_10789a00c(long param_1)

{
  __ZNSt3__16chrono12system_clock3nowEv();
  return param_1 / 1000000;
}



/* Entry: 10789a6f4; end: 10789a743;  */

bool FUN_10789a6f4(undefined8 param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_20;
  long lStack_18;
  
  lVar1 = param_2 + 8;
  func_0x000107264c5c();
  plVar2 = &lStack_20;
  lStack_20 = lVar1;
  lStack_18 = param_2;
  FUN_10772cd00(&lStack_20,&DAT_10f405966,0);
  return plVar2 == (long *)0x0;
}



/* Entry: 10789ad44; end: 10789ad4f;  */

void FUN_10789ad44(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd22c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__117__assoc_sub_state4waitEv_1103465d8)(*param_1);
  return;
}



/* Entry: 10789ae80; end: 10789ae83;  */

undefined8 * FUN_10789ae80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e5be0;
  func_0x00010789aeec(param_1 + 4);
  return param_1;
}



/* Entry: 10789af74; end: 10789af87;  */

void FUN_10789af74(void)

{
  func_0x00010789b018();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10789b358; end: 10789b35b;  */

undefined8 * FUN_10789b358(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e5cb8;
  func_0x00010789d648(param_1 + 3);
  func_0x00010789d248(param_1 + 2);
  func_0x00010789d29c(param_1 + 1);
  return param_1;
}



/* Entry: 10789bd30; end: 10789bd6f;  */

void FUN_10789bd30(undefined8 *param_1,undefined8 param_2,long param_3)

{
  (**(code **)(*(long *)*param_1 + 0x10))();
  if (*(long *)(param_3 + 0x18) == 0) {
    return;
  }
  if (*(long **)(param_3 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104c01bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_3 + 0x18) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x000104c00420();
  return;
}



/* Entry: 10789c06c; end: 10789c20f;  */

void FUN_10789c06c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  long unaff_x24;
  undefined8 uStack_570;
  long lStack_558;
  undefined1 auStack_548 [632];
  undefined8 *apuStack_2d0 [79];
  undefined8 uStack_58;
  
  func_0x00010789e4ec();
  uStack_58 = extraout_x8;
  func_0x00010789e558();
  if ((bool)in_ZR) {
    if (*(long *)(extraout_x8_00 + 8) != 0) {
      func_0x00010789e568();
      if (extraout_x8_01 != 0) {
        do {
          func_0x00010789e4dc();
        } while (extraout_w10 != 0);
      }
      func_0x00010789e5e0();
      if (lStack_558 != 0) {
        func_0x00010789e684();
        func_0x0001075281c8(unaff_x24 + 0x1f8,param_3);
        puVar1 = (undefined8 *)0x298;
        __Znwm();
        func_0x00010789e2bc(apuStack_2d0,auStack_548);
        *puVar1 = &PTR_FUN_1109e6188;
        puVar1[1] = uStack_570;
        puVar1[2] = &UNK_10789c210;
        puVar1[3] = 0;
        func_0x00010789e2bc(puVar1 + 4,apuStack_2d0);
        func_0x00010789e34c(apuStack_2d0);
        apuStack_2d0[0] = puVar1;
        func_0x00010789e34c(auStack_548);
        func_0x0001073ae140(lStack_558,apuStack_2d0);
        puVar1 = apuStack_2d0[0];
        apuStack_2d0[0] = (undefined8 *)0x0;
        if (puVar1 != (undefined8 *)0x0) {
          func_0x00010789e4d0();
        }
      }
      func_0x00010789e5cc();
      func_0x00010789e598();
    }
  }
  else if (*(undefined8 **)(extraout_x8_00 + 0x10) != (undefined8 *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)**(undefined8 **)(extraout_x8_00 + 0x10) + 0xb8);
    func_0x00010789e4bc(uStack_58);
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010789c194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    goto LAB_10789c1b0;
  }
  func_0x00010789e4bc(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
LAB_10789c1b0:
  ___stack_chk_fail();
  puVar1 = apuStack_2d0[0];
  apuStack_2d0[0] = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010789e4d0();
  }
  func_0x00010789e5cc();
  func_0x00010789e598();
  func_0x00010789e550();
                    /* WARNING: Could not recover jumptable at 0x00010789c21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*puVar1 + 0xb8))();
  return;
}



/* Entry: 10789c564; end: 10789c577;  */

/* WARNING: Removing unreachable block (ram,0x00010789be88) */

void FUN_10789c564(long param_1,undefined8 param_2)

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
  UNRECOVERED_JUMPTABLE = (code *)&UNK_10789c578;
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



/* Entry: 10789c9fc; end: 10789cb97;  */

void FUN_10789c9fc(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [8];
  long lStack_c8;
  undefined7 uStack_c0;
  undefined1 uStack_b9;
  undefined1 uStack_b8;
  undefined2 uStack_b7;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined1 uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_80;
  undefined1 uStack_68;
  undefined1 uStack_60;
  undefined1 uStack_5c;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  lVar5 = *(long *)(param_1 + 0x18);
  auStack_d0[0] = 0;
  uStack_50 = 0;
  if (*(char *)(param_2 + 0x88) == '\x01') {
    func_0x0001075281c8(auStack_d0,param_2);
    uStack_50 = 1;
    puVar3 = auStack_d0;
    func_0x00010789cbc4();
    if (((ulong)puVar3 & 1) != 0) goto LAB_10789cb2c;
    func_0x00010789e6e4();
    func_0x00010002b838(&uStack_48,&UNK_10f432918);
    *puVar3 = 2;
    *(undefined8 *)(puVar3 + 0x10) = uStack_40;
    *(undefined8 *)(puVar3 + 8) = uStack_48;
    uVar1 = uStack_38;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    *(undefined8 *)(puVar3 + 0x20) = 0;
    *(undefined8 *)(puVar3 + 0x28) = 0;
    *(undefined8 *)(puVar3 + 0x18) = uVar1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    uStack_d8 = 0;
    func_0x00010724b300(&uStack_c0,puVar3);
    puVar4 = &uStack_d8;
  }
  else {
    auStack_d0[0] = 2;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_b7 = 0;
    uStack_c0 = 0;
    uStack_b9 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_50 = 1;
    uStack_b8 = 1;
    uStack_d8 = CONCAT71(uStack_d8._1_7_,2);
    func_0x00010789cc18(&uStack_48,&uStack_d8,&UNK_10f432934);
    uVar1 = uStack_48;
    uStack_48 = 0;
    func_0x00010724b300(&uStack_c0,uVar1);
    puVar4 = &uStack_48;
  }
  func_0x0001072d6f8c(puVar4);
LAB_10789cb2c:
  lStack_c8 = (lVar2 - lVar5) / 1000;
  func_0x0001072fba20(param_1,&UNK_10789ee64,0,auStack_d0);
  func_0x00010789cc98(auStack_d0);
  return;
}



/* Entry: 10789cd08; end: 10789cd2b;  */

long FUN_10789cd08(long param_1,long param_2)

{
  func_0x00010789e744();
  func_0x000107319cc4();
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return param_2;
}



/* Entry: 10789ce74; end: 10789ce97;  */

undefined8 * FUN_10789ce74(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109e5e18;
  func_0x00010789ce14(param_2 + 1,param_1 + 8);
  return param_2;
}



/* Entry: 10789d078; end: 10789d0cb;  */

long FUN_10789d078(long *param_1,long param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = *param_1;
  uVar4 = param_1[1];
  uVar1 = uVar4;
  if (param_4 <= uVar4) {
    uVar1 = param_4;
  }
  uVar2 = uVar1 + param_3;
  if (uVar4 - uVar1 <= param_3) {
    uVar2 = uVar4;
  }
  lVar5 = lVar3;
  func_0x00010067f328(lVar3,lVar3 + uVar2,param_2,param_2 + param_3,&UNK_10067f248);
  lVar6 = lVar5 - lVar3;
  if (lVar5 == lVar3 + uVar2 && param_3 != 0) {
    lVar6 = -1;
  }
  return lVar6;
}



/* Entry: 10789d200; end: 10789d20f;  */

void FUN_10789d200(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e5e98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10789d33c; end: 10789d353;  */

void FUN_10789d33c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x00010789d370(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10789d58c; end: 10789d597;  */

void FUN_10789d58c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010789e7ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10789da34; end: 10789db4f;  */

/* WARNING: Possible PIC construction at 0x00010789dae4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010789dae8) */
/* WARNING: Removing unreachable block (ram,0x00010789db1c) */
/* WARNING: Removing unreachable block (ram,0x00010789db34) */
/* WARNING: Removing unreachable block (ram,0x00010789db44) */
/* WARNING: Removing unreachable block (ram,0x00010789db04) */

undefined8 ** FUN_10789da34(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [240];
  
  func_0x00010789e4ec();
  __ZNSt3__119__thread_local_dataEv();
  *param_1 = 0;
  func_0x000100491558();
  puVar1 = (undefined8 *)param_1[1];
  func_0x0001078bba88(param_1 + 2);
  if (param_1[0xd] != 0) {
    func_0x000104c003e8(param_1 + 10);
  }
  func_0x0001078980a4(auStack_120);
  puVar1[10] = auStack_120;
  uStack_140 = 0;
  uVar3 = param_1[6];
  uVar2 = param_1[5];
  param_1[5] = 0;
  param_1[6] = 0;
  uVar5 = param_1[8];
  uVar4 = param_1[7];
  param_1[7] = 0;
  param_1[8] = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  uStack_128 = 0;
  puStack_148 = puVar1;
  func_0x0001072aef7c(&uStack_140);
  func_0x00010724bd50(&uStack_130);
  func_0x0001073ada24(*puVar1,auStack_120);
  __ZNSt3__17promiseIvE9set_valueEv(param_1 + 9);
  _CFRunLoopRun();
  puVar1[10] = 0;
  func_0x0001073ada2c(*puStack_148);
  func_0x00010789d370(puStack_148 + 2);
  return &puStack_148;
}



/* Entry: 10789dd84; end: 10789ddbb;  */

undefined8 FUN_10789dd84(undefined8 param_1)

{
  func_0x00010789e778();
  func_0x00010789dee4();
  return param_1;
}



/* Entry: 10789dfa4; end: 10789dfb7;  */

void FUN_10789dfa4(void)

{
  func_0x00010789e024();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10789e18c; end: 10789e1d7;  */

undefined8 * FUN_10789e18c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e60c8;
  func_0x00010789e1b8(param_1 + 4);
  return param_1;
}



/* Entry: 10789e2e4; end: 10789e2e7;  */

undefined8 * FUN_10789e2e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e6188;
  func_0x00010789e34c(param_1 + 4);
  return param_1;
}



/* Entry: 10789e454; end: 10789e457;  */

undefined8 * FUN_10789e454(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e6208;
  func_0x00010724bfc0(param_1 + 5);
  return param_1;
}



/* Entry: 10789e8f8; end: 10789e9a3;  */

undefined8 * FUN_10789e8f8(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x000107525890();
  *puVar1 = &PTR_SUB_1109e6248;
  func_0x00010789ed30(&PTR_DAT_1109e6290);
  func_0x000107525d00();
  func_0x00010789ed58();
  func_0x00010789ed30(&PTR_DAT_1109e6310);
  func_0x000107525d00(param_1,2);
  func_0x00010789ed58();
  func_0x00010789ed30(&PTR_DAT_1109e6390);
  puVar1 = param_1;
  func_0x000107525d00(param_1,3);
  func_0x00010789ed58();
  func_0x00010789ed84(uVar2);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  *puVar1 = &PTR_SUB_1109b9938;
  func_0x00010752607c(puVar1 + 1);
  return puVar1;
}



/* Entry: 10789ea74; end: 10789ea87;  */

undefined ** FUN_10789ea74(void)

{
  return &PTR_DAT_1109e62f0;
}



/* Entry: 10789eb78; end: 10789eccb;  */

void FUN_10789eb78(undefined8 *param_1,long *param_2,long *param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [64];
  undefined8 uStack_38;
  
  puVar1 = auStack_c0;
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010789ed10();
  func_0x0001078a3f54();
  *param_1 = param_2;
  func_0x00010002b838(auStack_90,&UNK_10f4060d6);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_a8,*param_3);
  func_0x000107268798(auStack_78,auStack_a8);
  func_0x00010789ed18(*(undefined8 *)(*param_2 + 0x40));
  func_0x00010789ed28();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
  func_0x00010789ed50();
  func_0x00010002b838(auStack_90,&UNK_10f4060e3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_c0,*param_3 + 0x18);
  func_0x000107268798(auStack_78,auStack_c0);
  func_0x00010789ed18(*(undefined8 *)(*param_2 + 0x40));
  func_0x00010789ed28();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
  func_0x00010789ed50();
  func_0x00010789ed84(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010789ed28();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
  func_0x00010789ed50();
  *param_1 = 0;
  (**(code **)(*param_2 + 8))(param_2);
  do {
    __Unwind_Resume(puVar1);
    __ZdlPv(param_2);
  } while( true );
}



/* Entry: 10789ef18; end: 10789ef3b;  */

long FUN_10789ef18(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  return lVar1 - *(long *)(param_1 + 0x58);
}



/* Entry: 10789f398; end: 10789f53b;  */

undefined8 * FUN_10789f398(undefined8 *param_1)

{
  undefined8 *puVar1;
  int extraout_w10;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [8];
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  lVar2 = param_1[1];
  *param_1 = &PTR_DAT_1109e6470;
  param_1[1] = 0;
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x28) != 0) {
      FUN_10789fa74(lVar2);
    }
    __ZNSt3__17promiseIvEC1Ev(auStack_78);
    FUN_10789ad44(lVar2 + 0x20);
    uVar3 = *(undefined8 *)(lVar2 + 0x38);
    func_0x000107898fb8(&puStack_70);
    *(undefined1 *)puStack_70 = 0;
    puVar1 = (undefined8 *)0x80;
    __Znwm();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_DAT_1109e64f0;
    puStack_60 = puStack_70;
    puStack_58 = (undefined8 *)lStack_68;
    if (lStack_68 != 0) {
      do {
        func_0x0001078a0178();
      } while (extraout_w10 != 0);
    }
    puVar1[3] = &PTR_DAT_1109e6540;
    __ZNSt3__115recursive_mutexC1Ev(puVar1 + 4);
    puVar1[0xc] = puStack_70;
    puVar1[0xd] = lStack_68;
    puStack_60 = (undefined8 *)0x0;
    puStack_58 = (undefined8 *)0x0;
    puVar1[0xe] = auStack_78;
    func_0x0001078a01b0();
    puStack_60 = puVar1 + 3;
    puStack_58 = puVar1;
    func_0x0001078a01a0();
    func_0x00010789895c(uVar3,0,&puStack_60);
    func_0x0001078a01a8();
    __ZNSt3__17promiseIvE10get_futureEv(&puStack_60,auStack_78);
    __ZNSt3__16futureIvE3getEv(&puStack_60);
    __ZNSt3__16futureIvED1Ev(&puStack_60);
    func_0x00010789846c(*(undefined8 *)(lVar2 + 0x38));
    __ZNSt3__16thread4joinEv(lVar2 + 0x18);
    __ZNSt3__17promiseIvED1Ev(auStack_78);
    func_0x00010787b3fc(lVar2 + 0x30);
    func_0x00010787b3fc((long *)(lVar2 + 0x28));
    __ZNSt3__16futureIvED1Ev(lVar2 + 0x20);
    __ZNSt3__16threadD1Ev(lVar2 + 0x18);
    func_0x00010724b54c(lVar2);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10789fa74; end: 10789faab;  */

/* WARNING: Possible PIC construction at 0x00010789fa94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010789fa98) */

void FUN_10789fa74(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + 0x30);
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



/* Entry: 10789ff10; end: 10789ff1b;  */

void FUN_10789ff10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001078a01d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1078a0038; end: 1078a003b;  */

void FUN_1078a0038(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e65c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078a030c; end: 1078a08b7;  */

undefined8 *
FUN_1078a030c(long *param_1,undefined8 *param_2,long *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 *param_8)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  undefined8 uVar8;
  long lVar9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 auStack_218 [24];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_190;
  undefined1 uStack_188;
  undefined1 auStack_180 [8];
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined **appuStack_168 [3];
  undefined ***pppuStack_150;
  undefined1 auStack_148 [32];
  undefined8 *puStack_128;
  undefined8 **ppuStack_120;
  undefined8 **ppuStack_118;
  undefined1 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined1 auStack_98 [32];
  undefined8 uStack_78;
  
  func_0x0001078a320c();
  puVar3 = (undefined8 *)0x68;
  uStack_78 = extraout_x8;
  __Znwm();
  uVar13 = param_2[1];
  uVar12 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  lVar14 = param_3[1];
  lVar9 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  uVar16 = param_4[1];
  uVar15 = *param_4;
  *param_4 = 0;
  param_4[1] = 0;
  uVar18 = param_5[1];
  uVar17 = *param_5;
  *param_5 = 0;
  param_5[1] = 0;
  uVar8 = param_6[2];
  uVar20 = param_6[1];
  uVar19 = *param_6;
  param_6[1] = 0;
  param_6[2] = 0;
  *param_6 = 0;
  uVar11 = *param_8;
  puVar3[1] = uVar13;
  *puVar3 = uVar12;
  uStack_228 = 0;
  uStack_220 = 0;
  puVar3[3] = lVar14;
  puVar3[2] = lVar9;
  puVar3[5] = uVar16;
  puVar3[4] = uVar15;
  uStack_238 = 0;
  uStack_230 = 0;
  uStack_248 = 0;
  uStack_240 = 0;
  puVar3[7] = uVar18;
  puVar3[6] = uVar17;
  uStack_258 = 0;
  uStack_250 = 0;
  puVar3[9] = uVar20;
  puVar3[8] = uVar19;
  puVar3[10] = uVar8;
  uStack_270 = 0;
  uStack_268 = 0;
  uStack_260 = 0;
  *(bool *)(puVar3 + 0xb) = lVar9 != 0;
  pppuStack_150 = appuStack_168;
  appuStack_168[0] = &PTR_DAT_1109e3f18;
  puVar4 = (undefined8 *)0xb8;
  __Znwm();
  func_0x00010002b838(auStack_218,&UNK_10f432a03);
  func_0x00010724cbe8(auStack_148,appuStack_168);
  uStack_1f8 = puVar3[1];
  uStack_200 = *puVar3;
  if (puVar3[1] != 0) {
    do {
      func_0x0001078a31ac();
    } while (extraout_w10 != 0);
  }
  uStack_1e8 = puVar3[3];
  uStack_1f0 = puVar3[2];
  if (puVar3[3] != 0) {
    do {
      func_0x0001078a31ac();
    } while (extraout_w10_00 != 0);
  }
  uStack_1d8 = puVar3[5];
  uStack_1e0 = puVar3[4];
  if (puVar3[5] != 0) {
    do {
      func_0x0001078a31ac();
    } while (extraout_w10_01 != 0);
  }
  uStack_1c8 = puVar3[7];
  uStack_1d0 = puVar3[6];
  if (puVar3[7] != 0) {
    do {
      func_0x0001078a31ac();
    } while (extraout_w10_02 != 0);
  }
  puStack_190 = &uStack_1c0;
  uStack_1c0 = 0;
  puStack_1b8 = (undefined8 *)0x0;
  uStack_1b0 = 0;
  puVar5 = (undefined8 *)puVar3[8];
  puVar6 = (undefined8 *)puVar3[9];
  uStack_188 = 0;
  lVar9 = (long)puVar6 - (long)puVar5;
  uVar2 = lVar9 == 0;
  if (!(bool)uVar2) {
    func_0x0001072aea34(puStack_190,lVar9 >> 4);
    puStack_128 = &uStack_1b0;
    puStack_178 = puStack_1b8;
    ppuStack_120 = &puStack_178;
    ppuStack_118 = &puStack_170;
    puVar10 = puStack_1b8;
    for (; uVar2 = puVar5 == puVar6, puStack_170 = puVar10, !(bool)uVar2; puVar5 = puVar5 + 2) {
      lVar9 = puVar5[1];
      uVar8 = *puVar5;
      puVar10[1] = puVar5[1];
      *puVar10 = uVar8;
      if (lVar9 != 0) {
        do {
          func_0x0001078a31ac();
        } while (extraout_w10_03 != 0);
      }
      puVar10 = puVar10 + 2;
    }
    uStack_110 = 1;
    func_0x0001072aeab0(&puStack_128);
    puStack_1b8 = puVar10;
  }
  uStack_188 = 1;
  func_0x0001072aeb18(&puStack_190);
  uStack_1a8 = param_7;
  uStack_1a0 = uVar11;
  func_0x00010724b408(puVar4);
  puVar4[0x13] = 0;
  puVar4[0x12] = 0;
  puVar4[0x16] = 0;
  puVar4[0x15] = 0;
  puVar4[0x14] = 0;
  __ZNSt3__17promiseIvEC1Ev(&puStack_178);
  __ZNSt3__17promiseIvE10get_futureEv(&puStack_128,&puStack_178);
  func_0x00010787b1b0(puVar4 + 0x13,&puStack_128);
  __ZNSt3__16futureIvED1Ev(&puStack_128);
  puStack_128 = puVar4;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (&ppuStack_120,auStack_218);
  uStack_b8 = uStack_1b0;
  uStack_d0 = uStack_1c8;
  uStack_d8 = uStack_1d0;
  uStack_f0 = uStack_1e8;
  uStack_f8 = uStack_1f0;
  uStack_100 = uStack_1f8;
  uStack_108 = uStack_200;
  uStack_200 = 0;
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  uStack_e0 = uStack_1d8;
  uStack_e8 = uStack_1e0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  puStack_c0 = puStack_1b8;
  uStack_c8 = uStack_1c0;
  uStack_1c0 = 0;
  puStack_1b8 = (undefined8 *)0x0;
  uStack_1b0 = 0;
  uStack_a8 = uStack_1a0;
  uStack_b0 = uStack_1a8;
  puStack_a0 = puStack_178;
  puStack_178 = (undefined8 *)0x0;
  func_0x000105302f48(auStack_98,auStack_148);
  puVar5 = (undefined8 *)0x8;
  __Znwm();
  __ZNSt3__115__thread_structC1Ev();
  puVar6 = (undefined8 *)0xb8;
  puStack_190 = puVar5;
  __Znwm();
  puStack_190 = (undefined8 *)0x0;
  *puVar6 = puVar5;
  puVar6[1] = puStack_128;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar6 + 2,&ppuStack_120)
  ;
  puVar6[6] = uStack_100;
  puVar6[5] = uStack_108;
  puVar6[8] = uStack_f0;
  puVar6[7] = uStack_f8;
  puVar6[10] = uStack_e0;
  puVar6[9] = uStack_e8;
  puVar6[0xf] = uStack_b8;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  puVar6[0xc] = uStack_d0;
  puVar6[0xb] = uStack_d8;
  uStack_d8 = 0;
  uStack_d0 = 0;
  puVar6[0xe] = puStack_c0;
  puVar6[0xd] = uStack_c8;
  uStack_c8 = 0;
  puStack_c0 = (undefined8 *)0x0;
  uStack_b8 = 0;
  puVar6[0x11] = uStack_a8;
  puVar6[0x10] = uStack_b0;
  puVar6[0x12] = puStack_a0;
  puStack_a0 = (undefined8 *)0x0;
  func_0x000105302f48(puVar6 + 0x13,auStack_98);
  puVar7 = auStack_180;
  puStack_170 = puVar6;
  func_0x000100489040(puVar7,&UNK_1078a2a54,puVar6);
  if ((int)puVar7 != 0) {
    __ZNSt3__120__throw_system_errorEiPKc();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1078a0758);
    (*pcVar1)();
  }
  puStack_170 = (undefined8 *)0x0;
  func_0x0001078a2d24(&puStack_170);
  func_0x0001004895c8(&puStack_190);
  func_0x0001004895f4(puVar4 + 0x12,auStack_180);
  __ZNSt3__16threadD1Ev(auStack_180);
  func_0x0001078a2d60(&puStack_128);
  __ZNSt3__17promiseIvED1Ev(&puStack_178);
  func_0x0001078a2d9c(&uStack_200);
  func_0x0001006393ec(auStack_148);
  puVar3[0xc] = puVar4;
  func_0x0001078a33e8();
  func_0x0001006393ec(appuStack_168);
  *param_1 = (long)puVar3;
  func_0x0001072aeba4(&uStack_270);
  func_0x0001078a3388();
  func_0x0001078a3380();
  func_0x00010724bd50(&uStack_238);
  puVar5 = &uStack_228;
  func_0x00010724bd50(puVar5);
  func_0x0001078a3168(uStack_78);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x0001072aeb18(&puStack_190);
    func_0x00010724bd50(&uStack_1d0);
    func_0x00010724bd50(&uStack_1e0);
    func_0x00010724bd50(&uStack_1f0);
    func_0x00010724bd50(&uStack_200);
    func_0x0001006393ec(auStack_148);
    func_0x0001078a33e8();
    __ZdlPv(puVar4);
    func_0x0001006393ec(appuStack_168);
    func_0x0001072aeba4(puVar3 + 8);
    func_0x00010724bd50(puVar3 + 6);
    func_0x00010724bd50(puVar3 + 4);
    func_0x00010724bd50(puVar3 + 2);
    func_0x00010724bd50(puVar3);
    func_0x0001072aeba4(&uStack_270);
    func_0x0001078a3388();
    func_0x0001078a3380();
    func_0x00010724bd50(&uStack_238);
    func_0x00010724bd50(&uStack_228);
    __ZdlPv(puVar3);
    func_0x0001078a3430();
    func_0x0001078a3490();
    return puVar3;
  }
  return puVar5;
}



/* Entry: 1078a151c; end: 1078a151f;  */

undefined8 * FUN_1078a151c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e66e0;
  func_0x00010724ae28(param_1 + 2);
  return param_1;
}



/* Entry: 1078a1678; end: 1078a16b7;  */

void FUN_1078a1678(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_1109e66e0;
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  lVar1 = param_2[2];
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x0001078a31ac();
    } while (extraout_w10 != 0);
  }
  param_1[4] = param_2[3];
  return;
}



/* Entry: 1078a1874; end: 1078a1937;  */

long * FUN_1078a1874(long *param_1,ulong *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar4 = *param_2;
  plVar2 = (long *)param_1[1];
  plVar3 = param_1 + 1;
  do {
    plVar5 = plVar3;
    if (plVar2 == (long *)0x0) {
LAB_1078a18d8:
      plVar1 = (long *)0x30;
      __Znwm();
      plVar1[4] = uVar4;
      plVar1[5] = 0;
      *plVar1 = 0;
      plVar1[1] = 0;
      plVar1[2] = (long)plVar3;
      *plVar5 = (long)plVar1;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
      }
      func_0x00010002c5b0(param_1[1],plVar1);
      param_1[2] = param_1[2] + 1;
LAB_1078a1920:
      return plVar1 + 5;
    }
    while (plVar1 = plVar2, plVar3 = plVar1, (ulong)plVar1[4] <= uVar4) {
      if (uVar4 <= (ulong)plVar1[4]) goto LAB_1078a1920;
      plVar2 = (long *)plVar1[1];
      if ((long *)plVar1[1] == (long *)0x0) {
        plVar5 = plVar1 + 1;
        goto LAB_1078a18d8;
      }
    }
    plVar2 = (long *)*plVar1;
  } while( true );
}



/* Entry: 1078a1eb0; end: 1078a1edb;  */

undefined8 FUN_1078a1eb0(long param_1,undefined8 param_2)

{
  func_0x0001078a33f0(param_2,param_1 + 8);
  func_0x0001078a1de0();
  return param_2;
}



/* Entry: 1078a2104; end: 1078a217f;  */

void FUN_1078a2104(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  uVar1 = *(undefined8 *)*param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_38,((undefined8 *)*param_1)[1]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_50,param_2);
  func_0x000107273f9c(uVar1,auStack_38,auStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  return;
}



/* Entry: 1078a2334; end: 1078a2347;  */

void FUN_1078a2334(void)

{
  func_0x0001078a2568();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078a2608; end: 1078a2637;  */

long FUN_1078a2608(long param_1)

{
  func_0x0001078a28e8(param_1 + 0x428);
  func_0x0001078a1f8c(param_1 + 0x1f8);
  func_0x00010028ad98(param_1 + 0x1d0);
  func_0x00010015b8c8(param_1 + 0x1b8);
  func_0x00010724b3d8(param_1 + 0x170);
  func_0x000104c33970(param_1 + 0x150);
  func_0x0001001148fc(param_1 + 0x130);
  func_0x00010724b12c(param_1 + 0xd0);
  func_0x00010724b2ac(param_1 + 0x80);
  func_0x00010724b3d8(param_1 + 0x40);
  func_0x000104c2f714(param_1 + 8);
  return param_1;
}



/* Entry: 1078a26c0; end: 1078a26d3;  */

void FUN_1078a26c0(void)

{
  func_0x0001078a27fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078a28b8; end: 1078a2913;  */

long FUN_1078a28b8(long param_1)

{
  func_0x0001078a1f8c(param_1 + 0x210);
  func_0x00010724b374(param_1 + 0x18);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1078a2a1c; end: 1078a2a53;  */

/* WARNING: Possible PIC construction at 0x0001078a2a3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078a2a40) */

void FUN_1078a2a1c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + 0xa8);
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



/* Entry: 1078a2ea0; end: 1078a2eb7;  */

void FUN_1078a2ea0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x0001078a2ed4(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078a30dc; end: 1078a3127;  */

void FUN_1078a30dc(void)

{
  func_0x0001078a3280();
  func_0x0001078a34e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)();
  return;
}



/* Entry: 1078a3c4c; end: 1078a3c77;  */

void FUN_1078a3c4c(long *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x130;
  if (*param_2 != '\x03') {
    lVar1 = 0x138;
  }
  lVar2 = 0x80;
  if (*param_2 != '\x03') {
    lVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001078a3c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + lVar1))(param_1,param_2 + lVar2);
  return;
}



/* Entry: 1078a3f2c; end: 1078a3f83;  */

void FUN_1078a3f2c(long *param_1)

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
  
  func_0x000107262f3c(param_1 + 2);
  puVar1 = (undefined1 *)register0x00000008;
  if ((char)param_1[0x26] == '\x01') {
    func_0x0001078a3dec(param_1,param_1[0x25],param_1[0x26]);
  }
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
        func_0x0001078a52d4(plVar4,unaff_x20);
        bVar3 = (long *)(unaff_x21 + 0x68) != plVar4;
        uVar2 = bVar3 || unaff_x19 == (long *)0x7fffffffffffffff;
        if (!bVar3 && unaff_x19 != (long *)0x7fffffffffffffff) {
          *(undefined ***)(puVar1 + -0x58) = &PTR_FUN_1109e70b0;
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



/* Entry: 1078a467c; end: 1078a46ef;  */

bool FUN_1078a467c(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  if ((*(byte *)(param_2 + 1) >> 1 & 1) == 0) {
    return false;
  }
  lVar2 = param_2 + 8;
  func_0x00010789bbc8(lVar2,&DAT_10f405966,8,0);
  if (lVar2 == -1) {
    param_2 = param_2 + 8;
    func_0x00010789bbc8(param_2,&DAT_10f3046e5,7,0);
    bVar1 = param_2 == -1;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 1078a4eb8; end: 1078a4f37;  */

/* WARNING: Possible PIC construction at 0x0001078a4ee0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078a4ee4) */
/* WARNING: Removing unreachable block (ram,0x0001078a4f30) */
/* WARNING: Removing unreachable block (ram,0x0001078a4f28) */
/* WARNING: Removing unreachable block (ram,0x0001078a740c) */

undefined1 * FUN_1078a4eb8(void)

{
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  func_0x0001078a72c0();
  uStack_38 = 1;
  func_0x0001078a4f60();
  return auStack_40;
}



/* Entry: 1078a4ffc; end: 1078a501f;  */

void FUN_1078a4ffc(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109e6c58;
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  lVar2 = *(long *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001078a72dc();
    } while (extraout_w10 != 0);
  }
  *(undefined1 *)(param_2 + 5) = *(undefined1 *)(puVar1 + 4);
  lVar2 = puVar1[6];
  uVar3 = puVar1[5];
  param_2[7] = puVar1[6];
  param_2[6] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001078a72dc();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1078a5258; end: 1078a52d3;  */

undefined8 * FUN_1078a5258(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e6cc8;
  func_0x000104c2f714(param_1 + 4);
  return param_1;
}



/* Entry: 1078a5830; end: 1078a5857;  */

void FUN_1078a5830(undefined8 param_1)

{
  func_0x0001078a738c();
  func_0x0001078a735c(param_1,&PTR_DAT_1109e6e38);
  func_0x0001078a72f4();
  return;
}



/* Entry: 1078a5c9c; end: 1078a5f0f;  */

void FUN_1078a5c9c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  bool bVar4;
  undefined1 uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_168 [8];
  long lStack_160;
  undefined1 *puStack_158;
  char cStack_14f;
  undefined1 auStack_148 [16];
  undefined8 uStack_138;
  byte bStack_130;
  undefined1 *puStack_128;
  byte bStack_120;
  undefined7 uStack_11f;
  undefined1 auStack_118 [24];
  char cStack_100;
  undefined1 auStack_e8 [128];
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  
  lVar6 = param_1;
  func_0x0001078a72c0();
  lVar1 = *(long *)(lVar6 + 8);
  uStack_48 = extraout_x8;
  func_0x0001078a5a84(lVar1 + 0x60,*(undefined8 *)(lVar6 + 0x10));
  lVar9 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar9 + 0x200);
  *(undefined8 *)(lVar9 + 0x200) = 0;
  if (lVar6 != 0) {
    func_0x0001078a729c();
    lVar9 = *(long *)(param_1 + 0x10);
  }
  puVar7 = auStack_168;
  func_0x0001075281c8(puVar7,param_2);
  lVar6 = *(long *)(param_1 + 0x18);
  __ZNSt3__16chrono12steady_clock3nowEv();
  lStack_160 = ((long)puVar7 - lVar6) / 1000;
  if ((bStack_130 & 1) == 0) {
    uStack_138 = *(undefined8 *)(lVar9 + 0x118);
    bStack_130 = *(byte *)(lVar9 + 0x120);
  }
  else {
    *(undefined8 *)(lVar9 + 0x118) = uStack_138;
    *(byte *)(lVar9 + 0x120) = bStack_130;
  }
  if ((cStack_14f == '\x01') && (*(long *)(lVar9 + 0x158) != 0)) {
    puVar7 = auStack_148;
    func_0x000104c2f98c(puVar7,lVar9 + 0x158);
    cStack_14f = '\0';
  }
  if (bStack_120 == 1) {
    puVar2 = *(undefined1 **)(lVar9 + 0x128);
    uVar3 = *(ulong *)(lVar9 + 0x130);
    *(undefined1 **)(lVar9 + 0x128) = puStack_128;
    *(undefined1 *)(lVar9 + 0x130) = 1;
    FUN_10789a00c();
    if ((long)puVar7 < (long)puStack_128) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
      if (((uVar3 & 1) != 0) &&
         (lVar6 = (long)puStack_128 - (long)puVar2, (long)puVar2 <= (long)puStack_128)) {
        if (lVar6 < 0x1f) {
          lVar6 = 0x1e;
        }
        bVar4 = puStack_128 == puVar2;
        puStack_128 = puVar2;
        if (!bVar4) {
          puStack_128 = puVar7 + lVar6;
        }
      }
    }
    if ((bStack_120 & 1) == 0) {
      bStack_120 = 1;
    }
    if (bVar4) {
      *(int *)(lVar9 + 0x260) = *(int *)(lVar9 + 0x260) + 1;
      goto LAB_1078a5df8;
    }
  }
  *(undefined4 *)(lVar9 + 0x260) = 0;
LAB_1078a5df8:
  uVar5 = cStack_100 == '\0';
  puVar7 = auStack_118;
  puVar2 = (undefined1 *)(lVar9 + 0x138);
  if ((bool)uVar5) {
    puVar7 = (undefined1 *)(lVar9 + 0x138);
    puVar2 = auStack_118;
  }
  func_0x0001002a969c(puVar2,puVar7);
  if (puStack_158 == (undefined1 *)0x0) {
    *(undefined4 *)(lVar9 + 0x264) = 0;
    *(undefined1 *)(lVar9 + 0x268) = 1;
  }
  else {
    *(int *)(lVar9 + 0x264) = *(int *)(lVar9 + 0x264) + 1;
    *(undefined1 *)(lVar9 + 0x268) = *puStack_158;
    uVar8 = *(undefined8 *)(puStack_158 + 0x20);
    *(undefined1 *)(lVar9 + 0x278) = puStack_158[0x28];
    *(undefined8 *)(lVar9 + 0x270) = uVar8;
  }
  lVar6 = lVar9;
  func_0x0001078a3dec(lVar9,puStack_128,CONCAT71(uStack_11f,bStack_120));
  func_0x0001078a3e48(lVar9,lVar6);
  func_0x0001072fb714(auStack_68,lVar9 + 0x210);
  func_0x0001075281c8(auStack_e8,auStack_168);
  func_0x0001072fb768(auStack_68,auStack_e8);
  func_0x00010724b340(auStack_e8);
  func_0x0001072ad0c8(auStack_68);
  func_0x00010724b340(auStack_168);
  func_0x0001078a5a20(lVar1);
  func_0x0001078a7288(uStack_48);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    func_0x00010724b340(auStack_e8);
    func_0x0001072ad0c8(auStack_68);
    func_0x00010724b340(auStack_168);
    func_0x0001078a7304();
    return;
  }
  return;
}



/* Entry: 1078a6048; end: 1078a608b;  */

void FUN_1078a6048(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x0001078a7400();
  *param_1 = *param_2;
  func_0x0001072d62a0(param_1 + 1,param_2 + 1);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x200);
  *(undefined8 *)(unaff_x20 + 0x208) = *(undefined8 *)(unaff_x19 + 0x208);
  *(undefined8 *)(unaff_x20 + 0x200) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x210) = *(undefined8 *)(unaff_x19 + 0x210);
  *(undefined8 *)(unaff_x19 + 0x210) = 0;
  *(undefined8 *)(unaff_x19 + 0x208) = 0;
  return;
}



/* Entry: 1078a61d4; end: 1078a620f;  */

undefined8 * FUN_1078a61d4(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109e6e98;
  func_0x00010789cb98(param_2 + 1,param_1 + 8);
  return param_2;
}



/* Entry: 1078a62d4; end: 1078a6347;  */

void FUN_1078a62d4(void)

{
  long unaff_x19;
  long lVar1;
  undefined1 auStack_28 [8];
  
  func_0x0001078a730c();
  if ((**(byte **)(unaff_x19 + 0x48) & 1) == 0) {
    lVar1 = *(long *)(unaff_x19 + 0x58);
    __ZNSt3__17promiseIvE10get_futureEv(auStack_28,*(undefined8 *)(lVar1 + 0x108));
    __ZNSt3__17promiseIvE9set_valueEv(*(undefined8 *)(lVar1 + 0x100));
    __ZNSt3__16futureIvE3getEv(auStack_28);
    func_0x0001078a73a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x19 + 8);
  return;
}



/* Entry: 1078a6558; end: 1078a6583;  */

undefined8 * FUN_1078a6558(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e6fb0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 4);
  return param_1;
}



/* Entry: 1078a67fc; end: 1078a6803;  */

void FUN_1078a67fc(void)

{
  return;
}



/* Entry: 1078a6cb8; end: 1078a6eff;  */

undefined1 * FUN_1078a6cb8(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  undefined8 extraout_x8;
  undefined8 *puVar3;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined1 auStack_190 [232];
  undefined1 auStack_a8 [24];
  undefined8 *puStack_90;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  ppuVar2 = &puStack_1a0;
  puVar3 = param_1;
  func_0x0001078a72c0();
  puStack_1a0 = puVar3;
  uStack_68 = extraout_x8;
  __ZNSt3__119__thread_local_dataEv();
  *param_1 = 0;
  func_0x000100491558();
  puVar3 = (undefined8 *)param_1[1];
  func_0x0001078bba88(param_1 + 2);
  if (param_1[10] != 0) {
    func_0x000104c003e8(param_1 + 7);
  }
  func_0x0001078980a4(auStack_190);
  puVar3[0x22] = auStack_190;
  uStack_70 = 0;
  puStack_198 = puVar3;
  func_0x000107528168(puVar3 + 2,auStack_88);
  *(undefined4 *)(puVar3 + 6) = 0;
  func_0x00010724bd1c(auStack_88);
  puVar3[0xf] = 0;
  puVar3[0xe] = puVar3 + 0xf;
  puVar3[8] = 0;
  puVar3[7] = puVar3 + 8;
  puVar1 = puVar3 + 10;
  puVar3[9] = 0;
  puVar3[10] = puVar1;
  puVar3[0xb] = puVar1;
  puVar3[0xc] = 0;
  puVar3[0xd] = puVar1;
  puVar3[0x10] = 0;
  *(undefined1 *)(puVar3 + 0x11) = 1;
  puVar1 = puVar3 + 0x12;
  func_0x0001078b7014();
  func_0x0001078a7398();
  *puVar1 = &PTR_DAT_1109e7130;
  puVar1[1] = &UNK_1078a65fc;
  puVar1[2] = 0;
  puVar1[3] = puVar3 + 2;
  puStack_90 = puVar1;
  func_0x000107897e30(puVar3 + 0x14,auStack_a8);
  func_0x0001006393ec(auStack_a8);
  puVar3[0x15] = 0;
  puVar3[0x16] = 0;
  puVar3[0x17] = 0;
  func_0x00010002b838(puVar3 + 0x18,&UNK_10f4060f0);
  puVar3[0x1c] = 0;
  puVar3[0x1b] = puVar3 + 0x1c;
  puVar3[0x1d] = 0;
  func_0x0001075264a0(puVar3 + 0x14);
  *(undefined4 *)((long)puVar3 + 0x8c) = 0x14;
  func_0x0001073ada24(*puVar3,auStack_190);
  __ZNSt3__17promiseIvE9set_valueEv(param_1 + 6);
  _CFRunLoopRun();
  puVar3[0x22] = 0;
  func_0x0001078a70c4(&puStack_198);
  func_0x0001078983f0(auStack_190);
  FUN_1078a7148(&puStack_1a0);
  func_0x0001078a7288(uStack_68);
  if ((bool)in_ZR) {
    return (undefined1 *)0x0;
  }
  ___stack_chk_fail();
  func_0x0001078983f0(auStack_190);
  FUN_1078a7148(&puStack_1a0);
  func_0x0001078a7304();
  return (undefined1 *)ppuVar2;
}



/* Entry: 1078a7148; end: 1078a71b7;  */

long * FUN_1078a7148(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x0001078a7184(lVar1 + 8);
    func_0x0001004895c8(lVar1);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1078a74bc; end: 1078a74fb;  */

void FUN_1078a74bc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x10;
  __Znwm();
  func_0x0001078a87dc();
  *param_1 = uVar1;
  return;
}



/* Entry: 1078a80e0; end: 1078a80ef;  */

long * FUN_1078a80e0(long *param_1,long *param_2,undefined1 *param_3,long param_4)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  long *plStack_48;
  
  lVar4 = param_4 - (long)param_3;
  if (0 < lVar4) {
    plVar3 = param_1 + 2;
    lVar5 = param_1[1];
    if (*plVar3 - lVar5 < lVar4) {
      plVar2 = param_1;
      func_0x0001001e7ae4(param_1,(lVar4 - *param_1) + lVar5);
      lVar5 = *param_1;
      plStack_68 = (long *)0x0;
      plStack_48 = plVar3;
      if (plVar2 != (long *)0x0) {
        func_0x00010002b988();
        plStack_68 = plVar3;
      }
      puStack_60 = (undefined1 *)((long)plStack_68 + ((long)param_2 - lVar5));
      puStack_50 = (undefined1 *)((long)plStack_68 + (long)plVar2);
      puStack_58 = puStack_60 + lVar4;
      puVar1 = puStack_60;
      for (; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar1 = *param_3;
        puVar1 = puVar1 + 1;
        param_3 = param_3 + 1;
      }
      func_0x000104bd9b18(param_1,&plStack_68,param_2);
      func_0x0001078a8a0c();
      param_2 = param_1;
    }
    else {
      lVar5 = lVar5 - (long)param_2;
      if (lVar4 - lVar5 == 0 || lVar4 < lVar5) {
        func_0x0001078a8994();
        plVar3 = param_2;
        for (; lVar4 != 0; lVar4 = lVar4 + -1) {
          *(undefined1 *)plVar3 = *param_3;
          param_3 = param_3 + 1;
          plVar3 = (long *)((long)plVar3 + 1);
        }
      }
      else {
        func_0x0001078a8660(param_1,param_3 + lVar5,param_4,lVar4 - lVar5);
        if (0 < lVar5) {
          func_0x0001078a8994();
          plVar3 = param_2;
          for (; lVar5 != 0; lVar5 = lVar5 + -1) {
            *(undefined1 *)plVar3 = *param_3;
            param_3 = param_3 + 1;
            plVar3 = (long *)((long)plVar3 + 1);
          }
        }
      }
    }
  }
  return param_2;
}



/* Entry: 1078a82dc; end: 1078a836b;  */

void FUN_1078a82dc(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x18;
    func_0x00010089ccb4();
  }
  return;
}



/* Entry: 1078a86d4; end: 1078a870f;  */

undefined8 * FUN_1078a86d4(undefined8 *param_1,ulong param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar3 = (ulong)*(char *)((long)param_1 + 0x17);
  if ((long)uVar3 < 0) {
    uVar3 = param_1[1];
    if (uVar3 < param_2) goto LAB_1078a86f8;
    param_1[1] = param_2;
    param_1 = (undefined8 *)*param_1;
  }
  else {
    if (uVar3 < param_2) {
LAB_1078a86f8:
      param_2 = param_2 - uVar3;
      if (param_2 != 0) {
        uVar3 = (ulong)*(char *)((long)param_1 + 0x17);
        if ((long)uVar3 < 0) {
          uVar6 = param_1[1];
          lVar2 = (param_1[2] & 0x7fffffffffffffff) - 1;
          uVar3 = (ulong)param_1[2] >> 0x38;
        }
        else {
          lVar2 = 10;
          uVar6 = uVar3;
        }
        uVar5 = (uint)uVar3;
        if (lVar2 - uVar6 < param_2) {
          func_0x00010782824c(param_1,lVar2,(param_2 - lVar2) + uVar6,uVar6,uVar6,0,0);
          uVar5 = (uint)*(byte *)((long)param_1 + 0x17);
        }
        puVar4 = param_1;
        if ((uVar5 >> 7 & 1) != 0) {
          puVar4 = (undefined8 *)*param_1;
        }
        puVar1 = (undefined2 *)((long)puVar4 + uVar6 * 2);
        for (uVar3 = param_2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar1 = param_3;
          puVar1 = puVar1 + 1;
        }
        lVar2 = uVar6 + param_2;
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          param_1[1] = lVar2;
        }
        else {
          *(byte *)((long)param_1 + 0x17) = (byte)lVar2 & 0x7f;
        }
        *(undefined2 *)((long)puVar4 + lVar2 * 2) = 0;
      }
      return param_1;
    }
    *(char *)((long)param_1 + 0x17) = (char)param_2;
  }
  *(undefined2 *)((long)param_1 + param_2 * 2) = 0;
  return param_1;
}



/* Entry: 1078a8a9c; end: 1078a8cd3;  */

/* WARNING: Possible PIC construction at 0x0001078a8ca4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078a8e10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078a8f94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078a8f78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078a8df4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078a8c80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078a8df8) */
/* WARNING: Removing unreachable block (ram,0x0001078a8f7c) */
/* WARNING: Removing unreachable block (ram,0x0001078a8f98) */
/* WARNING: Removing unreachable block (ram,0x0001078a8fa0) */
/* WARNING: Removing unreachable block (ram,0x0001078a8fc0) */
/* WARNING: Removing unreachable block (ram,0x0001078a8e14) */
/* WARNING: Removing unreachable block (ram,0x0001078a8e1c) */
/* WARNING: Removing unreachable block (ram,0x0001078a8e3c) */
/* WARNING: Removing unreachable block (ram,0x0001078a8ecc) */
/* WARNING: Removing unreachable block (ram,0x0001078a8ed8) */
/* WARNING: Removing unreachable block (ram,0x0001078a8eb0) */
/* WARNING: Removing unreachable block (ram,0x0001078a8ee0) */
/* WARNING: Removing unreachable block (ram,0x0001078a8ef4) */
/* WARNING: Removing unreachable block (ram,0x0001078a8f0c) */
/* WARNING: Removing unreachable block (ram,0x0001078a8f2c) */
/* WARNING: Removing unreachable block (ram,0x0001078a8f20) */
/* WARNING: Removing unreachable block (ram,0x0001078a8f38) */
/* WARNING: Removing unreachable block (ram,0x0001078a8f28) */
/* WARNING: Removing unreachable block (ram,0x0001078a8f44) */
/* WARNING: Removing unreachable block (ram,0x0001078a8f48) */
/* WARNING: Removing unreachable block (ram,0x0001078a8f6c) */
/* WARNING: Removing unreachable block (ram,0x0001078a8f50) */
/* WARNING: Removing unreachable block (ram,0x0001078a8f84) */
/* WARNING: Removing unreachable block (ram,0x0001078a8f88) */
/* WARNING: Removing unreachable block (ram,0x0001078a8f5c) */
/* WARNING: Removing unreachable block (ram,0x0001078a8ebc) */
/* WARNING: Removing unreachable block (ram,0x0001078a8f94) */
/* WARNING: Removing unreachable block (ram,0x0001078a8ca8) */
/* WARNING: Removing unreachable block (ram,0x0001078a8cb0) */
/* WARNING: Removing unreachable block (ram,0x0001078a8cd0) */
/* WARNING: Removing unreachable block (ram,0x0001078a8d50) */
/* WARNING: Removing unreachable block (ram,0x0001078a8d5c) */
/* WARNING: Removing unreachable block (ram,0x0001078a8d34) */
/* WARNING: Removing unreachable block (ram,0x0001078a8d64) */
/* WARNING: Removing unreachable block (ram,0x0001078a8d68) */
/* WARNING: Removing unreachable block (ram,0x0001078a8d7c) */
/* WARNING: Removing unreachable block (ram,0x0001078a8d9c) */
/* WARNING: Removing unreachable block (ram,0x0001078a8d90) */
/* WARNING: Removing unreachable block (ram,0x0001078a8da8) */
/* WARNING: Removing unreachable block (ram,0x0001078a8d98) */
/* WARNING: Removing unreachable block (ram,0x0001078a8db4) */
/* WARNING: Removing unreachable block (ram,0x0001078a8db8) */
/* WARNING: Removing unreachable block (ram,0x0001078a8de8) */
/* WARNING: Removing unreachable block (ram,0x0001078a8dc0) */
/* WARNING: Removing unreachable block (ram,0x0001078a8e00) */
/* WARNING: Removing unreachable block (ram,0x0001078a8e04) */
/* WARNING: Removing unreachable block (ram,0x0001078a8dcc) */
/* WARNING: Removing unreachable block (ram,0x0001078a8d40) */
/* WARNING: Removing unreachable block (ram,0x0001078a8e10) */
/* WARNING: Removing unreachable block (ram,0x0001078a8c84) */

void FUN_1078a8a9c(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  uint uVar11;
  undefined4 extraout_w8;
  undefined4 uVar12;
  undefined4 extraout_w8_00;
  undefined4 extraout_w8_01;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong extraout_x8_02;
  undefined1 extraout_w9;
  ulong extraout_x9;
  ulong uVar13;
  code *extraout_x10;
  undefined8 extraout_x11;
  long unaff_x19;
  undefined auStack_4058 [16384];
  undefined8 uStack_58;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001078a8fe0();
  ppuVar6 = &PTR___tlv_bootstrap_11340d5e8;
  uStack_58 = extraout_x8;
  func_0x0001078a9020();
  ppuVar7 = &PTR___tlv_bootstrap_11340d600;
  func_0x0001078a9020();
  ppuVar10 = &PTR___tlv_bootstrap_11340dc30;
  ppuVar9 = &PTR___tlv_bootstrap_11340d618;
  uVar11 = (uint)*(byte *)ppuVar7;
  cVar3 = SBORROW4(uVar11,1);
  cVar4 = (int)(uVar11 - 1) < 0;
  if (uVar11 == 1) {
    ppuVar8 = ppuVar10;
    (*(code *)PTR___tlv_bootstrap_11340dc30)();
    if (*(char *)ppuVar8 == '\0') {
      (*extraout_x8_00)();
      *(undefined1 *)ppuVar10 = 1;
      func_0x0001078a9028(iRam0000000113230840);
      *(undefined4 *)ppuVar10 = extraout_w8_01;
    }
    else {
      (*(code *)PTR___tlv_bootstrap_11340d618)();
      iVar2 = *(int *)ppuVar9;
      cVar3 = SBORROW4(iVar2,iRam0000000113230840);
      cVar4 = iVar2 - iRam0000000113230840 < 0;
      if (iVar2 != iRam0000000113230840) {
        _deflateEnd(ppuVar6);
        goto LAB_1078a8b74;
      }
    }
    ppuVar7 = ppuVar6;
    _deflateReset();
    if ((int)ppuVar7 != 0) {
      func_0x0001078a8fd8();
      __ZNSt13runtime_errorC1EPKc();
      return;
    }
  }
  else {
LAB_1078a8b74:
    ppuVar9 = ppuVar6;
    _deflateInit_(ppuVar6,iRam0000000113230840,&UNK_10f432b85,0x70);
    if ((int)ppuVar9 != 0) goto LAB_1078a8c90;
    *(undefined1 *)ppuVar7 = 1;
    ppuVar7 = ppuVar10;
    (*(code *)PTR___tlv_bootstrap_11340dc30)(iRam0000000113230840);
    if (*(char *)ppuVar7 == '\0') {
      (*extraout_x10)();
      *(undefined1 *)ppuVar10 = extraout_w9;
      func_0x0001078a9028();
      *(undefined4 *)ppuVar10 = extraout_w8_00;
      uVar12 = extraout_w8_00;
    }
    else {
      func_0x0001078a9028();
      ppuVar10 = ppuVar7;
      uVar12 = extraout_w8;
    }
    *(undefined4 *)ppuVar10 = uVar12;
  }
  func_0x0001078a9088();
  uVar1 = extraout_x11;
  if (cVar4 == cVar3) {
    uVar1 = extraout_x8_01;
  }
  func_0x0001078a90f8(uVar1);
  func_0x0001078a90b8();
  do {
    ppuVar6[3] = auStack_4058;
    *(undefined4 *)(ppuVar6 + 4) = 0x4000;
    _deflate(ppuVar6,4);
    func_0x0001078a9078();
    uVar13 = extraout_x9;
    if ((long)extraout_x9 < 0) {
      uVar13 = *(ulong *)(unaff_x19 + 8);
    }
    if (uVar13 < extraout_x8_02) {
      func_0x0001078a90b0();
    }
  } while (param_1 == 0);
  bVar5 = param_1 == 1;
  if (!bVar5) {
    func_0x0001078a8fd8();
    __ZNSt13runtime_errorC1EPKc();
    return;
  }
  func_0x0001078a8ff4(uStack_58);
  if (bVar5) {
    return;
  }
  ___stack_chk_fail();
LAB_1078a8c90:
  func_0x0001078a8fd8();
  __ZNSt13runtime_errorC1EPKc();
  return;
}



/* Entry: 1078a9564; end: 1078a956f;  */

void FUN_1078a9564(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1078a976c; end: 1078a98ab;  */

uint FUN_1078a976c(long *param_1,byte *param_2)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  
  pbVar5 = (byte *)*param_1;
  if (pbVar5 == param_2) {
LAB_1078a98a0:
    uVar6 = 0xfffffffe;
  }
  else {
    pbVar3 = pbVar5 + 1;
    *param_1 = (long)pbVar3;
    uVar6 = (uint)*pbVar5;
    if (-1 < (char)*pbVar5) {
      return uVar6;
    }
    if (0xc1 < uVar6) {
      if (uVar6 < 0xe0) {
        uVar6 = uVar6 & 0x1f;
        iVar4 = 2;
LAB_1078a9820:
        if (pbVar3 == param_2) goto LAB_1078a98a0;
        *param_1 = (long)(pbVar3 + 1);
        if ((char)*pbVar3 < -0x40) {
          if (0x10 < uVar6 >> 10) {
            return 0xffffffff;
          }
          if ((uVar6 & 0x7fe0) == 0x360) {
            return 0xffffffff;
          }
          iVar7 = 3;
          if (0x3ff < uVar6) {
            iVar7 = 4;
          }
          iVar1 = 2;
          if (0x1f < uVar6) {
            iVar1 = iVar7;
          }
          iVar7 = 1;
          if (1 < uVar6) {
            iVar7 = iVar1;
          }
          if (iVar7 == iVar4) {
            return *pbVar3 & 0x3f | uVar6 << 6;
          }
          return 0xffffffff;
        }
      }
      else if (uVar6 < 0xf0) {
        uVar6 = uVar6 & 0xf;
        iVar4 = 3;
        pbVar2 = pbVar3;
LAB_1078a97f4:
        if (pbVar2 == param_2) goto LAB_1078a98a0;
        pbVar3 = pbVar2 + 1;
        *param_1 = (long)pbVar3;
        if ((char)*pbVar2 < -0x40) {
          uVar6 = *pbVar2 & 0x3f | uVar6 << 6;
          goto LAB_1078a9820;
        }
      }
      else if (uVar6 < 0xf5) {
        if (pbVar3 == param_2) goto LAB_1078a98a0;
        pbVar2 = pbVar5 + 2;
        *param_1 = (long)pbVar2;
        if ((char)pbVar5[1] < -0x40) {
          uVar6 = pbVar5[1] & 0x3f | (uVar6 & 7) << 6;
          iVar4 = 4;
          goto LAB_1078a97f4;
        }
      }
    }
    uVar6 = 0xffffffff;
  }
  return uVar6;
}



/* Entry: 1078a9ba4; end: 1078a9ba7;  */

long FUN_1078a9ba4(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x000104c003e8(param_1 + 0x10);
  }
  func_0x0001006393ec(param_1 + 0x10);
  return param_1;
}



/* Entry: 1078aa470; end: 1078aa483;  */

void FUN_1078aa470(void)

{
  func_0x0001078aa2e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078ab3e4; end: 1078ab49b;  */

bool FUN_1078ab3e4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lStack_50;
  int iStack_48;
  int iStack_44;
  
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



/* Entry: 1078ab9a8; end: 1078aba5f;  */

void FUN_1078ab9a8(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  auStack_50[0] = 0;
  uStack_48 = param_3;
  func_0x0001078ab940(param_1 + 0xf0,auStack_50);
  auStack_50[0] = 0;
  uStack_4c = *(undefined4 *)(param_2 + 0x10);
  func_0x0001078af48c();
  func_0x0001078af888(param_5);
  if ((int)param_5 - 0x10U < 0x1c) {
    func_0x0001078b5334(&uStack_48,param_5);
    func_0x0001078af324();
    _glCompressedTexImage2D();
  }
  else {
    func_0x0001078af324();
    _glTexImage2D();
  }
  return;
}



/* Entry: 1078ac0f4; end: 1078ac1d3;  */

void FUN_1078ac0f4(undefined8 param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined4 auStack_50 [2];
  undefined4 uStack_34;
  
  func_0x0001078af318();
  uStack_34 = 0;
  _glGenBuffers(1,&uStack_34);
  piVar1 = (int *)(unaff_x20 + 0x70);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar2 = (long *)(unaff_x20 + 0x98);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = *plVar2 + param_2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  auStack_50[0] = uStack_34;
  func_0x0001078ac1d4(unaff_x20 + 0x184,auStack_50);
  puVar5 = (undefined8 *)0x8a11;
  _glBufferData(0x8a11,param_2,0,0x88e8);
  func_0x0001078af3b8();
  *puVar5 = &PTR_DAT_1109e7e78;
  *(undefined4 *)(puVar5 + 1) = auStack_50[0];
  puVar5[2] = unaff_x20;
  *(undefined1 *)(puVar5 + 3) = 1;
  puVar5[4] = param_2;
  puVar5[5] = unaff_x20;
  *unaff_x19 = puVar5;
  func_0x0001078ae59c(auStack_50);
  return;
}



/* Entry: 1078acc04; end: 1078accb7;  */

void FUN_1078acc04(long param_1,long param_2)

{
  ulong uVar1;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  if (*(int *)(param_2 + 4) == 7 && *(int *)(param_2 + 0xc) == 0) {
    lStack_48 = (ulong)lStack_48._1_7_ << 8;
    func_0x0001078af4d0();
  }
  else {
    lStack_48._0_1_ = 1;
    func_0x0001078af4d0();
    func_0x0001078ac9f4(param_1 + 0x1f8,(int *)(param_2 + 0xc));
    lStack_48 = CONCAT53(lStack_48._3_5_,*(undefined3 *)(param_2 + 0x10));
    func_0x0001078accec(param_1 + 0x203,&lStack_48);
    lStack_48 = param_1;
    lStack_40 = param_2;
    func_0x00010788f324(param_2);
    uVar1 = (ulong)*(uint *)(param_2 + 4);
    if (*(uint *)(param_2 + 4) == 0xffffffff) {
      uVar1 = 0xffffffffffffffff;
    }
    plStack_38 = &lStack_48;
    (*(code *)(&PTR_DAT_1109e73f8)[uVar1])(&plStack_38,param_2);
  }
  return;
}


