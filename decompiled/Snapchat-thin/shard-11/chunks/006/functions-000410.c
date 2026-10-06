/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10876fac0; end: 10876fafb;  */

void FUN_10876fac0(void)

{
  return;
}



/* Entry: 10876fafc; end: 10876fb6b;  */

undefined8 * FUN_10876fafc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6cbb0;
  func_0x00010876fe24(param_1[8]);
  func_0x00010876fe24(param_1[2]);
  return param_1;
}



/* Entry: 10876fb6c; end: 10876fb7b;  */

void FUN_10876fb6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6caa8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10876fb7c; end: 10876fbf3;  */

void FUN_10876fb7c(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined1 auStack_68 [72];
  
  lVar1 = *(long *)(param_4 + 0x10);
  FUN_10875bc3c(auStack_68,param_3);
  FUN_10875bbdc(auStack_68,*(undefined4 *)(lVar1 + 0x28),lVar1 + 0x18);
  FUN_108770c94(param_1);
  FUN_10875eb20(*(undefined8 *)(lVar1 + 0x10),param_1 & 0xffffffff | 0x100000000);
  func_0x000107c29564(auStack_68);
  return;
}



/* Entry: 10876fbf4; end: 10876fc13;  */

void FUN_10876fbf4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10876f4e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10876fc14; end: 10876fc2b;  */

