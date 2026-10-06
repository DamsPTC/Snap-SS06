/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ae13340; end: 10ae133e7;  */

undefined8 * FUN_10ae13340(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  func_0x00010ae139d0();
  if (param_1 == 0) {
    puVar1 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar1 = unaff_x21;
    func_0x00010b4d80e0();
  }
  puVar1[1] = unaff_x21;
  *puVar1 = &PTR_DAT_110c795c0;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae136d0();
  }
  FUN_10ae12e18(puVar1 + 2);
  lVar2 = unaff_x19 + 0x28;
  func_0x00010ae138f0();
  puVar1[5] = lVar2;
  lVar2 = unaff_x19 + 0x30;
  func_0x00010ae138f0();
  puVar1[6] = lVar2;
  *(undefined4 *)((long)puVar1 + 0x44) = 0;
  uVar3 = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(unaff_x19 + 0x40);
  puVar1[7] = uVar3;
  return puVar1;
}



/* Entry: 10ae133e8; end: 10ae134d7;  */

undefined8 * FUN_10ae133e8(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010ae13920();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010ae13820();
  }
  else {
    func_0x00010ae13754();
  }
  param_1[1] = unaff_x19;
  *param_1 = &PTR_DAT_110c794d0;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae136d0();
  }
  func_0x000105991a48(param_1 + 2);
  *(undefined4 *)(param_1 + 7) = 0;
  iVar1 = *(int *)(unaff_x20 + 0x3c);
  *(int *)((long)param_1 + 0x3c) = iVar1;
  if (iVar1 - 1U < 2) {
    lVar2 = unaff_x20 + 0x30;
    func_0x000107c2809c();
    param_1[6] = lVar2;
  }
  return param_1;
}



/* Entry: 10ae134d8; end: 10ae1357f;  */

undefined8 * FUN_10ae134d8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010ae1395c();
  }
  else {
    func_0x00010ae13964();
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_DAT_110c79570;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010ae136d0();
  }
  FUN_10ae12e18(puVar1 + 2,param_1,param_2 + 0x10);
  FUN_10ae12e18(puVar1 + 5,param_1,param_2 + 0x28);
  param_2 = param_2 + 0x40;
  func_0x00010ae1387c();
  puVar1[8] = param_2;
  *(undefined4 *)(puVar1 + 9) = 0;
  return puVar1;
}



/* Entry: 10ae13580; end: 10ae135c3;  */

undefined8 * FUN_10ae13580(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b4d80e0(param_1,0x28);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110c79398;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar1 = param_2 + 0x10;
  func_0x000107c2809c(lVar1,param_1);
  puVar2[2] = lVar1;
  param_2 = param_2 + 0x18;
  func_0x000107c2809c(param_2,param_1);
  puVar2[3] = param_2;
  *(undefined4 *)(puVar2 + 4) = 0;
  return puVar2;
}



/* Entry: 10ae135c4; end: 10ae1366f;  */

