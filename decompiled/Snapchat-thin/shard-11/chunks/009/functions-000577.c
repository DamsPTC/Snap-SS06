/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108994034; end: 1089941f7;  */

void FUN_108994034(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int extraout_w10;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar3 = *(long **)(param_1 + 0x10);
  FUN_10899186c(plVar3,*(undefined4 *)(param_1 + 0xb8));
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x28))();
  *(short *)(param_1 + 0xbc) = (short)*plVar4;
  uVar1 = *(undefined4 *)(param_1 + 0xb8);
  uVar2 = *(undefined4 *)(param_1 + 0x48);
  uVar9 = *(undefined8 *)(param_1 + 8);
  puVar5 = (undefined4 *)0x60;
  __Znwm();
  *puVar5 = uVar1;
  puVar5[1] = uVar2;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined8 *)(puVar5 + 2) = uVar9;
  *(undefined1 *)(puVar5 + 8) = 0;
  *(undefined8 *)(puVar5 + 10) = 0;
  *(undefined8 *)(puVar5 + 0xc) = 0;
  puVar5[0xe] = 0;
  *(undefined8 *)(puVar5 + 0x12) = 0;
  *(undefined8 *)(puVar5 + 0x14) = 0;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  puVar5[0x16] = 0;
  uStack_50 = 0;
  FUN_1089949a8(param_1 + 0x148,puVar5);
  FUN_108995618(&uStack_50);
  (**(code **)(*plVar3 + 0x10))
            (&uStack_60,plVar3,param_1 + 0xe0,*(undefined4 *)(param_1 + 0x48),param_1 + 0x38);
  uVar10 = uStack_58;
  uVar9 = uStack_60;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_48 = *(undefined8 *)(param_1 + 0x180);
  uStack_50 = *(undefined8 *)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x180) = uVar10;
  *(undefined8 *)(param_1 + 0x178) = uVar9;
  func_0x0001089956ac(&uStack_50);
  func_0x0001089956ac(&uStack_60);
  uVar9 = *(undefined8 *)(param_1 + 0x178);
  uVar1 = *(undefined4 *)(param_1 + 0xb8);
  uVar2 = *(undefined4 *)(param_1 + 0x48);
  puVar6 = (undefined8 *)0x860;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar7 = puVar6 + 3;
  *puVar6 = &PTR_FUN_110aa35b8;
  FUN_10899b98c(puVar7,uVar9,uVar1,param_1 + 0xe0,uVar2);
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_48 = *(undefined8 *)(param_1 + 0x168);
  uStack_50 = *(undefined8 *)(param_1 + 0x160);
  *(undefined8 **)(param_1 + 0x160) = puVar7;
  *(undefined8 **)(param_1 + 0x168) = puVar6;
  func_0x000108995660(&uStack_50);
  func_0x000108995660(&uStack_60);
  lVar8 = *(long *)(param_1 + 0x168);
  uVar10 = *(undefined8 *)(param_1 + 0x168);
  uVar9 = *(undefined8 *)(param_1 + 0x160);
  puVar6 = (undefined8 *)0x20;
  __Znwm();
  if (lVar8 != 0) {
    do {
      func_0x0001089958e8();
    } while (extraout_w10 != 0);
  }
  uVar1 = *(undefined4 *)(param_1 + 0xb8);
  *puVar6 = &PTR_FUN_110aa3f48;
  puVar6[2] = uVar10;
  puVar6[1] = uVar9;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined4 *)(puVar6 + 3) = uVar1;
  func_0x000108995660(&uStack_50);
  lVar8 = *(long *)(param_1 + 0x170);
  *(undefined8 **)(param_1 + 0x170) = puVar6;
  if (lVar8 != 0) {
    func_0x0001089958d4();
  }
  return;
}



/* Entry: 1089941f8; end: 1089946e3;  */

undefined1 * FUN_1089941f8(long param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  long lStack_4d0;
  undefined8 *puStack_4c8;
  undefined8 *puStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  undefined1 auStack_498 [400];
  undefined4 auStack_308 [6];
  undefined1 auStack_2f0 [80];
  undefined8 uStack_2a0;
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  uint uStack_260;
  undefined4 uStack_23c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined1 auStack_220 [24];
  undefined4 auStack_208 [6];
  uint uStack_1f0;
  undefined1 auStack_1e8 [40];
  undefined8 uStack_1c0;
  undefined8 uStack_1b0;
  undefined1 uStack_188;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 auStack_138 [208];
  undefined8 uStack_68;
  
  func_0x0001089958c4();
  uStack_68 = extraout_x8;
  func_0x000108a2a814(auStack_2f0,param_1 + 0x18);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x170);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x80);
  auStack_308[0] = *(undefined4 *)(param_1 + 0x48);
  FUN_108990e08(auStack_308[0],param_1 + 0x90);
  puVar4 = auStack_2f0;
  func_0x000107c28468(puVar4,auStack_308);
  uStack_2a0 = 0x4b0;
  FUN_108986db0();
  FUN_1089808f4(auStack_290,puVar4);
  uVar5 = (ulong)*(byte *)(param_1 + 0xbc);
  FUN_108989fc0(uVar5);
  puVar4 = auStack_278;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(puVar4,uVar5);
  uStack_260 = (uint)*(byte *)(param_1 + 0xbc);
  uStack_23c = 1000;
  uStack_1f0 = (uint)*(byte *)(param_1 + 0xbd);
  auStack_308[0] = 4;
  if (*(int *)(param_1 + 0x48) != 1) {
    auStack_308[0] = 0xb;
  }
  func_0x000108995954();
  puVar6 = auStack_208;
  func_0x0001009eba34(puVar6,puVar4);
  uVar3 = *(int *)(param_1 + 0x48) == 1;
  if ((bool)uVar3) {
    uStack_228 = 0x7b;
    auStack_308[0] = 7;
    func_0x000108995954();
    uStack_224 = *puVar6;
    lStack_150 = CONCAT44(lStack_150._4_4_,1);
    puVar6 = (undefined4 *)(param_1 + 0x90);
    FUN_108984b94(puVar6,&lStack_150);
    auStack_308[0] = *puVar6;
    FUN_1089925fc(auStack_220,auStack_308,1);
  }
  __ZNSt3__19to_stringEx(auStack_308,*(undefined8 *)(param_1 + 8));
  func_0x000107c27b9c(auStack_1e8,auStack_308);
  func_0x0001089958e0();
  uStack_188 = 0;
  plVar10 = *(long **)(param_1 + 0x68);
  func_0x000108a2a744(auStack_498,auStack_2f0);
  FUN_1089949c0(auStack_138,param_1,param_2);
  (**(code **)(*plVar10 + 0x20))(plVar10,auStack_498,auStack_138);
  *(long **)(param_1 + 0x140) = plVar10;
  func_0x000108b07fc8(auStack_138);
  func_0x000108a2a870(auStack_498);
  func_0x000108995930();
  func_0x000108995924(&lStack_4a0);
  func_0x0001089958e0();
  plVar10 = *(long **)(param_1 + 0x140);
  lStack_4a8 = lStack_4a0;
  if (lStack_4a0 != 0) {
    func_0x000108995910();
    (*extraout_x8_00)();
  }
  (**(code **)(*plVar10 + 0x18))(plVar10,&lStack_4a8);
  FUN_108995734(&lStack_4a8);
  func_0x000108995930();
  func_0x000108995924(&lStack_4b0);
  func_0x0001089958e0();
  plVar10 = *(long **)(param_1 + 0x140);
  lStack_4b8 = lStack_4b0;
  if (lStack_4b0 != 0) {
    func_0x000108995910();
    (*extraout_x8_01)();
  }
  (**(code **)(*plVar10 + 0x18))(plVar10,&lStack_4b8);
  plVar10 = &lStack_4b8;
  FUN_108995734(plVar10);
  func_0x000108995944();
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  FUN_1089917ec(uVar7);
  FUN_1089910ac();
  puVar11 = *(undefined8 **)(param_1 + 0x70);
  func_0x000108995930();
  (**(code **)*puVar11)(&lStack_4d0,puVar11,auStack_308);
  uVar12 = *param_2;
  puVar8 = (undefined8 *)0x100;
  __Znwm();
  plVar13 = puVar8 + 1;
  *plVar13 = 0;
  puVar8[2] = 0;
  *puVar8 = &PTR_FUN_110aa3608;
  puVar11 = puVar8 + 3;
  lStack_150 = lStack_4d0;
  lStack_4d0 = 0;
  FUN_10899c730(puVar11,uVar12,plVar10,uVar7,param_1 + 0x178,&lStack_150,param_1 + 0x50,&lStack_4a0,
                &lStack_4b0,*(undefined4 *)(param_1 + 0x138));
  if (lStack_150 != 0) {
    func_0x00010899585c();
  }
  lStack_148 = puVar8[5];
  if ((lStack_148 == 0) || (uVar3 = *(long *)(lStack_148 + 8) == -1, (bool)uVar3)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar2) {
        *plVar13 = *plVar13 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar10 = puVar8 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = *plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    lStack_150 = puVar8[4];
    puVar8[4] = puVar11;
    puVar8[5] = puVar8;
    puStack_4c8 = puVar11;
    puStack_4c0 = puVar8;
    puStack_160 = puVar11;
    puStack_158 = puVar8;
    FUN_108995798(&lStack_150);
    func_0x00010899563c(&puStack_160);
  }
  puStack_4c8 = (undefined8 *)0x0;
  puStack_4c0 = (undefined8 *)0x0;
  lStack_148 = *(undefined8 *)(param_1 + 0x158);
  lStack_150 = *(long *)(param_1 + 0x150);
  *(undefined8 **)(param_1 + 0x150) = puVar11;
  *(undefined8 **)(param_1 + 0x158) = puVar8;
  func_0x00010899563c(&lStack_150);
  func_0x00010899563c(&puStack_4c8);
  lVar9 = lStack_4d0;
  lStack_4d0 = 0;
  if (lVar9 != 0) {
    func_0x00010899585c();
  }
  func_0x0001089958e0();
  lVar9 = param_1 + 0xe0;
  FUN_108994bf8(lVar9,*(undefined4 *)(param_1 + 0xb8));
  auStack_308[0] = (undefined4)lVar9;
  (**(code **)(**(long **)(param_1 + 0x140) + 0x28))
            (*(long **)(param_1 + 0x140),*(undefined8 *)(param_1 + 0x150),auStack_308);
  FUN_108995704(&lStack_4b0);
  FUN_108995704(&lStack_4a0);
  puVar4 = auStack_2f0;
  func_0x000108a2a870();
  func_0x000108995868(uStack_68);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    puVar4 = auStack_2f0;
    func_0x000108a2a870(puVar4);
    func_0x0001089958bc();
    func_0x0001089956ac(puVar4 + 0x178);
    func_0x000108995684(puVar4 + 0x170);
    func_0x000108995660(puVar4 + 0x160);
    func_0x00010899563c(puVar4 + 0x150);
    func_0x000108995618(puVar4 + 0x148);
    func_0x000104c03d34(puVar4 + 0x110);
    FUN_108977458(puVar4 + 0xc0);
    func_0x000108959364(puVar4 + 0x90);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar4 + 0x50);
    func_0x000104c05328(puVar4 + 0x38);
    func_0x00010897f638(puVar4 + 0x18);
    return puVar4;
  }
  return puVar4;
}



/* Entry: 1089946e4; end: 108994757;  */

long FUN_1089946e4(long param_1)

{
  func_0x0001089956ac(param_1 + 0x178);
  func_0x000108995684(param_1 + 0x170);
  func_0x000108995660(param_1 + 0x160);
  func_0x00010899563c(param_1 + 0x150);
  func_0x000108995618(param_1 + 0x148);
  func_0x000104c03d34(param_1 + 0x110);
  FUN_108977458(param_1 + 0xc0);
  func_0x000108959364(param_1 + 0x90);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x50);
  func_0x000104c05328(param_1 + 0x38);
  func_0x00010897f638(param_1 + 0x18);
  return param_1;
}



/* Entry: 108994758; end: 10899475b;  */

long FUN_108994758(long param_1)

{
  func_0x0001089956ac(param_1 + 0x178);
  func_0x000108995684(param_1 + 0x170);
  func_0x000108995660(param_1 + 0x160);
  func_0x00010899563c(param_1 + 0x150);
  func_0x000108995618(param_1 + 0x148);
  func_0x000104c03d34(param_1 + 0x110);
  FUN_108977458(param_1 + 0xc0);
  func_0x000108959364(param_1 + 0x90);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x50);
  func_0x000104c05328(param_1 + 0x38);
  func_0x00010897f638(param_1 + 0x18);
  return param_1;
}



/* Entry: 10899475c; end: 10899476f;  */

void FUN_10899475c(void)

