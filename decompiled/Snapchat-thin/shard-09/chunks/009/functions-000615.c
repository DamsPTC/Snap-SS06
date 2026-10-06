/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10730c354; end: 10730c35f;  */

undefined ** FUN_10730c354(void)

{
  return &PTR_DAT_11099f038;
}



/* Entry: 10730c360; end: 10730c3db;  */

long FUN_10730c360(long param_1)

{
  func_0x00010730c388(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_10730c3dc(param_1,0);
  return param_1;
}



/* Entry: 10730c3dc; end: 10730c3f3;  */

void FUN_10730c3dc(long *param_1)

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



/* Entry: 10730c3f4; end: 10730c49f;  */

void FUN_10730c3f4(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long *plVar3;
  long *extraout_x9;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar3 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar7 = (long *)param_1[1];
  if (param_2 <= plVar7) {
    if (param_2 < plVar7) {
      func_0x00010730cb70((float)(ulong)param_1[3],(int)param_1[4]);
      if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x00010730c8f0();
      }
      if (param_2 <= plVar3) {
        param_2 = plVar3;
      }
      if (param_2 < plVar7) goto LAB_10730c43c;
    }
    return;
  }
LAB_10730c43c:
  if (param_2 == (long *)0x0) {
    FUN_10730c598(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_10730c5b0(plVar3);
    FUN_10730c598(param_1,plVar3);
    plVar3 = (long *)0x0;
    param_1[1] = (long)param_2;
    lVar2 = *param_1;
    while (param_2 != plVar3) {
      func_0x00010730cb34();
      lVar2 = extraout_x8;
      plVar3 = extraout_x9;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      plVar7 = (long *)plVar3[1];
      uVar4 = (long)param_2 - 1;
      uVar1 = 0;
      if (param_2 != (long *)0x0) {
        uVar1 = (ulong)plVar7 / (ulong)param_2;
      }
      plVar5 = plVar7;
      if (param_2 <= plVar7) {
        plVar5 = (long *)((long)plVar7 - uVar1 * (long)param_2);
      }
      if (((ulong)param_2 & uVar4) == 0) {
        plVar5 = (long *)((ulong)plVar7 & uVar4);
      }
      *(long **)(lVar2 + (long)plVar5 * 8) = param_1 + 2;
      while (plVar7 = plVar3, plVar3 = (long *)*plVar7, plVar3 != (long *)0x0) {
        plVar6 = (long *)plVar3[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar4);
        }
        else if (param_2 <= plVar6) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)param_2;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
        }
        if (plVar6 != plVar5) {
          if (*(long *)(lVar2 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar6 * 8) = plVar7;
            plVar5 = plVar6;
          }
          else {
            *plVar7 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar2 + (long)plVar6 * 8);
            **(long **)(lVar2 + (long)plVar6 * 8) = (long)plVar3;
            plVar3 = plVar7;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10730c4a0; end: 10730c597;  */

void FUN_10730c4a0(long *param_1,ulong param_2)

{
  long lVar1;
  long extraout_x8;
  ulong uVar2;
  ulong extraout_x9;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_10730c598(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_10730c5b0(plVar3);
    FUN_10730c598(param_1,plVar3);
    uVar2 = 0;
    param_1[1] = param_2;
    lVar1 = *param_1;
    while (param_2 != uVar2) {
      func_0x00010730cb34();
      lVar1 = extraout_x8;
      uVar2 = extraout_x9;
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



/* Entry: 10730c598; end: 10730c5af;  */

void FUN_10730c598(long *param_1,long param_2)

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



/* Entry: 10730c5b0; end: 10730c5cb;  */

long FUN_10730c5b0(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  FUN_10730c5f0();
  return param_1;
}



/* Entry: 10730c5cc; end: 10730c5ef;  */

undefined8 FUN_10730c5cc(undefined8 param_1)

{
  FUN_10730c5f0(param_1,0);
  return param_1;
}



/* Entry: 10730c5f0; end: 10730c607;  */

void FUN_10730c5f0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10730c608; end: 10730c673;  */

void FUN_10730c608(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10730c674; end: 10730c687;  */

void FUN_10730c674(void)

{
  func_0x00010730c64c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10730c688; end: 10730c6bb;  */

void FUN_10730c688(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010730ca38();
  func_0x00010730c9e4(&PTR_SUB_11099f058);
  if (extraout_x8 != 0) {
    do {
      func_0x00010730ca28();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10730c6bc; end: 10730c70f;  */

void FUN_10730c6bc(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_SUB_11099f058;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010730ca28(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10730c710; end: 10730c737;  */

void FUN_10730c710(undefined8 param_1)

{
  func_0x00010730cb4c();
  func_0x00010730ca74(param_1,&PTR_DAT_11099f0b8);
  func_0x00010730c9c0();
  return;
}



/* Entry: 10730c738; end: 10730c757;  */

undefined ** FUN_10730c738(void)

{
  return &PTR_DAT_11099f0b8;
}



/* Entry: 10730c758; end: 10730c7bb;  */

void FUN_10730c758(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_90;
  undefined1 auStack_88 [88];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_3;
  uStack_28 = param_4;
  FUN_10730b1d0(auStack_88,param_5);
  FUN_10730c7bc(&uStack_90,param_2,&uStack_30,auStack_88);
  *param_1 = uStack_90;
  func_0x00010730cbdc();
  return;
}



/* Entry: 10730c7bc; end: 10730c837;  */

void FUN_10730c7bc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [88];
  
  uVar3 = 0x78;
  __Znwm();
  uVar1 = *param_3;
  uVar2 = param_3[1];
  FUN_10730b1d0(auStack_98,param_4);
  FUN_10730c838(uVar3,param_2,uVar1,uVar2,auStack_98);
  *param_1 = uVar3;
  func_0x00010730cbdc();
  return;
}



/* Entry: 10730c838; end: 10730c86f;  */

undefined8 *
FUN_10730c838(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  *param_1 = &PTR_FUN_11099f0d8;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  FUN_10730b1d0(param_1 + 4,param_5);
  return param_1;
}



/* Entry: 10730c870; end: 10730c873;  */

undefined8 * FUN_10730c870(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099f0d8;
  FUN_1073065dc(param_1 + 4);
  return param_1;
}



/* Entry: 10730c874; end: 10730c887;  */

void FUN_10730c874(void)

{
  FUN_10730c8ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10730c888; end: 10730c8ab;  */

void FUN_10730c888(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x00010730c8a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1 + 0x20);
  return;
}



/* Entry: 10730c8ac; end: 10730c8d7;  */

undefined8 * FUN_10730c8ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099f0d8;
  FUN_1073065dc(param_1 + 4);
  return param_1;
}



/* Entry: 10730c8d8; end: 10730ccd3;  */

void FUN_10730c8d8(long *param_1,long param_2)

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



/* Entry: 10730ccd4; end: 10730ccf7;  */

void FUN_10730ccd4(void)

{
  FUN_10730bc90();
  return;
}



/* Entry: 10730ccf8; end: 10730cd57;  */

undefined8 FUN_10730ccf8(void)

{
  int iVar1;
  
  if ((bRam00000001138220b8 & 1) == 0) {
    iVar1 = 0x138220b8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ppuRam0000000113822098 = &PTR_FUN_11099f2e0;
      uRam00000001138220b0 = 0x113822098;
      ___cxa_guard_release(0x1138220b8);
    }
  }
  return 0x113822098;
}



/* Entry: 10730cd58; end: 10730d04f;  */

undefined8 *
FUN_10730cd58(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             long *param_5)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  long lVar8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined1 auStack_200 [32];
  undefined1 uStack_1e0;
  undefined1 uStack_1c8;
  undefined1 uStack_1c0;
  undefined1 uStack_1a8;
  undefined1 uStack_1a0;
  undefined1 uStack_168;
  undefined1 uStack_160;
  undefined1 uStack_15c;
  undefined1 auStack_158 [24];
  undefined8 *puStack_140;
  undefined1 auStack_138 [208];
  undefined8 uStack_68;
  
  puVar6 = &uStack_260;
  puVar2 = param_1;
  func_0x0001073114e8();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_11099f168;
  lVar8 = param_2[1];
  uVar5 = *param_2;
  puVar2[4] = param_2[1];
  puVar2[3] = uVar5;
  uStack_68 = extraout_x8;
  if (lVar8 != 0) {
    do {
      func_0x0001073115e0();
    } while (extraout_w10 != 0);
  }
  lVar8 = param_3[1];
  uVar5 = *param_3;
  param_1[6] = param_3[1];
  param_1[5] = uVar5;
  if (lVar8 != 0) {
    do {
      func_0x0001073115e0();
    } while (extraout_w10_00 != 0);
  }
  lVar8 = param_4[1];
  uVar5 = *param_4;
  param_1[8] = param_4[1];
  param_1[7] = uVar5;
  if (lVar8 != 0) {
    do {
      func_0x0001073115e0();
    } while (extraout_w10_01 != 0);
  }
  puVar1 = param_1 + 9;
  plVar3 = (long *)param_5[3];
  if (plVar3 != (long *)0x0) {
    in_ZR = plVar3 == param_5;
    if ((bool)in_ZR) {
      param_1[0xc] = puVar1;
      (**(code **)(*(long *)param_5[3] + 0x18))((long *)param_5[3],puVar1);
      goto LAB_10730ce3c;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  param_1[0xc] = plVar3;
LAB_10730ce3c:
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  puVar7 = (undefined1 *)0x0;
  func_0x0001073af27c(&uStack_230,0);
  param_1[0x18] = uStack_228;
  param_1[0x17] = uStack_230;
  uStack_230 = 0;
  uStack_228 = 0;
  puVar4 = &uStack_230;
  func_0x00010724b8b8();
  FUN_10726ed14(param_1 + 0x19);
  param_1[0x1b] = param_1;
  if (param_1[5] != 0) {
    uVar5 = param_1[0xc];
    FUN_10730ee0c();
    FUN_10730e04c(&uStack_230,param_1 + 0x19);
    plVar3 = (long *)param_1[0x17];
    puStack_218 = param_1;
    uStack_210 = uVar5;
    FUN_10730d050(&uStack_260,&uStack_230);
    puStack_140 = (undefined8 *)0x0;
    func_0x0001073115b0();
    *puVar6 = &PTR_FUN_11099f370;
    puVar6[2] = uStack_258;
    puVar6[1] = uStack_260;
    uStack_260 = 0;
    uStack_258 = 0;
    puVar6[3] = uStack_250;
    puVar6[5] = uStack_240;
    puVar6[4] = uStack_248;
    puStack_140 = puVar6;
    func_0x000105c3d6a8(auStack_200,&UNK_10f409fb4);
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_15c = 0;
    FUN_107273dcc(auStack_138,auStack_158,auStack_200);
    puVar7 = auStack_138;
    (**(code **)(*plVar3 + 0x18))(plVar3);
    FUN_107273efc(auStack_138);
    func_0x000107273f24(auStack_200);
    func_0x0001006393ec(auStack_158);
    func_0x0001073115b8();
    puVar4 = &uStack_230;
    func_0x00010725b1d4();
  }
  func_0x000107311498(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_107273efc(auStack_138);
    func_0x000107273f24(auStack_200);
    func_0x0001006393ec(auStack_158);
    func_0x0001073115b8();
    func_0x00010725b1d4(&uStack_230);
    func_0x00010730edd8(param_1 + 0x19);
    func_0x00010724b8b8(param_1 + 0x17);
    func_0x00010730ed48(param_1 + 0x12);
    func_0x00010730ecb8(param_1 + 0xd);
    func_0x00010730ec84(puVar1);
    func_0x00010726eedc(param_1 + 7);
    func_0x0001072ac970(param_1 + 5);
    func_0x00010725b6e0(puVar2 + 3);
    FUN_1072db930(puVar2 + 1);
    __Unwind_Resume();
    FUN_10730e09c();
    uVar5 = *(undefined8 *)(puVar7 + 0x18);
    puVar4[4] = *(undefined8 *)(puVar7 + 0x20);
    puVar4[3] = uVar5;
    return puVar4;
  }
  return param_1;
}



/* Entry: 10730d050; end: 10730d0e7;  */

void FUN_10730d050(long param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_10730e09c();
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 10730d0e8; end: 10730d0eb;  */

undefined8 * FUN_10730d0e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099f168;
  func_0x00010730edd8(param_1 + 0x19);
  func_0x00010724b8b8(param_1 + 0x17);
  func_0x00010730ed48(param_1 + 0x12);
  func_0x00010730ecb8(param_1 + 0xd);
  func_0x00010730ec84(param_1 + 9);
  func_0x00010726eedc(param_1 + 7);
  func_0x0001072ac970(param_1 + 5);
  func_0x00010725b6e0(param_1 + 3);
  FUN_1072db930(param_1 + 1);
  return param_1;
}



/* Entry: 10730d0ec; end: 10730d0ff;  */

void FUN_10730d0ec(void)

{
  func_0x00010730d074();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10730d100; end: 10730da43;  */

void FUN_10730d100(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  ulong extraout_x8;
  long extraout_x8_00;
  long *plVar6;
  long lVar7;
  ulong extraout_x9;
  ulong extraout_x9_00;
  long *extraout_x10;
  ulong uVar8;
  ulong uVar9;
  ulong extraout_x11;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong unaff_x26;
  long *plVar19;
  long *plVar20;
  long lStack_1d8;
  undefined1 auStack_1d0 [104];
  undefined8 uStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  long **pplStack_150;
  long **pplStack_148;
  ulong auStack_140 [4];
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined8 uStack_ff;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 auStack_c0 [24];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  long *plStack_90;
  long lStack_88;
  long *aplStack_70 [2];
  
  uStack_a8 = param_2;
  uStack_a0 = param_3;
  func_0x000100060b18(auStack_c0,&uStack_a8);
  FUN_10730e0c4(&plStack_158,param_4);
  uStack_f0 = *(undefined4 *)(param_4 + 0x38);
  uStack_ec = CONCAT31(uStack_ec._1_3_,*(undefined1 *)(param_4 + 0x3c));
  uStack_c8 = 0;
  lStack_e0 = 0;
  lStack_d8 = 0;
  lStack_e8 = 0;
  uStack_d0 = 0;
  uVar17 = param_1 + 0x80;
  func_0x000100102e7c(uVar17,auStack_c0);
  uVar16 = *(ulong *)(param_1 + 0x70);
  if (uVar16 != 0) {
    uVar14 = uVar16 - 1;
    if ((uVar16 & uVar14) == 0) {
      unaff_x26 = uVar14 & uVar17;
    }
    else {
      unaff_x26 = uVar17;
      if (uVar16 <= uVar17) {
        uVar5 = 0;
        if (uVar16 != 0) {
          uVar5 = uVar17 / uVar16;
        }
        unaff_x26 = uVar17 - uVar5 * uVar16;
      }
    }
    plVar12 = *(long **)(*(long *)(param_1 + 0x68) + unaff_x26 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_10730d20c;
          uVar5 = plVar12[1];
          if (uVar5 != uVar17) break;
          plVar15 = plVar12 + 2;
          func_0x0001000e107c(plVar15,auStack_c0);
          if (((ulong)plVar15 & 1) != 0) {
            FUN_107310c44(plVar12 + 5,&plStack_158);
            plVar15 = plVar12 + 0x13;
            plVar12[0xd] = lStack_118;
            plVar12[0xc] = lStack_120;
            plVar12[0xf] = CONCAT71(uStack_107,uStack_108);
            plVar12[0xe] = lStack_110;
            *(undefined8 *)((long)plVar12 + 0x81) = uStack_ff;
            *(ulong *)((long)plVar12 + 0x79) = CONCAT17(uStack_100,uStack_107);
            *(undefined4 *)(plVar12 + 0x12) = uStack_f0;
            *(undefined1 *)((long)plVar12 + 0x94) = (undefined1)uStack_ec;
            if (*plVar15 != 0) {
              func_0x00010730e158(plVar15);
              __ZdlPv(*plVar15);
              *plVar15 = 0;
              plVar12[0x14] = 0;
              plVar12[0x15] = 0;
            }
            lVar7 = lStack_d8;
            plVar12[0x14] = lStack_e0;
            plVar12[0x13] = lStack_e8;
            lStack_e0 = 0;
            lStack_d8 = 0;
            lStack_e8 = 0;
            plVar12[0x15] = lVar7;
            plVar12[0x16] = CONCAT71(uStack_cf,uStack_d0);
            *(undefined1 *)(plVar12 + 0x17) = uStack_c8;
            goto LAB_10730d548;
          }
        }
        if ((uVar16 & uVar14) == 0) {
          uVar5 = uVar5 & uVar14;
        }
        else if (uVar16 <= uVar5) {
          uVar11 = 0;
          if (uVar16 != 0) {
            uVar11 = uVar5 / uVar16;
          }
          uVar5 = uVar5 - uVar11 * uVar16;
        }
      } while (uVar5 == unaff_x26);
    }
  }
LAB_10730d20c:
  plVar12 = (long *)0xc0;
  __Znwm();
  plVar15 = (long *)(param_1 + 0x78);
  lStack_88 = 0;
  *plVar12 = 0;
  plVar12[1] = uVar17;
  plStack_98 = plVar12;
  plStack_90 = plVar15;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar12 + 2,auStack_c0);
  FUN_107310b20(plVar12 + 5,&plStack_158);
  plVar12[0xd] = lStack_118;
  plVar12[0xc] = lStack_120;
  plVar12[0xf] = CONCAT71(uStack_107,uStack_108);
  plVar12[0xe] = lStack_110;
  *(undefined8 *)((long)plVar12 + 0x81) = uStack_ff;
  *(ulong *)((long)plVar12 + 0x79) = CONCAT17(uStack_100,uStack_107);
  plVar12[0x12] = CONCAT44(uStack_ec,uStack_f0);
  plVar12[0x14] = lStack_e0;
  plVar12[0x13] = lStack_e8;
  plVar12[0x15] = lStack_d8;
  lStack_e0 = 0;
  lStack_d8 = 0;
  lStack_e8 = 0;
  plVar12[0x17] = CONCAT71(uStack_c7,uStack_c8);
  plVar12[0x16] = CONCAT71(uStack_cf,uStack_d0);
  lStack_88 = CONCAT71(lStack_88._1_7_,1);
  if ((uVar16 != 0) &&
     ((float)(*(long *)(param_1 + 0x80) + 1) <= *(float *)(param_1 + 0x88) * (float)uVar16))
  goto LAB_10730d4d0;
  bVar2 = 2 < uVar16;
  bVar3 = uVar16 == 3;
  func_0x000107311790(uVar16 << 1);
  uVar14 = extraout_x8;
  if (!bVar2 || bVar3) {
    uVar14 = extraout_x9;
  }
  if (uVar14 - 1 == 0) {
    uVar14 = 2;
  }
  else if ((uVar14 & uVar14 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar16 = *(ulong *)(param_1 + 0x70);
  if (uVar16 < uVar14) {
LAB_10730d2f8:
    if (uVar14 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10730d994);
      (*pcVar1)();
    }
    lVar7 = uVar14 << 3;
    __Znwm(lVar7);
    FUN_107310bec(param_1 + 0x68,lVar7);
    *(ulong *)(param_1 + 0x70) = uVar14;
    lVar7 = *(long *)(param_1 + 0x68);
    for (uVar16 = 0; uVar14 != uVar16; uVar16 = uVar16 + 1) {
      *(undefined8 *)(lVar7 + uVar16 * 8) = 0;
    }
    plVar13 = (long *)*plVar15;
    uVar16 = uVar14;
    if (plVar13 != (long *)0x0) {
      uVar8 = plVar13[1];
      uVar11 = uVar14 - 1;
      uVar5 = 0;
      if (uVar14 != 0) {
        uVar5 = uVar8 / uVar14;
      }
      uVar9 = uVar8;
      if (uVar14 <= uVar8) {
        uVar9 = uVar8 - uVar5 * uVar14;
      }
      if ((uVar14 & uVar11) == 0) {
        uVar9 = uVar8 & uVar11;
      }
      *(long **)(lVar7 + uVar9 * 8) = plVar15;
      while (plVar4 = plVar13, plVar13 = (long *)*plVar4, plVar13 != (long *)0x0) {
        uVar5 = plVar13[1];
        if ((uVar14 & uVar11) == 0) {
          uVar5 = uVar5 & uVar11;
        }
        else if (uVar14 <= uVar5) {
          uVar8 = 0;
          if (uVar14 != 0) {
            uVar8 = uVar5 / uVar14;
          }
          uVar5 = uVar5 - uVar8 * uVar14;
        }
        if (uVar5 != uVar9) {
          if (*(long *)(lVar7 + uVar5 * 8) == 0) {
            *(long **)(lVar7 + uVar5 * 8) = plVar4;
            uVar9 = uVar5;
          }
          else {
            func_0x000107311640();
            lVar7 = extraout_x8_00;
            uVar11 = extraout_x9_00;
            plVar13 = extraout_x10;
            uVar9 = extraout_x11;
          }
        }
      }
    }
  }
  else if (uVar14 < uVar16) {
    uVar5 = (ulong)((float)*(ulong *)(param_1 + 0x80) / *(float *)(param_1 + 0x88));
    if ((uVar16 < 3) || ((uVar16 & uVar16 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x000107311620();
    }
    if (uVar14 <= uVar5) {
      uVar14 = uVar5;
    }
    if (uVar14 < uVar16) {
      if (uVar14 != 0) goto LAB_10730d2f8;
      FUN_107310bec(param_1 + 0x68,0);
      *(undefined8 *)(param_1 + 0x70) = 0;
      uVar16 = 0;
    }
    else {
      uVar16 = *(ulong *)(param_1 + 0x70);
    }
  }
  if ((uVar16 & uVar16 - 1) == 0) {
    unaff_x26 = uVar16 - 1 & uVar17;
  }
  else {
    unaff_x26 = uVar17;
    if (uVar16 <= uVar17) {
      uVar14 = 0;
      if (uVar16 != 0) {
        uVar14 = uVar17 / uVar16;
      }
      unaff_x26 = uVar17 - uVar14 * uVar16;
    }
  }
LAB_10730d4d0:
  lVar7 = *(long *)(param_1 + 0x68);
  plVar13 = *(long **)(lVar7 + unaff_x26 * 8);
  if (plVar13 == (long *)0x0) {
    *plVar12 = *plVar15;
    *plVar15 = (long)plVar12;
    *(long **)(lVar7 + unaff_x26 * 8) = plVar15;
    if (*plVar12 != 0) {
      uVar17 = *(ulong *)(*plVar12 + 8);
      if ((uVar16 & uVar16 - 1) == 0) {
        uVar17 = uVar17 & uVar16 - 1;
      }
      else if (uVar16 <= uVar17) {
        uVar14 = 0;
        if (uVar16 != 0) {
          uVar14 = uVar17 / uVar16;
        }
        uVar17 = uVar17 - uVar14 * uVar16;
      }
      *(long **)(lVar7 + uVar17 * 8) = plVar12;
    }
  }
  else {
    *plVar12 = *plVar13;
    *plVar13 = (long)plVar12;
  }
  plStack_98 = (long *)0x0;
  *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 1;
  FUN_107310c04(&plStack_98);
LAB_10730d548:
  func_0x00010730e0f8(&plStack_158);
  plVar15 = *(long **)(param_1 + 0x98);
  if ((plVar15 != (long *)0x0) && (plVar13 = (long *)(param_1 + 0xa8), *plVar13 != 0)) {
    plVar4 = plVar13;
    func_0x000100102e7c(plVar13,auStack_c0);
    uVar17 = (long)plVar15 - 1;
    if (((ulong)plVar15 & uVar17) == 0) {
      plVar19 = (long *)((ulong)plVar4 & uVar17);
    }
    else {
      plVar19 = plVar4;
      if (plVar15 <= plVar4) {
        uVar16 = 0;
        if (plVar15 != (long *)0x0) {
          uVar16 = (ulong)plVar4 / (ulong)plVar15;
        }
        plVar19 = (long *)((long)plVar4 - uVar16 * (long)plVar15);
      }
    }
    plVar20 = *(long **)(*(long *)(param_1 + 0x90) + (long)plVar19 * 8);
    if (plVar20 != (long *)0x0) {
      do {
        while( true ) {
          plVar20 = (long *)*plVar20;
          if (plVar20 == (long *)0x0) goto LAB_10730d87c;
          plVar6 = (long *)plVar20[1];
          if (plVar6 != plVar4) break;
          plVar6 = plVar20 + 2;
          func_0x0001000e107c(plVar6,auStack_c0);
          if ((int)plVar6 != 0) {
            lVar7 = plVar20[5];
            lVar10 = plVar20[6];
            lVar18 = lVar10 - lVar7;
            if (0 < lVar18 >> 5) {
              plVar19 = plVar12 + 0x13;
              plVar15 = (long *)plVar12[0x14];
              plVar4 = plVar12 + 0x15;
              if (*plVar4 - (long)plVar15 < lVar18) {
                plVar6 = plVar19;
                FUN_10730e18c(plVar19,(lVar18 >> 5) + ((long)plVar15 - *plVar19 >> 5));
                FUN_10730e2b0(&plStack_158,plVar6,(long)plVar15 - *plVar19 >> 5,plVar4);
                lVar10 = (long)pplStack_148 + lVar18;
                for (; lVar18 != 0; lVar18 = lVar18 + -0x20) {
                  FUN_10730e1cc(pplStack_148,lVar7);
                  pplStack_148 = (long **)((long)pplStack_148 + 0x20);
                  lVar7 = lVar7 + 0x20;
                }
                pplStack_148 = (long **)lVar10;
                FUN_10730e338(plVar4,plVar15,plVar12[0x14],lVar10);
                pplStack_148 = (long **)((long)pplStack_148 + (plVar12[0x14] - (long)plVar15));
                plVar12[0x14] = (long)plVar15;
                lVar7 = (long)pplStack_150 + (plVar12[0x13] - (long)plVar15);
                FUN_10730e338(plVar4,plVar12[0x13],plVar15,lVar7);
                plStack_158 = (long *)plVar12[0x13];
                plVar12[0x13] = lVar7;
                uVar17 = plVar12[0x15];
                plVar12[0x15] = auStack_140[0];
                plVar12[0x14] = (long)pplStack_148;
                pplStack_150 = (long **)plStack_158;
                pplStack_148 = (long **)plStack_158;
                auStack_140[0] = uVar17;
                FUN_10730e3c4(&plStack_158);
              }
              else {
                pplStack_150 = aplStack_70;
                pplStack_148 = &plStack_98;
                auStack_140[0] = auStack_140[0] & 0xffffffffffffff00;
                plStack_158 = plVar4;
                aplStack_70[0] = plVar15;
                for (; plStack_98 = plVar15, lVar7 != lVar10; lVar7 = lVar7 + 0x20) {
                  FUN_10730e1cc(plVar15,lVar7);
                  plVar15 = plStack_98 + 4;
                }
                auStack_140[0] = CONCAT71(auStack_140[0]._1_7_,1);
                func_0x00010730e214(&plStack_158);
                plVar12[0x14] = (long)plVar15;
              }
            }
            uVar16 = *(ulong *)(param_1 + 0x98);
            lVar7 = *plVar20;
            uVar17 = plVar20[1];
            uVar14 = uVar16 - 1;
            if ((uVar16 & uVar14) == 0) {
              uVar17 = uVar14 & uVar17;
            }
            else if (uVar16 <= uVar17) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar5 * uVar16;
            }
            lVar10 = *(long *)(param_1 + 0x90);
            plVar15 = *(long **)(lVar10 + uVar17 * 8);
            do {
              plVar4 = plVar15;
              plVar15 = (long *)*plVar4;
            } while ((long *)*plVar4 != plVar20);
            pplStack_150 = (long **)(param_1 + 0xa0);
            if ((long **)plVar4 == pplStack_150) {
LAB_10730d7d8:
              if (lVar7 == 0) {
LAB_10730d80c:
                *(undefined8 *)(lVar10 + uVar17 * 8) = 0;
                lVar7 = *plVar20;
                goto LAB_10730d814;
              }
              uVar5 = *(ulong *)(lVar7 + 8);
              if ((uVar16 & uVar14) == 0) {
                uVar11 = uVar5 & uVar14;
              }
              else {
                uVar11 = uVar5;
                if (uVar16 <= uVar5) {
                  uVar11 = 0;
                  if (uVar16 != 0) {
                    uVar11 = uVar5 / uVar16;
                  }
                  uVar11 = uVar5 - uVar11 * uVar16;
                }
              }
              if (uVar11 != uVar17) goto LAB_10730d80c;
LAB_10730d81c:
              if ((uVar16 & uVar14) == 0) {
                uVar5 = uVar5 & uVar14;
              }
              else if (uVar16 <= uVar5) {
                uVar14 = 0;
                if (uVar16 != 0) {
                  uVar14 = uVar5 / uVar16;
                }
                uVar5 = uVar5 - uVar14 * uVar16;
              }
              if (uVar5 != uVar17) {
                *(long **)(lVar10 + uVar5 * 8) = plVar4;
                lVar7 = *plVar20;
              }
            }
            else {
              uVar5 = plVar4[1];
              if ((uVar16 & uVar14) == 0) {
                uVar5 = uVar5 & uVar14;
              }
              else if (uVar16 <= uVar5) {
                uVar11 = 0;
                if (uVar16 != 0) {
                  uVar11 = uVar5 / uVar16;
                }
                uVar5 = uVar5 - uVar11 * uVar16;
              }
              if (uVar5 != uVar17) goto LAB_10730d7d8;
LAB_10730d814:
              if (lVar7 != 0) {
                uVar5 = *(ulong *)(lVar7 + 8);
                goto LAB_10730d81c;
              }
            }
            *plVar4 = lVar7;
            *plVar20 = 0;
            *plVar13 = *plVar13 + -1;
            pplStack_148 = (long **)0x1;
            plStack_158 = plVar20;
            func_0x000107310e50(&plStack_158);
            goto LAB_10730d87c;
          }
        }
        if (((ulong)plVar15 & uVar17) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar17);
        }
        else if (plVar15 <= plVar6) {
          uVar16 = 0;
          if (plVar15 != (long *)0x0) {
            uVar16 = (ulong)plVar6 / (ulong)plVar15;
          }
          plVar6 = (long *)((long)plVar6 - uVar16 * (long)plVar15);
        }
      } while (plVar6 == plVar19);
    }
  }
LAB_10730d87c:
  if (*(char *)(param_4 + 0x50) == '\x01') {
    lStack_1d8 = param_1;
    FUN_10730e0c4(auStack_1d0,param_4);
    uStack_160 = uStack_a0;
    uStack_168 = uStack_a8;
    FUN_10730e04c(&plStack_158,param_1 + 200);
    FUN_10730e7c4(auStack_140,&lStack_1d8);
    uVar17 = plVar12[0x14];
    if (uVar17 < (ulong)plVar12[0x15]) {
      FUN_10730e42c(uVar17,&plStack_158);
      lVar7 = uVar17 + 0x20;
      plVar12[0x14] = lVar7;
    }
    else {
      plVar15 = plVar12 + 0x13;
      FUN_10730e18c(plVar15,((long)(uVar17 - plVar12[0x13]) >> 5) + 1);
      FUN_10730e2b0(&plStack_98,plVar15,plVar12[0x14] - plVar12[0x13] >> 5,plVar12 + 0x15);
      FUN_10730e42c(lStack_88,&plStack_158);
      lStack_88 = lStack_88 + 0x20;
      FUN_10730ea58(plVar12 + 0x13,&plStack_98);
      lVar7 = plVar12[0x14];
      FUN_10730e3c4(&plStack_98);
    }
    plVar12[0x14] = lVar7;
    FUN_10730da44(&plStack_158);
    FUN_10727fc1c(auStack_1d0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
  return;
}



/* Entry: 10730da44; end: 10730da6b;  */

undefined8 FUN_10730da44(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_10727fc1c(param_1 + 0x20);
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 10730da6c; end: 10730da7b;  */

bool FUN_10730da6c(long param_1)

{
  return *(long *)(param_1 + 0x80) != 0;
}



/* Entry: 10730da7c; end: 10730dac3;  */

long FUN_10730da7c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x21;
  
  func_0x00010731168c();
  param_1 = param_1 + 0x68;
  FUN_107310e90();
  if (param_1 == 0) {
    param_1 = unaff_x21 + 0x90;
    FUN_10730dac4();
  }
  else {
    param_1 = param_1 + 0x98;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10730eb08();
    lVar2 = uVar1 + 0x20;
  }
  else {
    lVar2 = param_1;
    FUN_10730eb3c();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x20;
}



/* Entry: 10730dac4; end: 10730daf7;  */

long FUN_10730dac4(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_107310f64(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x28;
}



/* Entry: 10730daf8; end: 10730df9f;  */

/* WARNING: Possible PIC construction at 0x00010730ded8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010730df98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010730df9c) */

undefined8 *** FUN_10730daf8(undefined8 ***param_1,undefined8 ***param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  undefined1 in_ZR;
  long ***ppplVar6;
  long ***ppplVar7;
  long ***ppplVar8;
  undefined8 *puVar9;
  undefined8 extraout_x8;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  ulong uVar12;
  undefined8 **ppuVar13;
  undefined8 ***pppuVar14;
  undefined8 **ppuVar15;
  undefined8 ***pppuVar16;
  undefined8 **ppuVar17;
  undefined8 **unaff_x20;
  undefined8 ***pppuVar18;
  undefined8 ***pppuVar19;
  long **pplStack_2c8;
  long *plStack_2c0;
  long **pplStack_2b8;
  undefined1 *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 **ppuStack_2a0;
  undefined8 **ppuStack_298;
  undefined8 uStack_290;
  undefined8 auStack_288 [3];
  undefined8 **ppuStack_270;
  undefined8 **ppuStack_268;
  undefined8 uStack_260;
  undefined1 auStack_258 [56];
  undefined1 uStack_220;
  undefined8 uStack_218;
  long **pplStack_210;
  long **pplStack_208;
  undefined1 uStack_200;
  undefined4 uStack_1ff;
  undefined3 uStack_1fb;
  undefined8 *puStack_1f8;
  undefined8 uStack_128;
  undefined1 auStack_108 [152];
  
  func_0x0001073114e8();
  if (param_1[0x10] == (undefined8 **)0x0) {
    func_0x000107311498(extraout_x8);
    if ((bool)in_ZR) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x000107283e00(&pplStack_210);
    FUN_10730dfa0(&ppuStack_2a0);
    uStack_2a8 = 0x10730df9c;
  }
  else {
    ppuStack_270 = (long **)0x0;
    ppuStack_268 = (long **)0x0;
    uStack_260 = 0;
    ppplVar7 = &ppuStack_270;
    func_0x0001000fc044();
    pppuVar2 = param_1 + 0xf;
    pppuVar19 = pppuVar2;
LAB_10730db5c:
    while (ppplVar6 = ppplVar7, pppuVar19 = (undefined8 ***)*pppuVar19,
          pppuVar19 != (undefined8 ***)0x0) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      if ((*(char *)(pppuVar19 + 0x17) != '\x01') || (((ulong)pppuVar19[0x11] & 1) == 0)) {
        ppplVar7 = ppplVar6;
        if (*(char *)((long)pppuVar19 + 0x94) == '\x01') {
          bVar1 = false;
          goto LAB_10730dbdc;
        }
        goto LAB_10730dbf8;
      }
      ppplVar7 = pppuVar19 + 0x16;
      FUN_10725d8e8();
      if (((ulong)pppuVar19[0x11] & 1) == 0) {
        func_0x000104bdc2c8();
LAB_10730df18:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10730df1c);
        (*pcVar5)();
      }
      lVar3 = ((long)ppplVar6 - (long)*ppplVar7) / 1000000;
      bVar1 = lVar3 < (long)pppuVar19[0x10];
      if ((*(byte *)((long)pppuVar19 + 0x94) & 1) != 0) goto LAB_10730dbdc;
      if ((long)pppuVar19[0x10] <= lVar3) goto LAB_10730dbf8;
    }
    pppuVar19 = (undefined8 ***)param_1[0xf];
    while (pppuVar19 != (undefined8 ***)0x0) {
      if (*(char *)((long)pppuVar19 + 0x94) == '\x01') {
        pppuVar16 = pppuVar19 + 0x12;
        FUN_10726a954();
        if (*(float *)pppuVar16 != 0.0) goto LAB_10730dd30;
        ppuVar11 = param_1[0xe];
        ppuVar10 = pppuVar19[1];
        uVar12 = (long)ppuVar11 - 1;
        if (((ulong)ppuVar11 & uVar12) == 0) {
          ppuVar10 = (undefined8 **)(uVar12 & (ulong)ppuVar10);
        }
        else if (ppuVar11 <= ppuVar10) {
          uVar4 = 0;
          if (ppuVar11 != (undefined8 **)0x0) {
            uVar4 = (ulong)ppuVar10 / (ulong)ppuVar11;
          }
          ppuVar10 = (undefined8 **)((long)ppuVar10 - uVar4 * (long)ppuVar11);
        }
        pppuVar18 = (undefined8 ***)*pppuVar19;
        ppuVar13 = param_1[0xd];
        pppuVar16 = (undefined8 ***)ppuVar13[(long)ppuVar10];
        do {
          pppuVar14 = pppuVar16;
          pppuVar16 = (undefined8 ***)*pppuVar14;
        } while ((undefined8 ***)*pppuVar14 != pppuVar19);
        pppuVar16 = pppuVar18;
        if (pppuVar14 == pppuVar2) {
LAB_10730dd90:
          if (pppuVar18 == (undefined8 ***)0x0) {
LAB_10730ddc8:
            ppuVar13[(long)ppuVar10] = (undefined8 *)0x0;
            pppuVar16 = (undefined8 ***)*pppuVar19;
            goto LAB_10730ddd0;
          }
          ppuVar15 = pppuVar18[1];
          if (((ulong)ppuVar11 & uVar12) == 0) {
            ppuVar17 = (undefined8 **)((ulong)ppuVar15 & uVar12);
          }
          else {
            ppuVar17 = ppuVar15;
            if (ppuVar11 <= ppuVar15) {
              uVar4 = 0;
              if (ppuVar11 != (undefined8 **)0x0) {
                uVar4 = (ulong)ppuVar15 / (ulong)ppuVar11;
              }
              ppuVar17 = (undefined8 **)((long)ppuVar15 - uVar4 * (long)ppuVar11);
            }
          }
          if (ppuVar17 != ppuVar10) goto LAB_10730ddc8;
LAB_10730ddd8:
          if (((ulong)ppuVar11 & uVar12) == 0) {
            ppuVar15 = (undefined8 **)((ulong)ppuVar15 & uVar12);
          }
          else if (ppuVar11 <= ppuVar15) {
            uVar12 = 0;
            if (ppuVar11 != (undefined8 **)0x0) {
              uVar12 = (ulong)ppuVar15 / (ulong)ppuVar11;
            }
            ppuVar15 = (undefined8 **)((long)ppuVar15 - uVar12 * (long)ppuVar11);
          }
          if (ppuVar15 != ppuVar10) {
            ppuVar13[(long)ppuVar15] = pppuVar14;
            pppuVar16 = (undefined8 ***)*pppuVar19;
          }
        }
        else {
          ppuVar15 = pppuVar14[1];
          if (((ulong)ppuVar11 & uVar12) == 0) {
            ppuVar15 = (undefined8 **)((ulong)ppuVar15 & uVar12);
          }
          else if (ppuVar11 <= ppuVar15) {
            uVar4 = 0;
            if (ppuVar11 != (undefined8 **)0x0) {
              uVar4 = (ulong)ppuVar15 / (ulong)ppuVar11;
            }
            ppuVar15 = (undefined8 **)((long)ppuVar15 - uVar4 * (long)ppuVar11);
          }
          if (ppuVar15 != ppuVar10) goto LAB_10730dd90;
LAB_10730ddd0:
          if (pppuVar16 != (undefined8 ***)0x0) {
            ppuVar15 = pppuVar16[1];
            goto LAB_10730ddd8;
          }
        }
        *pppuVar14 = pppuVar16;
        *pppuVar19 = (undefined8 **)0x0;
        param_1[0x10] = (undefined8 **)((long)param_1[0x10] + -1);
        uStack_200 = 1;
        uStack_1ff = 0;
        uStack_1fb = 0;
        pplStack_210 = (long **)pppuVar19;
        pplStack_208 = (long **)pppuVar2;
        FUN_107310c04(&pplStack_210);
        pppuVar19 = pppuVar18;
      }
      else {
LAB_10730dd30:
        pppuVar19 = (undefined8 ***)*pppuVar19;
      }
    }
    unaff_x20 = param_1[3];
    if ((unaff_x20 != (undefined8 **)0x0) && (ppuStack_270 != ppuStack_268)) {
      ppuStack_2a0 = ppuStack_270;
      ppuStack_298 = ppuStack_268;
      uStack_290 = uStack_260;
      ppuStack_268 = (long **)0x0;
      uStack_260 = 0;
      ppuStack_270 = (long **)0x0;
      puVar9 = auStack_288;
      func_0x000107277f30(puVar9,param_2);
      puStack_1f8 = (undefined8 *)0x0;
      func_0x0001073115b0();
      puVar9[2] = ppuStack_298;
      puVar9[1] = ppuStack_2a0;
      *puVar9 = &PTR_FUN_11099f650;
      puVar9[3] = uStack_290;
      ppuStack_2a0 = (undefined8 **)0x0;
      ppuStack_298 = (undefined8 **)0x0;
      uStack_290 = 0;
      func_0x000107277f30(puVar9 + 4,auStack_288);
      puStack_1f8 = puVar9;
      FUN_107292e94(unaff_x20,&pplStack_210);
      func_0x000107283e00(&pplStack_210);
      FUN_10730dfa0(&ppuStack_2a0);
    }
    uStack_2a8 = 0x10730dedc;
    param_1 = param_2;
  }
  pplStack_2c8 = (long **)&ppuStack_270;
  plStack_2c0 = (long *)unaff_x20;
  pplStack_2b8 = (long **)param_1;
  puStack_2b0 = &stack0xfffffffffffffff0;
  func_0x00010007e5dc(&pplStack_2c8);
  return &ppuStack_270;
LAB_10730dbdc:
  ppplVar7 = pppuVar19 + 0x12;
  FUN_10730ebcc();
  if (!(bool)(*(float *)ppplVar7 <= 0.0 | bVar1)) {
LAB_10730dbf8:
    ppplVar8 = pppuVar19 + 0x12;
    if (*(int *)(pppuVar19 + 0xb) != 0) {
      if (*(int *)(pppuVar19 + 0xb) == 1) {
        if (((ulong)pppuVar19[5] & 1) == 0) goto LAB_10730db5c;
      }
      else {
        func_0x000107751284(&pplStack_210);
        FUN_107295f10(auStack_108,param_2);
        auStack_258[0] = 0;
        uStack_220 = 0;
        uStack_218 = 0;
        pppuVar16 = pppuVar19 + 5;
        uStack_128 = param_3;
        FUN_107280464(pppuVar16,&pplStack_210,auStack_258,0);
        func_0x00010724b3d8(auStack_258);
        ppplVar7 = &pplStack_210;
        FUN_107267da8();
        if ((int)pppuVar16 == 0) goto LAB_10730db5c;
      }
      if (param_1[3] != (undefined8 **)0x0) {
        ppplVar7 = &ppuStack_270;
        func_0x000100206870(ppplVar7,pppuVar19 + 2);
        if (((ulong)pppuVar19[0x17] & 1) == 0) {
          *(undefined1 *)(pppuVar19 + 0x17) = 1;
        }
        pppuVar19[0x16] = ppplVar6;
      }
      ppuVar11 = pppuVar19[0x14];
      for (ppuVar10 = pppuVar19[0x13]; ppuVar10 != ppuVar11; ppuVar10 = ppuVar10 + 4) {
        ppplVar7 = (long ***)ppuVar10[3];
        if (ppplVar7 == (long ***)0x0) {
          func_0x000104bfeb48();
          goto LAB_10730df18;
        }
        func_0x0001073115d8((*ppplVar7)[6]);
      }
      if ((*(byte *)((long)pppuVar19 + 0x94) & 1) != 0) {
        FUN_10730ebcc();
        *(float *)ppplVar8 = *(float *)ppplVar8 + -1.0;
        ppplVar7 = ppplVar8;
      }
    }
  }
  goto LAB_10730db5c;
}



/* Entry: 10730dfa0; end: 10730e04b;  */

void FUN_10730dfa0(void)

{
  func_0x0001073117a4();
  FUN_10726b264();
  func_0x00010007e5dc(&stack0xffffffffffffffd8);
  return;
}



/* Entry: 10730e04c; end: 10730e09b;  */

void FUN_10730e04c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x0001073115e0();
    } while (extraout_w10 != 0);
  }
  uVar1 = param_2[2];
  param_1[1] = uVar3;
  *param_1 = uVar2;
  uStack_20 = 0;
  uStack_18 = 0;
  param_1[2] = uVar1;
  func_0x00010725b1d4(&uStack_20);
  func_0x0001073115b8();
  return;
}



/* Entry: 10730e09c; end: 10730e0c3;  */

void FUN_10730e09c(undefined8 *param_1,undefined8 *param_2)

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
      func_0x0001073115e0();
    } while (extraout_w10 != 0);
  }
  param_1[2] = param_2[2];
  return;
}



/* Entry: 10730e0c4; end: 10730e18b;  */

void FUN_10730e0c4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_10727fe7c();
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  uVar5 = *(undefined8 *)(param_2 + 0x51);
  *(undefined8 *)(param_1 + 0x59) = *(undefined8 *)(param_2 + 0x59);
  *(undefined8 *)(param_1 + 0x51) = uVar5;
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  return;
}



/* Entry: 10730e18c; end: 10730e1cb;  */

long * FUN_10730e18c(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 4);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x7ffffffffffffff;
    }
    return plVar1;
  }
  FUN_10730e2a4();
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    param_1[3] = 0;
  }
  else if (plVar1 == param_2) {
    func_0x0001073114c8();
    func_0x0001073115d8();
  }
  else {
    func_0x000107311518();
    param_1[3] = (long)plVar1;
  }
  return param_1;
}



/* Entry: 10730e1cc; end: 10730e257;  */

long FUN_10730e1cc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x0001073114c8();
    func_0x0001073115d8();
  }
  else {
    func_0x000107311518();
    *(long *)(param_1 + 0x18) = lVar1;
  }
  return param_1;
}



