/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 006661d8; end: 006661ff;  */

undefined8 FUN_006661d8(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  if (param_2 >> 0x3d == 0) {
    func_0x00674dc0();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  FUN_00666220();
  func_0x00674218();
  func_0x0067400c();
  return param_1;
}



/* Entry: 00666200; end: 0066621f;  */

void FUN_00666200(void)

{
  func_0x00674218();
  func_0x0067400c();
  return;
}



/* Entry: 00666220; end: 0066622b;  */

void FUN_00666220(ulong param_1)

{
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  long *unaff_x19;
  
  func_0x00674690();
  if (param_1 >> 0x3d == 0) {
    func_0x006758a8();
    return;
  }
  FUN_0040cee8();
  func_0x00676d5c();
  lVar1 = extraout_x9;
  while (lVar1 != extraout_x8) {
    lVar1 = lVar1 + -8;
    unaff_x19[2] = lVar1;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 0066622c; end: 0066628f;  */

void FUN_0066622c(ulong param_1)

{
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  long *unaff_x19;
  
  if (param_1 >> 0x3d == 0) {
    func_0x006758a8();
    return;
  }
  FUN_0040cee8();
  func_0x00676d5c();
  lVar1 = extraout_x9;
  while (lVar1 != extraout_x8) {
    lVar1 = lVar1 + -8;
    unaff_x19[2] = lVar1;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 00666290; end: 006662cf;  */

long * FUN_00666290(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 3);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0xfffffffffffffff;
    }
    return plVar1;
  }
  FUN_006662f0();
  func_0x00674218();
  func_0x0067400c();
  return param_1;
}



/* Entry: 006662d0; end: 006662ef;  */

void FUN_006662d0(void)

{
  func_0x00674218();
  func_0x0067400c();
  return;
}



/* Entry: 006662f0; end: 006662fb;  */

void FUN_006662f0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x9;
  long *unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  
  func_0x00674690();
  func_0x00674c00();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (unaff_x20 >> 0x3c != 0) {
      FUN_0040cee8();
      func_0x00676d5c();
      lVar2 = extraout_x9;
      while (lVar2 != extraout_x8) {
        lVar2 = lVar2 + -0x10;
        unaff_x19[2] = lVar2;
      }
      if (*unaff_x19 != 0) {
        __ZdlPv();
      }
      return;
    }
    lVar2 = unaff_x20 << 4;
    __Znwm();
  }
  lVar1 = lVar2 + unaff_x21 * 0x10;
  *unaff_x19 = lVar2;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = lVar2 + unaff_x20 * 0x10;
  return;
}



/* Entry: 006662fc; end: 0066634f;  */

void FUN_006662fc(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x9;
  long *unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  
  func_0x00674c00();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (unaff_x20 >> 0x3c != 0) {
      FUN_0040cee8();
      func_0x00676d5c();
      lVar2 = extraout_x9;
      while (lVar2 != extraout_x8) {
        lVar2 = lVar2 + -0x10;
        unaff_x19[2] = lVar2;
      }
      if (*unaff_x19 != 0) {
        __ZdlPv();
      }
      return;
    }
    lVar2 = unaff_x20 << 4;
    __Znwm();
  }
  lVar1 = lVar2 + unaff_x21 * 0x10;
  *unaff_x19 = lVar2;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = lVar2 + unaff_x20 * 0x10;
  return;
}



/* Entry: 00666350; end: 0066638b;  */

void FUN_00666350(void)

{
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  long *unaff_x19;
  
  func_0x00676d5c();
  lVar1 = extraout_x9;
  while (lVar1 != extraout_x8) {
    lVar1 = lVar1 + -0x10;
    unaff_x19[2] = lVar1;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 0066638c; end: 006663b3;  */

long * FUN_0066638c(long *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  undefined1 in_CY;
  long lVar3;
  long *extraout_x8;
  long *extraout_x9;
  long *unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  
  if (param_2 >> 0x3d == 0) {
    func_0x00674dc0();
    plVar2 = extraout_x9;
    if ((bool)in_CY) {
      plVar2 = extraout_x8;
    }
    return plVar2;
  }
  FUN_00666470();
  func_0x00674c00();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    if (unaff_x20 >> 0x3d != 0) {
      FUN_0040cee8();
      func_0x00674218();
      func_0x0067400c();
      return param_1;
    }
    lVar3 = unaff_x20 << 3;
    __Znwm();
  }
  lVar1 = lVar3 + unaff_x21 * 8;
  *unaff_x19 = lVar3;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = lVar3 + unaff_x20 * 8;
  return unaff_x19;
}



/* Entry: 006663b4; end: 00666427;  */

void FUN_006663b4(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  
  func_0x00674c00();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (unaff_x20 >> 0x3d != 0) {
      FUN_0040cee8();
      func_0x00674218();
      func_0x0067400c();
      return;
    }
    lVar2 = unaff_x20 << 3;
    __Znwm();
  }
  lVar1 = lVar2 + unaff_x21 * 8;
  *unaff_x19 = lVar2;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = lVar2 + unaff_x20 * 8;
  return;
}



/* Entry: 00666428; end: 0066646f;  */

long * FUN_00666428(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -8;
    FUN_00665d40();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 00666470; end: 006664a3;  */

undefined8 FUN_00666470(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  func_0x00674690();
  if (param_2 >> 0x3d == 0) {
    func_0x00674dc0();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  FUN_006664c4();
  func_0x00674218();
  func_0x0067400c();
  return param_1;
}



/* Entry: 006664a4; end: 006664c3;  */

void FUN_006664a4(void)

{
  func_0x00674218();
  func_0x0067400c();
  return;
}



/* Entry: 006664c4; end: 006664cf;  */

long * FUN_006664c4(long *param_1)

{
  long lVar1;
  
  func_0x00674690();
  if ((ulong)param_1 >> 0x3d == 0) {
    func_0x006758a8();
    return param_1;
  }
  FUN_0040cee8();
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -8;
    func_0x00665fa8();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 006664d0; end: 0066653f;  */

long * FUN_006664d0(long *param_1)

{
  long lVar1;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    func_0x006758a8();
    return param_1;
  }
  FUN_0040cee8();
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -8;
    func_0x00665fa8();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 00666540; end: 0066660f;  */

void FUN_00666540(byte *param_1)

{
  undefined8 *puVar1;
  byte *pbStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  undefined8 *puStack_20;
  long lStack_18;
  
  switch(*param_1) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 7:
  case 8:
    break;
  default:
    func_0x00676bd8();
    func_0x00674d08();
    func_0x0067424c();
    FUN_00776794();
    func_0x00674d28();
    uStack_38 = 0x6665f0;
    pbStack_48 = param_1;
    puStack_40 = &stack0xfffffffffffffff0;
    FUN_00666610(&pbStack_48);
    return;
  case 9:
    break;
  case 10:
    puVar1 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x10);
    lStack_18 = (long)*(char *)((long)puVar1 + 0x17);
    puStack_20 = puVar1;
    if (lStack_18 < 0) {
      puStack_20 = (undefined8 *)*puVar1;
      lStack_18 = puVar1[1];
    }
    FUN_00485b24(&puStack_20,0,(long)*(int *)(param_1 + 4));
  }
  return;
}



/* Entry: 00666610; end: 00666627;  */

ulong FUN_00666610(undefined8 *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  ulong extraout_x8;
  ulong extraout_x10;
  
  ppuVar2 = &PTR_LOOP_00a01490;
  lVar1 = ((undefined8 *)*param_1)[1];
  FUN_00490188(&PTR_LOOP_00a01490,*(undefined8 *)*param_1);
  func_0x00490bd8((long)ppuVar2 + lVar1);
  return extraout_x8 ^ extraout_x10;
}



/* Entry: 00666628; end: 0066664b;  */

void FUN_00666628(void)

{
  func_0x006752e8();
  func_0x00568028();
  return;
}



/* Entry: 0066664c; end: 006666b3;  */

void FUN_0066664c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 extraout_x8;
  
  FUN_00550a2c();
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(long *)(param_1 + 0x90) = param_2;
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  func_0x00674868();
  *(undefined8 *)(param_1 + 0xa0) = extraout_x8;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  return;
}



/* Entry: 006666b4; end: 006666db;  */

void FUN_006666b4(long param_1)

{
  func_0x006752e8();
  if (param_1 != 0) {
    FUN_00567fe4();
  }
  return;
}



/* Entry: 006666dc; end: 00666717;  */

void FUN_006666dc(undefined8 *param_1)