{
  FUN_1089946e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108994770; end: 1089949a7;  */

void FUN_108994770(long param_1)

{
  long lVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010899479c();
  func_0x0001089947c0(param_1);
  lVar1 = *(long *)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x170) = 0;
  if (lVar1 != 0) {
    func_0x0001089958d4();
  }
  uStack_28 = *(undefined8 *)(param_1 + 0x168);
  uStack_30 = *(undefined8 *)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  func_0x000108995660(&uStack_30);
  (**(code **)(**(long **)(param_1 + 0x178) + 0x58))();
  uStack_28 = *(undefined8 *)(param_1 + 0x180);
  uStack_30 = *(undefined8 *)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  func_0x0001089956ac(&uStack_30);
  lVar1 = *(long *)(param_1 + 0x148);
  *(long *)(param_1 + 0x148) = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1089949a8; end: 1089949bf;  */

void FUN_1089949a8(long *param_1,long param_2)

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



/* Entry: 1089949c0; end: 108994bf7;  */

void FUN_1089949c0(undefined4 *param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  code *pcVar5;
  undefined1 uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  int iVar9;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined4 uVar10;
  ulong uVar11;
  undefined8 extraout_x10;
  long lVar12;
  int aiStack_d0 [6];
  int aiStack_b8 [4];
  long lStack_a8;
  undefined8 uStack_58;
  
  puVar7 = param_1;
  func_0x0001089958c4();
  uStack_58 = extraout_x8;
  func_0x000108b07ea8();
  uVar10 = 5;
  if (*(int *)(param_2 + 0xb8) != 4) {
    uVar10 = 0;
  }
  uVar1 = 4;
  if (*(int *)(param_2 + 0xb8) != 1) {
    uVar1 = uVar10;
  }
  *puVar7 = uVar1;
  uVar8 = (ulong)*(byte *)(param_2 + 0xbc);
  FUN_108989fc0(uVar8);
  func_0x000107c278b8(aiStack_d0,uVar8);
  func_0x000108a02620(aiStack_b8,aiStack_d0);
  func_0x000108a02784(param_1 + 2,aiStack_b8);
  func_0x000108a027e0(aiStack_b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(aiStack_d0);
  iVar9 = 0;
  param_1[0x22] = (uint)(*(int *)(param_2 + 0x48) != 1);
  param_1[0x26] = 0;
  aiStack_b8[0] = *(int *)(param_2 + 0xf0);
  aiStack_d0[0] = *(int *)(param_2 + 0xfc);
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    iVar9 = *(int *)(param_2 + 0xf4);
  }
  iVar2 = aiStack_b8[0];
  if (aiStack_b8[0] <= aiStack_d0[0]) {
    iVar2 = aiStack_d0[0];
  }
  iVar3 = aiStack_d0[0];
  if (aiStack_d0[0] <= aiStack_b8[0]) {
    iVar3 = aiStack_b8[0];
  }
  if (iVar9 <= iVar2) {
    iVar9 = iVar3;
  }
  param_1[0x27] = iVar9 * 1000;
  uVar11 = *(ulong *)(param_1 + 0x2e);
  *(undefined8 *)(param_1 + 0x28) = 0x3ff0000000000000;
  uVar8 = *(ulong *)(param_1 + 0x2c);
  uVar6 = uVar8 == uVar11;
  if (uVar8 < uVar11) {
    func_0x000108995894();
    *(undefined8 *)(extraout_x8_00 + 0x40) = extraout_x10;
    func_0x0001089958f8();
    lVar12 = extraout_x8_01 + 0x60;
    *(undefined1 *)(extraout_x8_01 + 0x5c) = 0;
  }
  else {
    lVar12 = *(long *)(param_1 + 0x2a);
    uVar8 = (long)(uVar8 - lVar12) / 0x60 + 1;
    if (0x2aaaaaaaaaaaaaa < uVar8) goto LAB_108994bc4;
    uVar4 = (long)(uVar11 - lVar12) / 0x60;
    uVar11 = uVar4 * 2;
    if (uVar11 < uVar8 || uVar11 - uVar8 == 0) {
      uVar11 = uVar8;
    }
    uVar6 = uVar4 == 0x155555555555555;
    if (0x155555555555554 < uVar4) {
      uVar11 = 0x2aaaaaaaaaaaaaa;
    }
    FUN_10899535c(aiStack_b8,uVar11);
    func_0x000108995894(lStack_a8);
    *(undefined8 *)(extraout_x8_02 + 0x40) = 0x3ff0000000000000;
    func_0x0001089958f8();
    *(undefined1 *)(extraout_x8_03 + 0x5c) = 0;
    lStack_a8 = extraout_x8_03 + 0x60;
    FUN_108995294(param_1 + 0x2a,aiStack_b8);
    lVar12 = *(long *)(param_1 + 0x2c);
    FUN_1089953d4(aiStack_b8);
  }
  *(long *)(param_1 + 0x2c) = lVar12;
  *(undefined8 *)(param_1 + 0x30) = 1;
  lVar12 = param_2 + 0xe0;
  FUN_108994bf8(lVar12,*(undefined4 *)(param_2 + 0xb8));
  *(char *)((long)param_1 + 0xc9) = (char)lVar12;
  func_0x000108995868(uStack_58);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
LAB_108994bc4:
  FUN_108995348();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x108994bcc);
  (*pcVar5)();
}



/* Entry: 108994bf8; end: 108994c17;  */

bool FUN_108994bf8(long param_1)

{
  FUN_1089910ac();
  return *(long *)(param_1 + 0x10) != 1;
}



/* Entry: 108994c18; end: 108994cab;  */

void FUN_108994c18(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_108 [200];
  
  lVar1 = param_1;
  func_0x00010899587c();
  if ((int)lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x148);
    uVar2 = (ulong)*(uint *)(param_1 + 0x48);
    FUN_108990e08(uVar2,param_1 + 0x90);
    (**(code **)(**(long **)(param_1 + 0x140) + 0x40))(auStack_108);
    FUN_108999458(uVar3,param_2,uVar2,auStack_108);
    func_0x000108a2a714(auStack_108);
  }
  return;
}



/* Entry: 108994cac; end: 108994cbf;  */

/* WARNING: Removing unreachable block (ram,0x000108afae38) */
/* WARNING: Removing unreachable block (ram,0x000108afae40) */

long * FUN_108994cac(long param_1,int param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uStack_38;
  long lStack_28;
  
  *(int *)(param_1 + 0x138) = param_2;
  plVar2 = *(long **)(param_1 + 0x150);
  if (plVar2 == (long *)0x0) {
    return (long *)0x0;
  }
  if ((int)plVar2[0x15] != param_2) {
    *(int *)(plVar2 + 0x15) = param_2;
    bVar1 = *(char *)((long)plVar2 + 0x81) == '\x01';
    plVar3 = plVar2;
    if ((((bVar1) && ((*(byte *)(plVar2 + 0x10) & 1) == 0)) &&
        ((*(byte *)((long)plVar2 + 0x82) & 1) == 0)) && (func_0x00010899d85c(), bVar1)) {
      plVar3 = plVar2;
      FUN_10899cfa4();
      if ((ulong)plVar3 >> 0x20 == 0) {
        plVar2 = plVar2 + 0x1a;
        if (*plVar2 == 0) {
          return plVar2;
        }
        *(undefined1 *)(*plVar2 + 4) = 0;
        if (*plVar2 != 0) {
          FUN_10899d2d4();
        }
        *plVar2 = 0;
        return plVar2;
      }
      if (plVar2[0x1a] == 0) {
        func_0x00010899d798(0x10899d000);
        func_0x00010899d77c();
        func_0x00010899d334(plVar2 + 0x1a,&lStack_28);
        plVar3 = &lStack_28;
        FUN_10899d2a8(plVar3);
        func_0x00010899d7d0(uStack_38);
      }
    }
    return plVar3;
  }
  return plVar2;
}



/* Entry: 108994cc0; end: 10899526f;  */

