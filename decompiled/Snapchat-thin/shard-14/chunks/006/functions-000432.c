/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b568c5c; end: 10b568d27;  */

undefined8 * FUN_10b568c5c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x50;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x50);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110d093f0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b568f04();
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)((long)puVar1 + 0x1c) = 0;
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined4 *)((long)puVar1 + 0x24) = 0;
  puVar1[5] = param_1;
  FUN_10b56783c(puVar1 + 3,param_2 + 0x18);
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = param_1;
  func_0x00010b56784c(puVar1 + 6,param_2 + 0x30);
  if ((*(byte *)(puVar1 + 2) & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_10b568c1c(param_1,*(undefined8 *)(param_2 + 0x48));
  }
  puVar1[9] = param_1;
  return puVar1;
}



/* Entry: 10b568d28; end: 10b568dff;  */

undefined8 * FUN_10b568d28(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b569070();
  if (param_1 == 0) {
    puVar2 = (undefined8 *)0x58;
    __Znwm();
  }
  else {
    puVar2 = unaff_x20;
    FUN_10b4d80e0();
  }
  puVar2[1] = unaff_x20;
  *puVar2 = &PTR_FUN_110d09300;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b568f04();
  }
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = unaff_x20;
  FUN_10b568178(puVar2 + 2,unaff_x19 + 0x10);
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = unaff_x20;
  func_0x00010b568188(puVar2 + 5,unaff_x19 + 0x28);
  lVar3 = unaff_x19 + 0x40;
  func_0x000107c2809c();
  puVar2[8] = lVar3;
  *(undefined4 *)(puVar2 + 10) = 0;
  uVar1 = *(undefined4 *)(unaff_x19 + 0x48);
  *(undefined1 *)((long)puVar2 + 0x4c) = *(undefined1 *)(unaff_x19 + 0x4c);
  *(undefined4 *)(puVar2 + 9) = uVar1;
  return puVar2;
}



/* Entry: 10b568e00; end: 10b5690e3;  */

void FUN_10b568e00(void)

{
  return;
}



/* Entry: 10b5690e4; end: 10b56917f;  */

void FUN_10b5690e4(void)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x000107c39e18();
  func_0x000107c39e44(&PTR_FUN_110d09cc8);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b56b7f4();
  }
  func_0x00010b56b89c();
  func_0x00010b56afc0(unaff_x19 + 0x30);
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    FUN_10b56b330();
  }
  *(undefined8 *)(unaff_x19 + 0x48) = unaff_x21;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x00010b56ba14();
  }
  *(undefined8 *)(unaff_x19 + 0x50) = unaff_x21;
  *(undefined1 *)(unaff_x19 + 0x58) = *(undefined1 *)(unaff_x20 + 0x58);
  return;
}



/* Entry: 10b569180; end: 10b5691ab;  */

undefined8 FUN_10b569180(undefined8 param_1)

{
  func_0x000107c39dfc();
  FUN_10b5691ac(param_1);
  return param_1;
}



/* Entry: 10b5691ac; end: 10b5691eb;  */

