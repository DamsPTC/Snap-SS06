/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1090f10b0; end: 1090f117b;  */

void FUN_1090f10b0(long *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  if ((*(byte *)(param_2 + 0xb8) & 1) == 0) {
    lVar4 = *(long *)(param_2 + 0x50);
  }
  else {
    lVar4 = 0;
  }
  uVar5 = *(ulong *)(param_2 + 0xd0);
  uVar6 = uVar5 - *(long *)(param_2 + 200);
  uVar2 = lVar4 + *(long *)(param_2 + 200) * 4;
  func_0x0001090fd2e4(param_3,uVar2,uVar6);
  uVar3 = *(long *)(param_2 + 200) + param_3;
  *(ulong *)(param_2 + 200) = uVar3;
  FUN_1090f117c(param_1);
  if (uVar5 <= uVar3) {
    *(undefined1 *)(param_1 + 4) = 1;
  }
  if (param_3 < uVar6) {
    *(undefined1 *)((long)param_1 + 0x21) = 1;
  }
  lVar4 = param_2;
  FUN_1090f0fb4();
  *param_1 = lVar4;
  param_1[1] = uVar3;
  uVar5 = (ulong)*(ushort *)(*(long *)(param_2 + 0x40) + 0x14);
  uVar3 = 0;
  if (uVar5 != 0) {
    uVar3 = uVar2 / uVar5;
  }
  uVar1 = *(uint *)(*(long *)(param_2 + 0x40) + 0x18);
  param_1[2] = uVar3;
  param_1[3] = (ulong)uVar1 | 0x100000000;
  return;
}



/* Entry: 1090f117c; end: 1090f119b;  */

void FUN_1090f117c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0x100000000;
  param_1[2] = 0;
  param_1[3] = 0x100000000;
  *(undefined2 *)(param_1 + 4) = 0;
  return;
}



/* Entry: 1090f119c; end: 1090fdeeb;  */

undefined8 *
FUN_1090f119c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,long *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_DAT_110adaf38;
  param_1[4] = &PTR_DAT_110adaf58;
  *param_1 = &PTR_DAT_110adaef0;
  func_0x0001090f170c(param_1 + 5);
  *(undefined4 *)(param_1 + 6) = 0;
  func_0x0001090f1738(param_1 + 7,param_5,param_2,param_1 + 5);
  func_0x0001090f1928(param_1 + 8,param_4,param_3,param_1 + 5);
  lVar4 = *param_4;
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
  param_1[9] = lVar4;
  lVar4 = *param_5;
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
  param_1[10] = lVar4;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x100000001;
  func_0x0001090efe54(param_1[8],param_1 + 3);
  func_0x0001090f300c(param_1[7],param_1 + 4);
  (**(code **)(*(long *)*param_5 + 0x48))((long *)*param_5,*param_4);
  func_0x0001090f1c34(*param_5);
  return param_1;
}



/* Entry: 1090fdeec; end: 1090fdfdb;  */

