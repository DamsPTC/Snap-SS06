/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1072dec54; end: 1072dec7b;  */

void FUN_1072dec54(undefined8 param_1)

{
  func_0x0001072df164();
  func_0x0001072df124(param_1,&PTR_DAT_11099d338);
  func_0x0001072df0e8();
  return;
}



/* Entry: 1072dec7c; end: 1072dec87;  */

undefined ** FUN_1072dec7c(void)

{
  return &PTR_DAT_11099d338;
}



/* Entry: 1072dec88; end: 1072decd7;  */

undefined8 FUN_1072dec88(undefined8 param_1)

{
  func_0x0001072df2e8();
  func_0x000107277f0c();
  return param_1;
}



/* Entry: 1072decd8; end: 1072deceb;  */

void FUN_1072decd8(void)

{
  func_0x0001072decac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072decec; end: 1072ded23;  */

undefined8 FUN_1072decec(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x60;
  __Znwm(0x60);
  FUN_1072dee6c();
  return uVar1;
}



/* Entry: 1072ded24; end: 1072ded47;  */

void FUN_1072ded24(long param_1,undefined8 *param_2)

{
  long unaff_x20;
  
  func_0x0001072df308(param_2,param_1 + 8);
  *param_2 = &PTR_SUB_11099d358;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_2 + 1);
  FUN_107268350(param_2 + 4,unaff_x20 + 0x18);
  return;
}



/* Entry: 1072ded48; end: 1072dee37;  */

void FUN_1072ded48(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  undefined1 uStack_1b1;
  undefined1 auStack_1b0 [40];
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [104];
  undefined1 auStack_118 [56];
  undefined1 auStack_e0 [168];
  undefined8 uStack_38;
  
  func_0x0001072df29c();
  func_0x0001072df0c0();
  uStack_38 = extraout_x8;
  FUN_107262e9c(auStack_118,unaff_x20 + 8);
  func_0x0001077765a4(auStack_188,unaff_x20 + 0x20,&uStack_1b1);
  FUN_1072deec0(auStack_e0,auStack_118,auStack_188);
  FUN_1072965a0(auStack_1b0,auStack_e0,1);
  func_0x0001072df388();
  func_0x0001072df2a8();
  func_0x00010729651c(auStack_e0);
  FUN_10726af18(auStack_180);
  func_0x0001072df134();
  (**(code **)(*unaff_x19 + 0xc0))();
  func_0x0001072df2c8();
  func_0x0001072df0ac(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072df2c8();
  func_0x0001072df10c();
  func_0x0001072df164();
  func_0x0001072df124();
  func_0x0001072df0e8();
  return;
}



/* Entry: 1072dee38; end: 1072dee5f;  */

void FUN_1072dee38(undefined8 param_1)

{
  func_0x0001072df164();
  func_0x0001072df124(param_1,&PTR_DAT_11099d3b8);
  func_0x0001072df0e8();
  return;
}



/* Entry: 1072dee60; end: 1072dee6b;  */

undefined ** FUN_1072dee60(void)

{
  return &PTR_DAT_11099d3b8;
}



/* Entry: 1072dee6c; end: 1072deebf;  */

void FUN_1072dee6c(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x0001072df308();
  *param_1 = &PTR_SUB_11099d358;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 1);
  FUN_107268350(param_1 + 4,unaff_x20 + 0x18);
  return;
}



/* Entry: 1072deec0; end: 1072def1b;  */

long FUN_1072deec0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000104c318bc();
  FUN_10726cc04(lVar1 + 0x40,param_3 + 8);
  return param_1;
}



/* Entry: 1072def1c; end: 1072def2f;  */

void FUN_1072def1c(void)

{
  func_0x0001072deef0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072def30; end: 1072def63;  */

undefined8 FUN_1072def30(undefined8 param_1)

{
  func_0x0001072df330();
  FUN_1072df058();
  return param_1;
}



/* Entry: 1072def64; end: 1072def87;  */

void FUN_1072def64(long param_1,undefined8 *param_2)

{
  long unaff_x20;
  
  func_0x0001072df308(param_2,param_1 + 8);
  *param_2 = &PTR_SUB_11099d3d8;
  FUN_10726fe1c(param_2 + 1);
  func_0x000107277f0c(param_2 + 4,unaff_x20 + 0x18);
  return;
}



/* Entry: 1072def88; end: 1072df023;  */

void FUN_1072def88(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_78 [64];
  undefined8 uStack_38;
  
  func_0x0001072df29c();
  func_0x0001072df0c0();
  lVar1 = *(long *)(param_1 + 0x10);
  uStack_38 = extraout_x8;
  for (lVar3 = *(long *)(param_1 + 8); uVar2 = lVar3 == lVar1, !(bool)uVar2; lVar3 = lVar3 + 0x38) {
    FUN_10729807c(auStack_78,lVar3);
    func_0x0001072df1a8(*(undefined8 *)(*unaff_x19 + 0xd0));
    func_0x0001072df23c();
  }
  if (*(long *)(*(long *)(unaff_x20 + 0x20) + 0x18) != 0) {
    (**(code **)(*unaff_x19 + 0xc0))();
  }
  func_0x0001072df0ac(uStack_38);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072df10c();
  func_0x0001072df164();
  func_0x0001072df124();
  func_0x0001072df0e8();
  return;
}



/* Entry: 1072df024; end: 1072df04b;  */

void FUN_1072df024(undefined8 param_1)

{
  func_0x0001072df164();
  func_0x0001072df124(param_1,&PTR_DAT_11099d438);
  func_0x0001072df0e8();
  return;
}



/* Entry: 1072df04c; end: 1072df057;  */

undefined ** FUN_1072df04c(void)

{
  return &PTR_DAT_11099d438;
}



/* Entry: 1072df058; end: 1072df0ab;  */

void FUN_1072df058(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x0001072df308();
  *param_1 = &PTR_SUB_11099d3d8;
  FUN_10726fe1c(param_1 + 1);
  func_0x000107277f0c(param_1 + 4,unaff_x20 + 0x18);
  return;
}



/* Entry: 1072df0ac; end: 1072df3bf;  */

void FUN_1072df0ac(void)

{
  return;
}



/* Entry: 1072df3c0; end: 1072df48b;  */

long FUN_1072df3c0(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_1072df48c(param_1);
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x10) = param_2[1];
  *(undefined8 *)(param_1 + 8) = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  *(undefined1 *)(param_1 + 0xec) = 0;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  *(undefined1 *)(param_1 + 0xf4) = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined1 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  FUN_107276a2c(param_1 + 0x108,&PTR_PTR_1132348d0);
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  return param_1;
}



/* Entry: 1072df48c; end: 1072df4f3;  */

void FUN_1072df48c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  *param_1 = puVar1;
  return;
}



/* Entry: 1072df4f4; end: 1072df7b3;  */

undefined *** FUN_1072df4f4(long param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined ***pppuVar4;
  ulong uVar5;
  long *plVar6;
  float fVar7;
  undefined8 uVar8;
  undefined1 auStack_138 [24];
  long *plStack_120;
  long lStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined **ppuStack_f8;
  long lStack_f0;
  undefined ***pppuStack_e0;
  undefined **appuStack_d8 [12];
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long alStack_58 [3];
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_1 + 0x108;
  func_0x00010794187c();
  *(undefined2 *)(param_1 + 0x128) = *(undefined2 *)(param_2 + 0x20);
  uVar8 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x130) = uVar8;
  *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113822078,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      lRam0000000113822078 = lRam0000000113822078 + 1;
    }
  } while (cVar1 != '\0');
  __ZNSt3__16chrono12steady_clock3nowEv();
  if (*(char *)(param_1 + 0xe0) == '\x01') {
    uVar5 = lVar3 - *(long *)(param_1 + 0xd8);
    if ((long)uVar5 < 1000) {
      fVar7 = 60.0;
    }
    else {
      fVar7 = 1e+06 / (float)(uVar5 / 1000);
    }
    *(float *)(param_1 + 0xe8) = fVar7;
    *(undefined1 *)(param_1 + 0xec) = 1;
    if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
LAB_1072df5d8:
      *(long *)(param_1 + 0xd8) = lVar3;
    }
  }
  else {
    if (*(char *)(param_1 + 0xec) == '\x01') {
      *(undefined1 *)(param_1 + 0xec) = 0;
    }
    if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
      *(undefined1 *)(param_1 + 0xe0) = 1;
      goto LAB_1072df5d8;
    }
  }
  plVar6 = *(long **)(param_1 + 8);
  func_0x00010002b838(appuStack_d8,PTR_DAT_1131ad0a0);
  (**(code **)(*plVar6 + 0x38))(plVar6,appuStack_d8);
  pppuVar4 = appuStack_d8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  if ((((ulong)plVar6 >> 0x20 & 1) == 0) || (((ulong)plVar6 & 0xffffffff) == 0)) {
    pppuVar4 = (undefined ***)(param_1 + 0x30);
    func_0x0001072df8a0();
    goto LAB_1072df720;
  }
  if ((*(byte *)(param_1 + 0xd0) & 1) == 0) {
    param_3 = (long)(int)plVar6 * 1000;
  }
  else {
    param_3 = (long)(int)plVar6 * 1000;
    if (*(long *)(param_1 + 0x98) == param_3) goto LAB_1072df720;
  }
  ppuStack_f8 = &PTR_FUN_11099d4a8;
  pppuStack_e0 = &ppuStack_f8;
  lStack_f0 = param_1;
  FUN_1072de1fc(appuStack_d8,&ppuStack_f8,param_3);
  func_0x0001072df8a0(param_1 + 0x30);
  FUN_10724cbe8(param_1 + 0x30,appuStack_d8);
  plVar6 = (long *)(param_1 + 0x50);
  *plVar6 = 0x32aaaba7;
  *(undefined1 *)(param_1 + 0x90) = uStack_78;
  *(undefined8 *)(param_1 + 0xa8) = uStack_60;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa0) = uStack_68;
  *(undefined8 *)(param_1 + 0x98) = uStack_70;
  if (plStack_40 == (long *)0x0) {
LAB_1072df6ec:
    *(long **)(param_1 + 200) = plStack_40;
  }
  else {
    if (plStack_40 != alStack_58) {
      (**(code **)(*plStack_40 + 0x10))();
      goto LAB_1072df6ec;
    }
    *(long *)(param_1 + 200) = param_1 + 0xb0;
    (**(code **)(*plStack_40 + 0x18))();
  }
  *(undefined1 *)(param_1 + 0xd0) = 1;
  FUN_1072ddd9c(appuStack_d8);
  pppuVar4 = &ppuStack_f8;
  func_0x0001006393ec();
LAB_1072df720:
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    pppuVar4 = (undefined ***)(param_1 + 0x30);
    FUN_1072dcb64(pppuVar4,0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return pppuVar4;
  }
  ___stack_chk_fail();
  __ZNSt3__15mutexD1Ev(plVar6);
  func_0x0001006393ec(param_1 + 0x30);
  FUN_1072ddd9c(appuStack_d8);
  func_0x0001006393ec(&ppuStack_f8);
  __Unwind_Resume();
  pcStack_108 = FUN_1072df7b4;
  plStack_120 = plVar6;
  lStack_118 = param_1;
  puStack_110 = &stack0xfffffffffffffff0;
  func_0x00010002b838(auStack_138);
  FUN_1072a0374(pppuVar4 + 4,auStack_138,param_3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_138);
  *(undefined1 *)((long)pppuVar4 + 0x4c) = 1;
  return pppuVar4;
}



/* Entry: 1072df7b4; end: 1072df81b;  */

long FUN_1072df7b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x00010002b838(auStack_38);
  FUN_1072a0374(param_1 + 0x20,auStack_38,param_3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  *(undefined1 *)(param_1 + 0x4c) = 1;
  return param_1;
}



/* Entry: 1072df81c; end: 1072df87f;  */

void FUN_1072df81c(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330
    )(param_1,param_2);
    return;
  }
  func_0x00010002b82c(param_1);
  func_0x000107c613d0(param_3);
  func_0x000107c60c50();
  return;
}



/* Entry: 1072df880; end: 1072df8c3;  */

void FUN_1072df880(long param_1)

{
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    FUN_1072ddd9c();
  }
  return;
}



/* Entry: 1072df8c4; end: 1072df8e7;  */

undefined8 FUN_1072df8c4(undefined8 param_1)

{
  FUN_1072df8e8(param_1,0);
  return param_1;
}



/* Entry: 1072df8e8; end: 1072df903;  */

void FUN_1072df8e8(long *param_1,long param_2)

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



/* Entry: 1072df904; end: 1072df917;  */

void FUN_1072df904(void)

