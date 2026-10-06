/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10732c32c; end: 10732c363;  */

void FUN_10732c32c(void)

{
  func_0x0001073451ec();
  func_0x000107346ee4();
  FUN_10732c364();
  func_0x000107346384();
  return;
}



/* Entry: 10732c364; end: 10732c383;  */

void FUN_10732c364(void)

{
  func_0x0001073469bc();
  func_0x000104c318bc();
  return;
}



/* Entry: 10732c384; end: 10732c387;  */

void FUN_10732c384(void)

{
  func_0x0001073469bc();
  func_0x000104c2f714();
  return;
}



/* Entry: 10732c388; end: 10732c39b;  */

void FUN_10732c388(void)

{
  FUN_10732c420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10732c39c; end: 10732c3bf;  */

undefined8 FUN_10732c39c(void)

{
  undefined8 unaff_x19;
  
  func_0x000107346ee4();
  func_0x0001073469bc();
  func_0x000104c2fe00();
  return unaff_x19;
}



/* Entry: 10732c3c0; end: 10732c3eb;  */

void FUN_10732c3c0(long param_1,undefined8 param_2)

{
  func_0x0001073469bc(param_2,param_1 + 8);
  func_0x000104c2fe00();
  return;
}



/* Entry: 10732c3ec; end: 10732c413;  */

void FUN_10732c3ec(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a3790);
  func_0x000107344bc4();
  return;
}



/* Entry: 10732c414; end: 10732c41f;  */

undefined ** FUN_10732c414(void)

{
  return &PTR_DAT_1109a3790;
}



/* Entry: 10732c420; end: 10732c48b;  */

void FUN_10732c420(void)

{
  func_0x0001073469bc();
  func_0x000104c2f714();
  return;
}



/* Entry: 10732c48c; end: 10732c65b;  */

void FUN_10732c48c(ulong param_1,ulong param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 in_ZR;
  ulong *puVar5;
  byte *pbVar6;
  undefined8 extraout_x8;
  ulong *unaff_x19;
  ulong *unaff_x23;
  ulong uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong *puStack_d0;
  ulong uStack_c8;
  undefined4 auStack_c0 [2];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_48;
  
  func_0x0001073447e0();
  pbVar6 = *(byte **)(param_3 + 0x10);
  uStack_48 = extraout_x8;
  if (pbVar6 == (byte *)0x0) {
    if (*(long *)(param_3 + 0x20) == 0) {
      auStack_c0[0] = 2;
      uStack_b0 = 0;
      uStack_a0 = 0;
      uStack_a8 = 0;
      uStack_b8 = 7;
    }
    else {
      func_0x000107870020(auStack_c0);
    }
    unaff_x23 = &uStack_e0;
    FUN_10732c65c(&uStack_e0,auStack_c0);
    puStack_d0 = (ulong *)(long)*(char *)(*(long *)(param_3 + 0x20) + 0x17);
    if ((long)puStack_d0 < 0) {
      puStack_d0 = *(ulong **)(*(long *)(param_3 + 0x20) + 8);
    }
    uStack_c8 = uStack_c8 & 0xffffffffffffff00;
    unaff_x19[1] = uStack_d8;
    *unaff_x19 = uStack_e0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    unaff_x19[2] = (ulong)puStack_d0;
    func_0x000107347d7c(0);
    FUN_107325fe0(&uStack_e0);
    puVar5 = (ulong *)auStack_c0;
    FUN_107327aec();
  }
  else {
    bVar1 = *pbVar6;
    param_1 = (ulong)bVar1;
    puVar5 = &uStack_f8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar5,pbVar6 + 8);
    uVar4 = uStack_e8;
    uVar3 = uStack_f0;
    uVar2 = uStack_f8;
    auStack_c0[0] = CONCAT31(auStack_c0[0]._1_3_,bVar1);
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    *(byte *)unaff_x19 = bVar1;
    unaff_x19[2] = uVar3;
    unaff_x19[1] = uVar2;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_b8 = 0;
    unaff_x19[3] = uVar4;
    unaff_x19[4] = 0;
    unaff_x19[5] = 0;
    func_0x000107346c28(auStack_c0);
    func_0x000107346154();
  }
  while( true ) {
    func_0x0001073447cc(uStack_48);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x000107346b38();
    in_ZR = (int)unaff_x23 == 1;
    if (!(bool)in_ZR) break;
    func_0x0001073471f0();
    func_0x000107344fa8();
    uStack_c8 = 0;
    uStack_e0 = param_1;
    uStack_d8 = param_2;
    puStack_d0 = puVar5;
    func_0x0001073478a0();
    func_0x0001003a9204(&uStack_110);
    uVar3 = uStack_108;
    uVar2 = uStack_110;
    auStack_c0[0] = CONCAT31(auStack_c0[0]._1_3_,6);
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    *(byte *)unaff_x19 = 6;
    unaff_x19[2] = uVar3;
    unaff_x19[1] = uVar2;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_b8 = 0;
    func_0x0001073462f8();
    func_0x000107345944();
    ___cxa_end_catch();
  }
  func_0x000107346358();
  func_0x000107345eb4();
  FUN_10732c678();
  return;
}



/* Entry: 10732c65c; end: 10732c677;  */

void FUN_10732c65c(void)

{
  func_0x000107345eb4();
  FUN_10732c678();
  return;
}



/* Entry: 10732c678; end: 10732c6db;  */

void FUN_10732c678(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uStack_30;
  
  func_0x0001073447e0();
  func_0x000107346378();
  FUN_10732c6dc();
  FUN_10732c72c(uStack_30,param_2);
  func_0x000107344a14();
  func_0x00010732c788();
  func_0x0001073447cc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107345740();
  func_0x00010732c788();
  func_0x000107345604();
  func_0x000107346404();
  FUN_10732c6fc();
  func_0x0001073465ec();
  return;
}



/* Entry: 10732c6dc; end: 10732c6fb;  */

void FUN_10732c6dc(void)

{
  func_0x000107346404();
  FUN_10732c6fc();
  func_0x0001073465ec();
  return;
}



/* Entry: 10732c6fc; end: 10732c72b;  */

void FUN_10732c6fc(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x1c71c71c71c71c8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x90);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010734771c();
  func_0x0001073474f4(&UNK_1109a3e98);
  FUN_107327a90();
  return;
}



