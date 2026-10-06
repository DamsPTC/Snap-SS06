/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1072f42bc; end: 1072f430b;  */

void FUN_1072f42bc(undefined8 *param_1,long param_2)

{
  undefined8 extraout_x8;
  
  func_0x0001072f49f0();
  *param_1 = extraout_x8;
  func_0x0001072f4334(param_1 + 1);
  FUN_1072f40f4(param_1 + 5,param_2 + 0x20);
  return;
}



/* Entry: 1072f430c; end: 1072f43e7;  */

long * FUN_1072f430c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  func_0x00010729d51c(param_1 + 4);
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 1072f43e8; end: 1072f43fb;  */

void FUN_1072f43e8(void)

{
  func_0x0001072f43bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072f43fc; end: 1072f4423;  */

void FUN_1072f43fc(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar2 = (undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_SUB_11099d918;
  lVar3 = *(long *)(param_1 + 0x10);
  uVar4 = *puVar2;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x0001072f4970();
    } while (extraout_w10 != 0);
  }
  uVar4 = puVar2[2];
  puVar1[4] = puVar2[3];
  puVar1[3] = uVar4;
  lVar3 = puVar2[5];
  uVar4 = puVar2[4];
  puVar1[6] = puVar2[5];
  puVar1[5] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x0001072f4970();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1072f4424; end: 1072f4447;  */

void FUN_1072f4424(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_SUB_11099d918;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001072f4970();
    } while (extraout_w10 != 0);
  }
  uVar3 = puVar1[2];
  param_2[4] = puVar1[3];
  param_2[3] = uVar3;
  lVar2 = puVar1[5];
  uVar3 = puVar1[4];
  param_2[6] = puVar1[5];
  param_2[5] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001072f4970();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1072f4448; end: 1072f4883;  */

void FUN_1072f4448(long param_1,long *param_2)

{
  ulong *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long **pplVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lStack_248;
  long lStack_240;
  undefined8 uStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  ulong uStack_218;
  undefined **ppuStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1e8;
  undefined1 uStack_1e4;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 uStack_68;
  
  func_0x00010726fc00(&plStack_230,param_1 + 8);
  if (plStack_230 != (long *)0x0) {
    func_0x00010726fc3c();
    if (*plStack_230 != -1) {
      plStack_230 = (long *)0x0;
      uStack_228 = 0;
      lStack_c0 = 0;
      uStack_b8 = 0;
      FUN_1072508cc(&lStack_c0);
      goto LAB_1072f44c8;
    }
    func_0x00010726fc88();
  }
  func_0x0001072f49d8();
  plStack_230 = (long *)0x0;
  uStack_228 = 0;
LAB_1072f44c8:
  func_0x0001072f49d8();
  func_0x00010726fc00(&plStack_230,param_1 + 8);
  if (plStack_230 == (long *)0x0) {
    func_0x0001072f49d8();
  }
  else {
    lVar9 = *plStack_230;
    func_0x0001072f49d8();
    if (lVar9 != -1) {
      lVar11 = *(long *)(param_1 + 0x20);
      lVar9 = *param_2;
      lVar3 = param_2[1];
      lStack_248 = 0;
      lStack_240 = 0;
      uStack_238 = 0;
      for (; lVar9 != lVar3; lVar9 = lVar9 + 0x1b0) {
        FUN_1072d78d4(&plStack_230,lVar9);
        FUN_10729def4(&lStack_248,&plStack_230);
        func_0x000107293c20(&plStack_230);
      }
      puVar8 = *(undefined8 **)(lVar11 + 8);
      plStack_230 = (long *)CONCAT44(plStack_230._4_4_,0x134);
      uStack_218 = uStack_218 & 0xffffffff00000000;
      uStack_200 = 0;
      uStack_1f8 = 0;
      ppuStack_210 = &PTR_FUN_110996720;
      uStack_208 = 0;
      uStack_1f0 = 0x134;
      uStack_1e8 = 0;
      uStack_1e4 = 1;
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      uStack_1e0 = 0;
      lStack_c0 = (lStack_240 - lStack_248) / 0x140;
      uStack_b8 = CONCAT44(uStack_b8._4_4_,3);
      uStack_f0 = *puVar8;
      uStack_e8 = CONCAT44(uStack_e8._4_4_,3);
      func_0x00010743fa44(puVar8,&plStack_230,&lStack_c0,&uStack_f0,7);
      FUN_107262330(&plStack_230);
      lVar3 = lStack_240;
      uStack_228 = 0;
      plStack_230 = (long *)0x0;
      uStack_218 = 0;
      uStack_220 = 0;
      ppuStack_210 = (undefined **)CONCAT44(ppuStack_210._4_4_,0x3f800000);
      uStack_b8 = 0;
      lStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_a0 = 0x3f800000;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_d0 = 0x3f800000;
      for (lVar9 = lStack_248; lVar9 != lVar3; lVar9 = lVar9 + 0x140) {
        plVar12 = (long *)(lVar9 + 0x80);
        while (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (auStack_80,plVar12 + 2);
          uStack_68 = 0;
          pplVar5 = &plStack_230;
          func_0x0001072f4a18();
          func_0x0001072f4980();
          *(char *)(pplVar5 + 5) = *(char *)(pplVar5 + 5) + '\x01';
        }
        lVar4 = *(long *)(lVar9 + 0xa0);
        for (lVar11 = *(long *)(lVar9 + 0x98); lVar11 != lVar4; lVar11 = lVar11 + 0x18) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (auStack_80,lVar11);
          uStack_68 = 0;
          puVar8 = &uStack_f0;
          func_0x0001072f4a18();
          func_0x0001072f4980();
          *(char *)(puVar8 + 5) = *(char *)(puVar8 + 5) + '\x01';
        }
        uVar7 = *(ulong *)(lVar9 + 0x18);
        puVar1 = (ulong *)(lVar9 + 0x18);
        if ((uVar7 & 1) != 0) {
          puVar1 = (ulong *)(uVar7 + 7);
        }
        for (lVar11 = (long)*(int *)(lVar9 + 0x20) << 3; lVar11 != 0; lVar11 = lVar11 + -8) {
          uVar10 = *puVar1;
          uVar7 = *(ulong *)(uVar10 + 0x18) & 0xfffffffffffffffc;
          func_0x000100152bb8(uVar7,&UNK_10f409af8);
          if ((int)uVar7 != 0) {
            ppuVar6 = *(undefined ***)(uVar10 + 0x20);
            ppuVar2 = &PTR_PTR_113234600;
            if (ppuVar6 != (undefined **)0x0) {
              ppuVar2 = ppuVar6;
            }
            if (*(int *)((long)ppuVar2 + 0x1c) == 2) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                        (auStack_98,(ulong)ppuVar2[2] & 0xfffffffffffffffc);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                        (auStack_80,auStack_98);
              uStack_68 = 0;
              plVar12 = &lStack_c0;
              func_0x0001072f4a18();
              func_0x0001072f4980();
              *(char *)(plVar12 + 5) = (char)plVar12[5] + '\x01';
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
            }
          }
          puVar1 = puVar1 + 1;
        }
      }
      func_0x00010002b838(auStack_80,&DAT_10f409b0b);
      func_0x0001072f4a28(&plStack_230,0x136,auStack_80);
      func_0x0001072f4980();
      func_0x00010002b838();
      func_0x0001072f4a28(&uStack_f0,0x137,auStack_80);
      func_0x0001072f4980();
      func_0x00010002b838();
      func_0x0001072f4a28(&lStack_c0,0x135,auStack_80);
      func_0x0001072f4980();
      FUN_1072f3ba4(&uStack_f0);
      FUN_1072f3ba4(&lStack_c0);
      FUN_1072f3ba4(&plStack_230);
      plVar12 = *(long **)(param_1 + 0x28);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x10))(plVar12,&lStack_248);
      }
      FUN_107298098(&lStack_248);
    }
  }
  func_0x0001072f49d0();
  return;
}



/* Entry: 1072f4884; end: 1072f48af;  */

void FUN_1072f4884(undefined8 param_1,undefined8 param_2)

{
  func_0x0001072f4a20(param_2,param_1,&PTR_DAT_11099d988);
  func_0x0001072f49e0();
  return;
}



/* Entry: 1072f48b0; end: 1072f491b;  */

undefined ** FUN_1072f48b0(void)

{
  return &PTR_DAT_11099d988;
}



/* Entry: 1072f491c; end: 1072f495f;  */

long * FUN_1072f491c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 1072f4960; end: 1072f4a7b;  */

void FUN_1072f4960(void)

{
  return;
}



/* Entry: 1072f4a7c; end: 1072f4b67;  */

