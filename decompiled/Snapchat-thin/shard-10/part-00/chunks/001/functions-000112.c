/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1074d32a8; end: 1074d331b;  */

void FUN_1074d32a8(long param_1,long param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)(param_1 + 8);
  uVar1 = param_2 + (lVar3 - param_4);
  lVar2 = lVar3;
  for (uVar4 = uVar1; uVar4 < param_3; uVar4 = uVar4 + 0x120) {
    FUN_1074c6bdc(lVar2,uVar4);
    lVar2 = lVar2 + 0x120;
  }
  *(long *)(param_1 + 8) = lVar2;
  FUN_1074d3498(&stack0xffffffffffffffef,param_2,uVar1,lVar3);
  return;
}



/* Entry: 1074d331c; end: 1074d33b3;  */

undefined8 * FUN_1074d331c(undefined1 *param_1,undefined8 *param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 auStack_170 [36];
  long *plStack_50;
  undefined8 uStack_48;
  
  puVar4 = param_2;
  func_0x0001074d3a98();
  plVar1 = (long *)(param_1 + 0x10);
  puVar3 = (undefined8 *)param_1;
  uStack_48 = extraout_x8;
  for (lVar6 = param_3 * 0x120; lVar6 != 0; lVar6 = lVar6 + -0x120) {
    plStack_50 = plVar1;
    FUN_1074d0058(auStack_170,param_2);
    puVar4 = auStack_170;
    FUN_1074d34f8(param_4);
    puVar3 = auStack_170;
    func_0x0001074ae9a8();
    param_4 = param_4 + 0x120;
    param_2 = param_2 + 0x24;
  }
  func_0x0001074d39e4(uStack_48);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x0001074d4778();
  puVar2 = (undefined1 *)puVar4[1];
  FUN_1074c6d80((undefined1 *)((long)puVar3 + 0x10),param_3,*(undefined8 *)((long)puVar3 + 8),
                puVar4[2]);
  lVar6 = *plVar1;
  lVar7 = param_2[1];
  param_2[2] = param_2[2] + (*(long *)(param_1 + 0x18) - param_3);
  *(long *)(param_1 + 0x18) = param_3;
  lVar7 = lVar7 + ((param_3 - lVar6) / -0x120) * 0x120;
  FUN_1074c6d80(param_1 + 0x20,lVar6,param_3,lVar7);
  param_2[1] = lVar7;
  lVar6 = *plVar1;
  *(long *)(param_1 + 0x18) = lVar6;
  *plVar1 = param_2[1];
  param_2[1] = lVar6;
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_2[2];
  param_2[2] = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_2[3];
  param_2[3] = uVar5;
  *param_2 = param_2[1];
  return (undefined8 *)puVar2;
}



/* Entry: 1074d33b4; end: 1074d346b;  */

undefined8 FUN_1074d33b4(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long lVar3;
  
  func_0x0001074d4778();
  uVar1 = *(undefined8 *)(param_2 + 8);
  FUN_1074c6d80(param_1 + 0x10,param_3,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 0x10))
  ;
  lVar2 = *unaff_x21;
  lVar3 = unaff_x20[1];
  unaff_x20[2] = unaff_x20[2] + (unaff_x21[1] - param_3);
  unaff_x21[1] = param_3;
  lVar3 = lVar3 + ((param_3 - lVar2) / -0x120) * 0x120;
  FUN_1074c6d80(unaff_x21 + 2,lVar2,param_3,lVar3);
  unaff_x20[1] = lVar3;
  lVar2 = *unaff_x21;
  unaff_x21[1] = lVar2;
  *unaff_x21 = unaff_x20[1];
  unaff_x20[1] = lVar2;
  lVar2 = unaff_x21[1];
  unaff_x21[1] = unaff_x20[2];
  unaff_x20[2] = lVar2;
  lVar2 = unaff_x21[2];
  unaff_x21[2] = unaff_x20[3];
  unaff_x20[3] = lVar2;
  *unaff_x20 = unaff_x20[1];
  return uVar1;
}



/* Entry: 1074d346c; end: 1074d3497;  */

void FUN_1074d346c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_1074d3498(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 1074d3498; end: 1074d34f7;  */

void FUN_1074d3498(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x21;
  
  func_0x0001074d46f8();
  while (param_4 = param_4 + -0x120, param_3 != unaff_x21) {
    param_3 = param_3 + -0x120;
    FUN_1074d34f8(param_4,param_3);
  }
  return;
}



/* Entry: 1074d34f8; end: 1074d359f;  */

void FUN_1074d34f8(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001074d4018();
  func_0x0001072c0368();
  func_0x000104c2f1f0(unaff_x20 + 0x40,unaff_x19 + 0x40);
  *(undefined2 *)(unaff_x20 + 0x78) = *(undefined2 *)(unaff_x19 + 0x78);
  func_0x000104c2f1f0(unaff_x20 + 0x80,unaff_x19 + 0x80);
  func_0x000104c2f1f0(unaff_x20 + 0xb8,unaff_x19 + 0xb8);
  *(undefined4 *)(unaff_x20 + 0xf0) = *(undefined4 *)(unaff_x19 + 0xf0);
  func_0x0001072f99e4(unaff_x20 + 0xf8,unaff_x19 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x110);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x108);
  *(undefined1 *)(unaff_x20 + 0x118) = *(undefined1 *)(unaff_x19 + 0x118);
  *(undefined8 *)(unaff_x20 + 0x110) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x108) = uVar1;
  return;
}



/* Entry: 1074d35a0; end: 1074d35cb;  */

void FUN_1074d35a0(char *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x3f800000;
  if (*param_1 == '\0') {
    uVar1 = 0;
  }
  func_0x0001074d3e10(0,0x3f800000,uVar1);
  return;
}



/* Entry: 1074d35cc; end: 1074d36c3;  */

void FUN_1074d35cc(void)

{
  code *extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w23;
  
  func_0x0001074d3e54();
  func_0x0001074d40dc();
  func_0x0001074d4174();
  func_0x0001074d40dc();
  func_0x0001074d452c();
  func_0x0001074d40dc();
  func_0x0001074d416c();
  if (unaff_w23 != 0) {
    func_0x0001074d461c();
    func_0x0001074d3f90();
    func_0x0001074d3aec();
    func_0x0001074d4514();
    func_0x0001074d43a0();
    func_0x0001074d4154();
    func_0x0001074d3d54();
    func_0x0001074d450c();
    func_0x0001074d43a0();
    func_0x0001074d4980();
    func_0x0001074d3d54();
    (*extraout_x8)();
    func_0x0001074d4c74();
    (**(code **)(*unaff_x19 + 0xa0))();
  }
  func_0x0001074d4260();
  func_0x0001074d4c60();
  func_0x0001074d3b08();
  func_0x0001074d3e40();
  func_0x0001074d4c08(*(undefined1 *)(unaff_x20 + 0x118));
  func_0x0001074d4bfc(*(undefined1 *)(unaff_x20 + 0x110));
  func_0x0001074d4bf0(*(undefined1 *)(unaff_x20 + 0x111));
  func_0x0001074d4be4(*(undefined1 *)(unaff_x20 + 0x119));
  func_0x0001074d3aec();
  func_0x0001074d44e4();
  return;
}



/* Entry: 1074d36c4; end: 1074d36ef;  */

void FUN_1074d36c4(char *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x3f800000;
  if (*param_1 == '\0') {
    uVar1 = 0;
  }
  func_0x0001074d3e10(0,0x3f800000,uVar1);
  return;
}



/* Entry: 1074d36f0; end: 1074d37df;  */

void FUN_1074d36f0(void)

{
  long *unaff_x19;
  long unaff_x20;
  int unaff_w23;
  
  func_0x0001074d3e54();
  func_0x0001074d40dc();
  func_0x0001074d4174();
  func_0x0001074d40dc();
  func_0x0001074d452c();
  func_0x0001074d40dc();
  func_0x0001074d416c();
  if (unaff_w23 != 0) {
    func_0x0001074d461c();
    func_0x0001074d3f90();
    func_0x0001074d3aec();
    func_0x0001074d436c();
    func_0x0001074d43a0();
    func_0x0001074d4154();
    func_0x0001074d3d54();
    func_0x0001074d4514();
    func_0x0001074d43a0();
    func_0x0001074d4980();
    func_0x0001074d3d54();
    func_0x0001074d450c();
    func_0x0001074d4c74();
    func_0x0001074d498c(*(undefined8 *)(*unaff_x19 + 0xa0));
  }
  func_0x0001074d4260();
  func_0x0001074d4c60();
  func_0x0001074d3b08();
  func_0x0001074d3e40();
  func_0x0001074d4c08(*(undefined1 *)(unaff_x20 + 0x118));
  func_0x0001074d4bfc(*(undefined1 *)(unaff_x20 + 0x110));
  func_0x0001074d4bf0(*(undefined1 *)(unaff_x20 + 0x111));
  func_0x0001074d4be4(*(undefined1 *)(unaff_x20 + 0x119));
  func_0x0001074d3aec();
  func_0x0001074d44e4();
  return;
}



/* Entry: 1074d37e0; end: 1074d3803;  */

void FUN_1074d37e0(void)

{
  FUN_1074d3804();
  return;
}



/* Entry: 1074d3804; end: 1074d38f3;  */

long FUN_1074d3804(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
                  undefined1 *param_9)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1073deb50();
  FUN_1073ded34(lVar1 + 0x48,param_3);
  FUN_1073deb50(param_1 + 0x80,param_4);
  FUN_1073ded34(param_1 + 200,param_5);
  FUN_1073ded34(param_1 + 0x100,param_6);
  FUN_1073ded34(param_1 + 0x138,param_7);
  *(undefined8 *)(param_1 + 0x170) = *param_8;
  *(undefined1 *)(param_1 + 0x178) = *param_9;
  return param_1;
}



/* Entry: 1074d38f4; end: 1074d3917;  */

void FUN_1074d38f4(void)

{
  FUN_1074d3804();
  return;
}



/* Entry: 1074d3918; end: 1074d396f;  */

undefined8 * FUN_1074d3918(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0xc0;
  __Znwm();
  *puVar1 = 0;
  puVar1[1] = 0;
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  puVar1[3] = param_1[1];
  puVar1[2] = uVar2;
  puVar1[5] = uVar4;
  puVar1[4] = uVar3;
  param_1[2] = 0;
  param_1[3] = 0;
  func_0x000104c318bc(puVar1 + 6,param_1 + 4);
  func_0x000104c318bc(puVar1 + 0xd,param_1 + 0xb);
  uVar2 = param_1[0x12];
  uVar4 = param_1[0x15];
  uVar3 = param_1[0x14];
  puVar1[0x15] = param_1[0x13];
  puVar1[0x14] = uVar2;
  puVar1[0x17] = uVar4;
  puVar1[0x16] = uVar3;
  return puVar1;
}



/* Entry: 1074d3970; end: 1074d3987;  */

void FUN_1074d3970(long *param_1,long param_2)

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



/* Entry: 1074d3988; end: 1074d39cb;  */

long * FUN_1074d3988(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001074cfc70(lVar1 + 0x28);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1074d39cc; end: 1074d4d03;  */

void FUN_1074d39cc(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001074d39e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))();
  return;
}



/* Entry: 1074d4d04; end: 1074d4dfb;  */

long * FUN_1074d4d04(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  bool bVar2;
  undefined8 extraout_x8;
  long lVar3;
  long lVar4;
  long *unaff_x19;
  long unaff_x20;
  float fVar5;
  float fVar6;
  undefined8 uStack_80;
  long alStack_78 [8];
  undefined8 uStack_38;
  
  func_0x0001074d5118();
  lVar3 = *(long *)*param_3;
  lVar4 = ((long *)*param_3)[1];
  uVar1 = lVar3 == lVar4;
  uStack_38 = extraout_x8;
  if ((bool)uVar1) {
    (**(code **)(*param_2 + 0x30))();
    func_0x0001074d5138();
    param_2 = alStack_78;
    func_0x000107262398(param_1,param_2,0x1138369c0);
    func_0x0001074d5130();
  }
  else {
    bVar2 = lVar4 - lVar3 == 0x38;
    if (bVar2) {
      func_0x0001074d50b4(extraout_x8);
      if (bVar2) {
        func_0x0001000d03a8(param_1,lVar3);
        func_0x000104c2feb0();
        unaff_x19[6] = -1;
        func_0x000104c2fe38();
        unaff_x19[6] = unaff_x20;
        return unaff_x19;
      }
      goto LAB_1074d4df4;
    }
    uStack_80 = 0;
    for (; uVar1 = lVar3 == lVar4, !(bool)uVar1; lVar3 = lVar3 + 0x38) {
      func_0x0001073f26dc(&uStack_80,lVar3);
    }
    __ZNSt3__19to_stringEm(alStack_78,uStack_80);
    func_0x0001072625b4(param_1,alStack_78);
    param_2 = alStack_78;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  func_0x0001074d50b4(uStack_38);
  if ((bool)uVar1) {
    return param_2;
  }
LAB_1074d4df4:
  ___stack_chk_fail();
  __Unwind_Resume();
  lVar3 = *param_2;
  if (lVar3 != param_2[1]) {
    bVar2 = false;
    fVar5 = 0.0;
    for (; lVar3 != param_2[1]; lVar3 = lVar3 + 0x10) {
      for (lVar4 = 0; lVar4 != 0x10; lVar4 = lVar4 + 4) {
        fVar6 = *(float *)(lVar3 + lVar4);
        if (0.0 <= fVar6) {
          fVar6 = -fVar6;
        }
        fVar6 = fVar6 + 1.0;
        if (!bVar2) {
          fVar5 = fVar6;
        }
        if (fVar6 <= fVar5) {
          fVar5 = fVar6;
        }
        bVar2 = true;
      }
      bVar2 = true;
    }
    if (!bVar2) {
      func_0x000104bdc2c8();
    }
  }
  return param_2;
}



/* Entry: 1074d4dfc; end: 1074d4e7f;  */

float FUN_1074d4dfc(long *param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  lVar2 = *param_1;
  if (lVar2 != param_1[1]) {
    bVar1 = false;
    fVar4 = 0.0;
    for (; lVar2 != param_1[1]; lVar2 = lVar2 + 0x10) {
      for (lVar3 = 0; lVar3 != 0x10; lVar3 = lVar3 + 4) {
        fVar5 = *(float *)(lVar2 + lVar3);
        if (0.0 <= fVar5) {
          fVar5 = -fVar5;
        }
        fVar5 = fVar5 + 1.0;
        if (!bVar1) {
          fVar4 = fVar5;
        }
        if (fVar5 <= fVar4) {
          fVar4 = fVar5;
        }
        bVar1 = true;
      }
      bVar1 = true;
    }
    if (bVar1) {
      return fVar4;
    }
    func_0x000104bdc2c8();
  }
  return 0.0;
}



/* Entry: 1074d4e80; end: 1074d4f2b;  */

long * FUN_1074d4e80(long *param_1,long *param_2,long *param_3,undefined8 param_4,undefined8 param_5
                    )

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar6;
  
  plVar1 = param_1;
  func_0x0001074d5118();
  lVar6 = *param_2;
  plVar1[1] = param_2[1];
  *plVar1 = lVar6;
  *param_2 = 0;
  param_2[1] = 0;
  plVar1 = (long *)*plVar1;
  param_1[2] = (long)plVar1;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  (**(code **)(*plVar1 + 0x30))();
  func_0x0001074d5138();
  func_0x0001074d50c8();
  func_0x0001074d5130();
  *(undefined1 *)(param_1 + 0x12) = 0;
  func_0x0001074d50b4(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010748be30(param_1 + 8);
  func_0x0001074d5128();
  __Unwind_Resume();
  plVar3 = param_3;
  uVar4 = param_4;
  func_0x0001074d5118();
  func_0x0001074d50fc();
  FUN_1074d4dfc(uVar4);
  func_0x0001074d50dc();
  plVar1[6] = *param_3;
  *(undefined1 *)(plVar1 + 7) = extraout_w8;
  FUN_1074c33e8(plVar1 + 8,param_4);
  plVar2 = (long *)plVar1[2];
  (**(code **)(*plVar2 + 0x30))();
  func_0x0001074d5138();
  func_0x0001074d50c8();
  func_0x0001074d5130();
  *(undefined1 *)(plVar1 + 0x12) = 0;
  func_0x0001074d50b4(extraout_x8_00);
  if ((bool)in_ZR) {
    return plVar1;
  }
  ___stack_chk_fail();
  func_0x0001074d5128();
  __Unwind_Resume();
  uVar5 = uVar4;
  func_0x0001074d50fc();
  FUN_1074d4dfc(uVar5);
  func_0x0001074d50dc();
  plVar2[6] = *plVar3;
  *(undefined1 *)(plVar2 + 7) = extraout_w8_00;
  FUN_1074c33e8(plVar2 + 8,uVar4);
  FUN_1074d4d04(plVar2 + 0xb,*plVar2,param_5);
  *(undefined1 *)(plVar2 + 0x12) = 0;
  return plVar2;
}



/* Entry: 1074d4f2c; end: 1074d5003;  */

long * FUN_1074d4f2c(long *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined8 extraout_x8;
  
  plVar2 = param_3;
  uVar3 = param_4;
  func_0x0001074d5118();
  func_0x0001074d50fc();
  FUN_1074d4dfc(uVar3);
  func_0x0001074d50dc();
  param_1[6] = *param_3;
  *(undefined1 *)(param_1 + 7) = extraout_w8;
  FUN_1074c33e8(param_1 + 8,param_4);
  plVar1 = (long *)param_1[2];
  (**(code **)(*plVar1 + 0x30))();
  func_0x0001074d5138();
  func_0x0001074d50c8();
  func_0x0001074d5130();
  *(undefined1 *)(param_1 + 0x12) = 0;
  func_0x0001074d50b4(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001074d5128();
  __Unwind_Resume();
  uVar4 = uVar3;
  func_0x0001074d50fc();
  FUN_1074d4dfc(uVar4);
  func_0x0001074d50dc();
  plVar1[6] = *plVar2;
  *(undefined1 *)(plVar1 + 7) = extraout_w8_00;
  FUN_1074c33e8(plVar1 + 8,uVar3);
  FUN_1074d4d04(plVar1 + 0xb,*plVar1,param_5);
  *(undefined1 *)(plVar1 + 0x12) = 0;
  return plVar1;
}



/* Entry: 1074d5004; end: 1074d50b3;  */

undefined8 *
FUN_1074d5004(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 extraout_w8;
  
  uVar1 = param_4;
  func_0x0001074d50fc();
  FUN_1074d4dfc(uVar1);
  func_0x0001074d50dc();
  param_1[6] = *param_3;
  *(undefined1 *)(param_1 + 7) = extraout_w8;
  FUN_1074c33e8(param_1 + 8,param_4);
  FUN_1074d4d04(param_1 + 0xb,*param_1,param_5);
  *(undefined1 *)(param_1 + 0x12) = 0;
  return param_1;
}



/* Entry: 1074d50b4; end: 1074d514b;  */

void FUN_1074d50b4(void)

{
  return;
}



/* Entry: 1074d514c; end: 1074d51c3;  */

long FUN_1074d514c(long param_1,undefined8 param_2)

{
  _memcpy(param_1 + 0x180,param_2,0xe50);
  FUN_10741607c(param_1 + 0x180,param_1,1,0);
  FUN_10741607c(param_1 + 0x180,param_1 + 0x80,1,1);
  FUN_10741607c(param_1 + 0x180,param_1 + 0x100,(int)(*(float *)(param_1 + 0x224) * 0.1),0);
  return param_1;
}



/* Entry: 1074d51c4; end: 1074d5ae3;  */

undefined8 *
FUN_1074d51c4(undefined4 param_1,undefined4 param_2,undefined8 *param_3,long *param_4,
             undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,long param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined4 param_22,undefined4 param_23)

{
  undefined8 uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  uint *puVar5;
  code *extraout_x9;
  long lVar6;
  code *extraout_x9_00;
  code *extraout_x9_01;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined8 uStack_258;
  long *plStack_250;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  long *plStack_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  long *plStack_200;
  float fStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  long *plStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  long *plStack_98;
  uint uStack_90;
  undefined8 auStack_88 [3];
  
  *param_3 = param_4;
  param_3[1] = param_5;
  (**(code **)(*param_4 + 0x38))(param_3 + 2,param_4);
  param_3[3] = 0;
  param_3[4] = param_12;
  param_3[5] = param_12 + 0x180;
  param_3[6] = param_6;
  param_3[7] = param_7;
  param_3[8] = param_8;
  param_3[10] = param_14;
  param_3[9] = param_13;
  param_3[0xb] = param_15;
  *(undefined1 *)(param_3 + 0xc) = 2;
  *(undefined4 *)((long)param_3 + 100) = param_9;
  *(undefined4 *)(param_3 + 0xd) = param_10;
  param_3[0xe] = param_11;
  *(undefined4 *)(param_3 + 0xf) = param_1;
  param_3[0x12] = param_17;
  param_3[0x11] = param_16;
  param_3[0x13] = param_18;
  param_3[0x14] = param_21;
  *(undefined4 *)(param_3 + 0x15) = param_2;
  *(undefined1 *)((long)param_3 + 0xac) = param_22._1_1_;
  *(char *)((long)param_3 + 0xad) = param_22._2_1_;
  *(undefined4 *)(param_3 + 0x16) = param_23;
  *(undefined1 *)((long)param_3 + 0xb4) = (undefined1)param_22;
  *(undefined1 *)((long)param_3 + 0xb5) = 0;
  param_3[0x18] = 0;
  param_3[0x19] = 0;
  param_3[0x17] = param_3 + 0x18;
  param_3[0x1a] = 0xff00000001;
  param_3[0x1c] = 0;
  param_3[0x1b] = 0;
  param_3[0x1e] = 0;
  param_3[0x1d] = 0;
  *(undefined4 *)(param_3 + 0x1f) = 0x3f800000;
  param_3[0x20] = 0;
  param_3[0x21] = 0;
  param_3[0x22] = 0;
  param_3[0x23] = 4;
  param_3[0x24] = 5;
  *(undefined4 *)(param_3 + 0x25) = 0;
  param_3[0x26] = 0;
  param_3[0x27] = 0;
  param_3[0x29] = 0x18;
  param_3[0x28] = 8;
  *(undefined4 *)(param_3 + 0x2a) = 0;
  param_3[0x2b] = 0;
  param_3[0x2c] = 0;
  param_3[0x2d] = 4;
  param_3[0x2e] = 4;
  *(undefined4 *)(param_3 + 0x2f) = 0;
  param_3[0x30] = 0;
  param_3[0x31] = 0;
  param_3[0x32] = 0;
  param_3[0x33] = param_19;
  param_3[0x34] = param_20;
  *(undefined4 *)(param_3 + 0x35) = 3;
  *(undefined8 *)((long)param_3 + 0x1b4) = 0x37800000;
  fVar16 = (float)NEON_ucvtf(*(undefined4 *)(param_12 + 0x1cc));
  fVar17 = (float)NEON_ucvtf(*(undefined4 *)(param_12 + 0x1d0));
  *(float *)((long)param_3 + 0x7c) = 2.0 / fVar16;
  *(float *)(param_3 + 0x10) = -2.0 / fVar17;
  if (*(int *)(param_12 + 0x1d8) == 1) {
    *(float *)(param_3 + 0x10) = -(-2.0 / fVar17);
  }
  if (param_22._2_1_ == '\0') {
    return param_3;
  }
  FUN_107416bf8();
  FUN_10748277c(&uStack_b0,param_12 + 0xac8);
  lVar15 = param_3[5];
  FUN_107416bf8(lVar15);
  func_0x000107482794(&plStack_f0,lVar15 + 0x800);
  lVar15 = param_3[6];
  if (((*(byte *)(lVar15 + 0x12f0) & 1) != 0) || (uVar18 = 0, (*(byte *)(lVar15 + 0x12f9) & 1) == 0)
     ) {
    uVar18 = *(undefined4 *)(lVar15 + 0x1488);
  }
  fVar16 = *(float *)(lVar15 + 0x1490);
  uStack_1f4 = *(undefined4 *)(lVar15 + 0x1494);
  uStack_1e4 = *(undefined4 *)(lVar15 + 0x1480);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  plStack_118 = (long *)0x0;
  uStack_120 = 0;
  uStack_11c = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uStack_138 = 0;
  uStack_134 = 0;
  uStack_140 = 0;
  uStack_13c = 0;
  plStack_168 = (long *)0x0;
  plStack_170 = (long *)0x0;
  plStack_158 = (long *)0x0;
  plStack_160 = (long *)0x0;
  plStack_210 = *(long **)(param_6 + 0x1268);
  uStack_208 = (long *)CONCAT44(uVar18,*(undefined4 *)(param_6 + 0x1270));
  fStack_1f8 = fVar16 * *(float *)(param_6 + 0x127c);
  plStack_200 = (long *)CONCAT44((float)((ulong)*(undefined8 *)(param_6 + 0x1274) >> 0x20) * fVar16,
                                 (float)*(undefined8 *)(param_6 + 0x1274) * fVar16);
  uStack_1ec = uStack_ac;
  uStack_1e8 = uStack_a8;
  uStack_1f0 = uStack_b0;
  uStack_1d4 = NEON_ucvtf((uint)*(byte *)(lVar15 + 0x14a4));
  uStack_1dc = (undefined4)uStack_a0;
  uStack_1d8 = (undefined4)((ulong)uStack_a0 >> 0x20);
  uStack_1e0 = uStack_a4;
  plStack_1d0 = plStack_98;
  plStack_1c8 = (long *)(ulong)uStack_90;
  plStack_198 = plStack_c8;
  plStack_1a0 = plStack_d0;
  plStack_188 = plStack_b8;
  plStack_190 = plStack_c0;
  plStack_1b8 = plStack_e8;
  plStack_1c0 = plStack_f0;
  plStack_1a8 = plStack_d8;
  plStack_1b0 = plStack_e0;
  plStack_180 = *(long **)(lVar15 + 0x1498);
  plStack_178 = (long *)(ulong)*(uint *)(lVar15 + 0x14a0);
  func_0x0001074da4a8();
  plStack_168 = (long *)CONCAT44(uStack_244,uStack_248);
  plStack_160 = (long *)CONCAT44(uStack_23c,uStack_240);
  plStack_170 = plStack_250;
  plStack_158 = plStack_238;
  plStack_150 = (long *)CONCAT44(uStack_22c,uStack_230);
  uStack_148 = uStack_228;
  uStack_138 = (undefined4)uStack_218;
  uStack_134 = (undefined4)((ulong)uStack_218 >> 0x20);
  uStack_140 = (undefined4)uStack_220;
  uStack_13c = (undefined4)((ulong)uStack_220 >> 0x20);
  func_0x0001074da4a8();
  uStack_128 = uStack_248;
  uStack_124 = uStack_244;
  uStack_130 = SUB84(plStack_250,0);
  uStack_12c = (undefined4)((ulong)plStack_250 >> 0x20);
  plStack_118 = plStack_238;
  uStack_120 = uStack_240;
  uStack_11c = uStack_23c;
  uStack_108 = uStack_228;
  uStack_f8 = uStack_218;
  uStack_100 = uStack_220;
  lVar15 = param_3[0x13];
  if (*(long *)(lVar15 + 0x230) == 0) {
    func_0x0001074da094();
    (*extraout_x9)(auStack_88);
    plStack_250 = (long *)0x120;
    uStack_248 = (undefined4)auStack_88[0];
    uStack_244 = (undefined4)((ulong)auStack_88[0] >> 0x20);
    FUN_1074d5ae4(&uStack_258,&plStack_250);
    uVar1 = uStack_258;
    uStack_258 = 0;
    FUN_1074d9588(param_3[0x13] + 0x230,uVar1);
    func_0x0001074d9564(&uStack_258);
    if (CONCAT44(uStack_244,uStack_248) != 0) {
      func_0x0001074d9fc8();
    }
LAB_1074d55c4:
    func_0x0001074da03c(*(undefined8 *)(param_3[0x13] + 0x230));
    func_0x0001074da4a0();
    _memcpy(param_3[0x13],&plStack_210,0x120);
  }
  else {
    lVar4 = lVar15;
    func_0x00010730ae80(lVar15,&plStack_210);
    if ((int)lVar4 == 0) goto LAB_1074d55c4;
    lVar4 = lVar15 + 0x10;
    func_0x00010730ae80(lVar4,&plStack_200);
    if ((int)lVar4 == 0) goto LAB_1074d55c4;
    lVar4 = lVar15 + 0x20;
    func_0x00010730ae80(lVar4,&uStack_1f0);
    if ((int)lVar4 == 0) goto LAB_1074d55c4;
    lVar4 = lVar15 + 0x30;
    func_0x00010730ae80(lVar4,&uStack_1e0);
    if ((int)lVar4 == 0) goto LAB_1074d55c4;
    lVar4 = lVar15 + 0x40;
    func_0x00010730ae80(lVar4,&plStack_1d0);
    if ((int)lVar4 == 0) goto LAB_1074d55c4;
    lVar4 = lVar15 + 0x50;
    func_0x0001074b2edc(lVar4,&plStack_1c0);
    if ((int)lVar4 == 0) goto LAB_1074d55c4;
    lVar4 = lVar15 + 0x90;
    func_0x00010730ae80(lVar4,&plStack_180);
    if ((int)lVar4 == 0) goto LAB_1074d55c4;
    lVar4 = lVar15 + 0xa0;
    func_0x0001074b2edc(lVar4,&plStack_170);
    if ((int)lVar4 == 0) goto LAB_1074d55c4;
    uVar8 = lVar15 + 0xe0;
    func_0x0001074b2edc(uVar8,&uStack_130);
    if ((uVar8 & 1) == 0) goto LAB_1074d55c4;
  }
  lVar15 = param_3[7];
  plStack_210 = *(long **)(lVar15 + 8);
  uStack_208 = (long *)CONCAT44(*(float *)(param_3 + 0xf),*(float *)(lVar15 + 4));
  lVar6 = param_3[0x13];
  lVar4 = *(long *)(lVar6 + 0x238);
  if (lVar4 == 0) {
    func_0x0001074da094();
    (*extraout_x9_00)(&plStack_250);
    plStack_f0 = (long *)0x10;
    plStack_e8 = plStack_250;
    FUN_1074d5ae4(&uStack_b0,&plStack_f0);
    uVar1 = CONCAT44(uStack_ac,uStack_b0);
    uStack_b0 = 0;
    uStack_ac = 0;
    FUN_1074d9588(param_3[0x13] + 0x238,uVar1);
    func_0x0001074d9564(&uStack_b0);
    if (plStack_e8 != (long *)0x0) {
      func_0x0001074d9fc8();
    }
    lVar4 = *(long *)(param_3[0x13] + 0x238);
LAB_1074d569c:
    func_0x0001074da03c(lVar4);
    func_0x0001074da4a0();
    lVar15 = param_3[0x13];
    *(long **)(lVar15 + 0x128) = uStack_208;
    *(long **)(lVar15 + 0x120) = plStack_210;
  }
  else {
    bVar2 = false;
    if ((*(float *)(lVar6 + 0x120) == *(float *)(lVar15 + 8)) &&
       (bVar2 = false, !NAN(*(float *)(lVar6 + 0x124)) && !NAN(*(float *)(lVar15 + 0xc)))) {
      bVar2 = *(float *)(lVar6 + 0x124) == *(float *)(lVar15 + 0xc);
    }
    if (((!bVar2) || (*(float *)(lVar6 + 0x128) != *(float *)(lVar15 + 4))) ||
       (*(float *)(lVar6 + 300) != *(float *)(param_3 + 0xf))) goto LAB_1074d569c;
  }
  lVar15 = param_3[5];
  if (*(char *)(lVar15 + 0xa94) == '\x01') {
    func_0x0001074da20c();
    FUN_10748277c(&plStack_250,lVar15 + 0xc68);
    plStack_118 = (long *)0x0;
    uStack_11c = 0;
    uStack_124 = 0;
    uStack_120 = 0;
    uStack_12c = 0;
    uStack_128 = 0;
    uStack_134 = 0;
    uStack_130 = 0;
    uStack_13c = 0;
    uStack_138 = 0;
    lVar15 = param_3[5];
    func_0x0001074da20c();
    func_0x000107482794(&plStack_f0,lVar15 + 0xaa0);
    uStack_208 = plStack_e8;
    plStack_210 = plStack_f0;
    fStack_1f8 = SUB84(plStack_d8,0);
    uStack_1f4 = (undefined4)((ulong)plStack_d8 >> 0x20);
    plStack_200 = plStack_e0;
    uStack_1e8 = SUB84(plStack_c8,0);
    uStack_1e4 = (undefined4)((ulong)plStack_c8 >> 0x20);
    uStack_1f0 = SUB84(plStack_d0,0);
    uStack_1ec = (undefined4)((ulong)plStack_d0 >> 0x20);
    uStack_1d8 = SUB84(plStack_b8,0);
    uStack_1d4 = (undefined4)((ulong)plStack_b8 >> 0x20);
    uStack_1e0 = SUB84(plStack_c0,0);
    uStack_1dc = (undefined4)((ulong)plStack_c0 >> 0x20);
    lVar15 = param_3[5];
    func_0x0001074da20c();
    func_0x000107482794(&plStack_f0,lVar15 + 0xcb0);
    plStack_1c8 = plStack_e8;
    plStack_1d0 = plStack_f0;
    plStack_1b8 = plStack_d8;
    plStack_1c0 = plStack_e0;
    plStack_1a8 = plStack_c8;
    plStack_1b0 = plStack_d0;
    plStack_198 = plStack_b8;
    plStack_1a0 = plStack_c0;
    lVar15 = param_3[5];
    func_0x0001074da20c();
    func_0x000107482794(&plStack_f0,lVar15 + 0xb20);
    plStack_188 = plStack_e8;
    plStack_190 = plStack_f0;
    plStack_178 = plStack_d8;
    plStack_180 = plStack_e0;
    plStack_168 = plStack_c8;
    plStack_170 = plStack_d0;
    plStack_158 = plStack_b8;
    plStack_160 = plStack_c0;
    lVar15 = param_3[5];
    uVar18 = 0;
    if (*(char *)(lVar15 + 0xa94) == '\x01') {
      uVar18 = *(undefined4 *)(lVar15 + 0xa90);
    }
    plStack_150 = plStack_250;
    uStack_148 = CONCAT44(uVar18,uStack_248);
    uStack_140 = uStack_244;
    uStack_13c = uStack_240;
    uStack_138 = uStack_23c;
    uStack_134 = 0;
    uStack_130 = SUB84(plStack_238,0);
    uStack_12c = (undefined4)((ulong)plStack_238 >> 0x20);
    uStack_128 = uStack_230;
    uStack_124 = 0;
    func_0x0001074da20c();
    plStack_118 = *(long **)(lVar15 + 0xe38);
    uStack_120 = (undefined4)*(undefined8 *)(lVar15 + 0xe30);
    uStack_11c = (undefined4)((ulong)*(undefined8 *)(lVar15 + 0xe30) >> 0x20);
    lVar15 = param_3[0x13];
    if (*(long *)(lVar15 + 0x240) == 0) {
      func_0x0001074da094();
      (*extraout_x9_01)(&uStack_b0);
      plStack_e8 = (long *)CONCAT44(uStack_ac,uStack_b0);
      plStack_f0 = (long *)0x100;
      FUN_1074d5ae4(auStack_88,&plStack_f0);
      uVar1 = auStack_88[0];
      auStack_88[0] = 0;
      FUN_1074d9588(param_3[0x13] + 0x240,uVar1);
      func_0x0001074d9564(auStack_88);
      if (plStack_e8 != (long *)0x0) {
        func_0x0001074d9fc8();
      }
    }
    else {
      lVar4 = lVar15 + 0x130;
      func_0x0001074b2edc(lVar4,&plStack_210);
      if ((int)lVar4 != 0) {
        lVar4 = lVar15 + 0x170;
        func_0x0001074b2edc(lVar4,&plStack_1d0);
        if ((int)lVar4 != 0) {
          lVar4 = lVar15 + 0x1b0;
          func_0x0001074b2edc(lVar4,&plStack_190);
          if ((int)lVar4 != 0) {
            lVar4 = lVar15 + 0x1f0;
            func_0x00010730ae80(lVar4,&plStack_150);
            if ((int)lVar4 != 0) {
              lVar4 = lVar15 + 0x200;
              func_0x00010730ae80(lVar4,&uStack_140);
              if ((int)lVar4 != 0) {
                lVar4 = lVar15 + 0x210;
                func_0x00010730ae80(lVar4,&uStack_130);
                if ((int)lVar4 != 0) {
                  uVar8 = lVar15 + 0x220;
                  func_0x00010730ae80(uVar8,&uStack_120);
                  if ((uVar8 & 1) != 0) goto LAB_1074d58a4;
                }
              }
            }
          }
        }
      }
    }
    func_0x0001074da03c(*(undefined8 *)(param_3[0x13] + 0x240));
    func_0x0001074da4a0();
    _memcpy(param_3[0x13] + 0x130,&plStack_210,0x100);
  }
LAB_1074d58a4:
  plStack_210 = *(long **)(param_3[0x33] + 0x10);
  do {
    while( true ) {
      if (plStack_210 == (long *)0x0) {
        puVar5 = (uint *)param_3[0x34];
        *puVar5 = (*puVar5 + 1) % 3;
        puVar5[1] = 0;
        return param_3;
      }
      if (10 < *(uint *)(plStack_210 + 5)) break;
      *(uint *)(plStack_210 + 5) = *(uint *)(plStack_210 + 5) + 1;
      plStack_210 = (long *)*plStack_210;
    }
    plVar7 = (long *)param_3[0x33];
    uVar9 = plVar7[1];
    uVar8 = plStack_210[1];
    uVar11 = uVar9 - 1;
    if ((uVar9 & uVar11) == 0) {
      uVar8 = uVar11 & uVar8;
    }
    else if (uVar9 <= uVar8) {
      uVar12 = 0;
      if (uVar9 != 0) {
        uVar12 = uVar8 / uVar9;
      }
      uVar8 = uVar8 - uVar12 * uVar9;
    }
    plVar14 = (long *)*plStack_210;
    lVar15 = *plVar7;
    plVar13 = *(long **)(lVar15 + uVar8 * 8);
    do {
      plVar10 = plVar13;
      plVar13 = (long *)*plVar10;
    } while ((long *)*plVar10 != plStack_210);
    uStack_208 = plVar7 + 2;
    plVar13 = plVar14;
    if (plVar10 == uStack_208) {
LAB_1074d595c:
      if (plVar14 == (long *)0x0) {
LAB_1074d5994:
        *(undefined8 *)(lVar15 + uVar8 * 8) = 0;
        plVar13 = (long *)*plStack_210;
        goto LAB_1074d599c;
      }
      uVar12 = plVar14[1];
      if ((uVar9 & uVar11) == 0) {
        uVar3 = uVar12 & uVar11;
      }
      else {
        uVar3 = uVar12;
        if (uVar9 <= uVar12) {
          uVar3 = 0;
          if (uVar9 != 0) {
            uVar3 = uVar12 / uVar9;
          }
          uVar3 = uVar12 - uVar3 * uVar9;
        }
      }
      if (uVar3 != uVar8) goto LAB_1074d5994;
LAB_1074d59a4:
      if ((uVar9 & uVar11) == 0) {
        uVar12 = uVar12 & uVar11;
      }
      else if (uVar9 <= uVar12) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar12 / uVar9;
        }
        uVar12 = uVar12 - uVar11 * uVar9;
      }
      if (uVar12 != uVar8) {
        *(long **)(lVar15 + uVar12 * 8) = plVar10;
        plVar13 = (long *)*plStack_210;
      }
    }
    else {
      uVar12 = plVar10[1];
      if ((uVar9 & uVar11) == 0) {
        uVar12 = uVar12 & uVar11;
      }
      else if (uVar9 <= uVar12) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar12 / uVar9;
        }
        uVar12 = uVar12 - uVar3 * uVar9;
      }
      if (uVar12 != uVar8) goto LAB_1074d595c;
LAB_1074d599c:
      if (plVar13 != (long *)0x0) {
        uVar12 = plVar13[1];
        goto LAB_1074d59a4;
      }
    }
    *plVar10 = (long)plVar13;
    *plStack_210 = 0;
    plVar7[3] = plVar7[3] + -1;
    plStack_200 = (long *)0x1;
    func_0x0001074d95c8(&plStack_210);
    plStack_210 = plVar14;
  } while( true );
}



