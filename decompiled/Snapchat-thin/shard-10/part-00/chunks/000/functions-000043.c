/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1073a98fc; end: 1073a9983;  */

void FUN_1073a98fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 *extraout_x8_01;
  undefined1 *puVar3;
  int extraout_w11;
  undefined1 *puStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined8 uStack_38;
  
  puVar1 = auStack_50;
  func_0x0001073acc08();
  uStack_38 = extraout_x8;
  func_0x0001073ad11c();
  FUN_1073a99a0();
  FUN_1073a99ec(lStack_40,param_3,param_4);
  lVar2 = lStack_40;
  lStack_40 = 0;
  FUN_1073a9984(param_1,lVar2 + 0x18);
  FUN_1073aafb8();
  func_0x0001073acb9c(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073acda4();
  FUN_1073aafb8();
  func_0x0001073acc78();
  *extraout_x8_00 = puVar1;
  extraout_x8_00[1] = lVar2;
  puVar3 = (undefined1 *)0x0;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1 + 8;
  }
  if ((puVar3 != (undefined1 *)0x0) &&
     ((*(long *)(puVar3 + 8) == 0 || (*(long *)(*(long *)(puVar3 + 8) + 8) == -1)))) {
    pcStack_58 = FUN_1073a9984;
    lStack_68 = extraout_x8_00[1];
    puStack_70 = puVar1;
    puStack_60 = &stack0xfffffffffffffff0;
    if (lStack_68 != 0) {
      do {
        func_0x0001073acff0();
        puVar3 = extraout_x8_01;
      } while (extraout_w11 != 0);
    }
    FUN_1073aaf80(puVar3,&puStack_70);
    func_0x0001073ac578(&puStack_70);
    return;
  }
  return;
}



/* Entry: 1073a9984; end: 1073a999f;  */

void FUN_1073a9984(long *param_1,long param_2,long param_3)

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
        func_0x0001073acff0();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    FUN_1073aaf80(lVar1,&lStack_20);
    func_0x0001073ac578(&lStack_20);
    return;
  }
  return;
}



/* Entry: 1073a99a0; end: 1073a99bf;  */

void FUN_1073a99a0(void)

{
  func_0x0001073ad160();
  FUN_1073a99c0();
  func_0x0001073ad140();
  return;
}



/* Entry: 1073a99c0; end: 1073a99eb;  */

undefined8 * FUN_1073a99c0(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x88888888888889) {
    puVar1 = (undefined8 *)(param_2 * 0x1e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109aa988;
  param_1[1] = 0;
  FUN_1073a9a48(param_1 + 3);
  return param_1;
}



/* Entry: 1073a99ec; end: 1073a9a27;  */

undefined8 * FUN_1073a99ec(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109aa988;
  param_1[1] = 0;
  FUN_1073a9a48(param_1 + 3);
  return param_1;
}



/* Entry: 1073a9a28; end: 1073a9a2b;  */

void FUN_1073a9a28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109aa988;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1073a9a2c; end: 1073a9a3f;  */

void FUN_1073a9a2c(void)

{
  func_0x0001073aaf10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073a9a40; end: 1073a9a47;  */

void FUN_1073a9a40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001073accb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1073a9a48; end: 1073a9ad7;  */

void FUN_1073a9a48(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  
  func_0x0001073ad180();
  *param_1 = extraout_x8;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  FUN_1073a92a0(param_1 + 5);
  lVar1 = param_2[1];
  *(undefined8 *)(unaff_x19 + 0x128) = *param_2;
  *(long *)(unaff_x19 + 0x130) = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x0001073acbe4();
    } while (extraout_w10 != 0);
  }
  lVar1 = param_3[1];
  *(undefined8 *)(unaff_x19 + 0x138) = *param_3;
  *(long *)(unaff_x19 + 0x140) = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x0001073acbe4();
    } while (extraout_w10_00 != 0);
  }
  *(undefined4 *)(unaff_x19 + 0x148) = 0;
  *(undefined8 *)(unaff_x19 + 0x158) = 0;
  *(undefined8 *)(unaff_x19 + 0x150) = 0;
  *(undefined8 *)(unaff_x19 + 0x168) = 0;
  *(undefined8 *)(unaff_x19 + 0x160) = 0;
  *(undefined8 *)(unaff_x19 + 0x178) = 0;
  *(undefined8 *)(unaff_x19 + 0x170) = 0;
  *(undefined8 *)(unaff_x19 + 0x184) = 0;
  *(undefined8 *)(unaff_x19 + 0x17c) = 0;
  *(undefined8 *)(unaff_x19 + 0x198) = 0;
  *(undefined8 *)(unaff_x19 + 400) = 0;
  *(undefined8 *)(unaff_x19 + 0x1a8) = 0;
  *(undefined8 *)(unaff_x19 + 0x1a0) = 0;
  *(undefined8 *)(unaff_x19 + 0x1b8) = 0;
  *(undefined8 *)(unaff_x19 + 0x1b0) = 0;
  *(undefined2 *)(unaff_x19 + 0x1c0) = 0;
  return;
}



/* Entry: 1073a9ad8; end: 1073a9adb;  */

void FUN_1073a9ad8(undefined8 *param_1)

{
  undefined8 extraout_x8;
  long unaff_x19;
  
  func_0x0001073ad180();
  *param_1 = extraout_x8;
  func_0x000100601c8c(param_1 + 0x31);
  func_0x000100601aa4(unaff_x19 + 0x180);
  FUN_1073a9c10(unaff_x19 + 0x150);
  func_0x000100c21e50(unaff_x19 + 0x138);
  func_0x000100450be4(unaff_x19 + 0x128);
  func_0x00010060867c(unaff_x19 + 0x28);
  FUN_1073a9dd0(unaff_x19 + 0x20);
  func_0x0001004a5c90(unaff_x19 + 0x18);
  FUN_1073a9e28(param_1 + 1);
  return;
}



/* Entry: 1073a9adc; end: 1073a9aef;  */

void FUN_1073a9adc(void)

{
  func_0x0001073a9e4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073a9af0; end: 1073a9ba3;  */

void FUN_1073a9af0(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4)

{
  long extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  long lVar1;
  long alStack_80 [3];
  undefined1 auStack_68 [16];
  undefined8 auStack_58 [2];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  
  func_0x0001073acef0();
  lVar1 = *(long *)(extraout_x8 + 0x128);
  if (*param_2 == lVar1) {
    if ((*(uint *)(extraout_x8 + 0x148) & 0xfffffffe) == 2) {
      lVar1 = *param_4;
      if (lVar1 != 0) {
        func_0x0001073ad08c(extraout_x8,&UNK_10f40eb41);
        func_0x0001073ad128();
        func_0x0001073ace48();
        func_0x0001073ad050();
        (*extraout_x8_01)(lVar1,auStack_68);
        func_0x0001073acdb8();
        func_0x0001073acde8();
      }
    }
    else {
      func_0x0001073acedc();
      FUN_1073aade4();
      func_0x0001073ad134();
      auStack_58[0] = param_1;
      if (extraout_x8_02 != 0) {
        do {
          func_0x0001073acbe4();
        } while (extraout_w10_00 != 0);
      }
      FUN_1073aa0a0(alStack_80,unaff_x19 + 0x128,auStack_68);
      FUN_1073aa6a8(auStack_68);
      lVar1 = alStack_80[0];
      alStack_80[0] = 0;
      func_0x0001073aa6d0(auStack_68,param_3,param_4,lVar1);
      func_0x0001073aa70c(unaff_x19 + 0x150,auStack_68);
      FUN_1073aa044(unaff_x19);
      FUN_1073a9d58(auStack_68);
      lVar1 = alStack_80[0];
      alStack_80[0] = 0;
      if (lVar1 != 0) {
        func_0x0001073acbd8();
      }
    }
    return;
  }
  FUN_1073aade4(auStack_58,extraout_x8 + 8);
  func_0x000100608b3c(auStack_48,param_3);
  func_0x0001073ad134();
  uStack_40 = param_1;
  if (extraout_x8_00 != 0) {
    do {
      func_0x0001073acbe4();
    } while (extraout_w10 != 0);
  }
  FUN_1073a9fe8(lVar1,auStack_58);
  func_0x0001073aae20(auStack_58);
  return;
}



/* Entry: 1073a9ba4; end: 1073a9c0f;  */

void FUN_1073a9ba4(long *param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  undefined8 in_stack_ffffffffffffffd8;
  
  func_0x0001073acef0();
  lVar2 = *(long *)(extraout_x8 + 0x128);
  if (*param_1 != lVar2) {
    FUN_1073aade4(&stack0xffffffffffffffd0,extraout_x8 + 8);
    FUN_1073aae50(lVar2,&stack0xffffffffffffffd0);
    func_0x0001073ac578(&stack0xffffffffffffffd0);
    return;
  }
  if (*(int *)(extraout_x8 + 0x148) != 3) {
    if (*(char *)(extraout_x8 + 0x1c0) == '\x01') {
      lVar2 = *(long *)(extraout_x8 + 0x18);
      (**(code **)(*plRam0000000113815c70 + 0x80))(plRam0000000113815c70,lVar2 + 0x18);
      if (*(long *)(lVar2 + 0x58) == 0) {
        *(undefined1 *)(lVar2 + 0x60) = 1;
      }
      else {
        func_0x000104ae3294(lVar2);
        func_0x000104ad8de8(*(undefined8 *)(lVar2 + 0x58),0);
      }
      (**(code **)(*plRam0000000113815c70 + 0x88))(plRam0000000113815c70,lVar2 + 0x18);
      return;
    }
    FUN_1073aa310(extraout_x8);
    if ((*(byte *)(extraout_x8 + 0x1c1) & 1) == 0) {
      iVar1 = *(int *)(extraout_x8 + 0x148);
      *(undefined4 *)(extraout_x8 + 0x148) = 2;
      if (iVar1 != 0) {
        func_0x0001073ace24();
        func_0x0001073ad040();
        FUN_1073aa4b8();
        func_0x0001073acdb0();
        lVar2 = *(long *)(extraout_x8 + 0x20);
        func_0x000104c015d0(lVar2,in_stack_ffffffffffffffd8);
        *(undefined1 *)(extraout_x8 + 0x1c1) = 1;
        func_0x0001073aced0();
        if (lVar2 != 0) {
          func_0x0001073acbd8();
        }
      }
    }
  }
  return;
}



/* Entry: 1073a9c10; end: 1073a9c53;  */

long * FUN_1073a9c10(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_1073a9c54();
  puVar1 = (undefined8 *)param_1[2];
  for (puVar2 = (undefined8 *)param_1[1]; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    __ZdlPv(*puVar2);
  }
  FUN_1073a9dac();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1073a9c54; end: 1073a9d0b;  */

void FUN_1073a9c54(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  plVar1 = param_1;
  FUN_1073a9d0c();
  lVar3 = param_2;
  func_0x0001073ad0bc();
  do {
    lVar5 = param_2 + -0x1000;
    do {
      if (param_2 == lVar3) {
        param_1[5] = 0;
        puVar2 = (undefined8 *)param_1[1];
        while (uVar4 = param_1[2] - (long)puVar2 >> 3, 2 < uVar4) {
          __ZdlPv(*puVar2);
          puVar2 = (undefined8 *)(param_1[1] + 8);
          param_1[1] = (long)puVar2;
        }
        if (uVar4 == 1) {
          lVar3 = 0x40;
        }
        else {
          if (uVar4 != 2) {
            return;
          }
          lVar3 = 0x80;
        }
        param_1[4] = lVar3;
        return;
      }
      FUN_1073a9d58(param_2);
      param_2 = param_2 + 0x20;
      lVar5 = lVar5 + 0x20;
    } while (*plVar1 != lVar5);
    plVar1 = plVar1 + 1;
    param_2 = *plVar1;
  } while( true );
}



/* Entry: 1073a9d0c; end: 1073a9d57;  */

void FUN_1073a9d0c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 1073a9d58; end: 1073a9dab;  */

long * FUN_1073a9d58(long *param_1)

{
  long extraout_x8;
  
  func_0x0001072f169c(param_1 + 1);
  if (*param_1 != 0) {
    func_0x000100608b94();
    (**(code **)(extraout_x8 + 0xc0))();
  }
  return param_1;
}



/* Entry: 1073a9dac; end: 1073a9dcf;  */

void FUN_1073a9dac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1073a9dd0; end: 1073a9df3;  */

undefined8 FUN_1073a9dd0(undefined8 param_1)

{
  FUN_1073a9df4(param_1,0);
  return param_1;
}



/* Entry: 1073a9df4; end: 1073a9e0b;  */

long FUN_1073a9df4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x000104c01188(lVar1 + 0x4b0);
    func_0x000104c01224(lVar1 + 0x308);
    func_0x000104c011b8(lVar1 + 0x1a0);
    func_0x000104c011f4(lVar1 + 0x58);
    return lVar1;
  }
  return 0;
}



