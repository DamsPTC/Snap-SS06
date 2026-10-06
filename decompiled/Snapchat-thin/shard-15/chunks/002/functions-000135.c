/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b8e7e38; end: 10b8e7ea7;  */

void FUN_10b8e7e38(void)

{
  long alStack_80 [5];
  undefined1 auStack_58 [8];
  code *pcStack_50;
  
  FUN_10b8e99f0(alStack_80,&UNK_10f7cbcbe);
  FUN_10b8e97dc(auStack_58,alStack_80);
  FUN_10b8de32c(alStack_80);
  pcStack_50 = FUN_10b8e7ea8;
  func_0x00010b8e9ce0();
  if (alStack_80[0] != 0) {
    func_0x00010b8e9c00();
  }
  FUN_10b8de32c(auStack_58);
  return;
}



/* Entry: 10b8e7ea8; end: 10b8e8047;  */

void FUN_10b8e7ea8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long *plVar5;
  code *extraout_x9;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  
  func_0x00010b8e9bb4();
  uStack_48 = extraout_x8;
  FUN_10b8e8048(&puStack_90);
  FUN_10b8e8048(&uStack_98);
  puVar3 = puStack_90;
  uVar8 = uStack_98;
  FUN_10b8e61dc(puStack_90,uStack_98);
  FUN_10b8e61dc(uVar8,puVar3);
  FUN_10b8e7b54(auStack_68,*param_3,param_3[3],&puStack_90);
  if ((*(byte *)(param_3[3] + 8) & 1) == 0) {
    *param_1 = 0;
    goto LAB_10b8e8008;
  }
  FUN_10b8e7b54(auStack_88,*param_3,param_3[3],&uStack_98);
  lVar6 = param_3[3];
  puVar3 = param_3;
  if ((*(byte *)(lVar6 + 8) & 1) == 0) {
LAB_10b8e7ff8:
    *param_1 = 0;
  }
  else {
    puVar3 = param_3 + 4;
    plVar7 = (long *)*param_3;
    puStack_a8 = &UNK_10f7cbccd;
    uStack_a0 = 5;
    func_0x00010b8e9f4c();
    (*extraout_x9)();
    puStack_a8 = &UNK_10f7cbcd3;
    uStack_a0 = 5;
    func_0x00010b8e9f4c(*(undefined8 *)(*plVar7 + 0xf0));
    (*extraout_x8_00)();
    if ((*(byte *)(lVar6 + 8) & 1) == 0) goto LAB_10b8e7ff8;
    plVar7 = (long *)0x10;
    __Znwm();
    plVar5 = plVar7 + 1;
    *plVar5 = 1;
    *plVar7 = (long)&PTR_DAT_110d73280;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *param_1 = plVar7;
    do {
      in_ZR = *plVar5 + -1 == 0;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  func_0x0001080e0bc0(auStack_88);
  param_3 = puVar3;
  puVar3 = puStack_90;
  uVar8 = uStack_98;
LAB_10b8e8008:
  func_0x0001080e0bc0(auStack_68);
  FUN_10b8e8a18(uVar8);
  FUN_10b8e8a18();
  func_0x00010b8e9b84(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_10b8e8048;
  puVar4 = (undefined8 *)0x100;
  puStack_d0 = param_3;
  puStack_c8 = param_1;
  puStack_c0 = &stack0xfffffffffffffff0;
  __Znwm();
  plVar7 = puVar4 + 1;
  *plVar7 = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110d731e8;
  _bzero(puVar4 + 4,0xe0);
  puVar9 = puVar4 + 3;
  *puVar9 = &PTR_DAT_110d73238;
  puVar4[6] = 0x32aaaba7;
  _bzero(puVar4 + 7,0xa9);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = *plVar7 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puStack_f0 = puVar9;
  puStack_e8 = puVar4;
  func_0x000107c278e4(puVar4 + 4,&puStack_f0);
  func_0x000107c284e8(&puStack_f0);
  *puVar3 = puVar9;
  return;
}



/* Entry: 10b8e8048; end: 10b8e80ef;  */

void FUN_10b8e8048(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  puVar3 = (undefined8 *)0x100;
  __Znwm();
  plVar4 = puVar3 + 1;
  *plVar4 = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_110d731e8;
  _bzero(puVar3 + 4,0xe0);
  puVar5 = puVar3 + 3;
  *puVar5 = &PTR_DAT_110d73238;
  puVar3[6] = 0x32aaaba7;
  _bzero(puVar3 + 7,0xa9);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puStack_40 = puVar5;
  puStack_38 = puVar3;
  func_0x000107c278e4(puVar3 + 4,&puStack_40);
  func_0x000107c284e8(&puStack_40);
  *param_1 = puVar5;
  return;
}



/* Entry: 10b8e80f0; end: 10b8e828b;  */

long * FUN_10b8e80f0(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined1 in_ZR;
  long *plVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  long lStack_d8;
  long alStack_d0 [2];
  long lStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long alStack_a0 [5];
  code *pcStack_78;
  undefined **ppuStack_70;
  long *plStack_68;
  undefined8 uStack_48;
  
  func_0x00010b8e9bb4();
  uStack_48 = extraout_x8;
  if (*param_2 != 0) {
    func_0x00010b8e1148(alStack_d0,*param_2 + 0x10);
    if (alStack_d0[0] != 0) {
      FUN_10b8e9b20();
      lStack_c0 = *param_2;
      lStack_d8 = *(long *)(lStack_c0 + 8);
      if ((lStack_d8 != 0) && (*(long *)(lStack_d8 + 0x10) != 0)) {
        do {
          func_0x00010b8e9da4();
        } while (extraout_w11 != 0);
        lStack_c0 = *param_2;
        lStack_d8 = extraout_x8_00;
      }
      lStack_b8 = param_2[1];
      if (lStack_b8 != 0) {
        do {
          func_0x00010b8e9c0c();
        } while (extraout_w10 != 0);
      }
      if ((param_1 != (long *)0x0) && (param_1[2] != 0)) {
        do {
          func_0x00010b8e9c0c();
        } while (extraout_w10_00 != 0);
      }
      lStack_a8 = *param_3;
      plStack_b0 = param_1;
      (**(code **)(param_3[1] + 0x10))(alStack_a0,param_3 + 1);
      pcStack_78 = FUN_10b8e8884;
      ppuStack_70 = &PTR_FUN_110d730a0;
      plVar2 = (long *)0x48;
      __Znwm();
      plVar2[1] = lStack_b8;
      *plVar2 = lStack_c0;
      if (lStack_b8 != 0) {
        do {
          func_0x00010b8e9c0c();
        } while (extraout_w10_01 != 0);
      }
      plVar1 = plStack_b0;
      plStack_b0 = (long *)0x0;
      plVar2[2] = (long)plVar1;
      plVar2[3] = lStack_a8;
      (**(code **)(alStack_a0[0] + 0x10))(plVar2 + 4,alStack_a0);
      plStack_68 = plVar2;
      func_0x0001080d3888(alStack_d0[0],&lStack_d8,&pcStack_78);
      (*(code *)*ppuStack_70)(&ppuStack_70);
      FUN_10b8e828c(&lStack_c0);
      func_0x000105276914(lStack_d8);
      FUN_10b8e8dec(param_1);
    }
    param_1 = alStack_d0;
    func_0x00010b8e0a68();
  }
  func_0x00010b8e9b84(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    (**(code **)param_1[4])();
    func_0x00010b8e8dc8(param_1 + 2);
    if (param_1[1] != 0) {
      func_0x000107c27b90();
    }
    return param_1;
  }
  return param_1;
}



/* Entry: 10b8e828c; end: 10b8e82bf;  */

long FUN_10b8e828c(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 0x20))();
  func_0x00010b8e8dc8(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c27b90();
  }
  return param_1;
}



/* Entry: 10b8e82c0; end: 10b8e82c3;  */

long FUN_10b8e82c0(long param_1)

{
  func_0x00010b8e87a4(param_1 + 0x40);
  func_0x00010b8e87e4(param_1 + 0x28);
  FUN_10b9a8d98(param_1 + 0x18);
  func_0x00010b8e9e90();
  return param_1;
}



/* Entry: 10b8e82c4; end: 10b8e82d7;  */

void FUN_10b8e82c4(void)

{
  func_0x00010b8e9b4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8e82d8; end: 10b8e8333;  */

void FUN_10b8e82d8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lStack_28;
  
  lStack_28 = 0;
  __ZNSt3__15mutex4lockEv(*(long *)(param_2 + 0x10) + 0x18);
  lVar1 = *(long *)(param_2 + 0x10);
  if (((*(byte *)(lVar1 + 0xe1) & 1) == 0) && (*(long *)(lVar1 + 0xc0) == 0)) {
    func_0x000107c27d74(&lStack_28,lVar1 + 0x90);
  }
  func_0x00010b8e9f28();
  if (lStack_28 != 0) {
    func_0x00010b8e9c00();
  }
  return;
}



/* Entry: 10b8e8334; end: 10b8e838b;  */

undefined8 * FUN_10b8e8334(long param_1)

{
  FUN_10b8e8a18(*(undefined8 *)(param_1 + 8));
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 10b8e838c; end: 10b8e8533;  */

undefined8 * FUN_10b8e838c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 in_ZR;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 extraout_x8;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010b8e9bb4();
  lVar2 = *(long *)(param_2 + 0x10);
  lVar3 = *(long *)(param_2 + 0x18);
  puVar1 = (undefined8 *)(lVar2 + 0x18);
  uStack_48 = extraout_x8;
  __ZNSt3__15mutex4lockEv(puVar1);
  if (((((*(byte *)(lVar2 + 0xe1) & 1) == 0) && (in_ZR = 0, lVar3 == *(long *)(lVar2 + 0xd8))) &&
      (bVar4 = *(char *)(lVar2 + 0xd0) == '\x01', bVar5 = *(long *)(lVar2 + 200) == lVar3,
      in_ZR = bVar4 && bVar5, bVar4 && bVar5)) &&
     ((in_ZR = *(char *)(lVar2 + 0xe0) == '\x01', (bool)in_ZR && (*(long *)(lVar2 + 0xc0) != 0)))) {
    *(undefined1 *)(lVar2 + 0xd0) = 0;
    func_0x00010b8e9ddc(&puStack_68);
    puVar8 = puStack_68;
    puStack_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    func_0x00010b8e8ae0(&puStack_68);
    if (puVar8 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)
               (*(long *)(*(long *)(lVar2 + 0xa0) + (*(ulong *)(lVar2 + 0xb8) >> 9) * 8) +
               (*(ulong *)(lVar2 + 0xb8) & 0x1ff) * 8);
      uVar9 = *puVar6;
      *puVar6 = 0;
      func_0x00010b8e8dc8();
      uVar10 = *(long *)(lVar2 + 0xb8) + 1;
      *(long *)(lVar2 + 0xc0) = *(long *)(lVar2 + 0xc0) + -1;
      *(ulong *)(lVar2 + 0xb8) = uVar10;
      in_ZR = uVar10 == 0x400;
      if (0x3ff < uVar10) {
        __ZdlPv(**(undefined8 **)(lVar2 + 0xa0));
        *(long *)(lVar2 + 0xa0) = *(long *)(lVar2 + 0xa0) + 8;
        *(long *)(lVar2 + 0xb8) = *(long *)(lVar2 + 0xb8) + -0x200;
      }
      __ZNSt3__15mutex6unlockEv(puVar1);
      func_0x00010b8e6bdc(&puStack_68,puVar8);
      if (puStack_68 != (undefined8 *)0x0) {
        uVar7 = *param_1;
        puVar6 = puStack_68;
        FUN_10b8e129c(puStack_68,uVar7,param_1[1]);
        puStack_58 = puVar6;
        uStack_50 = uVar7;
        func_0x00010b8e9dfc(param_1[1]);
        if ((bool)in_ZR) {
          FUN_10b8e6c24(uVar9,param_1,&puStack_58);
        }
      }
      FUN_10b8e552c(&puStack_68);
      uStack_60 = CONCAT71(uStack_60._1_7_,1);
      puStack_68 = puVar1;
      __ZNSt3__15mutex4lockEv(puVar1);
      FUN_10b8e6448(lVar2,&puStack_68);
      func_0x0001080eb338(&puStack_68);
      goto LAB_10b8e850c;
    }
  }
  __ZNSt3__15mutex6unlockEv(puVar1);
  puVar8 = (undefined8 *)0x0;
  uVar9 = 0;
LAB_10b8e850c:
  FUN_10b8e8dec(uVar9);
  FUN_10b8e8b28();
  func_0x00010b8e9b84(uStack_48);
  if ((bool)in_ZR) {
    return puVar8;
  }
  ___stack_chk_fail();
  FUN_10b8e8a18(puVar8[1]);
  return puVar8 + 1;
}



/* Entry: 10b8e8534; end: 10b8e8593;  */

undefined8 * FUN_10b8e8534(long param_1)

