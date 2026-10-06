/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1052915f8; end: 105291653;  */

undefined8 FUN_1052915f8(void)

{
  int iVar1;
  
  if ((bRam00000001130cbf00 & 1) == 0) {
    iVar1 = 0x130cbf00;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_105295f98();
      func_0x00010b990868(0x1130cbef0);
      ___cxa_guard_release(0x1130cbf00);
    }
  }
  return 0x1130cbef0;
}



/* Entry: 105291654; end: 1052916af;  */

undefined8 FUN_105291654(void)

{
  int iVar1;
  
  if ((bRam00000001130cbf18 & 1) == 0) {
    iVar1 = 0x130cbf18;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10528dbec();
      func_0x00010b990868(0x1130cbf08);
      ___cxa_guard_release(0x1130cbf18);
    }
  }
  return 0x1130cbf08;
}



/* Entry: 1052916b0; end: 105291717;  */

void FUN_1052916b0(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  
  func_0x000105292394();
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x20) = param_3[1];
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  uVar1 = *param_4;
  *(undefined8 *)(param_1 + 0x38) = param_4[1];
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_1 + 0x40) = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  uVar1 = *param_5;
  *(undefined8 *)(param_1 + 0x50) = param_5[1];
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x58) = param_5[2];
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  return;
}



/* Entry: 105291718; end: 10529178f;  */

void FUN_105291718(long *param_1,ulong param_2)

{
  long extraout_x8;
  long extraout_x9;
  undefined1 auStack_48 [40];
  
  func_0x0001052922ac();
  if ((ulong)(extraout_x9 / 0x58) < param_2) {
    if (0x2e8ba2e8ba2e8ba < param_2) {
      FUN_105291790();
      func_0x000105292324();
      func_0x000105291a1c();
      func_0x00010529229c();
      func_0x0001052922e0();
      func_0x000105292350();
      FUN_105291860(param_1 + 2,*param_1,param_1[1],
                    extraout_x8 + ((param_1[1] - *param_1) / -0x58) * 0x58);
      func_0x00010529222c();
      return;
    }
    func_0x000105292340();
    FUN_1052917dc(auStack_48);
    func_0x0001052922ec();
    FUN_10529179c();
    func_0x000105291a1c(auStack_48);
  }
  return;
}



/* Entry: 105291790; end: 10529179b;  */

void FUN_105291790(long *param_1)

{
  long extraout_x8;
  
  func_0x0001052922e0();
  func_0x000105292350();
  FUN_105291860(param_1 + 2,*param_1,param_1[1],
                extraout_x8 + ((param_1[1] - *param_1) / -0x58) * 0x58);
  func_0x00010529222c();
  return;
}



/* Entry: 10529179c; end: 1052917db;  */

void FUN_10529179c(long *param_1)

{
  long extraout_x8;
  
  func_0x000105292350();
  FUN_105291860(param_1 + 2,*param_1,param_1[1],
                extraout_x8 + ((param_1[1] - *param_1) / -0x58) * 0x58);
  func_0x00010529222c();
  return;
}



/* Entry: 1052917dc; end: 10529182f;  */

void FUN_1052917dc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000105292330();
  if (param_2 != 0) {
    func_0x000105291810(param_4);
  }
  func_0x000105292360(0x58);
  return;
}



/* Entry: 105291830; end: 10529185f;  */

void FUN_105291830(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x58);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x58) {
    FUN_105291934(param_4,uVar1);
    param_4 = lStack_48 + 0x58;
  }
  uStack_58 = 1;
  FUN_105291904(param_1,param_2,param_3);
  FUN_10529199c(&uStack_70);
  return;
}



/* Entry: 105291860; end: 105291903;  */

void FUN_105291860(undefined8 param_1,long param_2,long param_3,long param_4)

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
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x58) {
    FUN_105291934(param_4,lVar1);
    param_4 = lStack_38 + 0x58;
  }
  uStack_48 = 1;
  FUN_105291904(param_1,param_2,param_3);
  FUN_10529199c(&uStack_60);
  return;
}



/* Entry: 105291904; end: 105291933;  */

void FUN_105291904(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x58) {
    func_0x000104bee8ec();
  }
  return;
}



/* Entry: 105291934; end: 10529199b;  */

void FUN_105291934(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000105292394();
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined1 *)(param_1 + 0x50) = 0;
  if (*(char *)(param_2 + 0x50) == '\x01') {
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  return;
}



/* Entry: 10529199c; end: 1052919cb;  */

long FUN_10529199c(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1052919cc(param_1);
  }
  return param_1;
}



/* Entry: 1052919cc; end: 1052919eb;  */

void FUN_1052919cc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x58;
    func_0x000104bee8ec();
  }
  return;
}



/* Entry: 1052919ec; end: 105291a47;  */

void FUN_1052919ec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x58;
    func_0x000104bee8ec();
  }
  return;
}



/* Entry: 105291a48; end: 105291a4f;  */

void FUN_105291a48(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x58;
    func_0x000104bee8ec();
  }
  return;
}



/* Entry: 105291a50; end: 105291aeb;  */

void FUN_105291a50(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x58;
    func_0x000104bee8ec();
  }
  return;
}



/* Entry: 105291aec; end: 105291b5f;  */

undefined8 FUN_105291aec(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x0001052922cc();
  FUN_105291b60();
  func_0x0001052922f8();
  FUN_1052917dc();
  FUN_105291934(lStack_48);
  lStack_48 = lStack_48 + 0x58;
  func_0x0001052922ec();
  FUN_10529179c();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000105291a1c(auStack_58);
  return uVar1;
}



/* Entry: 105291b60; end: 105291bb7;  */

long * FUN_105291b60(long *param_1,long *param_2)

{
  ulong uVar1;
  long extraout_x8;
  long extraout_x9;
  long *plVar2;
  long alStack_58 [5];
  
  if (param_2 < (long *)0x2e8ba2e8ba2e8bb) {
    uVar1 = (param_1[2] - *param_1) / 0x58;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x1745d1745d1745c < uVar1) {
      plVar2 = (long *)0x2e8ba2e8ba2e8ba;
    }
    return plVar2;
  }
  FUN_105291790();
  func_0x0001052922ac();
  if ((long *)(extraout_x9 / 0x18) < param_2) {
    if ((long *)0xaaaaaaaaaaaaaaa < param_2) {
      FUN_105291c2c();
      func_0x000105292324();
      func_0x000105291e34();
      func_0x00010529229c();
      func_0x0001052922e0();
      func_0x000105292350();
      plVar2 = param_1 + 2;
      FUN_105291cf8(plVar2,*param_1,param_1[1],
                    extraout_x8 + ((param_1[1] - *param_1) / -0x18) * 0x18);
      func_0x00010529222c();
      return plVar2;
    }
    func_0x000105292340();
    FUN_105291c78(alStack_58);
    func_0x0001052922ec();
    FUN_105291c38();
    param_1 = alStack_58;
    func_0x000105291e34(param_1);
  }
  return param_1;
}



/* Entry: 105291bb8; end: 105291c2b;  */

void FUN_105291bb8(long *param_1,ulong param_2)

{
  long extraout_x8;
  long extraout_x9;
  undefined1 auStack_48 [40];
  
  func_0x0001052922ac();
  if ((ulong)(extraout_x9 / 0x18) < param_2) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      FUN_105291c2c();
      func_0x000105292324();
      func_0x000105291e34();
      func_0x00010529229c();
      func_0x0001052922e0();
      func_0x000105292350();
      FUN_105291cf8(param_1 + 2,*param_1,param_1[1],
                    extraout_x8 + ((param_1[1] - *param_1) / -0x18) * 0x18);
      func_0x00010529222c();
      return;
    }
    func_0x000105292340();
    FUN_105291c78(auStack_48);
    func_0x0001052922ec();
    FUN_105291c38();
    func_0x000105291e34(auStack_48);
  }
  return;
}



/* Entry: 105291c2c; end: 105291c37;  */

void FUN_105291c2c(long *param_1)

{
  long extraout_x8;
  
  func_0x0001052922e0();
  func_0x000105292350();
  FUN_105291cf8(param_1 + 2,*param_1,param_1[1],
                extraout_x8 + ((param_1[1] - *param_1) / -0x18) * 0x18);
  func_0x00010529222c();
  return;
}



/* Entry: 105291c38; end: 105291c77;  */

void FUN_105291c38(long *param_1)

{
  long extraout_x8;
  
  func_0x000105292350();
  FUN_105291cf8(param_1 + 2,*param_1,param_1[1],
                extraout_x8 + ((param_1[1] - *param_1) / -0x18) * 0x18);
  func_0x00010529222c();
  return;
}



/* Entry: 105291c78; end: 105291ccb;  */

void FUN_105291c78(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000105292330();
  if (param_2 != 0) {
    func_0x000105291cac(param_4);
  }
  func_0x000105292360(0x18);
  return;
}



/* Entry: 105291ccc; end: 105291cf7;  */

void FUN_105291ccc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if (param_2 < (undefined8 *)0xaaaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  puStack_38 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    puStack_38[2] = param_2[2];
    puStack_38[1] = uVar2;
    *puStack_38 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    puStack_38 = puStack_38 + 3;
  }
  uStack_48 = 1;
  uStack_60 = param_1;
  puStack_40 = param_4;
  FUN_105291d84();
  FUN_105291db4(&uStack_60);
  return;
}



/* Entry: 105291cf8; end: 105291d83;  */

void FUN_105291cf8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puStack_28 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    puStack_28[2] = param_2[2];
    puStack_28[1] = uVar2;
    *puStack_28 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    puStack_28 = puStack_28 + 3;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  puStack_30 = param_4;
  FUN_105291d84();
  FUN_105291db4(&uStack_50);
  return;
}



/* Entry: 105291d84; end: 105291db3;  */

void FUN_105291d84(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x18) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 105291db4; end: 105291de3;  */

long FUN_105291db4(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_105291de4(param_1);
  }
  return param_1;
}



/* Entry: 105291de4; end: 105291e03;  */

void FUN_105291de4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x18;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 105291e04; end: 105291e5f;  */

void FUN_105291e04(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x18;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 105291e60; end: 105291e67;  */

void FUN_105291e60(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x18;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 105291e68; end: 105291ef3;  */

void FUN_105291e68(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x18;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 105291ef4; end: 105291f77;  */

undefined8 FUN_105291ef4(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  func_0x0001052922cc();
  FUN_105291f78();
  func_0x0001052922f8();
  FUN_105291c78();
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20;
  puStack_48[2] = unaff_x20[2];
  puStack_48[1] = uVar2;
  *puStack_48 = uVar1;
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  *unaff_x20 = 0;
  puStack_48 = puStack_48 + 3;
  func_0x0001052922ec();
  FUN_105291c38();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000105291e34(auStack_58);
  return uVar1;
}



/* Entry: 105291f78; end: 105291fbf;  */

long * FUN_105291f78(long *param_1,long *param_2)

{
  ulong uVar1;
  long extraout_x8;
  long extraout_x9;
  long *plVar2;
  long alStack_58 [5];
  
  if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
    uVar1 = (param_1[2] - *param_1) / 0x18;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x555555555555554 < uVar1) {
      plVar2 = (long *)0xaaaaaaaaaaaaaaa;
    }
    return plVar2;
  }
  FUN_105291c2c();
  func_0x0001052922ac();
  if ((long *)(extraout_x9 >> 2) < param_2) {
    if ((ulong)param_2 >> 0x3e != 0) {
      FUN_10529201c();
      func_0x000105292324();
      FUN_1052920d8();
      func_0x00010529229c();
      func_0x0001052922e0();
      func_0x000105292350();
      plVar2 = (long *)(extraout_x8 - (param_1[1] - *param_1));
      _memcpy(plVar2);
      func_0x00010529222c();
      return plVar2;
    }
    func_0x000105292340();
    FUN_10529205c(alStack_58);
    func_0x0001052922ec();
    FUN_105292028();
    param_1 = alStack_58;
    FUN_1052920d8(param_1);
  }
  return param_1;
}



/* Entry: 105291fc0; end: 10529201b;  */

void FUN_105291fc0(long *param_1,ulong param_2)

{
  long extraout_x8;
  long extraout_x9;
  undefined1 auStack_48 [40];
  
  func_0x0001052922ac();
  if ((ulong)(extraout_x9 >> 2) < param_2) {
    if (param_2 >> 0x3e != 0) {
      FUN_10529201c();
      func_0x000105292324();
      FUN_1052920d8();
      func_0x00010529229c();
      func_0x0001052922e0();
      func_0x000105292350();
      _memcpy(extraout_x8 - (param_1[1] - *param_1));
      func_0x00010529222c();
      return;
    }
    func_0x000105292340();
    FUN_10529205c(auStack_48);
    func_0x0001052922ec();
    FUN_105292028();
    FUN_1052920d8(auStack_48);
  }
  return;
}



/* Entry: 10529201c; end: 105292027;  */

void FUN_10529201c(long *param_1)

{
  long extraout_x8;
  
  func_0x0001052922e0();
  func_0x000105292350();
  _memcpy(extraout_x8 - (param_1[1] - *param_1));
  func_0x00010529222c();
  return;
}



/* Entry: 105292028; end: 10529205b;  */

void FUN_105292028(long *param_1)

{
  long extraout_x8;
  
  func_0x000105292350();
  _memcpy(extraout_x8 - (param_1[1] - *param_1));
  func_0x00010529222c();
  return;
}



/* Entry: 10529205c; end: 1052920bb;  */

void FUN_10529205c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x000105292330();
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010529209c();
  }
  lVar1 = param_4 + unaff_x20 * 4;
  *unaff_x19 = param_4;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_4 + param_2 * 4;
  return;
}