/* Entry: 10730e258; end: 10730e2a3;  */

long FUN_10730e258(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x0001073114c8();
    func_0x0001073115d8();
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 10730e2a4; end: 10730e2af;  */

long * FUN_10730e2a4(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x0001073116e4();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010730e2f8();
  }
  lVar1 = param_4 + param_3 * 0x20;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x20;
  return param_1;
}



/* Entry: 10730e2b0; end: 10730e31b;  */

long * FUN_10730e2b0(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010730e2f8();
  }
  lVar1 = param_4 + param_3 * 0x20;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x20;
  return param_1;
}



/* Entry: 10730e31c; end: 10730e337;  */

void FUN_10730e31c(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x20) {
    FUN_10730e258(param_4,uVar1);
    param_4 = lStack_48 + 0x20;
  }
  uStack_58 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    FUN_1072cb4dc(param_2);
  }
  func_0x00010730e214(&uStack_70);
  return;
}



/* Entry: 10730e338; end: 10730e3c3;  */

void FUN_10730e338(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x20) {
    FUN_10730e258(param_4,lVar1);
    param_4 = lStack_38 + 0x20;
  }
  uStack_48 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    FUN_1072cb4dc(param_2);
  }
  func_0x00010730e214(&uStack_60);
  return;
}



/* Entry: 10730e3c4; end: 10730e3ef;  */

