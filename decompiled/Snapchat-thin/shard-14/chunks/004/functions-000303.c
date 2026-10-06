/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b251958; end: 10b25195b;  */

void FUN_10b251958(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  FUN_10b251ac4(param_1 + 0x18,param_2 + 0x18);
  lVar2 = param_2 + 0x30;
  FUN_10b251ac4(param_1 + 0x30);
  func_0x00010b251f84(*(undefined8 *)(param_2 + 0x48));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b251f78();
    }
    func_0x000107c30248(param_1 + 0x48);
  }
  func_0x00010b251f84(*(undefined8 *)(param_2 + 0x50));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b251f78();
    }
    func_0x000107c30248(param_1 + 0x50);
  }
  func_0x00010b251f84(*(undefined8 *)(param_2 + 0x58));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b251f78();
    }
    func_0x000107c30248(param_1 + 0x58);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x60) == 0) {
      FUN_10b251e4c(uVar4,*(undefined8 *)(param_2 + 0x60));
      *(ulong *)(param_1 + 0x60) = uVar4;
    }
    else {
      FUN_10b2512e8();
    }
  }
  if (*(int *)(param_2 + 0x68) != 0) {
    *(int *)(param_1 + 0x68) = *(int *)(param_2 + 0x68);
  }
  if (*(int *)(param_2 + 0x6c) != 0) {
    *(int *)(param_1 + 0x6c) = *(int *)(param_2 + 0x6c);
  }
  if (*(char *)(param_2 + 0x70) == '\x01') {
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  if (*(char *)(param_2 + 0x71) == '\x01') {
    *(undefined1 *)(param_1 + 0x71) = 1;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
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



/* Entry: 10b25195c; end: 10b251ac3;  */

void FUN_10b25195c(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  FUN_10b251ac4(param_1 + 0x18,param_2 + 0x18);
  lVar2 = param_2 + 0x30;
  FUN_10b251ac4(param_1 + 0x30);
  func_0x00010b251f84(*(undefined8 *)(param_2 + 0x48));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b251f78();
    }
    func_0x000107c30248(param_1 + 0x48);
  }
  func_0x00010b251f84(*(undefined8 *)(param_2 + 0x50));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b251f78();
    }
    func_0x000107c30248(param_1 + 0x50);
  }
  func_0x00010b251f84(*(undefined8 *)(param_2 + 0x58));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b251f78();
    }
    func_0x000107c30248(param_1 + 0x58);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x60) == 0) {
      FUN_10b251e4c(uVar4,*(undefined8 *)(param_2 + 0x60));
      *(ulong *)(param_1 + 0x60) = uVar4;
    }
    else {
      FUN_10b2512e8();
    }
  }
  if (*(int *)(param_2 + 0x68) != 0) {
    *(int *)(param_1 + 0x68) = *(int *)(param_2 + 0x68);
  }
  if (*(int *)(param_2 + 0x6c) != 0) {
    *(int *)(param_1 + 0x6c) = *(int *)(param_2 + 0x6c);
  }
  if (*(char *)(param_2 + 0x70) == '\x01') {
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  if (*(char *)(param_2 + 0x71) == '\x01') {
    *(undefined1 *)(param_1 + 0x71) = 1;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
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



/* Entry: 10b251ac4; end: 10b251ad3;  */

void FUN_10b251ac4(long *param_1,long param_2)

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



/* Entry: 10b251ad4; end: 10b251b0b;  */

void FUN_10b251ad4(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar4;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_10b25154c();
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  FUN_10b251ac4(param_1 + 0x18,param_2 + 0x18);
  lVar2 = param_2 + 0x30;
  FUN_10b251ac4(param_1 + 0x30);
  func_0x00010b251f84(*(undefined8 *)(param_2 + 0x48));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b251f78();
    }
    func_0x000107c30248(param_1 + 0x48);
  }
  func_0x00010b251f84(*(undefined8 *)(param_2 + 0x50));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b251f78();
    }
    func_0x000107c30248(param_1 + 0x50);
  }
  func_0x00010b251f84(*(undefined8 *)(param_2 + 0x58));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b251f78();
    }
    func_0x000107c30248(param_1 + 0x58);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x60) == 0) {
      FUN_10b251e4c(uVar4,*(undefined8 *)(param_2 + 0x60));
      *(ulong *)(param_1 + 0x60) = uVar4;
    }
    else {
      FUN_10b2512e8();
    }
  }
  if (*(int *)(param_2 + 0x68) != 0) {
    *(int *)(param_1 + 0x68) = *(int *)(param_2 + 0x68);
  }
  if (*(int *)(param_2 + 0x6c) != 0) {
    *(int *)(param_1 + 0x6c) = *(int *)(param_2 + 0x6c);
  }
  if (*(char *)(param_2 + 0x70) == '\x01') {
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  if (*(char *)(param_2 + 0x71) == '\x01') {
    *(undefined1 *)(param_1 + 0x71) = 1;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
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



/* Entry: 10b251b0c; end: 10b251b63;  */

void FUN_10b251b0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010b252040();
  *unaff_x19 = &PTR_FUN_110ccb198;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b251f1c();
  }
  func_0x000107c2a448(unaff_x19 + 2);
  *(undefined4 *)(unaff_x19 + 4) = 0;
  *(undefined4 *)(unaff_x19 + 5) = 0;
  *(undefined4 *)((long)unaff_x19 + 0x24) = *(undefined4 *)(unaff_x20 + 0x24);
  return;
}



/* Entry: 10b251b64; end: 10b251b8f;  */

long FUN_10b251b64(long param_1)

