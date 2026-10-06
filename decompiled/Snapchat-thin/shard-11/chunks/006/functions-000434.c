/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1087e58c8; end: 1087e5903;  */

undefined8 * FUN_1087e58c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a72330;
  if (*(char *)(param_1 + 0x23) == '\x01') {
    func_0x0001087e49c4(param_1 + 0x15);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1087e5904; end: 1087e5907;  */

undefined8 * FUN_1087e5904(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a72370;
  FUN_1087e5a68(param_1 + 1);
  return param_1;
}



/* Entry: 1087e5908; end: 1087e591b;  */

void FUN_1087e5908(void)

{
  FUN_1087e59dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087e591c; end: 1087e593f;  */

void FUN_1087e591c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x0001087e8eac();
  puVar2 = param_1 + 1;
  *puVar1 = &PTR_FUN_110a72370;
  lVar3 = param_1[2];
  uVar4 = *puVar2;
  puVar1[2] = param_1[2];
  puVar1[1] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x000107c33634();
    } while (extraout_w10 != 0);
  }
  lVar3 = puVar2[3];
  uVar4 = puVar2[2];
  puVar1[4] = puVar2[3];
  puVar1[3] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x000107c33634();
    } while (extraout_w10_00 != 0);
  }
  puVar1[5] = puVar2[4];
  return;
}



/* Entry: 1087e5940; end: 1087e5963;  */

void FUN_1087e5940(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a72370;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107c33634();
    } while (extraout_w10 != 0);
  }
  lVar2 = puVar1[3];
  uVar3 = puVar1[2];
  param_2[4] = puVar1[3];
  param_2[3] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107c33634();
    } while (extraout_w10_00 != 0);
  }
  param_2[5] = puVar1[4];
  return;
}



/* Entry: 1087e5964; end: 1087e59cf;  */

void FUN_1087e5964(long param_1)

{
  undefined8 uVar1;
  code *extraout_x8;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001087e885c();
  (*extraout_x8)();
  if (*(char *)(puVar2 + 6) == '\x01') {
    func_0x0001087b5c04(puVar2,uVar3);
    uVar4 = *puVar2;
    uVar3 = uVar4;
    _strlen(uVar4);
    _strlen();
    func_0x000107c27944(uVar4,uVar3);
    if ((int)uVar4 != 0) {
      *(undefined8 *)(unaff_x20 + 8) = uVar1;
    }
  }
  return;
}



/* Entry: 1087e59d0; end: 1087e59db;  */

undefined ** FUN_1087e59d0(void)

{
  return &PTR_DAT_110a723d0;
}



/* Entry: 1087e59dc; end: 1087e5a07;  */

undefined8 * FUN_1087e59dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a72370;
  FUN_1087e5a68(param_1 + 1);
  return param_1;
}



/* Entry: 1087e5a08; end: 1087e5a67;  */

void FUN_1087e5a08(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_110a72370;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c33634();
    } while (extraout_w10 != 0);
  }
  lVar1 = param_2[3];
  uVar2 = param_2[2];
  param_1[4] = param_2[3];
  param_1[3] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c33634();
    } while (extraout_w10_00 != 0);
  }
  param_1[5] = param_2[4];
  return;
}



/* Entry: 1087e5a68; end: 1087e5a8f;  */

undefined8 FUN_1087e5a68(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c28800(param_1 + 0x10);
  func_0x000107c334f0();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 1087e5a90; end: 1087e5a93;  */

undefined8 * FUN_1087e5a90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a723f0;
  func_0x000108794594(param_1 + 1);
  return param_1;
}



/* Entry: 1087e5a94; end: 1087e5aa7;  */

void FUN_1087e5a94(void)

{
  FUN_1087e5b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087e5aa8; end: 1087e5acb;  */

void FUN_1087e5aa8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x000107c3367c();
  puVar2 = param_1 + 1;
  *puVar1 = &PTR_FUN_110a723f0;
  lVar3 = param_1[2];
  uVar4 = *puVar2;
  puVar1[2] = param_1[2];
  puVar1[1] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x000107c33634();
    } while (extraout_w10 != 0);
  }
  puVar1[3] = puVar2[2];
  return;
}



/* Entry: 1087e5acc; end: 1087e5aff;  */

void FUN_1087e5acc(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a723f0;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107c33634();
    } while (extraout_w10 != 0);
  }
  param_2[3] = puVar1[2];
  return;
}



/* Entry: 1087e5b00; end: 1087e5b33;  */

long FUN_1087e5b00(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001087e8f28(param_2,param_1,&PTR_DAT_110a72450);
  param_1 = param_1 + 8;
  if ((int)lVar1 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1087e5b34; end: 1087e5b3f;  */

undefined ** FUN_1087e5b34(void)

{
  return &PTR_DAT_110a72450;
}



/* Entry: 1087e5b40; end: 1087e5b6b;  */

undefined8 * FUN_1087e5b40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a723f0;
  func_0x000108794594(param_1 + 1);
  return param_1;
}



/* Entry: 1087e5b6c; end: 1087e5bcb;  */

void FUN_1087e5b6c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_110a723f0;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c33634();
    } while (extraout_w10 != 0);
  }
  param_1[3] = param_2[2];
  return;
}



/* Entry: 1087e5bcc; end: 1087e5d33;  */

void FUN_1087e5bcc(void)

{
  func_0x0001087e8dcc();
  FUN_1087e4924();
  return;
}



/* Entry: 1087e5d34; end: 1087e5d4b;  */

void FUN_1087e5d34(long *param_1)

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



/* Entry: 1087e5d4c; end: 1087e5d73;  */

void FUN_1087e5d4c(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001087e8de8();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    func_0x0001087e87e8();
  }
  return;
}



/* Entry: 1087e5d74; end: 1087e5d8f;  */

void FUN_1087e5d74(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1087e5d90(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087e5d90; end: 1087e5dcf;  */

undefined8 FUN_1087e5d90(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c27f98(param_1 + 0x50);
  func_0x000107c27f9c(param_1 + 0x48);
  func_0x0001087e5c5c(param_1 + 0x18);
  FUN_1087e5d4c(param_1 + 0x10);
  func_0x000107c33588();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 1087e5dd0; end: 1087e5dd3;  */

void FUN_1087e5dd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a72488;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087e5dd4; end: 1087e5de7;  */

void FUN_1087e5dd4(void)

{
  func_0x0001087e5df4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087e5de8; end: 1087e5dff;  */

long FUN_1087e5de8(long param_1)

{
  func_0x000100563450(param_1 + 0x300);
  func_0x000100563770(param_1 + 0x2f0);
  func_0x0001004a6508(param_1 + 0x210);
  func_0x000100567be4(param_1 + 0x200);
  func_0x000100562570(param_1 + 0x1f0);
  func_0x000100554340(param_1 + 0x1e0);
  func_0x0001005636ac(param_1 + 0x1d0);
  func_0x000100564088(param_1 + 0x1c0);
  func_0x000100567c34(param_1 + 0x1b0);
  func_0x00010054f94c(param_1 + 0x1a0);
  func_0x000100567a2c(param_1 + 400);
  func_0x000100567e90(param_1 + 0x180);
  func_0x000100567ef4(param_1 + 0x170);
  func_0x000100568b80(param_1 + 0x160);
  func_0x000100558b18(param_1 + 0x150);
  func_0x000100565838(param_1 + 0x140);
  func_0x00010055890c(param_1 + 0x130);
  func_0x000100558934(param_1 + 0x120);
  func_0x000100562cac(param_1 + 0x110);
  func_0x0001004b55ac(param_1 + 0x100);
  func_0x000100564c18(param_1 + 0xf0);
  func_0x0001005640e4(param_1 + 0xe0);
  func_0x000100568ba4(param_1 + 0xd0);
  func_0x000100558bb4(param_1 + 0xc0);
  func_0x000100567ba4(param_1 + 0xb0);
  func_0x000100568bc8(param_1 + 0xa0);
  func_0x000100450be4(param_1 + 0x90);
  func_0x00010055c0b4(param_1 + 0x80);
  func_0x00010055c0b4(param_1 + 0x70);
  func_0x00010055c0b4(param_1 + 0x60);
  func_0x00010054fa34(param_1 + 0x50);
  func_0x00010054f9c4(param_1 + 0x40);
  func_0x000100100fec(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 0x18;
}



/* Entry: 1087e5e00; end: 1087e5e23;  */

undefined8 FUN_1087e5e00(undefined8 param_1)

{
  FUN_1087e5e24(param_1,0);
  return param_1;
}



/* Entry: 1087e5e24; end: 1087e5e3b;  */

void FUN_1087e5e24(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x000107c29a5c(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1087e5e3c; end: 1087e5e57;  */

void FUN_1087e5e3c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000107c29a5c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087e5e58; end: 1087e5e5b;  */

void FUN_1087e5e58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a724d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087e5e5c; end: 1087e5e6f;  */

void FUN_1087e5e5c(void)

{
  FUN_1087e5eb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087e5e70; end: 1087e5eb7;  */

undefined8 FUN_1087e5e70(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c27a04(param_1 + 0xa8);
  func_0x000107c279dc(param_1 + 0x88);
  func_0x000107c290cc(param_1 + 0x68);
  func_0x000107c290cc(param_1 + 0x48);
  func_0x000107c290cc(param_1 + 0x28);
  param_1 = param_1 + 0x18;
  func_0x000100567a20();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return unaff_x19;
}



/* Entry: 1087e5eb8; end: 1087e5ec7;  */

void FUN_1087e5eb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087e5ec8; end: 1087e5fe7;  */

void FUN_1087e5ec8(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  long *plVar1;
  undefined8 uVar2;
  code *extraout_x8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 auStack_90 [2];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  plVar1 = (long *)*param_2;
  (**(code **)(*plVar1 + 0x48))(plVar1,param_4,param_5);
  if (*(char *)(param_6 + 0x10) == '\x01') {
    FUN_1087900b8(param_1,param_6,param_7);
    plVar1 = param_1;
  }
  func_0x000107c31338();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_a8,param_10);
  func_0x00010bd3f128(&uStack_c0,3);
  uVar2 = *param_3;
  func_0x0001087e885c();
  (*extraout_x8)();
  uStack_58 = uStack_b0;
  uStack_88 = param_9;
  uStack_78 = uStack_a0;
  uStack_80 = uStack_a8;
  uStack_70 = uStack_98;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_60 = uStack_b8;
  uStack_68 = uStack_c0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_48 = param_11;
  auStack_90[0] = param_8;
  uStack_50 = uVar2;
  func_0x00010bcc46f8(plVar1,auStack_90);
  func_0x0001087e8908();
  func_0x0001087e8d2c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_a8);
  return;
}



/* Entry: 1087e5fe8; end: 1087e605b;  */

undefined8 * FUN_1087e5fe8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [232];
  
  _bzero(auStack_120,0xf0);
  param_1[1] = 0;
  if (*(char *)(param_1 + 0x1e) != '\0') {
    FUN_1087e605c(param_1 + 2);
  }
  FUN_1087e6134(auStack_118);
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x000107c31408(uVar1);
  FUN_1087e6134(param_1 + 2);
  return param_1;
}



/* Entry: 1087e605c; end: 1087e609b;  */

void FUN_1087e605c(long param_1)

{
  if (*(char *)(param_1 + 0xe0) == '\x01') {
    func_0x0001087e281c();
    *(undefined1 *)(param_1 + 0xe0) = 0;
  }
  return;
}



/* Entry: 1087e609c; end: 1087e6133;  */

void FUN_1087e609c(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x0001087e89fc();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  FUN_1086a76a0(param_1 + 5,param_2 + 5);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x80) = *(undefined8 *)(unaff_x19 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x78) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x88);
  *(undefined8 *)(unaff_x20 + 0x90) = *(undefined8 *)(unaff_x19 + 0x90);
  *(undefined8 *)(unaff_x20 + 0x88) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x98) = *(undefined8 *)(unaff_x19 + 0x98);
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
  *(undefined8 *)(unaff_x19 + 0x90) = 0;
  *(undefined8 *)(unaff_x19 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  uVar1 = *(undefined8 *)(unaff_x19 + 0xa0);
  *(undefined8 *)(unaff_x20 + 0xa8) = *(undefined8 *)(unaff_x19 + 0xa8);
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar1;
  *(undefined8 *)(unaff_x20 + 0xb0) = *(undefined8 *)(unaff_x19 + 0xb0);
  *(undefined8 *)(unaff_x19 + 0xa0) = 0;
  *(undefined8 *)(unaff_x19 + 0xa8) = 0;
  *(undefined8 *)(unaff_x19 + 0xb0) = 0;
  func_0x0001087e8c3c();
  return;
}



/* Entry: 1087e6134; end: 1087e6153;  */

void FUN_1087e6134(long param_1)

{
  if (*(char *)(param_1 + 0xe0) == '\x01') {
    func_0x0001087e281c();
  }
  return;
}



/* Entry: 1087e6154; end: 1087e619f;  */

void FUN_1087e6154(undefined8 param_1)

{
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [232];
  
  FUN_1087e61a0(auStack_120);
  FUN_1087e61a0(param_1,auStack_120);
  FUN_1087e6134(auStack_118);
  return;
}



/* Entry: 1087e61a0; end: 1087e61e7;  */

undefined8 * FUN_1087e61a0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    func_0x0001087e6080(param_1 + 1,param_2 + 1);
  }
  return param_1;
}



/* Entry: 1087e61e8; end: 1087e61f3;  */

void FUN_1087e61e8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  undefined1 auStack_110 [224];
  
  func_0x0001087e87c8();
  func_0x0001087e8de8();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    FUN_1087e6298(auStack_110,*unaff_x19);
    FUN_1087e6264(unaff_x19 + 1,auStack_110);
    func_0x0001087e281c(auStack_110);
    return;
  }
  puVar1 = unaff_x19 + 1;
  if (*(char *)(unaff_x19 + 0x1d) == '\x01') {
    func_0x0001087e281c();
    *(undefined1 *)(puVar1 + 0x1c) = 0;
  }
  return;
}



/* Entry: 1087e61f4; end: 1087e6263;  */

void FUN_1087e61f4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  undefined1 auStack_100 [224];
  
  func_0x0001087e8de8();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    FUN_1087e6298(auStack_100,*unaff_x19);
    FUN_1087e6264(unaff_x19 + 1,auStack_100);
    func_0x0001087e281c(auStack_100);
    return;
  }
  puVar1 = unaff_x19 + 1;
  if (*(char *)(unaff_x19 + 0x1d) == '\x01') {
    func_0x0001087e281c();
    *(undefined1 *)(puVar1 + 0x1c) = 0;
  }
  return;
}



/* Entry: 1087e6264; end: 1087e6297;  */

long FUN_1087e6264(long param_1)

{
  if (*(char *)(param_1 + 0xe0) == '\x01') {
    func_0x0001087e2854();
  }
  else {
    func_0x0001087e6080();
  }
  return param_1;
}



/* Entry: 1087e6298; end: 1087e63d7;  */

