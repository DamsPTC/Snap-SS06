/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107891de0; end: 107891e47;  */

void FUN_107891de0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x48;
  __Znwm();
  func_0x00010788f854();
  *param_1 = uVar1;
  return;
}



/* Entry: 107892338; end: 10789237f;  */

void FUN_107892338(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x27d0;
  __Znwm();
  func_0x00010788b5f0();
  *param_1 = uVar1;
  return;
}



/* Entry: 107892c2c; end: 107892c8f;  */

long FUN_107892c2c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x000107892c68();
    lVar2 = uVar1 + 0x28;
  }
  else {
    lVar2 = param_1;
    func_0x000107892c90();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x28;
}



/* Entry: 107892f58; end: 107892f8b;  */

void FUN_107892f58(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x28) {
    func_0x00010725b6a4(param_2 + 8);
  }
  return;
}



/* Entry: 1078930b8; end: 1078930d3;  */

long FUN_1078930b8(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x18;
  func_0x000107892ba8(&lStack_28);
  return param_1 + 0x18;
}



/* Entry: 107893480; end: 1078934ff;  */

void FUN_107893480(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107893650();
  *param_1 = &PTR_DAT_1109e4a48;
  func_0x00010788b430();
  func_0x0001078935e8();
  *(undefined8 **)(unaff_x19 + 8) = param_1;
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar5;
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
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined1 *)(unaff_x19 + 0x28) = *(undefined1 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar5;
  return;
}



/* Entry: 107893750; end: 107893763;  */

void FUN_107893750(void)

{
  func_0x0001078936f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107893b5c; end: 107893b63;  */

undefined8 FUN_107893b5c(void)

{
  return 1;
}



/* Entry: 107893f20; end: 107893f4f;  */

undefined8 * FUN_107893f20(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e4c88;
  func_0x00010788f68c(param_1 + 1);
  return param_1;
}



/* Entry: 107894a28; end: 107894a4b;  */

void FUN_107894a28(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x000107894cdc(&uStack_11,param_1);
  return;
}



/* Entry: 107894bfc; end: 107894c9b;  */

void FUN_107894bfc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long extraout_x8;
  
  func_0x000107895eb4();
  _memcpy(extraout_x8 + (param_3 / -3) * 3);
  func_0x000107895e18();
  return;
}



/* Entry: 107894e54; end: 107894e7b;  */

void FUN_107894e54(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)0x80;
  __Znwm();
  puVar2 = (undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_1109e4d20;
  lVar3 = *(long *)(param_1 + 0x10);
  uVar4 = *puVar2;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x000107895f7c();
    } while (extraout_w10 != 0);
  }
  uVar4 = puVar2[2];
  puVar1[4] = puVar2[3];
  puVar1[3] = uVar4;
  uVar5 = puVar2[5];
  uVar4 = puVar2[4];
  uVar6 = *(undefined8 *)((long)puVar2 + 0x2b);
  *(undefined8 *)((long)puVar1 + 0x3b) = *(undefined8 *)((long)puVar2 + 0x33);
  *(undefined8 *)((long)puVar1 + 0x33) = uVar6;
  puVar1[6] = uVar5;
  puVar1[5] = uVar4;
  *(undefined8 *)((long)puVar1 + 0x44) = *(undefined8 *)((long)puVar2 + 0x3c);
  uVar5 = *(undefined8 *)((long)puVar2 + 0x4c);
  uVar4 = *(undefined8 *)((long)puVar2 + 0x44);
  *(undefined4 *)((long)puVar1 + 0x5c) = *(undefined4 *)((long)puVar2 + 0x54);
  *(undefined8 *)((long)puVar1 + 0x54) = uVar5;
  *(undefined8 *)((long)puVar1 + 0x4c) = uVar4;
  *(undefined2 *)(puVar1 + 0xc) = *(undefined2 *)(puVar2 + 0xb);
  uVar4 = puVar2[0xc];
  puVar1[0xe] = puVar2[0xd];
  puVar1[0xd] = uVar4;
  lVar3 = puVar2[0xe];
  puVar1[0xf] = lVar3;
  if (lVar3 != 0) {
    do {
      func_0x000107895f7c();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 10789600c; end: 107896167;  */

undefined1 * FUN_10789600c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  code *extraout_x8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined1 auStack_90 [24];
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010789618c(&uStack_e0,param_1 + 0x18);
  puStack_78 = (undefined8 *)0x0;
  puVar1 = (undefined8 *)0x28;
  lStack_c8 = param_1;
  __Znwm();
  *puVar1 = &PTR_DAT_1109e4dd0;
  puVar1[2] = uStack_d8;
  puVar1[1] = uStack_e0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  puVar1[3] = uStack_d0;
  puVar1[4] = param_1;
  uStack_70 = 0;
  uStack_60 = 0x4802000000;
  puStack_58 = &UNK_107896168;
  puStack_50 = &UNK_107896174;
  puVar2 = auStack_48;
  puStack_78 = puVar1;
  puStack_68 = &uStack_70;
  func_0x00010788f540(puVar2,auStack_90);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0x42000000;
  puStack_a8 = &UNK_10789617c;
  puStack_a0 = &UNK_1109e4d90;
  puStack_98 = &uStack_70;
  func_0x00010788831c();
  _objc_msgSend(param_2,puVar2,&puStack_b8);
  func_0x000107896444();
  func_0x00010788f648(auStack_48);
  puVar3 = auStack_90;
  func_0x00010788f648();
  func_0x000107896424();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar3 = auStack_90;
  func_0x00010788f648();
  func_0x000107896424();
  func_0x000107896434();
  puVar4 = *(undefined1 **)(puVar2 + 0x40);
  if (puVar4 == (undefined1 *)0x0) {
    *(undefined8 *)(puVar3 + 0x40) = 0;
  }
  else if (puVar4 == puVar2 + 0x28) {
    func_0x0001078908a4();
    (*extraout_x8)();
  }
  else {
    *(undefined1 **)(puVar3 + 0x40) = puVar4;
    *(undefined8 *)(puVar2 + 0x40) = 0;
  }
  return puVar3 + 0x28;
}



/* Entry: 10789639c; end: 1078963d3;  */

long FUN_10789639c(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109e4e30);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1078965c0; end: 1078965c7;  */

void FUN_1078965c0(void)

{
  return;
}



/* Entry: 107896830; end: 10789698f;  */

void FUN_107896830(uint *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107896848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10deb150f)[*param_1] * 4 + 0x10789684c))();
  return;
}



/* Entry: 107898008; end: 107898013;  */

void FUN_107898008(long param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 0;
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104c01bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x000104c00420();
  return;
}



/* Entry: 10789826c; end: 1078983ef;  */

void FUN_10789826c(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lStack_80;
  undefined1 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  plStack_70 = (long *)0x0;
  uStack_68 = 0;
  lStack_80 = param_1 + 0x88;
  uStack_78 = 1;
  func_0x0001072ab574();
  while ((puVar2 = (ulong *)(param_1 + 0x78), plVar4 = (long *)(param_1 + 0x60),
         lVar3 = param_1 + 0x58, *(long *)(param_1 + 0x80) != 0 ||
         (puVar2 = (ulong *)(param_1 + 0x48), plVar4 = (long *)(param_1 + 0x30),
         lVar3 = param_1 + 0x28, *(long *)(param_1 + 0x50) != 0))) {
    puVar1 = (undefined8 *)(*(long *)(*plVar4 + (*puVar2 >> 8) * 8) + (*puVar2 & 0xff) * 0x10);
    uVar6 = puVar1[1];
    plVar4 = (long *)*puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    uStack_58 = uStack_68;
    plStack_60 = plStack_70;
    plStack_70 = plVar4;
    uStack_68 = uVar6;
    func_0x000107898790(&plStack_60);
    func_0x000107898790(*(long *)(*(long *)(lVar3 + 8) + (*(ulong *)(lVar3 + 0x20) >> 8) * 8) +
                        (*(ulong *)(lVar3 + 0x20) & 0xff) * 0x10);
    uVar5 = *(long *)(lVar3 + 0x20) + 1;
    *(long *)(lVar3 + 0x28) = *(long *)(lVar3 + 0x28) + -1;
    *(ulong *)(lVar3 + 0x20) = uVar5;
    if (0x1ff < uVar5) {
      __ZdlPv(**(undefined8 **)(lVar3 + 8));
      *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 8;
      *(long *)(lVar3 + 0x20) = *(long *)(lVar3 + 0x20) + -0x100;
    }
    func_0x0001078986fc(&lStack_80);
    (**(code **)(*plStack_70 + 0x10))();
    uStack_58 = uStack_68;
    plStack_60 = plStack_70;
    plStack_70 = (long *)0x0;
    uStack_68 = 0;
    func_0x000107898790(&plStack_60);
    func_0x000107898738(&lStack_80);
  }
  func_0x00010735fc14(&lStack_80);
  func_0x00010789951c();
  return;
}



