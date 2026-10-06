/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107392ef4; end: 107392ef7;  */

undefined8 * FUN_107392ef4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a8ba0;
  func_0x000107392f88(param_1 + 4);
  return param_1;
}



/* Entry: 107392ef8; end: 107392f0b;  */

void FUN_107392ef8(void)

{
  FUN_107392f5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107392f0c; end: 107392f5b;  */

void FUN_107392f0c(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  func_0x0001073930ac();
  func_0x0001073930bc();
  return;
}



/* Entry: 107392f5c; end: 107392fdb;  */

undefined8 * FUN_107392f5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a8ba0;
  func_0x000107392f88(param_1 + 4);
  return param_1;
}



/* Entry: 107392fdc; end: 107392fdf;  */

undefined8 * FUN_107392fdc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a8be0;
  func_0x000107393070(param_1 + 4);
  return param_1;
}



/* Entry: 107392fe0; end: 107392ff3;  */

void FUN_107392fe0(void)

{
  FUN_107393044();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107392ff4; end: 107393043;  */

void FUN_107392ff4(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  func_0x0001073930ac();
  func_0x0001073930bc();
  return;
}



/* Entry: 107393044; end: 107393097;  */

undefined8 * FUN_107393044(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a8be0;
  func_0x000107393070(param_1 + 4);
  return param_1;
}



/* Entry: 107393098; end: 107393143;  */

void FUN_107393098(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001073930a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 107393144; end: 1073931b3;  */

undefined8 * FUN_107393144(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *param_1 = &PTR_FUN_1109a8c20;
  uVar1 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1073af4d0(&uStack_30,0,0);
  param_1[4] = uStack_28;
  param_1[3] = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010724b8b8(&uStack_30);
  return param_1;
}



/* Entry: 1073931b4; end: 107393367;  */

undefined1 * FUN_1073931b4(undefined1 *param_1,int param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [24];
  char cStack_68;
  undefined1 auStack_60 [8];
  ulong uStack_58;
  byte bStack_49;
  undefined1 auStack_48 [24];
  undefined8 *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == 0x1b) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_60,*param_4 + 8);
    if (-1 < (char)bStack_49) {
      uStack_58 = (ulong)bStack_49;
    }
    if (uStack_58 == 0) {
      auStack_80[0] = 0;
      cStack_68 = '\0';
    }
    else {
      func_0x0001002a82b4(auStack_80,auStack_60);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
    if (cStack_68 == '\x01') {
      plVar2 = *(long **)(param_1 + 0x18);
      uStack_a8 = *(undefined8 *)(param_1 + 0x10);
      uStack_b0 = *(undefined8 *)(param_1 + 8);
      if (*(long *)(param_1 + 0x10) != 0) {
        plVar1 = (long *)(*(long *)(param_1 + 0x10) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&uStack_a0,auStack_80);
      puStack_30 = (undefined8 *)0x0;
      puVar5 = (undefined8 *)0x30;
      __Znwm();
      *puVar5 = &PTR_SUB_1109a8c60;
      puVar5[2] = uStack_a8;
      puVar5[1] = uStack_b0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      puVar5[4] = uStack_98;
      puVar5[3] = uStack_a0;
      puVar5[5] = uStack_90;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      puStack_30 = puVar5;
      (**(code **)(*plVar2 + 0x10))(plVar2,auStack_48);
      func_0x0001006393ec(auStack_48);
      FUN_107393368(&uStack_b0);
      puVar6 = (undefined1 *)0x1;
    }
    else {
      puVar6 = (undefined1 *)0x0;
    }
    param_1 = auStack_80;
    func_0x0001001148fc();
  }
  else {
    puVar6 = (undefined1 *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x0001006393ec(auStack_48);
  FUN_107393368(&uStack_b0);
  puVar6 = auStack_80;
  func_0x0001001148fc();
  func_0x000107393560();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar6 + 0x10);
  func_0x0001072afb28();
  if (puVar6 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107393368; end: 10739338f;  */

undefined8 FUN_107393368(long param_1)

{
  undefined8 unaff_x19;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x10);
  func_0x0001072afb28();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 107393390; end: 107393393;  */

undefined8 * FUN_107393390(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a8c20;
  func_0x00010724b8b8(param_1 + 3);
  func_0x0001072ac928(param_1 + 1);
  return param_1;
}



/* Entry: 107393394; end: 1073933a7;  */

void FUN_107393394(void)

{
  FUN_1073933a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073933a8; end: 10739340f;  */

undefined8 * FUN_1073933a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a8c20;
  func_0x00010724b8b8(param_1 + 3);
  func_0x0001072ac928(param_1 + 1);
  return param_1;
}



/* Entry: 107393410; end: 107393423;  */

void FUN_107393410(void)

{
  func_0x0001073933e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107393424; end: 107393467;  */

undefined8 FUN_107393424(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x30;
  __Znwm(0x30);
  FUN_1073934f4();
  return uVar1;
}



/* Entry: 107393468; end: 1073934af;  */

undefined8 * FUN_107393468(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_SUB_1109a8c60;
  lVar4 = *(long *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar5;
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
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_2 + 3,param_1 + 0x18);
  return param_2;
}



/* Entry: 1073934b0; end: 1073934e7;  */

long FUN_1073934b0(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109a8cc0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1073934e8; end: 1073934f3;  */

undefined ** FUN_1073934e8(void)

{
  return &PTR_DAT_1109a8cc0;
}



/* Entry: 1073934f4; end: 107393557;  */

undefined8 * FUN_1073934f4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_SUB_1109a8c60;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar5;
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
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 3,param_2 + 2);
  return param_1;
}



/* Entry: 107393558; end: 107393573;  */

void FUN_107393558(void)

{
  return;
}



/* Entry: 107393574; end: 107393883;  */

undefined8 FUN_107393574(long param_1,int param_2,undefined8 param_3,long *param_4)

{
  char cVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  bool bVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (param_2 != 0x17) {
    return 0;
  }
  lVar12 = *param_4;
  if (*(char *)(lVar12 + 0x1f) < '\0') {
    if (*(long *)(lVar12 + 0x10) == 0) {
      return 1;
    }
  }
  else if (*(char *)(lVar12 + 0x1f) == '\0') {
    return 1;
  }
  lStack_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  lVar9 = *(long *)(lVar12 + 0x20);
  uVar7 = *(ulong *)(lVar9 + 0x18);
  if (uVar7 != 0) {
    if (0x333333333333333 < uVar7) {
      FUN_107393a24();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x107393828);
      (*pcVar2)();
    }
    FUN_107393b00(&uStack_78,uVar7,0,&uStack_80);
    FUN_107393a38(&lStack_90,&uStack_78);
    func_0x000107393ba4(&uStack_78);
    lVar9 = *(long *)(lVar12 + 0x20);
  }
  plVar11 = (long *)(lVar9 + 0x10);
  while (puVar5 = puStack_88, plVar11 = (long *)*plVar11, plVar11 != (long *)0x0) {
    if (*(int *)(plVar11 + 9) == 2) {
      func_0x000104c2d9dc();
      func_0x00010724ef84(&uStack_78);
      func_0x000107393ce0();
    }
    else {
      func_0x00010786e278(&uStack_78);
      func_0x000107393ce0();
    }
    func_0x000107393cfc();
  }
  puVar10 = (undefined8 *)0x0;
  for (puVar6 = (undefined8 *)(lStack_90 + 0x38); puVar4 = puVar6 + -7, puVar4 != puVar5;
      puVar6 = puVar6 + 10) {
    func_0x000107264c5c();
    FUN_10739395c();
    lVar9 = (long)*(char *)((long)puVar6 + 0x17);
    puVar3 = puVar6;
    if (lVar9 < 0) {
      lVar9 = puVar6[1];
      puVar3 = (undefined8 *)*puVar6;
    }
    FUN_10739395c(puVar3,lVar9);
    lVar9 = (long)puVar10 + 2;
    if (puVar10 == (undefined8 *)0x0) {
      lVar9 = 1;
    }
    puVar10 = (undefined8 *)((long)puVar4 + lVar9 + (long)puVar3);
  }
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(&uStack_78,puVar10);
  puVar6 = puStack_88;
  bVar8 = true;
  for (puVar5 = (undefined8 *)(lStack_90 + 0x38); puVar4 = puVar5 + -7, puVar4 != puVar6;
      puVar5 = puVar5 + 10) {
    if (!bVar8) {
      puVar10 = (undefined8 *)0x2c;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(&uStack_78,0x2c);
    }
    func_0x000107264c5c(puVar4);
    FUN_1073939a4(&uStack_78,puVar4,puVar10);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(&uStack_78,0x3a);
    lVar9 = (long)*(char *)((long)puVar5 + 0x17);
    puVar10 = puVar5;
    if (lVar9 < 0) {
      lVar9 = puVar5[1];
      puVar10 = (undefined8 *)*puVar5;
    }
    FUN_1073939a4(&uStack_78,puVar10,lVar9);
    bVar8 = false;
  }
  puVar5 = (undefined8 *)0x70;
  __Znwm();
  plVar11 = puVar5 + 1;
  *plVar11 = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_1109a8d20;
  puVar10 = puVar5 + 3;
  *puVar10 = &PTR_DAT_110cee910;
  puVar5[6] = 0;
  puVar5[5] = 0;
  puVar5[8] = 0;
  puVar5[7] = 0;
  puVar5[10] = 0;
  puVar5[9] = 0;
  puVar5[0xc] = 0;
  puVar5[0xb] = 0;
  puVar5[0xd] = 0;
  puVar5[4] = &PTR_DAT_110cee978;
  puStack_a0 = puVar10;
  puStack_98 = puVar5;
  func_0x0001002a8234(puVar5 + 10,lVar12 + 8);
  func_0x0001002a8234(puVar5 + 6,&uStack_78);
  puVar6 = *(undefined8 **)(param_1 + 8);
  do {
    cVar1 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar8) {
      *plVar11 = *plVar11 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puStack_b0 = puVar10;
  puStack_a8 = puVar5;
  (**(code **)*puVar6)(puVar6,&puStack_b0);
  func_0x000105979594(&puStack_b0);
  FUN_107393ca0(&puStack_a0);
  func_0x000107393cfc();
  func_0x000107393c20(&lStack_90);
  return 1;
}



/* Entry: 107393884; end: 10739395b;  */

byte * FUN_107393884(long *param_1,byte *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  byte *pbVar5;
  byte abStack_58 [16];
  long lStack_48;
  
  pbVar3 = (byte *)param_1[1];
  if (pbVar3 < (byte *)param_1[2]) {
    func_0x000107393cf0();
    pbVar5 = pbVar3 + 0x50;
  }
  else {
    uVar1 = ((long)pbVar3 - *param_1) / 0x50 + 1;
    if (0x333333333333333 < uVar1) {
      FUN_107393a24();
      pbVar5 = param_2;
      for (; param_2 != (byte *)0x0; param_2 = param_2 + -1) {
        if (*pbVar3 - 0x2c < 0x31 &&
            (1L << ((ulong)(*pbVar3 - 0x2c) & 0x3f) & 0x1000000004001U) != 0) {
          pbVar5 = pbVar5 + 1;
        }
        pbVar3 = pbVar3 + 1;
      }
      return pbVar5;
    }
    uVar2 = (param_1[2] - *param_1) / 0x50;
    uVar4 = uVar2 * 2;
    if (uVar4 < uVar1 || uVar4 - uVar1 == 0) {
      uVar4 = uVar1;
    }
    if (0x199999999999998 < uVar2) {
      uVar4 = 0x333333333333333;
    }
    FUN_107393b00(abStack_58,uVar4);
    func_0x000107393cf0();
    lStack_48 = lStack_48 + 0x50;
    FUN_107393a38(param_1,abStack_58);
    pbVar5 = (byte *)param_1[1];
    pbVar3 = abStack_58;
    func_0x000107393ba4(pbVar3);
  }
  param_1[1] = (long)pbVar5;
  return pbVar3;
}



/* Entry: 10739395c; end: 1073939a3;  */

long FUN_10739395c(byte *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 - 0x2c < 0x31 && (1L << ((ulong)(*param_1 - 0x2c) & 0x3f) & 0x1000000004001U) != 0)
    {
      lVar1 = lVar1 + 1;
    }
    param_1 = param_1 + 1;
  }
  return lVar1;
}



/* Entry: 1073939a4; end: 107393a1b;  */

void FUN_1073939a4(undefined8 param_1,byte *param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    bVar1 = *param_2;
    uVar2 = bVar1 - 0x2c;
    if (uVar2 < 0x31 && (1L << ((ulong)uVar2 & 0x3f) & 0x1000000004001U) != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_1,0x5c);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (param_1,(int)(char)bVar1);
    param_2 = param_2 + 1;
  }
  return;
}



/* Entry: 107393a1c; end: 107393a23;  */

void FUN_107393a1c(void)

{
  return;
}



/* Entry: 107393a24; end: 107393a37;  */

void FUN_107393a24(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar5 = *plVar2;
  lVar1 = plVar2[1];
  lVar6 = param_2[1] + ((lVar1 - lVar5) / -0x50) * 0x50;
  lVar3 = lVar6;
  for (lVar4 = lVar5; lVar4 != lVar1; lVar4 = lVar4 + 0x50) {
    func_0x000104c318bc(lVar3,lVar4);
    uVar8 = *(undefined8 *)(lVar4 + 0x40);
    uVar7 = *(undefined8 *)(lVar4 + 0x38);
    *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(lVar4 + 0x48);
    *(undefined8 *)(lVar3 + 0x40) = uVar8;
    *(undefined8 *)(lVar3 + 0x38) = uVar7;
    *(undefined8 *)(lVar4 + 0x38) = 0;
    *(undefined8 *)(lVar4 + 0x40) = 0;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    lVar3 = lVar3 + 0x50;
  }
  for (; lVar5 != lVar1; lVar5 = lVar5 + 0x50) {
    FUN_107393b78(lVar5);
  }
  param_2[1] = lVar6;
  lVar4 = *plVar2;
  *plVar2 = lVar6;
  plVar2[1] = lVar4;
  param_2[1] = lVar4;
  lVar4 = plVar2[1];
  plVar2[1] = param_2[2];
  param_2[2] = lVar4;
  lVar4 = plVar2[2];
  plVar2[2] = param_2[3];
  param_2[3] = lVar4;
  *param_2 = param_2[1];
  return;
}



/* Entry: 107393a38; end: 107393aff;  */

void FUN_107393a38(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = param_2[1] + ((lVar1 - lVar4) / -0x50) * 0x50;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0x50) {
    func_0x000104c318bc(lVar2,lVar3);
    uVar7 = *(undefined8 *)(lVar3 + 0x40);
    uVar6 = *(undefined8 *)(lVar3 + 0x38);
    *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(lVar3 + 0x48);
    *(undefined8 *)(lVar2 + 0x40) = uVar7;
    *(undefined8 *)(lVar2 + 0x38) = uVar6;
    *(undefined8 *)(lVar3 + 0x38) = 0;
    *(undefined8 *)(lVar3 + 0x40) = 0;
    *(undefined8 *)(lVar3 + 0x48) = 0;
    lVar2 = lVar2 + 0x50;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x50) {
    FUN_107393b78(lVar4);
  }
  param_2[1] = lVar5;
  lVar3 = *param_1;
  *param_1 = lVar5;
  param_1[1] = lVar3;
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return;
}