undefined8 * FUN_1090fdeec(undefined8 *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110adbb78;
  FUN_1090fdff4(&uStack_48,param_2);
  FUN_1090fe20c(&lStack_40,uStack_48);
  lVar5 = 0;
  if (lStack_40 != 0) {
    lVar5 = lStack_40 + 0x18;
  }
  param_1[3] = lVar5;
  param_1[4] = uStack_38;
  lStack_40 = 0;
  uStack_38 = 0;
  func_0x0001090fe29c(&lStack_40);
  func_0x0001090fe200(uStack_48);
  FUN_1090fe2c0(&lStack_40,param_2,param_4);
  param_1[6] = uStack_38;
  param_1[5] = lStack_40;
  lStack_40 = 0;
  uStack_38 = 0;
  FUN_1090fe558(&lStack_40);
  lVar5 = *param_3;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_1[7] = lVar5;
  lVar5 = *param_2;
  if (lVar5 != 0) {
    piVar2 = (int *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_1[8] = lVar5;
  return param_1;
}



/* Entry: 1090fdfdc; end: 1090fdfdf;  */

undefined8 * FUN_1090fdfdc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110adbb78;
  func_0x000107c278f4(param_1 + 8);
  FUN_109097110(param_1 + 7);
  func_0x0001090d097c(param_1 + 5);
  func_0x0001090e1fd4(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 1090fdfe0; end: 1090fdff3;  */

void FUN_1090fdfe0(void)

{
  func_0x0001090fe57c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090fdff4; end: 1090fe02f;  */

void FUN_1090fdff4(undefined8 *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 auStack_38 [3];
  
  func_0x0001090fe5f0();
  FUN_1090fe030(auStack_38);
  *param_1 = auStack_38[0];
  func_0x0001090fe5d0();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_1090fe030;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_1090fe050(&uStack_51,param_2);
  return;
}



/* Entry: 1090fe030; end: 1090fe04f;  */

void FUN_1090fe030(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1090fe050(&uStack_11,param_1);
  return;
}



/* Entry: 1090fe050; end: 1090fe0b3;  */

void FUN_1090fe050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  undefined8 *extraout_x8;
  undefined1 *extraout_x8_00;
  undefined1 *puVar3;
  int extraout_w11;
  undefined1 *puStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  
  puVar1 = auStack_40;
  func_0x0001090fe5f0();
  FUN_1090fe0d0(auStack_40,1);
  FUN_1090fe114(lStack_30,param_3);
  lVar2 = lStack_30;
  lStack_30 = 0;
  FUN_1090fe0b4(param_1,lVar2 + 0x18);
  FUN_1090fe1f0();
  func_0x0001090fe5d0();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *extraout_x8 = puVar1;
  extraout_x8[1] = lVar2;
  puVar3 = (undefined1 *)0x0;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1 + 8;
  }
  if ((puVar3 != (undefined1 *)0x0) &&
     ((*(long *)(puVar3 + 8) == 0 || (*(long *)(*(long *)(puVar3 + 8) + 8) == -1)))) {
    pcStack_48 = FUN_1090fe0b4;
    lStack_58 = extraout_x8[1];
    puStack_60 = puVar1;
    puStack_50 = &stack0xfffffffffffffff0;
    if (lStack_58 != 0) {
      do {
        func_0x0001090fe604();
        puVar3 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    func_0x000107c278e4(puVar3,&puStack_60);
    func_0x000107c284e8(&puStack_60);
    return;
  }
  return;
}



/* Entry: 1090fe0b4; end: 1090fe0cf;  */

void FUN_1090fe0b4(long *param_1,long param_2,long param_3)

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
        func_0x0001090fe604();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x000107c278e4(lVar1,&lStack_20);
    func_0x000107c284e8(&lStack_20);
    return;
  }
  return;
}



/* Entry: 1090fe0d0; end: 1090fe0f7;  */

long FUN_1090fe0d0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1090fe0f8();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1090fe0f8; end: 1090fe113;  */

void FUN_1090fe0f8(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if ((ulong)param_2 >> 0x3a == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 << 6);
    return;
  }
  func_0x000104bfe188();
  *param_1 = &PTR_DAT_110adbbc0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_FUN_110adbc60;
  param_1[6] = &PTR_DAT_110adbcb0;
  lVar4 = *param_2;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[7] = lVar4;
  return;
}



/* Entry: 1090fe114; end: 1090fe163;  */

void FUN_1090fe114(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *param_1 = &PTR_DAT_110adbbc0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_FUN_110adbc60;
  param_1[6] = &PTR_DAT_110adbcb0;
  lVar4 = *param_2;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[7] = lVar4;
  return;
}



/* Entry: 1090fe164; end: 1090fe177;  */

void FUN_1090fe164(void)

{
  func_0x0001090fe180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090fe178; end: 1090fe18f;  */

void FUN_1090fe178(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001090fe628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1090fe190; end: 1090fe1ef;  */

void FUN_1090fe190(long param_1,long param_2,undefined8 param_3)

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
        func_0x0001090fe604();
        param_2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x000107c278e4(param_2,&uStack_20);
    func_0x000107c284e8(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1090fe1f0; end: 1090fe20b;  */

void FUN_1090fe1f0(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1090fe20c; end: 1090fe2bf;  */

void FUN_1090fe20c(long *param_1,long param_2)

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
        func_0x0001090fe634();
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
          func_0x0001090fe634();
        } while (extraout_w10 != 0);
      }
    }
    func_0x000107c284e8(&lStack_30);
  }
  return;
}



/* Entry: 1090fe2c0; end: 1090fe2e3;  */

void FUN_1090fe2c0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_1090fe2e4(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 1090fe2e4; end: 1090fe35f;  */

void FUN_1090fe2e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar4;
  int extraout_w11;
  int extraout_w11_00;
  undefined1 *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [16];
  long lStack_40;
  
  puVar1 = auStack_50;
  func_0x0001090fe5f0();
  FUN_1090fe37c(auStack_50,1);
  FUN_1090fe3d4(lStack_40,param_3,param_4);
  lVar2 = lStack_40;
  lStack_40 = 0;
  FUN_1090fe360(param_1,lVar2 + 0x18);
  FUN_1090fe548();
  func_0x0001090fe5d0();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *extraout_x8 = puVar1;
  extraout_x8[1] = lVar2;
  puVar3 = (undefined8 *)0x0;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = (undefined8 *)(puVar1 + 8);
  }
  if ((puVar3 != (undefined8 *)0x0) && ((puVar3[1] == 0 || (*(long *)(puVar3[1] + 8) == -1)))) {
    pcStack_58 = FUN_1090fe360;
    lStack_78 = extraout_x8[1];
    uVar4 = 0;
    puStack_80 = puVar1;
    puStack_60 = &stack0xfffffffffffffff0;
    if (lStack_78 != 0) {
      do {
        func_0x0001090fe604();
      } while (extraout_w11 != 0);
      do {
        func_0x0001090fe604();
        uVar4 = extraout_x8_00;
      } while (extraout_w11_00 != 0);
    }
    uStack_68 = puVar3[1];
    uStack_70 = *puVar3;
    *puVar3 = puVar1;
    puVar3[1] = uVar4;
    FUN_1090fe524(&uStack_70);
    FUN_1090fe558(&puStack_80);
    return;
  }
  return;
}



/* Entry: 1090fe360; end: 1090fe37b;  */

void FUN_1090fe360(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long extraout_x8;
  long lVar2;
  int extraout_w11;
  int extraout_w11_00;
  long lStack_30;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  plVar1 = (long *)0x0;
  if (param_2 != 0) {
    plVar1 = (long *)(param_2 + 8);
  }
  if ((plVar1 != (long *)0x0) && ((plVar1[1] == 0 || (*(long *)(plVar1[1] + 8) == -1)))) {
    lStack_28 = param_1[1];
    lVar2 = 0;
    lStack_30 = param_2;
    if (lStack_28 != 0) {
      do {
        func_0x0001090fe604();
      } while (extraout_w11 != 0);
      do {
        func_0x0001090fe604();
        lVar2 = extraout_x8;
      } while (extraout_w11_00 != 0);
    }
    lStack_18 = plVar1[1];
    lStack_20 = *plVar1;
    *plVar1 = param_2;
    plVar1[1] = lVar2;
    FUN_1090fe524(&lStack_20);
    FUN_1090fe558(&lStack_30);
    return;
  }
  return;
}