/* Entry: 1078986fc; end: 1078987b7;  */

long FUN_1078986fc(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    lVar1 = *param_1;
    __ZNSt3__15mutex6unlockEv(lVar1);
    *(undefined1 *)(param_1 + 1) = 0;
    return lVar1;
  }
  plVar2 = (long *)0x1;
  __ZNSt3__120__throw_system_errorEiPKc(1,&UNK_10f406df1);
  lVar1 = *plVar2;
  if (lVar1 == 0) {
    __ZNSt3__120__throw_system_errorEiPKc(1,&UNK_10f2e1659);
  }
  else if ((char)plVar2[1] != '\x01') {
    func_0x0001072ab574();
    *(undefined1 *)(plVar2 + 1) = 1;
    return lVar1;
  }
  lVar1 = 0xb;
  __ZNSt3__120__throw_system_errorEiPKc(0xb,&UNK_10f2e1682);
  if (*(long *)(lVar1 + 8) != 0) {
    func_0x0001000df548();
  }
  return lVar1;
}



/* Entry: 107898a38; end: 107898a5f;  */

long FUN_107898a38(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar1 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) * 0x20 + -1;
  }
  return lVar1 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
}



/* Entry: 107898eec; end: 107898f0f;  */

void FUN_107898eec(void)

{
  func_0x000107898f10();
  return;
}



/* Entry: 107899058; end: 10789905b;  */

void FUN_107899058(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e5868;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10789915c; end: 107899173;  */

void FUN_10789915c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1078992b8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078992b8; end: 1078992db;  */

undefined8 FUN_1078992b8(undefined8 param_1)

{
  func_0x0001078992dc(param_1,0);
  return param_1;
}



/* Entry: 1078993a0; end: 1078993b3;  */

void FUN_1078993a0(void)

{
  func_0x000107899364();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078996ec; end: 1078997b3;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x000107899764 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

long FUN_1078996ec(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar1 = param_2;
  func_0x000105302f48(param_2,param_5);
  _CFRunLoopGetCurrent();
  *(long *)(param_2 + 0x20) = lVar1;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  lStack_58 = param_2;
  func_0x0001078995b8(param_3);
  uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  _CFRunLoopTimerCreate(param_1,(double)param_4 / 1000000000.0,uVar2,0,0,&UNK_1078997b4,&uStack_60);
  *(undefined8 *)(param_2 + 0x28) = uVar2;
  _CFRunLoopAddTimer(*(undefined8 *)(param_2 + 0x20),uVar2,
                     *(undefined8 *)PTR__kCFRunLoopDefaultMode_11034abe8);
  return param_2;
}



/* Entry: 107899e5c; end: 107899eb3;  */

undefined8 FUN_107899e5c(void)

{
  int iVar1;
  
  if ((bRam00000001138244e0 & 1) == 0) {
    iVar1 = 0x138244e0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010789981c(0x1138244a8);
      ___cxa_guard_release(0x1138244e0);
    }
  }
  return 0x1138244a8;
}



/* Entry: 10789a02c; end: 10789a0bb;  */

/* WARNING: Possible PIC construction at 0x00010789a07c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010789a080) */
/* WARNING: Removing unreachable block (ram,0x00010789a0a8) */
/* WARNING: Removing unreachable block (ram,0x00010789a094) */

undefined8 * FUN_10789a02c(undefined8 *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  int extraout_w10;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_148 [8];
  undefined8 *puStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined1 auStack_d0 [24];
  undefined8 auStack_b8 [4];
  undefined8 uStack_98;
  undefined **appuStack_48 [3];
  undefined ***pppuStack_30;
  
  func_0x00010789b06c();
  *param_1 = &PTR_DAT_1109e5ac8;
  pppuStack_30 = appuStack_48;
  appuStack_48[0] = &PTR_DAT_1109e3f18;
  func_0x00010789b06c();
  puVar1 = (undefined8 *)0x50;
  uStack_98 = extraout_x8;
  __Znwm();
  func_0x000105302f48(auStack_b8,appuStack_48);
  func_0x00010002b838(auStack_d0,&UNK_10f4328ba);
  func_0x00010789a8e4(puVar1,auStack_b8,auStack_d0,param_2);
  param_1[1] = puVar1;
  func_0x00010789b0d8();
  puVar2 = auStack_b8;
  func_0x0001006393ec();
  func_0x00010789b058(uStack_98);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010789b0d8();
    func_0x0001006393ec(auStack_b8);
    __ZdlPv();
    func_0x00010789b100();
    lVar3 = puVar1[1];
    *puVar1 = &PTR_DAT_1109e5ac8;
    puVar1[1] = 0;
    if (lVar3 != 0) {
      if (*(long *)(lVar3 + 0x38) != 0) {
        func_0x00010789a8ac(lVar3);
      }
      __ZNSt3__17promiseIvEC1Ev(auStack_148);
      func_0x00010789ad44(lVar3 + 0x30);
      uVar4 = *(undefined8 *)(lVar3 + 0x48);
      func_0x000107898fb8(&puStack_140);
      *(undefined1 *)puStack_140 = 0;
      puVar2 = (undefined8 *)0x80;
      __Znwm();
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_DAT_1109e5b48;
      puStack_130 = puStack_140;
      puStack_128 = (undefined8 *)lStack_138;
      if (lStack_138 != 0) {
        do {
          func_0x00010789b090();
        } while (extraout_w10 != 0);
      }
      puVar2[3] = &PTR_DAT_1109e5b98;
      __ZNSt3__115recursive_mutexC1Ev(puVar2 + 4);
      puVar2[0xc] = puStack_140;
      puVar2[0xd] = lStack_138;
      puStack_130 = (undefined8 *)0x0;
      puStack_128 = (undefined8 *)0x0;
      puVar2[0xe] = auStack_148;
      func_0x00010789b0d0();
      puStack_130 = puVar2 + 3;
      puStack_128 = puVar2;
      func_0x00010789b0c0();
      func_0x00010789895c(uVar4,0,&puStack_130);
      func_0x00010789b0c8();
      __ZNSt3__17promiseIvE10get_futureEv(&puStack_130,auStack_148);
      __ZNSt3__16futureIvE3getEv(&puStack_130);
      __ZNSt3__16futureIvED1Ev(&puStack_130);
      func_0x00010789846c(*(undefined8 *)(lVar3 + 0x48));
      __ZNSt3__16thread4joinEv(lVar3 + 0x28);
      __ZNSt3__17promiseIvED1Ev(auStack_148);
      func_0x00010787b3fc(lVar3 + 0x40);
      func_0x00010787b3fc((long *)(lVar3 + 0x38));
      __ZNSt3__16futureIvED1Ev(lVar3 + 0x30);
      __ZNSt3__16threadD1Ev(lVar3 + 0x28);
      func_0x00010724b54c(lVar3);
      __ZdlPv();
    }
    return puVar1;
  }
  return puVar2;
}



/* Entry: 10789a744; end: 10789a8a3;  */

void FUN_10789a744(long param_1)

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
  func_0x00010787b420(lVar3 + 0x38,puVar1);
  func_0x00010787b3fc(&puStack_50);
  func_0x00010789af18(&puStack_50);
  puVar1 = puStack_50;
  puStack_50 = (undefined8 *)0x0;
  func_0x00010787b420(lVar3 + 0x40,puVar1);
  func_0x00010787b3fc(&puStack_50);
  __ZNSt3__17promiseIvE10get_futureEv(auStack_68,*(undefined8 *)(lVar3 + 0x38));
  func_0x00010789ad44(lVar3 + 0x30);
  uVar2 = *(undefined8 *)(lVar3 + 0x48);
  func_0x000107898fb8(&puStack_60);
  *(undefined1 *)puStack_60 = 0;
  puVar1 = (undefined8 *)0x80;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_1109e5c20;
  puStack_50 = puStack_60;
  puStack_48 = (undefined8 *)lStack_58;
  if (lStack_58 != 0) {
    do {
      func_0x00010789b090();
    } while (extraout_w10 != 0);
  }
  puVar1[3] = &PTR_DAT_1109e5c70;
  __ZNSt3__115recursive_mutexC1Ev(puVar1 + 4);
  puVar1[0xc] = puStack_60;
  puVar1[0xd] = lStack_58;
  puStack_50 = (undefined8 *)0x0;
  puStack_48 = (undefined8 *)0x0;
  puVar1[0xe] = lVar3;
  func_0x00010789b0d0();
  puStack_50 = puVar1 + 3;
  puStack_48 = puVar1;
  func_0x00010789b0c0();
  func_0x00010789895c(uVar2,1,&puStack_50);
  func_0x00010789b0c8();
  __ZNSt3__16futureIvE3getEv(auStack_68);
  func_0x00010789b0a8();
  return;
}