/* Entry: 107393b00; end: 107393b77;  */

long * FUN_107393b00(long *param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0x333333333333333 < param_2) {
      func_0x000104bd35f4();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 7);
      func_0x000104c2f714(param_1);
      return param_1;
    }
    lVar1 = param_2 * 0x50;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x50;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = lVar1 + param_2 * 0x50;
  return param_1;
}



/* Entry: 107393b78; end: 107393c67;  */

long FUN_107393b78(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x38);
  func_0x000104c2f714(param_1);
  return param_1;
}



/* Entry: 107393c68; end: 107393c6b;  */

void FUN_107393c68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a8d20;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107393c6c; end: 107393c7f;  */

void FUN_107393c6c(void)

{
  func_0x000107393c90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107393c80; end: 107393c9f;  */

void FUN_107393c80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107393c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 107393ca0; end: 107393cc7;  */

long FUN_107393ca0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107393cc8; end: 107393d03;  */

void FUN_107393cc8(void)

{
  return;
}



/* Entry: 107393d04; end: 107394087;  */

undefined8 FUN_107393d04(long param_1,int param_2,undefined8 param_3,long *param_4)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  undefined1 *puVar13;
  long lVar14;
  bool bVar15;
  ulong uVar16;
  ulong uVar17;
  long alStack_170 [3];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_98;
  undefined1 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if (param_2 == 0x16) {
    lVar14 = *param_4;
    lVar4 = param_1;
    FUN_10741abc0();
    FUN_10741b094();
    uVar10 = 1;
    if (lVar4 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&uStack_f8,lVar14 + 8);
      uStack_d8 = uStack_f0;
      uStack_e0 = uStack_f8;
      uStack_d0 = uStack_e8;
      uStack_f0 = 0;
      uStack_e8 = 0;
      uStack_f8 = 0;
      uStack_c8 = 1;
      uStack_b0 = 0;
      uStack_a8 = 0;
      ppuStack_c0 = &PTR_DAT_110996720;
      uStack_b8 = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_94 = 1;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_90 = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_f8);
      bVar15 = false;
      uVar1 = *(ulong *)(lVar4 + 0x48);
      for (uVar11 = *(ulong *)(lVar4 + 0x40); plVar12 = *(long **)(lVar14 + 0x20), uVar11 != uVar1;
          uVar11 = uVar11 + 0x38) {
        uVar16 = plVar12[1];
        if ((uVar16 != 0) && (plVar12[3] != 0)) {
          uVar5 = uVar11;
          func_0x000104c2fe38();
          uVar17 = uVar16 - 1;
          if ((uVar16 & uVar17) == 0) {
            uVar8 = uVar5 & uVar17;
          }
          else {
            uVar8 = uVar5;
            if (uVar16 <= uVar5) {
              uVar8 = 0;
              if (uVar16 != 0) {
                uVar8 = uVar5 / uVar16;
              }
              uVar8 = uVar5 - uVar8 * uVar16;
            }
          }
          plVar12 = *(long **)(*plVar12 + uVar8 * 8);
          if (plVar12 != (long *)0x0) {
            do {
              while( true ) {
                plVar12 = (long *)*plVar12;
                if (plVar12 == (long *)0x0) goto LAB_107393e78;
                uVar7 = plVar12[1];
                if (uVar7 != uVar5) break;
                lVar6 = (long)(plVar12 + 2);
                func_0x000104c32db4(lVar6,uVar11);
                if ((int)lVar6 != 0) {
                  func_0x00010724ef84(auStack_110,uVar11);
                  func_0x00010724ef84(auStack_128,plVar12 + 9);
                  func_0x000107273f9c(&uStack_e0,auStack_110,auStack_128);
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_128);
                  puVar13 = auStack_110;
                  goto LAB_107393ea0;
                }
              }
              if ((uVar16 & uVar17) == 0) {
                uVar7 = uVar7 & uVar17;
              }
              else if (uVar16 <= uVar7) {
                uVar3 = 0;
                if (uVar16 != 0) {
                  uVar3 = uVar7 / uVar16;
                }
                uVar7 = uVar7 - uVar3 * uVar16;
              }
            } while (uVar7 == uVar8);
          }
        }
LAB_107393e78:
        func_0x00010724ef84(auStack_140,uVar11);
        puVar13 = auStack_140;
        FUN_107394088(&uStack_e0,auStack_140,"unknown");
        bVar15 = true;
LAB_107393ea0:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar13);
      }
      if ((bVar15) || (plVar12[3] != (*(long *)(lVar4 + 0x48) - *(long *)(lVar4 + 0x40)) / 0x38)) {
        uStack_158 = 0;
        uStack_150 = 0;
        plVar12 = plVar12 + 2;
        uStack_148 = 0;
        while (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0) {
          lVar6 = *(long *)(lVar4 + 0x40);
          uVar10 = *(undefined8 *)(lVar4 + 0x48);
          func_0x00010739419c();
          FUN_1073940f8(lVar6,uVar10,alStack_170);
          lVar9 = *(long *)(lVar4 + 0x48);
          func_0x000107394194();
          if (lVar9 == lVar6) {
            func_0x00010739419c();
            func_0x0001000fecf4(&uStack_158,alStack_170);
            func_0x000107394194();
          }
        }
        func_0x0001000e30f4(&uStack_158);
      }
      iVar2 = *(int *)(lVar4 + 0x38);
      if (iVar2 == 0) {
        func_0x000107394170(*(undefined8 *)(param_1 + 8));
        func_0x0001073941a8();
        FUN_10743fa9c();
      }
      else if (iVar2 == 2) {
        func_0x000107394170(*(undefined8 *)(param_1 + 8));
        func_0x0001073941a8();
        FUN_10743fa44();
      }
      else if (iVar2 == 1) {
        alStack_170[0] = (long)*(float *)(lVar14 + 0x30);
        uStack_158 = **(undefined8 **)(param_1 + 8);
        uStack_150 = CONCAT44(uStack_150._4_4_,3);
        FUN_10743f9dc(*(undefined8 **)(param_1 + 8),&uStack_e0,alStack_170,&uStack_158,7);
      }
      func_0x000107262330(&uStack_e0);
      uVar10 = 1;
    }
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}