/* Entry: 1052920bc; end: 1052920d7;  */

long * FUN_1052920bc(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3e == 0) {
    plVar1 = (long *)(param_2 << 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_105292104();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1052920d8; end: 105292103;  */

long * FUN_1052920d8(long *param_1)

{
  FUN_105292104();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 105292104; end: 105292127;  */

void FUN_105292104(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -4;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 105292128; end: 10529216b;  */

undefined4 * FUN_105292128(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 2);
  if (puVar1 < *(undefined4 **)(param_1 + 4)) {
    puVar2 = puVar1 + 1;
    *puVar1 = *param_2;
  }
  else {
    puVar2 = param_1;
    FUN_10529216c();
  }
  *(undefined4 **)(param_1 + 2) = puVar2;
  return puVar2 + -1;
}



/* Entry: 10529216c; end: 1052921eb;  */

long FUN_10529216c(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined4 *unaff_x20;
  undefined1 auStack_48 [16];
  undefined4 *puStack_38;
  
  func_0x0001052922cc();
  FUN_1052921ec();
  FUN_10529205c(auStack_48,param_1,unaff_x19[1] - *unaff_x19 >> 2,unaff_x19 + 2);
  *puStack_38 = *unaff_x20;
  puStack_38 = puStack_38 + 1;
  func_0x0001052922ec();
  FUN_105292028();
  lVar1 = unaff_x19[1];
  FUN_1052920d8(auStack_48);
  return lVar1;
}



/* Entry: 1052921ec; end: 10529222b;  */

long * FUN_1052921ec(long *param_1,long *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    plVar2 = (long *)(param_1[2] - *param_1 >> 1);
    if (plVar2 <= param_2) {
      plVar2 = param_2;
    }
    if (0x7ffffffffffffffb < (ulong)(param_1[2] - *param_1)) {
      plVar2 = (long *)0x3fffffffffffffff;
    }
    return plVar2;
  }
  FUN_10529201c();
  unaff_x19[1] = unaff_x21;
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
  return param_1;
}



/* Entry: 10529222c; end: 1052923bf;  */

void FUN_10529222c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  unaff_x19[1] = unaff_x21;
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



/* Entry: 1052923c0; end: 10529279b;  */

undefined1 * FUN_1052923c0(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_5d0 [8];
  undefined1 auStack_5c8 [8];
  undefined1 auStack_5c0 [8];
  undefined1 auStack_5b8 [8];
  undefined1 auStack_5b0 [8];
  undefined1 auStack_5a8 [8];
  undefined1 auStack_5a0 [8];
  undefined1 auStack_598 [8];
  undefined1 auStack_590 [8];
  undefined1 auStack_588 [8];
  undefined1 auStack_580 [8];
  undefined1 auStack_578 [8];
  undefined1 auStack_570 [8];
  undefined1 auStack_568 [8];
  undefined1 auStack_560 [8];
  undefined1 auStack_558 [8];
  undefined1 auStack_550 [8];
  undefined1 auStack_548 [8];
  undefined1 auStack_540 [8];
  undefined1 auStack_538 [8];
  undefined1 auStack_530 [8];
  undefined1 auStack_528 [8];
  undefined1 auStack_520 [8];
  undefined1 auStack_518 [8];
  undefined1 auStack_510 [8];
  undefined1 auStack_508 [8];
  undefined1 auStack_500 [8];
  undefined1 auStack_4f8 [8];
  undefined1 auStack_4f0 [24];
  undefined1 auStack_4d8 [24];
  undefined1 auStack_4c0 [24];
  undefined1 auStack_4a8 [24];
  undefined1 auStack_490 [24];
  undefined1 auStack_478 [24];
  undefined1 auStack_460 [24];
  undefined1 auStack_448 [24];
  undefined1 auStack_430 [24];
  undefined1 auStack_418 [24];
  undefined1 auStack_400 [24];
  undefined1 auStack_3e8 [24];
  undefined1 auStack_3d0 [24];
  undefined1 auStack_3b8 [24];
  undefined1 auStack_3a0 [24];
  undefined1 auStack_388 [24];
  undefined1 auStack_370 [24];
  undefined1 auStack_358 [24];
  undefined1 auStack_340 [24];
  undefined1 auStack_328 [24];
  undefined1 auStack_310 [24];
  undefined1 auStack_2f8 [24];
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined1 auStack_2b0 [24];
  undefined1 auStack_298 [24];
  undefined1 auStack_280 [24];
  undefined8 uStack_268;
  undefined1 auStack_230 [8];
  undefined1 auStack_228 [8];
  undefined1 auStack_220 [16];
  undefined1 auStack_210 [8];
  undefined1 auStack_208 [112];
  undefined1 uStack_198;
  undefined2 uStack_190;
  undefined8 uStack_188;
  undefined2 uStack_180;
  undefined8 uStack_178;
  undefined2 uStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined1 uStack_15f;
  undefined1 uStack_158;
  undefined2 uStack_150;
  undefined1 uStack_148;
  undefined2 uStack_140;
  undefined1 uStack_138;
  undefined2 uStack_130;
  undefined1 uStack_128;
  undefined2 uStack_120;
  undefined1 uStack_118;
  undefined2 uStack_110;
  undefined1 uStack_108;
  undefined2 uStack_100;
  undefined1 uStack_f8;
  undefined2 uStack_f0;
  undefined8 uStack_e8;
  undefined2 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined1 auStack_b8 [16];
  undefined4 uStack_a8;
  undefined2 uStack_a0;
  undefined8 uStack_98;
  undefined2 uStack_90;
  undefined1 uStack_88;
  undefined2 uStack_80;
  undefined1 uStack_78;
  undefined2 uStack_70;
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10529279c();
  func_0x0001003b2110(auStack_230,0x1136b9a00);
  FUN_105282834(auStack_208,param_1);
  func_0x0001052938c8(param_1 + 0x18);
  func_0x0001052938c8(param_1 + 0x30);
  func_0x0001052938c8(param_1 + 0x48);
  func_0x0001052938c8(param_1 + 0x60);
  func_0x0001052938c8(param_1 + 0x78);
  func_0x00010b9abe10(auStack_210,(*(long *)(param_1 + 0x98) - *(long *)(param_1 + 0x90)) / 0x60);
  lVar6 = 0;
  uVar7 = 0;
  while( true ) {
    if ((ulong)((*(long *)(param_1 + 0x98) - *(long *)(param_1 + 0x90)) / 0x60) <= uVar7) break;
    FUN_10529e178(auStack_220,*(long *)(param_1 + 0x90) + lVar6);
    func_0x0001052938d0();
    func_0x00010b9a8d98(auStack_220);
    uVar7 = uVar7 + 1;
    lVar6 = lVar6 + 0x60;
  }
  func_0x000105293950();
  func_0x000105293948();
  uStack_198 = *(undefined1 *)(param_1 + 0xa8);
  uStack_190 = 7;
  uStack_180 = 5;
  uStack_188 = *(undefined8 *)(param_1 + 0xb0);
  uStack_178 = *(undefined8 *)(param_1 + 0xb8);
  uStack_170 = 5;
  if (*(char *)(param_1 + 0xc4) == '\x01') {
    uStack_168 = CONCAT44(uStack_168._4_4_,*(undefined4 *)(param_1 + 0xc0));
    uStack_160 = 4;
  }
  else {
    uStack_168 = 0;
    uStack_160 = 1;
  }
  uStack_15f = 0;
  uStack_158 = *(undefined1 *)(param_1 + 200);
  uStack_150 = 7;
  uStack_148 = *(undefined1 *)(param_1 + 0xc9);
  uStack_140 = 7;
  uStack_138 = *(undefined1 *)(param_1 + 0xca);
  uStack_130 = 7;
  uStack_128 = *(undefined1 *)(param_1 + 0xcb);
  uStack_120 = 7;
  uStack_118 = *(undefined1 *)(param_1 + 0xcc);
  uStack_110 = 7;
  uStack_108 = *(undefined1 *)(param_1 + 0xcd);
  uStack_100 = 7;
  uStack_f8 = *(undefined1 *)(param_1 + 0xce);
  uStack_f0 = 7;
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    FUN_10527f784(&uStack_e8,param_1 + 0xd0);
  }
  else {
    uStack_e0 = 1;
    uStack_e8 = 0;
  }
  if (*(char *)(param_1 + 0xfc) == '\x01') {
    uStack_d8 = CONCAT44(uStack_d8._4_4_,*(undefined4 *)(param_1 + 0xf8));
    uStack_d0 = 4;
  }
  else {
    uStack_d8 = 0;
    uStack_d0 = 1;
  }
  uStack_cf = 0;
  func_0x00010b9abe10(auStack_210,*(long *)(param_1 + 0x108) - *(long *)(param_1 + 0x100) >> 5);
  lVar6 = 0;
  for (uVar7 = 0; uVar7 < (ulong)(*(long *)(param_1 + 0x108) - *(long *)(param_1 + 0x100) >> 5);
      uVar7 = uVar7 + 1) {
    FUN_1052996e4(auStack_220,*(long *)(param_1 + 0x100) + lVar6);
    func_0x0001052938d0();
    func_0x00010b9a8d98(auStack_220);
    lVar6 = lVar6 + 0x20;
  }
  func_0x000105293950();
  func_0x000105293948();
  func_0x00010528cbc8(auStack_b8,param_1 + 0x118);
  uStack_a8 = *(undefined4 *)(param_1 + 0x148);
  uStack_a0 = 4;
  if (*(char *)(param_1 + 0x158) == '\x01') {
    FUN_10529c538(&uStack_98,param_1 + 0x14c);
  }
  else {
    uStack_90 = 1;
    uStack_98 = 0;
  }
  uStack_88 = *(undefined1 *)(param_1 + 0x15c);
  uStack_80 = 7;
  uStack_78 = *(undefined1 *)(param_1 + 0x15d);
  uStack_70 = 7;
  FUN_105292f00(auStack_68,param_1 + 0x160);
  func_0x000104bdb9bc(auStack_228,auStack_230,auStack_208,0x1b);
  lVar6 = 0x1a0;
  do {
    func_0x00010b9a8d98(auStack_208 + lVar6);
    lVar6 = lVar6 + -0x10;
    uVar1 = lVar6 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_230);
  func_0x000105293900();
  func_0x00010b9a8f60();
  puVar3 = auStack_228;
  func_0x000104bdbf78();
  func_0x00010529395c(uStack_58);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    lVar6 = -0x1b0;
    lVar5 = -0x10;
    do {
      func_0x00010b9a8d98(lVar5);
      lVar5 = lVar5 + -0x10;
      lVar6 = lVar6 + 0x10;
      uVar1 = lVar6 == 0;
    } while (!(bool)uVar1);
    func_0x0001003b1f60(auStack_230);
    func_0x000105293890();
    uStack_268 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    if ((bRam00000001136b99c0 & 1) == 0) {
      iVar2 = 0x136b99c0;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x0001003a83dc(auStack_4f8,"_djinni_record_MessageMetadata");
        pcVar4 = "seenBy";
        func_0x0001003a83dc(auStack_500,"seenBy");
        func_0x000104bef3dc();
        func_0x0001003b1b50(auStack_4f0,auStack_500,pcVar4);
        pcVar4 = "openedBy";
        func_0x0001003a83dc(auStack_508,"openedBy");
        func_0x000104bef3dc();
        func_0x0001003b1b50(auStack_4d8,auStack_508,pcVar4);
        pcVar4 = "savedBy";
        func_0x0001003a83dc(auStack_510,"savedBy");
        func_0x000104bef3dc();
        func_0x0001003b1b50(auStack_4c0,auStack_510,pcVar4);
        pcVar4 = "mentionedUserIds";
        func_0x0001003a83dc(auStack_518,"mentionedUserIds");
        func_0x000104bef3dc();
        func_0x0001003b1b50(auStack_4a8,auStack_518,pcVar4);
        pcVar4 = "screenShottedBy";
        func_0x0001003a83dc(auStack_520,"screenShottedBy");
        func_0x000104bef3dc();
        func_0x0001003b1b50(auStack_490,auStack_520,pcVar4);
        pcVar4 = "screenRecordedBy";
        func_0x0001003a83dc(auStack_528,"screenRecordedBy");
        func_0x000104bef3dc();
        func_0x0001003b1b50(auStack_478,auStack_528,pcVar4);
        func_0x0001003a83dc(auStack_530,"reactions");
        if ((bRam00000001136b99c8 & 1) == 0) goto LAB_105292d9c;
        goto LAB_10529291c;
      }
    }
    while (func_0x00010529395c(uStack_268), !(bool)uVar1) {
      ___stack_chk_fail();
LAB_105292d9c:
      iVar2 = 0x136b99c8;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        FUN_10529e290();
        func_0x00010b990868(0x1136b9a08);
        ___cxa_guard_release(0x1136b99c8);
      }
LAB_10529291c:
      func_0x0001003b1b50(auStack_460,auStack_530,0x1136b9a08);
      pcVar4 = "tombstone";
      func_0x0001003a83dc(auStack_538,"tombstone");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_448,auStack_538,pcVar4);
      pcVar4 = "createdAt";
      func_0x0001003a83dc(auStack_540,"createdAt");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_430,auStack_540,pcVar4);
      pcVar4 = "readAt";
      func_0x0001003a83dc(auStack_548,"readAt");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_418,auStack_548,pcVar4);
      func_0x0001003a83dc(auStack_550,"playableSnapState");
      if ((bRam00000001136b99d0 & 1) == 0) {
        iVar2 = 0x136b99d0;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          if ((bRam00000001136b99d8 & 1) == 0) {
            iVar2 = 0x136b99d8;
            ___cxa_guard_acquire();
            if (iVar2 != 0) {
              func_0x00010b990e20(0x1136b9a28);
              ___cxa_guard_release(0x1136b99d8);
            }
          }
          func_0x00010b990784(0x1136b9a28);
          ___cxa_guard_release(0x1136b99d0);
        }
      }
      func_0x0001003b1b50(auStack_400,auStack_550,0x1136b9a18);
      pcVar4 = "isSaveable";
      func_0x0001003a83dc(auStack_558,"isSaveable");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_3e8,auStack_558,pcVar4);
      pcVar4 = "isFriendLinkPending";
      func_0x0001003a83dc(auStack_560,"isFriendLinkPending");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_3d0,auStack_560,pcVar4);
      pcVar4 = "isReactable";
      func_0x0001003a83dc(auStack_568,"isReactable");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_3b8,auStack_568,pcVar4);
      pcVar4 = "isReplyable";
      func_0x0001003a83dc(auStack_570,"isReplyable");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_3a0,auStack_570,pcVar4);
      pcVar4 = "isErasable";
      func_0x0001003a83dc(auStack_578,"isErasable");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_388,auStack_578,pcVar4);
      pcVar4 = "isEdited";
      func_0x0001003a83dc(auStack_580,"isEdited");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_370,auStack_580,pcVar4);
      pcVar4 = "isEditable";
      func_0x0001003a83dc(auStack_588,"isEditable");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_358,auStack_588,pcVar4);
      func_0x0001003a83dc(auStack_590,"botMentionResponseMetadata");
      if ((bRam00000001136b99e0 & 1) == 0) {
        iVar2 = 0x136b99e0;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          FUN_10527f88c();
          func_0x00010b990784(0x1136b9a38);
          ___cxa_guard_release(0x1136b99e0);
        }
      }
      func_0x0001003b1b50(auStack_340,auStack_590,0x1136b9a38);
      pcVar4 = "snapPostOpenViewingState";
      func_0x0001003a83dc(auStack_598,"snapPostOpenViewingState");
      FUN_105292f20();
      func_0x0001003b1b50(auStack_328,auStack_598,pcVar4);
      func_0x0001003a83dc(auStack_5a0,"replayedByUsers");
      if ((bRam00000001136b99e8 & 1) == 0) {
        iVar2 = 0x136b99e8;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          FUN_1052997ec();
          func_0x00010b990868(0x1136b9a48);
          ___cxa_guard_release(0x1136b99e8);
        }
      }
      func_0x0001003b1b50(auStack_310,auStack_5a0,0x1136b9a48);
      pcVar4 = "bundleMetadata";
      func_0x0001003a83dc(auStack_5a8,"bundleMetadata");
      FUN_10528cd5c();
      func_0x0001003b1b50(auStack_2f8,auStack_5a8,pcVar4);
      pcVar4 = "savePolicy";
      func_0x0001003a83dc(auStack_5b0,"savePolicy");
      FUN_10528cc4c();
      func_0x0001003b1b50(auStack_2e0,auStack_5b0,pcVar4);
      func_0x0001003a83dc(auStack_5b8,"streamingResponseMetadata");
      if ((bRam00000001136b99f0 & 1) == 0) {
        iVar2 = 0x136b99f0;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          FUN_10529c664();
          func_0x00010b990784(0x1136b9a58);
          ___cxa_guard_release(0x1136b99f0);
        }
      }
      func_0x0001003b1b50(auStack_2c8,auStack_5b8,0x1136b9a58);
      pcVar4 = "isPriorityChatNotificationEligible";
      func_0x0001003a83dc(auStack_5c0,"isPriorityChatNotificationEligible");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_2b0,auStack_5c0,pcVar4);
      pcVar4 = "didSendPriorityChatNotification";
      func_0x0001003a83dc(auStack_5c8,"didSendPriorityChatNotification");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_298,auStack_5c8,pcVar4);
      pcVar4 = "pollMetadata";
      func_0x0001003a83dc(auStack_5d0,"pollMetadata");
      FUN_105292f7c();
      func_0x0001003b1b50(auStack_280,auStack_5d0,pcVar4);
      func_0x000104bdbd44(0x1136b99f8,auStack_4f8,0,auStack_4f0,0x1b);
      lVar6 = 0x270;
      do {
        func_0x0001003b1c5c(auStack_4f0 + lVar6);
        lVar6 = lVar6 + -0x18;
        uVar1 = lVar6 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_5d0);
      func_0x0001003a8c94(auStack_5c8);
      func_0x0001003a8c94(auStack_5c0);
      func_0x0001003a8c94(auStack_5b8);
      func_0x0001003a8c94(auStack_5b0);
      func_0x0001003a8c94(auStack_5a8);
      func_0x0001003a8c94(auStack_5a0);
      func_0x0001003a8c94(auStack_598);
      func_0x0001003a8c94(auStack_590);
      func_0x0001003a8c94(auStack_588);
      func_0x0001003a8c94(auStack_580);
      func_0x0001003a8c94(auStack_578);
      func_0x0001003a8c94(auStack_570);
      func_0x0001003a8c94(auStack_568);
      func_0x0001003a8c94(auStack_560);
      func_0x0001003a8c94(auStack_558);
      func_0x0001003a8c94(auStack_550);
      func_0x0001003a8c94(auStack_548);
      func_0x0001003a8c94(auStack_540);
      func_0x0001003a8c94(auStack_538);
      func_0x0001003a8c94(auStack_530);
      func_0x0001003a8c94(auStack_528);
      func_0x0001003a8c94(auStack_520);
      func_0x0001003a8c94(auStack_518);
      func_0x0001003a8c94(auStack_510);
      func_0x0001003a8c94(auStack_508);
      func_0x0001003a8c94(auStack_500);
      func_0x0001003a8c94(auStack_4f8);
      ___cxa_guard_release(0x1136b99c0);
    }
    return (undefined1 *)0x1136b99f8;
  }
  return puVar3;
}