void FUN_1087e6298(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  func_0x000107c313f8();
  func_0x000107c2879c(param_1);
  uVar2 = 1;
  uVar1 = param_2;
  func_0x000107c28228();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined1 *)(param_1 + 0x20) = uVar2;
  FUN_1086ad9fc(param_1 + 0x28,param_2,2);
  uVar1 = param_2;
  func_0x000107c313d8(param_2,3);
  *(int *)(param_1 + 0x78) = (int)uVar1;
  uVar1 = param_2;
  func_0x000107c313d8(param_2,4);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  func_0x000107c2879c(param_1 + 0x88,param_2,5);
  FUN_10865fa68(param_1 + 0xa0,param_2,6);
  uVar1 = param_2;
  func_0x000107c313d8(param_2,7);
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  uVar1 = param_2;
  func_0x000107c313d8(param_2,8);
  *(int *)(param_1 + 0xc0) = (int)uVar1;
  uVar1 = param_2;
  func_0x000107c313d8(param_2,9);
  *(int *)(param_1 + 0xc4) = (int)uVar1;
  uVar1 = param_2;
  func_0x000107c313d8(param_2,10);
  *(int *)(param_1 + 200) = (int)uVar1;
  uVar1 = param_2;
  func_0x000107c313d8(param_2,0xb);
  *(undefined8 *)(param_1 + 0xd0) = uVar1;
  uVar1 = param_2;
  func_0x000107c313d8(param_2,0xc);
  *(int *)(param_1 + 0xd8) = (int)uVar1;
  func_0x000107c313d8(param_2,0xd);
  *(int *)(param_1 + 0xdc) = (int)param_2;
  return;
}



/* Entry: 1087e63d8; end: 1087e6403;  */

long FUN_1087e63d8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x0001087e28d4(param_1);
  }
  return param_1;
}



/* Entry: 1087e6404; end: 1087e64e3;  */

undefined8 * FUN_1087e6404(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    func_0x000107c27994(param_1 + 1,param_2 + 1);
    uVar1 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar1;
    func_0x00010869fbb8(param_1 + 6,param_2 + 6);
    uVar1 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar1;
    func_0x000107c27994(param_1 + 0x12,param_2 + 0x12);
    FUN_10867be90(param_1 + 0x15,param_2 + 0x15);
    uVar2 = param_2[0x19];
    uVar1 = param_2[0x18];
    uVar4 = param_2[0x1b];
    uVar3 = param_2[0x1a];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x19] = uVar2;
    param_1[0x18] = uVar1;
    param_1[0x1b] = uVar4;
    param_1[0x1a] = uVar3;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  return param_1;
}



/* Entry: 1087e64e4; end: 1087e65b3;  */

long FUN_1087e64e4(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar8 = param_1[1];
  if ((uVar8 != 0) && (param_1[3] != 0)) {
    uVar3 = param_2;
    FUN_108848654();
    uVar9 = uVar8 - 1;
    if ((uVar8 & uVar9) == 0) {
      uVar10 = uVar3 & uVar9;
    }
    else {
      uVar10 = uVar3;
      if (uVar8 <= uVar3) {
        uVar1 = 0;
        uVar7 = (uint)uVar8;
        if (uVar7 != 0) {
          uVar1 = (uint)uVar3 / uVar7;
        }
        uVar10 = (ulong)((uint)uVar3 - uVar1 * uVar7);
      }
    }
    plVar6 = *(long **)(*param_1 + uVar10 * 8);
    if (plVar6 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return 0;
        }
        uVar5 = plVar6[1];
        if (uVar5 != uVar3) break;
        lVar4 = (long)(plVar6 + 2);
        func_0x000107c28078(lVar4,param_2);
        if ((int)lVar4 != 0) {
          return (long)plVar6;
        }
      }
      if ((uVar8 & uVar9) == 0) {
        uVar5 = uVar5 & uVar9;
      }
      else if (uVar8 <= uVar5) {
        uVar2 = 0;
        if (uVar8 != 0) {
          uVar2 = uVar5 / uVar8;
        }
        uVar5 = uVar5 - uVar2 * uVar8;
      }
    } while (uVar5 == uVar10);
  }
  return 0;
}



/* Entry: 1087e65b4; end: 1087e6623;  */

undefined1 * FUN_1087e65b4(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x000107c33638();
  uVar3 = 1;
  uStack_28 = extraout_x8;
  FUN_1087e6624();
  *puStack_30 = &PTR_FUN_110a72528;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_DAT_110a72578;
  func_0x000107c33670();
  func_0x0001087e66b0();
  func_0x000107c33630(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar1 + 8) = uVar3;
  puVar2 = puVar1;
  FUN_1087e664c();
  *(undefined1 **)(puVar1 + 0x10) = puVar2;
  return puVar1;
}



/* Entry: 1087e6624; end: 1087e664b;  */

long FUN_1087e6624(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1087e664c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1087e664c; end: 1087e6667;  */

void FUN_1087e664c(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110a72528;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087e6668; end: 1087e666b;  */

void FUN_1087e6668(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a72528;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087e666c; end: 1087e667f;  */

void FUN_1087e666c(void)

{
  func_0x0001087e66a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087e6680; end: 1087e66bf;  */

void FUN_1087e6680(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001087e6688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1087e66c0; end: 1087e66e3;  */

void FUN_1087e66c0(long param_1)

{
  func_0x000107c33658();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 1087e66e4; end: 1087e673f;  */

void FUN_1087e66e4(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_30;
  long lStack_28;
  
  uStack_30 = **(undefined8 **)*param_1;
  lStack_28 = (*(undefined8 **)*param_1)[1];
  if (lStack_28 != 0) {
    do {
      func_0x000107c33634();
    } while (extraout_w10 != 0);
  }
  func_0x000108797934();
  func_0x000108797c2c(&uStack_30);
  return;
}



/* Entry: 1087e6740; end: 1087e67d7;  */

void FUN_1087e6740(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *extraout_x8;
  
  puVar1 = (undefined8 *)0x238;
  __Znwm();
  *puVar1 = FUN_1087e8528;
  puVar1[1] = FUN_1087e8660;
  FUN_1087e7030(puVar1 + 4,param_1);
  func_0x0001087adea8(puVar1 + 2);
  func_0x0001087e8e88();
  puVar1[0x44] = param_2;
  *(undefined1 *)(puVar1 + 0x46) = 0;
  func_0x0001087e885c(*param_2);
  (*extraout_x8)();
  return;
}



/* Entry: 1087e67d8; end: 1087e6adf;  */

void FUN_1087e67d8(long *param_1)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  uint *puVar5;
  uint extraout_w8;
  long *plVar6;
  long *extraout_x8;
  long *extraout_x8_00;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  long lVar8;
  long *plVar9;
  
  lVar8 = *param_1;
  puVar4 = (undefined8 *)0x248;
  __Znwm();
  *puVar4 = FUN_1087e8374;
  puVar4[1] = FUN_1087e84f0;
  puVar4[0x45] = lVar8;
  puVar4[0x44] = param_1;
  func_0x0001087adea8(puVar4 + 2);
  func_0x0001087e8e88();
  func_0x000107c27994(puVar4 + 0x3a,param_1 + 10);
  puVar4[0x46] = param_1[0x2f];
  puVar4[0x47] = param_1[0xd];
  plVar9 = *(long **)(lVar8 + 0x10);
  FUN_1087e2904(puVar4 + 4,param_1 + 7);
  plVar1 = puVar4 + 0x3d;
  lVar8 = param_1[4];
  puVar4[0x3e] = param_1[5];
  *plVar1 = lVar8;
  puVar4[0x3f] = param_1[6];
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  (**(code **)(*plVar9 + 0x10))(puVar4 + 0x41,plVar9,puVar4 + 4,plVar1,param_1 + 0x3d);
  puVar2 = (uint *)(puVar4 + 0x40);
  *(undefined8 *)puVar2 = puVar4[0x41];
  do {
    func_0x0001087e8700();
  } while (extraout_w10 != 0);
  func_0x0001087e8868(*(undefined8 *)puVar2);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)((long)puVar4 + 0x244) = 0;
    lVar8 = puVar4[0x40];
    func_0x0001087e86e0();
    if (*plVar9 == 0) {
      func_0x000107c3a5c0();
    }
    plVar6 = (long *)(lVar8 + 0x10);
    do {
      if (*plVar6 == 0) {
        func_0x0001087e8810();
        plVar6 = extraout_x8_00;
        uVar3 = extraout_w10_01;
        uVar7 = extraout_w11_00;
      }
      else {
        func_0x0001087e8c94();
        plVar6 = extraout_x8;
        uVar3 = extraout_w10_00;
        uVar7 = extraout_w11;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001087e87a8();
        if ((bool)in_ZR) {
          func_0x0001087e8788();
          func_0x0001087e86f0();
          func_0x0001087e86c4();
          *(long **)(lVar8 + 0x90) = plVar9;
        }
        func_0x0001087e874c();
        return;
      }
    } while ((uVar3 >> 1 & 1) == 0);
  }
  puVar5 = puVar2;
  FUN_1087b3548();
  uVar3 = *puVar5;
  func_0x000107c27f9c(puVar2);
  func_0x0001087e8af0();
  FUN_1087e2704(plVar1);
  func_0x0001087e8930();
  *(uint *)(puVar4 + 0x48) = uVar3;
  if ((uVar3 < 8) && ((1 << (ulong)(uVar3 & 0x1f) & 0xcfU) != 0)) {
    func_0x0001087e8e2c();
    FUN_10879785c();
  }
  if (*(char *)(puVar4[0x44] + 0x18) == '\x01') {
    FUN_1087e6ae0(*(long *)puVar4[0x45] + 0x20,uVar3,puVar4[0x44] + 8);
  }
  func_0x0001087e8d24(puVar4[0x45]);
  func_0x0001087ade80(puVar4 + 2,puVar4 + 0x48);
  func_0x0001087e895c();
  func_0x0001087e8800();
  func_0x0001087e8830();
  return;
}



/* Entry: 1087e6ae0; end: 1087e6b33;  */

void FUN_1087e6ae0(undefined8 param_1,undefined4 param_2,long *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int extraout_w10;
  int extraout_w10_00;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  switch(param_2) {
  case 0:
    lStack_30 = *param_3;
    if (lStack_30 != 0) {
      lStack_28 = param_3[1];
      if (lStack_28 != 0) {
        do {
          func_0x000108796160();
        } while (extraout_w10 != 0);
      }
      FUN_108794a3c();
      func_0x000104be3970(&lStack_30);
    }
    return;
  case 1:
  case 2:
  case 3:
    uVar2 = 3;
    break;
  default:
    return;
  case 6:
    uVar2 = 0xc;
    break;
  case 7:
    uVar2 = 0;
  }
  uVar1 = (undefined4)uVar2;
  lStack_38 = *param_3;
  if (lStack_38 != 0) {
    lStack_30 = param_3[1];
    if (lStack_30 != 0) {
      do {
        func_0x000108796160();
        uVar1 = (undefined4)uVar2;
      } while (extraout_w10_00 != 0);
    }
    lStack_28 = CONCAT44(lStack_28._4_4_,uVar1);
    FUN_108794b90();
    func_0x000104be3970(&lStack_38);
  }
  return;
}



/* Entry: 1087e6b34; end: 1087e6c87;  */

void FUN_1087e6b34(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plStack_38;
  long *plStack_30;
  undefined1 uStack_28;
  undefined4 uStack_27;
  undefined3 uStack_23;
  
  plVar2 = (long *)(param_1 + 0x18);
  FUN_1087e64e4();
  if (plVar2 == (long *)0x0) {
    return;
  }
  func_0x000107c28850(plVar2 + 5);
  uVar5 = *(ulong *)(param_1 + 0x20);
  lVar3 = *plVar2;
  uVar4 = plVar2[1];
  uVar7 = uVar5 - 1;
  if ((uVar5 & uVar7) == 0) {
    uVar4 = uVar7 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar9 * uVar5;
  }
  lVar8 = *(long *)(param_1 + 0x18);
  plVar1 = *(long **)(lVar8 + uVar4 * 8);
  do {
    plVar6 = plVar1;
    plVar1 = (long *)*plVar6;
  } while ((long *)*plVar6 != plVar2);
  plStack_30 = (long *)(param_1 + 0x28);
  if (plVar6 == plStack_30) {
LAB_1087e6bdc:
    if (lVar3 == 0) {
LAB_1087e6c10:
      *(undefined8 *)(lVar8 + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_1087e6c18;
    }
    uVar9 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar7) == 0) {
      uVar10 = uVar9 & uVar7;
    }
    else {
      uVar10 = uVar9;
      if (uVar5 <= uVar9) {
        uVar10 = 0;
        if (uVar5 != 0) {
          uVar10 = uVar9 / uVar5;
        }
        uVar10 = uVar9 - uVar10 * uVar5;
      }
    }
    if (uVar10 != uVar4) goto LAB_1087e6c10;
  }
  else {
    uVar9 = plVar6[1];
    if ((uVar5 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar5 <= uVar9) {
      uVar10 = 0;
      if (uVar5 != 0) {
        uVar10 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar10 * uVar5;
    }
    if (uVar9 != uVar4) goto LAB_1087e6bdc;
LAB_1087e6c18:
    if (lVar3 == 0) goto LAB_1087e6c50;
    uVar9 = *(ulong *)(lVar3 + 8);
  }
  if ((uVar5 & uVar7) == 0) {
    uVar9 = uVar9 & uVar7;
  }
  else if (uVar5 <= uVar9) {
    uVar7 = 0;
    if (uVar5 != 0) {
      uVar7 = uVar9 / uVar5;
    }
    uVar9 = uVar9 - uVar7 * uVar5;
  }
  if (uVar9 != uVar4) {
    *(long **)(lVar8 + uVar9 * 8) = plVar6;
    lVar3 = *plVar2;
  }
LAB_1087e6c50:
  *plVar6 = lVar3;
  *plVar2 = 0;
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
  uStack_28 = 1;
  uStack_27 = 0;
  uStack_23 = 0;
  plStack_38 = plVar2;
  FUN_1087e6fec(&plStack_38);
  return;
}



/* Entry: 1087e6c88; end: 1087e6feb;  */

void FUN_1087e6c88(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 in_x4;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  if ((bRam000000011326a678 & 1) == 0) {
    iVar2 = 0x1326a678;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107c278b8(auStack_c0,&UNK_10f4bb202);
      func_0x000107525ea8(auStack_a8,auStack_c0,0x5b);
      func_0x000107c278b8(auStack_d8,&DAT_10f3725f0);
      func_0x00010533a9c0(auStack_90,auStack_a8,auStack_d8);
      func_0x000107525ea8(auStack_78,auStack_90,0x5d);
      func_0x000107c27fac(0x11326a660,auStack_78,&UNK_10f4bb269);
      func_0x0001087e8f70();
      func_0x0001087e8ad0();
      func_0x0001087e8c8c();
      func_0x0001087e8b78();
      func_0x0001087e8cfc();
      ___cxa_guard_release(0x11326a678);
    }
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_e0,in_x4);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_e0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1087e6cec);
  (*pcVar1)();
}



/* Entry: 1087e6fec; end: 1087e702f;  */

long * FUN_1087e6fec(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001087e5cb8(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1087e7030; end: 1087e70c7;  */

void FUN_1087e7030(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c33660();
  *param_1 = *param_2;
  FUN_1087e70c8(param_1 + 1,param_2 + 1);
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  FUN_1087e2904(unaff_x19 + 0x38,unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x1f0);
  *(undefined8 *)(unaff_x19 + 0x1e8) = *(undefined8 *)(unaff_x20 + 0x1e8);
  *(undefined8 *)(unaff_x20 + 0x1e8) = 0;
  *(undefined8 *)(unaff_x19 + 0x1f0) = uVar1;
  *(undefined1 *)(unaff_x19 + 0x1f8) = 0;
  *(undefined1 *)(unaff_x20 + 0x1f8) = 1;
  return;
}



/* Entry: 1087e70c8; end: 1087e70ff;  */

undefined1 * FUN_1087e70c8(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x10] = 0;
  FUN_1087e7100();
  return param_1;
}



/* Entry: 1087e7100; end: 1087e713b;  */

void FUN_1087e7100(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  if (*(char *)(param_2 + 2) == '\x01') {
    lVar1 = param_2[1];
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    if (lVar1 != 0) {
      do {
        func_0x000107c33634();
      } while (extraout_w10 != 0);
    }
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}



/* Entry: 1087e713c; end: 1087e71a7;  */

long FUN_1087e713c(long param_1)

{
  int iVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x1f8) & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x1f0);
    iVar1 = *(int *)(lVar2 + 0x40) + -1;
    *(int *)(lVar2 + 0x40) = iVar1;
    if (*(char *)(lVar2 + 0x44) == '\x01' && iVar1 == 0) {
      func_0x000107c28850(lVar2 + 0x50);
    }
  }
  func_0x000107c27f9c(param_1 + 0x1e8);
  func_0x0001087e27bc(param_1 + 0x38);
  FUN_1087e2704(param_1 + 0x20);
  FUN_1086ccd68(param_1 + 8);
  return param_1;
}



/* Entry: 1087e71a8; end: 1087e71bf;  */

void FUN_1087e71a8(long *param_1,long param_2)

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



/* Entry: 1087e71c0; end: 1087e72d7;  */

void FUN_1087e71c0(long param_1,int param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  undefined1 auStack_b8 [112];
  undefined8 uStack_48;
  
  lVar1 = param_1;
  func_0x000107c33638();
  uStack_48 = extraout_x8;
  if ((*(byte *)(lVar1 + 0xc0) & 1) == 0) {
    func_0x000107c28870(param_1 + 0x88);
    func_0x0001087e8be0();
    func_0x0001087e8ba4();
    func_0x0001087e8928();
    func_0x0001087e8bd0();
    func_0x0001087e8b70();
  }
  else {
    func_0x000107c28834(lVar1 + 0x78);
    func_0x0001087e88c8();
    func_0x0001087e88e0();
    func_0x0001087e8928();
  }
  func_0x0001087e88e0();
  func_0x0001087e88c8();
  func_0x0001087e896c();
  func_0x0001087e8e94();
  func_0x0001087e49c4(auStack_b8);
  param_1 = param_1 + 0x20;
  FUN_1087a33a8();
  while( true ) {
    func_0x0001087e8800();
    func_0x0001087e8830();
    func_0x000107c33630(uStack_48);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    if (param_2 == 0) break;
    func_0x0001087e8be0();
    func_0x0001087e8ba4();
    func_0x0001087e8928();
    func_0x0001087e8bd0();
    func_0x0001087e8b70();
    func_0x0001087e88e0();
    func_0x0001087e88c8();
    func_0x0001087e8920();
    func_0x0001087e8854();
    ___cxa_end_catch();
  }
  func_0x0001087e8f44();
  if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
    func_0x0001087e8be0();
    func_0x0001087e8ba4();
    func_0x0001087e8928();
    func_0x0001087e8bd0();
    func_0x0001087e8b70();
  }
  else {
    func_0x0001087e88c8();
    func_0x0001087e88e0();
    func_0x0001087e8928();
  }
  func_0x0001087e88e0();
  func_0x0001087e88c8();
  func_0x0001087e8800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087e72d8; end: 1087e734b;  */

void FUN_1087e72d8(long param_1)

{
  if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
    func_0x0001087e8be0();
    func_0x0001087e8ba4();
    func_0x0001087e8928();
    func_0x0001087e8bd0();
    func_0x0001087e8b70();
  }
  else {
    func_0x0001087e88c8();
    func_0x0001087e88e0();
    func_0x0001087e8928();
  }
  func_0x0001087e88e0();
  func_0x0001087e88c8();
  func_0x0001087e8800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087e734c; end: 1087e7a17;  */

void FUN_1087e734c(long param_1)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint extraout_w8;
  uint extraout_w8_00;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 auStack_120 [6];
  long lStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_d0;
  undefined8 uStack_68;
  
  lVar5 = param_1;
  func_0x000107c33638();
  puVar2 = (undefined8 *)(lVar5 + 0xc0);
  uStack_68 = extraout_x8;
  FUN_1087e5748();
  *(undefined8 *)(param_1 + 0x20) = *puVar2;
  func_0x0001087b07bc(param_1 + 0x28,puVar2 + 1);
  uVar4 = *(undefined4 *)(puVar2 + 9);
  *(undefined1 *)(param_1 + 0x6c) = *(undefined1 *)((long)puVar2 + 0x4c);
  *(undefined4 *)(param_1 + 0x68) = uVar4;
  func_0x000107c27c5c(param_1 + 0x70,puVar2 + 10);
  func_0x0001087e8d4c();
  func_0x0001087e8b80();
  func_0x0001087e8838();
  if (((extraout_w8 >> 1 & 1) != 0) ||
     ((func_0x0001087e8838(), (extraout_w8_00 >> 5 & 1) != 0 &&
      (*(int *)(*(long *)(lVar5 + 0x250) + 0x38) == 0)))) {
    func_0x0001087e88f0();
    uStack_d0 = 0x13;
    func_0x0001087e8cc4();
    FUN_1087e8b54();
    plVar6 = &lStack_f0;
    FUN_108791610(plVar6,param_1 + 0x238);
    FUN_108791a34(auStack_120,plVar6);
    lVar5 = *(long *)(param_1 + 0x278);
    func_0x0001087e8cac();
    func_0x0001087e8ac8();
    plVar6 = *(long **)(lVar5 + 0x48);
    FUN_108791a34(param_1 + 0x110,auStack_120);
    func_0x0001087e8f88(*(undefined8 *)(*plVar6 + 0x60));
    func_0x0001087e8c7c();
    FUN_108788618(auStack_120);
  }
  func_0x000107c28288(param_1 + 0x1a8);
  lVar5 = *(long *)(*(long *)(param_1 + 0x278) + 0x88);
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    func_0x0001087e885c();
    uVar4 = (undefined4)lVar5;
    (*extraout_x8_00)();
  }
  lVar5 = param_1 + 0x1a8;
  FUN_1087b023c();
  lStack_f0 = lVar5;
  uStack_e8 = uVar4;
  func_0x0001087e8e0c();
  lVar5 = *(long *)(param_1 + 0x18);
  do {
    auStack_120[0] = 0;
    iVar1 = (int)lVar5 + 0x10;
    puVar2 = auStack_120;
    func_0x0001087e87f4();
    if (iVar1 != 0) {
      in_ZR = *(char *)(lVar5 + 0x118) == '\x01';
      if ((bool)in_ZR) {
        func_0x0001087e49c4(lVar5 + 0xa8);
        *(undefined1 *)(lVar5 + 0x118) = 0;
      }
      func_0x0001087e8fa8();
      func_0x0001087e898c();
      break;
    }
  } while (((uint)auStack_120[0] >> 1 & 1) == 0);
  func_0x0001087e8b30();
  puVar3 = (undefined8 *)(param_1 + 0x1e8);
  func_0x0001087e49c4(puVar3);
  func_0x0001087e8b9c();
  func_0x0001087e8b4c();
  func_0x0001087e8b44();
  func_0x0001087e8d90();
  func_0x0001087e8ab4();
  while( true ) {
    func_0x0001087e8800();
    func_0x0001087e8830();
    func_0x000107c33630(uStack_68);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    if ((int)puVar2 == 0) break;
    func_0x0001087e8c7c();
    puVar3 = auStack_120;
    FUN_108788618();
    func_0x0001087e8b9c();
    func_0x0001087e8b4c();
    func_0x0001087e8b44();
    func_0x0001087e8d90();
    func_0x0001087e8ab4();
    func_0x0001087e8964();
    func_0x0001087e8854();
    ___cxa_end_catch();
  }
  func_0x0001087e8f80();
  func_0x000107c27f9c((undefined1 *)((long)puVar3 + 0xc0));
  func_0x0001087e8b80();
  func_0x0001087e8b9c();
  func_0x0001087e8b4c();
  func_0x0001087e8b44();
  func_0x000108794594((undefined1 *)((long)puVar3 + 0x250));
  func_0x0001087e8ab4();
  func_0x0001087e8800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar3);
  return;
}