/* Entry: 107394088; end: 1073940f7;  */

long FUN_107394088(long param_1,undefined8 *param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  func_0x00010729d5c0(param_1 + 0x20,&uStack_40);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_40);
  *(undefined1 *)(param_1 + 0x4c) = 1;
  return param_1;
}



/* Entry: 1073940f8; end: 107394117;  */

void FUN_1073940f8(void)

{
  FUN_107394120();
  return;
}



/* Entry: 107394118; end: 10739411f;  */

void FUN_107394118(void)

{
  return;
}



/* Entry: 107394120; end: 10739416f;  */

ulong FUN_107394120(ulong param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  
  while ((param_1 != param_2 &&
         (uVar1 = param_1, func_0x000107283140(param_1,param_3), (uVar1 & 1) == 0))) {
    param_1 = param_1 + 0x38;
  }
  return param_1;
}



/* Entry: 107394170; end: 1073941bb;  */

void FUN_107394170(void)

{
  return;
}



/* Entry: 1073941bc; end: 107394283;  */

undefined8 * FUN_1073941bc(long param_1,int param_2,undefined8 param_3,long *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 auStack_60 [56];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 != 0x1c) {
    puVar1 = (undefined8 *)0x0;
    goto LAB_10739423c;
  }
  lVar2 = *param_4;
  if (*(char *)(lVar2 + 0x1f) < '\0') {
    if (*(long *)(lVar2 + 0x10) != 0) goto LAB_10739420c;
  }
  else if (*(char *)(lVar2 + 0x1f) != '\0') {
LAB_10739420c:
    func_0x000107262e9c(auStack_60,lVar2 + 8);
    FUN_10736f6e8(*(undefined8 *)(param_1 + 8),auStack_60);
    FUN_10736f5f8(*(undefined8 *)(param_1 + 8),auStack_60);
    func_0x000104c2f714(auStack_60);
  }
  puVar1 = (undefined8 *)0x1;
LAB_10739423c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    __Unwind_Resume();
    *puVar1 = &PTR_FUN_1109a8db0;
    func_0x0001072aa30c(puVar1 + 1);
    return puVar1;
  }
  return puVar1;
}



/* Entry: 107394284; end: 107394287;  */

undefined8 * FUN_107394284(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a8db0;
  func_0x0001072aa30c(param_1 + 1);
  return param_1;
}



/* Entry: 107394288; end: 10739429b;  */

void FUN_107394288(void)

{
  FUN_10739429c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10739429c; end: 1073942cb;  */

undefined8 * FUN_10739429c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a8db0;
  func_0x0001072aa30c(param_1 + 1);
  return param_1;
}



/* Entry: 1073942cc; end: 1073943bb;  */

undefined1 * FUN_1073942cc(undefined8 param_1,undefined1 *param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 uStack_e0;
  undefined1 auStack_d8 [56];
  undefined1 auStack_a0 [96];
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107394870();
  auStack_f8[0] = 0;
  uStack_e0 = 0;
  auStack_a0[0] = 0;
  uStack_40 = 0;
  uStack_38 = extraout_x8;
  func_0x000107284c14(param_1,auStack_f8,auStack_a0);
  func_0x000107284d6c(auStack_a0);
  func_0x00010726ff1c(auStack_f8);
  puVar1 = param_2;
  func_0x000104c2d614();
  if (((ulong)puVar1 & 1) == 0) {
    func_0x000104c2fe00(auStack_d8,param_2);
    func_0x000107284aa4(auStack_110,auStack_d8,1);
    FUN_1073943bc(param_1,auStack_110);
    func_0x00010726e078(auStack_110);
    puVar1 = auStack_d8;
    func_0x000104c2f714();
  }
  func_0x00010739485c(uStack_38);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010726e078(auStack_110);
  func_0x000104c2f714(auStack_d8);
  func_0x000107284d48(param_1);
  __Unwind_Resume();
  if (puVar1[0x18] == '\x01') {
    func_0x0001072e8af4();
  }
  else {
    func_0x0001072707bc();
  }
  return puVar1;
}



/* Entry: 1073943bc; end: 1073943f3;  */

long FUN_1073943bc(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x0001072e8af4();
  }
  else {
    func_0x0001072707bc();
  }
  return param_1;
}



/* Entry: 1073943f4; end: 1073944ab;  */