{
  func_0x0001072df928();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072df918; end: 1072df937;  */

void FUN_1072df918(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001072df920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 1072df938; end: 1072df95f;  */

long FUN_1072df938(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1072df960; end: 1072df967;  */

void FUN_1072df960(void)

{
  return;
}



/* Entry: 1072df968; end: 1072df997;  */

void FUN_1072df968(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_11099d4a8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1072df998; end: 1072df9c3;  */

void FUN_1072df998(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_11099d4a8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1072df9c4; end: 1072e01bb;  */

void FUN_1072df9c4(long param_1)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  ulong unaff_x28;
  undefined8 *puStack_318;
  undefined8 uStack_310;
  undefined8 uStack_300;
  undefined4 uStack_2f8;
  undefined8 uStack_2f0;
  undefined4 uStack_2e8;
  long lStack_2d8;
  undefined4 uStack_2d0;
  ulong uStack_2c0;
  undefined4 uStack_2b8;
  ulong uStack_2a8;
  undefined4 uStack_2a0;
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [24];
  undefined4 auStack_248 [8];
  long alStack_228 [4];
  undefined1 auStack_208 [24];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  int iStack_1d8;
  undefined **ppuStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  uint uStack_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  
  puVar13 = *(undefined8 **)(param_1 + 8);
  plVar14 = (long *)*puVar13;
  __ZNSt3__16chrono12steady_clock3nowEv();
  _bzero(&uStack_1f0,0x90);
  iVar5 = 0;
  _getrusage(0,&uStack_1f0);
  if (iVar5 == 0) {
    lVar11 = (long)iStack_1d8 + (long)(int)uStack_1e8 + (lStack_1e0 + (long)uStack_1f0) * 1000000;
    lVar12 = *plVar14;
    param_1 = param_1 / 1000;
    bVar4 = false;
    if (lVar12 == 0) {
      uVar16 = 0;
      uVar17 = 0;
    }
    else if (plVar14[1] == 0) {
      uVar16 = 0;
      uVar17 = 0;
    }
    else {
      uVar16 = 0;
      uVar17 = 0;
      uVar18 = param_1 - lVar12;
      if (uVar18 != 0 && lVar12 <= param_1) {
        uVar16 = 0;
        if (uVar18 != 0) {
          uVar16 = (uint)((ulong)((lVar11 - plVar14[1]) * 100) / uVar18);
        }
        uVar17 = uVar16 & 0xffffff00;
        uVar16 = uVar16 & 0xff;
        bVar4 = true;
      }
    }
    iVar5 = *(int *)((long)plVar14 + 0x14);
    *plVar14 = param_1;
    plVar14[1] = lVar11;
    plVar14[2] = CONCAT44(uStack_1a8,uStack_1b0);
    auStack_248[0] = 0x3e;
    puVar7 = &uStack_160;
    _bzero(puVar7,0xf8);
    iVar6 = (int)puVar7;
    _mach_host_self();
    _host_statistics64();
    if (iVar6 == 0) {
      alStack_228[0] = 0;
      _mach_host_self();
      _host_page_size();
      lVar11 = (ulong)uStack_15c + (ulong)uStack_154 + (ulong)uStack_158;
      uVar18 = (lVar11 + (ulong)uStack_160) * alStack_228[0];
      unaff_x28 = lVar11 * alStack_228[0];
    }
    else {
      uVar18 = 0;
    }
    iVar1 = *(int *)((long)plVar14 + 0x14);
    FUN_107276a2c(alStack_228,puVar13 + 0x21);
    FUN_107275c74(auStack_208,alStack_228);
    func_0x00010794120c(alStack_228);
    FUN_10728a260();
    FUN_10728ef74(auStack_248);
    uStack_1f0 = (undefined8 *)CONCAT44(uStack_1f0._4_4_,0x10e);
    iStack_1d8 = 0;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    ppuStack_1d0 = &PTR_FUN_110996720;
    uStack_1c8 = 0;
    uStack_1b0 = 0x10e;
    uStack_1a8 = 0;
    func_0x0001072e0244();
    puVar8 = auStack_260;
    func_0x0001072e027c(puVar8);
    func_0x0001072e0258();
    FUN_10726e300();
    func_0x0001072e0268();
    func_0x0001072e0220();
    func_0x0001072e0238();
    FUN_10726e6c0(&uStack_160,puVar8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_260);
    func_0x0001072e0274();
    if (5 < *(byte *)((long)puVar13 + 0x129)) {
      FUN_1072df81c(auStack_278,auStack_248,"none");
      FUN_10726e300(&uStack_160,"country_code",auStack_278);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_278);
    }
    if (iVar6 == 0) {
      if ((*(byte *)(puVar13 + 0x20) & 1) == 0) {
        *(undefined1 *)(puVar13 + 0x20) = 1;
      }
      puVar13[0x1f] = (uVar18 & 0xffffffff00000) << 0xc | unaff_x28 >> 0x14 & 0xffffffff;
      func_0x0001072e0200(0x123);
      func_0x0001072e0244();
      func_0x0001072e027c(auStack_290);
      func_0x0001072e0258();
      FUN_10726e300();
      func_0x0001072e0220();
      func_0x0001072e0238();
      uStack_2a8 = (ulong)*(uint *)(puVar13 + 0x1f);
      uStack_2a0 = 3;
      uStack_2c0 = *(ulong *)puVar13[3];
      uStack_2b8 = 3;
      func_0x0001072e022c();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_290);
      func_0x0001072e0274();
      func_0x0001072e0200(0x124);
      func_0x0001072e0244();
      func_0x0001072e027c(&uStack_2a8);
      func_0x0001072e0258();
      FUN_10726e300();
      func_0x0001072e0220();
      func_0x0001072e0238();
      uStack_2c0 = (ulong)*(uint *)((long)puVar13 + 0xfc);
      uStack_2b8 = 3;
      lStack_2d8 = *(long *)puVar13[3];
      uStack_2d0 = 3;
      func_0x0001072e022c();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_2a8);
      func_0x0001072e0274();
      func_0x0001072e0200(0x125);
      func_0x0001072e0244();
      func_0x0001072e027c(&uStack_2c0);
      func_0x0001072e0258();
      FUN_10726e300();
      func_0x0001072e0220();
      func_0x0001072e0238();
      lStack_2d8 = (long)(((float)unaff_x28 * 100.0) / (float)uVar18);
      uStack_2d0 = 3;
      uStack_2f0 = *(undefined8 *)puVar13[3];
      uStack_2e8 = 3;
      func_0x0001072e022c();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_2c0);
      func_0x0001072e0274();
    }
    if (bVar4) {
      uStack_310._4_4_ = (undefined4)((ulong)uStack_310 >> 0x20);
      uVar17 = uVar17 | uVar16;
      *(uint *)(puVar13 + 0x1e) = uVar17;
      *(undefined1 *)((long)puVar13 + 0xf4) = 1;
      uStack_1f0._4_4_ = (undefined4)((ulong)uStack_1f0 >> 0x20);
      uStack_1f0 = (undefined8 *)CONCAT44(uStack_1f0._4_4_,uVar17);
      uVar18 = (ulong)uStack_1e8 >> 0x20;
      uStack_1e8 = (undefined8 *)CONCAT44((int)uVar18,1);
      lStack_2d8 = *(long *)puVar13[3];
      uStack_2d0 = 3;
      func_0x00010743fa44((long *)puVar13[3],&uStack_160,&uStack_1f0,&lStack_2d8,7);
      func_0x0001072e0200(0x10f);
      uStack_1a4._0_1_ = 1;
      uStack_198 = 0;
      uStack_190 = 0;
      uStack_1a0 = 0;
      func_0x0001072e027c(&lStack_2d8);
      func_0x0001072e0258();
      FUN_10726e300();
      func_0x0001072e0268();
      func_0x0001072e0220();
      func_0x0001072e0238();
      uStack_2f0 = CONCAT44(uStack_2f0._4_4_,iVar1);
      uStack_2e8 = 1;
      puStack_318 = *(undefined8 **)puVar13[3];
      uStack_310._0_4_ = 3;
      func_0x0001072e022c();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_2d8);
      func_0x0001072e0274();
      func_0x0001072e0200(0x110);
      uStack_1a4 = CONCAT31(uStack_1a4._1_3_,1);
      uStack_198 = 0;
      uStack_190 = 0;
      uStack_1a0 = 0;
      func_0x0001072e027c(&uStack_2f0);
      func_0x0001072e0258();
      FUN_10726e300();
      func_0x0001072e0268();
      func_0x0001072e0220();
      func_0x0001072e0238();
      puStack_318 = (undefined8 *)CONCAT44(puStack_318._4_4_,iVar1 - iVar5);
      uStack_310 = (undefined8 *)CONCAT44(uStack_310._4_4_,1);
      uStack_300 = *(undefined8 *)puVar13[3];
      uStack_2f8 = 3;
      func_0x0001072e022c();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_2f0);
      func_0x0001072e0274();
      puVar9 = (undefined8 *)0xa0;
      __Znwm();
      plVar14 = puVar9 + 1;
      *plVar14 = 0;
      puVar9[2] = 0;
      *puVar9 = &PTR_DAT_11099d458;
      puVar15 = puVar9 + 3;
      *puVar15 = &PTR_DAT_110cef598;
      puVar9[0x10] = 0;
      puVar9[0xf] = 0;
      puVar9[0x12] = 0;
      puVar9[0x11] = 0;
      puVar9[6] = 0;
      puVar9[5] = 0;
      puVar9[8] = 0;
      puVar9[7] = 0;
      puVar9[10] = 0;
      puVar9[9] = 0;
      puVar9[0xc] = 0;
      puVar9[0xb] = 0;
      puVar9[0xe] = 0;
      puVar9[0xd] = 0;
      puVar9[0x13] = 0;
      puVar9[4] = &PTR_DAT_110cef600;
      puVar9[0x10] = (ulong)uVar17;
      *(undefined1 *)(puVar9 + 0x11) = 1;
      puStack_318 = puVar15;
      uStack_310 = puVar9;
      func_0x0001002a8234(puVar9 + 6,auStack_208);
      *(ushort *)(puVar9 + 10) = *(byte *)(puVar13 + 0x25) | 0x100;
      bVar2 = *(byte *)((long)puVar13 + 0x129);
      puVar9[0x12] = (double)bVar2;
      *(undefined1 *)(puVar9 + 0x13) = 1;
      *(ushort *)(puVar9 + 0xf) = *(byte *)(puVar13 + 5) | 0x100;
      if (5 < bVar2) {
        FUN_1072df81c(&uStack_1f0,auStack_248,"none");
        func_0x0001002a8234(puVar9 + 0xb,&uStack_1f0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1f0);
      }
      puVar10 = (undefined8 *)puVar13[4];
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *plVar14 = *plVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uStack_1f0 = puVar15;
      uStack_1e8 = puVar9;
      (**(code **)*puVar10)(puVar10,&uStack_1f0);
      func_0x000105979594(&uStack_1f0);
      FUN_1072df938(&puStack_318);
    }
    if (*(char *)((long)puVar13 + 0xec) == '\x01') {
      func_0x0001072e0200(0x120);
      func_0x0001072e0244();
      func_0x0001072e027c(&puStack_318);
      func_0x0001072e0258();
      FUN_10726e300();
      func_0x0001072e0268();
      func_0x0001072e0220();
      uStack_300 = CONCAT44(uStack_300._4_4_,*(undefined4 *)(puVar13 + 0x1d));
      uStack_2f8 = 4;
      func_0x0001072e022c();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_318);
      func_0x0001072e0274();
    }
    FUN_107262330(&uStack_160);
    func_0x0001001148fc(auStack_248);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_208);
  }
  return;
}



/* Entry: 1072e01bc; end: 1072e01f3;  */

long FUN_1072e01bc(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_11099d508);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1072e01f4; end: 1072e028b;  */

undefined ** FUN_1072e01f4(void)

{
  return &PTR_DAT_11099d508;
}



/* Entry: 1072e028c; end: 1072e099f;  */

undefined8 *
FUN_1072e028c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,ulong *param_4,long param_5
             ,undefined8 param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 extraout_x8;
  undefined8 *puVar11;
  long lVar12;
  code *extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined2 uStack_e0;
  undefined1 uStack_de;
  undefined8 uStack_d0;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined8 *puStack_78;
  undefined8 uStack_70;
  
  puVar9 = param_1;
  func_0x0001072f1810();
  *puVar9 = &PTR_FUN_11099d528;
  puVar9 = puVar9 + 1;
  uStack_70 = extraout_x8;
  func_0x0001073af260();
  FUN_10725b034(puVar9);
  param_1[3] = param_1;
  puVar11 = (undefined8 *)param_1[1];
  uVar13 = *puVar11;
  param_1[5] = puVar11[1];
  param_1[4] = uVar13;
  if (puVar11[1] != 0) {
    do {
      func_0x0001072f1cd8();
    } while (extraout_w10 != 0);
  }
  param_1[6] = param_2;
  lVar12 = param_3[1];
  uVar13 = *param_3;
  param_1[8] = param_3[1];
  param_1[7] = uVar13;
  if (lVar12 != 0) {
    do {
      func_0x0001072f1cd8();
    } while (extraout_w10_00 != 0);
  }
  puVar11 = param_1 + 9;
  lVar12 = *(long *)(param_5 + 0x18);
  if (lVar12 != 0) {
    if (lVar12 == param_5) {
      param_1[0xc] = puVar11;
      func_0x0001072f2548(*(undefined8 *)(param_5 + 0x18));
      (*extraout_x8_01)();
      goto LAB_1072e0370;
    }
    func_0x0001072f2698();
    (*extraout_x8_00)();
  }
  param_1[0xc] = lVar12;
LAB_1072e0370:
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  if (*(char *)(param_5 + 0x30) == '\x01') {
    lVar12 = *(long *)(param_5 + 0x28);
    uVar13 = *(undefined8 *)(param_5 + 0x20);
    param_1[0xe] = *(undefined8 *)(param_5 + 0x28);
    param_1[0xd] = uVar13;
    if (lVar12 != 0) {
      do {
        func_0x0001072f1cd8();
      } while (extraout_w10_01 != 0);
    }
    param_1[0x10] = 0;
    *(undefined1 *)(param_1 + 0xf) = 1;
    if (param_1[0x10] != -1) {
      func_0x0001072f2b78();
      __ZNSt3__111__call_onceERVmPvPFvS2_E();
    }
  }
  else {
    param_1[0x10] = 0;
  }
  puVar16 = param_1 + 0x11;
  *puVar16 = 0;
  FUN_1072f058c(param_1 + 0x12,param_6);
  plVar17 = (long *)*param_4;
  func_0x0001072f226c();
  (**(code **)(*plVar17 + 0x38))(plVar17,&ppuStack_f0);
  lVar12 = 1000;
  if (((ulong)plVar17 & 0x100000000) != 0) {
    lVar12 = (long)(int)plVar17;
  }
  param_1[0x16] = lVar12;
  func_0x0001072f1de8();
  FUN_1072e8838(param_1 + 0x17);
  FUN_1072e8838(param_1 + 0x3b);
  __ZNSt3__119__shared_mutex_baseC1Ev(param_1 + 0x5f);
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x79) = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)(param_1 + 0x83) = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x89) = 0;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  param_1[0x8d] = &PTR_FUN_11099d608;
  __ZNSt3__119__shared_mutex_baseC1Ev(param_1 + 0x8e);
  param_1[0xa4] = 0;
  param_1[0xa3] = 0;
  param_1[0xa6] = 0;
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  param_1[0xa9] = 0xc056800000000000;
  param_1[0xab] = 0x4056800000000000;
  param_1[0xaa] = 0xc066800000000000;
  param_1[0xac] = 0x4066800000000000;
  *(undefined1 *)(param_1 + 0xad) = 0;
  *(undefined1 *)(param_1 + 0xae) = 0;
  *(undefined1 *)(param_1 + 0xb3) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 1;
  param_1[0xb6] = 0;
  param_1[0xb5] = 0;
  param_1[0xb8] = 0;
  param_1[0xb7] = 0;
  *(undefined4 *)(param_1 + 0xb9) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xba) = 0;
  param_1[0xbb] = 0;
  plVar17 = (long *)*param_4;
  func_0x0001072f226c();
  (**(code **)(*plVar17 + 0x48))(plVar17,&ppuStack_f0);
  uVar2 = 0x32;
  if (((ulong)plVar17 & 0x100000000) != 0) {
    uVar2 = (ulong)plVar17 & 0xffffffff;
  }
  param_1[0xbc] = uVar2;
  func_0x0001072f1de8();
  puVar1 = param_1 + 0xbd;
  *(undefined4 *)(param_1 + 0xbf) = 0;
  param_1[0xbe] = 0;
  *puVar1 = 0;
  plVar18 = (long *)*param_4;
  func_0x0001072f226c();
  func_0x0001072f2950(*(undefined8 *)(*plVar18 + 0x48));
  uVar7 = SUB84(plVar17,0);
  if (((ulong)plVar17 & 0x100000000) == 0) {
    uVar7 = 1;
  }
  func_0x0001072f1de8();
  *(undefined4 *)((long)param_1 + 0x5fc) = uVar7;
  plVar18 = (long *)*param_4;
  func_0x0001072f226c();
  func_0x0001072f2950(*(undefined8 *)(*plVar18 + 0x48));
  uVar6 = ((ulong)plVar17 & 0x100000000) == 0;
  uVar7 = 100;
  if (!(bool)uVar6) {
    uVar7 = SUB84(plVar17,0);
  }
  func_0x0001072f1de8();
  *(undefined4 *)(param_1 + 0xc0) = uVar7;
  param_1[0xc2] = 0;
  param_1[0xc1] = 0;
  param_1[0xc4] = 0;
  param_1[0xc3] = 0;
  *(undefined4 *)(param_1 + 0xc5) = 0x3f800000;
  param_1[199] = 0;
  param_1[0xc6] = 0;
  param_1[0xc9] = 0;
  param_1[200] = 0;
  param_1[0xcb] = 0;
  param_1[0xca] = 0;
  *(undefined4 *)(param_1 + 0xcc) = 10;
  *(undefined1 *)(param_1 + 0xcd) = 0;
  *(undefined1 *)(param_1 + 0xce) = 0;
  _bzero(param_1 + 0xcf,0x2e8);
  func_0x0001078696e8(param_1 + 300);
  param_1[0x131] = 0;
  param_1[0x130] = 0;
  param_1[0x12f] = 0;
  param_1[0x132] = puVar9;
  param_1[0x133] = 0;
  FUN_10726ed14(param_1 + 0x134);
  param_1[0x136] = param_1;
  uVar2 = *param_4;
  uVar3 = param_4[1];
  if (uVar3 != 0) {
    plVar17 = (long *)(uVar3 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *plVar17 = *plVar17 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uStack_e8 = param_1[0xbe];
  ppuStack_f0 = (undefined **)*puVar1;
  param_1[0xbd] = uVar2;
  param_1[0xbe] = uVar3;
  func_0x00010726eedc(&ppuStack_f0);
  ppuStack_f0 = (undefined **)CONCAT71(ppuStack_f0._1_7_,1);
  lVar12 = *(long *)(*param_4 + 8) + 0xb70;
  FUN_10724e2c8(lVar12,&ppuStack_f0);
  *(char *)(param_1 + 0xb4) = (char)lVar12;
  plVar17 = (long *)*param_4;
  func_0x0001072f226c();
  (**(code **)(*plVar17 + 0x28))(plVar17,&ppuStack_f0);
  uVar8 = (uint)plVar17;
  func_0x0001072f1de8();
  if (((uVar8 ^ 0xffffffff) & 0x101) == 0) {
    uVar6 = param_1[0x10] == -1;
    puStack_a0 = puVar11;
    if (!(bool)uVar6) {
      func_0x0001072f2b78();
      __ZNSt3__111__call_onceERVmPvPFvS2_E();
    }
    lVar12 = param_1[0xd];
    lStack_b8 = param_1[0xe];
    lStack_c0 = lVar12;
    if (lStack_b8 != 0) {
      do {
        func_0x0001072f1cd8();
      } while (extraout_w10_02 != 0);
    }
    if (lVar12 != 0) {
      ppuStack_f0 = &PTR_DAT_110d22ce8;
      uStack_e8 = 0;
      uStack_d0 = 0;
      uStack_e0 = 0;
      uStack_de = 0;
      uVar13 = param_1[0x134];
      lVar15 = param_1[0x135];
      if (lVar15 != 0) {
        do {
          func_0x0001072f1cd8();
        } while (extraout_w10_03 != 0);
      }
      uVar14 = param_1[0x136];
      uStack_b0 = 0;
      uStack_a8 = 0;
      puStack_a0 = (undefined8 *)0x0;
      uStack_98 = 0;
      uStack_130 = uVar13;
      lStack_128 = lVar15;
      uStack_120 = uVar14;
      func_0x00010725b1d4(&puStack_a0);
      puVar10 = &uStack_b0;
      func_0x00010725b1d4();
      puStack_78 = (undefined8 *)0x0;
      puStack_118 = param_1;
      func_0x0001072f224c();
      *puVar10 = &PTR_SUB_11099d648;
      puVar10[1] = uVar13;
      uStack_130 = 0;
      lStack_128 = 0;
      puVar10[2] = lVar15;
      puVar10[3] = uVar14;
      puVar10[4] = param_1;
      puStack_78 = puVar10;
      func_0x000104bfe6cc(&uStack_110,lVar12,&ppuStack_f0,auStack_90);
      puVar10 = (undefined8 *)0x10;
      __Znwm();
      puVar10[1] = uStack_108;
      *puVar10 = uStack_110;
      uStack_110 = 0;
      uStack_108 = 0;
      uStack_f8 = 0;
      FUN_1072f060c(puVar16);
      FUN_1072f05e8(&uStack_f8);
      func_0x000104bfec18(&uStack_110);
      func_0x000104bfeb04(auStack_90);
      func_0x00010725b1d4(&uStack_130);
      func_0x00010b5cfe38(&ppuStack_f0);
      puStack_148 = puVar11;
      puStack_140 = puVar9;
    }
    plVar17 = &lStack_c0;
    FUN_1072db19c(plVar17);
  }
  func_0x0001072f1710(uStack_70);
  if (!(bool)uVar6) {
    ___stack_chk_fail();
    func_0x000104bfec18(&uStack_110);
    func_0x000104bfeb04(auStack_90);
    func_0x00010725b1d4(&uStack_130);
    func_0x00010b5cfe38(&ppuStack_f0);
    FUN_1072db19c(&lStack_c0);
    func_0x0001072f0708(param_1 + 0x134);
    FUN_10725b238(param_1 + 0x132);
    FUN_1072e8878(param_1 + 0xcd);
    func_0x0001072e88ac(param_1 + 0xc9);
    func_0x0001072e891c(param_1 + 0xc6);
    FUN_1072bb790(param_1 + 0xc1);
    func_0x00010726eedc(puVar1);
    do {
      FUN_10726ef8c(param_1 + 0xb5);
      func_0x0001072f06cc(param_1 + 0x8d);
      FUN_10726ff1c(param_1 + 0x89);
      func_0x0001072f0680(param_1 + 0x84);
      FUN_1072bb81c(param_1 + 0x7e);
      FUN_10726ff7c(param_1 + 0x79);
      func_0x0001072f0634(param_1 + 0x74);
      func_0x000107276ba4(param_1 + 0x5f);
      FUN_1072bbee8(param_1 + 0x3b);
      FUN_1072bbee8(param_1 + 0x17);
      FUN_1072db8c4(param_1 + 0x12);
      FUN_1072f05e8(puVar16);
      func_0x0001072db154(puStack_148);
      func_0x00010726eeb8(param_1 + 7);
      FUN_10724ae28(param_1 + 4);
      FUN_10724b54c(puStack_140);
      __Unwind_Resume(plVar17);
      func_0x0001072f1a60();
    } while( true );
  }
  return param_1;
}



/* Entry: 1072e09a0; end: 1072e09a3;  */

undefined8 * FUN_1072e09a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099d608;
  func_0x0001072ee0d8(param_1 + 0x16);
  func_0x000107276ba4(param_1 + 1);
  return param_1;
}