/* Entry: 1074d5ae4; end: 1074d5b57;  */

void FUN_1074d5ae4(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001074da410();
  puVar2 = (undefined8 *)0x10;
  __Znwm();
  uVar1 = unaff_x19[1];
  unaff_x19[1] = 0;
  *puVar2 = *unaff_x19;
  puVar2[1] = uVar1;
  *unaff_x20 = puVar2;
  return;
}



/* Entry: 1074d5b58; end: 1074d5bb3;  */

void FUN_1074d5b58(double *param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  double *pdVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  
  func_0x000107415eec(*(undefined8 *)(param_2 + 0x28),param_1,param_3,param_4);
  lVar2 = 0x80;
  if (param_5 == 0) {
    lVar2 = 0;
  }
  pdVar1 = (double *)(*(long *)(param_2 + 0x20) + lVar2);
  dVar24 = *pdVar1;
  dVar12 = pdVar1[1];
  dVar4 = pdVar1[2];
  dVar3 = pdVar1[3];
  dVar26 = pdVar1[4];
  dVar23 = pdVar1[5];
  dVar19 = pdVar1[6];
  dVar5 = pdVar1[7];
  dVar28 = pdVar1[8];
  dVar25 = pdVar1[9];
  dVar21 = pdVar1[10];
  dVar7 = pdVar1[0xb];
  dVar29 = *param_1;
  dVar30 = param_1[1];
  dVar32 = param_1[2];
  dVar9 = param_1[3];
  dVar33 = param_1[4];
  dVar34 = param_1[5];
  dVar13 = param_1[6];
  dVar10 = param_1[7];
  dVar14 = param_1[8];
  dVar16 = param_1[9];
  dVar31 = param_1[10];
  dVar11 = param_1[0xb];
  dVar17 = param_1[0xc];
  dVar18 = param_1[0xd];
  dVar27 = param_1[0xe];
  dVar15 = param_1[0xf];
  dVar6 = pdVar1[0xc];
  dVar20 = pdVar1[0xd];
  dVar8 = pdVar1[0xe];
  dVar22 = pdVar1[0xf];
  *param_1 = dVar26 * dVar30 + dVar29 * dVar24 + dVar32 * dVar28 + dVar9 * dVar6;
  param_1[1] = dVar23 * dVar30 + dVar29 * dVar12 + dVar32 * dVar25 + dVar9 * dVar20;
  param_1[2] = dVar19 * dVar30 + dVar29 * dVar4 + dVar32 * dVar21 + dVar9 * dVar8;
  param_1[3] = dVar5 * dVar30 + dVar29 * dVar3 + dVar32 * dVar7 + dVar9 * dVar22;
  param_1[4] = dVar26 * dVar34 + dVar33 * dVar24 + dVar13 * dVar28 + dVar10 * dVar6;
  param_1[5] = dVar23 * dVar34 + dVar33 * dVar12 + dVar13 * dVar25 + dVar10 * dVar20;
  param_1[6] = dVar19 * dVar34 + dVar33 * dVar4 + dVar13 * dVar21 + dVar10 * dVar8;
  param_1[7] = dVar5 * dVar34 + dVar33 * dVar3 + dVar13 * dVar7 + dVar10 * dVar22;
  param_1[8] = dVar26 * dVar16 + dVar14 * dVar24 + dVar31 * dVar28 + dVar11 * dVar6;
  param_1[9] = dVar23 * dVar16 + dVar14 * dVar12 + dVar31 * dVar25 + dVar11 * dVar20;
  param_1[10] = dVar19 * dVar16 + dVar14 * dVar4 + dVar31 * dVar21 + dVar11 * dVar8;
  param_1[0xb] = dVar5 * dVar16 + dVar14 * dVar3 + dVar31 * dVar7 + dVar11 * dVar22;
  param_1[0xc] = dVar26 * dVar18 + dVar17 * dVar24 + dVar27 * dVar28 + dVar15 * dVar6;
  param_1[0xd] = dVar23 * dVar18 + dVar17 * dVar12 + dVar27 * dVar25 + dVar15 * dVar20;
  param_1[0xe] = dVar19 * dVar18 + dVar17 * dVar4 + dVar27 * dVar21 + dVar15 * dVar8;
  param_1[0xf] = dVar5 * dVar18 + dVar17 * dVar3 + dVar27 * dVar7 + dVar15 * dVar22;
  return;
}



/* Entry: 1074d5bb4; end: 1074d5beb;  */

void FUN_1074d5bb4(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  double *unaff_x20;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  
  func_0x0001074da410();
  func_0x000107415eec(*(undefined8 *)(param_2 + 0x28));
  lVar1 = *(long *)(unaff_x19 + 0x20);
  dVar23 = *(double *)(lVar1 + 0x100);
  dVar11 = *(double *)(lVar1 + 0x108);
  dVar3 = *(double *)(lVar1 + 0x110);
  dVar2 = *(double *)(lVar1 + 0x118);
  dVar25 = *(double *)(lVar1 + 0x120);
  dVar22 = *(double *)(lVar1 + 0x128);
  dVar18 = *(double *)(lVar1 + 0x130);
  dVar4 = *(double *)(lVar1 + 0x138);
  dVar27 = *(double *)(lVar1 + 0x140);
  dVar24 = *(double *)(lVar1 + 0x148);
  dVar20 = *(double *)(lVar1 + 0x150);
  dVar6 = *(double *)(lVar1 + 0x158);
  dVar28 = *unaff_x20;
  dVar29 = unaff_x20[1];
  dVar31 = unaff_x20[2];
  dVar8 = unaff_x20[3];
  dVar32 = unaff_x20[4];
  dVar33 = unaff_x20[5];
  dVar12 = unaff_x20[6];
  dVar9 = unaff_x20[7];
  dVar13 = unaff_x20[8];
  dVar15 = unaff_x20[9];
  dVar30 = unaff_x20[10];
  dVar10 = unaff_x20[0xb];
  dVar16 = unaff_x20[0xc];
  dVar17 = unaff_x20[0xd];
  dVar26 = unaff_x20[0xe];
  dVar14 = unaff_x20[0xf];
  dVar5 = *(double *)(lVar1 + 0x160);
  dVar19 = *(double *)(lVar1 + 0x168);
  dVar7 = *(double *)(lVar1 + 0x170);
  dVar21 = *(double *)(lVar1 + 0x178);
  *unaff_x20 = dVar25 * dVar29 + dVar28 * dVar23 + dVar31 * dVar27 + dVar8 * dVar5;
  unaff_x20[1] = dVar22 * dVar29 + dVar28 * dVar11 + dVar31 * dVar24 + dVar8 * dVar19;
  unaff_x20[2] = dVar18 * dVar29 + dVar28 * dVar3 + dVar31 * dVar20 + dVar8 * dVar7;
  unaff_x20[3] = dVar4 * dVar29 + dVar28 * dVar2 + dVar31 * dVar6 + dVar8 * dVar21;
  unaff_x20[4] = dVar25 * dVar33 + dVar32 * dVar23 + dVar12 * dVar27 + dVar9 * dVar5;
  unaff_x20[5] = dVar22 * dVar33 + dVar32 * dVar11 + dVar12 * dVar24 + dVar9 * dVar19;
  unaff_x20[6] = dVar18 * dVar33 + dVar32 * dVar3 + dVar12 * dVar20 + dVar9 * dVar7;
  unaff_x20[7] = dVar4 * dVar33 + dVar32 * dVar2 + dVar12 * dVar6 + dVar9 * dVar21;
  unaff_x20[8] = dVar25 * dVar15 + dVar13 * dVar23 + dVar30 * dVar27 + dVar10 * dVar5;
  unaff_x20[9] = dVar22 * dVar15 + dVar13 * dVar11 + dVar30 * dVar24 + dVar10 * dVar19;
  unaff_x20[10] = dVar18 * dVar15 + dVar13 * dVar3 + dVar30 * dVar20 + dVar10 * dVar7;
  unaff_x20[0xb] = dVar4 * dVar15 + dVar13 * dVar2 + dVar30 * dVar6 + dVar10 * dVar21;
  unaff_x20[0xc] = dVar25 * dVar17 + dVar16 * dVar23 + dVar26 * dVar27 + dVar14 * dVar5;
  unaff_x20[0xd] = dVar22 * dVar17 + dVar16 * dVar11 + dVar26 * dVar24 + dVar14 * dVar19;
  unaff_x20[0xe] = dVar18 * dVar17 + dVar16 * dVar3 + dVar26 * dVar20 + dVar14 * dVar7;
  unaff_x20[0xf] = dVar4 * dVar17 + dVar16 * dVar2 + dVar26 * dVar6 + dVar14 * dVar21;
  return;
}



/* Entry: 1074d5bec; end: 1074d5c77;  */

ulong FUN_1074d5bec(long param_1,int param_2,int param_3)

{
  ulong uVar1;
  
  if (*(uint *)(param_1 + 0x1ac) < *(uint *)(param_1 + 0x1b8)) {
    return 7;
  }
  uVar1 = 0x100;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  return uVar1 | (ulong)(uint)(*(float *)(param_1 + 0x1b0) +
                              *(float *)(param_1 + 0x1b4) *
                              (float)(*(int *)(param_1 + 0x1a8) +
                                      *(int *)(param_1 + 0x1a8) * *(uint *)(param_1 + 0x1ac) +
                                     param_2)) << 0x20 | 3;
}



/* Entry: 1074d5c78; end: 1074d677b;  */

undefined8
FUN_1074d5c78(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             long param_5,long *param_6,uint param_7)