undefined1 *
FUN_1072f4a7c(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  int extraout_w10;
  long *plVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  *param_1 = 0;
  lVar1 = param_2[1];
  uVar3 = *param_2;
  *(undefined8 *)(param_1 + 0xe8) = param_2[1];
  *(undefined8 *)(param_1 + 0xe0) = uVar3;
  param_1[0xd8] = 0;
  if (lVar1 != 0) {
    do {
      func_0x0001072f9af4();
    } while (extraout_w10 != 0);
  }
  plVar2 = (long *)*param_3;
  func_0x00010002b838(auStack_48,PTR_DAT_1131ad088);
  (**(code **)(*plVar2 + 0x28))(plVar2,auStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  param_1[0xf0] = (((uint)plVar2 ^ 0xffffffff) & 0x101) == 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = param_4;
  FUN_10726ed14(param_1 + 0x208);
  *(undefined1 **)(param_1 + 0x218) = param_1;
  return param_1;
}



/* Entry: 1072f4b68; end: 1072f509f;  */

void FUN_1072f4b68(long param_1,long *param_2,undefined8 param_3)

{
  ulong *puVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  int iVar4;
  long *plVar5;
  undefined8 extraout_x8;
  ulong uStack_260;
  undefined8 uStack_258;
  undefined1 auStack_250 [8];
  uint uStack_248;
  undefined1 auStack_240 [16];
  ulong uStack_230;
  undefined8 uStack_228;
  undefined1 uStack_210;
  undefined4 uStack_1f0;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [8];
  uint uStack_1c8;
  undefined1 auStack_1c0 [16];
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  ulong auStack_1a0 [2];
  undefined1 auStack_190 [8];
  undefined4 uStack_188;
  undefined1 auStack_180 [32];
  undefined1 auStack_160 [16];
  ulong uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_110;
  undefined1 auStack_100 [16];
  ulong uStack_f0;
  undefined8 uStack_e8;
  int iStack_d8;
  undefined4 uStack_b0;
  undefined1 auStack_90 [16];
  byte bStack_80;
  undefined1 auStack_78 [4];
  undefined1 uStack_74;
  byte bStack_68;
  undefined1 auStack_60 [16];
  byte bStack_50;
  undefined8 uStack_48;
  
  func_0x0001072f9a90();
  plVar5 = param_2 + 1;
  uStack_48 = extraout_x8;
  (**(code **)(*param_2 + 0x30))();
  if (((ulong)plVar5 & 1) == 0) {
    func_0x0001072f9a64(uStack_48);
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__bzero_11034bf90)(param_1,0xd8);
      return;
    }
LAB_1072f4f60:
    ___stack_chk_fail();
  }
  else {
    func_0x0001072f9d54(auStack_90);
    if (bStack_80 != 1) {
      func_0x0001072d124c(&uStack_1b0);
      uStack_148 = uStack_1a8;
      uStack_150 = uStack_1b0;
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      uStack_110 = 1;
      FUN_10726b09c(&uStack_1b0);
LAB_1072f4d98:
      func_0x0001072f9d54(auStack_60);
      if (bStack_50 == 1) {
        uStack_1c8 = (uint)bStack_50;
        FUN_1072f5dec(&uStack_230,auStack_1d0);
        FUN_1072f6ad4(auStack_1c0,&uStack_230);
        if ((bStack_50 & 1) == 0) {
          func_0x000104bdc2c8();
          goto LAB_1072f4f78;
        }
        FUN_1072f6da0(auStack_180);
        FUN_1072f50a0(&uStack_f0,auStack_1c0,auStack_60,param_3,auStack_180);
        FUN_1072dbd40(auStack_180);
        FUN_1072c9884(auStack_1c0);
        FUN_1072c9884(&uStack_230);
        FUN_1072c9884(auStack_1d0);
      }
      else {
        FUN_1072f6da0(&uStack_1e0);
        uStack_e8 = uStack_1d8;
        uStack_f0 = uStack_1e0;
        uStack_1e0 = 0;
        uStack_1d8 = 0;
        uStack_b0 = 1;
        FUN_1072dbd40(&uStack_1e0);
      }
      func_0x0001072f9d54(auStack_78);
      uVar3 = bStack_68 == 1;
      if ((bool)uVar3) {
        uStack_248 = (uint)bStack_68;
        FUN_1072f5dec(auStack_180,auStack_250);
        FUN_1072f6ad4(auStack_240,auStack_180);
        if ((bStack_68 & 1) == 0) {
          func_0x000104bdc2c8();
          goto LAB_1072f4f78;
        }
        FUN_1072f6da0(auStack_100);
        FUN_1072f50a0(&uStack_230,auStack_240,auStack_78,param_3,auStack_100);
        FUN_1072dbd40(auStack_100);
        FUN_1072c9884(auStack_240);
        func_0x0001072f9c7c();
        FUN_1072c9884(auStack_250);
      }
      else {
        FUN_1072f6da0(&uStack_260);
        uStack_228 = uStack_258;
        uStack_230 = uStack_260;
        uStack_260 = 0;
        uStack_258 = 0;
        uStack_1f0 = 1;
        FUN_1072dbd40(&uStack_260);
      }
      FUN_1072f5e08(param_1,&uStack_150);
      FUN_1072f5e80(param_1 + 0x48,&uStack_f0);
      FUN_1072f5e80(param_1 + 0x90,&uStack_230);
      FUN_1072dbce8(&uStack_230);
      FUN_1072f5f4c(auStack_78);
      FUN_1072dbce8(&uStack_f0);
      FUN_1072f5f4c(auStack_60);
      FUN_1072ca648(&uStack_150);
      FUN_1072f5f4c(auStack_90);
      func_0x0001072f9a64(uStack_48);
      if ((bool)uVar3) {
        return;
      }
      goto LAB_1072f4f60;
    }
    uStack_188 = 3;
    FUN_1072f5dec(auStack_180,auStack_190);
    FUN_1072f6ad4(auStack_160,auStack_180);
    if ((bStack_80 & 1) != 0) {
      func_0x0001072d124c(auStack_1a0);
      iVar4 = (int)auStack_90;
      func_0x000107766098();
      if (iVar4 == 0) {
        FUN_1072f6bc0(&uStack_f0,auStack_90,param_3);
        puVar1 = &uStack_f0;
        if (iStack_d8 != 0) {
          puVar1 = auStack_1a0;
        }
        FUN_107278b70(&uStack_230,puVar1);
        FUN_1072f6c8c(&uStack_f0);
        uStack_148 = uStack_228;
        uStack_150 = uStack_230;
        uStack_230 = 0;
        uStack_228 = 0;
LAB_1072f4d78:
        uStack_110 = 1;
        FUN_10726b09c();
      }
      else {
        FUN_1072c9ff4(auStack_100,auStack_160);
        FUN_1072f6b34(&uStack_f0,auStack_100,1);
        FUN_1072c9884(auStack_100);
        auStack_78[0] = 0;
        uStack_74 = 0;
        uStack_230 = uStack_230 & 0xffffffffffffff00;
        uStack_210 = 0;
        func_0x000107771274(auStack_60,&uStack_f0,auStack_90,param_3,auStack_78,&uStack_230);
        FUN_1072c94e0(&uStack_230);
        if (bStack_50 != 1) {
          func_0x0001072f9d38();
          func_0x0001072f9d40();
          FUN_107278b70();
          uStack_148 = uStack_e8;
          uStack_150 = uStack_f0;
          uStack_f0 = 0;
          uStack_e8 = 0;
          goto LAB_1072f4d78;
        }
        auStack_78[0] = 0;
        bStack_68 = 0;
        FUN_1072ca574(&uStack_230,auStack_60,auStack_78);
        FUN_1072ca5e8(&uStack_150,&uStack_230);
        FUN_1072ca6a0(&uStack_230);
        FUN_10726b07c(auStack_78);
        func_0x0001072f9d38();
        func_0x0001072f9d40();
      }
      FUN_10726b09c(auStack_1a0);
      FUN_1072c9884(auStack_160);
      func_0x0001072f9c7c();
      FUN_1072c9884(auStack_190);
      goto LAB_1072f4d98;
    }
  }
  func_0x000104bdc2c8();
LAB_1072f4f78:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1072f4f7c);
  (*pcVar2)();
}



/* Entry: 1072f50a0; end: 1072f52d3;  */