/* Entry: 1072e09a4; end: 1072e0a87;  */

undefined8 * FUN_1072e09a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099d528;
  func_0x0001072f0708(param_1 + 0x134);
  FUN_10725b238(param_1 + 0x132);
  FUN_1072e8878(param_1 + 0xcd);
  func_0x0001072e88ac(param_1 + 0xc9);
  func_0x0001072e891c(param_1 + 0xc6);
  FUN_1072bb790(param_1 + 0xc1);
  func_0x00010726eedc(param_1 + 0xbd);
  FUN_10726ef8c(param_1 + 0xb5);
  func_0x0001072f06cc(param_1 + 0x8d);
  FUN_10726ff1c(param_1 + 0x89);
  func_0x0001072f0680(param_1 + 0x84);
  FUN_1072bb81c(param_1 + 0x7e);
  FUN_10726ff7c(param_1 + 0x79);
  func_0x0001072f0634(param_1 + 0x74);
  func_0x000107276ba4(param_1 + 0x5f);
  FUN_1072bbee8(param_1 + 0x3b);
  FUN_1072bbee8(param_1 + 0x17);
  FUN_1072db8c4(param_1 + 0x12);
  FUN_1072f05e8(param_1 + 0x11);
  func_0x0001072db154(param_1 + 9);
  func_0x00010726eeb8(param_1 + 7);
  FUN_10724ae28(param_1 + 4);
  FUN_10724b54c(param_1 + 1);
  return param_1;
}



/* Entry: 1072e0a88; end: 1072e0a8b;  */

undefined8 * FUN_1072e0a88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099d528;
  func_0x0001072f0708(param_1 + 0x134);
  FUN_10725b238(param_1 + 0x132);
  FUN_1072e8878(param_1 + 0xcd);
  func_0x0001072e88ac(param_1 + 0xc9);
  func_0x0001072e891c(param_1 + 0xc6);
  FUN_1072bb790(param_1 + 0xc1);
  func_0x00010726eedc(param_1 + 0xbd);
  FUN_10726ef8c(param_1 + 0xb5);
  func_0x0001072f06cc(param_1 + 0x8d);
  FUN_10726ff1c(param_1 + 0x89);
  func_0x0001072f0680(param_1 + 0x84);
  FUN_1072bb81c(param_1 + 0x7e);
  FUN_10726ff7c(param_1 + 0x79);
  func_0x0001072f0634(param_1 + 0x74);
  func_0x000107276ba4(param_1 + 0x5f);
  FUN_1072bbee8(param_1 + 0x3b);
  FUN_1072bbee8(param_1 + 0x17);
  FUN_1072db8c4(param_1 + 0x12);
  FUN_1072f05e8(param_1 + 0x11);
  func_0x0001072db154(param_1 + 9);
  func_0x00010726eeb8(param_1 + 7);
  FUN_10724ae28(param_1 + 4);
  FUN_10724b54c(param_1 + 1);
  return param_1;
}



/* Entry: 1072e0a8c; end: 1072e0a9f;  */

void FUN_1072e0a8c(void)

{
  FUN_1072e09a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072e73a8; end: 1072e73bf;  */

void FUN_1072e73a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  int extraout_w8;
  undefined8 extraout_x8;
  undefined8 *extraout_x9;
  undefined8 *unaff_x19;
  long lVar2;
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  func_0x0001072f17a8();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_48 = extraout_x8;
  func_0x0001072f2638(*param_2);
  puVar1 = param_2;
  if (!(bool)in_ZR) {
    puVar1 = extraout_x9;
  }
  for (lVar2 = (long)*(int *)(param_2 + 1) << 3; lVar2 != 0; lVar2 = lVar2 + -8) {
    FUN_107262e9c(auStack_80,*puVar1);
    FUN_1072999ec();
    func_0x0001072f1cfc();
    puVar1 = puVar1 + 1;
  }
  FUN_1072ebc48(*unaff_x19,unaff_x19[1]);
  func_0x0001072f1710(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_10726e078();
    func_0x0001072f1e28();
    func_0x0001072f2a84();
    if (extraout_w8 == 1) {
      func_0x000107299810();
    }
    else {
      FUN_10726fe1c();
      *(undefined1 *)(unaff_x19 + 3) = 1;
    }
    return;
  }
  return;
}



/* Entry: 1072e73c0; end: 1072e7467;  */

void FUN_1072e73c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  int extraout_w8;
  undefined8 extraout_x8;
  undefined8 *extraout_x9;
  undefined8 *unaff_x19;
  long lVar2;
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  func_0x0001072f17a8();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_38 = extraout_x8;
  func_0x0001072f2638(*param_2);
  puVar1 = param_2;
  if (!(bool)in_ZR) {
    puVar1 = extraout_x9;
  }
  for (lVar2 = (long)*(int *)(param_2 + 1) << 3; lVar2 != 0; lVar2 = lVar2 + -8) {
    FUN_107262e9c(auStack_70,*puVar1);
    FUN_1072999ec();
    func_0x0001072f1cfc();
    puVar1 = puVar1 + 1;
  }
  FUN_1072ebc48(*unaff_x19,unaff_x19[1]);
  func_0x0001072f1710(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_10726e078();
    func_0x0001072f1e28();
    func_0x0001072f2a84();
    if (extraout_w8 == 1) {
      func_0x000107299810();
    }
    else {
      FUN_10726fe1c();
      *(undefined1 *)(unaff_x19 + 3) = 1;
    }
    return;
  }
  return;
}



/* Entry: 1072e7468; end: 1072e74cf;  */

void FUN_1072e7468(void)

{
  int extraout_w8;
  long unaff_x19;
  
  func_0x0001072f2a84();
  if (extraout_w8 == 1) {
    func_0x000107299810();
  }
  else {
    FUN_10726fe1c();
    *(undefined1 *)(unaff_x19 + 0x18) = 1;
  }
  return;
}



/* Entry: 1072e74d0; end: 1072e7573;  */

void FUN_1072e74d0(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  undefined8 extraout_x8;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x19;
  undefined1 auStack_e0 [56];
  long alStack_a8 [14];
  undefined8 uStack_38;
  
  plVar3 = param_2;
  func_0x0001072f17a8();
  uStack_38 = extraout_x8;
  func_0x000107277eec();
  lVar5 = param_2[1];
  for (lVar4 = *param_2; bVar2 = lVar4 == lVar5, !bVar2; lVar4 = lVar4 + 0x38) {
    func_0x000104c2fe00(auStack_e0,lVar4);
    FUN_107277488(alStack_a8,auStack_e0);
    plVar3 = alStack_a8;
    param_1 = unaff_x19;
    FUN_1072d2ad0();
    func_0x0001072f1b68();
    func_0x0001072f1cfc();
  }
  func_0x0001072f1710(uStack_38);
  if (bVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072f1b68();
  func_0x0001072f1cfc();
  FUN_10726b188();
  func_0x0001072f1e28();
  if ((char)plVar3[5] == '\x01') {
    func_0x0001072f1c10();
    unaff_x19[1] = 0;
    *unaff_x19 = 0;
    unaff_x19[3] = 0;
    unaff_x19[2] = 0;
    *(int *)(unaff_x19 + 4) = (int)plVar3[4];
    FUN_1072e9060();
    param_1 = param_1 + 2;
    while (param_1 = (long *)*param_1, param_1 != (long *)0x0) {
      FUN_1072e91d0();
    }
    return;
  }
  lVar4 = *param_3;
  *param_3 = 0;
  *unaff_x19 = lVar4;
  lVar6 = param_3[2];
  lVar5 = param_3[1];
  unaff_x19[2] = param_3[2];
  unaff_x19[1] = lVar5;
  param_3[1] = 0;
  lVar5 = param_3[3];
  unaff_x19[3] = lVar5;
  *(int *)(unaff_x19 + 4) = (int)param_3[4];
  if (lVar5 != 0) {
    uVar7 = *(ulong *)(lVar6 + 8);
    uVar8 = unaff_x19[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar7 = uVar8 - 1 & uVar7;
    }
    else if (uVar8 <= uVar7) {
      uVar1 = 0;
      if (uVar8 != 0) {
        uVar1 = uVar7 / uVar8;
      }
      uVar7 = uVar7 - uVar1 * uVar8;
    }
    *(long **)(lVar4 + uVar7 * 8) = unaff_x19 + 2;
    param_3[2] = 0;
    param_3[3] = 0;
  }
  return;
}



/* Entry: 1072e7574; end: 1072e758b;  */

void FUN_1072e7574(long *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  long *plVar7;
  
  if (*(char *)(param_2 + 0x28) == '\x01') {
    func_0x0001072f1c10();
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
    FUN_1072e9060();
    plVar7 = (long *)(unaff_x20 + 0x10);
    while (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0) {
      FUN_1072e91d0();
    }
    return;
  }
  lVar2 = *param_3;
  *param_3 = 0;
  *param_1 = lVar2;
  lVar4 = param_3[2];
  lVar3 = param_3[1];
  param_1[2] = param_3[2];
  param_1[1] = lVar3;
  param_3[1] = 0;
  lVar3 = param_3[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_3[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_3[2] = 0;
    param_3[3] = 0;
  }
  return;
}



/* Entry: 1072e758c; end: 1072e763f;  */

void FUN_1072e758c(long param_1,long param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_60 [48];
  
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    func_0x0001072f2ae0();
  }
  else if ((*(byte *)(param_3 + 3) & 1) == 0) {
    func_0x0001072f2ae0();
    FUN_1072e8ffc(param_1);
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  else {
    func_0x0001072f2b3c();
    plVar2 = (long *)(param_2 + 0x10);
    while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
      lVar1 = *param_3;
      FUN_1072e89bc(lVar1,param_3[1],plVar2 + 2);
      if (param_3[1] == lVar1) {
        FUN_1072e91d0(auStack_60,plVar2 + 2);
      }
    }
    func_0x0001072f27c0();
    func_0x0001072f245c();
  }
  return;
}



/* Entry: 1072e7640; end: 1072e7653;  */

void FUN_1072e7640(undefined8 param_1,long param_2,long param_3)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  if (*(char *)(param_2 + 0x38) == '\0') {
    param_2 = param_3;
  }
  func_0x0001000d03a8(param_1,param_2);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 1072e7654; end: 1072e7827;  */

void FUN_1072e7654(undefined1 *param_1)

{
  bool bVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  long unaff_x21;
  undefined8 *puVar4;
  long *plVar5;
  undefined1 auStack_2f8 [40];
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  undefined1 auStack_80 [40];
  undefined8 uStack_58;
  
  func_0x0001072f1d6c();
  func_0x0001072f1810();
  puVar4 = (undefined8 *)(param_1 + 0x60);
  uStack_58 = extraout_x8;
  while (puVar4 = (undefined8 *)*puVar4, puVar4 != (undefined8 *)0x0) {
    if ((unaff_x19[0x28] & 1) == 0) {
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2b0 = 0x3f800000;
      FUN_107270748();
      FUN_10726ea70(&uStack_2d0);
    }
    param_1 = unaff_x19;
    func_0x0001072e89a4();
    in_ZR = unaff_x20[0x28] == '\x01';
    if ((bool)in_ZR) {
      func_0x0001072f286c();
      bVar1 = param_1 != (undefined1 *)0x0;
      param_1 = (undefined1 *)0x0;
      if (bVar1) {
        param_1 = unaff_x20;
        func_0x0001072ec864();
      }
    }
  }
  plVar5 = (long *)(unaff_x21 + 0x38);
  while( true ) {
    iVar2 = (int)param_1;
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) break;
    if ((unaff_x20[0x28] & 1) == 0) {
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2b0 = 0x3f800000;
      func_0x000107270764();
      FUN_10726eafc(&uStack_2d0);
    }
    puVar3 = auStack_2f8;
    FUN_107271acc(puVar3,plVar5 + 0x53);
    func_0x0001072f27ec();
    func_0x0001072f286c();
    func_0x0001072f27ec();
    if (puVar3 != (undefined1 *)0x0) {
      FUN_107271b04(auStack_2f8,*(undefined8 *)(puVar3 + 0x2a8),0);
    }
    FUN_1072639d8(&uStack_2d0,plVar5 + 9);
    FUN_107271acc(auStack_80,auStack_2f8);
    func_0x0001072f27ec();
    FUN_1072e78d4();
    FUN_1072e7a8c();
    func_0x000107264b0c(&uStack_2d0);
    in_ZR = unaff_x19[0x28] == '\x01';
    if ((bool)in_ZR) {
      FUN_1072eb630();
    }
    param_1 = auStack_2f8;
    func_0x000107264b34();
  }
  func_0x0001072f1710(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001072f2a90();
    FUN_10726eafc();
    func_0x0001072f1abc();
    func_0x0001072f1b80();
    func_0x0001000e107c();
    if (iVar2 != 0) {
      puVar3 = unaff_x20 + 0x18;
      func_0x0001000e107c(puVar3,unaff_x19 + 0x18);
      if ((int)puVar3 != 0) {
        func_0x0001000e107c(unaff_x20 + 0x30,unaff_x19 + 0x30);
      }
    }
    return;
  }
  return;
}