/* Entry: 1087e7a18; end: 1087e7a87;  */

void FUN_1087e7a18(long param_1)

{
  func_0x000107c27f9c(param_1 + 0xc0);
  func_0x0001087e8b80();
  func_0x0001087e8b9c();
  func_0x0001087e8b4c();
  func_0x0001087e8b44();
  func_0x000108794594(param_1 + 0x250);
  func_0x0001087e8ab4();
  func_0x0001087e8800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087e7a88; end: 1087e7dd7;  */

void FUN_1087e7a88(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  uint extraout_w8;
  long extraout_x8;
  long *plVar14;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  uint extraout_w9;
  uint extraout_w9_00;
  long extraout_x9;
  int extraout_w10;
  ulong extraout_x10;
  ulong extraout_x10_00;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uStack_68;
  
  plVar15 = param_1 + 0x1b;
  plVar1 = param_1 + 0x1c;
  plVar9 = param_1;
  func_0x0001087e86e0();
  do {
    if (((uint)*(undefined8 *)(*plVar15 + 0x10) >> 5 & 1) != 0) {
      func_0x0001087e8ec0(*plVar15,param_1 + 0x14);
      __ZSt17rethrow_exceptionSt13exception_ptr(param_1 + 0x14);
LAB_1087e7d84:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1087e7d88);
      (*pcVar6)();
    }
    func_0x0001087e8e58();
    func_0x0001087e88e0();
    func_0x0001087e88c8();
    uVar10 = param_1[0x19];
    bVar7 = (ulong)param_1[0x1a] <= uVar10;
    if (bVar7) {
      lVar17 = param_1[0x18];
      if (((long)(uVar10 - lVar17) >> 7) + 1U >> 0x39 != 0) {
        FUN_1087e4afc();
        goto LAB_1087e7d84;
      }
      func_0x0001087e8bfc();
      lVar16 = extraout_x9;
      if (bVar7) {
        lVar16 = extraout_x8;
      }
      if (lVar16 == 0) {
        lVar16 = 0;
        param_2 = 0;
      }
      else {
        FUN_1087e4b08();
      }
      lVar17 = lVar16 + (uVar10 - lVar17);
      FUN_1087e5bcc(lVar17,param_1 + 4);
      lVar18 = param_1[0x18];
      lVar3 = param_1[0x19];
      lVar2 = lVar17 + (lVar18 - lVar3);
      param_1[0x1b] = lVar2;
      param_1[0x1c] = lVar2;
      param_1[0x14] = (long)(param_1 + 0x1a);
      param_1[0x15] = (long)plVar1;
      param_1[0x16] = (long)plVar15;
      lVar11 = lVar2;
      for (lVar12 = lVar18; lVar12 != lVar3; lVar12 = lVar12 + 0x80) {
        FUN_1087e5bcc(lVar11,lVar12);
        lVar11 = *plVar15 + 0x80;
        *plVar15 = lVar11;
      }
      *(undefined1 *)(param_1 + 0x17) = 1;
      for (; lVar18 != lVar3; lVar18 = lVar18 + 0x80) {
        func_0x0001087e49c4(lVar18 + 0x10);
      }
      lVar17 = lVar17 + 0x80;
      FUN_1087e4ba4(param_1 + 0x14);
      lVar12 = param_1[0x18];
      param_1[0x18] = lVar2;
      param_1[0x19] = lVar17;
      param_1[0x1a] = lVar16 + param_2 * 0x80;
      if (lVar12 != 0) {
        __ZdlPv();
      }
    }
    else {
      FUN_1087e5bcc(uVar10,param_1 + 4);
      lVar17 = uVar10 + 0x80;
    }
    lVar16 = param_1[0x21];
    param_1[0x19] = lVar17;
    iVar4 = *(int *)(lVar17 + -0x6c);
    func_0x0001087e8d1c();
    if (iVar4 != 0) {
LAB_1087e7cbc:
      plVar15 = param_1 + 3;
      lVar17 = *plVar15;
      break;
    }
    plVar14 = (long *)(lVar16 + 8);
    param_1[0x21] = (long)plVar14;
    uVar8 = plVar14 == (long *)param_1[0x20];
    if ((bool)uVar8) goto LAB_1087e7cbc;
    plVar13 = (long *)param_1[0x1d];
    param_2 = *plVar14;
    FUN_1087e4cec(plVar1,plVar13,param_2,param_1[0x1e],param_1[0x1f]);
    *plVar15 = *plVar1;
    do {
      func_0x0001087e8700();
    } while (extraout_w10 != 0);
    func_0x0001087e8868(*plVar15);
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x22) = 0;
      lVar17 = *plVar15;
      lVar16 = *plVar9;
      if (lVar16 == 0) {
        func_0x000107c3a5c0();
        lVar16 = *plVar13;
      }
      plVar14 = (long *)(lVar17 + 0x10);
      do {
        if (*plVar14 == 0) {
          bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar7) {
            *plVar14 = 1;
            ExclusiveMonitorsStatus();
          }
          func_0x0001087e9000();
          plVar14 = extraout_x8_01;
          uVar5 = extraout_w9_00;
          uVar10 = extraout_x10_00;
        }
        else {
          func_0x0001087e900c();
          plVar14 = extraout_x8_00;
          uVar5 = extraout_w9;
          uVar10 = extraout_x10;
        }
        if ((uVar10 & 1) != 0) {
          func_0x0001087e87a8();
          if ((bool)uVar8) {
            func_0x0001087e8788();
            func_0x0001087e86f0();
            func_0x0001087e86c4();
            *(long **)(lVar17 + 0x90) = plVar13;
          }
          func_0x0001087e87b8();
          *(long *)(extraout_x8_02 + 0x20) = lVar16;
          func_0x0001087e8778(*(undefined8 *)(lVar17 + 0x90));
          *(undefined8 *)(lVar17 + 0x10) = 0;
          return;
        }
      } while ((uVar5 >> 1 & 1) == 0);
    }
  } while( true );
  while (((uint)uStack_68 >> 1 & 1) == 0) {
    uStack_68 = 0;
    lVar16 = lVar17 + 0x10;
    func_0x0001087e87f4(lVar16,&uStack_68);
    if ((int)lVar16 != 0) {
      if (*(char *)(lVar17 + 0xb0) == '\x01') {
        FUN_1087e4c84(lVar17 + 0x98);
      }
      lVar16 = param_1[0x18];
      *(long *)(lVar17 + 0xa0) = param_1[0x19];
      *(long *)(lVar17 + 0x98) = lVar16;
      *(long *)(lVar17 + 0xa8) = param_1[0x1a];
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x1a] = 0;
      *(undefined1 *)(lVar17 + 0xb0) = 1;
      *(undefined8 *)(lVar17 + 0x10) = 2;
      func_0x000107c31508(lVar17,plVar15);
      break;
    }
  }
  func_0x000107c27fa0(plVar15,0);
  func_0x0001087e8bc8();
  func_0x0001087e8800();
  func_0x0001087e8830();
  return;
}



