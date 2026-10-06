/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1090e4c94; end: 1090e4cb7;  */

void FUN_1090e4c94(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x60) == '\x01') {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 8);
    for (lVar2 = *(long *)(param_1 + 0x18) << 4; lVar2 != 0; lVar2 = lVar2 + -0x10) {
      if (*(uint *)(puVar1 + -1) < 3) {
        (*(code *)*puVar1)(2,*(undefined4 *)(param_1 + 0x50),param_1 + 0x48,&UNK_10f550f30,
                           &stack0x00000000);
      }
      puVar1 = puVar1 + 2;
    }
  }
  return;
}



/* Entry: 1090e4cb8; end: 1090e4d8f;  */

void FUN_1090e4cb8(undefined8 param_1,undefined8 param_2)

{
  func_0x0001090e4f20(param_1,param_2,&UNK_10f550fa8);
  return;
}



/* Entry: 1090e4d90; end: 1090e4ecf;  */

void FUN_1090e4d90(long *param_1,long *param_2,long *param_3,long param_4)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  uVar3 = param_2[2];
  uVar1 = param_2[1] + param_4;
  if (uVar1 - uVar3 <= 0x7ffffffffffffff - uVar3) {
    if (uVar3 >> 0x3d == 0) {
      uVar6 = (uVar3 << 3) / 5;
    }
    else {
      uVar6 = uVar3 << 3;
      if (4 < uVar3 >> 0x3d) {
        uVar6 = 0xffffffffffffffff;
      }
    }
    if (0x7fffffffffffffe < uVar6) {
      uVar6 = 0x7ffffffffffffff;
    }
    uVar3 = uVar1;
    if (uVar1 <= uVar6) {
      uVar3 = uVar6;
    }
    if (uVar1 >> 0x3b == 0) {
      lVar7 = *param_2;
      puVar4 = (undefined8 *)(uVar3 << 4);
      __Znwm();
      plVar2 = (long *)*param_2;
      lVar8 = param_2[1];
      puVar5 = puVar4;
      if ((plVar2 != (long *)0x0) && (plVar2 != param_3)) {
        _memmove(puVar4,plVar2,(long)param_3 - (long)plVar2);
        puVar5 = (undefined8 *)((long)puVar4 + ((long)param_3 - (long)plVar2));
      }
      *puVar5 = 0;
      puVar5[1] = 0;
      if ((param_3 != (long *)0x0) && (param_3 != plVar2 + lVar8 * 2)) {
        _memmove(puVar5 + param_4 * 2,param_3,(long)(plVar2 + lVar8 * 2) - (long)param_3);
      }
      if ((plVar2 != (long *)0x0) && (param_2 + 3 != plVar2)) {
        __ZdlPv(plVar2);
        lVar8 = param_2[1];
      }
      *param_2 = (long)puVar4;
      param_2[1] = lVar8 + param_4;
      param_2[2] = uVar3;
      *param_1 = (long)puVar4 + ((long)param_3 - lVar7);
      return;
    }
  }
  _abort();
  return;
}



/* Entry: 1090e4ed0; end: 1090e4f7b;  */

void FUN_1090e4ed0(void)

{
  return;
}



/* Entry: 1090e4f7c; end: 1090e8c27;  */

bool FUN_1090e4f7c(float *param_1)

{
  if ((((*param_1 == 1.0) && (param_1[1] == 0.0)) && (param_1[2] == 0.0)) &&
     ((param_1[3] == 1.0 && (param_1[4] == 0.0)))) {
    return param_1[5] == 0.0;
  }
  return false;
}



/* Entry: 1090e8c28; end: 1090e8d9f;  */

undefined8 *
FUN_1090e8c28(undefined8 *param_1,long *param_2,undefined8 *param_3,long *param_4,long *param_5,
             long *param_6,long *param_7,undefined8 param_8)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 uVar7;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  undefined4 uStack_44;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ada4f0;
  lVar6 = *param_2;
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar5 = (long *)*param_3;
  lVar2 = param_3[1];
  param_1[3] = lVar6;
  param_1[4] = plVar5;
  param_1[5] = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x0001090e9b00();
    } while (extraout_w10 != 0);
    plVar5 = (long *)param_1[4];
  }
  (**(code **)(*plVar5 + 0x10))(param_1 + 6,plVar5,param_1 + 3);
  lVar6 = *param_5;
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
    do {
      func_0x0001090e9b68();
      lVar6 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[8] = lVar6;
  lVar6 = *param_4;
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
    do {
      func_0x0001090e9b68();
      lVar6 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  param_1[9] = lVar6;
  FUN_1090e97dc(param_1 + 10,param_4);
  uVar7 = 0;
  if (*param_6 != 0) {
    do {
      func_0x0001090e9bc4();
      uVar7 = extraout_x8_01;
    } while (extraout_w11_01 != 0);
  }
  param_1[0xb] = uVar7;
  uVar7 = 0;
  if (*param_7 != 0) {
    do {
      func_0x0001090e9bc4();
      uVar7 = extraout_x8_02;
    } while (extraout_w11_02 != 0);
  }
  param_1[0xc] = uVar7;
  _memcpy(param_1 + 0xd,param_8,0x48);
  uStack_44 = 0;
  func_0x0001090e9810(param_1 + 0x16,&uStack_44,param_1 + 8,param_1 + 0xd,param_1 + 10,param_1 + 9);
  param_1[0x18] = 0x32aaaba7;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  return param_1;
}



/* Entry: 1090e8da0; end: 1090e8e2b;  */

undefined8 * FUN_1090e8da0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ada4f0;
  FUN_1090b651c(param_1 + 0x20);
  __ZNSt3__15mutexD1Ev(param_1 + 0x18);
  FUN_10909c830(param_1 + 0x16);
  FUN_1090d11b4(param_1 + 0xc);
  FUN_10909595c(param_1 + 0xb);
  FUN_10909b564(param_1 + 10);
  FUN_1090958e8(param_1 + 9);
  func_0x000104bd5214(param_1 + 8);
  func_0x0001090e1f44(param_1 + 6);
  if (param_1[5] != 0) {
    func_0x000107c27b90();
  }
  func_0x000107c278f4(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 1090e8e2c; end: 1090e8e2f;  */

undefined8 * FUN_1090e8e2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ada4f0;
  FUN_1090b651c(param_1 + 0x20);
  __ZNSt3__15mutexD1Ev(param_1 + 0x18);
  FUN_10909c830(param_1 + 0x16);
  FUN_1090d11b4(param_1 + 0xc);
  FUN_10909595c(param_1 + 0xb);
  FUN_10909b564(param_1 + 10);
  FUN_1090958e8(param_1 + 9);
  func_0x000104bd5214(param_1 + 8);
  func_0x0001090e1f44(param_1 + 6);
  if (param_1[5] != 0) {
    func_0x000107c27b90();
  }
  func_0x000107c278f4(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 1090e8e30; end: 1090e8e43;  */

void FUN_1090e8e30(void)

{
  FUN_1090e8da0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090e8e44; end: 1090e9013;  */

/* WARNING: Possible PIC construction at 0x0001090e8e64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001090e8e68) */
/* WARNING: Removing unreachable block (ram,0x0001090e8ed0) */
/* WARNING: Removing unreachable block (ram,0x0001090e8ec0) */

void FUN_1090e8e44(long param_1)

{
  int extraout_w10;
  int extraout_w10_00;
  long lStack_a0;
  long lStack_98;
  
  func_0x0001090e9b78();
  if (param_1 != 0) {
    if (*(long *)(param_1 + 8) == 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        do {
          func_0x0001090e9b00();
        } while (extraout_w10_00 != 0);
      }
    }
    else {
      func_0x000107c278f0(&lStack_a0);
      if ((lStack_a0 != 0) && (lStack_98 != 0)) {
        do {
          func_0x0001090e9b00();
        } while (extraout_w10 != 0);
      }
      func_0x0001090e9b94();
    }
  }
  return;
}



/* Entry: 1090e9014; end: 1090e906b;  */

undefined1  [16] FUN_1090e9014(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x19;
  undefined1 auVar2 [16];
  
  func_0x0001090e9ac4();
  plVar1 = *(long **)(unaff_x19 + 0x100);
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)0x0;
    param_2 = 0x100000001;
  }
  else {
    (**(code **)(*plVar1 + 0x38))();
  }
  func_0x0001090e9b10();
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = plVar1;
  return auVar2;
}



/* Entry: 1090e906c; end: 1090e90a7;  */

void FUN_1090e906c(void)

{
  long unaff_x19;
  undefined1 *unaff_x20;
  
  func_0x0001090e9ad0();
  if (*(long *)(unaff_x19 + 0x100) == 0) {
    *unaff_x20 = 0;
    unaff_x20[8] = 0;
  }
  else {
    func_0x0001090e9b50();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0xc0);
  return;
}



/* Entry: 1090e90a8; end: 1090e90f3;  */

void FUN_1090e90a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x19;
  
  func_0x0001090e9ac4();
  plVar1 = *(long **)(unaff_x19 + 0x100);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x48))(plVar1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0xc0);
  return;
}



/* Entry: 1090e90f4; end: 1090e918b;  */

undefined1  [16]
FUN_1090e90f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long unaff_x19;
  undefined1 auVar2 [16];
  
  func_0x0001090e9ac4();
  plVar1 = *(long **)(unaff_x19 + 0x100);
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)0x0;
    param_2 = 0x100000001;
  }
  else {
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  func_0x0001090e9b10();
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = plVar1;
  return auVar2;
}



/* Entry: 1090e918c; end: 1090e922b;  */

uint FUN_1090e918c(void)

