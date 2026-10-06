/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1089698c8; end: 1089698db;  */

void FUN_1089698c8(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089698dc; end: 10896993f;  */

void FUN_1089698dc(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  func_0x0001089717c8();
  FUN_108969940(auStack_38,0);
  func_0x000108971994();
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  func_0x000108971784();
  *unaff_x19 = &PTR_FUN_110aa02e8;
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20;
  unaff_x19[4] = unaff_x20[2];
  unaff_x19[3] = uVar2;
  unaff_x19[2] = uVar1;
  return;
}



/* Entry: 108969940; end: 1089699b3;  */

void FUN_108969940(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_38 [24];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    func_0x000108971854(param_2,param_2);
    func_0x000108971854();
  }
  FUN_1089699b4(auStack_38,param_3);
  func_0x000108971994();
  func_0x000107c27fc4();
  func_0x000108971784();
  return;
}



/* Entry: 1089699b4; end: 108969a6f;  */

void FUN_1089699b4(long param_1)

{
  undefined **ppuVar1;
  undefined1 auStack_38 [24];
  
  FUN_108969520();
  func_0x000108971854();
  FUN_108969a70(auStack_38,param_1);
  func_0x000108971994();
  func_0x000107c27fc4();
  func_0x000108971784();
  if (3 < *(ulong *)(param_1 + 0x10)) {
    func_0x000108971854();
    ppuVar1 = (undefined **)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffe);
    if (*(ulong *)(param_1 + 0x10) < 4) {
      ppuVar1 = &PTR_s__unknown__110aa0318;
    }
    FUN_108969b10(auStack_38,ppuVar1);
    func_0x000108971994();
    func_0x000107c27fc4();
    func_0x000108971784();
  }
  func_0x000108971854();
  return;
}



/* Entry: 108969a70; end: 108969b0f;  */

void FUN_108969a70(undefined8 param_1,undefined4 *param_2)

{
  undefined **ppuVar1;
  
  if (*(long *)(param_2 + 4) == 0) {
    ppuVar1 = &PTR_PTR_113289a30;
  }
  else {
    if (*(long *)(param_2 + 4) == 1) {
      func_0x000108972194(param_2,&UNK_10f4ed860);
      func_0x000108971c60(*(undefined8 *)(param_2 + 2));
      func_0x000108971854();
      FUN_108969bd0(param_1,*param_2);
      return;
    }
    ppuVar1 = *(undefined ***)(param_2 + 2);
  }
  (**(code **)*ppuVar1)();
  func_0x000108972194();
  FUN_10894f438(param_2);
  FUN_108969bd0(param_1,param_2);
  return;
}



/* Entry: 108969b10; end: 108969bcf;  */

undefined1 * FUN_108969b10(undefined1 *param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_d0 [32];
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [32];
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_28;
  
  func_0x000108971508();
  if (*(int *)(param_2 + 0x10) == 0) {
    func_0x000108971480(extraout_x8);
    if ((bool)in_ZR) {
      puVar2 = &UNK_10f4ed869;
      func_0x00010002b82c(param_1,&UNK_10f4ed869);
      func_0x000107c613d0(puVar2);
      func_0x000107c60c50(unaff_x20,unaff_x19,puVar2);
      return unaff_x20;
    }
  }
  else {
    uStack_28 = extraout_x8;
    func_0x000108972194();
    func_0x000108971c98(*(undefined4 *)(param_2 + 0x10));
    func_0x000108971854();
    if (*(int *)(param_2 + 0x14) != 0) {
      func_0x000108971c98();
      func_0x000108971854();
    }
    func_0x000108971854();
    func_0x000108971854();
    param_3 = 0x27;
    param_2 = param_1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc();
    func_0x000108971480(uStack_28);
    if ((bool)in_ZR) {
      return param_2;
    }
  }
  uVar1 = 0;
  ___stack_chk_fail();
  func_0x000108971f54();
  func_0x000108971750();
  pcStack_48 = FUN_108969bd0;
  puStack_60 = param_2;
  puStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x0001089714ac();
  puVar3 = auStack_88;
  uStack_90 = param_3;
  uStack_68 = extraout_x8_00;
  FUN_10894fc1c(puVar3,0x20,&UNK_10f4ed865);
  func_0x000108971854();
  func_0x000108971480(uStack_68);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_108969c20;
  puStack_b0 = param_2;
  puStack_a8 = param_1;
  ppuStack_a0 = &puStack_50;
  func_0x0001089719cc();
  FUN_108969c6c(auStack_d0);
  if ((int)param_1 != 0) {
    func_0x0001089721e0();
  }
  func_0x0001089718d0();
  puVar3 = auStack_d0;
  FUN_108969ca4(puVar3);
  return puVar3;
}



/* Entry: 108969bd0; end: 108969c1f;  */