void FUN_1072f50a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong *param_5)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_148 [16];
  undefined1 uStack_138;
  undefined1 auStack_130 [64];
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d0;
  undefined1 auStack_c8 [4];
  undefined1 uStack_c4;
  undefined1 auStack_c0 [16];
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  uint uStack_98;
  undefined1 auStack_58 [16];
  char cStack_48;
  
  puVar3 = &uStack_170;
  uVar2 = param_3;
  func_0x000107766098();
  if ((int)uVar2 == 0) {
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    func_0x0001072f6d74(auStack_58,param_3,&uStack_f0,param_4);
    if (cStack_48 != '\x01') {
      uStack_a8 = uStack_e8;
      uStack_b0 = uStack_f0;
      uStack_a0 = uStack_e0;
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_f0 = 0;
    }
    else {
      func_0x0001072f64f4(&uStack_b0,auStack_58);
    }
    uStack_98 = (uint)(cStack_48 != '\x01');
    FUN_1072dbe34(auStack_58);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_f0);
    puVar1 = &uStack_b0;
    if (uStack_98 != 0) {
      puVar1 = param_5;
    }
    func_0x0001072f64f4(&uStack_160,puVar1);
    if (uStack_98 != 0xffffffff) {
      (*(code *)(&PTR_FUN_11099da48)[uStack_98])(&uStack_f0,&uStack_b0);
    }
    param_1[1] = uStack_158;
    *param_1 = uStack_160;
    uStack_160 = 0;
    uStack_158 = 0;
    *(undefined4 *)(param_1 + 8) = 1;
    puVar3 = &uStack_160;
  }
  else {
    FUN_1072c9ff4(auStack_c0,param_2);
    FUN_1072f6b34(&uStack_b0,auStack_c0,1);
    FUN_1072c9884(auStack_c0);
    auStack_c8[0] = 0;
    uStack_c4 = 0;
    uStack_f0 = uStack_f0 & 0xffffffffffffff00;
    uStack_d0 = 0;
    func_0x000107771274(auStack_58,&uStack_b0,param_3,param_4,auStack_c8,&uStack_f0);
    FUN_1072c94e0(&uStack_f0);
    if (cStack_48 == '\x01') {
      auStack_148[0] = 0;
      uStack_138 = 0;
      FUN_1072f6ce8(auStack_130,auStack_58,auStack_148);
      FUN_1072f6d40(param_1,auStack_130);
      func_0x0001072dbe0c(auStack_130);
      FUN_1072dbe34(auStack_148);
      func_0x0001072f9d90();
      func_0x0001072f9d04();
      return;
    }
    func_0x0001072f9d90();
    func_0x0001072f9d04();
    func_0x0001072f64f4(&uStack_170,param_5);
    param_1[1] = uStack_168;
    *param_1 = uStack_170;
    uStack_170 = 0;
    uStack_168 = 0;
    *(undefined4 *)(param_1 + 8) = 1;
  }
  FUN_1072dbd40(puVar3);
  return;
}



/* Entry: 1072f52d4; end: 1072f5307;  */

long FUN_1072f52d4(long param_1)

{
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    FUN_1072f5f98();
  }
  else {
    FUN_1072f5fd0();
  }
  return param_1;
}



/* Entry: 1072f5308; end: 1072f5373;  */

void FUN_1072f5308(void)

{
  undefined8 *in_x3;
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = in_x3[1];
  uStack_40 = *in_x3;
  if (in_x3[1] != 0) {
    do {
      func_0x0001072f9af4();
    } while (extraout_w10 != 0);
  }
  FUN_1072f5374();
  FUN_1072cd28c(&uStack_40);
  FUN_1072f6f84(&uStack_30);
  return;
}



/* Entry: 1072f5374; end: 1072f5bb3;  */

/* WARNING: Type propagation algorithm not settling */