/* Entry: 10789ad50; end: 10789ad63;  */

void FUN_10789ad50(void)

{
  func_0x00010789ae10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10789ae84; end: 10789ae97;  */

void FUN_10789ae84(void)

{
  func_0x00010789aec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10789af88; end: 10789affb;  */

void FUN_10789af88(void)

{
  long unaff_x19;
  long lVar1;
  undefined1 auStack_28 [8];
  
  func_0x00010789b07c();
  if ((**(byte **)(unaff_x19 + 0x48) & 1) == 0) {
    lVar1 = *(long *)(unaff_x19 + 0x58);
    __ZNSt3__17promiseIvE10get_futureEv(auStack_28,*(undefined8 *)(lVar1 + 0x40));
    __ZNSt3__17promiseIvE9set_valueEv(*(undefined8 *)(lVar1 + 0x38));
    __ZNSt3__16futureIvE3getEv(auStack_28);
    func_0x00010789b0a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x19 + 8);
  return;
}



/* Entry: 10789b35c; end: 10789b36f;  */

void FUN_10789b35c(void)

{
  func_0x00010789b314();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10789bd70; end: 10789bd83;  */

/* WARNING: Removing unreachable block (ram,0x00010789be88) */

void FUN_10789bd70(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char *pcVar2;
  undefined8 *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x8;
  long lVar4;
  long extraout_x8_00;
  int extraout_w10;
  long alStack_98 [2];
  undefined8 auStack_88 [4];
  undefined8 *apuStack_68 [4];
  undefined8 uStack_48;
  
  pcVar2 = *(char **)(param_1 + 8);
  UNRECOVERED_JUMPTABLE = (code *)&UNK_10789bf00;
  func_0x00010789e4ec();
  uVar1 = *pcVar2 == '\x01';
  uStack_48 = extraout_x8;
  if ((bool)uVar1) {
    lVar4 = *(long *)(pcVar2 + 8);
    if (lVar4 != 0) {
      func_0x00010789e5b0();
      if (extraout_x8_00 != 0) {
        do {
          func_0x00010789e4dc();
        } while (extraout_w10 != 0);
      }
      func_0x00010724bb70(alStack_98);
      if (alStack_98[0] != 0) {
        puVar3 = auStack_88;
        func_0x00010740f0c4(puVar3,param_2);
        func_0x00010789e778();
        func_0x00010740f0c4(apuStack_68,auStack_88);
        *puVar3 = &PTR_FUN_1109e6108;
        puVar3[1] = lVar4 + 0x10;
        puVar3[2] = UNRECOVERED_JUMPTABLE;
        puVar3[3] = 0;
        func_0x00010740f0c4(puVar3 + 4,apuStack_68);
        func_0x00010724bfc0(apuStack_68);
        apuStack_68[0] = puVar3;
        func_0x00010724bfc0(auStack_88);
        func_0x00010789e624();
        puVar3 = apuStack_68[0];
        apuStack_68[0] = (undefined8 *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
          func_0x00010789e4d0();
        }
      }
      func_0x00010789e5a0();
      func_0x00010789e598();
    }
  }
  else if (*(long *)(pcVar2 + 0x10) != 0) {
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
  puVar3 = apuStack_68[0];
  apuStack_68[0] = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
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



/* Entry: 10789c210; end: 10789c21f;  */

void FUN_10789c210(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010789c21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0xb8))();
  return;
}



/* Entry: 10789c578; end: 10789c5ab;  */

void FUN_10789c578(void)

{
  func_0x00010789e5bc();
  func_0x00010789e6fc();
  func_0x00010789e544();
  func_0x00010789e584();
  return;
}



/* Entry: 10789cb98; end: 10789cbc3;  */

void FUN_10789cb98(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  lVar1 = param_2[2];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x00010789e4dc();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10789cd2c; end: 10789cd87;  */

void FUN_10789cd2c(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined1 auStack_b0 [128];
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  func_0x00010789e760();
  if ((bool)in_ZR) {
    func_0x0001075281c8(auStack_b0);
    uStack_30 = *(undefined8 *)(param_2 + 0x80);
    uStack_28 = 1;
  }
  func_0x000107318348(unaff_x19 + 8,auStack_b0);
  func_0x00010789e6d4();
  return;
}



/* Entry: 10789ce98; end: 10789cee7;  */

void FUN_10789ce98(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined1 auStack_b0 [136];
  undefined1 uStack_28;
  
  func_0x00010789e760();
  if ((bool)in_ZR) {
    func_0x00010731b3a8(auStack_b0);
    uStack_28 = 1;
  }
  func_0x00010789c9fc(unaff_x19 + 8,auStack_b0);
  func_0x00010789e6d4();
  return;
}



/* Entry: 10789d0cc; end: 10789d0e7;  */

void FUN_10789d0cc(void)

{
  func_0x00010789e714();
  return;
}



/* Entry: 10789d210; end: 10789d267;  */

/* WARNING: Possible PIC construction at 0x00010789d230: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010789d234) */

void FUN_10789d210(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + 0x48);
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



/* Entry: 10789d354; end: 10789d36f;  */

void FUN_10789d354(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010789d370(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10789d598; end: 10789d5ab;  */

void FUN_10789d598(void)

{
  func_0x00010789d608();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10789db50; end: 10789db87;  */

long * FUN_10789db50(long *param_1)

{
  func_0x0001073ada2c(*(undefined8 *)*param_1);
  func_0x00010789d370(*param_1 + 0x10);
  return param_1;
}



/* Entry: 10789ddbc; end: 10789dddf;  */

undefined8 * FUN_10789ddbc(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109e6008;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010789e4dc();
    } while (extraout_w10 != 0);
  }
  param_2[3] = puVar1[2];
  func_0x00010724cbe8(param_2 + 4,puVar1 + 3);
  return param_2;
}



/* Entry: 10789dfb8; end: 10789e023;  */

void FUN_10789dfb8(long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    pcVar2 = *(code **)(*plVar1 + ((ulong)pcVar2 & 0xffffffff));
  }
  uStack_28 = *(undefined8 *)(param_1 + 0x2c0);
  uStack_30 = *(undefined8 *)(param_1 + 0x2b8);
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  (*pcVar2)(plVar1,param_1 + 0x20,param_1 + 0x218,param_1 + 0x298,&uStack_30);
  func_0x00010789e6cc();
  return;
}



/* Entry: 10789e1d8; end: 10789e1db;  */

undefined8 * FUN_10789e1d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e6108;
  func_0x00010724bfc0(param_1 + 4);
  return param_1;
}



/* Entry: 10789e2e8; end: 10789e2fb;  */

void FUN_10789e2e8(void)

{
  func_0x00010789e320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10789e458; end: 10789e46b;  */

void FUN_10789e458(void)

{
  func_0x00010789e490();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10789e9a4; end: 10789e9a7;  */

undefined8 * FUN_10789e9a4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109b9938;
  func_0x00010752607c(param_1 + 1);
  return param_1;
}



/* Entry: 10789ea88; end: 10789eaa7;  */

void FUN_10789ea88(undefined8 *param_1)

{
  func_0x00010789ed10();
  *param_1 = &PTR_DAT_1109e6310;
  return;
}



/* Entry: 10789eccc; end: 10789ecf7;  */

void FUN_10789eccc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010789ed7c(param_2,param_1,&PTR_DAT_1109e63f0);
  func_0x00010789ed40();
  return;
}



/* Entry: 10789ef3c; end: 10789ef43;  */

void FUN_10789ef3c(void)

{
  return;
}



/* Entry: 10789f53c; end: 10789f53f;  */

undefined8 * FUN_10789f53c(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_1109e6470;
  param_1[1] = 0;
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x28) != 0) {
      func_0x00010789fa74(lVar2);
    }
    __ZNSt3__17promiseIvEC1Ev(auStack_78);
    func_0x00010789ad44(lVar2 + 0x20);
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



/* Entry: 10789faac; end: 10789fb1b;  */

/* WARNING: Possible PIC construction at 0x00010789fae4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010789fdf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010789fae8) */
/* WARNING: Removing unreachable block (ram,0x00010789fb04) */
/* WARNING: Removing unreachable block (ram,0x00010789fb18) */
/* WARNING: Removing unreachable block (ram,0x00010789faf8) */
/* WARNING: Removing unreachable block (ram,0x0001078a01e4) */
/* WARNING: Removing unreachable block (ram,0x00010789fdf4) */
/* WARNING: Removing unreachable block (ram,0x00010789fe28) */
/* WARNING: Removing unreachable block (ram,0x00010789fe40) */
/* WARNING: Removing unreachable block (ram,0x00010789fe50) */
/* WARNING: Removing unreachable block (ram,0x00010789fe10) */

long ** FUN_10789faac(long **param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 in_ZR;
  long **pplVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 extraout_x8;
  long *plVar11;
  long *plStack_250;
  long *plStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [240];
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  long **pplStack_130;
  long **pplStack_128;
  undefined1 **ppuStack_120;
  undefined *puStack_118;
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  long **pplStack_e8;
  undefined1 auStack_e0 [32];
  undefined8 uStack_c0;
  undefined1 auStack_b8 [32];
  undefined8 uStack_98;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [40];
  
  func_0x0001078a0154();
  func_0x00010724cbe8(auStack_48);
  uStack_58 = 0x10789fae8;
  pplVar5 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x0001078a0154();
  uStack_98 = extraout_x8;
  func_0x00010724b408(pplVar5);
  pplVar5 = param_1 + 3;
  param_1[4] = (long *)0x0;
  *pplVar5 = (long *)0x0;
  param_1[7] = (long *)0x0;
  param_1[6] = (long *)0x0;
  param_1[5] = (long *)0x0;
  __ZNSt3__17promiseIvEC1Ev(&uStack_100);
  __ZNSt3__17promiseIvE10get_futureEv(&pplStack_e8,&uStack_100);
  func_0x00010787b1b0(param_1 + 4,&pplStack_e8);
  __ZNSt3__16futureIvED1Ev(&pplStack_e8);
  pplStack_e8 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_e0,param_3);
  uStack_c0 = uStack_100;
  uStack_100 = 0;
  func_0x000105302f48(auStack_b8,auStack_48);
  uVar6 = 8;
  __Znwm();
  __ZNSt3__115__thread_structC1Ev();
  puVar7 = (undefined8 *)0x58;
  uStack_f0 = uVar6;
  __Znwm();
  uStack_f0 = 0;
  *puVar7 = uVar6;
  puVar7[1] = pplStack_e8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar7 + 2,auStack_e0);
  puVar7[6] = uStack_c0;
  uStack_c0 = 0;
  func_0x000105302f48(puVar7 + 7,auStack_b8);
  puVar8 = auStack_108;
  puStack_f8 = puVar7;
  func_0x000100489040(puVar8,&UNK_10789fd34,puVar7);
  if ((int)puVar8 != 0) {
    __ZNSt3__120__throw_system_errorEiPKc();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10789fc90);
    (*pcVar4)();
  }
  puStack_f8 = (undefined8 *)0x0;
  func_0x00010789fe88(&puStack_f8);
  func_0x0001004895c8(&uStack_f0);
  func_0x0001004895f4(pplVar5,auStack_108);
  __ZNSt3__16threadD1Ev(auStack_108);
  func_0x00010789fec4(&pplStack_e8);
  puVar9 = &uStack_100;
  __ZNSt3__17promiseIvED1Ev();
  func_0x0001078a0140(uStack_98);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001004895c8(puVar7);
  __ZdlPv();
  func_0x0001004895c8(&uStack_f0);
  func_0x00010789fec4(&pplStack_e8);
  __ZNSt3__17promiseIvED1Ev(&uStack_100);
  func_0x00010787b3fc(param_1 + 6);
  func_0x00010787b3fc(param_1 + 5);
  __ZNSt3__16futureIvED1Ev(param_1 + 4);
  __ZNSt3__16threadD1Ev(pplVar5);
  func_0x00010724b54c(param_1);
  puVar10 = puVar9;
  __Unwind_Resume();
  puStack_118 = &UNK_10789fd34;
  puStack_140 = puVar7;
  puStack_138 = puVar9;
  pplStack_130 = pplVar5;
  pplStack_128 = param_1;
  ppuStack_120 = &puStack_60;
  func_0x0001078a0154();
  __ZNSt3__119__thread_local_dataEv();
  *puVar10 = 0;
  func_0x000100491558();
  plVar11 = (long *)puVar10[1];
  func_0x0001078bba88(puVar10 + 2);
  if (puVar10[10] != 0) {
    func_0x000104c003e8(puVar10 + 7);
  }
  func_0x0001078980a4(auStack_230);
  plVar11[7] = (long)auStack_230;
  plStack_248 = plVar11 + 2;
  puVar7 = (undefined8 *)*plVar11;
  uStack_238 = puVar7[1];
  uStack_240 = *puVar7;
  if (puVar7[1] != 0) {
    plVar1 = (long *)(puVar7[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_250 = plVar11;
  func_0x00010724ae28(&uStack_240);
  func_0x0001073ada24(*plVar11,auStack_230);
  __ZNSt3__17promiseIvE9set_valueEv(puVar10 + 6);
  _CFRunLoopRun();
  plVar11[7] = 0;
  func_0x0001073ada2c(*plStack_250);
  return &plStack_250;
}



/* Entry: 10789ff1c; end: 10789ff2f;  */

void FUN_10789ff1c(void)

{
  func_0x00010789ff8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078a003c; end: 1078a004f;  */

void FUN_1078a003c(void)

{
  func_0x0001078a0130();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078a08b8; end: 1078a08ef;  */

void FUN_1078a08b8(void)

{
  func_0x0001078a3490();
  return;
}



/* Entry: 1078a1520; end: 1078a1533;  */

void FUN_1078a1520(void)

{
  func_0x0001078a164c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078a16b8; end: 1078a1757;  */

void FUN_1078a16b8(long param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar2 = (long *)(param_1 + 0x70);
  plVar3 = plVar2;
  plVar5 = plVar2;
  while (plVar4 = (long *)*plVar3, plVar4 != (long *)0x0) {
    lVar1 = 8;
    if (param_2 <= (ulong)plVar4[4]) {
      lVar1 = 0;
    }
    plVar3 = (long *)((long)plVar4 + lVar1);
    if (param_2 <= (ulong)plVar4[4]) {
      plVar5 = plVar4;
    }
  }
  if ((plVar2 != plVar5) && ((ulong)plVar5[4] <= param_2)) {
    plVar2 = plVar5;
    func_0x00010002c7d4();
    if (*(long **)(param_1 + 0x68) == plVar5) {
      *(long **)(param_1 + 0x68) = plVar2;
    }
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + -1;
    func_0x00010530d618(*(undefined8 *)(param_1 + 0x70),plVar5);
    func_0x0001072aca78(plVar5 + 5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar5);
    return;
  }
  return;
}



/* Entry: 1078a1938; end: 1078a1bf3;  */

void FUN_1078a1938(long param_1,byte *param_2)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  undefined4 **ppuVar4;
  char *pcVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined4 **ppuStack_168;
  undefined4 uStack_160;
  undefined4 *puStack_158;
  ulong uStack_150;
  undefined4 uStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_110;
  undefined1 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [24];
  undefined4 auStack_d0 [6];
  undefined4 uStack_b8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  plVar7 = *(long **)(*(long *)(param_1 + 0x218) + 0x58);
  auStack_d0[0] = 0x173;
  uStack_b8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  lVar3 = param_1;
  func_0x0001078a3318();
  if ((ulong)*(byte *)(lVar3 + 0x18) < 9) {
    pcVar5 = (&PTR_s_unknown_1109e6b10)[*(byte *)(lVar3 + 0x18)];
  }
  else {
    pcVar5 = "";
  }
  func_0x00010002b838(auStack_e8,pcVar5);
  func_0x00010726e300(auStack_d0,"kind",auStack_e8);
  ppuStack_168 = (undefined4 **)(*(long *)(param_1 + 0x210) / 1000);
  func_0x0001078a34d4();
  func_0x0001078a3360();
  func_0x0001078a33e8();
  func_0x0001078a3468();
  if (*(char *)(param_1 + 0x120) == '\x01') {
    iVar1 = 0x10002;
    if (*param_2 - 1 < 3) {
      iVar1 = (*param_2 - 1 & 0xff) + 0x10003;
    }
    if ((*(char **)(param_2 + 0x10) == (char *)0x0) || (**(char **)(param_2 + 0x10) == '\x01')) {
      auStack_d0[0] = *(undefined4 *)(param_1 + 0xe8);
      uStack_b8 = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
      func_0x0001078a3318();
      func_0x0001078a2054(auStack_d0,iVar1);
      if (*(char *)(param_1 + 0x118) == '\x01') {
        plVar8 = (long *)(param_1 + 0x100);
        while (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0) {
          uStack_150 = (ulong)(plVar8 + 2);
          puStack_158 = auStack_d0;
          if (*(int *)(plVar8 + 8) == -1) {
            func_0x00010563ab98();
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1078a1bb4);
            (*pcVar2)();
          }
          uVar6 = (ulong)*(uint *)(plVar8 + 8);
          if (*(uint *)(plVar8 + 8) == 0xffffffff) {
            uVar6 = 0xffffffffffffffff;
          }
          ppuStack_168 = &puStack_158;
          (*(code *)(&PTR_DAT_1109e6850)[uVar6])(&ppuStack_168,plVar8 + 5);
        }
      }
      func_0x0001078a34d4();
      func_0x0001078a3360();
      func_0x0001078a3468();
    }
    puStack_158._0_4_ = 7;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    ppuStack_138 = &PTR_DAT_110996720;
    uStack_130 = 0;
    uStack_118 = 7;
    uStack_110 = 0;
    uStack_10c = 1;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_108 = 0;
    uVar6 = (ulong)*(uint *)(param_1 + 0xe8);
    func_0x00010741a9b4(uVar6);
    ppuVar4 = &puStack_158;
    func_0x00010729d56c(ppuVar4,&UNK_10f4329d6,uVar6);
    func_0x0001072a0318();
    func_0x0001078a2054();
    func_0x00010726e6c0(auStack_d0,ppuVar4);
    func_0x000107262330(&puStack_158);
    puStack_158 = (undefined4 *)CONCAT44(puStack_158._4_4_,1);
    uStack_150 = uStack_150 & 0xffffffff00000000;
    ppuStack_168 = (undefined4 **)*plVar7;
    uStack_160 = 3;
    func_0x00010743fa9c(plVar7,auStack_d0,&puStack_158,&ppuStack_168,7);
    func_0x0001078a3468();
  }
  func_0x0001078a1fb4(param_1,&UNK_10789ee64,0,param_2);
  return;
}



/* Entry: 1078a1edc; end: 1078a1f03;  */

void FUN_1078a1edc(undefined8 param_1)

{
  func_0x0001078a3400();
  func_0x0001078a3348(param_1,&PTR_DAT_1109e6840);
  func_0x0001078a32fc();
  return;
}



/* Entry: 1078a2180; end: 1078a21c3;  */

void FUN_1078a2180(void)

{
  func_0x0001078a3154();
  func_0x000107394088();
  func_0x0001078a326c();
  return;
}



/* Entry: 1078a2348; end: 1078a237f;  */

undefined8 FUN_1078a2348(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x850;
  __Znwm(0x850);
  func_0x0001078a2594();
  return uVar1;
}



/* Entry: 1078a2638; end: 1078a263b;  */

void FUN_1078a2638(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078a26d4; end: 1078a270b;  */

undefined8 FUN_1078a26d4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x438;
  __Znwm(0x438);
  func_0x0001078a2828();
  return uVar1;
}



/* Entry: 1078a2914; end: 1078a2917;  */

void FUN_1078a2914(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e69f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078a2a54; end: 1078a2c63;  */

undefined1 * FUN_1078a2a54(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  undefined8 **ppuVar3;
  undefined8 extraout_x8;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
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
  undefined1 uStack_151;
  undefined1 auStack_150 [232];
  undefined8 uStack_68;
  
  ppuVar3 = &puStack_1c0;
  puVar5 = param_1;
  func_0x0001078a320c();
  puStack_1c0 = puVar5;
  uStack_68 = extraout_x8;
  __ZNSt3__119__thread_local_dataEv();
  *param_1 = 0;
  func_0x000100491558();
  puVar5 = (undefined8 *)param_1[1];
  func_0x0001078bba88(param_1 + 2);
  if (param_1[0x16] != 0) {
    func_0x000104c003e8(param_1 + 0x13);
  }
  func_0x0001078980a4(auStack_150);
  puVar5[0x16] = auStack_150;
  uVar7 = param_1[6];
  uVar6 = param_1[5];
  param_1[5] = 0;
  param_1[6] = 0;
  uVar9 = param_1[8];
  uVar8 = param_1[7];
  param_1[7] = 0;
  param_1[8] = 0;
  uVar11 = param_1[10];
  uVar10 = param_1[9];
  param_1[9] = 0;
  param_1[10] = 0;
  uVar13 = param_1[0xc];
  uVar12 = param_1[0xb];
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  uVar15 = param_1[0xe];
  uVar14 = param_1[0xd];
  uVar1 = param_1[0xf];
  uVar2 = param_1[0x10];
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  lVar4 = param_1[0x11];
  puVar5[3] = uVar7;
  puVar5[2] = uVar6;
  puVar5[5] = uVar9;
  puVar5[4] = uVar8;
  puVar5[7] = uVar11;
  puVar5[6] = uVar10;
  puVar5[9] = uVar13;
  puVar5[8] = uVar12;
  puVar5[0xb] = uVar15;
  puVar5[10] = uVar14;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  uStack_1b0 = 0;
  puVar5[0xc] = uVar1;
  puVar5[0xd] = uVar2;
  puVar5[0x11] = 0;
  puVar5[0x10] = 0;
  puVar5[0xf] = puVar5 + 0x10;
  uStack_151 = 0;
  lVar4 = lVar4 + 0x920;
  puStack_1b8 = puVar5;
  func_0x00010724e2c8(lVar4,&uStack_151);
  *(char *)(puVar5 + 0xe) = (char)lVar4;
  func_0x0001072aeba4(&uStack_1b0);
  func_0x0001078a33a0();
  func_0x0001078a33c8();
  func_0x0001078a3388();
  func_0x0001078a3380();
  func_0x0001073ada24(*puVar5,auStack_150);
  __ZNSt3__17promiseIvE9set_valueEv(param_1 + 0x12);
  _CFRunLoopRun();
  puVar5[0x16] = 0;
  func_0x0001078a2cc4(&puStack_1b8);
  func_0x0001078983f0(auStack_150);
  func_0x0001078a2d24();
  func_0x0001078a3168(uStack_68);
  if ((bool)in_ZR) {
    return (undefined1 *)0x0;
  }
  ___stack_chk_fail();
  func_0x0001078983f0(auStack_150);
  func_0x0001078a2d24();
  func_0x0001078a323c();
  func_0x0001078a2c88(*(undefined8 *)((long)ppuVar3 + 8));
  return (undefined1 *)ppuVar3;
}



/* Entry: 1078a2eb8; end: 1078a2ed3;  */

void FUN_1078a2eb8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x0001078a2ed4(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078a3128; end: 1078a34fb;  */

void FUN_1078a3128(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e6a88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078a3c78; end: 1078a3cab;  */

void FUN_1078a3c78(long param_1)

{
  undefined1 uStack_41;
  
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  func_0x00010563ab98();
  if (*(int *)(param_1 + 8) == 1) {
    return;
  }
  func_0x00010563ab98();
  if (*(uint *)(param_1 + 8) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1109e6b68)[*(uint *)(param_1 + 8)])(&uStack_41,param_1);
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}



/* Entry: 1078a3f84; end: 1078a3fbf;  */

void FUN_1078a3f84(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x100;
  __Znwm();
  func_0x0001078a696c();
  *param_1 = uVar1;
  return;
}



/* Entry: 1078a46f0; end: 1078a4853;  */

void FUN_1078a46f0(long param_1)

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
  
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 0xf8);
  func_0x00010789af18(&puStack_50);
  puVar1 = puStack_50;
  puStack_50 = (undefined8 *)0x0;
  func_0x00010787b420(lVar3 + 0x100,puVar1);
  func_0x00010787b3fc(&puStack_50);
  func_0x00010789af18(&puStack_50);
  puVar1 = puStack_50;
  puStack_50 = (undefined8 *)0x0;
  func_0x00010787b420(lVar3 + 0x108,puVar1);
  func_0x00010787b3fc(&puStack_50);
  __ZNSt3__17promiseIvE10get_futureEv(auStack_68,*(undefined8 *)(lVar3 + 0x100));
  func_0x00010789ad44(lVar3 + 0xf8);
  uVar2 = *(undefined8 *)(lVar3 + 0x110);
  func_0x000107898fb8(&puStack_60);
  *(undefined1 *)puStack_60 = 0;
  puVar1 = (undefined8 *)0x80;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_1109e6f18;
  puStack_50 = puStack_60;
  puStack_48 = (undefined8 *)lStack_58;
  if (lStack_58 != 0) {
    do {
      func_0x0001078a72dc();
    } while (extraout_w10 != 0);
  }
  puVar1[3] = &PTR_DAT_1109e6f68;
  __ZNSt3__115recursive_mutexC1Ev(puVar1 + 4);
  puVar1[0xc] = puStack_60;
  puVar1[0xd] = lStack_58;
  puStack_50 = (undefined8 *)0x0;
  puStack_48 = (undefined8 *)0x0;
  puVar1[0xe] = lVar3;
  func_0x0001078a73e0();
  puStack_50 = puVar1 + 3;
  puStack_48 = puVar1;
  func_0x0001078a73d0();
  func_0x00010789895c(uVar2,1,&puStack_50);
  func_0x0001078a73d8();
  __ZNSt3__16futureIvE3getEv(auStack_68);
  func_0x0001078a73a8();
  return;
}



/* Entry: 1078a4f38; end: 1078a4f5f;  */

long FUN_1078a4f38(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x0001078a4f60();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1078a5020; end: 1078a5153;  */

void FUN_1078a5020(long param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  long alStack_b8 [2];
  undefined1 auStack_a8 [56];
  undefined8 *apuStack_70 [7];
  undefined8 uStack_38;
  
  func_0x0001078a74a4();
  func_0x0001078a72c0();
  uVar3 = *(char *)(param_1 + 0x28) == '\x01';
  if ((bool)uVar3) {
    plVar5 = *(long **)(unaff_x21 + 8);
    func_0x0001078a7288(extraout_x8_00);
    if ((bool)uVar3) {
      func_0x000107262f3c(plVar5 + 2);
      puVar1 = (undefined1 *)register0x00000008;
      if ((char)plVar5[0x26] == '\x01') {
        func_0x0001078a3dec(plVar5,plVar5[0x25],plVar5[0x26]);
      }
      do {
        plVar4 = plVar5;
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
        lVar7 = unaff_x21 + 0x40;
        do {
          lVar7 = *(long *)(lVar7 + 8);
          if (lVar7 == unaff_x21 + 0x40) {
            plVar4 = (long *)(unaff_x21 + 0x60);
            FUN_1078a52d4(plVar4,unaff_x20);
            bVar2 = (long *)(unaff_x21 + 0x68) != plVar4;
            uVar3 = bVar2 || unaff_x19 == (long *)0x7fffffffffffffff;
            if (!bVar2 && unaff_x19 != (long *)0x7fffffffffffffff) {
              *(undefined ***)(puVar1 + -0x58) = &PTR_DAT_1109e70b0;
              *(long *)(puVar1 + -0x50) = unaff_x20;
              *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x58;
              func_0x0001078995ec(unaff_x20 + 0x208,unaff_x19,0,puVar1 + -0x58);
              plVar4 = (long *)(puVar1 + -0x58);
              func_0x0001006393ec();
            }
            break;
          }
          uVar3 = *(long *)(lVar7 + 0x10) == unaff_x20;
        } while (!(bool)uVar3);
        func_0x0001078a7288(*(undefined8 *)(puVar1 + -0x38));
        if ((bool)uVar3) {
          return;
        }
        ___stack_chk_fail();
        plVar5 = (long *)(puVar1 + -0x58);
        func_0x0001006393ec();
        unaff_x30 = &UNK_1078a3f14;
        func_0x0001078a7304();
        puVar1 = puVar1 + -0x60;
        unaff_x19 = plVar4;
        if ((char)plVar5[0x4d] != '\x04') {
          return;
        }
      } while( true );
    }
  }
  else {
    uStack_38 = extraout_x8_00;
    func_0x00010724bb70(alStack_b8);
    if (alStack_b8[0] != 0) {
      uVar8 = *(undefined8 *)(unaff_x21 + 0x10);
      func_0x000104c2fe00(auStack_a8);
      puVar6 = (undefined8 *)0x58;
      __Znwm();
      func_0x000104c318bc(apuStack_70,auStack_a8);
      *puVar6 = &PTR_DAT_1109e6cc8;
      puVar6[1] = uVar8;
      puVar6[2] = &LAB_1078a3f2c;
      puVar6[3] = 0;
      func_0x000104c318bc(puVar6 + 4,apuStack_70);
      func_0x000104c2f714(apuStack_70);
      apuStack_70[0] = puVar6;
      func_0x000104c2f714(auStack_a8);
      func_0x0001078a7354();
      puVar6 = apuStack_70[0];
      apuStack_70[0] = (undefined8 *)0x0;
      if (puVar6 != (undefined8 *)0x0) {
        func_0x0001078a729c();
      }
    }
    func_0x0001078a737c();
    func_0x0001078a7288(uStack_38);
    if ((bool)uVar3) {
      return;
    }
  }
  ___stack_chk_fail();
  puVar6 = apuStack_70[0];
  apuStack_70[0] = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    func_0x0001078a729c();
  }
  func_0x0001078a737c();
  func_0x0001078a7304();
  func_0x0001078a738c();
  func_0x0001078a735c();
  func_0x0001078a72f4();
  return;
}



/* Entry: 1078a52d4; end: 1078a531f;  */

long * FUN_1078a52d4(long param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar1 = (long *)(param_1 + 8);
  plVar3 = plVar1;
  plVar4 = plVar1;
  while (plVar5 = (long *)*plVar4, plVar5 != (long *)0x0) {
    lVar2 = 8;
    if (param_2 <= (ulong)plVar5[4]) {
      lVar2 = 0;
    }
    plVar4 = (long *)((long)plVar5 + lVar2);
    if (param_2 <= (ulong)plVar5[4]) {
      plVar3 = plVar5;
    }
  }
  if ((plVar1 == plVar3) || (param_2 < (ulong)plVar3[4])) {
    plVar3 = plVar1;
  }
  return plVar3;
}



/* Entry: 1078a5858; end: 1078a5863;  */

undefined ** FUN_1078a5858(void)

{
  return &PTR_DAT_1109e6e38;
}



/* Entry: 1078a5f10; end: 1078a5f17;  */

void FUN_1078a5f10(void)

{
  return;
}



/* Entry: 1078a608c; end: 1078a608f;  */

undefined8 * FUN_1078a608c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e6e58;
  func_0x0001078a6170(param_1 + 4);
  return param_1;
}



/* Entry: 1078a6210; end: 1078a6237;  */

void FUN_1078a6210(undefined8 param_1)

{
  func_0x0001078a738c();
  func_0x0001078a735c(param_1,&PTR_DAT_1109e6ef8);
  func_0x0001078a72f4();
  return;
}



/* Entry: 1078a6348; end: 1078a6393;  */

void FUN_1078a6348(void)

{
  func_0x0001078a730c();
  func_0x0001078a7490();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)();
  return;
}



/* Entry: 1078a6584; end: 1078a65fb;  */

void FUN_1078a6584(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 199) < '\0') {
    func_0x000107c60e14(*(undefined8 *)(param_1 + 0xb0));
  }
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0xc0) = param_2[2];
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  return;
}