void FUN_108969bd0(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  int unaff_w19;
  undefined1 auStack_90 [32];
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  func_0x0001089714ac();
  uStack_28 = extraout_x8;
  FUN_10894fc1c(auStack_48,0x20,&UNK_10f4ed865);
  func_0x000108971854();
  func_0x000108971480(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001089719cc();
  FUN_108969c6c(auStack_90);
  if (unaff_w19 != 0) {
    func_0x0001089721e0();
  }
  func_0x0001089718d0();
  FUN_108969ca4(auStack_90);
  return;
}



/* Entry: 108969c20; end: 108969c6b;  */

void FUN_108969c20(void)

{
  int unaff_w19;
  undefined1 auStack_40 [32];
  
  func_0x0001089719cc();
  FUN_108969c6c(auStack_40);
  if (unaff_w19 != 0) {
    func_0x0001089721e0();
  }
  func_0x0001089718d0();
  FUN_108969ca4(auStack_40);
  return;
}



/* Entry: 108969c6c; end: 108969ca3;  */

void FUN_108969c6c(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x000108971864();
  if (extraout_x8 != 0) {
    func_0x000108972168();
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd42e30();
    func_0x0001089720f8();
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 108969ca4; end: 108969cc7;  */

undefined8 FUN_108969ca4(undefined8 param_1)

{
  FUN_108969c6c();
  return param_1;
}



/* Entry: 108969cc8; end: 108969cff;  */

undefined8 * FUN_108969cc8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  *param_2 = 0;
  *param_1 = uVar2;
  puVar1 = param_1;
  func_0x0001089722c0();
  func_0x00010bd3f54c(puVar1 + 4,param_2 + 4);
  return param_1;
}



/* Entry: 108969d00; end: 108969d8f;  */

void FUN_108969d00(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined1 **ppuVar1;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  int unaff_w19;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_81;
  undefined1 auStack_80 [88];
  undefined8 uStack_28;
  
  ppuVar1 = &puStack_a0;
  func_0x0001089719a0();
  func_0x0001089714f8();
  puStack_a0 = &uStack_81;
  uStack_98 = param_1;
  uStack_90 = param_1;
  uStack_28 = extraout_x9;
  FUN_108969cc8(auStack_80,extraout_x8 + 8);
  FUN_108969d90(&puStack_a0);
  if (unaff_w19 != 0) {
    FUN_1089696c8(auStack_80);
  }
  FUN_108969df8(auStack_80);
  FUN_108969dd4();
  func_0x000108971480(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_108969df8(auStack_80);
  FUN_108969dd4(&puStack_a0);
  func_0x000108971660();
  func_0x000108971864();
  if (extraout_x8_00 != 0) {
    FUN_108969df8(extraout_x8_00 + 8);
    *(undefined8 *)((long)ppuVar1 + 0x10) = 0;
  }
  if (*(long *)((long)ppuVar1 + 8) != 0) {
    func_0x00010bd42e30();
    FUN_10894fe18();
    *(undefined8 *)((long)ppuVar1 + 8) = 0;
  }
  return;
}



/* Entry: 108969d90; end: 108969dd3;  */

void FUN_108969d90(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x000108971864();
  if (extraout_x8 != 0) {
    FUN_108969df8(extraout_x8 + 8);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd42e30();
    FUN_10894fe18();
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 108969dd4; end: 108969df7;  */

undefined8 FUN_108969dd4(undefined8 param_1)

{
  FUN_108969d90();
  return param_1;
}



/* Entry: 108969df8; end: 108969e1f;  */

void FUN_108969df8(long param_1)

{
  long extraout_x8;
  undefined8 *unaff_x19;
  undefined1 auStack_28 [8];
  
  func_0x00010bd43af0(param_1 + 0x20);
  func_0x000108971ddc(param_1);
  if (extraout_x8 != 0) {
    *unaff_x19 = 0;
    FUN_108968f80(extraout_x8 + 0x20,auStack_28,0);
    func_0x0001089719fc();
  }
  FUN_1089694f4(unaff_x19);
  return;
}



/* Entry: 108969e20; end: 108969ea3;  */

undefined8 *
FUN_108969e20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined4 param_5)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0x28;
  puVar2 = param_1;
  func_0x00010bd3f808(param_1,0x28,8);
  *puVar2 = &PTR_FUN_110aa0068;
  uVar1 = *param_4;
  puVar2[1] = param_2;
  puVar2[2] = param_3;
  *(undefined4 *)(puVar2 + 3) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x1c) = param_5;
  puVar2[4] = uVar3;
  func_0x000108972200(*param_1);
  return puVar2 + 1;
}



/* Entry: 108969ea4; end: 10896a07b;  */

void FUN_108969ea4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined1 **ppuVar4;
  undefined8 extraout_x8;
  long unaff_x19;
  code *pcVar5;
  long unaff_x20;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 *puStack_150;
  long lStack_148;
  long lStack_140;
  undefined1 uStack_131;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined1 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [32];
  long lStack_d0;
  undefined8 auStack_b8 [4];
  long lStack_98;
  undefined1 auStack_80 [40];
  long lStack_58;
  undefined8 uStack_48;
  
  func_0x000108971494();
  lStack_148 = param_2;
  lStack_140 = param_2;
  uStack_48 = extraout_x8;
  func_0x00010bd3f54c(auStack_f0,param_2 + 0x58);
  func_0x00010bd3f54c(auStack_b8,unaff_x20 + 0x90);
  uStack_170 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  uStack_160 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_168 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_158 = *(undefined8 *)(unaff_x20 + 0x28);
  puStack_150 = (undefined1 *)&uStack_170;
  FUN_10896a07c(&puStack_150);
  if (unaff_x19 != 0) {
    if (lStack_d0 == 0 && lStack_98 == 0) {
      func_0x0001089721e0();
    }
    else {
      func_0x000108971968();
      puVar3 = auStack_b8;
      func_0x000108971814(auStack_80);
      uVar1 = uStack_170;
      if (*(long *)(lStack_58 + 0x18) == 0) {
        pcVar5 = *(code **)(lStack_58 + 0x10);
        uStack_170 = 0;
        uStack_130 = uVar1;
        uStack_120 = uStack_160;
        uStack_128 = uStack_168;
        uStack_118 = uStack_158;
        puStack_108 = &uStack_131;
        func_0x00010bd42e30();
        func_0x0001089717dc();
        uVar1 = uStack_130;
        uStack_130 = 0;
        puVar3[1] = uVar1;
        uVar2 = uStack_118;
        uVar1 = uStack_128;
        puVar3[3] = uStack_120;
        puVar3[2] = uVar1;
        puVar3[4] = uVar2;
        *puVar3 = FUN_10896a0d0;
        uStack_100 = 0;
        uStack_f8 = 0;
        puStack_110 = puVar3;
        FUN_10896a154(&puStack_108);
        (*pcVar5)(auStack_80,&puStack_110);
        FUN_10894e00c(&puStack_110);
        FUN_108968f38(&uStack_130);
      }
      else {
        func_0x0001089719bc(auStack_80,FUN_10896a0cc);
      }
      func_0x000108971bc4();
    }
    DataMemoryBarrier(2,3);
  }
  func_0x0001089718d0();
  FUN_10896a178(auStack_f0);
  ppuVar4 = &puStack_150;
  FUN_10896a28c();
  func_0x000108971480(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_10894e00c(&puStack_110);
  FUN_108968f38(&uStack_130);
  func_0x000108971bc4();
  DataMemoryBarrier(2,3);
  func_0x0001089718d0();
  FUN_10896a178(auStack_f0);
  FUN_10896a28c(&puStack_150);
  func_0x000108971660();
  func_0x000108971a58();
  if (unaff_x20 != 0) {
    FUN_10896a178(unaff_x20 + 0x58);
    FUN_108968f38(unaff_x20 + 0x50);
    ppuVar4[2] = (undefined1 *)0x0;
  }
  if (ppuVar4[1] != (undefined1 *)0x0) {
    func_0x00010bd3facc(ppuVar4[1],200);
    ppuVar4[1] = (undefined1 *)0x0;
  }
  return;
}



/* Entry: 10896a07c; end: 10896a0cb;  */

void FUN_10896a07c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108971a58();
  if (unaff_x20 != 0) {
    FUN_10896a178(unaff_x20 + 0x58);
    FUN_108968f38(unaff_x20 + 0x50);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd3facc(*(long *)(unaff_x19 + 8),200);
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 10896a0cc; end: 10896a0cf;  */

void FUN_10896a0cc(long *param_1)

{
  int iVar1;
  long extraout_x8;
  undefined8 *puVar2;
  long *unaff_x19;
  
  iVar1 = (int)param_1 + 8;
  func_0x0001089717c8();
  *(long **)(*(long *)(*param_1 + 0x58) + 8) = param_1;
  func_0x000107c2a678();
  if (iVar1 != 0) {
    func_0x00010bdb1c9c(*(undefined8 *)(*unaff_x19 + 0x58));
  }
  func_0x0001089716d4(*unaff_x19);
  FUN_10897219c();
  func_0x000108971ddc();
  puVar2 = *(undefined8 **)(extraout_x8 + 0x58);
  do {
    (**(code **)*puVar2)();
    if (*unaff_x19 == 0) {
      return;
    }
    puVar2 = *(undefined8 **)(*unaff_x19 + 0x58);
  } while (puVar2 != (undefined8 *)0x0);
  *unaff_x19 = 0;
  FUN_108968df8();
  func_0x0001089719fc();
  return;
}



/* Entry: 10896a0d0; end: 10896a11b;  */

void FUN_10896a0d0(void)

{
  int unaff_w19;
  undefined1 auStack_40 [32];
  
  func_0x0001089719cc();
  FUN_10896a11c(auStack_40);
  if (unaff_w19 != 0) {
    func_0x0001089721e0();
  }
  func_0x0001089718d0();
  FUN_10896a154(auStack_40);
  return;
}



/* Entry: 10896a11c; end: 10896a153;  */

void FUN_10896a11c(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x000108971864();
  if (extraout_x8 != 0) {
    func_0x000108972168();
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd42e30();
    func_0x0001089720f8();
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 10896a154; end: 10896a177;  */

undefined8 FUN_10896a154(undefined8 param_1)

{
  FUN_10896a11c();
  return param_1;
}



/* Entry: 10896a178; end: 10896a193;  */

void FUN_10896a178(void)

{
  long unaff_x19;
  
  func_0x0001089716fc();
  (*(code *)**(undefined8 **)(unaff_x19 + 0x18))();
  return;
}



/* Entry: 10896a194; end: 10896a1b3;  */

void FUN_10896a194(long param_1)

{
  func_0x00010bd42538(*(undefined4 *)(param_1 + 0x48),param_1 + 0x18);
  return;
}



/* Entry: 10896a1b4; end: 10896a267;  */

long FUN_10896a1b4(long param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  
  if ((param_2 & 1) == 0) {
    if ((*(long *)(param_3 + 0x20) == *(long *)(param_4 + 0x20)) ||
       ((((*(long *)(param_3 + 0x20) != 0) != (*(long *)(param_4 + 0x20) == 0) &&
         (*(long *)(param_3 + 0x28) == *(long *)(param_4 + 0x28))) &&
        (lVar1 = param_3, (**(code **)(*(long *)(param_3 + 0x28) + 8))(param_3,param_4),
        (int)lVar1 != 0)))) {
      *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110a9cc38;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined ***)(param_1 + 0x28) = &PTR_DAT_110a9cc58;
      *(undefined ***)(param_1 + 0x30) = &PTR_FUN_110a9cd38;
      return param_1;
    }
  }
  func_0x00010bd3f654(param_1,param_3,&UNK_10df77d6d,0);
  return param_1;
}



/* Entry: 10896a268; end: 10896a28b;  */

void FUN_10896a268(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long in_stack_00000000;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000018;
  
  if ((param_2 & 7) != 0) {
    plVar6 = (long *)(param_1 + 8);
    lVar3 = *plVar6;
    plVar4 = *(long **)(param_1 + 0x10);
    iVar5 = *(int *)(param_1 + 0x1c);
    func_0x00010bd45684();
    if (*plVar4 != 0) {
      func_0x00010bd45354(&stack0x00000020);
      in_stack_00000010 = 0;
      in_stack_00000018 = (undefined8 *)0x0;
      in_stack_00000000 = 0;
      in_stack_00000008 = (undefined8 *)0x0;
      while( true ) {
        lVar1 = *plVar4 + (long)iVar5 * 0x10;
        puVar7 = *(undefined8 **)(lVar1 + 0x68);
        if (puVar7 == (undefined8 *)0x0) break;
        func_0x00010bd40700();
        if ((long *)puVar7[6] == plVar6) {
          func_0x00010bd452d0(puVar7 + 3);
          *puVar7 = 0;
          puVar2 = &stack0x00000010;
          if (in_stack_00000018 != (undefined8 *)0x0) {
            puVar2 = in_stack_00000018;
          }
          *puVar2 = puVar7;
          in_stack_00000018 = puVar7;
        }
        else {
          *puVar7 = 0;
          puVar2 = (undefined8 *)register0x00000008;
          if (in_stack_00000008 != (undefined8 *)0x0) {
            puVar2 = in_stack_00000008;
          }
          *puVar2 = puVar7;
          in_stack_00000008 = puVar7;
        }
      }
      if (in_stack_00000000 != 0) {
        plVar4 = (long *)(lVar1 + 0x68);
        if (*(long **)(lVar1 + 0x70) != (long *)0x0) {
          plVar4 = *(long **)(lVar1 + 0x70);
        }
        *plVar4 = in_stack_00000000;
        *(undefined8 **)(lVar1 + 0x70) = in_stack_00000008;
        in_stack_00000000 = 0;
        in_stack_00000008 = (undefined8 *)0x0;
      }
      FUN_10894f1d0(&stack0x00000020);
      func_0x00010bd40720(*(undefined8 *)(lVar3 + 0x30),&stack0x00000010);
      func_0x00010bd43ff0();
      FUN_10894f514(&stack0x00000010);
      FUN_10894f570(&stack0x00000020);
    }
    return;
  }
  return;
}



/* Entry: 10896a28c; end: 10896a2af;  */

undefined8 FUN_10896a28c(undefined8 param_1)

{
  FUN_10896a07c();
  return param_1;
}



/* Entry: 10896a2b0; end: 10896a30b;  */

void FUN_10896a2b0(long *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x58;
  FUN_108968564();
  *puVar1 = FUN_10896fde0;
  puVar1[1] = FUN_108970020;
  puVar1[9] = param_2;
  *(undefined4 *)(puVar1 + 10) = param_3;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[2] = puVar1;
  puVar1[3] = 0;
  *param_1 = (long)(puVar1 + 2);
  *(undefined1 *)((long)puVar1 + 0x54) = 0;
  return;
}



/* Entry: 10896a30c; end: 10896a517;  */

void FUN_10896a30c(ulong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  undefined8 *puVar5;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long lVar6;
  undefined8 unaff_x23;
  long unaff_x24;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_70;
  long lStack_58;
  long lStack_50;
  
  func_0x000108971b78();
  *(int *)(param_1 + 0x1c) = param_4;
  if (param_4 == 0) goto LAB_10896a360;
  do {
    param_1 = unaff_x19[2];
    unaff_x19[8] = 0;
    func_0x00010bd45c74(param_1,(int)unaff_x19[3],unaff_x19 + 5);
    iVar2 = (int)param_1;
    *(int *)(unaff_x19 + 4) = iVar2;
    uVar1 = iVar2 == -2;
    if ((bool)uVar1) {
      lVar6 = unaff_x19[2];
      if (*(long *)(lVar6 + 0x158) == 0) {
        func_0x000108972140();
        func_0x000108972268();
        if ((bool)uVar1) {
          FUN_10896a568();
          func_0x000108971be0();
          lVar6 = unaff_x19[1];
          uStack_b8 = *(undefined8 *)(unaff_x19[2] + 0x148);
          uStack_c0 = *(undefined8 *)(unaff_x19[2] + 0x140);
          goto LAB_10896a4c4;
        }
        lVar6 = unaff_x20 + 0x10;
        goto LAB_10896a4ec;
      }
      func_0x000108971b60();
      iVar2 = (int)lVar6;
      func_0x000108972224();
    }
    else {
      uVar1 = iVar2 == -1 || iVar2 == 1;
      if ((bool)uVar1) {
        func_0x000108972170(unaff_x19[2]);
        func_0x000108972268();
        if ((bool)uVar1) {
          FUN_10896a568();
          func_0x000108971640();
          func_0x000108972160(unaff_x19[2]);
          func_0x000108971c04();
          func_0x000108972054();
          FUN_10896b714();
          func_0x00010897178c();
          FUN_10896bca4();
          FUN_108968f38(unaff_x22 + 0x78);
          return;
        }
        lVar6 = unaff_x20 + 0x88;
LAB_10896a4ec:
        plVar3 = unaff_x19;
        func_0x000108971db0(lVar6);
        plStack_70 = plVar3 + 9;
        lVar4 = 0xf8;
        func_0x00010bd3faa4();
        lStack_58 = lVar4;
        func_0x000108971718(FUN_10896b90c);
        FUN_10896b714();
        lVar6 = lVar4 + 0x88;
        FUN_10896b76c(lVar6,lVar4 + 0x38,unaff_x23);
        lStack_50 = lVar4;
        if (unaff_x24 != 0) {
          func_0x000108971eb0();
          *(long *)(lVar4 + 0x30) = lVar6;
        }
        *(undefined1 *)(unaff_x19 + 2) = 1;
        func_0x000108971cd4(*(undefined8 *)(unaff_x20 + 0x68));
        func_0x000108971668();
        FUN_10896bc80();
        return;
      }
      if ((int)unaff_x20 != 0) {
        lVar6 = unaff_x19[1];
        uStack_c0 = *(undefined8 *)(unaff_x19[2] + 0x140);
        uStack_b8 = 0;
LAB_10896a4c4:
        FUN_10896a570(lVar6,&uStack_c0);
        return;
      }
LAB_10896a360:
      lVar6 = 0;
      if ((unaff_x22 != -1) && (func_0x000108971b68(), lVar6 = unaff_x22, (param_1 & 1) == 0)) {
        func_0x000108972288();
      }
      unaff_x22 = lVar6;
      iVar2 = (int)unaff_x19[4];
      if (iVar2 == -2) {
        func_0x000108971948();
        func_0x000108972224();
        lVar6 = unaff_x19[2];
        FUN_108971df4();
        iVar2 = (int)lVar6 + 0x10;
      }
      else {
        if (iVar2 != -1) {
          if (iVar2 == 1) {
            FUN_10896a518();
            func_0x000108971640();
          }
          func_0x000108971f10(unaff_x19[2]);
          func_0x000108971b68();
          goto LAB_10896a46c;
        }
        lVar6 = unaff_x19[2];
        FUN_108971df4();
        iVar2 = (int)lVar6 + 0x88;
      }
      FUN_10896a520();
      if ((*unaff_x19 != 0) && (*(int *)(*unaff_x19 + 8) != 0)) {
        plVar3 = unaff_x19 + 5;
        FUN_10894f248(plVar3,0x59);
        iVar2 = (int)plVar3;
      }
    }
    func_0x000108971b68();
  } while (iVar2 == 0);
  func_0x000108971f10(unaff_x19[2]);
LAB_10896a46c:
  plVar3 = unaff_x19 + 9;
  iVar2 = (int)unaff_x19 + 0x28;
  func_0x0001089717c8();
  *(long **)(*(long *)(*plVar3 + 0x58) + 8) = plVar3;
  func_0x000107c2a678();
  if (iVar2 != 0) {
    func_0x00010bdb1c9c(*(undefined8 *)(*unaff_x19 + 0x58),unaff_x20);
  }
  func_0x0001089716d4(*unaff_x19);
  FUN_10897219c();
  func_0x000108971ddc();
  puVar5 = *(undefined8 **)(extraout_x8 + 0x58);
  do {
    (**(code **)*puVar5)();
    if (*unaff_x19 == 0) {
      return;
    }
    puVar5 = *(undefined8 **)(*unaff_x19 + 0x58);
  } while (puVar5 != (undefined8 *)0x0);
  *unaff_x19 = 0;
  FUN_108968df8();
  func_0x0001089719fc();
  return;
}



/* Entry: 10896a518; end: 10896a51f;  */

/* WARNING: Removing unreachable block (ram,0x00010896a718) */

undefined8 FUN_10896a518(void)

{
  undefined8 uStack_28;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  uStack_1c = 0;
  uStack_28 = 0x8000000000000000;
  FUN_10896b16c(&uStack_18,&uStack_1c,&uStack_28);
  return uStack_18;
}



/* Entry: 10896a520; end: 10896a567;  */

void FUN_10896a520(undefined8 *param_1)

{
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000108971e2c();
  FUN_10896b324(*param_1,unaff_x20 + 8,&uStack_38);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  func_0x000107c2a674(&uStack_38,&UNK_10f4ed928);
  return;
}



/* Entry: 10896a568; end: 10896a56f;  */

/* WARNING: Removing unreachable block (ram,0x00010896a70c) */

undefined8 FUN_10896a568(void)

{
  undefined8 uStack_28;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  uStack_1c = 0xffffffff;
  uStack_28 = 0x7fffffffffffffff;
  FUN_10896b16c(&uStack_18,&uStack_1c,&uStack_28);
  return uStack_18;
}



/* Entry: 10896a570; end: 10896a65f;  */

void FUN_10896a570(long *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x26;
  long lVar4;
  
  func_0x000108971e2c();
  lVar3 = *param_1;
  lVar4 = *param_3;
  lVar1 = 0x128;
  func_0x00010bd3faa4();
  func_0x000108972250(*(undefined4 *)(unaff_x20 + 8));
  func_0x0001089718e0(*(undefined8 *)(lVar3 + 0x30));
  FUN_10896b714();
  lVar2 = lVar1 + 0xb8;
  FUN_10896b76c(lVar2,lVar1 + 0x68,unaff_x20 + 0x20);
  if (lVar4 != 0) {
    func_0x000108971ce8();
    *unaff_x26 = lVar2;
  }
  func_0x000108972048(*(undefined1 *)(unaff_x20 + 0xc));
  func_0x000108971a9c(lVar3 + 0x28,(undefined4 *)(unaff_x20 + 8),0,lVar1);
  func_0x000108971668();
  FUN_10896b7cc();
  return;
}



/* Entry: 10896a660; end: 10896a6f7;  */

void FUN_10896a660(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x24;
  
  func_0x000108971db0();
  lVar1 = 0xf8;
  func_0x00010bd3faa4();
  func_0x000108971718(FUN_10896b90c);
  FUN_10896b714();
  lVar2 = lVar1 + 0x88;
  FUN_10896b76c(lVar2,lVar1 + 0x38);
  if (unaff_x24 != 0) {
    func_0x000108971eb0();
    *(long *)(lVar1 + 0x30) = lVar2;
  }
  *(undefined1 *)(unaff_x19 + 0x10) = 1;
  func_0x000108971cd4(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000108971668();
  FUN_10896bc80();
  return;
}



/* Entry: 10896a6f8; end: 10896a747;  */

undefined8 FUN_10896a6f8(int param_1)

{
  undefined8 uStack_28;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  if (param_1 == 1) {
    uStack_1c = 0;
    uStack_28 = 0x8000000000000000;
  }
  else {
    uStack_1c = 0xffffffff;
    uStack_28 = 0x7fffffffffffffff;
  }
  FUN_10896b16c(&uStack_18,&uStack_1c,&uStack_28);
  return uStack_18;
}



/* Entry: 10896a748; end: 10896a757;  */

undefined8 FUN_10896a748(undefined8 param_1,uint param_2,undefined2 param_3,ushort param_4)

{
  code *pcVar1;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [16];
  
  param_2 = param_2 & 0xffff;
  FUN_10896aff0(param_1,param_2,param_3,param_4);
  FUN_10896b028(param_2,param_3);
  if (param_4 <= param_2) {
    return param_1;
  }
  func_0x000108971ec8();
  FUN_10896b14c(auStack_40,auStack_58);
  FUN_10896ad40(auStack_40);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10896afd4);
  (*pcVar1)();
}



/* Entry: 10896a758; end: 10896a77f;  */

undefined2 * FUN_10896a758(undefined2 *param_1)

{
  *param_1 = 0x578;
  FUN_10896a780();
  return param_1;
}



/* Entry: 10896a780; end: 10896a7af;  */

void FUN_10896a780(undefined2 *param_1,uint param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [16];
  
  if (param_2 < 0x578) {
    uVar2 = 0;
  }
  else {
    if (param_2 >> 4 < 0x271) {
      *param_1 = (short)param_2;
      return;
    }
    uVar2 = 1;
  }
  FUN_10896a9c4(auStack_30,param_2,uVar2);
  FUN_10896a7e0(auStack_30);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10896a7d4);
  (*pcVar1)();
}



/* Entry: 10896a7b0; end: 10896a7df;  */

void FUN_10896a7b0(void)

{
  code *pcVar1;
  undefined1 auStack_30 [16];
  
  FUN_10896a9c4(auStack_30);
  FUN_10896a7e0(auStack_30);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10896a7d4);
  (*pcVar1)();
}



/* Entry: 10896a7e0; end: 10896a817;  */

void FUN_10896a7e0(void)

{
  func_0x00010897164c();
  FUN_10896a818();
  func_0x000108971a20();
  func_0x0001089715a8();
  func_0x000108971750();
                    /* WARNING: Could not recover jumptable at 0x00010bdbcbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt12out_of_rangeD2Ev_110346188)();
  return;
}



/* Entry: 10896a818; end: 10896a823;  */

void FUN_10896a818(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt12out_of_rangeD2Ev_110346188)();
  return;
}



/* Entry: 10896a824; end: 10896a85b;  */

void FUN_10896a824(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  
  func_0x000108971574();
  *param_1 = extraout_x8;
  FUN_10896a85c(param_1 + 1);
  func_0x00010897202c();
  func_0x000108971588(&UNK_110aa0390);
  *(undefined8 *)(unaff_x19 + 0x18) = extraout_x8_00;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  return;
}



/* Entry: 10896a85c; end: 10896a87b;  */

void FUN_10896a85c(void)

{
  FUN_10896a924();
  func_0x000108971d78(&UNK_110aa0408);
  return;
}



/* Entry: 10896a87c; end: 10896a8b7;  */

undefined8 FUN_10896a87c(undefined8 param_1)

{
  func_0x000108971bf8();
  FUN_10896a95c();
  func_0x000108971bd4();
  return param_1;
}



/* Entry: 10896a8b8; end: 10896a8ef;  */

void FUN_10896a8b8(void)

{
  func_0x00010897164c();
  FUN_10896a958();
  func_0x000108971a20();
  func_0x0001089715a8();
  func_0x000108971750();
  FUN_10896a9a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10896a8f0; end: 10896a903;  */

void FUN_10896a8f0(void)

{
  FUN_10896a9a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10896a904; end: 10896a923;  */

void FUN_10896a904(long param_1)

{
  func_0x000108971c28(param_1 + -8);
  func_0x000108971c4c();
  return;
}



/* Entry: 10896a924; end: 10896a957;  */

void FUN_10896a924(void)

{
  __ZNSt11logic_errorC2ERKS_();
  func_0x000108971d78(PTR___ZTVSt12out_of_range_110346b60);
  return;
}



/* Entry: 10896a958; end: 10896a95b;  */

void FUN_10896a958(void)

{
  undefined8 extraout_x8;
  long unaff_x19;
  
  func_0x000108971574();
  func_0x000108971b20();
  FUN_10896a85c();
  func_0x000108971c54();
  func_0x000108971588(&UNK_110aa0390);
  *(undefined8 *)(unaff_x19 + 0x18) = extraout_x8;
  return;
}



/* Entry: 10896a95c; end: 10896a9a3;  */

void FUN_10896a95c(void)

{
  undefined8 extraout_x8;
  long unaff_x19;
  
  func_0x000108971574();
  func_0x000108971b20();
  FUN_10896a85c();
  func_0x000108971c54();
  func_0x000108971588(&UNK_110aa0390);
  *(undefined8 *)(unaff_x19 + 0x18) = extraout_x8;
  return;
}



/* Entry: 10896a9a4; end: 10896a9c3;  */

void FUN_10896a9a4(void)

{
  func_0x000108971c28();
  func_0x000108971c4c();
  return;
}



/* Entry: 10896a9c4; end: 10896aa0f;  */

void FUN_10896a9c4(undefined8 param_1)

{
  func_0x000108971ec8(param_1,&UNK_10f4ed892);
  func_0x000108971994();
  FUN_10896aa10();
  func_0x000108971784();
  func_0x000108971acc(&UNK_110aa0408);
  return;
}



/* Entry: 10896aa10; end: 10896aa2f;  */

void FUN_10896aa10(void)

{
  __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  func_0x000108971d78(PTR___ZTVSt12out_of_range_110346b60);
  return;
}



/* Entry: 10896aa30; end: 10896aa57;  */

undefined2 * FUN_10896aa30(undefined2 *param_1)

{
  *param_1 = 1;
  FUN_10896aa58();
  return param_1;
}



/* Entry: 10896aa58; end: 10896aa7f;  */

void FUN_10896aa58(undefined2 *param_1,uint param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [16];
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    if (param_2 < 0xd) {
      *param_1 = (short)param_2;
      return;
    }
    uVar2 = 1;
  }
  FUN_10896ac74(auStack_30,param_2,uVar2);
  FUN_10896aab0(auStack_30);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10896aaa4);
  (*pcVar1)();
}



/* Entry: 10896aa80; end: 10896aaaf;  */

void FUN_10896aa80(void)

{
  code *pcVar1;
  undefined1 auStack_30 [16];
  
  FUN_10896ac74(auStack_30);
  FUN_10896aab0(auStack_30);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10896aaa4);
  (*pcVar1)();
}



/* Entry: 10896aab0; end: 10896aae7;  */

void FUN_10896aab0(void)

{
  func_0x00010897164c();
  FUN_10896aae8();
  func_0x000108971a20();
  func_0x0001089715a8();
  func_0x000108971750();
                    /* WARNING: Could not recover jumptable at 0x00010bdbcbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt12out_of_rangeD2Ev_110346188)();
  return;
}



/* Entry: 10896aae8; end: 10896aaf3;  */

void FUN_10896aae8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt12out_of_rangeD2Ev_110346188)();
  return;
}