/* Entry: 1087e7dd8; end: 1087e7e0b;  */

void FUN_1087e7dd8(long param_1)

{
  func_0x000107c27f9c(param_1 + 0xd8);
  func_0x000107c27f9c(param_1 + 0xe0);
  func_0x0001087e8bc8();
  func_0x0001087e8800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087e7e0c; end: 1087e82b3;  */

void FUN_1087e7e0c(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  uint extraout_w8;
  uint extraout_w8_00;
  undefined8 extraout_x8;
  long lVar11;
  long lVar12;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long *plVar13;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long extraout_x8_05;
  code *extraout_x8_06;
  undefined4 extraout_w9;
  uint extraout_w9_00;
  uint extraout_w9_01;
  ulong extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  ulong extraout_x10;
  ulong extraout_x10_00;
  long *plVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined1 auStack_1c8 [440];
  undefined8 uStack_10;
  
  func_0x000107c33674();
  plVar6 = param_1;
  func_0x000107c33638();
  plVar14 = plVar6 + 0x51;
  plVar7 = plVar6;
  uStack_10 = extraout_x8;
  func_0x0001087e86e0();
  do {
    func_0x0001087e8868(param_1[0x3a]);
    if ((extraout_w8 >> 5 & 1) != 0) {
      __ZNSt13exception_ptrC1ERKS_(param_1 + 0x56,param_1[0x3a] + 0x18);
      __ZSt17rethrow_exceptionSt13exception_ptr(param_1 + 0x56);
LAB_1087e81d4:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1087e81d8);
      (*pcVar2)();
    }
    uVar17 = param_1[0x52];
    if (uVar17 < (ulong)param_1[0x53]) {
      func_0x0001087e8fc0();
      lVar8 = uVar17 + 0x18;
    }
    else {
      lVar19 = uVar17 - *plVar14;
      uVar17 = lVar19 / 0x18 + 1;
      bVar3 = 0xaaaaaaaaaaaaaa9 < uVar17;
      if (0xaaaaaaaaaaaaaaa < uVar17) {
        FUN_1087e4c78();
        goto LAB_1087e81d4;
      }
      func_0x0001087e8d54((param_1[0x53] - *plVar14) / 0x18);
      uVar17 = extraout_x9;
      if (bVar3) {
        uVar17 = 0xaaaaaaaaaaaaaaa;
      }
      param_1[0x48] = (long)(plVar6 + 0x53);
      if (uVar17 == 0) {
        lVar16 = 0;
      }
      else {
        if (0xaaaaaaaaaaaaaaa < uVar17) {
          func_0x000104bd35f4();
          goto LAB_1087e81d4;
        }
        lVar16 = uVar17 * 0x18;
        __Znwm();
      }
      param_1[0x44] = lVar16;
      lVar19 = lVar16 + lVar19;
      param_1[0x46] = lVar19;
      param_1[0x45] = lVar19;
      lVar16 = lVar16 + uVar17 * 0x18;
      param_1[0x47] = lVar16;
      func_0x0001087e8fc0();
      lVar15 = param_1[0x52];
      lVar8 = param_1[0x51];
      lVar11 = lVar15 - lVar8;
      lVar12 = lVar8;
      while (lVar12 != lVar15) {
        func_0x0001087e8a5c();
        lVar12 = extraout_x9_00;
      }
      for (; lVar8 != lVar15; lVar8 = lVar8 + 0x18) {
        FUN_1087e4c84();
      }
      lVar8 = lVar19 + 0x18;
      lVar12 = param_1[0x51];
      param_1[0x51] = lVar19 + (lVar11 / -0x18) * 0x18;
      param_1[0x45] = lVar12;
      param_1[0x52] = lVar8;
      param_1[0x46] = lVar12;
      lVar19 = param_1[0x53];
      param_1[0x53] = lVar16;
      param_1[0x47] = lVar19;
      param_1[0x44] = lVar12;
      func_0x0001087e8d3c();
    }
    param_1[0x52] = lVar8;
    func_0x0001087e8d34();
    func_0x0001087e88e0();
    lVar19 = param_1[0x52];
    if (*(long *)(lVar19 + -0x18) == *(long *)(lVar19 + -0x10)) {
      iVar5 = 7;
    }
    else {
      iVar5 = *(int *)(*(long *)(lVar19 + -0x10) + -0x6c);
    }
    *(int *)(param_1 + 0x44) = iVar5;
    (**(code **)(**(long **)(param_1[0x57] + 8) + 8))
              (param_1 + 0x3a,*(long **)(param_1[0x57] + 8),iVar5);
    lVar16 = param_1[0x59];
    func_0x0001087e8ee4();
    func_0x000107c299a0(param_1 + 0x3a);
    uVar4 = iVar5 == 1;
    *(undefined1 *)(lVar16 + 0x20) = uVar4;
    func_0x0001087b153c(lVar16 + 0x10,param_1 + 0x54);
    lVar16 = param_1[0x54];
    if (lVar16 == 0) {
LAB_1087e811c:
      func_0x0001087e2ca8(&lStack_1e0,lVar19 + -0x18);
      func_0x000107c279a4(&lStack_1e0);
      lStack_1d8 = plVar6[0x52];
      lStack_1e0 = *plVar14;
      lStack_1d0 = plVar6[0x53];
      plVar6[0x52] = 0;
      plVar6[0x53] = 0;
      *plVar14 = 0;
      FUN_1087e2904(auStack_1c8,param_1 + 4);
      func_0x0001087e885c(*(undefined8 *)(param_1[0x57] + 0x60));
      plVar10 = &lStack_1e0;
      (*extraout_x8_06)();
      func_0x0001087e8ea0();
      func_0x0001087e5c34(&lStack_1e0);
      func_0x0001087e8bac();
      func_0x0001087e5bec(plVar14);
      goto LAB_1087e8184;
    }
    func_0x0001087e885c(lVar16,(int)param_1[6]);
    iVar5 = (int)lVar16;
    (*extraout_x8_00)();
    if (iVar5 == 0) goto LAB_1087e811c;
    func_0x0001087e885c(*(undefined8 *)(param_1[0x57] + 0x58));
    (*extraout_x8_01)();
    uVar4 = *(int *)((long)param_1 + 0x16c) == 3;
    if ((bool)uVar4) {
      func_0x0001087e8a88();
    }
    else {
      *(undefined4 *)((long)param_1 + 0x16c) = 3;
    }
    uVar18 = *(undefined8 *)(param_1[0x57] + 0x28);
    func_0x0001087e8efc();
    param_1[0x3d] = param_1[10];
    func_0x0001087e8820(param_1[0x57]);
    (*extraout_x8_02)();
    func_0x0001087e89cc();
    *(undefined4 *)((long)param_1 + 0x214) = 1;
    *(undefined4 *)(param_1 + 0x43) = extraout_w9;
    FUN_10886024c(uVar18,param_1 + 0x3a);
    func_0x0001087e895c();
    plVar9 = (long *)param_1[0x57];
    plVar10 = param_1 + 0x4e;
    FUN_1087e3db8(plVar6 + 0x49,plVar9,plVar10,param_1 + 4,param_1[0x58]);
    param_1[0x3a] = plVar6[0x49];
    do {
      func_0x0001087e8700();
    } while (extraout_w10 != 0);
    func_0x0001087e8868(param_1[0x3a]);
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)(plVar6 + 0x5a) = 0;
      lVar19 = param_1[0x3a];
      lVar16 = *plVar7;
      if (lVar16 == 0) {
        func_0x000107c3a5c0();
        lVar16 = *plVar9;
      }
      plVar13 = (long *)(lVar19 + 0x10);
      do {
        if (*plVar13 == 0) {
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = 1;
            ExclusiveMonitorsStatus();
          }
          func_0x0001087e9000();
          plVar13 = extraout_x8_04;
          uVar1 = extraout_w9_01;
          uVar17 = extraout_x10_00;
        }
        else {
          func_0x0001087e900c();
          plVar13 = extraout_x8_03;
          uVar1 = extraout_w9_00;
          uVar17 = extraout_x10;
        }
        if ((uVar17 & 1) != 0) {
          plVar14 = *(long **)(lVar19 + 0x90);
          func_0x0001087e87a8();
          if ((bool)uVar4) {
            func_0x0001087e8788();
            func_0x0001087e86f0();
            func_0x0001087e86c4();
            *(long **)(lVar19 + 0x90) = plVar9;
          }
          func_0x0001087e87b8();
          *(long *)(extraout_x8_05 + 0x20) = lVar16;
          func_0x0001087e8778(*(undefined8 *)(lVar19 + 0x90));
          *(undefined8 *)(lVar19 + 0x10) = 0;
          while (func_0x000107c33630(uStack_10), !(bool)uVar4) {
            ___stack_chk_fail();
            if ((int)plVar10 == 0) {
              do {
                func_0x0001087e8f44();
                func_0x000104bd46a0(plVar9);
              } while ((int)plVar10 == 0);
              func_0x0001087e8d34();
              func_0x0001087e88e0();
            }
            else {
              func_0x0001087e5c34(&lStack_1e0);
            }
            func_0x0001087e8bac();
            func_0x0001087e5bec(plVar14);
            func_0x0001087e8920();
            func_0x0001087e8854();
            ___cxa_end_catch();
LAB_1087e8184:
            func_0x0001087e8800();
            plVar9 = param_1 + 0x4e;
            FUN_1087e2704();
            func_0x0001087e8930();
            func_0x0001087e8830();
          }
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  } while( true );
}



/* Entry: 1087e82b4; end: 1087e82fb;  */

void FUN_1087e82b4(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x1d0);
  func_0x000107c27f9c(param_1 + 0x248);
  func_0x0001087e8bac();
  func_0x0001087e5bec(param_1 + 0x288);
  func_0x0001087e8800();
  FUN_1087e2704(param_1 + 0x270);
  func_0x0001087e8930();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087e82fc; end: 1087e834b;  */

void FUN_1087e82fc(long param_1)

