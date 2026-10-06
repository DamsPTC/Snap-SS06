/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004f6474; end: 004f64df;  */

long * FUN_004f6474(undefined8 param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar3;
  int iVar4;
  
  func_0x004fe194();
  func_0x004fe5d8();
  while (unaff_w22 != unaff_w21) {
    func_0x004fe158();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x004fe2c0();
    func_0x004fe638();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe404();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 004f64e0; end: 004f652f;  */

void FUN_004f64e0(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x004fe134();
  while (unaff_x22 != 0) {
    func_0x004ede10(*unaff_x21);
    func_0x004fe6f0();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004fe918();
  }
  func_0x004fe7a0();
  return;
}



/* Entry: 004f6530; end: 004f6533;  */

void FUN_004f6530(ulong *param_1)

{
  long unaff_x20;
  
  func_0x004fe368();
  FUN_004eed4c();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe31c();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004f6534; end: 004f6597;  */

void FUN_004f6534(ulong *param_1)

{
  long unaff_x20;
  
  func_0x004fe368();
  FUN_004eed4c();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe31c();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004f6598; end: 004f65d3;  */

undefined1  [16] FUN_004f6598(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar5;
  puVar3 = (undefined1 *)(param_2 + 0x10);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x10); puVar2 != (undefined1 *)(param_1 + 0x20);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x20);
  return auVar6;
}



/* Entry: 004f65d4; end: 004f65f7;  */

undefined8 FUN_004f65d4(undefined8 param_1)

{
  func_0x004fe3d0();
  return param_1;
}



/* Entry: 004f65f8; end: 004f65fb;  */

undefined8 FUN_004f65f8(undefined8 param_1)

{
  func_0x004fe3d0();
  return param_1;
}



/* Entry: 004f65fc; end: 004f660f;  */

void FUN_004f65fc(void)

{
  FUN_004f65d4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f6610; end: 004f662f;  */

undefined ** FUN_004f6610(void)

{
  return &PTR_DAT_009f7678;
}



/* Entry: 004f6630; end: 004f669b;  */

long * FUN_004f6630(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004fe194();
  if ((char)param_1[2] == '\x01') {
    func_0x004fe1a4();
    func_0x004fe524();
    func_0x004fe280();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x004fe404();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x0054f690();
      param_4 = unaff_x19;
      func_0x0054ed58();
    }
    func_0x0054f690();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 004f669c; end: 004f66cb;  */

long FUN_004f669c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = (ulong)*(byte *)(param_1 + 0x10) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 004f66cc; end: 004f6713;  */

void FUN_004f66cc(void)

{
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x004fe498();
  func_0x004fe900(&PTR_FUN_009f73f8);
  if ((extraout_x8 & 1) != 0) {
    func_0x004fe1d0();
  }
  FUN_004fc6a0(unaff_x19 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  return;
}



/* Entry: 004f6714; end: 004f673f;  */

long FUN_004f6714(long param_1)

{
  func_0x004fe3d0();
  FUN_004fc6c0(param_1 + 0x10);
  return param_1;
}



/* Entry: 004f6740; end: 004f6743;  */

long FUN_004f6740(long param_1)

{
  func_0x004fe3d0();
  FUN_004fc6c0(param_1 + 0x10);
  return param_1;
}



/* Entry: 004f6744; end: 004f6757;  */

void FUN_004f6744(void)

{
  FUN_004f6714();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f6758; end: 004f6763;  */

undefined ** FUN_004f6758(void)

{
  return &PTR_DAT_009f76c8;
}



/* Entry: 004f6764; end: 004f6797;  */

void FUN_004f6764(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x004fe76c();
  if (in_NG == in_OV) {
    func_0x004fe828();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 004f6798; end: 004f6803;  */

long * FUN_004f6798(undefined8 param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar3;
  int iVar4;
  
  func_0x004fe194();
  func_0x004fe5d8();
  while (unaff_w22 != unaff_w21) {
    func_0x004fe158();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x004fe2c0();
    func_0x004fe638();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe404();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 004f6804; end: 004f6853;  */

void FUN_004f6804(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x004fe134();
  while (unaff_x22 != 0) {
    FUN_004f6854(*unaff_x21);
    func_0x004fe6f0();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004fe918();
  }
  func_0x004fe7a0();
  return;
}



/* Entry: 004f6854; end: 004f686f;  */

long FUN_004f6854(long param_1)

{
  long extraout_x8;
  
  FUN_004f8e40();
  FUN_004fe0f0();
  return param_1 + extraout_x8;
}



/* Entry: 004f6870; end: 004f6873;  */

void FUN_004f6870(ulong *param_1)

{
  long unaff_x20;
  
  func_0x004fe368();
  FUN_004f68a4();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe31c();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004f6874; end: 004f68a3;  */

void FUN_004f6874(ulong *param_1)

{
  long unaff_x20;
  
  func_0x004fe368();
  FUN_004f68a4();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe31c();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004f68a4; end: 004f68b3;  */

void FUN_004f68a4(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  FUN_0054d5a8();
  plVar2 = param_1;
  func_0x0054d67c();
  plVar3 = (long *)*unaff_x25;
  func_0x0054d6a8();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x0054d6b0();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x0054d694();
    param_1 = param_1 + 1;
  }
  func_0x0054d60c();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 004f68b4; end: 004f698f;  */

void FUN_004f68b4(void)

{
  uint extraout_w8;
  undefined4 extraout_var;
  long unaff_x19;
  
  func_0x004fe488();
  if (extraout_w8 < 4) {
                    /* WARNING: Could not recover jumptable at 0x004f68e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_0080ca18)[CONCAT44(extraout_var,extraout_w8)] * 4 + 0x4f68e4))();
    return;
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 004f6990; end: 004f69c3;  */

long FUN_004f6990(long param_1)

{
  func_0x004fe3d0();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_004f68b4(param_1);
  }
  return param_1;
}



/* Entry: 004f69c4; end: 004f69c7;  */

long FUN_004f69c4(long param_1)

{
  func_0x004fe3d0();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_004f68b4(param_1);
  }
  return param_1;
}



/* Entry: 004f69c8; end: 004f69db;  */

void FUN_004f69c8(void)

{
  FUN_004f6990();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f69dc; end: 004f69f7;  */

undefined8 FUN_004f69dc(undefined8 param_1)

{
  func_0x004fe3d0();
  return param_1;
}



/* Entry: 004f69f8; end: 004f6b1f;  */

void FUN_004f69f8(long param_1)

{
  ulong *puVar1;
  
  FUN_004f68b4();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 004f6b20; end: 004f6b23;  */

void FUN_004f6b20(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x004fe220();
  if ((unaff_x22 & 1) != 0) {
    func_0x004fe644();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    func_0x004fe7b8();
    if (!(bool)in_ZR) {
      if (unaff_w24 != 0) {
        param_1 = unaff_x21;
        FUN_004f68b4();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        FUN_004f6c60();
        goto LAB_004f6c44;
      }
      func_0x004fe460();
      FUN_004fd1cc();
      break;
    case 2:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004fe8e8();
        func_0x004f6c90();
        goto LAB_004f6c44;
      }
      func_0x004fe460();
      func_0x004fd228();
      break;
    case 3:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004f6f4c();
        goto LAB_004f6c44;
      }
      func_0x004fe460();
      func_0x004fd328();
      break;
    case 4:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004f7018();
        goto LAB_004f6c44;
      }
      func_0x004fe460();
      func_0x004fd39c();
      break;
    default:
      goto LAB_004f6c44;
    }
    unaff_x21[2] = (ulong)param_1;
  }
LAB_004f6c44:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe260();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004f6b24; end: 004f6c5f;  */

void FUN_004f6b24(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x004fe220();
  if ((unaff_x22 & 1) != 0) {
    func_0x004fe644();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    func_0x004fe7b8();
    if (!(bool)in_ZR) {
      if (unaff_w24 != 0) {
        param_1 = unaff_x21;
        FUN_004f68b4();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        FUN_004f6c60();
        goto LAB_004f6c44;
      }
      func_0x004fe460();
      FUN_004fd1cc();
      break;
    case 2:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004fe8e8();
        func_0x004f6c90();
        goto LAB_004f6c44;
      }
      func_0x004fe460();
      func_0x004fd228();
      break;
    case 3:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004f6f4c();
        goto LAB_004f6c44;
      }
      func_0x004fe460();
      func_0x004fd328();
      break;
    case 4:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004f7018();
        goto LAB_004f6c44;
      }
      func_0x004fe460();
      func_0x004fd39c();
      break;
    default:
      goto LAB_004f6c44;
    }
    unaff_x21[2] = (ulong)param_1;
  }
LAB_004f6c44:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe260();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004f6c60; end: 004f6c8f;  */

void FUN_004f6c60(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  if (*(char *)(param_2 + 0x11) == '\x01') {
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004f6c90; end: 004f70a3;  */

void FUN_004f6c90(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x004fe220();
  if ((unaff_x22 & 1) != 0) {
    func_0x004fe644();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    func_0x004fe7b8();
    if (!(bool)in_ZR) {
      if (unaff_w24 != 0) {
        param_1 = unaff_x21;
        FUN_004faed0();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004fb2fc();
        goto LAB_004f6f30;
      }
      func_0x004fe460();
      FUN_004fdcc0();
      break;
    case 2:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004fe8e8();
        func_0x004fb318();
        goto LAB_004f6f30;
      }
      func_0x004fe460();
      FUN_004fdd14();
      break;
    case 3:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004fe5cc();
        func_0x004fb340();
        goto LAB_004f6f30;
      }
      func_0x004fe460();
      FUN_004fdd70();
      break;
    case 4:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004fe5cc();
        func_0x004fb34c();
        goto LAB_004f6f30;
      }
      func_0x004fe460();
      FUN_004fddc0();
      break;
    case 5:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004fe5cc();
        func_0x004fb358();
        goto LAB_004f6f30;
      }
      func_0x004fe460();
      FUN_004fde10();
      break;
    case 6:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        FUN_004fb364();
        goto LAB_004f6f30;
      }
      func_0x004fe460();
      FUN_004fde60();
      break;
    case 7:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004fe5cc();
        func_0x004fb3c0();
        goto LAB_004f6f30;
      }
      func_0x004fe460();
      FUN_004fdecc();
      break;
    case 8:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004fe5cc();
        func_0x004fb3cc();
        goto LAB_004f6f30;
      }
      func_0x004fe460();
      FUN_004fdf1c();
      break;
    case 9:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004fe5cc();
        func_0x004fb3d8();
        goto LAB_004f6f30;
      }
      func_0x004fe460();
      FUN_004fdf6c();
      break;
    case 10:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004fb3e4();
        goto LAB_004f6f30;
      }
      func_0x004fe460();
      FUN_004fdfbc();
      break;
    case 0xb:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004fb400();
        goto LAB_004f6f30;
      }
      func_0x004fe460();
      FUN_004fe010();
      break;
    case 0xc:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004fe5cc();
        func_0x004fb41c();
        goto LAB_004f6f30;
      }
      func_0x004fe460();
      FUN_004fe064();
      break;
    default:
      goto LAB_004f6f30;
    }
    unaff_x21[2] = (ulong)param_1;
  }
LAB_004f6f30:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe260();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004f70a4; end: 004f70d7;  */

long FUN_004f70a4(long param_1)

{
  func_0x004fe3d0();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004f70d8; end: 004f70db;  */

long FUN_004f70d8(long param_1)

{
  func_0x004fe3d0();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004f70dc; end: 004f70ef;  */

void FUN_004f70dc(void)

{
  FUN_004f70a4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f70f0; end: 004f70fb;  */

undefined ** FUN_004f70f0(void)

{
  return &PTR_DAT_009f7770;
}



/* Entry: 004f70fc; end: 004f7137;  */

void FUN_004f70fc(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x004fe57c();
  if ((extraout_x8 & 1) != 0) {
    func_0x004fe810();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 004f7138; end: 004f71af;  */

long * FUN_004f7138(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004fe194();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    func_0x004fe200();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x004fe1a4();
    func_0x004fe588();
    func_0x004fe838();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe404();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 004f71b0; end: 004f720b;  */

void FUN_004f71b0(int param_1)

{
  int extraout_w8;
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x004fe57c();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x004fe808();
    param_1 = param_1 + 1;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x004fe788();
    param_1 = extraout_w8 + param_1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004fe918();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 004f720c; end: 004f720f;  */

void FUN_004f720c(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004fe250();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x004fe690();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004fe684();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x004fe7f0();
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  func_0x004fe2cc();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004fe260();
    if ((*puVar1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004f7210; end: 004f7277;  */

void FUN_004f7210(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004fe250();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x004fe690();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004fe684();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x004fe7f0();
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  func_0x004fe2cc();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004fe260();
    if ((*puVar1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004f7278; end: 004f7283;  */

void FUN_004f7278(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004f7284; end: 004f72a7;  */

undefined8 FUN_004f7284(undefined8 param_1)

{
  func_0x004fe3d0();
  return param_1;
}



/* Entry: 004f72a8; end: 004f72ab;  */

undefined8 FUN_004f72a8(undefined8 param_1)

{
  func_0x004fe3d0();
  return param_1;
}



/* Entry: 004f72ac; end: 004f72bf;  */

void FUN_004f72ac(void)

{
  FUN_004f7284();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f72c0; end: 004f7357;  */

undefined ** FUN_004f72c0(void)

{
  return &PTR_DAT_009f77d0;
}



/* Entry: 004f7358; end: 004f737b;  */

undefined8 FUN_004f7358(undefined8 param_1)

{
  func_0x004fe3d0();
  return param_1;
}



/* Entry: 004f737c; end: 004f737f;  */

undefined8 FUN_004f737c(undefined8 param_1)

{
  func_0x004fe3d0();
  return param_1;
}



/* Entry: 004f7380; end: 004f7393;  */

void FUN_004f7380(void)

{
  FUN_004f7358();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f7394; end: 004f73b3;  */

undefined ** FUN_004f7394(void)

{
  return &PTR_DAT_009f7828;
}



/* Entry: 004f73b4; end: 004f741b;  */

long * FUN_004f73b4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004fe194();
  if (param_1[2] != 0) {
    func_0x004fe1a4();
    func_0x004fe524();
    func_0x004fe838();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x004fe404();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x0054f690();
      param_4 = unaff_x19;
      func_0x0054ed58();
    }
    func_0x0054f690();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 004f741c; end: 004f7463;  */

ulong FUN_004f741c(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x18) = (int)uVar1;
  return uVar1;
}



/* Entry: 004f7464; end: 004f74df;  */

void FUN_004f7464(void)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  
  func_0x004fe590();
  if (extraout_w8 == 2) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004fe418();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_004f74bc;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_004f7358();
    }
  }
  else {
    if (extraout_w8 != 1) goto LAB_004f74bc;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004fe418();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_004f74bc;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_004f7284();
    }
  }
  __ZdlPv();
LAB_004f74bc:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 004f74e0; end: 004f7513;  */

long FUN_004f74e0(long param_1)

{
  func_0x004fe3d0();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_004f7464(param_1);
  }
  return param_1;
}



/* Entry: 004f7514; end: 004f7517;  */

long FUN_004f7514(long param_1)

{
  func_0x004fe3d0();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_004f7464(param_1);
  }
  return param_1;
}



/* Entry: 004f7518; end: 004f752b;  */

void FUN_004f7518(void)

{
  FUN_004f74e0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f752c; end: 004f7537;  */

undefined ** FUN_004f752c(void)

{
  return &PTR_DAT_009f7880;
}



/* Entry: 004f7538; end: 004f763f;  */

void FUN_004f7538(long param_1)

{
  ulong *puVar1;
  
  FUN_004f7464();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 004f7640; end: 004f7643;  */

void FUN_004f7640(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x004fe220();
  if ((unaff_x22 & 1) != 0) {
    func_0x004fe644();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_004f76f0;
  func_0x004fe7b8();
  if (!(bool)in_ZR) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      FUN_004f7464();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (unaff_w24 == 2) {
      func_0x004fe1c0();
      func_0x004fe8e8();
      func_0x004f733c();
      goto LAB_004f76f0;
    }
    func_0x004fe460();
    FUN_004fd458();
  }
  else {
    if (iVar1 != 1) goto LAB_004f76f0;
    if (unaff_w24 == 1) {
      func_0x004fe1c0();
      func_0x004fe5cc();
      FUN_004f7278();
      goto LAB_004f76f0;
    }
    func_0x004fe460();
    FUN_004fd408();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_004f76f0:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe260();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004f7644; end: 004f770b;  */

void FUN_004f7644(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x004fe220();
  if ((unaff_x22 & 1) != 0) {
    func_0x004fe644();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_004f76f0;
  func_0x004fe7b8();
  if (!(bool)in_ZR) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      FUN_004f7464();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (unaff_w24 == 2) {
      func_0x004fe1c0();
      func_0x004fe8e8();
      func_0x004f733c();
      goto LAB_004f76f0;
    }
    func_0x004fe460();
    FUN_004fd458();
  }
  else {
    if (iVar1 != 1) goto LAB_004f76f0;
    if (unaff_w24 == 1) {
      func_0x004fe1c0();
      func_0x004fe5cc();
      FUN_004f7278();
      goto LAB_004f76f0;
    }
    func_0x004fe460();
    FUN_004fd408();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_004f76f0:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe260();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004f770c; end: 004f7817;  */

void FUN_004f770c(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  
  iVar1 = *(int *)(param_1 + 0xc0);
  if (iVar1 == 0x15) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x004fe418();
      uVar2 = extraout_x8_02;
    }
    if (uVar2 != 0) goto LAB_004f77b0;
    if (*(long *)(param_1 + 0xb8) != 0) {
      FUN_004f8c04();
    }
  }
  else if (iVar1 == 0xd) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x004fe418();
      uVar2 = extraout_x8;
    }
    if (uVar2 != 0) goto LAB_004f77b0;
    if (*(long *)(param_1 + 0xb8) != 0) {
      FUN_004f89cc();
    }
  }
  else if (iVar1 == 0xe) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x004fe418();
      uVar2 = extraout_x8_01;
    }
    if (uVar2 != 0) goto LAB_004f77b0;
    if (*(long *)(param_1 + 0xb8) != 0) {
      FUN_004f8b18();
    }
  }
  else {
    if (iVar1 != 0xb) goto LAB_004f77b0;
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x004fe418();
      uVar2 = extraout_x8_00;
    }
    if (uVar2 != 0) goto LAB_004f77b0;
    if (*(long *)(param_1 + 0xb8) != 0) {
      FUN_004fc03c();
    }
  }
  __ZdlPv();
LAB_004f77b0:
  *(undefined4 *)(param_1 + 0xc0) = 0;
  return;
}



/* Entry: 004f7818; end: 004f7857;  */

void FUN_004f7818(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined **)(param_1 + 0x60) = &DAT_00b69408;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  return;
}



/* Entry: 004f7858; end: 004f7a5f;  */

void FUN_004f7858(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x004fe498();
  func_0x004fe900(&PTR_FUN_009f7588);
  if ((extraout_x8 & 1) != 0) {
    func_0x004fe1d0();
  }
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x21 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x1c) = 0;
  *(undefined8 *)(unaff_x19 + 0x14) = 0;
  *(undefined4 *)(unaff_x19 + 0x24) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = unaff_x20;
  FUN_004f8508(unaff_x19 + 0x18,unaff_x21 + 0x18);
  FUN_004fc6e8(unaff_x19 + 0x30);
  func_0x004ef330(unaff_x19 + 0x48);
  lVar3 = unaff_x21 + 0x60;
  func_0x004fe59c();
  *(long *)(unaff_x19 + 0x60) = lVar3;
  *(undefined4 *)(unaff_x19 + 0xc0) = *(undefined4 *)(unaff_x21 + 0xc0);
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x20;
    FUN_004fd4b4();
  }
  *(undefined8 *)(unaff_x19 + 0x68) = uVar4;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x20;
    FUN_004fd4e8();
  }
  *(undefined8 *)(unaff_x19 + 0x70) = uVar4;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x20;
    FUN_004efbac();
  }
  *(undefined8 *)(unaff_x19 + 0x78) = uVar4;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x20;
    func_0x004fd540();
  }
  *(undefined8 *)(unaff_x19 + 0x80) = uVar4;
  if ((uVar1 >> 4 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x20;
    func_0x004fd5e0();
  }
  *(undefined8 *)(unaff_x19 + 0x88) = uVar4;
  if ((uVar1 >> 5 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x20;
    FUN_004fd650();
  }
  *(undefined8 *)(unaff_x19 + 0x90) = uVar4;
  if ((uVar1 >> 6 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x20;
    func_0x004fd6a0();
  }
  *(undefined8 *)(unaff_x19 + 0x98) = uVar4;
  if ((uVar1 >> 7 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x004fd714();
  }
  *(undefined8 *)(unaff_x19 + 0xa0) = unaff_x20;
  uVar4 = *(undefined8 *)(unaff_x21 + 0xa8);
  *(undefined4 *)(unaff_x19 + 0xb0) = *(undefined4 *)(unaff_x21 + 0xb0);
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar4;
  iVar2 = *(int *)(unaff_x19 + 0xc0);
  if (iVar2 == 0x15) {
    func_0x004fe8c4();
    FUN_004fd8ac();
  }
  else if (iVar2 == 0xd) {
    func_0x004fe8c4();
    FUN_004fd7fc();
  }
  else if (iVar2 == 0xe) {
    func_0x004fe8c4();
    FUN_004fd858();
  }
  else {
    if (iVar2 != 0xb) {
      return;
    }
    func_0x004fe8c4();
    func_0x004fd784();
  }
  *(undefined8 *)(unaff_x19 + 0xb8) = unaff_x20;
  return;
}



/* Entry: 004f7a60; end: 004f7a8b;  */

undefined8 FUN_004f7a60(undefined8 param_1)

{
  func_0x004fe3d0();
  FUN_004f7a8c(param_1);
  return param_1;
}



/* Entry: 004f7a8c; end: 004f7b53;  */

undefined8 FUN_004f7a8c(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  func_0x00532f74(param_1 + 0x60);
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_004f92f4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_004f65d4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_004f6714();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_004f6990();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_004f70a4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_004f8924();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_004f74e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xa0) != 0) {
    FUN_004fc3f8();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0xc0) != 0) {
    FUN_004f770c(param_1);
  }
  FUN_004ef350(param_1 + 0x48);
  FUN_004fc708(param_1 + 0x30);
  func_0x004fe7dc(param_1 + 0x18);
  if (extraout_x8 != 0) {
    func_0x004fe670();
  }
  return unaff_x19;
}



/* Entry: 004f7b54; end: 004f7b57;  */

undefined8 FUN_004f7b54(undefined8 param_1)

{
  func_0x004fe3d0();
  FUN_004f7a8c(param_1);
  return param_1;
}



/* Entry: 004f7b58; end: 004f7b6b;  */

void FUN_004f7b58(void)

{
  FUN_004f7a60();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f7b6c; end: 004f7b87;  */

long FUN_004f7b6c(long param_1)

{
  func_0x004fe3d0();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004fbe9c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004f7b88; end: 004f7cab;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_004f7b88(long param_1)

{
  byte bVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    FUN_00437de0(param_1 + 0x18);
  }
  FUN_004fd1b8(param_1 + 0x30);
  FUN_004ef610(param_1 + 0x48);
  FUN_00532fa8(param_1 + 0x60);
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 != 0) {
    if ((bVar1 & 1) != 0) {
      func_0x004f7c7c(*(undefined8 *)(param_1 + 0x68));
    }
    if ((bVar1 >> 1 & 1) != 0) {
      func_0x004f661c(*(undefined8 *)(param_1 + 0x70));
    }
    if ((bVar1 >> 2 & 1) != 0) {
      FUN_004f6764(*(undefined8 *)(param_1 + 0x78));
    }
    if ((bVar1 >> 3 & 1) != 0) {
      FUN_004f69f8(*(undefined8 *)(param_1 + 0x80));
    }
    if ((bVar1 >> 4 & 1) != 0) {
      FUN_004f70fc(*(undefined8 *)(param_1 + 0x88));
    }
    if ((bVar1 >> 5 & 1) != 0) {
      FUN_004f7cac(*(undefined8 *)(param_1 + 0x90));
    }
    if ((bVar1 >> 6 & 1) != 0) {
      FUN_004f7538(*(undefined8 *)(param_1 + 0x98));
    }
    if ((char)bVar1 < '\0') {
      FUN_004f7cbc(*(undefined8 *)(param_1 + 0xa0));
    }
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  FUN_004f770c(param_1);
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 004f7cac; end: 004f7cbb;  */

void FUN_004f7cac(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 004f7cbc; end: 004f7cef;  */

void FUN_004f7cbc(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x004fe57c();
  if ((extraout_x8 & 1) != 0) {
    func_0x004fe810();
  }
  func_0x004fe75c();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_00538108();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 004f7cf0; end: 004f81a3;  */

qword * FUN_004f7cf0(qword *param_1,qword *param_2,ulong param_3,qword *param_4)

{
  dword dVar1;
  uint uVar2;
  uint uVar3;
  qword *pqVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x8_00;
  qword *unaff_x19;
  long unaff_x20;
  int iVar6;
  int iVar7;
  
  func_0x004fe194();
  dVar1 = *(dword *)(param_1 + 4);
  while (dVar1 != 0) {
    func_0x004fe158();
    param_3 = (ulong)*(uint *)(param_2 + 4);
    func_0x004fe2c0();
    func_0x004fe638();
  }
  if (*(int *)(unaff_x20 + 0xa8) != 0) {
    func_0x004fe1a4();
    param_2 = param_1;
    func_0x004fe588();
    func_0x004fe214();
    param_4 = param_1;
  }
  uVar2 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) != 0) {
    param_2 = *(qword **)(unaff_x20 + 0x68);
    param_3 = (ulong)(uint)param_2[3];
    param_1 = (qword *)((long)&MACH_HEADER.magic + 3);
    func_0x004fe3e8();
    param_4 = param_1;
  }
  func_0x004fe4f4(*(undefined8 *)(unaff_x20 + 0x60));
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(param_3 + 8);
  }
  if (lVar5 != 0) {
    func_0x004fe888();
    param_4 = param_1;
  }
  iVar6 = *(int *)(unaff_x20 + 0x38);
  while (iVar6 != 0) {
    func_0x004fe6fc();
    param_3 = (ulong)*(uint *)(param_2 + 5);
    param_1 = (qword *)((long)&MACH_HEADER.cputype + 1);
    func_0x004fe3e8();
    func_0x004fe638();
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_2 = *(qword **)(unaff_x20 + 0x70);
    param_3 = (ulong)*(dword *)((long)param_2 + 0x14);
    param_1 = (qword *)((long)&MACH_HEADER.cputype + 2);
    func_0x004fe3e8();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0xac) != 0) {
    func_0x004fe1a4();
    param_4 = &segment_command_00000020.vmaddr;
    func_0x00487cbc();
    func_0x004fe214();
    param_2 = param_1;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    param_2 = *(qword **)(unaff_x20 + 0x78);
    param_3 = (ulong)*(uint *)(param_2 + 5);
    param_4 = (qword *)&MACH_HEADER.cpusubtype;
    func_0x004fe3e8();
  }
  if ((uVar2 >> 3 & 1) != 0) {
    param_2 = *(qword **)(unaff_x20 + 0x80);
    param_3 = (ulong)(uint)param_2[3];
    param_4 = (qword *)((long)&MACH_HEADER.cpusubtype + 1);
    func_0x004fe3e8();
  }
  if (*(int *)(unaff_x20 + 0xc0) == 0xb) {
    param_2 = *(qword **)(unaff_x20 + 0xb8);
    param_3 = (ulong)*(dword *)((long)param_2 + 0x14);
    param_4 = (qword *)((long)&MACH_HEADER.cpusubtype + 3);
    func_0x004fe3e8();
  }
  if ((uVar2 >> 4 & 1) != 0) {
    param_2 = *(qword **)(unaff_x20 + 0x88);
    param_3 = (ulong)*(dword *)((long)param_2 + 0x14);
    param_4 = (qword *)&MACH_HEADER.filetype;
    func_0x004fe3e8();
  }
  uVar3 = *(uint *)(unaff_x20 + 0xc0);
  pqVar4 = (qword *)(ulong)uVar3;
  if (uVar3 == 0xd) {
    lVar5 = 0x18;
  }
  else {
    if (uVar3 != 0xe) goto LAB_004f7e88;
    lVar5 = 0x14;
  }
  param_2 = *(qword **)(unaff_x20 + 0xb8);
  param_3 = (ulong)*(uint *)((long)param_2 + lVar5);
  func_0x004fe3e8();
  param_4 = pqVar4;
LAB_004f7e88:
  iVar6 = *(int *)(unaff_x20 + 0x50);
  while (iVar6 != 0) {
    func_0x004fe6fc();
    param_3 = (ulong)*(dword *)((long)param_2 + 0x14);
    pqVar4 = (qword *)((long)&MACH_HEADER.filetype + 3);
    func_0x004fe3e8();
    func_0x004fe638();
  }
  if ((uVar2 >> 5 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x90) + 0x10);
    pqVar4 = (qword *)&MACH_HEADER.ncmds;
    func_0x004fe3e8();
    param_4 = pqVar4;
  }
  if (*(int *)(unaff_x20 + 0xb0) != 0) {
    func_0x004fe1a4();
    param_4 = &section_00000068.size;
    func_0x00487cbc(0x90,pqVar4);
    func_0x004fe214();
  }
  if ((uVar2 >> 6 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x98) + 0x18);
    param_4 = (qword *)((long)&MACH_HEADER.ncmds + 3);
    func_0x004fe3e8();
  }
  if ((uVar2 >> 7 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0xa0) + 0x14);
    param_4 = (qword *)&MACH_HEADER.sizeofcmds;
    func_0x004fe3e8();
  }
  if (*(int *)(unaff_x20 + 0xc0) == 0x15) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0xb8) + 0x28);
    param_4 = (qword *)((long)&MACH_HEADER.sizeofcmds + 1);
    func_0x004fe3e8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe404();
    if ((long)param_3 < 0) {
      lVar5 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    else {
      lVar5 = extraout_x8_00 + 8;
    }
    if ((long)(*unaff_x19 - (long)param_4) < (long)(int)param_3) {
      while( true ) {
        iVar7 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar6 = (int)param_3;
        uVar2 = iVar6 - iVar7;
        param_3 = (ulong)uVar2;
        if (uVar2 == 0 || iVar6 < iVar7) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (qword *)((long)param_4 + (long)iVar6);
    }
    _memcpy(param_4,lVar5,param_3 & 0xffffffff);
    return (qword *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 004f81a4; end: 004f81db;  */

long FUN_004f81a4(long param_1)

{
  long extraout_x8;
  
  FUN_004f64e0();
  FUN_004fe0f0();
  return param_1 + extraout_x8;
}



/* Entry: 004f81dc; end: 004f81df;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_004f81dc(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  long lVar5;
  long extraout_x8;
  long lVar6;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x004fe220();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004fe644();
  }
  FUN_004f8508(unaff_x21 + 3,unaff_x20 + 0x18);
  func_0x004f8518(unaff_x21 + 6,unaff_x20 + 0x30);
  puVar4 = unaff_x21 + 9;
  lVar5 = unaff_x20 + 0x48;
  func_0x004eed60();
  func_0x004fe50c(*(undefined8 *)(unaff_x20 + 0x60));
  lVar6 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar6 = *(long *)(lVar5 + 8);
  }
  if (lVar6 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x004fe500();
    }
    puVar4 = unaff_x21 + 0xc;
    func_0x00532e08();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0xd];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        FUN_004fd4b4();
        unaff_x21[0xd] = (ulong)puVar4;
      }
      else {
        FUN_004f8528();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0xe];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        FUN_004fd4e8();
        unaff_x21[0xe] = (ulong)puVar4;
      }
      else {
        func_0x004f65b4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0xf];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        FUN_004efbac();
        unaff_x21[0xf] = (ulong)puVar4;
      }
      else {
        FUN_004f6874();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0x10];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        func_0x004fd540();
        unaff_x21[0x10] = (ulong)puVar4;
      }
      else {
        FUN_004f6b24();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0x11];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        func_0x004fd5e0();
        unaff_x21[0x11] = (ulong)puVar4;
      }
      else {
        FUN_004f7210();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0x12];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        FUN_004fd650();
        unaff_x21[0x12] = (ulong)puVar4;
      }
      else {
        FUN_004f86f4();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0x13];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        func_0x004fd6a0();
        unaff_x21[0x13] = (ulong)puVar4;
      }
      else {
        FUN_004f7644();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0x14];
      if (puVar4 == (ulong *)0x0) {
        func_0x004fd714();
        unaff_x21[0x14] = (ulong)unaff_x22;
        puVar4 = unaff_x22;
      }
      else {
        func_0x004f8700();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0xa8) != 0) {
    *(int *)(unaff_x21 + 0x15) = *(int *)(unaff_x20 + 0xa8);
  }
  if (*(int *)(unaff_x20 + 0xac) != 0) {
    *(int *)((long)unaff_x21 + 0xac) = *(int *)(unaff_x20 + 0xac);
  }
  if (*(int *)(unaff_x20 + 0xb0) != 0) {
    *(int *)(unaff_x21 + 0x16) = *(int *)(unaff_x20 + 0xb0);
  }
  *(uint *)(unaff_x21 + 2) = (uint)unaff_x21[2] | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0xc0);
  if (iVar2 == 0) goto LAB_004f84ec;
  iVar3 = (int)unaff_x21[0x18];
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      puVar4 = unaff_x21;
      FUN_004f770c();
    }
    *(int *)(unaff_x21 + 0x18) = iVar2;
  }
  if (iVar2 == 0x15) {
    if (iVar3 == 0x15) {
      func_0x004fe5f4();
      FUN_004f881c();
      goto LAB_004f84ec;
    }
    func_0x004fe8ac();
    FUN_004fd8ac();
  }
  else if (iVar2 == 0xd) {
    if (iVar3 == 0xd) {
      func_0x004fe5f4();
      func_0x004f87d8();
      goto LAB_004f84ec;
    }
    func_0x004fe8ac();
    FUN_004fd7fc();
  }
  else if (iVar2 == 0xe) {
    if (iVar3 == 0xe) {
      func_0x004fe5f4();
      func_0x004f8800();
      goto LAB_004f84ec;
    }
    func_0x004fe8ac();
    FUN_004fd858();
  }
  else {
    if (iVar2 != 0xb) goto LAB_004f84ec;
    if (iVar3 == 0xb) {
      func_0x004fe5f4();
      func_0x004f8768();
      goto LAB_004f84ec;
    }
    func_0x004fe8ac();
    func_0x004fd784();
  }
  unaff_x21[0x17] = (ulong)puVar4;
LAB_004f84ec:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe260();
    if ((*puVar4 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004f81e0; end: 004f8507;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_004f81e0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  long lVar5;
  long extraout_x8;
  long lVar6;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x004fe220();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004fe644();
  }
  FUN_004f8508(unaff_x21 + 3,unaff_x20 + 0x18);
  func_0x004f8518(unaff_x21 + 6,unaff_x20 + 0x30);
  puVar4 = unaff_x21 + 9;
  lVar5 = unaff_x20 + 0x48;
  func_0x004eed60();
  func_0x004fe50c(*(undefined8 *)(unaff_x20 + 0x60));
  lVar6 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar6 = *(long *)(lVar5 + 8);
  }
  if (lVar6 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x004fe500();
    }
    puVar4 = unaff_x21 + 0xc;
    func_0x00532e08();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0xd];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        FUN_004fd4b4();
        unaff_x21[0xd] = (ulong)puVar4;
      }
      else {
        FUN_004f8528();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0xe];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        FUN_004fd4e8();
        unaff_x21[0xe] = (ulong)puVar4;
      }
      else {
        func_0x004f65b4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0xf];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        FUN_004efbac();
        unaff_x21[0xf] = (ulong)puVar4;
      }
      else {
        FUN_004f6874();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0x10];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        func_0x004fd540();
        unaff_x21[0x10] = (ulong)puVar4;
      }
      else {
        FUN_004f6b24();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0x11];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        func_0x004fd5e0();
        unaff_x21[0x11] = (ulong)puVar4;
      }
      else {
        FUN_004f7210();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0x12];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        FUN_004fd650();
        unaff_x21[0x12] = (ulong)puVar4;
      }
      else {
        FUN_004f86f4();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0x13];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        func_0x004fd6a0();
        unaff_x21[0x13] = (ulong)puVar4;
      }
      else {
        FUN_004f7644();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0x14];
      if (puVar4 == (ulong *)0x0) {
        func_0x004fd714();
        unaff_x21[0x14] = (ulong)unaff_x22;
        puVar4 = unaff_x22;
      }
      else {
        func_0x004f8700();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0xa8) != 0) {
    *(int *)(unaff_x21 + 0x15) = *(int *)(unaff_x20 + 0xa8);
  }
  if (*(int *)(unaff_x20 + 0xac) != 0) {
    *(int *)((long)unaff_x21 + 0xac) = *(int *)(unaff_x20 + 0xac);
  }
  if (*(int *)(unaff_x20 + 0xb0) != 0) {
    *(int *)(unaff_x21 + 0x16) = *(int *)(unaff_x20 + 0xb0);
  }
  *(uint *)(unaff_x21 + 2) = (uint)unaff_x21[2] | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0xc0);
  if (iVar2 == 0) goto LAB_004f84ec;
  iVar3 = (int)unaff_x21[0x18];
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      puVar4 = unaff_x21;
      FUN_004f770c();
    }
    *(int *)(unaff_x21 + 0x18) = iVar2;
  }
  if (iVar2 == 0x15) {
    if (iVar3 == 0x15) {
      func_0x004fe5f4();
      FUN_004f881c();
      goto LAB_004f84ec;
    }
    func_0x004fe8ac();
    FUN_004fd8ac();
  }
  else if (iVar2 == 0xd) {
    if (iVar3 == 0xd) {
      func_0x004fe5f4();
      func_0x004f87d8();
      goto LAB_004f84ec;
    }
    func_0x004fe8ac();
    FUN_004fd7fc();
  }
  else if (iVar2 == 0xe) {
    if (iVar3 == 0xe) {
      func_0x004fe5f4();
      func_0x004f8800();
      goto LAB_004f84ec;
    }
    func_0x004fe8ac();
    FUN_004fd858();
  }
  else {
    if (iVar2 != 0xb) goto LAB_004f84ec;
    if (iVar3 == 0xb) {
      func_0x004fe5f4();
      func_0x004f8768();
      goto LAB_004f84ec;
    }
    func_0x004fe8ac();
    func_0x004fd784();
  }
  unaff_x21[0x17] = (ulong)puVar4;
LAB_004f84ec:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe260();
    if ((*puVar4 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004f8508; end: 004f8527;  */

void FUN_004f8508(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  FUN_0054d5a8();
  plVar2 = param_1;
  func_0x0054d67c();
  plVar3 = (long *)*unaff_x25;
  func_0x0054d6a8();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x0054d6b0();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x0054d694();
    param_1 = param_1 + 1;
  }
  func_0x0054d60c();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 004f8528; end: 004f86f3;  */

void FUN_004f8528(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x004fe220();
  if ((unaff_x22 & 1) != 0) {
    func_0x004fe644();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    func_0x004fe7b8();
    if (!(bool)in_ZR) {
      if (unaff_w24 != 0) {
        param_1 = unaff_x21;
        FUN_004f90f0();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x0068947c();
        goto LAB_004f86d8;
      }
      func_0x004fe460();
      FUN_004f4f08();
      break;
    case 2:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004fe8e8();
        func_0x004f9530();
        goto LAB_004f86d8;
      }
      func_0x004fe460();
      FUN_004fd93c();
      break;
    case 3:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004f9598();
        goto LAB_004f86d8;
      }
      func_0x004fe460();
      FUN_004fd98c();
      break;
    case 4:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004f965c();
        goto LAB_004f86d8;
      }
      func_0x004fe460();
      func_0x004fda30();
      break;
    case 5:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004f96c4();
        goto LAB_004f86d8;
      }
      func_0x004fe460();
      func_0x004fda80();
      break;
    case 6:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004f9788();
        goto LAB_004f86d8;
      }
      func_0x004fe460();
      func_0x004fdb10();
      break;
    case 7:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004f97f0();
        goto LAB_004f86d8;
      }
      func_0x004fe460();
      func_0x004fdb60();
      break;
    default:
      goto LAB_004f86d8;
    }
    unaff_x21[2] = (ulong)param_1;
  }