long * FUN_10730e3c4(long *param_1)

{
  FUN_10730e3f0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10730e3f0; end: 10730e3f7;  */

void FUN_10730e3f0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107311560(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x20;
    FUN_1072cb4dc();
  }
  return;
}



/* Entry: 10730e3f8; end: 10730e42b;  */

void FUN_10730e3f8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107311560();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x20;
    FUN_1072cb4dc();
  }
  return;
}



/* Entry: 10730e42c; end: 10730e49f;  */

void FUN_10730e42c(void)

{
  undefined8 *puVar1;
  long unaff_x19;
  undefined1 auStack_b8 [152];
  
  func_0x000107311614();
  FUN_10730e4a0();
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  puVar1 = (undefined8 *)0xa0;
  __Znwm();
  *puVar1 = &PTR_FUN_11099f1e0;
  FUN_10730e4a0(puVar1 + 1,auStack_b8);
  *(undefined8 **)(unaff_x19 + 0x18) = puVar1;
  FUN_10730da44(auStack_b8);
  return;
}



/* Entry: 10730e4a0; end: 10730e4ef;  */

void FUN_10730e4a0(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107311670();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  FUN_10730e0c4(param_1 + 4,param_2 + 4);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x19 + 0x88) = uVar1;
  return;
}



/* Entry: 10730e4f0; end: 10730e51b;  */