long FUN_10b5691ac(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b56d784();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_10b56ac24();
  }
  __ZdlPv();
  FUN_10b56b034(param_1 + 0x30);
  FUN_10b56afe0(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 10b5691ec; end: 10b5691ef;  */

undefined8 FUN_10b5691ec(undefined8 param_1)

{
  func_0x000107c39dfc();
  FUN_10b5691ac(param_1);
  return param_1;
}



/* Entry: 10b5691f0; end: 10b569203;  */

void FUN_10b5691f0(void)

{
  FUN_10b569180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b569204; end: 10b56920f;  */

undefined ** FUN_10b569204(void)

{
  return &PTR_DAT_110d09df8;
}



/* Entry: 10b569210; end: 10b56927f;  */

void FUN_10b569210(void)

{
  uint uVar1;
  long unaff_x19;
  ulong *puVar2;
  
  func_0x00010b56b9bc();
  FUN_10b56b308();
  if (0 < *(int *)(unaff_x19 + 0x38)) {
    func_0x0001053936e4(unaff_x19 + 0x30);
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b56ca38(*(undefined8 *)(unaff_x19 + 0x48));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b569280(*(undefined8 *)(unaff_x19 + 0x50));
    }
  }
  puVar2 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x58) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b569280; end: 10b569293;  */

void FUN_10b569280(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined2 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b569294; end: 10b56946b;  */

long * FUN_10b569294(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long extraout_x8;
  long *extraout_x9;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x000107c39dd4();
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 1) != 0) {
    func_0x00010b56b7d4();
    param_4 = param_1;
  }
  iVar5 = *(int *)(unaff_x20 + 0x20);
  while (bVar3 = iVar5 == 0, !bVar3) {
    func_0x00010b56b840(*(long *)(unaff_x20 + 0x18));
    plVar1 = (long *)(unaff_x20 + 0x18);
    if (!bVar3) {
      plVar1 = extraout_x9;
    }
    param_3 = (ulong)*(uint *)(*plVar1 + 0x18);
    func_0x000107c39ddc();
    func_0x00010b56b940();
  }
  iVar5 = *(int *)(unaff_x20 + 0x38);
  while (iVar5 != 0) {
    func_0x00010b56b840(*(undefined8 *)(unaff_x20 + 0x30));
    func_0x00010b56b800();
    func_0x00010b56b940();
  }
  if ((*(byte *)(unaff_x20 + 0x58) & 1) != 0) {
    func_0x000107c39dd8();
    param_4 = (long *)0x20;
    func_0x000107c280a8(0x20,param_1);
    func_0x000107c39de0();
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x50) + 0x14);
    param_4 = (long *)0x5;
    func_0x00010b56b81c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b56b874();
  if ((long)param_3 < 0) {
    lVar4 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar4 = extraout_x8 + 8;
  }
  if ((long)(int)param_3 <= *unaff_x19 - (long)param_4) {
    _memcpy(param_4,lVar4,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  while( true ) {
    iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
    iVar5 = (int)param_3;
    uVar2 = iVar5 - iVar6;
    param_3 = (ulong)uVar2;
    if (uVar2 == 0 || iVar5 < iVar6) break;
    func_0x00010b4d5738();
    param_4 = unaff_x19;
    func_0x000107c303e4();
  }
  func_0x00010b4d5738();
  return (long *)((long)param_4 + (long)iVar5);
}



/* Entry: 10b56946c; end: 10b5694b3;  */

void FUN_10b56946c(void)

{
  FUN_10b56beb4();
  func_0x000107c39dcc();
  return;
}



/* Entry: 10b5694b4; end: 10b569563;  */

void FUN_10b5694b4(void)

{
  undefined1 in_ZR;
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x00010b56b78c();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b56b880();
  }
  func_0x00010b56b998();
  FUN_10b569564();
  puVar1 = (ulong *)(unaff_x21 + 0x30);
  func_0x00010b569574();
  func_0x00010b56b8dc();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      puVar1 = *(ulong **)(unaff_x21 + 0x48);
      if (puVar1 == (ulong *)0x0) {
        FUN_10b56b330();
        *(ulong **)(unaff_x21 + 0x48) = unaff_x22;
        puVar1 = unaff_x22;
      }
      else {
        func_0x00010b56c3ac();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      puVar1 = *(ulong **)(unaff_x21 + 0x50);
      if (puVar1 == (ulong *)0x0) {
        func_0x00010b56b8cc();
        *(ulong **)(unaff_x21 + 0x50) = puVar1;
      }
      else {
        func_0x00010b569584();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x58) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x58) = 1;
  }
  func_0x00010b56b7a0();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b56b7c4();
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b569564; end: 10b5695b7;  */

void FUN_10b569564(long *param_1,long param_2)

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



/* Entry: 10b5695b8; end: 10b5695e3;  */

undefined8 FUN_10b5695b8(undefined8 param_1)

{
  func_0x000107c39dfc();
  FUN_10b5695e4(param_1);
  return param_1;
}



/* Entry: 10b5695e4; end: 10b569613;  */

void FUN_10b5695e4(long param_1)