{
  short sVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  undefined2 uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  short extraout_w8;
  uint extraout_w8_00;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  undefined8 *extraout_x8_03;
  long extraout_x8_04;
  undefined8 *extraout_x8_05;
  code *extraout_x8_06;
  code *extraout_x8_07;
  undefined8 *extraout_x8_08;
  undefined8 *extraout_x8_09;
  long unaff_x19;
  long *unaff_x20;
  long *plVar15;
  long lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  ulong uVar20;
  undefined4 uVar21;
  ulong uVar22;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined2 uStack_150;
  undefined1 uStack_14e;
  undefined2 uStack_d8;
  undefined2 uStack_d6;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  long alStack_98 [2];
  undefined8 auStack_88 [3];
  
  lVar11 = *param_6;
  lVar2 = param_6[1];
  if (lVar11 == lVar2) {
LAB_1074d6684:
    uVar13 = 1;
  }
  else {
    func_0x0001074da614();
    if (*(char *)(param_5 + 0xb5) == '\x01') {
      uStack_168 = *(undefined8 *)(unaff_x19 + 0x18);
      func_0x0001074da2a0();
      func_0x0001074da384();
      lVar11 = *(long *)(unaff_x19 + 0x28);
      bVar4 = *(byte *)(lVar11 + 0xa94);
      uVar20 = (ulong)bVar4;
      bVar8 = bVar4 == 1;
      if (bVar8) {
        FUN_1074178c4();
        bVar8 = (int)lVar11 == 0;
        bVar7 = bVar8;
      }
      else {
        bVar7 = false;
      }
      func_0x0001074da2f8();
      if ((bVar8) && ((*(byte *)(unaff_x19 + 0xb1) >> 1 & 1) != 0)) {
        lVar11 = *(long *)(unaff_x19 + 0x88) + 0xb0;
        bVar8 = true;
        uVar19 = 4;
        uVar17 = 4;
      }
      else {
        bVar8 = false;
        lVar11 = *(long *)(unaff_x19 + 0x88);
        uVar17 = 1;
        uVar19 = 3;
      }
      func_0x0001074da270();
      func_0x0001074da36c();
      uVar13 = *(undefined8 *)(unaff_x19 + 0x90);
      uStack_160 = CONCAT44(uStack_160._4_4_,uVar19);
      uStack_158 = 0;
      if (bVar4 == 0) {
        uVar17 = 0;
      }
      func_0x0001074da014(uVar17,uVar13,lVar11 + uVar20 * 0x10);
      iVar10 = (int)uVar13;
      func_0x0001074da51c();
      if (alStack_98[0] != 0) {
        func_0x0001074d9fec();
        (*extraout_x8)();
        if (iVar10 == 2) {
          func_0x0001074da1c0(*(undefined8 *)(unaff_x19 + 0x18),alStack_98[0]);
          (*extraout_x8_00)();
          uVar5 = 0x100;
          uVar13 = *(undefined8 *)(unaff_x19 + 0x18);
          if (bVar4 != 0) {
            uVar5 = 0x101;
          }
          uStack_160 = CONCAT53(uStack_160._3_5_,0x10000);
          uStack_160 = CONCAT62(uStack_160._2_6_,uVar5);
          func_0x0001074da1cc(uVar13);
          func_0x0001074da508();
          plVar15 = *(long **)(unaff_x19 + 0x18);
          func_0x0001074da1e8(*(undefined8 *)(unaff_x19 + 0x48));
          (**(code **)(*plVar15 + 0x58))(plVar15,uVar13);
          plVar15 = *(long **)(unaff_x19 + 0x18);
          uVar9 = !bVar7;
          func_0x0001074da1f0(*(undefined8 *)(unaff_x19 + 0x48));
          func_0x0001074da0d4(*(undefined8 *)(*plVar15 + 0x60),plVar15);
          uStack_d8 = 0x107;
          uVar13 = NEON_fmov(0x3f800000,4);
          uStack_d4 = (undefined4)uVar13;
          uVar17 = uStack_d4;
          uStack_d0 = (undefined4)((ulong)uVar13 >> 0x20);
          uVar19 = uStack_d0;
          uVar22 = 0x5000000ff;
          uStack_158 = 0xff000000ff;
          uStack_160 = 0x5000000ff;
          uStack_150 = 0x101;
          uStack_14e = 5;
          func_0x0001074da128(*(undefined8 *)(unaff_x19 + 0x18));
          func_0x0001074da0bc();
          if (bVar8) {
            if (uVar20 != 0) {
              func_0x0001074d9fd4();
              func_0x0001074da310();
            }
            lVar11 = *unaff_x20;
            lVar16 = unaff_x20[1];
            lVar2 = 0x3c8;
            if (!bVar7) {
              lVar2 = 0x3b0;
            }
            for (; lVar11 != lVar16; lVar11 = lVar11 + 0x10) {
              plVar15 = *(long **)(unaff_x19 + 0x18);
              func_0x0001074da230();
              func_0x0001074da0f4(*(undefined8 *)(*plVar15 + 0x90),plVar15);
              plVar15 = (long *)(*(long *)(unaff_x19 + 0x48) + lVar2);
              lVar3 = plVar15[1];
              for (lVar12 = *plVar15; lVar12 != lVar3; lVar12 = lVar12 + 0x28) {
                uStack_160 = CONCAT71(uStack_160._1_7_,4);
                uStack_160 = uStack_160 & 0xffffffff;
                func_0x0001074da104(*(undefined8 *)(unaff_x19 + 0x18));
                func_0x0001074da088();
              }
            }
          }
          else {
            if (uVar20 != 0) {
              plVar15 = *(long **)(unaff_x19 + 0x18);
              lVar11 = *(long *)(unaff_x19 + 0x28);
              func_0x0001074da20c();
              func_0x000107482794(&uStack_160,lVar11 + 0xaa0);
              func_0x0001074da1b8(*(undefined8 *)(*plVar15 + 0xd0),plVar15);
              func_0x0001074d9fb0();
              if ((bool)uVar9) {
                uVar22 = (ulong)*(uint *)(extraout_x8_04 + 0xa90);
              }
              func_0x0001074da1a4();
              func_0x0001074da238();
              func_0x0001074da0dc();
              func_0x0001074da0c8();
            }
            lVar11 = *unaff_x20;
            lVar16 = unaff_x20[1];
            lVar2 = 0x3c8;
            if (!bVar7) {
              lVar2 = 0x3b0;
            }
            for (; lVar11 != lVar16; lVar11 = lVar11 + 0x10) {
              plVar15 = *(long **)(unaff_x19 + 0x18);
              func_0x0001074da0b0(&uStack_160);
              func_0x0001074da294();
              func_0x0001074da0d4(*(undefined8 *)(*plVar15 + 0xd0),plVar15);
              if (uVar20 != 0) {
                plVar15 = *(long **)(unaff_x19 + 0x18);
                func_0x0001074da1e0(*(undefined8 *)(unaff_x19 + 0x28),lVar11);
                uStack_160 = CONCAT44(param_2,(int)uVar22);
                uStack_158 = CONCAT44(param_4,param_3);
                func_0x0001074da0f4(*(undefined8 *)(*plVar15 + 0xb8),plVar15);
              }
              plVar15 = (long *)(*(long *)(unaff_x19 + 0x48) + lVar2);
              lVar3 = plVar15[1];
              for (lVar12 = *plVar15; lVar12 != lVar3; lVar12 = lVar12 + 0x28) {
                uStack_160 = CONCAT71(uStack_160._1_7_,4);
                uStack_160 = uStack_160 & 0xffffffff;
                func_0x0001074da104(*(undefined8 *)(unaff_x19 + 0x18));
                func_0x0001074da088();
              }
            }
          }
          func_0x0001074da1f8();
          func_0x0001074da364();
          bVar7 = param_7 <= *(uint *)(unaff_x19 + 0xd4);
          bVar8 = *(uint *)(unaff_x19 + 0xd4) == param_7;
          if ((!bVar8) || (func_0x0001074da428(), bVar7 && !bVar8)) {
            func_0x0001074d5c40();
            *(uint *)(unaff_x19 + 0xd4) = param_7;
          }
          FUN_1074d9e18(unaff_x19 + 0xb8);
          lVar11 = *(long *)(unaff_x19 + 0x28);
          bVar4 = *(byte *)(lVar11 + 0xa94);
          uVar20 = (ulong)bVar4;
          bVar8 = false;
          if (bVar4 == 1) {
            FUN_1074178c4();
            bVar8 = (int)lVar11 == 0;
          }
          func_0x0001074da2f8();
          if ((bVar8) && ((*(byte *)(unaff_x19 + 0xb1) >> 1 & 1) != 0)) {
            lVar11 = *(long *)(unaff_x19 + 0x88) + 0xb0;
            bVar8 = true;
            uVar21 = 4;
            uVar18 = 4;
          }
          else {
            bVar8 = false;
            lVar11 = *(long *)(unaff_x19 + 0x88);
            uVar18 = 1;
            uVar21 = 3;
          }
          func_0x0001074da270();
          func_0x0001074da36c();
          uVar13 = *(undefined8 *)(unaff_x19 + 0x90);
          uStack_160 = CONCAT44(uStack_160._4_4_,uVar21);
          uStack_158 = 0;
          if (bVar4 == 0) {
            uVar18 = 0;
          }
          func_0x0001074da014(uVar18,uVar13,lVar11 + uVar20 * 0x10);
          iVar10 = (int)uVar13;
          func_0x0001074da51c();
          if (alStack_98[0] != 0) {
            func_0x0001074d9fec();
            (*extraout_x8_06)();
            uVar9 = iVar10 == 2;
            if ((bool)uVar9) {
              func_0x0001074da1c0(*(undefined8 *)(unaff_x19 + 0x18),alStack_98[0]);
              (*extraout_x8_07)();
              func_0x0001074da400();
              uVar6 = extraout_w8_00 & 0xffff | 0x10000;
              if (!(bool)uVar9) {
                uVar6 = uVar6 + 1;
              }
              uStack_160._0_3_ = (undefined3)uVar6;
              func_0x0001074da1cc();
              func_0x0001074da508();
              func_0x0001074da2c8();
              func_0x0001074da1e8();
              func_0x0001074da58c();
              func_0x0001074da34c();
              func_0x0001074da2c8();
              func_0x0001074da1f0();
              func_0x0001074da240();
              func_0x0001074d9ffc();
              if (bVar8) {
                if (uVar20 != 0) {
                  func_0x0001074d9fd4();
                  func_0x0001074da310();
                }
                lVar2 = unaff_x20[1];
                for (lVar11 = *unaff_x20; lVar11 != lVar2; lVar11 = lVar11 + 0x10) {
                  func_0x0001074da214();
                  func_0x0001074da04c();
                  uStack_d8 = 7;
                  uStack_160 = CONCAT44(7,(undefined4)uStack_160);
                  uStack_158 = CONCAT44(uStack_158._4_4_,(int)unaff_x20);
                  uStack_d4 = uVar17;
                  uStack_d0 = uVar19;
                  func_0x0001074da5f4(*(undefined8 *)(unaff_x19 + 0x18));
                  uStack_150 = 0x101;
                  uStack_14e = 2;
                  func_0x0001074da128();
                  func_0x0001074da0bc();
                  uVar13 = *(undefined8 *)(unaff_x19 + 0x18);
                  func_0x0001074da470();
                  func_0x0001074da230();
                  func_0x0001074da3e0();
                  func_0x0001074da0f4(uVar13);
                  func_0x0001074da41c();
                  plVar15 = (long *)extraout_x8_08[1];
                  for (unaff_x20 = (long *)*extraout_x8_08; unaff_x20 != plVar15;
                      unaff_x20 = unaff_x20 + 5) {
                    uStack_160 = CONCAT71(uStack_160._1_7_,4);
                    func_0x0001074da05c(*(undefined8 *)(unaff_x19 + 0x18));
                    func_0x0001074da088();
                  }
                }
              }
              else {
                if (uVar20 != 0) {
                  func_0x0001074da5ac();
                  func_0x0001074da354();
                  func_0x0001074da540(&uStack_160);
                  func_0x0001074da320();
                  func_0x0001074da1b8(lVar11);
                  func_0x0001074d9fb0();
                  func_0x0001074da1a4();
                  func_0x0001074da238();
                  func_0x0001074da0dc();
                  func_0x0001074da0c8();
                }
                lVar2 = unaff_x20[1];
                for (lVar11 = *unaff_x20; lVar11 != lVar2; lVar11 = lVar11 + 0x10) {
                  func_0x0001074da214();
                  func_0x0001074da04c();
                  uStack_d8 = 7;
                  uStack_160 = CONCAT44(7,(undefined4)uStack_160);
                  uStack_158 = CONCAT44(uStack_158._4_4_,(int)unaff_x20);
                  uStack_d4 = uVar17;
                  uStack_d0 = uVar19;
                  func_0x0001074da5f4(*(undefined8 *)(unaff_x19 + 0x18));
                  uStack_150 = 0x101;
                  uStack_14e = 2;
                  func_0x0001074da128();
                  func_0x0001074da0bc();
                  func_0x0001074da470(&uStack_160);
                  func_0x0001074da0b0();
                  func_0x0001074da294();
                  func_0x0001074da494();
                  func_0x0001074da008();
                  if (uVar20 != 0) {
                    uVar13 = *(undefined8 *)(unaff_x19 + 0x18);
                    func_0x0001074da1e0(*(undefined8 *)(unaff_x19 + 0x28),lVar11);
                    func_0x0001074da634();
                    func_0x0001074da0f4(uVar13);
                  }
                  func_0x0001074da41c();
                  plVar15 = (long *)extraout_x8_09[1];
                  for (unaff_x20 = (long *)*extraout_x8_09; unaff_x20 != plVar15;
                      unaff_x20 = unaff_x20 + 5) {
                    uStack_160 = CONCAT71(uStack_160._1_7_,4);
                    func_0x0001074da05c(*(undefined8 *)(unaff_x19 + 0x18));
                    func_0x0001074da088();
                  }
                }
              }
              func_0x0001074da1f8();
              func_0x0001074da364();
              *(undefined1 *)(unaff_x19 + 0xb5) = 0;
              puVar14 = &uStack_168;
              goto LAB_1074d6680;
            }
          }
        }
      }
      func_0x0001074da1f8();
      func_0x0001074da364();
      puVar14 = &uStack_168;
    }
    else {
      if (*(long *)(unaff_x19 + 200) == lVar2 - lVar11 >> 4) {
        lVar16 = *(long *)(unaff_x19 + 0xb8);
        for (; lVar11 != lVar2; lVar11 = lVar11 + 0x10) {
          lVar12 = lVar11;
          FUN_1074b07f0(lVar11,lVar16 + 0x1c);
          if ((int)lVar12 == 0) goto LAB_1074d5d60;
          func_0x00010002c7d4();
        }
        if (param_7 == *(uint *)(unaff_x19 + 0xd4)) goto LAB_1074d6684;
      }
LAB_1074d5d60:
      bVar7 = param_7 <= *(uint *)(unaff_x19 + 0xd4);
      bVar8 = *(uint *)(unaff_x19 + 0xd4) == param_7;
      if ((!bVar8) || (func_0x0001074da428(), bVar7 && !bVar8)) {
        func_0x0001074d5c40();
        *(uint *)(unaff_x19 + 0xd4) = param_7;
      }
      FUN_1074d9e18(unaff_x19 + 0xb8);
      lVar11 = *(long *)(unaff_x19 + 0x28);
      bVar4 = *(byte *)(lVar11 + 0xa94);
      uVar20 = (ulong)bVar4;
      bVar8 = false;
      if (bVar4 == 1) {
        FUN_1074178c4();
        bVar8 = (int)lVar11 == 0;
      }
      func_0x0001074da2f8();
      if ((bVar8) && ((*(byte *)(unaff_x19 + 0xb1) >> 1 & 1) != 0)) {
        lVar11 = *(long *)(unaff_x19 + 0x88) + 0xb0;
        bVar8 = true;
        uVar19 = 4;
        uVar17 = 4;
      }
      else {
        bVar8 = false;
        lVar11 = *(long *)(unaff_x19 + 0x88);
        uVar17 = 1;
        uVar19 = 3;
      }
      func_0x0001074da270();
      func_0x0001074da384();
      iVar10 = (int)*(undefined8 *)(unaff_x19 + 0x90);
      uStack_160 = CONCAT44(uStack_160._4_4_,uVar19);
      uStack_158 = 0;
      if (bVar4 == 0) {
        uVar17 = 0;
      }
      func_0x0001074da014(uVar17);
      FUN_1073ca29c(alStack_98);
      if (alStack_98[0] != 0) {
        func_0x0001074d9fec();
        (*extraout_x8_01)();
        uVar9 = iVar10 == 2;
        if ((bool)uVar9) {
          func_0x0001074da1c0(*(undefined8 *)(unaff_x19 + 0x18),alStack_98[0]);
          (*extraout_x8_02)();
          func_0x0001074da400();
          sVar1 = extraout_w8;
          if (!(bool)uVar9) {
            sVar1 = extraout_w8 + 1;
          }
          uStack_160 = CONCAT53(uStack_160._3_5_,0x10000);
          uStack_160 = CONCAT62(uStack_160._2_6_,sVar1);
          func_0x0001074da1cc();
          func_0x0001074da508();
          func_0x0001074da2c8();
          func_0x0001074da1e8();
          func_0x0001074da58c();
          func_0x0001074da34c();
          func_0x0001074da2c8();
          func_0x0001074da1f0();
          func_0x0001074da240();
          func_0x0001074d9ffc();
          if (bVar8) {
            if (uVar20 != 0) {
              func_0x0001074d9fd4();
              func_0x0001074da310();
            }
            lVar2 = unaff_x20[1];
            for (lVar11 = *unaff_x20; lVar11 != lVar2; lVar11 = lVar11 + 0x10) {
              func_0x0001074da214();
              func_0x0001074da04c();
              uStack_d8 = 7;
              uStack_d6 = 0;
              uStack_d4 = 0;
              uStack_d0 = 0x3f800000;
              uStack_160 = CONCAT44(7,(undefined4)uStack_160);
              uStack_158 = CONCAT44(uStack_158._4_4_,(int)unaff_x20);
              func_0x0001074da5f4(*(undefined8 *)(unaff_x19 + 0x18));
              uStack_150 = 0x101;
              uStack_14e = 2;
              func_0x0001074da128();
              func_0x0001074da0bc();
              uVar13 = *(undefined8 *)(unaff_x19 + 0x18);
              func_0x0001074da470();
              func_0x0001074da230();
              func_0x0001074da3e0();
              func_0x0001074da0f4(uVar13);
              func_0x0001074da41c();
              plVar15 = (long *)extraout_x8_03[1];
              for (unaff_x20 = (long *)*extraout_x8_03; unaff_x20 != plVar15;
                  unaff_x20 = unaff_x20 + 5) {
                uStack_160 = CONCAT71(uStack_160._1_7_,4);
                func_0x0001074da05c(*(undefined8 *)(unaff_x19 + 0x18));
                func_0x0001074da088();
              }
            }
          }
          else {
            if (uVar20 != 0) {
              func_0x0001074da5ac();
              func_0x0001074da354();
              func_0x0001074da540(&uStack_160);
              func_0x0001074da320();
              func_0x0001074da1b8(lVar11 + uVar20 * 0x10);
              func_0x0001074d9fb0();
              func_0x0001074da1a4();
              func_0x0001074da238();
              func_0x0001074da0dc();
              func_0x0001074da0c8();
            }
            lVar2 = unaff_x20[1];
            for (lVar11 = *unaff_x20; lVar11 != lVar2; lVar11 = lVar11 + 0x10) {
              func_0x0001074da214();
              func_0x0001074da04c();
              uStack_d8 = 7;
              uStack_d6 = 0;
              uStack_d4 = 0;
              uStack_d0 = 0x3f800000;
              uStack_160 = CONCAT44(7,(undefined4)uStack_160);
              uStack_158 = CONCAT44(uStack_158._4_4_,(int)unaff_x20);
              func_0x0001074da5f4(*(undefined8 *)(unaff_x19 + 0x18));
              uStack_150 = 0x101;
              uStack_14e = 2;
              func_0x0001074da128();
              func_0x0001074da0bc();
              func_0x0001074da470(&uStack_160);
              func_0x0001074da0b0();
              func_0x0001074da294();
              func_0x0001074da494();
              func_0x0001074da008();
              if (uVar20 != 0) {
                uVar13 = *(undefined8 *)(unaff_x19 + 0x18);
                func_0x0001074da1e0(*(undefined8 *)(unaff_x19 + 0x28),lVar11);
                func_0x0001074da634();
                func_0x0001074da0f4(uVar13);
              }
              func_0x0001074da41c();
              plVar15 = (long *)extraout_x8_05[1];
              for (unaff_x20 = (long *)*extraout_x8_05; unaff_x20 != plVar15;
                  unaff_x20 = unaff_x20 + 5) {
                uStack_160 = CONCAT71(uStack_160._1_7_,4);
                func_0x0001074da05c(*(undefined8 *)(unaff_x19 + 0x18));
                func_0x0001074da088();
              }
            }
          }
          func_0x0001074da1f8();
          puVar14 = auStack_88;
LAB_1074d6680:
          FUN_10748eeb8(puVar14);
          goto LAB_1074d6684;
        }
      }
      func_0x0001074da1f8();
      puVar14 = auStack_88;
    }
    FUN_10748eeb8(puVar14);
    uVar13 = 0;
  }
  return uVar13;
}



/* Entry: 1074d677c; end: 1074d680f;  */

void FUN_1074d677c(undefined4 *param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = param_2 + 0xb8;
  FUN_1074d960c();
  if (param_2 + 0xc0 == lVar1) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lVar1 + 0x2c);
  }
  *param_1 = *(undefined4 *)(param_2 + 0xd4);
  param_1[1] = 2;
  param_1[2] = uVar2;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0x101;
  *(undefined1 *)((long)param_1 + 0x12) = 2;
  return;
}



/* Entry: 1074d6810; end: 1074d6873;  */

void FUN_1074d6810(undefined2 *param_1,long param_2)

{
  if ((*(byte *)(param_2 + 0x68) >> 5 & 1) == 0) {
    if (*(char *)(param_2 + 0x60) == '\x04') {
      *param_1 = 0x501;
      *(undefined4 *)(param_1 + 2) = 1;
      *(undefined8 *)(param_1 + 4) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 6) = 0;
      *(undefined8 *)(param_1 + 2) = 0;
      *(undefined4 *)(param_1 + 10) = 0;
    }
  }
  else {
    *param_1 = 0x10b;
    *(undefined4 *)(param_1 + 2) = 1;
    *(undefined8 *)(param_1 + 8) = 0x3e000000;
    *(undefined8 *)(param_1 + 4) = 0x3e0000003e000000;
  }
  *(undefined4 *)(param_1 + 0xc) = 0x1010101;
  return;
}



/* Entry: 1074d6874; end: 1074d68bb;  */

void FUN_1074d6874(long param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0xd8);
  FUN_1074d96ac();
  if (piVar1 == (int *)0x0) {
    func_0x0001074da510();
    *piVar1 = 0;
  }
  func_0x0001074da510();
  *piVar1 = *piVar1 + param_3;
  return;
}



/* Entry: 1074d68bc; end: 1074d68ef;  */

long FUN_1074d68bc(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_1074d9774(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x28;
}



/* Entry: 1074d68f0; end: 1074d6cbf;  */

void FUN_1074d68f0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  undefined1 auStack_1f8 [24];
  undefined1 auStack_1e0 [24];
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined4 auStack_170 [6];
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
  undefined1 auStack_100 [24];
  undefined4 uStack_e8;
  undefined4 uStack_e0;
  undefined4 auStack_d8 [6];
  undefined4 uStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_90;
  undefined1 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar1 = param_1;
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  auStack_d8[0] = 0x9f;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  ppuStack_b8 = &PTR_DAT_110996720;
  uStack_b0 = 0;
  uStack_98 = 0x9f;
  uStack_90 = 0;
  uStack_8c = 1;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  auStack_170[0] = *(undefined4 *)(param_1 + 0x100);
  func_0x0001074da3d0();
  uStack_e0 = 3;
  func_0x0001074da110();
  FUN_10743fa44();
  func_0x0001074da35c();
  plVar3 = (long *)(param_1 + 0xe8);
  while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
    auStack_d8[0] = 0xa0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b0 = 0;
    ppuStack_b8 = &PTR_DAT_110996720;
    uStack_98 = 0xa0;
    uStack_90 = 0;
    uStack_8c = 1;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_88 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_100,plVar3 + 2)
    ;
    func_0x00010726e300(auStack_d8,&UNK_10f41013a,auStack_100);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_100);
    auStack_170[0] = *(undefined4 *)(plVar3 + 5);
    func_0x0001074da3d0();
    uStack_e0 = 3;
    func_0x0001074da110();
    FUN_10743fa44();
    auStack_170[0] = 0x9c;
    uStack_158 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_148 = 0;
    ppuStack_150 = &PTR_DAT_110996720;
    uStack_130 = 0x9c;
    uStack_128 = 0;
    uStack_124 = 1;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_120 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_188,plVar3 + 2)
    ;
    func_0x00010726e300(auStack_170,&UNK_10f41013a,auStack_188);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_188);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1a0,param_2);
    func_0x00010726e300(auStack_170,&UNK_10f415c0f,auStack_1a0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1b8,param_3);
    func_0x00010726e300(auStack_170,&DAT_10f34bc88,auStack_1b8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b8);
    uStack_e8 = 1;
    uStack_e0 = 0;
    uStack_1c8 = *(undefined8 *)(lVar1 + 8);
    uStack_1c0 = 3;
    func_0x0001074da47c();
    FUN_10743fa9c();
    func_0x0001074da584();
    func_0x0001074da35c();
  }
  auStack_d8[0] = 0x9b;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  ppuStack_b8 = &PTR_DAT_110996720;
  uStack_b0 = 0;
  uStack_98 = 0x9b;
  uStack_90 = 0;
  uStack_8c = 1;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1e0,param_2);
  func_0x00010726e300(auStack_d8,&UNK_10f415c0f,auStack_1e0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1e0);
  bVar2 = 1;
  if ((((*(byte *)(param_4 + 0x5c) & 1) == 0) && ((*(byte *)(param_4 + 0x5d) & 1) == 0)) &&
     ((*(byte *)(param_4 + 0x5e) & 1) == 0)) {
    bVar2 = *(byte *)(param_4 + 0x5f);
  }
  func_0x0001072bbe40(auStack_d8,&DAT_10f4095c1,bVar2 & 1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1f8,param_3);
  func_0x00010726e300(auStack_d8,&DAT_10f34bc88,auStack_1f8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1f8);
  auStack_170[0] = 1;
  func_0x0001074da3d0();
  uStack_e0 = 3;
  func_0x0001074da110();
  FUN_10743fa9c();
  auStack_170[0] = 0xb4;
  uStack_158 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  ppuStack_150 = &PTR_DAT_110996720;
  uStack_148 = 0;
  uStack_130 = 0xb4;
  uStack_128 = 0;
  uStack_124 = 1;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_120 = 0;
  uStack_e8 = *(undefined4 *)(param_1 + 0x104);
  uStack_e0 = 1;
  uStack_1c8 = *(undefined8 *)(lVar1 + 8);
  uStack_1c0 = 3;
  func_0x0001074da47c();
  FUN_10743fa44();
  func_0x0001074d9c50(param_1 + 0xd8);
  func_0x0001074da584();
  func_0x0001074da35c();
  return;
}



/* Entry: 1074d6cc0; end: 1074d6d53;  */

void FUN_1074d6cc0(long param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  long lVar5;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  long lStack_48;
  long lStack_40;
  
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x180);
  pppuVar4 = *(undefined8 ****)(param_1 + 0x28);
  FUN_1074178c4();
  ppuStack_58 = (undefined8 **)((ulong)ppuStack_58 & 0xffffffffffff0000);
  pppuVar2 = pppuVar4;
  func_0x0001074da55c(&lStack_48);
  for (lVar5 = lStack_48; lVar5 != lStack_40; lVar5 = lVar5 + 0x10) {
    func_0x0001074da564();
    pppuVar1 = (undefined8 ***)(param_1 + 0x180);
    pppuVar3 = &ppuStack_58;
    ppuStack_58 = pppuVar4;
    ppuStack_50 = pppuVar2;
    FUN_1074d6d54();
    pppuVar4 = pppuVar1;
    pppuVar2 = pppuVar3;
  }
  func_0x0001072ba1a8(&lStack_48);
  return;
}



/* Entry: 1074d6d54; end: 1074d6d97;  */

undefined8 * FUN_1074d6d54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar2 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    puVar1 = puVar1 + 2;
  }
  else {
    puVar1 = param_1;
    FUN_1074d9410();
  }
  param_1[1] = puVar1;
  return puVar1 + -2;
}



/* Entry: 1074d6d98; end: 1074d70d3;  */

void FUN_1074d6d98(long param_1,uint param_2)

