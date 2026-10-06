/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b2104a8; end: 10b21052b;  */

byte FUN_10b2104a8(long param_1)

{
  byte bVar1;
  long unaff_x19;
  undefined1 auStack_38 [8];
  
  func_0x00010b2111a0();
  __ZNSt3__15mutex4lockEv(param_1 + 0x70);
  bVar1 = *(byte *)(unaff_x19 + 0x30);
  if ((bVar1 & 1) == 0) {
    FUN_10b21052c(auStack_38);
    FUN_10b210808(unaff_x19 + 0x58,auStack_38);
    func_0x00010b12b6c4(auStack_38);
  }
  func_0x00010b2110ec();
  return bVar1 ^ 1;
}



/* Entry: 10b21052c; end: 10b210573;  */

void FUN_10b21052c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *puVar1 = *param_2;
  (**(code **)(param_2[1] + 0x10))(puVar1 + 1,param_2 + 1);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10b210574; end: 10b21069b;  */

long * FUN_10b210574(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack_198;
  undefined **ppuStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  long *plStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined **ppuStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_c8;
  long alStack_c0 [5];
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [72];
  undefined8 uStack_38;
  
  func_0x00010b2111a0();
  func_0x00010b2110c4();
  uStack_38 = extraout_x8;
  __ZNSt3__15mutex4lockEv(param_1 + 0x70);
  if ((*(byte *)(unaff_x19 + 6) & 1) == 0) {
    plVar5 = unaff_x19 + 7;
    func_0x00010b210990();
    func_0x00010b211084(uStack_38);
    if ((bool)in_ZR) {
      plVar5 = unaff_x19 + 0xe;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(plVar5);
      return plVar5;
    }
  }
  else {
    func_0x00010b2110ec();
    unaff_x19 = (long *)unaff_x19[2];
    uStack_c8 = *unaff_x20;
    (**(code **)(unaff_x20[1] + 0x10))(alStack_c0,unaff_x20 + 1);
    uStack_98 = 0x10b210fe0;
    ppuStack_90 = &PTR_DAT_110cc7720;
    uStack_88 = uStack_c8;
    (**(code **)(alStack_c0[0] + 0x10))(auStack_80,alStack_c0);
    plVar5 = unaff_x19;
    (**(code **)(*unaff_x19 + 0x10))(unaff_x19,&uStack_98);
    func_0x00010b2110e0(ppuStack_90);
    func_0x00010b2110fc();
    func_0x00010b211084(uStack_38);
    if ((bool)in_ZR) {
      return plVar5;
    }
  }
  uVar4 = 0;
  ___stack_chk_fail();
  func_0x00010b2110ec();
  __Unwind_Resume(plVar5);
  pcStack_d8 = FUN_10b21069c;
  plStack_f0 = plVar5;
  plStack_e8 = unaff_x19;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x00010b2111a0();
  func_0x00010b2110c4();
  uStack_f8 = extraout_x8_00;
  FUN_10b210754();
  lStack_138 = *plVar5;
  lStack_130 = plVar5[1];
  if (lStack_130 != 0) {
    plVar5 = (long *)(lStack_130 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_128 = 0x10b211030;
  ppuStack_120 = &PTR_DAT_110cc7750;
  if (lStack_130 != 0) {
    plVar5 = (long *)(lStack_130 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar6 = &uStack_128;
  lStack_118 = lStack_138;
  lStack_110 = lStack_130;
  FUN_10b2104a8();
  func_0x00010b2110e0(ppuStack_120);
  func_0x00010b2110f4();
  func_0x00010b211084(uStack_f8);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    plVar5 = unaff_x19;
    func_0x00010b2110e0(ppuStack_120);
    func_0x00010b2110f4();
    func_0x00010b2110bc();
    pcStack_148 = FUN_10b210754;
    puStack_160 = &uStack_128;
    plStack_158 = unaff_x19;
    ppuStack_150 = &puStack_e0;
    func_0x00010b2110c4();
    uStack_180 = puVar6[1];
    uStack_188 = *puVar6;
    if (puVar6[1] != 0) {
      plVar1 = (long *)(puVar6[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_198 = 0x10b210ffc;
    ppuStack_190 = &PTR_DAT_110cc7738;
    uStack_168 = extraout_x8_01;
    FUN_10b210574();
    func_0x00010b21117c(ppuStack_190);
    func_0x00010b2110f4();
    func_0x00010b211084(uStack_168);
    unaff_x19 = plVar5;
    if (!(bool)uVar4) {
      ___stack_chk_fail();
      func_0x00010b2110d4(&uStack_198);
      func_0x00010b2110f4();
      func_0x00010b2110bc();
      *plVar5 = (long)&PTR_FUN_110cc7668;
      FUN_10b12b5c0(plVar5 + 1);
      return plVar5;
    }
  }
  return unaff_x19;
}



/* Entry: 10b21069c; end: 10b210753;  */

undefined8 * FUN_10b21069c(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_28;
  
  func_0x00010b2111a0();
  func_0x00010b2110c4();
  uStack_28 = extraout_x8;
  FUN_10b210754();
  uStack_68 = *unaff_x20;
  lStack_60 = unaff_x20[1];
  if (lStack_60 != 0) {
    plVar1 = (long *)(lStack_60 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_58 = 0x10b211030;
  ppuStack_50 = &PTR_DAT_110cc7750;
  if (lStack_60 != 0) {
    plVar1 = (long *)(lStack_60 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4 = &uStack_58;
  uStack_48 = uStack_68;
  lStack_40 = lStack_60;
  FUN_10b2104a8();
  func_0x00010b2110e0(ppuStack_50);
  func_0x00010b2110f4();
  func_0x00010b211084(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b2110e0(ppuStack_50);
    func_0x00010b2110f4();
    func_0x00010b2110bc();
    pcStack_78 = FUN_10b210754;
    puStack_90 = &uStack_58;
    puStack_80 = &stack0xfffffffffffffff0;
    func_0x00010b2110c4();
    uStack_b0 = puVar4[1];
    uStack_b8 = *puVar4;
    if (puVar4[1] != 0) {
      plVar1 = (long *)(puVar4[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_c8 = 0x10b210ffc;
    ppuStack_c0 = &PTR_DAT_110cc7738;
    uStack_98 = extraout_x8_00;
    FUN_10b210574();
    func_0x00010b21117c(ppuStack_c0);
    func_0x00010b2110f4();
    func_0x00010b211084(uStack_98);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b2110d4(&uStack_c8);
      func_0x00010b2110f4();
      func_0x00010b2110bc();
      *unaff_x19 = &PTR_FUN_110cc7668;
      FUN_10b12b5c0(unaff_x19 + 1);
      return unaff_x19;
    }
  }
  return unaff_x19;
}



/* Entry: 10b210754; end: 10b2107ef;  */

undefined8 * FUN_10b210754(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_28;
  
  func_0x00010b2110c4();
  uStack_40 = param_2[1];
  uStack_48 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_58 = 0x10b210ffc;
  ppuStack_50 = &PTR_DAT_110cc7738;
  uStack_28 = extraout_x8;
  FUN_10b210574();
  func_0x00010b21117c(ppuStack_50);
  func_0x00010b2110f4();
  func_0x00010b211084(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010b2110d4(&uStack_58);
  func_0x00010b2110f4();
  func_0x00010b2110bc();
  *param_1 = &PTR_FUN_110cc7668;
  FUN_10b12b5c0(param_1 + 1);
  return param_1;
}



/* Entry: 10b2107f0; end: 10b2107f3;  */

undefined8 * FUN_10b2107f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc7668;
  FUN_10b12b5c0(param_1 + 1);
  return param_1;
}



/* Entry: 10b2107f4; end: 10b210807;  */

void FUN_10b2107f4(void)

{
  func_0x00010b210da0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b210808; end: 10b21084f;  */

undefined8 * FUN_10b210808(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar3 = *param_2;
    *param_2 = 0;
    puVar2 = puVar1 + 1;
    *puVar1 = uVar3;
  }
  else {
    puVar2 = param_1;
    FUN_10b210850();
  }
  param_1[1] = puVar2;
  return puVar2 + -1;
}



/* Entry: 10b210850; end: 10b21093b;  */

long * FUN_10b210850(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  
  lVar7 = *param_1;
  lVar8 = param_1[1] - lVar7;
  uVar1 = (lVar8 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    plStack_58 = param_1 + 2;
    lVar9 = *plStack_58;
    uVar5 = lVar9 - lVar7;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 == 0) {
      lVar3 = 0;
    }
    else {
      if (uVar6 >> 0x3d != 0) goto LAB_10b210938;
      lVar3 = uVar6 << 3;
      __Znwm();
    }
    puVar2 = (undefined8 *)(lVar3 + lVar8);
    uVar4 = *param_2;
    *param_2 = 0;
    *puVar2 = uVar4;
    _memcpy(puVar2 + -(lVar8 >> 3),lVar7,lVar8);
    *param_1 = (long)(puVar2 + -(lVar8 >> 3));
    param_1[1] = (long)(puVar2 + 1);
    param_1[2] = lVar3 + uVar6 * 8;
    lStack_78 = lVar7;
    lStack_70 = lVar7;
    lStack_68 = lVar7;
    lStack_60 = lVar9;
    FUN_10b210948(&lStack_78);
    return puVar2 + 1;
  }
  FUN_10b21093c();
LAB_10b210938:
  func_0x000104bd35f4();
  func_0x00010b211170();
  lVar7 = param_1[1];
  while (lVar7 != param_1[2]) {
    param_1[2] = param_1[2] + -8;
    func_0x00010b12b6c4();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b21093c; end: 10b210947;  */

long * FUN_10b21093c(long *param_1)

{
  long lVar1;
  
  func_0x00010b211170();
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -8;
    func_0x00010b12b6c4();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b210948; end: 10b210a07;  */

long * FUN_10b210948(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -8;
    func_0x00010b12b6c4();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b210a08; end: 10b210abb;  */

long FUN_10b210a08(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  func_0x00010b2111a0();
  FUN_10b210abc();
  FUN_10b210b9c(auStack_58,param_1,(unaff_x19[1] - *unaff_x19) / 0x30,unaff_x19 + 2);
  *puStack_48 = *unaff_x20;
  (**(code **)(unaff_x20[1] + 0x10))(puStack_48 + 1,unaff_x20 + 1);
  puStack_48 = puStack_48 + 6;
  FUN_10b210b0c();
  lVar1 = unaff_x19[1];
  FUN_10b210d2c(auStack_58);
  return lVar1;
}



/* Entry: 10b210abc; end: 10b210b0b;  */

long * FUN_10b210abc(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if (param_2 < (long *)0x555555555555556) {
    uVar1 = (param_1[2] - *param_1) / 0x30;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x2aaaaaaaaaaaaa9 < uVar1) {
      plVar2 = (long *)0x555555555555555;
    }
    return plVar2;
  }
  FUN_10b210b90();
  plVar2 = param_1 + 2;
  lVar3 = param_2[1] + ((param_1[1] - *param_1) / -0x30) * 0x30;
  FUN_10b210c30(plVar2,*param_1,param_1[1],lVar3);
  param_2[1] = lVar3;
  lVar3 = *param_1;
  param_1[1] = lVar3;
  *param_1 = param_2[1];
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return plVar2;
}



/* Entry: 10b210b0c; end: 10b210b8f;  */

void FUN_10b210b0c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x30) * 0x30;
  FUN_10b210c30(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10b210b90; end: 10b210b9b;  */

long * FUN_10b210b90(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x00010b211170();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b210be8();
  }
  lVar1 = param_4 + param_3 * 0x30;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x30;
  return param_1;
}



/* Entry: 10b210b9c; end: 10b210c0b;  */

long * FUN_10b210b9c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b210be8();
  }
  lVar1 = param_4 + param_3 * 0x30;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x30;
  return param_1;
}



/* Entry: 10b210c0c; end: 10b210c2f;  */

void FUN_10b210c0c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  if (param_2 < (undefined8 *)0x555555555555556) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 * 0x30);
    return;
  }
  func_0x000104bd35f4();
  ppuStack_68 = &puStack_50;
  ppuStack_60 = &puStack_48;
  uStack_70 = param_1;
  puStack_50 = param_4;
  for (puVar1 = param_2; puStack_48 = param_4, puVar1 != param_3; puVar1 = puVar1 + 6) {
    *param_4 = *puVar1;
    (**(code **)(puVar1[1] + 0x10))(param_4 + 1,puVar1 + 1);
    param_4 = puStack_48 + 6;
  }
  uStack_58 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 6) {
    func_0x00010b211188(param_2[1]);
  }
  func_0x00010b210cd8(&uStack_70);
  return;
}



/* Entry: 10b210c30; end: 10b210d2b;  */

void FUN_10b210c30(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_60 = param_1;
  puStack_40 = param_4;
  for (puVar1 = param_2; puStack_38 = param_4, puVar1 != param_3; puVar1 = puVar1 + 6) {
    *param_4 = *puVar1;
    (**(code **)(puVar1[1] + 0x10))(param_4 + 1,puVar1 + 1);
    param_4 = puStack_38 + 6;
  }
  uStack_48 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 6) {
    func_0x00010b211188(param_2[1]);
  }
  func_0x00010b210cd8(&uStack_60);
  return;
}



/* Entry: 10b210d2c; end: 10b210d57;  */

long * FUN_10b210d2c(long *param_1)

{
  FUN_10b210d58();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b210d58; end: 10b210d5f;  */

void FUN_10b210d58(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  while (lVar1 = *(long *)(param_1 + 0x10), lVar2 != lVar1) {
    puVar3 = *(undefined8 **)(lVar1 + -0x28);
    *(long *)(param_1 + 0x10) = lVar1 + -0x30;
    (*(code *)*puVar3)();
  }
  return;
}



/* Entry: 10b210d60; end: 10b210dcb;  */

void FUN_10b210d60(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  while (lVar1 = *(long *)(param_1 + 0x10), param_2 != lVar1) {
    puVar2 = *(undefined8 **)(lVar1 + -0x28);
    *(long *)(param_1 + 0x10) = lVar1 + -0x30;
    (*(code *)*puVar2)();
  }
  return;
}



/* Entry: 10b210dcc; end: 10b210e2b;  */

void FUN_10b210dcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b210dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}



/* Entry: 10b210e2c; end: 10b210e67;  */

undefined8 * FUN_10b210e2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 auStack_60 [2];
  long lStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_2[1];
  *param_1 = *param_2;
  if (lVar1 == 0) {
    param_1[1] = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      return param_1;
    }
  }
  func_0x00010527822c();
  puVar2 = auStack_60;
  puVar3 = auStack_60;
  func_0x00010b2110c4();
  uStack_48 = extraout_x8_00;
  FUN_10b210ee8(auStack_60,1);
  FUN_10b210f34(lStack_50);
  lVar1 = lStack_50;
  lStack_50 = 0;
  *extraout_x8 = lVar1 + 0x18;
  extraout_x8[1] = lVar1;
  func_0x00010b210fa8();
  func_0x00010b211084(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b210fa8();
    func_0x00010b2110bc();
    puVar3[1] = param_2;
    puVar2 = puVar3;
    FUN_10b210f10();
    puVar3[2] = puVar2;
    return puVar3;
  }
  return puVar2;
}



/* Entry: 10b210e68; end: 10b210ee7;  */

undefined1 * FUN_10b210e68(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  puVar3 = auStack_40;
  func_0x00010b2110c4();
  uStack_28 = extraout_x8;
  FUN_10b210ee8(auStack_40,1);
  FUN_10b210f34(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x00010b210fa8();
  func_0x00010b211084(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010b210fa8();
  func_0x00010b2110bc();
  *(undefined8 *)(puVar3 + 8) = param_3;
  puVar2 = puVar3;
  FUN_10b210f10();
  *(undefined1 **)(puVar3 + 0x10) = puVar2;
  return puVar3;
}



/* Entry: 10b210ee8; end: 10b210f0f;  */

long FUN_10b210ee8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b210f10();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b210f10; end: 10b210f33;  */

void FUN_10b210f10(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_2 < (undefined8 *)0x555555555555556) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 * 0x30);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_DAT_110cc76e0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_FUN_110cc7668;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[5] = param_2[1];
  param_1[4] = uVar5;
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
  return;
}



/* Entry: 10b210f34; end: 10b210f77;  */

void FUN_10b210f34(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_DAT_110cc76e0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_FUN_110cc7668;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[5] = param_2[1];
  param_1[4] = uVar5;
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
  return;
}



/* Entry: 10b210f78; end: 10b210f8b;  */

void FUN_10b210f78(void)

{
  func_0x00010b210f98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b210f8c; end: 10b210fb7;  */

void FUN_10b210f8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b211158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b210fb8; end: 10b210fdf;  */

long FUN_10b210fb8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b210fe0; end: 10b2111bf;  */

void FUN_10b210fe0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b210fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}



/* Entry: 10b2111c0; end: 10b21123f;  */

void FUN_10b2111c0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long unaff_x19;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b211960();
  FUN_10b211240();
  if (*param_3 == param_3[1]) {
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    FUN_10b21124c(&uStack_40,param_3);
  }
  *(undefined8 *)(unaff_x19 + 0x88) = uStack_38;
  *(undefined8 *)(unaff_x19 + 0x80) = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10b211904(&uStack_40);
  return;
}



/* Entry: 10b211240; end: 10b21124b;  */

void FUN_10b211240(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x00010b252040(param_1,0);
  *unaff_x19 = &PTR_FUN_110ccb1e8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b251f1c();
  }
  *(undefined4 *)(unaff_x19 + 2) = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined4 *)((long)unaff_x19 + 0x14) = 0;
  FUN_10b251db0(unaff_x19 + 3);
  FUN_10b251db0(unaff_x19 + 6);
  lVar1 = unaff_x20 + 0x48;
  func_0x00010b25201c();
  unaff_x19[9] = lVar1;
  lVar1 = unaff_x20 + 0x50;
  func_0x00010b25201c();
  unaff_x19[10] = lVar1;
  lVar1 = unaff_x20 + 0x58;
  func_0x00010b25201c();
  unaff_x19[0xb] = lVar1;
  if ((*(byte *)(unaff_x19 + 2) & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    FUN_10b251e4c();
  }
  unaff_x19[0xc] = unaff_x21;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined2 *)(unaff_x19 + 0xe) = *(undefined2 *)(unaff_x20 + 0x70);
  unaff_x19[0xd] = uVar2;
  return;
}



/* Entry: 10b21124c; end: 10b21126f;  */

void FUN_10b21124c(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10b2116d8(&uStack_11,param_1);
  return;
}



/* Entry: 10b211270; end: 10b2113eb;  */

undefined8 *
FUN_10b211270(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined4 param_5,long param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  puVar2 = param_1 + 1;
  *param_1 = &PTR_DAT_110cc7778;
  FUN_10b1185c8(puVar2);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if ((param_1[2] & 1) != 0) {
    func_0x00010b21193c(param_1 + 10);
  }
  func_0x000107c30248();
  *(undefined1 *)(param_1 + 0xf) = 0;
  plVar3 = (long *)(param_3 + 0x10);
  while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
    puVar1 = param_1 + 4;
    FUN_10b205fc0();
    if ((puVar1[1] & 1) != 0) {
      func_0x00010b21193c();
    }
    func_0x000107c30248(puVar1 + 2,plVar3 + 2);
    if ((puVar1[1] & 1) != 0) {
      func_0x00010b21193c();
    }
    func_0x000107c30248(puVar1 + 3,plVar3 + 5);
  }
  if ((param_1[2] & 1) != 0) {
    func_0x00010b21193c();
  }
  func_0x000107c30248(param_1 + 0xb,param_4);
  *(undefined4 *)(param_1 + 0xe) = param_5;
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  func_0x00010b1185d0();
  if ((puVar2[1] & 1) != 0) {
    func_0x00010b21193c();
  }
  func_0x000107c30248(puVar2 + 2,param_6);
  if ((puVar2[1] & 1) != 0) {
    func_0x00010b21193c();
  }
  func_0x000107c30248(puVar2 + 3,param_6 + 0x20);
  if ((puVar2[1] & 1) != 0) {
    func_0x00010b21193c();
  }
  func_0x000107c30248(puVar2 + 4,param_6 + 0x40);
  if (*(char *)(param_6 + 0x68) == '\x01') {
    puVar2[6] = *(undefined8 *)(param_6 + 0x60);
  }
  return param_1;
}