undefined *****
FUN_1072f5374(float param_1,undefined *****param_2,long param_3,undefined *****param_4,long *param_5
             ,undefined ****param_6,undefined ****param_7)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined ***pppuVar3;
  undefined8 *puVar4;
  undefined *****pppppuVar5;
  undefined *****pppppuVar6;
  undefined *****pppppuVar7;
  undefined *****pppppuVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined ***unaff_x19;
  undefined *****unaff_x20;
  undefined ****unaff_x21;
  undefined ****unaff_x22;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  float fVar12;
  undefined ****ppppuVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_548 [8];
  undefined1 auStack_540 [16];
  undefined ****ppppuStack_530;
  undefined ****ppppuStack_528;
  undefined ****ppppuStack_520;
  undefined1 auStack_510 [32];
  undefined ****ppppuStack_4f0;
  undefined ****ppppuStack_4e8;
  undefined ****ppppuStack_4e0;
  undefined1 auStack_4d8 [32];
  undefined **ppuStack_4b8;
  undefined *****pppppuStack_4b0;
  undefined *****pppppuStack_4a8;
  undefined ***pppuStack_4a0;
  undefined8 uStack_498;
  undefined ****ppppuStack_490;
  undefined ****ppppuStack_488;
  undefined *****pppppuStack_480;
  undefined *****pppppuStack_478;
  undefined1 *puStack_470;
  code *pcStack_468;
  undefined1 auStack_458 [24];
  undefined1 uStack_440;
  undefined1 uStack_438;
  undefined4 uStack_437;
  undefined2 uStack_433;
  undefined1 uStack_431;
  undefined8 uStack_430;
  undefined1 uStack_428;
  undefined4 uStack_427;
  undefined3 uStack_423;
  undefined1 uStack_420;
  undefined8 uStack_41f;
  undefined8 uStack_417;
  undefined7 uStack_40f;
  undefined1 uStack_408;
  undefined7 uStack_407;
  undefined1 uStack_400;
  undefined4 uStack_3ff;
  undefined3 uStack_3fb;
  undefined1 uStack_3f8;
  undefined7 uStack_3f7;
  undefined1 uStack_3f0;
  undefined7 uStack_3ef;
  undefined1 uStack_3e8;
  undefined4 uStack_3e7;
  undefined3 uStack_3e3;
  undefined ****ppppuStack_3e0;
  undefined1 uStack_3d8;
  undefined4 uStack_3d7;
  undefined3 uStack_3d3;
  undefined1 uStack_3d0;
  undefined4 uStack_3cf;
  undefined3 uStack_3cb;
  undefined1 uStack_3c8;
  undefined4 uStack_3c7;
  undefined3 uStack_3c3;
  double dStack_3c0;
  undefined1 uStack_3b8;
  undefined4 uStack_3b7;
  undefined3 uStack_3b3;
  undefined ****ppppuStack_3b0;
  undefined ****ppppuStack_3a8;
  undefined ****ppppuStack_3a0;
  undefined ****ppppuStack_378;
  undefined ***pppuStack_370;
  undefined ****ppppuStack_368;
  undefined1 auStack_360 [16];
  undefined ***pppuStack_350;
  undefined ***pppuStack_348;
  undefined ***pppuStack_340;
  long alStack_338 [2];
  undefined *****pppppuStack_328;
  undefined *****pppppuStack_320;
  undefined1 *puStack_318;
  undefined *****pppppuStack_310;
  undefined1 uStack_2b8;
  undefined ****ppppuStack_280;
  undefined ***pppuStack_278;
  undefined ****ppppuStack_268;
  undefined **ppuStack_260;
  undefined8 uStack_258;
  double dStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined1 uStack_234;
  undefined8 uStack_230;
  int iStack_1e8;
  undefined ****appppuStack_178 [3];
  undefined8 *puStack_160;
  undefined1 auStack_158 [24];
  undefined ****ppppuStack_140;
  undefined ****ppppuStack_138;
  undefined8 uStack_130;
  undefined ***pppuStack_118;
  undefined ***pppuStack_110;
  undefined ***pppuStack_108;
  undefined1 auStack_100 [32];
  undefined ****ppppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 uStack_98;
  undefined8 uStack_88;
  
  func_0x0001072f9a90();
  pppppuVar7 = (undefined *****)0x0;
  pppppuVar8 = param_4;
  uStack_88 = extraout_x8;
  if (param_3 != 0) {
    func_0x0001072f9b88();
    func_0x00010740e088(&ppppuStack_280,param_3);
    ppppuVar13 = ppppuStack_280;
    func_0x0001072f9d48();
    dVar14 = (double)CONCAT44(uStack_23c,uStack_240);
    if ((char)uStack_238 == '\0') {
      dVar14 = 0.0;
    }
    func_0x0001072f9d48();
    dVar15 = dStack_250;
    if ((char)uStack_248 == '\0') {
      dVar15 = 20.0;
    }
    param_2 = (undefined *****)&uStack_438;
    pppppuVar7 = (undefined *****)0x88;
    _bzero();
    unaff_x21 = param_6;
    unaff_x22 = param_7;
    if ((int)param_4 == 1) {
      in_ZR = *(int *)(unaff_x20 + 0x3f) == 2;
      if ((bool)in_ZR) {
        FUN_1072f6fac(unaff_x20 + 0x1f);
        pppppuVar7 = unaff_x20 + 0x1f;
        FUN_1072f684c(&ppppuStack_280);
        ppppuVar13 = ppppuStack_280;
        if (iStack_1e8 == 0) {
          FUN_1072f6968(&pppppuStack_328,&pppuStack_278);
          uVar9 = 0x3ff0000000000000;
          dVar14 = (double)NEON_fminnm((double)param_1 - (double)ppppuVar13,0x3ff0000000000000);
          ppppuVar13 = (undefined ****)0x0;
          if (dVar14 <= 0.0) {
            dVar14 = 0.0;
          }
          dVar14 = 1.0 - dVar14;
          func_0x000107411e70(&pppppuStack_328);
          uStack_423 = 0;
          uStack_427 = 0;
          uStack_41f = 0;
          uStack_40f = 0;
          uStack_417 = 0;
          uStack_408 = 0;
          uStack_407 = 0;
          uStack_3ff = 0;
          uStack_3fb = 0;
          uStack_3f7 = 0;
          uStack_3f0 = 0;
          uStack_3ef = 0;
          uStack_3e7 = 0;
          uStack_3e3 = 0;
          uStack_3d7 = 0;
          uStack_3d3 = 0;
          uStack_3cb = 0;
          uStack_3cf = 0;
          uStack_3c3 = 0;
          uStack_3c7 = 0;
          uStack_3b3 = 0;
          uStack_3b7 = 0;
          uStack_438 = SUB81(dVar14,0);
          uStack_431 = (undefined1)((ulong)dVar14 >> 0x38);
          uStack_433 = (undefined2)((ulong)dVar14 >> 0x28);
          uStack_437 = (undefined4)((ulong)dVar14 >> 8);
          uStack_428 = 1;
          uStack_420 = 0;
          uStack_400 = 0;
          uStack_3f8 = 0;
          uStack_3e8 = 0;
          uStack_3d8 = 1;
          uStack_3d0 = 0;
          uStack_3c8 = 0;
          dStack_3c0 = 0.0;
          uStack_3b8 = 0;
          uStack_430 = uVar9;
          ppppuStack_3e0 = ppppuVar13;
          FUN_1072dbc34(&pppppuStack_328);
          pppuVar3 = *param_6;
          if ((pppuVar3 == (undefined ***)0x0) ||
             ((*(code *)(*pppuVar3)[0x16])(), (int)pppuVar3 == 0)) {
            if ((long *)*param_5 != (long *)0x0) {
              fVar12 = (float)(double)ppppuVar13;
              (**(code **)(*(long *)*param_5 + 0x10))();
              dStack_3c0 = (double)fVar12;
              uStack_3b8 = 1;
            }
            _bzero(&pppppuStack_328,0xa8);
            pppppuVar7 = (undefined *****)&uStack_438;
            pppppuVar8 = (undefined *****)&pppppuStack_328;
            func_0x00010740e24c();
            func_0x00010725ab38(&pppppuStack_328);
          }
          else {
            auStack_458[0] = 0;
            uStack_440 = 0;
            uStack_d8 = 1;
            unaff_x20 = &ppppuStack_e0;
            uStack_98 = 0;
            uStack_c8 = 0;
            uStack_d0 = 0;
            uStack_b8 = 0;
            uStack_c0 = 0;
            auStack_b0[0] = 0;
            ppppuStack_e0 = ppppuVar13;
            func_0x0001001148fc(auStack_458);
            ppppuStack_138 =
                 (undefined ****)
                 CONCAT17(uStack_431,CONCAT25(uStack_433,CONCAT41(uStack_437,uStack_438)));
            pppppuStack_328 = (undefined *****)((ulong)pppppuStack_328 & 0xffffffffffffff00);
            uStack_2b8 = 0;
            pppppuVar7 = &ppppuStack_138;
            pppppuVar8 = &ppppuStack_e0;
            uStack_130 = uVar9;
            (*(code *)(**param_6)[3])();
            func_0x0001072f69fc(&pppppuStack_328);
            func_0x0001001148fc(auStack_b0);
          }
        }
        param_2 = &ppppuStack_280;
        FUN_1072dbb70();
      }
    }
    else {
      in_ZR = 0;
      if (((int)param_4 == 0) && (in_ZR = *(int *)(unaff_x20 + 0x3f) == 1, !(bool)in_ZR)) {
        ppppuStack_280 = (undefined ****)CONCAT44(ppppuStack_280._4_4_,0x189);
        ppppuStack_268._0_4_ = 0;
        uStack_248 = 0;
        dStack_250 = 0.0;
        uStack_258 = 0;
        ppuStack_260 = &PTR_FUN_110996720;
        uStack_240 = 0x189;
        uStack_238 = 0;
        uStack_234 = 1;
        uStack_230 = 0;
        pppppuStack_328 = (undefined *****)CONCAT44(pppppuStack_328._4_4_,1);
        pppppuStack_320 = (undefined *****)((ulong)pppppuStack_320 & 0xffffffff00000000);
        ppppuStack_e0 = (undefined ****)*unaff_x20[0x40];
        uStack_d8 = CONCAT44(uStack_d8._4_4_,3);
        pppppuVar7 = &ppppuStack_280;
        pppppuVar8 = (undefined *****)&pppppuStack_328;
        func_0x00010743fa9c();
        FUN_107262330(&ppppuStack_280);
        param_2 = unaff_x20 + 0x1f;
        FUN_1072dbb1c();
        unaff_x20[0x1f] =
             (undefined ****)
             ((double)param_1 - (1.0 - ((double)ppppuVar13 - dVar14) / (dVar15 - dVar14)));
        *(undefined4 *)(unaff_x20 + 0x3f) = 1;
        unaff_x21 = (undefined ****)0x1;
        if ((unaff_x20[0x1c] != (undefined ****)0x0) &&
           (in_ZR = *(char *)(unaff_x20 + 0x1b) == '\x01', (bool)in_ZR)) {
          func_0x00010740ec5c(&ppppuStack_280);
          pppuVar10 = ppppuStack_280[2];
          func_0x0001074119b0(&ppppuStack_280);
          pppuVar3 = (undefined ***)0x30;
          __Znwm();
          pppuVar11 = pppuVar3 + 1;
          *pppuVar11 = (undefined **)0x0;
          pppuVar3[2] = (undefined **)0x0;
          ppppuVar13 = (undefined ****)(pppuVar3 + 3);
          *pppuVar3 = &PTR_FUN_11099da68;
          func_0x0001078696e8();
          unaff_x21 = unaff_x20[0x1c];
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pppuVar11,0x10);
            if (bVar2) {
              *pppuVar11 = (undefined **)((long)*pppuVar11 + 1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          ppppuStack_378 = ppppuVar13;
          pppuStack_370 = pppuVar3;
          ppppuStack_280 = ppppuVar13;
          pppuStack_278 = pppuVar3;
          FUN_1072f6a60(&ppppuStack_268,param_7);
          ppppuStack_140 = (undefined ****)0x0;
          unaff_x22 = (undefined ****)0x70;
          __Znwm();
          *unaff_x22 = (undefined ***)&PTR_FUN_11099de48;
          unaff_x22[2] = pppuStack_278;
          unaff_x22[1] = (undefined ***)ppppuStack_280;
          ppppuStack_280 = (undefined ****)0x0;
          pppuStack_278 = (undefined ***)0x0;
          unaff_x22[3] = unaff_x19;
          pppppuVar7 = &ppppuStack_268;
          FUN_1072f6a60(unaff_x22 + 4);
          unaff_x22[0xd] = pppuVar10;
          unaff_x22[0xc] = (undefined ***)unaff_x20;
          ppppuStack_3b0 = unaff_x20[0x41];
          ppppuStack_3a8 = unaff_x20[0x42];
          if (ppppuStack_3a8 != (undefined ****)0x0) {
            ppppuVar13 = ppppuStack_3a8 + 2;
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(ppppuVar13,0x10);
              if (bVar2) {
                *ppppuVar13 = (undefined ***)((long)*ppppuVar13 + 1);
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          ppppuStack_3a0 = unaff_x20[0x43];
          ppppuStack_e0 = (undefined ****)0x0;
          uStack_d8 = 0;
          pppppuStack_328 = (undefined *****)0x0;
          pppppuStack_320 = (undefined *****)0x0;
          ppppuStack_140 = unaff_x22;
          func_0x00010725b1d4(&pppppuStack_328);
          func_0x00010725b1d4(&ppppuStack_e0);
          puStack_160 = (undefined8 *)0x0;
          puVar4 = (undefined8 *)0x38;
          __Znwm();
          *puVar4 = &PTR_FUN_11099ded8;
          puVar4[2] = ppppuStack_3a8;
          puVar4[1] = ppppuStack_3b0;
          ppppuStack_3b0 = (undefined ****)0x0;
          ppppuStack_3a8 = (undefined ****)0x0;
          puVar4[3] = ppppuStack_3a0;
          puVar4[5] = pppuVar10;
          puVar4[4] = unaff_x19;
          puVar4[6] = unaff_x20;
          puStack_160 = puVar4;
          if (((ulong)unaff_x21[1] & 1) == 0) {
            ppppuVar13 = unaff_x21;
            (*(code *)(*unaff_x21)[2])();
            if ((int)ppppuVar13 == 0) {
              pppuStack_348 = unaff_x21[4];
              pppuStack_350 = unaff_x21[3];
              if (unaff_x21[4] != (undefined ***)0x0) {
                do {
                  func_0x0001072f9af4();
                } while (extraout_w10 != 0);
              }
              pppuStack_340 = unaff_x21[5];
              (*(code *)(*unaff_x21)[4])(&ppppuStack_368,unaff_x21);
              unaff_x20 = &ppppuStack_138;
              func_0x0001072f804c(&ppppuStack_138,auStack_158);
              pppuStack_110 = pppuStack_348;
              pppuStack_118 = pppuStack_350;
              if (pppuStack_348 != (undefined ***)0x0) {
                do {
                  func_0x0001072f9af4();
                } while (extraout_w10_00 != 0);
              }
              pppuStack_108 = pppuStack_340;
              pppppuVar7 = appppuStack_178;
              func_0x0001072f808c(auStack_100);
              unaff_x21 = (undefined ****)&ppppuStack_368;
              FUN_10724bb70(alStack_338,auStack_360);
              if (alStack_338[0] != 0) {
                unaff_x20 = &ppppuStack_e0;
                FUN_1072f823c(unaff_x20,&ppppuStack_138);
                func_0x0001072f9c54();
                FUN_1072f823c(&pppppuStack_328,&ppppuStack_e0);
                *unaff_x20 = (undefined ****)&PTR_FUN_11099dd08;
                unaff_x20[1] = ppppuStack_368;
                unaff_x20[3] = (undefined ****)0x1;
                unaff_x20[2] = (undefined ****)0x38;
                FUN_1072f823c(unaff_x20 + 4,&pppppuStack_328);
                func_0x0001072f80cc(&pppppuStack_328);
                pppppuStack_328 = unaff_x20;
                func_0x0001072f80cc(&ppppuStack_e0);
                pppppuVar7 = (undefined *****)&pppppuStack_328;
                func_0x0001073ae140(alStack_338[0]);
                pppppuVar5 = pppppuStack_328;
                pppppuStack_328 = (undefined *****)0x0;
                unaff_x22 = ppppuStack_368;
                if (pppppuVar5 != (undefined *****)0x0) {
                  func_0x0001072f9b7c();
                }
              }
              func_0x00010724bcd8(alStack_338);
              func_0x0001072f80cc(&ppppuStack_138);
              FUN_10724ae28(auStack_360);
              func_0x00010725b1d4(&pppuStack_350);
            }
            else {
              ppppuVar13 = unaff_x21;
              (*(code *)(*unaff_x21)[3])();
              if (ppppuVar13 != (undefined ****)0x0) {
                pppppuStack_320 = appppuStack_178;
                pppppuStack_328 = (undefined *****)&PTR_FUN_11099dc88;
                puStack_318 = auStack_158;
                pppppuStack_310 = (undefined *****)&pppppuStack_328;
                pppppuVar7 = (undefined *****)&pppppuStack_328;
                (*(code *)(*ppppuVar13)[7])();
                func_0x000107283e00(&pppppuStack_328);
              }
            }
          }
          FUN_1072f5d5c(appppuStack_178);
          func_0x00010725b1d4(&ppppuStack_3b0);
          func_0x0001072f5d90(auStack_158);
          func_0x0001072f5dc4(&ppppuStack_280);
          param_2 = &ppppuStack_378;
          FUN_1072f6ffc();
        }
      }
    }
  }
  func_0x0001072f9a64(uStack_88);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pppppuVar5 = pppppuStack_328;
    pppppuStack_328 = (undefined *****)0x0;
    if (pppppuVar5 != (undefined *****)0x0) {
      func_0x0001072f9b7c();
    }
    func_0x00010724bcd8(alStack_338);
    func_0x0001072f80cc(&ppppuStack_138);
    FUN_10724ae28(auStack_360);
    func_0x00010725b1d4(&pppuStack_350);
    FUN_1072f5d5c(appppuStack_178);
    func_0x00010725b1d4(&ppppuStack_3b0);
    func_0x0001072f5d90(auStack_158);
    func_0x0001072f5dc4(&ppppuStack_280);
    pppppuVar5 = &ppppuStack_378;
    FUN_1072f6ffc();
    func_0x0001072f9b0c();
    pcStack_468 = FUN_1072f5bb4;
    ppppuStack_490 = unaff_x22;
    ppppuStack_488 = unaff_x21;
    pppppuStack_480 = unaff_x20;
    pppppuStack_478 = param_2;
    puStack_470 = &stack0xfffffffffffffff0;
    func_0x0001072f9a90();
    uStack_498 = extraout_x8_00;
    if (((ulong)pppppuVar5[1] & 1) == 0) {
      pppppuVar6 = pppppuVar5;
      (*(code *)(*pppppuVar5)[2])();
      if ((int)pppppuVar6 == 0) {
        ppppuStack_528 = pppppuVar5[4];
        ppppuStack_530 = pppppuVar5[3];
        if (pppppuVar5[4] != (undefined ****)0x0) {
          do {
            func_0x0001072f9af4();
          } while (extraout_w10_01 != 0);
        }
        ppppuStack_520 = pppppuVar5[5];
        (*(code *)(*pppppuVar5)[4])(auStack_548,pppppuVar5);
        func_0x0001072f7904(auStack_510,pppppuVar7);
        ppppuStack_4e8 = ppppuStack_528;
        ppppuStack_4f0 = ppppuStack_530;
        if (ppppuStack_528 != (undefined ****)0x0) {
          do {
            func_0x0001072f9af4();
          } while (extraout_w10_02 != 0);
        }
        ppppuStack_4e0 = ppppuStack_520;
        func_0x0001072f4334(auStack_4d8,pppppuVar8);
        FUN_1072f7024(auStack_548,0x38,1,auStack_510);
        func_0x0001072f7944(auStack_510);
        FUN_10724ae28(auStack_540);
        pppppuVar5 = &ppppuStack_530;
        func_0x00010725b1d4();
      }
      else {
        (*(code *)(*pppppuVar5)[3])();
        if (pppppuVar5 != (undefined *****)0x0) {
          ppuStack_4b8 = &PTR_FUN_11099dab8;
          pppuStack_4a0 = &ppuStack_4b8;
          pppppuStack_4b0 = pppppuVar8;
          pppppuStack_4a8 = pppppuVar7;
          (*(code *)(*pppppuVar5)[7])();
          func_0x0001072f9cb8();
        }
      }
    }
    func_0x0001072f9a64(uStack_498);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      pppppuVar7 = pppppuVar5;
      func_0x0001072f9cb8();
      func_0x0001072f9b0c();
      func_0x0001072f9cc0();
      if ((bool)in_ZR) {
        uVar9 = 0x20;
      }
      else {
        if (pppppuVar7 == (undefined *****)0x0) {
          return pppppuVar5;
        }
        uVar9 = 0x28;
      }
      func_0x0001072f9bc8(uVar9);
      return pppppuVar5;
    }
    return pppppuVar5;
  }
  return param_2;
}