undefined8 * FUN_10730e4f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099f1e0;
  FUN_10730da44(param_1 + 1);
  return param_1;
}



/* Entry: 10730e51c; end: 10730e52f;  */

void FUN_10730e51c(void)

{
  FUN_10730e4f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10730e530; end: 10730e567;  */

undefined8 FUN_10730e530(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xa0;
  __Znwm(0xa0);
  FUN_10730e770();
  return uVar1;
}



/* Entry: 10730e568; end: 10730e58b;  */

void FUN_10730e568(long param_1,undefined8 *param_2)

{
  long unaff_x20;
  
  func_0x000107311670(param_2,param_1 + 8);
  *param_2 = &PTR_FUN_11099f1e0;
  FUN_10730e09c(param_2 + 1);
  FUN_10730e7c4(param_2 + 4,unaff_x20 + 0x18);
  return;
}



/* Entry: 10730e58c; end: 10730e73b;  */

void FUN_10730e58c(long param_1)

{
  code *pcVar1;
  undefined1 in_ZR;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  long *plVar5;
  long lVar6;
  undefined1 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 auStack_b8 [32];
  undefined1 uStack_98;
  undefined1 auStack_90 [32];
  undefined1 uStack_70;
  undefined1 auStack_68 [24];
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  func_0x0001073114e8();
  uStack_48 = extraout_x8;
  func_0x0001073116d8();
  iVar2 = (int)param_1 + 8;
  func_0x00010730e85c();
  if (iVar2 != 0) {
    lVar6 = *(long *)(param_1 + 0x20);
    FUN_10730e8a4(param_1 + 0x68);
    in_ZR = *(char *)(param_1 + 0x70) == '\x01';
    if ((bool)in_ZR) {
      lVar3 = *(long *)(lVar6 + 0x60);
      FUN_10730ee0c();
      FUN_10730e8a4(param_1 + 0x68);
      if ((*(byte *)(param_1 + 0x70) & 1) == 0) goto LAB_10730e6f8;
      uVar9 = *(long *)(param_1 + 0x68) + lVar3;
      uVar8 = uVar9 & 0xffffffffffffff00;
      uVar9 = uVar9 & 0xff;
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
      uVar9 = 0;
      uVar8 = 0;
    }
    plVar5 = *(long **)(lVar6 + 0x28);
    puVar4 = &uStack_e0;
    func_0x000100060b18(puVar4,param_1 + 0x90);
    uStack_c8 = uVar8 | uVar9;
    puStack_50 = (undefined8 *)0x0;
    uStack_c0 = uVar7;
    func_0x0001073115b0();
    *puVar4 = &PTR_FUN_11099f250;
    puVar4[2] = uStack_d8;
    puVar4[1] = uStack_e0;
    puVar4[3] = uStack_d0;
    uVar9 = uStack_c8;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    puVar4[5] = CONCAT71(uStack_bf,uStack_c0);
    puVar4[4] = uVar9;
    auStack_90[0] = 0;
    uStack_70 = 0;
    auStack_b8[0] = 0;
    uStack_98 = 0;
    puStack_50 = puVar4;
    (**(code **)(*plVar5 + 0x10))(plVar5,auStack_68,auStack_90,auStack_b8,&UNK_10f409fd6,0xf,0);
    FUN_10730e9d0(auStack_b8);
    FUN_10730b1b0(auStack_90);
    func_0x00010730ea24(auStack_68);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_e0);
  }
  func_0x000107311668();
  func_0x000107311498(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_10730e6f8:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10730e700);
  (*pcVar1)();
}