{
  uint uVar1;
  long *plVar2;
  long unaff_x19;
  uint uVar3;
  
  func_0x0001090e9ac4();
  plVar2 = *(long **)(unaff_x19 + 0x100);
  if (plVar2 == (long *)0x0) {
    uVar1 = 0;
    uVar3 = 0;
  }
  else {
    (**(code **)(*plVar2 + 0x58))();
    uVar1 = (uint)plVar2;
    uVar3 = uVar1 >> 8 & 0xff;
  }
  func_0x0001090e9b10();
  return uVar1 & 0xff | uVar3 << 8;
}



/* Entry: 1090e922c; end: 1090e92ab;  */

void FUN_1090e922c(void)

{
  long unaff_x19;
  
  func_0x0001090e9ad0();
  if (*(long *)(unaff_x19 + 0x100) == 0) {
    func_0x0001090e9b58();
    func_0x0001090e9b18();
  }
  else {
    func_0x0001090e9b50();
  }
  func_0x0001090e9b10();
  return;
}



/* Entry: 1090e92ac; end: 1090e92bb;  */

long FUN_1090e92ac(long param_1)

{
  return param_1 + 0x68;
}



/* Entry: 1090e92bc; end: 1090e940b;  */

void FUN_1090e92bc(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *puVar4;
  long unaff_x21;
  long lVar5;
  long lVar6;
  long *unaff_x25;
  undefined8 *puStack_60;
  long in_stack_ffffffffffffffa8;
  
  FUN_1090df868(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xb0),0,*(long *)(param_1 + 0x10) + 0x30
                ,0,0);
  FUN_1090e00a4(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xb0),0,1);
  func_0x0001090dffc4(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xb0),0,1);
  lVar5 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar5 + 0xb0);
  puVar3 = (undefined8 *)0x40;
  __Znwm();
  func_0x0001090e9bd4();
  *puVar3 = &PTR_FUN_110ada5a0;
  puVar4 = puVar3 + 3;
  *puVar4 = &PTR_DAT_110ada5f0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  func_0x0001090e8ed4(&puStack_60,lVar5);
  *(long *)(unaff_x21 + 0x38) = in_stack_ffffffffffffffa8;
  *(undefined8 **)(unaff_x21 + 0x30) = puStack_60;
  if (in_stack_ffffffffffffffa8 != 0) {
    do {
      func_0x0001090e9b00();
    } while (extraout_w10 != 0);
  }
  func_0x0001090e9b48();
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(unaff_x25,0x10);
    if (bVar2) {
      *unaff_x25 = *unaff_x25 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puStack_60 = puVar4;
  func_0x000107c278e4(puVar3 + 4,&puStack_60);
  func_0x0001090e9b94();
  if (*(long *)(unaff_x21 + 0x28) != 0) {
    do {
      func_0x0001090e9b00();
    } while (extraout_w10_00 != 0);
  }
  puStack_60 = puVar4;
  FUN_1090e0144(lVar6 + 0x110,&puStack_60);
  FUN_10909cc28(puStack_60);
  func_0x000107c3105c(puVar4);
  func_0x0001090e0124(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xb0),1);
  return;
}



/* Entry: 1090e940c; end: 1090e940f;  */

void FUN_1090e940c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ada5a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1090e9410; end: 1090e9423;  */

void FUN_1090e9410(void)

{
  FUN_1090e9774();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090e9424; end: 1090e942f;  */

void FUN_1090e9424(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001090e9ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1090e9430; end: 1090e9443;  */

void FUN_1090e9430(void)

{
  func_0x0001090e96f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090e9444; end: 1090e965b;  */

void FUN_1090e9444(long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w11;
  long *plVar6;
  long unaff_x21;
  long *unaff_x25;
  long lStack_d0;
  long alStack_98 [2];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001090e9734(alStack_98,param_1 + 0x18);
  if (alStack_98[0] != 0) {
    func_0x0001090dfe7c(&uStack_78,param_2,param_3);
    param_4 = &uStack_60;
    uVar5 = uStack_78;
    func_0x0001090dd238(uStack_78,0,7,param_4);
    if ((int)uVar5 != 0) {
      uStack_60._7_1_ = 0;
      iVar3 = 0xf54dbb7;
      _memcmp(&DAT_10f54dbb7,&uStack_60,7);
      if (iVar3 != 0) {
        plVar6 = (long *)(alStack_98[0] + 0xb0);
        *(int *)(*plVar6 + 0x138) = *(int *)(*plVar6 + 0x138) + 1;
        puStack_70 = (undefined8 *)0x0;
        FUN_1090e0144(param_2 + 0x110,&puStack_70);
        FUN_10909cc28(puStack_70);
        puVar4 = (undefined8 *)0x98;
        __Znwm();
        func_0x0001090e9bd4();
        *puVar4 = &PTR_DAT_110ada670;
        puVar4 = puVar4 + 3;
        func_0x0001090f6340(puVar4,plVar6,0,alStack_98[0] + 0x48,alStack_98[0] + 0x58);
        if ((*(long *)(unaff_x21 + 0x28) == 0) ||
           (in_ZR = *(long *)(*(long *)(unaff_x21 + 0x28) + 8) == -1, (bool)in_ZR)) {
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(unaff_x25,0x10);
            if (bVar2) {
              *unaff_x25 = *unaff_x25 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          puStack_70 = puVar4;
          func_0x000107c278e4(unaff_x21 + 0x20,&puStack_70);
          func_0x000107c284e8(&puStack_70);
        }
        *(undefined8 *)(unaff_x21 + 0x58) = *(undefined8 *)(alStack_98[0] + 0xb8);
        __ZNSt3__15mutex4lockEv(alStack_98[0] + 0xc0);
        if (*(long *)(unaff_x21 + 0x28) != 0) {
          do {
            func_0x0001090e9b00();
          } while (extraout_w10 != 0);
        }
        uVar5 = *(undefined8 *)(alStack_98[0] + 0x100);
        *(undefined8 **)(alStack_98[0] + 0x100) = puVar4;
        FUN_1090b6548(uVar5);
        __ZNSt3__15mutex6unlockEv(alStack_98[0] + 0xc0);
        uStack_88 = 0;
        if (*(long *)(*(long *)(alStack_98[0] + 0x48) + 0x38) != 0) {
          do {
            func_0x0001090e9bc4();
            uStack_88 = extraout_x8;
          } while (extraout_w11 != 0);
        }
        uVar5 = 0x160;
        __Znwm();
        puStack_70 = (undefined8 *)0x0;
        param_4 = &uStack_88;
        func_0x0001090f820c();
        uStack_80 = uVar5;
        func_0x0001090e9a7c(puStack_70);
        FUN_109097138(uStack_88);
        func_0x0001090f647c(puVar4,&uStack_80);
        FUN_1090e00fc(*plVar6);
        func_0x0001090e9aa0(uStack_80);
        func_0x000107c3105c(puVar4);
      }
    }
    FUN_10909b60c(uStack_78);
  }
  func_0x0001090e96d0(alStack_98);
  func_0x0001090e9ae0(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001090e9b38();
    if (lStack_d0 != 0) {
      __ZNSt3__15mutex4lockEv(lStack_d0 + 0xc0);
      plVar6 = *(long **)(lStack_d0 + 0xb8);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6,lStack_d0,param_4);
      }
      __ZNSt3__15mutex6unlockEv(lStack_d0 + 0xc0);
    }
    func_0x0001090e9b48();
    return;
  }
  return;
}



/* Entry: 1090e965c; end: 1090e96b3;  */

void FUN_1090e965c(void)

{
  long *plVar1;
  undefined8 in_x3;
  undefined8 uStack_30;
  
  func_0x0001090e9b38();
  if (uStack_30 != 0) {
    __ZNSt3__15mutex4lockEv(uStack_30 + 0xc0);
    plVar1 = *(long **)(uStack_30 + 0xb8);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,uStack_30,in_x3);
    }
    __ZNSt3__15mutex6unlockEv(uStack_30 + 0xc0);
  }
  func_0x0001090e9b48();
  return;
}



/* Entry: 1090e96b4; end: 1090e96cf;  */

void FUN_1090e96b4(void)

{
  func_0x0001090e9b38();
  func_0x0001090e9b48();
  return;
}



/* Entry: 1090e96d0; end: 1090e9773;  */

long FUN_1090e96d0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c27b90();
  }
  return param_1;
}



/* Entry: 1090e9774; end: 1090e97db;  */

void FUN_1090e9774(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ada5a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1090e97dc; end: 1090e985b;  */

void FUN_1090e97dc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x78;
  __Znwm();
  FUN_1090ddf3c();
  *param_1 = uVar1;
  return;
}



/* Entry: 1090e985c; end: 1090e988b;  */

void FUN_1090e985c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uStack_11;
  
  FUN_1090e988c(&uStack_11,param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 1090e988c; end: 1090e992f;  */

void FUN_1090e988c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 *extraout_x8_01;
  undefined1 *puVar3;
  int extraout_w11;
  undefined1 *puStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined8 uStack_48;
  
  puVar1 = auStack_60;
  func_0x0001090e9b78();
  uStack_48 = extraout_x8;
  FUN_1090e994c(auStack_60,1);
  FUN_1090e99a4(lStack_50,param_3,param_4,param_5,param_6,param_7);
  lVar2 = lStack_50;
  lStack_50 = 0;
  FUN_1090e9930(param_1,lVar2 + 0x18);
  FUN_1090e9a3c();
  func_0x0001090e9ae0(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *extraout_x8_00 = puVar1;
  extraout_x8_00[1] = lVar2;
  puVar3 = (undefined1 *)0x0;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1 + 8;
  }
  if ((puVar3 != (undefined1 *)0x0) &&
     ((*(long *)(puVar3 + 8) == 0 || (*(long *)(*(long *)(puVar3 + 8) + 8) == -1)))) {
    pcStack_68 = FUN_1090e9930;
    lStack_78 = extraout_x8_00[1];
    puStack_80 = puVar1;
    puStack_70 = &stack0xfffffffffffffff0;
    if (lStack_78 != 0) {
      do {
        func_0x0001090e9b68();
        puVar3 = extraout_x8_01;
      } while (extraout_w11 != 0);
    }
    func_0x000107c278e4(puVar3,&puStack_80);
    func_0x0001090e9b94();
    return;
  }
  return;
}