/* Entry: 1072f5bb4; end: 1072f5d5b;  */

long * FUN_1072f5bb4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [16];
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 auStack_b0 [32];
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [32];
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined ***pppuStack_40;
  undefined8 uStack_38;
  
  func_0x0001072f9a90();
  uStack_38 = extraout_x8;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x10))();
    if ((int)plVar1 == 0) {
      lStack_c8 = param_1[4];
      lStack_d0 = param_1[3];
      if (param_1[4] != 0) {
        do {
          func_0x0001072f9af4();
        } while (extraout_w10 != 0);
      }
      lStack_c0 = param_1[5];
      (**(code **)(*param_1 + 0x20))(auStack_e8,param_1);
      func_0x0001072f7904(auStack_b0,param_2);
      lStack_88 = lStack_c8;
      lStack_90 = lStack_d0;
      if (lStack_c8 != 0) {
        do {
          func_0x0001072f9af4();
        } while (extraout_w10_00 != 0);
      }
      lStack_80 = lStack_c0;
      func_0x0001072f4334(auStack_78,param_3);
      FUN_1072f7024(auStack_e8,0x38,1,auStack_b0);
      func_0x0001072f7944(auStack_b0);
      FUN_10724ae28(auStack_e0);
      param_1 = &lStack_d0;
      func_0x00010725b1d4();
    }
    else {
      (**(code **)(*param_1 + 0x18))();
      if (param_1 != (long *)0x0) {
        ppuStack_58 = &PTR_FUN_11099dab8;
        pppuStack_40 = &ppuStack_58;
        uStack_50 = param_3;
        uStack_48 = param_2;
        (**(code **)(*param_1 + 0x38))();
        func_0x0001072f9cb8();
      }
    }
  }
  func_0x0001072f9a64(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    plVar1 = param_1;
    func_0x0001072f9cb8();
    func_0x0001072f9b0c();
    func_0x0001072f9cc0();
    if ((bool)in_ZR) {
      uVar2 = 0x20;
    }
    else {
      if (plVar1 == (long *)0x0) {
        return param_1;
      }
      uVar2 = 0x28;
    }
    func_0x0001072f9bc8(uVar2);
    return param_1;
  }
  return param_1;
}



/* Entry: 1072f5d5c; end: 1072f5deb;  */

void FUN_1072f5d5c(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x0001072f9cc0();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x0001072f9bc8(uVar1);
  return;
}



/* Entry: 1072f5dec; end: 1072f5e07;  */

void FUN_1072f5dec(long param_1)