/* Entry: 1072e7828; end: 1072e787b;  */

void FUN_1072e7828(int param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072f1b80();
  func_0x0001000e107c();
  if (param_1 != 0) {
    lVar1 = unaff_x20 + 0x18;
    func_0x0001000e107c(lVar1,unaff_x19 + 0x18);
    if ((int)lVar1 != 0) {
      func_0x0001000e107c(unaff_x20 + 0x30,unaff_x19 + 0x30);
    }
  }
  return;
}



/* Entry: 1072e787c; end: 1072e7893;  */

long * FUN_1072e787c(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 3) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  plVar1 = (long *)*param_1;
  if (param_1[1] - (long)plVar1 == param_2[1] - *param_2) {
    FUN_1072ed9e8();
    return plVar1;
  }
  return (long *)0x0;
}



/* Entry: 1072e7894; end: 1072e78bb;  */

long FUN_1072e7894(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (param_1[1] - lVar1 == param_2[1] - *param_2) {
    FUN_1072ed9e8();
    return lVar1;
  }
  return 0;
}



/* Entry: 1072e78bc; end: 1072e78d3;  */

long * FUN_1072e78bc(long *param_1,undefined8 param_2)

{
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar3;
  long *extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x10;
  long *unaff_x19;
  ulong unaff_x20;
  long *plVar4;
  ulong unaff_x23;
  ulong unaff_x24;
  long *unaff_x25;
  
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  func_0x0001072f2570();
  func_0x0001072f193c();
  func_0x0001072f2a64();
  if (unaff_x23 != 0) {
    func_0x0001072f2a58();
    if ((bool)in_ZR) {
      unaff_x24 = (ulong)unaff_x25 & unaff_x20;
    }
    else {
      func_0x0001072f2b04();
      if ((bool)in_CY) {
        func_0x0001072f21dc();
      }
    }
    plVar4 = *(long **)(*unaff_x19 + unaff_x24 * 8);
    if (plVar4 != (long *)0x0) {
      do {
        while( true ) {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_1072e7970;
          uVar2 = plVar4[1];
          in_NG = (long)(uVar2 - unaff_x20) < 0;
          in_ZR = uVar2 == unaff_x20;
          if (!(bool)in_ZR) break;
          param_1 = plVar4 + 2;
          func_0x000104c32db4(param_1,param_2);
          if (((ulong)param_1 & 1) != 0) goto LAB_1072e7a60;
        }
        if ((unaff_x23 & (ulong)unaff_x25) == 0) {
          uVar2 = uVar2 & (ulong)unaff_x25;
        }
        else if (unaff_x23 <= uVar2) {
          func_0x0001072f2298();
          uVar2 = extraout_x8;
        }
        in_NG = (long)(uVar2 - unaff_x24) < 0;
        in_ZR = uVar2 == unaff_x24;
      } while ((bool)in_ZR);
    }
  }
LAB_1072e7970:
  func_0x0001072f2824();
  *param_1 = 0;
  param_1[1] = unaff_x20;
  func_0x000104c2fe00(param_1 + 2,param_2);
  _bzero(param_1 + 9,0x278);
  FUN_1072f02dc(param_1 + 9);
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0x3f800000;
  func_0x0001072f230c();
  func_0x0001072f17bc();
  if ((unaff_x23 == 0) || (func_0x0001072f1ac4(), uVar2 = unaff_x24, (bool)in_NG)) {
    func_0x0001072f18b4();
    uVar1 = unaff_x23 == 3;
    func_0x0001072f16d8();
    func_0x000107271740();
    func_0x0001072f1d44();
    if ((bool)uVar1) {
      in_ZR = 1;
      uVar2 = extraout_x8_00 & unaff_x20;
    }
    else {
      in_ZR = unaff_x20 == unaff_x23;
      uVar2 = unaff_x20;
      if (unaff_x23 <= unaff_x20) {
        func_0x0001072f21dc();
        uVar2 = unaff_x24;
      }
    }
  }
  func_0x0001072f2a38();
  if (extraout_x9 == (long *)0x0) {
    *param_1 = *unaff_x25;
    *unaff_x25 = (long)param_1;
    *(long **)(extraout_x8_01 + uVar2 * 8) = unaff_x25;
    if (*param_1 != 0) {
      func_0x0001072f1b98();
      lVar3 = extraout_x8_02;
      if ((bool)in_ZR) {
        uVar2 = extraout_x9_00 & extraout_x10;
      }
      else {
        uVar2 = extraout_x9_00;
        if (unaff_x23 <= extraout_x9_00) {
          func_0x0001072f235c();
          lVar3 = extraout_x8_03;
          uVar2 = extraout_x9_01;
        }
      }
      *(long **)(lVar3 + uVar2 * 8) = param_1;
    }
  }
  else {
    *param_1 = *extraout_x9;
    *extraout_x9 = (long)param_1;
  }
  func_0x0001072f1780();
  FUN_107271e8c();
  plVar4 = param_1;
LAB_1072e7a60:
  return plVar4 + 9;
}



/* Entry: 1072e78d4; end: 1072e7a8b;  */

long * FUN_1072e78d4(long *param_1,undefined8 param_2)

{
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar3;
  long *extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x10;
  long *unaff_x19;
  ulong unaff_x20;
  long *plVar4;
  ulong unaff_x23;
  ulong unaff_x24;
  long *unaff_x25;
  
  func_0x0001072f2570();
  func_0x0001072f193c();
  func_0x0001072f2a64();
  if (unaff_x23 != 0) {
    func_0x0001072f2a58();
    if ((bool)in_ZR) {
      unaff_x24 = (ulong)unaff_x25 & unaff_x20;
    }
    else {
      func_0x0001072f2b04();
      if ((bool)in_CY) {
        func_0x0001072f21dc();
      }
    }
    plVar4 = *(long **)(*unaff_x19 + unaff_x24 * 8);
    if (plVar4 != (long *)0x0) {
      do {
        while( true ) {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_1072e7970;
          uVar2 = plVar4[1];
          in_NG = (long)(uVar2 - unaff_x20) < 0;
          in_ZR = uVar2 == unaff_x20;
          if (!(bool)in_ZR) break;
          param_1 = plVar4 + 2;
          func_0x000104c32db4(param_1,param_2);
          if (((ulong)param_1 & 1) != 0) goto LAB_1072e7a60;
        }
        if ((unaff_x23 & (ulong)unaff_x25) == 0) {
          uVar2 = uVar2 & (ulong)unaff_x25;
        }
        else if (unaff_x23 <= uVar2) {
          func_0x0001072f2298();
          uVar2 = extraout_x8;
        }
        in_NG = (long)(uVar2 - unaff_x24) < 0;
        in_ZR = uVar2 == unaff_x24;
      } while ((bool)in_ZR);
    }
  }
LAB_1072e7970:
  func_0x0001072f2824();
  *param_1 = 0;
  param_1[1] = unaff_x20;
  func_0x000104c2fe00(param_1 + 2,param_2);
  _bzero(param_1 + 9,0x278);
  FUN_1072f02dc(param_1 + 9);
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0x3f800000;
  func_0x0001072f230c();
  func_0x0001072f17bc();
  if ((unaff_x23 == 0) || (func_0x0001072f1ac4(), uVar2 = unaff_x24, (bool)in_NG)) {
    func_0x0001072f18b4();
    uVar1 = unaff_x23 == 3;
    func_0x0001072f16d8();
    func_0x000107271740();
    func_0x0001072f1d44();
    if ((bool)uVar1) {
      in_ZR = 1;
      uVar2 = extraout_x8_00 & unaff_x20;
    }
    else {
      in_ZR = unaff_x20 == unaff_x23;
      uVar2 = unaff_x20;
      if (unaff_x23 <= unaff_x20) {
        func_0x0001072f21dc();
        uVar2 = unaff_x24;
      }
    }
  }
  func_0x0001072f2a38();
  if (extraout_x9 == (long *)0x0) {
    *param_1 = *unaff_x25;
    *unaff_x25 = (long)param_1;
    *(long **)(extraout_x8_01 + uVar2 * 8) = unaff_x25;
    if (*param_1 != 0) {
      func_0x0001072f1b98();
      lVar3 = extraout_x8_02;
      if ((bool)in_ZR) {
        uVar2 = extraout_x9_00 & extraout_x10;
      }
      else {
        uVar2 = extraout_x9_00;
        if (unaff_x23 <= extraout_x9_00) {
          func_0x0001072f235c();
          lVar3 = extraout_x8_03;
          uVar2 = extraout_x9_01;
        }
      }
      *(long **)(lVar3 + uVar2 * 8) = param_1;
    }
  }
  else {
    *param_1 = *extraout_x9;
    *extraout_x9 = (long)param_1;
  }
  func_0x0001072f1780();
  FUN_107271e8c();
  plVar4 = param_1;
LAB_1072e7a60:
  return plVar4 + 9;
}



/* Entry: 1072e7a8c; end: 1072e7aef;  */

void FUN_1072e7a8c(long param_1)

{
  long unaff_x19;
  
  func_0x0001072f1b80();
  FUN_1072edc2c();
  func_0x0001072ec784(param_1 + 0x250,unaff_x19 + 0x250);
  return;
}



/* Entry: 1072e7af0; end: 1072e7b0f;  */

void FUN_1072e7af0(long param_1)

{
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    func_0x0001072e7ab8();
  }
  return;
}



/* Entry: 1072e7b10; end: 1072e7c1f;  */

void FUN_1072e7b10(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 extraout_x8;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lStack_80;
  undefined1 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  uVar4 = *param_2;
  lVar5 = param_2[1];
  puVar9 = *(undefined8 **)(param_1 + 0x650);
  if (puVar9 < *(undefined8 **)(param_1 + 0x658)) {
    *puVar9 = uVar4;
    puVar9[1] = lVar5;
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    puVar9 = puVar9 + 2;
LAB_1072e7c0c:
    *(undefined8 **)(param_1 + 0x650) = puVar9;
    return;
  }
  lVar12 = *(long *)(param_1 + 0x648);
  lVar13 = (long)puVar9 - lVar12;
  lVar14 = lVar13 >> 4;
  uVar2 = lVar14 + 1;
  lVar8 = param_1;
  if (uVar2 >> 0x3c == 0) {
    uVar10 = (long)*(undefined8 **)(param_1 + 0x658) - lVar12;
    uVar11 = (long)uVar10 >> 3;
    if (uVar11 <= uVar2) {
      uVar11 = uVar2;
    }
    if (0x7fffffffffffffef < uVar10) {
      uVar11 = 0xfffffffffffffff;
    }
    if (uVar11 >> 0x3c == 0) {
      lVar8 = uVar11 << 4;
      __Znwm();
      puVar3 = (undefined8 *)(lVar8 + lVar13);
      *puVar3 = uVar4;
      puVar3[1] = lVar5;
      if (lVar5 != 0) {
        plVar1 = (long *)(lVar5 + 8);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = *plVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        lVar12 = *(long *)(param_1 + 0x648);
        lVar13 = *(long *)(param_1 + 0x650) - lVar12;
        lVar14 = lVar13 >> 4;
      }
      puVar9 = puVar3 + 2;
      _memcpy(puVar3 + lVar14 * -2,lVar12,lVar13);
      *(undefined8 **)(param_1 + 0x648) = puVar3 + lVar14 * -2;
      *(undefined8 **)(param_1 + 0x650) = puVar9;
      *(ulong *)(param_1 + 0x658) = lVar8 + uVar11 * 0x10;
      if (lVar12 != 0) {
        func_0x0001072f1dd8();
      }
      goto LAB_1072e7c0c;
    }
  }
  else {
    FUN_1072f0138();
  }
  func_0x000104bd35f4();
  pcStack_58 = FUN_1072e7c20;
  lStack_80 = lVar8 + 0x2f8;
  uStack_78 = 1;
  lStack_70 = lVar12;
  lStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_10724e404();
  FUN_1072f00b4(extraout_x8,lVar8 + 0x1d8);
  FUN_10724e49c(&lStack_80);
  return;
}



/* Entry: 1072e7c20; end: 1072e7c73;  */

void FUN_1072e7c20(undefined8 param_1,long param_2)

{
  long lStack_30;
  undefined1 uStack_28;
  
  lStack_30 = param_2 + 0x2f8;
  uStack_28 = 1;
  FUN_10724e404();
  FUN_1072f00b4(param_1,param_2 + 0x1d8);
  FUN_10724e49c(&lStack_30);
  return;
}



/* Entry: 1072e7c74; end: 1072e7d53;  */

void FUN_1072e7c74(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined1 auStack_a0 [16];
  long lStack_90;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_40 [16];
  
  puVar1 = (undefined8 *)0x0;
  if ((*(byte *)(param_1 + 0x418) & 1) == 0) {
    func_0x0001072f2ae0();
  }
  else {
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = 0x3f800000;
    func_0x0001072f211c();
    for (plVar2 = (long *)lStack_90; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if ((*(char *)(param_1 + 0xf0) != '\x01') || (func_0x0001072f2900(), ((ulong)puVar1 & 1) == 0)
         ) {
        func_0x0001072f1f88(plVar2[0x1c],plVar2[0x1b],auStack_40);
        puVar1 = (undefined8 *)(param_1 + 0x548);
        func_0x00010786eb68(puVar1,auStack_40,0);
        if ((int)puVar1 != 0) {
          puVar1 = &uStack_70;
          FUN_1072f0144(puVar1,plVar2 + 2);
          func_0x0001072f28c4();
        }
      }
    }
    func_0x0001072f27c0();
    FUN_1072bb81c(auStack_a0);
    FUN_1072bb83c(&uStack_70);
  }
  return;
}



/* Entry: 1072e7d54; end: 1072e7dfb;  */

void FUN_1072e7d54(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [16];
  long lStack_50;
  byte bStack_38;
  
  uVar1 = 0;
  func_0x0001072f211c();
  if ((bStack_38 & 1) == 0) {
    func_0x0001072f2ae0();
  }
  else {
    func_0x0001072f2b3c();
    for (plVar2 = (long *)lStack_50; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if ((*(char *)(param_1 + 0xf0) != '\x01') || (func_0x0001072f2900(), (uVar1 & 1) == 0)) {
        uVar1 = 0;
        FUN_1072f0144(auStack_90,plVar2 + 2);
        func_0x0001072f28c4();
      }
    }
    func_0x0001072f27c0();
    func_0x0001072f245c();
  }
  FUN_1072bb81c(auStack_60);
  return;
}



/* Entry: 1072e7dfc; end: 1072e7f9f;  */

