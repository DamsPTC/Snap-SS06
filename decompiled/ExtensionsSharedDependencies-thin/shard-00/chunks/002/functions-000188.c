/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00458350; end: 0045839f;  */

void FUN_00458350(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (*(char *)(param_3 + 3) != '\x01') {
    func_0x004588ac();
    return;
  }
  uVar1 = param_3[1];
  puVar2 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar2 = param_3;
  }
  FUN_00648c94(param_1,param_2,puVar2,uVar1);
  iVar3 = (int)param_1;
  func_0x00649404();
  _sqlite3_bind_text();
  if (iVar3 != 0) {
    func_0x006493ac();
    func_0x00649398();
    func_0x00649418();
    func_0x00461914(&UNK_009100b3);
    func_0x006493e4();
    func_0x00649340();
    func_0x00649370();
    func_0x00649388();
  }
  return;
}



/* Entry: 004583a0; end: 004583a3;  */

void FUN_004583a0(int param_1)

{
  func_0x006493a0();
  _sqlite3_bind_int64();
  if (param_1 != 0) {
    func_0x0064935c();
    func_0x00649398();
    func_0x006493f4();
    func_0x00461914(&UNK_00910092);
    func_0x00649378();
    func_0x00649340();
    func_0x00649370();
    func_0x00649388();
  }
  return;
}



/* Entry: 004583a4; end: 004583c7;  */

void FUN_004583a4(void)

{
  func_0x0045875c();
  FUN_00648ea0();
  return;
}



/* Entry: 004583c8; end: 00458463;  */

void FUN_004583c8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = auStack_70;
  uVar2 = *param_2;
  FUN_006416f0(auStack_70,param_3);
  FUN_00457d70();
  puStack_40 = puVar1;
  uStack_38 = param_3;
  func_0x00457d54(param_2 + 1);
  FUN_00721c60(auStack_58);
  FUN_00458464(param_1,uVar2,auStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  func_0x004588a4();
  return;
}



/* Entry: 00458464; end: 004584cb;  */

void FUN_00458464(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x88;
  __Znwm();
  FUN_004584cc();
  *param_1 = uVar1;
  return;
}



/* Entry: 004584cc; end: 004584eb;  */

void FUN_004584cc(undefined8 *param_1)

{
  FUN_00648ba8();
  *param_1 = &PTR_FUN_009e51a8;
  return;
}



/* Entry: 004584ec; end: 004584ef;  */

undefined8 * FUN_004584ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0cb30;
  FUN_00648d5c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  return param_1;
}



/* Entry: 004584f0; end: 00458503;  */

void FUN_004584f0(void)

{
  FUN_00648d18();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00458504; end: 0045853b;  */

void FUN_00458504(long *param_1)

{
  FUN_00648e78();
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00458530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))(param_1);
    return;
  }
  return;
}



/* Entry: 0045853c; end: 0045899b;  */

undefined1 * FUN_0045853c(void)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined **ppuStack0000000000000018;
  long in_stack_000000a0;
  
  unaff_x20[1] = unaff_x21;
  unaff_x20[2] = unaff_x22;
  unaff_x20[0x13] = in_stack_000000a0;
  lVar1 = *(long *)(unaff_x19 + 0x60);
  *unaff_x20 = lVar1;
  *(long **)(lVar1 + 8) = unaff_x20;
  *(long **)(unaff_x19 + 0x60) = unaff_x20;
  *(long *)(unaff_x19 + 0x70) = *(long *)(unaff_x19 + 0x70) + 1;
  ppuStack0000000000000018 = &PTR_FUN_00a0cb30;
  FUN_00648d5c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&stack0x00000070);
  __ZNSt3__15mutexD1Ev(&stack0x00000030);
  return (undefined1 *)&stack0x00000018;
}



/* Entry: 0045899c; end: 00458acf;  */

undefined *** FUN_0045899c(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  long lVar5;
  undefined ***pppuVar6;
  undefined8 extraout_x8;
  long unaff_x19;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined4 uStack_78;
  undefined8 uStack_38;
  
  func_0x0045ac34();
  pbVar1 = (byte *)(param_1 + 0x38);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uStack_38 = extraout_x8;
  if ((bVar2 & 1) == 0) {
    FUN_0047bdb0(unaff_x19 + 0x28);
    lVar5 = *(long *)(unaff_x19 + 0x10);
    if (lVar5 != 0) {
      plVar7 = *(long **)(unaff_x19 + 0x28);
      uVar8 = *(undefined8 *)(unaff_x19 + 8);
      __ZNSt3__119__shared_weak_count4lockEv();
      if (lVar5 != 0) {
        ppuStack_98 = (undefined **)FUN_0045a118;
        ppuStack_90 = &PTR_FUN_009e5330;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_88 = uVar8;
        lStack_80 = lVar5;
        (**(code **)(*plVar7 + 0x10))(plVar7,&ppuStack_98);
        func_0x0045abb8(ppuStack_90);
        func_0x00459188(&uStack_a8);
        pppuVar6 = *(undefined ****)(unaff_x19 + 0x28);
        FUN_0064c54c();
        goto LAB_00458a78;
      }
    }
    pppuVar6 = (undefined ***)0x0;
    FUN_0045a0e4();
  }
  else {
    uStack_88 = 0;
    lStack_80 = 0;
    ppuStack_98 = &PTR_FUN_009e5290;
    ppuStack_90 = (undefined **)0x0;
    uStack_78 = 0xe;
    (**(code **)(**(long **)(unaff_x19 + 0x40) + 0x18))(*(long **)(unaff_x19 + 0x40),&ppuStack_98);
    pppuVar6 = &ppuStack_98;
    FUN_004590f8();
LAB_00458a78:
    func_0x0045ac20(uStack_38);
    if ((bool)in_ZR) {
      return pppuVar6;
    }
  }
  ___stack_chk_fail();
  func_0x0045acac();
  *pppuVar6 = &PTR_DAT_009e5308;
  func_0x00459128(pppuVar6 + 1);
  return pppuVar6;
}



/* Entry: 00458ad0; end: 00458ad3;  */

undefined8 * FUN_00458ad0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_009e5308;
  func_0x00459128(param_1 + 1);
  return param_1;
}



/* Entry: 00458ad4; end: 00458c9b;  */

undefined1 * FUN_00458ad4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined4 uVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  dword *pdVar5;
  undefined1 **ppuVar6;
  undefined1 **ppuVar7;
  undefined8 uVar8;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  long unaff_x19;
  undefined4 uVar9;
  undefined1 *puStack_3e0;
  undefined1 auStack_3d8 [24];
  undefined1 auStack_3c0 [64];
  undefined8 uStack_380;
  long lStack_378;
  char *pcStack_368;
  undefined1 auStack_360 [96];
  undefined8 uStack_300;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  byte *pbStack_2d0;
  code *pcStack_2c8;
  undefined **ppuStack_2c0;
  undefined8 uStack_268;
  undefined8 uStack_210;
  undefined1 auStack_208 [112];
  undefined4 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  char *pcStack_178;
  undefined1 auStack_170 [128];
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  byte *pbStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_58;
  
  uVar8 = param_3;
  func_0x0045ac34();
  puVar2 = auStack_208;
  uStack_210 = param_1;
  uStack_58 = extraout_x8;
  FUN_004591ac();
  uVar1 = SUB84(puVar2,0);
  uVar9 = (undefined4)param_3;
  lStack_188 = *(long *)(unaff_x19 + 0x48);
  uStack_190 = *(undefined8 *)(unaff_x19 + 0x40);
  uStack_198 = uVar9;
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    do {
      func_0x0045abc4();
      uVar1 = SUB84(puVar2,0);
    } while (extraout_w10 != 0);
  }
  if ((*(byte *)(unaff_x19 + 0x38) & 1) == 0) {
    FUN_0045a1e8();
    func_0x0045acbc();
    (*extraout_x8_00)();
    pcStack_178 = "notificationReceived";
    FUN_0045a18c(auStack_170,&uStack_210);
    uStack_f0 = 0;
    uStack_e4 = (undefined4)((ulong)param_3 >> 0x20);
    uStack_e0 = CONCAT31(uStack_e0._1_3_,1);
    lStack_c8 = lStack_188;
    uStack_d0 = uStack_190;
    uStack_e8 = uVar9;
    uStack_d8 = uVar1;
    if (lStack_188 != 0) {
      do {
        func_0x0045abc4();
      } while (extraout_w10_00 != 0);
    }
    pcStack_b8 = FUN_0045a248;
    ppuStack_b0 = &PTR_FUN_009e5348;
    pcVar3 = section_000000b8.sectname + 8;
    pbStack_c0 = (byte *)(unaff_x19 + 0x38);
    __Znwm();
    *(char **)pcVar3 = pcStack_178;
    FUN_0045a18c(pcVar3 + 8,auStack_170);
    *(ulong *)(pcVar3 + 0x90) = CONCAT44(uStack_e4,uStack_e8);
    *(undefined8 *)(pcVar3 + 0x88) = uStack_f0;
    *(ulong *)(pcVar3 + 0x9c) = CONCAT44(uStack_d8,uStack_dc);
    *(ulong *)(pcVar3 + 0x94) = CONCAT44(uStack_e0,uStack_e4);
    *(long *)(pcVar3 + 0xb0) = lStack_c8;
    *(undefined8 *)(pcVar3 + 0xa8) = uStack_d0;
    if (lStack_c8 != 0) {
      do {
        func_0x0045abc4();
      } while (extraout_w10_01 != 0);
    }
    *(byte **)(pcVar3 + 0xb8) = pbStack_c0;
    func_0x0045adcc();
    func_0x0045ad18();
    func_0x0045aba8();
    func_0x0045a1bc(&pcStack_178);
  }
  func_0x0045a054(&uStack_190);
  puVar2 = auStack_208;
  FUN_00459e64();
  func_0x0045ac20(uStack_58);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0045aba8();
  func_0x0045a1bc(&pcStack_178);
  func_0x0045a054(&uStack_190);
  puVar4 = auStack_208;
  FUN_00459e64();
  func_0x0045acac();
  ppuVar6 = &puStack_3e0;
  ppuVar7 = &puStack_3e0;
  func_0x0045ac34();
  puStack_3e0 = puVar4;
  uStack_268 = extraout_x8_01;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_3d8);
  puVar4 = auStack_3c0;
  FUN_00459e8c(puVar4,uVar8);
  uVar1 = SUB84(puVar4,0);
  lStack_378 = *(long *)(puVar2 + 0x48);
  uStack_380 = *(undefined8 *)(puVar2 + 0x40);
  if (*(long *)(puVar2 + 0x48) != 0) {
    do {
      func_0x0045abc4();
      uVar1 = SUB84(puVar4,0);
    } while (extraout_w10_02 != 0);
  }
  if ((puVar2[0x38] & 1) == 0) {
    FUN_0045a1e8();
    func_0x0045acbc();
    (*extraout_x8_02)();
    pcStack_368 = "notificationDisplayed";
    FUN_0045a778(auStack_360,&puStack_3e0);
    uStack_300 = 0;
    uStack_2f8 = (undefined4)uVar8;
    uStack_2f4 = (undefined4)((ulong)uVar8 >> 0x20);
    uStack_2f0 = CONCAT31(uStack_2f0._1_3_,1);
    lStack_2d8 = lStack_378;
    uStack_2e0 = uStack_380;
    uStack_2e8 = uVar1;
    if (lStack_378 != 0) {
      do {
        func_0x0045abc4();
      } while (extraout_w10_03 != 0);
    }
    pcStack_2c8 = FUN_0045a800;
    ppuStack_2c0 = &PTR_FUN_009e5360;
    pdVar5 = &section_00000068.reloff;
    pbStack_2d0 = puVar2 + 0x38;
    __Znwm();
    *(char **)pdVar5 = pcStack_368;
    FUN_0045a778(pdVar5 + 2,auStack_360);
    *(ulong *)(pdVar5 + 0x1c) = CONCAT44(uStack_2f4,uStack_2f8);
    *(undefined8 *)(pdVar5 + 0x1a) = uStack_300;
    *(ulong *)(pdVar5 + 0x1f) = CONCAT44(uStack_2e8,uStack_2ec);
    *(ulong *)(pdVar5 + 0x1d) = CONCAT44(uStack_2f0,uStack_2f4);
    *(long *)(pdVar5 + 0x24) = lStack_2d8;
    *(undefined8 *)(pdVar5 + 0x22) = uStack_2e0;
    if (lStack_2d8 != 0) {
      do {
        func_0x0045abc4();
      } while (extraout_w10_04 != 0);
    }
    *(byte **)(pdVar5 + 0x26) = pbStack_2d0;
    func_0x0045adcc();
    func_0x0045ad18();
    func_0x0045aba8();
    FUN_0045a7d4(&pcStack_368);
  }
  func_0x0045ad70();
  FUN_00458e74();
  func_0x0045ac20(uStack_268);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0045aba8();
    FUN_0045a7d4(&pcStack_368);
    func_0x0045ad70();
    FUN_00458e74(&puStack_3e0);
    func_0x0045acac();
    func_0x00459f20((undefined1 *)((long)ppuVar7 + 0x20));
    func_0x0045adb4();
    return (undefined1 *)ppuVar7;
  }
  return (undefined1 *)ppuVar6;
}