/* WARNING: Possible PIC construction at 0x000107394548: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010739454c) */
/* WARNING: Removing unreachable block (ram,0x00010739455c) */
/* WARNING: Removing unreachable block (ram,0x000107394560) */
/* WARNING: Removing unreachable block (ram,0x000107394568) */
/* WARNING: Removing unreachable block (ram,0x000107394570) */

void FUN_1073943f4(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar5;
  undefined8 uVar6;
  undefined1 uStack_231;
  undefined1 **ppuStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [32];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [168];
  undefined1 auStack_128 [72];
  byte bStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_90;
  code *pcStack_88;
  long alStack_78 [7];
  char cStack_40;
  undefined8 uStack_38;
  
  func_0x000107394870();
  lVar5 = *param_2;
  lVar1 = param_2[1];
  uStack_38 = extraout_x8;
  do {
    if (lVar5 == lVar1) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 0x1e) = 0;
      uVar2 = 1;
LAB_107394474:
      func_0x00010739485c(uStack_38);
      if ((bool)uVar2) {
        return;
      }
      ___stack_chk_fail();
      func_0x000107394888();
      func_0x000107394880();
      pcStack_88 = FUN_1073944ac;
      puStack_90 = &stack0xfffffffffffffff0;
      func_0x000107394870();
      uStack_d8 = extraout_x8_00;
      FUN_1073942cc(auStack_1d0,param_5);
      puVar4 = auStack_1d0;
      (**(code **)(*param_2 + 0x70))(auStack_1e8,param_2,param_4,puVar4);
      func_0x000107284d48(auStack_1d0);
      FUN_1073943f4(auStack_1d0,auStack_1e8,param_7);
      if ((bStack_e0 & 1) == 0) {
        func_0x00010739467c(auStack_1d0);
        func_0x000107283d64(auStack_1e8);
        func_0x00010739485c(uStack_d8);
        if ((bool)uVar2) {
          return;
        }
        ___stack_chk_fail();
        func_0x000107279298(auStack_220);
        func_0x0001072792b8(auStack_200);
        func_0x00010739467c(auStack_1d0);
        puVar3 = auStack_1e8;
        func_0x000107283d64(puVar3);
        uVar6 = 0x107394630;
        func_0x000107394880();
      }
      else {
        puVar3 = auStack_1d0;
        puVar4 = auStack_128;
        uVar6 = 0x10739454c;
        param_7 = param_4;
        param_5 = param_6;
      }
      ppuStack_230 = &puStack_90;
      uStack_228 = uVar6;
      FUN_10739469c(&uStack_231,puVar3,param_7,puVar4,param_5);
      return;
    }
    param_2 = (long *)(lVar5 + 0x30);
    func_0x00010726236c(alStack_78);
    uVar2 = cStack_40 == '\x01';
    if ((bool)uVar2) {
      param_2 = alStack_78;
      func_0x000104c32db4(param_2,param_3);
      if (((ulong)param_2 & 1) != 0) {
        func_0x000107394660(param_1,lVar5);
        func_0x000107394888();
        param_2 = param_1;
        goto LAB_107394474;
      }
    }
    func_0x000107394888();
    lVar5 = lVar5 + 0x108;
  } while( true );
}



/* Entry: 1073944ac; end: 10739462f;  */

void FUN_1073944ac(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  undefined1 uStack_1b1;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined1 uStack_190;
  undefined8 uStack_180;
  long lStack_178;
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [168];
  undefined1 auStack_a8 [72];
  byte bStack_60;
  undefined8 uStack_58;
  
  puVar6 = &uStack_1a0;
  func_0x000107394870();
  uStack_58 = extraout_x8;
  FUN_1073942cc(auStack_150,param_4);
  puVar5 = auStack_150;
  (**(code **)(*param_1 + 0x70))(auStack_168,param_1,param_3,puVar5);
  func_0x000107284d48(auStack_150);
  FUN_1073943f4(auStack_150,auStack_168,param_6);
  if ((bStack_60 & 1) != 0) {
    FUN_107394630(&uStack_180,auStack_150,param_3,auStack_a8,param_5);
    lStack_198 = lStack_178;
    uStack_1a0 = uStack_180;
    if (lStack_178 != 0) {
      plVar1 = (long *)(lStack_178 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_190 = 1;
    (**(code **)(*param_1 + 0x110))(param_1,param_2,&uStack_1a0,param_7);
    func_0x000107279298(&uStack_1a0);
    func_0x0001072792b8(&uStack_180);
    param_6 = param_2;
    puVar5 = (undefined1 *)puVar6;
    param_4 = param_7;
  }
  func_0x00010739467c(auStack_150);
  func_0x000107283d64(auStack_168);
  func_0x00010739485c(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107279298(&uStack_1a0);
  func_0x0001072792b8(&uStack_180);
  func_0x00010739467c(auStack_150);
  puVar4 = auStack_168;
  func_0x000107283d64(puVar4);
  func_0x000107394880();
  pcStack_1a8 = FUN_107394630;
  puStack_1b0 = &stack0xfffffffffffffff0;
  FUN_10739469c(&uStack_1b1,puVar4,param_6,puVar5,param_4);
  return;
}



/* Entry: 107394630; end: 10739469b;  */

void FUN_107394630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uStack_11;
  
  FUN_10739469c(&uStack_11,param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 10739469c; end: 10739474b;  */

undefined8 *
FUN_10739469c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 auStack_60 [2];
  long lStack_50;
  undefined8 uStack_48;
  
  puVar2 = auStack_60;
  puVar3 = auStack_60;
  func_0x000107394870();
  uStack_48 = extraout_x8;
  func_0x000107296b84(auStack_60,1);
  FUN_10739474c(lStack_50,param_3,param_4,param_5,param_6);
  lVar1 = lStack_50;
  lStack_50 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x000107297fb8();
  func_0x00010739485c(uStack_48);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000107297fb8();
  func_0x000107394880();
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_110998a58;
  puVar3[1] = 0;
  FUN_107394798(puVar3 + 3);
  return puVar3;
}



/* Entry: 10739474c; end: 107394797;  */

undefined8 * FUN_10739474c(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110998a58;
  param_1[1] = 0;
  FUN_107394798(param_1 + 3);
  return param_1;
}



/* Entry: 107394798; end: 10739485b;  */

/* WARNING: Possible PIC construction at 0x000107394818: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010739481c) */
/* WARNING: Removing unreachable block (ram,0x000107394838) */
/* WARNING: Removing unreachable block (ram,0x000107394850) */
/* WARNING: Removing unreachable block (ram,0x000107394820) */

void FUN_107394798(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_8c [16];
  undefined1 uStack_7c;
  undefined1 auStack_78 [72];
  
  func_0x000107394870();
  func_0x00010729807c(auStack_78,param_5);
  auStack_8c[0] = 0;
  uStack_7c = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  func_0x000107269c1c(&uStack_a0);
  func_0x000107296bf8(param_1,param_2,param_3,param_4,auStack_78,auStack_8c,&uStack_a0);
  func_0x000104c335c0(&uStack_a0);
  func_0x00010724b3d8(auStack_78);
  return;
}



/* Entry: 10739485c; end: 10739488f;  */

void FUN_10739485c(void)

{
  return;
}



/* Entry: 107394890; end: 1073948ff;  */

long FUN_107394890(long param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x000107395168(&PTR_FUN_1109a8df0);
  if (extraout_x8 != 0) {
    do {
      func_0x000107395158();
    } while (extraout_w10 != 0);
  }
  FUN_107394db4(param_1 + 0x18,param_3);
  func_0x00010726ed14(param_1 + 0x38);
  *(long *)(param_1 + 0x48) = param_1;
  return param_1;
}



/* Entry: 107394900; end: 107394c6f;  */

undefined8 FUN_107394900(long param_1,int param_2,undefined8 param_3,long *param_4)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int extraout_w10;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lStack_228;
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [56];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  long *plStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_f0 [56];
  undefined1 auStack_b8 [56];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_150 = (long *)0x0;
  lStack_148 = 0;
  lVar2 = *(long *)(param_1 + 0x10);
  if (((lVar2 != 0) && (__ZNSt3__119__shared_weak_count4lockEv(), lStack_148 = lVar2, lVar2 != 0))
     && (plVar6 = *(long **)(param_1 + 8), plStack_150 = plVar6, plVar6 != (long *)0x0)) {
    if (param_2 == 0x19) {
      lVar7 = *param_4;
      lVar2 = lVar7 + 8;
      func_0x000100152bb8(lVar2,&UNK_10f40b125);
      if ((int)lVar2 != 0) {
        (**(code **)(*plVar6 + 0x30))(plVar6,*(undefined1 *)(lVar7 + 0x20));
LAB_107394b54:
        uVar5 = 1;
        goto LAB_107394b60;
      }
    }
    else if (param_2 == 0x18) {
      lVar7 = *param_4;
      lVar2 = lVar7 + 8;
      func_0x000100152bb8(lVar2,&UNK_10f40b125);
      if ((int)lVar2 != 0) {
        func_0x000104c2fe00(auStack_b8,lVar7 + 0x20);
        uVar1 = *(undefined1 *)(lVar7 + 0x58);
        uVar5 = *(undefined8 *)(lVar7 + 0x5c);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_168,lVar7 + 0x68);
        func_0x0001072ab9cc(auStack_180,param_3);
        plVar6 = plStack_150;
        func_0x000104c2fe00(auStack_f0,auStack_b8);
        lStack_228 = param_1;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_220,auStack_168);
        func_0x0001072ab9cc(auStack_208,auStack_180);
        uStack_1e8 = *(undefined8 *)(param_1 + 0x40);
        uStack_1f0 = *(undefined8 *)(param_1 + 0x38);
        if (*(long *)(param_1 + 0x40) != 0) {
          do {
            func_0x000107395158();
          } while (extraout_w10 != 0);
        }
        uStack_1e0 = *(undefined8 *)(param_1 + 0x48);
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_140 = 0;
        uStack_138 = 0;
        func_0x00010725b1d4(&uStack_140);
        func_0x00010725b1d4(&uStack_68);
        FUN_107394d04(auStack_1d8,&lStack_228);
        uStack_78 = 1;
        puVar3 = (undefined8 *)0x40;
        __Znwm();
        puVar3[1] = 0;
        puVar3[2] = 0;
        *puVar3 = &PTR_FUN_1109a8e30;
        puStack_70 = puVar3;
        FUN_107394e6c(&uStack_140,&uStack_1f0);
        puVar4 = (undefined8 *)0x58;
        __Znwm();
        *puVar4 = &PTR_FUN_1109a8e80;
        FUN_107394e6c(puVar4 + 1,&uStack_140);
        puVar3[3] = &PTR_FUN_1109a8f00;
        puStack_50 = puVar4;
        func_0x000105302f48(puVar3 + 4,&uStack_68);
        func_0x0001006393ec(&uStack_68);
        func_0x000107394c98(&uStack_140);
        puStack_70 = (undefined8 *)0x0;
        FUN_107394e10(auStack_80);
        uStack_1a0 = 0;
        uStack_198 = 0;
        puStack_190 = puVar3 + 3;
        puStack_188 = puVar3;
        (**(code **)(*plVar6 + 0x10))(plVar6,auStack_f0,uVar1,uVar5,&puStack_190);
        func_0x0001072ba140(&puStack_190);
        func_0x000107394c70(&uStack_1a0);
        func_0x000107394c98(&uStack_1f0);
        func_0x000107394cc0(&lStack_228);
        func_0x000104c2f714(auStack_f0);
        func_0x000107279298(auStack_180);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_168);
        func_0x000104c2f714(auStack_b8);
        goto LAB_107394b54;
      }
    }
  }
  uVar5 = 0;