/* Entry: 10896aaf4; end: 10896ab2b;  */

void FUN_10896aaf4(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  
  func_0x000108971574();
  *param_1 = extraout_x8;
  FUN_10896ab2c(param_1 + 1);
  func_0x00010897202c();
  func_0x000108971588(&UNK_110aa0490);
  *(undefined8 *)(unaff_x19 + 0x18) = extraout_x8_00;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  return;
}



/* Entry: 10896ab2c; end: 10896ab4b;  */

void FUN_10896ab2c(void)

{
  FUN_10896a924();
  func_0x000108971d78(&UNK_110aa0508);
  return;
}



/* Entry: 10896ab4c; end: 10896ab87;  */

undefined8 FUN_10896ab4c(undefined8 param_1)

{
  func_0x000108971bf8();
  FUN_10896ac0c();
  func_0x000108971bd4();
  return param_1;
}



/* Entry: 10896ab88; end: 10896abbf;  */

void FUN_10896ab88(void)

{
  func_0x00010897164c();
  FUN_10896ac08();
  func_0x000108971a20();
  func_0x0001089715a8();
  func_0x000108971750();
  FUN_10896ac54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10896abc0; end: 10896abd3;  */

void FUN_10896abc0(void)

{
  FUN_10896ac54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10896abd4; end: 10896abf3;  */

void FUN_10896abd4(long param_1)

{
  func_0x000108971c28(param_1 + -8);
  func_0x000108971c4c();
  return;
}



/* Entry: 10896abf4; end: 10896ac07;  */

void FUN_10896abf4(void)

{
  __ZNSt12out_of_rangeD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10896ac08; end: 10896ac0b;  */

void FUN_10896ac08(void)

{
  undefined8 extraout_x8;
  long unaff_x19;
  
  func_0x000108971574();
  func_0x000108971b20();
  FUN_10896ab2c();
  func_0x000108971c54();
  func_0x000108971588(&UNK_110aa0490);
  *(undefined8 *)(unaff_x19 + 0x18) = extraout_x8;
  return;
}



/* Entry: 10896ac0c; end: 10896ac53;  */

void FUN_10896ac0c(void)

{
  undefined8 extraout_x8;
  long unaff_x19;
  
  func_0x000108971574();
  func_0x000108971b20();
  FUN_10896ab2c();
  func_0x000108971c54();
  func_0x000108971588(&UNK_110aa0490);
  *(undefined8 *)(unaff_x19 + 0x18) = extraout_x8;
  return;
}



/* Entry: 10896ac54; end: 10896ac73;  */

void FUN_10896ac54(void)

{
  func_0x000108971c28();
  func_0x000108971c4c();
  return;
}



/* Entry: 10896ac74; end: 10896acbf;  */

void FUN_10896ac74(undefined8 param_1)

{
  func_0x000108971ec8(param_1,&UNK_10f4ed8b9);
  func_0x000108971994();
  FUN_10896aa10();
  func_0x000108971784();
  func_0x000108971acc(&UNK_110aa0508);
  return;
}



/* Entry: 10896acc0; end: 10896ace7;  */

undefined2 * FUN_10896acc0(undefined2 *param_1)

{
  *param_1 = 1;
  FUN_10896ace8();
  return param_1;
}



/* Entry: 10896ace8; end: 10896ad0f;  */

void FUN_10896ace8(undefined2 *param_1,uint param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [16];
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    if (param_2 < 0x20) {
      *param_1 = (short)param_2;
      return;
    }
    uVar2 = 1;
  }
  FUN_10896af04(auStack_30,param_2,uVar2);
  FUN_10896ad40(auStack_30);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10896ad34);
  (*pcVar1)();
}



/* Entry: 10896ad10; end: 10896ad3f;  */

void FUN_10896ad10(void)

{
  code *pcVar1;
  undefined1 auStack_30 [16];
  
  FUN_10896af04(auStack_30);
  FUN_10896ad40(auStack_30);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10896ad34);
  (*pcVar1)();
}