/* Entry: 10732c72c; end: 10732c757;  */

void FUN_10732c72c(void)

{
  func_0x00010734771c();
  func_0x0001073474f4(&UNK_1109a3e98);
  FUN_107327a90();
  return;
}



/* Entry: 10732c758; end: 10732c75b;  */

void FUN_10732c758(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a3ea8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10732c75c; end: 10732c76f;  */

void FUN_10732c75c(void)

{
  func_0x00010732c77c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10732c770; end: 10732c797;  */

undefined4 * FUN_10732c770(long param_1)

{
  FUN_107327b18(*(undefined4 *)(param_1 + 0x18),param_1 + 0x20);
  return (undefined4 *)(param_1 + 0x18);
}



/* Entry: 10732c798; end: 10732c80f;  */

long FUN_10732c798(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107345eec(&UNK_1109a3f08);
  FUN_10732ca50(param_1 + 0x58,param_4);
  FUN_10732ca94();
  func_0x00010726ed14(param_1 + 0x148);
  *(long *)(param_1 + 0x158) = param_1;
  return param_1;
}



/* Entry: 10732c810; end: 10732c823;  */

void FUN_10732c810(void)

{
  func_0x00010732e5a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10732c824; end: 10732c92f;  */

void FUN_10732c824(void)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined1 *puVar4;
  code *extraout_x8;
  long unaff_x19;
  undefined1 auStack_968 [504];
  char cStack_770;
  undefined1 *apuStack_730 [4];
  char cStack_710;
  undefined **appuStack_708 [3];
  undefined ***pppuStack_6f0;
  undefined **ppuStack_6b8;
  undefined1 auStack_698 [536];
  undefined1 auStack_480 [32];
  undefined1 auStack_460 [56];
  undefined1 uStack_428;
  undefined1 auStack_248 [504];
  char cStack_50;
  undefined8 uStack_48;
  
  func_0x0001073450dc();
  func_0x0001073449c4();
  func_0x000107346e2c(auStack_248);
  uVar1 = cStack_50 == '\x01';
  if ((bool)uVar1) {
    func_0x000107346188();
    FUN_10732d1f8(auStack_698,auStack_460);
    puVar4 = auStack_698;
    FUN_10732d218(auStack_480,puVar4);
    ppuStack_6b8 = &PTR_FUN_1109a4128;
    func_0x000107347d68();
    FUN_10732cc2c();
    func_0x00010732e3d4(&ppuStack_6b8);
    func_0x00010732e408(auStack_480);
    func_0x000107345cec();
    func_0x000107346f9c();
  }
  else {
    auStack_460[0] = 0;
    uStack_428 = 0;
    puVar4 = auStack_460;
    FUN_10732e43c();
    FUN_107325f6c(auStack_460);
  }
  func_0x000107346f80();
  func_0x0001073447cc(uStack_48);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107345834();
  func_0x00010732e3d4();
  puVar2 = auStack_480;
  func_0x00010732e408(puVar2);
  func_0x000107345cec();
  func_0x000107346f9c();
  func_0x000107346f80();
  func_0x000107345604();
  ppuVar3 = apuStack_730;
  func_0x0001073448a8();
  pppuStack_6f0 = appuStack_708;
  appuStack_708[0] = &PTR_FUN_1109a4048;
  FUN_10732dabc(apuStack_730,puVar2 + 0x78);
  FUN_10732dd94(appuStack_708);
  uVar1 = cStack_710 == '\x01';
  if ((bool)uVar1) {
    func_0x000107345938(*(undefined8 *)(unaff_x19 + 8),apuStack_730[0]);
    (*extraout_x8)();
    puVar4 = apuStack_730[0];
  }
  FUN_10732dde0();
  func_0x00010734471c();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107345740();
  FUN_10732dde0();
  func_0x000107345604();
  func_0x000107344818();
  func_0x000107346e2c(auStack_968);
  uVar1 = cStack_770 == '\x01';
  if ((bool)uVar1) {
    func_0x00010734788c(*(undefined8 *)(**(long **)((long)ppuVar3 + 8) + 0x20));
  }
  puVar2 = auStack_968;
  FUN_10732a468();
  func_0x0001073446ac();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107345834();
  FUN_10732a468();
  func_0x000107345604();
  if (puVar2[0x50] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010734633c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(puVar2 + 8) + 0x28))(*(long **)(puVar2 + 8),puVar2 + 0x38,puVar4);
    return;
  }
  return;
}



/* Entry: 10732c930; end: 10732c9c3;  */

void FUN_10732c930(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  code *extraout_x8;
  long unaff_x19;
  undefined1 auStack_2a8 [504];
  char cStack_b0;
  undefined8 auStack_70 [4];
  char cStack_50;
  undefined **appuStack_48 [3];
  undefined ***pppuStack_30;
  
  puVar2 = auStack_70;
  func_0x0001073448a8();
  pppuStack_30 = appuStack_48;
  appuStack_48[0] = &PTR_FUN_1109a4048;
  FUN_10732dabc(auStack_70,param_1 + 0x78);
  FUN_10732dd94(appuStack_48);
  uVar1 = cStack_50 == '\x01';
  if ((bool)uVar1) {
    func_0x000107345938(*(undefined8 *)(unaff_x19 + 8),auStack_70[0]);
    (*extraout_x8)();
    param_2 = auStack_70[0];
  }
  FUN_10732dde0();
  func_0x00010734471c();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107345740();
  FUN_10732dde0();
  func_0x000107345604();
  func_0x000107344818();
  func_0x000107346e2c(auStack_2a8);
  uVar1 = cStack_b0 == '\x01';
  if ((bool)uVar1) {
    func_0x00010734788c(*(undefined8 *)(**(long **)((long)puVar2 + 8) + 0x20));
  }
  puVar3 = auStack_2a8;
  FUN_10732a468();
  func_0x0001073446ac();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107345834();
  FUN_10732a468();
  func_0x000107345604();
  if (puVar3[0x50] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010734633c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(puVar3 + 8) + 0x28))(*(long **)(puVar3 + 8),puVar3 + 0x38,param_2);
    return;
  }
  return;
}



/* Entry: 10732c9c4; end: 10732ca3b;  */