void FUN_108994cc0(undefined8 *param_1,long param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  long *plVar13;
  long *plVar14;
  uint uVar15;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  uint uVar16;
  long lVar17;
  undefined1 *puVar18;
  uint uVar19;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined1 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  int iStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [8];
  long lStack_158;
  double dStack_150;
  double dStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  long alStack_110 [2];
  long lStack_100;
  double dStack_f8;
  double dStack_f0;
  undefined8 uStack_70;
  
  puVar9 = param_1;
  func_0x0001089958c4();
  uVar7 = (undefined4)puVar9[2];
  uStack_70 = extraout_x8;
  FUN_108991690();
  iVar2 = *(int *)(param_1 + 0x17);
  *(undefined4 *)(param_1 + 0x17) = uVar7;
  iVar8 = (int)param_1[2];
  FUN_108991690();
  if (*(char *)(param_2 + 0x28) == '\x01') {
    lVar10 = param_2;
    func_0x000108990e7c(param_2);
    FUN_1089789a4(&uStack_140,param_1 + 0x12);
    func_0x00010897b950(param_1 + 0x12,lVar10);
    func_0x000108990e7c(param_2);
    puVar9 = &uStack_140;
    FUN_10897607c(puVar9,param_2);
    uVar19 = (uint)puVar9 ^ 1;
    func_0x000108959364(&uStack_140);
  }
  else {
    uVar19 = 0;
  }
  if (*(char *)(param_3 + 0x20) == '\x01') {
    FUN_108993574(param_3);
    FUN_1089935a8(param_1 + 0x18,param_3);
  }
  uVar11 = param_1[2];
  FUN_1089917ec(uVar11);
  FUN_108993c64(&uStack_140,uVar11,*(undefined4 *)(param_1 + 0x17),param_1 + 0x18);
  FUN_108982094(&uStack_198,param_1 + 0x1c);
  func_0x000104c02778(param_1 + 0x1c,&uStack_140);
  if ((int)uStack_198 == (int)uStack_140) {
    if (uStack_198._4_4_ == uStack_140._4_4_) {
      if ((int)uStack_190 == (int)uStack_138) {
        if (uStack_190._4_4_ == uStack_138._4_4_) {
          if ((int)uStack_188 == (int)uStack_130) {
            uVar15 = (uint)(byte)uStack_180;
            uVar16 = (uint)(byte)uStack_128;
            if (((byte)uStack_180 == (byte)uStack_128) && ((byte)uStack_180 != 0)) {
              uVar15 = uStack_188._4_4_;
              uVar16 = uStack_130._4_4_;
            }
            if (uVar15 == uVar16) {
              if ((((uStack_180._4_4_ == uStack_128._4_4_) && ((int)uStack_178 == iStack_120)) &&
                  (uStack_178._4_4_ == iStack_11c)) &&
                 ((iStack_170 == iStack_118 && (lStack_158 == lStack_100)))) {
                lVar10 = alStack_110[0];
                puVar12 = puStack_168;
                while (puVar12 != auStack_160) {
                  if ((*(int *)(puVar12 + 0x20) != *(int *)(lVar10 + 0x20)) ||
                     (*(long *)(puVar12 + 0x38) != *(long *)(lVar10 + 0x38))) goto LAB_108994fb8;
                  lVar17 = *(long *)(lVar10 + 0x28);
                  puVar18 = *(undefined1 **)(puVar12 + 0x28);
                  while (puVar18 != puVar12 + 0x30) {
                    if ((((*(int *)(puVar18 + 0x1c) != *(int *)(lVar17 + 0x1c)) ||
                         (*(int *)(puVar18 + 0x20) != *(int *)(lVar17 + 0x20))) ||
                        (*(int *)(puVar18 + 0x24) != *(int *)(lVar17 + 0x24))) ||
                       (*(int *)(puVar18 + 0x28) != *(int *)(lVar17 + 0x28))) goto LAB_108994fb8;
                    bVar3 = puVar18[0x30];
                    uVar15 = (uint)bVar3;
                    uVar16 = (uint)*(byte *)(lVar17 + 0x30);
                    if ((bVar3 == *(byte *)(lVar17 + 0x30)) && (bVar3 != 0)) {
                      uVar15 = *(uint *)(puVar18 + 0x2c);
                      uVar16 = *(uint *)(lVar17 + 0x2c);
                    }
                    if (uVar15 != uVar16) goto LAB_108994fb8;
                    bVar3 = puVar18[0x38];
                    uVar15 = (uint)bVar3;
                    uVar16 = (uint)*(byte *)(lVar17 + 0x38);
                    if ((bVar3 == *(byte *)(lVar17 + 0x38)) && (bVar3 != 0)) {
                      uVar15 = *(uint *)(puVar18 + 0x34);
                      uVar16 = *(uint *)(lVar17 + 0x34);
                    }
                    if (uVar15 != uVar16) goto LAB_108994fb8;
                    func_0x000107c27be0();
                    func_0x000107c27be0();
                  }
                  func_0x000107c27be0();
                  func_0x000107c27be0();
                }
                if (dStack_150 == dStack_f8) {
                  bVar5 = dStack_148 != dStack_f0;
                  goto LAB_108994fbc;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_108994fb8:
  bVar5 = true;
LAB_108994fbc:
  uVar6 = iVar2 == iVar8;
  bVar1 = !(bool)uVar6;
  func_0x000104c03d34(&puStack_168);
  plVar13 = alStack_110;
  func_0x000104c03d34();
  if ((bVar1 || (uVar19 & 1) != 0) || (bVar5)) {
    __ZNSt3__16chrono12steady_clock3nowEv();
    uStack_198 = FUN_1089957bc;
    uStack_190 = &PTR_FUN_110aa3648;
    uStack_180 = 0;
    iStack_170 = CONCAT31(iStack_170._1_3_,1);
    uStack_188 = param_1;
    uStack_178 = plVar13;
    func_0x000108995944();
    plVar14 = plVar13;
    func_0x00010899594c();
    uStack_1a0 = *(undefined8 *)((long)plVar14 + 0x1c);
    uVar11 = *(undefined8 *)(param_1[0x2a] + 0x84);
    if ((int)((ulong)uVar11 >> 0x20) * (int)uVar11 <=
        (int)((ulong)uStack_1a0 >> 0x20) * (int)uStack_1a0) {
      uStack_1a0 = uVar11;
    }
    if (iVar2 != iVar8) {
      uVar19 = 1;
    }
    if (uVar19 == 1) {
      plVar14 = (long *)param_1[0x28];
      (**(code **)(*plVar14 + 0x10))();
      cVar4 = *(char *)(param_1 + 0x11);
      func_0x0001089948f0(param_1);
      puVar9 = param_1;
      func_0x0001089947c0();
      if (iVar2 == iVar8) {
        if (bVar5) {
          FUN_10899bd24(param_1[0x2c],param_1 + 0x1c);
        }
      }
      else {
        uStack_1b8 = 0;
        __ZNSt3__16chrono12steady_clock3nowEv();
        uStack_1a8 = 1;
        puStack_1b0 = puVar9;
        func_0x00010899496c(param_1);
        func_0x000108994810(param_1);
        puVar9 = param_1;
        FUN_108994034();
        FUN_1089a3c0c();
        uStack_130 = 0;
        uStack_128 = 0;
        uStack_140 = &PTR_DAT_1107eac58;
        uStack_138 = 0;
        iStack_120 = 0x53;
        func_0x000107c28148(&uStack_1b8);
        func_0x000108995910(*puVar9);
        (*extraout_x8_00)();
        func_0x000104c03ee4(&uStack_140);
      }
      FUN_1089941f8(param_1,&uStack_1a0);
      if ((int)plVar14 != 0) {
        func_0x000108994890(param_1);
      }
      if ((iVar2 != iVar8) && (cVar4 != '\0')) {
        func_0x000108994930(param_1);
      }
    }
    else {
      FUN_10899bd24(param_1[0x2c],param_1 + 0x1c);
      plVar14 = (long *)param_1[0x28];
      FUN_1089949c0(&uStack_140,param_1,&uStack_1a0);
      (**(code **)(*plVar14 + 0x30))(plVar14,&uStack_140);
      puVar9 = &uStack_140;
      func_0x000108b07fc8(puVar9);
      uVar11 = param_1[0x2a];
      func_0x000108995944();
      func_0x00010899cc74(uVar11,puVar9);
    }
    uVar6 = iVar2 == iVar8;
    if ((bool)uVar6) {
      (**(code **)(*(long *)param_1[0x2f] + 0x38))((long *)param_1[0x2f],plVar13);
    }
    plVar13 = &uStack_198;
    func_0x000107c281f0();
  }
  func_0x000108995868(uStack_70);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
  func_0x000104c03ee4(&uStack_140);
  func_0x000107c281f0(&uStack_198);
  func_0x0001089958bc();
  plVar14 = plVar13;
  func_0x000104bd46a0();
  func_0x00010899596c();
  if (plVar14 != (long *)0x0) {
    __ZdlPv();
    *plVar13 = 0;
  }
  return;
}



/* Entry: 108995270; end: 108995293;  */

void FUN_108995270(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x00010899596c();
  if (param_1 != 0) {
    __ZdlPv();
    *unaff_x19 = 0;
  }
  return;
}



/* Entry: 108995294; end: 108995347;  */

void FUN_108995294(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  lVar4 = param_2[1] + ((lVar1 - lVar2) / -0x60) * 0x60;
  lVar3 = lVar4;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x60) {
    _memcpy(lVar3,lVar2,0x5d);
    lVar3 = lVar3 + 0x60;
  }
  param_2[1] = lVar4;
  lVar2 = *param_1;
  param_1[1] = lVar2;
  *param_1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 108995348; end: 10899535b;  */

long * FUN_108995348(undefined8 param_1,ulong param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar1[3] = 0;
  plVar1[4] = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (0x2aaaaaaaaaaaaaa < param_2) {
      func_0x000104bd35f4();
      lVar2 = plVar1[2];
      while (lVar2 != plVar1[1]) {
        lVar2 = lVar2 + -0x60;
        plVar1[2] = lVar2;
      }
      if (*plVar1 != 0) {
        __ZdlPv();
      }
      return plVar1;
    }
    lVar2 = param_2 * 0x60;
    __Znwm();
  }
  lVar3 = lVar2 + param_3 * 0x60;
  *plVar1 = lVar2;
  plVar1[1] = lVar3;
  plVar1[2] = lVar3;
  plVar1[3] = lVar2 + param_2 * 0x60;
  return plVar1;
}



/* Entry: 10899535c; end: 1089953d3;  */

long * FUN_10899535c(long *param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0x2aaaaaaaaaaaaaa < param_2) {
      func_0x000104bd35f4();
      lVar1 = param_1[2];
      while (lVar1 != param_1[1]) {
        lVar1 = lVar1 + -0x60;
        param_1[2] = lVar1;
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar1 = param_2 * 0x60;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x60;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = lVar1 + param_2 * 0x60;
  return param_1;
}



/* Entry: 1089953d4; end: 108995413;  */

long * FUN_1089953d4(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x60;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108995414; end: 108995617;  */

undefined *** FUN_108995414(uint *param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  undefined1 *puVar5;
  undefined ***pppuVar6;
  undefined *puVar7;
  undefined8 extraout_x8;
  long lVar8;
  undefined1 auStack_3a0 [64];
  undefined1 auStack_360 [8];
  undefined1 *puStack_358;
  undefined8 uStack_350;
  undefined1 auStack_2b8 [72];
  long lStack_270;
  undefined1 auStack_268 [24];
  undefined **ppuStack_250;
  undefined1 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [504];
  undefined8 uStack_38;
  
  puVar3 = auStack_3a0;
  puVar5 = auStack_3a0;
  func_0x0001089958c4();
  uStack_38 = extraout_x8;
  func_0x000107c2837c(auStack_3a0);
  func_0x000107c28378(auStack_3a0,param_2);
  lVar8 = *param_2;
  *param_2 = (long)puVar3;
  param_2[1] = param_2[1] + (lVar8 - (long)puVar3);
  puStack_248 = auStack_230;
  ppuStack_250 = &PTR_DAT_11099bc38;
  uStack_238 = 500;
  uStack_240 = 0;
  lVar8 = param_3[3];
  lStack_270 = lVar8;
  func_0x000107c284f4(auStack_2b8,&ppuStack_250);
  FUN_10895b8b0(&puStack_358,auStack_2b8);
  if (lVar8 != 0) {
    lVar8 = *(long *)(puStack_358 + -0x18);
    func_0x00010bd490d0(auStack_268,&lStack_270);
    FUN_1083d3eac(auStack_360,(long)&puStack_358 + lVar8,auStack_268);
    __ZNSt3__16localeD1Ev(auStack_360);
    __ZNSt3__16localeD1Ev(auStack_268);
  }
  uVar1 = *param_1;
  ppuVar4 = &puStack_358;
  func_0x000105987154(ppuVar4,0x5b);
  uVar2 = uVar1 == 3;
  if (uVar1 < 4) {
    puVar7 = (&PTR_DAT_110aa3660)[uVar1];
  }
  else {
    puVar7 = &UNK_10f4edf8e;
  }
  func_0x000107c278b8(auStack_268,puVar7);
  func_0x000107c28084(ppuVar4,auStack_268);
  func_0x00010549023c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_268);
  FUN_10895b954((long)&puStack_358 + *(long *)(puStack_358 + -0x18),5);
  func_0x000107c283e0(&ppuStack_250,uStack_240);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev(&puStack_358);
  __ZNSt3__115basic_streambufIcNS_11char_traitsIcEEED2Ev(auStack_2b8);
  puStack_358 = puStack_248;
  uStack_350 = uStack_240;
  func_0x000107c28388(auStack_3a0,&puStack_358,param_3);
  pppuVar6 = &ppuStack_250;
  func_0x000107c283e8();
  *param_3 = puVar5;
  func_0x000108995868(uStack_38);
  if ((bool)uVar2) {
    return pppuVar6;
  }
  ___stack_chk_fail();
  __ZNSt3__16localeD1Ev(auStack_268);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev(&puStack_358);
  __ZNSt3__115basic_streambufIcNS_11char_traitsIcEEED2Ev(auStack_2b8);
  pppuVar6 = &ppuStack_250;
  func_0x000107c283e8(pppuVar6);
  func_0x0001089958bc();
  FUN_1089949a8();
  return pppuVar6;
}



/* Entry: 108995618; end: 1089956cf;  */

undefined8 FUN_108995618(undefined8 param_1)

{
  FUN_1089949a8(param_1,0);
  return param_1;
}



/* Entry: 1089956d0; end: 1089956d3;  */

void FUN_1089956d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa35b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1089956d4; end: 1089956e7;  */

void FUN_1089956d4(void)

{
  func_0x0001089956f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089956e8; end: 108995703;  */

long FUN_1089956e8(long param_1)

{
  func_0x00010899c458(param_1 + 0x840);
  func_0x000108ad56c4(param_1 + 0x28);
  return param_1 + 0x18;
}



/* Entry: 108995704; end: 108995733;  */

void FUN_108995704(long *param_1)

{
  func_0x00010899596c();
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}



/* Entry: 108995734; end: 108995763;  */

void FUN_108995734(long *param_1)

{
  func_0x00010899596c();
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}



/* Entry: 108995764; end: 108995767;  */

void FUN_108995764(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa3608;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108995768; end: 10899577b;  */

void FUN_108995768(void)

{
  func_0x000108995788();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10899577c; end: 108995797;  */

long FUN_10899577c(long param_1)

{
  (**(code **)(**(long **)(*(long *)(param_1 + 0x58) + 0x18) + 0x38))();
  func_0x00010899d80c();
  func_0x000108afae08(param_1 + 0xe8);
  func_0x000104c05328(param_1 + 0xf0);
  FUN_10899d2a8(param_1 + 0xe8);
  FUN_10899d2a8(param_1 + 0xe0);
  FUN_108995704(param_1 + 0xb8);
  FUN_108995704(param_1 + 0xb0);
  func_0x000104c03854(param_1 + 0x80);
  func_0x000104c03854(param_1 + 0x68);
  FUN_10899d4a0(param_1 + 0x60);
  func_0x00010563d08c((long *)(param_1 + 0x58));
  func_0x0001089956ac(param_1 + 0x48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x30);
  FUN_108995798(param_1 + 0x20);
  return param_1 + 0x18;
}



/* Entry: 108995798; end: 1089957bb;  */

void FUN_108995798(long param_1)

{
  func_0x000108995978();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 1089957bc; end: 108995837;  */

void FUN_1089957bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  code *extraout_x8;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  puVar1 = param_1;
  FUN_1089a3c0c();
  uStack_38 = 0;
  uStack_30 = 0;
  ppuStack_48 = &PTR_DAT_1107eac58;
  uStack_40 = 0;
  uStack_28 = 0x52;
  func_0x000107c28148(param_1 + 3);
  func_0x000108995910(*puVar1);
  (*extraout_x8)();
  func_0x000104c03ee4(&ppuStack_48);
  return;
}



/* Entry: 108995838; end: 108995a17;  */

void FUN_108995838(void)

{
  return;
}



/* Entry: 108995a18; end: 108995dbf;  */

void FUN_108995a18(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  code *extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  long extraout_x8_04;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar11;
  undefined *puVar12;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  ulong uStack_98;
  long lStack_90;
  undefined1 uStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  if (*(int *)(param_2 + 0x18) == -1) {
    func_0x0001089964ac();
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    func_0x0001089964d8(&PTR_FUN_110aa36f8);
  }
  else {
    if (*(long *)(param_2 + 8) == 0) {
      lVar7 = param_2;
      func_0x000108996474();
      lVar8 = lVar7;
      func_0x000108996444();
      lVar9 = lVar8;
      func_0x000108996428();
      uVar2 = lVar9 + 0x18;
      puStack_78 = (undefined8 *)0x0;
      puStack_70 = (undefined8 *)0x0;
      uStack_68 = 0;
      uStack_98 = uStack_98 & 0xffffffffffffff00;
      uStack_80 = 0;
      FUN_108996c48(uVar2,0,lVar7,param_4,&puStack_78,&uStack_98);
      func_0x000108996454();
      func_0x00010899644c();
      uStack_a8 = uVar2;
      lStack_a0 = lVar8;
      func_0x0001089964c0(*(undefined8 *)(param_2 + 0x20));
      (*extraout_x8)();
      uStack_98 = uVar2;
      lStack_90 = lVar8;
      do {
        func_0x000108996494();
      } while (extraout_w9 != 0);
      func_0x0001089964cc();
      (*extraout_x8_00)();
      func_0x0001089964a4();
      uVar3 = *(undefined4 *)(param_2 + 0x18);
      puVar10 = (undefined8 *)0x1c0;
      __Znwm();
      plVar11 = puVar10 + 1;
      *plVar11 = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_DAT_110aa3870;
      puVar1 = puVar10 + 3;
      FUN_10894b170(puVar1,uVar3,param_3,&uStack_a8,param_5);
      if ((puVar10[5] == 0) || (*(long *)(puVar10[5] + 8) == -1)) {
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = *plVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          puStack_b8 = puVar1;
          puStack_b0 = puVar10;
          puStack_78 = puVar1;
          puStack_70 = puVar10;
        } while (cVar4 != '\0');
        do {
          func_0x000108996484();
        } while (extraout_w11 != 0);
        uStack_98 = puVar10[4];
        puVar10[4] = puVar1;
        puVar10[5] = puVar10;
        lStack_90 = extraout_x8_01;
        func_0x00010894c728(&uStack_98);
        func_0x00010894c7ac(&puStack_78);
      }
      *param_1 = (long)puVar1;
      param_1[1] = (long)puVar10;
      puStack_b8 = (undefined8 *)0x0;
      puStack_b0 = (undefined8 *)0x0;
      func_0x00010894c7ac(&puStack_b8);
    }
    else {
      lVar7 = param_2;
      func_0x000108996474();
      uVar6 = *(int *)(param_2 + 0x18) - 1;
      if (uVar6 < 4) {
        puVar12 = (&PTR_DAT_110aa3a58)[uVar6];
      }
      else {
        puVar12 = &DAT_10df7c664;
      }
      lVar8 = lVar7;
      func_0x000108996444();
      func_0x000108996428();
      func_0x000107c278b8(&puStack_78,puVar12);
      uVar2 = lVar8 + 0x18;
      uStack_98 = uStack_98 & 0xffffffffffffff00;
      uStack_80 = 0;
      FUN_108996c48(uVar2,0,lVar7,param_4,&puStack_78,&uStack_98);
      func_0x000108996454();
      func_0x00010899644c();
      uStack_a8 = uVar2;
      lStack_a0 = lVar8;
      func_0x0001089964c0(*(undefined8 *)(param_2 + 0x20));
      (*extraout_x8_02)();
      uStack_98 = uVar2;
      lStack_90 = lVar8;
      do {
        func_0x000108996494();
      } while (extraout_w9_00 != 0);
      func_0x0001089964cc();
      (*extraout_x8_03)();
      func_0x0001089964a4();
      uVar3 = *(undefined4 *)(param_2 + 0x18);
      puVar10 = (undefined8 *)0x270;
      __Znwm();
      plVar11 = puVar10 + 1;
      *plVar11 = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_DAT_110aa3820;
      puVar1 = puVar10 + 3;
      FUN_10898e7d8(puVar1,uVar3,&uStack_a8);
      puStack_b8 = puVar1;
      puStack_b0 = puVar10;
      if ((puVar10[6] == 0) || (*(long *)(puVar10[6] + 8) == -1)) {
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = *plVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          puStack_78 = puVar1;
          puStack_70 = puVar10;
        } while (cVar4 != '\0');
        do {
          func_0x000108996484();
        } while (extraout_w11_00 != 0);
        uStack_98 = puVar10[5];
        puVar10[5] = puVar1;
        puVar10[6] = puVar10;
        lStack_90 = extraout_x8_04;
        func_0x00010898f53c(&uStack_98);
        func_0x00010898f564(&puStack_78);
      }
      FUN_10898edf4(puVar1,(long *)(param_2 + 8),param_3,param_4);
      *param_1 = (long)puVar1;
      param_1[1] = (long)puVar10;
      puStack_b8 = (undefined8 *)0x0;
      puStack_b0 = (undefined8 *)0x0;
      func_0x00010898f564(&puStack_b8);
    }
    func_0x00010894c74c(&uStack_a8);
  }
  return;
}



/* Entry: 108995dc0; end: 1089961ef;  */

void FUN_108995dc0(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  int extraout_w9;
  int extraout_w11;
  undefined *puVar8;
  long *plVar9;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  
  if (*(char *)(param_2 + 6) == '\x01') {
    if (*(int *)(param_2 + 3) + 1U < 2) {
      func_0x0001089964ac();
      param_2[1] = 0;
      param_2[2] = 0;
      func_0x0001089964d8(&PTR_SUB_110aa3910);
      return;
    }
    puVar6 = param_2;
    func_0x000108996418();
    puVar7 = puVar6;
    func_0x000108996444();
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_DAT_110aa37d0;
    func_0x000107c278b8(&puStack_78,"");
    func_0x0001089964b4();
    puVar5 = puVar7 + 3;
    puVar4 = puVar5;
    FUN_108996c48(puVar5,1,puVar6,param_4,&puStack_78,&puStack_a0);
    func_0x000108996464();
    func_0x00010899646c();
    puStack_a0 = (undefined8 *)param_2[1];
    puStack_98 = (undefined8 *)param_2[2];
    if (puStack_98 != (undefined8 *)0x0) {
      plVar9 = puStack_98 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = *plVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puStack_c0 = puStack_a0;
    puStack_b8 = puStack_98;
    puStack_b0 = puVar5;
    puStack_a8 = puVar7;
    func_0x0001089964ac();
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_DAT_110aa39c8;
    puStack_c0 = puVar4 + 3;
    *puStack_c0 = &PTR_FUN_110aa2a30;
    puStack_b8 = puVar4;
    func_0x000104c04a20(&puStack_a0);
    if (puStack_c0 == (undefined8 *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 3);
      puVar5 = (undefined8 *)0x80;
      __Znwm();
      plVar9 = puVar5 + 1;
      *plVar9 = 0;
      puVar5[2] = 0;
      puVar6 = puVar5 + 3;
      *puVar5 = &PTR_DAT_110aa3a18;
      FUN_10898caf0(puVar6,&puStack_c0,uVar1,&puStack_b0);
      puStack_d0 = puVar6;
      puStack_c8 = puVar5;
      if ((puVar5[5] == 0) || (*(long *)(puVar5[5] + 8) == -1)) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          puStack_78 = puVar6;
          puStack_70 = puVar5;
        } while (cVar2 != '\0');
        do {
          func_0x000108996484();
        } while (extraout_w11 != 0);
        puStack_a0 = (undefined8 *)puVar5[4];
        puVar5[4] = puVar6;
        puVar5[5] = puVar5;
        puStack_98 = extraout_x8;
        func_0x00010898d234(&puStack_a0);
        func_0x00010898d43c(&puStack_78);
      }
      func_0x0001089964c0(param_2[4]);
      (*extraout_x8_00)();
      puStack_98 = puStack_a8;
      puStack_a0 = puStack_b0;
      if (puStack_a8 != (undefined8 *)0x0) {
        plVar9 = puStack_a8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x0001089964cc();
      (*extraout_x8_01)();
      func_0x00010899645c();
      param_1[1] = (long)puStack_c8;
      *param_1 = (long)puStack_d0;
      puStack_d0 = (undefined8 *)0x0;
      puStack_c8 = (undefined8 *)0x0;
      func_0x00010898d43c(&puStack_d0);
    }
    func_0x000104c04a20(&puStack_c0);
  }
  else {
    if (param_2[1] == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    if (*(int *)(param_2 + 3) - 1U < 4) {
      puVar8 = (&PTR_DAT_110aa3a58)[*(int *)(param_2 + 3) - 1U];
    }
    else {
      puVar8 = &DAT_10df7c664;
    }
    puVar6 = param_2;
    func_0x000108996418();
    puVar7 = puVar6;
    func_0x000108996444();
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_DAT_110aa37d0;
    func_0x000107c278b8(&puStack_78,puVar8);
    func_0x0001089964b4();
    puVar5 = puVar7 + 3;
    FUN_108996c48(puVar5,1,puVar6,param_4,&puStack_78,&puStack_a0);
    func_0x000108996464();
    func_0x00010899646c();
    puStack_b0 = puVar5;
    puStack_a8 = puVar7;
    func_0x0001089964c0(param_2[4]);
    (*extraout_x8_02)();
    puStack_a0 = puVar5;
    puStack_98 = puVar7;
    do {
      func_0x000108996494();
    } while (extraout_w9 != 0);
    func_0x0001089964cc();
    (*extraout_x8_03)();
    func_0x00010899645c();
    puVar5 = (undefined8 *)0x98;
    __Znwm();
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_DAT_110aa38c0;
    func_0x000107c278b8(&puStack_a0,puVar8);
    FUN_10898d520(puVar5 + 3,param_2 + 1,&puStack_a0,&puStack_b0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_a0);
    *param_1 = (long)(puVar5 + 3);
    param_1[1] = (long)puVar5;
  }
  func_0x00010894c74c(&puStack_b0);
  return;
}



/* Entry: 1089961f0; end: 1089961f3;  */

undefined8 * FUN_1089961f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa3690;
  func_0x000104c05304(param_1 + 4);
  func_0x000104c04a20(param_1 + 1);
  return param_1;
}



/* Entry: 1089961f4; end: 108996207;  */

void FUN_1089961f4(void)

{
  FUN_108996218();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108996208; end: 108996217;  */

undefined4 FUN_108996208(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 108996218; end: 108996257;  */

undefined8 * FUN_108996218(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa3690;
  func_0x000104c05304(param_1 + 4);
  func_0x000104c04a20(param_1 + 1);
  return param_1;
}



/* Entry: 108996258; end: 108996263;  */

void FUN_108996258(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa36f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108996264; end: 108996277;  */

void FUN_108996264(void)

{
  FUN_108996258();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108996278; end: 1089962af;  */

void FUN_108996278(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010899640c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1089962b0; end: 1089962c3;  */

void FUN_1089962b0(void)

{
  func_0x0001089962cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089962c4; end: 1089962db;  */

void FUN_1089962c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010899640c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1089962dc; end: 1089962ef;  */

void FUN_1089962dc(void)

{
  func_0x0001089962f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089962f0; end: 108996307;  */

void FUN_1089962f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010899640c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108996308; end: 10899631b;  */

void FUN_108996308(void)

{
  func_0x000108996324();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10899631c; end: 108996333;  */

void FUN_10899631c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010899640c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108996334; end: 108996347;  */

void FUN_108996334(void)

{
  func_0x000108996350();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108996348; end: 108996367;  */

void FUN_108996348(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010899640c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108996368; end: 10899637b;  */

void FUN_108996368(void)

{
  func_0x00010899635c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10899637c; end: 1089963af;  */

void FUN_10899637c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010899640c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1089963b0; end: 1089963c3;  */

void FUN_1089963b0(void)

{
  func_0x0001089963cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089963c4; end: 1089963db;  */

void FUN_1089963c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010899640c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1089963dc; end: 1089963ef;  */

void FUN_1089963dc(void)

{
  func_0x0001089963f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089963f0; end: 1089964eb;  */

void FUN_1089963f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010899640c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1089964ec; end: 1089967c7;  */

undefined8 * FUN_1089964ec(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  *param_1 = param_1 + 1;
  param_1[3] = param_1 + 4;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[6] = param_1 + 7;
  param_1[8] = 0;
  func_0x000108996b08(param_1,&UNK_10df7c5cd);
  FUN_10897cbdc(param_2,auStack_68,1);
  lVar2 = param_2;
  func_0x000108996b00();
  *(char *)(param_1 + 9) = (char)param_2;
  func_0x000108996b08();
  func_0x000108996af4();
  if ((int)lVar2 == 0) {
    lVar5 = 0;
  }
  else {
    FUN_108981d98();
    lVar5 = lVar2;
  }
  func_0x000108996b00();
  func_0x000108996b08();
  func_0x000108996af4();
  if ((int)lVar2 == 0) {
    lVar6 = 0;
  }
  else {
    FUN_108981e28();
    lVar6 = lVar2;
  }
  func_0x000108996b00();
  if ((((uint)lVar5 | (uint)lVar6) & 1) != 0) {
    func_0x000108996b10(&lStack_70,param_3,1);
    FUN_1089967d0(param_1,1,&lStack_70,lVar5,lVar6);
    lVar2 = lStack_70;
    if (lStack_70 != 0) {
      func_0x000108996ae8();
      lVar2 = lStack_70;
    }
  }
  uVar3 = (uint)lVar2;
  func_0x000108996b08();
  func_0x000108996af4();
  if (uVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = uVar3;
    func_0x000108981e40();
    uVar3 = uVar4;
  }
  func_0x000108996b00();
  func_0x000108996b08();
  func_0x000108996af4();
  if (uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_108981ed0();
  }
  func_0x000108996b00();
  if (((uVar4 | uVar3) & 1) != 0) {
    func_0x000108996b10(&lStack_78,param_3,2);
    func_0x000108996b24(param_1,2,&lStack_78);
    if (lStack_78 != 0) {
      func_0x000108996ae8();
    }
    iVar1 = (int)lStack_78;
    FUN_108981d1c();
    if (iVar1 != 0) {
      func_0x000108996b10(&lStack_80,param_3,4);
      func_0x000108996b24(param_1,4,&lStack_80);
      if (lStack_80 != 0) {
        func_0x000108996ae8();
      }
    }
  }
  func_0x000108996b10(&lStack_88,param_3,0xffffffff);
  FUN_1089967d0(param_1,0xffffffff,&lStack_88,1,0);
  if (lStack_88 != 0) {
    func_0x000108996ae8();
  }
  return param_1;
}



/* Entry: 1089967c8; end: 1089967cf;  */

undefined * FUN_1089967c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_70 [24];
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 1;
  puStack_40 = &DAT_10f4edb22;
  func_0x000107c27958(auStack_70,&puStack_40);
  FUN_10897cb20(&ppuStack_58,param_1,param_2,auStack_70);
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    ppuStack_58 = &ppuStack_58;
  }
  puVar1 = &DAT_10f4edb20;
  func_0x000107c27944(&DAT_10f4edb20,1,ppuStack_58,uStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  return puVar1;
}



/* Entry: 1089967d0; end: 108996867;  */

void FUN_1089967d0(long *param_1,undefined4 param_2,long *param_3,int param_4,int param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 uStack_34;
  
  plVar1 = param_1;
  uStack_34 = param_2;
  FUN_10899692c(param_1,&uStack_34);
  lVar3 = *param_3;
  *param_3 = 0;
  plVar2 = (long *)*plVar1;
  *plVar1 = lVar3;
  if (plVar2 != (long *)0x0) {
    func_0x000108996ae8();
  }
  if (param_4 != 0) {
    func_0x000108996b18();
    lVar3 = *plVar2;
    plVar2 = param_1 + 3;
    FUN_1089969f8(plVar2,&uStack_34);
    *plVar2 = lVar3;
  }
  if (param_5 != 0) {
    func_0x000108996b18();
    lVar3 = *plVar2;
    param_1 = param_1 + 6;
    FUN_1089969f8(param_1,&uStack_34);
    *param_1 = lVar3;
  }
  return;
}



/* Entry: 108996868; end: 1089968c3;  */

void FUN_108996868(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x38;
  __Znwm();
  func_0x000108995984();
  *param_1 = uVar1;
  return;
}



/* Entry: 1089968c4; end: 10899692b;  */

undefined8 FUN_1089968c4(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined4 uStack_14;
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  uStack_14 = param_2;
  func_0x0001089968f0(puVar1,&uStack_14);
  return *puVar1;
}



/* Entry: 10899692c; end: 1089969f7;  */

long * FUN_10899692c(long *param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  iVar1 = *param_2;
  plVar4 = (long *)param_1[1];
  plVar3 = param_1 + 1;
  do {
    plVar5 = plVar3;
    if (plVar4 == (long *)0x0) {
LAB_108996990:
      plVar2 = (long *)0x30;
      __Znwm();
      *(int *)(plVar2 + 4) = iVar1;
      plVar2[5] = 0;
      *plVar2 = 0;
      plVar2[1] = 0;
      plVar2[2] = (long)plVar3;
      *plVar5 = (long)plVar2;
      plVar3 = plVar2;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        plVar3 = (long *)*plVar5;
      }
      func_0x000107c27be4(param_1[1],plVar3);
      param_1[2] = param_1[2] + 1;
LAB_1089969e0:
      return plVar2 + 5;
    }
    while (plVar2 = plVar4, plVar3 = plVar2, (int)plVar2[4] <= iVar1) {
      if (iVar1 <= (int)plVar2[4]) goto LAB_1089969e0;
      plVar4 = (long *)plVar2[1];
      if ((long *)plVar2[1] == (long *)0x0) {
        plVar5 = plVar2 + 1;
        goto LAB_108996990;
      }
    }
    plVar4 = (long *)*plVar2;
  } while( true );
}



/* Entry: 1089969f8; end: 108996a97;  */

undefined8 * FUN_1089969f8(long *param_1,undefined4 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_38;
  
  plVar1 = param_1;
  FUN_108996a98(param_1,&uStack_38,param_2);
  puVar3 = (undefined8 *)*plVar1;
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x30;
    __Znwm();
    *(undefined4 *)(puVar3 + 4) = *param_2;
    puVar3[5] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = uStack_38;
    *plVar1 = (long)puVar3;
    puVar2 = puVar3;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      puVar2 = (undefined8 *)*plVar1;
    }
    func_0x000107c27be4(param_1[1],puVar2);
    param_1[2] = param_1[2] + 1;
  }
  return puVar3 + 5;
}



/* Entry: 108996a98; end: 108996b57;  */

long * FUN_108996a98(long param_1,long *param_2,int *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)(param_1 + 8);
  plVar2 = plVar1;
  if ((long *)*plVar1 != (long *)0x0) {
    plVar3 = (long *)*plVar1;
    do {
      while (plVar2 = plVar3, (int)plVar3[4] <= *param_3) {
        if (*param_3 <= (int)plVar3[4]) goto LAB_108996ae0;
        plVar1 = plVar3 + 1;
        plVar3 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_108996ae0;
      }
      plVar4 = (long *)*plVar3;
      plVar1 = plVar3;
      plVar3 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
LAB_108996ae0:
  *param_2 = (long)plVar2;
  return plVar1;
}



/* Entry: 108996b58; end: 108996c2b;  */

void FUN_108996b58(undefined1 *param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined ***pppuVar2;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  if (param_2 < 0x4b) {
    *param_1 = 0;
    param_1[0x28] = 0;
  }
  else {
    lVar1 = 0;
    if (param_2 != 0) {
      lVar1 = (param_3 * 100) / param_2;
    }
    func_0x000108996b30(param_4);
    if (lVar1 < 10) {
      uStack_38 = 0;
      uStack_30 = 0;
      ppuStack_48 = &PTR_DAT_1107eac58;
      uStack_40 = 0;
      uStack_28 = 0x67;
      pppuVar2 = &ppuStack_48;
      FUN_108949d24(pppuVar2,param_4);
      FUN_108996c2c(param_1,pppuVar2);
    }
    else {
      uStack_38 = 0;
      uStack_30 = 0;
      ppuStack_48 = &PTR_DAT_1107eac58;
      uStack_40 = 0;
      uStack_28 = 0x66;
      pppuVar2 = &ppuStack_48;
      FUN_108949d24(pppuVar2,param_4);
      FUN_108996c2c(param_1,pppuVar2);
    }
    func_0x000104c03ee4(&ppuStack_48);
  }
  return;
}



/* Entry: 108996c2c; end: 108996c47;  */

void FUN_108996c2c(long param_1)

{
  func_0x000108942850();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 108996c48; end: 108996d47;  */

undefined8 *
FUN_108996c48(undefined8 *param_1,int param_2,int param_3,undefined4 param_4,undefined8 param_5,
             undefined8 *param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_FUN_110aa3a88;
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  if (param_3 - 1U < 4) {
    uVar1 = *(undefined4 *)(&UNK_10df7c700 + (ulong)(param_3 - 1U) * 4);
  }
  else {
    uVar1 = 0;
  }
  *(undefined4 *)((long)param_1 + 0xc) = uVar1;
  func_0x000108996b30();
  *(int *)(param_1 + 2) = param_3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 3,param_5);
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  if (*(char *)(param_6 + 3) == '\x01') {
    uVar3 = param_6[1];
    uVar2 = *param_6;
    param_1[8] = param_6[2];
    param_1[7] = uVar3;
    param_1[6] = uVar2;
    param_6[1] = 0;
    param_6[2] = 0;
    *param_6 = 0;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  *(undefined4 *)(param_1 + 10) = param_4;
  param_1[0xb] = 0x32aaaba7;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((long)param_1 + 0x91) = 0;
  *(undefined8 *)((long)param_1 + 0x89) = 0;
  return param_1;
}



/* Entry: 108996d48; end: 108996d9b;  */

void FUN_108996d48(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  __ZNSt3__15mutex4lockEv(param_1 + 0x58);
  if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
    if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
      *(undefined1 *)(param_1 + 0xa0) = 1;
      *(long *)(param_1 + 0x98) = lVar1;
    }
    *(undefined1 *)(param_1 + 0xb0) = 1;
    *(long *)(param_1 + 0xa8) = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x58);
  return;
}



/* Entry: 108996d9c; end: 108996e13;  */

void FUN_108996d9c(long param_1)

{
  long unaff_x19;
  
  func_0x00010899792c();
  if (*(char *)(unaff_x19 + 0xb0) == '\x01') {
    __ZNSt3__16chrono12steady_clock3nowEv();
    *(long *)(unaff_x19 + 0xc0) =
         *(long *)(unaff_x19 + 0xc0) + (param_1 - *(long *)(unaff_x19 + 0xa8));
    if (*(char *)(unaff_x19 + 0xb0) == '\x01') {
      *(undefined1 *)(unaff_x19 + 0xb0) = 0;
    }
    *(long *)(unaff_x19 + 0xb8) = param_1 - *(long *)(unaff_x19 + 0x98);
    FUN_108996e14();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x58);
  return;
}



/* Entry: 108996e14; end: 108996f4f;  */

void FUN_108996e14(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  undefined8 *puVar4;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [40];
  
  pppuVar2 = &ppuStack_80;
  pppuVar3 = &ppuStack_80;
  if (*(int *)(param_1 + 8) == 1) {
    if (*(long **)(param_1 + 0xf0) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xf0) + 0x38))();
    }
    iVar1 = *(int *)(param_1 + 0x50);
    if ((iVar1 != 0) && (iVar1 != 3)) {
      uStack_60 = 0x35;
      if (iVar1 == 2) {
        uStack_60 = 0x37;
      }
      uStack_70 = 0;
      uStack_68 = 0;
      ppuStack_80 = &PTR_DAT_1107eac58;
      uStack_78 = 0;
      FUN_108949d24(&ppuStack_80,*(undefined4 *)(param_1 + 0x10));
      FUN_108996f50();
      func_0x000108942850(auStack_58,pppuVar2);
      func_0x000104c03ee4();
      FUN_1089a3c0c();
      puVar4 = *pppuVar3;
      (**(code **)*puVar4)(puVar4,auStack_58,param_2);
      FUN_1089a3c0c();
      (**(code **)(*(long *)*puVar4 + 8))((long *)*puVar4,auStack_58,1);
      func_0x000104c03ee4(auStack_58);
    }
  }
  return;
}



/* Entry: 108996f50; end: 108996fe3;  */

undefined8 FUN_108996f50(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 auStack_38 [24];
  
  uVar3 = param_2 >> 0x10 & 0xffff;
  if ((uint)uVar3 < 0xf) {
    puVar2 = (&PTR_DAT_113289a60)[uVar3];
  }
  else {
    puVar2 = &UNK_10f4edfb9;
  }
  func_0x000107c278b8(auStack_38,puVar2);
  uVar1 = (uint)param_2 & 0xffff;
  if (uVar1 < 0x2d) {
    puVar2 = (&PTR_DAT_113289ad8)[uVar1];
  }
  else {
    puVar2 = &UNK_10f4edfca;
  }
  FUN_108949f78(param_1,auStack_38,puVar2);
  func_0x000108997964();
  return param_1;
}



/* Entry: 108996fe4; end: 1089971bf;  */

void FUN_108996fe4(void)

{
  long unaff_x19;
  
  func_0x00010899792c();
  *(int *)(unaff_x19 + 200) = *(int *)(unaff_x19 + 200) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x58);
  return;
}



/* Entry: 1089971c0; end: 108997617;  */

void FUN_1089971c0(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  long unaff_x19;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2f0 [72];
  undefined1 uStack_2a8;
  undefined1 auStack_2a0 [32];
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  uint uStack_250;
  undefined8 uStack_24c;
  undefined4 uStack_244;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined4 uStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined8 uStack_218;
  undefined1 uStack_210;
  uint uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 auStack_1e0 [24];
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_197;
  char cStack_188;
  byte bStack_180;
  undefined1 uStack_178;
  undefined7 uStack_177;
  char cStack_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  char cStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  long alStack_120 [10];
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_87;
  undefined1 uStack_78;
  
  uStack_178 = 0;
  cStack_170 = '\0';
  uStack_168 = 0;
  cStack_160 = '\0';
  lStack_150 = 0;
  lStack_158 = 0;
  uStack_140 = 0;
  uStack_148 = 0;
  uStack_130 = 0;
  uStack_138 = 0;
  uStack_128 = 0;
  alStack_120[1] = 0;
  alStack_120[0] = 0;
  alStack_120[3] = 0;
  alStack_120[2] = 0;
  __ZNSt3__15mutex4lockEv(param_2 + 0x58);
  _memcpy(&uStack_178,param_2 + 0x98,0x54);
  func_0x000108997178(alStack_120,param_2 + 0xf0);
  func_0x000108997108(alStack_120 + 2,param_2 + 0x100);
  __ZNSt3__15mutex6unlockEv(param_2 + 0x58);
  uStack_200 = uStack_200 & 0xffffff00;
  bStack_180 = 0;
  if (alStack_120[2] == 0) {
    lVar9 = 0;
    if (alStack_120[0] == 0) goto LAB_108997294;
    func_0x000108997958();
  }
  else {
    func_0x000108997958();
  }
  FUN_108997618(&uStack_200,&uStack_280);
  lVar9 = unaff_x19 + 0x20;
  FUN_108946434(lVar9);
LAB_108997294:
  lVar11 = lStack_150;
  lVar5 = lStack_158;
  lVar10 = lStack_158;
  if (cStack_160 == '\x01') {
    __ZNSt3__16chrono12steady_clock3nowEv();
    lVar10 = lVar9 - CONCAT71(uStack_177,uStack_178);
    if (cStack_170 == '\0') {
      lVar10 = lVar5;
    }
    lVar11 = (lVar9 + lVar11) - CONCAT71(uStack_167,uStack_168);
  }
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  iVar3 = *(int *)(param_2 + 0x50);
  puVar8 = auStack_2a0;
  func_0x000107c279a0(puVar8,param_2 + 0x30);
  if (cStack_170 == '\x01') {
    __ZNSt3__16chrono12steady_clock3nowEv();
    lVar9 = CONCAT71(uStack_177,uStack_178) - (long)puVar8;
    __ZNSt3__16chrono12system_clock3nowEv();
    lVar9 = (lVar9 + (long)puVar8 * 1000) / 1000000;
  }
  else {
    lVar9 = 0;
  }
  uVar6 = (undefined4)uStack_148;
  uVar7 = uStack_148._4_4_;
  if ((bStack_180 & 1) == 0) {
    lStack_320 = (ulong)lStack_320._1_7_ << 8;
    uStack_2a8 = 0;
    uStack_1f4 = (undefined4)uStack_130;
    uStack_1f0 = uStack_130._4_4_;
    uStack_1ec = uStack_128;
    uStack_1fc = (undefined4)uStack_138;
    uStack_1f8 = uStack_138._4_4_;
  }
  else {
    iVar4 = *(int *)(param_2 + 8);
    auStack_d0[0] = 0;
    uStack_78 = 0;
    if (cStack_188 == '\x01') {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_d0,auStack_1e0);
      uStack_b0 = (undefined4)uStack_1c0;
      uStack_ac = (undefined4)((ulong)uStack_1c0 >> 0x20);
      uStack_b8 = uStack_1c8;
      uStack_a0 = uStack_1b0;
      uStack_a8 = (undefined4)uStack_1b8;
      uStack_a4 = (undefined4)((ulong)uStack_1b8 >> 0x20);
      uStack_98 = uStack_1a8;
      uStack_87 = uStack_197;
      uStack_78 = 1;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (alStack_120 + 7,param_2 + 0x18);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (alStack_120 + 4,auStack_d0);
      uStack_310 = alStack_120[9];
      uStack_2f8 = alStack_120[6];
      uStack_300 = alStack_120[5];
      uStack_308 = alStack_120[4];
      uStack_250 = uStack_200;
      if (uStack_200 != 2) {
        uStack_250 = (uint)(uStack_200 == 1);
      }
      uStack_24c = uStack_b8;
      uStack_238 = CONCAT44(uStack_a8,uStack_ac);
      uStack_240 = uStack_a0;
      uStack_318 = alStack_120[8];
      lStack_320 = alStack_120[7];
      alStack_120[7] = 0;
      alStack_120[8] = 0;
      alStack_120[9] = 0;
      alStack_120[5] = 0;
      alStack_120[6] = 0;
      alStack_120[4] = 0;
      uStack_244 = uStack_b0;
      uStack_230 = uStack_a4;
      uStack_228 = 0;
      uStack_220 = 0;
      uStack_218 = 0;
      uStack_280 = 0;
      uStack_278 = 0;
      uStack_270 = 0;
      uStack_268 = 0;
      uStack_260 = 0;
      uStack_258 = 0;
      uStack_210 = iVar4 == 0;
      _memcpy(auStack_2f0,&uStack_250,0x41);
      uStack_2a8 = 1;
      FUN_108997708(&uStack_280);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_120 + 4);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_120 + 7);
    }
    else {
      lStack_320 = (ulong)lStack_320._1_7_ << 8;
      uStack_2a8 = 0;
    }
    FUN_108946434(auStack_d0);
  }
  func_0x000108997730(param_1,uVar2,uVar1,iVar3 == 2,auStack_2a0,lVar9,lVar10 / 1000000,
                      lVar11 / 1000000,uStack_1fc,uStack_1f8,uVar6,uVar7,uStack_1f4,uStack_1f0,
                      uStack_1ec);
  FUN_108997840(&lStack_320);
  func_0x000107c279a4(auStack_2a0);
  FUN_108997860(&uStack_200);
  func_0x000108997890(&uStack_178);
  return;
}



/* Entry: 108997618; end: 1089976ef;  */

undefined8 * FUN_108997618(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    cVar1 = *(char *)(param_1 + 0xf);
    if (cVar1 == *(char *)(param_2 + 0xf)) {
      if (cVar1 != '\0') {
        func_0x000107c27b9c(param_1 + 4,param_2 + 4);
        FUN_108997908();
      }
    }
    else if (cVar1 == '\0') {
      uVar3 = param_2[5];
      uVar2 = param_2[4];
      param_1[6] = param_2[6];
      param_1[5] = uVar3;
      param_1[4] = uVar2;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[4] = 0;
      FUN_108997908();
      *(undefined1 *)(param_1 + 0xf) = 1;
    }
    else {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 4);
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  else {
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    if (*(char *)(param_2 + 0xf) == '\x01') {
      uVar3 = param_2[5];
      uVar2 = param_2[4];
      param_1[6] = param_2[6];
      param_1[5] = uVar3;
      param_1[4] = uVar2;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[4] = 0;
      FUN_108997908();
      *(undefined1 *)(param_1 + 0xf) = 1;
    }
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  return param_1;
}



/* Entry: 1089976f0; end: 1089976f3;  */

undefined8 * FUN_1089976f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa3a88;
  func_0x000108997890(param_1 + 0x13);
  __ZNSt3__15mutexD1Ev(param_1 + 0xb);
  func_0x000107c279a4(param_1 + 6);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 3);
  return param_1;
}



/* Entry: 1089976f4; end: 108997707;  */

void FUN_1089976f4(void)

{
  func_0x0001089978bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108997708; end: 10899783f;  */

void FUN_108997708(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 108997840; end: 10899785f;  */

void FUN_108997840(long param_1)

{
  if (*(char *)(param_1 + 0x78) == '\x01') {
    FUN_108997708();
  }
  return;
}



/* Entry: 108997860; end: 108997907;  */

long FUN_108997860(long param_1)

{
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_108946434(param_1 + 0x20);
  }
  return param_1;
}



/* Entry: 108997908; end: 108997997;  */

void FUN_108997908(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x61);
  *(undefined8 *)(unaff_x19 + 0x69) = *(undefined8 *)(unaff_x20 + 0x69);
  *(undefined8 *)(unaff_x19 + 0x61) = uVar7;
  *(undefined8 *)(unaff_x19 + 0x60) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x58) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x50) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x48) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x40) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x38) = uVar1;
  return;
}



/* Entry: 108997998; end: 108997ad7;  */

void FUN_108997998(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined2 uStack_6b;
  undefined1 uStack_69;
  undefined1 auStack_68 [38];
  undefined2 uStack_42;
  undefined1 auStack_40 [32];
  
  if (param_2 == 1) {
    puVar1 = (undefined8 *)0x50;
    __Znwm();
    uStack_42 = 0x807;
    FUN_108998448(auStack_40,&uStack_42,2);
    uStack_6b = 0x105;
    FUN_108998448(auStack_68,&uStack_6b,2);
    FUN_108997b6c(puVar1,auStack_40,auStack_68,1);
    func_0x000108997e88(auStack_68);
    func_0x00010899861c();
    ppuVar2 = &PTR_FUN_110aa3b98;
  }
  else {
    if (param_2 != 4 && param_2 != 2) {
      puVar1 = (undefined8 *)0x0;
      goto LAB_108997aa0;
    }
    puVar1 = (undefined8 *)0x50;
    __Znwm();
    uStack_6b = 0x2120;
    uStack_69 = 0x22;
    FUN_108997ad8(auStack_40,&uStack_6b,3);
    uStack_42 = CONCAT11(uStack_42._1_1_,0x27);
    FUN_108997ad8(auStack_68,&uStack_42,1);
    FUN_108997b6c(puVar1,auStack_40,auStack_68,0);
    func_0x000108997e88(auStack_68);
    func_0x00010899861c();
    ppuVar2 = &PTR_FUN_110aa3ad8;
  }
  *puVar1 = ppuVar2;
LAB_108997aa0:
  *param_1 = puVar1;
  return;
}



/* Entry: 108997ad8; end: 108997b6b;  */

void FUN_108997ad8(void)

{
  undefined1 uVar1;
  long lVar2;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar3;
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  byte in_b1;
  char in_register_00005021;
  char in_register_00005022;
  char in_register_00005023;
  char in_register_00005024;
  char in_register_00005025;
  char in_register_00005026;
  char in_register_00005027;
  undefined8 unaff_d8;
  
  func_0x000108998500();
  func_0x000108998594();
  do {
    uVar1 = unaff_x20 == unaff_x21;
    if ((bool)uVar1) {
      return;
    }
    func_0x00010899852c();
    do {
      func_0x0001089985f0();
      uVar3 = extraout_x13;
      while (uVar3 != 0) {
        func_0x0001089985b4();
        if ((bool)uVar1) goto LAB_108997b50;
        uVar1 = 0;
        uVar3 = extraout_x13_00 - 1 & extraout_x13_00;
      }
      in_b1 = NEON_umaxv(CONCAT17(-(in_register_00005027 == (char)((ulong)unaff_d8 >> 0x38)),
                                  CONCAT16(-(in_register_00005026 == (char)((ulong)unaff_d8 >> 0x30)
                                            ),CONCAT15(-(in_register_00005025 ==
                                                        (char)((ulong)unaff_d8 >> 0x28)),
                                                       CONCAT14(-(in_register_00005024 ==
                                                                 (char)((ulong)unaff_d8 >> 0x20)),
                                                                CONCAT13(-(in_register_00005023 ==
                                                                          (char)((ulong)unaff_d8 >>
                                                                                0x18)),
                                                                         CONCAT12(-(
                                                  in_register_00005022 ==
                                                  (char)((ulong)unaff_d8 >> 0x10)),
                                                  CONCAT11(-(in_register_00005021 ==
                                                            (char)((ulong)unaff_d8 >> 8)),
                                                           -(in_b1 == (byte)unaff_d8)))))))),1);
      in_register_00005021 = '\0';
      in_register_00005022 = '\0';
      in_register_00005023 = '\0';
      in_register_00005024 = '\0';
      in_register_00005025 = '\0';
      in_register_00005026 = '\0';
      in_register_00005027 = '\0';
    } while ((in_b1 & 1) == 0);
    lVar2 = unaff_x19;
    func_0x000108997f08();
    *(undefined1 *)(*(long *)(unaff_x19 + 8) + lVar2) = *unaff_x20;
LAB_108997b50:
    unaff_x20 = unaff_x20 + 1;
  } while( true );
}



/* Entry: 108997b6c; end: 108997bbb;  */

undefined8 *
FUN_108997b6c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  *param_1 = &PTR_DAT_110aa3b68;
  func_0x0001089980fc(param_1 + 1);
  func_0x0001089980fc(param_1 + 5,param_3);
  *(undefined1 *)(param_1 + 9) = param_4;
  return param_1;
}



/* Entry: 108997bbc; end: 108997bbf;  */

undefined8 * FUN_108997bbc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110aa3b68;
  func_0x000108997e88(param_1 + 5);
  func_0x000108997e88(param_1 + 1);
  return param_1;
}



/* Entry: 108997bc0; end: 108997bd3;  */

void FUN_108997bc0(void)

{
  FUN_108998118();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108997bd4; end: 108997e33;  */

void FUN_108997bd4(long *param_1,long param_2,byte *param_3,long param_4,int param_5)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  undefined **ppuVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  uint uVar9;
  ulong uVar10;
  long lStack_c8;
  undefined **ppuStack_c0;
  long *plStack_b8;
  long lStack_b0;
  byte *pbStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  if (param_5 == 0) {
    puStack_80 = &UNK_10e52b660;
    lStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
  }
  else {
    FUN_108997e40(&puStack_80,0);
    uVar10 = *(ulong *)(param_2 + 0x20);
    if (uVar10 != 0) {
      if (*(long *)(puStack_80 + -8) + uStack_68 < uVar10) {
        if (uVar10 == 7) {
          lVar6 = 8;
        }
        else {
          lVar6 = (long)(uVar10 - 1) / 7 + uVar10;
        }
        uVar7 = 0xffffffffffffffff >> (LZCOUNT(lVar6) & 0x3fU);
        if (lVar6 == 0) {
          uVar7 = 1;
        }
        FUN_108997fe8(&puStack_80,uVar7);
      }
      pbStack_a8 = *(byte **)(param_2 + 0x10);
      lStack_b0 = *(long *)(param_2 + 8);
      FUN_108998264(&lStack_b0);
      lVar6 = lStack_b0;
      pbVar1 = pbStack_a8;
      while (lVar6 != 0) {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)*pbVar1;
        uVar7 = SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
                ((long)&PTR_LOOP_110c8acd8 + (ulong)*pbVar1) * -0x622015f714c7d297;
        ppuVar3 = &puStack_80;
        lStack_b0 = lVar6;
        pbStack_a8 = pbVar1;
        func_0x00010ae6c8b4(ppuVar3,uVar7);
        func_0x0001089985d4((uint)uVar7 & 0x7f);
        pbStack_a8 = pbVar1 + 1;
        *(byte *)(lStack_78 + (long)ppuVar3) = *pbVar1;
        lStack_b0 = lVar6 + 1;
        FUN_108998264(&lStack_b0);
        lVar6 = lStack_b0;
        pbVar1 = pbStack_a8;
      }
      *(ulong *)(puStack_80 + -8) = *(long *)(puStack_80 + -8) - uVar10;
      uStack_68 = uVar10;
    }
  }
  pbVar4 = (byte *)0x0;
  lStack_98 = 0;
  lStack_a0 = 0;
  lStack_88 = 0;
  lStack_90 = 0;
  pbStack_a8 = (byte *)0x0;
  lStack_b0 = 0;
  ppuStack_c0 = &puStack_80;
  plStack_b8 = &lStack_b0;
  pbVar1 = param_3 + param_4;
  uVar9 = 0xffffffff;
  lStack_c8 = param_2;
  do {
    pbVar5 = param_3 + (-4 - (long)pbVar4);
    do {
      pbVar8 = param_3;
      if (pbVar8 == pbVar1) {
        if (pbVar4 != (byte *)0x0) {
          FUN_108998154(&lStack_c8,pbVar4,(long)pbVar1 - (long)pbVar4);
        }
        if (uStack_68 == 0) {
          param_1[1] = (long)pbStack_a8;
          *param_1 = lStack_b0;
          param_1[2] = lStack_a0;
          lStack_b0 = 0;
          pbStack_a8 = (byte *)0x0;
          param_1[4] = lStack_90;
          param_1[3] = lStack_98;
          param_1[5] = lStack_88;
          lStack_a0 = 0;
          lStack_98 = 0;
          lStack_90 = 0;
          lStack_88 = 0;
        }
        else {
          param_1[3] = 0;
          param_1[2] = 0;
          param_1[5] = 0;
          param_1[4] = 0;
          param_1[1] = 0;
          *param_1 = 0;
        }
        func_0x00010898d1bc(&lStack_b0);
        func_0x000108997e88(&puStack_80);
        return;
      }
      param_3 = pbVar8 + 1;
      uVar9 = (uint)*pbVar8 | uVar9 << 8;
      pbVar5 = pbVar5 + 1;
    } while (uVar9 != 1 || param_3 == pbVar1);
    if (pbVar4 != (byte *)0x0) {
      FUN_108998154(&lStack_c8,pbVar4,pbVar5);
    }
    pbVar4 = pbVar8 + -3;
  } while( true );
}



/* Entry: 108997e34; end: 108997e3f;  */

byte FUN_108997e34(undefined8 param_1,byte *param_2)

{
  return *param_2 >> 1 & 0x3f;
}



/* Entry: 108997e40; end: 108997fe7;  */

undefined8 * FUN_108997e40(undefined8 *param_1,long param_2)

{
  *param_1 = &UNK_10e52b660;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2 != 0) {
    param_1[2] = 0xffffffffffffffff >> (LZCOUNT(param_2) & 0x3fU);
    func_0x000108997eb8(param_1);
  }
  return param_1;
}



/* Entry: 108997fe8; end: 1089980bf;  */

void FUN_108997fe8(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  lVar6 = param_1[2];
  param_1[2] = param_2;
  plVar5 = param_1;
  func_0x000108997eb8();
  lVar8 = param_1[1];
  for (lVar7 = 0; lVar6 != lVar7; lVar7 = lVar7 + 1) {
    if (-1 < *(char *)(lVar2 + lVar7)) {
      uVar1 = (long)&PTR_LOOP_110c8acd8 + (ulong)*(byte *)(lVar3 + lVar7);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar1;
      func_0x000108998634();
      func_0x0001089985d4((SUB164(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^ (int)uVar1 * -0x14c7d297
                          ) & 0x7f);
      *(undefined1 *)(lVar8 + (long)plVar5) = *(undefined1 *)(lVar3 + lVar7);
    }
  }
  if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2 + -8);
    return;
  }
  return;
}