/* Entry: 1090fe37c; end: 1090fe3a3;  */

long FUN_1090fe37c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1090fe3a4();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1090fe3a4; end: 1090fe3d3;  */

undefined8 * FUN_1090fe3a4(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0xf83e0f83e0f83f) {
    puVar1 = (undefined8 *)(param_2 * 0x108);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bfe188();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110adbc10;
  FUN_1090fe424(param_1 + 3);
  return param_1;
}



/* Entry: 1090fe3d4; end: 1090fe403;  */

undefined8 * FUN_1090fe3d4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110adbc10;
  FUN_1090fe424(param_1 + 3);
  return param_1;
}



/* Entry: 1090fe404; end: 1090fe407;  */

void FUN_1090fe404(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110adbc10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1090fe408; end: 1090fe41b;  */

void FUN_1090fe408(void)

{
  FUN_1090fe4a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090fe41c; end: 1090fe423;  */

void FUN_1090fe41c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001090fe628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1090fe424; end: 1090fe49f;  */

undefined8 FUN_1090fe424(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  if (param_3[1] != 0) {
    do {
      func_0x0001090fe634();
    } while (extraout_w10 != 0);
  }
  FUN_1090fff3c(param_1,param_2,&uStack_30);
  func_0x0001090fe47c(&uStack_30);
  return param_1;
}



/* Entry: 1090fe4a0; end: 1090fe4af;  */

void FUN_1090fe4a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110adbc10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1090fe4b0; end: 1090fe523;  */

void FUN_1090fe4b0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uStack_30;
  long lStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((param_2 != (undefined8 *)0x0) && ((param_2[1] == 0 || (*(long *)(param_2[1] + 8) == -1)))) {
    lStack_28 = *(long *)(param_1 + 8);
    uVar1 = 0;
    uStack_30 = param_3;
    if (lStack_28 != 0) {
      do {
        func_0x0001090fe604();
      } while (extraout_w11 != 0);
      do {
        func_0x0001090fe604();
        uVar1 = extraout_x8;
      } while (extraout_w11_00 != 0);
    }
    uStack_18 = param_2[1];
    uStack_20 = *param_2;
    *param_2 = param_3;
    param_2[1] = uVar1;
    FUN_1090fe524(&uStack_20);
    FUN_1090fe558(&uStack_30);
    return;
  }
  return;
}



/* Entry: 1090fe524; end: 1090fe547;  */

void FUN_1090fe524(long param_1)

{
  func_0x0001090fe644();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 1090fe548; end: 1090fe557;  */

void FUN_1090fe548(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1090fe558; end: 1090fe5cf;  */

void FUN_1090fe558(long param_1)

{
  func_0x0001090fe644();
  if (param_1 != 0) {
    func_0x000107c27b90();
  }
  return;
}



/* Entry: 1090fe5d0; end: 1090fe64f;  */

void FUN_1090fe5d0(void)

{
  return;
}



/* Entry: 1090fe650; end: 1090fe693;  */

undefined8 * FUN_1090fe650(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110adbc60;
  param_1[3] = &PTR_DAT_110adbcb0;
  func_0x000107c278f4(param_1 + 4);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 1090fe694; end: 1090fe69f;  */

undefined8 * FUN_1090fe694(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110adbc60;
  param_1[3] = &PTR_DAT_110adbcb0;
  func_0x000107c278f4(param_1 + 4);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 1090fe6a0; end: 1090fe6b3;  */

void FUN_1090fe6a0(void)

{
  FUN_1090fe650();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090fe6b4; end: 1090fe6bb;  */

void FUN_1090fe6b4(long param_1)

{
  FUN_1090fe650(param_1 + -0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090fe6bc; end: 1090fe7a7;  */

void FUN_1090fe6bc(long *param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long *plVar4;
  undefined *puVar5;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    plVar4 = plRam0000000113847390;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    if (plRam0000000113847390 == (long *)0x0) {
      param_1 = (long *)0x0;
    }
    else {
      uVar3 = (int)param_2 - 1;
      if (uVar3 < 4) {
        puVar5 = (&PTR_DAT_110adbd28)[uVar3];
      }
      else {
        puVar5 = &UNK_10f5515b2;
      }
      puVar1 = &UNK_10f7d0ef0;
      if (param_1[4] != 0) {
        puVar1 = (undefined *)(param_1[4] + 0x18);
      }
      puVar2 = (undefined8 *)*param_3;
      if (-1 < *(char *)((long)param_3 + 0x17)) {
        puVar2 = param_3;
      }
      *(undefined **)((long)register0x00000008 + -0x438) = puVar1;
      *(undefined8 **)((long)register0x00000008 + -0x430) = puVar2;
      *(undefined **)((long)register0x00000008 + -0x440) = puVar5;
      _snprintf((undefined1 *)((long)register0x00000008 + -0x428),0x400,&UNK_10f55159f);
      param_3 = (undefined8 *)((long)register0x00000008 + -0x428);
      _strlen();
      param_2 = (undefined1 *)((long)register0x00000008 + -0x428);
      param_1 = plVar4;
      (**(code **)(*plVar4 + 0x20))();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x28))
    break;
    unaff_x30 = FUN_1090fe7a8;
    ___stack_chk_fail();
    param_1 = param_1 + -3;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x440);
    unaff_x19 = plVar4;
  }
  return;
}



/* Entry: 1090fe7a8; end: 1090fe7df;  */

void FUN_1090fe7a8(long *param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long *plVar4;
  undefined *puVar5;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    plVar4 = plRam0000000113847390;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    if (plRam0000000113847390 == (long *)0x0) {
      param_1 = (long *)0x0;
    }
    else {
      uVar3 = (int)param_2 - 1;
      if (uVar3 < 4) {
        puVar5 = (&PTR_DAT_110adbd28)[uVar3];
      }
      else {
        puVar5 = &UNK_10f5515b2;
      }
      puVar1 = &UNK_10f7d0ef0;
      if (param_1[1] != 0) {
        puVar1 = (undefined *)(param_1[1] + 0x18);
      }
      puVar2 = (undefined8 *)*param_3;
      if (-1 < *(char *)((long)param_3 + 0x17)) {
        puVar2 = param_3;
      }
      *(undefined **)((long)register0x00000008 + -0x438) = puVar1;
      *(undefined8 **)((long)register0x00000008 + -0x430) = puVar2;
      *(undefined **)((long)register0x00000008 + -0x440) = puVar5;
      _snprintf((undefined1 *)((long)register0x00000008 + -0x428),0x400,&UNK_10f55159f);
      param_3 = (undefined8 *)((long)register0x00000008 + -0x428);
      _strlen();
      param_2 = (undefined1 *)((long)register0x00000008 + -0x428);
      param_1 = plVar4;
      (**(code **)(*plVar4 + 0x20))();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x28))
    break;
    unaff_x30 = FUN_1090fe7a8;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x440);
    unaff_x19 = plVar4;
  }
  return;
}



/* Entry: 1090fe7e0; end: 1090fe813;  */

void FUN_1090fe7e0(long *param_1,code *UNRECOVERED_JUMPTABLE)

{
  (**(code **)(*param_1 + 0x20))(param_1,4);
  func_0x0001090fe85c();
                    /* WARNING: Could not recover jumptable at 0x0001090fe810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1090fe814; end: 1090fe81b;  */

void FUN_1090fe814(long param_1,code *UNRECOVERED_JUMPTABLE)

{
  (**(code **)(*(long *)(param_1 + -0x18) + 0x20))((long *)(param_1 + -0x18),4);
  func_0x0001090fe85c();
                    /* WARNING: Could not recover jumptable at 0x0001090fe810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1090fe81c; end: 1090fe847;  */

void FUN_1090fe81c(long *param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
  (**(code **)(*param_1 + 0x20))();
  func_0x0001090fe85c();
                    /* WARNING: Could not recover jumptable at 0x0001090fe844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1090fe848; end: 1090fe86f;  */

void FUN_1090fe848(long param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
  (**(code **)(*(long *)(param_1 + -0x18) + 0x20))();
  func_0x0001090fe85c();
                    /* WARNING: Could not recover jumptable at 0x0001090fe844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1090fe870; end: 1090fff3b;  */

undefined8 * FUN_1090fe870(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_DAT_110adbd58;
  plVar2 = param_1 + 10;
  if ((long *)*plVar2 != (long *)0x0) {
    (**(code **)(*(long *)*plVar2 + 0x38))();
    func_0x0001090ef994(plVar2,0);
  }
  FUN_1090a9648(param_1 + 0xb);
  FUN_1090abdec(plVar2);
  func_0x0001090fe938(param_1 + 4);
  puVar1 = (undefined8 *)param_1[6];
  for (puVar3 = (undefined8 *)param_1[5]; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    __ZdlPv(*puVar3);
  }
  func_0x0001090ff51c(param_1 + 4,param_1[5]);
  if (param_1[4] != 0) {
    __ZdlPv();
  }
  FUN_1090a94d4(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 1090fff3c; end: 109100037;  */

undefined8 * FUN_1090fff3c(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110adbdc0;
  lVar4 = *param_2;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[3] = lVar4;
  func_0x0001080e3e74(&uStack_38,&UNK_10f5515d6);
  uVar5 = uStack_28;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[6] = uStack_30;
  param_1[5] = uStack_38;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = uVar5;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_38);
  param_1[0x12] = 0;
  param_1[0xc] = 0;
  param_1[10] = 1000;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = param_1 + 0xf;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = param_1 + 0x12;
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[0x15] = param_3[1];
  param_1[0x14] = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x000109100e44();
    } while (extraout_w10 != 0);
  }
  param_1[0x16] = 0x32aaaba7;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  return param_1;
}



/* Entry: 109100038; end: 10910017f;  */

undefined8 FUN_109100038(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 uStack_44;
  
  lVar1 = param_1;
  func_0x000109100e3c();
  __ZNSt3__16chrono12steady_clock3nowEv();
  uVar2 = 1;
  func_0x00010bcce268(1,0x7fffffff);
  uStack_44 = (undefined4)uVar2;
  puVar3 = (undefined4 *)(param_1 + 0x58);
  func_0x0001091000b8(puVar3,&uStack_44);
  *puVar3 = param_2;
  *(undefined8 *)(puVar3 + 2) = 0;
  *(long *)(puVar3 + 4) = lVar1;
  *(undefined1 *)(puVar3 + 6) = 1;
  __ZNSt3__15mutex6unlockEv(param_1 + 0xb0);
  return uVar2;
}



/* Entry: 109100180; end: 109100277;  */

void FUN_109100180(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_34;
  
  uStack_34 = (undefined4)param_2;
  func_0x000109100e3c();
  lVar1 = param_1 + 0x58;
  FUN_109100aa8(lVar1,param_2);
  if (param_1 + 0x60 != lVar1) {
    puVar2 = (undefined8 *)(param_1 + 0x58);
    puVar6 = &uStack_34;
    func_0x0001091000b8();
    uStack_58 = puVar2[1];
    uStack_60 = *puVar2;
    uStack_48 = puVar2[3];
    uStack_50 = puVar2[2];
    uVar3 = (ulong)&uStack_60 | 8;
    func_0x0001053a4504();
    func_0x000109100e54();
    uVar4 = (ulong)&uStack_60 | 8;
    func_0x000107c28148();
    uVar5 = uVar3;
    func_0x000108a554f0();
    if (uVar5 == 0) {
      func_0x000108a55518(uVar3);
    }
    func_0x000108a5440c(uVar3);
    *puVar6 = (int)(long)((double)(long)uVar4 / 1000.0);
    *(long *)(uVar3 + 0x28) = *(long *)(uVar3 + 0x28) + 1;
    func_0x000108a5440c(uVar3);
    lVar1 = param_1 + 0x58;
    func_0x000109100bac(lVar1,param_2);
    while( true ) {
      func_0x000109100e54();
      if (*(ulong *)(lVar1 + 0x28) <= *(ulong *)(param_1 + 0x50)) break;
      func_0x000109100e54();
      func_0x000108a54120();
    }
  }
  func_0x000109100eec();
  return;
}



/* Entry: 109100278; end: 1091002b7;  */

long FUN_109100278(long *param_1)

{
  long lVar1;
  
  func_0x000109100e60();
  func_0x000109100af4();
  lVar1 = *param_1;
  if (lVar1 == 0) {
    func_0x000109100e7c();
    func_0x000109100e04();
    func_0x000109100ecc();
  }
  return lVar1 + 0x28;
}



/* Entry: 1091002b8; end: 1091002eb;  */

void FUN_1091002b8(long param_1,undefined8 param_2)

{
  func_0x000109100e3c();
  func_0x000109100bac(param_1 + 0x58,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0xb0);
  return;
}



/* Entry: 1091002ec; end: 109100387;  */

void FUN_1091002ec(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uStack_48;
  
  func_0x000109100e3c();
  plVar1 = (long *)(param_1 + 0x88);
  FUN_109100c0c(plVar1,&uStack_48,param_2);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    lVar2 = 0x28;
    __Znwm();
    *(int *)(lVar2 + 0x1c) = (int)param_2;
    *(undefined4 *)(lVar2 + 0x20) = 0;
    FUN_109100c58(param_1 + 0x88,uStack_48,plVar1,lVar2);
    func_0x000109100ec0();
  }
  *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + 1;
  func_0x000109100eec();
  return;
}



/* Entry: 109100388; end: 109100407;  */

void FUN_109100388(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  func_0x000109100e3c();
  puVar1 = (undefined8 *)(param_1 + 0x78);
  func_0x000109100a40(*puVar1);
  *(undefined8 **)(param_1 + 0x70) = puVar1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *puVar1 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x90);
  func_0x000109100a10(*puVar1);
  puVar2 = (undefined8 *)(param_1 + 0x60);
  *(undefined8 **)(param_1 + 0x88) = puVar1;
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  func_0x000109100a78(*puVar2);
  *puVar2 = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 **)(param_1 + 0x58) = puVar2;
  (**(code **)(**(long **)(param_1 + 0xa0) + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0xb0);
  return;
}



/* Entry: 109100408; end: 10910044b;  */

void FUN_109100408(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  func_0x000109100e3c();
  *(undefined4 *)(param_1 + 0x20) = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x28,param_2 + 2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0xb0);
  return;
}



/* Entry: 10910044c; end: 1091007d7;  */

void FUN_10910044c(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *plVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long *plVar24;
  undefined8 uVar25;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 auStack_1e8 [2];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
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
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined8 uStack_11c;
  undefined8 uStack_114;
  undefined4 uStack_10c;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  
  lVar19 = param_1;
  func_0x000109100e3c();
  uVar9 = (undefined4)lVar19;
  puStack_108._0_4_ = 0;
  func_0x000109100de4();
  FUN_1091007d8();
  puStack_108._0_4_ = 1;
  uVar10 = uVar9;
  func_0x000109100de4();
  FUN_1091007d8();
  puStack_108._0_4_ = 2;
  uVar11 = uVar10;
  func_0x000109100de4();
  FUN_1091007d8();
  puStack_108._0_4_ = 3;
  uVar12 = uVar11;
  func_0x000109100de4();
  FUN_1091007d8();
  puStack_108._0_4_ = 4;
  uVar13 = uVar12;
  func_0x000109100de4();
  FUN_1091007d8();
  puStack_108._0_4_ = 5;
  uVar14 = uVar13;
  func_0x000109100de4();
  FUN_1091007d8();
  puStack_108._0_4_ = 6;
  uVar15 = uVar14;
  func_0x000109100de4();
  FUN_1091007d8();
  puStack_108._0_4_ = 7;
  uVar16 = uVar15;
  func_0x000109100de4();
  FUN_10910084c();
  func_0x00010b9a5e5c(&uStack_1b8,param_1 + 0x18);
  FUN_109100950(auStack_1e8,param_1 + 0x20);
  puStack_108 = (undefined8 *)CONCAT44(puStack_108._4_4_,5);
  puVar17 = (undefined4 *)(param_1 + 0x88);
  FUN_1091008c8(puVar17,&puStack_108);
  uVar1 = *puVar17;
  uStack_1ec = 6;
  puVar17 = (undefined4 *)(param_1 + 0x88);
  FUN_1091008c8(puVar17,&uStack_1ec);
  uVar2 = *puVar17;
  uStack_1f0 = 3;
  puVar17 = (undefined4 *)(param_1 + 0x88);
  FUN_1091008c8(puVar17,&uStack_1f0);
  uVar3 = *puVar17;
  uStack_1f4 = 4;
  puVar17 = (undefined4 *)(param_1 + 0x88);
  FUN_1091008c8(puVar17,&uStack_1f4);
  uVar4 = *puVar17;
  uStack_1f8 = 0;
  puVar17 = (undefined4 *)(param_1 + 0x88);
  FUN_1091008c8(puVar17,&uStack_1f8);
  uVar5 = *puVar17;
  uStack_1fc = 1;
  puVar17 = (undefined4 *)(param_1 + 0x88);
  FUN_1091008c8(puVar17,&uStack_1fc);
  uVar6 = *puVar17;
  uStack_200 = 2;
  puVar17 = (undefined4 *)(param_1 + 0x88);
  FUN_1091008c8(puVar17,&uStack_200);
  uStack_124 = *puVar17;
  uStack_190 = uStack_1a8;
  uStack_198 = uStack_1b0;
  uStack_1a0 = uStack_1b8;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1b8 = 0;
  uStack_188 = auStack_1e8[0];
  uStack_170 = uStack_1d0;
  uStack_178 = uStack_1d8;
  uStack_180 = uStack_1e0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  uStack_160 = uStack_1c0;
  uStack_168 = uStack_1c8;
  uStack_114 = 0;
  uStack_11c = 0;
  uStack_10c = 0;
  uStack_158 = uVar9;
  uStack_154 = uVar10;
  uStack_150 = uVar11;
  uStack_14c = uVar1;
  uStack_148 = uVar2;
  uStack_144 = uVar3;
  uStack_140 = uVar12;
  uStack_13c = uVar4;
  uStack_138 = uVar13;
  uStack_134 = uVar14;
  uStack_130 = uVar15;
  uStack_12c = uVar5;
  uStack_128 = uVar6;
  uStack_120 = uVar16;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1e0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1b8);
  plVar21 = *(long **)(param_1 + 0xa0);
  puVar18 = (undefined8 *)0xe0;
  __Znwm();
  plVar20 = puVar18 + 1;
  *plVar20 = 0;
  puVar18[2] = 0;
  *puVar18 = &PTR_FUN_110adbe70;
  FUN_109100cd0(&puStack_108,&uStack_1a0);
  puVar22 = puVar18 + 3;
  *puVar22 = &PTR_FUN_110adbec0;
  plVar24 = puVar18 + 4;
  *plVar24 = 0;
  puVar18[5] = 0;
  puVar18[6] = &PTR_DAT_110adbef8;
  FUN_109100cd0(puVar18 + 7,&puStack_108);
  lVar19 = param_2[1];
  uVar25 = *param_2;
  puVar18[0x1b] = param_2[1];
  puVar18[0x1a] = uVar25;
  if (lVar19 != 0) {
    do {
      func_0x000109100e44();
    } while (extraout_w10 != 0);
  }
  func_0x000109100984(&puStack_108);
  if ((puVar18[5] == 0) || (*(long *)(puVar18[5] + 8) == -1)) {
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar8) {
        *plVar20 = *plVar20 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    puStack_108 = puVar22;
    puStack_100 = puVar18;
    func_0x000107c278e4(plVar24,&puStack_108);
    func_0x000107c284e8(&puStack_108);
  }
  puVar23 = puVar22;
  if (*plVar24 == 0) {
    puVar18 = (undefined8 *)puVar18[5];
    if (puVar18 != (undefined8 *)0x0) {
      do {
        func_0x000109100e44();
      } while (extraout_w10_01 != 0);
    }
  }
  else {
    func_0x000107c278f0(&puStack_108,plVar24);
    puVar18 = puStack_100;
    if (puStack_108 == (undefined8 *)0x0) {
      puVar18 = (undefined8 *)0x0;
      puVar23 = (undefined8 *)0x0;
    }
    else if (puStack_100 != (undefined8 *)0x0) {
      do {
        func_0x000109100e44();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c284e8(&puStack_108);
  }
  puStack_108 = (undefined8 *)0x0;
  if (puVar23 != (undefined8 *)0x0) {
    puStack_108 = puVar23 + 3;
  }
  puStack_100 = puVar18;
  (**(code **)(*plVar21 + 0x10))(plVar21,&puStack_108);
  if (puStack_100 != (undefined8 *)0x0) {
    func_0x000107c27b90();
  }
  func_0x000107c3105c(puVar22);
  func_0x000109100984(&uStack_1a0);
  func_0x000109100eec();
  return;
}



/* Entry: 1091007d8; end: 10910080b;  */

ulong FUN_1091007d8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x28);
  if (uVar2 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_10910084c();
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = (ulong)(long)(int)param_1 / uVar2;
    }
  }
  return uVar1;
}