/* Entry: 10b2113ec; end: 10b21140b;  */

void FUN_10b2113ec(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (param_1,*(ulong *)(param_2 + 0x50) & 0xfffffffffffffffc);
  return;
}



/* Entry: 10b21140c; end: 10b211487;  */

void FUN_10b21140c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  puVar1 = (ulong *)(param_1 + 0x20);
  if ((uVar2 & 1) != 0) {
    puVar1 = (ulong *)(uVar2 + 7);
  }
  for (lVar3 = (long)*(int *)(param_1 + 0x28) << 3; lVar3 != 0; lVar3 = lVar3 + -8) {
    func_0x00010b2119a4(*(undefined8 *)(*puVar1 + 0x10));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
    puVar1 = puVar1 + 1;
  }
  func_0x00010b21198c();
  func_0x00010b211958();
  return;
}



/* Entry: 10b211488; end: 10b21148f;  */

void FUN_10b211488(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10b211490; end: 10b2114df;  */

void FUN_10b211490(undefined8 *param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001086e3e34(&uStack_30,*(ulong *)(param_2 + 0x60) & 0xfffffffffffffffc);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  func_0x000107c27d78(&uStack_30);
  return;
}



/* Entry: 10b2114e0; end: 10b2114eb;  */

void FUN_10b2114e0(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  return;
}



/* Entry: 10b2114ec; end: 10b211577;  */

void FUN_10b2114ec(undefined1 *param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(int *)(param_2 + 0x40) == 0) {
    *param_1 = 0;
    param_1[0x28] = 0;
  }
  else {
    uVar2 = *(ulong *)(param_2 + 0x38);
    puVar1 = (ulong *)(param_2 + 0x38);
    if ((uVar2 & 1) != 0) {
      puVar1 = (ulong *)(uVar2 + 7);
    }
    for (lVar3 = (long)*(int *)(param_2 + 0x40) << 3; lVar3 != 0; lVar3 = lVar3 + -8) {
      func_0x00010b2119a4(*(undefined8 *)(*puVar1 + 0x10));
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
      puVar1 = puVar1 + 1;
    }
    func_0x00010b21198c();
    func_0x00010b211958();
  }
  return;
}



/* Entry: 10b211578; end: 10b211587;  */

void FUN_10b211578(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (param_1,*(ulong *)(param_2 + 0x58) & 0xfffffffffffffffc);
  return;
}



/* Entry: 10b211588; end: 10b21163b;  */

void FUN_10b211588(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  
  ppuVar1 = &PTR_PTR_11336dc48;
  if (*(undefined ***)(param_2 + 0x68) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0x68);
  }
  func_0x00010b211978(ppuVar1[2],auStack_40);
  func_0x00010b211978(ppuVar1[3],auStack_60);
  func_0x00010b211978(ppuVar1[4],auStack_80);
  func_0x0001052b933c(param_1,auStack_40,auStack_60,auStack_80,ppuVar1[6],
                      ppuVar1[6] != (undefined *)0x0,ppuVar1[5]);
  func_0x000107c279a4(auStack_80);
  func_0x000107c279a4(auStack_60);
  func_0x000107c279a4(auStack_40);
  return;
}



/* Entry: 10b21163c; end: 10b211663;  */

void FUN_10b21163c(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  func_0x000105642268(param_1,&uStack_18);
  return;
}



/* Entry: 10b211664; end: 10b21168f;  */

void FUN_10b211664(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_2 + 0x88);
  uVar5 = *(undefined8 *)(param_2 + 0x80);
  param_1[1] = *(undefined8 *)(param_2 + 0x88);
  *param_1 = uVar5;
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
  return;
}



/* Entry: 10b211690; end: 10b2116a3;  */

void FUN_10b211690(void)