{
  char *pcVar1;
  char *extraout_x8;
  long extraout_x9;
  long extraout_x10;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    func_0x00675e34();
    *param_1 = extraout_x8;
    param_1[1] = extraout_x9 + extraout_x10 * 0x20;
    pcVar1 = extraout_x8;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 00666718; end: 0066679b;  */

/* WARNING: Possible PIC construction at 0x0066672c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00666730) */

long FUN_00666718(long param_1)

{
  long lStack_48;
  
  lStack_48 = param_1 + 0x18;
  func_0x00427b38(&lStack_48);
  return param_1 + 0x18;
}



/* Entry: 0066679c; end: 006667cf;  */

void FUN_0066679c(long param_1)

{
  long extraout_x8;
  
  func_0x00676958();
  if (param_1 != 0) {
    *(long *)(extraout_x8 + 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 006667d0; end: 006667f3;  */

void FUN_006667d0(void)

{
  func_0x00676568(&PTR_LOOP_00a01490);
  return;
}



/* Entry: 006667f4; end: 0066681f;  */

void FUN_006667f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = param_2 + 1;
  uVar2 = *puVar1;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  param_1[3] = param_2[3];
  *puVar1 = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  func_0x006758c0(puVar1);
  FUN_0066679c();
  return;
}



/* Entry: 00666820; end: 00666897;  */

long FUN_00666820(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x19;
  code *pcStack_38;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  if (*(long *)(param_1 + 0xb8) == 0) {
    FUN_00666898(param_1 + 0xc0);
    FUN_006668d4(param_1 + 0xa0);
    FUN_00550c74();
    uStack_28 = 0;
    puVar3 = &uStack_28;
    lVar2 = param_1;
    FUN_00550cd8(param_1);
    if (((*(ulong *)(param_1 + 8) & 1) == 0) && (puVar3 != (undefined8 *)0x0)) {
      uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffff8;
      pcStack_38 = (code *)0x0;
      if (uVar1 != 0) {
        pcStack_38 = *(code **)(uVar1 + 0x18);
      }
      puStack_30 = &uStack_28;
      FUN_00550da4(&pcStack_38,lVar2,puVar3);
    }
    FUN_00567000(param_1 + 0x18);
    return param_1;
  }
  func_0x00674bbc();
  FUN_00776714(&puStack_30);
  FUN_0054fccc(&puStack_30,&UNK_00911a0c);
  FUN_005558a0(&puStack_30);
  func_0x0040cf10();
  pcStack_38 = FUN_00666898;
  func_0x006758c0();
  FUN_006668bc();
  return unaff_x19;
}



/* Entry: 00666898; end: 006668bb;  */

void FUN_00666898(void)

{
  func_0x006758c0();
  FUN_006668bc();
  return;
}



/* Entry: 006668bc; end: 006668d3;  */

void FUN_006668bc(long param_1)

{
  long extraout_x8;
  
  func_0x00676958();
  if (param_1 != 0) {
    *(long *)(extraout_x8 + 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 006668d4; end: 00666903;  */

void FUN_006668d4(void)

{
  long extraout_x8;
  
  func_0x00674f38();
  if (extraout_x8 != 0) {
    func_0x00666740();
    func_0x006744e8();
  }
  return;
}



/* Entry: 00666904; end: 0066696b;  */

undefined8 * FUN_00666904(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  
  puVar1 = param_1;
  func_0x00674868();
  *puVar1 = extraout_x8;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  if (param_2 != 0) {
    func_0x006762a8();
    func_0x00666938();
  }
  return param_1;
}



/* Entry: 0066696c; end: 0066698b;  */

void FUN_0066696c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  func_0x00490290(&uStack_20);
  return;
}



/* Entry: 0066698c; end: 00666a07;  */

void FUN_0066698c(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 extraout_x8;
  long extraout_x9;
  undefined8 *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  func_0x0067409c();
  func_0x00553d3c();
  func_0x00674f04();
  if ((extraout_x9 == 0) && (func_0x00674ef8(), !(bool)in_ZR)) {
    func_0x00674f2c();
    if (((bool)in_CY) && (func_0x006742b8(), (bool)in_CY)) {
      func_0x00674720();
    }
    else {
      func_0x0067452c();
      FUN_00666a08();
    }
    func_0x0067444c();
  }
  func_0x00673eb4();
  func_0x00674120(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00676210();
  func_0x00674364();
  func_0x00666938();
  func_0x00674f44();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x00674cfc();
      FUN_00666a94();
      func_0x00674324();
      func_0x00673efc(unaff_w21 & 0x7f);
      func_0x00676428(unaff_x25 + (long)param_1 * 0x18,*unaff_x20);
      unaff_x20[1] = 0;
      unaff_x20[2] = 0;
      *unaff_x20 = 0;
      param_1 = unaff_x20;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
    unaff_x20 = unaff_x20 + 3;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 00666a08; end: 00666a93;  */

void FUN_00666a08(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  func_0x00676210();
  func_0x00674364();
  func_0x00666938();
  func_0x00674f44();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x00674cfc();
      FUN_00666a94();
      func_0x00674324();
      func_0x00673efc(unaff_w21 & 0x7f);
      func_0x00676428(unaff_x25 + (long)param_1 * 0x18,*unaff_x20);
      unaff_x20[1] = 0;
      unaff_x20[2] = 0;
      *unaff_x20 = 0;
      param_1 = unaff_x20;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
    unaff_x20 = unaff_x20 + 3;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 00666a94; end: 00666acb;  */

void FUN_00666a94(undefined8 param_1,undefined8 param_2)

{
  undefined8 auStack_20 [2];
  
  func_0x00675160();
  auStack_20[0] = param_2;
  func_0x00490290(auStack_20);
  return;
}



/* Entry: 00666acc; end: 00666af3;  */

undefined8 FUN_00666acc(undefined8 param_1)

{
  func_0x006768e4(FUN_00666af4);
  return param_1;
}



/* Entry: 00666af4; end: 00666b1f;  */

void FUN_00666af4(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00666b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



/* Entry: 00666b20; end: 00666b37;  */

void FUN_00666b20(void)

{
  FUN_00666b38();
  return;
}



/* Entry: 00666b38; end: 00666b67;  */

void FUN_00666b38(undefined8 param_1)

{
  FUN_00666b94();
  func_0x006766f4(param_1);
  return;
}



/* Entry: 00666b68; end: 00666b93;  */

undefined1  [16] FUN_00666b68(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  if (param_2 == 0) {
    uVar1 = 0;
    param_2 = *(long *)(param_1 + 8);
    param_3 = (ulong)*(byte *)(param_2 + 10);
  }
  else {
    uVar1 = param_3 & 0xffffffff00000000;
  }
  auVar2._8_8_ = uVar1 | param_3 & 0xffffffff;
  auVar2._0_8_ = param_2;
  return auVar2;
}



/* Entry: 00666b94; end: 00666beb;  */

undefined1  [16] FUN_00666b94(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_2;
  FUN_00666bec();
  FUN_00666c7c();
  if ((param_1 == 0) ||
     (func_0x00666cb0(param_2,param_1 + (long)(int)uVar1 * 0x18 + 0x10),
     ((uint)param_2 >> 7 & 1) != 0)) {
    uVar1 = 0;
    param_1 = 0;
  }
  auVar2._8_8_ = uVar1 & 0xffffffff;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 00666bec; end: 00666c7b;  */

undefined1  [16] FUN_00666bec(long *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  func_0x00676210();
  while( true ) {
    uVar3 = 0;
    lVar1 = *param_1;
    uVar4 = (ulong)*(byte *)(lVar1 + 10);
    while (uVar2 = uVar4, uVar3 != uVar2) {
      uVar4 = uVar3 + uVar2 >> 1;
      param_1 = (long *)(lVar1 + 0x10 + uVar4 * 0x18);
      func_0x00666cb0(param_1,param_2);
      if ((char)param_1 < '\0') {
        uVar3 = uVar4 + 1;
        uVar4 = uVar2;
      }
    }
    if (*(char *)(lVar1 + 0xb) != '\0') break;
    func_0x00675ea0();
    param_1 = param_1 + (uVar2 & 0xff);
  }
  auVar5._8_8_ = uVar2 & 0xffffffff;
  auVar5._0_8_ = lVar1;
  return auVar5;
}



/* Entry: 00666c7c; end: 00666ce7;  */

undefined1  [16] FUN_00666c7c(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_2;
  do {
    if ((uint)uVar1 != (uint)*(byte *)((long)param_1 + 10)) goto LAB_00666ca0;
    uVar1 = (ulong)*(byte *)(param_1 + 1);
    param_1 = (long *)*param_1;
  } while (*(char *)((long)param_1 + 0xb) == '\0');
  param_1 = (long *)0x0;
LAB_00666ca0:
  auVar2._8_8_ = param_2 & 0xffffffff00000000 | uVar1 & 0xffffffff;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 00666ce8; end: 00666d0f;  */

void FUN_00666ce8(void)

{
  FUN_00666bec();
  FUN_00666c7c();
  return;
}



/* Entry: 00666d10; end: 00666d43;  */

/* WARNING: Possible PIC construction at 0x00666d34: Changing call to branch */

undefined1  [16] FUN_00666d10(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 >> 0x3d == 0) {
    func_0x00674dc0();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = uVar1;
    return auVar2;
  }
  func_0x00674690();
  FUN_00666d64();
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 00666d44; end: 00666d63;  */

void FUN_00666d44(void)

{
  FUN_00666d64();
  return;
}



/* Entry: 00666d64; end: 00666d7f;  */

long * FUN_00666d64(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(plVar1);
    return plVar1;
  }
  FUN_0040cee8();
  FUN_00666dac();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 00666d80; end: 00666dab;  */

long * FUN_00666d80(long *param_1)

{
  FUN_00666dac();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 00666dac; end: 00666dcf;  */

void FUN_00666dac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 00666dd0; end: 00666df3;  */

void FUN_00666dd0(void)

{
  func_0x006758c0();
  FUN_00666df4();
  return;
}



/* Entry: 00666df4; end: 00666e0b;  */

void FUN_00666df4(long param_1)

{
  long extraout_x8;
  
  func_0x00676958();
  if (param_1 != 0) {
    *(long *)(extraout_x8 + 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 00666e0c; end: 00666e4f;  */

void FUN_00666e0c(void)

{
  func_0x00675ae4();
  return;
}



/* Entry: 00666e50; end: 00666e6f;  */

void FUN_00666e50(long *param_1)

{
  undefined **ppuVar1;
  long lVar2;
  
  ppuVar1 = &PTR_LOOP_00a01490;
  lVar2 = *param_1;
  func_0x004905d4(&PTR_LOOP_00a01490);
  func_0x00674d44((long)ppuVar1 + (ulong)*(uint *)(lVar2 + 8));
  return;
}



/* Entry: 00666e70; end: 00666e97;  */

void FUN_00666e70(long param_1,undefined8 param_2,uint *param_3)

{
  func_0x004905d4();
  func_0x00674d44(param_1 + (ulong)*param_3);
  return;
}



/* Entry: 00666e98; end: 00666eb7;  */

void FUN_00666e98(int *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  int extraout_w10;
  
  uVar1 = *param_1 == 0xdd;
  if ((bool)uVar1) {
    return;
  }
  func_0x006743ac(param_1,1);
  iVar2 = (int)param_1;
  if ((((ulong)param_1 & 1) != 0) || (func_0x00675fe8(), iVar2 == 0)) {
    (*(code *)*param_2)(*param_3);
    do {
      func_0x0067626c();
    } while (extraout_w10 != 0);
    func_0x00674b54();
    if ((bool)uVar1) {
      func_0x00674ccc();
    }
  }
  return;
}



/* Entry: 00666eb8; end: 00666edf;  */

long FUN_00666eb8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long *unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x22;
  long unaff_x24;
  
  func_0x00674878();
  func_0x00666fe4(param_2);
  func_0x00674a58();
  func_0x00674e30();
  func_0x00674960();
  while( true ) {
    func_0x00674f7c();
    while ((extraout_x8 & 0x8080808080808080) != 0) {
      func_0x0067590c();
      lVar1 = unaff_x24 + (extraout_x8_00 & unaff_x22) * 0x20;
      func_0x00666fbc(lVar1,unaff_x20);
      if ((int)lVar1 != 0) {
        return *unaff_x19 + (extraout_x8_00 & unaff_x22);
      }
      func_0x00676458();
    }
    func_0x006745a8();
    if ((extraout_x8_01 & 1) != 0) break;
    func_0x00676bf0();
  }
  return 0;
}



/* Entry: 00666ee0; end: 00666f43;  */

void FUN_00666ee0(ulong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  int iVar1;
  int extraout_w10;
  
  func_0x006743ac();
  iVar1 = (int)param_1;
  if (((param_1 & 1) != 0) || (func_0x00675fe8(), iVar1 == 0)) {
    (*(code *)*param_3)(*param_4);
    do {
      func_0x0067626c();
    } while (extraout_w10 != 0);
    func_0x00674b54();
    if ((bool)in_ZR) {
      func_0x00674ccc();
    }
  }
  return;
}



/* Entry: 00666f44; end: 00666fbb;  */

long FUN_00666f44(void)

{
  int iVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long *unaff_x19;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x00674e30();
  func_0x00674960();
  while( true ) {
    func_0x00674f7c();
    while ((extraout_x8 & 0x8080808080808080) != 0) {
      func_0x0067590c();
      iVar1 = unaff_w24 + (int)(extraout_x8_00 & unaff_x22) * 0x20;
      FUN_00666fbc();
      if (iVar1 != 0) {
        return *unaff_x19 + (extraout_x8_00 & unaff_x22);
      }
      func_0x00676458();
    }
    func_0x006745a8();
    if ((extraout_x8_01 & 1) != 0) break;
    func_0x00676bf0();
  }
  return 0;
}



/* Entry: 00666fbc; end: 00666fef;  */

bool FUN_00666fbc(long *param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  
  if (*param_1 != *param_2) {
    return false;
  }
  lVar2 = param_1[1];
  if (param_1[2] == param_2[2]) {
    func_0x0046d038(lVar2,param_1[2],param_2[1]);
    bVar1 = (int)lVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 00666ff0; end: 00667013;  */

ulong FUN_00666ff0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong extraout_x8;
  ulong extraout_x10;
  
  func_0x004905d4();
  lVar1 = *(long *)(param_3 + 8);
  FUN_00490188();
  func_0x00490bd8(param_1 + lVar1);
  return extraout_x8 ^ extraout_x10;
}



/* Entry: 00667014; end: 006670e3;  */

undefined8 * FUN_00667014(undefined8 *param_1,undefined8 *param_2)

{
  long extraout_x8;
  
  if (*(byte *)*param_2 - 1 < 8) {
    func_0x006751dc();
                    /* WARNING: Could not recover jumptable at 0x00667054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_0082395c)[extraout_x8] * 4 + 0x667058))();
    return param_1;
  }
  func_0x00676bd8();
  func_0x00674d08();
  func_0x0067424c();
  FUN_00776794();
  func_0x00674d28();
  if (param_2 == (undefined8 *)0x0) {
    param_1 = (undefined8 *)*param_1;
    switch(*(undefined1 *)param_1) {
    case 1:
    case 2:
    case 4:
    case 7:
      goto code_r0x00655c38;
    case 3:
    case 5:
    case 8:
      param_1 = (undefined8 *)param_1[2];
code_r0x00655c38:
      return (undefined8 *)param_1[2];
    default:
      return (undefined8 *)0x0;
    case 9:
      return param_1;
    case 10:
      return (undefined8 *)param_1[1];
    }
  }
  return param_2;
}



/* Entry: 006670e4; end: 006671a3;  */

undefined1 * FUN_006670e4(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  
  if (param_2 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_1;
    switch(*puVar1) {
    case 1:
    case 2:
    case 4:
    case 7:
      goto code_r0x00655c38;
    case 3:
    case 5:
    case 8:
      puVar1 = *(undefined1 **)(puVar1 + 0x10);
code_r0x00655c38:
      return *(undefined1 **)(puVar1 + 0x10);
    default:
      return (undefined1 *)0x0;
    case 9:
      return puVar1;
    case 10:
      return *(undefined1 **)(puVar1 + 8);
    }
  }
  return param_2;
}



/* Entry: 006671a4; end: 0066723b;  */

undefined1  [16] FUN_006671a4(undefined8 param_1,ulong *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  ulong *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long extraout_x8;
  ulong uVar6;
  ulong extraout_x9;
  ulong uVar7;
  ulong extraout_x10;
  ulong uVar8;
  ulong extraout_x11;
  byte bVar9;
  ulong uVar10;
  ulong extraout_x12;
  ulong uVar11;
  ulong extraout_x13;
  ulong uVar12;
  long extraout_x14;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 unaff_x30;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  ulong uVar23;
  undefined1 auVar24 [16];
  
  uVar4 = (undefined4)((ulong)param_3 >> 0x20);
  uVar3 = (undefined4)param_3;
  func_0x00674878();
  puVar2 = param_2;
  FUN_00666e0c();
  func_0x00674a58();
  lVar5 = 0;
  uVar8 = param_2[1];
  uVar7 = param_2[2];
  uVar6 = *param_2;
  uVar12 = uVar6 >> 0xc ^ CONCAT44(uVar4,uVar3) >> 7;
  bVar9 = (byte)uVar3 & 0x7f;
  uVar10 = *puVar2;
  uVar11 = (ulong)(uint)puVar2[1];
  bVar16 = bVar9;
  bVar17 = bVar9;
  bVar18 = bVar9;
  bVar19 = bVar9;
  bVar20 = bVar9;
  bVar21 = bVar9;
  bVar22 = bVar9;
  while( true ) {
    uVar23 = *(ulong *)(uVar6 + (uVar12 & uVar7));
    for (uVar13 = CONCAT17(-((byte)(uVar23 >> 0x38) == bVar22),
                           CONCAT16(-((byte)(uVar23 >> 0x30) == bVar21),
                                    CONCAT15(-((byte)(uVar23 >> 0x28) == bVar20),
                                             CONCAT14(-((byte)(uVar23 >> 0x20) == bVar19),
                                                      CONCAT13(-((byte)(uVar23 >> 0x18) == bVar18),
                                                               CONCAT12(-((byte)(uVar23 >> 0x10) ==
                                                                         bVar17),CONCAT11(-((byte)(
                                                  uVar23 >> 8) == bVar16),-((byte)uVar23 == bVar9)))
                                                  ))))) & 0x8080808080808080; uVar13 != 0;
        uVar13 = uVar13 - 1 & uVar13) {
      uVar14 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = (uVar12 & uVar7) + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) & uVar7;
      lVar15 = *(long *)(uVar8 + uVar14 * 8);
      if (*(ulong *)(lVar15 + 0x10) == uVar10 && *(int *)(lVar15 + 4) == (int)uVar11) {
        auVar24._8_8_ = uVar8 + uVar14 * 8;
        auVar24._0_8_ = uVar6 + uVar14;
        return auVar24;
      }
    }
    func_0x006761e8(lVar5,unaff_x30);
    if ((uVar23 & 1) != 0) break;
    lVar5 = extraout_x8 + 8;
    uVar12 = lVar5 + extraout_x14;
    uVar6 = extraout_x9;
    uVar7 = extraout_x10;
    uVar8 = extraout_x11;
    uVar10 = extraout_x12;
    uVar11 = extraout_x13;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = puVar2;
  return auVar1 << 0x40;
}



/* Entry: 0066723c; end: 0066725f;  */

void FUN_0066723c(void)

{
  func_0x006752e8();
  FUN_00567fe4();
  return;
}



/* Entry: 00667260; end: 006672c7;  */

undefined8 * FUN_00667260(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00675d2c();
  }
  else {
    func_0x00675840();
  }
  *puVar1 = &PTR_FUN_00a0e5e8;
  puVar1[1] = param_1;
  FUN_006788f0();
  return puVar1;
}



/* Entry: 006672c8; end: 00667397;  */

long * FUN_006672c8(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x9;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  
  func_0x00676464();
  plVar3 = (long *)*param_1;
  lVar7 = param_1[1] - (long)plVar3;
  uVar1 = (lVar7 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    plStack_58 = param_1 + 2;
    lVar8 = *plStack_58;
    uVar5 = lVar8 - (long)plVar3;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar6 >> 0x3d != 0) goto LAB_00667394;
      lVar4 = uVar6 << 3;
      __Znwm();
    }
    puVar2 = (undefined8 *)(lVar4 + lVar7);
    *puVar2 = *param_2;
    _memcpy(puVar2 + -(lVar7 >> 3),plVar3,lVar7);
    *param_1 = (long)(puVar2 + -(lVar7 >> 3));
    param_1[1] = (long)(puVar2 + 1);
    param_1[2] = lVar4 + uVar6 * 8;
    plStack_78 = plVar3;
    plStack_70 = plVar3;
    plStack_68 = plVar3;
    lStack_60 = lVar8;
    FUN_006673a4(&plStack_78);
    return puVar2 + 1;
  }
  FUN_00667398();
LAB_00667394:
  FUN_0040cee8();
  func_0x00674690();
  func_0x00676d5c();
  lVar7 = extraout_x9;
  while (lVar7 != extraout_x8) {
    lVar7 = lVar7 + -8;
    plVar3[2] = lVar7;
  }
  if (*plVar3 != 0) {
    __ZdlPv();
  }
  return plVar3;
}



/* Entry: 00667398; end: 006673a3;  */

void FUN_00667398(void)

{
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  long *unaff_x19;
  
  func_0x00674690();
  func_0x00676d5c();
  lVar1 = extraout_x9;
  while (lVar1 != extraout_x8) {
    lVar1 = lVar1 + -8;
    unaff_x19[2] = lVar1;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 006673a4; end: 006674ab;  */

void FUN_006673a4(void)

{
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  long *unaff_x19;
  
  func_0x00676d5c();
  lVar1 = extraout_x9;
  while (lVar1 != extraout_x8) {
    lVar1 = lVar1 + -8;
    unaff_x19[2] = lVar1;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 006674ac; end: 006674b7;  */

void FUN_006674ac(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0054d638(0,FUN_006674b8);
    func_0x0054d6a0();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0054d638(puVar2,FUN_006674b8);
      }
      else {
        func_0x0054d5c0();
        puVar3 = puVar2;
        func_0x0054d6a0();
        *puVar2 = (ulong)puVar3;
        func_0x0054d5f8();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x0054d644();
        if (!bVar1) {
          func_0x0054d5e0();
          return;
        }
      }
      else {
        func_0x0054d5c0();
        func_0x0054d654();
      }
      func_0x0054d664();
      func_0x0054d6a0();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 006674b8; end: 006674f3;  */

dword * FUN_006674b8(dword *param_1)

{
  dword *pdVar1;
  
  if (param_1 == (dword *)0x0) {
    pdVar1 = &section_000000b8.offset;
    __Znwm();
  }
  else {
    pdVar1 = param_1;
    func_0x005510c4(param_1,0xe8);
  }
  *(undefined ***)pdVar1 = &PTR_FUN_00a0e908;
  *(dword **)(pdVar1 + 2) = param_1;
  FUN_00677f28();
  return pdVar1;
}



/* Entry: 006674f4; end: 006674ff;  */

void FUN_006674f4(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0054d638(0,FUN_00667500);
    func_0x0054d6a0();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0054d638(puVar2,FUN_00667500);
      }
      else {
        func_0x0054d5c0();
        puVar3 = puVar2;
        func_0x0054d6a0();
        *puVar2 = (ulong)puVar3;
        func_0x0054d5f8();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x0054d644();
        if (!bVar1) {
          func_0x0054d5e0();
          return;
        }
      }
      else {
        func_0x0054d5c0();
        func_0x0054d654();
      }
      func_0x0054d664();
      func_0x0054d6a0();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 00667500; end: 0066757b;  */

void FUN_00667500(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00675d2c();
  }
  else {
    func_0x00675840();
  }
  *puVar1 = &PTR_FUN_00a0e8b8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = param_1;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = param_1;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = param_1;
  puVar1[0xc] = &DAT_00b69408;
  puVar1[0xd] = 0;
  return;
}



/* Entry: 0066757c; end: 00667587;  */

void FUN_0066757c(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0054d638(0,FUN_00667588);
    func_0x0054d6a0();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0054d638(puVar2,FUN_00667588);
      }
      else {
        func_0x0054d5c0();
        puVar3 = puVar2;
        func_0x0054d6a0();
        *puVar2 = (ulong)puVar3;
        func_0x0054d5f8();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x0054d644();
        if (!bVar1) {
          func_0x0054d5e0();
          return;
        }
      }
      else {
        func_0x0054d5c0();
        func_0x0054d654();
      }
      func_0x0054d664();
      func_0x0054d6a0();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 00667588; end: 00667723;  */

undefined8 * FUN_00667588(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x006767ec();
  }
  else {
    func_0x0067681c();
  }
  *puVar1 = &PTR_FUN_00a0e778;
  puVar1[1] = param_1;
  FUN_00678dcc();
  return puVar1;
}



/* Entry: 00667724; end: 00667747;  */

ulong * FUN_00667724(long param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uStack_28;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
  uStack_28 = *(ulong *)(param_1 + 8);
  if ((uStack_28 & 1) != 0) {
    uStack_28 = *(ulong *)(uStack_28 & 0xfffffffffffffffe);
  }
  puVar1 = (ulong *)(param_1 + 0x28);
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    if (uStack_28 == 0) {
      puVar2 = puVar1;
      func_0x005332cc();
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = 0;
      uVar3 = 2;
    }
    else {
      puVar2 = &uStack_28;
      FUN_00533294();
      uVar3 = 3;
    }
    *puVar1 = uVar3 | (ulong)puVar2;
    return puVar2;
  }
  return (ulong *)(*puVar1 & 0xfffffffffffffffc);
}



/* Entry: 00667748; end: 006679b3;  */

dword * FUN_00667748(dword *param_1)

{
  dword *pdVar1;
  
  if (param_1 == (dword *)0x0) {
    pdVar1 = &section_00000068.offset;
    __Znwm();
  }
  else {
    pdVar1 = param_1;
    func_0x005510c4(param_1,0x98);
  }
  *(undefined ***)pdVar1 = &PTR_FUN_00a0e548;
  *(dword **)(pdVar1 + 2) = param_1;
  FUN_0067b74c();
  return pdVar1;
}



/* Entry: 006679b4; end: 00667b37;  */

void FUN_006679b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  byte ******ppppppbVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  byte ******ppppppbVar5;
  byte ******ppppppbVar6;
  byte ******ppppppbVar7;
  byte ******extraout_x10;
  byte ******extraout_x10_00;
  long extraout_x11;
  long extraout_x11_00;
  undefined8 *unaff_x19;
  long lStack_a0;
  int iStack_98;
  byte *****pppppbStack_70;
  long lStack_68;
  undefined1 uStack_60;
  byte *****pppppbStack_58;
  long lStack_50;
  byte bStack_41;
  
  func_0x00674c58();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&pppppbStack_58,param_3);
  ppppppbVar6 = (byte ******)((long)pppppbStack_58 + lStack_50);
  if (-1 < (char)bStack_41) {
    ppppppbVar6 = (byte ******)((long)&pppppbStack_58 + (ulong)bStack_41);
    pppppbStack_58 = (byte *****)&pppppbStack_58;
  }
  do {
    cVar1 = SBORROW8((long)ppppppbVar6,(long)pppppbStack_58);
    cVar2 = (long)ppppppbVar6 - (long)pppppbStack_58 < 0;
    ppppppbVar5 = (byte ******)pppppbStack_58;
    if (ppppppbVar6 == (byte ******)pppppbStack_58) break;
    ppppppbVar7 = (byte ******)((long)ppppppbVar6 + -1);
    ppppppbVar5 = ppppppbVar6;
    ppppppbVar6 = ppppppbVar7;
  } while (((byte)(&UNK_00811470)[*(byte *)ppppppbVar7] >> 3 & 1) != 0);
  func_0x0067659c(&pppppbStack_58,(long)ppppppbVar5 - (long)pppppbStack_58);
  func_0x00676d68();
  lVar4 = extraout_x11;
  ppppppbVar6 = extraout_x10;
  if (cVar2 == cVar1) {
    lVar4 = extraout_x8;
    ppppppbVar6 = &pppppbStack_58;
  }
  ppppppbVar7 = (byte ******)((long)ppppppbVar6 + lVar4);
  ppppppbVar5 = ppppppbVar6;
  while ((ppppppbVar3 = ppppppbVar7, lVar4 != 0 &&
         (ppppppbVar3 = ppppppbVar5, ((byte)(&UNK_00811470)[*(byte *)ppppppbVar5] >> 3 & 1) != 0)))
  {
    ppppppbVar5 = (byte ******)((long)ppppppbVar5 + 1);
    lVar4 = lVar4 + -1;
  }
  FUN_0052fbdc(&pppppbStack_58,ppppppbVar6,ppppppbVar3);
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  func_0x00676d68();
  lStack_68 = extraout_x11_00;
  pppppbStack_70 = (byte *****)extraout_x10_00;
  if (cVar2 == cVar1) {
    lStack_68 = extraout_x8_00;
    pppppbStack_70 = (byte *****)&pppppbStack_58;
  }
  uStack_60 = 10;
  FUN_00667bdc(&lStack_a0,0,&pppppbStack_70);
  while (iStack_98 != 2 || lStack_a0 != lStack_68) {
    func_0x00674f10();
    FUN_00659414();
    FUN_00667b38(&lStack_a0);
  }
  func_0x006753f8();
  return;
}



/* Entry: 00667b38; end: 00667bdb;  */

long * FUN_00667b38(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  if ((int)param_1[1] == 1) {
    *(undefined4 *)(param_1 + 1) = 2;
  }
  else {
    lVar1 = *(long *)param_1[4];
    lVar5 = ((long *)param_1[4])[1];
    plVar2 = param_1 + 5;
    lVar4 = lVar1;
    lStack_40 = lVar1;
    lStack_38 = lVar5;
    FUN_00576578(plVar2,lVar1,lVar5,*param_1);
    if ((long *)(lVar1 + lVar5) == plVar2) {
      *(undefined4 *)(param_1 + 1) = 1;
    }
    lVar5 = *param_1;
    FUN_00485b24(&lStack_40,lVar5,(long)plVar2 - (lVar1 + lVar5));
    param_1[2] = (long)plVar3;
    param_1[3] = lVar5;
    *param_1 = lVar5 + lVar4 + *param_1;
  }
  return param_1;
}



/* Entry: 00667bdc; end: 00667c93;  */

long * FUN_00667bdc(long *param_1,int param_2,long *param_3)

{
  long lVar1;
  
  *param_1 = 0;
  *(int *)(param_1 + 1) = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = (long)param_3;
  *(char *)(param_1 + 5) = (char)param_3[2];
  lVar1 = param_3[1];
  if (*param_3 == 0) {
    *(undefined4 *)(param_1 + 1) = 2;
  }
  else if (param_2 != 2) {
    FUN_00667b38(param_1);
    return param_1;
  }
  *param_1 = lVar1;
  return param_1;
}



/* Entry: 00667c94; end: 00667d63;  */

undefined1  [16] FUN_00667c94(ulong *param_1,uint *param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  byte bVar3;
  ulong extraout_x8;
  ulong *puVar4;
  long extraout_x9;
  ulong uVar5;
  ulong extraout_x10;
  int extraout_w11;
  ulong uVar6;
  ulong extraout_x12;
  ulong extraout_x12_00;
  long extraout_x13;
  long extraout_x13_00;
  ulong extraout_x14;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  
  uVar5 = *param_1;
  Hint_Prefetch(uVar5,0,2,0);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_00a01490 + (ulong)*param_2;
  uVar2 = SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
          ((long)&PTR_LOOP_00a01490 + (ulong)*param_2) * -0x622015f714c7d297;
  uVar6 = param_1[2];
  bVar3 = (byte)uVar2 & 0x7f;
  uVar2 = uVar2 >> 7 ^ uVar5 >> 0xc;
  bVar7 = bVar3;
  bVar8 = bVar3;
  bVar9 = bVar3;
  bVar10 = bVar3;
  bVar11 = bVar3;
  bVar12 = bVar3;
  bVar13 = bVar3;
  while( true ) {
    uVar15 = *(undefined8 *)(uVar5 + (uVar2 & uVar6));
    uVar2 = CONCAT17(-((byte)((ulong)uVar15 >> 0x38) == bVar13),
                     CONCAT16(-((byte)((ulong)uVar15 >> 0x30) == bVar12),
                              CONCAT15(-((byte)((ulong)uVar15 >> 0x28) == bVar11),
                                       CONCAT14(-((byte)((ulong)uVar15 >> 0x20) == bVar10),
                                                CONCAT13(-((byte)((ulong)uVar15 >> 0x18) == bVar9),
                                                         CONCAT12(-((byte)((ulong)uVar15 >> 0x10) ==
                                                                   bVar8),CONCAT11(-((byte)((ulong)
                                                  uVar15 >> 8) == bVar7),-((byte)uVar15 == bVar3))))
                                               )))) & 0x8080808080808080;
    while (uVar2 != 0) {
      func_0x00675f14();
      puVar4 = (ulong *)(extraout_x13 + (extraout_x8 >> 3) & extraout_x12);
      if (*(int *)(param_1[1] + (long)puVar4 * 4) == extraout_w11) {
        uVar15 = 0;
        goto LAB_00667d48;
      }
      uVar2 = extraout_x14 - 1 & extraout_x14;
    }
    uVar14 = (uint)uVar15;
    func_0x006761e8();
    if ((uVar14 & 1) != 0) break;
    uVar2 = extraout_x9 + 8 + extraout_x13_00;
    uVar5 = extraout_x10;
    uVar6 = extraout_x12_00;
  }
  FUN_00667d64();
  uVar15 = 1;
  puVar4 = param_1;
LAB_00667d48:
  auVar16._8_8_ = uVar15;
  auVar16._0_8_ = puVar4;
  return auVar16;
}



/* Entry: 00667d64; end: 00667de7;  */

void FUN_00667d64(long *param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  ulong uVar2;
  long *unaff_x19;
  byte unaff_w20;
  
  func_0x00674c58();
  func_0x00553d3c();
  func_0x00674f04();
  lVar1 = extraout_x8;
  if ((extraout_x9 == 0) && (func_0x00674ef8(), lVar1 = extraout_x8_00, !(bool)in_ZR)) {
    param_1 = unaff_x19;
    FUN_00667e58();
    func_0x0067444c();
    lVar1 = *unaff_x19;
  }
  unaff_x19[3] = unaff_x19[3] + 1;
  *(ulong *)(lVar1 + -8) =
       *(long *)(lVar1 + -8) - (ulong)(*(char *)(lVar1 + (long)param_1) == -0x80);
  uVar2 = unaff_x19[2];
  *(byte *)(lVar1 + (long)param_1) = unaff_w20 & 0x7f;
  *(byte *)(lVar1 + (uVar2 & (long)param_1 - 7U) + (uVar2 & 7)) = unaff_w20 & 0x7f;
  return;
}



/* Entry: 00667de8; end: 00667e57;  */

void FUN_00667de8(long param_1)

{
  uint extraout_w8;
  uint extraout_w9;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  func_0x00675c80();
  func_0x0067450c();
  func_0x00667c5c();
  func_0x00674a34();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x21 + unaff_x24)) {
      func_0x006760f8(*(undefined4 *)(unaff_x22 + unaff_x24 * 4));
      func_0x0067444c();
      func_0x00673efc((extraout_w8 ^ extraout_w9) & 0x7f);
      *(undefined4 *)(unaff_x25 + param_1 * 4) = *(undefined4 *)(unaff_x22 + unaff_x24 * 4);
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x21 + -8);
    return;
  }
  return;
}



/* Entry: 00667e58; end: 00667e87;  */

void FUN_00667e58(long param_1)

{
  uint extraout_w8;
  ulong uVar1;
  uint extraout_w9;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined1 auStack_14 [4];
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  if ((8 < uVar1) && ((ulong)(*(long *)(param_1 + 0x18) << 5) <= uVar1 * 0x19)) {
    FUN_00553d9c(param_1,&UNK_00a0deb0,auStack_14);
    return;
  }
  func_0x00675c80(param_1,uVar1 << 1 | 1);
  func_0x0067450c();
  func_0x00667c5c();
  func_0x00674a34();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x21 + unaff_x24)) {
      func_0x006760f8(*(undefined4 *)(unaff_x22 + unaff_x24 * 4));
      func_0x0067444c();
      func_0x00673efc((extraout_w8 ^ extraout_w9) & 0x7f);
      *(undefined4 *)(unaff_x25 + param_1 * 4) = *(undefined4 *)(unaff_x22 + unaff_x24 * 4);
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x21 + -8);
    return;
  }
  return;
}



/* Entry: 00667e88; end: 00667eab;  */

void FUN_00667e88(undefined8 param_1)

{
  undefined1 auStack_14 [4];
  
  FUN_00553d9c(param_1,&UNK_00a0deb0,auStack_14);
  return;
}



/* Entry: 00667eac; end: 00667ed3;  */

ulong FUN_00667eac(undefined8 param_1,uint *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_00a01490 + (ulong)*param_2;
  return SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
         ((long)&PTR_LOOP_00a01490 + (ulong)*param_2) * -0x622015f714c7d297;
}



/* Entry: 00667ed4; end: 00668103;  */

long ** FUN_00667ed4(long **param_1,undefined ***param_2,undefined *param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  byte bVar5;
  undefined8 *****pppppuVar6;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined ***pppuVar11;
  undefined *puVar12;
  undefined ***pppuVar13;
  undefined1 **ppuVar14;
  char *pcVar15;
  undefined8 *puVar16;
  long **pplVar17;
  undefined **ppuVar18;
  undefined ***pppuVar19;
  undefined1 *puVar20;
  int extraout_w8;
  undefined *puVar21;
  undefined **ppuVar22;
  undefined8 extraout_x8;
  undefined *extraout_x8_00;
  char *extraout_x8_01;
  undefined1 *extraout_x10;
  undefined1 *extraout_x10_00;
  undefined8 *extraout_x10_01;
  int extraout_w11;
  char *extraout_x11;
  undefined1 *extraout_x12;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long *plVar23;
  uint uVar24;
  char *pcVar25;
  undefined1 auStack_1a0 [24];
  undefined8 ****ppppuStack_188;
  ulong uStack_180;
  byte bStack_171;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  long *plStack_150;
  undefined8 *puStack_140;
  char *pcStack_138;
  undefined *puStack_110;
  undefined1 *puStack_108;
  undefined8 uStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined2 uStack_d0;
  undefined1 uStack_ce;
  undefined1 uStack_cd;
  undefined8 uStack_cc;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined *puStack_b8;
  undefined ***pppuStack_b0;
  undefined1 auStack_a8 [24];
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  pppuVar11 = param_2;
  FUN_00699298();
  puVar21 = pppuVar11[2][3];
  cVar7 = SBORROW8((long)puVar21,(long)param_3);
  cVar8 = (long)puVar21 - (long)param_3 < 0;
  if (puVar21 != param_3) {
    pppuVar11 = param_2;
    FUN_00699298();
    ppuVar22 = pppuVar11[1];
    puVar21 = (undefined *)(long)*(char *)((long)ppuVar22 + 0x2f);
    if ((long)puVar21 < 0) {
      ppuVar18 = (undefined **)ppuVar22[3];
      puVar21 = ppuVar22[4];
    }
    else {
      ppuVar18 = ppuVar22 + 3;
    }
    puVar12 = param_3;
    FUN_00655c4c(param_3,ppuVar18,puVar21);
    if (puVar12 != (undefined *)0x0) {
      ppuStack_90 = &PTR_FUN_00a0ef08;
      uStack_88 = 0;
      uStack_80 = 0;
      puStack_78 = &UNK_00811030;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      pppuVar11 = &ppuStack_90;
      FUN_006863f0(pppuVar11,puVar12);
      func_0x00676574((*pppuVar11)[2]);
      FUN_0054a274(auStack_a8,param_2);
      func_0x00676c74();
      iVar2 = extraout_w11;
      puStack_f8 = extraout_x10;
      if (cVar8 == cVar7) {
        iVar2 = extraout_w8;
        puStack_f8 = auStack_a8;
      }
      puStack_f0 = puStack_f8 + iVar2;
      uStack_e8 = 0;
      uStack_dc = 0;
      uStack_d8 = 0;
      uStack_d4 = (uint)uStack_d4._3_1_ << 0x18;
      uStack_cc = 0x7ff8000000000000;
      uStack_c4 = uRam0000000000b1e638;
      uStack_c0 = uRam0000000000b1e638;
      pppuStack_b0 = &ppuStack_90;
      pppuVar13 = pppuVar11;
      puStack_b8 = param_3;
      FUN_00549d78(pppuVar11,&puStack_f8);
      pppuVar19 = pppuVar11;
      if (((ulong)pppuVar13 & 1) == 0) {
        func_0x00674bbc();
        func_0x007766a0(&puStack_108);
        ppuVar14 = &puStack_108;
        FUN_00533c48(ppuVar14,&UNK_00911b57);
        pppuVar13 = param_2;
        FUN_00699298();
        FUN_00555478(ppuVar14,pppuVar13[1] + 3);
        FUN_007766a8(&puStack_108);
        pppuVar19 = param_2;
      }
      FUN_00668104(param_1,pppuVar19,param_4);
      FUN_0054dff8(&puStack_f8);
      func_0x006758a0();
      if (pppuVar11 != (undefined ***)0x0) {
        func_0x00675d8c();
      }
      FUN_006862fc(&ppuStack_90);
      return param_1;
    }
  }
  func_0x00675438(param_1,param_2,param_4);
  func_0x006743c8();
  uStack_70 = extraout_x8;
  FUN_00427b78(param_4);
  FUN_00699298(unaff_x20);
  func_0x00676aac(param_2);
  FUN_0068b260();
  for (plVar23 = plStack_158; uVar9 = plVar23 == plStack_150, !(bool)uVar9; plVar23 = plVar23 + 1) {
    pcVar25 = (char *)*plVar23;
    bVar5 = pcVar25[1];
    if ((bVar5 >> 5 & 1) == 0) {
      uVar10 = 1;
    }
    else {
      pppuVar11 = param_2;
      FUN_0068af64(param_2,unaff_x20,pcVar25);
      uVar10 = (uint)pppuVar11;
    }
    for (uVar24 = 0; (uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU)) != uVar24; uVar24 = uVar24 + 1)
    {
      uStack_170 = 0;
      uStack_168 = 0;
      uStack_160 = 0;
      pcVar15 = pcVar25;
      FUN_00656c60();
      if ((int)pcVar15 == 10) {
        puStack_110 = (undefined *)0x0;
        puStack_108 = (undefined1 *)0x0;
        uStack_100 = 0;
        FUN_0069ca70(&iStack_e0);
        _uStack_d0 = CONCAT12(1,uStack_d0);
        cVar8 = '\0';
        cVar7 = '\0';
        iStack_e0 = (int)param_1 + 1;
        FUN_0069ded4();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                  (&uStack_170,&DAT_00911b7d);
        FUN_004bab3c(&uStack_170,&puStack_110);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEmc
                  (&uStack_170,(long)((int)param_1 << 1),0x20);
        pcVar15 = "}";
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(&uStack_170);
        FUN_006683e8(&iStack_e0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_110);
      }
      else {
        cVar8 = '\0';
        cVar7 = '\0';
        uVar4 = uVar24;
        if ((bVar5 & 0x20) == 0) {
          uVar4 = 0xffffffff;
        }
        pcVar15 = pcVar25;
        FUN_0069e510(unaff_x20,pcVar25,uVar4,&uStack_170);
      }
      func_0x00676ad8();
      if (((byte)pcVar25[1] >> 3 & 1) == 0) {
        puVar20 = *(undefined1 **)(pcVar25 + 8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&ppppuStack_188);
      }
      else {
        puVar16 = (undefined8 *)&UNK_00911b80;
        FUN_00532c74();
        iStack_e0 = (int)puVar16;
        uStack_dc = (undefined4)((ulong)puVar16 >> 0x20);
        uStack_d8 = SUB84(pcVar15,0);
        uStack_d4 = (int)((ulong)pcVar15 >> 0x20);
        func_0x00673f90(*(undefined8 *)(pcVar25 + 8));
        puStack_108 = extraout_x12;
        if (cVar8 == cVar7) {
          puStack_108 = extraout_x10_00;
        }
        puStack_110 = extraout_x8_00;
        func_0x0067687c();
        puStack_140 = puVar16;
        pcStack_138 = pcVar15;
        func_0x00675a28();
        puVar20 = auStack_1a0;
        FUN_004575b8(&ppppuStack_188);
        func_0x00674d88();
      }
      cVar8 = (char)bStack_171 < '\0';
      cVar7 = '\0';
      uVar3 = uStack_180;
      pppppuVar6 = (undefined8 *****)ppppuStack_188;
      if (!(bool)cVar8) {
        uVar3 = (ulong)bStack_171;
        pppppuVar6 = &ppppuStack_188;
      }
      iStack_e0 = (int)pppppuVar6;
      uStack_dc = (undefined4)((ulong)pppppuVar6 >> 0x20);
      uStack_d8 = (undefined4)uVar3;
      uStack_d4 = (int)(uVar3 >> 0x20);
      puVar21 = &UNK_00911b83;
      FUN_00532c74();
      puStack_110 = puVar21;
      puStack_108 = puVar20;
      func_0x00676d14();
      pcStack_138 = extraout_x11;
      puStack_140 = extraout_x10_01;
      if (cVar8 == cVar7) {
        pcStack_138 = extraout_x8_01;
        puStack_140 = &uStack_170;
      }
      func_0x00675a28();
      func_0x0045a4f0(unaff_x19,auStack_1a0);
      func_0x00674d88();
      func_0x00675408();
      func_0x00675adc();
    }
  }
  func_0x00676b4c();
  bVar1 = !(bool)uVar9;
  FUN_00666dd0();
  func_0x00674120(uStack_70);
  if (!(bool)uVar9) {
    ___stack_chk_fail();
    pplVar17 = &plStack_158;
    FUN_00666dd0(pplVar17);
    func_0x00674bc8();
    FUN_0066841c(pplVar17 + 9);
    FUN_006684ac(pplVar17 + 5);
    func_0x00668514(pplVar17 + 4);
    return pplVar17;
  }
  return (long **)(ulong)bVar1;
}



/* Entry: 00668104; end: 006683e7;  */

long ** FUN_00668104(int param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  char *pcVar6;
  undefined8 ****ppppuVar7;
  undefined *puVar8;
  long **pplVar9;
  undefined1 *puVar10;
  undefined8 extraout_x8;
  undefined *extraout_x8_00;
  char *extraout_x8_01;
  undefined1 *extraout_x10;
  undefined8 ****extraout_x10_00;
  char *extraout_x11;
  undefined1 *extraout_x12;
  long *plVar11;
  uint uVar12;
  char *pcVar13;
  undefined1 auStack_1a0 [24];
  undefined8 ****ppppuStack_188;
  ulong uStack_180;
  byte bStack_171;
  undefined8 **ppuStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  long *plStack_150;
  undefined8 ***pppuStack_140;
  char *pcStack_138;
  undefined *puStack_110;
  undefined1 *puStack_108;
  undefined8 uStack_100;
  undefined8 ****ppppuStack_e0;
  char *pcStack_d8;
  undefined1 uStack_ce;
  undefined8 uStack_70;
  
  func_0x00675438();
  func_0x006743c8();
  uStack_70 = extraout_x8;
  FUN_00427b78(param_3);
  FUN_00699298();
  func_0x00676aac(param_2);
  FUN_0068b260();
  for (plVar11 = plStack_158; uVar4 = plVar11 == plStack_150, !(bool)uVar4; plVar11 = plVar11 + 1) {
    pcVar13 = (char *)*plVar11;
    if (((byte)pcVar13[1] >> 5 & 1) == 0) {
      uVar5 = 1;
    }
    else {
      uVar5 = (uint)param_2;
      FUN_0068af64();
    }
    for (uVar12 = 0; (uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)) != uVar12; uVar12 = uVar12 + 1) {
      ppuStack_170 = (undefined8 **)0x0;
      uStack_168 = 0;
      uStack_160 = 0;
      pcVar6 = pcVar13;
      FUN_00656c60();
      if ((int)pcVar6 == 10) {
        puStack_110 = (undefined *)0x0;
        puStack_108 = (undefined1 *)0x0;
        uStack_100 = 0;
        FUN_0069ca70(&ppppuStack_e0);
        uStack_ce = 1;
        ppppuStack_e0 = (undefined8 ****)CONCAT44(ppppuStack_e0._4_4_,param_1 + 1);
        cVar2 = '\0';
        cVar3 = '\0';
        FUN_0069ded4();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                  (&ppuStack_170,&DAT_00911b7d);
        FUN_004bab3c(&ppuStack_170,&puStack_110);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEmc
                  (&ppuStack_170,(long)(param_1 << 1),0x20);
        pcVar6 = "}";
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(&ppuStack_170);
        FUN_006683e8(&ppppuStack_e0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_110);
      }
      else {
        cVar2 = '\0';
        cVar3 = '\0';
        pcVar6 = pcVar13;
        FUN_0069e510();
      }
      func_0x00676ad8();
      if (((byte)pcVar13[1] >> 3 & 1) == 0) {
        puVar10 = *(undefined1 **)(pcVar13 + 8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&ppppuStack_188);
      }
      else {
        ppppuVar7 = (undefined8 ****)&UNK_00911b80;
        FUN_00532c74();
        ppppuStack_e0 = ppppuVar7;
        pcStack_d8 = pcVar6;
        func_0x00673f90(*(undefined8 *)(pcVar13 + 8));
        puStack_108 = extraout_x12;
        if (cVar2 == cVar3) {
          puStack_108 = extraout_x10;
        }
        puStack_110 = extraout_x8_00;
        func_0x0067687c();
        pppuStack_140 = ppppuVar7;
        pcStack_138 = pcVar6;
        func_0x00675a28();
        puVar10 = auStack_1a0;
        FUN_004575b8(&ppppuStack_188);
        func_0x00674d88();
      }
      cVar2 = (char)bStack_171 < '\0';
      cVar3 = '\0';
      pcStack_d8 = (char *)uStack_180;
      ppppuStack_e0 = ppppuStack_188;
      if (!(bool)cVar2) {
        pcStack_d8 = (char *)(ulong)bStack_171;
        ppppuStack_e0 = &ppppuStack_188;
      }
      puVar8 = &UNK_00911b83;
      FUN_00532c74();
      puStack_110 = puVar8;
      puStack_108 = puVar10;
      func_0x00676d14();
      pcStack_138 = extraout_x11;
      pppuStack_140 = extraout_x10_00;
      if (cVar2 == cVar3) {
        pcStack_138 = extraout_x8_01;
        pppuStack_140 = &ppuStack_170;
      }
      func_0x00675a28();
      func_0x0045a4f0();
      func_0x00674d88();
      func_0x00675408();
      func_0x00675adc();
    }
  }
  func_0x00676b4c();
  bVar1 = !(bool)uVar4;
  FUN_00666dd0();
  func_0x00674120(uStack_70);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    pplVar9 = &plStack_158;
    FUN_00666dd0(pplVar9);
    func_0x00674bc8();
    FUN_0066841c(pplVar9 + 9);
    FUN_006684ac(pplVar9 + 5);
    func_0x00668514(pplVar9 + 4);
    return pplVar9;
  }
  return (long **)(ulong)bVar1;
}



/* Entry: 006683e8; end: 0066841b;  */

long FUN_006683e8(long param_1)

{
  FUN_0066841c(param_1 + 0x48);
  FUN_006684ac(param_1 + 0x28);
  func_0x00668514(param_1 + 0x20);
  return param_1;
}



/* Entry: 0066841c; end: 0066844b;  */

void FUN_0066841c(void)

{
  long extraout_x8;
  
  func_0x00674f38();
  if (extraout_x8 != 0) {
    FUN_0066844c();
    func_0x006744e8();
  }
  return;
}



/* Entry: 0066844c; end: 006684ab;  */

void FUN_0066844c(void)

{
  long unaff_x19;
  char *unaff_x20;
  
  func_0x00676118();
  for (; unaff_x19 != 0; unaff_x19 = unaff_x19 + -1) {
    if (-1 < *unaff_x20) {
      func_0x00668484();
    }
    unaff_x20 = unaff_x20 + 1;
  }
  return;
}



/* Entry: 006684ac; end: 006684db;  */

void FUN_006684ac(void)

{
  long extraout_x8;
  
  func_0x00674f38();
  if (extraout_x8 != 0) {
    FUN_006684dc();
    func_0x006744e8();
  }
  return;
}



/* Entry: 006684dc; end: 0066855b;  */

void FUN_006684dc(void)

{
  long unaff_x19;
  char *unaff_x20;
  
  func_0x00676118();
  for (; unaff_x19 != 0; unaff_x19 = unaff_x19 + -1) {
    if (-1 < *unaff_x20) {
      func_0x00668514();
    }
    unaff_x20 = unaff_x20 + 1;
  }
  return;
}



/* Entry: 0066855c; end: 0066856f;  */

void FUN_0066855c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  
  puVar5 = (undefined8 *)*param_2;
  puVar2 = (undefined8 *)param_2[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (puVar5 != puVar2) {
    if ((char)*(byte *)((long)puVar5 + 0x17) < '\0') {
      uVar3 = puVar5[1];
    }
    else {
      uVar3 = (ulong)*(byte *)((long)puVar5 + 0x17);
    }
    puVar8 = puVar5 + 3;
    for (puVar1 = puVar8; puVar1 != puVar2; puVar1 = puVar1 + 3) {
      if ((char)*(byte *)((long)puVar1 + 0x17) < '\0') {
        uVar6 = puVar1[1];
      }
      else {
        uVar6 = (ulong)*(byte *)((long)puVar1 + 0x17);
      }
      uVar3 = uVar3 + param_4 + uVar6;
    }
    if (uVar3 != 0) {
      FUN_003606f8(param_1);
      puVar1 = (undefined8 *)*param_1;
      if (-1 < *(char *)((long)param_1 + 0x17)) {
        puVar1 = param_1;
      }
      if ((char)*(byte *)((long)puVar5 + 0x17) < '\0') {
        puVar4 = (undefined8 *)*puVar5;
        uVar3 = puVar5[1];
      }
      else {
        uVar3 = (ulong)*(byte *)((long)puVar5 + 0x17);
        puVar4 = puVar5;
      }
      _memcpy(puVar1,puVar4,uVar3);
      if ((char)*(byte *)((long)puVar5 + 0x17) < '\0') {
        uVar3 = puVar5[1];
      }
      else {
        uVar3 = (ulong)*(byte *)((long)puVar5 + 0x17);
      }
      if (puVar8 != puVar2) {
        lVar7 = (long)puVar1 + uVar3;
        do {
          _memcpy(lVar7,param_3,param_4);
          if ((char)*(byte *)((long)puVar8 + 0x17) < '\0') {
            puVar5 = (undefined8 *)*puVar8;
            uVar3 = puVar8[1];
          }
          else {
            uVar3 = (ulong)*(byte *)((long)puVar8 + 0x17);
            puVar5 = puVar8;
          }
          _memcpy(lVar7 + param_4,puVar5,uVar3);
          if ((char)*(byte *)((long)puVar8 + 0x17) < '\0') {
            uVar3 = puVar8[1];
          }
          else {
            uVar3 = (ulong)*(byte *)((long)puVar8 + 0x17);
          }
          lVar7 = lVar7 + param_4 + uVar3;
          puVar8 = puVar8 + 3;
        } while (puVar8 != puVar2);
      }
    }
  }
  return;
}



/* Entry: 00668570; end: 0066860f;  */

void FUN_00668570(long param_1)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long lVar1;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x00674ad8();
  lVar1 = *(long *)(param_1 + 8);
  lStack_70 = param_1 + 0x10;
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_58 = 0;
  lStack_50 = lVar1;
  for (; lStack_48 = lVar1, unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 1) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(lVar1,*unaff_x21);
    lVar1 = lStack_48 + 0x18;
  }
  uStack_58 = 1;
  FUN_00427ac0(&lStack_70);
  *(long *)(unaff_x19 + 8) = lVar1;
  return;
}



/* Entry: 00668610; end: 00668653;  */

long FUN_00668610(undefined8 param_1,undefined8 param_2,long param_3)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  
  func_0x00674b00();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 1) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_3,*unaff_x21);
    param_3 = param_3 + 0x18;
    unaff_x19 = unaff_x19 + 0x18;
  }
  return unaff_x19;
}