/* Entry: 00458c9c; end: 00458e73;  */

undefined8 * FUN_00458c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined4 uVar1;
  undefined1 *puVar2;
  dword *pdVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x19;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [64];
  undefined8 uStack_170;
  long lStack_168;
  char *pcStack_158;
  undefined1 auStack_150 [96];
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  byte *pbStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_58;
  
  puVar4 = &uStack_1d0;
  puVar5 = &uStack_1d0;
  func_0x0045ac34();
  uStack_1d0 = param_1;
  uStack_58 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1c8);
  puVar2 = auStack_1b0;
  FUN_00459e8c(puVar2,param_3);
  uVar1 = SUB84(puVar2,0);
  lStack_168 = *(long *)(unaff_x19 + 0x48);
  uStack_170 = *(undefined8 *)(unaff_x19 + 0x40);
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    do {
      func_0x0045abc4();
      uVar1 = SUB84(puVar2,0);
    } while (extraout_w10 != 0);
  }
  if ((*(byte *)(unaff_x19 + 0x38) & 1) == 0) {
    FUN_0045a1e8();
    func_0x0045acbc();
    (*extraout_x8_00)();
    pcStack_158 = "notificationDisplayed";
    FUN_0045a778(auStack_150,&uStack_1d0);
    uStack_f0 = 0;
    uStack_e8 = (undefined4)param_3;
    uStack_e4 = (undefined4)((ulong)param_3 >> 0x20);
    uStack_e0 = CONCAT31(uStack_e0._1_3_,1);
    lStack_c8 = lStack_168;
    uStack_d0 = uStack_170;
    uStack_d8 = uVar1;
    if (lStack_168 != 0) {
      do {
        func_0x0045abc4();
      } while (extraout_w10_00 != 0);
    }
    pcStack_b8 = FUN_0045a800;
    ppuStack_b0 = &PTR_FUN_009e5360;
    pdVar3 = &section_00000068.reloff;
    pbStack_c0 = (byte *)(unaff_x19 + 0x38);
    __Znwm();
    *(char **)pdVar3 = pcStack_158;
    FUN_0045a778(pdVar3 + 2,auStack_150);
    *(ulong *)(pdVar3 + 0x1c) = CONCAT44(uStack_e4,uStack_e8);
    *(undefined8 *)(pdVar3 + 0x1a) = uStack_f0;
    *(ulong *)(pdVar3 + 0x1f) = CONCAT44(uStack_d8,uStack_dc);
    *(ulong *)(pdVar3 + 0x1d) = CONCAT44(uStack_e0,uStack_e4);
    *(long *)(pdVar3 + 0x24) = lStack_c8;
    *(undefined8 *)(pdVar3 + 0x22) = uStack_d0;
    if (lStack_c8 != 0) {
      do {
        func_0x0045abc4();
      } while (extraout_w10_01 != 0);
    }
    *(byte **)(pdVar3 + 0x26) = pbStack_c0;
    func_0x0045adcc();
    func_0x0045ad18();
    func_0x0045aba8();
    FUN_0045a7d4(&pcStack_158);
  }
  func_0x0045ad70();
  FUN_00458e74();
  func_0x0045ac20(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0045aba8();
    FUN_0045a7d4(&pcStack_158);
    func_0x0045ad70();
    FUN_00458e74(&uStack_1d0);
    func_0x0045acac();
    func_0x00459f20((undefined1 *)((long)puVar5 + 0x20));
    func_0x0045adb4();
    return (undefined8 *)(undefined1 *)puVar5;
  }
  return puVar4;
}



/* Entry: 00458e74; end: 00458e9b;  */

long FUN_00458e74(long param_1)

{
  func_0x00459f20(param_1 + 0x20);
  func_0x0045adb4();
  return param_1;
}



/* Entry: 00458e9c; end: 00459083;  */

undefined8 *
FUN_00458e9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined4 uVar1;
  undefined1 *puVar2;
  dword *pdVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x19;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [24];
  undefined4 uStack_198;
  undefined1 uStack_194;
  undefined1 auStack_190 [48];
  undefined8 uStack_160;
  long lStack_158;
  char *pcStack_150;
  undefined1 auStack_148 [88];
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  byte *pbStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_58;
  
  func_0x0045ac34();
  uStack_1b8 = param_1;
  uStack_58 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1b0);
  uStack_198 = (undefined4)param_3;
  uStack_194 = (undefined1)((ulong)param_3 >> 0x20);
  puVar2 = auStack_190;
  FUN_00459f50(puVar2,param_4);
  uVar1 = SUB84(puVar2,0);
  lStack_158 = *(long *)(unaff_x19 + 0x48);
  uStack_160 = *(undefined8 *)(unaff_x19 + 0x40);
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    do {
      func_0x0045abc4();
      uVar1 = SUB84(puVar2,0);
    } while (extraout_w10 != 0);
  }
  if ((*(byte *)(unaff_x19 + 0x38) & 1) == 0) {
    FUN_0045a1e8();
    func_0x0045acbc();
    (*extraout_x8_00)();
    pcStack_150 = "notificationSuppressed";
    FUN_0045a998(auStack_148,&uStack_1b8);
    uStack_f0 = 0;
    uStack_e8 = (undefined4)param_4;
    uStack_e4 = (undefined4)((ulong)param_4 >> 0x20);
    uStack_e0 = CONCAT31(uStack_e0._1_3_,1);
    lStack_c8 = lStack_158;
    uStack_d0 = uStack_160;
    uStack_d8 = uVar1;
    if (lStack_158 != 0) {
      do {
        func_0x0045abc4();
      } while (extraout_w10_00 != 0);
    }
    pcStack_b8 = FUN_0045aa0c;
    ppuStack_b0 = &PTR_FUN_009e5378;
    pdVar3 = &section_00000068.offset;
    pbStack_c0 = (byte *)(unaff_x19 + 0x38);
    __Znwm();
    *(char **)pdVar3 = pcStack_150;
    FUN_0045a998(pdVar3 + 2,auStack_148);
    *(ulong *)(pdVar3 + 0x1a) = CONCAT44(uStack_e4,uStack_e8);
    *(undefined8 *)(pdVar3 + 0x18) = uStack_f0;
    *(ulong *)(pdVar3 + 0x1d) = CONCAT44(uStack_d8,uStack_dc);
    *(ulong *)(pdVar3 + 0x1b) = CONCAT44(uStack_e0,uStack_e4);
    *(long *)(pdVar3 + 0x22) = lStack_c8;
    *(undefined8 *)(pdVar3 + 0x20) = uStack_d0;
    if (lStack_c8 != 0) {
      do {
        func_0x0045abc4();
      } while (extraout_w10_01 != 0);
    }
    *(byte **)(pdVar3 + 0x24) = pbStack_c0;
    func_0x0045adcc();
    func_0x0045ad18();
    func_0x0045aba8();
    FUN_0045a9e0(&pcStack_150);
  }
  func_0x0045ad70();
  puVar4 = &uStack_1b8;
  FUN_00459084();
  func_0x0045ac20(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0045aba8();
    FUN_0045a9e0(&pcStack_150);
    func_0x0045ad70();
    puVar4 = &uStack_1b8;
    FUN_00459084(puVar4);
    func_0x0045acac();
    func_0x00459fd8(puVar4 + 5);
    func_0x0045adb4();
    return puVar4;
  }
  return puVar4;
}