void FUN_10732c9c4(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_238 [504];
  char cStack_40;
  
  func_0x000107344818();
  func_0x000107346e2c(auStack_238);
  uVar1 = cStack_40 == '\x01';
  if ((bool)uVar1) {
    func_0x00010734788c(*(undefined8 *)(**(long **)(param_1 + 8) + 0x20));
  }
  puVar2 = auStack_238;
  FUN_10732a468();
  func_0x0001073446ac();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107345834();
  FUN_10732a468();
  func_0x000107345604();
  if (puVar2[0x50] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010734633c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(puVar2 + 8) + 0x28))(*(long **)(puVar2 + 8),puVar2 + 0x38,param_2);
    return;
  }
  return;
}



/* Entry: 10732ca3c; end: 10732ca4f;  */

void FUN_10732ca3c(long param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010734633c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 0x28))(*(long **)(param_1 + 8),param_1 + 0x38,param_2);
    return;
  }
  return;
}



/* Entry: 10732ca50; end: 10732ca93;  */

void FUN_10732ca50(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010734624c();
  if (extraout_x8 == 0) {
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
  }
  else if (extraout_x8 == param_2) {
    func_0x0001073449b0();
    func_0x000107345720();
  }
  else {
    func_0x0001073461ec();
  }
  return;
}



/* Entry: 10732ca94; end: 10732caab;  */

void FUN_10732ca94(void)

{
  __ZNSt3__119__shared_mutex_baseC1Ev();
  func_0x0001073475a8();
  return;
}



/* Entry: 10732caac; end: 10732cb83;  */

void FUN_10732caac(long param_1)

{
  func_0x00010732cad4(param_1 + 0xa8);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x70);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 10732cb84; end: 10732cb8b;  */

void FUN_10732cb84(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100a2b988(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    func_0x00010732cbc0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10732cb8c; end: 10732cc13;  */

void FUN_10732cb8c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100a2b988();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    func_0x00010732cbc0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10732cc14; end: 10732cc2b;  */

void FUN_10732cc14(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10732cc2c; end: 10732ccc3;  */

void FUN_10732cc2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [40];
  
  func_0x000100a2b988();
  func_0x0001073453c8();
  func_0x000107347d38();
  FUN_10732cd0c();
  if (param_1 == 0) {
    FUN_10732cdc8(auStack_60,param_3);
    func_0x000107347d38();
    FUN_10732ccc4();
    FUN_10732cce4();
    func_0x00010732cb2c(auStack_58);
  }
  else {
    FUN_10732d1e0(param_4,param_1 + 0x20);
  }
  func_0x000107346234();
  return;
}



/* Entry: 10732ccc4; end: 10732cce3;  */

long FUN_10732ccc4(long param_1)

{
  func_0x000107346078();
  FUN_10732cde0();
  return param_1 + 0x20;
}



/* Entry: 10732cce4; end: 10732cd0b;  */

undefined8 * FUN_10732cce4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x00010732d18c(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 10732cd0c; end: 10732cdc7;  */

long FUN_10732cd0c(long *param_1)

{
  ulong uVar1;
  undefined1 uVar2;
  long *plVar3;
  long *extraout_x8;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar3 = param_1 + 3, *plVar3 != 0)) {
    func_0x00010784b234();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar3 & uVar7);
      uVar2 = true;
    }
    else {
      uVar2 = plVar3 == plVar6;
      plVar8 = plVar3;
      if (plVar6 <= plVar3) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar3 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar3 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        func_0x0001073476a4();
        if (!(bool)uVar2) break;
        func_0x000107347758();
        if ((int)plVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)extraout_x8 & uVar7);
      }
      else {
        plVar4 = extraout_x8;
        if (plVar6 <= extraout_x8) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)extraout_x8 / (ulong)plVar6;
          }
          plVar4 = (long *)((long)extraout_x8 - uVar1 * (long)plVar6);
        }
      }
      uVar2 = 1;
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 10732cdc8; end: 10732cddf;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010732ced0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16]
FUN_10732cdc8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,long *param_6)

{
  ulong uVar1;
  undefined1 in_NG;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  long *extraout_x8;
  long *plVar6;
  long extraout_x8_00;
  long lVar7;
  long extraout_x9;
  long *unaff_x19;
  long *plVar8;
  long *plVar9;
  long *unaff_x25;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  plVar3 = *(long **)(param_3 + 0x18);
  if (plVar3 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x0001073477e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar12._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar12._0_8_ = plVar3;
    return auVar12;
  }
  func_0x000104bfeb48();
  func_0x000107346b14();
  func_0x00010784b234();
  plVar9 = (long *)unaff_x19[1];
  plVar4 = plVar3;
  if (plVar9 != (long *)0x0) {
    uVar10 = (long)plVar9 - 1;
    in_NG = (long)((ulong)plVar9 & uVar10) < 0;
    uVar2 = ((ulong)plVar9 & uVar10) == 0;
    if ((bool)uVar2) {
      func_0x0001073465d4();
    }
    else {
      in_NG = (long)plVar3 - (long)plVar9 < 0;
      uVar2 = plVar3 == plVar9;
      unaff_x25 = plVar3;
      if (plVar9 <= plVar3) {
        func_0x000107347ce8();
      }
    }
    plVar8 = *(long **)(*unaff_x19 + (long)unaff_x25 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_10732ce90;
          func_0x0001073476a4();
          if (!(bool)uVar2) break;
          func_0x00010734774c();
          if (((ulong)plVar4 & 1) != 0) {
            uVar5 = 0;
            plVar4 = plVar8;
            goto LAB_10732cf84;
          }
        }
        if (((ulong)plVar9 & uVar10) == 0) {
          plVar6 = (long *)((ulong)extraout_x8 & uVar10);
        }
        else {
          plVar6 = extraout_x8;
          if (plVar9 <= extraout_x8) {
            uVar1 = 0;
            if (plVar9 != (long *)0x0) {
              uVar1 = (ulong)extraout_x8 / (ulong)plVar9;
            }
            plVar6 = (long *)((long)extraout_x8 - uVar1 * (long)plVar9);
          }
        }
        in_NG = (long)plVar6 - (long)unaff_x25 < 0;
        uVar2 = 1;
      } while (plVar6 == unaff_x25);
    }
  }