LAB_107394b60:
  func_0x0001072bc98c(&plStack_150);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    func_0x0001072ba140(&puStack_190);
    func_0x000107394c70(&uStack_1a0);
    func_0x000107394c98(&uStack_1f0);
    do {
      func_0x000107394cc0(&lStack_228);
      func_0x000104c2f714(auStack_f0);
      func_0x000107279298(auStack_180);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_168);
      func_0x000104c2f714(auStack_b8);
      func_0x0001072bc98c(&plStack_150);
      func_0x000107395194();
      func_0x00010725b1d4(&uStack_1f0);
    } while( true );
  }
  return uVar5;
}



/* Entry: 107394c70; end: 107394ceb;  */

long FUN_107394c70(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107394cec; end: 107394cef;  */

undefined8 * FUN_107394cec(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_1109a8df0;
  plVar1 = param_1 + 7;
  if (*plVar1 != 0) {
    func_0x000107250860();
  }
  func_0x0001072508a0(plVar1);
  func_0x0001072508cc(plVar1);
  func_0x0001072ccd08(param_1 + 3);
  func_0x0001072cc6dc(param_1 + 1);
  return param_1;
}



/* Entry: 107394cf0; end: 107394d03;  */

void FUN_107394cf0(void)

{
  FUN_107394d5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107394d04; end: 107394d5b;  */

undefined8 * FUN_107394d04(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 1,param_2 + 1);
  func_0x0001072ab9cc(param_1 + 4,param_2 + 4);
  return param_1;
}



/* Entry: 107394d5c; end: 107394db3;  */

undefined8 * FUN_107394d5c(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_1109a8df0;
  plVar1 = param_1 + 7;
  if (*plVar1 != 0) {
    func_0x000107250860();
  }
  func_0x0001072508a0(plVar1);
  func_0x0001072508cc(plVar1);
  func_0x0001072ccd08(param_1 + 3);
  func_0x0001072cc6dc(param_1 + 1);
  return param_1;
}



/* Entry: 107394db4; end: 107394e0f;  */

long FUN_107394db4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(**(long **)(param_2 + 0x18) + 0x18))(*(long **)(param_2 + 0x18),param_1);
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 107394e10; end: 107394e37;  */

long FUN_107394e10(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107394e38; end: 107394e47;  */

void FUN_107394e38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a8e30;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107394e48; end: 107394e5b;  */

void FUN_107394e48(void)

{
  FUN_107394e38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107394e5c; end: 107394e6b;  */

void FUN_107394e5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107394e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 107394e6c; end: 107394ec7;  */

undefined8 * FUN_107394e6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 4,param_2 + 4);
  func_0x0001072a6994(param_1 + 7,param_2 + 7);
  return param_1;
}



/* Entry: 107394ec8; end: 107394ef3;  */

undefined8 * FUN_107394ec8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a8e80;
  func_0x000107394c98(param_1 + 1);
  return param_1;
}



/* Entry: 107394ef4; end: 107394f07;  */

void FUN_107394ef4(void)

{
  FUN_107394ec8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107394f08; end: 107394f47;  */

undefined8 FUN_107394f08(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x58;
  __Znwm(0x58);
  FUN_1073950a4();
  return uVar1;
}



/* Entry: 107394f48; end: 107394f73;  */

long FUN_107394f48(long param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  
  param_1 = param_1 + 8;
  func_0x000107395168(&PTR_FUN_1109a8e80);
  if (extraout_x8 != 0) {
    do {
      func_0x000107395158();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x10);
  FUN_107394d04(param_2 + 0x20,param_1 + 0x18);
  return param_2;
}



/* Entry: 107394f74; end: 10739505f;  */

void FUN_107394f74(long param_1)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
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
      goto LAB_107394fe0;
    }
    func_0x00010726fc88();
  }
  func_0x000107395150();
  plStack_50 = (long *)0x0;
  uStack_48 = 0;
  plStack_30 = (long *)0x0;
  uStack_28 = 0;
LAB_107394fe0:
  func_0x000107395150();
  func_0x00010726fc00(&plStack_30,param_1 + 8);
  if (plStack_30 == (long *)0x0) {
    func_0x000107395150();
  }
  else {
    lVar3 = *plStack_30;
    func_0x000107395150();
    if (lVar3 != -1) {
      plVar2 = *(long **)(*(long *)(param_1 + 0x20) + 0x30);
      if (plVar2 == (long *)0x0) {
        func_0x000104bfeb48();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x107395050);
        (*pcVar1)();
      }
      (**(code **)(*plVar2 + 0x30))(plVar2,param_1 + 0x28,param_1 + 0x40);
    }
  }
  func_0x000107270b00(&plStack_50);
  return;
}



/* Entry: 107395060; end: 107395097;  */

long FUN_107395060(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109a8ee0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107395098; end: 1073950a3;  */

undefined ** FUN_107395098(void)

{
  return &PTR_DAT_1109a8ee0;
}



/* Entry: 1073950a4; end: 1073950ff;  */

long FUN_1073950a4(long param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x000107395168(&PTR_FUN_1109a8e80);
  if (extraout_x8 != 0) {
    do {
      func_0x000107395158();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x10);
  FUN_107394d04(param_1 + 0x20,param_2 + 0x18);
  return param_1;
}



/* Entry: 107395100; end: 10739512b;  */

undefined8 * FUN_107395100(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a8f00;
  func_0x0001006393ec(param_1 + 1);
  return param_1;
}



/* Entry: 10739512c; end: 10739513f;  */

void FUN_10739512c(void)

{
  FUN_107395100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107395140; end: 10739519b;  */

void FUN_107395140(long param_1)

{
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104c01bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x20) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x000104c00420();
  return;
}



/* Entry: 10739519c; end: 107395233;  */

undefined8 *
FUN_10739519c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_1109a8f50;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107395f04();
    } while (extraout_w10 != 0);
  }
  lVar1 = param_3[1];
  uVar2 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107395f04();
    } while (extraout_w10_00 != 0);
  }
  param_1[5] = param_4;
  func_0x00010726ed14(param_1 + 6);
  param_1[8] = param_1;
  return param_1;
}



