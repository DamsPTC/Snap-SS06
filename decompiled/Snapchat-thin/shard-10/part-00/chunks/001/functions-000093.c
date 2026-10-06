/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1074711a0; end: 1074711ab;  */

undefined ** FUN_1074711a0(void)

{
  return &PTR_DAT_1109b2b00;
}



/* Entry: 1074711ac; end: 1074711ff;  */

void FUN_1074711ac(undefined8 param_1)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  undefined8 in_register_00005008;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107479cac();
  func_0x000107479be0();
  __ZNSt3__119__shared_mutex_base4lockEv();
  func_0x00010747a248();
  if (extraout_x8 != 0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10 != 0);
  }
  uStack_28 = *(undefined8 *)(unaff_x19 + 0x148);
  uStack_30 = *(undefined8 *)(unaff_x19 + 0x140);
  *(undefined8 *)(unaff_x19 + 0x148) = in_register_00005008;
  *(undefined8 *)(unaff_x19 + 0x140) = param_1;
  func_0x0001074737a0(&uStack_30);
  func_0x000104c305a0(auStack_40);
  return;
}



/* Entry: 107471200; end: 1074712bf;  */

void FUN_107471200(long param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000107479cac();
  func_0x000104c2fe00();
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(unaff_x20 + 0x38);
  FUN_1073658bc(param_1 + 0x40,unaff_x20 + 0x40);
  FUN_1073ae3fc(unaff_x19 + 0x58,unaff_x20 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined8 *)(unaff_x19 + 0x78) = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined8 *)(unaff_x19 + 0x70) = uVar2;
  lVar1 = *(long *)(unaff_x20 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x19 + 0x80) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10 != 0);
  }
  *(undefined1 *)(unaff_x19 + 0x90) = 0;
  *(undefined1 *)(unaff_x19 + 0xa0) = 0;
  if (*(char *)(unaff_x20 + 0xa0) == '\x01') {
    lVar1 = *(long *)(unaff_x20 + 0x98);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x90);
    *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x20 + 0x98);
    *(undefined8 *)(unaff_x19 + 0x90) = uVar2;
    if (lVar1 != 0) {
      do {
        func_0x000107479b20();
      } while (extraout_w10_00 != 0);
    }
    *(undefined1 *)(unaff_x19 + 0xa0) = 1;
  }
  *(undefined8 *)(unaff_x19 + 0xa8) = *(undefined8 *)(unaff_x20 + 0xa8);
  return;
}



/* Entry: 1074712c0; end: 107471347;  */

void FUN_1074712c0(long param_1,long param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar1 = lVar3;
  for (uVar2 = param_2 + (lVar3 - param_4); uVar2 < param_3; uVar2 = uVar2 + 0xb0) {
    FUN_107470c28(lVar1,uVar2);
    lVar1 = lVar1 + 0xb0;
  }
  *(long *)(param_1 + 8) = lVar1;
  lVar1 = lVar3 + -0xb0;
  param_2 = param_2 + (lVar1 - param_4);
  for (param_4 = param_4 - lVar3; param_4 != 0; param_4 = param_4 + 0xb0) {
    FUN_1074713d4(lVar1,param_2);
    param_2 = param_2 + -0xb0;
    lVar1 = lVar1 + -0xb0;
  }
  return;
}



/* Entry: 107471348; end: 1074713d3;  */