{
  func_0x00010b251fbc();
  func_0x000107c2a450(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b251b90; end: 10b251b93;  */

long FUN_10b251b90(long param_1)

{
  func_0x00010b251fbc();
  func_0x000107c2a450(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b251b94; end: 10b251ba7;  */

void FUN_10b251b94(void)

{
  FUN_10b251b64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b251ba8; end: 10b251bcb;  */

undefined ** FUN_10b251ba8(void)

{
  return &PTR_DAT_110ccb2f8;
}



/* Entry: 10b251bcc; end: 10b251cbf;  */

byte * FUN_10b251bcc(byte *param_1,byte *param_2,byte *param_3)

{
  uint *puVar1;
  byte *pbVar2;
  long lVar3;
  byte *pbVar4;
  long extraout_x8;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  
  uVar5 = *(uint *)(param_1 + 0x20);
  pbVar2 = param_1;
  pbVar8 = param_3;
  if (0 < (int)uVar5) {
    func_0x00010b251f28();
    pbVar4 = pbVar2 + 2;
    *pbVar2 = 10;
    for (; 0x7f < uVar5; uVar5 = uVar5 >> 7) {
      pbVar4[-1] = (byte)uVar5 | 0x80;
      pbVar4 = pbVar4 + 1;
    }
    pbVar4[-1] = (byte)uVar5;
    puVar6 = *(uint **)(param_1 + 0x18);
    puVar1 = puVar6 + *(int *)(param_1 + 0x10);
    do {
      func_0x00010b251f28();
      uVar5 = *puVar6;
      pbVar4 = pbVar2;
      while( true ) {
        param_2 = pbVar4 + 1;
        if (uVar5 < 0x80) break;
        *pbVar4 = (byte)uVar5 | 0x80;
        uVar5 = uVar5 >> 7;
        pbVar4 = param_2;
      }
      puVar6 = puVar6 + 1;
      *pbVar4 = (byte)uVar5;
    } while (puVar6 < puVar1);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    func_0x00010b251f28();
    param_2 = (byte *)0x10;
    func_0x000107c280a8(0x10,pbVar2);
    func_0x00010b251ee8();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b252034();
    if ((long)pbVar8 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      pbVar8 = *(byte **)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*(long *)param_3 - (long)param_2 < (long)(int)pbVar8) {
      while( true ) {
        iVar9 = ((int)*(undefined8 *)param_3 - (int)param_2) + 0x10;
        iVar7 = (int)pbVar8;
        pbVar8 = (byte *)(ulong)(uint)(iVar7 - iVar9);
        if (iVar7 - iVar9 == 0 || iVar7 < iVar9) break;
        func_0x00010b4d5738();
        pbVar2 = param_2 + iVar9;
        param_2 = param_3;
        func_0x000107c303e4(param_3,pbVar2);
      }
      func_0x00010b4d5738();
      return param_2 + iVar7;
    }
    _memcpy(param_2,lVar3,(ulong)pbVar8 & 0xffffffff);
    return param_2 + (int)pbVar8;
  }
  return param_2;
}



/* Entry: 10b251cc0; end: 10b251d47;  */

void FUN_10b251cc0(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b252008();
  func_0x00010b4d3e38();
  iVar2 = (int)param_1;
  *(int *)(unaff_x19 + 0x20) = iVar2;
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = ((int)LZCOUNT((long)iVar2) * -9 + 0x280U >> 6) + 1;
  }
  iVar3 = iVar1 + iVar2;
  if (*(int *)(unaff_x19 + 0x24) != 0) {
    iVar3 = iVar1 + iVar2 + ((int)LZCOUNT(*(int *)(unaff_x19 + 0x24)) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b252068();
    lVar4 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar4 = *(long *)(extraout_x9 + 0x10);
    }
    iVar3 = (int)lVar4 + iVar3;
  }
  *(int *)(unaff_x19 + 0x28) = iVar3;
  return;
}



/* Entry: 10b251d48; end: 10b251d4b;  */

void FUN_10b251d48(ulong *param_1,long param_2)

{
  long unaff_x19;
  
  func_0x00010b252008();
  func_0x0001088ffb98();
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(unaff_x19 + 0x24) = *(int *)(param_2 + 0x24);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b251fe0();
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



/* Entry: 10b251d4c; end: 10b251d8f;  */

void FUN_10b251d4c(ulong *param_1,long param_2)

{
  long unaff_x19;
  
  func_0x00010b252008();
  func_0x0001088ffb98();
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(unaff_x19 + 0x24) = *(int *)(param_2 + 0x24);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b251fe0();
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



/* Entry: 10b251d90; end: 10b251daf;  */

void FUN_10b251d90(undefined8 param_1,long param_2)

{
  undefined8 extraout_x8;
  
  if (param_2 == 0) {
    func_0x00010b134ae0();
  }
  else {
    FUN_10b4d80e0(param_2,0x40);
  }
  func_0x00010b136348(&UNK_110ccb0e8);
  *(undefined8 *)(param_2 + 0x10) = extraout_x8;
  *(undefined8 *)(param_2 + 0x18) = extraout_x8;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x20) = extraout_x8;
  *(undefined4 *)(param_2 + 0x38) = 0;
  return;
}



/* Entry: 10b251db0; end: 10b251ddb;  */

undefined8 * FUN_10b251db0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b251ac4(param_1,param_3);
  return param_1;
}



/* Entry: 10b251ddc; end: 10b251e0b;  */

long * FUN_10b251ddc(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b251e0c; end: 10b251e37;  */

long FUN_10b251e0c(long param_1)

{
  FUN_10b251ddc(param_1 + 0x20);
  FUN_10b251ddc(param_1 + 8);
  return param_1;
}



/* Entry: 10b251e38; end: 10b251e4b;  */

void FUN_10b251e38(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10b251e4c; end: 10b251edb;  */

undefined8 * FUN_10b251e4c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x40);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110ccb0f8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b251f1c();
  }
  lVar2 = param_2 + 0x10;
  func_0x00010b252014();
  puVar1[2] = lVar2;
  lVar2 = param_2 + 0x18;
  func_0x00010b252014();
  puVar1[3] = lVar2;
  lVar2 = param_2 + 0x20;
  func_0x00010b252014();
  puVar1[4] = lVar2;
  *(undefined4 *)(puVar1 + 7) = 0;
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  puVar1[6] = *(undefined8 *)(param_2 + 0x30);
  puVar1[5] = uVar3;
  return puVar1;
}



/* Entry: 10b251edc; end: 10b2520a7;  */

void FUN_10b251edc(void)

{
  return;
}



/* Entry: 10b2520a8; end: 10b2520d3;  */

long FUN_10b2520a8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b2520d4; end: 10b2520d7;  */

long FUN_10b2520d4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b2520d8; end: 10b2520eb;  */

void FUN_10b2520d8(void)

{
  FUN_10b2520a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2520ec; end: 10b25210b;  */

undefined ** FUN_10b2520ec(void)

{
  return &PTR_DAT_110ccb4d8;
}



/* Entry: 10b25210c; end: 10b2521b7;  */

long * FUN_10b25210c(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar2 = param_1;
  if ((int)param_1[2] != 0) {
    plVar1 = param_1;
    func_0x00010b2522e4();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,plVar1);
    func_0x00010b2522d8();
    param_2 = plVar2;
  }
  if (*(int *)((long)param_1 + 0x14) != 0) {
    func_0x00010b2522e4();
    param_2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x00010b2522d8();
  }
  if ((param_1[1] & 1U) != 0) {
    uVar5 = param_1[1] & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 10b2521b8; end: 10b25222f;  */

long FUN_10b2521b8(long param_1)

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



/* Entry: 10b252230; end: 10b252267;  */

void FUN_10b252230(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x00010b2520f8();
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
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



/* Entry: 10b252268; end: 10b25228b;  */

undefined1  [16] FUN_10b252268(long param_1,long param_2)

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
  for (puVar2 = (undefined1 *)(param_1 + 0x10); puVar2 != (undefined1 *)(param_1 + 0x18);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x18);
  return auVar6;
}



/* Entry: 10b25228c; end: 10b2522d7;  */

void FUN_10b25228c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110ccb498;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b2522d8; end: 10b2522ef;  */

void FUN_10b2522d8(byte *param_1)

{
  ulong uVar1;
  int unaff_w21;
  
  for (uVar1 = (ulong)unaff_w21; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *param_1 = (byte)uVar1 | 0x80;
    param_1 = param_1 + 1;
  }
  *param_1 = (byte)uVar1;
  return;
}



/* Entry: 10b2522f0; end: 10b25238b;  */

undefined8 * FUN_10b2522f0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110ccb560;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  func_0x000107c282d4(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x000107c282d4(param_1 + 5,param_2,param_3 + 0x28);
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  uVar1 = *(undefined8 *)(param_3 + 0x3c);
  *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)(param_3 + 0x44);
  *(undefined8 *)((long)param_1 + 0x3c) = uVar1;
  return param_1;
}



/* Entry: 10b25238c; end: 10b2523bb;  */

long FUN_10b25238c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b2529ac(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b2523bc; end: 10b2523bf;  */

long FUN_10b2523bc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b2529ac(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b2523c0; end: 10b2523d3;  */

void FUN_10b2523c0(void)

{
  FUN_10b25238c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2523d4; end: 10b2523ff;  */

undefined ** FUN_10b2523d4(void)

{
  return &PTR_DAT_110ccb5f0;
}



/* Entry: 10b252400; end: 10b2525b7;  */

long * FUN_10b252400(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  
  uVar2 = *(uint *)(param_1 + 4);
  plVar5 = param_1;
  if (0 < (int)uVar2) {
    FUN_10b252ab0();
    puVar8 = (undefined1 *)((long)plVar5 + 2);
    *(undefined1 *)plVar5 = 10;
    while (0x7f < uVar2) {
      func_0x00010b252b08();
    }
    puVar8[-1] = (char)uVar2;
    piVar11 = (int *)param_1[3];
    piVar1 = piVar11 + (int)param_1[2];
    do {
      FUN_10b252ab0();
      uVar9 = (ulong)*piVar11;
      param_2 = (long *)((long)plVar5 + 1);
      while (0x7f < uVar9) {
        func_0x00010b252b1c();
        uVar9 = extraout_x8;
      }
      piVar11 = piVar11 + 1;
      *(char *)((long)param_2 + -1) = (char)uVar9;
    } while (piVar11 < piVar1);
  }
  uVar2 = *(uint *)(param_1 + 7);
  if (0 < (int)uVar2) {
    FUN_10b252ab0();
    puVar8 = (undefined1 *)((long)plVar5 + 2);
    *(undefined1 *)plVar5 = 0x12;
    while (0x7f < uVar2) {
      func_0x00010b252b08();
    }
    puVar8[-1] = (char)uVar2;
    piVar11 = (int *)param_1[6];
    piVar1 = piVar11 + (int)param_1[5];
    do {
      FUN_10b252ab0();
      uVar9 = (ulong)*piVar11;
      param_2 = (long *)((long)plVar5 + 1);
      while (0x7f < uVar9) {
        func_0x00010b252b1c();
        uVar9 = extraout_x8_00;
      }
      piVar11 = piVar11 + 1;
      *(char *)((long)param_2 + -1) = (char)uVar9;
    } while (piVar11 < piVar1);
  }
  plVar4 = plVar5;
  if (*(char *)((long)param_1 + 0x3c) == '\x01') {
    FUN_10b252ab0();
    plVar4 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar5);
    func_0x00010b252ad4();
    param_2 = plVar4;
  }
  plVar5 = plVar4;
  if (*(char *)((long)param_1 + 0x3d) == '\x01') {
    FUN_10b252ab0();
    plVar5 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar4);
    func_0x00010b252ad4();
    param_2 = plVar5;
  }
  if ((int)param_1[8] != 0) {
    plVar5 = param_3;
    func_0x0001088b96ec(param_3,(int)param_1[8],param_2);
    param_2 = plVar5;
  }
  if (*(int *)((long)param_1 + 0x44) != 0) {
    FUN_10b252ab0();
    uVar3 = *(undefined4 *)((long)param_1 + 0x44);
    puVar6 = (undefined4 *)0x35;
    func_0x000107c280a8(0x35,plVar5);
    param_2 = (long *)(puVar6 + 1);
    *puVar6 = uVar3;
  }
  if ((param_1[1] & 1U) != 0) {
    uVar10 = param_1[1] & 0xfffffffffffffffe;
    uVar9 = (ulong)*(char *)(uVar10 + 0x1f);
    if ((long)uVar9 < 0) {
      lVar7 = *(long *)(uVar10 + 8);
      uVar9 = *(ulong *)(uVar10 + 0x10);
    }
    else {
      lVar7 = uVar10 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar9) {
      while( true ) {
        iVar13 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar12 = (int)uVar9;
        uVar9 = (ulong)(uint)(iVar12 - iVar13);
        if (iVar12 - iVar13 == 0 || iVar12 < iVar13) break;
        func_0x00010b4d5738();
        puVar8 = (undefined1 *)((long)param_2 + (long)iVar13);
        param_2 = param_3;
        func_0x000107c303e4(param_3,puVar8);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar12);
    }
    _memcpy(param_2,lVar7,uVar9 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar9);
  }
  return param_2;
}



/* Entry: 10b2525b8; end: 10b25269b;  */

void FUN_10b2525b8(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  
  lVar4 = param_1 + 0x10;
  FUN_10b4d3e0c();
  iVar6 = (int)lVar4;
  *(int *)(param_1 + 0x20) = iVar6;
  iVar3 = 0;
  if (lVar4 != 0) {
    iVar3 = ((int)LZCOUNT((long)iVar6) * -9 + 0x280U >> 6) + 1;
  }
  lVar4 = param_1 + 0x28;
  FUN_10b4d3e0c();
  iVar2 = (int)lVar4;
  *(int *)(param_1 + 0x38) = iVar2;
  iVar1 = 0;
  if (lVar4 != 0) {
    iVar1 = ((int)LZCOUNT((long)iVar2) * -9 + 0x280U >> 6) + 1;
  }
  iVar3 = iVar3 + iVar6 + iVar2 + iVar1 + (uint)*(byte *)(param_1 + 0x3c) * 2 +
          (uint)*(byte *)(param_1 + 0x3d) * 2;
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x40)) * -9 + 0x2c0U >> 6) + iVar3;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar3 = iVar3 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    iVar3 = (int)lVar4 + iVar3;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  return;
}



/* Entry: 10b25269c; end: 10b25271f;  */

void FUN_10b25269c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b252af4();
  func_0x000107c282d0();
  func_0x000107c282d0(unaff_x19 + 0x28,unaff_x20 + 0x28);
  if (*(char *)(unaff_x20 + 0x3c) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x3c) = 1;
  }
  if (*(char *)(unaff_x20 + 0x3d) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x3d) = 1;
  }
  if (*(int *)(unaff_x20 + 0x40) != 0) {
    *(int *)(unaff_x19 + 0x40) = *(int *)(unaff_x20 + 0x40);
  }
  if (*(int *)(unaff_x20 + 0x44) != 0) {
    *(int *)(unaff_x19 + 0x44) = *(int *)(unaff_x20 + 0x44);
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



/* Entry: 10b252720; end: 10b25274f;  */

long FUN_10b252720(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b2529d4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b252750; end: 10b252753;  */

long FUN_10b252750(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b2529d4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b252754; end: 10b252767;  */

void FUN_10b252754(void)

{
  FUN_10b252720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b252768; end: 10b252773;  */

undefined ** FUN_10b252768(void)

{
  return &PTR_DAT_110ccb650;
}



/* Entry: 10b252774; end: 10b2527b7;  */

void FUN_10b252774(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
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



/* Entry: 10b2527b8; end: 10b2528f7;  */

long * FUN_10b2527b8(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x18);
  for (iVar6 = 0; iVar7 != iVar6; iVar6 = iVar6 + 1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar6 * 8 + 7);
    }
    plVar2 = (long *)0x1;
    func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x48),param_2,param_3);
    param_2 = plVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 10b2528f8; end: 10b2528fb;  */

void FUN_10b2528f8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b252af4();
  FUN_10b252938();
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



/* Entry: 10b2528fc; end: 10b252937;  */

void FUN_10b2528fc(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b252af4();
  FUN_10b252938();
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



/* Entry: 10b252938; end: 10b252947;  */

void FUN_10b252938(long *param_1,long param_2)

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



/* Entry: 10b252948; end: 10b25297f;  */

void FUN_10b252948(long param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_10b252774();
  func_0x00010b252af4(param_1,param_2);
  FUN_10b252938();
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



/* Entry: 10b252980; end: 10b2529ab;  */

undefined1  [16] FUN_10b252980(long param_1,long param_2)

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



/* Entry: 10b2529ac; end: 10b2529d3;  */

/* WARNING: Possible PIC construction at 0x00010b2529c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b2529c4) */

long FUN_10b2529ac(long param_1)

{
  char in_NG;
  char in_OV;
  
  func_0x00010006804c(param_1 + 0x18);
  if (in_NG == in_OV) {
    func_0x0001002a998c(param_1);
  }
  return param_1;
}



/* Entry: 10b2529d4; end: 10b252a03;  */

long * FUN_10b2529d4(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b252a04; end: 10b252aaf;  */

void FUN_10b252a04(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110ccb560;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = param_1;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[5] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[6] = param_1;
  *(undefined4 *)(puVar1 + 9) = 0;
  return;
}



/* Entry: 10b252ab0; end: 10b252b2f;  */

ulong * FUN_10b252ab0(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *in_x3;
  ulong *unaff_x19;
  
  if (in_x3 < (ulong *)*unaff_x19) {
    return in_x3;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    func_0x0001006b07dc();
    in_x3 = (ulong *)((long)puVar2 + (long)((int)in_x3 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= in_x3);
  return in_x3;
}



/* Entry: 10b252b30; end: 10b252f87;  */

void FUN_10b252b30(undefined1 *param_1,long *param_2,undefined ***param_3,int param_4,int *param_5)

{
  undefined **ppuVar1;
  ulong *puVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined1 uVar8;
  ulong uVar9;
  undefined **ppuVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dStack_b0;
  double dStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  
  lVar13 = *param_2;
  ppuStack_a0 = (undefined **)(lVar13 + 0x18);
  uStack_98 = CONCAT71(uStack_98._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  __ZNSt3__117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE(lVar13,&ppuStack_a0);
  lVar14 = *(long *)(lVar13 + 0x10);
  uStack_78 = 0;
  __ZNSt13exception_ptrD1Ev(&uStack_78);
  if (lVar14 != 0) {
    __ZNSt13exception_ptrC1ERKS_(&uStack_78,(long *)(lVar13 + 0x10));
    __ZSt17rethrow_exceptionSt13exception_ptr(&uStack_78);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10b252f4c);
    (*pcVar4)();
  }
  func_0x000107c2798c(&ppuStack_a0);
  if ((*(byte *)(lVar13 + 0xd8) & 1) != 0) {
    ppuVar10 = param_3[1];
    pppuVar7 = (undefined ***)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      ppuVar10 = (undefined **)(ulong)*(byte *)((long)param_3 + 0x17);
      pppuVar7 = param_3;
    }
    FUN_10b5d295c(pppuVar7,ppuVar10,&uStack_78);
    if (((ulong)pppuVar7 & 1) != 0) {
      uVar11 = *(ulong *)(lVar13 + 0xa0);
      puVar2 = (ulong *)(lVar13 + 0xa0);
      if ((uVar11 & 1) != 0) {
        puVar2 = (ulong *)(uVar11 + 7);
      }
      uVar11 = 0;
      for (lVar14 = (long)*(int *)(lVar13 + 0xa8) << 3; lVar14 != 0; lVar14 = lVar14 + -8) {
        uVar12 = *puVar2;
        uVar9 = uVar11;
        if (*(int *)(uVar12 + 0x20) == (int)uStack_78) {
          if (*(int *)(uVar12 + 0x24) == param_4) goto LAB_10b252c34;
          uVar9 = uVar12;
          if (*(int *)(uVar12 + 0x24) != 0) {
            uVar9 = uVar11;
          }
        }
        puVar2 = puVar2 + 1;
        uVar11 = uVar9;
      }
      uVar12 = uVar11;
      if (uVar11 != 0) {
LAB_10b252c34:
        ppuStack_a0 = &PTR_FUN_110d0fb20;
        uStack_98 = 0;
        uStack_88 = 0;
        ppuStack_80 = (undefined **)0x0;
        uStack_90 = 0;
        if ((*(byte *)(uVar12 + 0x10) & 1) != 0) {
          lVar14 = *(long *)(uVar12 + 0x18);
          if ((*(byte *)(lVar14 + 0x10) & 1) != 0) {
            ppuVar10 = *(undefined ***)(lVar14 + 0x18);
            if ((double)ppuVar10[2] != 0.0) {
              FUN_10b253394();
              func_0x00010b2533ac(*(undefined8 *)(lVar14 + 0x18));
              pppuVar7[2] = *(undefined ***)(extraout_x8 + 0x10);
              ppuVar10 = *(undefined ***)(lVar14 + 0x18);
            }
            ppuVar1 = &PTR_PTR_1133a3aa8;
            if (ppuVar10 != (undefined **)0x0) {
              ppuVar1 = ppuVar10;
            }
            if ((double)ppuVar1[3] != 0.0) {
              FUN_10b253394();
              func_0x00010b2533ac(*(undefined8 *)(lVar14 + 0x18));
              pppuVar7[3] = *(undefined ***)(extraout_x8_00 + 0x18);
              ppuVar10 = *(undefined ***)(lVar14 + 0x18);
            }
            dVar15 = (double)func_0x00010b25339c(ppuVar10);
            if (dVar15 != 0.0) {
              FUN_10b253394();
              ppuVar10 = (undefined **)func_0x00010b25339c(*(undefined8 *)(lVar14 + 0x18));
              pppuVar7[4] = ppuVar10;
            }
          }
          if ((*(byte *)(lVar14 + 0x10) >> 1 & 1) != 0) {
            pppuVar7 = &ppuStack_a0;
            func_0x00010b252fcc();
            FUN_10b58e0b4();
          }
        }
        bVar3 = 0;
        uVar11 = *(ulong *)(lVar13 + 0xb8);
        puVar2 = (ulong *)(lVar13 + 0xb8);
        if ((uVar11 & 1) != 0) {
          puVar2 = (ulong *)(uVar11 + 7);
        }
        lVar14 = (long)*(int *)(lVar13 + 0xc0) << 3;
        auVar16 = NEON_fmov(0x3ff0000000000000,8);
        dStack_a8 = auVar16._8_8_;
        dStack_b0 = auVar16._0_8_;
        dVar15 = 1.0;
        dVar18 = 1.0;
        for (; lVar14 != 0; lVar14 = lVar14 + -8) {
          uVar11 = *puVar2;
          dVar17 = dVar18;
          if ((*(int *)(uVar11 + 0x38) == 1) && (*param_5 == *(int *)(uVar11 + 0x30))) {
            dVar17 = dVar18 * *(double *)(uVar11 + 0x10);
            if (*(double *)(uVar11 + 0x10) == 0.0) {
              dVar17 = dVar18;
            }
            dStack_b0 = (double)((ulong)dStack_b0 ^
                                ((ulong)dStack_b0 ^ (ulong)(dStack_b0 * *(double *)(uVar11 + 0x18)))
                                & ~-(ulong)(*(double *)(uVar11 + 0x18) == 0.0));
            dStack_a8 = (double)((ulong)dStack_a8 ^
                                ((ulong)dStack_a8 ^ (ulong)(dStack_a8 * *(double *)(uVar11 + 0x20)))
                                & ~-(ulong)(*(double *)(uVar11 + 0x20) == 0.0));
            if (*(double *)(uVar11 + 0x28) != 0.0) {
              dVar15 = dVar15 * *(double *)(uVar11 + 0x28);
            }
            bVar3 = 1;
          }
          puVar2 = puVar2 + 1;
          dVar18 = dVar17;
        }
        if ((bool)(*(int *)(lVar13 + 0xc0) == 0 | bVar3)) {
          if (dVar18 != 1.0) {
            func_0x00010b2533ac(uStack_88);
            dVar17 = *(double *)(extraout_x8_01 + 0x10);
            FUN_10b253394();
            if (dVar17 <= 0.0) {
              dVar17 = 1.0;
            }
            pppuVar7[2] = (undefined **)(dVar18 * dVar17);
          }
          if (((byte)uStack_90 >> 1 & 1) != 0) {
            bVar5 = true;
            if ((*(int *)((long)ppuStack_80 + 0x24) == 1) && (bVar5 = false, !NAN(dStack_b0))) {
              bVar5 = dStack_b0 == 1.0;
            }
            if (!bVar5) {
              pppuVar6 = &ppuStack_a0;
              func_0x00010b252fcc();
              if (*(int *)((long)pppuVar6 + 0x24) == 1) {
                pppuVar7 = (undefined ***)pppuVar6[3];
              }
              else {
                FUN_10b58de64(pppuVar6);
                *(undefined4 *)((long)pppuVar6 + 0x24) = 1;
                pppuVar7 = (undefined ***)pppuVar6[1];
                if (((ulong)pppuVar7 & 1) != 0) {
                  pppuVar7 = *(undefined ****)((ulong)pppuVar7 & 0xfffffffffffffffe);
                }
                func_0x00010b2530ac();
                pppuVar6[3] = (undefined **)pppuVar7;
              }
              ppuVar10 = &PTR_PTR_1133a3b38;
              if (ppuStack_80 != (undefined **)0x0) {
                ppuVar10 = ppuStack_80;
              }
              if (*(int *)((long)ppuVar10 + 0x24) == 1) {
                ppuVar10 = (undefined **)ppuVar10[3];
              }
              else {
                ppuVar10 = &PTR_PTR_1133a3a88;
              }
              pppuVar7[2] = (undefined **)(dStack_b0 * (double)ppuVar10[2]);
            }
          }
          if (dStack_a8 != 1.0) {
            func_0x00010b2533ac(uStack_88);
            dVar18 = *(double *)(extraout_x8_02 + 0x18);
            FUN_10b253394();
            if (dVar18 <= 0.0) {
              dVar18 = 1.0;
            }
            pppuVar7[3] = (undefined **)(dStack_a8 * dVar18);
          }
          if ((dVar15 != 1.0) && (dVar18 = (double)func_0x00010b25339c(uStack_88), dVar18 != 0.0)) {
            FUN_10b253394();
            dVar18 = (double)func_0x00010b25339c(uStack_88);
            pppuVar7[4] = (undefined **)(dVar15 * dVar18);
          }
          FUN_10b180198(param_1,&ppuStack_a0);
          uVar8 = 1;
        }
        else {
          uVar8 = 0;
          *param_1 = 0;
        }
        param_1[0x28] = uVar8;
        FUN_10b58d930(&ppuStack_a0);
        return;
      }
    }
  }
  *param_1 = 0;
  param_1[0x28] = 0;
  return;
}



/* Entry: 10b252f88; end: 10b25312f;  */

void FUN_10b252f88(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x00010b253010();
    *(ulong *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 10b253130; end: 10b25314f;  */

void FUN_10b253130(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_10b58cf08();
  }
  return;
}



/* Entry: 10b253150; end: 10b2531c3;  */

undefined8 * FUN_10b253150(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *param_1 = &PTR_FUN_110d0fbc0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_1 != param_2) {
    uVar1 = param_2[1];
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      func_0x00010b58d1c4(param_1);
    }
    else {
      FUN_10b58d190(param_1);
    }
  }
  return param_1;
}



/* Entry: 10b2531c4; end: 10b2531c7;  */

void FUN_10b2531c4(long *param_1)

{
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  func_0x000107c60d50(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  func_0x000107c60c18(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(param_1);
  return;
}



/* Entry: 10b2531c8; end: 10b2531db;  */

void FUN_10b2531c8(void)

{
  func_0x000107c28060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2531dc; end: 10b253393;  */

void FUN_10b2531dc(long param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined ***pppuVar3;
  long lVar4;
  undefined1 auStack_d0 [72];
  char cStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  long lStack_38;
  long lStack_30;
  
  func_0x000107c30194(&lStack_38,&UNK_10f73d012,0x1f,"",0);
  if (lStack_38 == lStack_30) {
    auStack_d0[0] = 0;
    cStack_88 = '\0';
  }
  else {
    ppuStack_80 = &PTR_FUN_110d0fbc0;
    uStack_78 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_40 = 0;
    pppuVar3 = &ppuStack_80;
    func_0x000107c3034c(pppuVar3,lStack_38,(int)lStack_30 - (int)lStack_38);
    bVar1 = ((ulong)pppuVar3 & 1) == 0;
    if (bVar1) {
      auStack_d0[0] = 0;
    }
    else {
      FUN_10b253150(auStack_d0,&ppuStack_80);
    }
    cStack_88 = !bVar1;
    FUN_10b58cf08(&ppuStack_80);
  }
  func_0x000107c27914(&lStack_38);
  ppuStack_80 = (undefined **)(param_1 + 0x18);
  uStack_78 = CONCAT71(uStack_78._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  lVar4 = param_1;
  func_0x000107c28058();
  if ((int)lVar4 == 0) {
    *(undefined1 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0xd8) = 0;
    if (cStack_88 == '\x01') {
      FUN_10b253150((undefined1 *)(param_1 + 0x90),auStack_d0);
      *(undefined1 *)(param_1 + 0xd8) = 1;
    }
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 5;
    __ZNSt3__118condition_variable10notify_allEv(param_1 + 0x58);
    func_0x000107c2798c(&ppuStack_80);
    FUN_10b253130(auStack_d0);
    return;
  }
  func_0x00010538ceb0(2);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10b253314);
  (*pcVar2)();
}



/* Entry: 10b253394; end: 10b2533cb;  */

void FUN_10b253394(void)

{
  long in_stack_00000028;
  
  if (in_stack_00000028 == 0) {
    func_0x00010b253010();
  }
  return;
}



/* Entry: 10b2533cc; end: 10b253513; -[SCDataSaverModeSessionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2533cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11278d6a8;
  lVar1 = param_1 + lVar6;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c293780();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c07c8c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
    lVar6 = param_1 + lVar6;
    _objc_loadWeakRetained(lVar6);
    lVar2 = lVar6;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + _DAT_11278d6ac;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf64360(lVar2,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + _DAT_11278d6b0;
    _objc_loadWeakRetained(param_1);
    lVar5 = param_1;
    func_0x00010c0d6a60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2396c0(lVar4,param_2,lVar5);
    _objc_release(lVar5);
    _objc_release(param_1);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar6);
    return;
  }
  return;
}



/* Entry: 10b253514; end: 10b25357b; -[SCDataSaverModeSessionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b253514(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11278d6bc);
  _objc_destroyWeak(param_1 + _DAT_11278d6ac);
  _objc_destroyWeak(param_1 + _DAT_11278d6b0);
  _objc_destroyWeak(param_1 + _DAT_11278d6b8);
  _objc_destroyWeak(param_1 + _DAT_11278d6a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11278d6b4);
  return;
}



/* Entry: 10b25357c; end: 10b2535e7; -[SCSystemLegacyPreloadControllerServiceProvider end] */

void FUN_10b25357c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR_PTR_1126cb2d0;
  func_0x00010c22ba80(PTR_PTR_1126cb2d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a280();
  _objc_release(puVar1);
  puStack_28 = PTR_PTR_112705e10;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2535e8; end: 10b253643; -[SCSystemLegacyPreloadControllerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2535e8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11278d6d0);
  _objc_destroyWeak(param_1 + _DAT_11278d6c4);
  _objc_destroyWeak(param_1 + _DAT_11278d6cc);
  _objc_destroyWeak(param_1 + _DAT_11278d6c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11278d6c0);
  return;
}



/* Entry: 10b253644; end: 10b25371b; -[SCDataSaverModePromptCoordinator initWithUserSession:userBlizzardLogger:] */

undefined1 *
FUN_10b253644(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112705e18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release();
    func_0x000107c2bf18();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b25371c; end: 10b253a27; -[SCDataSaverModePromptCoordinator _showPromptDialogIfNecessary:] */

void FUN_10b25371c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  func_0x00010bdc1320();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010bf642a0();
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010c088880();
    if (lVar2 < 0x1681a062589) {
      lVar2 = param_3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c29ffa0();
      _objc_release(lVar2);
      if (lVar3 == 2) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110f5eb78;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f5eb78,0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126af180;
        ppuVar6 = &PTR____CFConstantStringClassReference_110f39238;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f39238,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef320(puVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar6);
        func_0x00010befa120(puVar5);
        puVar8 = PTR_PTR_1126af180;
        ppuVar6 = &PTR____CFConstantStringClassReference_110dae6f8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dae6f8,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef320(puVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar6);
        func_0x00010befa120(puVar5);
        ppuVar6 = &PTR____CFConstantStringClassReference_110f5ebb8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f5ebb8,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be04ca0(param_1);
        _objc_release(ppuVar6);
        FUN_10b254394();
        func_0x00010c1b7b00(*(undefined8 *)(param_1 + 0x18));
        puVar9 = PTR_PTR_1126dfd10;
        _objc_opt_new(PTR_PTR_1126dfd10);
        uVar10 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c269d40(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b2e60();
        _objc_release(uVar10);
        puVar11 = PTR_PTR_1126dfd18;
        func_0x00010bf71da0(PTR_PTR_1126dfd18);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010b256a70();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar12;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar13;
        func_0x00010bf64300();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfec2a0();
        _objc_release(puVar14);
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar5);
        _objc_release(ppuVar4);
      }
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10b253a28; end: 10b253a9f;  */

void FUN_10b253a28(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_40 = *(long *)(param_1 + 0x20);
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b253aa0;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b253ad8;
  puStack_48 = &UNK_110842e18;
  lStack_18 = lStack_40;
  func_0x00010c0f8520(*(undefined8 *)(lStack_40 + 0x18),param_2,&puStack_38,
                      PTR___dispatch_main_q_11034be20,&puStack_60);
  return;
}



/* Entry: 10b253aa0; end: 10b253ad7;  */

void FUN_10b253aa0(long param_1,undefined8 param_2)

{
  func_0x00010c219cc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c189810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),
             PTR_s_setDataSaverExpirationMillis__112640020,0);
  return;
}



/* Entry: 10b253ad8; end: 10b253ae3;  */

void FUN_10b253ad8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be52290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logDataSaverDisableEvent__112572240,1);
  return;
}



/* Entry: 10b253ae4; end: 10b253b63;  */

void FUN_10b253ae4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010bf642e0();
  if (lVar1 == 0) {
    func_0x00010c189800(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),param_2,0xffffffffffffffff
                       );
  }
  puVar2 = PTR_PTR_1126dfd08;
  _objc_opt_new(PTR_PTR_1126dfd08);
  func_0x00010c1897e0();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b253b64; end: 10b253d53; -[SCDataSaverModePromptCoordinator showPromptDialogIfNecessary:] */

void FUN_10b253b64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  _objc_initWeak(auStack_60,param_3);
  puVar1 = PTR_PTR_1126b6ae8;
  func_0x00010c22ba80(PTR_PTR_1126b6ae8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bdfe0;
  puVar4 = PTR_PTR_1126ae960;
  puVar2 = PTR_PTR_1126ceb98;
  func_0x00010c2396a0(PTR_PTR_1126ceb98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf64340(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c49e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae970;
  func_0x00010c0c7320(PTR_PTR_1126ae970);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_70,auStack_58);
  _objc_copyWeak(auStack_68,auStack_60);
  func_0x00010c2a14e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 10b253d54; end: 10b253de3;  */

void FUN_10b253d54(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_1 + 0x20;
      _objc_loadWeakRetained(lVar1);
      param_1 = param_1 + 0x28;
      _objc_loadWeakRetained(param_1);
      func_0x00010beba720(lVar1,param_2,param_1);
      _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 10b253de4; end: 10b254143; -[SCDataSaverModePromptCoordinator toggleDataSaverWithTravelModeValue:toggleValue:completion:] */

void FUN_10b253de4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5
                  )

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_5);
  if (param_4 == 0) {
    func_0x00010be52280(param_1);
    (**(code **)(param_5 + 0x10))(param_5,0,0);
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f5ebd8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f5ebd8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126af180;
    ppuVar3 = &PTR____CFConstantStringClassReference_110f5ebf8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f5ebf8,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    func_0x00010befa120(puVar2);
    puVar5 = PTR_PTR_1126af180;
    ppuVar3 = &PTR____CFConstantStringClassReference_110f5ec18;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f5ec18,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    func_0x00010beef320(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    func_0x00010befa120(puVar2);
    puVar6 = PTR_PTR_1126af180;
    ppuVar3 = &PTR____CFConstantStringClassReference_110f5ec38;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f5ec38,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    func_0x00010beef320(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    func_0x00010befa120(puVar2);
    puVar7 = PTR_PTR_1126af180;
    ppuVar3 = &PTR____CFConstantStringClassReference_110f5ec58;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f5ec58,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    func_0x00010beef320(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    func_0x00010befa120(puVar2);
    ppuVar3 = &PTR____CFConstantStringClassReference_110f5ec78;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f5ec78,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be04ca0(param_1);
    _objc_release(ppuVar3);
    _objc_release(puVar7);
    _objc_release(param_5);
    _objc_release(puVar6);
    _objc_release(param_5);
    _objc_release(puVar5);
    _objc_release(param_5);
    _objc_release(puVar4);
    _objc_release(param_5);
    _objc_release(puVar2);
    _objc_release(ppuVar1);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 10b254144; end: 10b254213;  */

void FUN_10b254144(double param_1,long param_2)

{
  FUN_10b254394();
  (**(code **)(*(long *)(param_2 + 0x28) + 0x10))
            (*(long *)(param_2 + 0x28),*(undefined1 *)(param_2 + 0x30),(long)(param_1 + 259200000.0)
            );
                    /* WARNING: Could not recover jumptable at 0x00010be522b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x20),PTR_s__logDataSaverEnableEventWithDura_112572248,
             0xf731400);
  return;
}



/* Entry: 10b254214; end: 10b25422b;  */

void FUN_10b254214(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b254228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28),0);
  return;
}



/* Entry: 10b25422c; end: 10b2542b7;  */

void FUN_10b25422c(long param_1,undefined8 param_2)

{
  func_0x00010c219cc0(*(undefined8 *)(param_1 + 0x20),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c189810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setDataSaverExpirationMillis__112640020,0);
  return;
}



/* Entry: 10b2542b8; end: 10b25432b; -[SCDataSaverModePromptCoordinator _logDataSaverEnableEventWithDurationMs:] */

void FUN_10b2542b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dfd08;
  _objc_opt_new(PTR_PTR_1126dfd08);
  func_0x00010c1897c0();
  func_0x00010c1897e0(puVar1,param_2,2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b25432c; end: 10b254393; -[SCDataSaverModePromptCoordinator _logDataSaverDisableEvent:] */

void FUN_10b25432c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b5578;
  _objc_opt_new(PTR_PTR_1126b5578);
  func_0x00010c1897a0();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b254394; end: 10b254413;  */

double FUN_10b254394(void)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  
  puVar1 = PTR_PTR_1126b39d0;
  func_0x00010c22ba80(PTR_PTR_1126b39d0);
  _objc_retainAutoreleasedReturnValue();
  dVar3 = 600.0;
  puVar2 = puVar1;
  func_0x00010c0d8200(0x4082c00000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c26f320(puVar2);
  _objc_release(puVar2);
  return (double)(long)(dVar3 * 1000.0);
}



/* Entry: 10b254414; end: 10b2544c3; -[SCDataSaverModePromptCoordinator _displayPromptWithIcon:title:message:actions:] */

void FUN_10b254414(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af4d8;
  if (param_3 == 0) {
    func_0x00010beff8a0(PTR_PTR_1126af4d8,param_2,param_4,param_5,0,param_6,0,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010beff860();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_storeWeak(param_1 + 8,puVar1);
  puVar2 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c00();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b2544c4; end: 10b254507; -[SCDataSaverModePromptCoordinator .cxx_destruct] */

void FUN_10b2544c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10b254508; end: 10b254623; -[SCUserSession dataSaverModePromptCoordinatorWithUserBlizzardLogger:] */

void FUN_10b254508(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010c0e0000(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b254624; end: 10b25466f; -[SCFeatureSettingsService dataSaverEnabled] */

void FUN_10b254624(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  _objc_opt_class();
  uVar2 = param_1;
  func_0x00010c27b040(param_1);
  func_0x00010bf642e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf642d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,PTR_s_dataSaverEnabledWithTravelModeEn_1125b6a58,uVar2,param_1);
  return;
}



/* Entry: 10b254670; end: 10b2546c7; -[SCPreloadController _appWillEnterForeground] */

void FUN_10b254670(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b2546c8;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x50),param_2,&puStack_38);
  return;
}



/* Entry: 10b2546c8; end: 10b2546cf;  */

void FUN_10b2546c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beddaf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updatePreloadMode_112595060);
  return;
}



/* Entry: 10b2546d0; end: 10b254727; -[SCPreloadController updatePreloadMode] */

void FUN_10b2546d0(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b254728;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x50),param_2,&puStack_38);
  return;
}



/* Entry: 10b254728; end: 10b25472f;  */

void FUN_10b254728(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beddaf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updatePreloadMode_112595060);
  return;
}



/* Entry: 10b254730; end: 10b25479b; -[SCPreloadController cleanupAfterLogout] */

void FUN_10b254730(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b25479c;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x50),param_2,&puStack_48);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  return;
}



/* Entry: 10b25479c; end: 10b2547af;  */

void FUN_10b25479c(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c189810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setDataSaverExpirationMillis__112640020,0);
  return;
}



/* Entry: 10b2547b0; end: 10b2547bf; -[SCPreloadController isUnderWifi] */

bool FUN_10b2547b0(long param_1)

{
  return *(long *)(param_1 + 8) == 2;
}



/* Entry: 10b2547c0; end: 10b2547f7; -[SCPreloadController shouldPrefetchExpensiveContent] */

undefined8 FUN_10b2547c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c27b040();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c081e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isUnderWifi_1125fe198);
    return param_1;
  }
  return 1;
}