/* Entry: 1078a6804; end: 1078a6833;  */

void FUN_1078a6804(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_1109e70b0;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1078a6f00; end: 1078a6f07;  */

void FUN_1078a6f00(void)

{
  return;
}



/* Entry: 1078a71b8; end: 1078a71bb;  */

void FUN_1078a71b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e71e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078a74fc; end: 1078a75f7;  */

void FUN_1078a74fc(undefined8 *param_1,long *param_2)

{
  int iVar1;
  undefined1 **ppuVar2;
  long *plVar3;
  long *plVar4;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  int iStack_34;
  
  iStack_34 = 0;
  iVar1 = (int)param_2[1];
  plVar4 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    iVar1 = (int)*(char *)((long)param_2 + 0x17);
    plVar4 = param_2;
  }
  func_0x000108149724(plVar4,iVar1,0,0,8,&iStack_34);
  iStack_34 = 0;
  func_0x0001078a8a1c(&puStack_50,(long)(int)plVar4);
  iVar1 = (int)param_2[1];
  plVar3 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    iVar1 = (int)*(char *)((long)param_2 + 0x17);
    plVar3 = param_2;
  }
  ppuVar2 = (undefined1 **)puStack_50;
  if (-1 < lStack_40) {
    ppuVar2 = &puStack_50;
  }
  func_0x000108149724(plVar3,iVar1,ppuVar2,plVar4,8,&iStack_34);
  if (iStack_34 < 1) {
    param_1[1] = uStack_48;
    *param_1 = puStack_50;
    param_1[2] = lStack_40;
    uStack_48 = 0;
    lStack_40 = 0;
    puStack_50 = (undefined1 *)0x0;
  }
  else {
    func_0x000107407a9c(param_1,param_2);
  }
  func_0x00010089ccb4(&puStack_50);
  return;
}