{
  func_0x000107c28834(param_1 + 0x20);
  func_0x0001087e8c84();
  func_0x000107c287c8(param_1 + 0x10);
  func_0x0001087e8800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087e834c; end: 1087e8373;  */

void FUN_1087e834c(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x20);
  func_0x0001087e8800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087e8374; end: 1087e84ef;  */

void FUN_1087e8374(long param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(param_1 + 0x200);
  FUN_1087b3548();
  uVar1 = *puVar2;
  func_0x000107c27f9c(param_1 + 0x200);
  func_0x0001087e8f68();
  func_0x0001087e8f30();
  func_0x0001087e8930();
  *(uint *)(param_1 + 0x240) = uVar1;
  if (uVar1 < 8 && (1 << (ulong)(uVar1 & 0x1f) & 0xcfU) != 0) {
    func_0x0001087e8e2c();
    FUN_10879785c();
  }
  if (*(char *)(*(long *)(param_1 + 0x220) + 0x18) == '\x01') {
    FUN_1087e6ae0(**(long **)(param_1 + 0x228) + 0x20,uVar1,*(long *)(param_1 + 0x220) + 8);
  }
  func_0x0001087e8d24(*(undefined8 *)(param_1 + 0x228));
  func_0x0001087ade80(param_1 + 0x10,param_1 + 0x240);
  func_0x0001087e895c();
  func_0x0001087e8800();
  func_0x0001087e8830();
  return;
}



/* Entry: 1087e84f0; end: 1087e8527;  */

void FUN_1087e84f0(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x200);
  func_0x0001087e8f68();
  func_0x0001087e8f30();
  func_0x0001087e8930();
  func_0x0001087e895c();
  func_0x0001087e8800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087e8528; end: 1087e865f;  */

void FUN_1087e8528(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *plVar3;
  uint extraout_w8;
  long *plVar4;
  long *extraout_x8;
  long *extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  plVar3 = (long *)(param_1 + 0x220);
  if ((*(byte *)(param_1 + 0x230) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_1087e67d8((long *)(param_1 + 0x228));
    *plVar3 = *(long *)(param_1 + 0x228);
    do {
      func_0x0001087e8700();
    } while (extraout_w10 != 0);
    func_0x0001087e8868(*plVar3);
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x230) = 1;
      lVar6 = *plVar3;
      func_0x0001087e86e0();
      lVar7 = *plVar2;
      if (lVar7 == 0) {
        func_0x000107c3a5c0();
        lVar7 = *plVar2;
      }
      plVar4 = (long *)(lVar6 + 0x10);
      do {
        if (*plVar4 == 0) {
          func_0x0001087e8810();
          plVar4 = extraout_x8_00;
          uVar1 = extraout_w10_01;
          uVar5 = extraout_w11_00;
        }
        else {
          func_0x0001087e8c94();
          plVar4 = extraout_x8;
          uVar1 = extraout_w10_00;
          uVar5 = extraout_w11;
        }
        if ((uVar5 & 1) != 0) {
          func_0x0001087e87a8();
          if ((bool)in_ZR) {
            func_0x0001087e8788();
            func_0x0001087e86f0();
            func_0x0001087e86c4();
            *(long **)(lVar6 + 0x90) = plVar2;
          }
          func_0x0001087e87b8();
          *(long *)(extraout_x8_01 + 0x20) = lVar7;
          func_0x0001087e8778(*(undefined8 *)(lVar6 + 0x90));
          *(undefined8 *)(lVar6 + 0x10) = 0;
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  FUN_1087b3548(plVar3);
  func_0x0001087ade80(param_1 + 0x10,plVar3);
  func_0x0001087e88e0();
  func_0x0001087e88c8();
  func_0x0001087e8800();
  func_0x0001087e8e50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087e8660; end: 1087e869f;  */

void FUN_1087e8660(long param_1)

{
  if (*(char *)(param_1 + 0x230) == '\x01') {
    func_0x000107c27f9c(param_1 + 0x220);
    func_0x000107c27f9c(param_1 + 0x228);
  }
  func_0x0001087e8800();
  func_0x0001087e8e50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087e86a0; end: 1087e8b53;  */

void FUN_1087e86a0(void)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long unaff_x20;
  undefined1 uStack0000000000000038;
  undefined1 uStack0000000000000070;
  undefined1 uStack0000000000000078;
  undefined1 uStack000000000000007c;
  undefined1 uStack0000000000000080;
  undefined1 uStack0000000000000098;
  
  uStack0000000000000038 = 0;
  uStack0000000000000070 = 0;
  uStack0000000000000078 = 0;
  uStack000000000000007c = 0;
  uStack0000000000000080 = 0;
  uStack0000000000000098 = 0;
  puVar2 = (undefined8 *)(unaff_x19 + 0x20);
  puVar3 = (undefined8 *)&stack0x00000030;
  func_0x0001087e89fc();
  *puVar2 = *puVar3;
  FUN_1087b12d0(puVar2 + 1,puVar3 + 1);
  uVar1 = *(undefined1 *)(unaff_x19 + 0x4c);
  *(undefined4 *)(unaff_x20 + 0x48) = *(undefined4 *)(unaff_x19 + 0x48);
  *(undefined1 *)(unaff_x20 + 0x4c) = uVar1;
  func_0x000107c27c54(unaff_x20 + 0x50,unaff_x19 + 0x50);
  return;
}



/* Entry: 1087e8b54; end: 1087e8b6f;  */

void FUN_1087e8b54(void)

{
  long unaff_x19;
  
  FUN_1087e3048(*(undefined4 *)(*(long *)(unaff_x19 + 0x280) + 8));
  return;
}



/* Entry: 1087e8b70; end: 1087e906b;  */

undefined8 * FUN_1087e8b70(void)

{
  ulong *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long unaff_x19;
  long *plVar6;
  
  puVar2 = (undefined8 *)(unaff_x19 + 0x98);
  plVar6 = (long *)*puVar2;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar5 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar5 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0,puVar2);
      do {
        uVar5 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar5 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  return puVar2;
}



/* Entry: 1087e906c; end: 1087e9db7;  */

void FUN_1087e906c(long *param_1,long *param_2,long param_3,long *param_4,undefined8 *param_5)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined **ppuVar7;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
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
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  int extraout_w10_15;
  int extraout_w10_16;
  int extraout_w10_17;
  int extraout_w10_18;
  int extraout_w10_19;
  int extraout_w10_20;
  int extraout_w10_21;
  int extraout_w10_22;
  int extraout_w10_23;
  int extraout_w10_24;
  int extraout_w10_25;
  int extraout_w10_26;
  int extraout_w10_27;
  int extraout_w10_28;
  int extraout_w10_29;
  int extraout_w10_30;
  int extraout_w10_31;
  int extraout_w10_32;
  int extraout_w10_33;
  int extraout_w10_34;
  int extraout_w10_35;
  int extraout_w10_36;
  int extraout_w10_37;
  int extraout_w10_38;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_70;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar8 = param_3;
  FUN_1086a17f8();
  if ((int)lVar8 == 0) {
    lVar8 = *param_2;
    lVar12 = *(long *)(lVar8 + 0x40);
    uVar5 = 0xb0;
    __Znwm();
    func_0x0001087ea360();
    if (lVar12 != 0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_00 != 0);
    }
    lStack_98 = *(undefined8 *)(lVar8 + 0xb0);
    uStack_a0 = *(undefined8 *)(lVar8 + 0xa8);
    if (*(long *)(lVar8 + 0xb0) != 0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_01 != 0);
    }
    uStack_a8 = *(undefined8 *)(lVar8 + 0xa0);
    uStack_b0 = *(undefined8 *)(lVar8 + 0x98);
    if (*(long *)(lVar8 + 0xa0) != 0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_02 != 0);
    }
    uStack_c0 = *(undefined8 *)(lVar8 + 0x108);
    lStack_b8 = *(long *)(lVar8 + 0x110);
    if (lStack_b8 != 0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_03 != 0);
    }
    uStack_d0 = *(undefined8 *)(lVar8 + 0x118);
    lStack_c8 = *(long *)(lVar8 + 0x120);
    if (lStack_c8 != 0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_04 != 0);
    }
    lStack_d8 = *(undefined8 *)(lVar8 + 0x30);
    uStack_e0 = *(undefined8 *)(lVar8 + 0x28);
    if (*(long *)(lVar8 + 0x30) != 0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_05 != 0);
    }
    uStack_f0 = *(undefined8 *)(lVar8 + 0x188);
    lStack_e8 = *(long *)(lVar8 + 400);
    if (lStack_e8 != 0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_06 != 0);
    }
    uStack_100 = *(undefined8 *)(lVar8 + 0x1d8);
    lStack_f8 = *(long *)(lVar8 + 0x1e0);
    if (lStack_f8 != 0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_07 != 0);
    }
    uStack_110 = *(undefined8 *)(lVar8 + 0x2e8);
    lStack_108 = *(long *)(lVar8 + 0x2f0);
    if (lStack_108 != 0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_08 != 0);
    }
    uStack_118 = param_5[1];
    uStack_120 = *param_5;
    if (param_5[1] != 0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_09 != 0);
    }
    func_0x0001087ea2fc();
    func_0x0001087f0100(uVar5);
    func_0x000104be3970(&uStack_120);
    func_0x000107c29118(&uStack_110);
    func_0x000107c28cc8(&uStack_100);
    func_0x000107c289fc(&uStack_f0);
    func_0x000107c28800(&uStack_e0);
    func_0x000107c28ab8(&uStack_d0);
    func_0x000107c28ab4(&uStack_c0);
    func_0x000107c29958(&uStack_b0);
    func_0x000107c2814c(&uStack_a0);
    puVar11 = &uStack_90;
    func_0x000107c28808();
    plVar10 = param_1 + 2;
    puVar9 = (undefined8 *)param_1[1];
    if (puVar9 < (undefined8 *)*plVar10) {
      puVar11 = puVar9 + 1;
      *puVar9 = uVar5;
    }
    else {
      func_0x0001087ea2e4((long)puVar9 - *param_1 >> 3);
      lVar8 = *param_1;
      lVar12 = param_1[1];
      plStack_70 = plVar10;
      if (puVar11 != (undefined8 *)0x0) {
        func_0x0001087ea328();
      }
      func_0x0001087ea2d0(lVar12 - lVar8);
      *extraout_x8 = uVar5;
      func_0x0001087ea2b0(extraout_x8 + 1);
      puVar11 = (undefined8 *)param_1[1];
      func_0x0001087ea320();
    }
    param_1[1] = (long)puVar11;
    lVar12 = *param_2;
    uVar5 = *(undefined8 *)(lVar12 + 0x28);
    lVar8 = *(long *)(lVar12 + 0x30);
    puVar11 = (undefined8 *)0x50;
    __Znwm();
    uStack_90 = uVar5;
    lStack_88 = lVar8;
    if (lVar8 != 0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_10 != 0);
    }
    uVar16 = *(undefined8 *)(lVar12 + 0x40);
    uVar15 = *(undefined8 *)(lVar12 + 0x38);
    if (*(long *)(lVar12 + 0x40) != 0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_11 != 0);
    }
    uVar18 = *(undefined8 *)(lVar12 + 0x100);
    uVar17 = *(undefined8 *)(lVar12 + 0xf8);
    if (*(long *)(lVar12 + 0x100) != 0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_12 != 0);
    }
    uVar20 = *(undefined8 *)(lVar12 + 0xf0);
    uVar19 = *(undefined8 *)(lVar12 + 0xe8);
    if (*(long *)(lVar12 + 0xf0) != 0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_13 != 0);
    }
    *(undefined4 *)(puVar11 + 1) = 2;
    *puVar11 = &PTR_FUN_110a72668;
    puVar11[2] = uVar5;
    puVar11[3] = lVar8;
    uStack_90 = 0;
    lStack_88 = 0;
    uStack_a0 = 0;
    lStack_98 = 0;
    puVar11[5] = uVar16;
    puVar11[4] = uVar15;
    puVar11[7] = uVar18;
    puVar11[6] = uVar17;
    uStack_b0 = 0;
    uStack_a8 = 0;
    puVar11[9] = uVar20;
    puVar11[8] = uVar19;
    uStack_c0 = 0;
    lStack_b8 = 0;
    func_0x0001087ea3c8();
    func_0x000107c28858(&uStack_b0);
    func_0x0001087ea330();
    puVar6 = &uStack_90;
    func_0x000107c28800();
    puVar9 = (undefined8 *)param_1[1];
    if (puVar9 < (undefined8 *)param_1[2]) {
      puVar6 = puVar9 + 1;
      *puVar9 = puVar11;
    }
    else {
      func_0x0001087ea2e4((long)puVar9 - *param_1 >> 3);
      lVar8 = *param_1;
      lVar12 = param_1[1];
      plStack_70 = plVar10;
      if (puVar6 != (undefined8 *)0x0) {
        func_0x0001087ea328();
      }
      func_0x0001087ea2d0(lVar12 - lVar8);
      *extraout_x8_01 = puVar11;
      func_0x0001087ea2b0(extraout_x8_01 + 1);
      puVar6 = (undefined8 *)param_1[1];
      func_0x0001087ea320();
    }
    param_1[1] = (long)puVar6;
    uVar4 = 9 < *(uint *)(param_3 + 0x48);
    if (*(uint *)(param_3 + 0x48) == 10) {
      ppuVar7 = *(undefined ***)(*(long *)(param_3 + 0x40) + 0x20);
      ppuVar1 = &PTR_PTR_11326be38;
      if (ppuVar7 != (undefined **)0x0) {
        ppuVar1 = ppuVar7;
      }
      uVar4 = *(int *)(ppuVar1 + 2) != 1;
      if (*(int *)(ppuVar1 + 2) - 1U < 2) {
        puVar11 = (undefined8 *)*param_2;
        lVar8 = puVar11[8];
        uVar16 = puVar11[8];
        uVar15 = puVar11[7];
        uVar5 = 0x38;
        __Znwm();
        uStack_a0 = uVar15;
        lStack_98 = uVar16;
        if (lVar8 != 0) {
          do {
            func_0x0001087ea2c0();
          } while (extraout_w10_14 != 0);
        }
        func_0x000107c27994(&uStack_90,puVar11 + 2);
        func_0x0001087f60bc(uVar5,&uStack_a0,&uStack_90);
        puVar9 = &uStack_90;
        func_0x000107c27914();
        func_0x0001087ea330();
        func_0x0001087ea3a8();
        if ((bool)uVar4) {
          func_0x0001087ea310();
          func_0x0001087ea2e4();
          func_0x0001087ea39c();
          if (puVar9 != (undefined8 *)0x0) {
            func_0x0001087ea328();
          }
          func_0x0001087ea288();
          func_0x0001087ea2f0();
        }
        else {
          *puVar11 = uVar5;
          puVar11 = puVar11 + 1;
        }
        param_1[1] = (long)puVar11;
      }
    }
    puVar11 = (undefined8 *)*param_2;
    lVar8 = puVar11[0x20];
    uVar15 = puVar11[0x20];
    uVar5 = puVar11[0x1f];
    puVar9 = (undefined8 *)0x40;
    __Znwm();
    if (lVar8 != 0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_15 != 0);
    }
    uVar17 = puVar11[0x16];
    uVar16 = puVar11[0x15];
    if (puVar11[0x16] != 0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_16 != 0);
    }
    uVar19 = puVar11[0x14];
    uVar18 = puVar11[0x13];
    if (puVar11[0x14] != 0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_17 != 0);
    }
    *(undefined4 *)(puVar9 + 1) = 4;
    *puVar9 = &PTR_FUN_110a726a8;
    uStack_90 = 0;
    lStack_88 = 0;
    puVar9[3] = uVar15;
    puVar9[2] = uVar5;
    puVar9[5] = uVar17;
    puVar9[4] = uVar16;
    uStack_a0 = 0;
    lStack_98 = 0;
    puVar9[7] = uVar19;
    puVar9[6] = uVar18;
    uStack_b0 = 0;
    uStack_a8 = 0;
    func_0x000107c29958(&uStack_b0);
    func_0x000107c2814c(&uStack_a0);
    puVar6 = &uStack_90;
    func_0x000107c28858();
    func_0x0001087ea3a8();
    if ((bool)uVar4) {
      func_0x0001087ea310();
      func_0x0001087ea2e4();
      puVar9 = puVar6;
      func_0x0001087ea39c();
      if (puVar9 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        func_0x0001087ea328();
      }
      func_0x0001087ea288();
      func_0x0001087ea2f0();
    }
    else {
      *puVar11 = puVar9;
      puVar11 = puVar11 + 1;
    }
    param_1[1] = (long)puVar11;
    lVar8 = *param_2;
    func_0x0001087ea3bc();
    uVar4 = 1;
    lVar12 = *(long *)(lVar8 + 0xd0);
    uVar5 = 0xa0;
    __Znwm();
    func_0x0001087ea360();
    if (lVar12 != 0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_18 != 0);
    }
    lStack_98 = *(undefined8 *)(lVar8 + 0x40);
    uStack_a0 = *(undefined8 *)(lVar8 + 0x38);
    if (*(long *)(lVar8 + 0x40) != 0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_19 != 0);
    }
    uStack_a8 = *(undefined8 *)(lVar8 + 0x50);
    uStack_b0 = *(undefined8 *)(lVar8 + 0x48);
    if (*(long *)(lVar8 + 0x50) != 0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_20 != 0);
    }
    lStack_b8 = *(undefined8 *)(lVar8 + 0xe0);
    uStack_c0 = *(undefined8 *)(lVar8 + 0xd8);
    if (*(long *)(lVar8 + 0xe0) != 0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_21 != 0);
    }
    uStack_d0 = *(undefined8 *)(lVar8 + 0x2e8);
    lStack_c8 = *(long *)(lVar8 + 0x2f0);
    if (lStack_c8 != 0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_22 != 0);
    }
    func_0x0001087ea2fc();
    FUN_1087eb83c(uVar5);
    func_0x000107c29118(&uStack_d0);
    func_0x0001087ea3d0();
    puVar11 = &uStack_b0;
    func_0x000107c29194();
    func_0x0001087ea330();
    func_0x0001087ea338();
    func_0x0001087ea3a8();
    if ((bool)uVar4) {
      func_0x0001087ea310();
      func_0x0001087ea2e4();
      func_0x0001087ea39c();
      if (puVar11 != (undefined8 *)0x0) {
        func_0x0001087ea328();
      }
      func_0x0001087ea288();
      func_0x0001087ea2f0();
    }
    else {
      *puVar6 = uVar5;
      puVar6 = puVar6 + 1;
    }
    param_1[1] = (long)puVar6;
    plVar13 = (long *)*param_2;
    puVar9 = (undefined8 *)0x98;
    __Znwm();
    uVar4 = 1;
    puVar11 = puVar9;
    FUN_1087eea3c();
    func_0x0001087ea3a8();
    if ((bool)uVar4) {
      func_0x0001087ea310();
      func_0x0001087ea2e4();
      puVar9 = puVar11;
      func_0x0001087ea39c();
      if (puVar9 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)0x0;
      }
      else {
        func_0x0001087ea328();
      }
      func_0x0001087ea288();
      func_0x0001087ea2f0();
    }
    else {
      *plVar13 = (long)puVar9;
      plVar13 = plVar13 + 1;
    }
    param_1[1] = (long)plVar13;
    lVar8 = *param_2;
    func_0x0001087ea3bc();
    lVar12 = *param_2;
    uVar4 = 1;
    ppuVar1 = &PTR_PTR_1133a62f8;
    if (*(undefined ***)(lVar12 + 0x2b8) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(lVar12 + 0x2b8);
    }
    lVar14 = *(long *)(lVar8 + 0xd0);
    uVar5 = 0xa0;
    __Znwm();
    func_0x0001087ea360();
    if (lVar14 != 0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_23 != 0);
    }
    lStack_98 = *(undefined8 *)(lVar8 + 0x40);
    uStack_a0 = *(undefined8 *)(lVar8 + 0x38);
    if (*(long *)(lVar8 + 0x40) != 0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_24 != 0);
    }
    uStack_a8 = *(undefined8 *)(lVar8 + 0xe0);
    uStack_b0 = *(undefined8 *)(lVar8 + 0xd8);
    if (*(long *)(lVar8 + 0xe0) != 0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_25 != 0);
    }
    uStack_c0 = *(undefined8 *)(lVar12 + 0x128);
    lStack_b8 = *(long *)(lVar12 + 0x130);
    if (lStack_b8 != 0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_26 != 0);
    }
    lStack_c8 = *(undefined8 *)(lVar12 + 0xf0);
    uStack_d0 = *(undefined8 *)(lVar12 + 0xe8);
    if (*(long *)(lVar12 + 0xf0) != 0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_27 != 0);
    }
    FUN_1087edc50(uVar5,&uStack_90,&uStack_a0,&uStack_b0,puVar11,&uStack_c0,&uStack_d0,ppuVar1);
    func_0x000107c288a4(&uStack_d0);
    func_0x000107c28abc(&uStack_c0);
    puVar9 = &uStack_b0;
    func_0x000107c28868();
    func_0x0001087ea330();
    func_0x0001087ea338();
    func_0x0001087ea3a8();
    if ((bool)uVar4) {
      func_0x0001087ea310();
      func_0x0001087ea2e4();
      func_0x0001087ea39c();
      if (puVar9 != (undefined8 *)0x0) {
        func_0x0001087ea328();
      }
      func_0x0001087ea288();
      func_0x0001087ea2f0();
    }
    else {
      *puVar11 = uVar5;
      puVar11 = puVar11 + 1;
    }
    param_1[1] = (long)puVar11;
    if (*param_4 != param_4[1]) {
      lVar8 = *param_2;
      FUN_10883fdec(lVar8 + 0x188,lVar8);
      lVar12 = *(long *)(lVar8 + 0xb0);
      uVar5 = 0x58;
      __Znwm();
      func_0x0001087ea360();
      if (lVar12 != 0) {
        do {
          func_0x0001087ea2c0();
        } while (extraout_w10_28 != 0);
      }
      lStack_98 = *(undefined8 *)(lVar8 + 0xc0);
      uStack_a0 = *(undefined8 *)(lVar8 + 0xb8);
      if (*(long *)(lVar8 + 0xc0) != 0) {
        do {
          func_0x0001087ea2c0();
        } while (extraout_w10_29 != 0);
      }
      uStack_a8 = *(undefined8 *)(lVar8 + 0x40);
      uStack_b0 = *(undefined8 *)(lVar8 + 0x38);
      if (*(long *)(lVar8 + 0x40) != 0) {
        do {
          func_0x0001087ea2c0();
        } while (extraout_w10_30 != 0);
      }
      lStack_b8 = *(long *)(lVar8 + 0xe0);
      uStack_c0 = *(undefined8 *)(lVar8 + 0xd8);
      if (*(long *)(lVar8 + 0xe0) != 0) {
        do {
          func_0x0001087ea2c0();
        } while (extraout_w10_31 != 0);
      }
      func_0x0001087ea2fc();
      func_0x0001087f3868(uVar5);
      func_0x0001087ea3d0();
      func_0x0001087ea404();
      puVar9 = &uStack_a0;
      func_0x000107c286d8();
      func_0x0001087ea3fc();
      puVar11 = (undefined8 *)param_1[1];
      if (puVar11 < (undefined8 *)param_1[2]) {
        puVar9 = puVar11 + 1;
        *puVar11 = uVar5;
      }
      else {
        func_0x0001087ea2e4((long)puVar11 - *param_1 >> 3);
        lVar8 = *param_1;
        lVar12 = param_1[1];
        plStack_70 = plVar10;
        if (puVar9 != (undefined8 *)0x0) {
          func_0x0001087ea328();
        }
        func_0x0001087ea2d0(lVar12 - lVar8);
        *extraout_x8_02 = uVar5;
        func_0x0001087ea2b0(extraout_x8_02 + 1);
        puVar9 = (undefined8 *)param_1[1];
        func_0x0001087ea320();
      }
      param_1[1] = (long)puVar9;
    }
    lVar8 = *param_2;
    lVar12 = *(long *)(lVar8 + 0xd0);
    uVar5 = 0xb8;
    __Znwm();
    func_0x0001087ea360();
    if (lVar12 != 0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_32 != 0);
    }
    uStack_a0 = *(undefined8 *)(lVar8 + 0x128);
    lStack_98 = *(long *)(lVar8 + 0x130);
    if (lStack_98 != 0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_33 != 0);
    }
    uStack_a8 = *(undefined8 *)(lVar8 + 0x40);
    uStack_b0 = *(undefined8 *)(lVar8 + 0x38);
    if (*(long *)(lVar8 + 0x40) != 0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_34 != 0);
    }
    lStack_b8 = *(undefined8 *)(lVar8 + 0xf0);
    uStack_c0 = *(undefined8 *)(lVar8 + 0xe8);
    if (*(long *)(lVar8 + 0xf0) != 0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_35 != 0);
    }
    uStack_d0 = *(undefined8 *)(lVar8 + 0x188);
    lStack_c8 = *(long *)(lVar8 + 400);
    if (lStack_c8 != 0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_36 != 0);
    }
    uStack_e0 = *(undefined8 *)(lVar8 + 0x198);
    lStack_d8 = *(long *)(lVar8 + 0x1a0);
    if (lStack_d8 != 0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_37 != 0);
    }
    uStack_f0 = *(undefined8 *)(lVar8 + 0x2d8);
    lStack_e8 = *(long *)(lVar8 + 0x2e0);
    if (lStack_e8 != 0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_38 != 0);
    }
    func_0x0001087ea2fc();
    FUN_1087f1d38(uVar5);
    func_0x000107c297ac(&uStack_f0);
    func_0x000107c2995c(&uStack_e0);
    func_0x000107c289fc(&uStack_d0);
    func_0x0001087ea3c8();
    func_0x0001087ea404();
    puVar9 = &uStack_a0;
    func_0x000107c28abc();
    func_0x0001087ea338();
    puVar11 = (undefined8 *)param_1[1];
    if (puVar11 < (undefined8 *)param_1[2]) {
      puVar9 = puVar11 + 1;
      *puVar11 = uVar5;
    }
    else {
      func_0x0001087ea2e4((long)puVar11 - *param_1 >> 3);
      lVar8 = *param_1;
      lVar12 = param_1[1];
      plStack_70 = plVar10;
      if (puVar9 != (undefined8 *)0x0) {
        func_0x0001087ea328();
      }
      func_0x0001087ea2d0(lVar12 - lVar8);
      *extraout_x8_03 = uVar5;
      func_0x0001087ea2b0(extraout_x8_03 + 1);
      puVar9 = (undefined8 *)param_1[1];
      func_0x0001087ea320();
    }
    param_1[1] = (long)puVar9;
  }
  else if ((int)lVar8 == 1) {
    lVar8 = *param_2;
    ppuVar1 = &PTR_PTR_1133a62f8;
    if (*(undefined ***)(lVar8 + 0x2b8) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(lVar8 + 0x2b8);
    }
    lVar12 = *(long *)(lVar8 + 0xb0);
    uVar5 = 0x48;
    __Znwm();
    func_0x0001087ea360();
    if (lVar12 != 0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10 != 0);
    }
    lStack_98 = *(undefined8 *)(lVar8 + 0xa0);
    uStack_a0 = *(undefined8 *)(lVar8 + 0x98);
    if (*(long *)(lVar8 + 0xa0) != 0) {
      plVar10 = (long *)(*(long *)(lVar8 + 0xa0) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_a8 = param_5[1];
    uStack_b0 = *param_5;
    if (param_5[1] != 0) {
      plVar10 = (long *)(param_5[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_1087f1334(uVar5,lVar8 + 200,lVar8 + 0x128,lVar8 + 0x38,lVar8 + 0xe8,&uStack_90,&uStack_a0,
                  lVar8 + 0x188,lVar8 + 0x198,ppuVar1,lVar8 + 0x2d8,&uStack_b0);
    func_0x000104be3970(&uStack_b0);
    puVar11 = &uStack_a0;
    func_0x000107c29958();
    func_0x0001087ea3fc();
    plStack_70 = param_1 + 2;
    puVar9 = (undefined8 *)param_1[1];
    if (puVar9 < (undefined8 *)*plStack_70) {
      puVar11 = puVar9 + 1;
      *puVar9 = uVar5;
    }
    else {
      func_0x0001087ea2e4((long)puVar9 - *param_1 >> 3);
      lVar8 = *param_1;
      lVar12 = param_1[1];
      if (puVar11 != (undefined8 *)0x0) {
        FUN_1087e41f8(plStack_70);
      }
      func_0x0001087ea2d0(lVar12 - lVar8);
      *extraout_x8_00 = uVar5;
      func_0x0001087ea2b0(extraout_x8_00 + 1);
      puVar11 = (undefined8 *)param_1[1];
      func_0x0001087ea320();
    }
    param_1[1] = (long)puVar11;
  }
  return;
}



/* Entry: 1087e9db8; end: 1087e9e37;  */

void FUN_1087e9db8(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] - (param_1[1] - *param_1);
  _memcpy(lVar1);
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



/* Entry: 1087e9e38; end: 1087e9e3b;  */

undefined8 * FUN_1087e9e38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a72668;
  func_0x000107c288a4(param_1 + 8);
  func_0x000107c28858(param_1 + 6);
  func_0x000107c28808(param_1 + 4);
  func_0x000107c28800(param_1 + 2);
  return param_1;
}



/* Entry: 1087e9e3c; end: 1087e9e4f;  */

void FUN_1087e9e3c(void)

{
  FUN_1087ea024();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087e9e50; end: 1087ea023;  */

undefined8 * FUN_1087e9e50(void)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 auStack_1f8 [3];
  undefined1 auStack_1e0 [44];
  undefined4 uStack_1b4;
  char cStack_190;
  undefined8 auStack_188 [3];
  undefined8 uStack_170;
  long *plStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined8 uStack_144;
  undefined1 auStack_138 [56];
  undefined1 uStack_100;
  undefined1 auStack_f8 [56];
  undefined1 uStack_c0;
  undefined1 auStack_b8 [120];
  
  func_0x0001087ea340();
  func_0x0001087e472c(auStack_1f8);
  func_0x0001087ea3d8();
  uVar1 = *(undefined4 *)(unaff_x20 + 0x138);
  plVar3 = *(long **)(unaff_x19 + 0x10);
  (**(code **)(*plVar3 + 0x10))();
  func_0x000107c27994(auStack_188);
  uStack_170 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_160 = 0;
  uStack_158 = *(undefined4 *)(unaff_x20 + 0x130);
  uStack_150 = *(undefined8 *)(unaff_x20 + 0x128);
  uStack_148 = *(undefined4 *)(unaff_x20 + 0x134);
  uStack_144 = 3;
  plStack_168 = plVar3;
  uStack_15c = uVar1;
  FUN_108860568(auStack_1e0,*(undefined8 *)(unaff_x19 + 0x20),auStack_188);
  uVar2 = cStack_190 == '\x01';
  if ((bool)uVar2) {
    plVar3 = *(long **)(unaff_x19 + 0x30);
    (**(code **)(*plVar3 + 0x10))();
    FUN_10879ca28(uStack_15c,uStack_1b4,plVar3,*(undefined8 *)(unaff_x19 + 0x40));
    uVar5 = (ulong)*(uint *)(unaff_x19 + 8);
    auStack_f8[0] = 0;
    uStack_c0 = 0;
    func_0x0001087e498c(auStack_b8,uVar5,4,auStack_f8);
    func_0x0001087ea3f0();
    func_0x0001087ea374();
    FUN_1087a33a8(auStack_f8);
    func_0x0001087ea40c();
  }
  else {
    func_0x0001087ea40c();
    uVar5 = (ulong)*(uint *)(unaff_x19 + 8);
    auStack_138[0] = 0;
    uStack_100 = 0;
    func_0x0001087e498c(auStack_b8,uVar5,0,auStack_138);
    func_0x0001087ea3f0();
    func_0x0001087ea374();
    FUN_1087a33a8(auStack_138);
  }
  puVar4 = auStack_188;
  func_0x000107c27914();
  while( true ) {
    func_0x0001087ea36c();
    func_0x0001087ea384();
    if ((bool)uVar2) {
      return puVar4;
    }
    ___stack_chk_fail();
    if ((int)uVar5 == 0) break;
    func_0x0001087ea374();
    FUN_1087a33a8(auStack_f8);
    func_0x0001087ea40c();
    func_0x000107c27914(auStack_188);
    ___cxa_begin_catch(puVar4);
    puVar4 = auStack_1f8;
    func_0x0001053360b0();
    ___cxa_end_catch();
  }
  func_0x0001087ea3b4();
  *puVar4 = &PTR_FUN_110a72668;
  func_0x000107c288a4(puVar4 + 8);
  func_0x000107c28858(puVar4 + 6);
  func_0x000107c28808(puVar4 + 4);
  func_0x000107c28800(puVar4 + 2);
  return puVar4;
}



/* Entry: 1087ea024; end: 1087ea073;  */

undefined8 * FUN_1087ea024(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a72668;
  func_0x000107c288a4(param_1 + 8);
  func_0x000107c28858(param_1 + 6);
  func_0x000107c28808(param_1 + 4);
  func_0x000107c28800(param_1 + 2);
  return param_1;
}



/* Entry: 1087ea074; end: 1087ea077;  */

undefined8 * FUN_1087ea074(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a726a8;
  func_0x000107c29958(param_1 + 6);
  func_0x000107c2814c(param_1 + 4);
  func_0x000107c28858(param_1 + 2);
  return param_1;
}



/* Entry: 1087ea078; end: 1087ea08b;  */

void FUN_1087ea078(void)

{
  FUN_1087ea1bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087ea08c; end: 1087ea1bb;  */

long * FUN_1087ea08c(undefined8 param_1,ulong param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long unaff_x19;
  long unaff_x20;
  long alStack_110 [3];
  undefined1 auStack_f8 [56];
  undefined1 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 uStack_b0;
  undefined1 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6c;
  undefined1 uStack_68;
  undefined1 uStack_50;
  
  func_0x0001087ea340();
  func_0x0001087e472c(alStack_110);
  func_0x0001087ea3d8();
  uVar1 = *(int *)(unaff_x20 + 0x134) == 3;
  if ((bool)uVar1) {
    plVar2 = *(long **)(unaff_x19 + 0x10);
    (**(code **)(*plVar2 + 0x10))();
    if ((int)plVar2 == 0) {
      uStack_b8 = *(undefined4 *)(unaff_x19 + 8);
      uStack_b4 = 5;
      uStack_b0 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      uStack_50 = 0;
      func_0x0001087ea3e4();
      func_0x0001087ea37c();
      goto LAB_1087ea110;
    }
  }
  FUN_1087ea204();
  param_2 = (ulong)*(uint *)(unaff_x19 + 8);
  auStack_f8[0] = 0;
  uStack_c0 = 0;
  func_0x0001087e498c(&uStack_b8,param_2,0,auStack_f8);
  func_0x0001087ea3e4();
  func_0x0001087ea37c();
  plVar2 = (long *)auStack_f8;
  FUN_1087a33a8();
LAB_1087ea110:
  while( true ) {
    func_0x0001087ea36c();
    func_0x0001087ea384();
    if ((bool)uVar1) {
      return plVar2;
    }
    ___stack_chk_fail();
    if ((int)param_2 == 0) break;
    func_0x0001087ea37c();
    ___cxa_begin_catch(plVar2);
    plVar2 = alStack_110;
    func_0x0001053360b0();
    ___cxa_end_catch();
  }
  func_0x0001087ea3b4();
  *plVar2 = (long)&PTR_FUN_110a726a8;
  func_0x000107c29958(plVar2 + 6);
  func_0x000107c2814c(plVar2 + 4);
  func_0x000107c28858(plVar2 + 2);
  return plVar2;
}



/* Entry: 1087ea1bc; end: 1087ea203;  */

undefined8 * FUN_1087ea1bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a726a8;
  func_0x000107c29958(param_1 + 6);
  func_0x000107c2814c(param_1 + 4);
  func_0x000107c28858(param_1 + 2);
  return param_1;
}



/* Entry: 1087ea204; end: 1087ea287;  */

void FUN_1087ea204(long param_1)

{
  undefined1 auStack_778 [904];
  undefined1 uStack_3f0;
  undefined1 auStack_3e8 [24];
  undefined1 auStack_3d0 [944];
  
  func_0x000107c27994(auStack_3e8);
  auStack_778[0] = 0;
  uStack_3f0 = 0;
  FUN_10864094c(auStack_3d0,auStack_3e8,1,auStack_778);
  func_0x00010863f788(auStack_778);
  func_0x000107c27914(auStack_3e8);
  (**(code **)(**(long **)(param_1 + 0x30) + 0x18))(*(long **)(param_1 + 0x30),auStack_3d0);
  FUN_108798a4c(auStack_3d0);
  return;
}



/* Entry: 1087ea288; end: 1087ea413;  */

void FUN_1087ea288(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *unaff_x19;
  long lVar2;
  undefined8 unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x29;
  
  puVar1 = (undefined8 *)(param_1 + (unaff_x24 - unaff_x25));
  *(undefined8 **)(unaff_x29 + -0x78) = puVar1;
  *(long *)(unaff_x29 + -0x68) = param_1 + param_2 * 8;
  *puVar1 = unaff_x23;
  *(undefined8 **)(unaff_x29 + -0x70) = puVar1 + 1;
  lVar2 = *(long *)(unaff_x29 + -0x78) - (unaff_x19[1] - *unaff_x19);
  _memcpy(lVar2);
  *(long *)(unaff_x29 + -0x78) = lVar2;
  lVar2 = *unaff_x19;
  unaff_x19[1] = lVar2;
  *unaff_x19 = *(long *)(unaff_x29 + -0x78);
  *(long *)(unaff_x29 + -0x78) = lVar2;
  lVar2 = unaff_x19[1];
  unaff_x19[1] = *(long *)(unaff_x29 + -0x70);
  *(long *)(unaff_x29 + -0x70) = lVar2;
  lVar2 = unaff_x19[2];
  unaff_x19[2] = *(long *)(unaff_x29 + -0x68);
  *(long *)(unaff_x29 + -0x68) = lVar2;
  *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x78);
  return;
}



/* Entry: 1087ea414; end: 1087eb60f;  */

void FUN_1087ea414(long param_1,long *param_2)

{
  undefined **ppuVar1;
  ulong *puVar2;
  long lVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *****pppppuVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  long *plVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined *puVar19;
  byte bVar20;
  undefined1 auStack_c40 [904];
  undefined1 uStack_8b8;
  undefined1 auStack_8b0 [24];
  undefined8 ****appppuStack_898 [2];
  char cStack_881;
  char acStack_880 [32];
  int iStack_860;
  long lStack_740;
  byte bStack_728;
  byte bStack_6c8;
  undefined1 auStack_4e8 [24];
  undefined1 uStack_4d0;
  undefined8 uStack_490;
  long lStack_488;
  undefined1 uStack_480;
  undefined8 ***apppuStack_478 [3];
  undefined1 auStack_460 [64];
  long *plStack_420;
  long *plStack_418;
  long lStack_408;
  long lStack_400;
  undefined8 uStack_3f8;
  long *plStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  char cStack_320;
  undefined1 uStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  long lStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined1 auStack_218 [168];
  byte bStack_170;
  undefined1 auStack_168 [40];
  long lStack_140;
  long lStack_138;
  long alStack_130 [2];
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [8];
  int iStack_100;
  long *plStack_e0;
  int iStack_d8;
  byte bStack_d0;
  undefined1 auStack_c8 [32];
  undefined1 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined1 uStack_88;
  long lStack_78;
  long alStack_70 [2];
  
  uStack_490 = 0;
  lVar14 = param_1;
  func_0x000107c28258();
  uStack_480 = 1;
  lVar12 = *param_2;
  lStack_488 = lVar14;
  if ((int)param_2[0x21] != 2) {
    lVar14 = param_2[1];
    if ((lVar12 == lVar14) || (*(long *)(lVar14 + -0x18) == *(long *)(lVar14 + -0x10))) {
      iVar15 = 7;
    }
    else {
      iVar15 = *(int *)(*(long *)(lVar14 + -0x10) + -0x6c);
    }
    plVar16 = (long *)(param_1 + 0x18);
    uVar17 = *(undefined8 *)(*plVar16 + 0x18);
    func_0x000107c278b8(apppuStack_478,&UNK_10f4bbb55);
    func_0x000107c31420(auStack_460,uVar17,apppuStack_478);
    pppppuVar7 = (undefined8 *****)apppuStack_478;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    lVar12 = param_2[1];
    if ((*(long *)(lVar12 + -0x18) == *(long *)(lVar12 + -0x10)) ||
       (uVar5 = *(uint *)(*(long *)(lVar12 + -0x10) + -0x6c), uVar5 == 0)) {
      func_0x0001087eb7fc();
      if ((int)pppppuVar7 != 0) {
        (**(code **)(**(long **)(param_1 + 0x38) + 0x38))(*(long **)(param_1 + 0x38),param_2 + 0xe);
        (**(code **)(**(long **)(param_1 + 0xd8) + 0x10))(&plStack_a0);
        func_0x0001087eb824(*plVar16);
        func_0x000107c29f60();
        FUN_1086a4514(auStack_460,param_2 + 0xe,plVar16,param_1 + 8,param_1 + 0x98);
        plVar18 = *(long **)(param_1 + 0xd8);
        (**(code **)(*plVar18 + 0x10))(&plStack_3f0,plVar18);
        (**(code **)(*plStack_3f0 + 0x28))(plStack_3f0,acStack_880);
        plStack_120 = plStack_3f0;
        plStack_3f0 = (long *)0x0;
        (**(code **)(*plVar18 + 0x18))(plVar18,&plStack_120);
        plVar18 = plStack_120;
        plStack_120 = (long *)0x0;
        if (plVar18 != (long *)0x0) {
          func_0x0001087eb7d0();
        }
        plVar18 = plStack_3f0;
        plStack_3f0 = (long *)0x0;
        if (plVar18 != (long *)0x0) {
          func_0x0001087eb7d0();
        }
        pppppuVar7 = appppuStack_898;
        func_0x000107c287e4();
        func_0x0001087eb830();
        if (pppppuVar7 != (undefined8 *****)0x0) {
          func_0x0001087eb7d0();
        }
      }
      uVar5 = (uint)pppppuVar7;
      if ((int)param_2[0x1b] - 1U < 2) {
        if ((*(byte *)(param_2 + 0x1d) & 1) == 0) {
          func_0x00010bd3f434(appppuStack_898,&UNK_10f4bbb9d,0x26,&UNK_10f4bbbc4);
          if (-1 < cStack_881) {
            appppuStack_898[0] = appppuStack_898;
          }
          func_0x00010bd3f4e0(appppuStack_898[0],"unknown",0xd2);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1087eb5b8);
          (*pcVar4)();
        }
        func_0x0001087eb7fc();
        if (((int)param_2[0x1a] == 6) && ((*(byte *)(param_2[0x19] + 0x10) >> 1 & 1) != 0)) {
          func_0x0001086aaa9c(auStack_c8,*(undefined8 *)(param_2[0x19] + 0x20));
        }
        else {
          auStack_c8[0] = 0;
          uStack_a8 = 0;
        }
        iVar10 = (int)param_2[0x1b];
        if ((char)param_2[0x29] == '\x01' && (int)param_2[0x28] == 4) {
          if (iVar10 == 1) {
            lVar12 = param_2[0x27];
            plVar18 = *(long **)(param_1 + 0xa8);
            uStack_3c8 = 0;
            uStack_3d0 = 0;
            uStack_3d8 = 0;
            uStack_3e0 = 0;
            uStack_3e8 = 0;
            plStack_3f0 = (long *)0x0;
            FUN_1086cf200(&plStack_3f0);
            FUN_10868cc20(appppuStack_898,lVar12);
            (**(code **)(*plVar18 + 0x28))
                      (&plStack_240,plVar18,param_2 + 0xe,1,0x1200a8,&plStack_3f0,appppuStack_898,0,
                       0);
            FUN_1089058f8(appppuStack_898);
            func_0x0001086cf230(&plStack_3f0);
          }
          if (((int)param_2[0x1a] == 0x11) && (uVar13 = param_2[0x1e], uVar13 != param_2[0x1f])) {
            func_0x0001087eb824(*plVar16);
            FUN_10886af30();
            if (acStack_880[0] == '\x01') {
              uVar8 = uVar13;
              func_0x000107c28078(uVar13,appppuStack_898);
              if ((uVar8 & 1) == 0) {
                if (acStack_880[0] == '\x01') {
                  plVar18 = *(long **)(param_1 + 200);
                  func_0x000107c27994(&plStack_120,appppuStack_898);
                  uStack_3e8 = uStack_118;
                  plStack_3f0 = plStack_120;
                  uStack_3e0 = uStack_110;
                  uStack_110 = 0;
                  uStack_118 = 0;
                  plStack_120 = (long *)0x0;
                  (**(code **)(*plVar18 + 0x30))(plVar18,&plStack_3f0);
                  func_0x000107c27914(&plStack_3f0);
                  func_0x000107c27914(&plStack_120);
                }
                goto LAB_1087ea8fc;
              }
            }
            else {
LAB_1087ea8fc:
              FUN_10886b0d4(*plVar16,param_2 + 0xe,uVar13);
            }
            func_0x000107c279c4(appppuStack_898);
          }
        }
        else {
          if ((((char)param_2[0x29] == '\0') || ((int)param_2[0x28] != 3)) ||
             ((*(byte *)(param_2[0x27] + 0x10) & 1) == 0)) {
            bStack_d0 = 0;
            plStack_120 = (long *)((ulong)plStack_120 & 0xffffffffffffff00);
          }
          else {
            FUN_1088fc290(&plStack_120,0,*(undefined8 *)(param_2[0x27] + 0x18));
            bStack_d0 = 1;
          }
          plVar18 = (long *)*plVar16;
          func_0x0001087eb824();
          func_0x000107c29f64();
          if (((bStack_6c8 & 1) != 0) && (((uVar5 | bStack_728 ^ 0xffffffff) & 1) != 0)) {
            lStack_138 = 0;
            lStack_140 = 0;
            alStack_130[0] = 0;
            if (bStack_d0 == 1) {
              if (iStack_d8 == 6) {
                plVar18 = plStack_e0;
                FUN_1086dd09c(plStack_e0,acStack_880);
              }
              else {
                if (iStack_d8 != 4) goto LAB_1087ea9d8;
                FUN_1086a2e5c(auStack_168,acStack_880,plStack_e0);
                plVar18 = (long *)0x0;
                FUN_1086af46c();
              }
              bVar20 = 0;
LAB_1087eaaf0:
              if (bStack_d0 == 1 && iVar10 == 1) {
                if ((((lStack_740 < param_2[0x1c]) &&
                     (plVar18 = *(long **)(param_1 + 0xe8), plVar18 != (long *)0x0)) &&
                    (iStack_d8 == 4)) && ((*(byte *)(plStack_e0 + 2) >> 1 & 1) != 0)) {
                  (**(code **)(*plVar18 + 0x20))
                            (plVar18,param_2 + 0xe,plStack_e0[10],(long)iStack_860,0x2e0131);
                }
LAB_1087eab5c:
                uVar6 = (uint)plVar18;
                lStack_740 = param_2[0x1c];
                func_0x0001087eb7fc();
                if (param_2[0x1c] == -2) {
                  uVar6 = 1;
                }
                if ((uVar6 & 1) == 0) {
                  func_0x000107c29940(&plStack_3f0,param_1 + 0x68);
                  if (plStack_3f0 != (long *)0x0) {
                    (**(code **)(*plStack_3f0 + 0x10))(plStack_3f0,param_2 + 0xe,param_2[0x1c]);
                  }
                  func_0x000107c29574(&plStack_3f0);
                }
              }
              else if (iVar10 == 1) goto LAB_1087eab5c;
              FUN_10885ff98(*plVar16,appppuStack_898);
              plStack_3f0 = (long *)((ulong)plStack_3f0 & 0xffffffffffffff00);
              uStack_248 = 0;
              lStack_400 = 0;
              lStack_408 = 0;
              uStack_3f8 = 0;
              if ((bStack_d0 == 1) && (iStack_100 != 0 && (uVar5 & 1) == 0)) {
                uStack_228 = 0;
                lStack_230 = 0;
                uStack_238 = 0;
                plStack_240 = (long *)0x0;
                uStack_220 = 0x3f800000;
                FUN_1086a67dc(&plStack_420,auStack_108,param_2 + 0xe,auStack_460,
                              *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x58),
                              &plStack_240);
                if (plStack_420 != plStack_418) {
                  FUN_1086a3928(&plStack_3f0);
                  FUN_10867d03c(&lStack_140,
                                ((long)plStack_418 - (long)plStack_420) / 0x1a8 +
                                (lStack_138 - lStack_140) / 0x1a8);
                  lVar14 = lStack_138;
                  lVar12 = (long)plStack_418 - (long)plStack_420;
                  if (0 < lVar12) {
                    if (alStack_130[0] - lStack_138 < lVar12) {
                      plVar18 = &lStack_140;
                      FUN_10867b544(plVar18,(lStack_138 - lStack_140) / 0x1a8 + lVar12 / 0x1a8);
                      FUN_10867b638(&plStack_a0,plVar18,(lVar14 - lStack_140) / 0x1a8,alStack_130);
                      plStack_90 = (long *)((long)plStack_90 + lVar12);
                      for (; lVar12 != 0; lVar12 = lVar12 + -0x1a8) {
                        func_0x0001087eb7f0();
                      }
                      FUN_1086cecd8(&lStack_140,&plStack_a0,lVar14);
                      func_0x00010867b814(&plStack_a0);
                    }
                    else {
                      lStack_78 = lStack_138;
                      plStack_98 = &lStack_78;
                      plStack_90 = alStack_70;
                      uStack_88 = 0;
                      lVar12 = lStack_138;
                      plStack_a0 = alStack_130;
                      for (plVar18 = plStack_420; alStack_70[0] = lVar12, plVar18 != plStack_418;
                          plVar18 = plVar18 + 0x35) {
                        func_0x0001087eb7f0();
                        lVar12 = alStack_70[0] + 0x1a8;
                      }
                      uStack_88 = 1;
                      FUN_10867b794(&plStack_a0);
                      lStack_138 = lVar12;
                    }
                  }
                }
                FUN_10886488c(*plVar16,param_2 + 0xe,&plStack_240);
                func_0x000104be7444(&lStack_408,uStack_228);
                for (plVar18 = (long *)lStack_230; plVar18 != (long *)0x0;
                    plVar18 = (long *)*plVar18) {
                  FUN_10867d0d8(&lStack_408,param_2 + 0xe,plVar18 + 2);
                }
                func_0x00010867b9fc(&plStack_420);
                func_0x00010867bb84(&plStack_240);
              }
              if ((lStack_140 != lStack_138) || ((lStack_408 == lStack_400 & (bVar20 ^ 0xff)) == 0))
              {
                (**(code **)**(undefined8 **)(param_1 + 0x38))
                          (*(undefined8 **)(param_1 + 0x38),param_2 + 0xe,appppuStack_898,1,
                           &lStack_140,&lStack_408);
              }
              if (uVar5 == 0) {
                (**(code **)(**(long **)(param_1 + 0x98) + 0x38))
                          (*(long **)(param_1 + 0x98),param_2 + 0xe,param_2 + 0x11,&plStack_120,
                           &plStack_3f0);
              }
              else {
                func_0x000107c29940(&plStack_240,param_1 + 0x68);
                if (plStack_240 != (long *)0x0) {
                  (**(code **)(*plStack_240 + 0x38))(plStack_240,param_2 + 0xe);
                }
                func_0x000107c29574(&plStack_240);
              }
              (**(code **)(**(long **)(param_1 + 0xd8) + 0x10))(&plStack_a0);
              iVar10 = (int)param_2[0x1a];
              if ((iVar10 == 5) || (iVar10 == 6 && (uVar5 & 1) == 0)) {
                uStack_238 = 0;
                plStack_240 = (long *)0x0;
                lStack_230 = 0;
                if ((char)param_2[0x29] == '\x01' && (int)param_2[0x28] == 3) {
                  ppuVar1 = &PTR_PTR_11327c4f8;
                  if (*(undefined ***)(param_2[0x27] + 0x18) != (undefined **)0x0) {
                    ppuVar1 = *(undefined ***)(param_2[0x27] + 0x18);
                  }
                  if (*(int *)(ppuVar1 + 9) == 4) {
                    puVar19 = ppuVar1[8];
                    FUN_10876194c(&plStack_240,(long)*(int *)(puVar19 + 0x38));
                    uVar13 = *(ulong *)(puVar19 + 0x30);
                    puVar2 = (ulong *)(puVar19 + 0x30);
                    if ((uVar13 & 1) != 0) {
                      puVar2 = (ulong *)(uVar13 + 7);
                    }
                    FUN_1087623e8(puVar2,puVar2 + *(int *)(puVar19 + 0x38),&plStack_240);
                  }
                }
                (**(code **)(*plStack_a0 + 0x18))(plStack_a0,acStack_880,&plStack_240);
                FUN_1086cd80c(&plStack_240);
              }
              else if (iVar10 == 4) {
                (**(code **)(*plStack_a0 + 0x20))(plStack_a0,acStack_880);
              }
              plStack_420 = plStack_a0;
              plStack_a0 = (long *)0x0;
              (**(code **)(**(long **)(param_1 + 0xd8) + 0x18))
                        (*(long **)(param_1 + 0xd8),&plStack_420);
              plVar18 = plStack_420;
              plStack_420 = (long *)0x0;
              if (plVar18 != (long *)0x0) {
                func_0x0001087eb7d0();
              }
              func_0x0001087eb830();
              if (plVar18 != (long *)0x0) {
                func_0x0001087eb7d0();
              }
              func_0x000104be1274(&lStack_408);
              func_0x000107c288dc(&plStack_3f0);
            }
            else {
LAB_1087ea9d8:
              if ((int)param_2[0x21] == 1) {
                plVar18 = (long *)acStack_880;
                FUN_1086dd1d8(plVar18,param_2 + 0x11,*plVar16 + 0x40);
LAB_1087eaa58:
                bVar20 = 0;
                if (iStack_d8 == 0xc) {
                  bVar20 = bStack_d0;
                }
                if (bVar20 == 1) {
                  plVar18 = (long *)acStack_880;
                  FUN_1086dcd30(plVar18,plStack_e0);
                }
                if (((bStack_d0 & 1) != 0) && (iStack_d8 == 7)) {
                  ppuVar1 = &PTR_PTR_11326be38;
                  if ((undefined **)plStack_e0[4] != (undefined **)0x0) {
                    ppuVar1 = (undefined **)plStack_e0[4];
                  }
                  if (*(int *)(ppuVar1 + 2) == 0) {
                    FUN_1086a4624(&plStack_3f0,plVar16,appppuStack_898,plStack_e0,param_1 + 0x48);
                    plVar18 = &lStack_140;
                    func_0x0001086a9b44(plVar18,&plStack_3f0);
                    func_0x0001087eb804();
                  }
                }
                goto LAB_1087eaaf0;
              }
              if ((int)param_2[0x21] != 0) goto LAB_1087eaa58;
              FUN_108864abc(&plStack_3f0,*plVar16,param_2 + 6);
              FUN_1087eb63c(&plStack_240,&plStack_3f0);
              func_0x000107c28fcc(&plStack_3f0);
              if ((bStack_170 & 1) != 0) {
                plVar18 = (long *)acStack_880;
                FUN_1086dd1d8(plVar18,auStack_218,*plVar16 + 0x40);
                func_0x0001087eb814();
                goto LAB_1087eaa58;
              }
              func_0x0001087eb814();
            }
            func_0x00010867b9fc(&lStack_140);
          }
          func_0x0001087eb7e8();
          func_0x0001087eb700(&plStack_120);
        }
        func_0x0001086d73d8(auStack_c8);
      }
      else {
        plVar18 = *(long **)(param_1 + 0xe8);
        if (((((plVar18 != (long *)0x0) && (-1 < param_2[0x17])) &&
             ((char)param_2[0x29] == '\x01' && (int)param_2[0x28] == 4)) &&
            ((lVar12 = param_2[0x27], *(long *)(lVar12 + 0x38) == param_2[0x17] &&
             (*(int *)(lVar12 + 0x70) == 3)))) &&
           (lVar12 = *(long *)(lVar12 + 0x60), (*(byte *)(lVar12 + 0x11) >> 6 & 1) != 0)) {
          (**(code **)(*plVar18 + 0x20))
                    (plVar18,param_2 + 0xe,*(undefined8 *)(lVar12 + 0xd8),
                     (long)*(int *)(lVar12 + 0x20),0x2e0130);
        }
      }
      FUN_108864c04(*plVar16,param_2 + 6);
      func_0x0001087eb80c(*plVar16);
    }
    else if (*param_2 == lVar12) {
LAB_1087ea6f4:
      FUN_108864c04(*plVar16,param_2 + 6);
      func_0x0001087eb80c(*plVar16);
      func_0x0001087eb824(*plVar16);
      func_0x000107c29f64();
      if (bStack_6c8 == 1) {
        uStack_3e8 = 0;
        plStack_3f0 = (long *)0x0;
        uStack_3e0 = 0;
        uStack_238 = 0;
        plStack_240 = (long *)0x0;
        lStack_230 = 0;
        (**(code **)**(undefined8 **)(param_1 + 0x38))
                  (*(undefined8 **)(param_1 + 0x38),param_2 + 0xe,appppuStack_898,1,&plStack_3f0,
                   &plStack_240);
        func_0x000104be1274(&plStack_240);
        func_0x0001087eb804();
        if ((int)param_2[0x1a] == 0x19) {
          (**(code **)(**(long **)(param_1 + 0x98) + 0xd0))
                    (*(long **)(param_1 + 0x98),param_2 + 0xe,auStack_460);
          FUN_108868114(*plVar16,param_2 + 0xe);
        }
        else {
          (**(code **)(**(long **)(param_1 + 0x98) + 0x40))
                    (*(long **)(param_1 + 0x98),param_2 + 0xe,param_2 + 0x11);
        }
      }
      func_0x0001087eb7e8();
      iVar15 = 7;
    }
    else {
      if ((uVar5 & 0xfffffffe) == 4) {
        uVar17 = 0;
      }
      else {
        if (((int)param_2[0x1a] != 10) || (uVar5 < 8 && (1 << (ulong)(uVar5 & 0x1f) & 0xc1U) != 0))
        goto LAB_1087ea6f4;
        uVar17 = 3;
      }
      FUN_108864abc(appppuStack_898,*plVar16,param_2 + 6);
      FUN_1087eb63c(&plStack_3f0,appppuStack_898);
      func_0x000107c28fcc(appppuStack_898);
      if (cStack_320 == '\x01') {
        FUN_1088605f8(*plVar16,param_2 + 6,uVar17);
      }
      else {
        func_0x0001087eb80c(*plVar16);
        iVar15 = 7;
      }
      func_0x000107c28f88(&plStack_3f0);
    }
    func_0x000107c31428(auStack_460);
    func_0x000107c31424(auStack_460);
    lVar12 = *param_2;
    lVar14 = param_2[1];
    if ((lVar12 == lVar14) ||
       (lVar3 = *(long *)(lVar14 + -0x10), *(long *)(lVar14 + -0x18) == lVar3)) {
      if (iVar15 != 7) {
        iVar10 = 7;
        goto LAB_1087eb018;
      }
    }
    else {
      iVar10 = *(int *)(lVar3 + -0x6c);
      if (iVar15 != iVar10) {
        *(int *)(lVar3 + -0x6c) = iVar15;
LAB_1087eb018:
        (**(code **)(**(long **)(param_1 + 0x88) + 0x30))(*(long **)(param_1 + 0x88),iVar10,iVar15);
        lVar12 = *param_2;
      }
    }
  }
  plVar16 = *(long **)(param_1 + 0xf8);
  lVar14 = param_2[1];
  if (lVar12 == lVar14) {
    lVar12 = *(long *)(lVar14 + -0x10);
  }
  else {
    lVar12 = *(long *)(lVar14 + -0x10);
    if ((*(long *)(lVar14 + -0x18) != lVar12) && (*(int *)(lVar12 + -0x6c) != 7))
    goto LAB_1087eb098;
  }
  if ((*(char *)(lVar12 + -0x24) != '\x01' || *(int *)(lVar12 + -0x28) != 2) &&
     ((**(code **)(*plVar16 + 0x18))(plVar16,param_2 + 0xe), (int)plVar16 != 0)) {
    *(undefined4 *)(lVar12 + -0x28) = 2;
    *(undefined1 *)(lVar12 + -0x24) = 1;
  }