/* Entry: 1089980c0; end: 108998117;  */

ulong FUN_1089980c0(undefined8 param_1,byte *param_2)

{
  ulong extraout_x8;
  ulong extraout_x10;
  
  func_0x000108998564((long)&PTR_LOOP_110c8acd8 + (ulong)*param_2);
  return extraout_x8 ^ extraout_x10;
}



/* Entry: 108998118; end: 108998153;  */

undefined8 * FUN_108998118(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110aa3b68;
  func_0x000108997e88(param_1 + 5);
  func_0x000108997e88(param_1 + 1);
  return param_1;
}



/* Entry: 108998154; end: 108998263;  */

void FUN_108998154(ulong *param_1,long param_2,ulong param_3)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  ulong extraout_x8;
  long lVar5;
  ulong extraout_x10;
  ulong uVar6;
  undefined1 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_58 [16];
  long *plStack_48;
  
  if (4 < param_3) {
    plVar9 = (long *)*param_1;
    plVar3 = plVar9;
    (**(code **)(*plVar9 + 0x18))(plVar9,param_2 + 4);
    uVar4 = param_1[1];
    if (*(long *)(uVar4 + 0x18) == 0) {
      plVar3 = plVar9 + 1;
      func_0x00010899862c();
      if (((ulong)plVar3 & 1) == 0) {
        uVar2 = (int)plVar9 + 0x28;
        func_0x00010899862c();
        if (uVar2 == *(byte *)(plVar9 + 9)) {
          uVar4 = param_1[2];
          plVar3 = (long *)(uVar4 + 0x18);
          plVar9 = *(long **)(uVar4 + 0x20);
          if (plVar9 < *(long **)(uVar4 + 0x28)) {
            *plVar9 = param_2;
            plVar9[1] = param_3;
            plVar9 = plVar9 + 2;
          }
          else {
            plVar8 = plVar3;
            FUN_108947b44(plVar3,((long)plVar9 - *plVar3 >> 4) + 1);
            FUN_108947998(auStack_58,plVar8,*(long *)(uVar4 + 0x20) - *plVar3 >> 4,
                          (undefined8 *)(uVar4 + 0x28));
            *plStack_48 = param_2;
            plStack_48[1] = param_3;
            plStack_48 = plStack_48 + 2;
            FUN_108947918(plVar3,auStack_58);
            plVar9 = *(long **)(uVar4 + 0x20);
            FUN_108947a20(auStack_58);
          }
          *(long **)(uVar4 + 0x20) = plVar9;
          return;
        }
      }
    }
    else {
      func_0x00010899862c();
      if ((int)uVar4 != 0) {
        FUN_1089982ec(param_1[2],param_2,param_3);
        plVar8 = (long *)param_1[1];
        Hint_Prefetch(*plVar8,0,2,0);
        func_0x000108998564((long)&PTR_LOOP_110c8acd8 + ((ulong)plVar3 & 0xffffffff));
        plVar9 = plVar8;
        FUN_1089983b8(plVar8,plVar3,extraout_x8 ^ extraout_x10);
        if (plVar9 != (long *)0x0) {
          uVar4 = plVar8[2];
          plVar8[3] = plVar8[3] + -1;
          lVar5 = *plVar8;
          lVar10 = *plVar9;
          uVar6 = CONCAT17(-((char)((ulong)lVar10 >> 0x38) == -0x80),
                           CONCAT16(-((char)((ulong)lVar10 >> 0x30) == -0x80),
                                    CONCAT15(-((char)((ulong)lVar10 >> 0x28) == -0x80),
                                             CONCAT14(-((char)((ulong)lVar10 >> 0x20) == -0x80),
                                                      CONCAT13(-((char)((ulong)lVar10 >> 0x18) ==
                                                                -0x80),CONCAT12(-((char)((ulong)
                                                  lVar10 >> 0x10) == -0x80),
                                                  CONCAT11(-((char)((ulong)lVar10 >> 8) == -0x80),
                                                           -((char)lVar10 == -0x80))))))));
          uVar11 = *(undefined8 *)(lVar5 + ((long)plVar9 + (-8 - lVar5) & uVar4));
          lVar10 = CONCAT17(-((char)((ulong)uVar11 >> 0x38) == -0x80),
                            CONCAT16(-((char)((ulong)uVar11 >> 0x30) == -0x80),
                                     CONCAT15(-((char)((ulong)uVar11 >> 0x28) == -0x80),
                                              CONCAT14(-((char)((ulong)uVar11 >> 0x20) == -0x80),
                                                       CONCAT13(-((char)((ulong)uVar11 >> 0x18) ==
                                                                 -0x80),CONCAT12(-((char)((ulong)
                                                  uVar11 >> 0x10) == -0x80),
                                                  CONCAT11(-((char)((ulong)uVar11 >> 8) == -0x80),
                                                           -((char)uVar11 == -0x80))))))));
          if (lVar10 == 0 || uVar6 == 0) {
            uVar6 = 0;
            uVar7 = 0xfe;
          }
          else {
            uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
            uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
            uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
            uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
            bVar1 = ((ulong)LZCOUNT(lVar10) >> 3) +
                    ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) < 8;
            uVar6 = (ulong)bVar1;
            uVar7 = 0x80;
            if (!bVar1) {
              uVar7 = 0xfe;
            }
          }
          *(undefined1 *)plVar9 = uVar7;
          *(undefined1 *)(lVar5 + ((long)plVar9 + (-7 - lVar5) & uVar4) + (uVar4 & 7)) = uVar7;
          *(ulong *)(lVar5 + -8) = *(long *)(lVar5 + -8) + uVar6;
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 108998264; end: 1089982b3;  */

void FUN_108998264(long *param_1)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    uVar3 = *(undefined8 *)pcVar1;
    uVar2 = CONCAT17(-(-2 < (char)((ulong)uVar3 >> 0x38)),
                     CONCAT16(-(-2 < (char)((ulong)uVar3 >> 0x30)),
                              CONCAT15(-(-2 < (char)((ulong)uVar3 >> 0x28)),
                                       CONCAT14(-(-2 < (char)((ulong)uVar3 >> 0x20)),
                                                CONCAT13(-(-2 < (char)((ulong)uVar3 >> 0x18)),
                                                         CONCAT12(-(-2 < (char)((ulong)uVar3 >> 0x10
                                                                               )),
                                                                  CONCAT11(-(-2 < (char)((ulong)
                                                  uVar3 >> 8)),-(-2 < (char)uVar3))))))));
    uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20);
    pcVar1 = pcVar1 + (uVar2 >> 3);
    *param_1 = (long)pcVar1;
    param_1[1] = param_1[1] + (uVar2 >> 3);
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 1089982b4; end: 1089982eb;  */

bool FUN_1089982b4(undefined8 *param_1,byte param_2)

{
  Hint_Prefetch(*param_1,0,2,0);
  func_0x000108998564((long)&PTR_LOOP_110c8acd8 + (ulong)param_2);
  FUN_1089983b8();
  return param_1 != (undefined8 *)0x0;
}



/* Entry: 1089982ec; end: 1089983b7;  */

void FUN_1089982ec(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    *puVar2 = param_2;
    puVar2[1] = param_3;
    puVar2 = puVar2 + 2;
  }
  else {
    plVar1 = param_1;
    FUN_108947b44(param_1,((long)puVar2 - *param_1 >> 4) + 1);
    FUN_108947998(auStack_58,plVar1,param_1[1] - *param_1 >> 4,param_1 + 2);
    *puStack_48 = param_2;
    puStack_48[1] = param_3;
    puStack_48 = puStack_48 + 2;
    FUN_108947918(param_1,auStack_58);
    puVar2 = (undefined8 *)param_1[1];
    FUN_108947a20(auStack_58);
  }
  param_1[1] = (long)puVar2;
  return;
}



/* Entry: 1089983b8; end: 108998447;  */

long FUN_1089983b8(ulong *param_1,char param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  undefined8 uVar8;
  byte bVar14;
  
  lVar1 = 0;
  uVar2 = *param_1;
  uVar3 = uVar2 >> 0xc ^ param_3 >> 7;
  bVar4 = (byte)param_3 & 0x7f;
  while( true ) {
    uVar3 = uVar3 & param_1[2];
    uVar8 = *(undefined8 *)(uVar2 + uVar3);
    bVar7 = (byte)((ulong)uVar8 >> 8);
    bVar9 = (byte)((ulong)uVar8 >> 0x10);
    bVar10 = (byte)((ulong)uVar8 >> 0x18);
    bVar11 = (byte)((ulong)uVar8 >> 0x20);
    bVar12 = (byte)((ulong)uVar8 >> 0x28);
    bVar13 = (byte)((ulong)uVar8 >> 0x30);
    bVar14 = (byte)((ulong)uVar8 >> 0x38);
    for (uVar5 = CONCAT17(-(bVar14 == bVar4),
                          CONCAT16(-(bVar13 == bVar4),
                                   CONCAT15(-(bVar12 == bVar4),
                                            CONCAT14(-(bVar11 == bVar4),
                                                     CONCAT13(-(bVar10 == bVar4),
                                                              CONCAT12(-(bVar9 == bVar4),
                                                                       CONCAT11(-(bVar7 == bVar4),
                                                                                -((byte)uVar8 ==
                                                                                 bVar4)))))))) &
                 0x8080808080808080; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar6 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar3 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) & param_1[2];
      if (*(char *)(param_1[1] + uVar6) == param_2) {
        return uVar2 + uVar6;
      }
    }
    bVar7 = NEON_umaxv(CONCAT17(-(bVar14 == 0x80),
                                CONCAT16(-(bVar13 == 0x80),
                                         CONCAT15(-(bVar12 == 0x80),
                                                  CONCAT14(-(bVar11 == 0x80),
                                                           CONCAT13(-(bVar10 == 0x80),
                                                                    CONCAT12(-(bVar9 == 0x80),
                                                                             CONCAT11(-(bVar7 == 
                                                  0x80),-((byte)uVar8 == 0x80)))))))),1);
    if ((bVar7 & 1) != 0) break;
    lVar1 = lVar1 + 8;
    uVar3 = lVar1 + uVar3;
  }
  return 0;
}