/* Entry: 1073a9e0c; end: 1073a9e27;  */

void FUN_1073a9e0c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000100836b24(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073a9e28; end: 1073a9eb7;  */

void FUN_1073a9e28(long param_1)

{
  func_0x0001073acf2c();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 1073a9eb8; end: 1073a9fe7;  */

void FUN_1073a9eb8(undefined8 param_1,long param_2,undefined8 param_3,long *param_4)

{
  code *extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  long unaff_x19;
  long lVar1;
  long alStack_80 [3];
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  
  if ((*(uint *)(param_2 + 0x148) & 0xfffffffe) == 2) {
    lVar1 = *param_4;
    if (lVar1 != 0) {
      func_0x0001073ad08c(param_2,&UNK_10f40eb41);
      func_0x0001073ad128();
      func_0x0001073ace48();
      func_0x0001073ad050();
      (*extraout_x8)(lVar1,auStack_68);
      func_0x0001073acdb8();
      func_0x0001073acde8();
    }
  }
  else {
    func_0x0001073acedc();
    FUN_1073aade4();
    func_0x0001073ad134();
    uStack_58 = param_1;
    if (extraout_x8_00 != 0) {
      do {
        func_0x0001073acbe4();
      } while (extraout_w10 != 0);
    }
    FUN_1073aa0a0(alStack_80,unaff_x19 + 0x128,auStack_68);
    FUN_1073aa6a8(auStack_68);
    lVar1 = alStack_80[0];
    alStack_80[0] = 0;
    func_0x0001073aa6d0(auStack_68,param_3,param_4,lVar1);
    func_0x0001073aa70c(unaff_x19 + 0x150,auStack_68);
    FUN_1073aa044();
    FUN_1073a9d58(auStack_68);
    lVar1 = alStack_80[0];
    alStack_80[0] = 0;
    if (lVar1 != 0) {
      func_0x0001073acbd8();
    }
  }
  return;
}



/* Entry: 1073a9fe8; end: 1073aa043;  */

undefined1 * FUN_1073a9fe8(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  ulong uVar2;
  undefined1 auStack_88 [96];
  undefined8 uStack_28;
  
  func_0x0001073acc08();
  puVar1 = auStack_88;
  uStack_28 = extraout_x8;
  FUN_1073aacd4();
  func_0x0001073ad050();
  func_0x0001073acd24();
  func_0x0001073acbc8();
  func_0x0001073acb9c(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x0001073acbc8();
  func_0x0001073acc78();
  if (((*(int *)(puVar1 + 0x148) == 1) && ((puVar1[0x1c0] & 1) == 0)) &&
     (*(long *)(puVar1 + 0x178) != 0)) {
    puVar1[0x1c0] = 1;
    func_0x0001073acf4c(*(undefined8 *)(puVar1 + 0x20));
    func_0x000104c01680();
    FUN_1073a9d58(*(long *)(*(long *)(puVar1 + 0x158) + (*(ulong *)(puVar1 + 0x170) >> 7) * 8) +
                  (*(ulong *)(puVar1 + 0x170) & 0x7f) * 0x20);
    *(long *)(puVar1 + 0x178) = *(long *)(puVar1 + 0x178) + -1;
    *(long *)(puVar1 + 0x170) = *(long *)(puVar1 + 0x170) + 1;
    uVar2 = *(ulong *)(puVar1 + 0x170);
    if (uVar2 < 0x100 == 0) {
      __ZdlPv(**(undefined8 **)(puVar1 + 0x158));
      *(long *)(puVar1 + 0x158) = *(long *)(puVar1 + 0x158) + 8;
      *(long *)(puVar1 + 0x170) = *(long *)(puVar1 + 0x170) + -0x80;
    }
    return (undefined1 *)(ulong)(uVar2 < 0x100 ^ 1);
  }
  return puVar1;
}



/* Entry: 1073aa044; end: 1073aa09f;  */

ulong FUN_1073aa044(ulong param_1)

{
  uint uVar1;
  
  if (((*(int *)(param_1 + 0x148) == 1) && ((*(byte *)(param_1 + 0x1c0) & 1) == 0)) &&
     (*(long *)(param_1 + 0x178) != 0)) {
    *(undefined1 *)(param_1 + 0x1c0) = 1;
    func_0x0001073acf4c(*(undefined8 *)(param_1 + 0x20));
    func_0x000104c01680();
    FUN_1073a9d58(*(long *)(*(long *)(param_1 + 0x158) + (*(ulong *)(param_1 + 0x170) >> 7) * 8) +
                  (*(ulong *)(param_1 + 0x170) & 0x7f) * 0x20);
    *(long *)(param_1 + 0x178) = *(long *)(param_1 + 0x178) + -1;
    *(long *)(param_1 + 0x170) = *(long *)(param_1 + 0x170) + 1;
    uVar1 = (uint)(*(ulong *)(param_1 + 0x170) < 0x100);
    if (uVar1 == 0) {
      __ZdlPv(**(undefined8 **)(param_1 + 0x158));
      *(long *)(param_1 + 0x158) = *(long *)(param_1 + 0x158) + 8;
      *(long *)(param_1 + 0x170) = *(long *)(param_1 + 0x170) + -0x80;
    }
    return (ulong)(uVar1 ^ 1);
  }
  return param_1;
}



/* Entry: 1073aa0a0; end: 1073aa0d3;  */

void FUN_1073aa0a0(void)

{
  undefined8 uVar1;
  undefined8 *extraout_x8;
  
  func_0x0001073acec4();
  uVar1 = 0x40;
  __Znwm();
  func_0x0001073acf40();
  FUN_1073aa0d4();
  *extraout_x8 = uVar1;
  return;
}



/* Entry: 1073aa0d4; end: 1073aa10b;  */

undefined8 * FUN_1073aa0d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x0001004b6e88();
  *puVar1 = &PTR_FUN_1109aaa60;
  func_0x0001073aa12c(puVar1 + 4,param_3);
  return param_1;
}



/* Entry: 1073aa10c; end: 1073aa10f;  */

undefined8 * FUN_1073aa10c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109aaa60;
  FUN_1073aa6a8(param_1 + 4);
  *param_1 = &PTR_DAT_110880018;
  func_0x000100450be4(param_1 + 1);
  return param_1;
}



/* Entry: 1073aa110; end: 1073aa123;  */

void FUN_1073aa110(void)

{
  FUN_1073aa160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073aa124; end: 1073aa15f;  */

void FUN_1073aa124(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_1 + 0x20);
  lVar2 = *plVar1;
  *(undefined1 *)(lVar2 + 0x1c0) = 0;
  plVar3 = *(long **)(param_1 + 0x30);
  if (plVar3 == (long *)0x0) {
    if (param_2 == 0) goto LAB_1073aa230;
  }
  else {
    if (param_2 == 0) {
      func_0x0001073ad08c(lVar2,&DAT_10f2fde95);
      func_0x0001073ad128();
      func_0x000105394120();
      func_0x0001073ad094(*(undefined8 *)(*plVar3 + 0x10));
      func_0x0001073acdb8();
      func_0x0001073acde8();
      lVar2 = *plVar1;
      goto LAB_1073aa230;
    }
    func_0x0001073ad08c(lVar2,"");
    func_0x0001073ad128();
    func_0x000105394120();
    func_0x0001073ad094(*(undefined8 *)(*plVar3 + 0x10));
    func_0x0001073acdb8();
    func_0x0001073acde8();
    lVar2 = *plVar1;
  }
  if (*(int *)(lVar2 + 0x148) == 1) {
    FUN_1073aa044();
    return;
  }
LAB_1073aa230:
  FUN_1073aa258(lVar2);
  return;
}



/* Entry: 1073aa160; end: 1073aa18b;  */

undefined8 * FUN_1073aa160(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109aaa60;
  FUN_1073aa6a8(param_1 + 4);
  *param_1 = &PTR_DAT_110880018;
  func_0x000100450be4(param_1 + 1);
  return param_1;
}



/* Entry: 1073aa18c; end: 1073aa257;  */

void FUN_1073aa18c(long *param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_1;
  *(undefined1 *)(lVar1 + 0x1c0) = 0;
  plVar2 = (long *)param_1[2];
  if (plVar2 == (long *)0x0) {
    if (param_2 == 0) goto LAB_1073aa230;
  }
  else {
    if (param_2 == 0) {
      func_0x0001073ad08c(lVar1,&DAT_10f2fde95);
      func_0x0001073ad128();
      func_0x000105394120();
      func_0x0001073ad094(*(undefined8 *)(*plVar2 + 0x10));
      func_0x0001073acdb8();
      func_0x0001073acde8();
      lVar1 = *param_1;
      goto LAB_1073aa230;
    }
    func_0x0001073ad08c(lVar1,"");
    func_0x0001073ad128();
    func_0x000105394120();
    func_0x0001073ad094(*(undefined8 *)(*plVar2 + 0x10));
    func_0x0001073acdb8();
    func_0x0001073acde8();
    lVar1 = *param_1;
  }
  if (*(int *)(lVar1 + 0x148) == 1) {
    FUN_1073aa044();
    return;
  }
LAB_1073aa230:
  FUN_1073aa258(lVar1);
  return;
}



/* Entry: 1073aa258; end: 1073aa30f;  */

void FUN_1073aa258(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 in_stack_ffffffffffffffd8;
  
  if (*(int *)(param_1 + 0x148) != 3) {
    if (*(char *)(param_1 + 0x1c0) == '\x01') {
      lVar2 = *(long *)(param_1 + 0x18);
      (**(code **)(*plRam0000000113815c70 + 0x80))(plRam0000000113815c70,lVar2 + 0x18);
      if (*(long *)(lVar2 + 0x58) == 0) {
        *(undefined1 *)(lVar2 + 0x60) = 1;
      }
      else {
        func_0x000104ae3294(lVar2);
        func_0x000104ad8de8(*(undefined8 *)(lVar2 + 0x58),0);
      }
      (**(code **)(*plRam0000000113815c70 + 0x88))(plRam0000000113815c70,lVar2 + 0x18);
      return;
    }
    FUN_1073aa310(param_1);
    if ((*(byte *)(param_1 + 0x1c1) & 1) == 0) {
      iVar1 = *(int *)(param_1 + 0x148);
      *(undefined4 *)(param_1 + 0x148) = 2;
      if (iVar1 != 0) {
        func_0x0001073ace24();
        func_0x0001073ad040();
        FUN_1073aa4b8();
        func_0x0001073acdb0();
        lVar2 = *(long *)(param_1 + 0x20);
        func_0x000104c015d0(lVar2,in_stack_ffffffffffffffd8);
        *(undefined1 *)(param_1 + 0x1c1) = 1;
        func_0x0001073aced0();
        if (lVar2 != 0) {
          func_0x0001073acbd8();
        }
      }
    }
  }
  return;
}



/* Entry: 1073aa310; end: 1073aa3d7;  */

void FUN_1073aa310(long param_1)

{
  long *plVar1;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [56];
  undefined1 auStack_50 [8];
  long *plStack_48;
  long lStack_38;
  
  while (*(long *)(param_1 + 0x178) != 0) {
    func_0x0001073acf4c();
    FUN_1073aa3d8(auStack_50);
    func_0x0001073aa408(param_1 + 0x150);
    plVar1 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      func_0x00010002b838(auStack_a0,&UNK_10f40eb41);
      func_0x0001073ad128();
      func_0x0001073ace48();
      (**(code **)(*plVar1 + 0x10))(plVar1,auStack_88);
      func_0x0001073acdb8();
      func_0x0001073acde8();
    }
    if (lStack_38 != 0) {
      func_0x0001073acbd8();
    }
    FUN_1073a9d58(auStack_50);
  }
  return;
}