LAB_1087eb098:
  func_0x000107c28288(&uStack_490);
  lVar12 = param_2[1];
  puVar9 = &uStack_490;
  FUN_1087b023c(puVar9);
  auStack_4e8[0] = 0;
  uStack_4d0 = 0;
  FUN_1087e2a4c(param_1 + 8,param_1 + 0x88,param_2 + 3,lVar12 + -0x18,puVar9,1,auStack_4e8);
  func_0x000107c279dc(auStack_4e8);
  lVar12 = param_2[1];
  lVar14 = *(long *)(lVar12 + -0x10);
  plStack_3f0 = *(long **)(lVar14 + -0x28);
  if ((*param_2 == lVar12) || (*(long *)(lVar12 + -0x18) == lVar14)) {
    uVar11 = 7;
  }
  else {
    uVar11 = *(undefined4 *)(lVar14 + -0x6c);
  }
  appppuStack_898[0] = (undefined8 ****)param_2[0x2d];
  (**(code **)(**(long **)(param_1 + 0x88) + 0x20))
            (*(long **)(param_1 + 0x88),appppuStack_898,uVar11,&plStack_3f0);
  plVar16 = *(long **)(param_1 + 0x78);
  func_0x000107c27994(auStack_8b0,param_2 + 6);
  auStack_c40[0] = 0;
  uStack_8b8 = 0;
  FUN_10864094c(appppuStack_898,auStack_8b0,1,auStack_c40);
  lVar12 = param_2[1];
  if ((*param_2 == lVar12) || (*(long *)(lVar12 + -0x18) == *(long *)(lVar12 + -0x10))) {
    uVar11 = 7;
  }
  else {
    uVar11 = *(undefined4 *)(*(long *)(lVar12 + -0x10) + -0x6c);
  }
  (**(code **)(*plVar16 + 0x20))(plVar16,appppuStack_898,uVar11);
  FUN_108798a4c(appppuStack_898);
  func_0x00010863f788(auStack_c40);
  func_0x000107c27914(auStack_8b0);
  return;
}