/* Entry: 108998448; end: 1089984db;  */

void FUN_108998448(void)

{
  undefined1 uVar1;
  long lVar2;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar3;
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  byte in_b1;
  char in_register_00005021;
  char in_register_00005022;
  char in_register_00005023;
  char in_register_00005024;
  char in_register_00005025;
  char in_register_00005026;
  char in_register_00005027;
  undefined8 unaff_d8;
  
  func_0x000108998500();
  func_0x000108998594();
  do {
    uVar1 = unaff_x20 == unaff_x21;
    if ((bool)uVar1) {
      return;
    }
    func_0x00010899852c();
    do {
      func_0x0001089985f0();
      uVar3 = extraout_x13;
      while (uVar3 != 0) {
        func_0x0001089985b4();
        if ((bool)uVar1) goto LAB_1089984c0;
        uVar1 = 0;
        uVar3 = extraout_x13_00 - 1 & extraout_x13_00;
      }
      in_b1 = NEON_umaxv(CONCAT17(-(in_register_00005027 == (char)((ulong)unaff_d8 >> 0x38)),
                                  CONCAT16(-(in_register_00005026 == (char)((ulong)unaff_d8 >> 0x30)
                                            ),CONCAT15(-(in_register_00005025 ==
                                                        (char)((ulong)unaff_d8 >> 0x28)),
                                                       CONCAT14(-(in_register_00005024 ==
                                                                 (char)((ulong)unaff_d8 >> 0x20)),
                                                                CONCAT13(-(in_register_00005023 ==
                                                                          (char)((ulong)unaff_d8 >>
                                                                                0x18)),
                                                                         CONCAT12(-(
                                                  in_register_00005022 ==
                                                  (char)((ulong)unaff_d8 >> 0x10)),
                                                  CONCAT11(-(in_register_00005021 ==
                                                            (char)((ulong)unaff_d8 >> 8)),
                                                           -(in_b1 == (byte)unaff_d8)))))))),1);
      in_register_00005021 = '\0';
      in_register_00005022 = '\0';
      in_register_00005023 = '\0';
      in_register_00005024 = '\0';
      in_register_00005025 = '\0';
      in_register_00005026 = '\0';
      in_register_00005027 = '\0';
    } while ((in_b1 & 1) == 0);
    lVar2 = unaff_x19;
    func_0x000108997f08();
    *(undefined1 *)(*(long *)(unaff_x19 + 8) + lVar2) = *unaff_x20;
LAB_1089984c0:
    unaff_x20 = unaff_x20 + 1;
  } while( true );
}