LAB_10732ce90:
  func_0x000107346ee4();
  *plVar4 = 0;
  plVar4[1] = (long)plVar3;
  lVar7 = *(long *)*param_6;
  *(int *)(plVar4 + 3) = (int)((long *)*param_6)[1];
  plVar4[2] = lVar7;
  plVar4[5] = 0;
  plVar4[4] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  func_0x000107345980();
  plVar8 = unaff_x25;
  if ((plVar9 == (long *)0x0) || (func_0x000107347ca8(param_1,param_2,(float)plVar9), (bool)in_NG))
  {
    func_0x000107347590();
    func_0x00010734530c();
    FUN_10732cf9c();
    plVar9 = (long *)unaff_x19[1];
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      func_0x0001073465d4();
    }
    else {
      plVar8 = plVar3;
      if (plVar9 <= plVar3) {
        func_0x000107347ce8();
        plVar8 = unaff_x25;
      }
    }
  }
  plVar3 = *(long **)(*unaff_x19 + (long)plVar8 * 8);
  if (plVar3 == (long *)0x0) {
    func_0x00010734756c();
    if (extraout_x9 != 0) {
      plVar3 = *(long **)(extraout_x9 + 8);
      if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
        plVar3 = (long *)((ulong)plVar3 & (long)plVar9 - 1U);
      }
      else if (plVar9 <= plVar3) {
        uVar10 = 0;
        if (plVar9 != (long *)0x0) {
          uVar10 = (ulong)plVar3 / (ulong)plVar9;
        }
        plVar3 = (long *)((long)plVar3 - uVar10 * (long)plVar9);
      }
      *(long **)(extraout_x8_00 + (long)plVar3 * 8) = plVar4;
    }
  }
  else {
    *plVar4 = *plVar3;
    *plVar3 = (long)plVar4;
  }
  func_0x000107345f3c();
  FUN_10732d11c();
  uVar5 = 1;
LAB_10732cf84:
  auVar11._8_8_ = uVar5;
  auVar11._0_8_ = plVar4;
  return auVar11;
}



/* Entry: 10732cde0; end: 10732cf9b;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010732ced0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16]
FUN_10732cde0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,long *param_6)

{
  ulong uVar1;
  undefined1 in_NG;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *extraout_x8;
  undefined8 *puVar5;
  long extraout_x8_00;
  long extraout_x9;
  long *unaff_x19;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *unaff_x25;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  func_0x000107346b14();
  func_0x00010784b234();
  puVar7 = (undefined8 *)unaff_x19[1];
  puVar3 = param_3;
  if (puVar7 != (undefined8 *)0x0) {
    uVar8 = (long)puVar7 - 1;
    in_NG = (long)((ulong)puVar7 & uVar8) < 0;
    uVar2 = ((ulong)puVar7 & uVar8) == 0;
    if ((bool)uVar2) {
      func_0x0001073465d4();
    }
    else {
      in_NG = (long)param_3 - (long)puVar7 < 0;
      uVar2 = param_3 == puVar7;
      unaff_x25 = param_3;
      if (puVar7 <= param_3) {
        func_0x000107347ce8();
      }
    }
    puVar6 = *(undefined8 **)(*unaff_x19 + (long)unaff_x25 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      do {
        while( true ) {
          puVar6 = (undefined8 *)*puVar6;
          if (puVar6 == (undefined8 *)0x0) goto LAB_10732ce90;
          func_0x0001073476a4();
          if (!(bool)uVar2) break;
          func_0x00010734774c();
          if (((ulong)puVar3 & 1) != 0) {
            uVar4 = 0;
            puVar3 = puVar6;
            goto LAB_10732cf84;
          }
        }
        if (((ulong)puVar7 & uVar8) == 0) {
          puVar5 = (undefined8 *)((ulong)extraout_x8 & uVar8);
        }
        else {
          puVar5 = extraout_x8;
          if (puVar7 <= extraout_x8) {
            uVar1 = 0;
            if (puVar7 != (undefined8 *)0x0) {
              uVar1 = (ulong)extraout_x8 / (ulong)puVar7;
            }
            puVar5 = (undefined8 *)((long)extraout_x8 - uVar1 * (long)puVar7);
          }
        }
        in_NG = (long)puVar5 - (long)unaff_x25 < 0;
        uVar2 = 1;
      } while (puVar5 == unaff_x25);
    }
  }
LAB_10732ce90:
  func_0x000107346ee4();
  *puVar3 = 0;
  puVar3[1] = param_3;
  uVar4 = *(undefined8 *)*param_6;
  *(undefined4 *)(puVar3 + 3) = *(undefined4 *)((undefined8 *)*param_6 + 1);
  puVar3[2] = uVar4;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  func_0x000107345980();
  puVar6 = unaff_x25;
  if ((puVar7 == (undefined8 *)0x0) ||
     (func_0x000107347ca8(param_1,param_2,(float)puVar7), (bool)in_NG)) {
    func_0x000107347590();
    func_0x00010734530c();
    FUN_10732cf9c();
    puVar7 = (undefined8 *)unaff_x19[1];
    if (((ulong)puVar7 & (long)puVar7 - 1U) == 0) {
      func_0x0001073465d4();
    }
    else {
      puVar6 = param_3;
      if (puVar7 <= param_3) {
        func_0x000107347ce8();
        puVar6 = unaff_x25;
      }
    }
  }
  puVar6 = *(undefined8 **)(*unaff_x19 + (long)puVar6 * 8);
  if (puVar6 == (undefined8 *)0x0) {
    func_0x00010734756c();
    if (extraout_x9 != 0) {
      puVar6 = *(undefined8 **)(extraout_x9 + 8);
      if (((ulong)puVar7 & (long)puVar7 - 1U) == 0) {
        puVar6 = (undefined8 *)((ulong)puVar6 & (long)puVar7 - 1U);
      }
      else if (puVar7 <= puVar6) {
        uVar8 = 0;
        if (puVar7 != (undefined8 *)0x0) {
          uVar8 = (ulong)puVar6 / (ulong)puVar7;
        }
        puVar6 = (undefined8 *)((long)puVar6 - uVar8 * (long)puVar7);
      }
      *(undefined8 **)(extraout_x8_00 + (long)puVar6 * 8) = puVar3;
    }
  }
  else {
    *puVar3 = *puVar6;
    *puVar6 = puVar3;
  }
  func_0x000107345f3c();
  FUN_10732d11c();
  uVar4 = 1;
LAB_10732cf84:
  auVar9._8_8_ = uVar4;
  auVar9._0_8_ = puVar3;
  return auVar9;
}



/* Entry: 10732cf9c; end: 10732d027;  */