/* Entry: 00459084; end: 004590ab;  */

long FUN_00459084(long param_1)

{
  func_0x00459fd8(param_1 + 0x28);
  func_0x0045adb4();
  return param_1;
}



/* Entry: 004590ac; end: 004590af;  */

undefined8 * FUN_004590ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e51f8;
  func_0x0045a054(param_1 + 8);
  func_0x0045a078(param_1 + 5);
  func_0x0045a09c(param_1 + 3);
  func_0x0045a0c0(param_1 + 1);
  return param_1;
}



/* Entry: 004590b0; end: 004590d7;  */

void FUN_004590b0(void)

{
  func_0x0045a008();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004590d8; end: 004590f7;  */

undefined4 FUN_004590d8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 004590f8; end: 004591ab;  */

undefined8 * FUN_004590f8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_009e5308;
  func_0x00459128(param_1 + 1);
  return param_1;
}



/* Entry: 004591ac; end: 004591f3;  */

void FUN_004591ac(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x0045ad78();
  FUN_004591f4();
  FUN_00459e04(param_1 + 0x30,unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x59);
  *(undefined8 *)(unaff_x19 + 0x61) = *(undefined8 *)(unaff_x20 + 0x61);
  *(undefined8 *)(unaff_x19 + 0x59) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x58) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x50) = uVar1;
  return;
}



/* Entry: 004591f4; end: 00459223;  */

void FUN_004591f4(long param_1)

{
  func_0x0045ae38();
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_00459224();
  return;
}



/* Entry: 00459224; end: 00459237;  */

void FUN_00459224(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_00459254();
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  return;
}



/* Entry: 00459238; end: 00459253;  */

void FUN_00459238(long param_1)

