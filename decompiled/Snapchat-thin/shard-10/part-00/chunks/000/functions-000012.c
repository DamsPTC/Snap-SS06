/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10733d5a8; end: 10733d5bb;  */

void FUN_10733d5a8(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    func_0x000107268464();
    func_0x000107347c48();
    return;
  }
  return;
}



/* Entry: 10733d5bc; end: 10733d5d3;  */

void FUN_10733d5bc(void)

{
  func_0x000107268464();
  func_0x000107347c48();
  return;
}



/* Entry: 10733d5d4; end: 10733d5fb;  */

void FUN_10733d5d4(void)

{
  undefined1 in_ZR;
  
  func_0x0001073455c4();
  if ((bool)in_ZR) {
    FUN_10733d014();
  }
  return;
}



/* Entry: 10733d5fc; end: 10733d653;  */

void FUN_10733d5fc(void)

{
  undefined1 in_ZR;
  
  func_0x0001073446e8();
  func_0x000107344ab4();
  FUN_107323db4();
  func_0x00010734661c();
  func_0x000107345c90();
  func_0x0001073461c8();
  func_0x000107345b64();
  func_0x0001073446ac();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107345d9c();
  func_0x000107345b64();
  func_0x000107345604();
  func_0x000107345708();
  FUN_10733db24();
  return;
}



/* Entry: 10733d654; end: 10733d693;  */

void FUN_10733d654(void)

{
  func_0x000107345708();
  FUN_10733db24();
  return;
}



/* Entry: 10733d694; end: 10733d92b;  */

undefined1 * FUN_10733d694(long param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  long unaff_x21;
  undefined4 uVar5;
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined8 auStack_160 [2];
  ulong auStack_150 [2];
  ulong auStack_140 [2];
  ulong uStack_130;
  undefined1 auStack_120 [56];
  undefined1 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [56];
  undefined1 uStack_a0;
  undefined8 uStack_98;
  int iStack_60;
  undefined8 uStack_58;
  
  puVar4 = auStack_190;
  func_0x000107345878();
  func_0x0001073447e0();
  auStack_140[0] = 0;
  auStack_140[1] = 0;
  uStack_130 = 0;
  uStack_58 = extraout_x8;
  if ((*(int *)(param_1 + 0x50) == 0) || (func_0x000107347530(), (bool)in_ZR)) {
    func_0x000107347878();
  }
  else {
    auStack_d8[0] = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_120,auStack_140);
    func_0x0001073462bc(auStack_178);
    func_0x000107347104();
    func_0x000107347210();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_140);
  FUN_10733dbb4(auStack_160);
  if (*(int *)(unaff_x21 + 0x98) == 0) {
    puVar3 = auStack_160;
  }
  else {
    puVar3 = (undefined8 *)(unaff_x21 + 0x58);
    in_ZR = *(int *)(unaff_x21 + 0x98) == 1;
    if (!(bool)in_ZR) {
      auStack_120[0] = 0;
      uStack_e8 = 0;
      uStack_e0 = 0;
      FUN_10733dbc0(auStack_150,auStack_160);
      func_0x000107753050(auStack_d8,*puVar3);
      if (iStack_60 == 1) {
        func_0x00010727f7dc(auStack_d8);
        func_0x000107776ff8(auStack_140);
      }
      else {
        auStack_140[0] = auStack_140[0] & 0xffffffffffffff00;
        uStack_130 = uStack_130 & 0xffffffffffffff00;
      }
      func_0x000107345840(auStack_d8);
      puVar1 = (ulong *)(unaff_x21 + 0x80);
      if (*(char *)(unaff_x21 + 0x90) == '\0') {
        puVar1 = auStack_150;
      }
      in_ZR = (char)uStack_130 == '\0';
      puVar2 = auStack_140;
      if ((bool)in_ZR) {
        puVar2 = puVar1;
      }
      FUN_10733dbc0(auStack_190,puVar2);
      FUN_10733daa4(auStack_140);
      FUN_10733d9dc(auStack_150);
      func_0x00010724b3d8(auStack_120);
      goto LAB_10733d7f0;
    }
  }
  FUN_10733dbc0(auStack_190,puVar3);
LAB_10733d7f0:
  puVar3 = auStack_160;
  FUN_10733d9dc();
  if (*(int *)(unaff_x21 + 0xd0) == 0) {
    uVar5 = 0;
  }
  else {
    puVar3 = (undefined8 *)(unaff_x21 + 0xa0);
    in_ZR = *(int *)(unaff_x21 + 0xd0) == 1;
    if ((bool)in_ZR) {
      uVar5 = *(undefined4 *)puVar3;
    }
    else {
      auStack_d8[0] = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
      uVar5 = 0;
      func_0x00010727f6f4();
      func_0x000107347210();
    }
  }
  func_0x000107347180();
  func_0x000107346518();
  *(undefined4 *)(puVar3 + 6) = uVar5;
  func_0x0001073467f0(&PTR_DAT_1109a2480);
  FUN_10733d9dc();
  func_0x000107346154();
  func_0x0001073447cc(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107345840(auStack_d8);
    FUN_10733d9dc(auStack_150);
    func_0x00010724b3d8(auStack_120);
    FUN_10733d9dc(auStack_160);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_178);
    func_0x000107345604();
    func_0x000107344d34();
    FUN_10733d950();
    return puVar4;
  }
  return puVar4;
}



/* Entry: 10733d92c; end: 10733d94f;  */

void FUN_10733d92c(void)

{
  func_0x000107344d34();
  FUN_10733d950();
  return;
}



/* Entry: 10733d950; end: 10733d98f;  */

void FUN_10733d950(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined4 unaff_w21;
  
  func_0x000107345658();
  FUN_10733d990();
  func_0x0001073463a8();
  if (!(bool)in_ZR) {
    func_0x0001073448fc(&PTR_FUN_1109a2458);
    *(undefined4 *)(unaff_x19 + 0x40) = unaff_w21;
  }
  return;
}