{
  long unaff_x19;
  
  func_0x000107c39e30();
  if (param_1 != 0) {
    FUN_10b56fca0();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_10b56ad94();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b569614; end: 10b569617;  */

undefined8 FUN_10b569614(undefined8 param_1)

{
  func_0x000107c39dfc();
  FUN_10b5695e4(param_1);
  return param_1;
}



/* Entry: 10b569618; end: 10b56962b;  */

void FUN_10b569618(void)

{
  FUN_10b5695b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56962c; end: 10b569637;  */

undefined ** FUN_10b56962c(void)

{
  return &PTR_DAT_110d09e40;
}



/* Entry: 10b569638; end: 10b5696c3;  */

void FUN_10b569638(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x00010b56b96c();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      FUN_10b56fd0c(unaff_x19[3]);
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x00010b569680(unaff_x19[4]);
    }
  }
  func_0x00010b56b8c0();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b5696c4; end: 10b5697a7;  */

long * FUN_10b5696c4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000107c39dd4();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x14);
    func_0x000107c39ddc();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x00010b56b800();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b56b874();
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



/* Entry: 10b5697a8; end: 10b5697d7;  */

void FUN_10b5697a8(void)

{
  FUN_10b56fdf0();
  func_0x000107c39dcc();
  return;
}



/* Entry: 10b5697d8; end: 10b569913;  */

void FUN_10b5697d8(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x00010b56b78c();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010b56b880();
  }
  func_0x00010b56b8dc();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010b56b9c8();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b56b9d4();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b56fe74();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x00010b56b9b0();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b56b8d4();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00010b569858();
      }
    }
  }
  func_0x00010b56b7a0();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b56b7c4();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b569914; end: 10b569917;  */

undefined8 FUN_10b569914(undefined8 param_1)

{
  func_0x000100c2258c();
  func_0x000100c225cc(param_1);
  return param_1;
}



/* Entry: 10b569918; end: 10b56992b;  */

void FUN_10b569918(void)

{
  func_0x000107c305a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56992c; end: 10b569937;  */

undefined ** FUN_10b56992c(void)

{
  return &PTR_DAT_110d09e88;
}



/* Entry: 10b569938; end: 10b5699df;  */

void FUN_10b569938(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b56d190(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b5699ac(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b569280(*(undefined8 *)(param_1 + 0x28));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b5699e0; end: 10b569ad7;  */

void FUN_10b5699e0(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b56b78c();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b56b880();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b56b9c8();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107c305c4();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b56c67c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b56b9b0();
      if (param_1 == (ulong *)0x0) {
        func_0x000107c305c8();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10b569ad8();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b56b8cc();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        func_0x00010b569584();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x21 + 0x30) = *(int *)(unaff_x20 + 0x30);
  }
  if (*(char *)(unaff_x20 + 0x34) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x34) = 1;
  }
  if (*(char *)(unaff_x20 + 0x35) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x35) = 1;
  }
  if (*(char *)(unaff_x20 + 0x36) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x36) = 1;
  }
  func_0x00010b56b7a0();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b56b7c4();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b569ad8; end: 10b569b3f;  */

void FUN_10b569ad8(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c39e2c();
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(unaff_x19 + 0x10,uVar1,uVar2);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b569b40; end: 10b569b4f;  */

void FUN_10b569b40(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b569b50; end: 10b569b73;  */

undefined8 FUN_10b569b50(undefined8 param_1)

{
  func_0x000107c39dfc();
  return param_1;
}



/* Entry: 10b569b74; end: 10b569b77;  */

undefined8 FUN_10b569b74(undefined8 param_1)

{
  func_0x000107c39dfc();
  return param_1;
}



/* Entry: 10b569b78; end: 10b569b8b;  */

void FUN_10b569b78(void)

{
  FUN_10b569b50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b569b8c; end: 10b569c1b;  */

undefined ** FUN_10b569b8c(void)

{
  return &PTR_DAT_110d09ed8;
}



/* Entry: 10b569c1c; end: 10b569c47;  */

undefined8 FUN_10b569c1c(undefined8 param_1)

{
  func_0x000107c39dfc();
  FUN_10b569c48(param_1);
  return param_1;
}



/* Entry: 10b569c48; end: 10b569c87;  */

long * FUN_10b569c48(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b56dbcc();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b56ad94();
  }
  __ZdlPv();
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x0001000681a0(plVar1);
  }
  return plVar1;
}



/* Entry: 10b569c88; end: 10b569c8b;  */

undefined8 FUN_10b569c88(undefined8 param_1)

{
  func_0x000107c39dfc();
  FUN_10b569c48(param_1);
  return param_1;
}



/* Entry: 10b569c8c; end: 10b569c9f;  */

void FUN_10b569c8c(void)

{
  FUN_10b569c1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b569ca0; end: 10b569cab;  */

undefined ** FUN_10b569ca0(void)

{
  return &PTR_DAT_110d09f30;
}



/* Entry: 10b569cac; end: 10b569cff;  */

void FUN_10b569cac(void)

{
  uint uVar1;
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x00010b56b9bc();
  func_0x00010b56b31c();
  uVar1 = (uint)unaff_x19[2];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b56dc44(unaff_x19[6]);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b569680(unaff_x19[7]);
    }
  }
  func_0x00010b56b8c0();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b569d00; end: 10b569d9f;  */

long * FUN_10b569d00(undefined8 param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int iVar3;
  int unaff_w22;
  int iVar4;
  
  func_0x000107c39dd4();
  func_0x00010b56b97c();
  while (unaff_w22 != unaff_w21) {
    func_0x00010b56b824();
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    func_0x000107c39ddc();
    func_0x00010b56b940();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x30);
    param_4 = (long *)0x3;
    func_0x00010b56b81c();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x38) + 0x14);
    param_4 = (long *)0x4;
    func_0x00010b56b81c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b56b874();
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



/* Entry: 10b569da0; end: 10b569e1b;  */

void FUN_10b569da0(void)

{
  uint uVar1;
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x00010b56b768();
  while (unaff_x22 != 0) {
    FUN_10b569e1c(*unaff_x21);
    func_0x00010b56b9a4();
    unaff_x21 = unaff_x21 + 1;
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b569e34(*(undefined8 *)(unaff_x19 + 0x30));
      func_0x000107c39e04();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b5697c0(*(undefined8 *)(unaff_x19 + 0x38));
      func_0x000107c39e04();
    }
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b56b8b4();
  }
  func_0x00010b56b934();
  return;
}