{
  FUN_00459254();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 00459254; end: 004592a3;  */

void FUN_00459254(undefined8 *param_1,long param_2)

{
  func_0x0045ad78();
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_00459320();
  FUN_004592a4();
  return;
}



/* Entry: 004592a4; end: 004592e3;  */

void FUN_004592a4(undefined8 param_1,long *param_2,long param_3)

{
  for (; param_2 != (long *)param_3; param_2 = (long *)*param_2) {
    func_0x00459518(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 004592e4; end: 00459307;  */

undefined8 FUN_004592e4(undefined8 param_1)

{
  FUN_00459308(param_1,0);
  return param_1;
}



/* Entry: 00459308; end: 0045931f;  */

void FUN_00459308(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 00459320; end: 004593e7;  */

void FUN_00459320(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
      if (param_2 <= uVar4) {
        param_2 = uVar4;
      }
      if (param_2 < uVar7) goto LAB_00459368;
    }
    return;
  }
LAB_00459368:
  if (param_2 == 0) {
    FUN_004594e4(param_1);
    param_1[1] = 0;
  }
  else {
    plVar2 = param_1 + 1;
    FUN_004594fc(plVar2);
    FUN_004594e4(param_1,plVar2);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar7 = 0; param_2 != uVar7; uVar7 = uVar7 + 1) {
      *(undefined8 *)(lVar1 + uVar7 * 8) = 0;
    }
    plVar2 = (long *)param_1[2];
    if (plVar2 != (long *)0x0) {
      uVar5 = plVar2[1];
      uVar4 = param_2 - 1;
      uVar7 = 0;
      if (param_2 != 0) {
        uVar7 = uVar5 / param_2;
      }
      uVar6 = uVar5;
      if (param_2 <= uVar5) {
        uVar6 = uVar5 - uVar7 * param_2;
      }
      if ((param_2 & uVar4) == 0) {
        uVar6 = uVar5 & uVar4;
      }
      *(long **)(lVar1 + uVar6 * 8) = param_1 + 2;
      while (plVar3 = plVar2, plVar2 = (long *)*plVar3, plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        if ((param_2 & uVar4) == 0) {
          uVar7 = uVar7 & uVar4;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        if (uVar7 != uVar6) {
          if (*(long *)(lVar1 + uVar7 * 8) == 0) {
            *(long **)(lVar1 + uVar7 * 8) = plVar3;
            uVar6 = uVar7;
          }
          else {
            *plVar3 = *plVar2;
            *plVar2 = **(undefined8 **)(lVar1 + uVar7 * 8);
            **(long **)(lVar1 + uVar7 * 8) = (long)plVar2;
            plVar2 = plVar3;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 004593e8; end: 004594e3;  */

void FUN_004593e8(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_004594e4(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_004594fc(plVar3);
    FUN_004594e4(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
            **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 004594e4; end: 004594fb;  */

void FUN_004594e4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 004594fc; end: 0045954b;  */

void FUN_004594fc(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(param_2 << 3);
    return;
  }
  FUN_0040cee8();
  func_0x00459530();
  return;
}



/* Entry: 0045954c; end: 0045976b;  */

undefined1  [16] FUN_0045954c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x25;
  undefined1 *puVar9;
  undefined1 auVar10 [16];
  long *aplStack_68 [3];
  
  plVar6 = param_1 + 3;
  FUN_004597c4();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    puVar9 = (undefined1 *)((long)plVar8 + -1);
    if (((ulong)plVar8 & (ulong)puVar9) == 0) {
      unaff_x25 = (long *)((ulong)puVar9 & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar8 <= plVar6) {
        uVar3 = 0;
        if (plVar8 != (long *)0x0) {
          uVar3 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar3 * (long)plVar8);
      }
    }
    plVar7 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_00459610;
          plVar2 = (long *)plVar7[1];
          if (plVar2 != plVar6) break;
          plVar2 = plVar7 + 2;
          FUN_00459c38(plVar2,param_2);
          if (((ulong)plVar2 & 1) != 0) {
            uVar1 = 0;
            goto LAB_00459740;
          }
        }
        if (((ulong)plVar8 & (ulong)puVar9) == 0) {
          plVar2 = (long *)((ulong)plVar2 & (ulong)puVar9);
        }
        else if (plVar8 <= plVar2) {
          uVar3 = 0;
          if (plVar8 != (long *)0x0) {
            uVar3 = (ulong)plVar2 / (ulong)plVar8;
          }
          plVar2 = (long *)((long)plVar2 - uVar3 * (long)plVar8);
        }
      } while (plVar2 == unaff_x25);
    }
  }
LAB_00459610:
  FUN_0045976c(aplStack_68,param_1,plVar6,param_3);
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar3 = 1;
    if ((long *)((long)&MACH_HEADER.magic + 2) < plVar8) {
      uVar3 = (ulong)(((ulong)plVar8 & (ulong)((long)plVar8 + -1)) != 0);
    }
    uVar3 = uVar3 | (long)plVar8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar5) {
      uVar3 = uVar5;
    }
    FUN_00459320(param_1,uVar3);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (ulong)((long)plVar8 + -1)) == 0) {
      unaff_x25 = (long *)((ulong)((long)plVar8 + -1) & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar8 <= plVar6) {
        uVar3 = 0;
        if (plVar8 != (long *)0x0) {
          uVar3 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar3 * (long)plVar8);
      }
    }
  }
  plVar7 = aplStack_68[0];
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_68[0] = *plVar6;
    *plVar6 = (long)aplStack_68[0];
    *(long **)(lVar4 + (long)unaff_x25 * 8) = plVar6;
    if (*aplStack_68[0] != 0) {
      plVar6 = *(long **)(*aplStack_68[0] + 8);
      if (((ulong)plVar8 & (ulong)((long)plVar8 + -1)) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (ulong)((long)plVar8 + -1));
      }
      else if (plVar8 <= plVar6) {
        uVar3 = 0;
        if (plVar8 != (long *)0x0) {
          uVar3 = (ulong)plVar6 / (ulong)plVar8;
        }
        plVar6 = (long *)((long)plVar6 - uVar3 * (long)plVar8);
      }
      *(long **)(lVar4 + (long)plVar6 * 8) = aplStack_68[0];
    }
  }
  else {
    *aplStack_68[0] = *plVar6;
    *plVar6 = (long)aplStack_68[0];
  }
  aplStack_68[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_00459cdc(aplStack_68);
  uVar1 = 1;
LAB_00459740:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 0045976c; end: 004597c3;  */

void FUN_0045976c(undefined8 *param_1,long param_2,qword param_3,undefined8 param_4)

{
  qword *pqVar1;
  
  pqVar1 = &segment_command_00000020.vmsize;
  __Znwm();
  *param_1 = pqVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 0;
  *pqVar1 = 0;
  pqVar1[1] = param_3;
  FUN_00459ca4(pqVar1 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 004597c4; end: 004597eb;  */

void FUN_004597c4(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 uStack_11;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  FUN_00459818(&uStack_11,puVar2,uVar1);
  return;
}



/* Entry: 004597ec; end: 00459817;  */

void FUN_004597ec(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_00459818(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 00459818; end: 004599db;  */

/* WARNING: Possible PIC construction at 0x00459a08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004598c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004599a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x004598cc) */
/* WARNING: Removing unreachable block (ram,0x00459914) */
/* WARNING: Removing unreachable block (ram,0x00459998) */
/* WARNING: Removing unreachable block (ram,0x00459a0c) */
/* WARNING: Removing unreachable block (ram,0x0045abfc) */
/* WARNING: Removing unreachable block (ram,0x004599a4) */

long FUN_00459818(undefined8 param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_3 < 0x21) {
    if (param_3 < 0x11) {
      func_0x0045ae44();
      if (param_3 < 9) {
        if (param_3 < 4) {
          lVar6 = -0x651e95c4d06fbfb1;
          if (param_3 != 0) {
            uVar5 = (param_3 | (ulong)*(byte *)((long)param_2 + (param_3 - 1)) << 2) *
                    -0x36b62838af619aa9 ^
                    (ulong)CONCAT11(*(undefined1 *)((long)param_2 + (param_3 >> 1)),(char)*param_2)
                    * -0x651e95c4d06fbfb1;
            lVar6 = (uVar5 ^ uVar5 >> 0x2f) * -0x651e95c4d06fbfb1;
          }
          return lVar6;
        }
        uVar7 = (ulong)*(uint *)((long)param_2 + (param_3 - 4));
        uVar5 = param_3 + (uint)((int)*param_2 << 3);
      }
      else {
        uVar5 = *param_2;
        uVar7 = *(long *)((long)param_2 + (param_3 - 8)) + param_3;
        uVar7 = uVar7 >> (param_3 & 0x3f) | uVar7 << 0x40 - (param_3 & 0x3f);
      }
    }
    else {
      func_0x0045ae44();
      lVar6 = *(long *)((long)param_2 + (param_3 - 8));
      uVar5 = lVar6 * -0x651e95c4d06fbfb1;
      uVar9 = *param_2 * -0x4b6d499041670d8d - param_2[1];
      uVar7 = param_2[1] ^ 0xc949d7c7509e6557;
      uVar5 = (uVar5 >> 0x1e | uVar5 << 0x22) + (uVar9 >> 0x2b | uVar9 * 0x200000) +
              *(long *)((long)param_2 + (param_3 - 0x10)) * -0x3c5a37a36834ced9;
      uVar7 = *param_2 * -0x4b6d499041670d8d + param_3 + (uVar7 >> 0x14 | uVar7 << 0x2c) +
              lVar6 * 0x651e95c4d06fbfb1;
    }
  }
  else {
    if (param_3 < 0x41) {
      func_0x0045ae44();
      lVar3 = *(long *)((long)param_2 + (param_3 - 0x10));
      uVar8 = *param_2 + (lVar3 + param_3) * -0x3c5a37a36834ced9;
      uVar4 = param_2[3];
      uVar5 = uVar8 + param_2[1];
      uVar7 = uVar5 + param_2[2];
      uVar9 = *(long *)((long)param_2 + (param_3 - 0x20)) + param_2[2];
      lVar6 = *(long *)((long)param_2 + (param_3 - 8)) + uVar4;
      uVar1 = lVar6 + uVar9;
      lVar2 = (uVar5 >> 7 | uVar5 << 0x39) + (uVar8 >> 0x25 | uVar8 * 0x8000000) +
              (uVar8 + uVar4 >> 0x34 | (uVar8 + uVar4) * 0x1000) + (uVar7 >> 0x1f | uVar7 << 0x21);
      uVar5 = *(long *)((long)param_2 + (param_3 - 0x18)) + uVar9;
      uVar8 = uVar5 + lVar3;
      uVar5 = (uVar8 + lVar6 + lVar2) * -0x3c5a37a36834ced9 +
              (uVar7 + uVar4 + (uVar9 >> 0x25 | uVar9 * 0x8000000) + (uVar5 >> 7 | uVar5 << 0x39) +
                       (uVar1 >> 0x34 | uVar1 * 0x1000) + (uVar8 >> 0x1f | uVar8 << 0x21)) *
              -0x651e95c4d06fbfb1;
      uVar5 = lVar2 + (uVar5 ^ uVar5 >> 0x2f) * -0x3c5a37a36834ced9;
      return (uVar5 ^ uVar5 >> 0x2f) * -0x651e95c4d06fbfb1;
    }
    uVar7 = *(ulong *)((long)param_2 + (param_3 - 0x18));
    uVar5 = *(long *)((long)param_2 + (param_3 - 0x30)) + param_3;
  }
  uVar5 = (uVar7 ^ uVar5) * -0x622015f714c7d297;
  uVar5 = (uVar7 ^ uVar5 >> 0x2f ^ uVar5) * -0x622015f714c7d297;
  return (uVar5 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
}



/* Entry: 004599dc; end: 00459a93;  */

/* WARNING: Possible PIC construction at 0x00459a08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00459a0c) */
/* WARNING: Removing unreachable block (ram,0x0045abfc) */

long FUN_004599dc(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_2 < 9) {
    if (param_2 < 4) {
      lVar2 = -0x651e95c4d06fbfb1;
      if (param_2 != 0) {
        uVar1 = (param_2 | (ulong)*(byte *)((long)param_1 + (param_2 - 1)) << 2) *
                -0x36b62838af619aa9 ^
                (ulong)CONCAT11(*(undefined1 *)((long)param_1 + (param_2 >> 1)),(char)*param_1) *
                -0x651e95c4d06fbfb1;
        lVar2 = (uVar1 ^ uVar1 >> 0x2f) * -0x651e95c4d06fbfb1;
      }
      return lVar2;
    }
    uVar3 = (ulong)*(uint *)((long)param_1 + (param_2 - 4));
    uVar1 = param_2 + (uint)((int)*param_1 << 3);
  }
  else {
    uVar1 = *param_1;
    uVar3 = *(long *)((long)param_1 + (param_2 - 8)) + param_2;
    uVar3 = uVar3 >> (param_2 & 0x3f) | uVar3 << 0x40 - (param_2 & 0x3f);
  }
  uVar1 = (uVar3 ^ uVar1) * -0x622015f714c7d297;
  uVar1 = (uVar3 ^ uVar1 >> 0x2f ^ uVar1) * -0x622015f714c7d297;
  return (uVar1 ^ uVar1 >> 0x2f) * -0x622015f714c7d297;
}



/* Entry: 00459a94; end: 00459c37;  */

long FUN_00459a94(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = *(long *)((long)param_1 + param_2 + -8);
  uVar3 = lVar1 * -0x651e95c4d06fbfb1;
  uVar4 = *param_1 * -0x4b6d499041670d8d - param_1[1];
  uVar2 = param_1[1] ^ 0xc949d7c7509e6557;
  uVar2 = *param_1 * -0x4b6d499041670d8d + param_2 + (uVar2 >> 0x14 | uVar2 << 0x2c) +
          lVar1 * 0x651e95c4d06fbfb1;
  uVar3 = (uVar2 ^ (uVar3 >> 0x1e | uVar3 << 0x22) + (uVar4 >> 0x2b | uVar4 * 0x200000) +
                   *(long *)((long)param_1 + param_2 + -0x10) * -0x3c5a37a36834ced9) *
          -0x622015f714c7d297;
  uVar2 = (uVar2 ^ uVar3 >> 0x2f ^ uVar3) * -0x622015f714c7d297;
  return (uVar2 ^ uVar2 >> 0x2f) * -0x622015f714c7d297;
}



/* Entry: 00459c38; end: 00459ca3;  */

bool FUN_00459c38(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  
  bVar4 = *(byte *)((long)param_1 + 0x17);
  uVar1 = param_1[1];
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  bVar5 = *(byte *)((long)param_2 + 0x17);
  uVar2 = param_2[1];
  if (-1 < (char)bVar5) {
    uVar2 = (ulong)bVar5;
  }
  if (uVar1 == uVar2) {
    plVar6 = (long *)*param_1;
    if (-1 < (char)bVar4) {
      plVar6 = param_1;
    }
    plVar3 = (long *)*param_2;
    if (-1 < (char)bVar5) {
      plVar3 = param_2;
    }
    _memcmp(plVar6,plVar3);
    return (int)plVar6 == 0;
  }
  return false;
}



/* Entry: 00459ca4; end: 00459cdb;  */

void FUN_00459ca4(long param_1)

{
  long unaff_x20;
  
  func_0x0045ad78();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x18,unaff_x20 + 0x18);
  return;
}



/* Entry: 00459cdc; end: 00459cff;  */

undefined8 FUN_00459cdc(undefined8 param_1)

{
  FUN_00459d00(param_1,0);
  return param_1;
}



/* Entry: 00459d00; end: 00459d17;  */

void FUN_00459d00(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x00459d5c(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(lVar1);
  return;
}



/* Entry: 00459d18; end: 00459de3;  */

void FUN_00459d18(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x00459d5c(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_2);
  return;
}



/* Entry: 00459de4; end: 00459e03;  */

void FUN_00459de4(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x00459d84();
  }
  return;
}



/* Entry: 00459e04; end: 00459e33;  */

void FUN_00459e04(long param_1)

{
  func_0x0045ae38();
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_00459e34();
  return;
}



/* Entry: 00459e34; end: 00459e47;  */

void FUN_00459e34(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
    *(undefined1 *)(param_1 + 0x18) = 1;
    return;
  }
  return;
}



/* Entry: 00459e48; end: 00459e63;  */

void FUN_00459e48(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 00459e64; end: 00459e8b;  */

void FUN_00459e64(long param_1)

{
  FUN_00457530(param_1 + 0x30);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x00459d84();
  }
  return;
}



/* Entry: 00459e8c; end: 00459ebb;  */

void FUN_00459e8c(long param_1)

{
  func_0x0045ae38();
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_00459ebc();
  return;
}



/* Entry: 00459ebc; end: 00459ecf;  */

void FUN_00459ebc(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_00459eec();
    *(undefined1 *)(param_1 + 0x38) = 1;
    return;
  }
  return;
}



/* Entry: 00459ed0; end: 00459eeb;  */

void FUN_00459ed0(long param_1)

{
  FUN_00459eec();
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 00459eec; end: 00459f4f;  */

undefined8 * FUN_00459eec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_00459e04(param_1 + 3,param_2 + 3);
  return param_1;
}



/* Entry: 00459f50; end: 00459f7f;  */

void FUN_00459f50(long param_1)

{
  func_0x0045ae38();
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_00459f80();
  return;
}



/* Entry: 00459f80; end: 00459f93;  */

void FUN_00459f80(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_00459fb0();
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  return;
}



/* Entry: 00459f94; end: 00459faf;  */

void FUN_00459f94(long param_1)

{
  FUN_00459fb0();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 00459fb0; end: 0045a0e3;  */

undefined4 * FUN_00459fb0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_00459e04(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 0045a0e4; end: 0045a117;  */

void FUN_0045a0e4(void)

{
  dword *pdVar1;
  long lVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pdVar1 = &MACH_HEADER.cpusubtype;
  ___cxa_allocate_exception();
  *(undefined **)pdVar1 = PTR___ZTVNSt3__112bad_weak_ptrE_00998dd0 + 0x10;
  ___cxa_throw();
  (**(code **)(**(long **)(*(long *)(pdVar1 + 4) + 0x18) + 0x10))();
  lVar2 = *(long *)(pdVar1 + 4);
  uStack_38 = *(undefined8 *)(lVar2 + 0x20);
  uStack_40 = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  func_0x0045a09c(&uStack_40);
  return;
}



/* Entry: 0045a118; end: 0045a167;  */

void FUN_0045a118(long param_1)

{
  long lVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0x18) + 0x10))();
  lVar1 = *(long *)(param_1 + 0x10);
  uStack_28 = *(undefined8 *)(lVar1 + 0x20);
  uStack_30 = *(undefined8 *)(lVar1 + 0x18);
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  func_0x0045a09c(&uStack_30);
  return;
}



/* Entry: 0045a168; end: 0045a18b;  */

void FUN_0045a168(long param_1)

{
  param_1 = param_1 + 8;
  func_0x0045addc();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 0045a18c; end: 0045a1e7;  */

void FUN_0045a18c(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0045ae2c();
  *param_1 = *param_2;
  FUN_004591ac(param_1 + 1,param_2 + 1);
  *(undefined4 *)(unaff_x20 + 0x78) = *(undefined4 *)(unaff_x19 + 0x78);
  return;
}



/* Entry: 0045a1e8; end: 0045a1ff;  */

void FUN_0045a1e8(void)

{
  FUN_0045a200();
  return;
}



/* Entry: 0045a200; end: 0045a247;  */

long FUN_0045a200(long param_1,long param_2)

{
  func_0x0045a220();
  return param_2 + param_1 * 1000000000;
}



/* Entry: 0045a248; end: 0045a3bb;  */

void FUN_0045a248(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  FUN_0045a3bc();
  if ((**(byte **)(lVar2 + 0xb8) & 1) == 0) {
    plVar1 = *(long **)(*(long *)(lVar2 + 8) + 0x18);
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2 + 0x10,*(undefined4 *)(lVar2 + 0x80));
    FUN_0045a3bc(lVar2 + 0x88);
    func_0x0045adbc();
    plVar1 = *(long **)(lVar2 + 0xa8);
    func_0x0045ac04();
    func_0x0045ac9c();
    func_0x0045ad2c();
    func_0x0045ad18(*(undefined8 *)(*plVar1 + 0x18));
    func_0x0045ae0c();
    func_0x0045ac48();
    func_0x0045abd4();
    func_0x0045ac8c();
    func_0x0045ad20();
    func_0x0045ad9c();
    func_0x0045acd4();
    func_0x0045ae04();
    func_0x0045ac48();
    func_0x0045abd4();
    func_0x0045ac6c();
    func_0x0045ad38();
    func_0x0045ad9c();
    func_0x0045acd4();
    func_0x0045adfc();
    func_0x0045ac48();
    plVar1 = *(long **)(lVar2 + 0xa8);
    func_0x0045abd4();
    func_0x0045ac7c();
    func_0x0045ad44();
    func_0x0045acd4(*(undefined8 *)(*plVar1 + 0x28));
    func_0x0045adf4();
    func_0x0045ac48();
  }
  return;
}



/* Entry: 0045a3bc; end: 0045a3eb;  */

long FUN_0045a3bc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if ((char)param_1[2] == '\x01') {
    FUN_0045a458();
    lVar1 = (long)param_1 + lVar1;
  }
  return lVar1;
}