{
  long lVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  short extraout_w8;
  uint uVar7;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  long *extraout_x8_04;
  ulong extraout_x9;
  code *extraout_x9_00;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined4 uVar11;
  undefined8 uStack_d0;
  short sStack_c8;
  undefined1 uStack_c6;
  undefined1 uStack_c5;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined2 uStack_b8;
  undefined1 uStack_b6;
  ulong auStack_b0 [2];
  long alStack_a0 [2];
  undefined4 auStack_90 [2];
  undefined8 uStack_88;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined2 uStack_78;
  undefined1 uStack_76;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined2 uStack_58;
  
  bVar2 = *(byte *)(*(long *)(param_1 + 0x28) + 0xa94);
  if (bVar2 == 1) {
    FUN_1074178c4();
    uVar7 = 5;
  }
  else {
    uVar7 = 1;
  }
  auStack_90[0] = 4;
  uStack_80 = uVar7 | 2;
  if (param_2 == 0) {
    uStack_80 = uVar7;
  }
  uStack_88 = 0;
  uStack_7c = *(undefined4 *)(param_1 + 0x78);
  uStack_78 = 0;
  uStack_76 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  uStack_58 = 0xf01;
  if (param_2 == 0) {
    lVar5 = 0xe0;
  }
  else {
    uStack_58 = 0xf00;
    lVar5 = *(long *)(param_1 + 0x30);
    func_0x0001074e6e78(lVar5,*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x1e0));
    uStack_58 = CONCAT11(*(undefined1 *)(lVar5 + 0xc),(undefined1)uStack_58);
    lVar5 = 0x100;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x90);
  FUN_1073ca29c(alStack_a0,uVar6,*(long *)(param_1 + 0x88) + lVar5 + (ulong)bVar2 * 0x10,auStack_90)
  ;
  iVar4 = (int)uVar6;
  if (alStack_a0[0] != 0) {
    func_0x0001074d9fec();
    (*extraout_x8)();
    uVar3 = iVar4 == 2;
    if ((bool)uVar3) {
      func_0x0001074da1c0(*(undefined8 *)(param_1 + 0x18),alStack_a0[0]);
      (*extraout_x8_00)();
      func_0x0001074da400();
      sStack_c8 = extraout_w8;
      if (!(bool)uVar3) {
        sStack_c8 = extraout_w8 + 1;
      }
      uStack_c6 = 1;
      func_0x0001074da1cc();
      (*extraout_x8_01)();
      func_0x0001074da2c8();
      func_0x0001074da1e8();
      func_0x0001074da58c();
      func_0x0001074da34c();
      func_0x0001074da2c8();
      func_0x0001074da1f0();
      func_0x0001074da240();
      func_0x0001074d9ffc();
      func_0x0001074da260();
      uStack_c4 = 7;
      uStack_c0 = 0;
      uStack_bc = 0;
      uStack_b8 = 0x101;
      uStack_b6 = 1;
      auStack_b0[0] = extraout_x9;
      func_0x0001074da128();
      (*extraout_x8_02)();
      lVar8 = *(long *)(param_1 + 0x98);
      lVar5 = 0x260;
      if (param_2 == 0) {
        lVar5 = 600;
      }
      if (*(long *)(lVar8 + lVar5) == 0) {
        func_0x0001074da094();
        (*extraout_x9_00)(auStack_b0);
        sStack_c8 = 0x10;
        uStack_c6 = 0;
        uStack_c5 = 0;
        uStack_c4 = 0;
        uStack_c0 = (undefined4)auStack_b0[0];
        uStack_bc = (undefined4)(auStack_b0[0] >> 0x20);
        FUN_1074d5ae4(&uStack_d0,&sStack_c8);
        uVar6 = uStack_d0;
        uStack_d0 = 0;
        FUN_1074d9588(lVar8 + lVar5,uVar6);
        func_0x0001074d9564(&uStack_d0);
        if (CONCAT44(uStack_bc,uStack_c0) != 0) {
          func_0x0001074d9fc8();
        }
      }
      uStack_bc = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      if ((param_2 & 1) == 0) {
        uVar11 = *(undefined4 *)(param_1 + 0xa8);
      }
      else {
        uVar11 = 0xbcf5c28f;
      }
      sStack_c8 = (short)uVar11;
      uStack_c6 = (undefined1)((uint)uVar11 >> 0x10);
      uStack_c5 = (undefined1)((uint)uVar11 >> 0x18);
      func_0x0001074da03c(*(undefined8 *)(lVar8 + lVar5));
      (*extraout_x8_03)();
      func_0x0001074da200(*(undefined8 *)(param_1 + 0x18));
      func_0x0001074da0d4();
      if (param_2 != 0) {
        func_0x0001074da200(*(undefined8 *)(param_1 + 0x18));
        func_0x0001074da1b8();
      }
      if ((ulong)bVar2 != 0) {
        func_0x0001074d9fd4();
        func_0x0001074da310();
      }
      lVar8 = *(long *)(param_1 + 0x188);
      for (lVar5 = *(long *)(param_1 + 0x180); lVar5 != lVar8; lVar5 = lVar5 + 0x10) {
        plVar9 = *(long **)(param_1 + 0x18);
        func_0x0001074da648();
        func_0x0001074da230();
        func_0x0001074da0a4(*(undefined8 *)(*plVar9 + 0x90));
        func_0x0001074da41c();
        lVar1 = extraout_x8_04[1];
        for (lVar10 = *extraout_x8_04; lVar10 != lVar1; lVar10 = lVar10 + 0x28) {
          auStack_b0[0] = CONCAT71(auStack_b0[0]._1_7_,4);
          auStack_b0[0] = auStack_b0[0] & 0xffffffff;
          func_0x0001074da074();
          func_0x0001074da0fc();
        }
      }
    }
  }
  func_0x00010730b734(alStack_a0);
  return;
}



/* Entry: 1074d70d4; end: 1074d7697;  */

undefined8
FUN_1074d70d4(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             long param_5,long *param_6,undefined8 param_7)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  code *extraout_x8;
  long *plVar5;
  long *extraout_x8_00;
  long extraout_x8_01;
  undefined8 *puVar6;
  code *extraout_x9;
  long *extraout_x9_00;
  ulong uVar7;
  ulong extraout_x9_01;
  long *plVar8;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar9;
  long *extraout_x10;
  long *plVar10;
  long *plVar11;
  long *extraout_x11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  long *unaff_x27;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  long *plStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 auStack_2e0 [128];
  undefined1 auStack_260 [128];
  long alStack_1e0 [16];
  long *plStack_160;
  long *plStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined4 uStack_70;
  
  lStack_78 = param_6[1];
  lStack_80 = *param_6;
  uStack_70 = (undefined4)param_7;
  lVar4 = *(long *)(param_5 + 0x198);
  FUN_1074d9e48(lVar4,&lStack_80);
  if (lVar4 == 0) {
    func_0x0001074da094();
    (*extraout_x9)(alStack_1e0);
    plStack_160 = (long *)0xd0;
    plStack_158 = (long *)alStack_1e0[0];
    func_0x000107308d88(&uStack_90,&plStack_160);
    plVar18 = plStack_158;
    plStack_158 = (long *)0x0;
    if (plVar18 != (long *)0x0) {
      func_0x0001074d9fc8();
    }
  }
  else {
    if (*(int *)(lVar4 + 0x28) == 0) {
      return *(undefined8 *)(lVar4 + 0x30);
    }
    lStack_88 = *(long *)(lVar4 + 0x38);
    uStack_90 = *(undefined8 *)(lVar4 + 0x30);
    if (*(long *)(lVar4 + 0x38) != 0) {
      do {
        func_0x0001074da3c0();
      } while (extraout_w10 != 0);
    }
  }
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  plStack_d8 = (long *)0x0;
  plStack_e0 = (long *)0x0;
  func_0x0001074da470(alStack_1e0);
  FUN_1074d5b58();
  FUN_1074d5bb4(auStack_260,param_5,param_6,param_7);
  func_0x000107415eec(*(undefined8 *)(param_5 + 0x28),auStack_2e0,param_6,param_7);
  func_0x000107417744(*(undefined8 *)(param_5 + 0x28),auStack_2e0);
  func_0x000107482794(&plStack_320,alStack_1e0);
  plStack_158 = plStack_318;
  plStack_160 = plStack_320;
  uStack_148 = uStack_308;
  uStack_150 = uStack_310;
  uStack_138 = uStack_2f8;
  uStack_140 = uStack_300;
  uStack_128 = uStack_2e8;
  uStack_130 = uStack_2f0;
  func_0x000107482794(&plStack_320,auStack_260);
  plStack_118 = plStack_318;
  plStack_120 = plStack_320;
  uStack_108 = uStack_308;
  uStack_110 = uStack_310;
  uStack_f8 = uStack_2f8;
  uStack_100 = uStack_300;
  uStack_e8 = uStack_2e8;
  uStack_f0 = uStack_2f0;
  func_0x000107482794(&plStack_320,auStack_2e0);
  plStack_d8 = plStack_318;
  plStack_e0 = plStack_320;
  uStack_c8 = uStack_308;
  uStack_d0 = uStack_310;
  uStack_b8 = uStack_2f8;
  uStack_c0 = uStack_300;
  uStack_a8 = uStack_2e8;
  uStack_b0 = uStack_2f0;
  if (*(char *)(*(long *)(param_5 + 0x28) + 0xa94) == '\x01') {
    func_0x0001074da1e0(*(long *)(param_5 + 0x28),param_6);
    uStack_a0 = CONCAT44((int)uStack_2f0,(int)uStack_300);
    uStack_98 = CONCAT44(param_4,param_3);
  }
  func_0x0001074da03c(uStack_90);
  (*extraout_x8)();
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 0x28) = 0;
    puVar6 = &uStack_90;
    goto LAB_1074d75f4;
  }
  lStack_328 = lStack_88;
  uStack_330 = uStack_90;
  if (lStack_88 != 0) {
    do {
      func_0x0001074da3c0();
    } while (extraout_w10_00 != 0);
  }
  plVar14 = *(long **)(param_5 + 0x198);
  plVar8 = &lStack_80;
  FUN_1074d9f14();
  plVar18 = (long *)plVar14[1];
  if (plVar18 != (long *)0x0) {
    uVar17 = (long)plVar18 - 1;
    if (((ulong)plVar18 & uVar17) == 0) {
      unaff_x27 = (long *)(uVar17 & (ulong)plVar8);
    }
    else {
      unaff_x27 = plVar8;
      if (plVar18 <= plVar8) {
        uVar7 = 0;
        if (plVar18 != (long *)0x0) {
          uVar7 = (ulong)plVar8 / (ulong)plVar18;
        }
        unaff_x27 = (long *)((long)plVar8 - uVar7 * (long)plVar18);
      }
    }
    plVar15 = *(long **)(*plVar14 + (long)unaff_x27 * 8);
    if (plVar15 != (long *)0x0) {
      do {
        while( true ) {
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) goto LAB_1074d7348;
          plVar5 = (long *)plVar15[1];
          if (plVar5 != plVar8) break;
          plVar5 = plVar15 + 2;
          func_0x0001074d9f64(plVar5,&lStack_80);
          if (((ulong)plVar5 & 1) != 0) goto LAB_1074d75c4;
        }
        if (((ulong)plVar18 & uVar17) == 0) {
          plVar5 = (long *)((ulong)plVar5 & uVar17);
        }
        else if (plVar18 <= plVar5) {
          uVar7 = 0;
          if (plVar18 != (long *)0x0) {
            uVar7 = (ulong)plVar5 / (ulong)plVar18;
          }
          plVar5 = (long *)((long)plVar5 - uVar7 * (long)plVar18);
        }
      } while (plVar5 == unaff_x27);
    }
  }
LAB_1074d7348:
  plVar15 = (long *)0x40;
  __Znwm();
  plVar5 = plVar14 + 2;
  uStack_310 = 1;
  *plVar15 = 0;
  plVar15[1] = (long)plVar8;
  plVar15[3] = lStack_78;
  plVar15[2] = lStack_80;
  *(undefined4 *)(plVar15 + 4) = uStack_70;
  plVar15[6] = 0;
  plVar15[7] = 0;
  plVar15[5] = 0;
  plStack_318 = plVar5;
  if ((plVar18 == (long *)0x0) ||
     (*(float *)(plVar14 + 4) * (float)plVar18 < (float)(plVar14[3] + 1))) {
    plStack_320 = plVar15;
    func_0x0001074da458();
    bVar2 = (long *)0x2 < plVar18;
    bVar3 = plVar18 == (long *)0x3;
    func_0x0001074da620();
    plVar16 = extraout_x8_00;
    if (!bVar2 || bVar3) {
      plVar16 = extraout_x9_00;
    }
    if ((long)plVar16 - 1U == 0) {
      plVar16 = (long *)0x2;
    }
    else if (((ulong)plVar16 & (long)plVar16 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    plVar18 = (long *)plVar14[1];
    if (plVar18 < plVar16) {
LAB_1074d73e8:
      if ((ulong)plVar16 >> 0x3d != 0) {
        func_0x000104bd35f4();
        goto LAB_1074d7638;
      }
      lVar4 = (long)plVar16 << 3;
      __Znwm(lVar4);
      func_0x0001074d9f98(plVar14,lVar4);
      plVar14[1] = (long)plVar16;
      lVar4 = *plVar14;
      for (plVar18 = (long *)0x0; plVar16 != plVar18; plVar18 = (long *)((long)plVar18 + 1)) {
        *(undefined8 *)(lVar4 + (long)plVar18 * 8) = 0;
      }
      plVar9 = (long *)*plVar5;
      plVar18 = plVar16;
      if (plVar9 != (long *)0x0) {
        plVar10 = (long *)plVar9[1];
        uVar7 = (long)plVar16 - 1;
        uVar17 = 0;
        if (plVar16 != (long *)0x0) {
          uVar17 = (ulong)plVar10 / (ulong)plVar16;
        }
        plVar11 = plVar10;
        if (plVar16 <= plVar10) {
          plVar11 = (long *)((long)plVar10 - uVar17 * (long)plVar16);
        }
        if (((ulong)plVar16 & uVar7) == 0) {
          plVar11 = (long *)((ulong)plVar10 & uVar7);
        }
        *(long **)(lVar4 + (long)plVar11 * 8) = plVar5;
        while (plVar10 = plVar9, plVar9 = (long *)*plVar10, plVar9 != (long *)0x0) {
          plVar12 = (long *)plVar9[1];
          if (((ulong)plVar16 & uVar7) == 0) {
            plVar12 = (long *)((ulong)plVar12 & uVar7);
          }
          else if (plVar16 <= plVar12) {
            uVar17 = 0;
            if (plVar16 != (long *)0x0) {
              uVar17 = (ulong)plVar12 / (ulong)plVar16;
            }
            plVar12 = (long *)((long)plVar12 - uVar17 * (long)plVar16);
          }
          if (plVar12 != plVar11) {
            if (*(long *)(lVar4 + (long)plVar12 * 8) == 0) {
              *(long **)(lVar4 + (long)plVar12 * 8) = plVar10;
              plVar11 = plVar12;
            }
            else {
              *plVar10 = *plVar9;
              func_0x0001074da440();
              lVar4 = extraout_x8_01;
              uVar7 = extraout_x9_01;
              plVar9 = extraout_x10;
              plVar11 = extraout_x11;
            }
          }
        }
      }
    }
    else if (plVar16 < plVar18) {
      plVar9 = (long *)(long)((float)(ulong)plVar14[3] / *(float *)(plVar14 + 4));
      if ((plVar18 < (long *)0x3) || (((ulong)plVar18 & (long)plVar18 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x0001074da32c();
      }
      if (plVar16 <= plVar9) {
        plVar16 = plVar9;
      }
      if (plVar16 < plVar18) {
        if (plVar16 != (long *)0x0) goto LAB_1074d73e8;
        func_0x0001074d9f98(plVar14,0);
        plVar14[1] = 0;
        plVar18 = (long *)0x0;
      }
      else {
        plVar18 = (long *)plVar14[1];
      }
    }
    if (((ulong)plVar18 & (long)plVar18 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar18 - 1U & (ulong)plVar8);
    }
    else {
      unaff_x27 = plVar8;
      if (plVar18 <= plVar8) {
        uVar17 = 0;
        if (plVar18 != (long *)0x0) {
          uVar17 = (ulong)plVar8 / (ulong)plVar18;
        }
        unaff_x27 = (long *)((long)plVar8 - uVar17 * (long)plVar18);
      }
    }
  }
  lVar4 = *plVar14;
  plVar8 = *(long **)(lVar4 + (long)unaff_x27 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar15 = *plVar5;
    *plVar5 = (long)plVar15;
    *(long **)(lVar4 + (long)unaff_x27 * 8) = plVar5;
    if (*plVar15 != 0) {
      plVar8 = *(long **)(*plVar15 + 8);
      if (((ulong)plVar18 & (long)plVar18 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar18 - 1U);
      }
      else if (plVar18 <= plVar8) {
        uVar17 = 0;
        if (plVar18 != (long *)0x0) {
          uVar17 = (ulong)plVar8 / (ulong)plVar18;
        }
        plVar8 = (long *)((long)plVar8 - uVar17 * (long)plVar18);
      }
      *(long **)(lVar4 + (long)plVar8 * 8) = plVar15;
    }
  }
  else {
    *plVar15 = *plVar8;
    *plVar8 = (long)plVar15;
  }
  plStack_320 = (long *)0x0;
  plVar14[3] = plVar14[3] + 1;
  func_0x0001074d95c8(&plStack_320);
LAB_1074d75c4:
  *(undefined4 *)(plVar15 + 5) = 0;
  func_0x000107308dac(plVar15 + 6,&uStack_330);
  func_0x00010730b284(&uStack_330);
  lVar4 = *(long *)(param_5 + 0x198);
  FUN_1074d9e48(lVar4,&lStack_80);
  if (lVar4 != 0) {
    puVar6 = (undefined8 *)(lVar4 + 0x30);
LAB_1074d75f4:
    uVar13 = *puVar6;
    func_0x00010730b284(&uStack_90);
    return uVar13;
  }
  func_0x000104c03f28(&UNK_10f639994);
LAB_1074d7638:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1074d763c);
  (*pcVar1)();
}



/* Entry: 1074d7698; end: 1074d79d3;  */

void FUN_1074d7698(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  undefined1 in_ZR;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  long lVar9;
  short extraout_w8;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long unaff_x19;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auStack_178 [128];
  short sStack_f8;
  undefined1 uStack_f6;
  undefined1 uStack_f5;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long alStack_78 [3];
  
  if ((*(byte *)(param_1 + 0xb5) & 1) != 0) {
    return;
  }
  func_0x0001074da13c();
  func_0x0001074da2f8();
  if (((bool)in_ZR) && ((*(byte *)(unaff_x19 + 0xb1) >> 1 & 1) != 0)) {
    FUN_1074d6d98();
LAB_1074d7968:
    *(undefined1 *)(unaff_x19 + 0xb5) = 1;
  }
  else {
    lVar9 = *(long *)(unaff_x19 + 0x28);
    bVar5 = *(byte *)(lVar9 + 0xa94);
    uVar12 = (ulong)bVar5;
    if (bVar5 == 1) {
      FUN_1074178c4();
      bVar6 = (int)lVar9 == 0;
    }
    else {
      bVar6 = false;
    }
    uVar10 = *(undefined8 *)(unaff_x19 + 0x90);
    sStack_f8 = 3;
    uStack_f6 = 0;
    uStack_f5 = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    uStack_e8 = CONCAT44(*(undefined4 *)(unaff_x19 + 0x78),(uint)bVar5);
    uStack_e0 = uStack_e0 & 0xffffffffff000000;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_d8 = 0;
    uStack_c0 = CONCAT62(uStack_c0._2_6_,0xf01);
    FUN_1073ca29c(alStack_78,uVar10,*(long *)(unaff_x19 + 0x88) + uVar12 * 0x10,&sStack_f8);
    iVar8 = (int)uVar10;
    if (alStack_78[0] != 0) {
      func_0x0001074d9fec();
      (*extraout_x8)();
      uVar7 = iVar8 == 2;
      if ((bool)uVar7) {
        func_0x0001074da1c0(*(undefined8 *)(unaff_x19 + 0x18),alStack_78[0]);
        (*extraout_x8_00)();
        func_0x0001074da3f0();
        sStack_f8 = extraout_w8;
        if (!(bool)uVar7) {
          sStack_f8 = extraout_w8 + 1;
        }
        uStack_f6 = 1;
        func_0x0001074da1cc();
        (*extraout_x8_01)();
        func_0x0001074da2b8();
        func_0x0001074da1e8();
        func_0x0001074da654();
        func_0x0001074da3a4();
        func_0x0001074da2b8();
        func_0x0001074da1f0();
        func_0x0001074da250();
        func_0x0001074da008();
        func_0x0001074da260();
        uStack_f4 = 7;
        uStack_f0 = 0;
        uStack_ec = 0;
        uStack_e8 = CONCAT53(uStack_e8._3_5_,0x10101);
        func_0x0001074da128();
        (*extraout_x8_02)();
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_ec = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        sStack_f8 = 0;
        uStack_f6 = 0;
        uStack_f5 = 0;
        uStack_f4 = 0x3ff00000;
        uStack_d0 = 0x3ff0000000000000;
        uStack_c0 = 0;
        uStack_c8 = 0;
        uStack_b0 = 0;
        uStack_b8 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_a8 = 0x3ff0000000000000;
        uStack_80 = 0x3ff0000000000000;
        func_0x000107876e00(0,0,(double)*(float *)(unaff_x19 + 0xa8),&sStack_f8);
        if (uVar12 != 0) {
          uVar10 = *(undefined8 *)(unaff_x19 + 0x18);
          lVar9 = *(long *)(unaff_x19 + 0x28);
          func_0x0001074da4d4();
          func_0x000107482794(auStack_178,lVar9 + 0xaa0);
          func_0x0001074da494();
          func_0x0001074da1b8(uVar10);
          func_0x0001074d9fb0();
          func_0x0001074da1a4();
          func_0x0001074da238();
          func_0x0001074da0dc();
          func_0x0001074da0c8();
        }
        lVar9 = *(long *)(unaff_x19 + 0x180);
        lVar3 = *(long *)(unaff_x19 + 0x188);
        lVar2 = 0x3c8;
        if (!bVar6) {
          lVar2 = 0x3b0;
        }
        for (; lVar9 != lVar3; lVar9 = lVar9 + 0x10) {
          FUN_1074d5bb4(auStack_178);
          func_0x000107877034(auStack_178,auStack_178,&sStack_f8);
          func_0x0001074da224();
          func_0x0001074da320();
          func_0x0001074d9ffc();
          if (uVar12 != 0) {
            func_0x0001074da1e0(*(undefined8 *)(unaff_x19 + 0x28),lVar9);
            func_0x0001074da598();
            func_0x0001074da0a4();
          }
          plVar1 = (long *)(*(long *)(unaff_x19 + 0x48) + lVar2);
          lVar4 = plVar1[1];
          for (lVar11 = *plVar1; lVar11 != lVar4; lVar11 = lVar11 + 0x28) {
            func_0x0001074da074(*(undefined8 *)(unaff_x19 + 0x18));
            func_0x0001074da0fc();
          }
        }
        func_0x0001074da1d8();
        goto LAB_1074d7968;
      }
    }
    func_0x0001074da1d8();
  }
  func_0x0001074da1b0();
  return;
}



/* Entry: 1074d79d4; end: 1074d7d07;  */

void FUN_1074d79d4(void)

{
  long *plVar1;
  short sVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  undefined1 in_ZR;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  short extraout_w8;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  long unaff_x19;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  uint uStack_e8;
  undefined4 uStack_e4;
  undefined2 uStack_e0;
  undefined1 uStack_de;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  long alStack_78 [3];
  
  func_0x0001074da13c();
  func_0x0001074da2f8();
  if (((bool)in_ZR) && ((*(byte *)(unaff_x19 + 0xb1) >> 1 & 1) != 0)) {
    FUN_1074d6d98();
  }
  else {
    lVar9 = *(long *)(unaff_x19 + 0x28);
    bVar5 = *(byte *)(lVar9 + 0xa94);
    uVar13 = (ulong)bVar5;
    if (bVar5 == 1) {
      FUN_1074178c4();
      bVar6 = (int)lVar9 == 0;
    }
    else {
      bVar6 = false;
    }
    lVar9 = *(long *)(unaff_x19 + 0x88);
    uVar11 = *(undefined8 *)(unaff_x19 + 0x90);
    uStack_f8 = 3;
    uStack_f0 = 0;
    uStack_ec = 0;
    uStack_e4 = *(undefined4 *)(unaff_x19 + 0x78);
    uStack_e0 = 0;
    uStack_de = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_d8 = 0;
    uStack_c0 = 0;
    lVar10 = *(long *)(unaff_x19 + 0x30);
    uStack_e8 = (uint)bVar5;
    func_0x0001074e6e78(lVar10,*(undefined8 *)(*(long *)(unaff_x19 + 0x40) + 0x1e0));
    uStack_bf = *(undefined1 *)(lVar10 + 0xc);
    FUN_1073ca29c(alStack_78,uVar11,lVar9 + uVar13 * 0x10 + 0x30,&uStack_f8);
    iVar8 = (int)uVar11;
    if (alStack_78[0] != 0) {
      func_0x0001074d9fec();
      (*extraout_x8)();
      uVar7 = iVar8 == 2;
      if ((bool)uVar7) {
        func_0x0001074da1c0(*(undefined8 *)(unaff_x19 + 0x18),alStack_78[0]);
        (*extraout_x8_00)();
        func_0x0001074da3f0();
        sVar2 = extraout_w8;
        if (!(bool)uVar7) {
          sVar2 = extraout_w8 + 1;
        }
        uStack_f8 = CONCAT13(uStack_f8._3_1_,0x10000);
        uStack_f8 = CONCAT22(uStack_f8._2_2_,sVar2);
        func_0x0001074da1cc();
        (*extraout_x8_01)();
        func_0x0001074da304();
        func_0x0001074da1e8();
        func_0x0001074da654();
        func_0x0001074da3a4();
        func_0x0001074da304();
        func_0x0001074da1f0();
        func_0x0001074da250();
        func_0x0001074da008();
        func_0x0001074da260();
        uStack_f4 = 7;
        uStack_f0 = 0;
        uStack_ec = 0;
        uStack_e8 = CONCAT13(uStack_e8._3_1_,0x10101);
        func_0x0001074da128();
        (*extraout_x8_02)();
        if (uVar13 != 0) {
          lVar9 = *(long *)(unaff_x19 + 0x28);
          func_0x0001074da3ac();
          _memcpy(&uStack_f8,lVar9 + 0xb20,0x80);
          func_0x000107877034(&uStack_f8,*(long *)(unaff_x19 + 0x30) + 0x1380,&uStack_f8);
          uVar11 = *(undefined8 *)(unaff_x19 + 0x18);
          func_0x0001074da224();
          func_0x0001074da494();
          func_0x0001074da1b8(uVar11);
          func_0x0001074d9fb0();
          func_0x0001074da1a4();
          func_0x0001074da238();
          func_0x0001074da0dc();
          (*extraout_x8_03)(0x3f7851ec);
        }
        lVar9 = *(long *)(unaff_x19 + 0x180);
        lVar3 = *(long *)(unaff_x19 + 0x188);
        lVar10 = 0x3c8;
        if (!bVar6) {
          lVar10 = 0x3b0;
        }
        for (; lVar9 != lVar3; lVar9 = lVar9 + 0x10) {
          func_0x0001074da648(&uStack_f8);
          func_0x0001074da0b0();
          func_0x000107417744(*(undefined8 *)(unaff_x19 + 0x28),&uStack_f8);
          func_0x000107877034(&uStack_f8,*(long *)(unaff_x19 + 0x30) + 0x1380,&uStack_f8);
          func_0x0001074da224();
          func_0x0001074da320();
          func_0x0001074d9ffc();
          if (uVar13 != 0) {
            func_0x0001074da1e0(*(undefined8 *)(unaff_x19 + 0x28),lVar9);
            func_0x0001074da598();
            func_0x0001074da0a4();
          }
          plVar1 = (long *)(*(long *)(unaff_x19 + 0x48) + lVar10);
          lVar4 = plVar1[1];
          for (lVar12 = *plVar1; lVar12 != lVar4; lVar12 = lVar12 + 0x28) {
            func_0x0001074da074(*(undefined8 *)(unaff_x19 + 0x18));
            func_0x0001074da0fc();
          }
        }
      }
    }
    func_0x0001074da1d8();
  }
  func_0x0001074da1b0();
  return;
}



/* Entry: 1074d7d08; end: 1074d80a7;  */

void FUN_1074d7d08(long param_1)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 in_ZR;
  int iVar9;
  double *pdVar10;
  undefined8 uVar11;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x9;
  long lVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  undefined8 uStack_f8;
  double dStack_f0;
  double dStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined2 uStack_d4;
  undefined2 uStack_d2;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined8 uStack_c4;
  undefined4 uStack_bc;
  undefined2 uStack_b8;
  double dStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  double dStack_a0;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  float fVar16;
  
  iVar9 = (int)*(undefined8 *)(param_1 + 0x28);
  FUN_107417d68();
  if (iVar9 != 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0x18);
    func_0x0001074da2a0();
    func_0x0001074da36c();
    lVar12 = *(long *)(param_1 + 0x30);
    fVar19 = *(float *)(lVar12 + 0x14f8);
    dVar4 = *(double *)(lVar12 + 0x14fc);
    dVar3 = *(double *)(lVar12 + 0x14fc);
    uVar18 = *(undefined4 *)(lVar12 + 0x1504);
    uVar17 = *(undefined4 *)(lVar12 + 0x1508);
    dVar5 = *(double *)(lVar12 + 0x1504);
    dStack_90 = 0.0;
    dStack_88 = 0.0;
    dStack_80 = 0.0;
    uStack_78 = 0x3ff0000000000000;
    func_0x0001074da3ac();
    func_0x0001074da394();
    dVar7 = dStack_e8;
    dVar15 = dStack_f0;
    dVar13 = (double)CONCAT26(uStack_d2,CONCAT24(uStack_d4,uStack_d8));
    auVar14 = NEON_fmov(0x3ff0000000000000,8);
    dStack_e8 = auVar14._8_8_;
    dStack_f0 = auVar14._0_8_;
    uStack_e0 = 0.0;
    lVar12 = *(long *)(param_1 + 0x28);
    func_0x0001074da3ac();
    pdVar10 = &dStack_b0;
    func_0x00010787680c(pdVar10,&dStack_f0,lVar12 + 0xc68);
    iVar9 = (int)pdVar10;
    dStack_88 = (double)(fVar19 * 1000.0) * 1.5696101377226164e-07 + 1.0;
    dStack_80 = dStack_88 * dStack_a0;
    dStack_90 = dStack_b0 * dStack_88;
    dStack_88 = (double)CONCAT44(uStack_a4,uStack_a8) * dStack_88;
    uStack_78 = 0x3ff0000000000000;
    func_0x0001074da3ac();
    func_0x0001074da394();
    func_0x0001074da2f8();
    dVar8 = dStack_e8;
    dVar6 = dStack_f0;
    if (((bool)in_ZR) && ((*(byte *)(param_1 + 0xb1) >> 1 & 1) != 0)) {
      bVar1 = true;
      uVar11 = 0x35;
    }
    else {
      bVar1 = false;
      uVar11 = 0x34;
    }
    dVar2 = (double)CONCAT26(uStack_d2,CONCAT24(uStack_d4,uStack_d8));
    func_0x0001074da2d4(uVar11);
    uStack_d4 = 0x504;
    uStack_d0 = 1;
    uStack_c4 = 0;
    uStack_cc = 0;
    uStack_bc = 0x1010101;
    uStack_b8 = 0xf01;
    func_0x0001074da534(&dStack_90);
    if (dStack_90 != 0.0) {
      func_0x0001074d9fec();
      (*extraout_x8)();
      if (iVar9 == 2) {
        func_0x0001074da1c0(*(undefined8 *)(param_1 + 0x18),dStack_90);
        (*extraout_x8_00)();
        dStack_f0 = (double)CONCAT53(dStack_f0._3_5_,0x10000);
        dStack_f0 = (double)CONCAT62(dStack_f0._2_6_,0x100);
        func_0x0001074da1cc(*(undefined8 *)(param_1 + 0x18));
        (*extraout_x8_01)();
        func_0x0001074da304();
        FUN_10745dadc(extraout_x8_02 + 0x338);
        func_0x0001074da654();
        func_0x0001074da3a4();
        func_0x0001074da304();
        func_0x00010745daf4(extraout_x8_03 + 0x300);
        func_0x0001074da250();
        func_0x0001074da008();
        dStack_b0 = 3.45845952088873e-323;
        uStack_a8 = 0x3f800000;
        func_0x0001074da5cc(7,*(undefined8 *)(param_1 + 0x18));
        uStack_e0._0_3_ = CONCAT12(1,(undefined2)uStack_e0);
        func_0x0001074da128();
        (*extraout_x8_04)();
        fVar19 = (float)(dVar15 / dVar13);
        fVar16 = (float)(dVar7 / dVar13);
        dVar15 = (double)CONCAT44(fVar16,fVar19);
        dVar13 = (double)CONCAT44((float)(dVar8 / dVar2 - (double)fVar16),
                                  (float)(dVar6 / dVar2 - (double)fVar19));
        if (bVar1) {
          lVar12 = *(long *)(*(long *)(param_1 + 0x98) + 0x250);
          if (lVar12 == 0) {
            func_0x0001074da094();
            (*extraout_x9)(&dStack_b0);
            dStack_f0 = 1.58101006669199e-322;
            dStack_e8 = dStack_b0;
            func_0x0001074da4c0();
            uVar11 = uStack_f8;
            uStack_f8 = 0;
            FUN_1074d9588(*(long *)(param_1 + 0x98) + 0x250,uVar11);
            func_0x0001074d9564(&uStack_f8);
            if (dStack_e8 != 0.0) {
              func_0x0001074d9fc8();
            }
            lVar12 = *(long *)(*(long *)(param_1 + 0x98) + 0x250);
          }
          uStack_d4 = (undefined2)uVar17;
          uStack_d2 = (undefined2)((uint)uVar17 >> 0x10);
          dStack_f0 = dVar15;
          dStack_e8 = dVar13;
          uStack_e0 = dVar3;
          uStack_d8 = uVar18;
          func_0x0001074da03c(lVar12);
          (*extraout_x8_05)();
          func_0x0001074da200(*(undefined8 *)(param_1 + 0x18));
          func_0x0001074da0d4();
        }
        else {
          dStack_f0 = dVar15;
          dStack_e8 = dVar13;
          func_0x0001074da3b4(*(undefined8 *)(param_1 + 0x18));
          func_0x0001074da0d4();
          dStack_f0 = dVar4;
          dStack_e8 = dVar5;
          func_0x0001074da3b4(*(undefined8 *)(param_1 + 0x18));
          func_0x0001074da0f4();
        }
        func_0x0001074da600();
        func_0x0001074da104();
        func_0x0001074da0fc();
      }
    }
    func_0x00010730b734(&dStack_90);
    func_0x0001074da1b0();
  }
  return;
}