/* Entry: 10730e73c; end: 10730e763;  */

void FUN_10730e73c(undefined8 param_1)

{
  func_0x000107311574();
  func_0x000107311558(param_1,&PTR_DAT_11099f2c0);
  func_0x0001073114b8();
  return;
}



/* Entry: 10730e764; end: 10730e76f;  */

undefined ** FUN_10730e764(void)

{
  return &PTR_DAT_11099f2c0;
}



/* Entry: 10730e770; end: 10730e7c3;  */

void FUN_10730e770(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x000107311670();
  *param_1 = &PTR_FUN_11099f1e0;
  FUN_10730e09c(param_1 + 1);
  FUN_10730e7c4(param_1 + 4,unaff_x20 + 0x18);
  return;
}



/* Entry: 10730e7c4; end: 10730e8a3;  */

void FUN_10730e7c4(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107311560();
  *param_1 = *param_2;
  FUN_10730e0c4(param_1 + 1,param_2 + 1);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x78) = *(undefined8 *)(unaff_x19 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x70) = uVar1;
  return;
}



/* Entry: 10730e8a4; end: 10730e8bb;  */

undefined8 * FUN_10730e8a4(undefined8 *param_1)

{
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  *param_1 = &PTR_FUN_11099f250;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10730e8bc; end: 10730e8e7;  */

undefined8 * FUN_10730e8bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099f250;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10730e8e8; end: 10730e8fb;  */

void FUN_10730e8e8(void)

{
  FUN_10730e8bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10730e8fc; end: 10730e92f;  */

undefined8 FUN_10730e8fc(undefined8 param_1)

{
  func_0x0001073115b0();
  FUN_10730e99c();
  return param_1;
}



/* Entry: 10730e930; end: 10730e967;  */

void FUN_10730e930(long param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107311560(param_2,param_1 + 8);
  *param_2 = &PTR_FUN_11099f250;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_2 + 1);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  return;
}



/* Entry: 10730e968; end: 10730e98f;  */

void FUN_10730e968(undefined8 param_1)

{
  func_0x000107311574();
  func_0x000107311558(param_1,&PTR_DAT_11099f2b0);
  func_0x0001073114b8();
  return;
}



/* Entry: 10730e990; end: 10730e99b;  */

undefined ** FUN_10730e990(void)

{
  return &PTR_DAT_11099f2b0;
}



/* Entry: 10730e99c; end: 10730e9cf;  */

void FUN_10730e99c(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107311560();
  *param_1 = &PTR_FUN_11099f250;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 1);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  return;
}