/* Entry: 10b2547f8; end: 10b25481f; -[SCPreloadController preloadModeObservable] */

void FUN_10b2547f8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b254820; end: 10b25485f; -[SCPreloadController preloadMode] */

undefined8 FUN_10b254820(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b254860; end: 10b254863; -[SCPreloadController curPreloadMode] */

void FUN_10b254860(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c108850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_preloadMode_11261fc30);
  return;
}



/* Entry: 10b254864; end: 10b2548bf;  */

void FUN_10b254864(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be691e0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b2548c0; end: 10b2548f3;  */

void FUN_10b2548c0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdccec0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b2548f4; end: 10b254a7b; -[SCPreloadController _onFeatureSettingsDidChange:userSession:] */

void FUN_10b2548f4(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  func_0x00010bdc1320(PTR_PTR_1126dfd20,param_3,param_5,*(undefined8 *)(param_2 + 0x38));
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,&UNK_10f3309b5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar2 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,&UNK_10f3309b5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    *(char *)(param_2 + 0x20) = (char)lVar3;
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,&UNK_10f3309de);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar2 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,&UNK_10f3309de);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c189800(param_2,param_3,(long)param_1);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  func_0x00010beddae0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b254a7c; end: 10b254aab; -[SCPreloadController setQueuePerformer:] */

void FUN_10b254a7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b254aac; end: 10b254b0b; -[SCPreloadController .cxx_destruct] */

void FUN_10b254aac(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}