/* Entry: 10896ad40; end: 10896ad77;  */

void FUN_10896ad40(void)

{
  func_0x00010897164c();
  FUN_10896ad78();
  func_0x000108971a20();
  func_0x0001089715a8();
  func_0x000108971750();
                    /* WARNING: Could not recover jumptable at 0x00010bdbcbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt12out_of_rangeD2Ev_110346188)();
  return;
}



/* Entry: 10896ad78; end: 10896ad83;  */

void FUN_10896ad78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt12out_of_rangeD2Ev_110346188)();
  return;
}



/* Entry: 10896ad84; end: 10896adbb;  */

void FUN_10896ad84(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  
  func_0x000108971574();
  *param_1 = extraout_x8;
  FUN_10896adbc(param_1 + 1);
  func_0x00010897202c();
  func_0x000108971588(&UNK_110aa0590);
  *(undefined8 *)(unaff_x19 + 0x18) = extraout_x8_00;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  return;
}



/* Entry: 10896adbc; end: 10896addb;  */

void FUN_10896adbc(void)

{
  FUN_10896a924();
  func_0x000108971d78(&UNK_110aa0608);
  return;
}



/* Entry: 10896addc; end: 10896ae17;  */

undefined8 FUN_10896addc(undefined8 param_1)

{
  func_0x000108971bf8();
  FUN_10896ae9c();
  func_0x000108971bd4();
  return param_1;
}