void FUN_10732cf9c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  ulong uVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x9;
  ulong uVar5;
  long *extraout_x9_00;
  long *plVar6;
  long *extraout_x9_01;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *plVar7;
  ulong uVar8;
  
  uVar3 = param_1;
  if (param_2 - 1 == 0) {
    uVar5 = 2;
  }
  else {
    uVar5 = param_2;
    if ((param_2 & param_2 - 1) != 0) {
      func_0x000107347be4();
      uVar5 = uVar3;
    }
  }
  uVar8 = *(ulong *)(param_1 + 8);
  uVar2 = uVar8 <= uVar5;
  if (uVar8 < uVar5) {
LAB_10732cfe0:
    func_0x000107345ba8();
    if (param_2 == 0) {
      FUN_10732d0ec(uVar3);
      *(undefined8 *)(uVar3 + 8) = 0;
    }
    else {
      lVar4 = uVar3 + 8;
      FUN_10732d104(lVar4);
      FUN_10732d0ec(uVar3,lVar4);
      func_0x00010734732c();
      for (uVar5 = extraout_x9; param_2 != uVar5; uVar5 = uVar5 + 1) {
        *(undefined8 *)(extraout_x8 + uVar5 * 8) = 0;
      }
      if (*(long *)(uVar3 + 0x10) != 0) {
        func_0x000107346570();
        func_0x000107346554();
        lVar4 = extraout_x8_00;
        plVar7 = extraout_x9_00;
        uVar3 = extraout_x10;
        uVar5 = extraout_x11;
        while (plVar6 = plVar7, plVar7 = (long *)*plVar6, plVar7 != (long *)0x0) {
          uVar8 = plVar7[1];
          if ((param_2 & uVar3) == 0) {
            uVar8 = uVar8 & uVar3;
          }
          else if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          if (uVar8 != uVar5) {
            if (*(long *)(lVar4 + uVar8 * 8) == 0) {
              *(long **)(lVar4 + uVar8 * 8) = plVar6;
              uVar5 = uVar8;
            }
            else {
              func_0x000107345664();
              lVar4 = extraout_x8_01;
              plVar7 = extraout_x9_01;
              uVar3 = extraout_x10_00;
              uVar5 = extraout_x11_00;
            }
          }
        }
      }
    }
    return;
  }
  if (!(bool)uVar2) {
    func_0x0001073458b8();
    if (((bool)uVar2) && ((uVar8 & uVar8 - 1) == 0)) {
      func_0x000107345684();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x00010734731c();
    if (!(bool)uVar2) goto LAB_10732cfe0;
  }
  return;
}



/* Entry: 10732d028; end: 10732d0eb;  */