/* Entry: 10b569e1c; end: 10b569e4b;  */

void FUN_10b569e1c(void)

{
  func_0x00010b56a27c();
  func_0x000107c39dcc();
  return;
}



/* Entry: 10b569e4c; end: 10b569e4f;  */

void FUN_10b569e4c(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x00010b56b78c();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b56b880();
  }
  func_0x00010b56b998();
  func_0x0001053ab440();
  func_0x00010b56b8dc();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010b56ba1c();
      if (param_1 == (ulong *)0x0) {
        FUN_10b56b4a8();
        *(ulong **)(unaff_x21 + 0x30) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10b56ddc4();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b56b8d4();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        func_0x00010b569858();
      }
    }
  }
  func_0x00010b56b7a0();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b56b7c4();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b569e50; end: 10b569edf;  */

void FUN_10b569e50(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x00010b56b78c();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b56b880();
  }
  func_0x00010b56b998();
  func_0x0001053ab440();
  func_0x00010b56b8dc();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010b56ba1c();
      if (param_1 == (ulong *)0x0) {
        FUN_10b56b4a8();
        *(ulong **)(unaff_x21 + 0x30) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10b56ddc4();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b56b8d4();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        func_0x00010b569858();
      }
    }
  }
  func_0x00010b56b7a0();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b56b7c4();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b569ee0; end: 10b569f0b;  */

undefined8 FUN_10b569ee0(undefined8 param_1)

{
  func_0x000107c39dfc();
  FUN_10b569f0c(param_1);
  return param_1;
}



/* Entry: 10b569f0c; end: 10b569f3b;  */

void FUN_10b569f0c(long param_1)