/* Entry: 0045a3ec; end: 0045a457;  */

undefined8 FUN_0045a3ec(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar1 = param_3;
  _strlen(param_3);
  func_0x0045a47c(param_1,&uStack_40,param_3,uVar1);
  func_0x0045ae20();
  return param_3;
}



/* Entry: 0045a458; end: 0045a543;  */

long FUN_0045a458(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_0045a1e8();
  return lVar1 - *(long *)(param_1 + 8);
}



/* Entry: 0045a544; end: 0045a5ab;  */

undefined8 FUN_0045a544(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 *puStack_48;
  
  func_0x0045acdc();
  func_0x0045acfc();
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20;
  puStack_48[2] = unaff_x20[2];
  puStack_48[1] = uVar2;
  *puStack_48 = uVar1;
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  *unaff_x20 = 0;
  func_0x0045ae14();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0045ad94();
  return uVar1;
}



/* Entry: 0045a5ac; end: 0045a5fb;  */

ulong FUN_0045a5ac(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar3;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    uVar3 = (param_1[2] - *param_1) / 0x18;
    uVar2 = uVar3 * 2;
    if (uVar2 < param_2 || uVar2 - param_2 == 0) {
      uVar2 = param_2;
    }
    if (0x555555555555554 < uVar3) {
      uVar2 = 0xaaaaaaaaaaaaaaa;
    }
    return uVar2;
  }
  FUN_004277dc();
  func_0x0045ae2c();
  uVar3 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x18) * 0x18;
  uVar2 = uVar3;
  _memcpy(uVar3);
  unaff_x19[1] = uVar3;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return uVar2;
}



/* Entry: 0045a5fc; end: 0045a67b;  */

void FUN_0045a5fc(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x0045ae2c();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x18) * 0x18;
  _memcpy(lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 0045a67c; end: 0045a6c7;  */

long * FUN_0045a67c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    FUN_004277f0();
  }
  lVar1 = param_4 + param_3 * 0x18;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x18;
  return param_1;
}



/* Entry: 0045a6c8; end: 0045a6fb;  */

void FUN_0045a6c8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_00456d78(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x18;
  return;
}



/* Entry: 0045a6fc; end: 0045a753;  */

undefined8 FUN_0045a6fc(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uStack_48;
  
  func_0x0045acdc();
  func_0x0045acfc();
  FUN_00456d78(uStack_48);
  func_0x0045ae14();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0045ad94();
  return uVar1;
}



/* Entry: 0045a754; end: 0045a773;  */