/* Entry: 10529279c; end: 105292eff;  */

undefined8 FUN_10529279c(void)

{
  undefined1 in_ZR;
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined1 auStack_3a0 [8];
  undefined1 auStack_398 [8];
  undefined1 auStack_390 [8];
  undefined1 auStack_388 [8];
  undefined1 auStack_380 [8];
  undefined1 auStack_378 [8];
  undefined1 auStack_370 [8];
  undefined1 auStack_368 [8];
  undefined1 auStack_360 [8];
  undefined1 auStack_358 [8];
  undefined1 auStack_350 [8];
  undefined1 auStack_348 [8];
  undefined1 auStack_340 [8];
  undefined1 auStack_338 [8];
  undefined1 auStack_330 [8];
  undefined1 auStack_328 [8];
  undefined1 auStack_320 [8];
  undefined1 auStack_318 [8];
  undefined1 auStack_310 [8];
  undefined1 auStack_308 [8];
  undefined1 auStack_300 [8];
  undefined1 auStack_2f8 [8];
  undefined1 auStack_2f0 [8];
  undefined1 auStack_2e8 [8];
  undefined1 auStack_2e0 [8];
  undefined1 auStack_2d8 [8];
  undefined1 auStack_2d0 [8];
  undefined1 auStack_2c8 [8];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001136b99c0 & 1) == 0) {
    iVar1 = 0x136b99c0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_2c8,"_djinni_record_MessageMetadata");
      pcVar2 = "seenBy";
      func_0x0001003a83dc(auStack_2d0,"seenBy");
      func_0x000104bef3dc();
      func_0x0001003b1b50(auStack_2c0,auStack_2d0,pcVar2);
      pcVar2 = "openedBy";
      func_0x0001003a83dc(auStack_2d8,"openedBy");
      func_0x000104bef3dc();
      func_0x0001003b1b50(auStack_2a8,auStack_2d8,pcVar2);
      pcVar2 = "savedBy";
      func_0x0001003a83dc(auStack_2e0,"savedBy");
      func_0x000104bef3dc();
      func_0x0001003b1b50(auStack_290,auStack_2e0,pcVar2);
      pcVar2 = "mentionedUserIds";
      func_0x0001003a83dc(auStack_2e8,"mentionedUserIds");
      func_0x000104bef3dc();
      func_0x0001003b1b50(auStack_278,auStack_2e8,pcVar2);
      pcVar2 = "screenShottedBy";
      func_0x0001003a83dc(auStack_2f0,"screenShottedBy");
      func_0x000104bef3dc();
      func_0x0001003b1b50(auStack_260,auStack_2f0,pcVar2);
      pcVar2 = "screenRecordedBy";
      func_0x0001003a83dc(auStack_2f8,"screenRecordedBy");
      func_0x000104bef3dc();
      func_0x0001003b1b50(auStack_248,auStack_2f8,pcVar2);
      func_0x0001003a83dc(auStack_300,"reactions");
      if ((bRam00000001136b99c8 & 1) == 0) goto LAB_105292d9c;
      goto LAB_10529291c;
    }
  }
  while (func_0x00010529395c(uStack_38), !(bool)in_ZR) {
    ___stack_chk_fail();
LAB_105292d9c:
    iVar1 = 0x136b99c8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10529e290();
      func_0x00010b990868(0x1136b9a08);
      ___cxa_guard_release(0x1136b99c8);
    }