/* Entry: 10910080c; end: 10910084b;  */

long FUN_10910080c(long *param_1)

{
  long lVar1;
  
  func_0x000109100e60();
  func_0x000109100af4();
  lVar1 = *param_1;
  if (lVar1 == 0) {
    func_0x000109100e7c();
    func_0x000109100e04();
    func_0x000109100ecc();
  }
  return lVar1 + 0x28;
}



/* Entry: 10910084c; end: 1091008c7;  */

int FUN_10910084c(long param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  int *piVar4;
  int *piVar5;
  ulong uVar6;
  int *piVar7;
  
  uVar6 = *(ulong *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 8);
  plVar3 = (long *)(lVar1 + (uVar6 >> 10) * 8);
  if (*(long *)(param_1 + 0x10) == lVar1) {
    piVar4 = (int *)0x0;
    piVar5 = (int *)0x0;
  }
  else {
    piVar4 = (int *)(*plVar3 + (uVar6 & 0x3ff) * 4);
    uVar6 = *(long *)(param_1 + 0x28) + uVar6;
    piVar5 = (int *)(*(long *)(lVar1 + (uVar6 >> 10) * 8) + (uVar6 & 0x3ff) * 4);
  }
  iVar2 = 0;
  do {
    piVar7 = piVar4 + -0x400;
    do {
      if (piVar4 == piVar5) {
        return iVar2;
      }
      iVar2 = *piVar4 + iVar2;
      piVar7 = piVar7 + 1;
      piVar4 = piVar4 + 1;
    } while ((int *)*plVar3 != piVar7);
    plVar3 = plVar3 + 1;
    piVar4 = (int *)*plVar3;
  } while( true );
}