undefined1 * FUN_107471348(undefined1 *param_1,long param_2,long param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uVar3;
  undefined1 auStack_f0 [176];
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  func_0x000107479adc();
  puVar1 = param_1 + 0x10;
  uStack_38 = extraout_x8;
  for (param_3 = param_3 * 0xb0; param_3 != 0; param_3 = param_3 + -0xb0) {
    puStack_40 = puVar1;
    FUN_107471200(auStack_f0,param_2);
    func_0x00010747a254();
    FUN_1074713d4();
    param_1 = auStack_f0;
    func_0x000107470ee8(auStack_f0);
    param_4 = param_4 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  func_0x000107479a9c(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    __Unwind_Resume();
    func_0x000107479cac();
    func_0x000104c2f1f0();
    *(undefined8 *)(param_4 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    func_0x0001074714a8(param_4 + 0x40,param_2 + 0x40);
    func_0x0001074714f0(param_4 + 0x58,param_2 + 0x58);
    uVar3 = *(undefined8 *)(param_2 + 0x70);
    param_4[0x78] = *(undefined1 *)(param_2 + 0x78);
    *(undefined8 *)(param_4 + 0x70) = uVar3;
    func_0x000107471484(param_4 + 0x80,param_2 + 0x80);
    cVar2 = param_4[0xa0];
    if (cVar2 == *(char *)(param_2 + 0xa0)) {
      if (cVar2 != '\0') {
        FUN_107469c38(param_4 + 0x90,param_2 + 0x90);
      }
    }
    else if (cVar2 == '\0') {
      uVar3 = *(undefined8 *)(param_2 + 0x90);
      *(undefined8 *)(param_4 + 0x98) = *(undefined8 *)(param_2 + 0x98);
      *(undefined8 *)(param_4 + 0x90) = uVar3;
      *(undefined8 *)(param_2 + 0x90) = 0;
      *(undefined8 *)(param_2 + 0x98) = 0;
      param_4[0xa0] = 1;
    }
    else {
      func_0x0001074734f0(param_4 + 0x90);
      param_4[0xa0] = 0;
    }
    *(undefined8 *)(param_4 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
    return param_4;
  }
  return param_1;
}



/* Entry: 1074713d4; end: 107471537;  */

void FUN_1074713d4(void)

{
  char cVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107479cac();
  func_0x000104c2f1f0();
  *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x0001074714a8(unaff_x19 + 0x40,unaff_x20 + 0x40);
  func_0x0001074714f0(unaff_x19 + 0x58,unaff_x20 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined1 *)(unaff_x19 + 0x78) = *(undefined1 *)(unaff_x20 + 0x78);
  *(undefined8 *)(unaff_x19 + 0x70) = uVar2;
  func_0x000107471484(unaff_x19 + 0x80,unaff_x20 + 0x80);
  cVar1 = *(char *)(unaff_x19 + 0xa0);
  if (cVar1 == *(char *)(unaff_x20 + 0xa0)) {
    if (cVar1 != '\0') {
      FUN_107469c38(unaff_x19 + 0x90,unaff_x20 + 0x90);
    }
  }
  else if (cVar1 == '\0') {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x90);
    *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x20 + 0x98);
    *(undefined8 *)(unaff_x19 + 0x90) = uVar2;
    *(undefined8 *)(unaff_x20 + 0x90) = 0;
    *(undefined8 *)(unaff_x20 + 0x98) = 0;
    *(undefined1 *)(unaff_x19 + 0xa0) = 1;
  }
  else {
    func_0x0001074734f0(unaff_x19 + 0x90);
    *(undefined1 *)(unaff_x19 + 0xa0) = 0;
  }
  *(undefined8 *)(unaff_x19 + 0xa8) = *(undefined8 *)(unaff_x20 + 0xa8);
  return;
}



/* Entry: 107471538; end: 107471553;  */

void FUN_107471538(long param_1)

{
  FUN_107471554();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 107471554; end: 10747157f;  */

void FUN_107471554(long param_1)

{
  long unaff_x19;
  
  func_0x000107479ce4();
  FUN_1073ebf60();
  FUN_1073ebf60(param_1 + 0x18,unaff_x19 + 0x18);
  return;
}



/* Entry: 107471580; end: 1074715d3;  */

void FUN_107471580(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  long unaff_x23;
  
  if (param_2 <= (ulong)(*(long *)(*param_1 + -8) + param_1[3])) {
    return;
  }
  if (param_2 == 7) {
    lVar1 = 8;
  }
  else {
    lVar1 = (long)(param_2 - 1) / 7 + param_2;
  }
  uVar2 = 0xffffffffffffffff >> (LZCOUNT(lVar1) & 0x3fU);
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  func_0x00010747abf4(param_1,uVar2);
  FUN_10732f6dc();
  for (lVar1 = 0; unaff_x23 != lVar1; lVar1 = lVar1 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar1)) {
      func_0x00010747a9ec();
      func_0x00010747a4cc();
      func_0x000107479f48();
      FUN_107471704();
    }
  }
  if (unaff_x23 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
  return;
}



/* Entry: 1074715d4; end: 10747163f;  */

void FUN_1074715d4(long *param_1,ulong param_2)

{
  long unaff_x22;
  long unaff_x23;
  long lVar1;
  undefined1 auStack_48 [40];
  
  if ((ulong)(param_1[2] - *param_1 >> 4) < param_2) {
    if (param_2 >> 0x3c != 0) {
      FUN_1074706b0();
      func_0x000107479e4c();
      func_0x000107470858();
      func_0x000107479c68();
      if (param_2 <= (ulong)(*(long *)(*param_1 + -8) + param_1[3])) {
        return;
      }
      func_0x00010747abf4();
      FUN_107324d80();
      for (lVar1 = 0; unaff_x23 != lVar1; lVar1 = lVar1 + 1) {
        if (-1 < *(char *)(unaff_x22 + lVar1)) {
          func_0x00010747a9ec();
          func_0x00010747a4cc();
          func_0x000107479f48();
          FUN_1074717a0();
        }
      }
      if (unaff_x23 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
      return;
    }
    FUN_1074706bc(auStack_48,param_2,param_1[1] - *param_1 >> 4);
    func_0x00010747a9bc();
    func_0x000107470858(auStack_48);
  }
  return;
}



/* Entry: 107471640; end: 107471693;  */

void FUN_107471640(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  long unaff_x23;
  
  if (param_2 <= (ulong)(*(long *)(*param_1 + -8) + param_1[3])) {
    return;
  }
  if (param_2 == 7) {
    lVar1 = 8;
  }
  else {
    lVar1 = (long)(param_2 - 1) / 7 + param_2;
  }
  uVar2 = 0xffffffffffffffff >> (LZCOUNT(lVar1) & 0x3fU);
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  func_0x00010747abf4(param_1,uVar2);
  FUN_107324d80();
  for (lVar1 = 0; unaff_x23 != lVar1; lVar1 = lVar1 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar1)) {
      func_0x00010747a9ec();
      func_0x00010747a4cc();
      func_0x000107479f48();
      FUN_1074717a0();
    }
  }
  if (unaff_x23 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
  return;
}



/* Entry: 107471694; end: 107471703;  */

void FUN_107471694(void)

{
  long unaff_x22;
  long unaff_x23;
  long lVar1;
  
  func_0x00010747abf4();
  FUN_10732f6dc();
  for (lVar1 = 0; unaff_x23 != lVar1; lVar1 = lVar1 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar1)) {
      func_0x00010747a9ec();
      func_0x00010747a4cc();
      func_0x000107479f48();
      FUN_107471704();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 107471704; end: 10747172f;  */

long FUN_107471704(long param_1)

{
  long unaff_x19;
  
  func_0x00010747a85c();
  FUN_1074704d4(param_1 + 0x38,unaff_x19 + 0x38);
  func_0x00010747a59c();
  func_0x000107470508();
  func_0x000107479d54();
  return unaff_x19;
}



/* Entry: 107471730; end: 10747179f;  */

void FUN_107471730(void)

{
  long unaff_x22;
  long unaff_x23;
  long lVar1;
  
  func_0x00010747abf4();
  FUN_107324d80();
  for (lVar1 = 0; unaff_x23 != lVar1; lVar1 = lVar1 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar1)) {
      func_0x00010747a9ec();
      func_0x00010747a4cc();
      func_0x000107479f48();
      FUN_1074717a0();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 1074717a0; end: 1074718ab;  */

long FUN_1074717a0(long param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x00010747a85c();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(unaff_x19 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  func_0x00010747a59c();
  func_0x000104c33970();
  func_0x000107479d54();
  return unaff_x19;
}



/* Entry: 1074718ac; end: 1074718bf;  */

long FUN_1074718ac(undefined8 param_1,long param_2)

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



/* Entry: 1074718c0; end: 107471a47;  */

/* WARNING: Possible PIC construction at 0x000107471a0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107471a10) */
/* WARNING: Removing unreachable block (ram,0x000107471a20) */

undefined1  [16] FUN_1074718c0(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long **pplVar4;
  long **pplVar5;
  long lVar6;
  ulong extraout_x8;
  undefined1 *extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x9;
  ulong uVar7;
  undefined1 *unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 **ppuVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long lStack_60;
  long lStack_58;
  
  pplVar4 = &plStack_80;
  ppuVar11 = (undefined1 **)&stack0xfffffffffffffff0;
  pplVar5 = (long **)param_1[1];
  if (pplVar5 < (undefined1 *)param_1[2]) {
    func_0x0001072d62a0(pplVar5,param_2);
    param_1[1] = (long)((long)pplVar5 + 0x1f8);
    auVar13._8_8_ = param_2;
    auVar13._0_8_ = pplVar5;
    return auVar13;
  }
  lVar6 = param_2;
  func_0x00010747a5c4(0x2082);
  lVar9 = (long)pplVar5 - *param_1;
  uVar1 = lVar9 / 0x1f8 + 1;
  if (extraout_x8 < uVar1) {
    FUN_107471a48();
    pcStack_88 = FUN_107471a48;
    ppuStack_90 = ppuVar11;
    func_0x000107479c78();
    pplVar4 = (long **)&stack0xffffffffffffff50;
    pcStack_98 = FUN_107471a54;
    ppuVar11 = &puStack_a0;
    puStack_a0 = (undefined1 *)&ppuStack_90;
    func_0x00010747a5c4(0x2083);
    if (pplVar5 < extraout_x8_00) {
      lVar9 = (long)pplVar5 * 0x1f8;
      __Znwm(lVar9);
      auVar14._8_8_ = pplVar5;
      auVar14._0_8_ = lVar9;
      return auVar14;
    }
    uVar12 = 0x107471a94;
    func_0x000104bd35f4();
  }
  else {
    uVar3 = (extraout_x9 - *param_1) / 0x1f8;
    uVar7 = uVar3 * 2;
    if (uVar7 < uVar1 || uVar7 - uVar1 == 0) {
      uVar7 = uVar1;
    }
    if (0x41041041041040 < uVar3) {
      uVar7 = extraout_x8;
    }
    if (uVar7 == 0) {
      uVar7 = 0;
      lVar8 = 0;
    }
    else {
      FUN_107471a54();
      lVar8 = lVar6;
    }
    lVar9 = uVar7 + lVar9;
    func_0x0001072d62a0(lVar9,param_2);
    lVar10 = *param_1;
    lVar2 = param_1[1];
    lStack_58 = lVar9 + ((lVar2 - lVar10) / -0x1f8) * 0x1f8;
    plStack_78 = &lStack_60;
    plStack_70 = &lStack_58;
    lVar6 = param_2;
    plStack_80 = param_1 + 2;
    lStack_60 = lStack_58;
    for (lVar9 = lVar10; lVar9 != lVar2; lVar9 = lVar9 + 0x1f8) {
      lVar6 = lVar9;
      func_0x0001072d62a0(lStack_58,lVar9);
      lStack_58 = lStack_58 + 0x1f8;
    }
    func_0x0001001684f0(lStack_58);
    for (; lVar10 != lVar2; lVar10 = lVar10 + 0x1f8) {
      func_0x00010724b374(lVar10);
    }
    unaff_x20 = (undefined1 *)(uVar7 + lVar8 * 0x1f8);
    uVar12 = 0x107471a10;
    pplVar5 = &plStack_80;
  }
  *(undefined1 **)((long)pplVar4 + -0x20) = unaff_x20;
  *(long **)((long)pplVar4 + -0x18) = param_1;
  *(undefined1 ***)((long)pplVar4 + -0x10) = ppuVar11;
  *(undefined8 *)((long)pplVar4 + -8) = uVar12;
  func_0x00010747ac08();
  if ((extraout_x8_01 & 1) == 0) {
    func_0x00010747a5d4();
    while (pplVar5 != (long **)unaff_x20) {
      pplVar5 = (long **)((long)pplVar5 + -0x1f8);
      func_0x00010724b374();
    }
  }
  auVar15._8_8_ = lVar6;
  auVar15._0_8_ = param_1;
  return auVar15;
}



/* Entry: 107471a48; end: 107471a53;  */

void FUN_107471a48(ulong param_1)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong unaff_x20;
  
  func_0x000107479c78();
  func_0x00010747a5c4(0x2083);
  if (param_1 < extraout_x8) {
    __Znwm(param_1 * 0x1f8);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010747ac08();
  if ((extraout_x8_00 & 1) == 0) {
    func_0x00010747a5d4();
    while (param_1 != unaff_x20) {
      param_1 = param_1 - 0x1f8;
      func_0x00010724b374();
    }
  }
  return;
}



/* Entry: 107471a54; end: 107471acb;  */

void FUN_107471a54(ulong param_1)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong unaff_x20;
  
  func_0x00010747a5c4(0x2083);
  if (param_1 < extraout_x8) {
    __Znwm(param_1 * 0x1f8);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010747ac08();
  if ((extraout_x8_00 & 1) == 0) {
    func_0x00010747a5d4();
    while (param_1 != unaff_x20) {
      param_1 = param_1 - 0x1f8;
      func_0x00010724b374();
    }
  }
  return;
}



/* Entry: 107471acc; end: 107471c1f;  */

void FUN_107471acc(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long extraout_x8_00;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong uVar4;
  ulong extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar5 = param_1;
  plVar3 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar5 = param_2;
  }
  plVar7 = (long *)param_1[1];
  if (plVar7 > param_2 || param_2 == plVar7) {
    if (plVar7 <= param_2) {
      return;
    }
    plVar5 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x000107479ab0();
    }
    if (param_2 <= plVar5) {
      param_2 = plVar5;
    }
    if (plVar7 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_107471c20(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    FUN_107471c20(param_1,lVar2);
    func_0x00010747a5f4();
    plVar5 = extraout_x9;
    while (param_2 != plVar5) {
      func_0x00010747a6cc();
      plVar5 = extraout_x9_00;
    }
    if (param_1[2] != 0) {
      func_0x00010747a0a8();
      func_0x00010747a08c();
      lVar2 = extraout_x8;
      plVar5 = extraout_x9_01;
      uVar4 = extraout_x10;
      plVar3 = extraout_x11;
      while (plVar7 = plVar5, plVar5 = (long *)*plVar7, plVar5 != (long *)0x0) {
        plVar6 = (long *)plVar5[1];
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
        if (plVar6 != plVar3) {
          if (*(long *)(lVar2 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar6 * 8) = plVar7;
            plVar3 = plVar6;
          }
          else {
            *plVar7 = *plVar5;
            func_0x000107479ba4();
            lVar2 = extraout_x8_00;
            plVar5 = extraout_x9_02;
            uVar4 = extraout_x10_00;
            plVar3 = extraout_x11_00;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar2 = *plVar5;
  *plVar5 = (long)plVar3;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107471c20; end: 107471c37;  */

void FUN_107471c20(long *param_1,long param_2)

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



/* Entry: 107471c38; end: 107471d6f;  */

void FUN_107471c38(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x000107479e20();
  if (unaff_x20 != 0) {
    func_0x00010747ab20();
    if ((bool)in_ZR) {
      func_0x000107471c6c(unaff_x20 + 0x10);
    }
    func_0x000107479f40();
  }
  return;
}



/* Entry: 107471d70; end: 107471d83;  */

long FUN_107471d70(undefined8 param_1,long param_2)

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



/* Entry: 107471d84; end: 107471da3;  */

void FUN_107471d84(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x000104c33970();
  }
  return;
}



/* Entry: 107471da4; end: 107471e57;  */

void FUN_107471da4(void)

{
  long lVar1;
  long extraout_x11;
  long *unaff_x21;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  func_0x00010747a364();
  FUN_107471e58();
  if (unaff_x21[3] != 0) {
    func_0x00010747a290();
    FUN_107471580();
    lVar2 = *unaff_x21;
    lVar1 = unaff_x21[1];
    FUN_107471e5c();
    lStack_50 = lVar2;
    while (lStack_48 = lVar1, lStack_50 != 0) {
      lVar2 = lVar1;
      func_0x000104c2fe38(lVar1);
      func_0x00010747a420();
      func_0x00010747a048();
      lVar2 = extraout_x11 + lVar2 * 0x58;
      func_0x00010747a8a4(lVar2);
      FUN_107471ec0(lVar2 + 0x38,lVar1 + 0x38);
      FUN_107471f08(&lStack_50);
      lVar1 = lStack_48;
    }
    func_0x00010747a660();
  }
  return;
}



/* Entry: 107471e58; end: 107471e5b;  */

void FUN_107471e58(undefined8 *param_1)

{
  *param_1 = &UNK_10e52b660;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



/* Entry: 107471e5c; end: 107471e83;  */

undefined1  [16] FUN_107471e5c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_107471e84(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 107471e84; end: 107471ebf;  */

void FUN_107471e84(undefined8 *param_1)

{
  char *pcVar1;
  char *extraout_x8;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    func_0x00010747aa78();
    pcVar1 = extraout_x8;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 107471ec0; end: 107471f07;  */

void FUN_107471ec0(undefined8 param_1,undefined8 *param_2,long param_3)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  undefined8 in_register_00005008;
  
  func_0x000107479e30();
  param_2[1] = in_register_00005008;
  *param_2 = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10 != 0);
  }
  FUN_1073c67e4(unaff_x19 + 0x10,param_3 + 0x10);
  return;
}



/* Entry: 107471f08; end: 107471f73;  */

long * FUN_107471f08(long *param_1)

{
  param_1[1] = param_1[1] + 0x58;
  *param_1 = *param_1 + 1;
  FUN_107471e84();
  return param_1;
}



/* Entry: 107471f74; end: 107471fe3;  */

void FUN_107471f74(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    FUN_107471fe4(param_1,param_4);
    FUN_10747201c(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  func_0x0001074720d0(&uStack_40);
  return;
}



/* Entry: 107471fe4; end: 10747201b;  */

void FUN_107471fe4(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = param_1 + 2;
    func_0x000107470704();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 2);
  }
  else {
    FUN_1074706b0();
    plVar1 = param_1 + 2;
    FUN_107472050();
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 10747201c; end: 10747204f;  */

void FUN_10747201c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_107472050();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 107472050; end: 107472063;  */

void FUN_107472050(void)

{
  FUN_107472064();
  return;
}



/* Entry: 107472064; end: 1074720fb;  */

undefined8 *
FUN_107472064(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined1 auStack_50 [16];
  undefined8 **ppuStack_40;
  undefined8 *puStack_28;
  
  func_0x00010747aad0();
  ppuStack_40 = &puStack_28;
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    lVar1 = param_2[1];
    uVar2 = *param_2;
    param_4[1] = param_2[1];
    *param_4 = uVar2;
    if (lVar1 != 0) {
      do {
        func_0x000107479b20();
      } while (extraout_w10 != 0);
    }
    param_4 = param_4 + 2;
    puStack_28 = param_4;
  }
  func_0x0001001684f0();
  FUN_1074707dc(auStack_50);
  return param_4;
}



/* Entry: 1074720fc; end: 1074721a7;  */

void FUN_1074720fc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int extraout_w10;
  long extraout_x11;
  long *unaff_x21;
  undefined8 uVar4;
  long lStack_50;
  long lStack_48;
  
  func_0x00010747a364();
  FUN_1074721a8();
  if (unaff_x21[3] != 0) {
    func_0x00010747a290();
    FUN_107471640();
    lVar1 = *unaff_x21;
    lVar2 = unaff_x21[1];
    FUN_1074721ac();
    lStack_50 = lVar1;
    while (lStack_48 = lVar2, lStack_50 != 0) {
      lVar1 = lVar2;
      func_0x000104c2fe38();
      func_0x00010747a420();
      func_0x00010747a048();
      lVar1 = extraout_x11 + lVar1 * 0x48;
      func_0x00010747a8a4();
      lVar3 = *(long *)(lVar2 + 0x40);
      uVar4 = *(undefined8 *)(lVar2 + 0x38);
      *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(lVar2 + 0x40);
      *(undefined8 *)(lVar1 + 0x38) = uVar4;
      if (lVar3 != 0) {
        do {
          func_0x000107479b20();
        } while (extraout_w10 != 0);
      }
      FUN_107472210(&lStack_50);
      lVar2 = lStack_48;
    }
    func_0x00010747a660();
  }
  return;
}



/* Entry: 1074721a8; end: 1074721ab;  */

void FUN_1074721a8(undefined8 *param_1)

{
  *param_1 = &UNK_10e52b660;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



/* Entry: 1074721ac; end: 1074721d3;  */

undefined1  [16] FUN_1074721ac(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_1074721d4(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 1074721d4; end: 10747220f;  */

void FUN_1074721d4(undefined8 *param_1)

{
  char *pcVar1;
  char *extraout_x8;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    func_0x00010747aa78();
    pcVar1 = extraout_x8;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 107472210; end: 107472243;  */

long * FUN_107472210(long *param_1)

{
  param_1[1] = param_1[1] + 0x48;
  *param_1 = *param_1 + 1;
  FUN_1074721d4();
  return param_1;
}



/* Entry: 107472244; end: 107472247;  */

void FUN_107472244(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b2b60;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107472248; end: 10747225b;  */

void FUN_107472248(void)

{
  func_0x00010747229c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10747225c; end: 1074722a7;  */

void FUN_10747225c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107472264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1074722a8; end: 10747233f;  */

void FUN_1074722a8(long param_1)

{
  func_0x000107479fe4();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 107472340; end: 107472567;  */

void FUN_107472340(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 in_NG;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar7;
  long *plVar8;
  long *unaff_x26;
  long *plVar9;
  
  func_0x000107479cac();
  func_0x00010747a708();
  FUN_107471acc();
  plVar7 = (long *)(unaff_x20 + 0x10);
  plVar1 = unaff_x19 + 2;
LAB_107472378:
  do {
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      return;
    }
    plVar6 = unaff_x19 + 3;
    func_0x00010726364c(plVar6,plVar7 + 2);
    plVar8 = (long *)unaff_x19[1];
    if (plVar8 != (long *)0x0) {
      unaff_x21 = (long *)((long)plVar8 + -1);
      if (((ulong)plVar8 & (ulong)unaff_x21) == 0) {
        unaff_x26 = (long *)((ulong)unaff_x21 & (ulong)plVar6);
        in_NG = false;
      }
      else {
        in_NG = (long)plVar6 - (long)plVar8 < 0;
        unaff_x26 = plVar6;
        if (plVar8 <= plVar6) {
          uVar3 = 0;
          if (plVar8 != (long *)0x0) {
            uVar3 = (ulong)plVar6 / (ulong)plVar8;
          }
          unaff_x26 = (long *)((long)plVar6 - uVar3 * (long)plVar8);
        }
      }
      plVar9 = *(long **)(*unaff_x19 + (long)unaff_x26 * 8);
      if (plVar9 != (long *)0x0) {
        do {
          while( true ) {
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) goto LAB_10747241c;
            plVar4 = (long *)plVar9[1];
            in_NG = (long)plVar4 - (long)plVar6 < 0;
            if (plVar4 != plVar6) break;
            uVar3 = (ulong)(plVar9 + 2);
            func_0x000104c32db4(uVar3,plVar7 + 2);
            if ((uVar3 & 1) != 0) goto LAB_107472378;
          }
          if (((ulong)plVar8 & (ulong)unaff_x21) == 0) {
            plVar4 = (long *)((ulong)plVar4 & (ulong)unaff_x21);
          }
          else if (plVar8 <= plVar4) {
            uVar3 = 0;
            if (plVar8 != (long *)0x0) {
              uVar3 = (ulong)plVar4 / (ulong)plVar8;
            }
            plVar4 = (long *)((long)plVar4 - uVar3 * (long)plVar8);
          }
          in_NG = (long)plVar4 - (long)unaff_x26 < 0;
        } while (plVar4 == unaff_x26);
      }
    }
LAB_10747241c:
    __Znwm(0x88);
    func_0x0001001684dc();
    func_0x000104c2fe00();
    FUN_107470474(unaff_x21 + 9,plVar7 + 9);
    func_0x0001001684fc();
    if (plVar8 == (long *)0x0) {
LAB_107472454:
      func_0x000100168528((long)plVar8 << 1);
      FUN_107471acc();
      plVar8 = (long *)unaff_x19[1];
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        bVar2 = false;
        unaff_x26 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
      }
      else {
        bVar2 = (long)plVar6 - (long)plVar8 < 0;
        unaff_x26 = plVar6;
        if (plVar8 <= plVar6) {
          uVar3 = 0;
          if (plVar8 != (long *)0x0) {
            uVar3 = (ulong)plVar6 / (ulong)plVar8;
          }
          unaff_x26 = (long *)((long)plVar6 - uVar3 * (long)plVar8);
        }
      }
    }
    else {
      func_0x00010747a1a8(param_1,param_2,(float)plVar8);
      bVar2 = false;
      if ((bool)in_NG) goto LAB_107472454;
    }
    in_NG = bVar2;
    lVar5 = *unaff_x19;
    if (*(long *)(lVar5 + (long)unaff_x26 * 8) == 0) {
      *unaff_x21 = *plVar1;
      *plVar1 = (long)unaff_x21;
      *(long **)(lVar5 + (long)unaff_x26 * 8) = plVar1;
      if (*unaff_x21 != 0) {
        plVar6 = *(long **)(*unaff_x21 + 8);
        if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
          plVar6 = (long *)((ulong)plVar6 & (long)plVar8 - 1U);
          in_NG = false;
        }
        else {
          in_NG = (long)plVar6 - (long)plVar8 < 0;
          if (plVar8 <= plVar6) {
            uVar3 = 0;
            if (plVar8 != (long *)0x0) {
              uVar3 = (ulong)plVar6 / (ulong)plVar8;
            }
            plVar6 = (long *)((long)plVar6 - uVar3 * (long)plVar8);
          }
        }
        *(long **)(lVar5 + (long)plVar6 * 8) = unaff_x21;
      }
    }
    else {
      func_0x00010747a5e4();
    }
    func_0x000100168700();
    FUN_107471c38();
  } while( true );
}



/* Entry: 107472568; end: 1074725b7;  */

long * FUN_107472568(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    func_0x000107471c6c(lVar1);
    func_0x000107479f40();
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1074725b8; end: 1074725e3;  */

undefined8 * FUN_1074725b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b2bb0;
  func_0x0001074722f8(param_1 + 1);
  return param_1;
}



/* Entry: 1074725e4; end: 1074725f7;  */

void FUN_1074725e4(void)

{
  FUN_1074725b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074725f8; end: 10747262f;  */

undefined8 FUN_1074725f8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x340;
  __Znwm(0x340);
  FUN_107472d7c();
  return uVar1;
}



/* Entry: 107472630; end: 107472653;  */

void FUN_107472630(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  int extraout_w10;
  long unaff_x19;
  long unaff_x21;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  func_0x00010747a364();
  uVar2 = *puVar1;
  *param_2 = &PTR_FUN_1109b2bb0;
  param_2[1] = uVar2;
  func_0x00010747226c(param_2 + 2,puVar1 + 1);
  lVar3 = *(long *)(unaff_x21 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x21 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x21 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar2;
  if (lVar3 != 0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10 != 0);
  }
  func_0x0001072d488c(unaff_x19 + 0x38,unaff_x21 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x230) = *(undefined8 *)(unaff_x21 + 0x228);
  FUN_107472340(unaff_x19 + 0x238,unaff_x21 + 0x230);
  func_0x000104c2fe00(unaff_x19 + 0x260,unaff_x21 + 600);
  FUN_1073ae318(unaff_x19 + 0x298,unaff_x21 + 0x290);
  return;
}



/* Entry: 107472654; end: 107472d47;  */

void FUN_107472654(long param_1,byte *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  ulong uVar6;
  ulong extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong uVar7;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int extraout_w11_00;
  ulong extraout_x12;
  long extraout_x13;
  long lVar8;
  long extraout_x14;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 auStack_818 [24];
  undefined1 uStack_800;
  undefined1 uStack_7f8;
  undefined1 uStack_7e0;
  undefined4 auStack_7d8 [6];
  undefined4 uStack_7c0;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined4 uStack_790;
  undefined1 uStack_78c;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined1 auStack_768 [8];
  undefined1 auStack_760 [16];
  undefined8 uStack_750;
  long lStack_748;
  undefined8 uStack_740;
  undefined8 uStack_730;
  long *plStack_728;
  undefined1 auStack_720 [168];
  undefined8 uStack_678;
  undefined1 auStack_670 [16];
  undefined1 uStack_660;
  undefined8 uStack_630;
  long lStack_628;
  long lStack_618;
  long lStack_600;
  undefined1 auStack_5f8 [504];
  undefined1 auStack_400 [24];
  undefined8 *puStack_3e8;
  undefined1 auStack_3e0 [208];
  long lStack_310;
  undefined8 *apuStack_308 [8];
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long *plStack_298;
  undefined1 auStack_290 [504];
  undefined8 uStack_98;
  
  func_0x000107479adc();
  uStack_98 = extraout_x8;
  FUN_107469c74(auStack_760,param_1 + 0x10);
  iVar4 = (int)param_1 + 0x10;
  func_0x000107469cd8();
  if (iVar4 != 0) {
    if (*(long *)(param_2 + 0x10) == 0) {
      in_ZR = param_2[0x18] == 1;
      if (!(bool)in_ZR) {
        if ((param_2[0x19] & 1) == 0) {
          pbVar9 = param_2 + 0x20;
          if (*(long *)pbVar9 == 0) {
            func_0x000105c3d6c0(&lStack_310,&UNK_10f4158f8);
            func_0x00010747a1b4();
            func_0x0001001148fc(&lStack_310);
          }
          else {
            __ZNSt3__16chrono12steady_clock3nowEv();
            func_0x000107479dc0(*(undefined8 *)(param_1 + 0x230));
            auStack_7d8[0] = 0xd4;
            uStack_7c0 = 0;
            uStack_7a8 = 0;
            uStack_7a0 = 0;
            func_0x000107479cb8();
            uStack_7b0 = 0;
            uStack_790 = 0;
            uStack_78c = 1;
            uStack_780 = 0;
            uStack_778 = 0;
            uStack_788 = 0;
            func_0x0001072bbe40(auStack_7d8,&DAT_10f2f1bff,(*param_2 & 0xfe) == 2);
            lStack_310 = **(long **)(param_1 + 8);
            apuStack_308[0] = (undefined8 *)CONCAT44(apuStack_308[0]._4_4_,3);
            func_0x00010747a0f0(*(long **)(param_1 + 8),auStack_7d8,auStack_768,&lStack_310);
            uVar10 = *(ulong *)(param_1 + 0x240);
            if ((uVar10 != 0) && (*(long *)(param_1 + 0x250) != 0)) {
              uVar7 = param_1 + 0x250;
              func_0x00010726364c(uVar7,param_1 + 0x260);
              uVar11 = uVar10 - 1;
              if ((uVar10 & uVar11) == 0) {
                uVar13 = uVar7 & uVar11;
              }
              else {
                uVar13 = uVar7;
                if (uVar10 <= uVar7) {
                  uVar13 = 0;
                  if (uVar10 != 0) {
                    uVar13 = uVar7 / uVar10;
                  }
                  uVar13 = uVar7 - uVar13 * uVar10;
                }
              }
              plVar14 = *(long **)(*(long *)(param_1 + 0x238) + uVar13 * 8);
              if (plVar14 != (long *)0x0) {
                do {
                  while( true ) {
                    plVar14 = (long *)*plVar14;
                    if (plVar14 == (long *)0x0) goto LAB_107472888;
                    uVar6 = plVar14[1];
                    if (uVar7 != uVar6) break;
                    uVar6 = (ulong)(plVar14 + 2);
                    func_0x000104c32db4(uVar6,param_1 + 0x260);
                    if ((uVar6 & 1) != 0) {
                      FUN_107470474(auStack_818,plVar14 + 9);
                      goto LAB_107472898;
                    }
                  }
                  if ((uVar10 & uVar11) == 0) {
                    uVar6 = uVar6 & uVar11;
                  }
                  else if (uVar10 <= uVar6) {
                    func_0x00010747ab90();
                    uVar6 = extraout_x8_00;
                  }
                } while (uVar6 == uVar13);
              }
            }
LAB_107472888:
            auStack_818[0] = 0;
            uStack_800 = 0;
            uStack_7f8 = 0;
            uStack_7e0 = 0;
LAB_107472898:
            lVar15 = *(long *)(param_1 + 0x28);
            in_ZR = *(char *)(param_1 + 0x38) == '\a';
            if ((bool)in_ZR) {
              uStack_730 = *(undefined8 *)(lVar15 + 0x58);
              plVar14 = *(long **)(lVar15 + 0x60);
              if ((plVar14 == (long *)0x0) ||
                 (__ZNSt3__119__shared_weak_count4lockEv(), plStack_728 = plVar14,
                 plVar14 == (long *)0x0)) goto LAB_107472bfc;
              FUN_1073af260();
              (**(code **)(*plVar14 + 0x20))(&uStack_750);
              lStack_310 = lVar15;
              FUN_107470474(apuStack_308,auStack_818);
              uStack_2c0 = *(undefined8 *)(param_2 + 0x28);
              uStack_2c8 = *(undefined8 *)(param_2 + 0x20);
              if (*(long *)(param_2 + 0x28) != 0) {
                plVar14 = (long *)(*(long *)(param_2 + 0x28) + 8);
                do {
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                  if (bVar2) {
                    *plVar14 = *plVar14 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
              }
              lStack_2b0 = lStack_748;
              uStack_2b8 = uStack_750;
              if (lStack_748 != 0) {
                plVar14 = (long *)(lStack_748 + 0x10);
                do {
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                  if (bVar2) {
                    *plVar14 = *plVar14 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
              }
              uStack_2a8 = uStack_740;
              plStack_298 = plStack_728;
              uStack_2a0 = uStack_730;
              if (plStack_728 != (long *)0x0) {
                do {
                  func_0x000107479b20();
                } while (extraout_w10 != 0);
              }
              func_0x0001072d488c(auStack_290,(char *)(param_1 + 0x38));
              plVar14 = *(long **)(lVar15 + 0x198);
              FUN_107469e14(&uStack_678,&lStack_310);
              puStack_3e8 = (undefined8 *)0x0;
              puVar5 = (undefined8 *)0x280;
              __Znwm();
              *puVar5 = &PTR_FUN_1109b2cb8;
              puVar5[1] = uStack_678;
              FUN_107470474(puVar5 + 2,auStack_670);
              puVar12 = &uStack_678;
              puVar5[0xb] = lStack_628;
              puVar5[10] = uStack_630;
              if (lStack_628 != 0) {
                do {
                  func_0x000107479c1c();
                  puVar12 = extraout_x8_01;
                } while (extraout_w11 != 0);
              }
              uVar16 = puVar12[0xb];
              puVar5[0xd] = puVar12[0xc];
              puVar5[0xc] = uVar16;
              if (lStack_618 != 0) {
                do {
                  func_0x000107479c1c();
                  puVar12 = extraout_x8_02;
                } while (extraout_w11_00 != 0);
              }
              uVar16 = puVar12[0xd];
              puVar5[0xf] = puVar12[0xe];
              puVar5[0xe] = uVar16;
              puVar5[0x10] = lStack_600;
              if (lStack_600 != 0) {
                do {
                  func_0x000107479b20();
                } while (extraout_w10_00 != 0);
              }
              func_0x0001072d488c(puVar5 + 0x11,auStack_5f8);
              puStack_3e8 = puVar5;
              FUN_1073ae318(auStack_720,param_1 + 0x298);
              func_0x000107273dcc(auStack_3e0,auStack_400,auStack_720);
              (**(code **)(*plVar14 + 0x18))(plVar14,auStack_3e0);
              func_0x000107273efc(auStack_3e0);
              func_0x000107273f24(auStack_720);
              func_0x0001006393ec(auStack_400);
              FUN_107469ed4(&uStack_678);
              FUN_107469ed4(&lStack_310);
              func_0x00010725b1d4(&uStack_750);
              FUN_1074738dc(&uStack_730);
            }
            else {
              uVar10 = *(ulong *)(lVar15 + 400);
              param_1 = param_1 + 0x40;
              FUN_1074e2a54(uVar10,param_1,pbVar9);
              puVar12 = (undefined8 *)(lVar15 + 0xd0);
              Hint_Prefetch(*puVar12,0,2,0);
              func_0x00010747a9ec(*puVar12);
              func_0x00010747ab64(*(ulong *)(lVar15 + 0xd0) >> 0xc ^ uVar10 >> 7);
              do {
                func_0x00010747ab9c();
                lVar8 = extraout_x13;
                for (uVar7 = extraout_x8_03 & 0x8080808080808080; uVar7 != 0;
                    uVar7 = uVar7 - 1 & uVar7) {
                  uVar11 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                           (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
                  uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10
                  ;
                  puVar5 = (undefined8 *)
                           (extraout_x14 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) &
                           extraout_x12);
                  plVar14 = &lStack_310;
                  lStack_310 = param_1;
                  apuStack_308[0] = puVar12;
                  func_0x000107473c00(plVar14,*(long *)(lVar15 + 0xd8) + (long)puVar5 * lVar8);
                  if (((ulong)plVar14 & 1) != 0) goto LAB_107472bb0;
                  lVar8 = 0x48;
                }
                func_0x00010747a1bc();
              } while ((extraout_x8_04 & 1) == 0);
              func_0x000107471c90(puVar12,uVar10);
              lVar8 = *(long *)(lVar15 + 0xd8) + (long)puVar12 * 0x48;
              func_0x000104c2fe00(lVar8,param_1);
              *(undefined8 *)(lVar8 + 0x38) = 0;
              *(undefined8 *)(lVar8 + 0x40) = 0;
              puVar5 = puVar12;
LAB_107472bb0:
              func_0x0001072631dc(*(long *)(lVar15 + 0xd8) + (long)puVar5 * 0x48 + 0x38,pbVar9);
              func_0x000104c2fe00(&lStack_310,param_1);
              FUN_107469d18(lVar15,&lStack_310);
              func_0x00010747a558();
            }
            FUN_1074704ac(auStack_818);
            func_0x000107262330(auStack_7d8);
          }
        }
        goto LAB_107472708;
      }
      func_0x00010747a560();
      func_0x000105c3d6d8(&uStack_678,&UNK_10f4158ed);
      func_0x00010747a1b4();
    }
    else {
      func_0x00010747a560();
      func_0x00010002b838(&uStack_678,"error");
      uStack_660 = 1;
      func_0x00010747a1b4();
    }
    func_0x0001001148fc(&uStack_678);
    func_0x00010747a558();
  }
LAB_107472708:
  func_0x000107270b00(auStack_760);
  func_0x000107479a9c(uStack_98);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_107472bfc:
  func_0x00010527822c();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x107472c04);
  (*pcVar3)();
}



/* Entry: 107472d48; end: 107472d6f;  */

void FUN_107472d48(undefined8 param_1)

{
  func_0x000107479cd8();
  func_0x000107479ca4(param_1,&PTR_DAT_1109b2c10);
  func_0x000107479b00();
  return;
}



/* Entry: 107472d70; end: 107472d7b;  */

undefined ** FUN_107472d70(void)

{
  return &PTR_DAT_1109b2c10;
}



/* Entry: 107472d7c; end: 107472e47;  */

void FUN_107472d7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  int extraout_w10;
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010747a364();
  uVar1 = *param_2;
  *param_1 = &PTR_FUN_1109b2bb0;
  param_1[1] = uVar1;
  func_0x00010747226c(param_1 + 2,param_2 + 1);
  lVar2 = *(long *)(unaff_x21 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x21 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x21 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar1;
  if (lVar2 != 0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10 != 0);
  }
  func_0x0001072d488c(unaff_x19 + 0x38,unaff_x21 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x230) = *(undefined8 *)(unaff_x21 + 0x228);
  FUN_107472340(unaff_x19 + 0x238,unaff_x21 + 0x230);
  func_0x000104c2fe00(unaff_x19 + 0x260,unaff_x21 + 600);
  FUN_1073ae318(unaff_x19 + 0x298,unaff_x21 + 0x290);
  return;
}



/* Entry: 107472e48; end: 107472e8f;  */

void FUN_107472e48(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107479cac();
  func_0x00010747abc0();
  FUN_107472e90();
  *(undefined8 *)(unaff_x19 + 0x188) = *(undefined8 *)(unaff_x20 + 0x188);
  FUN_1073ae318(unaff_x19 + 400,unaff_x20 + 400);
  return;
}



/* Entry: 107472e90; end: 107472ec7;  */

void FUN_107472e90(long param_1)

{
  long unaff_x20;
  
  func_0x000107479cac();
  __ZNSt3__119__shared_mutex_baseC1Ev();
  FUN_107472ec8(param_1 + 0xa8,unaff_x20 + 0xa8);
  return;
}



/* Entry: 107472ec8; end: 107472fbb;  */

void FUN_107472ec8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107479cac();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x000104c2fe00(param_1 + 0x18,unaff_x20 + 0x18);
  *(undefined4 *)(unaff_x19 + 0x50) = *(undefined4 *)(unaff_x20 + 0x50);
  FUN_1073658bc(unaff_x19 + 0x58,unaff_x20 + 0x58);
  FUN_1073ae3fc(unaff_x19 + 0x70,unaff_x20 + 0x70);
  lVar1 = *(long *)(unaff_x20 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x19 + 0x88) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10 != 0);
  }
  lVar1 = *(long *)(unaff_x20 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)(unaff_x20 + 0xa0);
  *(undefined8 *)(unaff_x19 + 0x98) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10_00 != 0);
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0xa8);
  *(undefined1 *)(unaff_x19 + 0xb0) = *(undefined1 *)(unaff_x20 + 0xb0);
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar2;
  FUN_1073c67e4(unaff_x19 + 0xb8,unaff_x20 + 0xb8);
  return;
}



/* Entry: 107472fbc; end: 10747302f;  */

void FUN_107472fbc(long param_1)

{
  func_0x000107472fe4(param_1 + 0xa8);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x70);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 107473030; end: 10747305b;  */

void FUN_107473030(long param_1)

{
  func_0x000107479c78();
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_1074738dc();
  }
  return;
}



/* Entry: 10747305c; end: 1074730af;  */

void FUN_10747305c(void)

{
  func_0x000107479e10();
  func_0x000107473080();
  return;
}



/* Entry: 1074730b0; end: 1074730b7;  */

void FUN_1074730b0(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x000107479ce4(param_1,*param_1);
  for (lVar1 = param_1[1]; lVar1 != unaff_x19; lVar1 = lVar1 + -0x88) {
    FUN_1074730f4(lVar1 + -0x80);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1074730b8; end: 1074730f3;  */

void FUN_1074730b8(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x000107479ce4();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x88) {
    FUN_1074730f4(lVar1 + -0x80);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1074730f4; end: 10747313b;  */

void FUN_1074730f4(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x78) != 0xffffffff) {
    func_0x00010747a0e0((&PTR_FUN_1109b2c20)[*(uint *)(param_1 + 0x78)],&uStack_21);
  }
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  return;
}



/* Entry: 10747313c; end: 10747314f;  */

void FUN_10747313c(undefined8 param_1,long param_2)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_2 + 0x28) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107eb090)[*(uint *)(param_2 + 0x28)])(&uStack_21,param_2);
  }
  *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
  return;
}



/* Entry: 107473150; end: 10747317f;  */

long FUN_107473150(long param_1)

{
  func_0x0001001148fc(param_1 + 0x58);
  func_0x0001001148fc(param_1 + 0x38);
  func_0x000107479d54();
  return param_1;
}



/* Entry: 107473180; end: 1074731d7;  */

void FUN_107473180(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107479cac();
  FUN_107471da4();
  func_0x000107471f3c(param_1 + 0x20,unaff_x20 + 0x20);
  FUN_1074720fc(unaff_x19 + 0x38,unaff_x20 + 0x38);
  return;
}



/* Entry: 1074731d8; end: 1074731ff;  */

long FUN_1074731d8(long param_1)

{
  func_0x00010747026c(param_1 + 0x188);
  func_0x00010747a864();
  return param_1;
}



/* Entry: 107473200; end: 107473247;  */

void FUN_107473200(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x20) != 0xffffffff) {
    func_0x00010747a0e0((&PTR_FUN_1109b2c40)[*(uint *)(param_1 + 0x20)],&uStack_21);
  }
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  return;
}



/* Entry: 107473248; end: 10747325f;  */

void FUN_107473248(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_2);
  return;
}