/* Entry: 107395234; end: 10739568f;  */

undefined8 FUN_107395234(long param_1,int param_2,undefined8 param_3,long *param_4)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  int extraout_w10;
  undefined8 uVar5;
  long lVar6;
  undefined4 auStack_228 [2];
  ulong uStack_220;
  ulong uStack_218;
  char cStack_210;
  undefined1 auStack_208 [32];
  long lStack_1e8;
  undefined1 auStack_1e0 [32];
  undefined1 auStack_1c0 [32];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 auStack_188 [2];
  undefined8 uStack_180;
  undefined8 uStack_178;
  char cStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  char cStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  char cStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  char cStack_108;
  undefined1 auStack_100 [8];
  ulong uStack_f8;
  byte bStack_e9;
  byte bStack_e8;
  undefined1 auStack_e0 [8];
  ulong uStack_d8;
  byte bStack_c9;
  byte bStack_c8;
  undefined1 auStack_c0 [24];
  byte bStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  char cStack_90;
  byte bStack_89;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  undefined8 *puStack_50;
  
  func_0x000107395f6c();
  uVar3 = param_2 == 0x13;
  if ((bool)uVar3) {
    lVar6 = *param_4;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_e0,lVar6 + 8);
    if (-1 < (char)bStack_c9) {
      uStack_d8 = (ulong)bStack_c9;
    }
    if (uStack_d8 == 0) {
      auStack_c0[0] = 0;
      bStack_a8 = 0;
    }
    else {
      func_0x0001002a82b4(auStack_c0,auStack_e0);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e0);
    uVar3 = bStack_a8 == 1;
    if ((bool)uVar3) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_100,lVar6 + 0x20);
      uVar3 = bStack_e9 == 0;
      if (-1 < (char)bStack_e9) {
        uStack_f8 = (ulong)bStack_e9;
      }
      if (uStack_f8 == 0) {
        auStack_e0[0] = 0;
        bStack_c8 = 0;
      }
      else {
        func_0x0001002a82b4(auStack_e0,auStack_100);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_100);
      if ((bStack_c8 & 1) == 0) {
        uVar5 = 0;
      }
      else {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (&uStack_a0,lVar6 + 0x38);
        uVar3 = bStack_89 == 0;
        uVar1 = uStack_98;
        if (-1 < (char)bStack_89) {
          uVar1 = (ulong)bStack_89;
        }
        if (uVar1 == 0) {
          auStack_100[0] = 0;
          bStack_e8 = 0;
        }
        else {
          func_0x0001002a82b4(auStack_100,&uStack_a0);
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_a0);
        if ((bStack_e8 & 1) == 0) {
          uVar5 = 0;
        }
        else {
          func_0x0001072ab9cc();
          if ((bStack_a8 & 1) == 0) goto LAB_1073955a8;
          uVar5 = *(undefined8 *)(param_1 + 0x18);
          auStack_228[0] = 0;
          uStack_220 = uStack_220 & 0xffffffffffffff00;
          cStack_210 = '\0';
          if (cStack_90 == '\x01') {
            uStack_218 = uStack_98;
            uStack_220 = uStack_a0;
            uStack_a0 = 0;
            uStack_98 = 0;
            cStack_210 = cStack_90;
          }
          func_0x00010028af84(auStack_208,auStack_c0);
          lStack_1e8 = param_1;
          func_0x00010028af84(auStack_1e0,auStack_e0);
          func_0x00010028af84(auStack_1c0,auStack_100);
          uStack_198 = *(undefined8 *)(param_1 + 0x38);
          uStack_1a0 = *(undefined8 *)(param_1 + 0x30);
          if (*(long *)(param_1 + 0x38) != 0) {
            do {
              func_0x000107395f04();
            } while (extraout_w10 != 0);
          }
          uStack_190 = *(undefined8 *)(param_1 + 0x40);
          uStack_88 = 0;
          uStack_80 = 0;
          uStack_78 = 0;
          uStack_70 = 0;
          func_0x00010725b1d4(&uStack_78);
          func_0x00010725b1d4(&uStack_88);
          FUN_10739570c(auStack_188,auStack_228);
          puStack_50 = (undefined8 *)0x0;
          puVar4 = (undefined8 *)0xa8;
          __Znwm();
          *puVar4 = &PTR_SUB_1109a8f90;
          puVar4[2] = uStack_198;
          puVar4[1] = uStack_1a0;
          uStack_1a0 = 0;
          uStack_198 = 0;
          puVar4[3] = uStack_190;
          *(undefined4 *)(puVar4 + 4) = auStack_188[0];
          *(undefined1 *)(puVar4 + 5) = 0;
          *(undefined1 *)(puVar4 + 7) = 0;
          if (cStack_170 == '\x01') {
            puVar4[6] = uStack_178;
            puVar4[5] = uStack_180;
            uStack_180 = 0;
            uStack_178 = 0;
            *(undefined1 *)(puVar4 + 7) = 1;
          }
          *(undefined1 *)(puVar4 + 8) = 0;
          *(undefined1 *)(puVar4 + 0xb) = 0;
          if (cStack_150 == '\x01') {
            puVar4[9] = uStack_160;
            puVar4[8] = uStack_168;
            puVar4[10] = uStack_158;
            uStack_160 = 0;
            uStack_158 = 0;
            uStack_168 = 0;
            *(undefined1 *)(puVar4 + 0xb) = 1;
          }
          *(undefined1 *)(puVar4 + 0xd) = 0;
          puVar4[0xc] = uStack_148;
          *(undefined1 *)(puVar4 + 0x10) = 0;
          if (cStack_128 == '\x01') {
            puVar4[0xe] = uStack_138;
            puVar4[0xd] = uStack_140;
            puVar4[0xf] = uStack_130;
            uStack_138 = 0;
            uStack_130 = 0;
            uStack_140 = 0;
            *(undefined1 *)(puVar4 + 0x10) = 1;
          }
          *(undefined1 *)(puVar4 + 0x11) = 0;
          *(undefined1 *)(puVar4 + 0x14) = 0;
          uVar3 = cStack_108 == '\x01';
          if ((bool)uVar3) {
            puVar4[0x12] = uStack_118;
            puVar4[0x11] = uStack_120;
            puVar4[0x13] = uStack_110;
            uStack_118 = 0;
            uStack_110 = 0;
            uStack_120 = 0;
            *(undefined1 *)(puVar4 + 0x14) = 1;
          }
          puStack_50 = puVar4;
          FUN_1073a2f24(uVar5,auStack_c0,auStack_68);
          func_0x000107395eb8(auStack_68);
          FUN_107395690(&uStack_1a0);
          func_0x0001073956b8(auStack_228);
          func_0x000107279298(&uStack_a0);
          uVar5 = 1;
        }
        func_0x0001001148fc(auStack_100);
      }
      func_0x0001001148fc(auStack_e0);
    }
    else {
      uVar5 = 0;
    }
    func_0x0001001148fc(auStack_c0);
  }
  else {
    uVar5 = 0;
  }
  func_0x000107395f2c();
  if ((bool)uVar3) {
    return uVar5;
  }
  ___stack_chk_fail();
LAB_1073955a8:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1073955b0);
  (*pcVar2)();
}



/* Entry: 107395690; end: 1073956f3;  */