{
  FUN_10b2116ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2116a4; end: 10b2116ab;  */

void FUN_10b2116a4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10b2116ac; end: 10b2116d7;  */

void FUN_10b2116ac(long param_1)

{
  func_0x00010b211960();
  func_0x000107c27f1c(param_1 + 0x80);
  FUN_10b2514b4();
  return;
}



/* Entry: 10b2116d8; end: 10b211773;  */

undefined1 * FUN_10b2116d8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_40 [16];
  long lStack_30;
  long lStack_28;
  
  puVar2 = auStack_40;
  puVar3 = auStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10b211774(auStack_40,1);
  FUN_10b2117cc(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x00010b2118f4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010b2118f4();
  func_0x00010b211934();
  *(undefined8 *)(puVar3 + 8) = param_3;
  puVar2 = puVar3;
  FUN_10b21179c();
  *(undefined1 **)(puVar3 + 0x10) = puVar2;
  return puVar3;
}



/* Entry: 10b211774; end: 10b21179b;  */

long FUN_10b211774(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b21179c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b21179c; end: 10b2117cb;  */

undefined8 * FUN_10b21179c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x492492492492493) {
    puVar1 = (undefined8 *)(param_2 * 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cc7828;
  param_1[1] = 0;
  FUN_10b211838(param_1 + 3);
  return param_1;
}



/* Entry: 10b2117cc; end: 10b211813;  */

undefined8 * FUN_10b2117cc(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cc7828;
  param_1[1] = 0;
  FUN_10b211838(param_1 + 3);
  return param_1;
}



/* Entry: 10b211814; end: 10b211817;  */

void FUN_10b211814(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc7828;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b211818; end: 10b21182b;  */

void FUN_10b211818(void)

{
  func_0x00010b2118e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b21182c; end: 10b211837;  */

long FUN_10b21182c(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x20;
  func_0x00010007e5dc(&lStack_28);
  return param_1 + 0x20;
}



/* Entry: 10b211838; end: 10b2118d3;  */

undefined8 * FUN_10b211838(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_2[2];
  uVar3 = param_2[1];
  uVar2 = *param_2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *param_1 = &PTR_DAT_110cc7878;
  param_1[2] = uVar3;
  param_1[1] = uVar2;
  param_1[3] = uVar1;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  func_0x000107c278a8(&uStack_38);
  return param_1;
}



/* Entry: 10b2118d4; end: 10b211903;  */

void FUN_10b2118d4(undefined8 param_1,long param_2)

{
  func_0x00010015bc80(param_1,param_2 + 8);
  func_0x00010015bcc4();
  return;
}



/* Entry: 10b211904; end: 10b21192b;  */

long FUN_10b211904(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b21192c; end: 10b2119af;  */

void FUN_10b21192c(void)

{
  return;
}



/* Entry: 10b2119b0; end: 10b211d83;  */

undefined1  [16] FUN_10b2119b0(long *param_1,code *param_2,ulong param_3,long *param_4)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  code **ppcVar5;
  long lVar6;
  undefined1 (*pauVar7) [16];
  long *plVar8;
  code **ppcVar9;
  long **pplVar10;
  long *plVar11;
  code *pcVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  long *plStack_1b8;
  undefined1 (*pauStack_1b0) [16];
  undefined8 uStack_1a8;
  code *pcStack_138;
  code *pcStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_e9;
  long lStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined4 uStack_c0;
  code **ppcStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined1 *puStack_78;
  long *plStack_70;
  code ***pppcStack_68;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(int *)(param_2 + 0x18) == 1;
  if ((bool)uVar4) {
    ppcStack_b8 = (code **)0x0;
    FUN_10b218928(&ppcStack_b8);
    pcVar3 = param_2;
    FUN_10b211d84();
    ppcStack_b8[3] = pcVar3;
    *(int *)(ppcStack_b8 + 4) = (int)param_3;
    *(int *)((long)ppcStack_b8 + 0x24) = (int)param_3;
    uStack_d8 = 0;
    lStack_e0 = 0;
    lStack_c8 = 0;
    lStack_d0 = 0;
    uStack_c0 = 0x3f800000;
    lStack_e8 = 0;
    FUN_10b219134(&lStack_e8);
    uStack_e9 = 0;
    pcStack_88 = FUN_10b2130f0;
    ppuStack_80 = &PTR_FUN_110cc78c8;
    puStack_78 = &uStack_e9;
    param_4 = (long *)0x1;
    lVar14 = lStack_e8;
    ppcVar9 = ppcStack_b8;
    plStack_70 = &lStack_e8;
    pppcStack_68 = &ppcStack_b8;
    FUN_10b21919c(lStack_e8,ppcStack_b8);
    if ((int)lVar14 == 0) {
      uStack_e9 = 1;
      if (lStack_e8 != 0) {
        pcVar3 = *(code **)(lStack_e8 + 0x180);
        pcVar12 = *(code **)(param_2 + 0x20);
        uVar4 = pcVar3 == pcVar12;
        if (pcVar12 < pcVar3) {
          uStack_a8 = 0;
          uStack_98 = 0;
          pcStack_b0 = pcVar12;
          pcStack_a0 = pcVar3;
          func_0x00010b2132dc();
          param_4 = (long *)0x44;
          func_0x000107c3173c(&pcStack_130);
          uVar2 = uStack_120;
          uStack_108 = uStack_128;
          pcStack_110 = pcStack_130;
          pcStack_130 = (code *)0x0;
          uStack_128 = 0;
          uStack_120 = 0;
          func_0x00010b213290(uVar2);
          uStack_108 = 0;
          uStack_100 = 0;
          pcStack_110 = (code *)0x0;
          *(undefined1 *)(param_1 + 5) = 0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_110);
          ppcVar5 = &pcStack_130;
LAB_10b211b0c:
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppcVar5);
          goto LAB_10b211b2c;
        }
      }
      lVar14 = lStack_e8;
      FUN_10b21b438();
      if ((int)lVar14 == 0) {
        pcVar3 = (code *)0x0;
        do {
          ppcVar9 = &pcStack_138;
          lVar14 = lStack_e8;
          func_0x00010b21b390(lStack_e8,ppcVar9);
          pcVar12 = pcStack_138;
          if ((int)lVar14 != 0) {
            pcStack_b0 = (code *)&UNK_10f73a425;
            FUN_10b2131b8();
            goto LAB_10b211b2c;
          }
          if (*(long *)(pcStack_138 + 0x30) == 0) {
            pcStack_b0 = (code *)0x0;
            uStack_a8 = 0;
            pcStack_a0 = (code *)0x0;
            ppcVar9 = *(code ***)(pcStack_138 + 0x58);
            func_0x00010b2132b4();
          }
          else {
            pcVar3 = pcVar3 + *(long *)(pcStack_138 + 0x30);
            uVar20 = 0;
            if (param_3 != 0) {
              uVar20 = (ulong)pcVar3 / param_3;
            }
            uVar4 = uVar20 == *(ulong *)(param_2 + 0x28);
            if (*(ulong *)(param_2 + 0x28) <= uVar20) {
              uStack_128 = 0;
              pcStack_130 = pcVar3;
              func_0x00010b21329c();
              param_4 = (long *)0x4;
              func_0x000107c3173c(&pcStack_110);
              uVar2 = uStack_100;
              uStack_a8 = uStack_108;
              pcStack_b0 = pcStack_110;
              pcStack_110 = (code *)0x0;
              uStack_108 = 0;
              uStack_100 = 0;
              func_0x00010b213290(uVar2);
              uStack_a8 = 0;
              pcStack_a0 = (code *)0x0;
              pcStack_b0 = (code *)0x0;
              *(undefined1 *)(param_1 + 5) = 0;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_b0);
              ppcVar5 = &pcStack_110;
              goto LAB_10b211b0c;
            }
            lVar14 = lStack_e8;
            func_0x00010b2132fc();
            if ((int)lVar14 != 0) {
              pcStack_b0 = (code *)&UNK_10f73a458;
              FUN_10b2131b8();
              goto LAB_10b211b2c;
            }
            pcStack_b0 = (code *)0x0;
            uStack_a8 = 0;
            pcStack_a0 = (code *)0x0;
            func_0x000107c2823c(&pcStack_b0,*(undefined8 *)(pcVar12 + 0x30));
            param_4 = (long *)(ulong)(uint)((int)uStack_a8 - (int)pcStack_b0);
            lVar14 = lStack_e8;
            FUN_10b21acd4();
            FUN_10b219ca0(lStack_e8);
            uVar4 = (int)lVar14 == (int)uStack_a8 - (int)pcStack_b0;
            if (!(bool)uVar4) {
              pcStack_110 = (code *)&UNK_10f73a46f;
              ppcVar9 = &pcStack_110;
              FUN_10b212f34(param_1,ppcVar9);
              func_0x00010b2132f4();
              goto LAB_10b211b2c;
            }
            ppcVar9 = *(code ***)(pcVar12 + 0x58);
            func_0x00010b2132b4();
          }
          func_0x00010b2132f4();
          lVar6 = lStack_e8;
          func_0x00010b21b44c();
          uVar20 = uStack_d8;
          lVar14 = lStack_e0;
          uVar4 = (int)lVar6 == -100;
        } while (!(bool)uVar4);
        lStack_e0 = 0;
        uStack_d8 = 0;
        *param_1 = lVar14;
        param_1[1] = uVar20;
        param_1[2] = lStack_d0;
        param_1[3] = lStack_c8;
        *(undefined4 *)(param_1 + 4) = uStack_c0;
        if (lStack_c8 != 0) {
          uVar13 = *(ulong *)(lStack_d0 + 8);
          if ((uVar20 & uVar20 - 1) == 0) {
            uVar13 = uVar13 & uVar20 - 1;
            uVar4 = true;
          }
          else {
            uVar4 = uVar13 == uVar20;
            if (uVar20 <= uVar13) {
              uVar15 = 0;
              if (uVar20 != 0) {
                uVar15 = uVar13 / uVar20;
              }
              uVar13 = uVar13 - uVar15 * uVar20;
            }
          }
          *(long **)(lVar14 + uVar13 * 8) = param_1 + 2;
          lStack_d0 = 0;
          lStack_c8 = 0;
        }
        *(undefined1 *)(param_1 + 5) = 1;
      }
      else {
        pcStack_b0 = (code *)&UNK_10f73a481;
        FUN_10b2131b8();
      }
    }
    else {
      pcStack_b0 = (code *)&UNK_10f73a499;
      FUN_10b2131b8();
    }
LAB_10b211b2c:
    func_0x000107c281f0(&pcStack_88);
    param_1 = &lStack_e0;
    FUN_10b17df94();
  }
  else {
    pcStack_88 = (code *)&UNK_10f73a3a8;
    ppcVar9 = &pcStack_88;
    FUN_10b212f34(param_1,ppcVar9);
  }
  func_0x00010b213308(uStack_58);
  if ((bool)uVar4) {
    auVar24._8_8_ = ppcVar9;
    auVar24._0_8_ = param_1;
    return auVar24;
  }
  ___stack_chk_fail();
  func_0x00010b2132f4();
  func_0x000107c281f0(&pcStack_88);
  pauVar7 = (undefined1 (*) [16])&lStack_e0;
  FUN_10b17df94();
  func_0x00010b2131e8();
  if (*(int *)(pauVar7[1] + 8) == 1) {
    return *pauVar7;
  }
  func_0x00010563ab98();
  pauVar1 = pauVar7 + 1;
  plVar8 = (long *)0x40;
  __Znwm();
  uStack_1a8 = 0;
  plVar18 = plVar8 + 2;
  *plVar8 = 0;
  plVar8[1] = 0;
  plStack_1b8 = plVar8;
  pauStack_1b0 = pauVar1;
  func_0x000107c278b8(plVar18,ppcVar9);
  lVar14 = *param_4;
  plVar8[6] = param_4[1];
  plVar8[5] = lVar14;
  plVar8[7] = param_4[2];
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  uStack_1a8 = CONCAT71(uStack_1a8._1_7_,1);
  func_0x00010b2132a8();
  plVar8[1] = (long)plVar18;
  func_0x00010b2132a8();
  plVar8[1] = (long)plVar18;
  plVar19 = *(long **)(*pauVar7 + 8);
  if (plVar19 != (long *)0x0) {
    uVar20 = (long)plVar19 - 1;
    if (((ulong)plVar19 & uVar20) == 0) {
      plVar21 = (long *)(uVar20 & (ulong)plVar18);
    }
    else {
      plVar21 = plVar18;
      if (plVar19 <= plVar18) {
        uVar13 = 0;
        if (plVar19 != (long *)0x0) {
          uVar13 = (ulong)plVar18 / (ulong)plVar19;
        }
        plVar21 = (long *)((long)plVar18 - uVar13 * (long)plVar19);
      }
    }
    plVar22 = *(long **)(*(long *)*pauVar7 + (long)plVar21 * 8);
    if (plVar22 != (long *)0x0) {
      do {
        while( true ) {
          plVar22 = (long *)*plVar22;
          if (plVar22 == (long *)0x0) goto LAB_10b211eb4;
          plVar11 = (long *)plVar22[1];
          if (plVar11 != plVar18) break;
          uVar13 = (ulong)(plVar22 + 2);
          ppcVar9 = (code **)(plVar8 + 2);
          func_0x000107c278d0(uVar13,ppcVar9);
          if ((uVar13 & 1) != 0) goto LAB_10b2120f4;
        }
        if (((ulong)plVar19 & uVar20) == 0) {
          plVar11 = (long *)((ulong)plVar11 & uVar20);
        }
        else if (plVar19 <= plVar11) {
          uVar13 = 0;
          if (plVar19 != (long *)0x0) {
            uVar13 = (ulong)plVar11 / (ulong)plVar19;
          }
          plVar11 = (long *)((long)plVar11 - uVar13 * (long)plVar19);
        }
      } while (plVar11 == plVar21);
    }
  }
LAB_10b211eb4:
  fVar23 = (float)(*(long *)(pauVar7[1] + 8) + 1);
  if ((plVar19 != (long *)0x0) && (fVar23 <= *(float *)pauVar7[2] * (float)plVar19))
  goto LAB_10b211ed8;
  uVar20 = 1;
  if ((long *)0x2 < plVar19) {
    uVar20 = (ulong)(((ulong)plVar19 & (long)plVar19 - 1U) != 0);
  }
  uVar20 = uVar20 | (long)plVar19 << 1;
  uVar13 = (ulong)(fVar23 / *(float *)pauVar7[2]);
  if (uVar20 <= uVar13) {
    uVar20 = uVar13;
  }
  if (uVar20 - 1 == 0) {
    uVar20 = 2;
  }
  else if ((uVar20 & uVar20 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar13 = *(ulong *)(*pauVar7 + 8);
  if (uVar13 > uVar20 || uVar20 == uVar13) {
    if (uVar13 <= uVar20) goto LAB_10b211ed8;
    uVar15 = (ulong)((float)*(ulong *)(pauVar7[1] + 8) / *(float *)pauVar7[2]);
    if ((uVar13 < 3) || ((uVar13 & uVar13 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar15) {
      uVar15 = 1L << (-LZCOUNT(uVar15 - 1) & 0x3fU);
    }
    if (uVar20 <= uVar15) {
      uVar20 = uVar15;
    }
    if (uVar13 <= uVar20) goto LAB_10b211ed8;
    if (uVar20 == 0) {
      ppcVar9 = (code **)0x0;
      func_0x00010b213158(pauVar7,0);
      *(undefined8 *)(*pauVar7 + 8) = 0;
      goto LAB_10b211ed8;
    }
  }
  if (uVar20 >> 0x3d != 0) {
    func_0x000104bd35f4();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10b21214c);
    (*pcVar3)();
  }
  ppcVar9 = (code **)(uVar20 << 3);
  __Znwm(ppcVar9);
  func_0x00010b213158(pauVar7,ppcVar9);
  *(ulong *)(*pauVar7 + 8) = uVar20;
  lVar14 = *(long *)*pauVar7;
  for (uVar13 = 0; uVar20 != uVar13; uVar13 = uVar13 + 1) {
    *(undefined8 *)(lVar14 + uVar13 * 8) = 0;
  }
  plVar18 = *(long **)*pauVar1;
  if (plVar18 != (long *)0x0) {
    uVar16 = plVar18[1];
    uVar15 = uVar20 - 1;
    uVar13 = 0;
    if (uVar20 != 0) {
      uVar13 = uVar16 / uVar20;
    }
    uVar17 = uVar16;
    if (uVar20 <= uVar16) {
      uVar17 = uVar16 - uVar13 * uVar20;
    }
    if ((uVar20 & uVar15) == 0) {
      uVar17 = uVar16 & uVar15;
    }
    *(undefined1 (**) [16])(lVar14 + uVar17 * 8) = pauVar1;
    while (plVar19 = plVar18, plVar18 = (long *)*plVar19, plVar18 != (long *)0x0) {
      uVar13 = plVar18[1];
      if ((uVar20 & uVar15) == 0) {
        uVar13 = uVar13 & uVar15;
      }
      else if (uVar20 <= uVar13) {
        uVar16 = 0;
        if (uVar20 != 0) {
          uVar16 = uVar13 / uVar20;
        }
        uVar13 = uVar13 - uVar16 * uVar20;
      }
      if (uVar13 != uVar17) {
        if (*(long *)(lVar14 + uVar13 * 8) == 0) {
          *(long **)(lVar14 + uVar13 * 8) = plVar19;
          uVar17 = uVar13;
        }
        else {
          *plVar19 = *plVar18;
          *plVar18 = **(undefined8 **)(lVar14 + uVar13 * 8);
          **(long **)(lVar14 + uVar13 * 8) = (long)plVar18;
          plVar18 = plVar19;
        }
      }
    }
  }
LAB_10b211ed8:
  uVar20 = *(ulong *)(*pauVar7 + 8);
  uVar15 = plVar8[1];
  uVar13 = uVar20 - 1;
  if ((uVar20 & uVar13) == 0) {
    uVar15 = uVar13 & uVar15;
  }
  else if (uVar20 <= uVar15) {
    uVar16 = 0;
    if (uVar20 != 0) {
      uVar16 = uVar15 / uVar20;
    }
    uVar15 = uVar15 - uVar16 * uVar20;
  }
  lVar14 = *(long *)*pauVar7;
  plVar18 = *(long **)(lVar14 + uVar15 * 8);
  if (plVar18 == (long *)0x0) {
    *plVar8 = *(long *)*pauVar1;
    *(long **)*pauVar1 = plVar8;
    *(undefined1 (**) [16])(lVar14 + uVar15 * 8) = pauVar1;
    if (*plVar8 != 0) {
      uVar15 = *(ulong *)(*plVar8 + 8);
      if ((uVar20 & uVar13) == 0) {
        uVar15 = uVar15 & uVar13;
      }
      else if (uVar20 <= uVar15) {
        uVar13 = 0;
        if (uVar20 != 0) {
          uVar13 = uVar15 / uVar20;
        }
        uVar15 = uVar15 - uVar13 * uVar20;
      }
      *(long **)(lVar14 + uVar15 * 8) = plVar8;
    }
  }
  else {
    *plVar8 = *plVar18;
    *plVar18 = (long)plVar8;
  }
  *(long *)(pauVar7[1] + 8) = *(long *)(pauVar7[1] + 8) + 1;
  plStack_1b8 = (long *)0x0;
LAB_10b2120f4:
  pplVar10 = &plStack_1b8;
  FUN_10b213170(pplVar10);
  auVar25._8_8_ = ppcVar9;
  auVar25._0_8_ = pplVar10;
  return auVar25;
}



/* Entry: 10b211d84; end: 10b211da7;  */

undefined1  [16] FUN_10b211d84(undefined1 (*param_1) [16],long *param_2,long *param_3)

{
  undefined1 (*pauVar1) [16];
  code *pcVar2;
  long *plVar3;
  long **pplVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  float fVar16;
  undefined1 auVar17 [16];
  long *plStack_78;
  undefined1 (*pauStack_70) [16];
  undefined8 uStack_68;
  
  if (*(int *)(param_1[1] + 8) == 1) {
    return *param_1;
  }
  func_0x00010563ab98();
  pauVar1 = param_1 + 1;
  plVar3 = (long *)0x40;
  __Znwm();
  uStack_68 = 0;
  plVar11 = plVar3 + 2;
  *plVar3 = 0;
  plVar3[1] = 0;
  plStack_78 = plVar3;
  pauStack_70 = pauVar1;
  func_0x000107c278b8(plVar11,param_2);
  lVar7 = *param_3;
  plVar3[6] = param_3[1];
  plVar3[5] = lVar7;
  plVar3[7] = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  uStack_68 = CONCAT71(uStack_68._1_7_,1);
  func_0x00010b2132a8();
  plVar3[1] = (long)plVar11;
  func_0x00010b2132a8();
  plVar3[1] = (long)plVar11;
  plVar12 = *(long **)(*param_1 + 8);
  if (plVar12 != (long *)0x0) {
    uVar13 = (long)plVar12 - 1;
    if (((ulong)plVar12 & uVar13) == 0) {
      plVar14 = (long *)(uVar13 & (ulong)plVar11);
    }
    else {
      plVar14 = plVar11;
      if (plVar12 <= plVar11) {
        uVar6 = 0;
        if (plVar12 != (long *)0x0) {
          uVar6 = (ulong)plVar11 / (ulong)plVar12;
        }
        plVar14 = (long *)((long)plVar11 - uVar6 * (long)plVar12);
      }
    }
    plVar15 = *(long **)(*(long *)*param_1 + (long)plVar14 * 8);
    if (plVar15 != (long *)0x0) {
      do {
        while( true ) {
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) goto LAB_10b211eb4;
          plVar5 = (long *)plVar15[1];
          if (plVar5 != plVar11) break;
          uVar6 = (ulong)(plVar15 + 2);
          param_2 = plVar3 + 2;
          func_0x000107c278d0(uVar6,param_2);
          if ((uVar6 & 1) != 0) goto LAB_10b2120f4;
        }
        if (((ulong)plVar12 & uVar13) == 0) {
          plVar5 = (long *)((ulong)plVar5 & uVar13);
        }
        else if (plVar12 <= plVar5) {
          uVar6 = 0;
          if (plVar12 != (long *)0x0) {
            uVar6 = (ulong)plVar5 / (ulong)plVar12;
          }
          plVar5 = (long *)((long)plVar5 - uVar6 * (long)plVar12);
        }
      } while (plVar5 == plVar14);
    }
  }
LAB_10b211eb4:
  fVar16 = (float)(*(long *)(param_1[1] + 8) + 1);
  if ((plVar12 != (long *)0x0) && (fVar16 <= *(float *)param_1[2] * (float)plVar12))
  goto LAB_10b211ed8;
  uVar13 = 1;
  if ((long *)0x2 < plVar12) {
    uVar13 = (ulong)(((ulong)plVar12 & (long)plVar12 - 1U) != 0);
  }
  uVar13 = uVar13 | (long)plVar12 << 1;
  uVar6 = (ulong)(fVar16 / *(float *)param_1[2]);
  if (uVar13 <= uVar6) {
    uVar13 = uVar6;
  }
  if (uVar13 - 1 == 0) {
    uVar13 = 2;
  }
  else if ((uVar13 & uVar13 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar6 = *(ulong *)(*param_1 + 8);
  if (uVar6 > uVar13 || uVar13 == uVar6) {
    if (uVar6 <= uVar13) goto LAB_10b211ed8;
    uVar8 = (ulong)((float)*(ulong *)(param_1[1] + 8) / *(float *)param_1[2]);
    if ((uVar6 < 3) || ((uVar6 & uVar6 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar8) {
      uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
    }
    if (uVar13 <= uVar8) {
      uVar13 = uVar8;
    }
    if (uVar6 <= uVar13) goto LAB_10b211ed8;
    if (uVar13 == 0) {
      param_2 = (long *)0x0;
      func_0x00010b213158(param_1,0);
      *(undefined8 *)(*param_1 + 8) = 0;
      goto LAB_10b211ed8;
    }
  }
  if (uVar13 >> 0x3d != 0) {
    func_0x000104bd35f4();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10b21214c);
    (*pcVar2)();
  }
  param_2 = (long *)(uVar13 << 3);
  __Znwm(param_2);
  func_0x00010b213158(param_1,param_2);
  *(ulong *)(*param_1 + 8) = uVar13;
  lVar7 = *(long *)*param_1;
  for (uVar6 = 0; uVar13 != uVar6; uVar6 = uVar6 + 1) {
    *(undefined8 *)(lVar7 + uVar6 * 8) = 0;
  }
  plVar11 = *(long **)*pauVar1;
  if (plVar11 != (long *)0x0) {
    uVar9 = plVar11[1];
    uVar8 = uVar13 - 1;
    uVar6 = 0;
    if (uVar13 != 0) {
      uVar6 = uVar9 / uVar13;
    }
    uVar10 = uVar9;
    if (uVar13 <= uVar9) {
      uVar10 = uVar9 - uVar6 * uVar13;
    }
    if ((uVar13 & uVar8) == 0) {
      uVar10 = uVar9 & uVar8;
    }
    *(undefined1 (**) [16])(lVar7 + uVar10 * 8) = pauVar1;
    while (plVar12 = plVar11, plVar11 = (long *)*plVar12, plVar11 != (long *)0x0) {
      uVar6 = plVar11[1];
      if ((uVar13 & uVar8) == 0) {
        uVar6 = uVar6 & uVar8;
      }
      else if (uVar13 <= uVar6) {
        uVar9 = 0;
        if (uVar13 != 0) {
          uVar9 = uVar6 / uVar13;
        }
        uVar6 = uVar6 - uVar9 * uVar13;
      }
      if (uVar6 != uVar10) {
        if (*(long *)(lVar7 + uVar6 * 8) == 0) {
          *(long **)(lVar7 + uVar6 * 8) = plVar12;
          uVar10 = uVar6;
        }
        else {
          *plVar12 = *plVar11;
          *plVar11 = **(undefined8 **)(lVar7 + uVar6 * 8);
          **(long **)(lVar7 + uVar6 * 8) = (long)plVar11;
          plVar11 = plVar12;
        }
      }
    }
  }
LAB_10b211ed8:
  uVar13 = *(ulong *)(*param_1 + 8);
  uVar8 = plVar3[1];
  uVar6 = uVar13 - 1;
  if ((uVar13 & uVar6) == 0) {
    uVar8 = uVar6 & uVar8;
  }
  else if (uVar13 <= uVar8) {
    uVar9 = 0;
    if (uVar13 != 0) {
      uVar9 = uVar8 / uVar13;
    }
    uVar8 = uVar8 - uVar9 * uVar13;
  }
  lVar7 = *(long *)*param_1;
  plVar11 = *(long **)(lVar7 + uVar8 * 8);
  if (plVar11 == (long *)0x0) {
    *plVar3 = *(long *)*pauVar1;
    *(long **)*pauVar1 = plVar3;
    *(undefined1 (**) [16])(lVar7 + uVar8 * 8) = pauVar1;
    if (*plVar3 != 0) {
      uVar8 = *(ulong *)(*plVar3 + 8);
      if ((uVar13 & uVar6) == 0) {
        uVar8 = uVar8 & uVar6;
      }
      else if (uVar13 <= uVar8) {
        uVar6 = 0;
        if (uVar13 != 0) {
          uVar6 = uVar8 / uVar13;
        }
        uVar8 = uVar8 - uVar6 * uVar13;
      }
      *(long **)(lVar7 + uVar8 * 8) = plVar3;
    }
  }
  else {
    *plVar3 = *plVar11;
    *plVar11 = (long)plVar3;
  }
  *(long *)(param_1[1] + 8) = *(long *)(param_1[1] + 8) + 1;
  plStack_78 = (long *)0x0;
LAB_10b2120f4:
  pplVar4 = &plStack_78;
  FUN_10b213170(pplVar4);
  auVar17._8_8_ = param_2;
  auVar17._0_8_ = pplVar4;
  return auVar17;
}



/* Entry: 10b211da8; end: 10b21215f;  */

void FUN_10b211da8(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  plVar1 = param_1 + 2;
  plVar3 = (long *)0x40;
  __Znwm();
  uStack_58 = 0;
  plVar10 = plVar3 + 2;
  *plVar3 = 0;
  plVar3[1] = 0;
  plStack_68 = plVar3;
  plStack_60 = plVar1;
  func_0x000107c278b8(plVar10,param_2);
  lVar6 = *param_3;
  plVar3[6] = param_3[1];
  plVar3[5] = lVar6;
  plVar3[7] = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  uStack_58 = CONCAT71(uStack_58._1_7_,1);
  func_0x00010b2132a8();
  plVar3[1] = (long)plVar10;
  func_0x00010b2132a8();
  plVar3[1] = (long)plVar10;
  plVar11 = (long *)param_1[1];
  if (plVar11 != (long *)0x0) {
    uVar12 = (long)plVar11 - 1;
    if (((ulong)plVar11 & uVar12) == 0) {
      plVar13 = (long *)(uVar12 & (ulong)plVar10);
    }
    else {
      plVar13 = plVar10;
      if (plVar11 <= plVar10) {
        uVar5 = 0;
        if (plVar11 != (long *)0x0) {
          uVar5 = (ulong)plVar10 / (ulong)plVar11;
        }
        plVar13 = (long *)((long)plVar10 - uVar5 * (long)plVar11);
      }
    }
    plVar14 = *(long **)(*param_1 + (long)plVar13 * 8);
    if (plVar14 != (long *)0x0) {
      do {
        while( true ) {
          plVar14 = (long *)*plVar14;
          if (plVar14 == (long *)0x0) goto LAB_10b211eb4;
          plVar4 = (long *)plVar14[1];
          if (plVar4 != plVar10) break;
          uVar5 = (ulong)(plVar14 + 2);
          func_0x000107c278d0(uVar5,plVar3 + 2);
          if ((uVar5 & 1) != 0) goto LAB_10b2120f4;
        }
        if (((ulong)plVar11 & uVar12) == 0) {
          plVar4 = (long *)((ulong)plVar4 & uVar12);
        }
        else if (plVar11 <= plVar4) {
          uVar5 = 0;
          if (plVar11 != (long *)0x0) {
            uVar5 = (ulong)plVar4 / (ulong)plVar11;
          }
          plVar4 = (long *)((long)plVar4 - uVar5 * (long)plVar11);
        }
      } while (plVar4 == plVar13);
    }
  }
LAB_10b211eb4:
  if ((plVar11 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar11)) goto LAB_10b211ed8;
  uVar12 = 1;
  if ((long *)0x2 < plVar11) {
    uVar12 = (ulong)(((ulong)plVar11 & (long)plVar11 - 1U) != 0);
  }
  uVar12 = uVar12 | (long)plVar11 << 1;
  uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar12 <= uVar5) {
    uVar12 = uVar5;
  }
  if (uVar12 - 1 == 0) {
    uVar12 = 2;
  }
  else if ((uVar12 & uVar12 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar5 = param_1[1];
  if (uVar5 > uVar12 || uVar12 == uVar5) {
    if (uVar5 <= uVar12) goto LAB_10b211ed8;
    uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar5 < 3) || ((uVar5 & uVar5 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar7) {
      uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
    }
    if (uVar12 <= uVar7) {
      uVar12 = uVar7;
    }
    if (uVar5 <= uVar12) goto LAB_10b211ed8;
    if (uVar12 == 0) {
      func_0x00010b213158(param_1,0);
      param_1[1] = 0;
      goto LAB_10b211ed8;
    }
  }
  if (uVar12 >> 0x3d != 0) {
    func_0x000104bd35f4();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10b21214c);
    (*pcVar2)();
  }
  lVar6 = uVar12 << 3;
  __Znwm(lVar6);
  func_0x00010b213158(param_1,lVar6);
  param_1[1] = uVar12;
  lVar6 = *param_1;
  for (uVar5 = 0; uVar12 != uVar5; uVar5 = uVar5 + 1) {
    *(undefined8 *)(lVar6 + uVar5 * 8) = 0;
  }
  plVar10 = (long *)*plVar1;
  if (plVar10 != (long *)0x0) {
    uVar8 = plVar10[1];
    uVar7 = uVar12 - 1;
    uVar5 = 0;
    if (uVar12 != 0) {
      uVar5 = uVar8 / uVar12;
    }
    uVar9 = uVar8;
    if (uVar12 <= uVar8) {
      uVar9 = uVar8 - uVar5 * uVar12;
    }
    if ((uVar12 & uVar7) == 0) {
      uVar9 = uVar8 & uVar7;
    }
    *(long **)(lVar6 + uVar9 * 8) = plVar1;
    while (plVar11 = plVar10, plVar10 = (long *)*plVar11, plVar10 != (long *)0x0) {
      uVar5 = plVar10[1];
      if ((uVar12 & uVar7) == 0) {
        uVar5 = uVar5 & uVar7;
      }
      else if (uVar12 <= uVar5) {
        uVar8 = 0;
        if (uVar12 != 0) {
          uVar8 = uVar5 / uVar12;
        }
        uVar5 = uVar5 - uVar8 * uVar12;
      }
      if (uVar5 != uVar9) {
        if (*(long *)(lVar6 + uVar5 * 8) == 0) {
          *(long **)(lVar6 + uVar5 * 8) = plVar11;
          uVar9 = uVar5;
        }
        else {
          *plVar11 = *plVar10;
          *plVar10 = **(undefined8 **)(lVar6 + uVar5 * 8);
          **(long **)(lVar6 + uVar5 * 8) = (long)plVar10;
          plVar10 = plVar11;
        }
      }
    }
  }
LAB_10b211ed8:
  uVar12 = param_1[1];
  uVar7 = plVar3[1];
  uVar5 = uVar12 - 1;
  if ((uVar12 & uVar5) == 0) {
    uVar7 = uVar5 & uVar7;
  }
  else if (uVar12 <= uVar7) {
    uVar8 = 0;
    if (uVar12 != 0) {
      uVar8 = uVar7 / uVar12;
    }
    uVar7 = uVar7 - uVar8 * uVar12;
  }
  lVar6 = *param_1;
  plVar10 = *(long **)(lVar6 + uVar7 * 8);
  if (plVar10 == (long *)0x0) {
    *plVar3 = *plVar1;
    *plVar1 = (long)plVar3;
    *(long **)(lVar6 + uVar7 * 8) = plVar1;
    if (*plVar3 != 0) {
      uVar7 = *(ulong *)(*plVar3 + 8);
      if ((uVar12 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar12 <= uVar7) {
        uVar5 = 0;
        if (uVar12 != 0) {
          uVar5 = uVar7 / uVar12;
        }
        uVar7 = uVar7 - uVar5 * uVar12;
      }
      *(long **)(lVar6 + uVar7 * 8) = plVar3;
    }
  }
  else {
    *plVar3 = *plVar10;
    *plVar10 = (long)plVar3;
  }
  param_1[3] = param_1[3] + 1;
  plStack_68 = (long *)0x0;
LAB_10b2120f4:
  FUN_10b213170(&plStack_68);
  return;
}



/* Entry: 10b212160; end: 10b212907;  */

void FUN_10b212160(undefined8 *param_1,undefined ***param_2,undefined ***param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined ***pppuVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined ***pppuVar8;
  ulong uVar9;
  undefined ***pppuVar10;
  long lVar11;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *extraout_x8_01;
  int extraout_w9;
  int extraout_w9_00;
  undefined ***unaff_x20;
  undefined ***unaff_x21;
  undefined8 *puVar12;
  undefined **ppuVar13;
  undefined ***unaff_x22;
  long *plVar14;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined ***pppuStack_320;
  undefined ***pppuStack_318;
  undefined ***pppuStack_310;
  undefined ***pppuStack_308;
  undefined1 *puStack_300;
  code *pcStack_2f8;
  undefined1 auStack_2e8 [24];
  undefined1 auStack_2d0 [16];
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  ulong uStack_2a8;
  ulong auStack_2a0 [2];
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  char cStack_278;
  undefined **ppuStack_270;
  ulong uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [24];
  uint uStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined8 uStack_210;
  undefined ***pppuStack_208;
  undefined1 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  char cStack_1e0;
  undefined **ppuStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  undefined **ppuStack_1c0;
  ulong uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 auStack_198 [8];
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined **ppuStack_150;
  ulong uStack_148;
  undefined *puStack_138;
  int iStack_12c;
  undefined1 auStack_128 [40];
  undefined1 auStack_100 [40];
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined **appuStack_a8 [2];
  long lStack_98;
  byte bStack_80;
  undefined8 uStack_78;
  
  uStack_78 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(int *)(param_2 + 3) == 1;
  if ((bool)uVar4) {
    pppuVar5 = (undefined ***)(ulong)*(uint *)(param_3 + 5);
    pppuVar10 = param_3;
    func_0x00010b20557c();
    if (((ulong)pppuVar5 & 1) != 0) {
      pppuVar5 = param_2;
      FUN_10b211d84();
      func_0x00010b2056c4();
      uVar4 = 0;
      if (((int)pppuVar5 == 6) && (uVar4 = *(int *)param_3 == 2, !(bool)uVar4)) {
        uStack_210 = 0;
        __ZNSt3__16chrono12steady_clock3nowEv();
        uStack_200 = 1;
        auStack_240[0] = 0;
        uStack_228 = 0xffffffff;
        pppuStack_208 = pppuVar5;
        func_0x00010b2132c0();
        uVar1 = *(uint *)(param_2 + 3);
        if (uVar1 != 0xffffffff) {
          ppuStack_150 = (undefined **)auStack_240;
          (*(code *)(&PTR_FUN_110cc78a8)[uVar1])(&ppuStack_150,param_2);
          uStack_228 = uVar1;
        }
        ppuStack_218 = param_2[5];
        ppuStack_220 = param_2[4];
        FUN_10b2119b0(appuStack_a8,auStack_240);
        func_0x00010b2132c0();
        if ((bStack_80 & 1) == 0) {
          ppuVar13 = param_3[6];
          FUN_10b12983c(&ppuStack_150,*(int *)(param_3 + 5));
          func_0x00010b2132c8();
          func_0x00010b126fec(auStack_100,2);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (&uStack_258,appuStack_a8);
          unaff_x20 = &ppuStack_150;
          ppuStack_d8 = (undefined **)0x10f219ca0;
          uStack_d0 = 0xb;
          uStack_c0 = uStack_250;
          uStack_c8 = uStack_258;
          uStack_b8 = uStack_248;
          uStack_258 = 0;
          uStack_250 = 0;
          uStack_248 = 0;
          func_0x00010b2131dc(&ppuStack_1c0);
          FUN_10b114b00(ppuVar13,0x79,&ppuStack_1c0,1);
          FUN_10b120998(&ppuStack_1c0);
          lVar11 = 0x88;
          unaff_x22 = &ppuStack_150;
          do {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                      ((long)unaff_x22 + lVar11);
            lVar11 = lVar11 + -0x28;
          } while (lVar11 != -0x18);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_258);
          func_0x000107c278b8(&ppuStack_270,&UNK_10e5628f7);
          pppuVar10 = (undefined ***)&UNK_10f73a4ca;
          func_0x0001073a471c(&uStack_290);
          uVar2 = uStack_260;
          uStack_1b8 = uStack_268;
          ppuStack_1c0 = ppuStack_270;
          uStack_268 = 0;
          uStack_260 = 0;
          ppuStack_270 = (undefined **)0x0;
          func_0x00010b213278(uVar2);
          uVar4 = cStack_278 == '\x01';
          if ((bool)uVar4) {
            *(undefined8 *)(extraout_x8_00 + 0x28) = uStack_288;
            *(undefined8 *)(extraout_x8_00 + 0x20) = uStack_290;
            *(undefined8 *)(extraout_x8_00 + 0x30) = uStack_280;
            uStack_288 = 0;
            uStack_280 = 0;
            uStack_290 = 0;
          }
          uStack_148 = uStack_1b8;
          ppuStack_150 = ppuStack_1c0;
          func_0x00010b213228();
          if (extraout_w9_00 != 0) {
            func_0x00010b2131f0();
          }
          func_0x00010b2132e8();
          func_0x0001052a03ac(&ppuStack_150);
          func_0x0001052a03ac(&ppuStack_1c0);
          func_0x000107c279a4(&uStack_290);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_270);
          unaff_x21 = (undefined ***)0xffffffffffffffe8;
        }
        else {
          ppuStack_1c0 = &PTR_FUN_110cfd9c8;
          uStack_1b8 = 0;
          uStack_1a8 = 0;
          uStack_1a0 = 0;
          uStack_1b0 = 0;
          auStack_198[0] = 0;
          auStack_2a0[0] = 0;
          uStack_2b8 = 0;
          uStack_2c0 = 0;
          uStack_2a8 = 0;
          lStack_2b0 = 0;
          for (plVar14 = (long *)lStack_98; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
            func_0x000107c3171c(auStack_2d0,plVar14 + 5);
            puVar6 = &uStack_1b0;
            func_0x000107c303b4();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
            ppuStack_150 = (undefined **)((ulong)ppuStack_150 & 0xffffffffffffff00);
            auStack_128[0] = 0;
            func_0x00010b193d38(&ppuStack_150);
            if (iStack_12c != 3) {
              FUN_10b24d0fc(&ppuStack_150);
              iStack_12c = 3;
              puStack_138 = &DAT_11383d918;
            }
            uVar9 = uStack_148;
            if ((uStack_148 & 1) != 0) {
              uVar9 = *(ulong *)(uStack_148 & 0xfffffffffffffffe);
            }
            func_0x000107c30248(&puStack_138,plVar14 + 2,uVar9);
            lVar11 = (long)*(char *)((long)puVar6 + 0x17);
            puVar12 = puVar6;
            if (lVar11 < 0) {
              puVar12 = (undefined8 *)*puVar6;
              lVar11 = puVar6[1];
            }
            FUN_10b206e3c(auStack_2e8,param_3[1],param_3[2],puVar12,lVar11);
            uVar9 = uStack_2a8;
            if (uStack_2a8 < auStack_2a0[0]) {
              FUN_10b212f78(uStack_2a8,auStack_2e8,auStack_2d0,&ppuStack_150);
              uVar9 = uVar9 + 0x98;
            }
            else {
              plVar7 = &lStack_2b0;
              FUN_10b17d99c(plVar7,(long)(uStack_2a8 - lStack_2b0) / 0x98 + 1);
              FUN_10b17da88(&uStack_178,plVar7,(long)(uStack_2a8 - lStack_2b0) / 0x98,auStack_2a0);
              FUN_10b212f78(lStack_168,auStack_2e8,auStack_2d0,&ppuStack_150);
              lStack_168 = lStack_168 + 0x98;
              FUN_10b17d9fc(&lStack_2b0,&uStack_178);
              uVar9 = uStack_2a8;
              func_0x00010b17de14(&uStack_178);
            }
            uStack_2a8 = uVar9;
            func_0x00010b213250();
            FUN_10b17d950(&ppuStack_150);
            func_0x000107c27d78(auStack_2d0);
          }
          uStack_178 = 0;
          uStack_170 = 0;
          lStack_168 = 0;
          func_0x000107c30364(&ppuStack_1c0,&uStack_178);
          func_0x00010bd48068(&ppuStack_150,&uStack_178);
          func_0x0001054918e8(&uStack_2c0,&ppuStack_150);
          func_0x000107c27d78(&ppuStack_150);
          ppuVar13 = param_3[6];
          func_0x00010b213214();
          FUN_10b12983c(auStack_198,*(int *)(param_3 + 5));
          func_0x00010b2132c8();
          func_0x00010b2132d0();
          func_0x00010b2131dc(auStack_2e8);
          puVar6 = &uStack_210;
          func_0x000107c28148(puVar6);
          FUN_10b1135dc(ppuVar13,0x7a,auStack_2e8,puVar6);
          func_0x00010b213248();
          lVar11 = 0x88;
          do {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                      ((long)&ppuStack_150 + lVar11);
            lVar11 = lVar11 + -0x28;
          } while (lVar11 != -0x18);
          ppuVar13 = param_3[6];
          func_0x00010b213214();
          FUN_10b12983c(auStack_128,*(int *)(param_3 + 5));
          func_0x00010b2132c8();
          unaff_x22 = &ppuStack_d8;
          func_0x00010b2132d0();
          func_0x00010b2131dc(auStack_2e8);
          pppuVar10 = (undefined ***)0x7c;
          FUN_10b114b00(ppuVar13,0x7c,auStack_2e8,1);
          func_0x00010b213248();
          lVar11 = 0x88;
          unaff_x21 = &ppuStack_150;
          do {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                      ((long)unaff_x21 + lVar11);
            uVar3 = uStack_2b8;
            uVar2 = uStack_2c0;
            lVar11 = lVar11 + -0x28;
            uVar4 = lVar11 == -0x18;
          } while (!(bool)uVar4);
          uStack_2c0 = 0;
          uStack_2b8 = 0;
          param_1[1] = uVar3;
          *param_1 = uVar2;
          param_1[3] = uStack_2a8;
          param_1[2] = lStack_2b0;
          param_1[4] = auStack_2a0[0];
          uStack_2a8 = 0;
          auStack_2a0[0] = 0;
          lStack_2b0 = 0;
          *(undefined1 *)(param_1 + 5) = 1;
          *(undefined1 *)(param_1 + 8) = 1;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_178);
          FUN_10b196818(&uStack_2c0);
          FUN_10b5259a4(&ppuStack_1c0);
          unaff_x20 = (undefined ***)0xffffffffffffffe8;
        }
        pppuVar5 = appuStack_a8;
        FUN_10b17df6c();
        goto LAB_10b212288;
      }
    }
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 8) = 1;
    unaff_x20 = param_3;
    unaff_x21 = param_2;
  }
  else {
    func_0x000107c278b8(&ppuStack_1d8,&UNK_10e5628f7);
    pppuVar10 = (undefined ***)&UNK_10f73a4a5;
    func_0x000105c4097c(&uStack_1f8);
    uVar2 = uStack_1c8;
    uStack_1b8 = uStack_1d0;
    ppuStack_1c0 = ppuStack_1d8;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    ppuStack_1d8 = (undefined **)0x0;
    func_0x00010b213278(uVar2);
    uVar4 = cStack_1e0 == '\x01';
    if ((bool)uVar4) {
      *(undefined8 *)(extraout_x8 + 0x28) = uStack_1f0;
      *(undefined8 *)(extraout_x8 + 0x20) = uStack_1f8;
      *(undefined8 *)(extraout_x8 + 0x30) = uStack_1e8;
      uStack_1f0 = 0;
      uStack_1e8 = 0;
      uStack_1f8 = 0;
    }
    uStack_148 = uStack_1b8;
    ppuStack_150 = ppuStack_1c0;
    func_0x00010b213228();
    if (extraout_w9 != 0) {
      func_0x00010b2131f0();
    }
    func_0x00010b2132e8();
    func_0x0001052a03ac(&ppuStack_150);
    func_0x0001052a03ac(&ppuStack_1c0);
    func_0x000107c279a4(&uStack_1f8);
    pppuVar5 = &ppuStack_1d8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
LAB_10b212288:
  func_0x00010b213308(uStack_78);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b213248();
  func_0x00010b213268();
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    unaff_x20 = unaff_x20 + 5;
  } while (unaff_x20 != (undefined ***)0x0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_178);
  FUN_10b196818(&uStack_2c0);
  FUN_10b5259a4(&ppuStack_1c0);
  pppuVar8 = appuStack_a8;
  FUN_10b17df6c();
  func_0x00010b2131e8();
  pcStack_2f8 = FUN_10b212908;
  pppuStack_320 = unaff_x22;
  pppuStack_318 = unaff_x21;
  pppuStack_310 = unaff_x20;
  pppuStack_308 = pppuVar5;
  puStack_300 = &stack0xfffffffffffffff0;
  if ((*pppuVar8 == (undefined **)0x0) || (*(int *)(pppuVar8 + 4) != *(int *)(*pppuVar8 + 3))) {
    puStack_340 = &UNK_10f73a4db;
    FUN_10b213000(extraout_x8_01,&puStack_340);
  }
  else {
    if ((undefined ***)0x7ffffffe < pppuVar10) {
      pppuVar10 = (undefined ***)0x7fffffff;
    }
    func_0x000107c27fdc(&puStack_340,pppuVar10);
    uVar9 = *(ulong *)(**pppuVar8 + 0x38);
    FUN_10b21acd4(uVar9,puStack_340,pppuVar10);
    if ((int)uVar9 < 0) {
      puStack_348 = &UNK_10f73a46f;
      FUN_10b213000(extraout_x8_01,&puStack_348);
    }
    else {
      func_0x000107c2823c(&puStack_340,uVar9 & 0xffffffff);
      extraout_x8_01[1] = uStack_338;
      *extraout_x8_01 = puStack_340;
      extraout_x8_01[2] = uStack_330;
      uStack_338 = 0;
      uStack_330 = 0;
      puStack_340 = (undefined *)0x0;
      *(undefined1 *)(extraout_x8_01 + 3) = 1;
    }
    func_0x000107c27914(&puStack_340);
  }
  return;
}



/* Entry: 10b212908; end: 10b212a03;  */

void FUN_10b212908(undefined8 *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((*param_2 == 0) || ((int)param_2[4] != *(int *)(*param_2 + 0x18))) {
    puStack_50 = &UNK_10f73a4db;
    FUN_10b213000(param_1,&puStack_50);
  }
  else {
    if (0x7ffffffe < param_3) {
      param_3 = 0x7fffffff;
    }
    func_0x000107c27fdc(&puStack_50,param_3);
    uVar1 = *(ulong *)(*(long *)*param_2 + 0x38);
    FUN_10b21acd4(uVar1,puStack_50,param_3);
    if ((int)uVar1 < 0) {
      puStack_58 = &UNK_10f73a46f;
      FUN_10b213000(param_1,&puStack_58);
    }
    else {
      func_0x000107c2823c(&puStack_50,uVar1 & 0xffffffff);
      param_1[1] = uStack_48;
      *param_1 = puStack_50;
      param_1[2] = uStack_40;
      uStack_48 = 0;
      uStack_40 = 0;
      puStack_50 = (undefined *)0x0;
      *(undefined1 *)(param_1 + 3) = 1;
    }
    func_0x000107c27914(&puStack_50);
  }
  return;
}



/* Entry: 10b212a04; end: 10b212a77;  */

long FUN_10b212a04(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b21999c();
    func_0x00010b219170((long *)(param_1 + 0x38));
  }
  plVar1 = (long *)(param_1 + 0x30);
  if (*plVar1 != 0) {
    if (*(int *)(param_1 + 0x18) == 1) {
      func_0x00010b218970(plVar1);
    }
    else {
      func_0x00010b218b84();
      func_0x00010b218c04(plVar1);
    }
  }
  FUN_10b17d480(param_1);
  return param_1;
}



/* Entry: 10b212a78; end: 10b212c53;  */

void FUN_10b212a78(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long **pplVar8;
  long *plStack_98;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar6 = *(long *)(*param_2 + 0x38);
  if (lVar6 == 0) {
    plStack_80 = (long *)&UNK_10f73a4ff;
    goto LAB_10b212b78;
  }
  if ((int)param_2[3] == 0) {
LAB_10b212ac4:
    iVar5 = (int)lVar6;
    func_0x00010b21b438();
    param_2[2] = 0;
  }
  else {
    FUN_10b219ca0();
    lVar6 = *(long *)(*param_2 + 0x38);
    iVar5 = (int)lVar6;
    if ((int)param_2[3] == 0) goto LAB_10b212ac4;
    func_0x00010b21b44c();
  }
  *(int *)(param_2 + 3) = (int)param_2[3] + 1;
  if (iVar5 == 0) {
    lStack_38 = 0;
    uVar7 = *(undefined8 *)(*param_2 + 0x38);
    func_0x00010b21b390(uVar7,&lStack_38);
    lVar6 = lStack_38;
    if (((int)uVar7 != 0) || (lStack_38 == 0)) {
      plStack_80 = (long *)&UNK_10f73a53c;
      goto LAB_10b212b78;
    }
    uVar1 = param_2[1];
    plStack_80 = (long *)(param_2[2] + *(long *)(lStack_38 + 0x30));
    param_2[2] = (long)plStack_80;
    if (uVar1 != 0) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = (ulong)plStack_80 / uVar1;
      }
      if (*(ulong *)(*param_2 + 0x28) <= uVar2) {
        uStack_78 = 0;
        func_0x00010b21329c();
        func_0x000107c3173c(&plStack_50);
        uVar7 = uStack_40;
        uStack_78 = uStack_48;
        plStack_80 = plStack_50;
        plStack_50 = (long *)0x0;
        uStack_48 = 0;
        uStack_40 = 0;
        func_0x00010b213290(uVar7);
        uStack_78 = 0;
        uStack_70 = 0;
        plStack_80 = (long *)0x0;
        *(undefined1 *)(param_1 + 5) = 0;
        *(undefined1 *)(param_1 + 6) = 1;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_80);
        pplVar8 = &plStack_50;
        goto LAB_10b212c4c;
      }
    }
    iVar5 = (int)*(undefined8 *)(*param_2 + 0x38);
    func_0x00010b2132fc();
    if (iVar5 == 0) {
      func_0x000107c278b8(&plStack_98,*(undefined8 *)(lVar6 + 0x58));
      lVar4 = lStack_88;
      lVar6 = lStack_90;
      plVar3 = plStack_98;
      uStack_60 = (undefined4)param_2[3];
      plStack_98 = (long *)0x0;
      lStack_90 = 0;
      lStack_88 = 0;
      *param_1 = (long)param_2;
      param_1[2] = lVar6;
      param_1[1] = (long)plVar3;
      param_1[3] = lVar4;
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_78 = 0;
      *(undefined4 *)(param_1 + 4) = uStack_60;
      *(undefined1 *)(param_1 + 5) = 1;
      *(undefined1 *)(param_1 + 6) = 1;
      plStack_80 = param_2;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_78);
      pplVar8 = &plStack_98;
LAB_10b212c4c:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pplVar8);
      return;
    }
    plStack_80 = (long *)&UNK_10f73a559;
  }
  else {
    if (iVar5 == -100) {
      *(undefined4 *)(param_2 + 3) = 0;
      param_2[2] = 0;
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 6) = 0;
      return;
    }
    plStack_80 = (long *)&UNK_10f73a523;
  }