{
  long unaff_x19;
  
  func_0x000107c39e30();
  if (param_1 != 0) {
    func_0x000107c305bc();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_10b56fca0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b569f3c; end: 10b569f3f;  */

undefined8 FUN_10b569f3c(undefined8 param_1)

{
  func_0x000107c39dfc();
  FUN_10b569f0c(param_1);
  return param_1;
}



/* Entry: 10b569f40; end: 10b569f53;  */

void FUN_10b569f40(void)

{
  FUN_10b569ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b569f54; end: 10b569f5f;  */

undefined ** FUN_10b569f54(void)

{
  return &PTR_DAT_110d09f80;
}



/* Entry: 10b569f60; end: 10b569fa7;  */

void FUN_10b569f60(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x00010b56b96c();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00010b5699ac(unaff_x19[3]);
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      FUN_10b56fd0c(unaff_x19[4]);
    }
  }
  func_0x00010b56b8c0();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b569fa8; end: 10b56a08b;  */

long * FUN_10b569fa8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000107c39dd4();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    func_0x000107c39ddc();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x00010b56b800();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b56b874();
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



/* Entry: 10b56a08c; end: 10b56a08f;  */

void FUN_10b56a08c(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x00010b56b78c();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b56b880();
  }
  func_0x00010b56b8dc();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010b56b9c8();
      if (param_1 == (ulong *)0x0) {
        func_0x000107c305c8();
        *(ulong **)(unaff_x21 + 0x18) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10b569ad8();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x00010b56b9b0();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b56b9d4();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_10b56fe74();
      }
    }
  }
  func_0x00010b56b7a0();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b56b7c4();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b56a090; end: 10b56a113;  */

void FUN_10b56a090(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x00010b56b78c();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b56b880();
  }
  func_0x00010b56b8dc();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010b56b9c8();
      if (param_1 == (ulong *)0x0) {
        func_0x000107c305c8();
        *(ulong **)(unaff_x21 + 0x18) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10b569ad8();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x00010b56b9b0();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b56b9d4();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_10b56fe74();
      }
    }
  }
  func_0x00010b56b7a0();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b56b7c4();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b56a114; end: 10b56a18f;  */

void FUN_10b56a114(void)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  
  func_0x000107c39e48();
  if (extraout_w8 == 2) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b56b928();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10b56a16c;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_10b56d784();
    }
  }
  else {
    if (extraout_w8 != 1) goto LAB_10b56a16c;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b56b928();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10b56a16c;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_10b56d36c();
    }
  }
  __ZdlPv();
LAB_10b56a16c:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10b56a190; end: 10b56a1c3;  */

long FUN_10b56a190(long param_1)

{
  func_0x000107c39dfc();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10b56a114(param_1);
  }
  return param_1;
}



/* Entry: 10b56a1c4; end: 10b56a1c7;  */

long FUN_10b56a1c4(long param_1)

{
  func_0x000107c39dfc();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10b56a114(param_1);
  }
  return param_1;
}



/* Entry: 10b56a1c8; end: 10b56a1db;  */

void FUN_10b56a1c8(void)

{
  FUN_10b56a190();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56a1dc; end: 10b56a1e7;  */

undefined ** FUN_10b56a1dc(void)

{
  return &PTR_DAT_110d09fd8;
}



/* Entry: 10b56a1e8; end: 10b56a2e3;  */

void FUN_10b56a1e8(long param_1)

{
  ulong *puVar1;
  
  FUN_10b56a114();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b56a2e4; end: 10b56a2fb;  */

void FUN_10b56a2e4(void)

{
  FUN_10b56d594();
  func_0x000107c39dcc();
  return;
}



/* Entry: 10b56a2fc; end: 10b56a3cb;  */

void FUN_10b56a2fc(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b56b78c();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010b56b880();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_10b56a3b0;
  iVar2 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_10b56a114();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (iVar2 == 2) {
      func_0x00010b56b864();
      func_0x00010b56c3ac();
      goto LAB_10b56a3b0;
    }
    func_0x00010b56b98c();
    FUN_10b56b330();
  }
  else {
    if (iVar1 != 1) goto LAB_10b56a3b0;
    if (iVar2 == 1) {
      func_0x00010b56b864();
      FUN_10b56d638();
      goto LAB_10b56a3b0;
    }
    func_0x00010b56b98c();
    func_0x00010b56b4dc();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_10b56a3b0:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b56b7c4();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b56a3cc; end: 10b56a3f7;  */

undefined8 FUN_10b56a3cc(undefined8 param_1)

{
  func_0x000107c39dfc();
  FUN_10b56a3f8(param_1);
  return param_1;
}



/* Entry: 10b56a3f8; end: 10b56a40b;  */

void FUN_10b56a3f8(long param_1)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x000100c7d278();
  if (extraout_w8 == 3) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107c39e28();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto code_r0x000100c7d300;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      func_0x000107c305a8();
    }
  }
  else if (extraout_w8 == 2) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107c39e28();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto code_r0x000100c7d300;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      func_0x000107c305b0();
    }
  }
  else {
    if (extraout_w8 != 1) goto code_r0x000100c7d300;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107c39e28();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto code_r0x000100c7d300;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      func_0x000107c305ac();
    }
  }
  func_0x000107c60e14();
