/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a110d78; end: 10a110e4f;  */

/* WARNING: Removing unreachable block (ram,0x00010a110e10) */

undefined1  [16] FUN_10a110d78(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f63e0a3,10);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a137c08(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a110e50; end: 10a110e5f;  */

undefined1  [16] FUN_10a110e50(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xd;
  auVar1._0_8_ = &UNK_10f63e0ae;
  return auVar1;
}



/* Entry: 10a110e60; end: 10a110eeb;  */

void FUN_10a110e60(undefined8 param_1)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  
  FUN_10a003e74(param_1,&UNK_10f63ced5,0xc);
  uStack_60 = 0xffffffff00000001;
  uStack_68 = 0;
  uStack_58 = 0xffffffff;
  puStack_50 = &UNK_10f63ce51;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_2c = 0xffffffff0000016f;
  FUN_10a110eec(param_1,&uStack_68);
  FUN_10a138cac();
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a110eec; end: 10a110fc3;  */

/* WARNING: Removing unreachable block (ram,0x00010a110f84) */

undefined1  [16] FUN_10a110eec(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f63e0ae,0xd);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a138bb0(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a110fc4; end: 10a11114b;  */

void FUN_10a110fc4(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar3 = (long *)param_1[1];
  if ((plVar3 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar3 != (long *)0x0))
  {
    lVar6 = *param_1;
    if (lVar6 != 0) {
      lVar4 = param_1[2];
      __ZNSt3__15mutex4lockEv(lVar6 + 0x28);
      plVar8 = *(long **)(lVar6 + 0x70);
      plVar9 = *(long **)(lVar6 + 0x68);
      plVar7 = plVar9;
      for (; (plVar9 != plVar8 && (plVar7 = plVar9, *plVar9 != lVar4)); plVar9 = plVar9 + 9) {
        plVar7 = plVar8;
      }
      if (plVar8 != plVar7) {
        plVar9 = plVar7;
        if (plVar7 + 9 != plVar8) {
          do {
            plVar7 = plVar9 + 9;
            plVar9[1] = plVar9[10];
            *plVar9 = *plVar7;
            plVar5 = plVar9 + 2;
            (**(code **)*plVar5)(plVar5);
            (**(code **)(plVar9[0xb] + 0x10))(plVar5,plVar9 + 0xb);
            plVar5 = plVar9 + 0x12;
            plVar9 = plVar7;
          } while (plVar5 != plVar8);
          plVar8 = *(long **)(lVar6 + 0x70);
        }
        if (plVar8 != plVar7) {
          plVar8 = plVar8 + -7;
          do {
            plVar9 = plVar8 + -2;
            (**(code **)*plVar8)(plVar8);
            plVar8 = plVar8 + -9;
          } while (plVar9 != plVar7);
        }
        *(long **)(lVar6 + 0x70) = plVar7;
      }
      __ZNSt3__15mutex6unlockEv(lVar6 + 0x28);
    }
    plVar9 = plVar3 + 1;
    do {
      lVar6 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar3);
      return;
    }
  }
  return;
}



/* Entry: 10a11114c; end: 10a11117f;  */

long FUN_10a11114c(long param_1)

{
  FUN_10a110fc4();
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a111180; end: 10a1111bb;  */

undefined8 * FUN_10a111180(undefined8 *param_1)

{
  FUN_10a04b010(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a1111bc; end: 10a1111df;  */

long FUN_10a1111bc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a04b010();
  *(undefined ***)(param_1 + -0x18) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + -8);
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
  return param_1 + -0x10;
}



/* Entry: 10a1111e0; end: 10a11121b;  */

void FUN_10a1111e0(undefined8 *param_1)

{
  FUN_10a04b010(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a11121c; end: 10a111223;  */

void FUN_10a11121c(long param_1)

{
  FUN_10a04b010(param_1);
  *(undefined8 *)(param_1 + -0x18) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((undefined8 *)(param_1 + -0x18));
  return;
}



/* Entry: 10a111224; end: 10a111273;  */

void FUN_10a111224(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *extraout_x8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (param_3 == 0) break;
    unaff_x30 = FUN_10a111274;
    FUN_10a00946c(&UNK_10f63cff0);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    param_1 = extraout_x8;
  }
  func_0x00010a138dc0((undefined1 *)((long)register0x00000008 + -0x30));
  lVar2 = *(long *)((long)register0x00000008 + -0x28);
  lVar1 = 0;
  if (*(long *)((long)register0x00000008 + -0x30) != 0) {
    lVar1 = *(long *)((long)register0x00000008 + -0x30) + 0x18;
  }
  *param_1 = lVar1;
  param_1[1] = lVar2;
  return;
}



/* Entry: 10a111274; end: 10a111277;  */

void FUN_10a111274(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *extraout_x8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (param_3 == 0) break;
    unaff_x30 = FUN_10a111274;
    FUN_10a00946c(&UNK_10f63cff0);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    param_1 = extraout_x8;
  }
  func_0x00010a138dc0((undefined1 *)((long)register0x00000008 + -0x30));
  lVar2 = *(long *)((long)register0x00000008 + -0x28);
  lVar1 = 0;
  if (*(long *)((long)register0x00000008 + -0x30) != 0) {
    lVar1 = *(long *)((long)register0x00000008 + -0x30) + 0x18;
  }
  *param_1 = lVar1;
  param_1[1] = lVar2;
  return;
}



/* Entry: 10a111278; end: 10a11132b;  */

void FUN_10a111278(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = 0x7365526567616d49;
  *(undefined4 *)(param_1 + 1) = 0x657a69;
  *(undefined1 *)((long)param_1 + 0x17) = 0xb;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  FUN_10a11132c(param_3,param_4,param_1,"width",5,*(undefined4 *)(param_2 + 0x60));
  FUN_10a11132c(param_3,param_4,param_1,"height",6,*(undefined4 *)(param_2 + 100));
  return;
}



/* Entry: 10a11132c; end: 10a111453;  */

void FUN_10a11132c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined4 *puVar6;
  undefined8 *extraout_x8;
  undefined8 **ppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong auStack_60 [2];
  char cStack_49;
  undefined4 uStack_44;
  
  uStack_44 = param_6;
  func_0x000109a21d80(auStack_60,param_2);
  puVar5 = auStack_60;
  puVar6 = &uStack_44;
  FUN_10a032ebc(param_1,puVar5,puVar6);
  uVar3 = param_1;
  if (cStack_49 < '\0') {
    __ZdlPv();
    uVar3 = auStack_60[0];
  }
  if (0x7ffffffffffffff7 < param_5) {
    func_0x000109ffde50();
    if ((long)uStack_68 < 0) {
      __ZdlPv(ppuStack_78);
    }
    uVar4 = uVar3;
    __Unwind_Resume();
    *extraout_x8 = 0x7365526567616d49;
    *(undefined4 *)(extraout_x8 + 1) = 0x657a69;
    *(undefined1 *)((long)extraout_x8 + 0x17) = 0xb;
    extraout_x8[4] = 0;
    extraout_x8[5] = 0;
    extraout_x8[3] = 0;
    FUN_10a11132c(puVar5,puVar6,extraout_x8,"width",5,*(undefined4 *)(uVar4 + 0x48),param_7,param_8,
                  param_1,param_4,param_5,uVar3,&stack0xfffffffffffffff0,FUN_10a111454);
    FUN_10a11132c(puVar5,puVar6,extraout_x8,"height",6,*(undefined4 *)(uVar4 + 0x4c));
    return;
  }
  if (param_5 < 0x17) {
    uStack_68 = CONCAT17((char)param_5,(undefined7)uStack_68);
    pppuVar2 = &ppuStack_78;
    if (param_5 == 0) goto LAB_10a1113e4;
  }
  else {
    pppuVar1 = (undefined8 ***)0x19;
    if ((param_5 | 7) != 0x17) {
      pppuVar1 = (undefined8 ***)((param_5 | 7) + 1);
    }
    pppuVar2 = pppuVar1;
    __Znwm();
    uStack_68 = (ulong)pppuVar1 | 0x8000000000000000;
    ppuStack_78 = pppuVar2;
    uStack_70 = param_5;
  }
  _memmove(pppuVar2,param_4,param_5);
LAB_10a1113e4:
  *(undefined1 *)((long)pppuVar2 + param_5) = 0;
  FUN_10a032e10(param_3,&ppuStack_78,param_1 & 0xffffffff);
  if ((long)uStack_68 < 0) {
    __ZdlPv(ppuStack_78);
  }
  return;
}



/* Entry: 10a111454; end: 10a1114bb;  */

void FUN_10a111454(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = 0x7365526567616d49;
  *(undefined4 *)(param_1 + 1) = 0x657a69;
  *(undefined1 *)((long)param_1 + 0x17) = 0xb;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  FUN_10a11132c(param_3,param_4,param_1,"width",5,*(undefined4 *)(param_2 + 0x48));
  FUN_10a11132c(param_3,param_4,param_1,"height",6,*(undefined4 *)(param_2 + 0x4c));
  return;
}



/* Entry: 10a1114bc; end: 10a111547;  */

void FUN_10a1114bc(undefined8 param_1)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  
  FUN_10a003e74(param_1,&UNK_10f63ced5,0xc);
  uStack_60 = 0xffffffff00000001;
  uStack_68 = 0;
  uStack_58 = 0xffffffff;
  puStack_50 = &UNK_10f63ce51;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_2c = 0xffffffff0000016f;
  FUN_10a111548(param_1,&uStack_68);
  FUN_10a139018();
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a111548; end: 10a11161f;  */

/* WARNING: Removing unreachable block (ram,0x00010a1115e0) */

undefined1  [16] FUN_10a111548(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f63e0bc,5);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a138f1c(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a111620; end: 10a11166b;  */

undefined1  [16] FUN_10a111620(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 10;
  auVar1._0_8_ = &DAT_10f3c8d48;
  return auVar1;
}



/* Entry: 10a11166c; end: 10a111917;  */

void FUN_10a11166c(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  FUN_10a003e74(param_1,&UNK_10f63ced5,0xc);
  func_0x000109887da8(appuStack_c8,&DAT_10f3c8d48,10);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110ba6460;
  pppuVar2 = (undefined8 ***)&UNK_10f63ce51;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x16f;
  uStack_50 = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110ba6460;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110ba7718;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    func_0x00010a06ba0c(param_1,FUN_10a1390d4,0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1118f8;
    FUN_10a054dac(param_1,&UNK_10f63d014,FUN_10a1391f4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1118f8;
    FUN_10a054dac(param_1,&DAT_10f577b9e,FUN_10a1395a8,2,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&DAT_10f3c8d48,10);
      FUN_10a05431c(param_1);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a1118f8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a1118fc);
  (*pcVar6)();
}



/* Entry: 10a111918; end: 10a1119d3;  */

void FUN_10a111918(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  *param_1 = &PTR_DAT_110b20ff0;
  param_1[1] = 0;
  param_1[3] = 0;
  func_0x00010b4d1294(auStack_38,&PTR_PTR_1132e8928);
  func_0x000109a1cae4(param_1);
  *(undefined4 *)((long)param_1 + 0x1c) = 100;
  param_1[2] = &DAT_11383d918;
  uVar1 = param_1[1];
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
  }
  func_0x000107c3024c(param_1 + 2,auStack_38,uVar1);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 10a1119d4; end: 10a1119e3;  */

void FUN_10a1119d4(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  *param_1 = &PTR_DAT_110b20ff0;
  param_1[1] = 0;
  param_1[3] = 0;
  func_0x00010b4d1294(auStack_38,&PTR_PTR_1132e8928);
  func_0x000109a1cae4(param_1);
  *(undefined4 *)((long)param_1 + 0x1c) = 100;
  param_1[2] = &DAT_11383d918;
  uVar1 = param_1[1];
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
  }
  func_0x000107c3024c(param_1 + 2,auStack_38,uVar1);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 10a1119e4; end: 10a111d2f;  */

/* WARNING: Removing unreachable block (ram,0x00010a111bbc) */
/* WARNING: Removing unreachable block (ram,0x00010a111bc0) */
/* WARNING: Removing unreachable block (ram,0x00010a111bc8) */
/* WARNING: Removing unreachable block (ram,0x00010a111bd0) */
/* WARNING: Removing unreachable block (ram,0x00010a111bd4) */
/* WARNING: Removing unreachable block (ram,0x00010a111bf4) */
/* WARNING: Removing unreachable block (ram,0x00010a111bf8) */
/* WARNING: Removing unreachable block (ram,0x00010a111c00) */
/* WARNING: Removing unreachable block (ram,0x00010a111c08) */
/* WARNING: Removing unreachable block (ram,0x00010a111c0c) */

undefined1  [16] FUN_10a1119e4(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long *plStack_78;
  long *plStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar9 = *param_3;
  if (lVar9 == 0) {
LAB_10a111ca0:
    FUN_10a00946c(&UNK_10f63d024);
LAB_10a111cac:
    FUN_10a00946c(&UNK_10f63e0c2);
  }
  else {
    if (*(char *)(lVar9 + 0x30) != '\0') goto LAB_10a111cac;
    if (*(long *)(lVar9 + 0x20) - *(long *)(lVar9 + 0x18) == 0xc) {
      if (*(int *)(*(long *)(lVar9 + 0x18) + 8) - 5U < 0xfffffffc) goto LAB_10a111cc4;
      plVar10 = *(long **)(param_2 + 0x28);
      if (plVar10 != (long *)0x0) {
        lVar9 = *(long *)(param_2 + 0x20);
        __ZNSt3__119__shared_weak_count4lockEv();
        if (plVar10 != (long *)0x0) {
          lVar2 = 0;
          if (lVar9 != 0) {
            lVar2 = lVar9 + -0x18;
          }
          lVar11 = *param_3;
          plVar6 = (long *)0x98;
          __Znwm();
          plVar12 = plVar6 + 1;
          *plVar12 = 0;
          plVar6[2] = 0;
          *plVar6 = (long)&PTR_FUN_110ba71a0;
          lStack_60 = 0;
          uStack_58 = 0;
          lStack_68 = 0;
          lVar9 = *(long *)(lVar11 + 0x18);
          lVar11 = *(long *)(lVar11 + 0x20);
          lStack_50 = lVar2;
          plStack_48 = plVar10;
          FUN_10a0e9a40(&lStack_68,lVar9,lVar11,lVar11 - lVar9 >> 2);
          plVar10 = plVar6 + 3;
          FUN_10a031fdc(plVar10,&lStack_50,&lStack_68,1);
          if (lStack_68 != 0) {
            lStack_60 = lStack_68;
            __ZdlPv();
          }
          plVar5 = plStack_48;
          if (plStack_48 != (long *)0x0) {
            plVar1 = plStack_48 + 1;
            do {
              lVar9 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*plStack_48 + 0x10))(plStack_48);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
            }
          }
          plStack_78 = plVar10;
          plStack_70 = plVar6;
          if (plVar6[8] == 0) {
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar4) {
                *plVar12 = *plVar12 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            plVar10 = plVar6 + 2;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar4) {
                *plVar10 = *plVar10 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            plVar6[7] = (long)(plVar6 + 6);
            plVar6[8] = (long)plVar6;
          }
          else {
            if (*(long *)(plVar6[8] + 8) != -1) goto LAB_10a111bb4;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar4) {
                *plVar12 = *plVar12 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            plVar10 = plVar6 + 2;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar4) {
                *plVar10 = *plVar10 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            plVar6[7] = (long)(plVar6 + 6);
            plVar6[8] = (long)plVar6;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          do {
            lVar9 = *plVar12;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar4) {
              *plVar12 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
LAB_10a111bb4:
          plVar10 = plStack_78 + 3;
          uVar8 = 0;
          func_0x000109a22a14(&lStack_68,plVar10,0);
          plVar6 = plStack_70;
          lVar9 = 0;
          if (lStack_68 != 0) {
            lVar9 = lStack_68 + -0x18;
          }
          *param_1 = lVar9;
          param_1[1] = lStack_60;
          if (plStack_70 != (long *)0x0) {
            plVar12 = plStack_70 + 1;
            do {
              lVar9 = *plVar12;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar4) {
                *plVar12 = lVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*plStack_70 + 0x10))(plStack_70);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
              plVar10 = plVar6;
            }
          }
          auVar13._8_8_ = uVar8;
          auVar13._0_8_ = plVar10;
          return auVar13;
        }
      }
      FUN_10a043ecc();
      goto LAB_10a111ca0;
    }
  }
  FUN_10a00946c(&UNK_10f63d04f);
LAB_10a111cc4:
  puVar7 = &UNK_10f63d09e;
  FUN_10a00946c(&UNK_10f63d09e);
  FUN_10a139c50(&plStack_78);
  __Unwind_Resume(puVar7);
  auVar14._8_8_ = 0x12;
  auVar14._0_8_ = &UNK_10f63e10d;
  return auVar14;
}



/* Entry: 10a111d30; end: 10a111da7;  */

undefined1  [16] FUN_10a111d30(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x12;
  auVar1._0_8_ = &UNK_10f63e10d;
  return auVar1;
}



/* Entry: 10a111da8; end: 10a111dfb;  */

void FUN_10a111da8(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000002;
  uStack_48 = 0xffffffff;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0;
  uStack_1c = 0x13c00000124;
  FUN_10a111dfc(param_1,&uStack_58);
  FUN_10a139e3c();
  return;
}



/* Entry: 10a111dfc; end: 10a111ed3;  */

/* WARNING: Removing unreachable block (ram,0x00010a111e94) */

undefined1  [16] FUN_10a111dfc(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f63e10d,0x12);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a139d40(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a111ed4; end: 10a111ee3;  */

void FUN_10a111ed4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a111ee4; end: 10a111fe7;  */

void FUN_10a111ee4(undefined8 param_1)

{
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuStack_90 = (undefined **)0x0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63d17e;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f63ce51;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  puStack_60 = &UNK_10f63ce51;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a004eb4(param_1,&puStack_98);
  ppuStack_90 = &puStack_a0;
  puStack_a0 = &UNK_10f63d195;
  puStack_98 = &UNK_10f63d185;
  uStack_88 = 1;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f63ce51;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a111fe8(param_1,&puStack_98);
  ppuStack_90 = (undefined **)0x0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63d1a0;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f63ce51;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a112050(param_1,&puStack_98);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a111fe8; end: 10a1121b3;  */

ulong FUN_10a111fe8(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a112050);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a139ef8,1,*(long *)(param_1 + 0x18) + -8);
  }
  return param_1;
}



/* Entry: 10a1121b4; end: 10a1122f3;  */

void FUN_10a1121b4(undefined8 param_1)

{
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuStack_90 = (undefined **)0x0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63d24f;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f63ce51;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a004eb4(param_1,&puStack_98);
  puStack_a8 = &UNK_10f63d25d;
  puStack_a0 = &UNK_10f63d267;
  ppuStack_90 = &puStack_a8;
  puStack_98 = &UNK_10f63d256;
  uStack_88 = 2;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f63ce51;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  pcStack_b0 = FUN_10a1122f4;
  func_0x00010a11229c(param_1,&puStack_98,&pcStack_b0);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a1122f4; end: 10a1127e3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a1122f4(long *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  long alStack_50 [2];
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  lVar8 = *(long *)(param_2 + 0x870);
  lVar11 = *(long *)(lVar8 + 0x38);
  if (lVar11 == 0) {
    lVar11 = *(long *)(lVar8 + 0x28);
    plStack_58 = *(long **)(lVar8 + 0x30);
  }
  else {
    plStack_58 = *(long **)(lVar8 + 0x40);
  }
  if (plStack_58 != (long *)0x0) {
    plVar7 = plStack_58 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lStack_60 = lVar11;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_88,*param_3,param_3[1]);
  }
  else {
    uStack_80 = param_3[1];
    uStack_88 = *param_3;
    lStack_78 = param_3[2];
  }
  plStack_68 = (long *)param_4[1];
  uStack_70 = *param_4;
  if (param_4[1] != 0) {
    plVar7 = (long *)(param_4[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar6 = (undefined8 *)0x98;
  __Znwm();
  *puVar6 = FUN_10a146fe0;
  puVar6[1] = FUN_10a14728c;
  FUN_10a12bf2c(puVar6 + 2);
  lVar8 = puVar6[7];
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar8;
  puVar6[9] = param_2;
  if (lStack_78 < 0) {
    func_0x000107c3192c(puVar6 + 10,uStack_88,uStack_80);
  }
  else {
    puVar6[0xb] = uStack_80;
    puVar6[10] = uStack_88;
    puVar6[0xc] = lStack_78;
  }
  puVar6[0xe] = plStack_68;
  puVar6[0xd] = uStack_70;
  uStack_70 = 0;
  plStack_68 = (long *)0x0;
  puVar6[0xf] = lVar11;
  *(undefined1 *)(puVar6 + 0x10) = 0;
  *(undefined1 *)(puVar6 + 0x12) = 0;
  alStack_50[0] = 0;
  FUN_109d18960(puVar6 + 2,lVar11,alStack_50);
  if (alStack_50[0] == 0) {
    if ((*(byte *)(puVar6 + 0x10) & 1) == 0) {
      puStack_38 = (undefined8 *)puVar6[0xf];
      alStack_50[1] = 0;
      puStack_40 = puVar6;
      (**(code **)*puStack_38)(puStack_38,alStack_50 + 1);
      __ZNSt13exception_ptrD1Ev(alStack_50);
LAB_10a112628:
      plVar7 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar2 = plStack_68 + 1;
        do {
          lVar11 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      if (lStack_78 < 0) {
        __ZdlPv(uStack_88);
      }
      plVar7 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar2 = plStack_58 + 1;
        do {
          lVar11 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      return;
    }
    __ZNSt13exception_ptrD1Ev(alStack_50);
    FUN_10a12b678(puVar6 + 0x11,puVar6 + 9);
    puVar6[0xf] = puVar6[0x11];
    plVar7 = (long *)(puVar6[0x11] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(puVar6[0xf] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar6 + 0x12) = 1;
      lVar11 = puVar6[0xf];
      plVar7 = (long *)(lVar11 + 0x10);
      puVar9 = (undefined8 *)puVar6[3];
      do {
        lVar8 = *plVar7;
        if (lVar8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            alStack_50[1] = 0;
            puStack_40 = puVar6;
            puStack_38 = puVar9;
            func_0x000109d1b588(lVar11 + 0x18,alStack_50 + 1);
            *(undefined8 *)(lVar11 + 0x10) = 0;
            goto LAB_10a112628;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar8 >> 1 & 1) == 0);
    }
    lVar11 = puVar6[0xf];
    if (((uint)*(undefined8 *)(puVar6[0xf] + 0x10) >> 5 & 1) == 0) {
      if ((*(byte *)(lVar11 + 0xa8) & 1) != 0) {
        FUN_10a12b638(puVar6 + 2,lVar11 + 0x98);
        plVar7 = (long *)puVar6[0xf];
        if (plVar7 != (long *)0x0) {
          puVar1 = (ulong *)(plVar7 + 1);
          do {
            uVar10 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar10 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar10 & 0x1fffffffc) == 4) {
            do {
              uVar10 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar10 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar10 - 1 == 0) {
              (**(code **)(*plVar7 + 8))();
            }
          }
        }
        plVar7 = (long *)puVar6[0x11];
        if (plVar7 != (long *)0x0) {
          puVar1 = (ulong *)(plVar7 + 1);
          do {
            uVar10 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar10 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar10 & 0x1fffffffc) == 4) {
            do {
              uVar10 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar10 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar10 - 1 == 0) {
              (**(code **)(*plVar7 + 8))();
            }
          }
        }
        plVar7 = (long *)puVar6[0xe];
        if (plVar7 != (long *)0x0) {
          plVar2 = plVar7 + 1;
          do {
            lVar11 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        if (*(char *)((long)puVar6 + 0x67) < '\0') {
          __ZdlPv(puVar6[10]);
        }
        func_0x000109d1a1d0(puVar6 + 2);
        __ZdlPv(puVar6);
        goto LAB_10a112628;
      }
    }
    else {
      func_0x0001092af97c(lVar11 + 0x90);
    }
  }
  else {
    func_0x0001092af97c(alStack_50);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a1126d4);
  (*pcVar5)();
}



/* Entry: 10a1127e4; end: 10a1128b3;  */

long FUN_10a1127e4(long param_1)

{
  func_0x00010a12c080(param_1 + 0x20);
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 10a1128b4; end: 10a11295b;  */

long * FUN_10a1128b4(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plStack_28;
  
  (**(code **)(*(long *)*param_1 + 0x38))(&plStack_28);
  FUN_109d1a244(&plStack_28);
  if (plStack_28 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_28 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plStack_28 + 8))();
      }
    }
  }
  plVar4 = (long *)*param_1;
  *param_1 = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  return param_1;
}



/* Entry: 10a11295c; end: 10a112a57;  */

undefined8 * FUN_10a11295c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_FUN_110ba5be0;
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c2b054(param_1 + 3,&UNK_10f63ce51);
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  puVar4 = (undefined8 *)0x70;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110ba7638;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[3] = &PTR_FUN_110c6ab60;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[0xb] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  *(undefined4 *)(puVar4 + 10) = 0;
  param_1[0xb] = puVar4 + 3;
  param_1[0xc] = puVar4;
  return param_1;
}



/* Entry: 10a112a58; end: 10a112d2b;  */

void FUN_10a112a58(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  long *plVar5;
  long **pplVar6;
  ulong uVar7;
  long *plVar8;
  long **pplVar9;
  long lVar10;
  long **pplVar11;
  ulong uVar12;
  long **pplVar13;
  undefined8 auStack_128 [2];
  char cStack_111;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  char cStack_c0;
  undefined2 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  char cStack_98;
  undefined1 uStack_89;
  long *aplStack_88 [5];
  
  lVar10 = *(long *)(param_1 + 8);
  bVar3 = *(byte *)(lVar10 + 0x11f);
  uVar12 = *(ulong *)(lVar10 + 0x110);
  if (-1 < (char)bVar3) {
    uVar12 = (ulong)bVar3;
  }
  if (uVar12 == 0) {
    return;
  }
  plVar8 = (long *)(lVar10 + 0x108);
  plVar1 = (long *)(param_1 + 0x18);
  bVar4 = *(byte *)(param_1 + 0x2f);
  uVar7 = *(ulong *)(param_1 + 0x20);
  if (-1 < (char)bVar4) {
    uVar7 = (ulong)bVar4;
  }
  if (uVar7 == uVar12) {
    plVar5 = (long *)*plVar1;
    if (-1 < (char)bVar4) {
      plVar5 = plVar1;
    }
    plVar2 = (long *)*plVar8;
    if (-1 < (char)bVar3) {
      plVar2 = plVar8;
    }
    _memcmp(plVar5,plVar2);
    if ((int)plVar5 == 0) goto LAB_10a112af8;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar1,plVar8);
  func_0x00010a13cb24(param_1 + 0x30);
  lVar10 = *(long *)(param_1 + 8);
LAB_10a112af8:
  FUN_10aaf5390(auStack_128,lVar10);
  pplVar6 = aplStack_88;
  func_0x000107c2b05c(pplVar6,plVar1);
  pplVar11 = *(long ***)(param_1 + 0x38);
  if (pplVar11 != (long **)0x0) {
    uVar12 = (long)pplVar11 - 1;
    if (((ulong)pplVar11 & uVar12) == 0) {
      pplVar13 = (long **)(uVar12 & (ulong)pplVar6);
    }
    else {
      pplVar13 = pplVar6;
      if (pplVar11 <= pplVar6) {
        uVar7 = 0;
        if (pplVar11 != (long **)0x0) {
          uVar7 = (ulong)pplVar6 / (ulong)pplVar11;
        }
        pplVar13 = (long **)((long)pplVar6 - uVar7 * (long)pplVar11);
      }
    }
    plVar8 = *(long **)(*(long *)(param_1 + 0x30) + (long)pplVar13 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        pplVar9 = (long **)plVar8[1];
        if (pplVar9 == pplVar6) {
          uVar7 = (ulong)(plVar8 + 2);
          FUN_10a13cb78(uVar7,plVar1);
          if ((uVar7 & 1) != 0) {
            uVar12 = (ulong)(plVar8 + 5);
            FUN_10a112d2c(uVar12,auStack_128);
            if ((uVar12 & 1) != 0) goto LAB_10a112c40;
            break;
          }
        }
        else {
          if (((ulong)pplVar11 & uVar12) == 0) {
            pplVar9 = (long **)((ulong)pplVar9 & uVar12);
          }
          else if (pplVar11 <= pplVar9) {
            uVar7 = 0;
            if (pplVar11 != (long **)0x0) {
              uVar7 = (ulong)pplVar9 / (ulong)pplVar11;
            }
            pplVar9 = (long **)((long)pplVar9 - uVar7 * (long)pplVar11);
          }
          if (pplVar9 != pplVar13) break;
        }
      }
    }
  }
  lVar10 = param_1 + 0x30;
  aplStack_88[0] = plVar1;
  FUN_10a13cbe4(lVar10,plVar1,&UNK_10dd5b8f9,aplStack_88,&uStack_89);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar10 + 0x28,auStack_128);
  *(undefined8 *)(lVar10 + 0x40) = uStack_110;
  *(undefined4 *)(lVar10 + 0x48) = uStack_108;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar10 + 0x50,auStack_100);
  *(undefined8 *)(lVar10 + 0x68) = uStack_e8;
  *(undefined1 *)(lVar10 + 0x70) = uStack_e0;
  FUN_10a12d44c(lVar10 + 0x78,&lStack_d8);
  *(undefined2 *)(lVar10 + 0x98) = uStack_b8;
  FUN_10a12d44c(lVar10 + 0xa0,&lStack_b0);
LAB_10a112c40:
  if ((*(byte *)(param_2 + 0x550) & 1) == 0) {
    FUN_10a13d1fc(aplStack_88,param_1 + 0x30);
    if (*(char *)(param_2 + 0x550) == '\x01') {
      func_0x00010a13d73c(param_2 + 0x528,aplStack_88);
    }
    else {
      FUN_10a13d7dc(param_2 + 0x528,aplStack_88);
      *(undefined1 *)(param_2 + 0x550) = 1;
    }
    func_0x00010a12d2c4(aplStack_88);
  }
  else {
    func_0x00010ace1a20(param_2 + 0x528,param_1 + 0x30);
  }
  if ((cStack_98 == '\x01') && (lStack_b0 != 0)) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  if ((cStack_c0 == '\x01') && (lStack_d8 != 0)) {
    lStack_d0 = lStack_d8;
    __ZdlPv();
  }
  if (cStack_e9 < '\0') {
    __ZdlPv(auStack_100[0]);
  }
  if (cStack_111 < '\0') {
    __ZdlPv(auStack_128[0]);
  }
  return;
}



/* Entry: 10a112d2c; end: 10a112f5b;  */

bool FUN_10a112d2c(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  long *plVar7;
  float *pfVar8;
  float *pfVar9;
  
  bVar4 = *(byte *)((long)param_1 + 0x17);
  uVar1 = param_1[1];
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  bVar5 = *(byte *)((long)param_2 + 0x17);
  uVar2 = param_2[1];
  if (-1 < (char)bVar5) {
    uVar2 = (ulong)bVar5;
  }
  if (uVar1 == uVar2) {
    plVar7 = (long *)*param_1;
    if (-1 < (char)bVar4) {
      plVar7 = param_1;
    }
    plVar3 = (long *)*param_2;
    if (-1 < (char)bVar5) {
      plVar3 = param_2;
    }
    _memcmp(plVar7,plVar3);
    if ((int)plVar7 == 0) {
      if ((*(byte *)((long)param_2 + 0x1c) & *(byte *)((long)param_1 + 0x1c)) == 0) {
        if (*(byte *)((long)param_1 + 0x1c) != *(byte *)((long)param_2 + 0x1c)) {
          return false;
        }
      }
      else if (*(float *)(param_1 + 3) != *(float *)(param_2 + 3)) {
        return false;
      }
      if ((int)param_1[4] == (int)param_2[4]) {
        bVar4 = *(byte *)((long)param_1 + 0x3f);
        uVar1 = param_1[6];
        if (-1 < (char)bVar4) {
          uVar1 = (ulong)bVar4;
        }
        bVar5 = *(byte *)((long)param_2 + 0x3f);
        uVar2 = param_2[6];
        if (-1 < (char)bVar5) {
          uVar2 = (ulong)bVar5;
        }
        if (uVar1 == uVar2) {
          plVar7 = (long *)param_1[5];
          if (-1 < (char)bVar4) {
            plVar7 = param_1 + 5;
          }
          plVar3 = (long *)param_2[5];
          if (-1 < (char)bVar5) {
            plVar3 = param_2 + 5;
          }
          _memcmp(plVar7,plVar3);
          if ((int)plVar7 == 0) {
            bVar4 = *(byte *)((long)param_1 + 0x41);
            bVar5 = *(byte *)((long)param_2 + 0x41);
            if ((bVar5 & bVar4) != 0) {
              bVar4 = *(byte *)(param_1 + 8);
              bVar5 = *(byte *)(param_2 + 8);
            }
            if (bVar4 == bVar5) {
              bVar4 = *(byte *)((long)param_1 + 0x43);
              bVar5 = *(byte *)((long)param_2 + 0x43);
              if ((bVar5 & bVar4) != 0) {
                bVar4 = *(byte *)((long)param_1 + 0x42);
                bVar5 = *(byte *)((long)param_2 + 0x42);
              }
              if (bVar4 == bVar5) {
                if ((*(byte *)(param_2 + 9) & *(byte *)(param_1 + 9)) == 0) {
                  if (*(byte *)(param_1 + 9) != *(byte *)(param_2 + 9)) {
                    return false;
                  }
                }
                else if (*(float *)((long)param_1 + 0x44) != *(float *)((long)param_2 + 0x44)) {
                  return false;
                }
                plVar7 = param_1 + 10;
                FUN_10a12d3c4(plVar7,param_2 + 10);
                if ((int)plVar7 != 0) {
                  bVar4 = *(byte *)((long)param_1 + 0x71);
                  bVar5 = *(byte *)((long)param_2 + 0x71);
                  if ((bVar5 & bVar4) != 0) {
                    bVar4 = *(byte *)(param_1 + 0xe);
                    bVar5 = *(byte *)(param_2 + 0xe);
                  }
                  if (bVar4 == bVar5) {
                    bVar6 = *(byte *)(param_1 + 0x12) == *(byte *)(param_2 + 0x12);
                    if ((*(byte *)(param_2 + 0x12) & *(byte *)(param_1 + 0x12)) != 0) {
                      pfVar8 = (float *)param_1[0xf];
                      pfVar9 = (float *)param_2[0xf];
                      if (param_1[0x10] - (long)pfVar8 == param_2[0x10] - (long)pfVar9) {
                        while( true ) {
                          if (pfVar8 == (float *)param_1[0x10]) {
                            return true;
                          }
                          if (((*pfVar8 != *pfVar9) || (pfVar8[1] != pfVar9[1])) ||
                             (pfVar8[2] != pfVar9[2])) break;
                          pfVar8 = pfVar8 + 3;
                          pfVar9 = pfVar9 + 3;
                        }
                      }
                      bVar6 = false;
                    }
                    return bVar6;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}



/* Entry: 10a112f5c; end: 10a11318f;  */

undefined8 FUN_10a112f5c(long param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_a0 [64];
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar7 = *(long *)(param_5 + 0x140);
  if ((*(byte *)(lVar7 + 0x2a) & 0x24) != 0) {
    FUN_10a3e8fd4(lVar7);
  }
  lVar4 = *(long *)(param_2 + 0x178);
  if ((lVar4 == 0) || (FUN_10a13d848(lVar4,param_1 + 0x18), lVar4 == 0)) {
    uVar8 = 0;
  }
  else {
    plVar5 = (long *)0xc8;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    plVar6 = plVar5 + 3;
    *plVar5 = (long)&PTR_FUN_110ba7a98;
    FUN_10a13d968(plVar6,lVar4 + 0x28);
    plStack_50 = plVar6;
    plStack_48 = plVar5;
    func_0x00010acb179c(*(long *)(param_1 + 0x58) + 0x28,&plStack_50);
    if ((*(char *)((long)plStack_50 + 0x44) == '\x01' && *(long *)(param_3 + 0x18) != 0) &&
       (plVar5 = *(long **)(*(long *)(param_3 + 0x10) + 0x28),
       plVar5 != *(long **)(*(long *)(param_3 + 0x10) + 0x30))) {
      lStack_60 = 0;
      plStack_58 = (long *)0x0;
      plVar6 = (long *)plVar5[1];
      if ((plVar6 == (long *)0x0) ||
         (__ZNSt3__119__shared_weak_count4lockEv(), plStack_58 = plVar6, plVar6 == (long *)0x0)) {
        lVar4 = 0;
      }
      else {
        lVar4 = *plVar5;
        lStack_60 = lVar4;
      }
      plVar5 = plStack_58;
      if (((*(byte *)((long)plStack_50 + 0x44) & 1) == 0) ||
         (FUN_10a3e8ad4(*(undefined8 *)(lVar4 + 0x140),plStack_50 + 7),
         (*(byte *)((long)plStack_50 + 0x44) & 1) == 0)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a113158);
        (*pcVar3)();
      }
      FUN_10a3e8838(*(undefined8 *)(lVar4 + 0x140),plStack_50 + 5);
      lVar9 = *(long *)(lVar4 + 0x140);
      lVar10 = lVar9;
      if ((*(byte *)(lVar9 + 0x2a) & 0x24) != 0) {
        FUN_10a3e8fd4(lVar9);
        lVar10 = *(long *)(lVar4 + 0x140);
      }
      func_0x000109519fd0(auStack_a0,lVar7 + 0xc0,lVar9 + 0xc0);
      FUN_10a3e28b8(lVar10,auStack_a0);
      if (plVar5 != (long *)0x0) {
        plVar6 = plVar5 + 1;
        do {
          lVar7 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    plVar5 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar6 = plStack_48 + 1;
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  return uVar8;
}



/* Entry: 10a113190; end: 10a1131bb;  */

void FUN_10a113190(void)

{
  return;
}



/* Entry: 10a1131bc; end: 10a113217;  */

void FUN_10a1131bc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x68;
  __Znwm();
  FUN_10a11295c();
  *param_1 = uVar1;
  return;
}



/* Entry: 10a113218; end: 10a1132d3;  */

void FUN_10a113218(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0xffffffff00000001;
  puStack_98 = (undefined *)0x0;
  uStack_88 = CONCAT44(uStack_88._4_4_,4);
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x136;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a1132d4(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63d279;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f63ce51;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a13fd74();
  FUN_10a13ff54(param_1);
  return;
}



/* Entry: 10a1132d4; end: 10a1133ab;  */

/* WARNING: Removing unreachable block (ram,0x00010a11336c) */

undefined1  [16] FUN_10a1132d4(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f63e1af,0x17);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a13fc78(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a1133ac; end: 10a11342f;  */

undefined1  [16] FUN_10a1133ac(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe;
  auVar1._0_8_ = &UNK_10f63e1c7;
  return auVar1;
}



/* Entry: 10a113430; end: 10a1136eb;  */

void FUN_10a113430(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f63e1c7,0xe);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110ba6528;
  pppuVar2 = (undefined8 ***)&UNK_10f63ce51;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x10000000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x13a;
  uStack_50 = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x100,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110ba6528;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f632c69,FUN_10a140118,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f63d27d,FUN_10a140238,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f63d288,FUN_10a140354,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,2,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f63d295,FUN_10a1404f4,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f63e1c7,0xe);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a1136d0);
  (*pcVar6)();
}



/* Entry: 10a1136ec; end: 10a113777;  */

undefined1  [16] FUN_10a1136ec(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x11;
  auVar1._0_8_ = &UNK_10f63e1d6;
  return auVar1;
}



/* Entry: 10a113778; end: 10a1138ab;  */

void FUN_10a113778(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000100;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  puStack_70 = &UNK_10f63ce51;
  uStack_68 = 0;
  uStack_60 = 0x13a00000000;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a1138ac(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63d2b8;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f63ce51;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a140b28();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63d2be;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f63ce51;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a140ca8(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63d2c3;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f63ce51;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a140dbc(param_1,&puStack_98);
  FUN_10a141db4(param_1);
  return;
}



/* Entry: 10a1138ac; end: 10a113983;  */

/* WARNING: Removing unreachable block (ram,0x00010a113944) */

undefined1  [16] FUN_10a1138ac(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f63e1d6,0x11);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a140a2c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a113984; end: 10a1139ff;  */

void FUN_10a113984(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = (long *)(param_1 + 0x18);
  plVar1 = (long *)((long)plVar5 + *(long *)(*plVar5 + -0x18));
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = param_2;
    if (param_2 != 0) {
      plVar1[1] = *(long *)(*(long *)(param_2 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  lVar4 = *(long *)(param_1 + 0x30);
  if (*(long *)(lVar4 + 0x20) == 0) {
    *(long *)(lVar4 + 0x30) = param_2;
    lVar6 = *(long *)(lVar4 + 0x18);
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
    FUN_10a3cf744(param_2,&stack0xffffffffffffffd0,&PTR_DAT_110b99f08,plVar5);
    if (lVar6 != 0) {
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



/* Entry: 10a113a00; end: 10a113a6b;  */

undefined8 * FUN_10a113a00(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 0xb) = 0;
  func_0x00010a1400c0(param_1 + 0x10);
  func_0x00010a141e70(param_1 + 8);
  param_1[3] = &PTR_DAT_110ba6558;
  param_1[0x12] = &PTR_FUN_110ba65d0;
  func_0x00010a004e5c(param_1 + 6);
  func_0x00010a004e04(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a113a6c; end: 10a113a87;  */

undefined8 * FUN_10a113a6c(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 0xb) = 0;
  func_0x00010a1400c0(param_1 + 0x10);
  func_0x00010a141e70(param_1 + 8);
  param_1[3] = &PTR_DAT_110ba6558;
  param_1[0x12] = &PTR_FUN_110ba65d0;
  func_0x00010a004e5c(param_1 + 6);
  func_0x00010a004e04(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a113a88; end: 10a113ab3;  */

void FUN_10a113a88(void)

{
  FUN_10a113a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a113ab4; end: 10a113b53;  */

void FUN_10a113ab4(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a113a00((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a113b54; end: 10a113bd7;  */

void FUN_10a113b54(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  lVar4 = *(long *)(*param_1 + -0x20);
  plVar5 = (long *)((long)param_1 + lVar4 + 0x18);
  plVar1 = (long *)((long)plVar5 + *(long *)(*plVar5 + -0x18));
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = param_2;
    if (param_2 != 0) {
      plVar1[1] = *(long *)(*(long *)(param_2 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  lVar4 = *(long *)((long)param_1 + lVar4 + 0x30);
  if (*(long *)(lVar4 + 0x20) == 0) {
    *(long *)(lVar4 + 0x30) = param_2;
    lVar6 = *(long *)(lVar4 + 0x18);
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
    FUN_10a3cf744(param_2,&stack0xffffffffffffffd0,&PTR_DAT_110b99f08,plVar5);
    if (lVar6 != 0) {
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



/* Entry: 10a113bd8; end: 10a113c9f;  */

void FUN_10a113bd8(long param_1,long param_2)

{
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined1 uStack_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined1 uStack_24;
  
  if (*(int *)(*(long *)(param_1 + 0x50) + 0xe30) == 2) {
    uStack_38 = 0;
    uStack_24 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_58 = 0;
    uStack_40 = uStack_40 & 0xffffffffffffff00;
    uStack_34 = 0;
    uStack_30 = 0;
    FUN_10a051998(param_2 + 0x138,&uStack_58);
    if (uStack_58 != 0) {
      uStack_50 = uStack_58;
      __ZdlPv();
    }
  }
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_58 = uStack_58 & 0xffff000000000000;
  FUN_10a113ca0(param_2 + 0x2d8,&uStack_58);
  if ((long)uStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  return;
}



/* Entry: 10a113ca0; end: 10a113d57;  */

void FUN_10a113ca0(byte *param_1,byte *param_2)

{
  ulong uVar1;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((param_1[0x20] & 1) != 0) {
    if (param_2[2] == 1) {
      *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
    }
    uVar1 = *(ulong *)(param_2 + 0x10);
    if (-1 < (char)param_2[0x1f]) {
      uVar1 = (ulong)param_2[0x1f];
    }
    if (uVar1 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (param_1 + 8,param_2 + 8);
    }
    *param_1 = *param_1 | *param_2;
    param_1[3] = param_1[3] | param_2[3];
    param_1[4] = param_1[4] | param_2[4];
    param_1[5] = param_1[5] | param_2[5];
    return;
  }
  uStack_40 = *(undefined4 *)param_2;
  uStack_3c = *(undefined2 *)(param_2 + 4);
  if ((char)param_2[0x1f] < '\0') {
    func_0x000107c3192c(&uStack_38,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  }
  else {
    uStack_30 = *(undefined8 *)(param_2 + 0x10);
    uStack_38 = *(undefined8 *)(param_2 + 8);
    lStack_28 = *(long *)(param_2 + 0x18);
  }
  FUN_10a1421d4(param_1,&uStack_40);
  if (lStack_28 < 0) {
    __ZdlPv(uStack_38);
  }
  return;
}



/* Entry: 10a113d58; end: 10a113dbb;  */

void FUN_10a113d58(long param_1,long param_2)

{
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined1 uStack_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined1 uStack_24;
  
  if (*(int *)(*(long *)(param_1 + 0x38) + 0xe30) == 2) {
    uStack_38 = 0;
    uStack_24 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_58 = 0;
    uStack_40 = uStack_40 & 0xffffffffffffff00;
    uStack_34 = 0;
    uStack_30 = 0;
    FUN_10a051998(param_2 + 0x138,&uStack_58);
    if (uStack_58 != 0) {
      uStack_50 = uStack_58;
      __ZdlPv();
    }
  }
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_58 = uStack_58 & 0xffff000000000000;
  FUN_10a113ca0(param_2 + 0x2d8,&uStack_58);
  if ((long)uStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  return;
}



/* Entry: 10a113dbc; end: 10a114aab;  */

void FUN_10a113dbc(long param_1,long param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  undefined *puVar15;
  long *plVar16;
  undefined *puVar17;
  double dVar18;
  ulong uVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined4 *puVar22;
  undefined8 uVar23;
  long *plVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  undefined *unaff_x26;
  undefined *puVar27;
  float fVar28;
  float fVar29;
  long lVar30;
  float fVar31;
  long lVar32;
  long lVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  double dVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  long *plStack_250;
  long *plStack_248;
  undefined4 uStack_240;
  uint uStack_23c;
  int iStack_238;
  int iStack_234;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  int *piStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  long *plStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  long *plStack_1c0;
  undefined *puStack_1b8;
  float fStack_1b0;
  undefined4 uStack_1ac;
  undefined7 uStack_1a8;
  char cStack_1a1;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined8 uStack_160;
  undefined **ppuStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long *plStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar22 = *(undefined4 **)(param_2 + 0x70);
  if ((puVar22 != (undefined4 *)0x0) && (*(long *)(puVar22 + 4) != 0)) {
    uVar11 = (ulong)(uint)puVar22[1];
    if ((int)puVar22[1] < 3) {
      lVar13 = (long)(int)puVar22[3] * (long)(int)puVar22[2];
    }
    else {
      lVar13 = 1;
      piVar14 = *(int **)(puVar22 + 0x10);
      do {
        lVar13 = lVar13 * *piVar14;
        uVar11 = uVar11 - 1;
        piVar14 = piVar14 + 1;
      } while (uVar11 != 0);
    }
    if ((lVar13 != 0) &&
       ((*(double *)(puVar22 + 0x84) != *(double *)(param_1 + 0x70) ||
        (*(char *)(puVar22 + 0x86) != *(char *)(param_1 + 0x78))))) {
      *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(puVar22 + 0x82);
      dVar18 = *(double *)(puVar22 + 0x84);
      *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(puVar22 + 0x86);
      *(double *)(param_1 + 0x70) = dVar18;
      dVar18 = *(double *)(*(long *)(*(long *)(param_1 + 0x50) + 0x850) + 0x18);
      dVar39 = *(double *)(puVar22 + 0x84);
      puStack_c8 = (undefined *)0x0;
      puStack_d0 = (undefined *)0x3f800000;
      puStack_b8 = (undefined *)0x0;
      plStack_c0 = (long *)0x3f80000000000000;
      puStack_a8 = (undefined *)0x3f800000;
      puStack_b0 = (undefined *)0x0;
      puStack_98 = (undefined *)0x3f80000000000000;
      puStack_a0 = (undefined *)0x0;
      if (*(int *)(*(long *)(param_1 + 0x50) + 0xe30) == 2) {
        if ((*(char *)(puVar22 + 0x7a) != '\x01') || (*(long *)(param_2 + 0xd0) == 0))
        goto LAB_10a114934;
        fVar28 = (float)puVar22[0x6a];
        fVar29 = (float)puVar22[0x6b];
        fVar31 = (float)puVar22[0x6c];
        fVar34 = (float)puVar22[0x6e];
        fVar35 = (float)puVar22[0x6f];
        fVar36 = (float)puVar22[0x70];
        fVar37 = (float)puVar22[0x72];
        fVar38 = (float)puVar22[0x73];
        fVar40 = (float)puVar22[0x74];
        fVar41 = -(fVar38 * fVar36) + fVar40 * fVar35;
        fVar42 = -(fVar38 * fVar31) + fVar40 * fVar29;
        fVar44 = -(fVar35 * fVar31) + fVar36 * fVar29;
        fVar43 = 1.0 / (-(fVar34 * fVar42) + fVar41 * fVar28 + fVar44 * fVar37);
        fVar41 = fVar41 * fVar43;
        fVar45 = -((-(fVar37 * fVar36) + fVar40 * fVar34) * fVar43);
        fVar46 = (-(fVar37 * fVar35) + fVar38 * fVar34) * fVar43;
        fVar42 = -(fVar42 * fVar43);
        fVar40 = (-(fVar37 * fVar31) + fVar40 * fVar28) * fVar43;
        fVar37 = -((-(fVar37 * fVar29) + fVar38 * fVar28) * fVar43);
        fVar44 = fVar44 * fVar43;
        fVar31 = -((-(fVar34 * fVar31) + fVar36 * fVar28) * fVar43);
        fVar43 = (-(fVar34 * fVar29) + fVar35 * fVar28) * fVar43;
        fVar28 = (float)puVar22[0x76];
        fVar29 = (float)puVar22[0x77];
        fVar34 = (float)puVar22[0x78];
        uStack_160 = (code *)CONCAT44(fVar42,fVar41);
        ppuStack_158 = (undefined **)(ulong)(uint)fVar44;
        uStack_150 = CONCAT44(fVar40,fVar45);
        uStack_148 = (ulong)(uint)fVar31;
        uStack_140 = (undefined **)CONCAT44(fVar37,fVar46);
        ppuStack_138 = (undefined **)(ulong)(uint)fVar43;
        uStack_130 = CONCAT44((-(fVar40 * fVar29) - fVar28 * fVar42) - fVar34 * fVar37,
                              (-(fVar45 * fVar29) - fVar28 * fVar41) - fVar34 * fVar46);
        uStack_128 = CONCAT44(0x3f800000,(-(fVar31 * fVar29) - fVar28 * fVar44) - fVar34 * fVar43);
        func_0x000109519fd0(&puStack_1d0,*(long *)(param_2 + 0xd0) + 0x88,&uStack_160);
        puStack_1a0 = (undefined *)
                      CONCAT44((float)((ulong)puStack_1a0 >> 0x20) * 100.0,
                               SUB84(puStack_1a0,0) * 100.0);
        puStack_198 = (undefined *)CONCAT44(puStack_198._4_4_,puStack_198._0_4_ * 100.0);
        puStack_c8 = puStack_1c8;
        puStack_d0 = puStack_1d0;
        puStack_b8 = puStack_1b8;
        plStack_c0 = plStack_1c0;
        puStack_a8 = (undefined *)CONCAT17(cStack_1a1,uStack_1a8);
        puStack_b0 = (undefined *)CONCAT44(uStack_1ac,fStack_1b0);
        puStack_98 = puStack_198;
        puStack_a0 = puStack_1a0;
      }
      uVar23 = *(undefined8 *)(puVar22 + 4);
      uStack_23c = puVar22[1];
      uVar11 = (ulong)uStack_23c;
      if ((int)uStack_23c < 3) {
        iStack_238 = puVar22[2];
        iStack_234 = puVar22[3];
        lVar13 = (long)iStack_234 * (long)iStack_238;
      }
      else {
        lVar13 = 1;
        piVar14 = *(int **)(puVar22 + 0x10);
        do {
          lVar13 = lVar13 * *piVar14;
          uVar11 = uVar11 - 1;
          piVar14 = piVar14 + 1;
        } while (uVar11 != 0);
        iStack_238 = puVar22[2];
        iStack_234 = puVar22[3];
      }
      uVar26 = *(undefined8 *)(*(long *)(param_1 + 0x50) + 0x870);
      uStack_240 = *puVar22;
      piStack_200 = &iStack_238;
      uStack_220 = *(undefined8 *)(puVar22 + 8);
      uStack_228 = *(undefined8 *)(puVar22 + 6);
      uStack_210 = *(undefined8 *)(puVar22 + 0xc);
      uStack_218 = *(undefined8 *)(puVar22 + 10);
      lStack_208 = *(long *)(puVar22 + 0xe);
      uStack_1f0 = 0;
      uStack_1e8 = 0;
      uVar10 = uStack_23c;
      if (lStack_208 != 0) {
        piVar14 = (int *)(lStack_208 + 0x14);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar3) {
            *piVar14 = *piVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar10 = puVar22[1];
      }
      uStack_230 = uVar23;
      puStack_1f8 = &uStack_1f0;
      if ((int)uVar10 < 3) {
        uStack_1f0 = **(undefined8 **)(puVar22 + 0x12);
        uStack_1e8 = (*(undefined8 **)(puVar22 + 0x12))[1];
      }
      else {
        uStack_23c = 0;
        func_0x000109a84868(&uStack_240,puVar22);
      }
      FUN_10a114aac(&puStack_1e0,uVar26,uVar23,lVar13,&uStack_240);
      if (lStack_208 != 0) {
        piVar14 = (int *)(lStack_208 + 0x14);
        do {
          iVar1 = *piVar14;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar3) {
            *piVar14 = iVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar1 + -1 == 0) {
          func_0x000109a848d4(&uStack_240);
        }
      }
      lStack_208 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      if (0 < (int)uStack_23c) {
        lVar13 = 0;
        do {
          piStack_200[lVar13] = 0;
          lVar13 = lVar13 + 1;
        } while (lVar13 < (int)uStack_23c);
      }
      if (puStack_1f8 != &uStack_1f0 && puStack_1f8 != (undefined8 *)0x0) {
        _free(puStack_1f8[-1]);
      }
      plVar5 = (long *)0xb0;
      __Znwm();
      plVar24 = (long *)(puVar22 + 0x4a);
      plVar5[1] = 0;
      plVar5[2] = 0;
      *plVar5 = (long)&PTR_FUN_110ba78a8;
      plStack_250 = plVar5 + 3;
      *plStack_250 = (long)&PTR_FUN_110c6c480;
      plVar5[4] = 0;
      plVar5[5] = 0;
      lVar12 = *(long *)(puVar22 + 0x4c);
      lVar13 = *plVar24;
      lVar8 = *(long *)(puVar22 + 0x4e);
      lVar32 = *(long *)(puVar22 + 0x54);
      lVar30 = *(long *)(puVar22 + 0x52);
      plVar5[9] = *(long *)(puVar22 + 0x50);
      plVar5[8] = lVar8;
      plVar5[0xb] = lVar32;
      plVar5[10] = lVar30;
      plVar5[7] = lVar12;
      plVar5[6] = lVar13;
      lVar12 = *(long *)(puVar22 + 0x58);
      lVar13 = *(long *)(puVar22 + 0x56);
      lVar30 = *(long *)(puVar22 + 0x5c);
      lVar8 = *(long *)(puVar22 + 0x5a);
      lVar33 = *(long *)(puVar22 + 0x60);
      lVar32 = *(long *)(puVar22 + 0x5e);
      uVar23 = *(undefined8 *)(puVar22 + 0x61);
      *(undefined8 *)((long)plVar5 + 0x94) = *(undefined8 *)(puVar22 + 99);
      *(undefined8 *)((long)plVar5 + 0x8c) = uVar23;
      plVar5[0xf] = lVar30;
      plVar5[0xe] = lVar8;
      plVar5[0x11] = lVar33;
      plVar5[0x10] = lVar32;
      plVar5[0xd] = lVar12;
      plVar5[0xc] = lVar13;
      plVar5[0x14] = *(long *)(puVar22 + 0x66);
      lVar13 = *(long *)(puVar22 + 0x68);
      plVar5[0x15] = lVar13;
      if (lVar13 != 0) {
        plVar16 = (long *)(lVar13 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar3) {
            *plVar16 = *plVar16 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plStack_248 = plVar5;
      if (*(long *)(param_1 + 0x80) == 0) {
        func_0x00010a0ed4c8();
        puStack_1d0 = *(undefined **)(puVar22 + 0x4b);
        plStack_1c0 = *(long **)(puVar22 + 0x51);
        puStack_1c8 = *(undefined **)(puVar22 + 0x4f);
        func_0x000107c2b054(&puStack_1b8,(&PTR_s_NONE_110ba7ad8)[(uint)puVar22[100]]);
        puStack_1a0 = (undefined *)0x0;
        puStack_198 = (undefined *)0x0;
        uStack_190 = 0;
        FUN_10a1422a0(&puStack_1a0,*plVar24,plVar24[1],plVar24[1] - *plVar24 >> 3);
        uStack_140 = (undefined **)0x0;
        ppuStack_158 = (undefined **)0x0;
        uStack_160 = (code *)0x0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_130 = 0;
        ppuStack_138 = (undefined **)0x3f800000;
        uStack_120 = 0;
        uStack_128 = 0x3f800000;
        uStack_110 = 0;
        uStack_118 = 0x3f8000003f800000;
        uStack_100 = 0;
        uStack_108 = 0x3f80000000000000;
        uStack_f8 = 0x3f80000000000000;
        ppuVar6 = &puStack_1d0;
        func_0x00010943f3a8(ppuVar6,&uStack_160);
        if (((ulong)ppuVar6 & 1) == 0) goto LAB_10a114974;
        if (puStack_1a0 != (undefined *)0x0) {
          puStack_198 = puStack_1a0;
          __ZdlPv();
        }
        if (cStack_1a1 < '\0') {
          __ZdlPv(puStack_1b8);
        }
        puVar7 = (undefined8 *)0xa8;
        __Znwm();
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = &PTR_FUN_110ba7368;
        puVar25 = puVar7 + 3;
        puVar7[4] = 0;
        *puVar25 = 0;
        puVar7[6] = 0;
        puVar7[5] = 0;
        puVar7[8] = 0;
        puVar7[7] = 0;
        puVar7[10] = 0;
        puVar7[9] = 0;
        puVar7[0xc] = 0;
        puVar7[0xb] = 0;
        puVar7[0xe] = 0;
        puVar7[0xd] = 0;
        puVar7[0x10] = 0;
        puVar7[0xf] = 0;
        func_0x000109444760(puVar25,&uStack_160,&uStack_150,&uStack_140);
        plVar24 = *(long **)(param_1 + 0x88);
        *(undefined8 **)(param_1 + 0x80) = puVar25;
        *(undefined8 **)(param_1 + 0x88) = puVar7;
        if (plVar24 != (long *)0x0) {
          plVar5 = plVar24 + 1;
          do {
            lVar13 = *plVar5;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = lVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plVar24 + 0x10))(plVar24);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
          }
        }
      }
      plVar24 = plStack_1d8;
      lVar13 = *(long *)(param_1 + 0x40);
      ppuVar6 = (undefined **)0xa8;
      __Znwm();
      ppuVar6[1] = (undefined *)0x0;
      ppuVar6[2] = (undefined *)0x0;
      *ppuVar6 = (undefined *)&PTR_DAT_110ba73b8;
      if (plVar24 != (long *)0x0) {
        plVar5 = plVar24 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (plStack_248 != (long *)0x0) {
        plVar5 = plStack_248 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar27 = *(undefined **)(param_1 + 0x88);
      puVar17 = *(undefined **)(param_1 + 0x80);
      if (*(long *)(param_1 + 0x88) != 0) {
        plVar5 = (long *)(*(long *)(param_1 + 0x88) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      ppuVar6[4] = (undefined *)0x0;
      ppuVar6[5] = (undefined *)0x0;
      ppuStack_260 = ppuVar6 + 3;
      *ppuStack_260 = (undefined *)&PTR_FUN_110ba64e0;
      ppuVar6[6] = (undefined *)(dVar39 - dVar18);
      ppuVar6[8] = (undefined *)plVar24;
      ppuVar6[7] = puStack_1e0;
      ppuVar6[10] = (undefined *)plStack_248;
      ppuVar6[9] = (undefined *)plStack_250;
      ppuVar6[0xc] = puStack_c8;
      ppuVar6[0xb] = puStack_d0;
      ppuVar6[0xe] = puStack_b8;
      ppuVar6[0xd] = (undefined *)plStack_c0;
      ppuVar6[0x10] = puStack_a8;
      ppuVar6[0xf] = puStack_b0;
      ppuVar6[0x12] = puStack_98;
      ppuVar6[0x11] = puStack_a0;
      ppuVar6[0x14] = puVar27;
      ppuVar6[0x13] = puVar17;
      puStack_1c8 = (undefined *)0x0;
      puStack_1d0 = (undefined *)0x0;
      puStack_1b8 = (undefined *)0x0;
      plStack_1c0 = (long *)0x0;
      fStack_1b0 = *(float *)(lVar13 + 0x38);
      ppuStack_258 = ppuVar6;
      FUN_10a141034(&puStack_1d0,*(undefined8 *)(lVar13 + 0x20));
      plVar24 = *(long **)(lVar13 + 0x28);
      if (plVar24 != (long *)0x0) {
        do {
          puVar17 = puStack_1c8;
          uVar11 = plVar24[2];
          uVar19 = ((ulong)(uint)((int)uVar11 << 3) + 8 ^ uVar11 >> 0x20) * -0x622015f714c7d297;
          uVar19 = (uVar11 >> 0x20 ^ uVar19 >> 0x2f ^ uVar19) * -0x622015f714c7d297;
          puVar27 = (undefined *)((uVar19 ^ uVar19 >> 0x2f) * -0x622015f714c7d297);
          if (puStack_1c8 != (undefined *)0x0) {
            puVar15 = puStack_1c8 + -1;
            if (((ulong)puStack_1c8 & (ulong)puVar15) == 0) {
              unaff_x26 = (undefined *)((ulong)puVar27 & (ulong)puVar15);
            }
            else {
              unaff_x26 = puVar27;
              if (puStack_1c8 <= puVar27) {
                uVar19 = 0;
                if (puStack_1c8 != (undefined *)0x0) {
                  uVar19 = (ulong)puVar27 / (ulong)puStack_1c8;
                }
                unaff_x26 = puVar27 + -(uVar19 * (long)puStack_1c8);
              }
            }
            plVar5 = *(long **)(puStack_1d0 + (long)unaff_x26 * 8);
            if (plVar5 != (long *)0x0) {
              do {
                while( true ) {
                  plVar5 = (long *)*plVar5;
                  if (plVar5 == (long *)0x0) goto LAB_10a1143c8;
                  puVar20 = (undefined *)plVar5[1];
                  if (puVar20 != puVar27) break;
                  if (plVar5[2] == uVar11) goto LAB_10a114528;
                }
                if (((ulong)puStack_1c8 & (ulong)puVar15) == 0) {
                  puVar20 = (undefined *)((ulong)puVar20 & (ulong)puVar15);
                }
                else if (puStack_1c8 <= puVar20) {
                  uVar19 = 0;
                  if (puStack_1c8 != (undefined *)0x0) {
                    uVar19 = (ulong)puVar20 / (ulong)puStack_1c8;
                  }
                  puVar20 = puVar20 + -(uVar19 * (long)puStack_1c8);
                }
              } while (puVar20 == unaff_x26);
            }
          }
LAB_10a1143c8:
          plVar5 = (long *)0x68;
          __Znwm();
          *plVar5 = 0;
          plVar5[1] = (long)puVar27;
          lVar12 = plVar24[3];
          lVar8 = plVar24[2];
          plVar5[3] = plVar24[3];
          plVar5[2] = lVar8;
          if (lVar12 != 0) {
            plVar16 = (long *)(lVar12 + 8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar3) {
                *plVar16 = *plVar16 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          uStack_160 = (code *)(plVar5 + 4);
          *(undefined1 *)(plVar5 + 0xc) = 3;
          if ((char)plVar24[0xc] == '\0') {
            uVar9 = 0;
          }
          else {
            FUN_10a005398(&uStack_160,plVar24 + 4);
            uVar9 = (undefined1)plVar24[0xc];
          }
          *(undefined1 *)(plVar5 + 0xc) = uVar9;
          if ((puVar17 == (undefined *)0x0) ||
             (fStack_1b0 * (float)puVar17 < (float)(puStack_1b8 + 1))) {
            uVar11 = 1;
            if ((undefined *)0x2 < puVar17) {
              uVar11 = (ulong)(((ulong)puVar17 & (ulong)(puVar17 + -1)) != 0);
            }
            uVar11 = uVar11 | (long)puVar17 << 1;
            uVar19 = (ulong)((float)(puStack_1b8 + 1) / fStack_1b0);
            if (uVar11 <= uVar19) {
              uVar11 = uVar19;
            }
            FUN_10a141034(&puStack_1d0,uVar11);
            puVar17 = puStack_1c8;
            if (((ulong)puStack_1c8 & (ulong)(puStack_1c8 + -1)) == 0) {
              unaff_x26 = (undefined *)((ulong)(puStack_1c8 + -1) & (ulong)puVar27);
            }
            else {
              unaff_x26 = puVar27;
              if (puStack_1c8 <= puVar27) {
                uVar11 = 0;
                if (puStack_1c8 != (undefined *)0x0) {
                  uVar11 = (ulong)puVar27 / (ulong)puStack_1c8;
                }
                unaff_x26 = puVar27 + -(uVar11 * (long)puStack_1c8);
              }
            }
          }
          plVar16 = *(long **)(puStack_1d0 + (long)unaff_x26 * 8);
          if (plVar16 == (long *)0x0) {
            *plVar5 = (long)plStack_1c0;
            *(long ***)(puStack_1d0 + (long)unaff_x26 * 8) = &plStack_1c0;
            plStack_1c0 = plVar5;
            if (*plVar5 != 0) {
              puVar27 = *(undefined **)(*plVar5 + 8);
              if (((ulong)puVar17 & (ulong)(puVar17 + -1)) == 0) {
                puVar27 = (undefined *)((ulong)puVar27 & (ulong)(puVar17 + -1));
              }
              else if (puVar17 <= puVar27) {
                uVar11 = 0;
                if (puVar17 != (undefined *)0x0) {
                  uVar11 = (ulong)puVar27 / (ulong)puVar17;
                }
                puVar27 = puVar27 + -(uVar11 * (long)puVar17);
              }
              *(long **)(puStack_1d0 + (long)puVar27 * 8) = plVar5;
            }
          }
          else {
            *plVar5 = *plVar16;
            *plVar16 = (long)plVar5;
          }
          puStack_1b8 = puStack_1b8 + 1;
LAB_10a114528:
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
      plVar24 = plStack_1c0;
      if (plStack_1c0 == (long *)0x0) {
        FUN_10a142154(&puStack_1d0);
LAB_10a114894:
        ppuVar21 = ppuVar6 + 1;
        do {
          puVar17 = *ppuVar21;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
          if (bVar3) {
            *ppuVar21 = puVar17 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (puVar17 == (undefined *)0x0) {
          (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
        }
      }
      else {
        do {
          lVar8 = plVar24[2];
          lVar12 = lVar13 + 0x18;
          FUN_10a141a44();
          if (lVar12 != 0) {
            if ((char)plVar24[0xc] == '\x01') {
              pcVar4 = (code *)plVar24[4];
              ppuStack_158 = ppuStack_258;
              uStack_160 = (code *)ppuStack_260;
              if (ppuStack_258 != (undefined **)0x0) {
                ppuVar6 = ppuStack_258 + 1;
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                  if (bVar3) {
                    *ppuVar6 = *ppuVar6 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              (*pcVar4)(&uStack_160,plVar24 + 4);
              if (ppuStack_158 != (undefined **)0x0) {
                ppuVar6 = ppuStack_158 + 1;
                do {
                  puVar17 = *ppuVar6;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                  if (bVar3) {
                    *ppuVar6 = puVar17 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                  ppuVar21 = ppuStack_158;
                } while (cVar2 != '\0');
LAB_10a114608:
                if (puVar17 == (undefined *)0x0) {
                  (**(code **)(*ppuVar21 + 0x10))(ppuVar21);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar21);
                }
              }
            }
            else if ((char)plVar24[0xc] == '\x02') {
              plVar5 = plVar24 + 4;
              FUN_10a688b40();
              ppuVar6 = ppuStack_258;
              if (plVar5 == (long *)0x0) {
                if (lVar8 != 0) {
                  uStack_150 = plVar24[4];
                  uStack_148 = plVar24[5];
                  if (uStack_148 != 0) {
                    plVar5 = (long *)(uStack_148 + 8);
                    do {
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                      if (bVar3) {
                        *plVar5 = *plVar5 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                  }
                  ppuStack_170 = ppuStack_260;
                  ppuStack_168 = ppuStack_258;
                  if (ppuStack_258 == (undefined **)0x0) {
                    ppuStack_138 = (undefined **)0x0;
                  }
                  else {
                    ppuVar21 = ppuStack_258 + 1;
                    do {
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
                      if (bVar3) {
                        *ppuVar21 = *ppuVar21 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    ppuStack_138 = ppuStack_258;
                    do {
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
                      if (bVar3) {
                        *ppuVar21 = *ppuVar21 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                  }
                  uStack_140 = ppuStack_260;
                  ppuStack_158 = &PTR_FUN_110ba73f8;
                  ppuStack_178 = (undefined **)0x0;
                  uStack_180 = 0;
                  uStack_160 = FUN_10a1425e8;
                  FUN_10a4634ec(lVar8,&uStack_160);
                  (*(code *)*ppuStack_158)(&ppuStack_158);
                  if (ppuVar6 != (undefined **)0x0) {
                    ppuVar21 = ppuVar6 + 1;
                    do {
                      puVar17 = *ppuVar21;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
                      if (bVar3) {
                        *ppuVar21 = puVar17 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (puVar17 == (undefined *)0x0) {
                      (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
                    }
                  }
                  if (ppuStack_178 != (undefined **)0x0) {
                    ppuVar6 = ppuStack_178 + 1;
                    do {
                      puVar17 = *ppuVar6;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                      if (bVar3) {
                        *ppuVar6 = puVar17 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                      ppuVar21 = ppuStack_178;
                    } while (cVar2 != '\0');
                    goto LAB_10a114608;
                  }
                }
              }
              else {
                *plVar5 = CONCAT44((int)((ulong)*plVar5 >> 0x20) + 1,(int)*plVar5 + 1);
                FUN_10a1423e4(plVar24[4],&ppuStack_260);
                iVar1 = *(int *)((long)plVar5 + 4) + -1;
                *(int *)((long)plVar5 + 4) = iVar1;
                if (iVar1 == 0) {
                  *(undefined4 *)plVar5 = 0;
                }
              }
            }
          }
          ppuVar6 = ppuStack_258;
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
        FUN_10a142154(&puStack_1d0);
        if (ppuVar6 != (undefined **)0x0) goto LAB_10a114894;
      }
      plVar24 = plStack_248;
      if (plStack_248 != (long *)0x0) {
        plVar5 = plStack_248 + 1;
        do {
          lVar13 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_248 + 0x10))(plStack_248);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
        }
      }
      if (plStack_1d8 != (long *)0x0) {
        plVar24 = plStack_1d8 + 1;
        do {
          lVar13 = *plVar24;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar3) {
            *plVar24 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1d8);
        }
      }
    }
  }
LAB_10a114934:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
LAB_10a114974:
  FUN_10a00946c(&UNK_10f63c73e);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a114984);
  (*pcVar4)();
}



/* Entry: 10a114aac; end: 10a114d17;  */

void FUN_10a114aac(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 *param_5)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 uVar9;
  uint uVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  undefined1 *puVar14;
  long *plVar15;
  undefined *puVar16;
  double dVar17;
  ulong uVar18;
  undefined1 *puVar19;
  undefined **ppuVar20;
  undefined4 *puVar21;
  long *plVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  float fVar30;
  float fVar31;
  long lVar32;
  long lVar33;
  undefined *puVar34;
  float fVar35;
  long lVar36;
  long lVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  double dVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined **ppuStack_390;
  undefined **ppuStack_388;
  long *plStack_380;
  long *plStack_378;
  undefined4 uStack_370;
  uint uStack_36c;
  int iStack_368;
  int iStack_364;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long lStack_338;
  int *piStack_330;
  undefined8 *puStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined *puStack_310;
  long *plStack_308;
  undefined *puStack_300;
  undefined1 *puStack_2f8;
  long *plStack_2f0;
  undefined *puStack_2e8;
  float fStack_2e0;
  undefined4 uStack_2dc;
  undefined7 uStack_2d8;
  char cStack_2d1;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined8 uStack_290;
  undefined **ppuStack_288;
  undefined8 uStack_280;
  ulong uStack_278;
  undefined8 uStack_270;
  undefined **ppuStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_200;
  undefined1 *puStack_1f8;
  long *plStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  long lStack_1b8;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  ulong uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 *apuStack_a0 [7];
  long lStack_68;
  
  puVar27 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar25 = *(long *)(param_2 + 0x68);
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 0x70);
  lVar25 = *(long *)(lVar25 + 0xb8);
  if ((*(byte *)(lVar25 + 0x1e0) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a114cbc);
    (*pcVar4)();
  }
  piVar12 = (int *)((long)param_5 + 4);
  uVar26 = *(undefined8 *)(lVar25 + 0x50);
  uStack_f0 = (ulong)&uStack_130 | 8;
  uStack_128 = param_5[1];
  uStack_130 = *param_5;
  uStack_118 = param_5[3];
  uStack_120 = param_5[2];
  uStack_108 = param_5[5];
  uStack_110 = param_5[4];
  lStack_f8 = param_5[7];
  uStack_100 = param_5[6];
  uStack_e0 = 0;
  uStack_d8 = 0;
  puStack_e8 = (undefined8 *)param_5[9];
  if (*piVar12 < 3) {
    uStack_e0 = *puStack_e8;
    uStack_d8 = puStack_e8[1];
    puStack_e8 = &uStack_e0;
  }
  else {
    uStack_f0 = param_5[8];
    param_5[8] = param_5 + 1;
    param_5[9] = param_5 + 10;
  }
  *(undefined4 *)param_5 = 0x42ff0000;
  *(undefined8 *)((long)param_5 + 0xc) = 0;
  piVar12[0] = 0;
  piVar12[1] = 0;
  *(undefined8 *)((long)param_5 + 0x1c) = 0;
  *(undefined8 *)((long)param_5 + 0x14) = 0;
  *(undefined8 *)((long)param_5 + 0x2c) = 0;
  *(undefined8 *)((long)param_5 + 0x24) = 0;
  param_5[7] = 0;
  param_5[6] = 0;
  pcStack_a8 = FUN_10a12ddc0;
  FUN_10a12de88(apuStack_a0,&PTR_FUN_110ba6c60,&uStack_130);
  FUN_10a12d658(&uStack_c8,uVar26,param_3,param_4,&pcStack_a8);
  puVar7 = (undefined8 *)0x38;
  __Znwm();
  puVar7[4] = uStack_c0;
  puVar7[3] = uStack_c8;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_110ba7a48;
  puVar7[6] = uStack_b0;
  puVar7[5] = uStack_b8;
  uStack_b8 = 0;
  uStack_b0 = 0;
  *param_1 = (long)(puVar7 + 3);
  param_1[1] = (long)puVar7;
  (*(code *)*apuStack_a0[0])(apuStack_a0);
  if (lStack_f8 != 0) {
    piVar12 = (int *)(lStack_f8 + 0x14);
    do {
      iVar1 = *piVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar3) {
        *piVar12 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_130);
    }
  }
  lStack_f8 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  if (0 < uStack_130._4_4_) {
    lVar25 = 0;
    do {
      *(undefined4 *)(uStack_f0 + lVar25 * 4) = 0;
      lVar25 = lVar25 + 1;
    } while (lVar25 < uStack_130._4_4_);
  }
  if (puStack_e8 != &uStack_e0 && puStack_e8 != (undefined8 *)0x0) {
    _free(puStack_e8[-1]);
  }
  lVar25 = param_2 + 0x70;
  __ZNSt3__115recursive_mutex6unlockEv();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_3 != 0) {
    func_0x000104bd46a0();
    FUN_10a12c460(&uStack_b8);
    (*(code *)*apuStack_a0[0])(apuStack_a0);
    FUN_10a12d67c(&uStack_130);
    __ZNSt3__115recursive_mutex6unlockEv(param_2 + 0x70);
  }
  __Unwind_Resume();
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar21 = *(undefined4 **)(param_3 + 0x70);
  if ((puVar21 != (undefined4 *)0x0) && (*(long *)(puVar21 + 4) != 0)) {
    uVar11 = (ulong)(uint)puVar21[1];
    if ((int)puVar21[1] < 3) {
      lVar13 = (long)(int)puVar21[3] * (long)(int)puVar21[2];
    }
    else {
      lVar13 = 1;
      piVar12 = *(int **)(puVar21 + 0x10);
      do {
        lVar13 = lVar13 * *piVar12;
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 1;
      } while (uVar11 != 0);
    }
    if ((lVar13 != 0) &&
       ((*(double *)(puVar21 + 0x84) != *(double *)(lVar25 + 0x58) ||
        (*(char *)(puVar21 + 0x86) != *(char *)(lVar25 + 0x60))))) {
      *(undefined1 *)(lVar25 + 0x50) = *(undefined1 *)(puVar21 + 0x82);
      dVar17 = *(double *)(puVar21 + 0x84);
      *(undefined1 *)(lVar25 + 0x60) = *(undefined1 *)(puVar21 + 0x86);
      *(double *)(lVar25 + 0x58) = dVar17;
      dVar17 = *(double *)(*(long *)(*(long *)(lVar25 + 0x38) + 0x850) + 0x18);
      dVar43 = *(double *)(puVar21 + 0x84);
      puStack_1f8 = (undefined1 *)0x0;
      puStack_200 = (undefined *)0x3f800000;
      puStack_1e8 = (undefined *)0x0;
      plStack_1f0 = (long *)0x3f80000000000000;
      puStack_1d8 = (undefined *)0x3f800000;
      puStack_1e0 = (undefined *)0x0;
      puStack_1c8 = (undefined *)0x3f80000000000000;
      puStack_1d0 = (undefined *)0x0;
      if (*(int *)(*(long *)(lVar25 + 0x38) + 0xe30) == 2) {
        if ((*(char *)(puVar21 + 0x7a) != '\x01') || (*(long *)(param_3 + 0xd0) == 0))
        goto LAB_10a114934;
        fVar30 = (float)puVar21[0x6a];
        fVar31 = (float)puVar21[0x6b];
        fVar35 = (float)puVar21[0x6c];
        fVar38 = (float)puVar21[0x6e];
        fVar39 = (float)puVar21[0x6f];
        fVar40 = (float)puVar21[0x70];
        fVar41 = (float)puVar21[0x72];
        fVar42 = (float)puVar21[0x73];
        fVar44 = (float)puVar21[0x74];
        fVar45 = -(fVar42 * fVar40) + fVar44 * fVar39;
        fVar46 = -(fVar42 * fVar35) + fVar44 * fVar31;
        fVar48 = -(fVar39 * fVar35) + fVar40 * fVar31;
        fVar47 = 1.0 / (-(fVar38 * fVar46) + fVar45 * fVar30 + fVar48 * fVar41);
        fVar45 = fVar45 * fVar47;
        fVar49 = -((-(fVar41 * fVar40) + fVar44 * fVar38) * fVar47);
        fVar50 = (-(fVar41 * fVar39) + fVar42 * fVar38) * fVar47;
        fVar46 = -(fVar46 * fVar47);
        fVar44 = (-(fVar41 * fVar35) + fVar44 * fVar30) * fVar47;
        fVar41 = -((-(fVar41 * fVar31) + fVar42 * fVar30) * fVar47);
        fVar48 = fVar48 * fVar47;
        fVar35 = -((-(fVar38 * fVar35) + fVar40 * fVar30) * fVar47);
        fVar47 = (-(fVar38 * fVar31) + fVar39 * fVar30) * fVar47;
        fVar30 = (float)puVar21[0x76];
        fVar31 = (float)puVar21[0x77];
        fVar38 = (float)puVar21[0x78];
        uStack_290 = (code *)CONCAT44(fVar46,fVar45);
        ppuStack_288 = (undefined **)(ulong)(uint)fVar48;
        uStack_280 = CONCAT44(fVar44,fVar49);
        uStack_278 = (ulong)(uint)fVar35;
        uStack_270 = (undefined **)CONCAT44(fVar41,fVar50);
        ppuStack_268 = (undefined **)(ulong)(uint)fVar47;
        uStack_260 = CONCAT44((-(fVar44 * fVar31) - fVar30 * fVar46) - fVar38 * fVar41,
                              (-(fVar49 * fVar31) - fVar30 * fVar45) - fVar38 * fVar50);
        uStack_258 = CONCAT44(0x3f800000,(-(fVar35 * fVar31) - fVar30 * fVar48) - fVar38 * fVar47);
        func_0x000109519fd0(&puStack_300,*(long *)(param_3 + 0xd0) + 0x88,&uStack_290);
        puStack_2d0 = (undefined *)
                      CONCAT44((float)((ulong)puStack_2d0 >> 0x20) * 100.0,
                               SUB84(puStack_2d0,0) * 100.0);
        puStack_2c8 = (undefined *)CONCAT44(puStack_2c8._4_4_,puStack_2c8._0_4_ * 100.0);
        puStack_1f8 = puStack_2f8;
        puStack_200 = puStack_300;
        puStack_1e8 = puStack_2e8;
        plStack_1f0 = plStack_2f0;
        puStack_1d8 = (undefined *)CONCAT17(cStack_2d1,uStack_2d8);
        puStack_1e0 = (undefined *)CONCAT44(uStack_2dc,fStack_2e0);
        puStack_1c8 = puStack_2c8;
        puStack_1d0 = puStack_2d0;
      }
      uVar26 = *(undefined8 *)(puVar21 + 4);
      uStack_36c = puVar21[1];
      uVar11 = (ulong)uStack_36c;
      if ((int)uStack_36c < 3) {
        iStack_368 = puVar21[2];
        iStack_364 = puVar21[3];
        lVar13 = (long)iStack_364 * (long)iStack_368;
      }
      else {
        lVar13 = 1;
        piVar12 = *(int **)(puVar21 + 0x10);
        do {
          lVar13 = lVar13 * *piVar12;
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 1;
        } while (uVar11 != 0);
        iStack_368 = puVar21[2];
        iStack_364 = puVar21[3];
      }
      uVar24 = *(undefined8 *)(*(long *)(lVar25 + 0x38) + 0x870);
      uStack_370 = *puVar21;
      piStack_330 = &iStack_368;
      uStack_350 = *(undefined8 *)(puVar21 + 8);
      uStack_358 = *(undefined8 *)(puVar21 + 6);
      uStack_340 = *(undefined8 *)(puVar21 + 0xc);
      uStack_348 = *(undefined8 *)(puVar21 + 10);
      lStack_338 = *(long *)(puVar21 + 0xe);
      uStack_320 = 0;
      uStack_318 = 0;
      uVar10 = uStack_36c;
      if (lStack_338 != 0) {
        piVar12 = (int *)(lStack_338 + 0x14);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar3) {
            *piVar12 = *piVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar10 = puVar21[1];
      }
      uStack_360 = uVar26;
      puStack_328 = &uStack_320;
      if ((int)uVar10 < 3) {
        uStack_320 = **(undefined8 **)(puVar21 + 0x12);
        uStack_318 = (*(undefined8 **)(puVar21 + 0x12))[1];
      }
      else {
        uStack_36c = 0;
        func_0x000109a84868(&uStack_370,puVar21);
      }
      FUN_10a114aac(&puStack_310,uVar24,uVar26,lVar13,&uStack_370);
      if (lStack_338 != 0) {
        piVar12 = (int *)(lStack_338 + 0x14);
        do {
          iVar1 = *piVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar3) {
            *piVar12 = iVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar1 + -1 == 0) {
          func_0x000109a848d4(&uStack_370);
        }
      }
      lStack_338 = 0;
      uStack_358 = 0;
      uStack_360 = 0;
      uStack_348 = 0;
      uStack_350 = 0;
      if (0 < (int)uStack_36c) {
        lVar13 = 0;
        do {
          piStack_330[lVar13] = 0;
          lVar13 = lVar13 + 1;
        } while (lVar13 < (int)uStack_36c);
      }
      if (puStack_328 != &uStack_320 && puStack_328 != (undefined8 *)0x0) {
        _free(puStack_328[-1]);
      }
      plVar5 = (long *)0xb0;
      __Znwm();
      plVar22 = (long *)(puVar21 + 0x4a);
      plVar5[1] = 0;
      plVar5[2] = 0;
      *plVar5 = (long)&PTR_FUN_110ba78a8;
      plStack_380 = plVar5 + 3;
      *plStack_380 = (long)&PTR_FUN_110c6c480;
      plVar5[4] = 0;
      plVar5[5] = 0;
      lVar8 = *(long *)(puVar21 + 0x4c);
      lVar13 = *plVar22;
      lVar32 = *(long *)(puVar21 + 0x4e);
      lVar36 = *(long *)(puVar21 + 0x54);
      lVar33 = *(long *)(puVar21 + 0x52);
      plVar5[9] = *(long *)(puVar21 + 0x50);
      plVar5[8] = lVar32;
      plVar5[0xb] = lVar36;
      plVar5[10] = lVar33;
      plVar5[7] = lVar8;
      plVar5[6] = lVar13;
      lVar8 = *(long *)(puVar21 + 0x58);
      lVar13 = *(long *)(puVar21 + 0x56);
      lVar33 = *(long *)(puVar21 + 0x5c);
      lVar32 = *(long *)(puVar21 + 0x5a);
      lVar37 = *(long *)(puVar21 + 0x60);
      lVar36 = *(long *)(puVar21 + 0x5e);
      uVar26 = *(undefined8 *)(puVar21 + 0x61);
      *(undefined8 *)((long)plVar5 + 0x94) = *(undefined8 *)(puVar21 + 99);
      *(undefined8 *)((long)plVar5 + 0x8c) = uVar26;
      plVar5[0xf] = lVar33;
      plVar5[0xe] = lVar32;
      plVar5[0x11] = lVar37;
      plVar5[0x10] = lVar36;
      plVar5[0xd] = lVar8;
      plVar5[0xc] = lVar13;
      plVar5[0x14] = *(long *)(puVar21 + 0x66);
      lVar13 = *(long *)(puVar21 + 0x68);
      plVar5[0x15] = lVar13;
      if (lVar13 != 0) {
        plVar15 = (long *)(lVar13 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar3) {
            *plVar15 = *plVar15 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plStack_378 = plVar5;
      if (*(long *)(lVar25 + 0x68) == 0) {
        func_0x00010a0ed4c8();
        puStack_300 = *(undefined **)(puVar21 + 0x4b);
        plStack_2f0 = *(long **)(puVar21 + 0x51);
        puStack_2f8 = *(undefined1 **)(puVar21 + 0x4f);
        func_0x000107c2b054(&puStack_2e8,(&PTR_s_NONE_110ba7ad8)[(uint)puVar21[100]]);
        puStack_2d0 = (undefined *)0x0;
        puStack_2c8 = (undefined *)0x0;
        uStack_2c0 = 0;
        FUN_10a1422a0(&puStack_2d0,*plVar22,plVar22[1],plVar22[1] - *plVar22 >> 3);
        uStack_270 = (undefined **)0x0;
        ppuStack_288 = (undefined **)0x0;
        uStack_290 = (code *)0x0;
        uStack_278 = 0;
        uStack_280 = 0;
        uStack_260 = 0;
        ppuStack_268 = (undefined **)0x3f800000;
        uStack_250 = 0;
        uStack_258 = 0x3f800000;
        uStack_240 = 0;
        uStack_248 = 0x3f8000003f800000;
        uStack_230 = 0;
        uStack_238 = 0x3f80000000000000;
        uStack_228 = 0x3f80000000000000;
        ppuVar6 = &puStack_300;
        func_0x00010943f3a8(ppuVar6,&uStack_290);
        if (((ulong)ppuVar6 & 1) == 0) goto LAB_10a114974;
        if (puStack_2d0 != (undefined *)0x0) {
          puStack_2c8 = puStack_2d0;
          __ZdlPv();
        }
        if (cStack_2d1 < '\0') {
          __ZdlPv(puStack_2e8);
        }
        puVar7 = (undefined8 *)0xa8;
        __Znwm();
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = &PTR_FUN_110ba7368;
        puVar23 = puVar7 + 3;
        puVar7[4] = 0;
        *puVar23 = 0;
        puVar7[6] = 0;
        puVar7[5] = 0;
        puVar7[8] = 0;
        puVar7[7] = 0;
        puVar7[10] = 0;
        puVar7[9] = 0;
        puVar7[0xc] = 0;
        puVar7[0xb] = 0;
        puVar7[0xe] = 0;
        puVar7[0xd] = 0;
        puVar7[0x10] = 0;
        puVar7[0xf] = 0;
        func_0x000109444760(puVar23,&uStack_290,&uStack_280,&uStack_270);
        plVar22 = *(long **)(lVar25 + 0x70);
        *(undefined8 **)(lVar25 + 0x68) = puVar23;
        *(undefined8 **)(lVar25 + 0x70) = puVar7;
        if (plVar22 != (long *)0x0) {
          plVar5 = plVar22 + 1;
          do {
            lVar13 = *plVar5;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = lVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
          }
        }
      }
      plVar22 = plStack_308;
      lVar13 = *(long *)(lVar25 + 0x28);
      ppuVar6 = (undefined **)0xa8;
      __Znwm();
      ppuVar6[1] = (undefined *)0x0;
      ppuVar6[2] = (undefined *)0x0;
      *ppuVar6 = (undefined *)&PTR_DAT_110ba73b8;
      if (plVar22 != (long *)0x0) {
        plVar5 = plVar22 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (plStack_378 != (long *)0x0) {
        plVar5 = plStack_378 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar34 = *(undefined **)(lVar25 + 0x70);
      puVar16 = *(undefined **)(lVar25 + 0x68);
      if (*(long *)(lVar25 + 0x70) != 0) {
        plVar5 = (long *)(*(long *)(lVar25 + 0x70) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      ppuVar6[4] = (undefined *)0x0;
      ppuVar6[5] = (undefined *)0x0;
      ppuStack_390 = ppuVar6 + 3;
      *ppuStack_390 = (undefined *)&PTR_FUN_110ba64e0;
      ppuVar6[6] = (undefined *)(dVar43 - dVar17);
      ppuVar6[8] = (undefined *)plVar22;
      ppuVar6[7] = puStack_310;
      ppuVar6[10] = (undefined *)plStack_378;
      ppuVar6[9] = (undefined *)plStack_380;
      ppuVar6[0xc] = puStack_1f8;
      ppuVar6[0xb] = puStack_200;
      ppuVar6[0xe] = puStack_1e8;
      ppuVar6[0xd] = (undefined *)plStack_1f0;
      ppuVar6[0x10] = puStack_1d8;
      ppuVar6[0xf] = puStack_1e0;
      ppuVar6[0x12] = puStack_1c8;
      ppuVar6[0x11] = puStack_1d0;
      ppuVar6[0x14] = puVar34;
      ppuVar6[0x13] = puVar16;
      puStack_2f8 = (undefined1 *)0x0;
      puStack_300 = (undefined *)0x0;
      puStack_2e8 = (undefined *)0x0;
      plStack_2f0 = (long *)0x0;
      fStack_2e0 = *(float *)(lVar13 + 0x38);
      ppuStack_388 = ppuVar6;
      FUN_10a141034(&puStack_300,*(undefined8 *)(lVar13 + 0x20));
      plVar22 = *(long **)(lVar13 + 0x28);
      if (plVar22 != (long *)0x0) {
        do {
          puVar28 = puStack_2f8;
          uVar11 = plVar22[2];
          uVar18 = ((ulong)(uint)((int)uVar11 << 3) + 8 ^ uVar11 >> 0x20) * -0x622015f714c7d297;
          uVar18 = (uVar11 >> 0x20 ^ uVar18 >> 0x2f ^ uVar18) * -0x622015f714c7d297;
          puVar29 = (undefined1 *)((uVar18 ^ uVar18 >> 0x2f) * -0x622015f714c7d297);
          if (puStack_2f8 != (undefined1 *)0x0) {
            puVar14 = puStack_2f8 + -1;
            if (((ulong)puStack_2f8 & (ulong)puVar14) == 0) {
              puVar27 = (undefined8 *)((ulong)puVar29 & (ulong)puVar14);
            }
            else {
              puVar27 = (undefined8 *)puVar29;
              if (puStack_2f8 <= puVar29) {
                uVar18 = 0;
                if (puStack_2f8 != (undefined1 *)0x0) {
                  uVar18 = (ulong)puVar29 / (ulong)puStack_2f8;
                }
                puVar27 = (undefined8 *)(puVar29 + -(uVar18 * (long)puStack_2f8));
              }
            }
            plVar5 = *(long **)(puStack_300 + (long)puVar27 * 8);
            if (plVar5 != (long *)0x0) {
              do {
                while( true ) {
                  plVar5 = (long *)*plVar5;
                  if (plVar5 == (long *)0x0) goto LAB_10a1143c8;
                  puVar19 = (undefined1 *)plVar5[1];
                  if (puVar19 != puVar29) break;
                  if (plVar5[2] == uVar11) goto LAB_10a114528;
                }
                if (((ulong)puStack_2f8 & (ulong)puVar14) == 0) {
                  puVar19 = (undefined1 *)((ulong)puVar19 & (ulong)puVar14);
                }
                else if (puStack_2f8 <= puVar19) {
                  uVar18 = 0;
                  if (puStack_2f8 != (undefined1 *)0x0) {
                    uVar18 = (ulong)puVar19 / (ulong)puStack_2f8;
                  }
                  puVar19 = puVar19 + -(uVar18 * (long)puStack_2f8);
                }
              } while ((undefined8 *)puVar19 == puVar27);
            }
          }
LAB_10a1143c8:
          plVar5 = (long *)0x68;
          __Znwm();
          *plVar5 = 0;
          plVar5[1] = (long)puVar29;
          lVar25 = plVar22[3];
          lVar8 = plVar22[2];
          plVar5[3] = plVar22[3];
          plVar5[2] = lVar8;
          if (lVar25 != 0) {
            plVar15 = (long *)(lVar25 + 8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar3) {
                *plVar15 = *plVar15 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          uStack_290 = (code *)(plVar5 + 4);
          *(undefined1 *)(plVar5 + 0xc) = 3;
          if ((char)plVar22[0xc] == '\0') {
            uVar9 = 0;
          }
          else {
            FUN_10a005398(&uStack_290,plVar22 + 4);
            uVar9 = (undefined1)plVar22[0xc];
          }
          *(undefined1 *)(plVar5 + 0xc) = uVar9;
          if ((puVar28 == (undefined1 *)0x0) ||
             (fStack_2e0 * (float)puVar28 < (float)(puStack_2e8 + 1))) {
            uVar11 = 1;
            if ((undefined1 *)0x2 < puVar28) {
              uVar11 = (ulong)(((ulong)puVar28 & (ulong)(puVar28 + -1)) != 0);
            }
            uVar11 = uVar11 | (long)puVar28 << 1;
            uVar18 = (ulong)((float)(puStack_2e8 + 1) / fStack_2e0);
            if (uVar11 <= uVar18) {
              uVar11 = uVar18;
            }
            FUN_10a141034(&puStack_300,uVar11);
            puVar28 = puStack_2f8;
            if (((ulong)puStack_2f8 & (ulong)(puStack_2f8 + -1)) == 0) {
              puVar27 = (undefined8 *)((ulong)(puStack_2f8 + -1) & (ulong)puVar29);
            }
            else {
              puVar27 = (undefined8 *)puVar29;
              if (puStack_2f8 <= puVar29) {
                uVar11 = 0;
                if (puStack_2f8 != (undefined1 *)0x0) {
                  uVar11 = (ulong)puVar29 / (ulong)puStack_2f8;
                }
                puVar27 = (undefined8 *)(puVar29 + -(uVar11 * (long)puStack_2f8));
              }
            }
          }
          plVar15 = *(long **)(puStack_300 + (long)puVar27 * 8);
          if (plVar15 == (long *)0x0) {
            *plVar5 = (long)plStack_2f0;
            *(long ***)(puStack_300 + (long)puVar27 * 8) = &plStack_2f0;
            plStack_2f0 = plVar5;
            if (*plVar5 != 0) {
              puVar29 = *(undefined1 **)(*plVar5 + 8);
              if (((ulong)puVar28 & (ulong)(puVar28 + -1)) == 0) {
                puVar29 = (undefined1 *)((ulong)puVar29 & (ulong)(puVar28 + -1));
              }
              else if (puVar28 <= puVar29) {
                uVar11 = 0;
                if (puVar28 != (undefined1 *)0x0) {
                  uVar11 = (ulong)puVar29 / (ulong)puVar28;
                }
                puVar29 = puVar29 + -(uVar11 * (long)puVar28);
              }
              *(long **)(puStack_300 + (long)puVar29 * 8) = plVar5;
            }
          }
          else {
            *plVar5 = *plVar15;
            *plVar15 = (long)plVar5;
          }
          puStack_2e8 = puStack_2e8 + 1;
LAB_10a114528:
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
      plVar22 = plStack_2f0;
      if (plStack_2f0 == (long *)0x0) {
        FUN_10a142154(&puStack_300);
LAB_10a114894:
        ppuVar20 = ppuVar6 + 1;
        do {
          puVar16 = *ppuVar20;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
          if (bVar3) {
            *ppuVar20 = puVar16 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (puVar16 == (undefined *)0x0) {
          (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
        }
      }
      else {
        do {
          lVar8 = plVar22[2];
          lVar25 = lVar13 + 0x18;
          FUN_10a141a44();
          if (lVar25 != 0) {
            if ((char)plVar22[0xc] == '\x01') {
              pcVar4 = (code *)plVar22[4];
              ppuStack_288 = ppuStack_388;
              uStack_290 = (code *)ppuStack_390;
              if (ppuStack_388 != (undefined **)0x0) {
                ppuVar6 = ppuStack_388 + 1;
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                  if (bVar3) {
                    *ppuVar6 = *ppuVar6 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              (*pcVar4)(&uStack_290,plVar22 + 4);
              if (ppuStack_288 != (undefined **)0x0) {
                ppuVar6 = ppuStack_288 + 1;
                do {
                  puVar16 = *ppuVar6;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                  if (bVar3) {
                    *ppuVar6 = puVar16 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                  ppuVar20 = ppuStack_288;
                } while (cVar2 != '\0');
LAB_10a114608:
                if (puVar16 == (undefined *)0x0) {
                  (**(code **)(*ppuVar20 + 0x10))(ppuVar20);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar20);
                }
              }
            }
            else if ((char)plVar22[0xc] == '\x02') {
              plVar5 = plVar22 + 4;
              FUN_10a688b40();
              ppuVar6 = ppuStack_388;
              if (plVar5 == (long *)0x0) {
                if (lVar8 != 0) {
                  uStack_280 = plVar22[4];
                  uStack_278 = plVar22[5];
                  if (uStack_278 != 0) {
                    plVar5 = (long *)(uStack_278 + 8);
                    do {
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                      if (bVar3) {
                        *plVar5 = *plVar5 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                  }
                  ppuStack_2a0 = ppuStack_390;
                  ppuStack_298 = ppuStack_388;
                  if (ppuStack_388 == (undefined **)0x0) {
                    ppuStack_268 = (undefined **)0x0;
                  }
                  else {
                    ppuVar20 = ppuStack_388 + 1;
                    do {
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
                      if (bVar3) {
                        *ppuVar20 = *ppuVar20 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    ppuStack_268 = ppuStack_388;
                    do {
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
                      if (bVar3) {
                        *ppuVar20 = *ppuVar20 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                  }
                  uStack_270 = ppuStack_390;
                  ppuStack_288 = &PTR_FUN_110ba73f8;
                  ppuStack_2a8 = (undefined **)0x0;
                  uStack_2b0 = 0;
                  uStack_290 = FUN_10a1425e8;
                  FUN_10a4634ec(lVar8,&uStack_290);
                  (*(code *)*ppuStack_288)(&ppuStack_288);
                  if (ppuVar6 != (undefined **)0x0) {
                    ppuVar20 = ppuVar6 + 1;
                    do {
                      puVar16 = *ppuVar20;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
                      if (bVar3) {
                        *ppuVar20 = puVar16 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (puVar16 == (undefined *)0x0) {
                      (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
                    }
                  }
                  if (ppuStack_2a8 != (undefined **)0x0) {
                    ppuVar6 = ppuStack_2a8 + 1;
                    do {
                      puVar16 = *ppuVar6;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                      if (bVar3) {
                        *ppuVar6 = puVar16 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                      ppuVar20 = ppuStack_2a8;
                    } while (cVar2 != '\0');
                    goto LAB_10a114608;
                  }
                }
              }
              else {
                *plVar5 = CONCAT44((int)((ulong)*plVar5 >> 0x20) + 1,(int)*plVar5 + 1);
                FUN_10a1423e4(plVar22[4],&ppuStack_390);
                iVar1 = *(int *)((long)plVar5 + 4) + -1;
                *(int *)((long)plVar5 + 4) = iVar1;
                if (iVar1 == 0) {
                  *(undefined4 *)plVar5 = 0;
                }
              }
            }
          }
          ppuVar6 = ppuStack_388;
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
        FUN_10a142154(&puStack_300);
        if (ppuVar6 != (undefined **)0x0) goto LAB_10a114894;
      }
      plVar22 = plStack_378;
      if (plStack_378 != (long *)0x0) {
        plVar5 = plStack_378 + 1;
        do {
          lVar25 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar25 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar25 == 0) {
          (**(code **)(*plStack_378 + 0x10))(plStack_378);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
        }
      }
      if (plStack_308 != (long *)0x0) {
        plVar22 = plStack_308 + 1;
        do {
          lVar25 = *plVar22;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar3) {
            *plVar22 = lVar25 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar25 == 0) {
          (**(code **)(*plStack_308 + 0x10))(plStack_308);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_308);
        }
      }
    }
  }
LAB_10a114934:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
LAB_10a114974:
  FUN_10a00946c(&UNK_10f63c73e);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a114984);
  (*pcVar4)();
}



/* Entry: 10a114d18; end: 10a114d9f;  */

void FUN_10a114d18(long param_1,long param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  undefined *puVar15;
  long *plVar16;
  undefined *puVar17;
  double dVar18;
  ulong uVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined4 *puVar22;
  undefined8 uVar23;
  long *plVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  undefined *unaff_x26;
  undefined *puVar27;
  float fVar28;
  float fVar29;
  long lVar30;
  float fVar31;
  long lVar32;
  long lVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  double dVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  long *plStack_250;
  long *plStack_248;
  undefined4 uStack_240;
  uint uStack_23c;
  int iStack_238;
  int iStack_234;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  int *piStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  long *plStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  long *plStack_1c0;
  undefined *puStack_1b8;
  float fStack_1b0;
  undefined4 uStack_1ac;
  undefined7 uStack_1a8;
  char cStack_1a1;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined8 uStack_160;
  undefined **ppuStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long *plStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar22 = *(undefined4 **)(param_2 + 0x70);
  if ((puVar22 != (undefined4 *)0x0) && (*(long *)(puVar22 + 4) != 0)) {
    uVar11 = (ulong)(uint)puVar22[1];
    if ((int)puVar22[1] < 3) {
      lVar13 = (long)(int)puVar22[3] * (long)(int)puVar22[2];
    }
    else {
      lVar13 = 1;
      piVar14 = *(int **)(puVar22 + 0x10);
      do {
        lVar13 = lVar13 * *piVar14;
        uVar11 = uVar11 - 1;
        piVar14 = piVar14 + 1;
      } while (uVar11 != 0);
    }
    if ((lVar13 != 0) &&
       ((*(double *)(puVar22 + 0x84) != *(double *)(param_1 + 0x58) ||
        (*(char *)(puVar22 + 0x86) != *(char *)(param_1 + 0x60))))) {
      *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(puVar22 + 0x82);
      dVar18 = *(double *)(puVar22 + 0x84);
      *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(puVar22 + 0x86);
      *(double *)(param_1 + 0x58) = dVar18;
      dVar18 = *(double *)(*(long *)(*(long *)(param_1 + 0x38) + 0x850) + 0x18);
      dVar39 = *(double *)(puVar22 + 0x84);
      puStack_c8 = (undefined *)0x0;
      puStack_d0 = (undefined *)0x3f800000;
      puStack_b8 = (undefined *)0x0;
      plStack_c0 = (long *)0x3f80000000000000;
      puStack_a8 = (undefined *)0x3f800000;
      puStack_b0 = (undefined *)0x0;
      puStack_98 = (undefined *)0x3f80000000000000;
      puStack_a0 = (undefined *)0x0;
      if (*(int *)(*(long *)(param_1 + 0x38) + 0xe30) == 2) {
        if ((*(char *)(puVar22 + 0x7a) != '\x01') || (*(long *)(param_2 + 0xd0) == 0))
        goto LAB_10a114934;
        fVar28 = (float)puVar22[0x6a];
        fVar29 = (float)puVar22[0x6b];
        fVar31 = (float)puVar22[0x6c];
        fVar34 = (float)puVar22[0x6e];
        fVar35 = (float)puVar22[0x6f];
        fVar36 = (float)puVar22[0x70];
        fVar37 = (float)puVar22[0x72];
        fVar38 = (float)puVar22[0x73];
        fVar40 = (float)puVar22[0x74];
        fVar41 = -(fVar38 * fVar36) + fVar40 * fVar35;
        fVar42 = -(fVar38 * fVar31) + fVar40 * fVar29;
        fVar44 = -(fVar35 * fVar31) + fVar36 * fVar29;
        fVar43 = 1.0 / (-(fVar34 * fVar42) + fVar41 * fVar28 + fVar44 * fVar37);
        fVar41 = fVar41 * fVar43;
        fVar45 = -((-(fVar37 * fVar36) + fVar40 * fVar34) * fVar43);
        fVar46 = (-(fVar37 * fVar35) + fVar38 * fVar34) * fVar43;
        fVar42 = -(fVar42 * fVar43);
        fVar40 = (-(fVar37 * fVar31) + fVar40 * fVar28) * fVar43;
        fVar37 = -((-(fVar37 * fVar29) + fVar38 * fVar28) * fVar43);
        fVar44 = fVar44 * fVar43;
        fVar31 = -((-(fVar34 * fVar31) + fVar36 * fVar28) * fVar43);
        fVar43 = (-(fVar34 * fVar29) + fVar35 * fVar28) * fVar43;
        fVar28 = (float)puVar22[0x76];
        fVar29 = (float)puVar22[0x77];
        fVar34 = (float)puVar22[0x78];
        uStack_160 = (code *)CONCAT44(fVar42,fVar41);
        ppuStack_158 = (undefined **)(ulong)(uint)fVar44;
        uStack_150 = CONCAT44(fVar40,fVar45);
        uStack_148 = (ulong)(uint)fVar31;
        uStack_140 = (undefined **)CONCAT44(fVar37,fVar46);
        ppuStack_138 = (undefined **)(ulong)(uint)fVar43;
        uStack_130 = CONCAT44((-(fVar40 * fVar29) - fVar28 * fVar42) - fVar34 * fVar37,
                              (-(fVar45 * fVar29) - fVar28 * fVar41) - fVar34 * fVar46);
        uStack_128 = CONCAT44(0x3f800000,(-(fVar31 * fVar29) - fVar28 * fVar44) - fVar34 * fVar43);
        func_0x000109519fd0(&puStack_1d0,*(long *)(param_2 + 0xd0) + 0x88,&uStack_160);
        puStack_1a0 = (undefined *)
                      CONCAT44((float)((ulong)puStack_1a0 >> 0x20) * 100.0,
                               SUB84(puStack_1a0,0) * 100.0);
        puStack_198 = (undefined *)CONCAT44(puStack_198._4_4_,puStack_198._0_4_ * 100.0);
        puStack_c8 = puStack_1c8;
        puStack_d0 = puStack_1d0;
        puStack_b8 = puStack_1b8;
        plStack_c0 = plStack_1c0;
        puStack_a8 = (undefined *)CONCAT17(cStack_1a1,uStack_1a8);
        puStack_b0 = (undefined *)CONCAT44(uStack_1ac,fStack_1b0);
        puStack_98 = puStack_198;
        puStack_a0 = puStack_1a0;
      }
      uVar23 = *(undefined8 *)(puVar22 + 4);
      uStack_23c = puVar22[1];
      uVar11 = (ulong)uStack_23c;
      if ((int)uStack_23c < 3) {
        iStack_238 = puVar22[2];
        iStack_234 = puVar22[3];
        lVar13 = (long)iStack_234 * (long)iStack_238;
      }
      else {
        lVar13 = 1;
        piVar14 = *(int **)(puVar22 + 0x10);
        do {
          lVar13 = lVar13 * *piVar14;
          uVar11 = uVar11 - 1;
          piVar14 = piVar14 + 1;
        } while (uVar11 != 0);
        iStack_238 = puVar22[2];
        iStack_234 = puVar22[3];
      }
      uVar26 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x870);
      uStack_240 = *puVar22;
      piStack_200 = &iStack_238;
      uStack_220 = *(undefined8 *)(puVar22 + 8);
      uStack_228 = *(undefined8 *)(puVar22 + 6);
      uStack_210 = *(undefined8 *)(puVar22 + 0xc);
      uStack_218 = *(undefined8 *)(puVar22 + 10);
      lStack_208 = *(long *)(puVar22 + 0xe);
      uStack_1f0 = 0;
      uStack_1e8 = 0;
      uVar10 = uStack_23c;
      if (lStack_208 != 0) {
        piVar14 = (int *)(lStack_208 + 0x14);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar3) {
            *piVar14 = *piVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar10 = puVar22[1];
      }
      uStack_230 = uVar23;
      puStack_1f8 = &uStack_1f0;
      if ((int)uVar10 < 3) {
        uStack_1f0 = **(undefined8 **)(puVar22 + 0x12);
        uStack_1e8 = (*(undefined8 **)(puVar22 + 0x12))[1];
      }
      else {
        uStack_23c = 0;
        func_0x000109a84868(&uStack_240,puVar22);
      }
      FUN_10a114aac(&puStack_1e0,uVar26,uVar23,lVar13,&uStack_240);
      if (lStack_208 != 0) {
        piVar14 = (int *)(lStack_208 + 0x14);
        do {
          iVar1 = *piVar14;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar3) {
            *piVar14 = iVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar1 + -1 == 0) {
          func_0x000109a848d4(&uStack_240);
        }
      }
      lStack_208 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      if (0 < (int)uStack_23c) {
        lVar13 = 0;
        do {
          piStack_200[lVar13] = 0;
          lVar13 = lVar13 + 1;
        } while (lVar13 < (int)uStack_23c);
      }
      if (puStack_1f8 != &uStack_1f0 && puStack_1f8 != (undefined8 *)0x0) {
        _free(puStack_1f8[-1]);
      }
      plVar5 = (long *)0xb0;
      __Znwm();
      plVar24 = (long *)(puVar22 + 0x4a);
      plVar5[1] = 0;
      plVar5[2] = 0;
      *plVar5 = (long)&PTR_FUN_110ba78a8;
      plStack_250 = plVar5 + 3;
      *plStack_250 = (long)&PTR_FUN_110c6c480;
      plVar5[4] = 0;
      plVar5[5] = 0;
      lVar12 = *(long *)(puVar22 + 0x4c);
      lVar13 = *plVar24;
      lVar8 = *(long *)(puVar22 + 0x4e);
      lVar32 = *(long *)(puVar22 + 0x54);
      lVar30 = *(long *)(puVar22 + 0x52);
      plVar5[9] = *(long *)(puVar22 + 0x50);
      plVar5[8] = lVar8;
      plVar5[0xb] = lVar32;
      plVar5[10] = lVar30;
      plVar5[7] = lVar12;
      plVar5[6] = lVar13;
      lVar12 = *(long *)(puVar22 + 0x58);
      lVar13 = *(long *)(puVar22 + 0x56);
      lVar30 = *(long *)(puVar22 + 0x5c);
      lVar8 = *(long *)(puVar22 + 0x5a);
      lVar33 = *(long *)(puVar22 + 0x60);
      lVar32 = *(long *)(puVar22 + 0x5e);
      uVar23 = *(undefined8 *)(puVar22 + 0x61);
      *(undefined8 *)((long)plVar5 + 0x94) = *(undefined8 *)(puVar22 + 99);
      *(undefined8 *)((long)plVar5 + 0x8c) = uVar23;
      plVar5[0xf] = lVar30;
      plVar5[0xe] = lVar8;
      plVar5[0x11] = lVar33;
      plVar5[0x10] = lVar32;
      plVar5[0xd] = lVar12;
      plVar5[0xc] = lVar13;
      plVar5[0x14] = *(long *)(puVar22 + 0x66);
      lVar13 = *(long *)(puVar22 + 0x68);
      plVar5[0x15] = lVar13;
      if (lVar13 != 0) {
        plVar16 = (long *)(lVar13 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar3) {
            *plVar16 = *plVar16 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plStack_248 = plVar5;
      if (*(long *)(param_1 + 0x68) == 0) {
        func_0x00010a0ed4c8();
        puStack_1d0 = *(undefined **)(puVar22 + 0x4b);
        plStack_1c0 = *(long **)(puVar22 + 0x51);
        puStack_1c8 = *(undefined **)(puVar22 + 0x4f);
        func_0x000107c2b054(&puStack_1b8,(&PTR_s_NONE_110ba7ad8)[(uint)puVar22[100]]);
        puStack_1a0 = (undefined *)0x0;
        puStack_198 = (undefined *)0x0;
        uStack_190 = 0;
        FUN_10a1422a0(&puStack_1a0,*plVar24,plVar24[1],plVar24[1] - *plVar24 >> 3);
        uStack_140 = (undefined **)0x0;
        ppuStack_158 = (undefined **)0x0;
        uStack_160 = (code *)0x0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_130 = 0;
        ppuStack_138 = (undefined **)0x3f800000;
        uStack_120 = 0;
        uStack_128 = 0x3f800000;
        uStack_110 = 0;
        uStack_118 = 0x3f8000003f800000;
        uStack_100 = 0;
        uStack_108 = 0x3f80000000000000;
        uStack_f8 = 0x3f80000000000000;
        ppuVar6 = &puStack_1d0;
        func_0x00010943f3a8(ppuVar6,&uStack_160);
        if (((ulong)ppuVar6 & 1) == 0) goto LAB_10a114974;
        if (puStack_1a0 != (undefined *)0x0) {
          puStack_198 = puStack_1a0;
          __ZdlPv();
        }
        if (cStack_1a1 < '\0') {
          __ZdlPv(puStack_1b8);
        }
        puVar7 = (undefined8 *)0xa8;
        __Znwm();
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = &PTR_FUN_110ba7368;
        puVar25 = puVar7 + 3;
        puVar7[4] = 0;
        *puVar25 = 0;
        puVar7[6] = 0;
        puVar7[5] = 0;
        puVar7[8] = 0;
        puVar7[7] = 0;
        puVar7[10] = 0;
        puVar7[9] = 0;
        puVar7[0xc] = 0;
        puVar7[0xb] = 0;
        puVar7[0xe] = 0;
        puVar7[0xd] = 0;
        puVar7[0x10] = 0;
        puVar7[0xf] = 0;
        func_0x000109444760(puVar25,&uStack_160,&uStack_150,&uStack_140);
        plVar24 = *(long **)(param_1 + 0x70);
        *(undefined8 **)(param_1 + 0x68) = puVar25;
        *(undefined8 **)(param_1 + 0x70) = puVar7;
        if (plVar24 != (long *)0x0) {
          plVar5 = plVar24 + 1;
          do {
            lVar13 = *plVar5;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = lVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plVar24 + 0x10))(plVar24);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
          }
        }
      }
      plVar24 = plStack_1d8;
      lVar13 = *(long *)(param_1 + 0x28);
      ppuVar6 = (undefined **)0xa8;
      __Znwm();
      ppuVar6[1] = (undefined *)0x0;
      ppuVar6[2] = (undefined *)0x0;
      *ppuVar6 = (undefined *)&PTR_DAT_110ba73b8;
      if (plVar24 != (long *)0x0) {
        plVar5 = plVar24 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (plStack_248 != (long *)0x0) {
        plVar5 = plStack_248 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar27 = *(undefined **)(param_1 + 0x70);
      puVar17 = *(undefined **)(param_1 + 0x68);
      if (*(long *)(param_1 + 0x70) != 0) {
        plVar5 = (long *)(*(long *)(param_1 + 0x70) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      ppuVar6[4] = (undefined *)0x0;
      ppuVar6[5] = (undefined *)0x0;
      ppuStack_260 = ppuVar6 + 3;
      *ppuStack_260 = (undefined *)&PTR_FUN_110ba64e0;
      ppuVar6[6] = (undefined *)(dVar39 - dVar18);
      ppuVar6[8] = (undefined *)plVar24;
      ppuVar6[7] = puStack_1e0;
      ppuVar6[10] = (undefined *)plStack_248;
      ppuVar6[9] = (undefined *)plStack_250;
      ppuVar6[0xc] = puStack_c8;
      ppuVar6[0xb] = puStack_d0;
      ppuVar6[0xe] = puStack_b8;
      ppuVar6[0xd] = (undefined *)plStack_c0;
      ppuVar6[0x10] = puStack_a8;
      ppuVar6[0xf] = puStack_b0;
      ppuVar6[0x12] = puStack_98;
      ppuVar6[0x11] = puStack_a0;
      ppuVar6[0x14] = puVar27;
      ppuVar6[0x13] = puVar17;
      puStack_1c8 = (undefined *)0x0;
      puStack_1d0 = (undefined *)0x0;
      puStack_1b8 = (undefined *)0x0;
      plStack_1c0 = (long *)0x0;
      fStack_1b0 = *(float *)(lVar13 + 0x38);
      ppuStack_258 = ppuVar6;
      FUN_10a141034(&puStack_1d0,*(undefined8 *)(lVar13 + 0x20));
      plVar24 = *(long **)(lVar13 + 0x28);
      if (plVar24 != (long *)0x0) {
        do {
          puVar17 = puStack_1c8;
          uVar11 = plVar24[2];
          uVar19 = ((ulong)(uint)((int)uVar11 << 3) + 8 ^ uVar11 >> 0x20) * -0x622015f714c7d297;
          uVar19 = (uVar11 >> 0x20 ^ uVar19 >> 0x2f ^ uVar19) * -0x622015f714c7d297;
          puVar27 = (undefined *)((uVar19 ^ uVar19 >> 0x2f) * -0x622015f714c7d297);
          if (puStack_1c8 != (undefined *)0x0) {
            puVar15 = puStack_1c8 + -1;
            if (((ulong)puStack_1c8 & (ulong)puVar15) == 0) {
              unaff_x26 = (undefined *)((ulong)puVar27 & (ulong)puVar15);
            }
            else {
              unaff_x26 = puVar27;
              if (puStack_1c8 <= puVar27) {
                uVar19 = 0;
                if (puStack_1c8 != (undefined *)0x0) {
                  uVar19 = (ulong)puVar27 / (ulong)puStack_1c8;
                }
                unaff_x26 = puVar27 + -(uVar19 * (long)puStack_1c8);
              }
            }
            plVar5 = *(long **)(puStack_1d0 + (long)unaff_x26 * 8);
            if (plVar5 != (long *)0x0) {
              do {
                while( true ) {
                  plVar5 = (long *)*plVar5;
                  if (plVar5 == (long *)0x0) goto LAB_10a1143c8;
                  puVar20 = (undefined *)plVar5[1];
                  if (puVar20 != puVar27) break;
                  if (plVar5[2] == uVar11) goto LAB_10a114528;
                }
                if (((ulong)puStack_1c8 & (ulong)puVar15) == 0) {
                  puVar20 = (undefined *)((ulong)puVar20 & (ulong)puVar15);
                }
                else if (puStack_1c8 <= puVar20) {
                  uVar19 = 0;
                  if (puStack_1c8 != (undefined *)0x0) {
                    uVar19 = (ulong)puVar20 / (ulong)puStack_1c8;
                  }
                  puVar20 = puVar20 + -(uVar19 * (long)puStack_1c8);
                }
              } while (puVar20 == unaff_x26);
            }
          }
LAB_10a1143c8:
          plVar5 = (long *)0x68;
          __Znwm();
          *plVar5 = 0;
          plVar5[1] = (long)puVar27;
          lVar12 = plVar24[3];
          lVar8 = plVar24[2];
          plVar5[3] = plVar24[3];
          plVar5[2] = lVar8;
          if (lVar12 != 0) {
            plVar16 = (long *)(lVar12 + 8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar3) {
                *plVar16 = *plVar16 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          uStack_160 = (code *)(plVar5 + 4);
          *(undefined1 *)(plVar5 + 0xc) = 3;
          if ((char)plVar24[0xc] == '\0') {
            uVar9 = 0;
          }
          else {
            FUN_10a005398(&uStack_160,plVar24 + 4);
            uVar9 = (undefined1)plVar24[0xc];
          }
          *(undefined1 *)(plVar5 + 0xc) = uVar9;
          if ((puVar17 == (undefined *)0x0) ||
             (fStack_1b0 * (float)puVar17 < (float)(puStack_1b8 + 1))) {
            uVar11 = 1;
            if ((undefined *)0x2 < puVar17) {
              uVar11 = (ulong)(((ulong)puVar17 & (ulong)(puVar17 + -1)) != 0);
            }
            uVar11 = uVar11 | (long)puVar17 << 1;
            uVar19 = (ulong)((float)(puStack_1b8 + 1) / fStack_1b0);
            if (uVar11 <= uVar19) {
              uVar11 = uVar19;
            }
            FUN_10a141034(&puStack_1d0,uVar11);
            puVar17 = puStack_1c8;
            if (((ulong)puStack_1c8 & (ulong)(puStack_1c8 + -1)) == 0) {
              unaff_x26 = (undefined *)((ulong)(puStack_1c8 + -1) & (ulong)puVar27);
            }
            else {
              unaff_x26 = puVar27;
              if (puStack_1c8 <= puVar27) {
                uVar11 = 0;
                if (puStack_1c8 != (undefined *)0x0) {
                  uVar11 = (ulong)puVar27 / (ulong)puStack_1c8;
                }
                unaff_x26 = puVar27 + -(uVar11 * (long)puStack_1c8);
              }
            }
          }
          plVar16 = *(long **)(puStack_1d0 + (long)unaff_x26 * 8);
          if (plVar16 == (long *)0x0) {
            *plVar5 = (long)plStack_1c0;
            *(long ***)(puStack_1d0 + (long)unaff_x26 * 8) = &plStack_1c0;
            plStack_1c0 = plVar5;
            if (*plVar5 != 0) {
              puVar27 = *(undefined **)(*plVar5 + 8);
              if (((ulong)puVar17 & (ulong)(puVar17 + -1)) == 0) {
                puVar27 = (undefined *)((ulong)puVar27 & (ulong)(puVar17 + -1));
              }
              else if (puVar17 <= puVar27) {
                uVar11 = 0;
                if (puVar17 != (undefined *)0x0) {
                  uVar11 = (ulong)puVar27 / (ulong)puVar17;
                }
                puVar27 = puVar27 + -(uVar11 * (long)puVar17);
              }
              *(long **)(puStack_1d0 + (long)puVar27 * 8) = plVar5;
            }
          }
          else {
            *plVar5 = *plVar16;
            *plVar16 = (long)plVar5;
          }
          puStack_1b8 = puStack_1b8 + 1;
LAB_10a114528:
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
      plVar24 = plStack_1c0;
      if (plStack_1c0 == (long *)0x0) {
        FUN_10a142154(&puStack_1d0);
LAB_10a114894:
        ppuVar21 = ppuVar6 + 1;
        do {
          puVar17 = *ppuVar21;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
          if (bVar3) {
            *ppuVar21 = puVar17 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (puVar17 == (undefined *)0x0) {
          (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
        }
      }
      else {
        do {
          lVar8 = plVar24[2];
          lVar12 = lVar13 + 0x18;
          FUN_10a141a44();
          if (lVar12 != 0) {
            if ((char)plVar24[0xc] == '\x01') {
              pcVar4 = (code *)plVar24[4];
              ppuStack_158 = ppuStack_258;
              uStack_160 = (code *)ppuStack_260;
              if (ppuStack_258 != (undefined **)0x0) {
                ppuVar6 = ppuStack_258 + 1;
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                  if (bVar3) {
                    *ppuVar6 = *ppuVar6 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              (*pcVar4)(&uStack_160,plVar24 + 4);
              if (ppuStack_158 != (undefined **)0x0) {
                ppuVar6 = ppuStack_158 + 1;
                do {
                  puVar17 = *ppuVar6;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                  if (bVar3) {
                    *ppuVar6 = puVar17 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                  ppuVar21 = ppuStack_158;
                } while (cVar2 != '\0');
LAB_10a114608:
                if (puVar17 == (undefined *)0x0) {
                  (**(code **)(*ppuVar21 + 0x10))(ppuVar21);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar21);
                }
              }
            }
            else if ((char)plVar24[0xc] == '\x02') {
              plVar5 = plVar24 + 4;
              FUN_10a688b40();
              ppuVar6 = ppuStack_258;
              if (plVar5 == (long *)0x0) {
                if (lVar8 != 0) {
                  uStack_150 = plVar24[4];
                  uStack_148 = plVar24[5];
                  if (uStack_148 != 0) {
                    plVar5 = (long *)(uStack_148 + 8);
                    do {
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                      if (bVar3) {
                        *plVar5 = *plVar5 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                  }
                  ppuStack_170 = ppuStack_260;
                  ppuStack_168 = ppuStack_258;
                  if (ppuStack_258 == (undefined **)0x0) {
                    ppuStack_138 = (undefined **)0x0;
                  }
                  else {
                    ppuVar21 = ppuStack_258 + 1;
                    do {
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
                      if (bVar3) {
                        *ppuVar21 = *ppuVar21 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    ppuStack_138 = ppuStack_258;
                    do {
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
                      if (bVar3) {
                        *ppuVar21 = *ppuVar21 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                  }
                  uStack_140 = ppuStack_260;
                  ppuStack_158 = &PTR_FUN_110ba73f8;
                  ppuStack_178 = (undefined **)0x0;
                  uStack_180 = 0;
                  uStack_160 = FUN_10a1425e8;
                  FUN_10a4634ec(lVar8,&uStack_160);
                  (*(code *)*ppuStack_158)(&ppuStack_158);
                  if (ppuVar6 != (undefined **)0x0) {
                    ppuVar21 = ppuVar6 + 1;
                    do {
                      puVar17 = *ppuVar21;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
                      if (bVar3) {
                        *ppuVar21 = puVar17 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (puVar17 == (undefined *)0x0) {
                      (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
                    }
                  }
                  if (ppuStack_178 != (undefined **)0x0) {
                    ppuVar6 = ppuStack_178 + 1;
                    do {
                      puVar17 = *ppuVar6;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                      if (bVar3) {
                        *ppuVar6 = puVar17 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                      ppuVar21 = ppuStack_178;
                    } while (cVar2 != '\0');
                    goto LAB_10a114608;
                  }
                }
              }
              else {
                *plVar5 = CONCAT44((int)((ulong)*plVar5 >> 0x20) + 1,(int)*plVar5 + 1);
                FUN_10a1423e4(plVar24[4],&ppuStack_260);
                iVar1 = *(int *)((long)plVar5 + 4) + -1;
                *(int *)((long)plVar5 + 4) = iVar1;
                if (iVar1 == 0) {
                  *(undefined4 *)plVar5 = 0;
                }
              }
            }
          }
          ppuVar6 = ppuStack_258;
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
        FUN_10a142154(&puStack_1d0);
        if (ppuVar6 != (undefined **)0x0) goto LAB_10a114894;
      }
      plVar24 = plStack_248;
      if (plStack_248 != (long *)0x0) {
        plVar5 = plStack_248 + 1;
        do {
          lVar13 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_248 + 0x10))(plStack_248);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
        }
      }
      if (plStack_1d8 != (long *)0x0) {
        plVar24 = plStack_1d8 + 1;
        do {
          lVar13 = *plVar24;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar3) {
            *plVar24 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1d8);
        }
      }
    }
  }
LAB_10a114934:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
LAB_10a114974:
  FUN_10a00946c(&UNK_10f63c73e);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a114984);
  (*pcVar4)();
}



/* Entry: 10a114da0; end: 10a114e53;  */

void FUN_10a114da0(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000100;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  puStack_70 = &UNK_10f63ce51;
  uStack_68 = 0;
  uStack_60 = 0x13a00000000;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a114e54(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63d2ce;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f63ce51;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a14275c();
  FUN_10a14296c(param_1);
  return;
}



/* Entry: 10a114e54; end: 10a114f2b;  */

/* WARNING: Removing unreachable block (ram,0x00010a114eec) */

undefined1  [16] FUN_10a114e54(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f63e1e8,0x11);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a142660(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a114f2c; end: 10a115107;  */

void FUN_10a114f2c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 0xe0);
  if (lVar3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar1 = (undefined8 *)0xc8;
    __Znwm();
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = &PTR_DAT_110b17898;
    *puVar1 = &PTR_FUN_110ba7420;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x15] = &PTR_FUN_110c383b8;
    *(undefined2 *)(puVar1 + 0x18) = 0x100;
    puVar1[4] = 0;
    puVar1[5] = 0;
    FUN_10a0040d0(puVar1 + 6,&PTR_PTR_110ba5d78);
    puVar1[3] = &PTR_FUN_110ba5c40;
    puVar1[6] = &PTR_DAT_110ba5cc0;
    puVar1[0x15] = &PTR_DAT_110ba5d38;
    puVar2 = (undefined8 *)0x98;
    __Znwm();
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_FUN_110ba72c0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0x12] = 0;
    puVar2[3] = &PTR_FUN_110ba7310;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    *(undefined4 *)(puVar2 + 10) = 0x3f800000;
    puVar2[0xb] = FUN_10a142144;
    puVar2[0xc] = &PTR_DAT_110ae9180;
    puVar1[0xb] = puVar2 + 3;
    puVar1[0xc] = puVar2;
    puVar1[0xd] = lVar3;
    *(undefined1 *)(puVar1 + 0xe) = 0;
    puVar1[0x13] = 0;
    *(undefined1 *)(puVar1 + 0x10) = 0;
    puVar1[0xf] = &PTR_DAT_110ba5598;
    puVar1[0x11] = 0;
    *(undefined1 *)(puVar1 + 0x12) = 0;
    puVar1[0x14] = 0;
    if ((*(byte *)(puVar1 + 0x18) & 1) == 0) {
      *(undefined1 *)(puVar1 + 0x18) = 1;
      puVar1[0x17] = lVar3;
      puVar1[0x16] = *(undefined8 *)(*(long *)(lVar3 + 0x850) + 0x2c);
    }
    FUN_10a5ae998(puVar1[9],&PTR_DAT_110b99f08,lVar3,puVar1 + 6);
    *param_1 = puVar1 + 3;
    param_1[1] = puVar1;
  }
  return;
}



/* Entry: 10a115108; end: 10a11519f;  */

undefined8 FUN_10a115108(void)

{
  return 0x8000;
}



/* Entry: 10a1151a0; end: 10a115203;  */

void FUN_10a1151a0(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_50 = 0xffffffff00000001;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f63ce51;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0xf5;
  uStack_18 = 0xffffffff;
  FUN_10a115204(param_1,&uStack_58);
  FUN_10a142b60();
  return;
}



/* Entry: 10a115204; end: 10a1152db;  */

/* WARNING: Removing unreachable block (ram,0x00010a11529c) */

undefined1  [16] FUN_10a115204(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f63e1fa,0x1a);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a142a64(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a1152dc; end: 10a115377;  */

void FUN_10a1152dc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a115378; end: 10a1153d3;  */

void FUN_10a115378(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f63ce51;
  uStack_38 = 0;
  puStack_30 = &UNK_10f63ce51;
  uStack_28 = 0;
  uStack_20 = 0xf5;
  uStack_18 = 0xffffffff;
  FUN_10a1153d4(param_1,&uStack_58);
  FUN_10a142d18();
  return;
}



/* Entry: 10a1153d4; end: 10a1154ab;  */

/* WARNING: Removing unreachable block (ram,0x00010a11546c) */

undefined1  [16] FUN_10a1153d4(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f63e215,0x18);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a142c1c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a1154ac; end: 10a1159bb;  */

void FUN_10a1154ac(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a1159bc; end: 10a115b23;  */

undefined8 * FUN_10a1159bc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  puVar4 = param_1;
  FUN_10a03c0d0();
  *puVar4 = &PTR_FUN_110ba60f0;
  puVar4[6] = 0;
  puVar4[5] = 0;
  puVar4[4] = param_2;
  puVar4[0xe] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[7] = 0;
  puVar4[0x11] = 0;
  puVar4[0x10] = puVar4 + 0x11;
  *(undefined4 *)(puVar4 + 0xf) = 0x3f800000;
  puVar4[0x12] = 0;
  plVar5 = *(long **)(*(long *)(param_2 + 0x100) + 0x1c8);
  (**(code **)(*plVar5 + 0x120))();
  lVar6 = plVar5[1];
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    lVar7 = 0;
    if (lVar6 != 0) {
      lVar7 = *plVar5;
    }
  }
  plVar5 = (long *)param_1[6];
  param_1[5] = lVar7;
  param_1[6] = lVar6;
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
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a115b24; end: 10a115c23;  */

undefined8 * FUN_10a115b24(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puStack_48;
  
  plVar2 = (long *)param_1[9];
  for (plVar6 = (long *)param_1[8]; plVar6 != plVar2; plVar6 = plVar6 + 2) {
    plVar5 = (long *)plVar6[1];
    if ((plVar5 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 != (long *)0x0)
       ) {
      if (*plVar6 != 0) {
        *(undefined8 *)(*plVar6 + 0x88) = 0;
      }
      plVar1 = plVar5 + 1;
      do {
        lVar7 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  func_0x00010a1436e0(param_1 + 0x10,param_1[0x11]);
  func_0x00010726f2e4(param_1 + 0xb);
  puStack_48 = param_1 + 8;
  func_0x00010a12e030(&puStack_48);
  plVar6 = (long *)param_1[7];
  param_1[7] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  func_0x00010a143688(param_1 + 5);
  *param_1 = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[3] = 0;
  }
  func_0x00010a004e5c(param_1 + 1);
  return param_1;
}



/* Entry: 10a115c24; end: 10a115c27;  */

undefined8 * FUN_10a115c24(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puStack_48;
  
  plVar2 = (long *)param_1[9];
  for (plVar6 = (long *)param_1[8]; plVar6 != plVar2; plVar6 = plVar6 + 2) {
    plVar5 = (long *)plVar6[1];
    if ((plVar5 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 != (long *)0x0)
       ) {
      if (*plVar6 != 0) {
        *(undefined8 *)(*plVar6 + 0x88) = 0;
      }
      plVar1 = plVar5 + 1;
      do {
        lVar7 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  func_0x00010a1436e0(param_1 + 0x10,param_1[0x11]);
  func_0x00010726f2e4(param_1 + 0xb);
  puStack_48 = param_1 + 8;
  func_0x00010a12e030(&puStack_48);
  plVar6 = (long *)param_1[7];
  param_1[7] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  func_0x00010a143688(param_1 + 5);
  *param_1 = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[3] = 0;
  }
  func_0x00010a004e5c(param_1 + 1);
  return param_1;
}



/* Entry: 10a115c28; end: 10a115c3b;  */

void FUN_10a115c28(void)

{
  FUN_10a115b24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a115c3c; end: 10a1170c3;  */

/* WARNING: Removing unreachable block (ram,0x00010a115d14) */
/* WARNING: Removing unreachable block (ram,0x00010a115d20) */
/* WARNING: Removing unreachable block (ram,0x00010a115d3c) */
/* WARNING: Removing unreachable block (ram,0x00010a115d40) */
/* WARNING: Removing unreachable block (ram,0x00010a115d54) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a115c3c(long param_1,undefined ********param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined ********ppppppppuVar7;
  char *pcVar8;
  code *pcVar9;
  bool bVar10;
  long *plVar11;
  undefined ********ppppppppuVar12;
  undefined *******pppppppuVar13;
  long *plVar14;
  undefined ********ppppppppuVar15;
  undefined ********ppppppppuVar16;
  undefined ********ppppppppuVar17;
  undefined1 uVar18;
  long *plVar19;
  undefined *****pppppuVar20;
  long lVar21;
  undefined8 uVar22;
  long *plVar23;
  undefined ********ppppppppuVar24;
  ulong uVar25;
  long *plVar26;
  ulong uVar27;
  undefined ******ppppppuVar28;
  undefined *******pppppppuVar29;
  undefined *puVar30;
  undefined *****pppppuVar31;
  undefined ****ppppuVar32;
  undefined *****pppppuVar33;
  long *unaff_x19;
  undefined8 *puVar34;
  undefined *******pppppppuVar35;
  uint *puVar36;
  undefined8 *puVar37;
  undefined ********ppppppppuVar38;
  long *plVar39;
  undefined ******ppppppuVar40;
  undefined *****pppppuVar41;
  undefined8 *puVar42;
  undefined *******pppppppuVar43;
  long lVar44;
  char *pcVar45;
  undefined ********ppppppppuStack_160;
  undefined ********ppppppppuStack_158;
  char *pcStack_150;
  char *pcStack_148;
  undefined8 uStack_140;
  undefined ********ppppppppuStack_138;
  undefined ********ppppppppuStack_130;
  undefined ********ppppppppuStack_128;
  undefined ********ppppppppuStack_120;
  undefined ********ppppppppuStack_118;
  undefined ********ppppppppuStack_110;
  undefined ********ppppppppuStack_108;
  undefined *******pppppppuStack_100;
  undefined *******pppppppuStack_f8;
  undefined ********ppppppppuStack_f0;
  long lStack_e8;
  undefined ********ppppppppuStack_e0;
  undefined *******pppppppuStack_d0;
  undefined4 uStack_c4;
  undefined ********ppppppppuStack_c0;
  undefined ********ppppppppuStack_b8;
  undefined ********ppppppppuStack_b0;
  undefined ********ppppppppuStack_a8;
  undefined ********ppppppppuStack_a0;
  undefined ********ppppppppuStack_98;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar42 = *(undefined8 **)(param_1 + 0x40);
  puVar34 = *(undefined8 **)(param_1 + 0x48);
  if (puVar42 == puVar34) {
LAB_10a115cfc:
    if (puVar34 < puVar42) goto LAB_10a116ed0;
    puVar37 = *(undefined8 **)(param_1 + 0x40);
    if (puVar42 != puVar34) {
      for (; puVar34 != puVar42; puVar34 = puVar34 + -2) {
        if (puVar34[-1] != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      *(undefined8 **)(param_1 + 0x48) = puVar42;
      puVar34 = puVar42;
      goto LAB_10a115d88;
    }
  }
  else {
    do {
      puVar37 = puVar42 + 2;
      if ((puVar42[1] == 0) || (*(long *)(puVar42[1] + 8) == -1)) {
        if ((puVar42 != puVar34) && (puVar37 != puVar34)) {
          do {
            lVar44 = puVar37[1];
            if ((lVar44 != 0) && (*(long *)(lVar44 + 8) != -1)) {
              uVar22 = *puVar37;
              *puVar37 = 0;
              puVar37[1] = 0;
              lVar21 = puVar42[1];
              *puVar42 = uVar22;
              puVar42[1] = lVar44;
              if (lVar21 != 0) {
                __ZNSt3__119__shared_weak_count14__release_weakEv();
              }
              puVar42 = puVar42 + 2;
            }
            puVar37 = puVar37 + 2;
          } while (puVar37 != puVar34);
          puVar34 = *(undefined8 **)(param_1 + 0x48);
        }
        goto LAB_10a115cfc;
      }
      puVar42 = puVar37;
    } while (puVar37 != puVar34);
LAB_10a115d88:
    puVar37 = *(undefined8 **)(param_1 + 0x40);
  }
  plVar11 = *(long **)(param_1 + 0x38);
  if (puVar37 == puVar34) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 8))();
    }
    puVar42 = (undefined8 *)(param_1 + 0x88);
    func_0x00010a1436e0(param_1 + 0x80,*puVar42);
    *puVar42 = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 **)(param_1 + 0x80) = puVar42;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      if (*(long *)(param_1 + 0x70) != 0) {
        func_0x0001074b6094();
        func_0x00010726f308();
        unaff_x19[2] = 0;
        lVar21 = unaff_x19[1];
        for (lVar44 = 0; lVar21 != lVar44; lVar44 = lVar44 + 1) {
          *(undefined8 *)(*unaff_x19 + lVar44 * 8) = 0;
        }
        unaff_x19[3] = 0;
      }
      return;
    }
LAB_10a116ec8:
    ___stack_chk_fail();
  }
  else {
    if (plVar11 == (long *)0x0) {
      if (*(long **)(param_1 + 0x28) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x28) + 0x10))(&ppppppppuStack_c0);
        ppppppppuVar12 = ppppppppuStack_c0;
        ppppppppuStack_c0 = (undefined ********)0x0;
        plVar11 = *(long **)(param_1 + 0x38);
        *(undefined *********)(param_1 + 0x38) = ppppppppuVar12;
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 8))();
          ppppppppuVar12 = ppppppppuStack_c0;
          ppppppppuStack_c0 = (undefined ********)0x0;
          if (ppppppppuVar12 != (undefined ********)0x0) {
            (*(code *)(*ppppppppuVar12)[1])();
          }
          ppppppppuVar12 = *(undefined *********)(param_1 + 0x38);
        }
        if (ppppppppuVar12 != (undefined ********)0x0) {
          puVar37 = *(undefined8 **)(param_1 + 0x40);
          puVar34 = *(undefined8 **)(param_1 + 0x48);
          goto LAB_10a115d9c;
        }
      }
LAB_10a116db4:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
        return;
      }
      goto LAB_10a116ec8;
    }
LAB_10a115d9c:
    ppppppppuStack_138 = (undefined ********)0x0;
    ppppppppuStack_130 = (undefined ********)0x0;
    ppppppppuStack_128 = (undefined ********)0x0;
    if ((long)puVar34 - (long)puVar37 == 0) {
LAB_10a115e04:
      if (puVar37 != puVar34) {
        do {
          pppppppuStack_100 = (undefined *******)0x0;
          pppppppuVar13 = (undefined *******)puVar37[1];
          if ((pppppppuVar13 != (undefined *******)0x0) &&
             (__ZNSt3__119__shared_weak_count4lockEv(), pppppppuStack_f8 = pppppppuVar13,
             pppppppuVar13 != (undefined *******)0x0)) {
            pppppppuVar43 = (undefined *******)*puVar37;
            pppppppuStack_100 = pppppppuVar43;
            if (pppppppuVar43 == (undefined *******)0x0) {
              pppppppuVar43 = pppppppuVar13 + 1;
              do {
                ppppppuVar40 = *pppppppuVar43;
                cVar5 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(pppppppuVar43,0x10);
                if (bVar10) {
                  *pppppppuVar43 = (undefined ******)((long)ppppppuVar40 + -1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (ppppppuVar40 == (undefined ******)0x0) {
                (*(code *)(*pppppppuVar13)[2])(pppppppuVar13);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar13);
              }
            }
            else if (ppppppppuStack_130 < ppppppppuStack_128) {
              *ppppppppuStack_130 = pppppppuVar43;
              ppppppppuStack_130[1] = pppppppuVar13;
              ppppppppuStack_130 = ppppppppuStack_130 + 2;
            }
            else {
              lVar44 = (long)ppppppppuStack_130 - (long)ppppppppuStack_138;
              uVar27 = (lVar44 >> 4) + 1;
              if (uVar27 >> 0x3c != 0) {
                FUN_10a12e128();
                goto LAB_10a116ed0;
              }
              uVar25 = (long)ppppppppuStack_128 - (long)ppppppppuStack_138 >> 3;
              if (uVar25 <= uVar27) {
                uVar25 = uVar27;
              }
              if (0x7fffffffffffffef < (ulong)((long)ppppppppuStack_128 - (long)ppppppppuStack_138))
              {
                uVar25 = 0xfffffffffffffff;
              }
              ppppppppuStack_a0 = (undefined ********)&ppppppppuStack_138;
              FUN_10a12e13c();
              puVar42 = (undefined8 *)(uVar25 + lVar44);
              lVar44 = (long)param_2 * 0x10;
              *puVar42 = pppppppuVar43;
              puVar42[1] = pppppppuVar13;
              pppppppuStack_100 = (undefined *******)0x0;
              pppppppuStack_f8 = (undefined *******)0x0;
              ppppppppuVar12 =
                   (undefined ********)
                   ((long)puVar42 - ((long)ppppppppuStack_130 - (long)ppppppppuStack_138));
              param_2 = ppppppppuStack_138;
              _memcpy(ppppppppuVar12);
              ppppppppuStack_b0 = ppppppppuStack_138;
              ppppppppuStack_a8 = ppppppppuStack_128;
              ppppppppuStack_c0 = ppppppppuStack_138;
              ppppppppuStack_b8 = ppppppppuStack_138;
              ppppppppuStack_138 = ppppppppuVar12;
              ppppppppuStack_130 = (undefined ********)(puVar42 + 2);
              ppppppppuStack_128 = (undefined ********)(uVar25 + lVar44);
              func_0x00010a12e170(&ppppppppuStack_c0);
              ppppppppuStack_130 = (undefined ********)(puVar42 + 2);
            }
          }
          puVar37 = puVar37 + 2;
        } while (puVar37 != puVar34);
      }
      if (ppppppppuStack_138 != ppppppppuStack_130) {
        pcStack_150 = (char *)0x0;
        pcStack_148 = (char *)0x0;
        uStack_140 = 0;
        (**(code **)(**(long **)(param_1 + 0x38) + 0x18))(*(long **)(param_1 + 0x38),&pcStack_150);
        pcVar8 = pcStack_148;
        if (pcStack_150 != pcStack_148) {
          plVar11 = (long *)(param_1 + 0x88);
          pcVar45 = pcStack_150;
          do {
            puVar36 = (uint *)(pcVar45 + 8);
            if (*pcVar45 == '\x01') {
              func_0x000107270fb0(param_1 + 0x58,puVar36,puVar36);
              bVar4 = pcVar45[0x28];
              if (7 < bVar4) {
                bVar4 = 0;
              }
              uVar1 = *(undefined4 *)(pcVar45 + 8);
              pppppppuVar13 = (undefined *******)0x58;
              __Znwm();
              pppppppuVar13[1] = (undefined ******)0x0;
              pppppppuVar13[2] = (undefined ******)0x0;
              *pppppppuVar13 = (undefined ******)&PTR_FUN_110ba6c88;
              if (pcVar45[0x27] < '\0') {
                func_0x000107c3192c(&ppppppppuStack_c0,*(undefined8 *)(pcVar45 + 0x10),
                                    *(undefined8 *)(pcVar45 + 0x18));
              }
              else {
                ppppppppuStack_b8 = *(undefined *********)(pcVar45 + 0x18);
                ppppppppuStack_c0 = *(undefined *********)(pcVar45 + 0x10);
                ppppppppuStack_b0 = *(undefined *********)(pcVar45 + 0x20);
              }
              pppppppuVar43 = pppppppuVar13 + 3;
              *pppppppuVar43 = (undefined ******)&PTR_FUN_110ba6698;
              uVar3 = *(undefined4 *)(pcVar45 + 0x2c);
              pppppppuVar13[4] = (undefined ******)0x0;
              pppppppuVar13[5] = (undefined ******)0x0;
              *(undefined4 *)(pppppppuVar13 + 6) = uVar1;
              pppppppuVar13[8] = (undefined ******)ppppppppuStack_b8;
              pppppppuVar13[7] = (undefined ******)ppppppppuStack_c0;
              pppppppuVar13[9] = (undefined ******)ppppppppuStack_b0;
              *(byte *)(pppppppuVar13 + 10) = bVar4;
              *(undefined4 *)((long)pppppppuVar13 + 0x54) = uVar3;
              ppppppppuVar16 = (undefined ********)0x40;
              pppppppuStack_100 = pppppppuVar43;
              pppppppuStack_f8 = pppppppuVar13;
              __Znwm();
              ppppppppuVar38 = ppppppppuStack_130;
              ppppppppuVar16[1] = (undefined *******)0x0;
              ppppppppuVar16[2] = (undefined *******)0x0;
              *ppppppppuVar16 = (undefined *******)&PTR_FUN_110ba7470;
              ppppppppuVar16[4] = (undefined *******)0x0;
              ppppppppuVar16[5] = (undefined *******)0x0;
              ppppppppuStack_160 = ppppppppuVar16 + 3;
              *ppppppppuStack_160 = (undefined *******)&PTR_FUN_110ba6778;
              ppppppppuVar16[6] = pppppppuVar43;
              ppppppppuVar16[7] = pppppppuVar13;
              ppppppppuVar12 = ppppppppuStack_138;
              ppppppppuStack_158 = ppppppppuVar16;
              if (ppppppppuStack_138 == ppppppppuStack_130) {
LAB_10a116b8c:
                ppppppppuVar12 = ppppppppuStack_158 + 1;
                do {
                  pppppppuVar13 = *ppppppppuVar12;
                  cVar5 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar12,0x10);
                  if (bVar10) {
                    *ppppppppuVar12 = (undefined *******)((long)pppppppuVar13 + -1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                goto LAB_10a116ba0;
              }
              do {
                pppppppuVar13 = (undefined *******)0x8;
                ppppppuVar40 = (*ppppppppuVar12)[3];
                pppppppuStack_f8 = (undefined *******)0x0;
                pppppppuStack_100 = (undefined *******)0x0;
                lStack_e8 = 0;
                ppppppppuStack_f0 = (undefined ********)0x0;
                ppppppppuStack_e0 =
                     (undefined ********)
                     CONCAT44(ppppppppuStack_e0._4_4_,*(undefined4 *)(ppppppuVar40 + 7));
                ppppppppuVar16 = (undefined ********)ppppppuVar40[4];
                FUN_10a142ea8(&pppppppuStack_100);
                pppppppuVar43 = pppppppuStack_f8;
                for (pppppuVar41 = ppppppuVar40[5]; pppppppuStack_f8 = pppppppuVar43,
                    ppppppppuVar17 = ppppppppuStack_f0, pppppuVar41 != (undefined *****)0x0;
                    pppppuVar41 = (undefined *****)*pppppuVar41) {
                  pppppuVar20 = (undefined *****)pppppuVar41[2];
                  uVar27 = ((ulong)(uint)((int)pppppuVar20 << 3) + 8 ^ (ulong)pppppuVar20 >> 0x20) *
                           -0x622015f714c7d297;
                  uVar27 = ((ulong)pppppuVar20 >> 0x20 ^ uVar27 >> 0x2f ^ uVar27) *
                           -0x622015f714c7d297;
                  pppppppuVar35 =
                       (undefined *******)((uVar27 ^ uVar27 >> 0x2f) * -0x622015f714c7d297);
                  if (pppppppuVar43 != (undefined *******)0x0) {
                    uVar27 = (long)pppppppuVar43 - 1;
                    if (((ulong)pppppppuVar43 & uVar27) == 0) {
                      pppppppuVar13 = (undefined *******)((ulong)pppppppuVar35 & uVar27);
                    }
                    else {
                      pppppppuVar13 = pppppppuVar35;
                      if (pppppppuVar43 <= pppppppuVar35) {
                        uVar25 = 0;
                        if (pppppppuVar43 != (undefined *******)0x0) {
                          uVar25 = (ulong)pppppppuVar35 / (ulong)pppppppuVar43;
                        }
                        pppppppuVar13 =
                             (undefined *******)((long)pppppppuVar35 - uVar25 * (long)pppppppuVar43)
                        ;
                      }
                    }
                    ppppppuVar28 = pppppppuStack_100[(long)pppppppuVar13];
                    if (ppppppuVar28 != (undefined ******)0x0) {
                      do {
                        while( true ) {
                          ppppppuVar28 = (undefined ******)*ppppppuVar28;
                          if (ppppppuVar28 == (undefined ******)0x0) goto LAB_10a116770;
                          pppppppuVar29 = (undefined *******)ppppppuVar28[1];
                          if (pppppppuVar29 != pppppppuVar35) break;
                          if (ppppppuVar28[2] == pppppuVar20) goto LAB_10a1168d0;
                        }
                        if (((ulong)pppppppuVar43 & uVar27) == 0) {
                          pppppppuVar29 = (undefined *******)((ulong)pppppppuVar29 & uVar27);
                        }
                        else if (pppppppuVar43 <= pppppppuVar29) {
                          uVar25 = 0;
                          if (pppppppuVar43 != (undefined *******)0x0) {
                            uVar25 = (ulong)pppppppuVar29 / (ulong)pppppppuVar43;
                          }
                          pppppppuVar29 =
                               (undefined *******)
                               ((long)pppppppuVar29 - uVar25 * (long)pppppppuVar43);
                        }
                      } while (pppppppuVar29 == pppppppuVar13);
                    }
                  }
LAB_10a116770:
                  ppppppppuVar17 = (undefined ********)0x68;
                  __Znwm();
                  *ppppppppuVar17 = (undefined *******)0x0;
                  ppppppppuVar17[1] = pppppppuVar35;
                  ppppuVar32 = pppppuVar41[3];
                  pppppppuVar29 = (undefined *******)pppppuVar41[2];
                  ppppppppuVar17[3] = (undefined *******)pppppuVar41[3];
                  ppppppppuVar17[2] = pppppppuVar29;
                  if (ppppuVar32 != (undefined ****)0x0) {
                    ppppuVar32 = ppppuVar32 + 1;
                    do {
                      cVar5 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(ppppuVar32,0x10);
                      if (bVar10) {
                        *ppppuVar32 = (undefined ***)((long)*ppppuVar32 + 1);
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                  }
                  ppppppppuStack_c0 = ppppppppuVar17 + 4;
                  *(undefined1 *)(ppppppppuVar17 + 0xc) = 3;
                  if (*(char *)(pppppuVar41 + 0xc) == '\0') {
                    uVar18 = 0;
                  }
                  else {
                    ppppppppuVar16 = (undefined ********)(pppppuVar41 + 4);
                    FUN_10a005398(&ppppppppuStack_c0);
                    uVar18 = *(undefined1 *)(pppppuVar41 + 0xc);
                  }
                  *(undefined1 *)(ppppppppuVar17 + 0xc) = uVar18;
                  if ((pppppppuVar43 == (undefined *******)0x0) ||
                     (ppppppppuStack_e0._0_4_ * (float)pppppppuVar43 < (float)(lStack_e8 + 1))) {
                    uVar27 = 1;
                    if ((undefined *******)0x2 < pppppppuVar43) {
                      uVar27 = (ulong)(((ulong)pppppppuVar43 & (long)pppppppuVar43 - 1U) != 0);
                    }
                    ppppppppuVar16 = (undefined ********)(uVar27 | (long)pppppppuVar43 << 1);
                    ppppppppuVar24 =
                         (undefined ********)
                         (long)((float)(lStack_e8 + 1) / ppppppppuStack_e0._0_4_);
                    if (ppppppppuVar16 <= ppppppppuVar24) {
                      ppppppppuVar16 = ppppppppuVar24;
                    }
                    FUN_10a142ea8(&pppppppuStack_100);
                    pppppppuVar43 = pppppppuStack_f8;
                    if (((ulong)pppppppuStack_f8 & (long)pppppppuStack_f8 - 1U) == 0) {
                      pppppppuVar13 =
                           (undefined *******)((long)pppppppuStack_f8 - 1U & (ulong)pppppppuVar35);
                    }
                    else {
                      pppppppuVar13 = pppppppuVar35;
                      if (pppppppuStack_f8 <= pppppppuVar35) {
                        uVar27 = 0;
                        if (pppppppuStack_f8 != (undefined *******)0x0) {
                          uVar27 = (ulong)pppppppuVar35 / (ulong)pppppppuStack_f8;
                        }
                        pppppppuVar13 =
                             (undefined *******)
                             ((long)pppppppuVar35 - uVar27 * (long)pppppppuStack_f8);
                      }
                    }
                  }
                  ppppppuVar28 = pppppppuStack_100[(long)pppppppuVar13];
                  if (ppppppuVar28 == (undefined ******)0x0) {
                    *ppppppppuVar17 = (undefined *******)ppppppppuStack_f0;
                    pppppppuStack_100[(long)pppppppuVar13] = (undefined ******)&ppppppppuStack_f0;
                    ppppppppuStack_f0 = ppppppppuVar17;
                    if (*ppppppppuVar17 != (undefined *******)0x0) {
                      pppppppuVar35 = (undefined *******)(*ppppppppuVar17)[1];
                      if (((ulong)pppppppuVar43 & (long)pppppppuVar43 - 1U) == 0) {
                        pppppppuVar35 =
                             (undefined *******)((ulong)pppppppuVar35 & (long)pppppppuVar43 - 1U);
                      }
                      else if (pppppppuVar43 <= pppppppuVar35) {
                        uVar27 = 0;
                        if (pppppppuVar43 != (undefined *******)0x0) {
                          uVar27 = (ulong)pppppppuVar35 / (ulong)pppppppuVar43;
                        }
                        pppppppuVar35 =
                             (undefined *******)((long)pppppppuVar35 - uVar27 * (long)pppppppuVar43)
                        ;
                      }
                      pppppppuStack_100[(long)pppppppuVar35] = (undefined ******)ppppppppuVar17;
                    }
                  }
                  else {
                    *ppppppppuVar17 = (undefined *******)*ppppppuVar28;
                    *ppppppuVar28 = (undefined *****)ppppppppuVar17;
                  }
                  lStack_e8 = lStack_e8 + 1;
LAB_10a1168d0:
                  pppppppuVar43 = pppppppuStack_f8;
                }
                for (; ppppppppuVar17 != (undefined ********)0x0;
                    ppppppppuVar17 = (undefined ********)*ppppppppuVar17) {
                  pppppuVar41 = ppppppuVar40[4];
                  ppppppppuVar24 = ppppppppuVar16;
                  if (pppppuVar41 != (undefined *****)0x0) {
                    pppppppuVar13 = ppppppppuVar17[2];
                    uVar27 = ((ulong)(uint)((int)pppppppuVar13 << 3) + 8 ^
                             (ulong)pppppppuVar13 >> 0x20) * -0x622015f714c7d297;
                    uVar27 = ((ulong)pppppppuVar13 >> 0x20 ^ uVar27 >> 0x2f ^ uVar27) *
                             -0x622015f714c7d297;
                    pppppuVar20 = (undefined *****)((uVar27 ^ uVar27 >> 0x2f) * -0x622015f714c7d297)
                    ;
                    puVar30 = (undefined *)((long)pppppuVar41 + -1);
                    if (((ulong)pppppuVar41 & (ulong)puVar30) == 0) {
                      pppppuVar31 = (undefined *****)((ulong)pppppuVar20 & (ulong)puVar30);
                    }
                    else {
                      pppppuVar31 = pppppuVar20;
                      if (pppppuVar41 <= pppppuVar20) {
                        uVar27 = 0;
                        if (pppppuVar41 != (undefined *****)0x0) {
                          uVar27 = (ulong)pppppuVar20 / (ulong)pppppuVar41;
                        }
                        pppppuVar31 = (undefined *****)
                                      ((long)pppppuVar20 - uVar27 * (long)pppppuVar41);
                      }
                    }
                    ppppuVar32 = ppppppuVar40[3][(long)pppppuVar31];
                    if (ppppuVar32 != (undefined ****)0x0) {
LAB_10a11694c:
                      while (ppppuVar32 = (undefined ****)*ppppuVar32,
                            ppppuVar32 != (undefined ****)0x0) {
                        pppppuVar33 = (undefined *****)ppppuVar32[1];
                        if (pppppuVar33 != pppppuVar20) goto LAB_10a116970;
                        if ((undefined *******)ppppuVar32[2] == pppppppuVar13) {
                          if (*(char *)(ppppppppuVar17 + 0xc) == '\x01') {
                            pppppppuVar13 = ppppppppuVar17[4];
                            if (ppppppppuStack_158 != (undefined ********)0x0) {
                              ppppppppuVar16 = ppppppppuStack_158 + 1;
                              do {
                                cVar5 = '\x01';
                                bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar16,0x10);
                                if (bVar10) {
                                  *ppppppppuVar16 = (undefined *******)((long)*ppppppppuVar16 + 1);
                                  cVar5 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar5 != '\0');
                            }
                            ppppppppuVar24 = ppppppppuVar17 + 4;
                            ppppppppuStack_c0 = ppppppppuStack_160;
                            ppppppppuStack_b8 = ppppppppuStack_158;
                            (*(code *)pppppppuVar13)(&ppppppppuStack_c0);
                            if (ppppppppuStack_b8 != (undefined ********)0x0) {
                              ppppppppuVar16 = ppppppppuStack_b8 + 1;
                              do {
                                pppppppuVar13 = *ppppppppuVar16;
                                cVar5 = '\x01';
                                bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar16,0x10);
                                if (bVar10) {
                                  *ppppppppuVar16 = (undefined *******)((long)pppppppuVar13 + -1);
                                  cVar5 = ExclusiveMonitorsStatus();
                                }
                                ppppppppuVar15 = ppppppppuStack_b8;
                              } while (cVar5 != '\0');
                              goto LAB_10a116a40;
                            }
                          }
                          else if (*(char *)(ppppppppuVar17 + 0xc) == '\x02') {
                            ppppppppuVar15 = ppppppppuVar17 + 4;
                            FUN_10a688b40();
                            ppppppppuVar7 = ppppppppuStack_158;
                            if (ppppppppuVar15 == (undefined ********)0x0) {
                              ppppppppuVar24 = (undefined ********)0x0;
                              if (ppppppppuVar16 != (undefined ********)0x0) {
                                ppppppppuStack_b0 = (undefined ********)ppppppppuVar17[4];
                                ppppppppuStack_a8 = (undefined ********)ppppppppuVar17[5];
                                if (ppppppppuStack_a8 != (undefined ********)0x0) {
                                  ppppppppuVar24 = ppppppppuStack_a8 + 1;
                                  do {
                                    cVar5 = '\x01';
                                    bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar24,0x10);
                                    if (bVar10) {
                                      *ppppppppuVar24 =
                                           (undefined *******)((long)*ppppppppuVar24 + 1);
                                      cVar5 = ExclusiveMonitorsStatus();
                                    }
                                  } while (cVar5 != '\0');
                                }
                                ppppppppuStack_110 = ppppppppuStack_160;
                                ppppppppuStack_108 = ppppppppuStack_158;
                                if (ppppppppuStack_158 == (undefined ********)0x0) {
                                  ppppppppuStack_98 = (undefined ********)0x0;
                                }
                                else {
                                  ppppppppuVar24 = ppppppppuStack_158 + 1;
                                  do {
                                    cVar5 = '\x01';
                                    bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar24,0x10);
                                    if (bVar10) {
                                      *ppppppppuVar24 =
                                           (undefined *******)((long)*ppppppppuVar24 + 1);
                                      cVar5 = ExclusiveMonitorsStatus();
                                    }
                                  } while (cVar5 != '\0');
                                  ppppppppuStack_98 = ppppppppuStack_158;
                                  do {
                                    cVar5 = '\x01';
                                    bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar24,0x10);
                                    if (bVar10) {
                                      *ppppppppuVar24 =
                                           (undefined *******)((long)*ppppppppuVar24 + 1);
                                      cVar5 = ExclusiveMonitorsStatus();
                                    }
                                  } while (cVar5 != '\0');
                                }
                                ppppppppuStack_a0 = ppppppppuStack_160;
                                ppppppppuStack_b8 = (undefined ********)&PTR_FUN_110ba74b0;
                                ppppppppuStack_118 = (undefined ********)0x0;
                                ppppppppuStack_120 = (undefined ********)0x0;
                                ppppppppuStack_c0 = (undefined ********)FUN_10a1439e4;
                                ppppppppuVar24 = (undefined ********)&ppppppppuStack_c0;
                                FUN_10a4634ec(ppppppppuVar16);
                                (*(code *)*ppppppppuStack_b8)(&ppppppppuStack_b8);
                                if (ppppppppuVar7 != (undefined ********)0x0) {
                                  ppppppppuVar16 = ppppppppuVar7 + 1;
                                  do {
                                    pppppppuVar13 = *ppppppppuVar16;
                                    cVar5 = '\x01';
                                    bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar16,0x10);
                                    if (bVar10) {
                                      *ppppppppuVar16 =
                                           (undefined *******)((long)pppppppuVar13 + -1);
                                      cVar5 = ExclusiveMonitorsStatus();
                                    }
                                  } while (cVar5 != '\0');
                                  if (pppppppuVar13 == (undefined *******)0x0) {
                                    (*(code *)(*ppppppppuVar7)[2])(ppppppppuVar7);
                                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppppuVar7)
                                    ;
                                  }
                                }
                                if (ppppppppuStack_118 != (undefined ********)0x0) {
                                  ppppppppuVar16 = ppppppppuStack_118 + 1;
                                  do {
                                    pppppppuVar13 = *ppppppppuVar16;
                                    cVar5 = '\x01';
                                    bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar16,0x10);
                                    if (bVar10) {
                                      *ppppppppuVar16 =
                                           (undefined *******)((long)pppppppuVar13 + -1);
                                      cVar5 = ExclusiveMonitorsStatus();
                                    }
                                    ppppppppuVar15 = ppppppppuStack_118;
                                  } while (cVar5 != '\0');
LAB_10a116a40:
                                  if (pppppppuVar13 == (undefined *******)0x0) {
                                    (*(code *)(*ppppppppuVar15)[2])(ppppppppuVar15);
                                    __ZNSt3__119__shared_weak_count14__release_weakEv
                                              (ppppppppuVar15);
                                  }
                                }
                              }
                            }
                            else {
                              *ppppppppuVar15 =
                                   (undefined *******)
                                   CONCAT44((int)((ulong)*ppppppppuVar15 >> 0x20) + 1,
                                            (int)*ppppppppuVar15 + 1);
                              ppppppppuVar24 = (undefined ********)&ppppppppuStack_160;
                              FUN_10a1437e0(ppppppppuVar17[4]);
                              iVar6 = *(int *)((long)ppppppppuVar15 + 4) + -1;
                              *(int *)((long)ppppppppuVar15 + 4) = iVar6;
                              if (iVar6 == 0) {
                                *(undefined4 *)ppppppppuVar15 = 0;
                              }
                            }
                          }
                          break;
                        }
                      }
                    }
                  }
LAB_10a116b64:
                  ppppppppuVar16 = ppppppppuVar24;
                }
                FUN_10a143508(&pppppppuStack_100);
                ppppppppuVar12 = ppppppppuVar12 + 2;
              } while (ppppppppuVar12 != ppppppppuVar38);
              if (ppppppppuStack_158 != (undefined ********)0x0) goto LAB_10a116b8c;
            }
            else {
              func_0x000107272144(param_1 + 0x58,puVar36);
              plVar14 = (long *)*plVar11;
              if (plVar14 != (long *)0x0) {
                plVar23 = plVar14;
                plVar39 = plVar11;
                do {
                  lVar44 = 8;
                  if (*puVar36 <= *(uint *)((long)plVar23 + 0x1c)) {
                    lVar44 = 0;
                    plVar39 = plVar23;
                  }
                  plVar23 = *(long **)((long)plVar23 + lVar44);
                } while (plVar23 != (long *)0x0);
                if ((plVar39 != plVar11) && (*(uint *)((long)plVar39 + 0x1c) <= *puVar36)) {
                  plVar23 = (long *)plVar39[1];
                  plVar26 = plVar39;
                  if ((long *)plVar39[1] == (long *)0x0) {
                    do {
                      plVar19 = (long *)plVar26[2];
                      bVar10 = (long *)*plVar19 != plVar26;
                      plVar26 = plVar19;
                    } while (bVar10);
                  }
                  else {
                    do {
                      plVar19 = plVar23;
                      plVar23 = (long *)*plVar19;
                    } while ((long *)*plVar19 != (long *)0x0);
                  }
                  if (*(long **)(param_1 + 0x80) == plVar39) {
                    *(long **)(param_1 + 0x80) = plVar19;
                  }
                  *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + -1;
                  FUN_10a04815c(plVar14,plVar39);
                  __ZdlPv(plVar39);
                }
              }
              ppppppppuVar16 = (undefined ********)0x38;
              __Znwm();
              ppppppppuVar38 = ppppppppuStack_130;
              ppppppppuVar16[1] = (undefined *******)0x0;
              ppppppppuVar16[2] = (undefined *******)0x0;
              *ppppppppuVar16 = (undefined *******)&PTR_DAT_110ba74d8;
              uVar2 = *puVar36;
              ppppppppuVar16[4] = (undefined *******)0x0;
              ppppppppuVar16[5] = (undefined *******)0x0;
              ppppppppuStack_160 = ppppppppuVar16 + 3;
              *ppppppppuStack_160 = (undefined *******)&PTR_FUN_110ba67e8;
              *(uint *)(ppppppppuVar16 + 6) = uVar2;
              ppppppppuVar12 = ppppppppuStack_138;
              ppppppppuStack_158 = ppppppppuVar16;
              if (ppppppppuStack_138 != ppppppppuStack_130) {
                do {
                  pppppppuVar13 = (undefined *******)0x8;
                  ppppppuVar40 = (*ppppppppuVar12)[5];
                  pppppppuStack_f8 = (undefined *******)0x0;
                  pppppppuStack_100 = (undefined *******)0x0;
                  lStack_e8 = 0;
                  ppppppppuStack_f0 = (undefined ********)0x0;
                  ppppppppuStack_e0 =
                       (undefined ********)
                       CONCAT44(ppppppppuStack_e0._4_4_,*(undefined4 *)(ppppppuVar40 + 7));
                  ppppppppuVar16 = (undefined ********)ppppppuVar40[4];
                  FUN_10a1430c8(&pppppppuStack_100);
                  pppppppuVar43 = pppppppuStack_f8;
                  for (pppppuVar41 = ppppppuVar40[5]; pppppppuStack_f8 = pppppppuVar43,
                      ppppppppuVar17 = ppppppppuStack_f0, pppppuVar41 != (undefined *****)0x0;
                      pppppuVar41 = (undefined *****)*pppppuVar41) {
                    pppppuVar20 = (undefined *****)pppppuVar41[2];
                    uVar27 = ((ulong)(uint)((int)pppppuVar20 << 3) + 8 ^ (ulong)pppppuVar20 >> 0x20)
                             * -0x622015f714c7d297;
                    uVar27 = ((ulong)pppppuVar20 >> 0x20 ^ uVar27 >> 0x2f ^ uVar27) *
                             -0x622015f714c7d297;
                    pppppppuVar35 =
                         (undefined *******)((uVar27 ^ uVar27 >> 0x2f) * -0x622015f714c7d297);
                    if (pppppppuVar43 != (undefined *******)0x0) {
                      uVar27 = (long)pppppppuVar43 - 1;
                      if (((ulong)pppppppuVar43 & uVar27) == 0) {
                        pppppppuVar13 = (undefined *******)((ulong)pppppppuVar35 & uVar27);
                      }
                      else {
                        pppppppuVar13 = pppppppuVar35;
                        if (pppppppuVar43 <= pppppppuVar35) {
                          uVar25 = 0;
                          if (pppppppuVar43 != (undefined *******)0x0) {
                            uVar25 = (ulong)pppppppuVar35 / (ulong)pppppppuVar43;
                          }
                          pppppppuVar13 =
                               (undefined *******)
                               ((long)pppppppuVar35 - uVar25 * (long)pppppppuVar43);
                        }
                      }
                      ppppppuVar28 = pppppppuStack_100[(long)pppppppuVar13];
                      if (ppppppuVar28 != (undefined ******)0x0) {
                        do {
                          while( true ) {
                            ppppppuVar28 = (undefined ******)*ppppppuVar28;
                            if (ppppppuVar28 == (undefined ******)0x0) goto LAB_10a1161d0;
                            pppppppuVar29 = (undefined *******)ppppppuVar28[1];
                            if (pppppppuVar29 != pppppppuVar35) break;
                            if (ppppppuVar28[2] == pppppuVar20) goto LAB_10a116330;
                          }
                          if (((ulong)pppppppuVar43 & uVar27) == 0) {
                            pppppppuVar29 = (undefined *******)((ulong)pppppppuVar29 & uVar27);
                          }
                          else if (pppppppuVar43 <= pppppppuVar29) {
                            uVar25 = 0;
                            if (pppppppuVar43 != (undefined *******)0x0) {
                              uVar25 = (ulong)pppppppuVar29 / (ulong)pppppppuVar43;
                            }
                            pppppppuVar29 =
                                 (undefined *******)
                                 ((long)pppppppuVar29 - uVar25 * (long)pppppppuVar43);
                          }
                        } while (pppppppuVar29 == pppppppuVar13);
                      }
                    }
LAB_10a1161d0:
                    ppppppppuVar17 = (undefined ********)0x68;
                    __Znwm();
                    *ppppppppuVar17 = (undefined *******)0x0;
                    ppppppppuVar17[1] = pppppppuVar35;
                    ppppuVar32 = pppppuVar41[3];
                    pppppppuVar29 = (undefined *******)pppppuVar41[2];
                    ppppppppuVar17[3] = (undefined *******)pppppuVar41[3];
                    ppppppppuVar17[2] = pppppppuVar29;
                    if (ppppuVar32 != (undefined ****)0x0) {
                      ppppuVar32 = ppppuVar32 + 1;
                      do {
                        cVar5 = '\x01';
                        bVar10 = (bool)ExclusiveMonitorPass(ppppuVar32,0x10);
                        if (bVar10) {
                          *ppppuVar32 = (undefined ***)((long)*ppppuVar32 + 1);
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                    }
                    ppppppppuStack_c0 = ppppppppuVar17 + 4;
                    *(undefined1 *)(ppppppppuVar17 + 0xc) = 3;
                    if (*(char *)(pppppuVar41 + 0xc) == '\0') {
                      uVar18 = 0;
                    }
                    else {
                      ppppppppuVar16 = (undefined ********)(pppppuVar41 + 4);
                      FUN_10a005398(&ppppppppuStack_c0);
                      uVar18 = *(undefined1 *)(pppppuVar41 + 0xc);
                    }
                    *(undefined1 *)(ppppppppuVar17 + 0xc) = uVar18;
                    if ((pppppppuVar43 == (undefined *******)0x0) ||
                       (ppppppppuStack_e0._0_4_ * (float)pppppppuVar43 < (float)(lStack_e8 + 1))) {
                      uVar27 = 1;
                      if ((undefined *******)0x2 < pppppppuVar43) {
                        uVar27 = (ulong)(((ulong)pppppppuVar43 & (long)pppppppuVar43 - 1U) != 0);
                      }
                      ppppppppuVar16 = (undefined ********)(uVar27 | (long)pppppppuVar43 << 1);
                      ppppppppuVar24 =
                           (undefined ********)
                           (long)((float)(lStack_e8 + 1) / ppppppppuStack_e0._0_4_);
                      if (ppppppppuVar16 <= ppppppppuVar24) {
                        ppppppppuVar16 = ppppppppuVar24;
                      }
                      FUN_10a1430c8(&pppppppuStack_100);
                      pppppppuVar43 = pppppppuStack_f8;
                      if (((ulong)pppppppuStack_f8 & (long)pppppppuStack_f8 - 1U) == 0) {
                        pppppppuVar13 =
                             (undefined *******)((long)pppppppuStack_f8 - 1U & (ulong)pppppppuVar35)
                        ;
                      }
                      else {
                        pppppppuVar13 = pppppppuVar35;
                        if (pppppppuStack_f8 <= pppppppuVar35) {
                          uVar27 = 0;
                          if (pppppppuStack_f8 != (undefined *******)0x0) {
                            uVar27 = (ulong)pppppppuVar35 / (ulong)pppppppuStack_f8;
                          }
                          pppppppuVar13 =
                               (undefined *******)
                               ((long)pppppppuVar35 - uVar27 * (long)pppppppuStack_f8);
                        }
                      }
                    }
                    ppppppuVar28 = pppppppuStack_100[(long)pppppppuVar13];
                    if (ppppppuVar28 == (undefined ******)0x0) {
                      *ppppppppuVar17 = (undefined *******)ppppppppuStack_f0;
                      pppppppuStack_100[(long)pppppppuVar13] = (undefined ******)&ppppppppuStack_f0;
                      ppppppppuStack_f0 = ppppppppuVar17;
                      if (*ppppppppuVar17 != (undefined *******)0x0) {
                        pppppppuVar35 = (undefined *******)(*ppppppppuVar17)[1];
                        if (((ulong)pppppppuVar43 & (long)pppppppuVar43 - 1U) == 0) {
                          pppppppuVar35 =
                               (undefined *******)((ulong)pppppppuVar35 & (long)pppppppuVar43 - 1U);
                        }
                        else if (pppppppuVar43 <= pppppppuVar35) {
                          uVar27 = 0;
                          if (pppppppuVar43 != (undefined *******)0x0) {
                            uVar27 = (ulong)pppppppuVar35 / (ulong)pppppppuVar43;
                          }
                          pppppppuVar35 =
                               (undefined *******)
                               ((long)pppppppuVar35 - uVar27 * (long)pppppppuVar43);
                        }
                        pppppppuStack_100[(long)pppppppuVar35] = (undefined ******)ppppppppuVar17;
                      }
                    }
                    else {
                      *ppppppppuVar17 = (undefined *******)*ppppppuVar28;
                      *ppppppuVar28 = (undefined *****)ppppppppuVar17;
                    }
                    lStack_e8 = lStack_e8 + 1;
LAB_10a116330:
                    pppppppuVar43 = pppppppuStack_f8;
                  }
                  for (; ppppppppuVar17 != (undefined ********)0x0;
                      ppppppppuVar17 = (undefined ********)*ppppppppuVar17) {
                    pppppuVar41 = ppppppuVar40[4];
                    ppppppppuVar24 = ppppppppuVar16;
                    if (pppppuVar41 != (undefined *****)0x0) {
                      pppppppuVar13 = ppppppppuVar17[2];
                      uVar27 = ((ulong)(uint)((int)pppppppuVar13 << 3) + 8 ^
                               (ulong)pppppppuVar13 >> 0x20) * -0x622015f714c7d297;
                      uVar27 = ((ulong)pppppppuVar13 >> 0x20 ^ uVar27 >> 0x2f ^ uVar27) *
                               -0x622015f714c7d297;
                      pppppuVar20 = (undefined *****)
                                    ((uVar27 ^ uVar27 >> 0x2f) * -0x622015f714c7d297);
                      puVar30 = (undefined *)((long)pppppuVar41 + -1);
                      if (((ulong)pppppuVar41 & (ulong)puVar30) == 0) {
                        pppppuVar31 = (undefined *****)((ulong)pppppuVar20 & (ulong)puVar30);
                      }
                      else {
                        pppppuVar31 = pppppuVar20;
                        if (pppppuVar41 <= pppppuVar20) {
                          uVar27 = 0;
                          if (pppppuVar41 != (undefined *****)0x0) {
                            uVar27 = (ulong)pppppuVar20 / (ulong)pppppuVar41;
                          }
                          pppppuVar31 = (undefined *****)
                                        ((long)pppppuVar20 - uVar27 * (long)pppppuVar41);
                        }
                      }
                      ppppuVar32 = ppppppuVar40[3][(long)pppppuVar31];
                      if (ppppuVar32 != (undefined ****)0x0) {
LAB_10a1163ac:
                        while (ppppuVar32 = (undefined ****)*ppppuVar32,
                              ppppuVar32 != (undefined ****)0x0) {
                          pppppuVar33 = (undefined *****)ppppuVar32[1];
                          if (pppppuVar33 != pppppuVar20) goto LAB_10a1163d0;
                          if ((undefined *******)ppppuVar32[2] == pppppppuVar13) {
                            if (*(char *)(ppppppppuVar17 + 0xc) == '\x01') {
                              pppppppuVar13 = ppppppppuVar17[4];
                              if (ppppppppuStack_158 != (undefined ********)0x0) {
                                ppppppppuVar16 = ppppppppuStack_158 + 1;
                                do {
                                  cVar5 = '\x01';
                                  bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar16,0x10);
                                  if (bVar10) {
                                    *ppppppppuVar16 = (undefined *******)((long)*ppppppppuVar16 + 1)
                                    ;
                                    cVar5 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar5 != '\0');
                              }
                              ppppppppuVar24 = ppppppppuVar17 + 4;
                              ppppppppuStack_c0 = ppppppppuStack_160;
                              ppppppppuStack_b8 = ppppppppuStack_158;
                              (*(code *)pppppppuVar13)(&ppppppppuStack_c0);
                              if (ppppppppuStack_b8 != (undefined ********)0x0) {
                                ppppppppuVar16 = ppppppppuStack_b8 + 1;
                                do {
                                  pppppppuVar13 = *ppppppppuVar16;
                                  cVar5 = '\x01';
                                  bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar16,0x10);
                                  if (bVar10) {
                                    *ppppppppuVar16 = (undefined *******)((long)pppppppuVar13 + -1);
                                    cVar5 = ExclusiveMonitorsStatus();
                                  }
                                  ppppppppuVar15 = ppppppppuStack_b8;
                                } while (cVar5 != '\0');
                                goto LAB_10a1164a0;
                              }
                            }
                            else if (*(char *)(ppppppppuVar17 + 0xc) == '\x02') {
                              ppppppppuVar15 = ppppppppuVar17 + 4;
                              FUN_10a688b40();
                              ppppppppuVar7 = ppppppppuStack_158;
                              if (ppppppppuVar15 == (undefined ********)0x0) {
                                ppppppppuVar24 = (undefined ********)0x0;
                                if (ppppppppuVar16 != (undefined ********)0x0) {
                                  ppppppppuStack_b0 = (undefined ********)ppppppppuVar17[4];
                                  ppppppppuStack_a8 = (undefined ********)ppppppppuVar17[5];
                                  if (ppppppppuStack_a8 != (undefined ********)0x0) {
                                    ppppppppuVar24 = ppppppppuStack_a8 + 1;
                                    do {
                                      cVar5 = '\x01';
                                      bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar24,0x10);
                                      if (bVar10) {
                                        *ppppppppuVar24 =
                                             (undefined *******)((long)*ppppppppuVar24 + 1);
                                        cVar5 = ExclusiveMonitorsStatus();
                                      }
                                    } while (cVar5 != '\0');
                                  }
                                  ppppppppuStack_110 = ppppppppuStack_160;
                                  ppppppppuStack_108 = ppppppppuStack_158;
                                  if (ppppppppuStack_158 == (undefined ********)0x0) {
                                    ppppppppuStack_98 = (undefined ********)0x0;
                                  }
                                  else {
                                    ppppppppuVar24 = ppppppppuStack_158 + 1;
                                    do {
                                      cVar5 = '\x01';
                                      bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar24,0x10);
                                      if (bVar10) {
                                        *ppppppppuVar24 =
                                             (undefined *******)((long)*ppppppppuVar24 + 1);
                                        cVar5 = ExclusiveMonitorsStatus();
                                      }
                                    } while (cVar5 != '\0');
                                    ppppppppuStack_98 = ppppppppuStack_158;
                                    do {
                                      cVar5 = '\x01';
                                      bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar24,0x10);
                                      if (bVar10) {
                                        *ppppppppuVar24 =
                                             (undefined *******)((long)*ppppppppuVar24 + 1);
                                        cVar5 = ExclusiveMonitorsStatus();
                                      }
                                    } while (cVar5 != '\0');
                                  }
                                  ppppppppuStack_a0 = ppppppppuStack_160;
                                  ppppppppuStack_b8 = (undefined ********)&PTR_FUN_110ba7518;
                                  ppppppppuStack_118 = (undefined ********)0x0;
                                  ppppppppuStack_120 = (undefined ********)0x0;
                                  ppppppppuStack_c0 = (undefined ********)FUN_10a143d00;
                                  ppppppppuVar24 = (undefined ********)&ppppppppuStack_c0;
                                  FUN_10a4634ec(ppppppppuVar16);
                                  (*(code *)*ppppppppuStack_b8)(&ppppppppuStack_b8);
                                  if (ppppppppuVar7 != (undefined ********)0x0) {
                                    ppppppppuVar16 = ppppppppuVar7 + 1;
                                    do {
                                      pppppppuVar13 = *ppppppppuVar16;
                                      cVar5 = '\x01';
                                      bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar16,0x10);
                                      if (bVar10) {
                                        *ppppppppuVar16 =
                                             (undefined *******)((long)pppppppuVar13 + -1);
                                        cVar5 = ExclusiveMonitorsStatus();
                                      }
                                    } while (cVar5 != '\0');
                                    if (pppppppuVar13 == (undefined *******)0x0) {
                                      (*(code *)(*ppppppppuVar7)[2])(ppppppppuVar7);
                                      __ZNSt3__119__shared_weak_count14__release_weakEv
                                                (ppppppppuVar7);
                                    }
                                  }
                                  if (ppppppppuStack_118 != (undefined ********)0x0) {
                                    ppppppppuVar16 = ppppppppuStack_118 + 1;
                                    do {
                                      pppppppuVar13 = *ppppppppuVar16;
                                      cVar5 = '\x01';
                                      bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar16,0x10);
                                      if (bVar10) {
                                        *ppppppppuVar16 =
                                             (undefined *******)((long)pppppppuVar13 + -1);
                                        cVar5 = ExclusiveMonitorsStatus();
                                      }
                                      ppppppppuVar15 = ppppppppuStack_118;
                                    } while (cVar5 != '\0');
LAB_10a1164a0:
                                    if (pppppppuVar13 == (undefined *******)0x0) {
                                      (*(code *)(*ppppppppuVar15)[2])(ppppppppuVar15);
                                      __ZNSt3__119__shared_weak_count14__release_weakEv
                                                (ppppppppuVar15);
                                    }
                                  }
                                }
                              }
                              else {
                                *ppppppppuVar15 =
                                     (undefined *******)
                                     CONCAT44((int)((ulong)*ppppppppuVar15 >> 0x20) + 1,
                                              (int)*ppppppppuVar15 + 1);
                                ppppppppuVar24 = (undefined ********)&ppppppppuStack_160;
                                FUN_10a143afc(ppppppppuVar17[4]);
                                iVar6 = *(int *)((long)ppppppppuVar15 + 4) + -1;
                                *(int *)((long)ppppppppuVar15 + 4) = iVar6;
                                if (iVar6 == 0) {
                                  *(undefined4 *)ppppppppuVar15 = 0;
                                }
                              }
                            }
                            break;
                          }
                        }
                      }
                    }
LAB_10a1165c4:
                    ppppppppuVar16 = ppppppppuVar24;
                  }
                  func_0x00010a143588(&pppppppuStack_100);
                  ppppppppuVar12 = ppppppppuVar12 + 2;
                } while (ppppppppuVar12 != ppppppppuVar38);
                if (ppppppppuStack_158 == (undefined ********)0x0) goto LAB_10a116bbc;
              }
              ppppppppuVar12 = ppppppppuStack_158 + 1;
              do {
                pppppppuVar13 = *ppppppppuVar12;
                cVar5 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar12,0x10);
                if (bVar10) {
                  *ppppppppuVar12 = (undefined *******)((long)pppppppuVar13 + -1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
LAB_10a116ba0:
              ppppppppuVar12 = ppppppppuStack_158;
              if (pppppppuVar13 == (undefined *******)0x0) {
                (*(code *)(*ppppppppuStack_158)[2])(ppppppppuStack_158);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppppuVar12);
              }
            }
LAB_10a116bbc:
            pcVar45 = pcVar45 + 0x30;
          } while (pcVar45 != pcVar8);
        }
        ppppppppuStack_120 = (undefined ********)0x0;
        ppppppppuStack_118 = (undefined ********)0x0;
        ppppppppuStack_110 = (undefined ********)0x0;
        (**(code **)(**(long **)(param_1 + 0x38) + 0x20))
                  (*(long **)(param_1 + 0x38),&ppppppppuStack_120);
        ppppppppuVar38 = ppppppppuStack_118;
        ppppppppuStack_b8 = (undefined ********)0x0;
        ppppppppuStack_a0 = (undefined ********)0x0;
        ppppppppuStack_98 = (undefined ********)0x0;
        ppppppppuStack_b0 = (undefined ********)0x0;
        ppppppppuStack_c0 = (undefined ********)&ppppppppuStack_b8;
        ppppppppuVar12 = (undefined ********)&ppppppppuStack_a0;
        ppppppppuStack_a8 = (undefined ********)&ppppppppuStack_a0;
        if (ppppppppuStack_120 != ppppppppuStack_118) {
          ppppppppuVar12 = ppppppppuStack_120;
          do {
            lVar44 = param_1 + 0x58;
            func_0x000107272170(lVar44,ppppppppuVar12);
            if (lVar44 != 0) {
              uStack_c4 = *(undefined4 *)ppppppppuVar12;
              pppppppuStack_d0 = ppppppppuVar12[1];
              pppppppuStack_100 = (undefined *******)&uStack_c4;
              pppppppuStack_f8 = (undefined *******)&pppppppuStack_d0;
              ppppppppuStack_f0 = (undefined ********)&ppppppppuStack_138;
              lStack_e8 = param_1;
              ppppppppuStack_e0 = (undefined ********)&ppppppppuStack_c0;
              if (*(uint *)(ppppppppuVar12 + 5) == 0xffffffff) {
                FUN_10a0d459c();
                goto LAB_10a116ed0;
              }
              ppppppppuStack_160 = &pppppppuStack_100;
              (*(code *)(&PTR_FUN_110ba6d50)[*(uint *)(ppppppppuVar12 + 5)])
                        (&ppppppppuStack_160,ppppppppuVar12 + 2);
            }
            ppppppppuVar12 = ppppppppuVar12 + 6;
            ppppppppuVar16 = ppppppppuStack_c0;
          } while (ppppppppuVar12 != ppppppppuVar38);
          while (ppppppppuVar12 = ppppppppuStack_a8,
                (undefined *********)ppppppppuVar16 != &ppppppppuStack_b8) {
            if (*(char *)(ppppppppuVar16 + 6) == '\x01') {
              uVar1 = *(undefined4 *)(ppppppppuVar16 + 4);
              pppppppuVar13 = ppppppppuVar16[5];
              lVar44 = param_1 + 0x80;
              FUN_10a143d78(lVar44,uVar1);
              FUN_10a1170c4(*(undefined4 *)(lVar44 + 0x20),*(undefined4 *)(lVar44 + 0x24),uVar1,
                            pppppppuVar13,0,ppppppppuStack_138,ppppppppuStack_130);
            }
            ppppppppuVar12 = (undefined ********)ppppppppuVar16[1];
            ppppppppuVar38 = ppppppppuVar16;
            if ((undefined ********)ppppppppuVar16[1] == (undefined ********)0x0) {
              do {
                ppppppppuVar16 = (undefined ********)ppppppppuVar38[2];
                bVar10 = (undefined ********)*ppppppppuVar16 != ppppppppuVar38;
                ppppppppuVar38 = ppppppppuVar16;
              } while (bVar10);
            }
            else {
              do {
                ppppppppuVar16 = ppppppppuVar12;
                ppppppppuVar12 = (undefined ********)*ppppppppuVar16;
              } while ((undefined ********)*ppppppppuVar16 != (undefined ********)0x0);
            }
          }
        }
        while ((undefined *********)ppppppppuVar12 != &ppppppppuStack_a0) {
          if (*(char *)(ppppppppuVar12 + 6) == '\x01') {
            uVar1 = *(undefined4 *)(ppppppppuVar12 + 4);
            pppppppuVar13 = ppppppppuVar12[5];
            lVar44 = param_1 + 0x80;
            FUN_10a143d78(lVar44,uVar1);
            FUN_10a1170c4(*(undefined4 *)(lVar44 + 0x28),*(undefined4 *)(lVar44 + 0x2c),uVar1,
                          pppppppuVar13,1,ppppppppuStack_138,ppppppppuStack_130);
          }
          ppppppppuVar38 = (undefined ********)ppppppppuVar12[1];
          ppppppppuVar16 = ppppppppuVar12;
          if ((undefined ********)ppppppppuVar12[1] == (undefined ********)0x0) {
            do {
              ppppppppuVar12 = (undefined ********)ppppppppuVar16[2];
              bVar10 = (undefined ********)*ppppppppuVar12 != ppppppppuVar16;
              ppppppppuVar16 = ppppppppuVar12;
            } while (bVar10);
          }
          else {
            do {
              ppppppppuVar12 = ppppppppuVar38;
              ppppppppuVar38 = (undefined ********)*ppppppppuVar12;
            } while ((undefined ********)*ppppppppuVar12 != (undefined ********)0x0);
          }
        }
        func_0x00010a12e778(ppppppppuStack_a0);
        func_0x00010a12e778(ppppppppuStack_b8);
        FUN_10a12e7b0(&ppppppppuStack_120);
        FUN_10a12e878(&pcStack_150);
      }
      FUN_10a12e8e8(&ppppppppuStack_138);
      goto LAB_10a116db4;
    }
    ppppppppuVar12 = (undefined ********)((long)puVar34 - (long)puVar37 >> 4);
    if ((ulong)ppppppppuVar12 >> 0x3c == 0) {
      ppppppppuStack_a0 = (undefined ********)&ppppppppuStack_138;
      FUN_10a12e13c();
      lVar44 = (long)param_2 * 2;
      ppppppppuVar38 =
           (undefined ********)
           ((long)ppppppppuVar12 - ((long)ppppppppuStack_130 - (long)ppppppppuStack_138));
      param_2 = ppppppppuStack_138;
      _memcpy(ppppppppuVar38);
      ppppppppuStack_b0 = ppppppppuStack_138;
      ppppppppuStack_a8 = ppppppppuStack_128;
      ppppppppuStack_c0 = ppppppppuStack_138;
      ppppppppuStack_b8 = ppppppppuStack_138;
      ppppppppuStack_138 = ppppppppuVar38;
      ppppppppuStack_130 = ppppppppuVar12;
      ppppppppuStack_128 = ppppppppuVar12 + lVar44;
      func_0x00010a12e170(&ppppppppuStack_c0);
      puVar37 = *(undefined8 **)(param_1 + 0x40);
      puVar34 = *(undefined8 **)(param_1 + 0x48);
      goto LAB_10a115e04;
    }
  }
  FUN_10a12e128();
LAB_10a116ed0:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a116ed4);
  (*pcVar9)();
LAB_10a1163d0:
  if (((ulong)pppppuVar41 & (ulong)puVar30) == 0) {
    pppppuVar33 = (undefined *****)((ulong)pppppuVar33 & (ulong)puVar30);
  }
  else if (pppppuVar41 <= pppppuVar33) {
    uVar27 = 0;
    if (pppppuVar41 != (undefined *****)0x0) {
      uVar27 = (ulong)pppppuVar33 / (ulong)pppppuVar41;
    }
    pppppuVar33 = (undefined *****)((long)pppppuVar33 - uVar27 * (long)pppppuVar41);
  }
  if (pppppuVar33 != pppppuVar31) goto LAB_10a1165c4;
  goto LAB_10a1163ac;
LAB_10a116970:
  if (((ulong)pppppuVar41 & (ulong)puVar30) == 0) {
    pppppuVar33 = (undefined *****)((ulong)pppppuVar33 & (ulong)puVar30);
  }
  else if (pppppuVar41 <= pppppuVar33) {
    uVar27 = 0;
    if (pppppuVar41 != (undefined *****)0x0) {
      uVar27 = (ulong)pppppuVar33 / (ulong)pppppuVar41;
    }
    pppppuVar33 = (undefined *****)((long)pppppuVar33 - uVar27 * (long)pppppuVar41);
  }
  if (pppppuVar33 != pppppuVar31) goto LAB_10a116b64;
  goto LAB_10a11694c;
}



/* Entry: 10a1170c4; end: 10a117797;  */

void FUN_10a1170c4(undefined8 param_1,undefined8 param_2,undefined ***param_3,undefined ***param_4,
                  ulong param_5,long *param_6,long *param_7)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined1 uVar8;
  undefined *puVar9;
  long lVar10;
  code *pcVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  ulong uVar17;
  long *plVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  ulong uVar21;
  undefined **ppuVar22;
  undefined *puVar23;
  undefined **ppuVar24;
  undefined *puVar25;
  undefined8 *puVar26;
  undefined **ppuVar27;
  undefined *puVar28;
  long **unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  ulong unaff_x28;
  undefined **ppuVar29;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined4 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  long *plStack_268;
  undefined1 **ppuStack_260;
  code *pcStack_258;
  undefined ***pppuStack_248;
  long lStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  long lStack_228;
  float fStack_220;
  undefined8 uStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  long lStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long **pplStack_178;
  undefined ***pppuStack_170;
  undefined ***pppuStack_168;
  ulong uStack_160;
  undefined **ppuStack_158;
  long *plStack_150;
  undefined **ppuStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  ulong uStack_108;
  long *plStack_100;
  long lStack_f8;
  float fStack_f0;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = (undefined **)0x50;
  pppuVar6 = param_4;
  __Znwm();
  ppuVar5[1] = (undefined *)0x0;
  ppuVar5[2] = (undefined *)0x0;
  *ppuVar5 = (undefined *)&PTR_FUN_110ba6cd8;
  ppuVar5[4] = (undefined *)0x0;
  ppuVar5[5] = (undefined *)0x0;
  ppuStack_120 = ppuVar5 + 3;
  *ppuStack_120 = (undefined *)&PTR_FUN_110ba6938;
  *(int *)(ppuVar5 + 6) = (int)param_3;
  ppuVar5[7] = (undefined *)param_4;
  *(char *)(ppuVar5 + 8) = (char)param_5;
  *(int *)((long)ppuVar5 + 0x44) = (int)param_1;
  *(int *)(ppuVar5 + 9) = (int)param_2;
  plStack_128 = param_7;
  ppuStack_118 = ppuVar5;
  if (param_6 != param_7) {
    param_3 = (undefined ***)0x9ddfea08eb382d69;
    unaff_x25 = &plStack_100;
    param_2 = 0x100000001;
    unaff_x27 = 3;
    do {
      param_4 = *(undefined ****)(*param_6 + 0x58);
      uStack_108 = 0;
      puStack_110 = (undefined *)0x0;
      lStack_f8 = 0;
      plStack_100 = (long *)0x0;
      fStack_f0 = *(float *)(param_4 + 7);
      pppuVar6 = (undefined ***)param_4[4];
      FUN_10a12e204(&puStack_110);
      uVar14 = uStack_108;
      for (ppuVar5 = param_4[5]; uStack_108 = uVar14, plVar18 = plStack_100,
          ppuVar5 != (undefined **)0x0; ppuVar5 = (undefined **)*ppuVar5) {
        puVar9 = ppuVar5[2];
        uVar17 = ((ulong)(uint)((int)puVar9 << 3) + 8 ^ (ulong)puVar9 >> 0x20) * -0x622015f714c7d297
        ;
        uVar17 = ((ulong)puVar9 >> 0x20 ^ uVar17 >> 0x2f ^ uVar17) * -0x622015f714c7d297;
        uVar17 = (uVar17 ^ uVar17 >> 0x2f) * -0x622015f714c7d297;
        if (uVar14 != 0) {
          uVar12 = uVar14 - 1;
          if ((uVar14 & uVar12) == 0) {
            unaff_x28 = uVar17 & uVar12;
          }
          else {
            unaff_x28 = uVar17;
            if (uVar14 <= uVar17) {
              uVar21 = 0;
              if (uVar14 != 0) {
                uVar21 = uVar17 / uVar14;
              }
              unaff_x28 = uVar17 - uVar21 * uVar14;
            }
          }
          plVar18 = *(long **)(puStack_110 + unaff_x28 * 8);
          if (plVar18 != (long *)0x0) {
            do {
              while( true ) {
                plVar18 = (long *)*plVar18;
                if (plVar18 == (long *)0x0) goto LAB_10a117260;
                uVar21 = plVar18[1];
                if (uVar21 != uVar17) break;
                if ((undefined *)plVar18[2] == puVar9) goto LAB_10a1173c0;
              }
              if ((uVar14 & uVar12) == 0) {
                uVar21 = uVar21 & uVar12;
              }
              else if (uVar14 <= uVar21) {
                uVar4 = 0;
                if (uVar14 != 0) {
                  uVar4 = uVar21 / uVar14;
                }
                uVar21 = uVar21 - uVar4 * uVar14;
              }
            } while (uVar21 == unaff_x28);
          }
        }
LAB_10a117260:
        plVar18 = (long *)0x68;
        __Znwm();
        *plVar18 = 0;
        plVar18[1] = uVar17;
        puVar9 = ppuVar5[3];
        puVar16 = ppuVar5[2];
        plVar18[3] = (long)ppuVar5[3];
        plVar18[2] = (long)puVar16;
        if (puVar9 != (undefined *)0x0) {
          plVar13 = (long *)(puVar9 + 8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar2) {
              *plVar13 = *plVar13 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        ppuStack_c0 = (undefined **)(plVar18 + 4);
        *(undefined1 *)(plVar18 + 0xc) = 3;
        if (*(char *)(ppuVar5 + 0xc) == '\0') {
          uVar8 = 0;
        }
        else {
          pppuVar6 = (undefined ***)(ppuVar5 + 4);
          FUN_10a005398(&ppuStack_c0);
          uVar8 = *(undefined1 *)(ppuVar5 + 0xc);
        }
        *(undefined1 *)(plVar18 + 0xc) = uVar8;
        if ((uVar14 == 0) || (fStack_f0 * (float)uVar14 < (float)(lStack_f8 + 1))) {
          uVar12 = 1;
          if (2 < uVar14) {
            uVar12 = (ulong)((uVar14 & uVar14 - 1) != 0);
          }
          pppuVar6 = (undefined ***)(uVar12 | uVar14 << 1);
          pppuVar7 = (undefined ***)(long)((float)(lStack_f8 + 1) / fStack_f0);
          if (pppuVar6 <= pppuVar7) {
            pppuVar6 = pppuVar7;
          }
          FUN_10a12e204(&puStack_110);
          uVar14 = uStack_108;
          if ((uStack_108 & uStack_108 - 1) == 0) {
            unaff_x28 = uStack_108 - 1 & uVar17;
          }
          else {
            unaff_x28 = uVar17;
            if (uStack_108 <= uVar17) {
              uVar12 = 0;
              if (uStack_108 != 0) {
                uVar12 = uVar17 / uStack_108;
              }
              unaff_x28 = uVar17 - uVar12 * uStack_108;
            }
          }
        }
        plVar13 = *(long **)(puStack_110 + unaff_x28 * 8);
        if (plVar13 == (long *)0x0) {
          *plVar18 = (long)plStack_100;
          *(long ***)(puStack_110 + unaff_x28 * 8) = unaff_x25;
          plStack_100 = plVar18;
          if (*plVar18 != 0) {
            uVar17 = *(ulong *)(*plVar18 + 8);
            if ((uVar14 & uVar14 - 1) == 0) {
              uVar17 = uVar17 & uVar14 - 1;
            }
            else if (uVar14 <= uVar17) {
              uVar12 = 0;
              if (uVar14 != 0) {
                uVar12 = uVar17 / uVar14;
              }
              uVar17 = uVar17 - uVar12 * uVar14;
            }
            *(long **)(puStack_110 + uVar17 * 8) = plVar18;
          }
        }
        else {
          *plVar18 = *plVar13;
          *plVar13 = (long)plVar18;
        }
        lStack_f8 = lStack_f8 + 1;
LAB_10a1173c0:
        param_5 = uVar14;
        uVar14 = uStack_108;
      }
      for (; plVar18 != (long *)0x0; plVar18 = (long *)*plVar18) {
        ppuVar5 = param_4[4];
        pppuVar7 = pppuVar6;
        if (ppuVar5 != (undefined **)0x0) {
          uVar14 = plVar18[2];
          uVar17 = ((ulong)(uint)((int)uVar14 << 3) + 8 ^ uVar14 >> 0x20) * -0x622015f714c7d297;
          uVar17 = (uVar14 >> 0x20 ^ uVar17 >> 0x2f ^ uVar17) * -0x622015f714c7d297;
          ppuVar19 = (undefined **)((uVar17 ^ uVar17 >> 0x2f) * -0x622015f714c7d297);
          uVar17 = (long)ppuVar5 - 1;
          if (((ulong)ppuVar5 & uVar17) == 0) {
            ppuVar24 = (undefined **)((ulong)ppuVar19 & uVar17);
          }
          else {
            ppuVar24 = ppuVar19;
            if (ppuVar5 <= ppuVar19) {
              uVar12 = 0;
              if (ppuVar5 != (undefined **)0x0) {
                uVar12 = (ulong)ppuVar19 / (ulong)ppuVar5;
              }
              ppuVar24 = (undefined **)((long)ppuVar19 - uVar12 * (long)ppuVar5);
            }
          }
          puVar26 = (undefined8 *)param_4[3][(long)ppuVar24];
          if (puVar26 != (undefined8 *)0x0) {
LAB_10a117438:
            while (puVar26 = (undefined8 *)*puVar26, puVar26 != (undefined8 *)0x0) {
              ppuVar27 = (undefined **)puVar26[1];
              if (ppuVar27 != ppuVar19) goto LAB_10a11745c;
              if (puVar26[2] == uVar14) {
                if ((char)plVar18[0xc] == '\x01') {
                  pcVar11 = (code *)plVar18[4];
                  if (ppuStack_118 != (undefined **)0x0) {
                    ppuVar5 = ppuStack_118 + 1;
                    do {
                      cVar1 = '\x01';
                      bVar2 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
                      if (bVar2) {
                        *ppuVar5 = *ppuVar5 + 1;
                        cVar1 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar1 != '\0');
                  }
                  pppuVar7 = (undefined ***)(plVar18 + 4);
                  ppuStack_c0 = ppuStack_120;
                  ppuStack_b8 = ppuStack_118;
                  (*pcVar11)(&ppuStack_c0);
                  if (ppuStack_b8 != (undefined **)0x0) {
                    ppuVar5 = ppuStack_b8 + 1;
                    do {
                      puVar9 = *ppuVar5;
                      cVar1 = '\x01';
                      bVar2 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
                      if (bVar2) {
                        *ppuVar5 = puVar9 + -1;
                        cVar1 = ExclusiveMonitorsStatus();
                      }
                      ppuVar19 = ppuStack_b8;
                    } while (cVar1 != '\0');
                    goto LAB_10a11752c;
                  }
                }
                else if ((char)plVar18[0xc] == '\x02') {
                  plVar13 = plVar18 + 4;
                  FUN_10a688b40();
                  ppuVar5 = ppuStack_118;
                  if (plVar13 == (long *)0x0) {
                    pppuVar7 = (undefined ***)0x0;
                    if (pppuVar6 != (undefined ***)0x0) {
                      lStack_b0 = plVar18[4];
                      lStack_a8 = plVar18[5];
                      if (lStack_a8 != 0) {
                        plVar13 = (long *)(lStack_a8 + 8);
                        do {
                          cVar1 = '\x01';
                          bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                          if (bVar2) {
                            *plVar13 = *plVar13 + 1;
                            cVar1 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar1 != '\0');
                      }
                      ppuStack_d0 = ppuStack_120;
                      ppuStack_c8 = ppuStack_118;
                      if (ppuStack_118 == (undefined **)0x0) {
                        ppuStack_98 = (undefined **)0x0;
                      }
                      else {
                        ppuVar19 = ppuStack_118 + 1;
                        do {
                          cVar1 = '\x01';
                          bVar2 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
                          if (bVar2) {
                            *ppuVar19 = *ppuVar19 + 1;
                            cVar1 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar1 != '\0');
                        ppuStack_98 = ppuStack_118;
                        do {
                          cVar1 = '\x01';
                          bVar2 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
                          if (bVar2) {
                            *ppuVar19 = *ppuVar19 + 1;
                            cVar1 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar1 != '\0');
                      }
                      ppuStack_a0 = ppuStack_120;
                      ppuStack_b8 = &PTR_FUN_110ba6d18;
                      ppuStack_d8 = (undefined **)0x0;
                      uStack_e0 = 0;
                      ppuStack_c0 = (undefined **)FUN_10a12e6a8;
                      pppuVar7 = &ppuStack_c0;
                      FUN_10a4634ec(pppuVar6);
                      (*(code *)*ppuStack_b8)(&ppuStack_b8);
                      if (ppuVar5 != (undefined **)0x0) {
                        ppuVar19 = ppuVar5 + 1;
                        do {
                          puVar9 = *ppuVar19;
                          cVar1 = '\x01';
                          bVar2 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
                          if (bVar2) {
                            *ppuVar19 = puVar9 + -1;
                            cVar1 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar1 != '\0');
                        if (puVar9 == (undefined *)0x0) {
                          (**(code **)(*ppuVar5 + 0x10))(ppuVar5);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
                        }
                      }
                      if (ppuStack_d8 != (undefined **)0x0) {
                        ppuVar5 = ppuStack_d8 + 1;
                        do {
                          puVar9 = *ppuVar5;
                          cVar1 = '\x01';
                          bVar2 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
                          if (bVar2) {
                            *ppuVar5 = puVar9 + -1;
                            cVar1 = ExclusiveMonitorsStatus();
                          }
                          ppuVar19 = ppuStack_d8;
                        } while (cVar1 != '\0');
LAB_10a11752c:
                        if (puVar9 == (undefined *)0x0) {
                          (**(code **)(*ppuVar19 + 0x10))(ppuVar19);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar19);
                        }
                      }
                    }
                  }
                  else {
                    *plVar13 = CONCAT44((int)((ulong)*plVar13 >> 0x20) + 1,(int)*plVar13 + 1);
                    pppuVar7 = &ppuStack_120;
                    FUN_10a12e4a4(plVar18[4]);
                    iVar3 = *(int *)((long)plVar13 + 4) + -1;
                    *(int *)((long)plVar13 + 4) = iVar3;
                    if (iVar3 == 0) {
                      *(undefined4 *)plVar13 = 0;
                    }
                  }
                }
                break;
              }
            }
          }
        }
LAB_10a117650:
        pppuVar6 = pppuVar7;
      }
      unaff_x26 = 0;
      ppuVar5 = &puStack_110;
      FUN_10a12e424();
      param_6 = param_6 + 2;
    } while (param_6 != plStack_128);
    ppuVar19 = ppuStack_118;
    if (ppuStack_118 == (undefined **)0x0) goto LAB_10a1176b0;
  }
  ppuVar19 = ppuStack_118;
  ppuVar24 = ppuStack_118 + 1;
  do {
    puVar9 = *ppuVar24;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(ppuVar24,0x10);
    if (bVar2) {
      *ppuVar24 = puVar9 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (puVar9 == (undefined *)0x0) {
    (**(code **)(*ppuStack_118 + 0x10))(ppuStack_118);
    ppuVar5 = ppuVar19;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
LAB_10a1176b0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_b8)(&ppuStack_b8);
  FUN_10a12e720(&ppuStack_d0);
  func_0x00010a004dac(&uStack_e0);
  FUN_10a12e424(&puStack_110);
  FUN_10a12e720(&ppuStack_120);
  ppuVar24 = ppuVar5;
  __Unwind_Resume();
  pcStack_138 = FUN_10a117798;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_238 = (undefined **)0x0;
  lStack_240 = 0;
  lStack_228 = 0;
  ppuStack_230 = (undefined **)0x0;
  fStack_220 = *(float *)(ppuVar24 + 7);
  pppuVar7 = (undefined ***)ppuVar24[4];
  pppuStack_248 = pppuVar6;
  uStack_1a0 = param_1;
  uStack_198 = param_2;
  uStack_190 = unaff_x28;
  uStack_188 = unaff_x27;
  uStack_180 = unaff_x26;
  pplStack_178 = unaff_x25;
  pppuStack_170 = param_3;
  pppuStack_168 = param_4;
  uStack_160 = param_5;
  ppuStack_158 = ppuVar19;
  plStack_150 = param_6;
  ppuStack_148 = ppuVar5;
  puStack_140 = &stack0xfffffffffffffff0;
  FUN_10a1432e8(&lStack_240);
  puVar26 = (undefined8 *)ppuVar24[5];
  if (puVar26 != (undefined8 *)0x0) {
    param_3 = &ppuStack_230;
    do {
      ppuVar27 = ppuStack_238;
      uVar14 = puVar26[2];
      uVar17 = ((ulong)(uint)((int)uVar14 << 3) + 8 ^ uVar14 >> 0x20) * -0x622015f714c7d297;
      uVar17 = (uVar14 >> 0x20 ^ uVar17 >> 0x2f ^ uVar17) * -0x622015f714c7d297;
      ppuVar29 = (undefined **)((uVar17 ^ uVar17 >> 0x2f) * -0x622015f714c7d297);
      if (ppuStack_238 != (undefined **)0x0) {
        uVar17 = (long)ppuStack_238 - 1;
        if (((ulong)ppuStack_238 & uVar17) == 0) {
          ppuVar5 = (undefined **)((ulong)ppuVar29 & uVar17);
        }
        else {
          ppuVar5 = ppuVar29;
          if (ppuStack_238 <= ppuVar29) {
            uVar12 = 0;
            if (ppuStack_238 != (undefined **)0x0) {
              uVar12 = (ulong)ppuVar29 / (ulong)ppuStack_238;
            }
            ppuVar5 = (undefined **)((long)ppuVar29 - uVar12 * (long)ppuStack_238);
          }
        }
        plVar18 = *(long **)(lStack_240 + (long)ppuVar5 * 8);
        if (plVar18 != (long *)0x0) {
          do {
            while( true ) {
              plVar18 = (long *)*plVar18;
              if (plVar18 == (long *)0x0) goto LAB_10a1178cc;
              ppuVar22 = (undefined **)plVar18[1];
              if (ppuVar22 != ppuVar29) break;
              if (plVar18[2] == uVar14) goto LAB_10a117a28;
            }
            if (((ulong)ppuStack_238 & uVar17) == 0) {
              ppuVar22 = (undefined **)((ulong)ppuVar22 & uVar17);
            }
            else if (ppuStack_238 <= ppuVar22) {
              uVar12 = 0;
              if (ppuStack_238 != (undefined **)0x0) {
                uVar12 = (ulong)ppuVar22 / (ulong)ppuStack_238;
              }
              ppuVar22 = (undefined **)((long)ppuVar22 - uVar12 * (long)ppuStack_238);
            }
          } while (ppuVar22 == ppuVar5);
        }
      }
LAB_10a1178cc:
      ppuVar19 = (undefined **)0x68;
      __Znwm();
      *ppuVar19 = (undefined *)0x0;
      ppuVar19[1] = (undefined *)ppuVar29;
      lVar10 = puVar26[3];
      puVar9 = (undefined *)puVar26[2];
      ppuVar19[3] = (undefined *)puVar26[3];
      ppuVar19[2] = puVar9;
      if (lVar10 != 0) {
        plVar18 = (long *)(lVar10 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar2) {
            *plVar18 = *plVar18 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      ppuStack_1f0 = ppuVar19 + 4;
      *(undefined1 *)(ppuVar19 + 0xc) = 3;
      if (*(char *)(puVar26 + 0xc) == '\0') {
        uVar8 = 0;
      }
      else {
        pppuVar7 = (undefined ***)(puVar26 + 4);
        FUN_10a005398(&ppuStack_1f0);
        uVar8 = *(undefined1 *)(puVar26 + 0xc);
      }
      *(undefined1 *)(ppuVar19 + 0xc) = uVar8;
      if ((ppuVar27 == (undefined **)0x0) ||
         (fStack_220 * (float)ppuVar27 < (float)(lStack_228 + 1))) {
        uVar14 = 1;
        if ((undefined **)0x2 < ppuVar27) {
          uVar14 = (ulong)(((ulong)ppuVar27 & (long)ppuVar27 - 1U) != 0);
        }
        pppuVar7 = (undefined ***)(uVar14 | (long)ppuVar27 << 1);
        pppuVar6 = (undefined ***)(long)((float)(lStack_228 + 1) / fStack_220);
        if (pppuVar7 <= pppuVar6) {
          pppuVar7 = pppuVar6;
        }
        FUN_10a1432e8(&lStack_240);
        ppuVar27 = ppuStack_238;
        if (((ulong)ppuStack_238 & (long)ppuStack_238 - 1U) == 0) {
          ppuVar5 = (undefined **)((long)ppuStack_238 - 1U & (ulong)ppuVar29);
        }
        else {
          ppuVar5 = ppuVar29;
          if (ppuStack_238 <= ppuVar29) {
            uVar14 = 0;
            if (ppuStack_238 != (undefined **)0x0) {
              uVar14 = (ulong)ppuVar29 / (ulong)ppuStack_238;
            }
            ppuVar5 = (undefined **)((long)ppuVar29 - uVar14 * (long)ppuStack_238);
          }
        }
      }
      puVar15 = *(undefined8 **)(lStack_240 + (long)ppuVar5 * 8);
      if (puVar15 == (undefined8 *)0x0) {
        *ppuVar19 = (undefined *)ppuStack_230;
        *(undefined ****)(lStack_240 + (long)ppuVar5 * 8) = param_3;
        ppuStack_230 = ppuVar19;
        if (*ppuVar19 != (undefined *)0x0) {
          ppuVar29 = *(undefined ***)(*ppuVar19 + 8);
          if (((ulong)ppuVar27 & (long)ppuVar27 - 1U) == 0) {
            ppuVar29 = (undefined **)((ulong)ppuVar29 & (long)ppuVar27 - 1U);
          }
          else if (ppuVar27 <= ppuVar29) {
            uVar14 = 0;
            if (ppuVar27 != (undefined **)0x0) {
              uVar14 = (ulong)ppuVar29 / (ulong)ppuVar27;
            }
            ppuVar29 = (undefined **)((long)ppuVar29 - uVar14 * (long)ppuVar27);
          }
          *(undefined ***)(lStack_240 + (long)ppuVar29 * 8) = ppuVar19;
        }
      }
      else {
        *ppuVar19 = (undefined *)*puVar15;
        *puVar15 = ppuVar19;
      }
      lStack_228 = lStack_228 + 1;
LAB_10a117a28:
      puVar26 = (undefined8 *)*puVar26;
    } while (puVar26 != (undefined8 *)0x0);
  }
  puVar26 = (undefined8 *)0x0;
  if (ppuStack_230 != (undefined **)0x0) {
    puVar26 = &uStack_210;
    param_3 = &ppuStack_1f0;
    param_2 = 0x100000001;
    ppuVar5 = ppuStack_230;
    do {
      puVar9 = ppuVar24[4];
      if (puVar9 != (undefined *)0x0) {
        puVar16 = ppuVar5[2];
        uVar14 = ((ulong)(uint)((int)puVar16 << 3) + 8 ^ (ulong)puVar16 >> 0x20) *
                 -0x622015f714c7d297;
        uVar14 = ((ulong)puVar16 >> 0x20 ^ uVar14 >> 0x2f ^ uVar14) * -0x622015f714c7d297;
        puVar20 = (undefined *)((uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297);
        puVar23 = puVar9 + -1;
        if (((ulong)puVar9 & (ulong)puVar23) == 0) {
          puVar25 = (undefined *)((ulong)puVar20 & (ulong)puVar23);
        }
        else {
          puVar25 = puVar20;
          if (puVar9 <= puVar20) {
            uVar14 = 0;
            if (puVar9 != (undefined *)0x0) {
              uVar14 = (ulong)puVar20 / (ulong)puVar9;
            }
            puVar25 = puVar20 + -(uVar14 * (long)puVar9);
          }
        }
        plVar18 = *(long **)(ppuVar24[3] + (long)puVar25 * 8);
        if (plVar18 != (long *)0x0) {
LAB_10a117abc:
          while (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0) {
            puVar28 = (undefined *)plVar18[1];
            if (puVar28 != puVar20) goto LAB_10a117ae0;
            if ((undefined *)plVar18[2] == puVar16) {
              if (*(char *)(ppuVar5 + 0xc) == '\x01') {
                pcVar11 = (code *)ppuVar5[4];
                ppuStack_1e8 = pppuStack_248[1];
                ppuStack_1f0 = *pppuStack_248;
                if (pppuStack_248[1] != (undefined **)0x0) {
                  ppuVar19 = pppuStack_248[1] + 1;
                  do {
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
                    if (bVar2) {
                      *ppuVar19 = *ppuVar19 + 1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                }
                pppuVar7 = (undefined ***)(ppuVar5 + 4);
                (*pcVar11)(&ppuStack_1f0);
                ppuVar19 = ppuStack_1e8;
                if (ppuStack_1e8 != (undefined **)0x0) {
                  ppuVar27 = ppuStack_1e8 + 1;
                  do {
                    puVar9 = *ppuVar27;
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(ppuVar27,0x10);
                    if (bVar2) {
                      *ppuVar27 = puVar9 + -1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                  goto LAB_10a117bb4;
                }
              }
              else if (*(char *)(ppuVar5 + 0xc) == '\x02') {
                ppuVar19 = ppuVar5 + 4;
                FUN_10a688b40();
                if (ppuVar19 == (undefined **)0x0) {
                  if (pppuVar7 != (undefined ***)0x0) {
                    puStack_1e0 = ppuVar5[4];
                    puStack_1d8 = ppuVar5[5];
                    if (puStack_1d8 != (undefined *)0x0) {
                      plVar18 = (long *)(puStack_1d8 + 8);
                      do {
                        cVar1 = '\x01';
                        bVar2 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                        if (bVar2) {
                          *plVar18 = *plVar18 + 1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                    }
                    ppuStack_200 = *pppuStack_248;
                    ppuVar19 = pppuStack_248[1];
                    if (ppuVar19 == (undefined **)0x0) {
                      ppuStack_1c8 = (undefined **)0x0;
                    }
                    else {
                      ppuVar27 = ppuVar19 + 1;
                      do {
                        cVar1 = '\x01';
                        bVar2 = (bool)ExclusiveMonitorPass(ppuVar27,0x10);
                        if (bVar2) {
                          *ppuVar27 = *ppuVar27 + 1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                      do {
                        cVar1 = '\x01';
                        bVar2 = (bool)ExclusiveMonitorPass(ppuVar27,0x10);
                        if (bVar2) {
                          *ppuVar27 = *ppuVar27 + 1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                        ppuStack_1c8 = ppuVar19;
                      } while (cVar1 != '\0');
                    }
                    ppuStack_1e8 = &PTR_FUN_110ba7580;
                    ppuStack_208 = (undefined **)0x0;
                    uStack_210 = 0;
                    ppuStack_1f0 = (undefined **)FUN_10a1441bc;
                    pppuVar6 = &ppuStack_1f0;
                    ppuStack_1f8 = ppuVar19;
                    ppuStack_1d0 = ppuStack_200;
                    FUN_10a4634ec(pppuVar7);
                    (*(code *)*ppuStack_1e8)(&ppuStack_1e8);
                    if (ppuVar19 != (undefined **)0x0) {
                      ppuVar27 = ppuVar19 + 1;
                      do {
                        puVar9 = *ppuVar27;
                        cVar1 = '\x01';
                        bVar2 = (bool)ExclusiveMonitorPass(ppuVar27,0x10);
                        if (bVar2) {
                          *ppuVar27 = puVar9 + -1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                      if (puVar9 == (undefined *)0x0) {
                        (**(code **)(*ppuVar19 + 0x10))(ppuVar19);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar19);
                      }
                    }
                    pppuVar7 = pppuVar6;
                    ppuVar19 = ppuStack_208;
                    if (ppuStack_208 != (undefined **)0x0) {
                      ppuVar27 = ppuStack_208 + 1;
                      do {
                        puVar9 = *ppuVar27;
                        cVar1 = '\x01';
                        bVar2 = (bool)ExclusiveMonitorPass(ppuVar27,0x10);
                        if (bVar2) {
                          *ppuVar27 = puVar9 + -1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
LAB_10a117bb4:
                      if (puVar9 == (undefined *)0x0) {
                        (**(code **)(*ppuVar19 + 0x10))(ppuVar19);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar19);
                      }
                    }
                  }
                }
                else {
                  *ppuVar19 = (undefined *)
                              CONCAT44((int)((ulong)*ppuVar19 >> 0x20) + 1,(int)*ppuVar19 + 1);
                  pppuVar7 = pppuStack_248;
                  FUN_10a143fb8(ppuVar5[4]);
                  iVar3 = *(int *)((long)ppuVar19 + 4) + -1;
                  *(int *)((long)ppuVar19 + 4) = iVar3;
                  if (iVar3 == 0) {
                    *(undefined4 *)ppuVar19 = 0;
                  }
                }
              }
              break;
            }
          }
        }
      }
LAB_10a117cc0:
      ppuVar5 = (undefined **)*ppuVar5;
    } while (ppuVar5 != (undefined **)0x0);
  }
  plVar18 = &lStack_240;
  func_0x00010a143608();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b0) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_1e8)(param_3 + 1);
    FUN_10a143f60(puVar26 + 2);
    func_0x00010a004dac(&uStack_210);
    func_0x00010a143608(&lStack_240);
    plVar13 = plVar18;
    __Unwind_Resume();
    uStack_280 = 0x9ddfea08eb382d69;
    pcStack_258 = FUN_10a117da8;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    puStack_2f8 = &DAT_10f3caa94;
    uStack_2d8 = 0x4ffffffff;
    uStack_2e0 = 0x40000000064;
    puStack_2d0 = &UNK_10f63ce51;
    uStack_2c8 = 0;
    puStack_2c0 = &UNK_10f63ce51;
    uStack_2b8 = 0;
    uStack_2b0 = 0x175;
    uStack_2a8 = 0xffffffff;
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = param_1;
    uStack_288 = param_2;
    ppuStack_278 = ppuVar19;
    ppuStack_270 = ppuVar24;
    plStack_268 = plVar18;
    ppuStack_260 = &puStack_140;
    *(undefined1 *)((long)plVar13 + 0x1ac) = 1;
    FUN_10a0050a8(plVar13 + 0x2d,&puStack_2f8);
    plVar18 = plVar13;
    FUN_10a0051e8(plVar13,uStack_2e0 & 0xffffffff,uStack_2e0._4_4_,uStack_2a8,
                  uStack_2d8 & 0xffffffff,uStack_2d8._4_4_);
    if (((ulong)plVar18 & 1) == 0) {
      func_0x0001098946ac(plVar13,puStack_2f8);
    }
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    puStack_2f8 = &UNK_10f63d2e6;
    uStack_2d8 = 0xffffffffffffffff;
    uStack_2e0 = 0x100000064;
    puStack_2d0 = &UNK_10f63ce51;
    uStack_2c8 = 0;
    uStack_2b8 = 0;
    puStack_2c0 = (undefined *)0x0;
    uStack_2b0 = 0x175;
    uStack_2a8 = 0xffffffff;
    uStack_2a0 = 0;
    uStack_298 = 0;
    FUN_10a1181f0(plVar13,&puStack_2f8,1);
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    puStack_2f8 = &UNK_10f63d2ec;
    uStack_2d8 = 0xffffffffffffffff;
    uStack_2e0 = 0x100000064;
    puStack_2d0 = &UNK_10f63ce51;
    uStack_2c8 = 0;
    uStack_2b8 = 0;
    puStack_2c0 = (undefined *)0x0;
    uStack_2b0 = 0x175;
    uStack_2a8 = 0xffffffff;
    uStack_2a0 = 0;
    uStack_298 = 0;
    FUN_10a1181f0();
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    puStack_2f8 = &UNK_10f63d2f1;
    uStack_2d8 = 0xffffffffffffffff;
    uStack_2e0 = 0x100000064;
    puStack_2d0 = &UNK_10f63ce51;
    uStack_2c8 = 0;
    uStack_2b8 = 0;
    puStack_2c0 = (undefined *)0x0;
    uStack_2b0 = 0x175;
    uStack_2a8 = 0xffffffff;
    uStack_2a0 = 0;
    uStack_298 = 0;
    FUN_10a1181f0();
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    puStack_2f8 = &UNK_10f63d2f6;
    uStack_2d8 = 0xffffffffffffffff;
    uStack_2e0 = 0x100000064;
    puStack_2d0 = &UNK_10f63ce51;
    uStack_2c8 = 0;
    uStack_2b8 = 0;
    puStack_2c0 = (undefined *)0x0;
    uStack_2b0 = 0x175;
    uStack_2a8 = 0xffffffff;
    uStack_2a0 = 0;
    uStack_298 = 0;
    FUN_10a1181f0();
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    puStack_2f8 = &UNK_10f63d2fc;
    uStack_2d8 = 0xffffffffffffffff;
    uStack_2e0 = 0x100000064;
    puStack_2d0 = &UNK_10f63ce51;
    uStack_2c8 = 0;
    uStack_2b8 = 0;
    puStack_2c0 = (undefined *)0x0;
    uStack_2b0 = 0x175;
    uStack_2a8 = 0xffffffff;
    uStack_2a0 = 0;
    uStack_298 = 0;
    FUN_10a1181f0();
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    puStack_2f8 = &UNK_10f63d307;
    uStack_2d8 = 0xffffffffffffffff;
    uStack_2e0 = 0x100000064;
    puStack_2d0 = &UNK_10f63ce51;
    uStack_2c8 = 0;
    uStack_2b8 = 0;
    puStack_2c0 = (undefined *)0x0;
    uStack_2b0 = 0x175;
    uStack_2a8 = 0xffffffff;
    uStack_2a0 = 0;
    uStack_298 = 0;
    FUN_10a1181f0();
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    puStack_2f8 = &UNK_10f63d313;
    uStack_2d8 = 0xffffffffffffffff;
    uStack_2e0 = 0x100000064;
    puStack_2d0 = &UNK_10f63ce51;
    uStack_2c8 = 0;
    uStack_2b8 = 0;
    puStack_2c0 = (undefined *)0x0;
    uStack_2b0 = 0x175;
    uStack_2a8 = 0xffffffff;
    uStack_2a0 = 0;
    uStack_298 = 0;
    FUN_10a1181f0();
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    puStack_2f8 = &UNK_10f63d31f;
    uStack_2d8 = 0xffffffffffffffff;
    uStack_2e0 = 0x100000064;
    puStack_2d0 = &UNK_10f63ce51;
    uStack_2c8 = 0;
    uStack_2b8 = 0;
    puStack_2c0 = (undefined *)0x0;
    uStack_2b0 = 0x175;
    uStack_2a8 = 0xffffffff;
    uStack_2a0 = 0;
    uStack_298 = 0;
    FUN_10a1181f0();
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    puStack_2f8 = &UNK_10f63d32c;
    uStack_2d8 = 0xffffffffffffffff;
    uStack_2e0 = 0x100000064;
    puStack_2d0 = &UNK_10f63ce51;
    uStack_2c8 = 0;
    uStack_2b8 = 0;
    puStack_2c0 = (undefined *)0x0;
    uStack_2b0 = 0x175;
    uStack_2a8 = 0xffffffff;
    uStack_2a0 = 0;
    uStack_298 = 0;
    FUN_10a1181f0();
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    puStack_2f8 = &UNK_10f63d33b;
    uStack_2d8 = 0xffffffffffffffff;
    uStack_2e0 = 0x100000064;
    puStack_2d0 = &UNK_10f63ce51;
    uStack_2c8 = 0;
    uStack_2b8 = 0;
    puStack_2c0 = (undefined *)0x0;
    uStack_2b0 = 0x175;
    uStack_2a8 = 0xffffffff;
    uStack_2a0 = 0;
    uStack_298 = 0;
    FUN_10a1181f0();
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    puStack_2f8 = &UNK_10f63d34b;
    uStack_2d8 = 0xffffffffffffffff;
    uStack_2e0 = 0x100000064;
    puStack_2d0 = &UNK_10f63ce51;
    uStack_2c8 = 0;
    uStack_2b8 = 0;
    puStack_2c0 = (undefined *)0x0;
    uStack_2b0 = 0x175;
    uStack_2a8 = 0xffffffff;
    uStack_2a0 = 0;
    uStack_298 = 0;
    FUN_10a1181f0();
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    puStack_2f8 = &UNK_10f63d352;
    uStack_2d8 = 0xffffffffffffffff;
    uStack_2e0 = 0x100000064;
    puStack_2d0 = &UNK_10f63ce51;
    uStack_2c8 = 0;
    uStack_2b8 = 0;
    puStack_2c0 = (undefined *)0x0;
    uStack_2b0 = 0x175;
    uStack_2a8 = 0xffffffff;
    uStack_2a0 = 0;
    uStack_298 = 0;
    FUN_10a1181f0();
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    puStack_2f8 = &UNK_10f63d35b;
    uStack_2d8 = 0xffffffffffffffff;
    uStack_2e0 = 0x100000064;
    puStack_2d0 = &UNK_10f63ce51;
    uStack_2c8 = 0;
    uStack_2b8 = 0;
    puStack_2c0 = (undefined *)0x0;
    uStack_2b0 = 0x175;
    uStack_2a8 = 0xffffffff;
    uStack_2a0 = 0;
    uStack_298 = 0;
    FUN_10a1181f0();
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    puStack_2f8 = &UNK_10f63d364;
    uStack_2d8 = 0xffffffffffffffff;
    uStack_2e0 = 0x100000064;
    puStack_2d0 = &UNK_10f63ce51;
    uStack_2c8 = 0;
    uStack_2b8 = 0;
    puStack_2c0 = (undefined *)0x0;
    uStack_2b0 = 0x175;
    uStack_2a8 = 0xffffffff;
    uStack_2a0 = 0;
    uStack_298 = 0;
    FUN_10a1181f0();
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    puStack_2f8 = &UNK_10f501357;
    uStack_2d8 = 0xffffffffffffffff;
    uStack_2e0 = 0x100000064;
    puStack_2d0 = &UNK_10f63ce51;
    uStack_2c8 = 0;
    uStack_2b8 = 0;
    puStack_2c0 = (undefined *)0x0;
    uStack_2b0 = 0x175;
    uStack_2a8 = 0xffffffff;
    uStack_2a0 = 0;
    uStack_298 = 0;
    FUN_10a1181f0();
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    puStack_2f8 = &DAT_10f36af8d;
    uStack_2d8 = 0xffffffffffffffff;
    uStack_2e0 = 0x100000064;
    puStack_2d0 = &UNK_10f63ce51;
    uStack_2c8 = 0;
    uStack_2b8 = 0;
    puStack_2c0 = (undefined *)0x0;
    uStack_2b0 = 0x175;
    uStack_2a8 = 0xffffffff;
    uStack_2a0 = 0;
    uStack_298 = 0;
    FUN_10a1181f0();
    FUN_10a003ff4();
    return;
  }
  return;
LAB_10a11745c:
  if (((ulong)ppuVar5 & uVar17) == 0) {
    ppuVar27 = (undefined **)((ulong)ppuVar27 & uVar17);
  }
  else if (ppuVar5 <= ppuVar27) {
    uVar12 = 0;
    if (ppuVar5 != (undefined **)0x0) {
      uVar12 = (ulong)ppuVar27 / (ulong)ppuVar5;
    }
    ppuVar27 = (undefined **)((long)ppuVar27 - uVar12 * (long)ppuVar5);
  }
  if (ppuVar27 != ppuVar24) goto LAB_10a117650;
  goto LAB_10a117438;
LAB_10a117ae0:
  if (((ulong)puVar9 & (ulong)puVar23) == 0) {
    puVar28 = (undefined *)((ulong)puVar28 & (ulong)puVar23);
  }
  else if (puVar9 <= puVar28) {
    uVar14 = 0;
    if (puVar9 != (undefined *)0x0) {
      uVar14 = (ulong)puVar28 / (ulong)puVar9;
    }
    puVar28 = puVar28 + -(uVar14 * (long)puVar9);
  }
  if (puVar28 != puVar25) goto LAB_10a117cc0;
  goto LAB_10a117abc;
}



/* Entry: 10a117798; end: 10a117da7;  */

void FUN_10a117798(long param_1,code **param_2)

{
  code *pcVar1;
  undefined **ppuVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  code **ppcVar7;
  code cVar8;
  ulong uVar9;
  ulong uVar10;
  code *pcVar11;
  ulong uVar12;
  code **ppcVar13;
  long lVar14;
  undefined *puVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  ulong unaff_x19;
  undefined **ppuVar20;
  long *plVar21;
  undefined8 *puVar22;
  code **unaff_x24;
  code *pcVar23;
  long lVar24;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_110;
  ulong uStack_108;
  code *pcStack_100;
  long lStack_f8;
  float fStack_f0;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  code *pcStack_d0;
  code *pcStack_c8;
  code *pcStack_c0;
  undefined **ppuStack_b8;
  long lStack_b0;
  long lStack_a8;
  code *pcStack_a0;
  code *pcStack_98;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_108 = 0;
  lStack_110 = 0;
  lStack_f8 = 0;
  pcStack_100 = (code *)0x0;
  fStack_f0 = *(float *)(param_1 + 0x38);
  ppcVar7 = *(code ***)(param_1 + 0x20);
  FUN_10a1432e8(&lStack_110);
  plVar21 = *(long **)(param_1 + 0x28);
  if (plVar21 != (long *)0x0) {
    unaff_x24 = &pcStack_100;
    do {
      uVar10 = uStack_108;
      uVar9 = plVar21[2];
      uVar16 = ((ulong)(uint)((int)uVar9 << 3) + 8 ^ uVar9 >> 0x20) * -0x622015f714c7d297;
      uVar16 = (uVar9 >> 0x20 ^ uVar16 >> 0x2f ^ uVar16) * -0x622015f714c7d297;
      uVar16 = (uVar16 ^ uVar16 >> 0x2f) * -0x622015f714c7d297;
      if (uStack_108 != 0) {
        uVar12 = uStack_108 - 1;
        if ((uStack_108 & uVar12) == 0) {
          unaff_x19 = uVar16 & uVar12;
        }
        else {
          unaff_x19 = uVar16;
          if (uStack_108 <= uVar16) {
            uVar18 = 0;
            if (uStack_108 != 0) {
              uVar18 = uVar16 / uStack_108;
            }
            unaff_x19 = uVar16 - uVar18 * uStack_108;
          }
        }
        plVar17 = *(long **)(lStack_110 + unaff_x19 * 8);
        if (plVar17 != (long *)0x0) {
          do {
            while( true ) {
              plVar17 = (long *)*plVar17;
              if (plVar17 == (long *)0x0) goto LAB_10a1178cc;
              uVar18 = plVar17[1];
              if (uVar18 != uVar16) break;
              if (plVar17[2] == uVar9) goto LAB_10a117a28;
            }
            if ((uStack_108 & uVar12) == 0) {
              uVar18 = uVar18 & uVar12;
            }
            else if (uStack_108 <= uVar18) {
              uVar19 = 0;
              if (uStack_108 != 0) {
                uVar19 = uVar18 / uStack_108;
              }
              uVar18 = uVar18 - uVar19 * uStack_108;
            }
          } while (uVar18 == unaff_x19);
        }
      }
LAB_10a1178cc:
      pcVar23 = (code *)0x68;
      __Znwm();
      *(long *)pcVar23 = 0;
      *(ulong *)(pcVar23 + 8) = uVar16;
      lVar14 = plVar21[3];
      lVar24 = plVar21[2];
      *(long *)(pcVar23 + 0x18) = plVar21[3];
      *(long *)(pcVar23 + 0x10) = lVar24;
      if (lVar14 != 0) {
        plVar17 = (long *)(lVar14 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *plVar17 = *plVar17 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      pcStack_c0 = pcVar23 + 0x20;
      pcVar23[0x60] = (code)0x3;
      if ((char)plVar21[0xc] == '\0') {
        cVar8 = (code)0x0;
      }
      else {
        ppcVar7 = (code **)(plVar21 + 4);
        FUN_10a005398(&pcStack_c0);
        cVar8 = *(code *)(plVar21 + 0xc);
      }
      pcVar23[0x60] = cVar8;
      if ((uVar10 == 0) || (fStack_f0 * (float)uVar10 < (float)(lStack_f8 + 1))) {
        uVar9 = 1;
        if (2 < uVar10) {
          uVar9 = (ulong)((uVar10 & uVar10 - 1) != 0);
        }
        ppcVar7 = (code **)(uVar9 | uVar10 << 1);
        ppcVar13 = (code **)(long)((float)(lStack_f8 + 1) / fStack_f0);
        if (ppcVar7 <= ppcVar13) {
          ppcVar7 = ppcVar13;
        }
        FUN_10a1432e8(&lStack_110);
        uVar10 = uStack_108;
        if ((uStack_108 & uStack_108 - 1) == 0) {
          unaff_x19 = uStack_108 - 1 & uVar16;
        }
        else {
          unaff_x19 = uVar16;
          if (uStack_108 <= uVar16) {
            uVar9 = 0;
            if (uStack_108 != 0) {
              uVar9 = uVar16 / uStack_108;
            }
            unaff_x19 = uVar16 - uVar9 * uStack_108;
          }
        }
      }
      plVar17 = *(long **)(lStack_110 + unaff_x19 * 8);
      if (plVar17 == (long *)0x0) {
        *(code **)pcVar23 = pcStack_100;
        *(code ***)(lStack_110 + unaff_x19 * 8) = unaff_x24;
        pcStack_100 = pcVar23;
        if (*(long *)pcVar23 != 0) {
          uVar9 = *(ulong *)(*(long *)pcVar23 + 8);
          if ((uVar10 & uVar10 - 1) == 0) {
            uVar9 = uVar9 & uVar10 - 1;
          }
          else if (uVar10 <= uVar9) {
            uVar16 = 0;
            if (uVar10 != 0) {
              uVar16 = uVar9 / uVar10;
            }
            uVar9 = uVar9 - uVar16 * uVar10;
          }
          *(code **)(lStack_110 + uVar9 * 8) = pcVar23;
        }
      }
      else {
        *(long *)pcVar23 = *plVar17;
        *plVar17 = (long)pcVar23;
      }
      lStack_f8 = lStack_f8 + 1;
LAB_10a117a28:
      plVar21 = (long *)*plVar21;
    } while (plVar21 != (long *)0x0);
  }
  puVar22 = (undefined8 *)0x0;
  if (pcStack_100 != (code *)0x0) {
    puVar22 = &uStack_e0;
    unaff_x24 = &pcStack_c0;
    pcVar23 = pcStack_100;
    do {
      uVar10 = *(ulong *)(param_1 + 0x20);
      if (uVar10 != 0) {
        uVar9 = *(ulong *)(pcVar23 + 0x10);
        uVar16 = ((ulong)(uint)((int)uVar9 << 3) + 8 ^ uVar9 >> 0x20) * -0x622015f714c7d297;
        uVar16 = (uVar9 >> 0x20 ^ uVar16 >> 0x2f ^ uVar16) * -0x622015f714c7d297;
        uVar16 = (uVar16 ^ uVar16 >> 0x2f) * -0x622015f714c7d297;
        uVar12 = uVar10 - 1;
        if ((uVar10 & uVar12) == 0) {
          uVar18 = uVar16 & uVar12;
        }
        else {
          uVar18 = uVar16;
          if (uVar10 <= uVar16) {
            uVar18 = 0;
            if (uVar10 != 0) {
              uVar18 = uVar16 / uVar10;
            }
            uVar18 = uVar16 - uVar18 * uVar10;
          }
        }
        plVar21 = *(long **)(*(long *)(param_1 + 0x18) + uVar18 * 8);
        if (plVar21 != (long *)0x0) {
LAB_10a117abc:
          while (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0) {
            uVar19 = plVar21[1];
            if (uVar19 != uVar16) goto LAB_10a117ae0;
            if (plVar21[2] == uVar9) {
              if (pcVar23[0x60] == (code)0x1) {
                pcVar11 = *(code **)(pcVar23 + 0x20);
                ppuStack_b8 = (undefined **)param_2[1];
                pcStack_c0 = *param_2;
                if (param_2[1] != (code *)0x0) {
                  pcVar1 = param_2[1] + 8;
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
                    if (bVar5) {
                      *(long *)pcVar1 = *(long *)pcVar1 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
                ppcVar7 = (code **)(pcVar23 + 0x20);
                (*pcVar11)(&pcStack_c0);
                if (ppuStack_b8 != (undefined **)0x0) {
                  ppuVar2 = ppuStack_b8 + 1;
                  do {
                    puVar15 = *ppuVar2;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
                    if (bVar5) {
                      *ppuVar2 = puVar15 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                    ppuVar20 = ppuStack_b8;
                  } while (cVar4 != '\0');
                  goto LAB_10a117bb4;
                }
              }
              else if (pcVar23[0x60] == (code)0x2) {
                pcVar11 = pcVar23 + 0x20;
                FUN_10a688b40();
                if (pcVar11 == (code *)0x0) {
                  if (ppcVar7 != (code **)0x0) {
                    lStack_b0 = *(long *)(pcVar23 + 0x20);
                    lStack_a8 = *(long *)(pcVar23 + 0x28);
                    if (lStack_a8 != 0) {
                      plVar21 = (long *)(lStack_a8 + 8);
                      do {
                        cVar4 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                        if (bVar5) {
                          *plVar21 = *plVar21 + 1;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                    }
                    pcStack_d0 = *param_2;
                    pcVar11 = param_2[1];
                    if (pcVar11 == (code *)0x0) {
                      pcStack_98 = (code *)0x0;
                    }
                    else {
                      pcVar1 = pcVar11 + 8;
                      do {
                        cVar4 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
                        if (bVar5) {
                          *(long *)pcVar1 = *(long *)pcVar1 + 1;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                      do {
                        cVar4 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
                        if (bVar5) {
                          *(long *)pcVar1 = *(long *)pcVar1 + 1;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                        pcStack_98 = pcVar11;
                      } while (cVar4 != '\0');
                    }
                    ppuStack_b8 = &PTR_FUN_110ba7580;
                    ppuStack_d8 = (undefined **)0x0;
                    uStack_e0 = 0;
                    pcStack_c0 = FUN_10a1441bc;
                    ppcVar13 = &pcStack_c0;
                    pcStack_c8 = pcVar11;
                    pcStack_a0 = pcStack_d0;
                    FUN_10a4634ec(ppcVar7);
                    (*(code *)*ppuStack_b8)(&ppuStack_b8);
                    if (pcVar11 != (code *)0x0) {
                      pcVar1 = pcVar11 + 8;
                      do {
                        lVar14 = *(long *)pcVar1;
                        cVar4 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
                        if (bVar5) {
                          *(long *)pcVar1 = lVar14 + -1;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                      if (lVar14 == 0) {
                        (**(code **)(*(long *)pcVar11 + 0x10))(pcVar11);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar11);
                      }
                    }
                    ppcVar7 = ppcVar13;
                    if (ppuStack_d8 != (undefined **)0x0) {
                      ppuVar2 = ppuStack_d8 + 1;
                      do {
                        puVar15 = *ppuVar2;
                        cVar4 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
                        if (bVar5) {
                          *ppuVar2 = puVar15 + -1;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                        ppuVar20 = ppuStack_d8;
                      } while (cVar4 != '\0');
LAB_10a117bb4:
                      if (puVar15 == (undefined *)0x0) {
                        (**(code **)(*ppuVar20 + 0x10))(ppuVar20);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar20);
                      }
                    }
                  }
                }
                else {
                  *(long *)pcVar11 =
                       CONCAT44((int)((ulong)*(long *)pcVar11 >> 0x20) + 1,(int)*(long *)pcVar11 + 1
                               );
                  ppcVar7 = param_2;
                  FUN_10a143fb8(*(long *)(pcVar23 + 0x20));
                  iVar3 = *(int *)(pcVar11 + 4);
                  *(int *)(pcVar11 + 4) = iVar3 + -1;
                  if (iVar3 + -1 == 0) {
                    *(undefined4 *)pcVar11 = 0;
                  }
                }
              }
              break;
            }
          }
        }
      }
LAB_10a117cc0:
      pcVar23 = *(code **)pcVar23;
    } while (pcVar23 != (code *)0x0);
  }
  plVar21 = &lStack_110;
  func_0x00010a143608();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_b8)(unaff_x24 + 1);
  FUN_10a143f60(puVar22 + 2);
  func_0x00010a004dac(&uStack_e0);
  func_0x00010a143608(&lStack_110);
  __Unwind_Resume();
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  puStack_1c8 = &DAT_10f3caa94;
  uStack_1a8 = 0x4ffffffff;
  uStack_1b0 = 0x40000000064;
  puStack_1a0 = &UNK_10f63ce51;
  uStack_198 = 0;
  puStack_190 = &UNK_10f63ce51;
  uStack_188 = 0;
  uStack_180 = 0x175;
  uStack_178 = 0xffffffff;
  uStack_170 = 0;
  uStack_168 = 0;
  *(undefined1 *)((long)plVar21 + 0x1ac) = 1;
  FUN_10a0050a8(plVar21 + 0x2d,&puStack_1c8);
  plVar17 = plVar21;
  FUN_10a0051e8(plVar21,uStack_1b0 & 0xffffffff,uStack_1b0._4_4_,uStack_178,uStack_1a8 & 0xffffffff,
                uStack_1a8._4_4_);
  if (((ulong)plVar17 & 1) == 0) {
    func_0x0001098946ac(plVar21,puStack_1c8);
  }
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  puStack_1c8 = &UNK_10f63d2e6;
  uStack_1a8 = 0xffffffffffffffff;
  uStack_1b0 = 0x100000064;
  puStack_1a0 = &UNK_10f63ce51;
  uStack_198 = 0;
  uStack_188 = 0;
  puStack_190 = (undefined *)0x0;
  uStack_180 = 0x175;
  uStack_178 = 0xffffffff;
  uStack_170 = 0;
  uStack_168 = 0;
  FUN_10a1181f0(plVar21,&puStack_1c8,1);
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  puStack_1c8 = &UNK_10f63d2ec;
  uStack_1a8 = 0xffffffffffffffff;
  uStack_1b0 = 0x100000064;
  puStack_1a0 = &UNK_10f63ce51;
  uStack_198 = 0;
  uStack_188 = 0;
  puStack_190 = (undefined *)0x0;
  uStack_180 = 0x175;
  uStack_178 = 0xffffffff;
  uStack_170 = 0;
  uStack_168 = 0;
  FUN_10a1181f0();
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  puStack_1c8 = &UNK_10f63d2f1;
  uStack_1a8 = 0xffffffffffffffff;
  uStack_1b0 = 0x100000064;
  puStack_1a0 = &UNK_10f63ce51;
  uStack_198 = 0;
  uStack_188 = 0;
  puStack_190 = (undefined *)0x0;
  uStack_180 = 0x175;
  uStack_178 = 0xffffffff;
  uStack_170 = 0;
  uStack_168 = 0;
  FUN_10a1181f0();
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  puStack_1c8 = &UNK_10f63d2f6;
  uStack_1a8 = 0xffffffffffffffff;
  uStack_1b0 = 0x100000064;
  puStack_1a0 = &UNK_10f63ce51;
  uStack_198 = 0;
  uStack_188 = 0;
  puStack_190 = (undefined *)0x0;
  uStack_180 = 0x175;
  uStack_178 = 0xffffffff;
  uStack_170 = 0;
  uStack_168 = 0;
  FUN_10a1181f0();
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  puStack_1c8 = &UNK_10f63d2fc;
  uStack_1a8 = 0xffffffffffffffff;
  uStack_1b0 = 0x100000064;
  puStack_1a0 = &UNK_10f63ce51;
  uStack_198 = 0;
  uStack_188 = 0;
  puStack_190 = (undefined *)0x0;
  uStack_180 = 0x175;
  uStack_178 = 0xffffffff;
  uStack_170 = 0;
  uStack_168 = 0;
  FUN_10a1181f0();
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  puStack_1c8 = &UNK_10f63d307;
  uStack_1a8 = 0xffffffffffffffff;
  uStack_1b0 = 0x100000064;
  puStack_1a0 = &UNK_10f63ce51;
  uStack_198 = 0;
  uStack_188 = 0;
  puStack_190 = (undefined *)0x0;
  uStack_180 = 0x175;
  uStack_178 = 0xffffffff;
  uStack_170 = 0;
  uStack_168 = 0;
  FUN_10a1181f0();
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  puStack_1c8 = &UNK_10f63d313;
  uStack_1a8 = 0xffffffffffffffff;
  uStack_1b0 = 0x100000064;
  puStack_1a0 = &UNK_10f63ce51;
  uStack_198 = 0;
  uStack_188 = 0;
  puStack_190 = (undefined *)0x0;
  uStack_180 = 0x175;
  uStack_178 = 0xffffffff;
  uStack_170 = 0;
  uStack_168 = 0;
  FUN_10a1181f0();
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  puStack_1c8 = &UNK_10f63d31f;
  uStack_1a8 = 0xffffffffffffffff;
  uStack_1b0 = 0x100000064;
  puStack_1a0 = &UNK_10f63ce51;
  uStack_198 = 0;
  uStack_188 = 0;
  puStack_190 = (undefined *)0x0;
  uStack_180 = 0x175;
  uStack_178 = 0xffffffff;
  uStack_170 = 0;
  uStack_168 = 0;
  FUN_10a1181f0();
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  puStack_1c8 = &UNK_10f63d32c;
  uStack_1a8 = 0xffffffffffffffff;
  uStack_1b0 = 0x100000064;
  puStack_1a0 = &UNK_10f63ce51;
  uStack_198 = 0;
  uStack_188 = 0;
  puStack_190 = (undefined *)0x0;
  uStack_180 = 0x175;
  uStack_178 = 0xffffffff;
  uStack_170 = 0;
  uStack_168 = 0;
  FUN_10a1181f0();
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  puStack_1c8 = &UNK_10f63d33b;
  uStack_1a8 = 0xffffffffffffffff;
  uStack_1b0 = 0x100000064;
  puStack_1a0 = &UNK_10f63ce51;
  uStack_198 = 0;
  uStack_188 = 0;
  puStack_190 = (undefined *)0x0;
  uStack_180 = 0x175;
  uStack_178 = 0xffffffff;
  uStack_170 = 0;
  uStack_168 = 0;
  FUN_10a1181f0();
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  puStack_1c8 = &UNK_10f63d34b;
  uStack_1a8 = 0xffffffffffffffff;
  uStack_1b0 = 0x100000064;
  puStack_1a0 = &UNK_10f63ce51;
  uStack_198 = 0;
  uStack_188 = 0;
  puStack_190 = (undefined *)0x0;
  uStack_180 = 0x175;
  uStack_178 = 0xffffffff;
  uStack_170 = 0;
  uStack_168 = 0;
  FUN_10a1181f0();
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  puStack_1c8 = &UNK_10f63d352;
  uStack_1a8 = 0xffffffffffffffff;
  uStack_1b0 = 0x100000064;
  puStack_1a0 = &UNK_10f63ce51;
  uStack_198 = 0;
  uStack_188 = 0;
  puStack_190 = (undefined *)0x0;
  uStack_180 = 0x175;
  uStack_178 = 0xffffffff;
  uStack_170 = 0;
  uStack_168 = 0;
  FUN_10a1181f0();
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  puStack_1c8 = &UNK_10f63d35b;
  uStack_1a8 = 0xffffffffffffffff;
  uStack_1b0 = 0x100000064;
  puStack_1a0 = &UNK_10f63ce51;
  uStack_198 = 0;
  uStack_188 = 0;
  puStack_190 = (undefined *)0x0;
  uStack_180 = 0x175;
  uStack_178 = 0xffffffff;
  uStack_170 = 0;
  uStack_168 = 0;
  FUN_10a1181f0();
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  puStack_1c8 = &UNK_10f63d364;
  uStack_1a8 = 0xffffffffffffffff;
  uStack_1b0 = 0x100000064;
  puStack_1a0 = &UNK_10f63ce51;
  uStack_198 = 0;
  uStack_188 = 0;
  puStack_190 = (undefined *)0x0;
  uStack_180 = 0x175;
  uStack_178 = 0xffffffff;
  uStack_170 = 0;
  uStack_168 = 0;
  FUN_10a1181f0();
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  puStack_1c8 = &UNK_10f501357;
  uStack_1a8 = 0xffffffffffffffff;
  uStack_1b0 = 0x100000064;
  puStack_1a0 = &UNK_10f63ce51;
  uStack_198 = 0;
  uStack_188 = 0;
  puStack_190 = (undefined *)0x0;
  uStack_180 = 0x175;
  uStack_178 = 0xffffffff;
  uStack_170 = 0;
  uStack_168 = 0;
  FUN_10a1181f0();
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  puStack_1c8 = &DAT_10f36af8d;
  uStack_1a8 = 0xffffffffffffffff;
  uStack_1b0 = 0x100000064;
  puStack_1a0 = &UNK_10f63ce51;
  uStack_198 = 0;
  uStack_188 = 0;
  puStack_190 = (undefined *)0x0;
  uStack_180 = 0x175;
  uStack_178 = 0xffffffff;
  uStack_170 = 0;
  uStack_168 = 0;
  FUN_10a1181f0();
  FUN_10a003ff4();
  return;
LAB_10a117ae0:
  if ((uVar10 & uVar12) == 0) {
    uVar19 = uVar19 & uVar12;
  }
  else if (uVar10 <= uVar19) {
    uVar6 = 0;
    if (uVar10 != 0) {
      uVar6 = uVar19 / uVar10;
    }
    uVar19 = uVar19 - uVar6 * uVar10;
  }
  if (uVar19 != uVar18) goto LAB_10a117cc0;
  goto LAB_10a117abc;
}



/* Entry: 10a117da8; end: 10a1181ef;  */

void FUN_10a117da8(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f3caa94;
  uStack_88 = 0x4ffffffff;
  uStack_90 = 0x40000000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  puStack_70 = &UNK_10f63ce51;
  uStack_68 = 0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f63d2e6;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1181f0(param_1,&puStack_a8,1);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f63d2ec;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1181f0();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f63d2f1;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1181f0();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f63d2f6;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1181f0();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f63d2fc;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1181f0();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f63d307;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1181f0();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f63d313;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1181f0();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f63d31f;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1181f0();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f63d32c;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1181f0();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f63d33b;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1181f0();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f63d34b;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1181f0();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f63d352;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1181f0();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f63d35b;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1181f0();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f63d364;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1181f0();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f501357;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1181f0();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f36af8d;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1181f0();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a1181f0; end: 10a118297;  */

undefined8 * FUN_10a1181f0(undefined8 *param_1,undefined8 *param_2,ushort param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a118298);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a118298; end: 10a1183b7;  */

void FUN_10a118298(undefined8 param_1)

{
  undefined1 uStack_a9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f63d36e;
  uStack_88 = 0x4ffffffff;
  uStack_90 = 0x40000000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  puStack_70 = &UNK_10f63ce51;
  uStack_68 = 0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1183b8(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f63d37e;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_a9 = 1;
  FUN_10a118410(param_1,&puStack_a8,&uStack_a9);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f63d387;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_a9 = 2;
  FUN_10a118410(param_1,&puStack_a8,&uStack_a9);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a1183b8; end: 10a11840f;  */

ulong FUN_10a1183b8(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10a118410; end: 10a118467;  */

ulong FUN_10a118410(ulong param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a144234(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a118468; end: 10a118583;  */

void FUN_10a118468(undefined8 param_1)

{
  undefined1 uStack_a9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f63d38f;
  uStack_88 = 0x4ffffffff;
  uStack_90 = 0x40000000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  puStack_70 = &UNK_10f63ce51;
  uStack_68 = 0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a118584(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f63d394;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_a9 = 0;
  FUN_10a1185dc(param_1,&puStack_a8,&uStack_a9);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f63d399;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_a9 = 1;
  FUN_10a1185dc(param_1,&puStack_a8,&uStack_a9);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a118584; end: 10a1185db;  */

ulong FUN_10a118584(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10a1185dc; end: 10a118633;  */

ulong FUN_10a1185dc(ulong param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x00010a1442a8(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a118634; end: 10a1188bb;  */

void FUN_10a118634(ulong param_1)

{
  ulong uVar1;
  char *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "ControllerType";
  uStack_88 = 0x4ffffffff;
  uStack_90 = 0x40000000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  puStack_70 = &UNK_10f63ce51;
  uStack_68 = 0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&pcStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,pcStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Unknown";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1188bc(param_1,&pcStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Standard";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1188bc();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Xbox360";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1188bc();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "XboxOne";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1188bc();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "PS3";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1188bc();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "PS4";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1188bc();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "PS5";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1188bc();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "NintendoSwitchPro";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1188bc();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a1188bc; end: 10a118963;  */

undefined8 * FUN_10a1188bc(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a118964);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a118964; end: 10a118ad3;  */

void FUN_10a118964(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f63d3dc;
  uStack_88 = 0x4ffffffff;
  uStack_90 = 0x40000000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  puStack_70 = &UNK_10f63ce51;
  uStack_68 = 0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f63d3f1;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a118ad4(param_1,&puStack_a8,1);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f63d400;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a118ad4();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f63d407;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a118ad4();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a118ad4; end: 10a118b77;  */

undefined8 * FUN_10a118ad4(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a118b78);
      (*pcVar1)();
    }
    puStack_38 = (undefined8 *)(double)param_3;
    aiStack_40[0] = 3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a118b78; end: 10a118d1f;  */

void FUN_10a118b78(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f63d410;
  uStack_88 = 0x4ffffffff;
  uStack_90 = 0x40000000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  puStack_70 = &UNK_10f63ce51;
  uStack_68 = 0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f63346e;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a118d20(param_1,&puStack_a8,1);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f633474;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a118d20();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f63347a;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a118d20();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f303078;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x175;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a118d20();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a118d20; end: 10a119a9f;  */

undefined8 * FUN_10a118d20(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a118dc8);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a119aa0; end: 10a119b2b;  */

void FUN_10a119aa0(uint *param_1,long param_2,ulong param_3,long *param_4,uint param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  ushort *puVar4;
  ushort uVar5;
  uint uVar6;
  long lVar7;
  code *pcVar8;
  undefined *puVar9;
  int iVar10;
  undefined4 uVar11;
  ulong uVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  long lStack_78;
  char *pcStack_68;
  char *pcStack_60;
  undefined8 uStack_58;
  
  uVar11 = (undefined4)((ulong)param_6 >> 0x20);
  iVar10 = (int)param_6;
  if (param_5 - 1 < 0x1f) {
    uVar12 = 0;
    if (param_2 - (long)param_1 == 0) {
      uVar15 = (long)((long)param_4 - param_3) >> 2;
    }
    else {
      lVar16 = param_2 - (long)param_1 >> 2;
      uVar15 = (long)((long)param_4 - param_3) >> 2;
      do {
        if ((*param_1 ^ -1 << (ulong)(param_5 & 0x1f)) == 0xffffffff) {
          if (uVar15 <= uVar12) goto LAB_10a119b20;
          lVar1 = uVar12 * 4;
          uVar12 = uVar12 + 1;
          *param_1 = *(uint *)(param_3 + lVar1);
        }
        param_1 = param_1 + 1;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    if (uVar12 == uVar15) {
      return;
    }
  }
LAB_10a119b20:
  puVar9 = &UNK_10f63b8ac;
  FUN_10a00946c();
  uVar12 = CONCAT44(uVar11,iVar10);
  if (iVar10 == 0) {
    pbVar3 = *(byte **)(puVar9 + 8);
    if (*(byte **)(puVar9 + 0x10) != pbVar3) {
      uVar12 = (ulong)*pbVar3;
      *(byte **)(puVar9 + 8) = pbVar3 + 1;
      goto LAB_10a119b70;
    }
LAB_10a119de8:
    FUN_10a00946c(&UNK_10f63b8ac);
  }
  else {
LAB_10a119b70:
    if (0x1f < (uint)uVar12) goto LAB_10a119de8;
    pcStack_68 = (char *)0x0;
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    if ((int)param_2 == 0) {
      if ((ulong)(*(long *)(puVar9 + 0x10) - *(long *)(puVar9 + 8)) < param_3 + 7 >> 3) {
        FUN_10a00946c(&UNK_10f63b8ac);
        goto LAB_10a119e20;
      }
      *(ulong *)(puVar9 + 8) = *(long *)(puVar9 + 8) + (param_3 + 7 >> 3);
      FUN_10a131660(&pcStack_68);
      if (pcStack_68 != pcStack_60) {
        uVar15 = 0;
        pcVar13 = pcStack_68;
        do {
          if (*pcVar13 != '\0') {
            uVar15 = uVar15 + (byte)POPCOUNT(*pcVar13);
          }
          pcVar13 = pcVar13 + 1;
        } while (pcVar13 != pcStack_60);
        goto LAB_10a119c80;
      }
LAB_10a119c98:
      uVar15 = 0;
    }
    else {
      puVar4 = *(ushort **)(puVar9 + 8);
      if ((ulong)(*(long *)(puVar9 + 0x10) - (long)puVar4) < 2) {
        FUN_10a00946c(&UNK_10f63b8ac);
        goto LAB_10a119e20;
      }
      uVar5 = *puVar4;
      uVar15 = (ulong)uVar5;
      *(ushort **)(puVar9 + 8) = puVar4 + 1;
      uStack_80 = 0;
      if (param_3 != 0) {
        func_0x000105343774(&pcStack_68,param_3 + 7 >> 3,&uStack_80);
      }
      uVar14 = uVar15;
      if (uVar5 == 0) goto LAB_10a119c98;
      do {
        puVar4 = *(ushort **)(puVar9 + 8);
        if ((ulong)(*(long *)(puVar9 + 0x10) - (long)puVar4) < 2) {
LAB_10a119db8:
          FUN_10a00946c(&UNK_10f63b8ac);
          goto LAB_10a119e20;
        }
        uVar5 = *puVar4;
        *(ushort **)(puVar9 + 8) = puVar4 + 1;
        if (param_3 <= uVar5) goto LAB_10a119db8;
        if ((ulong)((long)pcStack_60 - (long)pcStack_68) <= (ulong)(uVar5 >> 3)) goto LAB_10a119e20;
        uVar6 = 1 << (ulong)(uVar5 & 7);
        if ((uVar6 & (byte)pcStack_68[uVar5 >> 3]) != 0) {
          FUN_10a00946c(&UNK_10f63b8ac);
          goto LAB_10a119e20;
        }
        pcStack_68[uVar5 >> 3] = pcStack_68[uVar5 >> 3] | (byte)uVar6;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
LAB_10a119c80:
      if (((uint)uVar12 == 0) && (uVar15 != 0)) {
        FUN_10a00946c(&UNK_10f63b8ac);
        goto LAB_10a119e20;
      }
    }
    uVar14 = (uVar15 + 7 >> 3) * (uVar12 & 0xffffffff);
    lVar16 = *(long *)(puVar9 + 8);
    if (uVar14 <= (ulong)(*(long *)(puVar9 + 0x10) - lVar16)) {
      *(ulong *)(puVar9 + 8) = lVar16 + uVar14;
      FUN_109ffe100(&uStack_80,uVar15);
      func_0x00010a118dc8(lVar16,uVar15,uVar12,CONCAT71(uStack_7f,uStack_80));
      if (param_5 - 1 < 0x1f) {
        lVar16 = *param_4;
        lVar1 = param_4[1];
        lVar7 = CONCAT71(uStack_7f,uStack_80);
        if (lVar1 - lVar16 == 0) {
          uVar12 = 0;
          uVar14 = lStack_78 - lVar7 >> 2;
        }
        else {
          uVar15 = 0;
          uVar12 = 0;
          uVar14 = lStack_78 - lVar7 >> 2;
          do {
            if ((ulong)((long)pcStack_60 - (long)pcStack_68) <= uVar15 >> 3) goto LAB_10a119e20;
            if (((byte)pcStack_68[uVar15 >> 3] >> (ulong)((uint)uVar15 & 7) & 1) != 0) {
              if (uVar14 <= uVar12) goto LAB_10a119dc8;
              lVar2 = uVar12 * 4;
              uVar12 = uVar12 + 1;
              *(uint *)(lVar16 + uVar15 * 4) =
                   *(uint *)(lVar16 + uVar15 * 4) |
                   *(int *)(lVar7 + lVar2) << (ulong)(param_5 & 0x1f);
            }
            uVar15 = uVar15 + 1;
          } while (lVar1 - lVar16 >> 2 != uVar15);
        }
        if (uVar12 == uVar14) {
          if (lVar7 != 0) {
            lStack_78 = lVar7;
            __ZdlPv(lVar7);
          }
          if (pcStack_68 != (char *)0x0) {
            pcStack_60 = pcStack_68;
            __ZdlPv();
          }
          return;
        }
      }
LAB_10a119dc8:
      FUN_10a00946c(&UNK_10f63b8ac);
      goto LAB_10a119e20;
    }
  }
  FUN_10a00946c(&UNK_10f63b8ac);
LAB_10a119e20:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a119e24);
  (*pcVar8)();
}



/* Entry: 10a119b2c; end: 10a119e73;  */

void FUN_10a119b2c(long param_1,int param_2,ulong param_3,long *param_4,uint param_5,ulong param_6)

{
  long lVar1;
  byte *pbVar2;
  ushort *puVar3;
  long lVar4;
  long lVar5;
  ushort uVar6;
  uint uVar7;
  long lVar8;
  code *pcVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  long lStack_68;
  char *pcStack_58;
  char *pcStack_50;
  undefined8 uStack_48;
  
  if ((int)param_6 == 0) {
    pbVar2 = *(byte **)(param_1 + 8);
    if (*(byte **)(param_1 + 0x10) != pbVar2) {
      param_6 = (ulong)*pbVar2;
      *(byte **)(param_1 + 8) = pbVar2 + 1;
      goto LAB_10a119b70;
    }
LAB_10a119de8:
    FUN_10a00946c(&UNK_10f63b8ac);
  }
  else {
LAB_10a119b70:
    if (0x1f < (uint)param_6) goto LAB_10a119de8;
    pcStack_58 = (char *)0x0;
    pcStack_50 = (char *)0x0;
    uStack_48 = 0;
    if (param_2 == 0) {
      if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) < param_3 + 7 >> 3) {
        FUN_10a00946c(&UNK_10f63b8ac);
        goto LAB_10a119e20;
      }
      *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) + (param_3 + 7 >> 3);
      FUN_10a131660(&pcStack_58);
      if (pcStack_58 != pcStack_50) {
        uVar13 = 0;
        pcVar10 = pcStack_58;
        do {
          if (*pcVar10 != '\0') {
            uVar13 = uVar13 + (byte)POPCOUNT(*pcVar10);
          }
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 != pcStack_50);
        goto LAB_10a119c80;
      }
LAB_10a119c98:
      uVar13 = 0;
    }
    else {
      puVar3 = *(ushort **)(param_1 + 8);
      if ((ulong)(*(long *)(param_1 + 0x10) - (long)puVar3) < 2) {
        FUN_10a00946c(&UNK_10f63b8ac);
        goto LAB_10a119e20;
      }
      uVar6 = *puVar3;
      uVar13 = (ulong)uVar6;
      *(ushort **)(param_1 + 8) = puVar3 + 1;
      uStack_70 = 0;
      if (param_3 != 0) {
        func_0x000105343774(&pcStack_58,param_3 + 7 >> 3,&uStack_70);
      }
      uVar11 = uVar13;
      if (uVar6 == 0) goto LAB_10a119c98;
      do {
        puVar3 = *(ushort **)(param_1 + 8);
        if ((ulong)(*(long *)(param_1 + 0x10) - (long)puVar3) < 2) {
LAB_10a119db8:
          FUN_10a00946c(&UNK_10f63b8ac);
          goto LAB_10a119e20;
        }
        uVar6 = *puVar3;
        *(ushort **)(param_1 + 8) = puVar3 + 1;
        if (param_3 <= uVar6) goto LAB_10a119db8;
        if ((ulong)((long)pcStack_50 - (long)pcStack_58) <= (ulong)(uVar6 >> 3)) goto LAB_10a119e20;
        uVar7 = 1 << (ulong)(uVar6 & 7);
        if ((uVar7 & (byte)pcStack_58[uVar6 >> 3]) != 0) {
          FUN_10a00946c(&UNK_10f63b8ac);
          goto LAB_10a119e20;
        }
        pcStack_58[uVar6 >> 3] = pcStack_58[uVar6 >> 3] | (byte)uVar7;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
LAB_10a119c80:
      if (((uint)param_6 == 0) && (uVar13 != 0)) {
        FUN_10a00946c(&UNK_10f63b8ac);
        goto LAB_10a119e20;
      }
    }
    uVar11 = (uVar13 + 7 >> 3) * (param_6 & 0xffffffff);
    lVar4 = *(long *)(param_1 + 8);
    if (uVar11 <= (ulong)(*(long *)(param_1 + 0x10) - lVar4)) {
      *(ulong *)(param_1 + 8) = lVar4 + uVar11;
      FUN_109ffe100(&uStack_70,uVar13);
      func_0x00010a118dc8(lVar4,uVar13,param_6,CONCAT71(uStack_6f,uStack_70));
      if (param_5 - 1 < 0x1f) {
        lVar4 = *param_4;
        lVar5 = param_4[1];
        lVar8 = CONCAT71(uStack_6f,uStack_70);
        if (lVar5 - lVar4 == 0) {
          uVar13 = 0;
          uVar12 = lStack_68 - lVar8 >> 2;
        }
        else {
          uVar11 = 0;
          uVar13 = 0;
          uVar12 = lStack_68 - lVar8 >> 2;
          do {
            if ((ulong)((long)pcStack_50 - (long)pcStack_58) <= uVar11 >> 3) goto LAB_10a119e20;
            if (((byte)pcStack_58[uVar11 >> 3] >> (ulong)((uint)uVar11 & 7) & 1) != 0) {
              if (uVar12 <= uVar13) goto LAB_10a119dc8;
              lVar1 = uVar13 * 4;
              uVar13 = uVar13 + 1;
              *(uint *)(lVar4 + uVar11 * 4) =
                   *(uint *)(lVar4 + uVar11 * 4) |
                   *(int *)(lVar8 + lVar1) << (ulong)(param_5 & 0x1f);
            }
            uVar11 = uVar11 + 1;
          } while (lVar5 - lVar4 >> 2 != uVar11);
        }
        if (uVar13 == uVar12) {
          if (lVar8 != 0) {
            lStack_68 = lVar8;
            __ZdlPv(lVar8);
          }
          if (pcStack_58 != (char *)0x0) {
            pcStack_50 = pcStack_58;
            __ZdlPv();
          }
          return;
        }
      }
LAB_10a119dc8:
      FUN_10a00946c(&UNK_10f63b8ac);
      goto LAB_10a119e20;
    }
  }
  FUN_10a00946c(&UNK_10f63b8ac);
LAB_10a119e20:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a119e24);
  (*pcVar9)();
}



/* Entry: 10a119e74; end: 10a119f2f;  */

void FUN_10a119e74(long *param_1,undefined8 param_2,ulong param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined1 *puVar1;
  int *piVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  code *pcVar7;
  undefined **ppuVar8;
  long *plVar9;
  undefined *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined4 uVar15;
  uint uVar16;
  ulong uVar17;
  undefined4 *puVar18;
  long lVar19;
  int *piVar20;
  uint *puVar21;
  long lVar22;
  uint *puVar23;
  int *piVar24;
  long lVar25;
  undefined *unaff_x19;
  ulong uVar26;
  undefined8 uVar27;
  ulong uVar28;
  ushort *puVar29;
  undefined8 *puVar30;
  long *unaff_x20;
  ulong unaff_x21;
  undefined *puVar31;
  undefined8 unaff_x22;
  ulong uVar32;
  undefined *unaff_x23;
  undefined8 unaff_x24;
  long lVar33;
  ulong uVar34;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  ulong uVar35;
  undefined8 unaff_x27;
  ushort *puVar36;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auStack_70 [8];
  undefined *apuStack_68 [2];
  int iStack_54;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  ppuVar8 = apuStack_68;
  uVar27 = param_2;
  uVar13 = param_3;
  puVar31 = param_5;
  func_0x000107c2ae68();
  puVar14 = (undefined *)0x0;
  if (iStack_54 != 1) {
    puVar14 = apuStack_68[0];
  }
  if (ppuVar8 != (undefined **)0x0) {
    puVar14 = (undefined *)0xfffffffffffffffe;
  }
  if (((undefined *)0xfffffffffffffffd < puVar14) ||
     (plVar9 = param_1, uVar12 = param_2, uVar34 = param_3, puVar10 = param_5, param_4 < puVar14)) {
    plVar9 = (long *)&UNK_10f63b8ac;
    unaff_x30 = FUN_10a119f30;
    FUN_10a00946c();
    register0x00000008 = (BADSPACEBASE *)auStack_70;
    uVar12 = uVar27;
    uVar34 = uVar13;
    puVar10 = puVar31;
    unaff_x19 = param_5;
    unaff_x20 = param_1;
    unaff_x21 = param_3;
    unaff_x22 = param_2;
    unaff_x23 = param_4;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  if (uVar34 != 0) {
    FUN_10a0dc020(plVar9,puVar14);
    lVar33 = *plVar9;
    puVar31 = puVar10;
    func_0x000107c34f10(puVar10);
    func_0x000107c34f0c(puVar10,lVar33,puVar14,uVar12,uVar34,0,0,puVar31);
    if (puVar10 < (undefined *)0xffffffffffffff89 && puVar10 == puVar14) {
      return;
    }
    FUN_10a00946c(&UNK_10f63b8ac);
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10a119fb4);
    (*pcVar7)();
  }
  if (puVar14 == (undefined *)0x0) {
    *plVar9 = 0;
    plVar9[1] = 0;
    plVar9[2] = 0;
    return;
  }
  puVar31 = &UNK_10f63b8ac;
  FUN_10a00946c();
  if (*plVar9 != 0) {
    plVar9[1] = *plVar9;
    __ZdlPv();
  }
  puVar10 = puVar31;
  __Unwind_Resume();
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x24;
  *(undefined **)((long)register0x00000008 + -0x78) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x68) = unaff_x21;
  *(undefined **)((long)register0x00000008 + -0x60) = puVar31;
  *(long **)((long)register0x00000008 + -0x58) = plVar9;
  *(undefined1 **)((long)register0x00000008 + -0x50) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x48) = FUN_10a119ffc;
  *(undefined **)((long)register0x00000008 + -0x160) = puVar10;
  *(undefined8 *)((long)register0x00000008 + -0x158) = uVar12;
  if (puVar14 == (undefined *)0x0) {
    puVar31 = &UNK_10e010ee0;
    func_0x000107c2ae5c();
    puVar14 = puVar31;
  }
  else {
    puVar31 = (undefined *)0x0;
  }
  lVar33 = *(long *)((long)register0x00000008 + -0x158);
  puVar11 = *(uint **)(lVar33 + 8);
  puVar21 = *(uint **)(lVar33 + 0x10);
  if (3 < (ulong)((long)puVar21 - (long)puVar11)) {
    uVar13 = (ulong)*puVar11;
    *(uint **)(lVar33 + 8) = puVar11 + 1;
    if (3 < (ulong)((long)puVar21 - (long)(puVar11 + 1))) {
      uVar16 = puVar11[1];
      uVar32 = (ulong)uVar16;
      *(uint **)(lVar33 + 8) = puVar11 + 2;
      if (3 < (ulong)((long)puVar21 - (long)(puVar11 + 2))) {
        uVar4 = puVar11[2];
        *(uint **)(lVar33 + 8) = puVar11 + 3;
        if (puVar21 != puVar11 + 3) {
          *(ulong *)((long)register0x00000008 + -0x150) = (ulong)(byte)puVar11[3];
          *(uint **)(lVar33 + 8) = (uint *)((long)puVar11 + 0xd);
          if (puVar21 != (uint *)((long)puVar11 + 0xd)) {
            bVar6 = *(byte *)((long)puVar11 + 0xd);
            lVar22 = (long)puVar11 + 0xe;
            *(long *)(lVar33 + 8) = lVar22;
            if (uVar32 + uVar13 <= (ulong)((long)puVar21 - lVar22)) {
              if (bVar6 == 0) {
                *(ulong *)((long)register0x00000008 + -0x170) = uVar32;
                *(undefined **)((long)register0x00000008 + -0x168) = puVar31;
                *(ulong *)(lVar33 + 8) = lVar22 + uVar13;
                uVar26 = uVar34 & 0xffffffff;
                uVar32 = uVar26 + 0x1ff >> 9;
                FUN_10a119e74((undefined1 *)((long)register0x00000008 + -0xc0),lVar22,uVar13,
                              uVar32 * 5 + (uVar34 & 0xffffffff) * 0x27,puVar14);
                uVar13 = *(ulong *)((long)register0x00000008 + -0xc0);
                uVar34 = *(ulong *)((long)register0x00000008 + -0xb8);
                *(ulong *)((long)register0x00000008 + -0xd8) = uVar13;
                *(ulong *)((long)register0x00000008 + -200) = uVar34;
                uVar27 = *(undefined8 *)((long)register0x00000008 + -0x150);
                if (uVar34 < uVar13) {
                  FUN_10a00946c(&UNK_10f63b8ac);
                  goto LAB_10a11a7e8;
                }
                if (uVar34 - uVar13 < uVar32) {
                  FUN_10a00946c(&UNK_10f63b8ac);
                  goto LAB_10a11a7e8;
                }
                *(ulong *)((long)register0x00000008 + -0xd0) = uVar13 + uVar32;
                *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
                *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
                *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
                FUN_10a1319a4((undefined1 *)((long)register0x00000008 + -0xf0),uVar13,
                              uVar13 + uVar32,uVar32);
                *(uint *)((long)register0x00000008 + -0x174) = uVar4;
                FUN_109ffe100((undefined1 *)((long)register0x00000008 + -0x138),uVar26);
                uVar34 = 0;
                uVar13 = 0;
                uVar15 = 0x1f;
                if (-1 < (char)uVar27) {
                  uVar15 = 0x3f;
                }
                *(undefined4 *)((long)register0x00000008 + -0x13c) = uVar15;
                *(ulong *)((long)register0x00000008 + -0x148) = uVar32;
                do {
                  uVar28 = uVar26 - uVar34;
                  uVar32 = uVar28;
                  if (0x1ff < uVar28) {
                    uVar32 = 0x200;
                  }
                  if ((ulong)(*(long *)((long)register0x00000008 + -0xe8) -
                             *(long *)((long)register0x00000008 + -0xf0)) <= uVar13)
                  goto LAB_10a11a7e8;
                  bVar6 = *(byte *)(*(long *)((long)register0x00000008 + -0xf0) + uVar13);
                  uVar35 = (ulong)(*(uint *)((long)register0x00000008 + -0x13c) & (uint)bVar6);
                  if (0x1e < (*(uint *)((long)register0x00000008 + -0x13c) & (uint)bVar6) - 1) {
                    FUN_10a00946c(&UNK_10f63b8ac);
                    goto LAB_10a11a7e8;
                  }
                  uVar17 = (uVar32 + 7 >> 3) * uVar35;
                  lVar33 = *(long *)((long)register0x00000008 + -0xd0);
                  lVar22 = *(long *)((long)register0x00000008 + -200);
                  if ((ulong)(lVar22 - lVar33) < uVar17) {
                    FUN_10a00946c(&UNK_10f63b8ac);
                    goto LAB_10a11a7e8;
                  }
                  puVar29 = (ushort *)(lVar33 + uVar17);
                  *(ushort **)((long)register0x00000008 + -0xd0) = puVar29;
                  FUN_109ffe100((undefined1 *)((long)register0x00000008 + -0x108),uVar32);
                  func_0x00010a118dc8(lVar33,uVar32,uVar35,
                                      *(undefined8 *)((long)register0x00000008 + -0x108));
                  if ((bVar6 >> 6 & 1) != 0) {
                    if (((uint)*(undefined8 *)((long)register0x00000008 + -0x150) >> 7 & 1) == 0) {
                      if ((ulong)(lVar22 - (long)puVar29) < 2) {
                        FUN_10a00946c(&UNK_10f63b8ac);
                        goto LAB_10a11a7e8;
                      }
                      puVar36 = puVar29 + 1;
                      uVar17 = (ulong)*puVar29;
                      *(ushort **)((long)register0x00000008 + -0xd0) = puVar36;
                      if (uVar17 != 0) {
                        if ((ulong)(lVar22 - (long)puVar36) < uVar17 << 2) {
                          FUN_10a00946c(&UNK_10f63b8ac);
                          goto LAB_10a11a7e8;
                        }
                        *(ushort **)((long)register0x00000008 + -0xd0) = puVar36 + uVar17 * 2;
                        FUN_109ffe100((undefined1 *)((long)register0x00000008 + -0x120));
                        _memcpy(*(undefined8 *)((long)register0x00000008 + -0x120),puVar36,
                                uVar17 * 4);
                        FUN_10a119aa0(*(undefined8 *)((long)register0x00000008 + -0x108),
                                      *(undefined8 *)((long)register0x00000008 + -0x100),
                                      *(undefined8 *)((long)register0x00000008 + -0x120),
                                      *(undefined8 *)((long)register0x00000008 + -0x118),uVar35);
                        if (*(long *)((long)register0x00000008 + -0x120) != 0) {
                          *(long *)((long)register0x00000008 + -0x118) =
                               *(long *)((long)register0x00000008 + -0x120);
                          __ZdlPv();
                        }
                      }
                    }
                    else {
                      FUN_10a119b2c((undefined1 *)((long)register0x00000008 + -0xd8),bVar6 >> 5 & 1,
                                    uVar32,(undefined1 *)((long)register0x00000008 + -0x108),uVar35,
                                    0);
                    }
                  }
                  puVar11 = *(uint **)((long)register0x00000008 + -0x108);
                  if ((char)bVar6 < '\0') {
                    lVar33 = *(long *)((long)register0x00000008 + -0x100);
                    if (lVar33 - (long)puVar11 == 0) goto LAB_10a11a7e8;
                    lVar22 = *(long *)((long)register0x00000008 + -0x138);
                    lVar3 = *(long *)((long)register0x00000008 + -0x130);
                    if ((ulong)(lVar3 - lVar22 >> 2) <= uVar34) goto LAB_10a11a7e8;
                    uVar16 = -(*puVar11 & 1) ^ *puVar11 >> 1;
                    *(uint *)(lVar22 + uVar34 * 4) = uVar16;
                    uVar35 = *(ulong *)((long)register0x00000008 + -0x148);
                    if (1 < uVar28) {
                      lVar25 = lVar33 - (long)puVar11 >> 2;
                      lVar19 = uVar32 - 1;
                      puVar21 = (uint *)(lVar22 + uVar34 * 4);
                      lVar33 = ~uVar34 + (lVar3 - lVar22 >> 2);
                      puVar23 = puVar11;
                      do {
                        lVar25 = lVar25 + -1;
                        puVar23 = puVar23 + 1;
                        puVar21 = puVar21 + 1;
                        if ((lVar25 == 0) || (lVar33 == 0)) goto LAB_10a11a7e8;
                        uVar16 = (-(*puVar23 & 1) ^ *puVar23 >> 1) + uVar16;
                        *puVar21 = uVar16;
                        lVar33 = lVar33 + -1;
                        lVar19 = lVar19 + -1;
                      } while (lVar19 != 0);
                    }
LAB_10a11a454:
                    uVar34 = uVar32 + uVar34;
LAB_10a11a458:
                    *(uint **)((long)register0x00000008 + -0x100) = puVar11;
                    __ZdlPv();
                  }
                  else {
                    if (uVar26 != uVar34) {
                      lVar22 = *(long *)((long)register0x00000008 + -0x100) - (long)puVar11 >> 2;
                      uVar28 = *(long *)((long)register0x00000008 + -0x130) -
                               *(long *)((long)register0x00000008 + -0x138) >> 2;
                      lVar33 = 0;
                      if (uVar34 <= uVar28) {
                        lVar33 = uVar28 - uVar34;
                      }
                      uVar35 = *(ulong *)((long)register0x00000008 + -0x148);
                      puVar21 = (uint *)(*(long *)((long)register0x00000008 + -0x138) + uVar34 * 4);
                      puVar23 = puVar11;
                      uVar28 = uVar32;
                      do {
                        if ((lVar22 == 0) || (lVar33 == 0)) goto LAB_10a11a7e8;
                        *puVar21 = *puVar23;
                        lVar33 = lVar33 + -1;
                        lVar22 = lVar22 + -1;
                        uVar28 = uVar28 - 1;
                        puVar21 = puVar21 + 1;
                        puVar23 = puVar23 + 1;
                      } while (uVar28 != 0);
                      goto LAB_10a11a454;
                    }
                    uVar34 = uVar32 + uVar26;
                    uVar35 = *(ulong *)((long)register0x00000008 + -0x148);
                    if (puVar11 != (uint *)0x0) goto LAB_10a11a458;
                  }
                  uVar13 = uVar13 + 1;
                } while (uVar13 != uVar35);
                puVar31 = *(undefined **)((long)register0x00000008 + -0x168);
                iVar5 = *(int *)((long)register0x00000008 + -0x174);
                if (*(long *)((long)register0x00000008 + -0xd0) !=
                    *(long *)((long)register0x00000008 + -200)) {
                  FUN_10a00946c(&UNK_10f63b8ac);
                  goto LAB_10a11a7e8;
                }
                puVar30 = *(undefined8 **)((long)register0x00000008 + -0x160);
                if (*(long *)((long)register0x00000008 + -0xf0) != 0) {
                  *(long *)((long)register0x00000008 + -0xe8) =
                       *(long *)((long)register0x00000008 + -0xf0);
                  __ZdlPv();
                }
                if (*(long *)((long)register0x00000008 + -0xc0) != 0) {
                  *(long *)((long)register0x00000008 + -0xb8) =
                       *(long *)((long)register0x00000008 + -0xc0);
                  __ZdlPv();
                }
                uVar13 = *(ulong *)((long)register0x00000008 + -0x170);
                if ((int)uVar13 != 0) {
                  lVar33 = *(long *)((long)register0x00000008 + -0x158);
                  if ((ulong)(*(long *)(lVar33 + 0x10) - *(long *)(lVar33 + 8)) < uVar13) {
                    FUN_10a00946c(&UNK_10f63b8ac);
                    goto LAB_10a11a7e8;
                  }
                  *(ulong *)(lVar33 + 8) = *(long *)(lVar33 + 8) + uVar13;
                }
                FUN_109ffe1f4(puVar30,*(long *)((long)register0x00000008 + -0x130) -
                                      *(long *)((long)register0x00000008 + -0x138) >> 2);
                piVar2 = *(int **)((long)register0x00000008 + -0x138);
                lVar33 = *(long *)((long)register0x00000008 + -0x130) - (long)piVar2;
                if (lVar33 == 0) {
                  if (*(long *)((long)register0x00000008 + -0x130) == 0) goto LAB_10a11a70c;
                }
                else {
                  lVar33 = lVar33 >> 2;
                  lVar22 = puVar30[1] - (long)*puVar30 >> 2;
                  piVar20 = (int *)*puVar30;
                  piVar24 = piVar2;
                  do {
                    if (lVar22 == 0) goto LAB_10a11a7e8;
                    *piVar20 = *piVar24 + iVar5;
                    lVar22 = lVar22 + -1;
                    lVar33 = lVar33 + -1;
                    piVar20 = piVar20 + 1;
                    piVar24 = piVar24 + 1;
                  } while (lVar33 != 0);
                }
                *(int **)((long)register0x00000008 + -0x130) = piVar2;
              }
              else {
                if (0x1f < bVar6) goto LAB_10a11a758;
                uVar34 = uVar34 & 0xffffffff;
                uVar26 = uVar34 + 7 >> 3;
                *(ulong *)(lVar33 + 8) = lVar22 + uVar13;
                FUN_10a119f30((undefined1 *)((long)register0x00000008 + -0xf0),lVar22,uVar13,
                              uVar26 * (uint)bVar6,puVar14);
                FUN_109ffe100((undefined1 *)((long)register0x00000008 + -0x108),uVar34);
                func_0x00010a118dc8(*(undefined8 *)((long)register0x00000008 + -0xf0),uVar34,bVar6,
                                    *(undefined8 *)((long)register0x00000008 + -0x108));
                if (uVar16 != 0) {
                  lVar33 = *(long *)((long)register0x00000008 + -0x158);
                  lVar22 = *(long *)(lVar33 + 8);
                  uVar13 = *(long *)(lVar33 + 0x10) - lVar22;
                  if ((int)*(undefined8 *)((long)register0x00000008 + -0x150) == 0) {
                    if (uVar13 < uVar32) goto LAB_10a11a78c;
                    *(ulong *)(lVar33 + 8) = lVar22 + uVar32;
                  }
                  else {
                    if (uVar13 < uVar32) {
LAB_10a11a78c:
                      FUN_10a00946c(&UNK_10f63b8ac);
                      goto LAB_10a11a7e8;
                    }
                    *(ulong *)(lVar33 + 8) = lVar22 + uVar32;
                    if (((uint)*(undefined8 *)((long)register0x00000008 + -0x150) >> 7 & 1) == 0) {
                      if (((uint)*(undefined8 *)((long)register0x00000008 + -0x150) != 0x10) &&
                         ((int)*(undefined8 *)((long)register0x00000008 + -0x150) != 0x20))
                      goto LAB_10a11a78c;
                      if (*(uint **)((long)register0x00000008 + -0x108) ==
                          *(uint **)((long)register0x00000008 + -0x100)) {
                        lVar33 = 0;
                      }
                      else {
                        lVar33 = 0;
                        puVar11 = *(uint **)((long)register0x00000008 + -0x108);
                        do {
                          puVar21 = puVar11 + 1;
                          if ((*puVar11 ^ -1 << (ulong)(bVar6 & 0x1f)) == 0xffffffff) {
                            lVar33 = lVar33 + 1;
                          }
                          puVar11 = puVar21;
                        } while (puVar21 != *(uint **)((long)register0x00000008 + -0x100));
                      }
                      FUN_10a119f30((undefined1 *)((long)register0x00000008 + -0xc0),lVar22,uVar32,
                                    lVar33 * (*(ulong *)((long)register0x00000008 + -0x150) >> 3),
                                    puVar14);
                      puVar29 = *(ushort **)((long)register0x00000008 + -0xc0);
                      uVar13 = *(long *)((long)register0x00000008 + -0xb8) - (long)puVar29;
                      *(undefined **)((long)register0x00000008 + -0x168) = puVar31;
                      if (uVar13 == 0) {
                        *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
                        *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
                        *(undefined8 *)((long)register0x00000008 + -200) = 0;
                      }
                      else if ((int)*(undefined8 *)((long)register0x00000008 + -0x150) == 0x10) {
                        uVar34 = uVar13 >> 1;
                        FUN_109ffe100((undefined1 *)((long)register0x00000008 + -0xd8),uVar34);
                        if (1 < uVar13) {
                          lVar33 = *(long *)((long)register0x00000008 + -0xd0) -
                                   (long)*(uint **)((long)register0x00000008 + -0xd8) >> 2;
                          puVar11 = *(uint **)((long)register0x00000008 + -0xd8);
                          do {
                            if (lVar33 == 0) goto LAB_10a11a7e8;
                            *puVar11 = (uint)*puVar29;
                            lVar33 = lVar33 + -1;
                            uVar34 = uVar34 - 1;
                            puVar11 = puVar11 + 1;
                            puVar29 = puVar29 + 1;
                          } while (uVar34 != 0);
                        }
                      }
                      else {
                        uVar34 = uVar13 >> 2;
                        FUN_109ffe100((undefined1 *)((long)register0x00000008 + -0xd8),uVar34);
                        if (3 < uVar13) {
                          lVar33 = *(long *)((long)register0x00000008 + -0xd0) -
                                   (long)*(undefined4 **)((long)register0x00000008 + -0xd8) >> 2;
                          puVar18 = *(undefined4 **)((long)register0x00000008 + -0xd8);
                          do {
                            if (lVar33 == 0) goto LAB_10a11a7e8;
                            *puVar18 = *(undefined4 *)puVar29;
                            lVar33 = lVar33 + -1;
                            uVar34 = uVar34 - 1;
                            puVar18 = puVar18 + 1;
                            puVar29 = puVar29 + 2;
                          } while (uVar34 != 0);
                        }
                      }
                      FUN_10a119aa0(*(undefined8 *)((long)register0x00000008 + -0x108),
                                    *(undefined8 *)((long)register0x00000008 + -0x100),
                                    *(undefined8 *)((long)register0x00000008 + -0xd8),
                                    *(undefined8 *)((long)register0x00000008 + -0xd0),bVar6);
                      puVar31 = *(undefined **)((long)register0x00000008 + -0x168);
                      if (*(long *)((long)register0x00000008 + -0xd8) != 0) {
                        *(long *)((long)register0x00000008 + -0xd0) =
                             *(long *)((long)register0x00000008 + -0xd8);
                        __ZdlPv();
                      }
                    }
                    else {
                      FUN_10a119e74((undefined1 *)((long)register0x00000008 + -0xc0),lVar22,uVar32,
                                    uVar26 * 0x20 + uVar34 * 2 + 4,puVar14);
                      uVar13 = *(ulong *)((long)register0x00000008 + -0xc0);
                      *(ulong *)((long)register0x00000008 + -0xd8) = uVar13;
                      *(ulong *)((long)register0x00000008 + -0xd0) = uVar13;
                      *(ulong *)((long)register0x00000008 + -200) =
                           *(ulong *)((long)register0x00000008 + -0xb8);
                      if (*(ulong *)((long)register0x00000008 + -0xb8) < uVar13) {
                        FUN_10a00946c(&UNK_10f63b8ac);
                        goto LAB_10a11a7e8;
                      }
                      FUN_10a119b2c((undefined1 *)((long)register0x00000008 + -0xd8),
                                    0xbf < (uint)*(undefined8 *)((long)register0x00000008 + -0x150),
                                    uVar34,(undefined1 *)((long)register0x00000008 + -0x108),bVar6,
                                    (uint)*(undefined8 *)((long)register0x00000008 + -0x150) & 0x3f)
                      ;
                    }
                    if (*(long *)((long)register0x00000008 + -0xc0) != 0) {
                      *(long *)((long)register0x00000008 + -0xb8) =
                           *(long *)((long)register0x00000008 + -0xc0);
                      __ZdlPv();
                    }
                  }
                }
                puVar30 = *(undefined8 **)((long)register0x00000008 + -0x160);
                FUN_109ffe1f4(puVar30,*(long *)((long)register0x00000008 + -0x100) -
                                      *(long *)((long)register0x00000008 + -0x108) >> 2);
                piVar2 = *(int **)((long)register0x00000008 + -0x108);
                lVar33 = *(long *)((long)register0x00000008 + -0x100) - (long)piVar2;
                if (lVar33 == 0) {
                  if (*(long *)((long)register0x00000008 + -0x100) != 0) goto LAB_10a11a6f4;
                }
                else {
                  lVar33 = lVar33 >> 2;
                  lVar22 = puVar30[1] - (long)*puVar30 >> 2;
                  piVar20 = (int *)*puVar30;
                  piVar24 = piVar2;
                  do {
                    if (lVar22 == 0) goto LAB_10a11a7e8;
                    *piVar20 = *piVar24 + uVar4;
                    lVar22 = lVar22 + -1;
                    lVar33 = lVar33 + -1;
                    piVar20 = piVar20 + 1;
                    piVar24 = piVar24 + 1;
                  } while (lVar33 != 0);
LAB_10a11a6f4:
                  *(int **)((long)register0x00000008 + -0x100) = piVar2;
                  __ZdlPv();
                }
                if (*(long *)((long)register0x00000008 + -0xf0) == 0) goto LAB_10a11a70c;
                *(long *)((long)register0x00000008 + -0xe8) =
                     *(long *)((long)register0x00000008 + -0xf0);
              }
              __ZdlPv();
LAB_10a11a70c:
              if (puVar31 != (undefined *)0x0) {
                func_0x000107c2ae60(puVar31);
              }
              return;
            }
          }
        }
      }
    }
  }
LAB_10a11a758:
  *(undefined **)((long)register0x00000008 + -0x168) = puVar31;
  FUN_10a00946c(&UNK_10f63b8ac);
LAB_10a11a7e8:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a11a7ec);
  (*pcVar7)();
}



/* Entry: 10a119f30; end: 10a119ffb;  */

void FUN_10a119f30(long *param_1,long param_2,ulong param_3,undefined *param_4,undefined *param_5)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  code *pcVar7;
  undefined8 *puVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint *puVar14;
  int *piVar15;
  int *piVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *puVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  uint *puVar26;
  int *piStack_138;
  int *piStack_130;
  long lStack_120;
  long lStack_118;
  uint *puStack_108;
  uint *puStack_100;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  uint *puStack_d8;
  uint *puStack_d0;
  uint *puStack_c8;
  uint *puStack_c0;
  uint *puStack_b8;
  
  if (param_3 != 0) {
    FUN_10a0dc020(param_1,param_4);
    lVar23 = *param_1;
    puVar20 = param_5;
    func_0x000107c34f10(param_5);
    func_0x000107c34f0c(param_5,lVar23,param_4,param_2,param_3,0,0,puVar20);
    if (param_5 < (undefined *)0xffffffffffffff89 && param_5 == param_4) {
      return;
    }
    FUN_10a00946c(&UNK_10f63b8ac);
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10a119fb4);
    (*pcVar7)();
  }
  if (param_4 == (undefined *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  puVar8 = (undefined8 *)&UNK_10f63b8ac;
  FUN_10a00946c();
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  __Unwind_Resume();
  if (param_4 == (undefined *)0x0) {
    puVar20 = &UNK_10e010ee0;
    func_0x000107c2ae5c();
    param_4 = puVar20;
  }
  else {
    puVar20 = (undefined *)0x0;
  }
  puVar26 = *(uint **)(param_2 + 8);
  puVar14 = *(uint **)(param_2 + 0x10);
  if (3 < (ulong)((long)puVar14 - (long)puVar26)) {
    uVar9 = (ulong)*puVar26;
    *(uint **)(param_2 + 8) = puVar26 + 1;
    if (3 < (ulong)((long)puVar14 - (long)(puVar26 + 1))) {
      uVar3 = puVar26[1];
      uVar21 = (ulong)uVar3;
      *(uint **)(param_2 + 8) = puVar26 + 2;
      if (3 < (ulong)((long)puVar14 - (long)(puVar26 + 2))) {
        uVar4 = puVar26[2];
        *(uint **)(param_2 + 8) = puVar26 + 3;
        if (puVar14 != puVar26 + 3) {
          bVar5 = (byte)puVar26[3];
          *(uint **)(param_2 + 8) = (uint *)((long)puVar26 + 0xd);
          if (puVar14 != (uint *)((long)puVar26 + 0xd)) {
            bVar6 = *(byte *)((long)puVar26 + 0xd);
            lVar23 = (long)puVar26 + 0xe;
            *(long *)(param_2 + 8) = lVar23;
            if (uVar21 + uVar9 <= (ulong)((long)puVar14 - lVar23)) {
              if (bVar6 == 0) {
                *(ulong *)(param_2 + 8) = lVar23 + uVar9;
                uVar24 = param_3 & 0xffffffff;
                uVar18 = uVar24 + 0x1ff >> 9;
                FUN_10a119e74(&puStack_c0,lVar23,uVar9,uVar18 * 5 + (param_3 & 0xffffffff) * 0x27,
                              param_4);
                puStack_d8 = puStack_c0;
                puStack_c8 = puStack_b8;
                if (puStack_b8 < puStack_c0) {
                  FUN_10a00946c(&UNK_10f63b8ac);
                  goto LAB_10a11a7e8;
                }
                if ((ulong)((long)puStack_b8 - (long)puStack_c0) < uVar18) {
                  FUN_10a00946c(&UNK_10f63b8ac);
                  goto LAB_10a11a7e8;
                }
                puStack_d0 = (uint *)((long)puStack_c0 + uVar18);
                lStack_f0 = 0;
                lStack_e8 = 0;
                uStack_e0 = 0;
                FUN_10a1319a4(&lStack_f0,puStack_c0,puStack_d0,uVar18);
                FUN_109ffe100(&piStack_138,uVar24);
                uVar22 = 0;
                uVar9 = 0;
                uVar10 = 0x1f;
                if (-1 < (char)bVar5) {
                  uVar10 = 0x3f;
                }
                do {
                  puVar14 = puStack_c8;
                  puVar26 = puStack_d0;
                  uVar19 = uVar24 - uVar22;
                  uVar2 = uVar19;
                  if (0x1ff < uVar19) {
                    uVar2 = 0x200;
                  }
                  if ((ulong)(lStack_e8 - lStack_f0) <= uVar9) goto LAB_10a11a7e8;
                  bVar6 = *(byte *)(lStack_f0 + uVar9);
                  uVar25 = (ulong)(uVar10 & bVar6);
                  if (0x1e < (uVar10 & bVar6) - 1) {
                    FUN_10a00946c(&UNK_10f63b8ac);
                    goto LAB_10a11a7e8;
                  }
                  uVar13 = (uVar2 + 7 >> 3) * uVar25;
                  if ((ulong)((long)puStack_c8 - (long)puStack_d0) < uVar13) {
                    FUN_10a00946c(&UNK_10f63b8ac);
                    goto LAB_10a11a7e8;
                  }
                  puVar1 = (uint *)((long)puStack_d0 + uVar13);
                  puStack_d0 = puVar1;
                  FUN_109ffe100(&puStack_108,uVar2);
                  func_0x00010a118dc8(puVar26,uVar2,uVar25,puStack_108);
                  if ((bVar6 >> 6 & 1) != 0) {
                    if ((char)bVar5 < '\0') {
                      FUN_10a119b2c(&puStack_d8,bVar6 >> 5 & 1,uVar2,&puStack_108,uVar25,0);
                    }
                    else {
                      if ((ulong)((long)puVar14 - (long)puVar1) < 2) {
                        FUN_10a00946c(&UNK_10f63b8ac);
                        goto LAB_10a11a7e8;
                      }
                      puVar26 = (uint *)((long)puVar1 + 2);
                      uVar13 = (ulong)(ushort)*puVar1;
                      puStack_d0 = puVar26;
                      if (uVar13 != 0) {
                        if ((ulong)((long)puVar14 - (long)puVar26) < uVar13 << 2) {
                          FUN_10a00946c(&UNK_10f63b8ac);
                          goto LAB_10a11a7e8;
                        }
                        puStack_d0 = puVar26 + uVar13;
                        FUN_109ffe100(&lStack_120);
                        _memcpy(lStack_120,puVar26,uVar13 * 4);
                        FUN_10a119aa0(puStack_108,puStack_100,lStack_120,lStack_118,uVar25);
                        if (lStack_120 != 0) {
                          lStack_118 = lStack_120;
                          __ZdlPv();
                        }
                      }
                    }
                  }
                  if ((char)bVar6 < '\0') {
                    if (((long)puStack_100 - (long)puStack_108 == 0) ||
                       (uVar25 = (long)piStack_130 - (long)piStack_138 >> 2, uVar25 <= uVar22))
                    goto LAB_10a11a7e8;
                    uVar11 = -(*puStack_108 & 1) ^ *puStack_108 >> 1;
                    piStack_138[uVar22] = uVar11;
                    if (1 < uVar19) {
                      lVar17 = (long)puStack_100 - (long)puStack_108 >> 2;
                      lVar12 = uVar2 - 1;
                      puVar26 = (uint *)(piStack_138 + uVar22);
                      lVar23 = ~uVar22 + uVar25;
                      puVar14 = puStack_108;
                      do {
                        lVar17 = lVar17 + -1;
                        puVar14 = puVar14 + 1;
                        puVar26 = puVar26 + 1;
                        if ((lVar17 == 0) || (lVar23 == 0)) goto LAB_10a11a7e8;
                        uVar11 = (-(*puVar14 & 1) ^ *puVar14 >> 1) + uVar11;
                        *puVar26 = uVar11;
                        lVar23 = lVar23 + -1;
                        lVar12 = lVar12 + -1;
                      } while (lVar12 != 0);
                    }
LAB_10a11a454:
                    uVar22 = uVar2 + uVar22;
LAB_10a11a458:
                    puStack_100 = puStack_108;
                    __ZdlPv();
                  }
                  else {
                    if (uVar24 != uVar22) {
                      lVar12 = (long)puStack_100 - (long)puStack_108 >> 2;
                      uVar19 = (long)piStack_130 - (long)piStack_138 >> 2;
                      lVar23 = 0;
                      if (uVar22 <= uVar19) {
                        lVar23 = uVar19 - uVar22;
                      }
                      puVar26 = (uint *)(piStack_138 + uVar22);
                      puVar14 = puStack_108;
                      uVar19 = uVar2;
                      do {
                        if ((lVar12 == 0) || (lVar23 == 0)) goto LAB_10a11a7e8;
                        *puVar26 = *puVar14;
                        lVar23 = lVar23 + -1;
                        lVar12 = lVar12 + -1;
                        uVar19 = uVar19 - 1;
                        puVar26 = puVar26 + 1;
                        puVar14 = puVar14 + 1;
                      } while (uVar19 != 0);
                      goto LAB_10a11a454;
                    }
                    uVar22 = uVar2 + uVar24;
                    if (puStack_108 != (uint *)0x0) goto LAB_10a11a458;
                  }
                  uVar9 = uVar9 + 1;
                } while (uVar9 != uVar18);
                if (puStack_d0 != puStack_c8) {
                  FUN_10a00946c(&UNK_10f63b8ac);
                  goto LAB_10a11a7e8;
                }
                if (lStack_f0 != 0) {
                  lStack_e8 = lStack_f0;
                  __ZdlPv();
                }
                if (puStack_c0 != (uint *)0x0) {
                  puStack_b8 = puStack_c0;
                  __ZdlPv();
                }
                if (uVar3 != 0) {
                  if ((ulong)(*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8)) < uVar21) {
                    FUN_10a00946c(&UNK_10f63b8ac);
                    goto LAB_10a11a7e8;
                  }
                  *(ulong *)(param_2 + 8) = *(long *)(param_2 + 8) + uVar21;
                }
                FUN_109ffe1f4(puVar8,(long)piStack_130 - (long)piStack_138 >> 2);
                if ((long)piStack_130 - (long)piStack_138 == 0) {
                  if (piStack_130 == (int *)0x0) goto LAB_10a11a70c;
                }
                else {
                  lVar23 = (long)piStack_130 - (long)piStack_138 >> 2;
                  lVar12 = puVar8[1] - (long)*puVar8 >> 2;
                  piVar15 = (int *)*puVar8;
                  piVar16 = piStack_138;
                  do {
                    if (lVar12 == 0) goto LAB_10a11a7e8;
                    *piVar15 = *piVar16 + uVar4;
                    lVar12 = lVar12 + -1;
                    lVar23 = lVar23 + -1;
                    piVar15 = piVar15 + 1;
                    piVar16 = piVar16 + 1;
                  } while (lVar23 != 0);
                }
                piStack_130 = piStack_138;
              }
              else {
                if (0x1f < bVar6) goto LAB_10a11a758;
                param_3 = param_3 & 0xffffffff;
                uVar18 = param_3 + 7 >> 3;
                *(ulong *)(param_2 + 8) = lVar23 + uVar9;
                FUN_10a119f30(&lStack_f0,lVar23,uVar9,uVar18 * (uint)bVar6,param_4);
                FUN_109ffe100(&puStack_108,param_3);
                func_0x00010a118dc8(lStack_f0,param_3,bVar6,puStack_108);
                if (uVar3 != 0) {
                  lVar23 = *(long *)(param_2 + 8);
                  uVar9 = *(long *)(param_2 + 0x10) - lVar23;
                  if (bVar5 == 0) {
                    if (uVar9 < uVar21) goto LAB_10a11a78c;
                    *(ulong *)(param_2 + 8) = lVar23 + uVar21;
                  }
                  else {
                    if (uVar9 < uVar21) {
LAB_10a11a78c:
                      FUN_10a00946c(&UNK_10f63b8ac);
                      goto LAB_10a11a7e8;
                    }
                    *(ulong *)(param_2 + 8) = lVar23 + uVar21;
                    if ((char)bVar5 < '\0') {
                      FUN_10a119e74(&puStack_c0,lVar23,uVar21,uVar18 * 0x20 + param_3 * 2 + 4,
                                    param_4);
                      puStack_d8 = puStack_c0;
                      puStack_d0 = puStack_c0;
                      puStack_c8 = puStack_b8;
                      if (puStack_b8 < puStack_c0) {
                        FUN_10a00946c(&UNK_10f63b8ac);
                        goto LAB_10a11a7e8;
                      }
                      FUN_10a119b2c(&puStack_d8,0xbf < bVar5,param_3,&puStack_108,bVar6,bVar5 & 0x3f
                                   );
                    }
                    else {
                      if ((bVar5 != 0x10) && (bVar5 != 0x20)) goto LAB_10a11a78c;
                      if (puStack_108 == puStack_100) {
                        lVar12 = 0;
                      }
                      else {
                        lVar12 = 0;
                        puVar26 = puStack_108;
                        do {
                          puVar14 = puVar26 + 1;
                          if ((*puVar26 ^ -1 << (ulong)(bVar6 & 0x1f)) == 0xffffffff) {
                            lVar12 = lVar12 + 1;
                          }
                          puVar26 = puVar14;
                        } while (puVar14 != puStack_100);
                      }
                      FUN_10a119f30(&puStack_c0,lVar23,uVar21,lVar12 * (ulong)(bVar5 >> 3),param_4);
                      puVar26 = puStack_c0;
                      uVar9 = (long)puStack_b8 - (long)puStack_c0;
                      if (uVar9 == 0) {
                        puStack_d8 = (uint *)0x0;
                        puStack_d0 = (uint *)0x0;
                        puStack_c8 = (uint *)0x0;
                      }
                      else if (bVar5 == 0x10) {
                        uVar21 = uVar9 >> 1;
                        FUN_109ffe100(&puStack_d8,uVar21);
                        if (1 < uVar9) {
                          lVar23 = (long)puStack_d0 - (long)puStack_d8 >> 2;
                          puVar14 = puStack_d8;
                          do {
                            if (lVar23 == 0) goto LAB_10a11a7e8;
                            *puVar14 = (uint)(ushort)*puVar26;
                            lVar23 = lVar23 + -1;
                            uVar21 = uVar21 - 1;
                            puVar14 = puVar14 + 1;
                            puVar26 = (uint *)((long)puVar26 + 2);
                          } while (uVar21 != 0);
                        }
                      }
                      else {
                        uVar21 = uVar9 >> 2;
                        FUN_109ffe100(&puStack_d8,uVar21);
                        if (3 < uVar9) {
                          lVar23 = (long)puStack_d0 - (long)puStack_d8 >> 2;
                          puVar14 = puStack_d8;
                          do {
                            if (lVar23 == 0) goto LAB_10a11a7e8;
                            *puVar14 = *puVar26;
                            lVar23 = lVar23 + -1;
                            uVar21 = uVar21 - 1;
                            puVar14 = puVar14 + 1;
                            puVar26 = puVar26 + 1;
                          } while (uVar21 != 0);
                        }
                      }
                      FUN_10a119aa0(puStack_108,puStack_100,puStack_d8,puStack_d0,bVar6);
                      if (puStack_d8 != (uint *)0x0) {
                        puStack_d0 = puStack_d8;
                        __ZdlPv();
                      }
                    }
                    if (puStack_c0 != (uint *)0x0) {
                      puStack_b8 = puStack_c0;
                      __ZdlPv();
                    }
                  }
                }
                FUN_109ffe1f4(puVar8,(long)puStack_100 - (long)puStack_108 >> 2);
                if ((long)puStack_100 - (long)puStack_108 == 0) {
                  if (puStack_100 != (uint *)0x0) goto LAB_10a11a6f4;
                }
                else {
                  lVar23 = (long)puStack_100 - (long)puStack_108 >> 2;
                  lVar12 = puVar8[1] - (long)*puVar8 >> 2;
                  piVar15 = (int *)*puVar8;
                  puVar26 = puStack_108;
                  do {
                    if (lVar12 == 0) goto LAB_10a11a7e8;
                    *piVar15 = *puVar26 + uVar4;
                    lVar12 = lVar12 + -1;
                    lVar23 = lVar23 + -1;
                    piVar15 = piVar15 + 1;
                    puVar26 = puVar26 + 1;
                  } while (lVar23 != 0);
LAB_10a11a6f4:
                  puStack_100 = puStack_108;
                  __ZdlPv();
                }
                if (lStack_f0 == 0) goto LAB_10a11a70c;
                lStack_e8 = lStack_f0;
              }
              __ZdlPv();
LAB_10a11a70c:
              if (puVar20 != (undefined *)0x0) {
                func_0x000107c2ae60(puVar20);
              }
              return;
            }
          }
        }
      }
    }
  }
LAB_10a11a758:
  FUN_10a00946c(&UNK_10f63b8ac);
LAB_10a11a7e8:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a11a7ec);
  (*pcVar7)();
}



/* Entry: 10a119ffc; end: 10a11a92b;  */

void FUN_10a119ffc(undefined8 *param_1,long param_2,ulong param_3,undefined *param_4)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  code *pcVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  uint *puVar13;
  int *piVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *puVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  uint *puVar25;
  int *piStack_f8;
  int *piStack_f0;
  long lStack_e0;
  long lStack_d8;
  uint *puStack_c8;
  uint *puStack_c0;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  uint *puStack_98;
  uint *puStack_90;
  uint *puStack_88;
  uint *puStack_80;
  uint *puStack_78;
  
  if (param_4 == (undefined *)0x0) {
    puVar20 = &UNK_10e010ee0;
    func_0x000107c2ae5c();
    param_4 = puVar20;
  }
  else {
    puVar20 = (undefined *)0x0;
  }
  puVar25 = *(uint **)(param_2 + 8);
  puVar13 = *(uint **)(param_2 + 0x10);
  if (3 < (ulong)((long)puVar13 - (long)puVar25)) {
    uVar8 = (ulong)*puVar25;
    *(uint **)(param_2 + 8) = puVar25 + 1;
    if (3 < (ulong)((long)puVar13 - (long)(puVar25 + 1))) {
      uVar3 = puVar25[1];
      uVar21 = (ulong)uVar3;
      *(uint **)(param_2 + 8) = puVar25 + 2;
      if (3 < (ulong)((long)puVar13 - (long)(puVar25 + 2))) {
        uVar4 = puVar25[2];
        *(uint **)(param_2 + 8) = puVar25 + 3;
        if (puVar13 != puVar25 + 3) {
          bVar5 = (byte)puVar25[3];
          *(uint **)(param_2 + 8) = (uint *)((long)puVar25 + 0xd);
          if (puVar13 != (uint *)((long)puVar25 + 0xd)) {
            bVar6 = *(byte *)((long)puVar25 + 0xd);
            lVar15 = (long)puVar25 + 0xe;
            *(long *)(param_2 + 8) = lVar15;
            if (uVar21 + uVar8 <= (ulong)((long)puVar13 - lVar15)) {
              if (bVar6 == 0) {
                *(ulong *)(param_2 + 8) = lVar15 + uVar8;
                uVar23 = param_3 & 0xffffffff;
                uVar18 = uVar23 + 0x1ff >> 9;
                FUN_10a119e74(&puStack_80,lVar15,uVar8,uVar18 * 5 + (param_3 & 0xffffffff) * 0x27,
                              param_4);
                puStack_98 = puStack_80;
                puStack_88 = puStack_78;
                if (puStack_78 < puStack_80) {
                  FUN_10a00946c(&UNK_10f63b8ac);
                  goto LAB_10a11a7e8;
                }
                if ((ulong)((long)puStack_78 - (long)puStack_80) < uVar18) {
                  FUN_10a00946c(&UNK_10f63b8ac);
                  goto LAB_10a11a7e8;
                }
                puStack_90 = (uint *)((long)puStack_80 + uVar18);
                lStack_b0 = 0;
                lStack_a8 = 0;
                uStack_a0 = 0;
                FUN_10a1319a4(&lStack_b0,puStack_80,puStack_90,uVar18);
                FUN_109ffe100(&piStack_f8,uVar23);
                uVar22 = 0;
                uVar8 = 0;
                uVar9 = 0x1f;
                if (-1 < (char)bVar5) {
                  uVar9 = 0x3f;
                }
                do {
                  puVar13 = puStack_88;
                  puVar25 = puStack_90;
                  uVar19 = uVar23 - uVar22;
                  uVar2 = uVar19;
                  if (0x1ff < uVar19) {
                    uVar2 = 0x200;
                  }
                  if ((ulong)(lStack_a8 - lStack_b0) <= uVar8) goto LAB_10a11a7e8;
                  bVar6 = *(byte *)(lStack_b0 + uVar8);
                  uVar24 = (ulong)(uVar9 & bVar6);
                  if (0x1e < (uVar9 & bVar6) - 1) {
                    FUN_10a00946c(&UNK_10f63b8ac);
                    goto LAB_10a11a7e8;
                  }
                  uVar12 = (uVar2 + 7 >> 3) * uVar24;
                  if ((ulong)((long)puStack_88 - (long)puStack_90) < uVar12) {
                    FUN_10a00946c(&UNK_10f63b8ac);
                    goto LAB_10a11a7e8;
                  }
                  puVar1 = (uint *)((long)puStack_90 + uVar12);
                  puStack_90 = puVar1;
                  FUN_109ffe100(&puStack_c8,uVar2);
                  func_0x00010a118dc8(puVar25,uVar2,uVar24,puStack_c8);
                  if ((bVar6 >> 6 & 1) != 0) {
                    if ((char)bVar5 < '\0') {
                      FUN_10a119b2c(&puStack_98,bVar6 >> 5 & 1,uVar2,&puStack_c8,uVar24,0);
                    }
                    else {
                      if ((ulong)((long)puVar13 - (long)puVar1) < 2) {
                        FUN_10a00946c(&UNK_10f63b8ac);
                        goto LAB_10a11a7e8;
                      }
                      puVar25 = (uint *)((long)puVar1 + 2);
                      uVar12 = (ulong)(ushort)*puVar1;
                      puStack_90 = puVar25;
                      if (uVar12 != 0) {
                        if ((ulong)((long)puVar13 - (long)puVar25) < uVar12 << 2) {
                          FUN_10a00946c(&UNK_10f63b8ac);
                          goto LAB_10a11a7e8;
                        }
                        puStack_90 = puVar25 + uVar12;
                        FUN_109ffe100(&lStack_e0);
                        _memcpy(lStack_e0,puVar25,uVar12 * 4);
                        FUN_10a119aa0(puStack_c8,puStack_c0,lStack_e0,lStack_d8,uVar24);
                        if (lStack_e0 != 0) {
                          lStack_d8 = lStack_e0;
                          __ZdlPv();
                        }
                      }
                    }
                  }
                  if ((char)bVar6 < '\0') {
                    if (((long)puStack_c0 - (long)puStack_c8 == 0) ||
                       (uVar24 = (long)piStack_f0 - (long)piStack_f8 >> 2, uVar24 <= uVar22))
                    goto LAB_10a11a7e8;
                    uVar10 = -(*puStack_c8 & 1) ^ *puStack_c8 >> 1;
                    piStack_f8[uVar22] = uVar10;
                    if (1 < uVar19) {
                      lVar17 = (long)puStack_c0 - (long)puStack_c8 >> 2;
                      lVar11 = uVar2 - 1;
                      puVar25 = (uint *)(piStack_f8 + uVar22);
                      lVar15 = ~uVar22 + uVar24;
                      puVar13 = puStack_c8;
                      do {
                        lVar17 = lVar17 + -1;
                        puVar13 = puVar13 + 1;
                        puVar25 = puVar25 + 1;
                        if ((lVar17 == 0) || (lVar15 == 0)) goto LAB_10a11a7e8;
                        uVar10 = (-(*puVar13 & 1) ^ *puVar13 >> 1) + uVar10;
                        *puVar25 = uVar10;
                        lVar15 = lVar15 + -1;
                        lVar11 = lVar11 + -1;
                      } while (lVar11 != 0);
                    }
LAB_10a11a454:
                    uVar22 = uVar2 + uVar22;
LAB_10a11a458:
                    puStack_c0 = puStack_c8;
                    __ZdlPv();
                  }
                  else {
                    if (uVar23 != uVar22) {
                      lVar11 = (long)puStack_c0 - (long)puStack_c8 >> 2;
                      uVar19 = (long)piStack_f0 - (long)piStack_f8 >> 2;
                      lVar15 = 0;
                      if (uVar22 <= uVar19) {
                        lVar15 = uVar19 - uVar22;
                      }
                      puVar25 = (uint *)(piStack_f8 + uVar22);
                      puVar13 = puStack_c8;
                      uVar19 = uVar2;
                      do {
                        if ((lVar11 == 0) || (lVar15 == 0)) goto LAB_10a11a7e8;
                        *puVar25 = *puVar13;
                        lVar15 = lVar15 + -1;
                        lVar11 = lVar11 + -1;
                        uVar19 = uVar19 - 1;
                        puVar25 = puVar25 + 1;
                        puVar13 = puVar13 + 1;
                      } while (uVar19 != 0);
                      goto LAB_10a11a454;
                    }
                    uVar22 = uVar2 + uVar23;
                    if (puStack_c8 != (uint *)0x0) goto LAB_10a11a458;
                  }
                  uVar8 = uVar8 + 1;
                } while (uVar8 != uVar18);
                if (puStack_90 != puStack_88) {
                  FUN_10a00946c(&UNK_10f63b8ac);
                  goto LAB_10a11a7e8;
                }
                if (lStack_b0 != 0) {
                  lStack_a8 = lStack_b0;
                  __ZdlPv();
                }
                if (puStack_80 != (uint *)0x0) {
                  puStack_78 = puStack_80;
                  __ZdlPv();
                }
                if (uVar3 != 0) {
                  if ((ulong)(*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8)) < uVar21) {
                    FUN_10a00946c(&UNK_10f63b8ac);
                    goto LAB_10a11a7e8;
                  }
                  *(ulong *)(param_2 + 8) = *(long *)(param_2 + 8) + uVar21;
                }
                FUN_109ffe1f4(param_1,(long)piStack_f0 - (long)piStack_f8 >> 2);
                if ((long)piStack_f0 - (long)piStack_f8 == 0) {
                  if (piStack_f0 == (int *)0x0) goto LAB_10a11a70c;
                }
                else {
                  lVar15 = (long)piStack_f0 - (long)piStack_f8 >> 2;
                  lVar11 = param_1[1] - (long)*param_1 >> 2;
                  piVar14 = (int *)*param_1;
                  piVar16 = piStack_f8;
                  do {
                    if (lVar11 == 0) goto LAB_10a11a7e8;
                    *piVar14 = *piVar16 + uVar4;
                    lVar11 = lVar11 + -1;
                    lVar15 = lVar15 + -1;
                    piVar14 = piVar14 + 1;
                    piVar16 = piVar16 + 1;
                  } while (lVar15 != 0);
                }
                piStack_f0 = piStack_f8;
              }
              else {
                if (0x1f < bVar6) goto LAB_10a11a758;
                param_3 = param_3 & 0xffffffff;
                uVar18 = param_3 + 7 >> 3;
                *(ulong *)(param_2 + 8) = lVar15 + uVar8;
                FUN_10a119f30(&lStack_b0,lVar15,uVar8,uVar18 * (uint)bVar6,param_4);
                FUN_109ffe100(&puStack_c8,param_3);
                func_0x00010a118dc8(lStack_b0,param_3,bVar6,puStack_c8);
                if (uVar3 != 0) {
                  lVar15 = *(long *)(param_2 + 8);
                  uVar8 = *(long *)(param_2 + 0x10) - lVar15;
                  if (bVar5 == 0) {
                    if (uVar8 < uVar21) goto LAB_10a11a78c;
                    *(ulong *)(param_2 + 8) = lVar15 + uVar21;
                  }
                  else {
                    if (uVar8 < uVar21) {
LAB_10a11a78c:
                      FUN_10a00946c(&UNK_10f63b8ac);
                      goto LAB_10a11a7e8;
                    }
                    *(ulong *)(param_2 + 8) = lVar15 + uVar21;
                    if ((char)bVar5 < '\0') {
                      FUN_10a119e74(&puStack_80,lVar15,uVar21,uVar18 * 0x20 + param_3 * 2 + 4,
                                    param_4);
                      puStack_98 = puStack_80;
                      puStack_90 = puStack_80;
                      puStack_88 = puStack_78;
                      if (puStack_78 < puStack_80) {
                        FUN_10a00946c(&UNK_10f63b8ac);
                        goto LAB_10a11a7e8;
                      }
                      FUN_10a119b2c(&puStack_98,0xbf < bVar5,param_3,&puStack_c8,bVar6,bVar5 & 0x3f)
                      ;
                    }
                    else {
                      if ((bVar5 != 0x10) && (bVar5 != 0x20)) goto LAB_10a11a78c;
                      if (puStack_c8 == puStack_c0) {
                        lVar11 = 0;
                      }
                      else {
                        lVar11 = 0;
                        puVar25 = puStack_c8;
                        do {
                          puVar13 = puVar25 + 1;
                          if ((*puVar25 ^ -1 << (ulong)(bVar6 & 0x1f)) == 0xffffffff) {
                            lVar11 = lVar11 + 1;
                          }
                          puVar25 = puVar13;
                        } while (puVar13 != puStack_c0);
                      }
                      FUN_10a119f30(&puStack_80,lVar15,uVar21,lVar11 * (ulong)(bVar5 >> 3),param_4);
                      puVar25 = puStack_80;
                      uVar8 = (long)puStack_78 - (long)puStack_80;
                      if (uVar8 == 0) {
                        puStack_98 = (uint *)0x0;
                        puStack_90 = (uint *)0x0;
                        puStack_88 = (uint *)0x0;
                      }
                      else if (bVar5 == 0x10) {
                        uVar21 = uVar8 >> 1;
                        FUN_109ffe100(&puStack_98,uVar21);
                        if (1 < uVar8) {
                          lVar15 = (long)puStack_90 - (long)puStack_98 >> 2;
                          puVar13 = puStack_98;
                          do {
                            if (lVar15 == 0) goto LAB_10a11a7e8;
                            *puVar13 = (uint)(ushort)*puVar25;
                            lVar15 = lVar15 + -1;
                            uVar21 = uVar21 - 1;
                            puVar13 = puVar13 + 1;
                            puVar25 = (uint *)((long)puVar25 + 2);
                          } while (uVar21 != 0);
                        }
                      }
                      else {
                        uVar21 = uVar8 >> 2;
                        FUN_109ffe100(&puStack_98,uVar21);
                        if (3 < uVar8) {
                          lVar15 = (long)puStack_90 - (long)puStack_98 >> 2;
                          puVar13 = puStack_98;
                          do {
                            if (lVar15 == 0) goto LAB_10a11a7e8;
                            *puVar13 = *puVar25;
                            lVar15 = lVar15 + -1;
                            uVar21 = uVar21 - 1;
                            puVar13 = puVar13 + 1;
                            puVar25 = puVar25 + 1;
                          } while (uVar21 != 0);
                        }
                      }
                      FUN_10a119aa0(puStack_c8,puStack_c0,puStack_98,puStack_90,bVar6);
                      if (puStack_98 != (uint *)0x0) {
                        puStack_90 = puStack_98;
                        __ZdlPv();
                      }
                    }
                    if (puStack_80 != (uint *)0x0) {
                      puStack_78 = puStack_80;
                      __ZdlPv();
                    }
                  }
                }
                FUN_109ffe1f4(param_1,(long)puStack_c0 - (long)puStack_c8 >> 2);
                if ((long)puStack_c0 - (long)puStack_c8 == 0) {
                  if (puStack_c0 != (uint *)0x0) goto LAB_10a11a6f4;
                }
                else {
                  lVar15 = (long)puStack_c0 - (long)puStack_c8 >> 2;
                  lVar11 = param_1[1] - (long)*param_1 >> 2;
                  piVar14 = (int *)*param_1;
                  puVar25 = puStack_c8;
                  do {
                    if (lVar11 == 0) goto LAB_10a11a7e8;
                    *piVar14 = *puVar25 + uVar4;
                    lVar11 = lVar11 + -1;
                    lVar15 = lVar15 + -1;
                    piVar14 = piVar14 + 1;
                    puVar25 = puVar25 + 1;
                  } while (lVar15 != 0);
LAB_10a11a6f4:
                  puStack_c0 = puStack_c8;
                  __ZdlPv();
                }
                if (lStack_b0 == 0) goto LAB_10a11a70c;
                lStack_a8 = lStack_b0;
              }
              __ZdlPv();
LAB_10a11a70c:
              if (puVar20 != (undefined *)0x0) {
                func_0x000107c2ae60(puVar20);
              }
              return;
            }
          }
        }
      }
    }
  }
LAB_10a11a758:
  FUN_10a00946c(&UNK_10f63b8ac);
LAB_10a11a7e8:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a11a7ec);
  (*pcVar7)();
}



/* Entry: 10a11a92c; end: 10a11a96f;  */

long * FUN_10a11a92c(long *param_1)

{
  long lVar1;
  
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    param_1[1] = lVar1;
    _free(*(undefined8 *)(lVar1 + -8));
  }
  return param_1;
}



/* Entry: 10a11a970; end: 10a11b5b3;  */

void FUN_10a11a970(float *******param_1,byte *param_2,long param_3,float *******param_4,
                  ulong param_5,float *****param_6,ulong param_7)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined4 *puVar3;
  bool bVar4;
  float *pfVar5;
  float *****pppppfVar6;
  float *****pppppfVar7;
  float *****pppppfVar8;
  float *****pppppfVar9;
  byte bVar10;
  undefined1 (*pauVar11) [12];
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  float ****ppppfVar18;
  code *pcVar19;
  float ******ppppppfVar20;
  undefined *puVar21;
  float *******pppppppfVar22;
  float *******pppppppfVar23;
  byte *pbVar24;
  long lVar25;
  float *****pppppfVar26;
  float *pfVar27;
  ulong uVar28;
  float ******ppppppfVar29;
  float *******pppppppfVar30;
  ulong uVar31;
  byte *pbVar32;
  uint uVar33;
  ulong uVar34;
  uint uVar35;
  int iVar36;
  ulong uVar37;
  byte *pbVar38;
  ulong uVar39;
  byte *pbVar40;
  byte *pbVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  float fVar47;
  float extraout_s1;
  undefined1 auVar48 [16];
  float fVar49;
  float extraout_s2;
  undefined4 extraout_var;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float in_s3;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auVar56 [16];
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float ******ppppppfStack_208;
  float ****ppppfStack_200;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  float ******ppppppfStack_190;
  float ******ppppppfStack_188;
  float ******ppppppfStack_180;
  float ****ppppfStack_178;
  float ****ppppfStack_170;
  float ****ppppfStack_168;
  float ******ppppppfStack_160;
  float ******ppppppfStack_158;
  float ******ppppppfStack_150;
  float ****ppppfStack_148;
  float ****ppppfStack_140;
  float ****ppppfStack_138;
  uint uStack_130;
  byte bStack_12c;
  byte bStack_12b;
  byte bStack_12a;
  undefined8 uStack_128;
  float afStack_120 [2];
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  float *pfStack_a8;
  float *pfStack_a0;
  
  if (((param_3 < 0) || (param_3 == 0)) || (uVar37 = (ulong)*param_2, uVar37 == 0)) {
    FUN_10a00946c(&UNK_10f63b8ac);
  }
  else {
    uStack_128 = 0;
    afStack_120[0] = 0.0;
    uStack_130 = 0;
    bStack_12c = 0;
    bStack_12b = 0;
    bStack_12a = 0;
    lStack_110 = 0;
    lStack_118 = 0;
    lStack_100 = 0;
    uStack_108 = 0;
    uStack_f0 = 0;
    lStack_f8 = 0;
    pbStack_e0 = (byte *)0x0;
    pbStack_e8 = (byte *)0x0;
    lStack_d0 = 0;
    pbStack_d8 = (byte *)0x0;
    lStack_c8 = 0;
    if (((((0xfffffffffffffffb < param_3 - 5U) || (param_3 == 5)) ||
         ((param_3 == 6 || ((param_3 == 7 || (bVar10 = param_2[7], 5 < bVar10)))))) || (bVar10 == 1)
        ) || (uVar31 = param_3 - 0x14, 0xfffffffffffffff3 < uVar31)) {
      FUN_10a00946c(&UNK_10f63b8ac);
      goto LAB_10a11b4ec;
    }
    uStack_130 = *(uint *)(param_2 + 1);
    bStack_12c = param_2[5];
    bStack_12b = param_2[6];
    uStack_128 = *(undefined8 *)(param_2 + 8);
    afStack_120[0] = *(float *)(param_2 + 0x10);
    bStack_12a = bVar10;
    if (((0x7f7fffff < (*(uint *)(param_2 + 8) & 0x7fffffff)) ||
        (0x7f7fffff < (*(uint *)(param_2 + 0xc) & 0x7fffffff))) ||
       (0x7f7fffff < (uint)ABS(afStack_120[0]))) {
      FUN_10a00946c(&UNK_10f63b8ac);
      goto LAB_10a11b4ec;
    }
    if (uVar31 < uVar37) {
      FUN_10a00946c(&UNK_10f63b8ac);
      goto LAB_10a11b4ec;
    }
    pbVar24 = param_2 + 0x14 + uVar37;
    FUN_10a131660(&lStack_118,param_2 + 0x14,pbVar24,uVar37);
    if (uVar37 << 2 <= uVar31 - uVar37) {
      func_0x0001074287b0(&lStack_100,uVar37);
      pbVar32 = pbVar24 + uVar37 * 4;
      _memcpy(lStack_100);
      pbVar41 = pbStack_e0;
      pbVar38 = pbStack_e8;
      lStack_d0 = (long)pbVar32 - (long)param_2;
      if ((ulong)((long)pbStack_d8 - (long)pbStack_e8 >> 4) < uVar37) {
        uVar31 = uVar37;
        FUN_10a131f68();
        pbVar41 = pbVar41 + (uVar31 - (long)pbVar38);
        pbVar38 = (byte *)(uVar31 + (long)pbVar24 * 0x10);
        pbVar40 = pbVar41 + -((long)pbStack_e0 - (long)pbStack_e8);
        pbVar24 = pbStack_e8;
        _memcpy(pbVar40);
        bVar4 = pbStack_e8 != (byte *)0x0;
        pbStack_e8 = pbVar40;
        pbStack_e0 = pbVar41;
        pbStack_d8 = pbVar38;
        if (bVar4) {
          __ZdlPv();
        }
      }
      uVar31 = 0;
      do {
        if ((ulong)(lStack_f8 - lStack_100 >> 2) <= uVar31) goto LAB_10a11b4ec;
        uVar34 = (ulong)*(uint *)(lStack_100 + uVar31 * 4);
        if ((ulong)((long)(param_2 + param_3) - (long)pbVar32) < uVar34) {
          FUN_10a00946c(&UNK_10f63b8ac);
          goto LAB_10a11b4ec;
        }
        if (pbStack_e0 < pbStack_d8) {
          *(byte **)pbStack_e0 = pbVar32;
          *(ulong *)(pbStack_e0 + 8) = uVar34;
          pbVar41 = pbStack_e0 + 0x10;
        }
        else {
          lVar25 = (long)pbStack_e0 - (long)pbStack_e8;
          uVar39 = (lVar25 >> 4) + 1;
          if (uVar39 >> 0x3c != 0) {
            FUN_10a131f54();
            goto LAB_10a11b4ec;
          }
          uVar28 = (long)pbStack_d8 - (long)pbStack_e8 >> 3;
          if (uVar28 <= uVar39) {
            uVar28 = uVar39;
          }
          if (0x7fffffffffffffef < (ulong)((long)pbStack_d8 - (long)pbStack_e8)) {
            uVar28 = 0xfffffffffffffff;
          }
          FUN_10a131f68();
          puVar1 = (undefined8 *)(uVar28 + lVar25);
          pbVar38 = (byte *)(uVar28 + (long)pbVar24 * 0x10);
          *puVar1 = pbVar32;
          puVar1[1] = uVar34;
          pbVar41 = (byte *)(puVar1 + 2);
          pbVar40 = (byte *)((long)puVar1 - ((long)pbStack_e0 - (long)pbStack_e8));
          pbVar24 = pbStack_e8;
          _memcpy(pbVar40);
          bVar4 = pbStack_e8 != (byte *)0x0;
          pbStack_e8 = pbVar40;
          pbStack_d8 = pbVar38;
          if (bVar4) {
            pbStack_e0 = pbVar41;
            __ZdlPv();
          }
        }
        pbVar38 = pbStack_e8;
        pbVar32 = pbVar32 + uVar34;
        uVar31 = uVar31 + 1;
        pbStack_e0 = pbVar41;
      } while (uVar37 != uVar31);
      lStack_c8 = (long)pbVar32 - (long)(param_2 + lStack_d0);
      if (pbVar32 == param_2 + param_3) {
        param_1[1] = (float ******)0x0;
        param_1[2] = (float ******)0x0;
        *param_1 = (float ******)0x0;
        ppppppfStack_158 = (float ******)((ulong)ppppppfStack_158 & 0xffffffffffffff00);
        ppppppfStack_160 = (float ******)param_1;
        if ((long)pbVar41 - (long)pbStack_e8 != 0) {
          uVar37 = (long)pbVar41 - (long)pbStack_e8 >> 4;
          if (0x555555555555555 < uVar37) {
            FUN_10a131d60();
            goto LAB_10a11b4ec;
          }
          ppppppfVar20 = (float ******)(uVar37 * 0x30);
          __Znwm();
          *param_1 = ppppppfVar20;
          param_1[2] = ppppppfVar20 + uVar37 * 6;
          _bzero();
          ppppppfStack_208 = (float ******)0x0;
          ppppfStack_200 = (float ****)0x0;
          uVar31 = 0;
          param_1[1] = ppppppfVar20 + ((ulong)((float ******)(uVar37 * 0x30) + -6) / 0x30) * 6 + 6;
          ppppfStack_148 = (float ****)0x0;
          ppppppfStack_150 = (float ******)0x0;
          ppppfStack_138 = (float ****)0x0;
          ppppfStack_140 = (float ****)0x0;
          ppppppfStack_158 = (float ******)0x0;
          ppppppfStack_160 = (float ******)0x0;
          do {
            uVar37 = param_5;
            pppppfVar26 = param_6;
            pppppppfVar30 = param_4;
            uVar34 = param_7;
            if (uVar31 != 0) {
              if ((ulong)(lStack_110 - lStack_118) <= uVar31) goto LAB_10a11b4ec;
              uVar37 = uVar31 - 1;
              ppppppfVar20 = *param_1;
              uVar34 = ((long)param_1[1] - (long)ppppppfVar20 >> 4) * -0x5555555555555555;
              if ((*(byte *)(lStack_118 + uVar31) & 1) == 0) {
                if (uVar34 < uVar37 || uVar34 - uVar37 == 0) goto LAB_10a11b4ec;
                ppppppfVar20 = ppppppfVar20 + uVar37 * 6;
                uVar37 = (long)ppppppfVar20[1] - (long)*ppppppfVar20 >> 4;
                pppppfVar26 = ppppppfVar20[3];
                pppppppfVar30 = (float *******)*ppppppfVar20;
                uVar34 = (long)ppppppfVar20[4] - (long)ppppppfVar20[3] >> 4;
              }
              else {
                if (uVar34 < uVar37 || uVar34 - uVar37 == 0) goto LAB_10a11b4ec;
                uVar39 = param_5;
                uVar28 = param_7;
                if (uVar31 != 1) {
                  uVar39 = uVar31 - 2;
                  if (uVar34 < uVar39 || uVar34 - uVar39 == 0) goto LAB_10a11b4ec;
                  ppppppfVar29 = ppppppfVar20 + uVar39 * 6;
                  pppppppfVar30 = (float *******)*ppppppfVar29;
                  uVar39 = (long)ppppppfVar29[1] - (long)*ppppppfVar29 >> 4;
                  pppppfVar26 = ppppppfVar29[3];
                  uVar28 = (long)ppppppfVar29[4] - (long)ppppppfVar29[3] >> 4;
                }
                ppppppfVar20 = ppppppfVar20 + uVar37 * 6;
                pppppfVar6 = *ppppppfVar20;
                pppppfVar8 = ppppppfVar20[1];
                uVar37 = (long)pppppfVar8 - (long)pppppfVar6 >> 4;
                pppppfVar7 = ppppppfVar20[3];
                pppppfVar9 = ppppppfVar20[4];
                ppppfStack_178 = (float ****)0x0;
                ppppppfStack_180 = (float ******)0x0;
                ppppfStack_168 = (float ****)0x0;
                ppppfStack_170 = (float ****)0x0;
                ppppppfStack_188 = (float ******)0x0;
                ppppppfStack_190 = (float ******)0x0;
                FUN_10a11b6d8(&ppppppfStack_190,uVar37);
                func_0x00010983d018(&ppppfStack_178,uVar37);
                if (pppppfVar8 != pppppfVar6) {
                  uVar34 = 0;
                  lVar25 = 0xc;
                  do {
                    if ((uVar39 == uVar34) ||
                       ((ulong)((long)ppppppfStack_188 - (long)ppppppfStack_190 >> 4) <= uVar34))
                    goto LAB_10a11b4ec;
                    pfVar27 = (float *)((long)pppppppfVar30 + lVar25);
                    uVar13 = *(undefined8 *)((long)pppppfVar6 + lVar25 + -4);
                    uVar12 = *(undefined8 *)((long)pppppfVar6 + lVar25 + -0xc);
                    fVar53 = (float)uVar12;
                    fVar47 = (float)((ulong)uVar12 >> 0x20);
                    fVar49 = (float)uVar13;
                    fVar52 = (float)((ulong)uVar13 >> 0x20);
                    fVar54 = pfVar27[-3];
                    fVar47 = (fVar47 + fVar47) - pfVar27[-2];
                    fVar52 = (fVar52 + fVar52) - *pfVar27;
                    *(ulong *)((long)ppppppfStack_190 + lVar25 + -4) =
                         CONCAT17((char)((uint)fVar52 >> 0x18),
                                  CONCAT16((char)((uint)fVar52 >> 0x10),
                                           CONCAT15((char)((uint)fVar52 >> 8),
                                                    CONCAT14(SUB41(fVar52,0),
                                                             (fVar49 + fVar49) - pfVar27[-1]))));
                    *(ulong *)((long)ppppppfStack_190 + lVar25 + -0xc) =
                         CONCAT17((char)((uint)fVar47 >> 0x18),
                                  CONCAT16((char)((uint)fVar47 >> 0x10),
                                           CONCAT15((char)((uint)fVar47 >> 8),
                                                    CONCAT14(SUB41(fVar47,0),
                                                             (fVar53 + fVar53) - fVar54))));
                    if (((long)pppppfVar9 - (long)pppppfVar7 >> 4 == uVar34) || (uVar28 == uVar34))
                    goto LAB_10a11b4ec;
                    pfVar27 = (float *)((long)pppppfVar7 + lVar25);
                    pfVar2 = (float *)((long)pppppfVar26 + lVar25);
                    fVar53 = pfVar2[-3];
                    fVar47 = pfVar2[-2];
                    fVar52 = pfVar2[-1];
                    fVar49 = *pfVar2;
                    fVar54 = pfVar27[-3];
                    fVar55 = pfVar27[-2];
                    fVar57 = pfVar27[-1];
                    fVar58 = *pfVar27;
                    fVar59 = fVar53 * fVar54 + fVar49 * fVar58 + fVar47 * fVar55 + fVar52 * fVar57;
                    fVar60 = ((fVar49 * fVar54 - fVar53 * fVar58) - fVar52 * fVar55) +
                             fVar47 * fVar57;
                    fVar61 = ((fVar49 * fVar55 - fVar47 * fVar58) - fVar53 * fVar57) +
                             fVar52 * fVar54;
                    fVar52 = ((fVar49 * fVar57 - fVar52 * fVar58) - fVar47 * fVar54) +
                             fVar53 * fVar55;
                    fVar53 = ((-(fVar60 * fVar54) + fVar58 * fVar59) - fVar55 * fVar61) -
                             fVar57 * fVar52;
                    fVar47 = (fVar58 * fVar60 + fVar54 * fVar59 + fVar57 * fVar61) - fVar55 * fVar52
                    ;
                    fVar49 = (fVar58 * fVar61 + fVar55 * fVar59 + fVar54 * fVar52) - fVar57 * fVar60
                    ;
                    in_s3 = (fVar58 * fVar52 + fVar57 * fVar59 + fVar55 * fVar60) - fVar54 * fVar61;
                    fVar52 = fVar53 * fVar53 + fVar47 * fVar47 + fVar49 * fVar49 + in_s3 * in_s3;
                    if (fVar52 == 0.0) {
                      uVar42 = 0;
                      uVar43 = 0;
                      uVar44 = 0x80;
                      uVar45 = 0x3f;
                      fVar47 = 0.0;
                      fVar49 = 0.0;
                      in_s3 = 0.0;
                    }
                    else {
                      fVar52 = 1.0 / SQRT(fVar52);
                      fVar53 = fVar53 * fVar52;
                      uVar42 = SUB41(fVar53,0);
                      uVar43 = (undefined1)((uint)fVar53 >> 8);
                      uVar44 = (undefined1)((uint)fVar53 >> 0x10);
                      uVar45 = (undefined1)((uint)fVar53 >> 0x18);
                      fVar47 = fVar47 * fVar52;
                      fVar49 = fVar49 * fVar52;
                      in_s3 = in_s3 * fVar52;
                    }
                    if ((ulong)((long)ppppfStack_170 - (long)ppppfStack_178 >> 4) <= uVar34)
                    goto LAB_10a11b4ec;
                    puVar3 = (undefined4 *)((long)ppppfStack_178 + lVar25);
                    puVar3[-3] = fVar47;
                    puVar3[-2] = fVar49;
                    puVar3[-1] = in_s3;
                    *puVar3 = CONCAT13(uVar45,CONCAT12(uVar44,CONCAT11(uVar43,uVar42)));
                    uVar34 = uVar34 + 1;
                    lVar25 = lVar25 + 0x10;
                  } while (uVar37 != uVar34);
                }
                if ((float *******)ppppppfStack_208 != (float *******)0x0) {
                  ppppppfStack_158 = ppppppfStack_208;
                  _free(ppppppfStack_208[-1]);
                }
                ppppppfStack_158 = ppppppfStack_188;
                ppppppfStack_160 = ppppppfStack_190;
                ppppppfStack_150 = ppppppfStack_180;
                ppppppfStack_188 = (float ******)0x0;
                ppppppfStack_180 = (float ******)0x0;
                ppppppfStack_190 = (float ******)0x0;
                if ((float *****)ppppfStack_200 != (float *****)0x0) {
                  ppppfStack_140 = ppppfStack_200;
                  __ZdlPv();
                }
                ppppfVar18 = ppppfStack_170;
                ppppfStack_200 = ppppfStack_178;
                ppppfStack_148 = ppppfStack_178;
                ppppfStack_138 = ppppfStack_168;
                ppppfStack_140 = ppppfStack_170;
                ppppfStack_170 = (float ****)0x0;
                ppppfStack_168 = (float ****)0x0;
                ppppfStack_178 = (float ****)0x0;
                if ((float *******)ppppppfStack_190 != (float *******)0x0) {
                  ppppppfStack_188 = ppppppfStack_190;
                  _free(ppppppfStack_190[-1]);
                }
                ppppppfStack_208 = ppppppfStack_160;
                uVar37 = (long)ppppppfStack_158 - (long)ppppppfStack_160 >> 4;
                pppppfVar26 = (float *****)ppppfStack_200;
                pppppppfVar30 = (float *******)ppppppfStack_160;
                pbVar38 = pbStack_e8;
                uVar34 = (long)ppppfVar18 - (long)ppppfStack_200 >> 4;
                pbVar41 = pbStack_e0;
              }
            }
            bVar10 = bStack_12a;
            if ((ulong)((long)pbVar41 - (long)pbVar38 >> 4) <= uVar31) goto LAB_10a11b4ec;
            lStack_1a8 = *(long *)(pbVar38 + uVar31 * 0x10);
            lVar25 = *(long *)(pbVar38 + uVar31 * 0x10 + 8);
            lStack_198 = lStack_1a8 + lVar25;
            lStack_1a0 = lStack_1a8;
            if (lVar25 < 0) {
              FUN_10a00946c(&UNK_10f63b8ac);
              goto LAB_10a11b4ec;
            }
            uVar39 = (ulong)uStack_130;
            if (((uStack_130 == 0) || (uVar37 != uVar39 || uVar34 != uVar37)) ||
               ((uVar33 = (uint)bStack_12c, 0x17 < uVar33 - 1 ||
                ((uVar35 = (uint)bStack_12b, uVar35 - 0x19 < 0xffffffe8 || (bStack_12a == 1)))))) {
              FUN_10a00946c(&UNK_10f63b8ac);
              goto LAB_10a11b4ec;
            }
            puVar21 = &UNK_10e010ee0;
            func_0x000107c2ae5c();
            ppppppfStack_188 = (float ******)0x0;
            ppppppfStack_190 = (float ******)0x0;
            ppppfStack_178 = (float ****)0x0;
            ppppppfStack_180 = (float ******)0x0;
            ppppfStack_168 = (float ****)0x0;
            ppppfStack_170 = (float ****)0x0;
            pppppppfVar22 = &ppppppfStack_190;
            uVar37 = uVar34;
            FUN_10a131d00();
            lVar25 = uVar34 << 4;
            ppppppfStack_180 = (float ******)(pppppppfVar22 + uVar37 * 2);
            ppppppfStack_190 = (float ******)pppppppfVar22;
            do {
              ppppppfVar20 = *pppppppfVar30;
              pppppppfVar23 = pppppppfVar22 + 2;
              pppppppfVar22[1] = pppppppfVar30[1];
              *pppppppfVar22 = ppppppfVar20;
              lVar25 = lVar25 + -0x10;
              pppppppfVar22 = pppppppfVar23;
              pppppppfVar30 = pppppppfVar30 + 2;
            } while (lVar25 != 0);
            ppppppfStack_188 = (float ******)pppppppfVar23;
            func_0x00010983d018(&ppppfStack_178,uVar34);
            iVar36 = 0;
            do {
              FUN_10a119ffc(&pfStack_a8,&lStack_1a8,uVar39,puVar21);
              if (uVar34 != (long)pfStack_a0 - (long)pfStack_a8 >> 2) {
                FUN_10a00946c(&UNK_10f63b8ac);
                goto LAB_10a11b4ec;
              }
              pfVar27 = afStack_120;
              if ((iVar36 != 2) && (pfVar27 = (float *)&uStack_128, iVar36 == 1)) {
                pfVar27 = (float *)((long)&uStack_128 + 4);
              }
              uVar37 = 0;
              fVar53 = *pfVar27;
              pppppppfVar30 = (float *******)ppppppfStack_190;
              do {
                if ((long)ppppppfStack_188 - (long)ppppppfStack_190 >> 4 == uVar37)
                goto LAB_10a11b4ec;
                pppppppfVar22 = (float *******)(ppppppfStack_190 + uVar37 * 2 + 1);
                if (iVar36 != 2) {
                  pppppppfVar22 = pppppppfVar30;
                }
                pppppppfVar23 = (float *******)((long)ppppppfStack_190 + (uVar37 * 4 + 1) * 4);
                if (iVar36 != 1) {
                  pppppppfVar23 = pppppppfVar22;
                }
                *(float *)pppppppfVar23 =
                     *(float *)pppppppfVar23 +
                     (fVar53 / (float)(uint)~(-1 << (ulong)(uVar33 & 0x1f))) *
                     (float)(int)pfStack_a8[uVar37];
                uVar37 = uVar37 + 1;
                pppppppfVar30 = pppppppfVar30 + 2;
              } while (uVar34 != uVar37);
              pfStack_a0 = pfStack_a8;
              __ZdlPv();
              iVar36 = iVar36 + 1;
            } while (iVar36 != 3);
            FUN_10a1322a0(&pfStack_a8,uVar34);
            iVar36 = 0;
            do {
              FUN_10a119ffc(&lStack_c0,&lStack_1a8,uVar39,puVar21);
              if (uVar34 != lStack_b8 - lStack_c0 >> 2) {
                FUN_10a00946c(&UNK_10f63b8ac);
                goto LAB_10a11b4ec;
              }
              uVar37 = 0;
              pfVar27 = pfStack_a8;
              do {
                if (((long)pfStack_a0 - (long)pfStack_a8 >> 2) * -0x5555555555555555 - uVar37 == 0)
                goto LAB_10a11b4ec;
                fVar53 = (1.0 / (float)(uint)~(-1 << (ulong)(uVar35 & 0x1f))) *
                         (float)*(int *)(lStack_c0 + uVar37 * 4) * 2.0 + -1.0;
                uVar42 = SUB41(fVar53,0);
                uVar43 = (undefined1)((uint)fVar53 >> 8);
                uVar44 = (undefined1)((uint)fVar53 >> 0x10);
                uVar45 = (undefined1)((uint)fVar53 >> 0x18);
                pfVar2 = pfStack_a8 + uVar37 * 3 + 2;
                if (iVar36 != 2) {
                  pfVar2 = pfVar27;
                }
                pfVar5 = pfStack_a8 + uVar37 * 3 + 1;
                if (iVar36 != 1) {
                  pfVar5 = pfVar2;
                }
                *pfVar5 = fVar53;
                uVar37 = uVar37 + 1;
                pfVar27 = pfVar27 + 3;
              } while (uVar34 != uVar37);
              lStack_b8 = lStack_c0;
              __ZdlPv();
              iVar36 = iVar36 + 1;
            } while (iVar36 != 3);
            lVar25 = 0;
            uVar37 = 0;
            fVar53 = in_s3;
            do {
              uVar39 = ((long)pfStack_a0 - (long)pfStack_a8 >> 2) * -0x5555555555555555;
              if ((uVar39 < uVar37 || uVar39 - uVar37 == 0) ||
                 (FUN_10a007a60((long)pfStack_a8 + lVar25,bVar10),
                 (ulong)((long)ppppfStack_170 - (long)ppppfStack_178 >> 4) <= uVar37))
              goto LAB_10a11b4ec;
              pauVar11 = (undefined1 (*) [12])(pppppfVar26 + uVar37 * 2);
              in_s3 = (float)*(undefined8 *)(*pauVar11 + 8);
              fVar55 = (float)((ulong)*(undefined8 *)(*pauVar11 + 8) >> 0x20);
              uVar12 = *(undefined8 *)*pauVar11;
              auVar17 = *pauVar11;
              auVar16 = *pauVar11;
              auVar15 = *pauVar11;
              fVar54 = (float)((ulong)uVar12 >> 0x20);
              fVar47 = (float)CONCAT13(uVar45,CONCAT12(uVar44,CONCAT11(uVar43,uVar42)));
              auVar50._4_4_ = fVar47;
              auVar50._0_4_ = extraout_s2;
              auVar50._8_4_ = extraout_s1;
              auVar50._12_4_ = extraout_var;
              fVar49 = -extraout_s2;
              uVar42 = SUB41(fVar49,0);
              uVar43 = (undefined1)((uint)fVar49 >> 8);
              uVar44 = (undefined1)((uint)fVar49 >> 0x10);
              uVar45 = (undefined1)((uint)fVar49 >> 0x18);
              fVar47 = -fVar47;
              uVar46 = (undefined1)((uint)fVar47 >> 0x18);
              fVar52 = -extraout_s1;
              auVar56 = NEON_rev64(auVar50,4);
              auVar48._12_4_ = fVar55;
              auVar48._0_12_ = *pauVar11;
              auVar14._4_4_ = fVar55;
              auVar14._0_4_ = fVar55;
              auVar14._8_4_ = fVar55;
              auVar14._12_4_ = fVar55;
              auVar48 = NEON_ext(auVar14,auVar48,4,1);
              auVar51._4_4_ = extraout_s2;
              auVar51._0_4_ = fVar49;
              auVar51._8_4_ =
                   (int)(CONCAT14((char)((uint)fVar52 >> 0x18),
                                  CONCAT13((char)((uint)fVar52 >> 0x10),
                                           CONCAT12((char)((uint)fVar52 >> 8),
                                                    CONCAT11(SUB41(fVar52,0),uVar46)))) >> 8);
              auVar51._12_4_ = extraout_s1;
              auVar51 = NEON_ext(auVar51,auVar50,8,1);
              auVar51 = NEON_ext(auVar51,auVar51,4,1);
              pppppfVar6 = (float *****)(ppppfStack_178 + uVar37 * 2);
              *(float *)(pppppfVar6 + 1) =
                   auVar48._8_4_ * auVar56._4_4_ + in_s3 * fVar53 +
                   SUB124(*pauVar11,4) * auVar51._8_4_ + auVar16._0_4_ * fVar52;
              *(float *)((long)pppppfVar6 + 0xc) =
                   auVar48._12_4_ *
                   (float)(CONCAT14(uVar46,CONCAT13((char)((uint)fVar47 >> 0x10),
                                                    CONCAT12((char)((uint)fVar47 >> 8),
                                                             CONCAT11(SUB41(fVar47,0),uVar45)))) >>
                          8) + fVar55 * fVar53 + auVar15._4_4_ * auVar51._12_4_ +
                   auVar16._8_4_ * fVar49;
              *(float *)pppppfVar6 =
                   auVar48._0_4_ * auVar56._0_4_ + (float)uVar12 * fVar53 + in_s3 * auVar51._0_4_ +
                   fVar54 * fVar49;
              *(float *)((long)pppppfVar6 + 4) =
                   auVar48._4_4_ * extraout_s1 + fVar54 * fVar53 + auVar15._0_4_ * auVar51._4_4_ +
                   auVar17._8_4_ * fVar47;
              uVar37 = uVar37 + 1;
              lVar25 = lVar25 + 0xc;
              fVar53 = in_s3;
            } while (uVar34 != uVar37);
            if (pfStack_a8 != (float *)0x0) {
              pfStack_a0 = pfStack_a8;
              __ZdlPv();
            }
            if (puVar21 != (undefined *)0x0) {
              func_0x000107c2ae60(puVar21);
            }
            uVar37 = ((long)param_1[1] - (long)*param_1 >> 4) * -0x5555555555555555;
            if (uVar37 < uVar31 || uVar37 - uVar31 == 0) goto LAB_10a11b4ec;
            ppppppfVar20 = *param_1 + uVar31 * 6;
            pppppfVar26 = *ppppppfVar20;
            if (pppppfVar26 != (float *****)0x0) {
              ppppppfVar20[1] = pppppfVar26;
              _free(pppppfVar26[-1]);
              *ppppppfVar20 = (float *****)0x0;
              ppppppfVar20[1] = (float *****)0x0;
              ppppppfVar20[2] = (float *****)0x0;
            }
            ppppppfVar20[1] = (float *****)ppppppfStack_188;
            *ppppppfVar20 = (float *****)ppppppfStack_190;
            ppppppfVar20[2] = (float *****)ppppppfStack_180;
            ppppppfStack_190 = (float ******)0x0;
            ppppppfStack_188 = (float ******)0x0;
            ppppppfStack_180 = (float ******)0x0;
            pppppfVar26 = ppppppfVar20[3];
            if (pppppfVar26 != (float *****)0x0) {
              ppppppfVar20[4] = pppppfVar26;
              __ZdlPv();
              ppppppfVar20[3] = (float *****)0x0;
              ppppppfVar20[4] = (float *****)0x0;
              ppppppfVar20[5] = (float *****)0x0;
            }
            ppppppfVar20[4] = (float *****)ppppfStack_170;
            ppppppfVar20[3] = (float *****)ppppfStack_178;
            ppppppfVar20[5] = (float *****)ppppfStack_168;
            ppppfStack_178 = (float ****)0x0;
            ppppfStack_170 = (float ****)0x0;
            ppppfStack_168 = (float ****)0x0;
            if ((float *******)ppppppfStack_190 != (float *******)0x0) {
              ppppppfStack_188 = ppppppfStack_190;
              _free(ppppppfStack_190[-1]);
            }
            uVar31 = uVar31 + 1;
            pbVar38 = pbStack_e8;
            pbVar41 = pbStack_e0;
          } while (uVar31 < (ulong)((long)pbStack_e0 - (long)pbStack_e8 >> 4));
          if ((float *****)ppppfStack_200 != (float *****)0x0) {
            ppppfStack_140 = ppppfStack_200;
            __ZdlPv();
            ppppppfStack_208 = ppppppfStack_160;
          }
          if ((float *******)ppppppfStack_208 != (float *******)0x0) {
            ppppppfStack_158 = ppppppfStack_208;
            _free(ppppppfStack_208[-1]);
          }
        }
        if (pbStack_e8 != (byte *)0x0) {
          pbStack_e0 = pbStack_e8;
          __ZdlPv(pbStack_e8);
        }
        if (lStack_100 != 0) {
          lStack_f8 = lStack_100;
          __ZdlPv();
        }
        if (lStack_118 != 0) {
          lStack_110 = lStack_118;
          __ZdlPv();
        }
        return;
      }
    }
  }
  FUN_10a00946c(&UNK_10f63b8ac);
LAB_10a11b4ec:
                    /* WARNING: Does not return */
  pcVar19 = (code *)SoftwareBreakpoint(1,0x10a11b4f0);
  (*pcVar19)();
}



/* Entry: 10a11b5b4; end: 10a11b603;  */

long FUN_10a11b5b4(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x48);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x30);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a11b604; end: 10a11b6d7;  */

undefined1  [16] FUN_10a11b604(ulong *param_1,ulong *param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong *puVar23;
  undefined1 *puVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  puVar2 = (undefined1 *)param_1[1];
  if (puVar2 < (undefined1 *)param_1[2]) {
    puVar24 = puVar2 + 1;
    *puVar2 = (char)*param_2;
    puVar4 = param_1;
  }
  else {
    puVar19 = (ulong *)*param_1;
    lVar22 = (long)puVar2 - (long)puVar19;
    puVar23 = (ulong *)(lVar22 + 1);
    if ((long)puVar23 < 0) {
      FUN_109ffdf98();
      puVar23 = (ulong *)((long)(param_1[1] - *param_1) >> 4);
      if (param_2 <= puVar23) {
        if (param_2 < puVar23) {
          param_1[1] = *param_1 + (long)param_2 * 0x10;
        }
        auVar26._8_8_ = param_2;
        auVar26._0_8_ = param_1;
        return auVar26;
      }
      uVar10 = (long)param_2 - (long)puVar23;
      puVar23 = (ulong *)param_1[1];
      if ((ulong)((long)(param_1[2] - (long)puVar23) >> 4) < uVar10) {
        lVar22 = (long)puVar23 - *param_1;
        uVar17 = uVar10 + (lVar22 >> 4);
        if (uVar17 >> 0x3c != 0) {
          FUN_10a131cec();
          plVar6 = (long *)&UNK_10f63e073;
          FUN_109ffde64();
          if (uVar10 >> 0x3c == 0) {
            lVar22 = uVar10 << 4;
            __Znwm(lVar22);
            auVar28._8_8_ = uVar10;
            auVar28._0_8_ = lVar22;
            return auVar28;
          }
          func_0x000109ffded8();
          plVar8 = (long *)plVar6[1];
          if ((ulong)((plVar6[2] - (long)plVar8 >> 2) * -0x5555555555555555) < uVar10) {
            lVar22 = (long)plVar8 - *plVar6;
            uVar17 = uVar10 + (lVar22 >> 2) * -0x5555555555555555;
            if (0x1555555555555555 < uVar17) {
              FUN_10a132248();
              puVar9 = (undefined8 *)&UNK_10f63e073;
              FUN_109ffde64();
              if (0x1555555555555555 < uVar10) {
                func_0x000109ffded8();
                *puVar9 = 0;
                puVar9[1] = 0;
                puVar9[2] = 0;
                lVar22 = 0;
                if (uVar10 != 0) {
                  FUN_10a051ac8(puVar9);
                  lVar20 = puVar9[1];
                  lVar14 = ((uVar10 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
                  lVar22 = lVar14;
                  _bzero(lVar20,lVar14);
                  puVar9[1] = lVar20 + lVar14;
                }
                auVar31._8_8_ = lVar22;
                auVar31._0_8_ = puVar9;
                return auVar31;
              }
              lVar22 = uVar10 * 0xc;
              __Znwm(lVar22);
              auVar30._8_8_ = uVar10;
              auVar30._0_8_ = lVar22;
              return auVar30;
            }
            lVar14 = plVar6[2] - *plVar6 >> 2;
            uVar16 = lVar14 * 0x5555555555555556;
            if (uVar16 < uVar17 || uVar16 - uVar17 == 0) {
              uVar16 = uVar17;
            }
            if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar14 * -0x5555555555555555)) {
              uVar16 = 0x1555555555555555;
            }
            if (uVar16 == 0) {
              plVar8 = (long *)0x0;
            }
            else {
              plVar8 = plVar6;
              FUN_10a13225c();
            }
            puVar1 = (undefined *)((long)plVar8 + lVar22);
            lVar20 = ((uVar10 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
            _bzero(puVar1,lVar20);
            lVar22 = *plVar6;
            lVar21 = (long)puVar1 - (plVar6[1] - lVar22);
            _memcpy(lVar21);
            lVar14 = *plVar6;
            *plVar6 = lVar21;
            plVar6[1] = (long)(puVar1 + lVar20);
            plVar6[2] = (long)((long)plVar8 + uVar16 * 0xc);
            plVar7 = (long *)0x0;
            if (lVar14 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR___ZdlPv_110352258)();
              auVar32._8_8_ = lVar22;
              auVar32._0_8_ = lVar14;
              return auVar32;
            }
          }
          else {
            lVar22 = 0;
            plVar7 = plVar6;
            if (uVar10 != 0) {
              lVar14 = ((uVar10 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
              plVar7 = plVar8;
              lVar22 = lVar14;
              _bzero(plVar8,lVar14);
              plVar8 = (long *)((long)plVar8 + lVar14);
            }
            plVar6[1] = (long)plVar8;
          }
          auVar29._8_8_ = lVar22;
          auVar29._0_8_ = plVar7;
          return auVar29;
        }
        uVar11 = param_1[2] - *param_1;
        uVar16 = (long)uVar11 >> 3;
        if (uVar16 <= uVar17) {
          uVar16 = uVar17;
        }
        if (0x7fffffffffffffef < uVar11) {
          uVar16 = 0xfffffffffffffff;
        }
        if (uVar16 == 0) {
          puVar23 = (ulong *)0x0;
        }
        else {
          puVar23 = param_1;
          FUN_10a131d00();
        }
        puVar15 = (ulong *)((long)puVar23 + lVar22);
        lVar22 = uVar10 * 0x10;
        puVar19 = puVar15;
        _bzero(puVar15,lVar22);
        puVar13 = (undefined8 *)*param_1;
        puVar3 = (undefined8 *)param_1[1];
        puVar9 = (undefined8 *)((long)puVar15 + ((long)puVar13 - (long)puVar3));
        puVar18 = puVar9;
        if (puVar3 != puVar13) {
          do {
            puVar12 = puVar13 + 2;
            uVar5 = *puVar13;
            puVar18[1] = puVar13[1];
            *puVar18 = uVar5;
            puVar13 = puVar12;
            puVar18 = puVar18 + 2;
          } while (puVar12 != puVar3);
          puVar13 = (undefined8 *)*param_1;
        }
        *param_1 = (ulong)puVar9;
        param_1[1] = (ulong)(puVar15 + uVar10 * 2);
        param_1[2] = (ulong)(puVar23 + uVar16 * 2);
        if (puVar13 != (undefined8 *)0x0) {
          uVar5 = puVar13[-1];
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__free_11034c310)(uVar5);
          auVar33._8_8_ = lVar22;
          auVar33._0_8_ = uVar5;
          return auVar33;
        }
      }
      else {
        lVar22 = 0;
        puVar19 = param_1;
        if (uVar10 != 0) {
          lVar22 = uVar10 * 0x10;
          puVar19 = puVar23;
          _bzero(puVar23,lVar22);
          puVar23 = puVar23 + uVar10 * 2;
        }
        param_1[1] = (ulong)puVar23;
      }
      auVar27._8_8_ = lVar22;
      auVar27._0_8_ = puVar19;
      return auVar27;
    }
    uVar10 = (long)param_1[2] - (long)puVar19;
    puVar15 = (ulong *)(uVar10 * 2);
    if (puVar15 < puVar23 || (long)puVar15 - (long)puVar23 == 0) {
      puVar15 = puVar23;
    }
    if (0x3ffffffffffffffe < uVar10) {
      puVar15 = (ulong *)0x7fffffffffffffff;
    }
    if (puVar15 == (ulong *)0x0) {
      puVar23 = (ulong *)0x0;
    }
    else {
      puVar23 = puVar15;
      __Znwm();
    }
    puVar24 = (undefined1 *)((long)puVar23 + lVar22) + 1;
    *(undefined1 *)((long)puVar23 + lVar22) = (char)*param_2;
    puVar4 = puVar23;
    param_2 = puVar19;
    _memcpy(puVar23,puVar19,lVar22);
    *param_1 = (ulong)puVar23;
    param_1[1] = (ulong)puVar24;
    param_1[2] = (long)puVar23 + (long)puVar15;
    if (puVar19 != (ulong *)0x0) {
      __ZdlPv(puVar19);
      puVar4 = puVar19;
    }
  }
  param_1[1] = (ulong)puVar24;
  auVar25._8_8_ = param_2;
  auVar25._0_8_ = puVar4;
  return auVar25;
}



/* Entry: 10a11b6d8; end: 10a11b743;  */

undefined1  [16] FUN_10a11b6d8(long *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  uVar12 = param_1[1] - *param_1 >> 4;
  if (param_2 <= uVar12) {
    if (param_2 < uVar12) {
      param_1[1] = *param_1 + param_2 * 0x10;
    }
    auVar18._8_8_ = param_2;
    auVar18._0_8_ = param_1;
    return auVar18;
  }
  param_2 = param_2 - uVar12;
  plVar3 = (long *)param_1[1];
  if ((ulong)(param_1[2] - (long)plVar3 >> 4) < param_2) {
    lVar17 = (long)plVar3 - *param_1;
    uVar12 = param_2 + (lVar17 >> 4);
    if (uVar12 >> 0x3c != 0) {
      FUN_10a131cec();
      plVar3 = (long *)&UNK_10f63e073;
      FUN_109ffde64();
      if (param_2 >> 0x3c == 0) {
        lVar17 = param_2 << 4;
        __Znwm(lVar17);
        auVar20._8_8_ = param_2;
        auVar20._0_8_ = lVar17;
        return auVar20;
      }
      func_0x000109ffded8();
      plVar6 = (long *)plVar3[1];
      if ((ulong)((plVar3[2] - (long)plVar6 >> 2) * -0x5555555555555555) < param_2) {
        lVar17 = (long)plVar6 - *plVar3;
        uVar12 = param_2 + (lVar17 >> 2) * -0x5555555555555555;
        if (0x1555555555555555 < uVar12) {
          FUN_10a132248();
          puVar7 = (undefined8 *)&UNK_10f63e073;
          FUN_109ffde64();
          if (0x1555555555555555 < param_2) {
            func_0x000109ffded8();
            *puVar7 = 0;
            puVar7[1] = 0;
            puVar7[2] = 0;
            lVar17 = 0;
            if (param_2 != 0) {
              FUN_10a051ac8(puVar7);
              lVar15 = puVar7[1];
              lVar11 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
              lVar17 = lVar11;
              _bzero(lVar15,lVar11);
              puVar7[1] = lVar15 + lVar11;
            }
            auVar23._8_8_ = lVar17;
            auVar23._0_8_ = puVar7;
            return auVar23;
          }
          lVar17 = param_2 * 0xc;
          __Znwm(lVar17);
          auVar22._8_8_ = param_2;
          auVar22._0_8_ = lVar17;
          return auVar22;
        }
        lVar11 = plVar3[2] - *plVar3 >> 2;
        uVar13 = lVar11 * 0x5555555555555556;
        if (uVar13 < uVar12 || uVar13 - uVar12 == 0) {
          uVar13 = uVar12;
        }
        if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar11 * -0x5555555555555555)) {
          uVar13 = 0x1555555555555555;
        }
        if (uVar13 == 0) {
          plVar6 = (long *)0x0;
        }
        else {
          plVar6 = plVar3;
          FUN_10a13225c();
        }
        puVar1 = (undefined *)((long)plVar6 + lVar17);
        lVar15 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
        _bzero(puVar1,lVar15);
        lVar17 = *plVar3;
        lVar16 = (long)puVar1 - (plVar3[1] - lVar17);
        _memcpy(lVar16);
        lVar11 = *plVar3;
        *plVar3 = lVar16;
        plVar3[1] = (long)(puVar1 + lVar15);
        plVar3[2] = (long)((long)plVar6 + uVar13 * 0xc);
        plVar5 = (long *)0x0;
        if (lVar11 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)();
          auVar24._8_8_ = lVar17;
          auVar24._0_8_ = lVar11;
          return auVar24;
        }
      }
      else {
        lVar17 = 0;
        plVar5 = plVar3;
        if (param_2 != 0) {
          lVar11 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
          plVar5 = plVar6;
          lVar17 = lVar11;
          _bzero(plVar6,lVar11);
          plVar6 = (long *)((long)plVar6 + lVar11);
        }
        plVar3[1] = (long)plVar6;
      }
      auVar21._8_8_ = lVar17;
      auVar21._0_8_ = plVar5;
      return auVar21;
    }
    uVar8 = param_1[2] - *param_1;
    uVar13 = (long)uVar8 >> 3;
    if (uVar13 <= uVar12) {
      uVar13 = uVar12;
    }
    if (0x7fffffffffffffef < uVar8) {
      uVar13 = 0xfffffffffffffff;
    }
    if (uVar13 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_10a131d00();
    }
    plVar5 = (long *)((long)plVar3 + lVar17);
    lVar17 = param_2 * 0x10;
    plVar6 = plVar5;
    _bzero(plVar5,lVar17);
    puVar10 = (undefined8 *)*param_1;
    puVar2 = (undefined8 *)param_1[1];
    puVar7 = (undefined8 *)((long)plVar5 + ((long)puVar10 - (long)puVar2));
    puVar14 = puVar7;
    if (puVar2 != puVar10) {
      do {
        puVar9 = puVar10 + 2;
        uVar4 = *puVar10;
        puVar14[1] = puVar10[1];
        *puVar14 = uVar4;
        puVar10 = puVar9;
        puVar14 = puVar14 + 2;
      } while (puVar9 != puVar2);
      puVar10 = (undefined8 *)*param_1;
    }
    *param_1 = (long)puVar7;
    param_1[1] = (long)(plVar5 + param_2 * 2);
    param_1[2] = (long)(plVar3 + uVar13 * 2);
    if (puVar10 != (undefined8 *)0x0) {
      uVar4 = puVar10[-1];
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(uVar4);
      auVar25._8_8_ = lVar17;
      auVar25._0_8_ = uVar4;
      return auVar25;
    }
  }
  else {
    lVar17 = 0;
    plVar6 = param_1;
    if (param_2 != 0) {
      lVar17 = param_2 * 0x10;
      plVar6 = plVar3;
      _bzero(plVar3,lVar17);
      plVar3 = plVar3 + param_2 * 2;
    }
    param_1[1] = (long)plVar3;
  }
  auVar19._8_8_ = lVar17;
  auVar19._0_8_ = plVar6;
  return auVar19;
}



/* Entry: 10a11b744; end: 10a11b78b;  */

void FUN_10a11b744(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a429208(param_2,param_1);
  return;
}



/* Entry: 10a11b78c; end: 10a11b82f;  */

void FUN_10a11b78c(float param_1,long param_2,float *param_3)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar4 = (int)((ulong)param_2 >> 0x20);
  iVar3 = (int)param_2;
  func_0x00010a14431c();
  lVar1 = *(long *)(param_2 + 8);
  uVar5 = *(long *)(param_2 + 0x10) - lVar1 >> 3;
  if (((ulong)(long)iVar3 < uVar5) && ((ulong)(long)iVar4 < uVar5)) {
    fVar6 = *(float *)(lVar1 + (long)iVar3 * 8);
    fVar7 = *(float *)(lVar1 + (long)iVar4 * 8);
    fVar8 = 1.0;
    if (1.1920929e-07 <= ABS(fVar6 - fVar7)) {
      fVar8 = (param_1 - fVar6) / (fVar7 - fVar6);
    }
    fVar6 = 0.0;
    if (0.0 <= fVar8) {
      fVar6 = fVar8;
    }
    fVar7 = 1.0;
    if (fVar6 <= 1.0) {
      fVar7 = fVar6;
    }
    *param_3 = fVar7;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a11b830);
  (*pcVar2)();
}