undefined8 * FUN_10ae135c4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010ae13820();
  }
  else {
    func_0x00010ae13828();
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110c79480;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010ae136d0();
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  lVar2 = param_2 + 0x18;
  func_0x00010ae1387c();
  puVar1[3] = lVar2;
  lVar2 = param_2 + 0x20;
  func_0x00010ae1387c();
  puVar1[4] = lVar2;
  lVar2 = param_2 + 0x28;
  func_0x00010ae1387c();
  puVar1[5] = lVar2;
  if ((*(byte *)(puVar1 + 2) & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x000106af66f4(param_1,*(undefined8 *)(param_2 + 0x30));
  }
  puVar1[6] = param_1;
  *(undefined1 *)(puVar1 + 7) = *(undefined1 *)(param_2 + 0x38);
  return puVar1;
}



/* Entry: 10ae13670; end: 10ae139e7;  */

long FUN_10ae13670(long param_1)

{
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10ae139e8; end: 10ae13a27;  */

long FUN_10ae139e8(long param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c21c();
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  func_0x000105991a90(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae13a28; end: 10ae13a2b;  */

long FUN_10ae13a28(long param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c21c();
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  func_0x000105991a90(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae13a2c; end: 10ae13a3f;  */

void FUN_10ae13a2c(void)

{
  FUN_10ae139e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae13a40; end: 10ae13a4b;  */

undefined ** FUN_10ae13a40(void)

{
  return &PTR_DAT_110c7a720;
}



/* Entry: 10ae13a4c; end: 10ae13a97;  */

void FUN_10ae13a4c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae1bfa8();
  func_0x000105991b74();
  func_0x00010ae1c290();
  func_0x000107c3025c(unaff_x19 + 0x38);
  func_0x000107c3025c(unaff_x19 + 0x40);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x4e) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
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



/* Entry: 10ae13a98; end: 10ae13cfb;  */

long * FUN_10ae13a98(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long extraout_x8;
  undefined8 *unaff_x22;
  long *plVar6;
  long lVar7;
  long lStack_68;
  undefined8 *puStack_60;
  
  plVar1 = param_1;
  plVar4 = param_2;
  plVar5 = param_3;
  func_0x00010ae1c03c(param_1[6]);
  if ((long)plVar4 < 0) {
    if (unaff_x22[1] != 0) goto LAB_10ae13ae4;
  }
  else if ((int)plVar4 != 0) {
LAB_10ae13ae4:
    func_0x00010ae1bf84();
    plVar1 = param_3;
    func_0x00010ae1bfbc(param_3,1);
    param_2 = plVar1;
  }
  plVar4 = param_1 + 2;
  if ((int)*plVar4 != 0) {
    if (((int)*plVar4 == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      plVar3 = &lStack_68;
      func_0x00010564c19c();
      unaff_x22 = (undefined8 *)&UNK_10f6c3f12;
      while (plVar1 = plVar3, lVar7 = lStack_68, lStack_68 != 0) {
        plVar3 = (long *)(lStack_68 + 8);
        plVar5 = (long *)(lStack_68 + 0x20);
        func_0x00010ae1c260();
        plVar4 = (long *)(long)*(char *)(lVar7 + 0x1f);
        if ((long)plVar4 < 0) {
          plVar3 = *(long **)(lVar7 + 8);
          plVar4 = *(long **)(lVar7 + 0x10);
        }
        func_0x00010ae1bdd8();
        func_0x00010ae1c2fc();
        param_2 = plVar1;
      }
    }
    else {
      func_0x00010ae1c394();
      unaff_x22 = (undefined8 *)&UNK_10f6c3f12;
      plVar3 = plVar1;
      puVar2 = puStack_60;
      for (lVar7 = lStack_68 << 3; plVar1 = plVar3, lVar7 != 0; lVar7 = lVar7 + -8) {
        plVar6 = (long *)*puVar2;
        plVar5 = plVar6 + 3;
        func_0x00010ae1c260();
        plVar4 = (long *)(long)*(char *)((long)plVar6 + 0x17);
        plVar3 = plVar6;
        if ((long)plVar4 < 0) {
          plVar3 = (long *)*plVar6;
          plVar4 = (long *)plVar6[1];
        }
        func_0x00010ae1bdd8();
        puVar2 = puVar2 + 1;
        param_2 = plVar1;
      }
      func_0x00010ae1c2f4();
    }
  }
  func_0x00010ae1c03c(param_1[7]);
  if ((long)plVar4 < 0) {
    if (unaff_x22[1] != 0) {
      puVar2 = (undefined8 *)*unaff_x22;
      goto LAB_10ae13b8c;
    }
  }
  else {
    puVar2 = unaff_x22;
    if ((int)plVar4 != 0) {
LAB_10ae13b8c:
      func_0x00010ae1bf84(puVar2);
      plVar1 = param_3;
      func_0x00010ae1bfbc(param_3,3);
      param_2 = plVar1;
    }
  }
  if ((int)param_1[10] != 0) {
    func_0x00010ae1bfe8();
    func_0x00010ae1c380();
    func_0x00010ae1c388();
    param_2 = plVar1;
  }
  lVar7 = param_1[9];
  if (lVar7 != 0) {
    plVar1 = param_3;
    func_0x000107c282c4(param_3);
    plVar5 = param_2;
    param_2 = plVar1;
  }
  func_0x00010ae1c03c(param_1[8]);
  if (lVar7 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10ae13c20;
    unaff_x22 = (undefined8 *)*unaff_x22;
  }
  else if ((int)lVar7 == 0) goto LAB_10ae13c20;
  func_0x00010ae1bf84(unaff_x22);
  plVar1 = param_3;
  func_0x00010ae1bfbc(param_3,6);
  param_2 = plVar1;
LAB_10ae13c20:
  plVar4 = plVar1;
  if (*(char *)((long)param_1 + 0x54) == '\x01') {
    func_0x00010ae1bfe8();
    plVar4 = (long *)0x38;
    func_0x000107c280a8(0x38,plVar1);
    func_0x00010ae1c210();
    param_2 = plVar4;
  }
  if (*(char *)((long)param_1 + 0x55) == '\x01') {
    func_0x00010ae1bfe8();
    param_2 = (long *)0x40;
    func_0x000107c280a8(0x40,plVar4);
    func_0x00010ae1c210();
  }
  if ((param_1[1] & 1U) != 0) {
    func_0x00010ae1c030();
    if ((long)plVar5 < 0) {
      lVar7 = *(long *)(extraout_x8 + 8);
    }
    else {
      lVar7 = extraout_x8 + 8;
    }
    func_0x0001053930c4(param_3,lVar7);
    param_2 = param_3;
  }
  return param_2;
}



/* Entry: 10ae13cfc; end: 10ae13ecf;  */

void FUN_10ae13cfc(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x00010ae1c2a0();
  while (iVar1 = (int)unaff_x20, uStack_38 != 0) {
    func_0x00010ae1c374();
    unaff_x20 = param_1 + unaff_x20;
    func_0x00010ae1c2fc();
  }
  func_0x00010ae1c024(*(undefined8 *)(unaff_x19 + 0x30));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010ae1c074();
  }
  func_0x00010ae1c024(*(undefined8 *)(unaff_x19 + 0x38));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010ae1c074();
  }
  func_0x00010ae1c024(*(undefined8 *)(unaff_x19 + 0x40));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010ae1c074();
  }
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    iVar1 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x48)) * -9 + 0x2c0U >> 6) + iVar1;
  }
  if (*(int *)(unaff_x19 + 0x50) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x50)) * -9 + 0x280U >> 6) + 1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(unaff_x19 + 0x54) * 2 + (uint)*(byte *)(unaff_x19 + 0x55) * 2;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae1c050();
    lVar2 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x58) = iVar1;
  return;
}