LAB_10529291c:
    func_0x0001003b1b50(auStack_230,auStack_300,0x1136b9a08);
    pcVar2 = "tombstone";
    func_0x0001003a83dc(auStack_308,"tombstone");
    func_0x000104bef4f0();
    func_0x0001003b1b50(auStack_218,auStack_308,pcVar2);
    pcVar2 = "createdAt";
    func_0x0001003a83dc(auStack_310,"createdAt");
    func_0x000104bef5f8();
    func_0x0001003b1b50(auStack_200,auStack_310,pcVar2);
    pcVar2 = "readAt";
    func_0x0001003a83dc(auStack_318,"readAt");
    func_0x000104bef5f8();
    func_0x0001003b1b50(auStack_1e8,auStack_318,pcVar2);
    func_0x0001003a83dc(auStack_320,"playableSnapState");
    if ((bRam00000001136b99d0 & 1) == 0) {
      iVar1 = 0x136b99d0;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        if ((bRam00000001136b99d8 & 1) == 0) {
          iVar1 = 0x136b99d8;
          ___cxa_guard_acquire();
          if (iVar1 != 0) {
            func_0x00010b990e20(0x1136b9a28);
            ___cxa_guard_release(0x1136b99d8);
          }
        }
        func_0x00010b990784(0x1136b9a28);
        ___cxa_guard_release(0x1136b99d0);
      }
    }
    func_0x0001003b1b50(auStack_1d0,auStack_320,0x1136b9a18);
    pcVar2 = "isSaveable";
    func_0x0001003a83dc(auStack_328,"isSaveable");
    func_0x000104bef4f0();
    func_0x0001003b1b50(auStack_1b8,auStack_328,pcVar2);
    pcVar2 = "isFriendLinkPending";
    func_0x0001003a83dc(auStack_330,"isFriendLinkPending");
    func_0x000104bef4f0();
    func_0x0001003b1b50(auStack_1a0,auStack_330,pcVar2);
    pcVar2 = "isReactable";
    func_0x0001003a83dc(auStack_338,"isReactable");
    func_0x000104bef4f0();
    func_0x0001003b1b50(auStack_188,auStack_338,pcVar2);
    pcVar2 = "isReplyable";
    func_0x0001003a83dc(auStack_340,"isReplyable");
    func_0x000104bef4f0();
    func_0x0001003b1b50(auStack_170,auStack_340,pcVar2);
    pcVar2 = "isErasable";
    func_0x0001003a83dc(auStack_348,"isErasable");
    func_0x000104bef4f0();
    func_0x0001003b1b50(auStack_158,auStack_348,pcVar2);
    pcVar2 = "isEdited";
    func_0x0001003a83dc(auStack_350,"isEdited");
    func_0x000104bef4f0();
    func_0x0001003b1b50(auStack_140,auStack_350,pcVar2);
    pcVar2 = "isEditable";
    func_0x0001003a83dc(auStack_358,"isEditable");
    func_0x000104bef4f0();
    func_0x0001003b1b50(auStack_128,auStack_358,pcVar2);
    func_0x0001003a83dc(auStack_360,"botMentionResponseMetadata");
    if ((bRam00000001136b99e0 & 1) == 0) {
      iVar1 = 0x136b99e0;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        FUN_10527f88c();
        func_0x00010b990784(0x1136b9a38);
        ___cxa_guard_release(0x1136b99e0);
      }
    }
    func_0x0001003b1b50(auStack_110,auStack_360,0x1136b9a38);
    pcVar2 = "snapPostOpenViewingState";
    func_0x0001003a83dc(auStack_368,"snapPostOpenViewingState");
    FUN_105292f20();
    func_0x0001003b1b50(auStack_f8,auStack_368,pcVar2);
    func_0x0001003a83dc(auStack_370,"replayedByUsers");
    if ((bRam00000001136b99e8 & 1) == 0) {
      iVar1 = 0x136b99e8;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        FUN_1052997ec();
        func_0x00010b990868(0x1136b9a48);
        ___cxa_guard_release(0x1136b99e8);
      }
    }
    func_0x0001003b1b50(auStack_e0,auStack_370,0x1136b9a48);
    pcVar2 = "bundleMetadata";
    func_0x0001003a83dc(auStack_378,"bundleMetadata");
    FUN_10528cd5c();
    func_0x0001003b1b50(auStack_c8,auStack_378,pcVar2);
    pcVar2 = "savePolicy";
    func_0x0001003a83dc(auStack_380,"savePolicy");
    FUN_10528cc4c();
    func_0x0001003b1b50(auStack_b0,auStack_380,pcVar2);
    func_0x0001003a83dc(auStack_388,"streamingResponseMetadata");
    if ((bRam00000001136b99f0 & 1) == 0) {
      iVar1 = 0x136b99f0;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        FUN_10529c664();
        func_0x00010b990784(0x1136b9a58);
        ___cxa_guard_release(0x1136b99f0);
      }
    }
    func_0x0001003b1b50(auStack_98,auStack_388,0x1136b9a58);
    pcVar2 = "isPriorityChatNotificationEligible";
    func_0x0001003a83dc(auStack_390,"isPriorityChatNotificationEligible");
    func_0x000104bef4f0();
    func_0x0001003b1b50(auStack_80,auStack_390,pcVar2);
    pcVar2 = "didSendPriorityChatNotification";
    func_0x0001003a83dc(auStack_398,"didSendPriorityChatNotification");
    func_0x000104bef4f0();
    func_0x0001003b1b50(auStack_68,auStack_398,pcVar2);
    pcVar2 = "pollMetadata";
    func_0x0001003a83dc(auStack_3a0,"pollMetadata");
    FUN_105292f7c();
    func_0x0001003b1b50(auStack_50,auStack_3a0,pcVar2);
    func_0x000104bdbd44(0x1136b99f8,auStack_2c8,0,auStack_2c0,0x1b);
    lVar3 = 0x270;
    do {
      func_0x0001003b1c5c(auStack_2c0 + lVar3);
      lVar3 = lVar3 + -0x18;
      in_ZR = lVar3 == -0x18;
    } while (!(bool)in_ZR);
    func_0x0001003a8c94(auStack_3a0);
    func_0x0001003a8c94(auStack_398);
    func_0x0001003a8c94(auStack_390);
    func_0x0001003a8c94(auStack_388);
    func_0x0001003a8c94(auStack_380);
    func_0x0001003a8c94(auStack_378);
    func_0x0001003a8c94(auStack_370);
    func_0x0001003a8c94(auStack_368);
    func_0x0001003a8c94(auStack_360);
    func_0x0001003a8c94(auStack_358);
    func_0x0001003a8c94(auStack_350);
    func_0x0001003a8c94(auStack_348);
    func_0x0001003a8c94(auStack_340);
    func_0x0001003a8c94(auStack_338);
    func_0x0001003a8c94(auStack_330);
    func_0x0001003a8c94(auStack_328);
    func_0x0001003a8c94(auStack_320);
    func_0x0001003a8c94(auStack_318);
    func_0x0001003a8c94(auStack_310);
    func_0x0001003a8c94(auStack_308);
    func_0x0001003a8c94(auStack_300);
    func_0x0001003a8c94(auStack_2f8);
    func_0x0001003a8c94(auStack_2f0);
    func_0x0001003a8c94(auStack_2e8);
    func_0x0001003a8c94(auStack_2e0);
    func_0x0001003a8c94(auStack_2d8);
    func_0x0001003a8c94(auStack_2d0);
    func_0x0001003a8c94(auStack_2c8);
    ___cxa_guard_release(0x1136b99c0);
  }
  return 0x1136b99f8;
}



/* Entry: 105292f00; end: 105292f1f;  */

undefined4 * FUN_105292f00(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined4 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_88 [8];
  undefined4 auStack_80 [2];
  undefined4 auStack_78 [2];
  undefined2 uStack_70;
  undefined4 uStack_68;
  undefined2 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  if (*(char *)(param_2 + 0x18) != '\x01') {
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
    return param_2;
  }
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105296968();
  func_0x0001003b2110(auStack_88,0x113818930);
  auStack_78[0] = *param_2;
  uStack_68 = param_2[1];
  uStack_70 = 4;
  uStack_60 = 4;
  uStack_58 = *(undefined8 *)(param_2 + 2);
  uStack_50 = 5;
  if (*(char *)(param_2 + 4) == '\0') {
    uStack_50 = 1;
    uStack_58 = 0;
  }
  uStack_4f = 0;
  FUN_105296b94(auStack_48,param_2 + 6);
  func_0x000104bdb9bc(auStack_80,auStack_88,auStack_78,4);
  lVar9 = 0x30;
  do {
    func_0x00010b9a8d98((long)auStack_78 + lVar9);
    lVar9 = lVar9 + -0x10;
    uVar1 = lVar9 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_88);
  puVar7 = auStack_80;
  func_0x00010b9a8f60(param_1);
  puVar3 = auStack_80;
  func_0x000104bdbf78();
  FUN_105296b80(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    puVar4 = auStack_48;
    lVar9 = -0x40;
    do {
      func_0x00010b9a8d98(puVar4);
      iVar6 = (int)puVar7;
      puVar4 = puVar4 + -0x10;
      lVar9 = lVar9 + 0x10;
      uVar1 = lVar9 == 0;
    } while (!(bool)uVar1);
    func_0x0001003b1f60(auStack_88);
    __Unwind_Resume(puVar3);
    pcStack_98 = FUN_105296968;
    uStack_b8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lStack_b0 = lVar9;
    puStack_a8 = puVar3;
    puStack_a0 = &stack0xfffffffffffffff0;
    if ((bRam0000000113818938 & 1) == 0) {
      iVar2 = 0x13818938;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x0001003a83dc(auStack_120,"_djinni_record_PollMetadata");
        pcVar5 = "pollType";
        func_0x0001003a83dc(auStack_128,"pollType");
        FUN_105296af4();
        func_0x0001003b1b50(auStack_118,auStack_128,pcVar5);
        pcVar5 = "numOptions";
        func_0x0001003a83dc(auStack_130,"numOptions");
        func_0x000104bef760();
        func_0x0001003b1b50(auStack_100,auStack_130,pcVar5);
        pcVar5 = "timeRemainingMs";
        func_0x0001003a83dc(auStack_138,"timeRemainingMs");
        func_0x000104bef438();
        func_0x0001003b1b50(auStack_e8,auStack_138,pcVar5);
        pcVar5 = "typeMetadata";
        func_0x0001003a83dc(auStack_140,"typeMetadata");
        FUN_105296cac();
        func_0x0001003b1b50(auStack_d0,auStack_140,pcVar5);
        uVar8 = 0;
        func_0x000104bdbd44(0x113818928,auStack_120,0,auStack_118,4);
        lVar9 = 0x48;
        do {
          func_0x0001003b1c5c(auStack_118 + lVar9);
          iVar6 = (int)uVar8;
          lVar9 = lVar9 + -0x18;
          uVar1 = lVar9 == -0x18;
        } while (!(bool)uVar1);
        func_0x0001003a8c94(auStack_140);
        func_0x0001003a8c94(auStack_138);
        func_0x0001003a8c94(auStack_130);
        func_0x0001003a8c94(auStack_128);
        func_0x0001003a8c94(auStack_120);
        ___cxa_guard_release(0x113818938);
      }
    }
    FUN_105296b80(uStack_b8);
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      if (iVar6 == 0) {
        __Unwind_Resume();
      }
      func_0x000104bd46a0();
      if ((bRam00000001130cc0e0 & 1) == 0) {
        iVar6 = 0x130cc0e0;
        ___cxa_guard_acquire();
        if (iVar6 != 0) {
          func_0x00010b990e20(0x1130cc0d0);
          ___cxa_guard_release(0x1130cc0e0);
        }
      }
      return (undefined4 *)0x1130cc0d0;
    }
    return (undefined4 *)0x113818928;
  }
  return puVar3;
}