void FUN_0045a754(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0045a1bc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0045a774; end: 0045a777;  */

void FUN_0045a774(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 0045a778; end: 0045a7d3;  */

undefined8 * FUN_0045a778(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 1,param_2 + 1);
  FUN_00459e8c(param_1 + 4,param_2 + 4);
  return param_1;
}



/* Entry: 0045a7d4; end: 0045a7ff;  */

long FUN_0045a7d4(long param_1)

{
  func_0x0045a054(param_1 + 0x88);
  FUN_00458e74(param_1 + 8);
  return param_1;
}



/* Entry: 0045a800; end: 0045a973;  */

void FUN_0045a800(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  FUN_0045a3bc();
  if ((**(byte **)(lVar2 + 0x98) & 1) == 0) {
    plVar1 = *(long **)(*(long *)(lVar2 + 8) + 0x18);
    (**(code **)(*plVar1 + 0x20))(plVar1,lVar2 + 0x10,lVar2 + 0x28);
    FUN_0045a3bc(lVar2 + 0x68);
    func_0x0045adbc();
    plVar1 = *(long **)(lVar2 + 0x88);
    func_0x0045ac04();
    func_0x0045ac9c();
    func_0x0045ad2c();
    func_0x0045ad18(*(undefined8 *)(*plVar1 + 0x18));
    func_0x0045ae0c();
    func_0x0045ac48();
    func_0x0045abd4();
    func_0x0045ac8c();
    func_0x0045ad20();
    func_0x0045ad9c();
    func_0x0045acd4();
    func_0x0045ae04();
    func_0x0045ac48();
    func_0x0045abd4();
    func_0x0045ac6c();
    func_0x0045ad38();
    func_0x0045ad9c();
    func_0x0045acd4();
    func_0x0045adfc();
    func_0x0045ac48();
    plVar1 = *(long **)(lVar2 + 0x88);
    func_0x0045abd4();
    func_0x0045ac7c();
    func_0x0045ad44();
    func_0x0045acd4(*(undefined8 *)(*plVar1 + 0x28));
    func_0x0045adf4();
    func_0x0045ac48();
  }
  return;
}



/* Entry: 0045a974; end: 0045a993;  */

void FUN_0045a974(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_0045a7d4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0045a994; end: 0045a997;  */

void FUN_0045a994(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 0045a998; end: 0045a9df;  */

void FUN_0045a998(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0045ad78();
  *param_1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 1,param_2 + 1);
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_00459f50(unaff_x19 + 0x28,unaff_x20 + 0x28);
  return;
}



/* Entry: 0045a9e0; end: 0045aa0b;  */

long FUN_0045a9e0(long param_1)

{
  func_0x0045a054(param_1 + 0x80);
  FUN_00459084(param_1 + 8);
  return param_1;
}



/* Entry: 0045aa0c; end: 0045ab83;  */

void FUN_0045aa0c(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  FUN_0045a3bc();
  if ((**(byte **)(lVar2 + 0x90) & 1) == 0) {
    plVar1 = *(long **)(*(long *)(lVar2 + 8) + 0x18);
    (**(code **)(*plVar1 + 0x28))(plVar1,lVar2 + 0x10,*(undefined8 *)(lVar2 + 0x28),lVar2 + 0x30);
    FUN_0045a3bc(lVar2 + 0x60);
    func_0x0045adbc();
    plVar1 = *(long **)(lVar2 + 0x80);
    func_0x0045ac04();
    func_0x0045ac9c();
    func_0x0045ad2c();
    func_0x0045ad18(*(undefined8 *)(*plVar1 + 0x18));
    func_0x0045ae0c();
    func_0x0045ac48();
    func_0x0045abd4();
    func_0x0045ac8c();
    func_0x0045ad20();
    func_0x0045ad9c();
    func_0x0045acd4();
    func_0x0045ae04();
    func_0x0045ac48();
    func_0x0045abd4();
    func_0x0045ac6c();
    func_0x0045ad38();
    func_0x0045ad9c();
    func_0x0045acd4();
    func_0x0045adfc();
    func_0x0045ac48();
    plVar1 = *(long **)(lVar2 + 0x80);
    func_0x0045abd4();
    func_0x0045ac7c();
    func_0x0045ad44();
    func_0x0045acd4(*(undefined8 *)(*plVar1 + 0x28));
    func_0x0045adf4();
    func_0x0045ac48();
  }
  return;
}



/* Entry: 0045ab84; end: 0045aba3;  */

void FUN_0045ab84(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_0045a9e0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0045aba4; end: 0045ae97;  */

void FUN_0045aba4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 0045ae98; end: 0045afcb;  */

undefined *** FUN_0045ae98(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined1 *puVar10;
  char *pcVar11;
  undefined ****ppppuVar12;
  undefined ****ppppuVar13;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long unaff_x19;
  undefined4 uVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined ***pppuStack_2e0;
  undefined1 auStack_2d8 [112];
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined4 uStack_258;
  undefined1 uStack_254;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  char *pcStack_238;
  undefined1 auStack_230 [144];
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined ***pppuStack_170;
  code *pcStack_168;
  undefined **ppuStack_160;
  undefined8 uStack_108;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined4 uStack_78;
  undefined8 uStack_38;
  
  func_0x0045c178();
  pbVar1 = (byte *)(param_1 + 0x38);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uStack_38 = extraout_x8;
  if ((bVar2 & 1) == 0) {
    FUN_0047bdb0(unaff_x19 + 0x28);
    lVar7 = *(long *)(unaff_x19 + 0x10);
    uVar5 = in_ZR;
    if (lVar7 != 0) {
      plVar15 = *(long **)(unaff_x19 + 0x28);
      uVar16 = *(undefined8 *)(unaff_x19 + 8);
      __ZNSt3__119__shared_weak_count4lockEv();
      uVar5 = in_ZR;
      if (lVar7 != 0) {
        ppuStack_98 = (undefined **)0x45b86c;
        ppuStack_90 = &PTR_FUN_009e5430;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_88 = uVar16;
        lStack_80 = lVar7;
        (**(code **)(*plVar15 + 0x10))(plVar15,&ppuStack_98);
        func_0x0045c0ac(ppuStack_90);
        func_0x0045b790(&uStack_a8);
        pppuVar8 = *(undefined ****)(unaff_x19 + 0x28);
        FUN_0064c54c();
        goto LAB_0045af74;
      }
    }
    pppuVar8 = (undefined ***)0x0;
    FUN_0045a0e4();
  }
  else {
    uStack_88 = 0;
    lStack_80 = 0;
    ppuStack_98 = &PTR_FUN_009e5290;
    ppuStack_90 = (undefined **)0x0;
    uStack_78 = 0xe;
    (**(code **)(**(long **)(unaff_x19 + 0x40) + 0x18))(*(long **)(unaff_x19 + 0x40),&ppuStack_98);
    pppuVar8 = &ppuStack_98;
    FUN_004590f8();
LAB_0045af74:
    func_0x0045c11c(uStack_38);
    uVar5 = 0;
    if ((bool)in_ZR) {
      return pppuVar8;
    }
  }
  ___stack_chk_fail();
  pppuVar9 = pppuVar8;
  func_0x0045c1dc();
  ppppuVar12 = &pppuStack_2e0;
  ppppuVar13 = &pppuStack_2e0;
  func_0x0045c178();
  puVar10 = auStack_2d8;
  pppuStack_2e0 = pppuVar9;
  uStack_108 = extraout_x8_00;
  FUN_004591ac();
  uStack_260 = param_3[1];
  uStack_268 = *param_3;
  if (param_3[1] != 0) {
    do {
      func_0x0045c0e4();
    } while (extraout_w10 != 0);
  }
  uVar6 = SUB84(puVar10,0);
  uVar14 = (undefined4)param_4;
  uStack_254 = (undefined1)((ulong)param_4 >> 0x20);
  ppuStack_248 = pppuVar8[9];
  ppuStack_250 = pppuVar8[8];
  uStack_258 = uVar14;
  if (pppuVar8[9] != (undefined **)0x0) {
    do {
      func_0x0045c0e4();
      uVar6 = SUB84(puVar10,0);
    } while (extraout_w10_00 != 0);
  }
  if (((ulong)pppuVar8[7] & 1) == 0) {
    FUN_0045a1e8();
    func_0x0045c1c4();
    (*extraout_x8_01)();
    pcStack_238 = "notificationReceived";
    FUN_0045b8e0(auStack_230,&pppuStack_2e0);
    uStack_1a0 = 0;
    uStack_194 = (undefined4)((ulong)param_4 >> 0x20);
    uStack_190 = CONCAT31(uStack_190._1_3_,1);
    ppuStack_178 = ppuStack_248;
    ppuStack_180 = ppuStack_250;
    uStack_198 = uVar14;
    uStack_188 = uVar6;
    if (ppuStack_248 != (undefined **)0x0) {
      do {
        func_0x0045c0e4();
      } while (extraout_w10_01 != 0);
    }
    pcStack_168 = FUN_0045b950;
    ppuStack_160 = &PTR_FUN_009e5448;
    pcVar11 = section_000000b8.segname + 8;
    pppuStack_170 = pppuVar8 + 7;
    __Znwm();
    *(char **)pcVar11 = pcStack_238;
    FUN_0045b8e0(pcVar11 + 8,auStack_230);
    *(ulong *)(pcVar11 + 0xa0) = CONCAT44(uStack_194,uStack_198);
    *(undefined8 *)(pcVar11 + 0x98) = uStack_1a0;
    *(ulong *)(pcVar11 + 0xac) = CONCAT44(uStack_188,uStack_18c);
    *(ulong *)(pcVar11 + 0xa4) = CONCAT44(uStack_190,uStack_194);
    *(undefined ***)(pcVar11 + 0xc0) = ppuStack_178;
    *(undefined ***)(pcVar11 + 0xb8) = ppuStack_180;
    if (ppuStack_178 != (undefined **)0x0) {
      do {
        func_0x0045c0e4();
      } while (extraout_w10_02 != 0);
    }
    *(undefined ****)(pcVar11 + 200) = pppuStack_170;
    func_0x0045c258();
    func_0x0045c1ec();
    func_0x0045c09c();
    func_0x0045b924(&pcStack_238);
  }
  func_0x0045a054(&ppuStack_250);
  FUN_0045b1b8();
  func_0x0045c11c(uStack_108);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    func_0x0045c09c();
    func_0x0045b924(&pcStack_238);
    func_0x0045a054(&ppuStack_250);
    FUN_0045b1b8(&pppuStack_2e0);
    func_0x0045c1dc();
    func_0x0045b7b4(ppppuVar13 + 0xf);
    FUN_00459e64(ppppuVar13 + 1);
    return (undefined ***)ppppuVar13;
  }
  return (undefined ***)ppppuVar12;
}



/* Entry: 0045afcc; end: 0045b1b7;  */

undefined8 *
FUN_0045afcc(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined4 uVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long unaff_x19;
  undefined4 uVar6;
  undefined8 uStack_230;
  undefined1 auStack_228 [112];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined1 uStack_1a4;
  undefined8 uStack_1a0;
  long lStack_198;
  char *pcStack_188;
  undefined1 auStack_180 [144];
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  byte *pbStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_58;
  
  puVar4 = &uStack_230;
  puVar5 = &uStack_230;
  func_0x0045c178();
  puVar2 = auStack_228;
  uStack_230 = param_1;
  uStack_58 = extraout_x8;
  FUN_004591ac();
  uStack_1b0 = param_3[1];
  uStack_1b8 = *param_3;
  if (param_3[1] != 0) {
    do {
      func_0x0045c0e4();
    } while (extraout_w10 != 0);
  }
  uVar1 = SUB84(puVar2,0);
  uVar6 = (undefined4)param_4;
  uStack_1a4 = (undefined1)((ulong)param_4 >> 0x20);
  lStack_198 = *(long *)(unaff_x19 + 0x48);
  uStack_1a0 = *(undefined8 *)(unaff_x19 + 0x40);
  uStack_1a8 = uVar6;
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    do {
      func_0x0045c0e4();
      uVar1 = SUB84(puVar2,0);
    } while (extraout_w10_00 != 0);
  }
  if ((*(byte *)(unaff_x19 + 0x38) & 1) == 0) {
    FUN_0045a1e8();
    func_0x0045c1c4();
    (*extraout_x8_00)();
    pcStack_188 = "notificationReceived";
    FUN_0045b8e0(auStack_180,&uStack_230);
    uStack_f0 = 0;
    uStack_e4 = (undefined4)((ulong)param_4 >> 0x20);
    uStack_e0 = CONCAT31(uStack_e0._1_3_,1);
    lStack_c8 = lStack_198;
    uStack_d0 = uStack_1a0;
    uStack_e8 = uVar6;
    uStack_d8 = uVar1;
    if (lStack_198 != 0) {
      do {
        func_0x0045c0e4();
      } while (extraout_w10_01 != 0);
    }
    pcStack_b8 = FUN_0045b950;
    ppuStack_b0 = &PTR_FUN_009e5448;
    pcVar3 = section_000000b8.segname + 8;
    pbStack_c0 = (byte *)(unaff_x19 + 0x38);
    __Znwm();
    *(char **)pcVar3 = pcStack_188;
    FUN_0045b8e0(pcVar3 + 8,auStack_180);
    *(ulong *)(pcVar3 + 0xa0) = CONCAT44(uStack_e4,uStack_e8);
    *(undefined8 *)(pcVar3 + 0x98) = uStack_f0;
    *(ulong *)(pcVar3 + 0xac) = CONCAT44(uStack_d8,uStack_dc);
    *(ulong *)(pcVar3 + 0xa4) = CONCAT44(uStack_e0,uStack_e4);
    *(long *)(pcVar3 + 0xc0) = lStack_c8;
    *(undefined8 *)(pcVar3 + 0xb8) = uStack_d0;
    if (lStack_c8 != 0) {
      do {
        func_0x0045c0e4();
      } while (extraout_w10_02 != 0);
    }
    *(byte **)(pcVar3 + 200) = pbStack_c0;
    func_0x0045c258();
    func_0x0045c1ec();
    func_0x0045c09c();
    func_0x0045b924(&pcStack_188);
  }
  func_0x0045a054(&uStack_1a0);
  FUN_0045b1b8();
  func_0x0045c11c(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0045c09c();
    func_0x0045b924(&pcStack_188);
    func_0x0045a054(&uStack_1a0);
    FUN_0045b1b8(&uStack_230);
    func_0x0045c1dc();
    func_0x0045b7b4((undefined1 *)((long)puVar5 + 0x78));
    FUN_00459e64((undefined1 *)((long)puVar5 + 8));
    return (undefined8 *)(undefined1 *)puVar5;
  }
  return puVar4;
}



/* Entry: 0045b1b8; end: 0045b1e3;  */

long FUN_0045b1b8(long param_1)

{
  func_0x0045b7b4(param_1 + 0x78);
  FUN_00459e64(param_1 + 8);
  return param_1;
}



/* Entry: 0045b1e4; end: 0045b36f;  */

char ** FUN_0045b1e4(char **param_1,undefined4 param_2,undefined8 param_3)

{
  char **ppcVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined4 uVar4;
  char **ppcVar5;
  long *plVar6;
  long *plVar7;
  char **ppcVar8;
  char **ppcVar9;
  undefined1 *puVar10;
  dword *pdVar11;
  undefined1 **ppuVar12;
  undefined1 **ppuVar13;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined1 *puStack_2e0;
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [64];
  undefined8 uStack_280;
  long lStack_278;
  char *pcStack_268;
  undefined1 auStack_260 [96];
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  byte *pbStack_1d0;
  code *pcStack_1c8;
  undefined **ppuStack_1c0;
  undefined8 uStack_168;
  char *pcStack_110;
  char *pcStack_108;
  char *pcStack_f8;
  char **ppcStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  char **ppcStack_d8;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined4 uStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  char **ppcStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  char *pcStack_98;
  char **ppcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  char **ppcStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  char *pcStack_60;
  char *pcStack_58;
  char **ppcStack_50;
  undefined8 uStack_48;
  
  ppcVar8 = &pcStack_110;
  ppcVar9 = &pcStack_110;
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  pcStack_108 = param_1[9];
  pcStack_110 = param_1[8];
  ppcVar5 = param_1;
  if (param_1[9] != (char *)0x0) {
    do {
      func_0x0045c0e4();
    } while (extraout_w10 != 0);
  }
  ppcVar1 = param_1 + 7;
  if (((ulong)*ppcVar1 & 1) == 0) {
    FUN_0045a1e8();
    plVar6 = *(long **)(param_1[5] + 0x18);
    (**(code **)(*plVar6 + 0x58))();
    plVar7 = (long *)param_1[5];
    pcStack_f8 = "appStateChanged";
    uStack_e0 = 0;
    uStack_d0 = 1;
    uStack_c8 = SUB84(plVar6,0);
    pcStack_c0 = pcStack_110;
    pcStack_b8 = pcStack_108;
    if (pcStack_108 != (char *)0x0) {
      plVar6 = (long *)(pcStack_108 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pcStack_a8 = FUN_0045bad4;
    ppuStack_a0 = &PTR_FUN_009e5460;
    uStack_88 = CONCAT44(uStack_e4,param_2);
    pcStack_98 = "appStateChanged";
    uStack_70 = CONCAT71(uStack_cf,1);
    uStack_80 = 0;
    pcStack_60 = pcStack_110;
    pcStack_58 = pcStack_108;
    ppcStack_f0 = param_1;
    uStack_e8 = param_2;
    ppcStack_d8 = ppcVar5;
    ppcStack_b0 = ppcVar1;
    ppcStack_90 = param_1;
    ppcStack_78 = ppcVar5;
    uStack_68 = uStack_c8;
    if (pcStack_108 != (char *)0x0) {
      do {
        func_0x0045c0e4();
      } while (extraout_w10_00 != 0);
    }
    param_1 = &pcStack_f8;
    ppcStack_50 = ppcVar1;
    (**(code **)(*plVar7 + 0x10))();
    func_0x0045c0ac(ppuStack_a0);
    func_0x0045a054(&pcStack_c0);
  }
  func_0x0045a054();
  func_0x0045c11c(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0045c0ac(ppuStack_a0);
    func_0x0045a054(param_1 + 7);
    func_0x0045a054();
    func_0x0045c1dc();
    ppuVar12 = &puStack_2e0;
    ppuVar13 = &puStack_2e0;
    func_0x0045c178();
    puStack_2e0 = (undefined1 *)ppcVar9;
    uStack_168 = extraout_x8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_2d8);
    puVar10 = auStack_2c0;
    FUN_00459e8c(puVar10,param_3);
    uVar4 = SUB84(puVar10,0);
    lStack_278 = *(long *)((long)ppcVar8 + 0x48);
    uStack_280 = *(undefined8 *)((long)ppcVar8 + 0x40);
    if (*(long *)((long)ppcVar8 + 0x48) != 0) {
      do {
        func_0x0045c0e4();
        uVar4 = SUB84(puVar10,0);
      } while (extraout_w10_01 != 0);
    }
    if ((*(byte *)((long)ppcVar8 + 0x38) & 1) == 0) {
      FUN_0045a1e8();
      func_0x0045c1c4();
      (*extraout_x8_00)();
      pcStack_268 = "notificationDisplayed";
      FUN_0045bc9c(auStack_260,&puStack_2e0);
      uStack_200 = 0;
      uStack_1f8 = (undefined4)param_3;
      uStack_1f4 = (undefined4)((ulong)param_3 >> 0x20);
      uStack_1f0 = CONCAT31(uStack_1f0._1_3_,1);
      lStack_1d8 = lStack_278;
      uStack_1e0 = uStack_280;
      uStack_1e8 = uVar4;
      if (lStack_278 != 0) {
        do {
          func_0x0045c0e4();
        } while (extraout_w10_02 != 0);
      }
      pcStack_1c8 = FUN_0045bd28;
      ppuStack_1c0 = &PTR_FUN_009e5478;
      pdVar11 = &section_00000068.reloff;
      pbStack_1d0 = (byte *)((long)ppcVar8 + 0x38);
      __Znwm();
      *(char **)pdVar11 = pcStack_268;
      FUN_0045bc9c(pdVar11 + 2,auStack_260);
      *(ulong *)(pdVar11 + 0x1c) = CONCAT44(uStack_1f4,uStack_1f8);
      *(undefined8 *)(pdVar11 + 0x1a) = uStack_200;
      *(ulong *)(pdVar11 + 0x1f) = CONCAT44(uStack_1e8,uStack_1ec);
      *(ulong *)(pdVar11 + 0x1d) = CONCAT44(uStack_1f0,uStack_1f4);
      *(long *)(pdVar11 + 0x24) = lStack_1d8;
      *(undefined8 *)(pdVar11 + 0x22) = uStack_1e0;
      if (lStack_1d8 != 0) {
        do {
          func_0x0045c0e4();
        } while (extraout_w10_03 != 0);
      }
      *(byte **)(pdVar11 + 0x26) = pbStack_1d0;
      func_0x0045c258();
      func_0x0045c1ec();
      func_0x0045c09c();
      FUN_0045bcfc(&pcStack_268);
    }
    func_0x0045c250();
    FUN_0045b544();
    func_0x0045c11c(uStack_168);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0045c09c();
      FUN_0045bcfc(&pcStack_268);
      func_0x0045c250();
      FUN_0045b544(&puStack_2e0);
      func_0x0045c1dc();
      func_0x00459f20((undefined1 *)((long)ppuVar13 + 0x20));
      func_0x0045c240();
      return (char **)(undefined1 *)ppuVar13;
    }
    return ppuVar12;
  }
  return ppcVar8;
}



/* Entry: 0045b370; end: 0045b543;  */

undefined8 * FUN_0045b370(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined4 uVar1;
  undefined1 *puVar2;
  dword *pdVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x19;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [64];
  undefined8 uStack_170;
  long lStack_168;
  char *pcStack_158;
  undefined1 auStack_150 [96];
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  byte *pbStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_58;
  
  puVar4 = &uStack_1d0;
  puVar5 = &uStack_1d0;
  func_0x0045c178();
  uStack_1d0 = param_1;
  uStack_58 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1c8);
  puVar2 = auStack_1b0;
  FUN_00459e8c(puVar2,param_3);
  uVar1 = SUB84(puVar2,0);
  lStack_168 = *(long *)(unaff_x19 + 0x48);
  uStack_170 = *(undefined8 *)(unaff_x19 + 0x40);
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    do {
      func_0x0045c0e4();
      uVar1 = SUB84(puVar2,0);
    } while (extraout_w10 != 0);
  }
  if ((*(byte *)(unaff_x19 + 0x38) & 1) == 0) {
    FUN_0045a1e8();
    func_0x0045c1c4();
    (*extraout_x8_00)();
    pcStack_158 = "notificationDisplayed";
    FUN_0045bc9c(auStack_150,&uStack_1d0);
    uStack_f0 = 0;
    uStack_e8 = (undefined4)param_3;
    uStack_e4 = (undefined4)((ulong)param_3 >> 0x20);
    uStack_e0 = CONCAT31(uStack_e0._1_3_,1);
    lStack_c8 = lStack_168;
    uStack_d0 = uStack_170;
    uStack_d8 = uVar1;
    if (lStack_168 != 0) {
      do {
        func_0x0045c0e4();
      } while (extraout_w10_00 != 0);
    }
    pcStack_b8 = FUN_0045bd28;
    ppuStack_b0 = &PTR_FUN_009e5478;
    pdVar3 = &section_00000068.reloff;
    pbStack_c0 = (byte *)(unaff_x19 + 0x38);
    __Znwm();
    *(char **)pdVar3 = pcStack_158;
    FUN_0045bc9c(pdVar3 + 2,auStack_150);
    *(ulong *)(pdVar3 + 0x1c) = CONCAT44(uStack_e4,uStack_e8);
    *(undefined8 *)(pdVar3 + 0x1a) = uStack_f0;
    *(ulong *)(pdVar3 + 0x1f) = CONCAT44(uStack_d8,uStack_dc);
    *(ulong *)(pdVar3 + 0x1d) = CONCAT44(uStack_e0,uStack_e4);
    *(long *)(pdVar3 + 0x24) = lStack_c8;
    *(undefined8 *)(pdVar3 + 0x22) = uStack_d0;
    if (lStack_c8 != 0) {
      do {
        func_0x0045c0e4();
      } while (extraout_w10_01 != 0);
    }
    *(byte **)(pdVar3 + 0x26) = pbStack_c0;
    func_0x0045c258();
    func_0x0045c1ec();
    func_0x0045c09c();
    FUN_0045bcfc(&pcStack_158);
  }
  func_0x0045c250();
  FUN_0045b544();
  func_0x0045c11c(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0045c09c();
    FUN_0045bcfc(&pcStack_158);
    func_0x0045c250();
    FUN_0045b544(&uStack_1d0);
    func_0x0045c1dc();
    func_0x00459f20((undefined1 *)((long)puVar5 + 0x20));
    func_0x0045c240();
    return (undefined8 *)(undefined1 *)puVar5;
  }
  return puVar4;
}