void FUN_1072e7dfc(long *param_1,long param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined1 auStack_a8 [16];
  long lStack_98;
  char cStack_80;
  undefined1 auStack_78 [16];
  long lStack_68;
  
  func_0x0001072f211c(auStack_a8);
  if ((cStack_80 == '\x01') && (*(long *)(param_2 + 0x5c0) != 0)) {
    lStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    for (plVar5 = (long *)lStack_98; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      lVar3 = param_2 + 0x5a8;
      FUN_1072638f8(lVar3,plVar5 + 2);
      uVar2 = uStack_b8;
      if (lVar3 != 0) {
        ppuVar1 = &PTR_PTR_1132345d0;
        if (*(undefined ***)(lVar3 + 0x80) != (undefined **)0x0) {
          ppuVar1 = *(undefined ***)(lVar3 + 0x80);
        }
        if (*(char *)((long)ppuVar1 + 0x24) == '\x01') {
          if (uStack_b8 < uStack_b0) {
            FUN_1072639d8(uStack_b8,plVar5 + 9);
            uStack_b8 = uVar2 + 0x250;
          }
          else {
            plVar4 = &lStack_c0;
            FUN_1072ee514(&lStack_c0,(long)(uStack_b8 - lStack_c0) / 0x250 + 1);
            FUN_1072ee1f8(auStack_78,plVar4,(long)(uStack_b8 - lStack_c0) / 0x250,&uStack_b0);
            FUN_1072639d8(lStack_68,plVar5 + 9);
            lStack_68 = lStack_68 + 0x250;
            FUN_1072ee178(&lStack_c0,auStack_78);
            uVar2 = uStack_b8;
            func_0x0001072ee3b8(auStack_78);
            uStack_b8 = uVar2;
          }
        }
      }
    }
    param_1[1] = uStack_b8;
    *param_1 = lStack_c0;
    param_1[2] = uStack_b0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    lStack_c0 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    FUN_1072bbf74(&lStack_c0);
  }
  else {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  FUN_1072bb81c(auStack_a8);
  return;
}



/* Entry: 1072e7fa0; end: 1072e7fa7;  */

long * FUN_1072e7fa0(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 in_NG;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long *extraout_x8;
  long lVar7;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long *plVar8;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong uVar9;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  long *extraout_x10;
  long *plVar10;
  long *plVar11;
  long *extraout_x11;
  long *extraout_x11_00;
  long *extraout_x12;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *unaff_x23;
  long *plVar15;
  uint uVar16;
  long *plVar17;
  
  plVar5 = (long *)(param_1 + 0x468);
  func_0x0001072f227c();
  uVar1 = *(uint *)(param_1 + 0x540);
  plVar13 = (long *)(ulong)uVar1;
  *(uint *)(param_1 + 0x540) = uVar1 + 1;
  plVar17 = *(long **)(param_1 + 0x520);
  if (plVar17 != (long *)0x0) {
    uVar6 = (long)plVar17 - 1;
    uVar16 = (uint)plVar17;
    if (((ulong)plVar17 & uVar6) == 0) {
      unaff_x23 = (long *)(ulong)(uVar16 - 1 & uVar1);
      in_NG = false;
    }
    else {
      in_NG = (long)plVar17 - (long)plVar13 < 0;
      unaff_x23 = plVar13;
      if (plVar17 <= plVar13) {
        uVar2 = 0;
        if (uVar16 != 0) {
          uVar2 = uVar1 / uVar16;
        }
        unaff_x23 = (long *)(ulong)(uVar1 - uVar2 * uVar16);
      }
    }
    plVar14 = *(long **)(*(long *)(param_1 + 0x518) + (long)unaff_x23 * 8);
    if (plVar14 != (long *)0x0) {
      do {
        while( true ) {
          plVar14 = (long *)*plVar14;
          if (plVar14 == (long *)0x0) goto LAB_1072e806c;
          plVar8 = (long *)plVar14[1];
          if (plVar8 != plVar13) break;
          in_NG = (int)(*(uint *)(plVar14 + 2) - uVar1) < 0;
          if (*(uint *)(plVar14 + 2) == uVar1) goto LAB_1072e82c4;
        }
        if (((ulong)plVar17 & uVar6) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar6);
        }
        else if (plVar17 <= plVar8) {
          uVar9 = 0;
          if (plVar17 != (long *)0x0) {
            uVar9 = (ulong)plVar8 / (ulong)plVar17;
          }
          plVar8 = (long *)((long)plVar8 - uVar9 * (long)plVar17);
        }
        in_NG = (long)plVar8 - (long)unaff_x23 < 0;
      } while (plVar8 == unaff_x23);
    }
  }
LAB_1072e806c:
  func_0x0001072f2254();
  plVar14 = (long *)(param_1 + 0x528);
  *plVar5 = 0;
  plVar5[1] = (long)plVar13;
  *(uint *)(plVar5 + 2) = uVar1;
  plVar5[6] = 0;
  plVar8 = plVar5;
  func_0x0001072f1c28(*(undefined8 *)(param_1 + 0x530));
  if ((plVar17 != (long *)0x0) && (func_0x0001072f1c1c(), !(bool)in_NG)) goto LAB_1072e8250;
  bVar3 = (long *)0x2 < plVar17;
  bVar4 = plVar17 == (long *)0x3;
  func_0x0001072f1724((long)plVar17 << 1);
  plVar15 = extraout_x8;
  if (!bVar3 || bVar4) {
    plVar15 = extraout_x9;
  }
  if ((long)plVar15 - 1U == 0) {
    plVar15 = (long *)0x2;
  }
  else if (((ulong)plVar15 & (long)plVar15 - 1U) != 0) {
    func_0x0001072f2848();
    plVar17 = *(long **)(param_1 + 0x520);
    plVar15 = plVar8;
  }
  if (plVar17 < plVar15) {
LAB_1072e80fc:
    plVar17 = plVar15;
    FUN_1072ee088(plVar15);
    FUN_1072ee070(param_1 + 0x518,plVar17);
    plVar17 = (long *)0x0;
    *(long **)(param_1 + 0x520) = plVar15;
    lVar7 = *(long *)(param_1 + 0x518);
    while (plVar15 != plVar17) {
      func_0x0001072f1f90();
      lVar7 = extraout_x8_00;
      plVar17 = extraout_x9_00;
    }
    plVar8 = (long *)*plVar14;
    plVar17 = plVar15;
    if (plVar8 != (long *)0x0) {
      plVar10 = (long *)plVar8[1];
      uVar9 = (long)plVar15 - 1;
      uVar6 = 0;
      if (plVar15 != (long *)0x0) {
        uVar6 = (ulong)plVar10 / (ulong)plVar15;
      }
      plVar11 = plVar10;
      if (plVar15 <= plVar10) {
        plVar11 = (long *)((long)plVar10 - uVar6 * (long)plVar15);
      }
      if (((ulong)plVar15 & uVar9) == 0) {
        plVar11 = (long *)((ulong)plVar10 & uVar9);
      }
      *(long **)(lVar7 + (long)plVar11 * 8) = plVar14;
      while (plVar10 = plVar8, plVar8 = (long *)*plVar10, plVar8 != (long *)0x0) {
        plVar12 = (long *)plVar8[1];
        if (((ulong)plVar15 & uVar9) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar9);
        }
        else if (plVar15 <= plVar12) {
          uVar6 = 0;
          if (plVar15 != (long *)0x0) {
            uVar6 = (ulong)plVar12 / (ulong)plVar15;
          }
          plVar12 = (long *)((long)plVar12 - uVar6 * (long)plVar15);
        }
        if (plVar12 != plVar11) {
          if (*(long *)(lVar7 + (long)plVar12 * 8) == 0) {
            func_0x0001072f26e0();
            lVar7 = extraout_x8_02;
            uVar9 = extraout_x9_02;
            plVar8 = extraout_x12;
            plVar11 = extraout_x11_00;
          }
          else {
            *plVar10 = *plVar8;
            func_0x0001072f189c();
            lVar7 = extraout_x8_01;
            uVar9 = extraout_x9_01;
            plVar8 = extraout_x10;
            plVar11 = extraout_x11;
          }
        }
      }
    }
  }
  else if (plVar15 < plVar17) {
    func_0x0001072f1ff0((float)*(ulong *)(param_1 + 0x530),*(undefined4 *)(param_1 + 0x538));
    if ((plVar17 < (long *)0x3) || (((ulong)plVar17 & (long)plVar17 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x0001072f16f0();
    }
    if (plVar15 <= plVar8) {
      plVar15 = plVar8;
    }
    if (plVar15 < plVar17) {
      if (plVar15 != (long *)0x0) goto LAB_1072e80fc;
      FUN_1072ee070(param_1 + 0x518,0);
      *(undefined8 *)(param_1 + 0x520) = 0;
      plVar17 = (long *)0x0;
    }
    else {
      plVar17 = *(long **)(param_1 + 0x520);
    }
  }
  if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
    unaff_x23 = (long *)(ulong)((int)plVar17 - 1U & uVar1);
  }
  else {
    unaff_x23 = plVar13;
    if (plVar17 <= plVar13) {
      uVar6 = 0;
      if (plVar17 != (long *)0x0) {
        uVar6 = (ulong)plVar13 / (ulong)plVar17;
      }
      unaff_x23 = (long *)((long)plVar13 - uVar6 * (long)plVar17);
    }
  }
LAB_1072e8250:
  lVar7 = *(long *)(param_1 + 0x518);
  plVar8 = *(long **)(lVar7 + (long)unaff_x23 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar5 = *plVar14;
    *plVar14 = (long)plVar5;
    *(long **)(lVar7 + (long)unaff_x23 * 8) = plVar14;
    if (*plVar5 != 0) {
      plVar14 = *(long **)(*plVar5 + 8);
      if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
        plVar14 = (long *)((ulong)plVar14 & (long)plVar17 - 1U);
      }
      else if (plVar17 <= plVar14) {
        uVar6 = 0;
        if (plVar17 != (long *)0x0) {
          uVar6 = (ulong)plVar14 / (ulong)plVar17;
        }
        plVar14 = (long *)((long)plVar14 - uVar6 * (long)plVar17);
      }
      *(long **)(lVar7 + (long)plVar14 * 8) = plVar5;
    }
  }
  else {
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
  }
  *(long *)(param_1 + 0x530) = *(long *)(param_1 + 0x530) + 1;
  func_0x0001072f2704();
  plVar14 = plVar5;
LAB_1072e82c4:
  FUN_1072edee0(plVar14 + 3,param_2);
  func_0x0001072f23d4();
  return plVar13;
}



/* Entry: 1072e7fa8; end: 1072e830b;  */

long * FUN_1072e7fa8(long *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 in_NG;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long *extraout_x8;
  long lVar7;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long *plVar8;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong uVar9;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  long *extraout_x10;
  long *plVar10;
  long *plVar11;
  long *extraout_x11;
  long *extraout_x11_00;
  long *extraout_x12;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *unaff_x23;
  long *plVar15;
  uint uVar16;
  long *plVar17;
  
  plVar5 = param_1;
  func_0x0001072f227c();
  uVar1 = *(uint *)(param_1 + 0x1b);
  plVar13 = (long *)(ulong)uVar1;
  *(uint *)(param_1 + 0x1b) = uVar1 + 1;
  plVar17 = (long *)param_1[0x17];
  if (plVar17 != (long *)0x0) {
    uVar6 = (long)plVar17 - 1;
    uVar16 = (uint)plVar17;
    if (((ulong)plVar17 & uVar6) == 0) {
      unaff_x23 = (long *)(ulong)(uVar16 - 1 & uVar1);
      in_NG = false;
    }
    else {
      in_NG = (long)plVar17 - (long)plVar13 < 0;
      unaff_x23 = plVar13;
      if (plVar17 <= plVar13) {
        uVar2 = 0;
        if (uVar16 != 0) {
          uVar2 = uVar1 / uVar16;
        }
        unaff_x23 = (long *)(ulong)(uVar1 - uVar2 * uVar16);
      }
    }
    plVar14 = *(long **)(param_1[0x16] + (long)unaff_x23 * 8);
    if (plVar14 != (long *)0x0) {
      do {
        while( true ) {
          plVar14 = (long *)*plVar14;
          if (plVar14 == (long *)0x0) goto LAB_1072e806c;
          plVar8 = (long *)plVar14[1];
          if (plVar8 != plVar13) break;
          in_NG = (int)(*(uint *)(plVar14 + 2) - uVar1) < 0;
          if (*(uint *)(plVar14 + 2) == uVar1) goto LAB_1072e82c4;
        }
        if (((ulong)plVar17 & uVar6) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar6);
        }
        else if (plVar17 <= plVar8) {
          uVar9 = 0;
          if (plVar17 != (long *)0x0) {
            uVar9 = (ulong)plVar8 / (ulong)plVar17;
          }
          plVar8 = (long *)((long)plVar8 - uVar9 * (long)plVar17);
        }
        in_NG = (long)plVar8 - (long)unaff_x23 < 0;
      } while (plVar8 == unaff_x23);
    }
  }
LAB_1072e806c:
  func_0x0001072f2254();
  plVar14 = param_1 + 0x18;
  *plVar5 = 0;
  plVar5[1] = (long)plVar13;
  *(uint *)(plVar5 + 2) = uVar1;
  plVar5[6] = 0;
  plVar8 = plVar5;
  func_0x0001072f1c28(param_1[0x19]);
  if ((plVar17 != (long *)0x0) && (func_0x0001072f1c1c(), !(bool)in_NG)) goto LAB_1072e8250;
  bVar3 = (long *)0x2 < plVar17;
  bVar4 = plVar17 == (long *)0x3;
  func_0x0001072f1724((long)plVar17 << 1);
  plVar15 = extraout_x8;
  if (!bVar3 || bVar4) {
    plVar15 = extraout_x9;
  }
  if ((long)plVar15 - 1U == 0) {
    plVar15 = (long *)0x2;
  }
  else if (((ulong)plVar15 & (long)plVar15 - 1U) != 0) {
    func_0x0001072f2848();
    plVar17 = (long *)param_1[0x17];
    plVar15 = plVar8;
  }
  if (plVar17 < plVar15) {
LAB_1072e80fc:
    plVar17 = plVar15;
    FUN_1072ee088(plVar15);
    FUN_1072ee070(param_1 + 0x16,plVar17);
    plVar17 = (long *)0x0;
    param_1[0x17] = (long)plVar15;
    lVar7 = param_1[0x16];
    while (plVar15 != plVar17) {
      func_0x0001072f1f90();
      lVar7 = extraout_x8_00;
      plVar17 = extraout_x9_00;
    }
    plVar8 = (long *)*plVar14;
    plVar17 = plVar15;
    if (plVar8 != (long *)0x0) {
      plVar10 = (long *)plVar8[1];
      uVar9 = (long)plVar15 - 1;
      uVar6 = 0;
      if (plVar15 != (long *)0x0) {
        uVar6 = (ulong)plVar10 / (ulong)plVar15;
      }
      plVar11 = plVar10;
      if (plVar15 <= plVar10) {
        plVar11 = (long *)((long)plVar10 - uVar6 * (long)plVar15);
      }
      if (((ulong)plVar15 & uVar9) == 0) {
        plVar11 = (long *)((ulong)plVar10 & uVar9);
      }
      *(long **)(lVar7 + (long)plVar11 * 8) = plVar14;
      while (plVar10 = plVar8, plVar8 = (long *)*plVar10, plVar8 != (long *)0x0) {
        plVar12 = (long *)plVar8[1];
        if (((ulong)plVar15 & uVar9) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar9);
        }
        else if (plVar15 <= plVar12) {
          uVar6 = 0;
          if (plVar15 != (long *)0x0) {
            uVar6 = (ulong)plVar12 / (ulong)plVar15;
          }
          plVar12 = (long *)((long)plVar12 - uVar6 * (long)plVar15);
        }
        if (plVar12 != plVar11) {
          if (*(long *)(lVar7 + (long)plVar12 * 8) == 0) {
            func_0x0001072f26e0();
            lVar7 = extraout_x8_02;
            uVar9 = extraout_x9_02;
            plVar8 = extraout_x12;
            plVar11 = extraout_x11_00;
          }
          else {
            *plVar10 = *plVar8;
            func_0x0001072f189c();
            lVar7 = extraout_x8_01;
            uVar9 = extraout_x9_01;
            plVar8 = extraout_x10;
            plVar11 = extraout_x11;
          }
        }
      }
    }
  }
  else if (plVar15 < plVar17) {
    func_0x0001072f1ff0((float)(ulong)param_1[0x19],(int)param_1[0x1a]);
    if ((plVar17 < (long *)0x3) || (((ulong)plVar17 & (long)plVar17 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x0001072f16f0();
    }
    if (plVar15 <= plVar8) {
      plVar15 = plVar8;
    }
    if (plVar15 < plVar17) {
      if (plVar15 != (long *)0x0) goto LAB_1072e80fc;
      FUN_1072ee070(param_1 + 0x16,0);
      param_1[0x17] = 0;
      plVar17 = (long *)0x0;
    }
    else {
      plVar17 = (long *)param_1[0x17];
    }
  }
  if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
    unaff_x23 = (long *)(ulong)((int)plVar17 - 1U & uVar1);
  }
  else {
    unaff_x23 = plVar13;
    if (plVar17 <= plVar13) {
      uVar6 = 0;
      if (plVar17 != (long *)0x0) {
        uVar6 = (ulong)plVar13 / (ulong)plVar17;
      }
      unaff_x23 = (long *)((long)plVar13 - uVar6 * (long)plVar17);
    }
  }
LAB_1072e8250:
  lVar7 = param_1[0x16];
  plVar8 = *(long **)(lVar7 + (long)unaff_x23 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar5 = *plVar14;
    *plVar14 = (long)plVar5;
    *(long **)(lVar7 + (long)unaff_x23 * 8) = plVar14;
    if (*plVar5 != 0) {
      plVar14 = *(long **)(*plVar5 + 8);
      if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
        plVar14 = (long *)((ulong)plVar14 & (long)plVar17 - 1U);
      }
      else if (plVar17 <= plVar14) {
        uVar6 = 0;
        if (plVar17 != (long *)0x0) {
          uVar6 = (ulong)plVar14 / (ulong)plVar17;
        }
        plVar14 = (long *)((long)plVar14 - uVar6 * (long)plVar17);
      }
      *(long **)(lVar7 + (long)plVar14 * 8) = plVar5;
    }
  }
  else {
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
  }
  param_1[0x19] = param_1[0x19] + 1;
  func_0x0001072f2704();
  plVar14 = plVar5;
LAB_1072e82c4:
  FUN_1072edee0(plVar14 + 3,param_2);
  func_0x0001072f23d4();
  return plVar13;
}