/* Entry: 1078a80f0; end: 1078a817b;  */

void FUN_1078a80f0(long *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_2 < (undefined8 *)0x7ffffffffffffff7) {
    plVar2 = param_1;
    puVar1 = param_2;
    if (param_2 < (undefined8 *)0xb) {
      *(char *)((long)param_1 + 0x17) = (char)param_2;
    }
    else {
      uVar3 = 0xd;
      if (((ulong)param_2 | 3) != 0xb) {
        uVar3 = ((ulong)param_2 | 3) + 1;
      }
      func_0x000107407b7c();
      param_1[1] = (long)param_2;
      param_1[2] = uVar3 | 0x8000000000000000;
      *param_1 = (long)plVar2;
      param_1 = plVar2;
    }
    for (; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)((long)puVar1 - 1)) {
      *(undefined2 *)plVar2 = param_3;
      plVar2 = (long *)((long)plVar2 + 2);
    }
    *(undefined2 *)((long)param_1 + (long)param_2 * 2) = 0;
  }
  else {
    func_0x000107407b68();
    func_0x0001078a8a84();
    lVar4 = param_2[1] + ((param_1[1] - *param_1) / -0x18) * 0x18;
    _memcpy(lVar4);
    param_2[1] = lVar4;
    lVar4 = *param_1;
    param_1[1] = lVar4;
    *param_1 = param_2[1];
    param_2[1] = lVar4;
    lVar4 = param_1[1];
    param_1[1] = param_2[2];
    param_2[2] = lVar4;
    lVar4 = param_1[2];
    param_1[2] = param_2[3];
    param_2[3] = lVar4;
    *param_2 = param_2[1];
  }
  return;
}