/* Entry: 10730e9d0; end: 10730e9ef;  */

void FUN_10730e9d0(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_10730e9f0();
  }
  return;
}



/* Entry: 10730e9f0; end: 10730ea57;  */

void FUN_10730e9f0(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x000107311548();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x0001073114dc(uVar1);
  return;
}



/* Entry: 10730ea58; end: 10730eacb;  */

void FUN_10730ea58(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x000107311560();
  lVar1 = *(long *)(param_2 + 8) + (*param_1 - param_1[1]);
  FUN_10730e338(param_1 + 2,*param_1,param_1[1],lVar1);
  unaff_x19[1] = lVar1;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10730eacc; end: 10730eb07;  */

long FUN_10730eacc(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10730eb08();
    lVar2 = uVar1 + 0x20;
  }
  else {
    lVar2 = param_1;
    FUN_10730eb3c();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x20;
}



/* Entry: 10730eb08; end: 10730eb3b;  */

void FUN_10730eb08(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_10730e1cc(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x20;
  return;
}



/* Entry: 10730eb3c; end: 10730ebcb;  */

long FUN_10730eb3c(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  func_0x000107311670();
  FUN_10730e18c();
  FUN_10730e2b0(auStack_48,param_1,unaff_x19[1] - *unaff_x19 >> 5,unaff_x19 + 2);
  FUN_10730e1cc(lStack_38);
  lStack_38 = lStack_38 + 0x20;
  FUN_10730ea58();
  lVar1 = unaff_x19[1];
  FUN_10730e3c4(auStack_48);
  return lVar1;
}



/* Entry: 10730ebcc; end: 10730ebe3;  */

void FUN_10730ebcc(long param_1)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  return;
}



/* Entry: 10730ebe4; end: 10730ebeb;  */

void FUN_10730ebe4(void)

{
  return;
}



/* Entry: 10730ebec; end: 10730ec0f;  */

void FUN_10730ebec(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_11099f2e0;
  return;
}



/* Entry: 10730ec10; end: 10730ec2f;  */

void FUN_10730ec10(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_11099f2e0;
  return;
}



/* Entry: 10730ec30; end: 10730ec4f;  */

long FUN_10730ec30(long param_1)

{
  __ZNSt3__16chrono12system_clock3nowEv();
  return param_1 / 1000000;
}



/* Entry: 10730ec50; end: 10730ec77;  */

void FUN_10730ec50(undefined8 param_1)

{
  func_0x000107311574();
  func_0x000107311558(param_1,&PTR_DAT_11099f350);
  func_0x0001073114b8();
  return;
}



/* Entry: 10730ec78; end: 10730ec83;  */

undefined ** FUN_10730ec78(void)

{
  return &PTR_DAT_11099f350;
}



/* Entry: 10730ec84; end: 10730ee0b;  */

void FUN_10730ec84(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x000107311548();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x0001073114dc(uVar1);
  return;
}



/* Entry: 10730ee0c; end: 10730ee27;  */

void FUN_10730ee0c(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010730ee18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x0001073117b0();
  func_0x00010725b1d4();
  return;
}



/* Entry: 10730ee28; end: 10730ee47;  */

void FUN_10730ee28(void)

{
  func_0x0001073117b0();
  func_0x00010725b1d4();
  return;
}



/* Entry: 10730ee48; end: 10730ee5b;  */

void FUN_10730ee48(void)

{
  FUN_10730ee28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10730ee5c; end: 10730ee7f;  */

undefined8 FUN_10730ee5c(void)

{
  undefined8 unaff_x19;
  
  func_0x0001073115b0();
  func_0x0001073117b0();
  FUN_10730d050();
  return unaff_x19;
}



/* Entry: 10730ee80; end: 10730eea3;  */

void FUN_10730ee80(long param_1,undefined8 param_2)

{
  func_0x0001073117b0(param_2,param_1 + 8);
  FUN_10730d050();
  return;
}



/* Entry: 10730eea4; end: 10730f07b;  */

void FUN_10730eea4(long param_1)

{
  long lVar1;
  undefined1 in_ZR;
  int iVar2;
  long *plVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined **ppuStack_c8;
  long lStack_c0;
  undefined ***pppuStack_b0;
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [32];
  char cStack_60;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined ***pppuStack_40;
  undefined8 uStack_38;
  
  func_0x0001073114e8();
  uStack_38 = extraout_x8;
  func_0x0001073116d8();
  iVar2 = (int)param_1 + 8;
  func_0x00010730e85c();
  if (iVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    uStack_50 = *(undefined8 *)(param_1 + 0x28);
    plVar3 = *(long **)(lVar1 + 0x28);
    ppuStack_58 = &PTR_FUN_11099f3e0;
    pppuStack_40 = &ppuStack_58;
    func_0x00010731177c();
    (**(code **)(*plVar3 + 0x18))();
    FUN_10730e9d0(auStack_a8);
    FUN_10730b1b0(auStack_80);
    func_0x00010730ea24(&ppuStack_58);
    uStack_50 = *(undefined8 *)(param_1 + 0x28);
    ppuStack_58 = &PTR_FUN_11099f460;
    ppuStack_c8 = &PTR_FUN_11099f4f0;
    pppuStack_b0 = &ppuStack_c8;
    lStack_c0 = lVar1;
    pppuStack_40 = &ppuStack_58;
    func_0x00010731177c(*(undefined8 *)(lVar1 + 0x28));
    uStack_e0 = *(undefined8 *)(extraout_x8_00 + 0x38);
    puStack_d8 = &UNK_10f40a042;
    uStack_d0 = 0xd;
    FUN_10730f168(&lStack_e8);
    uStack_f0 = 0;
    __ZNSt13exception_ptrD1Ev(&uStack_f0);
    if (lStack_e8 == 0) {
      FUN_10730f1cc(&uStack_e0,&ppuStack_58,&ppuStack_c8,auStack_80,auStack_a8);
    }
    else {
      in_ZR = cStack_60 == '\x01';
      if ((bool)in_ZR) {
        FUN_10730fa34(auStack_80,&lStack_e8);
      }
    }
    __ZNSt13exception_ptrD1Ev(&lStack_e8);
    FUN_10730f944(auStack_a8);
    FUN_10730e9d0(auStack_80);
    func_0x000107310ab8(&ppuStack_c8);
    func_0x000107310aec();
  }
  func_0x000107311668();
  func_0x000107311498(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt13exception_ptrD1Ev(&lStack_e8);
  FUN_10730f944(auStack_a8);
  FUN_10730e9d0(auStack_80);
  func_0x000107310ab8(&ppuStack_c8);
  func_0x000107310aec(&ppuStack_58);
  func_0x000107311668();
  func_0x000107311500();
  func_0x000107311574();
  func_0x000107311558();
  func_0x0001073114b8();
  return;
}



/* Entry: 10730f07c; end: 10730f0a3;  */

void FUN_10730f07c(undefined8 param_1)

{
  func_0x000107311574();
  func_0x000107311558(param_1,&PTR_DAT_11099f600);
  func_0x0001073114b8();
  return;
}



/* Entry: 10730f0a4; end: 10730f0af;  */

undefined ** FUN_10730f0a4(void)

{
  return &PTR_DAT_11099f600;
}



/* Entry: 10730f0b0; end: 10730f0cf;  */

void FUN_10730f0b0(void)

{
  func_0x0001073117b0();
  FUN_10730d050();
  return;
}



/* Entry: 10730f0d0; end: 10730f0d7;  */

void FUN_10730f0d0(void)

{
  return;
}



/* Entry: 10730f0d8; end: 10730f0ff;  */

void FUN_10730f0d8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001073115fc();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_11099f3e0;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10730f100; end: 10730f133;  */

void FUN_10730f100(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_11099f3e0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10730f134; end: 10730f15b;  */

void FUN_10730f134(undefined8 param_1)

{
  func_0x000107311574();
  func_0x000107311558(param_1,&PTR_DAT_11099f440);
  func_0x0001073114b8();
  return;
}



/* Entry: 10730f15c; end: 10730f167;  */

undefined ** FUN_10730f15c(void)

{
  return &PTR_DAT_11099f440;
}



/* Entry: 10730f168; end: 10730f1cb;  */

void FUN_10730f168(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined **ppuStack_30;
  int iStack_28;
  
  func_0x000107311670();
  FUN_107312488(param_2);
  iStack_28 = *(int *)(unaff_x20 + 8);
  if (iStack_28 == 2) {
    *unaff_x19 = 0;
  }
  else {
    ppuStack_30 = &PTR_FUN_11099f6f8;
    FUN_10730f6d0(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
  }
  return;
}



/* Entry: 10730f1cc; end: 10730f6b3;  */

void FUN_10730f1cc(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined8 *puVar9;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  char cStack_1b8;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 auStack_198 [2];
  undefined4 uStack_190;
  undefined1 auStack_188 [24];
  undefined8 uStack_170;
  long lStack_168;
  undefined4 uStack_158;
  undefined **ppuStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_128;
  undefined1 uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long alStack_100 [14];
  undefined1 auStack_90 [24];
  long *plStack_78;
  byte bStack_70;
  undefined8 uStack_68;
  
  plVar8 = param_1;
  func_0x0001073114e8();
  lVar2 = *plVar8;
  uStack_68 = extraout_x8;
  func_0x00010bccbc98(alStack_100,*(undefined8 *)(lVar2 + 0x48),plVar8[1],plVar8[2]);
  uStack_170 = *(undefined8 *)(alStack_100[0] + 8);
  lStack_168 = *(long *)(alStack_100[0] + 0x10);
  if (lStack_168 != 0) {
    do {
      func_0x0001073115e0();
    } while (extraout_w10 != 0);
  }
  if (*(long **)(param_2 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0x18) + 0x30))(&uStack_1d0);
    FUN_10730f790(&uStack_170);
    func_0x00010bccbe4c(alStack_100);
    func_0x00010bccbdb4(alStack_100);
    __ZNSt3__15mutex4lockEv(0x1131ad2a8);
    if (lRam00000001138220c0 != lRam00000001138220c8) {
      piVar1 = (int *)(*(long *)(lRam00000001138220c8 + -8) + 0x28);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    __ZNSt3__15mutex6unlockEv(0x1131ad2a8);
    puVar9 = *(undefined8 **)(lVar2 + 0x30);
    lVar2 = param_1[2];
    FUN_10730f8dc(auStack_90,param_5);
    if (lVar2 != 0) {
      uStack_170 = CONCAT44(uStack_170._4_4_,0x169);
      uStack_158 = 0;
      uStack_140 = 0;
      uStack_138 = 0;
      ppuStack_150 = &PTR_FUN_110996720;
      uStack_148 = 0;
      uStack_130 = 0x169;
      uStack_128 = 0;
      uStack_124 = 1;
      uStack_118 = 0;
      uStack_110 = 0;
      uStack_120 = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_188,&UNK_10de39ba0);
      puVar7 = &uStack_170;
      FUN_10726e300(puVar7,"result",auStack_188);
      FUN_10730f7b8();
      FUN_10726e6c0(alStack_100,puVar7);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_188);
      FUN_107262330(&uStack_170);
      if ((bStack_70 & 1) != 0) {
        if (plStack_78 == (long *)0x0) {
          func_0x000104bfeb48();
          goto LAB_10730f454;
        }
        (**(code **)(*plStack_78 + 0x30))(plStack_78,&uStack_1d0,alStack_100);
      }
      auStack_198[0] = 1;
      uStack_190 = 0;
      uStack_1a8 = *puVar9;
      uStack_1a0 = 3;
      func_0x00010743fa9c(puVar9,alStack_100,auStack_198,&uStack_1a8,7);
      FUN_107262330(alStack_100);
    }
    FUN_10730f944(auStack_90);
    uStack_1f0 = uStack_1f0 & 0xffffffffffffff00;
    uVar6 = cStack_1b8 == '\x01';
    if ((bool)uVar6) {
      uStack_1e8 = uStack_1c8;
      uStack_1f0 = uStack_1d0;
      uStack_1e0 = uStack_1c0;
      uStack_1c8 = 0;
      uStack_1c0 = 0;
      uStack_1d0 = 0;
    }
    plVar8 = *(long **)(param_3 + 0x18);
    uStack_1d8 = uVar6;
    if (plVar8 == (long *)0x0) {
      func_0x000104bfeb48();
      goto LAB_10730f454;
    }
    (**(code **)(*plVar8 + 0x30))(plVar8,&uStack_1f0);
    FUN_10730f98c(&uStack_1f0);
    func_0x000107311754();
    func_0x000107311498(uStack_68);
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x000104bfeb48();
LAB_10730f454:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10730f458);
  (*pcVar5)();
}



/* Entry: 10730f6b4; end: 10730f6cb;  */

void FUN_10730f6b4(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 10730f6cc; end: 10730f6cf;  */

void FUN_10730f6cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}