/* Entry: 105292f20; end: 105292f7b;  */

undefined8 FUN_105292f20(void)

{
  int iVar1;
  
  if ((bRam00000001130cbf30 & 1) == 0) {
    iVar1 = 0x130cbf30;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052937ec();
      func_0x00010b990784(0x1130cbf20);
      ___cxa_guard_release(0x1130cbf30);
    }
  }
  return 0x1130cbf20;
}



/* Entry: 105292f7c; end: 105292fd7;  */

undefined8 FUN_105292f7c(void)

{
  int iVar1;
  
  if ((bRam00000001130cbf60 & 1) == 0) {
    iVar1 = 0x130cbf60;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_105296968();
      func_0x00010b990784(0x1130cbf50);
      ___cxa_guard_release(0x1130cbf60);
    }
  }
  return 0x1130cbf50;
}



/* Entry: 105292fd8; end: 105292fe3;  */

void FUN_105292fd8(long *param_1,long param_2)

{
  func_0x000105293930();
  func_0x000105293970();
  FUN_1052930c4(param_1 + 2,*param_1,param_1[1],
                *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x60) * 0x60);
  func_0x000105293844();
  return;
}



/* Entry: 105292fe4; end: 105293027;  */

void FUN_105292fe4(long *param_1,long param_2)

{
  func_0x000105293970();
  FUN_1052930c4(param_1 + 2,*param_1,param_1[1],
                *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x60) * 0x60);
  func_0x000105293844();
  return;
}



/* Entry: 105293028; end: 105293097;  */

long * FUN_105293028(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000105293074();
  }
  lVar1 = param_4 + param_3 * 0x60;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x60;
  return param_1;
}



/* Entry: 105293098; end: 1052930c3;  */

void FUN_105293098(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  long lStack_48;
  
  if (param_2 < 0x2aaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x60);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001052938a0();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x60) {
    func_0x00010529316c(param_4,unaff_x22);
    param_4 = lStack_48 + 0x60;
    lStack_48 = param_4;
  }
  uStack_58 = 1;
  func_0x00010529313c();
  FUN_1052931ec(auStack_70);
  return;
}



/* Entry: 1052930c4; end: 10529313b;  */

void FUN_1052930c4(void)

{
  long in_x3;
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x0001052938a0();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x60) {
    func_0x00010529316c(in_x3,unaff_x22);
    in_x3 = lStack_38 + 0x60;
    lStack_38 = in_x3;
  }
  uStack_48 = 1;
  func_0x00010529313c();
  FUN_1052931ec(auStack_60);
  return;
}



/* Entry: 10529313c; end: 105293197;  */

void FUN_10529313c(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x60) {
    func_0x000104be1474();
  }
  return;
}



/* Entry: 105293198; end: 1052931eb;  */

void FUN_105293198(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  if (*(char *)(param_2 + 5) == '\x01') {
    uVar2 = param_2[3];
    uVar1 = param_2[2];
    param_1[4] = param_2[4];
    param_1[3] = uVar2;
    param_1[2] = uVar1;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return;
}



/* Entry: 1052931ec; end: 10529321b;  */

long FUN_1052931ec(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10529321c(param_1);
  }
  return param_1;
}



/* Entry: 10529321c; end: 10529323b;  */

void FUN_10529321c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x60;
    func_0x000104be1474();
  }
  return;
}



/* Entry: 10529323c; end: 105293297;  */

void FUN_10529323c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x60;
    func_0x000104be1474();
  }
  return;
}



/* Entry: 105293298; end: 10529329f;  */

void FUN_105293298(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000105293970(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x60;
    func_0x000104be1474();
  }
  return;
}



/* Entry: 1052932a0; end: 105293337;  */

void FUN_1052932a0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000105293970();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x60;
    func_0x000104be1474();
  }
  return;
}



/* Entry: 105293338; end: 1052933c7;  */

long FUN_105293338(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00010529397c();
  FUN_1052933c8();
  FUN_105293028(auStack_58,param_1,(unaff_x19[1] - *unaff_x19) / 0x60,unaff_x19 + 2);
  func_0x00010529316c(lStack_48);
  lStack_48 = lStack_48 + 0x60;
  func_0x000105293900();
  FUN_105292fe4();
  lVar1 = unaff_x19[1];
  func_0x0001052938e8();
  return lVar1;
}



/* Entry: 1052933c8; end: 10529343f;  */

long * FUN_1052933c8(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0x2aaaaaaaaaaaaaa < param_2) {
    FUN_105292fd8();
    func_0x000104be7394();
    *(undefined1 *)(param_1 + 4) = 1;
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x60;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x155555555555554 < uVar1) {
    plVar2 = (long *)0x2aaaaaaaaaaaaaa;
  }
  return plVar2;
}



/* Entry: 105293440; end: 105293477;  */

void FUN_105293440(long *param_1,long param_2)

{
  func_0x000105293970();
  FUN_105293500(param_1 + 2,*param_1,param_1[1],*(long *)(param_2 + 8) + (*param_1 - param_1[1]));
  func_0x000105293844();
  return;
}



/* Entry: 105293478; end: 1052934e3;  */

long * FUN_105293478(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001052934c0();
  }
  lVar1 = param_4 + param_3 * 0x20;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x20;
  return param_1;
}



/* Entry: 1052934e4; end: 1052934ff;  */

void FUN_1052934e4(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  long lStack_48;
  
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001052938a0();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x20) {
    FUN_1052935a8(param_4,unaff_x22);
    param_4 = lStack_48 + 0x20;
    lStack_48 = param_4;
  }
  uStack_58 = 1;
  FUN_105293578();
  FUN_1052935c0(auStack_70);
  return;
}



/* Entry: 105293500; end: 105293577;  */

void FUN_105293500(void)

{
  long in_x3;
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x0001052938a0();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x20) {
    FUN_1052935a8(in_x3,unaff_x22);
    in_x3 = lStack_38 + 0x20;
    lStack_38 = in_x3;
  }
  uStack_48 = 1;
  FUN_105293578();
  FUN_1052935c0(auStack_60);
  return;
}



/* Entry: 105293578; end: 1052935a7;  */

void FUN_105293578(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    func_0x000100100fec();
  }
  return;
}



/* Entry: 1052935a8; end: 1052935bf;  */

void FUN_1052935a8(long param_1,long param_2)

{
  func_0x00010529390c();
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  return;
}



/* Entry: 1052935c0; end: 1052935ef;  */

long FUN_1052935c0(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1052935f0(param_1);
  }
  return param_1;
}



/* Entry: 1052935f0; end: 10529360f;  */

void FUN_1052935f0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x20;
    func_0x000100100fec();
  }
  return;
}



/* Entry: 105293610; end: 10529366b;  */

void FUN_105293610(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x20;
    func_0x000100100fec();
  }
  return;
}



/* Entry: 10529366c; end: 105293673;  */

void FUN_10529366c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000105293970(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x20;
    func_0x000100100fec();
  }
  return;
}



/* Entry: 105293674; end: 10529370b;  */

void FUN_105293674(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000105293970();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x20;
    func_0x000100100fec();
  }
  return;
}



/* Entry: 10529370c; end: 10529378f;  */

long FUN_10529370c(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  func_0x00010529397c();
  FUN_105293790();
  FUN_105293478(auStack_48,param_1,unaff_x19[1] - *unaff_x19 >> 5,unaff_x19 + 2);
  FUN_1052935a8(lStack_38);
  lStack_38 = lStack_38 + 0x20;
  func_0x000105293900();
  FUN_105293440();
  lVar1 = unaff_x19[1];
  func_0x0001052938e0();
  return lVar1;
}



/* Entry: 105293790; end: 1052937eb;  */

long * FUN_105293790(long *param_1,long *param_2)

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
  func_0x000105293434();
  func_0x000104be7128();
  *(undefined1 *)(param_1 + 0xc) = 1;
  return param_1;
}



/* Entry: 1052937ec; end: 105293843;  */

undefined8 FUN_1052937ec(void)

{
  int iVar1;
  
  if ((bRam00000001130cbf48 & 1) == 0) {
    iVar1 = 0x130cbf48;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cbf38);
      ___cxa_guard_release(0x1130cbf48);
    }
  }
  return 0x1130cbf38;
}



/* Entry: 105293844; end: 10529398f;  */

void FUN_105293844(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  unaff_x19[1] = unaff_x21;
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



/* Entry: 105293990; end: 105293a3b;  */

void FUN_105293990(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x00010b9a97d0(&lStack_38);
  FUN_105293a3c(auStack_60,lStack_38 + 0x18);
  uVar1 = lStack_38 + 0x28;
  FUN_105293a98();
  uVar2 = lStack_38 + 0x38;
  func_0x000105293ac8();
  func_0x000104be727c(param_1,auStack_60);
  *(ulong *)(param_1 + 0x28) = uVar1 & 0xffffffffff;
  *(ulong *)(param_1 + 0x30) = uVar2 & 0xffffffffff;
  func_0x000104be1498(auStack_60);
  func_0x000104bdbf78(&lStack_38);
  return;
}



/* Entry: 105293a3c; end: 105293a97;  */

void FUN_105293a3c(undefined1 *param_1,long param_2)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [24];
  
  if (*(byte *)(param_2 + 8) < 2) {
    *param_1 = 0;
    param_1[0x20] = 0;
  }
  else {
    FUN_10527eddc(auStack_40);
    FUN_105293ee8(param_1,auStack_40);
    func_0x000104be14c8(auStack_38);
  }
  return;
}



/* Entry: 105293a98; end: 105293af7;  */

ulong FUN_105293a98(ulong param_1)

{
  if (*(byte *)(param_1 + 8) < 2) {
    return 0;
  }
  FUN_10529ab28();
  return param_1 & 0xffffffff | 0x100000000;
}



/* Entry: 105293af8; end: 105293c37;  */