/* Entry: 10896ae18; end: 10896ae4f;  */

void FUN_10896ae18(void)

{
  func_0x00010897164c();
  FUN_10896ae98();
  func_0x000108971a20();
  func_0x0001089715a8();
  func_0x000108971750();
  FUN_10896aee4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10896ae50; end: 10896ae63;  */

void FUN_10896ae50(void)

{
  FUN_10896aee4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10896ae64; end: 10896ae83;  */

void FUN_10896ae64(long param_1)

{
  func_0x000108971c28(param_1 + -8);
  func_0x000108971c4c();
  return;
}



/* Entry: 10896ae84; end: 10896ae97;  */

void FUN_10896ae84(void)

{
  __ZNSt12out_of_rangeD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10896ae98; end: 10896ae9b;  */

void FUN_10896ae98(void)

{
  undefined8 extraout_x8;
  long unaff_x19;
  
  func_0x000108971574();
  func_0x000108971b20();
  FUN_10896adbc();
  func_0x000108971c54();
  func_0x000108971588(&UNK_110aa0590);
  *(undefined8 *)(unaff_x19 + 0x18) = extraout_x8;
  return;
}



/* Entry: 10896ae9c; end: 10896aee3;  */

void FUN_10896ae9c(void)

{
  undefined8 extraout_x8;
  long unaff_x19;
  
  func_0x000108971574();
  func_0x000108971b20();
  FUN_10896adbc();
  func_0x000108971c54();
  func_0x000108971588(&UNK_110aa0590);
  *(undefined8 *)(unaff_x19 + 0x18) = extraout_x8;
  return;
}



/* Entry: 10896aee4; end: 10896af03;  */

void FUN_10896aee4(void)

{
  func_0x000108971c28();
  func_0x000108971c4c();
  return;
}



/* Entry: 10896af04; end: 10896af4f;  */

void FUN_10896af04(undefined8 param_1)

{
  func_0x000108971ec8(param_1,&UNK_10f4ed8dc);
  func_0x000108971994();
  FUN_10896aa10();
  func_0x000108971784();
  func_0x000108971acc(&UNK_110aa0608);
  return;
}



/* Entry: 10896af50; end: 10896afef;  */

undefined8 FUN_10896af50(undefined8 param_1,ushort param_2,undefined2 param_3,ushort param_4)

{
  code *pcVar1;
  uint uVar2;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [16];
  
  FUN_10896aff0(param_1,param_2,param_3,param_4);
  uVar2 = (uint)param_2;
  FUN_10896b028(param_2,param_3);
  if (param_4 <= uVar2) {
    return param_1;
  }
  func_0x000108971ec8();
  FUN_10896b14c(auStack_40,auStack_58);
  FUN_10896ad40(auStack_40);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10896afd4);
  (*pcVar1)();
}



/* Entry: 10896aff0; end: 10896b027;  */

undefined4 *
FUN_10896aff0(undefined4 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined4 uVar1;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  
  uVar1 = SUB84(&uStack_26,0);
  uStack_26 = param_2;
  uStack_24 = param_3;
  uStack_22 = param_4;
  FUN_10896b088();
  *param_1 = uVar1;
  return param_1;
}



/* Entry: 10896b028; end: 10896b087;  */

undefined4 FUN_10896b028(uint param_1,uint param_2)

{
  if ((param_2 & 0xffff) < 0xc) {
    if ((1 << (ulong)(param_2 & 0x1f) & 0xa50U) != 0) {
      return 0x1e;
    }
    if ((param_2 & 0xffff) == 2) {
      param_1 = param_1 & 0xffff;
      func_0x00010896b108();
      if (param_1 == 0) {
        return 0x1c;
      }
      return 0x1d;
    }
  }
  return 0x1f;
}



/* Entry: 10896b088; end: 10896b14b;  */

int FUN_10896b088(ushort *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (int)(0xe - (uint)param_1[1]) / 0xc;
  uVar1 = ((uint)*param_1 - iVar2) + 0x12c0 & 0xffff;
  return (((uint)param_1[2] + uVar1 * 0x16d + (uVar1 >> 2)) - uVar1 / 100) + uVar1 / 400 + -0x7d2d +
         ((((uint)param_1[1] + iVar2 * 0xc) - 3 & 0xffff) * 0x99 + 2) / 5;
}



/* Entry: 10896b14c; end: 10896b16b;  */

void FUN_10896b14c(void)

{
  FUN_10896aa10();
  func_0x000108971d78(&UNK_110aa0608);
  return;
}



/* Entry: 10896b16c; end: 10896b1ef;  */

long * FUN_10896b16c(long *param_1,uint *param_2,long *param_3)

{
  long *plVar1;
  uint uStack_2c;
  long lStack_28;
  
  *param_1 = 1;
  uStack_2c = *param_2;
  if ((uStack_2c + 2 < 3) || (*param_3 + 0x8000000000000002U < 3)) {
    lStack_28 = *param_3;
    plVar1 = &lStack_28;
    FUN_10896b1f0(plVar1,&uStack_2c);
    *param_1 = (long)plVar1;
  }
  else {
    *param_1 = *param_3 + (ulong)uStack_2c * 86400000000;
  }
  return param_1;
}



/* Entry: 10896b1f0; end: 10896b323;  */

long FUN_10896b1f0(long *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = *param_1;
  if (lVar1 + 0x8000000000000002U < 3) {
    if (lVar1 == 0x7ffffffffffffffe) {
      return 0x7ffffffffffffffe;
    }
    uVar2 = *param_2;
  }
  else {
    uVar2 = *param_2;
    if (2 < uVar2 + 2) goto LAB_10896b228;
  }
  if (uVar2 != 0xfffffffe) {
    if (lVar1 == -0x8000000000000000) {
      if (uVar2 != 0xffffffff) {
        return -0x8000000000000000;
      }
    }
    else {
      if (lVar1 != 0x7fffffffffffffff) {
        if (uVar2 == 0xffffffff) {
          return 0x7fffffffffffffff;
        }
        if (uVar2 == 0) {
          return -0x8000000000000000;
        }
LAB_10896b228:
        return lVar1 + (ulong)uVar2;
      }
      if (uVar2 != 0) {
        return 0x7fffffffffffffff;
      }
    }
  }
  return 0x7ffffffffffffffe;
}



/* Entry: 10896b324; end: 10896b3b7;  */

void FUN_10896b324(long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x68);
    func_0x00010894f204(auStack_40,lVar1 + 0x38);
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x00010bd431a0(param_1 + 0x38,param_2 + 0x10,&uStack_50,0xffffffffffffffff);
    func_0x00010894f1d0(auStack_40);
    func_0x00010bd40720(*(undefined8 *)(lVar1 + 0x30),&uStack_50);
    FUN_10894f514(&uStack_50);
    func_0x000108971f00();
    *(undefined1 *)(param_2 + 8) = 0;
  }
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}