void FUN_10876fc14(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10876fc2c; end: 10876fc73;  */

undefined8 * FUN_10876fc2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6ca38;
  func_0x000107c27914(param_1 + 0x1d);
  func_0x000107c27914(param_1 + 0x1a);
  func_0x00010865f8f8(param_1 + 0x16);
  *param_1 = &PTR_FUN_110a6b2b8;
  func_0x000107c2979c(param_1 + 0x13);
  func_0x00010865f8f8(param_1 + 0xd);
  *param_1 = &PTR_DAT_110a6d608;
  func_0x0001005fe494(param_1 + 0xb);
  func_0x0001005640e4(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  func_0x0001005fe52c(param_1 + 1);
  return param_1;
}



/* Entry: 10876fc74; end: 10876fc7b;  */

void FUN_10876fc74(void)

{
  return;
}



/* Entry: 10876fc7c; end: 10876fcab;  */

void FUN_10876fc7c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110a6cc10;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10876fcac; end: 10876fce7;  */

void FUN_10876fcac(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a6cc10;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10876fce8; end: 10876fd1f;  */

long FUN_10876fce8(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a6cc70);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10876fd20; end: 10876fd2b;  */

undefined ** FUN_10876fd20(void)

{
  return &PTR_DAT_110a6cc70;
}



/* Entry: 10876fd2c; end: 10876fd7b;  */

long FUN_10876fd2c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10876fd7c; end: 10876fe47;  */

void FUN_10876fd7c(void)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long unaff_x19;
  
  plVar3 = *(long **)(unaff_x19 + 0x30);
  (**(code **)(*plVar3 + 0x108))();
  if (plVar3[1] != 0) {
    plVar3 = (long *)(plVar3[1] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return;
}



/* Entry: 10876fe48; end: 108770763;  */

void FUN_10876fe48(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined ***pppuVar5;
  undefined8 *extraout_x8;
  long extraout_x8_00;
  ulong uVar6;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar7;
  undefined **unaff_x21;
  long unaff_x22;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 auStack_ce8 [24];
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined1 auStack_c90 [24];
  undefined1 auStack_c78 [440];
  byte bStack_ac0;
  undefined1 auStack_ab8 [24];
  undefined1 auStack_aa0 [400];
  char cStack_910;
  long lStack_908;
  long lStack_900;
  undefined8 uStack_8f8;
  uint uStack_8f0;
  byte bStack_878;
  undefined **appuStack_870 [13];
  uint uStack_808;
  int iStack_558;
  char cStack_4a0;
  undefined1 uStack_491;
  ulong uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined **ppuStack_460;
  long *plStack_458;
  undefined8 uStack_448;
  ulong uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  int iStack_340;
  undefined1 uStack_2a0;
  byte bStack_278;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_2 + 0x10) >> 2 & 1) == 0) goto LAB_108770540;
  unaff_x22 = *(long *)(param_2 + 0x30);
  if ((*(char *)(unaff_x22 + 0x38) == '\x01') && ((*(byte *)(unaff_x22 + 0x10) & 1) != 0)) {
    func_0x000107c29ee0(&uStack_448,*(undefined8 *)(unaff_x22 + 0x18));
    FUN_108770764(param_1 + 3,&uStack_448);
    func_0x000107c27914(&uStack_448);
  }
  auStack_ab8[0] = 0;
  cStack_910 = '\0';
  auStack_c90[0] = 0;
  bStack_ac0 = 0;
  unaff_x20 = *(long **)(*(long *)param_1[1] + 0x18);
  func_0x000107c278b8(auStack_ce8,"handle");
  func_0x000107c31420(&uStack_cd0,unaff_x20,auStack_ce8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_ce8);
  unaff_x21 = &PTR_PTR_11326cb58;
  if (*(char *)(unaff_x22 + 0x38) == '\x01') {
    if ((*(uint *)(unaff_x22 + 0x10) & 1) == 0) {
      func_0x0001087709f4();
      goto LAB_108770530;
    }
    func_0x000107c29ee0(&uStack_490,*(undefined8 *)(unaff_x22 + 0x18));
    func_0x000108770964();
    func_0x0001087709d8();
    func_0x00010877099c();
    FUN_1088660e8(&uStack_448);
    FUN_10869148c(appuStack_870,&uStack_448);
    func_0x000107c288ec(&uStack_448);
    if (cStack_4a0 == '\x01') {
      uVar8 = (ulong)uStack_808;
      unaff_x20 = (long *)0x0;
      if (iStack_558 - 1U < 3) {
        unaff_x20 = (long *)((ulong)(iStack_558 - 1U) + 1);
      }
LAB_1087700b8:
      func_0x00010877099c();
      FUN_108866aec();
      func_0x00010877099c();
      FUN_108866468();
      func_0x00010877099c();
      FUN_108868114();
      bVar2 = false;
      uVar8 = uVar8 << 0x20;
    }
    else {
      func_0x00010877099c();
      FUN_10886618c(&uStack_448);
      FUN_108705ca4(&lStack_908,&uStack_448);
      FUN_108706f8c(&uStack_448);
      unaff_x20 = (long *)(ulong)uStack_8f0;
      if ((bStack_878 & uStack_8f0 - 1 < 3) == 0) {
        unaff_x20 = (long *)0x0;
      }
      FUN_108706c90(&lStack_908);
      func_0x00010877099c();
      func_0x000107c29f64(&uStack_448);
      if ((bStack_278 & 1) != 0) {
        uVar8 = (ulong)(iStack_340 == 1);
        func_0x0001087709e0();
        goto LAB_1087700b8;
      }
      func_0x0001087709e0();
      unaff_x20 = (long *)0x0;
      uVar8 = 0;
      bVar2 = true;
    }
    func_0x000107c288cc(appuStack_870);
    uVar6 = 0;
    if (!bVar2) {
      uVar6 = uVar8 | (ulong)unaff_x20;
    }
    func_0x0001087709b0();
    if (!bVar2) {
      func_0x0001087709c0();
      func_0x000107c29ee0(&ppuStack_460);
      unaff_x20 = *(long **)(param_1[1] + 0x10);
      func_0x000107c27994(&uStack_490,&ppuStack_460);
      uStack_430 = uStack_480;
      uStack_438 = uStack_488;
      uStack_440 = uStack_490;
      uStack_480 = 0;
      uStack_490 = 0;
      uStack_488 = 0;
      uStack_448 = (undefined **)((ulong)uStack_448._4_4_ << 0x20);
      uStack_8f8 = 0;
      lStack_908 = 0;
      lStack_900 = 0;
      func_0x00010871c0b8(appuStack_870,&uStack_448,1);
      (**(code **)(*unaff_x20 + 0x20))(unaff_x20,uVar6 & 0xffffffff | 0x100000000,appuStack_870);
      func_0x000107c27b3c(appuStack_870);
      func_0x000107c27914(&uStack_440);
      func_0x000107c27914(&lStack_908);
      func_0x0001087709b0();
      (**(code **)(**(long **)(param_1[1] + 0x20) + 0x38))
                (*(long **)(param_1[1] + 0x20),&ppuStack_460);
      if (uVar6 >> 0x20 == 1) {
        unaff_x20 = *(long **)(param_1[1] + 0x30);
        (**(code **)(*unaff_x20 + 0x10))(&uStack_448,unaff_x20);
        (**(code **)(*uStack_448 + 0x30))(uStack_448,&ppuStack_460);
        appuStack_870[0] = uStack_448;
        uStack_448 = (undefined **)0x0;
        (**(code **)(*unaff_x20 + 0x18))(unaff_x20,appuStack_870);
        ppuVar3 = appuStack_870[0];
        appuStack_870[0] = (undefined **)0x0;
        if (ppuVar3 != (undefined **)0x0) {
          func_0x000108770958();
        }
        lVar9 = (long)uStack_448;
        uStack_448 = (undefined **)0x0;
        if (lVar9 != 0) {
          func_0x000108770958();
        }
      }
      pppuVar5 = &ppuStack_460;
LAB_108770320:
      func_0x000107c27914(pppuVar5);
    }
  }
  else {
    if (((*(uint *)(unaff_x22 + 0x10) >> 1 & 1) != 0) &&
       (unaff_x20 = *(long **)(unaff_x22 + 0x20), (char)unaff_x20[3] == '\x01')) {
      func_0x000108770964();
      func_0x0001087709d8();
      func_0x0001087709c0();
      func_0x000107c29ee0(&uStack_490);
      lStack_60 = unaff_x20[2];
      unaff_x20 = *(long **)param_1[1];
      FUN_108721c84(appuStack_870,&lStack_60,1,&uStack_491);
      FUN_108861c90(&lStack_908,unaff_x20,&uStack_490,appuStack_870);
      func_0x00010867bb28(appuStack_870);
      if (lStack_908 == lStack_900) {
        uStack_448 = (undefined **)((ulong)uStack_448 & 0xffffffffffffff00);
        uStack_2a0 = 0;
      }
      else {
        unaff_x20 = *(long **)param_1[1];
        ppuStack_460 = *(undefined ***)(lStack_908 + 0x18);
        FUN_1086afdec(appuStack_870,&ppuStack_460,1);
        FUN_10886488c(unaff_x20,&uStack_490,appuStack_870);
        func_0x00010867bb84(appuStack_870);
        func_0x0001086ab7dc(&uStack_448,lStack_908);
      }
      func_0x00010867b9fc(&lStack_908);
      func_0x000107c2894c(auStack_ab8,&uStack_448);
      func_0x000107c288dc(&uStack_448);
      func_0x0001087709b0();
    }
    if (*(long *)(unaff_x22 + 0x30) != 0) {
      func_0x000108770964();
      func_0x0001087709d8();
      unaff_x20 = *(long **)(param_1[1] + 0x70);
      (**(code **)(*unaff_x20 + 0x10))();
      lVar9 = *(long *)(unaff_x22 + 0x30);
      func_0x0001087709c0();
      func_0x000107c29ee0(appuStack_870);
      plVar7 = *(long **)(param_1[1] + 0x50);
      (**(code **)(*plVar7 + 0x10))(plVar7,appuStack_870,lVar9 + (long)unaff_x20);
      if ((int)plVar7 != 0) {
        func_0x00010877099c();
        func_0x000107c29f64(&uStack_448);
        func_0x000107c290ac(auStack_c90,&uStack_448);
        func_0x0001087709e0();
        uStack_448 = (undefined **)((ulong)uStack_448 & 0xffffffffffffff00);
        uStack_440 = uStack_440 & 0xffffffffffffff00;
        (**(code **)(**(long **)(param_1[1] + 0x60) + 0x10))
                  (*(long **)(param_1[1] + 0x60),appuStack_870,&uStack_448,lVar9 + (long)unaff_x20);
      }
      pppuVar5 = appuStack_870;
      goto LAB_108770320;
    }
  }
  if ((bStack_ac0 & 1) == 0) {
    if (cStack_910 != '\x01') goto LAB_108770474;
    puVar4 = auStack_ab8;
  }
  else {
    puVar4 = auStack_c90;
  }
  func_0x000107c27994(appuStack_870,puVar4);
  lStack_900 = 0;
  lStack_908 = 0;
  uStack_8f8 = 0;
  if (cStack_910 == '\x01') {
    FUN_1086c09c0(&lStack_908,appuStack_870,auStack_aa0);
    plVar7 = *(long **)(param_1[1] + 0x40);
    func_0x000107c28a9c(&uStack_448,auStack_ab8);
    FUN_1086cc028(&uStack_490,&uStack_448,1);
    (**(code **)(*plVar7 + 0x138))(plVar7,appuStack_870,&uStack_490);
    func_0x00010867b9fc(&uStack_490);
    func_0x000107c288e0(&uStack_448);
    unaff_x20 = *(long **)(param_1[1] + 0x40);
    if (bStack_ac0 == 1) {
      puVar4 = auStack_c78;
      func_0x000107c29e74(puVar4);
      uVar8 = (ulong)puVar4 & 0xffffffff;
      uVar6 = 0x100000000;
    }
    else {
      uVar8 = 0;
      uVar6 = 0;
    }
    (**(code **)(*unaff_x20 + 0x140))(unaff_x20,appuStack_870,uVar6 | uVar8);
  }
  if ((bStack_ac0 & 1) == 0) {
    func_0x0001087709fc(*(undefined8 *)(param_1[1] + 0x20));
    (**(code **)(extraout_x8_00 + 8))();
  }
  else {
    func_0x0001087709fc(*(undefined8 *)(param_1[1] + 0x20));
    (*(code *)*extraout_x8)();
  }
  func_0x00010867b9fc(&uStack_448);
  func_0x000104be1274(&lStack_908);
  func_0x000107c27914(appuStack_870);
LAB_108770474:
  func_0x000107c31428(&uStack_cd0);
  func_0x0001087709f4();
  while( true ) {
    if (((*(byte *)(unaff_x22 + 0x10) >> 2 & 1) != 0) &&
       (*(char *)(*(long *)(unaff_x22 + 0x28) + 0x10) == '\x01')) {
      unaff_x21 = (undefined **)param_1[1];
      param_1 = (long *)unaff_x21[0x10];
      if (param_1 != (long *)0x0) {
        unaff_x20 = (long *)0x30;
        __Znwm();
        unaff_x20[1] = 0;
        unaff_x20[2] = 0;
        *unaff_x20 = (long)&PTR_FUN_110a6cce8;
        puVar11 = unaff_x21[0x13];
        puVar10 = unaff_x21[0x12];
        if (unaff_x21[0x13] != (undefined *)0x0) {
          plVar7 = (long *)(unaff_x21[0x13] + 8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar2) {
              *plVar7 = *plVar7 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        unaff_x21 = (undefined **)(unaff_x20 + 3);
        *unaff_x21 = (undefined *)&PTR_FUN_110a6cd38;
        unaff_x20[5] = (long)puVar11;
        unaff_x20[4] = (long)puVar10;
        uStack_cd0 = 0;
        uStack_cc8 = 0;
        func_0x000107c288a4(&uStack_cd0);
        uStack_468 = 0;
        uStack_470 = 0;
        ppuStack_460 = unaff_x21;
        plStack_458 = unaff_x20;
        func_0x0001087709d0(*(undefined8 *)(*param_1 + 0x48));
        FUN_108649c04(&ppuStack_460);
        FUN_108770784(&uStack_470);
      }
    }
LAB_108770530:
    func_0x000107c288c8(auStack_c90);
    func_0x000107c288dc(auStack_ab8);
    unaff_x19 = param_1;
LAB_108770540:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) break;
    ___stack_chk_fail();
    func_0x00010877094c();
    ppuVar3 = appuStack_870[0];
    appuStack_870[0] = (undefined **)0x0;
    if (ppuVar3 != (undefined **)0x0) {
      func_0x000108770958();
    }
    ppuVar3 = uStack_448;
    uStack_448 = (undefined **)0x0;
    if (ppuVar3 != (undefined **)0x0) {
      func_0x000108770958();
    }
    pppuVar5 = &ppuStack_460;
    while( true ) {
      func_0x000107c27914(pppuVar5);
      func_0x0001087709f4();
      if ((int)unaff_x21 == 1) break;
      func_0x000107c288c8(auStack_c90);
      func_0x000107c288dc(auStack_ab8);
      __Unwind_Resume(unaff_x20);
      func_0x00010877094c();
      func_0x000104be1274(&lStack_908);
      pppuVar5 = appuStack_870;
    }
    ___cxa_begin_catch(unaff_x20);
    ___cxa_end_catch();
    param_1 = unaff_x19;
  }
  return;
}



/* Entry: 108770764; end: 10877077b;  */

void FUN_108770764(void)

{
  func_0x0001086f5208();
  return;
}



/* Entry: 10877077c; end: 108770783;  */

bool FUN_10877077c(long param_1)

{
  param_1 = param_1 + 0x18;
  FUN_108699c84(param_1);
  return param_1 != 0;
}



/* Entry: 108770784; end: 1087707ab;  */

long FUN_108770784(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 1087707ac; end: 1087707af;  */

undefined8 * FUN_1087707ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6cc90;
  func_0x000100864b68(param_1 + 3);
  func_0x000107c297dc(param_1 + 1);
  return param_1;
}



/* Entry: 1087707b0; end: 1087707c3;  */

void FUN_1087707b0(void)

{
  FUN_1087707c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087707c4; end: 1087707ff;  */

undefined8 * FUN_1087707c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6cc90;
  func_0x000100864b68(param_1 + 3);
  func_0x000107c297dc(param_1 + 1);
  return param_1;
}



/* Entry: 108770800; end: 10877080f;  */

void FUN_108770800(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6cce8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108770810; end: 108770823;  */

void FUN_108770810(void)

{
  FUN_108770800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108770824; end: 108770833;  */

void FUN_108770824(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010877082c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108770834; end: 10877085f;  */

undefined8 * FUN_108770834(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6cd38;
  func_0x000107c288a4(param_1 + 1);
  return param_1;
}



/* Entry: 108770860; end: 108770873;  */

void FUN_108770860(void)

{
  FUN_108770834();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108770874; end: 1087708df;  */

void FUN_108770874(void)

{
  undefined1 *puVar1;
  long *unaff_x19;
  undefined1 auStack_70 [40];
  undefined1 auStack_48 [40];
  
  puVar1 = auStack_70;
  func_0x000108770978();
  FUN_108659af8(auStack_70,0x30011);
  func_0x000107c2884c(auStack_48,puVar1);
  func_0x0001087709d0(*(undefined8 *)(*unaff_x19 + 0x50));
  func_0x0001087709b8();
  func_0x0001087709a8();
  return;
}



/* Entry: 1087708e0; end: 10877094b;  */

void FUN_1087708e0(void)

{
  undefined1 *puVar1;
  long *unaff_x19;
  undefined1 auStack_70 [40];
  undefined1 auStack_48 [40];
  
  puVar1 = auStack_70;
  func_0x000108770978();
  FUN_108659af8(auStack_70,0x30012);
  func_0x000107c2884c(auStack_48,puVar1);
  func_0x0001087709d0(*(undefined8 *)(*unaff_x19 + 0x50));
  func_0x0001087709b8();
  func_0x0001087709a8();
  return;
}



/* Entry: 10877094c; end: 108770a2f;  */

void FUN_10877094c(void)

{
  return;
}



/* Entry: 108770a30; end: 108770abf;  */

undefined4 FUN_108770a30(int param_1,ulong *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_2;
  if (plVar2 != (long *)0x0) {
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      func_0x000108770cd8(*(undefined8 *)(*plVar2 + 0x20));
      if (((ulong)plVar2 & 1) == 0) {
        plVar2 = (long *)*param_2;
        func_0x000108770cd8(*(undefined8 *)(*plVar2 + 0x28));
        if (((ulong)plVar2 & 1) == 0) {
          plVar2 = (long *)*param_2;
          func_0x000108770cd8(*(undefined8 *)(*plVar2 + 0x30));
          if (((ulong)plVar2 & 1) == 0) goto LAB_108770a10;
          uVar1 = 7;
        }
        else {
          uVar1 = 3;
        }
      }
      else {
        uVar1 = 1;
      }
    }
    return uVar1;
  }
LAB_108770a10:
  if (param_1 + 1U < 0x12) {
    return *(undefined4 *)(&UNK_10df50e18 + (ulong)(param_1 + 1U) * 4);
  }
  return 7;
}



/* Entry: 108770ac0; end: 108770af7;  */

undefined4 FUN_108770ac0(long param_1)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  
  if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
    return 0;
  }
  ppuVar1 = &PTR_PTR_11326b328;
  if (*(undefined ***)(param_1 + 0x20) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_1 + 0x20);
  }
  uVar2 = 3;
  if (((ulong)ppuVar1[7] & 0xfffffffd) != 0) {
    uVar2 = 7;
  }
  return uVar2;
}



/* Entry: 108770af8; end: 108770bcb;  */

undefined4 FUN_108770af8(long param_1,ulong *param_2)

{
  undefined **ppuVar1;
  long *plVar2;
  undefined4 uVar3;
  long lVar4;
  
  if (((*(byte *)(param_1 + 0x10) >> 1 & 1) != 0) &&
     ((*(byte *)(*(long *)(param_1 + 0x20) + 0x10) >> 2 & 1) != 0)) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
    if (((*(uint *)(lVar4 + 0x10) >> 1 & 1) != 0) &&
       ((*(byte *)(*(long *)(lVar4 + 0x20) + 0x19) & 1) != 0)) {
      return 3;
    }
    if (((*(uint *)(lVar4 + 0x10) & 1) != 0) && (*(long *)(lVar4 + 0x30) != 0)) {
      return 3;
    }
  }
  plVar2 = (long *)*param_2;
  if (plVar2 != (long *)0x0) {
    if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
      return 0;
    }
    ppuVar1 = &PTR_PTR_11326b328;
    if (*(undefined ***)(param_1 + 0x20) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_1 + 0x20);
    }
    uVar3 = *(undefined4 *)(ppuVar1 + 7);
    (**(code **)(*plVar2 + 0x38))(plVar2,uVar3);
    if (((ulong)plVar2 & 1) != 0) {
      return 3;
    }
    plVar2 = (long *)*param_2;
    (**(code **)(*plVar2 + 0x40))(plVar2,uVar3);
    if (((ulong)plVar2 & 1) != 0) {
      return 7;
    }
  }
  if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
    return 0;
  }
  ppuVar1 = &PTR_PTR_11326b328;
  if (*(undefined ***)(param_1 + 0x20) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_1 + 0x20);
  }
  uVar3 = 3;
  if (((ulong)ppuVar1[7] & 0xfffffffd) != 0) {
    uVar3 = 7;
  }
  return uVar3;
}