/* Entry: 107473260; end: 107473283;  */

void FUN_107473260(void)

{
  func_0x000107479b6c();
  FUN_1073c5fb4();
  return;
}



/* Entry: 107473284; end: 10747328f;  */

void FUN_107473284(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *unaff_x19;
  uint unaff_w20;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  func_0x000107479c78();
  func_0x000107479cac();
  plVar6 = (long *)(param_1 + 8);
  plVar5 = plVar6;
  plVar4 = plVar6;
  plVar1 = (long *)*plVar6;
joined_r0x0001074732bc:
  do {
    if (plVar1 == (long *)0x0) {
LAB_107473310:
      puVar3 = (undefined8 *)0x40;
      __Znwm();
      uStack_58 = 0;
      puStack_68 = puVar3;
      plStack_60 = plVar6;
      FUN_107473420(puVar3 + 4);
      func_0x0001001684f0();
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = plVar4;
      *plVar5 = (long)puVar3;
      if (*(long *)*unaff_x19 != 0) {
        *unaff_x19 = *(long *)*unaff_x19;
      }
      func_0x00010002c5b0(unaff_x19[1],puVar3);
      unaff_x19[2] = unaff_x19[2] + 1;
      puStack_68 = (undefined8 *)0x0;
      func_0x000107473444(&puStack_68);
      return;
    }
    uVar2 = unaff_w20;
    func_0x000100125af4();
    plVar4 = plVar1;
    if ((uVar2 >> 7 & 1) == 0) {
      uVar2 = (int)plVar1 + 0x20;
      func_0x000100125af4();
      if ((uVar2 >> 7 & 1) == 0) {
        if (*plVar5 != 0) {
          return;
        }
        goto LAB_107473310;
      }
      plVar5 = plVar1 + 1;
      plVar1 = (long *)*plVar5;
      goto joined_r0x0001074732bc;
    }
    plVar5 = plVar1;
    plVar1 = (long *)*plVar1;
  } while( true );
}