/* Entry: 10733d990; end: 10733d9c7;  */

void FUN_10733d990(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x000107346090();
  if (!(bool)in_ZR) {
    func_0x000107344d8c((&PTR_FUN_1109a2440)[extraout_x8]);
  }
  func_0x00010734765c();
  return;
}



/* Entry: 10733d9c8; end: 10733d9db;  */

void FUN_10733d9c8(void)

{
  return;
}



/* Entry: 10733d9dc; end: 10733da23;  */

void FUN_10733d9dc(long param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = param_1;
  FUN_10733da24();
  if ((lVar1 == 1) && (func_0x0001073464b0(), extraout_x8 != 0)) {
    func_0x000107346aa8();
    func_0x000107346e70();
    func_0x000107346e68();
  }
  FUN_10733da60(param_1);
  return;
}



/* Entry: 10733da24; end: 10733da5f;  */

long FUN_10733da24(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1[1] == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1[1] + 8) + 1;
  }
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 0x28);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return lVar4;
}



/* Entry: 10733da60; end: 10733daa3;  */

void FUN_10733da60(long param_1)

{
  func_0x000107345acc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10733daa4; end: 10733dac3;  */

void FUN_10733daa4(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_10733d9dc();
  }
  return;
}



/* Entry: 10733dac4; end: 10733dad7;  */

void FUN_10733dac4(void)

{
  return;
}



/* Entry: 10733dad8; end: 10733dafb;  */

void FUN_10733dad8(void)

{
  func_0x00010734559c();
  func_0x0001073470f0();
  FUN_10733dafc();
  return;
}



/* Entry: 10733dafc; end: 10733db23;  */

void FUN_10733dafc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (*(char *)(param_2 + 2) == '\x01') {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}



/* Entry: 10733db24; end: 10733dbb3;  */

long FUN_10733db24(long param_1)

{
  func_0x000107266a30(param_1 + 0x98);
  FUN_10733d990(param_1 + 0x50);
  func_0x0001073461dc();
  return param_1;
}



/* Entry: 10733dbb4; end: 10733dbbf;  */

void FUN_10733dbb4(undefined8 *param_1)

{
  int iVar1;
  long extraout_x8;
  int extraout_w10;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((bRam00000001131ad390 & 1) == 0) {
    iVar1 = 0x131ad390;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10733dca8(0x1131ad380);
      ___cxa_guard_release(0x1131ad390);
    }
  }
  func_0x00010734741c();
  if (extraout_x8 != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10733dbc0; end: 10733dbdf;  */

void FUN_10733dbc0(void)

{
  func_0x000107347740();
  FUN_10733dbe0();
  return;
}



/* Entry: 10733dbe0; end: 10733dc23;  */

void FUN_10733dbe0(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10 != 0);
  }
  if (*param_2 != 0) {
    piVar1 = (int *)(*param_2 + 0x28);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 10733dc24; end: 10733dca7;  */

void FUN_10733dc24(void)

{
  int iVar1;
  long extraout_x8;
  int extraout_w10;
  
  if ((bRam00000001131ad390 & 1) == 0) {
    iVar1 = 0x131ad390;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10733dca8(0x1131ad380);
      ___cxa_guard_release(0x1131ad390);
    }
  }
  func_0x00010734741c();
  if (extraout_x8 != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10733dca8; end: 10733dcc3;  */

void FUN_10733dca8(void)

{
  undefined1 uStack_11;
  
  FUN_10733dcc4(&uStack_11);
  return;
}



/* Entry: 10733dcc4; end: 10733dd2f;  */

void FUN_10733dcc4(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  
  func_0x0001073447e0();
  func_0x000107346378();
  FUN_10733dd30();
  func_0x000107347fbc();
  func_0x000107347710();
  *(undefined8 *)(extraout_x8_00 + 0x40) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x38) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x20) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x18) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x30) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x28) = 0;
  *(undefined4 *)(extraout_x8_00 + 0x38) = 0x3f800000;
  func_0x000107344a14();
  func_0x00010733de30();
  func_0x0001073447cc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x000107346404();
  FUN_10733dd50();
  func_0x0001073465ec();
  return;
}



/* Entry: 10733dd30; end: 10733dd4f;  */

void FUN_10733dd30(void)

{
  func_0x000107346404();
  FUN_10733dd50();
  func_0x0001073465ec();
  return;
}



/* Entry: 10733dd50; end: 10733dd6f;  */

void FUN_10733dd50(undefined8 param_1,long param_2)

{
  undefined1 in_CY;
  undefined8 *unaff_x30;
  
  func_0x000107348088();
  if (!(bool)in_CY) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x48);
    return;
  }
  func_0x000104bd35f4();
  *unaff_x30 = &PTR_FUN_1109a33e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10733dd70; end: 10733dd73;  */

void FUN_10733dd70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a33e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10733dd74; end: 10733dd87;  */

void FUN_10733dd74(void)