code_r0x000100c7d300:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10b56a40c; end: 10b56a41f;  */

void FUN_10b56a40c(void)

{
  FUN_10b56a3cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56a420; end: 10b56a50b;  */

long * FUN_10b56a420(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x000107c39dd4();
  plVar2 = (long *)(ulong)*(uint *)(param_1 + 0x1c);
  uVar1 = *(uint *)(param_1 + 0x1c) - 1;
  if (uVar1 < 3) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x10) +
                              *(long *)(&UNK_10e5bf0a0 + (ulong)uVar1 * 8));
    func_0x00010b56b81c();
    param_4 = plVar2;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b56b874();
  if ((long)param_3 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar5 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar4 = (int)param_3;
      uVar1 = iVar4 - iVar5;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar4 < iVar5) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar4);
  }
  _memcpy(param_4,lVar3,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b56a50c; end: 10b56a553;  */

void FUN_10b56a50c(void)

{
  FUN_10b569da0();
  func_0x000107c39dcc();
  return;
}



/* Entry: 10b56a554; end: 10b56a65f;  */

void FUN_10b56a554(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b56b78c();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010b56b880();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_10b56a644;
  iVar2 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      func_0x000107c305b4();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 3) {
    if (iVar2 == 3) {
      func_0x00010b56b864();
      FUN_10b569b40();
      goto LAB_10b56a644;
    }
    func_0x00010b56b98c();
    FUN_10b56b648();
  }
  else if (iVar1 == 2) {
    if (iVar2 == 2) {
      func_0x00010b56b864();
      FUN_10b56a090();
      goto LAB_10b56a644;
    }
    func_0x00010b56b98c();
    func_0x00010b56b5b8();
  }
  else {
    if (iVar1 != 1) goto LAB_10b56a644;
    if (iVar2 == 1) {
      func_0x00010b56b864();
      FUN_10b569e50();
      goto LAB_10b56a644;
    }
    func_0x00010b56b98c();
    FUN_10b56b510();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_10b56a644:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b56b7c4();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b56a660; end: 10b56a663;  */

long FUN_10b56a660(long param_1)

{
  func_0x000100c2258c();
  func_0x000100067de0(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b56a664; end: 10b56a677;  */

void FUN_10b56a664(void)

{
  func_0x000107c305bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56a678; end: 10b56a687;  */

undefined ** FUN_10b56a678(void)

{
  return &PTR_DAT_110d0a080;
}



/* Entry: 10b56a688; end: 10b56a6ff;  */

void FUN_10b56a688(void)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x000107c39e18();
  func_0x000107c39e44(&PTR_FUN_110d09d18);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b56b7f4();
  }
  func_0x00010b56b89c();
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x00010b56b4dc();
  }
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x21;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x00010b56ba14();
  }
  *(undefined8 *)(unaff_x19 + 0x38) = unaff_x21;
  *(undefined1 *)(unaff_x19 + 0x40) = *(undefined1 *)(unaff_x20 + 0x40);
  return;
}



/* Entry: 10b56a700; end: 10b56a72b;  */

undefined8 FUN_10b56a700(undefined8 param_1)

{
  func_0x000107c39dfc();
  FUN_10b56a72c(param_1);
  return param_1;
}



/* Entry: 10b56a72c; end: 10b56a76b;  */

undefined8 FUN_10b56a72c(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b56d36c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b56ac24();
  }
  __ZdlPv();
  func_0x00010b56ba28(param_1 + 0x18);
  if (extraout_x8 != 0) {
    func_0x00010b56b920();
  }
  return unaff_x19;
}



/* Entry: 10b56a76c; end: 10b56a76f;  */