long * FUN_105293af8(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  long *plVar2;
  undefined1 *puVar3;
  long *plVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_238 [16];
  long lStack_228;
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [24];
  undefined8 uStack_1a8;
  long lStack_1a0;
  long *plStack_198;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  long lStack_178;
  long lStack_170;
  undefined1 auStack_168 [8];
  undefined2 uStack_160;
  undefined1 auStack_158 [16];
  undefined8 uStack_148;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined8 uStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 auStack_78 [8];
  long lStack_70;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105293c38();
  func_0x0001003b2110(auStack_78,0x113818840);
  FUN_105293d98(auStack_68,param_2);
  func_0x000105293dac(auStack_58,param_2 + 0x28);
  func_0x000105293dc0(auStack_48,param_2 + 0x30);
  func_0x000104bdb9bc(&lStack_70,auStack_78,auStack_68,3);
  lVar9 = 0x20;
  do {
    func_0x00010b9a8d98(auStack_68 + lVar9);
    lVar9 = lVar9 + -0x10;
    uVar1 = lVar9 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_78);
  plVar4 = &lStack_70;
  func_0x00010b9a8f60(param_1);
  plVar2 = &lStack_70;
  func_0x000104bdbf78();
  func_0x000105293f14(uStack_38);
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_48;
  lVar9 = -0x30;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)plVar4;
    puVar3 = puVar3 + -0x10;
    lVar9 = lVar9 + 0x10;
    uVar1 = lVar9 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_78);
  plVar4 = plVar2;
  __Unwind_Resume();
  pcStack_88 = FUN_105293c38;
  uStack_a8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_a0 = lVar9;
  plStack_98 = plVar2;
  puStack_90 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818848 & 1) == 0) {
    plVar4 = (long *)0x113818848;
    ___cxa_guard_acquire();
    if ((int)plVar4 != 0) {
      func_0x0001003a83dc(auStack_f8,"_djinni_record_MessageTypeMetadata");
      pcVar5 = "audioNoteMetadata";
      func_0x0001003a83dc(auStack_100,"audioNoteMetadata");
      FUN_105293dd4();
      func_0x0001003b1b50(auStack_f0,auStack_100,pcVar5);
      pcVar5 = "shareMetadata";
      func_0x0001003a83dc(auStack_108,"shareMetadata");
      FUN_105293e30();
      func_0x0001003b1b50(auStack_d8,auStack_108,pcVar5);
      pcVar5 = "snapReplyMetadata";
      func_0x0001003a83dc(auStack_110,"snapReplyMetadata");
      FUN_105293e8c();
      func_0x0001003b1b50(auStack_c0,auStack_110,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818838,auStack_f8,0,auStack_f0,3);
      lVar9 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_f0 + lVar9);
        iVar6 = (int)uVar7;
        lVar9 = lVar9 + -0x18;
        uVar1 = lVar9 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_110);
      func_0x0001003a8c94(auStack_108);
      func_0x0001003a8c94(auStack_100);
      func_0x0001003a8c94(auStack_f8);
      plVar4 = (long *)0x113818848;
      ___cxa_guard_release();
    }
  }
  func_0x000105293f14(uStack_a8);
  if ((bool)uVar1) {
    return (long *)0x113818838;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((char)plVar4[4] != '\x01') {
    *(undefined2 *)(extraout_x8_00 + 1) = 1;
    *extraout_x8_00 = 0;
    return plVar4;
  }
  pcStack_118 = FUN_105293d98;
  uStack_148 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_120 = &puStack_90;
  FUN_10527f01c();
  func_0x0001003b2110(&lStack_178,0x113818160);
  auStack_168[0] = (undefined1)*plVar4;
  uStack_160 = 7;
  FUN_10527f14c(auStack_158,plVar4 + 1);
  func_0x000104bdb9bc(&lStack_170,&lStack_178,auStack_168,2);
  lVar9 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_168 + lVar9);
    lVar9 = lVar9 + -0x10;
    uVar1 = lVar9 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(&lStack_178);
  plVar4 = &lStack_170;
  func_0x00010b9a8f60(extraout_x8_00);
  plVar2 = &lStack_170;
  func_0x000104bdbf78();
  func_0x00010527f56c(uStack_148);
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_158;
  lVar9 = -0x20;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)plVar4;
    puVar3 = puVar3 + -0x10;
    lVar9 = lVar9 + 0x10;
    uVar1 = lVar9 == 0;
  } while (!(bool)uVar1);
  plVar4 = &lStack_178;
  func_0x0001003b1f60();
  func_0x00010527f548();
  pcStack_188 = FUN_10527f01c;
  uStack_1a8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_1a0 = lVar9;
  plStack_198 = plVar2;
  pppuStack_190 = &ppuStack_120;
  if ((bRam0000000113818168 & 1) == 0) {
    plVar4 = (long *)0x113818168;
    ___cxa_guard_acquire();
    if ((int)plVar4 != 0) {
      func_0x0001003a83dc(auStack_1e0,"_djinni_record_AudioNoteMetadata");
      pcVar5 = "allowsTranscription";
      func_0x0001003a83dc(auStack_1e8,"allowsTranscription");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_1d8,auStack_1e8,pcVar5);
      pcVar5 = "transcriptions";
      func_0x0001003a83dc(auStack_1f0,"transcriptions");
      FUN_10527f200();
      func_0x0001003b1b50(auStack_1c0,auStack_1f0,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818158,auStack_1e0,0,auStack_1d8,2);
      lVar9 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_1d8 + lVar9);
        iVar6 = (int)uVar7;
        lVar9 = lVar9 + -0x18;
        uVar1 = lVar9 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_1f0);
      func_0x0001003a8c94(auStack_1e8);
      func_0x0001003a8c94(auStack_1e0);
      plVar4 = (long *)0x113818168;
      ___cxa_guard_release();
    }
  }
  func_0x00010527f56c(uStack_1a8);
  if ((bool)uVar1) {
    return (long *)0x113818158;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  func_0x00010b9abe10(&lStack_228,plVar4[1] - *plVar4 >> 4);
  lVar9 = 0x18;
  for (uVar8 = 0; uVar8 < (ulong)(plVar4[1] - *plVar4 >> 4); uVar8 = uVar8 + 1) {
    FUN_10529da70(auStack_238,*plVar4 + lVar9 + -0x18);
    func_0x00010b9a9020(lStack_228 + lVar9,auStack_238);
    func_0x00010b9a8d98(auStack_238);
    lVar9 = lVar9 + 0x10;
  }
  func_0x00010b9a8f84(extraout_x8,&lStack_228);
  plVar4 = &lStack_228;
  func_0x000104bddf38(plVar4);
  return plVar4;
}



/* Entry: 105293c38; end: 105293d97;  */

long * FUN_105293c38(long *param_1,int param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long *plVar2;
  undefined1 *puVar3;
  long *plVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_1b8 [16];
  long lStack_1a8;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined8 uStack_128;
  long lStack_120;
  long *plStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  long lStack_f8;
  long lStack_f0;
  undefined1 auStack_e8 [8];
  undefined2 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818848 & 1) == 0) {
    param_1 = (long *)0x113818848;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_78,"_djinni_record_MessageTypeMetadata");
      pcVar5 = "audioNoteMetadata";
      func_0x0001003a83dc(auStack_80,"audioNoteMetadata");
      FUN_105293dd4();
      func_0x0001003b1b50(auStack_70,auStack_80,pcVar5);
      pcVar5 = "shareMetadata";
      func_0x0001003a83dc(auStack_88,"shareMetadata");
      FUN_105293e30();
      func_0x0001003b1b50(auStack_58,auStack_88,pcVar5);
      pcVar5 = "snapReplyMetadata";
      func_0x0001003a83dc(auStack_90,"snapReplyMetadata");
      FUN_105293e8c();
      func_0x0001003b1b50(auStack_40,auStack_90,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818838,auStack_78,0,auStack_70,3);
      lVar8 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_70 + lVar8);
        param_2 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        in_ZR = lVar8 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      func_0x0001003a8c94(auStack_80);
      func_0x0001003a8c94(auStack_78);
      param_1 = (long *)0x113818848;
      ___cxa_guard_release();
    }
  }
  func_0x000105293f14(uStack_28);
  if ((bool)in_ZR) {
    return (long *)0x113818838;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((char)param_1[4] != '\x01') {
    *(undefined2 *)(extraout_x8_00 + 1) = 1;
    *extraout_x8_00 = 0;
    return param_1;
  }
  pcStack_98 = FUN_105293d98;
  uStack_c8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_10527f01c();
  func_0x0001003b2110(&lStack_f8,0x113818160);
  auStack_e8[0] = (undefined1)*param_1;
  uStack_e0 = 7;
  FUN_10527f14c(auStack_d8,param_1 + 1);
  func_0x000104bdb9bc(&lStack_f0,&lStack_f8,auStack_e8,2);
  lVar8 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_e8 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(&lStack_f8);
  plVar4 = &lStack_f0;
  func_0x00010b9a8f60(extraout_x8_00);
  plVar2 = &lStack_f0;
  func_0x000104bdbf78();
  func_0x00010527f56c(uStack_c8);
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_d8;
  lVar8 = -0x20;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)plVar4;
    puVar3 = puVar3 + -0x10;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  plVar4 = &lStack_f8;
  func_0x0001003b1f60();
  func_0x00010527f548();
  pcStack_108 = FUN_10527f01c;
  uStack_128 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_120 = lVar8;
  plStack_118 = plVar2;
  ppuStack_110 = &puStack_a0;
  if ((bRam0000000113818168 & 1) == 0) {
    plVar4 = (long *)0x113818168;
    ___cxa_guard_acquire();
    if ((int)plVar4 != 0) {
      func_0x0001003a83dc(auStack_160,"_djinni_record_AudioNoteMetadata");
      pcVar5 = "allowsTranscription";
      func_0x0001003a83dc(auStack_168,"allowsTranscription");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_158,auStack_168,pcVar5);
      pcVar5 = "transcriptions";
      func_0x0001003a83dc(auStack_170,"transcriptions");
      FUN_10527f200();
      func_0x0001003b1b50(auStack_140,auStack_170,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818158,auStack_160,0,auStack_158,2);
      lVar8 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_158 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_170);
      func_0x0001003a8c94(auStack_168);
      func_0x0001003a8c94(auStack_160);
      plVar4 = (long *)0x113818168;
      ___cxa_guard_release();
    }
  }
  func_0x00010527f56c(uStack_128);
  if ((bool)uVar1) {
    return (long *)0x113818158;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  func_0x00010b9abe10(&lStack_1a8,plVar4[1] - *plVar4 >> 4);
  lVar8 = 0x18;
  for (uVar9 = 0; uVar9 < (ulong)(plVar4[1] - *plVar4 >> 4); uVar9 = uVar9 + 1) {
    FUN_10529da70(auStack_1b8,*plVar4 + lVar8 + -0x18);
    func_0x00010b9a9020(lStack_1a8 + lVar8,auStack_1b8);
    func_0x00010b9a8d98(auStack_1b8);
    lVar8 = lVar8 + 0x10;
  }
  func_0x00010b9a8f84(extraout_x8,&lStack_1a8);
  plVar4 = &lStack_1a8;
  func_0x000104bddf38(plVar4);
  return plVar4;
}



/* Entry: 105293d98; end: 105293dd3;  */

long * FUN_105293d98(undefined8 *param_1,long *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  undefined1 *puVar3;
  long *plVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 extraout_x8;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_128 [16];
  long lStack_118;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [8];
  undefined2 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  if ((char)param_2[4] != '\x01') {
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
    return param_2;
  }
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10527f01c();
  func_0x0001003b2110(&lStack_68,0x113818160);
  auStack_58[0] = (undefined1)*param_2;
  uStack_50 = 7;
  FUN_10527f14c(auStack_48,param_2 + 1);
  func_0x000104bdb9bc(&lStack_60,&lStack_68,auStack_58,2);
  lVar8 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_58 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(&lStack_68);
  plVar4 = &lStack_60;
  func_0x00010b9a8f60(param_1);
  plVar2 = &lStack_60;
  func_0x000104bdbf78();
  func_0x00010527f56c(uStack_38);
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_48;
  lVar8 = -0x20;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)plVar4;
    puVar3 = puVar3 + -0x10;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  plVar4 = &lStack_68;
  func_0x0001003b1f60();
  func_0x00010527f548();
  pcStack_78 = FUN_10527f01c;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_90 = lVar8;
  plStack_88 = plVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818168 & 1) == 0) {
    plVar4 = (long *)0x113818168;
    ___cxa_guard_acquire();
    if ((int)plVar4 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_AudioNoteMetadata");
      pcVar5 = "allowsTranscription";
      func_0x0001003a83dc(auStack_d8,"allowsTranscription");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar5);
      pcVar5 = "transcriptions";
      func_0x0001003a83dc(auStack_e0,"transcriptions");
      FUN_10527f200();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818158,auStack_d0,0,auStack_c8,2);
      lVar8 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_c8 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      plVar4 = (long *)0x113818168;
      ___cxa_guard_release();
    }
  }
  func_0x00010527f56c(uStack_98);
  if ((bool)uVar1) {
    return (long *)0x113818158;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  func_0x00010b9abe10(&lStack_118,plVar4[1] - *plVar4 >> 4);
  lVar8 = 0x18;
  for (uVar9 = 0; uVar9 < (ulong)(plVar4[1] - *plVar4 >> 4); uVar9 = uVar9 + 1) {
    FUN_10529da70(auStack_128,*plVar4 + lVar8 + -0x18);
    func_0x00010b9a9020(lStack_118 + lVar8,auStack_128);
    func_0x00010b9a8d98(auStack_128);
    lVar8 = lVar8 + 0x10;
  }
  func_0x00010b9a8f84(extraout_x8,&lStack_118);
  plVar4 = &lStack_118;
  func_0x000104bddf38(plVar4);
  return plVar4;
}



/* Entry: 105293dd4; end: 105293e2f;  */

undefined8 FUN_105293dd4(void)