/* Entry: 1073aa3d8; end: 1073aa4b7;  */

void FUN_1073aa3d8(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000100608b3c();
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return;
}



/* Entry: 1073aa4b8; end: 1073aa4df;  */

void FUN_1073aa4b8(undefined8 param_1)

{
  undefined8 *unaff_x21;
  
  func_0x0001073acbf4();
  func_0x0001073acf40();
  FUN_1073aa4e0();
  *unaff_x21 = param_1;
  return;
}



/* Entry: 1073aa4e0; end: 1073aa503;  */

void FUN_1073aa4e0(void)

{
  func_0x0001073acfb8();
  func_0x0001073acd04(&PTR_FUN_1109aaab8);
  return;
}



/* Entry: 1073aa504; end: 1073aa507;  */

undefined8 * FUN_1073aa504(undefined8 *param_1)

{
  func_0x0001073acf38(&PTR_FUN_1109aaab8);
  *param_1 = &PTR_DAT_110880018;
  func_0x000100450be4(param_1 + 1);
  return param_1;
}



/* Entry: 1073aa508; end: 1073aa51b;  */

void FUN_1073aa508(void)

{
  FUN_1073aa524();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073aa51c; end: 1073aa523;  */

void FUN_1073aa51c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  lStack_38 = *(long *)(param_1 + 0x20);
  lStack_30 = *(long *)(param_1 + 0x28);
  if (lStack_30 != 0) {
    plVar1 = (long *)(lStack_30 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1073aa5d8(&uStack_28,lStack_38 + 0x128,&lStack_38);
  func_0x0001073acdb0();
  uVar4 = uStack_28;
  lVar6 = *(long *)(param_1 + 0x20);
  lVar5 = *(long *)(lVar6 + 0x20);
  uStack_28 = 0;
  func_0x000104c01564(lVar5,lVar6 + 0x188,uVar4);
  func_0x0001073aced0();
  if (lVar5 != 0) {
    func_0x0001073acbd8();
  }
  return;
}



/* Entry: 1073aa524; end: 1073aa54b;  */

undefined8 * FUN_1073aa524(undefined8 *param_1)

{
  func_0x0001073acf38(&PTR_FUN_1109aaab8);
  *param_1 = &PTR_DAT_110880018;
  func_0x000100450be4(param_1 + 1);
  return param_1;
}



/* Entry: 1073aa54c; end: 1073aa5d7;  */

void FUN_1073aa54c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  lStack_38 = *param_1;
  lStack_30 = param_1[1];
  if (lStack_30 != 0) {
    plVar1 = (long *)(lStack_30 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1073aa5d8(&uStack_28,lStack_38 + 0x128,&lStack_38);
  func_0x0001073acdb0();
  uVar4 = uStack_28;
  lVar5 = *(long *)(*param_1 + 0x20);
  uStack_28 = 0;
  func_0x000104c01564(lVar5,*param_1 + 0x188,uVar4);
  func_0x0001073aced0();
  if (lVar5 != 0) {
    func_0x0001073acbd8();
  }
  return;
}



/* Entry: 1073aa5d8; end: 1073aa5ff;  */

void FUN_1073aa5d8(undefined8 param_1)

{
  undefined8 *unaff_x21;
  
  func_0x0001073acbf4();
  func_0x0001073acf40();
  FUN_1073aa600();
  *unaff_x21 = param_1;
  return;
}



/* Entry: 1073aa600; end: 1073aa623;  */

void FUN_1073aa600(void)

{
  func_0x0001073acfb8();
  func_0x0001073acd04(&PTR_FUN_1109aab10);
  return;
}



/* Entry: 1073aa624; end: 1073aa627;  */

undefined8 * FUN_1073aa624(undefined8 *param_1)

{
  func_0x0001073acf38(&PTR_FUN_1109aab10);
  *param_1 = &PTR_DAT_110880018;
  func_0x000100450be4(param_1 + 1);
  return param_1;
}



/* Entry: 1073aa628; end: 1073aa63b;  */

void FUN_1073aa628(void)

{
  FUN_1073aa644();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073aa63c; end: 1073aa643;  */

void FUN_1073aa63c(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(lVar2 + 0x148) = 3;
  plVar1 = *(long **)(lVar2 + 0x138);
  if (*(int *)(lVar2 + 0x188) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001073aa698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,lVar2 + 0x28,lVar2 + 0x188,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001073aa6a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))(plVar1,lVar2 + 0x28);
  return;
}



/* Entry: 1073aa644; end: 1073aa66b;  */

undefined8 * FUN_1073aa644(undefined8 *param_1)

{
  func_0x0001073acf38(&PTR_FUN_1109aab10);
  *param_1 = &PTR_DAT_110880018;
  func_0x000100450be4(param_1 + 1);
  return param_1;
}



/* Entry: 1073aa66c; end: 1073aa6a7;  */

void FUN_1073aa66c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  *(undefined4 *)(lVar2 + 0x148) = 3;
  plVar1 = *(long **)(lVar2 + 0x138);
  if (*(int *)(lVar2 + 0x188) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001073aa698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,lVar2 + 0x28,lVar2 + 0x188,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001073aa6a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))(plVar1,lVar2 + 0x28);
  return;
}



/* Entry: 1073aa6a8; end: 1073aa76b;  */

undefined8 FUN_1073aa6a8(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001072f169c(param_1 + 0x10);
  func_0x0001073acf2c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1073aa76c; end: 1073aa793;  */

long FUN_1073aa76c(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar1 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) * 0x10 + -1;
  }
  return lVar1 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
}