{
  FUN_10b8e8a18(*(undefined8 *)(param_1 + 8));
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 10b8e8594; end: 10b8e85d3;  */

void FUN_10b8e8594(long param_1)

{
  long extraout_x9;
  long lVar1;
  long extraout_x9_00;
  long unaff_x22;
  
  func_0x00010b8e9c58();
  lVar1 = extraout_x9;
  while (lVar1 != unaff_x22) {
    func_0x00010b8e9e40();
    lVar1 = extraout_x9_00;
  }
  for (; param_1 != unaff_x22; param_1 = param_1 + 8) {
    func_0x00010b8e8b04();
  }
  func_0x00010b8e9bc4();
  return;
}



/* Entry: 10b8e85d4; end: 10b8e8643;  */

long * FUN_10b8e85d4(long *param_1)

{
  long lVar1;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    func_0x00010b8e9cc8();
    return param_1;
  }
  func_0x000104bfe188();
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -8;
    func_0x00010b8e8b04();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b8e8644; end: 10b8e8683;  */

void FUN_10b8e8644(long param_1)

{
  long extraout_x9;
  long lVar1;
  long extraout_x9_00;
  long unaff_x22;
  
  func_0x00010b8e9c58();
  lVar1 = extraout_x9;
  while (lVar1 != unaff_x22) {
    func_0x00010b8e9e40();
    lVar1 = extraout_x9_00;
  }
  for (; param_1 != unaff_x22; param_1 = param_1 + 8) {
    func_0x000104bddedc();
  }
  func_0x00010b8e9bc4();
  return;
}



/* Entry: 10b8e8684; end: 10b8e86f3;  */

long * FUN_10b8e8684(long *param_1)

{
  long lVar1;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    func_0x00010b8e9cc8();
    return param_1;
  }
  func_0x000104bfe188();
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -8;
    func_0x000104bddedc();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b8e86f4; end: 10b8e8733;  */

void FUN_10b8e86f4(long param_1)

{
  long extraout_x9;
  long lVar1;
  long extraout_x9_00;
  long unaff_x22;
  
  func_0x00010b8e9c58();
  lVar1 = extraout_x9;
  while (lVar1 != unaff_x22) {
    func_0x00010b8e9e40();
    lVar1 = extraout_x9_00;
  }
  for (; param_1 != unaff_x22; param_1 = param_1 + 8) {
    FUN_10b8e89f4();
  }
  func_0x00010b8e9bc4();
  return;
}



/* Entry: 10b8e8734; end: 10b8e8823;  */

long * FUN_10b8e8734(long *param_1)

{
  long lVar1;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    func_0x00010b8e9cc8();
    return param_1;
  }
  func_0x000104bfe188();
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -8;
    FUN_10b8e89f4();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b8e8824; end: 10b8e8883;  */

void FUN_10b8e8824(void)

{
  return;
}



/* Entry: 10b8e8884; end: 10b8e88fb;  */

void FUN_10b8e8884(undefined8 *param_1,long param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  long *plVar3;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010b8e9bb4();
  plVar3 = *(long **)(param_2 + 0x10);
  plVar1 = plVar3 + 3;
  uStack_28 = extraout_x8;
  (*(code *)*plVar1)();
  if ((int)plVar1 != 0) {
    plVar1 = (long *)*plVar3;
    uVar2 = *param_1;
    FUN_10b8e129c(plVar1,uVar2,param_1[1]);
    lStack_38 = (long)plVar1;
    uStack_30 = uVar2;
    func_0x00010b8e9dfc(param_1[1]);
    if ((bool)in_ZR) {
      plVar1 = (long *)plVar3[2];
      FUN_10b8e6c24(plVar1,param_1,&lStack_38);
    }
  }
  func_0x00010b8e9b84(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)((long)plVar1 + 8) != 0) {
    FUN_10b8e828c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8e88fc; end: 10b8e891b;  */

void FUN_10b8e88fc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b8e828c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8e891c; end: 10b8e8933;  */

void FUN_10b8e891c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b8e8934; end: 10b8e89c7;  */

void FUN_10b8e8934(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long extraout_x8;
  int extraout_w10;
  int extraout_w11;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_FUN_110d730a0;
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  lVar2 = puVar3[1];
  uVar4 = *puVar3;
  puVar1[1] = puVar3[1];
  *puVar1 = uVar4;
  if (lVar2 != 0) {
    do {
      func_0x00010b8e9c0c();
    } while (extraout_w10 != 0);
  }
  lVar2 = puVar3[2];
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
    do {
      func_0x00010b8e9da4();
      lVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  puVar1[2] = lVar2;
  puVar1[3] = puVar3[3];
  (**(code **)(puVar3[4] + 0x18))(puVar1 + 4,puVar3 + 4);
  param_1[1] = puVar1;
  return;
}



/* Entry: 10b8e89c8; end: 10b8e89f3;  */

void FUN_10b8e89c8(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010b8e89ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b8e89f4; end: 10b8e8a17;  */

undefined8 * FUN_10b8e89f4(undefined8 *param_1)

{
  FUN_10b8e8a18(*param_1);
  return param_1;
}



/* Entry: 10b8e8a18; end: 10b8e8a23;  */

void FUN_10b8e8a18(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b8e8a24; end: 10b8e8a47;  */

void FUN_10b8e8a24(long param_1)

{
  func_0x00010b8e9e78();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10b8e8a48; end: 10b8e8a4f;  */

void FUN_10b8e8a48(undefined8 *param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x0001080d486c(&uStack_30,*param_2);
  param_1[1] = lStack_28;
  *param_1 = uStack_30;
  if (lStack_28 != 0) {
    do {
      func_0x00010b8e9c0c();
    } while (extraout_w10 != 0);
  }
  func_0x0001080d3308(&uStack_30);
  return;
}



/* Entry: 10b8e8a50; end: 10b8e8b27;  */

void FUN_10b8e8a50(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x0001080d486c(&uStack_30);
  param_1[1] = lStack_28;
  *param_1 = uStack_30;
  if (lStack_28 != 0) {
    do {
      func_0x00010b8e9c0c();
    } while (extraout_w10 != 0);
  }
  func_0x0001080d3308(&uStack_30);
  return;
}



/* Entry: 10b8e8b28; end: 10b8e8b33;  */

void FUN_10b8e8b28(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b8e8b34; end: 10b8e8bbb;  */

void FUN_10b8e8b34(void)

{
  func_0x00010b8e9f1c();
  return;
}



/* Entry: 10b8e8bbc; end: 10b8e8bdb;  */

undefined8 * FUN_10b8e8bbc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d719e8;
  func_0x00010b949adc(param_1[1] + 0x120,param_1);
  if (param_1[2] != 0) {
    func_0x00010b8c3c74();
  }
  func_0x0001052768f0(param_1 + 1);
  return param_1;
}



/* Entry: 10b8e8bdc; end: 10b8e8bff;  */

void FUN_10b8e8bdc(long param_1)

{
  func_0x00010b8e9e78();
  if (param_1 != 0) {
    func_0x000107c27b90();
  }
  return;
}



/* Entry: 10b8e8c00; end: 10b8e8c2f;  */

long FUN_10b8e8c00(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    uVar1 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
    return *(long *)(*(long *)(param_1 + 8) + (uVar1 >> 9) * 8) + (uVar1 & 0x1ff) * 8;
  }
  return 0;
}



/* Entry: 10b8e8c30; end: 10b8e8c5b;  */

ulong * FUN_10b8e8c30(ulong *param_1)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 unaff_x20;
  ulong uVar8;
  ulong uVar9;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong *puStack_70;
  
  if ((param_1 != (ulong *)0x0) &&
     (puVar3 = param_1, func_0x00010b8e9ed0(), ((ulong)puVar3 & 1) == 0)) {
    FUN_10b9a5890();
    puVar4 = &uStack_90;
    func_0x00010b8e9e84();
    puStack_70 = puVar3 + 3;
    puVar6 = (undefined8 *)puVar3[2];
    if (puVar6 == (undefined8 *)*puStack_70) {
      uVar8 = *param_1;
      uVar5 = param_1[1];
      if (uVar5 < uVar8 || uVar5 - uVar8 == 0) {
        uVar7 = (long)((long)puVar6 - uVar8) >> 2;
        if ((long)puVar6 - uVar8 == 0) {
          uVar7 = 1;
        }
        uVar8 = uVar7;
        FUN_10b8e8d60();
        uStack_88 = uVar8 + (uVar7 >> 2) * 8;
        uStack_78 = uVar8 + uVar5 * 8;
        uStack_90 = uVar8;
        uStack_80 = uStack_88;
        FUN_10b8e8d38(&uStack_90,param_1[1],param_1[2]);
        uVar5 = param_1[1];
        uVar8 = *param_1;
        uVar9 = param_1[3];
        uVar7 = param_1[2];
        param_1[1] = uStack_88;
        *param_1 = uStack_90;
        param_1[3] = uStack_78;
        param_1[2] = uStack_80;
        uStack_90 = uVar8;
        uStack_88 = uVar5;
        uStack_80 = uVar7;
        uStack_78 = uVar9;
        func_0x00010b8e8d88(&uStack_90);
        puVar6 = (undefined8 *)param_1[2];
        puVar3 = puVar4;
      }
      else {
        lVar1 = (((long)(uVar5 - uVar8) >> 3) + 1) / -2;
        puVar4 = (ulong *)(uVar5 + lVar1 * 8);
        lVar2 = (long)puVar6 - uVar5;
        if (lVar2 != 0) {
          puVar3 = puVar4;
          _memmove(puVar4,uVar5,lVar2);
          uVar5 = param_1[1];
        }
        puVar6 = (undefined8 *)((long)puVar4 + lVar2);
        param_1[1] = uVar5 + lVar1 * 8;
      }
    }
    *puVar6 = unaff_x20;
    param_1[2] = (ulong)(puVar6 + 1);
    return puVar3;
  }
  return param_1;
}



/* Entry: 10b8e8c5c; end: 10b8e8d37;  */

void FUN_10b8e8c5c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  
  func_0x00010b8e9e84();
  puStack_50 = (ulong *)(param_1 + 0x18);
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if (puVar5 == (undefined8 *)*puStack_50) {
    uVar7 = *unaff_x19;
    uVar4 = unaff_x19[1];
    if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
      uVar6 = (long)((long)puVar5 - uVar7) >> 2;
      if ((long)puVar5 - uVar7 == 0) {
        uVar6 = 1;
      }
      uVar7 = uVar6;
      FUN_10b8e8d60();
      uStack_68 = uVar7 + (uVar6 >> 2) * 8;
      uStack_58 = uVar7 + uVar4 * 8;
      uStack_70 = uVar7;
      uStack_60 = uStack_68;
      FUN_10b8e8d38(&uStack_70,unaff_x19[1],unaff_x19[2]);
      uVar4 = unaff_x19[1];
      uVar7 = *unaff_x19;
      uVar8 = unaff_x19[3];
      uVar6 = unaff_x19[2];
      unaff_x19[1] = uStack_68;
      *unaff_x19 = uStack_70;
      unaff_x19[3] = uStack_58;
      unaff_x19[2] = uStack_60;
      uStack_70 = uVar7;
      uStack_68 = uVar4;
      uStack_60 = uVar6;
      uStack_58 = uVar8;
      func_0x00010b8e8d88(&uStack_70);
      puVar5 = (undefined8 *)unaff_x19[2];
    }
    else {
      lVar2 = (((long)(uVar4 - uVar7) >> 3) + 1) / -2;
      lVar1 = uVar4 + lVar2 * 8;
      lVar3 = (long)puVar5 - uVar4;
      if (lVar3 != 0) {
        _memmove(lVar1,uVar4,lVar3);
        uVar4 = unaff_x19[1];
      }
      puVar5 = (undefined8 *)(lVar1 + lVar3);
      unaff_x19[1] = uVar4 + lVar2 * 8;
    }
  }
  *puVar5 = unaff_x20;
  unaff_x19[2] = (ulong)(puVar5 + 1);
  return;
}



/* Entry: 10b8e8d38; end: 10b8e8d5f;  */

void FUN_10b8e8d38(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10b8e8d60; end: 10b8e8deb;  */

long * FUN_10b8e8d60(long *param_1)

{
  long lVar1;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    func_0x00010b8e9cc8();
    return param_1;
  }
  func_0x000104bfe188();
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -8;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b8e8dec; end: 10b8e8df7;  */

void FUN_10b8e8dec(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b8e8df8; end: 10b8e8e3b;  */

long * FUN_10b8e8df8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b8e8e3c; end: 10b8e8e57;  */

void FUN_10b8e8e3c(long *param_1,long param_2)

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



/* Entry: 10b8e8e58; end: 10b8e8e6b;  */

void FUN_10b8e8e58(void)

{
  func_0x00010b8e8e78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8e8e6c; end: 10b8e8e83;  */

long FUN_10b8e8e6c(long param_1)

{
  func_0x00010b8e87a4(param_1 + 0x58);
  func_0x00010b8e87e4(param_1 + 0x40);
  FUN_10b9a8d98(param_1 + 0x30);
  func_0x00010b8e9e90();
  return param_1 + 0x18;
}



/* Entry: 10b8e8e84; end: 10b8e8ec7;  */

void FUN_10b8e8e84(void)

{
  int extraout_w11;
  undefined8 uStack_28;
  
  func_0x00010b8e9e10();
  if (uStack_28 == 0) {
    uStack_28 = 0;
  }
  else {
    do {
      func_0x00010b8e9e30();
    } while (extraout_w11 != 0);
  }
  func_0x00010b8e9d88(uStack_28);
  return;
}



/* Entry: 10b8e8ec8; end: 10b8e8f23;  */

undefined8 *
FUN_10b8e8ec8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,long param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 in_ZR;
  long *plVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long extraout_x8_01;
  long lVar15;
  undefined8 *puVar16;
  int extraout_w11;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 uStack_288;
  undefined8 uStack_238;
  undefined2 uStack_230;
  undefined8 uStack_228;
  undefined2 uStack_220;
  undefined8 uStack_218;
  undefined2 uStack_210;
  undefined8 uStack_208;
  undefined2 uStack_200;
  undefined8 *puStack_1f8;
  undefined1 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined1 auStack_108 [80];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_38;
  
  puVar10 = param_3;
  puVar11 = param_5;
  func_0x00010b8e9b98();
  func_0x00010b8e9c7c();
  func_0x00010b8e9d7c();
  func_0x00010b8e9cd4();
  func_0x00010b8e9e08();
  func_0x00010b8e9b84(uStack_38);
  if ((bool)in_ZR) {
    return param_5;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_10b8e8f24;
  lStack_b0 = param_4;
  puStack_a8 = param_5;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010b8e9bb4();
  uStack_b8 = extraout_x8;
  FUN_10b8de54c(auStack_108);
  puVar8 = auStack_108;
  func_0x00010b8de354(param_1,puVar8);
  func_0x00010b8de270(auStack_108);
  func_0x00010b8e9b84(uStack_b8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010b8e9e50();
  func_0x00010b8e9bb4();
  uStack_230 = 0;
  uStack_238 = 0;
  uStack_220 = 0;
  uStack_228 = 0;
  uStack_188 = extraout_x8_00;
  func_0x00010b8e5e04(&puStack_1b0,puVar8,0);
  FUN_10b9a9020(&uStack_238,&puStack_1b0);
  FUN_10b9a8d98(&puStack_1b0);
  func_0x00010b8e9dfc(*(undefined8 *)(param_4 + 0x18));
  if ((bool)in_ZR) {
    func_0x00010b8e5e04(&puStack_1b0,param_4,1);
    FUN_10b9a9020(&uStack_228,&puStack_1b0);
    FUN_10b9a8d98(&puStack_1b0);
    if ((*(byte *)(*(long *)(param_4 + 0x18) + 8) & 1) != 0) {
      uStack_208 = uStack_238;
      uStack_200 = uStack_230;
      uStack_238 = 0;
      uStack_230 = 0;
      uStack_218 = uStack_228;
      uStack_210 = uStack_220;
      uStack_228 = 0;
      uStack_220 = 0;
      puVar7 = param_3;
      FUN_10b8e69b4();
      if (((ulong)puVar7 & 1) != 0) {
        puVar10 = param_3;
        func_0x00010b8e6fa0(&lStack_1c0,&uStack_208,&uStack_218);
        in_ZR = lStack_1c0 == 1;
        if ((bool)in_ZR) {
          lVar17 = param_3[3];
          __ZNSt3__15mutex4lockEv(lVar17 + 0x18);
          lVar15 = lVar17 + 0x60;
          FUN_10b8e6398(&puStack_1b0);
          puVar7 = puStack_1b0;
          puStack_1b0 = (undefined8 *)0x0;
          puStack_1a8 = (undefined8 *)0x0;
          FUN_10b8e8bdc(&puStack_1b0);
          __ZNSt3__15mutex6unlockEv(lVar17 + 0x18);
          if (puVar7 != (undefined8 *)0x0) {
            puVar12 = *(ulong **)(lStack_1b8 + 0x40);
LAB_10b8e90c0:
            in_ZR = puVar12 == *(ulong **)(lStack_1b8 + 0x48);
            if (!(bool)in_ZR) goto code_r0x00010b8e90c8;
            puStack_1f8 = puVar7 + 3;
            uStack_1f0 = 1;
            __ZNSt3__15mutex4lockEv();
            if ((*(byte *)((long)puVar7 + 0xe1) & 1) == 0) {
              puVar16 = (undefined8 *)puVar7[0x14];
              puVar20 = (undefined8 *)puVar7[0x15];
              uVar3 = (long)puVar20 - (long)puVar16;
              lVar17 = 0;
              if (uVar3 != 0) {
                lVar17 = ((long)puVar20 - (long)puVar16) * 0x40 + -1;
              }
              uVar2 = puVar7[0x17];
              in_ZR = 0;
              if (lVar17 == puVar7[0x18] + uVar2) {
                in_ZR = uVar2 - 0x200 == 0;
                if (uVar2 < 0x200) {
                  puVar21 = puVar7 + 0x16;
                  puVar19 = (undefined8 *)*puVar21;
                  puVar18 = (undefined8 *)puVar7[0x13];
                  if (uVar3 < (ulong)((long)puVar19 - (long)puVar18)) {
                    uVar9 = 0x1000;
                    __Znwm();
                    if (puVar19 == puVar20) {
                      in_ZR = 0;
                      if (puVar16 == puVar18) {
                        lVar15 = (long)puVar19 - (long)puVar16 >> 2;
                        in_ZR = puVar20 == puVar16;
                        if ((bool)in_ZR) {
                          lVar15 = 1;
                        }
                        puStack_190 = puVar21;
                        FUN_10b8e8d60();
                        func_0x00010b8e9e60(lVar15 * 2 + 6);
                        puVar10 = (undefined8 *)puVar7[0x15];
                        FUN_10b8e8d38(&puStack_1b0,puVar7[0x14]);
                        puVar20 = (undefined8 *)puVar7[0x14];
                        puVar16 = (undefined8 *)puVar7[0x13];
                        puVar7[0x14] = puStack_1a8;
                        puVar7[0x13] = puStack_1b0;
                        puVar18 = (undefined8 *)puVar7[0x16];
                        puVar21 = (undefined8 *)puVar7[0x15];
                        puVar7[0x16] = puStack_198;
                        puVar7[0x15] = puStack_1a0;
                        puStack_1b0 = puVar16;
                        puStack_1a8 = puVar20;
                        puStack_1a0 = puVar21;
                        puStack_198 = puVar18;
                        func_0x00010b8e9f30();
                        puVar16 = (undefined8 *)puVar7[0x14];
                      }
                      puVar16[-1] = uVar9;
                      puVar7[0x14] = puVar16;
                      goto LAB_10b8e9160;
                    }
                    *puVar20 = uVar9;
                    puVar7[0x15] = puVar20 + 1;
                    in_ZR = 0;
                  }
                  else {
                    puVar13 = (undefined8 *)((long)puVar19 - (long)puVar18 >> 2);
                    if (puVar19 == puVar18) {
                      puVar13 = (undefined8 *)0x1;
                    }
                    puStack_1c8 = puVar21;
                    FUN_10b8e8d60();
                    puVar18 = (undefined8 *)((long)puVar13 + uVar3);
                    puVar19 = puVar13 + lVar15;
                    uVar9 = 0x1000;
                    lVar17 = lVar15;
                    puStack_1e8 = puVar13;
                    puStack_1e0 = puVar18;
                    puStack_1d0 = puVar19;
                    __Znwm();
                    puVar14 = puVar18;
                    if (uVar3 == lVar15 * 8) {
                      if (puVar20 == puVar16) {
                        puVar16 = (undefined8 *)0x1;
                        puStack_190 = puVar21;
                        FUN_10b8e8d60();
                        puStack_198 = puVar16 + lVar17;
                        puVar10 = puVar18;
                        puStack_1b0 = puVar16;
                        puStack_1a8 = puVar16;
                        puStack_1a0 = puVar16;
                        FUN_10b8e8d38(&puStack_1b0,puVar18);
                        puVar1 = puStack_198;
                        puVar14 = puStack_1a0;
                        puVar20 = puStack_1a8;
                        puVar16 = puStack_1b0;
                        puStack_1e8 = puStack_1b0;
                        puStack_1e0 = puStack_1a8;
                        puStack_1d0 = puStack_198;
                        puStack_1b0 = puVar13;
                        puStack_1a8 = puVar18;
                        puStack_1a0 = puVar18;
                        puStack_198 = puVar19;
                        func_0x00010b8e9f30();
                        puVar19 = puVar1;
                        puVar13 = puVar16;
                        puVar18 = puVar20;
                      }
                      else {
                        puVar18 = puVar18 + (((long)puVar18 - (long)puVar13 >> 3) + 1) / -2;
                        puVar14 = puVar18;
                        puStack_1e0 = puVar18;
                      }
                    }
                    puVar16 = puVar14 + 1;
                    *puVar14 = uVar9;
                    puVar20 = (undefined8 *)puVar7[0x15];
                    puStack_1d8 = puVar16;
                    while( true ) {
                      puVar14 = (undefined8 *)puVar7[0x14];
                      in_ZR = puVar20 == puVar14;
                      if ((bool)in_ZR) break;
                      puVar14 = puVar18;
                      if (puVar18 == puVar13) {
                        if (puVar16 < puVar19) {
                          puVar10 = (undefined8 *)((long)puVar16 - (long)puVar13);
                          puVar1 = puVar16 + (((long)puVar19 - (long)puVar16 >> 3) + 1) / 2;
                          puVar14 = (undefined8 *)((long)puVar1 - ((long)puVar16 - (long)puVar13));
                          puVar16 = puVar1;
                          if (puVar10 != (undefined8 *)0x0) {
                            _memmove(puVar14,puVar18);
                          }
                        }
                        else {
                          lVar15 = (long)puVar19 - (long)puVar13 >> 2;
                          if ((long)puVar19 - (long)puVar13 == 0) {
                            lVar15 = 1;
                          }
                          puStack_190 = puVar21;
                          FUN_10b8e8d60();
                          func_0x00010b8e9e60(lVar15 * 2 + 6);
                          puVar10 = puVar16;
                          FUN_10b8e8d38(&puStack_1b0,puVar13);
                          puVar5 = puStack_198;
                          puVar4 = puStack_1a0;
                          puVar14 = puStack_1a8;
                          puVar1 = puStack_1b0;
                          puStack_1b0 = puVar13;
                          puStack_1a8 = puVar18;
                          puStack_1a0 = puVar16;
                          puStack_198 = puVar19;
                          func_0x00010b8e9f30();
                          puVar19 = puVar5;
                          puVar13 = puVar1;
                          puVar16 = puVar4;
                        }
                      }
                      puVar20 = puVar20 + -1;
                      puVar18 = puVar14 + -1;
                      *puVar18 = *puVar20;
                    }
                    puStack_1e8 = (undefined8 *)puVar7[0x13];
                    puVar7[0x13] = puVar13;
                    puVar7[0x14] = puVar18;
                    puStack_1d0 = (undefined8 *)puVar7[0x16];
                    puStack_1d8 = (undefined8 *)puVar7[0x15];
                    puVar7[0x15] = puVar16;
                    puVar7[0x16] = puVar19;
                    puStack_1e0 = puVar14;
                    func_0x00010b8e8d88(&puStack_1e8);
                  }
                }
                else {
                  puVar7[0x17] = uVar2 - 0x200;
                  uVar9 = *puVar16;
                  puVar7[0x14] = puVar16 + 1;
LAB_10b8e9160:
                  FUN_10b8e8c5c(puVar7 + 0x13,uVar9);
                }
              }
              plVar6 = puVar7 + 0x13;
              FUN_10b8e8c00();
              if ((lStack_1b8 != 0) && (*(long *)(lStack_1b8 + 0x10) != 0)) {
                do {
                  func_0x00010b8e9da4();
                  lStack_1b8 = extraout_x8_01;
                } while (extraout_w11 != 0);
              }
              *plVar6 = lStack_1b8;
              puVar7[0x18] = puVar7[0x18] + 1;
              FUN_10b8e6448(puVar7,&puStack_1f8);
            }
            func_0x0001080eb338(&puStack_1f8);
          }
          goto LAB_10b8e9358;
        }
        func_0x00010b8e5d68(&puStack_1b0,param_4,&lStack_1b8);
        goto LAB_10b8e9368;
      }
      func_0x00010b8e9c38();
      func_0x00010b8e9f38();
      goto LAB_10b8e9370;
    }
  }
  func_0x00010b8e9c38();
  func_0x00010b8e9d04();
LAB_10b8e9394:
  FUN_10b9a8d98(&uStack_228);
  puVar7 = &uStack_238;
  FUN_10b9a8d98();
  func_0x00010b8e9b84(uStack_188);
  if ((bool)in_ZR) {
    return puVar7;
  }
  ___stack_chk_fail();
  func_0x00010b8e9b98();
  func_0x00010b8e9c7c();
  func_0x00010b8e9d7c();
  func_0x00010b8e9cd4();
  func_0x00010b8e9e08();
  func_0x00010b8e9b84(uStack_288);
  if ((bool)in_ZR) {
    return puVar11;
  }
  ___stack_chk_fail();
  func_0x00010b8e9e50();
  FUN_10b8e69b4();
  if ((int)puVar7 != 0) {
    puVar7 = (undefined8 *)puVar10[3];
    func_0x00010b8e63d4(puVar7,puVar10);
  }
  func_0x00010b8e9c38();
  func_0x00010b8e9d04();
  return puVar7;
code_r0x00010b8e90c8:
  puVar16 = (undefined8 *)*puVar12;
  puVar12 = puVar12 + 1;
  if (puVar16 == puVar7) goto code_r0x00010b8e90d4;
  goto LAB_10b8e90c0;
code_r0x00010b8e90d4:
  in_ZR = 1;
LAB_10b8e9358:
  FUN_10b8e8a18(puVar7);
  func_0x00010b8e9c38();
  func_0x00010b8e9f38();
LAB_10b8e9368:
  FUN_10b8e99c8(&lStack_1c0);
LAB_10b8e9370:
  FUN_10b9a8d98(&uStack_218);
  FUN_10b9a8d98(&uStack_208);
  func_0x0001080e08ac(param_1,&puStack_1b0);
  func_0x0001080e0bc0(&puStack_1b0);
  goto LAB_10b8e9394;
}



/* Entry: 10b8e8f24; end: 10b8e8f7f;  */

undefined8 *
FUN_10b8e8f24(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 in_ZR;
  long *plVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long extraout_x8_01;
  long lVar13;
  undefined8 *puVar14;
  int extraout_w11;
  long unaff_x20;
  undefined8 *unaff_x21;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 uStack_1f8;
  undefined8 uStack_1a8;
  undefined2 uStack_1a0;
  undefined8 uStack_198;
  undefined2 uStack_190;
  undefined8 uStack_188;
  undefined2 uStack_180;
  undefined8 uStack_178;
  undefined2 uStack_170;
  undefined8 *puStack_168;
  undefined1 uStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_78 [80];
  undefined8 uStack_28;
  
  func_0x00010b8e9bb4();
  uStack_28 = extraout_x8;
  FUN_10b8de54c(auStack_78);
  puVar8 = auStack_78;
  func_0x00010b8de354(param_1,puVar8);
  func_0x00010b8de270(auStack_78);
  func_0x00010b8e9b84(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010b8e9e50();
  func_0x00010b8e9bb4();
  uStack_1a0 = 0;
  uStack_1a8 = 0;
  uStack_190 = 0;
  uStack_198 = 0;
  uStack_f8 = extraout_x8_00;
  func_0x00010b8e5e04(&puStack_120,puVar8,0);
  FUN_10b9a9020(&uStack_1a8,&puStack_120);
  FUN_10b9a8d98(&puStack_120);
  func_0x00010b8e9dfc(*(undefined8 *)(unaff_x20 + 0x18));
  if ((bool)in_ZR) {
    func_0x00010b8e5e04(&puStack_120);
    FUN_10b9a9020(&uStack_198,&puStack_120);
    FUN_10b9a8d98(&puStack_120);
    if ((*(byte *)(*(long *)(unaff_x20 + 0x18) + 8) & 1) != 0) {
      uStack_178 = uStack_1a8;
      uStack_170 = uStack_1a0;
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      uStack_188 = uStack_198;
      uStack_180 = uStack_190;
      uStack_198 = 0;
      uStack_190 = 0;
      puVar7 = unaff_x21;
      FUN_10b8e69b4();
      if (((ulong)puVar7 & 1) != 0) {
        param_3 = unaff_x21;
        func_0x00010b8e6fa0(&lStack_130,&uStack_178,&uStack_188);
        in_ZR = lStack_130 == 1;
        if ((bool)in_ZR) {
          lVar15 = unaff_x21[3];
          __ZNSt3__15mutex4lockEv(lVar15 + 0x18);
          lVar13 = lVar15 + 0x60;
          FUN_10b8e6398(&puStack_120);
          puVar7 = puStack_120;
          puStack_120 = (undefined8 *)0x0;
          puStack_118 = (undefined8 *)0x0;
          FUN_10b8e8bdc(&puStack_120);
          __ZNSt3__15mutex6unlockEv(lVar15 + 0x18);
          if (puVar7 != (undefined8 *)0x0) {
            puVar10 = *(ulong **)(lStack_128 + 0x40);
LAB_10b8e90c0:
            in_ZR = puVar10 == *(ulong **)(lStack_128 + 0x48);
            if (!(bool)in_ZR) goto code_r0x00010b8e90c8;
            puStack_168 = puVar7 + 3;
            uStack_160 = 1;
            __ZNSt3__15mutex4lockEv();
            if ((*(byte *)((long)puVar7 + 0xe1) & 1) == 0) {
              puVar14 = (undefined8 *)puVar7[0x14];
              puVar18 = (undefined8 *)puVar7[0x15];
              uVar3 = (long)puVar18 - (long)puVar14;
              lVar15 = 0;
              if (uVar3 != 0) {
                lVar15 = ((long)puVar18 - (long)puVar14) * 0x40 + -1;
              }
              uVar2 = puVar7[0x17];
              in_ZR = 0;
              if (lVar15 == puVar7[0x18] + uVar2) {
                in_ZR = uVar2 - 0x200 == 0;
                if (uVar2 < 0x200) {
                  puVar19 = puVar7 + 0x16;
                  puVar17 = (undefined8 *)*puVar19;
                  puVar16 = (undefined8 *)puVar7[0x13];
                  if (uVar3 < (ulong)((long)puVar17 - (long)puVar16)) {
                    uVar9 = 0x1000;
                    __Znwm();
                    if (puVar17 == puVar18) {
                      in_ZR = 0;
                      if (puVar14 == puVar16) {
                        lVar13 = (long)puVar17 - (long)puVar14 >> 2;
                        in_ZR = puVar18 == puVar14;
                        if ((bool)in_ZR) {
                          lVar13 = 1;
                        }
                        puStack_100 = puVar19;
                        FUN_10b8e8d60();
                        func_0x00010b8e9e60(lVar13 * 2 + 6);
                        param_3 = (undefined8 *)puVar7[0x15];
                        FUN_10b8e8d38(&puStack_120,puVar7[0x14]);
                        puVar18 = (undefined8 *)puVar7[0x14];
                        puVar14 = (undefined8 *)puVar7[0x13];
                        puVar7[0x14] = puStack_118;
                        puVar7[0x13] = puStack_120;
                        puVar16 = (undefined8 *)puVar7[0x16];
                        puVar19 = (undefined8 *)puVar7[0x15];
                        puVar7[0x16] = puStack_108;
                        puVar7[0x15] = puStack_110;
                        puStack_120 = puVar14;
                        puStack_118 = puVar18;
                        puStack_110 = puVar19;
                        puStack_108 = puVar16;
                        func_0x00010b8e9f30();
                        puVar14 = (undefined8 *)puVar7[0x14];
                      }
                      puVar14[-1] = uVar9;
                      puVar7[0x14] = puVar14;
                      goto LAB_10b8e9160;
                    }
                    *puVar18 = uVar9;
                    puVar7[0x15] = puVar18 + 1;
                    in_ZR = 0;
                  }
                  else {
                    puVar11 = (undefined8 *)((long)puVar17 - (long)puVar16 >> 2);
                    if (puVar17 == puVar16) {
                      puVar11 = (undefined8 *)0x1;
                    }
                    puStack_138 = puVar19;
                    FUN_10b8e8d60();
                    puVar16 = (undefined8 *)((long)puVar11 + uVar3);
                    puVar17 = puVar11 + lVar13;
                    uVar9 = 0x1000;
                    lVar15 = lVar13;
                    puStack_158 = puVar11;
                    puStack_150 = puVar16;
                    puStack_140 = puVar17;
                    __Znwm();
                    puVar12 = puVar16;
                    if (uVar3 == lVar13 * 8) {
                      if (puVar18 == puVar14) {
                        puVar14 = (undefined8 *)0x1;
                        puStack_100 = puVar19;
                        FUN_10b8e8d60();
                        puStack_108 = puVar14 + lVar15;
                        param_3 = puVar16;
                        puStack_120 = puVar14;
                        puStack_118 = puVar14;
                        puStack_110 = puVar14;
                        FUN_10b8e8d38(&puStack_120,puVar16);
                        puVar1 = puStack_108;
                        puVar12 = puStack_110;
                        puVar18 = puStack_118;
                        puVar14 = puStack_120;
                        puStack_158 = puStack_120;
                        puStack_150 = puStack_118;
                        puStack_140 = puStack_108;
                        puStack_120 = puVar11;
                        puStack_118 = puVar16;
                        puStack_110 = puVar16;
                        puStack_108 = puVar17;
                        func_0x00010b8e9f30();
                        puVar17 = puVar1;
                        puVar11 = puVar14;
                        puVar16 = puVar18;
                      }
                      else {
                        puVar16 = puVar16 + (((long)puVar16 - (long)puVar11 >> 3) + 1) / -2;
                        puVar12 = puVar16;
                        puStack_150 = puVar16;
                      }
                    }
                    puVar14 = puVar12 + 1;
                    *puVar12 = uVar9;
                    puVar18 = (undefined8 *)puVar7[0x15];
                    puStack_148 = puVar14;
                    while( true ) {
                      puVar12 = (undefined8 *)puVar7[0x14];
                      in_ZR = puVar18 == puVar12;
                      if ((bool)in_ZR) break;
                      puVar12 = puVar16;
                      if (puVar16 == puVar11) {
                        if (puVar14 < puVar17) {
                          param_3 = (undefined8 *)((long)puVar14 - (long)puVar11);
                          puVar1 = puVar14 + (((long)puVar17 - (long)puVar14 >> 3) + 1) / 2;
                          puVar12 = (undefined8 *)((long)puVar1 - ((long)puVar14 - (long)puVar11));
                          puVar14 = puVar1;
                          if (param_3 != (undefined8 *)0x0) {
                            _memmove(puVar12,puVar16);
                          }
                        }
                        else {
                          lVar13 = (long)puVar17 - (long)puVar11 >> 2;
                          if ((long)puVar17 - (long)puVar11 == 0) {
                            lVar13 = 1;
                          }
                          puStack_100 = puVar19;
                          FUN_10b8e8d60();
                          func_0x00010b8e9e60(lVar13 * 2 + 6);
                          param_3 = puVar14;
                          FUN_10b8e8d38(&puStack_120,puVar11);
                          puVar5 = puStack_108;
                          puVar4 = puStack_110;
                          puVar12 = puStack_118;
                          puVar1 = puStack_120;
                          puStack_120 = puVar11;
                          puStack_118 = puVar16;
                          puStack_110 = puVar14;
                          puStack_108 = puVar17;
                          func_0x00010b8e9f30();
                          puVar17 = puVar5;
                          puVar11 = puVar1;
                          puVar14 = puVar4;
                        }
                      }
                      puVar18 = puVar18 + -1;
                      puVar16 = puVar12 + -1;
                      *puVar16 = *puVar18;
                    }
                    puStack_158 = (undefined8 *)puVar7[0x13];
                    puVar7[0x13] = puVar11;
                    puVar7[0x14] = puVar16;
                    puStack_140 = (undefined8 *)puVar7[0x16];
                    puStack_148 = (undefined8 *)puVar7[0x15];
                    puVar7[0x15] = puVar14;
                    puVar7[0x16] = puVar17;
                    puStack_150 = puVar12;
                    func_0x00010b8e8d88(&puStack_158);
                  }
                }
                else {
                  puVar7[0x17] = uVar2 - 0x200;
                  uVar9 = *puVar14;
                  puVar7[0x14] = puVar14 + 1;
LAB_10b8e9160:
                  FUN_10b8e8c5c(puVar7 + 0x13,uVar9);
                }
              }
              plVar6 = puVar7 + 0x13;
              FUN_10b8e8c00();
              if ((lStack_128 != 0) && (*(long *)(lStack_128 + 0x10) != 0)) {
                do {
                  func_0x00010b8e9da4();
                  lStack_128 = extraout_x8_01;
                } while (extraout_w11 != 0);
              }
              *plVar6 = lStack_128;
              puVar7[0x18] = puVar7[0x18] + 1;
              FUN_10b8e6448(puVar7,&puStack_168);
            }
            func_0x0001080eb338(&puStack_168);
          }
          goto LAB_10b8e9358;
        }
        func_0x00010b8e5d68(&puStack_120);
        goto LAB_10b8e9368;
      }
      func_0x00010b8e9c38();
      func_0x00010b8e9f38();
      goto LAB_10b8e9370;
    }
  }
  func_0x00010b8e9c38();
  func_0x00010b8e9d04();
LAB_10b8e9394:
  FUN_10b9a8d98(&uStack_198);
  puVar7 = &uStack_1a8;
  FUN_10b9a8d98();
  func_0x00010b8e9b84(uStack_f8);
  if ((bool)in_ZR) {
    return puVar7;
  }
  ___stack_chk_fail();
  func_0x00010b8e9b98();
  func_0x00010b8e9c7c();
  func_0x00010b8e9d7c();
  func_0x00010b8e9cd4();
  func_0x00010b8e9e08();
  func_0x00010b8e9b84(uStack_1f8);
  if ((bool)in_ZR) {
    return param_5;
  }
  ___stack_chk_fail();
  func_0x00010b8e9e50();
  FUN_10b8e69b4();
  if ((int)puVar7 != 0) {
    puVar7 = (undefined8 *)param_3[3];
    func_0x00010b8e63d4(puVar7,param_3);
  }
  func_0x00010b8e9c38();
  func_0x00010b8e9d04();
  return puVar7;
code_r0x00010b8e90c8:
  puVar14 = (undefined8 *)*puVar10;
  puVar10 = puVar10 + 1;
  if (puVar14 == puVar7) goto code_r0x00010b8e90d4;
  goto LAB_10b8e90c0;
code_r0x00010b8e90d4:
  in_ZR = 1;
LAB_10b8e9358:
  FUN_10b8e8a18(puVar7);
  func_0x00010b8e9c38();
  func_0x00010b8e9f38();
LAB_10b8e9368:
  FUN_10b8e99c8(&lStack_130);
LAB_10b8e9370:
  FUN_10b9a8d98(&uStack_188);
  FUN_10b9a8d98(&uStack_178);
  func_0x0001080e08ac(param_1,&puStack_120);
  func_0x0001080e0bc0(&puStack_120);
  goto LAB_10b8e9394;
}



/* Entry: 10b8e8f80; end: 10b8e94a7;  */

undefined8 *
FUN_10b8e8f80(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 in_ZR;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 extraout_x8;
  ulong *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long extraout_x8_00;
  long lVar12;
  undefined8 *puVar13;
  int extraout_w11;
  long unaff_x20;
  undefined8 *unaff_x21;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 uStack_178;
  undefined8 uStack_128;
  undefined2 uStack_120;
  undefined8 uStack_118;
  undefined2 uStack_110;
  undefined8 uStack_108;
  undefined2 uStack_100;
  undefined8 uStack_f8;
  undefined2 uStack_f0;
  undefined8 *puStack_e8;
  undefined1 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  
  func_0x00010b8e9e50();
  func_0x00010b8e9bb4();
  uStack_120 = 0;
  uStack_128 = 0;
  uStack_110 = 0;
  uStack_118 = 0;
  uStack_78 = extraout_x8;
  func_0x00010b8e5e04(&puStack_a0,param_2,0);
  FUN_10b9a9020(&uStack_128,&puStack_a0);
  FUN_10b9a8d98(&puStack_a0);
  func_0x00010b8e9dfc(*(undefined8 *)(unaff_x20 + 0x18));
  if ((bool)in_ZR) {
    func_0x00010b8e5e04(&puStack_a0);
    FUN_10b9a9020(&uStack_118,&puStack_a0);
    FUN_10b9a8d98(&puStack_a0);
    if ((*(byte *)(*(long *)(unaff_x20 + 0x18) + 8) & 1) != 0) {
      uStack_f8 = uStack_128;
      uStack_f0 = uStack_120;
      uStack_128 = 0;
      uStack_120 = 0;
      uStack_108 = uStack_118;
      uStack_100 = uStack_110;
      uStack_118 = 0;
      uStack_110 = 0;
      puVar7 = unaff_x21;
      FUN_10b8e69b4();
      if (((ulong)puVar7 & 1) != 0) {
        param_3 = unaff_x21;
        func_0x00010b8e6fa0(&lStack_b0,&uStack_f8,&uStack_108);
        in_ZR = lStack_b0 == 1;
        if ((bool)in_ZR) {
          lVar14 = unaff_x21[3];
          __ZNSt3__15mutex4lockEv(lVar14 + 0x18);
          lVar12 = lVar14 + 0x60;
          FUN_10b8e6398(&puStack_a0);
          puVar7 = puStack_a0;
          puStack_a0 = (undefined8 *)0x0;
          puStack_98 = (undefined8 *)0x0;
          FUN_10b8e8bdc(&puStack_a0);
          __ZNSt3__15mutex6unlockEv(lVar14 + 0x18);
          if (puVar7 != (undefined8 *)0x0) {
            puVar9 = *(ulong **)(lStack_a8 + 0x40);
LAB_10b8e90c0:
            in_ZR = puVar9 == *(ulong **)(lStack_a8 + 0x48);
            if (!(bool)in_ZR) goto code_r0x00010b8e90c8;
            puStack_e8 = puVar7 + 3;
            uStack_e0 = 1;
            __ZNSt3__15mutex4lockEv();
            if ((*(byte *)((long)puVar7 + 0xe1) & 1) == 0) {
              puVar13 = (undefined8 *)puVar7[0x14];
              puVar17 = (undefined8 *)puVar7[0x15];
              uVar3 = (long)puVar17 - (long)puVar13;
              lVar14 = 0;
              if (uVar3 != 0) {
                lVar14 = ((long)puVar17 - (long)puVar13) * 0x40 + -1;
              }
              uVar2 = puVar7[0x17];
              in_ZR = 0;
              if (lVar14 == puVar7[0x18] + uVar2) {
                in_ZR = uVar2 - 0x200 == 0;
                if (uVar2 < 0x200) {
                  puVar18 = puVar7 + 0x16;
                  puVar16 = (undefined8 *)*puVar18;
                  puVar15 = (undefined8 *)puVar7[0x13];
                  if (uVar3 < (ulong)((long)puVar16 - (long)puVar15)) {
                    uVar8 = 0x1000;
                    __Znwm();
                    if (puVar16 == puVar17) {
                      in_ZR = 0;
                      if (puVar13 == puVar15) {
                        lVar12 = (long)puVar16 - (long)puVar13 >> 2;
                        in_ZR = puVar17 == puVar13;
                        if ((bool)in_ZR) {
                          lVar12 = 1;
                        }
                        puStack_80 = puVar18;
                        FUN_10b8e8d60();
                        func_0x00010b8e9e60(lVar12 * 2 + 6);
                        param_3 = (undefined8 *)puVar7[0x15];
                        FUN_10b8e8d38(&puStack_a0,puVar7[0x14]);
                        puVar17 = (undefined8 *)puVar7[0x14];
                        puVar13 = (undefined8 *)puVar7[0x13];
                        puVar7[0x14] = puStack_98;
                        puVar7[0x13] = puStack_a0;
                        puVar15 = (undefined8 *)puVar7[0x16];
                        puVar18 = (undefined8 *)puVar7[0x15];
                        puVar7[0x16] = puStack_88;
                        puVar7[0x15] = puStack_90;
                        puStack_a0 = puVar13;
                        puStack_98 = puVar17;
                        puStack_90 = puVar18;
                        puStack_88 = puVar15;
                        func_0x00010b8e9f30();
                        puVar13 = (undefined8 *)puVar7[0x14];
                      }
                      puVar13[-1] = uVar8;
                      puVar7[0x14] = puVar13;
                      goto LAB_10b8e9160;
                    }
                    *puVar17 = uVar8;
                    puVar7[0x15] = puVar17 + 1;
                    in_ZR = 0;
                  }
                  else {
                    puVar10 = (undefined8 *)((long)puVar16 - (long)puVar15 >> 2);
                    if (puVar16 == puVar15) {
                      puVar10 = (undefined8 *)0x1;
                    }
                    puStack_b8 = puVar18;
                    FUN_10b8e8d60();
                    puVar15 = (undefined8 *)((long)puVar10 + uVar3);
                    puVar16 = puVar10 + lVar12;
                    uVar8 = 0x1000;
                    lVar14 = lVar12;
                    puStack_d8 = puVar10;
                    puStack_d0 = puVar15;
                    puStack_c0 = puVar16;
                    __Znwm();
                    puVar11 = puVar15;
                    if (uVar3 == lVar12 * 8) {
                      if (puVar17 == puVar13) {
                        puVar13 = (undefined8 *)0x1;
                        puStack_80 = puVar18;
                        FUN_10b8e8d60();
                        puStack_88 = puVar13 + lVar14;
                        param_3 = puVar15;
                        puStack_a0 = puVar13;
                        puStack_98 = puVar13;
                        puStack_90 = puVar13;
                        FUN_10b8e8d38(&puStack_a0,puVar15);
                        puVar1 = puStack_88;
                        puVar11 = puStack_90;
                        puVar17 = puStack_98;
                        puVar13 = puStack_a0;
                        puStack_d8 = puStack_a0;
                        puStack_d0 = puStack_98;
                        puStack_c0 = puStack_88;
                        puStack_a0 = puVar10;
                        puStack_98 = puVar15;
                        puStack_90 = puVar15;
                        puStack_88 = puVar16;
                        func_0x00010b8e9f30();
                        puVar16 = puVar1;
                        puVar10 = puVar13;
                        puVar15 = puVar17;
                      }
                      else {
                        puVar15 = puVar15 + (((long)puVar15 - (long)puVar10 >> 3) + 1) / -2;
                        puVar11 = puVar15;
                        puStack_d0 = puVar15;
                      }
                    }
                    puVar13 = puVar11 + 1;
                    *puVar11 = uVar8;
                    puVar17 = (undefined8 *)puVar7[0x15];
                    puStack_c8 = puVar13;
                    while( true ) {
                      puVar11 = (undefined8 *)puVar7[0x14];
                      in_ZR = puVar17 == puVar11;
                      if ((bool)in_ZR) break;
                      puVar11 = puVar15;
                      if (puVar15 == puVar10) {
                        if (puVar13 < puVar16) {
                          param_3 = (undefined8 *)((long)puVar13 - (long)puVar10);
                          puVar1 = puVar13 + (((long)puVar16 - (long)puVar13 >> 3) + 1) / 2;
                          puVar11 = (undefined8 *)((long)puVar1 - ((long)puVar13 - (long)puVar10));
                          puVar13 = puVar1;
                          if (param_3 != (undefined8 *)0x0) {
                            _memmove(puVar11,puVar15);
                          }
                        }
                        else {
                          lVar12 = (long)puVar16 - (long)puVar10 >> 2;
                          if ((long)puVar16 - (long)puVar10 == 0) {
                            lVar12 = 1;
                          }
                          puStack_80 = puVar18;
                          FUN_10b8e8d60();
                          func_0x00010b8e9e60(lVar12 * 2 + 6);
                          param_3 = puVar13;
                          FUN_10b8e8d38(&puStack_a0,puVar10);
                          puVar5 = puStack_88;
                          puVar4 = puStack_90;
                          puVar11 = puStack_98;
                          puVar1 = puStack_a0;
                          puStack_a0 = puVar10;
                          puStack_98 = puVar15;
                          puStack_90 = puVar13;
                          puStack_88 = puVar16;
                          func_0x00010b8e9f30();
                          puVar16 = puVar5;
                          puVar10 = puVar1;
                          puVar13 = puVar4;
                        }
                      }
                      puVar17 = puVar17 + -1;
                      puVar15 = puVar11 + -1;
                      *puVar15 = *puVar17;
                    }
                    puStack_d8 = (undefined8 *)puVar7[0x13];
                    puVar7[0x13] = puVar10;
                    puVar7[0x14] = puVar15;
                    puStack_c0 = (undefined8 *)puVar7[0x16];
                    puStack_c8 = (undefined8 *)puVar7[0x15];
                    puVar7[0x15] = puVar13;
                    puVar7[0x16] = puVar16;
                    puStack_d0 = puVar11;
                    func_0x00010b8e8d88(&puStack_d8);
                  }
                }
                else {
                  puVar7[0x17] = uVar2 - 0x200;
                  uVar8 = *puVar13;
                  puVar7[0x14] = puVar13 + 1;
LAB_10b8e9160:
                  FUN_10b8e8c5c(puVar7 + 0x13,uVar8);
                }
              }
              plVar6 = puVar7 + 0x13;
              FUN_10b8e8c00();
              if ((lStack_a8 != 0) && (*(long *)(lStack_a8 + 0x10) != 0)) {
                do {
                  func_0x00010b8e9da4();
                  lStack_a8 = extraout_x8_00;
                } while (extraout_w11 != 0);
              }
              *plVar6 = lStack_a8;
              puVar7[0x18] = puVar7[0x18] + 1;
              FUN_10b8e6448(puVar7,&puStack_e8);
            }
            func_0x0001080eb338(&puStack_e8);
          }
          goto LAB_10b8e9358;
        }
        func_0x00010b8e5d68(&puStack_a0);
        goto LAB_10b8e9368;
      }
      func_0x00010b8e9c38();
      func_0x00010b8e9f38();
      goto LAB_10b8e9370;
    }
  }
  func_0x00010b8e9c38();
  func_0x00010b8e9d04();
  goto LAB_10b8e9394;
code_r0x00010b8e90c8:
  puVar13 = (undefined8 *)*puVar9;
  puVar9 = puVar9 + 1;
  if (puVar13 == puVar7) goto code_r0x00010b8e90d4;
  goto LAB_10b8e90c0;
code_r0x00010b8e90d4:
  in_ZR = 1;
LAB_10b8e9358:
  FUN_10b8e8a18(puVar7);
  func_0x00010b8e9c38();
  func_0x00010b8e9f38();
LAB_10b8e9368:
  FUN_10b8e99c8(&lStack_b0);
LAB_10b8e9370:
  FUN_10b9a8d98(&uStack_108);
  FUN_10b9a8d98(&uStack_f8);
  func_0x0001080e08ac();
  func_0x0001080e0bc0(&puStack_a0);
LAB_10b8e9394:
  FUN_10b9a8d98(&uStack_118);
  puVar7 = &uStack_128;
  FUN_10b9a8d98();
  func_0x00010b8e9b84(uStack_78);
  if ((bool)in_ZR) {
    return puVar7;
  }
  ___stack_chk_fail();
  func_0x00010b8e9b98();
  func_0x00010b8e9c7c();
  func_0x00010b8e9d7c();
  func_0x00010b8e9cd4();
  func_0x00010b8e9e08();
  func_0x00010b8e9b84(uStack_178);
  if ((bool)in_ZR) {
    return param_5;
  }
  ___stack_chk_fail();
  func_0x00010b8e9e50();
  FUN_10b8e69b4();
  if ((int)puVar7 != 0) {
    puVar7 = (undefined8 *)param_3[3];
    func_0x00010b8e63d4(puVar7,param_3);
  }
  func_0x00010b8e9c38();
  func_0x00010b8e9d04();
  return puVar7;
}



/* Entry: 10b8e94a8; end: 10b8e9597;  */

undefined8
FUN_10b8e94a8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 in_ZR;
  undefined8 uStack_38;
  
  func_0x00010b8e9b98();
  func_0x00010b8e9c7c();
  func_0x00010b8e9d7c();
  func_0x00010b8e9cd4();
  func_0x00010b8e9e08();
  func_0x00010b8e9b84(uStack_38);
  if ((bool)in_ZR) {
    return param_5;
  }
  ___stack_chk_fail();
  func_0x00010b8e9e50();
  FUN_10b8e69b4();
  if ((int)param_1 != 0) {
    param_1 = *(undefined8 *)(param_3 + 0x18);
    func_0x00010b8e63d4(param_1,param_3);
  }
  func_0x00010b8e9c38();
  func_0x00010b8e9d04();
  return param_1;
}



/* Entry: 10b8e9598; end: 10b8e96a3;  */

void FUN_10b8e9598(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010b8e6730();
  lVar1 = *param_3;
  *param_1 = *(undefined8 *)(lVar1 + 0x140);
  uVar2 = *(undefined8 *)(lVar1 + 0x148);
  param_1[2] = *(undefined8 *)(lVar1 + 0x150);
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b8e96a4; end: 10b8e97d3;  */

void FUN_10b8e96a4(void)

{
  undefined1 in_ZR;
  undefined8 **ppuVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 extraout_x8;
  undefined8 **unaff_x20;
  undefined8 *puVar5;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010b8e9e50();
  func_0x00010b8e9bb4();
  uStack_48 = extraout_x8;
  FUN_10b8e97d4(auStack_68);
  uVar3 = 0;
  ppuVar1 = unaff_x20;
  FUN_10b8e5ce4();
  uStack_60 = uVar3;
  func_0x00010b8e9dfc(unaff_x20[3]);
  if ((bool)in_ZR) {
    plVar2 = *unaff_x20;
    uStack_50 = uVar3;
    (**(code **)(*plVar2 + 400))(plVar2,auStack_58);
    if (((ulong)plVar2 & 1) == 0) {
      puStack_b0 = (undefined8 *)0x0;
      uStack_a8 = 0;
      func_0x00010b8e9ed8();
      ppuVar1 = &puStack_b0;
    }
    else {
      puVar5 = *unaff_x20;
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      func_0x000107c31088(&uStack_e8,&UNK_10f7cbcb4);
      puStack_b0 = &uStack_e0;
      uStack_a8 = 0;
      uStack_a0 = 2;
      uStack_90 = 0;
      uStack_88 = 0;
      puStack_98 = &uStack_e8;
      FUN_10b8e143c(&puStack_80,puVar5,auStack_58,&puStack_b0,unaff_x20[3]);
      func_0x000107c278f8(uStack_e8);
      func_0x00010b8e9dfc(unaff_x20[3]);
      if ((bool)in_ZR) {
        uStack_a8 = uStack_78;
        puStack_b0 = puStack_80;
        puStack_80 = (undefined8 *)0x0;
        uStack_78 = 0;
        func_0x00010b8e9ed8();
        FUN_10b8e552c(&puStack_b0);
      }
      ppuVar1 = &puStack_80;
    }
    FUN_10b8e552c();
  }
  func_0x00010b8e9c38();
  func_0x00010b8e9d04();
  func_0x00010b8e9b84(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *ppuVar1 = (undefined8 *)0x0;
  ppuVar1[1] = (undefined8 *)0x0;
  for (lVar4 = 0; lVar4 != 0x10; lVar4 = lVar4 + 1) {
    *(undefined1 *)((long)ppuVar1 + lVar4) = 0;
  }
  return;
}



/* Entry: 10b8e97d4; end: 10b8e97db;  */

void FUN_10b8e97d4(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  for (lVar1 = 0; lVar1 != 0x10; lVar1 = lVar1 + 1) {
    *(undefined1 *)((long)param_1 + lVar1) = 0;
  }
  return;
}



/* Entry: 10b8e97dc; end: 10b8e985b;  */

undefined8 * FUN_10b8e97dc(undefined8 *param_1,long *param_2)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  long lVar2;
  int extraout_w11;
  
  uVar1 = 0;
  if (*param_2 != 0) {
    do {
      func_0x00010b8e9e30();
      uVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  lVar2 = param_2[1];
  *param_1 = uVar1;
  param_1[1] = lVar2;
  func_0x00010b8e9820(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 10b8e985c; end: 10b8e98ab;  */

void FUN_10b8e985c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10b8e98ac(param_1,param_4);
    lVar1 = param_1 + 0x10;
    FUN_10b8e991c(lVar1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
    return;
  }
  return;
}



/* Entry: 10b8e98ac; end: 10b8e991b;  */

void FUN_10b8e98ac(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0x333333333333334) {
    plVar1 = param_1 + 2;
    func_0x00010b8de6e0();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 10);
  }
  else {
    FUN_10b8de688();
    plVar1 = param_1 + 2;
    FUN_10b8e991c();
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 10b8e991c; end: 10b8e992f;  */

void FUN_10b8e991c(void)

{
  FUN_10b8e9930();
  return;
}



/* Entry: 10b8e9930; end: 10b8e996b;  */

void FUN_10b8e9930(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x50) {
    FUN_10b8de54c(param_4,param_2);
    param_4 = param_4 + 0x50;
  }
  return;
}



/* Entry: 10b8e996c; end: 10b8e996f;  */

void FUN_10b8e996c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d73198;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b8e9970; end: 10b8e9983;  */

void FUN_10b8e9970(void)

{
  func_0x00010b8e9990();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8e9984; end: 10b8e999b;  */

long FUN_10b8e9984(long param_1)

{
  func_0x00010b8e6730();
  FUN_10b8e552c(param_1 + 0x80);
  FUN_10b9a1f08(param_1 + 0x38);
  FUN_10b8e89f4(param_1 + 0x30);
  func_0x00010b8e9e90();
  return param_1 + 0x18;
}



/* Entry: 10b8e999c; end: 10b8e99c7;  */

long * FUN_10b8e999c(long *param_1)

{
  long *plVar1;
  
  if ((param_1 != (long *)0x0) &&
     (plVar1 = param_1, func_0x00010b8e9ed0(), ((ulong)plVar1 & 1) == 0)) {
    FUN_10b9a5890();
    if (*plVar1 == 2) {
      func_0x0001003adc0c(plVar1 + 1);
      func_0x000104bda960();
      return param_1;
    }
    if (*plVar1 != 1) {
      return plVar1;
    }
    param_1 = plVar1 + 1;
    FUN_10b8e8dec(*param_1);
  }
  return param_1;
}



/* Entry: 10b8e99c8; end: 10b8e99ef;  */

long * FUN_10b8e99c8(long *param_1)

{
  long *unaff_x19;
  
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
    return unaff_x19;
  }
  if (*param_1 == 1) {
    FUN_10b8e8dec(param_1[1]);
    return param_1 + 1;
  }
  return param_1;
}



/* Entry: 10b8e99f0; end: 10b8e9a33;  */

void FUN_10b8e99f0(void)

{
  int extraout_w11;
  undefined8 uStack_28;
  
  func_0x00010b8e9e10();
  if (uStack_28 == 0) {
    uStack_28 = 0;
  }
  else {
    do {
      func_0x00010b8e9e30();
    } while (extraout_w11 != 0);
  }
  func_0x00010b8e9d88(uStack_28);
  return;
}



/* Entry: 10b8e9a34; end: 10b8e9a37;  */

void FUN_10b8e9a34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d731e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b8e9a38; end: 10b8e9a4b;  */

void FUN_10b8e9a38(void)

{
  FUN_10b8e9b0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8e9a4c; end: 10b8e9a5b;  */

long FUN_10b8e9a4c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  FUN_10b8e6574(param_1 + 0xb0);
  puVar1 = *(undefined8 **)(param_1 + 0xc0);
  for (puVar3 = *(undefined8 **)(param_1 + 0xb8); puVar3 != puVar1; puVar3 = puVar3 + 1) {
    __ZdlPv(*puVar3);
  }
  lVar2 = *(long *)(param_1 + 0xc0);
  while (lVar2 != *(long *)(param_1 + 0xb8)) {
    lVar2 = lVar2 + -8;
    *(long *)(param_1 + 0xc0) = lVar2;
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    func_0x00010b8e9c00();
  }
  func_0x00010b8e8abc(param_1 + 0x98);
  func_0x00010b8e8a98(param_1 + 0x88);
  FUN_10b8e8a24(param_1 + 0x78);
  FUN_10b9a1f08(param_1 + 0x30);
  func_0x00010b8e9e90();
  return param_1 + 0x18;
}



/* Entry: 10b8e9a5c; end: 10b8e9a6f;  */

void FUN_10b8e9a5c(void)

{
  FUN_10b8e9a70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8e9a70; end: 10b8e9b0b;  */

long FUN_10b8e9a70(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  FUN_10b8e6574(param_1 + 0x98);
  puVar1 = *(undefined8 **)(param_1 + 0xa8);
  for (puVar3 = *(undefined8 **)(param_1 + 0xa0); puVar3 != puVar1; puVar3 = puVar3 + 1) {
    __ZdlPv(*puVar3);
  }
  lVar2 = *(long *)(param_1 + 0xa8);
  while (lVar2 != *(long *)(param_1 + 0xa0)) {
    lVar2 = lVar2 + -8;
    *(long *)(param_1 + 0xa8) = lVar2;
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    func_0x00010b8e9c00();
  }
  func_0x00010b8e8abc(param_1 + 0x80);
  func_0x00010b8e8a98(param_1 + 0x70);
  FUN_10b8e8a24(param_1 + 0x60);
  FUN_10b9a1f08(param_1 + 0x18);
  func_0x00010b8e9e90();
  return param_1;
}



/* Entry: 10b8e9b0c; end: 10b8e9b1f;  */

void FUN_10b8e9b0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d731e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b8e9b20; end: 10b8e9b83;  */

ulong FUN_10b8e9b20(ulong param_1)

{
  ulong uVar1;
  
  if ((param_1 != 0) && (uVar1 = param_1, func_0x00010b8e9ed0(), (uVar1 & 1) == 0)) {
    FUN_10b9a5890();
    func_0x00010b8e87a4(uVar1 + 0x40);
    func_0x00010b8e87e4(uVar1 + 0x28);
    FUN_10b9a8d98(uVar1 + 0x18);
    func_0x00010b8e9e90();
    param_1 = uVar1;
  }
  return param_1;
}



/* Entry: 10b8e9b84; end: 10b8e9f9f;  */

void FUN_10b8e9b84(void)

{
  return;
}



/* Entry: 10b8e9fa0; end: 10b8ea5df;  */

undefined8 *
FUN_10b8e9fa0(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [16];
  
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  lStack_70 = *param_2 + 0x10;
  puStack_88 = &uStack_b8;
  uStack_80 = 0;
  uStack_78 = 1;
  uStack_68 = 0;
  uStack_60 = 0;
  FUN_10b9a3a64(auStack_58,&puStack_88);
  FUN_10b8e0de0(param_1,param_3,param_4,auStack_58,param_5,0);
  FUN_10b9a3d64(auStack_50);
  *param_1 = &PTR_DAT_110d732e0;
  param_1[9] = *param_2;
  *param_2 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xc] = 0;
  return param_1;
}



/* Entry: 10b8ea5e0; end: 10b8ea773;  */

undefined8 * FUN_10b8ea5e0(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar2;
  undefined8 extraout_x8_02;
  undefined8 uVar3;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  long lStack_88;
  long lStack_80;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  long lStack_38;
  long lStack_30;
  
  func_0x00010b8fd430();
  if ((bRam00000001137fcf70 & 1) == 0) {
    puVar1 = (undefined8 *)0x1137fcf70;
    param_1 = puVar1;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107c31088(auStack_48,&UNK_10f7cbcdf);
      func_0x00010b8fe870();
      uVar2 = 0;
      if (lStack_38 != 0) {
        do {
          func_0x00010b8fdb28();
          uVar2 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      uVar3 = 0;
      uRam00000001137fcfe0 = uVar2;
      if (lStack_30 != 0) {
        do {
          func_0x00010b8fdb28();
          uVar3 = extraout_x8_00;
        } while (extraout_w11_00 != 0);
      }
      uRam00000001137fcfe8 = uVar3;
      FUN_10b8faff8(auStack_40);
      func_0x00010b8fd9e0();
      ___cxa_guard_release();
      param_1 = puVar1;
    }
  }
  func_0x00010b8fd3a4();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b8fd430();
    if ((bRam00000001137fcf78 & 1) == 0) {
      puVar1 = (undefined8 *)0x1137fcf78;
      param_1 = puVar1;
      ___cxa_guard_acquire();
      if ((int)param_1 != 0) {
        func_0x000107c31088(auStack_98,&UNK_10f7cbcf4);
        func_0x00010b8fe870();
        uVar2 = 0;
        if (lStack_88 != 0) {
          do {
            func_0x00010b8fdb28();
            uVar2 = extraout_x8_01;
          } while (extraout_w11_01 != 0);
        }
        uVar3 = 0;
        uRam00000001137fcff0 = uVar2;
        if (lStack_80 != 0) {
          do {
            func_0x00010b8fdb28();
            uVar3 = extraout_x8_02;
          } while (extraout_w11_02 != 0);
        }
        uRam00000001137fcff8 = uVar3;
        FUN_10b8faff8(auStack_90);
        func_0x00010b8fd9e0();
        ___cxa_guard_release();
        param_1 = puVar1;
      }
    }
    func_0x00010b8fd3a4();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      *param_1 = &PTR_FUN_110d73320;
      FUN_10b8f4de8(param_1 + 0xb);
      FUN_10b9a1f08(param_1 + 2);
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 10b8ea774; end: 10b8ea777;  */

undefined8 * FUN_10b8ea774(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d73320;
  FUN_10b8f4de8(param_1 + 0xb);
  FUN_10b9a1f08(param_1 + 2);
  return param_1;
}



/* Entry: 10b8ea778; end: 10b8ea78b;  */

void FUN_10b8ea778(void)

{
  func_0x00010b8ea738();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8ea78c; end: 10b8ea80f;  */

void FUN_10b8ea78c(long param_1)

{
  long unaff_x19;
  undefined4 auStack_50 [2];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  func_0x00010b8fda54();
  __ZNSt3__15mutex4lockEv(param_1 + 0x10);
  func_0x00010b8feaa8();
  func_0x00010b8faca0();
  uStack_38 = 1;
  if (*(char *)(unaff_x19 + 0x70) == '\0') {
    func_0x00010b8faca0(unaff_x19 + 0x58,auStack_50);
    *(undefined1 *)(unaff_x19 + 0x70) = 1;
  }
  else {
    *(undefined4 *)(unaff_x19 + 0x58) = auStack_50[0];
    func_0x000107c31068(unaff_x19 + 0x60,auStack_48);
    func_0x00010b8c292c(unaff_x19 + 0x68,auStack_40);
  }
  FUN_10b8f4de8(auStack_50);
  func_0x00010b8fe2f4();
  return;
}



/* Entry: 10b8ea810; end: 10b8eac3f;  */

void FUN_10b8ea810(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,long *param_11,long *param_12,char param_13
                  )

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  long lVar5;
  long extraout_x8;
  code *extraout_x9;
  int extraout_w10;
  undefined8 uVar6;
  long lVar7;
  int extraout_w11;
  long unaff_x19;
  long *unaff_x20;
  long *plVar8;
  long lStack_110;
  undefined1 auStack_108 [16];
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  code **ppcStack_e0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  code *pcStack_98;
  undefined **ppuStack_90;
  
  func_0x00010b8fda54();
  uVar6 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = &PTR_DAT_110d73350;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_DAT_110d73438;
  param_1[4] = &PTR_DAT_110d73480;
  param_1[5] = &PTR_DAT_110d734e0;
  param_1[6] = 0x32aaaba7;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = param_2;
  param_1[0x10] = 0;
  param_1[0x11] = param_3;
  lVar7 = *param_4;
  if (lVar7 != 0) {
    plVar8 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(long *)(unaff_x19 + 0x90) = lVar7;
  *(undefined8 *)(unaff_x19 + 0x98) = param_5;
  *(undefined8 *)(unaff_x19 + 0xa0) = param_6;
  lVar7 = *param_12;
  if (lVar7 != 0) {
    plVar8 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(long *)(unaff_x19 + 0xa8) = lVar7;
  *(undefined8 *)(unaff_x19 + 0xb0) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x100) = 0;
  *(undefined8 *)(unaff_x19 + 0xf8) = 0;
  *(undefined8 *)(unaff_x19 + 0xf0) = 0;
  *(undefined8 *)(unaff_x19 + 0xe8) = 0;
  *(undefined8 *)(unaff_x19 + 0xe0) = 0;
  *(undefined8 *)(unaff_x19 + 0xd8) = 0;
  *(undefined8 *)(unaff_x19 + 0xd0) = 0;
  *(undefined8 *)(unaff_x19 + 200) = 0;
  *(undefined8 *)(unaff_x19 + 0xc0) = 0;
  *(undefined8 *)(unaff_x19 + 0xb8) = 0;
  *(undefined8 *)(unaff_x19 + 0x108) = 0;
  *(undefined **)(unaff_x19 + 0x110) = &UNK_10dd5b8b0;
  *(undefined8 *)(unaff_x19 + 0x120) = 0;
  *(undefined8 *)(unaff_x19 + 0x128) = 0;
  *(undefined8 *)(unaff_x19 + 0x118) = 0;
  *(undefined8 *)(unaff_x19 + 0x140) = 0;
  *(undefined8 *)(unaff_x19 + 0x138) = 0;
  *(undefined8 *)(unaff_x19 + 0x150) = 0;
  *(undefined8 *)(unaff_x19 + 0x148) = 0;
  lVar7 = *param_11;
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x10) != 0)) {
    do {
      func_0x00010b8fda68();
      lVar7 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *(long *)(unaff_x19 + 0x158) = lVar7;
  *(undefined8 *)(unaff_x19 + 0x160) = 0;
  *(undefined8 *)(unaff_x19 + 0x188) = 0;
  func_0x0001080e0180(unaff_x19 + 0x1b0);
  *(undefined8 *)(unaff_x19 + 0x1d0) = 0;
  lVar7 = 0x1d8;
  do {
    func_0x0001080e3e58(unaff_x19 + lVar7);
    lVar7 = lVar7 + 8;
  } while (lVar7 != 0x210);
  *(undefined8 *)(unaff_x19 + 0x280) = 0;
  *(undefined8 *)(unaff_x19 + 0x268) = 0;
  *(undefined8 *)(unaff_x19 + 0x260) = 0;
  *(undefined8 *)(unaff_x19 + 0x278) = 0;
  *(undefined8 *)(unaff_x19 + 0x270) = 0;
  *(undefined8 *)(unaff_x19 + 0x248) = 0;
  *(undefined8 *)(unaff_x19 + 0x240) = 0;
  *(undefined8 *)(unaff_x19 + 600) = 0;
  *(undefined8 *)(unaff_x19 + 0x250) = 0;
  *(undefined8 *)(unaff_x19 + 0x228) = 0;
  *(undefined8 *)(unaff_x19 + 0x220) = 0;
  *(undefined8 *)(unaff_x19 + 0x238) = 0;
  *(undefined8 *)(unaff_x19 + 0x230) = 0;
  *(undefined8 *)(unaff_x19 + 0x218) = 0;
  *(undefined8 *)(unaff_x19 + 0x210) = 0;
  *(undefined **)(unaff_x19 + 0x288) = &UNK_10dd5b8b0;
  *(undefined8 *)(unaff_x19 + 0x2b0) = 0;
  *(undefined8 *)(unaff_x19 + 0x290) = 0;
  *(undefined8 *)(unaff_x19 + 0x2a0) = 0;
  *(undefined8 *)(unaff_x19 + 0x298) = 0;
  *(undefined **)(unaff_x19 + 0x2b8) = &UNK_10dd5b8b0;
  *(undefined8 *)(unaff_x19 + 0x2e0) = 0;
  *(undefined8 *)(unaff_x19 + 0x2c0) = 0;
  *(undefined8 *)(unaff_x19 + 0x2d0) = 0;
  *(undefined8 *)(unaff_x19 + 0x2c8) = 0;
  *(undefined **)(unaff_x19 + 0x2e8) = &UNK_10dd5b8b0;
  *(undefined8 *)(unaff_x19 + 0x310) = 0;
  *(undefined8 *)(unaff_x19 + 0x300) = 0;
  *(undefined8 *)(unaff_x19 + 0x2f8) = 0;
  *(undefined8 *)(unaff_x19 + 0x2f0) = 0;
  *(undefined **)(unaff_x19 + 0x318) = &UNK_10dd5b8b0;
  *(undefined8 *)(unaff_x19 + 0x330) = 0;
  *(undefined8 *)(unaff_x19 + 0x328) = 0;
  *(undefined8 *)(unaff_x19 + 800) = 0;
  *(undefined8 *)(unaff_x19 + 0x348) = 0;
  *(undefined8 *)(unaff_x19 + 0x340) = 0;
  *(undefined8 *)(unaff_x19 + 0x358) = 0;
  *(undefined8 *)(unaff_x19 + 0x350) = 0;
  *(undefined8 *)(unaff_x19 + 0x361) = 0;
  *(undefined8 *)(unaff_x19 + 0x359) = 0;
  *(undefined2 *)(unaff_x19 + 0x369) = 0x101;
  *(undefined1 *)(unaff_x19 + 0x36b) = 1;
  *(undefined4 *)(unaff_x19 + 0x36c) = 0;
  *(undefined1 *)(unaff_x19 + 0x370) = 0;
  *(undefined8 *)(unaff_x19 + 0x378) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x388) = 0;
  *(undefined8 *)(unaff_x19 + 0x380) = 0;
  *(undefined8 *)(unaff_x19 + 0x398) = 0;
  *(undefined8 *)(unaff_x19 + 0x390) = 0;
  *(undefined8 *)(unaff_x19 + 0x3a8) = 0;
  *(undefined8 *)(unaff_x19 + 0x3a0) = 0;
  *(undefined8 *)(unaff_x19 + 0x3b8) = 0;
  *(undefined8 *)(unaff_x19 + 0x3b0) = 0;
  *(undefined8 *)(unaff_x19 + 0x3c8) = 0;
  *(undefined8 *)(unaff_x19 + 0x3c0) = 0;
  *(undefined8 *)(unaff_x19 + 0x3d8) = 1;
  *(undefined ***)(unaff_x19 + 0x3d0) = &PTR_DAT_110d78770;
  *(undefined8 *)(unaff_x19 + 0x3e0) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x3f0) = 0;
  *(undefined8 *)(unaff_x19 + 1000) = 0;
  *(undefined8 *)(unaff_x19 + 0x400) = 0;
  *(undefined8 *)(unaff_x19 + 0x3f8) = 0;
  *(undefined8 *)(unaff_x19 + 0x410) = 0;
  *(undefined8 *)(unaff_x19 + 0x408) = 0;
  *(undefined8 *)(unaff_x19 + 0x420) = 0;
  *(undefined8 *)(unaff_x19 + 0x418) = 0;
  *(undefined8 *)(unaff_x19 + 0x430) = 0;
  *(undefined8 *)(unaff_x19 + 0x428) = 0;
  *(undefined8 *)(unaff_x19 + 0x440) = 0;
  *(undefined8 *)(unaff_x19 + 0x438) = 0;
  *(undefined4 *)(unaff_x19 + 0x447) = 0;
  *(char *)(unaff_x19 + 1099) = (char)param_8;
  *(undefined2 *)(unaff_x19 + 0x44c) = 0;
  *(undefined4 *)(unaff_x19 + 0x450) = 0;
  *(int *)(unaff_x19 + 0x454) = (int)param_7;
  *(undefined1 *)(unaff_x19 + 0x4a8) = 0;
  *(undefined8 *)(unaff_x19 + 0x490) = 0;
  *(undefined8 *)(unaff_x19 + 0x488) = 0;
  *(undefined8 *)(unaff_x19 + 0x4a0) = 0;
  *(undefined8 *)(unaff_x19 + 0x498) = 0;
  *(undefined8 *)(unaff_x19 + 0x470) = 0;
  *(undefined8 *)(unaff_x19 + 0x468) = 0;
  *(undefined8 *)(unaff_x19 + 0x480) = 0;
  *(undefined8 *)(unaff_x19 + 0x478) = 0;
  *(undefined8 *)(unaff_x19 + 0x460) = 0;
  *(undefined8 *)(unaff_x19 + 0x458) = 0;
  *(undefined8 *)(unaff_x19 + 0x508) = 0;
  *(undefined8 *)(unaff_x19 + 0x500) = 0;
  *(undefined8 *)(unaff_x19 + 0x4f8) = 0;
  *(undefined8 *)(unaff_x19 + 0x4f0) = 0;
  *(undefined8 *)(unaff_x19 + 0x4e8) = 0;
  *(undefined8 *)(unaff_x19 + 0x4e0) = 0;
  *(undefined8 *)(unaff_x19 + 0x4d8) = 0;
  *(undefined8 *)(unaff_x19 + 0x4d0) = 0;
  *(undefined8 *)(unaff_x19 + 0x4c8) = 0;
  *(undefined8 *)(unaff_x19 + 0x4c0) = 0;
  *(undefined8 *)(unaff_x19 + 0x4b8) = 0;
  *(undefined8 *)(unaff_x19 + 0x4b0) = 0;
  *(undefined8 *)(unaff_x19 + 0x510) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x560) = 0;
  *(undefined8 *)(unaff_x19 + 0x558) = 0;
  *(undefined8 *)(unaff_x19 + 0x570) = 0;
  *(undefined8 *)(unaff_x19 + 0x568) = 0;
  *(undefined8 *)(unaff_x19 + 0x540) = 0;
  *(undefined8 *)(unaff_x19 + 0x538) = 0;
  *(undefined8 *)(unaff_x19 + 0x550) = 0;
  *(undefined8 *)(unaff_x19 + 0x548) = 0;
  *(undefined8 *)(unaff_x19 + 0x520) = 0;
  *(undefined8 *)(unaff_x19 + 0x518) = 0;
  *(undefined8 *)(unaff_x19 + 0x530) = 0;
  *(undefined8 *)(unaff_x19 + 0x528) = 0;
  *(char *)(unaff_x19 + 0x578) = param_13;
  *(undefined8 *)(unaff_x19 + 0x590) = 0;
  uVar4 = param_13 == '\0';
  puVar1 = &UNK_10f7cbd1b;
  if ((bool)uVar4) {
    puVar1 = &UNK_10f7cbd32;
  }
  *(undefined8 *)(unaff_x19 + 0x588) = 0;
  *(undefined8 *)(unaff_x19 + 0x580) = 0;
  func_0x00010b8fe260(puVar1);
  (**(code **)(*unaff_x20 + 0x20))();
  if ((int)unaff_x20 == 0) {
    func_0x000107c31034(&uStack_a8,auStack_a0,param_9);
  }
  else {
    FUN_10b998f8c(auStack_a0,param_9);
  }
  FUN_10b8da99c(unaff_x19 + 0x360,&uStack_a8);
  func_0x000107c278fc(uStack_a8);
  *(undefined **)(unaff_x19 + 0x210) = &DAT_10f3111e1;
  *(undefined8 *)(unaff_x19 + 0x218) = 4;
  *(undefined **)(unaff_x19 + 0x220) = &UNK_10f7cbd42;
  *(undefined8 *)(unaff_x19 + 0x228) = 0xf;
  *(undefined **)(unaff_x19 + 0x230) = &UNK_10f69e9f8;
  *(undefined8 *)(unaff_x19 + 0x238) = 8;
  *(undefined **)(unaff_x19 + 0x240) = &UNK_10f6750f8;
  *(undefined8 *)(unaff_x19 + 0x248) = 6;
  *(undefined **)(unaff_x19 + 0x250) = &UNK_10f7cbd52;
  *(undefined8 *)(unaff_x19 + 600) = 0xe;
  *(char **)(unaff_x19 + 0x260) = "preload";
  *(undefined8 *)(unaff_x19 + 0x268) = 7;
  *(undefined **)(unaff_x19 + 0x270) = &UNK_10f7cbd61;
  *(undefined8 *)(unaff_x19 + 0x278) = 0xc;
  func_0x000107c28144(unaff_x19 + 0x498);
  func_0x00010b948a74(unaff_x19 + 0x3d0);
  pcStack_98 = FUN_10b8f4e08;
  ppuStack_90 = &PTR_FUN_110d73560;
  (**(code **)(**(long **)(unaff_x19 + 0x360) + 0x28))(*(long **)(unaff_x19 + 0x360),&pcStack_98);
  func_0x00010b8fd640(ppuStack_90);
  uStack_b8 = 0;
  lStack_b0 = 0;
  func_0x00010b8fe1e4(&uStack_a8,*(undefined8 *)(unaff_x19 + 0x90),&lStack_b0,&uStack_b8);
  func_0x0001080d04a4(unaff_x19 + 0x460,&uStack_a8);
  func_0x00010b8fe6b4();
  func_0x00010b8fe038();
  func_0x0001080d5b98(uStack_b8);
  lVar7 = lStack_b0;
  func_0x000108100600();
  do {
    func_0x00010b8fd810();
  } while (extraout_w10 != 0);
  func_0x00010b8fdb48();
  func_0x00010b8fd3bc(uVar6);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    uStack_f0 = param_8;
    uStack_e8 = param_7;
    ppcStack_e0 = &pcStack_98;
    if (((*(byte *)(lVar7 + 0x578) & 1) == 0) && (*(long *)(lVar7 + 0x158) != 0)) {
      func_0x00010b8e1cac(*(long *)(lVar7 + 0x158),lVar7);
    }
    lStack_f8 = lVar7;
    func_0x00010b8ead1c(&lStack_110,lVar7,&lStack_f8,*(undefined8 *)(lVar7 + 0xa8));
    FUN_10b8ead68(lVar7 + 0x140,&lStack_110);
    FUN_10b8e47b8(lStack_110);
    func_0x00010b8fe648();
    func_0x00010b8fe384(&lStack_110);
    if (lStack_110 != 0) {
      func_0x00010b8fe96c();
      (*extraout_x9)(&lStack_f8);
      if (lStack_f8 != 0) {
        plVar8 = *(long **)(lVar7 + 0x360);
        lVar5 = lStack_f8;
        func_0x00010b94d0b4();
        (**(code **)(*plVar8 + 0x68))(plVar8,lVar5);
        lVar5 = lStack_f8;
        func_0x00010b94d3e0();
        *(char *)(lVar7 + 0x36a) = (char)lVar5;
        lVar5 = lStack_f8;
        func_0x00010b94d418();
        *(char *)(lVar7 + 0x36b) = (char)lVar5;
      }
      func_0x00010b8fb1f8(lStack_f8);
    }
    func_0x000107c284e8(auStack_108);
    return;
  }
  return;
}



/* Entry: 10b8eac40; end: 10b8ead67;  */

void FUN_10b8eac40(long param_1)

{
  long lVar1;
  code *extraout_x9;
  long *plVar2;
  long lStack_50;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  if (((*(byte *)(param_1 + 0x578) & 1) == 0) && (*(long *)(param_1 + 0x158) != 0)) {
    func_0x00010b8e1cac(*(long *)(param_1 + 0x158),param_1);
  }
  lStack_38 = param_1;
  func_0x00010b8ead1c(&lStack_50,param_1,&lStack_38,*(undefined8 *)(param_1 + 0xa8));
  FUN_10b8ead68(param_1 + 0x140,&lStack_50);
  FUN_10b8e47b8(lStack_50);
  func_0x00010b8fe648();
  func_0x00010b8fe384(&lStack_50);
  if (lStack_50 != 0) {
    func_0x00010b8fe96c();
    (*extraout_x9)(&lStack_38);
    if (lStack_38 != 0) {
      plVar2 = *(long **)(param_1 + 0x360);
      lVar1 = lStack_38;
      func_0x00010b94d0b4();
      (**(code **)(*plVar2 + 0x68))(plVar2,lVar1);
      lVar1 = lStack_38;
      func_0x00010b94d3e0();
      *(char *)(param_1 + 0x36a) = (char)lVar1;
      lVar1 = lStack_38;
      func_0x00010b94d418();
      *(char *)(param_1 + 0x36b) = (char)lVar1;
    }
    func_0x00010b8fb1f8(lStack_38);
  }
  func_0x000107c284e8(auStack_48);
  return;
}



/* Entry: 10b8ead68; end: 10b8eb01b;  */

long FUN_10b8ead68(long param_1,long param_2)

{
  if (param_1 != param_2) {
    func_0x00010b8fe900();
    FUN_10b8e47b8();
  }
  return param_1;
}



/* Entry: 10b8eb01c; end: 10b8eb03f;  */

void FUN_10b8eb01c(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined1 in_ZR;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x21;
  undefined8 *puVar9;
  undefined8 *unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  puVar5 = (undefined1 *)register0x00000008;
  uVar7 = 1;
  while( true ) {
    uVar8 = uVar7;
    lVar6 = param_1;
    *(undefined8 **)(puVar5 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar5 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar5 + -0x20) = unaff_x20;
    *(long *)(puVar5 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar5 + -0x10) = unaff_x29;
    *(code **)(puVar5 + -8) = unaff_x30;
    unaff_x29 = puVar5 + -0x10;
    param_1 = lVar6;
    func_0x00010b8fd3f4();
    pbVar1 = (byte *)(param_1 + 0x368);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((bVar2 & 1) == 0) {
      func_0x00010b8fe648();
      FUN_10b8eb398(puVar5 + -0x68,lVar6);
      unaff_x22 = *(undefined8 **)(puVar5 + -0x60);
      for (puVar9 = *(undefined8 **)(puVar5 + -0x68); in_ZR = puVar9 == unaff_x22, !(bool)in_ZR;
          puVar9 = puVar9 + 1) {
        uVar7 = *puVar9;
        *(undefined8 *)(puVar5 + -0x78) = 0;
        *(undefined8 *)(puVar5 + -0x70) = 0;
        func_0x00010b8eb44c(uVar7,0,puVar5 + -0x78);
        func_0x000107c278e8(puVar5 + -0x78);
      }
      unaff_x21 = puVar5 + -0x68;
      FUN_10b8f634c(puVar5 + -0x68);
      if ((int)uVar8 == 0) {
        param_1 = lVar6;
        FUN_10b8eb488(lVar6,0);
      }
      else {
        param_1 = *(long *)(lVar6 + 0x360);
        *(code **)(puVar5 + -0x68) = FUN_10b8f63e8;
        *(undefined ***)(puVar5 + -0x60) = &PTR_DAT_110d735c0;
        *(long *)(puVar5 + -0x58) = lVar6;
        FUN_10b998ea4(param_1,puVar5 + -0x68);
        func_0x00010b8fd6f8(*(undefined8 *)(puVar5 + -0x60));
      }
    }
    func_0x00010b8fd38c();
    if ((bool)in_ZR) break;
    unaff_x30 = FUN_10b8eb2c4;
    ___stack_chk_fail();
    puVar5 = puVar5 + -0x80;
    uVar7 = 0;
    unaff_x19 = lVar6;
    unaff_x20 = uVar8;
  }
  return;
}



/* Entry: 10b8eb040; end: 10b8eb053;  */

void FUN_10b8eb040(void)

{
  func_0x00010b8eae1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8eb054; end: 10b8eb06b;  */

void FUN_10b8eb054(long param_1)

{
  func_0x00010b8eae1c(param_1 + -0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8eb06c; end: 10b8eb113;  */

void FUN_10b8eb06c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  func_0x00010b8feb10();
  *(undefined1 *)(param_1 + 0x44a) = 0;
  if ((*(byte *)(param_1 + 0x368) & 1) == 0) {
    func_0x00010b8fdffc();
    if ((*(long *)(param_1 + 0x80) == 0) ||
       ((*(byte *)(*(long *)(param_1 + 0x80) + 0x1fa) & 1) == 0)) {
      in_stack_00000028 = 0;
      func_0x000107c31084();
      func_0x000107c2793c(&UNK_10f7cc8d3);
      func_0x00010b8fe304(&stack0x00000008);
      func_0x00010b8fe268();
      FUN_10b99fa14(&stack0x00000030,param_4,&stack0x00000020);
      func_0x00010b8f3538();
      func_0x00010b8fe0d8();
      func_0x00010b8fdb48();
      func_0x00010b8fe120();
    }
  }
  return;
}



/* Entry: 10b8eb114; end: 10b8eb2c3;  */

void FUN_10b8eb114(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined1 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  int extraout_w10;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *unaff_x22;
  code *pcVar19;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long alStack_60 [6];
  undefined1 *puVar9;
  
  plVar14 = &lStack_80;
  plVar18 = &lStack_80;
  func_0x00010b8fe2d8();
  func_0x00010b8fd3e0();
  uVar10 = *(char *)(param_1 + 0x36b) == '\x01';
  lStack_80 = param_1;
  if ((bool)uVar10) {
    FUN_10b8e999c();
    lStack_78 = param_1;
  }
  else {
    lStack_78 = 0;
  }
  lStack_70 = *unaff_x21;
  *unaff_x21 = 0;
  if (lStack_70 != 0) {
    do {
      func_0x00010b8fd810();
    } while (extraout_w10 != 0);
  }
  lStack_68 = *unaff_x20;
  plVar11 = alStack_60;
  func_0x00010b8fe0e0(*(undefined8 *)(unaff_x20[1] + 0x10));
  *unaff_x19 = FUN_10b8facf4;
  unaff_x19[1] = &PTR_FUN_110d73a60;
  func_0x00010b8fe784();
  lVar5 = lStack_80;
  plVar11[1] = lStack_78;
  *plVar11 = lVar5;
  lVar6 = lStack_68;
  lVar5 = lStack_70;
  lStack_78 = 0;
  lStack_70 = 0;
  plVar11[2] = lVar5;
  plVar11[3] = lVar6;
  plVar15 = alStack_60;
  (**(code **)(alStack_60[0] + 0x10))(plVar11 + 4);
  unaff_x19[2] = plVar11;
  func_0x00010b8f4d90();
  func_0x00010b8fd38c();
  if (!(bool)uVar10) {
    pcVar19 = (code *)0x10b8eb1f0;
    ___stack_chk_fail();
    plVar7 = &lStack_80;
    puVar8 = (undefined1 *)register0x00000008;
    while( true ) {
      plVar16 = plVar15;
      puVar12 = plVar14;
      puVar9 = (undefined1 *)plVar7;
      *(undefined8 **)(puVar9 + -0x30) = unaff_x22;
      *(long **)(puVar9 + -0x28) = plVar18;
      *(long **)(puVar9 + -0x20) = plVar11;
      *(undefined8 **)(puVar9 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar9 + -0x10) = puVar8 + -0x10;
      *(code **)(puVar9 + -8) = pcVar19;
      plVar14 = puVar12;
      func_0x00010b8fd3f4();
      pbVar1 = (byte *)(plVar14 + 0x6d);
      do {
        bVar2 = *pbVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
        if (bVar4) {
          *pbVar1 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((bVar2 & 1) == 0) {
        func_0x00010b8fe648();
        FUN_10b8eb398(puVar9 + -0x68,puVar12);
        unaff_x22 = *(undefined8 **)(puVar9 + -0x60);
        for (puVar17 = *(undefined8 **)(puVar9 + -0x68); uVar10 = puVar17 == unaff_x22,
            !(bool)uVar10; puVar17 = puVar17 + 1) {
          uVar13 = *puVar17;
          *(undefined8 *)(puVar9 + -0x78) = 0;
          *(undefined8 *)(puVar9 + -0x70) = 0;
          func_0x00010b8eb44c(uVar13,0,puVar9 + -0x78);
          func_0x000107c278e8(puVar9 + -0x78);
        }
        plVar18 = (long *)(puVar9 + -0x68);
        FUN_10b8f634c(puVar9 + -0x68);
        if (((ulong)plVar16 & 1) == 0) {
          plVar14 = puVar12;
          FUN_10b8eb488(puVar12,0);
        }
        else {
          plVar14 = (long *)puVar12[0x6c];
          *(code **)(puVar9 + -0x68) = FUN_10b8f63e8;
          *(undefined ***)(puVar9 + -0x60) = &PTR_DAT_110d735c0;
          *(undefined8 **)(puVar9 + -0x58) = puVar12;
          FUN_10b998ea4(plVar14,puVar9 + -0x68);
          func_0x00010b8fd6f8(*(undefined8 *)(puVar9 + -0x60));
        }
      }
      func_0x00010b8fd38c();
      if ((bool)uVar10) break;
      pcVar19 = FUN_10b8eb2c4;
      ___stack_chk_fail();
      plVar7 = (long *)(puVar9 + -0x80);
      plVar15 = (long *)0x0;
      unaff_x19 = puVar12;
      plVar11 = plVar16;
      puVar8 = puVar9;
    }
  }
  return;
}



/* Entry: 10b8eb2c4; end: 10b8eb2cb;  */

/* WARNING: Removing unreachable block (ram,0x00010b8eb274) */

void FUN_10b8eb2c4(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *puVar7;
  undefined1 *unaff_x21;
  undefined8 *unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    lVar6 = param_1;
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x20 = 0;
    param_1 = lVar6;
    func_0x00010b8fd3f4();
    pbVar1 = (byte *)(param_1 + 0x368);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((bVar2 & 1) == 0) {
      func_0x00010b8fe648();
      FUN_10b8eb398((undefined1 *)((long)register0x00000008 + -0x68),lVar6);
      unaff_x22 = *(undefined8 **)((long)register0x00000008 + -0x60);
      for (puVar7 = *(undefined8 **)((long)register0x00000008 + -0x68); in_ZR = puVar7 == unaff_x22,
          !(bool)in_ZR; puVar7 = puVar7 + 1) {
        uVar5 = *puVar7;
        *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
        func_0x00010b8eb44c(uVar5,0,(undefined1 *)((long)register0x00000008 + -0x78));
        func_0x000107c278e8((undefined1 *)((long)register0x00000008 + -0x78));
      }
      unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x68);
      FUN_10b8f634c((undefined1 *)((long)register0x00000008 + -0x68));
      param_1 = lVar6;
      FUN_10b8eb488(lVar6,0);
    }
    func_0x00010b8fd38c();
    if ((bool)in_ZR) break;
    unaff_x30 = FUN_10b8eb2c4;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    unaff_x19 = lVar6;
  }
  return;
}



/* Entry: 10b8eb2cc; end: 10b8eb397;  */

void FUN_10b8eb2cc(long *param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  long unaff_x19;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  
  func_0x00010b8fd408();
  pbVar1 = (byte *)(param_1 + 0x6d);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((bVar2 & 1) == 0) {
    func_0x00010b8fe648();
    param_1 = *(long **)(unaff_x19 + 0x360);
    FUN_10b8e999c();
    uStack_58 = 0x10b8f62fc;
    ppuStack_50 = &PTR_DAT_110d735a0;
    (**(code **)(*param_1 + 0x28))(param_1,&uStack_58);
    func_0x00010b8fd664();
  }
  func_0x00010b8fd3a4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__15mutex4lockEv(param_1 + 6);
  if (((*(byte *)(param_1 + 0x6d) & 1) == 0) && ((long *)param_1[0x10] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x10] + 0x210))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 6);
  return;
}



/* Entry: 10b8eb398; end: 10b8eb487;  */

void FUN_10b8eb398(long param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar3;
  long *aplStack_40 [2];
  
  func_0x00010b8fe554();
  __ZNSt3__15mutex4lockEv(param_1 + 0x510);
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  FUN_10b8f1c64();
  lVar3 = *(long *)(unaff_x19 + 0x4f8);
  while (lVar3 != *(long *)(unaff_x19 + 0x500)) {
    FUN_10b8e62c4(aplStack_40,lVar3);
    if ((aplStack_40[0] == (long *)0x0) ||
       (plVar1 = aplStack_40[0], (**(code **)(*aplStack_40[0] + 0x30))(), ((ulong)plVar1 & 1) != 0))
    {
      lVar2 = unaff_x19 + 0x4f8;
      func_0x00010b8f1d1c(lVar2,lVar3);
    }
    else {
      func_0x00010b8f1cd8();
      lVar2 = lVar3 + 0x10;
    }
    func_0x0001080d3308(aplStack_40);
    lVar3 = lVar2;
  }
  __ZNSt3__15mutex6unlockEv(unaff_x19 + 0x510);
  return;
}



/* Entry: 10b8eb488; end: 10b8eb83b;  */

undefined ** FUN_10b8eb488(long param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined **ppuVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined8 extraout_x8;
  long lVar7;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x19;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b0;
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [64];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010b8fd408();
  uStack_48 = extraout_x8;
  if (*(long *)(param_1 + 0x158) != 0) {
    FUN_10b8e1d84();
  }
  puStack_b0 = (undefined *)0x0;
  puStack_a8 = (undefined1 *)0x0;
  ppuVar6 = (undefined **)0x0;
  func_0x00010b8eb44c();
  ppuVar4 = &puStack_b0;
  func_0x000107c278e8();
  func_0x00010b8fe204();
  if (param_2 == 0) goto LAB_10b8eb818;
  ppuVar4 = &PTR___tlv_bootstrap_11340e110;
  (*(code *)PTR___tlv_bootstrap_11340e110)();
  puStack_b0 = *ppuVar4;
  puStack_a8 = auStack_90;
  uStack_98 = 8;
  uStack_a0 = 0;
  uStack_50 = 0;
  *ppuVar4 = (undefined *)0x0;
  func_0x00010b8c1d38(*(undefined8 *)(unaff_x19 + 0x460));
  FUN_10b8c40e4(*(undefined8 *)(unaff_x19 + 0x90),unaff_x19 + 0x460);
  if (*(long *)(unaff_x19 + 0x120) != 0) {
    uVar8 = *(ulong *)(unaff_x19 + 0x128);
    in_ZR = uVar8 == 0x80;
    if (uVar8 < 0x80) {
      if (uVar8 != 0) {
        lVar9 = 0;
        for (uVar10 = 0; uVar10 != uVar8; uVar10 = uVar10 + 1) {
          if (-1 < *(char *)(*(long *)(unaff_x19 + 0x110) + uVar10)) {
            FUN_10b8f60d0(*(long *)(unaff_x19 + 0x118) + lVar9);
            uVar8 = *(ulong *)(unaff_x19 + 0x128);
          }
          lVar9 = lVar9 + 0x20;
        }
        *(undefined8 *)(unaff_x19 + 0x120) = 0;
        func_0x00010b8fdedc(*(undefined8 *)(unaff_x19 + 0x110));
        *(undefined1 *)(*(long *)(unaff_x19 + 0x110) + uVar8) = 0xff;
        uVar8 = *(ulong *)(unaff_x19 + 0x128);
        in_ZR = uVar8 == 7;
        lVar9 = 6;
        if (!(bool)in_ZR) {
          lVar9 = uVar8 - (uVar8 >> 3);
        }
        *(long *)(unaff_x19 + 0x138) = lVar9 - *(long *)(unaff_x19 + 0x120);
      }
    }
    else {
      func_0x00010b8f6074(unaff_x19 + 0x110);
    }
  }
  if (*(long *)(unaff_x19 + 0x2f8) != 0) {
    uVar8 = *(ulong *)(unaff_x19 + 0x300);
    in_ZR = uVar8 == 0x80;
    if (uVar8 < 0x80) {
      if (uVar8 != 0) {
        lVar9 = 8;
        for (uVar10 = 0; uVar10 != uVar8; uVar10 = uVar10 + 1) {
          if (-1 < *(char *)(*(long *)(unaff_x19 + 0x2e8) + uVar10)) {
            func_0x0001080e0bc0(*(long *)(unaff_x19 + 0x2f0) + lVar9);
            uVar8 = *(ulong *)(unaff_x19 + 0x300);
          }
          lVar9 = lVar9 + 0x28;
        }
        *(undefined8 *)(unaff_x19 + 0x2f8) = 0;
        func_0x00010b8fdedc(*(undefined8 *)(unaff_x19 + 0x2e8));
        *(undefined1 *)(*(long *)(unaff_x19 + 0x2e8) + uVar8) = 0xff;
        uVar8 = *(ulong *)(unaff_x19 + 0x300);
        in_ZR = uVar8 == 7;
        lVar9 = 6;
        if (!(bool)in_ZR) {
          lVar9 = uVar8 - (uVar8 >> 3);
        }
        *(long *)(unaff_x19 + 0x310) = lVar9 - *(long *)(unaff_x19 + 0x2f8);
      }
    }
    else {
      func_0x00010b8f5fac((long *)(unaff_x19 + 0x2e8));
    }
  }
  lStack_d8 = 0;
  lStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  func_0x0001080e0180(&lStack_e0);
  func_0x0001080df8d0(unaff_x19 + 0x1b0,&lStack_e0);
  func_0x00010b8fe6d8();
  uStack_c0 = 0;
  lStack_d8 = 0;
  lStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  FUN_10b8eb83c(unaff_x19 + 0x160,&lStack_e0);
  func_0x00010b8fb190(&lStack_e0);
  uStack_c0 = 0;
  lStack_d8 = 0;
  lStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  FUN_10b8eb83c(unaff_x19 + 0x188,&lStack_e0);
  func_0x00010b8fb190(&lStack_e0);
  lStack_e0 = 0;
  lStack_d8 = 0;
  FUN_10b8e6bb8(unaff_x19 + 0x558,&lStack_e0);
  func_0x00010b8fe6d0();
  lStack_e0 = 0;
  lStack_d8 = 0;
  FUN_10b8e6bb8(unaff_x19 + 0x568,&lStack_e0);
  func_0x00010b8fe6d0();
  if (*(long *)(unaff_x19 + 0x140) != 0) {
    FUN_10b8e3238();
    plVar5 = *(long **)(unaff_x19 + 0x140);
    if (plVar5 != (long *)0x0) {
      *(undefined8 *)(unaff_x19 + 0x140) = 0;
      plVar1 = plVar5 + 1;
      do {
        in_ZR = *plVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((bool)in_ZR) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  ppuVar6 = (undefined **)0x0;
  func_0x00010b8fb130(unaff_x19 + 0x150);
  func_0x00010b8fe84c();
  lStack_e8 = 0;
  lStack_f0 = 0;
  __ZNSt3__15mutex4lockEv(unaff_x19 + 0x30);
  lVar9 = *(long *)(unaff_x19 + 0x80);
  if (lVar9 == 0) {
LAB_10b8eb7cc:
    lVar7 = 0;
    lStack_f0 = 0;
    lStack_e8 = 0;
  }
  else {
    if (*(long *)(lVar9 + 8) == 0) {
      lVar7 = *(long *)(lVar9 + 0x10);
      if (lVar7 == 0) goto LAB_10b8eb7cc;
      do {
        func_0x00010b8fd9c4();
        lStack_100 = lVar9;
        lStack_f8 = lVar7;
      } while (extraout_w10_00 != 0);
    }
    else {
      func_0x000107c278f0(&lStack_e0);
      lVar7 = lStack_d8;
      if (lStack_e0 == 0) {
        lVar9 = 0;
        lVar7 = 0;
      }
      else if (lStack_d8 != 0) {
        do {
          func_0x00010b8fd9c4();
        } while (extraout_w10 != 0);
      }
      func_0x000107c284e8(&lStack_e0);
      lStack_100 = lVar9;
      lStack_f8 = lVar7;
      if (lVar7 == 0) goto LAB_10b8eb7cc;
    }
    do {
      func_0x00010b8fd9c4();
    } while (extraout_w10_01 != 0);
    func_0x000107c27b90(lVar7);
    lVar7 = lStack_f8;
    lVar9 = lStack_100;
  }
  lStack_100 = 0;
  lStack_f8 = 0;
  lStack_e0 = lStack_f0;
  lStack_f0 = lVar9;
  lStack_d8 = lStack_e8;
  lStack_e8 = lVar7;
  func_0x00010b8fb23c(&lStack_e0);
  func_0x00010b8fb23c(&lStack_100);
  if (*(long *)(unaff_x19 + 0x80) != 0) {
    *(undefined8 *)(unaff_x19 + 0x80) = 0;
    func_0x000107c3105c();
  }
  __ZNSt3__15mutex6unlockEv(unaff_x19 + 0x30);
  func_0x00010b8fb23c(&lStack_f0);
  ppuVar4 = &puStack_b0;
  func_0x00010b94cb88();
LAB_10b8eb818:
  func_0x00010b8fd3bc(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (ppuVar4 != ppuVar6) {
      func_0x00010b8fb190(ppuVar4);
      *ppuVar4 = *ppuVar6;
      puVar12 = ppuVar6[2];
      puVar11 = ppuVar6[1];
      puVar13 = ppuVar6[3];
      ppuVar4[4] = ppuVar6[4];
      ppuVar4[3] = puVar13;
      ppuVar4[2] = puVar12;
      ppuVar4[1] = puVar11;
      *ppuVar6 = (undefined *)0x0;
    }
    return ppuVar4;
  }
  return ppuVar4;
}



/* Entry: 10b8eb83c; end: 10b8eb923;  */

undefined8 * FUN_10b8eb83c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_2) {
    func_0x00010b8fb190(param_1);
    *param_1 = *param_2;
    uVar2 = param_2[2];
    uVar1 = param_2[1];
    uVar3 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar3;
    param_1[2] = uVar2;
    param_1[1] = uVar1;
    *param_2 = 0;
  }
  return param_1;
}



/* Entry: 10b8eb924; end: 10b8ebae3;  */

undefined8 ***
FUN_10b8eb924(undefined8 **param_1,long *param_2,long param_3,long param_4,undefined8 param_5,
             undefined8 **param_6,undefined8 **param_7)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 ***extraout_x9;
  undefined8 ***extraout_x9_00;
  undefined8 ***pppuVar6;
  undefined8 **ppuStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [8];
  undefined8 **ppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 **ppuStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  
  func_0x00010b8fd4b8();
  uStack_70 = extraout_x8;
  func_0x000107c31088(&ppuStack_a8,param_5);
  func_0x000107c31088(auStack_b0,&DAT_10f408d65);
  func_0x00010b8fd698();
  uStack_f0 = 0;
  uStack_e8 = 1;
  uStack_d8 = 0;
  uStack_d0 = 0;
  ppuStack_a0 = &ppuStack_f8;
  uStack_98 = 0;
  uStack_90 = 2;
  uStack_80 = 0;
  uStack_78 = 1;
  pppuVar4 = &ppuStack_a0;
  puStack_e0 = auStack_b0;
  ppuStack_88 = &ppuStack_a8;
  FUN_10b9a3a64(auStack_c8);
  func_0x00010b8fde6c();
  pppuVar6 = pppuVar4 + 1;
  *pppuVar6 = (undefined8 **)0x1;
  *pppuVar4 = (undefined8 **)&PTR_FUN_110d73b00;
  pppuVar4[2] = param_1;
  pppuVar4[3] = param_6;
  pppuVar4[4] = param_7;
  func_0x0001080e0b64(pppuVar4 + 5,auStack_c8);
  *pppuVar4 = (undefined8 **)&PTR_FUN_110d73a90;
  pppuVar4[8] = param_1;
  FUN_10b9a3860(pppuVar4 + 9,auStack_c8);
  FUN_10b9a3d64(auStack_c0);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
    if (bVar2) {
      *pppuVar6 = (undefined8 **)((long)*pppuVar6 + 1);
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  pppuVar5 = &ppuStack_f8;
  ppuStack_f8 = pppuVar4;
  (**(code **)(*param_2 + 0x70))(&ppuStack_a0,param_2,pppuVar5,param_3);
  func_0x0001080e0c4c(ppuStack_f8);
  if (*(char *)(param_3 + 8) == '\x01') {
    if ((undefined8 ***)ppuStack_a8 == (undefined8 ***)0x0) {
      func_0x00010b8fddb4();
      uStack_f0 = extraout_x8_01;
      ppuStack_f8 = extraout_x9_00;
    }
    else {
      func_0x00010b8fdc0c();
      uStack_f0 = extraout_x8_00;
      ppuStack_f8 = extraout_x9;
    }
    pppuVar5 = (undefined8 ***)(param_4 + 8);
    (**(code **)(*param_2 + 0xf0))(param_2,pppuVar5,&ppuStack_f8,&uStack_98,1,param_3);
  }
  func_0x00010b8fe5fc();
  do {
    uVar3 = (undefined8 **)((long)*pppuVar6 + -1) == (undefined8 **)0x0;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
    if (bVar2) {
      *pppuVar6 = (undefined8 **)((long)*pppuVar6 + -1);
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if ((bool)uVar3) {
    func_0x00010b8fd734();
  }
  func_0x00010b8fe58c();
  func_0x000107c278f8();
  func_0x00010b8fd3bc(uStack_70);
  if ((bool)uVar3) {
    return (undefined8 ***)ppuStack_a8;
  }
  ___stack_chk_fail();
  if ((undefined8 ***)ppuStack_a8 != pppuVar5) {
    func_0x00010b8fe900();
    func_0x00010b8fb1f8();
  }
  return (undefined8 ***)ppuStack_a8;
}



/* Entry: 10b8ebae4; end: 10b8ebbef;  */

long FUN_10b8ebae4(long param_1,long param_2)

{
  if (param_1 != param_2) {
    func_0x00010b8fe900();
    func_0x00010b8fb1f8();
  }
  return param_1;
}



/* Entry: 10b8ebbf0; end: 10b8ebc1f;  */

void FUN_10b8ebbf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = 0;
  func_0x00010b8fe7c4(param_1,&lStack_18,0,param_4,param_2);
  if (lStack_18 != 0) {
    puVar1 = (undefined8 *)(lStack_18 + 8);
    lStack_18 = *(long *)(lStack_18 + 0x10);
    uStack_20 = *puVar1;
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b8ebc20; end: 10b8ebc43;  */

void FUN_10b8ebc20(void)

{
  undefined1 in_ZR;
  long *unaff_x19;
  
  func_0x00010b8fdf68();
  func_0x000107c278f4();
  func_0x00010b9abca8();
  if (((bool)in_ZR) && ((long *)*unaff_x19 != (long *)0x0)) {
    (**(code **)(*(long *)*unaff_x19 + 0x18))();
  }
  return;
}



/* Entry: 10b8ebc44; end: 10b8ebd63;  */

void FUN_10b8ebc44(code **param_1,code **param_2)

{
  char cVar1;
  undefined1 in_ZR;
  int iVar2;
  code **ppcVar3;
  code **ppcVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long **pplVar8;
  long lVar9;
  long lVar10;
  int extraout_w8;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  code *extraout_x8_01;
  undefined8 extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  long extraout_x8_06;
  long lVar11;
  undefined8 extraout_x8_07;
  undefined8 uVar12;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 *unaff_x20;
  code **unaff_x21;
  undefined4 uVar13;
  code **ppcVar14;
  long *plVar15;
  code **in_stack_00000020;
  code **in_stack_00000028;
  code **in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined1 auStack_168 [8];
  long *aplStack_160 [4];
  undefined1 auStack_140 [8];
  code **ppcStack_138;
  undefined4 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined2 uStack_118;
  code *pcStack_110;
  undefined2 uStack_108;
  long lStack_100;
  long lStack_f8;
  char cStack_f0;
  long lStack_e8;
  long **pplStack_e0;
  long lStack_d8;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  code **ppcStack_b8;
  undefined4 uStack_b0;
  long lStack_a8;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_68;
  
  func_0x00010b8feb10();
  func_0x00010b8fd358();
  ppcVar14 = (code **)*param_2;
  in_stack_00000038 = extraout_x8;
  func_0x00010b8fd6ec();
  ppcVar3 = ppcVar14;
  in_stack_00000028 = param_1;
  in_stack_00000030 = param_2;
  (**(code **)(*ppcVar14 + 0x150))(ppcVar14,&stack0x00000028,unaff_x20[3]);
  func_0x00010b8fd91c();
  if ((extraout_x8_00 & 1) != 0) {
    in_ZR = (uint)ppcVar3 == 5;
    if (4 < (uint)ppcVar3) {
      FUN_10b99f5f8(&stack0x00000028,&UNK_10f7cbdb0);
      func_0x00010b8fd500();
      ppcVar3 = in_stack_00000028;
      func_0x000104bda960();
      goto LAB_10b8ebd4c;
    }
    ppcVar14 = (code **)(ulong)*(uint *)(&UNK_10e5f68fc + ((ulong)ppcVar3 & 0xffffffff) * 4);
    ppcVar3 = (code **)unaff_x21[0x15];
    func_0x00010b8fe960();
    ppcVar4 = ppcVar14;
    (*extraout_x8_01)();
    if (((ulong)ppcVar3 & 1) != 0) {
      plVar15 = (long *)*unaff_x20;
      func_0x00010b8fd8f4();
      in_stack_00000028 = ppcVar3;
      in_stack_00000030 = ppcVar4;
      (**(code **)(*plVar15 + 0x138))(&stack0x00000020,plVar15,&stack0x00000028,unaff_x20[3]);
      func_0x00010b8fd91c();
      in_ZR = extraout_w8 == 1;
      if ((bool)in_ZR) {
        unaff_x21 = (code **)unaff_x21[0x15];
        FUN_10b9a5b54(&stack0x00000008,in_stack_00000020);
        (**(code **)(*unaff_x21 + 0x28))(unaff_x21,ppcVar14,&stack0x00000008);
        func_0x00010b8fe120();
      }
      func_0x00010b8fd2ec();
      ppcVar3 = in_stack_00000020;
      func_0x0001080e44b4();
      goto LAB_10b8ebd4c;
    }
  }
  func_0x00010b8fd2ec();
LAB_10b8ebd4c:
  func_0x00010b8fd3bc(in_stack_00000038);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b8fd358();
  uStack_68 = extraout_x8_02;
  func_0x00010b8fd634();
  func_0x00010b8fd91c();
  if ((extraout_x8_03 & 1) == 0) {
    func_0x00010b8fd2ec();
    goto LAB_10b8ec064;
  }
  ppcVar4 = ppcVar3;
  func_0x00010b8fda80(&lStack_e8);
  func_0x00010b8e5f24();
  func_0x00010b8fd91c();
  if ((extraout_x8_04 & 1) == 0) {
    func_0x00010b8fd2ec();
    goto LAB_10b8ec05c;
  }
  func_0x00010b8fe358(&lStack_f8);
  func_0x00010b8e5e04();
  func_0x00010b8fd91c();
  if ((extraout_x8_05 & 1) == 0) goto LAB_10b8ec050;
  ppcVar14 = ppcVar3;
  if ((bRam00000001137fcf88 & 1) == 0) goto LAB_10b8ec10c;
  do {
    lVar11 = lStack_f8;
    in_ZR = lStack_e8 == lRam00000001137fcf80;
    if ((bool)in_ZR) {
      in_ZR = cStack_f0 == '\b';
      if (((bool)in_ZR) && (lStack_f8 != 0)) {
        lVar9 = 0x1137fcf90;
        if ((bRam00000001137fcf98 & 1) == 0) {
          iVar2 = 0x137fcf98;
          ___cxa_guard_acquire();
          if (iVar2 != 0) {
            func_0x000107c31088(0x1137fcf90,"action");
            ___cxa_guard_release(0x1137fcf98);
          }
        }
        lVar5 = lVar11 + 0x10;
        FUN_10b8ec1a0(lVar5,0x1137fcf90);
        if ((bRam00000001137fcfa8 & 1) == 0) {
          iVar2 = 0x137fcfa8;
          ___cxa_guard_acquire();
          if (iVar2 != 0) {
            func_0x000107c31088(0x1137fcfa0,&DAT_10f2d99b4);
            ___cxa_guard_release(0x1137fcfa8);
          }
        }
        lVar10 = 0x1137fcfa0;
        lVar6 = lVar11 + 0x10;
        FUN_10b8ec1a0();
        in_ZR = *(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 0x28) == lVar5;
        if (!(bool)in_ZR) {
          FUN_10b9a9358(&lStack_100,lVar9 + 8);
          uStack_108 = 0;
          pcStack_110 = (code *)0x0;
          in_ZR = *(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 0x28) == lVar6;
          uVar13 = SUB84(ppcVar3,0);
          if ((bool)in_ZR) {
LAB_10b8ebfe0:
            lVar11 = lStack_100;
            if (lStack_100 != 0) {
              do {
                func_0x00010b8fd810();
              } while (extraout_w10 != 0);
            }
            pcStack_c8 = FUN_10b8f66b8;
            ppuStack_c0 = &PTR_FUN_110d73620;
            ppcStack_b8 = unaff_x21;
            uStack_b0 = uVar13;
            if (lVar11 != 0) {
              do {
                func_0x00010b8fd810();
              } while (extraout_w10_00 != 0);
            }
            lStack_a8 = lVar11;
            FUN_10b8ec1c8(unaff_x21[0x13],&pcStack_c8);
            func_0x00010b8fdfb4(ppuStack_c0);
            func_0x000107c278f8(lVar11);
          }
          else {
            ppcVar14 = &pcStack_110;
            lVar10 = lVar10 + 8;
            FUN_10b9a9084();
            cVar1 = (char)uStack_108;
            if ((char)uStack_108 == '\0') goto LAB_10b8ebfe0;
            in_ZR = (char)uStack_108 == '\t';
            if ((!(bool)in_ZR) || (pcStack_110 == (code *)0x0)) {
              func_0x000107c31084();
              FUN_10b9a8d84(aplStack_160,cVar1);
              pplVar8 = aplStack_160;
              func_0x000107c27e5c();
              pplStack_e0 = pplVar8;
              lStack_d8 = lVar10;
              func_0x000107c2793c(&UNK_10f7cbdd4);
              func_0x00010b8fe304(&ppcStack_138);
              func_0x00010b8fde60(auStack_140);
              FUN_10b99f560(&pplStack_e0,auStack_140);
              func_0x00010b8fd500();
              func_0x000104bda960(pplStack_e0);
              func_0x00010b8fe7bc();
              func_0x00010b8fe0f8();
              func_0x00010b8fe364();
              FUN_10b9a8d98(&pcStack_110);
              func_0x00010b8fe768();
              unaff_x21 = ppcVar14;
              goto LAB_10b8ec054;
            }
            lVar11 = 0;
            ppcStack_138 = unaff_x21;
            uStack_130 = uVar13;
            if (lStack_100 != 0) {
              do {
                func_0x00010b8fdb28();
                lVar11 = extraout_x8_06;
              } while (extraout_w11 != 0);
            }
            puVar7 = &uStack_120;
            lStack_128 = lVar11;
            FUN_10b9a8f04(puVar7,&pcStack_110);
            ppcVar3 = &pcStack_98;
            pcStack_98 = FUN_10b8f65d8;
            ppuStack_90 = &PTR_FUN_110d73600;
            func_0x00010b8fdb18();
            *puVar7 = ppcStack_138;
            *(undefined4 *)(puVar7 + 1) = uStack_130;
            uVar12 = 0;
            if (lStack_128 != 0) {
              do {
                func_0x00010b8fdb28();
                uVar12 = extraout_x8_07;
              } while (extraout_w11_00 != 0);
            }
            puVar7[2] = uVar12;
            puVar7[3] = uStack_120;
            *(undefined2 *)(puVar7 + 4) = uStack_118;
            uStack_120 = 0;
            uStack_118 = 0;
            puStack_88 = puVar7;
            FUN_10b8ec1c8(unaff_x21[0x13],&pcStack_98);
            func_0x00010b8fd804(ppuStack_90);
            FUN_10b8ec21c(&ppcStack_138);
          }
          FUN_10b9a8d98(&pcStack_110);
          func_0x00010b8fe768();
LAB_10b8ec050:
          func_0x00010b8fd2ec();
          goto LAB_10b8ec054;
        }
      }
      FUN_10b99f5f8(&ppcStack_138,&UNK_10f7cbdc1);
      func_0x00010b8fd500();
      func_0x000104bda960(ppcStack_138);
    }
    else {
      func_0x000107c31084();
      func_0x00010b8fe15c();
      aplStack_160[0] = &lStack_e8;
      func_0x000107c2793c(&UNK_10f7cbe00);
      func_0x00010b8fdf54(&ppcStack_138);
      func_0x00010b8fde60(auStack_168);
      func_0x00010b8fe560();
      FUN_10b99f560();
      func_0x00010b8fd500();
      func_0x00010b8fe628();
      func_0x00010b8fd9e0();
      func_0x00010b8fe0f8();
      unaff_x21 = ppcVar4;
    }
LAB_10b8ec054:
    FUN_10b9a8d98(&lStack_f8);
LAB_10b8ec05c:
    func_0x000107c278f8(lStack_e8);
    ppcVar14 = ppcVar3;
LAB_10b8ec064:
    func_0x00010b8fd3bc(uStack_68);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
LAB_10b8ec10c:
    ppcVar4 = (code **)0x1137fcf88;
    ___cxa_guard_acquire();
    ppcVar3 = ppcVar14;
    if ((int)ppcVar4 != 0) {
      func_0x000107c31088(0x1137fcf80,&UNK_10f7cbd10);
      ppcVar4 = (code **)0x1137fcf88;
      ___cxa_guard_release();
    }
  } while( true );
}



/* Entry: 10b8ebd64; end: 10b8ec19f;  */

void FUN_10b8ebd64(code **param_1)

{
  char cVar1;
  undefined1 in_ZR;
  int iVar2;
  code **ppcVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long **pplVar7;
  long lVar8;
  long lVar9;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  long extraout_x8_03;
  long lVar10;
  undefined8 extraout_x8_04;
  undefined8 uVar11;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int extraout_w11_00;
  code **unaff_x21;
  undefined4 uVar12;
  code **unaff_x22;
  undefined1 auStack_168 [8];
  long *aplStack_160 [4];
  undefined1 auStack_140 [8];
  code **ppcStack_138;
  undefined4 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined2 uStack_118;
  code *pcStack_110;
  undefined2 uStack_108;
  long lStack_100;
  long lStack_f8;
  char cStack_f0;
  long lStack_e8;
  undefined8 **ppuStack_e0;
  long lStack_d8;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  code **ppcStack_b8;
  undefined4 uStack_b0;
  long lStack_a8;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_68;
  
  func_0x00010b8fd358();
  uStack_68 = extraout_x8;
  func_0x00010b8fd634();
  func_0x00010b8fd91c();
  if ((extraout_x8_00 & 1) == 0) {
    func_0x00010b8fd2ec();
    goto LAB_10b8ec064;
  }
  ppcVar3 = param_1;
  func_0x00010b8fda80(&lStack_e8);
  func_0x00010b8e5f24();
  func_0x00010b8fd91c();
  if ((extraout_x8_01 & 1) == 0) {
    func_0x00010b8fd2ec();
    goto LAB_10b8ec05c;
  }
  func_0x00010b8fe358(&lStack_f8);
  func_0x00010b8e5e04();
  func_0x00010b8fd91c();
  if ((extraout_x8_02 & 1) == 0) goto LAB_10b8ec050;
  unaff_x22 = param_1;
  if ((bRam00000001137fcf88 & 1) == 0) goto LAB_10b8ec10c;
  do {
    lVar10 = lStack_f8;
    in_ZR = lStack_e8 == lRam00000001137fcf80;
    if ((bool)in_ZR) {
      in_ZR = cStack_f0 == '\b';
      if (((bool)in_ZR) && (lStack_f8 != 0)) {
        lVar8 = 0x1137fcf90;
        if ((bRam00000001137fcf98 & 1) == 0) {
          iVar2 = 0x137fcf98;
          ___cxa_guard_acquire();
          if (iVar2 != 0) {
            func_0x000107c31088(0x1137fcf90,"action");
            ___cxa_guard_release(0x1137fcf98);
          }
        }
        lVar4 = lVar10 + 0x10;
        FUN_10b8ec1a0(lVar4,0x1137fcf90);
        if ((bRam00000001137fcfa8 & 1) == 0) {
          iVar2 = 0x137fcfa8;
          ___cxa_guard_acquire();
          if (iVar2 != 0) {
            func_0x000107c31088(0x1137fcfa0,&DAT_10f2d99b4);
            ___cxa_guard_release(0x1137fcfa8);
          }
        }
        lVar9 = 0x1137fcfa0;
        lVar5 = lVar10 + 0x10;
        FUN_10b8ec1a0();
        in_ZR = *(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 0x28) == lVar4;
        if (!(bool)in_ZR) {
          FUN_10b9a9358(&lStack_100,lVar8 + 8);
          uStack_108 = 0;
          pcStack_110 = (code *)0x0;
          in_ZR = *(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 0x28) == lVar5;
          uVar12 = SUB84(param_1,0);
          if ((bool)in_ZR) {
LAB_10b8ebfe0:
            lVar10 = lStack_100;
            if (lStack_100 != 0) {
              do {
                func_0x00010b8fd810();
              } while (extraout_w10 != 0);
            }
            pcStack_c8 = FUN_10b8f66b8;
            ppuStack_c0 = &PTR_FUN_110d73620;
            ppcStack_b8 = unaff_x21;
            uStack_b0 = uVar12;
            if (lVar10 != 0) {
              do {
                func_0x00010b8fd810();
              } while (extraout_w10_00 != 0);
            }
            lStack_a8 = lVar10;
            FUN_10b8ec1c8(unaff_x21[0x13],&pcStack_c8);
            func_0x00010b8fdfb4(ppuStack_c0);
            func_0x000107c278f8(lVar10);
          }
          else {
            ppcVar3 = &pcStack_110;
            lVar9 = lVar9 + 8;
            FUN_10b9a9084();
            cVar1 = (char)uStack_108;
            if ((char)uStack_108 == '\0') goto LAB_10b8ebfe0;
            in_ZR = (char)uStack_108 == '\t';
            if ((!(bool)in_ZR) || (pcStack_110 == (code *)0x0)) {
              func_0x000107c31084();
              FUN_10b9a8d84(aplStack_160,cVar1);
              pplVar7 = aplStack_160;
              func_0x000107c27e5c();
              ppuStack_e0 = pplVar7;
              lStack_d8 = lVar9;
              func_0x000107c2793c(&UNK_10f7cbdd4);
              func_0x00010b8fe304(&ppcStack_138);
              func_0x00010b8fde60(auStack_140);
              FUN_10b99f560(&ppuStack_e0,auStack_140);
              func_0x00010b8fd500();
              func_0x000104bda960(ppuStack_e0);
              func_0x00010b8fe7bc();
              func_0x00010b8fe0f8();
              func_0x00010b8fe364();
              FUN_10b9a8d98(&pcStack_110);
              func_0x00010b8fe768();
              unaff_x21 = ppcVar3;
              goto LAB_10b8ec054;
            }
            lVar10 = 0;
            ppcStack_138 = unaff_x21;
            uStack_130 = uVar12;
            if (lStack_100 != 0) {
              do {
                func_0x00010b8fdb28();
                lVar10 = extraout_x8_03;
              } while (extraout_w11 != 0);
            }
            puVar6 = &uStack_120;
            lStack_128 = lVar10;
            FUN_10b9a8f04(puVar6,&pcStack_110);
            param_1 = &pcStack_98;
            pcStack_98 = FUN_10b8f65d8;
            ppuStack_90 = &PTR_FUN_110d73600;
            func_0x00010b8fdb18();
            *puVar6 = ppcStack_138;
            *(undefined4 *)(puVar6 + 1) = uStack_130;
            uVar11 = 0;
            if (lStack_128 != 0) {
              do {
                func_0x00010b8fdb28();
                uVar11 = extraout_x8_04;
              } while (extraout_w11_00 != 0);
            }
            puVar6[2] = uVar11;
            puVar6[3] = uStack_120;
            *(undefined2 *)(puVar6 + 4) = uStack_118;
            uStack_120 = 0;
            uStack_118 = 0;
            puStack_88 = puVar6;
            FUN_10b8ec1c8(unaff_x21[0x13],&pcStack_98);
            func_0x00010b8fd804(ppuStack_90);
            FUN_10b8ec21c(&ppcStack_138);
          }
          FUN_10b9a8d98(&pcStack_110);
          func_0x00010b8fe768();
LAB_10b8ec050:
          func_0x00010b8fd2ec();
          goto LAB_10b8ec054;
        }
      }
      FUN_10b99f5f8(&ppcStack_138,&UNK_10f7cbdc1);
      func_0x00010b8fd500();
      func_0x000104bda960(ppcStack_138);
    }
    else {
      func_0x000107c31084();
      func_0x00010b8fe15c();
      aplStack_160[0] = &lStack_e8;
      func_0x000107c2793c(&UNK_10f7cbe00);
      func_0x00010b8fdf54(&ppcStack_138);
      func_0x00010b8fde60(auStack_168);
      func_0x00010b8fe560();
      FUN_10b99f560();
      func_0x00010b8fd500();
      func_0x00010b8fe628();
      func_0x00010b8fd9e0();
      func_0x00010b8fe0f8();
      unaff_x21 = ppcVar3;
    }
LAB_10b8ec054:
    FUN_10b9a8d98(&lStack_f8);
LAB_10b8ec05c:
    func_0x000107c278f8(lStack_e8);
    unaff_x22 = param_1;
LAB_10b8ec064:
    func_0x00010b8fd3bc(uStack_68);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
LAB_10b8ec10c:
    ppcVar3 = (code **)0x1137fcf88;
    ___cxa_guard_acquire();
    param_1 = unaff_x22;
    if ((int)ppcVar3 != 0) {
      func_0x000107c31088(0x1137fcf80,&UNK_10f7cbd10);
      ppcVar3 = (code **)0x1137fcf88;
      ___cxa_guard_release();
    }
  } while( true );
}



/* Entry: 10b8ec1a0; end: 10b8ec1c7;  */

long FUN_10b8ec1a0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  func_0x00010b8fd9d4();
  func_0x000104bd9d64();
  func_0x00010b8fe008();
  plVar1 = param_1;
  func_0x0001080cfd0c();
  if ((int)plVar1 == 0) {
    lVar2 = *param_1 + param_1[3];
  }
  else {
    lVar2 = *param_1 + lStack_28;
  }
  return lVar2;
}



/* Entry: 10b8ec1c8; end: 10b8ec21b;  */

void FUN_10b8ec1c8(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined8 uStack_60;
  
  func_0x00010b8fd9d4();
  func_0x00010b8fd3f4();
  func_0x00010b8fe1ac();
  func_0x00010b8fdc30();
  func_0x00010b94b6f8();
  func_0x00010b8fd6f8(uStack_60);
  func_0x00010b8fe1dc();
  func_0x00010b8fd38c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b8fe824();
  func_0x000107c278f4(unaff_x19 + 0x10);
  return;
}



/* Entry: 10b8ec21c; end: 10b8ec23f;  */

void FUN_10b8ec21c(void)

{
  long unaff_x19;
  
  func_0x00010b8fe824();
  func_0x000107c278f4(unaff_x19 + 0x10);
  return;
}



/* Entry: 10b8ec240; end: 10b8ec2b7;  */

undefined8 **** FUN_10b8ec240(undefined8 ****param_1,long *param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong extraout_x8_02;
  undefined8 extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 ****unaff_x19;
  uint uVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****unaff_x22;
  undefined8 ***pppuStack_e0;
  undefined8 ***pppuStack_d8;
  char cStack_d0;
  byte bStack_cf;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  undefined8 ***pppuStack_b8;
  char cStack_b0;
  byte bStack_af;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 ***pppuStack_48;
  undefined1 **ppuStack_40;
  undefined8 uStack_38;
  
  plVar1 = param_2;
  func_0x00010b8fd3e0();
  uStack_38 = extraout_x8;
  func_0x00010b8fd634();
  func_0x00010b8fd91c();
  if ((extraout_x8_00 & 1) != 0) {
    unaff_x22 = (undefined8 ****)*param_2;
    ppppuVar4 = param_1;
    func_0x00010b8fd8f4();
    uVar3 = (uint)param_1;
    param_1 = unaff_x22;
    pppuStack_48 = ppppuVar4;
    ppuStack_40 = (undefined1 **)plVar1;
    func_0x00010b8dc8f8(unaff_x22,&pppuStack_48,uVar3 & 0xff,param_2[3]);
  }
  func_0x00010b8fea00(*(undefined8 *)(*param_2 + 0x140));
  func_0x00010b8fd3bc(uStack_38);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_10b8ec2b8;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x00010b8feab4();
  func_0x00010b8fd3e0();
  uStack_98 = extraout_x8_01;
  func_0x00010b8fd830(&pppuStack_d8);
  func_0x00010b8fd91c();
  if ((extraout_x8_02 & 1) == 0) {
    func_0x00010b8fd2ec();
  }
  else {
    in_ZR = cStack_d0 == '\v';
    if ((((bool)in_ZR) && ((bStack_cf & 1) != 0)) &&
       ((undefined8 ****)pppuStack_d8 != (undefined8 ****)0x0)) {
      do {
        func_0x00010b8fd7f4();
      } while (extraout_w10 != 0);
      do {
        func_0x00010b8fd7f4();
      } while (extraout_w10_00 != 0);
      pcStack_c8 = FUN_10b8f6764;
      ppuStack_c0 = &PTR_FUN_110d73640;
      pppuStack_b8 = pppuStack_d8;
      FUN_10b8ec1c8(unaff_x22[0x13],&pcStack_c8);
      func_0x00010b8fd604(ppuStack_c0);
      func_0x00010b8fd2ec();
      param_1 = (undefined8 ****)pppuStack_d8;
    }
    else {
      func_0x00010b8fdf30();
      func_0x00010b8fd500();
      func_0x00010b8fdd68();
      param_1 = (undefined8 ****)0x0;
    }
    func_0x000104bda3ac(param_1);
  }
  func_0x00010b8fdf8c();
  func_0x00010b8fd3bc(uStack_98);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  uVar2 = 0x10b8ec39c;
  func_0x00010b8feb90();
  ppuStack_40 = &puStack_60;
  uStack_38 = uVar2;
  func_0x00010b8feab4();
  func_0x00010b8fd3e0();
  func_0x00010b8fd830(&pppuStack_b8);
  func_0x00010b8fd91c();
  ppppuVar4 = (undefined8 ****)pppuStack_b8;
  if ((extraout_x8_04 & 1) == 0) {
    func_0x00010b8fd2ec();
    goto LAB_10b8ec4c0;
  }
  in_ZR = cStack_b0 == '\v';
  if ((((bool)in_ZR) && ((bStack_af & 1) != 0)) &&
     ((undefined8 ****)pppuStack_b8 != (undefined8 ****)0x0)) {
    do {
      func_0x00010b8fdb60();
    } while (extraout_w9 != 0);
    func_0x00010b8fda80(&pcStack_c8);
    func_0x00010b8e5e04();
    func_0x00010b8fd91c();
    if ((extraout_x8_05 & 1) == 0) {
LAB_10b8ec468:
      func_0x00010b8fd2ec();
    }
    else {
      in_ZR = (char)ppuStack_c0 == '\t';
      if ((bool)in_ZR) {
        do {
          func_0x00010b8fdb60();
        } while (extraout_w9_00 != 0);
        pppuStack_e0 = ppppuVar4;
        FUN_10b9a8f04(&pppuStack_d8,&pcStack_c8);
        pcStack_a8 = FUN_10b8f67f0;
        FUN_10b8f6834(&uStack_a0,&pppuStack_e0);
        FUN_10b8ec1c8(unaff_x22[0x13],&pcStack_a8);
        func_0x00010b8fd604(uStack_a0);
        FUN_10b8ec4e0(&pppuStack_e0);
        goto LAB_10b8ec468;
      }
      func_0x00010b8fdf30();
      func_0x00010b8fd500();
      func_0x00010b8fdd68();
    }
    FUN_10b9a8d98(&pcStack_c8);
  }
  else {
    func_0x00010b8fdf30();
    func_0x00010b8fd500();
    func_0x00010b8fdd68();
    ppppuVar4 = (undefined8 ****)0x0;
  }
  func_0x000104bda3ac(ppppuVar4);
LAB_10b8ec4c0:
  ppppuVar4 = &pppuStack_b8;
  FUN_10b9a8d98(ppppuVar4);
  func_0x00010b8fd3bc(extraout_x8_03);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b8fead8();
    FUN_10b9a8d98();
    func_0x0001003adc0c();
    func_0x000104bda3ac();
    return unaff_x19;
  }
  return ppppuVar4;
}



/* Entry: 10b8ec2b8; end: 10b8ec4df;  */

undefined8 **** FUN_10b8ec2b8(undefined8 ****param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 ****unaff_x19;
  undefined8 ****ppppuVar1;
  long unaff_x22;
  undefined8 ***pppuStack_90;
  undefined8 ***pppuStack_88;
  char cStack_80;
  byte bStack_7f;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 ***pppuStack_68;
  char cStack_60;
  byte bStack_5f;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010b8feab4();
  func_0x00010b8fd3e0();
  uStack_48 = extraout_x8;
  func_0x00010b8fd830(&pppuStack_88);
  func_0x00010b8fd91c();
  if ((extraout_x8_00 & 1) == 0) {
    func_0x00010b8fd2ec();
  }
  else {
    in_ZR = cStack_80 == '\v';
    if ((((bool)in_ZR) && ((bStack_7f & 1) != 0)) &&
       ((undefined8 ****)pppuStack_88 != (undefined8 ****)0x0)) {
      do {
        func_0x00010b8fd7f4();
      } while (extraout_w10 != 0);
      do {
        func_0x00010b8fd7f4();
      } while (extraout_w10_00 != 0);
      pcStack_78 = FUN_10b8f6764;
      ppuStack_70 = &PTR_FUN_110d73640;
      pppuStack_68 = pppuStack_88;
      FUN_10b8ec1c8(*(undefined8 *)(unaff_x22 + 0x98),&pcStack_78);
      func_0x00010b8fd604(ppuStack_70);
      func_0x00010b8fd2ec();
      param_1 = (undefined8 ****)pppuStack_88;
    }
    else {
      func_0x00010b8fdf30();
      func_0x00010b8fd500();
      func_0x00010b8fdd68();
      param_1 = (undefined8 ****)0x0;
    }
    func_0x000104bda3ac(param_1);
  }
  func_0x00010b8fdf8c();
  func_0x00010b8fd3bc(uStack_48);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010b8feb90();
  func_0x00010b8feab4();
  func_0x00010b8fd3e0();
  func_0x00010b8fd830(&pppuStack_68);
  func_0x00010b8fd91c();
  ppppuVar1 = (undefined8 ****)pppuStack_68;
  if ((extraout_x8_02 & 1) == 0) {
    func_0x00010b8fd2ec();
    goto LAB_10b8ec4c0;
  }
  in_ZR = cStack_60 == '\v';
  if ((((bool)in_ZR) && ((bStack_5f & 1) != 0)) &&
     ((undefined8 ****)pppuStack_68 != (undefined8 ****)0x0)) {
    do {
      func_0x00010b8fdb60();
    } while (extraout_w9 != 0);
    func_0x00010b8fda80(&pcStack_78);
    func_0x00010b8e5e04();
    func_0x00010b8fd91c();
    if ((extraout_x8_03 & 1) == 0) {
LAB_10b8ec468:
      func_0x00010b8fd2ec();
    }
    else {
      in_ZR = (char)ppuStack_70 == '\t';
      if ((bool)in_ZR) {
        do {
          func_0x00010b8fdb60();
        } while (extraout_w9_00 != 0);
        pppuStack_90 = ppppuVar1;
        FUN_10b9a8f04(&pppuStack_88,&pcStack_78);
        pcStack_58 = FUN_10b8f67f0;
        FUN_10b8f6834(&uStack_50,&pppuStack_90);
        FUN_10b8ec1c8(*(undefined8 *)(unaff_x22 + 0x98),&pcStack_58);
        func_0x00010b8fd604(uStack_50);
        FUN_10b8ec4e0(&pppuStack_90);
        goto LAB_10b8ec468;
      }
      func_0x00010b8fdf30();
      func_0x00010b8fd500();
      func_0x00010b8fdd68();
    }
    FUN_10b9a8d98(&pcStack_78);
  }
  else {
    func_0x00010b8fdf30();
    func_0x00010b8fd500();
    func_0x00010b8fdd68();
    ppppuVar1 = (undefined8 ****)0x0;
  }
  func_0x000104bda3ac(ppppuVar1);
LAB_10b8ec4c0:
  ppppuVar1 = &pppuStack_68;
  FUN_10b9a8d98(ppppuVar1);
  func_0x00010b8fd3bc(extraout_x8_01);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b8fead8();
    FUN_10b9a8d98();
    func_0x0001003adc0c();
    func_0x000104bda3ac();
    return unaff_x19;
  }
  return ppppuVar1;
}



/* Entry: 10b8ec4e0; end: 10b8ec503;  */

undefined8 FUN_10b8ec4e0(void)

{
  undefined8 unaff_x19;
  
  func_0x00010b8fead8();
  FUN_10b9a8d98();
  func_0x0001003adc0c();
  func_0x000104bda3ac();
  return unaff_x19;
}



/* Entry: 10b8ec504; end: 10b8ec513;  */

void FUN_10b8ec504(long *param_1,long param_2,long *param_3)

{
  long lVar1;
  
  param_3 = (long *)*param_3;
  if (*(int *)(param_2 + 0x454) != -1) {
                    /* WARNING: Could not recover jumptable at 0x00010b8dba24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x230))();
    return;
  }
  *param_1 = param_3[0x20];
  lVar1 = param_3[0x21];
  param_1[2] = param_3[0x22];
  param_1[1] = lVar1;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}