/* Entry: 1091008c8; end: 109100937;  */

long FUN_1091008c8(long *param_1)

{
  long lVar1;
  undefined4 *unaff_x21;
  
  func_0x000109100e60();
  FUN_109100c0c();
  lVar1 = *param_1;
  if (lVar1 == 0) {
    lVar1 = 0x28;
    __Znwm();
    *(undefined4 *)(lVar1 + 0x1c) = *unaff_x21;
    *(undefined4 *)(lVar1 + 0x20) = 0;
    FUN_109100c58();
    func_0x000109100ec0();
  }
  return lVar1 + 0x20;
}



/* Entry: 109100938; end: 10910093b;  */

undefined8 * FUN_109100938(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110adbdc0;
  __ZNSt3__15mutexD1Ev(param_1 + 0x16);
  func_0x0001090fe47c(param_1 + 0x14);
  func_0x000109100a10(param_1[0x12]);
  func_0x000109100a40(param_1[0xf]);
  func_0x000109100a78(param_1[0xc]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 5);
  func_0x000107c278f4(param_1 + 3);
  FUN_1090fe524(param_1 + 1);
  return param_1;
}



/* Entry: 10910093c; end: 10910094f;  */

void FUN_10910093c(void)

{
  func_0x0001091009ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109100950; end: 109100aa7;  */

undefined4 * FUN_109100950(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,param_2 + 2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  return param_1;
}



/* Entry: 109100aa8; end: 109100b3f;  */

long * FUN_109100aa8(long param_1,int param_2)

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
    if (param_2 <= *(int *)(plVar5 + 4)) {
      lVar2 = 0;
    }
    plVar4 = (long *)((long)plVar5 + lVar2);
    if (param_2 <= *(int *)(plVar5 + 4)) {
      plVar3 = plVar5;
    }
  }
  if ((plVar1 == plVar3) || (param_2 < (int)plVar3[4])) {
    plVar3 = plVar1;
  }
  return plVar3;
}