/* Entry: 1073aa794; end: 1073aa8eb;  */

void FUN_1073aa794(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  long *plStack_30;
  
  if ((ulong)param_1[4] < 0x80) {
    uVar6 = param_1[2] - param_1[1];
    plVar2 = param_1 + 3;
    lVar4 = *plVar2;
    uVar5 = lVar4 - *param_1;
    if (uVar5 <= uVar6) {
      lVar1 = (long)uVar5 >> 2;
      if (lVar4 == *param_1) {
        lVar1 = 1;
      }
      plStack_30 = plVar2;
      FUN_1073aac08();
      lStack_48 = (long)plVar2 + uVar6;
      plStack_38 = plVar2 + lVar1;
      uVar3 = 0x1000;
      lStack_50 = (long)plVar2;
      lStack_40 = lStack_48;
      __Znwm();
      plStack_60 = param_1 + 5;
      uStack_58 = 0x80;
      uStack_70 = uVar3;
      uStack_68 = uVar3;
      FUN_1073aaa9c(&lStack_50,&uStack_70);
      uStack_68 = 0;
      lVar4 = param_1[2];
      while (lVar1 = param_1[1], lVar4 != lVar1) {
        lVar4 = lVar4 + -8;
        FUN_1073aab28(&lStack_50,lVar4);
      }
      lVar4 = *param_1;
      lVar8 = param_1[3];
      lVar7 = param_1[2];
      param_1[1] = lStack_48;
      *param_1 = lStack_50;
      param_1[3] = (long)plStack_38;
      param_1[2] = lStack_40;
      lStack_50 = lVar4;
      lStack_48 = lVar1;
      lStack_40 = lVar7;
      plStack_38 = (long *)lVar8;
      FUN_1073aac48(&uStack_68);
      FUN_1073aac84(&lStack_50);
      return;
    }
    lVar1 = 0x1000;
    if (lVar4 != param_1[2]) {
      __Znwm();
      lStack_50 = lVar1;
      func_0x0001073ad194();
      FUN_1073aa970();
      return;
    }
    __Znwm();
    lStack_50 = lVar1;
    func_0x0001073ad194();
    FUN_1073aa9f4();
  }
  else {
    param_1[4] = param_1[4] - 0x80;
  }
  lStack_50 = *(long *)param_1[1];
  param_1[1] = (long)((long *)param_1[1] + 1);
  func_0x0001073ad194();
  FUN_1073aa8ec();
  return;
}



/* Entry: 1073aa8ec; end: 1073aa96f;  */

void FUN_1073aa8ec(long param_1)

{
  ulong uVar1;
  undefined1 in_ZR;
  bool bVar2;
  long extraout_x8;
  ulong uVar3;
  ulong *unaff_x19;
  
  func_0x0001073acddc();
  func_0x0001073ad030();
  if ((bool)in_ZR) {
    uVar1 = *unaff_x19;
    bVar2 = unaff_x19[1] == uVar1;
    if (uVar1 < unaff_x19[1]) {
      func_0x0001073acce8();
      if (!bVar2) {
        func_0x0001073ace50();
      }
      func_0x0001073ad020();
    }
    else {
      uVar3 = (long)(extraout_x8 - uVar1) >> 2;
      if (extraout_x8 - uVar1 == 0) {
        uVar3 = 0;
      }
      func_0x0001073acea8();
      func_0x0001073acc24(param_1 + (uVar3 >> 2) * 8);
      func_0x0001073acf0c();
      func_0x0001073acbb0();
    }
  }
  func_0x0001073ad010();
  return;
}



/* Entry: 1073aa970; end: 1073aa9f3;  */

void FUN_1073aa970(long param_1)

{
  ulong uVar1;
  undefined1 in_ZR;
  bool bVar2;
  long extraout_x8;
  ulong uVar3;
  ulong *unaff_x19;
  
  func_0x0001073acddc();
  func_0x0001073ad030();
  if ((bool)in_ZR) {
    uVar1 = *unaff_x19;
    bVar2 = unaff_x19[1] == uVar1;
    if (uVar1 < unaff_x19[1]) {
      func_0x0001073acce8();
      if (!bVar2) {
        func_0x0001073ace50();
      }
      func_0x0001073ad020();
    }
    else {
      uVar3 = (long)(extraout_x8 - uVar1) >> 2;
      if (extraout_x8 - uVar1 == 0) {
        uVar3 = 0;
      }
      func_0x0001073acea8();
      func_0x0001073acc24(param_1 + (uVar3 >> 2) * 8);
      func_0x0001073acf0c();
      func_0x0001073acbb0();
    }
  }
  func_0x0001073ad010();
  return;
}



/* Entry: 1073aa9f4; end: 1073aaa9b;  */

void FUN_1073aa9f4(ulong *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  long extraout_x8;
  long lVar3;
  long lVar4;
  long extraout_x9;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  ulong uVar5;
  long unaff_x22;
  
  func_0x0001073acddc();
  uVar5 = param_1[1];
  bVar1 = *param_1 <= uVar5;
  uVar2 = uVar5 == *param_1;
  if ((bool)uVar2) {
    lVar3 = unaff_x19;
    func_0x0001073ad030();
    if (bVar1) {
      lVar4 = (long)(extraout_x9 - uVar5) >> 2;
      if (extraout_x9 - uVar5 == 0) {
        lVar4 = 1;
      }
      FUN_1073aac08();
      func_0x0001073acc24(lVar3 + (lVar4 * 2 + 6U & 0xfffffffffffffff8));
      func_0x0001073acf0c();
      func_0x0001073acbb0();
      uVar5 = *(ulong *)(unaff_x19 + 8);
    }
    else {
      func_0x0001073acdf0();
      lVar3 = extraout_x8;
      if (!(bool)uVar2) {
        _memmove();
        lVar3 = *(long *)(unaff_x19 + 0x10);
      }
      *(ulong *)(unaff_x19 + 8) = unaff_x21;
      *(long *)(unaff_x19 + 0x10) = lVar3 + unaff_x22 * 8;
      uVar5 = unaff_x21;
    }
  }
  *(undefined8 *)(uVar5 - 8) = *unaff_x20;
  *(undefined8 **)(unaff_x19 + 8) = (undefined8 *)(uVar5 - 8);
  return;
}



/* Entry: 1073aaa9c; end: 1073aab27;  */

void FUN_1073aaa9c(long param_1)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x19;
  
  func_0x0001073acddc();
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
    uVar4 = *unaff_x19;
    bVar2 = unaff_x19[1] == uVar4;
    if (uVar4 < unaff_x19[1]) {
      func_0x0001073acce8();
      if (!bVar2) {
        func_0x0001073ace50();
      }
      func_0x0001073ad020();
    }
    else {
      lVar1 = *(long *)(param_1 + 0x10) - uVar4;
      uVar4 = lVar1 >> 2;
      if (lVar1 == 0) {
        uVar4 = 0;
      }
      uVar3 = unaff_x19[4];
      func_0x0001073acea8(uVar3);
      func_0x0001073acc24(uVar3 + (uVar4 >> 2) * 8);
      func_0x0001073acf0c();
      func_0x0001073acbb0();
    }
  }
  func_0x0001073ad010();
  return;
}



/* Entry: 1073aab28; end: 1073aabd3;  */

void FUN_1073aab28(long *param_1)

{
  ulong uVar1;
  bool bVar2;
  long extraout_x8;
  long lVar3;
  long lVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  func_0x0001073acddc();
  lVar3 = param_1[1];
  if (lVar3 == *param_1) {
    uVar1 = *(ulong *)(unaff_x19 + 0x18);
    bVar2 = *(ulong *)(unaff_x19 + 0x10) == uVar1;
    if (*(ulong *)(unaff_x19 + 0x10) < uVar1) {
      func_0x0001073acdf0();
      lVar3 = extraout_x8;
      if (!bVar2) {
        _memmove();
        lVar3 = *(long *)(unaff_x19 + 0x10);
      }
      *(long *)(unaff_x19 + 8) = unaff_x21;
      *(long *)(unaff_x19 + 0x10) = lVar3 + unaff_x22 * 8;
      lVar3 = unaff_x21;
    }
    else {
      lVar4 = (long)(uVar1 - lVar3) >> 2;
      if (uVar1 - lVar3 == 0) {
        lVar4 = 1;
      }
      lVar3 = *(long *)(unaff_x19 + 0x20);
      FUN_1073aac08();
      func_0x0001073acc24(lVar3 + (lVar4 * 2 + 6U & 0xfffffffffffffff8));
      func_0x0001073acf0c();
      func_0x0001073acbb0();
      lVar3 = *(long *)(unaff_x19 + 8);
    }
  }
  *(undefined8 *)(lVar3 + -8) = *unaff_x20;
  *(undefined8 **)(unaff_x19 + 8) = (undefined8 *)(lVar3 + -8);
  return;
}