{
  func_0x00010733dd94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10733dd88; end: 10733dd9f;  */

undefined8 FUN_10733dd88(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107347300(param_1 + 0x18);
  func_0x00010733ddc4();
  func_0x000107346294();
  FUN_10733de18();
  return unaff_x19;
}



/* Entry: 10733dda0; end: 10733de17;  */

undefined8 FUN_10733dda0(void)

{
  undefined8 unaff_x19;
  
  func_0x000107347300();
  func_0x00010733ddc4();
  func_0x000107346294();
  FUN_10733de18();
  return unaff_x19;
}



/* Entry: 10733de18; end: 10733de3f;  */

void FUN_10733de18(long *param_1)

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



/* Entry: 10733de40; end: 10733de5b;  */

void FUN_10733de40(void)

{
  func_0x000107344fd4();
  FUN_1075351f4();
  return;
}



/* Entry: 10733de5c; end: 10733deb3;  */

void FUN_10733de5c(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  uint unaff_w21;
  
  func_0x000107344d34();
  FUN_10733d990();
  func_0x0001073463a8();
  if (!(bool)in_ZR) {
    func_0x000107344c48((&PTR_FUN_1109a24f0)[unaff_w21]);
    *(uint *)(unaff_x19 + 0x40) = unaff_w21;
  }
  return;
}



/* Entry: 10733deb4; end: 10733debf;  */

void FUN_10733deb4(void)

{
  return;
}



/* Entry: 10733dec0; end: 10733dee7;  */

void FUN_10733dec0(void)

{
  func_0x000107345bd8();
  func_0x000107347f50();
  FUN_10733dee8();
  return;
}



/* Entry: 10733dee8; end: 10733df13;  */

void FUN_10733dee8(void)

{
  func_0x0001073456d0();
  FUN_10733df14();
  return;
}



/* Entry: 10733df14; end: 10733df27;  */

void FUN_10733df14(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_10733dbc0();
    func_0x000107347c48();
    return;
  }
  return;
}



/* Entry: 10733df28; end: 10733df3f;  */

void FUN_10733df28(void)

{
  FUN_10733dbc0();
  func_0x000107347c48();
  return;
}



/* Entry: 10733df40; end: 10733dfa7;  */

void FUN_10733df40(void)

{
  undefined1 in_ZR;
  
  func_0x0001073455c4();
  if ((bool)in_ZR) {
    FUN_10733d990();
  }
  return;
}



/* Entry: 10733dfa8; end: 10733e113;  */

undefined1 * FUN_10733dfa8(long param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long unaff_x21;
  undefined8 *puVar2;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  puVar1 = auStack_e0;
  func_0x000107345878();
  func_0x0001073447e0();
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  if ((*(int *)(param_1 + 0x50) == 0) || (func_0x000107347530(), (bool)in_ZR)) {
    func_0x000107347878();
  }
  else {
    func_0x000107346670();
    func_0x0001073475fc();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
    func_0x0001073462bc(auStack_c8);
    func_0x000107347048();
    func_0x00010734614c();
  }
  func_0x000107345f54();
  FUN_10733e198(&uStack_b0);
  if (*(int *)(unaff_x21 + 0x98) == 0) {
    puVar2 = &uStack_b0;
  }
  else {
    puVar2 = (undefined8 *)(unaff_x21 + 0x58);
    in_ZR = *(int *)(unaff_x21 + 0x98) == 1;
    if (!(bool)in_ZR) {
      func_0x000107346670();
      func_0x0001073475fc();
      FUN_10733c45c();
      func_0x00010734671c(auStack_e0);
      FUN_10733c4c0();
      func_0x000107347050();
      func_0x00010734614c();
      goto LAB_10733e070;
    }
  }
  FUN_10733c45c(auStack_e0,puVar2);
LAB_10733e070:
  FUN_10733c27c(&uStack_b0);
  __Znwm(0x30);
  func_0x000107346518();
  func_0x0001073467f0(&PTR_DAT_1109a25a0);
  FUN_10733c27c();
  func_0x000107346154();
  func_0x0001073446ac();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107347050();
    func_0x00010734614c();
    FUN_10733c27c(&uStack_b0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
    func_0x000107345604();
    func_0x000107348008();
    FUN_10733c230();
    func_0x0001073461dc();
    return puVar1;
  }
  return puVar1;
}



/* Entry: 10733e114; end: 10733e197;  */

void FUN_10733e114(void)

{
  func_0x000107348008();
  FUN_10733c230();
  func_0x0001073461dc();
  return;
}



/* Entry: 10733e198; end: 10733e19f;  */

void FUN_10733e198(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  func_0x000107347740();
  FUN_10733c5b4();
  return;
}



/* Entry: 10733e1a0; end: 10733e1df;  */

void FUN_10733e1a0(void)

{
  func_0x000107345708();
  FUN_10733e414();
  return;
}



/* Entry: 10733e1e0; end: 10733e413;  */

void FUN_10733e1e0(void)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long unaff_x21;
  byte bVar3;
  ulong uVar4;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [56];
  undefined1 auStack_100 [56];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_90 [72];
  undefined8 uStack_48;
  
  func_0x000107345878();
  func_0x0001073447e0();
  uStack_48 = extraout_x8;
  FUN_10733e550(auStack_90);
  func_0x0001073479f0(&uStack_150);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  FUN_10733e550(auStack_100);
  if (*(int *)(unaff_x21 + 200) == 0) {
    puVar2 = auStack_100;
  }
  else {
    in_ZR = *(int *)(unaff_x21 + 200) == 1;
    if (!(bool)in_ZR) {
      func_0x000107345f7c();
      func_0x000104c2fe00(&uStack_c8,auStack_100);
      FUN_1073393c0(auStack_138,unaff_x21 + 0x60);
      func_0x0001073462e0();
      func_0x000107345e40();
      goto LAB_10733e284;
    }
    puVar2 = (undefined1 *)(unaff_x21 + 0x60);
  }
  func_0x000104c2fe00(auStack_138,puVar2);