/* Entry: 1074d80a8; end: 1074d82e3;  */

void FUN_1074d80a8(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  code *extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  uint uVar4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  long alStack_50 [2];
  
  if ((*(char *)((long)param_1 + 0xad) == '\x01') &&
     ((*(byte *)((long)param_1 + 0xb1) >> 3 & 1) != 0)) {
    bVar1 = true;
    uVar3 = 0x2d;
  }
  else {
    bVar1 = false;
    uVar3 = 0x2c;
  }
  iVar2 = (int)param_1[0x12];
  uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar3);
  uStack_e8 = 0;
  uStack_e0 = uStack_e0 & 0xffffffff00000000;
  func_0x0001074da160(*(undefined4 *)(param_1 + 0xf));
  func_0x0001074da528(alStack_50);
  if (alStack_50[0] != 0) {
    func_0x0001074d9fec();
    (*extraout_x8)();
    if (iVar2 == 2) {
      uStack_90 = *param_2;
      uStack_8c = param_2[1];
      uStack_80 = *param_3;
      uStack_6c = param_3[1];
      uStack_88 = 0;
      uStack_78 = 0;
      uStack_68 = 0;
      uStack_58 = 0;
      uStack_7c = uStack_8c;
      uStack_70 = uStack_80;
      uStack_60 = uStack_90;
      uStack_5c = uStack_6c;
      func_0x0001074da5e0(param_1[3]);
      func_0x0001074da5b8(7);
      uStack_e0._0_3_ = CONCAT12(1,(undefined2)uStack_e0);
      func_0x0001074da128();
      func_0x0001074da4dc();
      uStack_f0 = CONCAT53(uStack_f0._3_5_,0x10000);
      uStack_f0 = CONCAT62(uStack_f0._2_6_,0x100);
      func_0x0001074da1cc(param_1[3]);
      func_0x0001074da4cc();
      func_0x0001074da1c0(param_1[3],alStack_50[0]);
      (*extraout_x8_00)();
      func_0x0001074da284();
      (**(code **)(extraout_x9 + 0x58))();
      func_0x0001074da284();
      func_0x0001074da4b4();
      if (bVar1) {
        uStack_f0 = CONCAT44(uStack_8c,uStack_90);
        uStack_e0 = CONCAT44(uStack_7c,uStack_80);
        uStack_e8 = uStack_88;
        uStack_d8 = uStack_78;
        uStack_d0 = CONCAT44(uStack_6c,uStack_70);
        uStack_c0 = CONCAT44(uStack_5c,uStack_60);
        uStack_c8 = uStack_68;
        uStack_b8 = uStack_58;
        uStack_a8 = 0x3f800000;
        uStack_b0 = 0;
        if (param_4 == 0) {
          uStack_a8 = 0;
          uStack_b0 = 0x3f800000;
        }
        uStack_ac = 0;
        uStack_a4 = 0x3f000000;
        FUN_1074d82e4(param_1[0x34],*param_1,&uStack_f0);
        func_0x0001074da3e0();
        func_0x0001074da008();
      }
      else {
        func_0x0001074da198();
        func_0x0001074da4f0(*(undefined8 *)(extraout_x8_01 + 0xf8));
        uVar4 = 0;
        uVar3 = 0x3f800000;
        if (param_4 == 0) {
          uVar4 = 0x3f800000;
          uVar3 = 0;
        }
        uStack_f0 = (ulong)uVar4;
        uStack_e8 = CONCAT44(0x3f000000,uVar3);
        func_0x0001074da3b4(param_1[3]);
        func_0x0001074da0f4();
      }
      uStack_f0 = CONCAT71(uStack_f0._1_7_,3);
      uStack_f0 = CONCAT44(0x3f800000,(undefined4)uStack_f0);
      func_0x0001074da104(param_1[3]);
      func_0x0001074da0fc();
    }
  }
  func_0x00010730b734(alStack_50);
  return;
}



/* Entry: 1074d82e4; end: 1074d8433;  */

long * FUN_1074d82e4(uint *param_1,long *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long **pplVar4;
  undefined8 uVar5;
  long *plVar6;
  code *extraout_x8;
  uint *puVar7;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [16];
  long *plStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar2 = *param_1;
  puVar7 = param_1 + (ulong)uVar2 * 6 + 2;
  plStack_48 = (long *)0x0;
  uStack_40 = 0;
  if ((ulong)param_1[1] < (ulong)(*(long *)(param_1 + (ulong)uVar2 * 6 + 4) - *(long *)puVar7 >> 4))
  {
    puVar1 = (undefined8 *)(*(long *)puVar7 + (ulong)param_1[1] * 0x10);
    plVar6 = (long *)*puVar1;
    if (*plVar6 != 0x50) goto LAB_1074d8344;
    pplVar4 = &plStack_48;
    uVar5 = puVar1[1];
  }
  else {
LAB_1074d8344:
    (**(code **)(*param_2 + 0xa8))(&lStack_38,param_2,0x50);
    uStack_68 = 0x50;
    lStack_60 = lStack_38;
    func_0x000107308d88(auStack_58,&uStack_68);
    func_0x000107308dac(&plStack_48,auStack_58);
    func_0x00010730b284(auStack_58);
    lVar3 = lStack_60;
    lStack_60 = 0;
    if (lVar3 != 0) {
      func_0x0001074d9fc8();
    }
    if ((ulong)(*(long *)(param_1 + (ulong)uVar2 * 6 + 4) - *(long *)puVar7 >> 4) <=
        (ulong)param_1[1]) {
      FUN_1074d9ce8(puVar7,plStack_48,uStack_40);
      goto LAB_1074d83c8;
    }
    pplVar4 = (long **)(*(long *)puVar7 + (ulong)param_1[1] * 0x10);
    plVar6 = plStack_48;
    uVar5 = uStack_40;
  }
  func_0x0001074d9ca4(pplVar4,plVar6,uVar5);
LAB_1074d83c8:
  func_0x0001074da03c(plStack_48);
  (*extraout_x8)();
  plVar6 = plStack_48;
  param_1[1] = param_1[1] + 1;
  func_0x00010730b284(&plStack_48);
  return plVar6;
}



/* Entry: 1074d8434; end: 1074d894f;  */

void FUN_1074d8434(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,double *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  int iVar14;
  undefined8 uVar15;
  long **pplVar16;
  long *plVar17;
  undefined4 extraout_w8;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  code *extraout_x8_06;
  code *extraout_x8_07;
  long extraout_x8_08;
  code *extraout_x8_09;
  code *extraout_x8_10;
  long lVar18;
  long extraout_x9;
  long extraout_x9_00;
  uint *puVar19;
  long *plVar20;
  uint *puVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined1 uStack_188;
  undefined1 uStack_187;
  undefined1 uStack_186;
  undefined1 uStack_185;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  ushort uStack_178;
  undefined1 uStack_176;
  undefined1 uStack_175;
  float fStack_174;
  undefined8 uStack_170;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  undefined8 uStack_140;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined8 uStack_128;
  float fStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  float fStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long alStack_b8 [2];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [16];
  long alStack_88 [3];
  
  bVar3 = *(byte *)(param_1[5] + 0xa94);
  if ((*(char *)((long)param_1 + 0xad) == '\x01') &&
     ((*(byte *)((long)param_1 + 0xb1) >> 3 & 1) != 0)) {
    bVar4 = true;
    uStack_188 = 0x31;
    lVar18 = 0x150;
  }
  else {
    bVar4 = false;
    uStack_188 = 0x30;
    lVar18 = 0x80;
  }
  uVar15 = param_1[0x12];
  uStack_187 = 0;
  uStack_186 = 0;
  uStack_185 = 0;
  fStack_180 = 0.0;
  fStack_17c = 0.0;
  uStack_178 = (ushort)bVar3;
  uStack_176 = 0;
  uStack_175 = 0;
  fStack_174 = *(float *)(param_1 + 0xf);
  uVar5 = (ulong)uStack_170 >> 0x30;
  uVar2 = (uint)uStack_170;
  uStack_170._0_6_ = CONCAT24(0x501,uVar2 & 0xff000000);
  uStack_170 = CONCAT26((short)uVar5,(undefined6)uStack_170);
  fStack_168 = 1.4013e-45;
  fStack_15c = 0.0;
  fStack_158 = 0.0;
  fStack_164 = 0.0;
  fStack_160 = 0.0;
  fStack_154 = 2.3694278e-38;
  fStack_150 = (float)CONCAT22(fStack_150._2_2_,0xf01);
  FUN_1073ca29c(alStack_b8,uVar15,param_1[0x11] + lVar18 + (ulong)bVar3 * 0x10,&uStack_188);
  iVar14 = (int)uVar15;
  if (alStack_b8[0] == 0) goto LAB_1074d88c4;
  func_0x0001074d9fec();
  (*extraout_x8)();
  if (iVar14 != 2) goto LAB_1074d88c4;
  func_0x0001074da260();
  uStack_1c8 = CONCAT44(uStack_1c8._4_4_,extraout_w8);
  fStack_184 = 9.80909e-45;
  fStack_180 = 0.0;
  fStack_17c = 0.0;
  uStack_178 = 0x101;
  uStack_176 = 1;
  func_0x0001074da128();
  (*extraout_x8_00)();
  uStack_186 = 1;
  uStack_188 = 0;
  uStack_187 = 1;
  func_0x0001074da1cc(param_1[3]);
  (*extraout_x8_01)();
  func_0x0001074da1c0(param_1[3],alStack_b8[0]);
  (*extraout_x8_02)();
  func_0x0001074da284();
  (**(code **)(extraout_x9 + 0x58))();
  func_0x0001074da284();
  (**(code **)(extraout_x9_00 + 0x60))();
  uVar12 = uStack_185;
  uVar10 = uStack_186;
  uVar8 = uStack_187;
  uVar6 = uStack_188;
  fVar24 = (float)*param_6;
  fVar25 = (float)param_6[1];
  fVar27 = (float)param_6[2];
  fVar22 = (float)param_6[3];
  fVar23 = (float)param_6[4];
  uVar15 = CONCAT44(fVar23,fVar22);
  fVar26 = (float)param_6[5];
  uStack_188 = SUB41(fVar24,0);
  uVar7 = uStack_188;
  uStack_187 = (undefined1)((uint)fVar24 >> 8);
  uVar9 = uStack_187;
  uStack_186 = (undefined1)((uint)fVar24 >> 0x10);
  uVar11 = uStack_186;
  uStack_185 = (undefined1)((uint)fVar24 >> 0x18);
  uVar13 = uStack_185;
  if (bVar4) {
    plVar20 = (long *)param_1[3];
    uStack_188 = uVar6;
    uStack_187 = uVar8;
    uStack_186 = uVar10;
    uStack_185 = uVar12;
    func_0x0001074da230(param_1,param_3);
    func_0x0001074da0f4(*(undefined8 *)(*plVar20 + 0x90),plVar20);
    if (bVar3 != 0) {
      func_0x0001074d9fd4();
      func_0x0001074da1b8();
    }
    fStack_17c = 1.0;
    uStack_178 = SUB42(fVar22,0);
    uStack_176 = (undefined1)((uint)fVar22 >> 0x10);
    uStack_175 = (undefined1)((uint)fVar22 >> 0x18);
    uStack_170 = CONCAT44(0x3f800000,fVar27);
    fStack_15c = 1.0;
    uStack_118 = CONCAT44(fVar23,fVar24);
    fStack_14c = 1.0;
    uStack_140 = CONCAT44(0x3f800000,fVar26);
    fStack_12c = 1.0;
    uStack_11c = 0x3f800000;
    uStack_10c = 0x3f800000;
    uStack_e0 = param_2[5];
    uStack_e8 = param_2[4];
    uStack_d0 = param_2[7];
    uStack_d8 = param_2[6];
    uStack_100 = param_2[1];
    uStack_108 = *param_2;
    uStack_f0 = param_2[3];
    uStack_f8 = param_2[2];
    uStack_c0 = param_7[1];
    uStack_c8 = *param_7;
    plVar20 = (long *)param_1[3];
    puVar21 = (uint *)param_1[0x34];
    uVar2 = *puVar21;
    plStack_1d0 = (long *)0x0;
    uStack_1c8 = 0;
    puVar19 = puVar21 + (ulong)uVar2 * 6 + 2;
    uStack_188 = uVar7;
    uStack_187 = uVar9;
    uStack_186 = uVar11;
    uStack_185 = uVar13;
    fStack_174 = fVar25;
    fStack_168 = fVar22;
    fStack_164 = fVar23;
    fStack_160 = fVar27;
    fStack_154 = fVar23;
    fStack_150 = fVar27;
    fStack_148 = fVar24;
    fStack_144 = fVar25;
    fStack_138 = fVar22;
    fStack_134 = fVar25;
    fStack_130 = fVar26;
    uStack_128 = uVar15;
    fStack_120 = fVar26;
    fStack_110 = fVar26;
    if ((ulong)puVar21[1] <
        (ulong)(*(long *)(puVar21 + (ulong)uVar2 * 6 + 4) - *(long *)puVar19 >> 4)) {
      puVar1 = (undefined8 *)(*(long *)puVar19 + (ulong)puVar21[1] * 0x10);
      plVar17 = (long *)*puVar1;
      if (*plVar17 != 0xd0) goto LAB_1074d87e4;
      pplVar16 = &plStack_1d0;
      uVar15 = puVar1[1];
      fStack_184 = fVar25;
      fStack_180 = fVar27;
      fStack_158 = fVar24;
LAB_1074d8850:
      func_0x0001074d9ca4(pplVar16,plVar17,uVar15);
    }
    else {
LAB_1074d87e4:
      fStack_184 = fVar25;
      fStack_180 = fVar27;
      fStack_158 = fVar24;
      (**(code **)(*(long *)*param_1 + 0xa8))(alStack_88,(long *)*param_1,0xd0);
      uStack_a8 = 0xd0;
      lStack_a0 = alStack_88[0];
      func_0x000107308d88(auStack_98,&uStack_a8);
      func_0x000107308dac(&plStack_1d0,auStack_98);
      func_0x00010730b284(auStack_98);
      lVar18 = lStack_a0;
      lStack_a0 = 0;
      if (lVar18 != 0) {
        func_0x0001074d9fc8();
      }
      if ((ulong)puVar21[1] <
          (ulong)(*(long *)(puVar21 + (ulong)uVar2 * 6 + 4) - *(long *)puVar19 >> 4)) {
        pplVar16 = (long **)(*(long *)puVar19 + (ulong)puVar21[1] * 0x10);
        plVar17 = plStack_1d0;
        uVar15 = uStack_1c8;
        goto LAB_1074d8850;
      }
      FUN_1074d9ce8(puVar19,plStack_1d0,uStack_1c8);
    }
    func_0x0001074da03c(plStack_1d0);
    (*extraout_x8_10)();
    puVar21[1] = puVar21[1] + 1;
    func_0x00010730b284(&plStack_1d0);
    func_0x0001074da4fc(*(undefined8 *)(*plVar20 + 0x90),plVar20);
  }
  else {
    uStack_178 = SUB42(fVar25,0);
    uStack_176 = (undefined1)((uint)fVar25 >> 0x10);
    uStack_175 = (undefined1)((uint)fVar25 >> 0x18);
    fStack_184 = fVar25;
    fStack_180 = fVar27;
    fStack_17c = fVar22;
    fStack_174 = fVar27;
    uStack_170 = uVar15;
    fStack_168 = fVar27;
    fStack_164 = fVar24;
    fStack_160 = fVar23;
    fStack_15c = fVar27;
    fStack_158 = fVar24;
    fStack_154 = fVar25;
    fStack_150 = fVar26;
    fStack_14c = fVar22;
    fStack_148 = fVar25;
    fStack_144 = fVar26;
    uStack_140 = uVar15;
    fStack_138 = fVar26;
    fStack_134 = fVar24;
    fStack_130 = fVar23;
    fStack_12c = fVar26;
    func_0x0001074da198();
    func_0x0001074da4fc(*(undefined8 *)(extraout_x8_03 + 0xd0));
    func_0x0001074da198();
    (**(code **)(extraout_x8_04 + 0xd0))();
    if ((ulong)bVar3 != 0) {
      func_0x0001074da198();
      (**(code **)(extraout_x8_05 + 0xb8))();
      func_0x0001074da5ac();
      func_0x0001074da354();
      func_0x0001074da540(&plStack_1d0);
      func_0x0001074da320();
      (*extraout_x8_06)(param_2,4,&plStack_1d0);
      func_0x0001074d9fb0();
      func_0x0001074da1a4();
      (*extraout_x8_07)();
    }
    func_0x0001074da198();
    (**(code **)(extraout_x8_08 + 0xf0))();
    uStack_1c8 = param_7[1];
    plStack_1d0 = (long *)*param_7;
    func_0x0001074da3b4(param_1[3]);
    (*extraout_x8_09)();
  }
  uStack_188 = 1;
  fStack_184 = 1.0;
  func_0x0001074da104(param_1[3]);
  func_0x0001074da0fc();
LAB_1074d88c4:
  func_0x00010730b734(alStack_b8);
  return;
}



/* Entry: 1074d8950; end: 1074d89f3;  */

void FUN_1074d8950(float param_1,long param_2,float *param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float *pfStack_58;
  float *pfStack_50;
  
  func_0x0001072a77dc(&pfStack_58,*(long *)(param_2 + 0x48) + 0x3e0);
  fVar1 = param_3[2];
  for (; pfStack_58 != pfStack_50; pfStack_58 = pfStack_58 + 2) {
    fVar2 = param_3[1];
    *pfStack_58 = *param_3 + fVar1 * *pfStack_58;
    pfStack_58[1] = fVar2 + param_1 * fVar1 * pfStack_58[1];
  }
  FUN_1074d89f4(param_2,&pfStack_58,param_4);
  func_0x0001072a7938(&pfStack_58);
  return;
}