/* Entry: 108770bcc; end: 108770c03;  */

undefined4 FUN_108770bcc(long param_1)

{
  if (*(uint *)(param_1 + 0x38) < 0xd) {
    return *(undefined4 *)(&UNK_10df50e60 + (ulong)*(uint *)(param_1 + 0x38) * 4);
  }
  return 0;
}



/* Entry: 108770c04; end: 108770c93;  */

uint FUN_108770c04(long param_1,ulong *param_2)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  
  plVar2 = (long *)*param_2;
  uVar1 = *(uint *)(param_1 + 0x38);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2,uVar1);
    if (((ulong)plVar2 & 1) != 0) {
      uVar3 = 1;
      goto LAB_108770c88;
    }
    plVar2 = (long *)*param_2;
    (**(code **)(*plVar2 + 0x40))(plVar2,uVar1);
    if (((ulong)plVar2 & 1) != 0) {
      uVar3 = 0;
      goto LAB_108770c88;
    }
    uVar1 = *(uint *)(param_1 + 0x38);
  }
  uVar3 = 0x305 >> (ulong)(uVar1 & 0x1f);
  if (0xb < uVar1) {
    uVar3 = 0;
  }
LAB_108770c88:
  return uVar3 & 1;
}



/* Entry: 108770c94; end: 108770cdf;  */

undefined4 FUN_108770c94(int param_1)

{
  if (param_1 - 1U < 0x10) {
    return *(undefined4 *)(&UNK_10df50ec8 + (ulong)(param_1 - 1U) * 4);
  }
  return 0;
}



/* Entry: 108770ce0; end: 108770e5f;  */

long * FUN_108770ce0(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                    undefined8 param_5,long *param_6)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  long lVar10;
  code *pcVar11;
  long lVar12;
  code *pcStack_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long *plStack_240;
  long alStack_230 [2];
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined4 uStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  code *pcStack_1b0;
  undefined **ppuStack_1a8;
  undefined8 *puStack_1a0;
  code *pcStack_180;
  undefined **ppuStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  code *pcStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_120;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined **ppuStack_78;
  long *plStack_70;
  undefined ***pppuStack_60;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = (long)&PTR_FUN_110a6cd80;
  func_0x000107c29e04(auStack_a8,param_4);
  func_0x000107c27f54(auStack_90,&UNK_10f4ba2da,auStack_a8);
  ppuStack_78 = &PTR_FUN_110a6cf58;
  pppuStack_60 = &ppuStack_78;
  uStack_b0 = *param_3;
  *param_3 = 0;
  plStack_70 = param_1;
  FUN_10875e9fc(param_1,auStack_90,param_2,0,&ppuStack_78,param_5,&uStack_b0,0x16);
  func_0x000107c29578(&uStack_b0);
  func_0x00010865f8f8(&ppuStack_78);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
  plVar8 = param_1 + 0x16;
  *param_1 = (long)&PTR_FUN_110a6cd80;
  func_0x000107c27994(plVar8,param_4);
  lVar9 = param_6[1];
  lVar12 = *param_6;
  param_1[0x1a] = param_6[1];
  param_1[0x19] = lVar12;
  if (lVar9 != 0) {
    do {
      FUN_1087717b8();
    } while (extraout_w10 != 0);
  }
  func_0x0001087717c8(uStack_58);
  if (extraout_x9 == extraout_x8) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10875b664(param_1);
  __Unwind_Resume();
  plVar4 = plVar8;
  func_0x0001087717c8(&UNK_110a984a8);
  alStack_230[0] = extraout_x8_00 + 0x10;
  alStack_230[1] = 0;
  uStack_220 = 0;
  uStack_218 = 0;
  uStack_120 = extraout_x9_00;
  func_0x000107c29ee4(&pcStack_150,plVar4 + 0x16);
  uStack_220 = CONCAT44(uStack_220._4_4_,1);
  uVar5 = 0;
  func_0x000107c287e0();
  uStack_218 = uVar5;
  func_0x000107c287d0();
  func_0x000107c2a2e0(&pcStack_150);
  func_0x000107c297b4(&uStack_250,plVar8 + 1);
  plStack_240 = plVar8;
  func_0x000107c297b4(&uStack_270,plVar8 + 1);
  lStack_208 = lStack_268;
  uStack_210 = uStack_270;
  uStack_270 = 0;
  lStack_268 = 0;
  plStack_260 = plVar8;
  plStack_200 = plVar8;
  func_0x000108771804();
  lStack_1f0 = *(long *)(pcStack_150 + 600);
  uStack_1f8 = *(undefined8 *)(pcStack_150 + 0x250);
  if (*(long *)(pcStack_150 + 600) != 0) {
    do {
      FUN_1087717b8();
    } while (extraout_w10_00 != 0);
  }
  uStack_1e8 = *(undefined4 *)(plVar8[0xb] + 0xfc);
  func_0x000108771810();
  pcStack_1b0 = FUN_1087715b0;
  ppuStack_1a8 = &PTR_FUN_110a6cf30;
  puVar6 = (undefined8 *)0x30;
  __Znwm();
  puVar6[1] = lStack_208;
  *puVar6 = uStack_210;
  if (lStack_208 != 0) {
    do {
      FUN_1087717b8();
    } while (extraout_w10_01 != 0);
  }
  puVar6[3] = uStack_1f8;
  puVar6[2] = plStack_200;
  puVar6[4] = lStack_1f0;
  if (lStack_1f0 != 0) {
    do {
      FUN_1087717b8();
    } while (extraout_w10_02 != 0);
  }
  *(undefined4 *)(puVar6 + 5) = uStack_1e8;
  lVar9 = plVar8[1];
  lVar12 = plVar8[2];
  lStack_1c0 = lVar9;
  lStack_1b8 = lVar12;
  puStack_1a0 = puVar6;
  if (lVar12 == 0) {
    lVar10 = plVar8[0xb];
  }
  else {
    do {
      FUN_1087717b8();
    } while (extraout_w10_03 != 0);
    lVar10 = plVar8[0xb];
    do {
      FUN_1087717b8();
    } while (extraout_w10_04 != 0);
  }
  puVar7 = (undefined8 *)0xb8;
  lStack_1e0 = lVar9;
  lStack_1d8 = lVar12;
  __Znwm();
  uVar3 = uStack_248;
  uVar5 = uStack_250;
  plVar4 = puVar7 + 1;
  *plVar4 = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_110a6cdf0;
  pcStack_150 = FUN_1087712d4;
  ppuStack_148 = &PTR_FUN_110a6ce30;
  lStack_1e0 = 0;
  lStack_1d8 = 0;
  pcVar11 = (code *)(puVar7 + 3);
  *(undefined ***)pcVar11 = &PTR_DAT_110a6ce70;
  pcStack_180 = FUN_108771358;
  ppuStack_178 = &PTR_FUN_110a6ce48;
  uStack_250 = 0;
  uStack_248 = 0;
  uStack_168 = 0;
  plStack_160 = plStack_240;
  puVar7[4] = FUN_108771358;
  puVar7[5] = &PTR_FUN_110a6ce48;
  puVar7[7] = uVar3;
  puVar7[6] = uVar5;
  uStack_170 = 0;
  puVar7[8] = plStack_240;
  puVar7[10] = FUN_1087715b0;
  puVar7[0xb] = &PTR_FUN_110a6cf30;
  puVar7[0xc] = puVar6;
  puStack_1a0 = (undefined8 *)0x0;
  puVar7[0x10] = FUN_1087712d4;
  puVar7[0x11] = &PTR_FUN_110a6ce30;
  puVar7[0x12] = lVar9;
  puVar7[0x13] = lVar12;
  uStack_140 = 0;
  uStack_138 = 0;
  puVar7[0x16] = lVar10;
  func_0x000107c297a4(&uStack_170);
  func_0x000107c297a8(&uStack_140);
  func_0x000107c297a8(&lStack_1e0);
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  pcStack_280 = pcVar11;
  puStack_278 = puVar7;
  FUN_108771768(&uStack_1d0);
  func_0x000107c297a8(&lStack_1c0);
  func_0x0001087717e0();
  FUN_108771284(&uStack_210);
  func_0x000108771804();
  plVar8 = *(long **)(pcStack_150 + 0x50);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  pcStack_180 = pcVar11;
  ppuStack_178 = (undefined **)puVar7;
  (**(code **)(*plVar8 + 0xb8))(plVar8,alStack_230,&pcStack_180);
  func_0x000108771790(&pcStack_180);
  func_0x000108771810();
  FUN_108771768(&pcStack_280);
  func_0x000107c297a4(&uStack_270);
  func_0x000107c297a4(&uStack_250);
  plVar8 = alStack_230;
  FUN_1089270ec();
  func_0x0001087717c8(uStack_120);
  if (extraout_x9_01 != extraout_x8_01) {
    ___stack_chk_fail();
    func_0x000108771790(&pcStack_180);
    func_0x000108771810();
    FUN_108771768(&pcStack_280);
    func_0x000107c297a4(&uStack_270);
    func_0x000107c297a4(&uStack_250);
    plVar8 = alStack_230;
    FUN_1089270ec();
    func_0x0001087717d8();
    *plVar8 = (long)&PTR_FUN_110a6cd80;
    func_0x000108764cf4(plVar8 + 0x19);
    func_0x000107c27914(plVar8 + 0x16);
    *plVar8 = (long)&PTR_FUN_110a6b2b8;
    func_0x000107c2979c(plVar8 + 0x13);
    func_0x00010865f8f8(plVar8 + 0xd);
    *plVar8 = (long)&PTR_DAT_110a6d608;
    func_0x0001005fe494(plVar8 + 0xb);
    func_0x0001005640e4(plVar8 + 6);
    func_0x000107c60ca0(plVar8 + 3);
    func_0x0001005fe52c(plVar8 + 1);
    return plVar8;
  }
  return plVar8;
}