LAB_10733e284:
  func_0x000104c2f714(auStack_100);
  if (*(int *)(unaff_x21 + 0x100) == 0) {
    bVar3 = 0;
  }
  else {
    in_ZR = *(int *)(unaff_x21 + 0x100) == 1;
    if ((bool)in_ZR) {
      bVar3 = *(byte *)(unaff_x21 + 0xd0);
    }
    else {
      func_0x000107345f7c();
      bVar3 = (char)unaff_x21 - 0x30;
      func_0x000107346458();
      func_0x000107345e40();
    }
  }
  uVar1 = *(uint *)(unaff_x21 + 0x148);
  uVar4 = (ulong)uVar1;
  if (uVar1 != 0) {
    in_ZR = uVar1 == 1;
    if ((bool)in_ZR) {
      uVar4 = *(ulong *)(unaff_x21 + 0x110);
    }
    else {
      func_0x000107345f7c();
      uVar4 = unaff_x21 + 0x110;
      FUN_10733b268();
      func_0x000107345e40();
    }
  }
  func_0x00010733e558(auStack_90);
  func_0x0001073479f0(&uStack_c8);
  puVar2 = auStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x000107345fdc();
  *(undefined8 *)(puVar2 + 0x10) = uStack_148;
  *(undefined8 *)(puVar2 + 8) = uStack_150;
  *(undefined8 *)(puVar2 + 0x18) = uStack_140;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_150 = 0;
  func_0x000104c318bc(puVar2 + 0x20,auStack_138);
  puVar2[0x58] = bVar3 & 1;
  *(ulong *)(puVar2 + 0x5c) = uVar4 & 0xffffffffff;
  *(undefined8 *)(puVar2 + 0x70) = uStack_c0;
  *(undefined8 *)(puVar2 + 0x68) = uStack_c8;
  *(undefined8 *)(puVar2 + 0x78) = uStack_b8;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  func_0x000107347f24(&PTR_DAT_1109a26a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_c8);
  func_0x000107347884();
  func_0x000107345944();
  func_0x0001073447cc(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073462e0();
  func_0x000107345e40();
  func_0x000104c2f714(auStack_100);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_150);
  do {
    func_0x000107345604();
  } while( true );
}



/* Entry: 10733e414; end: 10733e4bf;  */

long FUN_10733e414(long param_1)

{
  func_0x00010727e9d0(param_1 + 0x148);
  FUN_10733abd8(param_1 + 0x108);
  func_0x00010727fc1c(param_1 + 200);
  FUN_10732442c(param_1 + 0x58);
  func_0x0001073461dc();
  return param_1;
}



/* Entry: 10733e4c0; end: 10733e54f;  */

long FUN_10733e4c0(long param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  char *pcVar2;
  long lVar3;
  
  lVar3 = param_3;
  func_0x00010734479c();
  uVar1 = *(int *)(lVar3 + 0x48) == 1;
  if ((bool)uVar1) {
    func_0x0001073446ac();
    if ((bool)uVar1) {
      func_0x000107345ba8();
LAB_10733e508:
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)();
      return param_1;
    }
  }
  else if (*(int *)(lVar3 + 0x48) == 0) {
    func_0x0001073446ac();
    if ((bool)uVar1) {
      func_0x000107346afc();
      goto LAB_10733e508;
    }
  }
  else {
    func_0x000107346590();
    func_0x0001073465c0();
    func_0x000107345380();
    func_0x000107345728();
    func_0x00010734622c();
    func_0x0001073446ac();
    if ((bool)uVar1) {
      return param_1;
    }
  }
  ___stack_chk_fail();
  func_0x000107345728();
  func_0x00010734622c();
  func_0x000107345604();
  pcVar2 = "";
  func_0x00010002b82c();
  func_0x000107c613d0(pcVar2);
  func_0x000107c60c50(param_3,param_1,pcVar2);
  return param_3;
}



/* Entry: 10733e550; end: 10733e55b;  */

void FUN_10733e550(undefined8 param_1)

{
  char *pcVar1;
  
  pcVar1 = "";
  func_0x00010002b82c(param_1,"");
  func_0x000107c613d0(pcVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 10733e55c; end: 10733e5bb;  */

void FUN_10733e55c(undefined8 param_1)

{
  undefined1 auStack_a0 [88];
  undefined1 auStack_48 [24];
  
  func_0x00010734523c();
  func_0x0001073466c8();
  func_0x0001073451fc();
  func_0x00010734520c(auStack_a0,param_1,auStack_48);
  FUN_107339f78();
  func_0x00010734736c();
  func_0x0001073470fc();
  func_0x000107346ab8();
  func_0x000107345c88();
  return;
}



/* Entry: 10733e5bc; end: 10733e5d7;  */

void FUN_10733e5bc(void)

{
  func_0x0001073446c4();
  FUN_10755510c();
  return;
}



/* Entry: 10733e5d8; end: 10733e63f;  */

void FUN_10733e5d8(void)

{
  undefined1 in_ZR;
  
  func_0x000107346978();
  if ((bool)in_ZR) {
    func_0x00010727fc1c();
  }
  return;
}



/* Entry: 10733e640; end: 10733e76f;  */

undefined8 * FUN_10733e640(void)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 auStack_b0 [16];
  
  func_0x000107345878();
  func_0x0001073447e0();
  FUN_10733e550(auStack_b0);
  if (*(int *)(unaff_x21 + 0x50) == 0) {
    puVar1 = auStack_b0;
  }
  else {
    func_0x000107347530();
    puVar1 = unaff_x22;
    if (!(bool)in_ZR) {
      func_0x000107346660();
      func_0x000107346548();
      func_0x0001073473cc();
      func_0x0001073462bc();
      func_0x000107346540();
      func_0x0001073461b8();
      goto LAB_10733e6a8;
    }
  }
  unaff_x22 = &uStack_c8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(unaff_x22,puVar1);
LAB_10733e6a8:
  func_0x000107347b40();
  if (*(int *)(unaff_x21 + 0x88) == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    in_ZR = *(int *)(unaff_x21 + 0x88) == 1;
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)(ulong)*(byte *)(unaff_x21 + 0x58);
    }
    else {
      func_0x000107346660();
      puVar1 = (undefined8 *)(unaff_x21 + 0x58);
      func_0x000107346458();
      unaff_x22 = puVar1;
      func_0x0001073461b8();
    }
  }
  func_0x000107346180();
  unaff_x22[2] = uStack_c0;
  unaff_x22[1] = uStack_c8;
  unaff_x22[3] = uStack_b8;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_c8 = 0;
  *(byte *)(unaff_x22 + 4) = (byte)puVar1 & 1;
  func_0x0001073454dc(&PTR_DAT_1109a27b0);
  func_0x0001073446ac();
  if ((bool)in_ZR) {
    return unaff_x22;
  }
  ___stack_chk_fail();
  func_0x0001073461b8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_c8);
  func_0x000107345604();
  func_0x000107348008();
  func_0x00010727fc1c();
  func_0x0001073461dc();
  return unaff_x22;
}