/* Entry: 1074d89f4; end: 1074d8c5f;  */

void FUN_1074d89f4(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  code *extraout_x8;
  code *extraout_x8_00;
  ulong uVar9;
  long *plVar10;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long alStack_80 [2];
  
  if ((*(char *)((long)param_1 + 0xad) == '\x01') &&
     ((*(byte *)((long)param_1 + 0xb1) >> 3 & 1) != 0)) {
    bVar6 = true;
    uVar8 = 0x2d;
  }
  else {
    bVar6 = false;
    uVar8 = 0x2c;
  }
  iVar7 = (int)param_1[0x12];
  uStack_110 = CONCAT44(uStack_110._4_4_,uVar8);
  uStack_108 = 0;
  uStack_100 = uStack_100 & 0xffffffff00000000;
  func_0x0001074da160(*(undefined4 *)(param_1 + 0xf));
  func_0x0001074da528(alStack_80);
  if (alStack_80[0] != 0) {
    func_0x0001074d9fec();
    (*extraout_x8)();
    if (iVar7 == 2) {
      func_0x0001074da5e0(param_1[3]);
      func_0x0001074da5b8(7);
      uStack_100._0_3_ = CONCAT12(1,(undefined2)uStack_100);
      func_0x0001074da128();
      func_0x0001074da4dc();
      uStack_110 = CONCAT53(uStack_110._3_5_,0x10000);
      uStack_110 = CONCAT62(uStack_110._2_6_,0x100);
      func_0x0001074da1cc(param_1[3]);
      func_0x0001074da4cc();
      func_0x0001074da1c0(param_1[3],alStack_80[0]);
      (*extraout_x8_00)();
      (**(code **)(*(long *)param_1[3] + 0x58))((long *)param_1[3],param_1[9] + 400);
      func_0x0001074da4b4(param_1[9]);
      uVar9 = 0;
      while( true ) {
        lVar5 = *param_2;
        uVar1 = param_2[1] - lVar5 >> 3;
        if (uVar1 <= uVar9) break;
        uVar2 = uVar9 + 2;
        if (uVar1 <= uVar2) {
          uVar2 = 0;
        }
        uVar3 = uVar9 + 3;
        uStack_c0 = *(undefined8 *)(lVar5 + uVar9 * 8);
        if (uVar1 <= uVar3) {
          uVar3 = 0;
        }
        uStack_b8 = 0;
        lVar4 = 0;
        if (uVar9 + 1 < uVar1) {
          lVar4 = uVar9 + 1;
        }
        uStack_b0 = *(ulong *)(lVar5 + lVar4 * 8);
        uStack_a8 = 0;
        uStack_a0 = *(undefined8 *)(lVar5 + uVar2 * 8);
        uStack_98 = 0;
        uStack_90 = *(undefined8 *)(lVar5 + uVar3 * 8);
        uStack_88 = 0;
        if (bVar6) {
          uStack_108 = 0;
          uStack_f8 = 0;
          uStack_e8 = 0;
          uStack_d8 = 0;
          uStack_c8 = param_3[1];
          uStack_d0 = *param_3;
          plVar10 = (long *)param_1[3];
          uStack_110 = uStack_c0;
          uStack_100 = uStack_b0;
          uStack_f0 = uStack_a0;
          uStack_e0 = uStack_90;
          FUN_1074d82e4(param_1[0x34],*param_1,&uStack_110);
          func_0x0001074da0d4(*(undefined8 *)(*plVar10 + 0x90),plVar10);
        }
        else {
          func_0x0001074da4f0(*(undefined8 *)(*(long *)param_1[3] + 0xf8));
          uStack_108 = param_3[1];
          uStack_110 = *param_3;
          func_0x0001074da3b4(param_1[3]);
          func_0x0001074da0f4();
        }
        uStack_110 = CONCAT71(uStack_110._1_7_,3);
        uStack_110 = CONCAT44(0x3f800000,(undefined4)uStack_110);
        func_0x0001074da104(param_1[3]);
        func_0x0001074da0fc();
        uVar9 = uVar9 + 3;
      }
    }
  }
  func_0x00010730b734(alStack_80);
  return;
}



/* Entry: 1074d8c60; end: 1074d8d3b;  */

void FUN_1074d8c60(long *param_1,undefined8 *param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  
  plVar4 = param_1 + 1;
  plVar5 = plVar4;
  plVar1 = (long *)*plVar4;
joined_r0x0001074d8c88:
  do {
    if (plVar1 == (long *)0x0) {
LAB_1074d8cd4:
      puVar3 = (undefined8 *)0x30;
      __Znwm();
      uVar6 = *param_2;
      *(undefined8 *)((long)puVar3 + 0x24) = param_2[1];
      *(undefined8 *)((long)puVar3 + 0x1c) = uVar6;
      *(undefined4 *)((long)puVar3 + 0x2c) = param_3;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = plVar5;
      *plVar4 = (long)puVar3;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
      }
      func_0x00010002c5b0(param_1[1],puVar3);
      param_1[2] = param_1[2] + 1;
      return;
    }
    puVar3 = param_2;
    FUN_1074d0418(param_2,(long)plVar1 + 0x1c);
    plVar5 = plVar1;
    if (((uint)puVar3 >> 7 & 1) == 0) {
      lVar2 = (long)plVar1 + 0x1c;
      FUN_1074d0418(lVar2,param_2);
      if (((uint)lVar2 >> 7 & 1) == 0) {
        if (*plVar4 != 0) {
          return;
        }
        goto LAB_1074d8cd4;
      }
      plVar4 = plVar1 + 1;
      plVar1 = (long *)*plVar4;
      goto joined_r0x0001074d8c88;
    }
    plVar4 = plVar1;
    plVar1 = (long *)*plVar1;
  } while( true );
}



/* Entry: 1074d8d3c; end: 1074d9163;  */

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_1074d8d3c(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 *******param_5)

{
  short sVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 ******ppppppuVar8;
  undefined8 ******ppppppuVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  undefined8 *******pppppppuVar12;
  short extraout_w8;
  code *extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  long lVar13;
  undefined8 ******ppppppuVar14;
  long lVar15;
  undefined8 ******ppppppuVar16;
  long lVar17;
  ulong uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  ulong uVar22;
  undefined8 ******ppppppuStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined2 uStack_148;
  undefined1 uStack_146;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined2 uStack_128;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 *******pppppppuStack_a0;
  undefined8 *******pppppppuStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long alStack_78 [2];
  undefined8 ******ppppppuStack_68;
  
  ppppppuVar16 = &ppppppuStack_160;
  if (*(char *)((long)param_5 + 0xb5) != '\x01') {
    return 1;
  }
  ppppppuVar8 = param_5[5];
  bVar3 = *(byte *)((long)ppppppuVar8 + 0xa94);
  uVar18 = (ulong)bVar3;
  bVar5 = bVar3 == 1;
  if (bVar5) {
    FUN_1074178c4();
    bVar5 = (int)ppppppuVar8 == 0;
    bVar4 = bVar5;
  }
  else {
    bVar4 = false;
  }
  func_0x0001074da2f8();
  if ((bVar5) && ((*(byte *)((long)param_5 + 0xb1) >> 1 & 1) != 0)) {
    ppppppuVar8 = param_5[0x11] + 0x16;
    bVar5 = true;
    uVar20 = 4;
    uVar19 = 4;
  }
  else {
    bVar5 = false;
    ppppppuVar8 = param_5[0x11];
    uVar19 = 1;
    uVar20 = 3;
  }
  ppppppuStack_68 = param_5[3];
  func_0x0001074da2a0();
  func_0x0001074da36c();
  ppppppuVar9 = param_5[0x12];
  ppppppuStack_160 = (undefined8 ******)CONCAT44(ppppppuStack_160._4_4_,uVar20);
  uStack_158 = (undefined8 ******)0x0;
  if (bVar3 == 0) {
    uVar19 = 0;
  }
  uStack_14c = *(undefined4 *)(param_5 + 0xf);
  uStack_148 = 0;
  uStack_146 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_140 = 0;
  uStack_128 = 0xf01;
  uStack_150 = uVar19;
  FUN_1073ca29c(alStack_78,ppppppuVar9,ppppppuVar8 + uVar18 * 2,&ppppppuStack_160);
  iVar7 = (int)ppppppuVar9;
  if (alStack_78[0] != 0) {
    func_0x0001074d9fec();
    (*extraout_x8)();
    uVar6 = iVar7 == 2;
    if ((bool)uVar6) {
      func_0x0001074da1c0(param_5[3],alStack_78[0]);
      (*extraout_x8_00)();
      func_0x0001074da3f0();
      sVar1 = extraout_w8;
      if (!(bool)uVar6) {
        sVar1 = extraout_w8 + 1;
      }
      ppppppuStack_160 = (undefined8 ******)CONCAT53(ppppppuStack_160._3_5_,0x10000);
      ppppppuStack_160 = (undefined8 ******)CONCAT62(ppppppuStack_160._2_6_,sVar1);
      func_0x0001074da1cc();
      func_0x0001074da4cc();
      func_0x0001074da2b8();
      func_0x0001074da1e8();
      func_0x0001074da654();
      func_0x0001074da3a4();
      func_0x0001074da2b8();
      func_0x0001074da1f0();
      func_0x0001074da250();
      func_0x0001074da008();
      pppppppuVar10 = (undefined8 *******)param_5[3];
      uStack_e0._0_2_ = 0x107;
      uVar21 = NEON_fmov(0x3f800000,4);
      uStack_e0._4_4_ = (undefined4)uVar21;
      uStack_d8 = (undefined4)((ulong)uVar21 >> 0x20);
      uVar22 = 0x5000000ff;
      uStack_158 = (undefined8 ******)0xff000000ff;
      ppppppuStack_160 = (undefined8 ******)0x5000000ff;
      uStack_150 = CONCAT13(uStack_150._3_1_,0x50101);
      func_0x0001074da128();
      func_0x0001074da4dc();
      if (bVar5) {
        if (uVar18 != 0) {
          func_0x0001074d9fd4();
          func_0x0001074da310();
        }
        func_0x0001074da548();
        uStack_e0._0_2_ = 0;
        pppppppuVar11 = pppppppuVar10;
        func_0x0001074da55c(&ppppppuStack_160);
        ppppppuVar8 = uStack_158;
        lVar13 = 0x3c8;
        ppppppuVar9 = ppppppuStack_160;
        if (!bVar4) {
          lVar13 = 0x3b0;
        }
        for (; ppppppuVar9 != ppppppuVar8; ppppppuVar9 = ppppppuVar9 + 2) {
          func_0x0001074da564();
          uStack_e0._0_2_ = SUB82(pppppppuVar10,0);
          uStack_e0._2_2_ = (undefined2)((ulong)pppppppuVar10 >> 0x10);
          uStack_e0._4_4_ = (undefined4)((ulong)pppppppuVar10 >> 0x20);
          uStack_d8 = SUB84(pppppppuVar11,0);
          uStack_d4 = (undefined4)((ulong)pppppppuVar11 >> 0x20);
          ppppppuVar14 = param_5[3];
          pppppppuVar11 = (undefined8 *******)&uStack_e0;
          pppppppuVar10 = param_5;
          func_0x0001074da230();
          func_0x0001074da0a4((*ppppppuVar14)[0x12]);
          lVar17 = ((long *)((long)param_5[9] + lVar13))[1];
          for (lVar15 = *(long *)((long)param_5[9] + lVar13); lVar15 != lVar17;
              lVar15 = lVar15 + 0x28) {
            pppppppuVar10 = (undefined8 *******)param_5[3];
            uStack_90._0_4_ = CONCAT31(uStack_90._1_3_,4);
            uStack_90._4_4_ = 0;
            func_0x0001074da074();
            pppppppuVar11 = (undefined8 *******)&uStack_90;
            func_0x0001074da0fc();
          }
        }
      }
      else {
        if (uVar18 != 0) {
          pppppppuVar10 = (undefined8 *******)param_5[3];
          ppppppuVar16 = param_5[5];
          func_0x0001074da4d4();
          func_0x000107482794(&ppppppuStack_160,ppppppuVar16 + 0x154);
          func_0x0001074da494();
          func_0x0001074da1b8();
          func_0x0001074d9fb0();
          if ((bool)uVar6) {
            uVar22 = (ulong)*(uint *)(extraout_x8_01 + 0xa90);
          }
          func_0x0001074da1a4();
          func_0x0001074da238();
          func_0x0001074da0dc();
          func_0x0001074da0c8();
        }
        func_0x0001074da548();
        ppppppuStack_160 = (undefined8 ******)((ulong)ppppppuStack_160 & 0xffffffffffff0000);
        pppppppuVar11 = pppppppuVar10;
        func_0x0001074da55c(&uStack_90);
        lVar13 = CONCAT44(uStack_90._4_4_,(undefined4)uStack_90);
        lVar15 = 0x3c8;
        if (!bVar4) {
          lVar15 = 0x3b0;
        }
        for (; lVar13 != lStack_88; lVar13 = lVar13 + 0x10) {
          func_0x0001074da564();
          pppppppuVar12 = &pppppppuStack_a0;
          pppppppuStack_a0 = pppppppuVar10;
          pppppppuStack_98 = pppppppuVar11;
          func_0x0001074da0b0(&ppppppuStack_160,param_5);
          pppppppuVar10 = &ppppppuStack_160;
          func_0x000107482794(&uStack_e0);
          func_0x0001074da320();
          func_0x0001074d9ffc();
          pppppppuVar11 = pppppppuVar12;
          if (uVar18 != 0) {
            ppppppuVar16 = param_5[3];
            pppppppuVar10 = (undefined8 *******)param_5[5];
            pppppppuVar11 = &pppppppuStack_a0;
            func_0x0001074da1e0();
            ppppppuStack_160 = (undefined8 ******)CONCAT44(param_2,(int)uVar22);
            uStack_158 = (undefined8 ******)CONCAT44(param_4,param_3);
            func_0x0001074da0a4((*ppppppuVar16)[0x17]);
          }
          lVar2 = ((long *)((long)param_5[9] + lVar15))[1];
          for (lVar17 = *(long *)((long)param_5[9] + lVar15); lVar17 != lVar2;
              lVar17 = lVar17 + 0x28) {
            pppppppuVar10 = (undefined8 *******)param_5[3];
            ppppppuStack_160 = (undefined8 ******)CONCAT71(ppppppuStack_160._1_7_,4);
            ppppppuStack_160 = (undefined8 ******)((ulong)ppppppuStack_160 & 0xffffffff);
            func_0x0001074da074();
            pppppppuVar11 = &ppppppuStack_160;
            func_0x0001074da0fc();
          }
        }
        ppppppuVar16 = (undefined8 ******)&uStack_90;
      }
      func_0x0001072ba1a8(ppppppuVar16);
      uVar21 = 1;
      goto LAB_1074d90d8;
    }
  }
  uVar21 = 0;
LAB_1074d90d8:
  func_0x0001074da1d8();
  func_0x0001074da1b0();
  return uVar21;
}



/* Entry: 1074d9164; end: 1074d940f;  */

void FUN_1074d9164(long param_1,char *param_2)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  code *extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  code *extraout_x8_09;
  code *extraout_x9;
  long unaff_x19;
  long lVar5;
  long lStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long alStack_48 [2];
  undefined8 uStack_38;
  
  uVar2 = *param_2 == '\x01';
  if ((bool)uVar2) {
    func_0x0001074da614();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uStack_38 = uVar4;
    func_0x0001074da2a0();
    iVar3 = (int)uVar4;
    (*extraout_x8)();
    func_0x0001074da2f8();
    if (((bool)uVar2) && ((*(byte *)(unaff_x19 + 0xb1) >> 1 & 1) != 0)) {
      bVar1 = true;
      uVar4 = 0x33;
    }
    else {
      bVar1 = false;
      uVar4 = 0x32;
    }
    func_0x0001074da2d4(uVar4);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0x101010100000000;
    uStack_58 = CONCAT62(uStack_58._2_6_,0xf01);
    func_0x0001074da534(alStack_48);
    if (alStack_48[0] != 0) {
      func_0x0001074d9fec();
      (*extraout_x8_00)();
      if (iVar3 == 2) {
        func_0x0001074da1c0(*(undefined8 *)(unaff_x19 + 0x18),alStack_48[0]);
        (*extraout_x8_01)();
        lStack_90 = CONCAT53(lStack_90._3_5_,0x10000);
        lStack_90 = CONCAT62(lStack_90._2_6_,1);
        func_0x0001074da1cc(*(undefined8 *)(unaff_x19 + 0x18));
        (*extraout_x8_02)();
        lStack_d8 = 7;
        uStack_d0 = 0x3f800000;
        func_0x0001074da5cc(7,*(undefined8 *)(unaff_x19 + 0x18));
        uStack_80._0_3_ = CONCAT12(1,(undefined2)uStack_80);
        func_0x0001074da128();
        (*extraout_x8_03)();
        func_0x0001074da2c8();
        FUN_10745dadc(extraout_x8_04 + 0x280);
        func_0x0001074da58c();
        func_0x0001074da34c();
        func_0x0001074da2c8();
        func_0x00010745daf4(extraout_x8_05 + 0x2a0);
        func_0x0001074da240();
        func_0x0001074d9ffc();
        if (bVar1) {
          if (*(long *)(*(long *)(unaff_x19 + 0x98) + 0x248) == 0) {
            func_0x0001074da094();
            (*extraout_x9)(&lStack_d8);
            lStack_90 = 0x40;
            lStack_88 = lStack_d8;
            func_0x0001074da4c0();
            uVar4 = uStack_98;
            uStack_98 = 0;
            FUN_1074d9588(*(long *)(unaff_x19 + 0x98) + 0x248,uVar4);
            func_0x0001074d9564(&uStack_98);
            if (lStack_88 != 0) {
              func_0x0001074d9fc8();
            }
          }
          lVar5 = *(long *)(unaff_x19 + 0x28);
          func_0x0001074da4d4();
          func_0x000107482794(&lStack_d8,lVar5 + 0xa10);
          lStack_88 = CONCAT44(uStack_cc,uStack_d0);
          lStack_90 = lStack_d8;
          uStack_78 = uStack_c0;
          uStack_80 = uStack_c8;
          uStack_68 = uStack_b0;
          uStack_70 = uStack_b8;
          uStack_58 = uStack_a0;
          uStack_60 = uStack_a8;
          func_0x0001074da03c(*(undefined8 *)(*(long *)(unaff_x19 + 0x98) + 0x248));
          (*extraout_x8_06)();
          func_0x0001074da200(*(undefined8 *)(unaff_x19 + 0x18));
          func_0x0001074da0d4();
          func_0x0001074da198();
          func_0x0001074da4e4(*(undefined8 *)(extraout_x8_07 + 0x70));
        }
        else {
          func_0x0001074da5ac();
          func_0x0001074da354();
          func_0x000107482794(&lStack_90,0xa10);
          func_0x0001074da320();
          func_0x0001074d9ffc();
          func_0x0001074da198();
          func_0x0001074da4e4(*(undefined8 *)(extraout_x8_08 + 0x70));
        }
        func_0x0001074da600();
        func_0x0001074da104();
        (*extraout_x8_09)();
      }
    }
    func_0x00010730b734(alStack_48);
    FUN_10748eeb8(&uStack_38);
  }
  return;
}



/* Entry: 1074d9410; end: 1074d94a7;  */

long FUN_1074d9410(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  func_0x0001074da614();
  FUN_1074934c4();
  FUN_10749358c(auStack_48,param_1,unaff_x19[1] - *unaff_x19 >> 4,unaff_x19 + 2);
  uVar2 = *unaff_x20;
  puStack_38[1] = unaff_x20[1];
  *puStack_38 = uVar2;
  puStack_38 = puStack_38 + 2;
  FUN_107493504();
  lVar1 = unaff_x19[1];
  FUN_107493614(auStack_48);
  return lVar1;
}



/* Entry: 1074d94a8; end: 1074d9587;  */

long * FUN_1074d94a8(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  *param_1 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  return param_1;
}



/* Entry: 1074d9588; end: 1074d959f;  */