/* Entry: 0045b544; end: 0045b56b;  */

long FUN_0045b544(long param_1)

{
  func_0x00459f20(param_1 + 0x20);
  func_0x0045c240();
  return param_1;
}



/* Entry: 0045b56c; end: 0045b74f;  */

undefined8 *
FUN_0045b56c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined4 uVar1;
  undefined1 *puVar2;
  dword *pdVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x19;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [24];
  undefined4 uStack_198;
  undefined1 uStack_194;
  undefined1 auStack_190 [48];
  undefined8 uStack_160;
  long lStack_158;
  char *pcStack_150;
  undefined1 auStack_148 [88];
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  byte *pbStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_58;
  
  func_0x0045c178();
  uStack_1b8 = param_1;
  uStack_58 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1b0);
  uStack_198 = (undefined4)param_3;
  uStack_194 = (undefined1)((ulong)param_3 >> 0x20);
  puVar2 = auStack_190;
  FUN_00459f50(puVar2,param_4);
  uVar1 = SUB84(puVar2,0);
  lStack_158 = *(long *)(unaff_x19 + 0x48);
  uStack_160 = *(undefined8 *)(unaff_x19 + 0x40);
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    do {
      func_0x0045c0e4();
      uVar1 = SUB84(puVar2,0);
    } while (extraout_w10 != 0);
  }
  if ((*(byte *)(unaff_x19 + 0x38) & 1) == 0) {
    FUN_0045a1e8();
    func_0x0045c1c4();
    (*extraout_x8_00)();
    pcStack_150 = "notificationSuppressed";
    FUN_0045bea8(auStack_148,&uStack_1b8);
    uStack_f0 = 0;
    uStack_e8 = (undefined4)param_4;
    uStack_e4 = (undefined4)((ulong)param_4 >> 0x20);
    uStack_e0 = CONCAT31(uStack_e0._1_3_,1);
    lStack_c8 = lStack_158;
    uStack_d0 = uStack_160;
    uStack_d8 = uVar1;
    if (lStack_158 != 0) {
      do {
        func_0x0045c0e4();
      } while (extraout_w10_00 != 0);
    }
    pcStack_b8 = FUN_0045bf18;
    ppuStack_b0 = &PTR_FUN_009e5490;
    pdVar3 = &section_00000068.offset;
    pbStack_c0 = (byte *)(unaff_x19 + 0x38);
    __Znwm();
    *(char **)pdVar3 = pcStack_150;
    FUN_0045bea8(pdVar3 + 2,auStack_148);
    *(ulong *)(pdVar3 + 0x1a) = CONCAT44(uStack_e4,uStack_e8);
    *(undefined8 *)(pdVar3 + 0x18) = uStack_f0;
    *(ulong *)(pdVar3 + 0x1d) = CONCAT44(uStack_d8,uStack_dc);
    *(ulong *)(pdVar3 + 0x1b) = CONCAT44(uStack_e0,uStack_e4);
    *(long *)(pdVar3 + 0x22) = lStack_c8;
    *(undefined8 *)(pdVar3 + 0x20) = uStack_d0;
    if (lStack_c8 != 0) {
      do {
        func_0x0045c0e4();
      } while (extraout_w10_01 != 0);
    }
    *(byte **)(pdVar3 + 0x24) = pbStack_c0;
    func_0x0045c258();
    func_0x0045c1ec();
    func_0x0045c09c();
    FUN_0045beec(&pcStack_150);
  }
  func_0x0045c250();
  puVar4 = &uStack_1b8;
  FUN_0045b750();
  func_0x0045c11c(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0045c09c();
    FUN_0045beec(&pcStack_150);
    func_0x0045c250();
    puVar4 = &uStack_1b8;
    FUN_0045b750(puVar4);
    func_0x0045c1dc();
    func_0x00459fd8(puVar4 + 5);
    func_0x0045c240();
    return puVar4;
  }
  return puVar4;
}