/* Entry: 1087eb610; end: 1087eb63b;  */

long FUN_1087eb610(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  if ((*(int *)(param_1 + 0x80) == 6) &&
     ((*(byte *)(*(long *)(param_1 + 0x78) + 0x10) >> 1 & 1) != 0)) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x78) + 0x20);
    plVar2 = &lStack_40;
    plVar3 = &lStack_40;
    lStack_40 = param_1;
    lStack_38 = lVar4;
    func_0x0001006933dc();
    lVar1 = lVar4;
    func_0x0001006933dc();
    lVar5 = param_1;
    func_0x000100693428(&lStack_40);
    func_0x000100693428(&lStack_40);
    func_0x000100693448(lVar4,lVar1 + param_1,plVar2,(undefined1 *)((long)plVar3 + lVar5));
    return lVar4;
  }
  return 0;
}



/* Entry: 1087eb63c; end: 1087eb6e7;  */

void FUN_1087eb63c(undefined1 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 uVar2;
  undefined1 auStack_1f0 [224];
  long lStack_110;
  undefined1 auStack_108 [208];
  char cStack_38;
  
  func_0x000107c28ee8(&lStack_110,param_2);
  _bzero(auStack_1f0,0xe0);
  if (cStack_38 == '\x01') {
    func_0x0001087eb81c();
    if (lStack_110 != 0) {
      plVar1 = &lStack_110;
      FUN_1086a10f8(plVar1);
      FUN_1086ad844(param_1,plVar1);
      uVar2 = 1;
      goto LAB_1087eb6b4;
    }
  }
  else {
    func_0x0001087eb81c();
  }
  uVar2 = 0;
  *param_1 = 0;
LAB_1087eb6b4:
  param_1[0xd0] = uVar2;
  func_0x000107c28f88(auStack_108);
  return;
}



/* Entry: 1087eb6e8; end: 1087eb6eb;  */

undefined8 * FUN_1087eb6e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a726e8;
  func_0x000107c297ac(param_1 + 0x1f);
  func_0x000107c29118(param_1 + 0x1d);
  func_0x000107c28cc8(param_1 + 0x1b);
  func_0x000107c29134(param_1 + 0x19);
  func_0x000107c28ebc(param_1 + 0x17);
  func_0x000107c2917c(param_1 + 0x15);
  func_0x000107c28ab4(param_1 + 0x13);
  func_0x000107c29a48(param_1 + 0x11);
  func_0x000107c29958(param_1 + 0xf);
  func_0x000107c299b8(param_1 + 0xd);
  func_0x000107c29194(param_1 + 0xb);
  func_0x000107c28ec0(param_1 + 9);
  func_0x000107c28ab8(param_1 + 7);
  func_0x000107c2814c(param_1 + 5);
  func_0x000107c28808(param_1 + 3);
  func_0x000107c28800(param_1 + 1);
  return param_1;
}



/* Entry: 1087eb6ec; end: 1087eb71f;  */

void FUN_1087eb6ec(void)

{
  FUN_1087eb720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