/* Entry: 107473290; end: 107473393;  */

void FUN_107473290(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *unaff_x19;
  uint unaff_w20;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  func_0x000107479cac();
  plVar6 = (long *)(param_1 + 8);
  plVar5 = plVar6;
  plVar4 = plVar6;
  plVar1 = (long *)*plVar6;
joined_r0x0001074732bc:
  do {
    if (plVar1 == (long *)0x0) {
LAB_107473310:
      puVar3 = (undefined8 *)0x40;
      __Znwm();
      uStack_48 = 0;
      puStack_58 = puVar3;
      plStack_50 = plVar6;
      FUN_107473420(puVar3 + 4);
      func_0x0001001684f0();
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = plVar4;
      *plVar5 = (long)puVar3;
      if (*(long *)*unaff_x19 != 0) {
        *unaff_x19 = *(long *)*unaff_x19;
      }
      func_0x00010002c5b0(unaff_x19[1],puVar3);
      unaff_x19[2] = unaff_x19[2] + 1;
      puStack_58 = (undefined8 *)0x0;
      func_0x000107473444(&puStack_58);
      return;
    }
    uVar2 = unaff_w20;
    func_0x000100125af4();
    plVar4 = plVar1;
    if ((uVar2 >> 7 & 1) == 0) {
      uVar2 = (int)plVar1 + 0x20;
      func_0x000100125af4();
      if ((uVar2 >> 7 & 1) == 0) {
        if (*plVar5 != 0) {
          return;
        }
        goto LAB_107473310;
      }
      plVar5 = plVar1 + 1;
      plVar1 = (long *)*plVar5;
      goto joined_r0x0001074732bc;
    }
    plVar5 = plVar1;
    plVar1 = (long *)*plVar1;
  } while( true );
}