/* Entry: 1089984dc; end: 1089984df;  */

undefined8 * FUN_1089984dc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110aa3b68;
  func_0x000108997e88(param_1 + 5);
  func_0x000108997e88(param_1 + 1);
  return param_1;
}



/* Entry: 1089984e0; end: 1089984f3;  */

void FUN_1089984e0(void)

{
  FUN_108998118();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089984f4; end: 10899863f;  */

byte FUN_1089984f4(undefined8 param_1,byte *param_2)

{
  return *param_2 & 0x1f;
}



/* Entry: 108998640; end: 1089989eb;  */

void FUN_108998640(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,int param_7)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  uint *puVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  undefined ***pppuVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  int iVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  uint *puVar29;
  undefined **ppuStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  long *plStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  long lStack_b0;
  undefined4 *puStack_a8;
  ulong *puStack_a0;
  undefined4 *puStack_98;
  int *piStack_90;
  undefined4 *puStack_88;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  ulong uStack_70;
  undefined4 uStack_64;
  
  lVar25 = (long)*(int *)(param_3 + 0x148);
  lVar27 = *(long *)(param_3 + 0x180);
  lVar13 = lVar27 - *(long *)(param_1 + 0x28);
  if (lVar13 == 0 || lVar27 < *(long *)(param_1 + 0x28)) {
    lVar13 = 0;
  }
  lVar15 = lVar25 - *(long *)(param_1 + 0x30);
  if (lVar15 == 0 || lVar25 < *(long *)(param_1 + 0x30)) {
    lVar15 = 0;
  }
  *(long *)(param_1 + 0x28) = lVar27;
  *(long *)(param_1 + 0x30) = lVar25;
  lVar13 = lVar15 + lVar13;
  if (lVar13 == 0) {
    uStack_64 = 0;
  }
  else {
    uStack_64 = 0;
    if (lVar13 != 0) {
      uStack_64 = (undefined4)((lVar15 * 100) / lVar13);
    }
  }
  uVar28 = param_3 + 0x88;
  FUN_1089801c8();
  uVar26 = (ulong)*(uint *)(param_3 + 0x84);
  uVar3 = *(ulong *)(param_1 + 0x38);
  uVar5 = *(ulong *)(param_1 + 0x40);
  *(ulong *)(param_1 + 0x38) = uVar28;
  *(ulong *)(param_1 + 0x40) = uVar26;
  uVar12 = uVar26 - uVar5;
  if (uVar26 < uVar5 || uVar12 == 0) {
    uStack_70 = 0;
  }
  else {
    uVar5 = 0;
    if (uVar3 <= uVar28) {
      uVar5 = uVar28 - uVar3;
    }
    uStack_70 = 0;
    if (uVar12 != 0) {
      uStack_70 = uVar5 / uVar12;
    }
  }
  uVar6 = *(uint *)(param_3 + 0x1a8);
  iStack_74 = 0;
  if (*(uint *)(param_1 + 0x48) <= uVar6) {
    iStack_74 = uVar6 - *(uint *)(param_1 + 0x48);
  }
  *(uint *)(param_1 + 0x48) = uVar6;
  lVar13 = param_1 + 0x50;
  FUN_10897f47c(lVar13,*(undefined4 *)(param_3 + 0x80),*(undefined4 *)(param_3 + 0xc));
  uStack_7c = 0x20005;
  if (*(char *)(param_2 + 0x1c) != '\0') {
    uStack_7c = 0x20006;
  }
  uStack_78 = (undefined4)lVar13;
  puStack_a8 = &uStack_64;
  puStack_a0 = &uStack_70;
  puStack_98 = &uStack_78;
  piStack_90 = &iStack_74;
  puStack_88 = &uStack_7c;
  lVar13 = param_1;
  lStack_b0 = param_3;
  FUN_1089a00f0(param_1,*(long *)(param_3 + 0x170) + *(long *)(param_3 + 0x168) +
                        *(long *)(param_3 + 0x178));
  iVar24 = (int)(*(double *)(param_3 + 0xa8) * 1000.0);
  uVar6 = iVar24 - *(int *)(param_1 + 0x7c);
  if (uVar6 == 0 || iVar24 < *(int *)(param_1 + 0x7c)) {
    uVar6 = 0;
  }
  uVar28 = (ulong)uVar6;
  *(int *)(param_1 + 0x7c) = iVar24;
  uStack_b4 = *(uint *)(param_3 + 0xf8);
  uVar7 = *(uint *)(param_3 + 0x10c);
  uVar2 = 0;
  if (*(uint *)(param_1 + 0x60) <= uVar7) {
    uVar2 = uVar7 - *(uint *)(param_1 + 0x60);
  }
  *(uint *)(param_1 + 0x60) = uVar7;
  uVar8 = *(uint *)(param_3 + 0x104);
  uVar7 = 0;
  if (*(uint *)(param_1 + 100) <= uVar8) {
    uVar7 = uVar8 - *(uint *)(param_1 + 100);
  }
  *(uint *)(param_1 + 100) = uVar8;
  uVar9 = *(uint *)(param_3 + 0x110);
  uVar8 = 0;
  if (*(uint *)(param_1 + 0x68) <= uVar9) {
    uVar8 = uVar9 - *(uint *)(param_1 + 0x68);
  }
  *(uint *)(param_1 + 0x68) = uVar9;
  uVar9 = *(uint *)(param_3 + 0x108);
  uStack_b8 = 0;
  if (*(uint *)(param_1 + 0x6c) <= uVar9) {
    uStack_b8 = uVar9 - *(uint *)(param_1 + 0x6c);
  }
  *(uint *)(param_1 + 0x6c) = uVar9;
  uVar10 = *(uint *)(param_3 + 0x84);
  uVar9 = *(uint *)(param_1 + 0x74);
  uStack_bc = 0;
  if (*(uint *)(param_1 + 0x70) <= uVar10) {
    uStack_bc = uVar10 - *(uint *)(param_1 + 0x70);
  }
  *(uint *)(param_1 + 0x70) = uVar10;
  uVar10 = *(uint *)(param_3 + 0xc);
  *(uint *)(param_1 + 0x74) = uVar10;
  uStack_c0 = 0;
  if (uVar9 <= uVar10) {
    uStack_c0 = uVar10 - uVar9;
  }
  uVar10 = *(uint *)(param_3 + 0x80);
  uVar9 = 0;
  if (*(uint *)(param_1 + 0x78) <= uVar10) {
    uVar9 = uVar10 - *(uint *)(param_1 + 0x78);
  }
  *(uint *)(param_1 + 0x78) = uVar10;
  if (param_7 == 2) {
    plVar14 = &lStack_b0;
    uVar18 = 0x12;
    uVar19 = 0x27;
    uVar20 = 0x3c;
    uVar21 = 0x2b;
    uVar22 = 0x2f;
    uVar23 = 0x33;
    FUN_1089989ec();
    lVar25 = 0x160;
  }
  else {
    if (param_7 != 1) {
      return;
    }
    plVar14 = &lStack_b0;
    uVar18 = 0x10;
    uVar19 = 0x25;
    uVar20 = 0x3a;
    uVar21 = 0x29;
    uVar22 = 0x2d;
    uVar23 = 0x32;
    FUN_1089989ec();
    lVar25 = 0x148;
  }
  plVar1 = (long *)(param_2 + lVar25);
  puVar4 = (uint *)plVar1[1];
  uVar11 = (undefined1)((ulong)lVar13 >> 0x20);
  if (puVar4 < (uint *)plVar1[2]) {
    *puVar4 = uVar6;
    puVar4[1] = uStack_b4;
    puVar4[2] = (uint)lVar13;
    *(undefined1 *)(puVar4 + 3) = uVar11;
    puVar4[4] = uVar2;
    puVar4[5] = uVar7;
    puVar4[6] = uVar8;
    puVar4[7] = uStack_b8;
    puVar4[8] = uStack_bc;
    puVar4[9] = uStack_c0;
    puVar4[10] = uVar9;
    puVar29 = puVar4 + 0xe;
    *(undefined8 *)(puVar4 + 0xc) = param_6;
  }
  else {
    lVar25 = *plVar1;
    lVar27 = (long)puVar4 - lVar25;
    uVar3 = lVar27 / 0x38 + 1;
    uStack_c4 = uVar6;
    if (0x492492492492492 < uVar3) {
      FUN_108998b94();
LAB_1089989e8:
      func_0x000104bd35f4();
      pcStack_d8 = FUN_1089989ec;
      plVar16 = plVar14;
      uStack_130 = param_6;
      uStack_128 = (ulong)uVar8;
      uStack_120 = (ulong)uVar7;
      uStack_118 = (ulong)uVar2;
      uStack_110 = (ulong)uVar9;
      plStack_108 = plVar1;
      lStack_100 = lVar13;
      lStack_f8 = lVar27;
      lStack_f0 = lVar25;
      uStack_e8 = uVar28;
      puStack_e0 = &stack0xfffffffffffffff0;
      FUN_1089a3c0c();
      uStack_148 = 0;
      uStack_140 = 0;
      ppuStack_158 = &PTR_DAT_1107eac58;
      uStack_150 = 0;
      uStack_138 = uVar18;
      FUN_108998ba8();
      func_0x000108998bc0();
      func_0x000108998bb8();
      FUN_1089a3c0c();
      uStack_148 = 0;
      uStack_140 = 0;
      ppuStack_158 = &PTR_DAT_1107eac58;
      uStack_150 = 0;
      uStack_138 = uVar19;
      FUN_108998ba8();
      func_0x000108998bc0();
      func_0x000108998bb8();
      FUN_1089a3c0c();
      uStack_148 = 0;
      uStack_140 = 0;
      ppuStack_158 = &PTR_DAT_1107eac58;
      uStack_150 = 0;
      uStack_138 = uVar20;
      FUN_108998ba8();
      func_0x000108998bc0();
      func_0x000108998bb8();
      FUN_1089a3c0c();
      uStack_148 = 0;
      uStack_140 = 0;
      ppuStack_158 = &PTR_DAT_1107eac58;
      uStack_150 = 0;
      uStack_138 = uVar21;
      FUN_108998ba8();
      func_0x000108998bc0();
      func_0x000108998bb8();
      FUN_1089a3c0c();
      uStack_148 = 0;
      uStack_140 = 0;
      ppuStack_158 = &PTR_DAT_1107eac58;
      uStack_150 = 0;
      uStack_138 = uVar23;
      FUN_108998ba8();
      func_0x000108998bc0();
      func_0x000108998bb8();
      if (*(int *)plVar14[4] != 0) {
        FUN_1089a3c0c();
        uStack_148 = 0;
        uStack_140 = 0;
        ppuStack_158 = &PTR_DAT_1107eac58;
        uStack_150 = 0;
        pppuVar17 = &ppuStack_158;
        uStack_138 = uVar22;
        FUN_10895dfd8(pppuVar17,*(undefined4 *)plVar14[5]);
        (**(code **)(*(long *)*plVar16 + 8))((long *)*plVar16,pppuVar17,*(undefined4 *)plVar14[4]);
        func_0x000108998bb8();
      }
      return;
    }
    uVar5 = (plVar1[2] - lVar25) / 0x38;
    uVar28 = uVar5 * 2;
    if (uVar28 < uVar3 || uVar28 - uVar3 == 0) {
      uVar28 = uVar3;
    }
    if (0x249249249249248 < uVar5) {
      uVar28 = 0x492492492492492;
    }
    uStack_c8 = uVar9;
    if (uVar28 == 0) {
      lVar15 = 0;
    }
    else {
      if (0x492492492492492 < uVar28) goto LAB_1089989e8;
      lVar15 = uVar28 * 0x38;
      __Znwm();
    }
    puVar4 = (uint *)(lVar15 + lVar27);
    *puVar4 = uStack_c4;
    puVar4[1] = uStack_b4;
    puVar4[2] = (uint)lVar13;
    *(undefined1 *)(puVar4 + 3) = uVar11;
    puVar4[4] = uVar2;
    puVar4[5] = uVar7;
    puVar4[6] = uVar8;
    puVar4[7] = uStack_b8;
    puVar4[8] = uStack_bc;
    puVar4[9] = uStack_c0;
    puVar4[10] = uStack_c8;
    *(undefined8 *)(puVar4 + 0xc) = param_6;
    puVar29 = puVar4 + 0xe;
    _memcpy(puVar4 + (lVar27 / -0x38) * 0xe,lVar25,lVar27);
    *plVar1 = (long)(puVar4 + (lVar27 / -0x38) * 0xe);
    plVar1[1] = (long)puVar29;
    plVar1[2] = lVar15 + uVar28 * 0x38;
    if (lVar25 != 0) {
      __ZdlPv(lVar25);
    }
  }
  plVar1[1] = (long)puVar29;
  return;
}