/* Entry: 1090e9930; end: 1090e994b;  */

void FUN_1090e9930(long *param_1,long param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 8;
  }
  if ((lVar1 != 0) && ((*(long *)(lVar1 + 8) == 0 || (*(long *)(*(long *)(lVar1 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    lStack_20 = param_2;
    if (lStack_18 != 0) {
      do {
        func_0x0001090e9b68();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x000107c278e4(lVar1,&lStack_20);
    func_0x0001090e9b94();
    return;
  }
  return;
}



/* Entry: 1090e994c; end: 1090e9973;  */

long FUN_1090e994c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1090e9974();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1090e9974; end: 1090e99a3;  */

undefined8 * FUN_1090e9974(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0xae4c415c9882ba) {
    puVar1 = (undefined8 *)(param_2 * 0x178);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bfe188();
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110ad77e0;
  param_1[1] = 0;
  FUN_1090e99d8(param_1 + 3);
  return param_1;
}



/* Entry: 1090e99a4; end: 1090e99d7;  */

undefined8 * FUN_1090e99a4(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110ad77e0;
  param_1[1] = 0;
  FUN_1090e99d8(param_1 + 3);
  return param_1;
}



/* Entry: 1090e99d8; end: 1090e99df;  */

undefined8 *
FUN_1090e99d8(undefined8 *param_1,int *param_2,long *param_3,long param_4,long *param_5,
             long *param_6)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long extraout_x8;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  int extraout_w11;
  
  iVar2 = *param_2;
  *param_1 = &PTR_FUN_110ad9d98;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (long)iVar2;
  lVar6 = *param_3;
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
    do {
      func_0x0001090e0fc4();
      lVar6 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[4] = lVar6;
  _memcpy(param_1 + 5,param_4,0x48);
  lVar6 = *param_5;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_1[0xe] = lVar6;
  lVar8 = *param_6;
  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar8 + 0x10) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar6 = param_1[0xe];
  }
  param_1[0xf] = lVar8;
  param_1[0x10] = &UNK_10dd5b8b0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x11] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = &UNK_10dd5b8b0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x17] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = &UNK_10dd5b8b0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2a] = 0;
  uVar7 = *(ulong *)(lVar6 + 0x10);
  uVar9 = *(ulong *)(param_4 + 0x18);
  if (uVar9 < 2) {
    uVar9 = 1;
  }
  uVar5 = 0;
  if (uVar7 != 0) {
    uVar5 = uVar9 / uVar7;
  }
  lVar6 = uVar9 - uVar5 * uVar7;
  if (lVar6 != 0) {
    uVar9 = (uVar9 + uVar7) - lVar6;
  }
  param_1[0x26] = uVar9;
  FUN_1090df5e4(param_1);
  return param_1;
}



/* Entry: 1090e99e0; end: 1090e9a3b;  */

void FUN_1090e99e0(long param_1,long param_2,undefined8 param_3)

{
  long extraout_x8;
  int extraout_w11;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    uStack_20 = param_3;
    if (lStack_18 != 0) {
      do {
        func_0x0001090e9b68();
        param_2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x000107c278e4(param_2,&uStack_20);
    func_0x0001090e9b94();
    return;
  }
  return;
}



/* Entry: 1090e9a3c; end: 1090e9a4f;  */

void FUN_1090e9a3c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1090e9a50; end: 1090e9a63;  */

void FUN_1090e9a50(void)

{
  func_0x0001090e9a6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090e9a64; end: 1090e9cf7;  */

void FUN_1090e9a64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001090e9ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1090e9cf8; end: 1090e9f33;  */

undefined8 * FUN_1090e9cf8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = param_1 + 3;
  *param_1 = &PTR_FUN_110ada6d8;
  __ZNSt3__15mutex4lockEv(puVar1);
  plVar2 = param_1 + 0x19;
  if (*plVar2 != 0) {
    func_0x0001090e9db0(param_1,plVar2);
  }
  __ZNSt3__15mutex6unlockEv(puVar1);
  FUN_1090beb08(param_1 + 0x1c);
  FUN_1090eb158(param_1 + 0x1b);
  func_0x0001090eb114(param_1 + 0x1a);
  FUN_1090ac2a8(plVar2);
  FUN_1090a94d4(param_1 + 0x18);
  FUN_1090ab6f0(param_1 + 0x17);
  FUN_1090ab6f0(param_1 + 0x16);
  func_0x0001090fd4c0(param_1 + 0xc);
  FUN_1090ac188(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(puVar1);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 1090e9f34; end: 1090e9f37;  */

undefined8 * FUN_1090e9f34(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = param_1 + 3;
  *param_1 = &PTR_FUN_110ada6d8;
  __ZNSt3__15mutex4lockEv(puVar1);
  plVar2 = param_1 + 0x19;
  if (*plVar2 != 0) {
    func_0x0001090e9db0(param_1,plVar2);
  }
  __ZNSt3__15mutex6unlockEv(puVar1);
  FUN_1090beb08(param_1 + 0x1c);
  FUN_1090eb158(param_1 + 0x1b);
  func_0x0001090eb114(param_1 + 0x1a);
  FUN_1090ac2a8(plVar2);
  FUN_1090a94d4(param_1 + 0x18);
  FUN_1090ab6f0(param_1 + 0x17);
  FUN_1090ab6f0(param_1 + 0x16);
  func_0x0001090fd4c0(param_1 + 0xc);
  FUN_1090ac188(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(puVar1);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 1090e9f38; end: 1090e9f4b;  */

void FUN_1090e9f38(void)

{
  FUN_1090e9cf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090e9f4c; end: 1090e9fef;  */

void FUN_1090e9f4c(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  int extraout_w10;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  uStack_38 = param_4;
  (**(code **)(**(long **)(param_2 + 0xc0) + 0x58))(&uStack_48);
  FUN_1090eb19c(&lStack_50,&uStack_48,param_5,&uStack_40);
  lVar1 = lStack_50;
  uVar2 = *(undefined8 *)(param_2 + 0xc0);
  func_0x0001090ebe68(uVar2);
  func_0x0001090ef2f4(lVar1,uVar2,param_5);
  if ((lStack_50 != 0) && (*(long *)(lStack_50 + 0x10) != 0)) {
    do {
      func_0x0001090ebd44();
    } while (extraout_w10 != 0);
  }
  *param_1 = lStack_50;
  func_0x0001090eb460();
  FUN_1090abe10(uStack_48);
  return;
}



/* Entry: 1090e9ff0; end: 1090ea097;  */

void FUN_1090e9ff0(void)

{
  long unaff_x20;
  
  func_0x0001090ebdd4();
  func_0x0001090ebdac();
  func_0x0001090ea01c(unaff_x20 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x20 + 0x18);
  return;
}



/* Entry: 1090ea098; end: 1090ea0e7;  */

void FUN_1090ea098(float param_1,long param_2)

{
  undefined1 auStack_40 [16];
  
  func_0x0001090ebcd0();
  if (*(float *)(param_2 + 0x11c) != param_1) {
    *(float *)(param_2 + 0x11c) = param_1;
    FUN_1090ea0e8(param_2,auStack_40);
  }
  func_0x0001090ebd88();
  return;
}



/* Entry: 1090ea0e8; end: 1090ea1db;  */

void FUN_1090ea0e8(long param_1)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 uStack_a8;
  char cStack_a7;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined1 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  
  func_0x0001090ebdd4();
  uStack_60 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (*(long *)(param_1 + 200) != 0) {
    plVar2 = *(long **)(*(long *)(param_1 + 200) + 0x20);
    (**(code **)(*plVar2 + 0x78))();
    _memcpy(&uStack_a0,plVar2,0x41);
  }
  uVar1 = *(undefined1 *)(unaff_x20 + 0x129);
  (**(code **)(**(long **)(unaff_x20 + 0xc0) + 0x30))();
  uVar8 = *(undefined4 *)(unaff_x20 + 0x11c);
  lVar3 = *(long *)(unaff_x20 + 200);
  cStack_a7 = (char)unaff_x20 + '`';
  func_0x0001090fd544();
  puStack_b8 = &uStack_a0;
  uStack_a6 = 0;
  uStack_a4 = 0;
  lStack_c0 = unaff_x20 + 0xe8;
  uStack_b0 = CONCAT13(uVar7,CONCAT12(uVar6,CONCAT11(uVar5,uVar4)));
  uStack_ac = uVar8;
  uStack_a8 = lVar3 != 0;
  uStack_a5 = uVar1;
  FUN_1090eee30(auStack_d0,&lStack_c0);
  FUN_1090ea3f8();
  func_0x000107c278f8(uStack_c8);
  return;
}



/* Entry: 1090ea1dc; end: 1090ea213;  */

undefined4 FUN_1090ea1dc(long param_1)

{
  undefined4 uVar1;
  
  func_0x0001090ebdac();
  uVar1 = *(undefined4 *)(param_1 + 0x11c);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x18);
  return uVar1;
}



/* Entry: 1090ea214; end: 1090ea2c7;  */

void FUN_1090ea214(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 auStack_40 [16];
  
  func_0x0001090ebcf4(param_1 + 0x18);
  plVar2 = (long *)(param_1 + 200);
  lVar1 = *plVar2;
  if (lVar1 != *param_2) {
    *plVar2 = 0;
    lStack_48 = lVar1;
    if (lVar1 != 0) {
      func_0x0001090e9db0(param_1,&lStack_48);
    }
    FUN_1090ea2c8(plVar2,param_2);
    if (*param_2 != 0) {
      FUN_1090ea310(param_1,param_2);
    }
    func_0x00010b9a64d4(&uStack_50,&UNK_10f5510f9);
    FUN_1090ea3f8(param_1,auStack_40,0,&uStack_50);
    func_0x000107c278f8(uStack_50);
    func_0x0001090ebe3c();
    FUN_1090ac2cc(lVar1);
  }
  func_0x0001090ebda4();
  return;
}



/* Entry: 1090ea2c8; end: 1090ea30f;  */

void FUN_1090ea2c8(undefined8 param_1,long *param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  long *unaff_x19;
  
  func_0x0001090ebeb8();
  if (!(bool)in_ZR) {
    lVar1 = *param_2;
    if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
      do {
        func_0x0001090ebe18();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *unaff_x19 = lVar1;
    FUN_1090ac2cc();
  }
  return;
}



/* Entry: 1090ea310; end: 1090ea3f7;  */

void FUN_1090ea310(long param_1)

{
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w11;
  long *unaff_x19;
  long unaff_x20;
  long *plVar1;
  long lVar2;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x0001090ebdd4();
  plVar1 = (long *)(param_1 + 0xd8);
  if (*plVar1 == 0) {
    FUN_1090eb4fc(&lStack_40,&stack0xffffffffffffffb8);
    uStack_38 = 0;
    if (lStack_40 != 0) {
      do {
        func_0x0001090ebe9c();
        uStack_38 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x0001090ea914(plVar1,&uStack_38);
    FUN_1090eb178(uStack_38);
    FUN_1090eba20(lStack_40);
  }
  FUN_1090ec130(*unaff_x19,plVar1);
  (**(code **)(**(long **)(*unaff_x19 + 0x38) + 0x48))
            (*(long **)(*unaff_x19 + 0x38),*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x0001090ebeac(*(undefined8 *)(*unaff_x19 + 0x38));
  (*extraout_x8_00)(0x3f800000);
  lVar2 = *(long *)(*(long *)(*unaff_x19 + 0x40) + 0x38);
  if (lVar2 != 0) {
    do {
      func_0x0001090ebd5c();
    } while (extraout_w10 != 0);
    FUN_1090e4434(lVar2);
  }
  if (*(char *)(unaff_x20 + 0x124) == '\x01') {
    FUN_1090eca68(*unaff_x19);
  }
  FUN_109097138(lVar2);
  return;
}



/* Entry: 1090ea3f8; end: 1090ea863;  */

ulong FUN_1090ea3f8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  int iVar2;
  byte bVar3;
  long **pplVar4;
  code *extraout_x8;
  code *extraout_x8_00;
  code *pcVar5;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  ulong uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  long *plStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  iVar2 = *(int *)(param_1 + 0x118);
  uVar6 = *(ulong *)(param_1 + 200);
  iVar7 = (int)param_3;
  if (uVar6 != 0) {
    if (*(long *)(uVar6 + 0x10) != 0) {
      do {
        func_0x0001090ebd44();
      } while (extraout_w10 != 0);
    }
    if (iVar2 != iVar7) {
      lVar9 = *(long *)(*(long *)(uVar6 + 0x40) + 0x38);
      if (lVar9 != 0) {
        do {
          func_0x0001090ebd5c();
        } while (extraout_w10_00 != 0);
        FUN_1090ef1fc(&uStack_80,iVar2);
        FUN_1090ef1fc(&plStack_68,param_3);
        FUN_1090e44f4(lVar9,&uStack_80,&plStack_68,param_4);
        func_0x000107c278f8(plStack_68);
        func_0x000107c278f8(uStack_80);
      }
      FUN_109097138(lVar9);
    }
  }
  switch(param_3 & 0xffffffff) {
  case 0:
  case 2:
  case 3:
  case 4:
code_r0x0001090ea4cc:
    func_0x0001090ebeac(*(undefined8 *)(param_1 + 0xc0));
    pcVar5 = extraout_x8;
    break;
  case 1:
    func_0x0001090ebeac(*(undefined4 *)(param_1 + 0x11c),*(undefined8 *)(param_1 + 0xc0));
    pcVar5 = extraout_x8_00;
    break;
  case 5:
    if ((uVar6 == 0) || ((*(byte *)(param_1 + 0x125) & 1) == 0)) goto code_r0x0001090ea4cc;
    if (iVar2 == iVar7) {
      *(undefined4 *)(param_1 + 0x118) = 5;
      goto LAB_1090ea83c;
    }
    func_0x0001090ec734(&uStack_58,uVar6,0,0x100000001,0,0x100000001,0,0x100000001);
    FUN_1090eb134(uStack_58);
    *(undefined4 *)(param_1 + 0x118) = 5;
    goto code_r0x0001090ea648;
  default:
    goto LAB_1090ea4dc;
  }
  (*pcVar5)();
LAB_1090ea4dc:
  *(int *)(param_1 + 0x118) = iVar7;
  if (iVar2 == iVar7) goto LAB_1090ea83c;
  switch(iVar7) {
  case 1:
    plVar8 = *(long **)(param_1 + 0x58);
    if (plVar8 != (long *)0x0) {
      do {
        func_0x0001090ebd5c();
      } while (extraout_w10_01 != 0);
      func_0x0001090ebd9c();
      pcVar5 = *(code **)(*plVar8 + 0x20);
code_r0x0001090ea69c:
      (*pcVar5)(plVar8);
      func_0x0001090ebdf0();
    }
    break;
  case 2:
    plVar8 = *(long **)(param_1 + 0x58);
    if (plVar8 != (long *)0x0) {
      do {
        func_0x0001090ebd5c();
      } while (extraout_w10_04 != 0);
      func_0x0001090ebd9c();
      pcVar5 = *(code **)(*plVar8 + 0x28);
      goto code_r0x0001090ea69c;
    }
    break;
  case 3:
    plVar8 = *(long **)(param_1 + 0x58);
    if (plVar8 != (long *)0x0) {
      do {
        func_0x0001090ebd5c();
      } while (extraout_w10_02 != 0);
      func_0x0001090ebd9c();
      pcVar5 = *(code **)(*plVar8 + 0x30);
      goto code_r0x0001090ea69c;
    }
    break;
  case 4:
    lVar9 = param_1 + 0x60;
    func_0x0001090fd4e8(&uStack_80);
    if ((char)uStack_78 == '\x01') {
      plVar8 = *(long **)(param_1 + 0x58);
      if (plVar8 != (long *)0x0) {
        do {
          func_0x0001090ebd5c();
        } while (extraout_w10_03 != 0);
        func_0x0001090ebd9c();
        if ((uStack_78 & 1) == 0) {
          func_0x0001080da3e4();
          func_0x0001090ebdac();
          bVar3 = *(byte *)(lVar9 + 0x125);
          __ZNSt3__15mutex6unlockEv(lVar9 + 0x18);
          return (ulong)bVar3;
        }
        (**(code **)(*plVar8 + 0x38))(plVar8,&uStack_80);
        func_0x0001090ebdf0();
      }
      func_0x0001090ebe94();
    }
    FUN_1090e1d60(&uStack_80);
    goto LAB_1090ea6ac;
  case 5:
code_r0x0001090ea648:
    bVar3 = uVar6 != 0 & *(byte *)(param_1 + 0x125);
    plVar8 = *(long **)(param_1 + 0x58);
    if (plVar8 == (long *)0x0) {
      if (bVar3 == 0) break;
    }
    else {
      do {
        func_0x0001090ebd5c();
      } while (extraout_w10_05 != 0);
      func_0x0001090ebd9c();
      if (bVar3 == 0) {
        pcVar5 = *(code **)(*plVar8 + 0x40);
        goto code_r0x0001090ea69c;
      }
      (**(code **)(*plVar8 + 0x58))(plVar8);
      func_0x0001090ebdf0();
    }
    func_0x0001090ebe94();
    goto code_r0x0001090ea6b0;
  default:
    goto LAB_1090ea6ac;
  }
  func_0x0001090ebe94();
LAB_1090ea6ac:
  if (uVar6 != 0) {
code_r0x0001090ea6b0:
    if ((*(ulong *)(param_1 + 200) == uVar6) && (*(int *)(param_1 + 0x118) == iVar7)) {
      uStack_80 = *(undefined8 *)(*(long *)(uVar6 + 0x40) + 0x18);
      uStack_78 = *(ulong *)(*(long *)(uVar6 + 0x40) + 0x20);
      if (uStack_78 != 0) {
        do {
          func_0x0001090ebd44();
        } while (extraout_w10_06 != 0);
      }
      func_0x0001090ebe74();
      func_0x0001090e1fd4(&uStack_80);
      plVar8 = *(long **)(*(long *)(uVar6 + 0x40) + 0x18);
      lStack_60 = *(long *)(*(long *)(uVar6 + 0x40) + 0x20);
      plStack_68 = plVar8;
      if (lStack_60 != 0) {
        do {
          func_0x0001090ebd44();
        } while (extraout_w10_07 != 0);
      }
      FUN_1090ef1fc(&lStack_88,param_3);
      puVar1 = &UNK_10f7d0ef0;
      if (lStack_88 != 0) {
        puVar1 = (undefined *)(lStack_88 + 0x18);
      }
      func_0x0001080e3e74(&uStack_80,puVar1);
      (**(code **)(*plVar8 + 0x10))(plVar8,3,&uStack_80);
      *(long **)(param_1 + 0x130) = plVar8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_80);
      func_0x000107c278f8(lStack_88);
      pplVar4 = &plStack_68;
      func_0x0001090e1fd4();
      if (iVar7 == 3) {
        func_0x0001090ebdf8();
        if (extraout_x8_01 != 0) {
          do {
            func_0x0001090ebd44();
          } while (extraout_w10_08 != 0);
        }
        (*(code *)(*pplVar4)[5])();
        func_0x0001090ebe80();
        func_0x0001090ebdf8();
        if (extraout_x8_02 != 0) {
          do {
            func_0x0001090ebd44();
          } while (extraout_w10_09 != 0);
        }
        (*(code *)(*pplVar4)[2])();
        *(int *)(param_1 + 0x138) = (int)pplVar4;
        func_0x0001090ebe80();
      }
      else if (iVar2 == 3) {
        func_0x0001090ebdf8();
        if (extraout_x8_03 != 0) {
          do {
            func_0x0001090ebd44();
          } while (extraout_w10_10 != 0);
        }
        (*(code *)(*pplVar4)[3])();
        func_0x0001090ebe80();
        *(undefined4 *)(param_1 + 0x138) = 0;
      }
    }
  }
  plVar8 = *(long **)(param_1 + 0x58);
  if (plVar8 != (long *)0x0) {
    do {
      func_0x0001090ebd5c();
    } while (extraout_w10_11 != 0);
    func_0x0001090ebd9c();
    (**(code **)(*plVar8 + 0x48))(plVar8,param_3);
    func_0x0001090ebdf0();
  }
  FUN_1090ac1ac(plVar8);
LAB_1090ea83c:
  FUN_1090ac2cc(uVar6);
  return uVar6;
}



/* Entry: 1090ea864; end: 1090ea8bb;  */

undefined1 FUN_1090ea864(long param_1)

{
  undefined1 uVar1;
  
  func_0x0001090ebdac();
  uVar1 = *(undefined1 *)(param_1 + 0x125);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x18);
  return uVar1;
}



/* Entry: 1090ea8bc; end: 1090ea8cb;  */

void FUN_1090ea8bc(long param_1)

{
  undefined1 auStack_40 [16];
  
  func_0x0001090ebcd0();
  if (*(float *)(param_1 + 0x11c) != 1.0) {
    *(undefined4 *)(param_1 + 0x11c) = 0x3f800000;
    FUN_1090ea0e8(param_1,auStack_40);
  }
  func_0x0001090ebd88();
  return;
}



/* Entry: 1090ea8cc; end: 1090ea947;  */

void FUN_1090ea8cc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *unaff_x19;
  
  func_0x0001090ebdc8();
  if (param_1 != (long *)0x0) {
    *unaff_x19 = 0;
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
      (**(code **)(*param_1 + 8))();
    }
  }
  return;
}



/* Entry: 1090ea948; end: 1090eabe3;  */

void FUN_1090ea948(long **param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 in_ZR;
  long *plVar5;
  long lVar6;
  uint uVar7;
  undefined8 extraout_x8;
  long lVar8;
  ushort uVar9;
  ushort uVar10;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  int iStack_a0;
  int iStack_9c;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  func_0x0001090ebd34();
  uStack_38 = extraout_x8;
  if (param_1[0x19] == (long *)0x0) goto LAB_1090eabc0;
  (**(code **)(*(long *)param_1[0x19][4] + 0x30))(&plStack_80);
  lStack_90 = 0;
  lStack_88 = 0;
  for (; lVar4 = lStack_88, lVar8 = lStack_90, plStack_80 != plStack_78; plStack_80 = plStack_80 + 1
      ) {
    lVar8 = *plStack_80;
    if (*(int *)(lVar8 + 0x10) == 2) {
      if (lStack_88 == 0) {
        plVar5 = &lStack_88;
        goto LAB_1090ea9c8;
      }
    }
    else if ((*(int *)(lVar8 + 0x10) == 1) && (lStack_90 == 0)) {
      plVar5 = &lStack_90;
LAB_1090ea9c8:
      if (plVar5 != plStack_80) {
        plVar1 = (long *)(lVar8 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        *plVar5 = lVar8;
        FUN_1090aeb84(0);
      }
    }
  }
  if ((lStack_88 == 0) || (*(char *)(param_1 + 0x24) != '\x01')) {
    iStack_a0 = 0;
  }
  else {
    iStack_a0 = *(int *)(lStack_88 + 0x20);
  }
  if ((lStack_90 == 0) || (*(char *)((long)param_1 + 0x121) != '\x01')) {
    iStack_9c = 0;
    if (iStack_a0 == 0) goto LAB_1090eaa34;
LAB_1090eaa4c:
    uVar9 = (ushort)(param_1[0x16] != (long *)0x0);
    if (iStack_9c == 0) goto LAB_1090eaa3c;
LAB_1090eaa5c:
    uVar10 = 0;
    if (param_1[0x17] != (long *)0x0) {
      uVar10 = 0x100;
    }
  }
  else {
    iStack_9c = *(int *)(lStack_90 + 0x20);
    if (iStack_a0 != 0) goto LAB_1090eaa4c;
LAB_1090eaa34:
    uVar9 = 0;
    if (iStack_9c != 0) goto LAB_1090eaa5c;
LAB_1090eaa3c:
    uVar10 = 0;
  }
  if ((*(byte *)((long)param_1 + 0x129) & 1) == 0) {
    *(undefined1 *)((long)param_1 + 0x129) = 1;
  }
  *(ushort *)((long)param_1 + 0x127) = uVar10 | uVar9;
  plVar5 = param_1[0x19];
  plStack_58 = param_1[0x16];
  if ((plStack_58 != (long *)0x0) && (plStack_58[2] != 0)) {
    plVar1 = (long *)(plStack_58[2] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_50 = param_1[0x17];
  if ((plStack_50 != (long *)0x0) && (plStack_50[2] != 0)) {
    plVar1 = (long *)(plStack_50[2] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_68 = 0x1090ebb4c;
  ppuStack_60 = &PTR_FUN_110ada830;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_48 = CONCAT44(iStack_9c,iStack_a0);
  FUN_1090ec4c8(plVar5,&uStack_68);
  func_0x0001090ebe30(ppuStack_60);
  func_0x0001090eae78(&uStack_b0);
  *(bool *)((long)param_1 + 0x122) = lVar4 != 0;
  in_ZR = lVar8 == 0;
  *(bool *)((long)param_1 + 0x123) = !(bool)in_ZR;
  if (lVar4 == 0) {
    uVar7 = 0;
  }
  else {
    lVar6 = lVar4;
    func_0x0001090e7d9c();
    if (((lVar6 == 0) || (*(int *)(lVar6 + 0x14) == 0)) || (*(int *)(lVar6 + 0x18) == 0)) {
      uVar7 = 1;
    }
    else {
      (**(code **)(*param_1[0x16] + 0x68))(param_1[0x16],lVar6 + 0x1c);
      uVar7 = (uint)*(byte *)((long)param_1 + 0x122);
    }
  }
  param_2 = (ulong)(uVar7 & 1);
  (**(code **)(*param_1[0x16] + 0x48))();
  if (param_1[0x17] != (long *)0x0) {
    param_2 = (ulong)*(byte *)((long)param_1 + 0x123);
    (**(code **)(*param_1[0x17] + 0x48))();
  }
  FUN_1090aeb84(lVar8);
  FUN_1090aeb84(lVar4);
  param_1 = &plStack_80;
  func_0x0001090eb074();
LAB_1090eabc0:
  func_0x0001090ebd14(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001090ebcd0();
    if (((param_2 & 1) != 0) || (param_1[0x1c] != (long *)0x0)) {
      func_0x0001090eac28(param_1);
      func_0x0001090faf04();
    }
    func_0x0001090ebd88();
    return;
  }
  return;
}



/* Entry: 1090eabe4; end: 1090eae97;  */

void FUN_1090eabe4(long param_1,ulong param_2)

{
  func_0x0001090ebcd0();
  if (((param_2 & 1) != 0) || (*(long *)(param_1 + 0xe0) != 0)) {
    func_0x0001090eac28(param_1);
    func_0x0001090faf04();
  }
  func_0x0001090ebd88();
  return;
}



/* Entry: 1090eae98; end: 1090eafd7;  */

void FUN_1090eae98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lStack_a0 = param_1 + 0x18;
  uStack_98 = 1;
  uStack_90 = param_6;
  uStack_88 = param_7;
  uStack_80 = param_4;
  uStack_78 = param_5;
  uStack_70 = param_2;
  uStack_68 = param_3;
  __ZNSt3__15mutex4lockEv();
  lVar1 = *(long *)(param_1 + 200);
  if (lVar1 != 0) {
    plVar4 = (long *)(param_1 + 0xd0);
    lVar5 = *plVar4;
    if (lVar5 != 0) {
      uStack_a8 = *(undefined8 *)(lVar5 + 0x20);
      lStack_b0 = *(long *)(lVar5 + 0x18);
      plVar2 = &lStack_b0;
      func_0x0001090fbec0(plVar2,&uStack_70);
      if ((int)plVar2 != 0) {
        uStack_b8 = *(undefined8 *)(lVar5 + 0x30);
        uStack_c0 = *(undefined8 *)(lVar5 + 0x28);
        puVar3 = &uStack_c0;
        func_0x0001090fbec0(puVar3,&uStack_80);
        if ((int)puVar3 != 0) {
          uStack_c8 = *(undefined8 *)(lVar5 + 0x40);
          uStack_d0 = *(undefined8 *)(lVar5 + 0x38);
          puVar3 = &uStack_90;
          func_0x0001090fbec0(puVar3,&uStack_d0);
          if (((ulong)puVar3 & 1) != 0) goto LAB_1090eafb0;
        }
      }
      *(undefined1 *)(lVar5 + 0x10) = 1;
      FUN_1090ea8cc(plVar4);
      lVar1 = *(long *)(param_1 + 200);
    }
    func_0x0001090ec734(&lStack_b0,lVar1,param_2,param_3,param_4,param_5,param_6,param_7);
    lVar1 = lStack_b0;
    if (plVar4 != &lStack_b0) {
      lStack_b0 = 0;
      lVar5 = *plVar4;
      *plVar4 = lVar1;
      FUN_1090eb134(lVar5);
    }
    FUN_1090eb134(lStack_b0);
  }
LAB_1090eafb0:
  FUN_1090eb46c(&lStack_a0);
  return;
}



/* Entry: 1090eafd8; end: 1090eb0d7;  */

void FUN_1090eafd8(long param_1)

{
  int iVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_50 [16];
  
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    __ZNSt3__120__throw_system_errorEiPKc(1,&UNK_10f551148);
    func_0x0001090ebdd4();
    func_0x0001090ebcd0();
    iVar1 = (int)unaff_x20 + 0x60;
    func_0x0001090fd570();
    if (iVar1 != 0) {
      lVar2 = *(long *)(unaff_x20 + 0x58);
      if (lVar2 != 0) {
        do {
          func_0x0001090ebd5c();
        } while (extraout_w10 != 0);
        FUN_1090eafd8(auStack_50);
        func_0x0001090ebdb4();
        FUN_1090ebaf8(auStack_50);
      }
      FUN_1090ac1ac(lVar2);
    }
    func_0x0001090ebd88();
    return;
  }
  func_0x0001090ebdc8();
  __ZNSt3__15mutex6unlockEv();
  *(undefined1 *)(unaff_x19 + 8) = 0;
  return;
}



/* Entry: 1090eb0d8; end: 1090eb0df;  */

void FUN_1090eb0d8(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001090ebdd4(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    FUN_1090aeb5c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1090eb0e0; end: 1090eb133;  */

void FUN_1090eb0e0(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001090ebdd4();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    FUN_1090aeb5c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1090eb134; end: 1090eb157;  */

void FUN_1090eb134(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
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
                    /* WARNING: Could not recover jumptable at 0x0001090ebd98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090eb158; end: 1090eb177;  */

void FUN_1090eb158(void)

{
  func_0x0001090ebdc8();
  FUN_1090eb178();
  return;
}



/* Entry: 1090eb178; end: 1090eb19b;  */

void FUN_1090eb178(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
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
                    /* WARNING: Could not recover jumptable at 0x0001090ebd98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090eb19c; end: 1090eb1e3;  */

void FUN_1090eb19c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  func_0x0001090ebd34();
  uStack_28 = extraout_x8;
  FUN_1090eb1e4(auStack_38);
  *param_1 = auStack_38[0];
  func_0x0001090ebd14(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_1090eb1e4;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_1090eb210(&uStack_51,param_2,param_3,param_4);
  return;
}



/* Entry: 1090eb1e4; end: 1090eb20f;  */

void FUN_1090eb1e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_1090eb210(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 1090eb210; end: 1090eb287;  */

void FUN_1090eb210(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined1 *extraout_x8_02;
  undefined1 *puVar3;
  int extraout_w11;
  undefined1 *puStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined8 uStack_38;
  
  puVar1 = auStack_50;
  func_0x0001090ebe08();
  func_0x0001090ebd34();
  uStack_38 = extraout_x8_00;
  FUN_1090eb2a4(auStack_50,1);
  FUN_1090eb2f8(lStack_40);
  lVar2 = lStack_40;
  lStack_40 = 0;
  FUN_1090eb288(extraout_x8,lVar2 + 0x18);
  FUN_1090eb450();
  func_0x0001090ebd14(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *extraout_x8_01 = puVar1;
  extraout_x8_01[1] = lVar2;
  puVar3 = (undefined1 *)0x0;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1 + 8;
  }
  if ((puVar3 != (undefined1 *)0x0) &&
     ((*(long *)(puVar3 + 8) == 0 || (*(long *)(*(long *)(puVar3 + 8) + 8) == -1)))) {
    pcStack_58 = FUN_1090eb288;
    lStack_68 = extraout_x8_01[1];
    puStack_70 = puVar1;
    puStack_60 = &stack0xfffffffffffffff0;
    if (lStack_68 != 0) {
      do {
        func_0x0001090ebe18();
        puVar3 = extraout_x8_02;
      } while (extraout_w11 != 0);
    }
    func_0x000107c278e4(puVar3,&puStack_70);
    func_0x000107c284e8(&puStack_70);
    return;
  }
  return;
}



/* Entry: 1090eb288; end: 1090eb2a3;  */

void FUN_1090eb288(long *param_1,long param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 8;
  }
  if ((lVar1 != 0) && ((*(long *)(lVar1 + 8) == 0 || (*(long *)(*(long *)(lVar1 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    lStack_20 = param_2;
    if (lStack_18 != 0) {
      do {
        func_0x0001090ebe18();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x000107c278e4(lVar1,&lStack_20);
    func_0x000107c284e8(&lStack_20);
    return;
  }
  return;
}



/* Entry: 1090eb2a4; end: 1090eb2cb;  */

long FUN_1090eb2a4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1090eb2cc();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1090eb2cc; end: 1090eb2f7;  */

undefined8 * FUN_1090eb2cc(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x222222222222223) {
    puVar1 = (undefined8 *)(param_2 * 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bfe188();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ada720;
  FUN_1090eb350(param_1 + 3);
  return param_1;
}



/* Entry: 1090eb2f8; end: 1090eb327;  */

undefined8 * FUN_1090eb2f8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ada720;
  FUN_1090eb350(param_1 + 3);
  return param_1;
}



/* Entry: 1090eb328; end: 1090eb32b;  */

void FUN_1090eb328(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ada720;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1090eb32c; end: 1090eb33f;  */

void FUN_1090eb32c(void)

{
  FUN_1090eb3dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090eb340; end: 1090eb34f;  */

void FUN_1090eb340(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001090eb348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1090eb350; end: 1090eb3db;  */

undefined8 *
FUN_1090eb350(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 uStack_68;
  undefined8 auStack_60 [5];
  undefined8 uStack_38;
  
  func_0x0001090ebd34();
  uStack_68 = *param_3;
  uStack_38 = extraout_x8;
  (**(code **)(param_3[1] + 0x10))(auStack_60,param_3 + 1);
  puVar1 = param_1;
  func_0x0001090ef3b8(param_1,param_2,&uStack_68,*param_4,param_4[1]);
  func_0x0001090ebe30(auStack_60[0]);
  func_0x0001090ebd14(uStack_38);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  *puVar1 = &PTR_FUN_110ada720;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return puVar1;
}



/* Entry: 1090eb3dc; end: 1090eb3eb;  */

void FUN_1090eb3dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ada720;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1090eb3ec; end: 1090eb44f;  */

void FUN_1090eb3ec(long param_1,long param_2,undefined8 param_3)

{
  long extraout_x8;
  int extraout_w11;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    uStack_20 = param_3;
    if (lStack_18 != 0) {
      do {
        func_0x0001090ebe18();
        param_2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x000107c278e4(param_2,&uStack_20);
    func_0x000107c284e8(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1090eb450; end: 1090eb46b;  */

void FUN_1090eb450(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1090eb46c; end: 1090eb4ef;  */

undefined8 * FUN_1090eb46c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    __ZNSt3__15mutex6unlockEv(*param_1);
  }
  return param_1;
}



/* Entry: 1090eb4f0; end: 1090eb4fb;  */

void FUN_1090eb4f0(void)

{
  return;
}



/* Entry: 1090eb4fc; end: 1090eb5a7;  */

void FUN_1090eb4fc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x20;
  __Znwm();
  func_0x0001090eb52c();
  *param_1 = uVar1;
  return;
}



/* Entry: 1090eb5a8; end: 1090eb5ab;  */

undefined8 * FUN_1090eb5a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ada790;
  if (param_1[3] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1090eb5ac; end: 1090eb5bf;  */

void FUN_1090eb5ac(void)

{
  func_0x0001090eb9b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090eb5c0; end: 1090eb60f;  */

void FUN_1090eb5c0(undefined8 param_1,long param_2)

{
  undefined8 uStack_40;
  
  func_0x0001090ebd04();
  if (uStack_40 != 0) {
    func_0x0001090ebcf4(uStack_40 + 0x18);
    if (param_2 == *(long *)(uStack_40 + 200)) {
      FUN_1090ea948(uStack_40);
    }
    func_0x0001090ebda4();
  }
  func_0x0001090ebd6c();
  return;
}



/* Entry: 1090eb610; end: 1090eb8ff;  */

void FUN_1090eb610(undefined8 param_1,long param_2,undefined8 param_3)

{
  int extraout_w10;
  long lVar1;
  long lStack_50;
  undefined1 auStack_40 [16];
  
  func_0x0001090ebd04();
  if (lStack_50 != 0) {
    func_0x0001090ebcf4(lStack_50 + 0x18);
    if (param_2 == *(long *)(lStack_50 + 200)) {
      lVar1 = lStack_50 + 0x60;
      func_0x0001090fd570(lVar1,param_3);
      if ((int)lVar1 != 0) {
        lVar1 = *(long *)(lStack_50 + 0x58);
        if (lVar1 != 0) {
          do {
            func_0x0001090ebd5c();
          } while (extraout_w10 != 0);
          FUN_1090eafd8(auStack_40);
          func_0x0001090ebdb4();
          FUN_1090ebaf8(auStack_40);
        }
        FUN_1090ac1ac(lVar1);
      }
    }
    func_0x0001090ebda4();
  }
  func_0x0001090ebd6c();
  return;
}



/* Entry: 1090eb900; end: 1090eba1f;  */

void FUN_1090eb900(long *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long lStack_30;
  long lStack_28;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else if (*(long *)(param_2 + 8) == 0) {
    lVar1 = *(long *)(param_2 + 0x10);
    *param_1 = param_2;
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      do {
        func_0x0001090ebd44();
      } while (extraout_w10_00 != 0);
    }
  }
  else {
    func_0x000107c278f0(&lStack_30);
    if (lStack_30 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = param_2;
      param_1[1] = lStack_28;
      if (lStack_28 != 0) {
        do {
          func_0x0001090ebd44();
        } while (extraout_w10 != 0);
      }
    }
    func_0x000107c284e8(&lStack_30);
  }
  return;
}



/* Entry: 1090eba20; end: 1090eba43;  */

void FUN_1090eba20(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
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
                    /* WARNING: Could not recover jumptable at 0x0001090ebd98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090eba44; end: 1090eba6b;  */

/* WARNING: Possible PIC construction at 0x0001090eba58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001090eba5c) */

undefined8 * FUN_1090eba44(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 1;
  func_0x0001090ebdc8();
  if (puVar1 != (undefined8 *)0x0) {
    *param_1 = 0;
    func_0x000107c3105c();
  }
  return param_1;
}



/* Entry: 1090eba6c; end: 1090ebaf7;  */

undefined8 FUN_1090eba6c(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001090ebe88(param_1 + 8);
  func_0x0001090ad7b0();
  FUN_1090ab714();
  return unaff_x19;
}



/* Entry: 1090ebaf8; end: 1090ebc43;  */

void FUN_1090ebaf8(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x19;
  long lStack_48;
  
  func_0x0001090ebdc8();
  if (param_1 == 0) {
    __ZNSt3__120__throw_system_errorEiPKc(1,&UNK_10f5510fd);
  }
  else if (*(char *)(unaff_x19 + 8) != '\x01') {
    __ZNSt3__15mutex4lockEv();
    *(undefined1 *)(unaff_x19 + 8) = 1;
    return;
  }
  puVar3 = &UNK_10f551126;
  piVar2 = (int *)0xb;
  __ZNSt3__120__throw_system_errorEiPKc();
  iVar1 = *(int *)(puVar3 + 0x24);
  *piVar2 = iVar1;
  if (iVar1 == 0) {
    lStack_48 = 0;
  }
  else {
    lStack_48 = *(long *)(puVar3 + 0x18);
    if ((lStack_48 != 0) && (*(long *)(lStack_48 + 0x10) != 0)) {
      do {
        func_0x0001090ebe18();
        lStack_48 = extraout_x8;
      } while (extraout_w11 != 0);
    }
  }
  func_0x0001090ebbfc(piVar2 + 2,&lStack_48);
  FUN_1090ab714(lStack_48);
  iVar1 = *(int *)(puVar3 + 0x20);
  piVar2[6] = iVar1;
  if (iVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(puVar3 + 0x10);
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
      do {
        func_0x0001090ebe18();
        lVar4 = extraout_x8_00;
      } while (extraout_w11_00 != 0);
    }
  }
  lStack_48 = lVar4;
  func_0x0001090ebbfc(piVar2 + 8,&lStack_48);
  FUN_1090ab714(lStack_48);
  return;
}



/* Entry: 1090ebc44; end: 1090ebec3;  */

undefined8 FUN_1090ebc44(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001090ebe88(param_1 + 8);
  func_0x0001090ad7b0();
  FUN_1090ab714();
  return unaff_x19;
}



/* Entry: 1090ebec4; end: 1090ec107;  */

undefined8 *
FUN_1090ebec4(undefined8 *param_1,long *param_2,long *param_3,long *param_4,long *param_5,
             long *param_6,undefined8 *param_7,undefined4 param_8)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  undefined8 uVar5;
  long extraout_x8_04;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_DAT_110ada8b8;
  *param_1 = &PTR_FUN_110ada860;
  lVar4 = *param_2;
  puVar2 = param_1;
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    do {
      func_0x0001090eedec();
      lVar4 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[4] = lVar4;
  lVar4 = *param_3;
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    do {
      func_0x0001090eedec();
      lVar4 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  param_1[5] = lVar4;
  uVar5 = 0;
  if (*param_4 != 0) {
    do {
      func_0x0001090eeb40();
      uVar5 = extraout_x8_01;
    } while (extraout_w11_01 != 0);
  }
  param_1[6] = uVar5;
  uVar5 = 0;
  if (*param_5 != 0) {
    do {
      func_0x0001090eeb40();
      uVar5 = extraout_x8_02;
    } while (extraout_w11_02 != 0);
  }
  uVar1 = SUB81(puVar2,0);
  uVar3 = (undefined1)param_8;
  param_1[7] = uVar5;
  lVar4 = *param_6;
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    do {
      func_0x0001090eedec();
      uVar1 = SUB81(puVar2,0);
      uVar3 = (undefined1)param_8;
      lVar4 = extraout_x8_03;
    } while (extraout_w11_03 != 0);
  }
  param_1[8] = lVar4;
  param_1[9] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  uVar5 = *param_7;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = uVar5;
  param_1[0x14] = 0;
  *(undefined8 *)((long)param_1 + 0xc5) = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0x32aaaba7;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((long)param_1 + 0x109) = 0;
  *(undefined8 *)((long)param_1 + 0x101) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined1 *)((long)param_1 + 0x134) = uVar3;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  func_0x0001090eec24();
  (**(code **)(extraout_x8_04 + 0x20))();
  func_0x0001090eec24();
  func_0x0001090eed88();
  *(undefined1 *)((long)param_1 + 0xcc) = uVar1;
  return param_1;
}



/* Entry: 1090ec108; end: 1090ec113;  */

undefined8 * FUN_1090ec108(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110ada860;
  param_1[3] = &PTR_DAT_110ada8b8;
  if ((*(char *)(param_1 + 0x25) == '\x01') &&
     (plVar2 = (long *)param_1[0xb], plVar2 != (long *)0x0)) {
    puVar1 = param_1 + 0x24;
    func_0x000108ad59b0();
    (**(code **)(*plVar2 + 0x20))(plVar2,*puVar1);
  }
  plVar2 = (long *)param_1[4];
  (**(code **)(*plVar2 + 0x20))(plVar2,0);
  FUN_1090ed33c(param_1 + 0x2a);
  if (param_1[0x27] != 0) {
    FUN_1090ed39c(param_1 + 0x27);
    __ZdlPv(param_1[0x27]);
  }
  func_0x0001090fd4c0(param_1 + 0x1a);
  func_0x0001090ed3d4(param_1 + 0x10);
  func_0x0001090ed3d4(param_1 + 0xd);
  func_0x0001090e1f44(param_1 + 0xb);
  func_0x0001090ed444(param_1 + 9);
  FUN_1090958e8(param_1 + 8);
  FUN_1090a94d4(param_1 + 7);
  FUN_109094fc4(param_1 + 6);
  FUN_1090b64f0(param_1 + 5);
  FUN_1090b651c(param_1 + 4);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 1090ec114; end: 1090ec127;  */

void FUN_1090ec114(void)

{
  func_0x0001090ec018();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090ec128; end: 1090ec12f;  */

void FUN_1090ec128(long param_1)

{
  func_0x0001090ec018(param_1 + -0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090ec130; end: 1090ec26f;  */

long * FUN_1090ec130(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  long *plVar1;
  undefined1 auStack_100 [72];
  undefined8 uStack_b8;
  undefined1 auStack_80 [72];
  undefined8 uStack_38;
  
  func_0x0001090eea88();
  plVar1 = (long *)*param_2;
  uStack_38 = extraout_x8;
  if (plVar1 != (long *)0x0) {
    do {
      func_0x0001090eeb0c();
    } while (extraout_w10 != 0);
  }
  func_0x0001090eebbc();
  if (plVar1 != (long *)0x0) {
    do {
      func_0x0001090eeb0c();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001090eee1c(FUN_1090ed514);
  func_0x0001090eeb90();
  func_0x0001090eec6c();
  if (plVar1 != (long *)0x0) {
    do {
      func_0x0001090eeb0c();
    } while (extraout_w10_01 != 0);
  }
  func_0x0001090eea6c();
  func_0x0001090eeaf0();
  func_0x0001090ed4f4(auStack_80);
  FUN_1090eb178(plVar1);
  func_0x0001090eea58(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001090eea88();
    plVar1 = (long *)*param_2;
    uStack_b8 = extraout_x8_00;
    if (plVar1 != (long *)0x0) {
      do {
        func_0x0001090eeb0c();
      } while (extraout_w10_02 != 0);
    }
    func_0x0001090eebbc();
    if (plVar1 != (long *)0x0) {
      do {
        func_0x0001090eeb0c();
      } while (extraout_w10_03 != 0);
    }
    func_0x0001090eee1c(FUN_1090ed750);
    func_0x0001090eeb90();
    func_0x0001090eec6c();
    if (plVar1 != (long *)0x0) {
      do {
        func_0x0001090eeb0c();
      } while (extraout_w10_04 != 0);
    }
    func_0x0001090eea6c();
    func_0x0001090eeaf0();
    func_0x0001090ed730(auStack_100);
    FUN_1090eb178();
    func_0x0001090eea58(uStack_b8);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      if (*plVar1 != 0) {
        *plVar1 = 0;
        func_0x000107c3105c();
      }
      return plVar1;
    }
  }
  return plVar1;
}



/* Entry: 1090ec270; end: 1090ec29b;  */

long * FUN_1090ec270(long *param_1)

{
  if (*param_1 != 0) {
    *param_1 = 0;
    func_0x000107c3105c();
  }
  return param_1;
}



/* Entry: 1090ec29c; end: 1090ec4c7;  */

uint FUN_1090ec29c(long param_1,int *param_2,long *param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plStack_70;
  undefined8 *puStack_68;
  
  iVar5 = *param_2;
  bVar2 = iVar5 != (int)param_3[2];
  if (bVar2) {
    *(int *)(param_3 + 2) = iVar5;
  }
  uVar8 = (uint)bVar2;
  lVar7 = *(long *)(param_2 + 2);
  lVar6 = *param_3;
  if (lVar7 == 0) {
    if (lVar6 != 0) {
      func_0x0001090eecc8();
      func_0x0001090eed50();
      func_0x0001090f4a0c(*param_3);
      FUN_1090ec270(param_3);
    }
  }
  else {
    if (lVar6 != 0) {
      if (*(long *)(lVar6 + 0x88) == lVar7) goto LAB_1090ec464;
      func_0x0001090eecc8();
      func_0x0001090eed50();
      func_0x0001090f4a0c(*param_3);
      FUN_1090ec270(param_3);
    }
    uVar9 = *(undefined8 *)(param_1 + 0x98);
    puVar3 = (undefined8 *)0x110;
    __Znwm();
    plVar10 = puVar3 + 1;
    *plVar10 = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_DAT_110ada978;
    plVar4 = puVar3 + 3;
    func_0x0001090f3c84(plVar4,param_2 + 2,param_1 + 0x30,param_1 + 0x40,param_1 + 0x28,uVar9,
                        param_4);
    if ((puVar3[5] == 0) || (*(long *)(puVar3[5] + 8) == -1)) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar2) {
          *plVar10 = *plVar10 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plStack_70 = plVar4;
      puStack_68 = puVar3;
      func_0x000107c278e4(puVar3 + 4,&plStack_70);
      func_0x000107c284e8(&plStack_70);
    }
    lVar6 = *param_3;
    *param_3 = (long)plVar4;
    FUN_1090ed438(lVar6);
    func_0x0001090ac8d0(*param_3 + 0xb0,param_3 + 1);
    lVar6 = *param_3;
    plVar4 = (long *)0x20;
    __Znwm();
    plVar10 = plVar4 + 1;
    *plVar10 = 1;
    *plVar4 = (long)&PTR_FUN_110ada9c8;
    FUN_1090ed8c0(plVar4 + 2,param_1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = *plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_70 = plVar4;
    func_0x0001090f4090(lVar6 + 0xb8,&plStack_70);
    func_0x0001090eed50();
    do {
      lVar6 = *plVar10;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
    uVar8 = 1;
  }
LAB_1090ec464:
  plVar4 = (long *)(param_2 + 4);
  if (*plVar4 == param_3[1]) {
    iVar5 = 0;
  }
  else {
    func_0x0001090ac8d0(param_3 + 1,plVar4);
    if (*param_3 != 0) {
      func_0x0001090ac8d0(*param_3 + 0xb0,plVar4);
    }
    uVar8 = 1;
    iVar5 = 1;
  }
  return uVar8 | iVar5 << 8;
}



/* Entry: 1090ec4c8; end: 1090ec6e7;  */

long * FUN_1090ec4c8(undefined8 param_1,long *param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar4;
  long unaff_x21;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plStack_190;
  long *plStack_188;
  long lStack_180;
  long lStack_178;
  long alStack_170 [3];
  long lStack_158;
  long *plStack_150;
  long *plStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_e8;
  long alStack_c0 [9];
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_48;
  
  func_0x0001090eea88();
  func_0x0001090eed38();
  (**(code **)(extraout_x8 + 0x10))(unaff_x21 + 8);
  func_0x0001090eeca8();
  func_0x0001090eec48();
  pcStack_78 = FUN_1090eda98;
  ppuStack_70 = &PTR_FUN_110adaa30;
  func_0x0001090eece8();
  func_0x0001090eebc8();
  func_0x0001090eeac8();
  func_0x0001090eecd8();
  plVar2 = alStack_c0;
  func_0x0001090eda7c();
  func_0x0001090eeb00(uStack_e8);
  func_0x0001090eea58(uStack_48);
  if ((bool)in_ZR) {
    return plVar2;
  }
  ___stack_chk_fail();
  func_0x0001090eea88();
  uVar1 = plVar2[0x2a] == plVar2[0x2b];
  uStack_138 = extraout_x8_00;
  if (!(bool)uVar1) {
    lStack_178 = 0;
    puVar3 = (undefined8 *)plVar2[4];
    func_0x0001090eed88(*puVar3);
    if ((int)puVar3 == 0) {
      func_0x0001090eec24();
      func_0x0001090eedc4();
      uVar1 = (char)plStack_188 == '\x01';
      if ((bool)uVar1) {
        lStack_158 = 2;
        plStack_150 = (long *)0x0;
        if (plStack_190 != (long *)0x0) {
          do {
            func_0x0001090eeb40();
            plStack_150 = extraout_x8_01;
          } while (extraout_w11 != 0);
        }
        func_0x0001090eee04();
        func_0x0001090eedfc();
      }
      FUN_1090e1d60(&plStack_190);
    }
    else {
      func_0x0001090eec24();
      func_0x0001090eedc4();
      lStack_158 = 1;
      plStack_148 = plStack_188;
      plStack_150 = plStack_190;
      lStack_140 = lStack_180;
      plStack_190 = (long *)0x0;
      plStack_188 = (long *)0x0;
      lStack_180 = 0;
      func_0x0001090eee04();
      func_0x0001090eedfc();
      func_0x0001090eb074(&plStack_190);
    }
    if (lStack_178 != 0) {
      plVar4 = (long *)plVar2[0x2a];
      lStack_180 = plVar2[0x2c];
      plVar6 = (long *)plVar2[0x2b];
      plStack_190 = plVar4;
      plStack_188 = plVar6;
      plVar2[0x2b] = 0;
      plVar2[0x2c] = 0;
      plVar2[0x2a] = 0;
      for (; uVar1 = plVar4 == plVar6, !(bool)uVar1; plVar4 = plVar4 + 6) {
        pcVar5 = (code *)*plVar4;
        lStack_158 = lStack_178;
        if (lStack_178 == 2) {
          plVar2 = (long *)0x0;
          if (alStack_170[0] != 0) {
            do {
              func_0x0001090eeb40();
              plVar2 = extraout_x8_02;
            } while (extraout_w11_00 != 0);
          }
        }
        else {
          plVar2 = plStack_150;
          if (lStack_178 == 1) {
            FUN_1090edd88(&plStack_150,alStack_170);
            plVar2 = plStack_150;
          }
        }
        plStack_150 = plVar2;
        param_2 = plVar4;
        (*pcVar5)(&lStack_158);
        func_0x0001090eedfc();
      }
      FUN_1090ed33c(&plStack_190);
    }
    plVar2 = &lStack_178;
    FUN_1090edd60();
  }
  func_0x0001090eea58(uStack_138);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    if (plVar2 != param_2) {
      FUN_1090edd60(plVar2);
      *plVar2 = *param_2;
      lVar8 = param_2[2];
      lVar7 = param_2[1];
      plVar2[3] = param_2[3];
      plVar2[2] = lVar8;
      plVar2[1] = lVar7;
      *param_2 = 0;
    }
    return plVar2;
  }
  return plVar2;
}



/* Entry: 1090ec6e8; end: 1090ec7a7;  */

undefined8 * FUN_1090ec6e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1090edd60(param_1);
    *param_1 = *param_2;
    uVar2 = param_2[2];
    uVar1 = param_2[1];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[1] = uVar1;
    *param_2 = 0;
  }
  return param_1;
}



/* Entry: 1090ec7a8; end: 1090ec8bf;  */

undefined8 *
FUN_1090ec7a8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 *param_9)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w11;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [40];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 auStack_b0 [7];
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_48;
  
  func_0x0001090eea88();
  uStack_128 = param_7;
  uStack_120 = param_8;
  uStack_118 = param_5;
  uStack_110 = param_6;
  uStack_108 = param_3;
  uStack_100 = param_4;
  uStack_48 = extraout_x8;
  FUN_1090edf04(param_1,&uStack_108,&uStack_118,&uStack_128);
  uStack_f8 = 0;
  if (*param_1 != 0) {
    do {
      func_0x0001090eeb40();
      uStack_f8 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  uStack_f0 = *param_9;
  (**(code **)(param_9[1] + 0x10))(auStack_e8,param_9 + 1);
  FUN_1090ed46c(&uStack_c0,param_2);
  puVar1 = auStack_b0;
  FUN_1090edf64(puVar1,&uStack_f8);
  pcStack_78 = FUN_1090edfc4;
  ppuStack_70 = &PTR_FUN_110adaa50;
  func_0x0001090eed58();
  puVar1[1] = uStack_b8;
  *puVar1 = uStack_c0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  FUN_1090edf64(puVar1 + 2,auStack_b0);
  func_0x0001090eeac8();
  func_0x0001090eec7c(ppuStack_70);
  func_0x0001090edfa4(&uStack_c0);
  puVar2 = &uStack_f8;
  FUN_1090ec8c0();
  func_0x0001090eea58(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    (**(code **)puVar2[2])();
    func_0x0001090ebdc8(puVar2);
    FUN_1090eb134();
    return puVar1;
  }
  return puVar2;
}