LAB_10b212b78:
  FUN_10b2130b8(param_1,&plStack_80);
  return;
}



/* Entry: 10b212c54; end: 10b212f33;  */

void FUN_10b212c54(ulong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b0 [48];
  ulong *puStack_80;
  ulong *puStack_78;
  ulong uStack_70;
  undefined4 uStack_68;
  undefined8 *puStack_60;
  ulong *puStack_58;
  undefined *puStack_50;
  undefined1 *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  FUN_10b213018(auStack_b0,param_2);
  puVar2 = (ulong *)0x40;
  __Znwm();
  FUN_10b213018(&puStack_50,auStack_b0);
  puVar5 = puVar2;
  FUN_10b213018(puVar2,&puStack_50);
  puVar5[6] = 0;
  puVar5[7] = 0;
  if ((int)puVar5[3] == 1) {
    FUN_10b218928();
  }
  else {
    FUN_10b218bc4();
  }
  puStack_80 = puVar2;
  FUN_10b17d480(&puStack_50);
  puStack_78 = (ulong *)0x0;
  uStack_70 = 0;
  uStack_68 = 0;
  puVar3 = auStack_b0;
  FUN_10b17d480();
  puVar5 = puStack_80;
  if (puStack_80 != (ulong *)0x0) {
    if ((int)puStack_80[3] == 0) {
      puStack_50 = (undefined *)((ulong)puStack_50 & 0xffffffff00000000);
      __ZNSt3__115system_categoryEv();
      puVar2 = puVar5;
      puStack_48 = puVar3;
      __ZNSt3__14__fs10filesystem11__file_sizeERKNS1_4pathEPNS_10error_codeE(puVar5,&puStack_50);
      puStack_78 = puVar2;
      if ((int)puStack_50 == 0) {
        uVar6 = puStack_80[6];
        if (*(char *)((long)puVar5 + 0x17) < '\0') {
          puVar5 = (ulong *)*puVar5;
        }
        FUN_10b2189c8(uVar6,puVar5,1);
        if ((int)uVar6 == 0) goto LAB_10b212da8;
      }
      if (puStack_80 != (ulong *)0x0) {
LAB_10b212d78:
        if ((int)puStack_80[3] == 0) {
          puVar5 = puStack_80;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_e8);
          puVar4 = &uStack_e8;
          func_0x000107c27e5c();
          puStack_60 = puVar4;
          puStack_58 = puVar5;
          func_0x000107c2793c(&UNK_10f73a577);
          func_0x000107c3173c(&puStack_d0);
          uVar1 = uStack_c0;
          puStack_48 = (undefined1 *)uStack_c8;
          puStack_50 = puStack_d0;
          puStack_d0 = (undefined *)0x0;
          uStack_c8 = 0;
          uStack_c0 = 0;
          func_0x00010b213290(uVar1);
          puStack_48 = (undefined1 *)0x0;
          puStack_40 = (undefined *)0x0;
          puStack_50 = (undefined *)0x0;
          *(undefined1 *)(param_1 + 4) = 0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_50);
          goto LAB_10b212e4c;
        }
      }
    }
    else if ((int)puStack_80[3] == 1) {
      puVar5 = (ulong *)puStack_80[1];
      if ((ulong)puVar5 >> 0x1f != 0) goto LAB_10b212d78;
      uVar6 = puStack_80[6];
      *(ulong *)(uVar6 + 0x18) = *puStack_80;
      *(int *)(uVar6 + 0x20) = (int)puVar5;
      *(int *)(uVar6 + 0x24) = (int)puVar5;
      uVar6 = puStack_80[6];
      *(undefined4 *)(uVar6 + 0x10) = 1;
      *(undefined4 *)(uVar6 + 0x24) = *(undefined4 *)(uVar6 + 0x20);
      *(undefined4 *)(uVar6 + 0x28) = 0;
      puStack_78 = puVar5;
LAB_10b212da8:
      FUN_10b219134(puStack_80 + 7);
      uVar6 = puStack_80[7];
      FUN_10b21919c(uVar6,puStack_80[6],1);
      puVar5 = puStack_80;
      if ((int)uVar6 != 0) {
        func_0x00010b219170(puStack_80 + 7);
        puStack_80[7] = 0;
        puStack_50 = &UNK_10f73a499;
        func_0x00010b2131c4();
        goto LAB_10b212d90;
      }
      if (puStack_80[7] == 0) {
        puStack_50 = &UNK_10f73a499;
        func_0x00010b2131c4();
        goto LAB_10b212d90;
      }
      puVar7 = *(undefined **)(puStack_80[7] + 0x180);
      if (puVar7 <= (undefined *)puStack_80[4]) {
        puStack_80 = (ulong *)0x0;
        *param_1 = (ulong)puVar5;
        param_1[2] = uStack_70;
        param_1[1] = (ulong)puStack_78;
        *(undefined4 *)(param_1 + 3) = uStack_68;
        *(undefined1 *)(param_1 + 4) = 1;
        goto LAB_10b212d90;
      }
      puStack_48 = (undefined1 *)0x0;
      uStack_38 = 0;
      puStack_50 = (undefined *)puStack_80[4];
      puStack_40 = puVar7;
      func_0x00010b2132dc();
      func_0x000107c3173c(&uStack_e8);
      uVar1 = uStack_d8;
      uStack_c8 = uStack_e0;
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      puStack_d0 = (undefined *)0x0;
      func_0x00010b213290(uVar1);
      uStack_c8 = 0;
      uStack_c0 = 0;
      *(undefined1 *)(param_1 + 4) = 0;
LAB_10b212e4c:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_d0);
      func_0x00010b213250();
      goto LAB_10b212d90;
    }
  }
  puStack_50 = &UNK_10f73a58f;
  func_0x00010b2131c4();
