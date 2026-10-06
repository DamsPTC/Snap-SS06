/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1074c29e4; end: 1074c2a97;  */

void FUN_1074c29e4(long *param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  func_0x0001074c87c0();
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = extraout_x8 + ((lVar1 - lVar4) / -0x6d0) * 0x6d0;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0x6d0) {
    FUN_1074c2894(lVar2,lVar3);
    lVar2 = lVar2 + 0x6d0;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x6d0) {
    func_0x0001074c2b58(lVar4);
  }
  unaff_x19[1] = lVar5;
  lVar3 = *unaff_x20;
  *unaff_x20 = lVar5;
  unaff_x20[1] = lVar3;
  unaff_x19[1] = lVar3;
  lVar3 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = lVar3;
  lVar3 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = lVar3;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 1074c2a98; end: 1074c2aa3;  */

void FUN_1074c2a98(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x0001074c86b8();
  func_0x0001074c8848();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0x2593f69b02593f < unaff_x20) {
      func_0x000104bd35f4();
      func_0x0001074c8db4();
      while (unaff_x20 != unaff_x19[2]) {
        unaff_x19[2] = unaff_x19[2] - 0x6d0;
        func_0x0001074c2b58();
      }
      if (*unaff_x19 != 0) {
        __ZdlPv();
      }
      return;
    }
    lVar1 = unaff_x20 * 0x6d0;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x6d0;
  *unaff_x19 = lVar1;
  unaff_x19[1] = lVar2;
  unaff_x19[2] = lVar2;
  unaff_x19[3] = lVar1 + unaff_x20 * 0x6d0;
  return;
}



/* Entry: 1074c2aa4; end: 1074c2b13;  */

void FUN_1074c2aa4(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x0001074c8848();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0x2593f69b02593f < unaff_x20) {
      func_0x000104bd35f4();
      func_0x0001074c8db4();
      while (unaff_x20 != unaff_x19[2]) {
        unaff_x19[2] = unaff_x19[2] - 0x6d0;
        func_0x0001074c2b58();
      }
      if (*unaff_x19 != 0) {
        __ZdlPv();
      }
      return;
    }
    lVar1 = unaff_x20 * 0x6d0;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x6d0;
  *unaff_x19 = lVar1;
  unaff_x19[1] = lVar2;
  unaff_x19[2] = lVar2;
  unaff_x19[3] = lVar1 + unaff_x20 * 0x6d0;
  return;
}



/* Entry: 1074c2b14; end: 1074c2c8f;  */

void FUN_1074c2b14(void)