/* Entry: 00668654; end: 0066869b;  */

void FUN_00668654(void)

{
  long extraout_x8;
  
  func_0x00674f38();
  if (extraout_x8 != 0) {
    func_0x006744e8();
  }
  return;
}



/* Entry: 0066869c; end: 006686d3;  */

void FUN_0066869c(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_0067d448();
  }
  return;
}



/* Entry: 006686d4; end: 006686db;  */

undefined8 * FUN_006686d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0e958;
  param_1[1] = 0;
  FUN_00677064();
  return param_1;
}



/* Entry: 006686dc; end: 0066886f;  */

/* WARNING: Possible PIC construction at 0x006687d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00668944: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x006687d8) */
/* WARNING: Removing unreachable block (ram,0x006687f4) */
/* WARNING: Removing unreachable block (ram,0x0066882c) */
/* WARNING: Removing unreachable block (ram,0x00668834) */
/* WARNING: Removing unreachable block (ram,0x00668838) */
/* WARNING: Removing unreachable block (ram,0x00668840) */
/* WARNING: Removing unreachable block (ram,0x00668848) */
/* WARNING: Removing unreachable block (ram,0x00668948) */
/* WARNING: Type propagation algorithm not settling */

ulong * FUN_006686dc(void)

{
  long *plVar1;
  ulong *puVar2;
  uint uVar3;
  long *plVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 in_ZR;
  bool bVar8;
  char cVar9;
  char cVar10;
  undefined1 uVar11;
  bool bVar12;
  int iVar13;
  ulong *puVar14;
  ulong *puVar15;
  undefined8 extraout_x8;
  ulong uVar16;
  undefined8 *puVar17;
  ulong *puVar18;
  uint uVar19;
  long *extraout_x9;
  ulong uVar20;
  long extraout_x9_00;
  ulong extraout_x9_01;
  long *extraout_x9_02;
  long extraout_x9_03;
  ulong extraout_x9_04;
  ulong *extraout_x9_05;
  int extraout_w10;
  int extraout_w10_00;
  ulong extraout_x10;
  undefined1 *extraout_x10_00;
  undefined1 *extraout_x10_01;
  ulong extraout_x11;
  ulong extraout_x11_00;
  uint extraout_w12;
  ulong extraout_x12;
  ulong *unaff_x19;
  long *unaff_x20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 *******pppppppuVar25;
  undefined8 uVar26;
  undefined1 auStack_1d0 [32];
  undefined8 *******pppppppuStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  ulong auStack_158 [4];
  undefined1 *puStack_138;
  undefined1 *puStack_128;
  undefined8 uStack_118;
  undefined8 *******pppppppuStack_c0;
  code *pcStack_b8;
  undefined1 auStack_b0 [32];
  undefined8 uStack_90;
  long *plStack_80;
  undefined8 *******pppppppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [32];
  
  puVar7 = auStack_60;
  func_0x00674c64();
  puVar18 = unaff_x19;
  func_0x0065bc7c();
  func_0x006750a8((int)unaff_x20[1]);
  func_0x00675590(*unaff_x20);
  plVar4 = unaff_x20;
  if (!(bool)in_ZR) {
    plVar4 = extraout_x9;
  }
  plVar1 = plVar4 + (int)unaff_x20[1];
  uVar11 = plVar4 == plVar1;
  if ((bool)uVar11) {
    return puVar18;
  }
  lVar23 = *plVar4;
  if ((*(byte *)(lVar23 + 0x10) >> 1 & 1) == 0) {
LAB_0066874c:
    FUN_006686dc(lVar23 + 0x30);
    FUN_0066896c(lVar23 + 0x18);
    FUN_0066896c(lVar23 + 0x78);
    puVar18 = unaff_x19;
    func_0x0065bca4();
    func_0x00675294();
    uVar20 = *unaff_x19;
    uVar16 = (long)*(int *)(lVar23 + 0x68) & 0x1fffffffffffffff;
    while (uVar16 != 0) {
      func_0x00676c9c();
      if ((extraout_x12 & 1) != 0) {
        if (extraout_x9_00 != 0) goto LAB_00668864;
        *(int *)((long)unaff_x19 + 0x94) = extraout_w10 + 1;
      }
      func_0x006769ac();
      uVar20 = extraout_x9_01;
      uVar16 = extraout_x11;
    }
    if (uVar20 != 0) goto LAB_00668864;
    *(int *)(unaff_x19 + 0xe) = (int)unaff_x19[0xe] + *(int *)(lVar23 + 0xb0) * 8;
    iVar13 = *(int *)(lVar23 + 200);
    uVar26 = 0x6687d8;
    pppppppuVar25 = (undefined8 *******)&stack0xfffffffffffffff0;
  }
  else {
    if (*unaff_x19 == 0) {
      *(int *)((long)unaff_x19 + 0x84) = *(int *)((long)unaff_x19 + 0x84) + 1;
      goto LAB_0066874c;
    }
LAB_00668864:
    func_0x006743d8();
    func_0x00674134();
    func_0x00674d28();
    puVar7 = auStack_b0;
    uStack_90 = 0x38;
    pcStack_68 = FUN_00668870;
    pppppppuVar25 = &pppppppuStack_70;
    plStack_80 = plVar1;
    pppppppuStack_70 = (undefined8 *******)&stack0xfffffffffffffff0;
    func_0x00674c64();
    puVar14 = (ulong *)(ulong)(uint)puVar18[1];
    puVar18 = unaff_x19;
    func_0x0065bc2c();
    func_0x006750a8((int)plVar1[1]);
    func_0x00675590(*plVar1);
    plVar4 = plVar1;
    if (!(bool)uVar11) {
      plVar4 = extraout_x9_02;
    }
    uVar11 = plVar4 == plVar4 + (int)plVar1[1];
    if ((bool)uVar11) {
      return puVar18;
    }
    lVar23 = *plVar4;
    if ((*(byte *)(lVar23 + 0x10) >> 1 & 1) == 0) {
LAB_006688d8:
      puVar14 = (ulong *)(ulong)*(uint *)(lVar23 + 0x20);
      puVar18 = unaff_x19;
      func_0x0065bc54();
      func_0x006750a8(*(undefined4 *)(lVar23 + 0x20));
      func_0x00675294();
      uVar20 = *unaff_x19;
      uVar16 = (long)*(int *)(lVar23 + 0x20) & 0x1fffffffffffffff;
      while (uVar16 != 0) {
        func_0x00676c9c();
        if ((extraout_w12 >> 1 & 1) != 0) {
          if (extraout_x9_03 != 0) goto LAB_00668960;
          *(int *)(unaff_x19 + 0x12) = extraout_w10_00 + 1;
        }
        func_0x006769ac();
        uVar20 = extraout_x9_04;
        uVar16 = extraout_x11_00;
      }
      if (uVar20 == 0) {
        *(int *)(unaff_x19 + 0xe) = (int)unaff_x19[0xe] + *(int *)(lVar23 + 0x38) * 8;
        iVar13 = *(int *)(lVar23 + 0x50);
        uVar26 = 0x668948;
        goto SUB_00668c8c;
      }
    }
    else if (*unaff_x19 == 0) {
      *(int *)((long)unaff_x19 + 0x8c) = *(int *)((long)unaff_x19 + 0x8c) + 1;
      goto LAB_006688d8;
    }
LAB_00668960:
    unaff_x19 = puVar18;
    func_0x006743d8();
    func_0x00674134();
    func_0x00674d28();
    pcStack_b8 = FUN_0066896c;
    pppppppuStack_c0 = pppppppuVar25;
    func_0x006743c8();
    if (*puVar14 != 0) goto LAB_00668c14;
    *(int *)(puVar14 + 0xe) = (int)puVar14[0xe] + (int)unaff_x19[1] * 0x58;
    puVar15 = puVar14;
    uStack_118 = extraout_x8;
    func_0x00675590(*unaff_x19);
    puVar18 = unaff_x19;
    if (!(bool)uVar11) {
      puVar18 = extraout_x9_05;
    }
    puVar2 = puVar18 + (int)unaff_x19[1];
    while( true ) {
      iVar13 = (int)puVar15;
      bVar12 = puVar18 == puVar2;
      if (bVar12) break;
      uVar20 = *puVar18;
      uVar19 = *(uint *)(uVar20 + 0x10);
      uVar16 = *puVar14;
      if ((uVar19 >> 5 & 1) != 0) {
        if (uVar16 != 0) {
          func_0x00674fcc();
          func_0x00674bbc();
          func_0x00676484();
LAB_00668c0c:
          do {
            FUN_005558a0(auStack_158);
LAB_00668c14:
            func_0x00674fcc();
            func_0x00674bbc();
            func_0x00676484();
          } while( true );
        }
        *(int *)(puVar14 + 0x11) = (int)puVar14[0x11] + 1;
        uVar19 = *(uint *)(uVar20 + 0x10);
      }
      uVar21 = *(ulong *)(uVar20 + 0x18) & 0xfffffffffffffffc;
      unaff_x19 = puVar14;
      if ((uVar19 >> 4 & 1) == 0) {
        if (uVar16 != 0) {
LAB_00668be0:
          func_0x00674fcc();
          func_0x00674bbc();
          FUN_00776794(auStack_158);
          goto LAB_00668c0c;
        }
LAB_00668a2c:
        uVar16 = uVar21;
        FUN_00668cb8();
        iVar13 = (int)uVar16;
        cVar9 = SBORROW4(iVar13,1);
        cVar10 = iVar13 + -1 < 0;
        if (iVar13 == 1) {
          puVar15 = (ulong *)((long)&MACH_HEADER.magic + 3);
          func_0x0065bbfc();
        }
        else {
          if (iVar13 != 0) {
            uVar16 = 0;
            bVar12 = true;
            goto LAB_00668a64;
          }
          func_0x006754e8();
        }
      }
      else {
        if (uVar16 != 0) goto LAB_00668be0;
        uVar16 = *(ulong *)(uVar20 + 0x38) & 0xfffffffffffffffc;
        cVar10 = (long)uVar16 < 0;
        cVar9 = false;
        if (uVar16 == 0) goto LAB_00668a2c;
        bVar12 = false;
LAB_00668a64:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_170,uVar21)
        ;
        func_0x00570864(auStack_170);
        FUN_00664d54(auStack_188,uVar21,1);
        if (bVar12) {
          FUN_0066460c(auStack_1a0,uVar21);
        }
        else {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (auStack_1a0,uVar16);
        }
        func_0x00676c1c();
        auStack_158[0] = extraout_x10;
        if (cVar10 == cVar9) {
          auStack_158[0] = uVar21;
        }
        func_0x00676374();
        func_0x00674ec4();
        puStack_138 = extraout_x10_00;
        if (cVar10 == cVar9) {
          puStack_138 = auStack_188;
        }
        func_0x006746b0();
        puStack_128 = extraout_x10_01;
        if (cVar10 == cVar9) {
          puStack_128 = auStack_1a0;
        }
        unaff_x19 = auStack_158;
        FUN_00668d44(unaff_x19,&uStack_118,4,1);
        lVar23 = 0;
        while (lVar22 = lVar23, puVar17 = &uStack_118, lVar22 != 0x30) {
          unaff_x19 = *(ulong **)((long)auStack_158 + lVar22);
          FUN_00669688(unaff_x19,*(undefined8 *)((long)auStack_158 + lVar22 + 8),
                       *(undefined8 *)((long)auStack_158 + lVar22 + 0x10),
                       *(undefined8 *)((long)auStack_158 + lVar22 + 0x18));
          lVar23 = lVar22 + 0x10;
          if ((int)unaff_x19 != 0) {
            puVar17 = (undefined8 *)((long)auStack_158 + lVar22);
            do {
              puVar6 = (undefined8 *)((long)auStack_158 + lVar23 + 0x10);
              do {
                puVar24 = puVar6;
                if (lVar23 == 0x30) {
                  puVar17 = puVar17 + 2;
                  goto LAB_00668b68;
                }
                unaff_x19 = (ulong *)*puVar17;
                FUN_00669688(unaff_x19,puVar17[1],*puVar24,puVar24[1]);
                lVar23 = lVar23 + 0x10;
                puVar6 = puVar24 + 2;
              } while (((ulong)unaff_x19 & 1) != 0);
              uVar26 = *puVar24;
              puVar17[3] = puVar24[1];
              puVar17[2] = uVar26;
              puVar17 = puVar17 + 2;
            } while( true );
          }
        }
LAB_00668b68:
        puVar15 = (ulong *)(ulong)((int)((ulong)((long)puVar17 - (long)auStack_158) >> 4) + 1);
        func_0x00675548();
        func_0x00674d64();
        func_0x00674d80();
        func_0x00675368();
      }
      if ((((*(uint *)(uVar20 + 0x10) ^ 0xffffffff) & 0x408) == 0) &&
         (*(int *)(uVar20 + 0x58) == 0xc || *(int *)(uVar20 + 0x58) == 9)) {
        puVar15 = (ulong *)((long)&MACH_HEADER.magic + 1);
        unaff_x19 = puVar14;
        func_0x0065bbfc();
      }
      puVar18 = puVar18 + 1;
    }
    func_0x00674120(uStack_118);
    if (bVar12) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    func_0x00674928();
    func_0x00674d80();
    func_0x00675368();
    func_0x00674bc8();
    if (*unaff_x19 == 0) {
      iVar13 = (int)unaff_x19[0xe] + (iVar13 * 4 + 7U & 0xfffffff8);
      goto LAB_006754a4;
    }
    puVar7 = auStack_1d0;
    uStack_1a8 = 0x668c54;
    pppppppuVar25 = &pppppppuStack_1b0;
    pppppppuStack_1b0 = &pppppppuStack_c0;
    func_0x006743d8();
    func_0x00674134();
    uVar26 = 0x668c8c;
    func_0x00674d28();
  }