{
  int iVar1;
  
  if ((bRam00000001130cbf78 & 1) == 0) {
    iVar1 = 0x130cbf78;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10527f01c();
      func_0x00010b990784(0x1130cbf68);
      ___cxa_guard_release(0x1130cbf78);
    }
  }
  return 0x1130cbf68;
}



/* Entry: 105293e30; end: 105293e8b;  */

undefined8 FUN_105293e30(void)

{
  int iVar1;
  
  if ((bRam00000001130cbf90 & 1) == 0) {
    iVar1 = 0x130cbf90;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10529ac34();
      func_0x00010b990784(0x1130cbf80);
      ___cxa_guard_release(0x1130cbf90);
    }
  }
  return 0x1130cbf80;
}



/* Entry: 105293e8c; end: 105293ee7;  */

undefined8 FUN_105293e8c(void)

{
  int iVar1;
  
  if ((bRam00000001130cbfa8 & 1) == 0) {
    iVar1 = 0x130cbfa8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10529bd98();
      func_0x00010b990784(0x1130cbf98);
      ___cxa_guard_release(0x1130cbfa8);
    }
  }
  return 0x1130cbf98;
}



/* Entry: 105293ee8; end: 105293f03;  */

void FUN_105293ee8(long param_1)

{
  func_0x000104be72d0();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 105293f04; end: 105293f27;  */

void FUN_105293f04(undefined8 *param_1)

{
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = 0;
  return;
}



/* Entry: 105293f28; end: 105293ffb;  */

void FUN_105293f28(int *param_1,undefined8 param_2,ulong param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lStack_58;
  
  func_0x00010b9a97d0(&lStack_58);
  iVar2 = (int)lStack_58 + 0x18;
  func_0x00010b9a9518();
  iVar3 = (int)lStack_58 + 0x28;
  func_0x00010b9a9518();
  lVar6 = lStack_58 + 0x38;
  func_0x000104bedf58();
  iVar4 = (int)lStack_58 + 0x48;
  func_0x00010b9a9518();
  iVar5 = (int)lStack_58 + 0x58;
  func_0x00010b9a9518();
  sVar1 = (short)lStack_58 + 0x68;
  FUN_105287fb8();
  *param_1 = iVar2;
  param_1[1] = iVar3;
  *(long *)(param_1 + 2) = lVar6;
  *(ulong *)(param_1 + 4) = param_3 & 0xff;
  param_1[6] = iVar4;
  param_1[7] = iVar5;
  *(short *)(param_1 + 8) = sVar1;
  func_0x000104bdbf78(&lStack_58);
  return;
}



/* Entry: 105293ffc; end: 1052941ef;  */

undefined8 FUN_105293ffc(undefined8 param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818860 & 1) == 0) {
    iVar1 = 0x13818860;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_c0,"_djinni_record_MessageWindowInitParams");
      pcVar2 = "maxSize";
      func_0x0001003a83dc(auStack_c8,"maxSize");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_b8,auStack_c8,pcVar2);
      pcVar2 = "startingType";
      func_0x0001003a83dc(auStack_d0,"startingType");
      FUN_1052941f0();
      func_0x0001003b1b50(auStack_a0,auStack_d0,pcVar2);
      pcVar2 = "startingOrderKey";
      func_0x0001003a83dc(auStack_d8,"startingOrderKey");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_88,auStack_d8,pcVar2);
      pcVar2 = "numMessagesForward";
      func_0x0001003a83dc(auStack_e0,"numMessagesForward");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_70,auStack_e0,pcVar2);
      pcVar2 = "numMessagesBack";
      func_0x0001003a83dc(auStack_e8,"numMessagesBack");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_58,auStack_e8,pcVar2);
      pcVar2 = "newestIncludeAllUnread";
      func_0x0001003a83dc(auStack_f0,"newestIncludeAllUnread");
      FUN_105288360();
      func_0x0001003b1b50(auStack_40,auStack_f0,pcVar2);
      uVar3 = 0;
      func_0x000104bdbd44(0x113818850,auStack_c0,0,auStack_b8,6);
      lVar4 = 0x78;
      do {
        func_0x0001003b1c5c(auStack_b8 + lVar4);
        param_2 = (int)uVar3;
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != -0x18);
      func_0x0001003a8c94(auStack_f0);
      func_0x0001003a8c94(auStack_e8);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      func_0x0001003a8c94(auStack_c8);
      func_0x0001003a8c94(auStack_c0);
      ___cxa_guard_release(0x113818860);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return 0x113818850;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cbfc0 & 1) == 0) {
    iVar1 = 0x130cbfc0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cbfb0);
      ___cxa_guard_release(0x1130cbfc0);
    }
  }
  return 0x1130cbfb0;
}



/* Entry: 1052941f0; end: 105294247;  */

undefined8 FUN_1052941f0(void)

{
  int iVar1;
  
  if ((bRam00000001130cbfc0 & 1) == 0) {
    iVar1 = 0x130cbfc0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cbfb0);
      ___cxa_guard_release(0x1130cbfc0);
    }
  }
  return 0x1130cbfb0;
}



/* Entry: 105294248; end: 1052943c7;  */

long * FUN_105294248(undefined8 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  undefined1 *puVar3;
  long *plVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 extraout_x8;
  long lVar8;
  ulong uVar9;
  undefined8 uStack_1f8;
  undefined2 uStack_1f0;
  long lStack_1e8;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined8 uStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 auStack_a8 [8];
  long lStack_a0;
  undefined4 auStack_98 [2];
  undefined2 uStack_90;
  undefined4 uStack_88;
  undefined2 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052943c8();
  func_0x0001003b2110(auStack_a8,0x113818870);
  uStack_90 = 4;
  auStack_98[0] = *param_2;
  uStack_88 = param_2[1];
  uStack_80 = 4;
  uStack_78 = *(undefined8 *)(param_2 + 2);
  uStack_60 = 5;
  uStack_70 = uStack_60;
  if (*(char *)(param_2 + 4) == '\0') {
    uStack_70 = 1;
    uStack_78 = 0;
  }
  uStack_6f = 0;
  uStack_68 = *(undefined8 *)(param_2 + 6);
  if (*(char *)(param_2 + 8) == '\0') {
    uStack_60 = 1;
    uStack_68 = 0;
  }
  uStack_5f = 0;
  FUN_1052945b0(auStack_58,param_2 + 10);
  FUN_1052945b0(auStack_48,param_2 + 0x10);
  func_0x000104bdb9bc(&lStack_a0,auStack_a8,auStack_98,6);
  lVar8 = 0x50;
  do {
    func_0x00010b9a8d98((long)auStack_98 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_a8);
  plVar4 = &lStack_a0;
  func_0x00010b9a8f60(param_1);
  plVar2 = &lStack_a0;
  func_0x000104bdbf78();
  func_0x0001052946b0(uStack_38);
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_48;
  lVar8 = -0x60;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)plVar4;
    puVar3 = puVar3 + -0x10;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_a8);
  plVar4 = plVar2;
  __Unwind_Resume();
  pcStack_b8 = FUN_1052943c8;
  uStack_d8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_d0 = lVar8;
  plStack_c8 = plVar2;
  puStack_c0 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818878 & 1) == 0) {
    plVar4 = (long *)0x113818878;
    ___cxa_guard_acquire();
    if ((int)plVar4 != 0) {
      func_0x0001003a83dc(auStack_170,"_djinni_record_MessageWindowPagination");
      pcVar5 = "currentSize";
      func_0x0001003a83dc(auStack_178,"currentSize");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_168,auStack_178,pcVar5);
      pcVar5 = "maxSize";
      func_0x0001003a83dc(auStack_180,"maxSize");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_150,auStack_180,pcVar5);
      pcVar5 = "oldestOrderKey";
      func_0x0001003a83dc(auStack_188,"oldestOrderKey");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_138,auStack_188,pcVar5);
      pcVar5 = "newestOrderKey";
      func_0x0001003a83dc(auStack_190,"newestOrderKey");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_120,auStack_190,pcVar5);
      pcVar5 = "updatedMessageOrderKeysInFront";
      func_0x0001003a83dc(auStack_198,"updatedMessageOrderKeysInFront");
      func_0x000104bef650();
      func_0x0001003b1b50(auStack_108,auStack_198,pcVar5);
      pcVar5 = "unseenReactionOrderKeys";
      func_0x0001003a83dc(auStack_1a0,"unseenReactionOrderKeys");
      func_0x000104bef650();
      func_0x0001003b1b50(auStack_f0,auStack_1a0,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818868,auStack_170,0,auStack_168,6);
      lVar8 = 0x78;
      do {
        func_0x0001003b1c5c(auStack_168 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_1a0);
      func_0x0001003a8c94(auStack_198);
      func_0x0001003a8c94(auStack_190);
      func_0x0001003a8c94(auStack_188);
      func_0x0001003a8c94(auStack_180);
      func_0x0001003a8c94(auStack_178);
      func_0x0001003a8c94(auStack_170);
      plVar4 = (long *)0x113818878;
      ___cxa_guard_release();
    }
  }
  func_0x0001052946b0(uStack_d8);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    if (iVar6 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010b9abe10(&lStack_1e8,plVar4[1] - *plVar4 >> 3);
    lVar8 = 0x18;
    for (uVar9 = 0; uVar9 < (ulong)(plVar4[1] - *plVar4 >> 3); uVar9 = uVar9 + 1) {
      uStack_1f8 = *(undefined8 *)(*plVar4 + uVar9 * 8);
      uStack_1f0 = 5;
      func_0x00010b9a9020(lStack_1e8 + lVar8,&uStack_1f8);
      func_0x00010b9a8d98(&uStack_1f8);
      lVar8 = lVar8 + 0x10;
    }
    func_0x00010b9a8f84(extraout_x8,&lStack_1e8);
    plVar4 = &lStack_1e8;
    func_0x000104bddf38(plVar4);
    return plVar4;
  }
  return (long *)0x113818868;
}



/* Entry: 1052943c8; end: 1052945af;  */

long * FUN_1052943c8(long *param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_148;
  undefined2 uStack_140;
  long lStack_138;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818878 & 1) == 0) {
    param_1 = (long *)0x113818878;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_c0,"_djinni_record_MessageWindowPagination");
      pcVar1 = "currentSize";
      func_0x0001003a83dc(auStack_c8,"currentSize");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_b8,auStack_c8,pcVar1);
      pcVar1 = "maxSize";
      func_0x0001003a83dc(auStack_d0,"maxSize");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_a0,auStack_d0,pcVar1);
      pcVar1 = "oldestOrderKey";
      func_0x0001003a83dc(auStack_d8,"oldestOrderKey");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_88,auStack_d8,pcVar1);
      pcVar1 = "newestOrderKey";
      func_0x0001003a83dc(auStack_e0,"newestOrderKey");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_70,auStack_e0,pcVar1);
      pcVar1 = "updatedMessageOrderKeysInFront";
      func_0x0001003a83dc(auStack_e8,"updatedMessageOrderKeysInFront");
      func_0x000104bef650();
      func_0x0001003b1b50(auStack_58,auStack_e8,pcVar1);
      pcVar1 = "unseenReactionOrderKeys";
      func_0x0001003a83dc(auStack_f0,"unseenReactionOrderKeys");
      func_0x000104bef650();
      func_0x0001003b1b50(auStack_40,auStack_f0,pcVar1);
      uVar3 = 0;
      func_0x000104bdbd44(0x113818868,auStack_c0,0,auStack_b8,6);
      lVar5 = 0x78;
      do {
        func_0x0001003b1c5c(auStack_b8 + lVar5);
        param_2 = (int)uVar3;
        lVar5 = lVar5 + -0x18;
        in_ZR = lVar5 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_f0);
      func_0x0001003a8c94(auStack_e8);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      func_0x0001003a8c94(auStack_c8);
      func_0x0001003a8c94(auStack_c0);
      param_1 = (long *)0x113818878;
      ___cxa_guard_release();
    }
  }
  func_0x0001052946b0(uStack_28);
  if ((bool)in_ZR) {
    return (long *)0x113818868;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  func_0x00010b9abe10(&lStack_138,param_1[1] - *param_1 >> 3);
  lVar5 = 0x18;
  for (uVar4 = 0; uVar4 < (ulong)(param_1[1] - *param_1 >> 3); uVar4 = uVar4 + 1) {
    uStack_148 = *(undefined8 *)(*param_1 + uVar4 * 8);
    uStack_140 = 5;
    func_0x00010b9a9020(lStack_138 + lVar5,&uStack_148);
    func_0x00010b9a8d98(&uStack_148);
    lVar5 = lVar5 + 0x10;
  }
  func_0x00010b9a8f84(extraout_x8,&lStack_138);
  plVar2 = &lStack_138;
  func_0x000104bddf38(plVar2);
  return plVar2;
}