/* Entry: 1073aabd4; end: 1073aac07;  */

void FUN_1073aabd4(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar2 = param_3 - (long)param_2 >> 3;
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = puVar3;
  for (lVar4 = lVar2 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
    param_2 = param_2 + 1;
  }
  *(undefined8 **)(param_1 + 0x10) = puVar3 + lVar2;
  return;
}



/* Entry: 1073aac08; end: 1073aac2b;  */

void FUN_1073aac08(void)

{
  FUN_1073aac2c();
  return;
}



/* Entry: 1073aac2c; end: 1073aac47;  */

long FUN_1073aac2c(long param_1,ulong param_2)

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
  FUN_1073aac6c();
  return param_1;
}



/* Entry: 1073aac48; end: 1073aac6b;  */

undefined8 FUN_1073aac48(undefined8 param_1)

{
  FUN_1073aac6c(param_1,0);
  return param_1;
}



/* Entry: 1073aac6c; end: 1073aac83;  */

void FUN_1073aac6c(long *param_1,long param_2)

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



/* Entry: 1073aac84; end: 1073aacaf;  */

long * FUN_1073aac84(long *param_1)

{
  FUN_1073aacb0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1073aacb0; end: 1073aacd3;  */

void FUN_1073aacb0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1073aacd4; end: 1073aacff;  */

undefined8 * FUN_1073aacd4(undefined8 *param_1)

{
  *param_1 = 0x1073aad00;
  func_0x0001073aad18(param_1 + 1);
  return param_1;
}



/* Entry: 1073aad00; end: 1073aad27;  */

void FUN_1073aad00(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  long lVar2;
  long unaff_x19;
  long alStack_80 [3];
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  
  plVar1 = *(long **)(param_2 + 0x10);
  if ((*(uint *)(*plVar1 + 0x148) & 0xfffffffe) == 2) {
    lVar2 = plVar1[3];
    if (lVar2 != 0) {
      func_0x0001073ad08c(*plVar1,&UNK_10f40eb41);
      func_0x0001073ad128();
      func_0x0001073ace48();
      func_0x0001073ad050();
      (*extraout_x8)(lVar2,auStack_68);
      func_0x0001073acdb8();
      func_0x0001073acde8();
    }
  }
  else {
    func_0x0001073acedc();
    FUN_1073aade4();
    func_0x0001073ad134();
    uStack_58 = param_1;
    if (extraout_x8_00 != 0) {
      do {
        func_0x0001073acbe4();
      } while (extraout_w10 != 0);
    }
    FUN_1073aa0a0(alStack_80,unaff_x19 + 0x128,auStack_68);
    FUN_1073aa6a8(auStack_68);
    lVar2 = alStack_80[0];
    alStack_80[0] = 0;
    func_0x0001073aa6d0(auStack_68,plVar1 + 2,plVar1 + 3,lVar2);
    func_0x0001073aa70c(unaff_x19 + 0x150,auStack_68);
    FUN_1073aa044();
    FUN_1073a9d58(auStack_68);
    lVar2 = alStack_80[0];
    alStack_80[0] = 0;
    if (lVar2 != 0) {
      func_0x0001073acbd8();
    }
  }
  return;
}



/* Entry: 1073aad28; end: 1073aad47;  */

void FUN_1073aad28(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001073aae20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1073aad48; end: 1073aad4b;  */

void FUN_1073aad48(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1073aad4c; end: 1073aad8b;  */

void FUN_1073aad4c(void)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001073ad000();
  uVar1 = 0x28;
  __Znwm();
  FUN_1073aad8c();
  *(undefined8 *)(unaff_x19 + 8) = uVar1;
  return;
}



/* Entry: 1073aad8c; end: 1073aade3;  */

void FUN_1073aad8c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x0001073acddc();
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x000100608b3c(param_1 + 2,param_2 + 2);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001073acbe4();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1073aade4; end: 1073aae4f;  */

undefined8 * FUN_1073aade4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1];
  *param_1 = *param_2;
  if (lVar1 == 0) {
    param_1[1] = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      return param_1;
    }
  }
  lVar1 = 0;
  func_0x00010527822c();
  func_0x0001072f169c(lVar1 + 0x18);
  func_0x000100601aa4(lVar1 + 0x10);
  func_0x0001073acf2c();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1073aae50; end: 1073aaedb;  */

void FUN_1073aae50(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 in_ZR;
  undefined *puVar2;
  undefined ***pppuVar3;
  undefined **ppuVar4;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 in_stack_ffffffffffffff48;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_28;
  
  func_0x0001073acc08();
  ppuStack_80 = &PTR_DAT_1109aab70;
  uStack_70 = param_2[1];
  uStack_78 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = extraout_x8;
  func_0x0001073ad0fc();
  (*extraout_x8_00)();
  (*(code *)*ppuStack_80)();
  func_0x0001073acb9c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pppuVar3 = &ppuStack_80;
  (*(code *)*ppuStack_80)();
  func_0x0001073acc78();
  ppuVar4 = pppuVar3[2];
  if (*(int *)(ppuVar4 + 0x29) != 3) {
    if (*(char *)(ppuVar4 + 0x38) == '\x01') {
      puVar2 = ppuVar4[3];
      (**(code **)(*plRam0000000113815c70 + 0x80))(plRam0000000113815c70,puVar2 + 0x18);
      if (*(long *)(puVar2 + 0x58) == 0) {
        puVar2[0x60] = 1;
      }
      else {
        func_0x000104ae3294(puVar2);
        func_0x000104ad8de8(*(undefined8 *)(puVar2 + 0x58),0);
      }
      (**(code **)(*plRam0000000113815c70 + 0x88))(plRam0000000113815c70,puVar2 + 0x18);
      return;
    }
    FUN_1073aa310(ppuVar4);
    if ((*(byte *)((long)ppuVar4 + 0x1c1) & 1) == 0) {
      iVar1 = *(int *)(ppuVar4 + 0x29);
      *(undefined4 *)(ppuVar4 + 0x29) = 2;
      if (iVar1 != 0) {
        func_0x0001073ace24();
        func_0x0001073ad040();
        FUN_1073aa4b8();
        func_0x0001073acdb0();
        puVar2 = ppuVar4[4];
        func_0x000104c015d0(puVar2,in_stack_ffffffffffffff48);
        *(undefined1 *)((long)ppuVar4 + 0x1c1) = 1;
        func_0x0001073aced0();
        if (puVar2 != (undefined *)0x0) {
          func_0x0001073acbd8();
        }
      }
    }
  }
  return;
}



/* Entry: 1073aaedc; end: 1073aaf1f;  */

void FUN_1073aaedc(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 in_stack_ffffffffffffffd8;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (*(int *)(lVar3 + 0x148) != 3) {
    if (*(char *)(lVar3 + 0x1c0) == '\x01') {
      lVar3 = *(long *)(lVar3 + 0x18);
      (**(code **)(*plRam0000000113815c70 + 0x80))(plRam0000000113815c70,lVar3 + 0x18);
      if (*(long *)(lVar3 + 0x58) == 0) {
        *(undefined1 *)(lVar3 + 0x60) = 1;
      }
      else {
        func_0x000104ae3294(lVar3);
        func_0x000104ad8de8(*(undefined8 *)(lVar3 + 0x58),0);
      }
      (**(code **)(*plRam0000000113815c70 + 0x88))(plRam0000000113815c70,lVar3 + 0x18);
      return;
    }
    FUN_1073aa310(lVar3);
    if ((*(byte *)(lVar3 + 0x1c1) & 1) == 0) {
      iVar1 = *(int *)(lVar3 + 0x148);
      *(undefined4 *)(lVar3 + 0x148) = 2;
      if (iVar1 != 0) {
        func_0x0001073ace24();
        func_0x0001073ad040();
        FUN_1073aa4b8();
        func_0x0001073acdb0();
        lVar2 = *(long *)(lVar3 + 0x20);
        func_0x000104c015d0(lVar2,in_stack_ffffffffffffffd8);
        *(undefined1 *)(lVar3 + 0x1c1) = 1;
        func_0x0001073aced0();
        if (lVar2 != 0) {
          func_0x0001073acbd8();
        }
      }
    }
  }
  return;
}



/* Entry: 1073aaf20; end: 1073aaf7f;  */

void FUN_1073aaf20(long param_1,long param_2,undefined8 param_3)

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
        func_0x0001073acff0();
        param_2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    FUN_1073aaf80(param_2,&uStack_20);
    func_0x0001073ac578(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1073aaf80; end: 1073aafb7;  */

void FUN_1073aaf80(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x0001073acd94();
  if (extraout_x8 != 0) {
    do {
      func_0x0001073acbe4();
    } while (extraout_w10 != 0);
  }
  func_0x0001073ace68();
  FUN_1073a9e28();
  return;
}



/* Entry: 1073aafb8; end: 1073aafc7;  */

void FUN_1073aafb8(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1073aafc8; end: 1073ab113;  */

void FUN_1073aafc8(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  )

{
  long lVar1;
  long *plVar2;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_3 == 0) {
    auStack_78[0] = false;
  }
  else {
    lVar1 = param_1 + 0x18;
    func_0x000100609b44(lVar1,param_2);
    auStack_78[0] = param_1 + 0x20 == lVar1;
  }
  plVar2 = *(long **)(param_1 + 8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_90,param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_a8,param_4);
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  uStack_60 = uStack_80;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_50 = uStack_a0;
  uStack_58 = uStack_a8;
  uStack_48 = uStack_98;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  FUN_1073ab114(&uStack_d0,param_5);
  uStack_b8 = uStack_c8;
  uStack_c0 = uStack_d0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  (**(code **)(*plVar2 + 0x10))(plVar2,auStack_78,&uStack_c0);
  func_0x00010049410c(&uStack_c0);
  FUN_1073ac1c0(&uStack_d0);
  func_0x0001004a5664(auStack_78);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_90);
  return;
}