LAB_004f86d8:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe260();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004f86f4; end: 004f86ff;  */

void FUN_004f86f4(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004f8700; end: 004f87d7;  */

void FUN_004f8700(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004fe250();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x004fe690();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004fe684();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x004fe7f0();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x004fe2cc();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004fe260();
    if ((*puVar1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004f87d8; end: 004f881b;  */

void FUN_004f87d8(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004f881c; end: 004f8917;  */

void FUN_004f881c(ulong *param_1)

{
  long unaff_x20;
  
  func_0x004fe368();
  FUN_004dbabc();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe31c();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004f8918; end: 004f8923;  */

undefined1  [16] FUN_004f8918(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  puVar1 = param_1 + 0x4c;
  puVar3 = param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    uVar2 = *param_1;
    *param_1 = *puVar3;
    *puVar3 = uVar2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 004f8924; end: 004f8947;  */

undefined8 FUN_004f8924(undefined8 param_1)

{
  func_0x004fe3d0();
  return param_1;
}



/* Entry: 004f8948; end: 004f894b;  */

undefined8 FUN_004f8948(undefined8 param_1)

{
  func_0x004fe3d0();
  return param_1;
}



/* Entry: 004f894c; end: 004f895f;  */

void FUN_004f894c(void)

{
  FUN_004f8924();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f8960; end: 004f89cb;  */

undefined ** FUN_004f8960(void)

{
  return &PTR_DAT_009f7918;
}



/* Entry: 004f89cc; end: 004f89ef;  */

undefined8 FUN_004f89cc(undefined8 param_1)

{
  func_0x004fe3d0();
  return param_1;
}



/* Entry: 004f89f0; end: 004f8a03;  */

void FUN_004f89f0(void)

{
  FUN_004f89cc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f8a04; end: 004f8a23;  */

undefined ** FUN_004f8a04(void)

{
  return &PTR_DAT_009f7968;
}



/* Entry: 004f8a24; end: 004f8aa3;  */

long * FUN_004f8a24(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004fe194();
  if ((int)param_1[2] != 0) {
    func_0x004fe1a4();
    func_0x004fe270();
    func_0x004fe214();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x004fe1a4();
    func_0x004fe588();
    func_0x004fe214();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe404();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 004f8aa4; end: 004f8b17;  */

long FUN_004f8aa4(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x18) = (int)lVar1;
  return lVar1;
}



/* Entry: 004f8b18; end: 004f8b3b;  */

undefined8 FUN_004f8b18(undefined8 param_1)

{
  func_0x004fe3d0();
  return param_1;
}



/* Entry: 004f8b3c; end: 004f8b4f;  */

void FUN_004f8b3c(void)

{
  FUN_004f8b18();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f8b50; end: 004f8b6f;  */

undefined ** FUN_004f8b50(void)

{
  return &PTR_DAT_009f79b0;
}



/* Entry: 004f8b70; end: 004f8bcf;  */

long * FUN_004f8b70(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004fe194();
  if ((int)param_1[2] != 0) {
    func_0x004fe1a4();
    func_0x004fe270();
    func_0x004fe214();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x004fe404();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x0054f690();
      param_4 = unaff_x19;
      func_0x0054ed58();
    }
    func_0x0054f690();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 004f8bd0; end: 004f8c03;  */

long FUN_004f8bd0(long param_1)

{
  long extraout_x8;
  long lVar1;
  ulong uVar2;
  
  func_0x004fe43c();
  lVar1 = extraout_x8;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 004f8c04; end: 004f8c2f;  */

long FUN_004f8c04(long param_1)

{
  func_0x004fe3d0();
  FUN_004ddab4(param_1 + 0x10);
  return param_1;
}



/* Entry: 004f8c30; end: 004f8c43;  */

void FUN_004f8c30(void)

{
  FUN_004f8c04();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f8c44; end: 004f8c4f;  */

undefined ** FUN_004f8c44(void)

{
  return &PTR_DAT_009f79f8;
}