/* Entry: 1052945b0; end: 10529465b;  */

void FUN_1052945b0(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uStack_58;
  undefined2 uStack_50;
  long lStack_48;
  
  func_0x00010b9abe10(&lStack_48,param_2[1] - *param_2 >> 3);
  lVar2 = 0x18;
  for (uVar1 = 0; uVar1 < (ulong)(param_2[1] - *param_2 >> 3); uVar1 = uVar1 + 1) {
    uStack_58 = *(undefined8 *)(*param_2 + uVar1 * 8);
    uStack_50 = 5;
    func_0x00010b9a9020(lStack_48 + lVar2,&uStack_58);
    func_0x00010b9a8d98(&uStack_58);
    lVar2 = lVar2 + 0x10;
  }
  func_0x00010b9a8f84(param_1,&lStack_48);
  func_0x000104bddf38(&lStack_48);
  return;
}



/* Entry: 10529465c; end: 1052946c3;  */

void FUN_10529465c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
                  undefined8 *param_9)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined8 *)(param_1 + 2) = param_4;
  *(undefined8 *)(param_1 + 4) = param_5;
  *(undefined8 *)(param_1 + 6) = param_6;
  *(undefined8 *)(param_1 + 8) = param_7;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  uVar1 = *param_8;
  *(undefined8 *)(param_1 + 0xc) = param_8[1];
  *(undefined8 *)(param_1 + 10) = uVar1;
  *(undefined8 *)(param_1 + 0xe) = param_8[2];
  *param_8 = 0;
  param_8[1] = 0;
  param_8[2] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  uVar1 = *param_9;
  *(undefined8 *)(param_1 + 0x12) = param_9[1];
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x14) = param_9[2];
  *param_9 = 0;
  param_9[1] = 0;
  param_9[2] = 0;
  return;
}



/* Entry: 1052946c4; end: 10529485f;  */

long * FUN_1052946c4(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 extraout_x8;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auStack_1f8 [16];
  long lStack_1e8;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined8 uStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105294860();
  func_0x0001003b2110(&lStack_a8,0x113818888);
  func_0x000104be6c64(auStack_98,param_2);
  FUN_105294a48(auStack_88,param_2 + 0x18);
  FUN_105294248(auStack_78,param_2 + 0x30);
  func_0x000104bfad3c(auStack_68,param_2 + 0x88);
  if (*(char *)(param_2 + 0x4bc) == '\x01') {
    uStack_58 = CONCAT44(uStack_58._4_4_,*(undefined4 *)(param_2 + 0x4b8));
    uStack_50 = 4;
  }
  else {
    uStack_58 = 0;
    uStack_50 = 1;
  }
  uStack_4f = 0;
  uStack_48 = *(undefined8 *)(param_2 + 0x4c0);
  uStack_40 = 5;
  if (*(char *)(param_2 + 0x4c8) == '\0') {
    uStack_40 = 1;
    uStack_48 = 0;
  }
  uStack_3f = 0;
  func_0x000104bdb9bc(&lStack_a0,&lStack_a8,auStack_98,6);
  lVar8 = 0x50;
  do {
    func_0x00010b9a8d98(auStack_98 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(&lStack_a8);
  plVar4 = &lStack_a0;
  func_0x00010b9a8f60(param_1);
  plVar2 = &lStack_a0;
  func_0x000104bdbf78();
  func_0x00010529523c(uStack_38);
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_48;
  lVar8 = -0x60;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)plVar4;
    puVar3 = puVar3 + -2;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  plVar4 = &lStack_a8;
  func_0x0001003b1f60();
  func_0x000105295218();
  pcStack_b8 = FUN_105294860;
  uStack_d8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_d0 = lVar8;
  plStack_c8 = plVar2;
  puStack_c0 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818890 & 1) == 0) {
    plVar4 = (long *)0x113818890;
    ___cxa_guard_acquire();
    if ((int)plVar4 != 0) {
      func_0x0001003a83dc(auStack_170,"_djinni_record_MessageWindowUpdate");
      pcVar5 = "updatedMessages";
      func_0x0001003a83dc(auStack_178,"updatedMessages");
      func_0x000104be7878();
      func_0x0001003b1b50(auStack_168,auStack_178,pcVar5);
      pcVar5 = "removedMessages";
      func_0x0001003a83dc(auStack_180,"removedMessages");
      FUN_105294b10();
      func_0x0001003b1b50(auStack_150,auStack_180,pcVar5);
      pcVar5 = "pagination";
      func_0x0001003a83dc(auStack_188,"pagination");
      FUN_1052943c8();
      func_0x0001003b1b50(auStack_138,auStack_188,pcVar5);
      pcVar5 = "conversation";
      func_0x0001003a83dc(auStack_190,"conversation");
      func_0x000104bfaf00();
      func_0x0001003b1b50(auStack_120,auStack_190,pcVar5);
      pcVar5 = "windowInitType";
      func_0x0001003a83dc(auStack_198,"windowInitType");
      FUN_105294b6c();
      func_0x0001003b1b50(auStack_108,auStack_198,pcVar5);
      pcVar5 = "windowInitStartingOrderKey";
      func_0x0001003a83dc(auStack_1a0,"windowInitStartingOrderKey");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_f0,auStack_1a0,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818880,auStack_170,0,auStack_168,6);
      lVar8 = 0x78;
      do {
        func_0x0001003b1c5c(auStack_168 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_1a0);
      func_0x0001003a8c94(auStack_198);
      func_0x0001003a8c94(auStack_190);
      func_0x0001003a8c94(auStack_188);
      func_0x0001003a8c94(auStack_180);
      func_0x0001003a8c94(auStack_178);
      func_0x0001003a8c94(auStack_170);
      plVar4 = (long *)0x113818890;
      ___cxa_guard_release();
    }
  }
  func_0x00010529523c(uStack_d8);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    if (iVar6 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010b9abe10(&lStack_1e8,(plVar4[1] - *plVar4) / 0x28);
    lVar9 = 0;
    lVar8 = 0x18;
    for (uVar10 = 0; uVar10 < (ulong)((plVar4[1] - *plVar4) / 0x28); uVar10 = uVar10 + 1) {
      FUN_105284cc4(auStack_1f8,*plVar4 + lVar9);
      func_0x00010b9a9020(lStack_1e8 + lVar8,auStack_1f8);
      func_0x00010b9a8d98(auStack_1f8);
      lVar8 = lVar8 + 0x10;
      lVar9 = lVar9 + 0x28;
    }
    func_0x00010b9a8f84(extraout_x8,&lStack_1e8);
    plVar4 = &lStack_1e8;
    func_0x000104bddf38(plVar4);
    return plVar4;
  }
  return (long *)0x113818880;
}



/* Entry: 105294860; end: 105294a47;  */

long * FUN_105294860(long *param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_148 [16];
  long lStack_138;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818890 & 1) == 0) {
    param_1 = (long *)0x113818890;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_c0,"_djinni_record_MessageWindowUpdate");
      pcVar1 = "updatedMessages";
      func_0x0001003a83dc(auStack_c8,"updatedMessages");
      func_0x000104be7878();
      func_0x0001003b1b50(auStack_b8,auStack_c8,pcVar1);
      pcVar1 = "removedMessages";
      func_0x0001003a83dc(auStack_d0,"removedMessages");
      FUN_105294b10();
      func_0x0001003b1b50(auStack_a0,auStack_d0,pcVar1);
      pcVar1 = "pagination";
      func_0x0001003a83dc(auStack_d8,"pagination");
      FUN_1052943c8();
      func_0x0001003b1b50(auStack_88,auStack_d8,pcVar1);
      pcVar1 = "conversation";
      func_0x0001003a83dc(auStack_e0,"conversation");
      func_0x000104bfaf00();
      func_0x0001003b1b50(auStack_70,auStack_e0,pcVar1);
      pcVar1 = "windowInitType";
      func_0x0001003a83dc(auStack_e8,"windowInitType");
      FUN_105294b6c();
      func_0x0001003b1b50(auStack_58,auStack_e8,pcVar1);
      pcVar1 = "windowInitStartingOrderKey";
      func_0x0001003a83dc(auStack_f0,"windowInitStartingOrderKey");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_40,auStack_f0,pcVar1);
      uVar3 = 0;
      func_0x000104bdbd44(0x113818880,auStack_c0,0,auStack_b8,6);
      lVar6 = 0x78;
      do {
        func_0x0001003b1c5c(auStack_b8 + lVar6);
        param_2 = (int)uVar3;
        lVar6 = lVar6 + -0x18;
        in_ZR = lVar6 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_f0);
      func_0x0001003a8c94(auStack_e8);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      func_0x0001003a8c94(auStack_c8);
      func_0x0001003a8c94(auStack_c0);
      param_1 = (long *)0x113818890;
      ___cxa_guard_release();
    }
  }
  func_0x00010529523c(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (param_2 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010b9abe10(&lStack_138,(param_1[1] - *param_1) / 0x28);
    lVar4 = 0;
    lVar6 = 0x18;
    for (uVar5 = 0; uVar5 < (ulong)((param_1[1] - *param_1) / 0x28); uVar5 = uVar5 + 1) {
      FUN_105284cc4(auStack_148,*param_1 + lVar4);
      func_0x00010b9a9020(lStack_138 + lVar6,auStack_148);
      func_0x00010b9a8d98(auStack_148);
      lVar6 = lVar6 + 0x10;
      lVar4 = lVar4 + 0x28;
    }
    func_0x00010b9a8f84(extraout_x8,&lStack_138);
    plVar2 = &lStack_138;
    func_0x000104bddf38(plVar2);
    return plVar2;
  }
  return (long *)0x113818880;
}



/* Entry: 105294a48; end: 105294b0f;  */

void FUN_105294a48(undefined8 param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00010b9abe10(&lStack_48,(param_2[1] - *param_2) / 0x28);
  lVar1 = 0;
  lVar3 = 0x18;
  for (uVar2 = 0; uVar2 < (ulong)((param_2[1] - *param_2) / 0x28); uVar2 = uVar2 + 1) {
    FUN_105284cc4(auStack_58,*param_2 + lVar1);
    func_0x00010b9a9020(lStack_48 + lVar3,auStack_58);
    func_0x00010b9a8d98(auStack_58);
    lVar3 = lVar3 + 0x10;
    lVar1 = lVar1 + 0x28;
  }
  func_0x00010b9a8f84(param_1,&lStack_48);
  func_0x000104bddf38(&lStack_48);
  return;
}



/* Entry: 105294b10; end: 105294b6b;  */

undefined8 FUN_105294b10(void)

{
  int iVar1;
  
  if ((bRam00000001130cbfd8 & 1) == 0) {
    iVar1 = 0x130cbfd8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_105284dcc();
      func_0x00010b990868(0x1130cbfc8);
      ___cxa_guard_release(0x1130cbfd8);
    }
  }
  return 0x1130cbfc8;
}



/* Entry: 105294b6c; end: 105294bc7;  */

undefined8 FUN_105294b6c(void)

{
  int iVar1;
  
  if ((bRam00000001130cbff0 & 1) == 0) {
    iVar1 = 0x130cbff0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052941f0();
      func_0x00010b990784(0x1130cbfe0);
      ___cxa_guard_release(0x1130cbff0);
    }
  }
  return 0x1130cbfe0;
}