/* Entry: 10733e770; end: 10733e80b;  */

void FUN_10733e770(void)

{
  func_0x000107348008();
  func_0x00010727fc1c();
  func_0x0001073461dc();
  return;
}



/* Entry: 10733e80c; end: 10733e8fb;  */

void FUN_10733e80c(undefined4 *param_1)

{
  undefined1 in_ZR;
  undefined4 *puVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = param_1;
  func_0x0001073447e0();
  if (puVar1[0xe] == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    in_ZR = puVar1[0xe] == 1;
    if ((bool)in_ZR) {
      puVar2 = (undefined4 *)(ulong)*(byte *)(param_1 + 2);
    }
    else {
      func_0x000107345920();
      puVar2 = param_1 + 2;
      func_0x000107346458();
      puVar1 = puVar2;
      func_0x000107345e18();
    }
  }
  if (param_1[0x1c] == 0) {
    uVar3 = 0x418553f8;
  }
  else {
    puVar1 = param_1 + 0x10;
    in_ZR = param_1[0x1c] == 1;
    if ((bool)in_ZR) {
      uVar3 = *puVar1;
    }
    else {
      func_0x000107345920();
      uVar3 = *(undefined4 *)(extraout_x8_00 + 0x51c);
      func_0x00010727f6f4();
      func_0x000107345e18();
    }
  }
  func_0x000107345a98();
  *(byte *)(puVar1 + 2) = (byte)puVar2 & 1;
  puVar1[3] = uVar3;
  func_0x0001073467f0(&PTR_FUN_1109a28b8);
  func_0x0001073447cc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073451b4();
  func_0x000107345604();
  func_0x000107346a38();
  func_0x000107266a30();
  func_0x00010727fc1c();
  return;
}



/* Entry: 10733e8fc; end: 10733e923;  */

void FUN_10733e8fc(void)

{
  func_0x000107346a38();
  func_0x000107266a30();
  func_0x00010727fc1c();
  return;
}



/* Entry: 10733e924; end: 10733e92b;  */

void FUN_10733e924(void)

{
  return;
}



/* Entry: 10733e92c; end: 10733e96b;  */

void FUN_10733e92c(void)

{
  func_0x000107345708();
  func_0x00010727e9d0();
  return;
}



/* Entry: 10733e96c; end: 10733ea1f;  */

undefined8 FUN_10733e96c(undefined8 param_1)

{
  undefined1 in_ZR;
  int extraout_w8;
  undefined1 auStack_b0 [128];
  
  func_0x0001073447e0();
  func_0x000107347d18();
  if ((extraout_w8 == 0) || (in_ZR = extraout_w8 == 1, (bool)in_ZR)) {
    func_0x0001073465b4();
  }
  else {
    func_0x000107346660();
    func_0x000107346548();
    func_0x0001073473cc();
    func_0x0001073461d0();
    func_0x00010727f9d8();
    func_0x000107346540();
    func_0x0001073461b8();
  }
  func_0x000107347b40();
  func_0x000107345c64();
  func_0x000107347138();
  func_0x0001073454dc(&PTR_FUN_1109a29b0);
  func_0x0001073446ac();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107346540();
    func_0x0001073461b8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
    func_0x000107345604();
    func_0x0001073455b8();
    return param_1;
  }
  return param_1;
}



/* Entry: 10733ea20; end: 10733ea77;  */

void FUN_10733ea20(void)

{
  func_0x0001073455b8();
  return;
}



/* Entry: 10733ea78; end: 10733ea83;  */