/* Entry: 1073ab114; end: 1073ab12f;  */

void FUN_1073ab114(void)

{
  func_0x0001073ad0dc();
  FUN_1073ab130();
  return;
}



/* Entry: 1073ab130; end: 1073ab197;  */

void FUN_1073ab130(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uStack_30;
  
  func_0x0001073acc08();
  func_0x0001073ad11c();
  FUN_1073ab198();
  FUN_1073ab1e8(uStack_30,param_2);
  func_0x0001073acd74();
  func_0x0001073ac1b0();
  func_0x0001073acb9c(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073acda4();
  func_0x0001073ac1b0();
  func_0x0001073acc78();
  func_0x0001073ad160();
  FUN_1073ab1b8();
  func_0x0001073ad140();
  return;
}



/* Entry: 1073ab198; end: 1073ab1b7;  */

void FUN_1073ab198(void)

{
  func_0x0001073ad160();
  FUN_1073ab1b8();
  func_0x0001073ad140();
  return;
}



/* Entry: 1073ab1b8; end: 1073ab1e7;  */

undefined8 * FUN_1073ab1b8(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x6906906906906a) {
    puVar1 = (undefined8 *)(param_2 * 0x270);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109aab98;
  FUN_1073ab240(param_1 + 3);
  return param_1;
}



/* Entry: 1073ab1e8; end: 1073ab21f;  */

undefined8 * FUN_1073ab1e8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109aab98;
  FUN_1073ab240(param_1 + 3);
  return param_1;
}



/* Entry: 1073ab220; end: 1073ab223;  */

void FUN_1073ab220(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109aab98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1073ab224; end: 1073ab237;  */

void FUN_1073ab224(void)

{
  FUN_1073ac1a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073ab238; end: 1073ab23f;  */

void FUN_1073ab238(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001073accb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1073ab240; end: 1073ab25f;  */

void FUN_1073ab240(void)

{
  func_0x0001073ad16c();
  FUN_1073ab280();
  return;
}



/* Entry: 1073ab260; end: 1073ab263;  */

void FUN_1073ab260(void)

{
  func_0x0001073ad16c();
  func_0x0001073ac1e4();
  return;
}



/* Entry: 1073ab264; end: 1073ab277;  */

void FUN_1073ab264(void)

{
  FUN_1073ab32c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073ab278; end: 1073ab27f;  */

void FUN_1073ab278(long param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined **ppuVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long *unaff_x19;
  double dVar8;
  undefined1 auStack_528 [24];
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined1 auStack_4e0 [192];
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined4 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined1 uStack_3a0;
  undefined8 uStack_39c;
  undefined8 uStack_394;
  undefined4 uStack_38c;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 auStack_360 [24];
  long *plStack_348;
  long *plStack_340;
  long *plStack_338;
  long lStack_2f0;
  long lStack_2e8;
  undefined1 auStack_2e0 [56];
  long lStack_2a8;
  long lStack_2a0;
  undefined1 auStack_298 [256];
  undefined1 auStack_198 [32];
  undefined1 auStack_178 [256];
  undefined1 auStack_78 [24];
  undefined1 uStack_60;
  double dStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  param_1 = param_1 + 8;
  plVar5 = &lStack_2f0;
  func_0x0001073acddc();
  func_0x0001073acc08();
  uStack_48 = extraout_x8;
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))(*(long **)(param_1 + 0x10),unaff_x19 + 0x28);
  lStack_2e8 = unaff_x19[1];
  lStack_2f0 = *unaff_x19;
  if (unaff_x19[1] != 0) {
    do {
      func_0x0001073acbe4();
    } while (extraout_w10 != 0);
  }
  func_0x0001004a2448(auStack_2e0);
  lStack_2a0 = unaff_x19[3];
  lStack_2a8 = unaff_x19[2];
  if (unaff_x19[3] != 0) {
    do {
      func_0x0001073acbe4();
    } while (extraout_w10_00 != 0);
  }
  FUN_1073ac488(auStack_298,unaff_x19 + 4);
  func_0x00010060996c(auStack_198,unaff_x19 + 0x24);
  func_0x0001006099c0(auStack_178,unaff_x19 + 0x28);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_78,unaff_x19 + 0x3c);
  uStack_60 = (undefined1)unaff_x19[0x3b];
  lStack_50 = unaff_x19[0x49];
  dVar8 = (double)unaff_x19[0x48];
  ppuVar4 = &PTR___tlv_bootstrap_11340e260;
  dStack_58 = dVar8;
  (*(code *)PTR___tlv_bootstrap_11340e260)();
  uVar2 = *ppuVar4 == *(undefined **)(*unaff_x19 + 0x38);
  if ((bool)uVar2) {
    FUN_1073ab4d0(&lStack_2f0);
  }
  else {
    FUN_1073ab844(*(undefined **)(*unaff_x19 + 0x38),&lStack_2f0);
  }
  FUN_1073ac158();
  func_0x0001073acb9c(uStack_48);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073acda4();
  FUN_1073ac158();
  func_0x0001073acc78();
  plStack_348 = plVar5 + 0x2b;
  plVar7 = plVar5 + 0x2f;
  plStack_340 = plVar7;
  plStack_338 = plVar5 + 9;
  func_0x00010007847c(auStack_360,"grpc::grpcService::makeGRPCCall");
  if (*(char *)(*plVar5 + 0x34) == '\x01') {
    if ((char)plVar5[0x52] == '\x01') {
      func_0x0001073acf98(plVar5 + 0x4f);
    }
    else {
      func_0x0001073ad0a0();
    }
    func_0x00010002b838(&uStack_3f0,"Service disposed");
    func_0x0001073ace48(auStack_4e0);
    func_0x0001073ace18();
  }
  else {
    func_0x000100467380(0);
    func_0x00010046778c();
    func_0x000100467768();
    func_0x0001004a2704(plVar5 + 0x4f,(long)dVar8);
    iVar3 = (int)plVar5 + 0x10;
    func_0x0001004a4bf8();
    if (iVar3 == 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&uStack_408,plVar5 + 0x4f);
      func_0x00010046985c(auStack_4e0,*(long *)(*plVar5 + 0x18) + 0x80);
      func_0x00010048a5b8(&uStack_420,auStack_4e0);
      uVar1 = *(undefined4 *)(*plVar5 + 0xa0);
      func_0x00010002b838(&uStack_4f8,"unknown");
      func_0x00010002b838(&uStack_510,"");
      uStack_3e0 = uStack_3f8;
      uStack_378 = uStack_500;
      uStack_3e8 = uStack_400;
      uStack_3f0 = uStack_408;
      uStack_400 = 0;
      uStack_3f8 = 0;
      uStack_3d0 = uStack_418;
      uStack_3d8 = uStack_420;
      uStack_3c8 = uStack_410;
      uStack_420 = 0;
      uStack_418 = 0;
      uStack_410 = 0;
      uStack_408 = 0;
      uStack_3b0 = uStack_4f0;
      uStack_3b8 = uStack_4f8;
      uStack_3a8 = uStack_4e8;
      uStack_4f8 = 0;
      uStack_4f0 = 0;
      uStack_4e8 = 0;
      uStack_3a0 = 0;
      uStack_38c = 0xffffffff;
      uStack_394 = 0xffffffffffffffff;
      uStack_39c = 0xffffffffffffffff;
      uStack_380 = uStack_508;
      uStack_388 = uStack_510;
      uStack_510 = 0;
      uStack_508 = 0;
      uStack_500 = 0;
      uStack_370 = 0;
      uStack_3c0 = uVar1;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_510);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_4f8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_420);
      func_0x000100469c34(auStack_4e0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_408);
      plVar7 = plVar5 + 2;
      func_0x00010b281b1c(plVar7);
      if ((char)plVar5[0x52] == '\x01') {
        func_0x00010b281ce0(plVar5 + 0x4f,plVar7);
        func_0x0001073ad0e8();
        func_0x00010b281d00();
      }
      else {
        func_0x00010b281cf0(plVar5 + 0x4f,plVar7);
        func_0x0001073ad0e8();
        func_0x00010b281fa0();
      }
      func_0x0001073acf04();
      func_0x000105394120(auStack_4e0,plVar7,auStack_528);
      func_0x0001073ace18();
      func_0x0001073acf68();
      func_0x0001073acd8c();
      func_0x000100bf5670(&uStack_3f0);
      goto LAB_1073ab744;
    }
    if (*(long *)(*plVar5 + 0x68) != 0) {
      plVar6 = (long *)plVar5[9];
      (**(code **)(*plVar6 + 0x20))(plVar6,plVar7);
      FUN_1073ab8d4(plVar5 + 0xb,plVar5 + 2,(long)dVar8,plVar7);
      goto LAB_1073ab744;
    }
    if ((char)plVar5[0x52] == '\x01') {
      func_0x0001073acf98(plVar5 + 0x4f);
    }
    else {
      func_0x0001073ad0a0();
    }
    func_0x00010002b838(&uStack_3f0,"Resources aren\'t ready");
    func_0x0001073ace48(auStack_4e0);
    func_0x0001073ace18();
  }
  func_0x0001073acf68();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_3f0);
LAB_1073ab744:
  func_0x000100078bd8(auStack_360);
  return;
}



/* Entry: 1073ab280; end: 1073ab32b;  */