undefined8 FUN_107395690(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001073956b8(param_1 + 0x18);
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 1073956f4; end: 1073956f7;  */

undefined8 * FUN_1073956f4(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_1109a8f50;
  plVar1 = param_1 + 6;
  if (*plVar1 != 0) {
    func_0x000107250860();
  }
  func_0x0001072508a0(plVar1);
  func_0x0001072508cc(plVar1);
  func_0x0001072aa258(param_1 + 3);
  func_0x00010726eeb8(param_1 + 1);
  return param_1;
}



/* Entry: 1073956f8; end: 10739570b;  */

void FUN_1073956f8(void)

{
  FUN_1073957ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10739570c; end: 1073957ab;  */

undefined4 * FUN_10739570c(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  func_0x0001072ab9cc(param_1 + 2,param_2 + 2);
  func_0x00010028af84(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  func_0x00010028af84(param_1 + 0x12,param_2 + 0x12);
  func_0x00010028af84(param_1 + 0x1a,param_2 + 0x1a);
  return param_1;
}



/* Entry: 1073957ac; end: 10739582f;  */

undefined8 * FUN_1073957ac(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_1109a8f50;
  plVar1 = param_1 + 6;
  if (*plVar1 != 0) {
    func_0x000107250860();
  }
  func_0x0001072508a0(plVar1);
  func_0x0001072508cc(plVar1);
  func_0x0001072aa258(param_1 + 3);
  func_0x00010726eeb8(param_1 + 1);
  return param_1;
}



/* Entry: 107395830; end: 107395843;  */

void FUN_107395830(void)

{
  func_0x000107395804();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107395844; end: 107395887;  */

undefined8 FUN_107395844(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xa8;
  __Znwm(0xa8);
  FUN_107395da0();
  return uVar1;
}



/* Entry: 107395888; end: 1073958b3;  */

undefined8 * FUN_107395888(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_SUB_1109a8f90;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107395f04();
    } while (extraout_w10 != 0);
  }
  param_2[3] = puVar1[2];
  FUN_10739570c(param_2 + 4,puVar1 + 3);
  return param_2;
}



/* Entry: 1073958b4; end: 107395d5b;  */

long ** FUN_1073958b4(long param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long **pplVar8;
  long **pplVar9;
  char *pcVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar11;
  long lVar12;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined1 auStack_2c0 [16];
  undefined1 auStack_2b0 [24];
  undefined1 uStack_298;
  undefined4 auStack_290 [6];
  undefined4 uStack_278;
  undefined **ppuStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  undefined4 uStack_248;
  undefined1 uStack_244;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1a8 [56];
  undefined1 auStack_170 [56];
  long *plStack_138;
  ulong uStack_130;
  undefined1 auStack_c0 [48];
  undefined1 uStack_90;
  
  pplVar8 = &plStack_2e0;
  pplVar9 = &plStack_2e0;
  lVar11 = param_1;
  puVar3 = param_2;
  func_0x000107395f6c();
  func_0x00010726fc00(&plStack_138,lVar11 + 8);
  if (plStack_138 == (long *)0x0) {
LAB_107395924:
    func_0x000107395f14();
    plStack_2e0 = (long *)0x0;
    uStack_2d8 = 0;
    plStack_138 = (long *)0x0;
    uStack_130 = 0;
  }
  else {
    func_0x00010726fc3c();
    uStack_2d8 = uStack_130;
    plStack_2e0 = plStack_138;
    in_ZR = *plStack_138 == -1;
    if ((bool)in_ZR) {
      func_0x00010726fc88();
      goto LAB_107395924;
    }
    plStack_138 = (long *)0x0;
    uStack_130 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    func_0x0001072508cc(&uStack_1e0);
  }
  func_0x000107395f14();
  func_0x00010726fc00(&plStack_138,param_1 + 8);
  if (plStack_138 == (long *)0x0) {
    func_0x000107395f14();
    goto LAB_107395bfc;
  }
  lVar11 = *plStack_138;
  func_0x000107395f14();
  in_ZR = lVar11 == -1;
  if ((bool)in_ZR) goto LAB_107395bfc;
  lVar12 = *(long *)(param_1 + 0x60);
  auStack_290[0] = 0x13f;
  uStack_278 = 0;
  uStack_260 = 0;
  uStack_258 = 0;
  ppuStack_270 = &PTR_DAT_110996720;
  uStack_268 = 0;
  uStack_250 = 0x13f;
  uStack_248 = 0;
  uStack_244 = 1;
  uStack_238 = 0;
  uStack_230 = 0;
  uStack_240 = 0;
  auStack_2b0[0] = 0;
  uStack_298 = 0;
  lVar11 = param_1 + 0x40;
  func_0x00010549026c(lVar11);
  puVar3 = param_2;
  func_0x0001000e107c(param_2,lVar11);
  if ((int)puVar3 == 0) {
    func_0x00010002b838(&plStack_138,&UNK_10f40b158);
    func_0x000107395f44();
    func_0x000107395f1c();
    func_0x00010729d56c(auStack_290,"result",&UNK_10f40b195);
  }
  else {
    func_0x000100060964(&uStack_1e0,&DAT_10f68f148);
    func_0x000107267fa4(&plStack_138,&uStack_1e0,param_2 + 6);
    func_0x000100060964(&uStack_220,"icon");
    func_0x000107267fa4(auStack_c0,&uStack_220,param_2 + 0xc);
    func_0x000107268084(auStack_2c0,&plStack_138,2);
    lVar11 = 0x78;
    do {
      func_0x0001072684c8((long)&plStack_138 + lVar11);
      lVar11 = lVar11 + -0x78;
    } while (lVar11 != -0x78);
    func_0x000104c2f714(&uStack_220);
    func_0x000107395f58();
    lVar11 = param_1 + 0x68;
    func_0x00010549026c();
    lVar4 = param_1 + 0x88;
    func_0x00010549026c(lVar4);
    in_ZR = *(char *)(param_1 + 0x38) == '\x01';
    if ((bool)in_ZR) {
      func_0x000107395f24();
      func_0x000107395f80();
      in_ZR = *(char *)(extraout_x8 + 0x160) == '\x01';
      if (!(bool)in_ZR) goto LAB_107395b04;
      func_0x000107395f24();
      func_0x000107395f80();
      func_0x000104c2fe00(&uStack_1e0,extraout_x8_00 + 0x60);
      func_0x000107395f24();
      func_0x000107395f80();
      func_0x000104c2fe00(auStack_1a8,extraout_x8_01 + 0x98);
      func_0x000107395f24();
      func_0x000107395f80();
      lVar5 = extraout_x8_02 + 0x128;
      func_0x00010725ffc4(lVar5);
      func_0x000104c2fe00(auStack_170,lVar5);
      FUN_107395e0c(&plStack_138,&uStack_1e0);
      bVar2 = true;
    }
    else {
LAB_107395b04:
      bVar2 = false;
      plStack_138 = (long *)((ulong)plStack_138 & 0xffffffffffffff00);
      uStack_90 = 0;
    }
    func_0x000107268400(&uStack_2d0,auStack_2c0);
    uStack_220 = CONCAT44(uStack_220._4_4_,1);
    uStack_210 = uStack_2c8;
    uStack_218 = uStack_2d0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    uVar6 = lVar12 + 8;
    FUN_10739a79c(uVar6,lVar11,lVar4,&plStack_138,&uStack_220);
    func_0x000104c3323c(&uStack_220);
    func_0x000104c335c0(&uStack_2d0);
    FUN_107395e64(&plStack_138);
    if (bVar2) {
      FUN_107395e84(&uStack_1e0);
    }
    if ((uVar6 & 1) == 0) {
      func_0x00010002b838(&plStack_138,&UNK_10f40b136);
      func_0x000107395f44();
      func_0x000107395f1c();
      pcVar10 = "set_state_error";
    }
    else {
      pcVar10 = "success";
    }
    func_0x00010729d56c(auStack_290,"result",pcVar10);
    func_0x000104c335c0(auStack_2c0);
  }
  puVar7 = *(undefined8 **)(lVar12 + 0x28);
  plStack_138 = (long *)CONCAT44(plStack_138._4_4_,1);
  uStack_130 = uStack_130 & 0xffffffff00000000;
  uStack_220 = *puVar7;
  uStack_218 = CONCAT44(uStack_218._4_4_,3);
  puVar3 = auStack_290;
  FUN_10743fa9c(puVar7,puVar3,&plStack_138,&uStack_220,7);
  func_0x0001001148fc(auStack_2b0);
  func_0x000107262330(auStack_290);
LAB_107395bfc:
  func_0x000107270b00();
  func_0x000107395f2c();
  if ((bool)in_ZR) {
    return pplVar8;
  }
  ___stack_chk_fail();
  func_0x000107395f58();
  func_0x000104c335c0(auStack_2c0);
  func_0x0001001148fc(auStack_2b0);
  func_0x000107262330(auStack_290);
  func_0x000107270b00(&plStack_2e0);
  func_0x000107395f50();
  func_0x0001004a5364(puVar3,&PTR_DAT_1109a9000);
  puVar1 = (undefined1 *)((long)pplVar9 + 8);
  if ((int)puVar3 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  return (long **)puVar1;
}



/* Entry: 107395d5c; end: 107395d93;  */

long FUN_107395d5c(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109a9000);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107395d94; end: 107395d9f;  */

undefined ** FUN_107395d94(void)

{
  return &PTR_DAT_1109a9000;
}



/* Entry: 107395da0; end: 107395e0b;  */

undefined8 * FUN_107395da0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_1 = &PTR_SUB_1109a8f90;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107395f04();
    } while (extraout_w10 != 0);
  }
  param_1[3] = param_2[2];
  FUN_10739570c(param_1 + 4,param_2 + 3);
  return param_1;
}