/* Entry: 0045b750; end: 0045b777;  */

long FUN_0045b750(long param_1)

{
  func_0x00459fd8(param_1 + 0x28);
  func_0x0045c240();
  return param_1;
}



/* Entry: 0045b778; end: 0045b77b;  */

undefined8 * FUN_0045b778(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e53a0;
  func_0x0045a054(param_1 + 8);
  func_0x0045a078(param_1 + 5);
  func_0x0045b824(param_1 + 3);
  func_0x0045b848(param_1 + 1);
  return param_1;
}



/* Entry: 0045b77c; end: 0045b78f;  */

void FUN_0045b77c(void)

{
  func_0x0045b7d8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0045b790; end: 0045b8bb;  */

void FUN_0045b790(long param_1)

{
  func_0x0045c2cc();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 0045b8bc; end: 0045b8df;  */

void FUN_0045b8bc(long param_1)

{
  param_1 = param_1 + 8;
  func_0x0045c2cc();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 0045b8e0; end: 0045b94f;  */

void FUN_0045b8e0(void)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x0045c270();
  FUN_004591ac();
  lVar1 = *(long *)(unaff_x20 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x19 + 0x78) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0045c0e4();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x20 + 0x88);
  return;
}



/* Entry: 0045b950; end: 0045baaf;  */

void FUN_0045b950(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  FUN_0045a3bc();
  if ((**(byte **)(lVar2 + 200) & 1) == 0) {
    plVar1 = *(long **)(*(long *)(lVar2 + 8) + 0x18);
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2 + 0x10,lVar2 + 0x80,*(undefined8 *)(lVar2 + 0x90));
    FUN_0045a3bc(lVar2 + 0x98);
    func_0x0045c20c();
    plVar1 = *(long **)(lVar2 + 0xb8);
    func_0x0045c0c8();
    func_0x0045c160();
    func_0x0045c1a0();
    func_0x0045c1f8(*(undefined8 *)(*plVar1 + 0x18));
    func_0x0045c238();
    func_0x0045c170();
    func_0x0045c0b8();
    func_0x0045c2d8();
    func_0x0045c130();
    func_0x0045c1ac();
    func_0x0045c21c();
    func_0x0045c1e4();
    func_0x0045c230();
    func_0x0045c170();
    func_0x0045c0b8();
    func_0x0045c290();
    func_0x0045c150();
    func_0x0045c194();
    func_0x0045c21c();
    func_0x0045c1e4();
    func_0x0045c228();
    func_0x0045c170();
    plVar1 = *(long **)(lVar2 + 0xb8);
    func_0x0045c0b8();
    func_0x0045c284();
    func_0x0045c140();
    func_0x0045c1b8();
    func_0x0045c1e4(*(undefined8 *)(*plVar1 + 0x28));
    func_0x0045c248();
    func_0x0045c170();
  }
  return;
}