{
  FUN_1072ca12c();
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 1072f5e08; end: 1072f5e2b;  */

void FUN_1072f5e08(void)

{
  func_0x0001072f9b28();
  FUN_1072f5e2c();
  return;
}



/* Entry: 1072f5e2c; end: 1072f5e6b;  */

void FUN_1072f5e2c(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined4 unaff_w21;
  
  func_0x0001072f9b94();
  FUN_1072ca648();
  func_0x0001072f9e04();
  if (!(bool)in_ZR) {
    func_0x0001072f9ae4(&PTR_FUN_11099d998);
    *(undefined4 *)(unaff_x19 + 0x40) = unaff_w21;
  }
  return;
}



/* Entry: 1072f5e6c; end: 1072f5e7f;  */

void FUN_1072f5e6c(void)

{
  return;
}



/* Entry: 1072f5e80; end: 1072f5ea3;  */

void FUN_1072f5e80(void)

{
  func_0x0001072f9b28();
  FUN_1072f5ea4();
  return;
}



/* Entry: 1072f5ea4; end: 1072f5ee3;  */

void FUN_1072f5ea4(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined4 unaff_w21;
  
  func_0x0001072f9b94();
  FUN_1072dbce8();
  func_0x0001072f9e04();
  if (!(bool)in_ZR) {
    func_0x0001072f9ae4(&PTR_FUN_11099d9b0);
    *(undefined4 *)(unaff_x19 + 0x40) = unaff_w21;
  }
  return;
}



/* Entry: 1072f5ee4; end: 1072f5ef7;  */

void FUN_1072f5ee4(void)

{
  return;
}



/* Entry: 1072f5ef8; end: 1072f5f23;  */

void FUN_1072f5ef8(long param_1)

{
  long unaff_x19;
  
  func_0x0001072f9b88();
  FUN_10727da70();
  FUN_1072f5f24(param_1 + 0x28,unaff_x19 + 0x28);
  return;
}



/* Entry: 1072f5f24; end: 1072f5f4b;  */

void FUN_1072f5f24(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1072f5f4c; end: 1072f5f6b;  */

void FUN_1072f5f4c(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_1072f5f6c();
  }
  return;
}



/* Entry: 1072f5f6c; end: 1072f5f97;  */

long * FUN_1072f5f6c(long *param_1)

{
  (**(code **)(*param_1 + 8))(param_1 + 1);
  return param_1;
}



/* Entry: 1072f5f98; end: 1072f5fcf;  */

void FUN_1072f5f98(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072f9b88();
  func_0x0001072f5fec();
  FUN_1072f6294(unaff_x20 + 0x48,unaff_x19 + 0x48);
  FUN_1072f6294(unaff_x20 + 0x90,unaff_x19 + 0x90);
  return;
}



/* Entry: 1072f5fd0; end: 1072f603f;  */

void FUN_1072f5fd0(long param_1)

{
  FUN_1072f66e4();
  *(undefined1 *)(param_1 + 0xd8) = 1;
  return;
}



/* Entry: 1072f6040; end: 1072f606b;  */

void FUN_1072f6040(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x40) != 0) {
    FUN_1072ca648(lVar1);
    *(undefined4 *)(lVar1 + 0x40) = 0;
  }
  return;
}



/* Entry: 1072f606c; end: 1072f60d3;  */

void FUN_1072f606c(long *param_1,long param_2,long param_3)

{
  long extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *unaff_x19;
  undefined1 auStack_30 [16];
  
  if (*(int *)(*param_1 + 0x40) != 1) {
    FUN_107278b70(auStack_30,param_3);
    func_0x0001072f9cec();
    FUN_1072f6168();
    FUN_10726b09c(auStack_30);
    return;
  }
  if (param_2 != param_3) {
    func_0x00010729e4f0();
    if (extraout_x8 != 0) {
      do {
        func_0x00010729e450();
      } while (extraout_w10 != 0);
    }
    if (*unaff_x19 != 0) {
      do {
        func_0x00010729e504();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010729ea8c();
    func_0x000107295ce8();
    FUN_10726b120(auStack_30);
    if (*unaff_x19 != 0) {
      do {
        func_0x00010729e504();
      } while (extraout_w10_01 != 0);
    }
  }
  return;
}



/* Entry: 1072f60d4; end: 1072f6167;  */

void FUN_1072f60d4(long *param_1,long param_2,long param_3)

{
  char cVar1;
  long extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *unaff_x19;
  long lVar2;
  undefined1 auStack_70 [64];
  
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x40) != 2) {
    FUN_1072f625c(auStack_70,param_3);
    func_0x0001072f622c(lVar2,auStack_70);
    FUN_1072ca6a0(auStack_70);
    return;
  }
  func_0x0001072f6188(param_2,param_3);
  lVar2 = param_2 + 0x28;
  cVar1 = *(char *)(param_2 + 0x38);
  if (cVar1 != *(char *)(param_3 + 0x38)) {
    if (cVar1 == '\0') {
      FUN_107278b70();
      *(undefined1 *)(lVar2 + 0x10) = 1;
      return;
    }
    if (*(char *)(param_2 + 0x38) == '\x01') {
      FUN_10726b09c();
      *(undefined1 *)(lVar2 + 0x10) = 0;
    }
    return;
  }
  if (cVar1 == '\0') {
    return;
  }
  if (lVar2 != param_3 + 0x28) {
    func_0x00010729e4f0();
    if (extraout_x8 != 0) {
      do {
        func_0x00010729e450();
      } while (extraout_w10 != 0);
    }
    if (*unaff_x19 != 0) {
      do {
        func_0x00010729e504();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010729ea8c();
    func_0x000107295ce8();
    FUN_10726b120(&stack0xffffffffffffffd0);
    if (*unaff_x19 != 0) {
      do {
        func_0x00010729e504();
      } while (extraout_w10_01 != 0);
    }
  }
  return;
}



/* Entry: 1072f6168; end: 1072f625b;  */

void FUN_1072f6168(void)

{
  func_0x0001072f9b88();
  FUN_1072ca648();
  func_0x0001072f9c84();
  return;
}



/* Entry: 1072f625c; end: 1072f6293;  */

void FUN_1072f625c(long param_1)

{
  long unaff_x20;
  
  func_0x0001072f9b94();
  FUN_10727d6bc();
  FUN_107278b0c(param_1 + 0x28,unaff_x20 + 0x28);
  return;
}



/* Entry: 1072f6294; end: 1072f62e7;  */

void FUN_1072f6294(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x40) != -1 || *(int *)(param_2 + 0x40) != -1) {
    if (*(int *)(param_2 + 0x40) == -1) {
      if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
        func_0x0001072dc04c((&PTR_FUN_11099cc40)[*(uint *)(param_1 + 0x40)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
      return;
    }
    func_0x0001072f9d84();
  }
  return;
}



/* Entry: 1072f62e8; end: 1072f62fb;  */

void FUN_1072f62e8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_20;
  undefined8 uStack_18;
  
  lStack_20 = *param_1;
  if (*(int *)(lStack_20 + 0x40) != 0) {
    uStack_18 = param_3;
    FUN_1072f6328(&lStack_20);
  }
  return;
}



/* Entry: 1072f62fc; end: 1072f6327;  */

void FUN_1072f62fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_20;
  undefined8 uStack_18;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    lStack_20 = param_1;
    uStack_18 = param_3;
    FUN_1072f6328(&lStack_20);
  }
  return;
}



/* Entry: 1072f6328; end: 1072f634b;  */

void FUN_1072f6328(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_1072dbce8(lVar1);
  *(undefined4 *)(lVar1 + 0x40) = 0;
  return;
}



/* Entry: 1072f634c; end: 1072f6353;  */