LAB_10b212d90:
  FUN_10b1d65f8(&puStack_80);
  return;
}



/* Entry: 10b212f34; end: 10b212f4b;  */

void FUN_10b212f34(long param_1)

{
  FUN_10b212f4c();
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 10b212f4c; end: 10b212f53;  */

void FUN_10b212f4c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x00010002b82c(param_1,uVar1);
  func_0x000107c613d0(uVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 10b212f54; end: 10b212f6b;  */

void FUN_10b212f54(long param_1)

{
  func_0x0001052a0844();
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 10b212f6c; end: 10b212f77;  */

void FUN_10b212f6c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (*param_1);
  return;
}



/* Entry: 10b212f78; end: 10b212fff;  */

undefined8
FUN_10b212f78(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [80];
  
  FUN_10b202630(auStack_80);
  uStack_88 = param_3[1];
  uStack_90 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  FUN_10b17d524(param_1,auStack_80,&uStack_90,param_4);
  func_0x000107c27d78(&uStack_90);
  func_0x00010b121e00(auStack_80);
  return param_1;
}



/* Entry: 10b213000; end: 10b213017;  */

void FUN_10b213000(long param_1)

{
  FUN_10b212f4c();
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10b213018; end: 10b213093;  */

undefined1 * FUN_10b213018(undefined1 *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 *puStack_38;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  FUN_10b17d480();
  uVar1 = *(uint *)(param_2 + 0x18);
  if (uVar1 != 0xffffffff) {
    puStack_38 = param_1;
    (*(code *)(&PTR_FUN_110cc78b8)[uVar1])(&puStack_38,param_2);
    *(uint *)(param_1 + 0x18) = uVar1;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  return param_1;
}



/* Entry: 10b213094; end: 10b2130b7;  */

void FUN_10b213094(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)*param_1;
  uVar3 = param_2[1];
  uVar2 = *param_2;
  puVar1[2] = param_2[2];
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  return;
}



/* Entry: 10b2130b8; end: 10b2130ef;  */

void FUN_10b2130b8(long param_1)

{
  FUN_10b212f4c();
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 10b2130f0; end: 10b213133;  */

void FUN_10b2130f0(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (**(char **)(param_1 + 0x10) == '\x01') {
    FUN_10b21999c(**(undefined8 **)(param_1 + 0x18));
  }
  func_0x00010b219170(*(undefined8 *)(param_1 + 0x18));
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (lVar2 != 0) {
      if ((*(byte *)(lVar2 + 0x10) >> 3 & 1) != 0) {
        _free(*(undefined8 *)(lVar2 + 0x18));
      }
      _free(lVar2);
    }
    *plVar1 = 0;
  }
  return;
}



/* Entry: 10b213134; end: 10b21316f;  */

void FUN_10b213134(void)

{
  return;
}



/* Entry: 10b213170; end: 10b2131b7;  */

long * FUN_10b213170(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010b17dff4(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10b2131b8; end: 10b21331b;  */

void FUN_10b2131b8(void)

{
  long unaff_x19;
  
  FUN_10b212f4c();
  *(undefined1 *)(unaff_x19 + 0x28) = 0;
  return;
}



/* Entry: 10b21331c; end: 10b21334f;  */

undefined8 * FUN_10b21331c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc78f0;
  param_1[2] = 0;
  param_1[1] = 0;
  func_0x000107c280bc();
  return param_1;
}



/* Entry: 10b213350; end: 10b213557;  */

void FUN_10b213350(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_190;
  long lStack_188;
  undefined1 auStack_158 [104];
  undefined4 uStack_f0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_88;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  func_0x000107c2bfcc(param_2,&uStack_48);
  if ((int)param_2 == 0) {
    plVar4 = (long *)*param_4;
    _bzero(auStack_158,0xf0);
    uStack_f0 = 0x3f800000;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_b8 = 0;
    uStack_88 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x000107c278b8(&puStack_1a8,"Failed to serialize message");
    func_0x000105394120(&uStack_190,0xd,&puStack_1a8);
    func_0x00010b213794(*(undefined8 *)(*plVar4 + 0x30));
    func_0x000107c27cbc(&uStack_190);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_1a8);
    func_0x000107c27c44(auStack_158);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x000107c278b8(auStack_158,&UNK_10f73a5f0);
    uVar1 = *param_4;
    lVar2 = param_4[1];
    puVar3 = (undefined8 *)0x30;
    __Znwm();
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_110cc7920;
    uStack_190 = uVar1;
    lStack_188 = lVar2;
    if (lVar2 != 0) {
      do {
        FUN_10b213770();
      } while (extraout_w10 != 0);
      do {
        FUN_10b213770();
      } while (extraout_w10_00 != 0);
    }
    puVar3[4] = uVar1;
    puVar3[5] = lVar2;
    func_0x000107c28114(&uStack_190);
    puStack_1a8 = puVar3 + 3;
    *puStack_1a8 = &PTR_DAT_110cc7970;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_190 = 0;
    lStack_188 = 0;
    puStack_1a0 = puVar3;
    func_0x000107c280c0(uVar5,&UNK_10f73a5af,&uStack_48,auStack_158,param_3,&puStack_1a8,&uStack_190
                       );
    func_0x000107c27c48(&uStack_190);
    func_0x000107c28120(&puStack_1a8);
    FUN_10b213748(&uStack_58);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_158);
  }
  func_0x000107c27c64(&uStack_48);
  return;
}



/* Entry: 10b213558; end: 10b213593;  */

void FUN_10b213558(void)

{
  func_0x00010b213780();
  return;
}



/* Entry: 10b213594; end: 10b213597;  */

void FUN_10b213594(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc7920;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b213598; end: 10b2135ab;  */

void FUN_10b213598(void)

{
  FUN_10b213738();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2135ac; end: 10b2135bf;  */

void FUN_10b2135ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b2135b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b2135c0; end: 10b2135d3;  */

void FUN_10b2135c0(void)

{
  func_0x000107c2811c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2135d4; end: 10b213737;  */

void FUN_10b2135d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int extraout_w10;
  long *plVar1;
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [56];
  long *plStack_160;
  long lStack_158;
  undefined4 uStack_f8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_90;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  ppuStack_60 = &PTR_FUN_110ce9f70;
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  func_0x000107c2bfd0(param_3,&ppuStack_60);
  if ((int)param_3 == 0) {
    plVar1 = *(long **)(param_1 + 8);
    _bzero(&plStack_160,0xf0);
    uStack_f8 = 0x3f800000;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c0 = 0;
    uStack_90 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    func_0x000107c278b8(auStack_1b0,"Failed to deserialize response");
    func_0x000105394120(auStack_198,0xd,auStack_1b0);
    func_0x00010b213794(*(undefined8 *)(*plVar1 + 0x30));
    func_0x000107c27cbc(auStack_198);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b0);
    func_0x000107c27c44(&plStack_160);
  }
  else {
    plVar1 = *(long **)(param_1 + 8);
    lStack_158 = *(long *)(param_1 + 0x10);
    plStack_160 = plVar1;
    if (lStack_158 != 0) {
      do {
        FUN_10b213770();
      } while (extraout_w10 != 0);
    }
    (**(code **)(*plVar1 + 0x38))();
    FUN_10b1b4ecc(&plStack_160);
  }
  FUN_10b47be74(&ppuStack_60);
  return;
}



/* Entry: 10b213738; end: 10b213747;  */

void FUN_10b213738(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc7920;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b213748; end: 10b21376f;  */

long FUN_10b213748(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b213770; end: 10b21379f;  */

void FUN_10b213770(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b2137a0; end: 10b2137d3;  */

undefined8 * FUN_10b2137a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc79d8;
  param_1[2] = 0;
  param_1[1] = 0;
  func_0x000107c280bc();
  return param_1;
}



/* Entry: 10b2137d4; end: 10b2138ff;  */

void FUN_10b2137d4(int param_1)

{
  long lVar1;
  undefined8 *puVar2;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  undefined1 auStack_58 [24];
  
  func_0x00010b213eac();
  func_0x00010b213f00();
  if (param_1 == 0) {
    func_0x00010b213e34();
    func_0x00010b213dc4();
    func_0x00010b213e64();
    func_0x00010b213da4();
    func_0x00010b213f0c();
    func_0x00010b213d68();
    func_0x00010b213db4();
    func_0x00010b213e74();
    func_0x00010b213e14();
  }
  else {
    func_0x00010b213e24();
    lVar1 = *(long *)(unaff_x21 + 8);
    puVar2 = (undefined8 *)0x30;
    __Znwm();
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_DAT_110cc7a08;
    if (lVar1 != 0) {
      do {
        func_0x00010b213d58();
      } while (extraout_w10 != 0);
      do {
        func_0x00010b213d58();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010b213ee8();
    func_0x00010b213ec4(&PTR_DAT_110cc7a58);
    func_0x00010b213d74();
    func_0x00010b213dbc();
    func_0x00010b213e7c();
    FUN_10b213bc4(auStack_58);
    func_0x00010b213e0c();
  }
  func_0x00010b213e94();
  return;
}



/* Entry: 10b213900; end: 10b213a2b;  */

void FUN_10b213900(int param_1)

{
  long lVar1;
  undefined8 *puVar2;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  undefined1 auStack_58 [24];
  
  func_0x00010b213eac();
  func_0x00010b213f00();
  if (param_1 == 0) {
    func_0x00010b213e34();
    func_0x00010b213dc4();
    func_0x00010b213e64();
    func_0x00010b213da4();
    func_0x00010b213f0c();
    func_0x00010b213d68();
    func_0x00010b213db4();
    func_0x00010b213e74();
    func_0x00010b213e14();
  }
  else {
    func_0x00010b213e24();
    lVar1 = *(long *)(unaff_x21 + 8);
    puVar2 = (undefined8 *)0x30;
    __Znwm();
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_FUN_110cc7ac0;
    if (lVar1 != 0) {
      do {
        func_0x00010b213d58();
      } while (extraout_w10 != 0);
      do {
        func_0x00010b213d58();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010b213ee8();
    func_0x00010b213ec4(&PTR_DAT_110cc7b10);
    func_0x00010b213d74();
    func_0x00010b213dbc();
    func_0x00010b213e7c();
    FUN_10b213d30(auStack_58);
    func_0x00010b213e0c();
  }
  func_0x00010b213e94();
  return;
}



/* Entry: 10b213a2c; end: 10b213a67;  */

void FUN_10b213a2c(void)

{
  func_0x00010b213ef4();
  return;
}



/* Entry: 10b213a68; end: 10b213a73;  */

undefined8 * FUN_10b213a68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ceb108;
  param_1[1] = 0;
  FUN_10b482a48();
  return param_1;
}



/* Entry: 10b213a74; end: 10b213a87;  */

void FUN_10b213a74(void)

{
  FUN_10b213bb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b213a88; end: 10b213a93;  */

void FUN_10b213a88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b213ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b213a94; end: 10b213aa7;  */

void FUN_10b213a94(void)

{
  func_0x000107c2811c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b213aa8; end: 10b213bb3;  */

void FUN_10b213aa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  int extraout_w10;
  long *plStack_160;
  long lStack_158;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  ppuStack_60 = &PTR_FUN_110cea3e8;
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  func_0x000107c2bfd0(param_3,&ppuStack_60);
  if ((int)param_3 == 0) {
    func_0x00010b213dfc();
    func_0x00010b213de0();
    func_0x00010b213e84();
    func_0x00010b213e44();
    func_0x00010b213f0c();
    func_0x00010b213d68();
    func_0x00010b213e54();
    func_0x00010b213e5c();
    func_0x00010b213e1c();
  }
  else {
    plVar1 = *(long **)(param_1 + 8);
    lStack_158 = *(long *)(param_1 + 0x10);
    plStack_160 = plVar1;
    if (lStack_158 != 0) {
      do {
        FUN_10b213d58();
      } while (extraout_w10 != 0);
    }
    (**(code **)(*plVar1 + 0x38))();
    func_0x000105638674(&plStack_160);
  }
  FUN_10b47d324(&ppuStack_60);
  return;
}