/* Entry: 109100b40; end: 109100c0b;  */

void FUN_109100b40(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000109100e8c();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x000109100ed8();
  func_0x000109100eb0();
  return;
}



/* Entry: 109100c0c; end: 109100c57;  */

long * FUN_109100c0c(long param_1,undefined8 *param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  plVar1 = (long *)(param_1 + 8);
  while (plVar2 = plVar1, plVar3 != (long *)0x0) {
    while (plVar2 = plVar3, *(int *)((long)plVar2 + 0x1c) <= param_3) {
      if (param_3 <= *(int *)((long)plVar2 + 0x1c)) goto LAB_109100c50;
      plVar1 = plVar2 + 1;
      plVar3 = (long *)*plVar1;
      if ((long *)*plVar1 == (long *)0x0) goto LAB_109100c50;
    }
    plVar1 = plVar2;
    plVar3 = (long *)*plVar2;
  }
LAB_109100c50:
  *param_2 = plVar2;
  return plVar1;
}



/* Entry: 109100c58; end: 109100ca7;  */

void FUN_109100c58(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000109100e8c();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x000109100ed8();
  func_0x000109100eb0();
  return;
}



/* Entry: 109100ca8; end: 109100cab;  */

void FUN_109100ca8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110adbe70;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109100cac; end: 109100cbf;  */