/* Entry: 108770e60; end: 1087711e3;  */

long * FUN_108770e60(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined8 uVar10;
  long *plVar11;
  code *pcVar12;
  code *pcStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long alStack_180 [2];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined4 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  code *pcStack_100;
  undefined **ppuStack_f8;
  undefined8 *puStack_f0;
  code *pcStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  code *pcStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_70;
  
  lVar5 = param_1;
  func_0x0001087717c8(&UNK_110a984a8);
  alStack_180[0] = extraout_x8 + 0x10;
  alStack_180[1] = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_70 = extraout_x9;
  func_0x000107c29ee4(&pcStack_a0,lVar5 + 0xb0);
  uStack_170 = CONCAT44(uStack_170._4_4_,1);
  uVar6 = 0;
  func_0x000107c287e0();
  uStack_168 = uVar6;
  func_0x000107c287d0();
  func_0x000107c2a2e0(&pcStack_a0);
  func_0x000107c297b4(&uStack_1a0,param_1 + 8);
  lStack_190 = param_1;
  func_0x000107c297b4(&uStack_1c0,param_1 + 8);
  lStack_158 = lStack_1b8;
  uStack_160 = uStack_1c0;
  uStack_1c0 = 0;
  lStack_1b8 = 0;
  lStack_1b0 = param_1;
  lStack_150 = param_1;
  func_0x000108771804();
  lStack_140 = *(long *)(pcStack_a0 + 600);
  uStack_148 = *(undefined8 *)(pcStack_a0 + 0x250);
  if (*(long *)(pcStack_a0 + 600) != 0) {
    do {
      func_0x0001087717b8();
    } while (extraout_w10 != 0);
  }
  uStack_138 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0xfc);
  func_0x000108771810();
  pcStack_100 = FUN_1087715b0;
  ppuStack_f8 = &PTR_FUN_110a6cf30;
  puVar7 = (undefined8 *)0x30;
  __Znwm();
  puVar7[1] = lStack_158;
  *puVar7 = uStack_160;
  if (lStack_158 != 0) {
    do {
      func_0x0001087717b8();
    } while (extraout_w10_00 != 0);
  }
  puVar7[3] = uStack_148;
  puVar7[2] = lStack_150;
  puVar7[4] = lStack_140;
  if (lStack_140 != 0) {
    do {
      func_0x0001087717b8();
    } while (extraout_w10_01 != 0);
  }
  *(undefined4 *)(puVar7 + 5) = uStack_138;
  uVar6 = *(undefined8 *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
  uStack_110 = uVar6;
  lStack_108 = lVar5;
  puStack_f0 = puVar7;
  if (lVar5 == 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x58);
  }
  else {
    do {
      func_0x0001087717b8();
    } while (extraout_w10_02 != 0);
    uVar10 = *(undefined8 *)(param_1 + 0x58);
    do {
      func_0x0001087717b8();
    } while (extraout_w10_03 != 0);
  }
  puVar8 = (undefined8 *)0xb8;
  uStack_130 = uVar6;
  lStack_128 = lVar5;
  __Znwm();
  uVar4 = uStack_198;
  uVar3 = uStack_1a0;
  plVar11 = puVar8 + 1;
  *plVar11 = 0;
  puVar8[2] = 0;
  *puVar8 = &PTR_FUN_110a6cdf0;
  pcStack_a0 = FUN_1087712d4;
  ppuStack_98 = &PTR_FUN_110a6ce30;
  uStack_130 = 0;
  lStack_128 = 0;
  pcVar12 = (code *)(puVar8 + 3);
  *(undefined ***)pcVar12 = &PTR_DAT_110a6ce70;
  pcStack_d0 = FUN_108771358;
  ppuStack_c8 = &PTR_FUN_110a6ce48;
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_b8 = 0;
  lStack_b0 = lStack_190;
  puVar8[4] = FUN_108771358;
  puVar8[5] = &PTR_FUN_110a6ce48;
  puVar8[7] = uVar4;
  puVar8[6] = uVar3;
  uStack_c0 = 0;
  puVar8[8] = lStack_190;
  puVar8[10] = FUN_1087715b0;
  puVar8[0xb] = &PTR_FUN_110a6cf30;
  puVar8[0xc] = puVar7;
  puStack_f0 = (undefined8 *)0x0;
  puVar8[0x10] = FUN_1087712d4;
  puVar8[0x11] = &PTR_FUN_110a6ce30;
  puVar8[0x12] = uVar6;
  puVar8[0x13] = lVar5;
  uStack_90 = 0;
  uStack_88 = 0;
  puVar8[0x16] = uVar10;
  func_0x000107c297a4(&uStack_c0);
  func_0x000107c297a8(&uStack_90);
  func_0x000107c297a8(&uStack_130);
  uStack_120 = 0;
  uStack_118 = 0;
  pcStack_1d0 = pcVar12;
  puStack_1c8 = puVar8;
  FUN_108771768(&uStack_120);
  func_0x000107c297a8(&uStack_110);
  func_0x0001087717e0();
  FUN_108771284(&uStack_160);
  func_0x000108771804();
  plVar9 = *(long **)(pcStack_a0 + 0x50);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar2) {
      *plVar11 = *plVar11 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  pcStack_d0 = pcVar12;
  ppuStack_c8 = (undefined **)puVar8;
  (**(code **)(*plVar9 + 0xb8))(plVar9,alStack_180,&pcStack_d0);
  func_0x000108771790(&pcStack_d0);
  func_0x000108771810();
  FUN_108771768(&pcStack_1d0);
  func_0x000107c297a4(&uStack_1c0);
  func_0x000107c297a4(&uStack_1a0);
  plVar9 = alStack_180;
  FUN_1089270ec();
  func_0x0001087717c8(uStack_70);
  if (extraout_x9_00 != extraout_x8_00) {
    ___stack_chk_fail();
    func_0x000108771790(&pcStack_d0);
    func_0x000108771810();
    FUN_108771768(&pcStack_1d0);
    func_0x000107c297a4(&uStack_1c0);
    func_0x000107c297a4(&uStack_1a0);
    plVar9 = alStack_180;
    FUN_1089270ec();
    func_0x0001087717d8();
    *plVar9 = (long)&PTR_FUN_110a6cd80;
    func_0x000108764cf4(plVar9 + 0x19);
    func_0x000107c27914(plVar9 + 0x16);
    *plVar9 = (long)&PTR_FUN_110a6b2b8;
    func_0x000107c2979c(plVar9 + 0x13);
    func_0x00010865f8f8(plVar9 + 0xd);
    *plVar9 = (long)&PTR_DAT_110a6d608;
    func_0x0001005fe494(plVar9 + 0xb);
    func_0x0001005640e4(plVar9 + 6);
    func_0x000107c60ca0(plVar9 + 3);
    func_0x0001005fe52c(plVar9 + 1);
    return plVar9;
  }
  return plVar9;
}