void FUN_10733ea78(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x000107345150();
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



/* Entry: 10733ea84; end: 10733eaf7;  */

void FUN_10733ea84(long param_1)

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



/* Entry: 10733eaf8; end: 10733eaff;  */

void FUN_10733eaf8(void)

{
  return;
}



/* Entry: 10733eb00; end: 10733eb27;  */

void FUN_10733eb00(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001073450c0();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_1109a2a30;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10733eb28; end: 10733eb47;  */

void FUN_10733eb28(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109a2a30;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10733eb48; end: 10733ecbb;  */

void FUN_10733eb48(ulong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_188 [56];
  undefined1 uStack_150;
  undefined1 auStack_148 [176];
  undefined1 auStack_98 [40];
  char cStack_70;
  undefined1 auStack_68 [16];
  byte bStack_58;
  long alStack_50 [2];
  byte bStack_40;
  
  func_0x000107346eb4();
  func_0x000107344818();
  lVar4 = *(long *)(param_1 + 8);
  func_0x000107347154();
  func_0x0001073466f8(alStack_50);
  uVar2 = bStack_40 == 1;
  if (((bool)uVar2) &&
     (func_0x0001073460f8(*(undefined8 *)(alStack_50[0] + 0x30)), (param_1 & 1) != 0)) {
    if ((bStack_40 & 1) != 0) {
      puVar3 = auStack_68;
      FUN_1073232dc(puVar3,alStack_50,&UNK_10f40a857,0x1a);
      uVar2 = 0;
      if (bStack_58 == 1) {
        func_0x0001077f3c4c();
        func_0x0001077f3790();
        auStack_188[0] = 0;
        uStack_150 = 0;
        if ((bStack_58 & 1) == 0) {
          func_0x000104bdc2c8();
          goto LAB_10733ec74;
        }
        func_0x0001077b3ffc(auStack_148,puVar3 + 8,auStack_188,auStack_68);
        func_0x00010724b3d8(auStack_188);
        uVar2 = 0;
        if (cStack_70 == '\x01') {
          lVar4 = *(long *)(lVar4 + 0xd8);
          uVar2 = *(char *)(lVar4 + 0xd8) == '\x01';
          if ((bool)uVar2) {
            func_0x0001077b3fc8(lVar4 + 0xb0,auStack_98);
          }
          else {
            FUN_10733ecf0(lVar4,auStack_148);
          }
        }
        func_0x000107266948(auStack_148);
      }
      func_0x0001072f5f4c(auStack_68);
      goto LAB_10733ec48;
    }
  }
  else {
LAB_10733ec48:
    func_0x000107345cd8();
    func_0x0001073446ac();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x000104bdc2c8();
LAB_10733ec74:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10733ec78);
  (*pcVar1)();
}



/* Entry: 10733ecbc; end: 10733ece3;  */

void FUN_10733ecbc(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a2aa0);
  func_0x000107344bc4();
  return;
}



/* Entry: 10733ece4; end: 10733ecef;  */

undefined ** FUN_10733ece4(void)

{
  return &PTR_DAT_1109a2aa0;
}



/* Entry: 10733ecf0; end: 10733ed33;  */

void FUN_10733ecf0(long param_1)

{
  func_0x0001077b3ed4();
  *(undefined1 *)(param_1 + 0xd8) = 1;
  return;
}



/* Entry: 10733ed34; end: 10733eddf;  */

void FUN_10733ed34(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *extraout_x8;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  
  func_0x000107348074();
  func_0x000100a2b988();
  lVar5 = *param_1;
  lVar2 = param_1[1];
  lVar1 = *(long *)(param_2 + 8) + (lVar5 - lVar2);
  lVar6 = lVar1;
  for (lVar4 = lVar5; lVar4 != lVar2; lVar4 = lVar4 + 0x20) {
    lVar3 = *(long *)(lVar4 + 0x18);
    if (lVar3 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
    }
    else if (lVar4 == lVar3) {
      *(long *)(lVar6 + 0x18) = lVar6;
      func_0x000107345938(*(undefined8 *)(lVar4 + 0x18));
      (*extraout_x8)();
    }
    else {
      *(long *)(lVar6 + 0x18) = lVar3;
      *(undefined8 *)(lVar4 + 0x18) = 0;
    }
    lVar6 = lVar6 + 0x20;
  }
  for (; lVar5 != lVar2; lVar5 = lVar5 + 0x20) {
    FUN_10733ee44(lVar5);
  }
  *(long *)(unaff_x19 + 8) = lVar1;
  lVar4 = *unaff_x20;
  *unaff_x20 = lVar1;
  unaff_x20[1] = lVar4;
  func_0x000107344920();
  return;
}



/* Entry: 10733ede0; end: 10733edeb;  */

void FUN_10733ede0(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x000107345150();
  func_0x000107345658();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (unaff_x20 >> 0x3b != 0) {
      func_0x000104bd35f4();
      func_0x000107344e80();
      if ((bool)in_ZR) {
        uVar3 = 0x20;
      }
      else {
        if (param_1 == 0) {
          return;
        }
        uVar3 = 0x28;
      }
      func_0x000107344d70(uVar3);
      return;
    }
    lVar2 = unaff_x20 << 5;
    __Znwm();
  }
  lVar1 = lVar2 + param_3 * 0x20;
  *unaff_x19 = lVar2;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = lVar2 + unaff_x20 * 0x20;
  return;
}



/* Entry: 10733edec; end: 10733ee43;  */

void FUN_10733edec(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x000107345658();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (unaff_x20 >> 0x3b != 0) {
      func_0x000104bd35f4();
      func_0x000107344e80();
      if ((bool)in_ZR) {
        uVar3 = 0x20;
      }
      else {
        if (param_1 == 0) {
          return;
        }
        uVar3 = 0x28;
      }
      func_0x000107344d70(uVar3);
      return;
    }
    lVar2 = unaff_x20 << 5;
    __Znwm();
  }
  lVar1 = lVar2 + param_3 * 0x20;
  *unaff_x19 = lVar2;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = lVar2 + unaff_x20 * 0x20;
  return;
}



/* Entry: 10733ee44; end: 10733eeb7;  */

void FUN_10733ee44(long param_1)

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



/* Entry: 10733eeb8; end: 10733ef1b;  */

void FUN_10733eeb8(void)

{
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x20;
  
  func_0x000107346a00();
  if (unaff_x20 != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10 != 0);
  }
  func_0x00010734678c();
  func_0x000107345c64();
  func_0x000107347e84(&PTR_FUN_1109a2ac0);
  if (unaff_x20 != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010734558c();
  return;
}



/* Entry: 10733ef1c; end: 10733ef43;  */

undefined8 FUN_10733ef1c(undefined8 param_1)

{
  func_0x000107347198(&PTR_FUN_1109a2ac0);
  return param_1;
}



/* Entry: 10733ef44; end: 10733ef57;  */

void FUN_10733ef44(void)

{
  FUN_10733ef1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10733ef58; end: 10733ef77;  */

void FUN_10733ef58(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  long unaff_x19;
  undefined8 uVar3;
  
  func_0x000107345814();
  puVar1 = (undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_1109a2ac0;
  lVar2 = *(long *)(unaff_x19 + 0x10);
  uVar3 = *puVar1;
  param_1[2] = *(undefined8 *)(unaff_x19 + 0x10);
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10 != 0);
  }
  param_1[3] = puVar1[2];
  return;
}



/* Entry: 10733ef78; end: 10733ef97;  */

void FUN_10733ef78(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109a2ac0;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10 != 0);
  }
  param_2[3] = puVar1[2];
  return;
}



/* Entry: 10733ef98; end: 10733f077;  */

void FUN_10733ef98(long param_1)