void FUN_1074d9588(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x00010730ae5c(lVar1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1074d95a0; end: 1074d960b;  */

void FUN_1074d95a0(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010730ae5c(param_2 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1074d960c; end: 1074d96ab;  */

long FUN_1074d960c(long param_1)

{
  long unaff_x19;
  uint unaff_w20;
  
  func_0x0001074da614();
  func_0x0001074d9658();
  if ((unaff_x19 + 8 == param_1) || (FUN_1074d0418(), (unaff_w20 >> 7 & 1) != 0)) {
    param_1 = unaff_x19 + 8;
  }
  return param_1;
}



/* Entry: 1074d96ac; end: 1074d9773;  */

long FUN_1074d96ac(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x000100102e7c();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
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
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x0001000e107c(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 1074d9774; end: 1074d998f;  */

undefined1  [16] FUN_1074d9774(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long lVar6;
  undefined8 extraout_x9;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *unaff_x27;
  ulong uVar10;
  undefined1 auVar11 [16];
  long *aplStack_78 [3];
  
  plVar7 = param_1 + 3;
  func_0x000100102e7c();
  plVar9 = (long *)param_1[1];
  if (plVar9 != (long *)0x0) {
    uVar10 = (long)plVar9 - 1;
    if (((ulong)plVar9 & uVar10) == 0) {
      unaff_x27 = (long *)(uVar10 & (ulong)plVar7);
    }
    else {
      unaff_x27 = plVar7;
      if (plVar9 <= plVar7) {
        uVar1 = 0;
        if (plVar9 != (long *)0x0) {
          uVar1 = (ulong)plVar7 / (ulong)plVar9;
        }
        unaff_x27 = (long *)((long)plVar7 - uVar1 * (long)plVar9);
      }
    }
    plVar8 = *(long **)(*param_1 + (long)unaff_x27 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_1074d9844;
          plVar5 = (long *)plVar8[1];
          if (plVar5 != plVar7) break;
          plVar5 = plVar8 + 2;
          func_0x0001000e107c(plVar5,param_2);
          if (((ulong)plVar5 & 1) != 0) {
            uVar4 = 0;
            goto LAB_1074d995c;
          }
        }
        if (((ulong)plVar9 & uVar10) == 0) {
          plVar5 = (long *)((ulong)plVar5 & uVar10);
        }
        else if (plVar9 <= plVar5) {
          uVar1 = 0;
          if (plVar9 != (long *)0x0) {
            uVar1 = (ulong)plVar5 / (ulong)plVar9;
          }
          plVar5 = (long *)((long)plVar5 - uVar1 * (long)plVar9);
        }
      } while (plVar5 == unaff_x27);
    }
  }
LAB_1074d9844:
  func_0x0001074da648(aplStack_78);
  FUN_1074d9990();
  if ((plVar9 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar9 < (float)(param_1[3] + 1))
     ) {
    func_0x0001074da458();
    bVar2 = (long *)0x2 < plVar9;
    bVar3 = plVar9 == (long *)0x3;
    func_0x0001074da620();
    uVar4 = extraout_x8;
    if (!bVar2 || bVar3) {
      uVar4 = extraout_x9;
    }
    FUN_1074d9a08(param_1,uVar4);
    plVar9 = (long *)param_1[1];
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar9 - 1U & (ulong)plVar7);
    }
    else {
      unaff_x27 = plVar7;
      if (plVar9 <= plVar7) {
        uVar10 = 0;
        if (plVar9 != (long *)0x0) {
          uVar10 = (ulong)plVar7 / (ulong)plVar9;
        }
        unaff_x27 = (long *)((long)plVar7 - uVar10 * (long)plVar9);
      }
    }
  }
  plVar8 = aplStack_78[0];
  lVar6 = *param_1;
  plVar7 = *(long **)(lVar6 + (long)unaff_x27 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *aplStack_78[0] = *plVar7;
    *plVar7 = (long)aplStack_78[0];
    *(long **)(lVar6 + (long)unaff_x27 * 8) = plVar7;
    if (*aplStack_78[0] != 0) {
      plVar7 = *(long **)(*aplStack_78[0] + 8);
      if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
        plVar7 = (long *)((ulong)plVar7 & (long)plVar9 - 1U);
      }
      else if (plVar9 <= plVar7) {
        uVar10 = 0;
        if (plVar9 != (long *)0x0) {
          uVar10 = (ulong)plVar7 / (ulong)plVar9;
        }
        plVar7 = (long *)((long)plVar7 - uVar10 * (long)plVar9);
      }
      *(long **)(lVar6 + (long)plVar7 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar7;
    *plVar7 = (long)aplStack_78[0];
  }
  aplStack_78[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_1074d9bd4(aplStack_78);
  uVar4 = 1;
LAB_1074d995c:
  auVar11._8_8_ = uVar4;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 1074d9990; end: 1074d99ef;  */

void FUN_1074d9990(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_1074d99f0(puVar1 + 2,*param_5);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1074d99f0; end: 1074d9a07;  */

void FUN_1074d99f0(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 1074d9a08; end: 1074d9ab3;  */

void FUN_1074d9a08(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  long *extraout_x9;
  ulong uVar5;
  ulong extraout_x10;
  long *plVar6;
  long *plVar7;
  long *extraout_x11;
  long *plVar8;
  
  plVar2 = param_1;
  plVar3 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar2 = param_2;
  }
  plVar8 = (long *)param_1[1];
  if (param_2 <= plVar8) {
    if (param_2 < plVar8) {
      plVar2 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar8 < (long *)0x3) || (((ulong)plVar8 & (long)plVar8 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x0001074da32c();
      }
      if (param_2 <= plVar2) {
        param_2 = plVar2;
      }
      if (param_2 < plVar8) goto LAB_1074d9a50;
    }
    return;
  }
LAB_1074d9a50:
  func_0x0001074da648();
  if (plVar3 == (long *)0x0) {
    FUN_1074d9ba0(plVar2);
    plVar2[1] = 0;
  }
  else {
    plVar8 = plVar2 + 1;
    FUN_1074d9bb8(plVar8);
    FUN_1074d9ba0(plVar2,plVar8);
    plVar2[1] = (long)plVar3;
    lVar4 = *plVar2;
    for (plVar8 = (long *)0x0; plVar3 != plVar8; plVar8 = (long *)((long)plVar8 + 1)) {
      *(undefined8 *)(lVar4 + (long)plVar8 * 8) = 0;
    }
    plVar8 = (long *)plVar2[2];
    if (plVar8 != (long *)0x0) {
      plVar6 = (long *)plVar8[1];
      uVar5 = (long)plVar3 - 1;
      uVar1 = 0;
      if (plVar3 != (long *)0x0) {
        uVar1 = (ulong)plVar6 / (ulong)plVar3;
      }
      plVar7 = plVar6;
      if (plVar3 <= plVar6) {
        plVar7 = (long *)((long)plVar6 - uVar1 * (long)plVar3);
      }
      if (((ulong)plVar3 & uVar5) == 0) {
        plVar7 = (long *)((ulong)plVar6 & uVar5);
      }
      *(long **)(lVar4 + (long)plVar7 * 8) = plVar2 + 2;
      while (plVar2 = plVar8, plVar8 = (long *)*plVar2, plVar8 != (long *)0x0) {
        plVar6 = (long *)plVar8[1];
        if (((ulong)plVar3 & uVar5) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar5);
        }
        else if (plVar3 <= plVar6) {
          uVar1 = 0;
          if (plVar3 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)plVar3;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar3);
        }
        if (plVar6 != plVar7) {
          if (*(long *)(lVar4 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar4 + (long)plVar6 * 8) = plVar2;
            plVar7 = plVar6;
          }
          else {
            *plVar2 = *plVar8;
            func_0x0001074da440();
            lVar4 = extraout_x8;
            plVar8 = extraout_x9;
            uVar5 = extraout_x10;
            plVar7 = extraout_x11;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1074d9ab4; end: 1074d9b9f;  */

void FUN_1074d9ab4(long *param_1,ulong param_2)

{
  long lVar1;
  long extraout_x8;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *extraout_x9;
  ulong uVar5;
  ulong extraout_x10;
  ulong uVar6;
  ulong uVar7;
  ulong extraout_x11;
  
  if (param_2 == 0) {
    FUN_1074d9ba0(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_1074d9bb8(plVar3);
    FUN_1074d9ba0(param_1,plVar3);
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
            func_0x0001074da440();
            lVar1 = extraout_x8;
            plVar3 = extraout_x9;
            uVar5 = extraout_x10;
            uVar7 = extraout_x11;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1074d9ba0; end: 1074d9bb7;  */

void FUN_1074d9ba0(long *param_1,long param_2)

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



/* Entry: 1074d9bb8; end: 1074d9bd3;  */

long FUN_1074d9bb8(long param_1,ulong param_2)

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
  FUN_1074d9bf8();
  return param_1;
}



/* Entry: 1074d9bd4; end: 1074d9bf7;  */

undefined8 FUN_1074d9bd4(undefined8 param_1)

{
  FUN_1074d9bf8(param_1,0);
  return param_1;
}



/* Entry: 1074d9bf8; end: 1074d9c0f;  */

void FUN_1074d9bf8(long *param_1,long param_2)

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



/* Entry: 1074d9c10; end: 1074d9ce7;  */

void FUN_1074d9c10(long param_1,long param_2)

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



/* Entry: 1074d9ce8; end: 1074d9e03;  */

void FUN_1074d9ce8(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  puVar7 = (undefined8 *)param_1[1];
  if (puVar7 < (undefined8 *)param_1[2]) {
    *puVar7 = param_2;
    puVar7[1] = param_3;
    if (param_3 != 0) {
      plVar1 = (long *)(param_3 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar7 = puVar7 + 2;
LAB_1074d9de0:
    param_1[1] = (long)puVar7;
    return;
  }
  lVar10 = *param_1;
  lVar11 = (long)puVar7 - lVar10;
  lVar12 = lVar11 >> 4;
  uVar2 = lVar12 + 1;
  if (uVar2 >> 0x3c == 0) {
    uVar8 = param_1[2] - lVar10;
    uVar9 = (long)uVar8 >> 3;
    if (uVar9 <= uVar2) {
      uVar9 = uVar2;
    }
    if (0x7fffffffffffffef < uVar8) {
      uVar9 = 0xfffffffffffffff;
    }
    if (uVar9 >> 0x3c == 0) {
      lVar6 = uVar9 << 4;
      __Znwm();
      puVar3 = (undefined8 *)(lVar6 + lVar11);
      *puVar3 = param_2;
      puVar3[1] = param_3;
      if (param_3 != 0) {
        plVar1 = (long *)(param_3 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = *param_1;
        lVar11 = param_1[1] - lVar10;
        lVar12 = lVar11 >> 4;
      }
      puVar7 = puVar3 + 2;
      _memcpy(puVar3 + lVar12 * -2,lVar10,lVar11);
      *param_1 = (long)(puVar3 + lVar12 * -2);
      param_1[1] = (long)puVar7;
      param_1[2] = lVar6 + uVar9 * 0x10;
      if (lVar10 != 0) {
        __ZdlPv(lVar10);
      }
      goto LAB_1074d9de0;
    }
  }
  else {
    FUN_1074d9e04();
  }
  func_0x000104bd35f4();
  puVar7 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  func_0x0001074d952c();
  *puVar7 = puVar7 + 1;
  puVar7[2] = 0;
  puVar7[1] = 0;
  return;
}



/* Entry: 1074d9e04; end: 1074d9e17;  */

void FUN_1074d9e04(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  func_0x0001074d952c();
  *puVar1 = puVar1 + 1;
  puVar1[2] = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 1074d9e18; end: 1074d9e47;  */

void FUN_1074d9e18(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 1;
  func_0x0001074d952c(param_1,*puVar1);
  *param_1 = puVar1;
  param_1[2] = 0;
  *puVar1 = 0;
  return;
}



/* Entry: 1074d9e48; end: 1074d9f13;  */

long FUN_1074d9e48(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar6 = param_1[1];
  if ((uVar6 != 0) && (param_1[3] != 0)) {
    uVar2 = param_2;
    FUN_1074d9f14();
    uVar7 = uVar6 - 1;
    if ((uVar6 & uVar7) == 0) {
      uVar8 = uVar2 & uVar7;
    }
    else {
      uVar8 = uVar2;
      if (uVar6 <= uVar2) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar2 / uVar6;
        }
        uVar8 = uVar2 - uVar8 * uVar6;
      }
    }
    plVar5 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        uVar4 = plVar5[1];
        if (uVar4 != uVar2) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x0001074d9f64(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if ((uVar6 & uVar7) == 0) {
        uVar4 = uVar4 & uVar7;
      }
      else if (uVar6 <= uVar4) {
        uVar1 = 0;
        if (uVar6 != 0) {
          uVar1 = uVar4 / uVar6;
        }
        uVar4 = uVar4 - uVar1 * uVar6;
      }
    } while (uVar4 == uVar8);
  }
  return 0;
}



/* Entry: 1074d9f14; end: 1074d9f97;  */

ulong FUN_1074d9f14(long param_1)

{
  undefined1 *puVar1;
  undefined1 uStack_21;
  
  puVar1 = &uStack_21;
  func_0x00010784b274(puVar1,param_1);
  return (long)puVar1 * 0x1000 + ((ulong)puVar1 >> 4) +
         (ulong)*(uint *)(param_1 + 0x10) + 0x9e3779b97f4a7c15 ^ (ulong)puVar1;
}



/* Entry: 1074d9f98; end: 1074da65f;  */

void FUN_1074d9f98(long *param_1,long param_2)

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



/* Entry: 1074da660; end: 1074da98b;  */

void FUN_1074da660(undefined8 *param_1,undefined8 param_2,long param_3,long *****param_4,
                  long ****param_5,long ****param_6,long *****param_7)

{
  undefined1 in_ZR;
  long ****pppplVar1;
  long ****pppplVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *****ppppplVar7;
  long ****pppplVar8;
  long *****ppppplVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  undefined8 *puVar13;
  undefined1 auStack_4b8 [16];
  undefined8 *puStack_4a8;
  long ***ppplStack_490;
  long ***ppplStack_488;
  long ***ppplStack_480;
  long ****pppplStack_478;
  long ****pppplStack_470;
  long ***ppplStack_468;
  long *plStack_460;
  undefined8 *puStack_458;
  undefined1 *puStack_450;
  code *pcStack_448;
  long ***ppplStack_438;
  long ***ppplStack_430;
  undefined8 uStack_428;
  undefined4 uStack_420;
  long ***ppplStack_418;
  undefined8 uStack_410;
  undefined4 uStack_408;
  undefined4 uStack_3f0;
  long ***ppplStack_3e8;
  long ***ppplStack_3e0;
  long ***ppplStack_3d8;
  long ***ppplStack_3d0;
  long ***ppplStack_3c8;
  undefined8 *puStack_3b8;
  long **applStack_3b0 [3];
  undefined ***pppuStack_398;
  long ****pppplStack_390;
  long ***ppplStack_388;
  long ***ppplStack_380;
  undefined8 *puStack_378;
  undefined1 uStack_358;
  long **pplStack_350;
  long **pplStack_348;
  long **pplStack_340;
  long ***ppplStack_2a8;
  long alStack_1f8 [50];
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppplStack_3e8 = (long ***)param_6;
  func_0x000107751284(&pppplStack_390);
  ppplStack_2a8 = (long ***)*param_7;
  func_0x000107751334(alStack_1f8,&pppplStack_390);
  func_0x000107267da8(&pppplStack_390);
  func_0x0001074739a0(&pppplStack_390,param_3);
  uStack_428 = ppplStack_388;
  ppplStack_430 = (long ***)pppplStack_390;
  pppplStack_390 = (long ****)0x0;
  ppplStack_388 = (long ***)0x0;
  uStack_420 = 2;
  func_0x0001074739a0(&ppplStack_3d0,param_3 + 0x20);
  uStack_410 = ppplStack_3c8;
  ppplStack_418 = ppplStack_3d0;
  ppplStack_3d0 = (long ***)0x0;
  ppplStack_3c8 = (long ***)0x0;
  uStack_408 = 2;
  uStack_3f0 = 1;
  FUN_1073e0028(&ppplStack_3d0);
  FUN_1073e0028(&pppplStack_390);
  pppplVar1 = param_7[1];
  func_0x00010775072c(pppplVar1,&ppplStack_430);
  pppplVar12 = param_7[6];
  func_0x00010729807c(&pppplStack_390,param_7 + 0xf);
  pppuStack_398 = (undefined ***)applStack_3b0;
  applStack_3b0[0] = (long **)&PTR_DAT_1109b5630;
  ppppplVar9 = (long *****)&ppplStack_418;
  pppplVar10 = (long ****)applStack_3b0;
  func_0x000107750810(pppplVar12,&pppplStack_390);
  func_0x0001072c9444(applStack_3b0);
  func_0x0001074db114();
  pppplVar2 = param_7[7];
  ppppplVar7 = param_7 + 0xf;
  (*(code *)(*pppplVar2)[5])();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  ppplStack_438 = (long ***)pppplVar2;
  if ((int)pppplVar1 == 0) {
    if ((int)pppplVar12 != 0) {
      ppplStack_388 = (long ***)&ppplStack_438;
      ppplStack_380 = (long ***)&ppplStack_3e8;
      pppplVar11 = param_7[6];
      puVar3 = (undefined8 *)0x20;
      pppplStack_390 = (long ****)param_4;
      puStack_378 = param_1;
      __Znwm();
      *puVar3 = &PTR_FUN_1109b56b0;
      puVar3[1] = param_7;
      puVar3[2] = &pppplStack_390;
      puVar3[3] = param_4;
      ppppplVar7 = (long *****)&ppplStack_3d0;
      puStack_3b8 = puVar3;
      func_0x000107869d34(pppplVar11);
      FUN_1074606e8(&ppplStack_3d0);
    }
  }
  else {
    pppplVar11 = *param_4;
    pppplVar8 = param_4[1];
    FUN_1074dade4();
    param_7 = &pppplStack_390;
    ppplStack_3e0 = (long ***)pppplVar11;
    while (ppplStack_3d8 = (long ***)pppplVar8, (long ****)ppplStack_3e0 != (long ****)0x0) {
      func_0x0001074db11c();
      pppplVar12 = (long ****)ppplStack_3c8;
      for (pppplVar1 = (long ****)ppplStack_3d0; pppplVar1 != pppplVar12; pppplVar1 = pppplVar1 + 3)
      {
        func_0x00010729807c(&pppplStack_390,pppplVar8);
        pplStack_348 = (long **)pppplVar1[1];
        pplStack_350 = (long **)*pppplVar1;
        pplStack_340 = (long **)pppplVar1[2];
        func_0x0001074db140();
        func_0x0001074db114();
      }
      func_0x0001074db138();
      FUN_1074dacc0(&ppplStack_3e0);
      pppplVar8 = (long ****)ppplStack_3d8;
    }
    ppppplVar7 = (long *****)*param_5;
    ppppplVar9 = (long *****)param_5[1];
    func_0x0001074db11c();
    param_5 = (long ****)ppplStack_3c8;
    param_4 = &pppplStack_390;
    for (pppplVar11 = (long ****)ppplStack_3d0; in_ZR = pppplVar11 == param_5, !(bool)in_ZR;
        pppplVar11 = pppplVar11 + 3) {
      pppplStack_390 = (long ****)((ulong)pppplStack_390 & 0xffffffffffffff00);
      uStack_358 = 0;
      pplStack_348 = (long **)pppplVar11[1];
      pplStack_350 = (long **)*pppplVar11;
      pplStack_340 = (long **)pppplVar11[2];
      func_0x0001074db140();
      func_0x0001074db114();
    }
    func_0x0001074db138();
  }
  func_0x0001073ebef4(&ppplStack_430);
  plVar4 = alStack_1f8;
  func_0x000107267da8();
  func_0x0001074db14c(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_1074606e8(&ppplStack_3d0);
  FUN_107444e48(param_1);
  func_0x0001073ebef4(&ppplStack_430);
  func_0x000107267da8(alStack_1f8);
  plVar5 = plVar4;
  __Unwind_Resume();
  pcStack_448 = FUN_1074da98c;
  ppplStack_490 = (long ***)pppplVar12;
  ppplStack_488 = (long ***)pppplVar1;
  ppplStack_480 = (long ***)pppplVar2;
  pppplStack_478 = (long ****)param_7;
  pppplStack_470 = (long ****)param_4;
  ppplStack_468 = (long ***)param_5;
  plStack_460 = plVar4;
  puStack_458 = param_1;
  puStack_450 = &stack0xfffffffffffffff0;
  *plVar5 = 0;
  plVar5[1] = 0;
  plVar4 = plVar5 + 2;
  *plVar4 = 0;
  puVar3 = (undefined8 *)0x0;
  for (; ppppplVar7 != ppppplVar9; ppppplVar7 = ppppplVar7 + 3) {
    puVar13 = puVar3;
    if ((*ppppplVar7 < pppplVar10) && (ppppplVar7[2] <= param_6 && ppppplVar7[1] < ppppplVar7[2])) {
      if (puVar3 < (undefined8 *)*plVar4) {
        pppplVar12 = ppppplVar7[1];
        pppplVar1 = *ppppplVar7;
        puVar3[2] = ppppplVar7[2];
        puVar13 = puVar3 + 3;
        puVar3[1] = pppplVar12;
        *puVar3 = pppplVar1;
      }
      else {
        plVar6 = plVar5;
        FUN_107444e08(plVar5,((long)puVar3 - *plVar5) / 0x18 + 1);
        FUN_107444a08(auStack_4b8,plVar6,(plVar5[1] - *plVar5) / 0x18,plVar4);
        pppplVar12 = ppppplVar7[1];
        pppplVar1 = *ppppplVar7;
        puStack_4a8[2] = ppppplVar7[2];
        puStack_4a8[1] = pppplVar12;
        *puStack_4a8 = pppplVar1;
        puStack_4a8 = puStack_4a8 + 3;
        FUN_1074449d4(plVar5,auStack_4b8);
        puVar13 = (undefined8 *)plVar5[1];
        FUN_107444a84(auStack_4b8);
      }
      plVar5[1] = (long)puVar13;
    }
    puVar3 = puVar13;
  }
  return;
}



/* Entry: 1074da98c; end: 1074daacb;  */

void FUN_1074da98c(long *param_1,ulong *param_2,ulong *param_3,ulong param_4,ulong param_5)

{
  long *plVar1;
  long *plVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_78 [16];
  ulong *puStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar2 = param_1 + 2;
  *plVar2 = 0;
  puVar3 = (ulong *)0x0;
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    puVar4 = puVar3;
    if ((*param_2 < param_4) && (param_2[2] <= param_5 && param_2[1] < param_2[2])) {
      if (puVar3 < (ulong *)*plVar2) {
        uVar6 = param_2[1];
        uVar5 = *param_2;
        puVar3[2] = param_2[2];
        puVar4 = puVar3 + 3;
        puVar3[1] = uVar6;
        *puVar3 = uVar5;
      }
      else {
        plVar1 = param_1;
        FUN_107444e08(param_1,((long)puVar3 - *param_1) / 0x18 + 1);
        FUN_107444a08(auStack_78,plVar1,(param_1[1] - *param_1) / 0x18,plVar2);
        uVar6 = param_2[1];
        uVar5 = *param_2;
        puStack_68[2] = param_2[2];
        puStack_68[1] = uVar6;
        *puStack_68 = uVar5;
        puStack_68 = puStack_68 + 3;
        FUN_1074449d4(param_1,auStack_78);
        puVar4 = (ulong *)param_1[1];
        FUN_107444a84(auStack_78);
      }
      param_1[1] = (long)puVar4;
    }
    puVar3 = puVar4;
  }
  return;
}



/* Entry: 1074daacc; end: 1074dab1b;  */

bool FUN_1074daacc(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  do {
    lVar4 = lVar2;
    if (lVar4 == lVar1) break;
    lVar3 = lVar4;
    func_0x000107278484(lVar4,param_2);
    lVar2 = lVar4 + 0x40;
  } while ((int)lVar3 == 0);
  return lVar4 != lVar1;
}



/* Entry: 1074dab1c; end: 1074dac7f;  */

void FUN_1074dab1c(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar4 = param_1[1];
  if (uVar4 < (ulong)param_1[2]) {
    FUN_1074dac80(uVar4,param_2);
    lVar10 = uVar4 + 0x58;
  }
  else {
    lVar10 = uVar4 - *param_1;
    uVar1 = lVar10 / 0x58 + 1;
    if (0x2e8ba2e8ba2e8ba < uVar1) {
      FUN_1074dacac();
LAB_1074dac7c:
      func_0x000104bd35f4();
      func_0x0001072649c8();
      uVar13 = *(undefined8 *)(param_2 + 0x48);
      uVar12 = *(undefined8 *)(param_2 + 0x40);
      *(undefined8 *)(uVar4 + 0x50) = *(undefined8 *)(param_2 + 0x50);
      *(undefined8 *)(uVar4 + 0x48) = uVar13;
      *(undefined8 *)(uVar4 + 0x40) = uVar12;
      return;
    }
    uVar3 = (param_1[2] - *param_1) / 0x58;
    uVar8 = uVar3 * 2;
    if (uVar8 < uVar1 || uVar8 - uVar1 == 0) {
      uVar8 = uVar1;
    }
    if (0x1745d1745d1745c < uVar3) {
      uVar8 = 0x2e8ba2e8ba2e8ba;
    }
    if (uVar8 == 0) {
      lVar5 = 0;
    }
    else {
      if (0x2e8ba2e8ba2e8ba < uVar8) goto LAB_1074dac7c;
      lVar5 = uVar8 * 0x58;
      __Znwm();
    }
    lVar10 = lVar5 + lVar10;
    FUN_1074dac80(lVar10,param_2);
    lVar9 = *param_1;
    lVar2 = param_1[1];
    lVar11 = lVar10 + ((lVar2 - lVar9) / -0x58) * 0x58;
    lVar6 = lVar11;
    for (lVar7 = lVar9; lVar7 != lVar2; lVar7 = lVar7 + 0x58) {
      FUN_1074dac80(lVar6,lVar7);
      lVar6 = lVar6 + 0x58;
    }
    for (; lVar9 != lVar2; lVar9 = lVar9 + 0x58) {
      func_0x00010724b3d8(lVar9);
    }
    lVar10 = lVar10 + 0x58;
    lVar7 = *param_1;
    *param_1 = lVar11;
    param_1[1] = lVar10;
    param_1[2] = lVar5 + uVar8 * 0x58;
    if (lVar7 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = lVar10;
  return;
}



/* Entry: 1074dac80; end: 1074dacab;  */

void FUN_1074dac80(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001072649c8();
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  return;
}



/* Entry: 1074dacac; end: 1074dacbf;  */

long * FUN_1074dacac(void)

{
  long *plVar1;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar1[1] = plVar1[1] + 0x50;
  *plVar1 = *plVar1 + 1;
  FUN_1074dacf4();
  return plVar1;
}



/* Entry: 1074dacc0; end: 1074dacf3;  */

long * FUN_1074dacc0(long *param_1)

{
  param_1[1] = param_1[1] + 0x50;
  *param_1 = *param_1 + 1;
  FUN_1074dacf4();
  return param_1;
}



/* Entry: 1074dacf4; end: 1074dad53;  */

void FUN_1074dacf4(long *param_1)

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
    param_1[1] = param_1[1] + (uVar2 >> 3) * 0x50;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 1074dad54; end: 1074dad77;  */

void FUN_1074dad54(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_1109b5630;
  return;
}



/* Entry: 1074dad78; end: 1074dad9f;  */

void FUN_1074dad78(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109b5630;
  return;
}



/* Entry: 1074dada0; end: 1074dadd7;  */

long FUN_1074dada0(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109b5690);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1074dadd8; end: 1074dade3;  */

undefined ** FUN_1074dadd8(void)

{
  return &PTR_DAT_1109b5690;
}



/* Entry: 1074dade4; end: 1074dae0b;  */

undefined1  [16] FUN_1074dade4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_1074dacf4(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 1074dae0c; end: 1074dae13;  */

void FUN_1074dae0c(void)

{
  return;
}



/* Entry: 1074dae14; end: 1074dae4f;  */

void FUN_1074dae14(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_1109b56b0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 1074dae50; end: 1074dae7f;  */

void FUN_1074dae50(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_1109b56b0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1074dae80; end: 1074daf4b;  */

void FUN_1074dae80(long param_1,undefined8 param_2,undefined8 *****param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 *****pppppuVar6;
  undefined8 *****pppppuVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  byte bVar15;
  uint6 uVar16;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  undefined8 uVar17;
  byte bVar23;
  undefined8 ***pppuStack_100;
  undefined8 ***pppuStack_f8;
  undefined8 ****ppppuStack_e8;
  ulong *puStack_e0;
  undefined8 **ppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 **ppuStack_98;
  undefined8 uStack_90;
  
  uVar9 = *(long *)(param_1 + 8) + 0x78;
  func_0x000107262f24();
  if ((uVar9 & 1) == 0) {
    uVar4 = *(char *)(param_3 + 7) == '\x01';
    if ((bool)uVar4) {
      puVar5 = *(undefined8 **)(param_1 + 0x10);
      pppppuVar7 = (undefined8 *****)&pppuStack_100;
      uStack_90 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      puVar10 = (ulong *)*puVar5;
      Hint_Prefetch(*puVar10,0,2,0);
      pppppuVar6 = param_3;
      func_0x000104c2fe38(*puVar10);
      lVar13 = 0;
      uVar1 = puVar10[1];
      uVar2 = puVar10[2];
      uVar12 = *puVar10;
      uVar9 = uVar12 >> 0xc ^ (ulong)pppppuVar6 >> 7;
      bVar3 = (byte)pppppuVar6;
      uVar16 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3)))))
               & 0x7f7f7f7f7f7f;
      while( true ) {
        uVar9 = uVar9 & uVar2;
        uVar17 = *(undefined8 *)(uVar12 + uVar9);
        cVar18 = (char)((ulong)uVar17 >> 8);
        cVar19 = (char)((ulong)uVar17 >> 0x10);
        cVar20 = (char)((ulong)uVar17 >> 0x18);
        cVar21 = (char)((ulong)uVar17 >> 0x20);
        cVar22 = (char)((ulong)uVar17 >> 0x28);
        bVar15 = (byte)((ulong)uVar17 >> 0x30);
        bVar23 = (byte)((ulong)uVar17 >> 0x38);
        for (uVar14 = CONCAT17(-(bVar23 == (bVar3 & 0x7f)),
                               CONCAT16(-(bVar15 == (bVar3 & 0x7f)),
                                        CONCAT15(-(cVar22 == (char)(uVar16 >> 0x28)),
                                                 CONCAT14(-(cVar21 == (char)(uVar16 >> 0x20)),
                                                          CONCAT13(-(cVar20 ==
                                                                    (char)(uVar16 >> 0x18)),
                                                                   CONCAT12(-(cVar19 ==
                                                                             (char)(uVar16 >> 0x10))
                                                                            ,CONCAT11(-(cVar18 ==
                                                                                       (char)(uVar16
                                                                                             >> 8)),
                                                                                      -((char)uVar17
                                                                                       == (char)
                                                  uVar16)))))))) & 0x8080808080808080; uVar14 != 0;
            uVar14 = uVar14 - 1 & uVar14) {
          uVar11 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = uVar9 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) & uVar2;
          pppppuVar6 = &ppppuStack_e8;
          ppppuStack_e8 = param_3;
          puStack_e0 = puVar10;
          FUN_107444cd8(pppppuVar6,uVar1 + uVar11 * 0x50);
          if (((ulong)pppppuVar6 & 1) != 0) {
            lVar13 = puVar10[1] + uVar11 * 0x50;
            FUN_1074da98c(&pppuStack_100,*(undefined8 *)(lVar13 + 0x38),
                          *(undefined8 *)(lVar13 + 0x40),*(undefined8 *)puVar5[1],
                          *(undefined8 *)puVar5[2]);
            uVar17 = puVar5[3];
            for (; uVar4 = pppuStack_100 == pppuStack_f8, !(bool)uVar4;
                pppuStack_100 = pppuStack_100 + 3) {
              func_0x00010729807c(&ppppuStack_e8,param_3);
              ppuStack_a0 = pppuStack_100[1];
              ppuStack_a8 = *pppuStack_100;
              ppuStack_98 = pppuStack_100[2];
              FUN_1074dab1c(uVar17,&ppppuStack_e8);
              func_0x00010724b3d8(&ppppuStack_e8);
            }
            func_0x000107444470(&pppuStack_100);
            pppppuVar6 = pppppuVar7;
            goto LAB_1074db0b0;
          }
        }
        bVar15 = NEON_umaxv(CONCAT17(-(bVar23 == 0x80),
                                     CONCAT16(-(bVar15 == 0x80),
                                              CONCAT15(-(cVar22 == -0x80),
                                                       CONCAT14(-(cVar21 == -0x80),
                                                                CONCAT13(-(cVar20 == -0x80),
                                                                         CONCAT12(-(cVar19 == -0x80)
                                                                                  ,CONCAT11(-(cVar18
                                                                                             == 
                                                  -0x80),-((char)uVar17 == -0x80)))))))),1);
        if ((bVar15 & 1) != 0) break;
        lVar13 = lVar13 + 8;
        uVar9 = lVar13 + uVar9;
      }
LAB_1074db0b0:
      func_0x0001074db14c(uStack_90);
      if (!(bool)uVar4) {
        ___stack_chk_fail();
        __Unwind_Resume(pppppuVar6);
        return;
      }
      return;
    }
    lVar13 = **(long **)(param_1 + 0x18);
    lVar8 = (*(long **)(param_1 + 0x18))[1];
    FUN_1074dade4();
    uVar17 = *(undefined8 *)(param_1 + 0x10);
    while (lVar13 != 0) {
      FUN_1074daf58(uVar17,lVar8);
      FUN_1074dacc0(&stack0xffffffffffffffd0);
    }
  }
  return;
}



/* Entry: 1074daf4c; end: 1074daf57;  */

undefined ** FUN_1074daf4c(void)

{
  return &PTR_DAT_1109b5710;
}



/* Entry: 1074daf58; end: 1074db10b;  */

void FUN_1074daf58(undefined8 *param_1,undefined8 ***param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined1 in_ZR;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  byte bVar12;
  uint6 uVar13;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  undefined8 uVar14;
  byte bVar20;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 **ppuStack_e8;
  ulong *puStack_e0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  pppuVar5 = (undefined8 ***)&puStack_100;
  uStack_90 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = (ulong *)*param_1;
  Hint_Prefetch(*puVar7,0,2,0);
  pppuVar4 = param_2;
  func_0x000104c2fe38(*puVar7);
  lVar10 = 0;
  uVar1 = puVar7[1];
  uVar2 = puVar7[2];
  uVar9 = *puVar7;
  uVar6 = uVar9 >> 0xc ^ (ulong)pppuVar4 >> 7;
  bVar3 = (byte)pppuVar4;
  uVar13 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar6 = uVar6 & uVar2;
    uVar14 = *(undefined8 *)(uVar9 + uVar6);
    cVar15 = (char)((ulong)uVar14 >> 8);
    cVar16 = (char)((ulong)uVar14 >> 0x10);
    cVar17 = (char)((ulong)uVar14 >> 0x18);
    cVar18 = (char)((ulong)uVar14 >> 0x20);
    cVar19 = (char)((ulong)uVar14 >> 0x28);
    bVar12 = (byte)((ulong)uVar14 >> 0x30);
    bVar20 = (byte)((ulong)uVar14 >> 0x38);
    for (uVar11 = CONCAT17(-(bVar20 == (bVar3 & 0x7f)),
                           CONCAT16(-(bVar12 == (bVar3 & 0x7f)),
                                    CONCAT15(-(cVar19 == (char)(uVar13 >> 0x28)),
                                             CONCAT14(-(cVar18 == (char)(uVar13 >> 0x20)),
                                                      CONCAT13(-(cVar17 == (char)(uVar13 >> 0x18)),
                                                               CONCAT12(-(cVar16 ==
                                                                         (char)(uVar13 >> 0x10)),
                                                                        CONCAT11(-(cVar15 ==
                                                                                  (char)(uVar13 >> 8
                                                                                        )),
                                                                                 -((char)uVar14 ==
                                                                                  (char)uVar13))))))
                                   )) & 0x8080808080808080; uVar11 != 0;
        uVar11 = uVar11 - 1 & uVar11) {
      uVar8 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar6 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar2;
      pppuVar4 = &ppuStack_e8;
      ppuStack_e8 = param_2;
      puStack_e0 = puVar7;
      FUN_107444cd8(pppuVar4,uVar1 + uVar8 * 0x50);
      if (((ulong)pppuVar4 & 1) != 0) {
        lVar10 = puVar7[1] + uVar8 * 0x50;
        FUN_1074da98c(&puStack_100,*(undefined8 *)(lVar10 + 0x38),*(undefined8 *)(lVar10 + 0x40),
                      *(undefined8 *)param_1[1],*(undefined8 *)param_1[2]);
        uVar14 = param_1[3];
        for (; in_ZR = puStack_100 == puStack_f8, !(bool)in_ZR; puStack_100 = puStack_100 + 3) {
          func_0x00010729807c(&ppuStack_e8,param_2);
          uStack_a0 = (undefined8 *)puStack_100[1];
          uStack_a8 = (undefined8 *)*puStack_100;
          uStack_98 = (undefined8 *)puStack_100[2];
          FUN_1074dab1c(uVar14,&ppuStack_e8);
          func_0x00010724b3d8(&ppuStack_e8);
        }
        func_0x000107444470(&puStack_100);
        pppuVar4 = pppuVar5;
        goto LAB_1074db0b0;
      }
    }
    bVar12 = NEON_umaxv(CONCAT17(-(bVar20 == 0x80),
                                 CONCAT16(-(bVar12 == 0x80),
                                          CONCAT15(-(cVar19 == -0x80),
                                                   CONCAT14(-(cVar18 == -0x80),
                                                            CONCAT13(-(cVar17 == -0x80),
                                                                     CONCAT12(-(cVar16 == -0x80),
                                                                              CONCAT11(-(cVar15 ==
                                                                                        -0x80),-((
                                                  char)uVar14 == -0x80)))))))),1);
    if ((bVar12 & 1) != 0) break;
    lVar10 = lVar10 + 8;
    uVar6 = lVar10 + uVar6;
  }
LAB_1074db0b0:
  func_0x0001074db14c(uStack_90);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    __Unwind_Resume(pppuVar4);
    return;
  }
  return;
}



/* Entry: 1074db10c; end: 1074db1cb;  */

void FUN_1074db10c(void)

{
  return;
}



/* Entry: 1074db1cc; end: 1074db243;  */

long FUN_1074db1cc(long param_1)

{
  FUN_107440dd8(param_1 + 200);
  func_0x00010724e5f4(param_1 + 0xb0);
  FUN_1074dbe4c(param_1 + 0x88);
  func_0x00010533c148(param_1 + 0x70);
  func_0x000107468aa0(param_1 + 0x58);
  FUN_107468ad8(param_1 + 0x40);
  FUN_107468afc(param_1 + 0x10);
  return param_1;
}



/* Entry: 1074db244; end: 1074db7ff;  */

void FUN_1074db244(undefined1 *param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  long *plVar16;
  uint *puVar17;
  ulong uVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puStack_100;
  long alStack_f8 [13];
  uint uStack_90;
  uint uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  
  puVar13 = param_2 + 0x11;
  func_0x0001074dbfd4();
  if (puVar13 != (undefined8 *)0x0) {
LAB_1074db440:
    *param_1 = 0;
    param_1[0x68] = 0;
    return;
  }
  piVar7 = param_3;
  func_0x00010778196c();
  puVar13 = param_2;
  FUN_1074672e8(param_2,0xffffffff,*piVar7 + 2U & 0xffff,piVar7[1] + 2U & 0xffff);
  if (puVar13 == (undefined8 *)0x0) goto LAB_1074db440;
  puVar17 = (uint *)(param_2 + 0x16);
  uVar20 = *param_2;
  uVar19 = (uint)uVar20;
  uVar15 = (uint)((ulong)uVar20 >> 0x20);
  if ((*puVar17 != uVar19) || (*(uint *)((long)param_2 + 0xb4) != uVar15)) {
    func_0x00010724e0f8(&puStack_100,uVar20);
    uStack_80 = (long *)((ulong)uStack_80 & 0xffffffffffffff00);
    FUN_1074669d0(alStack_f8[0],
                  alStack_f8[0] +
                  ((ulong)puStack_100 & 0xffffffff) * ((ulong)puStack_100 >> 0x20) * 4,&uStack_80);
    uStack_88 = 0;
    uStack_80 = (long *)0x0;
    uStack_90 = *(uint *)(param_2 + 0x16);
    if (uVar19 <= *(uint *)(param_2 + 0x16)) {
      uStack_90 = uVar19;
    }
    uStack_8c = *(uint *)((long)param_2 + 0xb4);
    if (uVar15 <= *(uint *)((long)param_2 + 0xb4)) {
      uStack_8c = uVar15;
    }
    FUN_10746671c(puVar17,&puStack_100,&uStack_80,&uStack_88,&uStack_90);
    FUN_10742a894(puVar17,&puStack_100);
    func_0x00010724e5f4(&puStack_100);
  }
  iVar2 = *(int *)((long)puVar13 + 0x14);
  iVar4 = *(int *)(puVar13 + 3);
  uVar15 = iVar2 + 1;
  puVar22 = (undefined8 *)(ulong)uVar15;
  iVar1 = iVar4 + 1;
  iVar3 = *piVar7;
  iVar5 = piVar7[1];
  uStack_88 = *(undefined8 *)piVar7;
  puStack_100 = (undefined8 *)0x0;
  uStack_80 = (long *)CONCAT44(iVar1,uVar15);
  func_0x0001074dc280();
  puStack_100 = (undefined8 *)((ulong)(iVar5 - 1) << 0x20);
  uStack_80 = (long *)CONCAT44(iVar4,uVar15);
  uStack_88 = CONCAT44(1,iVar3);
  func_0x0001074dc280();
  puStack_100 = (undefined8 *)0x0;
  uStack_80 = (long *)CONCAT44(iVar5 + iVar1,uVar15);
  uStack_88 = CONCAT44(1,iVar3);
  func_0x0001074dc280();
  puStack_100 = (undefined8 *)(ulong)(iVar3 - 1);
  uStack_80 = (long *)CONCAT44(iVar1,iVar2);
  uStack_88 = CONCAT44(iVar5,1);
  func_0x0001074dc280();
  puStack_100 = (undefined8 *)0x0;
  uStack_80 = (long *)CONCAT44(iVar1,iVar3 + uVar15);
  uStack_88 = CONCAT44(iVar5,1);
  func_0x0001074dc280();
  *(undefined1 *)(param_2 + 0x1d) = 1;
  uStack_88 = *(undefined8 *)((long)puVar13 + 0x14);
  puStack_100 = puVar13;
  FUN_107460dc4(alStack_f8,0,&uStack_88,param_3,0);
  puVar13 = param_2 + 0x14;
  func_0x00010726364c(puVar13,param_3);
  puVar21 = (undefined8 *)param_2[0x12];
  if (puVar21 != (undefined8 *)0x0) {
    uVar18 = (long)puVar21 - 1;
    if (((ulong)puVar21 & uVar18) == 0) {
      puVar22 = (undefined8 *)(uVar18 & (ulong)puVar13);
    }
    else {
      puVar22 = puVar13;
      if (puVar21 <= puVar13) {
        uVar11 = 0;
        if (puVar21 != (undefined8 *)0x0) {
          uVar11 = (ulong)puVar13 / (ulong)puVar21;
        }
        puVar22 = (undefined8 *)((long)puVar13 - uVar11 * (long)puVar21);
      }
    }
    plVar16 = *(long **)(param_2[0x11] + (long)puVar22 * 8);
    if (plVar16 != (long *)0x0) {
      do {
        while( true ) {
          plVar16 = (long *)*plVar16;
          if (plVar16 == (long *)0x0) goto LAB_1074db4b8;
          puVar10 = (undefined8 *)plVar16[1];
          if (puVar10 != puVar13) break;
          plVar8 = plVar16 + 2;
          func_0x000104c32db4(plVar8,param_3);
          if (((ulong)plVar8 & 1) != 0) goto LAB_1074db780;
        }
        if (((ulong)puVar21 & uVar18) == 0) {
          puVar10 = (undefined8 *)((ulong)puVar10 & uVar18);
        }
        else if (puVar21 <= puVar10) {
          uVar11 = 0;
          if (puVar21 != (undefined8 *)0x0) {
            uVar11 = (ulong)puVar10 / (ulong)puVar21;
          }
          puVar10 = (undefined8 *)((long)puVar10 - uVar11 * (long)puVar21);
        }
      } while (puVar10 == puVar22);
    }
  }
LAB_1074db4b8:
  plVar16 = (long *)0xb8;
  __Znwm();
  plVar8 = param_2 + 0x13;
  uStack_70 = 1;
  *plVar16 = 0;
  plVar16[1] = (long)puVar13;
  uStack_80 = plVar16;
  plStack_78 = plVar8;
  func_0x000104c2fe00(plVar16 + 2,param_3);
  plVar16[9] = (long)puStack_100;
  FUN_107407038(plVar16 + 10,alStack_f8);
  if ((puVar21 != (undefined8 *)0x0) &&
     ((float)(param_2[0x14] + 1) <= *(float *)(param_2 + 0x15) * (float)puVar21))
  goto LAB_1074db704;
  uVar18 = 1;
  if ((undefined8 *)0x2 < puVar21) {
    uVar18 = (ulong)(((ulong)puVar21 & (long)puVar21 - 1U) != 0);
  }
  puVar22 = (undefined8 *)(uVar18 | (long)puVar21 << 1);
  puVar21 = (undefined8 *)(long)((float)(param_2[0x14] + 1) / *(float *)(param_2 + 0x15));
  if (puVar22 <= puVar21) {
    puVar22 = puVar21;
  }
  if ((long)puVar22 - 1U == 0) {
    puVar22 = (undefined8 *)0x2;
  }
  else if (((ulong)puVar22 & (long)puVar22 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  puVar21 = (undefined8 *)param_2[0x12];
  if (puVar21 < puVar22) {
LAB_1074db578:
    if ((ulong)puVar22 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1074db7c4);
      (*pcVar6)();
    }
    lVar9 = (long)puVar22 << 3;
    __Znwm(lVar9);
    FUN_1074dc094(param_2 + 0x11,lVar9);
    param_2[0x12] = puVar22;
    lVar9 = param_2[0x11];
    for (puVar21 = (undefined8 *)0x0; puVar22 != puVar21;
        puVar21 = (undefined8 *)((long)puVar21 + 1)) {
      *(undefined8 *)(lVar9 + (long)puVar21 * 8) = 0;
    }
    plVar16 = (long *)*plVar8;
    puVar21 = puVar22;
    if (plVar16 != (long *)0x0) {
      puVar10 = (undefined8 *)plVar16[1];
      uVar11 = (long)puVar22 - 1;
      uVar18 = 0;
      if (puVar22 != (undefined8 *)0x0) {
        uVar18 = (ulong)puVar10 / (ulong)puVar22;
      }
      puVar14 = puVar10;
      if (puVar22 <= puVar10) {
        puVar14 = (undefined8 *)((long)puVar10 - uVar18 * (long)puVar22);
      }
      if (((ulong)puVar22 & uVar11) == 0) {
        puVar14 = (undefined8 *)((ulong)puVar10 & uVar11);
      }
      *(long **)(lVar9 + (long)puVar14 * 8) = plVar8;
      while (plVar12 = plVar16, plVar16 = (long *)*plVar12, plVar16 != (long *)0x0) {
        puVar10 = (undefined8 *)plVar16[1];
        if (((ulong)puVar22 & uVar11) == 0) {
          puVar10 = (undefined8 *)((ulong)puVar10 & uVar11);
        }
        else if (puVar22 <= puVar10) {
          uVar18 = 0;
          if (puVar22 != (undefined8 *)0x0) {
            uVar18 = (ulong)puVar10 / (ulong)puVar22;
          }
          puVar10 = (undefined8 *)((long)puVar10 - uVar18 * (long)puVar22);
        }
        if (puVar10 != puVar14) {
          if (*(long *)(lVar9 + (long)puVar10 * 8) == 0) {
            *(long **)(lVar9 + (long)puVar10 * 8) = plVar12;
            puVar14 = puVar10;
          }
          else {
            *plVar12 = *plVar16;
            *plVar16 = **(undefined8 **)(lVar9 + (long)puVar10 * 8);
            **(long **)(lVar9 + (long)puVar10 * 8) = (long)plVar16;
            plVar16 = plVar12;
          }
        }
      }
    }
  }
  else if (puVar22 < puVar21) {
    puVar10 = (undefined8 *)(long)((float)(ulong)param_2[0x14] / *(float *)(param_2 + 0x15));
    if ((puVar21 < (undefined8 *)0x3) || (((ulong)puVar21 & (long)puVar21 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((undefined8 *)0x1 < puVar10) {
      puVar10 = (undefined8 *)(1L << (-LZCOUNT((long)puVar10 - 1) & 0x3fU));
    }
    if (puVar22 <= puVar10) {
      puVar22 = puVar10;
    }
    if (puVar22 < puVar21) {
      if (puVar22 != (undefined8 *)0x0) goto LAB_1074db578;
      FUN_1074dc094(param_2 + 0x11,0);
      param_2[0x12] = 0;
      puVar21 = (undefined8 *)0x0;
    }
    else {
      puVar21 = (undefined8 *)param_2[0x12];
    }
  }
  if (((ulong)puVar21 & (long)puVar21 - 1U) == 0) {
    puVar22 = (undefined8 *)((long)puVar21 - 1U & (ulong)puVar13);
  }
  else {
    puVar22 = puVar13;
    if (puVar21 <= puVar13) {
      uVar18 = 0;
      if (puVar21 != (undefined8 *)0x0) {
        uVar18 = (ulong)puVar13 / (ulong)puVar21;
      }
      puVar22 = (undefined8 *)((long)puVar13 - uVar18 * (long)puVar21);
    }
  }
LAB_1074db704:
  plVar16 = uStack_80;
  lVar9 = param_2[0x11];
  plVar12 = *(long **)(lVar9 + (long)puVar22 * 8);
  if (plVar12 == (long *)0x0) {
    *uStack_80 = *plVar8;
    *plVar8 = (long)uStack_80;
    *(long **)(lVar9 + (long)puVar22 * 8) = plVar8;
    if (*uStack_80 != 0) {
      puVar13 = *(undefined8 **)(*uStack_80 + 8);
      if (((ulong)puVar21 & (long)puVar21 - 1U) == 0) {
        puVar13 = (undefined8 *)((ulong)puVar13 & (long)puVar21 - 1U);
      }
      else if (puVar21 <= puVar13) {
        uVar18 = 0;
        if (puVar21 != (undefined8 *)0x0) {
          uVar18 = (ulong)puVar13 / (ulong)puVar21;
        }
        puVar13 = (undefined8 *)((long)puVar13 - uVar18 * (long)puVar21);
      }
      *(long **)(lVar9 + (long)puVar13 * 8) = uStack_80;
    }
  }
  else {
    *uStack_80 = *plVar12;
    *plVar12 = (long)uStack_80;
  }
  uStack_80 = (long *)0x0;
  param_2[0x14] = param_2[0x14] + 1;
  FUN_1074dc0ac(&uStack_80);
LAB_1074db780:
  FUN_1073f6580(param_1,plVar16 + 10);
  param_1[0x68] = 1;
  FUN_1073bc874(alStack_f8);
  return;
}



/* Entry: 1074db800; end: 1074db86b;  */

void FUN_1074db800(long param_1)

{
  long lVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1 + 0x88;
  func_0x0001074dbfd4();
  if (lVar1 != 0) {
    uStack_30 = *(undefined8 *)(*(long *)(lVar1 + 0x48) + 4);
    uStack_28 = *(undefined8 *)(*(long *)(lVar1 + 0x48) + 0x14);
    FUN_1074db86c(param_1 + 0xb0,&uStack_28,&uStack_30);
    FUN_1074db9a4(param_1,*(undefined8 *)(lVar1 + 0x48));
    func_0x0001074dc12c(param_1 + 0x88,lVar1);
  }
  return;
}



/* Entry: 1074db86c; end: 1074db9a3;  */

uint * FUN_1074db86c(uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  if ((*param_3 == 0) || (param_3[1] == 0)) {
    return param_1;
  }
  puVar1 = param_1;
  FUN_1074344b4();
  if (((ulong)puVar1 & 1) == 0) {
    lVar9 = 0x10;
    ___cxa_allocate_exception();
    FUN_1074668c4();
    puVar5 = PTR___ZTISt16invalid_argument_110352248;
    puVar6 = PTR___ZNSt16invalid_argumentD1Ev_1103461e8;
  }
  else {
    if (*param_3 <= *param_1) {
      uVar7 = param_3[1];
      if (((uVar7 <= param_1[1]) && (*param_2 <= *param_1 - *param_3)) &&
         (param_2[1] <= param_1[1] - uVar7)) {
        lVar9 = *(long *)(param_1 + 2);
        for (uVar8 = 0; uVar8 < uVar7; uVar8 = uVar8 + 1) {
          puVar1 = (uint *)(lVar9 + (ulong)*param_1 * (ulong)(uVar8 + param_2[1]) * 4 +
                           (ulong)*param_2 * 4);
          _bzero(puVar1,(ulong)*param_3 << 2);
          uVar7 = param_3[1];
        }
        return puVar1;
      }
    }
    lVar9 = 0x10;
    ___cxa_allocate_exception();
    func_0x000104c03f74();
    puVar5 = PTR___ZTISt12out_of_range_110352240;
    puVar6 = PTR___ZNSt12out_of_rangeD1Ev_110346180;
  }
  lVar2 = lVar9;
  ___cxa_throw(lVar9,puVar5,puVar6);
  ___cxa_free_exception(lVar9);
  lVar3 = lVar2;
  __Unwind_Resume();
  if (*(int *)(puVar5 + 0x1c) == 0) {
    return (uint *)0x0;
  }
  pcStack_48 = FUN_1074db9a4;
  uVar7 = *(int *)(puVar5 + 0x1c) - 1;
  *(uint *)(puVar5 + 0x1c) = uVar7;
  if (uVar7 == 0) {
    piVar4 = (int *)(lVar3 + 0x70);
    lStack_60 = lVar2;
    lStack_58 = lVar9;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x00010533beb4(piVar4,puVar5 + 8);
    *piVar4 = *piVar4 + -1;
    FUN_1074dbc50(lVar3 + 0x40,puVar5);
    puStack_68 = puVar5;
    FUN_1074dbd18(lVar3 + 0x58,&puStack_68);
    uVar7 = *(uint *)(puVar5 + 0x1c);
  }
  return (uint *)(ulong)uVar7;
}



/* Entry: 1074db9a4; end: 1074dba1f;  */

int FUN_1074db9a4(long param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  long lStack_28;
  
  if (*(int *)(param_2 + 0x1c) != 0) {
    iVar1 = *(int *)(param_2 + 0x1c) + -1;
    *(int *)(param_2 + 0x1c) = iVar1;
    if (iVar1 == 0) {
      piVar2 = (int *)(param_1 + 0x70);
      func_0x00010533beb4(piVar2,param_2 + 8);
      *piVar2 = *piVar2 + -1;
      FUN_1074dbc50(param_1 + 0x40,param_2);
      lStack_28 = param_2;
      FUN_1074dbd18(param_1 + 0x58,&lStack_28);
      iVar1 = *(int *)(param_2 + 0x1c);
    }
    return iVar1;
  }
  return 0;
}



/* Entry: 1074dba20; end: 1074dbad3;  */

void FUN_1074dba20(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined1 auStack_38 [16];
  long lStack_28;
  
  if ((*(byte *)(param_1 + 0xe0) & 1) == 0) {
    uStack_40 = 0x303;
    uStack_3c = 0;
    FUN_107432024(auStack_38,param_2,param_1 + 0xb0,&uStack_40,0);
    FUN_107440a90(param_1 + 200,auStack_38);
    lVar1 = lStack_28;
    lStack_28 = 0;
    if (lVar1 != 0) {
      func_0x0001074dc2b8();
    }
  }
  else if (*(char *)(param_1 + 0xe8) == '\x01') {
    FUN_1074dbad4(param_2,param_1 + 200,param_1 + 0xb0);
  }
  *(undefined1 *)(param_1 + 0xe8) = 0;
  return;
}



/* Entry: 1074dbad4; end: 1074dbc1b;  */

void FUN_1074dbad4(long *param_1,long param_2,ulong *param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  uVar6 = *param_3;
  plVar7 = (long *)(uVar6 >> 0x20);
  plVar3 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if ((((char)param_1[3] == '\x01') &&
      (uVar4 = uVar6, func_0x0001073da298(uVar6,plVar7,2), (int)uVar4 != 0)) &&
     (uVar5 = param_3[1], uVar5 != 0)) {
    lVar8 = *(long *)(param_2 + 0x10);
    if ((*(int *)(param_2 + 4) != (int)uVar6) ||
       (*(int *)(param_2 + 8) != (int)(uVar6 >> 0x20) || *(char *)(param_2 + 0xc) != '\x02')) {
      uVar5 = uVar4 & 0xffffffff;
      __Znam(uVar5);
      _bzero();
      uStack_68 = 0;
      FUN_1073c8290(lVar8 + 8,uVar5);
      func_0x00010724e5b8(&uStack_68);
      uVar5 = param_3[1];
    }
    _memcpy(*(undefined8 *)(lVar8 + 8),uVar5,uVar4 & 0xffffffff);
  }
  uStack_6c = 0;
  bVar2 = (long *)(uVar6 & 0xffffffff) <= plVar3;
  puVar1 = &uStack_6c;
  if (bVar2 && plVar7 <= plVar3) {
    puVar1 = (undefined4 *)param_3[1];
  }
  uVar4 = 0x100000001;
  if (bVar2 && plVar7 <= plVar3) {
    uVar4 = uVar6;
  }
  (**(code **)(*param_1 + 0x70))(param_1,*(undefined8 *)(param_2 + 0x10),uVar4,puVar1,2);
  *(ulong *)(param_2 + 4) = uVar4;
  *(undefined1 *)(param_2 + 0xc) = 2;
  return;
}



/* Entry: 1074dbc1c; end: 1074dbc4f;  */

void FUN_1074dbc1c(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  FUN_1073f6580();
  *(undefined1 *)(param_1 + 0x68) = 1;
  return;
}