/* Entry: 1072e830c; end: 1072e8313;  */

void FUN_1072e830c(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  
  func_0x0001072f227c();
  uVar7 = *(ulong *)(param_1 + 0x520);
  if ((uVar7 != 0) && (lVar4 = *(long *)(param_1 + 0x530), lVar4 != 0)) {
    uVar5 = (ulong)param_2;
    uVar9 = uVar7 - 1;
    uVar6 = (uint)uVar7;
    if ((uVar7 & uVar9) == 0) {
      uVar11 = (ulong)(uVar6 - 1 & param_2);
    }
    else {
      uVar11 = uVar5;
      if (uVar7 <= uVar5) {
        uVar1 = 0;
        if (uVar6 != 0) {
          uVar1 = param_2 / uVar6;
        }
        uVar11 = (ulong)(param_2 - uVar1 * uVar6);
      }
    }
    lVar10 = *(long *)(param_1 + 0x518);
    plVar8 = *(long **)(lVar10 + uVar11 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_1072e84d8;
          uVar13 = plVar8[1];
          if (uVar13 != uVar5) break;
          if (*(uint *)(plVar8 + 2) == param_2) {
            lVar12 = *plVar8;
            if ((uVar7 & uVar9) == 0) {
              uVar5 = uVar9 & uVar5;
            }
            else if (uVar7 <= uVar5) {
              uVar11 = 0;
              if (uVar7 != 0) {
                uVar11 = uVar5 / uVar7;
              }
              uVar5 = uVar5 - uVar11 * uVar7;
            }
            plVar3 = *(long **)(lVar10 + uVar5 * 8);
            do {
              plVar14 = plVar3;
              plVar3 = (long *)*plVar14;
            } while ((long *)*plVar14 != plVar8);
            if (plVar14 == (long *)(param_1 + 0x528)) {
LAB_1072e843c:
              if (lVar12 == 0) {
LAB_1072e8470:
                *(undefined8 *)(lVar10 + uVar5 * 8) = 0;
                lVar12 = *plVar8;
                goto LAB_1072e8478;
              }
              uVar11 = *(ulong *)(lVar12 + 8);
              if ((uVar7 & uVar9) == 0) {
                uVar13 = uVar11 & uVar9;
              }
              else {
                uVar13 = uVar11;
                if (uVar7 <= uVar11) {
                  uVar13 = 0;
                  if (uVar7 != 0) {
                    uVar13 = uVar11 / uVar7;
                  }
                  uVar13 = uVar11 - uVar13 * uVar7;
                }
              }
              if (uVar13 != uVar5) goto LAB_1072e8470;
LAB_1072e8480:
              if ((uVar7 & uVar9) == 0) {
                uVar11 = uVar11 & uVar9;
              }
              else if (uVar7 <= uVar11) {
                uVar9 = 0;
                if (uVar7 != 0) {
                  uVar9 = uVar11 / uVar7;
                }
                uVar11 = uVar11 - uVar9 * uVar7;
              }
              if (uVar11 != uVar5) {
                *(long **)(lVar10 + uVar11 * 8) = plVar14;
                lVar12 = *plVar8;
              }
            }
            else {
              uVar11 = plVar14[1];
              if ((uVar7 & uVar9) == 0) {
                uVar11 = uVar11 & uVar9;
              }
              else if (uVar7 <= uVar11) {
                uVar13 = 0;
                if (uVar7 != 0) {
                  uVar13 = uVar11 / uVar7;
                }
                uVar11 = uVar11 - uVar13 * uVar7;
              }
              if (uVar11 != uVar5) goto LAB_1072e843c;
LAB_1072e8478:
              if (lVar12 != 0) {
                uVar11 = *(ulong *)(lVar12 + 8);
                goto LAB_1072e8480;
              }
            }
            *plVar14 = lVar12;
            *plVar8 = 0;
            *(long *)(param_1 + 0x530) = lVar4 + -1;
            func_0x0001072f2704();
            goto LAB_1072e84d8;
          }
        }
        if ((uVar7 & uVar9) == 0) {
          uVar13 = uVar13 & uVar9;
        }
        else if (uVar7 <= uVar13) {
          uVar2 = 0;
          if (uVar7 != 0) {
            uVar2 = uVar13 / uVar7;
          }
          uVar13 = uVar13 - uVar2 * uVar7;
        }
      } while (uVar13 == uVar11);
    }
  }
LAB_1072e84d8:
  func_0x0001072f23d4();
  return;
}



/* Entry: 1072e8314; end: 1072e84eb;  */

void FUN_1072e8314(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  
  func_0x0001072f227c();
  uVar7 = *(ulong *)(param_1 + 0xb8);
  if ((uVar7 != 0) && (lVar4 = *(long *)(param_1 + 200), lVar4 != 0)) {
    uVar5 = (ulong)param_2;
    uVar9 = uVar7 - 1;
    uVar6 = (uint)uVar7;
    if ((uVar7 & uVar9) == 0) {
      uVar11 = (ulong)(uVar6 - 1 & param_2);
    }
    else {
      uVar11 = uVar5;
      if (uVar7 <= uVar5) {
        uVar1 = 0;
        if (uVar6 != 0) {
          uVar1 = param_2 / uVar6;
        }
        uVar11 = (ulong)(param_2 - uVar1 * uVar6);
      }
    }
    lVar10 = *(long *)(param_1 + 0xb0);
    plVar8 = *(long **)(lVar10 + uVar11 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_1072e84d8;
          uVar13 = plVar8[1];
          if (uVar13 != uVar5) break;
          if (*(uint *)(plVar8 + 2) == param_2) {
            lVar12 = *plVar8;
            if ((uVar7 & uVar9) == 0) {
              uVar5 = uVar9 & uVar5;
            }
            else if (uVar7 <= uVar5) {
              uVar11 = 0;
              if (uVar7 != 0) {
                uVar11 = uVar5 / uVar7;
              }
              uVar5 = uVar5 - uVar11 * uVar7;
            }
            plVar3 = *(long **)(lVar10 + uVar5 * 8);
            do {
              plVar14 = plVar3;
              plVar3 = (long *)*plVar14;
            } while ((long *)*plVar14 != plVar8);
            if (plVar14 == (long *)(param_1 + 0xc0)) {
LAB_1072e843c:
              if (lVar12 == 0) {
LAB_1072e8470:
                *(undefined8 *)(lVar10 + uVar5 * 8) = 0;
                lVar12 = *plVar8;
                goto LAB_1072e8478;
              }
              uVar11 = *(ulong *)(lVar12 + 8);
              if ((uVar7 & uVar9) == 0) {
                uVar13 = uVar11 & uVar9;
              }
              else {
                uVar13 = uVar11;
                if (uVar7 <= uVar11) {
                  uVar13 = 0;
                  if (uVar7 != 0) {
                    uVar13 = uVar11 / uVar7;
                  }
                  uVar13 = uVar11 - uVar13 * uVar7;
                }
              }
              if (uVar13 != uVar5) goto LAB_1072e8470;
LAB_1072e8480:
              if ((uVar7 & uVar9) == 0) {
                uVar11 = uVar11 & uVar9;
              }
              else if (uVar7 <= uVar11) {
                uVar9 = 0;
                if (uVar7 != 0) {
                  uVar9 = uVar11 / uVar7;
                }
                uVar11 = uVar11 - uVar9 * uVar7;
              }
              if (uVar11 != uVar5) {
                *(long **)(lVar10 + uVar11 * 8) = plVar14;
                lVar12 = *plVar8;
              }
            }
            else {
              uVar11 = plVar14[1];
              if ((uVar7 & uVar9) == 0) {
                uVar11 = uVar11 & uVar9;
              }
              else if (uVar7 <= uVar11) {
                uVar13 = 0;
                if (uVar7 != 0) {
                  uVar13 = uVar11 / uVar7;
                }
                uVar11 = uVar11 - uVar13 * uVar7;
              }
              if (uVar11 != uVar5) goto LAB_1072e843c;
LAB_1072e8478:
              if (lVar12 != 0) {
                uVar11 = *(ulong *)(lVar12 + 8);
                goto LAB_1072e8480;
              }
            }
            *plVar14 = lVar12;
            *plVar8 = 0;
            *(long *)(param_1 + 200) = lVar4 + -1;
            func_0x0001072f2704();
            goto LAB_1072e84d8;
          }
        }
        if ((uVar7 & uVar9) == 0) {
          uVar13 = uVar13 & uVar9;
        }
        else if (uVar7 <= uVar13) {
          uVar2 = 0;
          if (uVar7 != 0) {
            uVar2 = uVar13 / uVar7;
          }
          uVar13 = uVar13 - uVar2 * uVar7;
        }
      } while (uVar13 == uVar11);
    }
  }
LAB_1072e84d8:
  func_0x0001072f23d4();
  return;
}



/* Entry: 1072e84ec; end: 1072e86f3;  */

void FUN_1072e84ec(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uStack_58;
  byte bStack_50;
  undefined7 uStack_4f;
  long lStack_40;
  undefined4 uStack_34;
  
  func_0x0001072f1c10();
  uVar5 = param_2[1];
  uVar4 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  *(undefined1 *)(param_1 + 0x568) = *(undefined1 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x550) = uVar5;
  *(undefined8 *)(param_1 + 0x548) = uVar4;
  *(undefined8 *)(param_1 + 0x560) = uVar7;
  *(undefined8 *)(param_1 + 0x558) = uVar6;
  uStack_58 = uStack_58 & 0xffffffffffffff00;
  lVar1 = *(long *)(*(long *)(param_1 + 0x5e8) + 8) + 0xb60;
  FUN_10724e2c8(lVar1,&uStack_58);
  if ((int)lVar1 == 0) {
    if (*(byte *)(unaff_x19 + 0x138) != 1) goto LAB_1072e85c4;
    uStack_58 = unaff_x19 + 0x2f8;
    bStack_50 = *(byte *)(unaff_x19 + 0x138);
    FUN_107279a5c();
    if (*(char *)(unaff_x19 + 0x138) == '\x01') {
      *(undefined1 *)(unaff_x19 + 0x138) = 0;
    }
    if (*(char *)(unaff_x19 + 600) == '\x01') {
      *(undefined1 *)(unaff_x19 + 600) = 0;
    }
  }
  else {
    uStack_58 = unaff_x19 + 0x2f8;
    bStack_50 = 1;
    FUN_107279a5c();
    uVar4 = *param_3;
    *(undefined8 *)(unaff_x19 + 0x130) = param_3[1];
    *(undefined8 *)(unaff_x19 + 0x128) = uVar4;
    if ((*(byte *)(unaff_x19 + 0x138) & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x138) = 1;
    }
    uVar4 = *param_3;
    *(undefined8 *)(unaff_x19 + 0x250) = param_3[1];
    *(undefined8 *)(unaff_x19 + 0x248) = uVar4;
    if ((*(byte *)(unaff_x19 + 600) & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 600) = 1;
    }
  }
  func_0x0001072f23d4();
LAB_1072e85c4:
  if ((*(char *)(unaff_x19 + 0x5a0) == '\x01') && (*(char *)(unaff_x19 + 0x598) == '\x01')) {
    uVar3 = unaff_x19 + 0x570;
    FUN_107281b70();
    if ((uVar3 & 1) != 0) {
      return;
    }
  }
  if (*(long *)(unaff_x19 + 0x88) != 0) {
    if (*(char *)(unaff_x19 + 0x598) == '\x01') {
      uVar5 = unaff_x20[1];
      uVar4 = *unaff_x20;
      uVar7 = unaff_x20[3];
      uVar6 = unaff_x20[2];
      *(undefined1 *)(unaff_x19 + 0x590) = *(undefined1 *)(unaff_x20 + 4);
      *(undefined8 *)(unaff_x19 + 0x578) = uVar5;
      *(undefined8 *)(unaff_x19 + 0x570) = uVar4;
      *(undefined8 *)(unaff_x19 + 0x588) = uVar7;
      *(undefined8 *)(unaff_x19 + 0x580) = uVar6;
    }
    else {
      uVar5 = unaff_x20[1];
      uVar4 = *unaff_x20;
      uVar7 = unaff_x20[3];
      uVar6 = unaff_x20[2];
      *(undefined8 *)(unaff_x19 + 0x590) = unaff_x20[4];
      *(undefined8 *)(unaff_x19 + 0x578) = uVar5;
      *(undefined8 *)(unaff_x19 + 0x570) = uVar4;
      *(undefined8 *)(unaff_x19 + 0x588) = uVar7;
      *(undefined8 *)(unaff_x19 + 0x580) = uVar6;
      *(undefined1 *)(unaff_x19 + 0x598) = 1;
    }
    func_0x0001072f22d4();
    func_0x00010b5cfc3c(&uStack_58);
    uStack_34 = 2;
    lVar1 = CONCAT71(uStack_4f,bStack_50);
    if ((bStack_50 & 1) != 0) {
      func_0x0001072f1e94();
    }
    FUN_1072f0380();
    *(uint *)(lVar1 + 0x10) = *(uint *)(lVar1 + 0x10) | 1;
    uVar3 = *(ulong *)(lVar1 + 0x30);
    lStack_40 = lVar1;
    if (uVar3 == 0) {
      uVar3 = *(ulong *)(lVar1 + 8);
      if ((uVar3 & 1) != 0) {
        func_0x0001072f1e94();
      }
      func_0x0001072f03cc();
      *(ulong *)(lVar1 + 0x30) = uVar3;
    }
    uVar2 = uVar3;
    FUN_1072e86f4();
    *(undefined8 *)(uVar2 + 0x10) = *unaff_x20;
    uVar2 = uVar3;
    FUN_1072e86f4();
    *(undefined8 *)(uVar2 + 0x18) = unaff_x20[1];
    uVar2 = uVar3;
    func_0x0001072e8704();
    *(undefined8 *)(uVar2 + 0x10) = unaff_x20[2];
    func_0x0001072e8704();
    *(undefined8 *)(uVar3 + 0x18) = unaff_x20[3];
    FUN_1072e8714(**(undefined8 **)(unaff_x19 + 0x88),&uStack_58);
    func_0x00010b5cfe38(&uStack_58);
  }
  return;
}



/* Entry: 1072e86f4; end: 1072e8713;  */

void FUN_1072e86f4(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001072f1e94();
    }
    func_0x0001072f043c();
    *(ulong *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 1072e8714; end: 1072e874f;  */

void FUN_1072e8714(void)

{
  code *extraout_x8;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001072f2698();
  (*extraout_x8)();
  FUN_1072f169c(&uStack_30);
  return;
}



/* Entry: 1072e8750; end: 1072e8757;  */

void FUN_1072e8750(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x5d0) = param_2;
  return;
}



/* Entry: 1072e8758; end: 1072e8837;  */

void FUN_1072e8758(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x19;
  double *unaff_x20;
  undefined1 auStack_58 [8];
  ulong uStack_50;
  undefined4 uStack_34;
  
  func_0x0001072f1c10();
  func_0x0001072f22d4();
  func_0x00010b5cfc3c(auStack_58);
  uStack_34 = 1;
  uVar1 = uStack_50;
  if ((uStack_50 & 1) != 0) {
    func_0x0001072f1e94();
    uVar1 = uStack_50;
  }
  func_0x0001072f04a8();
  *(float *)(uVar1 + 0x24) = (float)unaff_x20[1];
  *(float *)(uVar1 + 0x20) = (float)*unaff_x20;
  *(undefined8 *)(uVar1 + 0x28) = 0x4120000000000000;
  uVar2 = uVar1;
  __ZNSt3__16chrono12system_clock3nowEv();
  *(long *)(uVar1 + 0x30) = (long)uVar2 / 1000;
  *(uint *)(uVar1 + 0x10) = *(uint *)(uVar1 + 0x10) | 1;
  uVar2 = *(ulong *)(uVar1 + 0x18);
  if (uVar2 == 0) {
    uVar2 = *(ulong *)(uVar1 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x0001072f1e94();
    }
    func_0x0001072f04f8();
    *(ulong *)(uVar1 + 0x18) = uVar2;
  }
  *(undefined4 *)(uVar2 + 0x20) = *(undefined4 *)(unaff_x20 + 2);
  *(undefined4 *)(uVar2 + 0x24) = *(undefined4 *)((long)unaff_x20 + 0x14);
  FUN_1072e8714(**(undefined8 **)(unaff_x19 + 0x88),auStack_58);
  func_0x00010b5cfe38(auStack_58);
  return;
}



/* Entry: 1072e8838; end: 1072e8877;  */