{
  long *unaff_x19;
  long unaff_x20;
  
  func_0x0001074c8db4();
  while (unaff_x20 != unaff_x19[2]) {
    unaff_x19[2] = unaff_x19[2] + -0x6d0;
    func_0x0001074c2b58();
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1074c2c90; end: 1074c2cd3;  */

void FUN_1074c2c90(long param_1)

{
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    func_0x0001074c8828((&PTR_FUN_1109b4dc8)[*(uint *)(param_1 + 0x18)]);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 1074c2cd4; end: 1074c2ce3;  */

void FUN_1074c2cd4(undefined8 param_1,long param_2)

{
  func_0x00010725c0a0();
  if (param_2 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1074c2ce4; end: 1074c2d03;  */

void FUN_1074c2ce4(void)

{
  func_0x0001074c91a4();
  FUN_1074c2d04();
  return;
}



/* Entry: 1074c2d04; end: 1074c2d1b;  */

void FUN_1074c2d04(long *param_1)

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



/* Entry: 1074c2d1c; end: 1074c2d6f;  */

void FUN_1074c2d1c(void)

{
  func_0x0001074c87f8();
  func_0x0001074c2d40();
  return;
}



/* Entry: 1074c2d70; end: 1074c2d77;  */

void FUN_1074c2d70(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074c8868(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -200;
    func_0x0001074c2dac();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1074c2d78; end: 1074c2ebb;  */

void FUN_1074c2d78(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074c8868();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -200;
    func_0x0001074c2dac();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1074c2ebc; end: 1074c2ec3;  */

void FUN_1074c2ebc(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074c8868(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x6d0;
    func_0x0001074c2b58();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1074c2ec4; end: 1074c2ef7;  */

void FUN_1074c2ec4(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074c8868();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x6d0;
    func_0x0001074c2b58();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1074c2ef8; end: 1074c2f2f;  */

void FUN_1074c2ef8(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



/* Entry: 1074c2f30; end: 1074c3077;  */

void FUN_1074c2f30(long *param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar5;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  ulong extraout_x10;
  ulong uVar6;
  ulong extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar7;
  long *plVar8;
  
  plVar5 = param_1;
  plVar4 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar5 = param_2;
  }
  plVar8 = (long *)param_1[1];
  bVar2 = plVar8 <= param_2;
  if (!bVar2 || param_2 == plVar8) {
    if (bVar2) {
      return;
    }
    func_0x0001074c8bf0();
    if ((bVar2) && (((ulong)plVar8 & (long)plVar8 - 1U) == 0)) {
      func_0x0001074c86e4();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    if (param_2 <= plVar5) {
      param_2 = plVar5;
    }
    if (plVar8 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_1074c3078(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm(lVar3);
    FUN_1074c3078(param_1,lVar3);
    plVar5 = (long *)0x0;
    param_1[1] = (long)param_2;
    while (param_2 != plVar5) {
      func_0x0001074c8d60();
      plVar5 = extraout_x9;
    }
    if (param_1[2] != 0) {
      func_0x0001074c9144();
      func_0x0001074c9130();
      lVar3 = extraout_x8;
      plVar5 = extraout_x9_00;
      uVar6 = extraout_x10;
      plVar4 = extraout_x11;
      while (plVar8 = plVar5, plVar5 = (long *)*plVar8, plVar5 != (long *)0x0) {
        plVar7 = (long *)plVar5[1];
        if (((ulong)param_2 & uVar6) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar6);
        }
        else if (param_2 <= plVar7) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar7 / (ulong)param_2;
          }
          plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
        }
        if (plVar7 != plVar4) {
          if (*(long *)(lVar3 + (long)plVar7 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar7 * 8) = plVar8;
            plVar4 = plVar7;
          }
          else {
            *plVar8 = *plVar5;
            func_0x0001074c8710();
            lVar3 = extraout_x8_00;
            plVar5 = extraout_x9_01;
            uVar6 = extraout_x10_00;
            plVar4 = extraout_x11_00;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar3 = *plVar5;
  *plVar5 = (long)plVar4;
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074c3078; end: 1074c308f;  */

void FUN_1074c3078(long *param_1,long param_2)

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



/* Entry: 1074c3090; end: 1074c3117;  */

long * FUN_1074c3090(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001074c2c68(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1074c3118; end: 1074c3123;  */

void FUN_1074c3118(void)

{
  func_0x0001074c86b8();
  FUN_1074c3144();
  return;
}



/* Entry: 1074c3124; end: 1074c3143;  */

void FUN_1074c3124(void)

{
  FUN_1074c3144();
  return;
}



/* Entry: 1074c3144; end: 1074c316b;  */

long FUN_1074c3144(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < 0xccccccccccccccd) {
    lVar1 = param_2 * 0x14;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_1074c3198(param_1);
  }
  return param_1;
}



/* Entry: 1074c316c; end: 1074c3197;  */

long FUN_1074c316c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_1074c3198(param_1);
  }
  return param_1;
}



/* Entry: 1074c3198; end: 1074c31ab;  */

void FUN_1074c3198(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074c31ac; end: 1074c31fb;  */

void FUN_1074c31ac(void)

{
  func_0x0001074c87f8();
  FUN_1074c3198();
  return;
}



/* Entry: 1074c31fc; end: 1074c326b;  */

void FUN_1074c31fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    FUN_1074c326c(param_1,param_4);
    FUN_1074c32b8(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  FUN_1074c3488(&uStack_40);
  return;
}



/* Entry: 1074c326c; end: 1074c32b7;  */

void FUN_1074c326c(long *param_1,ulong param_2)

{
  long *plVar1;
  long unaff_x19;
  
  if (param_2 < 0x1af286bca1af287) {
    plVar1 = param_1 + 2;
    func_0x00010748bc0c();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 0x13);
  }
  else {
    FUN_10748bbc4();
    func_0x0001074c8db4();
    param_1 = param_1 + 2;
    FUN_1074c32e8();
    *(long **)(unaff_x19 + 8) = param_1;
  }
  return;
}



/* Entry: 1074c32b8; end: 1074c32e7;  */

void FUN_1074c32b8(long param_1)

{
  long unaff_x19;
  
  func_0x0001074c8db4();
  param_1 = param_1 + 0x10;
  FUN_1074c32e8();
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1074c32e8; end: 1074c32fb;  */

void FUN_1074c32e8(void)

{
  FUN_1074c32fc();
  return;
}



/* Entry: 1074c32fc; end: 1074c3373;  */

long FUN_1074c32fc(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x0001074c90e8();
  uStack_48 = 0;
  for (; param_2 != param_3; param_2 = param_2 + 0x98) {
    FUN_1074c3374(param_4,param_2);
    param_4 = lStack_38 + 0x98;
    lStack_38 = param_4;
  }
  func_0x0001074c8c9c();
  FUN_10748bd18(auStack_60);
  return param_4;
}



/* Entry: 1074c3374; end: 1074c33e7;  */

void FUN_1074c3374(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x0001074c8848();
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001074c8654();
    } while (extraout_w10 != 0);
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x29);
  *(undefined8 *)(unaff_x19 + 0x31) = *(undefined8 *)(unaff_x20 + 0x31);
  *(undefined8 *)(unaff_x19 + 0x29) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x18) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x28) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x20) = uVar4;
  FUN_1074c33e8(unaff_x19 + 0x40,unaff_x20 + 0x40);
  func_0x000104c2fe00(unaff_x19 + 0x58,unaff_x20 + 0x58);
  *(undefined1 *)(unaff_x19 + 0x90) = *(undefined1 *)(unaff_x20 + 0x90);
  return;
}



/* Entry: 1074c33e8; end: 1074c340f;  */

void FUN_1074c33e8(void)

{
  func_0x0001074c8d90();
  FUN_1074c3410();
  return;
}



/* Entry: 1074c3410; end: 1074c3487;  */

void FUN_1074c3410(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x0001074c8848();
    FUN_1074b298c();
    lVar1 = *(long *)(unaff_x19 + 8);
    if (param_3 - unaff_x20 != 0) {
      _memmove(lVar1);
    }
    *(long *)(unaff_x19 + 8) = lVar1 + (param_3 - unaff_x20);
  }
  uStack_38 = 1;
  FUN_1074b2a28(&uStack_40);
  return;
}



/* Entry: 1074c3488; end: 1074c3507;  */

long FUN_1074c3488(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010748ab98(param_1);
  }
  return param_1;
}



/* Entry: 1074c3508; end: 1074c350f;  */

void FUN_1074c3508(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074c8868(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x100;
    func_0x0001074c51b0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1074c3510; end: 1074c3543;  */

void FUN_1074c3510(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074c8868();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x100;
    func_0x0001074c51b0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1074c3544; end: 1074c35b3;  */

bool FUN_1074c3544(long param_1,ulong *param_2,ulong *param_3)

{
  long *plVar1;
  long lVar2;
  ulong *puVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  plVar1 = (long *)(param_1 + 8);
  do {
    puVar3 = param_2;
    if (puVar3 == param_3) break;
    uVar5 = *puVar3;
    plVar4 = plVar1;
    plVar6 = plVar1;
    while (plVar7 = (long *)*plVar6, plVar7 != (long *)0x0) {
      lVar2 = 8;
      if (uVar5 <= (ulong)plVar7[4]) {
        lVar2 = 0;
      }
      plVar6 = (long *)((long)plVar7 + lVar2);
      if (uVar5 <= (ulong)plVar7[4]) {
        plVar4 = plVar7;
      }
    }
    if ((plVar1 == plVar4) || (uVar5 < (ulong)plVar4[4])) {
      plVar4 = plVar1;
    }
    param_2 = puVar3 + 1;
  } while (plVar1 == plVar4);
  return puVar3 != param_3;
}



/* Entry: 1074c35b4; end: 1074c39e7;  */

void FUN_1074c35b4(float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
                  long param_6,long param_7,long *param_8,long param_9,long *param_10)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 extraout_x8;
  ulong uVar4;
  undefined8 uVar5;
  long extraout_x8_00;
  long extraout_x8_01;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined8 uStack_d8;
  long alStack_d0 [9];
  undefined8 uStack_88;
  
  func_0x0001074c8688();
  uVar4 = (ulong)*(ushort *)(param_10[3] + param_9 * 2);
  if (uVar4 < (ulong)((param_7 - param_6) / 0x6d0)) {
    lVar7 = param_10[9];
    param_6 = param_6 + uVar4 * 0x6d0;
    iVar1 = *(int *)(param_6 + 0x508);
    uStack_88 = extraout_x8;
    fVar13 = param_1;
    FUN_1074c1ac4(alStack_d0,*param_8,param_8[1]);
    lVar8 = *(long *)(alStack_d0[0] + 0x20) + (ulong)*(ushort *)(param_10[3] + param_9 * 2) * 0x470;
    FUN_1074c58b4(alStack_d0);
    FUN_1074c3ba8(lVar8 + 0x168,param_5);
    fVar14 = fVar13;
    FUN_1074c3c4c(lVar8 + 0x260,param_5);
    lVar7 = lVar7 + param_9 * 0x1a8;
    uVar5 = CONCAT44(param_2 * fVar14,fVar13 * fVar14);
    *(ulong *)(lVar7 + 0x118) = CONCAT44(param_4 * fVar14,param_3 * fVar14);
    *(undefined8 *)(lVar7 + 0x110) = uVar5;
    FUN_1074c3cac(lVar8 + 0x388,param_5);
    fVar14 = (float)uVar5;
    *(float *)(lVar7 + 0x120) = fVar14;
    if (*(int *)(param_6 + 0x4a8) != 0) {
      if (*(int *)(lVar8 + 0x308) == 0) {
        fVar14 = *(float *)(lVar8 + 0x2d8);
      }
      else {
        func_0x0001074c8770();
        func_0x0001074c86a8();
        func_0x0001074c87a8();
      }
    }
    *(float *)(lVar7 + 0x124) = fVar14;
    if (*(int *)(param_6 + 0x670) != 0) {
      if (*(int *)(lVar8 + 0x430) == 0) {
        fVar14 = *(float *)(lVar8 + 0x400);
      }
      else {
        func_0x0001074c8770();
        func_0x0001074c86a8();
        func_0x0001074c87a8();
      }
    }
    *(float *)(lVar7 + 0x128) = fVar14;
    if (*(int *)(param_6 + 0x398) == 0) {
      fVar14 = *(float *)(lVar7 + 0x124);
    }
    else if (*(int *)(lVar8 + 600) == 0) {
      fVar14 = *(float *)(lVar8 + 0x228);
    }
    else {
      func_0x0001074c8770();
      func_0x0001074c86a8();
      func_0x0001074c87a8();
    }
    *(float *)(lVar7 + 300) = fVar14;
    uVar9 = 0;
    uVar12 = 0;
    func_0x0001074c8fb8(lVar8 + 0x298);
    *(undefined4 *)(lVar7 + 0x140) = uVar9;
    *(undefined4 *)(lVar7 + 0x144) = uVar12;
    func_0x0001074c8fb8(lVar8 + 0x3c0);
    *(undefined4 *)(lVar7 + 0x148) = uVar9;
    *(undefined4 *)(lVar7 + 0x14c) = uVar12;
    fVar10 = *(float *)(lVar7 + 0x140);
    fVar13 = *(float *)(lVar7 + 0x144);
    func_0x0001074c8fb8(lVar8 + 0x1e8);
    *(float *)(lVar7 + 0x150) = fVar10;
    *(float *)(lVar7 + 0x154) = fVar13;
    uVar5 = *(undefined8 *)(param_10[0x12] + param_9 * 8);
    *(undefined8 *)(lVar7 + 0x158) = uVar5;
    if (iVar1 != 0) {
      if (*(int *)(lVar8 + 0x348) == 0) {
        fVar11 = (float)uVar5;
        fVar13 = (float)((ulong)uVar5 >> 0x20);
        fVar14 = *(float *)(lVar8 + 0x310);
        fVar10 = *(float *)(lVar8 + 0x314);
      }
      else {
        func_0x0001074c8770();
        fVar14 = 0.0;
        fVar10 = 0.0;
        FUN_107339498(lVar8 + 0x310,param_5,alStack_d0);
        func_0x0001074c8920();
        fVar11 = *(float *)(lVar7 + 0x158);
        fVar13 = *(float *)(lVar7 + 0x15c);
      }
      *(float *)(lVar7 + 0x158) = fVar11 + fVar14;
      fVar10 = fVar10 + fVar13;
      *(float *)(lVar7 + 0x15c) = fVar10;
    }
    func_0x0001074c8770(*(undefined8 *)(*param_8 + 8));
    uStack_d8 = 0;
    FUN_1073f62c0(extraout_x8_00 + 0x988,param_5,alStack_d0,&uStack_d8);
    func_0x0001074c8920();
    uVar5 = CONCAT44(fVar13 + (float)((ulong)*(undefined8 *)(lVar7 + 0x158) >> 0x20),
                     fVar10 + (float)*(undefined8 *)(lVar7 + 0x158));
    *(undefined8 *)(lVar7 + 0x158) = uVar5;
    func_0x0001074c8770(*(undefined8 *)(*param_8 + 8));
    fVar13 = (float)uVar5;
    uStack_d8 = CONCAT44(uStack_d8._4_4_,0x3f800000);
    func_0x0001073837dc(extraout_x8_01 + 0x9f0,param_5,alStack_d0,&uStack_d8);
    func_0x0001074c8920();
    if (fVar13 != 1.0) {
      *(ulong *)(lVar7 + 0x128) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0x128) >> 0x20) * fVar13,
                    (float)*(undefined8 *)(lVar7 + 0x128) * fVar13);
      *(ulong *)(lVar7 + 0x120) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0x120) >> 0x20) * fVar13,
                    (float)*(undefined8 *)(lVar7 + 0x120) * fVar13);
      *(ulong *)(lVar7 + 0x158) =
           CONCAT44(fVar13 * (float)((ulong)*(undefined8 *)(lVar7 + 0x158) >> 0x20),
                    fVar13 * (float)*(undefined8 *)(lVar7 + 0x158));
    }
    if (*(int *)(lVar8 + 0x380) == 0) {
      fVar14 = *(float *)(lVar8 + 0x350);
    }
    else {
      func_0x0001074c8770();
      func_0x0001074c86a8();
      func_0x0001074c87a8();
    }
    *(float *)(lVar7 + 0x160) = fVar14;
    cVar2 = *(char *)(param_10[0x16] + param_9);
    *(char *)(lVar7 + 0x164) = cVar2;
    uVar3 = false;
    if (cVar2 == '\x02') {
      *(undefined1 *)(lVar7 + 0x164) = 1;
      plVar6 = (long *)(*param_10 + param_9 * 0x18);
      uVar3 = (char)plVar6[2] == '\x01';
      if ((bool)uVar3) {
        *(float *)(lVar7 + 0x160) = fVar14 + *(float *)(param_10[9] + *plVar6 * 0x1a8 + 0x160);
      }
    }
    if (*(int *)(param_6 + 0x6c8) != 0) {
      if (*(int *)(lVar8 + 0x468) == 0) {
        fVar14 = *(float *)(lVar8 + 0x438);
      }
      else {
        func_0x0001074c8770();
        func_0x0001074c86a8();
        func_0x0001074c87a8();
      }
      *(float *)(lVar7 + 0x130) = param_1 * fVar14;
      *(undefined1 *)(lVar7 + 0x134) = 1;
    }
    if (*(int *)(param_6 + 0x2e0) != 0) {
      if (*(int *)(lVar8 + 0x1e0) == 0) {
        fVar14 = *(float *)(lVar8 + 0x1b0);
      }
      else {
        func_0x0001074c8770();
        func_0x0001074c86a8();
        func_0x0001074c87a8();
      }
      *(float *)(lVar7 + 0x138) = param_1 * fVar14;
      *(undefined1 *)(lVar7 + 0x13c) = 1;
    }
    func_0x0001074c8620(uStack_88);
    if ((bool)uVar3) {
      return;
    }
  }
  else {
    FUN_1074c3d84();
  }
  ___stack_chk_fail();
  func_0x0001074c8920();
  func_0x0001074c8820();
  func_0x0001074c3a00();
  return;
}



/* Entry: 1074c39e8; end: 1074c3a33;  */

void FUN_1074c39e8(void)

{
  func_0x0001074c3a00();
  return;
}



/* Entry: 1074c3a34; end: 1074c3ad3;  */

undefined1  [16] FUN_1074c3a34(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar2 = param_1;
  FUN_1074c3ad4(param_1,&uStack_48,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    lVar3 = 0x28;
    __Znwm();
    uStack_50 = 1;
    *(undefined8 *)(lVar3 + 0x20) = *param_3;
    plStack_58 = param_1 + 1;
    FUN_1074c3b24(param_1,uStack_48,plVar2,lVar3);
    uStack_60 = 0;
    func_0x0001074c3b70(&uStack_60);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 1074c3ad4; end: 1074c3b23;  */

long * FUN_1074c3ad4(long param_1,long *param_2,ulong *param_3)

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
      while (plVar2 = plVar3, (ulong)plVar3[4] <= *param_3) {
        if (*param_3 <= (ulong)plVar3[4]) goto LAB_1074c3b1c;
        plVar1 = plVar3 + 1;
        plVar3 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_1074c3b1c;
      }
      plVar4 = (long *)*plVar3;
      plVar1 = plVar3;
      plVar3 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
LAB_1074c3b1c:
  *param_2 = (long)plVar2;
  return plVar1;
}



/* Entry: 1074c3b24; end: 1074c3b8f;  */

void FUN_1074c3b24(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  func_0x00010002c5b0(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 1074c3b90; end: 1074c3ba7;  */

void FUN_1074c3b90(long *param_1,long param_2)

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



/* Entry: 1074c3ba8; end: 1074c3c4b;  */

undefined8 * FUN_1074c3ba8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 uVar2;
  
  func_0x0001074c8688();
  if (*(int *)(param_1 + 8) != 0) {
    func_0x0001074c8910();
    FUN_1074388a0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
    func_0x0001074c8928();
  }
  func_0x0001074c8620(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001074c8834();
  func_0x0001074c8820();
  func_0x0001074c8688();
  if (*(int *)(param_1 + 6) != 0) {
    func_0x0001074c8910();
    func_0x0001074c8fe0();
    func_0x0001074c8928();
  }
  func_0x0001074c8620(extraout_x8_00);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001074c8834();
    func_0x0001074c8820();
    func_0x0001074c8688();
    if (*(int *)(param_1 + 6) != 0) {
      func_0x0001074c8910();
      func_0x0001074c8fe0();
      func_0x0001074c8928();
    }
    func_0x0001074c8620(extraout_x8_01);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001074c8834();
      func_0x0001074c8820();
      func_0x0001074c8688();
      if (*(int *)(param_1 + 7) != 0) {
        func_0x0001074c8910();
        FUN_107339498();
        func_0x0001074c8928();
      }
      func_0x0001074c8620(extraout_x8_02);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001074c8834();
        func_0x0001074c8820();
        func_0x0001074c8fd4();
        puVar1 = (undefined8 *)param_1[1];
        if (puVar1 < (undefined8 *)param_1[2]) {
          uVar2 = *param_2;
          puVar1[1] = param_2[1];
          *puVar1 = uVar2;
          puVar1 = puVar1 + 2;
        }
        else {
          puVar1 = param_1;
          FUN_1074c3dd4();
        }
        param_1[1] = puVar1;
        return puVar1 + -2;
      }
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 1074c3c4c; end: 1074c3cab;  */

undefined8 * FUN_1074c3c4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar2;
  
  func_0x0001074c8688();
  if (*(int *)(param_1 + 6) != 0) {
    func_0x0001074c8910();
    func_0x0001074c8fe0();
    func_0x0001074c8928();
  }
  func_0x0001074c8620(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001074c8834();
    func_0x0001074c8820();
    func_0x0001074c8688();
    if (*(int *)(param_1 + 6) != 0) {
      func_0x0001074c8910();
      func_0x0001074c8fe0();
      func_0x0001074c8928();
    }
    func_0x0001074c8620(extraout_x8_00);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001074c8834();
      func_0x0001074c8820();
      func_0x0001074c8688();
      if (*(int *)(param_1 + 7) != 0) {
        func_0x0001074c8910();
        FUN_107339498();
        func_0x0001074c8928();
      }
      func_0x0001074c8620(extraout_x8_01);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001074c8834();
        func_0x0001074c8820();
        func_0x0001074c8fd4();
        puVar1 = (undefined8 *)param_1[1];
        if (puVar1 < (undefined8 *)param_1[2]) {
          uVar2 = *param_2;
          puVar1[1] = param_2[1];
          *puVar1 = uVar2;
          puVar1 = puVar1 + 2;
        }
        else {
          puVar1 = param_1;
          FUN_1074c3dd4();
        }
        param_1[1] = puVar1;
        return puVar1 + -2;
      }
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 1074c3cac; end: 1074c3d0b;  */

undefined8 * FUN_1074c3cac(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar2;
  
  func_0x0001074c8688();
  if (*(int *)(param_1 + 6) != 0) {
    func_0x0001074c8910();
    func_0x0001074c8fe0();
    func_0x0001074c8928();
  }
  func_0x0001074c8620(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001074c8834();
  func_0x0001074c8820();
  func_0x0001074c8688();
  if (*(int *)(param_1 + 7) != 0) {
    func_0x0001074c8910();
    FUN_107339498();
    func_0x0001074c8928();
  }
  func_0x0001074c8620(extraout_x8_00);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001074c8834();
    func_0x0001074c8820();
    func_0x0001074c8fd4();
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 < (undefined8 *)param_1[2]) {
      uVar2 = *param_2;
      puVar1[1] = param_2[1];
      *puVar1 = uVar2;
      puVar1 = puVar1 + 2;
    }
    else {
      puVar1 = param_1;
      FUN_1074c3dd4();
    }
    param_1[1] = puVar1;
    return puVar1 + -2;
  }
  return param_1;
}



/* Entry: 1074c3d0c; end: 1074c3d83;  */

undefined8 * FUN_1074c3d0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  
  func_0x0001074c8688();
  if (*(int *)(param_1 + 7) != 0) {
    func_0x0001074c8910();
    FUN_107339498();
    func_0x0001074c8928();
  }
  func_0x0001074c8620(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001074c8834();
    func_0x0001074c8820();
    func_0x0001074c8fd4();
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 < (undefined8 *)param_1[2]) {
      uVar2 = *param_2;
      puVar1[1] = param_2[1];
      *puVar1 = uVar2;
      puVar1 = puVar1 + 2;
    }
    else {
      puVar1 = param_1;
      FUN_1074c3dd4();
    }
    param_1[1] = puVar1;
    return puVar1 + -2;
  }
  return param_1;
}



/* Entry: 1074c3d84; end: 1074c3d8f;  */

undefined8 * FUN_1074c3d84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  func_0x0001074c8fd4();
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar2 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    puVar1 = puVar1 + 2;
  }
  else {
    puVar1 = param_1;
    FUN_1074c3dd4();
  }
  param_1[1] = puVar1;
  return puVar1 + -2;
}



/* Entry: 1074c3d90; end: 1074c3dd3;  */

undefined8 * FUN_1074c3d90(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1074c3dd4();
  }
  param_1[1] = puVar1;
  return puVar1 + -2;
}



/* Entry: 1074c3dd4; end: 1074c3e47;  */

void FUN_1074c3dd4(void)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  func_0x0001074c86d0();
  FUN_1074c3e48();
  func_0x0001074c8810();
  FUN_1074c3ea0(auStack_48);
  uVar1 = *unaff_x20;
  puStack_38[1] = unaff_x20[1];
  *puStack_38 = uVar1;
  puStack_38 = puStack_38 + 2;
  func_0x0001074c8a04();
  FUN_1074c3e70();
  func_0x0001074c8b84();
  FUN_1074c3f0c();
  return;
}



/* Entry: 1074c3e48; end: 1074c3e6f;  */

undefined8 FUN_1074c3e48(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  long unaff_x19;
  undefined8 unaff_x21;
  
  if (param_2 >> 0x3c == 0) {
    func_0x0001074c91c8();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  FUN_1074c3e94();
  func_0x0001074c8634();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  func_0x0001074c85e0();
  return param_1;
}



/* Entry: 1074c3e70; end: 1074c3e93;  */

void FUN_1074c3e70(void)

{
  long unaff_x19;
  undefined8 unaff_x21;
  
  func_0x0001074c8634();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  func_0x0001074c85e0();
  return;
}



/* Entry: 1074c3e94; end: 1074c3e9f;  */

void FUN_1074c3e94(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001074c86b8();
  func_0x0001074c8a78();
  if (param_2 != 0) {
    func_0x0001074c3ed0(param_4);
  }
  func_0x0001074c8dc0();
  return;
}



/* Entry: 1074c3ea0; end: 1074c3eef;  */

void FUN_1074c3ea0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001074c8a78();
  if (param_2 != 0) {
    func_0x0001074c3ed0(param_4);
  }
  func_0x0001074c8dc0();
  return;
}



/* Entry: 1074c3ef0; end: 1074c3f0b;  */

long * FUN_1074c3ef0(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_1074c3f38();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1074c3f0c; end: 1074c3f37;  */

long * FUN_1074c3f0c(long *param_1)

{
  FUN_1074c3f38();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1074c3f38; end: 1074c3f5b;  */

void FUN_1074c3f38(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x10;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1074c3f5c; end: 1074c3f7f;  */

void FUN_1074c3f5c(void)

{
  func_0x0001074c87f8();
  FUN_1074c3f80();
  return;
}



/* Entry: 1074c3f80; end: 1074c3f93;  */

void FUN_1074c3f80(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074c3f94; end: 1074c3fe7;  */

void FUN_1074c3f94(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074c8848();
  func_0x000104c2fe00();
  FUN_1074c3fe8(param_1 + 0x38,unaff_x20 + 0x38);
  FUN_1074c4610(unaff_x19 + 0x730,unaff_x20 + 0x730);
  return;
}



/* Entry: 1074c3fe8; end: 1074c42db;  */

void FUN_1074c3fe8(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074c8848();
  func_0x00010727d614();
  func_0x0001072f673c(param_1 + 0x38,unaff_x20 + 0x38);
  func_0x00010727fe7c(unaff_x19 + 0x80,unaff_x20 + 0x80);
  func_0x00010727fe7c(unaff_x19 + 0xb8,unaff_x20 + 0xb8);
  func_0x0001072f673c(unaff_x19 + 0xf0,unaff_x20 + 0xf0);
  func_0x00010727d614(unaff_x19 + 0x138,unaff_x20 + 0x138);
  func_0x00010727d614(unaff_x19 + 0x170,unaff_x20 + 0x170);
  func_0x00010727d614(unaff_x19 + 0x1a8,unaff_x20 + 0x1a8);
  func_0x00010727d614(unaff_x19 + 0x1e0,unaff_x20 + 0x1e0);
  FUN_1074c42dc(unaff_x19 + 0x218,unaff_x20 + 0x218);
  func_0x00010727d614(unaff_x19 + 0x250,unaff_x20 + 0x250);
  func_0x00010727fe7c(unaff_x19 + 0x288,unaff_x20 + 0x288);
  FUN_10733ba28(unaff_x19 + 0x2c0,unaff_x20 + 0x2c0);
  func_0x00010727fe7c(unaff_x19 + 0x2f8,unaff_x20 + 0x2f8);
  func_0x00010727fe7c(unaff_x19 + 0x330,unaff_x20 + 0x330);
  FUN_107483560(unaff_x19 + 0x370,unaff_x20 + 0x370);
  FUN_1073243b8(unaff_x19 + 0x410,unaff_x20 + 0x410);
  FUN_1073398d4(unaff_x19 + 0x480,unaff_x20 + 0x480);
  FUN_1073243b8(unaff_x19 + 0x4c8,unaff_x20 + 0x4c8);
  FUN_10733ba28(unaff_x19 + 0x538,unaff_x20 + 0x538);
  func_0x00010727d614(unaff_x19 + 0x570,unaff_x20 + 0x570);
  func_0x00010727d614(unaff_x19 + 0x5a8,unaff_x20 + 0x5a8);
  func_0x00010727fe7c(unaff_x19 + 0x5e0,unaff_x20 + 0x5e0);
  FUN_1074c43c4(unaff_x19 + 0x618,unaff_x20 + 0x618);
  FUN_1074c4488(unaff_x19 + 0x650,unaff_x20 + 0x650);
  FUN_1074c454c(unaff_x19 + 0x688,unaff_x20 + 0x688);
  func_0x00010727d614(unaff_x19 + 0x6c0,unaff_x20 + 0x6c0);
  return;
}



/* Entry: 1074c42dc; end: 1074c4307;  */

void FUN_1074c42dc(void)

{
  func_0x0001074c8854();
  FUN_1074c4308();
  return;
}



/* Entry: 1074c4308; end: 1074c4347;  */

void FUN_1074c4308(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined4 unaff_w21;
  
  func_0x0001074c8848();
  FUN_1074c4348();
  func_0x0001074c9178();
  if (!(bool)in_ZR) {
    func_0x0001074c87e8(&PTR_DAT_1109b4e00);
    *(undefined4 *)(unaff_x19 + 0x30) = unaff_w21;
  }
  return;
}



/* Entry: 1074c4348; end: 1074c437f;  */

void FUN_1074c4348(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x0001074c8ae4();
  if (!(bool)in_ZR) {
    func_0x0001074c8828((&PTR_FUN_1109b4de8)[extraout_x8]);
  }
  func_0x0001074c90d0();
  return;
}



/* Entry: 1074c4380; end: 1074c439f;  */

void FUN_1074c4380(void)

{
  return;
}



/* Entry: 1074c43a0; end: 1074c43c3;  */

void FUN_1074c43a0(long param_1,long param_2)

{
  func_0x00010727d6bc();
  *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(param_2 + 0x28);
  return;
}



/* Entry: 1074c43c4; end: 1074c43ef;  */

void FUN_1074c43c4(void)

{
  func_0x0001074c8854();
  FUN_1074c43f0();
  return;
}



/* Entry: 1074c43f0; end: 1074c442f;  */

void FUN_1074c43f0(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined4 unaff_w21;
  
  func_0x0001074c8848();
  FUN_1074c4430();
  func_0x0001074c9178();
  if (!(bool)in_ZR) {
    func_0x0001074c87e8(&PTR_DAT_1109b4e30);
    *(undefined4 *)(unaff_x19 + 0x30) = unaff_w21;
  }
  return;
}



/* Entry: 1074c4430; end: 1074c4467;  */

void FUN_1074c4430(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x0001074c8ae4();
  if (!(bool)in_ZR) {
    func_0x0001074c8828((&PTR_FUN_1109b4e18)[extraout_x8]);
  }
  func_0x0001074c90d0();
  return;
}



/* Entry: 1074c4468; end: 1074c4487;  */

void FUN_1074c4468(void)

{
  return;
}



/* Entry: 1074c4488; end: 1074c44b3;  */

void FUN_1074c4488(void)

{
  func_0x0001074c8854();
  FUN_1074c44b4();
  return;
}



/* Entry: 1074c44b4; end: 1074c44f3;  */

void FUN_1074c44b4(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined4 unaff_w21;
  
  func_0x0001074c8848();
  FUN_1074c44f4();
  func_0x0001074c9178();
  if (!(bool)in_ZR) {
    func_0x0001074c87e8(&PTR_DAT_1109b4e60);
    *(undefined4 *)(unaff_x19 + 0x30) = unaff_w21;
  }
  return;
}



/* Entry: 1074c44f4; end: 1074c452b;  */

void FUN_1074c44f4(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x0001074c8ae4();
  if (!(bool)in_ZR) {
    func_0x0001074c8828((&PTR_FUN_1109b4e48)[extraout_x8]);
  }
  func_0x0001074c90d0();
  return;
}



/* Entry: 1074c452c; end: 1074c454b;  */

void FUN_1074c452c(void)

{
  return;
}



/* Entry: 1074c454c; end: 1074c4577;  */

void FUN_1074c454c(void)

{
  func_0x0001074c8854();
  FUN_1074c4578();
  return;
}



/* Entry: 1074c4578; end: 1074c45b7;  */

void FUN_1074c4578(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined4 unaff_w21;
  
  func_0x0001074c8848();
  FUN_1074c45b8();
  func_0x0001074c9178();
  if (!(bool)in_ZR) {
    func_0x0001074c87e8(&PTR_DAT_1109b4e90);
    *(undefined4 *)(unaff_x19 + 0x30) = unaff_w21;
  }
  return;
}



/* Entry: 1074c45b8; end: 1074c45ef;  */

void FUN_1074c45b8(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x0001074c8ae4();
  if (!(bool)in_ZR) {
    func_0x0001074c8828((&PTR_FUN_1109b4e78)[extraout_x8]);
  }
  func_0x0001074c90d0();
  return;
}



/* Entry: 1074c45f0; end: 1074c460f;  */

void FUN_1074c45f0(void)

{
  return;
}



/* Entry: 1074c4610; end: 1074c4823;  */

void FUN_1074c4610(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074c8848();
  FUN_1074c4824();
  FUN_1074c4824(param_1 + 0x60,unaff_x20 + 0x60);
  func_0x0001074c4858(unaff_x19 + 0xc0,unaff_x20 + 0xc0);
  func_0x0001074c4858(unaff_x19 + 0x128,unaff_x20 + 0x128);
  FUN_1074c4824(unaff_x19 + 400,unaff_x20 + 400);
  func_0x0001074c4858(unaff_x19 + 0x1f0,unaff_x20 + 0x1f0);
  func_0x0001074c4884(unaff_x19 + 600,unaff_x20 + 600);
  FUN_1074c4824(unaff_x19 + 0x2c8,unaff_x20 + 0x2c8);
  func_0x0001074c4858(unaff_x19 + 0x328,unaff_x20 + 0x328);
  FUN_1074c4824(unaff_x19 + 0x390,unaff_x20 + 0x390);
  FUN_1074c4824(unaff_x19 + 0x3f0,unaff_x20 + 0x3f0);
  func_0x0001074c4858(unaff_x19 + 0x450,unaff_x20 + 0x450);
  FUN_1074c4824(unaff_x19 + 0x4b8,unaff_x20 + 0x4b8);
  func_0x0001074c4858(unaff_x19 + 0x518,unaff_x20 + 0x518);
  FUN_1074c4824(unaff_x19 + 0x580,unaff_x20 + 0x580);
  FUN_1074c4824(unaff_x19 + 0x5e0,unaff_x20 + 0x5e0);
  func_0x0001074c4858(unaff_x19 + 0x640,unaff_x20 + 0x640);
  FUN_1074c4824(unaff_x19 + 0x6a8,unaff_x20 + 0x6a8);
  FUN_1074c4824(unaff_x19 + 0x708,unaff_x20 + 0x708);
  return;
}



/* Entry: 1074c4824; end: 1074c4a87;  */

void FUN_1074c4824(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010727d614();
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  return;
}



/* Entry: 1074c4a88; end: 1074c4a93;  */

void FUN_1074c4a88(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074c86b8();
  func_0x0001074c8868();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x470;
    func_0x0001074c4bd0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1074c4a94; end: 1074c4ac7;  */

void FUN_1074c4a94(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074c8868();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x470;
    func_0x0001074c4bd0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1074c4ac8; end: 1074c4b33;  */

long FUN_1074c4ac8(long param_1,long param_2)

{
  uint uVar1;
  long lStack_28;
  
  uVar1 = *(uint *)(param_2 + 0x38);
  if (*(int *)(param_1 + 0x38) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      FUN_1073deccc(param_1);
    }
    else {
      lStack_28 = param_1;
      (*(code *)(&PTR_FUN_1109b4ea8)[uVar1])(&lStack_28,param_1,param_2);
    }
  }
  return param_1;
}



/* Entry: 1074c4b34; end: 1074c4c83;  */

void FUN_1074c4b34(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  param_1 = (undefined8 *)*param_1;
  if (*(int *)(param_1 + 7) == 0) {
    *param_2 = *param_3;
  }
  else {
    FUN_1073deccc(param_1);
    *param_1 = *param_3;
    *(undefined4 *)(param_1 + 7) = 0;
  }
  return;
}



/* Entry: 1074c4c84; end: 1074c4c8f;  */

void FUN_1074c4c84(undefined8 *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x0001074c86b8();
  switch(param_2) {
  default:
    puVar1 = (undefined8 *)&UNK_10de73f5c;
    break;
  case 1:
    puVar1 = (undefined8 *)&UNK_10de73e5c;
    break;
  case 2:
    puVar1 = (undefined8 *)&UNK_10de73e7c;
    break;
  case 3:
    puVar1 = (undefined8 *)&UNK_10de73e9c;
    break;
  case 4:
    puVar1 = (undefined8 *)&UNK_10de73ebc;
    break;
  case 5:
    puVar1 = (undefined8 *)&UNK_10de73edc;
    break;
  case 6:
    puVar1 = (undefined8 *)&UNK_10de73efc;
    break;
  case 7:
    puVar1 = (undefined8 *)&UNK_10de73f1c;
    break;
  case 8:
    puVar1 = (undefined8 *)&UNK_10de73f3c;
  }
  uVar2 = *puVar1;
  uVar4 = puVar1[3];
  uVar3 = puVar1[2];
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Entry: 1074c4c90; end: 1074c4d5f;  */

void FUN_1074c4c90(undefined8 *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  switch(param_2) {
  default:
    puVar1 = (undefined8 *)&UNK_10de73f5c;
    break;
  case 1:
    puVar1 = (undefined8 *)&UNK_10de73e5c;
    break;
  case 2:
    puVar1 = (undefined8 *)&UNK_10de73e7c;
    break;
  case 3:
    puVar1 = (undefined8 *)&UNK_10de73e9c;
    break;
  case 4:
    puVar1 = (undefined8 *)&UNK_10de73ebc;
    break;
  case 5:
    puVar1 = (undefined8 *)&UNK_10de73edc;
    break;
  case 6:
    puVar1 = (undefined8 *)&UNK_10de73efc;
    break;
  case 7:
    puVar1 = (undefined8 *)&UNK_10de73f1c;
    break;
  case 8:
    puVar1 = (undefined8 *)&UNK_10de73f3c;
  }
  uVar2 = *puVar1;
  uVar4 = puVar1[3];
  uVar3 = puVar1[2];
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Entry: 1074c4d60; end: 1074c4e47;  */

float FUN_1074c4d60(float param_1,float param_2,float param_3,float param_4,float param_5,
                   float param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                   undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  float fVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack_50;
  float fStack_4c;
  float afStack_48 [6];
  
  param_1 = param_1 + param_4;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  param_2 = param_2 + param_5;
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  FUN_1074c4e48(param_6 * param_3 * param_1,param_6 * param_3 * param_2,param_7,param_8,&fStack_50,
                param_9,param_10,param_11,param_12);
  fStack_4c = -fStack_4c;
  if ((float)param_8 != 0.0) {
    pfVar2 = afStack_48 + 1;
    lVar3 = 3;
    fVar5 = fStack_4c;
    fVar4 = fStack_50;
    do {
      fVar6 = pfVar2[-1];
      fVar7 = fVar6;
      if (fStack_50 <= fVar6) {
        fVar7 = fStack_50;
      }
      fStack_50 = fVar7;
      fVar7 = -*pfVar2;
      fVar1 = fVar7;
      if (fVar5 <= fVar7) {
        fVar1 = fVar5;
      }
      fVar5 = fVar1;
      if (fVar6 <= fVar4) {
        fVar6 = fVar4;
      }
      fVar4 = fVar6;
      if (fVar7 <= fStack_4c) {
        fVar7 = fStack_4c;
      }
      fStack_4c = fVar7;
      pfVar2 = pfVar2 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return fStack_50;
}



/* Entry: 1074c4e48; end: 1074c4f8b;  */

void FUN_1074c4e48(float param_1,float param_2,float param_3,float param_4,undefined8 *param_5,
                  undefined8 *param_6,long param_7,int param_8,undefined8 *param_9)

{
  long lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar5 = *param_6;
  pfVar2 = (float *)(param_7 + 4);
  for (lVar1 = 0; lVar1 != 0x20; lVar1 = lVar1 + 8) {
    *(ulong *)((long)param_5 + lVar1) =
         CONCAT44((float)((ulong)uVar5 >> 0x20) + param_3 * param_2 * *pfVar2,
                  (float)uVar5 + param_1 * pfVar2[-1]);
    pfVar2 = pfVar2 + 2;
  }
  if (param_4 != 0.0) {
    uStack_38 = 0x3f80000000000000;
    uStack_40 = 0x3f800000;
    func_0x00010787668c(param_4 * -0.017453292,&uStack_40,&uStack_40);
    if (param_8 == 2) {
      uVar5 = *param_9;
    }
    else if (param_8 == 1) {
      *param_9 = *param_6;
    }
    else {
      uVar5 = 0;
      if (param_8 == 0) {
        uVar5 = NEON_fmov(0x3e800000,4);
        uVar5 = CONCAT44(((float)((ulong)*param_5 >> 0x20) + (float)((ulong)param_5[1] >> 0x20) +
                          (float)((ulong)param_5[2] >> 0x20) + (float)((ulong)param_5[3] >> 0x20)) *
                         (float)((ulong)uVar5 >> 0x20),
                         ((float)*param_5 + (float)param_5[1] + (float)param_5[2] +
                         (float)param_5[3]) * (float)uVar5);
        *param_9 = uVar5;
      }
    }
    fVar6 = (float)((ulong)uVar5 >> 0x20);
    pfVar2 = (float *)((long)param_5 + 4);
    lVar1 = 4;
    do {
      fVar3 = pfVar2[-1] - (float)uVar5;
      fVar4 = (*pfVar2 - fVar6) / param_3;
      pfVar2[-1] = (float)uVar5 + fVar4 * (float)uStack_38 + fVar3 * (float)uStack_40;
      *pfVar2 = fVar6 + param_3 * (fVar4 * uStack_38._4_4_ + fVar3 * uStack_40._4_4_);
      pfVar2 = pfVar2 + 2;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 1074c4f8c; end: 1074c4fcb;  */

undefined4 * FUN_1074c4f8c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *unaff_x19;
  
  func_0x0001074c8da8();
  if (param_1 < *(undefined4 **)(unaff_x19 + 4)) {
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  else {
    puVar1 = unaff_x19;
    FUN_1074c4fcc();
  }
  *(undefined4 **)(unaff_x19 + 2) = puVar1;
  return puVar1 + -1;
}



/* Entry: 1074c4fcc; end: 1074c5037;  */

void FUN_1074c4fcc(void)

{
  undefined4 *unaff_x20;
  undefined1 auStack_48 [16];
  undefined4 *puStack_38;
  
  func_0x0001074c86d0();
  FUN_1073b5434();
  func_0x0001074c8810();
  FUN_1073b531c(auStack_48);
  *puStack_38 = *unaff_x20;
  puStack_38 = puStack_38 + 1;
  func_0x0001074c8a04();
  FUN_1073b52fc();
  func_0x0001074c8b84();
  func_0x0001073b5364();
  return;
}



/* Entry: 1074c5038; end: 1074c505f;  */

undefined8 FUN_1074c5038(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  if (param_2 >> 0x3c == 0) {
    func_0x0001074c91c8();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  FUN_1074b29e0();
  func_0x0001074c8a78();
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    FUN_1074b29ec(param_4);
  }
  func_0x0001074c8dc0();
  return param_4;
}



/* Entry: 1074c5060; end: 1074c50bb;  */

void FUN_1074c5060(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001074c8a78();
  if (param_2 != 0) {
    FUN_1074b29ec(param_4);
  }
  func_0x0001074c8dc0();
  return;
}



/* Entry: 1074c50bc; end: 1074c50df;  */

void FUN_1074c50bc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x10;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1074c50e0; end: 1074c50fb;  */

void FUN_1074c50e0(long param_1)

{
  FUN_1074c50fc();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1074c50fc; end: 1074c5253;  */

void FUN_1074c50fc(long param_1,long param_2)

{
  func_0x000104c318bc();
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  return;
}



/* Entry: 1074c5254; end: 1074c525f;  */

long FUN_1074c5254(long param_1)

{
  func_0x0001074c86b8();
  func_0x0001073ad47c(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1074c5260; end: 1074c52db;  */

long FUN_1074c5260(long param_1)

{
  func_0x0001073ad47c(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1074c52dc; end: 1074c52e3;  */

void FUN_1074c52dc(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074c8868(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -200;
    FUN_1074c5260();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1074c52e4; end: 1074c5317;  */

void FUN_1074c52e4(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074c8868();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -200;
    FUN_1074c5260();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1074c5318; end: 1074c53b7;  */

long FUN_1074c5318(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = uVar3 - 1;
    if ((uVar3 & uVar4) == 0) {
      uVar5 = uVar4 & param_2;
    }
    else {
      uVar5 = param_2;
      if (uVar3 <= param_2) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = param_2 / uVar3;
        }
        uVar5 = param_2 - uVar5 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar6 = plVar2[1];
        if (uVar6 != param_2) break;
        if (plVar2[2] == param_2) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar4) == 0) {
        uVar6 = uVar6 & uVar4;
      }
      else if (uVar3 <= uVar6) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar6 / uVar3;
        }
        uVar6 = uVar6 - uVar1 * uVar3;
      }
    } while (uVar6 == uVar5);
  }
  return 0;
}



/* Entry: 1074c53b8; end: 1074c53e7;  */

void FUN_1074c53b8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x0001074c8e20();
  *puVar1 = &PTR_DAT_1109b4ec8;
  uVar2 = param_1[1];
  puVar1[2] = param_1[2];
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1074c53e8; end: 1074c5403;  */

void FUN_1074c53e8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109b4ec8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}