/* Entry: 1089989ec; end: 108998b93;  */

void FUN_1089989ec(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  undefined ***pppuVar2;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar1 = param_1;
  FUN_1089a3c0c();
  uStack_78 = 0;
  uStack_70 = 0;
  ppuStack_88 = &PTR_DAT_1107eac58;
  uStack_80 = 0;
  uStack_68 = param_2;
  FUN_108998ba8();
  func_0x000108998bc0();
  func_0x000108998bb8();
  FUN_1089a3c0c();
  uStack_78 = 0;
  uStack_70 = 0;
  ppuStack_88 = &PTR_DAT_1107eac58;
  uStack_80 = 0;
  uStack_68 = param_3;
  FUN_108998ba8();
  func_0x000108998bc0();
  func_0x000108998bb8();
  FUN_1089a3c0c();
  uStack_78 = 0;
  uStack_70 = 0;
  ppuStack_88 = &PTR_DAT_1107eac58;
  uStack_80 = 0;
  uStack_68 = param_4;
  FUN_108998ba8();
  func_0x000108998bc0();
  func_0x000108998bb8();
  FUN_1089a3c0c();
  uStack_78 = 0;
  uStack_70 = 0;
  ppuStack_88 = &PTR_DAT_1107eac58;
  uStack_80 = 0;
  uStack_68 = param_5;
  FUN_108998ba8();
  func_0x000108998bc0();
  func_0x000108998bb8();
  FUN_1089a3c0c();
  uStack_78 = 0;
  uStack_70 = 0;
  ppuStack_88 = &PTR_DAT_1107eac58;
  uStack_80 = 0;
  uStack_68 = param_7;
  FUN_108998ba8();
  func_0x000108998bc0();
  func_0x000108998bb8();
  if (*(int *)param_1[4] != 0) {
    FUN_1089a3c0c();
    uStack_78 = 0;
    uStack_70 = 0;
    ppuStack_88 = &PTR_DAT_1107eac58;
    uStack_80 = 0;
    pppuVar2 = &ppuStack_88;
    uStack_68 = param_6;
    FUN_10895dfd8(pppuVar2,*(undefined4 *)param_1[5]);
    (**(code **)(*(long *)*puVar1 + 8))((long *)*puVar1,pppuVar2,*(undefined4 *)param_1[4]);
    func_0x000108998bb8();
  }
  return;
}



/* Entry: 108998b94; end: 108998ba7;  */

void FUN_108998b94(void)

{
  func_0x000104bd47e8();
  return;
}