/* Entry: 1078a836c; end: 1078a8437;  */

long FUN_1078a836c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  uVar1 = (param_1[1] - *param_1) / 0x18 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
    func_0x0001078a817c();
    func_0x0001078a89d0();
    func_0x0001078a89a8();
    puVar3 = (undefined1 *)param_1[1];
    if (puVar3 < (undefined1 *)param_1[2]) {
      plVar4 = (long *)(puVar3 + 1);
      *puVar3 = *(undefined1 *)param_2;
    }
    else {
      plVar4 = param_1;
      func_0x0001078a847c();
    }
    param_1[1] = (long)plVar4;
    return (long)plVar4 + -1;
  }
  uVar2 = (param_1[2] - *param_1) / 0x18;
  uVar5 = uVar2 * 2;
  if (uVar5 < uVar1 || uVar5 - uVar1 == 0) {
    uVar5 = uVar1;
  }
  if (0x555555555555554 < uVar2) {
    uVar5 = 0xaaaaaaaaaaaaaaa;
  }
  func_0x0001078a820c(auStack_48,uVar5);
  uVar8 = param_2[1];
  uVar7 = *param_2;
  puStack_38[2] = param_2[2];
  puStack_38[1] = uVar8;
  *puStack_38 = uVar7;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  puStack_38 = puStack_38 + 3;
  func_0x0001078a8a30();
  lVar6 = param_1[1];
  func_0x0001078a89d0();
  return lVar6;
}