/* Entry: 1087711e4; end: 1087711e7;  */

undefined8 * FUN_1087711e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6cd80;
  func_0x000108764cf4(param_1 + 0x19);
  func_0x000107c27914(param_1 + 0x16);
  *param_1 = &PTR_FUN_110a6b2b8;
  func_0x000107c2979c(param_1 + 0x13);
  func_0x00010865f8f8(param_1 + 0xd);
  *param_1 = &PTR_DAT_110a6d608;
  func_0x0001005fe494(param_1 + 0xb);
  func_0x0001005640e4(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  func_0x0001005fe52c(param_1 + 1);
  return param_1;
}



/* Entry: 1087711e8; end: 1087711fb;  */

void FUN_1087711e8(void)

{
  FUN_108771660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087711fc; end: 108771283;  */

undefined1 * FUN_1087711fc(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x9;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  puVar2 = auStack_40;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c27994(auStack_40,param_2 + 0xb0);
  func_0x00010868c9c4(param_1,auStack_40,1);
  func_0x000107c27914();
  func_0x0001087717c8(uStack_28);
  if (extraout_x9 == extraout_x8) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x000107c27914();
  func_0x0001087717d8();
  func_0x000107c297ac(puVar2 + 0x18);
  func_0x000100562400();
  if (puVar2 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return puVar1;
}



/* Entry: 108771284; end: 1087712ab;  */

undefined8 FUN_108771284(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c297ac(param_1 + 0x18);
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1087712ac; end: 1087712af;  */

void FUN_1087712ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6cdf0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087712b0; end: 1087712c3;  */

void FUN_1087712b0(void)

{
  FUN_1087715a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087712c4; end: 1087712d3;  */

void FUN_1087712c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001087712cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1087712d4; end: 108771333;  */

long FUN_1087712d4(long param_1)

{
  long alStack_30 [2];
  
  func_0x00010084fa6c(alStack_30,param_1 + 0x10);
  if (alStack_30[0] == 0) {
    alStack_30[0] = 0;
  }
  else {
    func_0x00010084fb0c();
  }
  func_0x000107c297a4(alStack_30);
  return alStack_30[0];
}



/* Entry: 108771334; end: 108771357;  */

void FUN_108771334(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 108771358; end: 10877138f;  */

void FUN_108771358(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 0x20);
  (**(code **)(*(long *)plVar1[0x19] + 0x10))((long *)plVar1[0x19],param_1);
  *(undefined1 *)(plVar1 + 0x11) = 1;
  FUN_10867a27c(plVar1 + 0xd,0);
  func_0x000107c28b24(plVar1[0xb]);
  FUN_10875ec6c(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00010875ec68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1);
  return;
}



/* Entry: 108771390; end: 1087713bf;  */

void FUN_108771390(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1087713c0; end: 1087713d3;  */

void FUN_1087713c0(void)

{
  func_0x00010877156c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087713d4; end: 1087713eb;  */

void FUN_1087713d4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x98);
  func_0x0001005529b4(lVar2 + 0x20);
  lVar1 = lVar2 + 0x40;
  if ((*(byte *)(lVar2 + 0x50) & 1) == 0) {
    func_0x0001004b4e98();
    *(long *)(lVar2 + 0x48) = lVar1;
    *(undefined1 *)(lVar2 + 0x50) = 1;
  }
  return;
}



/* Entry: 1087713ec; end: 10877142f;  */

void FUN_1087713ec(int param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000108771818();
  if (param_1 != 0) {
    func_0x00010084fb48(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x000108771420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x20 + 8))(param_2,(undefined8 *)(unaff_x20 + 8));
    return;
  }
  return;
}



/* Entry: 108771430; end: 1087714db;  */

void FUN_108771430(int param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x20;
  undefined1 auStack_80 [72];
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  func_0x000108771818();
  if (param_1 != 0) {
    uStack_38 = (undefined4)param_3;
    uStack_34 = 1;
    FUN_1086818c8(*(undefined8 *)(unaff_x20 + 0x98),&uStack_38);
    if (*(char *)(param_4 + 0x40) == '\x01') {
      FUN_108681988(*(undefined8 *)(unaff_x20 + 0x98),param_4,0);
    }
    FUN_10875bae4(auStack_80,param_4);
    (**(code **)(unaff_x20 + 0x38))(param_2,param_3,auStack_80,(undefined8 *)(unaff_x20 + 0x38));
    func_0x000107c29564(auStack_80);
  }
  return;
}



/* Entry: 1087714dc; end: 1087714df;  */

undefined8 * FUN_1087714dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6cef8;
  func_0x0001087717fc(param_1[8]);
  func_0x0001087717fc(param_1[2]);
  return param_1;
}



/* Entry: 1087714e0; end: 1087714f3;  */

void FUN_1087714e0(void)

{
  FUN_108771530();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087714f4; end: 10877152f;  */

void FUN_1087714f4(void)

{
  return;
}



/* Entry: 108771530; end: 10877159f;  */

undefined8 * FUN_108771530(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6cef8;
  func_0x0001087717fc(param_1[8]);
  func_0x0001087717fc(param_1[2]);
  return param_1;
}



/* Entry: 1087715a0; end: 1087715af;  */

void FUN_1087715a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6cdf0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087715b0; end: 108771627;  */

void FUN_1087715b0(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined1 auStack_68 [72];
  
  lVar1 = *(long *)(param_4 + 0x10);
  FUN_10875bc3c(auStack_68,param_3);
  FUN_10875bbdc(auStack_68,*(undefined4 *)(lVar1 + 0x28),lVar1 + 0x18);
  FUN_108770c94(param_1);
  FUN_10875eb20(*(undefined8 *)(lVar1 + 0x10),param_1 & 0xffffffff | 0x100000000);
  func_0x000107c29564(auStack_68);
  return;
}



/* Entry: 108771628; end: 108771647;  */

void FUN_108771628(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_108771284();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108771648; end: 10877165f;  */

void FUN_108771648(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108771660; end: 10877169f;  */

undefined8 * FUN_108771660(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6cd80;
  func_0x000108764cf4(param_1 + 0x19);
  func_0x000107c27914(param_1 + 0x16);
  *param_1 = &PTR_FUN_110a6b2b8;
  func_0x000107c2979c(param_1 + 0x13);
  func_0x00010865f8f8(param_1 + 0xd);
  *param_1 = &PTR_DAT_110a6d608;
  func_0x0001005fe494(param_1 + 0xb);
  func_0x0001005640e4(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  func_0x0001005fe52c(param_1 + 1);
  return param_1;
}



/* Entry: 1087716a0; end: 1087716a7;  */

void FUN_1087716a0(void)

{
  return;
}



/* Entry: 1087716a8; end: 1087716d7;  */

void FUN_1087716a8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110a6cf58;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1087716d8; end: 108771723;  */

void FUN_1087716d8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a6cf58;
  param_2[1] = uVar1;
  return;
}



/* Entry: 108771724; end: 10877175b;  */

long FUN_108771724(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a6cfb8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10877175c; end: 108771767;  */

undefined ** FUN_10877175c(void)

{
  return &PTR_DAT_110a6cfb8;
}



/* Entry: 108771768; end: 1087717b7;  */

long FUN_108771768(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 1087717b8; end: 108771823;  */

void FUN_1087717b8(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 108771824; end: 108771bc3;  */

void FUN_108771824(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  undefined **ppuVar7;
  long *plVar8;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined8 uStack_190;
  long lStack_188;
  long lStack_180;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined4 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  code *pcStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  code *pcStack_d0;
  undefined **ppuStack_c8;
  undefined8 *puStack_c0;
  code *pcStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_70;
  
  func_0x0001008690f8();
  uStack_70 = extraout_x8;
  func_0x000107c297b4(&uStack_190,param_1 + 8);
  lStack_180 = param_1;
  func_0x000107c297b4(&uStack_1b0,param_1 + 8);
  lStack_168 = lStack_1a8;
  uStack_170 = uStack_1b0;
  lStack_1a0 = param_1;
  if (lStack_1a8 != 0) {
    do {
      FUN_108772cd8();
    } while (extraout_w10 != 0);
  }
  lStack_160 = lStack_1a0;
  func_0x000107c29820(&pcStack_110,param_1);
  lStack_150 = *(long *)(pcStack_110 + 600);
  uStack_158 = *(undefined8 *)(pcStack_110 + 0x250);
  if (*(long *)(pcStack_110 + 600) != 0) {
    do {
      FUN_108772cd8();
    } while (extraout_w10_00 != 0);
  }
  uStack_148 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0xfc);
  func_0x000107c297b0(&pcStack_110);
  pcStack_d0 = FUN_108772b70;
  ppuStack_c8 = &PTR_FUN_110a6d1c8;
  puVar5 = (undefined8 *)0x30;
  __Znwm();
  puVar5[1] = lStack_168;
  *puVar5 = uStack_170;
  if (lStack_168 != 0) {
    do {
      FUN_108772cd8();
    } while (extraout_w10_01 != 0);
  }
  puVar5[3] = uStack_158;
  puVar5[2] = lStack_160;
  puVar5[4] = lStack_150;
  if (lStack_150 != 0) {
    do {
      FUN_108772cd8();
    } while (extraout_w10_02 != 0);
  }
  *(undefined4 *)(puVar5 + 5) = uStack_148;
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  uStack_120 = uVar1;
  lStack_118 = lVar2;
  puStack_c0 = puVar5;
  if (lVar2 == 0) {
    uStack_1c8 = *(undefined8 *)(param_1 + 0x58);
  }
  else {
    do {
      FUN_108772cd8();
    } while (extraout_w10_03 != 0);
    uStack_1c8 = *(undefined8 *)(param_1 + 0x58);
    do {
      FUN_108772cd8();
    } while (extraout_w10_04 != 0);
  }
  puVar5 = (undefined8 *)0xb8;
  uStack_140 = uVar1;
  lStack_138 = lVar2;
  __Znwm();
  plVar8 = puVar5 + 1;
  *plVar8 = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110a6d048;
  pcStack_110 = FUN_108771eac;
  ppuStack_108 = &PTR_FUN_110a6d088;
  uStack_140 = 0;
  lStack_138 = 0;
  pcStack_a0 = FUN_108771f2c;
  ppuStack_98 = &PTR_DAT_110a6d0e0;
  if (lStack_188 == 0) {
    ppuVar7 = &PTR_FUN_110a6d1c8;
  }
  else {
    plVar6 = (long *)(lStack_188 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      ppuVar7 = ppuStack_c8;
    } while (cVar3 != '\0');
  }
  lStack_80 = lStack_180;
  puVar5[3] = &PTR_FUN_110a6d190;
  puVar5[4] = FUN_108771f2c;
  puVar5[5] = &PTR_DAT_110a6d0e0;
  puVar5[7] = lStack_188;
  puVar5[6] = uStack_190;
  uStack_90 = 0;
  uStack_88 = 0;
  puVar5[8] = lStack_180;
  puVar5[10] = FUN_108772b70;
  (*(code *)ppuVar7[2])(puVar5 + 0xb,&ppuStack_c8);
  puVar5[3] = &PTR_DAT_110a6d108;
  puVar5[0x10] = FUN_108771eac;
  puVar5[0x11] = &PTR_FUN_110a6d088;
  puVar5[0x12] = uVar1;
  puVar5[0x13] = lVar2;
  uStack_100 = 0;
  uStack_f8 = 0;
  puVar5[0x16] = uStack_1c8;
  func_0x000107c297a4(&uStack_90);
  func_0x000107c297a8(&uStack_100);
  func_0x000107c297a8(&uStack_140);
  uStack_130 = 0;
  uStack_128 = 0;
  pcStack_1c0 = (code *)(puVar5 + 3);
  puStack_1b8 = puVar5;
  func_0x000108772c88(&uStack_130);
  func_0x000107c297a8(&uStack_120);
  func_0x000108772d20(ppuStack_c8);
  FUN_108771e5c(&uStack_170);
  func_0x0001088eaf9c(&pcStack_110,0,param_1 + 0xd0);
  plVar6 = *(long **)(param_1 + 0x68);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = *plVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  pcStack_a0 = (code *)(puVar5 + 3);
  ppuStack_98 = (undefined **)puVar5;
  (**(code **)(*plVar6 + 0x60))(plVar6,&pcStack_110,&pcStack_a0);
  func_0x000108772cb0(&pcStack_a0);
  FUN_1088eb028(&pcStack_110);
  func_0x000108772c88(&pcStack_1c0);
  func_0x000107c297a4(&uStack_1b0);
  func_0x000107c297a4(&uStack_190);
  func_0x000100869480(uStack_70);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108772cb0(&pcStack_a0);
    FUN_1088eb028(&pcStack_110);
    func_0x000108772c88(&pcStack_1c0);
    func_0x000107c297a4(&uStack_1b0);
    do {
      func_0x000107c297a4(&uStack_190);
      func_0x000108772ce8();
    } while( true );
  }
  return;
}



/* Entry: 108771bc4; end: 108771c23;  */

void FUN_108771bc4(long param_1,undefined8 param_2)

{
  func_0x000108681904(*(undefined8 *)(param_1 + 0x58));
  func_0x000108772d98(*(undefined8 *)(param_1 + 0x58));
  FUN_108770c94(param_2);
  func_0x000108772d0c();
  func_0x000108772d5c(*(undefined8 *)(param_1 + 0x138));
  func_0x000108772d7c();
  return;
}



/* Entry: 108771c24; end: 108771c2f;  */

void FUN_108771c24(long param_1,undefined8 param_2)

{
  func_0x000108681930(*(undefined8 *)(param_1 + 0x58),param_2);
  func_0x000108772d98(*(undefined8 *)(param_1 + 0x58));
  func_0x000108772d0c();
  func_0x000108772d5c(*(undefined8 *)(param_1 + 0x138));
  func_0x000108772d7c();
  return;
}



/* Entry: 108771c30; end: 108771c9b;  */

void FUN_108771c30(long param_1,undefined8 *param_2,undefined8 param_3)

{
  func_0x000108681930(*(undefined8 *)(param_1 + 0x58),param_3);
  func_0x000108772d98(*(undefined8 *)(param_1 + 0x58));
  func_0x000108772d0c();
  func_0x000108772d5c(*param_2);
  func_0x000108772d7c();
  return;
}



/* Entry: 108771c9c; end: 108771e43;  */

void FUN_108771c9c(long *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 uStack_58;
  
  (**(code **)(*param_1 + 0x28))();
  func_0x000107c28b24(param_1[0xb]);
  lVar3 = *param_2;
  lVar1 = param_2[1];
  (*(code *)**(undefined8 **)param_1[0x27])((undefined8 *)param_1[0x27],param_2,param_4);
  ppuStack_80 = (undefined **)((ulong)ppuStack_80 & 0xffffffffffffff00);
  uStack_58 = 0;
  func_0x000108772d98(param_1[0xb]);
  func_0x000108772d0c();
  if (lVar3 != lVar1) {
    lVar3 = param_1[0x15];
    if (*(int *)((long)param_1 + 0x10c) - 1U < 4) {
      func_0x000108772da8(lVar3);
    }
    iVar2 = (int)lVar3;
    FUN_10885ed08();
    uStack_70 = 0;
    uStack_68 = 0;
    ppuStack_80 = &PTR_FUN_110a609a8;
    uStack_78 = 0;
    uStack_60 = 0x56;
    (**(code **)(*(long *)param_1[0x11] + 0x78))((long *)param_1[0x11],&ppuStack_80,(long)iVar2);
    func_0x000108772d74();
    uStack_70 = 0;
    uStack_68 = 0;
    ppuStack_80 = &PTR_FUN_110a609a8;
    uStack_78 = 0;
    uStack_60 = 0x57;
    (**(code **)(*(long *)param_1[0x11] + 0x78))
              ((long *)param_1[0x11],&ppuStack_80,
               (param_3[1] - *param_3) / 0x378 + (param_3[4] - param_3[3] >> 5));
    func_0x000108772d74();
    uStack_70 = 0;
    uStack_68 = 0;
    ppuStack_80 = &PTR_FUN_110a609a8;
    uStack_78 = 0;
    uStack_60 = 0x58;
    (**(code **)(*(long *)param_1[0x11] + 0x78))
              ((long *)param_1[0x11],&ppuStack_80,(long)(int)param_3[6]);
    func_0x000108772d74();
  }
  return;
}



/* Entry: 108771e44; end: 108771e47;  */

undefined8 * FUN_108771e44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6cfd8;
  func_0x000107c279dc(param_1 + 0x2c);
  func_0x0001086ff014(param_1 + 0x27);
  func_0x000107c279dc(param_1 + 0x23);
  FUN_1088eb028(param_1 + 0x1a);
  *param_1 = &PTR_FUN_110a6ba48;
  func_0x000100565838(param_1 + 0x17);
  func_0x00010054fa34(param_1 + 0x15);
  func_0x000100563508(param_1 + 0x13);
  func_0x0001004b55ac(param_1 + 0x11);
  func_0x000100568bec(param_1 + 0xf);
  func_0x0001005620dc(param_1 + 0xd);
  *param_1 = &PTR_DAT_110a6d608;
  func_0x0001005fe494(param_1 + 0xb);
  func_0x0001005640e4(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  func_0x0001005fe52c(param_1 + 1);
  return param_1;
}



/* Entry: 108771e48; end: 108771e5b;  */

void FUN_108771e48(void)

{
  FUN_108772c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108771e5c; end: 108771e83;  */

undefined8 FUN_108771e5c(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c297ac(param_1 + 0x18);
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 108771e84; end: 108771e87;  */

void FUN_108771e84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6d048;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108771e88; end: 108771e9b;  */

void FUN_108771e88(void)

{
  FUN_108772b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108771e9c; end: 108771eab;  */

void FUN_108771e9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108771ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108771eac; end: 108771f07;  */

long FUN_108771eac(long param_1)

{
  long alStack_30 [2];
  
  func_0x00010084fa6c(alStack_30,param_1 + 0x10);
  if (alStack_30[0] == 0) {
    alStack_30[0] = 0;
  }
  else {
    func_0x00010084fb0c();
  }
  func_0x000107c297a4(alStack_30);
  return alStack_30[0];
}



/* Entry: 108771f08; end: 108771f2b;  */

void FUN_108771f08(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 108771f2c; end: 1087725f7;  */

/* WARNING: Possible PIC construction at 0x0001087723c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010877245c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001087723c4) */
/* WARNING: Removing unreachable block (ram,0x000108772460) */
/* WARNING: Removing unreachable block (ram,0x0001087725dc) */
/* WARNING: Removing unreachable block (ram,0x0001087725ec) */

long * FUN_108771f2c(long param_1,long param_2)

{
  ulong *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  uint extraout_w8;
  undefined4 uVar10;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong uVar11;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long extraout_x11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auStack_218 [24];
  long *aplStack_200 [2];
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined1 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined1 uStack_190;
  undefined2 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined1 auStack_158 [24];
  long lStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long *plStack_d0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_78;
  
  lVar13 = param_1;
  lVar9 = param_2;
  func_0x0001008690f8();
  plVar12 = *(long **)(lVar9 + 0x20);
  uVar5 = *(undefined1 *)(lVar13 + 0x40);
  lStack_108 = 0;
  lStack_100 = 0;
  uStack_f8 = 0;
  uStack_78 = extraout_x8;
  func_0x000100864c58(&lStack_108,(long)*(int *)(lVar13 + 0x20));
  uVar11 = *(ulong *)(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 0x18);
  if ((uVar11 & 1) != 0) {
    puVar1 = (ulong *)(uVar11 + 7);
  }
  for (lVar13 = (long)*(int *)(param_1 + 0x20) << 3; lVar13 != 0; lVar13 = lVar13 + -8) {
    func_0x0001086f8248(&lStack_108,*puVar1);
    puVar1 = puVar1 + 1;
  }
  uStack_110 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_138 = 0;
  lStack_140 = 0;
  uVar15 = *(undefined8 *)(plVar12[0x15] + 0x18);
  func_0x000107c278b8(auStack_158,&UNK_10f4ba2fb);
  func_0x000107c31420(&pcStack_b8,uVar15,auStack_158);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_158);
  func_0x000100864f9c(auStack_218,plVar12,&lStack_108,0);
  plVar8 = plVar12 + 0x13;
  func_0x000100865a38(*plVar8,&lStack_108,&pcStack_b8);
  func_0x000107c27f70(&uStack_180,*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
  uVar4 = *(uint *)(param_1 + 0x10);
  func_0x000107c295d0(&uStack_1f0,plVar12 + 0x2a);
  if ((uVar4 & 1) == 0) {
    uStack_1c0 = uStack_1c0 & 0xffffffffffffff00;
    uStack_190 = 0;
    uStack_188 = 0x100;
  }
  else {
    ppuVar2 = &PTR_PTR_113278338;
    if (*(undefined ***)(param_1 + 0x38) != (undefined **)0x0) {
      ppuVar2 = *(undefined ***)(param_1 + 0x38);
    }
    func_0x000100865c14(&pcStack_f0,ppuVar2);
    func_0x000100865d40(&uStack_1c0,&pcStack_f0);
    uStack_188 = 0x100;
    func_0x000107c279dc(&uStack_e0);
  }
  func_0x000108772da8(*(int *)((long)plVar12 + 0x10c) + -1);
  if (extraout_w8 < 4) {
    uVar10 = *(undefined4 *)(extraout_x9 + (ulong)extraout_w8 * 4);
  }
  else {
    uVar10 = 0;
  }
  (**(code **)(**(long **)(*plVar8 + 0x10) + 0xb8))
            (&pcStack_f0,*(long **)(*plVar8 + 0x10),uVar10,&lStack_108,&uStack_180,&pcStack_b8,
             &uStack_1f0,1);
  func_0x000100867b30(&lStack_140,&pcStack_f0);
  func_0x000100867bf0(&pcStack_f0);
  func_0x000107c31428(&pcStack_b8);
  func_0x000100868e10(&uStack_1f0);
  func_0x000107c279a4(&uStack_180);
  func_0x000100868e54(auStack_218);
  func_0x000107c31424(&pcStack_b8);
  lVar13 = lStack_140;
  lVar9 = lStack_108;
  do {
    lVar14 = 0;
    while( true ) {
      uVar6 = lVar9 + lVar14 == lStack_100;
      if ((bool)uVar6) {
        if ((*(byte *)(plVar12 + 0x29) & 1) == 0) {
          FUN_108771c9c(plVar12,&lStack_140,&lStack_140,uVar5);
          func_0x000100867bf0(&lStack_140);
          plVar8 = &lStack_108;
          func_0x0001008670d0();
          func_0x000100869480(uStack_78);
          if ((bool)uVar6) {
            return plVar8;
          }
          ___stack_chk_fail();
          func_0x000108772d14(ppuStack_e8);
          func_0x000108772d20(ppuStack_b0);
          func_0x0001008670d0(auStack_218);
          func_0x000100869440(aplStack_200);
        }
        else {
          uStack_180 = *(undefined8 *)(param_2 + 0x10);
          lStack_1e8 = *(long *)(param_2 + 0x18);
          uStack_1f0 = uStack_180;
          if (lStack_1e8 == 0) {
            lStack_178 = 0;
          }
          else {
            do {
              func_0x000108772cd8();
            } while (extraout_w10 != 0);
            uStack_180 = *(undefined8 *)(extraout_x11 + 0x10);
            lStack_178 = *(long *)(extraout_x11 + 0x18);
          }
          uStack_1c0 = uStack_130;
          uStack_1c8 = uStack_138;
          lStack_1d0 = lStack_140;
          lStack_140 = 0;
          uStack_138 = 0;
          uStack_1b0 = uStack_120;
          uStack_1b8 = uStack_128;
          uStack_1a8 = uStack_118;
          uStack_130 = 0;
          uStack_128 = 0;
          uStack_120 = 0;
          uStack_118 = 0;
          uStack_1a0 = uStack_110;
          plStack_1e0 = plVar12;
          uStack_1d8 = uVar5;
          if (lStack_178 != 0) {
            do {
              func_0x000108772cd8();
            } while (extraout_w10_00 != 0);
          }
          pcStack_b8 = (code *)CONCAT44(pcStack_b8._4_4_,0x1200a5);
          plStack_170 = plVar12;
          if (*(int *)((long)plVar12 + 0x10c) - 1U < 4) {
            func_0x000108772da8();
            uVar10 = *(undefined4 *)(extraout_x9_00 + (extraout_x8_00 & 0xffffffff) * 4);
          }
          else {
            uVar10 = 0;
          }
          pcStack_f0 = (code *)CONCAT44(pcStack_f0._4_4_,uVar10);
          func_0x0001008691d0(aplStack_200,plVar12 + 0x17,plVar8);
          func_0x000100866ed4(auStack_218,&lStack_108);
          pcStack_b8 = FUN_10877264c;
          ppuStack_b0 = &PTR_FUN_110a6d0a0;
          uVar15 = 0x58;
          __Znwm();
          FUN_1087728a8();
          pcStack_f0 = FUN_10877290c;
          ppuStack_e8 = &PTR_DAT_110a6d0c0;
          lStack_d8 = lStack_178;
          uStack_e0 = uStack_180;
          uStack_a8 = uVar15;
          if (lStack_178 != 0) {
            do {
              func_0x000108772cd8();
            } while (extraout_w10_01 != 0);
          }
          plStack_d0 = plStack_170;
          FUN_1086f4820(aplStack_200[0],auStack_218,&pcStack_b8,&pcStack_f0);
          func_0x000108772d14(ppuStack_e8);
          func_0x000108772d20(ppuStack_b0);
          func_0x0001008670d0(auStack_218);
          func_0x000100869440(aplStack_200);
          plVar12 = aplStack_200[0];
        }
        puVar7 = &uStack_180;
        func_0x000100562400();
        if (puVar7 != (undefined8 *)0x0) {
          func_0x0001000df548();
        }
        return plVar12;
      }
      if ((*(byte *)(lVar9 + lVar14 + 0x88) & 1) == 0) break;
      lVar14 = lVar14 + 0xa8;
    }
    lVar16 = lVar9 + lVar14;
    uVar11 = *(ulong *)(lVar16 + 0x80);
    ppuVar2 = &PTR_PTR_113278360;
    if (*(undefined ***)(lVar16 + 0x38) != (undefined **)0x0) {
      ppuVar2 = *(undefined ***)(lVar16 + 0x38);
    }
    ppuVar3 = &PTR_PTR_11326cb58;
    if ((undefined **)ppuVar2[3] != (undefined **)0x0) {
      ppuVar3 = (undefined **)ppuVar2[3];
    }
    func_0x000107c29ee0(&uStack_1f0,ppuVar3);
    if ((ulong)plVar12[0x22] < uVar11) {
LAB_108772198:
      FUN_1086f9554(lVar13 + 0x378,uStack_138,lVar13);
      func_0x000107c27b44(&lStack_140);
      FUN_1086f94f0(lVar9 + lVar14 + 0xa8,lStack_100);
      FUN_1086f4d64(&lStack_108);
    }
    else {
      if ((char)plVar12[0x26] == '\x01' && uVar11 == plVar12[0x22]) {
        puVar7 = &uStack_1f0;
        FUN_108664d0c(puVar7,plVar12 + 0x23);
        if ((char)puVar7 < '\x01') goto LAB_108772198;
      }
      lVar13 = lVar13 + 0x378;
      lVar16 = lVar9 + lVar14 + 0xa8;
    }
    func_0x000107c27914(&uStack_1f0);
    lVar9 = lVar16;
  } while( true );
}



/* Entry: 1087725f8; end: 10877261f;  */

undefined8 FUN_1087725f8(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000100867bf0(param_1 + 0x20);
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 108772620; end: 10877264b;  */

void FUN_108772620(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  ppuVar1 = &PTR_PTR_113278360;
  if (*(undefined ***)(param_3 + 0x38) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_3 + 0x38);
  }
  ppuVar2 = &PTR_PTR_11326cb58;
  if ((undefined **)ppuVar1[3] != (undefined **)0x0) {
    ppuVar2 = (undefined **)ppuVar1[3];
  }
  lVar3 = (long)*(char *)(((ulong)ppuVar2[2] & 0xfffffffffffffffc) + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(((ulong)ppuVar2[2] & 0xfffffffffffffffc) + 8);
  }
  func_0x000100553394(lVar3);
  func_0x0001006963ec(&uStack_40,(ulong)ppuVar2[2] & 0xfffffffffffffffc);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x000100100fec(&uStack_40);
  return;
}



/* Entry: 10877264c; end: 108772827;  */

void FUN_10877264c(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  undefined ***pppuVar6;
  undefined *puVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined1 auStack_a0 [16];
  long lStack_90;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar9 = *(long *)(param_3 + 0x10);
  plVar10 = *(long **)(lVar9 + 0x10);
  func_0x000107c29820(&ppuStack_c8,plVar10);
  FUN_1086f7bd0(auStack_a0,param_1,ppuStack_c8 + 3);
  func_0x000107c297b0(&ppuStack_c8);
  bVar8 = false;
  for (plVar12 = (long *)lStack_90; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
    if (0 < plVar12[3]) {
      plVar11 = (long *)plVar10[0x11];
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_c0 = 0;
      ppuStack_c8 = &PTR_FUN_110a609a8;
      uStack_a8 = 0x55;
      uVar2 = *(uint *)(plVar12 + 2);
      puVar7 = &UNK_10f3158b1;
      if (uVar2 >> 0x11 < 0x47) {
        puVar7 = (&PTR_DAT_113268bb8)[uVar2 >> 0x10];
      }
      func_0x000107c278b8(&uStack_78,puVar7);
      puVar7 = &UNK_10f3158c2;
      if ((uVar2 & 0xffff) < 0x2b8) {
        puVar7 = (&PTR_s_success_113269028)[uVar2 & 0xffff];
      }
      pppuVar6 = &ppuStack_c8;
      func_0x000107c28824(pppuVar6,&uStack_78,puVar7);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_78);
      (**(code **)(*plVar11 + 0x58))(plVar11,pppuVar6,plVar12[3]);
      func_0x000108772da0();
      bVar8 = true;
    }
  }
  if (bVar8) {
    uStack_b8 = 0;
    uStack_b0 = 0;
    ppuStack_c8 = &PTR_FUN_110a609a8;
    uStack_c0 = 0;
    uStack_a8 = 0x54;
    (**(code **)(*(long *)plVar10[0x11] + 0x50))((long *)plVar10[0x11],&ppuStack_c8);
    func_0x000108772da0();
  }
  func_0x0001086f9bdc(auStack_a0);
  uVar3 = *(undefined1 *)(lVar9 + 0x18);
  (**(code **)(*plVar10 + 0x28))();
  func_0x000107c28b24(plVar10[0xb]);
  lVar5 = *param_1;
  lVar1 = param_1[1];
  (*(code *)**(undefined8 **)plVar10[0x27])((undefined8 *)plVar10[0x27],param_1,uVar3);
  ppuStack_80 = (undefined **)((ulong)ppuStack_80 & 0xffffffffffffff00);
  func_0x000108772d98(plVar10[0xb]);
  func_0x000108772d0c();
  if (lVar5 != lVar1) {
    lVar5 = plVar10[0x15];
    if (*(int *)((long)plVar10 + 0x10c) - 1U < 4) {
      func_0x000108772da8(lVar5);
    }
    iVar4 = (int)lVar5;
    FUN_10885ed08();
    uStack_70 = 0;
    uStack_68 = 0;
    ppuStack_80 = &PTR_FUN_110a609a8;
    uStack_78 = 0;
    (**(code **)(*(long *)plVar10[0x11] + 0x78))((long *)plVar10[0x11],&ppuStack_80,(long)iVar4);
    func_0x000108772d74();
    uStack_70 = 0;
    uStack_68 = 0;
    ppuStack_80 = &PTR_FUN_110a609a8;
    uStack_78 = 0;
    (**(code **)(*(long *)plVar10[0x11] + 0x78))
              ((long *)plVar10[0x11],&ppuStack_80,
               (*(long *)(lVar9 + 0x28) - *(long *)(lVar9 + 0x20)) / 0x378 +
               (*(long *)(lVar9 + 0x40) - *(long *)(lVar9 + 0x38) >> 5));
    func_0x000108772d74();
    uStack_70 = 0;
    uStack_68 = 0;
    ppuStack_80 = &PTR_FUN_110a609a8;
    uStack_78 = 0;
    (**(code **)(*(long *)plVar10[0x11] + 0x78))
              ((long *)plVar10[0x11],&ppuStack_80,(long)*(int *)(lVar9 + 0x50));
    func_0x000108772d74();
  }
  return;
}



/* Entry: 108772828; end: 108772847;  */

void FUN_108772828(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1087725f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108772848; end: 10877284b;  */

void FUN_108772848(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10877284c; end: 1087728a7;  */

void FUN_10877284c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110a6d0a0;
  uVar1 = 0x58;
  __Znwm();
  FUN_1087728a8();
  param_1[1] = uVar1;
  return;
}



/* Entry: 1087728a8; end: 10877290b;  */

undefined8 * FUN_1087728a8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  int extraout_w10;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_108772cd8();
    } while (extraout_w10 != 0);
  }
  uVar2 = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = uVar2;
  func_0x000100869518(param_1 + 4,param_2 + 4);
  return param_1;
}



/* Entry: 10877290c; end: 108772983;  */

void FUN_10877290c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x000108681930(*(undefined8 *)(lVar1 + 0x58),param_1);
  func_0x000108772d98(*(undefined8 *)(lVar1 + 0x58));
  func_0x000108772d0c();
  func_0x000108772d5c(*(undefined8 *)(lVar1 + 0x138));
  func_0x000108772d7c();
  return;
}



/* Entry: 108772984; end: 108772997;  */

void FUN_108772984(void)

{
  func_0x000108772b2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108772998; end: 1087729af;  */

void FUN_108772998(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x98);
  func_0x0001005529b4(lVar2 + 0x20);
  lVar1 = lVar2 + 0x40;
  if ((*(byte *)(lVar2 + 0x50) & 1) == 0) {
    func_0x0001004b4e98();
    *(long *)(lVar2 + 0x48) = lVar1;
    *(undefined1 *)(lVar2 + 0x50) = 1;
  }
  return;
}



/* Entry: 1087729b0; end: 1087729f3;  */

void FUN_1087729b0(int param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000108772d84();
  if (param_1 != 0) {
    func_0x00010084fb48(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x0001087729e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x20 + 8))(param_2,(undefined8 *)(unaff_x20 + 8));
    return;
  }
  return;
}



/* Entry: 1087729f4; end: 108772a9b;  */

void FUN_1087729f4(int param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x20;
  undefined1 auStack_80 [72];
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  func_0x000108772d84();
  if (param_1 != 0) {
    uStack_38 = (undefined4)param_3;
    uStack_34 = 1;
    FUN_1086818c8(*(undefined8 *)(unaff_x20 + 0x98),&uStack_38);
    if (*(char *)(param_4 + 0x40) == '\x01') {
      FUN_108681988(*(undefined8 *)(unaff_x20 + 0x98),param_4,0);
    }
    FUN_10875bae4(auStack_80,param_4);
    (**(code **)(unaff_x20 + 0x38))(param_2,param_3,auStack_80,(undefined8 *)(unaff_x20 + 0x38));
    func_0x000107c29564(auStack_80);
  }
  return;
}



/* Entry: 108772a9c; end: 108772a9f;  */

undefined8 * FUN_108772a9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6d190;
  func_0x000108772d90(param_1[8]);
  func_0x000108772d90(param_1[2]);
  return param_1;
}



/* Entry: 108772aa0; end: 108772ab3;  */

void FUN_108772aa0(void)

{
  FUN_108772af0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108772ab4; end: 108772aef;  */

void FUN_108772ab4(void)

{
  return;
}



/* Entry: 108772af0; end: 108772b5f;  */

undefined8 * FUN_108772af0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6d190;
  func_0x000108772d90(param_1[8]);
  func_0x000108772d90(param_1[2]);
  return param_1;
}



/* Entry: 108772b60; end: 108772b6f;  */

void FUN_108772b60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6d048;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108772b70; end: 108772c13;  */

void FUN_108772b70(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  ulong extraout_x8;
  long extraout_x9;
  long lVar2;
  undefined1 auStack_68 [72];
  
  lVar2 = *(long *)(param_4 + 0x10);
  FUN_10875bc3c(auStack_68,param_3);
  FUN_10875bbdc(auStack_68,*(undefined4 *)(lVar2 + 0x28),lVar2 + 0x18);
  lVar2 = *(long *)(lVar2 + 0x10);
  if ((int)param_1 == 5) {
    if (*(int *)(lVar2 + 0x10c) - 1U < 4) {
      func_0x000108772da8();
      uVar1 = *(undefined4 *)(extraout_x9 + (extraout_x8 & 0xffffffff) * 4);
    }
    else {
      uVar1 = 0;
    }
    FUN_108866be4(*(undefined8 *)(lVar2 + 0xa8),uVar1);
  }
  FUN_108765e48(lVar2,param_1,&UNK_10f4ba315);
  func_0x000107c29564(auStack_68);
  return;
}