void FUN_109100cac(void)

{
  FUN_109100dd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109100cc0; end: 109100ccf;  */

void FUN_109100cc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109100cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 109100cd0; end: 109100d0f;  */

long FUN_109100cd0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  FUN_109100950(lVar1 + 0x18,param_2 + 0x18);
  _memcpy(param_1 + 0x48,param_2 + 0x48,0x50);
  return param_1;
}



/* Entry: 109100d10; end: 109100d13;  */

undefined8 * FUN_109100d10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110adbec0;
  param_1[3] = &PTR_DAT_110adbef8;
  if (param_1[0x18] != 0) {
    func_0x000107c27b90();
  }
  func_0x000109100984(param_1 + 4);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 109100d14; end: 109100d27;  */

void FUN_109100d14(void)

{
  FUN_109100d88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109100d28; end: 109100d87;  */

void FUN_109100d28(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0xac) = uVar2;
  *(undefined8 *)(param_1 + 0xa4) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000109100d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))(*(long **)(param_1 + 0xb8),param_1 + 0x20);
  return;
}



/* Entry: 109100d88; end: 109100dd3;  */

undefined8 * FUN_109100d88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110adbec0;
  param_1[3] = &PTR_DAT_110adbef8;
  if (param_1[0x18] != 0) {
    func_0x000107c27b90();
  }
  func_0x000109100984(param_1 + 4);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 109100dd4; end: 109100eff;  */

