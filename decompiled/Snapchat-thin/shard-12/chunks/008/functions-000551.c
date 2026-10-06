/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1098df558; end: 1098df55b;  */

undefined8 FUN_1098df558(undefined8 param_1)

{
  func_0x0001098e1db0();
  return param_1;
}



/* Entry: 1098df55c; end: 1098df56f;  */

void FUN_1098df55c(void)

{
  FUN_1098df534();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098df570; end: 1098df593;  */

undefined ** FUN_1098df570(void)

{
  return &PTR_DAT_110b1c308;
}



/* Entry: 1098df594; end: 1098df5ff;  */

long * FUN_1098df594(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001098e1c64();
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x0001098e1bc8();
    param_4 = (long *)0x58;
    func_0x000107c280a8(0x58,param_1);
    func_0x0001098e1c10();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001098e1dc0();
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
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 1098df600; end: 1098df653;  */

ulong FUN_1098df600(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x14) = (int)uVar1;
  return uVar1;
}



/* Entry: 1098df654; end: 1098df67b;  */

undefined8 FUN_1098df654(undefined8 param_1)

{
  func_0x0001098e1db0();
  func_0x0001098e1e28();
  return param_1;
}



/* Entry: 1098df67c; end: 1098df67f;  */

undefined8 FUN_1098df67c(undefined8 param_1)

{
  func_0x0001098e1db0();
  func_0x0001098e1e28();
  return param_1;
}



/* Entry: 1098df680; end: 1098df693;  */

void FUN_1098df680(void)

{
  FUN_1098df654();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098df694; end: 1098df69f;  */

undefined ** FUN_1098df694(void)

{
  return &PTR_DAT_110b1c358;
}



/* Entry: 1098df6a0; end: 1098df6d3;  */

void FUN_1098df6a0(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0001098e1f1c();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001098e1e08();
  }
  func_0x0001098e1e78();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1098df6d4; end: 1098df73f;  */

long * FUN_1098df6d4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001098e1c64();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x0001098e1bc8();
    func_0x0001098e1d30();
    func_0x0001098e1c10();
    param_4 = param_1;
  }
  if ((uVar1 & 1) != 0) {
    func_0x0001098e1c38();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098e1dc0();
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
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 1098df740; end: 1098df7a7;  */

void FUN_1098df740(int param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  uint unaff_w20;
  
  func_0x0001098e1d60();
  if ((bool)in_ZR) {
    param_1 = 0;
  }
  else {
    if ((unaff_w20 & 1) == 0) {
      param_1 = 0;
    }
    else {
      func_0x0001098e1cec();
      param_1 = param_1 + 1;
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x0001098e1c1c(*(undefined8 *)(unaff_x19 + 0x20));
    }
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001098e1e9c();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 1098df7a8; end: 1098df7f7;  */

void FUN_1098df7a8(ulong *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  uint unaff_w21;
  
  func_0x0001098e1d10();
  if (!(bool)in_ZR) {
    if ((unaff_w21 & 1) != 0) {
      func_0x0001098e1c4c();
      if ((param_3 & 1) != 0) {
        func_0x0001098e1e88();
      }
      func_0x0001098e1d04();
    }
    if ((unaff_w21 >> 1 & 1) != 0) {
      func_0x0001098e1fd0();
    }
  }
  func_0x0001098e1cb0();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001098e1cc4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1098df7f8; end: 1098df81f;  */

undefined8 FUN_1098df7f8(undefined8 param_1)

{
  func_0x0001098e1db0();
  func_0x0001098e1e28();
  return param_1;
}



/* Entry: 1098df820; end: 1098df823;  */

undefined8 FUN_1098df820(undefined8 param_1)

{
  func_0x0001098e1db0();
  func_0x0001098e1e28();
  return param_1;
}



/* Entry: 1098df824; end: 1098df837;  */

void FUN_1098df824(void)

{
  FUN_1098df7f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098df838; end: 1098df843;  */

undefined ** FUN_1098df838(void)

{
  return &PTR_DAT_110b1c3a0;
}



/* Entry: 1098df844; end: 1098df877;  */

void FUN_1098df844(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0001098e1f1c();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001098e1e08();
  }
  func_0x0001098e1e78();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1098df878; end: 1098df8e3;  */

long * FUN_1098df878(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001098e1c64();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x0001098e1bc8();
    func_0x0001098e1d30();
    func_0x0001098e1c10();
    param_4 = param_1;
  }
  if ((uVar1 & 1) != 0) {
    func_0x0001098e1c38();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098e1dc0();
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
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 1098df8e4; end: 1098df94b;  */

void FUN_1098df8e4(int param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  uint unaff_w20;
  
  func_0x0001098e1d60();
  if ((bool)in_ZR) {
    param_1 = 0;
  }
  else {
    if ((unaff_w20 & 1) == 0) {
      param_1 = 0;
    }
    else {
      func_0x0001098e1cec();
      param_1 = param_1 + 1;
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x0001098e1c1c(*(undefined8 *)(unaff_x19 + 0x20));
    }
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001098e1e9c();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 1098df94c; end: 1098df99b;  */

void FUN_1098df94c(ulong *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  uint unaff_w21;
  
  func_0x0001098e1d10();
  if (!(bool)in_ZR) {
    if ((unaff_w21 & 1) != 0) {
      func_0x0001098e1c4c();
      if ((param_3 & 1) != 0) {
        func_0x0001098e1e88();
      }
      func_0x0001098e1d04();
    }
    if ((unaff_w21 >> 1 & 1) != 0) {
      func_0x0001098e1fd0();
    }
  }
  func_0x0001098e1cb0();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001098e1cc4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1098df99c; end: 1098df9c7;  */

undefined8 * FUN_1098df99c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110b1c008;
  param_1[1] = param_2;
  FUN_1098df9c8();
  return param_1;
}



/* Entry: 1098df9c8; end: 1098df9e7;  */

void FUN_1098df9c8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = param_2;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = param_2;
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}



/* Entry: 1098df9e8; end: 1098dfa37;  */

long FUN_1098df9e8(long param_1)

{
  func_0x0001098e1db0();
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x000107c303ac();
  }
  FUN_1098e1188(param_1 + 0x40);
  FUN_1098e11b0(param_1 + 0x28);
  FUN_1098e11d8(param_1 + 0x10);
  return param_1;
}



/* Entry: 1098dfa38; end: 1098dfa3b;  */

long FUN_1098dfa38(long param_1)

{
  func_0x0001098e1db0();
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x000107c303ac();
  }
  FUN_1098e1188(param_1 + 0x40);
  FUN_1098e11b0(param_1 + 0x28);
  FUN_1098e11d8(param_1 + 0x10);
  return param_1;
}



/* Entry: 1098dfa3c; end: 1098dfa4f;  */

void FUN_1098dfa3c(void)

{
  FUN_1098df9e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098dfa50; end: 1098dfa5b;  */

undefined ** FUN_1098dfa50(void)

{
  return &PTR_DAT_110b1c3e0;
}



/* Entry: 1098dfa5c; end: 1098dfacb;  */

void FUN_1098dfa5c(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001098e1f58();
  if (in_NG == in_OV) {
    func_0x0001098e1fb4();
  }
  if (0 < *(int *)(unaff_x19 + 0x30)) {
    func_0x0001053936e4(unaff_x19 + 0x28);
  }
  if (0 < *(int *)(unaff_x19 + 0x48)) {
    func_0x0001053936e4(unaff_x19 + 0x40);
  }
  if (0 < *(int *)(unaff_x19 + 0x60)) {
    func_0x0001053936e4(unaff_x19 + 0x58);
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1098dfacc; end: 1098dfc93;  */

long * FUN_1098dfacc(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4)

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
  
  func_0x0001098e1c64();
  func_0x0001098e1f48();
  while (unaff_w22 != unaff_w21) {
    func_0x0001098e1b90();
    func_0x0001098e1da8(1);
    func_0x0001098e1e40();
  }
  iVar3 = *(int *)(unaff_x20 + 0x30);
  while (iVar3 != 0) {
    func_0x0001098e1b90();
    func_0x0001098e1da8(2);
    func_0x0001098e1e40();
  }
  iVar3 = *(int *)(unaff_x20 + 0x48);
  while (iVar3 != 0) {
    func_0x0001098e1b90();
    func_0x0001098e1da8(3);
    func_0x0001098e1e40();
  }
  iVar3 = *(int *)(unaff_x20 + 0x60);
  while (iVar3 != 0) {
    func_0x0001098e1b90();
    func_0x0001098e1da8(0x1b);
    func_0x0001098e1e40();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098e1dc0();
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
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 1098dfc94; end: 1098dfc97;  */

void FUN_1098dfc94(long param_1,long param_2)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001098e1df0();
  FUN_1098dfcf4(param_1 + 0x10,param_2 + 0x10);
  func_0x0001098dfd04(unaff_x19 + 0x28,unaff_x20 + 0x28);
  func_0x0001098dfd14(unaff_x19 + 0x40,unaff_x20 + 0x40);
  puVar1 = (ulong *)(unaff_x19 + 0x58);
  func_0x0001098dfd24();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098e1cc4();
    if ((*puVar1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1098dfc98; end: 1098dfcf3;  */

void FUN_1098dfc98(long param_1,long param_2)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001098e1df0();
  FUN_1098dfcf4(param_1 + 0x10,param_2 + 0x10);
  func_0x0001098dfd04(unaff_x19 + 0x28,unaff_x20 + 0x28);
  func_0x0001098dfd14(unaff_x19 + 0x40,unaff_x20 + 0x40);
  puVar1 = (ulong *)(unaff_x19 + 0x58);
  func_0x0001098dfd24();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098e1cc4();
    if ((*puVar1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1098dfcf4; end: 1098dfd33;  */

void FUN_1098dfcf4(long *param_1,long param_2)

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
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 1098dfd34; end: 1098dfd67;  */

long FUN_1098dfd34(long param_1)

{
  func_0x0001098e1db0();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1098df534();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1098dfd68; end: 1098dfd6b;  */

long FUN_1098dfd68(long param_1)

{
  func_0x0001098e1db0();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1098df534();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1098dfd6c; end: 1098dfd7f;  */

void FUN_1098dfd6c(void)

{
  FUN_1098dfd34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098dfd80; end: 1098dfd8b;  */

undefined ** FUN_1098dfd80(void)

{
  return &PTR_DAT_110b1c428;
}



/* Entry: 1098dfd8c; end: 1098dfdcb;  */

void FUN_1098dfd8c(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001098e1f1c();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001098df57c(*(undefined8 *)(unaff_x19 + 0x18));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1098dfdcc; end: 1098dfe4f;  */

long * FUN_1098dfdcc(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001098e1c64();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x14);
    param_1 = (long *)0xb;
    func_0x0001098e1da8();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x0001098e1bc8();
    param_4 = (long *)0x1d0;
    func_0x000107c280a8(0x1d0,param_1);
    func_0x0001098e1d24();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098e1dc0();
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
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 1098dfe50; end: 1098dfedb;  */

void FUN_1098dfe50(void)

{
  undefined1 in_ZR;
  int iVar1;
  int extraout_w8;
  long extraout_x8;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  uint unaff_w20;
  
  func_0x0001098e1d60();
  if ((bool)in_ZR) {
    iVar1 = 0;
  }
  else {
    if ((unaff_w20 & 1) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x18);
      FUN_1098df600();
      func_0x0001098e1bb0();
      iVar1 = iVar1 + extraout_w8 + 1;
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      iVar1 = iVar1 + ((int)LZCOUNT(*(undefined4 *)(unaff_x19 + 0x20)) * -9 + 0x160U >> 6) + 2;
    }
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001098e1e9c();
    lVar2 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 1098dfedc; end: 1098dfedf;  */

void FUN_1098dfedc(void)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001098e1e30();
  uVar2 = *(ulong *)(unaff_x19 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x18) == 0) {
        FUN_1098e167c();
        *(ulong *)(unaff_x21 + 0x18) = uVar2;
      }
      else {
        FUN_1098df504(*(long *)(unaff_x21 + 0x18));
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x20) = *(undefined4 *)(unaff_x20 + 0x20);
    }
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x0001098e1de4();
  if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1098dfee0; end: 1098dff6f;  */

void FUN_1098dfee0(void)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001098e1e30();
  uVar2 = *(ulong *)(unaff_x19 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x18) == 0) {
        FUN_1098e167c();
        *(ulong *)(unaff_x21 + 0x18) = uVar2;
      }
      else {
        FUN_1098df504(*(long *)(unaff_x21 + 0x18));
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x20) = *(undefined4 *)(unaff_x20 + 0x20);
    }
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x0001098e1de4();
  if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1098dff70; end: 1098dff97;  */

undefined8 FUN_1098dff70(undefined8 param_1)

{
  func_0x0001098e1db0();
  func_0x0001098e1e28();
  return param_1;
}



/* Entry: 1098dff98; end: 1098dff9b;  */

undefined8 FUN_1098dff98(undefined8 param_1)

{
  func_0x0001098e1db0();
  func_0x0001098e1e28();
  return param_1;
}



/* Entry: 1098dff9c; end: 1098dffaf;  */

void FUN_1098dff9c(void)

{
  FUN_1098dff70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098dffb0; end: 1098dffbb;  */

undefined ** FUN_1098dffb0(void)

{
  return &PTR_DAT_110b1c478;
}



/* Entry: 1098dffbc; end: 1098dfff7;  */

void FUN_1098dffbc(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001098e1f1c();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001098e1e08();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1098dfff8; end: 1098e0067;  */

long * FUN_1098dfff8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001098e1c64();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x0001098e1edc();
    param_4 = param_1;
  }
  if ((uVar1 & 1) != 0) {
    func_0x0001098e1dfc(*(undefined8 *)(unaff_x20 + 0x18));
    func_0x000107c280a0();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098e1dc0();
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
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 1098e0068; end: 1098e00cf;  */

void FUN_1098e0068(int param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  uint unaff_w20;
  
  func_0x0001098e1d60();
  if ((bool)in_ZR) {
    param_1 = 0;
  }
  else {
    if ((unaff_w20 & 1) == 0) {
      param_1 = 0;
    }
    else {
      func_0x0001098e1cec();
      param_1 = param_1 + 1;
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x0001098e1c1c((long)*(int *)(unaff_x19 + 0x20));
    }
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001098e1e9c();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 1098e00d0; end: 1098e00d3;  */

void FUN_1098e00d0(ulong *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  
  func_0x0001098e1d10();
  if (!(bool)in_ZR) {
    if ((unaff_w21 & 1) != 0) {
      func_0x0001098e1c4c();
      if ((param_3 & 1) != 0) {
        func_0x0001098e1e88();
      }
      func_0x0001098e1d04();
    }
    if ((unaff_w21 >> 1 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x20) = *(undefined4 *)(unaff_x20 + 0x20);
    }
  }
  func_0x0001098e1cb0();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001098e1cc4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1098e00d4; end: 1098e0127;  */

void FUN_1098e00d4(ulong *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  
  func_0x0001098e1d10();
  if (!(bool)in_ZR) {
    if ((unaff_w21 & 1) != 0) {
      func_0x0001098e1c4c();
      if ((param_3 & 1) != 0) {
        func_0x0001098e1e88();
      }
      func_0x0001098e1d04();
    }
    if ((unaff_w21 >> 1 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x20) = *(undefined4 *)(unaff_x20 + 0x20);
    }
  }
  func_0x0001098e1cb0();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001098e1cc4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1098e0128; end: 1098e014f;  */

undefined8 FUN_1098e0128(undefined8 param_1)

{
  func_0x0001098e1db0();
  func_0x0001098e1e28();
  return param_1;
}



/* Entry: 1098e0150; end: 1098e0153;  */

undefined8 FUN_1098e0150(undefined8 param_1)

{
  func_0x0001098e1db0();
  func_0x0001098e1e28();
  return param_1;
}



/* Entry: 1098e0154; end: 1098e0167;  */

void FUN_1098e0154(void)

{
  FUN_1098e0128();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098e0168; end: 1098e0173;  */

undefined ** FUN_1098e0168(void)

{
  return &PTR_DAT_110b1c4c0;
}



/* Entry: 1098e0174; end: 1098e01bb;  */

void FUN_1098e0174(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    func_0x0001098e1e08();
  }
  if ((uVar1 & 6) != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 1098e01bc; end: 1098e024f;  */

long * FUN_1098e01bc(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001098e1c64();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x0001098e1edc();
    param_4 = param_1;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_1 = unaff_x19;
    func_0x00010598f43c();
    param_3 = param_4;
    param_4 = param_1;
  }
  if ((uVar1 & 1) != 0) {
    func_0x0001098e1dfc(*(undefined8 *)(unaff_x20 + 0x18));
    func_0x000107c280a0();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001098e1dc0();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if ((long)(int)param_3 <= *unaff_x19 - (long)param_4) {
    _memcpy(param_4,lVar2,(ulong)param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  while( true ) {
    iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
    iVar3 = (int)param_3;
    uVar1 = iVar3 - iVar4;
    param_3 = (long *)(ulong)uVar1;
    if (uVar1 == 0 || iVar3 < iVar4) break;
    func_0x00010b4d5738();
    param_4 = unaff_x19;
    func_0x000107c303e4();
  }
  func_0x00010b4d5738();
  return (long *)((long)param_4 + (long)iVar3);
}



/* Entry: 1098e0250; end: 1098e02e3;  */

void FUN_1098e0250(long param_1)

{
  uint uVar1;
  int iVar2;
  int extraout_w8;
  int extraout_w8_00;
  long extraout_x8;
  long lVar3;
  int extraout_w9;
  int extraout_w9_00;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) == 0) {
    iVar2 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      iVar2 = 0;
    }
    else {
      lVar3 = param_1;
      func_0x0001098e1cec();
      iVar2 = (int)lVar3 + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0001098e1f98(0xfffffff7);
      iVar2 = ((uint)(extraout_w10 + extraout_w9 * extraout_w8) >> 6) + iVar2;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x0001098e1f98();
      iVar2 = ((uint)(extraout_w10_00 + extraout_w9_00 * extraout_w8_00) >> 6) + iVar2;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001098e1e9c();
    lVar3 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 1098e02e4; end: 1098e02e7;  */

void FUN_1098e02e4(ulong *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001098e1df0();
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001098e1c4c();
      if ((param_3 & 1) != 0) {
        func_0x0001098e1e88();
      }
      func_0x0001098e1d04();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x20) = *(undefined4 *)(unaff_x20 + 0x20);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(unaff_x20 + 0x24);
    }
  }
  func_0x0001098e1cb0();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001098e1cc4();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1098e02e8; end: 1098e035b;  */

void FUN_1098e02e8(ulong *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001098e1df0();
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001098e1c4c();
      if ((param_3 & 1) != 0) {
        func_0x0001098e1e88();
      }
      func_0x0001098e1d04();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x20) = *(undefined4 *)(unaff_x20 + 0x20);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(unaff_x20 + 0x24);
    }
  }
  func_0x0001098e1cb0();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001098e1cc4();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1098e035c; end: 1098e036b;  */

void FUN_1098e035c(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1098e036c; end: 1098e038f;  */

undefined8 FUN_1098e036c(undefined8 param_1)

{
  func_0x0001098e1db0();
  return param_1;
}



/* Entry: 1098e0390; end: 1098e0393;  */

undefined8 FUN_1098e0390(undefined8 param_1)

{
  func_0x0001098e1db0();
  return param_1;
}



/* Entry: 1098e0394; end: 1098e03a7;  */

void FUN_1098e0394(void)

{
  FUN_1098e036c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098e03a8; end: 1098e0433;  */

undefined ** FUN_1098e03a8(void)

{
  return &PTR_DAT_110b1c508;
}



/* Entry: 1098e0434; end: 1098e045f;  */

undefined8 FUN_1098e0434(undefined8 param_1)

{
  func_0x0001098e1db0();
  FUN_1098e0460(param_1);
  return param_1;
}



/* Entry: 1098e0460; end: 1098e04af;  */

void FUN_1098e0460(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1098dff70();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_1098e0128();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_1098e036c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098e04b0; end: 1098e04b3;  */

undefined8 FUN_1098e04b0(undefined8 param_1)

{
  func_0x0001098e1db0();
  FUN_1098e0460(param_1);
  return param_1;
}



/* Entry: 1098e04b4; end: 1098e04c7;  */

void FUN_1098e04b4(void)

{
  FUN_1098e0434();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098e04c8; end: 1098e04d3;  */

undefined ** FUN_1098e04c8(void)

{
  return &PTR_DAT_110b1c550;
}



/* Entry: 1098e04d4; end: 1098e0557;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1098e04d4(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001098e1e08();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1098dffbc(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_1098e0174(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x0001098e03b4(*(undefined8 *)(param_1 + 0x30));
    }
  }
  if ((uVar1 & 0x30) != 0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1098e0558; end: 1098e072b;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_1098e0558(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001098e1c64();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 >> 4 & 1) != 0) {
    func_0x0001098e1bc8();
    func_0x0001098e1e10();
    func_0x0001098e1c10();
    param_4 = param_1;
  }
  if ((uVar1 & 1) != 0) {
    func_0x0001098e1c38();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x14);
    param_1 = (long *)0x3;
    func_0x0001098e1da8();
    param_4 = param_1;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x14);
    param_1 = (long *)0x4;
    func_0x0001098e1da8();
    param_4 = param_1;
  }
  if ((uVar1 >> 5 & 1) != 0) {
    func_0x0001098e1bc8();
    param_4 = (long *)0x28;
    func_0x000107c280a8(0x28,param_1);
    func_0x0001098e1c10();
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x10);
    param_4 = (long *)0x8;
    func_0x0001098e1da8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098e1dc0();
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
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 1098e072c; end: 1098e072f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1098e072c(void)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001098e1e30();
  uVar3 = *(ulong *)(unaff_x19 + 8);
  uVar2 = uVar3;
  if ((uVar3 & 1) != 0) {
    uVar2 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | 1;
      if ((uVar3 & 1) != 0) {
        func_0x0001098e1e88();
      }
      func_0x000107c30248(unaff_x21 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x20) == 0) {
        uVar3 = uVar2;
        func_0x0001098e16e8();
        *(ulong *)(unaff_x21 + 0x20) = uVar3;
      }
      else {
        FUN_1098e00d4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x28) == 0) {
        uVar3 = uVar2;
        func_0x0001098e1738();
        *(ulong *)(unaff_x21 + 0x28) = uVar3;
      }
      else {
        FUN_1098e02e8();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x30) == 0) {
        FUN_1098e1794();
        *(ulong *)(unaff_x21 + 0x30) = uVar2;
      }
      else {
        FUN_1098e035c();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined8 *)(unaff_x21 + 0x38) = *(undefined8 *)(unaff_x20 + 0x38);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined8 *)(unaff_x21 + 0x40) = *(undefined8 *)(unaff_x20 + 0x40);
    }
  }
  func_0x0001098e1f28();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x0001098e1de4();
  if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1098e0730; end: 1098e0863;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1098e0730(void)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001098e1e30();
  uVar3 = *(ulong *)(unaff_x19 + 8);
  uVar2 = uVar3;
  if ((uVar3 & 1) != 0) {
    uVar2 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | 1;
      if ((uVar3 & 1) != 0) {
        func_0x0001098e1e88();
      }
      func_0x000107c30248(unaff_x21 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x20) == 0) {
        uVar3 = uVar2;
        func_0x0001098e16e8();
        *(ulong *)(unaff_x21 + 0x20) = uVar3;
      }
      else {
        FUN_1098e00d4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x28) == 0) {
        uVar3 = uVar2;
        func_0x0001098e1738();
        *(ulong *)(unaff_x21 + 0x28) = uVar3;
      }
      else {
        FUN_1098e02e8();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x30) == 0) {
        FUN_1098e1794();
        *(ulong *)(unaff_x21 + 0x30) = uVar2;
      }
      else {
        FUN_1098e035c();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined8 *)(unaff_x21 + 0x38) = *(undefined8 *)(unaff_x20 + 0x38);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined8 *)(unaff_x21 + 0x40) = *(undefined8 *)(unaff_x20 + 0x40);
    }
  }
  func_0x0001098e1f28();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x0001098e1de4();
  if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1098e0864; end: 1098e091f;  */

void FUN_1098e0864(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 == 0x3c) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar2 != 0) goto LAB_1098e08e4;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_1098e0434();
    }
  }
  else if (iVar1 == 0xb) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar2 != 0) goto LAB_1098e08e4;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_1098df028();
    }
  }
  else {
    if (iVar1 != 6) goto LAB_1098e08e4;
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar2 != 0) goto LAB_1098e08e4;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_1098de344();
    }
  }
  __ZdlPv();
LAB_1098e08e4:
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}



/* Entry: 1098e0920; end: 1098e097f;  */

long FUN_1098e0920(long param_1)

{
  func_0x0001098e1db0();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1098df9e8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1098dfd34();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_1098e0864(param_1);
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  return param_1;
}



/* Entry: 1098e0980; end: 1098e0983;  */

long FUN_1098e0980(long param_1)

{
  func_0x0001098e1db0();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1098df9e8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1098dfd34();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_1098e0864(param_1);
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  return param_1;
}



/* Entry: 1098e0984; end: 1098e0997;  */

void FUN_1098e0984(void)

{
  FUN_1098e0920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098e0998; end: 1098e09a3;  */

undefined ** FUN_1098e0998(void)

{
  return &PTR_DAT_110b1c598;
}



/* Entry: 1098e09a4; end: 1098e0a0b;  */

void FUN_1098e09a4(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  ulong *puVar1;
  uint unaff_w20;
  
  func_0x0001098e1d60();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      FUN_1098dfa5c(*(undefined8 *)(unaff_x19 + 0x18));
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      FUN_1098dfd8c(*(undefined8 *)(unaff_x19 + 0x20));
    }
  }
  if ((unaff_w20 & 0xc) != 0) {
    *(undefined4 *)(unaff_x19 + 0x30) = 0;
    *(undefined8 *)(unaff_x19 + 0x28) = 0;
  }
  FUN_1098e0864();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x48) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1098e0a0c; end: 1098e0c9f;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_1098e0a0c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x0001098e1c64();
  if (*(int *)((long)param_1 + 0x44) == 6) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x38) + 0x28);
    param_1 = (long *)0x6;
    func_0x0001098e1da8();
    param_4 = param_1;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  plVar2 = param_1;
  if ((uVar1 >> 2 & 1) != 0) {
    func_0x0001098e1bc8();
    plVar2 = (long *)0x40;
    func_0x000107c280a8(0x40,param_1);
    func_0x0001098e1c10();
    param_4 = plVar2;
  }
  plVar3 = plVar2;
  if (*(int *)(unaff_x20 + 0x48) == 10) {
    func_0x0001098e1bc8();
    plVar3 = (long *)0x50;
    func_0x000107c280a8(0x50,plVar2);
    func_0x0001098e1d24();
    param_4 = plVar3;
  }
  if (*(int *)(unaff_x20 + 0x44) == 0xb) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x38) + 0x14);
    plVar3 = (long *)0xb;
    func_0x0001098e1da8();
    param_4 = plVar3;
  }
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x70);
    plVar3 = (long *)0xc;
    func_0x0001098e1da8();
    param_4 = plVar3;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    func_0x0001098e1bc8();
    param_4 = (long *)0x68;
    func_0x000107c280a8(0x68,plVar3);
    func_0x0001098e1d24();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x14);
    param_4 = (long *)0x3b;
    func_0x0001098e1da8();
  }
  if (*(int *)(unaff_x20 + 0x44) == 0x3c) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x38) + 0x14);
    param_4 = (long *)0x3c;
    func_0x0001098e1da8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001098e1dc0();
  if ((long)param_3 < 0) {
    lVar4 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar4 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar5 = (int)param_3;
      uVar1 = iVar5 - iVar6;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar5 < iVar6) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar5);
  }
  _memcpy(param_4,lVar4,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 1098e0ca0; end: 1098e0e6f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1098e0ca0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar5;
  
  func_0x0001098e1e30();
  uVar5 = *(ulong *)(unaff_x19 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x18) == 0) {
        uVar4 = uVar5;
        FUN_1098e1800();
        *(ulong *)(unaff_x21 + 0x18) = uVar4;
      }
      else {
        FUN_1098dfc98();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x20) == 0) {
        uVar4 = uVar5;
        func_0x0001098e18ec();
        *(ulong *)(unaff_x21 + 0x20) = uVar4;
      }
      else {
        FUN_1098dfee0();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined8 *)(unaff_x21 + 0x28) = *(undefined8 *)(unaff_x20 + 0x28);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x30) = *(undefined4 *)(unaff_x20 + 0x30);
    }
  }
  func_0x0001098e1f28();
  iVar2 = *(int *)(unaff_x20 + 0x44);
  if (iVar2 == 0) goto LAB_1098e0e28;
  iVar3 = *(int *)(unaff_x21 + 0x44);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_1098e0864();
    }
    *(int *)(unaff_x21 + 0x44) = iVar2;
  }
  if (iVar2 == 0x3c) {
    if (iVar3 == 0x3c) {
      func_0x0001098e1f38();
      FUN_1098e0730();
      goto LAB_1098e0e28;
    }
    FUN_1098e1ad4();
  }
  else if (iVar2 == 0xb) {
    if (iVar3 == 0xb) {
      func_0x0001098e1f38();
      FUN_1098df420();
      goto LAB_1098e0e28;
    }
    FUN_1098e19c0();
  }
  else {
    if (iVar2 != 6) goto LAB_1098e0e28;
    if (iVar3 == 6) {
      func_0x0001098e1f38();
      FUN_1098de49c();
      goto LAB_1098e0e28;
    }
    func_0x0001098e1958();
  }
  *(ulong *)(unaff_x21 + 0x38) = uVar5;