void FUN_1072e8838(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x38] = 0;
  param_1[0x40] = 0;
  param_1[0x48] = 0;
  *(undefined2 *)(param_1 + 0x50) = 0;
  param_1[0x58] = 0;
  param_1[0x68] = 0;
  param_1[0x70] = 0;
  param_1[0x80] = 0;
  param_1[0x88] = 0;
  param_1[0xa0] = 0;
  param_1[0xa8] = 0;
  param_1[0xc0] = 0;
  param_1[200] = 0;
  param_1[0x118] = 0;
  return;
}



/* Entry: 1072e8878; end: 1072e894f;  */

long FUN_1072e8878(long param_1)

{
  FUN_10726e078(param_1 + 0x310);
  FUN_10726b264(param_1 + 0x2f8);
  func_0x000107270a74(param_1 + 0x10);
  return param_1;
}



/* Entry: 1072e8950; end: 1072e8957;  */

void FUN_1072e8950(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072f1b80(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x38;
    func_0x000107942f50();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072e8958; end: 1072e898b;  */

void FUN_1072e8958(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072f1b80();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x38;
    func_0x000107942f50();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072e898c; end: 1072e89bb;  */

void FUN_1072e898c(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  func_0x000107270d20();
  return;
}



/* Entry: 1072e89bc; end: 1072e89fb;  */

long FUN_1072e89bc(ulong param_1)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001072f1ae4();
  while( true ) {
    if (unaff_x21 == unaff_x19) {
      return unaff_x19;
    }
    func_0x0001072f1c40();
    func_0x000104c32db4();
    if ((param_1 & 1) != 0) break;
    unaff_x21 = unaff_x21 + 0x38;
  }
  return unaff_x21;
}



/* Entry: 1072e89fc; end: 1072e8a9b;  */

void FUN_1072e89fc(void)

{
  undefined1 in_ZR;
  ulong extraout_x9;
  long extraout_x10;
  ulong extraout_x10_00;
  
  func_0x0001072f1b80();
  func_0x0001072e8a48();
  func_0x0001072f1d8c();
  FUN_107270cf0();
  func_0x0001072f1738();
  if (extraout_x10 != 0) {
    func_0x0001072f1984();
    if ((!(bool)in_ZR) && (extraout_x10_00 <= extraout_x9)) {
      func_0x0001072f29b8();
    }
    func_0x0001072f1d7c();
  }
  return;
}



/* Entry: 1072e8a9c; end: 1072e8af3;  */

void FUN_1072e8a9c(undefined8 param_1,long param_2)

{
  uint extraout_w8;
  long unaff_x19;
  
  func_0x0001072f2a84();
  if (extraout_w8 == *(byte *)(param_2 + 0x18)) {
    if (extraout_w8 != 0) {
      FUN_1072e8af4();
    }
  }
  else if (extraout_w8 == 0) {
    func_0x0001072707bc();
  }
  else {
    FUN_10726e078();
    *(undefined1 *)(unaff_x19 + 0x18) = 0;
  }
  return;
}



/* Entry: 1072e8af4; end: 1072e8b13;  */

void FUN_1072e8af4(void)

{
  func_0x0001072f1b80();
  FUN_107299900();
  func_0x0001072f1ba8();
  return;
}



/* Entry: 1072e8b14; end: 1072e8c33;  */

void FUN_1072e8b14(long param_1,long param_2,ulong param_3)

{
  ulong *puVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar10;
  ulong extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  long *plVar11;
  long *extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  ulong uVar12;
  ulong extraout_x10;
  long extraout_x10_00;
  ulong extraout_x10_01;
  ulong uVar13;
  ulong unaff_x23;
  double dVar14;
  ulong uVar15;
  undefined8 uVar16;
  long *plStack_108;
  long *plStack_100;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined1 uStack_70;
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  func_0x0001072f1810();
  bVar2 = *(byte *)(param_1 + 0x68);
  uStack_48 = extraout_x8;
  if ((bVar2 & 1) == 0) {
    uStack_b0 = uStack_b0 & 0xffffffffffffff00;
  }
  else {
    lVar5 = param_1 + 0x58;
    FUN_107280b2c();
    uVar15 = *(ulong *)(lVar5 + 8);
    puVar6 = (undefined8 *)(param_1 + 0x58);
    FUN_107280b2c();
    uVar16 = *puVar6;
    uStack_b0 = uVar15;
    uStack_a8 = uVar16;
    func_0x0001072f1f88(*(undefined8 *)(param_2 + 0x98),*(undefined8 *)(param_2 + 0x90),&lStack_88);
    func_0x0001072f1f88(uVar16,uVar15,&uStack_98);
    dVar14 = (double)CONCAT71(lStack_88._1_7_,(undefined1)lStack_88);
    FUN_1072e941c(dVar14,uStack_80,uStack_98,uStack_90);
    if ((double)(param_3 & 0xffffffff) < dVar14) {
      lStack_88._0_1_ = 0;
      uStack_50 = 0;
      func_0x0001072f283c();
      func_0x00010724b3d8(&lStack_88);
      lStack_88._0_1_ = 0;
      uStack_70 = 0;
      goto LAB_1072e8be0;
    }
  }
  FUN_107263b58(&lStack_88,param_2 + 0xf0);
  func_0x0001072f283c();
  func_0x00010724b3d8(&lStack_88);
  func_0x00010028af84(&lStack_88,param_2 + 0x130);
LAB_1072e8be0:
  iVar9 = (int)&lStack_88;
  func_0x0001002a8208(param_2 + 0x130);
  plVar7 = &lStack_88;
  func_0x0001001148fc();
  uVar3 = 0;
  uVar4 = bVar2 == 0;
  puVar1 = &uStack_b0;
  if ((bool)uVar4) {
    puVar1 = (undefined8 *)(param_2 + 0x90);
  }
  uVar16 = *puVar1;
  *(ulong *)(param_2 + 0x98) = puVar1[1];
  *(undefined8 *)(param_2 + 0x90) = uVar16;
  func_0x0001072f1710(uStack_48);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  uVar13 = (ulong)iVar9;
  uVar15 = plVar7[1];
  plVar8 = plVar7;
  if (uVar15 != 0) {
    func_0x0001072f2aa8();
    if ((bool)uVar4) {
      unaff_x23 = extraout_x8_00 & uVar13;
    }
    else {
      uVar3 = (long)(uVar15 - uVar13) < 0;
      unaff_x23 = uVar13;
      if (uVar15 <= uVar13) {
        uVar10 = 0;
        if (uVar15 != 0) {
          uVar10 = uVar13 / uVar15;
        }
        unaff_x23 = uVar13 - uVar10 * uVar15;
      }
    }
    plVar11 = *(long **)(*plVar7 + unaff_x23 * 8);
    uVar10 = extraout_x8_00;
    if (plVar11 != (long *)0x0) {
      do {
        while( true ) {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_1072e8cdc;
          uVar12 = plVar11[1];
          if (uVar12 != uVar13) break;
          uVar3 = *(int *)(plVar11 + 2) - iVar9 < 0;
          if (*(int *)(plVar11 + 2) == iVar9) {
            return;
          }
        }
        if ((uVar15 & uVar10) == 0) {
          uVar12 = uVar12 & uVar10;
        }
        else if (uVar15 <= uVar12) {
          func_0x0001072f2a9c();
          uVar10 = extraout_x8_01;
          plVar11 = extraout_x9;
          uVar12 = extraout_x10;
        }
        uVar3 = (long)(uVar12 - unaff_x23) < 0;
      } while (uVar12 == unaff_x23);
    }
  }
LAB_1072e8cdc:
  func_0x0001072f2464();
  plStack_108 = plVar8;
  plStack_100 = plVar7 + 2;
  func_0x0001072f2614();
  *plVar8 = 0;
  plVar8[1] = uVar13;
  *(int *)(plVar8 + 2) = iVar9;
  func_0x0001072f17bc();
  if ((uVar15 == 0) || (func_0x0001072f1c1c(), (bool)uVar3)) {
    func_0x0001072f2620();
    uVar3 = uVar15 == 3;
    func_0x0001072f16d8();
    func_0x000107271b38(plVar7);
    uVar15 = plVar7[1];
    func_0x0001072f2aa8();
    if ((bool)uVar3) {
      unaff_x23 = extraout_x8_02 & uVar13;
    }
    else {
      unaff_x23 = uVar13;
      if (uVar15 <= uVar13) {
        uVar10 = 0;
        if (uVar15 != 0) {
          uVar10 = uVar13 / uVar15;
        }
        unaff_x23 = uVar13 - uVar10 * uVar15;
      }
    }
  }
  if (*(long *)(*plVar7 + unaff_x23 * 8) == 0) {
    func_0x0001072f2680(plStack_108);
    if (extraout_x10_00 != 0) {
      uVar13 = *(ulong *)(extraout_x10_00 + 8);
      uVar16 = extraout_x8_03;
      lVar5 = extraout_x9_00;
      if ((uVar15 & uVar15 - 1) == 0) {
        uVar13 = uVar13 & uVar15 - 1;
      }
      else if (uVar15 <= uVar13) {
        func_0x0001072f2a9c();
        uVar16 = extraout_x8_04;
        lVar5 = extraout_x9_01;
        uVar13 = extraout_x10_01;
      }
      *(undefined8 *)(lVar5 + uVar13 * 8) = uVar16;
    }
  }
  else {
    func_0x0001072f2598();
  }
  plStack_108 = (long *)0x0;
  func_0x0001072f25a8();
  FUN_107271e54(&plStack_108);
  return;
}



/* Entry: 1072e8c34; end: 1072e8dc3;  */

void FUN_1072e8c34(undefined8 param_1,undefined8 param_2,long *param_3,int param_4)

{
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar1;
  long *plVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar3;
  ulong extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 uVar4;
  long *plVar5;
  long *extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long lVar6;
  ulong uVar7;
  ulong extraout_x10;
  long extraout_x10_00;
  ulong extraout_x10_01;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x23;
  long *plStack_58;
  long *plStack_50;
  
  uVar9 = (ulong)param_4;
  uVar8 = param_3[1];
  plVar2 = param_3;
  if (uVar8 != 0) {
    func_0x0001072f2aa8();
    if ((bool)in_ZR) {
      unaff_x23 = extraout_x8 & uVar9;
    }
    else {
      in_NG = (long)(uVar8 - uVar9) < 0;
      unaff_x23 = uVar9;
      if (uVar8 <= uVar9) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar9 / uVar8;
        }
        unaff_x23 = uVar9 - uVar3 * uVar8;
      }
    }
    plVar5 = *(long **)(*param_3 + unaff_x23 * 8);
    uVar3 = extraout_x8;
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_1072e8cdc;
          uVar7 = plVar5[1];
          if (uVar7 != uVar9) break;
          in_NG = *(int *)(plVar5 + 2) - param_4 < 0;
          if (*(int *)(plVar5 + 2) == param_4) {
            return;
          }
        }
        if ((uVar8 & uVar3) == 0) {
          uVar7 = uVar7 & uVar3;
        }
        else if (uVar8 <= uVar7) {
          func_0x0001072f2a9c();
          uVar3 = extraout_x8_00;
          plVar5 = extraout_x9;
          uVar7 = extraout_x10;
        }
        in_NG = (long)(uVar7 - unaff_x23) < 0;
      } while (uVar7 == unaff_x23);
    }
  }
LAB_1072e8cdc:
  func_0x0001072f2464();
  plStack_58 = plVar2;
  plStack_50 = param_3 + 2;
  func_0x0001072f2614();
  *plVar2 = 0;
  plVar2[1] = uVar9;
  *(int *)(plVar2 + 2) = param_4;
  func_0x0001072f17bc();
  if ((uVar8 == 0) || (func_0x0001072f1c1c(param_1,param_2,(float)uVar8), (bool)in_NG)) {
    func_0x0001072f2620();
    uVar1 = uVar8 == 3;
    func_0x0001072f16d8();
    func_0x000107271b38(param_3);
    uVar8 = param_3[1];
    func_0x0001072f2aa8();
    if ((bool)uVar1) {
      unaff_x23 = extraout_x8_01 & uVar9;
    }
    else {
      unaff_x23 = uVar9;
      if (uVar8 <= uVar9) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar9 / uVar8;
        }
        unaff_x23 = uVar9 - uVar3 * uVar8;
      }
    }
  }
  if (*(long *)(*param_3 + unaff_x23 * 8) == 0) {
    func_0x0001072f2680(plStack_58);
    if (extraout_x10_00 != 0) {
      uVar9 = *(ulong *)(extraout_x10_00 + 8);
      uVar4 = extraout_x8_02;
      lVar6 = extraout_x9_00;
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar9 = uVar9 & uVar8 - 1;
      }
      else if (uVar8 <= uVar9) {
        func_0x0001072f2a9c();
        uVar4 = extraout_x8_03;
        lVar6 = extraout_x9_01;
        uVar9 = extraout_x10_01;
      }
      *(undefined8 *)(lVar6 + uVar9 * 8) = uVar4;
    }
  }
  else {
    func_0x0001072f2598();
  }
  plStack_58 = (long *)0x0;
  func_0x0001072f25a8();
  FUN_107271e54(&plStack_58);
  return;
}



/* Entry: 1072e8dc4; end: 1072e8f5f;  */

long * FUN_1072e8dc4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar2;
  long *plVar3;
  ulong uVar4;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long lVar5;
  long *unaff_x19;
  ulong unaff_x20;
  ulong unaff_x23;
  ulong unaff_x24;
  long *unaff_x25;
  long *plVar6;
  long *in_stack_00000050;
  long in_stack_00000058;
  
  func_0x0001072f2570();
  func_0x0001072f18cc();
  func_0x0001072f2a64();
  if (unaff_x23 != 0) {
    func_0x0001072f2a58();
    if ((bool)in_ZR) {
      unaff_x24 = (ulong)unaff_x25 & unaff_x20;
    }
    else {
      func_0x0001072f2b04();
      if ((bool)in_CY) {
        func_0x0001072f21dc();
      }
    }
    plVar6 = *(long **)(*unaff_x19 + unaff_x24 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_1072e8e5c;
          uVar4 = plVar6[1];
          in_NG = (long)(uVar4 - unaff_x20) < 0;
          if (uVar4 != unaff_x20) break;
          param_1 = plVar6 + 2;
          func_0x0001072f2264();
          if (((ulong)param_1 & 1) != 0) {
            lVar5 = (long)(plVar6 + 9);
            func_0x0001072f1b80(lVar5,param_3);
            FUN_1072edc2c();
            func_0x0001072ec784(lVar5 + 0x250,in_stack_00000058 + 0x250);
            return in_stack_00000050;
          }
        }
        if ((unaff_x23 & (ulong)unaff_x25) == 0) {
          uVar4 = uVar4 & (ulong)unaff_x25;
        }
        else if (unaff_x23 <= uVar4) {
          func_0x0001072f2298();
          uVar4 = extraout_x8;
        }
        in_NG = (long)(uVar4 - unaff_x24) < 0;
      } while (uVar4 == unaff_x24);
    }
  }
LAB_1072e8e5c:
  func_0x0001072f2824();
  plVar6 = param_1;
  func_0x0001072f2614();
  plVar3 = plVar6 + 2;
  *plVar6 = 0;
  plVar6[1] = unaff_x20;
  func_0x000107264788(plVar3);
  func_0x0001072f17bc();
  if ((unaff_x23 == 0) || (func_0x0001072f1ac4(), uVar4 = unaff_x24, (bool)in_NG)) {
    func_0x0001072f18b4();
    uVar2 = unaff_x23 == 3;
    func_0x0001072f16d8();
    plVar3 = unaff_x19;
    func_0x000107271740();
    func_0x0001072f1d44();
    if ((bool)uVar2) {
      uVar4 = extraout_x8_00 & unaff_x20;
    }
    else {
      uVar4 = unaff_x20;
      if (unaff_x23 <= unaff_x20) {
        func_0x0001072f21dc();
        uVar4 = unaff_x24;
      }
    }
  }
  lVar5 = *unaff_x19;
  if (*(long *)(lVar5 + uVar4 * 8) == 0) {
    *param_1 = *unaff_x25;
    *unaff_x25 = (long)param_1;
    *(long **)(lVar5 + uVar4 * 8) = unaff_x25;
    if (*param_1 != 0) {
      uVar4 = *(ulong *)(*param_1 + 8);
      if ((unaff_x23 & unaff_x23 - 1) == 0) {
        uVar4 = uVar4 & unaff_x23 - 1;
      }
      else if (unaff_x23 <= uVar4) {
        uVar1 = 0;
        if (unaff_x23 != 0) {
          uVar1 = uVar4 / unaff_x23;
        }
        uVar4 = uVar4 - uVar1 * unaff_x23;
      }
      *(long **)(lVar5 + uVar4 * 8) = param_1;
    }
  }
  else {
    func_0x0001072f2598();
  }
  func_0x0001072f1780();
  FUN_107271e8c();
  return plVar3;
}