undefined8 * FUN_1073ab280(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  lVar1 = param_2[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001073acbe4();
    } while (extraout_w10 != 0);
  }
  FUN_1073ac488(param_1 + 4,param_2 + 4);
  func_0x00010060996c(param_1 + 0x24,param_2 + 0x24);
  func_0x0001006099c0(param_1 + 0x28,param_2 + 0x28);
  uVar2 = param_2[0x48];
  param_1[0x49] = param_2[0x49];
  param_1[0x48] = uVar2;
  return param_1;
}



/* Entry: 1073ab32c; end: 1073ab34b;  */

void FUN_1073ab32c(void)

{
  func_0x0001073ad16c();
  func_0x0001073ac1e4();
  return;
}



/* Entry: 1073ab34c; end: 1073ab4cf;  */

void FUN_1073ab34c(long param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined **ppuVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long *unaff_x19;
  double dVar8;
  undefined1 auStack_528 [24];
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined1 auStack_4e0 [192];
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined4 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined1 uStack_3a0;
  undefined8 uStack_39c;
  undefined8 uStack_394;
  undefined4 uStack_38c;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 auStack_360 [24];
  long *plStack_348;
  long *plStack_340;
  long *plStack_338;
  long lStack_2f0;
  long lStack_2e8;
  undefined1 auStack_2e0 [56];
  long lStack_2a8;
  long lStack_2a0;
  undefined1 auStack_298 [256];
  undefined1 auStack_198 [32];
  undefined1 auStack_178 [256];
  undefined1 auStack_78 [24];
  undefined1 uStack_60;
  double dStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  plVar5 = &lStack_2f0;
  func_0x0001073acddc();
  func_0x0001073acc08();
  uStack_48 = extraout_x8;
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))(*(long **)(param_1 + 0x10),unaff_x19 + 0x28);
  lStack_2e8 = unaff_x19[1];
  lStack_2f0 = *unaff_x19;
  if (unaff_x19[1] != 0) {
    do {
      func_0x0001073acbe4();
    } while (extraout_w10 != 0);
  }
  func_0x0001004a2448(auStack_2e0);
  lStack_2a0 = unaff_x19[3];
  lStack_2a8 = unaff_x19[2];
  if (unaff_x19[3] != 0) {
    do {
      func_0x0001073acbe4();
    } while (extraout_w10_00 != 0);
  }
  FUN_1073ac488(auStack_298,unaff_x19 + 4);
  func_0x00010060996c(auStack_198,unaff_x19 + 0x24);
  func_0x0001006099c0(auStack_178,unaff_x19 + 0x28);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_78,unaff_x19 + 0x3c);
  uStack_60 = (undefined1)unaff_x19[0x3b];
  lStack_50 = unaff_x19[0x49];
  dVar8 = (double)unaff_x19[0x48];
  ppuVar4 = &PTR___tlv_bootstrap_11340e260;
  dStack_58 = dVar8;
  (*(code *)PTR___tlv_bootstrap_11340e260)();
  uVar2 = *ppuVar4 == *(undefined **)(*unaff_x19 + 0x38);
  if ((bool)uVar2) {
    FUN_1073ab4d0(&lStack_2f0);
  }
  else {
    FUN_1073ab844(*(undefined **)(*unaff_x19 + 0x38),&lStack_2f0);
  }
  FUN_1073ac158();
  func_0x0001073acb9c(uStack_48);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073acda4();
  FUN_1073ac158();
  func_0x0001073acc78();
  plStack_348 = plVar5 + 0x2b;
  plVar7 = plVar5 + 0x2f;
  plStack_340 = plVar7;
  plStack_338 = plVar5 + 9;
  func_0x00010007847c(auStack_360,"grpc::grpcService::makeGRPCCall");
  if (*(char *)(*plVar5 + 0x34) == '\x01') {
    if ((char)plVar5[0x52] == '\x01') {
      func_0x0001073acf98(plVar5 + 0x4f);
    }
    else {
      func_0x0001073ad0a0();
    }
    func_0x00010002b838(&uStack_3f0,"Service disposed");
    func_0x0001073ace48(auStack_4e0);
    func_0x0001073ace18();
  }
  else {
    func_0x000100467380(0);
    func_0x00010046778c();
    func_0x000100467768();
    func_0x0001004a2704(plVar5 + 0x4f,(long)dVar8);
    iVar3 = (int)plVar5 + 0x10;
    func_0x0001004a4bf8();
    if (iVar3 == 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&uStack_408,plVar5 + 0x4f);
      func_0x00010046985c(auStack_4e0,*(long *)(*plVar5 + 0x18) + 0x80);
      func_0x00010048a5b8(&uStack_420,auStack_4e0);
      uVar1 = *(undefined4 *)(*plVar5 + 0xa0);
      func_0x00010002b838(&uStack_4f8,"unknown");
      func_0x00010002b838(&uStack_510,"");
      uStack_3e0 = uStack_3f8;
      uStack_378 = uStack_500;
      uStack_3e8 = uStack_400;
      uStack_3f0 = uStack_408;
      uStack_400 = 0;
      uStack_3f8 = 0;
      uStack_3d0 = uStack_418;
      uStack_3d8 = uStack_420;
      uStack_3c8 = uStack_410;
      uStack_420 = 0;
      uStack_418 = 0;
      uStack_410 = 0;
      uStack_408 = 0;
      uStack_3b0 = uStack_4f0;
      uStack_3b8 = uStack_4f8;
      uStack_3a8 = uStack_4e8;
      uStack_4f8 = 0;
      uStack_4f0 = 0;
      uStack_4e8 = 0;
      uStack_3a0 = 0;
      uStack_38c = 0xffffffff;
      uStack_394 = 0xffffffffffffffff;
      uStack_39c = 0xffffffffffffffff;
      uStack_380 = uStack_508;
      uStack_388 = uStack_510;
      uStack_510 = 0;
      uStack_508 = 0;
      uStack_500 = 0;
      uStack_370 = 0;
      uStack_3c0 = uVar1;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_510);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_4f8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_420);
      func_0x000100469c34(auStack_4e0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_408);
      plVar7 = plVar5 + 2;
      func_0x00010b281b1c(plVar7);
      if ((char)plVar5[0x52] == '\x01') {
        func_0x00010b281ce0(plVar5 + 0x4f,plVar7);
        func_0x0001073ad0e8();
        func_0x00010b281d00();
      }
      else {
        func_0x00010b281cf0(plVar5 + 0x4f,plVar7);
        func_0x0001073ad0e8();
        func_0x00010b281fa0();
      }
      func_0x0001073acf04();
      func_0x000105394120(auStack_4e0,plVar7,auStack_528);
      func_0x0001073ace18();
      func_0x0001073acf68();
      func_0x0001073acd8c();
      func_0x000100bf5670(&uStack_3f0);
      goto LAB_1073ab744;
    }
    if (*(long *)(*plVar5 + 0x68) != 0) {
      plVar6 = (long *)plVar5[9];
      (**(code **)(*plVar6 + 0x20))(plVar6,plVar7);
      FUN_1073ab8d4(plVar5 + 0xb,plVar5 + 2,(long)dVar8,plVar7);
      goto LAB_1073ab744;
    }
    if ((char)plVar5[0x52] == '\x01') {
      func_0x0001073acf98(plVar5 + 0x4f);
    }
    else {
      func_0x0001073ad0a0();
    }
    func_0x00010002b838(&uStack_3f0,"Resources aren\'t ready");
    func_0x0001073ace48(auStack_4e0);
    func_0x0001073ace18();
  }
  func_0x0001073acf68();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_3f0);
LAB_1073ab744:
  func_0x000100078bd8(auStack_360);
  return;
}



/* Entry: 1073ab4d0; end: 1073ab843;  */

void FUN_1073ab4d0(double param_1,long *param_2)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auStack_238 [24];
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [192];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [24];
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  plStack_58 = param_2 + 0x2b;
  plVar4 = param_2 + 0x2f;
  plStack_50 = plVar4;
  plStack_48 = param_2 + 9;
  func_0x00010007847c(auStack_70,"grpc::grpcService::makeGRPCCall");
  if (*(char *)(*param_2 + 0x34) == '\x01') {
    if ((char)param_2[0x52] == '\x01') {
      func_0x0001073acf98(param_2 + 0x4f);
    }
    else {
      func_0x0001073ad0a0();
    }
    func_0x00010002b838(&uStack_100,"Service disposed");
    func_0x0001073ace48(auStack_1f0);
    func_0x0001073ace18();
  }
  else {
    func_0x000100467380(0);
    func_0x00010046778c();
    func_0x000100467768();
    func_0x0001004a2704(param_2 + 0x4f,(long)param_1);
    iVar2 = (int)param_2 + 0x10;
    func_0x0001004a4bf8();
    if (iVar2 == 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&uStack_118,param_2 + 0x4f);
      func_0x00010046985c(auStack_1f0,*(long *)(*param_2 + 0x18) + 0x80);
      func_0x00010048a5b8(&uStack_130,auStack_1f0);
      uVar1 = *(undefined4 *)(*param_2 + 0xa0);
      func_0x00010002b838(&uStack_208,"unknown");
      func_0x00010002b838(&uStack_220,"");
      uStack_f0 = uStack_108;
      uStack_88 = uStack_210;
      uStack_f8 = uStack_110;
      uStack_100 = uStack_118;
      uStack_110 = 0;
      uStack_108 = 0;
      uStack_e0 = uStack_128;
      uStack_e8 = uStack_130;
      uStack_d8 = uStack_120;
      uStack_130 = 0;
      uStack_128 = 0;
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_c0 = uStack_200;
      uStack_c8 = uStack_208;
      uStack_b8 = uStack_1f8;
      uStack_208 = 0;
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_b0 = 0;
      uStack_9c = 0xffffffff;
      uStack_a4 = 0xffffffffffffffff;
      uStack_ac = 0xffffffffffffffff;
      uStack_90 = uStack_218;
      uStack_98 = uStack_220;
      uStack_220 = 0;
      uStack_218 = 0;
      uStack_210 = 0;
      uStack_80 = 0;
      uStack_d0 = uVar1;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_220);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_208);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_130);
      func_0x000100469c34(auStack_1f0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_118);
      plVar4 = param_2 + 2;
      func_0x00010b281b1c(plVar4);
      if ((char)param_2[0x52] == '\x01') {
        func_0x00010b281ce0(param_2 + 0x4f,plVar4);
        func_0x0001073ad0e8();
        func_0x00010b281d00();
      }
      else {
        func_0x00010b281cf0(param_2 + 0x4f,plVar4);
        func_0x0001073ad0e8();
        func_0x00010b281fa0();
      }
      func_0x0001073acf04();
      func_0x000105394120(auStack_1f0,plVar4,auStack_238);
      func_0x0001073ace18();
      func_0x0001073acf68();
      func_0x0001073acd8c();
      func_0x000100bf5670(&uStack_100);
      goto LAB_1073ab744;
    }
    if (*(long *)(*param_2 + 0x68) != 0) {
      plVar3 = (long *)param_2[9];
      (**(code **)(*plVar3 + 0x20))(plVar3,plVar4);
      FUN_1073ab8d4(param_2 + 0xb,param_2 + 2,(long)param_1,plVar4);
      goto LAB_1073ab744;
    }
    if ((char)param_2[0x52] == '\x01') {
      func_0x0001073acf98(param_2 + 0x4f);
    }
    else {
      func_0x0001073ad0a0();
    }
    func_0x00010002b838(&uStack_100,"Resources aren\'t ready");
    func_0x0001073ace48(auStack_1f0);
    func_0x0001073ace18();
  }
  func_0x0001073acf68();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_100);