void FUN_109100dd4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110adbe70;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109100f00; end: 109100f7b;  */

undefined8 * FUN_109100f00(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110adbf68;
  param_1[1] = 1;
  __ZNSt3__115recursive_mutexC1Ev(param_1 + 2);
  return param_1;
}



/* Entry: 109100f7c; end: 109100ff3; -[SCNNeoPlayerMediaDataProviderCppProxy initWithCpp:] */

undefined1 * FUN_109100f7c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112700668;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_1091017f0();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_10909c860(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 109100ff4; end: 10910109f; -[SCNNeoPlayerMediaDataProviderCppProxy loadDataChunk:chunkSize:completion:] */

undefined8
FUN_109100ff4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  undefined1 auStack_40 [16];
  
  _objc_retain(param_5);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010910185c();
  (**(code **)(*plVar1 + 0x10))(plVar1,param_3,param_4,auStack_40);
  func_0x000109101800();
  func_0x00010910181c();
  return param_4;
}



/* Entry: 1091010a0; end: 10910113b; -[SCNNeoPlayerMediaDataProviderCppProxy getTotalDataSize:] */

long * FUN_1091010a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_40 [16];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010910185c();
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_40);
  func_0x000109101800();
  func_0x00010910181c();
  return plVar1;
}



/* Entry: 10910113c; end: 10910119b; -[SCNNeoPlayerMediaDataProviderCppProxy cancelLoad:] */

void FUN_10910113c(long param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))(*(long **)(param_1 + 0x18),param_3);
  return;
}



/* Entry: 10910119c; end: 10910128b;  */

void FUN_10910119c(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_1126dd5d8;
    _objc_opt_class(PTR_PTR_1126dd5d8);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_2);
      ppuStack_38 = &PTR_DAT_110adbfe8;
      uStack_40 = param_2;
      func_0x000107c316f4(&uStack_30,&ppuStack_38,&uStack_40,FUN_109101390);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      func_0x000107c27d28(&uStack_30);
      _objc_release(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_1091016bc(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_1091017f0();
        } while (extraout_w10 != 0);
      }
    }
  }
  func_0x00010910181c();
  return;
}



/* Entry: 10910128c; end: 1091012fb;  */

void FUN_10910128c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_110ada178,&PTR_DAT_110adbfa0,0);
    if (lVar1 == 0) {
      FUN_1091016e4(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_1 = *(long **)(lVar1 + 0x18);
      _objc_retain(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1091012fc; end: 10910134f; -[SCNNeoPlayerMediaDataProviderCppProxy .cxx_destruct] */

void FUN_1091012fc(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110adc0d8;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_10909c860((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 109101350; end: 10910138f; -[SCNNeoPlayerMediaDataProviderCppProxy .cxx_construct] */

undefined8 * FUN_109101350(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_1091017f0();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 109101390; end: 109101483;  */

void FUN_109101390(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110adc028;
  puVar1[3] = &PTR_DAT_110adc0b0;
  puVar2 = puVar5;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  func_0x000107c316f8();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_1091017f0();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_110adc078;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_1091016bc(&uStack_50);
  return;
}



/* Entry: 109101484; end: 109101487;  */

void FUN_109101484(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110adc028;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109101488; end: 10910149b;  */

void FUN_109101488(void)

{
  FUN_1091016ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10910149c; end: 1091014a7;  */

long FUN_10910149c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110adbfe8;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 1091014a8; end: 1091014e3;  */

void FUN_1091014a8(void)

{
  func_0x000109101844();
  return;
}



/* Entry: 1091014e4; end: 10910156f;  */

undefined8 FUN_1091014e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_109101b74(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09b2a0(uVar2);
  func_0x00010910182c();
  _objc_autoreleasePoolPop(lVar1);
  return uVar2;
}



/* Entry: 109101570; end: 1091015e3;  */

undefined8 FUN_109101570(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_109101b74(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcb4e0(uVar2);
  func_0x00010910182c();
  _objc_autoreleasePoolPop(lVar1);
  return uVar2;
}



/* Entry: 1091015e4; end: 109101623;  */

void FUN_1091015e4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010bf2e640(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 109101624; end: 1091016ab;  */

long FUN_109101624(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110adbfe8;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 1091016ac; end: 1091016bb;  */

void FUN_1091016ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110adc028;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1091016bc; end: 1091016e3;  */

long FUN_1091016bc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 1091016e4; end: 109101757;  */

void FUN_1091016e4(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110adc0d8;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_1091017f0();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_109101758);
  _objc_retainAutoreleasedReturnValue();
  func_0x000109101850();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109101758; end: 1091017c7;  */

void FUN_109101758(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dd5d8;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_1091017f0();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_10909c860(&uStack_30);
  return;
}



/* Entry: 1091017c8; end: 1091017ef;  */

long FUN_1091017c8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 1091017f0; end: 109101873;  */

void FUN_1091017f0(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 109101874; end: 1091018eb; -[SCNNeoPlayerMediaDataProviderCompletionCppProxy initWithCpp:] */

undefined1 * FUN_109101874(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112700670;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_109102064();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_1091017c8(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1091018ec; end: 109101987; -[SCNNeoPlayerMediaDataProviderCompletionCppProxy onLoadCompleted:] */

void FUN_1091018ec(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_48 [24];
  
  func_0x000109102098();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x00010b9813b8(auStack_48);
  func_0x0001091020d0(*(undefined8 *)(*plVar1 + 0x10));
  func_0x000107c27900(auStack_48);
  func_0x000109102080();
  return;
}