SUB_00668c8c:
  if (*unaff_x19 == 0) {
    iVar13 = (int)unaff_x19[0xe] + iVar13 * 8;
LAB_006754a4:
    *(int *)(unaff_x19 + 0xe) = iVar13;
    return unaff_x19;
  }
  *(undefined8 ********)(puVar7 + -0x10) = pppppppuVar25;
  *(undefined8 *)(puVar7 + -8) = uVar26;
  func_0x006743d8();
  func_0x00674134();
  func_0x00674d28();
  uVar16 = (ulong)(char)*(byte *)((long)unaff_x19 + 0x17);
  if ((long)uVar16 < 0) {
    puVar18 = (ulong *)*unaff_x19;
    if (0x19 < (byte)*puVar18 - 0x61) goto LAB_00668d38;
    uVar16 = unaff_x19[1];
  }
  else {
    puVar18 = unaff_x19;
    if (0x19 < (byte)*unaff_x19 - 0x61) goto LAB_00668d38;
  }
  puVar14 = (ulong *)0x0;
  while( true ) {
    if (uVar16 == 0) {
      return puVar14;
    }
    bVar5 = (byte)*puVar18;
    bVar12 = 0x19 < bVar5 - 0x61;
    bVar8 = 9 < bVar5 - 0x30;
    if (bVar5 != 0x5f && (bVar12 && bVar8)) break;
    uVar19 = (uint)puVar14;
    if (bVar5 == 0x5f) {
      uVar19 = 1;
    }
    uVar3 = (uint)puVar14;
    if (bVar12 && bVar8) {
      uVar3 = uVar19;
    }
    puVar14 = (ulong *)(ulong)uVar3;
    uVar16 = uVar16 - 1;
    puVar18 = (ulong *)((long)puVar18 + 1);
  }