/* Entry: 107395e0c; end: 107395e27;  */

void FUN_107395e0c(long param_1)

{
  FUN_107395e28();
  *(undefined1 *)(param_1 + 0xa8) = 1;
  return;
}



/* Entry: 107395e28; end: 107395e63;  */

long FUN_107395e28(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000104c318bc();
  func_0x000104c318bc(lVar1 + 0x38,param_2 + 0x38);
  func_0x000104c318bc(param_1 + 0x70,param_2 + 0x70);
  return param_1;
}



/* Entry: 107395e64; end: 107395e83;  */

void FUN_107395e64(long param_1)

{
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    FUN_107395e84();
  }
  return;
}



/* Entry: 107395e84; end: 107395efb;  */

long FUN_107395e84(long param_1)

{
  func_0x000104c2f714(param_1 + 0x70);
  func_0x000104c2f714(param_1 + 0x38);
  func_0x000104c2f714(param_1);
  return param_1;
}



/* Entry: 107395efc; end: 107395f8b;  */

void FUN_107395efc(void)

{
  return;
}



/* Entry: 107395f8c; end: 107396027;  */

undefined8 *
FUN_107395f8c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_1109a9020;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107397154();
    } while (extraout_w10 != 0);
  }
  lVar1 = param_3[1];
  uVar2 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107397154();
    } while (extraout_w10_00 != 0);
  }
  param_1[5] = param_4;
  func_0x00010726ed14(param_1 + 6);
  param_1[8] = param_1;
  return param_1;
}



/* Entry: 107396028; end: 10739654b;  */

undefined8 FUN_107396028(long param_1,int param_2,undefined8 param_3,long *param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  int extraout_w10;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined1 auStack_250 [24];
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  char cStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  char cStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  char cStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  char cStack_1c0;
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  byte bStack_188;
  undefined1 auStack_180 [24];
  byte bStack_168;
  undefined1 auStack_160 [24];
  byte bStack_148;
  undefined1 auStack_140 [32];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [40];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined8 *puStack_b0;
  undefined1 auStack_a8 [16];
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_2 == 0xf;
  if ((bool)uVar2) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&uStack_90,*param_4 + 8);
    func_0x000107397134();
    if (extraout_x8 == 0) {
      auStack_160[0] = 0;
      bStack_148 = 0;
    }
    else {
      func_0x0001073971e0(auStack_160);
    }
    func_0x00010739714c();
    uVar2 = bStack_148 == 1;
    if ((bool)uVar2) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
      func_0x000107397134();
      if (extraout_x8_00 == 0) {
        auStack_180[0] = 0;
        bStack_168 = 0;
      }
      else {
        func_0x0001073971e0(auStack_180);
      }
      func_0x00010739714c();
      if ((bStack_168 & 1) == 0) {
        uVar5 = 0;
      }
      else {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
        func_0x000107397134();
        if (extraout_x8_01 == 0) {
          auStack_1a0[0] = 0;
          bStack_188 = 0;
        }
        else {
          func_0x0001073971e0(auStack_1a0);
        }
        func_0x00010739714c();
        if ((bStack_188 & 1) == 0) {
          uVar5 = 0;
        }
        else {
          func_0x0001072ab9cc(auStack_1b8,param_3);
          func_0x00010028af84(&uStack_238,auStack_160);
          lStack_218 = param_1;
          func_0x00010028af84(&uStack_210,auStack_180);
          func_0x00010028af84(&uStack_1f0,auStack_1a0);
          func_0x0001072ab9cc(&uStack_1d0,auStack_1b8);
          puVar3 = (undefined8 *)0x88;
          __Znwm();
          *puVar3 = &PTR_SUB_1109a9060;
          *(undefined1 *)(puVar3 + 1) = 0;
          *(undefined1 *)(puVar3 + 4) = 0;
          if (cStack_220 == '\x01') {
            puVar3[2] = uStack_230;
            puVar3[1] = uStack_238;
            puVar3[3] = uStack_228;
            uStack_230 = 0;
            uStack_228 = 0;
            uStack_238 = 0;
            *(undefined1 *)(puVar3 + 4) = 1;
          }
          *(undefined1 *)(puVar3 + 6) = 0;
          puVar3[5] = lStack_218;
          *(undefined1 *)(puVar3 + 9) = 0;
          if (cStack_1f8 == '\x01') {
            puVar3[7] = uStack_208;
            puVar3[6] = uStack_210;
            puVar3[8] = uStack_200;
            uStack_208 = 0;
            uStack_200 = 0;
            uStack_210 = 0;
            *(undefined1 *)(puVar3 + 9) = 1;
          }
          *(undefined1 *)(puVar3 + 10) = 0;
          *(undefined1 *)(puVar3 + 0xd) = 0;
          if (cStack_1d8 == '\x01') {
            puVar3[0xb] = uStack_1e8;
            puVar3[10] = uStack_1f0;
            puVar3[0xc] = uStack_1e0;
            uStack_1e8 = 0;
            uStack_1e0 = 0;
            uStack_1f0 = 0;
            *(undefined1 *)(puVar3 + 0xd) = 1;
          }
          *(undefined1 *)(puVar3 + 0xe) = 0;
          *(undefined1 *)(puVar3 + 0x10) = 0;
          uVar2 = cStack_1c0 == '\x01';
          if ((bool)uVar2) {
            puVar3[0xf] = uStack_1c8;
            puVar3[0xe] = uStack_1d0;
            uStack_1d0 = 0;
            uStack_1c8 = 0;
            *(undefined1 *)(puVar3 + 0x10) = 1;
          }
          puStack_b0 = puVar3;
          FUN_10739654c(&uStack_238);
          if ((bStack_148 & 1) == 0) goto LAB_1073963f8;
          plVar6 = *(long **)(param_1 + 0x18);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (auStack_e0,auStack_160);
          func_0x0001000e3098(auStack_250,auStack_e0,1);
          func_0x0001072715c0(auStack_140,auStack_c8);
          uStack_118 = *(undefined8 *)(param_1 + 0x38);
          uStack_120 = *(undefined8 *)(param_1 + 0x30);
          if (*(long *)(param_1 + 0x38) != 0) {
            do {
              func_0x000107397154();
            } while (extraout_w10 != 0);
          }
          uStack_110 = *(undefined8 *)(param_1 + 0x40);
          uStack_58 = 0;
          uStack_50 = 0;
          uStack_90 = 0;
          uStack_88 = 0;
          func_0x00010725b1d4(&uStack_90);
          func_0x00010725b1d4(&uStack_58);
          func_0x0001072715c0(auStack_108,auStack_140);
          func_0x0001072712d8(auStack_a8,1);
          puVar3 = puStack_98;
          puStack_98[2] = 0;
          *puStack_98 = &PTR_DAT_110996168;
          puStack_98[1] = 0;
          FUN_107396e98(&uStack_90,&uStack_120);
          lStack_40 = 0;
          puVar4 = (undefined8 *)0x40;
          __Znwm();
          func_0x000107397198();
          *puVar4 = extraout_x8_02;
          FUN_107396e98(puVar4 + 1,&uStack_90);
          lStack_40 = param_1;
          func_0x00010727157c(puVar3 + 3,&uStack_58);
          func_0x00010727163c(&uStack_58);
          FUN_10739659c(&uStack_90);
          puVar3 = puStack_98;
          puStack_98 = (undefined8 *)0x0;
          func_0x00010727167c(auStack_a8);
          puStack_258 = puVar3;
          uStack_270 = 0;
          uStack_268 = 0;
          puStack_260 = puVar3 + 3;
          (**(code **)(*plVar6 + 0x10))(plVar6,auStack_250,&puStack_260);
          func_0x0001072716b0(&puStack_260);
          func_0x00010727168c(&uStack_270);
          FUN_10739659c(&uStack_120);
          func_0x00010727163c(auStack_140);
          func_0x0001000e30f4(auStack_250);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e0);
          func_0x00010727163c(auStack_c8);
          func_0x000107279298(auStack_1b8);
          uVar5 = 1;
        }
        func_0x0001001148fc(auStack_1a0);
      }
      func_0x0001001148fc(auStack_180);
    }
    else {
      uVar5 = 0;
    }
    func_0x0001001148fc(auStack_160);
  }
  else {
    uVar5 = 0;
  }
  func_0x0001073971e8(uStack_38);
  if ((bool)uVar2) {
    return uVar5;
  }
  ___stack_chk_fail();
LAB_1073963f8:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x107396400);
  (*pcVar1)();
}