/* Entry: 10ae13ed0; end: 10ae13efb;  */

long FUN_10ae13ed0(long param_1)

{
  func_0x00010ae1bf6c();
  FUN_10ae1a7bc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae13efc; end: 10ae13eff;  */

long FUN_10ae13efc(long param_1)

{
  func_0x00010ae1bf6c();
  FUN_10ae1a7bc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae13f00; end: 10ae13f13;  */

void FUN_10ae13f00(void)

{
  FUN_10ae13ed0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae13f14; end: 10ae13f1f;  */

undefined ** FUN_10ae13f14(void)

{
  return &PTR_DAT_110c7a758;
}



/* Entry: 10ae13f20; end: 10ae13f4f;  */

void FUN_10ae13f20(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae1bfa8();
  FUN_10ae1ada0();
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



/* Entry: 10ae13f50; end: 10ae13fb7;  */

long * FUN_10ae13f50(undefined8 param_1,long param_2,ulong param_3,long *param_4)

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
  
  func_0x00010ae1bc78();
  while (unaff_w22 != unaff_w21) {
    func_0x00010ae1bc94();
    param_3 = (ulong)*(uint *)(param_2 + 0x58);
    func_0x00010ae1be7c();
    func_0x00010ae1c244();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1c030();
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



/* Entry: 10ae13fb8; end: 10ae14007;  */

void FUN_10ae13fb8(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x00010ae1bb44();
  while (unaff_x22 != 0) {
    FUN_10ae14008(*unaff_x21);
    func_0x00010ae1c2e0();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae1c050();
  }
  func_0x00010ae1c160();
  return;
}



/* Entry: 10ae14008; end: 10ae14023;  */

long FUN_10ae14008(long param_1)

{
  long extraout_x8;
  
  FUN_10ae13cfc();
  func_0x00010ae1bcb0();
  return param_1 + extraout_x8;
}



/* Entry: 10ae14024; end: 10ae14027;  */

void FUN_10ae14024(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010ae1bc24();
  FUN_10ae14058();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae14028; end: 10ae14057;  */

void FUN_10ae14028(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010ae1bc24();
  FUN_10ae14058();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae14058; end: 10ae14067;  */

void FUN_10ae14058(long *param_1,long param_2)

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



/* Entry: 10ae14068; end: 10ae14097;  */

long FUN_10ae14068(long param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c1d8();
  FUN_10ae1a7bc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae14098; end: 10ae1409b;  */

long FUN_10ae14098(long param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c1d8();
  FUN_10ae1a7bc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae1409c; end: 10ae140af;  */

void FUN_10ae1409c(void)

{
  FUN_10ae14068();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae140b0; end: 10ae140bb;  */

undefined ** FUN_10ae140b0(void)

{
  return &PTR_DAT_110c7a798;
}



/* Entry: 10ae140bc; end: 10ae140ef;  */

void FUN_10ae140bc(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae1bfa8();
  FUN_10ae1ada0();
  func_0x00010ae1c1d0();
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



/* Entry: 10ae140f0; end: 10ae141a3;  */

long * FUN_10ae140f0(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *plVar4;
  int iVar5;
  
  func_0x00010ae1bdb8();
  lVar2 = param_1[3];
  for (plVar4 = (long *)0x0; (int)lVar2 != (int)plVar4; plVar4 = (long *)(ulong)((int)plVar4 + 1)) {
    func_0x00010ae1c0a4();
    param_3 = (ulong)*(uint *)(param_2 + 0x58);
    param_1 = (long *)0x1;
    func_0x00010ae1bec8();
    unaff_x20 = param_1;
  }
  func_0x00010ae1c03c(*(undefined8 *)(unaff_x21 + 0x28));
  if (param_2 < 0) {
    if (plVar4[1] == 0) goto LAB_10ae14170;
    plVar4 = (long *)*plVar4;
  }
  else if ((int)param_2 == 0) goto LAB_10ae14170;
  param_4 = (long *)&UNK_10f6c3f71;
  func_0x00010ae1bf84();
  func_0x00010ae1bbfc();
  param_1 = plVar4;
  unaff_x20 = plVar4;
LAB_10ae14170:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010ae1c030();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010ae1c0dc();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar5 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      param_3 = (ulong)(uint)(iVar3 - iVar5);
      if (iVar3 - iVar5 == 0 || iVar3 < iVar5) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar5);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10ae141a4; end: 10ae1420b;  */

void FUN_10ae141a4(long param_1)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x00010ae1bb44();
  while (unaff_x22 != 0) {
    param_1 = *unaff_x21;
    FUN_10ae14008();
    func_0x00010ae1c2e0();
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x00010ae1bf5c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010ae1c074();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae1c050();
  }
  func_0x00010ae1c3d8();
  return;
}



/* Entry: 10ae1420c; end: 10ae1425b;  */

void FUN_10ae1420c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae1bc24();
  FUN_10ae14058();
  func_0x00010ae1bf4c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c1c8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae1425c; end: 10ae1428f;  */

undefined8 FUN_10ae1425c(undefined8 param_1)

{
  long extraout_x8;
  
  func_0x00010ae1bf6c();
  func_0x00010ae1c354();
  if (extraout_x8 != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10ae14290; end: 10ae14293;  */

undefined8 FUN_10ae14290(undefined8 param_1)

{
  long extraout_x8;
  
  func_0x00010ae1bf6c();
  func_0x00010ae1c354();
  if (extraout_x8 != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10ae14294; end: 10ae142a7;  */

void FUN_10ae14294(void)

{
  FUN_10ae1425c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae142a8; end: 10ae142b3;  */

undefined ** FUN_10ae142a8(void)

{
  return &PTR_DAT_110c7a7d8;
}



/* Entry: 10ae142b4; end: 10ae142e7;  */

void FUN_10ae142b4(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae1c144();
  if (in_NG == in_OV) {
    func_0x00010ae1c288();
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



/* Entry: 10ae142e8; end: 10ae143a7;  */

long * FUN_10ae142e8(undefined8 param_1,long param_2,ulong param_3,long *param_4)

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
  
  func_0x00010ae1bc78();
  while (unaff_w22 != unaff_w21) {
    func_0x00010ae1bc94();
    param_3 = (ulong)*(uint *)(param_2 + 0x30);
    func_0x00010ae1be7c();
    func_0x00010ae1c244();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1c030();
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



/* Entry: 10ae143a8; end: 10ae143ab;  */

void FUN_10ae143a8(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010ae1bc24();
  FUN_10ae143dc();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae143ac; end: 10ae143db;  */

void FUN_10ae143ac(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010ae1bc24();
  FUN_10ae143dc();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae143dc; end: 10ae143eb;  */

void FUN_10ae143dc(long *param_1,long param_2)

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



/* Entry: 10ae143ec; end: 10ae14413;  */

undefined8 FUN_10ae143ec(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c13c();
  return param_1;
}



/* Entry: 10ae14414; end: 10ae14417;  */

undefined8 FUN_10ae14414(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c13c();
  return param_1;
}



/* Entry: 10ae14418; end: 10ae1442b;  */

void FUN_10ae14418(void)

{
  FUN_10ae143ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae1442c; end: 10ae14437;  */

undefined ** FUN_10ae1442c(void)

{
  return &PTR_DAT_110c7a818;
}



/* Entry: 10ae14438; end: 10ae14463;  */

void FUN_10ae14438(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae1be4c();
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



/* Entry: 10ae14464; end: 10ae1451b;  */

long * FUN_10ae14464(long *param_1,long param_2,ulong param_3)

{
  long lVar1;
  char cVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x23;
  int iVar4;
  long unaff_x26;
  long *unaff_x30;
  
  func_0x00010ae1c2c0();
  func_0x00010ae1bbb8();
  while (unaff_x26 != 0) {
    func_0x00010ae1bb68();
    param_1 = unaff_x23;
    if (param_2 < 0) {
      param_2 = unaff_x23[1];
      param_1 = (long *)*unaff_x23;
    }
    func_0x00010ae1bdd8();
    cVar2 = *(char *)((long)unaff_x23 + 0x17);
    if ((((long)cVar2 < 0) && (func_0x00010ae1c198(), !(bool)in_ZR && in_NG == in_OV)) ||
       (func_0x00010ae1bd18(), in_NG != in_OV)) {
      func_0x00010ae1bc50();
      unaff_x20 = param_1;
    }
    else {
      func_0x00010ae1be98();
      if (extraout_w8 < 0) {
        unaff_x23 = (long *)*unaff_x23;
      }
      func_0x00010ae1bbe8();
      unaff_x20 = (long *)((long)unaff_x20 + (long)cVar2);
    }
    func_0x00010ae1c18c();
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010ae1c030();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010ae1c0dc();
  if ((long)(int)param_3 <= *param_1 - (long)unaff_x30) {
    _memcpy(unaff_x30);
    return (long *)((long)unaff_x30 + (long)(int)param_3);
  }
  while( true ) {
    iVar4 = ((int)*param_1 - (int)unaff_x30) + 0x10;
    iVar3 = (int)param_3;
    param_3 = (ulong)(uint)(iVar3 - iVar4);
    if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
    func_0x00010b4d5738();
    lVar1 = (long)unaff_x30 + (long)iVar4;
    unaff_x30 = param_1;
    func_0x000107c303e4(param_1,lVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)unaff_x30 + (long)iVar3);
}



/* Entry: 10ae1451c; end: 10ae1456b;  */

void FUN_10ae1451c(void)

{
  long unaff_x19;
  long unaff_x22;
  
  func_0x00010ae1bcc8();
  while (unaff_x22 != 0) {
    func_0x00010ae1bb28();
    func_0x00010ae1be88();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae1c050();
  }
  func_0x00010ae1c160();
  return;
}



/* Entry: 10ae1456c; end: 10ae1456f;  */

void FUN_10ae1456c(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010ae1bc10();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae14570; end: 10ae1459b;  */

void FUN_10ae14570(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010ae1bc10();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae1459c; end: 10ae145c7;  */

undefined8 FUN_10ae1459c(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c1d8();
  func_0x00010ae1c13c();
  return param_1;
}



/* Entry: 10ae145c8; end: 10ae145cb;  */

undefined8 FUN_10ae145c8(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c1d8();
  func_0x00010ae1c13c();
  return param_1;
}



/* Entry: 10ae145cc; end: 10ae145df;  */

void FUN_10ae145cc(void)

{
  FUN_10ae1459c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae145e0; end: 10ae145eb;  */

undefined ** FUN_10ae145e0(void)

{
  return &PTR_DAT_110c7a858;
}



/* Entry: 10ae145ec; end: 10ae1461b;  */

void FUN_10ae145ec(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae1be4c();
  func_0x00010ae1c1d0();
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



/* Entry: 10ae1461c; end: 10ae1470b;  */

long * FUN_10ae1461c(long *param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  char cVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long *plVar3;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar4;
  long *unaff_x23;
  int iVar5;
  long unaff_x26;
  long *unaff_x30;
  
  func_0x00010ae1c2c0();
  func_0x00010ae1bbb8();
  plVar3 = (long *)&UNK_10f6c3fbd;
  while (unaff_x26 != 0) {
    func_0x00010ae1bb68();
    param_1 = unaff_x23;
    if (param_2 < 0) {
      param_2 = unaff_x23[1];
      param_1 = (long *)*unaff_x23;
    }
    func_0x00010ae1bdd8();
    cVar2 = *(char *)((long)unaff_x23 + 0x17);
    if ((((long)cVar2 < 0) && (func_0x00010ae1c198(), !(bool)in_ZR && in_NG == in_OV)) ||
       (func_0x00010ae1bd18(), in_NG != in_OV)) {
      func_0x00010ae1bc50();
      unaff_x20 = param_1;
    }
    else {
      func_0x00010ae1be98();
      if (extraout_w8 < 0) {
        unaff_x23 = (long *)*unaff_x23;
      }
      func_0x00010ae1bbe8();
      unaff_x20 = (long *)((long)unaff_x20 + (long)cVar2);
    }
    func_0x00010ae1c18c();
  }
  func_0x00010ae1c03c(*(undefined8 *)(unaff_x21 + 0x28));
  if (param_2 < 0) {
    plVar3 = (long *)0x65732e73656d6167;
  }
  else if ((int)param_2 == 0) goto LAB_10ae146d8;
  unaff_x30 = (long *)&UNK_10f6c3fe0;
  func_0x00010ae1bf84();
  func_0x00010ae1bbfc();
  param_1 = plVar3;
  unaff_x20 = plVar3;
LAB_10ae146d8:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010ae1c030();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010ae1c0dc();
  if (*param_1 - (long)unaff_x30 < (long)(int)param_3) {
    while( true ) {
      iVar5 = ((int)*param_1 - (int)unaff_x30) + 0x10;
      iVar4 = (int)param_3;
      param_3 = (ulong)(uint)(iVar4 - iVar5);
      if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)unaff_x30 + (long)iVar5);
      unaff_x30 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x30 + (long)iVar4);
  }
  _memcpy(unaff_x30);
  return (long *)((long)unaff_x30 + (long)(int)param_3);
}



/* Entry: 10ae1470c; end: 10ae14773;  */

void FUN_10ae1470c(long param_1)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x22;
  
  func_0x00010ae1bcc8();
  while (unaff_x22 != 0) {
    func_0x00010ae1bb28();
    func_0x00010ae1be88();
  }
  func_0x00010ae1bf5c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010ae1c074();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae1c050();
  }
  func_0x00010ae1c3d8();
  return;
}



/* Entry: 10ae14774; end: 10ae147bf;  */

void FUN_10ae14774(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae1bc10();
  func_0x00010ae1bf4c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c1c8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae147c0; end: 10ae147f3;  */

undefined8 FUN_10ae147c0(undefined8 param_1)

{
  long extraout_x8;
  
  func_0x00010ae1bf6c();
  func_0x00010ae1c354();
  if (extraout_x8 != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10ae147f4; end: 10ae147f7;  */

undefined8 FUN_10ae147f4(undefined8 param_1)

{
  long extraout_x8;
  
  func_0x00010ae1bf6c();
  func_0x00010ae1c354();
  if (extraout_x8 != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10ae147f8; end: 10ae1480b;  */

void FUN_10ae147f8(void)

{
  FUN_10ae147c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae1480c; end: 10ae14817;  */

undefined ** FUN_10ae1480c(void)

{
  return &PTR_DAT_110c7a898;
}



/* Entry: 10ae14818; end: 10ae1484b;  */

void FUN_10ae14818(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae1c144();
  if (in_NG == in_OV) {
    func_0x00010ae1c288();
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



/* Entry: 10ae1484c; end: 10ae1490b;  */

long * FUN_10ae1484c(undefined8 param_1,long param_2,ulong param_3,long *param_4)

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
  
  func_0x00010ae1bc78();
  while (unaff_w22 != unaff_w21) {
    func_0x00010ae1bc94();
    param_3 = (ulong)*(uint *)(param_2 + 0x30);
    func_0x00010ae1be7c();
    func_0x00010ae1c244();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1c030();
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



/* Entry: 10ae1490c; end: 10ae1490f;  */

void FUN_10ae1490c(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010ae1bc24();
  FUN_10ae14940();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae14910; end: 10ae1493f;  */

void FUN_10ae14910(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010ae1bc24();
  FUN_10ae14940();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae14940; end: 10ae1494f;  */

void FUN_10ae14940(long *param_1,long param_2)

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



/* Entry: 10ae14950; end: 10ae1497f;  */

long FUN_10ae14950(long param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c21c();
  func_0x000105991a90(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae14980; end: 10ae14983;  */

long FUN_10ae14980(long param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c21c();
  func_0x000105991a90(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae14984; end: 10ae14997;  */

void FUN_10ae14984(void)

{
  FUN_10ae14950();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae14998; end: 10ae149a3;  */

undefined ** FUN_10ae14998(void)

{
  return &PTR_DAT_110c7a8d8;
}



/* Entry: 10ae149a4; end: 10ae149d7;  */

void FUN_10ae149a4(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae1bfa8();
  func_0x000105991b74();
  func_0x00010ae1c290();
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



/* Entry: 10ae149d8; end: 10ae14b1f;  */

long * FUN_10ae149d8(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *plVar4;
  long lVar5;
  long lStack_68;
  undefined8 *puStack_60;
  
  func_0x00010ae1bdb8();
  func_0x00010ae1c03c(param_1[6]);
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10ae14a30;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10ae14a30;
  func_0x00010ae1bf84();
  func_0x00010ae1bc64();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10ae14a30:
  if (*(int *)(unaff_x21 + 0x10) != 0) {
    if ((*(int *)(unaff_x21 + 0x10) == 1) || ((*(byte *)(unaff_x19 + 0x3a) & 1) == 0)) {
      plVar2 = &lStack_68;
      func_0x00010564c19c(plVar2);
      while (param_1 = plVar2, lVar5 = lStack_68, lStack_68 != 0) {
        plVar2 = (long *)(lStack_68 + 8);
        func_0x00010ae1c274();
        lVar3 = (long)*(char *)(lVar5 + 0x1f);
        if (lVar3 < 0) {
          plVar2 = *(long **)(lVar5 + 8);
          lVar3 = *(long *)(lVar5 + 0x10);
        }
        func_0x00010ae1bdd8(plVar2,lVar3);
        func_0x00010ae1c2fc();
        unaff_x20 = param_1;
      }
    }
    else {
      func_0x00010ae1c394();
      plVar2 = param_1;
      puVar1 = puStack_60;
      for (lVar5 = lStack_68 << 3; param_1 = plVar2, lVar5 != 0; lVar5 = lVar5 + -8) {
        plVar4 = (long *)*puVar1;
        func_0x00010ae1c274();
        lVar3 = (long)*(char *)((long)plVar4 + 0x17);
        plVar2 = plVar4;
        if (lVar3 < 0) {
          plVar2 = (long *)*plVar4;
          lVar3 = plVar4[1];
        }
        func_0x00010ae1bdd8(plVar2,lVar3);
        puVar1 = puVar1 + 1;
        unaff_x20 = param_1;
      }
      func_0x00010ae1c2f4();
    }
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010ae1c030();
    func_0x00010ae1c0dc();
    func_0x0001053930c4();
    unaff_x20 = param_1;
  }
  return unaff_x20;
}



/* Entry: 10ae14b20; end: 10ae14be7;  */

long FUN_10ae14b20(long param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x00010ae1c2a0();
  while (uStack_38 != 0) {
    func_0x00010ae1c374();
    unaff_x20 = param_1 + unaff_x20;
    func_0x00010ae1c2fc();
  }
  func_0x00010ae1c024(*(undefined8 *)(unaff_x19 + 0x30));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010ae1c074();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae1c050();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x38) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10ae14be8; end: 10ae14c13;  */

long FUN_10ae14be8(long param_1)

{
  func_0x00010ae1bf6c();
  FUN_10ae1a7e8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae14c14; end: 10ae14c17;  */

long FUN_10ae14c14(long param_1)

{
  func_0x00010ae1bf6c();
  FUN_10ae1a7e8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae14c18; end: 10ae14c2b;  */

void FUN_10ae14c18(void)

{
  FUN_10ae14be8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae14c2c; end: 10ae14c37;  */

undefined ** FUN_10ae14c2c(void)

{
  return &PTR_DAT_110c7a918;
}



/* Entry: 10ae14c38; end: 10ae14c67;  */

void FUN_10ae14c38(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae1bfa8();
  func_0x00010ae1adb4();
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



/* Entry: 10ae14c68; end: 10ae14ccf;  */

long * FUN_10ae14c68(undefined8 param_1,long param_2,ulong param_3,long *param_4)

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
  
  func_0x00010ae1bc78();
  while (unaff_w22 != unaff_w21) {
    func_0x00010ae1bc94();
    param_3 = (ulong)*(uint *)(param_2 + 0x38);
    func_0x00010ae1be7c();
    func_0x00010ae1c244();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1c030();
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



/* Entry: 10ae14cd0; end: 10ae14d1f;  */

void FUN_10ae14cd0(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x00010ae1bb44();
  while (unaff_x22 != 0) {
    FUN_10ae14d20(*unaff_x21);
    func_0x00010ae1c2e0();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae1c050();
  }
  func_0x00010ae1c160();
  return;
}



/* Entry: 10ae14d20; end: 10ae14d3b;  */

long FUN_10ae14d20(long param_1)

{
  long extraout_x8;
  
  FUN_10ae14b20();
  func_0x00010ae1bcb0();
  return param_1 + extraout_x8;
}



/* Entry: 10ae14d3c; end: 10ae14d3f;  */

void FUN_10ae14d3c(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010ae1bc24();
  FUN_10ae14d70();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae14d40; end: 10ae14d6f;  */

void FUN_10ae14d40(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010ae1bc24();
  FUN_10ae14d70();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae14d70; end: 10ae14d7f;  */

void FUN_10ae14d70(long *param_1,long param_2)

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



/* Entry: 10ae14d80; end: 10ae14daf;  */

long FUN_10ae14d80(long param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c1d8();
  FUN_10ae1a7e8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae14db0; end: 10ae14db3;  */

long FUN_10ae14db0(long param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c1d8();
  FUN_10ae1a7e8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae14db4; end: 10ae14dc7;  */

void FUN_10ae14db4(void)

{
  FUN_10ae14d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae14dc8; end: 10ae14dd3;  */

undefined ** FUN_10ae14dc8(void)

{
  return &PTR_DAT_110c7a958;
}



/* Entry: 10ae14dd4; end: 10ae14e07;  */

void FUN_10ae14dd4(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae1bfa8();
  func_0x00010ae1adb4();
  func_0x00010ae1c1d0();
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



/* Entry: 10ae14e08; end: 10ae14ebb;  */

long * FUN_10ae14e08(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *plVar4;
  int iVar5;
  
  func_0x00010ae1bdb8();
  lVar2 = param_1[3];
  for (plVar4 = (long *)0x0; (int)lVar2 != (int)plVar4; plVar4 = (long *)(ulong)((int)plVar4 + 1)) {
    func_0x00010ae1c0a4();
    param_3 = (ulong)*(uint *)(param_2 + 0x38);
    param_1 = (long *)0x1;
    func_0x00010ae1bec8();
    unaff_x20 = param_1;
  }
  func_0x00010ae1c03c(*(undefined8 *)(unaff_x21 + 0x28));
  if (param_2 < 0) {
    if (plVar4[1] == 0) goto LAB_10ae14e88;
    plVar4 = (long *)*plVar4;
  }
  else if ((int)param_2 == 0) goto LAB_10ae14e88;
  param_4 = (long *)&UNK_10f6c404d;
  func_0x00010ae1bf84();
  func_0x00010ae1bbfc();
  param_1 = plVar4;
  unaff_x20 = plVar4;
LAB_10ae14e88:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010ae1c030();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010ae1c0dc();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar5 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      param_3 = (ulong)(uint)(iVar3 - iVar5);
      if (iVar3 - iVar5 == 0 || iVar3 < iVar5) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar5);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10ae14ebc; end: 10ae14f23;  */

void FUN_10ae14ebc(long param_1)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x00010ae1bb44();
  while (unaff_x22 != 0) {
    param_1 = *unaff_x21;
    FUN_10ae14d20();
    func_0x00010ae1c2e0();
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x00010ae1bf5c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010ae1c074();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae1c050();
  }
  func_0x00010ae1c3d8();
  return;
}



/* Entry: 10ae14f24; end: 10ae14f73;  */

void FUN_10ae14f24(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae1bc24();
  FUN_10ae14d70();
  func_0x00010ae1bf4c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c1c8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae14f74; end: 10ae14fa7;  */

undefined8 FUN_10ae14f74(undefined8 param_1)

{
  long extraout_x8;
  
  func_0x00010ae1bf6c();
  func_0x00010ae1c354();
  if (extraout_x8 != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10ae14fa8; end: 10ae14fab;  */

undefined8 FUN_10ae14fa8(undefined8 param_1)

{
  long extraout_x8;
  
  func_0x00010ae1bf6c();
  func_0x00010ae1c354();
  if (extraout_x8 != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10ae14fac; end: 10ae14fbf;  */

void FUN_10ae14fac(void)

{
  FUN_10ae14f74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae14fc0; end: 10ae14fcb;  */

undefined ** FUN_10ae14fc0(void)

{
  return &PTR_DAT_110c7a998;
}



/* Entry: 10ae14fcc; end: 10ae14fff;  */

void FUN_10ae14fcc(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae1c144();
  if (in_NG == in_OV) {
    func_0x00010ae1c288();
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



/* Entry: 10ae15000; end: 10ae150bf;  */

long * FUN_10ae15000(undefined8 param_1,long param_2,ulong param_3,long *param_4)

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
  
  func_0x00010ae1bc78();
  while (unaff_w22 != unaff_w21) {
    func_0x00010ae1bc94();
    param_3 = (ulong)*(uint *)(param_2 + 0x30);
    func_0x00010ae1be7c();
    func_0x00010ae1c244();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1c030();
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



/* Entry: 10ae150c0; end: 10ae150c3;  */

void FUN_10ae150c0(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010ae1bc24();
  FUN_10ae150f4();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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