/* Entry: 1078a8710; end: 1078a87db;  */

undefined8 * FUN_1078a8710(undefined8 *param_1,ulong param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_2 != 0) {
    uVar5 = (ulong)*(char *)((long)param_1 + 0x17);
    if ((long)uVar5 < 0) {
      uVar6 = param_1[1];
      lVar2 = (param_1[2] & 0x7fffffffffffffff) - 1;
      uVar5 = (ulong)param_1[2] >> 0x38;
    }
    else {
      lVar2 = 10;
      uVar6 = uVar5;
    }
    uVar4 = (uint)uVar5;
    if (lVar2 - uVar6 < param_2) {
      func_0x00010782824c(param_1,lVar2,(param_2 - lVar2) + uVar6,uVar6,uVar6,0,0);
      uVar4 = (uint)*(byte *)((long)param_1 + 0x17);
    }
    puVar3 = param_1;
    if ((uVar4 >> 7 & 1) != 0) {
      puVar3 = (undefined8 *)*param_1;
    }
    puVar1 = (undefined2 *)((long)puVar3 + uVar6 * 2);
    for (uVar5 = param_2; uVar5 != 0; uVar5 = uVar5 - 1) {
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
    *(undefined2 *)((long)puVar3 + lVar2 * 2) = 0;
  }
  return param_1;
}



/* Entry: 1078a8cd4; end: 1078a8e3f;  */

/* WARNING: Possible PIC construction at 0x0001078a8e10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078a8f94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078a8f78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078a8df4: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x0001078a9034) */
/* WARNING: Removing unreachable block (ram,0x0001078a8ebc) */
/* WARNING: Removing unreachable block (ram,0x0001078a8f94) */
/* WARNING: Removing unreachable block (ram,0x0001078a8df8) */

void FUN_1078a8cd4(int param_1)

{
  undefined8 uVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  uint uVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x9;
  ulong uVar9;
  undefined8 extraout_x11;
  long unaff_x19;
  undefined auStack_3c60 [15384];
  undefined8 uStack_48;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001078a8fe0();
  ppuVar5 = &PTR___tlv_bootstrap_11340dc00;
  uStack_48 = extraout_x8;
  func_0x0001078a9020();
  ppuVar6 = &PTR___tlv_bootstrap_11340dc18;
  func_0x0001078a9020();
  uVar8 = (uint)*(byte *)ppuVar6;
  cVar2 = SBORROW4(uVar8,1);
  cVar3 = (int)(uVar8 - 1) < 0;
  if (uVar8 == 1) {
    ppuVar6 = ppuVar5;
    _inflateReset();
    if ((int)ppuVar6 != 0) {
      func_0x0001078a8fd8();
      func_0x0001078a90ec();
      return;
    }
  }
  else {
    ppuVar7 = ppuVar6;
    func_0x0001078a9048();
    if ((int)ppuVar7 != 0) goto LAB_1078a8e04;
    *(undefined1 *)ppuVar6 = 1;
  }
  func_0x0001078a9088();
  uVar1 = extraout_x11;
  if (cVar3 == cVar2) {
    uVar1 = extraout_x8_00;
  }
  func_0x0001078a90f8(uVar1);
  func_0x0001078a90b8();
  do {
    ppuVar5[3] = auStack_3c60;
    *(undefined4 *)(ppuVar5 + 4) = 0x3c18;
    func_0x0001078a90d8();
    func_0x0001078a9078();
    uVar9 = extraout_x9;
    if ((long)extraout_x9 < 0) {
      uVar9 = *(ulong *)(unaff_x19 + 8);
    }
    if (uVar9 < extraout_x8_01) {
      func_0x0001078a90b0();
    }
  } while (param_1 == 0);
  bVar4 = param_1 == 1;
  if (!bVar4) {
    func_0x0001078a8fd8();
    func_0x0001078a905c();
    __ZNSt13runtime_errorC1EPKc();
    return;
  }
  func_0x0001078a8ff4(uStack_48);
  if (bVar4) {
    return;
  }
  ___stack_chk_fail();
LAB_1078a8e04:
  func_0x0001078a8fd8();
  func_0x0001078a90c4();
  return;
}



/* Entry: 1078a9570; end: 1078a959f;  */

undefined8 * FUN_1078a9570(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  _pthread_key_create(param_1,0);
  if ((int)puVar1 == 0) {
    return param_1;
  }
  _abort();
  puVar1 = (undefined8 *)*puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_getspecific_11034c8c0)(puVar1);
  return puVar1;
}



/* Entry: 1078a98ac; end: 1078a9907;  */

undefined8 FUN_1078a98ac(uint param_1,undefined8 param_2)

{
  if ((param_1 & 0xffff0000) != 0) {
    func_0x0001078281ac(param_2,param_1 + 0xff0000 >> 10 & 0xffff | 0xd800);
    param_1 = param_1 & 0x3ff | 0xffffdc00;
  }
  func_0x0001078281ac(param_2,param_1 & 0xffff);
  return param_2;
}



/* Entry: 1078a9ba8; end: 1078a9bbb;  */

void FUN_1078a9ba8(void)