LAB_00668d38:
  return (ulong *)((long)&MACH_HEADER.magic + 2);
}



/* Entry: 00668870; end: 0066896b;  */

/* WARNING: Possible PIC construction at 0x00668944: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00668948) */
/* WARNING: Type propagation algorithm not settling */

ulong * FUN_00668870(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 in_ZR;
  bool bVar7;
  char cVar8;
  char cVar9;
  undefined1 uVar10;
  bool bVar11;
  int iVar12;
  ulong *puVar13;
  ulong *puVar14;
  undefined8 extraout_x8;
  ulong uVar15;
  undefined8 *puVar16;
  ulong *puVar17;
  uint uVar18;
  long *extraout_x9;
  ulong uVar19;
  long extraout_x9_00;
  ulong extraout_x9_01;
  ulong *extraout_x9_02;
  int extraout_w10;
  ulong extraout_x10;
  undefined1 *extraout_x10_00;
  undefined1 *extraout_x10_01;
  ulong extraout_x11;
  uint extraout_w12;
  ulong *unaff_x19;
  long *unaff_x20;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 *******pppppppuVar24;
  undefined8 uVar25;
  undefined1 auStack_170 [32];
  undefined8 *******pppppppuStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  ulong auStack_f8 [4];
  undefined1 *puStack_d8;
  undefined1 *puStack_c8;
  undefined8 uStack_b8;
  undefined8 *******pppppppuStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [32];
  
  puVar6 = auStack_50;
  pppppppuVar24 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00674c64();
  puVar13 = (ulong *)(ulong)*(uint *)(param_1 + 8);
  puVar17 = unaff_x19;
  func_0x0065bc2c();
  func_0x006750a8((int)unaff_x20[1]);
  func_0x00675590(*unaff_x20);
  plVar3 = unaff_x20;
  if (!(bool)in_ZR) {
    plVar3 = extraout_x9;
  }
  uVar10 = plVar3 == plVar3 + (int)unaff_x20[1];
  if ((bool)uVar10) {
    return puVar17;
  }
  lVar22 = *plVar3;
  if ((*(byte *)(lVar22 + 0x10) >> 1 & 1) == 0) {
LAB_006688d8:
    puVar13 = (ulong *)(ulong)*(uint *)(lVar22 + 0x20);
    puVar17 = unaff_x19;
    func_0x0065bc54();
    func_0x006750a8(*(undefined4 *)(lVar22 + 0x20));
    func_0x00675294();
    uVar19 = *unaff_x19;
    uVar15 = (long)*(int *)(lVar22 + 0x20) & 0x1fffffffffffffff;
    while (uVar15 != 0) {
      func_0x00676c9c();
      if ((extraout_w12 >> 1 & 1) != 0) {
        if (extraout_x9_00 != 0) goto LAB_00668960;
        *(int *)(unaff_x19 + 0x12) = extraout_w10 + 1;
      }
      func_0x006769ac();
      uVar19 = extraout_x9_01;
      uVar15 = extraout_x11;
    }
    if (uVar19 != 0) goto LAB_00668960;
    *(int *)(unaff_x19 + 0xe) = (int)unaff_x19[0xe] + *(int *)(lVar22 + 0x38) * 8;
    iVar12 = *(int *)(lVar22 + 0x50);
    uVar25 = 0x668948;
  }
  else {
    if (*unaff_x19 == 0) {
      *(int *)((long)unaff_x19 + 0x8c) = *(int *)((long)unaff_x19 + 0x8c) + 1;
      goto LAB_006688d8;
    }
LAB_00668960:
    unaff_x19 = puVar17;
    func_0x006743d8();
    func_0x00674134();
    func_0x00674d28();
    pcStack_58 = FUN_0066896c;
    pppppppuStack_60 = pppppppuVar24;
    func_0x006743c8();
    if (*puVar13 != 0) goto LAB_00668c14;
    *(int *)(puVar13 + 0xe) = (int)puVar13[0xe] + (int)unaff_x19[1] * 0x58;
    puVar14 = puVar13;
    uStack_b8 = extraout_x8;
    func_0x00675590(*unaff_x19);
    puVar17 = unaff_x19;
    if (!(bool)uVar10) {
      puVar17 = extraout_x9_02;
    }
    puVar1 = puVar17 + (int)unaff_x19[1];
    while( true ) {
      iVar12 = (int)puVar14;
      bVar11 = puVar17 == puVar1;
      if (bVar11) break;
      uVar19 = *puVar17;
      uVar18 = *(uint *)(uVar19 + 0x10);
      uVar15 = *puVar13;
      if ((uVar18 >> 5 & 1) != 0) {
        if (uVar15 != 0) {
          func_0x00674fcc();
          func_0x00674bbc();
          func_0x00676484();
LAB_00668c0c:
          do {
            FUN_005558a0(auStack_f8);
LAB_00668c14:
            func_0x00674fcc();
            func_0x00674bbc();
            func_0x00676484();
          } while( true );
        }
        *(int *)(puVar13 + 0x11) = (int)puVar13[0x11] + 1;
        uVar18 = *(uint *)(uVar19 + 0x10);
      }
      uVar20 = *(ulong *)(uVar19 + 0x18) & 0xfffffffffffffffc;
      unaff_x19 = puVar13;
      if ((uVar18 >> 4 & 1) == 0) {
        if (uVar15 != 0) {
LAB_00668be0:
          func_0x00674fcc();
          func_0x00674bbc();
          FUN_00776794(auStack_f8);
          goto LAB_00668c0c;
        }
LAB_00668a2c:
        uVar15 = uVar20;
        FUN_00668cb8();
        iVar12 = (int)uVar15;
        cVar8 = SBORROW4(iVar12,1);
        cVar9 = iVar12 + -1 < 0;
        if (iVar12 == 1) {
          puVar14 = (ulong *)((long)&MACH_HEADER.magic + 3);
          func_0x0065bbfc();
        }
        else {
          if (iVar12 != 0) {
            uVar15 = 0;
            bVar11 = true;
            goto LAB_00668a64;
          }
          func_0x006754e8();
        }
      }
      else {
        if (uVar15 != 0) goto LAB_00668be0;
        uVar15 = *(ulong *)(uVar19 + 0x38) & 0xfffffffffffffffc;
        cVar9 = (long)uVar15 < 0;
        cVar8 = false;
        if (uVar15 == 0) goto LAB_00668a2c;
        bVar11 = false;
LAB_00668a64:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_110,uVar20)
        ;
        func_0x00570864(auStack_110);
        FUN_00664d54(auStack_128,uVar20,1);
        if (bVar11) {
          FUN_0066460c(auStack_140,uVar20);
        }
        else {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (auStack_140,uVar15);
        }
        func_0x00676c1c();
        auStack_f8[0] = extraout_x10;
        if (cVar9 == cVar8) {
          auStack_f8[0] = uVar20;
        }
        func_0x00676374();
        func_0x00674ec4();
        puStack_d8 = extraout_x10_00;
        if (cVar9 == cVar8) {
          puStack_d8 = auStack_128;
        }
        func_0x006746b0();
        puStack_c8 = extraout_x10_01;
        if (cVar9 == cVar8) {
          puStack_c8 = auStack_140;
        }
        unaff_x19 = auStack_f8;
        FUN_00668d44(unaff_x19,&uStack_b8,4,1);
        lVar22 = 0;
        while (lVar21 = lVar22, puVar16 = &uStack_b8, lVar21 != 0x30) {
          unaff_x19 = *(ulong **)((long)auStack_f8 + lVar21);
          FUN_00669688(unaff_x19,*(undefined8 *)((long)auStack_f8 + lVar21 + 8),
                       *(undefined8 *)((long)auStack_f8 + lVar21 + 0x10),
                       *(undefined8 *)((long)auStack_f8 + lVar21 + 0x18));
          lVar22 = lVar21 + 0x10;
          if ((int)unaff_x19 != 0) {
            puVar16 = (undefined8 *)((long)auStack_f8 + lVar21);
            do {
              puVar5 = (undefined8 *)((long)auStack_f8 + lVar22 + 0x10);
              do {
                puVar23 = puVar5;
                if (lVar22 == 0x30) {
                  puVar16 = puVar16 + 2;
                  goto LAB_00668b68;
                }
                unaff_x19 = (ulong *)*puVar16;
                FUN_00669688(unaff_x19,puVar16[1],*puVar23,puVar23[1]);
                lVar22 = lVar22 + 0x10;
                puVar5 = puVar23 + 2;
              } while (((ulong)unaff_x19 & 1) != 0);
              uVar25 = *puVar23;
              puVar16[3] = puVar23[1];
              puVar16[2] = uVar25;
              puVar16 = puVar16 + 2;
            } while( true );
          }
        }
LAB_00668b68:
        puVar14 = (ulong *)(ulong)((int)((ulong)((long)puVar16 - (long)auStack_f8) >> 4) + 1);
        func_0x00675548();
        func_0x00674d64();
        func_0x00674d80();
        func_0x00675368();
      }
      if ((((*(uint *)(uVar19 + 0x10) ^ 0xffffffff) & 0x408) == 0) &&
         (*(int *)(uVar19 + 0x58) == 0xc || *(int *)(uVar19 + 0x58) == 9)) {
        puVar14 = (ulong *)((long)&MACH_HEADER.magic + 1);
        unaff_x19 = puVar13;
        func_0x0065bbfc();
      }
      puVar17 = puVar17 + 1;
    }
    func_0x00674120(uStack_b8);
    if (bVar11) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    func_0x00674928();
    func_0x00674d80();
    func_0x00675368();
    func_0x00674bc8();
    if (*unaff_x19 == 0) {
      iVar12 = (int)unaff_x19[0xe] + (iVar12 * 4 + 7U & 0xfffffff8);
      goto LAB_006754a4;
    }
    puVar6 = auStack_170;
    uStack_148 = 0x668c54;
    pppppppuVar24 = &pppppppuStack_150;
    pppppppuStack_150 = &pppppppuStack_60;
    func_0x006743d8();
    func_0x00674134();
    uVar25 = 0x668c8c;
    func_0x00674d28();
  }
  if (*unaff_x19 == 0) {
    iVar12 = (int)unaff_x19[0xe] + iVar12 * 8;
LAB_006754a4:
    *(int *)(unaff_x19 + 0xe) = iVar12;
    return unaff_x19;
  }
  *(undefined8 ********)(puVar6 + -0x10) = pppppppuVar24;
  *(undefined8 *)(puVar6 + -8) = uVar25;
  func_0x006743d8();
  func_0x00674134();
  func_0x00674d28();
  uVar15 = (ulong)(char)*(byte *)((long)unaff_x19 + 0x17);
  if ((long)uVar15 < 0) {
    puVar17 = (ulong *)*unaff_x19;
    if (0x19 < (byte)*puVar17 - 0x61) goto LAB_00668d38;
    uVar15 = unaff_x19[1];
  }
  else {
    puVar17 = unaff_x19;
    if (0x19 < (byte)*unaff_x19 - 0x61) goto LAB_00668d38;
  }
  puVar13 = (ulong *)0x0;
  while( true ) {
    if (uVar15 == 0) {
      return puVar13;
    }
    bVar4 = (byte)*puVar17;
    bVar11 = 0x19 < bVar4 - 0x61;
    bVar7 = 9 < bVar4 - 0x30;
    if (bVar4 != 0x5f && (bVar11 && bVar7)) break;
    uVar18 = (uint)puVar13;
    if (bVar4 == 0x5f) {
      uVar18 = 1;
    }
    uVar2 = (uint)puVar13;
    if (bVar11 && bVar7) {
      uVar2 = uVar18;
    }
    puVar13 = (ulong *)(ulong)uVar2;
    uVar15 = uVar15 - 1;
    puVar17 = (ulong *)((long)puVar17 + 1);
  }
LAB_00668d38:
  return (ulong *)((long)&MACH_HEADER.magic + 2);
}