LAB_1073ab744:
  func_0x000100078bd8(auStack_70);
  return;
}



/* Entry: 1073ab844; end: 1073ab89f;  */

long * FUN_1073ab844(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long alStack_88 [12];
  undefined8 uStack_28;
  
  func_0x0001073acc08();
  plVar2 = alStack_88;
  uStack_28 = extraout_x8;
  func_0x0001073abf38();
  func_0x0001073ad050();
  func_0x0001073acd24();
  func_0x0001073acbc8();
  func_0x0001073acb9c(uStack_28);
  if ((bool)in_ZR) {
    return plVar2;
  }
  ___stack_chk_fail();
  func_0x0001073acbc8();
  func_0x0001073acc78();
  if (*(long *)(*plVar2 + 0x18) != 0) {
    plVar1 = *(long **)(*plVar2 + 0x18);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000105394e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x30))();
      return plVar1;
    }
    func_0x000104bfeb48(0,plVar2[1]);
    plVar2 = plVar1;
    func_0x00010060d428();
    func_0x00010061cd5c(plVar2 + 0x65);
    *plVar1 = (long)&PTR_DAT_11087ffd8;
    if (plVar1[0x22] != 0) {
      func_0x000100836a88(plVar1[0x22],plVar1 + 0x24);
    }
    func_0x000100601aa4(plVar1 + 99);
    func_0x000100601c8c(plVar1 + 0x5c);
    func_0x000100836b24(plVar1 + 0x24);
    func_0x00010060867c(plVar1 + 4);
    *plVar1 = (long)&PTR_DAT_110880018;
    func_0x000100450be4(plVar1 + 1);
    return plVar1;
  }
  plVar1 = *(long **)plVar2[2];
                    /* WARNING: Could not recover jumptable at 0x0001073ab8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,plVar2[1],param_2,0);
  return plVar1;
}



/* Entry: 1073ab8a0; end: 1073ab8d3;  */

long * FUN_1073ab8a0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(*param_1 + 0x18) == 0) {
    plVar2 = *(long **)param_1[2];
                    /* WARNING: Could not recover jumptable at 0x0001073ab8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x30))(plVar2,param_1[1],param_2,0);
    return plVar2;
  }
  plVar2 = *(long **)(*param_1 + 0x18);
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000105394e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x30))();
    return plVar2;
  }
  func_0x000104bfeb48(0,param_1[1]);
  plVar1 = plVar2;
  func_0x00010060d428();
  func_0x00010061cd5c(plVar1 + 0x65);
  *plVar2 = (long)&PTR_DAT_11087ffd8;
  if (plVar2[0x22] != 0) {
    func_0x000100836a88(plVar2[0x22],plVar2 + 0x24);
  }
  func_0x000100601aa4(plVar2 + 99);
  func_0x000100601c8c(plVar2 + 0x5c);
  func_0x000100836b24(plVar2 + 0x24);
  func_0x00010060867c(plVar2 + 4);
  *plVar2 = (long)&PTR_DAT_110880018;
  func_0x000100450be4(plVar2 + 1);
  return plVar2;
}



/* Entry: 1073ab8d4; end: 1073abaa7;  */

void FUN_1073ab8d4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 auStack_128 [24];
  undefined8 auStack_68 [3];
  
  if (*(char *)(*param_1 + 0x34) == '\x01') {
    func_0x0001073acf98(param_1 + 0x1b);
    func_0x00010002b838(auStack_68,"Service disposed");
    func_0x0001073ace48(auStack_128);
    func_0x0001073acfa8();
  }
  else {
    if (*(long *)(*param_1 + 0x68) != 0) {
      func_0x0001004a5a58(auStack_68);
      uVar1 = auStack_68[0];
      lVar3 = *param_1;
      func_0x00010046985c(auStack_128,*(long *)(lVar3 + 0x18) + 0x80);
      func_0x00010060d450(lVar3,uVar1,param_4,param_3,auStack_128,param_2);
      puVar2 = auStack_128;
      func_0x000100469c34(puVar2);
      uVar1 = auStack_68[0];
      func_0x000100488bd8();
      FUN_1073abb10(auStack_128,param_1 + 2,uVar1,param_4,puVar2);
      uStack_138 = auStack_68[0];
      uStack_130 = auStack_128[0];
      auStack_128[0] = 0;
      auStack_68[0] = 0;
      FUN_1073abb64(param_1[0x1e],&uStack_130,&uStack_138,param_4);
      func_0x0001004a5c90(&uStack_138);
      FUN_1073a9dd0(&uStack_130);
      FUN_1073a9dd0(auStack_128);
      func_0x0001004a5c90(auStack_68);
      return;
    }
    func_0x0001073acf98(param_1 + 0x1b);
    func_0x00010002b838(auStack_68,"Resources aren\'t ready");
    func_0x0001073ace48(auStack_128);
    func_0x0001073acfa8();
  }
  func_0x0001073acdb8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  return;
}



/* Entry: 1073abaa8; end: 1073abb0f;  */

void FUN_1073abaa8(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(int *)(param_1 + 0x148) == 3) {
    return;
  }
  FUN_1073abbf8(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x148) = 3;
  FUN_1073aa310(param_1);
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x138) + 0x30);
  func_0x0001073acf40();
                    /* WARNING: Could not recover jumptable at 0x0001073abb0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1073abb10; end: 1073abb63;  */

void FUN_1073abb10(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *extraout_x8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long lVar3;
  long alStack_50 [2];
  
  lVar3 = *param_2;
  func_0x000100611364(param_2 + 2);
  lVar3 = *(long *)(lVar3 + 0x68);
  lVar2 = param_2[1];
  func_0x0001004a2388(param_1,lVar3,lVar2,param_3,param_5);
  alStack_50[1] = 0;
  alStack_50[0] = lVar2;
  func_0x000100611630();
  uVar1 = *(undefined8 *)(lVar3 + 8);
  func_0x000104c0129c(uVar1,unaff_x19,alStack_50,unaff_x20,0,0);
  *extraout_x8 = uVar1;
  return;
}



/* Entry: 1073abb64; end: 1073abbf7;  */

void FUN_1073abb64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uStack_38;
  
  func_0x0001073abcc4(param_1 + 0x20);
  func_0x0001073abce4(param_1 + 0x18,param_3);
  func_0x0001073abbf8(param_1 + 0x28,param_4);
  func_0x0001073ace24();
  func_0x0001073ad040();
  FUN_1073abd04();
  func_0x0001073acdb0();
  *(undefined1 *)(param_1 + 0x1c0) = 1;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000104c01490(lVar1,uStack_38);
  func_0x0001073aced0();
  if (lVar1 != 0) {
    func_0x0001073acbd8();
  }
  return;
}



/* Entry: 1073abbf8; end: 1073abd03;  */

void FUN_1073abbf8(void)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x0001073acec4();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (unaff_x20 + 0x18,unaff_x19 + 0x18);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (unaff_x20 + 0x30,unaff_x19 + 0x30);
  func_0x0001072adb50(unaff_x20 + 0x48,unaff_x19 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x70) = *(undefined8 *)(unaff_x19 + 0x70);
  func_0x0001002a969c(unaff_x20 + 0x78,unaff_x19 + 0x78);
  *(undefined1 *)(unaff_x20 + 0x98) = *(undefined1 *)(unaff_x19 + 0x98);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (unaff_x20 + 0xa0,unaff_x19 + 0xa0);
  uVar1 = *(undefined1 *)(unaff_x19 + 200);
  uVar2 = *(undefined8 *)(unaff_x19 + 0xb8);
  *(undefined8 *)(unaff_x20 + 0xc0) = *(undefined8 *)(unaff_x19 + 0xc0);
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar2;
  *(undefined1 *)(unaff_x20 + 200) = uVar1;
  func_0x0001002a969c(unaff_x20 + 0xd0,unaff_x19 + 0xd0);
  func_0x0001073abc8c(unaff_x20 + 0xf0,unaff_x19 + 0xf0);
  return;
}