void FUN_10732d028(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x9;
  ulong uVar3;
  long *extraout_x9_00;
  long *plVar4;
  long *extraout_x9_01;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar5;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_10732d0ec(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    lVar2 = param_1 + 8;
    FUN_10732d104(lVar2);
    FUN_10732d0ec(param_1,lVar2);
    func_0x00010734732c();
    for (uVar3 = extraout_x9; param_2 != uVar3; uVar3 = uVar3 + 1) {
      *(undefined8 *)(extraout_x8 + uVar3 * 8) = 0;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x000107346570();
      func_0x000107346554();
      lVar2 = extraout_x8_00;
      plVar6 = extraout_x9_00;
      uVar3 = extraout_x10;
      uVar5 = extraout_x11;
      while (plVar4 = plVar6, plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
        uVar7 = plVar6[1];
        if ((param_2 & uVar3) == 0) {
          uVar7 = uVar7 & uVar3;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != uVar5) {
          if (*(long *)(lVar2 + uVar7 * 8) == 0) {
            *(long **)(lVar2 + uVar7 * 8) = plVar4;
            uVar5 = uVar7;
          }
          else {
            func_0x000107345664();
            lVar2 = extraout_x8_01;
            plVar6 = extraout_x9_01;
            uVar3 = extraout_x10_00;
            uVar5 = extraout_x11_00;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10732d0ec; end: 10732d103;  */

void FUN_10732d0ec(long *param_1,long param_2)

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



/* Entry: 10732d104; end: 10732d11b;  */

void FUN_10732d104(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107346294();
  FUN_10732d13c();
  return;
}



/* Entry: 10732d11c; end: 10732d13b;  */

void FUN_10732d11c(void)

{
  func_0x000107346294();
  FUN_10732d13c();
  return;
}



/* Entry: 10732d13c; end: 10732d153;  */

void FUN_10732d13c(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  func_0x00010734743c(param_1 + 1);
  if ((bool)in_ZR) {
    func_0x00010732cb2c(unaff_x19 + 0x28);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10732d154; end: 10732d1df;  */

void FUN_10732d154(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x00010734743c();
  if ((bool)in_ZR) {
    func_0x00010732cb2c(unaff_x19 + 0x28);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10732d1e0; end: 10732d1f7;  */

void FUN_10732d1e0(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107345578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x000107346a58();
  func_0x0001072d488c();
  return;
}



/* Entry: 10732d1f8; end: 10732d217;  */

void FUN_10732d1f8(void)

{
  func_0x000107346a58();
  func_0x0001072d488c();
  return;
}



/* Entry: 10732d218; end: 10732d24f;  */

void FUN_10732d218(void)

{
  func_0x0001073451ec();
  func_0x000107346e78();
  FUN_10732d250();
  func_0x000107346384();
  return;
}



/* Entry: 10732d250; end: 10732d273;  */

void FUN_10732d250(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x00010734748c();
  *param_1 = extraout_x8;
  FUN_10732d320(param_1 + 1);
  return;
}



/* Entry: 10732d274; end: 10732d277;  */

void FUN_10732d274(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x00010734748c();
  *param_1 = extraout_x8;
  func_0x00010724b374(param_1 + 5);
  return;
}



/* Entry: 10732d278; end: 10732d28b;  */

void FUN_10732d278(void)

{
  func_0x00010732d340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10732d28c; end: 10732d2bf;  */

undefined8 FUN_10732d28c(undefined8 param_1)

{
  func_0x000107346e78();
  func_0x00010732d364();
  return param_1;
}



/* Entry: 10732d2c0; end: 10732d2eb;  */

void FUN_10732d2c0(long param_1,undefined8 *param_2)

{
  undefined8 extraout_x8;
  
  func_0x00010734748c(param_2,param_1 + 8);
  *param_2 = extraout_x8;
  FUN_10732d1f8(param_2 + 1);
  return;
}



/* Entry: 10732d2ec; end: 10732d313;  */

void FUN_10732d2ec(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a4108);
  func_0x000107344bc4();
  return;
}



/* Entry: 10732d314; end: 10732d31f;  */

undefined ** FUN_10732d314(void)

{
  return &PTR_DAT_1109a4108;
}



/* Entry: 10732d320; end: 10732d387;  */

void FUN_10732d320(void)

{
  func_0x000107346a58();
  func_0x0001072d62a0();
  return;
}



/* Entry: 10732d388; end: 10732d48f;  */

void FUN_10732d388(long param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long extraout_x8;
  undefined8 *unaff_x19;
  long unaff_x23;
  long unaff_x24;
  undefined1 auStack_1a0 [136];
  undefined1 auStack_118 [160];
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  
  func_0x0001073447e0();
  func_0x0001073463d8();
  FUN_10732d56c(unaff_x24 + 0x18);
  func_0x000107347b1c();
  func_0x0001073477e8();
  FUN_10732d490(auStack_118,unaff_x23 + 0x148,auStack_1a0);
  puVar1 = auStack_78;
  FUN_10732d5ac(puVar1,auStack_118);
  func_0x000107347ec0();
  func_0x000107346b64();
  func_0x000107347244();
  func_0x00010732de08(auStack_118);
  func_0x00010732de2c(auStack_1a0);
  *unaff_x19 = puVar1;
  FUN_10732d56c(auStack_78,*(undefined8 *)(param_1 + 0x18));
  puVar1 = auStack_78;
  func_0x00010732de54(unaff_x19 + 1,puVar1,1);
  func_0x00010732cbc0();
  func_0x0001073447cc(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010732cbc0(auStack_78);
  func_0x000107345604();
  FUN_10732d4c4();
  FUN_10732d52c(extraout_x8 + 0x18,puVar1);
  return;
}



/* Entry: 10732d490; end: 10732d4c3;  */

void FUN_10732d490(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10732d4c4();
  FUN_10732d52c(param_1 + 0x18,param_3);
  return;
}



/* Entry: 10732d4c4; end: 10732d50b;  */

void FUN_10732d4c4(undefined8 param_1)

{
  long extraout_x8;
  long extraout_x9;
  long extraout_x9_00;
  long lVar1;
  int extraout_w11;
  undefined1 auStack_30 [16];
  
  func_0x000107346060();
  lVar1 = extraout_x9;
  if (extraout_x8 != 0) {
    do {
      func_0x00010734740c();
      lVar1 = extraout_x9_00;
    } while (extraout_w11 != 0);
  }
  FUN_10732d50c(param_1,auStack_30,*(undefined8 *)(lVar1 + 0x10));
  func_0x0001073460e8();
  return;
}



/* Entry: 10732d50c; end: 10732d52b;  */

void FUN_10732d50c(void)

{
  func_0x0001073451c0();
  return;
}



/* Entry: 10732d52c; end: 10732d56b;  */

void FUN_10732d52c(void)

{
  func_0x000107345658();
  func_0x000107344e18();
  FUN_10732d56c();
  func_0x000107347b88();
  func_0x0001073477c4();
  return;
}



/* Entry: 10732d56c; end: 10732d5ab;  */

void FUN_10732d56c(long param_1,long param_2)

{
  long unaff_x19;
  
  func_0x000107346b2c();
  if (param_1 == 0) {
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
  }
  else if (param_1 == param_2) {
    func_0x0001073448d0();
  }
  else {
    func_0x000107344fa8();
    *(long *)(unaff_x19 + 0x18) = param_1;
  }
  return;
}



/* Entry: 10732d5ac; end: 10732d5e3;  */

void FUN_10732d5ac(void)

{
  func_0x0001073451ec();
  func_0x000107345fbc();
  FUN_10732d5e4();
  func_0x000107346384();
  return;
}



/* Entry: 10732d5e4; end: 10732d603;  */

void FUN_10732d5e4(void)

{
  func_0x000107346a44();
  FUN_10732d6b0();
  return;
}



/* Entry: 10732d604; end: 10732d607;  */

void FUN_10732d604(void)

{
  func_0x000107346a44();
  func_0x00010732de08();
  return;
}



/* Entry: 10732d608; end: 10732d61b;  */

void FUN_10732d608(void)

{
  func_0x00010732d710();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10732d61c; end: 10732d64f;  */

undefined8 FUN_10732d61c(undefined8 param_1)

{
  func_0x000107345fbc();
  func_0x00010732d730();
  return param_1;
}



/* Entry: 10732d650; end: 10732d67b;  */

void FUN_10732d650(long param_1,undefined8 param_2)

{
  func_0x000107346a44(param_2,param_1 + 8);
  FUN_10732d750();
  return;
}



/* Entry: 10732d67c; end: 10732d6a3;  */

void FUN_10732d67c(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a40f8);
  func_0x000107344bc4();
  return;
}



/* Entry: 10732d6a4; end: 10732d6af;  */

undefined ** FUN_10732d6a4(void)

{
  return &PTR_DAT_1109a40f8;
}



/* Entry: 10732d6b0; end: 10732d6e3;  */

void FUN_10732d6b0(long param_1,long param_2)

{
  func_0x0001073460a0();
  func_0x000107347cb4();
  FUN_10732d6e4(param_1 + 0x18,param_2 + 0x18);
  return;
}



/* Entry: 10732d6e4; end: 10732d74f;  */

void FUN_10732d6e4(void)

{
  func_0x000100a2b988();
  func_0x000107344e18();
  FUN_10732d56c();
  func_0x000107346c90();
  func_0x000104c318bc();
  func_0x000107346488();
  return;
}



/* Entry: 10732d750; end: 10732d783;  */

void FUN_10732d750(long param_1)

{
  long unaff_x20;
  
  func_0x000107345658();
  FUN_10732d784();
  FUN_10732d52c(param_1 + 0x18,unaff_x20 + 0x18);
  return;
}



/* Entry: 10732d784; end: 10732d7ab;  */

void FUN_10732d784(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10 != 0);
  }
  param_1[2] = param_2[2];
  return;
}



/* Entry: 10732d7ac; end: 10732d7f3;  */

void FUN_10732d7ac(void)

{
  int unaff_w20;
  undefined1 auStack_30 [16];
  
  func_0x000100a2b988();
  FUN_10732d7f4(auStack_30);
  FUN_10732d84c();
  if (unaff_w20 != 0) {
    func_0x000107347dcc();
    FUN_10732d864();
  }
  func_0x00010734613c();
  return;
}



/* Entry: 10732d7f4; end: 10732d84b;  */

void FUN_10732d7f4(void)

{
  undefined1 in_ZR;
  undefined8 *unaff_x19;
  long alStack_30 [2];
  
  func_0x000107347788();
  if (alStack_30[0] != 0) {
    func_0x00010726fc3c();
    func_0x000107347fd4();
    if (!(bool)in_ZR) {
      func_0x00010734694c();
      goto LAB_10732d83c;
    }
    func_0x00010726fc88();
  }
  func_0x0001072508cc(alStack_30);
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  func_0x00010734750c();
LAB_10732d83c:
  func_0x0001072508cc();
  return;
}



/* Entry: 10732d84c; end: 10732d863;  */

uint FUN_10732d84c(uint param_1)

{
  FUN_10732da74();
  return param_1 ^ 1;
}



/* Entry: 10732d864; end: 10732da73;  */

undefined1 * FUN_10732d864(long *param_1)

{
  ulong uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined ***pppuVar4;
  undefined8 extraout_x8;
  long *plVar5;
  uint uVar6;
  undefined1 *puVar7;
  long unaff_x20;
  long unaff_x21;
  long lVar8;
  int unaff_w23;
  ulong unaff_x25;
  ulong unaff_x26;
  long *aplStack_220 [2];
  undefined1 auStack_1c0 [32];
  undefined ***pppuStack_1a0;
  long lStack_170;
  long lStack_168;
  undefined1 auStack_148 [32];
  char cStack_128;
  undefined **appuStack_120 [3];
  undefined ***pppuStack_108;
  undefined8 uStack_68;
  
  func_0x000107346ea8();
  func_0x000107344b50();
  lVar8 = *param_1;
  pppuStack_108 = appuStack_120;
  appuStack_120[0] = &PTR_FUN_1109a4048;
  uStack_68 = extraout_x8;
  func_0x000107347c68();
  FUN_10732dabc();
  FUN_10732dd94(appuStack_120);
  uVar3 = cStack_128 == '\x01';
  if ((bool)uVar3) {
    FUN_10732ddc8(appuStack_120,lVar8 + 0x58);
    FUN_10732db50(auStack_148,appuStack_120);
    FUN_107325f6c(appuStack_120);
  }
LAB_10732d8ec:
  puVar7 = auStack_148;
  FUN_10732dde0(puVar7);
  func_0x0001073447cc(uStack_68);
  if ((bool)uVar3) {
    return puVar7;
  }
  ___stack_chk_fail();
  func_0x000107346b38();
  pppuVar4 = appuStack_120;
  FUN_107325f6c();
  if (unaff_w23 != 1) {
    FUN_10732dde0(auStack_148);
    func_0x000107346358();
    func_0x00010726fc00(aplStack_220);
    if (aplStack_220[0] == (long *)0x0) {
      puVar7 = (undefined1 *)0x1;
    }
    else {
      puVar7 = (undefined1 *)(ulong)(*aplStack_220[0] == -1);
    }
    func_0x0001072508cc(aplStack_220);
    return puVar7;
  }
  func_0x0001073471f0();
  func_0x00010734679c();
  do {
    plVar5 = *(long **)(unaff_x21 + 0x20);
    bVar2 = *(byte *)((long)plVar5 + 0x17);
    if ((char)bVar2 < '\0') {
      uVar1 = plVar5[1];
      if (0xf < (ulong)plVar5[1]) {
        uVar1 = unaff_x26;
      }
      if (uVar1 <= unaff_x25) break;
      plVar5 = (long *)*plVar5;
    }
    else {
      uVar6 = (uint)(char)bVar2;
      if (0xf < bVar2) {
        uVar6 = (uint)unaff_x26;
      }
      if (uVar6 <= unaff_x25) break;
    }
    func_0x000107346a90(plVar5);
    func_0x000107346df4();
    unaff_x25 = unaff_x25 + 1;
  } while( true );
  lStack_170 = 0;
  lStack_168 = 0;
  lVar8 = *(long *)(unaff_x20 + 0x70);
  if (lVar8 != *(long *)(unaff_x20 + 0x78)) {
    lStack_168 = *(long *)(unaff_x20 + 0x78) - lVar8;
    lStack_170 = lVar8;
  }
  func_0x000107347160();
  lVar8 = (long)*(char *)(*(long *)(unaff_x21 + 0x20) + 0x17);
  if (lVar8 < 0) {
    lVar8 = *(long *)(*(long *)(unaff_x21 + 0x20) + 8);
  }
  func_0x000107345d60(lVar8);
  uVar3 = *(char *)(unaff_x21 + 0x74) == '\x01';
  pppuStack_1a0 = pppuVar4;
  if ((bool)uVar3) {
    __ZNSt3__19to_stringEj(auStack_1c0,*(undefined4 *)(unaff_x21 + 0x70));
  }
  else {
    func_0x0001073472b4();
  }
  func_0x000107345a5c();
  func_0x000107347bc4();
  func_0x000107346928();
  func_0x000107345f54();
  func_0x000107346ba4();
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  func_0x000107345ad8();
  func_0x000107346b88();
  func_0x000107346ec0();
  func_0x000107347794();
  func_0x000107345e10();
  ___cxa_end_catch();
  goto LAB_10732d8ec;
}



/* Entry: 10732da74; end: 10732dabb;  */

bool FUN_10732da74(void)

{
  bool bVar1;
  long *aplStack_30 [2];
  
  func_0x00010726fc00(aplStack_30);
  if (aplStack_30[0] == (long *)0x0) {
    bVar1 = true;
  }
  else {
    bVar1 = *aplStack_30[0] == -1;
  }
  func_0x0001072508cc(aplStack_30);
  return bVar1;
}



/* Entry: 10732dabc; end: 10732db4f;  */

void FUN_10732dabc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *unaff_x19;
  
  func_0x000107344fb4();
  func_0x0001073453c8();
  func_0x000107347f9c();
  FUN_10732cd0c();
  if ((param_1 == 0) || (lVar1 = param_3, FUN_10732db88(param_3,param_1 + 0x20), (int)lVar1 == 0)) {
    *unaff_x19 = 0;
    unaff_x19[0x20] = 0;
  }
  else {
    func_0x0001073468d0();
    func_0x000107347f9c();
    FUN_10732dbb0();
    func_0x000107346020();
    FUN_10732dd00();
    func_0x00010732cb2c(param_3 + 8);
  }
  func_0x000107346234();
  return;
}



/* Entry: 10732db50; end: 10732db87;  */

void FUN_10732db50(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  for (lVar2 = *(long *)(param_1 + 8); lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
    func_0x000107345dfc();
    FUN_10732e43c();
  }
  return;
}



/* Entry: 10732db88; end: 10732db9f;  */

void FUN_10732db88(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107345578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  *plVar1 = *param_2;
  plVar1[1] = 0;
  plVar1[2] = 0;
  plVar1[3] = 0;
  lVar2 = param_2[1];
  plVar1[2] = param_2[2];
  plVar1[1] = lVar2;
  plVar1[3] = param_2[3];
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  return;
}



/* Entry: 10732dba0; end: 10732dbaf;  */

void FUN_10732dba0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  param_1[3] = param_2[3];
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  return;
}



/* Entry: 10732dbb0; end: 10732dc0b;  */

void FUN_10732dbb0(long param_1)

{
  FUN_10732cd0c();
  if (param_1 != 0) {
    func_0x000107346d48();
    func_0x00010732dbdc();
  }
  return;
}



/* Entry: 10732dc0c; end: 10732dcff;  */

void FUN_10732dc0c(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10732dcc0;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10732dcc0;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_10732dcc0:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10732dd00; end: 10732dd17;  */

void FUN_10732dd00(void)

{
  FUN_10732dba0();
  func_0x000107347da8();
  return;
}



/* Entry: 10732dd18; end: 10732dd1f;  */

void FUN_10732dd18(void)

{
  return;
}



/* Entry: 10732dd20; end: 10732dd3f;  */

void FUN_10732dd20(undefined8 *param_1)

{
  func_0x000107345a98();
  *param_1 = &PTR_FUN_1109a4048;
  return;
}



/* Entry: 10732dd40; end: 10732dd5f;  */

void FUN_10732dd40(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109a4048;
  return;
}



/* Entry: 10732dd60; end: 10732dd87;  */

void FUN_10732dd60(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a40b8);
  func_0x000107344bc4();
  return;
}



/* Entry: 10732dd88; end: 10732dd93;  */

undefined ** FUN_10732dd88(void)

{
  return &PTR_DAT_1109a40b8;
}



/* Entry: 10732dd94; end: 10732ddc7;  */

void FUN_10732dd94(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x000107344e80();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x000107344d70(uVar1);
  return;
}



/* Entry: 10732ddc8; end: 10732dddf;  */

void FUN_10732ddc8(long param_1)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001073464f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x0001073474bc();
  if ((bool)in_ZR) {
    func_0x00010732cb2c(unaff_x19 + 8);
  }
  return;
}



/* Entry: 10732dde0; end: 10732de7f;  */

void FUN_10732dde0(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x0001073474bc();
  if ((bool)in_ZR) {
    func_0x00010732cb2c(unaff_x19 + 8);
  }
  return;
}



/* Entry: 10732de80; end: 10732decf;  */

void FUN_10732de80(void)

{
  long in_x3;
  
  func_0x000107347f70();
  if (in_x3 != 0) {
    func_0x000107345fc4();
    FUN_10732ded0();
    func_0x00010734671c();
    FUN_10732df04();
  }
  func_0x00010734660c();
  func_0x00010732e05c();
  return;
}



/* Entry: 10732ded0; end: 10732df03;  */

void FUN_10732ded0(long param_1,ulong param_2)

{
  long *unaff_x19;
  
  if (param_2 >> 0x3b == 0) {
    func_0x000107346d78();
    FUN_10732df3c();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 0x20;
  }
  else {
    FUN_10732df30();
    func_0x0001073469b0();
    param_1 = param_1 + 0x10;
    func_0x00010732df78();
    unaff_x19[1] = param_1;
  }
  return;
}



/* Entry: 10732df04; end: 10732df2f;  */

void FUN_10732df04(long param_1)

{
  long unaff_x19;
  
  func_0x0001073469b0();
  param_1 = param_1 + 0x10;
  func_0x00010732df78();
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 10732df30; end: 10732df3b;  */

void FUN_10732df30(void)

{
  func_0x000107345150();
  FUN_10732df5c();
  return;
}



/* Entry: 10732df3c; end: 10732df5b;  */

void FUN_10732df3c(void)

{
  FUN_10732df5c();
  return;
}



/* Entry: 10732df5c; end: 10732df8b;  */

void FUN_10732df5c(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  FUN_10732df8c();
  return;
}



/* Entry: 10732df8c; end: 10732dff3;  */

undefined8 FUN_10732df8c(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  
  func_0x00010734513c();
  uStack_48 = 0;
  while (param_2 != param_3) {
    func_0x000107346964();
    FUN_10732d56c();
    func_0x000107347ee8();
  }
  func_0x000107346cb4();
  FUN_10732dff4(auStack_60);
  return param_4;
}



/* Entry: 10732dff4; end: 10732e01f;  */

void FUN_10732dff4(void)

{
  uint extraout_w8;
  
  func_0x000107348068();
  if ((extraout_w8 & 1) == 0) {
    FUN_10732e020();
  }
  return;
}