{
  code *pcVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 *puVar3;
  undefined8 unaff_x19;
  undefined8 uVar4;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [24];
  undefined8 *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  byte bStack_40;
  
  func_0x000107346eb4();
  lVar2 = param_1;
  func_0x000107344818();
  uVar4 = *(undefined8 *)(lVar2 + 0x18);
  func_0x000107347154();
  func_0x0001073466f8(&lStack_50);
  func_0x000107347d44();
  if ((bool)in_ZR) {
    puVar3 = &uStack_48;
    (**(code **)(lStack_50 + 0x30))();
    if (((ulong)puVar3 & 1) != 0) {
      if ((bStack_40 & 1) == 0) goto LAB_10733f04c;
      func_0x000107345c64();
      *puVar3 = &PTR_DAT_1109a2b30;
      puVar3[1] = unaff_x19;
      puVar3[2] = uVar4;
      puVar3[3] = param_1 + 8;
      puStack_58 = puVar3;
      (**(code **)(lStack_50 + 0x40))(auStack_90,&uStack_48,auStack_70);
      func_0x000107346e50();
      func_0x0001073468f8();
    }
  }
  func_0x0001073465cc();
  func_0x0001073446ac();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_10733f04c:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10733f054);
  (*pcVar1)();
}



/* Entry: 10733f078; end: 10733f09f;  */

void FUN_10733f078(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a2bc0);
  func_0x000107344bc4();
  return;
}



/* Entry: 10733f0a0; end: 10733f0e7;  */

undefined ** FUN_10733f0a0(void)

{
  return &PTR_DAT_1109a2bc0;
}



/* Entry: 10733f0e8; end: 10733f113;  */

void FUN_10733f0e8(long param_1)

{
  long unaff_x19;
  
  func_0x000107345814();
  func_0x00010734521c(&PTR_DAT_1109a2b30);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10733f114; end: 10733f143;  */

void FUN_10733f114(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_1109a2b30;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10733f144; end: 10733f37f;  */

void FUN_10733f144(long param_1,ulong *param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  ulong uVar1;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  long extraout_x8_03;
  int extraout_w10;
  int extraout_w11;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 uVar10;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined1 auStack_170 [144];
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_90;
  
  lVar3 = param_1;
  func_0x0001073447e0();
  uStack_d8 = param_2[1];
  uStack_e0 = *param_2;
  lVar3 = *(long *)(lVar3 + 0x10);
  uStack_90 = extraout_x8;
  func_0x000107347b60(&uStack_d0,&UNK_10f40a87d);
  func_0x000107264c5c(&uStack_d0);
  func_0x000107347ae8(auStack_170);
  func_0x000107346bc0();
  uVar10 = *(undefined4 *)(lVar3 + 0x108);
  FUN_1073af27c(&uStack_d0,0,0);
  uStack_188 = uStack_c8;
  uStack_190 = uStack_d0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  FUN_107381038(&uStack_180,uVar10,param_3,auStack_170,&uStack_190);
  func_0x00010724b8b8(&uStack_190);
  func_0x00010724b8b8(&uStack_d0);
  puVar2 = (ulong *)**(undefined8 **)(param_1 + 0x18);
  Hint_Prefetch(*puVar2,0,2,0);
  uVar1 = uStack_e0;
  func_0x0001001030f4(uStack_e0,uStack_e0 + uStack_d8);
  lVar3 = 0;
  uVar4 = puVar2[2];
  func_0x000107344ffc(*puVar2 >> 0xc);
  uVar5 = extraout_x8_00;
  while( true ) {
    uVar5 = uVar5 & uVar4;
    func_0x000107346214();
    for (uVar6 = extraout_x8_01 & 0x8080808080808080; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar1 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar5 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uVar4;
      uVar1 = puVar2[1] + uVar7 * 0x48;
      func_0x000107278530(uVar1,uStack_e0,uStack_d8);
      if ((uVar1 & 1) != 0) {
        lVar3 = puVar2[1] + uVar7 * 0x48;
        uVar8 = uStack_180;
        lVar9 = lStack_178;
        if (lStack_178 != 0) {
          do {
            func_0x0001073466e8();
            lVar3 = extraout_x8_03;
          } while (extraout_w11 != 0);
        }
        uStack_c8 = *(undefined8 *)(lVar3 + 0x40);
        uStack_d0 = *(undefined8 *)(lVar3 + 0x38);
        *(long *)(lVar3 + 0x40) = lVar9;
        *(undefined8 *)(lVar3 + 0x38) = uVar8;
        func_0x00010733f4f4(&uStack_d0);
        goto LAB_10733f2bc;
      }
    }
    func_0x0001073450b0();
    if ((extraout_x8_02 & 1) != 0) break;
    lVar3 = lVar3 + 8;
    uVar5 = lVar3 + uVar5;
  }
  func_0x000107346964();
  FUN_10733f3b4();
  func_0x000107347d5c(puVar2[1]);
  func_0x000104c302a4();
  *(long *)(uVar1 + 0x40) = lStack_178;
  *(undefined8 *)(uVar1 + 0x38) = uStack_180;
  if (lStack_178 != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10 != 0);
  }
LAB_10733f2bc:
  func_0x00010734615c();
  FUN_10733f528();
  func_0x00010734728c();
  func_0x0001073447cc(uStack_90);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_10733f528(&uStack_180);
  func_0x00010734728c();
  func_0x000107345604();
  func_0x000107345760();
  func_0x000107345650();
  func_0x000107344bc4();
  return;
}



/* Entry: 10733f380; end: 10733f3a7;  */

void FUN_10733f380(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a2bb0);
  func_0x000107344bc4();
  return;
}



/* Entry: 10733f3a8; end: 10733f3b3;  */

undefined ** FUN_10733f3a8(void)

{
  return &PTR_DAT_1109a2bb0;
}



/* Entry: 10733f3b4; end: 10733f447;  */