/* Entry: 107473394; end: 10747341f;  */

void FUN_107473394(long param_1)

{
  long *unaff_x19;
  long unaff_x20;
  ulong uVar1;
  undefined8 uStack_48;
  
  func_0x000107479cac();
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x00010747a6b4();
    FUN_107471200();
    unaff_x20 = uVar1 + 0xb0;
    unaff_x19[1] = unaff_x20;
  }
  else {
    func_0x00010747a29c(uVar1 - *unaff_x19);
    func_0x000107479f78();
    FUN_107471200(uStack_48);
    func_0x00010747a2cc();
    func_0x00010747a764();
  }
  unaff_x19[1] = unaff_x20;
  return;
}



/* Entry: 107473420; end: 107473537;  */

void FUN_107473420(long param_1,long param_2)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return;
}



/* Entry: 107473538; end: 1074735c3;  */

void FUN_107473538(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int extraout_w10;
  
  if ((bRam00000001131ad7b0 & 1) == 0) {
    iVar3 = 0x131ad7b0;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      FUN_1074735c4(0x1131ad7a0);
      ___cxa_guard_release(0x1131ad7b0);
    }
  }
  lVar2 = lRam00000001131ad7a8;
  uVar1 = uRam00000001131ad7a0;
  param_1[1] = lRam00000001131ad7a8;
  *param_1 = uVar1;
  if (lVar2 != 0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1074735c4; end: 1074735df;  */

void FUN_1074735c4(void)

{
  undefined1 uStack_11;
  
  FUN_1074735e0(&uStack_11);
  return;
}



/* Entry: 1074735e0; end: 10747364f;  */

undefined1 * FUN_1074735e0(void)

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
  func_0x000107479adc();
  uVar3 = 1;
  uStack_28 = extraout_x8;
  FUN_107473650();
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_1109b2c68;
  puStack_30[4] = 0;
  puStack_30[3] = 0;
  puStack_30[6] = 0;
  puStack_30[5] = 0;
  func_0x000107479dd0();
  FUN_10747376c();
  func_0x000107479a9c(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar1 + 8) = uVar3;
  puVar2 = puVar1;
  FUN_107473678();
  *(undefined1 **)(puVar1 + 0x10) = puVar2;
  return puVar1;
}