undefined8 FUN_10b56a76c(undefined8 param_1)

{
  func_0x000107c39dfc();
  FUN_10b56a72c(param_1);
  return param_1;
}



/* Entry: 10b56a770; end: 10b56a783;  */

void FUN_10b56a770(void)

{
  FUN_10b56a700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56a784; end: 10b56a78f;  */

undefined ** FUN_10b56a784(void)

{
  return &PTR_DAT_110d0a0c8;
}



/* Entry: 10b56a790; end: 10b56a7eb;  */

void FUN_10b56a790(void)

{
  uint uVar1;
  long unaff_x19;
  ulong *puVar2;
  
  func_0x00010b56b9bc();
  FUN_10b56b308();
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b56d3ec(*(undefined8 *)(unaff_x19 + 0x30));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b569280(*(undefined8 *)(unaff_x19 + 0x38));
    }
  }
  puVar2 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x40) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b56a7ec; end: 10b56a8bb;  */

long * FUN_10b56a7ec(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long extraout_x8;
  long *extraout_x9;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x000107c39dd4();
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 1) != 0) {
    func_0x00010b56b7d4();
    param_4 = param_1;
  }
  iVar5 = *(int *)(unaff_x20 + 0x20);
  while (bVar3 = iVar5 == 0, !bVar3) {
    func_0x00010b56b840(*(long *)(unaff_x20 + 0x18));
    plVar1 = (long *)(unaff_x20 + 0x18);
    if (!bVar3) {
      plVar1 = extraout_x9;
    }
    param_3 = (ulong)*(uint *)(*plVar1 + 0x18);
    func_0x000107c39ddc();
    func_0x00010b56b940();
  }
  if ((*(byte *)(unaff_x20 + 0x40) & 1) != 0) {
    func_0x000107c39dd8();
    param_4 = (long *)0x18;
    func_0x000107c280a8(0x18,param_1);
    func_0x000107c39de0();
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x38) + 0x14);
    param_4 = (long *)0x4;
    func_0x00010b56b81c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b56b874();
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
        uVar2 = iVar5 - iVar6;
        param_3 = (ulong)uVar2;
        if (uVar2 == 0 || iVar5 < iVar6) break;
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
  return param_4;
}



/* Entry: 10b56a8bc; end: 10b56a93f;  */

void FUN_10b56a8bc(void)

{
  uint uVar1;
  int iVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  long unaff_x19;
  int unaff_w20;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x00010b56b768();
  while (unaff_x22 != 0) {
    FUN_10b56946c(*unaff_x21);
    func_0x00010b56b9a4();
    unaff_x21 = unaff_x21 + 1;
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b56a2e4(*(undefined8 *)(unaff_x19 + 0x30));
      func_0x000107c39e04();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b56949c(*(undefined8 *)(unaff_x19 + 0x38));
      func_0x000107c39e04();
    }
  }
  iVar2 = unaff_w20 + (uint)*(byte *)(unaff_x19 + 0x40) * 2;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b56b8b4();
    lVar3 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(unaff_x19 + 0x14) = iVar2;
  return;
}



/* Entry: 10b56a940; end: 10b56a9df;  */

void FUN_10b56a940(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x00010b56b78c();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b56b880();
  }
  func_0x00010b56b998();
  FUN_10b569564();
  func_0x00010b56b8dc();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010b56ba1c();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b56b4dc();
        *(ulong **)(unaff_x21 + 0x30) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10b56d638();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b56b8cc();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        func_0x00010b569584();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x40) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x40) = 1;
  }
  func_0x00010b56b7a0();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b56b7c4();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b56a9e0; end: 10b56aa0b;  */

undefined8 FUN_10b56a9e0(undefined8 param_1)

{
  func_0x000107c39dfc();
  FUN_10b56aa0c(param_1);
  return param_1;
}



/* Entry: 10b56aa0c; end: 10b56aa3b;  */

void FUN_10b56aa0c(long param_1)