void FUN_10733f3b4(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x9;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x0001073448a8();
  func_0x000100061de0();
  func_0x0001073464fc();
  if ((extraout_x9 == 0) && (func_0x000107346ad8(), !(bool)in_ZR)) {
    func_0x000107347d00();
    if (((bool)in_CY) && (func_0x000107345a18(), (bool)in_CY)) {
      func_0x000107346644();
    }
    else {
      func_0x0001073464c0();
      FUN_10733f448();
    }
    func_0x000107345130();
  }
  func_0x000107345560();
  uVar1 = *(char *)(extraout_x8 + param_1) == -0x80;
  func_0x00010734475c();
  func_0x00010734471c();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107348074();
  func_0x000107344ef0();
  FUN_107324d80();
  func_0x000107346698();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x000107346970();
      func_0x000107344cd8();
      func_0x000107344734();
      func_0x000107347f90();
      FUN_10733f4ac();
    }
    func_0x000107347df8();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10733f448; end: 10733f4ab;  */

void FUN_10733f448(void)

{
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x000107348074();
  func_0x000107344ef0();
  FUN_107324d80();
  func_0x000107346698();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x000107346970();
      func_0x000107344cd8();
      func_0x000107344734();
      func_0x000107347f90();
      FUN_10733f4ac();
    }
    func_0x000107347df8();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10733f4ac; end: 10733f517;  */

undefined8 FUN_10733f4ac(void)

{
  undefined8 unaff_x19;
  
  func_0x000107346368();
  func_0x000107346650();
  func_0x000107346a38();
  func_0x00010733f4f4();
  func_0x000107345ab0();
  return unaff_x19;
}



/* Entry: 10733f518; end: 10733f527;  */

long FUN_10733f518(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 10733f528; end: 10733f54b;  */

void FUN_10733f528(long param_1)

{
  func_0x000107345acc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10733f54c; end: 10733f5af;  */

void FUN_10733f54c(void)

{
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x20;
  
  func_0x000107346a00();
  if (unaff_x20 != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10 != 0);
  }
  func_0x00010734678c();
  func_0x000107345c64();
  func_0x000107347e84(&PTR_FUN_1109a2be0);
  if (unaff_x20 != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010734558c();
  return;
}



/* Entry: 10733f5b0; end: 10733f5d7;  */

undefined8 FUN_10733f5b0(undefined8 param_1)

{
  func_0x000107347198(&PTR_FUN_1109a2be0);
  return param_1;
}



/* Entry: 10733f5d8; end: 10733f5eb;  */

void FUN_10733f5d8(void)

{
  FUN_10733f5b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10733f5ec; end: 10733f60b;  */

void FUN_10733f5ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  long unaff_x19;
  undefined8 uVar3;
  
  func_0x000107345814();
  puVar1 = (undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_1109a2be0;
  lVar2 = *(long *)(unaff_x19 + 0x10);
  uVar3 = *puVar1;
  param_1[2] = *(undefined8 *)(unaff_x19 + 0x10);
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10 != 0);
  }
  param_1[3] = puVar1[2];
  return;
}



/* Entry: 10733f60c; end: 10733f62b;  */

void FUN_10733f60c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109a2be0;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10 != 0);
  }
  param_2[3] = puVar1[2];
  return;
}



/* Entry: 10733f62c; end: 10733f6f7;  */

void FUN_10733f62c(ulong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  long lVar3;
  undefined1 auStack_128 [216];
  long alStack_50 [2];
  byte bStack_40;
  
  func_0x000107346eb4();
  func_0x000107344818();
  lVar3 = *(long *)(param_1 + 0x18);
  func_0x000107347154();
  func_0x0001073466f8(alStack_50);
  uVar2 = bStack_40 == 1;
  if (((bool)uVar2) &&
     (func_0x0001073460f8(*(undefined8 *)(alStack_50[0] + 0x30)), (param_1 & 1) != 0)) {
    if ((bStack_40 & 1) == 0) goto LAB_10733f6cc;
    func_0x0001072f4b68(auStack_128,alStack_50);
    func_0x0001072f52d4(*(undefined8 *)(lVar3 + 0xe8),auStack_128);
    func_0x0001072dbcb4(auStack_128);
  }
  func_0x000107345cd8();
  func_0x0001073446ac();
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
LAB_10733f6cc:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10733f6d4);
  (*pcVar1)();
}



/* Entry: 10733f6f8; end: 10733f71f;  */

void FUN_10733f6f8(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a2c40);
  func_0x000107344bc4();
  return;
}



/* Entry: 10733f720; end: 10733f767;  */

undefined ** FUN_10733f720(void)

{
  return &PTR_DAT_1109a2c40;
}



/* Entry: 10733f768; end: 10733f78f;  */

void FUN_10733f768(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001073450c0();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109a2c60;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10733f790; end: 10733f7af;  */

void FUN_10733f790(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109a2c60;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10733f7b0; end: 10733f853;  */

void FUN_10733f7b0(ulong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  long lVar3;
  long alStack_40 [2];
  byte bStack_30;
  undefined8 uStack_28;
  
  func_0x000107346eb4();
  func_0x000107344a90();
  lVar3 = *(long *)(param_1 + 8);
  func_0x000107347154();
  func_0x0001073466f8(alStack_40);
  uVar2 = bStack_30 == 1;
  if (((bool)uVar2) &&
     (func_0x0001073460f8(*(undefined8 *)(alStack_40[0] + 0x30)), (param_1 & 1) != 0)) {
    if ((bStack_30 & 1) == 0) goto LAB_10733f838;
    FUN_10739aa30(*(undefined8 *)(lVar3 + 0xf8),alStack_40);
  }
  func_0x0001072f5f4c(alStack_40);
  func_0x0001073447cc(uStack_28);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
LAB_10733f838:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10733f840);
  (*pcVar1)();
}