/* Entry: 107473650; end: 107473677;  */

long FUN_107473650(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_107473678();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 107473678; end: 1074736a7;  */

void FUN_107473678(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x492492492492493) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x38);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_1109b2c68;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1074736a8; end: 1074736ab;  */

void FUN_1074736a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b2c68;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1074736ac; end: 1074736bf;  */

void FUN_1074736ac(void)

{
  func_0x0001074736cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074736c0; end: 1074736db;  */

void FUN_1074736c0(long param_1)

{
  func_0x000107479e10(param_1 + 0x18);
  func_0x000107473700();
  return;
}



/* Entry: 1074736dc; end: 10747372f;  */

void FUN_1074736dc(void)

{
  func_0x000107479e10();
  func_0x000107473700();
  return;
}



/* Entry: 107473730; end: 107473737;  */

void FUN_107473730(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107479ce4(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x38;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107473738; end: 10747376b;  */

void FUN_107473738(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107479ce4();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x38;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10747376c; end: 10747377b;  */

void FUN_10747376c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10747377c; end: 10747380b;  */

void FUN_10747377c(long param_1)

{
  func_0x000107479fe4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10747380c; end: 1074738cf;  */

undefined1  [16] FUN_10747380c(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong *unaff_x19;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  func_0x00010747a738();
  func_0x000107479cac();
  func_0x00010747a530();
  lVar4 = 0;
  uVar5 = unaff_x19[2];
  func_0x00010747ab64(*unaff_x19 >> 0xc ^ param_1 >> 7);
  uVar6 = extraout_x8;
  while( true ) {
    uVar6 = uVar6 & uVar5;
    func_0x00010747ab9c();
    while ((extraout_x8_00 & 0x8080808080808080) != 0) {
      uVar1 = (extraout_x8_00 & 0x8080808080808080) >> 7;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      puVar3 = (ulong *)(uVar6 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uVar5);
      uVar1 = 0;
      FUN_1074738d0(&stack0xffffffffffffff70,unaff_x19[1] + (long)puVar3 * 0x58);
      if ((uVar1 & 1) != 0) {
        uVar2 = 0;
        goto LAB_1074738ac;
      }
      func_0x00010747aba8();
    }
    func_0x00010747a1bc();
    if ((extraout_x8_01 & 1) != 0) break;
    lVar4 = lVar4 + 8;
    uVar6 = lVar4 + uVar6;
  }
  func_0x0001074717cc();
  uVar2 = 1;
  puVar3 = unaff_x19;
LAB_1074738ac:
  auVar7._8_8_ = uVar2;
  auVar7._0_8_ = puVar3;
  return auVar7;
}



/* Entry: 1074738d0; end: 1074738db;  */

bool FUN_1074738d0(undefined8 *param_1,long param_2)

{
  long unaff_x20;
  
  func_0x000104c2fe38(param_2,*param_1,param_2 + 0x38);
  func_0x000104c345b0();
  func_0x000104c2fe38();
  return unaff_x20 == param_2;
}



/* Entry: 1074738dc; end: 1074739c3;  */

void FUN_1074738dc(long param_1)

{
  func_0x000107479fe4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1074739c4; end: 1074739d7;  */

void FUN_1074739c4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  
  if (*(long *)(param_3 + 0x18) != 0) {
    FUN_1074739f8(&stack0xffffffffffffffef,param_3);
    return;
  }
  if ((bRam00000001131ad798 & 1) == 0) {
    iVar6 = 0x131ad798;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      FUN_107460390(0x1131ad788);
      ___cxa_guard_release(0x1131ad798);
    }
  }
  lVar5 = lRam00000001131ad790;
  uVar4 = uRam00000001131ad788;
  param_1[1] = lRam00000001131ad790;
  *param_1 = uVar4;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 1074739d8; end: 1074739f7;  */

void FUN_1074739d8(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1074739f8(&uStack_11,param_1);
  return;
}



/* Entry: 1074739f8; end: 107473a63;  */

undefined8 * FUN_1074739f8(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  func_0x000107479adc();
  uStack_28 = extraout_x8;
  FUN_10745fa30(auStack_40,1);
  FUN_107473a64(puStack_30,param_2);
  func_0x000107479dd0();
  func_0x00010745faf0();
  func_0x000107479a9c(uStack_28);
  if ((bool)in_ZR) {
    return puStack_30;
  }
  ___stack_chk_fail();
  func_0x000107479dac();
  func_0x00010745faf0();
  puVar1 = puStack_30;
  func_0x000107479c68();
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_1109b2790;
  puVar1[1] = 0;
  FUN_107473aa4(puVar1 + 3);
  return puVar1;
}



/* Entry: 107473a64; end: 107473aa3;  */

undefined8 * FUN_107473a64(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109b2790;
  param_1[1] = 0;
  FUN_107473aa4(param_1 + 3);
  return param_1;
}



/* Entry: 107473aa4; end: 107473abb;  */

void FUN_107473aa4(long param_1)

{
  func_0x000107261fa8();
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 107473abc; end: 107473adf;  */

undefined8 FUN_107473abc(undefined8 param_1)

{
  FUN_107473ae0();
  return param_1;
}



/* Entry: 107473ae0; end: 107473aeb;  */

void FUN_107473ae0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puStack_20;
  undefined8 *puStack_18;
  
  if (*(int *)(param_1 + 2) == 2) {
    if (param_1 != param_2) {
      puStack_18 = (undefined8 *)param_2[1];
      puStack_20 = (undefined8 *)*param_2;
      *param_2 = 0;
      param_2[1] = 0;
      FUN_1073ebe30(param_1,&puStack_20);
      FUN_1073dd578(&puStack_20);
    }
    return;
  }
  puStack_20 = param_1;
  puStack_18 = param_2;
  FUN_1073ebde8(&puStack_20);
  return;
}



/* Entry: 107473aec; end: 107473b0f;  */

undefined8 FUN_107473aec(undefined8 param_1)

{
  FUN_107473b10();
  return param_1;
}



/* Entry: 107473b10; end: 107473b1b;  */

void FUN_107473b10(long param_1,undefined8 param_2)

{
  long lStack_20;
  undefined8 uStack_18;
  
  if (*(int *)(param_1 + 0x10) != 1) {
    lStack_20 = param_1;
    uStack_18 = param_2;
    FUN_1073ebd7c(&lStack_20,param_1);
  }
  return;
}



/* Entry: 107473b1c; end: 107473be7;  */

void FUN_107473b1c(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x000107479bd0();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x000107479b8c(uVar1);
  return;
}