LAB_1098e0e28:
  iVar2 = *(int *)(unaff_x20 + 0x48);
  if (iVar2 != 0) {
    if (*(int *)(unaff_x21 + 0x48) != iVar2) {
      *(int *)(unaff_x21 + 0x48) = iVar2;
    }
    if (iVar2 == 10) {
      *(undefined4 *)(unaff_x21 + 0x40) = *(undefined4 *)(unaff_x20 + 0x40);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x0001098e1de4();
  if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1098e0e70; end: 1098e0ec3;  */

void FUN_1098e0e70(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *unaff_x19;
  
  func_0x0001098e1df0();
  *(undefined8 *)(param_1 + 8) = param_2;
  *unaff_x19 = &PTR_FUN_110b1c0f8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x0001098e1ca4();
  }
  FUN_1098e1200(unaff_x19 + 2);
  *(undefined4 *)(unaff_x19 + 5) = 0;
  return;
}



/* Entry: 1098e0ec4; end: 1098e0eef;  */

long FUN_1098e0ec4(long param_1)

{
  func_0x0001098e1db0();
  FUN_1098e122c(param_1 + 0x10);
  return param_1;
}



/* Entry: 1098e0ef0; end: 1098e0ef3;  */

long FUN_1098e0ef0(long param_1)

{
  func_0x0001098e1db0();
  FUN_1098e122c(param_1 + 0x10);
  return param_1;
}



/* Entry: 1098e0ef4; end: 1098e0f07;  */

void FUN_1098e0ef4(void)

{
  FUN_1098e0ec4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098e0f08; end: 1098e0f13;  */

undefined ** FUN_1098e0f08(void)

{
  return &PTR_DAT_110b1c5e0;
}



/* Entry: 1098e0f14; end: 1098e0f47;  */

void FUN_1098e0f14(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001098e1f58();
  if (in_NG == in_OV) {
    func_0x0001098e1fb4();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1098e0f48; end: 1098e0fb3;  */

long * FUN_1098e0f48(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4)

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
  
  func_0x0001098e1c64();
  func_0x0001098e1f48();
  while (unaff_w22 != unaff_w21) {
    func_0x0001098e1b90();
    func_0x0001098e1da8(1);
    func_0x0001098e1e40();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098e1dc0();
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
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 1098e0fb4; end: 1098e1013;  */

long FUN_1098e0fb4(void)

{
  long lVar1;
  long extraout_x8;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x0001098e1ffc();
  func_0x0001098e1d40();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    FUN_1098e1014();
    unaff_x20 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001098e1e9c();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x28) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 1098e1014; end: 1098e102f;  */

long FUN_1098e1014(long param_1)

{
  long extraout_x8;
  
  func_0x0001098e0b74();
  func_0x0001098e1bb0();
  return param_1 + extraout_x8;
}



/* Entry: 1098e1030; end: 1098e1033;  */

void FUN_1098e1030(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  func_0x0001098e1df0();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_1098e106c();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098e1cc4();
    if ((*puVar1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1098e1034; end: 1098e106b;  */

void FUN_1098e1034(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  func_0x0001098e1df0();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_1098e106c();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098e1cc4();
    if ((*puVar1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1098e106c; end: 1098e1103;  */

void FUN_1098e106c(long *param_1,long param_2)

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
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 1098e1104; end: 1098e112b;  */

void FUN_1098e1104(void)

{
  long extraout_x8;
  
  func_0x0001098e1f10();
  if (extraout_x8 != 0) {
    func_0x0001098e1e58();
  }
  return;
}



/* Entry: 1098e112c; end: 1098e1153;  */

void FUN_1098e112c(void)

{
  long extraout_x8;
  
  func_0x0001098e1f10();
  if (extraout_x8 != 0) {
    func_0x0001098e1e58();
  }
  return;
}



/* Entry: 1098e1154; end: 1098e1187;  */

long FUN_1098e1154(long param_1)

{
  func_0x0001088f2648(param_1 + 0x30);
  FUN_1098e112c(param_1 + 0x18);
  func_0x0001088f2648(param_1 + 8);
  return param_1;
}



/* Entry: 1098e1188; end: 1098e11af;  */

void FUN_1098e1188(void)

{
  long extraout_x8;
  
  func_0x0001098e1f10();
  if (extraout_x8 != 0) {
    func_0x0001098e1e58();
  }
  return;
}



/* Entry: 1098e11b0; end: 1098e11d7;  */

void FUN_1098e11b0(void)

{
  long extraout_x8;
  
  func_0x0001098e1f10();
  if (extraout_x8 != 0) {
    func_0x0001098e1e58();
  }
  return;
}



/* Entry: 1098e11d8; end: 1098e11ff;  */

void FUN_1098e11d8(void)

{
  long extraout_x8;
  
  func_0x0001098e1f10();
  if (extraout_x8 != 0) {
    func_0x0001098e1e58();
  }
  return;
}



/* Entry: 1098e1200; end: 1098e122b;  */

undefined8 * FUN_1098e1200(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_1098e106c(param_1,param_3);
  return param_1;
}