/* Entry: 1072e8f60; end: 1072e8f7b;  */

void FUN_1072e8f60(long param_1)

{
  FUN_1072e94d8();
  *(undefined1 *)(param_1 + 0xa0) = 1;
  return;
}



/* Entry: 1072e8f7c; end: 1072e8ffb;  */

void FUN_1072e8f7c(long *param_1,long *param_2)

{
  long *plVar1;
  undefined1 in_ZR;
  long *plVar2;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  long *plStack_70;
  undefined8 uStack_68;
  long alStack_60 [7];
  undefined8 uStack_28;
  
  plVar2 = param_2;
  func_0x0001072f17a8();
  uStack_28 = extraout_x8;
  func_0x0001072f2b28();
  uStack_68 = 0;
  plStack_70 = param_1;
  plVar1 = plVar2;
  while (plVar1 != (long *)0x0) {
    func_0x0001072f246c(alStack_60);
    plVar2 = alStack_60;
    func_0x0001072eae84(&plStack_70);
    param_1 = alStack_60;
    func_0x000104c2f714();
    param_2 = (long *)*param_2;
    plVar1 = param_2;
  }
  func_0x0001072f1710(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000104c2f714(alStack_60);
    FUN_10726ea70();
    func_0x0001072f1e28();
    func_0x0001072f1c10();
    unaff_x19[1] = 0;
    *unaff_x19 = 0;
    unaff_x19[3] = 0;
    unaff_x19[2] = 0;
    *(int *)(unaff_x19 + 4) = (int)plVar2[4];
    FUN_1072e9060();
    param_1 = param_1 + 2;
    while (param_1 = (long *)*param_1, param_1 != (long *)0x0) {
      FUN_1072e91d0();
    }
    return;
  }
  return;
}



/* Entry: 1072e8ffc; end: 1072e905f;  */

void FUN_1072e8ffc(undefined8 *param_1,long param_2)

{
  long unaff_x20;
  long *plVar1;
  
  func_0x0001072f1c10();
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_1072e9060();
  plVar1 = (long *)(unaff_x20 + 0x10);
  while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
    FUN_1072e91d0();
  }
  return;
}



/* Entry: 1072e9060; end: 1072e91b7;  */

void FUN_1072e9060(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar4;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  ulong extraout_x10;
  ulong uVar5;
  ulong extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar6;
  long *plVar7;
  
  plVar4 = param_1;
  plVar3 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar7 = (long *)param_1[1];
  if (plVar7 > param_2 || param_2 == plVar7) {
    if (plVar7 <= param_2) {
      return;
    }
    func_0x0001072f1ff0((float)(ulong)param_1[3],(int)param_1[4]);
    if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x0001072f16f0();
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar7 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_1072e91b8(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    FUN_1072e91b8(param_1,lVar2);
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    while (param_2 != plVar4) {
      func_0x0001072f1f90();
      plVar4 = extraout_x9;
    }
    if (param_1[2] != 0) {
      func_0x0001072f2a04();
      func_0x0001072f29f0();
      lVar2 = extraout_x8;
      plVar4 = extraout_x9_00;
      uVar5 = extraout_x10;
      plVar3 = extraout_x11;
      while (plVar7 = plVar4, plVar4 = (long *)*plVar7, plVar4 != (long *)0x0) {
        plVar6 = (long *)plVar4[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar5);
        }
        else if (param_2 <= plVar6) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)param_2;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
        }
        if (plVar6 != plVar3) {
          if (*(long *)(lVar2 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar6 * 8) = plVar7;
            plVar3 = plVar6;
          }
          else {
            *plVar7 = *plVar4;
            func_0x0001072f189c();
            lVar2 = extraout_x8_00;
            plVar4 = extraout_x9_01;
            uVar5 = extraout_x10_00;
            plVar3 = extraout_x11_00;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar2 = *plVar4;
  *plVar4 = (long)plVar3;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072e91b8; end: 1072e91cf;  */

void FUN_1072e91b8(long *param_1,long param_2)

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



/* Entry: 1072e91d0; end: 1072e9347;  */

void FUN_1072e91d0(undefined8 *param_1)

{
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar1;
  undefined1 uVar2;
  ulong uVar3;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar4;
  undefined8 *extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x10;
  long *unaff_x19;
  ulong unaff_x20;
  ulong uVar5;
  long unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  long *plVar6;
  
  func_0x0001072f2570();
  func_0x0001072f18cc();
  func_0x0001072f2a64();
  if (unaff_x23 != 0) {
    uVar5 = unaff_x23 - 1;
    in_NG = (long)(unaff_x23 & uVar5) < 0;
    in_ZR = (unaff_x23 & uVar5) == 0;
    bVar1 = false;
    if ((bool)in_ZR) {
      unaff_x24 = uVar5 & unaff_x20;
    }
    else {
      func_0x0001072f2b04();
      if (bVar1) {
        func_0x0001072f21dc();
      }
    }
    plVar6 = *(long **)(*unaff_x19 + unaff_x24 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_1072e9268;
          uVar3 = plVar6[1];
          in_NG = (long)(uVar3 - unaff_x20) < 0;
          in_ZR = uVar3 == unaff_x20;
          if (!(bool)in_ZR) break;
          param_1 = plVar6 + 2;
          func_0x0001072f2264();
          if (((ulong)param_1 & 1) != 0) {
            return;
          }
        }
        if ((unaff_x23 & uVar5) == 0) {
          uVar3 = uVar3 & uVar5;
        }
        else if (unaff_x23 <= uVar3) {
          func_0x0001072f2298();
          uVar3 = extraout_x8;
        }
        in_NG = (long)(uVar3 - unaff_x24) < 0;
        in_ZR = uVar3 == unaff_x24;
      } while ((bool)in_ZR);
    }
  }
LAB_1072e9268:
  func_0x0001072f2064();
  *param_1 = 0;
  param_1[1] = unaff_x20;
  func_0x0001072f250c(param_1 + 2);
  FUN_1072639d8(param_1 + 9,unaff_x22 + 0x38);
  func_0x0001072f230c();
  func_0x0001072f17bc();
  if ((unaff_x23 == 0) || (func_0x0001072f1ac4(), (bool)in_NG)) {
    func_0x0001072f18b4();
    uVar2 = unaff_x23 == 3;
    func_0x0001072f16d8();
    func_0x0001072f27dc();
    func_0x0001072f1d44();
    if ((bool)uVar2) {
      in_ZR = 1;
    }
    else {
      in_ZR = unaff_x20 == unaff_x23;
      if (unaff_x23 <= unaff_x20) {
        func_0x0001072f21dc();
      }
    }
  }
  func_0x0001072f2a38();
  if (extraout_x9 == (undefined8 *)0x0) {
    func_0x0001072f25fc();
    if (extraout_x9_00 != 0) {
      func_0x0001072f1b98();
      lVar4 = extraout_x8_00;
      if ((bool)in_ZR) {
        uVar5 = extraout_x9_01 & extraout_x10;
      }
      else {
        uVar5 = extraout_x9_01;
        if (unaff_x23 <= extraout_x9_01) {
          func_0x0001072f235c();
          lVar4 = extraout_x8_01;
          uVar5 = extraout_x9_02;
        }
      }
      *(undefined8 **)(lVar4 + uVar5 * 8) = param_1;
    }
  }
  else {
    *param_1 = *extraout_x9;
    *extraout_x9 = param_1;
  }
  func_0x0001072f1780();
  FUN_1072e9348();
  return;
}



/* Entry: 1072e9348; end: 1072e937b;  */

void FUN_1072e9348(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x0001072f1d28();
  if (unaff_x20 != 0) {
    func_0x0001072f25e4();
    if ((bool)in_ZR) {
      func_0x0001072bb890(unaff_x20 + 0x10);
    }
    func_0x0001072f1dd8();
  }
  return;
}



/* Entry: 1072e937c; end: 1072e941b;  */

long FUN_1072e937c(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  ulong uVar1;
  ulong extraout_x8_00;
  ulong unaff_x20;
  long *unaff_x21;
  ulong uVar2;
  ulong unaff_x23;
  ulong unaff_x24;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 != 0) && (func_0x0001072f2318(), extraout_x8 != 0)) {
    func_0x0001072f1ef0();
    func_0x0001072f1ad4();
    if ((bool)in_ZR) {
      unaff_x24 = unaff_x20 & unaff_x23;
    }
    else {
      func_0x0001072f21e8();
      if ((bool)in_CY) {
        func_0x0001072f220c();
      }
    }
    func_0x0001072f2200();
    if (unaff_x21 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        unaff_x21 = (long *)*unaff_x21;
        if (unaff_x21 == (long *)0x0) {
          return 0;
        }
        uVar1 = unaff_x21[1];
        if (unaff_x20 != uVar1) break;
        func_0x0001072f1924();
        if ((int)param_1 != 0) {
          return (long)unaff_x21;
        }
      }
      if ((uVar2 & unaff_x23) == 0) {
        uVar1 = uVar1 & unaff_x23;
      }
      else if (uVar2 <= uVar1) {
        func_0x0001072f21d0();
        uVar1 = extraout_x8_00;
      }
    } while (uVar1 == unaff_x24);
  }
  return 0;
}



/* Entry: 1072e941c; end: 1072e943f;  */

double FUN_1072e941c(double param_1,double param_2)

{
  FUN_1072e9440();
  return SQRT(param_1 * param_1 + param_2 * param_2);
}



/* Entry: 1072e9440; end: 1072e948b;  */

undefined1  [16] FUN_1072e9440(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  double dStack_30;
  double dStack_28;
  
  uStack_40 = param_3;
  uStack_38 = param_4;
  dStack_30 = param_1;
  dStack_28 = param_2;
  FUN_10726c7c0(&dStack_30);
  dVar1 = param_1;
  dVar2 = param_2;
  FUN_10726c7c0(&uStack_40);
  auVar3._8_8_ = param_1 - dVar1;
  auVar3._0_8_ = param_2 - dVar2;
  return auVar3;
}



/* Entry: 1072e948c; end: 1072e94af;  */

undefined8 FUN_1072e948c(undefined8 param_1)

{
  FUN_1072e94b0();
  return param_1;
}



/* Entry: 1072e94b0; end: 1072e94d7;  */

void FUN_1072e94b0(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x38);
  if (cVar1 != *(char *)(param_2 + 0x38)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x38) == '\x01') {
        func_0x000104c2f714();
        *(undefined1 *)(param_1 + 0x38) = 0;
      }
      return;
    }
    func_0x000104c318bc();
    *(undefined1 *)(param_1 + 0x38) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000104c342bc();
    func_0x000104c2f698();
    *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
    return;
  }
  return;
}



/* Entry: 1072e94d8; end: 1072e951b;  */

void FUN_1072e94d8(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072f1b80();
  func_0x000107264aa4();
  FUN_107263994(param_1 + 0x28,unaff_x19 + 0x28);
  FUN_1072638b4(unaff_x20 + 0x50,unaff_x19 + 0x50);
  FUN_1072e951c(unaff_x20 + 0x78,unaff_x19 + 0x78);
  return;
}



/* Entry: 1072e951c; end: 1072e958b;  */

void FUN_1072e951c(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 1072e958c; end: 1072e96eb;  */

void FUN_1072e958c(undefined8 *param_1)

{
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar5;
  undefined8 *extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x10;
  long *unaff_x19;
  ulong unaff_x20;
  ulong uVar6;
  long unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  long *plVar7;
  
  func_0x0001072f2570();
  func_0x0001072f18cc();
  func_0x0001072f2a64();
  if (unaff_x23 != 0) {
    uVar6 = unaff_x23 - 1;
    in_NG = (long)(unaff_x23 & uVar6) < 0;
    in_ZR = (unaff_x23 & uVar6) == 0;
    bVar1 = false;
    if ((bool)in_ZR) {
      unaff_x24 = uVar6 & unaff_x20;
    }
    else {
      func_0x0001072f2b04();
      if (bVar1) {
        func_0x0001072f21dc();
      }
    }
    plVar7 = *(long **)(*unaff_x19 + unaff_x24 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_1072e9624;
          uVar4 = plVar7[1];
          in_NG = (long)(uVar4 - unaff_x20) < 0;
          in_ZR = uVar4 == unaff_x20;
          if (!(bool)in_ZR) break;
          param_1 = plVar7 + 2;
          func_0x0001072f2264();
          if (((ulong)param_1 & 1) != 0) {
            return;
          }
        }
        if ((unaff_x23 & uVar6) == 0) {
          uVar4 = uVar4 & uVar6;
        }
        else if (unaff_x23 <= uVar4) {
          func_0x0001072f2298();
          uVar4 = extraout_x8;
        }
        in_NG = (long)(uVar4 - unaff_x24) < 0;
        in_ZR = uVar4 == unaff_x24;
      } while ((bool)in_ZR);
    }
  }
LAB_1072e9624:
  func_0x0001072f2064();
  puVar3 = param_1;
  func_0x0001072f2614();
  *puVar3 = 0;
  puVar3[1] = unaff_x20;
  func_0x0001072f250c(puVar3 + 2);
  func_0x0001072647dc(param_1 + 9,unaff_x22 + 0x38);
  func_0x0001072f17bc();
  if ((unaff_x23 == 0) || (func_0x0001072f1ac4(), (bool)in_NG)) {
    func_0x0001072f18b4();
    uVar2 = unaff_x23 == 3;
    func_0x0001072f16d8();
    func_0x0001072f27dc();
    func_0x0001072f1d44();
    if ((bool)uVar2) {
      in_ZR = 1;
    }
    else {
      in_ZR = unaff_x20 == unaff_x23;
      if (unaff_x23 <= unaff_x20) {
        func_0x0001072f21dc();
      }
    }
  }
  func_0x0001072f2a38();
  if (extraout_x9 == (undefined8 *)0x0) {
    func_0x0001072f25fc();
    if (extraout_x9_00 != 0) {
      func_0x0001072f1b98();
      lVar5 = extraout_x8_00;
      if ((bool)in_ZR) {
        uVar6 = extraout_x9_01 & extraout_x10;
      }
      else {
        uVar6 = extraout_x9_01;
        if (unaff_x23 <= extraout_x9_01) {
          func_0x0001072f235c();
          lVar5 = extraout_x8_01;
          uVar6 = extraout_x9_02;
        }
      }
      *(undefined8 **)(lVar5 + uVar6 * 8) = param_1;
    }
  }
  else {
    *param_1 = *extraout_x9;
    *extraout_x9 = param_1;
  }
  func_0x0001072f1780();
  FUN_1072e9348();
  return;
}



/* Entry: 1072e96ec; end: 1072e9717;  */

void FUN_1072e96ec(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x18) == 1) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c60e14(*param_2);
    }
    uVar2 = param_3[1];
    uVar1 = *param_3;
    param_2[2] = param_3[2];
    param_2[1] = uVar2;
    *param_2 = uVar1;
    *(undefined1 *)((long)param_3 + 0x17) = 0;
    *(undefined1 *)param_3 = 0;
    return;
  }
  func_0x0001072747d8(param_1,param_3);
  FUN_10726422c();
  uVar2 = unaff_x19[1];
  uVar1 = *unaff_x19;
  unaff_x20[2] = unaff_x19[2];
  unaff_x20[1] = uVar2;
  *unaff_x20 = uVar1;
  func_0x000107274c78();
  *(undefined4 *)(unaff_x20 + 3) = 1;
  return;
}



/* Entry: 1072e9718; end: 1072e976b;  */

void FUN_1072e9718(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_1072e976c();
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  if (*(char *)(param_2 + 0x50) == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    uVar1 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    *(undefined8 *)(param_1 + 0x38) = uVar1;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  return;
}



/* Entry: 1072e976c; end: 1072e97e7;  */

void FUN_1072e976c(long param_1)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined1 *puVar2;
  undefined1 *puStack_38;
  
  func_0x0001072f1c10();
  func_0x0001072f252c();
  puVar2 = (undefined1 *)(param_1 + 0x18);
  *puVar2 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  FUN_10726422c(puVar2);
  uVar1 = *(uint *)(unaff_x20 + 0x30);
  if (uVar1 != 0xffffffff) {
    puStack_38 = puVar2;
    (*(code *)(&PTR_FUN_11099d5b8)[uVar1])(&puStack_38,unaff_x20 + 0x18);
    *(uint *)(unaff_x19 + 0x30) = uVar1;
  }
  return;
}


