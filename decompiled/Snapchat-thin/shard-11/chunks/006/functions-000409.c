/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10876ce40; end: 10876ce9f;  */

long FUN_10876ce40(long param_1)

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



/* Entry: 10876cea0; end: 10876cec3;  */

void FUN_10876cea0(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 10876cec4; end: 10876cf53;  */

void FUN_10876cec4(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined1 auStack_50 [40];
  undefined1 uStack_28;
  
  plVar1 = *(long **)(param_2 + 0x20);
  if ((*(byte *)(plVar1 + 0x12) & 1) == 0) {
    *(undefined1 *)(plVar1 + 0x12) = 1;
    func_0x000107c28b24(plVar1[0xb]);
    auStack_50[0] = 0;
    uStack_28 = 0;
    func_0x000107c28b2c(plVar1[0xb],auStack_50);
    func_0x000107c29560(auStack_50);
    (**(code **)(*(long *)plVar1[0xd] + 0x10))((long *)plVar1[0xd],param_1);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  return;
}



/* Entry: 10876cf54; end: 10876cf83;  */

void FUN_10876cf54(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10876cf84; end: 10876cf97;  */

void FUN_10876cf84(void)

{
  func_0x00010876d130();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10876cf98; end: 10876cfaf;  */

void FUN_10876cf98(long param_1)

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



/* Entry: 10876cfb0; end: 10876cff3;  */

void FUN_10876cfb0(int param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010876d320();
  if (param_1 != 0) {
    func_0x00010084fb48(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010876cfe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x20 + 8))(param_2,(undefined8 *)(unaff_x20 + 8));
    return;
  }
  return;
}



/* Entry: 10876cff4; end: 10876d09f;  */

void FUN_10876cff4(int param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x20;
  undefined1 auStack_80 [72];
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  func_0x00010876d320();
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



/* Entry: 10876d0a0; end: 10876d0a3;  */

undefined8 * FUN_10876d0a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6c5b8;
  func_0x00010876d334(param_1[8]);
  func_0x00010876d334(param_1[2]);
  return param_1;
}



/* Entry: 10876d0a4; end: 10876d0b7;  */

void FUN_10876d0a4(void)

{
  FUN_10876d0f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10876d0b8; end: 10876d0f3;  */

void FUN_10876d0b8(void)

{
  return;
}



/* Entry: 10876d0f4; end: 10876d163;  */

undefined8 * FUN_10876d0f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6c5b8;
  func_0x00010876d334(param_1[8]);
  func_0x00010876d334(param_1[2]);
  return param_1;
}



/* Entry: 10876d164; end: 10876d173;  */

void FUN_10876d164(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6c4b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10876d174; end: 10876d23f;  */

void FUN_10876d174(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined1 auStack_98 [72];
  undefined1 auStack_50 [40];
  undefined1 uStack_28;
  
  lVar1 = *(long *)(param_4 + 0x10);
  FUN_10875bc3c(auStack_98,param_3);
  FUN_10875bbdc(auStack_98,*(undefined4 *)(lVar1 + 0x28),lVar1 + 0x18);
  lVar1 = *(long *)(lVar1 + 0x10);
  if ((*(byte *)(lVar1 + 0x90) & 1) == 0) {
    *(undefined1 *)(lVar1 + 0x90) = 1;
    func_0x000108681904(*(undefined8 *)(lVar1 + 0x58),param_1);
    auStack_50[0] = 0;
    uStack_28 = 0;
    func_0x000107c28b2c(*(undefined8 *)(lVar1 + 0x58),auStack_50);
    func_0x000107c29560(auStack_50);
    FUN_108770c94(param_1);
    (**(code **)(**(long **)(lVar1 + 0x68) + 0x18))(*(long **)(lVar1 + 0x68),param_1);
    func_0x00010084ff2c(lVar1);
  }
  func_0x000107c29564(auStack_98);
  return;
}



/* Entry: 10876d240; end: 10876d25f;  */

void FUN_10876d240(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10876cdf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10876d260; end: 10876d277;  */

void FUN_10876d260(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10876d278; end: 10876d307;  */

undefined8 * FUN_10876d278(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6c450;
  func_0x000107c27914(param_1 + 0xf);
  func_0x00010876515c(param_1 + 0xd);
  *param_1 = &PTR_DAT_110a6d608;
  func_0x0001005fe494(param_1 + 0xb);
  func_0x0001005640e4(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  func_0x0001005fe52c(param_1 + 1);
  return param_1;
}



/* Entry: 10876d308; end: 10876d33b;  */

void FUN_10876d308(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10876d33c; end: 10876d3e7;  */

undefined8 *
FUN_10876d33c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c278b8(auStack_48,&UNK_10f4ba29a);
  uStack_50 = *param_3;
  *param_3 = 0;
  func_0x000107c29808(param_1,auStack_48,param_2,&uStack_50);
  func_0x000107c29578(&uStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  *param_1 = &PTR_FUN_110a6c618;
  param_1[0xd] = *param_4;
  *param_4 = 0;
  return param_1;
}



/* Entry: 10876d3e8; end: 10876d7cf;  */

void FUN_10876d3e8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  undefined **ppuVar7;
  long *plVar8;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 uStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
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
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  ulong auStack_90 [4];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c297b4(&uStack_180,param_1 + 8);
  lStack_170 = param_1;
  func_0x000107c297b4(&puStack_1a0,param_1 + 8);
  puStack_158 = (undefined8 *)lStack_198;
  puStack_160 = puStack_1a0;
  lStack_190 = param_1;
  if (lStack_198 != 0) {
    do {
      FUN_10876de80();
    } while (extraout_w10 != 0);
  }
  lStack_150 = lStack_190;
  func_0x000107c29820(&ppuStack_a0,param_1);
  puStack_140 = ppuStack_a0[0x4b];
  puStack_148 = ppuStack_a0[0x4a];
  if (ppuStack_a0[0x4b] != (undefined *)0x0) {
    do {
      FUN_10876de80();
    } while (extraout_w10_00 != 0);
  }
  uStack_138 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0xfc);
  func_0x000107c297b0(&ppuStack_a0);
  pcStack_100 = FUN_10876dcdc;
  ppuStack_f8 = &PTR_FUN_110a6c7b8;
  puVar5 = (undefined8 *)0x30;
  __Znwm();
  puVar5[1] = puStack_158;
  *puVar5 = puStack_160;
  if (puStack_158 != (undefined8 *)0x0) {
    do {
      FUN_10876de80();
    } while (extraout_w10_01 != 0);
  }
  puVar5[3] = puStack_148;
  puVar5[2] = lStack_150;
  puVar5[4] = puStack_140;
  if (puStack_140 != (undefined *)0x0) {
    do {
      FUN_10876de80();
    } while (extraout_w10_02 != 0);
  }
  *(undefined4 *)(puVar5 + 5) = uStack_138;
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  uStack_110 = uVar1;
  lStack_108 = lVar2;
  puStack_f0 = puVar5;
  if (lVar2 == 0) {
    uStack_1b8 = *(undefined8 *)(param_1 + 0x58);
  }
  else {
    do {
      FUN_10876de80();
    } while (extraout_w10_03 != 0);
    uStack_1b8 = *(undefined8 *)(param_1 + 0x58);
    do {
      FUN_10876de80();
    } while (extraout_w10_04 != 0);
  }
  puVar5 = (undefined8 *)0xb8;
  uStack_130 = uVar1;
  lStack_128 = lVar2;
  __Znwm();
  plVar8 = puVar5 + 1;
  *plVar8 = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110a6c678;
  ppuStack_a0 = (undefined **)FUN_10876d838;
  ppuStack_98 = &PTR_FUN_110a6c6b8;
  uStack_130 = 0;
  lStack_128 = 0;
  pcStack_d0 = FUN_10876d8bc;
  ppuStack_c8 = &PTR_FUN_110a6c6d0;
  if (lStack_178 == 0) {
    ppuVar7 = &PTR_FUN_110a6c7b8;
  }
  else {
    plVar6 = (long *)(lStack_178 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      ppuVar7 = ppuStack_f8;
    } while (cVar3 != '\0');
  }
  lStack_b0 = lStack_170;
  puVar5[3] = &PTR_FUN_110a6c780;
  puVar5[4] = FUN_10876d8bc;
  puVar5[5] = &PTR_FUN_110a6c6d0;
  puVar5[7] = lStack_178;
  puVar5[6] = uStack_180;
  uStack_c0 = 0;
  uStack_b8 = 0;
  puVar5[8] = lStack_170;
  puVar5[10] = FUN_10876dcdc;
  (*(code *)ppuVar7[2])(puVar5 + 0xb,&ppuStack_f8);
  puVar5[3] = &PTR_DAT_110a6c6f8;
  puVar5[0x10] = FUN_10876d838;
  puVar5[0x11] = &PTR_FUN_110a6c6b8;
  puVar5[0x12] = uVar1;
  puVar5[0x13] = lVar2;
  auStack_90[0] = 0;
  auStack_90[1] = 0;
  puVar5[0x16] = uStack_1b8;
  func_0x000107c297a4(&uStack_c0);
  func_0x000107c297a8(auStack_90);
  func_0x000107c297a8(&uStack_130);
  uStack_120 = 0;
  uStack_118 = 0;
  puStack_1b0 = puVar5 + 3;
  puStack_1a8 = puVar5;
  func_0x00010876de30(&uStack_120);
  func_0x000107c297a8(&uStack_110);
  (*(code *)*ppuStack_f8)(&ppuStack_f8);
  FUN_10876d7e8(&puStack_160);
  ppuStack_a0 = &PTR_FUN_110a97d10;
  ppuStack_98 = (undefined **)0x0;
  auStack_90[0] = auStack_90[0] & 0xffffffff00000000;
  func_0x000107c29820(&pcStack_d0,param_1);
  plVar6 = *(long **)(pcStack_d0 + 0x50);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = *plVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  puStack_160 = puVar5 + 3;
  puStack_158 = puVar5;
  (**(code **)(*plVar6 + 0xa8))(plVar6,&ppuStack_a0,&puStack_160);
  func_0x00010876de58(&puStack_160);
  func_0x000107c297b0(&pcStack_d0);
  FUN_108926114(&ppuStack_a0);
  func_0x00010876de30(&puStack_1b0);
  func_0x000107c297a4(&puStack_1a0);
  func_0x000107c297a4(&uStack_180);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x00010876de58(&puStack_160);
    func_0x000107c297b0(&pcStack_d0);
    FUN_108926114(&ppuStack_a0);
    func_0x00010876de30(&puStack_1b0);
    func_0x000107c297a4(&puStack_1a0);
    do {
      func_0x000107c297a4(&uStack_180);
      func_0x00010876de90();
    } while( true );
  }
  return;
}



/* Entry: 10876d7d0; end: 10876d7d3;  */

undefined8 * FUN_10876d7d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6c618;
  func_0x000107c27f98(param_1 + 0xd);
  *param_1 = &PTR_DAT_110a6d608;
  func_0x0001005fe494(param_1 + 0xb);
  func_0x0001005640e4(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  func_0x0001005fe52c(param_1 + 1);
  return param_1;
}



/* Entry: 10876d7d4; end: 10876d7e7;  */

void FUN_10876d7d4(void)

{
  FUN_10876de00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10876d7e8; end: 10876d80f;  */

undefined8 FUN_10876d7e8(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c297ac(param_1 + 0x18);
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10876d810; end: 10876d813;  */

void FUN_10876d810(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6c678;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10876d814; end: 10876d827;  */

void FUN_10876d814(void)

{
  FUN_10876dccc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10876d828; end: 10876d837;  */

void FUN_10876d828(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010876d830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10876d838; end: 10876d897;  */

long FUN_10876d838(long param_1)

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



/* Entry: 10876d898; end: 10876d8bb;  */

void FUN_10876d898(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 10876d8bc; end: 10876d9eb;  */

void FUN_10876d8bc(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong auStack_68 [5];
  undefined1 uStack_40;
  undefined4 uStack_34;
  
  plVar2 = *(long **)(param_2 + 0x20);
  if (*(int *)(param_1 + 0x18) == 0) {
    uStack_34 = 4;
    func_0x000108681930(plVar2[0xb],4);
    auStack_68[0] = auStack_68[0] & 0xffffffffffffff00;
    uStack_40 = 0;
    func_0x000107c28b2c(plVar2[0xb],auStack_68);
    func_0x00010876dea0();
    FUN_10876d9ec(plVar2 + 0xd,&uStack_34);
    (**(code **)(*plVar2 + 0x30))(plVar2,uStack_34);
  }
  else {
    func_0x000107c28b24(plVar2[0xb]);
    auStack_68[0] = auStack_68[0] & 0xffffffffffffff00;
    uStack_40 = 0;
    func_0x000107c28b2c(plVar2[0xb],auStack_68);
    func_0x00010876dea0();
    lVar3 = plVar2[0xd];
    do {
      auStack_68[0] = 0;
      lVar1 = lVar3 + 0x10;
      func_0x000107c27ff0(lVar1,auStack_68,1,2);
      if ((int)lVar1 != 0) {
        FUN_108734c9c(lVar3 + 0x98);
        FUN_1089261d0(lVar3 + 0x98,0,param_1);
        *(undefined1 *)(lVar3 + 200) = 1;
        *(undefined8 *)(lVar3 + 0x10) = 2;
        func_0x000107c31508(lVar3,plVar2 + 0xd);
        break;
      }
    } while (((uint)auStack_68[0] >> 1 & 1) == 0);
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  return;
}



/* Entry: 10876d9ec; end: 10876da57;  */

undefined8 FUN_10876d9ec(undefined8 param_1,undefined4 *param_2)

{
  undefined **ppuStack_38;
  undefined4 uStack_30;
  undefined1 auStack_28 [8];
  
  uStack_30 = *param_2;
  ppuStack_38 = &PTR_FUN_110a698c8;
  FUN_10876da58(auStack_28,&ppuStack_38);
  func_0x00010bcd3510(param_1,auStack_28);
  __ZNSt13exception_ptrD1Ev(auStack_28);
  __ZNSt9exceptionD2Ev(&ppuStack_38);
  return param_1;
}



/* Entry: 10876da58; end: 10876dac3;  */

void FUN_10876da58(long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  *puVar2 = &PTR_FUN_110a698c8;
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10876daa4);
  (*pcVar1)();
}



/* Entry: 10876dac4; end: 10876daf3;  */

void FUN_10876dac4(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10876daf4; end: 10876db07;  */

void FUN_10876daf4(void)

{
  func_0x00010876dc98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10876db08; end: 10876db1f;  */

void FUN_10876db08(long param_1)

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



/* Entry: 10876db20; end: 10876db63;  */

void FUN_10876db20(int param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010876dea8();
  if (param_1 != 0) {
    func_0x00010084fb48(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010876db54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x20 + 8))(param_2,(undefined8 *)(unaff_x20 + 8));
    return;
  }
  return;
}



/* Entry: 10876db64; end: 10876dc07;  */

void FUN_10876db64(int param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x20;
  undefined1 auStack_80 [72];
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  func_0x00010876dea8();
  if (param_1 != 0) {
    uStack_38 = (undefined4)param_3;
    uStack_34 = 1;
    FUN_1086818c8(*(undefined8 *)(unaff_x20 + 0x98),&uStack_38);
    if (*(char *)(param_4 + 0x40) == '\x01') {
      FUN_108681988(*(undefined8 *)(unaff_x20 + 0x98),param_4,0);
    }
    FUN_10875bae4(auStack_80,param_4);
    (**(code **)(unaff_x20 + 0x38))(param_2,param_3,auStack_80,(undefined8 *)(unaff_x20 + 0x38));
    func_0x00010876de98();
  }
  return;
}



/* Entry: 10876dc08; end: 10876dc0b;  */

undefined8 * FUN_10876dc08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6c780;
  func_0x00010876debc(param_1[8]);
  func_0x00010876debc(param_1[2]);
  return param_1;
}



/* Entry: 10876dc0c; end: 10876dc1f;  */

void FUN_10876dc0c(void)

{
  FUN_10876dc5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10876dc20; end: 10876dc5b;  */

void FUN_10876dc20(void)

{
  return;
}



/* Entry: 10876dc5c; end: 10876dccb;  */

undefined8 * FUN_10876dc5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6c780;
  func_0x00010876debc(param_1[8]);
  func_0x00010876debc(param_1[2]);
  return param_1;
}



/* Entry: 10876dccc; end: 10876dcdb;  */

void FUN_10876dccc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6c678;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10876dcdc; end: 10876ddc7;  */

void FUN_10876dcdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_a0 [72];
  undefined **ppuStack_58;
  undefined4 uStack_50;
  undefined1 uStack_30;
  undefined1 auStack_28 [8];
  
  lVar1 = *(long *)(param_4 + 0x10);
  FUN_10875bc3c(auStack_a0,param_3);
  FUN_10875bbdc(auStack_a0,*(undefined4 *)(lVar1 + 0x28),lVar1 + 0x18);
  plVar2 = *(long **)(lVar1 + 0x10);
  func_0x000108681904(plVar2[0xb],param_1);
  ppuStack_58 = (undefined **)((ulong)ppuStack_58 & 0xffffffffffffff00);
  uStack_30 = 0;
  func_0x000107c28b2c(plVar2[0xb],&ppuStack_58);
  func_0x000107c29560(&ppuStack_58);
  FUN_108770c94();
  ppuStack_58 = &PTR_FUN_110a698c8;
  uStack_50 = (undefined4)param_1;
  FUN_10876da58(auStack_28,&ppuStack_58);
  func_0x00010bcd3510(plVar2 + 0xd,auStack_28);
  __ZNSt13exception_ptrD1Ev(auStack_28);
  __ZNSt9exceptionD2Ev(&ppuStack_58);
  (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
  func_0x00010876de98();
  return;
}



/* Entry: 10876ddc8; end: 10876dde7;  */

void FUN_10876ddc8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10876d7e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10876dde8; end: 10876ddff;  */

void FUN_10876dde8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10876de00; end: 10876de7f;  */

undefined8 * FUN_10876de00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6c618;
  func_0x000107c27f98(param_1 + 0xd);
  *param_1 = &PTR_DAT_110a6d608;
  func_0x0001005fe494(param_1 + 0xb);
  func_0x0001005640e4(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  func_0x0001005fe52c(param_1 + 1);
  return param_1;
}



/* Entry: 10876de80; end: 10876dec3;  */

void FUN_10876de80(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10876dec4; end: 10876e05b;  */

undefined ***
FUN_10876dec4(undefined ***param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined1 in_ZR;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 extraout_x8;
  long lVar11;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  undefined **ppuVar12;
  long *plVar13;
  code *pcVar14;
  undefined **ppuVar15;
  code *pcStack_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined ***pppuStack_260;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined ***pppuStack_240;
  undefined **ppuStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined ***pppuStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined4 uStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  code *pcStack_1b0;
  undefined **ppuStack_1a8;
  undefined8 *puStack_1a0;
  code *pcStack_180;
  undefined **ppuStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined ***pppuStack_160;
  code *pcStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_120;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined **ppuStack_88;
  undefined ***pppuStack_80;
  undefined ***pppuStack_70;
  undefined8 uStack_68;
  
  pppuVar5 = param_1;
  func_0x00010876eed8();
  *pppuVar5 = &PTR_FUN_110a6c7e0;
  uStack_68 = extraout_x8;
  func_0x000107c278b8(auStack_a0,&UNK_10f4ba2b9);
  ppuStack_88 = &PTR_FUN_110a6c9b8;
  pppuStack_70 = &ppuStack_88;
  uStack_a8 = *param_3;
  *param_3 = 0;
  pppuStack_80 = param_1;
  FUN_10875e9fc(param_1,auStack_a0,param_2,0,&ppuStack_88,param_8,&uStack_a8,0x12);
  func_0x000107c29578(&uStack_a8);
  func_0x00010865f8f8(&ppuStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
  *param_1 = &PTR_FUN_110a6c7e0;
  FUN_10876edcc(param_1 + 0x16,param_4);
  func_0x000107c27994(param_1 + 0x1a,param_5);
  pppuVar5 = param_1 + 0x1d;
  func_0x000107c27994(pppuVar5,param_6);
  lVar11 = param_7[1];
  ppuVar15 = (undefined **)*param_7;
  param_1[0x21] = (undefined **)param_7[1];
  param_1[0x20] = ppuVar15;
  if (lVar11 != 0) {
    do {
      func_0x00010876ee7c();
    } while (extraout_w10 != 0);
  }
  func_0x00010876eea8(uStack_68);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107c27914(param_1 + 0x1a);
  FUN_1086d7d10(param_1 + 0x16);
  FUN_10875b664(param_1);
  __Unwind_Resume();
  pppuVar6 = pppuVar5;
  func_0x00010876eed8();
  ppuStack_238 = &PTR_FUN_110a97e00;
  uStack_230 = 0;
  uStack_220 = 0;
  uStack_218 = 0;
  uStack_228 = 0;
  uStack_120 = extraout_x8_00;
  func_0x000107c29ee4(&pcStack_150,pppuVar6 + 0x1a);
  uStack_228._0_4_ = 1;
  uVar7 = 0;
  func_0x000107c287e0();
  uStack_220 = uVar7;
  func_0x000107c287d0();
  func_0x00010876ef10();
  func_0x000107c29ee4(&pcStack_150,pppuVar5 + 0x1d);
  uStack_228 = CONCAT44(uStack_228._4_4_,3);
  uVar7 = 0;
  func_0x000107c287e0();
  uStack_218 = uVar7;
  func_0x000107c287d0();
  func_0x00010876ef10();
  func_0x00010876ef08(&uStack_250);
  pppuStack_240 = pppuVar5;
  func_0x00010876ef08(&uStack_270);
  lStack_208 = lStack_268;
  uStack_210 = uStack_270;
  uStack_270 = 0;
  lStack_268 = 0;
  pppuStack_260 = pppuVar5;
  pppuStack_200 = pppuVar5;
  func_0x00010876eed0(&pcStack_150);
  lStack_1f0 = *(long *)(pcStack_150 + 600);
  uStack_1f8 = *(undefined8 *)(pcStack_150 + 0x250);
  if (*(long *)(pcStack_150 + 600) != 0) {
    do {
      func_0x00010876ee7c();
    } while (extraout_w10_00 != 0);
  }
  uStack_1e8 = *(undefined4 *)((long)pppuVar5[0xb] + 0xfc);
  func_0x00010876ef18();
  pcStack_1b0 = FUN_10876ebcc;
  ppuStack_1a8 = &PTR_FUN_110a6c990;
  puVar8 = (undefined8 *)0x30;
  __Znwm();
  puVar8[1] = lStack_208;
  *puVar8 = uStack_210;
  if (lStack_208 != 0) {
    do {
      func_0x00010876ee7c();
    } while (extraout_w10_01 != 0);
  }
  puVar8[3] = uStack_1f8;
  puVar8[2] = pppuStack_200;
  puVar8[4] = lStack_1f0;
  if (lStack_1f0 != 0) {
    do {
      func_0x00010876ee7c();
    } while (extraout_w10_02 != 0);
  }
  *(undefined4 *)(puVar8 + 5) = uStack_1e8;
  ppuVar15 = pppuVar5[1];
  ppuVar1 = pppuVar5[2];
  ppuStack_1c0 = ppuVar15;
  ppuStack_1b8 = ppuVar1;
  puStack_1a0 = puVar8;
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar12 = pppuVar5[0xb];
  }
  else {
    do {
      func_0x00010876ee7c();
    } while (extraout_w10_03 != 0);
    ppuVar12 = pppuVar5[0xb];
    do {
      func_0x00010876ee7c();
    } while (extraout_w10_04 != 0);
  }
  puVar9 = (undefined8 *)0xb8;
  ppuStack_1e0 = ppuVar15;
  ppuStack_1d8 = ppuVar1;
  __Znwm();
  uVar4 = uStack_248;
  uVar7 = uStack_250;
  plVar13 = puVar9 + 1;
  *plVar13 = 0;
  puVar9[2] = 0;
  *puVar9 = &PTR_FUN_110a6c850;
  pcStack_150 = FUN_10876e4f0;
  ppuStack_148 = &PTR_FUN_110a6c890;
  ppuStack_1e0 = (undefined **)0x0;
  ppuStack_1d8 = (undefined **)0x0;
  pcVar14 = (code *)(puVar9 + 3);
  *(undefined ***)pcVar14 = &PTR_DAT_110a6c8d0;
  pcStack_180 = FUN_10876e574;
  ppuStack_178 = &PTR_FUN_110a6c8a8;
  uStack_250 = 0;
  uStack_248 = 0;
  uStack_168 = 0;
  pppuStack_160 = pppuStack_240;
  puVar9[4] = FUN_10876e574;
  puVar9[5] = &PTR_FUN_110a6c8a8;
  puVar9[7] = uVar4;
  puVar9[6] = uVar7;
  uStack_170 = 0;
  puVar9[8] = pppuStack_240;
  puVar9[10] = FUN_10876ebcc;
  puVar9[0xb] = &PTR_FUN_110a6c990;
  puVar9[0xc] = puVar8;
  puStack_1a0 = (undefined8 *)0x0;
  puVar9[0x10] = FUN_10876e4f0;
  puVar9[0x11] = &PTR_FUN_110a6c890;
  puVar9[0x12] = ppuVar15;
  puVar9[0x13] = ppuVar1;
  uStack_140 = 0;
  uStack_138 = 0;
  puVar9[0x16] = ppuVar12;
  func_0x000107c297a4(&uStack_170);
  func_0x000107c297a8(&uStack_140);
  func_0x000107c297a8(&ppuStack_1e0);
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  pcStack_280 = pcVar14;
  puStack_278 = puVar9;
  func_0x00010876ee2c(&uStack_1d0);
  func_0x000107c297a8(&ppuStack_1c0);
  func_0x00010876eebc();
  FUN_10876e4a0(&uStack_210);
  func_0x00010876eed0(&pcStack_150);
  plVar10 = *(long **)(pcStack_150 + 0x50);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar3) {
      *plVar13 = *plVar13 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  pcStack_180 = pcVar14;
  ppuStack_178 = (undefined **)puVar9;
  (**(code **)(*plVar10 + 0x98))(plVar10,&ppuStack_238,&pcStack_180);
  func_0x00010876ee54(&pcStack_180);
  func_0x00010876ef18();
  func_0x00010876ee2c(&pcStack_280);
  func_0x000107c297a4(&uStack_270);
  func_0x000107c297a4(&uStack_250);
  pppuVar5 = &ppuStack_238;
  FUN_1089259d8();
  func_0x00010876eea8(uStack_120);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010876ee54(&pcStack_180);
    func_0x00010876ef18();
    func_0x00010876ee2c(&pcStack_280);
    func_0x000107c297a4(&uStack_270);
    func_0x000107c297a4(&uStack_250);
    pppuVar5 = &ppuStack_238;
    FUN_1089259d8();
    func_0x00010876ee98();
    *pppuVar5 = &PTR_FUN_110a6c7e0;
    func_0x000107c28ab4(pppuVar5 + 0x20);
    func_0x000107c27914(pppuVar5 + 0x1d);
    func_0x000107c27914(pppuVar5 + 0x1a);
    FUN_1086d7d10(pppuVar5 + 0x16);
    *pppuVar5 = &PTR_FUN_110a6b2b8;
    func_0x000107c2979c(pppuVar5 + 0x13);
    func_0x00010865f8f8(pppuVar5 + 0xd);
    *pppuVar5 = &PTR_DAT_110a6d608;
    func_0x0001005fe494(pppuVar5 + 0xb);
    func_0x0001005640e4(pppuVar5 + 6);
    func_0x000107c60ca0(pppuVar5 + 3);
    func_0x0001005fe52c(pppuVar5 + 1);
    return pppuVar5;
  }
  return pppuVar5;
}



/* Entry: 10876e05c; end: 10876e40b;  */

undefined *** FUN_10876e05c(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 in_ZR;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined ***pppuVar10;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined8 uVar11;
  long *plVar12;
  code *pcVar13;
  code *pcStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined **ppuStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
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
  func_0x00010876eed8();
  ppuStack_188 = &PTR_FUN_110a97e00;
  uStack_180 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_178 = 0;
  uStack_70 = extraout_x8;
  func_0x000107c29ee4(&pcStack_a0,lVar5 + 0xd0);
  uStack_178._0_4_ = 1;
  uVar6 = 0;
  func_0x000107c287e0();
  uStack_170 = uVar6;
  func_0x000107c287d0();
  func_0x00010876ef10();
  func_0x000107c29ee4(&pcStack_a0,param_1 + 0xe8);
  uStack_178 = CONCAT44(uStack_178._4_4_,3);
  uVar6 = 0;
  func_0x000107c287e0();
  uStack_168 = uVar6;
  func_0x000107c287d0();
  func_0x00010876ef10();
  func_0x00010876ef08(&uStack_1a0);
  lStack_190 = param_1;
  func_0x00010876ef08(&uStack_1c0);
  lStack_158 = lStack_1b8;
  uStack_160 = uStack_1c0;
  uStack_1c0 = 0;
  lStack_1b8 = 0;
  lStack_1b0 = param_1;
  lStack_150 = param_1;
  func_0x00010876eed0(&pcStack_a0);
  lStack_140 = *(long *)(pcStack_a0 + 600);
  uStack_148 = *(undefined8 *)(pcStack_a0 + 0x250);
  if (*(long *)(pcStack_a0 + 600) != 0) {
    do {
      func_0x00010876ee7c();
    } while (extraout_w10 != 0);
  }
  uStack_138 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0xfc);
  func_0x00010876ef18();
  pcStack_100 = FUN_10876ebcc;
  ppuStack_f8 = &PTR_FUN_110a6c990;
  puVar7 = (undefined8 *)0x30;
  __Znwm();
  puVar7[1] = lStack_158;
  *puVar7 = uStack_160;
  if (lStack_158 != 0) {
    do {
      func_0x00010876ee7c();
    } while (extraout_w10_00 != 0);
  }
  puVar7[3] = uStack_148;
  puVar7[2] = lStack_150;
  puVar7[4] = lStack_140;
  if (lStack_140 != 0) {
    do {
      func_0x00010876ee7c();
    } while (extraout_w10_01 != 0);
  }
  *(undefined4 *)(puVar7 + 5) = uStack_138;
  uVar6 = *(undefined8 *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
  uStack_110 = uVar6;
  lStack_108 = lVar5;
  puStack_f0 = puVar7;
  if (lVar5 == 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x58);
  }
  else {
    do {
      func_0x00010876ee7c();
    } while (extraout_w10_02 != 0);
    uVar11 = *(undefined8 *)(param_1 + 0x58);
    do {
      func_0x00010876ee7c();
    } while (extraout_w10_03 != 0);
  }
  puVar8 = (undefined8 *)0xb8;
  uStack_130 = uVar6;
  lStack_128 = lVar5;
  __Znwm();
  uVar4 = uStack_198;
  uVar3 = uStack_1a0;
  plVar12 = puVar8 + 1;
  *plVar12 = 0;
  puVar8[2] = 0;
  *puVar8 = &PTR_FUN_110a6c850;
  pcStack_a0 = FUN_10876e4f0;
  ppuStack_98 = &PTR_FUN_110a6c890;
  uStack_130 = 0;
  lStack_128 = 0;
  pcVar13 = (code *)(puVar8 + 3);
  *(undefined ***)pcVar13 = &PTR_DAT_110a6c8d0;
  pcStack_d0 = FUN_10876e574;
  ppuStack_c8 = &PTR_FUN_110a6c8a8;
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_b8 = 0;
  lStack_b0 = lStack_190;
  puVar8[4] = FUN_10876e574;
  puVar8[5] = &PTR_FUN_110a6c8a8;
  puVar8[7] = uVar4;
  puVar8[6] = uVar3;
  uStack_c0 = 0;
  puVar8[8] = lStack_190;
  puVar8[10] = FUN_10876ebcc;
  puVar8[0xb] = &PTR_FUN_110a6c990;
  puVar8[0xc] = puVar7;
  puStack_f0 = (undefined8 *)0x0;
  puVar8[0x10] = FUN_10876e4f0;
  puVar8[0x11] = &PTR_FUN_110a6c890;
  puVar8[0x12] = uVar6;
  puVar8[0x13] = lVar5;
  uStack_90 = 0;
  uStack_88 = 0;
  puVar8[0x16] = uVar11;
  func_0x000107c297a4(&uStack_c0);
  func_0x000107c297a8(&uStack_90);
  func_0x000107c297a8(&uStack_130);
  uStack_120 = 0;
  uStack_118 = 0;
  pcStack_1d0 = pcVar13;
  puStack_1c8 = puVar8;
  func_0x00010876ee2c(&uStack_120);
  func_0x000107c297a8(&uStack_110);
  func_0x00010876eebc();
  FUN_10876e4a0(&uStack_160);
  func_0x00010876eed0(&pcStack_a0);
  plVar9 = *(long **)(pcStack_a0 + 0x50);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar2) {
      *plVar12 = *plVar12 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  pcStack_d0 = pcVar13;
  ppuStack_c8 = (undefined **)puVar8;
  (**(code **)(*plVar9 + 0x98))(plVar9,&ppuStack_188,&pcStack_d0);
  func_0x00010876ee54(&pcStack_d0);
  func_0x00010876ef18();
  func_0x00010876ee2c(&pcStack_1d0);
  func_0x000107c297a4(&uStack_1c0);
  func_0x000107c297a4(&uStack_1a0);
  pppuVar10 = &ppuStack_188;
  FUN_1089259d8();
  func_0x00010876eea8(uStack_70);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010876ee54(&pcStack_d0);
    func_0x00010876ef18();
    func_0x00010876ee2c(&pcStack_1d0);
    func_0x000107c297a4(&uStack_1c0);
    func_0x000107c297a4(&uStack_1a0);
    pppuVar10 = &ppuStack_188;
    FUN_1089259d8();
    func_0x00010876ee98();
    *pppuVar10 = &PTR_FUN_110a6c7e0;
    func_0x000107c28ab4(pppuVar10 + 0x20);
    func_0x000107c27914(pppuVar10 + 0x1d);
    func_0x000107c27914(pppuVar10 + 0x1a);
    FUN_1086d7d10(pppuVar10 + 0x16);
    *pppuVar10 = &PTR_FUN_110a6b2b8;
    func_0x000107c2979c(pppuVar10 + 0x13);
    func_0x00010865f8f8(pppuVar10 + 0xd);
    *pppuVar10 = &PTR_DAT_110a6d608;
    func_0x0001005fe494(pppuVar10 + 0xb);
    func_0x0001005640e4(pppuVar10 + 6);
    func_0x000107c60ca0(pppuVar10 + 3);
    func_0x0001005fe52c(pppuVar10 + 1);
    return pppuVar10;
  }
  return pppuVar10;
}



/* Entry: 10876e40c; end: 10876e40f;  */

undefined8 * FUN_10876e40c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6c7e0;
  func_0x000107c28ab4(param_1 + 0x20);
  func_0x000107c27914(param_1 + 0x1d);
  func_0x000107c27914(param_1 + 0x1a);
  FUN_1086d7d10(param_1 + 0x16);
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



/* Entry: 10876e410; end: 10876e423;  */

void FUN_10876e410(void)

{
  FUN_10876ec7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10876e424; end: 10876e49f;  */

undefined1 * FUN_10876e424(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long extraout_x9;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  puVar2 = auStack_40;
  func_0x00010876eed8();
  uStack_28 = extraout_x8;
  func_0x000107c27994(auStack_40,extraout_x9 + 0xe8);
  func_0x00010868c9c4(param_1,auStack_40,1);
  func_0x000107c27914();
  func_0x00010876eea8(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x000107c27914();
  func_0x00010876ee98();
  func_0x000107c297ac(puVar2 + 0x18);
  func_0x000100562400();
  if (puVar2 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return puVar1;
}



/* Entry: 10876e4a0; end: 10876e4c7;  */

undefined8 FUN_10876e4a0(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c297ac(param_1 + 0x18);
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10876e4c8; end: 10876e4cb;  */

void FUN_10876e4c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6c850;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10876e4cc; end: 10876e4df;  */

void FUN_10876e4cc(void)

{
  FUN_10876ebbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10876e4e0; end: 10876e4ef;  */

void FUN_10876e4e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010876e4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10876e4f0; end: 10876e54f;  */

long FUN_10876e4f0(long param_1)

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



/* Entry: 10876e550; end: 10876e573;  */

void FUN_10876e550(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 10876e574; end: 10876e977;  */

void FUN_10876e574(long param_1,long param_2,code *UNRECOVERED_JUMPTABLE)

{
  undefined **ppuVar1;
  long lVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  undefined **ppuVar4;
  ulong unaff_x19;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  long alStack_460 [3];
  undefined1 auStack_448 [8];
  undefined1 uStack_440;
  undefined1 uStack_438;
  undefined1 uStack_434;
  undefined1 uStack_410;
  undefined1 auStack_330 [24];
  undefined8 uStack_318;
  undefined1 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined1 uStack_2f8;
  undefined1 uStack_2f0;
  undefined1 uStack_2e8;
  undefined1 uStack_2e0;
  undefined1 uStack_2d8;
  undefined4 uStack_2d4;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined1 uStack_2b8;
  undefined7 uStack_2b7;
  undefined1 uStack_2b0;
  undefined8 uStack_2af;
  undefined1 uStack_2a0;
  undefined1 uStack_298;
  undefined1 uStack_294;
  long alStack_290 [3];
  undefined1 auStack_278 [320];
  long lStack_138;
  byte bStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [64];
  
  plVar5 = *(long **)(param_2 + 0x20);
  func_0x00010876ef20(*(undefined8 *)(param_1 + 0x18));
  if ((bool)in_ZR) {
    lVar6 = *(long *)(extraout_x8 + 0x60);
    func_0x00010876eed0(alStack_290);
    lVar2 = alStack_290[0];
    func_0x000107c297b0(alStack_290);
    func_0x00010876eed0(alStack_290);
    func_0x000107c297b0(alStack_290);
    uVar7 = *(undefined8 *)(*(long *)(lVar2 + 0x60) + 0x18);
    func_0x000107c278b8(auStack_b8,"");
    func_0x000107c31420(auStack_a0,uVar7,auStack_b8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
    func_0x000107c29f64(alStack_290,*(undefined8 *)(lVar2 + 0x60),plVar5 + 0x1d,2);
    if ((bStack_c0 & 1) == 0) {
      func_0x00010876eee8();
      func_0x000107c28dc8(auStack_448,lVar6);
      func_0x000107c278b8(auStack_330,&DAT_10f4bdfd4);
      uStack_318 = *(undefined8 *)(lVar6 + 0xe8);
      uStack_310 = 1;
      uStack_2f0 = 0;
      uStack_2e8 = 0;
      uStack_2e0 = 0;
      uStack_308 = 0;
      uStack_300 = 0;
      uStack_2f8 = 0;
      uStack_2d8 = 1;
      uStack_2d4 = 2;
      uStack_2a0 = 0;
      uStack_298 = 0;
      uStack_294 = 0;
      uStack_2af = 0;
      uStack_2b0 = 0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2b8 = 0;
      uStack_2b7 = 0;
      uStack_2c0 = 0;
      func_0x000107c29058(alStack_290,alStack_460);
      func_0x000107c287e4(alStack_460);
      uVar7 = *(undefined8 *)(lVar2 + 0x60);
      func_0x00010876eee8();
      auStack_448[0] = 0;
      uStack_440 = 0;
      uStack_438 = 0;
      uStack_434 = 0;
      FUN_10885fef4(uVar7,alStack_460);
      func_0x000107c27914(alStack_460);
      FUN_10885ff98(*(undefined8 *)(lVar2 + 0x60),alStack_290);
    }
    if (*(long *)(lVar6 + 0xe0) < lStack_138) {
      func_0x00010876eed0(alStack_460);
      plVar5 = *(long **)(alStack_460[0] + 0x70);
      func_0x00010876ef08(&uStack_478);
      (**(code **)(*plVar5 + 0x10))(plVar5,&uStack_478);
      func_0x000107c297a4(&uStack_478);
      func_0x000107c297b0(alStack_460);
    }
    else {
      lVar6 = *(long *)(lVar6 + 200);
      FUN_108713a94(auStack_278);
      uVar3 = lVar6 == 0;
      FUN_1088bc234();
      FUN_10885ff98(*(undefined8 *)(lVar2 + 0x60),alStack_290);
      alStack_460[0] = 0;
      alStack_460[1] = 0;
      alStack_460[2] = 0;
      uStack_478 = 0;
      uStack_470 = 0;
      uStack_468 = 0;
      (**(code **)**(undefined8 **)(alStack_290[0] + 0x170))
                (*(undefined8 **)(alStack_290[0] + 0x170),alStack_290,alStack_290,1,alStack_460,
                 &uStack_478);
      func_0x000104be1274(&uStack_478);
      func_0x00010867b9fc(alStack_460);
      (**(code **)(*(long *)plVar5[0x20] + 0x198))((long *)plVar5[0x20],plVar5 + 0x1d);
      func_0x000107c31428(auStack_a0);
      FUN_10875ec20(plVar5);
      func_0x00010876ef20(*(undefined8 *)(param_1 + 0x18));
      if ((bool)uVar3) {
        ppuVar4 = *(undefined ***)(extraout_x8_00 + 0x60);
      }
      else {
        ppuVar4 = &PTR_PTR_11327ad30;
      }
      ppuVar1 = &PTR_PTR_11326bbc8;
      if ((undefined **)ppuVar4[0x19] != (undefined **)0x0) {
        ppuVar1 = (undefined **)ppuVar4[0x19];
      }
      func_0x0001086d7ce4(alStack_460,ppuVar1);
      uStack_410 = 1;
      FUN_10876e978(plVar5[0x19],0,alStack_460);
      FUN_1086d7cf0(alStack_460);
    }
    func_0x000107c288c8(alStack_290);
    func_0x000107c31424(auStack_a0);
    return;
  }
  func_0x00010875efcc(plVar5,0);
  (**(code **)(*plVar5 + 0x38))();
  FUN_10867a27c(unaff_x20 + 0x68,unaff_x19 & 0xffffffff | 0x100000000);
  func_0x00010875efc0();
  FUN_10875ec6c(unaff_x20);
  func_0x00010875efe0();
                    /* WARNING: Could not recover jumptable at 0x00010875ec1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10876e978; end: 10876e9ab;  */

void FUN_10876e978(long *param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x30))(param_1,&uStack_18);
    return;
  }
  func_0x000104bfeb48();
  param_1 = param_1 + 1;
  func_0x000100562400();
  if (param_1 != (long *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10876e9ac; end: 10876e9db;  */

void FUN_10876e9ac(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10876e9dc; end: 10876e9ef;  */

void FUN_10876e9dc(void)

{
  func_0x00010876eb88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10876e9f0; end: 10876ea07;  */

void FUN_10876e9f0(long param_1)

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



/* Entry: 10876ea08; end: 10876ea4b;  */

void FUN_10876ea08(int param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010876eef4();
  if (param_1 != 0) {
    func_0x00010084fb48(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010876ea3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x20 + 8))(param_2,(undefined8 *)(unaff_x20 + 8));
    return;
  }
  return;
}



/* Entry: 10876ea4c; end: 10876eaf7;  */

void FUN_10876ea4c(int param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x20;
  undefined1 auStack_80 [72];
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  func_0x00010876eef4();
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



/* Entry: 10876eaf8; end: 10876eafb;  */

undefined8 * FUN_10876eaf8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6c958;
  func_0x00010876ef00(param_1[8]);
  func_0x00010876ef00(param_1[2]);
  return param_1;
}



/* Entry: 10876eafc; end: 10876eb0f;  */

void FUN_10876eafc(void)

{
  FUN_10876eb4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10876eb10; end: 10876eb4b;  */

void FUN_10876eb10(void)

{
  return;
}



/* Entry: 10876eb4c; end: 10876ebbb;  */

undefined8 * FUN_10876eb4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6c958;
  func_0x00010876ef00(param_1[8]);
  func_0x00010876ef00(param_1[2]);
  return param_1;
}



/* Entry: 10876ebbc; end: 10876ebcb;  */

void FUN_10876ebbc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6c850;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10876ebcc; end: 10876ec43;  */

void FUN_10876ebcc(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

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



/* Entry: 10876ec44; end: 10876ec63;  */

void FUN_10876ec44(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10876e4a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10876ec64; end: 10876ec7b;  */

void FUN_10876ec64(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10876ec7c; end: 10876eccb;  */

undefined8 * FUN_10876ec7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6c7e0;
  func_0x000107c28ab4(param_1 + 0x20);
  func_0x000107c27914(param_1 + 0x1d);
  func_0x000107c27914(param_1 + 0x1a);
  FUN_1086d7d10(param_1 + 0x16);
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



/* Entry: 10876eccc; end: 10876ecd3;  */

void FUN_10876eccc(void)

{
  return;
}



/* Entry: 10876ecd4; end: 10876ed03;  */

void FUN_10876ecd4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110a6c9b8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10876ed04; end: 10876ed2f;  */

void FUN_10876ed04(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a6c9b8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10876ed30; end: 10876ed87;  */

void FUN_10876ed30(long param_1,ulong *param_2)

{
  undefined1 auStack_78 [80];
  undefined1 uStack_28;
  
  if ((*param_2 >> 0x20 & 1) != 0) {
    auStack_78[0] = 0;
    uStack_28 = 0;
    FUN_10876e978(*(undefined8 *)(*(long *)(param_1 + 8) + 200),*param_2,auStack_78);
    FUN_1086d7cf0(auStack_78);
  }
  return;
}



/* Entry: 10876ed88; end: 10876edbf;  */

long FUN_10876ed88(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a6ca18);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10876edc0; end: 10876edcb;  */

undefined ** FUN_10876edc0(void)

{
  return &PTR_DAT_110a6ca18;
}



/* Entry: 10876edcc; end: 10876ee7b;  */

long FUN_10876edcc(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Entry: 10876ee7c; end: 10876ef33;  */

void FUN_10876ee7c(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10876ef34; end: 10876f0a3;  */

undefined ***
FUN_10876ef34(undefined ***param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined1 in_ZR;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined **ppuVar12;
  long *plVar13;
  code *pcVar14;
  code *pcStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined ***pppuStack_250;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined ***pppuStack_230;
  undefined **ppuStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined ***pppuStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined4 uStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  code *pcStack_1a0;
  undefined **ppuStack_198;
  undefined8 *puStack_190;
  code *pcStack_170;
  undefined **ppuStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined ***pppuStack_150;
  code *pcStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_110;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined **ppuStack_78;
  undefined ***pppuStack_70;
  undefined ***pppuStack_60;
  undefined8 uStack_58;
  
  pppuVar6 = param_1;
  func_0x00010876fdc0();
  *pppuVar6 = &PTR_FUN_110a6ca38;
  uStack_58 = extraout_x8;
  func_0x000107c278b8(auStack_90,&UNK_10f4ba2c9);
  ppuStack_78 = &PTR_FUN_110a6cc10;
  pppuStack_60 = &ppuStack_78;
  uStack_98 = *param_3;
  *param_3 = 0;
  pppuStack_70 = param_1;
  FUN_10875e9fc(param_1,auStack_90,param_2,0,&ppuStack_78,param_7,&uStack_98,0x13);
  func_0x000107c29578(&uStack_98);
  func_0x00010865f8f8(&ppuStack_78);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  *param_1 = &PTR_FUN_110a6ca38;
  func_0x00010867a334(param_1 + 0x16,param_4);
  func_0x000107c27994(param_1 + 0x1a,param_5);
  pppuVar6 = param_1 + 0x1d;
  func_0x000107c27994(pppuVar6,param_6);
  func_0x00010876fd88(uStack_58);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107c27914(param_1 + 0x1a);
  func_0x00010865f8f8(param_1 + 0x16);
  FUN_10875b664(param_1);
  __Unwind_Resume();
  pppuVar7 = pppuVar6;
  func_0x00010876fdc0();
  ppuStack_228 = &PTR_FUN_110a97db0;
  uStack_220 = 0;
  uStack_210 = 0;
  uStack_208 = 0;
  uStack_218 = 0;
  uStack_110 = extraout_x8_00;
  func_0x000107c29ee4(&pcStack_140,pppuVar7 + 0x1a);
  uStack_218._0_4_ = 1;
  uVar8 = 0;
  func_0x000107c287e0();
  uStack_210 = uVar8;
  func_0x000107c287d0();
  func_0x00010876fe38();
  func_0x000107c29ee4(&pcStack_140,pppuVar6 + 0x1d);
  uStack_218 = CONCAT44(uStack_218._4_4_,3);
  uVar8 = 0;
  func_0x000107c287e0();
  uStack_208 = uVar8;
  func_0x000107c287d0();
  func_0x00010876fe38();
  func_0x000107c297b4(&uStack_240,pppuVar6 + 1);
  pppuStack_230 = pppuVar6;
  func_0x000107c297b4(&uStack_260,pppuVar6 + 1);
  lStack_1f8 = lStack_258;
  uStack_200 = uStack_260;
  uStack_260 = 0;
  lStack_258 = 0;
  pppuStack_250 = pppuVar6;
  pppuStack_1f0 = pppuVar6;
  func_0x00010876fda8(&pcStack_140);
  lStack_1e0 = *(long *)(pcStack_140 + 600);
  uStack_1e8 = *(undefined8 *)(pcStack_140 + 0x250);
  if (*(long *)(pcStack_140 + 600) != 0) {
    do {
      func_0x00010876fdb0();
    } while (extraout_w10 != 0);
  }
  uStack_1d8 = *(undefined4 *)((long)pppuVar6[0xb] + 0xfc);
  func_0x00010876fe40();
  pcStack_1a0 = FUN_10876fb7c;
  ppuStack_198 = &PTR_FUN_110a6cbe8;
  puVar9 = (undefined8 *)0x30;
  __Znwm();
  puVar9[1] = lStack_1f8;
  *puVar9 = uStack_200;
  if (lStack_1f8 != 0) {
    do {
      func_0x00010876fdb0();
    } while (extraout_w10_00 != 0);
  }
  puVar9[3] = uStack_1e8;
  puVar9[2] = pppuStack_1f0;
  puVar9[4] = lStack_1e0;
  if (lStack_1e0 != 0) {
    do {
      func_0x00010876fdb0();
    } while (extraout_w10_01 != 0);
  }
  *(undefined4 *)(puVar9 + 5) = uStack_1d8;
  ppuVar1 = pppuVar6[1];
  ppuVar2 = pppuVar6[2];
  ppuStack_1b0 = ppuVar1;
  ppuStack_1a8 = ppuVar2;
  puStack_190 = puVar9;
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar12 = pppuVar6[0xb];
  }
  else {
    do {
      func_0x00010876fdb0();
    } while (extraout_w10_02 != 0);
    ppuVar12 = pppuVar6[0xb];
    do {
      func_0x00010876fdb0();
    } while (extraout_w10_03 != 0);
  }
  puVar10 = (undefined8 *)0xb8;
  ppuStack_1d0 = ppuVar1;
  ppuStack_1c8 = ppuVar2;
  __Znwm();
  uVar5 = uStack_238;
  uVar8 = uStack_240;
  plVar13 = puVar10 + 1;
  *plVar13 = 0;
  puVar10[2] = 0;
  *puVar10 = &PTR_FUN_110a6caa8;
  pcStack_140 = FUN_10876f538;
  ppuStack_138 = &PTR_FUN_110a6cae8;
  ppuStack_1d0 = (undefined **)0x0;
  ppuStack_1c8 = (undefined **)0x0;
  pcVar14 = (code *)(puVar10 + 3);
  *(undefined ***)pcVar14 = &PTR_DAT_110a6cb28;
  pcStack_170 = FUN_10876f5bc;
  ppuStack_168 = &PTR_FUN_110a6cb00;
  uStack_240 = 0;
  uStack_238 = 0;
  uStack_158 = 0;
  pppuStack_150 = pppuStack_230;
  puVar10[4] = FUN_10876f5bc;
  puVar10[5] = &PTR_FUN_110a6cb00;
  puVar10[7] = uVar5;
  puVar10[6] = uVar8;
  uStack_160 = 0;
  puVar10[8] = pppuStack_230;
  puVar10[10] = FUN_10876fb7c;
  puVar10[0xb] = &PTR_FUN_110a6cbe8;
  puVar10[0xc] = puVar9;
  puStack_190 = (undefined8 *)0x0;
  puVar10[0x10] = FUN_10876f538;
  puVar10[0x11] = &PTR_FUN_110a6cae8;
  puVar10[0x12] = ppuVar1;
  puVar10[0x13] = ppuVar2;
  uStack_130 = 0;
  uStack_128 = 0;
  puVar10[0x16] = ppuVar12;
  func_0x000107c297a4(&uStack_160);
  func_0x000107c297a8(&uStack_130);
  func_0x000107c297a8(&ppuStack_1d0);
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  pcStack_270 = pcVar14;
  puStack_268 = puVar10;
  FUN_10876fd2c(&uStack_1c0);
  func_0x000107c297a8(&ppuStack_1b0);
  func_0x00010876fdd8();
  FUN_10876f4e8(&uStack_200);
  func_0x00010876fda8(&pcStack_140);
  plVar11 = *(long **)(pcStack_140 + 0x50);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *plVar13 = *plVar13 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  pcStack_170 = pcVar14;
  ppuStack_168 = (undefined **)puVar10;
  (**(code **)(*plVar11 + 0xa0))(plVar11,&ppuStack_228,&pcStack_170);
  func_0x00010876fd54(&pcStack_170);
  func_0x00010876fe40();
  FUN_10876fd2c(&pcStack_270);
  func_0x000107c297a4(&uStack_260);
  func_0x000107c297a4(&uStack_240);
  pppuVar6 = &ppuStack_228;
  FUN_108925df8();
  func_0x00010876fd88(uStack_110);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010876fd54(&pcStack_170);
    func_0x00010876fe40();
    FUN_10876fd2c(&pcStack_270);
    func_0x000107c297a4(&uStack_260);
    func_0x000107c297a4(&uStack_240);
    pppuVar6 = &ppuStack_228;
    FUN_108925df8();
    func_0x00010876fdec();
    *pppuVar6 = &PTR_FUN_110a6ca38;
    func_0x000107c27914(pppuVar6 + 0x1d);
    func_0x000107c27914(pppuVar6 + 0x1a);
    func_0x00010865f8f8(pppuVar6 + 0x16);
    *pppuVar6 = &PTR_FUN_110a6b2b8;
    func_0x000107c2979c(pppuVar6 + 0x13);
    func_0x00010865f8f8(pppuVar6 + 0xd);
    *pppuVar6 = &PTR_DAT_110a6d608;
    func_0x0001005fe494(pppuVar6 + 0xb);
    func_0x0001005640e4(pppuVar6 + 6);
    func_0x000107c60ca0(pppuVar6 + 3);
    func_0x0001005fe52c(pppuVar6 + 1);
    return pppuVar6;
  }
  return pppuVar6;
}



/* Entry: 10876f0a4; end: 10876f45b;  */

undefined *** FUN_10876f0a4(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 in_ZR;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined ***pppuVar10;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined8 uVar11;
  long *plVar12;
  code *pcVar13;
  code *pcStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined **ppuStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
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
  func_0x00010876fdc0();
  ppuStack_188 = &PTR_FUN_110a97db0;
  uStack_180 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_178 = 0;
  uStack_70 = extraout_x8;
  func_0x000107c29ee4(&pcStack_a0,lVar5 + 0xd0);
  uStack_178._0_4_ = 1;
  uVar6 = 0;
  func_0x000107c287e0();
  uStack_170 = uVar6;
  func_0x000107c287d0();
  func_0x00010876fe38();
  func_0x000107c29ee4(&pcStack_a0,param_1 + 0xe8);
  uStack_178 = CONCAT44(uStack_178._4_4_,3);
  uVar6 = 0;
  func_0x000107c287e0();
  uStack_168 = uVar6;
  func_0x000107c287d0();
  func_0x00010876fe38();
  func_0x000107c297b4(&uStack_1a0,param_1 + 8);
  lStack_190 = param_1;
  func_0x000107c297b4(&uStack_1c0,param_1 + 8);
  lStack_158 = lStack_1b8;
  uStack_160 = uStack_1c0;
  uStack_1c0 = 0;
  lStack_1b8 = 0;
  lStack_1b0 = param_1;
  lStack_150 = param_1;
  func_0x00010876fda8(&pcStack_a0);
  lStack_140 = *(long *)(pcStack_a0 + 600);
  uStack_148 = *(undefined8 *)(pcStack_a0 + 0x250);
  if (*(long *)(pcStack_a0 + 600) != 0) {
    do {
      func_0x00010876fdb0();
    } while (extraout_w10 != 0);
  }
  uStack_138 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0xfc);
  func_0x00010876fe40();
  pcStack_100 = FUN_10876fb7c;
  ppuStack_f8 = &PTR_FUN_110a6cbe8;
  puVar7 = (undefined8 *)0x30;
  __Znwm();
  puVar7[1] = lStack_158;
  *puVar7 = uStack_160;
  if (lStack_158 != 0) {
    do {
      func_0x00010876fdb0();
    } while (extraout_w10_00 != 0);
  }
  puVar7[3] = uStack_148;
  puVar7[2] = lStack_150;
  puVar7[4] = lStack_140;
  if (lStack_140 != 0) {
    do {
      func_0x00010876fdb0();
    } while (extraout_w10_01 != 0);
  }
  *(undefined4 *)(puVar7 + 5) = uStack_138;
  uVar6 = *(undefined8 *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
  uStack_110 = uVar6;
  lStack_108 = lVar5;
  puStack_f0 = puVar7;
  if (lVar5 == 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x58);
  }
  else {
    do {
      func_0x00010876fdb0();
    } while (extraout_w10_02 != 0);
    uVar11 = *(undefined8 *)(param_1 + 0x58);
    do {
      func_0x00010876fdb0();
    } while (extraout_w10_03 != 0);
  }
  puVar8 = (undefined8 *)0xb8;
  uStack_130 = uVar6;
  lStack_128 = lVar5;
  __Znwm();
  uVar4 = uStack_198;
  uVar3 = uStack_1a0;
  plVar12 = puVar8 + 1;
  *plVar12 = 0;
  puVar8[2] = 0;
  *puVar8 = &PTR_FUN_110a6caa8;
  pcStack_a0 = FUN_10876f538;
  ppuStack_98 = &PTR_FUN_110a6cae8;
  uStack_130 = 0;
  lStack_128 = 0;
  pcVar13 = (code *)(puVar8 + 3);
  *(undefined ***)pcVar13 = &PTR_DAT_110a6cb28;
  pcStack_d0 = FUN_10876f5bc;
  ppuStack_c8 = &PTR_FUN_110a6cb00;
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_b8 = 0;
  lStack_b0 = lStack_190;
  puVar8[4] = FUN_10876f5bc;
  puVar8[5] = &PTR_FUN_110a6cb00;
  puVar8[7] = uVar4;
  puVar8[6] = uVar3;
  uStack_c0 = 0;
  puVar8[8] = lStack_190;
  puVar8[10] = FUN_10876fb7c;
  puVar8[0xb] = &PTR_FUN_110a6cbe8;
  puVar8[0xc] = puVar7;
  puStack_f0 = (undefined8 *)0x0;
  puVar8[0x10] = FUN_10876f538;
  puVar8[0x11] = &PTR_FUN_110a6cae8;
  puVar8[0x12] = uVar6;
  puVar8[0x13] = lVar5;
  uStack_90 = 0;
  uStack_88 = 0;
  puVar8[0x16] = uVar11;
  func_0x000107c297a4(&uStack_c0);
  func_0x000107c297a8(&uStack_90);
  func_0x000107c297a8(&uStack_130);
  uStack_120 = 0;
  uStack_118 = 0;
  pcStack_1d0 = pcVar13;
  puStack_1c8 = puVar8;
  FUN_10876fd2c(&uStack_120);
  func_0x000107c297a8(&uStack_110);
  func_0x00010876fdd8();
  FUN_10876f4e8(&uStack_160);
  func_0x00010876fda8(&pcStack_a0);
  plVar9 = *(long **)(pcStack_a0 + 0x50);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar2) {
      *plVar12 = *plVar12 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  pcStack_d0 = pcVar13;
  ppuStack_c8 = (undefined **)puVar8;
  (**(code **)(*plVar9 + 0xa0))(plVar9,&ppuStack_188,&pcStack_d0);
  func_0x00010876fd54(&pcStack_d0);
  func_0x00010876fe40();
  FUN_10876fd2c(&pcStack_1d0);
  func_0x000107c297a4(&uStack_1c0);
  func_0x000107c297a4(&uStack_1a0);
  pppuVar10 = &ppuStack_188;
  FUN_108925df8();
  func_0x00010876fd88(uStack_70);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010876fd54(&pcStack_d0);
    func_0x00010876fe40();
    FUN_10876fd2c(&pcStack_1d0);
    func_0x000107c297a4(&uStack_1c0);
    func_0x000107c297a4(&uStack_1a0);
    pppuVar10 = &ppuStack_188;
    FUN_108925df8();
    func_0x00010876fdec();
    *pppuVar10 = &PTR_FUN_110a6ca38;
    func_0x000107c27914(pppuVar10 + 0x1d);
    func_0x000107c27914(pppuVar10 + 0x1a);
    func_0x00010865f8f8(pppuVar10 + 0x16);
    *pppuVar10 = &PTR_FUN_110a6b2b8;
    func_0x000107c2979c(pppuVar10 + 0x13);
    func_0x00010865f8f8(pppuVar10 + 0xd);
    *pppuVar10 = &PTR_DAT_110a6d608;
    func_0x0001005fe494(pppuVar10 + 0xb);
    func_0x0001005640e4(pppuVar10 + 6);
    func_0x000107c60ca0(pppuVar10 + 3);
    func_0x0001005fe52c(pppuVar10 + 1);
    return pppuVar10;
  }
  return pppuVar10;
}



/* Entry: 10876f45c; end: 10876f45f;  */

undefined8 * FUN_10876f45c(undefined8 *param_1)

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



/* Entry: 10876f460; end: 10876f473;  */

void FUN_10876f460(void)

{
  FUN_10876fc2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10876f474; end: 10876f4e7;  */

long FUN_10876f474(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  long extraout_x9;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  func_0x00010876fdc0();
  uStack_28 = extraout_x8;
  func_0x000107c27994(auStack_40,extraout_x9 + 0xe8);
  func_0x00010868c9c4(param_1,auStack_40,1);
  func_0x00010876fe08();
  func_0x00010876fd88(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar1 = param_1;
  func_0x00010876fe08();
  func_0x00010876fdec();
  func_0x000107c297ac(lVar1 + 0x18);
  func_0x000100562400();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10876f4e8; end: 10876f50f;  */

undefined8 FUN_10876f4e8(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c297ac(param_1 + 0x18);
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10876f510; end: 10876f513;  */

void FUN_10876f510(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6caa8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10876f514; end: 10876f527;  */

void FUN_10876f514(void)

{
  FUN_10876fb6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10876f528; end: 10876f537;  */

void FUN_10876f528(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010876f530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10876f538; end: 10876f597;  */

long FUN_10876f538(long param_1)

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



/* Entry: 10876f598; end: 10876f5bb;  */

void FUN_10876f598(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 10876f5bc; end: 10876f95b;  */

long ** FUN_10876f5bc(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  long **pplVar2;
  long **pplVar3;
  int iVar4;
  long **pplVar5;
  undefined8 extraout_x8;
  long **pplVar6;
  undefined8 uVar7;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long alStack_c0 [3];
  long *aplStack_a8 [2];
  undefined1 auStack_98 [24];
  long *plStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_38;
  
  func_0x00010876fdc0();
  pplVar6 = *(long ***)(param_2 + 0x20);
  uStack_38 = extraout_x8;
  func_0x00010876fd7c();
  uVar7 = *(undefined8 *)(*(long *)(alStack_c0[0] + 0x60) + 0x18);
  func_0x000107c278b8(auStack_98,"");
  func_0x000107c31420(&uStack_78,uVar7,auStack_98);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  func_0x00010876fdd0();
  func_0x00010876fd7c();
  FUN_108866b68(*(undefined8 *)(alStack_c0[0] + 0x60),pplVar6 + 0x1d);
  func_0x00010876fdd0();
  func_0x00010876fd7c();
  FUN_108866468(*(undefined8 *)(alStack_c0[0] + 0x60),pplVar6 + 0x1d);
  func_0x00010876fdd0();
  func_0x00010876fd7c();
  FUN_108868114(*(undefined8 *)(alStack_c0[0] + 0x60),pplVar6 + 0x1d);
  func_0x00010876fdd0();
  func_0x000107c31428(&uStack_78);
  func_0x000107c31424(&uStack_78);
  func_0x00010876fda8(&uStack_78);
  plVar1 = *(long **)(CONCAT44(uStack_74,uStack_78) + 0x170);
  (**(code **)(*plVar1 + 0x38))(plVar1,pplVar6 + 0x1d);
  func_0x00010876fe1c();
  func_0x00010876fda8(&uStack_78);
  plVar1 = *(long **)(CONCAT44(uStack_74,uStack_78) + 0x130);
  (**(code **)(*plVar1 + 0x38))(plVar1,pplVar6 + 0x1d);
  func_0x00010876fe1c();
  func_0x00010876fda8(aplStack_a8);
  plVar1 = (long *)aplStack_a8[0][0x18];
  func_0x000107c27994(&uStack_f0,pplVar6 + 0x1d);
  uStack_60 = uStack_e0;
  uStack_68 = uStack_e8;
  uStack_70 = uStack_f0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_f0 = 0;
  uStack_78 = 3;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_d8 = 0;
  func_0x00010871c0b8(alStack_c0,&uStack_78,1);
  (**(code **)(*plVar1 + 0x20))(plVar1,0x100000002,alStack_c0);
  func_0x000107c27b3c(alStack_c0);
  func_0x000107c27914(&uStack_70);
  func_0x000107c27914(&uStack_d8);
  func_0x00010876fe08();
  func_0x000107c297b0(aplStack_a8);
  func_0x00010876fd7c();
  plVar1 = *(long **)(alStack_c0[0] + 0x200);
  func_0x000107c27994(&uStack_78,pplVar6 + 0x1d);
  (**(code **)(*plVar1 + 0x10))(aplStack_a8,plVar1);
  (**(code **)(*aplStack_a8[0] + 0x30))(aplStack_a8[0],&uStack_78);
  plStack_80 = aplStack_a8[0];
  aplStack_a8[0] = (long *)0x0;
  pplVar5 = &plStack_80;
  (**(code **)(*plVar1 + 0x18))(plVar1);
  plVar1 = plStack_80;
  plStack_80 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    func_0x00010876fd9c();
  }
  plVar1 = aplStack_a8[0];
  aplStack_a8[0] = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    func_0x00010876fd9c();
  }
  func_0x000107c27914(&uStack_78);
  func_0x00010876fdd0();
  pplVar2 = pplVar6;
  FUN_10875ec20();
  while( true ) {
    iVar4 = (int)pplVar5;
    func_0x00010876fd88(uStack_38);
    if ((bool)in_ZR) {
      return pplVar2;
    }
    ___stack_chk_fail();
    if ((iVar4 == 0) || (in_ZR = iVar4 == 1, !(bool)in_ZR)) break;
    ___cxa_begin_catch();
    func_0x000108848514();
    pplVar3 = pplVar6;
    FUN_10875edc8();
    pplVar5 = pplVar2;
    ___cxa_end_catch();
    pplVar2 = pplVar3;
  }
  __Unwind_Resume(pplVar2);
  func_0x000104bd46a0();
  pplVar2 = pplVar2 + 1;
  func_0x000100562400();
  if (pplVar2 != (long **)0x0) {
    func_0x0001000df548();
  }
  return pplVar6;
}



/* Entry: 10876f95c; end: 10876f98b;  */

void FUN_10876f95c(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10876f98c; end: 10876f99f;  */

void FUN_10876f98c(void)

{
  func_0x00010876fb38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10876f9a0; end: 10876f9b7;  */

void FUN_10876f9a0(long param_1)

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



/* Entry: 10876f9b8; end: 10876f9fb;  */

void FUN_10876f9b8(int param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010876fe2c();
  if (param_1 != 0) {
    func_0x00010084fb48(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010876f9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x20 + 8))(param_2,(undefined8 *)(unaff_x20 + 8));
    return;
  }
  return;
}



/* Entry: 10876f9fc; end: 10876faa7;  */

void FUN_10876f9fc(int param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x20;
  undefined1 auStack_80 [72];
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  func_0x00010876fe2c();
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



/* Entry: 10876faa8; end: 10876faab;  */

undefined8 * FUN_10876faa8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6cbb0;
  func_0x00010876fe24(param_1[8]);
  func_0x00010876fe24(param_1[2]);
  return param_1;
}



/* Entry: 10876faac; end: 10876fabf;  */

void FUN_10876faac(void)

{
  FUN_10876fafc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