/* Entry: 10896b3b8; end: 10896b51b;  */

/* WARNING: Possible PIC construction at 0x00010896b408: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010896b40c) */
/* WARNING: Removing unreachable block (ram,0x00010896b410) */
/* WARNING: Removing unreachable block (ram,0x00010896b424) */
/* WARNING: Removing unreachable block (ram,0x00010896b444) */
/* WARNING: Removing unreachable block (ram,0x00010896b434) */
/* WARNING: Removing unreachable block (ram,0x00010896b49c) */
/* WARNING: Removing unreachable block (ram,0x00010896b418) */
/* WARNING: Removing unreachable block (ram,0x00010896b4a0) */
/* WARNING: Removing unreachable block (ram,0x00010896b4a4) */
/* WARNING: Removing unreachable block (ram,0x00010896b4cc) */
/* WARNING: Removing unreachable block (ram,0x00010896b4e8) */
/* WARNING: Removing unreachable block (ram,0x00010896b4fc) */
/* WARNING: Removing unreachable block (ram,0x00010896b508) */
/* WARNING: Removing unreachable block (ram,0x00010896b4c0) */
/* WARNING: Removing unreachable block (ram,0x00010897153c) */

void FUN_10896b3b8(undefined8 param_1,long param_2)

{
  long *unaff_x19;
  long unaff_x20;
  undefined1 auStack_200 [80];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 *puStack_190;
  long lStack_188;
  long lStack_180;
  undefined1 auStack_e0 [176];
  
  func_0x000108971494();
  lStack_188 = param_2;
  lStack_180 = param_2;
  func_0x00010896b568(auStack_e0,param_2 + 0xb8);
  func_0x0001089722b4();
  FUN_10896b714();
  uStack_1a8 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_1b0 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000108971f88();
  puStack_190 = auStack_200;
  func_0x000108971a58(&puStack_190);
  if (unaff_x20 != 0) {
    FUN_10896b6a4(unaff_x20 + 0xb8);
    FUN_108968f38(unaff_x20 + 0xb0);
    unaff_x19[2] = 0;
  }
  if (unaff_x19[1] != 0) {
    func_0x0001089720b8(*unaff_x19 + 0x48);
    unaff_x19[1] = 0;
  }
  return;
}