{
  func_0x0001078a9b68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078aa484; end: 1078aa4cf;  */

void FUN_1078aa484(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uVar1 = 8;
  __Znwm(8);
  func_0x000107877718();
  uStack_28 = 0;
  func_0x00010788f734(param_1 + 0xe8,uVar1);
  FUN_10788f710(&uStack_28);
  return;
}



/* Entry: 1078ab49c; end: 1078ab553;  */

void FUN_1078ab49c(undefined4 *param_1,long param_2,int param_3)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  
  lVar7 = 0x2a0;
  if (param_3 != 1) {
    lVar7 = 0x288;
  }
  plVar2 = (long *)(param_2 + lVar7);
  lVar7 = plVar2[1];
  if (*plVar2 == lVar7) {
    iVar3 = 8;
    if (param_3 != 1) {
      iVar3 = 0x40;
    }
    func_0x0001074287b0(plVar2,iVar3);
    _glGenTextures(iVar3,*plVar2);
    piVar1 = (int *)(param_2 + 0x6c);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar7 = plVar2[1];
  }
  uVar4 = *(undefined4 *)(lVar7 + -4);
  plVar2[1] = lVar7 + -4;
  piVar1 = (int *)(param_2 + 0x68);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = *piVar1 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  *param_1 = uVar4;
  *(long *)(param_1 + 2) = param_2;
  *(char *)(param_1 + 4) = (char)param_3;
  *(undefined1 *)(param_1 + 6) = 1;
  return;
}



/* Entry: 1078aba60; end: 1078abd2b;  */

void FUN_1078aba60(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6,byte param_7)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  undefined4 uVar11;
  long lVar12;
  undefined1 auStack_98 [4];
  undefined4 uStack_94;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [32];
  
  lVar12 = param_2;
  FUN_1078ab49c(auStack_80,param_2,1);
  func_0x0001078af4dc();
  lStack_88 = lVar12 * 6;
  plVar1 = (long *)(param_2 + 0x80);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = *plVar1 + lStack_88;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  func_0x0001078ab8f8(&lStack_90,auStack_80,&lStack_88);
  func_0x0001073da214(param_5,param_7 & 1,param_6,1);
  *(char *)(lStack_90 + 0x30) = (char)param_5;
  *(char *)(lStack_90 + 0x31) = (char)(param_5 >> 8);
  *(char *)(lStack_90 + 0x32) = (char)(param_5 >> 0x10);
  uVar10 = param_5 >> 0x20 & 0xff;
  *(char *)(lStack_90 + 0x33) = (char)(param_5 >> 0x18);
  *(char *)(lStack_90 + 0x34) = (char)(param_5 >> 0x20);
  auStack_98[0] = 0;
  func_0x0001078ab940(param_2 + 0xf0,auStack_98);
  auStack_98[0] = 1;
  uStack_94 = *(undefined4 *)(lStack_90 + 0x10);
  func_0x0001078ab97c(param_2 + 0x114,auStack_98);
  uVar8 = (uint)((param_5 & 0xffffffffff) >> 0x10) & 0xff;
  uVar9 = (uint)((param_5 & 0xffffffffff) >> 0x18) & 0xff;
  func_0x0001078af888(param_6);
  for (lVar12 = 0; lVar12 != 0x30; lVar12 = lVar12 + 8) {
    if (((int)param_6 - 0x10U & 0xff) < 0x1c) {
      func_0x0001078af4dc();
      func_0x0001078af590();
      _glCompressedTexImage2D();
    }
    else {
      func_0x0001078af590();
      _glTexImage2D();
    }
  }
  uVar11 = 0x2901;
  uVar7 = uVar11;
  if (uVar8 != 1) {
    uVar7 = 0x812f;
  }
  uVar2 = 0x8370;
  if (uVar8 != 2) {
    uVar2 = uVar7;
  }
  _glTexParameteri(0x8513,0x2802,uVar2);
  if (uVar9 != 1) {
    uVar11 = 0x812f;
  }
  uVar7 = 0x8370;
  if (uVar9 != 2) {
    uVar7 = uVar11;
  }
  _glTexParameteri(0x8513,0x2803,uVar7);
  uVar5 = (ulong)((uint)param_5 & 0xff);
  func_0x0001078af7e4(uVar5);
  _glTexParameteri(0x8513,0x2801,uVar5);
  uVar7 = 0x2600;
  if (((uint)(param_5 >> 8) & 0xff) - 3 < 3) {
    uVar7 = 0x2601;
  }
  _glTexParameteri(0x8513,0x2800,uVar7);
  if ((int)uVar10 == 0) {
    uVar10 = 0;
    uVar6 = 0x884c;
  }
  else {
    func_0x0001078af468(0x8513);
    func_0x0001078af874(uVar10);
    uVar6 = 0x884d;
  }
  _glTexParameteri(0x8513,uVar6,uVar10);
  if ((((int)param_6 - 0x2cU & 0xff) < 0xe4 & param_7) != 0) {
    _glGenerateMipmap(0x8513);
    *(undefined1 *)(lStack_90 + 0x35) = 1;
  }
  *param_1 = lStack_90;
  func_0x0001078ae5e4(auStack_80);
  return;
}



/* Entry: 1078ac1d4; end: 1078ac203;  */

void FUN_1078ac1d4(void)

{
  undefined1 in_ZR;
  uint extraout_w9;
  
  func_0x0001078af15c();
  if (((extraout_w9 & 1) != 0) || (func_0x0001078af2d0(), !(bool)in_ZR)) {
    func_0x0001078af14c();
    func_0x0001078b663c();
  }
  return;
}



/* Entry: 1078accb8; end: 1078ace73;  */

void FUN_1078accb8(void)

{
  undefined1 in_ZR;
  uint extraout_w8;
  undefined4 extraout_w8_00;
  undefined4 extraout_var;
  
  func_0x0001078af3ac();
  if (((extraout_w8 & 1) != 0) || (func_0x0001078af1b8(), !(bool)in_ZR)) {
    func_0x0001078af074();
    (*(code *)CONCAT44(extraout_var,extraout_w8_00))(0xb90);
  }
  return;
}



/* Entry: 1078adb80; end: 1078ade6f;  */

/* WARNING: Possible PIC construction at 0x0001078adbc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078adbc4) */

void FUN_1078adb80(long param_1)

{
  undefined1 in_ZR;
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  uint extraout_w9;
  long unaff_x19;
  int iVar8;
  int iStack_184;
  undefined4 auStack_180 [24];
  undefined8 auStack_120 [16];
  undefined4 auStack_a0 [18];
  undefined8 uStack_58;
  
  func_0x0001078af2dc();
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x3f0) == 0) {
    uVar2 = 0;
    func_0x0001078ae0dc(&UNK_10f432df8,0x8b31,auStack_180);
    if ((uVar2 & 1) != 0) {
      puVar3 = &UNK_10f432ec9;
      func_0x0001078ae0dc(&UNK_10f432ec9,0x8b30,auStack_a0);
      if (((ulong)puVar3 & 1) != 0) {
        _glCreateProgram();
        _glAttachShader();
        _glAttachShader(puVar3,auStack_a0[0]);
        _glBindAttribLocation(puVar3,0,&DAT_10f432f67);
        _glLinkProgram(puVar3);
        _glGetProgramiv(puVar3,0x8b82,&iStack_184);
        if (iStack_184 != 0) {
          _glDeleteShader(auStack_180[0]);
          _glDeleteShader(auStack_a0[0]);
          puVar4 = puVar3;
          _glGetUniformLocation(puVar3,&UNK_10f432f73);
          puVar5 = puVar3;
          _glGetUniformLocation(puVar3,&UNK_10f432f7f);
          iVar8 = (int)puVar4;
          iVar1 = (int)puVar5;
          in_ZR = iVar8 == -1 || iVar1 == -1;
          if (iVar8 != -1 && iVar1 != -1) {
            puVar6 = (undefined8 *)0xc;
            __Znwm();
            *puVar6 = 0;
            *(undefined4 *)(puVar6 + 1) = 0;
            auStack_120[0] = 0;
            FUN_1078ae840((long *)(unaff_x19 + 0x3f0),puVar6);
            func_0x0001078ae820(auStack_120);
            puVar7 = *(undefined4 **)(unaff_x19 + 0x3f0);
            *puVar7 = (int)puVar3;
            puVar7[1] = iVar8;
            puVar7[2] = iVar1;
            goto code_r0x0001078ade70;
          }
        }
      }
    }
    func_0x0001078af550(uStack_58);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
  }
code_r0x0001078ade70:
  func_0x0001078af15c();
  if (((extraout_w9 & 1) != 0) || (func_0x0001078af2d0(), !(bool)in_ZR)) {
    func_0x0001078af14c();
    func_0x0001078b6528();
  }
  return;
}



/* Entry: 1078ae204; end: 1078ae267;  */

long FUN_1078ae204(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
    __ZdlPv();
  }
  func_0x0001078ae578(param_1);
  return param_1;
}