void FUN_1072f634c(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long extraout_x8;
  int extraout_w10;
  long *unaff_x19;
  undefined8 auStack_30 [2];
  
  if (*(int *)(*param_2 + 0x40) != 1) {
    FUN_1072f638c(&stack0xffffffffffffffe0);
    return;
  }
  if (param_3 != param_4) {
    func_0x0001072f9cd0();
    auStack_30[0] = param_1;
    if (extraout_x8 != 0) {
      do {
        func_0x0001072f9af4();
      } while (extraout_w10 != 0);
    }
    if (*unaff_x19 != 0) {
      piVar1 = (int *)(*unaff_x19 + 0x18);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x0001072f9cec();
    FUN_1072f6498();
    FUN_1072dbde4(auStack_30);
    if (*unaff_x19 != 0) {
      piVar1 = (int *)(*unaff_x19 + 0x18);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  return;
}



/* Entry: 1072f6354; end: 1072f638b;  */

void FUN_1072f6354(undefined8 param_1,long param_2,long param_3,long param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long extraout_x8;
  int extraout_w10;
  long *unaff_x19;
  undefined8 auStack_30 [2];
  
  if (*(int *)(param_2 + 0x40) != 1) {
    FUN_1072f638c(&stack0xffffffffffffffe0);
    return;
  }
  if (param_3 != param_4) {
    func_0x0001072f9cd0();
    auStack_30[0] = param_1;
    if (extraout_x8 != 0) {
      do {
        func_0x0001072f9af4();
      } while (extraout_w10 != 0);
    }
    if (*unaff_x19 != 0) {
      piVar1 = (int *)(*unaff_x19 + 0x18);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x0001072f9cec();
    FUN_1072f6498();
    FUN_1072dbde4(auStack_30);
    if (*unaff_x19 != 0) {
      piVar1 = (int *)(*unaff_x19 + 0x18);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  return;
}



/* Entry: 1072f638c; end: 1072f63cb;  */

void FUN_1072f638c(long param_1)

{
  undefined1 auStack_30 [16];
  
  func_0x0001072f64f4(auStack_30,*(undefined8 *)(param_1 + 8));
  func_0x0001072f9cec();
  func_0x0001072f64d4();
  FUN_1072dbd40(auStack_30);
  return;
}



/* Entry: 1072f63cc; end: 1072f6453;  */

void FUN_1072f63cc(undefined8 param_1,long param_2,long param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long extraout_x8;
  int extraout_w10;
  long *unaff_x19;
  undefined8 auStack_30 [2];
  
  if (param_2 != param_3) {
    func_0x0001072f9cd0();
    auStack_30[0] = param_1;
    if (extraout_x8 != 0) {
      do {
        func_0x0001072f9af4();
      } while (extraout_w10 != 0);
    }
    if (*unaff_x19 != 0) {
      piVar1 = (int *)(*unaff_x19 + 0x18);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x0001072f9cec();
    FUN_1072f6498();
    FUN_1072dbde4(auStack_30);
    if (*unaff_x19 != 0) {
      piVar1 = (int *)(*unaff_x19 + 0x18);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  return;
}



/* Entry: 1072f6454; end: 1072f6497;  */

void FUN_1072f6454(undefined8 *param_1,long *param_2,undefined8 *param_3)

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
      func_0x0001072f9af4();
    } while (extraout_w10 != 0);
  }
  if (*param_2 != 0) {
    piVar1 = (int *)(*param_2 + 0x18);
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



/* Entry: 1072f6498; end: 1072f6517;  */

undefined8 * FUN_1072f6498(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_1072dbde4(&uStack_30);
  return param_1;
}



/* Entry: 1072f6518; end: 1072f651f;  */

void FUN_1072f6518(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(*param_1 + 0x40) == 2) {
    func_0x0001072f9b88(param_2,param_3);
    func_0x0001072f6188();
    FUN_1072f65cc(unaff_x20 + 0x28,unaff_x19 + 0x28);
    return;
  }
  FUN_1072f6584(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1072f6520; end: 1072f6557;  */

void FUN_1072f6520(long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x40) == 2) {
    func_0x0001072f9b88(param_2,param_3);
    func_0x0001072f6188();
    FUN_1072f65cc(unaff_x20 + 0x28,unaff_x19 + 0x28);
    return;
  }
  FUN_1072f6584(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1072f6558; end: 1072f6583;  */

void FUN_1072f6558(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072f9b88();
  func_0x0001072f6188();
  FUN_1072f65cc(unaff_x20 + 0x28,unaff_x19 + 0x28);
  return;
}



/* Entry: 1072f6584; end: 1072f65cb;  */

void FUN_1072f6584(long param_1)

{
  undefined1 auStack_60 [64];
  
  FUN_1072f6664(auStack_60,*(undefined8 *)(param_1 + 8));
  func_0x0001072f9cec();
  FUN_1072f6634();
  func_0x0001072dbe0c(auStack_60);
  return;
}



/* Entry: 1072f65cc; end: 1072f65f3;  */

void FUN_1072f65cc(undefined8 param_1,long param_2,long param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long extraout_x8;
  int extraout_w10;
  long *unaff_x19;
  undefined8 auStack_30 [2];
  
  cVar2 = *(char *)(param_2 + 0x10);
  if (cVar2 != *(char *)(param_3 + 0x10)) {
    if (cVar2 == '\0') {
      func_0x0001072f64f4();
      *(undefined1 *)(param_2 + 0x10) = 1;
      return;
    }
    if (*(char *)(param_2 + 0x10) == '\x01') {
      FUN_1072dbd40();
      *(undefined1 *)(param_2 + 0x10) = 0;
    }
    return;
  }
  if (cVar2 == '\0') {
    return;
  }
  if (param_2 != param_3) {
    func_0x0001072f9cd0();
    auStack_30[0] = param_1;
    if (extraout_x8 != 0) {
      do {
        func_0x0001072f9af4();
      } while (extraout_w10 != 0);
    }
    if (*unaff_x19 != 0) {
      piVar1 = (int *)(*unaff_x19 + 0x18);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x0001072f9cec();
    FUN_1072f6498();
    FUN_1072dbde4(auStack_30);
    if (*unaff_x19 != 0) {
      piVar1 = (int *)(*unaff_x19 + 0x18);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  return;
}



/* Entry: 1072f65f4; end: 1072f6633;  */

void FUN_1072f65f4(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_1072dbd40();
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 1072f6634; end: 1072f6663;  */

void FUN_1072f6634(void)

{
  long unaff_x20;
  
  func_0x0001072f9b88();
  FUN_1072dbce8();
  FUN_1072f5ef8();
  *(undefined4 *)(unaff_x20 + 0x40) = 2;
  return;
}



/* Entry: 1072f6664; end: 1072f669b;  */

void FUN_1072f6664(long param_1)

{
  long unaff_x20;
  
  func_0x0001072f9b94();
  FUN_10727d6bc();
  FUN_1072f669c(param_1 + 0x28,unaff_x20 + 0x28);
  return;
}



/* Entry: 1072f669c; end: 1072f66cf;  */

undefined1 * FUN_1072f669c(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x10] = 0;
  FUN_1072f66d0();
  return param_1;
}



/* Entry: 1072f66d0; end: 1072f66e3;  */

void FUN_1072f66d0(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    func_0x0001072f64f4();
    *(undefined1 *)(param_1 + 0x10) = 1;
    return;
  }
  return;
}



/* Entry: 1072f66e4; end: 1072f673b;  */

void FUN_1072f66e4(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072f9b94();
  FUN_1072f673c();
  FUN_1072f67c4(param_1 + 0x48,unaff_x20 + 0x48);
  FUN_1072f67c4(unaff_x19 + 0x90,unaff_x20 + 0x90);
  return;
}



/* Entry: 1072f673c; end: 1072f6767;  */

void FUN_1072f673c(void)

{
  func_0x0001072f9b28();
  FUN_1072f6768();
  return;
}



/* Entry: 1072f6768; end: 1072f67a7;  */

void FUN_1072f6768(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined4 unaff_w21;
  
  func_0x0001072f9b94();
  FUN_1072ca648();
  func_0x0001072f9e04();
  if (!(bool)in_ZR) {
    func_0x0001072f9ae4(&PTR_FUN_11099d9f8);
    *(undefined4 *)(unaff_x19 + 0x40) = unaff_w21;
  }
  return;
}



/* Entry: 1072f67a8; end: 1072f67c3;  */

void FUN_1072f67a8(void)

{
  return;
}



/* Entry: 1072f67c4; end: 1072f67ef;  */

void FUN_1072f67c4(void)

{
  func_0x0001072f9b28();
  FUN_1072f67f0();
  return;
}



/* Entry: 1072f67f0; end: 1072f682f;  */

void FUN_1072f67f0(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined4 unaff_w21;
  
  func_0x0001072f9b94();
  FUN_1072dbce8();
  func_0x0001072f9e04();
  if (!(bool)in_ZR) {
    func_0x0001072f9ae4(&PTR_FUN_11099da10);
    *(undefined4 *)(unaff_x19 + 0x40) = unaff_w21;
  }
  return;
}



/* Entry: 1072f6830; end: 1072f684b;  */

void FUN_1072f6830(void)

{
  return;
}



/* Entry: 1072f684c; end: 1072f68c7;  */

undefined8 * FUN_1072f684c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_1072f68c8(param_1 + 1,param_2 + 1);
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  if (*(char *)(param_2 + 0x1f) == '\x01') {
    func_0x0001072f6a2c(param_1 + 0x14,param_2 + 0x14);
    *(undefined1 *)(param_1 + 0x1f) = 1;
  }
  return param_1;
}



/* Entry: 1072f68c8; end: 1072f693f;  */

void FUN_1072f68c8(undefined1 *param_1)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072f9b94();
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  FUN_1072dbbe4();
  uVar1 = *(uint *)(unaff_x20 + 0x90);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_FUN_11099da28)[uVar1])(&stack0xffffffffffffffc8);
    *(uint *)(unaff_x19 + 0x90) = uVar1;
  }
  return;
}



/* Entry: 1072f6940; end: 1072f6967;  */

void FUN_1072f6940(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072f9b94(*param_1);
  _memcpy();
  FUN_1072f69bc(unaff_x19 + 0x48,unaff_x20 + 0x48);
  FUN_1072f69bc(unaff_x19 + 0x68,unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x20 + 0x88);
  return;
}



/* Entry: 1072f6968; end: 1072f69bb;  */

void FUN_1072f6968(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072f9b94();
  _memcpy();
  FUN_1072f69bc(unaff_x19 + 0x48,unaff_x20 + 0x48);
  FUN_1072f69bc(unaff_x19 + 0x68,unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x20 + 0x88);
  return;
}



/* Entry: 1072f69bc; end: 1072f6a5f;  */

void FUN_1072f69bc(long param_1,long param_2)

{
  long unaff_x19;
  
  func_0x0001072f9df8();
  if (param_1 == 0) {
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
  }
  else if (param_1 == param_2) {
    func_0x0001072f9a78();
  }
  else {
    func_0x0001072f9b70();
    *(long *)(unaff_x19 + 0x18) = param_1;
  }
  return;
}



/* Entry: 1072f6a60; end: 1072f6ab3;  */

undefined1 * FUN_1072f6a60(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x38] = 0;
  if (*(char *)(param_2 + 0x38) == '\x01') {
    func_0x0001079317dc(param_1,0,param_2);
    param_1[0x38] = 1;
  }
  return param_1;
}



/* Entry: 1072f6ab4; end: 1072f6ad3;  */

void FUN_1072f6ab4(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x0001079317b8();
  }
  return;
}



/* Entry: 1072f6ad4; end: 1072f6aeb;  */

void FUN_1072f6ad4(void)

{
  FUN_1072f6aec();
  return;
}



/* Entry: 1072f6aec; end: 1072f6b07;  */

void FUN_1072f6aec(long param_1)

{
  FUN_1072f6b08();
  *(undefined4 *)(param_1 + 8) = 7;
  return;
}



/* Entry: 1072f6b08; end: 1072f6b33;  */

undefined8 FUN_1072f6b08(undefined8 param_1,undefined8 param_2)

{
  FUN_1072ca1fc(param_1,param_2);
  return param_1;
}



/* Entry: 1072f6b34; end: 1072f6ba3;  */

undefined8 * FUN_1072f6b34(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1072f6ba4(param_1 + 3);
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_1072c9664(param_1 + 8);
  *(undefined1 *)(param_1 + 10) = param_3;
  *(undefined1 *)((long)param_1 + 0x51) = 1;
  return param_1;
}



/* Entry: 1072f6ba4; end: 1072f6bbf;  */

void FUN_1072f6ba4(long param_1)

{
  FUN_1072ca12c();
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



/* Entry: 1072f6bc0; end: 1072f6c57;  */

void FUN_1072f6bc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_50 [16];
  char cStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_1072f6c58(auStack_50,param_2,&uStack_38,param_3);
  if (cStack_40 == '\x01') {
    func_0x0001072f9cec();
    func_0x0001072f6c74();
  }
  else {
    param_1[1] = uStack_30;
    *param_1 = uStack_38;
    param_1[2] = uStack_28;
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_38 = 0;
    *(undefined4 *)(param_1 + 3) = 1;
  }
  FUN_10726b07c(auStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_38);
  return;
}



/* Entry: 1072f6c58; end: 1072f6c8b;  */

void FUN_1072f6c58(void)

{
  func_0x0001072f9dd8();
  func_0x000107534f30();
  return;
}



/* Entry: 1072f6c8c; end: 1072f6cd7;  */

void FUN_1072f6c8c(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_FUN_11099da38)[*(uint *)(param_1 + 0x18)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 1072f6cd8; end: 1072f6ce7;  */

void FUN_1072f6cd8(undefined8 param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = param_2;
  FUN_10726b0e4();
  if ((lVar1 == 1) && (func_0x000107274ee4(), extraout_x8 != 0)) {
    func_0x000107274f70();
    func_0x000107275200();
    func_0x000107275208();
  }
  FUN_10726b120(param_2);
  return;
}



/* Entry: 1072f6ce8; end: 1072f6d3f;  */

long FUN_1072f6ce8(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x0001077b0f58(param_1,&uStack_30);
  func_0x0001072c9b9c(&uStack_30);
  FUN_1072f5f24(param_1 + 0x28,param_3);
  return param_1;
}



/* Entry: 1072f6d40; end: 1072f6d57;  */

void FUN_1072f6d40(void)

{
  FUN_1072f6d58();
  return;
}



/* Entry: 1072f6d58; end: 1072f6d8f;  */

void FUN_1072f6d58(long param_1)

{
  FUN_1072f5ef8();
  *(undefined4 *)(param_1 + 0x40) = 2;
  return;
}



/* Entry: 1072f6d90; end: 1072f6d9f;  */

void FUN_1072f6d90(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = param_2;
  FUN_1072dbda8();
  pcVar1 = pcRam00000001138369a8;
  if ((puVar2 == (undefined8 *)0x1) && (pcRam00000001138369a8 != (code *)0x0)) {
    uStack_28 = param_2[1];
    uStack_30 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    (*pcVar1)(&uStack_30);
    func_0x0001000df524(&uStack_30);
  }
  FUN_1072dbde4(param_2);
  return;
}



/* Entry: 1072f6da0; end: 1072f6dc3;  */

undefined8 FUN_1072f6da0(undefined8 param_1)

{
  FUN_1072f6dc4(param_1);
  return param_1;
}



/* Entry: 1072f6dc4; end: 1072f6e4f;  */

void FUN_1072f6dc4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int extraout_w10;
  
  if ((bRam00000001131ad298 & 1) == 0) {
    iVar3 = 0x131ad298;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      FUN_1072f6e50(0x1131ad288);
      ___cxa_guard_release(0x1131ad298);
    }
  }
  lVar2 = lRam00000001131ad290;
  uVar1 = uRam00000001131ad288;
  param_1[1] = lRam00000001131ad290;
  *param_1 = uVar1;
  if (lVar2 != 0) {
    do {
      func_0x0001072f9af4();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1072f6e50; end: 1072f6e6b;  */

void FUN_1072f6e50(void)

{
  undefined1 uStack_11;
  
  FUN_1072f6e6c(&uStack_11);
  return;
}



/* Entry: 1072f6e6c; end: 1072f6ee3;  */

undefined1 * FUN_1072f6e6c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  func_0x0001072f9a90();
  uStack_28 = extraout_x8;
  func_0x0001072f9d14();
  puVar1 = puStack_30;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_11099df68;
  puStack_30[4] = 0;
  puStack_30[3] = 0;
  puStack_30[6] = 0;
  puStack_30[5] = 0;
  puStack_30 = (undefined8 *)0x0;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  func_0x0001072f6f74();
  func_0x0001072f9a64(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = param_3;
  puVar3 = puVar2;
  FUN_1072f6f0c();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 1072f6ee4; end: 1072f6f0b;  */

long FUN_1072f6ee4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1072f6f0c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1072f6f0c; end: 1072f6f3b;  */

void FUN_1072f6f0c(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x492492492492493) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x38);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_11099df68;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072f6f3c; end: 1072f6f3f;  */

void FUN_1072f6f3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099df68;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072f6f40; end: 1072f6f53;  */

void FUN_1072f6f40(void)

{
  func_0x0001072f6f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072f6f54; end: 1072f6f83;  */

long FUN_1072f6f54(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x18;
  func_0x0001056d1a8c(&lStack_28);
  return param_1 + 0x18;
}



/* Entry: 1072f6f84; end: 1072f6fab;  */

long FUN_1072f6f84(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1072f6fac; end: 1072f6fc7;  */

void FUN_1072f6fac(undefined8 *param_1)

{
  if (*(int *)(param_1 + 0x20) == 2) {
    return;
  }
  func_0x00010563ab98();
  *param_1 = &PTR_FUN_11099da68;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072f6fc8; end: 1072f6fcb;  */

void FUN_1072f6fc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099da68;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072f6fcc; end: 1072f6fdf;  */

void FUN_1072f6fcc(void)

{
  func_0x0001072f6fec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072f6fe0; end: 1072f6ffb;  */

void FUN_1072f6fe0(long param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = param_1 + 0x18;
  FUN_10726b2ac();
  if ((lVar1 == 1) && (func_0x000107274ee4(), extraout_x8 != 0)) {
    func_0x000107274f70();
    func_0x000107275200();
    func_0x000107275208();
  }
  func_0x00010726b230(param_1 + 0x18);
  return;
}



/* Entry: 1072f6ffc; end: 1072f7023;  */

long FUN_1072f6ffc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1072f7024; end: 1072f70db;  */

void FUN_1072f7024(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lStack_58;
  long alStack_50 [2];
  
  FUN_10724bb70(alStack_50,param_1 + 1);
  if (alStack_50[0] != 0) {
    FUN_1072f71cc(&lStack_58,*param_1,param_2,param_3,param_4);
    func_0x0001073ae140(alStack_50[0],&lStack_58);
    lVar1 = lStack_58;
    lStack_58 = 0;
    if (lVar1 != 0) {
      func_0x0001072f9b7c();
    }
  }
  func_0x00010724bcd8(alStack_50);
  return;
}



/* Entry: 1072f70dc; end: 1072f70e3;  */

void FUN_1072f70dc(void)

{
  return;
}