/* Entry: 10896b51c; end: 10896b58b;  */

void FUN_10896b51c(void)

{
  long *unaff_x19;
  long unaff_x20;
  
  func_0x000108971a58();
  if (unaff_x20 != 0) {
    FUN_10896b6a4(unaff_x20 + 0xb8);
    FUN_108968f38(unaff_x20 + 0xb0);
    unaff_x19[2] = 0;
  }
  if (unaff_x19[1] != 0) {
    func_0x0001089720b8(*unaff_x19 + 0x48);
    unaff_x19[1] = 0;
  }
  return;
}



/* Entry: 10896b58c; end: 10896b5b3;  */

void FUN_10896b58c(long param_1,undefined8 param_2)

{
  func_0x0001089715e8(*(undefined8 *)(param_1 + 0x60),param_1,param_2,
                      *(undefined8 *)(param_1 + 0x68));
  FUN_10896a30c();
  return;
}



/* Entry: 10896b5b4; end: 10896b5b7;  */

void FUN_10896b5b4(long param_1,undefined8 param_2)

{
  func_0x0001089715e8(*(undefined8 *)(param_1 + 0x60),param_1,param_2,
                      *(undefined8 *)(param_1 + 0x68));
  FUN_10896a30c();
  return;
}



/* Entry: 10896b5b8; end: 10896b5df;  */

void FUN_10896b5b8(long param_1,long param_2)

{
  FUN_10896b714();
  func_0x000108972274();
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  return;
}



/* Entry: 10896b5e0; end: 10896b63b;  */

void FUN_10896b5e0(void)

{
  int unaff_w19;
  undefined1 auStack_b0 [112];
  undefined1 auStack_40 [32];
  
  func_0x0001089714c0();
  func_0x000108971888();
  FUN_10896b5b8();
  FUN_10896b63c(auStack_40);
  if (unaff_w19 != 0) {
    FUN_10896b58c(auStack_b0);
  }
  func_0x000108971690();
  FUN_10896b680(auStack_40);
  return;
}



/* Entry: 10896b63c; end: 10896b67f;  */

void FUN_10896b63c(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x000108971864();
  if (extraout_x8 != 0) {
    FUN_108968f38(extraout_x8 + 0x50);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd42e30();
    FUN_10894fe18();
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}


