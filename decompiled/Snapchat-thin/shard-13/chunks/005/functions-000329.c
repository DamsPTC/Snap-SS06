/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a6ae648; end: 10a6ae703;  */

void FUN_10a6ae648(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f66c4c4,0x19);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a6ae704);
  (*pcVar4)();
}



/* Entry: 10a6ae704; end: 10a6ae713;  */

void FUN_10a6ae704(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0de90;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a6ae714; end: 10a6ae733;  */

void FUN_10a6ae714(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0de90;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6ae734; end: 10a6ae763;  */

void FUN_10a6ae734(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6ae73c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a6ae764; end: 10a6ae7cb;  */

bool FUN_10a6ae764(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x2a) {
    iVar2 = 0xf66c9fe;
    _memcmp(&UNK_10f66c9fe,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 10) && (*param_2 == 0x657645656e656353 && (short)param_2[1] == 0x746e)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x10) {
      return false;
    }
    bVar1 = *param_2 == 0x6150746e65764549 && param_2[1] == 0x73726574656d6172;
  }
  return bVar1;
}



/* Entry: 10a6ae7cc; end: 10a6ae7d3;  */

bool FUN_10a6ae7cc(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x2a) {
    iVar2 = 0xf66c9fe;
    _memcmp(&UNK_10f66c9fe,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 10) && (*param_2 == 0x657645656e656353 && (short)param_2[1] == 0x746e)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x10) {
      return false;
    }
    bVar1 = *param_2 == 0x6150746e65764549 && param_2[1] == 0x73726574656d6172;
  }
  return bVar1;
}



/* Entry: 10a6ae7d4; end: 10a6ae893;  */

void FUN_10a6ae7d4(undefined8 param_1)

{
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_a8 = (undefined *)0x0;
  uStack_a0 = 0xffffffff00000001;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  puStack_90 = &UNK_10f66c9f3;
  uStack_88 = 0;
  puStack_80 = &UNK_10f66c9f3;
  uStack_78 = 0;
  uStack_70 = 0x90;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  FUN_10a6ae894(param_1,&puStack_a8);
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f66c9f4;
  puStack_80 = &UNK_10f66c9f3;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x90;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a6af924();
  FUN_10a6afa94(param_1);
  return;
}



/* Entry: 10a6ae894; end: 10a6ae96b;  */

/* WARNING: Removing unreachable block (ram,0x00010a6ae92c) */

undefined1  [16] FUN_10a6ae894(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c9fe,0x2a);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6af828(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a6ae96c; end: 10a6ae9cb;  */

void FUN_10a6ae96c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  byte bStack_30;
  
  if (param_1 + 0x98 != *(long *)(*(long *)(param_1 + 0x60) + 0x8c0) + 0x58) {
    FUN_10a4af818();
  }
  if (*(long *)(param_1 + 0x98) == *(long *)(param_1 + 0xa0)) {
    return;
  }
  if ((*(char *)(param_1 + 0x88) == '\x01') && (*(char *)(param_1 + 0x90) == '\x01')) {
    uStack_48 = *(undefined8 *)(param_1 + 0x70);
    uStack_50 = *(undefined8 *)(param_1 + 0x68);
    if (*(long *)(param_1 + 0x70) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x70) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_38 = *(undefined8 *)(param_1 + 0x80);
    uStack_40 = *(undefined8 *)(param_1 + 0x78);
    if (*(long *)(param_1 + 0x80) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x80) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    bStack_30 = 1;
    func_0x00010a58dd14(&uStack_70);
    plStack_58 = plStack_68;
    uStack_60 = uStack_70;
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plStack_68 + 1;
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
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
      }
    }
    if ((bStack_30 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a58630c);
      (*pcVar4)();
    }
    FUN_10a58dda4(uStack_50,&uStack_60);
    if (plStack_58 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (bStack_30 == 1) {
      FUN_10a688c1c(&uStack_50);
    }
  }
  return;
}



/* Entry: 10a6ae9cc; end: 10a6aeb03;  */

void FUN_10a6ae9cc(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  plVar4 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar4 = (long *)(param_4 + 0xb0);
  }
  lVar8 = *plVar4;
  lVar6 = param_2;
  func_0x00010a0fda30();
  plVar4 = (long *)0xc8;
  __Znwm();
  plVar5 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar5 = 0;
  *plVar4 = (long)&PTR_FUN_110c0fde8;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110c0fa20;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar6;
  plVar4[0xc] = param_3;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0x800000000;
  plVar4[0xf] = lVar8;
  *(undefined1 *)(plVar4 + 0x10) = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 1;
  plVar4[5] = (long)&PTR_DAT_110c0fab8;
  plVar4[10] = (long)&PTR_DAT_110c0fb10;
  plVar4[0x16] = 0;
  plVar4[0x17] = 0;
  plVar4[0x18] = 0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = plVar4 + 2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[8] = (long)plVar7;
  plVar4[9] = (long)plVar4;
  do {
    lVar6 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)((long)plVar4 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  *param_1 = plVar7;
  param_1[1] = plVar4;
  return;
}



/* Entry: 10a6aeb04; end: 10a6aeb23;  */

undefined1  [16] FUN_10a6aeb04(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x2a;
  auVar1._0_8_ = &UNK_10f66ca29;
  return auVar1;
}



/* Entry: 10a6aeb24; end: 10a6aeb8b;  */

bool FUN_10a6aeb24(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x2a) {
    iVar2 = 0xf66ca29;
    _memcmp(&UNK_10f66ca29,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 10) && (*param_2 == 0x657645656e656353 && (short)param_2[1] == 0x746e)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x10) {
      return false;
    }
    bVar1 = *param_2 == 0x6150746e65764549 && param_2[1] == 0x73726574656d6172;
  }
  return bVar1;
}



/* Entry: 10a6aeb8c; end: 10a6aeb93;  */

bool FUN_10a6aeb8c(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x2a) {
    iVar2 = 0xf66ca29;
    _memcmp(&UNK_10f66ca29,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 10) && (*param_2 == 0x657645656e656353 && (short)param_2[1] == 0x746e)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x10) {
      return false;
    }
    bVar1 = *param_2 == 0x6150746e65764549 && param_2[1] == 0x73726574656d6172;
  }
  return bVar1;
}



/* Entry: 10a6aeb94; end: 10a6aec53;  */

void FUN_10a6aeb94(undefined8 param_1)

{
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_a8 = (undefined *)0x0;
  uStack_a0 = 0xffffffff00000001;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  puStack_90 = &UNK_10f66c9f3;
  uStack_88 = 0;
  puStack_80 = &UNK_10f66c9f3;
  uStack_78 = 0;
  uStack_70 = 0x90;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  FUN_10a6aec54(param_1,&puStack_a8);
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f66c9f4;
  puStack_80 = &UNK_10f66c9f3;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x90;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a6afc8c();
  FUN_10a6afdfc(param_1);
  return;
}



/* Entry: 10a6aec54; end: 10a6aed2b;  */

/* WARNING: Removing unreachable block (ram,0x00010a6aecec) */

undefined1  [16] FUN_10a6aec54(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66ca29,0x2a);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6afb90(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a6aed2c; end: 10a6aed8b;  */

void FUN_10a6aed2c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  byte bStack_30;
  
  if (param_1 + 0x98 != *(long *)(*(long *)(param_1 + 0x60) + 0x8c0) + 0x70) {
    FUN_10a4af818();
  }
  if (*(long *)(param_1 + 0x98) == *(long *)(param_1 + 0xa0)) {
    return;
  }
  if ((*(char *)(param_1 + 0x88) == '\x01') && (*(char *)(param_1 + 0x90) == '\x01')) {
    uStack_48 = *(undefined8 *)(param_1 + 0x70);
    uStack_50 = *(undefined8 *)(param_1 + 0x68);
    if (*(long *)(param_1 + 0x70) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x70) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_38 = *(undefined8 *)(param_1 + 0x80);
    uStack_40 = *(undefined8 *)(param_1 + 0x78);
    if (*(long *)(param_1 + 0x80) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x80) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    bStack_30 = 1;
    func_0x00010a58dd14(&uStack_70);
    plStack_58 = plStack_68;
    uStack_60 = uStack_70;
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plStack_68 + 1;
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
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
      }
    }
    if ((bStack_30 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a58630c);
      (*pcVar4)();
    }
    FUN_10a58dda4(uStack_50,&uStack_60);
    if (plStack_58 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (bStack_30 == 1) {
      FUN_10a688c1c(&uStack_50);
    }
  }
  return;
}



/* Entry: 10a6aed8c; end: 10a6aeec3;  */

void FUN_10a6aed8c(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  plVar4 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar4 = (long *)(param_4 + 0xb0);
  }
  lVar8 = *plVar4;
  lVar6 = param_2;
  func_0x00010a0fda30();
  plVar4 = (long *)0xc8;
  __Znwm();
  plVar5 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar5 = 0;
  *plVar4 = (long)&PTR_FUN_110c0fe38;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_DAT_110c0fb30;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar6;
  plVar4[0xc] = param_3;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0x800000000;
  plVar4[0xf] = lVar8;
  *(undefined1 *)(plVar4 + 0x10) = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 1;
  plVar4[5] = (long)&PTR_DAT_110c0fbc8;
  plVar4[10] = (long)&PTR_DAT_110c0fc20;
  plVar4[0x16] = 0;
  plVar4[0x17] = 0;
  plVar4[0x18] = 0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = plVar4 + 2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[8] = (long)plVar7;
  plVar4[9] = (long)plVar4;
  do {
    lVar6 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)((long)plVar4 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  *param_1 = plVar7;
  param_1[1] = plVar4;
  return;
}



/* Entry: 10a6aeec4; end: 10a6aeee3;  */

undefined1  [16] FUN_10a6aeec4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x22;
  auVar1._0_8_ = &UNK_10f66ca54;
  return auVar1;
}



/* Entry: 10a6aeee4; end: 10a6aef4b;  */

bool FUN_10a6aeee4(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x22) {
    iVar2 = 0xf66ca54;
    _memcmp(&UNK_10f66ca54,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 10) && (*param_2 == 0x657645656e656353 && (short)param_2[1] == 0x746e)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x10) {
      return false;
    }
    bVar1 = *param_2 == 0x6150746e65764549 && param_2[1] == 0x73726574656d6172;
  }
  return bVar1;
}



/* Entry: 10a6aef4c; end: 10a6aef53;  */

bool FUN_10a6aef4c(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x22) {
    iVar2 = 0xf66ca54;
    _memcmp(&UNK_10f66ca54,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 10) && (*param_2 == 0x657645656e656353 && (short)param_2[1] == 0x746e)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x10) {
      return false;
    }
    bVar1 = *param_2 == 0x6150746e65764549 && param_2[1] == 0x73726574656d6172;
  }
  return bVar1;
}



/* Entry: 10a6aef54; end: 10a6aefa7;  */

void FUN_10a6aef54(undefined8 param_1)

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
  puStack_40 = &UNK_10f66c9f3;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  puStack_30 = &UNK_10f66c9f3;
  uStack_18 = 0xffffffff;
  FUN_10a6aefa8(param_1,&uStack_58);
  FUN_10a6afff4();
  return;
}



/* Entry: 10a6aefa8; end: 10a6af07f;  */

/* WARNING: Removing unreachable block (ram,0x00010a6af040) */

undefined1  [16] FUN_10a6aefa8(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66ca54,0x22);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6afef8(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a6af080; end: 10a6af187;  */

undefined8 * FUN_10a6af080(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[8] = param_3;
  param_1[9] = param_4;
  param_1[2] = &PTR_DAT_110bf42e0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_DAT_110bf4248;
  param_1[7] = &PTR_DAT_110bf4338;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0x800000000;
  param_1[0xc] = param_2;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = 1;
  FUN_10a3f840c(param_1 + 0x13);
  *param_1 = &PTR_FUN_110c0fc40;
  param_1[2] = &PTR_DAT_110c0fce0;
  param_1[7] = &PTR_DAT_110c0fd38;
  param_1[0x13] = &PTR_DAT_110c0fd58;
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  if (param_2 != 0) {
    FUN_10a5ae998(param_1[0x14],&PTR_DAT_110bd3150,param_2,param_1 + 0x13);
  }
  return param_1;
}



/* Entry: 10a6af188; end: 10a6af1c7;  */

undefined8 * FUN_10a6af188(undefined8 *param_1)

{
  param_1[0x13] = &PTR_FUN_110bd3170;
  if ((undefined8 *)param_1[0x16] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x16] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x14);
  *param_1 = &PTR_DAT_110bf4248;
  param_1[2] = &PTR_DAT_110bf42e0;
  param_1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    FUN_10a688c1c(param_1 + 0xd);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a6af1c8; end: 10a6af1e3;  */

undefined8 * FUN_10a6af1c8(undefined8 *param_1)

{
  param_1[0x13] = &PTR_FUN_110bd3170;
  if ((undefined8 *)param_1[0x16] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x16] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x14);
  *param_1 = &PTR_DAT_110bf4248;
  param_1[2] = &PTR_DAT_110bf42e0;
  param_1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    FUN_10a688c1c(param_1 + 0xd);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a6af1e4; end: 10a6af23f;  */

void FUN_10a6af1e4(void)

{
  FUN_10a6af188();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6af240; end: 10a6af297;  */

void FUN_10a6af240(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  byte bStack_30;
  
  lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x8c0) + 0x18);
  if (lVar6 != 0) {
    lVar6 = *(long *)(lVar6 + 0xd0);
    if (lVar6 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = *(int *)(lVar6 + 200);
    }
    if (iVar5 != *(int *)(param_1 + 0xb8)) {
      *(int *)(param_1 + 0xb8) = iVar5;
      if ((*(char *)(param_1 + 0x88) == '\x01') && (*(char *)(param_1 + 0x90) == '\x01')) {
        uStack_48 = *(undefined8 *)(param_1 + 0x70);
        uStack_50 = *(undefined8 *)(param_1 + 0x68);
        if (*(long *)(param_1 + 0x70) != 0) {
          plVar1 = (long *)(*(long *)(param_1 + 0x70) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uStack_38 = *(undefined8 *)(param_1 + 0x80);
        uStack_40 = *(undefined8 *)(param_1 + 0x78);
        if (*(long *)(param_1 + 0x80) != 0) {
          plVar1 = (long *)(*(long *)(param_1 + 0x80) + 0x10);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        bStack_30 = 1;
        func_0x00010a58dd14(&uStack_70);
        plStack_58 = plStack_68;
        uStack_60 = uStack_70;
        if (plStack_68 != (long *)0x0) {
          plVar1 = plStack_68 + 2;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
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
          if (lVar6 == 0) {
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
          }
        }
        if ((bStack_30 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a58630c);
          (*pcVar4)();
        }
        FUN_10a58dda4(uStack_50,&uStack_60);
        if (plStack_58 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        if (bStack_30 == 1) {
          FUN_10a688c1c(&uStack_50);
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 10a6af298; end: 10a6af3e7;  */

void FUN_10a6af298(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  
  puVar3 = (undefined8 *)(param_2 + 0x60);
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_4 + 0xb0);
  }
  uVar8 = *puVar3;
  lVar7 = param_2;
  func_0x00010a0fda30();
  plVar6 = (long *)0xd8;
  __Znwm();
  plVar9 = plVar6 + 1;
  *plVar9 = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_110c0fe88;
  plVar1 = plVar6 + 3;
  FUN_10a6af080(plVar1,uVar8,lVar7,param_3);
  if (plVar6[9] == 0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar2 = plVar6 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar6[8] = (long)plVar1;
    plVar6[9] = (long)plVar6;
  }
  else {
    if (*(long *)(plVar6[9] + 8) != -1) goto LAB_10a6af3ac;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar2 = plVar6 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar6[8] = (long)plVar1;
    plVar6[9] = (long)plVar6;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar7 = *plVar9;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *plVar9 = lVar7 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
LAB_10a6af3ac:
  *(undefined4 *)((long)plVar6 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  *param_1 = (long)plVar1;
  param_1[1] = (long)plVar6;
  return;
}



/* Entry: 10a6af3e8; end: 10a6af81f;  */

void FUN_10a6af3e8(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c0fa20;
  param_1[2] = &PTR_DAT_110c0fab8;
  param_1[7] = &PTR_DAT_110c0fb10;
  puStack_28 = param_1 + 0x13;
  func_0x00010a26e0a4(&puStack_28);
  FUN_10a58619c(param_1);
  return;
}



/* Entry: 10a6af820; end: 10a6af827;  */

void FUN_10a6af820(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0xa0);
  if (*(char *)((long)plVar3 + 0x3c) == '\x01') {
    FUN_10a3cf620(plVar3[6],(int)plVar3[7],plVar3);
    *(undefined4 *)(plVar3 + 7) = 0;
  }
  else {
    if (*(char *)((long)plVar3 + 0x3c) != '\x02') {
      return;
    }
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
  }
  *(undefined1 *)((long)plVar3 + 0x3c) = 0;
  return;
}



/* Entry: 10a6af828; end: 10a6af923;  */

undefined1  [16] FUN_10a6af828(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c0fd70;
  puVar1 = &UNK_10f66c9f3;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c0fd70;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110bf6810;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a6af924; end: 10a6af987;  */

ulong FUN_10a6af924(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a6af988);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a6af988,1,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a6af988; end: 10a6afa93;  */

void FUN_10a6af988(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar4 == (long *)0x0) {
    puVar6 = &UNK_10f68f52e;
  }
  else {
    plVar5 = param_2;
    FUN_10a052c2c(param_2,plVar4);
    if ((plVar5 != (long *)0x0) && (___dynamic_cast(), plVar5 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      FUN_10a4bf798(param_1,param_2,plVar5[0x13],plVar5[0x14] - plVar5[0x13] >> 4);
      plVar4 = plVar3 + 0x4b;
      lVar7 = plVar3[0x59];
      uVar8 = lVar7 - 1;
      plVar3[0x59] = uVar8;
      if (uVar8 < 8) {
        uVar8 = plVar4[lVar7 + 2];
        if (plVar3[0x5a] == uVar8) {
          return;
        }
      }
      else {
        uVar8 = *(ulong *)(plVar3[0x57] + -8);
        plVar3[0x57] = plVar3[0x57] + -8;
        if (plVar3[0x5a] == uVar8) {
          return;
        }
      }
      lVar7 = *plVar4;
      lVar12 = plVar3[0x4c];
      lVar10 = lVar12 - lVar7;
      uVar14 = lVar10 >> 4;
      if (uVar14 < uVar8) {
        uVar15 = uVar8 - uVar14;
        lVar13 = plVar3[0x4d];
        if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
          if (uVar8 >> 0x3c == 0) {
            uVar9 = lVar13 - lVar7 >> 3;
            if (uVar9 <= uVar8) {
              uVar9 = uVar8;
            }
            if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
              uVar9 = 0xfffffffffffffff;
            }
            plStack_68 = plVar4;
            if (uVar9 >> 0x3c == 0) {
              lVar2 = uVar9 << 4;
              __Znwm();
              lVar12 = lVar2 + lVar10;
              _bzero(lVar12,uVar15 * 0x10);
              lVar11 = lVar12 + uVar14 * -0x10;
              _memcpy(lVar11,lVar7,lVar10);
              *plVar4 = lVar11;
              plVar3[0x4c] = lVar12 + uVar15 * 0x10;
              plVar3[0x4d] = lVar2 + uVar9 * 0x10;
              lStack_88 = lVar7;
              lStack_80 = lVar7;
              lStack_78 = lVar7;
              lStack_70 = lVar13;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar1)();
        }
        _bzero(lVar12,uVar15 * 0x10);
        plVar3[0x4c] = lVar12 + uVar15 * 0x10;
      }
      else if (uVar8 < uVar14) {
        lVar7 = lVar7 + uVar8 * 0x10;
        while (lVar12 != lVar7) {
          lVar12 = lVar12 + -0x10;
          func_0x00010988c204(lVar12);
        }
        plVar3[0x4c] = lVar7;
      }
code_r0x00010988c138:
      plVar3[0x5a] = uVar8;
      return;
    }
    puVar6 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar6);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a6afa80);
  (*pcVar1)();
}



/* Entry: 10a6afa94; end: 10a6afb4f;  */

void FUN_10a6afa94(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f66c9fe,0x2a);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a6afb50);
  (*pcVar4)();
}



/* Entry: 10a6afb50; end: 10a6afb5f;  */

void FUN_10a6afb50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0fde8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a6afb60; end: 10a6afb7f;  */

void FUN_10a6afb60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0fde8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6afb80; end: 10a6afb8f;  */

void FUN_10a6afb80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6afb88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a6afb90; end: 10a6afc8b;  */

undefined1  [16] FUN_10a6afb90(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c0fd88;
  puVar1 = &UNK_10f66c9f3;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c0fd88;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110bf6810;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a6afc8c; end: 10a6afcef;  */

ulong FUN_10a6afc8c(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a6afcf0);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a6afcf0,1,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a6afcf0; end: 10a6afdfb;  */

void FUN_10a6afcf0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar4 == (long *)0x0) {
    puVar6 = &UNK_10f68f52e;
  }
  else {
    plVar5 = param_2;
    FUN_10a052c2c(param_2,plVar4);
    if ((plVar5 != (long *)0x0) && (___dynamic_cast(), plVar5 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      FUN_10a4bf798(param_1,param_2,plVar5[0x13],plVar5[0x14] - plVar5[0x13] >> 4);
      plVar4 = plVar3 + 0x4b;
      lVar7 = plVar3[0x59];
      uVar8 = lVar7 - 1;
      plVar3[0x59] = uVar8;
      if (uVar8 < 8) {
        uVar8 = plVar4[lVar7 + 2];
        if (plVar3[0x5a] == uVar8) {
          return;
        }
      }
      else {
        uVar8 = *(ulong *)(plVar3[0x57] + -8);
        plVar3[0x57] = plVar3[0x57] + -8;
        if (plVar3[0x5a] == uVar8) {
          return;
        }
      }
      lVar7 = *plVar4;
      lVar12 = plVar3[0x4c];
      lVar10 = lVar12 - lVar7;
      uVar14 = lVar10 >> 4;
      if (uVar14 < uVar8) {
        uVar15 = uVar8 - uVar14;
        lVar13 = plVar3[0x4d];
        if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
          if (uVar8 >> 0x3c == 0) {
            uVar9 = lVar13 - lVar7 >> 3;
            if (uVar9 <= uVar8) {
              uVar9 = uVar8;
            }
            if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
              uVar9 = 0xfffffffffffffff;
            }
            plStack_68 = plVar4;
            if (uVar9 >> 0x3c == 0) {
              lVar2 = uVar9 << 4;
              __Znwm();
              lVar12 = lVar2 + lVar10;
              _bzero(lVar12,uVar15 * 0x10);
              lVar11 = lVar12 + uVar14 * -0x10;
              _memcpy(lVar11,lVar7,lVar10);
              *plVar4 = lVar11;
              plVar3[0x4c] = lVar12 + uVar15 * 0x10;
              plVar3[0x4d] = lVar2 + uVar9 * 0x10;
              lStack_88 = lVar7;
              lStack_80 = lVar7;
              lStack_78 = lVar7;
              lStack_70 = lVar13;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar1)();
        }
        _bzero(lVar12,uVar15 * 0x10);
        plVar3[0x4c] = lVar12 + uVar15 * 0x10;
      }
      else if (uVar8 < uVar14) {
        lVar7 = lVar7 + uVar8 * 0x10;
        while (lVar12 != lVar7) {
          lVar12 = lVar12 + -0x10;
          func_0x00010988c204(lVar12);
        }
        plVar3[0x4c] = lVar7;
      }
code_r0x00010988c138:
      plVar3[0x5a] = uVar8;
      return;
    }
    puVar6 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar6);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a6afde8);
  (*pcVar1)();
}



/* Entry: 10a6afdfc; end: 10a6afeb7;  */

void FUN_10a6afdfc(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f66ca29,0x2a);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a6afeb8);
  (*pcVar4)();
}



/* Entry: 10a6afeb8; end: 10a6afec7;  */

void FUN_10a6afeb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0fe38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a6afec8; end: 10a6afee7;  */

void FUN_10a6afec8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0fe38;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6afee8; end: 10a6afef7;  */

void FUN_10a6afee8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6afef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a6afef8; end: 10a6afff3;  */

undefined1  [16] FUN_10a6afef8(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c0fda0;
  puVar1 = &UNK_10f66c9f3;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c0fda0;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110bf6810;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a6afff4; end: 10a6b00af;  */

void FUN_10a6afff4(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f66ca54,0x22);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a6b00b0);
  (*pcVar4)();
}



/* Entry: 10a6b00b0; end: 10a6b00bf;  */

void FUN_10a6b00b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0fe88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a6b00c0; end: 10a6b00df;  */

void FUN_10a6b00c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0fe88;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6b00e0; end: 10a6b0173;  */

void FUN_10a6b00e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6b00e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a6b0174; end: 10a6b0523;  */

void FUN_10a6b0174(ulong param_1)

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
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f66da38,0xb);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c10640;
  pppuVar2 = (undefined8 ***)"";
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0xa00000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x8a;
  uStack_50 = CONCAT44(uStack_50._4_4_,0x13c);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,10,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c10640;
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
  FUN_10a0051e8(param_1,0x19,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"image",FUN_10a6c9aec,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f2c77b7,FUN_10a6c9c0c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f63ecc4,FUN_10a6c9cc4,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f66ca77,FUN_10a6c9d84,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f66ca84,FUN_10a6c9e50,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f66ca98,FUN_10a6c9f1c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f66caaa,FUN_10a6c9fe8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f66caba,FUN_10a6ca0b4,0);
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
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f66da38,0xb);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a6b0508);
  (*pcVar6)();
}



/* Entry: 10a6b0524; end: 10a6b0587;  */

undefined8 * FUN_10a6b0524(undefined8 *param_1)

{
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a6b0588; end: 10a6b09c3;  */

void FUN_10a6b0588(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  code *pcVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  uint uStack_140;
  int iStack_13c;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  uint uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  uint uStack_e0;
  int iStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  uint uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 auStack_78 [2];
  uint *puStack_70;
  undefined8 uStack_68;
  
  uStack_e0 = 0x42ff0000;
  uStack_d4 = 0;
  uStack_d0 = 0;
  iStack_dc = 0;
  uStack_d8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  puStack_70 = &uStack_e0;
  uStack_b4 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  puVar12 = (undefined8 *)((ulong)puStack_70 | 8);
  lStack_a8 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_138._0_4_ = (undefined4)param_3;
  uStack_138._4_4_ = (undefined4)((ulong)param_3 >> 0x20);
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_140 = 0x1010000;
  auStack_78[0] = 0x2010000;
  uStack_68 = 0;
  puStack_a0 = puVar12;
  puStack_98 = &uStack_90;
  func_0x000109a491e0(&uStack_140,auStack_78,0);
  if ((uStack_e0 & 0xfff) == 0x10) {
    if (param_4 == 0) {
      uStack_140 = 0x1010000;
      puStack_70 = &uStack_e0;
      uStack_130 = 0;
      uStack_12c = 0;
      auStack_78[0] = 0x2010000;
      uStack_68 = 0;
      uStack_138 = puStack_70;
      func_0x000109ac9fc8(&uStack_140,auStack_78,0,0);
    }
    else {
      uStack_140 = 0x1010000;
      puStack_70 = &uStack_e0;
      uStack_130 = 0;
      uStack_12c = 0;
      auStack_78[0] = 0x2010000;
      uStack_68 = 0;
      uStack_138 = puStack_70;
      func_0x000109ac9fc8(&uStack_140,auStack_78,2,0);
    }
  }
  else if ((param_4 != 0) && ((uStack_e0 & 0xfff) == 0x18)) {
    uStack_140 = 0x1010000;
    puStack_70 = &uStack_e0;
    uStack_130 = 0;
    uStack_12c = 0;
    auStack_78[0] = 0x2010000;
    uStack_68 = 0;
    uStack_138 = puStack_70;
    func_0x000109ac9fc8(&uStack_140,auStack_78,5,0);
  }
  if ((uStack_e0 >> 0xe & 1) == 0) {
    uStack_140 = 0x42ff0000;
    uStack_138._4_4_ = 0;
    uStack_130 = 0;
    iStack_13c = 0;
    uStack_138._0_4_ = 0;
    puStack_100 = (undefined8 *)((ulong)&uStack_140 | 8);
    uStack_124 = 0;
    uStack_120 = 0;
    uStack_12c = 0;
    uStack_128 = 0;
    uStack_114 = 0;
    uStack_11c = 0;
    uStack_118 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    auStack_78[0] = 0x2010000;
    uStack_68 = 0;
    puStack_f8 = &uStack_f0;
    puStack_70 = &uStack_140;
    func_0x000109a479a0(&uStack_e0,auStack_78);
    if (lStack_a8 != 0) {
      piVar1 = (int *)(lStack_a8 + 0x14);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(&uStack_e0);
      }
    }
    if (0 < iStack_dc) {
      lVar11 = 0;
      do {
        *(undefined4 *)((long)puStack_a0 + lVar11 * 4) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < iStack_dc);
    }
    uStack_d8 = (undefined4)uStack_138;
    uStack_d4 = uStack_138._4_4_;
    uStack_e0 = uStack_140;
    iStack_dc = iStack_13c;
    uStack_c8 = uStack_128;
    uStack_c4 = uStack_124;
    uStack_d0 = uStack_130;
    uStack_cc = uStack_12c;
    uStack_b8 = uStack_118;
    uStack_b4 = uStack_114;
    uStack_c0 = uStack_120;
    uStack_bc = uStack_11c;
    lStack_a8 = lStack_108;
    uStack_b0 = uStack_110;
    uStack_ac = uStack_10c;
    puVar7 = puStack_a0;
    puVar8 = puStack_98;
    if ((puStack_98 != &uStack_90) &&
       (puVar7 = puVar12, puVar8 = &uStack_90, puStack_98 != (undefined8 *)0x0)) {
      _free(puStack_98[-1]);
    }
    puStack_98 = puVar8;
    puStack_a0 = puVar7;
    if (iStack_13c < 3) {
      puVar12 = (undefined8 *)((ulong)&uStack_140 | 4);
      *puStack_98 = *puStack_f8;
      puStack_98[1] = puStack_f8[1];
      uStack_140 = 0x42ff0000;
      puVar12[1] = 0;
      *puVar12 = 0;
      puVar12[3] = 0;
      puVar12[2] = 0;
      puVar12[5] = 0;
      puVar12[4] = 0;
      *(undefined8 *)((long)puVar12 + 0x34) = 0;
      *(undefined8 *)((long)puVar12 + 0x2c) = 0;
      if (puStack_f8 != &uStack_f0) {
        _free(puStack_f8[-1]);
      }
    }
    else {
      puStack_a0 = puStack_100;
      puStack_98 = puStack_f8;
    }
  }
  uStack_140 = 0xf66da44;
  uStack_138._0_4_ = 0x26;
  if ((uStack_e0 & 0xfff) == 0x18) {
    uStack_140 = 0xf66da6b;
    iStack_13c = 1;
    uStack_138._0_4_ = 0x24;
    uStack_138._4_4_ = 0;
    if ((uStack_e0 >> 0xe & 1) != 0) {
      uVar13 = *puStack_a0;
      lVar11 = param_2;
      FUN_10a2421c8();
      plVar10 = *(long **)(lVar11 + 0x228);
      uStack_140 = 0;
      uVar13 = NEON_rev64(uVar13,4);
      iStack_13c = (int)uVar13;
      uStack_138._0_4_ = (undefined4)((ulong)uVar13 >> 0x20);
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_138._4_4_ = 1;
      uStack_130 = 4;
      uStack_124 = 1;
      uStack_120 = 0;
      uStack_11c = 0;
      uStack_118 = uStack_118 & 0xffffff00;
      uStack_110 = uStack_d0;
      uStack_10c = uStack_cc;
      (**(code **)(*plVar10 + 0x20))(plVar10,&uStack_140);
      FUN_10a0a25e4(auStack_78,plVar10);
      FUN_10a53daa8(param_1,param_2,auStack_78);
      puVar6 = puStack_70;
      if (puStack_70 != (uint *)0x0) {
        puVar2 = puStack_70 + 2;
        do {
          lVar11 = *(long *)puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *(long *)puVar2 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*(long *)puVar6 + 0x10))(puVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(puVar6);
        }
      }
      if (lStack_a8 != 0) {
        piVar1 = (int *)(lStack_a8 + 0x14);
        do {
          iVar3 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(&uStack_e0);
        }
      }
      lStack_a8 = 0;
      uStack_c8 = 0;
      uStack_c4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      uStack_b8 = 0;
      uStack_b4 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      if (0 < iStack_dc) {
        lVar11 = 0;
        do {
          *(undefined4 *)((long)puStack_a0 + lVar11 * 4) = 0;
          lVar11 = lVar11 + 1;
        } while (lVar11 < iStack_dc);
      }
      if (puStack_98 != &uStack_90 && puStack_98 != (undefined8 *)0x0) {
        _free(puStack_98[-1]);
      }
      return;
    }
  }
  uStack_138._4_4_ = 0;
  iStack_13c = 1;
  FUN_10a0edfc4(&uStack_140);
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a6b0970);
  (*pcVar9)();
}



/* Entry: 10a6b09c4; end: 10a6b28e3;  */

void FUN_10a6b09c4(long param_1,long param_2)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint *puVar9;
  long *plVar10;
  ulong uVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined4 *puVar21;
  int *piVar22;
  long lVar23;
  undefined4 *puVar24;
  undefined8 uVar25;
  ulong uVar26;
  undefined1 auVar27 [16];
  uint uStack_640;
  uint uStack_63c;
  uint uStack_638;
  uint uStack_634;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  long lStack_608;
  uint *puStack_600;
  undefined8 *puStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  uint *puStack_5e0;
  uint *puStack_5d8;
  long *plStack_5d0;
  uint *puStack_5c8;
  undefined8 uStack_5c0;
  uint *puStack_5b8;
  undefined1 *puStack_5b0;
  code *pcStack_5a8;
  long *plStack_5a0;
  long lStack_598;
  undefined8 uStack_590;
  undefined4 *puStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  long lStack_558;
  long lStack_550;
  undefined1 *puStack_548;
  undefined1 auStack_540 [16];
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 *puStack_528;
  undefined8 uStack_520;
  uint uStack_510;
  int iStack_50c;
  undefined8 *puStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  long lStack_4d8;
  long lStack_4d0;
  undefined1 *puStack_4c8;
  undefined1 auStack_4c0 [24];
  uint uStack_4a8;
  int iStack_4a4;
  undefined8 *puStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  long lStack_470;
  long lStack_468;
  undefined1 *puStack_460;
  undefined1 auStack_458 [16];
  uint uStack_448;
  int iStack_444;
  undefined8 *puStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  long lStack_410;
  long lStack_408;
  undefined1 *puStack_400;
  undefined1 auStack_3f8 [16];
  uint uStack_3e8;
  int iStack_3e4;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b0;
  long lStack_3a8;
  undefined1 *puStack_3a0;
  undefined1 auStack_398 [16];
  uint uStack_388;
  undefined8 uStack_384;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  long lStack_350;
  long lStack_348;
  long *plStack_340;
  long alStack_338 [2];
  undefined8 uStack_328;
  uint *puStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 auStack_2c0 [2];
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  long lStack_278;
  ulong uStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  int iStack_24c;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  ulong uStack_210;
  undefined8 *puStack_208;
  undefined8 auStack_200 [2];
  uint uStack_1f0;
  int iStack_1ec;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  long lStack_1b8;
  ulong uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  uint *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  ulong uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_388 = 0x42ff0000;
  uStack_37c = 0;
  uStack_378 = 0;
  uStack_384 = 0;
  uStack_36c = 0;
  uStack_368 = 0;
  uStack_374 = 0;
  uStack_370 = 0;
  lStack_348 = (long)&uStack_384 + 4;
  uStack_35c = 0;
  uStack_364 = 0;
  uStack_360 = 0;
  lStack_350 = 0;
  uStack_358 = 0;
  uStack_354 = 0;
  alStack_338[1] = 0;
  alStack_338[0] = 0;
  uStack_150 = (undefined8 *)
               CONCAT44(2,(int)((ulong)(*(long *)(param_1 + 0xa0) - *(long *)(param_1 + 0x98)) >> 3)
                       );
  plStack_340 = alStack_338;
  func_0x000109a83fd0(&uStack_388,2,&uStack_150,5);
  lVar23 = *(long *)(param_1 + 0x98);
  lVar16 = *(long *)(param_1 + 0xa0) - lVar23;
  if (lVar16 != 0) {
    lVar16 = lVar16 >> 3;
    lVar20 = *plStack_340;
    puVar21 = (undefined4 *)(CONCAT44(uStack_374,uStack_378) + 4);
    puVar24 = (undefined4 *)(lVar23 + 4);
    do {
      puVar21[-1] = puVar24[-1];
      *puVar21 = *puVar24;
      puVar21 = (undefined4 *)((long)puVar21 + lVar20);
      lVar16 = lVar16 + -1;
      puVar24 = puVar24 + 2;
    } while (lVar16 != 0);
  }
  FUN_10a6c0970(&uStack_510,&uStack_388);
  auVar27._4_4_ = iStack_50c;
  auVar27._0_4_ = uStack_510;
  auVar27._8_8_ = puStack_508;
  auVar27 = NEON_scvtf(auVar27,4);
  puStack_148 = auVar27._8_8_;
  uStack_150 = auVar27._0_8_;
  FUN_10a6c09fc(0x43800000,0x43800000,&uStack_310,&uStack_150);
  uStack_2b0._0_4_ = 0x42ff0000;
  lVar16 = param_1 + 0x18;
  uStack_2a8._4_4_ = 0;
  uStack_2a0._0_4_ = 0;
  uStack_2b0._4_4_ = 0;
  uStack_2a8._0_4_ = 0;
  puStack_248 = &uStack_2b0;
  uStack_294 = 0;
  uStack_290 = 0;
  uStack_2a0._4_4_ = 0;
  uStack_298 = 0;
  uVar26 = (ulong)puStack_248 | 8;
  uStack_284 = 0;
  uStack_28c = 0;
  uStack_288 = 0;
  lStack_278 = 0;
  uStack_280 = 0;
  uStack_27c = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_1e0 = 0;
  uStack_1dc = 0;
  uStack_1f0 = 0x1010000;
  uStack_250 = 0x2010000;
  uStack_240 = 0;
  uStack_448 = 0xc1020005;
  uStack_438 = 0x200000003;
  uStack_590._0_4_ = 0x100;
  uStack_590._4_4_ = 0x100;
  uStack_138 = 0;
  uStack_140 = 0;
  puStack_148 = (uint *)0x0;
  uStack_150 = (undefined8 *)0x0;
  puStack_440 = &uStack_310;
  uStack_270 = uVar26;
  puStack_268 = &uStack_260;
  uStack_1e8 = lVar16;
  func_0x000109b1e030(&uStack_1f0,&uStack_250,&uStack_448,&uStack_590,1,0,&uStack_150);
  FUN_10a6c0e18(&uStack_150,&uStack_388,&uStack_310);
  FUN_10a6c315c(&uStack_1f0,&uStack_150,0x100,0x100);
  FUN_10a6c3210(&uStack_250,&uStack_2b0,&uStack_1f0);
  if (lStack_278 != 0) {
    piVar22 = (int *)(lStack_278 + 0x14);
    do {
      iVar2 = *piVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_2b0);
    }
  }
  if (0 < uStack_2b0._4_4_) {
    lVar23 = 0;
    do {
      *(undefined4 *)(uStack_270 + lVar23 * 4) = 0;
      lVar23 = lVar23 + 1;
    } while (lVar23 < uStack_2b0._4_4_);
  }
  uStack_2a8._0_4_ = SUB84(puStack_248,0);
  uStack_2a8._4_4_ = (undefined4)((ulong)puStack_248 >> 0x20);
  uStack_2b0._0_4_ = uStack_250;
  uStack_2b0._4_4_ = iStack_24c;
  uStack_298 = (undefined4)uStack_238;
  uStack_294 = (undefined4)((ulong)uStack_238 >> 0x20);
  uStack_2a0._0_4_ = (undefined4)uStack_240;
  uStack_2a0._4_4_ = (undefined4)((ulong)uStack_240 >> 0x20);
  uStack_288 = (undefined4)uStack_228;
  uStack_284 = (undefined4)((ulong)uStack_228 >> 0x20);
  uStack_290 = (undefined4)uStack_230;
  uStack_28c = (undefined4)((ulong)uStack_230 >> 0x20);
  lStack_278 = lStack_218;
  uStack_280 = (undefined4)uStack_220;
  uStack_27c = (undefined4)((ulong)uStack_220 >> 0x20);
  uVar11 = uStack_270;
  puVar18 = puStack_268;
  if ((puStack_268 != &uStack_260) &&
     (uVar11 = uVar26, puVar18 = &uStack_260, puStack_268 != (undefined8 *)0x0)) {
    _free(puStack_268[-1]);
  }
  puStack_268 = puVar18;
  uStack_270 = uVar11;
  puVar18 = puStack_208;
  if (iStack_24c < 3) {
    puVar17 = (undefined8 *)((ulong)&uStack_250 | 4);
    *puStack_268 = *puStack_208;
    puStack_268[1] = puVar18[1];
    uStack_250 = 0x42ff0000;
    puVar17[1] = 0;
    *puVar17 = 0;
    puVar17[3] = 0;
    puVar17[2] = 0;
    puVar17[5] = 0;
    puVar17[4] = 0;
    *(undefined8 *)((long)puVar17 + 0x34) = 0;
    *(undefined8 *)((long)puVar17 + 0x2c) = 0;
    if (puVar18 != auStack_200) {
      _free(puVar18[-1]);
    }
  }
  else {
    puStack_268 = puStack_208;
    uStack_270 = uStack_210;
  }
  if (lStack_1b8 != 0) {
    piVar22 = (int *)(lStack_1b8 + 0x14);
    do {
      iVar2 = *piVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_1f0);
    }
  }
  lStack_1b8 = 0;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  uStack_1e0 = 0;
  uStack_1dc = 0;
  uStack_1c8 = 0;
  uStack_1c4 = 0;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  if (0 < iStack_1ec) {
    lVar23 = 0;
    do {
      *(undefined4 *)(uStack_1b0 + lVar23 * 4) = 0;
      lVar23 = lVar23 + 1;
    } while (lVar23 < iStack_1ec);
  }
  if (puStack_1a8 != &uStack_1a0 && puStack_1a8 != (undefined8 *)0x0) {
    _free(puStack_1a8[-1]);
  }
  if (lStack_118 != 0) {
    piVar22 = (int *)(lStack_118 + 0x14);
    do {
      iVar2 = *piVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_150);
    }
  }
  lStack_118 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  if (0 < uStack_150._4_4_) {
    lVar23 = 0;
    do {
      *(undefined4 *)(uStack_110 + lVar23 * 4) = 0;
      lVar23 = lVar23 + 1;
    } while (lVar23 < uStack_150._4_4_);
  }
  if (puStack_108 != &uStack_100 && puStack_108 != (undefined8 *)0x0) {
    _free(puStack_108[-1]);
  }
  uStack_4a8 = 0x1010000;
  puStack_4a0 = &uStack_2b0;
  uStack_498 = 0;
  FUN_10a0f4340(&uStack_3e8,&uStack_4a8,5);
  if (lStack_278 != 0) {
    piVar22 = (int *)(lStack_278 + 0x14);
    do {
      iVar2 = *piVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_2b0);
    }
  }
  lStack_278 = 0;
  uStack_298 = 0;
  uStack_294 = 0;
  uStack_2a0._0_4_ = 0;
  uStack_2a0._4_4_ = 0;
  uStack_288 = 0;
  uStack_284 = 0;
  uStack_290 = 0;
  uStack_28c = 0;
  if (0 < uStack_2b0._4_4_) {
    lVar23 = 0;
    do {
      *(undefined4 *)(uStack_270 + lVar23 * 4) = 0;
      lVar23 = lVar23 + 1;
    } while (lVar23 < uStack_2b0._4_4_);
  }
  if (puStack_268 != &uStack_260 && puStack_268 != (undefined8 *)0x0) {
    _free(puStack_268[-1]);
  }
  FUN_10a6c0970(&uStack_590,&uStack_388);
  auVar6._4_4_ = uStack_590._4_4_;
  auVar6._0_4_ = (undefined4)uStack_590;
  auVar6._8_8_ = puStack_588;
  auVar27 = NEON_scvtf(auVar6,4);
  puStack_148 = auVar27._8_8_;
  uStack_150 = auVar27._0_8_;
  FUN_10a6c09fc(0x43800000,0x43800000,&uStack_310,&uStack_150);
  uStack_2b0._0_4_ = 0x42ff0000;
  puStack_248 = &uStack_2b0;
  uStack_2a8._4_4_ = 0;
  uStack_2a0._0_4_ = 0;
  uStack_2b0._4_4_ = 0;
  uStack_2a8._0_4_ = 0;
  uVar26 = (ulong)puStack_248 | 8;
  uStack_294 = 0;
  uStack_290 = 0;
  uStack_2a0._4_4_ = 0;
  uStack_298 = 0;
  uStack_284 = 0;
  uStack_28c = 0;
  uStack_288 = 0;
  lStack_278 = 0;
  uStack_280 = 0;
  uStack_27c = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_1e0 = 0;
  uStack_1dc = 0;
  uStack_1f0 = 0x1010000;
  uStack_250 = 0x2010000;
  uStack_240 = 0;
  uStack_4a8 = 0xc1020005;
  uStack_498 = 0x200000003;
  uStack_188 = 0x10000000100;
  uStack_138 = 0;
  uStack_140 = 0;
  puStack_148 = (uint *)0x0;
  uStack_150 = (undefined8 *)0x0;
  puStack_4a0 = &uStack_310;
  uStack_270 = uVar26;
  puStack_268 = &uStack_260;
  uStack_1e8 = lVar16;
  func_0x000109b1e030(&uStack_1f0,&uStack_250,&uStack_4a8,&uStack_188,1,0,&uStack_150);
  FUN_10a6c0e18(&uStack_150,&uStack_388,&uStack_310);
  FUN_10a6c4250(&uStack_1f0,&uStack_150,0x100,0x100);
  FUN_10a6c3210(&uStack_250,&uStack_2b0,&uStack_1f0);
  if (lStack_278 != 0) {
    piVar22 = (int *)(lStack_278 + 0x14);
    do {
      iVar2 = *piVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_2b0);
    }
  }
  if (0 < uStack_2b0._4_4_) {
    lVar23 = 0;
    do {
      *(undefined4 *)(uStack_270 + lVar23 * 4) = 0;
      lVar23 = lVar23 + 1;
    } while (lVar23 < uStack_2b0._4_4_);
  }
  uStack_2a8._0_4_ = SUB84(puStack_248,0);
  uStack_2a8._4_4_ = (undefined4)((ulong)puStack_248 >> 0x20);
  uStack_2b0._0_4_ = uStack_250;
  uStack_2b0._4_4_ = iStack_24c;
  uStack_298 = (undefined4)uStack_238;
  uStack_294 = (undefined4)((ulong)uStack_238 >> 0x20);
  uStack_2a0._0_4_ = (undefined4)uStack_240;
  uStack_2a0._4_4_ = (undefined4)((ulong)uStack_240 >> 0x20);
  uStack_288 = (undefined4)uStack_228;
  uStack_284 = (undefined4)((ulong)uStack_228 >> 0x20);
  uStack_290 = (undefined4)uStack_230;
  uStack_28c = (undefined4)((ulong)uStack_230 >> 0x20);
  lStack_278 = lStack_218;
  uStack_280 = (undefined4)uStack_220;
  uStack_27c = (undefined4)((ulong)uStack_220 >> 0x20);
  uVar11 = uStack_270;
  puVar18 = puStack_268;
  if ((puStack_268 != &uStack_260) &&
     (uVar11 = uVar26, puVar18 = &uStack_260, puStack_268 != (undefined8 *)0x0)) {
    _free(puStack_268[-1]);
  }
  puStack_268 = puVar18;
  uStack_270 = uVar11;
  puVar18 = puStack_208;
  if (iStack_24c < 3) {
    puVar17 = (undefined8 *)((ulong)&uStack_250 | 4);
    *puStack_268 = *puStack_208;
    puStack_268[1] = puVar18[1];
    uStack_250 = 0x42ff0000;
    puVar17[1] = 0;
    *puVar17 = 0;
    puVar17[3] = 0;
    puVar17[2] = 0;
    puVar17[5] = 0;
    puVar17[4] = 0;
    *(undefined8 *)((long)puVar17 + 0x34) = 0;
    *(undefined8 *)((long)puVar17 + 0x2c) = 0;
    if (puVar18 != auStack_200) {
      _free(puVar18[-1]);
    }
  }
  else {
    puStack_268 = puStack_208;
    uStack_270 = uStack_210;
  }
  if (lStack_1b8 != 0) {
    piVar22 = (int *)(lStack_1b8 + 0x14);
    do {
      iVar2 = *piVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_1f0);
    }
  }
  lStack_1b8 = 0;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  uStack_1e0 = 0;
  uStack_1dc = 0;
  uStack_1c8 = 0;
  uStack_1c4 = 0;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  if (0 < iStack_1ec) {
    lVar23 = 0;
    do {
      *(undefined4 *)(uStack_1b0 + lVar23 * 4) = 0;
      lVar23 = lVar23 + 1;
    } while (lVar23 < iStack_1ec);
  }
  if (puStack_1a8 != &uStack_1a0 && puStack_1a8 != (undefined8 *)0x0) {
    _free(puStack_1a8[-1]);
  }
  if (lStack_118 != 0) {
    piVar22 = (int *)(lStack_118 + 0x14);
    do {
      iVar2 = *piVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_150);
    }
  }
  lStack_118 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  if (0 < uStack_150._4_4_) {
    lVar23 = 0;
    do {
      *(undefined4 *)(uStack_110 + lVar23 * 4) = 0;
      lVar23 = lVar23 + 1;
    } while (lVar23 < uStack_150._4_4_);
  }
  if (puStack_108 != &uStack_100 && puStack_108 != (undefined8 *)0x0) {
    _free(puStack_108[-1]);
  }
  uStack_510 = 0x1010000;
  puStack_508 = &uStack_2b0;
  uStack_500 = 0;
  FUN_10a0f4340(&uStack_448,&uStack_510,5);
  if (lStack_278 != 0) {
    piVar22 = (int *)(lStack_278 + 0x14);
    do {
      iVar2 = *piVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_2b0);
    }
  }
  lStack_278 = 0;
  uStack_298 = 0;
  uStack_294 = 0;
  uStack_2a0._0_4_ = 0;
  uStack_2a0._4_4_ = 0;
  uStack_288 = 0;
  uStack_284 = 0;
  uStack_290 = 0;
  uStack_28c = 0;
  if (0 < uStack_2b0._4_4_) {
    lVar23 = 0;
    do {
      *(undefined4 *)(uStack_270 + lVar23 * 4) = 0;
      lVar23 = lVar23 + 1;
    } while (lVar23 < uStack_2b0._4_4_);
  }
  if (puStack_268 != &uStack_260 && puStack_268 != (undefined8 *)0x0) {
    _free(puStack_268[-1]);
  }
  FUN_10a6c0970(&uStack_530,&uStack_388);
  auVar7._4_4_ = uStack_52c;
  auVar7._0_4_ = uStack_530;
  auVar7._8_8_ = puStack_528;
  auVar27 = NEON_scvtf(auVar7,4);
  puStack_148 = auVar27._8_8_;
  uStack_150 = auVar27._0_8_;
  FUN_10a6c09fc(0x4300000043000000,0x4300000043000000,&uStack_590,&uStack_150);
  uStack_1f0 = 0x42ff0000;
  uStack_1e8._4_4_ = 0;
  uStack_1e0 = 0;
  iStack_1ec = 0;
  uStack_1e8._0_4_ = 0;
  uStack_2a8 = &uStack_1f0;
  uVar26 = (ulong)uStack_2a8 | 8;
  uStack_1d4 = 0;
  uStack_1d0 = 0;
  uStack_1dc = 0;
  uStack_1d8 = 0;
  uStack_1c4 = 0;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_240 = 0;
  uStack_250 = 0x1010000;
  uStack_2b0._0_4_ = 0x2010000;
  uStack_2a0._0_4_ = 0;
  uStack_2a0._4_4_ = 0;
  uStack_310 = CONCAT44(uStack_310._4_4_,0xc1020005);
  uStack_300 = 0x200000003;
  uStack_188 = 0x8000000080;
  uStack_138 = 0;
  uStack_140 = 0;
  puStack_148 = (uint *)0x0;
  uStack_150 = (undefined8 *)0x0;
  puStack_308 = &uStack_590;
  puStack_248 = (undefined8 *)lVar16;
  uStack_1b0 = uVar26;
  puStack_1a8 = &uStack_1a0;
  func_0x000109b1e030(&uStack_250,&uStack_2b0,&uStack_310,&uStack_188,1,0,&uStack_150);
  FUN_10a6c0e18(&uStack_250,&uStack_388,&uStack_590);
  FUN_10a6c315c(&uStack_2b0,&uStack_250,0x80,0x80);
  FUN_10a6c3210(&uStack_150,&uStack_1f0,&uStack_2b0);
  if (lStack_1b8 != 0) {
    piVar22 = (int *)(lStack_1b8 + 0x14);
    do {
      iVar2 = *piVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_1f0);
    }
  }
  if (0 < iStack_1ec) {
    lVar23 = 0;
    do {
      *(undefined4 *)(uStack_1b0 + lVar23 * 4) = 0;
      lVar23 = lVar23 + 1;
    } while (lVar23 < iStack_1ec);
  }
  uStack_1e8._0_4_ = SUB84(puStack_148,0);
  uStack_1e8._4_4_ = (undefined4)((ulong)puStack_148 >> 0x20);
  uStack_1f0 = (uint)uStack_150;
  uStack_1d8 = (undefined4)uStack_138;
  uStack_1d4 = (undefined4)((ulong)uStack_138 >> 0x20);
  uStack_1e0 = (undefined4)uStack_140;
  uStack_1dc = (undefined4)((ulong)uStack_140 >> 0x20);
  uStack_1c8 = (undefined4)uStack_128;
  uStack_1c4 = (undefined4)((ulong)uStack_128 >> 0x20);
  uStack_1d0 = (undefined4)uStack_130;
  uStack_1cc = (undefined4)((ulong)uStack_130 >> 0x20);
  lStack_1b8 = lStack_118;
  uStack_1c0 = (undefined4)uStack_120;
  uStack_1bc = (undefined4)((ulong)uStack_120 >> 0x20);
  iStack_1ec = uStack_150._4_4_;
  uVar11 = uStack_1b0;
  puVar18 = puStack_1a8;
  if ((puStack_1a8 != &uStack_1a0) &&
     (uVar11 = uVar26, puVar18 = &uStack_1a0, puStack_1a8 != (undefined8 *)0x0)) {
    _free(puStack_1a8[-1]);
  }
  puStack_1a8 = puVar18;
  uStack_1b0 = uVar11;
  if (uStack_150._4_4_ < 3) {
    puVar18 = (undefined8 *)((ulong)&uStack_150 | 4);
    *puStack_1a8 = *puStack_108;
    puStack_1a8[1] = puStack_108[1];
    uStack_150 = (undefined8 *)CONCAT44(uStack_150._4_4_,0x42ff0000);
    puVar18[1] = 0;
    *puVar18 = 0;
    puVar18[3] = 0;
    puVar18[2] = 0;
    puVar18[5] = 0;
    puVar18[4] = 0;
    *(undefined8 *)((long)puVar18 + 0x34) = 0;
    *(undefined8 *)((long)puVar18 + 0x2c) = 0;
    if (puStack_108 != &uStack_100) {
      _free(puStack_108[-1]);
    }
  }
  else {
    puStack_1a8 = puStack_108;
    uStack_1b0 = uStack_110;
  }
  FUN_10a6c42e4(&uStack_310,&uStack_250,0x80,0x80);
  uStack_150 = (undefined8 *)CONCAT44(iStack_1ec,uStack_1f0);
  puStack_148 = (uint *)CONCAT44(uStack_1e8._4_4_,(undefined4)uStack_1e8);
  uStack_138 = CONCAT44(uStack_1d4,uStack_1d8);
  uStack_140 = CONCAT44(uStack_1dc,uStack_1e0);
  uStack_110 = (ulong)&uStack_150 | 8;
  uStack_128 = CONCAT44(uStack_1c4,uStack_1c8);
  uStack_130 = CONCAT44(uStack_1cc,uStack_1d0);
  uStack_120 = CONCAT44(uStack_1bc,uStack_1c0);
  lStack_118 = lStack_1b8;
  puStack_108 = &uStack_100;
  uStack_f8 = 0;
  uStack_100 = 0;
  if (lStack_1b8 != 0) {
    piVar22 = (int *)(lStack_1b8 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = *piVar22 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (iStack_1ec < 3) {
    uStack_100 = *puStack_1a8;
    uStack_f8 = puStack_1a8[1];
  }
  else {
    uStack_150 = (undefined8 *)(ulong)uStack_1f0;
    func_0x000109a84868(&uStack_150,&uStack_1f0);
  }
  ppuStack_b0 = &puStack_e8;
  puStack_e8 = puStack_308;
  uStack_f0 = uStack_310;
  uStack_d8 = uStack_2f8;
  uStack_e0 = uStack_300;
  uStack_c8 = uStack_2e8;
  uStack_d0 = uStack_2f0;
  lStack_b8 = lStack_2d8;
  uStack_c0 = uStack_2e0;
  puStack_a8 = &uStack_a0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (lStack_2d8 != 0) {
    piVar22 = (int *)(lStack_2d8 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = *piVar22 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (uStack_310._4_4_ < 3) {
    uStack_a0 = *puStack_2c8;
    uStack_98 = puStack_2c8[1];
  }
  else {
    uStack_f0 = uStack_310 & 0xffffffff;
    func_0x000109a84868(&uStack_f0,&uStack_310);
  }
  uStack_180 = 0;
  uStack_188 = 0;
  uStack_178 = 0;
  FUN_10a001444(&uStack_188,&uStack_150,&uStack_90,2);
  plStack_5a0 = alStack_338;
  lStack_598 = param_2;
  FUN_10a6c05fc(&uStack_510,uStack_188,uStack_180);
  puStack_170 = &uStack_188;
  FUN_109ffe3e8(&puStack_170);
  puVar18 = &uStack_90;
  do {
    puVar17 = puVar18 + -0xc;
    if (puVar18[-5] != 0) {
      piVar22 = (int *)(puVar18[-5] + 0x14);
      do {
        iVar2 = *piVar22;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
        if (bVar4) {
          *piVar22 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(puVar17);
      }
    }
    puVar18[-5] = 0;
    puVar18[-9] = 0;
    puVar18[-10] = 0;
    puVar18[-7] = 0;
    puVar18[-8] = 0;
    if (0 < *(int *)((long)puVar18 + -0x5c)) {
      lVar23 = 0;
      lVar20 = puVar18[-4];
      do {
        *(undefined4 *)(lVar20 + lVar23 * 4) = 0;
        lVar23 = lVar23 + 1;
      } while (lVar23 < *(int *)((long)puVar18 + -0x5c));
    }
    puVar19 = (undefined8 *)puVar18[-3];
    if (puVar19 != puVar18 + -2 && puVar19 != (undefined8 *)0x0) {
      _free(puVar19[-1]);
    }
    puVar18 = puVar17;
  } while (puVar17 != &uStack_150);
  if (lStack_2d8 != 0) {
    piVar22 = (int *)(lStack_2d8 + 0x14);
    do {
      iVar2 = *piVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_310);
    }
  }
  lStack_2d8 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  if (0 < uStack_310._4_4_) {
    lVar23 = 0;
    do {
      *(undefined4 *)(lStack_2d0 + lVar23 * 4) = 0;
      lVar23 = lVar23 + 1;
    } while (lVar23 < uStack_310._4_4_);
  }
  if (puStack_2c8 != auStack_2c0 && puStack_2c8 != (undefined8 *)0x0) {
    _free(puStack_2c8[-1]);
  }
  if (lStack_278 != 0) {
    piVar22 = (int *)(lStack_278 + 0x14);
    do {
      iVar2 = *piVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_2b0);
    }
  }
  lStack_278 = 0;
  uStack_298 = 0;
  uStack_294 = 0;
  uStack_2a0._0_4_ = 0;
  uStack_2a0._4_4_ = 0;
  uStack_288 = 0;
  uStack_284 = 0;
  uStack_290 = 0;
  uStack_28c = 0;
  if (0 < uStack_2b0._4_4_) {
    lVar23 = 0;
    do {
      *(undefined4 *)(uStack_270 + lVar23 * 4) = 0;
      lVar23 = lVar23 + 1;
    } while (lVar23 < uStack_2b0._4_4_);
  }
  if (puStack_268 != &uStack_260 && puStack_268 != (undefined8 *)0x0) {
    _free(puStack_268[-1]);
  }
  if (lStack_218 != 0) {
    piVar22 = (int *)(lStack_218 + 0x14);
    do {
      iVar2 = *piVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_250);
    }
  }
  lStack_218 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  if (0 < iStack_24c) {
    lVar23 = 0;
    do {
      *(undefined4 *)(uStack_210 + lVar23 * 4) = 0;
      lVar23 = lVar23 + 1;
    } while (lVar23 < iStack_24c);
  }
  if (puStack_208 != auStack_200 && puStack_208 != (undefined8 *)0x0) {
    _free(puStack_208[-1]);
  }
  if (lStack_1b8 != 0) {
    piVar22 = (int *)(lStack_1b8 + 0x14);
    do {
      iVar2 = *piVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_1f0);
    }
  }
  lStack_1b8 = 0;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  uStack_1e0 = 0;
  uStack_1dc = 0;
  uStack_1c8 = 0;
  uStack_1c4 = 0;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  if (0 < iStack_1ec) {
    lVar23 = 0;
    do {
      *(undefined4 *)(uStack_1b0 + lVar23 * 4) = 0;
      lVar23 = lVar23 + 1;
    } while (lVar23 < iStack_1ec);
  }
  if (puStack_1a8 != &uStack_1a0 && puStack_1a8 != (undefined8 *)0x0) {
    _free(puStack_1a8[-1]);
  }
  uStack_318 = 0;
  uStack_328 = CONCAT44(uStack_328._4_4_,0x1010000);
  puStack_320 = &uStack_510;
  FUN_10a0f4340(&uStack_4a8,&uStack_328,5);
  if (lStack_4d8 != 0) {
    piVar22 = (int *)(lStack_4d8 + 0x14);
    do {
      iVar2 = *piVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_510);
    }
  }
  lStack_4d8 = 0;
  uStack_4f8 = 0;
  uStack_500 = 0;
  uStack_4e8 = 0;
  uStack_4f0 = 0;
  if (0 < iStack_50c) {
    lVar23 = 0;
    do {
      *(undefined4 *)(lStack_4d0 + lVar23 * 4) = 0;
      lVar23 = lVar23 + 1;
    } while (lVar23 < iStack_50c);
  }
  if (puStack_4c8 != auStack_4c0 && puStack_4c8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_4c8 + -8));
  }
  FUN_10a6c0970(&puStack_170,&uStack_388);
  auVar8._8_8_ = uStack_168;
  auVar8._0_8_ = puStack_170;
  auVar27 = NEON_scvtf(auVar8,4);
  puStack_148 = auVar27._8_8_;
  uStack_150 = auVar27._0_8_;
  FUN_10a6c09fc(0x4300000043000000,0x4300000043000000,&uStack_188,&uStack_150);
  uStack_1f0 = 0x42ff0000;
  uStack_2a8 = &uStack_1f0;
  uStack_1e8._4_4_ = 0;
  uStack_1e0 = 0;
  iStack_1ec = 0;
  uStack_1e8._0_4_ = 0;
  uVar26 = (ulong)uStack_2a8 | 8;
  uStack_1d4 = 0;
  uStack_1d0 = 0;
  uStack_1dc = 0;
  uStack_1d8 = 0;
  uStack_1c4 = 0;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_240 = 0;
  uStack_250 = 0x1010000;
  uStack_2b0._0_4_ = 0x2010000;
  uStack_2a0._0_4_ = 0;
  uStack_2a0._4_4_ = 0;
  uStack_310 = CONCAT44(uStack_310._4_4_,0xc1020005);
  uStack_300 = 0x200000003;
  uStack_328 = 0x8000000080;
  uStack_138 = 0;
  uStack_140 = 0;
  puStack_148 = (uint *)0x0;
  uStack_150 = (undefined8 *)0x0;
  puStack_308 = &uStack_188;
  puStack_248 = (undefined8 *)lVar16;
  uStack_1b0 = uVar26;
  puStack_1a8 = &uStack_1a0;
  func_0x000109b1e030(&uStack_250,&uStack_2b0,&uStack_310,&uStack_328,1,0,&uStack_150);
  FUN_10a6c0e18(&uStack_250,&uStack_388,&uStack_188);
  FUN_10a6c4250(&uStack_2b0,&uStack_250,0x80,0x80);
  FUN_10a6c3210(&uStack_150,&uStack_1f0,&uStack_2b0);
  if (lStack_1b8 != 0) {
    piVar22 = (int *)(lStack_1b8 + 0x14);
    do {
      iVar2 = *piVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_1f0);
    }
  }
  if (0 < iStack_1ec) {
    lVar23 = 0;
    do {
      *(undefined4 *)(uStack_1b0 + lVar23 * 4) = 0;
      lVar23 = lVar23 + 1;
    } while (lVar23 < iStack_1ec);
  }
  uStack_1e8._0_4_ = SUB84(puStack_148,0);
  uStack_1e8._4_4_ = (undefined4)((ulong)puStack_148 >> 0x20);
  uStack_1f0 = (uint)uStack_150;
  uStack_1d8 = (undefined4)uStack_138;
  uStack_1d4 = (undefined4)((ulong)uStack_138 >> 0x20);
  uStack_1e0 = (undefined4)uStack_140;
  uStack_1dc = (undefined4)((ulong)uStack_140 >> 0x20);
  uStack_1c8 = (undefined4)uStack_128;
  uStack_1c4 = (undefined4)((ulong)uStack_128 >> 0x20);
  uStack_1d0 = (undefined4)uStack_130;
  uStack_1cc = (undefined4)((ulong)uStack_130 >> 0x20);
  lStack_1b8 = lStack_118;
  uStack_1c0 = (undefined4)uStack_120;
  uStack_1bc = (undefined4)((ulong)uStack_120 >> 0x20);
  iStack_1ec = uStack_150._4_4_;
  uVar11 = uStack_1b0;
  puVar18 = puStack_1a8;
  if ((puStack_1a8 != &uStack_1a0) &&
     (uVar11 = uVar26, puVar18 = &uStack_1a0, puStack_1a8 != (undefined8 *)0x0)) {
    _free(puStack_1a8[-1]);
  }
  puStack_1a8 = puVar18;
  uStack_1b0 = uVar11;
  puVar18 = puStack_108;
  if (uStack_150._4_4_ < 3) {
    puVar17 = (undefined8 *)((ulong)&uStack_150 | 4);
    *puStack_1a8 = *puStack_108;
    puStack_1a8[1] = puVar18[1];
    uStack_150 = (undefined8 *)CONCAT44(uStack_150._4_4_,0x42ff0000);
    puVar17[1] = 0;
    *puVar17 = 0;
    puVar17[3] = 0;
    puVar17[2] = 0;
    puVar17[5] = 0;
    puVar17[4] = 0;
    *(undefined8 *)((long)puVar17 + 0x34) = 0;
    *(undefined8 *)((long)puVar17 + 0x2c) = 0;
    if (puVar18 != &uStack_100) {
      _free(puVar18[-1]);
    }
  }
  else {
    puStack_1a8 = puStack_108;
    uStack_1b0 = uStack_110;
  }
  FUN_10a6c42e4(&uStack_310,&uStack_250,0x80,0x80);
  uStack_150 = (undefined8 *)CONCAT44(iStack_1ec,uStack_1f0);
  puStack_148 = (uint *)CONCAT44(uStack_1e8._4_4_,(undefined4)uStack_1e8);
  uStack_138 = CONCAT44(uStack_1d4,uStack_1d8);
  uStack_140 = CONCAT44(uStack_1dc,uStack_1e0);
  uStack_110 = (ulong)&uStack_150 | 8;
  uStack_128 = CONCAT44(uStack_1c4,uStack_1c8);
  uStack_130 = CONCAT44(uStack_1cc,uStack_1d0);
  uStack_120 = CONCAT44(uStack_1bc,uStack_1c0);
  lStack_118 = lStack_1b8;
  puStack_108 = &uStack_100;
  uStack_f8 = 0;
  uStack_100 = 0;
  if (lStack_1b8 != 0) {
    piVar22 = (int *)(lStack_1b8 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = *piVar22 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (iStack_1ec < 3) {
    uStack_100 = *puStack_1a8;
    uStack_f8 = puStack_1a8[1];
  }
  else {
    uStack_150 = (undefined8 *)(ulong)uStack_1f0;
    func_0x000109a84868(&uStack_150,&uStack_1f0);
  }
  ppuStack_b0 = &puStack_e8;
  puStack_e8 = puStack_308;
  uStack_f0 = uStack_310;
  uStack_d8 = uStack_2f8;
  uStack_e0 = uStack_300;
  uStack_c8 = uStack_2e8;
  uStack_d0 = uStack_2f0;
  lStack_b8 = lStack_2d8;
  uStack_c0 = uStack_2e0;
  puStack_a8 = &uStack_a0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (lStack_2d8 != 0) {
    piVar22 = (int *)(lStack_2d8 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = *piVar22 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (uStack_310._4_4_ < 3) {
    uStack_a0 = *puStack_2c8;
    uStack_98 = puStack_2c8[1];
  }
  else {
    uStack_f0 = uStack_310 & 0xffffffff;
    func_0x000109a84868(&uStack_f0,&uStack_310);
  }
  puStack_320 = (uint *)0x0;
  uStack_328 = 0;
  uStack_318 = 0;
  FUN_10a001444(&uStack_328,&uStack_150,&uStack_90,2);
  FUN_10a6c05fc(&uStack_590,uStack_328,puStack_320);
  puStack_158 = &uStack_328;
  FUN_109ffe3e8(&puStack_158);
  puVar18 = &uStack_90;
  do {
    puVar17 = puVar18 + -0xc;
    if (puVar18[-5] != 0) {
      piVar22 = (int *)(puVar18[-5] + 0x14);
      do {
        iVar2 = *piVar22;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
        if (bVar4) {
          *piVar22 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(puVar17);
      }
    }
    puVar18[-5] = 0;
    puVar18[-9] = 0;
    puVar18[-10] = 0;
    puVar18[-7] = 0;
    puVar18[-8] = 0;
    if (0 < *(int *)((long)puVar18 + -0x5c)) {
      lVar23 = 0;
      lVar20 = puVar18[-4];
      do {
        *(undefined4 *)(lVar20 + lVar23 * 4) = 0;
        lVar23 = lVar23 + 1;
      } while (lVar23 < *(int *)((long)puVar18 + -0x5c));
    }
    puVar19 = (undefined8 *)puVar18[-3];
    if (puVar19 != puVar18 + -2 && puVar19 != (undefined8 *)0x0) {
      _free(puVar19[-1]);
    }
    puVar18 = puVar17;
  } while (puVar17 != &uStack_150);
  if (lStack_2d8 != 0) {
    piVar22 = (int *)(lStack_2d8 + 0x14);
    do {
      iVar2 = *piVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_310);
    }
  }
  lVar23 = lStack_598;
  lStack_2d8 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  if (0 < uStack_310._4_4_) {
    lVar20 = 0;
    do {
      *(undefined4 *)(lStack_2d0 + lVar20 * 4) = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < uStack_310._4_4_);
  }
  if (puStack_2c8 != auStack_2c0 && puStack_2c8 != (undefined8 *)0x0) {
    _free(puStack_2c8[-1]);
  }
  if (lStack_278 != 0) {
    piVar22 = (int *)(lStack_278 + 0x14);
    do {
      iVar2 = *piVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_2b0);
    }
  }
  lStack_278 = 0;
  uStack_298 = 0;
  uStack_294 = 0;
  uStack_2a0._0_4_ = 0;
  uStack_2a0._4_4_ = 0;
  uStack_288 = 0;
  uStack_284 = 0;
  uStack_290 = 0;
  uStack_28c = 0;
  if (0 < uStack_2b0._4_4_) {
    lVar20 = 0;
    do {
      *(undefined4 *)(uStack_270 + lVar20 * 4) = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < uStack_2b0._4_4_);
  }
  if (puStack_268 != &uStack_260 && puStack_268 != (undefined8 *)0x0) {
    _free(puStack_268[-1]);
  }
  if (lStack_218 != 0) {
    piVar22 = (int *)(lStack_218 + 0x14);
    do {
      iVar2 = *piVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_250);
    }
  }
  lStack_218 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  if (0 < iStack_24c) {
    lVar20 = 0;
    do {
      *(undefined4 *)(uStack_210 + lVar20 * 4) = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < iStack_24c);
  }
  if (puStack_208 != auStack_200 && puStack_208 != (undefined8 *)0x0) {
    _free(puStack_208[-1]);
  }
  if (lStack_1b8 != 0) {
    piVar22 = (int *)(lStack_1b8 + 0x14);
    do {
      iVar2 = *piVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_1f0);
    }
  }
  plVar10 = plStack_5a0;
  lStack_1b8 = 0;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  uStack_1e0 = 0;
  uStack_1dc = 0;
  uStack_1c8 = 0;
  uStack_1c4 = 0;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  if (0 < iStack_1ec) {
    lVar20 = 0;
    do {
      *(undefined4 *)(uStack_1b0 + lVar20 * 4) = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < iStack_1ec);
  }
  if (puStack_1a8 != &uStack_1a0 && puStack_1a8 != (undefined8 *)0x0) {
    _free(puStack_1a8[-1]);
  }
  uStack_530 = 0x1010000;
  puStack_528 = (undefined4 *)&uStack_590;
  uStack_520 = 0;
  FUN_10a0f4340(&uStack_510,&uStack_530,5);
  if (lStack_558 != 0) {
    piVar22 = (int *)(lStack_558 + 0x14);
    do {
      iVar2 = *piVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_590);
    }
  }
  lStack_558 = 0;
  uStack_578 = 0;
  uStack_580 = 0;
  uStack_568 = 0;
  uStack_570 = 0;
  if (0 < uStack_590._4_4_) {
    lVar20 = 0;
    do {
      *(undefined4 *)(lStack_550 + lVar20 * 4) = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < uStack_590._4_4_);
  }
  if (puStack_548 != auStack_540 && puStack_548 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_548 + -8));
  }
  uStack_188 = 0x4000000040;
  uStack_2b0 = &uStack_388;
  uStack_2a8 = (uint *)&uStack_188;
  puStack_308 = (undefined8 *)0x0;
  uStack_310 = 0;
  uStack_300 = 0;
  uStack_2a0 = lVar16;
  FUN_10a6c5060(&uStack_150,&uStack_2b0,FUN_10a6c5394,FUN_10a6c4100);
  FUN_109fed8e4(&uStack_310,&uStack_150);
  if (lStack_118 != 0) {
    piVar22 = (int *)(lStack_118 + 0x14);
    do {
      iVar2 = *piVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_150);
    }
  }
  lStack_118 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  if (0 < uStack_150._4_4_) {
    lVar16 = 0;
    do {
      *(undefined4 *)(uStack_110 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < uStack_150._4_4_);
  }
  if (puStack_108 != &uStack_100 && puStack_108 != (undefined8 *)0x0) {
    _free(puStack_108[-1]);
  }
  FUN_10a6c5060(&uStack_150,&uStack_2b0,FUN_10a6c54c8,FUN_10a6c41a8);
  FUN_109fed8e4(&uStack_310,&uStack_150);
  if (lStack_118 != 0) {
    piVar22 = (int *)(lStack_118 + 0x14);
    do {
      iVar2 = *piVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_150);
    }
  }
  lStack_118 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  if (0 < uStack_150._4_4_) {
    lVar16 = 0;
    do {
      *(undefined4 *)(uStack_110 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < uStack_150._4_4_);
  }
  if (puStack_108 != &uStack_100 && puStack_108 != (undefined8 *)0x0) {
    _free(puStack_108[-1]);
  }
  FUN_10a6c05fc(&uStack_250,uStack_310,puStack_308);
  uStack_150 = &uStack_310;
  FUN_109ffe3e8(&uStack_150);
  uStack_580 = 0;
  uStack_590._0_4_ = 0x1010000;
  puStack_588 = &uStack_250;
  FUN_10a0f4340(&uStack_1f0,&uStack_590,5);
  if (lStack_218 != 0) {
    piVar22 = (int *)(lStack_218 + 0x14);
    do {
      iVar2 = *piVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_250);
    }
  }
  lStack_218 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  if (0 < iStack_24c) {
    lVar16 = 0;
    do {
      *(undefined4 *)(uStack_210 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < iStack_24c);
  }
  if (puStack_208 != auStack_200 && puStack_208 != (undefined8 *)0x0) {
    _free(puStack_208[-1]);
  }
  uVar25 = *(undefined8 *)(lVar23 + 0x870);
  FUN_10a6b28e4(&uStack_150,uVar25,&uStack_3e8);
  func_0x00010a36f2e0(param_1 + 0xc0,&uStack_150);
  puVar9 = puStack_148;
  if (puStack_148 != (uint *)0x0) {
    puVar14 = puStack_148 + 2;
    do {
      lVar16 = *(long *)puVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar14,0x10);
      if (bVar4) {
        *(long *)puVar14 = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*(long *)puStack_148 + 0x10))(puStack_148);
      __ZNSt3__119__shared_weak_count14__release_weakEv(puVar9);
    }
  }
  FUN_10a6b28e4(&uStack_150,uVar25,&uStack_448);
  func_0x00010a36f2e0(param_1 + 0xf0,&uStack_150);
  puVar9 = puStack_148;
  if (puStack_148 != (uint *)0x0) {
    puVar14 = puStack_148 + 2;
    do {
      lVar16 = *(long *)puVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar14,0x10);
      if (bVar4) {
        *(long *)puVar14 = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*(long *)puStack_148 + 0x10))(puStack_148);
      __ZNSt3__119__shared_weak_count14__release_weakEv(puVar9);
    }
  }
  FUN_10a6b28e4(&uStack_150,uVar25,&uStack_4a8);
  func_0x00010a36f2e0(param_1 + 0xd0,&uStack_150);
  puVar9 = puStack_148;
  if (puStack_148 != (uint *)0x0) {
    puVar14 = puStack_148 + 2;
    do {
      lVar16 = *(long *)puVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar14,0x10);
      if (bVar4) {
        *(long *)puVar14 = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*(long *)puStack_148 + 0x10))(puStack_148);
      __ZNSt3__119__shared_weak_count14__release_weakEv(puVar9);
    }
  }
  FUN_10a6b28e4(&uStack_150,uVar25,&uStack_510);
  func_0x00010a36f2e0(param_1 + 0x100,&uStack_150);
  puVar9 = puStack_148;
  if (puStack_148 != (uint *)0x0) {
    puVar14 = puStack_148 + 2;
    do {
      lVar16 = *(long *)puVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar14,0x10);
      if (bVar4) {
        *(long *)puVar14 = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*(long *)puStack_148 + 0x10))(puStack_148);
      __ZNSt3__119__shared_weak_count14__release_weakEv(puVar9);
    }
  }
  puVar14 = &uStack_1f0;
  FUN_10a6b28e4(&uStack_150,uVar25);
  puVar13 = (uint *)(param_1 + 0xe0);
  puVar18 = &uStack_150;
  func_0x00010a36f2e0();
  puVar12 = puStack_148;
  if (puStack_148 != (uint *)0x0) {
    puVar1 = puStack_148 + 2;
    do {
      lVar16 = *(long *)puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *(long *)puVar1 = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*(long *)puStack_148 + 0x10))(puStack_148);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      puVar13 = puVar12;
    }
  }
  if (lStack_1b8 != 0) {
    piVar22 = (int *)(lStack_1b8 + 0x14);
    do {
      iVar2 = *piVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      puVar13 = &uStack_1f0;
      func_0x000109a848d4();
    }
  }
  lStack_1b8 = 0;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  uStack_1e0 = 0;
  uStack_1dc = 0;
  uStack_1c8 = 0;
  uStack_1c4 = 0;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  if (0 < iStack_1ec) {
    lVar16 = 0;
    do {
      *(undefined4 *)(uStack_1b0 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < iStack_1ec);
  }
  if (puStack_1a8 != &uStack_1a0 && puStack_1a8 != (undefined8 *)0x0) {
    puVar13 = (uint *)puStack_1a8[-1];
    _free();
  }
  if (lStack_4d8 != 0) {
    piVar22 = (int *)(lStack_4d8 + 0x14);
    do {
      iVar2 = *piVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      puVar13 = &uStack_510;
      func_0x000109a848d4();
    }
  }
  lStack_4d8 = 0;
  uStack_4f8 = 0;
  uStack_500 = 0;
  uStack_4e8 = 0;
  uStack_4f0 = 0;
  if (0 < iStack_50c) {
    lVar16 = 0;
    do {
      *(undefined4 *)(lStack_4d0 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < iStack_50c);
  }
  if (puStack_4c8 != auStack_4c0 && puStack_4c8 != (undefined1 *)0x0) {
    puVar13 = *(uint **)(puStack_4c8 + -8);
    _free();
  }
  if (lStack_470 != 0) {
    piVar22 = (int *)(lStack_470 + 0x14);
    do {
      iVar2 = *piVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      puVar13 = &uStack_4a8;
      func_0x000109a848d4();
    }
  }
  lStack_470 = 0;
  uStack_490 = 0;
  uStack_498 = 0;
  uStack_480 = 0;
  uStack_488 = 0;
  if (0 < iStack_4a4) {
    lVar16 = 0;
    do {
      *(undefined4 *)(lStack_468 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < iStack_4a4);
  }
  if (puStack_460 != auStack_458 && puStack_460 != (undefined1 *)0x0) {
    puVar13 = *(uint **)(puStack_460 + -8);
    _free();
  }
  if (lStack_410 != 0) {
    piVar22 = (int *)(lStack_410 + 0x14);
    do {
      iVar2 = *piVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      puVar13 = &uStack_448;
      func_0x000109a848d4();
    }
  }
  lStack_410 = 0;
  uStack_430 = 0;
  uStack_438 = 0;
  uStack_420 = 0;
  uStack_428 = 0;
  if (0 < iStack_444) {
    lVar16 = 0;
    do {
      *(undefined4 *)(lStack_408 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < iStack_444);
  }
  if (puStack_400 != auStack_3f8 && puStack_400 != (undefined1 *)0x0) {
    puVar13 = *(uint **)(puStack_400 + -8);
    _free();
  }
  if (lStack_3b0 != 0) {
    piVar22 = (int *)(lStack_3b0 + 0x14);
    do {
      iVar2 = *piVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      puVar13 = &uStack_3e8;
      func_0x000109a848d4();
    }
  }
  lStack_3b0 = 0;
  uStack_3d0 = 0;
  uStack_3d8 = 0;
  uStack_3c0 = 0;
  uStack_3c8 = 0;
  if (0 < iStack_3e4) {
    lVar16 = 0;
    do {
      *(undefined4 *)(lStack_3a8 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < iStack_3e4);
  }
  if (puStack_3a0 != auStack_398 && puStack_3a0 != (undefined1 *)0x0) {
    puVar13 = *(uint **)(puStack_3a0 + -8);
    _free();
  }
  if (lStack_350 != 0) {
    piVar22 = (int *)(lStack_350 + 0x14);
    do {
      iVar2 = *piVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      puVar13 = &uStack_388;
      func_0x000109a848d4();
    }
  }
  lStack_350 = 0;
  uStack_370 = 0;
  uStack_36c = 0;
  uStack_378 = 0;
  uStack_374 = 0;
  uStack_360 = 0;
  uStack_35c = 0;
  uStack_368 = 0;
  uStack_364 = 0;
  if (0 < (int)uStack_384) {
    lVar16 = 0;
    do {
      *(undefined4 *)(lStack_348 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < (int)uStack_384);
  }
  if (plStack_340 != plVar10 && plStack_340 != (long *)0x0) {
    puVar13 = (uint *)plStack_340[-1];
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar18 == 0) {
    __Unwind_Resume(puVar13);
  }
  puVar12 = puVar13;
  func_0x000104bd46a0(puVar13);
  puStack_5e0 = &uStack_388;
  puStack_5d8 = &uStack_1f0;
  plStack_5d0 = plVar10;
  puStack_5c8 = puVar9;
  uStack_5c0 = uVar25;
  puStack_5b8 = puVar13;
  puStack_5b0 = &stack0xfffffffffffffff0;
  pcStack_5a8 = FUN_10a6b28e4;
  uVar25 = *(undefined8 *)(puVar14 + 4);
  uStack_63c = puVar14[1];
  uVar26 = (ulong)uStack_63c;
  if ((int)uStack_63c < 3) {
    uStack_638 = puVar14[2];
    uStack_634 = puVar14[3];
    lVar16 = (long)(int)uStack_634 * (long)(int)uStack_638;
  }
  else {
    lVar16 = 1;
    piVar22 = *(int **)(puVar14 + 0x10);
    do {
      lVar16 = lVar16 * *piVar22;
      uVar26 = uVar26 - 1;
      piVar22 = piVar22 + 1;
    } while (uVar26 != 0);
    uStack_638 = puVar14[2];
    uStack_634 = puVar14[3];
  }
  uStack_640 = *puVar14;
  uVar5 = uStack_640 >> 3;
  puStack_600 = &uStack_638;
  uStack_628 = *(undefined8 *)(puVar14 + 6);
  uStack_620 = *(undefined8 *)(puVar14 + 8);
  uStack_618 = *(undefined8 *)(puVar14 + 10);
  uStack_610 = *(undefined8 *)(puVar14 + 0xc);
  lStack_608 = *(long *)(puVar14 + 0xe);
  uStack_5f0 = 0;
  uStack_5e8 = 0;
  puStack_5f8 = &uStack_5f0;
  uVar15 = uStack_63c;
  if (lStack_608 != 0) {
    piVar22 = (int *)(lStack_608 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = *piVar22 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar15 = puVar14[1];
  }
  uStack_630 = uVar25;
  if ((int)uVar15 < 3) {
    uStack_5f0 = **(undefined8 **)(puVar14 + 0x12);
    uStack_5e8 = (*(undefined8 **)(puVar14 + 0x12))[1];
  }
  else {
    uStack_63c = 0;
    func_0x000109a84868(&uStack_640,puVar14);
  }
  FUN_10a114aac(puVar12,puVar18,uVar25,lVar16 + lVar16 * ((ulong)uVar5 & 0x1ff),&uStack_640);
  puVar9 = uStack_2b0;
  puVar18 = (undefined8 *)uStack_2a8;
  lVar16 = uStack_2a0;
  if (lStack_608 != 0) {
    piVar22 = (int *)(lStack_608 + 0x14);
    do {
      iVar2 = *piVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_640);
      puVar9 = uStack_2b0;
      puVar18 = (undefined8 *)uStack_2a8;
      lVar16 = uStack_2a0;
    }
  }
  lStack_608 = 0;
  uStack_628 = 0;
  uStack_630 = 0;
  uStack_618 = 0;
  uStack_620 = 0;
  if (0 < (int)uStack_63c) {
    lVar23 = 0;
    do {
      puStack_600[lVar23] = 0;
      lVar23 = lVar23 + 1;
    } while (lVar23 < (int)uStack_63c);
  }
  if (puStack_5f8 != &uStack_5f0 && puStack_5f8 != (undefined8 *)0x0) {
    uStack_2b0 = puVar9;
    uStack_2a8 = (uint *)puVar18;
    uStack_2a0 = lVar16;
    _free(puStack_5f8[-1]);
  }
  return;
}



/* Entry: 10a6b28e4; end: 10a6b2a8f;  */

void FUN_10a6b28e4(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  uint *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar9 = *(undefined8 *)(param_3 + 4);
  uStack_9c = param_3[1];
  uVar6 = (ulong)uStack_9c;
  if ((int)uStack_9c < 3) {
    uStack_98 = param_3[2];
    uStack_94 = param_3[3];
    lVar7 = (long)(int)uStack_94 * (long)(int)uStack_98;
  }
  else {
    lVar7 = 1;
    piVar8 = *(int **)(param_3 + 0x10);
    do {
      lVar7 = lVar7 * *piVar8;
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 1;
    } while (uVar6 != 0);
    uStack_98 = param_3[2];
    uStack_94 = param_3[3];
  }
  uStack_a0 = *param_3;
  uVar4 = uStack_a0 >> 3;
  puStack_60 = &uStack_98;
  uStack_80 = *(undefined8 *)(param_3 + 8);
  uStack_88 = *(undefined8 *)(param_3 + 6);
  uStack_70 = *(undefined8 *)(param_3 + 0xc);
  uStack_78 = *(undefined8 *)(param_3 + 10);
  lStack_68 = *(long *)(param_3 + 0xe);
  uStack_50 = 0;
  uStack_48 = 0;
  uVar5 = uStack_9c;
  if (lStack_68 != 0) {
    piVar8 = (int *)(lStack_68 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar3) {
        *piVar8 = *piVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar5 = param_3[1];
  }
  uStack_90 = uVar9;
  puStack_58 = &uStack_50;
  if ((int)uVar5 < 3) {
    uStack_50 = **(undefined8 **)(param_3 + 0x12);
    uStack_48 = (*(undefined8 **)(param_3 + 0x12))[1];
  }
  else {
    uStack_9c = 0;
    func_0x000109a84868(&uStack_a0,param_3);
  }
  FUN_10a114aac(param_1,param_2,uVar9,lVar7 + lVar7 * ((ulong)uVar4 & 0x1ff),&uStack_a0);
  if (lStack_68 != 0) {
    piVar8 = (int *)(lStack_68 + 0x14);
    do {
      iVar1 = *piVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar3) {
        *piVar8 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_a0);
    }
  }
  lStack_68 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (0 < (int)uStack_9c) {
    lVar7 = 0;
    do {
      puStack_60[lVar7] = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)uStack_9c);
  }
  if (puStack_58 != &uStack_50 && puStack_58 != (undefined8 *)0x0) {
    _free(puStack_58[-1]);
  }
  return;
}



/* Entry: 10a6b2a90; end: 10a6b2b0b;  */

undefined1  [16] FUN_10a6b2a90(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xc;
  auVar1._0_8_ = &UNK_10f66da90;
  return auVar1;
}



/* Entry: 10a6b2b0c; end: 10a6b32bb;  */

void FUN_10a6b2b0c(ulong param_1)

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
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f66da90,0xc);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c113a0;
  pppuVar2 = (undefined8 ***)"";
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0xa00000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,10,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c113a0;
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
  FUN_10a0051e8(param_1,0x19,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6b329c;
    FUN_10a054dac(param_1,&UNK_10f66cba1,FUN_10a6ca1c0,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6b329c;
    FUN_10a054dac(param_1,&UNK_10f66cbb3,FUN_10a6ca5e8,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6b329c;
    FUN_10a054dac(param_1,&UNK_10f66cbd0,FUN_10a6ca798,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6b329c;
    FUN_10a054dac(param_1,&UNK_10f66cbe7,FUN_10a6ca930,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6b329c;
    FUN_10a054dac(param_1,&UNK_10f66cc00,FUN_10a6caefc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6b329c;
    FUN_10a054dac(param_1,&UNK_10f66cc17,FUN_10a6cafb4,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6b329c;
    FUN_10a054dac(param_1,&UNK_10f66cc27,FUN_10a6cb934,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6b329c;
    FUN_10a054dac(param_1,&UNK_10f66cc42,FUN_10a6cbf00,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6b329c;
    FUN_10a054dac(param_1,&UNK_10f66cc58,FUN_10a6cc3fc,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6b329c;
    FUN_10a054dac(param_1,&UNK_10f66cc73,FUN_10a6cc4b4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6b329c;
    FUN_10a054dac(param_1,&DAT_10f2c7958,FUN_10a6cc610,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6b329c;
    FUN_10a054dac(param_1,&UNK_10f66cc91,FUN_10a6cc6c8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6b329c;
    FUN_10a054dac(param_1,&UNK_10f66ccaf,FUN_10a6cc9f8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6b329c;
    FUN_10a054dac(param_1,&UNK_10f66cccb,FUN_10a6ccd28,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6b329c;
    FUN_10a054dac(param_1,&UNK_10f66cce3,FUN_10a6ccf40,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6b329c;
    FUN_10a054dac(param_1,&UNK_10f66ccfe,FUN_10a6ce8e4,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6b329c;
    FUN_10a054dac(param_1,&UNK_10f66cd14,FUN_10a6cea94,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6b329c;
    FUN_10a054dac(param_1,&UNK_10f66cd29,FUN_10a6ceb4c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6b329c;
    FUN_10a054dac(param_1,&UNK_10f66cd40,FUN_10a6cec04,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6b329c;
    FUN_10a054dac(param_1,&UNK_10f66cd4e,FUN_10a6cf0e8,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6b329c;
    FUN_10a054dac(param_1,&UNK_10f66cd65,FUN_10a6d13d4,3,*(undefined8 *)(param_1 + 0x40));
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
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f66da90,0xc);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a6b329c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a6b32a0);
  (*pcVar6)();
}



/* Entry: 10a6b32bc; end: 10a6b340f;  */

void FUN_10a6b32bc(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66cd7b;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x200000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_4c._4_4_,
                uStack_78 & 0xffffffff,uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f684ec4;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6b3410(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64c473;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6b3410();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64c477;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6b3410();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a6b3410; end: 10a6b34b7;  */

undefined8 * FUN_10a6b3410(undefined8 *param_1,undefined8 *param_2,byte param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a6b34b8);
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



/* Entry: 10a6b34b8; end: 10a6b3553;  */

undefined8 * FUN_10a6b34b8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 uStack_31;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_110c0ff30;
  param_1[2] = 0;
  param_1[3] = param_2;
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = param_2;
  FUN_10a05a5d4(puVar1 + 1,&uStack_31);
  param_1[4] = puVar1;
  return param_1;
}



/* Entry: 10a6b3554; end: 10a6b35d3;  */

undefined8 * FUN_10a6b3554(undefined8 *param_1)

{
  FUN_10a6d17cc(param_1 + 4,0);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a6b35d4; end: 10a6b40c3;  */

void FUN_10a6b35d4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  uint *puVar8;
  code *pcVar9;
  ulong uVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int *piVar16;
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  long *plVar21;
  undefined *puStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_150;
  uint *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  int *piStack_110;
  undefined8 *puStack_108;
  undefined8 auStack_100 [2];
  undefined4 uStack_f0;
  uint uStack_ec;
  int iStack_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  long lStack_b8;
  int *piStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  uint *puStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  
  uStack_f0 = 0x42ff0000;
  piVar16 = (int *)((ulong)&uStack_f0 | 8);
  lStack_b8 = 0;
  uStack_bc = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  iStack_e4 = 0;
  uStack_e0 = 0;
  uStack_ec = 0;
  iStack_e8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uVar10 = *(ulong *)(param_3 + 0x28) & 0xfffffffffffffffc;
  cVar6 = *(char *)(uVar10 + 0x17);
  piStack_b0 = piVar16;
  puStack_a8 = &uStack_a0;
  if (cVar6 < '\0') {
    if (*(long *)(uVar10 + 8) != 0) goto LAB_10a6b3650;
  }
  else if (cVar6 != '\0') {
LAB_10a6b3650:
    FUN_109feb2dc(&uStack_150);
    if (lStack_b8 != 0) {
      piVar1 = (int *)(lStack_b8 + 0x14);
      do {
        iVar3 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar3 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(&uStack_f0);
      }
    }
    if (0 < (int)uStack_ec) {
      lVar13 = 0;
      do {
        piStack_b0[lVar13] = 0;
        lVar13 = lVar13 + 1;
      } while (lVar13 < (int)uStack_ec);
    }
    iStack_e8 = (int)puStack_148;
    iStack_e4 = (int)((ulong)puStack_148 >> 0x20);
    uStack_f0 = SUB84(uStack_150,0);
    uStack_d8 = (undefined4)uStack_138;
    uStack_d4 = (undefined4)((ulong)uStack_138 >> 0x20);
    uStack_e0 = (undefined4)uStack_140;
    uStack_dc = (undefined4)((ulong)uStack_140 >> 0x20);
    uStack_c8 = (undefined4)uStack_128;
    uStack_c4 = (undefined4)((ulong)uStack_128 >> 0x20);
    uStack_d0 = (undefined4)uStack_130;
    uStack_cc = (undefined4)((ulong)uStack_130 >> 0x20);
    lStack_b8 = lStack_118;
    uStack_c0 = (undefined4)uStack_120;
    uStack_bc = (undefined4)((ulong)uStack_120 >> 0x20);
    uStack_ec = uStack_150._4_4_;
    piVar1 = piStack_b0;
    puVar12 = puStack_a8;
    if ((puStack_a8 != &uStack_a0) &&
       (piVar1 = piVar16, puVar12 = &uStack_a0, puStack_a8 != (undefined8 *)0x0)) {
      _free(puStack_a8[-1]);
    }
    puStack_a8 = puVar12;
    piStack_b0 = piVar1;
    if ((int)uStack_150._4_4_ < 3) {
      puVar12 = (undefined8 *)((ulong)&uStack_150 | 4);
      *puStack_a8 = *puStack_108;
      puStack_a8[1] = puStack_108[1];
      uStack_150 = (undefined *)CONCAT44(uStack_150._4_4_,0x42ff0000);
      puVar12[1] = 0;
      *puVar12 = 0;
      puVar12[3] = 0;
      puVar12[2] = 0;
      puVar12[5] = 0;
      puVar12[4] = 0;
      *(undefined8 *)((long)puVar12 + 0x34) = 0;
      *(undefined8 *)((long)puVar12 + 0x2c) = 0;
      if (puStack_108 != auStack_100) {
        _free(puStack_108[-1]);
      }
    }
    else {
      piStack_b0 = piStack_110;
      puStack_a8 = puStack_108;
    }
  }
  puVar11 = (ulong *)(*(ulong *)(param_3 + 0x38) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar11 + 0x17) < '\0') {
    if (puVar11[1] != 0) {
      puVar11 = (ulong *)*puVar11;
      goto LAB_10a6b376c;
    }
  }
  else if (*(char *)((long)puVar11 + 0x17) != '\0') {
LAB_10a6b376c:
    FUN_109ff8058(&puStack_88,puVar11);
    puVar12 = (undefined8 *)0x128;
    __Znwm();
    puVar8 = puStack_88;
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = &PTR_FUN_110c10d38;
    puVar17 = puVar12 + 3;
    *puVar17 = &PTR_FUN_110c0fed8;
    puVar12[4] = 0;
    puStack_88 = (uint *)0x0;
    puVar12[5] = 0;
    plVar19 = puVar12 + 6;
    *(undefined4 *)plVar19 = 0x42ff0000;
    *(undefined8 *)((long)puVar12 + 0x3c) = 0;
    *(undefined8 *)((long)puVar12 + 0x34) = 0;
    *(undefined8 *)((long)puVar12 + 0x4c) = 0;
    *(undefined8 *)((long)puVar12 + 0x44) = 0;
    *(undefined8 *)((long)puVar12 + 0x5c) = 0;
    *(undefined8 *)((long)puVar12 + 0x54) = 0;
    puVar12[0xd] = 0;
    puVar12[0xc] = 0;
    puVar12[0x11] = 0;
    puVar12[0x10] = 0;
    puVar12[0xe] = puVar12 + 7;
    puVar12[0xf] = puVar12 + 0x10;
    puVar12[0x13] = 0;
    puVar12[0x12] = 0;
    puVar12[0x15] = 0;
    puVar12[0x14] = 0;
    puVar12[0x17] = 0;
    puVar12[0x16] = 0;
    puVar12[0x19] = 0;
    puVar12[0x18] = 0;
    puVar12[0x1c] = 0;
    puVar12[0x1b] = 0;
    plVar21 = puVar12 + 0x1a;
    *plVar21 = (long)puVar8;
    puVar12[0x1e] = 0;
    puVar12[0x1d] = 0;
    puVar12[0x20] = 0;
    puVar12[0x1f] = 0;
    puVar12[0x22] = 0;
    puVar12[0x21] = 0;
    puVar12[0x24] = 0;
    puVar12[0x23] = 0;
    uStack_150 = &UNK_10f66cb0e;
    puStack_148 = (uint *)0x31;
    if ((*puVar8 & 0xfff) == 0x10) {
      puStack_148 = puVar8;
      uStack_140 = 0;
      uStack_150 = &UNK_101010000;
      puStack_188 = (undefined *)CONCAT44(puStack_188._4_4_,0x2010000);
      uStack_178 = 0;
      plStack_180 = plVar19;
      func_0x000109ac9fc8(&uStack_150,&puStack_188,4,0);
      FUN_10a6b0588(&uStack_150,param_2,plVar19,0);
      FUN_10a015bec(puVar12 + 0x12,&uStack_150);
      puVar8 = puStack_148;
      if (puStack_148 != (uint *)0x0) {
        puVar2 = puStack_148 + 2;
        do {
          lVar13 = *(long *)puVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *(long *)puVar2 = lVar13 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*(long *)puStack_148 + 0x10))(puStack_148);
          __ZNSt3__119__shared_weak_count14__release_weakEv(puVar8);
        }
      }
      if (CONCAT44(uStack_dc,uStack_e0) != 0) {
        uVar10 = (ulong)uStack_ec;
        if ((int)uStack_ec < 3) {
          lVar13 = (long)iStack_e4 * (long)iStack_e8;
        }
        else {
          lVar13 = 1;
          piVar16 = piStack_b0;
          do {
            lVar13 = lVar13 * *piVar16;
            uVar10 = uVar10 - 1;
            piVar16 = piVar16 + 1;
          } while (uVar10 != 0);
        }
        if (lVar13 != 0) {
          FUN_10a6b0588(&uStack_150,param_2,&uStack_f0,1);
          FUN_10a015bec(puVar12 + 0x14,&uStack_150);
          puVar8 = puStack_148;
          if (puStack_148 != (uint *)0x0) {
            puVar2 = puStack_148 + 2;
            do {
              lVar13 = *(long *)puVar2;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar7) {
                *(long *)puVar2 = lVar13 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*(long *)puStack_148 + 0x10))(puStack_148);
              __ZNSt3__119__shared_weak_count14__release_weakEv(puVar8);
            }
          }
        }
      }
      lVar13 = *plVar21;
      uStack_150 = &UNK_10f66caf4;
      puStack_148 = (uint *)0x19;
      if (*(int *)(lVar13 + 0x68) < 1) {
        FUN_10a0edfc4(&uStack_150);
        goto LAB_10a6b3ed0;
      }
      func_0x0001096b5544(puVar12 + 0x16);
      uVar5 = *(uint *)(lVar13 + 0x68);
      if (0 < (int)uVar5) {
        uVar10 = 0;
        lVar18 = puVar12[0x16];
        lVar4 = puVar12[0x17];
        puVar14 = (undefined4 *)(lVar18 + 4);
        do {
          if (lVar4 - lVar18 >> 3 == uVar10) goto LAB_10a6b3ed0;
          puVar15 = (undefined4 *)(*(long *)(lVar13 + 0x70) + **(long **)(lVar13 + 0xa8) * uVar10);
          puVar14[-1] = *puVar15;
          *puVar14 = puVar15[1];
          uVar10 = uVar10 + 1;
          puVar14 = puVar14 + 2;
        } while (uVar5 != uVar10);
      }
      lVar18 = *plVar21;
      lVar13 = 0x20;
      __Znwm();
      FUN_109ffeb50();
      *(undefined8 *)(lVar13 + 0x18) = *(undefined8 *)(lVar18 + 0xd8);
      uStack_150 = (undefined *)0x0;
      FUN_10a6ca180(puVar12 + 0x19,lVar13);
      FUN_10a6ca180(&uStack_150,0);
      FUN_10a6b09c4(puVar17,param_2);
      puVar8 = puStack_88;
      *param_1 = puVar17;
      param_1[1] = puVar12;
      puStack_88 = (uint *)0x0;
      if (puVar8 != (uint *)0x0) {
        FUN_10a003a8c();
        __ZdlPv();
      }
      goto LAB_10a6b3e08;
    }
    FUN_10a0edfc4(&uStack_150);
    goto LAB_10a6b3ed0;
  }
  FUN_109febe8c(&uStack_150,*(ulong *)(param_3 + 0x20) & 0xfffffffffffffffc);
  puStack_188 = &UNK_10f66da9d;
  plStack_180 = (long *)0x32;
  if (((uint)uStack_150 & 0xfff) == 0x10) {
    puStack_188 = &UNK_101010000;
    plStack_180 = &uStack_150;
    uStack_178 = 0;
    puStack_88 = (uint *)CONCAT44(puStack_88._4_4_,0x2010000);
    uStack_78 = 0;
    plStack_80 = plStack_180;
    func_0x000109ac9fc8(&puStack_188,&puStack_88,4,0);
    FUN_10a05077c(&lStack_168,
                  (long)((ulong)(uint)(*(int *)(param_3 + 0x10) - (*(int *)(param_3 + 0x10) >> 0x1f)
                                      ) << 0x20) >> 0x21);
    if (lStack_160 != lStack_168) {
      lVar13 = 0;
      uVar10 = 0;
      do {
        *(undefined4 *)(lStack_168 + lVar13 * 4) =
             *(undefined4 *)(*(long *)(param_3 + 0x18) + (long)(int)lVar13 * 4);
        if ((ulong)(lStack_160 - lStack_168 >> 3) <= uVar10) goto LAB_10a6b3ed0;
        *(undefined4 *)(lStack_168 + lVar13 * 4 + 4) =
             *(undefined4 *)(*(long *)(param_3 + 0x18) + (long)(int)lVar13 * 4 + 4);
        uVar10 = uVar10 + 1;
        lVar13 = lVar13 + 2;
      } while (uVar10 < (ulong)(lStack_160 - lStack_168 >> 3));
    }
    FUN_109fedee4(&puStack_188,*(ulong *)(param_3 + 0x30) & 0xfffffffffffffffc);
    puVar12 = (undefined8 *)0x128;
    __Znwm();
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = &PTR_FUN_110c10d38;
    puVar20 = puVar12 + 3;
    *puVar20 = &PTR_FUN_110c0fed8;
    puVar12[4] = 0;
    puVar12[5] = 0;
    puVar17 = puVar12 + 6;
    *(undefined4 *)puVar17 = 0x42ff0000;
    *(undefined8 *)((long)puVar12 + 0x3c) = 0;
    *(undefined8 *)((long)puVar12 + 0x34) = 0;
    *(undefined8 *)((long)puVar12 + 0x4c) = 0;
    *(undefined8 *)((long)puVar12 + 0x44) = 0;
    *(undefined8 *)((long)puVar12 + 0x5c) = 0;
    *(undefined8 *)((long)puVar12 + 0x54) = 0;
    puVar12[0xd] = 0;
    puVar12[0xc] = 0;
    puVar12[0x10] = 0;
    puVar12[0xe] = puVar12 + 7;
    puVar12[0xf] = puVar12 + 0x10;
    puVar12[0x11] = 0;
    puStack_88 = (uint *)CONCAT44(puStack_88._4_4_,0x2010000);
    uStack_78 = 0;
    plStack_80 = puVar17;
    func_0x000109a479a0(&uStack_150,&puStack_88);
    puVar12[0x13] = 0;
    puVar12[0x12] = 0;
    puVar12[0x15] = 0;
    puVar12[0x14] = 0;
    puVar12[0x17] = 0;
    puVar12[0x16] = 0;
    puVar12[0x1b] = 0;
    puVar12[0x1a] = 0;
    puVar12[0x24] = 0;
    puVar12[0x21] = 0;
    puVar12[0x20] = 0;
    puVar12[0x23] = 0;
    puVar12[0x22] = 0;
    puVar12[0x1d] = 0;
    puVar12[0x1c] = 0;
    puVar12[0x1f] = 0;
    puVar12[0x1e] = 0;
    puVar12[0x19] = 0;
    puVar12[0x18] = 0;
    puStack_88 = (uint *)&UNK_10f66caf4;
    plStack_80 = (long *)0x19;
    if (lStack_160 != lStack_168) {
      FUN_10a6b0588(&puStack_88,param_2,puVar17,0);
      FUN_10a015bec(puVar12 + 0x12,&puStack_88);
      plVar19 = plStack_80;
      if (plStack_80 != (long *)0x0) {
        plVar21 = plStack_80 + 1;
        do {
          lVar13 = *plVar21;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar7) {
            *plVar21 = lVar13 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_80 + 0x10))(plStack_80);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
        }
      }
      if (CONCAT44(uStack_dc,uStack_e0) != 0) {
        uVar10 = (ulong)uStack_ec;
        if ((int)uStack_ec < 3) {
          lVar13 = (long)iStack_e4 * (long)iStack_e8;
        }
        else {
          lVar13 = 1;
          piVar16 = piStack_b0;
          do {
            lVar13 = lVar13 * *piVar16;
            uVar10 = uVar10 - 1;
            piVar16 = piVar16 + 1;
          } while (uVar10 != 0);
        }
        if (lVar13 != 0) {
          FUN_10a6b0588(&puStack_88,param_2,&uStack_f0,1);
          FUN_10a015bec(puVar12 + 0x14,&puStack_88);
          plVar19 = plStack_80;
          if (plStack_80 != (long *)0x0) {
            plVar21 = plStack_80 + 1;
            do {
              lVar13 = *plVar21;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar7) {
                *plVar21 = lVar13 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plStack_80 + 0x10))(plStack_80);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
            }
          }
        }
      }
      FUN_10a14dca0(puVar12 + 0x16,lStack_168,lStack_160,lStack_160 - lStack_168 >> 3);
      lVar13 = 0x20;
      __Znwm();
      FUN_109ffeb50();
      *(undefined8 *)(lVar13 + 0x18) = uStack_170;
      puStack_88 = (uint *)0x0;
      FUN_10a6ca180(puVar12 + 0x19,lVar13);
      FUN_10a6ca180(&puStack_88,0);
      FUN_10a6b09c4(puVar20,param_2);
      *param_1 = puVar20;
      param_1[1] = puVar12;
      FUN_109fff0a0(&puStack_188,plStack_180);
      if (lStack_168 != 0) {
        lStack_160 = lStack_168;
        __ZdlPv();
      }
      if (lStack_118 != 0) {
        piVar16 = (int *)(lStack_118 + 0x14);
        do {
          iVar3 = *piVar16;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar7) {
            *piVar16 = iVar3 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(&uStack_150);
        }
      }
      lStack_118 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      if (0 < (int)uStack_150._4_4_) {
        lVar13 = 0;
        do {
          piStack_110[lVar13] = 0;
          lVar13 = lVar13 + 1;
        } while (lVar13 < (int)uStack_150._4_4_);
      }
      if (puStack_108 != auStack_100 && puStack_108 != (undefined8 *)0x0) {
        _free(puStack_108[-1]);
      }
LAB_10a6b3e08:
      if (lStack_b8 != 0) {
        piVar16 = (int *)(lStack_b8 + 0x14);
        do {
          iVar3 = *piVar16;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar7) {
            *piVar16 = iVar3 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(&uStack_f0);
        }
      }
      lStack_b8 = 0;
      uStack_d8 = 0;
      uStack_d4 = 0;
      uStack_e0 = 0;
      uStack_dc = 0;
      uStack_c8 = 0;
      uStack_c4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      if (0 < (int)uStack_ec) {
        lVar13 = 0;
        do {
          piStack_b0[lVar13] = 0;
          lVar13 = lVar13 + 1;
        } while (lVar13 < (int)uStack_ec);
      }
      if (puStack_a8 != &uStack_a0 && puStack_a8 != (undefined8 *)0x0) {
        _free(puStack_a8[-1]);
      }
      return;
    }
    FUN_10a0edfc4(&puStack_88);
  }
  else {
    FUN_10a0edfc4(&puStack_188);
  }
LAB_10a6b3ed0:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a6b3ed4);
  (*pcVar9)();
}



/* Entry: 10a6b40c4; end: 10a6b4607;  */

void FUN_10a6b40c4(undefined8 *param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  undefined8 *puVar16;
  undefined8 uStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 auStack_b0 [3];
  undefined8 uStack_98;
  undefined4 uStack_8c;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  FUN_10ab6c000(&uStack_110,param_3);
  lVar14 = *(long *)(param_2 + 0x18);
  puVar7 = (undefined8 *)0x128;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_110c10d38;
  puVar16 = puVar7 + 3;
  *puVar16 = &PTR_FUN_110c0fed8;
  puVar7[4] = 0;
  puVar7[5] = 0;
  *(undefined4 *)(puVar7 + 6) = 0x42ff0000;
  piVar15 = (int *)((long)puVar7 + 0x34);
  *(undefined8 *)((long)puVar7 + 0x3c) = 0;
  piVar15[0] = 0;
  piVar15[1] = 0;
  *(undefined8 *)((long)puVar7 + 0x4c) = 0;
  *(undefined8 *)((long)puVar7 + 0x44) = 0;
  *(undefined8 *)((long)puVar7 + 0x5c) = 0;
  *(undefined8 *)((long)puVar7 + 0x54) = 0;
  puVar7[0xd] = 0;
  puVar7[0xc] = 0;
  puVar9 = puVar7 + 0x10;
  *puVar9 = 0;
  puVar7[0xe] = puVar7 + 7;
  puVar7[0xf] = puVar9;
  puVar7[0x11] = 0;
  puVar7[0x12] = uStack_110;
  puVar7[0x13] = plStack_108;
  if (plStack_108 == (long *)0x0) {
    puVar7[0x14] = uStack_110;
    puVar7[0x15] = 0;
  }
  else {
    plVar1 = plStack_108 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    puVar7[0x14] = uStack_110;
    puVar7[0x15] = plStack_108;
    if (plStack_108 != (long *)0x0) {
      plVar1 = plStack_108 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  puVar7[0x17] = 0;
  puVar7[0x16] = 0;
  puVar7[0x1b] = 0;
  puVar7[0x1a] = 0;
  puVar7[0x24] = 0;
  puVar7[0x21] = 0;
  puVar7[0x20] = 0;
  puVar7[0x23] = 0;
  puVar7[0x22] = 0;
  puVar7[0x1d] = 0;
  puVar7[0x1c] = 0;
  puVar7[0x1f] = 0;
  puVar7[0x1e] = 0;
  puVar7[0x19] = 0;
  puVar7[0x18] = 0;
  if ((ulong)*(byte *)(lVar14 + 0x29) < 6) {
    FUN_10aba1500(&lStack_78,*(undefined8 *)(lVar14 + (ulong)*(byte *)(lVar14 + 0x29) * 8 + 0x30),
                  uStack_110,1);
    FUN_10a1b498c(&uStack_100,1,3);
    uStack_8c = 0;
    uStack_98 = *(undefined8 *)(lStack_78 + 0x10);
    (**(code **)*uStack_100)(&lStack_88,uStack_100,lStack_78,&uStack_8c,&uStack_98);
    plVar1 = plStack_f8;
    if (plStack_f8 != (long *)0x0) {
      plVar2 = plStack_f8 + 1;
      do {
        lVar10 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    lVar10 = 0;
    if (lStack_88 != 0) {
      lVar10 = lStack_88 + 0x10;
    }
    FUN_10a0f3910(&uStack_100,lVar10,0);
    if (puVar7[0xd] != 0) {
      piVar3 = (int *)(puVar7[0xd] + 0x14);
      do {
        iVar8 = *piVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar5) {
          *piVar3 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        func_0x000109a848d4(puVar7 + 6);
      }
    }
    puVar7[0xd] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    if (0 < *(int *)((long)puVar7 + 0x34)) {
      lVar10 = 0;
      lVar11 = puVar7[0xe];
      do {
        *(undefined4 *)(lVar11 + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < *piVar15);
    }
    puVar7[7] = plStack_f8;
    puVar7[6] = uStack_100;
    puVar7[9] = uStack_e8;
    puVar7[8] = uStack_f0;
    puVar7[0xb] = uStack_d8;
    puVar7[10] = uStack_e0;
    puVar7[0xd] = uStack_c8;
    puVar7[0xc] = uStack_d0;
    puVar12 = (undefined8 *)puVar7[0xf];
    iVar8 = uStack_100._4_4_;
    if (puVar12 != puVar9) {
      if (puVar12 != (undefined8 *)0x0) {
        _free(puVar12[-1]);
      }
      puVar7[0xe] = puVar7 + 7;
      puVar7[0xf] = puVar9;
      puVar12 = puVar9;
      iVar8 = uStack_100._4_4_;
    }
    if (iVar8 < 3) {
      puVar9 = (undefined8 *)((ulong)&uStack_100 | 4);
      *puVar12 = *puStack_b8;
      puVar12[1] = puStack_b8[1];
      uStack_100 = (undefined8 *)CONCAT44(uStack_100._4_4_,0x42ff0000);
      puVar9[1] = 0;
      *puVar9 = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      *(undefined8 *)((long)puVar9 + 0x34) = 0;
      *(undefined8 *)((long)puVar9 + 0x2c) = 0;
      if (puStack_b8 != auStack_b0) {
        _free(puStack_b8[-1]);
      }
    }
    else {
      puVar7[0xe] = uStack_c0;
      puVar7[0xf] = puStack_b8;
    }
    uStack_100 = (undefined8 *)&UNK_10f66cb40;
    plStack_f8 = (long *)0x32;
    if (0x9b < *(ulong *)(*param_4 + 8)) {
      func_0x0001096b5544(puVar7 + 0x16,*(ulong *)(*param_4 + 8) >> 1);
      lVar10 = puVar7[0x16];
      if (puVar7[0x17] != lVar10) {
        lVar11 = 0;
        uVar13 = 0;
        do {
          *(undefined4 *)(lVar10 + lVar11) = *(undefined4 *)(*(long *)*param_4 + lVar11);
          if ((ulong)((long)(puVar7[0x17] - puVar7[0x16]) >> 3) <= uVar13) goto LAB_10a6b451c;
          *(undefined4 *)(puVar7[0x16] + lVar11 + 4) =
               *(undefined4 *)(*(long *)*param_4 + lVar11 + 4);
          uVar13 = uVar13 + 1;
          lVar10 = puVar7[0x16];
          lVar11 = lVar11 + 8;
        } while (uVar13 < (ulong)(puVar7[0x17] - lVar10 >> 3));
      }
      FUN_10a6b09c4(puVar16,lVar14);
      if (plStack_80 != (long *)0x0) {
        plVar1 = plStack_80 + 1;
        do {
          lVar14 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_80 + 0x10))(plStack_80);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
        }
      }
      if (plStack_70 != (long *)0x0) {
        plVar1 = plStack_70 + 1;
        do {
          lVar14 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_70 + 0x10))(plStack_70);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
        }
      }
      *param_1 = puVar16;
      param_1[1] = puVar7;
      if (plStack_108 == (long *)0x0) {
        return;
      }
      plVar1 = plStack_108 + 1;
      do {
        lVar14 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 != 0) {
        return;
      }
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_108);
      return;
    }
    FUN_10a0edfc4(&uStack_100);
  }
LAB_10a6b451c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a6b4520);
  (*pcVar6)();
}



/* Entry: 10a6b4608; end: 10a6b48f3;  */

void FUN_10a6b4608(long *param_1,long **param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *****pppppcVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plStack_478;
  long *plStack_470;
  long *plStack_468;
  long *plStack_460;
  long lStack_458;
  undefined8 uStack_450;
  long alStack_448 [7];
  undefined8 uStack_410;
  code ****ppppcStack_408;
  undefined **ppuStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c8;
  undefined8 uStack_3c0;
  undefined1 auStack_3b8 [56];
  undefined8 uStack_380;
  long lStack_378;
  long *plStack_308;
  long *plStack_300;
  long lStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  long *plStack_2c8;
  undefined8 uStack_2c0;
  long alStack_2b8 [7];
  undefined8 uStack_280;
  code *pcStack_278;
  undefined **ppuStack_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long *plStack_238;
  long *plStack_230;
  undefined1 auStack_228 [56];
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_178;
  long *plStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  long *plStack_148;
  long *plStack_138;
  undefined8 uStack_130;
  long alStack_128 [7];
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_a8;
  long *plStack_a0;
  undefined1 auStack_98 [56];
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = (long *)param_1[4];
  lVar7 = *(long *)(*plVar8 + 0x940);
  if (lVar7 != 0) {
    plStack_148 = param_2[1];
    plStack_150 = *param_2;
    if (param_2[1] != (long *)0x0) {
      plVar6 = param_2[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a6c5690(&lStack_168,plVar8[1],&plStack_150);
    FUN_10a3bf120(&plStack_138);
    plVar6 = (long *)0x138;
    __Znwm();
    plStack_a8 = plStack_138;
    plVar9 = plVar6 + 1;
    *plVar9 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110b9f3b0;
    plVar8 = plVar6 + 3;
    plStack_138 = (long *)0x0;
    plStack_a0 = (long *)uStack_130;
    (**(code **)(alStack_128[0] + 0x10))(auStack_98,alStack_128);
    uStack_60 = uStack_f0;
    pcStack_e8 = FUN_10a6c5884;
    ppuStack_e0 = &PTR_FUN_110c10d90;
    lStack_d8 = lStack_168;
    uStack_c8 = uStack_158;
    uStack_d0 = uStack_160;
    uStack_160 = 0;
    uStack_158 = 0;
    FUN_10a23708c(plVar8,&UNK_10e4d3ee2,0x26,&UNK_10f647b45,3,&plStack_a8,0);
    (*(code *)*ppuStack_e0)(&ppuStack_e0);
    FUN_10a042634(&plStack_a8);
    plStack_178 = plVar8;
    plStack_170 = plVar6;
    FUN_10a042634(&plStack_138);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    param_2 = &plStack_a8;
    plStack_a8 = plVar8;
    plStack_a0 = plVar6;
    FUN_10a25f3f4(lVar7);
    do {
      lVar7 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
    plVar8 = plStack_170;
    if (plStack_170 != (long *)0x0) {
      plVar6 = plStack_170 + 1;
      do {
        lVar7 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_170 + 0x10))(plStack_170);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    param_1 = &lStack_168;
    FUN_10a6c5adc();
    plVar8 = plStack_148;
    if (plStack_148 != (long *)0x0) {
      plVar6 = plStack_148 + 1;
      do {
        lVar7 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_148 + 0x10))(plStack_148);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = plVar8;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a05bd88(&plStack_a8);
  FUN_10a05bd88(&plStack_178);
  FUN_10a6c5adc(&lStack_168);
  FUN_10a352ff8(&plStack_150);
  __Unwind_Resume();
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = (long *)param_1[4];
  lVar7 = *(long *)(*plVar8 + 0x940);
  if (lVar7 != 0) {
    plStack_2d8 = param_2[1];
    plStack_2e0 = *param_2;
    if (param_2[1] != (long *)0x0) {
      plVar6 = param_2[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a6c640c(&lStack_2f8,plVar8[1],&plStack_2e0);
    FUN_10a3bf120(&plStack_2c8);
    plVar6 = (long *)0x138;
    __Znwm();
    plStack_238 = plStack_2c8;
    plVar9 = plVar6 + 1;
    *plVar9 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110b9f3b0;
    plVar8 = plVar6 + 3;
    plStack_2c8 = (long *)0x0;
    plStack_230 = (long *)uStack_2c0;
    (**(code **)(alStack_2b8[0] + 0x10))(auStack_228,alStack_2b8);
    uStack_1f0 = uStack_280;
    pcStack_278 = FUN_10a6c6600;
    ppuStack_270 = &PTR_FUN_110c10e08;
    lStack_268 = lStack_2f8;
    uStack_258 = uStack_2e8;
    uStack_260 = uStack_2f0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    FUN_10a23708c(plVar8,&UNK_10e4d3f32,0x26,&UNK_10f647b45,3,&plStack_238,0);
    (*(code *)*ppuStack_270)(&ppuStack_270);
    FUN_10a042634(&plStack_238);
    plStack_308 = plVar8;
    plStack_300 = plVar6;
    FUN_10a042634(&plStack_2c8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    param_2 = &plStack_238;
    plStack_238 = plVar8;
    plStack_230 = plVar6;
    FUN_10a25f3f4(lVar7);
    do {
      lVar7 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
    plVar8 = plStack_300;
    if (plStack_300 != (long *)0x0) {
      plVar6 = plStack_300 + 1;
      do {
        lVar7 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_300 + 0x10))(plStack_300);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    param_1 = &lStack_2f8;
    FUN_10a6c6858();
    plVar8 = plStack_2d8;
    if (plStack_2d8 != (long *)0x0) {
      plVar6 = plStack_2d8 + 1;
      do {
        lVar7 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = plVar8;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a05bd88(&plStack_238);
  FUN_10a05bd88(&plStack_308);
  FUN_10a6c6858(&lStack_2f8);
  FUN_10a352ff8(&plStack_2e0);
  __Unwind_Resume();
  lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *(long *)(*param_1 + 0x940);
  if (lVar7 != 0) {
    FUN_10a3bf120(&lStack_458);
    if (param_2 != (long **)0x0) {
      FUN_10a6c8450(&ppppcStack_408,*param_1,param_2);
      pppppcVar4 = (code *****)ppppcStack_408;
      if (-1 < (long)uStack_3f8) {
        ppuStack_400 = (undefined **)(uStack_3f8 >> 0x38);
        pppppcVar4 = &ppppcStack_408;
      }
      FUN_10a3bf330(&lStack_3c8,pppppcVar4,ppuStack_400);
      uStack_410 = uStack_380;
      FUN_10a0425b4(&lStack_458,&lStack_3c8);
      FUN_10a042634(&lStack_3c8);
      if (uStack_3f8._7_1_ < '\0') {
        __ZdlPv(ppppcStack_408);
      }
    }
    lVar10 = *(long *)(*param_1 + 0x100);
    plVar6 = (long *)0x138;
    __Znwm();
    lStack_3c8 = lStack_458;
    plVar9 = plVar6 + 1;
    *plVar9 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110b9f3b0;
    plVar8 = plVar6 + 3;
    lStack_458 = 0;
    uStack_3c0 = uStack_450;
    (**(code **)(alStack_448[0] + 0x10))(auStack_3b8,alStack_448);
    uStack_380 = uStack_410;
    uVar1 = *(ulong *)(lVar10 + 0x210);
    lVar5 = *(long *)(lVar10 + 0x208);
    if (-1 < (char)*(byte *)(lVar10 + 0x21f)) {
      uVar1 = (ulong)*(byte *)(lVar10 + 0x21f);
      lVar5 = lVar10 + 0x208;
    }
    uStack_3d0 = 0;
    uStack_3d8 = 0;
    uStack_3e0 = 0;
    uStack_3e8 = 0;
    uStack_3f0 = 0;
    uStack_3f8 = 0;
    ppppcStack_408 = (code ****)FUN_10a282dc4;
    ppuStack_400 = &PTR_DAT_110ae9180;
    FUN_10a6ac5b4(plVar8,&UNK_10e4d3fca,0x2a,&UNK_10f647b49,4,&lStack_3c8,lVar5,uVar1,
                  &ppppcStack_408);
    (*(code *)*ppuStack_400)(&ppuStack_400);
    FUN_10a042634(&lStack_3c8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_478 = plVar8;
    plStack_470 = plVar6;
    plStack_468 = plVar8;
    plStack_460 = plVar6;
    FUN_10a25f3f4(lVar7,&plStack_478);
    do {
      lVar7 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
    plVar8 = plStack_460;
    if (plStack_460 != (long *)0x0) {
      plVar6 = plStack_460 + 1;
      do {
        lVar7 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_460 + 0x10))(plStack_460);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    param_1 = &lStack_458;
    FUN_10a042634(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_378) {
    ___stack_chk_fail();
    if ((long)uStack_3f8 < 0) {
      __ZdlPv(ppppcStack_408);
    }
    FUN_10a042634(&lStack_458);
    do {
      __Unwind_Resume(param_1);
    } while( true );
  }
  return;
}



/* Entry: 10a6b48f4; end: 10a6b4bdf;  */

void FUN_10a6b48f4(long *param_1,long **param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *****pppppcVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  long *plStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  long alStack_2b8 [7];
  undefined8 uStack_280;
  code ****ppppcStack_278;
  undefined **ppuStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined1 auStack_228 [56];
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_178;
  long *plStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  long *plStack_148;
  long *plStack_138;
  undefined8 uStack_130;
  long alStack_128 [7];
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_a8;
  long *plStack_a0;
  undefined1 auStack_98 [56];
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = (long *)param_1[4];
  lVar7 = *(long *)(*plVar8 + 0x940);
  if (lVar7 != 0) {
    plStack_148 = param_2[1];
    plStack_150 = *param_2;
    if (param_2[1] != (long *)0x0) {
      plVar6 = param_2[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a6c640c(&lStack_168,plVar8[1],&plStack_150);
    FUN_10a3bf120(&plStack_138);
    plVar6 = (long *)0x138;
    __Znwm();
    plStack_a8 = plStack_138;
    plVar9 = plVar6 + 1;
    *plVar9 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110b9f3b0;
    plVar8 = plVar6 + 3;
    plStack_138 = (long *)0x0;
    plStack_a0 = (long *)uStack_130;
    (**(code **)(alStack_128[0] + 0x10))(auStack_98,alStack_128);
    uStack_60 = uStack_f0;
    pcStack_e8 = FUN_10a6c6600;
    ppuStack_e0 = &PTR_FUN_110c10e08;
    lStack_d8 = lStack_168;
    uStack_c8 = uStack_158;
    uStack_d0 = uStack_160;
    uStack_160 = 0;
    uStack_158 = 0;
    FUN_10a23708c(plVar8,&UNK_10e4d3f32,0x26,&UNK_10f647b45,3,&plStack_a8,0);
    (*(code *)*ppuStack_e0)(&ppuStack_e0);
    FUN_10a042634(&plStack_a8);
    plStack_178 = plVar8;
    plStack_170 = plVar6;
    FUN_10a042634(&plStack_138);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    param_2 = &plStack_a8;
    plStack_a8 = plVar8;
    plStack_a0 = plVar6;
    FUN_10a25f3f4(lVar7);
    do {
      lVar7 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
    plVar8 = plStack_170;
    if (plStack_170 != (long *)0x0) {
      plVar6 = plStack_170 + 1;
      do {
        lVar7 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_170 + 0x10))(plStack_170);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    param_1 = &lStack_168;
    FUN_10a6c6858();
    plVar8 = plStack_148;
    if (plStack_148 != (long *)0x0) {
      plVar6 = plStack_148 + 1;
      do {
        lVar7 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_148 + 0x10))(plStack_148);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = plVar8;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a05bd88(&plStack_a8);
  FUN_10a05bd88(&plStack_178);
  FUN_10a6c6858(&lStack_168);
  FUN_10a352ff8(&plStack_150);
  __Unwind_Resume();
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *(long *)(*param_1 + 0x940);
  if (lVar7 != 0) {
    FUN_10a3bf120(&lStack_2c8);
    if (param_2 != (long **)0x0) {
      FUN_10a6c8450(&ppppcStack_278,*param_1,param_2);
      pppppcVar4 = (code *****)ppppcStack_278;
      if (-1 < (long)uStack_268) {
        ppuStack_270 = (undefined **)(uStack_268 >> 0x38);
        pppppcVar4 = &ppppcStack_278;
      }
      FUN_10a3bf330(&lStack_238,pppppcVar4,ppuStack_270);
      uStack_280 = uStack_1f0;
      FUN_10a0425b4(&lStack_2c8,&lStack_238);
      FUN_10a042634(&lStack_238);
      if (uStack_268._7_1_ < '\0') {
        __ZdlPv(ppppcStack_278);
      }
    }
    lVar10 = *(long *)(*param_1 + 0x100);
    plVar6 = (long *)0x138;
    __Znwm();
    lStack_238 = lStack_2c8;
    plVar9 = plVar6 + 1;
    *plVar9 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110b9f3b0;
    plVar8 = plVar6 + 3;
    lStack_2c8 = 0;
    uStack_230 = uStack_2c0;
    (**(code **)(alStack_2b8[0] + 0x10))(auStack_228,alStack_2b8);
    uStack_1f0 = uStack_280;
    uVar1 = *(ulong *)(lVar10 + 0x210);
    lVar5 = *(long *)(lVar10 + 0x208);
    if (-1 < (char)*(byte *)(lVar10 + 0x21f)) {
      uVar1 = (ulong)*(byte *)(lVar10 + 0x21f);
      lVar5 = lVar10 + 0x208;
    }
    uStack_240 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_268 = 0;
    ppppcStack_278 = (code ****)FUN_10a282dc4;
    ppuStack_270 = &PTR_DAT_110ae9180;
    FUN_10a6ac5b4(plVar8,&UNK_10e4d3fca,0x2a,&UNK_10f647b49,4,&lStack_238,lVar5,uVar1,
                  &ppppcStack_278);
    (*(code *)*ppuStack_270)(&ppuStack_270);
    FUN_10a042634(&lStack_238);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_2e8 = plVar8;
    plStack_2e0 = plVar6;
    plStack_2d8 = plVar8;
    plStack_2d0 = plVar6;
    FUN_10a25f3f4(lVar7,&plStack_2e8);
    do {
      lVar7 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
    plVar8 = plStack_2d0;
    if (plStack_2d0 != (long *)0x0) {
      plVar6 = plStack_2d0 + 1;
      do {
        lVar7 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_2d0 + 0x10))(plStack_2d0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    param_1 = &lStack_2c8;
    FUN_10a042634(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1e8) {
    ___stack_chk_fail();
    if ((long)uStack_268 < 0) {
      __ZdlPv(ppppcStack_278);
    }
    FUN_10a042634(&lStack_2c8);
    do {
      __Unwind_Resume(param_1);
    } while( true );
  }
  return;
}



/* Entry: 10a6b4be0; end: 10a6b4eb3;  */

void FUN_10a6b4be0(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  code ***pppcVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long alStack_128 [7];
  undefined8 uStack_f0;
  code **ppcStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [56];
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(*param_1 + 0x940);
  if (lVar8 != 0) {
    FUN_10a3bf120(&lStack_138);
    if (param_2 != 0) {
      FUN_10a6c8450(&ppcStack_e8,*param_1,param_2);
      pppcVar5 = (code ***)ppcStack_e8;
      if (-1 < (long)uStack_d8) {
        ppuStack_e0 = (undefined **)(uStack_d8 >> 0x38);
        pppcVar5 = &ppcStack_e8;
      }
      FUN_10a3bf330(&lStack_a8,pppcVar5,ppuStack_e0);
      uStack_f0 = uStack_60;
      FUN_10a0425b4(&lStack_138,&lStack_a8);
      FUN_10a042634(&lStack_a8);
      if (uStack_d8._7_1_ < '\0') {
        __ZdlPv(ppcStack_e8);
      }
    }
    lVar10 = *(long *)(*param_1 + 0x100);
    plVar7 = (long *)0x138;
    __Znwm();
    lStack_a8 = lStack_138;
    plVar9 = plVar7 + 1;
    *plVar9 = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&PTR_FUN_110b9f3b0;
    plVar1 = plVar7 + 3;
    lStack_138 = 0;
    uStack_a0 = uStack_130;
    (**(code **)(alStack_128[0] + 0x10))(auStack_98,alStack_128);
    uStack_60 = uStack_f0;
    uVar2 = *(ulong *)(lVar10 + 0x210);
    lVar6 = *(long *)(lVar10 + 0x208);
    if (-1 < (char)*(byte *)(lVar10 + 0x21f)) {
      uVar2 = (ulong)*(byte *)(lVar10 + 0x21f);
      lVar6 = lVar10 + 0x208;
    }
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    ppcStack_e8 = (code **)FUN_10a282dc4;
    ppuStack_e0 = &PTR_DAT_110ae9180;
    FUN_10a6ac5b4(plVar1,&UNK_10e4d3fca,0x2a,&UNK_10f647b49,4,&lStack_a8,lVar6,uVar2,&ppcStack_e8);
    (*(code *)*ppuStack_e0)(&ppuStack_e0);
    FUN_10a042634(&lStack_a8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plStack_158 = plVar1;
    plStack_150 = plVar7;
    plStack_148 = plVar1;
    plStack_140 = plVar7;
    FUN_10a25f3f4(lVar8,&plStack_158);
    do {
      lVar8 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
    plVar1 = plStack_140;
    if (plStack_140 != (long *)0x0) {
      plVar7 = plStack_140 + 1;
      do {
        lVar8 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_140 + 0x10))(plStack_140);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    param_1 = &lStack_138;
    FUN_10a042634(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if ((long)uStack_d8 < 0) {
      __ZdlPv(ppcStack_e8);
    }
    FUN_10a042634(&lStack_138);
    do {
      __Unwind_Resume(param_1);
    } while( true );
  }
  return;
}



/* Entry: 10a6b4eb4; end: 10a6b519f;  */

void FUN_10a6b4eb4(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined8 *extraout_x8;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 ***pppuStack_7b8;
  long lStack_7b0;
  char cStack_7a1;
  undefined8 ***pppuStack_7a0;
  long lStack_798;
  long lStack_790;
  undefined8 *puStack_788;
  undefined8 *puStack_780;
  undefined8 *puStack_778;
  undefined8 *puStack_770;
  undefined8 *puStack_768;
  undefined1 **ppuStack_760;
  code *pcStack_758;
  undefined8 uStack_748;
  long lStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  long lStack_710;
  long lStack_708;
  long *plStack_700;
  long alStack_6f8 [2];
  undefined1 auStack_6e8 [4];
  int iStack_6e4;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  long lStack_6b0;
  long lStack_6a8;
  undefined1 *puStack_6a0;
  undefined1 auStack_698 [16];
  undefined4 auStack_688 [2];
  undefined1 *puStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  long lStack_638;
  long lStack_630;
  undefined1 *puStack_628;
  undefined1 auStack_620 [16];
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 *puStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  long lStack_5b8;
  long lStack_5b0;
  undefined8 *puStack_5a8;
  undefined8 auStack_5a0 [2];
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  long lStack_558;
  long lStack_550;
  undefined8 *puStack_548;
  undefined8 auStack_540 [2];
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  long lStack_4f8;
  long lStack_4f0;
  undefined8 *puStack_4e8;
  undefined8 auStack_4e0 [2];
  undefined1 auStack_4d0 [4];
  int iStack_4cc;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  long lStack_498;
  long lStack_490;
  undefined8 *puStack_488;
  undefined8 auStack_480 [3];
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  long lStack_418;
  undefined4 *puStack_410;
  undefined8 *puStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  ulong uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  undefined8 *puStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  ulong uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  long lStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  ulong uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  ulong uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long lStack_230;
  undefined8 *puStack_228;
  undefined8 auStack_220 [2];
  undefined8 *puStack_210;
  long lStack_208;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  long lStack_190;
  ulong uStack_188;
  code **ppcStack_180;
  long *plStack_178;
  long *plStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long *plStack_148;
  long *plStack_138;
  undefined8 uStack_130;
  long alStack_128 [7];
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_a8;
  long *plStack_a0;
  undefined1 auStack_98 [56];
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = (long *)param_1[4];
  lVar13 = *(long *)(*plVar14 + 0x940);
  if (lVar13 != 0) {
    plStack_148 = (long *)param_2[1];
    uStack_150 = *param_2;
    if (param_2[1] != 0) {
      plVar6 = (long *)(param_2[1] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a6c85d8(&lStack_168,plVar14[1],&uStack_150);
    FUN_10a3bf120(&plStack_138);
    lVar17 = *(long *)(*plVar14 + 0x100);
    plVar6 = (long *)0x138;
    __Znwm();
    plStack_a8 = plStack_138;
    plVar16 = plVar6 + 1;
    *plVar16 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110b9f3b0;
    plVar14 = plVar6 + 3;
    plStack_138 = (long *)0x0;
    plStack_a0 = (long *)uStack_130;
    (**(code **)(alStack_128[0] + 0x10))(auStack_98,alStack_128);
    uStack_60 = uStack_f0;
    uStack_188 = *(ulong *)(lVar17 + 0x210);
    lStack_190 = *(long *)(lVar17 + 0x208);
    if (-1 < (char)*(byte *)(lVar17 + 0x21f)) {
      uStack_188 = (ulong)*(byte *)(lVar17 + 0x21f);
      lStack_190 = lVar17 + 0x208;
    }
    ppcStack_180 = &pcStack_e8;
    pcStack_e8 = FUN_10a6c87cc;
    ppuStack_e0 = &PTR_FUN_110c10ef8;
    lStack_d8 = lStack_168;
    uStack_c8 = uStack_158;
    uStack_d0 = uStack_160;
    uStack_160 = 0;
    uStack_158 = 0;
    FUN_10a23708c(plVar14,&UNK_10e4d3ff5,0x2c,&UNK_10f647b45,3,&plStack_a8,0);
    (*(code *)*ppuStack_e0)(&ppuStack_e0);
    FUN_10a042634(&plStack_a8);
    plStack_178 = plVar14;
    plStack_170 = plVar6;
    FUN_10a042634(&plStack_138);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *plVar16 = *plVar16 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plStack_a8 = plVar14;
    plStack_a0 = plVar6;
    FUN_10a25f3f4(lVar13,&plStack_a8);
    do {
      lVar13 = *plVar16;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *plVar16 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
    plVar14 = plStack_170;
    if (plStack_170 != (long *)0x0) {
      plVar6 = plStack_170 + 1;
      do {
        lVar13 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_170 + 0x10))(plStack_170);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      }
    }
    param_1 = &lStack_168;
    FUN_10a6c8a1c();
    plVar14 = plStack_148;
    if (plStack_148 != (long *)0x0) {
      plVar6 = plStack_148 + 1;
      do {
        lVar13 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_148 + 0x10))(plStack_148);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = plVar14;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a05bd88(&plStack_a8);
  FUN_10a05bd88(&plStack_178);
  FUN_10a6c8a1c(&lStack_168);
  FUN_10a352ff8(&uStack_150);
  __Unwind_Resume();
  puStack_1a0 = &stack0xfffffffffffffff0;
  pcStack_198 = FUN_10a6b51a0;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = param_1[3];
  FUN_10a6b6384(&uStack_748);
  uStack_460 = 0;
  uStack_468 = 0;
  uStack_458 = 0;
  uStack_530 = 0x8000000080;
  func_0x000109a829e8(&uStack_450,&uStack_530,0);
  FUN_10a003124(auStack_4d0,&uStack_450);
  func_0x00010918eb6c(&uStack_450);
  uStack_590 = 0x1100000000;
  uStack_270 = 0x7fffffff80000000;
  func_0x000109a84930(&uStack_530,&uStack_748,&uStack_590,&uStack_270);
  uStack_444 = 0;
  uStack_440 = 0;
  uStack_450._4_4_ = 0;
  uStack_448 = 0;
  uStack_434 = 0;
  uStack_430 = 0;
  uStack_43c = 0;
  uStack_438 = 0;
  puStack_410 = &uStack_448;
  uStack_424 = 0;
  uStack_42c = 0;
  uStack_428 = 0;
  lStack_418 = 0;
  uStack_420 = 0;
  uStack_41c = 0;
  uStack_3f8 = 0;
  uStack_400 = 0;
  uStack_450._0_4_ = 0x42ff0005;
  puStack_408 = &uStack_400;
  func_0x000109390e94(&uStack_450,&uStack_530);
  FUN_10a6c0250(auStack_4d0,&uStack_450,3);
  if (lStack_418 != 0) {
    piVar1 = (int *)(lStack_418 + 0x14);
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
      func_0x000109a848d4(&uStack_450);
    }
  }
  lStack_418 = 0;
  uStack_438 = 0;
  uStack_434 = 0;
  uStack_440 = 0;
  uStack_43c = 0;
  uStack_428 = 0;
  uStack_424 = 0;
  uStack_430 = 0;
  uStack_42c = 0;
  if (0 < uStack_450._4_4_) {
    lVar17 = 0;
    do {
      puStack_410[lVar17] = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < uStack_450._4_4_);
  }
  if (puStack_408 != &uStack_400 && puStack_408 != (undefined8 *)0x0) {
    _free(puStack_408[-1]);
  }
  if (lStack_4f8 != 0) {
    piVar1 = (int *)(lStack_4f8 + 0x14);
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
      func_0x000109a848d4(&uStack_530);
    }
  }
  lStack_4f8 = 0;
  uStack_518 = 0;
  uStack_520 = 0;
  uStack_508 = 0;
  uStack_510 = 0;
  if (0 < uStack_530._4_4_) {
    lVar17 = 0;
    do {
      *(undefined4 *)(lStack_4f0 + lVar17 * 4) = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < uStack_530._4_4_);
  }
  if (puStack_4e8 != auStack_4e0 && puStack_4e8 != (undefined8 *)0x0) {
    _free(puStack_4e8[-1]);
  }
  uStack_590 = 0x8000000080;
  func_0x000109a829e8(&uStack_450,&uStack_590,0);
  FUN_10a003124(&uStack_530,&uStack_450);
  func_0x00010918eb6c(&uStack_450);
  uStack_270 = 0x2a00000024;
  uStack_5f0 = 0x7fffffff80000000;
  func_0x000109a84930(&uStack_590,&uStack_748,&uStack_270,&uStack_5f0);
  uStack_444 = 0;
  uStack_440 = 0;
  uStack_450._4_4_ = 0;
  uStack_448 = 0;
  puStack_410 = &uStack_448;
  uStack_434 = 0;
  uStack_430 = 0;
  uStack_43c = 0;
  uStack_438 = 0;
  uStack_424 = 0;
  uStack_42c = 0;
  uStack_428 = 0;
  lStack_418 = 0;
  uStack_420 = 0;
  uStack_41c = 0;
  uStack_3f8 = 0;
  uStack_400 = 0;
  uStack_450._0_4_ = 0x42ff0005;
  puStack_408 = &uStack_400;
  func_0x000109390e94(&uStack_450,&uStack_590);
  FUN_10a6c02f0(&uStack_530,&uStack_450);
  if (lStack_418 != 0) {
    piVar1 = (int *)(lStack_418 + 0x14);
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
      func_0x000109a848d4(&uStack_450);
    }
  }
  lStack_418 = 0;
  uStack_438 = 0;
  uStack_434 = 0;
  uStack_440 = 0;
  uStack_43c = 0;
  uStack_428 = 0;
  uStack_424 = 0;
  uStack_430 = 0;
  uStack_42c = 0;
  if (0 < uStack_450._4_4_) {
    lVar17 = 0;
    do {
      puStack_410[lVar17] = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < uStack_450._4_4_);
  }
  if (puStack_408 != &uStack_400 && puStack_408 != (undefined8 *)0x0) {
    _free(puStack_408[-1]);
  }
  if (lStack_558 != 0) {
    piVar1 = (int *)(lStack_558 + 0x14);
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
      func_0x000109a848d4(&uStack_590);
    }
  }
  lStack_558 = 0;
  uStack_578 = 0;
  uStack_580 = 0;
  uStack_568 = 0;
  uStack_570 = 0;
  if (0 < uStack_590._4_4_) {
    lVar17 = 0;
    do {
      *(undefined4 *)(lStack_550 + lVar17 * 4) = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < uStack_590._4_4_);
  }
  if (puStack_548 != auStack_540 && puStack_548 != (undefined8 *)0x0) {
    _free(puStack_548[-1]);
  }
  uStack_270 = 0x300000002a;
  uStack_5f0 = 0x7fffffff80000000;
  func_0x000109a84930(&uStack_590,&uStack_748,&uStack_270,&uStack_5f0);
  uStack_444 = 0;
  uStack_440 = 0;
  uStack_450._4_4_ = 0;
  uStack_448 = 0;
  puStack_410 = &uStack_448;
  uStack_434 = 0;
  uStack_430 = 0;
  uStack_43c = 0;
  uStack_438 = 0;
  uStack_424 = 0;
  uStack_42c = 0;
  uStack_428 = 0;
  lStack_418 = 0;
  uStack_420 = 0;
  uStack_41c = 0;
  uStack_3f8 = 0;
  uStack_400 = 0;
  uStack_450._0_4_ = 0x42ff0005;
  puStack_408 = &uStack_400;
  func_0x000109390e94(&uStack_450,&uStack_590);
  FUN_10a6c02f0(&uStack_530,&uStack_450);
  if (lStack_418 != 0) {
    piVar1 = (int *)(lStack_418 + 0x14);
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
      func_0x000109a848d4(&uStack_450);
    }
  }
  lStack_418 = 0;
  uStack_438 = 0;
  uStack_434 = 0;
  uStack_440 = 0;
  uStack_43c = 0;
  uStack_428 = 0;
  uStack_424 = 0;
  uStack_430 = 0;
  uStack_42c = 0;
  if (0 < uStack_450._4_4_) {
    lVar17 = 0;
    do {
      puStack_410[lVar17] = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < uStack_450._4_4_);
  }
  if (puStack_408 != &uStack_400 && puStack_408 != (undefined8 *)0x0) {
    _free(puStack_408[-1]);
  }
  if (lStack_558 != 0) {
    piVar1 = (int *)(lStack_558 + 0x14);
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
      func_0x000109a848d4(&uStack_590);
    }
  }
  lStack_558 = 0;
  uStack_578 = 0;
  uStack_580 = 0;
  uStack_568 = 0;
  uStack_570 = 0;
  if (0 < uStack_590._4_4_) {
    lVar17 = 0;
    do {
      *(undefined4 *)(lStack_550 + lVar17 * 4) = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < uStack_590._4_4_);
  }
  if (puStack_548 != auStack_540 && puStack_548 != (undefined8 *)0x0) {
    _free(puStack_548[-1]);
  }
  uStack_270 = 0x8000000080;
  func_0x000109a829e8(&uStack_450,&uStack_270,0);
  FUN_10a003124(&uStack_590,&uStack_450);
  func_0x00010918eb6c(&uStack_450);
  uStack_268 = 0x1e0000001d;
  uStack_270 = 0x1c0000001b;
  uStack_260 = CONCAT44(uStack_260._4_4_,0x21);
  uStack_440 = 0;
  uStack_43c = 0;
  uStack_450._0_4_ = 0;
  uStack_450._4_4_ = 0;
  uStack_448 = 0;
  uStack_444 = 0;
  FUN_10a14d944(&uStack_450,&uStack_270,(long)&uStack_260 + 4,5);
  FUN_10a6c04d8(&uStack_590,&uStack_748,3,CONCAT44(uStack_450._4_4_,(undefined4)uStack_450),
                CONCAT44(uStack_444,uStack_448));
  if (CONCAT44(uStack_450._4_4_,(undefined4)uStack_450) != 0) {
    uStack_448 = (undefined4)uStack_450;
    uStack_444 = uStack_450._4_4_;
    __ZdlPv();
  }
  uStack_5f0 = 0x8000000080;
  func_0x000109a829e8(&uStack_450,&uStack_5f0,0);
  FUN_10a003124(&uStack_270,&uStack_450);
  func_0x00010918eb6c(&uStack_450);
  uStack_608 = 0x440000003c;
  puStack_210 = (undefined8 *)0x7fffffff80000000;
  func_0x000109a84930(&uStack_5f0,&uStack_748,&uStack_608,&puStack_210);
  uStack_444 = 0;
  uStack_440 = 0;
  uStack_450._4_4_ = 0;
  uStack_448 = 0;
  puStack_410 = &uStack_448;
  uStack_434 = 0;
  uStack_430 = 0;
  uStack_43c = 0;
  uStack_438 = 0;
  uStack_424 = 0;
  uStack_42c = 0;
  uStack_428 = 0;
  lStack_418 = 0;
  uStack_420 = 0;
  uStack_41c = 0;
  uStack_3f8 = 0;
  uStack_400 = 0;
  uStack_450._0_4_ = 0x42ff0005;
  puStack_408 = &uStack_400;
  func_0x000109390e94(&uStack_450,&uStack_5f0);
  FUN_10a6c02f0(&uStack_270,&uStack_450);
  if (lStack_418 != 0) {
    piVar1 = (int *)(lStack_418 + 0x14);
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
      func_0x000109a848d4(&uStack_450);
    }
  }
  lStack_418 = 0;
  uStack_438 = 0;
  uStack_434 = 0;
  uStack_440 = 0;
  uStack_43c = 0;
  uStack_428 = 0;
  uStack_424 = 0;
  uStack_430 = 0;
  uStack_42c = 0;
  if (0 < uStack_450._4_4_) {
    lVar17 = 0;
    do {
      puStack_410[lVar17] = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < uStack_450._4_4_);
  }
  if (puStack_408 != &uStack_400 && puStack_408 != (undefined8 *)0x0) {
    _free(puStack_408[-1]);
  }
  if (lStack_5b8 != 0) {
    piVar1 = (int *)(lStack_5b8 + 0x14);
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
      func_0x000109a848d4(&uStack_5f0);
    }
  }
  lStack_5b8 = 0;
  uStack_5d8 = 0;
  uStack_5e0 = 0;
  uStack_5c8 = 0;
  uStack_5d0 = 0;
  if (0 < uStack_5f0._4_4_) {
    lVar17 = 0;
    do {
      *(undefined4 *)(lStack_5b0 + lVar17 * 4) = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < uStack_5f0._4_4_);
  }
  if (puStack_5a8 != auStack_5a0 && puStack_5a8 != (undefined8 *)0x0) {
    _free(puStack_5a8[-1]);
  }
  uStack_608 = 0x8000000080;
  func_0x000109a829e8(&uStack_450,&uStack_608,0);
  FUN_10a003124(&uStack_5f0,&uStack_450);
  func_0x00010918eb6c(&uStack_450);
  lVar17 = 0;
  puStack_210 = (undefined8 *)0x1800000013;
  do {
    uStack_608 = CONCAT44(uStack_608._4_4_,0x83010000);
    uStack_5f8 = 0;
    uVar18 = *(undefined8 *)
              (lStack_738 + *plStack_700 * (long)*(int *)((long)&puStack_210 + lVar17));
    uStack_610 = CONCAT44((int)(float)((ulong)uVar18 >> 0x20),(int)(float)uVar18);
    uStack_450._0_4_ = 0;
    uStack_450._4_4_ = 0x406fe000;
    uStack_440 = 0;
    uStack_43c = 0;
    uStack_438 = 0;
    uStack_434 = 0;
    uStack_448 = 0;
    uStack_444 = 0;
    puStack_600 = &uStack_5f0;
    func_0x000109aee350(&uStack_608,&uStack_610,3,&uStack_450,0xffffffff,8,0);
    lVar17 = lVar17 + 4;
  } while (lVar17 != 8);
  puStack_410 = (undefined4 *)((ulong)&uStack_450 | 8);
  uStack_448 = (undefined4)uStack_4c8;
  uStack_444 = (undefined4)((ulong)uStack_4c8 >> 0x20);
  uStack_450._4_4_ = iStack_4cc;
  uStack_438 = (undefined4)uStack_4b8;
  uStack_434 = (undefined4)((ulong)uStack_4b8 >> 0x20);
  uStack_440 = (undefined4)uStack_4c0;
  uStack_43c = (undefined4)((ulong)uStack_4c0 >> 0x20);
  uStack_428 = (undefined4)uStack_4a8;
  uStack_424 = (undefined4)((ulong)uStack_4a8 >> 0x20);
  uStack_430 = (undefined4)uStack_4b0;
  uStack_42c = (undefined4)((ulong)uStack_4b0 >> 0x20);
  lStack_418 = lStack_498;
  uStack_420 = (undefined4)uStack_4a0;
  uStack_41c = (undefined4)((ulong)uStack_4a0 >> 0x20);
  puStack_408 = &uStack_400;
  uStack_3f8 = 0;
  uStack_400 = 0;
  if (lStack_498 != 0) {
    piVar1 = (int *)(lStack_498 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (iStack_4cc < 3) {
    uStack_400 = *puStack_488;
    uStack_3f8 = puStack_488[1];
  }
  else {
    uStack_450._4_4_ = 0;
    func_0x000109a84868(&uStack_450,auStack_4d0);
  }
  puStack_3b0 = &uStack_3e8;
  uStack_3e8 = uStack_528;
  uStack_3f0 = uStack_530;
  uStack_3d8 = uStack_518;
  uStack_3e0 = uStack_520;
  uStack_3c8 = uStack_508;
  uStack_3d0 = uStack_510;
  lStack_3b8 = lStack_4f8;
  uStack_3c0 = uStack_500;
  puStack_3a8 = &uStack_3a0;
  uStack_398 = 0;
  uStack_3a0 = 0;
  if (lStack_4f8 != 0) {
    piVar1 = (int *)(lStack_4f8 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (uStack_530._4_4_ < 3) {
    uStack_3a0 = *puStack_4e8;
    uStack_398 = puStack_4e8[1];
  }
  else {
    uStack_3f0 = uStack_530 & 0xffffffff;
    func_0x000109a84868(&uStack_3f0,&uStack_530);
  }
  puStack_350 = &uStack_388;
  uStack_388 = uStack_588;
  uStack_390 = uStack_590;
  uStack_378 = uStack_578;
  uStack_380 = uStack_580;
  uStack_368 = uStack_568;
  uStack_370 = uStack_570;
  lStack_358 = lStack_558;
  uStack_360 = uStack_560;
  puStack_348 = &uStack_340;
  uStack_338 = 0;
  uStack_340 = 0;
  if (lStack_558 != 0) {
    piVar1 = (int *)(lStack_558 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (uStack_590._4_4_ < 3) {
    uStack_340 = *puStack_548;
    uStack_338 = puStack_548[1];
  }
  else {
    uStack_390 = uStack_590 & 0xffffffff;
    func_0x000109a84868(&uStack_390,&uStack_590);
  }
  puStack_2f0 = &uStack_328;
  uStack_328 = uStack_268;
  uStack_330 = uStack_270;
  uStack_318 = uStack_258;
  uStack_320 = uStack_260;
  uStack_308 = uStack_248;
  uStack_310 = uStack_250;
  lStack_2f8 = lStack_238;
  uStack_300 = uStack_240;
  puStack_2e8 = &uStack_2e0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  if (lStack_238 != 0) {
    piVar1 = (int *)(lStack_238 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (uStack_270._4_4_ < 3) {
    uStack_2e0 = *puStack_228;
    uStack_2d8 = puStack_228[1];
  }
  else {
    uStack_330 = uStack_270 & 0xffffffff;
    func_0x000109a84868(&uStack_330,&uStack_270);
  }
  puStack_290 = &uStack_2c8;
  uStack_2c8 = uStack_5e8;
  uStack_2d0 = uStack_5f0;
  uStack_2b8 = uStack_5d8;
  uStack_2c0 = uStack_5e0;
  uStack_2a8 = uStack_5c8;
  uStack_2b0 = uStack_5d0;
  lStack_298 = lStack_5b8;
  uStack_2a0 = uStack_5c0;
  puStack_288 = &uStack_280;
  uStack_278 = 0;
  uStack_280 = 0;
  if (lStack_5b8 != 0) {
    piVar1 = (int *)(lStack_5b8 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (uStack_5f0._4_4_ < 3) {
    uStack_280 = *puStack_5a8;
    uStack_278 = puStack_5a8[1];
  }
  else {
    uStack_2d0 = uStack_5f0 & 0xffffffff;
    func_0x000109a84868(&uStack_2d0,&uStack_5f0);
  }
  uStack_608 = 0;
  puStack_600 = (undefined8 *)0x0;
  uStack_5f8 = 0;
  FUN_10a001444(&uStack_608,&uStack_450,&uStack_270,5);
  FUN_10a6c05fc(auStack_6e8,uStack_608,puStack_600);
  puStack_210 = &uStack_608;
  FUN_109ffe3e8(&puStack_210);
  puVar9 = &uStack_270;
  do {
    puVar15 = puVar9 + -0xc;
    if (puVar9[-5] != 0) {
      piVar1 = (int *)(puVar9[-5] + 0x14);
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
        func_0x000109a848d4(puVar15);
      }
    }
    puVar9[-5] = 0;
    puVar9[-9] = 0;
    puVar9[-10] = 0;
    puVar9[-7] = 0;
    puVar9[-8] = 0;
    if (0 < *(int *)((long)puVar9 + -0x5c)) {
      lVar17 = 0;
      lVar12 = puVar9[-4];
      do {
        *(undefined4 *)(lVar12 + lVar17 * 4) = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < *(int *)((long)puVar9 + -0x5c));
    }
    puVar10 = (undefined8 *)puVar9[-3];
    if (puVar10 != puVar9 + -2 && puVar10 != (undefined8 *)0x0) {
      _free(puVar10[-1]);
    }
    puVar9 = puVar15;
  } while (puVar15 != &uStack_450);
  if (lStack_5b8 != 0) {
    piVar1 = (int *)(lStack_5b8 + 0x14);
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
      func_0x000109a848d4(&uStack_5f0);
    }
  }
  lStack_5b8 = 0;
  uStack_5d8 = 0;
  uStack_5e0 = 0;
  uStack_5c8 = 0;
  uStack_5d0 = 0;
  if (0 < uStack_5f0._4_4_) {
    lVar17 = 0;
    do {
      *(undefined4 *)(lStack_5b0 + lVar17 * 4) = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < uStack_5f0._4_4_);
  }
  if (puStack_5a8 != auStack_5a0 && puStack_5a8 != (undefined8 *)0x0) {
    _free(puStack_5a8[-1]);
  }
  if (lStack_238 != 0) {
    piVar1 = (int *)(lStack_238 + 0x14);
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
      func_0x000109a848d4(&uStack_270);
    }
  }
  lStack_238 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  if (0 < uStack_270._4_4_) {
    lVar17 = 0;
    do {
      *(undefined4 *)(lStack_230 + lVar17 * 4) = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < uStack_270._4_4_);
  }
  if (puStack_228 != auStack_220 && puStack_228 != (undefined8 *)0x0) {
    _free(puStack_228[-1]);
  }
  if (lStack_558 != 0) {
    piVar1 = (int *)(lStack_558 + 0x14);
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
      func_0x000109a848d4(&uStack_590);
    }
  }
  lStack_558 = 0;
  uStack_578 = 0;
  uStack_580 = 0;
  uStack_568 = 0;
  uStack_570 = 0;
  if (0 < uStack_590._4_4_) {
    lVar17 = 0;
    do {
      *(undefined4 *)(lStack_550 + lVar17 * 4) = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < uStack_590._4_4_);
  }
  if (puStack_548 != auStack_540 && puStack_548 != (undefined8 *)0x0) {
    _free(puStack_548[-1]);
  }
  if (lStack_4f8 != 0) {
    piVar1 = (int *)(lStack_4f8 + 0x14);
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
      func_0x000109a848d4(&uStack_530);
    }
  }
  lStack_4f8 = 0;
  uStack_518 = 0;
  uStack_520 = 0;
  uStack_508 = 0;
  uStack_510 = 0;
  if (0 < uStack_530._4_4_) {
    lVar17 = 0;
    do {
      *(undefined4 *)(lStack_4f0 + lVar17 * 4) = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < uStack_530._4_4_);
  }
  if (puStack_4e8 != auStack_4e0 && puStack_4e8 != (undefined8 *)0x0) {
    _free(puStack_4e8[-1]);
  }
  if (lStack_498 != 0) {
    piVar1 = (int *)(lStack_498 + 0x14);
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
      func_0x000109a848d4(auStack_4d0);
    }
  }
  lStack_498 = 0;
  uStack_4b8 = 0;
  uStack_4c0 = 0;
  uStack_4a8 = 0;
  uStack_4b0 = 0;
  if (0 < iStack_4cc) {
    lVar17 = 0;
    do {
      *(undefined4 *)(lStack_490 + lVar17 * 4) = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < iStack_4cc);
  }
  if (puStack_488 != auStack_480 && puStack_488 != (undefined8 *)0x0) {
    _free(puStack_488[-1]);
  }
  uStack_450 = &uStack_468;
  FUN_109ffe3e8(&uStack_450);
  auStack_688[0] = 0x1010000;
  puStack_680 = auStack_6e8;
  uStack_678 = 0;
  FUN_10a0f4340(&uStack_670,auStack_688,5);
  if (lStack_6b0 != 0) {
    piVar1 = (int *)(lStack_6b0 + 0x14);
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
      func_0x000109a848d4(auStack_6e8);
    }
  }
  lStack_6b0 = 0;
  uStack_6d0 = 0;
  uStack_6d8 = 0;
  uStack_6c0 = 0;
  uStack_6c8 = 0;
  if (0 < iStack_6e4) {
    lVar17 = 0;
    do {
      *(undefined4 *)(lStack_6a8 + lVar17 * 4) = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < iStack_6e4);
  }
  if (puStack_6a0 != auStack_698 && puStack_6a0 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_6a0 + -8));
  }
  plVar14 = *(long **)(lVar13 + 0x870);
  puVar9 = &uStack_670;
  puVar10 = extraout_x8;
  FUN_10a6b28e4();
  if (lStack_638 != 0) {
    piVar1 = (int *)(lStack_638 + 0x14);
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
      puVar10 = &uStack_670;
      func_0x000109a848d4();
    }
  }
  lStack_638 = 0;
  uStack_658 = 0;
  uStack_660 = 0;
  uStack_648 = 0;
  uStack_650 = 0;
  if (0 < uStack_670._4_4_) {
    lVar17 = 0;
    do {
      *(undefined4 *)(lStack_630 + lVar17 * 4) = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < uStack_670._4_4_);
  }
  if (puStack_628 != auStack_620 && puStack_628 != (undefined1 *)0x0) {
    puVar10 = *(undefined8 **)(puStack_628 + -8);
    _free();
  }
  if (lStack_710 != 0) {
    piVar1 = (int *)(lStack_710 + 0x14);
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
      puVar10 = &uStack_748;
      func_0x000109a848d4();
    }
  }
  lStack_710 = 0;
  uStack_730 = 0;
  lStack_738 = 0;
  uStack_720 = 0;
  uStack_728 = 0;
  if (0 < uStack_748._4_4_) {
    lVar17 = 0;
    do {
      *(undefined4 *)(lStack_708 + lVar17 * 4) = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < uStack_748._4_4_);
  }
  if (plStack_700 != alStack_6f8 && plStack_700 != (long *)0x0) {
    puVar10 = (undefined8 *)plStack_700[-1];
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  if ((int)plVar14 != 0) {
    func_0x000104bd46a0();
    FUN_109ff0424(&uStack_5f0);
    FUN_109ff0424(&uStack_270);
    FUN_109ff0424(&uStack_590);
    FUN_109ff0424(&uStack_530);
    FUN_109ff0424(auStack_4d0);
    uStack_450 = &uStack_468;
    FUN_109ffe3e8(&uStack_450);
    func_0x00010938f90c(&uStack_748);
  }
  puVar7 = puVar10;
  __Unwind_Resume();
  pcStack_758 = FUN_10a6b6384;
  pppuStack_7b8 = (undefined8 ***)&UNK_10f66db26;
  lStack_7b0 = 0x3b;
  lStack_790 = lVar13;
  puStack_788 = &uStack_670;
  puStack_780 = &uStack_5f0;
  puStack_778 = puVar15;
  puStack_770 = puVar15;
  puStack_768 = puVar10;
  ppuStack_760 = &puStack_1a0;
  if (*plVar14 == 0) {
LAB_10a6b64ac:
    FUN_10a0edfc4(&pppuStack_7b8);
  }
  else {
    uVar11 = *(ulong *)(*plVar14 + 8);
    pppuStack_7b8 = (undefined8 ***)&UNK_10f66db62;
    lStack_7b0 = 0x4b;
    if ((uVar11 & 1) != 0) goto LAB_10a6b64ac;
    uVar11 = uVar11 >> 1;
    FUN_10a0ee900(&pppuStack_7b8,&UNK_10f66dbae,0x48);
    lStack_798 = (long)cStack_7a1;
    if (lStack_798 < 0) {
      pppuStack_7a0 = pppuStack_7b8;
      lStack_798 = lStack_7b0;
      if (((ulong)puVar9 & 0xffffffff) <= uVar11) {
        __ZdlPv();
        goto LAB_10a6b6424;
      }
    }
    else {
      pppuStack_7a0 = &pppuStack_7b8;
      if (((ulong)puVar9 & 0xffffffff) <= uVar11) {
LAB_10a6b6424:
        lVar13 = *(long *)*plVar14;
        uVar11 = (ulong)((long *)*plVar14)[1] >> 1;
        *puVar7 = 0x242ff0005;
        *(int *)(puVar7 + 1) = (int)uVar11;
        *(undefined4 *)((long)puVar7 + 0xc) = 2;
        puVar7[2] = lVar13;
        puVar7[3] = lVar13;
        puVar7[5] = 0;
        puVar7[4] = 0;
        puVar7[7] = 0;
        puVar7[6] = 0;
        puVar7[10] = 0;
        puVar7[8] = puVar7 + 1;
        puVar7[9] = puVar7 + 10;
        puVar7[0xb] = 0;
        lVar17 = uVar11 << 0x20;
        if ((lVar13 != 0) || (lVar17 == 0)) {
          *(undefined4 *)puVar7 = 0x42ff4005;
          puVar7[0xb] = 4;
          puVar7[10] = 8;
          lVar13 = lVar13 + (lVar17 >> 0x1d);
          puVar7[4] = lVar13;
          puVar7[5] = lVar13;
          return;
        }
        puVar8 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar8 = 1;
        pppuStack_7b8 = (undefined8 ***)(puVar8 + 1);
        lStack_7b0 = 0x1c;
        *(undefined1 *)(puVar8 + 8) = 0;
        *(undefined8 *)(puVar8 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar8 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar8 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar8 + 4) = 0x61746164207c7c20;
        func_0x000109ac3188(0xffffff29,&pppuStack_7b8,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
        goto LAB_10a6b651c;
      }
    }
  }
  FUN_10a0edfc4(&pppuStack_7a0);
LAB_10a6b651c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a6b6520);
  (*pcVar5)();
}



/* Entry: 10a6b51a0; end: 10a6b6383;  */

void FUN_10a6b51a0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined4 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 ***pppuStack_628;
  long lStack_620;
  char cStack_611;
  undefined8 ***pppuStack_610;
  long lStack_608;
  long lStack_600;
  undefined8 *puStack_5f8;
  undefined8 *puStack_5f0;
  undefined8 *puStack_5e8;
  undefined8 *puStack_5e0;
  undefined8 *puStack_5d8;
  undefined1 *puStack_5d0;
  code *pcStack_5c8;
  undefined8 uStack_5b8;
  long lStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  long lStack_580;
  long lStack_578;
  long *plStack_570;
  long alStack_568 [2];
  undefined1 auStack_558 [4];
  int iStack_554;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  long lStack_520;
  long lStack_518;
  undefined1 *puStack_510;
  undefined1 auStack_508 [16];
  undefined4 auStack_4f8 [2];
  undefined1 *puStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  long lStack_4a8;
  long lStack_4a0;
  undefined1 *puStack_498;
  undefined1 auStack_490 [16];
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 *puStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  long lStack_428;
  long lStack_420;
  undefined8 *puStack_418;
  undefined8 auStack_410 [2];
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 auStack_3b0 [2];
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  long lStack_368;
  long lStack_360;
  undefined8 *puStack_358;
  undefined8 auStack_350 [2];
  undefined1 auStack_340 [4];
  int iStack_33c;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  long lStack_300;
  undefined8 *puStack_2f8;
  undefined8 auStack_2f0 [3];
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  long lStack_288;
  undefined4 *puStack_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  ulong uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  ulong uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 *puStack_98;
  undefined8 auStack_90 [2];
  undefined8 *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = *(long *)(param_2 + 0x18);
  FUN_10a6b6384(&uStack_5b8,param_3,0x4e);
  uStack_2d0 = 0;
  uStack_2d8 = 0;
  uStack_2c8 = 0;
  uStack_3a0 = 0x8000000080;
  func_0x000109a829e8(&uStack_2c0,&uStack_3a0,0);
  FUN_10a003124(auStack_340,&uStack_2c0);
  func_0x00010918eb6c(&uStack_2c0);
  uStack_400 = 0x1100000000;
  uStack_e0 = 0x7fffffff80000000;
  func_0x000109a84930(&uStack_3a0,&uStack_5b8,&uStack_400,&uStack_e0);
  uStack_2b4 = 0;
  uStack_2b0 = 0;
  uStack_2c0._4_4_ = 0;
  uStack_2b8 = 0;
  uStack_2a4 = 0;
  uStack_2a0 = 0;
  uStack_2ac = 0;
  uStack_2a8 = 0;
  puStack_280 = &uStack_2b8;
  uStack_294 = 0;
  uStack_29c = 0;
  uStack_298 = 0;
  lStack_288 = 0;
  uStack_290 = 0;
  uStack_28c = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_2c0._0_4_ = 0x42ff0005;
  puStack_278 = &uStack_270;
  func_0x000109390e94(&uStack_2c0,&uStack_3a0);
  FUN_10a6c0250(auStack_340,&uStack_2c0,3);
  if (lStack_288 != 0) {
    piVar1 = (int *)(lStack_288 + 0x14);
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
      func_0x000109a848d4(&uStack_2c0);
    }
  }
  lStack_288 = 0;
  uStack_2a8 = 0;
  uStack_2a4 = 0;
  uStack_2b0 = 0;
  uStack_2ac = 0;
  uStack_298 = 0;
  uStack_294 = 0;
  uStack_2a0 = 0;
  uStack_29c = 0;
  if (0 < uStack_2c0._4_4_) {
    lVar9 = 0;
    do {
      puStack_280[lVar9] = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < uStack_2c0._4_4_);
  }
  if (puStack_278 != &uStack_270 && puStack_278 != (undefined8 *)0x0) {
    _free(puStack_278[-1]);
  }
  if (lStack_368 != 0) {
    piVar1 = (int *)(lStack_368 + 0x14);
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
      func_0x000109a848d4(&uStack_3a0);
    }
  }
  lStack_368 = 0;
  uStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  uStack_380 = 0;
  if (0 < uStack_3a0._4_4_) {
    lVar9 = 0;
    do {
      *(undefined4 *)(lStack_360 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < uStack_3a0._4_4_);
  }
  if (puStack_358 != auStack_350 && puStack_358 != (undefined8 *)0x0) {
    _free(puStack_358[-1]);
  }
  uStack_400 = 0x8000000080;
  func_0x000109a829e8(&uStack_2c0,&uStack_400,0);
  FUN_10a003124(&uStack_3a0,&uStack_2c0);
  func_0x00010918eb6c(&uStack_2c0);
  uStack_e0 = 0x2a00000024;
  uStack_460 = 0x7fffffff80000000;
  func_0x000109a84930(&uStack_400,&uStack_5b8,&uStack_e0,&uStack_460);
  uStack_2b4 = 0;
  uStack_2b0 = 0;
  uStack_2c0._4_4_ = 0;
  uStack_2b8 = 0;
  puStack_280 = &uStack_2b8;
  uStack_2a4 = 0;
  uStack_2a0 = 0;
  uStack_2ac = 0;
  uStack_2a8 = 0;
  uStack_294 = 0;
  uStack_29c = 0;
  uStack_298 = 0;
  lStack_288 = 0;
  uStack_290 = 0;
  uStack_28c = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_2c0._0_4_ = 0x42ff0005;
  puStack_278 = &uStack_270;
  func_0x000109390e94(&uStack_2c0,&uStack_400);
  FUN_10a6c02f0(&uStack_3a0,&uStack_2c0);
  if (lStack_288 != 0) {
    piVar1 = (int *)(lStack_288 + 0x14);
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
      func_0x000109a848d4(&uStack_2c0);
    }
  }
  lStack_288 = 0;
  uStack_2a8 = 0;
  uStack_2a4 = 0;
  uStack_2b0 = 0;
  uStack_2ac = 0;
  uStack_298 = 0;
  uStack_294 = 0;
  uStack_2a0 = 0;
  uStack_29c = 0;
  if (0 < uStack_2c0._4_4_) {
    lVar9 = 0;
    do {
      puStack_280[lVar9] = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < uStack_2c0._4_4_);
  }
  if (puStack_278 != &uStack_270 && puStack_278 != (undefined8 *)0x0) {
    _free(puStack_278[-1]);
  }
  if (lStack_3c8 != 0) {
    piVar1 = (int *)(lStack_3c8 + 0x14);
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
      func_0x000109a848d4(&uStack_400);
    }
  }
  lStack_3c8 = 0;
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  if (0 < uStack_400._4_4_) {
    lVar9 = 0;
    do {
      *(undefined4 *)(lStack_3c0 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < uStack_400._4_4_);
  }
  if (puStack_3b8 != auStack_3b0 && puStack_3b8 != (undefined8 *)0x0) {
    _free(puStack_3b8[-1]);
  }
  uStack_e0 = 0x300000002a;
  uStack_460 = 0x7fffffff80000000;
  func_0x000109a84930(&uStack_400,&uStack_5b8,&uStack_e0,&uStack_460);
  uStack_2b4 = 0;
  uStack_2b0 = 0;
  uStack_2c0._4_4_ = 0;
  uStack_2b8 = 0;
  puStack_280 = &uStack_2b8;
  uStack_2a4 = 0;
  uStack_2a0 = 0;
  uStack_2ac = 0;
  uStack_2a8 = 0;
  uStack_294 = 0;
  uStack_29c = 0;
  uStack_298 = 0;
  lStack_288 = 0;
  uStack_290 = 0;
  uStack_28c = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_2c0._0_4_ = 0x42ff0005;
  puStack_278 = &uStack_270;
  func_0x000109390e94(&uStack_2c0,&uStack_400);
  FUN_10a6c02f0(&uStack_3a0,&uStack_2c0);
  if (lStack_288 != 0) {
    piVar1 = (int *)(lStack_288 + 0x14);
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
      func_0x000109a848d4(&uStack_2c0);
    }
  }
  lStack_288 = 0;
  uStack_2a8 = 0;
  uStack_2a4 = 0;
  uStack_2b0 = 0;
  uStack_2ac = 0;
  uStack_298 = 0;
  uStack_294 = 0;
  uStack_2a0 = 0;
  uStack_29c = 0;
  if (0 < uStack_2c0._4_4_) {
    lVar9 = 0;
    do {
      puStack_280[lVar9] = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < uStack_2c0._4_4_);
  }
  if (puStack_278 != &uStack_270 && puStack_278 != (undefined8 *)0x0) {
    _free(puStack_278[-1]);
  }
  if (lStack_3c8 != 0) {
    piVar1 = (int *)(lStack_3c8 + 0x14);
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
      func_0x000109a848d4(&uStack_400);
    }
  }
  lStack_3c8 = 0;
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  if (0 < uStack_400._4_4_) {
    lVar9 = 0;
    do {
      *(undefined4 *)(lStack_3c0 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < uStack_400._4_4_);
  }
  if (puStack_3b8 != auStack_3b0 && puStack_3b8 != (undefined8 *)0x0) {
    _free(puStack_3b8[-1]);
  }
  uStack_e0 = 0x8000000080;
  func_0x000109a829e8(&uStack_2c0,&uStack_e0,0);
  FUN_10a003124(&uStack_400,&uStack_2c0);
  func_0x00010918eb6c(&uStack_2c0);
  uStack_d8 = 0x1e0000001d;
  uStack_e0 = 0x1c0000001b;
  uStack_d0 = CONCAT44(uStack_d0._4_4_,0x21);
  uStack_2b0 = 0;
  uStack_2ac = 0;
  uStack_2c0._0_4_ = 0;
  uStack_2c0._4_4_ = 0;
  uStack_2b8 = 0;
  uStack_2b4 = 0;
  FUN_10a14d944(&uStack_2c0,&uStack_e0,(long)&uStack_d0 + 4,5);
  FUN_10a6c04d8(&uStack_400,&uStack_5b8,3,CONCAT44(uStack_2c0._4_4_,(undefined4)uStack_2c0),
                CONCAT44(uStack_2b4,uStack_2b8));
  if (CONCAT44(uStack_2c0._4_4_,(undefined4)uStack_2c0) != 0) {
    uStack_2b8 = (undefined4)uStack_2c0;
    uStack_2b4 = uStack_2c0._4_4_;
    __ZdlPv();
  }
  uStack_460 = 0x8000000080;
  func_0x000109a829e8(&uStack_2c0,&uStack_460,0);
  FUN_10a003124(&uStack_e0,&uStack_2c0);
  func_0x00010918eb6c(&uStack_2c0);
  uStack_478 = 0x440000003c;
  puStack_80 = (undefined8 *)0x7fffffff80000000;
  func_0x000109a84930(&uStack_460,&uStack_5b8,&uStack_478,&puStack_80);
  uStack_2b4 = 0;
  uStack_2b0 = 0;
  uStack_2c0._4_4_ = 0;
  uStack_2b8 = 0;
  puStack_280 = &uStack_2b8;
  uStack_2a4 = 0;
  uStack_2a0 = 0;
  uStack_2ac = 0;
  uStack_2a8 = 0;
  uStack_294 = 0;
  uStack_29c = 0;
  uStack_298 = 0;
  lStack_288 = 0;
  uStack_290 = 0;
  uStack_28c = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_2c0._0_4_ = 0x42ff0005;
  puStack_278 = &uStack_270;
  func_0x000109390e94(&uStack_2c0,&uStack_460);
  FUN_10a6c02f0(&uStack_e0,&uStack_2c0);
  if (lStack_288 != 0) {
    piVar1 = (int *)(lStack_288 + 0x14);
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
      func_0x000109a848d4(&uStack_2c0);
    }
  }
  lStack_288 = 0;
  uStack_2a8 = 0;
  uStack_2a4 = 0;
  uStack_2b0 = 0;
  uStack_2ac = 0;
  uStack_298 = 0;
  uStack_294 = 0;
  uStack_2a0 = 0;
  uStack_29c = 0;
  if (0 < uStack_2c0._4_4_) {
    lVar9 = 0;
    do {
      puStack_280[lVar9] = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < uStack_2c0._4_4_);
  }
  if (puStack_278 != &uStack_270 && puStack_278 != (undefined8 *)0x0) {
    _free(puStack_278[-1]);
  }
  if (lStack_428 != 0) {
    piVar1 = (int *)(lStack_428 + 0x14);
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
      func_0x000109a848d4(&uStack_460);
    }
  }
  lStack_428 = 0;
  uStack_448 = 0;
  uStack_450 = 0;
  uStack_438 = 0;
  uStack_440 = 0;
  if (0 < uStack_460._4_4_) {
    lVar9 = 0;
    do {
      *(undefined4 *)(lStack_420 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < uStack_460._4_4_);
  }
  if (puStack_418 != auStack_410 && puStack_418 != (undefined8 *)0x0) {
    _free(puStack_418[-1]);
  }
  uStack_478 = 0x8000000080;
  func_0x000109a829e8(&uStack_2c0,&uStack_478,0);
  FUN_10a003124(&uStack_460,&uStack_2c0);
  func_0x00010918eb6c(&uStack_2c0);
  lVar9 = 0;
  puStack_80 = (undefined8 *)0x1800000013;
  do {
    uStack_478 = CONCAT44(uStack_478._4_4_,0x83010000);
    uStack_468 = 0;
    uVar15 = *(undefined8 *)(lStack_5a8 + *plStack_570 * (long)*(int *)((long)&puStack_80 + lVar9));
    uStack_480 = CONCAT44((int)(float)((ulong)uVar15 >> 0x20),(int)(float)uVar15);
    uStack_2c0._0_4_ = 0;
    uStack_2c0._4_4_ = 0x406fe000;
    uStack_2b0 = 0;
    uStack_2ac = 0;
    uStack_2a8 = 0;
    uStack_2a4 = 0;
    uStack_2b8 = 0;
    uStack_2b4 = 0;
    puStack_470 = &uStack_460;
    func_0x000109aee350(&uStack_478,&uStack_480,3,&uStack_2c0,0xffffffff,8,0);
    lVar9 = lVar9 + 4;
  } while (lVar9 != 8);
  puStack_280 = (undefined4 *)((ulong)&uStack_2c0 | 8);
  uStack_2b8 = (undefined4)uStack_338;
  uStack_2b4 = (undefined4)((ulong)uStack_338 >> 0x20);
  uStack_2c0._4_4_ = iStack_33c;
  uStack_2a8 = (undefined4)uStack_328;
  uStack_2a4 = (undefined4)((ulong)uStack_328 >> 0x20);
  uStack_2b0 = (undefined4)uStack_330;
  uStack_2ac = (undefined4)((ulong)uStack_330 >> 0x20);
  uStack_298 = (undefined4)uStack_318;
  uStack_294 = (undefined4)((ulong)uStack_318 >> 0x20);
  uStack_2a0 = (undefined4)uStack_320;
  uStack_29c = (undefined4)((ulong)uStack_320 >> 0x20);
  lStack_288 = lStack_308;
  uStack_290 = (undefined4)uStack_310;
  uStack_28c = (undefined4)((ulong)uStack_310 >> 0x20);
  puStack_278 = &uStack_270;
  uStack_268 = 0;
  uStack_270 = 0;
  if (lStack_308 != 0) {
    piVar1 = (int *)(lStack_308 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (iStack_33c < 3) {
    uStack_270 = *puStack_2f8;
    uStack_268 = puStack_2f8[1];
  }
  else {
    uStack_2c0._4_4_ = 0;
    func_0x000109a84868(&uStack_2c0,auStack_340);
  }
  puStack_220 = &uStack_258;
  uStack_258 = uStack_398;
  uStack_260 = uStack_3a0;
  uStack_248 = uStack_388;
  uStack_250 = uStack_390;
  uStack_238 = uStack_378;
  uStack_240 = uStack_380;
  lStack_228 = lStack_368;
  uStack_230 = uStack_370;
  puStack_218 = &uStack_210;
  uStack_208 = 0;
  uStack_210 = 0;
  if (lStack_368 != 0) {
    piVar1 = (int *)(lStack_368 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (uStack_3a0._4_4_ < 3) {
    uStack_210 = *puStack_358;
    uStack_208 = puStack_358[1];
  }
  else {
    uStack_260 = uStack_3a0 & 0xffffffff;
    func_0x000109a84868(&uStack_260,&uStack_3a0);
  }
  puStack_1c0 = &uStack_1f8;
  uStack_1f8 = uStack_3f8;
  uStack_200 = uStack_400;
  uStack_1e8 = uStack_3e8;
  uStack_1f0 = uStack_3f0;
  uStack_1d8 = uStack_3d8;
  uStack_1e0 = uStack_3e0;
  lStack_1c8 = lStack_3c8;
  uStack_1d0 = uStack_3d0;
  puStack_1b8 = &uStack_1b0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  if (lStack_3c8 != 0) {
    piVar1 = (int *)(lStack_3c8 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (uStack_400._4_4_ < 3) {
    uStack_1b0 = *puStack_3b8;
    uStack_1a8 = puStack_3b8[1];
  }
  else {
    uStack_200 = uStack_400 & 0xffffffff;
    func_0x000109a84868(&uStack_200,&uStack_400);
  }
  puStack_160 = &uStack_198;
  uStack_198 = uStack_d8;
  uStack_1a0 = uStack_e0;
  uStack_188 = uStack_c8;
  uStack_190 = uStack_d0;
  uStack_178 = uStack_b8;
  uStack_180 = uStack_c0;
  lStack_168 = lStack_a8;
  uStack_170 = uStack_b0;
  puStack_158 = &uStack_150;
  uStack_148 = 0;
  uStack_150 = 0;
  if (lStack_a8 != 0) {
    piVar1 = (int *)(lStack_a8 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (uStack_e0._4_4_ < 3) {
    uStack_150 = *puStack_98;
    uStack_148 = puStack_98[1];
  }
  else {
    uStack_1a0 = uStack_e0 & 0xffffffff;
    func_0x000109a84868(&uStack_1a0,&uStack_e0);
  }
  puStack_100 = &uStack_138;
  uStack_138 = uStack_458;
  uStack_140 = uStack_460;
  uStack_128 = uStack_448;
  uStack_130 = uStack_450;
  uStack_118 = uStack_438;
  uStack_120 = uStack_440;
  lStack_108 = lStack_428;
  uStack_110 = uStack_430;
  puStack_f8 = &uStack_f0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if (lStack_428 != 0) {
    piVar1 = (int *)(lStack_428 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (uStack_460._4_4_ < 3) {
    uStack_f0 = *puStack_418;
    uStack_e8 = puStack_418[1];
  }
  else {
    uStack_140 = uStack_460 & 0xffffffff;
    func_0x000109a84868(&uStack_140,&uStack_460);
  }
  uStack_478 = 0;
  puStack_470 = (undefined8 *)0x0;
  uStack_468 = 0;
  FUN_10a001444(&uStack_478,&uStack_2c0,&uStack_e0,5);
  FUN_10a6c05fc(auStack_558,uStack_478,puStack_470);
  puStack_80 = &uStack_478;
  FUN_109ffe3e8(&puStack_80);
  puVar8 = &uStack_e0;
  do {
    puVar13 = puVar8 + -0xc;
    if (puVar8[-5] != 0) {
      piVar1 = (int *)(puVar8[-5] + 0x14);
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
        func_0x000109a848d4(puVar13);
      }
    }
    puVar8[-5] = 0;
    puVar8[-9] = 0;
    puVar8[-10] = 0;
    puVar8[-7] = 0;
    puVar8[-8] = 0;
    if (0 < *(int *)((long)puVar8 + -0x5c)) {
      lVar9 = 0;
      lVar12 = puVar8[-4];
      do {
        *(undefined4 *)(lVar12 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)((long)puVar8 + -0x5c));
    }
    puVar10 = (undefined8 *)puVar8[-3];
    if (puVar10 != puVar8 + -2 && puVar10 != (undefined8 *)0x0) {
      _free(puVar10[-1]);
    }
    puVar8 = puVar13;
  } while (puVar13 != &uStack_2c0);
  if (lStack_428 != 0) {
    piVar1 = (int *)(lStack_428 + 0x14);
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
      func_0x000109a848d4(&uStack_460);
    }
  }
  lStack_428 = 0;
  uStack_448 = 0;
  uStack_450 = 0;
  uStack_438 = 0;
  uStack_440 = 0;
  if (0 < uStack_460._4_4_) {
    lVar9 = 0;
    do {
      *(undefined4 *)(lStack_420 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < uStack_460._4_4_);
  }
  if (puStack_418 != auStack_410 && puStack_418 != (undefined8 *)0x0) {
    _free(puStack_418[-1]);
  }
  if (lStack_a8 != 0) {
    piVar1 = (int *)(lStack_a8 + 0x14);
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
      func_0x000109a848d4(&uStack_e0);
    }
  }
  lStack_a8 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if (0 < uStack_e0._4_4_) {
    lVar9 = 0;
    do {
      *(undefined4 *)(lStack_a0 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < uStack_e0._4_4_);
  }
  if (puStack_98 != auStack_90 && puStack_98 != (undefined8 *)0x0) {
    _free(puStack_98[-1]);
  }
  if (lStack_3c8 != 0) {
    piVar1 = (int *)(lStack_3c8 + 0x14);
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
      func_0x000109a848d4(&uStack_400);
    }
  }
  lStack_3c8 = 0;
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  if (0 < uStack_400._4_4_) {
    lVar9 = 0;
    do {
      *(undefined4 *)(lStack_3c0 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < uStack_400._4_4_);
  }
  if (puStack_3b8 != auStack_3b0 && puStack_3b8 != (undefined8 *)0x0) {
    _free(puStack_3b8[-1]);
  }
  if (lStack_368 != 0) {
    piVar1 = (int *)(lStack_368 + 0x14);
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
      func_0x000109a848d4(&uStack_3a0);
    }
  }
  lStack_368 = 0;
  uStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  uStack_380 = 0;
  if (0 < uStack_3a0._4_4_) {
    lVar9 = 0;
    do {
      *(undefined4 *)(lStack_360 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < uStack_3a0._4_4_);
  }
  if (puStack_358 != auStack_350 && puStack_358 != (undefined8 *)0x0) {
    _free(puStack_358[-1]);
  }
  if (lStack_308 != 0) {
    piVar1 = (int *)(lStack_308 + 0x14);
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
      func_0x000109a848d4(auStack_340);
    }
  }
  lStack_308 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  if (0 < iStack_33c) {
    lVar9 = 0;
    do {
      *(undefined4 *)(lStack_300 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iStack_33c);
  }
  if (puStack_2f8 != auStack_2f0 && puStack_2f8 != (undefined8 *)0x0) {
    _free(puStack_2f8[-1]);
  }
  uStack_2c0 = &uStack_2d8;
  FUN_109ffe3e8(&uStack_2c0);
  auStack_4f8[0] = 0x1010000;
  puStack_4f0 = auStack_558;
  uStack_4e8 = 0;
  FUN_10a0f4340(&uStack_4e0,auStack_4f8,5);
  if (lStack_520 != 0) {
    piVar1 = (int *)(lStack_520 + 0x14);
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
      func_0x000109a848d4(auStack_558);
    }
  }
  lStack_520 = 0;
  uStack_540 = 0;
  uStack_548 = 0;
  uStack_530 = 0;
  uStack_538 = 0;
  if (0 < iStack_554) {
    lVar9 = 0;
    do {
      *(undefined4 *)(lStack_518 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iStack_554);
  }
  if (puStack_510 != auStack_508 && puStack_510 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_510 + -8));
  }
  plVar7 = *(long **)(lVar14 + 0x870);
  puVar8 = &uStack_4e0;
  FUN_10a6b28e4();
  if (lStack_4a8 != 0) {
    piVar1 = (int *)(lStack_4a8 + 0x14);
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
      param_1 = &uStack_4e0;
      func_0x000109a848d4();
    }
  }
  lStack_4a8 = 0;
  uStack_4c8 = 0;
  uStack_4d0 = 0;
  uStack_4b8 = 0;
  uStack_4c0 = 0;
  if (0 < uStack_4e0._4_4_) {
    lVar9 = 0;
    do {
      *(undefined4 *)(lStack_4a0 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < uStack_4e0._4_4_);
  }
  if (puStack_498 != auStack_490 && puStack_498 != (undefined1 *)0x0) {
    param_1 = *(undefined8 **)(puStack_498 + -8);
    _free();
  }
  if (lStack_580 != 0) {
    piVar1 = (int *)(lStack_580 + 0x14);
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
      param_1 = &uStack_5b8;
      func_0x000109a848d4();
    }
  }
  lStack_580 = 0;
  uStack_5a0 = 0;
  lStack_5a8 = 0;
  uStack_590 = 0;
  uStack_598 = 0;
  if (0 < uStack_5b8._4_4_) {
    lVar9 = 0;
    do {
      *(undefined4 *)(lStack_578 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < uStack_5b8._4_4_);
  }
  if (plStack_570 != alStack_568 && plStack_570 != (long *)0x0) {
    param_1 = (undefined8 *)plStack_570[-1];
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if ((int)plVar7 != 0) {
    func_0x000104bd46a0();
    FUN_109ff0424(&uStack_460);
    FUN_109ff0424(&uStack_e0);
    FUN_109ff0424(&uStack_400);
    FUN_109ff0424(&uStack_3a0);
    FUN_109ff0424(auStack_340);
    uStack_2c0 = &uStack_2d8;
    FUN_109ffe3e8(&uStack_2c0);
    func_0x00010938f90c(&uStack_5b8);
  }
  puVar10 = param_1;
  __Unwind_Resume();
  pcStack_5c8 = FUN_10a6b6384;
  pppuStack_628 = (undefined8 ***)&UNK_10f66db26;
  lStack_620 = 0x3b;
  lStack_600 = lVar14;
  puStack_5f8 = &uStack_4e0;
  puStack_5f0 = &uStack_460;
  puStack_5e8 = puVar13;
  puStack_5e0 = puVar13;
  puStack_5d8 = param_1;
  puStack_5d0 = &stack0xfffffffffffffff0;
  if (*plVar7 == 0) {
LAB_10a6b64ac:
    FUN_10a0edfc4(&pppuStack_628);
  }
  else {
    uVar11 = *(ulong *)(*plVar7 + 8);
    pppuStack_628 = (undefined8 ***)&UNK_10f66db62;
    lStack_620 = 0x4b;
    if ((uVar11 & 1) != 0) goto LAB_10a6b64ac;
    uVar11 = uVar11 >> 1;
    FUN_10a0ee900(&pppuStack_628,&UNK_10f66dbae,0x48);
    lStack_608 = (long)cStack_611;
    if (lStack_608 < 0) {
      pppuStack_610 = pppuStack_628;
      lStack_608 = lStack_620;
      if (((ulong)puVar8 & 0xffffffff) <= uVar11) {
        __ZdlPv();
        goto LAB_10a6b6424;
      }
    }
    else {
      pppuStack_610 = &pppuStack_628;
      if (((ulong)puVar8 & 0xffffffff) <= uVar11) {
LAB_10a6b6424:
        lVar14 = *(long *)*plVar7;
        uVar11 = (ulong)((long *)*plVar7)[1] >> 1;
        *puVar10 = 0x242ff0005;
        *(int *)(puVar10 + 1) = (int)uVar11;
        *(undefined4 *)((long)puVar10 + 0xc) = 2;
        puVar10[2] = lVar14;
        puVar10[3] = lVar14;
        puVar10[5] = 0;
        puVar10[4] = 0;
        puVar10[7] = 0;
        puVar10[6] = 0;
        puVar10[10] = 0;
        puVar10[8] = puVar10 + 1;
        puVar10[9] = puVar10 + 10;
        puVar10[0xb] = 0;
        lVar9 = uVar11 << 0x20;
        if ((lVar14 != 0) || (lVar9 == 0)) {
          *(undefined4 *)puVar10 = 0x42ff4005;
          puVar10[0xb] = 4;
          puVar10[10] = 8;
          lVar14 = lVar14 + (lVar9 >> 0x1d);
          puVar10[4] = lVar14;
          puVar10[5] = lVar14;
          return;
        }
        puVar6 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar6 = 1;
        pppuStack_628 = (undefined8 ***)(puVar6 + 1);
        lStack_620 = 0x1c;
        *(undefined1 *)(puVar6 + 8) = 0;
        *(undefined8 *)(puVar6 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar6 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar6 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar6 + 4) = 0x61746164207c7c20;
        func_0x000109ac3188(0xffffff29,&pppuStack_628,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
        goto LAB_10a6b651c;
      }
    }
  }
  FUN_10a0edfc4(&pppuStack_610);
LAB_10a6b651c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a6b6520);
  (*pcVar5)();
}



/* Entry: 10a6b6384; end: 10a6b6563;  */

void FUN_10a6b6384(undefined8 *param_1,long *param_2,ulong param_3)

{
  long lVar1;
  code *pcVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 **ppuStack_68;
  long lStack_60;
  char cStack_51;
  undefined8 **ppuStack_50;
  long lStack_48;
  
  ppuStack_68 = (undefined8 **)&UNK_10f66db26;
  lStack_60 = 0x3b;
  if (*param_2 == 0) {
LAB_10a6b64ac:
    FUN_10a0edfc4(&ppuStack_68);
  }
  else {
    uVar4 = *(ulong *)(*param_2 + 8);
    ppuStack_68 = (undefined8 **)&UNK_10f66db62;
    lStack_60 = 0x4b;
    if ((uVar4 & 1) != 0) goto LAB_10a6b64ac;
    uVar4 = uVar4 >> 1;
    FUN_10a0ee900(&ppuStack_68,&UNK_10f66dbae,0x48);
    lStack_48 = (long)cStack_51;
    if (lStack_48 < 0) {
      ppuStack_50 = ppuStack_68;
      lStack_48 = lStack_60;
      if ((param_3 & 0xffffffff) <= uVar4) {
        __ZdlPv();
        goto LAB_10a6b6424;
      }
    }
    else {
      ppuStack_50 = &ppuStack_68;
      if ((param_3 & 0xffffffff) <= uVar4) {
LAB_10a6b6424:
        lVar1 = *(long *)*param_2;
        uVar4 = (ulong)((long *)*param_2)[1] >> 1;
        *param_1 = 0x242ff0005;
        *(int *)(param_1 + 1) = (int)uVar4;
        *(undefined4 *)((long)param_1 + 0xc) = 2;
        param_1[2] = lVar1;
        param_1[3] = lVar1;
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[7] = 0;
        param_1[6] = 0;
        param_1[10] = 0;
        param_1[8] = param_1 + 1;
        param_1[9] = param_1 + 10;
        param_1[0xb] = 0;
        lVar5 = uVar4 << 0x20;
        if ((lVar1 != 0) || (lVar5 == 0)) {
          *(undefined4 *)param_1 = 0x42ff4005;
          param_1[0xb] = 4;
          param_1[10] = 8;
          lVar1 = lVar1 + (lVar5 >> 0x1d);
          param_1[4] = lVar1;
          param_1[5] = lVar1;
          return;
        }
        puVar3 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar3 = 1;
        ppuStack_68 = (undefined8 **)(puVar3 + 1);
        lStack_60 = 0x1c;
        *(undefined1 *)(puVar3 + 8) = 0;
        *(undefined8 *)(puVar3 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar3 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar3 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar3 + 4) = 0x61746164207c7c20;
        func_0x000109ac3188(0xffffff29,&ppuStack_68,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
        goto LAB_10a6b651c;
      }
    }
  }
  FUN_10a0edfc4(&ppuStack_50);
LAB_10a6b651c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a6b6520);
  (*pcVar2)();
}



/* Entry: 10a6b6564; end: 10a6b7303;  */

void FUN_10a6b6564(uint *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  long lVar9;
  undefined8 extraout_x8;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  float fVar13;
  undefined8 uVar14;
  double dVar15;
  undefined1 auStack_710 [4];
  int iStack_70c;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  long lStack_6d8;
  long lStack_6d0;
  undefined1 *puStack_6c8;
  undefined1 auStack_6c0 [16];
  undefined4 uStack_6b0;
  undefined8 uStack_6ac;
  undefined4 uStack_6a4;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  undefined4 uStack_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined4 uStack_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  long lStack_678;
  long lStack_670;
  undefined8 *puStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined4 auStack_650 [2];
  undefined4 *puStack_648;
  undefined8 uStack_640;
  undefined1 auStack_638 [4];
  int iStack_634;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  long lStack_600;
  long lStack_5f8;
  undefined1 *puStack_5f0;
  undefined1 auStack_5e8 [16];
  undefined1 *puStack_5d8;
  undefined4 *puStack_5d0;
  undefined8 uStack_5c8;
  undefined1 auStack_5c0 [24];
  undefined4 auStack_5a8 [2];
  undefined1 *puStack_5a0;
  undefined8 uStack_598;
  undefined8 *puStack_590;
  undefined8 *puStack_588;
  undefined8 uStack_580;
  undefined8 *puStack_578;
  undefined8 *puStack_570;
  uint *puStack_568;
  undefined1 *puStack_560;
  code *pcStack_558;
  long lStack_550;
  uint *puStack_548;
  uint uStack_540;
  int iStack_53c;
  long lStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  long lStack_508;
  long lStack_500;
  long *plStack_4f8;
  long alStack_4f0 [2];
  uint uStack_4e0;
  undefined1 auStack_4dc [8];
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  long lStack_4a8;
  double *pdStack_4a0;
  undefined8 *puStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  uint uStack_480;
  int iStack_47c;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  long lStack_448;
  int *piStack_440;
  undefined1 *puStack_438;
  undefined1 auStack_430 [16];
  long lStack_420;
  uint *puStack_418;
  uint uStack_410;
  int iStack_40c;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  long lStack_3d8;
  long lStack_3d0;
  undefined1 *puStack_3c8;
  undefined1 auStack_3c0 [16];
  undefined4 uStack_3b0;
  int iStack_3ac;
  undefined8 uStack_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  long lStack_378;
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined4 uStack_350;
  int iStack_34c;
  undefined8 uStack_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  long lStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  uint *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  long lStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_d8;
  long lStack_d0;
  undefined1 *puStack_c8;
  undefined1 auStack_c0 [16];
  double adStack_b0 [5];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = (ulong)*(byte *)(*(long *)(param_2 + 0x18) + 0x29);
  if (uVar10 < 6) {
    FUN_10aba1500(&lStack_420,*(undefined8 *)(*(long *)(param_2 + 0x18) + uVar10 * 8 + 0x30),param_3
                  ,1);
    uStack_278._0_4_ = 0xf66cd91;
    uStack_278._4_4_ = 1;
    uStack_270._0_4_ = 0x22;
    uStack_270._4_4_ = 0;
    if (*(int *)(lStack_420 + 0x24) == 1) {
      FUN_10a0f3910(&uStack_480,lStack_420 + 0x10,0);
      uStack_278._0_4_ = 0xf66cdb4;
      uStack_278._4_4_ = 1;
      uStack_270._0_4_ = 0x19;
      uStack_270._4_4_ = 0;
      if ((uStack_480 & 0xfff) == 0x18) {
        uStack_268 = 0;
        uStack_264 = 0;
        uStack_278._0_4_ = 0x1010000;
        puStack_2e8 = &uStack_480;
        uStack_2f0 = (undefined8 *)CONCAT44(uStack_2f0._4_4_,0x2010000);
        uStack_2e0 = 0;
        uStack_270 = puStack_2e8;
        func_0x000109ac9fc8(&uStack_278,&uStack_2f0,3,0);
        uStack_278._0_4_ = 0xf66cdce;
        uStack_278._4_4_ = 1;
        uStack_270._0_4_ = 0x25;
        uStack_270._4_4_ = 0;
        if ((piStack_440[1] == 0x100) && (*piStack_440 == 0x100)) {
          lVar12 = *(long *)(param_2 + 0x18);
          lStack_4a8 = 0;
          uStack_4ac = 0;
          pdStack_4a0 = (double *)(auStack_4dc + 4);
          uStack_4b4 = 0;
          uStack_4b0 = 0;
          uStack_4bc = 0;
          uStack_4b8 = 0;
          uStack_4c4 = 0;
          uStack_4c0 = 0;
          uStack_4cc = 0;
          uStack_4c8 = 0;
          uStack_4d4 = 0;
          uStack_4d0 = 0;
          auStack_4dc = (undefined1  [8])0x0;
          uStack_490 = 0;
          uStack_488 = 0;
          uStack_4e0 = 0x42ff0010;
          puStack_498 = &uStack_490;
          FUN_10a002c4c(&uStack_4e0,&uStack_480);
          FUN_10a6b6384(&uStack_540,param_4,0x4e);
          uStack_288 = 0;
          uStack_290 = 0;
          uStack_280 = 0;
          uStack_2e0 = 0;
          uStack_2f0 = (undefined8 *)CONCAT44(uStack_2f0._4_4_,0x1010000);
          puStack_2e8 = &uStack_4e0;
          FUN_10a0f4340(&uStack_278,&uStack_2f0,5);
          FUN_109fed8e4(&uStack_290,&uStack_278);
          if (lStack_240 != 0) {
            piVar1 = (int *)(lStack_240 + 0x14);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              func_0x000109a848d4(&uStack_278);
            }
          }
          lStack_240 = 0;
          uStack_260 = 0;
          uStack_25c = 0;
          uStack_268 = 0;
          uStack_264 = 0;
          uStack_250 = 0;
          uStack_24c = 0;
          uStack_258 = 0;
          uStack_254 = 0;
          if (0 < uStack_278._4_4_) {
            lVar9 = 0;
            do {
              *(undefined4 *)((long)puStack_238 + lVar9 * 4) = 0;
              lVar9 = lVar9 + 1;
            } while (lVar9 < uStack_278._4_4_);
          }
          if (puStack_230 != &uStack_228 && puStack_230 != (undefined8 *)0x0) {
            _free(puStack_230[-1]);
          }
          uStack_3b0 = 0x100;
          iStack_3ac = 0x100;
          func_0x000109a829e8(&uStack_278,&uStack_3b0,0);
          lStack_550 = lVar12;
          puStack_548 = param_1;
          FUN_10a003124(&uStack_350,&uStack_278);
          func_0x00010918eb6c(&uStack_278);
          lVar12 = 0;
          uStack_110 = 1.63393675941875e-312;
          do {
            uVar14 = *(undefined8 *)
                      (lStack_530 + *plStack_4f8 * (long)*(int *)((long)&uStack_110 + lVar12));
            adStack_b0[0] = (double)CONCAT44((int)(float)((ulong)uVar14 >> 0x20),(int)(float)uVar14)
            ;
            uStack_3b0 = 0x83010000;
            uStack_3a0 = 0;
            uStack_39c = 0;
            uStack_278._0_4_ = 0;
            uStack_278._4_4_ = 0x406fe000;
            uStack_268 = 0;
            uStack_264 = 0;
            uStack_260 = 0;
            uStack_25c = 0;
            uStack_270._0_4_ = 0;
            uStack_270._4_4_ = 0;
            uStack_3a8 = &uStack_350;
            func_0x000109aee350(&uStack_3b0,adStack_b0,8,&uStack_278,0xffffffff,8,0);
            lVar12 = lVar12 + 4;
          } while (lVar12 != 8);
          puStack_2e8 = (uint *)CONCAT44(uStack_348._4_4_,(undefined4)uStack_348);
          uStack_2f0 = (undefined8 *)CONCAT44(iStack_34c,uStack_350);
          puStack_2b0 = (undefined8 *)((ulong)&uStack_2f0 | 8);
          lStack_2b8 = lStack_318;
          uStack_298 = 0;
          uStack_2a0 = 0;
          if (iStack_34c < 3) {
            puVar11 = (undefined8 *)((ulong)&uStack_350 | 4);
            uStack_2a0 = *puStack_308;
            uStack_298 = puStack_308[1];
            uStack_350 = 0x42ff0000;
            puVar11[1] = 0;
            *puVar11 = 0;
            puVar11[3] = 0;
            puVar11[2] = 0;
            puVar11[5] = 0;
            puVar11[4] = 0;
            *(undefined8 *)((long)puVar11 + 0x34) = 0;
            *(undefined8 *)((long)puVar11 + 0x2c) = 0;
            puStack_2a8 = &uStack_2a0;
            if (puStack_308 != &uStack_300) {
              _free(puStack_308[-1]);
            }
          }
          else {
            puStack_2a8 = puStack_308;
            puStack_2b0 = puStack_310;
          }
          uStack_340 = 0;
          uStack_33c = 0;
          uStack_350 = 0x1010000;
          uStack_348 = &uStack_2f0;
          FUN_10a0f4340(&uStack_278,&uStack_350,5);
          FUN_109fed8e4(&uStack_290,&uStack_278);
          if (lStack_240 != 0) {
            piVar1 = (int *)(lStack_240 + 0x14);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              func_0x000109a848d4(&uStack_278);
            }
          }
          lStack_240 = 0;
          uStack_260 = 0;
          uStack_25c = 0;
          uStack_268 = 0;
          uStack_264 = 0;
          uStack_250 = 0;
          uStack_24c = 0;
          uStack_258 = 0;
          uStack_254 = 0;
          if (0 < uStack_278._4_4_) {
            lVar12 = 0;
            do {
              *(undefined4 *)((long)puStack_238 + lVar12 * 4) = 0;
              lVar12 = lVar12 + 1;
            } while (lVar12 < uStack_278._4_4_);
          }
          if (puStack_230 != &uStack_228 && puStack_230 != (undefined8 *)0x0) {
            _free(puStack_230[-1]);
          }
          dVar15 = *pdStack_4a0;
          adStack_b0[0] = 8.91238232383278e-313;
          adStack_b0[4] = NAN;
          func_0x000109a84930(&uStack_3b0,&uStack_540,adStack_b0,adStack_b0 + 4);
          fVar13 = 0.0;
          uStack_348._4_4_ = 0;
          uStack_340 = 0;
          iStack_34c = 0;
          uStack_348._0_4_ = 0;
          puStack_310 = &uStack_348;
          uStack_334 = 0;
          uStack_330 = 0;
          uStack_33c = 0;
          uStack_338 = 0;
          uStack_324 = 0;
          uStack_32c = 0;
          uStack_328 = 0;
          lStack_318 = 0;
          uStack_320 = 0;
          uStack_31c = 0;
          uStack_2f8 = 0;
          uStack_300 = 0;
          uStack_350 = 0x42ff0005;
          puStack_308 = &uStack_300;
          func_0x000109390e94(&uStack_350,&uStack_3b0);
          FUN_10a6c19dc(&uStack_350);
          uStack_110 = (double)fVar13;
          uStack_100 = 0;
          uStack_f8 = 0;
          uStack_108 = 0;
          uStack_278._0_4_ = 0x42ff0000;
          puStack_238 = &uStack_270;
          uStack_270._4_4_ = 0;
          uStack_268 = 0;
          uStack_278._4_4_ = 0;
          uStack_270._0_4_ = 0;
          uStack_25c = 0;
          uStack_258 = 0;
          uStack_264 = 0;
          uStack_260 = 0;
          uStack_24c = 0;
          uStack_254 = 0;
          uStack_250 = 0;
          lStack_240 = 0;
          uStack_248 = 0;
          uStack_244 = 0;
          uStack_220 = 0;
          uStack_228 = 0;
          puStack_230 = &uStack_228;
          adStack_b0[0] = dVar15;
          func_0x000109a83fd0(&uStack_278,2,adStack_b0,5);
          func_0x000109a48880(&uStack_278,&uStack_110);
          if (lStack_318 != 0) {
            piVar1 = (int *)(lStack_318 + 0x14);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              func_0x000109a848d4(&uStack_350);
            }
          }
          lStack_318 = 0;
          uStack_338 = 0;
          uStack_334 = 0;
          uStack_340 = 0;
          uStack_33c = 0;
          uStack_328 = 0;
          uStack_324 = 0;
          uStack_330 = 0;
          uStack_32c = 0;
          if (0 < iStack_34c) {
            lVar12 = 0;
            do {
              *(undefined4 *)((long)puStack_310 + lVar12 * 4) = 0;
              lVar12 = lVar12 + 1;
            } while (lVar12 < iStack_34c);
          }
          if (puStack_308 != &uStack_300 && puStack_308 != (undefined8 *)0x0) {
            _free(puStack_308[-1]);
          }
          if (lStack_378 != 0) {
            piVar1 = (int *)(lStack_378 + 0x14);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              func_0x000109a848d4(&uStack_3b0);
            }
          }
          lStack_378 = 0;
          uStack_398 = 0;
          uStack_394 = 0;
          uStack_3a0 = 0;
          uStack_39c = 0;
          uStack_388 = 0;
          uStack_384 = 0;
          uStack_390 = 0;
          uStack_38c = 0;
          if (0 < iStack_3ac) {
            lVar12 = 0;
            do {
              *(undefined4 *)((long)puStack_370 + lVar12 * 4) = 0;
              lVar12 = lVar12 + 1;
            } while (lVar12 < iStack_3ac);
          }
          if (puStack_368 != &uStack_360 && puStack_368 != (undefined8 *)0x0) {
            _free(puStack_368[-1]);
          }
          dVar15 = *pdStack_4a0;
          adStack_b0[4] = 1.01855797987084e-312;
          uStack_118 = 0x7fffffff80000000;
          func_0x000109a84930(&uStack_110,&uStack_540,adStack_b0 + 4,&uStack_118);
          fVar13 = 0.0;
          uStack_3a8._4_4_ = 0;
          uStack_3a0 = 0;
          iStack_3ac = 0;
          uStack_3a8._0_4_ = 0;
          puStack_370 = &uStack_3a8;
          uStack_394 = 0;
          uStack_390 = 0;
          uStack_39c = 0;
          uStack_398 = 0;
          uStack_384 = 0;
          uStack_38c = 0;
          uStack_388 = 0;
          lStack_378 = 0;
          uStack_380 = 0;
          uStack_37c = 0;
          uStack_360 = 0;
          uStack_358 = 0;
          uStack_3b0 = 0x42ff0005;
          puStack_368 = &uStack_360;
          func_0x000109390e94(&uStack_3b0,&uStack_110);
          FUN_10a6c19dc(&uStack_3b0);
          adStack_b0[0] = (double)fVar13;
          adStack_b0[2] = 0.0;
          adStack_b0[3] = 0.0;
          adStack_b0[1] = 0.0;
          uStack_350 = 0x42ff0000;
          puStack_310 = &uStack_348;
          uStack_348._4_4_ = 0;
          uStack_340 = 0;
          iStack_34c = 0;
          uStack_348._0_4_ = 0;
          uStack_334 = 0;
          uStack_330 = 0;
          uStack_33c = 0;
          uStack_338 = 0;
          uStack_324 = 0;
          uStack_32c = 0;
          uStack_328 = 0;
          lStack_318 = 0;
          uStack_320 = 0;
          uStack_31c = 0;
          uStack_2f8 = 0;
          uStack_300 = 0;
          puStack_308 = &uStack_300;
          adStack_b0[4] = dVar15;
          func_0x000109a83fd0(&uStack_350,2,adStack_b0 + 4,5);
          func_0x000109a48880(&uStack_350,adStack_b0);
          if (lStack_378 != 0) {
            piVar1 = (int *)(lStack_378 + 0x14);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              func_0x000109a848d4(&uStack_3b0);
            }
          }
          lStack_378 = 0;
          uStack_398 = 0;
          uStack_394 = 0;
          uStack_3a0 = 0;
          uStack_39c = 0;
          uStack_388 = 0;
          uStack_384 = 0;
          uStack_390 = 0;
          uStack_38c = 0;
          if (0 < iStack_3ac) {
            lVar12 = 0;
            do {
              *(undefined4 *)((long)puStack_370 + lVar12 * 4) = 0;
              lVar12 = lVar12 + 1;
            } while (lVar12 < iStack_3ac);
          }
          if (puStack_368 != &uStack_360 && puStack_368 != (undefined8 *)0x0) {
            _free(puStack_368[-1]);
          }
          if (lStack_d8 != 0) {
            piVar1 = (int *)(lStack_d8 + 0x14);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              func_0x000109a848d4(&uStack_110);
            }
          }
          lStack_d8 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          uStack_e8 = 0;
          uStack_f0 = 0;
          if (0 < uStack_110._4_4_) {
            lVar12 = 0;
            do {
              *(undefined4 *)(lStack_d0 + lVar12 * 4) = 0;
              lVar12 = lVar12 + 1;
            } while (lVar12 < uStack_110._4_4_);
          }
          if (puStack_c8 != auStack_c0 && puStack_c8 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_c8 + -8));
          }
          FUN_109fed894(&uStack_290,&uStack_278);
          FUN_109fed894(&uStack_290,&uStack_350);
          FUN_10a6c05fc(&uStack_410,uStack_290,uStack_288);
          if (lStack_318 != 0) {
            piVar1 = (int *)(lStack_318 + 0x14);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              func_0x000109a848d4(&uStack_350);
            }
          }
          lStack_318 = 0;
          uStack_338 = 0;
          uStack_334 = 0;
          uStack_340 = 0;
          uStack_33c = 0;
          uStack_328 = 0;
          uStack_324 = 0;
          uStack_330 = 0;
          uStack_32c = 0;
          if (0 < iStack_34c) {
            lVar12 = 0;
            do {
              *(undefined4 *)((long)puStack_310 + lVar12 * 4) = 0;
              lVar12 = lVar12 + 1;
            } while (lVar12 < iStack_34c);
          }
          if (puStack_308 != &uStack_300 && puStack_308 != (undefined8 *)0x0) {
            _free(puStack_308[-1]);
          }
          if (lStack_240 != 0) {
            piVar1 = (int *)(lStack_240 + 0x14);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              func_0x000109a848d4(&uStack_278);
            }
          }
          lStack_240 = 0;
          uStack_260 = 0;
          uStack_25c = 0;
          uStack_268 = 0;
          uStack_264 = 0;
          uStack_250 = 0;
          uStack_24c = 0;
          uStack_258 = 0;
          uStack_254 = 0;
          if (0 < uStack_278._4_4_) {
            lVar12 = 0;
            do {
              *(undefined4 *)((long)puStack_238 + lVar12 * 4) = 0;
              lVar12 = lVar12 + 1;
            } while (lVar12 < uStack_278._4_4_);
          }
          if (puStack_230 != &uStack_228 && puStack_230 != (undefined8 *)0x0) {
            _free(puStack_230[-1]);
          }
          if (lStack_2b8 != 0) {
            piVar1 = (int *)(lStack_2b8 + 0x14);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              func_0x000109a848d4(&uStack_2f0);
            }
          }
          lStack_2b8 = 0;
          uStack_2d8 = 0;
          uStack_2e0 = 0;
          uStack_2c8 = 0;
          uStack_2d0 = 0;
          if (0 < uStack_2f0._4_4_) {
            lVar12 = 0;
            do {
              *(undefined4 *)((long)puStack_2b0 + lVar12 * 4) = 0;
              lVar12 = lVar12 + 1;
            } while (lVar12 < uStack_2f0._4_4_);
          }
          if (puStack_2a8 != &uStack_2a0 && puStack_2a8 != (undefined8 *)0x0) {
            _free(puStack_2a8[-1]);
          }
          uStack_278 = &uStack_290;
          FUN_109ffe3e8(&uStack_278);
          uStack_278._0_4_ = 0xf66cb73;
          uStack_278._4_4_ = 1;
          uStack_270._0_4_ = 0x2d;
          uStack_270._4_4_ = 0;
          if ((uStack_410 & 7) == 5) {
            uVar14 = *(undefined8 *)(lStack_550 + 0x870);
            puVar6 = puStack_548;
            FUN_10a6b28e4(puStack_548,uVar14,&uStack_410);
            iVar8 = (int)uVar14;
            if (lStack_3d8 != 0) {
              piVar1 = (int *)(lStack_3d8 + 0x14);
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
                puVar6 = &uStack_410;
                func_0x000109a848d4();
              }
            }
            lStack_3d8 = 0;
            uStack_3f8 = 0;
            uStack_400 = 0;
            uStack_3e8 = 0;
            uStack_3f0 = 0;
            if (0 < iStack_40c) {
              lVar12 = 0;
              do {
                *(undefined4 *)(lStack_3d0 + lVar12 * 4) = 0;
                lVar12 = lVar12 + 1;
              } while (lVar12 < iStack_40c);
            }
            if (puStack_3c8 != auStack_3c0 && puStack_3c8 != (undefined1 *)0x0) {
              puVar6 = *(uint **)(puStack_3c8 + -8);
              _free();
            }
            if (lStack_508 != 0) {
              piVar1 = (int *)(lStack_508 + 0x14);
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
                puVar6 = &uStack_540;
                func_0x000109a848d4();
              }
            }
            lStack_508 = 0;
            uStack_528 = 0;
            lStack_530 = 0;
            uStack_518 = 0;
            uStack_520 = 0;
            if (0 < iStack_53c) {
              lVar12 = 0;
              do {
                *(undefined4 *)(lStack_500 + lVar12 * 4) = 0;
                lVar12 = lVar12 + 1;
              } while (lVar12 < iStack_53c);
            }
            if (plStack_4f8 != alStack_4f0 && plStack_4f8 != (long *)0x0) {
              puVar6 = (uint *)plStack_4f8[-1];
              _free();
            }
            if (lStack_4a8 != 0) {
              piVar1 = (int *)(lStack_4a8 + 0x14);
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
                puVar6 = &uStack_4e0;
                func_0x000109a848d4();
              }
            }
            lStack_4a8 = 0;
            uStack_4c8 = 0;
            uStack_4c4 = 0;
            uStack_4d0 = 0;
            uStack_4cc = 0;
            uStack_4b8 = 0;
            uStack_4b4 = 0;
            uStack_4c0 = 0;
            uStack_4bc = 0;
            if (0 < (int)auStack_4dc._0_4_) {
              lVar12 = 0;
              do {
                *(undefined4 *)((long)pdStack_4a0 + lVar12 * 4) = 0;
                lVar12 = lVar12 + 1;
              } while (lVar12 < (int)auStack_4dc._0_4_);
            }
            if (puStack_498 != &uStack_490 && puStack_498 != (undefined8 *)0x0) {
              puVar6 = (uint *)puStack_498[-1];
              _free();
            }
            if (lStack_448 != 0) {
              piVar1 = (int *)(lStack_448 + 0x14);
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
                puVar6 = &uStack_480;
                func_0x000109a848d4();
              }
            }
            lStack_448 = 0;
            uStack_468 = 0;
            uStack_470 = 0;
            uStack_458 = 0;
            uStack_460 = 0;
            if (0 < iStack_47c) {
              lVar12 = 0;
              do {
                piStack_440[lVar12] = 0;
                lVar12 = lVar12 + 1;
              } while (lVar12 < iStack_47c);
            }
            if (puStack_438 != auStack_430 && puStack_438 != (undefined1 *)0x0) {
              puVar6 = *(uint **)(puStack_438 + -8);
              _free();
            }
            if (puStack_418 != (uint *)0x0) {
              puVar7 = puStack_418 + 2;
              do {
                lVar12 = *(long *)puVar7;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar7,0x10);
                if (bVar4) {
                  *(long *)puVar7 = lVar12 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar12 == 0) {
                (**(code **)(*(long *)puStack_418 + 0x10))(puStack_418);
                __ZNSt3__119__shared_weak_count14__release_weakEv();
                puVar6 = puStack_418;
              }
            }
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
              return;
            }
            ___stack_chk_fail();
            if (iVar8 != 0) {
              func_0x000104bd46a0();
              func_0x000105706254(&uStack_3b0);
              func_0x00010567aa40(&uStack_110);
              func_0x00010567aa40(&uStack_278);
              func_0x00010567aa40(&uStack_2f0);
              uStack_2f0 = &uStack_290;
              FUN_109ffe3e8(&uStack_2f0);
              func_0x00010938f90c(&uStack_540);
              FUN_109ff04c0(&uStack_4e0);
              func_0x00010567aa40(&uStack_480);
              func_0x00010a136de4(&lStack_420);
            }
            puVar7 = puVar6;
            __Unwind_Resume();
            puStack_590 = &uStack_2a0;
            puStack_588 = &uStack_278;
            uStack_580 = 0x406fe00000000000;
            puStack_578 = &uStack_490;
            puStack_570 = &uStack_360;
            puStack_568 = puVar6;
            puStack_560 = &stack0xfffffffffffffff0;
            pcStack_558 = FUN_10a6b7304;
            lVar12 = *(long *)(puVar7 + 6);
            FUN_10a6b6384(auStack_710);
            uStack_6b0 = 0x42ff0000;
            lStack_670 = (long)&uStack_6ac + 4;
            uStack_6a4 = 0;
            uStack_6a0 = 0;
            uStack_6ac = 0;
            uStack_694 = 0;
            uStack_690 = 0;
            uStack_69c = 0;
            uStack_698 = 0;
            uStack_684 = 0;
            uStack_68c = 0;
            uStack_688 = 0;
            lStack_678 = 0;
            uStack_680 = 0;
            uStack_67c = 0;
            uStack_660 = 0;
            uStack_658 = 0;
            puStack_668 = &uStack_660;
            FUN_10a6c1f6c(auStack_5c0,auStack_710);
            uStack_598 = 0;
            auStack_5a8[0] = 0x1050000;
            puStack_5d8 = (undefined1 *)CONCAT44(puStack_5d8._4_4_,0x2010000);
            uStack_5c8 = 0;
            puStack_5d0 = &uStack_6b0;
            puStack_5a0 = auStack_5c0;
            func_0x000109a3ecac(auStack_5a8,&puStack_5d8);
            puStack_5d8 = auStack_5c0;
            FUN_109ffe3e8(&puStack_5d8);
            auStack_650[0] = 0x1010000;
            puStack_648 = &uStack_6b0;
            uStack_640 = 0;
            FUN_10a0f4340(auStack_638,auStack_650,5);
            if (lStack_678 != 0) {
              piVar1 = (int *)(lStack_678 + 0x14);
              do {
                iVar8 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar8 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar8 + -1 == 0) {
                func_0x000109a848d4(&uStack_6b0);
              }
            }
            lStack_678 = 0;
            uStack_698 = 0;
            uStack_694 = 0;
            uStack_6a0 = 0;
            uStack_69c = 0;
            uStack_688 = 0;
            uStack_684 = 0;
            uStack_690 = 0;
            uStack_68c = 0;
            if (0 < (int)uStack_6ac) {
              lVar9 = 0;
              do {
                *(undefined4 *)(lStack_670 + lVar9 * 4) = 0;
                lVar9 = lVar9 + 1;
              } while (lVar9 < (int)uStack_6ac);
            }
            if (puStack_668 != &uStack_660 && puStack_668 != (undefined8 *)0x0) {
              _free(puStack_668[-1]);
            }
            FUN_10a6b28e4(extraout_x8,*(undefined8 *)(lVar12 + 0x870),auStack_638);
            if (lStack_600 != 0) {
              piVar1 = (int *)(lStack_600 + 0x14);
              do {
                iVar8 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar8 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar8 + -1 == 0) {
                func_0x000109a848d4(auStack_638);
              }
            }
            lStack_600 = 0;
            uStack_620 = 0;
            uStack_628 = 0;
            uStack_610 = 0;
            uStack_618 = 0;
            if (0 < iStack_634) {
              lVar12 = 0;
              do {
                *(undefined4 *)(lStack_5f8 + lVar12 * 4) = 0;
                lVar12 = lVar12 + 1;
              } while (lVar12 < iStack_634);
            }
            if (puStack_5f0 != auStack_5e8 && puStack_5f0 != (undefined1 *)0x0) {
              _free(*(undefined8 *)(puStack_5f0 + -8));
            }
            if (lStack_6d8 != 0) {
              piVar1 = (int *)(lStack_6d8 + 0x14);
              do {
                iVar8 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar8 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar8 + -1 == 0) {
                func_0x000109a848d4(auStack_710);
              }
            }
            lStack_6d8 = 0;
            uStack_6f8 = 0;
            uStack_700 = 0;
            uStack_6e8 = 0;
            uStack_6f0 = 0;
            if (0 < iStack_70c) {
              lVar12 = 0;
              do {
                *(undefined4 *)(lStack_6d0 + lVar12 * 4) = 0;
                lVar12 = lVar12 + 1;
              } while (lVar12 < iStack_70c);
            }
            if (puStack_6c8 != auStack_6c0 && puStack_6c8 != (undefined1 *)0x0) {
              _free(*(undefined8 *)(puStack_6c8 + -8));
            }
            return;
          }
          FUN_10a0edfc4(&uStack_278);
        }
        else {
          FUN_10a0edfc4(&uStack_278);
        }
      }
      else {
        FUN_10a0edfc4(&uStack_278);
      }
    }
    else {
      FUN_10a0edfc4(&uStack_278);
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a6b7188);
  (*pcVar5)();
}



/* Entry: 10a6b7304; end: 10a6b75ab;  */

void FUN_10a6b7304(undefined8 param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_1c0 [4];
  int iStack_1bc;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_188;
  long lStack_180;
  undefined1 *puStack_178;
  undefined1 auStack_170 [16];
  undefined4 uStack_160;
  undefined8 uStack_15c;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  long lStack_128;
  long lStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 auStack_100 [2];
  undefined4 *puStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [4];
  int iStack_e4;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  undefined1 auStack_98 [16];
  undefined1 *puStack_88;
  undefined4 *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  undefined4 auStack_58 [2];
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  lVar6 = *(long *)(param_2 + 0x18);
  FUN_10a6b6384(auStack_1c0,param_3,0x4e);
  uStack_160 = 0x42ff0000;
  lStack_120 = (long)&uStack_15c + 4;
  uStack_154 = 0;
  uStack_150 = 0;
  uStack_15c = 0;
  uStack_144 = 0;
  uStack_140 = 0;
  uStack_14c = 0;
  uStack_148 = 0;
  uStack_134 = 0;
  uStack_13c = 0;
  uStack_138 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  puStack_118 = &uStack_110;
  FUN_10a6c1f6c(auStack_70,auStack_1c0);
  uStack_48 = 0;
  auStack_58[0] = 0x1050000;
  puStack_88 = (undefined1 *)CONCAT44(puStack_88._4_4_,0x2010000);
  uStack_78 = 0;
  puStack_80 = &uStack_160;
  puStack_50 = auStack_70;
  func_0x000109a3ecac(auStack_58,&puStack_88);
  puStack_88 = auStack_70;
  FUN_109ffe3e8(&puStack_88);
  auStack_100[0] = 0x1010000;
  puStack_f8 = &uStack_160;
  uStack_f0 = 0;
  FUN_10a0f4340(auStack_e8,auStack_100,5);
  if (lStack_128 != 0) {
    piVar1 = (int *)(lStack_128 + 0x14);
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
      func_0x000109a848d4(&uStack_160);
    }
  }
  lStack_128 = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_150 = 0;
  uStack_14c = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  uStack_140 = 0;
  uStack_13c = 0;
  if (0 < (int)uStack_15c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_120 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_15c);
  }
  if (puStack_118 != &uStack_110 && puStack_118 != (undefined8 *)0x0) {
    _free(puStack_118[-1]);
  }
  FUN_10a6b28e4(param_1,*(undefined8 *)(lVar6 + 0x870),auStack_e8);
  if (lStack_b0 != 0) {
    piVar1 = (int *)(lStack_b0 + 0x14);
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
      func_0x000109a848d4(auStack_e8);
    }
  }
  lStack_b0 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  if (0 < iStack_e4) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lStack_a8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iStack_e4);
  }
  if (puStack_a0 != auStack_98 && puStack_a0 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_a0 + -8));
  }
  if (lStack_188 != 0) {
    piVar1 = (int *)(lStack_188 + 0x14);
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
      func_0x000109a848d4(auStack_1c0);
    }
  }
  lStack_188 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  if (0 < iStack_1bc) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lStack_180 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iStack_1bc);
  }
  if (puStack_178 != auStack_170 && puStack_178 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_178 + -8));
  }
  return;
}



/* Entry: 10a6b75ac; end: 10a6b7fc7;  */

undefined1  [16] FUN_10a6b75ac(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  uint3 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  double dVar18;
  undefined8 uVar19;
  int iVar21;
  undefined1 auVar20 [16];
  double dVar22;
  int iVar24;
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  long *plStack_4c8;
  long *plStack_4c0;
  uint3 uStack_4b8;
  undefined5 uStack_4b5;
  undefined3 uStack_4b0;
  undefined5 uStack_4ad;
  undefined3 uStack_4a8;
  undefined5 uStack_4a5;
  undefined3 uStack_4a0;
  undefined5 uStack_49d;
  undefined4 uStack_498;
  undefined8 uStack_490;
  long lStack_488;
  undefined8 *puStack_480;
  undefined4 *puStack_478;
  undefined4 *puStack_470;
  undefined4 *puStack_468;
  undefined8 uStack_460;
  int *piStack_458;
  undefined8 *puStack_450;
  undefined8 *puStack_448;
  undefined1 *puStack_440;
  code *pcStack_438;
  long lStack_428;
  undefined8 *puStack_420;
  undefined8 uStack_418;
  float *pfStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e0;
  long lStack_3d8;
  long *plStack_3d0;
  long alStack_3c8 [2];
  undefined4 uStack_3b8;
  undefined8 uStack_3b4;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  long lStack_380;
  long lStack_378;
  undefined8 *puStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined4 auStack_358 [2];
  undefined4 *puStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long lStack_308;
  long lStack_300;
  undefined1 *puStack_2f8;
  undefined1 auStack_2f0 [16];
  undefined1 auStack_2e0 [4];
  int iStack_2dc;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2a8;
  ulong uStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 auStack_278 [24];
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_208;
  long lStack_200;
  undefined1 *puStack_1f8;
  undefined1 auStack_1f0 [272];
  undefined4 uStack_e0;
  int iStack_dc;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  int aiStack_80 [2];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = *(long *)(param_2 + 0x18);
  FUN_10a6b6384(&uStack_418,param_3,0x4e);
  FUN_10a6c1f6c(auStack_278,&uStack_418);
  lVar12 = *plStack_3d0;
  iVar21 = (int)*(float *)((long)pfStack_408 + lVar12 * 0x1b + 4);
  iVar24 = (int)*(float *)((long)pfStack_408 + lVar12 * 0x21 + 4);
  auVar20._0_8_ = (long)(int)*pfStack_408;
  auVar20._8_8_ = (long)iVar21;
  auVar20 = NEON_scvtf(auVar20,8);
  auVar25._0_8_ = (long)(((int)pfStack_408[lVar12 * 4] - (int)*pfStack_408) + 1);
  auVar25._8_8_ = (long)((iVar24 - iVar21) + 1);
  auVar25 = NEON_scvtf(auVar25,8);
  auVar23._0_8_ = (long)(int)pfStack_408[lVar12 * 4];
  auVar23._8_8_ = (long)iVar24;
  auVar23 = NEON_scvtf(auVar23,8);
  dVar18 = (auVar23._0_8_ + auVar25._0_8_ * 0.7) - (auVar20._0_8_ + auVar25._0_8_ * -0.7);
  dVar22 = (auVar23._8_8_ + auVar25._8_8_ * 2.8) - (auVar20._8_8_ + auVar25._8_8_ * -3.2);
  if (dVar22 <= dVar18) {
    dVar22 = dVar18;
  }
  uVar6 = (int)(((dVar22 + 1.0) * 3.0) / 320.0) * 3;
  uVar2 = (int)uVar6 / 2;
  uVar3 = -(uVar2 & 1);
  if (-1 < (int)uVar2) {
    uVar3 = uVar2 & 1;
  }
  iVar21 = (int)uVar6 >> 1;
  if ((uVar6 & 1) != 0) {
    iVar21 = uVar3 + uVar2;
  }
  uStack_258 = 0x10000000100;
  func_0x000109a829e8(&uStack_240,&uStack_258,0);
  lStack_428 = lVar15;
  puStack_420 = param_1;
  FUN_10a003124(&uStack_e0,&uStack_240);
  func_0x00010918eb6c(&uStack_240);
  lVar12 = 0;
  aiStack_80[0] = 0x4c;
  aiStack_80[1] = 0x4d;
  do {
    uVar19 = *(undefined8 *)
              ((long)pfStack_408 + *plStack_3d0 * (long)*(int *)((long)aiStack_80 + lVar12));
    uStack_258 = CONCAT44(uStack_258._4_4_,0x83010000);
    uStack_248 = 0;
    uStack_260 = CONCAT44((int)(float)((ulong)uVar19 >> 0x20),(int)(float)uVar19);
    uStack_240 = (undefined1 *)0x406fe00000000000;
    uStack_230 = 0;
    uStack_228 = 0;
    puStack_238 = (undefined1 *)0x0;
    puStack_250 = &uStack_e0;
    func_0x000109aee350(&uStack_258,&uStack_260,iVar21,&uStack_240,0xffffffff,8,0);
    lVar12 = lVar12 + 4;
  } while (lVar12 != 8);
  iStack_2dc = iStack_dc;
  uStack_2a0 = (ulong)auStack_2e0 | 8;
  lStack_2a8 = lStack_a8;
  uStack_290 = 0;
  uStack_288 = 0;
  if (iStack_dc < 3) {
    puVar13 = (undefined8 *)((ulong)&uStack_e0 | 4);
    uStack_290 = *puStack_98;
    uStack_288 = puStack_98[1];
    uStack_e0 = 0x42ff0000;
    puVar13[1] = 0;
    *puVar13 = 0;
    puVar13[3] = 0;
    puVar13[2] = 0;
    puVar13[5] = 0;
    puVar13[4] = 0;
    *(undefined8 *)((long)puVar13 + 0x34) = 0;
    *(undefined8 *)((long)puVar13 + 0x2c) = 0;
    puStack_298 = &uStack_290;
    if (puStack_98 != &uStack_90) {
      _free(puStack_98[-1]);
    }
  }
  else {
    uStack_2a0 = (ulong)puStack_a0;
    puStack_298 = puStack_98;
  }
  FUN_109fed8e4(auStack_278,auStack_2e0);
  if (lStack_2a8 != 0) {
    piVar1 = (int *)(lStack_2a8 + 0x14);
    do {
      iVar21 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar21 + -1 == 0) {
      func_0x000109a848d4(auStack_2e0);
    }
  }
  lStack_2a8 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  if (0 < iStack_2dc) {
    lVar12 = 0;
    do {
      *(undefined4 *)(uStack_2a0 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < iStack_2dc);
  }
  if (puStack_298 != &uStack_290 && puStack_298 != (undefined8 *)0x0) {
    _free(puStack_298[-1]);
  }
  uStack_258 = 0x2a00000024;
  aiStack_80[0] = -0x80000000;
  aiStack_80[1] = 0x7fffffff;
  func_0x000109a84930(auStack_2e0,&uStack_418,&uStack_258,aiStack_80);
  uStack_d8._4_4_ = 0;
  uStack_d0 = 0;
  iStack_dc = 0;
  uStack_d8._0_4_ = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  puStack_a0 = &uStack_d8;
  uStack_b4 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  lStack_a8 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_e0 = 0x42ff0005;
  puStack_98 = &uStack_90;
  func_0x000109390e94(&uStack_e0,auStack_2e0);
  FUN_10a6c2b88(&uStack_240,&uStack_e0,0x100,0x100);
  FUN_109fed8e4(auStack_278,&uStack_240);
  if (lStack_208 != 0) {
    piVar1 = (int *)(lStack_208 + 0x14);
    do {
      iVar21 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar21 + -1 == 0) {
      func_0x000109a848d4(&uStack_240);
    }
  }
  lStack_208 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  if (0 < uStack_240._4_4_) {
    lVar12 = 0;
    do {
      *(undefined4 *)(lStack_200 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < uStack_240._4_4_);
  }
  if (puStack_1f8 != auStack_1f0 && puStack_1f8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_1f8 + -8));
  }
  if (lStack_a8 != 0) {
    piVar1 = (int *)(lStack_a8 + 0x14);
    do {
      iVar21 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar21 + -1 == 0) {
      func_0x000109a848d4(&uStack_e0);
    }
  }
  lStack_a8 = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  if (0 < iStack_dc) {
    lVar12 = 0;
    do {
      *(undefined4 *)((long)puStack_a0 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < iStack_dc);
  }
  if (puStack_98 != &uStack_90 && puStack_98 != (undefined8 *)0x0) {
    _free(puStack_98[-1]);
  }
  if (lStack_2a8 != 0) {
    piVar1 = (int *)(lStack_2a8 + 0x14);
    do {
      iVar21 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar21 + -1 == 0) {
      func_0x000109a848d4(auStack_2e0);
    }
  }
  lStack_2a8 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  if (0 < iStack_2dc) {
    lVar12 = 0;
    do {
      *(undefined4 *)(uStack_2a0 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < iStack_2dc);
  }
  if (puStack_298 != &uStack_290 && puStack_298 != (undefined8 *)0x0) {
    _free(puStack_298[-1]);
  }
  uStack_258 = 0x300000002a;
  aiStack_80[0] = -0x80000000;
  aiStack_80[1] = 0x7fffffff;
  func_0x000109a84930(auStack_2e0,&uStack_418,&uStack_258,aiStack_80);
  uStack_d8._4_4_ = 0;
  uStack_d0 = 0;
  iStack_dc = 0;
  uStack_d8._0_4_ = 0;
  puStack_a0 = &uStack_d8;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_b4 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  lStack_a8 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_e0 = 0x42ff0005;
  puStack_98 = &uStack_90;
  func_0x000109390e94(&uStack_e0,auStack_2e0);
  FUN_10a6c2b88(&uStack_240,&uStack_e0,0x100,0x100);
  FUN_109fed8e4(auStack_278,&uStack_240);
  if (lStack_208 != 0) {
    piVar1 = (int *)(lStack_208 + 0x14);
    do {
      iVar21 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar21 + -1 == 0) {
      func_0x000109a848d4(&uStack_240);
    }
  }
  lStack_208 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  if (0 < uStack_240._4_4_) {
    lVar12 = 0;
    do {
      *(undefined4 *)(lStack_200 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < uStack_240._4_4_);
  }
  if (puStack_1f8 != auStack_1f0 && puStack_1f8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_1f8 + -8));
  }
  if (lStack_a8 != 0) {
    piVar1 = (int *)(lStack_a8 + 0x14);
    do {
      iVar21 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar21 + -1 == 0) {
      func_0x000109a848d4(&uStack_e0);
    }
  }
  lStack_a8 = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  if (0 < iStack_dc) {
    lVar12 = 0;
    do {
      *(undefined4 *)((long)puStack_a0 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < iStack_dc);
  }
  if (puStack_98 != &uStack_90 && puStack_98 != (undefined8 *)0x0) {
    _free(puStack_98[-1]);
  }
  if (lStack_2a8 != 0) {
    piVar1 = (int *)(lStack_2a8 + 0x14);
    do {
      iVar21 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar21 + -1 == 0) {
      func_0x000109a848d4(auStack_2e0);
    }
  }
  lStack_2a8 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  if (0 < iStack_2dc) {
    lVar12 = 0;
    do {
      *(undefined4 *)(uStack_2a0 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < iStack_2dc);
  }
  if (puStack_298 != &uStack_290 && puStack_298 != (undefined8 *)0x0) {
    _free(puStack_298[-1]);
  }
  uStack_3b8 = 0x42ff0000;
  uStack_3ac = 0;
  uStack_3a8 = 0;
  uStack_3b4 = 0;
  lStack_378 = (long)&uStack_3b4 + 4;
  uStack_39c = 0;
  uStack_398 = 0;
  uStack_3a4 = 0;
  uStack_3a0 = 0;
  uStack_38c = 0;
  uStack_394 = 0;
  uStack_390 = 0;
  lStack_380 = 0;
  uStack_388 = 0;
  uStack_384 = 0;
  uStack_368 = 0;
  uStack_360 = 0;
  uStack_240 = (undefined1 *)CONCAT44(uStack_240._4_4_,0x1050000);
  uStack_230 = 0;
  uStack_e0 = 0x2010000;
  uStack_d0 = 0;
  uStack_cc = 0;
  puStack_370 = &uStack_368;
  puStack_238 = auStack_278;
  uStack_d8 = &uStack_3b8;
  func_0x000109a3ecac(&uStack_240,&uStack_e0);
  uStack_240 = auStack_278;
  FUN_109ffe3e8(&uStack_240);
  uStack_348 = 0;
  auStack_358[0] = 0x1010000;
  puStack_350 = &uStack_3b8;
  FUN_10a0f4340(&uStack_340,auStack_358,5);
  puVar7 = uStack_d8;
  if (lStack_380 != 0) {
    piVar1 = (int *)(lStack_380 + 0x14);
    do {
      iVar21 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar21 + -1 == 0) {
      func_0x000109a848d4(&uStack_3b8);
      puVar7 = uStack_d8;
    }
  }
  lStack_380 = 0;
  uStack_3a0 = 0;
  uStack_39c = 0;
  uStack_3a8 = 0;
  uStack_3a4 = 0;
  uStack_390 = 0;
  uStack_38c = 0;
  uStack_398 = 0;
  uStack_394 = 0;
  if (0 < (int)uStack_3b4) {
    lVar12 = 0;
    do {
      *(undefined4 *)(lStack_378 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)uStack_3b4);
  }
  uStack_d8 = puVar7;
  if (puStack_370 != &uStack_368 && puStack_370 != (undefined8 *)0x0) {
    _free(puStack_370[-1]);
  }
  uVar19 = *(undefined8 *)(lStack_428 + 0x870);
  puVar13 = &uStack_340;
  puVar8 = puStack_420;
  FUN_10a6b28e4();
  if (lStack_308 != 0) {
    piVar1 = (int *)(lStack_308 + 0x14);
    do {
      iVar21 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar21 + -1 == 0) {
      puVar8 = &uStack_340;
      func_0x000109a848d4();
    }
  }
  lStack_308 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  if (0 < uStack_340._4_4_) {
    lVar12 = 0;
    do {
      *(undefined4 *)(lStack_300 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < uStack_340._4_4_);
  }
  if (puStack_2f8 != auStack_2f0 && puStack_2f8 != (undefined1 *)0x0) {
    puVar8 = *(undefined8 **)(puStack_2f8 + -8);
    _free();
  }
  if (lStack_3e0 != 0) {
    piVar1 = (int *)(lStack_3e0 + 0x14);
    do {
      iVar21 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar21 + -1 == 0) {
      puVar8 = &uStack_418;
      func_0x000109a848d4();
    }
  }
  lStack_3e0 = 0;
  uStack_400 = 0;
  pfStack_408 = (float *)0x0;
  uStack_3f0 = 0;
  uStack_3f8 = 0;
  if (0 < uStack_418._4_4_) {
    lVar12 = 0;
    do {
      *(undefined4 *)(lStack_3d8 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < uStack_418._4_4_);
  }
  if (plStack_3d0 != alStack_3c8 && plStack_3d0 != (long *)0x0) {
    puVar8 = (undefined8 *)plStack_3d0[-1];
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    auVar26._8_8_ = uVar19;
    auVar26._0_8_ = puVar8;
    return auVar26;
  }
  ___stack_chk_fail();
  if ((int)uVar19 != 0) {
    func_0x000104bd46a0();
    func_0x00010567aa40(&uStack_340);
    func_0x00010938f90c(&uStack_418);
  }
  puVar9 = puVar8;
  __Unwind_Resume();
  uStack_460 = 0x83010000;
  pcStack_438 = FUN_10a6b7fc8;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = 0;
  puStack_480 = &uStack_90;
  puStack_478 = &uStack_e0;
  puStack_470 = &uStack_3b8;
  puStack_468 = &uStack_3b8;
  piStack_458 = aiStack_80;
  puStack_450 = &uStack_368;
  puStack_448 = puVar8;
  puStack_440 = &stack0xfffffffffffffff0;
  FUN_10a2421c8();
  FUN_10a244d68();
  pbVar14 = (byte *)(lVar12 + 0x20);
  if (((*pbVar14 & 1) == 0) && (*(int *)(lVar12 + 0x24) == 0)) {
    uStack_4ad = 0;
    uStack_4a8 = 0;
    uStack_4b5 = 0;
    uStack_4b0 = 0;
    uStack_49d = 0;
    uStack_4a5 = 0;
    uStack_4a0 = 0;
    *(undefined8 *)(lVar12 + 0x40) = 0x17d;
    *(undefined8 *)(lVar12 + 0x55) = 0;
    *(ulong *)(lVar12 + 0x4d) = (ulong)uStack_4b8;
    uStack_498 = 0;
    *(undefined4 *)(lVar12 + 0x6d) = 0;
    *(undefined2 *)(lVar12 + 0x4a) = 0;
    *(undefined1 *)(lVar12 + 0x4c) = 0;
    *(undefined8 *)(lVar12 + 0x65) = 0;
    *(undefined8 *)(lVar12 + 0x5d) = 0;
  }
  *(int *)(lVar12 + 0x24) = *(int *)(lVar12 + 0x24) + 1;
  FUN_10a6d1844(&uStack_4b8,&plStack_4c8);
  func_0x00010a8c5f40(CONCAT53(uStack_4b5,uStack_4b8),uVar19);
  plVar10 = (long *)0xe8;
  __Znwm();
  plVar17 = plVar10 + 1;
  *plVar17 = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&PTR_FUN_110c114e0;
  plVar16 = plVar10 + 3;
  plVar10[4] = 0;
  *plVar16 = 0;
  plVar10[0x1c] = 0;
  plVar10[0x1b] = 0;
  plVar10[6] = 0;
  plVar10[5] = 0;
  plVar10[8] = 0;
  plVar10[7] = 0;
  plVar10[10] = 0;
  plVar10[9] = 0;
  plVar10[0xc] = 0;
  plVar10[0xb] = 0;
  plVar10[0xe] = 0;
  plVar10[0xd] = 0;
  plVar10[0x10] = 0;
  plVar10[0xf] = 0;
  plVar10[0x12] = 0;
  plVar10[0x11] = 0;
  plVar10[0x14] = 0;
  plVar10[0x13] = 0;
  plVar10[0x16] = 0;
  plVar10[0x15] = 0;
  plVar10[0x18] = 0;
  plVar10[0x17] = 0;
  plVar10[0x1a] = 0;
  plVar10[0x19] = 0;
  *(undefined4 *)(plVar10 + 0x1b) = 0x3f800000;
  *(undefined4 *)puVar9 = 0x42ff0000;
  puVar9[7] = 0;
  puVar9[6] = 0;
  *(undefined8 *)((long)puVar9 + 0x2c) = 0;
  *(undefined8 *)((long)puVar9 + 0x24) = 0;
  *(undefined8 *)((long)puVar9 + 0x1c) = 0;
  *(undefined8 *)((long)puVar9 + 0x14) = 0;
  *(undefined8 *)((long)puVar9 + 0xc) = 0;
  *(undefined8 *)((long)puVar9 + 4) = 0;
  puVar9[10] = 0;
  puVar9[8] = puVar9 + 1;
  puVar9[9] = puVar9 + 10;
  puVar9[0xb] = 0;
  uStack_490 = NEON_rev64(*puVar13,4);
  plStack_4c8 = plVar16;
  plStack_4c0 = plVar10;
  func_0x000109a83fd0(puVar9,2,&uStack_490,0x1d);
  puVar11 = &uStack_4b8;
  FUN_10a8cac00(plVar16,puVar11,lVar12,puVar9);
  do {
    lVar12 = *plVar17;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar5) {
      *plVar17 = lVar12 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar12 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
  }
  plVar10 = (long *)CONCAT53(uStack_4ad,uStack_4b0);
  if (plVar10 != (long *)0x0) {
    plVar16 = plVar10 + 1;
    do {
      lVar12 = *plVar16;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  func_0x00010a5dfd48(pbVar14);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    auVar27._8_8_ = puVar11;
    auVar27._0_8_ = pbVar14;
    return auVar27;
  }
  ___stack_chk_fail();
  __Unwind_Resume(pbVar14);
  func_0x000104bd46a0(pbVar14);
  auVar28._8_8_ = 0x25;
  auVar28._0_8_ = &UNK_10f66dbf7;
  return auVar28;
}



/* Entry: 10a6b7fc8; end: 10a6b8253;  */

undefined1  [16] FUN_10a6b7fc8(undefined4 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  uint3 *puVar5;
  byte *pbVar6;
  long *plVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long *plStack_98;
  long *plStack_90;
  uint3 uStack_88;
  undefined5 uStack_85;
  undefined3 uStack_80;
  undefined5 uStack_7d;
  undefined3 uStack_78;
  undefined5 uStack_75;
  undefined3 uStack_70;
  undefined5 uStack_6d;
  undefined4 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = 0;
  FUN_10a2421c8();
  FUN_10a244d68();
  pbVar6 = (byte *)(lVar3 + 0x20);
  if (((*pbVar6 & 1) == 0) && (*(int *)(lVar3 + 0x24) == 0)) {
    uStack_7d = 0;
    uStack_78 = 0;
    uStack_85 = 0;
    uStack_80 = 0;
    uStack_6d = 0;
    uStack_75 = 0;
    uStack_70 = 0;
    *(undefined8 *)(lVar3 + 0x40) = 0x17d;
    *(undefined8 *)(lVar3 + 0x55) = 0;
    *(ulong *)(lVar3 + 0x4d) = (ulong)uStack_88;
    uStack_68 = 0;
    *(undefined4 *)(lVar3 + 0x6d) = 0;
    *(undefined2 *)(lVar3 + 0x4a) = 0;
    *(undefined1 *)(lVar3 + 0x4c) = 0;
    *(undefined8 *)(lVar3 + 0x65) = 0;
    *(undefined8 *)(lVar3 + 0x5d) = 0;
  }
  *(int *)(lVar3 + 0x24) = *(int *)(lVar3 + 0x24) + 1;
  FUN_10a6d1844(&uStack_88,&plStack_98);
  func_0x00010a8c5f40(CONCAT53(uStack_85,uStack_88),param_2);
  plVar4 = (long *)0xe8;
  __Znwm();
  plVar8 = plVar4 + 1;
  *plVar8 = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110c114e0;
  plVar7 = plVar4 + 3;
  plVar4[4] = 0;
  *plVar7 = 0;
  plVar4[0x1c] = 0;
  plVar4[0x1b] = 0;
  plVar4[6] = 0;
  plVar4[5] = 0;
  plVar4[8] = 0;
  plVar4[7] = 0;
  plVar4[10] = 0;
  plVar4[9] = 0;
  plVar4[0xc] = 0;
  plVar4[0xb] = 0;
  plVar4[0xe] = 0;
  plVar4[0xd] = 0;
  plVar4[0x10] = 0;
  plVar4[0xf] = 0;
  plVar4[0x12] = 0;
  plVar4[0x11] = 0;
  plVar4[0x14] = 0;
  plVar4[0x13] = 0;
  plVar4[0x16] = 0;
  plVar4[0x15] = 0;
  plVar4[0x18] = 0;
  plVar4[0x17] = 0;
  plVar4[0x1a] = 0;
  plVar4[0x19] = 0;
  *(undefined4 *)(plVar4 + 0x1b) = 0x3f800000;
  *param_1 = 0x42ff0000;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  uStack_60 = NEON_rev64(*param_3,4);
  plStack_98 = plVar7;
  plStack_90 = plVar4;
  func_0x000109a83fd0(param_1,2,&uStack_60,0x1d);
  puVar5 = &uStack_88;
  FUN_10a8cac00(plVar7,puVar5,lVar3,param_1);
  do {
    lVar3 = *plVar8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = lVar3 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  plVar4 = (long *)CONCAT53(uStack_7d,uStack_80);
  if (plVar4 != (long *)0x0) {
    plVar7 = plVar4 + 1;
    do {
      lVar3 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  func_0x00010a5dfd48(pbVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    auVar9._8_8_ = puVar5;
    auVar9._0_8_ = pbVar6;
    return auVar9;
  }
  ___stack_chk_fail();
  __Unwind_Resume(pbVar6);
  func_0x000104bd46a0(pbVar6);
  auVar10._8_8_ = 0x25;
  auVar10._0_8_ = &UNK_10f66dbf7;
  return auVar10;
}



/* Entry: 10a6b8254; end: 10a6b8263;  */

undefined1  [16] FUN_10a6b8254(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x25;
  auVar1._0_8_ = &UNK_10f66dbf7;
  return auVar1;
}



/* Entry: 10a6b8264; end: 10a6b82c7;  */

bool FUN_10a6b8264(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x25) {
    iVar1 = 0xf66dbf7;
    _memcmp(&UNK_10f66dbf7);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a6b82c8; end: 10a6b8667;  */

void FUN_10a6b82c8(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *extraout_x8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined **ppuStack_98;
  code *pcStack_90;
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
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000109887da8(appuStack_c8,&UNK_10f66dbf7,0x25);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c10658;
  pppuVar2 = (undefined8 ***)"";
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x124;
  uStack_50 = 0x13c;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c10658;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    ppuStack_98 = (undefined **)0x0;
    pcStack_90 = (code *)CONCAT71(pcStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6b863c;
    FUN_10a054dac(param_1,&UNK_10f66cdf4,FUN_10a6d1df0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6b863c;
    FUN_10a054dac(param_1,&UNK_10f66ce02,FUN_10a6d1f74,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6b863c;
    FUN_10a054dac(param_1,&DAT_10f3eb7f7,FUN_10a6d2468,2,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    ppuStack_98 = *(undefined ***)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar9 = *(ulong *)(lVar3 + -0x48);
    uVar10 = *(ulong *)(lVar3 + -0x50);
    pcStack_90 = *(code **)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar11 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar11;
    uStack_4c = (undefined4)(uVar11 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar10 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar10;
    uStack_80 = uVar9;
    FUN_10a0051e8(param_1,uVar10 & 0xffffffff,uVar4,uVar11 & 0xffffffff,uVar9 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f66dbf7,0x25);
      FUN_10a05431c(param_1);
    }
    ppuStack_98 = (undefined **)0x0;
    pcStack_90 = (code *)0x0;
    ppuStack_a0 = (undefined8 **)&UNK_10f655033;
    uStack_80 = 0xffffffffffffffff;
    uStack_88 = 0x200000019;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_a0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,0x19,1,0x13c,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      ppuStack_a0 = (undefined8 **)FUN_10a6d2564;
      ppuStack_98 = &PTR_FUN_110c11148;
      pcStack_90 = FUN_10a6b8668;
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a6b863c;
      FUN_10a0544d8(param_1,&DAT_10f68efec,&ppuStack_a0,0,*(long *)(param_1 + 0x18) + -8);
      (*(code *)*ppuStack_98)(&ppuStack_98);
    }
    func_0x00010a004064();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
    if (cStack_b1 < '\0') {
      __ZdlPv(appuStack_c8[0]);
    }
    __Unwind_Resume();
    puVar8 = (undefined8 *)0x38;
    __Znwm();
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_FUN_110c11170;
    puVar8[3] = &PTR_FUN_110c0ff88;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = param_1;
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f66ce0c,&UNK_10f66ce55,0x1b,&UNK_10f66ceb2);
    }
    *extraout_x8 = puVar8 + 3;
    extraout_x8[1] = puVar8;
    return;
  }
LAB_10a6b863c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a6b8640);
  (*pcVar6)();
}



/* Entry: 10a6b8668; end: 10a6b8733;  */

void FUN_10a6b8668(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110c11170;
  puVar1[3] = &PTR_FUN_110c0ff88;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = param_2;
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f66ce0c,&UNK_10f66ce55,0x1b,&UNK_10f66ceb2);
  }
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a6b8734; end: 10a6b8b67;  */

undefined1  [16] FUN_10a6b8734(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long **pplVar6;
  code *pcVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *****pppppuVar10;
  undefined8 *****pppppuVar11;
  undefined8 ***pppuVar12;
  undefined1 *puVar13;
  long **pplVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  long *plVar20;
  long lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uStack_290;
  long *plStack_288;
  undefined8 uStack_280;
  long *plStack_278;
  undefined1 auStack_268 [80];
  long lStack_218;
  long *plStack_210;
  undefined8 ****ppppuStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  code **ppcStack_1f0;
  long *plStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  undefined8 ****ppppuStack_1c0;
  ulong uStack_1b8;
  byte bStack_1a9;
  undefined4 uStack_1a8;
  int iStack_1a4;
  uint auStack_1a0 [12];
  long lStack_170;
  uint *puStack_168;
  long *plStack_160;
  long alStack_158 [2];
  undefined8 ***pppuStack_148;
  undefined8 uStack_140;
  long alStack_138 [7];
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [56];
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f66ce0c,&UNK_10f66cedc,0x1f,&UNK_10f66cf4c);
  }
  uStack_1a8 = 0xf66cf63;
  iStack_1a4 = 1;
  auStack_1a0[0] = 0x14;
  auStack_1a0[1] = 0;
  if (*(ulong *)(*param_2 + 8) < 0x88) {
    FUN_10a0edfc4(&uStack_1a8);
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10a6b8acc);
    (*pcVar7)();
  }
  uStack_1a8 = 0x42ff0000;
  puStack_168 = auStack_1a0;
  auStack_1a0[1] = 0;
  auStack_1a0[2] = 0;
  iStack_1a4 = 0;
  auStack_1a0[0] = 0;
  auStack_1a0[5] = 0;
  auStack_1a0[6] = 0;
  auStack_1a0[3] = 0;
  auStack_1a0[4] = 0;
  auStack_1a0[9] = 0;
  auStack_1a0[7] = 0;
  auStack_1a0[8] = 0;
  lStack_170 = 0;
  auStack_1a0[10] = 0;
  auStack_1a0[0xb] = 0;
  alStack_158[0] = 0;
  alStack_158[1] = 0;
  puStack_b8 = (undefined8 *)0x200000044;
  plStack_160 = alStack_158;
  func_0x000109a83fd0(&uStack_1a8,2,&puStack_b8,5);
  uVar16 = (ulong)auStack_1a0[0];
  if (0 < (int)auStack_1a0[0]) {
    lVar17 = *plStack_160;
    puVar19 = (undefined4 *)(CONCAT44(auStack_1a0[3],auStack_1a0[2]) + 4);
    puVar18 = (undefined4 *)(*(long *)*param_2 + 4);
    do {
      puVar19[-1] = puVar18[-1];
      *puVar19 = *puVar18;
      puVar19 = (undefined4 *)((long)puVar19 + lVar17);
      uVar16 = uVar16 - 1;
      puVar18 = puVar18 + 2;
    } while (uVar16 != 0);
  }
  FUN_109feb738(&ppppuStack_1c0,&uStack_1a8);
  pppppuVar10 = (undefined8 *****)ppppuStack_1c0;
  if (-1 < (char)bStack_1a9) {
    uStack_1b8 = (ulong)bStack_1a9;
    pppppuVar10 = &ppppuStack_1c0;
  }
  FUN_10a3bf330(alStack_158 + 2,pppppuVar10,uStack_1b8);
  lVar21 = *(long *)(*(long *)(param_1 + 0x18) + 0x100);
  plVar8 = (long *)0x138;
  __Znwm();
  puStack_b8 = pppuStack_148;
  plVar20 = plVar8 + 1;
  *plVar20 = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_110b9f3b0;
  plVar2 = plVar8 + 3;
  pppuStack_148 = (undefined8 ***)0x0;
  uStack_b0 = uStack_140;
  (**(code **)(alStack_138[0] + 0x10))(auStack_a8,alStack_138);
  uStack_70 = uStack_100;
  uVar16 = *(ulong *)(lVar21 + 0x210);
  lVar17 = *(long *)(lVar21 + 0x208);
  if (-1 < (char)*(byte *)(lVar21 + 0x21f)) {
    uVar16 = (ulong)*(byte *)(lVar21 + 0x21f);
    lVar17 = lVar21 + 0x208;
  }
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  ppcStack_1f0 = &pcStack_f8;
  pcStack_f8 = FUN_10a282dc4;
  ppuStack_f0 = &PTR_DAT_110ae9180;
  FUN_10a6ac5b4(plVar2,&UNK_10e4d3b9c,0x1b,"POST",4,&puStack_b8,lVar17,uVar16);
  (*(code *)*ppuStack_f0)(&ppuStack_f0);
  FUN_10a042634(&puStack_b8);
  uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x940);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar5) {
      *plVar20 = *plVar20 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  pplVar14 = &plStack_1e0;
  plStack_1e0 = plVar2;
  plStack_1d8 = plVar8;
  plStack_1d0 = plVar2;
  plStack_1c8 = plVar8;
  FUN_10a25f3f4(uVar9);
  do {
    lVar17 = *plVar20;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar5) {
      *plVar20 = lVar17 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar17 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
  }
  plVar2 = plStack_1c8;
  if (plStack_1c8 != (long *)0x0) {
    plVar20 = plStack_1c8 + 1;
    do {
      lVar17 = *plVar20;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar5) {
        *plVar20 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  pppppuVar10 = (undefined8 *****)(alStack_158 + 2);
  FUN_10a042634();
  if ((char)bStack_1a9 < '\0') {
    pppppuVar10 = (undefined8 *****)ppppuStack_1c0;
    __ZdlPv();
  }
  if (lStack_170 != 0) {
    piVar1 = (int *)(lStack_170 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      pppppuVar10 = (undefined8 *****)&uStack_1a8;
      func_0x000109a848d4();
    }
  }
  lStack_170 = 0;
  auStack_1a0[4] = 0;
  auStack_1a0[5] = 0;
  auStack_1a0[2] = 0;
  auStack_1a0[3] = 0;
  auStack_1a0[8] = 0;
  auStack_1a0[9] = 0;
  auStack_1a0[6] = 0;
  auStack_1a0[7] = 0;
  if (0 < iStack_1a4) {
    lVar17 = 0;
    do {
      puStack_168[lVar17] = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < iStack_1a4);
  }
  if (plStack_160 != alStack_158 && plStack_160 != (long *)0x0) {
    pppppuVar10 = (undefined8 *****)plStack_160[-1];
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    if ((int)pplVar14 != 0) {
      func_0x000104bd46a0();
      FUN_10a05bd88(&plStack_1e0);
      FUN_10a05bd88(&plStack_1d0);
      FUN_10a042634(alStack_158 + 2);
      if ((char)bStack_1a9 < '\0') {
        __ZdlPv(ppppuStack_1c0);
      }
      func_0x00010938f90c(&uStack_1a8);
    }
    pppppuVar11 = pppppuVar10;
    __Unwind_Resume();
    puVar15 = &uStack_290;
    pcStack_1f8 = FUN_10a6b8b68;
    lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar2 = pplVar14[1];
    pplVar6 = (long **)*pplVar14;
    if (-1 < (char)*(byte *)((long)pplVar14 + 0x17)) {
      plVar2 = (long *)(ulong)*(byte *)((long)pplVar14 + 0x17);
      pplVar6 = pplVar14;
    }
    plStack_210 = plVar8;
    ppppuStack_208 = pppppuVar10;
    puStack_200 = &stack0xfffffffffffffff0;
    FUN_10a3bf330(auStack_268,pplVar6,plVar2);
    FUN_10a6d26e4(&uStack_280,&UNK_10e4d3bd0,auStack_268,pppppuVar11[3][0x20] + 0x41);
    plVar2 = plStack_278;
    pppuVar12 = pppppuVar11[3][0x128];
    plStack_288 = plStack_278;
    uStack_290 = uStack_280;
    if (plStack_278 != (long *)0x0) {
      plVar8 = plStack_278 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = *plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_10a25f3f4(pppuVar12,&uStack_290);
    if (plVar2 != (long *)0x0) {
      plVar8 = plVar2 + 1;
      do {
        lVar17 = *plVar8;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = lVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    if (plStack_278 != (long *)0x0) {
      plVar2 = plStack_278 + 1;
      do {
        lVar17 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_278 + 0x10))(plStack_278);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_278);
      }
    }
    puVar13 = auStack_268;
    FUN_10a042634(puVar13);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_218) {
      ___stack_chk_fail();
      FUN_10a05bd88(&uStack_290);
      FUN_10a05bd88(&uStack_280);
      FUN_10a042634(auStack_268);
      __Unwind_Resume(puVar13);
      auVar24._8_8_ = 0x2a;
      auVar24._0_8_ = &UNK_10f66dc1d;
      return auVar24;
    }
    auVar23._8_8_ = puVar15;
    auVar23._0_8_ = puVar13;
    return auVar23;
  }
  auVar22._8_8_ = pplVar14;
  auVar22._0_8_ = pppppuVar10;
  return auVar22;
}



/* Entry: 10a6b8b68; end: 10a6b8cd3;  */

undefined1  [16] FUN_10a6b8b68(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined1 auStack_78 [80];
  long lStack_28;
  
  puVar9 = &uStack_a0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = param_2[1];
  puVar6 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar3 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar6 = param_2;
  }
  FUN_10a3bf330(auStack_78,puVar6,uVar3);
  FUN_10a6d26e4(&uStack_90,&UNK_10e4d3bd0,auStack_78,
                *(long *)(*(long *)(param_1 + 0x18) + 0x100) + 0x208);
  plVar2 = plStack_88;
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x940);
  plStack_98 = plStack_88;
  uStack_a0 = uStack_90;
  if (plStack_88 != (long *)0x0) {
    plVar1 = plStack_88 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_10a25f3f4(uVar7,&uStack_a0);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
    do {
      lVar10 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  puVar8 = auStack_78;
  FUN_10a042634(puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    FUN_10a05bd88(&uStack_a0);
    FUN_10a05bd88(&uStack_90);
    FUN_10a042634(auStack_78);
    __Unwind_Resume(puVar8);
    auVar12._8_8_ = 0x2a;
    auVar12._0_8_ = &UNK_10f66dc1d;
    return auVar12;
  }
  auVar11._8_8_ = puVar9;
  auVar11._0_8_ = puVar8;
  return auVar11;
}



/* Entry: 10a6b8cd4; end: 10a6b8ce3;  */

undefined1  [16] FUN_10a6b8cd4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x2a;
  auVar1._0_8_ = &UNK_10f66dc1d;
  return auVar1;
}



/* Entry: 10a6b8ce4; end: 10a6b8d47;  */

bool FUN_10a6b8ce4(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x2a) {
    iVar1 = 0xf66dc1d;
    _memcmp(&UNK_10f66dc1d);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a6b8d48; end: 10a6b9177;  */

void FUN_10a6b8d48(ulong param_1)

{
  long *plVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *extraout_x8;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined **ppuStack_98;
  code *pcStack_90;
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
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000109887da8(appuStack_c8,&UNK_10f66dc1d,0x2a);
  pppuVar2 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar2 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c10670;
  pppuVar3 = (undefined8 ***)"";
  if (pppuVar2 != (undefined8 ***)0x0) {
    pppuVar3 = pppuVar2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar3);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x124;
  uStack_50 = 0x13c;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar2;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar9 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c10670;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    ppuStack_98 = (undefined **)0x0;
    pcStack_90 = (code *)CONCAT71(pcStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar2,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar9 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6b914c;
    FUN_10a054dac(param_1,&UNK_10f66d027,FUN_10a6d288c,0xd,*(undefined8 *)(param_1 + 0x40));
  }
  uVar9 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6b914c;
    FUN_10a054dac(param_1,&UNK_10f66d033,FUN_10a6d4628,6,*(undefined8 *)(param_1 + 0x40));
  }
  uVar9 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6b914c;
    FUN_10a054dac(param_1,&UNK_10f66d03b,FUN_10a6d4e20,7,*(undefined8 *)(param_1 + 0x40));
  }
  uVar9 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6b914c;
    FUN_10a054dac(param_1,"debug",FUN_10a6d5b88,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar9 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6b914c;
    FUN_10a054dac(param_1,&UNK_10f66d046,FUN_10a6d5c84,3,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar13 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar13) {
    ppuStack_98 = *(undefined ***)(lVar13 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar13 + -0x68);
    uStack_78 = *(undefined8 *)(lVar13 + -0x40);
    uVar15 = *(ulong *)(lVar13 + -0x48);
    uVar16 = *(ulong *)(lVar13 + -0x50);
    pcStack_90 = *(code **)(lVar13 + -0x58);
    uStack_68 = *(undefined8 *)(lVar13 + -0x30);
    uStack_70 = *(undefined8 *)(lVar13 + -0x38);
    uStack_60 = *(undefined8 *)(lVar13 + -0x28);
    uStack_40 = *(undefined8 *)(lVar13 + -8);
    uStack_48 = *(undefined8 *)(lVar13 + -0x10);
    uVar17 = *(ulong *)(lVar13 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar13 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar13 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar17;
    uStack_4c = (undefined4)(uVar17 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar13 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar16 >> 0x20);
    uVar6 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar15 >> 0x20);
    uVar7 = uStack_80._4_4_;
    uVar9 = param_1;
    uStack_88 = uVar16;
    uStack_80 = uVar15;
    FUN_10a0051e8(param_1,uVar16 & 0xffffffff,uVar6,uVar17 & 0xffffffff,uVar15 & 0xffffffff,uVar7);
    if ((uVar9 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f66dc1d,0x2a);
      FUN_10a05431c(param_1);
    }
    ppuStack_98 = (undefined **)0x0;
    pcStack_90 = (code *)0x0;
    ppuStack_a0 = (undefined8 **)&UNK_10f655015;
    uStack_80 = 0xffffffffffffffff;
    uStack_88 = 0x200000019;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_a0);
    uVar9 = param_1;
    FUN_10a0051e8(param_1,0x19,1,0x13c,0xffffffff,0xffffffff);
    if ((uVar9 & 1) == 0) {
      ppuStack_a0 = (undefined8 **)FUN_10a6d5dac;
      ppuStack_98 = &PTR_FUN_110c111b0;
      pcStack_90 = FUN_10a6b9178;
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a6b914c;
      FUN_10a0544d8(param_1,&DAT_10f68efec,&ppuStack_a0,0,*(long *)(param_1 + 0x18) + -8);
      (*(code *)*ppuStack_98)(&ppuStack_98);
    }
    func_0x00010a004064();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
    if (cStack_b1 < '\0') {
      __ZdlPv(appuStack_c8[0]);
    }
    __Unwind_Resume();
    puVar10 = (undefined8 *)0x128;
    __Znwm();
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &PTR_DAT_110c11268;
    puVar10[3] = &PTR_FUN_110c0ffe0;
    puVar10[4] = 0;
    puVar10[6] = 0;
    puVar10[5] = 0;
    *(undefined4 *)(puVar10 + 9) = 0x42ff0000;
    puVar10[7] = 0;
    puVar10[8] = 0;
    *(undefined8 *)((long)puVar10 + 0x54) = 0;
    *(undefined8 *)((long)puVar10 + 0x4c) = 0;
    *(undefined8 *)((long)puVar10 + 100) = 0;
    *(undefined8 *)((long)puVar10 + 0x5c) = 0;
    *(undefined8 *)((long)puVar10 + 0x74) = 0;
    *(undefined8 *)((long)puVar10 + 0x6c) = 0;
    puVar10[0x10] = 0;
    puVar10[0xf] = 0;
    puVar10[0x14] = 0;
    puVar10[0x13] = 0;
    puVar10[0x11] = puVar10 + 10;
    puVar10[0x12] = puVar10 + 0x13;
    puVar10[0x16] = 0;
    puVar10[0x15] = 0;
    puVar10[0x17] = 0;
    puVar10[0x18] = 0;
    puVar10[0x15] = puVar10 + 0x16;
    *(undefined4 *)(puVar10 + 0x19) = 0x42ff0005;
    *(undefined8 *)((long)puVar10 + 0xd4) = 0;
    *(undefined8 *)((long)puVar10 + 0xcc) = 0;
    *(undefined8 *)((long)puVar10 + 0xe4) = 0;
    *(undefined8 *)((long)puVar10 + 0xdc) = 0;
    *(undefined8 *)((long)puVar10 + 0xf4) = 0;
    *(undefined8 *)((long)puVar10 + 0xec) = 0;
    puVar10[0x20] = 0;
    puVar10[0x1f] = 0;
    puVar10[0x21] = puVar10 + 0x1a;
    puVar10[0x22] = puVar10 + 0x23;
    puVar10[0x23] = 0;
    puVar10[0x24] = 0;
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f66d051,&UNK_10f66d09f,0x2c,&UNK_10f66d106);
    }
    puVar11 = (undefined8 *)0x48;
    __Znwm();
    puVar11[1] = 0;
    puVar11[2] = 0;
    puVar12 = puVar11 + 3;
    *puVar11 = &PTR_FUN_110c111d8;
    FUN_10ab0b580(puVar12,param_1,1);
    plVar14 = (long *)puVar10[7];
    puVar10[6] = puVar12;
    puVar10[7] = puVar11;
    if (plVar14 != (long *)0x0) {
      plVar1 = plVar14 + 1;
      do {
        lVar13 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      }
    }
    puVar10[8] = param_1;
    *extraout_x8 = puVar10 + 3;
    extraout_x8[1] = puVar10;
    return;
  }
LAB_10a6b914c:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a6b9150);
  (*pcVar8)();
}



/* Entry: 10a6b9178; end: 10a6b9377;  */

void FUN_10a6b9178(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  
  puVar4 = (undefined8 *)0x128;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110c11268;
  puVar4[3] = &PTR_FUN_110c0ffe0;
  puVar4[4] = 0;
  puVar4[6] = 0;
  puVar4[5] = 0;
  *(undefined4 *)(puVar4 + 9) = 0x42ff0000;
  puVar4[7] = 0;
  puVar4[8] = 0;
  *(undefined8 *)((long)puVar4 + 0x54) = 0;
  *(undefined8 *)((long)puVar4 + 0x4c) = 0;
  *(undefined8 *)((long)puVar4 + 100) = 0;
  *(undefined8 *)((long)puVar4 + 0x5c) = 0;
  *(undefined8 *)((long)puVar4 + 0x74) = 0;
  *(undefined8 *)((long)puVar4 + 0x6c) = 0;
  puVar4[0x10] = 0;
  puVar4[0xf] = 0;
  puVar4[0x14] = 0;
  puVar4[0x13] = 0;
  puVar4[0x11] = puVar4 + 10;
  puVar4[0x12] = puVar4 + 0x13;
  puVar4[0x16] = 0;
  puVar4[0x15] = 0;
  puVar4[0x17] = 0;
  puVar4[0x18] = 0;
  puVar4[0x15] = puVar4 + 0x16;
  *(undefined4 *)(puVar4 + 0x19) = 0x42ff0005;
  *(undefined8 *)((long)puVar4 + 0xd4) = 0;
  *(undefined8 *)((long)puVar4 + 0xcc) = 0;
  *(undefined8 *)((long)puVar4 + 0xe4) = 0;
  *(undefined8 *)((long)puVar4 + 0xdc) = 0;
  *(undefined8 *)((long)puVar4 + 0xf4) = 0;
  *(undefined8 *)((long)puVar4 + 0xec) = 0;
  puVar4[0x20] = 0;
  puVar4[0x1f] = 0;
  puVar4[0x21] = puVar4 + 0x1a;
  puVar4[0x22] = puVar4 + 0x23;
  puVar4[0x23] = 0;
  puVar4[0x24] = 0;
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f66d051,&UNK_10f66d09f,0x2c,&UNK_10f66d106);
  }
  puVar5 = (undefined8 *)0x48;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar6 = puVar5 + 3;
  *puVar5 = &PTR_FUN_110c111d8;
  FUN_10ab0b580(puVar6,param_2,1);
  plVar8 = (long *)puVar4[7];
  puVar4[6] = puVar6;
  puVar4[7] = puVar5;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  puVar4[8] = param_2;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  return;
}



/* Entry: 10a6b9378; end: 10a6b9827;  */

void FUN_10a6b9378(undefined4 *param_1,undefined8 *param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined8 uStack_288;
  undefined4 *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_250;
  long lStack_248;
  undefined1 *puStack_240;
  undefined1 auStack_238 [16];
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  long alStack_1c0 [34];
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  iVar2 = *(int *)(param_2 + 1);
  iVar3 = *(int *)((long)param_2 + 0xc);
  uStack_210 = (long *)0x242ff0005;
  puStack_1d0 = &uStack_208;
  uStack_208 = (undefined4 *)CONCAT44(iVar2,iVar3);
  lStack_1e8 = 0;
  lStack_1f0 = 0;
  lStack_1d8 = 0;
  uStack_1e0 = 0;
  alStack_1c0[0] = 0;
  alStack_1c0[1] = 0;
  lStack_200 = param_3;
  lStack_1f8 = param_3;
  plStack_1c8 = alStack_1c0;
  if ((param_3 == 0) && ((long)iVar3 * (long)iVar2 != 0)) {
    puVar7 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar7 = 1;
    uStack_288 = puVar7 + 1;
    puStack_280 = (undefined4 *)0x1c;
    *(undefined1 *)(puVar7 + 8) = 0;
    *(undefined8 *)(puVar7 + 3) = 0x207c7c2030203d3d;
    *(undefined8 *)(puVar7 + 1) = 0x2029286c61746f74;
    *(undefined8 *)(puVar7 + 6) = 0x4c4c554e203d2120;
    *(undefined8 *)(puVar7 + 4) = 0x61746164207c7c20;
    func_0x000109ac3188(0xffffff29,&uStack_288,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a6b9778);
    (*pcVar6)();
  }
  uStack_210 = (long *)0x242ff4005;
  alStack_1c0[0] = (long)iVar2 * 4;
  alStack_1c0[1] = 4;
  lStack_1f0 = param_3 + alStack_1c0[0] * iVar3;
  lStack_70 = (long)&uStack_ac + 4;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_ac = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_84 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_b0 = 0x42ff0005;
  lStack_1e8 = lStack_1f0;
  puStack_68 = &uStack_60;
  func_0x000109390e94(&uStack_b0,&uStack_210);
  if (lStack_1d8 != 0) {
    piVar1 = (int *)(lStack_1d8 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_210);
    }
  }
  lStack_1d8 = 0;
  lStack_1f8 = 0;
  lStack_200 = 0;
  lStack_1e8 = 0;
  lStack_1f0 = 0;
  if (0 < uStack_210._4_4_) {
    lVar8 = 0;
    do {
      *(undefined4 *)((long)puStack_1d0 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < uStack_210._4_4_);
  }
  if (plStack_1c8 != alStack_1c0 && plStack_1c8 != (long *)0x0) {
    _free(plStack_1c8[-1]);
  }
  uStack_288 = (undefined4 *)param_2[3];
  func_0x000109a829e8(&uStack_210,&uStack_288,5);
  *param_1 = 0x42ff0000;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  (**(code **)(*uStack_210 + 0x18))(uStack_210,&uStack_210,param_1,0xffffffff);
  func_0x00010918eb6c(&uStack_210);
  func_0x000109a852c8(&uStack_210,&uStack_b0,param_2 + 4);
  func_0x000109a852c8(&uStack_288,param_1,param_2 + 6);
  uStack_228 = CONCAT44(uStack_228._4_4_,0xc2010000);
  uStack_218 = 0;
  puStack_220 = &uStack_288;
  func_0x000109a479a0(&uStack_210,&uStack_228);
  if (lStack_250 != 0) {
    piVar1 = (int *)(lStack_250 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_288);
    }
  }
  lStack_250 = 0;
  uStack_270 = 0;
  uStack_278 = 0;
  uStack_260 = 0;
  uStack_268 = 0;
  if (0 < uStack_288._4_4_) {
    lVar8 = 0;
    do {
      *(undefined4 *)(lStack_248 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < uStack_288._4_4_);
  }
  if (puStack_240 != auStack_238 && puStack_240 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_240 + -8));
  }
  if (lStack_1d8 != 0) {
    piVar1 = (int *)(lStack_1d8 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_210);
    }
  }
  lStack_1d8 = 0;
  lStack_1f8 = 0;
  lStack_200 = 0;
  lStack_1e8 = 0;
  lStack_1f0 = 0;
  if (0 < uStack_210._4_4_) {
    lVar8 = 0;
    do {
      *(undefined4 *)((long)puStack_1d0 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < uStack_210._4_4_);
  }
  if (plStack_1c8 != alStack_1c0 && plStack_1c8 != (long *)0x0) {
    _free(plStack_1c8[-1]);
  }
  lStack_200 = 0;
  uStack_210 = (long *)CONCAT44(uStack_210._4_4_,0x1010000);
  uStack_288 = (undefined4 *)CONCAT44(uStack_288._4_4_,0x2010000);
  uStack_278 = 0;
  uStack_228 = *param_2;
  puStack_280 = param_1;
  uStack_208 = param_1;
  func_0x000109b0f718(0,0,&uStack_210,&uStack_288,&uStack_228,1);
  if (lStack_78 != 0) {
    piVar1 = (int *)(lStack_78 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_b0);
    }
  }
  lStack_78 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  if (0 < (int)uStack_ac) {
    lVar8 = 0;
    do {
      *(undefined4 *)(lStack_70 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)uStack_ac);
  }
  if (puStack_68 != &uStack_60 && puStack_68 != (undefined8 *)0x0) {
    _free(puStack_68[-1]);
  }
  return;
}



/* Entry: 10a6b9828; end: 10a6b98c7;  */

long FUN_10a6b9828(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x40) + 0x14);
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
      func_0x000109a848d4(param_1 + 8);
    }
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x48);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0xc));
  }
  lVar5 = *(long *)(param_1 + 0x50);
  if (lVar5 != param_1 + 0x58 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 10a6b98c8; end: 10a6b9a1f;  */

void FUN_10a6b98c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined4 auStack_d8 [2];
  long *plStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined1 *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_90 [4];
  int iStack_8c;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  long lStack_50;
  undefined1 *puStack_48;
  undefined1 auStack_40 [16];
  
  FUN_10a6b7fc8(auStack_90,param_3,param_2);
  FUN_109ffe2a0(&lStack_a8,4);
  uStack_b0 = 0;
  plStack_c0 = (long *)CONCAT44(plStack_c0._4_4_,0x1010000);
  auStack_d8[0] = 0x2050000;
  uStack_c8 = 0;
  plStack_d0 = &lStack_a8;
  puStack_b8 = auStack_90;
  func_0x000109a3dcec(&plStack_c0,auStack_d8);
  if (lStack_a0 != lStack_a8) {
    func_0x000109a7e098(param_1,0x406fe00000000000);
    plStack_c0 = &lStack_a8;
    FUN_109ffe3e8(&plStack_c0);
    if (lStack_58 != 0) {
      piVar1 = (int *)(lStack_58 + 0x14);
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
        func_0x000109a848d4(auStack_90);
      }
    }
    lStack_58 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    if (0 < iStack_8c) {
      lVar6 = 0;
      do {
        *(undefined4 *)(lStack_50 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < iStack_8c);
    }
    if (puStack_48 != auStack_40 && puStack_48 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_48 + -8));
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a6b99ec);
  (*pcVar5)();
}



/* Entry: 10a6b9a20; end: 10a6ba047;  */

/* WARNING: Removing unreachable block (ram,0x00010a6bac1c) */
/* WARNING: Removing unreachable block (ram,0x00010a6bac20) */
/* WARNING: Removing unreachable block (ram,0x00010a6bac28) */
/* WARNING: Removing unreachable block (ram,0x00010a6bac30) */
/* WARNING: Removing unreachable block (ram,0x00010a6bac34) */

undefined1  [16] FUN_10a6b9a20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *****pppppuVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  undefined **ppuVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  undefined **ppuVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  ulong uVar22;
  undefined8 *puVar23;
  int *piVar24;
  long *plVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 *puStack_798;
  undefined ***pppuStack_790;
  undefined **ppuStack_788;
  undefined **ppuStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  long lStack_748;
  uint *puStack_740;
  long lStack_738;
  uint **ppuStack_730;
  undefined8 *puStack_728;
  undefined8 **ppuStack_720;
  undefined8 **ppuStack_718;
  undefined1 **ppuStack_710;
  code *pcStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined4 auStack_6f0 [2];
  uint **ppuStack_6e8;
  undefined8 uStack_6e0;
  uint **ppuStack_6d8;
  uint *puStack_6d0;
  undefined8 uStack_6c8;
  uint uStack_6c0;
  int iStack_6bc;
  undefined8 uStack_6b8;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined4 uStack_6a8;
  undefined4 uStack_6a4;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  undefined4 uStack_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  long lStack_688;
  undefined8 *puStack_680;
  undefined8 *puStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  long *plStack_660;
  long *plStack_658;
  long lStack_650;
  long *plStack_648;
  undefined4 uStack_640;
  int iStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  uint uStack_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  long lStack_608;
  undefined4 *puStack_600;
  undefined8 *puStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  long *plStack_5e0;
  long *plStack_5d8;
  undefined1 auStack_5d0 [4];
  undefined8 uStack_5cc;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  uint uStack_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  long lStack_598;
  long lStack_590;
  undefined8 *puStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  long *plStack_570;
  undefined8 **ppuStack_568;
  uint *puStack_558;
  uint *puStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 **ppuStack_538;
  undefined1 auStack_530 [8];
  undefined8 *apuStack_528 [7];
  undefined4 auStack_4f0 [2];
  long *plStack_4e8;
  undefined8 uStack_4e0;
  undefined8 *apuStack_4d8 [7];
  undefined8 uStack_4a0;
  undefined8 **ppuStack_498;
  undefined1 auStack_490 [8];
  undefined8 *apuStack_488 [8];
  long lStack_448;
  undefined1 *puStack_3e0;
  code *pcStack_3d8;
  undefined8 uStack_3d0;
  long *plStack_3c8;
  undefined1 auStack_3c0 [4];
  int iStack_3bc;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_388;
  long lStack_380;
  undefined1 *puStack_378;
  undefined1 auStack_370 [16];
  undefined1 auStack_360 [4];
  int iStack_35c;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_328;
  long lStack_320;
  undefined1 *puStack_318;
  undefined1 auStack_310 [16];
  undefined1 auStack_300 [8];
  undefined8 uStack_2f8;
  undefined1 auStack_2e0 [4];
  int iStack_2dc;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2a8;
  long lStack_2a0;
  undefined1 *puStack_298;
  undefined1 auStack_290 [16];
  undefined8 uStack_280;
  long *plStack_278;
  undefined8 uStack_270;
  undefined8 ****ppppuStack_268;
  ulong uStack_260;
  byte bStack_251;
  undefined8 ****ppppuStack_250;
  undefined8 ***pppuStack_248;
  undefined8 ****ppppuStack_240;
  undefined8 ***pppuStack_238;
  undefined8 uStack_230;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long lStack_48;
  
  puVar16 = &uStack_3d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f66d051,&UNK_10f66d563,0xb9,&UNK_10f66d5c3);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar22 = (ulong)*(uint *)(param_1 + 0x34);
    if ((int)*(uint *)(param_1 + 0x34) < 3) {
      lVar17 = (long)*(int *)(param_1 + 0x3c) * (long)*(int *)(param_1 + 0x38);
    }
    else {
      lVar17 = 1;
      piVar24 = *(int **)(param_1 + 0x70);
      do {
        lVar17 = lVar17 * *piVar24;
        uVar22 = uVar22 - 1;
        piVar24 = piVar24 + 1;
      } while (uVar22 != 0);
    }
    if (lVar17 != 0) {
      if (*(long *)(param_1 + 0xc0) != 0) {
        uVar22 = (ulong)*(uint *)(param_1 + 0xb4);
        if ((int)*(uint *)(param_1 + 0xb4) < 3) {
          lVar17 = (long)*(int *)(param_1 + 0xbc) * (long)*(int *)(param_1 + 0xb8);
        }
        else {
          lVar17 = 1;
          piVar24 = *(int **)(param_1 + 0xf0);
          do {
            lVar17 = lVar17 * *piVar24;
            uVar22 = uVar22 - 1;
            piVar24 = piVar24 + 1;
          } while (uVar22 != 0);
        }
        puStack_1e8 = &UNK_10f66d5e9;
        uStack_1e0 = 0x15;
        if (lVar17 != 0) {
          FUN_109fee5ec(&puStack_1e8,param_1 + 0x90);
          FUN_109fee5ec(&uStack_280,param_1 + 0x90);
          __ZNSt3__19to_stringEm(&ppppuStack_268,uStack_270);
          pppppuVar6 = &ppppuStack_268;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (pppppuVar6,0,&UNK_10f66d5ff,0x1b);
          pppuStack_238 = pppppuVar6[1];
          ppppuStack_240 = *pppppuVar6;
          uStack_230 = pppppuVar6[2];
          pppppuVar6[1] = (undefined8 ****)0x0;
          pppppuVar6[2] = (undefined8 ****)0x0;
          *pppppuVar6 = (undefined8 ****)0x0;
          pppuStack_248 = (undefined8 ***)(long)uStack_230._7_1_;
          if ((long)pppuStack_248 < 0) {
            ppppuStack_250 = ppppuStack_240;
            pppuStack_248 = pppuStack_238;
            if (lStack_1d8 == 9) {
              __ZdlPv();
              goto LAB_10a6b9ba8;
            }
          }
          else {
            ppppuStack_250 = &ppppuStack_240;
            if (lStack_1d8 == 9) {
LAB_10a6b9ba8:
              if ((char)bStack_251 < '\0') {
                __ZdlPv(ppppuStack_268);
              }
              FUN_10a0028a8(&uStack_280,plStack_278);
              FUN_10a0028a8(&puStack_1e8,uStack_1e0);
              puStack_1e8 = &UNK_10f66d61b;
              uStack_1e0 = 0x22;
              if ((*(int *)(param_1 + 0xa8) == (*(int **)(param_1 + 0x70))[1]) &&
                 (*(int *)(param_1 + 0xac) == **(int **)(param_1 + 0x70))) {
                ppppuStack_240 = (undefined8 ****)0x10a6d600c;
                pppuStack_238 = (undefined8 ***)&PTR_DAT_110c11238;
                uStack_230 = (undefined8 ****)param_1;
                FUN_109ff6cf0(&puStack_1e8,param_1 + 0x30,param_1 + 0xb0,param_1 + 0x90,
                              &ppppuStack_240,param_2,param_3);
                (*(code *)*pppuStack_238)(&pppuStack_238);
                FUN_109ff70a0(auStack_3c0,&puStack_1e8,0);
                if (lStack_2a8 != 0) {
                  piVar24 = (int *)(lStack_2a8 + 0x14);
                  do {
                    iVar2 = *piVar24;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar24,0x10);
                    if (bVar4) {
                      *piVar24 = iVar2 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar2 + -1 == 0) {
                    func_0x000109a848d4(auStack_2e0);
                  }
                }
                lStack_2a8 = 0;
                uStack_2c8 = 0;
                uStack_2d0 = 0;
                uStack_2b8 = 0;
                uStack_2c0 = 0;
                if (0 < iStack_2dc) {
                  lVar17 = 0;
                  do {
                    *(undefined4 *)(lStack_2a0 + lVar17 * 4) = 0;
                    lVar17 = lVar17 + 1;
                  } while (lVar17 < iStack_2dc);
                }
                if (puStack_298 != auStack_290 && puStack_298 != (undefined1 *)0x0) {
                  _free(*(undefined8 *)(puStack_298 + -8));
                }
                FUN_109fff0a0(auStack_300,uStack_2f8);
                if (lStack_328 != 0) {
                  piVar24 = (int *)(lStack_328 + 0x14);
                  do {
                    iVar2 = *piVar24;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar24,0x10);
                    if (bVar4) {
                      *piVar24 = iVar2 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar2 + -1 == 0) {
                    func_0x000109a848d4(auStack_360);
                  }
                }
                lStack_328 = 0;
                uStack_348 = 0;
                uStack_350 = 0;
                uStack_338 = 0;
                uStack_340 = 0;
                if (0 < iStack_35c) {
                  lVar17 = 0;
                  do {
                    *(undefined4 *)(lStack_320 + lVar17 * 4) = 0;
                    lVar17 = lVar17 + 1;
                  } while (lVar17 < iStack_35c);
                }
                if (puStack_318 != auStack_310 && puStack_318 != (undefined1 *)0x0) {
                  _free(*(undefined8 *)(puStack_318 + -8));
                }
                if (lStack_388 != 0) {
                  piVar24 = (int *)(lStack_388 + 0x14);
                  do {
                    iVar2 = *piVar24;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar24,0x10);
                    if (bVar4) {
                      *piVar24 = iVar2 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar2 + -1 == 0) {
                    func_0x000109a848d4(auStack_3c0);
                  }
                }
                lStack_388 = 0;
                uStack_3a8 = 0;
                uStack_3b0 = 0;
                uStack_398 = 0;
                uStack_3a0 = 0;
                if (0 < iStack_3bc) {
                  lVar17 = 0;
                  do {
                    *(undefined4 *)(lStack_380 + lVar17 * 4) = 0;
                    lVar17 = lVar17 + 1;
                  } while (lVar17 < iStack_3bc);
                }
                if (puStack_378 != auStack_370 && puStack_378 != (undefined1 *)0x0) {
                  _free(*(undefined8 *)(puStack_378 + -8));
                }
                FUN_109ff8f38(&ppppuStack_268,&puStack_1e8);
                pppppuVar6 = (undefined8 *****)ppppuStack_268;
                if (-1 < (char)bStack_251) {
                  uStack_260 = (ulong)bStack_251;
                  pppppuVar6 = &ppppuStack_268;
                }
                FUN_10a3bf330(&ppppuStack_240,pppppuVar6,uStack_260);
                pppppuVar6 = &ppppuStack_240;
                lVar17 = *(long *)(*(long *)(param_1 + 0x28) + 0x100) + 0x208;
                FUN_10a6d26e4(&uStack_280,&UNK_10e4d3be9);
                plVar8 = plStack_278;
                uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x940);
                plStack_3c8 = plStack_278;
                uStack_3d0 = uStack_280;
                if (plStack_278 != (long *)0x0) {
                  plVar25 = plStack_278 + 1;
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                    if (bVar4) {
                      *plVar25 = *plVar25 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                FUN_10a25f3f4(uVar7);
                if (plVar8 != (long *)0x0) {
                  plVar25 = plVar8 + 1;
                  do {
                    lVar18 = *plVar25;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                    if (bVar4) {
                      *plVar25 = lVar18 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (lVar18 == 0) {
                    (**(code **)(*plVar8 + 0x10))(plVar8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
                  }
                }
                if (plStack_278 != (long *)0x0) {
                  plVar8 = plStack_278 + 1;
                  do {
                    lVar18 = *plVar8;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                    if (bVar4) {
                      *plVar8 = lVar18 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (lVar18 == 0) {
                    (**(code **)(*plStack_278 + 0x10))(plStack_278);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_278);
                  }
                }
                FUN_10a042634(&ppppuStack_240);
                if ((char)bStack_251 < '\0') {
                  __ZdlPv(ppppuStack_268);
                }
                ppuVar21 = &puStack_1e8;
                FUN_10a003a8c();
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                  auVar26._8_8_ = puVar16;
                  auVar26._0_8_ = ppuVar21;
                  return auVar26;
                }
                ___stack_chk_fail();
                if ((int)puVar16 != 0) {
                  func_0x000104bd46a0();
                  FUN_10a05bd88(&uStack_3d0);
                  FUN_10a05bd88(&uStack_280);
                  FUN_10a042634(&ppppuStack_240);
                  if ((char)bStack_251 < '\0') {
                    __ZdlPv(ppppuStack_268);
                  }
                  FUN_10a003a8c(&puStack_1e8);
                }
                __Unwind_Resume();
                puStack_3e0 = &stack0xfffffffffffffff0;
                pcStack_3d8 = FUN_10a6ba048;
                lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
                lVar18 = *(long *)((long)puVar16 + 0x28);
                FUN_10a2421c8();
                plVar8 = *(long **)(lVar18 + 0x228);
                auStack_5d0 = (undefined1  [4])0x0;
                uStack_5cc = NEON_rev64(**(undefined8 **)(lVar17 + 0x40),4);
                uStack_6f8 = 0;
                uStack_700 = 0x400000001;
                uStack_5bc = 0;
                uStack_5b8 = 0;
                uStack_5c4 = 1;
                uStack_5c0 = 4;
                uStack_5b4 = 1;
                uStack_5a0 = 0;
                uStack_59c = 0;
                uStack_5b0 = 0;
                uStack_5ac = 0;
                uStack_5a8 = uStack_5a8 & 0xffffff00;
                (**(code **)(*plVar8 + 0x20))(plVar8,auStack_5d0);
                FUN_10a0a25e4(&plStack_570,plVar8);
                auStack_5d0 = (undefined1  [4])0x42ff0000;
                uStack_6b8 = auStack_5d0;
                uStack_5c4 = 0;
                uStack_5c0 = 0;
                uStack_5cc = 0;
                lStack_590 = (long)&uStack_5cc + 4;
                uStack_5b4 = 0;
                uStack_5b0 = 0;
                uStack_5bc = 0;
                uStack_5b8 = 0;
                uStack_5a4 = 0;
                uStack_5ac = 0;
                uStack_5a8 = 0;
                lStack_598 = 0;
                uStack_5a0 = 0;
                uStack_59c = 0;
                uStack_580 = 0;
                uStack_578 = 0;
                uStack_638 = (undefined4)lVar17;
                uStack_634 = (undefined4)((ulong)lVar17 >> 0x20);
                uStack_630 = 0;
                uStack_62c = 0;
                uStack_640 = 0x1010000;
                uStack_6c0 = 0x2010000;
                uStack_6b0 = 0;
                uStack_6ac = 0;
                puStack_588 = &uStack_580;
                func_0x000109ac9fc8(&uStack_640,&uStack_6c0,9,0);
                (**(code **)(*plStack_570 + 0x98))(plStack_570,CONCAT44(uStack_5bc,uStack_5c0),0,0);
                FUN_10a6baacc(&uStack_4a0,*(undefined8 *)((long)puVar16 + 0x28),&plStack_570);
                lVar18 = *(long *)((long)puVar16 + 0x28);
                FUN_10a2421c8();
                plVar8 = *(long **)(lVar18 + 0x228);
                uStack_640 = 0;
                uVar7 = NEON_rev64(*pppppuVar6[8],4);
                iStack_63c = (int)uVar7;
                uStack_638 = (undefined4)((ulong)uVar7 >> 0x20);
                uStack_62c = (undefined4)uStack_6f8;
                uStack_628 = (undefined4)((ulong)uStack_6f8 >> 0x20);
                uStack_634 = (undefined4)uStack_700;
                uStack_630 = (undefined4)((ulong)uStack_700 >> 0x20);
                uStack_624 = 1;
                uStack_610 = 0;
                uStack_60c = 0;
                uStack_620 = 0;
                uStack_61c = 0;
                uStack_618 = uStack_618 & 0xffffff00;
                (**(code **)(*plVar8 + 0x20))(plVar8,&uStack_640);
                FUN_10a0a25e4(&plStack_5e0,plVar8);
                uStack_640 = 0x42ff0000;
                plStack_4e8 = (long *)&uStack_640;
                uStack_634 = 0;
                uStack_630 = 0;
                iStack_63c = 0;
                uStack_638 = 0;
                puStack_600 = &uStack_638;
                uStack_624 = 0;
                uStack_620 = 0;
                uStack_62c = 0;
                uStack_628 = 0;
                uStack_614 = 0;
                uStack_61c = 0;
                uStack_618 = 0;
                lStack_608 = 0;
                uStack_610 = 0;
                uStack_60c = 0;
                uStack_5f0 = 0;
                uStack_5e8 = 0;
                uStack_6b8._0_4_ = SUB84(pppppuVar6,0);
                uStack_6b8._4_4_ = (undefined4)((ulong)pppppuVar6 >> 0x20);
                uStack_6b0 = 0;
                uStack_6ac = 0;
                uStack_6c0 = 0x1010000;
                auStack_4f0[0] = 0x2010000;
                uStack_4e0 = 0;
                puStack_5f8 = &uStack_5f0;
                func_0x000109ac9fc8(&uStack_6c0,auStack_4f0,2,0);
                (**(code **)(*plStack_5e0 + 0x98))(plStack_5e0,CONCAT44(uStack_62c,uStack_630),0,0);
                FUN_10a6baacc(auStack_4f0,*(undefined8 *)((long)puVar16 + 0x28),&plStack_5e0);
                lVar18 = *(long *)((long)puVar16 + 0x28);
                FUN_10a2421c8();
                FUN_10a244d68();
                if (((*(byte *)(lVar18 + 0x20) & 1) == 0) && (*(int *)(lVar18 + 0x24) == 0)) {
                  uStack_6b8._4_4_ = 0;
                  uStack_6c0 = uStack_6c0 & 0xffffff;
                  iStack_6bc = 0;
                  uStack_6b8._0_4_ = 0;
                  uStack_6a4 = 0;
                  uStack_6b0 = 0;
                  uStack_6ac = 0;
                  uStack_6a8 = 0;
                  *(undefined8 *)(lVar18 + 0x40) = 0x17d;
                  *(undefined8 *)(lVar18 + 0x55) = 0;
                  *(ulong *)(lVar18 + 0x4d) = (ulong)uStack_6c0;
                  uStack_6a0 = 0;
                  *(undefined4 *)(lVar18 + 0x6d) = 0;
                  *(undefined2 *)(lVar18 + 0x4a) = 0;
                  *(undefined1 *)(lVar18 + 0x4c) = 0;
                  *(undefined8 *)(lVar18 + 0x65) = 0;
                  *(undefined8 *)(lVar18 + 0x5d) = 0;
                }
                *(int *)(lVar18 + 0x24) = *(int *)(lVar18 + 0x24) + 1;
                FUN_10ab0c0a8(&uStack_6c0,0x3f800000,*(undefined8 *)((long)puVar16 + 0x18),lVar18,
                              auStack_4f0,&uStack_4a0);
                ppuVar9 = ppuStack_568;
                ppuVar10 = (undefined8 **)CONCAT44(uStack_6b8._4_4_,(undefined4)uStack_6b8);
                plStack_570 = (long *)CONCAT44(iStack_6bc,uStack_6c0);
                uStack_6c0 = 0;
                iStack_6bc = 0;
                uStack_6b8._0_4_ = 0;
                uStack_6b8._4_4_ = 0;
                if (ppuStack_568 != (undefined8 **)0x0) {
                  plVar8 = (long *)(ppuStack_568 + 1);
                  do {
                    lVar19 = *plVar8;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                    if (bVar4) {
                      *plVar8 = lVar19 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (lVar19 == 0) {
                    lVar19 = (long)*ppuStack_568;
                    ppuStack_568 = ppuVar10;
                    (**(code **)(lVar19 + 0x10))(ppuVar9);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
                    ppuVar10 = ppuStack_568;
                  }
                }
                ppuStack_568 = ppuVar10;
                plVar8 = (long *)CONCAT44(uStack_6b8._4_4_,(undefined4)uStack_6b8);
                if (plVar8 != (long *)0x0) {
                  plVar25 = plVar8 + 1;
                  do {
                    lVar19 = *plVar25;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                    if (bVar4) {
                      *plVar25 = lVar19 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (lVar19 == 0) {
                    (**(code **)(*plVar8 + 0x10))(plVar8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
                  }
                }
                FUN_10a6d1844(&lStack_650,&uStack_6c0);
                FUN_10a6baacc(&uStack_540,*(undefined8 *)((long)puVar16 + 0x28),&plStack_570);
                ppuVar10 = ppuStack_498;
                ppuStack_498 = ppuStack_538;
                uStack_4a0 = uStack_540;
                uStack_540 = 0;
                ppuStack_538 = (undefined8 **)0x0;
                if (ppuVar10 != (undefined8 **)0x0) {
                  plVar8 = (long *)(ppuVar10 + 1);
                  do {
                    lVar19 = *plVar8;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                    if (bVar4) {
                      *plVar8 = lVar19 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (lVar19 == 0) {
                    (**(code **)((long)*ppuVar10 + 0x10))(ppuVar10);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
                  }
                }
                func_0x00010a8c5f40(lStack_650,&uStack_4a0);
                FUN_10a6d60d0(&puStack_558,&ppuStack_6d8);
                *(undefined1 *)(*(long *)(puStack_558 + 10) + 0x65) = 1;
                FUN_10a8ed51c(&uStack_6c0,puStack_558 + 6);
                func_0x00010a6c8b40(lStack_650 + 0x58,CONCAT44(iStack_6bc,uStack_6c0) + 0x28);
                plVar8 = (long *)CONCAT44(uStack_6b8._4_4_,(undefined4)uStack_6b8);
                if (plVar8 != (long *)0x0) {
                  plVar25 = plVar8 + 1;
                  do {
                    lVar19 = *plVar25;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                    if (bVar4) {
                      *plVar25 = lVar19 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (lVar19 == 0) {
                    (**(code **)(*plVar8 + 0x10))(plVar8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
                  }
                }
                if (puStack_550 != (uint *)0x0) {
                  plVar8 = (long *)((long)puStack_550 + 8);
                  do {
                    lVar19 = *plVar8;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                    if (bVar4) {
                      *plVar8 = lVar19 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (lVar19 == 0) {
                    (**(code **)(*(long *)puStack_550 + 0x10))(puStack_550);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(puStack_550);
                  }
                }
                plVar8 = (long *)0xe8;
                __Znwm();
                plVar8[1] = 0;
                plVar8[2] = 0;
                *plVar8 = (long)&PTR_FUN_110c114e0;
                plVar25 = plVar8 + 3;
                plVar8[4] = 0;
                *plVar25 = 0;
                plVar8[0x1c] = 0;
                plVar8[0x1b] = 0;
                plVar8[6] = 0;
                plVar8[5] = 0;
                plVar8[8] = 0;
                plVar8[7] = 0;
                plVar8[10] = 0;
                plVar8[9] = 0;
                plVar8[0xc] = 0;
                plVar8[0xb] = 0;
                plVar8[0xe] = 0;
                plVar8[0xd] = 0;
                plVar8[0x10] = 0;
                plVar8[0xf] = 0;
                plVar8[0x12] = 0;
                plVar8[0x11] = 0;
                plVar8[0x14] = 0;
                plVar8[0x13] = 0;
                plVar8[0x16] = 0;
                plVar8[0x15] = 0;
                plVar8[0x18] = 0;
                plVar8[0x17] = 0;
                plVar8[0x1a] = 0;
                plVar8[0x19] = 0;
                *(undefined4 *)(plVar8 + 0x1b) = 0x3f800000;
                puStack_680 = &uStack_6b8;
                puStack_558 = (uint *)**(undefined8 **)(lVar17 + 0x40);
                uStack_6c0 = 0x42ff0000;
                uStack_6b8._4_4_ = 0;
                uStack_6b0 = 0;
                iStack_6bc = 0;
                uStack_6b8._0_4_ = 0;
                uStack_6a4 = 0;
                uStack_6a0 = 0;
                uStack_6ac = 0;
                uStack_6a8 = 0;
                uStack_694 = 0;
                uStack_69c = 0;
                uStack_698 = 0;
                lStack_688 = 0;
                uStack_690 = 0;
                uStack_68c = 0;
                uStack_670 = 0;
                uStack_668 = 0;
                puStack_678 = &uStack_670;
                plStack_660 = plVar25;
                plStack_658 = plVar8;
                func_0x000109a83fd0(&uStack_6c0,2,&puStack_558,0x15);
                FUN_10a8cac00(plVar25,&lStack_650,lVar18,&uStack_6c0);
                puStack_558 = (uint *)CONCAT44(puStack_558._4_4_,0x2010000);
                uStack_548 = 0;
                uVar7 = 0x10;
                puStack_550 = &uStack_6c0;
                func_0x000109a41858(0x3ff0000000000000,0,&uStack_6c0,&puStack_558,0x10);
                FUN_109ffe2a0(&puStack_558,4);
                ppuStack_6d8 = (uint **)CONCAT44(ppuStack_6d8._4_4_,0x1010000);
                puStack_6d0 = &uStack_6c0;
                uStack_6c8 = 0;
                auStack_6f0[0] = 0x2050000;
                uStack_6e0 = 0;
                ppuStack_6e8 = &puStack_558;
                func_0x000109a3dcec(&ppuStack_6d8,auStack_6f0);
                if (puStack_550 == puStack_558) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a6ba9a8);
                  (*pcVar5)();
                }
                puVar20 = *(undefined **)puStack_558;
                ppuVar21[1] = *(undefined **)(puStack_558 + 2);
                *ppuVar21 = puVar20;
                puVar20 = *(undefined **)(puStack_558 + 4);
                ppuVar21[3] = *(undefined **)(puStack_558 + 6);
                ppuVar21[2] = puVar20;
                puVar20 = *(undefined **)(puStack_558 + 8);
                ppuVar21[5] = *(undefined **)(puStack_558 + 10);
                ppuVar21[4] = puVar20;
                lVar17 = *(long *)(puStack_558 + 0xe);
                puVar20 = *(undefined **)(puStack_558 + 0xc);
                ppuVar21[7] = *(undefined **)(puStack_558 + 0xe);
                ppuVar21[6] = puVar20;
                ppuVar21[10] = (undefined *)0x0;
                ppuVar21[8] = (undefined *)(ppuVar21 + 1);
                ppuVar21[9] = (undefined *)(ppuVar21 + 10);
                ppuVar21[0xb] = (undefined *)0x0;
                if (lVar17 != 0) {
                  piVar24 = (int *)(lVar17 + 0x14);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar24,0x10);
                    if (bVar4) {
                      *piVar24 = *piVar24 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                puVar14 = puStack_558;
                if ((int)puStack_558[1] < 3) {
                  puVar16 = *(undefined8 **)(puStack_558 + 0x12);
                  puVar23 = (undefined8 *)ppuVar21[9];
                  *puVar23 = *puVar16;
                  puVar23[1] = puVar16[1];
                }
                else {
                  *(undefined4 *)((long)ppuVar21 + 4) = 0;
                  func_0x000109a84868(ppuVar21);
                }
                ppuStack_6d8 = &puStack_558;
                FUN_109ffe3e8(&ppuStack_6d8);
                if (lStack_688 != 0) {
                  piVar24 = (int *)(lStack_688 + 0x14);
                  do {
                    iVar2 = *piVar24;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar24,0x10);
                    if (bVar4) {
                      *piVar24 = iVar2 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar2 + -1 == 0) {
                    func_0x000109a848d4(&uStack_6c0);
                  }
                }
                lStack_688 = 0;
                uStack_6a8 = 0;
                uStack_6a4 = 0;
                uStack_6b0 = 0;
                uStack_6ac = 0;
                uStack_698 = 0;
                uStack_694 = 0;
                uStack_6a0 = 0;
                uStack_69c = 0;
                if (0 < iStack_6bc) {
                  lVar17 = 0;
                  do {
                    *(undefined4 *)((long)puStack_680 + lVar17 * 4) = 0;
                    lVar17 = lVar17 + 1;
                  } while (lVar17 < iStack_6bc);
                }
                if (puStack_678 != &uStack_670 && puStack_678 != (undefined8 *)0x0) {
                  _free(puStack_678[-1]);
                }
                plVar8 = plStack_658;
                if (plStack_658 != (long *)0x0) {
                  plVar25 = plStack_658 + 1;
                  do {
                    lVar17 = *plVar25;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                    if (bVar4) {
                      *plVar25 = lVar17 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (lVar17 == 0) {
                    (**(code **)(*plStack_658 + 0x10))(plStack_658);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
                  }
                }
                FUN_10a044790(auStack_530);
                (*(code *)*apuStack_528[0])(apuStack_528);
                ppuVar10 = ppuStack_538;
                if (ppuStack_538 != (undefined8 **)0x0) {
                  plVar8 = (long *)(ppuStack_538 + 1);
                  do {
                    lVar17 = *plVar8;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                    if (bVar4) {
                      *plVar8 = lVar17 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (lVar17 == 0) {
                    (**(code **)((long)*ppuStack_538 + 0x10))(ppuStack_538);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
                  }
                }
                if (plStack_648 != (long *)0x0) {
                  plVar8 = plStack_648 + 1;
                  do {
                    lVar17 = *plVar8;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                    if (bVar4) {
                      *plVar8 = lVar17 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (lVar17 == 0) {
                    (**(code **)(*plStack_648 + 0x10))(plStack_648);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_648);
                  }
                }
                func_0x00010a5dfd48((byte *)(lVar18 + 0x20));
                FUN_10a044790(&uStack_4e0);
                (*(code *)*apuStack_4d8[0])(apuStack_4d8);
                plVar8 = plStack_4e8;
                if (plStack_4e8 != (long *)0x0) {
                  plVar25 = plStack_4e8 + 1;
                  do {
                    lVar17 = *plVar25;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                    if (bVar4) {
                      *plVar25 = lVar17 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (lVar17 == 0) {
                    (**(code **)(*plVar8 + 0x10))(plVar8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
                  }
                }
                if (lStack_608 != 0) {
                  piVar24 = (int *)(lStack_608 + 0x14);
                  do {
                    iVar2 = *piVar24;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar24,0x10);
                    if (bVar4) {
                      *piVar24 = iVar2 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar2 + -1 == 0) {
                    func_0x000109a848d4(&uStack_640);
                  }
                }
                lStack_608 = 0;
                uStack_628 = 0;
                uStack_624 = 0;
                uStack_630 = 0;
                uStack_62c = 0;
                uStack_618 = 0;
                uStack_614 = 0;
                uStack_620 = 0;
                uStack_61c = 0;
                if (0 < iStack_63c) {
                  lVar17 = 0;
                  do {
                    puStack_600[lVar17] = 0;
                    lVar17 = lVar17 + 1;
                  } while (lVar17 < iStack_63c);
                }
                if (puStack_5f8 != &uStack_5f0 && puStack_5f8 != (undefined8 *)0x0) {
                  _free(puStack_5f8[-1]);
                }
                if (plStack_5d8 != (long *)0x0) {
                  plVar8 = plStack_5d8 + 1;
                  do {
                    lVar17 = *plVar8;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                    if (bVar4) {
                      *plVar8 = lVar17 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (lVar17 == 0) {
                    (**(code **)(*plStack_5d8 + 0x10))(plStack_5d8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_5d8);
                  }
                }
                FUN_10a044790(auStack_490);
                ppuVar10 = apuStack_488;
                (*(code *)*apuStack_488[0])();
                ppuVar9 = ppuStack_498;
                if (ppuStack_498 != (undefined8 **)0x0) {
                  ppuVar11 = ppuStack_498 + 1;
                  do {
                    puVar16 = *ppuVar11;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
                    if (bVar4) {
                      *ppuVar11 = (undefined8 *)((long)puVar16 + -1);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (puVar16 == (undefined8 *)0x0) {
                    (*(code *)(*ppuStack_498)[2])(ppuStack_498);
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                    ppuVar10 = ppuVar9;
                  }
                }
                if (lStack_598 != 0) {
                  piVar24 = (int *)(lStack_598 + 0x14);
                  do {
                    iVar2 = *piVar24;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar24,0x10);
                    if (bVar4) {
                      *piVar24 = iVar2 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar2 + -1 == 0) {
                    ppuVar10 = (undefined8 **)auStack_5d0;
                    func_0x000109a848d4();
                  }
                }
                lStack_598 = 0;
                uStack_5b8 = 0;
                uStack_5b4 = 0;
                uStack_5c0 = 0;
                uStack_5bc = 0;
                uStack_5a8 = 0;
                uStack_5a4 = 0;
                uStack_5b0 = 0;
                uStack_5ac = 0;
                if (0 < (int)uStack_5cc) {
                  lVar17 = 0;
                  do {
                    *(undefined4 *)(lStack_590 + lVar17 * 4) = 0;
                    lVar17 = lVar17 + 1;
                  } while (lVar17 < (int)uStack_5cc);
                }
                if (puStack_588 != &uStack_580 && puStack_588 != (undefined8 *)0x0) {
                  ppuVar10 = (undefined8 **)puStack_588[-1];
                  _free();
                }
                ppuVar9 = ppuStack_568;
                if (ppuStack_568 != (undefined8 **)0x0) {
                  ppuVar11 = ppuStack_568 + 1;
                  do {
                    puVar16 = *ppuVar11;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
                    if (bVar4) {
                      *ppuVar11 = (undefined8 *)((long)puVar16 + -1);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (puVar16 == (undefined8 *)0x0) {
                    (*(code *)(*ppuStack_568)[2])(ppuStack_568);
                    ppuVar10 = ppuVar9;
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                }
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_448) {
                  auVar27._8_8_ = puVar14;
                  auVar27._0_8_ = ppuVar10;
                  return auVar27;
                }
                ___stack_chk_fail();
                if ((int)puVar14 == 0) {
                  do {
                    __Unwind_Resume(ppuVar10);
                    func_0x00010a015cec(&uStack_4a0);
                    func_0x00010567aa40(auStack_5d0);
                    func_0x00010a0523dc(&plStack_570);
                  } while( true );
                }
                ppuVar11 = ppuVar10;
                func_0x000104bd46a0();
                ppuStack_718 = ppuVar9;
                pcStack_708 = FUN_10a6baacc;
                lStack_748 = *(long *)PTR____stack_chk_guard_11034bdc0;
                ppuVar12 = (undefined **)0x2c0;
                puStack_740 = &uStack_6c0;
                lStack_738 = lVar18;
                ppuStack_730 = &puStack_558;
                puStack_728 = &uStack_670;
                ppuStack_720 = ppuVar10;
                ppuStack_710 = &puStack_3e0;
                __Znwm();
                ppuVar12[1] = (undefined *)0x0;
                ppuVar12[2] = (undefined *)0x0;
                *ppuVar12 = (undefined *)&PTR_DAT_110b9fda0;
                ppuVar21 = ppuVar12 + 3;
                FUN_10ab6aaa0(ppuVar21,puVar14,uVar7);
                ppuVar15 = ppuVar12 + 8;
                ppuStack_788 = ppuVar21;
                ppuStack_780 = ppuVar12;
                FUN_10a05b2a8(&ppuStack_788,ppuVar15,ppuVar21);
                FUN_10a05b04c(&puStack_798,&ppuStack_788);
                ppuVar21 = ppuStack_780;
                if (ppuStack_780 != (undefined **)0x0) {
                  ppuVar12 = ppuStack_780 + 1;
                  do {
                    puVar20 = *ppuVar12;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
                    if (bVar4) {
                      *ppuVar12 = puVar20 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (puVar20 == (undefined *)0x0) {
                    (**(code **)(*ppuStack_780 + 0x10))(ppuStack_780);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar21);
                  }
                }
                if (pppuStack_790 == (undefined ***)0x0) {
                  *ppuVar11 = puStack_798;
                  ppuVar11[1] = (undefined8 *)0x0;
                }
                else {
                  pppuVar13 = pppuStack_790 + 1;
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
                    if (bVar4) {
                      *pppuVar13 = (undefined **)((long)*pppuVar13 + 1);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  *ppuVar11 = puStack_798;
                  ppuVar11[1] = pppuStack_790;
                  if (pppuStack_790 != (undefined ***)0x0) {
                    pppuVar13 = pppuStack_790 + 1;
                    do {
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
                      if (bVar4) {
                        *pppuVar13 = (undefined **)((long)*pppuVar13 + 1);
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                  }
                }
                pppuVar13 = &ppuStack_780;
                ppuVar11[2] = (undefined8 *)0x10a6d6098;
                ppuVar11[3] = &PTR_DAT_110c112a8;
                ppuVar11[4] = puStack_798;
                ppuVar11[5] = pppuStack_790;
                uStack_770 = 0;
                uStack_778 = 0;
                ppuStack_788 = (undefined **)&UNK_1053a6a3c;
                ppuStack_780 = &PTR_DAT_110ae9180;
                FUN_10a044790(&ppuStack_788);
                (*(code *)*ppuStack_780)(pppuVar13);
                if (pppuStack_790 != (undefined ***)0x0) {
                  pppuVar1 = pppuStack_790 + 1;
                  do {
                    ppuVar21 = *pppuVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
                    if (bVar4) {
                      *pppuVar1 = (undefined **)((long)ppuVar21 + -1);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (ppuVar21 == (undefined **)0x0) {
                    (*(code *)(*pppuStack_790)[2])(pppuStack_790);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_790);
                    pppuVar13 = pppuStack_790;
                  }
                }
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_748) {
                  auVar28._8_8_ = ppuVar15;
                  auVar28._0_8_ = pppuVar13;
                  return auVar28;
                }
                ___stack_chk_fail();
                func_0x00010a05248c(&ppuStack_788);
                __Unwind_Resume(pppuVar13);
                auVar29._8_8_ = 0x10;
                auVar29._0_8_ = &UNK_10f66dc48;
                return auVar29;
              }
              FUN_10a0edfc4(&puStack_1e8);
              goto LAB_10a6b9f58;
            }
          }
          FUN_10a0edfc4(&ppppuStack_250);
          goto LAB_10a6b9f58;
        }
      }
      uStack_1e0 = 0x15;
      puStack_1e8 = &UNK_10f66d5e9;
      FUN_10a0edfc4(&puStack_1e8);
      goto LAB_10a6b9f58;
    }
  }
  uStack_1e0 = 0x10;
  puStack_1e8 = &UNK_10f66d5d8;
  FUN_10a0edfc4(&puStack_1e8);
LAB_10a6b9f58:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a6b9f5c);
  (*pcVar5)();
}



/* Entry: 10a6ba048; end: 10a6baacb;  */

/* WARNING: Removing unreachable block (ram,0x00010a6bac1c) */
/* WARNING: Removing unreachable block (ram,0x00010a6bac20) */
/* WARNING: Removing unreachable block (ram,0x00010a6bac28) */
/* WARNING: Removing unreachable block (ram,0x00010a6bac30) */
/* WARNING: Removing unreachable block (ram,0x00010a6bac34) */

undefined1  [16] FUN_10a6ba048(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined ***pppuVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  undefined **ppuVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  undefined **ppuVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  undefined8 *puVar20;
  long *plVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 *puStack_3c8;
  undefined ***pppuStack_3c0;
  undefined **ppuStack_3b8;
  undefined **ppuStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  long lStack_378;
  uint *puStack_370;
  long lStack_368;
  uint **ppuStack_360;
  undefined8 *puStack_358;
  undefined8 **ppuStack_350;
  undefined8 **ppuStack_348;
  undefined1 *puStack_340;
  code *pcStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined4 auStack_320 [2];
  uint **ppuStack_318;
  undefined8 uStack_310;
  uint **ppuStack_308;
  uint *puStack_300;
  undefined8 uStack_2f8;
  uint uStack_2f0;
  int iStack_2ec;
  undefined8 uStack_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  long lStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  long *plStack_288;
  long lStack_280;
  long *plStack_278;
  undefined4 uStack_270;
  int iStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  uint uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  long lStack_238;
  undefined4 *puStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long *plStack_210;
  long *plStack_208;
  undefined1 auStack_200 [4];
  undefined8 uStack_1fc;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  uint uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 **ppuStack_198;
  uint *puStack_188;
  uint *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 **ppuStack_168;
  undefined1 auStack_160 [8];
  undefined8 *apuStack_158 [7];
  undefined4 auStack_120 [2];
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 *apuStack_108 [7];
  undefined8 uStack_d0;
  undefined8 **ppuStack_c8;
  undefined1 auStack_c0 [8];
  undefined8 *apuStack_b8 [8];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *(long *)(param_2 + 0x28);
  FUN_10a2421c8();
  plVar8 = *(long **)(lVar7 + 0x228);
  auStack_200 = (undefined1  [4])0x0;
  uStack_1fc = NEON_rev64(**(undefined8 **)(param_4 + 0x40),4);
  uStack_328 = 0;
  uStack_330 = 0x400000001;
  uStack_1ec = 0;
  uStack_1e8 = 0;
  uStack_1f4 = 1;
  uStack_1f0 = 4;
  uStack_1e4 = 1;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  uStack_1e0 = 0;
  uStack_1dc = 0;
  uStack_1d8 = uStack_1d8 & 0xffffff00;
  (**(code **)(*plVar8 + 0x20))(plVar8,auStack_200);
  FUN_10a0a25e4(&plStack_1a0,plVar8);
  auStack_200 = (undefined1  [4])0x42ff0000;
  uStack_2e8 = auStack_200;
  uStack_1f4 = 0;
  uStack_1f0 = 0;
  uStack_1fc = 0;
  lStack_1c0 = (long)&uStack_1fc + 4;
  uStack_1e4 = 0;
  uStack_1e0 = 0;
  uStack_1ec = 0;
  uStack_1e8 = 0;
  uStack_1d4 = 0;
  uStack_1dc = 0;
  uStack_1d8 = 0;
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_268 = (undefined4)param_4;
  uStack_264 = (undefined4)((ulong)param_4 >> 0x20);
  uStack_260 = 0;
  uStack_25c = 0;
  uStack_270 = 0x1010000;
  uStack_2f0 = 0x2010000;
  uStack_2e0 = 0;
  uStack_2dc = 0;
  puStack_1b8 = &uStack_1b0;
  func_0x000109ac9fc8(&uStack_270,&uStack_2f0,9,0);
  (**(code **)(*plStack_1a0 + 0x98))(plStack_1a0,CONCAT44(uStack_1ec,uStack_1f0),0,0);
  FUN_10a6baacc(&uStack_d0,*(undefined8 *)(param_2 + 0x28),&plStack_1a0);
  lVar7 = *(long *)(param_2 + 0x28);
  FUN_10a2421c8();
  plVar8 = *(long **)(lVar7 + 0x228);
  uStack_270 = 0;
  uVar22 = NEON_rev64(**(undefined8 **)(param_3 + 0x40),4);
  iStack_26c = (int)uVar22;
  uStack_268 = (undefined4)((ulong)uVar22 >> 0x20);
  uStack_25c = (undefined4)uStack_328;
  uStack_258 = (undefined4)((ulong)uStack_328 >> 0x20);
  uStack_264 = (undefined4)uStack_330;
  uStack_260 = (undefined4)((ulong)uStack_330 >> 0x20);
  uStack_254 = 1;
  uStack_240 = 0;
  uStack_23c = 0;
  uStack_250 = 0;
  uStack_24c = 0;
  uStack_248 = uStack_248 & 0xffffff00;
  (**(code **)(*plVar8 + 0x20))(plVar8,&uStack_270);
  FUN_10a0a25e4(&plStack_210,plVar8);
  uStack_270 = 0x42ff0000;
  plStack_118 = (long *)&uStack_270;
  uStack_264 = 0;
  uStack_260 = 0;
  iStack_26c = 0;
  uStack_268 = 0;
  puStack_230 = &uStack_268;
  uStack_254 = 0;
  uStack_250 = 0;
  uStack_25c = 0;
  uStack_258 = 0;
  uStack_244 = 0;
  uStack_24c = 0;
  uStack_248 = 0;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_23c = 0;
  uStack_220 = 0;
  uStack_218 = 0;
  uStack_2e8._0_4_ = (undefined4)param_3;
  uStack_2e8._4_4_ = (undefined4)((ulong)param_3 >> 0x20);
  uStack_2e0 = 0;
  uStack_2dc = 0;
  uStack_2f0 = 0x1010000;
  auStack_120[0] = 0x2010000;
  uStack_110 = 0;
  puStack_228 = &uStack_220;
  func_0x000109ac9fc8(&uStack_2f0,auStack_120,2,0);
  (**(code **)(*plStack_210 + 0x98))(plStack_210,CONCAT44(uStack_25c,uStack_260),0,0);
  FUN_10a6baacc(auStack_120,*(undefined8 *)(param_2 + 0x28),&plStack_210);
  lVar7 = *(long *)(param_2 + 0x28);
  FUN_10a2421c8();
  FUN_10a244d68();
  if (((*(byte *)(lVar7 + 0x20) & 1) == 0) && (*(int *)(lVar7 + 0x24) == 0)) {
    uStack_2e8._4_4_ = 0;
    uStack_2f0 = uStack_2f0 & 0xffffff;
    iStack_2ec = 0;
    uStack_2e8._0_4_ = 0;
    uStack_2d4 = 0;
    uStack_2e0 = 0;
    uStack_2dc = 0;
    uStack_2d8 = 0;
    *(undefined8 *)(lVar7 + 0x40) = 0x17d;
    *(undefined8 *)(lVar7 + 0x55) = 0;
    *(ulong *)(lVar7 + 0x4d) = (ulong)uStack_2f0;
    uStack_2d0 = 0;
    *(undefined4 *)(lVar7 + 0x6d) = 0;
    *(undefined2 *)(lVar7 + 0x4a) = 0;
    *(undefined1 *)(lVar7 + 0x4c) = 0;
    *(undefined8 *)(lVar7 + 0x65) = 0;
    *(undefined8 *)(lVar7 + 0x5d) = 0;
  }
  *(int *)(lVar7 + 0x24) = *(int *)(lVar7 + 0x24) + 1;
  FUN_10ab0c0a8(&uStack_2f0,0x3f800000,*(undefined8 *)(param_2 + 0x18),lVar7,auStack_120,&uStack_d0)
  ;
  ppuVar9 = ppuStack_198;
  ppuVar10 = (undefined8 **)CONCAT44(uStack_2e8._4_4_,(undefined4)uStack_2e8);
  plStack_1a0 = (long *)CONCAT44(iStack_2ec,uStack_2f0);
  uStack_2f0 = 0;
  iStack_2ec = 0;
  uStack_2e8._0_4_ = 0;
  uStack_2e8._4_4_ = 0;
  if (ppuStack_198 != (undefined8 **)0x0) {
    plVar8 = (long *)(ppuStack_198 + 1);
    do {
      lVar17 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      lVar17 = (long)*ppuStack_198;
      ppuStack_198 = ppuVar10;
      (**(code **)(lVar17 + 0x10))(ppuVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
      ppuVar10 = ppuStack_198;
    }
  }
  ppuStack_198 = ppuVar10;
  plVar8 = (long *)CONCAT44(uStack_2e8._4_4_,(undefined4)uStack_2e8);
  if (plVar8 != (long *)0x0) {
    plVar21 = plVar8 + 1;
    do {
      lVar17 = *plVar21;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar5) {
        *plVar21 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  FUN_10a6d1844(&lStack_280,&uStack_2f0);
  FUN_10a6baacc(&uStack_170,*(undefined8 *)(param_2 + 0x28),&plStack_1a0);
  ppuVar10 = ppuStack_c8;
  ppuStack_c8 = ppuStack_168;
  uStack_d0 = uStack_170;
  uStack_170 = 0;
  ppuStack_168 = (undefined8 **)0x0;
  if (ppuVar10 != (undefined8 **)0x0) {
    plVar8 = (long *)(ppuVar10 + 1);
    do {
      lVar17 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)((long)*ppuVar10 + 0x10))(ppuVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
    }
  }
  func_0x00010a8c5f40(lStack_280,&uStack_d0);
  FUN_10a6d60d0(&puStack_188,&ppuStack_308);
  *(undefined1 *)(*(long *)(puStack_188 + 10) + 0x65) = 1;
  FUN_10a8ed51c(&uStack_2f0,puStack_188 + 6);
  func_0x00010a6c8b40(lStack_280 + 0x58,CONCAT44(iStack_2ec,uStack_2f0) + 0x28);
  plVar8 = (long *)CONCAT44(uStack_2e8._4_4_,(undefined4)uStack_2e8);
  if (plVar8 != (long *)0x0) {
    plVar21 = plVar8 + 1;
    do {
      lVar17 = *plVar21;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar5) {
        *plVar21 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (puStack_180 != (uint *)0x0) {
    plVar8 = (long *)((long)puStack_180 + 8);
    do {
      lVar17 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*(long *)puStack_180 + 0x10))(puStack_180);
      __ZNSt3__119__shared_weak_count14__release_weakEv(puStack_180);
    }
  }
  plVar8 = (long *)0xe8;
  __Znwm();
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_110c114e0;
  plVar21 = plVar8 + 3;
  plVar8[4] = 0;
  *plVar21 = 0;
  plVar8[0x1c] = 0;
  plVar8[0x1b] = 0;
  plVar8[6] = 0;
  plVar8[5] = 0;
  plVar8[8] = 0;
  plVar8[7] = 0;
  plVar8[10] = 0;
  plVar8[9] = 0;
  plVar8[0xc] = 0;
  plVar8[0xb] = 0;
  plVar8[0xe] = 0;
  plVar8[0xd] = 0;
  plVar8[0x10] = 0;
  plVar8[0xf] = 0;
  plVar8[0x12] = 0;
  plVar8[0x11] = 0;
  plVar8[0x14] = 0;
  plVar8[0x13] = 0;
  plVar8[0x16] = 0;
  plVar8[0x15] = 0;
  plVar8[0x18] = 0;
  plVar8[0x17] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x19] = 0;
  *(undefined4 *)(plVar8 + 0x1b) = 0x3f800000;
  puStack_2b0 = &uStack_2e8;
  puStack_188 = (uint *)**(undefined8 **)(param_4 + 0x40);
  uStack_2f0 = 0x42ff0000;
  uStack_2e8._4_4_ = 0;
  uStack_2e0 = 0;
  iStack_2ec = 0;
  uStack_2e8._0_4_ = 0;
  uStack_2d4 = 0;
  uStack_2d0 = 0;
  uStack_2dc = 0;
  uStack_2d8 = 0;
  uStack_2c4 = 0;
  uStack_2cc = 0;
  uStack_2c8 = 0;
  lStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  uStack_2a0 = 0;
  uStack_298 = 0;
  puStack_2a8 = &uStack_2a0;
  plStack_290 = plVar21;
  plStack_288 = plVar8;
  func_0x000109a83fd0(&uStack_2f0,2,&puStack_188,0x15);
  FUN_10a8cac00(plVar21,&lStack_280,lVar7,&uStack_2f0);
  puStack_188 = (uint *)CONCAT44(puStack_188._4_4_,0x2010000);
  uStack_178 = 0;
  uVar22 = 0x10;
  puStack_180 = &uStack_2f0;
  func_0x000109a41858(0x3ff0000000000000,0,&uStack_2f0,&puStack_188,0x10);
  FUN_109ffe2a0(&puStack_188,4);
  ppuStack_308 = (uint **)CONCAT44(ppuStack_308._4_4_,0x1010000);
  puStack_300 = &uStack_2f0;
  uStack_2f8 = 0;
  auStack_320[0] = 0x2050000;
  uStack_310 = 0;
  ppuStack_318 = &puStack_188;
  func_0x000109a3dcec(&ppuStack_308,auStack_320);
  if (puStack_180 == puStack_188) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a6ba9a8);
    (*pcVar6)();
  }
  uVar23 = *(undefined8 *)puStack_188;
  param_1[1] = *(undefined8 *)(puStack_188 + 2);
  *param_1 = uVar23;
  uVar23 = *(undefined8 *)(puStack_188 + 4);
  param_1[3] = *(undefined8 *)(puStack_188 + 6);
  param_1[2] = uVar23;
  uVar23 = *(undefined8 *)(puStack_188 + 8);
  param_1[5] = *(undefined8 *)(puStack_188 + 10);
  param_1[4] = uVar23;
  lVar17 = *(long *)(puStack_188 + 0xe);
  uVar23 = *(undefined8 *)(puStack_188 + 0xc);
  param_1[7] = *(undefined8 *)(puStack_188 + 0xe);
  param_1[6] = uVar23;
  param_1[10] = 0;
  param_1[8] = param_1 + 1;
  param_1[9] = param_1 + 10;
  param_1[0xb] = 0;
  if (lVar17 != 0) {
    piVar1 = (int *)(lVar17 + 0x14);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar14 = puStack_188;
  if ((int)puStack_188[1] < 3) {
    puVar16 = *(undefined8 **)(puStack_188 + 0x12);
    puVar20 = (undefined8 *)param_1[9];
    *puVar20 = *puVar16;
    puVar20[1] = puVar16[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 4) = 0;
    func_0x000109a84868(param_1);
  }
  ppuStack_308 = &puStack_188;
  FUN_109ffe3e8(&ppuStack_308);
  if (lStack_2b8 != 0) {
    piVar1 = (int *)(lStack_2b8 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_2f0);
    }
  }
  lStack_2b8 = 0;
  uStack_2d8 = 0;
  uStack_2d4 = 0;
  uStack_2e0 = 0;
  uStack_2dc = 0;
  uStack_2c8 = 0;
  uStack_2c4 = 0;
  uStack_2d0 = 0;
  uStack_2cc = 0;
  if (0 < iStack_2ec) {
    lVar17 = 0;
    do {
      *(undefined4 *)((long)puStack_2b0 + lVar17 * 4) = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < iStack_2ec);
  }
  if (puStack_2a8 != &uStack_2a0 && puStack_2a8 != (undefined8 *)0x0) {
    _free(puStack_2a8[-1]);
  }
  plVar8 = plStack_288;
  if (plStack_288 != (long *)0x0) {
    plVar21 = plStack_288 + 1;
    do {
      lVar17 = *plVar21;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar5) {
        *plVar21 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_288 + 0x10))(plStack_288);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  FUN_10a044790(auStack_160);
  (*(code *)*apuStack_158[0])(apuStack_158);
  ppuVar10 = ppuStack_168;
  if (ppuStack_168 != (undefined8 **)0x0) {
    plVar8 = (long *)(ppuStack_168 + 1);
    do {
      lVar17 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)((long)*ppuStack_168 + 0x10))(ppuStack_168);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
    }
  }
  if (plStack_278 != (long *)0x0) {
    plVar8 = plStack_278 + 1;
    do {
      lVar17 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_278 + 0x10))(plStack_278);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_278);
    }
  }
  func_0x00010a5dfd48((byte *)(lVar7 + 0x20));
  FUN_10a044790(&uStack_110);
  (*(code *)*apuStack_108[0])(apuStack_108);
  plVar8 = plStack_118;
  if (plStack_118 != (long *)0x0) {
    plVar21 = plStack_118 + 1;
    do {
      lVar17 = *plVar21;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar5) {
        *plVar21 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (lStack_238 != 0) {
    piVar1 = (int *)(lStack_238 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_270);
    }
  }
  lStack_238 = 0;
  uStack_258 = 0;
  uStack_254 = 0;
  uStack_260 = 0;
  uStack_25c = 0;
  uStack_248 = 0;
  uStack_244 = 0;
  uStack_250 = 0;
  uStack_24c = 0;
  if (0 < iStack_26c) {
    lVar17 = 0;
    do {
      puStack_230[lVar17] = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < iStack_26c);
  }
  if (puStack_228 != &uStack_220 && puStack_228 != (undefined8 *)0x0) {
    _free(puStack_228[-1]);
  }
  if (plStack_208 != (long *)0x0) {
    plVar8 = plStack_208 + 1;
    do {
      lVar17 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_208 + 0x10))(plStack_208);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_208);
    }
  }
  FUN_10a044790(auStack_c0);
  ppuVar10 = apuStack_b8;
  (*(code *)*apuStack_b8[0])();
  ppuVar9 = ppuStack_c8;
  if (ppuStack_c8 != (undefined8 **)0x0) {
    ppuVar11 = ppuStack_c8 + 1;
    do {
      puVar16 = *ppuVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
      if (bVar5) {
        *ppuVar11 = (undefined8 *)((long)puVar16 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar16 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_c8)[2])(ppuStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar10 = ppuVar9;
    }
  }
  if (lStack_1c8 != 0) {
    piVar1 = (int *)(lStack_1c8 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      ppuVar10 = (undefined8 **)auStack_200;
      func_0x000109a848d4();
    }
  }
  lStack_1c8 = 0;
  uStack_1e8 = 0;
  uStack_1e4 = 0;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  uStack_1e0 = 0;
  uStack_1dc = 0;
  if (0 < (int)uStack_1fc) {
    lVar17 = 0;
    do {
      *(undefined4 *)(lStack_1c0 + lVar17 * 4) = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < (int)uStack_1fc);
  }
  if (puStack_1b8 != &uStack_1b0 && puStack_1b8 != (undefined8 *)0x0) {
    ppuVar10 = (undefined8 **)puStack_1b8[-1];
    _free();
  }
  ppuVar9 = ppuStack_198;
  if (ppuStack_198 != (undefined8 **)0x0) {
    ppuVar11 = ppuStack_198 + 1;
    do {
      puVar16 = *ppuVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
      if (bVar5) {
        *ppuVar11 = (undefined8 *)((long)puVar16 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar16 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_198)[2])(ppuStack_198);
      ppuVar10 = ppuVar9;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    if ((int)puVar14 == 0) {
      do {
        __Unwind_Resume(ppuVar10);
        func_0x00010a015cec(&uStack_d0);
        func_0x00010567aa40(auStack_200);
        func_0x00010a0523dc(&plStack_1a0);
      } while( true );
    }
    ppuVar11 = ppuVar10;
    func_0x000104bd46a0();
    ppuStack_348 = ppuVar9;
    pcStack_338 = FUN_10a6baacc;
    lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar12 = (undefined **)0x2c0;
    puStack_370 = &uStack_2f0;
    lStack_368 = lVar7;
    ppuStack_360 = &puStack_188;
    puStack_358 = &uStack_2a0;
    ppuStack_350 = ppuVar10;
    puStack_340 = &stack0xfffffffffffffff0;
    __Znwm();
    ppuVar12[1] = (undefined *)0x0;
    ppuVar12[2] = (undefined *)0x0;
    *ppuVar12 = (undefined *)&PTR_DAT_110b9fda0;
    ppuVar19 = ppuVar12 + 3;
    FUN_10ab6aaa0(ppuVar19,puVar14,uVar22);
    ppuVar15 = ppuVar12 + 8;
    ppuStack_3b8 = ppuVar19;
    ppuStack_3b0 = ppuVar12;
    FUN_10a05b2a8(&ppuStack_3b8,ppuVar15,ppuVar19);
    FUN_10a05b04c(&puStack_3c8,&ppuStack_3b8);
    ppuVar19 = ppuStack_3b0;
    if (ppuStack_3b0 != (undefined **)0x0) {
      ppuVar12 = ppuStack_3b0 + 1;
      do {
        puVar18 = *ppuVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
        if (bVar5) {
          *ppuVar12 = puVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (puVar18 == (undefined *)0x0) {
        (**(code **)(*ppuStack_3b0 + 0x10))(ppuStack_3b0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar19);
      }
    }
    if (pppuStack_3c0 == (undefined ***)0x0) {
      *ppuVar11 = puStack_3c8;
      ppuVar11[1] = (undefined8 *)0x0;
    }
    else {
      pppuVar13 = pppuStack_3c0 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
        if (bVar5) {
          *pppuVar13 = (undefined **)((long)*pppuVar13 + 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      *ppuVar11 = puStack_3c8;
      ppuVar11[1] = pppuStack_3c0;
      if (pppuStack_3c0 != (undefined ***)0x0) {
        pppuVar13 = pppuStack_3c0 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
          if (bVar5) {
            *pppuVar13 = (undefined **)((long)*pppuVar13 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
    pppuVar13 = &ppuStack_3b0;
    ppuVar11[2] = (undefined8 *)0x10a6d6098;
    ppuVar11[3] = &PTR_DAT_110c112a8;
    ppuVar11[4] = puStack_3c8;
    ppuVar11[5] = pppuStack_3c0;
    uStack_3a0 = 0;
    uStack_3a8 = 0;
    ppuStack_3b8 = (undefined **)&UNK_1053a6a3c;
    ppuStack_3b0 = &PTR_DAT_110ae9180;
    FUN_10a044790(&ppuStack_3b8);
    (*(code *)*ppuStack_3b0)(pppuVar13);
    if (pppuStack_3c0 != (undefined ***)0x0) {
      pppuVar2 = pppuStack_3c0 + 1;
      do {
        ppuVar19 = *pppuVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
        if (bVar5) {
          *pppuVar2 = (undefined **)((long)ppuVar19 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (ppuVar19 == (undefined **)0x0) {
        (*(code *)(*pppuStack_3c0)[2])(pppuStack_3c0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_3c0);
        pppuVar13 = pppuStack_3c0;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_378) {
      ___stack_chk_fail();
      func_0x00010a05248c(&ppuStack_3b8);
      __Unwind_Resume(pppuVar13);
      auVar26._8_8_ = 0x10;
      auVar26._0_8_ = &UNK_10f66dc48;
      return auVar26;
    }
    auVar25._8_8_ = ppuVar15;
    auVar25._0_8_ = pppuVar13;
    return auVar25;
  }
  auVar24._8_8_ = puVar14;
  auVar24._0_8_ = ppuVar10;
  return auVar24;
}



/* Entry: 10a6baacc; end: 10a6bad03;  */

/* WARNING: Removing unreachable block (ram,0x00010a6bac1c) */
/* WARNING: Removing unreachable block (ram,0x00010a6bac20) */
/* WARNING: Removing unreachable block (ram,0x00010a6bac28) */
/* WARNING: Removing unreachable block (ram,0x00010a6bac30) */
/* WARNING: Removing unreachable block (ram,0x00010a6bac34) */

undefined1  [16] FUN_10a6baacc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uStack_98;
  undefined ***pppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = (undefined **)0x2c0;
  __Znwm();
  ppuVar4[1] = (undefined *)0x0;
  ppuVar4[2] = (undefined *)0x0;
  *ppuVar4 = (undefined *)&PTR_DAT_110b9fda0;
  ppuVar8 = ppuVar4 + 3;
  FUN_10ab6aaa0(ppuVar8,param_2,param_3);
  ppuVar6 = ppuVar4 + 8;
  ppuStack_88 = ppuVar8;
  ppuStack_80 = ppuVar4;
  FUN_10a05b2a8(&ppuStack_88,ppuVar6,ppuVar8);
  FUN_10a05b04c(&uStack_98,&ppuStack_88);
  ppuVar8 = ppuStack_80;
  if (ppuStack_80 != (undefined **)0x0) {
    ppuVar4 = ppuStack_80 + 1;
    do {
      puVar7 = *ppuVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar4,0x10);
      if (bVar3) {
        *ppuVar4 = puVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar7 == (undefined *)0x0) {
      (**(code **)(*ppuStack_80 + 0x10))(ppuStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
    }
  }
  if (pppuStack_90 == (undefined ***)0x0) {
    *param_1 = uStack_98;
    param_1[1] = 0;
  }
  else {
    pppuVar5 = pppuStack_90 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
      if (bVar3) {
        *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *param_1 = uStack_98;
    param_1[1] = pppuStack_90;
    if (pppuStack_90 != (undefined ***)0x0) {
      pppuVar5 = pppuStack_90 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
        if (bVar3) {
          *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  pppuVar5 = &ppuStack_80;
  param_1[2] = 0x10a6d6098;
  param_1[3] = &PTR_DAT_110c112a8;
  param_1[4] = uStack_98;
  param_1[5] = pppuStack_90;
  uStack_70 = 0;
  uStack_78 = 0;
  ppuStack_88 = (undefined **)&UNK_1053a6a3c;
  ppuStack_80 = &PTR_DAT_110ae9180;
  FUN_10a044790(&ppuStack_88);
  (*(code *)*ppuStack_80)(pppuVar5);
  if (pppuStack_90 != (undefined ***)0x0) {
    pppuVar1 = pppuStack_90 + 1;
    do {
      ppuVar8 = *pppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar3) {
        *pppuVar1 = (undefined **)((long)ppuVar8 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar8 == (undefined **)0x0) {
      (*(code *)(*pppuStack_90)[2])(pppuStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_90);
      pppuVar5 = pppuStack_90;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar9._8_8_ = ppuVar6;
    auVar9._0_8_ = pppuVar5;
    return auVar9;
  }
  ___stack_chk_fail();
  func_0x00010a05248c(&ppuStack_88);
  __Unwind_Resume(pppuVar5);
  auVar10._8_8_ = 0x10;
  auVar10._0_8_ = &UNK_10f66dc48;
  return auVar10;
}



/* Entry: 10a6bad04; end: 10a6bad6f;  */

undefined1  [16] FUN_10a6bad04(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = &UNK_10f66dc48;
  return auVar1;
}



/* Entry: 10a6bad70; end: 10a6badbb;  */

void FUN_10a6bad70(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000002;
  uStack_48 = 0xffffffff;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0;
  uStack_18 = 0xffffffff;
  FUN_10a6badbc(param_1,&uStack_58);
  FUN_10a6d6694();
  return;
}



/* Entry: 10a6badbc; end: 10a6bae93;  */

/* WARNING: Removing unreachable block (ram,0x00010a6bae54) */

undefined1  [16] FUN_10a6badbc(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66dc48,0x10);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6d6598(param_1,&puStack_90,0);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a6bae94; end: 10a6baf13;  */

undefined1  [16] FUN_10a6bae94(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = &UNK_10f66dc59;
  return auVar1;
}



/* Entry: 10a6baf14; end: 10a6bb017;  */

void FUN_10a6baf14(undefined8 param_1)

{
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_a8 = (undefined *)0x0;
  ppuStack_a0 = (undefined **)0xffffffff0000000a;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  FUN_10a6bb018(param_1,&puStack_a8);
  puStack_b8 = &UNK_10f66d646;
  puStack_b0 = &UNK_10f66d651;
  puStack_a8 = &UNK_10f66d63e;
  uStack_98 = 2;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x800000019;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_60 = 0;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  ppuStack_a0 = &puStack_b8;
  FUN_10a6d684c();
  puStack_b8 = &UNK_10f66d646;
  puStack_b0 = &UNK_10f66d651;
  puStack_a8 = &UNK_10f66d65a;
  uStack_98 = 2;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x800000019;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_60 = 0;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  ppuStack_a0 = &puStack_b8;
  FUN_10a6d6ae0(param_1,&puStack_a8,0);
  FUN_10a6d6bfc(param_1);
  return;
}



/* Entry: 10a6bb018; end: 10a6bb0ef;  */

/* WARNING: Removing unreachable block (ram,0x00010a6bb0b0) */

undefined1  [16] FUN_10a6bb018(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66dc59,0x10);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6d6750(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a6bb0f0; end: 10a6bb16f;  */

undefined8 * FUN_10a6bb0f0(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puStack_28;
  
  lVar1 = param_1[0xf];
  param_1[0xf] = 0;
  if (lVar1 != 0) {
    func_0x00010a6d6cb8();
  }
  func_0x000109380ffc(param_1 + 0xe,*(undefined1 *)(param_1 + 0xd));
  if (param_1[10] != 0) {
    param_1[0xb] = param_1[10];
    __ZdlPv();
  }
  puStack_28 = param_1 + 7;
  FUN_10a0426d8(&puStack_28);
  FUN_10a6c9514(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a6bb170; end: 10a6bb173;  */

undefined8 * FUN_10a6bb170(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puStack_28;
  
  lVar1 = param_1[0xf];
  param_1[0xf] = 0;
  if (lVar1 != 0) {
    func_0x00010a6d6cb8();
  }
  func_0x000109380ffc(param_1 + 0xe,*(undefined1 *)(param_1 + 0xd));
  if (param_1[10] != 0) {
    param_1[0xb] = param_1[10];
    __ZdlPv();
  }
  puStack_28 = param_1 + 7;
  FUN_10a0426d8(&puStack_28);
  FUN_10a6c9514(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a6bb174; end: 10a6bb187;  */

void FUN_10a6bb174(void)

{
  FUN_10a6bb0f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6bb188; end: 10a6bbdef;  */

/* WARNING: Type propagation algorithm not settling */

long *** FUN_10a6bb188(long ******param_1,long param_2,long *******param_3,long *******param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long *****ppppplVar3;
  long *****ppppplVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long ******pppppplVar10;
  char cVar11;
  bool bVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uVar18;
  code *pcVar19;
  int iVar20;
  int iVar21;
  long *******ppppppplVar22;
  undefined8 uVar23;
  undefined8 ******ppppppuVar24;
  long ***ppplVar25;
  long **pplVar26;
  long ***ppplVar27;
  long ***ppplVar28;
  float *pfVar29;
  float *pfVar30;
  undefined8 uVar31;
  long *****ppppplVar32;
  long *****ppppplVar33;
  uint uVar34;
  long *******ppppppplVar35;
  long lVar36;
  long lVar37;
  undefined8 *extraout_x8;
  long ***ppplVar38;
  long *plVar39;
  long lVar40;
  undefined8 *puVar41;
  long **pplVar42;
  ulong uVar43;
  long ******pppppplVar44;
  long *******ppppppplVar45;
  undefined8 *****pppppuVar46;
  long ****pppplVar47;
  long *plVar48;
  long *plVar49;
  undefined8 *puVar50;
  undefined *puVar51;
  ulong uVar52;
  long ****pppplVar53;
  long ******pppppplVar54;
  ulong uVar55;
  ulong uVar56;
  long ****pppplVar57;
  long ******pppppplVar58;
  long *plVar59;
  long *plVar60;
  long *****ppppplVar61;
  long *******ppppppplVar62;
  long *plVar63;
  ulong uVar64;
  long ***ppplVar65;
  long *****ppppplVar66;
  long *******ppppppplVar67;
  long *******ppppppplVar68;
  long **pplVar69;
  long *plVar70;
  long **pplVar71;
  undefined8 *puVar72;
  long *******ppppppplVar73;
  long ***ppplVar74;
  int *piVar75;
  long *plVar76;
  undefined8 *puVar77;
  long **pplVar78;
  undefined8 *puVar79;
  undefined8 *puVar80;
  long *plVar81;
  float fVar82;
  undefined1 auVar83 [16];
  float fVar84;
  undefined1 auVar85 [16];
  float fVar86;
  undefined1 auVar87 [16];
  float fVar88;
  float fVar89;
  float fVar90;
  int iVar91;
  int iVar92;
  int iVar93;
  int iVar94;
  float fVar95;
  undefined8 uStack_4f0;
  float fStack_4d8;
  undefined4 uStack_4d4;
  char cStack_4c1;
  long *****ppppplStack_4c0;
  long ****pppplStack_4b8;
  long ***ppplStack_4b0;
  undefined8 uStack_4a8;
  long *****ppppplStack_4a0;
  long ***ppplStack_498;
  long ***ppplStack_490;
  undefined8 uStack_488;
  undefined8 auStack_478 [2];
  char cStack_461;
  long *****ppppplStack_460;
  long *****ppppplStack_458;
  long ***ppplStack_450;
  undefined8 uStack_448;
  long *****ppppplStack_438;
  long *****ppppplStack_430;
  long ***ppplStack_428;
  undefined8 uStack_420;
  undefined8 auStack_418 [2];
  char cStack_401;
  long lStack_400;
  long *plStack_3f8;
  long *plStack_3f0;
  ulong uStack_3e8;
  float fStack_3e0;
  undefined8 uStack_3d0;
  long *plStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 *puStack_3b0;
  long ***ppplStack_3a0;
  long ***ppplStack_398;
  long *plStack_390;
  ulong uStack_388;
  float fStack_380;
  uint uStack_374;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long *****ppppplStack_330;
  long *****ppppplStack_328;
  float fStack_320;
  float fStack_31c;
  float fStack_318;
  float fStack_314;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  float fStack_2e8;
  undefined8 auStack_2e0 [2];
  undefined8 uStack_2d0;
  char cStack_2c9;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  float fStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  float fStack_290;
  float fStack_28c;
  undefined8 uStack_288;
  long ****pppplStack_280;
  long ****pppplStack_278;
  long ****pppplStack_270;
  long ****pppplStack_268;
  long ****pppplStack_260;
  long lStack_258;
  long *******ppppppplStack_180;
  long *******ppppppplStack_178;
  long ******pppppplStack_170;
  long *plStack_168;
  undefined8 *******pppppppuStack_160;
  long *******ppppppplStack_158;
  long lStack_150;
  long *******ppppppplStack_148;
  long *******ppppppplStack_140;
  undefined8 uStack_138;
  long *******ppppppplStack_130;
  long *******ppppppplStack_128;
  long *******ppppppplStack_120;
  long *******ppppppplStack_118;
  undefined8 uStack_110;
  long *******ppppppplStack_108;
  long ******pppppplStack_100;
  long ******pppppplStack_f8;
  long *******ppppppplStack_f0;
  long *******ppppppplStack_e8;
  long ******pppppplStack_e0;
  long ******pppppplStack_d8;
  undefined8 *******pppppppuStack_d0;
  long ******pppppplStack_c8;
  long *****ppppplStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *******ppppppplStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppplVar58 = *param_4;
  pppppplVar10 = param_4[1];
  lVar36 = *(long *)(param_2 + 0x20);
  lVar40 = *(long *)(param_2 + 0x28);
  uStack_110 = (long *******)&UNK_10f66d6cd;
  ppppppplStack_108 = (long *******)0x44;
  if ((long)pppppplVar10 - (long)pppppplVar58 >> 4 != lVar40 - lVar36 >> 5) {
    FUN_10a0edfc4(&uStack_110);
LAB_10a6bbc74:
                    /* WARNING: Does not return */
    pcVar19 = (code *)SoftwareBreakpoint(1,0x10a6bbc78);
    (*pcVar19)();
  }
  pppppplVar44 = pppppplVar58;
  if (pppppplVar58 == pppppplVar10) {
    ppppppplStack_148 = (long *******)0x0;
    ppppppplStack_140 = (long *******)0x0;
    uStack_138 = 0;
    ppppppplVar35 = param_3;
  }
  else {
    do {
      pppppplVar54 = pppppplVar44 + 2;
      uStack_110 = (long *******)&UNK_10f66d712;
      ppppppplStack_108 = (long *******)0x34;
      if (*pppppplVar44 == (long *****)0x0) {
        FUN_10a0edfc4(&uStack_110);
        goto LAB_10a6bbc74;
      }
      pppppplVar44 = pppppplVar54;
    } while (pppppplVar54 != pppppplVar10);
    ppppppplStack_148 = (long *******)0x0;
    ppppppplStack_140 = (long *******)0x0;
    uStack_138 = 0;
    do {
      uVar43 = (ulong)*(byte *)(*(long *)(param_2 + 0x18) + 0x29);
      if (5 < uVar43) goto LAB_10a6bbc74;
      FUN_10aba1500(&ppppppplStack_120,
                    *(undefined8 *)(*(long *)(param_2 + 0x18) + uVar43 * 8 + 0x30),*pppppplVar58,1);
      uStack_110 = (long *******)&UNK_10f66cd91;
      ppppppplStack_108 = (long *******)0x22;
      if (*(int *)((long)ppppppplStack_120 + 0x24) != 1) {
        FUN_10a0edfc4(&uStack_110);
        goto LAB_10a6bbc74;
      }
      FUN_10a0f3910(&uStack_110,ppppppplStack_120 + 2,0);
      uStack_b0 = (long *******)&UNK_10f66cdb4;
      ppppppplStack_a8 = (long *******)0x19;
      if (((uint)uStack_110 & 0xfff) != 0x18) {
        FUN_10a0edfc4(&uStack_b0);
        goto LAB_10a6bbc74;
      }
      uStack_a0 = 0;
      uStack_b0 = (long *******)&UNK_101010000;
      pppppppuStack_160 = (undefined8 *******)CONCAT44(pppppppuStack_160._4_4_,0x2010000);
      lStack_150 = 0;
      param_4 = (long *******)0x1;
      ppppppplStack_158 = (long *******)&uStack_110;
      ppppppplStack_a8 = (long *******)&uStack_110;
      func_0x000109ac9fc8(&uStack_b0,&pppppppuStack_160,1,0);
      ppppppplVar35 = (long *******)&uStack_110;
      FUN_109fed894(&ppppppplStack_148);
      if (pppppplStack_d8 != (long ******)0x0) {
        piVar75 = (int *)((long)pppppplStack_d8 + 0x14);
        do {
          iVar91 = *piVar75;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar75,0x10);
          if (bVar12) {
            *piVar75 = iVar91 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar91 + -1 == 0) {
          func_0x000109a848d4(&uStack_110);
        }
      }
      pppppplStack_d8 = (long ******)0x0;
      pppppplStack_f8 = (long ******)0x0;
      pppppplStack_100 = (long ******)0x0;
      ppppppplStack_e8 = (long *******)0x0;
      ppppppplStack_f0 = (long *******)0x0;
      if (0 < uStack_110._4_4_) {
        lVar36 = 0;
        do {
          *(undefined4 *)((long)pppppppuStack_d0 + lVar36 * 4) = 0;
          lVar36 = lVar36 + 1;
        } while (lVar36 < uStack_110._4_4_);
      }
      if (pppppplStack_c8 != &ppppplStack_c0 && pppppplStack_c8 != (long ******)0x0) {
        _free(pppppplStack_c8[-1]);
      }
      ppppppplVar68 = ppppppplStack_118;
      if (ppppppplStack_118 != (long *******)0x0) {
        ppppppplVar62 = ppppppplStack_118 + 1;
        do {
          pppppplVar44 = *ppppppplVar62;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar62,0x10);
          if (bVar12) {
            *ppppppplVar62 = (long ******)((long)pppppplVar44 + -1);
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (pppppplVar44 == (long ******)0x0) {
          (*(code *)(*ppppppplStack_118)[2])(ppppppplStack_118);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar68);
        }
      }
      pppppplVar58 = pppppplVar58 + 2;
    } while (pppppplVar58 != pppppplVar10);
    lVar36 = *(long *)(param_2 + 0x20);
    lVar40 = *(long *)(param_2 + 0x28);
  }
  uVar34 = (uint)ppppppplVar35;
  ppppppplStack_158 = (long *******)0x0;
  lStack_150 = 0;
  pppppppuStack_160 = &ppppppplStack_158;
  if (lVar40 != lVar36) {
    uVar43 = 0;
    puVar80 = (undefined8 *)((ulong)&uStack_110 | 4);
    do {
      uVar55 = ((long)ppppppplStack_140 - (long)ppppppplStack_148 >> 5) * -0x5555555555555555;
      if (uVar55 < uVar43 || uVar55 - uVar43 == 0) goto LAB_10a6bbc74;
      piVar75 = (int *)(lVar36 + uVar43 * 0x20);
      ppppppplVar68 = ppppppplStack_148 + uVar43 * 0xc;
      pppppplVar58 = ppppppplVar68[8];
      uStack_110 = (long *******)&UNK_10f66d747;
      ppppppplStack_108 = (long *******)0x1c;
      if (*(int *)((long)pppppplVar58 + 4) != *piVar75 || *(int *)pppppplVar58 != piVar75[1]) {
        FUN_10a0edfc4(&uStack_110);
        goto LAB_10a6bbc74;
      }
      ppppppplVar62 = *(long ********)(piVar75 + 2);
      ppppppplVar67 = *(long ********)(piVar75 + 4);
      if (ppppppplVar62 != ppppppplVar67) {
        do {
          func_0x000109a852c8(&uStack_110,ppppppplVar68,ppppppplVar62 + 3);
          ppppppplVar22 = (long *******)&pppppppuStack_160;
          ppppppplVar35 = (long *******)&ppppppplStack_130;
          param_4 = ppppppplVar62;
          FUN_10a003db8();
          ppppppplVar73 = (long *******)*ppppppplVar22;
          if (ppppppplVar73 == (long *******)0x0) {
            ppppppplVar73 = (long *******)0x98;
            __Znwm();
            uStack_a0 = 0;
            param_4 = &pppppplStack_170;
            ppppppplStack_120 = ppppppplVar62;
            uStack_b0 = ppppppplVar73;
            ppppppplStack_a8 = (long *******)&pppppppuStack_160;
            FUN_10a6d6df4(ppppppplVar73 + 4,&ppppppplStack_120);
            *ppppppplVar73 = (long ******)0x0;
            ppppppplVar73[1] = (long ******)0x0;
            ppppppplVar73[2] = (long ******)ppppppplStack_130;
            *ppppppplVar22 = (long ******)ppppppplVar73;
            ppppppplVar35 = ppppppplVar73;
            if ((undefined8 *******)*pppppppuStack_160 != (undefined8 *******)0x0) {
              ppppppplVar35 = (long *******)*ppppppplVar22;
              pppppppuStack_160 = (undefined8 *******)*pppppppuStack_160;
            }
            func_0x000107c2b058(ppppppplStack_158);
            lStack_150 = lStack_150 + 1;
          }
          if (ppppppplVar73[0xe] != (long ******)0x0) {
            piVar75 = (int *)((long)ppppppplVar73[0xe] + 0x14);
            do {
              iVar91 = *piVar75;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar75,0x10);
              if (bVar12) {
                *piVar75 = iVar91 + -1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (iVar91 + -1 == 0) {
              func_0x000109a848d4(ppppppplVar73 + 7);
            }
          }
          ppppppplVar73[0xe] = (long ******)0x0;
          ppppppplVar73[10] = (long ******)0x0;
          ppppppplVar73[9] = (long ******)0x0;
          ppppppplVar73[0xc] = (long ******)0x0;
          ppppppplVar73[0xb] = (long ******)0x0;
          if (0 < *(int *)((long)ppppppplVar73 + 0x3c)) {
            lVar36 = 0;
            pppppplVar58 = ppppppplVar73[0xf];
            do {
              *(undefined4 *)((long)pppppplVar58 + lVar36 * 4) = 0;
              lVar36 = lVar36 + 1;
            } while (lVar36 < *(int *)((long)ppppppplVar73 + 0x3c));
          }
          ppppppplVar73[8] = (long ******)ppppppplStack_108;
          ppppppplVar73[7] = (long ******)uStack_110;
          ppppppplVar73[10] = pppppplStack_f8;
          ppppppplVar73[9] = pppppplStack_100;
          ppppppplVar73[0xc] = (long ******)ppppppplStack_e8;
          ppppppplVar73[0xb] = (long ******)ppppppplStack_f0;
          ppppppplVar73[0xe] = pppppplStack_d8;
          ppppppplVar73[0xd] = pppppplStack_e0;
          ppppppplVar45 = (long *******)ppppppplVar73[0x10];
          ppppppplVar22 = ppppppplVar73 + 0x11;
          iVar91 = uStack_110._4_4_;
          if (ppppppplVar45 != ppppppplVar22) {
            if (ppppppplVar45 != (long *******)0x0) {
              _free(ppppppplVar45[-1]);
              iVar91 = uStack_110._4_4_;
            }
            ppppppplVar73[0xf] = (long ******)(ppppppplVar73 + 8);
            ppppppplVar73[0x10] = (long ******)ppppppplVar22;
            ppppppplVar45 = ppppppplVar22;
          }
          if (iVar91 < 3) {
            *ppppppplVar45 = (long ******)*pppppplStack_c8;
            ppppppplVar45[1] = (long ******)pppppplStack_c8[1];
            uStack_110 = (long *******)CONCAT44(uStack_110._4_4_,0x42ff0000);
            puVar80[1] = 0;
            *puVar80 = 0;
            puVar80[3] = 0;
            puVar80[2] = 0;
            puVar80[5] = 0;
            puVar80[4] = 0;
            *(undefined8 *)((long)puVar80 + 0x34) = 0;
            *(undefined8 *)((long)puVar80 + 0x2c) = 0;
            if (pppppplStack_c8 != &ppppplStack_c0) {
              _free(pppppplStack_c8[-1]);
            }
          }
          else {
            ppppppplVar73[0xf] = (long ******)pppppppuStack_d0;
            ppppppplVar73[0x10] = pppppplStack_c8;
          }
          ppppppplVar62 = ppppppplVar62 + 5;
        } while (ppppppplVar62 != ppppppplVar67);
        lVar36 = *(long *)(param_2 + 0x20);
        lVar40 = *(long *)(param_2 + 0x28);
      }
      uVar34 = (uint)ppppppplVar35;
      uVar43 = uVar43 + 1;
    } while (uVar43 < (ulong)(lVar40 - lVar36 >> 5));
  }
  lVar36 = *(long *)(param_2 + 0x38);
  lVar40 = *(long *)(param_2 + 0x40);
  if (lVar36 != lVar40) {
    puVar80 = (undefined8 *)((ulong)&uStack_110 | 4);
    do {
      ppppppplVar35 = (long *******)&pppppppuStack_160;
      FUN_10a003db8(ppppppplVar35,&uStack_110,lVar36);
      if (*ppppppplVar35 == (long ******)0x0) {
        FUN_109ffdddc("map::at:  key not found");
        goto LAB_10a6bbc74;
      }
      ppppppplVar35 = (long *******)(*ppppppplVar35 + 7);
      uStack_110 = (long *******)CONCAT44(uStack_110._4_4_,0x42ff0000);
      puVar80[1] = 0;
      *puVar80 = 0;
      puVar80[3] = 0;
      puVar80[2] = 0;
      puVar80[5] = 0;
      puVar80[4] = 0;
      *(undefined8 *)((long)puVar80 + 0x34) = 0;
      *(undefined8 *)((long)puVar80 + 0x2c) = 0;
      ppppplStack_c0 = (long *****)0x0;
      uStack_b8 = 0;
      uStack_b0._0_4_ = 0x2010000;
      uStack_a0 = 0;
      pppppppuStack_d0 = &ppppppplStack_108;
      pppppplStack_c8 = &ppppplStack_c0;
      ppppppplStack_a8 = (long *******)&uStack_110;
      func_0x000109a479a0(ppppppplVar35,&uStack_b0);
      param_4 = (long *******)&uStack_110;
      FUN_109ffa8ec(*(undefined8 *)(param_2 + 0x78),(ulong)param_3 & 0xffffffff,param_4,lVar36,
                    &pppppppuStack_160);
      uStack_b0 = (long *******)CONCAT44(uStack_b0._4_4_,0x2010000);
      uStack_a0 = 0;
      uVar34 = (uint)&uStack_b0;
      ppppppplStack_a8 = ppppppplVar35;
      func_0x000109a479a0(&uStack_110);
      if (pppppplStack_d8 != (long ******)0x0) {
        piVar75 = (int *)((long)pppppplStack_d8 + 0x14);
        do {
          iVar91 = *piVar75;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar75,0x10);
          if (bVar12) {
            *piVar75 = iVar91 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar91 + -1 == 0) {
          func_0x000109a848d4(&uStack_110);
        }
      }
      pppppplStack_d8 = (long ******)0x0;
      pppppplStack_f8 = (long ******)0x0;
      pppppplStack_100 = (long ******)0x0;
      ppppppplStack_e8 = (long *******)0x0;
      ppppppplStack_f0 = (long *******)0x0;
      if (0 < uStack_110._4_4_) {
        lVar37 = 0;
        do {
          *(undefined4 *)((long)pppppppuStack_d0 + lVar37 * 4) = 0;
          lVar37 = lVar37 + 1;
        } while (lVar37 < uStack_110._4_4_);
      }
      if (pppppplStack_c8 != &ppppplStack_c0 && pppppplStack_c8 != (long ******)0x0) {
        _free(pppppplStack_c8[-1]);
      }
      lVar36 = lVar36 + 0x18;
    } while (lVar36 != lVar40);
  }
  ppppppplVar68 = ppppppplStack_140;
  *param_1 = (long *****)0x0;
  param_1[1] = (long *****)0x0;
  param_1[2] = (long *****)0x0;
  for (ppppppplVar35 = ppppppplStack_148; ppppppplVar35 != ppppppplVar68;
      ppppppplVar35 = ppppppplVar35 + 0xc) {
    pppppplStack_100 = (long ******)0x0;
    uStack_110._4_4_ = (int)((ulong)uStack_110 >> 0x20);
    uStack_110._0_4_ = 0x1010000;
    uStack_b0._4_4_ = (undefined4)((ulong)uStack_b0 >> 0x20);
    uStack_b0._0_4_ = 0x2010000;
    uStack_a0 = 0;
    ppppppplStack_108 = ppppppplVar35;
    ppppppplStack_a8 = ppppppplVar35;
    func_0x000109ac9fc8(&uStack_110,&uStack_b0,0,0);
    pppppplStack_100 = (long ******)0x0;
    uStack_110 = (long *******)CONCAT44(uStack_110._4_4_,0x1010000);
    uStack_b0 = (long *******)CONCAT44(uStack_b0._4_4_,0x2010000);
    uStack_a0 = 0;
    ppppppplStack_108 = ppppppplVar35;
    ppppppplStack_a8 = ppppppplVar35;
    func_0x000109a491e0(&uStack_110,&uStack_b0,0);
    lVar36 = *(long *)(param_2 + 0x18);
    FUN_10a2421c8();
    FUN_10a048e7c(&pppppplStack_170,*(undefined8 *)(lVar36 + 0x1e0),0,
                  *(undefined4 *)((long)ppppppplVar35 + 0xc),*(undefined4 *)(ppppppplVar35 + 1),1,4,
                  0,0);
    (*(code *)(*pppppplStack_170)[0x13])(pppppplStack_170,ppppppplVar35[2],0,0);
    lVar36 = *(long *)(param_2 + 0x18);
    if (lVar36 == 0) {
      ppppppuVar24 = (undefined8 ******)0x2c0;
      __Znwm();
      ppppppuVar24[1] = (undefined8 *****)0x0;
      ppppppuVar24[2] = (undefined8 *****)0x0;
      param_4 = (long *******)(ppppppuVar24 + 3);
      *ppppppuVar24 = (undefined8 *****)&PTR_DAT_110b9fda0;
      FUN_10ab6aaa0(param_4,0,&pppppplStack_170);
      uStack_b0 = param_4;
      ppppppplStack_a8 = (long *******)ppppppuVar24;
      FUN_10a05b2a8(&uStack_b0,ppppppuVar24 + 8);
      FUN_10a05b04c(&ppppppplStack_120,&uStack_b0);
      ppppppplVar62 = ppppppplStack_a8;
      if (ppppppplStack_a8 != (long *******)0x0) {
        ppppppuVar24 = ppppppplStack_a8 + 1;
        do {
          pppppuVar46 = *ppppppuVar24;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppppppuVar24,0x10);
          if (bVar12) {
            *ppppppuVar24 = (undefined8 *****)((long)pppppuVar46 + -1);
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (pppppuVar46 == (undefined8 *****)0x0) {
          (*(code *)(*ppppppplStack_a8)[2])(ppppppplStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar62);
        }
      }
      if (ppppppplStack_118 == (long *******)0x0) {
        ppppppplStack_108 = (long *******)0x0;
      }
      else {
        ppppppplVar62 = ppppppplStack_118 + 1;
        do {
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar62,0x10);
          if (bVar12) {
            *ppppppplVar62 = (long ******)((long)*ppppppplVar62 + 1);
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        ppppppplStack_108 = ppppppplStack_118;
        if (ppppppplStack_118 != (long *******)0x0) {
          ppppppplVar62 = ppppppplStack_118 + 1;
          do {
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar62,0x10);
            if (bVar12) {
              *ppppppplVar62 = (long ******)((long)*ppppppplVar62 + 1);
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
        }
      }
      uStack_110 = ppppppplStack_120;
      pppppplStack_100 = (long ******)FUN_10a6d6eb8;
      pppppplStack_f8 = (long ******)&PTR_DAT_110c112c0;
      ppppppplStack_f0 = ppppppplStack_120;
      ppppppplStack_e8 = ppppppplStack_118;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_b0 = (long *******)&UNK_1053a6a3c;
      ppppppplStack_a8 = (long *******)&PTR_DAT_110ae9180;
      FUN_10a044790(&uStack_b0);
      (*(code *)*ppppppplStack_a8)(&ppppppplStack_a8);
      ppppppplVar62 = ppppppplStack_118;
      if (ppppppplStack_118 != (long *******)0x0) {
        ppppppplVar67 = ppppppplStack_118 + 1;
        do {
          pppppplVar58 = *ppppppplVar67;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar67,0x10);
          if (bVar12) {
            *ppppppplVar67 = (long ******)((long)pppppplVar58 + -1);
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (pppppplVar58 == (long ******)0x0) {
          (*(code *)(*ppppppplStack_118)[2])(ppppppplStack_118);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar62);
        }
      }
      ppppppplStack_178 = ppppppplStack_108;
      ppppppplStack_180 = uStack_110;
      if (ppppppplStack_108 != (long *******)0x0) {
        ppppppplVar62 = ppppppplStack_108 + 1;
        do {
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar62,0x10);
          if (bVar12) {
            *ppppppplVar62 = (long ******)((long)*ppppppplVar62 + 1);
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
      }
      FUN_10a044790(&pppppplStack_100);
      (*(code *)*pppppplStack_f8)(&pppppplStack_f8);
      if (ppppppplStack_108 != (long *******)0x0) {
        ppppppplVar62 = ppppppplStack_108 + 1;
        do {
          pppppplVar58 = *ppppppplVar62;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar62,0x10);
          if (bVar12) {
            *ppppppplVar62 = (long ******)((long)pppppplVar58 + -1);
            cVar11 = ExclusiveMonitorsStatus();
          }
          ppppppplVar67 = ppppppplStack_108;
        } while (cVar11 != '\0');
        goto LAB_10a6bbb38;
      }
    }
    else {
      ppppppplVar62 = *(long ********)(lVar36 + 0x858);
      ppppppplVar67 = *(long ********)(lVar36 + 0x860);
      if (ppppppplVar67 != (long *******)0x0) {
        ppppppplVar22 = ppppppplVar67 + 1;
        do {
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar22,0x10);
          if (bVar12) {
            *ppppppplVar22 = (long ******)((long)*ppppppplVar22 + 1);
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
      }
      uVar23 = 0x2a8;
      ppppppplStack_130 = ppppppplVar62;
      ppppppplStack_128 = ppppppplVar67;
      __Znwm();
      FUN_10ab6aaa0();
      ppppppplStack_120 = ppppppplVar62;
      ppppppplStack_118 = ppppppplVar67;
      if (ppppppplVar67 != (long *******)0x0) {
        ppppppplVar22 = ppppppplVar67 + 1;
        do {
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar22,0x10);
          if (bVar12) {
            *ppppppplVar22 = (long ******)((long)*ppppppplVar22 + 1);
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        ppppppplVar22 = ppppppplVar67 + 2;
        do {
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar22,0x10);
          if (bVar12) {
            *ppppppplVar22 = (long ******)((long)*ppppppplVar22 + 1);
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        do {
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar22,0x10);
          if (bVar12) {
            *ppppppplVar22 = (long ******)((long)*ppppppplVar22 + 1);
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar67);
      }
      param_4 = (long *******)&uStack_b0;
      uStack_b0 = ppppppplVar62;
      ppppppplStack_a8 = ppppppplVar67;
      FUN_10a05b208(&uStack_110,uVar23);
      FUN_10a05b04c(&ppppppplStack_180,&uStack_110);
      ppppppplVar62 = ppppppplStack_108;
      if (ppppppplStack_108 != (long *******)0x0) {
        ppppppplVar67 = ppppppplStack_108 + 1;
        do {
          pppppplVar58 = *ppppppplVar67;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar67,0x10);
          if (bVar12) {
            *ppppppplVar67 = (long ******)((long)pppppplVar58 + -1);
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (pppppplVar58 == (long ******)0x0) {
          (*(code *)(*ppppppplStack_108)[2])(ppppppplStack_108);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar62);
        }
      }
      if (ppppppplStack_a8 != (long *******)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      ppppppplVar62 = ppppppplStack_118;
      if (ppppppplStack_118 != (long *******)0x0) {
        ppppppplVar67 = ppppppplStack_118 + 1;
        do {
          pppppplVar58 = *ppppppplVar67;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar67,0x10);
          if (bVar12) {
            *ppppppplVar67 = (long ******)((long)pppppplVar58 + -1);
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (pppppplVar58 == (long ******)0x0) {
          (*(code *)(*ppppppplStack_118)[2])(ppppppplStack_118);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar62);
        }
      }
      if ((ppppppplStack_130 != (long *******)0x0) && (ppppppplStack_180 != (long *******)0x0)) {
        uStack_110 = ppppppplStack_180;
        ppppppplStack_108 = ppppppplStack_178;
        if (ppppppplStack_178 != (long *******)0x0) {
          ppppppplVar62 = ppppppplStack_178 + 1;
          do {
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar62,0x10);
            if (bVar12) {
              *ppppppplVar62 = (long ******)((long)*ppppppplVar62 + 1);
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
        }
        FUN_10aa88c30(ppppppplStack_130,&uStack_110);
        ppppppplVar62 = ppppppplStack_108;
        if (ppppppplStack_108 != (long *******)0x0) {
          ppppppplVar67 = ppppppplStack_108 + 1;
          do {
            pppppplVar58 = *ppppppplVar67;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar67,0x10);
            if (bVar12) {
              *ppppppplVar67 = (long ******)((long)pppppplVar58 + -1);
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (pppppplVar58 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_108)[2])(ppppppplStack_108);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar62);
          }
        }
      }
      if (ppppppplStack_128 != (long *******)0x0) {
        ppppppplVar62 = ppppppplStack_128 + 1;
        do {
          pppppplVar58 = *ppppppplVar62;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar62,0x10);
          if (bVar12) {
            *ppppppplVar62 = (long ******)((long)pppppplVar58 + -1);
            cVar11 = ExclusiveMonitorsStatus();
          }
          ppppppplVar67 = ppppppplStack_128;
        } while (cVar11 != '\0');
LAB_10a6bbb38:
        if (pppppplVar58 == (long ******)0x0) {
          (*(code *)(*ppppppplVar67)[2])(ppppppplVar67);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar67);
        }
      }
    }
    uVar34 = (uint)&ppppppplStack_180;
    func_0x00010a067b00(param_1);
    ppppppplVar62 = ppppppplStack_178;
    if (ppppppplStack_178 != (long *******)0x0) {
      ppppppplVar67 = ppppppplStack_178 + 1;
      do {
        pppppplVar58 = *ppppppplVar67;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar67,0x10);
        if (bVar12) {
          *ppppppplVar67 = (long ******)((long)pppppplVar58 + -1);
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (pppppplVar58 == (long ******)0x0) {
        (*(code *)(*ppppppplStack_178)[2])(ppppppplStack_178);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar62);
      }
    }
    plVar81 = plStack_168;
    if (plStack_168 != (long *)0x0) {
      plVar63 = plStack_168 + 1;
      do {
        lVar36 = *plVar63;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar63,0x10);
        if (bVar12) {
          *plVar63 = lVar36 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar36 == 0) {
        (**(code **)(*plStack_168 + 0x10))(plStack_168);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar81);
      }
    }
  }
  func_0x00010a6d6d00(ppppppplStack_158);
  uStack_110 = (long *******)&ppppppplStack_148;
  ppplVar25 = (long ***)&uStack_110;
  FUN_109ffe3e8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppplVar25;
  }
  ___stack_chk_fail();
  func_0x00010a0536d4(&uStack_110);
  func_0x00010a05248c(&ppppppplStack_180);
  FUN_10a054c5c(&ppppppplStack_130);
  func_0x00010a0523dc(&pppppplStack_170);
  pppppplStack_170 = param_1;
  FUN_10a04a568(&pppppplStack_170);
  func_0x00010a6d6d00(ppppppplStack_158);
  pppppppuStack_160 = &ppppppplStack_148;
  FUN_109ffe3e8(&pppppppuStack_160);
  __Unwind_Resume();
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppplVar65 = (long ***)ppplVar25[4];
  ppplVar27 = (long ***)ppplVar25[5];
  uStack_350 = (long *****)&UNK_10f66d764;
  uStack_348 = (long *****)0x47;
  pppppplVar58 = *param_4;
  if ((long)param_4[1] - (long)*param_4 >> 4 == (long)ppplVar27 - (long)ppplVar65 >> 5) {
    do {
      if (pppppplVar58 == param_4[1]) {
        ppplStack_398 = (long ***)0x0;
        ppplStack_3a0 = (long ***)0x0;
        uStack_388 = 0;
        plStack_390 = (long *)0x0;
        fStack_380 = 1.0;
        if (ppplVar27 == ppplVar65) goto LAB_10a6bc370;
        uVar43 = 0;
        goto LAB_10a6bbec8;
      }
      ppppplVar61 = *pppppplVar58;
      uStack_350 = (long *****)&UNK_10f66d7ac;
      uStack_348 = (long *****)0x37;
      pppppplVar58 = pppppplVar58 + 2;
    } while (ppppplVar61 != (long *****)0x0);
    FUN_10a0edfc4(&uStack_350);
  }
  else {
    FUN_10a0edfc4(&uStack_350);
  }
LAB_10a6be89c:
                    /* WARNING: Does not return */
  pcVar19 = (code *)SoftwareBreakpoint(1,0x10a6be8a0);
  (*pcVar19)();
joined_r0x00010a6bcc6c:
  if (plVar63 == (long *)0x0) goto LAB_10a6be808;
  ppplVar38 = (long ***)plVar63[1];
  if (ppplVar38 == ppplVar65) {
    ppplVar38 = (long ***)&ppplStack_3a0;
    func_0x000107c2b068(ppplVar38,plVar63 + 2,auStack_418);
    if (((ulong)ppplVar38 & 1) != 0) goto LAB_10a6bccc8;
  }
  else {
    if (((ulong)ppplVar27 & uVar43) == 0) {
      ppplVar38 = (long ***)((ulong)ppplVar38 & uVar43);
    }
    else if (ppplVar27 <= ppplVar38) {
      uVar55 = 0;
      if (ppplVar27 != (long ***)0x0) {
        uVar55 = (ulong)ppplVar38 / (ulong)ppplVar27;
      }
      ppplVar38 = (long ***)((long)ppplVar38 - uVar55 * (long)ppplVar27);
    }
    if (ppplVar38 != ppplVar74) goto LAB_10a6be808;
  }
  plVar63 = (long *)*plVar63;
  goto joined_r0x00010a6bcc6c;
LAB_10a6be808:
  FUN_109ffdddc(&UNK_10f639994);
  goto LAB_10a6be89c;
LAB_10a6bccc8:
  func_0x00010a04a704(&uStack_340,plVar63 + 5);
  ppppplStack_330 = (long *****)plVar63[7];
  ppppplStack_328 = (long *****)plVar63[8];
  func_0x000107c2b054(&ppppplStack_4a0,&DAT_10f398457);
  func_0x000109406570(ppppplVar66,&ppppplStack_4a0);
  func_0x00010937ba88();
  fStack_320 = ppppplStack_4c0._0_4_;
  if ((long)ppplStack_490 < 0) {
    __ZdlPv(ppppplStack_4a0);
  }
  ppppplStack_4a0 = (long *****)&UNK_10f66d7e4;
  ppplStack_498 = (long ***)0x32;
  if (2 < (uint)fStack_320) {
    FUN_10a0edfc4(&ppppplStack_4a0);
    goto LAB_10a6be89c;
  }
  func_0x000107c2b054(&ppppplStack_4a0,&UNK_10f630a88);
  func_0x000109406570(ppppplVar66,&ppppplStack_4a0);
  func_0x00010937ba88();
  ppppplVar32 = ppppplStack_4c0;
  iVar91 = (int)ppppplStack_4c0._0_4_;
  uVar43 = (ulong)ppppplStack_4c0 & 0xffffffff;
  if ((long)ppplStack_490 < 0) {
    __ZdlPv(ppppplStack_4a0);
  }
  if (iVar91 < 0) {
LAB_10a6be834:
    ppplStack_498 = (long ***)0x34;
    ppppplStack_4a0 = (long *****)&UNK_10f66d817;
    FUN_10a0edfc4(&ppppplStack_4a0);
    goto LAB_10a6be89c;
  }
  pplVar69 = ppplVar25[10];
  uVar55 = ((long)ppplVar25[0xb] - (long)pplVar69 >> 3) * -0x5555555555555555;
  ppppplStack_4a0 = (long *****)&UNK_10f66d817;
  ppplStack_498 = (long ***)0x34;
  if (uVar55 < uVar43 || uVar55 - uVar43 == 0) goto LAB_10a6be834;
  func_0x000107c2b054(&ppppplStack_4a0,&DAT_10f36dad5);
  func_0x000109406570(ppppplVar66,&ppppplStack_4a0);
  if ((long)ppplStack_490 < 0) {
    __ZdlPv(ppppplStack_4a0);
  }
  ppplStack_498 = (long ***)0x0;
  ppplStack_490 = (long ***)0x0;
  uStack_488 = 0x8000000000000000;
  cVar11 = *(char *)ppppplVar66;
  if (cVar11 == '\0') {
    uStack_488 = 1;
  }
  else {
    if (cVar11 == '\x02') {
      ppplStack_490 = *ppppplVar66[1];
      pppplStack_4b8 = (long ****)0x0;
      uStack_4a8 = 0x8000000000000000;
      ppplStack_4b0 = ppppplVar66[1][1];
      goto LAB_10a6bce80;
    }
    if (cVar11 == '\x01') {
      ppplStack_498 = *ppppplVar66[1];
      ppplStack_4b0 = (long ***)0x0;
      uStack_4a8 = 0x8000000000000000;
      pppplStack_4b8 = ppppplVar66[1] + 1;
      goto LAB_10a6bce80;
    }
    uStack_488 = 0;
  }
  pppplStack_4b8 = (long ****)0x0;
  ppplStack_4b0 = (long ***)0x0;
  uStack_4a8 = 1;
LAB_10a6bce80:
  pplVar69 = pplVar69 + ((ulong)ppppplVar32 & 0xffffffff) * 3;
  uStack_4f0 = 0;
  fVar90 = 0.0;
  fVar95 = 0.0;
  fVar82 = 0.0;
  ppppplStack_4c0 = ppppplVar66;
  ppppplStack_4a0 = ppppplVar66;
  while( true ) {
    ppppplVar66 = (long *****)&ppppplStack_4a0;
    func_0x00010937c708(ppppplVar66,&ppppplStack_4c0);
    puVar72 = puStack_3b8;
    puVar80 = puStack_3c0;
    if (((ulong)ppppplVar66 & 1) != 0) break;
    ppppplVar66 = (long *****)&ppppplStack_4a0;
    func_0x00010937c560(ppppplVar66);
    func_0x000107c2b054(&fStack_4d8,"start");
    func_0x000109406570(ppppplVar66,&fStack_4d8);
    func_0x00010937ba88();
    uVar7 = uStack_374;
    if (cStack_4c1 < '\0') {
      __ZdlPv(CONCAT44(uStack_4d4,fStack_4d8));
    }
    func_0x000107c2b054(&fStack_4d8,"end");
    func_0x000109406570(ppppplVar66,&fStack_4d8);
    func_0x00010937ba88();
    uVar18 = uStack_374;
    if (cStack_4c1 < '\0') {
      __ZdlPv(CONCAT44(uStack_4d4,fStack_4d8));
    }
    if ((uVar7 <= uVar34) && (uVar34 < uVar18)) {
      func_0x000107c2b054(&fStack_4d8,&DAT_10f68f0f0);
      ppppplVar32 = ppppplVar66;
      func_0x000109406570(ppppplVar66,&fStack_4d8);
      if (cStack_4c1 < '\0') {
        __ZdlPv(CONCAT44(uStack_4d4,fStack_4d8));
      }
      func_0x000107c2b054(&fStack_4d8,&DAT_10f68f0f0);
      func_0x000109406570(ppppplVar66,&fStack_4d8);
      if (cStack_4c1 < '\0') {
        __ZdlPv(CONCAT44(uStack_4d4,fStack_4d8));
      }
      func_0x0001094cf080(ppppplVar32,0);
      func_0x00010938d050();
      fVar95 = fStack_4d8;
      func_0x0001094cf080(ppppplVar32,1);
      func_0x00010938d050();
      fVar84 = fStack_4d8;
      func_0x0001094cf080(ppppplVar32,2);
      func_0x00010938d050();
      fVar82 = fStack_4d8;
      func_0x0001094cf080(ppppplVar66,0);
      func_0x00010938d050();
      func_0x0001094cf080(ppppplVar66,1);
      func_0x00010938d050();
      fVar90 = fStack_4d8;
      func_0x0001094cf080(ppppplVar66,2);
      func_0x00010938d050();
      uStack_4f0 = CONCAT44(fVar84,fVar95);
      fVar95 = fStack_4d8;
    }
    func_0x00010937c698(&ppppplStack_4a0);
  }
  fStack_31c = (float)uStack_4f0 / 255.0;
  fStack_318 = uStack_4f0._4_4_ / 255.0;
  fStack_314 = fVar82 / 255.0;
  plVar63 = pplVar69[2];
  iVar91 = -(uint)(SUB84(plVar63,0) < 0.0);
  iVar92 = -(uint)((float)((ulong)plVar63 >> 0x20) < 0.0);
  fVar82 = (float)CONCAT13((byte)((ulong)plVar63 >> 0x18) & ~(byte)((uint)iVar91 >> 0x18),
                           CONCAT12((byte)((ulong)plVar63 >> 0x10) & ~(byte)((uint)iVar91 >> 0x10),
                                    CONCAT11((byte)((ulong)plVar63 >> 8) &
                                             ~(byte)((uint)iVar91 >> 8),
                                             (byte)plVar63 & ~(byte)iVar91)));
  uStack_310 = CONCAT44(fVar82 / fVar90,0x3f800000);
  uStack_308 = CONCAT44(SUB84(*pplVar69,0) / 255.0,
                        (float)(CONCAT17((byte)((ulong)plVar63 >> 0x38) &
                                         ~(byte)((uint)iVar92 >> 0x18),
                                         CONCAT16((byte)((ulong)plVar63 >> 0x30) &
                                                  ~(byte)((uint)iVar92 >> 0x10),
                                                  CONCAT15((byte)((ulong)plVar63 >> 0x28) &
                                                           ~(byte)((uint)iVar92 >> 8),
                                                           CONCAT14((byte)((ulong)plVar63 >> 0x20) &
                                                                    ~(byte)iVar92,fVar82)))) >> 0x20
                               ) / fVar95);
  uStack_300 = CONCAT44(*(float *)(pplVar69 + 1) / 255.0,(float)((ulong)*pplVar69 >> 0x20) / 255.0);
  if (puStack_3b8 < puStack_3b0) {
    puStack_3b8[1] = uStack_348;
    *puStack_3b8 = uStack_350;
    puStack_3b8[3] = uStack_338;
    puStack_3b8[2] = uStack_340;
    if (uStack_338 != (undefined **)0x0) {
      ppuVar1 = uStack_338 + 1;
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar12) {
          *ppuVar1 = *ppuVar1 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    puStack_3b8[10] = uStack_300;
    puStack_3b8[7] = CONCAT44(fStack_314,fStack_318);
    puStack_3b8[6] = CONCAT44(fStack_31c,fStack_320);
    puStack_3b8[9] = uStack_308;
    puStack_3b8[8] = uStack_310;
    puStack_3b8[5] = ppppplStack_328;
    puStack_3b8[4] = ppppplStack_330;
    puVar79 = puStack_3b8 + 0xb;
  }
  else {
    lVar36 = (long)puStack_3b8 - (long)puStack_3c0;
    uVar43 = (lVar36 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
    if (0x2e8ba2e8ba2e8ba < uVar43) {
      FUN_10a6c9580();
      goto LAB_10a6be89c;
    }
    lVar40 = (long)puStack_3b0 - (long)puStack_3c0 >> 3;
    uVar55 = lVar40 * 0x5d1745d1745d1746;
    if (uVar55 < uVar43 || uVar55 - uVar43 == 0) {
      uVar55 = uVar43;
    }
    if (0x1745d1745d1745c < (ulong)(lVar40 * 0x2e8ba2e8ba2e8ba3)) {
      uVar55 = 0x2e8ba2e8ba2e8ba;
    }
    if (0x2e8ba2e8ba2e8ba < uVar55) {
      func_0x000109ffded8();
      goto LAB_10a6be89c;
    }
    lVar40 = uVar55 * 0x58;
    __Znwm();
    puVar79 = (undefined8 *)(lVar40 + lVar36);
    puVar79[1] = uStack_348;
    *puVar79 = uStack_350;
    puVar79[3] = uStack_338;
    puVar79[2] = uStack_340;
    if (uStack_338 != (undefined **)0x0) {
      ppuVar1 = uStack_338 + 1;
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar12) {
          *ppuVar1 = *ppuVar1 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      lVar36 = (long)puStack_3b8 - (long)puStack_3c0;
      puVar72 = puStack_3b8;
      puVar80 = puStack_3c0;
    }
    puVar79[5] = ppppplStack_328;
    puVar79[4] = ppppplStack_330;
    puVar79[7] = CONCAT44(fStack_314,fStack_318);
    puVar79[6] = CONCAT44(fStack_31c,fStack_320);
    puVar79[9] = uStack_308;
    puVar79[8] = uStack_310;
    puVar79[10] = uStack_300;
    puVar77 = (undefined8 *)((long)puVar79 - lVar36);
    puVar41 = puVar80;
    puVar50 = puVar77;
    if (puVar80 != puVar72) {
      do {
        uVar23 = *puVar41;
        puVar50[1] = puVar41[1];
        *puVar50 = uVar23;
        uVar23 = puVar41[2];
        puVar50[3] = puVar41[3];
        puVar50[2] = uVar23;
        puVar41[2] = 0;
        puVar41[3] = 0;
        uVar23 = puVar41[4];
        uVar31 = puVar41[5];
        uVar14 = puVar41[6];
        uVar15 = puVar41[7];
        uVar16 = puVar41[8];
        uVar17 = puVar41[9];
        puVar50[10] = puVar41[10];
        puVar50[7] = uVar15;
        puVar50[6] = uVar14;
        puVar50[9] = uVar17;
        puVar50[8] = uVar16;
        puVar50[5] = uVar31;
        puVar50[4] = uVar23;
        puVar41 = puVar41 + 0xb;
        puVar50 = puVar50 + 0xb;
      } while (puVar41 != puVar72);
      do {
        func_0x00010a05248c(puVar80 + 2);
        puVar80 = puVar80 + 0xb;
        puVar41 = puStack_3c0;
      } while (puVar80 != puVar72);
    }
    puStack_3b0 = (undefined8 *)(lVar40 + uVar55 * 0x58);
    puVar79 = puVar79 + 0xb;
    puStack_3c0 = puVar77;
    if (puVar41 != (undefined8 *)0x0) {
      puStack_3b8 = puVar79;
      __ZdlPv(puVar41);
    }
  }
  ppuVar1 = uStack_338;
  puStack_3b8 = puVar79;
  if (uStack_338 != (undefined **)0x0) {
    ppuVar2 = uStack_338 + 1;
    do {
      puVar51 = *ppuVar2;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar12) {
        *ppuVar2 = puVar51 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (puVar51 == (undefined *)0x0) {
      (**(code **)(*uStack_338 + 0x10))(uStack_338);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar1);
    }
  }
LAB_10a6bcb04:
  if (cStack_461 < '\0') {
    __ZdlPv(auStack_478[0]);
  }
  func_0x00010937c698(&ppppplStack_438);
  goto LAB_10a6bca0c;
LAB_10a6bbec8:
  do {
    if ((ulong)((long)param_4[1] - (long)*param_4 >> 4) <= uVar43) goto LAB_10a6be89c;
    pplVar69 = ppplVar65[uVar43 * 4 + 1];
    pplVar71 = ppplVar65[uVar43 * 4 + 2];
    if (pplVar69 != pplVar71) {
      pppppplVar58 = *param_4 + uVar43 * 2;
      do {
        ppppplVar61 = pppppplVar58[1];
        uStack_350 = *pppppplVar58;
        uStack_348 = pppppplVar58[1];
        if (ppppplVar61 != (long *****)0x0) {
          ppppplVar66 = ppppplVar61 + 1;
          do {
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(ppppplVar66,0x10);
            if (bVar12) {
              *ppppplVar66 = (long ****)((long)*ppppplVar66 + 1);
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
        }
        uStack_340 = (code *)pplVar69[3];
        uStack_338 = (undefined **)
                     ((ulong)(uStack_340 + ((ulong)*(uint *)((long)pplVar69 + 0x24) << 0x20)) &
                      0xffffffff00000000 |
                     (ulong)(uint)(*(int *)(pplVar69 + 4) + *(int *)(pplVar69 + 3)));
        ppplVar27 = (long ***)&ppplStack_3a0;
        func_0x000107c2b05c(ppplVar27,pplVar69);
        ppplVar74 = ppplStack_398;
        if (ppplStack_398 != (long ***)0x0) {
          uVar55 = (long)ppplStack_398 - 1;
          if (((ulong)ppplStack_398 & uVar55) == 0) {
            ppplVar65 = (long ***)(uVar55 & (ulong)ppplVar27);
          }
          else {
            ppplVar65 = ppplVar27;
            if (ppplStack_398 <= ppplVar27) {
              uVar64 = 0;
              if (ppplStack_398 != (long ***)0x0) {
                uVar64 = (ulong)ppplVar27 / (ulong)ppplStack_398;
              }
              ppplVar65 = (long ***)((long)ppplVar27 - uVar64 * (long)ppplStack_398);
            }
          }
          if (ppplStack_3a0[(long)ppplVar65] != (long **)0x0) {
            for (plVar81 = *ppplStack_3a0[(long)ppplVar65]; plVar81 != (long *)0x0;
                plVar81 = (long *)*plVar81) {
              ppplVar38 = (long ***)plVar81[1];
              if (ppplVar38 == ppplVar27) {
                ppplVar38 = (long ***)&ppplStack_3a0;
                func_0x000107c2b068(ppplVar38,plVar81 + 2,pplVar69);
                if (((ulong)ppplVar38 & 1) != 0) {
                  if (ppppplVar61 != (long *****)0x0) {
                    ppppplVar66 = ppppplVar61 + 1;
                    do {
                      pppplVar47 = *ppppplVar66;
                      cVar11 = '\x01';
                      bVar12 = (bool)ExclusiveMonitorPass(ppppplVar66,0x10);
                      if (bVar12) {
                        *ppppplVar66 = (long ****)((long)pppplVar47 + -1);
                        cVar11 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar11 != '\0');
                    if (pppplVar47 == (long ****)0x0) {
                      (*(code *)(*ppppplVar61)[2])(ppppplVar61);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar61);
                    }
                  }
                  goto LAB_10a6bc2cc;
                }
              }
              else {
                if (((ulong)ppplVar74 & uVar55) == 0) {
                  ppplVar38 = (long ***)((ulong)ppplVar38 & uVar55);
                }
                else if (ppplVar74 <= ppplVar38) {
                  uVar64 = 0;
                  if (ppplVar74 != (long ***)0x0) {
                    uVar64 = (ulong)ppplVar38 / (ulong)ppplVar74;
                  }
                  ppplVar38 = (long ***)((long)ppplVar38 - uVar64 * (long)ppplVar74);
                }
                if (ppplVar38 != ppplVar65) break;
              }
            }
          }
        }
        plVar81 = (long *)0x48;
        __Znwm();
        uStack_298 = &ppplStack_3a0;
        uStack_2a0._0_4_ = SUB84(plVar81,0);
        uStack_2a0._4_4_ = (float)((ulong)plVar81 >> 0x20);
        fStack_290 = 0.0;
        fStack_28c = 0.0;
        *plVar81 = 0;
        plVar81[1] = (long)ppplVar27;
        if (*(char *)((long)pplVar69 + 0x17) < '\0') {
          func_0x000107c3192c(plVar81 + 2,*pplVar69,pplVar69[1]);
        }
        else {
          plVar63 = *pplVar69;
          plVar49 = pplVar69[1];
          plVar81[4] = (long)pplVar69[2];
          plVar81[3] = (long)plVar49;
          plVar81[2] = (long)plVar63;
        }
        plVar81[5] = (long)uStack_350;
        plVar81[6] = (long)ppppplVar61;
        uStack_348 = (long *****)0x0;
        uStack_350 = (long *****)0x0;
        plVar81[8] = (long)uStack_338;
        plVar81[7] = (long)uStack_340;
        fStack_290 = (float)CONCAT31(fStack_290._1_3_,1);
        if ((ppplVar74 == (long ***)0x0) ||
           (fStack_380 * (float)ppplVar74 < (float)(uStack_388 + 1))) {
          uVar55 = 1;
          if ((long ***)0x2 < ppplVar74) {
            uVar55 = (ulong)(((ulong)ppplVar74 & (long)ppplVar74 - 1U) != 0);
          }
          ppplVar65 = (long ***)(uVar55 | (long)ppplVar74 << 1);
          ppplVar74 = (long ***)(long)((float)(uStack_388 + 1) / fStack_380);
          if (ppplVar65 <= ppplVar74) {
            ppplVar65 = ppplVar74;
          }
          if ((long)ppplVar65 - 1U == 0) {
            ppplVar65 = (long ***)0x2;
          }
          else if (((ulong)ppplVar65 & (long)ppplVar65 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
          }
          ppplVar74 = ppplStack_398;
          if (ppplStack_398 < ppplVar65) {
LAB_10a6bc0d4:
            if ((ulong)ppplVar65 >> 0x3d != 0) {
              func_0x000109ffded8();
              goto LAB_10a6be89c;
            }
            pplVar26 = (long **)((long)ppplVar65 << 3);
            __Znwm();
            bVar12 = ppplStack_3a0 != (long ***)0x0;
            ppplStack_3a0 = (long ***)pplVar26;
            if (bVar12) {
              __ZdlPv();
            }
            ppplVar74 = (long ***)0x0;
            do {
              ppplStack_3a0[(long)ppplVar74] = (long **)0x0;
              ppplVar74 = (long ***)((long)ppplVar74 + 1);
            } while (ppplVar65 != ppplVar74);
            ppplStack_398 = ppplVar65;
            if (plStack_390 != (long *)0x0) {
              ppplVar74 = (long ***)plStack_390[1];
              uVar55 = (long)ppplVar65 - 1;
              if (((ulong)ppplVar65 & uVar55) == 0) {
                ppplVar74 = (long ***)((ulong)ppplVar74 & uVar55);
              }
              else if (ppplVar65 <= ppplVar74) {
                uVar64 = 0;
                if (ppplVar65 != (long ***)0x0) {
                  uVar64 = (ulong)ppplVar74 / (ulong)ppplVar65;
                }
                ppplVar74 = (long ***)((long)ppplVar74 - uVar64 * (long)ppplVar65);
              }
              ppplStack_3a0[(long)ppplVar74] = &plStack_390;
              plVar63 = (long *)*plStack_390;
              plVar49 = plStack_390;
              while (plVar63 != (long *)0x0) {
                ppplVar38 = (long ***)plVar63[1];
                if (((ulong)ppplVar65 & uVar55) == 0) {
                  ppplVar38 = (long ***)((ulong)ppplVar38 & uVar55);
                }
                else if (ppplVar65 <= ppplVar38) {
                  uVar64 = 0;
                  if (ppplVar65 != (long ***)0x0) {
                    uVar64 = (ulong)ppplVar38 / (ulong)ppplVar65;
                  }
                  ppplVar38 = (long ***)((long)ppplVar38 - uVar64 * (long)ppplVar65);
                }
                plVar76 = plVar63;
                if (ppplVar38 != ppplVar74) {
                  if (ppplStack_3a0[(long)ppplVar38] == (long **)0x0) {
                    ppplStack_3a0[(long)ppplVar38] = (long **)plVar49;
                    ppplVar74 = ppplVar38;
                  }
                  else {
                    *plVar49 = *plVar63;
                    *plVar63 = (long)*ppplStack_3a0[(long)ppplVar38];
                    *ppplStack_3a0[(long)ppplVar38] = plVar63;
                    plVar76 = plVar49;
                  }
                }
                plVar49 = plVar76;
                plVar63 = (long *)*plVar76;
              }
            }
          }
          else if (ppplVar65 < ppplStack_398) {
            ppplVar38 = (long ***)(long)((float)uStack_388 / fStack_380);
            if ((ppplStack_398 < (long ***)0x3) ||
               (((ulong)ppplStack_398 & (long)ppplStack_398 - 1U) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if ((long ***)0x1 < ppplVar38) {
              ppplVar38 = (long ***)(1L << (-LZCOUNT((long)ppplVar38 + -1) & 0x3fU));
            }
            ppplVar28 = ppplStack_3a0;
            if (ppplVar65 <= ppplVar38) {
              ppplVar65 = ppplVar38;
            }
            if (ppplVar65 < ppplVar74) {
              if (ppplVar65 != (long ***)0x0) goto LAB_10a6bc0d4;
              ppplStack_3a0 = (long ***)0x0;
              if (ppplVar28 != (long ***)0x0) {
                __ZdlPv();
              }
              ppplStack_398 = (long ***)0x0;
            }
          }
          ppplVar74 = ppplStack_398;
          if (((ulong)ppplStack_398 & (long)ppplStack_398 - 1U) == 0) {
            ppplVar65 = (long ***)((long)ppplStack_398 - 1U & (ulong)ppplVar27);
          }
          else {
            ppplVar65 = ppplVar27;
            if (ppplStack_398 <= ppplVar27) {
              uVar55 = 0;
              if (ppplStack_398 != (long ***)0x0) {
                uVar55 = (ulong)ppplVar27 / (ulong)ppplStack_398;
              }
              ppplVar65 = (long ***)((long)ppplVar27 - uVar55 * (long)ppplStack_398);
            }
          }
        }
        plVar63 = (long *)ppplStack_3a0[(long)ppplVar65];
        if (plVar63 == (long *)0x0) {
          *plVar81 = (long)plStack_390;
          ppplStack_3a0[(long)ppplVar65] = &plStack_390;
          plStack_390 = plVar81;
          if (*plVar81 != 0) {
            ppplVar27 = *(long ****)(*plVar81 + 8);
            if (((ulong)ppplVar74 & (long)ppplVar74 - 1U) == 0) {
              ppplVar27 = (long ***)((ulong)ppplVar27 & (long)ppplVar74 - 1U);
            }
            else if (ppplVar74 <= ppplVar27) {
              uVar55 = 0;
              if (ppplVar74 != (long ***)0x0) {
                uVar55 = (ulong)ppplVar27 / (ulong)ppplVar74;
              }
              ppplVar27 = (long ***)((long)ppplVar27 - uVar55 * (long)ppplVar74);
            }
            ppplStack_3a0[(long)ppplVar27] = (long **)plVar81;
          }
        }
        else {
          *plVar81 = *plVar63;
          *plVar63 = (long)plVar81;
        }
        uStack_2a0._0_4_ = 0.0;
        uStack_2a0._4_4_ = 0.0;
        uStack_388 = uStack_388 + 1;
        func_0x00010a6d6f2c(&uStack_2a0);
LAB_10a6bc2cc:
        pplVar69 = pplVar69 + 5;
      } while (pplVar69 != pplVar71);
      ppplVar65 = (long ***)ppplVar25[4];
      ppplVar27 = (long ***)ppplVar25[5];
    }
    uVar43 = uVar43 + 1;
  } while (uVar43 < (ulong)((long)ppplVar27 - (long)ppplVar65 >> 5));
LAB_10a6bc370:
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  if (ppplVar27 != ppplVar65) {
    plVar81 = (long *)0x0;
    ppppplVar61 = (long *****)(ppplVar25 + 0xd);
    auVar83 = NEON_fmov(0x3f800000,4);
    do {
      if ((long *)((long)param_4[1] - (long)*param_4 >> 4) <= plVar81) goto LAB_10a6be89c;
      puStack_3b0 = (undefined8 *)0x0;
      plStack_3c8 = (long *)0x0;
      uStack_3d0 = 0;
      puStack_3b8 = (undefined8 *)0x0;
      puStack_3c0 = (undefined8 *)0x0;
      func_0x00010a04a704(&uStack_3d0,*param_4 + (long)plVar81 * 2);
      plStack_3f8 = (long *)0x0;
      lStack_400 = 0;
      uStack_3e8 = 0;
      plStack_3f0 = (long *)0x0;
      fStack_3e0 = 1.0;
      pplVar71 = ppplVar65[(long)plVar81 * 4 + 2];
      plVar63 = plVar81;
      for (pplVar69 = ppplVar65[(long)plVar81 * 4 + 1]; pplVar69 != pplVar71;
          pplVar69 = pplVar69 + 5) {
        iVar91 = *(int *)(pplVar69 + 3);
        plVar76 = pplVar69[3];
        iVar92 = *(int *)(pplVar69 + 4);
        uVar7 = *(uint *)((long)pplVar69 + 0x24);
        plVar49 = &lStack_400;
        func_0x000107c2b05c(plVar49,pplVar69);
        plVar48 = plStack_3f8;
        if (plStack_3f8 != (long *)0x0) {
          uVar43 = (long)plStack_3f8 - 1;
          if (((ulong)plStack_3f8 & uVar43) == 0) {
            plVar63 = (long *)(uVar43 & (ulong)plVar49);
          }
          else {
            plVar63 = plVar49;
            if (plStack_3f8 <= plVar49) {
              uVar55 = 0;
              if (plStack_3f8 != (long *)0x0) {
                uVar55 = (ulong)plVar49 / (ulong)plStack_3f8;
              }
              plVar63 = (long *)((long)plVar49 - uVar55 * (long)plStack_3f8);
            }
          }
          puVar80 = *(undefined8 **)(lStack_400 + (long)plVar63 * 8);
          if (puVar80 != (undefined8 *)0x0) {
            for (plVar70 = (long *)*puVar80; plVar70 != (long *)0x0; plVar70 = (long *)*plVar70) {
              plVar39 = (long *)plVar70[1];
              if (plVar39 == plVar49) {
                plVar39 = &lStack_400;
                func_0x000107c2b068(plVar39,plVar70 + 2,pplVar69);
                if (((ulong)plVar39 & 1) != 0) goto LAB_10a6bc794;
              }
              else {
                if (((ulong)plVar48 & uVar43) == 0) {
                  plVar39 = (long *)((ulong)plVar39 & uVar43);
                }
                else if (plVar48 <= plVar39) {
                  uVar55 = 0;
                  if (plVar48 != (long *)0x0) {
                    uVar55 = (ulong)plVar39 / (ulong)plVar48;
                  }
                  plVar39 = (long *)((long)plVar39 - uVar55 * (long)plVar48);
                }
                if (plVar39 != plVar63) break;
              }
            }
          }
        }
        plVar70 = (long *)0x38;
        __Znwm();
        *plVar70 = 0;
        plVar70[1] = (long)plVar49;
        if (*(char *)((long)pplVar69 + 0x17) < '\0') {
          func_0x000107c3192c(plVar70 + 2,*pplVar69,pplVar69[1]);
        }
        else {
          plVar39 = *pplVar69;
          plVar13 = pplVar69[1];
          plVar70[4] = (long)pplVar69[2];
          plVar70[3] = (long)plVar13;
          plVar70[2] = (long)plVar39;
        }
        plVar70[5] = 0;
        plVar70[6] = 0;
        if ((plVar48 == (long *)0x0) || (fStack_3e0 * (float)plVar48 < (float)(uStack_3e8 + 1))) {
          uVar43 = 1;
          if ((long *)0x2 < plVar48) {
            uVar43 = (ulong)(((ulong)plVar48 & (long)plVar48 - 1U) != 0);
          }
          plVar63 = (long *)(uVar43 | (long)plVar48 << 1);
          plVar48 = (long *)(long)((float)(uStack_3e8 + 1) / fStack_3e0);
          if (plVar63 <= plVar48) {
            plVar63 = plVar48;
          }
          if ((long)plVar63 - 1U == 0) {
            plVar63 = (long *)0x2;
          }
          else if (((ulong)plVar63 & (long)plVar63 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
          }
          plVar48 = plStack_3f8;
          if (plStack_3f8 < plVar63) {
LAB_10a6bc5a0:
            if ((ulong)plVar63 >> 0x3d != 0) {
              func_0x000109ffded8();
              goto LAB_10a6be89c;
            }
            lVar36 = (long)plVar63 << 3;
            __Znwm();
            bVar12 = lStack_400 != 0;
            lStack_400 = lVar36;
            if (bVar12) {
              __ZdlPv();
            }
            plVar48 = (long *)0x0;
            do {
              *(undefined8 *)(lStack_400 + (long)plVar48 * 8) = 0;
              plVar48 = (long *)((long)plVar48 + 1);
            } while (plVar63 != plVar48);
            plStack_3f8 = plVar63;
            if (plStack_3f0 != (long *)0x0) {
              plVar48 = (long *)plStack_3f0[1];
              uVar43 = (long)plVar63 - 1;
              if (((ulong)plVar63 & uVar43) == 0) {
                plVar48 = (long *)((ulong)plVar48 & uVar43);
              }
              else if (plVar63 <= plVar48) {
                uVar55 = 0;
                if (plVar63 != (long *)0x0) {
                  uVar55 = (ulong)plVar48 / (ulong)plVar63;
                }
                plVar48 = (long *)((long)plVar48 - uVar55 * (long)plVar63);
              }
              *(long ***)(lStack_400 + (long)plVar48 * 8) = &plStack_3f0;
              plVar39 = (long *)*plStack_3f0;
              plVar13 = plStack_3f0;
              while (plVar39 != (long *)0x0) {
                plVar60 = (long *)plVar39[1];
                if (((ulong)plVar63 & uVar43) == 0) {
                  plVar60 = (long *)((ulong)plVar60 & uVar43);
                }
                else if (plVar63 <= plVar60) {
                  uVar55 = 0;
                  if (plVar63 != (long *)0x0) {
                    uVar55 = (ulong)plVar60 / (ulong)plVar63;
                  }
                  plVar60 = (long *)((long)plVar60 - uVar55 * (long)plVar63);
                }
                plVar59 = plVar39;
                if (plVar60 != plVar48) {
                  if (*(long *)(lStack_400 + (long)plVar60 * 8) == 0) {
                    *(long **)(lStack_400 + (long)plVar60 * 8) = plVar13;
                    plVar48 = plVar60;
                  }
                  else {
                    *plVar13 = *plVar39;
                    *plVar39 = **(long **)(lStack_400 + (long)plVar60 * 8);
                    **(undefined8 **)(lStack_400 + (long)plVar60 * 8) = plVar39;
                    plVar59 = plVar13;
                  }
                }
                plVar13 = plVar59;
                plVar39 = (long *)*plVar59;
              }
            }
          }
          else if (plVar63 < plStack_3f8) {
            plVar39 = (long *)(long)((float)uStack_3e8 / fStack_3e0);
            if ((plStack_3f8 < (long *)0x3) || (((ulong)plStack_3f8 & (long)plStack_3f8 - 1U) != 0))
            {
              __ZNSt3__112__next_primeEm();
            }
            else if ((long *)0x1 < plVar39) {
              plVar39 = (long *)(1L << (-LZCOUNT((long)plVar39 + -1) & 0x3fU));
            }
            lVar36 = lStack_400;
            if (plVar63 <= plVar39) {
              plVar63 = plVar39;
            }
            if (plVar63 < plVar48) {
              if (plVar63 != (long *)0x0) goto LAB_10a6bc5a0;
              lStack_400 = 0;
              if (lVar36 != 0) {
                __ZdlPv();
              }
              plStack_3f8 = (long *)0x0;
            }
          }
          plVar48 = plStack_3f8;
          if (((ulong)plStack_3f8 & (long)plStack_3f8 - 1U) == 0) {
            plVar63 = (long *)((long)plStack_3f8 - 1U & (ulong)plVar49);
          }
          else {
            plVar63 = plVar49;
            if (plStack_3f8 <= plVar49) {
              uVar43 = 0;
              if (plStack_3f8 != (long *)0x0) {
                uVar43 = (ulong)plVar49 / (ulong)plStack_3f8;
              }
              plVar63 = (long *)((long)plVar49 - uVar43 * (long)plStack_3f8);
            }
          }
        }
        plVar49 = *(long **)(lStack_400 + (long)plVar63 * 8);
        if (plVar49 == (long *)0x0) {
          *plVar70 = (long)plStack_3f0;
          *(long ***)(lStack_400 + (long)plVar63 * 8) = &plStack_3f0;
          plStack_3f0 = plVar70;
          if (*plVar70 != 0) {
            plVar49 = *(long **)(*plVar70 + 8);
            if (((ulong)plVar48 & (long)plVar48 - 1U) == 0) {
              plVar49 = (long *)((ulong)plVar49 & (long)plVar48 - 1U);
            }
            else if (plVar48 <= plVar49) {
              uVar43 = 0;
              if (plVar48 != (long *)0x0) {
                uVar43 = (ulong)plVar49 / (ulong)plVar48;
              }
              plVar49 = (long *)((long)plVar49 - uVar43 * (long)plVar48);
            }
            *(long **)(lStack_400 + (long)plVar49 * 8) = plVar70;
          }
        }
        else {
          *plVar70 = *plVar49;
          *plVar49 = (long)plVar70;
        }
        uStack_3e8 = uStack_3e8 + 1;
LAB_10a6bc794:
        plVar70[5] = (long)plVar76;
        plVar70[6] = (long)plVar76 + ((ulong)uVar7 << 0x20) & 0xffffffff00000000 |
                     (ulong)(uint)(iVar92 + iVar91);
      }
      uStack_298 = (long ****)0x0;
      fStack_28c = 0.0;
      fStack_290 = 0.0;
      uStack_288 = 0x8000000000000000;
      cVar11 = *(char *)ppppplVar61;
      uStack_370 = ppppplVar61;
      uStack_2a0 = ppppplVar61;
      if (cVar11 == '\0') {
        uStack_288 = 1;
LAB_10a6bc8cc:
        uStack_368 = (long *****)0x0;
        uStack_360 = (long *)0x0;
        uStack_358 = 1;
      }
      else if (cVar11 == '\x02') {
        plVar63 = *ppplVar25[0xe];
        fStack_290 = SUB84(plVar63,0);
        fStack_28c = (float)((ulong)plVar63 >> 0x20);
        uStack_368 = (long *****)0x0;
        uStack_358 = 0x8000000000000000;
        uStack_360 = ppplVar25[0xe][1];
      }
      else {
        if (cVar11 != '\x01') {
          uStack_288 = 0;
          goto LAB_10a6bc8cc;
        }
        uStack_368 = (long *****)(ppplVar25[0xe] + 1);
        uStack_298 = (long ****)*ppplVar25[0xe];
        uStack_358 = 0x8000000000000000;
        uStack_360 = (long *)0x0;
      }
      while( true ) {
        puVar80 = &uStack_2a0;
        func_0x000109379420(puVar80,&uStack_370);
        if ((int)puVar80 != 0) break;
        ppppplVar66 = (long *****)&uStack_2a0;
        func_0x00010937b950();
        func_0x000107c2b054(&uStack_350,"id");
        func_0x000109406570(ppppplVar66,&uStack_350);
        func_0x00010937c804(auStack_418);
        if ((long)uStack_340 < 0) {
          __ZdlPv(uStack_350);
        }
        func_0x000107c2b054(&uStack_350,&DAT_10f2c3ed3);
        func_0x000109406570(ppppplVar66,&uStack_350);
        if ((long)uStack_340 < 0) {
          __ZdlPv(uStack_350);
        }
        ppppplStack_430 = (long *****)0x0;
        ppplStack_428 = (long ***)0x0;
        uStack_420 = 0x8000000000000000;
        cVar11 = *(char *)ppppplVar66;
        ppppplStack_460 = ppppplVar66;
        ppppplStack_438 = ppppplVar66;
        if (cVar11 == '\0') {
          uStack_420 = 1;
LAB_10a6bc9fc:
          ppppplStack_458 = (long *****)0x0;
          ppplStack_450 = (long ***)0x0;
          uStack_448 = 1;
        }
        else if (cVar11 == '\x02') {
          ppplStack_428 = *ppppplVar66[1];
          ppppplStack_458 = (long *****)0x0;
          uStack_448 = 0x8000000000000000;
          ppplStack_450 = ppppplVar66[1][1];
        }
        else {
          if (cVar11 != '\x01') {
            uStack_420 = 0;
            goto LAB_10a6bc9fc;
          }
          ppppplStack_430 = (long *****)*ppppplVar66[1];
          ppplStack_450 = (long ***)0x0;
          uStack_448 = 0x8000000000000000;
          ppppplStack_458 = (long *****)(ppppplVar66[1] + 1);
        }
LAB_10a6bca0c:
        ppppplVar66 = (long *****)&ppppplStack_438;
        func_0x00010937c708(ppppplVar66,&ppppplStack_460);
        if ((int)ppppplVar66 == 0) {
          ppppplVar66 = (long *****)&ppppplStack_438;
          func_0x00010937c560();
          func_0x000107c2b054(&uStack_350,&UNK_10f630a94);
          func_0x000109406570(ppppplVar66,&uStack_350);
          func_0x00010937c804(auStack_478);
          if ((long)uStack_340 < 0) {
            __ZdlPv(uStack_350);
          }
          plVar63 = &lStack_400;
          func_0x000107c2b05c(plVar63,auStack_478);
          plVar49 = plStack_3f8;
          if (plStack_3f8 != (long *)0x0) {
            uVar43 = (long)plStack_3f8 - 1;
            if (((ulong)plStack_3f8 & uVar43) == 0) {
              plVar76 = (long *)(uVar43 & (ulong)plVar63);
            }
            else {
              plVar76 = plVar63;
              if (plStack_3f8 <= plVar63) {
                uVar55 = 0;
                if (plStack_3f8 != (long *)0x0) {
                  uVar55 = (ulong)plVar63 / (ulong)plStack_3f8;
                }
                plVar76 = (long *)((long)plVar63 - uVar55 * (long)plStack_3f8);
              }
            }
            plVar48 = *(long **)(lStack_400 + (long)plVar76 * 8);
            if (plVar48 != (long *)0x0) {
              for (plVar48 = (long *)*plVar48; plVar48 != (long *)0x0; plVar48 = (long *)*plVar48) {
                plVar70 = (long *)plVar48[1];
                if (plVar70 == plVar63) {
                  plVar70 = &lStack_400;
                  func_0x000107c2b068(plVar70,plVar48 + 2,auStack_478);
                  if (((ulong)plVar70 & 1) != 0) {
                    func_0x000107c2b054(&uStack_350,&DAT_10f68f20c);
                    ppppplVar32 = ppppplVar66;
                    func_0x000109406570(ppppplVar66,&uStack_350);
                    if ((long)uStack_340 < 0) {
                      __ZdlPv(uStack_350);
                    }
                    func_0x000107c2b054(&uStack_350,&DAT_10f68f0dc);
                    ppppplVar33 = ppppplVar66;
                    func_0x000109406570(ppppplVar66,&uStack_350);
                    if ((long)uStack_340 < 0) {
                      __ZdlPv(uStack_350);
                    }
                    func_0x0001094cf080(ppppplVar32,0);
                    func_0x00010937ba88();
                    fVar90 = (float)uStack_350;
                    func_0x0001094cf080(ppppplVar32,1);
                    func_0x00010937ba88();
                    fVar95 = (float)uStack_350;
                    func_0x0001094cf080(ppppplVar33,0);
                    func_0x00010937ba88();
                    fVar82 = (float)uStack_350;
                    func_0x0001094cf080(ppppplVar33,1);
                    func_0x00010937ba88();
                    iVar91 = *(int *)((long)plVar48 + 0x2c) + (int)fVar95;
                    uStack_348 = (long *****)
                                 CONCAT44(iVar91 + (int)(float)uStack_350,
                                          (int)fVar82 + (int)fVar90 + *(int *)(plVar48 + 5));
                    uStack_300 = 0;
                    uStack_350 = (long *****)CONCAT44(iVar91,*(int *)(plVar48 + 5) + (int)fVar90);
                    fStack_318 = 0.0;
                    fStack_314 = 0.0;
                    fStack_320 = 0.0;
                    fStack_31c = 0.0;
                    uStack_308 = 0;
                    uStack_310 = 0;
                    uStack_338 = (undefined **)0x0;
                    uStack_340 = (code *)0x0;
                    ppppplStack_328 = (long *****)0x0;
                    ppppplStack_330 = (long *****)0x0;
                    ppplVar65 = (long ***)&ppplStack_3a0;
                    func_0x000107c2b05c(ppplVar65,auStack_418);
                    ppplVar27 = ppplStack_398;
                    if (ppplStack_398 == (long ***)0x0) goto LAB_10a6be808;
                    uVar43 = (long)ppplStack_398 - 1;
                    if (((ulong)ppplStack_398 & uVar43) == 0) {
                      ppplVar74 = (long ***)(uVar43 & (ulong)ppplVar65);
                    }
                    else {
                      ppplVar74 = ppplVar65;
                      if (ppplStack_398 <= ppplVar65) {
                        uVar55 = 0;
                        if (ppplStack_398 != (long ***)0x0) {
                          uVar55 = (ulong)ppplVar65 / (ulong)ppplStack_398;
                        }
                        ppplVar74 = (long ***)((long)ppplVar65 - uVar55 * (long)ppplStack_398);
                      }
                    }
                    if (ppplStack_3a0[(long)ppplVar74] == (long **)0x0) goto LAB_10a6be808;
                    plVar63 = *ppplStack_3a0[(long)ppplVar74];
                    goto joined_r0x00010a6bcc6c;
                  }
                }
                else {
                  if (((ulong)plVar49 & uVar43) == 0) {
                    plVar70 = (long *)((ulong)plVar70 & uVar43);
                  }
                  else if (plVar49 <= plVar70) {
                    uVar55 = 0;
                    if (plVar49 != (long *)0x0) {
                      uVar55 = (ulong)plVar70 / (ulong)plVar49;
                    }
                    plVar70 = (long *)((long)plVar70 - uVar55 * (long)plVar49);
                  }
                  if (plVar70 != plVar76) break;
                }
              }
            }
          }
          goto LAB_10a6bcb04;
        }
        if (cStack_401 < '\0') {
          __ZdlPv(auStack_418[0]);
        }
        func_0x000109386b30(&uStack_2a0);
      }
      ppppplVar66 = (long *****)ppplVar25[3];
      ppplVar27 = (long ***)0x340;
      __Znwm();
      ppplVar74 = ppplVar27 + 1;
      ppplVar27[2] = (long **)0x0;
      *ppplVar74 = (long **)0x0;
      ppppplVar33 = (long *****)(ppplVar27 + 3);
      *ppplVar27 = (long **)&PTR_FUN_110c112e8;
      ppplVar27[100] = (long **)&PTR_FUN_110c383b8;
      ppplVar27[0x66] = (long **)0x0;
      ppplVar27[0x65] = (long **)0x0;
      *(undefined2 *)(ppplVar27 + 0x67) = 0x100;
      ppppplStack_4c0 = ppppplVar66;
      FUN_10a1da04c(ppppplVar33,&PTR_PTR_110c10618,ppppplVar66);
      uStack_350 = (long *****)CONCAT62(uStack_350._2_6_,1);
      FUN_10a00db68(ppplVar27 + 0x54,ppppplVar66,&uStack_350);
      ppplVar27[3] = (long **)&PTR_FUN_110c103a0;
      ppplVar27[5] = (long **)&PTR_FUN_110c104d8;
      ppplVar27[8] = (long **)&PTR_FUN_110c10508;
      ppplVar27[100] = (long **)&PTR_FUN_110c105d8;
      ppplVar27[0x18] = (long **)&PTR_FUN_110c10560;
      ppplVar27[0x54] = (long **)&PTR_FUN_110c10580;
      ppplVar65 = ppplVar27 + 0x59;
      ppppplVar66 = (long *****)(ppplVar27 + 0x5c);
      ppplVar27[99] = (long **)0x0;
      ppplVar27[0x5a] = (long **)0x0;
      *ppplVar65 = (long **)0x0;
      ppplVar27[0x5c] = (long **)0x0;
      ppplVar27[0x5b] = (long **)0x0;
      ppplVar27[0x5e] = (long **)0x0;
      ppplVar27[0x5d] = (long **)0x0;
      ppplVar27[0x60] = (long **)0x0;
      ppplVar27[0x5f] = (long **)0x0;
      ppplVar27[0x62] = (long **)0x0;
      ppplVar27[0x61] = (long **)0x0;
      FUN_10a1f98ec(&uStack_350,&uStack_2a0,&ppppplStack_4c0);
      FUN_10a02bf24(ppplVar27 + 0x62,&uStack_350);
      ppppplVar32 = uStack_348;
      if (uStack_348 != (long *****)0x0) {
        ppppplVar3 = uStack_348 + 1;
        do {
          pppplVar47 = *ppppplVar3;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppppplVar3,0x10);
          if (bVar12) {
            *ppppplVar3 = (long ****)((long)pppplVar47 + -1);
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (pppplVar47 == (long ****)0x0) {
          (*(code *)(*uStack_348)[2])(uStack_348);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar32);
        }
      }
      uStack_350 = (long *****)ppplVar27[0x62];
      uStack_348 = (long *****)ppplVar27[99];
      if (ppplVar27[99] != (long **)0x0) {
        pplVar69 = ppplVar27[99] + 1;
        do {
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(pplVar69,0x10);
          if (bVar12) {
            *pplVar69 = (long *)((long)*pplVar69 + 1);
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
      }
      FUN_10a1e3a04(ppppplVar33,&uStack_350);
      ppppplVar32 = uStack_348;
      if (uStack_348 != (long *****)0x0) {
        ppppplVar3 = uStack_348 + 1;
        do {
          pppplVar47 = *ppppplVar3;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppppplVar3,0x10);
          if (bVar12) {
            *ppppplVar3 = (long ****)((long)pppplVar47 + -1);
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (pppplVar47 == (long ****)0x0) {
          (*(code *)(*uStack_348)[2])(uStack_348);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar32);
        }
      }
      func_0x00010a04a704(ppppplVar66,&uStack_3d0);
      pppplVar47 = *ppppplVar66;
      ppplVar38 = pppplVar47[0x4d];
      if (ppplVar38 == (long ***)0x0) {
        ppplVar38 = (long ***)0x0;
LAB_10a6bd4a0:
        ppplVar28 = (long ***)0x0;
      }
      else {
        (*(code *)(*ppplVar38)[0x16])();
        ppplVar28 = pppplVar47[0x4d];
        if (ppplVar28 == (long ***)0x0) goto LAB_10a6bd4a0;
        (*(code *)(*ppplVar28)[0x17])();
      }
      ppppplVar32 = ppppplStack_4c0;
      FUN_10a2421c8();
      FUN_10a048e7c(&uStack_350,ppppplVar32[0x3c],0,ppplVar38,ppplVar28,1,4,0,0,0);
      FUN_10a00e5c4(ppplVar27 + 0x5e,&uStack_350);
      ppppplVar32 = uStack_348;
      if (uStack_348 != (long *****)0x0) {
        ppppplVar3 = uStack_348 + 1;
        do {
          pppplVar47 = *ppppplVar3;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppppplVar3,0x10);
          if (bVar12) {
            *ppppplVar3 = (long ****)((long)pppplVar47 + -1);
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (pppplVar47 == (long ****)0x0) {
          (*(code *)(*uStack_348)[2])(uStack_348);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar32);
        }
      }
      ppppplVar32 = ppppplStack_4c0;
      FUN_10a2421c8();
      FUN_10a048e7c(&uStack_350,ppppplVar32[0x3c],0,ppplVar38,ppplVar28,1,4,0,0,0);
      FUN_10a00e5c4(ppplVar27 + 0x60,&uStack_350);
      ppppplVar32 = uStack_348;
      if (uStack_348 != (long *****)0x0) {
        ppppplVar3 = uStack_348 + 1;
        do {
          pppplVar47 = *ppppplVar3;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppppplVar3,0x10);
          if (bVar12) {
            *ppppplVar3 = (long ****)((long)pppplVar47 + -1);
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (pppplVar47 == (long ****)0x0) {
          (*(code *)(*uStack_348)[2])(uStack_348);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar32);
        }
      }
      ppplVar38 = ppplVar27 + 0x5e;
      FUN_10a53daa8(&ppppplStack_460,ppppplStack_4c0,ppplVar38);
      lVar36 = (long)puStack_3b8 - (long)puStack_3c0 >> 3;
      uVar43 = lVar36 * 0x2e8ba2e8ba2e8ba3;
      pplVar71 = ppplVar27[0x5a];
      pplVar69 = ppplVar27[0x59];
      uVar55 = (long)pplVar71 - (long)pplVar69 >> 5;
      if (uVar43 < uVar55 || uVar43 - uVar55 == 0) {
        if (uVar43 < uVar55) {
          ppplVar38 = (long ***)(pplVar69 + lVar36 * -0x5d1745d1745d174);
          FUN_10a6c9614(ppplVar65,ppplVar38);
        }
      }
      else {
        uVar64 = uVar43 - uVar55;
        if ((ulong)((long)ppplVar27[0x5b] - (long)pplVar71 >> 5) < uVar64) {
          if (uVar43 >> 0x3b != 0) {
            FUN_10a6c9600();
            goto LAB_10a6be89c;
          }
          uVar52 = (long)ppplVar27[0x5b] - (long)pplVar69;
          uVar56 = (long)uVar52 >> 4;
          if (uVar56 <= uVar43) {
            uVar56 = uVar43;
          }
          if (0x7fffffffffffffdf < uVar52) {
            uVar56 = 0x7ffffffffffffff;
          }
          if (uVar56 >> 0x3b != 0) {
            func_0x000109ffded8();
            goto LAB_10a6be89c;
          }
          lVar40 = uVar56 << 5;
          __Znwm();
          lVar36 = lVar40 + ((long)pplVar71 - (long)pplVar69);
          ppplVar38 = (long ***)(uVar64 * 0x20);
          _bzero(lVar36,ppplVar38);
          pplVar78 = (long **)(lVar36 + uVar55 * -0x20);
          pplVar42 = pplVar78;
          pplVar26 = pplVar69;
          if (pplVar69 != pplVar71) {
            do {
              plVar63 = *pplVar26;
              pplVar42[1] = pplVar26[1];
              *pplVar42 = plVar63;
              *pplVar26 = (long *)0x0;
              pplVar26[1] = (long *)0x0;
              plVar63 = pplVar26[2];
              pplVar42[3] = pplVar26[3];
              pplVar42[2] = plVar63;
              pplVar26[2] = (long *)0x0;
              pplVar26[3] = (long *)0x0;
              pplVar26 = pplVar26 + 4;
              pplVar42 = pplVar42 + 4;
            } while (pplVar26 != pplVar71);
            do {
              func_0x00010a0cfa6c(pplVar69 + 2);
              FUN_10a0617bc(pplVar69);
              pplVar69 = pplVar69 + 4;
            } while (pplVar69 != pplVar71);
            pplVar69 = *ppplVar65;
          }
          ppplVar27[0x59] = pplVar78;
          ppplVar27[0x5a] = (long **)(lVar36 + uVar64 * 0x20);
          ppplVar27[0x5b] = (long **)(lVar40 + uVar56 * 0x20);
          if (pplVar69 != (long **)0x0) {
            __ZdlPv(pplVar69);
          }
        }
        else {
          ppplVar38 = (long ***)(uVar64 * 0x20);
          _bzero(pplVar71,ppplVar38);
          ppplVar27[0x5a] = pplVar71 + uVar64 * 4;
        }
      }
      if (puStack_3b8 != puStack_3c0) {
        uVar43 = 0;
        do {
          puVar80 = puStack_3c0;
          pplVar69 = ppplVar27[0x59];
          if ((ulong)((long)ppplVar27[0x5a] - (long)pplVar69 >> 5) <= uVar43) goto LAB_10a6be89c;
          ppppplVar32 = ppppplVar66;
          if (uVar43 != 0) {
            ppppplVar32 = (long *****)&ppppplStack_460;
          }
          pfVar29 = (float *)&uStack_350;
          FUN_10a0d0194(&ppppplStack_438);
          FUN_10ab6e898();
          if (*(char *)((long)pfVar29 + 0x17) < '\0') {
            pfVar30 = (float *)&uStack_350;
            func_0x000107c3192c(pfVar30,*(undefined8 *)pfVar29,*(undefined8 *)(pfVar29 + 2));
          }
          else {
            uStack_350 = *(long ******)pfVar29;
            uStack_348 = *(long ******)(pfVar29 + 2);
            uStack_340 = *(code **)(pfVar29 + 4);
            pfVar30 = pfVar29;
          }
          uStack_338 = *(undefined ***)(pfVar29 + 6);
          fStack_320 = pfVar29[0xc];
          ppppplStack_330 = *(long ******)(pfVar29 + 8);
          ppppplStack_328 = *(long ******)(pfVar29 + 10);
          FUN_10ab6f020();
          if (*(char *)((long)pfVar30 + 0x17) < '\0') {
            pfVar29 = &fStack_318;
            func_0x000107c3192c(&fStack_318,*(undefined8 *)pfVar30,*(undefined8 *)(pfVar30 + 2));
          }
          else {
            uStack_310 = *(undefined8 *)(pfVar30 + 2);
            uStack_308 = *(undefined8 *)(pfVar30 + 4);
            fStack_314 = (float)((ulong)*(undefined8 *)pfVar30 >> 0x20);
            fStack_318 = (float)*(undefined8 *)pfVar30;
            pfVar29 = pfVar30;
          }
          uStack_300 = *(undefined8 *)(pfVar30 + 6);
          uStack_2f8 = *(undefined8 *)(pfVar30 + 8);
          uStack_2f0 = *(undefined8 *)(pfVar30 + 10);
          fStack_2e8 = pfVar30[0xc];
          FUN_10ab6f160();
          if (*(char *)((long)pfVar29 + 0x17) < '\0') {
            func_0x000107c3192c(auStack_2e0,*(undefined8 *)pfVar29,*(undefined8 *)(pfVar29 + 2));
          }
          else {
            uStack_2d0 = *(undefined8 *)(pfVar29 + 4);
            auStack_2e0[1] = *(undefined8 *)(pfVar29 + 2);
            auStack_2e0[0] = *(undefined8 *)pfVar29;
          }
          uStack_2c8 = *(undefined8 *)(pfVar29 + 6);
          uStack_2c0 = *(undefined8 *)(pfVar29 + 8);
          uStack_2b8 = *(undefined8 *)(pfVar29 + 10);
          fStack_2b0 = pfVar29[0xc];
          FUN_10ab6f520(&uStack_2a0,&uStack_350,3);
          ppppplVar3 = ppppplStack_438;
          *(float *)(ppppplStack_438 + 0x1e) = (float)uStack_2a0;
          if (ppppplStack_438 + 0x1e != (long *****)&uStack_2a0) {
            FUN_10a1903c4(ppppplStack_438 + 0x1f,uStack_298,CONCAT44(fStack_28c,fStack_290),
                          (CONCAT44(fStack_28c,fStack_290) - (long)uStack_298 >> 3) *
                          0x6db6db6db6db6db7);
          }
          piVar75 = (int *)(puVar80 + uVar43 * 0xb);
          pplVar69 = pplVar69 + uVar43 * 4;
          ppppplVar3[0x23] = pppplStack_278;
          ppppplVar3[0x22] = pppplStack_280;
          ppppplVar3[0x25] = pppplStack_268;
          ppppplVar3[0x24] = pppplStack_270;
          ppppplVar3[0x26] = pppplStack_260;
          uStack_370 = (long *****)&uStack_298;
          func_0x00010a190844(&uStack_370);
          lVar36 = 0;
          do {
            if ((&cStack_2c9)[lVar36] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar36));
            }
            lVar36 = lVar36 + -0x38;
          } while (lVar36 != -0xa8);
          ppppplStack_438[0x1d] = (long ****)0x100000000;
          pppplVar47 = ppppplStack_438[2];
          uVar55 = (ulong)*(uint *)(ppppplStack_438 + 0x1e) * 4;
          uVar64 = (long)ppppplStack_438[3] - (long)pppplVar47;
          if (uVar55 < uVar64 || uVar55 - uVar64 == 0) {
            if (uVar55 < uVar64) {
              ppppplStack_438[3] = (long ****)((long)pppplVar47 + uVar55);
            }
          }
          else {
            func_0x000107c27d58(ppppplStack_438 + 2,uVar55 - uVar64);
          }
          uVar7 = *(uint *)(ppppplStack_438 + 0x22);
          if (uVar7 == 0xffffffff) {
            pppplVar47 = (long ****)0x0;
          }
          else {
            uVar55 = ((long)ppppplStack_438[0x20] - (long)ppppplStack_438[0x1f] >> 3) *
                     0x6db6db6db6db6db7;
            if (uVar55 < uVar7 || uVar55 - uVar7 == 0) {
              FUN_10ab725fc();
              goto LAB_10a6be89c;
            }
            pppplVar47 = ppppplStack_438[0x1f] + (ulong)uVar7 * 7;
          }
          uVar7 = *(uint *)(ppppplStack_438 + 0x24);
          if (uVar7 == 0xffffffff) {
            pppplVar57 = (long ****)0x0;
          }
          else {
            uVar55 = ((long)ppppplStack_438[0x20] - (long)ppppplStack_438[0x1f] >> 3) *
                     0x6db6db6db6db6db7;
            if (uVar55 < uVar7 || uVar55 - uVar7 == 0) {
              FUN_10ab725fc();
              goto LAB_10a6be89c;
            }
            pppplVar57 = ppppplStack_438[0x1f] + (ulong)uVar7 * 7;
          }
          uVar7 = *(uint *)((long)ppppplStack_438 + 0x124);
          if (uVar7 == 0xffffffff) {
            pppplVar53 = (long ****)0x0;
          }
          else {
            uVar55 = ((long)ppppplStack_438[0x20] - (long)ppppplStack_438[0x1f] >> 3) *
                     0x6db6db6db6db6db7;
            if (uVar55 < uVar7 || uVar55 - uVar7 == 0) {
              FUN_10ab725fc();
              goto LAB_10a6be89c;
            }
            pppplVar53 = ppppplStack_438[0x1f] + (ulong)uVar7 * 7;
          }
          uVar7 = *(int *)((long)pppplVar47 + 0x24) - 1;
          if (uVar7 < 7) {
            iVar91 = *(int *)(&UNK_10e4d48b8 + (ulong)uVar7 * 4);
          }
          else {
            iVar91 = 0;
          }
          if (*(int *)(pppplVar47 + 5) * iVar91 == 8) {
            puVar80 = (undefined8 *)((long)ppppplStack_438[2] + (ulong)*(uint *)(pppplVar47 + 6));
            uVar55 = (ulong)*(uint *)(ppppplStack_438 + 0x1e);
          }
          else {
            puVar80 = (undefined8 *)0x0;
            uVar55 = 0;
          }
          uVar7 = *(int *)((long)pppplVar57 + 0x24) - 1;
          if (uVar7 < 7) {
            iVar91 = *(int *)(&UNK_10e4d48b8 + (ulong)uVar7 * 4);
          }
          else {
            iVar91 = 0;
          }
          if (*(int *)(pppplVar57 + 5) * iVar91 == 8) {
            puVar72 = (undefined8 *)((long)ppppplStack_438[2] + (ulong)*(uint *)(pppplVar57 + 6));
            uVar64 = (ulong)*(uint *)(ppppplStack_438 + 0x1e);
          }
          else {
            puVar72 = (undefined8 *)0x0;
            uVar64 = 0;
          }
          uVar7 = *(int *)((long)pppplVar53 + 0x24) - 1;
          if (uVar7 < 7) {
            iVar91 = *(int *)(&UNK_10e4d48b8 + (ulong)uVar7 * 4);
          }
          else {
            iVar91 = 0;
          }
          if (*(int *)(pppplVar53 + 5) * iVar91 == 8) {
            puVar79 = (undefined8 *)((long)ppppplStack_438[2] + (ulong)*(uint *)(pppplVar53 + 6));
            uVar56 = (ulong)*(uint *)(ppppplStack_438 + 0x1e);
          }
          else {
            puVar79 = (undefined8 *)0x0;
            uVar56 = 0;
          }
          iVar91 = *piVar75;
          iVar92 = piVar75[1];
          iVar93 = piVar75[2];
          iVar94 = piVar75[3];
          pppplVar47 = *ppppplVar32;
          ppplVar65 = pppplVar47[0x4d];
          if (ppplVar65 == (long ***)0x0) {
            iVar20 = 0;
            fVar90 = 0.0;
          }
          else {
            (*(code *)(*ppplVar65)[0x16])();
            iVar20 = (int)ppplVar65;
            ppplVar65 = pppplVar47[0x4d];
            if (ppplVar65 == (long ***)0x0) {
              fVar90 = 0.0;
            }
            else {
              (*(code *)(*ppplVar65)[0x17])();
              fVar90 = (float)(int)ppplVar65;
            }
          }
          fVar95 = 0.0;
          lVar36 = *(long *)(piVar75 + 4);
          iVar5 = piVar75[8];
          iVar8 = piVar75[9];
          iVar6 = piVar75[10];
          iVar9 = piVar75[0xb];
          plVar63 = *(long **)(lVar36 + 0x268);
          if (plVar63 == (long *)0x0) {
            iVar21 = 0;
          }
          else {
            (**(code **)(*plVar63 + 0xb0))();
            iVar21 = (int)plVar63;
            plVar63 = *(long **)(lVar36 + 0x268);
            fVar95 = 0.0;
            if (plVar63 != (long *)0x0) {
              (**(code **)(*plVar63 + 0xb8))();
              fVar95 = (float)(int)plVar63;
            }
          }
          lVar36 = 0;
          fVar82 = (float)iVar20;
          fVar84 = (float)iVar91;
          fVar86 = (float)iVar92;
          fVar88 = (float)iVar93;
          fVar89 = (float)iVar94;
          uStack_350 = (long *****)CONCAT44(fVar90 - fVar89,fVar84);
          uStack_348 = (long *****)CONCAT44(fVar90 - fVar86,fVar84);
          uStack_340 = (code *)CONCAT44(fVar90 - fVar89,fVar88);
          uStack_338 = (undefined **)CONCAT44(fVar90 - fVar86,fVar88);
          uStack_2a0._0_4_ = fVar84 / fVar82;
          uStack_2a0._4_4_ = auVar83._0_4_ - fVar89 / fVar90;
          uStack_298._0_4_ = fVar84 / fVar82;
          uStack_298._4_4_ = auVar83._4_4_ - fVar86 / fVar90;
          fStack_290 = fVar88 / fVar82;
          fStack_28c = auVar83._8_4_ - fVar89 / fVar90;
          uStack_288 = CONCAT44(auVar83._12_4_ - fVar86 / fVar90,fVar88 / fVar82);
          fVar90 = (float)iVar21;
          auVar85._4_4_ = iVar5;
          auVar85._0_4_ = iVar5;
          auVar85._8_4_ = iVar6;
          auVar85._12_4_ = iVar6;
          auVar85 = NEON_scvtf(auVar85,4);
          auVar87._4_4_ = iVar8;
          auVar87._0_4_ = iVar9;
          auVar87._8_4_ = iVar9;
          auVar87._12_4_ = iVar8;
          auVar87 = NEON_scvtf(auVar87,4);
          uStack_370 = (long *****)
                       CONCAT44(auVar83._0_4_ - auVar87._0_4_ / fVar95,auVar85._0_4_ / fVar90);
          uStack_368 = (long *****)
                       CONCAT44(auVar83._4_4_ - auVar87._4_4_ / fVar95,auVar85._4_4_ / fVar90);
          uStack_360 = (long *)CONCAT44(auVar83._8_4_ - auVar87._8_4_ / fVar95,
                                        auVar85._8_4_ / fVar90);
          uStack_358 = CONCAT44(auVar83._12_4_ - auVar87._12_4_ / fVar95,auVar85._12_4_ / fVar90);
          do {
            *puVar80 = *(undefined8 *)((long)&uStack_350 + lVar36);
            *puVar72 = *(undefined8 *)((long)&uStack_2a0 + lVar36);
            puVar41 = (undefined8 *)((long)&uStack_370 + lVar36);
            lVar36 = lVar36 + 8;
            *puVar79 = *puVar41;
            puVar79 = (undefined8 *)((long)puVar79 + uVar56);
            puVar72 = (undefined8 *)((long)puVar72 + uVar64);
            puVar80 = (undefined8 *)((long)puVar80 + uVar55);
          } while (lVar36 != 0x20);
          plVar63 = (long *)0x108;
          __Znwm();
          FUN_10ac6ea60();
          plVar49 = (long *)0x20;
          __Znwm();
          plVar76 = plVar49 + 1;
          *plVar76 = 0;
          *plVar49 = (long)&PTR_FUN_110c11350;
          plVar49[2] = 0;
          plVar49[3] = (long)plVar63;
          if (plVar63[9] == 0) {
            do {
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar76,0x10);
              if (bVar12) {
                *plVar76 = *plVar76 + 1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            plVar48 = plVar49 + 2;
            do {
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar48,0x10);
              if (bVar12) {
                *plVar48 = *plVar48 + 1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            plVar63[8] = (long)plVar63;
            plVar63[9] = (long)plVar49;
LAB_10a6bdd80:
            do {
              lVar36 = *plVar76;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar76,0x10);
              if (bVar12) {
                *plVar76 = lVar36 + -1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (lVar36 == 0) {
              (**(code **)(*plVar49 + 0x10))(plVar49);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar49);
            }
          }
          else if (*(long *)(plVar63[9] + 8) == -1) {
            do {
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar76,0x10);
              if (bVar12) {
                *plVar76 = *plVar76 + 1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            plVar48 = plVar49 + 2;
            do {
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar48,0x10);
              if (bVar12) {
                *plVar48 = *plVar48 + 1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            plVar63[8] = (long)plVar63;
            plVar63[9] = (long)plVar49;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            goto LAB_10a6bdd80;
          }
          plVar76 = pplVar69[3];
          pplVar69[2] = plVar63;
          pplVar69[3] = plVar49;
          if (plVar76 != (long *)0x0) {
            plVar63 = plVar76 + 1;
            do {
              lVar36 = *plVar63;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar63,0x10);
              if (bVar12) {
                *plVar63 = lVar36 + -1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (lVar36 == 0) {
              (**(code **)(*plVar76 + 0x10))(plVar76);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar76);
            }
          }
          ppppplVar3 = ppppplStack_430;
          if (ppppplStack_430 != (long *****)0x0) {
            ppppplVar4 = ppppplStack_430 + 1;
            do {
              pppplVar47 = *ppppplVar4;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(ppppplVar4,0x10);
              if (bVar12) {
                *ppppplVar4 = (long ****)((long)pppplVar47 + -1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (pppplVar47 == (long ****)0x0) {
              (*(code *)(*ppppplStack_430)[2])(ppppplStack_430);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar3);
            }
          }
          FUN_10ab451f4(&uStack_350,0,&UNK_10f66da08,0x18,&UNK_10f66da08,0x18,&UNK_10f66da21,0x16,1)
          ;
          func_0x00010a015c50(pplVar69,&uStack_350);
          plVar63 = (long *)(*pplVar69)[0x45];
          if (plVar63 == (long *)(*pplVar69)[0x46]) {
            lVar36 = 0;
          }
          else {
            lVar36 = *plVar63;
          }
          func_0x00010a332748(lVar36 + 0x219,0);
          func_0x00010a332700(lVar36 + 0x21a,0);
          func_0x00010a3326b8(lVar36 + 0x218,1);
          *(undefined4 *)(lVar36 + 0x21e) = 0x1010101;
          lVar40 = *(long *)(lVar36 + 600);
          *(undefined8 *)(lVar40 + 0x30) = 0;
          *(undefined8 *)(lVar40 + 0x28) = 6;
          *(undefined8 *)(lVar40 + 0x40) = 0;
          *(undefined8 *)(lVar40 + 0x38) = 0;
          *(undefined8 *)(lVar40 + 0x50) = 0;
          *(undefined8 *)(lVar40 + 0x48) = 0;
          pppplVar47 = *ppppplVar32;
          ppplVar65 = pppplVar47[0x4d];
          fVar90 = 0.0;
          if (ppplVar65 == (long ***)0x0) {
            iVar91 = 0;
          }
          else {
            (*(code *)(*ppplVar65)[0x16])();
            iVar91 = (int)ppplVar65;
            ppplVar65 = pppplVar47[0x4d];
            if (ppplVar65 == (long ***)0x0) {
              fVar90 = 0.0;
            }
            else {
              (*(code *)(*ppplVar65)[0x17])();
              fVar90 = (float)(int)ppplVar65;
            }
          }
          fVar95 = (float)iVar91;
          uStack_298._4_4_ = 0.0;
          fStack_290 = 0.0;
          uStack_2a0._4_4_ = 0.0;
          uStack_298._0_4_ = 0.0;
          uStack_288 = 0;
          pppplStack_280 = (long ****)0x0;
          uStack_2a0._0_4_ = 2.0 / fVar95;
          fStack_28c = 2.0 / fVar90;
          pppplStack_278 = (long ****)0xb58637bd;
          pppplStack_270 = (long ****)CONCAT44(-fVar90 / fVar90,-fVar95 / fVar95);
          pppplStack_268 = (long ****)0x3f80000080000000;
          func_0x000107c2b074(&uStack_370,&PTR_DAT_110c10f10);
          FUN_10a6bfa20(lVar36,&uStack_370,&uStack_2a0);
          if ((long)uStack_360 < 0) {
            __ZdlPv(uStack_370);
          }
          func_0x000107c2b074(&uStack_370,&PTR_DAT_110c10f28);
          FUN_10a3368d0(lVar36,&uStack_370,ppppplVar32,&UNK_10e4ac858,0xd);
          if ((long)uStack_360 < 0) {
            __ZdlPv(uStack_370);
          }
          func_0x000107c2b074(&uStack_370,&PTR_DAT_110c10f40);
          FUN_10a3368d0(lVar36,&uStack_370,piVar75 + 4,&UNK_10e4ac858,0xd);
          if ((long)uStack_360 < 0) {
            __ZdlPv(uStack_370);
          }
          func_0x000107c2b074(&uStack_370,&PTR_DAT_110c10f58);
          FUN_10a6bfbe8(lVar36,&uStack_370,piVar75 + 0xc);
          if ((long)uStack_360 < 0) {
            __ZdlPv(uStack_370);
          }
          func_0x000107c2b074(&uStack_370,&PTR_DAT_110c10f70);
          FUN_10a0d9d6c(lVar36,&uStack_370,piVar75 + 0xd);
          if ((long)uStack_360 < 0) {
            __ZdlPv(uStack_370);
          }
          func_0x000107c2b074(&uStack_370,&PTR_DAT_110c10f88);
          FUN_10a0d9d6c(lVar36,&uStack_370,piVar75 + 0x10);
          if ((long)uStack_360 < 0) {
            __ZdlPv(uStack_370);
          }
          func_0x000107c2b074(&uStack_370,&PTR_DAT_110c10fa0);
          ppplVar38 = (long ***)&uStack_370;
          FUN_10a0d9d6c(lVar36,ppplVar38,piVar75 + 0x13);
          if ((long)uStack_360 < 0) {
            __ZdlPv(uStack_370);
          }
          FUN_10a044790(&uStack_340);
          (*(code *)*uStack_338)(&uStack_338);
          ppppplVar32 = uStack_348;
          if (uStack_348 != (long *****)0x0) {
            ppppplVar3 = uStack_348 + 1;
            do {
              pppplVar47 = *ppppplVar3;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(ppppplVar3,0x10);
              if (bVar12) {
                *ppppplVar3 = (long ****)((long)pppplVar47 + -1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (pppplVar47 == (long ****)0x0) {
              (*(code *)(*uStack_348)[2])(uStack_348);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar32);
            }
          }
          uVar43 = uVar43 + 1;
        } while (uVar43 < (ulong)(((long)puStack_3b8 - (long)puStack_3c0 >> 3) * 0x2e8ba2e8ba2e8ba3)
                );
      }
      ppppplVar66 = ppppplStack_458;
      *(undefined4 *)((long)ppplVar27 + 0x8c) = 0;
      if (ppppplStack_458 != (long *****)0x0) {
        ppppplVar32 = ppppplStack_458 + 1;
        do {
          pppplVar47 = *ppppplVar32;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppppplVar32,0x10);
          if (bVar12) {
            *ppppplVar32 = (long ****)((long)pppplVar47 + -1);
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (pppplVar47 == (long ****)0x0) {
          (*(code *)(*ppppplStack_458)[2])(ppppplStack_458);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar66);
        }
      }
      ppppplStack_4a0 = ppppplVar33;
      ppplStack_498 = ppplVar27;
      if (ppplVar27[0xc] == (long **)0x0) {
        do {
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppplVar74,0x10);
          if (bVar12) {
            *ppplVar74 = (long **)((long)*ppplVar74 + 1);
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        ppplVar65 = ppplVar27 + 2;
        do {
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppplVar65,0x10);
          if (bVar12) {
            *ppplVar65 = (long **)((long)*ppplVar65 + 1);
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        ppplVar27[0xb] = (long **)ppppplVar33;
        ppplVar27[0xc] = (long **)ppplVar27;
LAB_10a6be228:
        do {
          pplVar69 = *ppplVar74;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppplVar74,0x10);
          if (bVar12) {
            *ppplVar74 = (long **)((long)pplVar69 + -1);
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (pplVar69 == (long **)0x0) {
          (*(code *)(*ppplVar27)[2])(ppplVar27);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar27);
        }
      }
      else if (ppplVar27[0xc][1] == (long *)0xffffffffffffffff) {
        do {
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppplVar74,0x10);
          if (bVar12) {
            *ppplVar74 = (long **)((long)*ppplVar74 + 1);
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        ppplVar65 = ppplVar27 + 2;
        do {
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppplVar65,0x10);
          if (bVar12) {
            *ppplVar65 = (long **)((long)*ppplVar65 + 1);
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        ppplVar27[0xb] = (long **)ppppplVar33;
        ppplVar27[0xc] = (long **)ppplVar27;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        goto LAB_10a6be228;
      }
      ppplVar65 = ppplStack_498;
      ppppplVar66 = ppppplStack_4a0;
      pplVar69 = ppplVar25[3];
      if (pplVar69 == (long **)0x0) {
        ppppplVar32 = (long *****)0x2c0;
        __Znwm();
        ppppplVar32[1] = (long ****)0x0;
        ppppplVar32[2] = (long ****)0x0;
        *ppppplVar32 = (long ****)&PTR_DAT_110b9fda0;
        uStack_298._0_4_ = SUB84(ppplVar65,0);
        uStack_298._4_4_ = (float)((ulong)ppplVar65 >> 0x20);
        uStack_2a0._0_4_ = SUB84(ppppplVar66,0);
        uStack_2a0._4_4_ = (float)((ulong)ppppplVar66 >> 0x20);
        if (ppplVar65 != (long ***)0x0) {
          ppplVar27 = ppplVar65 + 1;
          do {
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(ppplVar27,0x10);
            if (bVar12) {
              *ppplVar27 = (long **)((long)*ppplVar27 + 1);
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
        }
        ppppplVar66 = ppppplVar32 + 3;
        ppppplVar33 = ppppplVar32;
        func_0x00010a0fda30();
        FUN_10ab6a888(ppppplVar66,0,&uStack_2a0,ppppplVar33,ppplVar38);
        if (ppplVar65 != (long ***)0x0) {
          ppplVar27 = ppplVar65 + 1;
          do {
            pplVar69 = *ppplVar27;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(ppplVar27,0x10);
            if (bVar12) {
              *ppplVar27 = (long **)((long)pplVar69 + -1);
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (pplVar69 == (long **)0x0) {
            (*(code *)(*ppplVar65)[2])(ppplVar65);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar65);
          }
        }
        ppppplStack_438 = ppppplVar66;
        ppppplStack_430 = ppppplVar32;
        FUN_10a05b2a8(&ppppplStack_438,ppppplVar32 + 8,ppppplVar66);
        FUN_10a05b04c(&uStack_370,&ppppplStack_438);
        ppppplVar66 = ppppplStack_430;
        if (ppppplStack_430 != (long *****)0x0) {
          ppppplVar32 = ppppplStack_430 + 1;
          do {
            pppplVar47 = *ppppplVar32;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(ppppplVar32,0x10);
            if (bVar12) {
              *ppppplVar32 = (long ****)((long)pppplVar47 + -1);
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (pppplVar47 == (long ****)0x0) {
            (*(code *)(*ppppplStack_430)[2])(ppppplStack_430);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar66);
          }
        }
        if (uStack_368 == (long *****)0x0) {
          uStack_348 = (long *****)0x0;
        }
        else {
          ppppplVar66 = uStack_368 + 1;
          do {
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(ppppplVar66,0x10);
            if (bVar12) {
              *ppppplVar66 = (long ****)((long)*ppppplVar66 + 1);
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          uStack_348 = uStack_368;
          if (uStack_368 != (long *****)0x0) {
            ppppplVar66 = uStack_368 + 1;
            do {
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(ppppplVar66,0x10);
              if (bVar12) {
                *ppppplVar66 = (long ****)((long)*ppppplVar66 + 1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
          }
        }
        uStack_350 = uStack_370;
        uStack_340 = FUN_10a6d70a0;
        uStack_338 = &PTR_DAT_110c11328;
        ppppplStack_330 = uStack_370;
        ppppplStack_328 = uStack_368;
        fStack_290 = 0.0;
        fStack_28c = 0.0;
        uStack_288 = 0;
        uStack_2a0._0_4_ = 8.76519e-36;
        uStack_2a0._4_4_ = 1.4013e-45;
        uStack_298._0_4_ = 6.885508e-29;
        uStack_298._4_4_ = 1.4013e-45;
        FUN_10a044790(&uStack_2a0);
        (**(code **)CONCAT44(uStack_298._4_4_,(float)uStack_298))(&uStack_298);
        ppppplVar66 = uStack_368;
        if (uStack_368 != (long *****)0x0) {
          ppppplVar32 = uStack_368 + 1;
          do {
            pppplVar47 = *ppppplVar32;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(ppppplVar32,0x10);
            if (bVar12) {
              *ppppplVar32 = (long ****)((long)pppplVar47 + -1);
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (pppplVar47 == (long ****)0x0) {
            (*(code *)(*uStack_368)[2])(uStack_368);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar66);
          }
        }
        ppppplStack_458 = uStack_348;
        ppppplStack_460 = uStack_350;
        if (uStack_348 != (long *****)0x0) {
          ppppplVar66 = uStack_348 + 1;
          do {
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(ppppplVar66,0x10);
            if (bVar12) {
              *ppppplVar66 = (long ****)((long)*ppppplVar66 + 1);
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
        }
        FUN_10a044790(&uStack_340);
        (*(code *)*uStack_338)(&uStack_338);
        if (uStack_348 != (long *****)0x0) {
          ppppplVar66 = uStack_348 + 1;
          do {
            pppplVar47 = *ppppplVar66;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(ppppplVar66,0x10);
            if (bVar12) {
              *ppppplVar66 = (long ****)((long)pppplVar47 + -1);
              cVar11 = ExclusiveMonitorsStatus();
            }
            ppppplVar32 = uStack_348;
          } while (cVar11 != '\0');
          goto LAB_10a6be6bc;
        }
      }
      else {
        ppppplStack_438 = (long *****)pplVar69[0x10b];
        ppppplStack_430 = (long *****)pplVar69[0x10c];
        if (ppppplStack_430 != (long *****)0x0) {
          ppppplVar32 = ppppplStack_430 + 1;
          do {
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(ppppplVar32,0x10);
            if (bVar12) {
              *ppppplVar32 = (long ****)((long)*ppppplVar32 + 1);
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
        }
        uVar23 = 0x2a8;
        __Znwm(0x2a8);
        uStack_348 = (long *****)ppplVar65;
        uStack_350 = ppppplVar66;
        if (ppplVar65 != (long ***)0x0) {
          ppplVar27 = ppplVar65 + 1;
          do {
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(ppplVar27,0x10);
            if (bVar12) {
              *ppplVar27 = (long **)((long)*ppplVar27 + 1);
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
        }
        uVar31 = uVar23;
        func_0x00010a0fda30();
        FUN_10ab6a888(uVar23,pplVar69,&uStack_350,uVar31,ppplVar38);
        if (ppplVar65 != (long ***)0x0) {
          ppplVar27 = ppplVar65 + 1;
          do {
            pplVar69 = *ppplVar27;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(ppplVar27,0x10);
            if (bVar12) {
              *ppplVar27 = (long **)((long)pplVar69 + -1);
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (pplVar69 == (long **)0x0) {
            (*(code *)(*ppplVar65)[2])(ppplVar65);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar65);
          }
        }
        ppppplVar32 = ppppplStack_430;
        ppppplVar66 = ppppplStack_438;
        uStack_370 = ppppplStack_438;
        uStack_368 = ppppplStack_430;
        if (ppppplStack_430 != (long *****)0x0) {
          ppppplVar33 = ppppplStack_430 + 1;
          do {
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(ppppplVar33,0x10);
            if (bVar12) {
              *ppppplVar33 = (long ****)((long)*ppppplVar33 + 1);
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          ppppplVar33 = ppppplStack_430 + 2;
          do {
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(ppppplVar33,0x10);
            if (bVar12) {
              *ppppplVar33 = (long ****)((long)*ppppplVar33 + 1);
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          do {
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(ppppplVar33,0x10);
            if (bVar12) {
              *ppppplVar33 = (long ****)((long)*ppppplVar33 + 1);
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplStack_430);
        }
        uStack_350 = ppppplVar66;
        uStack_348 = ppppplVar32;
        FUN_10a05b208(&uStack_2a0,uVar23,&uStack_350);
        FUN_10a05b04c(&ppppplStack_460);
        pppplVar47 = uStack_298;
        if (uStack_298 != (long ****)0x0) {
          pppplVar57 = uStack_298 + 1;
          do {
            ppplVar65 = *pppplVar57;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(pppplVar57,0x10);
            if (bVar12) {
              *pppplVar57 = (long ***)((long)ppplVar65 + -1);
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (ppplVar65 == (long ***)0x0) {
            (*(code *)(*uStack_298)[2])(uStack_298);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar47);
          }
        }
        if (uStack_348 != (long *****)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        ppppplVar66 = uStack_368;
        if (uStack_368 != (long *****)0x0) {
          ppppplVar32 = uStack_368 + 1;
          do {
            pppplVar47 = *ppppplVar32;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(ppppplVar32,0x10);
            if (bVar12) {
              *ppppplVar32 = (long ****)((long)pppplVar47 + -1);
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (pppplVar47 == (long ****)0x0) {
            (*(code *)(*uStack_368)[2])(uStack_368);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar66);
          }
        }
        pppplVar47 = uStack_298;
        if ((ppppplStack_438 != (long *****)0x0) && (ppppplStack_460 != (long *****)0x0)) {
          uStack_2a0._0_4_ = SUB84(ppppplStack_460,0);
          uStack_2a0._4_4_ = (float)((ulong)ppppplStack_460 >> 0x20);
          uStack_298._0_4_ = SUB84(ppppplStack_458,0);
          uStack_298._4_4_ = (float)((ulong)ppppplStack_458 >> 0x20);
          if (ppppplStack_458 != (long *****)0x0) {
            ppppplVar66 = ppppplStack_458 + 1;
            do {
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(ppppplVar66,0x10);
              if (bVar12) {
                *ppppplVar66 = (long ****)((long)*ppppplVar66 + 1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
          }
          FUN_10aa88c30(ppppplStack_438,&uStack_2a0);
          pppplVar47 = (long ****)CONCAT44(uStack_298._4_4_,(float)uStack_298);
          uStack_2a0 = (long *****)CONCAT44(uStack_2a0._4_4_,(float)uStack_2a0);
          if (pppplVar47 != (long ****)0x0) {
            pppplVar57 = pppplVar47 + 1;
            do {
              ppplVar65 = *pppplVar57;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppplVar57,0x10);
              if (bVar12) {
                *pppplVar57 = (long ***)((long)ppplVar65 + -1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            uStack_2a0 = (long *****)CONCAT44(uStack_2a0._4_4_,(float)uStack_2a0);
            if (ppplVar65 == (long ***)0x0) {
              (*(code *)(*pppplVar47)[2])(pppplVar47);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar47);
              pppplVar47 = (long ****)CONCAT44(uStack_298._4_4_,(float)uStack_298);
            }
          }
        }
        uStack_298 = pppplVar47;
        if (ppppplStack_430 != (long *****)0x0) {
          ppppplVar66 = ppppplStack_430 + 1;
          do {
            pppplVar47 = *ppppplVar66;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(ppppplVar66,0x10);
            if (bVar12) {
              *ppppplVar66 = (long ****)((long)pppplVar47 + -1);
              cVar11 = ExclusiveMonitorsStatus();
            }
            ppppplVar32 = ppppplStack_430;
          } while (cVar11 != '\0');
LAB_10a6be6bc:
          if (pppplVar47 == (long ****)0x0) {
            (*(code *)(*ppppplVar32)[2])(ppppplVar32);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar32);
          }
        }
      }
      func_0x00010a067b00(extraout_x8,&ppppplStack_460);
      ppppplVar66 = ppppplStack_458;
      if (ppppplStack_458 != (long *****)0x0) {
        ppppplVar32 = ppppplStack_458 + 1;
        do {
          pppplVar47 = *ppppplVar32;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppppplVar32,0x10);
          if (bVar12) {
            *ppppplVar32 = (long ****)((long)pppplVar47 + -1);
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (pppplVar47 == (long ****)0x0) {
          (*(code *)(*ppppplStack_458)[2])(ppppplStack_458);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar66);
        }
      }
      ppplVar65 = ppplStack_498;
      if (ppplStack_498 != (long ***)0x0) {
        ppplVar27 = ppplStack_498 + 1;
        do {
          pplVar69 = *ppplVar27;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppplVar27,0x10);
          if (bVar12) {
            *ppplVar27 = (long **)((long)pplVar69 + -1);
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (pplVar69 == (long **)0x0) {
          (*(code *)(*ppplStack_498)[2])(ppplStack_498);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar65);
        }
      }
      FUN_10a6d6f74(&lStack_400);
      FUN_10a6c9594(&puStack_3c0);
      plVar63 = plStack_3c8;
      if (plStack_3c8 != (long *)0x0) {
        plVar49 = plStack_3c8 + 1;
        do {
          lVar36 = *plVar49;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar49,0x10);
          if (bVar12) {
            *plVar49 = lVar36 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (lVar36 == 0) {
          (**(code **)(*plStack_3c8 + 0x10))(plStack_3c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar63);
        }
      }
      plVar81 = (long *)((long)plVar81 + 1);
      ppplVar65 = (long ***)ppplVar25[4];
    } while (plVar81 < (long *)((long)ppplVar25[5] - (long)ppplVar65 >> 5));
  }
  ppplVar25 = (long ***)&ppplStack_3a0;
  FUN_10a6bed34();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_258) {
    ___stack_chk_fail();
    func_0x00010a0536d4(&uStack_2a0);
    func_0x00010a05248c(&ppppplStack_460);
    FUN_10a054c5c(&ppppplStack_438);
    FUN_10a6d7048(&ppppplStack_4a0);
    FUN_10a6d6f74(&lStack_400);
    FUN_10a6c9594(&puStack_3c0);
    plVar81 = plStack_3c8;
    if (plStack_3c8 != (long *)0x0) {
      plVar63 = plStack_3c8 + 1;
      do {
        lVar36 = *plVar63;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar63,0x10);
        if (bVar12) {
          *plVar63 = lVar36 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar36 == 0) {
        (**(code **)(*plStack_3c8 + 0x10))(plStack_3c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar81);
      }
    }
    FUN_10a04a568(&uStack_3d0);
    FUN_10a6bed34(&ppplStack_3a0);
    __Unwind_Resume();
    pplVar69 = ppplVar25[2];
    while (pplVar69 != (long **)0x0) {
      pplVar71 = (long **)*pplVar69;
      FUN_10a6d6ef0(pplVar69 + 2);
      __ZdlPv(pplVar69);
      pplVar69 = pplVar71;
    }
    pplVar69 = *ppplVar25;
    *ppplVar25 = (long **)0x0;
    if (pplVar69 != (long **)0x0) {
      __ZdlPv();
    }
    return ppplVar25;
  }
  return ppplVar25;
}



/* Entry: 10a6bbdf0; end: 10a6bed33;  */

long * FUN_10a6bbdf0(undefined8 *param_1,long param_2,uint param_3,long *param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  code *pcVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  long **pplVar20;
  long ***ppplVar21;
  long ***ppplVar22;
  long *plVar23;
  long **pplVar24;
  float *pfVar25;
  float *pfVar26;
  undefined8 uVar27;
  long *plVar28;
  long *plVar29;
  undefined8 *puVar30;
  long *plVar31;
  long lVar32;
  undefined8 *puVar33;
  long *plVar34;
  undefined *puVar35;
  ulong uVar36;
  long lVar37;
  long *plVar38;
  ulong uVar39;
  ulong uVar40;
  long *plVar41;
  long *plVar42;
  long *plVar43;
  long lVar44;
  long *plVar45;
  ulong uVar46;
  long *plVar47;
  long **pplVar48;
  ulong uVar49;
  undefined8 *puVar50;
  long *plVar51;
  int *piVar52;
  undefined8 *puVar53;
  undefined8 *puVar54;
  undefined8 *puVar55;
  float fVar56;
  undefined1 auVar57 [16];
  float fVar58;
  undefined1 auVar59 [16];
  float fVar60;
  undefined1 auVar61 [16];
  float fVar62;
  float fVar63;
  float fVar64;
  undefined8 uVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  float fVar70;
  undefined8 uStack_350;
  float fStack_338;
  undefined4 uStack_334;
  char cStack_321;
  long **pplStack_320;
  long *plStack_318;
  long lStack_310;
  undefined8 uStack_308;
  long **pplStack_300;
  long *plStack_2f8;
  long lStack_2f0;
  undefined8 uStack_2e8;
  undefined8 auStack_2d8 [2];
  char cStack_2c1;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long *plStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 auStack_278 [2];
  char cStack_261;
  long lStack_260;
  long *plStack_258;
  long *plStack_250;
  ulong uStack_248;
  float fStack_240;
  undefined8 *puStack_230;
  long *plStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  long lStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  ulong uStack_1e8;
  float fStack_1e0;
  uint uStack_1d4;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  long *plStack_188;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  float fStack_148;
  undefined8 auStack_140 [2];
  undefined8 uStack_130;
  char cStack_129;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  float fStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  float fStack_f0;
  float fStack_ec;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar47 = *(long **)(param_2 + 0x20);
  plVar51 = *(long **)(param_2 + 0x28);
  uStack_1b0 = (long **)&UNK_10f66d764;
  uStack_1a8 = (long *)0x47;
  plVar38 = (long *)*param_4;
  if (param_4[1] - *param_4 >> 4 == (long)plVar51 - (long)plVar47 >> 5) {
    do {
      if (plVar38 == (long *)param_4[1]) {
        plStack_1f8 = (long *)0x0;
        lStack_200 = 0;
        uStack_1e8 = 0;
        plStack_1f0 = (long *)0x0;
        fStack_1e0 = 1.0;
        if (plVar51 == plVar47) goto LAB_10a6bc370;
        uVar40 = 0;
        goto LAB_10a6bbec8;
      }
      lVar44 = *plVar38;
      uStack_1b0 = (long **)&UNK_10f66d7ac;
      uStack_1a8 = (long *)0x37;
      plVar38 = plVar38 + 2;
    } while (lVar44 != 0);
    FUN_10a0edfc4(&uStack_1b0);
  }
  else {
    FUN_10a0edfc4(&uStack_1b0);
  }
LAB_10a6be89c:
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x10a6be8a0);
  (*pcVar16)();
joined_r0x00010a6bcc6c:
  if (plVar34 == (long *)0x0) goto LAB_10a6be808;
  plVar28 = (long *)plVar34[1];
  if (plVar28 == plVar47) {
    plVar28 = &lStack_200;
    func_0x000107c2b068(plVar28,plVar34 + 2,auStack_278);
    if (((ulong)plVar28 & 1) != 0) goto LAB_10a6bccc8;
  }
  else {
    if (((ulong)plVar23 & uVar40) == 0) {
      plVar28 = (long *)((ulong)plVar28 & uVar40);
    }
    else if (plVar23 <= plVar28) {
      uVar49 = 0;
      if (plVar23 != (long *)0x0) {
        uVar49 = (ulong)plVar28 / (ulong)plVar23;
      }
      plVar28 = (long *)((long)plVar28 - uVar49 * (long)plVar23);
    }
    if (plVar28 != plVar45) goto LAB_10a6be808;
  }
  plVar34 = (long *)*plVar34;
  goto joined_r0x00010a6bcc6c;
LAB_10a6be808:
  FUN_109ffdddc(&UNK_10f639994);
  goto LAB_10a6be89c;
LAB_10a6bccc8:
  func_0x00010a04a704(&uStack_1a0,plVar34 + 5);
  plStack_190 = (long *)plVar34[7];
  plStack_188 = (long *)plVar34[8];
  func_0x000107c2b054(&pplStack_300,&DAT_10f398457);
  func_0x000109406570(pplVar48,&pplStack_300);
  func_0x00010937ba88();
  fStack_180 = pplStack_320._0_4_;
  if (lStack_2f0 < 0) {
    __ZdlPv(pplStack_300);
  }
  pplStack_300 = (long **)&UNK_10f66d7e4;
  plStack_2f8 = (long *)0x32;
  if (2 < (uint)fStack_180) {
    FUN_10a0edfc4(&pplStack_300);
    goto LAB_10a6be89c;
  }
  func_0x000107c2b054(&pplStack_300,&UNK_10f630a88);
  func_0x000109406570(pplVar48,&pplStack_300);
  func_0x00010937ba88();
  pplVar20 = pplStack_320;
  iVar66 = (int)pplStack_320._0_4_;
  uVar40 = (ulong)pplStack_320 & 0xffffffff;
  if (lStack_2f0 < 0) {
    __ZdlPv(pplStack_300);
  }
  if (iVar66 < 0) {
LAB_10a6be834:
    plStack_2f8 = (long *)0x34;
    pplStack_300 = (long **)&UNK_10f66d817;
    FUN_10a0edfc4(&pplStack_300);
    goto LAB_10a6be89c;
  }
  lVar44 = *(long *)(param_2 + 0x50);
  uVar49 = (*(long *)(param_2 + 0x58) - lVar44 >> 3) * -0x5555555555555555;
  pplStack_300 = (long **)&UNK_10f66d817;
  plStack_2f8 = (long *)0x34;
  if (uVar49 < uVar40 || uVar49 - uVar40 == 0) goto LAB_10a6be834;
  func_0x000107c2b054(&pplStack_300,&DAT_10f36dad5);
  func_0x000109406570(pplVar48,&pplStack_300);
  if (lStack_2f0 < 0) {
    __ZdlPv(pplStack_300);
  }
  plStack_2f8 = (long *)0x0;
  lStack_2f0 = 0;
  uStack_2e8 = 0x8000000000000000;
  cVar8 = *(char *)pplVar48;
  if (cVar8 == '\0') {
    uStack_2e8 = 1;
  }
  else {
    if (cVar8 == '\x02') {
      lStack_2f0 = *pplVar48[1];
      plStack_318 = (long *)0x0;
      uStack_308 = 0x8000000000000000;
      lStack_310 = pplVar48[1][1];
      goto LAB_10a6bce80;
    }
    if (cVar8 == '\x01') {
      plStack_2f8 = (long *)*pplVar48[1];
      lStack_310 = 0;
      uStack_308 = 0x8000000000000000;
      plStack_318 = pplVar48[1] + 1;
      goto LAB_10a6bce80;
    }
    uStack_2e8 = 0;
  }
  plStack_318 = (long *)0x0;
  lStack_310 = 0;
  uStack_308 = 1;
LAB_10a6bce80:
  puVar30 = (undefined8 *)(lVar44 + ((ulong)pplVar20 & 0xffffffff) * 0x18);
  uStack_350 = 0;
  fVar64 = 0.0;
  fVar70 = 0.0;
  fVar56 = 0.0;
  pplStack_320 = pplVar48;
  pplStack_300 = pplVar48;
  while( true ) {
    ppplVar21 = &pplStack_300;
    func_0x00010937c708(ppplVar21,&pplStack_320);
    puVar55 = puStack_218;
    puVar50 = puStack_220;
    if (((ulong)ppplVar21 & 1) != 0) break;
    ppplVar21 = &pplStack_300;
    func_0x00010937c560(ppplVar21);
    func_0x000107c2b054(&fStack_338,"start");
    func_0x000109406570(ppplVar21,&fStack_338);
    func_0x00010937ba88();
    uVar5 = uStack_1d4;
    if (cStack_321 < '\0') {
      __ZdlPv(CONCAT44(uStack_334,fStack_338));
    }
    func_0x000107c2b054(&fStack_338,"end");
    func_0x000109406570(ppplVar21,&fStack_338);
    func_0x00010937ba88();
    uVar15 = uStack_1d4;
    if (cStack_321 < '\0') {
      __ZdlPv(CONCAT44(uStack_334,fStack_338));
    }
    if ((uVar5 <= param_3) && (param_3 < uVar15)) {
      func_0x000107c2b054(&fStack_338,&DAT_10f68f0f0);
      ppplVar22 = ppplVar21;
      func_0x000109406570(ppplVar21,&fStack_338);
      if (cStack_321 < '\0') {
        __ZdlPv(CONCAT44(uStack_334,fStack_338));
      }
      func_0x000107c2b054(&fStack_338,&DAT_10f68f0f0);
      func_0x000109406570(ppplVar21,&fStack_338);
      if (cStack_321 < '\0') {
        __ZdlPv(CONCAT44(uStack_334,fStack_338));
      }
      func_0x0001094cf080(ppplVar22,0);
      func_0x00010938d050();
      fVar70 = fStack_338;
      func_0x0001094cf080(ppplVar22,1);
      func_0x00010938d050();
      fVar58 = fStack_338;
      func_0x0001094cf080(ppplVar22,2);
      func_0x00010938d050();
      fVar56 = fStack_338;
      func_0x0001094cf080(ppplVar21,0);
      func_0x00010938d050();
      func_0x0001094cf080(ppplVar21,1);
      func_0x00010938d050();
      fVar64 = fStack_338;
      func_0x0001094cf080(ppplVar21,2);
      func_0x00010938d050();
      uStack_350 = CONCAT44(fVar58,fVar70);
      fVar70 = fStack_338;
    }
    func_0x00010937c698(&pplStack_300);
  }
  fStack_17c = (float)uStack_350 / 255.0;
  fStack_178 = uStack_350._4_4_ / 255.0;
  fStack_174 = fVar56 / 255.0;
  uVar65 = puVar30[2];
  iVar66 = -(uint)((float)uVar65 < 0.0);
  iVar67 = -(uint)((float)((ulong)uVar65 >> 0x20) < 0.0);
  fVar56 = (float)CONCAT13((byte)((ulong)uVar65 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18),
                           CONCAT12((byte)((ulong)uVar65 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10),
                                    CONCAT11((byte)((ulong)uVar65 >> 8) & ~(byte)((uint)iVar66 >> 8)
                                             ,(byte)uVar65 & ~(byte)iVar66)));
  uStack_170 = CONCAT44(fVar56 / fVar64,0x3f800000);
  uStack_168 = CONCAT44((float)*puVar30 / 255.0,
                        (float)(CONCAT17((byte)((ulong)uVar65 >> 0x38) &
                                         ~(byte)((uint)iVar67 >> 0x18),
                                         CONCAT16((byte)((ulong)uVar65 >> 0x30) &
                                                  ~(byte)((uint)iVar67 >> 0x10),
                                                  CONCAT15((byte)((ulong)uVar65 >> 0x28) &
                                                           ~(byte)((uint)iVar67 >> 8),
                                                           CONCAT14((byte)((ulong)uVar65 >> 0x20) &
                                                                    ~(byte)iVar67,fVar56)))) >> 0x20
                               ) / fVar70);
  uStack_160 = CONCAT44(*(float *)(puVar30 + 1) / 255.0,(float)((ulong)*puVar30 >> 0x20) / 255.0);
  if (puStack_218 < puStack_210) {
    puStack_218[1] = uStack_1a8;
    *puStack_218 = uStack_1b0;
    puStack_218[3] = uStack_198;
    puStack_218[2] = uStack_1a0;
    if (uStack_198 != (undefined **)0x0) {
      ppuVar1 = uStack_198 + 1;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar9) {
          *ppuVar1 = *ppuVar1 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    puStack_218[10] = uStack_160;
    puStack_218[7] = CONCAT44(fStack_174,fStack_178);
    puStack_218[6] = CONCAT44(fStack_17c,fStack_180);
    puStack_218[9] = uStack_168;
    puStack_218[8] = uStack_170;
    puStack_218[5] = plStack_188;
    puStack_218[4] = plStack_190;
    puVar30 = puStack_218 + 0xb;
  }
  else {
    lVar44 = (long)puStack_218 - (long)puStack_220;
    uVar40 = (lVar44 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
    if (0x2e8ba2e8ba2e8ba < uVar40) {
      FUN_10a6c9580();
      goto LAB_10a6be89c;
    }
    lVar32 = (long)puStack_210 - (long)puStack_220 >> 3;
    uVar49 = lVar32 * 0x5d1745d1745d1746;
    if (uVar49 < uVar40 || uVar49 - uVar40 == 0) {
      uVar49 = uVar40;
    }
    if (0x1745d1745d1745c < (ulong)(lVar32 * 0x2e8ba2e8ba2e8ba3)) {
      uVar49 = 0x2e8ba2e8ba2e8ba;
    }
    if (0x2e8ba2e8ba2e8ba < uVar49) {
      func_0x000109ffded8();
      goto LAB_10a6be89c;
    }
    lVar32 = uVar49 * 0x58;
    __Znwm();
    puVar30 = (undefined8 *)(lVar32 + lVar44);
    puVar30[1] = uStack_1a8;
    *puVar30 = uStack_1b0;
    puVar30[3] = uStack_198;
    puVar30[2] = uStack_1a0;
    if (uStack_198 != (undefined **)0x0) {
      ppuVar1 = uStack_198 + 1;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar9) {
          *ppuVar1 = *ppuVar1 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      lVar44 = (long)puStack_218 - (long)puStack_220;
      puVar55 = puStack_218;
      puVar50 = puStack_220;
    }
    puVar30[5] = plStack_188;
    puVar30[4] = plStack_190;
    puVar30[7] = CONCAT44(fStack_174,fStack_178);
    puVar30[6] = CONCAT44(fStack_17c,fStack_180);
    puVar30[9] = uStack_168;
    puVar30[8] = uStack_170;
    puVar30[10] = uStack_160;
    puVar53 = (undefined8 *)((long)puVar30 - lVar44);
    puVar33 = puVar50;
    puVar54 = puVar53;
    if (puVar50 != puVar55) {
      do {
        uVar65 = *puVar33;
        puVar54[1] = puVar33[1];
        *puVar54 = uVar65;
        uVar65 = puVar33[2];
        puVar54[3] = puVar33[3];
        puVar54[2] = uVar65;
        puVar33[2] = 0;
        puVar33[3] = 0;
        uVar65 = puVar33[4];
        uVar27 = puVar33[5];
        uVar11 = puVar33[6];
        uVar12 = puVar33[7];
        uVar13 = puVar33[8];
        uVar14 = puVar33[9];
        puVar54[10] = puVar33[10];
        puVar54[7] = uVar12;
        puVar54[6] = uVar11;
        puVar54[9] = uVar14;
        puVar54[8] = uVar13;
        puVar54[5] = uVar27;
        puVar54[4] = uVar65;
        puVar33 = puVar33 + 0xb;
        puVar54 = puVar54 + 0xb;
      } while (puVar33 != puVar55);
      do {
        func_0x00010a05248c(puVar50 + 2);
        puVar50 = puVar50 + 0xb;
        puVar33 = puStack_220;
      } while (puVar50 != puVar55);
    }
    puStack_210 = (undefined8 *)(lVar32 + uVar49 * 0x58);
    puVar30 = puVar30 + 0xb;
    puStack_220 = puVar53;
    if (puVar33 != (undefined8 *)0x0) {
      puStack_218 = puVar30;
      __ZdlPv(puVar33);
    }
  }
  ppuVar1 = uStack_198;
  puStack_218 = puVar30;
  if (uStack_198 != (undefined **)0x0) {
    ppuVar2 = uStack_198 + 1;
    do {
      puVar35 = *ppuVar2;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar9) {
        *ppuVar2 = puVar35 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (puVar35 == (undefined *)0x0) {
      (**(code **)(*uStack_198 + 0x10))(uStack_198);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar1);
    }
  }
LAB_10a6bcb04:
  if (cStack_2c1 < '\0') {
    __ZdlPv(auStack_2d8[0]);
  }
  func_0x00010937c698(&plStack_298);
  goto LAB_10a6bca0c;
LAB_10a6bbec8:
  do {
    if ((ulong)(param_4[1] - *param_4 >> 4) <= uVar40) goto LAB_10a6be89c;
    plVar38 = (long *)plVar47[uVar40 * 4 + 1];
    plVar23 = (long *)plVar47[uVar40 * 4 + 2];
    if (plVar38 != plVar23) {
      puVar30 = (undefined8 *)(*param_4 + uVar40 * 0x10);
      do {
        plVar51 = (long *)puVar30[1];
        uStack_1b0 = (long **)*puVar30;
        uStack_1a8 = (long *)puVar30[1];
        if (plVar51 != (long *)0x0) {
          plVar45 = plVar51 + 1;
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar45,0x10);
            if (bVar9) {
              *plVar45 = *plVar45 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        uStack_1a0 = (code *)plVar38[3];
        uStack_198 = (undefined **)
                     ((ulong)(uStack_1a0 + ((ulong)*(uint *)((long)plVar38 + 0x24) << 0x20)) &
                      0xffffffff00000000 | (ulong)(uint)((int)plVar38[4] + (int)plVar38[3]));
        plVar45 = &lStack_200;
        func_0x000107c2b05c(plVar45,plVar38);
        plVar34 = plStack_1f8;
        if (plStack_1f8 != (long *)0x0) {
          uVar49 = (long)plStack_1f8 - 1;
          if (((ulong)plStack_1f8 & uVar49) == 0) {
            plVar47 = (long *)(uVar49 & (ulong)plVar45);
          }
          else {
            plVar47 = plVar45;
            if (plStack_1f8 <= plVar45) {
              uVar46 = 0;
              if (plStack_1f8 != (long *)0x0) {
                uVar46 = (ulong)plVar45 / (ulong)plStack_1f8;
              }
              plVar47 = (long *)((long)plVar45 - uVar46 * (long)plStack_1f8);
            }
          }
          plVar28 = *(long **)(lStack_200 + (long)plVar47 * 8);
          if (plVar28 != (long *)0x0) {
            for (plVar28 = (long *)*plVar28; plVar28 != (long *)0x0; plVar28 = (long *)*plVar28) {
              plVar29 = (long *)plVar28[1];
              if (plVar29 == plVar45) {
                plVar29 = &lStack_200;
                func_0x000107c2b068(plVar29,plVar28 + 2,plVar38);
                if (((ulong)plVar29 & 1) != 0) {
                  if (plVar51 != (long *)0x0) {
                    plVar45 = plVar51 + 1;
                    do {
                      lVar44 = *plVar45;
                      cVar8 = '\x01';
                      bVar9 = (bool)ExclusiveMonitorPass(plVar45,0x10);
                      if (bVar9) {
                        *plVar45 = lVar44 + -1;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                    if (lVar44 == 0) {
                      (**(code **)(*plVar51 + 0x10))(plVar51);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar51);
                    }
                  }
                  goto LAB_10a6bc2cc;
                }
              }
              else {
                if (((ulong)plVar34 & uVar49) == 0) {
                  plVar29 = (long *)((ulong)plVar29 & uVar49);
                }
                else if (plVar34 <= plVar29) {
                  uVar46 = 0;
                  if (plVar34 != (long *)0x0) {
                    uVar46 = (ulong)plVar29 / (ulong)plVar34;
                  }
                  plVar29 = (long *)((long)plVar29 - uVar46 * (long)plVar34);
                }
                if (plVar29 != plVar47) break;
              }
            }
          }
        }
        plVar28 = (long *)0x48;
        __Znwm();
        uStack_f8 = &lStack_200;
        uStack_100._0_4_ = SUB84(plVar28,0);
        uStack_100._4_4_ = (float)((ulong)plVar28 >> 0x20);
        fStack_f0 = 0.0;
        fStack_ec = 0.0;
        *plVar28 = 0;
        plVar28[1] = (long)plVar45;
        if (*(char *)((long)plVar38 + 0x17) < '\0') {
          func_0x000107c3192c(plVar28 + 2,*plVar38,plVar38[1]);
        }
        else {
          lVar44 = *plVar38;
          lVar32 = plVar38[1];
          plVar28[4] = plVar38[2];
          plVar28[3] = lVar32;
          plVar28[2] = lVar44;
        }
        plVar28[5] = (long)uStack_1b0;
        plVar28[6] = (long)plVar51;
        uStack_1a8 = (long *)0x0;
        uStack_1b0 = (long **)0x0;
        plVar28[8] = (long)uStack_198;
        plVar28[7] = (long)uStack_1a0;
        fStack_f0 = (float)CONCAT31(fStack_f0._1_3_,1);
        if ((plVar34 == (long *)0x0) || (fStack_1e0 * (float)plVar34 < (float)(uStack_1e8 + 1))) {
          uVar49 = 1;
          if ((long *)0x2 < plVar34) {
            uVar49 = (ulong)(((ulong)plVar34 & (long)plVar34 - 1U) != 0);
          }
          plVar47 = (long *)(uVar49 | (long)plVar34 << 1);
          plVar51 = (long *)(long)((float)(uStack_1e8 + 1) / fStack_1e0);
          if (plVar47 <= plVar51) {
            plVar47 = plVar51;
          }
          if ((long)plVar47 - 1U == 0) {
            plVar47 = (long *)0x2;
          }
          else if (((ulong)plVar47 & (long)plVar47 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
          }
          plVar51 = plStack_1f8;
          if (plStack_1f8 < plVar47) {
LAB_10a6bc0d4:
            if ((ulong)plVar47 >> 0x3d != 0) {
              func_0x000109ffded8();
              goto LAB_10a6be89c;
            }
            lVar44 = (long)plVar47 << 3;
            __Znwm();
            bVar9 = lStack_200 != 0;
            lStack_200 = lVar44;
            if (bVar9) {
              __ZdlPv();
            }
            plVar51 = (long *)0x0;
            do {
              *(undefined8 *)(lStack_200 + (long)plVar51 * 8) = 0;
              plVar51 = (long *)((long)plVar51 + 1);
            } while (plVar47 != plVar51);
            plStack_1f8 = plVar47;
            if (plStack_1f0 != (long *)0x0) {
              plVar51 = (long *)plStack_1f0[1];
              uVar49 = (long)plVar47 - 1;
              if (((ulong)plVar47 & uVar49) == 0) {
                plVar51 = (long *)((ulong)plVar51 & uVar49);
              }
              else if (plVar47 <= plVar51) {
                uVar46 = 0;
                if (plVar47 != (long *)0x0) {
                  uVar46 = (ulong)plVar51 / (ulong)plVar47;
                }
                plVar51 = (long *)((long)plVar51 - uVar46 * (long)plVar47);
              }
              *(long ***)(lStack_200 + (long)plVar51 * 8) = &plStack_1f0;
              plVar34 = (long *)*plStack_1f0;
              plVar29 = plStack_1f0;
              while (plVar34 != (long *)0x0) {
                plVar31 = (long *)plVar34[1];
                if (((ulong)plVar47 & uVar49) == 0) {
                  plVar31 = (long *)((ulong)plVar31 & uVar49);
                }
                else if (plVar47 <= plVar31) {
                  uVar46 = 0;
                  if (plVar47 != (long *)0x0) {
                    uVar46 = (ulong)plVar31 / (ulong)plVar47;
                  }
                  plVar31 = (long *)((long)plVar31 - uVar46 * (long)plVar47);
                }
                plVar41 = plVar34;
                if (plVar31 != plVar51) {
                  if (*(long *)(lStack_200 + (long)plVar31 * 8) == 0) {
                    *(long **)(lStack_200 + (long)plVar31 * 8) = plVar29;
                    plVar51 = plVar31;
                  }
                  else {
                    *plVar29 = *plVar34;
                    *plVar34 = **(long **)(lStack_200 + (long)plVar31 * 8);
                    **(undefined8 **)(lStack_200 + (long)plVar31 * 8) = plVar34;
                    plVar41 = plVar29;
                  }
                }
                plVar29 = plVar41;
                plVar34 = (long *)*plVar41;
              }
            }
          }
          else if (plVar47 < plStack_1f8) {
            plVar34 = (long *)(long)((float)uStack_1e8 / fStack_1e0);
            if ((plStack_1f8 < (long *)0x3) || (((ulong)plStack_1f8 & (long)plStack_1f8 - 1U) != 0))
            {
              __ZNSt3__112__next_primeEm();
            }
            else if ((long *)0x1 < plVar34) {
              plVar34 = (long *)(1L << (-LZCOUNT((long)plVar34 + -1) & 0x3fU));
            }
            lVar44 = lStack_200;
            if (plVar47 <= plVar34) {
              plVar47 = plVar34;
            }
            if (plVar47 < plVar51) {
              if (plVar47 != (long *)0x0) goto LAB_10a6bc0d4;
              lStack_200 = 0;
              if (lVar44 != 0) {
                __ZdlPv();
              }
              plStack_1f8 = (long *)0x0;
            }
          }
          plVar34 = plStack_1f8;
          if (((ulong)plStack_1f8 & (long)plStack_1f8 - 1U) == 0) {
            plVar47 = (long *)((long)plStack_1f8 - 1U & (ulong)plVar45);
          }
          else {
            plVar47 = plVar45;
            if (plStack_1f8 <= plVar45) {
              uVar49 = 0;
              if (plStack_1f8 != (long *)0x0) {
                uVar49 = (ulong)plVar45 / (ulong)plStack_1f8;
              }
              plVar47 = (long *)((long)plVar45 - uVar49 * (long)plStack_1f8);
            }
          }
        }
        plVar51 = *(long **)(lStack_200 + (long)plVar47 * 8);
        if (plVar51 == (long *)0x0) {
          *plVar28 = (long)plStack_1f0;
          *(long ***)(lStack_200 + (long)plVar47 * 8) = &plStack_1f0;
          plStack_1f0 = plVar28;
          if (*plVar28 != 0) {
            plVar51 = *(long **)(*plVar28 + 8);
            if (((ulong)plVar34 & (long)plVar34 - 1U) == 0) {
              plVar51 = (long *)((ulong)plVar51 & (long)plVar34 - 1U);
            }
            else if (plVar34 <= plVar51) {
              uVar49 = 0;
              if (plVar34 != (long *)0x0) {
                uVar49 = (ulong)plVar51 / (ulong)plVar34;
              }
              plVar51 = (long *)((long)plVar51 - uVar49 * (long)plVar34);
            }
            *(long **)(lStack_200 + (long)plVar51 * 8) = plVar28;
          }
        }
        else {
          *plVar28 = *plVar51;
          *plVar51 = (long)plVar28;
        }
        uStack_100._0_4_ = 0.0;
        uStack_100._4_4_ = 0.0;
        uStack_1e8 = uStack_1e8 + 1;
        func_0x00010a6d6f2c(&uStack_100);
LAB_10a6bc2cc:
        plVar38 = plVar38 + 5;
      } while (plVar38 != plVar23);
      plVar47 = *(long **)(param_2 + 0x20);
      plVar51 = *(long **)(param_2 + 0x28);
    }
    uVar40 = uVar40 + 1;
  } while (uVar40 < (ulong)((long)plVar51 - (long)plVar47 >> 5));
LAB_10a6bc370:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (plVar51 != plVar47) {
    plVar38 = (long *)0x0;
    plVar51 = (long *)(param_2 + 0x68);
    auVar57 = NEON_fmov(0x3f800000,4);
    do {
      if ((long *)(param_4[1] - *param_4 >> 4) <= plVar38) goto LAB_10a6be89c;
      puStack_210 = (undefined8 *)0x0;
      plStack_228 = (long *)0x0;
      puStack_230 = (undefined8 *)0x0;
      puStack_218 = (undefined8 *)0x0;
      puStack_220 = (undefined8 *)0x0;
      func_0x00010a04a704(&puStack_230,*param_4 + (long)plVar38 * 0x10);
      plStack_258 = (long *)0x0;
      lStack_260 = 0;
      uStack_248 = 0;
      plStack_250 = (long *)0x0;
      fStack_240 = 1.0;
      plVar23 = (long *)plVar47[(long)plVar38 * 4 + 2];
      plVar45 = plVar38;
      for (plVar47 = (long *)plVar47[(long)plVar38 * 4 + 1]; plVar47 != plVar23;
          plVar47 = plVar47 + 5) {
        lVar32 = plVar47[3];
        lVar44 = plVar47[3];
        lVar37 = plVar47[4];
        uVar5 = *(uint *)((long)plVar47 + 0x24);
        plVar34 = &lStack_260;
        func_0x000107c2b05c(plVar34,plVar47);
        plVar28 = plStack_258;
        if (plStack_258 != (long *)0x0) {
          uVar40 = (long)plStack_258 - 1;
          if (((ulong)plStack_258 & uVar40) == 0) {
            plVar45 = (long *)(uVar40 & (ulong)plVar34);
          }
          else {
            plVar45 = plVar34;
            if (plStack_258 <= plVar34) {
              uVar49 = 0;
              if (plStack_258 != (long *)0x0) {
                uVar49 = (ulong)plVar34 / (ulong)plStack_258;
              }
              plVar45 = (long *)((long)plVar34 - uVar49 * (long)plStack_258);
            }
          }
          puVar30 = *(undefined8 **)(lStack_260 + (long)plVar45 * 8);
          if (puVar30 != (undefined8 *)0x0) {
            for (plVar29 = (long *)*puVar30; plVar29 != (long *)0x0; plVar29 = (long *)*plVar29) {
              plVar31 = (long *)plVar29[1];
              if (plVar31 == plVar34) {
                plVar31 = &lStack_260;
                func_0x000107c2b068(plVar31,plVar29 + 2,plVar47);
                if (((ulong)plVar31 & 1) != 0) goto LAB_10a6bc794;
              }
              else {
                if (((ulong)plVar28 & uVar40) == 0) {
                  plVar31 = (long *)((ulong)plVar31 & uVar40);
                }
                else if (plVar28 <= plVar31) {
                  uVar49 = 0;
                  if (plVar28 != (long *)0x0) {
                    uVar49 = (ulong)plVar31 / (ulong)plVar28;
                  }
                  plVar31 = (long *)((long)plVar31 - uVar49 * (long)plVar28);
                }
                if (plVar31 != plVar45) break;
              }
            }
          }
        }
        plVar29 = (long *)0x38;
        __Znwm();
        *plVar29 = 0;
        plVar29[1] = (long)plVar34;
        if (*(char *)((long)plVar47 + 0x17) < '\0') {
          func_0x000107c3192c(plVar29 + 2,*plVar47,plVar47[1]);
        }
        else {
          lVar19 = *plVar47;
          lVar10 = plVar47[1];
          plVar29[4] = plVar47[2];
          plVar29[3] = lVar10;
          plVar29[2] = lVar19;
        }
        plVar29[5] = 0;
        plVar29[6] = 0;
        if ((plVar28 == (long *)0x0) || (fStack_240 * (float)plVar28 < (float)(uStack_248 + 1))) {
          uVar40 = 1;
          if ((long *)0x2 < plVar28) {
            uVar40 = (ulong)(((ulong)plVar28 & (long)plVar28 - 1U) != 0);
          }
          plVar45 = (long *)(uVar40 | (long)plVar28 << 1);
          plVar28 = (long *)(long)((float)(uStack_248 + 1) / fStack_240);
          if (plVar45 <= plVar28) {
            plVar45 = plVar28;
          }
          if ((long)plVar45 - 1U == 0) {
            plVar45 = (long *)0x2;
          }
          else if (((ulong)plVar45 & (long)plVar45 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
          }
          plVar28 = plStack_258;
          if (plStack_258 < plVar45) {
LAB_10a6bc5a0:
            if ((ulong)plVar45 >> 0x3d != 0) {
              func_0x000109ffded8();
              goto LAB_10a6be89c;
            }
            lVar19 = (long)plVar45 << 3;
            __Znwm();
            bVar9 = lStack_260 != 0;
            lStack_260 = lVar19;
            if (bVar9) {
              __ZdlPv();
            }
            plVar28 = (long *)0x0;
            do {
              *(undefined8 *)(lStack_260 + (long)plVar28 * 8) = 0;
              plVar28 = (long *)((long)plVar28 + 1);
            } while (plVar45 != plVar28);
            plStack_258 = plVar45;
            if (plStack_250 != (long *)0x0) {
              plVar28 = (long *)plStack_250[1];
              uVar40 = (long)plVar45 - 1;
              if (((ulong)plVar45 & uVar40) == 0) {
                plVar28 = (long *)((ulong)plVar28 & uVar40);
              }
              else if (plVar45 <= plVar28) {
                uVar49 = 0;
                if (plVar45 != (long *)0x0) {
                  uVar49 = (ulong)plVar28 / (ulong)plVar45;
                }
                plVar28 = (long *)((long)plVar28 - uVar49 * (long)plVar45);
              }
              *(long ***)(lStack_260 + (long)plVar28 * 8) = &plStack_250;
              plVar31 = (long *)*plStack_250;
              plVar41 = plStack_250;
              while (plVar31 != (long *)0x0) {
                plVar43 = (long *)plVar31[1];
                if (((ulong)plVar45 & uVar40) == 0) {
                  plVar43 = (long *)((ulong)plVar43 & uVar40);
                }
                else if (plVar45 <= plVar43) {
                  uVar49 = 0;
                  if (plVar45 != (long *)0x0) {
                    uVar49 = (ulong)plVar43 / (ulong)plVar45;
                  }
                  plVar43 = (long *)((long)plVar43 - uVar49 * (long)plVar45);
                }
                plVar42 = plVar31;
                if (plVar43 != plVar28) {
                  if (*(long *)(lStack_260 + (long)plVar43 * 8) == 0) {
                    *(long **)(lStack_260 + (long)plVar43 * 8) = plVar41;
                    plVar28 = plVar43;
                  }
                  else {
                    *plVar41 = *plVar31;
                    *plVar31 = **(long **)(lStack_260 + (long)plVar43 * 8);
                    **(undefined8 **)(lStack_260 + (long)plVar43 * 8) = plVar31;
                    plVar42 = plVar41;
                  }
                }
                plVar41 = plVar42;
                plVar31 = (long *)*plVar42;
              }
            }
          }
          else if (plVar45 < plStack_258) {
            plVar31 = (long *)(long)((float)uStack_248 / fStack_240);
            if ((plStack_258 < (long *)0x3) || (((ulong)plStack_258 & (long)plStack_258 - 1U) != 0))
            {
              __ZNSt3__112__next_primeEm();
            }
            else if ((long *)0x1 < plVar31) {
              plVar31 = (long *)(1L << (-LZCOUNT((long)plVar31 + -1) & 0x3fU));
            }
            lVar19 = lStack_260;
            if (plVar45 <= plVar31) {
              plVar45 = plVar31;
            }
            if (plVar45 < plVar28) {
              if (plVar45 != (long *)0x0) goto LAB_10a6bc5a0;
              lStack_260 = 0;
              if (lVar19 != 0) {
                __ZdlPv();
              }
              plStack_258 = (long *)0x0;
            }
          }
          plVar28 = plStack_258;
          if (((ulong)plStack_258 & (long)plStack_258 - 1U) == 0) {
            plVar45 = (long *)((long)plStack_258 - 1U & (ulong)plVar34);
          }
          else {
            plVar45 = plVar34;
            if (plStack_258 <= plVar34) {
              uVar40 = 0;
              if (plStack_258 != (long *)0x0) {
                uVar40 = (ulong)plVar34 / (ulong)plStack_258;
              }
              plVar45 = (long *)((long)plVar34 - uVar40 * (long)plStack_258);
            }
          }
        }
        plVar34 = *(long **)(lStack_260 + (long)plVar45 * 8);
        if (plVar34 == (long *)0x0) {
          *plVar29 = (long)plStack_250;
          *(long ***)(lStack_260 + (long)plVar45 * 8) = &plStack_250;
          plStack_250 = plVar29;
          if (*plVar29 != 0) {
            plVar34 = *(long **)(*plVar29 + 8);
            if (((ulong)plVar28 & (long)plVar28 - 1U) == 0) {
              plVar34 = (long *)((ulong)plVar34 & (long)plVar28 - 1U);
            }
            else if (plVar28 <= plVar34) {
              uVar40 = 0;
              if (plVar28 != (long *)0x0) {
                uVar40 = (ulong)plVar34 / (ulong)plVar28;
              }
              plVar34 = (long *)((long)plVar34 - uVar40 * (long)plVar28);
            }
            *(long **)(lStack_260 + (long)plVar34 * 8) = plVar29;
          }
        }
        else {
          *plVar29 = *plVar34;
          *plVar34 = (long)plVar29;
        }
        uStack_248 = uStack_248 + 1;
LAB_10a6bc794:
        plVar29[5] = lVar44;
        plVar29[6] = lVar44 + ((ulong)uVar5 << 0x20) & 0xffffffff00000000 |
                     (ulong)(uint)((int)lVar37 + (int)lVar32);
      }
      uStack_f8 = (long *)0x0;
      fStack_ec = 0.0;
      fStack_f0 = 0.0;
      uStack_e8 = 0x8000000000000000;
      cVar8 = *(char *)plVar51;
      uStack_1d0 = plVar51;
      uStack_100 = plVar51;
      if (cVar8 == '\0') {
        uStack_e8 = 1;
LAB_10a6bc8cc:
        uStack_1c8 = (long *)0x0;
        uStack_1c0 = 0;
        uStack_1b8 = 1;
      }
      else if (cVar8 == '\x02') {
        uVar65 = **(undefined8 **)(param_2 + 0x70);
        fStack_f0 = (float)uVar65;
        fStack_ec = (float)((ulong)uVar65 >> 0x20);
        uStack_1c8 = (long *)0x0;
        uStack_1b8 = 0x8000000000000000;
        uStack_1c0 = (*(undefined8 **)(param_2 + 0x70))[1];
      }
      else {
        if (cVar8 != '\x01') {
          uStack_e8 = 0;
          goto LAB_10a6bc8cc;
        }
        uStack_1c8 = *(long **)(param_2 + 0x70) + 1;
        uStack_f8 = (long *)**(long **)(param_2 + 0x70);
        uStack_1b8 = 0x8000000000000000;
        uStack_1c0 = 0;
      }
      while( true ) {
        puVar30 = &uStack_100;
        func_0x000109379420(puVar30,&uStack_1d0);
        if ((int)puVar30 != 0) break;
        plVar47 = &uStack_100;
        func_0x00010937b950();
        func_0x000107c2b054(&uStack_1b0,"id");
        func_0x000109406570(plVar47,&uStack_1b0);
        func_0x00010937c804(auStack_278);
        if ((long)uStack_1a0 < 0) {
          __ZdlPv(uStack_1b0);
        }
        func_0x000107c2b054(&uStack_1b0,&DAT_10f2c3ed3);
        func_0x000109406570(plVar47,&uStack_1b0);
        if ((long)uStack_1a0 < 0) {
          __ZdlPv(uStack_1b0);
        }
        plStack_290 = (long *)0x0;
        uStack_288 = 0;
        uStack_280 = 0x8000000000000000;
        cVar8 = (char)*plVar47;
        plStack_2c0 = plVar47;
        plStack_298 = plVar47;
        if (cVar8 == '\0') {
          uStack_280 = 1;
LAB_10a6bc9fc:
          plStack_2b8 = (long *)0x0;
          uStack_2b0 = 0;
          uStack_2a8 = 1;
        }
        else if (cVar8 == '\x02') {
          uStack_288 = *(undefined8 *)plVar47[1];
          plStack_2b8 = (long *)0x0;
          uStack_2a8 = 0x8000000000000000;
          uStack_2b0 = *(undefined8 *)(plVar47[1] + 8);
        }
        else {
          if (cVar8 != '\x01') {
            uStack_280 = 0;
            goto LAB_10a6bc9fc;
          }
          plStack_290 = *(long **)plVar47[1];
          uStack_2b0 = 0;
          uStack_2a8 = 0x8000000000000000;
          plStack_2b8 = (long *)(plVar47[1] + 8);
        }
LAB_10a6bca0c:
        pplVar48 = &plStack_298;
        func_0x00010937c708(pplVar48,&plStack_2c0);
        if ((int)pplVar48 == 0) {
          pplVar48 = &plStack_298;
          func_0x00010937c560();
          func_0x000107c2b054(&uStack_1b0,&UNK_10f630a94);
          func_0x000109406570(pplVar48,&uStack_1b0);
          func_0x00010937c804(auStack_2d8);
          if ((long)uStack_1a0 < 0) {
            __ZdlPv(uStack_1b0);
          }
          plVar47 = &lStack_260;
          func_0x000107c2b05c(plVar47,auStack_2d8);
          plVar23 = plStack_258;
          if (plStack_258 != (long *)0x0) {
            uVar40 = (long)plStack_258 - 1;
            if (((ulong)plStack_258 & uVar40) == 0) {
              plVar45 = (long *)(uVar40 & (ulong)plVar47);
            }
            else {
              plVar45 = plVar47;
              if (plStack_258 <= plVar47) {
                uVar49 = 0;
                if (plStack_258 != (long *)0x0) {
                  uVar49 = (ulong)plVar47 / (ulong)plStack_258;
                }
                plVar45 = (long *)((long)plVar47 - uVar49 * (long)plStack_258);
              }
            }
            plVar34 = *(long **)(lStack_260 + (long)plVar45 * 8);
            if (plVar34 != (long *)0x0) {
              for (plVar34 = (long *)*plVar34; plVar34 != (long *)0x0; plVar34 = (long *)*plVar34) {
                plVar28 = (long *)plVar34[1];
                if (plVar28 == plVar47) {
                  plVar28 = &lStack_260;
                  func_0x000107c2b068(plVar28,plVar34 + 2,auStack_2d8);
                  if (((ulong)plVar28 & 1) != 0) {
                    func_0x000107c2b054(&uStack_1b0,&DAT_10f68f20c);
                    pplVar20 = pplVar48;
                    func_0x000109406570(pplVar48,&uStack_1b0);
                    if ((long)uStack_1a0 < 0) {
                      __ZdlPv(uStack_1b0);
                    }
                    func_0x000107c2b054(&uStack_1b0,&DAT_10f68f0dc);
                    pplVar24 = pplVar48;
                    func_0x000109406570(pplVar48,&uStack_1b0);
                    if ((long)uStack_1a0 < 0) {
                      __ZdlPv(uStack_1b0);
                    }
                    func_0x0001094cf080(pplVar20,0);
                    func_0x00010937ba88();
                    fVar64 = (float)uStack_1b0;
                    func_0x0001094cf080(pplVar20,1);
                    func_0x00010937ba88();
                    fVar70 = (float)uStack_1b0;
                    func_0x0001094cf080(pplVar24,0);
                    func_0x00010937ba88();
                    fVar56 = (float)uStack_1b0;
                    func_0x0001094cf080(pplVar24,1);
                    func_0x00010937ba88();
                    iVar66 = *(int *)((long)plVar34 + 0x2c) + (int)fVar70;
                    uStack_1a8 = (long *)CONCAT44(iVar66 + (int)(float)uStack_1b0,
                                                  (int)fVar56 + (int)fVar64 + *(int *)(plVar34 + 5))
                    ;
                    uStack_160 = 0;
                    uStack_1b0 = (long **)CONCAT44(iVar66,*(int *)(plVar34 + 5) + (int)fVar64);
                    fStack_178 = 0.0;
                    fStack_174 = 0.0;
                    fStack_180 = 0.0;
                    fStack_17c = 0.0;
                    uStack_168 = 0;
                    uStack_170 = 0;
                    uStack_198 = (undefined **)0x0;
                    uStack_1a0 = (code *)0x0;
                    plStack_188 = (long *)0x0;
                    plStack_190 = (long *)0x0;
                    plVar47 = &lStack_200;
                    func_0x000107c2b05c(plVar47,auStack_278);
                    plVar23 = plStack_1f8;
                    if (plStack_1f8 == (long *)0x0) goto LAB_10a6be808;
                    uVar40 = (long)plStack_1f8 - 1;
                    if (((ulong)plStack_1f8 & uVar40) == 0) {
                      plVar45 = (long *)(uVar40 & (ulong)plVar47);
                    }
                    else {
                      plVar45 = plVar47;
                      if (plStack_1f8 <= plVar47) {
                        uVar49 = 0;
                        if (plStack_1f8 != (long *)0x0) {
                          uVar49 = (ulong)plVar47 / (ulong)plStack_1f8;
                        }
                        plVar45 = (long *)((long)plVar47 - uVar49 * (long)plStack_1f8);
                      }
                    }
                    plVar34 = *(long **)(lStack_200 + (long)plVar45 * 8);
                    if (plVar34 == (long *)0x0) goto LAB_10a6be808;
                    plVar34 = (long *)*plVar34;
                    goto joined_r0x00010a6bcc6c;
                  }
                }
                else {
                  if (((ulong)plVar23 & uVar40) == 0) {
                    plVar28 = (long *)((ulong)plVar28 & uVar40);
                  }
                  else if (plVar23 <= plVar28) {
                    uVar49 = 0;
                    if (plVar23 != (long *)0x0) {
                      uVar49 = (ulong)plVar28 / (ulong)plVar23;
                    }
                    plVar28 = (long *)((long)plVar28 - uVar49 * (long)plVar23);
                  }
                  if (plVar28 != plVar45) break;
                }
              }
            }
          }
          goto LAB_10a6bcb04;
        }
        if (cStack_261 < '\0') {
          __ZdlPv(auStack_278[0]);
        }
        func_0x000109386b30(&uStack_100);
      }
      pplVar48 = *(long ***)(param_2 + 0x18);
      plVar45 = (long *)0x340;
      __Znwm();
      plVar34 = plVar45 + 1;
      plVar45[2] = 0;
      *plVar34 = 0;
      pplVar20 = (long **)(plVar45 + 3);
      *plVar45 = (long)&PTR_FUN_110c112e8;
      plVar45[100] = (long)&PTR_FUN_110c383b8;
      plVar45[0x66] = 0;
      plVar45[0x65] = 0;
      *(undefined2 *)(plVar45 + 0x67) = 0x100;
      pplStack_320 = pplVar48;
      FUN_10a1da04c(pplVar20,&PTR_PTR_110c10618,pplVar48);
      uStack_1b0 = (long **)CONCAT62(uStack_1b0._2_6_,1);
      FUN_10a00db68(plVar45 + 0x54,pplVar48,&uStack_1b0);
      plVar45[3] = (long)&PTR_FUN_110c103a0;
      plVar45[5] = (long)&PTR_FUN_110c104d8;
      plVar45[8] = (long)&PTR_FUN_110c10508;
      plVar45[100] = (long)&PTR_FUN_110c105d8;
      plVar45[0x18] = (long)&PTR_FUN_110c10560;
      plVar45[0x54] = (long)&PTR_FUN_110c10580;
      plVar47 = plVar45 + 0x59;
      pplVar48 = (long **)(plVar45 + 0x5c);
      plVar45[99] = 0;
      plVar45[0x5a] = 0;
      *plVar47 = 0;
      plVar45[0x5c] = 0;
      plVar45[0x5b] = 0;
      plVar45[0x5e] = 0;
      plVar45[0x5d] = 0;
      plVar45[0x60] = 0;
      plVar45[0x5f] = 0;
      plVar45[0x62] = 0;
      plVar45[0x61] = 0;
      FUN_10a1f98ec(&uStack_1b0,&uStack_100,&pplStack_320);
      FUN_10a02bf24(plVar45 + 0x62,&uStack_1b0);
      plVar23 = uStack_1a8;
      if (uStack_1a8 != (long *)0x0) {
        plVar28 = uStack_1a8 + 1;
        do {
          lVar44 = *plVar28;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar9) {
            *plVar28 = lVar44 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar44 == 0) {
          (**(code **)(*uStack_1a8 + 0x10))(uStack_1a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
        }
      }
      uStack_1b0 = (long **)plVar45[0x62];
      uStack_1a8 = (long *)plVar45[99];
      if (plVar45[99] != 0) {
        plVar23 = (long *)(plVar45[99] + 8);
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar9) {
            *plVar23 = *plVar23 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      FUN_10a1e3a04(pplVar20,&uStack_1b0);
      plVar23 = uStack_1a8;
      if (uStack_1a8 != (long *)0x0) {
        plVar28 = uStack_1a8 + 1;
        do {
          lVar44 = *plVar28;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar9) {
            *plVar28 = lVar44 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar44 == 0) {
          (**(code **)(*uStack_1a8 + 0x10))(uStack_1a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
        }
      }
      func_0x00010a04a704(pplVar48,&puStack_230);
      plVar28 = *pplVar48;
      plVar23 = (long *)plVar28[0x4d];
      if (plVar23 == (long *)0x0) {
        plVar23 = (long *)0x0;
LAB_10a6bd4a0:
        plVar28 = (long *)0x0;
      }
      else {
        (**(code **)(*plVar23 + 0xb0))();
        plVar28 = (long *)plVar28[0x4d];
        if (plVar28 == (long *)0x0) goto LAB_10a6bd4a0;
        (**(code **)(*plVar28 + 0xb8))();
      }
      pplVar24 = pplStack_320;
      FUN_10a2421c8();
      FUN_10a048e7c(&uStack_1b0,pplVar24[0x3c],0,plVar23,plVar28,1,4,0,0,0);
      FUN_10a00e5c4(plVar45 + 0x5e,&uStack_1b0);
      plVar29 = uStack_1a8;
      if (uStack_1a8 != (long *)0x0) {
        plVar31 = uStack_1a8 + 1;
        do {
          lVar44 = *plVar31;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar31,0x10);
          if (bVar9) {
            *plVar31 = lVar44 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar44 == 0) {
          (**(code **)(*uStack_1a8 + 0x10))(uStack_1a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar29);
        }
      }
      pplVar24 = pplStack_320;
      FUN_10a2421c8();
      FUN_10a048e7c(&uStack_1b0,pplVar24[0x3c],0,plVar23,plVar28,1,4,0,0,0);
      FUN_10a00e5c4(plVar45 + 0x60,&uStack_1b0);
      plVar23 = uStack_1a8;
      if (uStack_1a8 != (long *)0x0) {
        plVar28 = uStack_1a8 + 1;
        do {
          lVar44 = *plVar28;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar9) {
            *plVar28 = lVar44 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar44 == 0) {
          (**(code **)(*uStack_1a8 + 0x10))(uStack_1a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
        }
      }
      plVar23 = plVar45 + 0x5e;
      FUN_10a53daa8(&plStack_2c0,pplStack_320,plVar23);
      lVar44 = (long)puStack_218 - (long)puStack_220 >> 3;
      uVar40 = lVar44 * 0x2e8ba2e8ba2e8ba3;
      puVar50 = (undefined8 *)plVar45[0x5a];
      puVar30 = (undefined8 *)plVar45[0x59];
      uVar49 = (long)puVar50 - (long)puVar30 >> 5;
      if (uVar40 < uVar49 || uVar40 - uVar49 == 0) {
        if (uVar40 < uVar49) {
          plVar23 = puVar30 + lVar44 * -0x5d1745d1745d174;
          FUN_10a6c9614(plVar47,plVar23);
        }
      }
      else {
        uVar46 = uVar40 - uVar49;
        if ((ulong)(plVar45[0x5b] - (long)puVar50 >> 5) < uVar46) {
          if (uVar40 >> 0x3b != 0) {
            FUN_10a6c9600();
            goto LAB_10a6be89c;
          }
          uVar36 = plVar45[0x5b] - (long)puVar30;
          uVar39 = (long)uVar36 >> 4;
          if (uVar39 <= uVar40) {
            uVar39 = uVar40;
          }
          if (0x7fffffffffffffdf < uVar36) {
            uVar39 = 0x7ffffffffffffff;
          }
          if (uVar39 >> 0x3b != 0) {
            func_0x000109ffded8();
            goto LAB_10a6be89c;
          }
          lVar32 = uVar39 << 5;
          __Znwm();
          lVar44 = lVar32 + ((long)puVar50 - (long)puVar30);
          plVar23 = (long *)(uVar46 * 0x20);
          _bzero(lVar44,plVar23);
          puVar54 = (undefined8 *)(lVar44 + uVar49 * -0x20);
          puVar33 = puVar54;
          puVar55 = puVar30;
          if (puVar30 != puVar50) {
            do {
              uVar65 = *puVar55;
              puVar33[1] = puVar55[1];
              *puVar33 = uVar65;
              *puVar55 = 0;
              puVar55[1] = 0;
              uVar65 = puVar55[2];
              puVar33[3] = puVar55[3];
              puVar33[2] = uVar65;
              puVar55[2] = 0;
              puVar55[3] = 0;
              puVar55 = puVar55 + 4;
              puVar33 = puVar33 + 4;
            } while (puVar55 != puVar50);
            do {
              func_0x00010a0cfa6c(puVar30 + 2);
              FUN_10a0617bc(puVar30);
              puVar30 = puVar30 + 4;
            } while (puVar30 != puVar50);
            puVar30 = (undefined8 *)*plVar47;
          }
          plVar45[0x59] = (long)puVar54;
          plVar45[0x5a] = lVar44 + uVar46 * 0x20;
          plVar45[0x5b] = lVar32 + uVar39 * 0x20;
          if (puVar30 != (undefined8 *)0x0) {
            __ZdlPv(puVar30);
          }
        }
        else {
          plVar23 = (long *)(uVar46 * 0x20);
          _bzero(puVar50,plVar23);
          plVar45[0x5a] = (long)(puVar50 + uVar46 * 4);
        }
      }
      if (puStack_218 != puStack_220) {
        uVar40 = 0;
        do {
          puVar30 = puStack_220;
          lVar44 = plVar45[0x59];
          if ((ulong)(plVar45[0x5a] - lVar44 >> 5) <= uVar40) goto LAB_10a6be89c;
          pplVar24 = pplVar48;
          if (uVar40 != 0) {
            pplVar24 = &plStack_2c0;
          }
          pfVar25 = (float *)&uStack_1b0;
          FUN_10a0d0194(&plStack_298);
          FUN_10ab6e898();
          if (*(char *)((long)pfVar25 + 0x17) < '\0') {
            pfVar26 = (float *)&uStack_1b0;
            func_0x000107c3192c(pfVar26,*(undefined8 *)pfVar25,*(undefined8 *)(pfVar25 + 2));
          }
          else {
            uStack_1b0 = *(long ***)pfVar25;
            uStack_1a8 = *(long **)(pfVar25 + 2);
            uStack_1a0 = *(code **)(pfVar25 + 4);
            pfVar26 = pfVar25;
          }
          uStack_198 = *(undefined ***)(pfVar25 + 6);
          fStack_180 = pfVar25[0xc];
          plStack_190 = *(long **)(pfVar25 + 8);
          plStack_188 = *(long **)(pfVar25 + 10);
          FUN_10ab6f020();
          if (*(char *)((long)pfVar26 + 0x17) < '\0') {
            pfVar25 = &fStack_178;
            func_0x000107c3192c(&fStack_178,*(undefined8 *)pfVar26,*(undefined8 *)(pfVar26 + 2));
          }
          else {
            uStack_170 = *(undefined8 *)(pfVar26 + 2);
            uStack_168 = *(undefined8 *)(pfVar26 + 4);
            fStack_174 = (float)((ulong)*(undefined8 *)pfVar26 >> 0x20);
            fStack_178 = (float)*(undefined8 *)pfVar26;
            pfVar25 = pfVar26;
          }
          uStack_160 = *(undefined8 *)(pfVar26 + 6);
          uStack_158 = *(undefined8 *)(pfVar26 + 8);
          uStack_150 = *(undefined8 *)(pfVar26 + 10);
          fStack_148 = pfVar26[0xc];
          FUN_10ab6f160();
          if (*(char *)((long)pfVar25 + 0x17) < '\0') {
            func_0x000107c3192c(auStack_140,*(undefined8 *)pfVar25,*(undefined8 *)(pfVar25 + 2));
          }
          else {
            uStack_130 = *(undefined8 *)(pfVar25 + 4);
            auStack_140[1] = *(undefined8 *)(pfVar25 + 2);
            auStack_140[0] = *(undefined8 *)pfVar25;
          }
          uStack_128 = *(undefined8 *)(pfVar25 + 6);
          uStack_120 = *(undefined8 *)(pfVar25 + 8);
          uStack_118 = *(undefined8 *)(pfVar25 + 10);
          fStack_110 = pfVar25[0xc];
          FUN_10ab6f520(&uStack_100,&uStack_1b0,3);
          plVar47 = plStack_298;
          *(float *)(plStack_298 + 0x1e) = (float)uStack_100;
          if (plStack_298 + 0x1e != &uStack_100) {
            FUN_10a1903c4(plStack_298 + 0x1f,uStack_f8,CONCAT44(fStack_ec,fStack_f0),
                          (CONCAT44(fStack_ec,fStack_f0) - (long)uStack_f8 >> 3) *
                          0x6db6db6db6db6db7);
          }
          piVar52 = (int *)(puVar30 + uVar40 * 0xb);
          plVar23 = (long *)(lVar44 + uVar40 * 0x20);
          plVar47[0x23] = lStack_d8;
          plVar47[0x22] = lStack_e0;
          plVar47[0x25] = lStack_c8;
          plVar47[0x24] = lStack_d0;
          plVar47[0x26] = lStack_c0;
          uStack_1d0 = &uStack_f8;
          func_0x00010a190844(&uStack_1d0);
          lVar44 = 0;
          do {
            if ((&cStack_129)[lVar44] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_140 + lVar44));
            }
            lVar44 = lVar44 + -0x38;
          } while (lVar44 != -0xa8);
          plStack_298[0x1d] = 0x100000000;
          lVar44 = plStack_298[2];
          uVar49 = (ulong)*(uint *)(plStack_298 + 0x1e) * 4;
          uVar46 = plStack_298[3] - lVar44;
          if (uVar49 < uVar46 || uVar49 - uVar46 == 0) {
            if (uVar49 < uVar46) {
              plStack_298[3] = lVar44 + uVar49;
            }
          }
          else {
            func_0x000107c27d58(plStack_298 + 2,uVar49 - uVar46);
          }
          uVar5 = *(uint *)(plStack_298 + 0x22);
          if (uVar5 == 0xffffffff) {
            lVar44 = 0;
          }
          else {
            uVar49 = (plStack_298[0x20] - plStack_298[0x1f] >> 3) * 0x6db6db6db6db6db7;
            if (uVar49 < uVar5 || uVar49 - uVar5 == 0) {
              FUN_10ab725fc();
              goto LAB_10a6be89c;
            }
            lVar44 = plStack_298[0x1f] + (ulong)uVar5 * 0x38;
          }
          uVar5 = *(uint *)(plStack_298 + 0x24);
          if (uVar5 == 0xffffffff) {
            lVar32 = 0;
          }
          else {
            uVar49 = (plStack_298[0x20] - plStack_298[0x1f] >> 3) * 0x6db6db6db6db6db7;
            if (uVar49 < uVar5 || uVar49 - uVar5 == 0) {
              FUN_10ab725fc();
              goto LAB_10a6be89c;
            }
            lVar32 = plStack_298[0x1f] + (ulong)uVar5 * 0x38;
          }
          uVar5 = *(uint *)((long)plStack_298 + 0x124);
          if (uVar5 == 0xffffffff) {
            lVar37 = 0;
          }
          else {
            uVar49 = (plStack_298[0x20] - plStack_298[0x1f] >> 3) * 0x6db6db6db6db6db7;
            if (uVar49 < uVar5 || uVar49 - uVar5 == 0) {
              FUN_10ab725fc();
              goto LAB_10a6be89c;
            }
            lVar37 = plStack_298[0x1f] + (ulong)uVar5 * 0x38;
          }
          uVar5 = *(int *)(lVar44 + 0x24) - 1;
          if (uVar5 < 7) {
            iVar66 = *(int *)(&UNK_10e4d48b8 + (ulong)uVar5 * 4);
          }
          else {
            iVar66 = 0;
          }
          if (*(int *)(lVar44 + 0x28) * iVar66 == 8) {
            puVar30 = (undefined8 *)(plStack_298[2] + (ulong)*(uint *)(lVar44 + 0x30));
            uVar49 = (ulong)*(uint *)(plStack_298 + 0x1e);
          }
          else {
            puVar30 = (undefined8 *)0x0;
            uVar49 = 0;
          }
          uVar5 = *(int *)(lVar32 + 0x24) - 1;
          if (uVar5 < 7) {
            iVar66 = *(int *)(&UNK_10e4d48b8 + (ulong)uVar5 * 4);
          }
          else {
            iVar66 = 0;
          }
          if (*(int *)(lVar32 + 0x28) * iVar66 == 8) {
            puVar50 = (undefined8 *)(plStack_298[2] + (ulong)*(uint *)(lVar32 + 0x30));
            uVar46 = (ulong)*(uint *)(plStack_298 + 0x1e);
          }
          else {
            puVar50 = (undefined8 *)0x0;
            uVar46 = 0;
          }
          uVar5 = *(int *)(lVar37 + 0x24) - 1;
          if (uVar5 < 7) {
            iVar66 = *(int *)(&UNK_10e4d48b8 + (ulong)uVar5 * 4);
          }
          else {
            iVar66 = 0;
          }
          if (*(int *)(lVar37 + 0x28) * iVar66 == 8) {
            puVar55 = (undefined8 *)(plStack_298[2] + (ulong)*(uint *)(lVar37 + 0x30));
            uVar39 = (ulong)*(uint *)(plStack_298 + 0x1e);
          }
          else {
            puVar55 = (undefined8 *)0x0;
            uVar39 = 0;
          }
          iVar66 = *piVar52;
          iVar67 = piVar52[1];
          iVar68 = piVar52[2];
          iVar69 = piVar52[3];
          plVar28 = *pplVar24;
          plVar47 = (long *)plVar28[0x4d];
          if (plVar47 == (long *)0x0) {
            iVar17 = 0;
            fVar64 = 0.0;
          }
          else {
            (**(code **)(*plVar47 + 0xb0))();
            iVar17 = (int)plVar47;
            plVar47 = (long *)plVar28[0x4d];
            if (plVar47 == (long *)0x0) {
              fVar64 = 0.0;
            }
            else {
              (**(code **)(*plVar47 + 0xb8))();
              fVar64 = (float)(int)plVar47;
            }
          }
          fVar70 = 0.0;
          lVar44 = *(long *)(piVar52 + 4);
          iVar3 = piVar52[8];
          iVar6 = piVar52[9];
          iVar4 = piVar52[10];
          iVar7 = piVar52[0xb];
          plVar47 = *(long **)(lVar44 + 0x268);
          if (plVar47 == (long *)0x0) {
            iVar18 = 0;
          }
          else {
            (**(code **)(*plVar47 + 0xb0))();
            iVar18 = (int)plVar47;
            plVar47 = *(long **)(lVar44 + 0x268);
            fVar70 = 0.0;
            if (plVar47 != (long *)0x0) {
              (**(code **)(*plVar47 + 0xb8))();
              fVar70 = (float)(int)plVar47;
            }
          }
          lVar44 = 0;
          fVar56 = (float)iVar17;
          fVar58 = (float)iVar66;
          fVar60 = (float)iVar67;
          fVar62 = (float)iVar68;
          fVar63 = (float)iVar69;
          uStack_1b0 = (long **)CONCAT44(fVar64 - fVar63,fVar58);
          uStack_1a8 = (long *)CONCAT44(fVar64 - fVar60,fVar58);
          uStack_1a0 = (code *)CONCAT44(fVar64 - fVar63,fVar62);
          uStack_198 = (undefined **)CONCAT44(fVar64 - fVar60,fVar62);
          uStack_100._0_4_ = fVar58 / fVar56;
          uStack_100._4_4_ = auVar57._0_4_ - fVar63 / fVar64;
          uStack_f8._0_4_ = fVar58 / fVar56;
          uStack_f8._4_4_ = auVar57._4_4_ - fVar60 / fVar64;
          fStack_f0 = fVar62 / fVar56;
          fStack_ec = auVar57._8_4_ - fVar63 / fVar64;
          uStack_e8 = CONCAT44(auVar57._12_4_ - fVar60 / fVar64,fVar62 / fVar56);
          fVar64 = (float)iVar18;
          auVar59._4_4_ = iVar3;
          auVar59._0_4_ = iVar3;
          auVar59._8_4_ = iVar4;
          auVar59._12_4_ = iVar4;
          auVar59 = NEON_scvtf(auVar59,4);
          auVar61._4_4_ = iVar6;
          auVar61._0_4_ = iVar7;
          auVar61._8_4_ = iVar7;
          auVar61._12_4_ = iVar6;
          auVar61 = NEON_scvtf(auVar61,4);
          uStack_1d0 = (long *)CONCAT44(auVar57._0_4_ - auVar61._0_4_ / fVar70,
                                        auVar59._0_4_ / fVar64);
          uStack_1c8 = (long *)CONCAT44(auVar57._4_4_ - auVar61._4_4_ / fVar70,
                                        auVar59._4_4_ / fVar64);
          uStack_1c0 = CONCAT44(auVar57._8_4_ - auVar61._8_4_ / fVar70,auVar59._8_4_ / fVar64);
          uStack_1b8 = CONCAT44(auVar57._12_4_ - auVar61._12_4_ / fVar70,auVar59._12_4_ / fVar64);
          do {
            *puVar30 = *(undefined8 *)((long)&uStack_1b0 + lVar44);
            *puVar50 = *(undefined8 *)((long)&uStack_100 + lVar44);
            puVar33 = (undefined8 *)((long)&uStack_1d0 + lVar44);
            lVar44 = lVar44 + 8;
            *puVar55 = *puVar33;
            puVar55 = (undefined8 *)((long)puVar55 + uVar39);
            puVar50 = (undefined8 *)((long)puVar50 + uVar46);
            puVar30 = (undefined8 *)((long)puVar30 + uVar49);
          } while (lVar44 != 0x20);
          lVar44 = 0x108;
          __Znwm();
          FUN_10ac6ea60();
          plVar47 = (long *)0x20;
          __Znwm();
          plVar28 = plVar47 + 1;
          *plVar28 = 0;
          *plVar47 = (long)&PTR_FUN_110c11350;
          plVar47[2] = 0;
          plVar47[3] = lVar44;
          if (*(long *)(lVar44 + 0x48) == 0) {
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar9) {
                *plVar28 = *plVar28 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            plVar29 = plVar47 + 2;
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar29,0x10);
              if (bVar9) {
                *plVar29 = *plVar29 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            *(long *)(lVar44 + 0x40) = lVar44;
            *(long **)(lVar44 + 0x48) = plVar47;
LAB_10a6bdd80:
            do {
              lVar32 = *plVar28;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar9) {
                *plVar28 = lVar32 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar32 == 0) {
              (**(code **)(*plVar47 + 0x10))(plVar47);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar47);
            }
          }
          else if (*(long *)(*(long *)(lVar44 + 0x48) + 8) == -1) {
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar9) {
                *plVar28 = *plVar28 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            plVar29 = plVar47 + 2;
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar29,0x10);
              if (bVar9) {
                *plVar29 = *plVar29 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            *(long *)(lVar44 + 0x40) = lVar44;
            *(long **)(lVar44 + 0x48) = plVar47;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            goto LAB_10a6bdd80;
          }
          plVar28 = (long *)plVar23[3];
          plVar23[2] = lVar44;
          plVar23[3] = (long)plVar47;
          if (plVar28 != (long *)0x0) {
            plVar47 = plVar28 + 1;
            do {
              lVar44 = *plVar47;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar47,0x10);
              if (bVar9) {
                *plVar47 = lVar44 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar44 == 0) {
              (**(code **)(*plVar28 + 0x10))(plVar28);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar28);
            }
          }
          plVar47 = plStack_290;
          if (plStack_290 != (long *)0x0) {
            plVar28 = plStack_290 + 1;
            do {
              lVar44 = *plVar28;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar9) {
                *plVar28 = lVar44 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar44 == 0) {
              (**(code **)(*plStack_290 + 0x10))(plStack_290);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar47);
            }
          }
          FUN_10ab451f4(&uStack_1b0,0,&UNK_10f66da08,0x18,&UNK_10f66da08,0x18,&UNK_10f66da21,0x16,1)
          ;
          func_0x00010a015c50(plVar23,&uStack_1b0);
          plVar47 = *(long **)(*plVar23 + 0x228);
          if (plVar47 == *(long **)(*plVar23 + 0x230)) {
            lVar44 = 0;
          }
          else {
            lVar44 = *plVar47;
          }
          func_0x00010a332748(lVar44 + 0x219,0);
          func_0x00010a332700(lVar44 + 0x21a,0);
          func_0x00010a3326b8(lVar44 + 0x218,1);
          *(undefined4 *)(lVar44 + 0x21e) = 0x1010101;
          lVar32 = *(long *)(lVar44 + 600);
          *(undefined8 *)(lVar32 + 0x30) = 0;
          *(undefined8 *)(lVar32 + 0x28) = 6;
          *(undefined8 *)(lVar32 + 0x40) = 0;
          *(undefined8 *)(lVar32 + 0x38) = 0;
          *(undefined8 *)(lVar32 + 0x50) = 0;
          *(undefined8 *)(lVar32 + 0x48) = 0;
          plVar23 = *pplVar24;
          plVar47 = (long *)plVar23[0x4d];
          fVar64 = 0.0;
          if (plVar47 == (long *)0x0) {
            iVar66 = 0;
          }
          else {
            (**(code **)(*plVar47 + 0xb0))();
            iVar66 = (int)plVar47;
            plVar47 = (long *)plVar23[0x4d];
            if (plVar47 == (long *)0x0) {
              fVar64 = 0.0;
            }
            else {
              (**(code **)(*plVar47 + 0xb8))();
              fVar64 = (float)(int)plVar47;
            }
          }
          fVar70 = (float)iVar66;
          uStack_f8._4_4_ = 0.0;
          fStack_f0 = 0.0;
          uStack_100._4_4_ = 0.0;
          uStack_f8._0_4_ = 0.0;
          uStack_e8 = 0;
          lStack_e0 = 0;
          uStack_100._0_4_ = 2.0 / fVar70;
          fStack_ec = 2.0 / fVar64;
          lStack_d8 = 0xb58637bd;
          lStack_d0 = CONCAT44(-fVar64 / fVar64,-fVar70 / fVar70);
          lStack_c8 = 0x3f80000080000000;
          func_0x000107c2b074(&uStack_1d0,&PTR_DAT_110c10f10);
          FUN_10a6bfa20(lVar44,&uStack_1d0,&uStack_100);
          if (uStack_1c0 < 0) {
            __ZdlPv(uStack_1d0);
          }
          func_0x000107c2b074(&uStack_1d0,&PTR_DAT_110c10f28);
          FUN_10a3368d0(lVar44,&uStack_1d0,pplVar24,&UNK_10e4ac858,0xd);
          if (uStack_1c0 < 0) {
            __ZdlPv(uStack_1d0);
          }
          func_0x000107c2b074(&uStack_1d0,&PTR_DAT_110c10f40);
          FUN_10a3368d0(lVar44,&uStack_1d0,piVar52 + 4,&UNK_10e4ac858,0xd);
          if (uStack_1c0 < 0) {
            __ZdlPv(uStack_1d0);
          }
          func_0x000107c2b074(&uStack_1d0,&PTR_DAT_110c10f58);
          FUN_10a6bfbe8(lVar44,&uStack_1d0,piVar52 + 0xc);
          if (uStack_1c0 < 0) {
            __ZdlPv(uStack_1d0);
          }
          func_0x000107c2b074(&uStack_1d0,&PTR_DAT_110c10f70);
          FUN_10a0d9d6c(lVar44,&uStack_1d0,piVar52 + 0xd);
          if (uStack_1c0 < 0) {
            __ZdlPv(uStack_1d0);
          }
          func_0x000107c2b074(&uStack_1d0,&PTR_DAT_110c10f88);
          FUN_10a0d9d6c(lVar44,&uStack_1d0,piVar52 + 0x10);
          if (uStack_1c0 < 0) {
            __ZdlPv(uStack_1d0);
          }
          func_0x000107c2b074(&uStack_1d0,&PTR_DAT_110c10fa0);
          plVar23 = &uStack_1d0;
          FUN_10a0d9d6c(lVar44,plVar23,piVar52 + 0x13);
          if (uStack_1c0 < 0) {
            __ZdlPv(uStack_1d0);
          }
          FUN_10a044790(&uStack_1a0);
          (*(code *)*uStack_198)(&uStack_198);
          plVar47 = uStack_1a8;
          if (uStack_1a8 != (long *)0x0) {
            plVar28 = uStack_1a8 + 1;
            do {
              lVar44 = *plVar28;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar9) {
                *plVar28 = lVar44 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar44 == 0) {
              (**(code **)(*uStack_1a8 + 0x10))(uStack_1a8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar47);
            }
          }
          uVar40 = uVar40 + 1;
        } while (uVar40 < (ulong)(((long)puStack_218 - (long)puStack_220 >> 3) * 0x2e8ba2e8ba2e8ba3)
                );
      }
      plVar47 = plStack_2b8;
      *(undefined4 *)((long)plVar45 + 0x8c) = 0;
      if (plStack_2b8 != (long *)0x0) {
        plVar28 = plStack_2b8 + 1;
        do {
          lVar44 = *plVar28;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar9) {
            *plVar28 = lVar44 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar44 == 0) {
          (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar47);
        }
      }
      pplStack_300 = pplVar20;
      plStack_2f8 = plVar45;
      if (plVar45[0xc] == 0) {
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar34,0x10);
          if (bVar9) {
            *plVar34 = *plVar34 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        plVar47 = plVar45 + 2;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar47,0x10);
          if (bVar9) {
            *plVar47 = *plVar47 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        plVar45[0xb] = (long)pplVar20;
        plVar45[0xc] = (long)plVar45;
LAB_10a6be228:
        do {
          lVar44 = *plVar34;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar34,0x10);
          if (bVar9) {
            *plVar34 = lVar44 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar44 == 0) {
          (**(code **)(*plVar45 + 0x10))(plVar45);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar45);
        }
      }
      else if (*(long *)(plVar45[0xc] + 8) == -1) {
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar34,0x10);
          if (bVar9) {
            *plVar34 = *plVar34 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        plVar47 = plVar45 + 2;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar47,0x10);
          if (bVar9) {
            *plVar47 = *plVar47 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        plVar45[0xb] = (long)pplVar20;
        plVar45[0xc] = (long)plVar45;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        goto LAB_10a6be228;
      }
      plVar47 = plStack_2f8;
      pplVar48 = pplStack_300;
      lVar44 = *(long *)(param_2 + 0x18);
      if (lVar44 == 0) {
        plVar45 = (long *)0x2c0;
        __Znwm();
        plVar45[1] = 0;
        plVar45[2] = 0;
        *plVar45 = (long)&PTR_DAT_110b9fda0;
        uStack_f8._0_4_ = SUB84(plVar47,0);
        uStack_f8._4_4_ = (float)((ulong)plVar47 >> 0x20);
        uStack_100._0_4_ = SUB84(pplVar48,0);
        uStack_100._4_4_ = (float)((ulong)pplVar48 >> 0x20);
        if (plVar47 != (long *)0x0) {
          plVar34 = plVar47 + 1;
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar34,0x10);
            if (bVar9) {
              *plVar34 = *plVar34 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        plVar34 = plVar45 + 3;
        plVar28 = plVar45;
        func_0x00010a0fda30();
        FUN_10ab6a888(plVar34,0,&uStack_100,plVar28,plVar23);
        if (plVar47 != (long *)0x0) {
          plVar23 = plVar47 + 1;
          do {
            lVar44 = *plVar23;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar9) {
              *plVar23 = lVar44 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (lVar44 == 0) {
            (**(code **)(*plVar47 + 0x10))(plVar47);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar47);
          }
        }
        plStack_298 = plVar34;
        plStack_290 = plVar45;
        FUN_10a05b2a8(&plStack_298,plVar45 + 8,plVar34);
        FUN_10a05b04c(&uStack_1d0,&plStack_298);
        plVar47 = plStack_290;
        if (plStack_290 != (long *)0x0) {
          plVar23 = plStack_290 + 1;
          do {
            lVar44 = *plVar23;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar9) {
              *plVar23 = lVar44 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (lVar44 == 0) {
            (**(code **)(*plStack_290 + 0x10))(plStack_290);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar47);
          }
        }
        if (uStack_1c8 == (long *)0x0) {
          uStack_1a8 = (long *)0x0;
        }
        else {
          plVar47 = uStack_1c8 + 1;
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar47,0x10);
            if (bVar9) {
              *plVar47 = *plVar47 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          uStack_1a8 = uStack_1c8;
          if (uStack_1c8 != (long *)0x0) {
            plVar47 = uStack_1c8 + 1;
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar47,0x10);
              if (bVar9) {
                *plVar47 = *plVar47 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
        }
        uStack_1b0 = (long **)uStack_1d0;
        uStack_1a0 = FUN_10a6d70a0;
        uStack_198 = &PTR_DAT_110c11328;
        plStack_190 = uStack_1d0;
        plStack_188 = uStack_1c8;
        fStack_f0 = 0.0;
        fStack_ec = 0.0;
        uStack_e8 = 0;
        uStack_100._0_4_ = 8.76519e-36;
        uStack_100._4_4_ = 1.4013e-45;
        uStack_f8._0_4_ = 6.885508e-29;
        uStack_f8._4_4_ = 1.4013e-45;
        FUN_10a044790(&uStack_100);
        (**(code **)CONCAT44(uStack_f8._4_4_,(float)uStack_f8))(&uStack_f8);
        plVar47 = uStack_1c8;
        if (uStack_1c8 != (long *)0x0) {
          plVar23 = uStack_1c8 + 1;
          do {
            lVar44 = *plVar23;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar9) {
              *plVar23 = lVar44 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (lVar44 == 0) {
            (**(code **)(*uStack_1c8 + 0x10))(uStack_1c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar47);
          }
        }
        plStack_2b8 = uStack_1a8;
        plStack_2c0 = (long *)uStack_1b0;
        if (uStack_1a8 != (long *)0x0) {
          plVar47 = uStack_1a8 + 1;
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar47,0x10);
            if (bVar9) {
              *plVar47 = *plVar47 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        FUN_10a044790(&uStack_1a0);
        (*(code *)*uStack_198)(&uStack_198);
        if (uStack_1a8 != (long *)0x0) {
          plVar47 = uStack_1a8 + 1;
          do {
            lVar44 = *plVar47;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar47,0x10);
            if (bVar9) {
              *plVar47 = lVar44 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
            plVar23 = uStack_1a8;
          } while (cVar8 != '\0');
          goto LAB_10a6be6bc;
        }
      }
      else {
        plStack_298 = *(long **)(lVar44 + 0x858);
        plStack_290 = *(long **)(lVar44 + 0x860);
        if (plStack_290 != (long *)0x0) {
          plVar45 = plStack_290 + 1;
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar45,0x10);
            if (bVar9) {
              *plVar45 = *plVar45 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        uVar65 = 0x2a8;
        __Znwm(0x2a8);
        uStack_1a8 = plVar47;
        uStack_1b0 = pplVar48;
        if (plVar47 != (long *)0x0) {
          plVar45 = plVar47 + 1;
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar45,0x10);
            if (bVar9) {
              *plVar45 = *plVar45 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        uVar27 = uVar65;
        func_0x00010a0fda30();
        FUN_10ab6a888(uVar65,lVar44,&uStack_1b0,uVar27,plVar23);
        if (plVar47 != (long *)0x0) {
          plVar23 = plVar47 + 1;
          do {
            lVar44 = *plVar23;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar9) {
              *plVar23 = lVar44 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (lVar44 == 0) {
            (**(code **)(*plVar47 + 0x10))(plVar47);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar47);
          }
        }
        plVar23 = plStack_290;
        plVar47 = plStack_298;
        uStack_1d0 = plStack_298;
        uStack_1c8 = plStack_290;
        if (plStack_290 != (long *)0x0) {
          plVar45 = plStack_290 + 1;
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar45,0x10);
            if (bVar9) {
              *plVar45 = *plVar45 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          plVar45 = plStack_290 + 2;
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar45,0x10);
            if (bVar9) {
              *plVar45 = *plVar45 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar45,0x10);
            if (bVar9) {
              *plVar45 = *plVar45 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_290);
        }
        uStack_1b0 = (long **)plVar47;
        uStack_1a8 = plVar23;
        FUN_10a05b208(&uStack_100,uVar65,&uStack_1b0);
        FUN_10a05b04c(&plStack_2c0);
        plVar47 = uStack_f8;
        if (uStack_f8 != (long *)0x0) {
          plVar23 = uStack_f8 + 1;
          do {
            lVar44 = *plVar23;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar9) {
              *plVar23 = lVar44 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (lVar44 == 0) {
            (**(code **)(*uStack_f8 + 0x10))(uStack_f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar47);
          }
        }
        if (uStack_1a8 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        plVar47 = uStack_1c8;
        if (uStack_1c8 != (long *)0x0) {
          plVar23 = uStack_1c8 + 1;
          do {
            lVar44 = *plVar23;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar9) {
              *plVar23 = lVar44 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (lVar44 == 0) {
            (**(code **)(*uStack_1c8 + 0x10))(uStack_1c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar47);
          }
        }
        plVar47 = uStack_f8;
        if ((plStack_298 != (long *)0x0) && (plStack_2c0 != (long *)0x0)) {
          uStack_100._0_4_ = SUB84(plStack_2c0,0);
          uStack_100._4_4_ = (float)((ulong)plStack_2c0 >> 0x20);
          uStack_f8._0_4_ = SUB84(plStack_2b8,0);
          uStack_f8._4_4_ = (float)((ulong)plStack_2b8 >> 0x20);
          if (plStack_2b8 != (long *)0x0) {
            plVar47 = plStack_2b8 + 1;
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar47,0x10);
              if (bVar9) {
                *plVar47 = *plVar47 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          FUN_10aa88c30(plStack_298,&uStack_100);
          plVar47 = (long *)CONCAT44(uStack_f8._4_4_,(float)uStack_f8);
          uStack_100 = (long *)CONCAT44(uStack_100._4_4_,(float)uStack_100);
          if (plVar47 != (long *)0x0) {
            plVar23 = plVar47 + 1;
            do {
              lVar44 = *plVar23;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar23,0x10);
              if (bVar9) {
                *plVar23 = lVar44 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            uStack_100 = (long *)CONCAT44(uStack_100._4_4_,(float)uStack_100);
            if (lVar44 == 0) {
              (**(code **)(*plVar47 + 0x10))(plVar47);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar47);
              plVar47 = (long *)CONCAT44(uStack_f8._4_4_,(float)uStack_f8);
            }
          }
        }
        uStack_f8 = plVar47;
        if (plStack_290 != (long *)0x0) {
          plVar47 = plStack_290 + 1;
          do {
            lVar44 = *plVar47;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar47,0x10);
            if (bVar9) {
              *plVar47 = lVar44 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
            plVar23 = plStack_290;
          } while (cVar8 != '\0');
LAB_10a6be6bc:
          if (lVar44 == 0) {
            (**(code **)(*plVar23 + 0x10))(plVar23);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
          }
        }
      }
      func_0x00010a067b00(param_1,&plStack_2c0);
      plVar47 = plStack_2b8;
      if (plStack_2b8 != (long *)0x0) {
        plVar23 = plStack_2b8 + 1;
        do {
          lVar44 = *plVar23;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar9) {
            *plVar23 = lVar44 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar44 == 0) {
          (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar47);
        }
      }
      plVar47 = plStack_2f8;
      if (plStack_2f8 != (long *)0x0) {
        plVar23 = plStack_2f8 + 1;
        do {
          lVar44 = *plVar23;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar9) {
            *plVar23 = lVar44 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar44 == 0) {
          (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar47);
        }
      }
      FUN_10a6d6f74(&lStack_260);
      FUN_10a6c9594(&puStack_220);
      plVar47 = plStack_228;
      if (plStack_228 != (long *)0x0) {
        plVar23 = plStack_228 + 1;
        do {
          lVar44 = *plVar23;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar9) {
            *plVar23 = lVar44 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar44 == 0) {
          (**(code **)(*plStack_228 + 0x10))(plStack_228);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar47);
        }
      }
      plVar38 = (long *)((long)plVar38 + 1);
      plVar47 = *(long **)(param_2 + 0x20);
    } while (plVar38 < (long *)(*(long *)(param_2 + 0x28) - (long)plVar47 >> 5));
  }
  plVar47 = &lStack_200;
  FUN_10a6bed34();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
    ___stack_chk_fail();
    func_0x00010a0536d4(&uStack_100);
    func_0x00010a05248c(&plStack_2c0);
    FUN_10a054c5c(&plStack_298);
    FUN_10a6d7048(&pplStack_300);
    FUN_10a6d6f74(&lStack_260);
    FUN_10a6c9594(&puStack_220);
    plVar51 = plStack_228;
    if (plStack_228 != (long *)0x0) {
      plVar38 = plStack_228 + 1;
      do {
        lVar44 = *plVar38;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar38,0x10);
        if (bVar9) {
          *plVar38 = lVar44 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar44 == 0) {
        (**(code **)(*plStack_228 + 0x10))(plStack_228);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar51);
      }
    }
    puStack_230 = param_1;
    FUN_10a04a568(&puStack_230);
    FUN_10a6bed34(&lStack_200);
    __Unwind_Resume();
    plVar51 = (long *)plVar47[2];
    while (plVar51 != (long *)0x0) {
      lVar44 = *plVar51;
      FUN_10a6d6ef0(plVar51 + 2);
      __ZdlPv(plVar51);
      plVar51 = (long *)lVar44;
    }
    lVar44 = *plVar47;
    *plVar47 = 0;
    if (lVar44 != 0) {
      __ZdlPv();
    }
    return plVar47;
  }
  return plVar47;
}



/* Entry: 10a6bed34; end: 10a6bed8f;  */

long * FUN_10a6bed34(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10a6d6ef0(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}