{
  long unaff_x19;
  
  func_0x000107c39e30();
  if (param_1 != 0) {
    FUN_10b56fca0();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_10b56ad94();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56aa3c; end: 10b56aa3f;  */

undefined8 FUN_10b56aa3c(undefined8 param_1)

{
  func_0x000107c39dfc();
  FUN_10b56aa0c(param_1);
  return param_1;
}



/* Entry: 10b56aa40; end: 10b56aa53;  */

void FUN_10b56aa40(void)

{
  FUN_10b56a9e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56aa54; end: 10b56aa5f;  */

undefined ** FUN_10b56aa54(void)

{
  return &PTR_DAT_110d0a118;
}



/* Entry: 10b56aa60; end: 10b56aaa7;  */

void FUN_10b56aa60(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x00010b56b96c();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      FUN_10b56fd0c(unaff_x19[3]);
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x00010b569680(unaff_x19[4]);
    }
  }
  func_0x00010b56b8c0();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b56aaa8; end: 10b56ab8b;  */

long * FUN_10b56aaa8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000107c39dd4();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x00010b56b7d4();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x14);
    func_0x000107c39ddc();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b56b874();
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



/* Entry: 10b56ab8c; end: 10b56ac0b;  */

void FUN_10b56ab8c(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x00010b56b78c();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010b56b880();
  }
  func_0x00010b56b8dc();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010b56b9c8();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b56b9d4();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b56fe74();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x00010b56b9b0();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b56b8d4();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00010b569858();
      }
    }
  }
  func_0x00010b56b7a0();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b56b7c4();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b56ac0c; end: 10b56ac23;  */

void FUN_10b56ac0c(void)

{
  FUN_10b571198();
  func_0x000107c39dcc();
  return;
}



/* Entry: 10b56ac24; end: 10b56ac47;  */

undefined8 FUN_10b56ac24(undefined8 param_1)

{
  func_0x000107c39dfc();
  return param_1;
}



/* Entry: 10b56ac48; end: 10b56ac4b;  */

undefined8 FUN_10b56ac48(undefined8 param_1)

{
  func_0x000107c39dfc();
  return param_1;
}



/* Entry: 10b56ac4c; end: 10b56ac5f;  */

void FUN_10b56ac4c(void)

{
  FUN_10b56ac24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56ac60; end: 10b56ac6b;  */

undefined ** FUN_10b56ac60(void)

{
  return &PTR_DAT_110d0a168;
}



/* Entry: 10b56ac6c; end: 10b56ad03;  */

long * FUN_10b56ac6c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x000107c39dd4();
  plVar2 = param_1;
  if ((char)param_1[2] == '\x01') {
    func_0x000107c39dd8();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,param_1);
    func_0x000107c39de0();
    param_4 = plVar2;
  }
  if (*(char *)(unaff_x20 + 0x11) == '\x01') {
    func_0x000107c39dd8();
    param_4 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x000107c39de0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b56b874();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar5 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar4 = (int)param_3;
        uVar1 = iVar4 - iVar5;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b56ad04; end: 10b56ad43;  */

long FUN_10b56ad04(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = ((ulong)((uint)*(byte *)(param_1 + 0x11) + (uint)*(byte *)(param_1 + 0x10)) & 3) * 2;
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



/* Entry: 10b56ad44; end: 10b56ad93;  */

void FUN_10b56ad44(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  
  if (*(int *)(param_1 + 0x28) == 1) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b56b928();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x20) != 0) {
        FUN_10b570ed0();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 10b56ad94; end: 10b56adbf;  */

undefined8 FUN_10b56ad94(undefined8 param_1)

{
  func_0x000107c39dfc();
  FUN_10b56adc0(param_1);
  return param_1;
}



/* Entry: 10b56adc0; end: 10b56adfb;  */

void FUN_10b56adc0(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x000107c39e30();
  if (param_1 != 0) {
    FUN_10b575cc0();
  }
  __ZdlPv();
  if (*(int *)(unaff_x19 + 0x28) != 0) {
    if (*(int *)(unaff_x19 + 0x28) == 1) {
      uVar1 = *(ulong *)(unaff_x19 + 8);
      if ((uVar1 & 1) != 0) {
        func_0x00010b56b928();
        uVar1 = extraout_x8;
      }
      if (uVar1 == 0) {
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          FUN_10b570ed0();
        }
        __ZdlPv();
      }
    }
    *(undefined4 *)(unaff_x19 + 0x28) = 0;
  }
  return;
}


