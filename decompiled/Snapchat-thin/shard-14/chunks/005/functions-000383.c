/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b4e5014; end: 10b4e5027;  */

void FUN_10b4e5014(void)

{
  FUN_10b4e4fc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4e5028; end: 10b4e5033;  */

undefined ** FUN_10b4e5028(void)

{
  return &PTR_DAT_110cf2740;
}



/* Entry: 10b4e5034; end: 10b4e5083;  */

void FUN_10b4e5034(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b4f8f10(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
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



/* Entry: 10b4e5084; end: 10b4e5177;  */

long * FUN_10b4e5084(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar1 = param_1;
  if ((char)param_1[4] == '\x01') {
    plVar2 = param_1;
    func_0x00010b4e537c();
    plVar1 = (long *)0x8;
    func_0x000107c280a8(8,plVar2);
    func_0x00010b4e5370();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0x21) == '\x01') {
    func_0x00010b4e537c();
    plVar2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar1);
    func_0x00010b4e5370();
    param_2 = plVar2;
  }
  if (*(char *)((long)param_1 + 0x22) == '\x01') {
    func_0x00010b4e537c();
    param_2 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x00010b4e5370();
  }
  plVar1 = param_2;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    plVar1 = (long *)0x4;
    func_0x000107c303cc(4,param_1[3],*(undefined4 *)(param_1[3] + 0x30),param_2,param_3);
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
    if (*param_3 - (long)plVar1 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)plVar1) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar3 = (long)plVar1 + (long)iVar7;
        plVar1 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar1 + (long)iVar6);
    }
    _memcpy(plVar1,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)plVar1 + (long)(int)uVar4);
  }
  return plVar1;
}



/* Entry: 10b4e5178; end: 10b4e51e7;  */

void FUN_10b4e5178(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    FUN_10b4e51e8();
    iVar1 = iVar1 + 1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0x20) * 2 + (uint)*(byte *)(param_1 + 0x21) * 2 +
          (uint)*(byte *)(param_1 + 0x22) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



/* Entry: 10b4e51e8; end: 10b4e5213;  */

long FUN_10b4e51e8(long param_1)

{
  FUN_10b4f9054();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b4e5214; end: 10b4e5217;  */

void FUN_10b4e5214(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      func_0x00010b4e532c(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_10b4f9104(*(long *)(param_1 + 0x18));
    }
  }
  if (*(char *)(param_2 + 0x20) == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(char *)(param_2 + 0x21) == '\x01') {
    *(undefined1 *)(param_1 + 0x21) = 1;
  }
  if (*(char *)(param_2 + 0x22) == '\x01') {
    *(undefined1 *)(param_1 + 0x22) = 1;
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



/* Entry: 10b4e5218; end: 10b4e52db;  */

void FUN_10b4e5218(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      func_0x00010b4e532c(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_10b4f9104(*(long *)(param_1 + 0x18));
    }
  }
  if (*(char *)(param_2 + 0x20) == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(char *)(param_2 + 0x21) == '\x01') {
    *(undefined1 *)(param_1 + 0x21) = 1;
  }
  if (*(char *)(param_2 + 0x22) == '\x01') {
    *(undefined1 *)(param_1 + 0x22) = 1;
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



/* Entry: 10b4e52dc; end: 10b4e52e3;  */

void FUN_10b4e52dc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x28);
  }
  *puVar1 = &PTR_FUN_110cf2700;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)((long)puVar1 + 0x1f) = 0;
  return;
}



/* Entry: 10b4e52e4; end: 10b4e536f;  */

void FUN_10b4e52e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110cf2700;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)((long)puVar1 + 0x1f) = 0;
  return;
}



/* Entry: 10b4e5370; end: 10b4e539b;  */

void FUN_10b4e5370(byte *param_1)

{
  uint unaff_w21;
  
  for (; 0x7f < unaff_w21; unaff_w21 = unaff_w21 >> 7) {
    *param_1 = (byte)unaff_w21 | 0x80;
    param_1 = param_1 + 1;
  }
  *param_1 = (byte)unaff_w21;
  return;
}



/* Entry: 10b4e539c; end: 10b4e567b;  */

undefined8 * FUN_10b4e539c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf2810;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  func_0x000105991a48(param_1 + 3,param_2,param_3 + 0x18);
  FUN_10b4e6a58(param_1 + 7,param_2,param_3 + 0x38);
  FUN_10b4e6a58(param_1 + 10,param_2,param_3 + 0x50);
  func_0x00010b4e6f00(param_1 + 0xd);
  func_0x00010b4e6f00(param_1 + 0x10);
  func_0x00010b4e6f00(param_1 + 0x13);
  func_0x00010b4e6f00(param_1 + 0x16);
  func_0x00010b4e6f00(param_1 + 0x19);
  func_0x00010b4e6a98(param_1 + 0x1c,param_2,param_3 + 0xe0);
  func_0x00010b4e6a98(param_1 + 0x1f,param_2,param_3 + 0xf8);
  func_0x00010b4e6ab8(param_1 + 0x22,param_2,param_3 + 0x110);
  func_0x00010b4e6ab8(param_1 + 0x25,param_2,param_3 + 0x128);
  lVar2 = param_3 + 0x140;
  func_0x00010b4e6e8c();
  param_1[0x28] = lVar2;
  lVar2 = param_3 + 0x148;
  func_0x00010b4e6e8c();
  param_1[0x29] = lVar2;
  lVar2 = param_3 + 0x150;
  func_0x00010b4e6e8c();
  param_1[0x2a] = lVar2;
  lVar2 = param_3 + 0x158;
  func_0x00010b4e6e8c();
  param_1[0x2b] = lVar2;
  lVar2 = param_3 + 0x160;
  func_0x00010b4e6e8c();
  param_1[0x2c] = lVar2;
  lVar2 = param_3 + 0x168;
  func_0x00010b4e6e8c();
  param_1[0x2d] = lVar2;
  lVar2 = param_3 + 0x170;
  func_0x00010b4e6e8c();
  param_1[0x2e] = lVar2;
  lVar2 = param_3 + 0x178;
  func_0x00010b4e6e8c();
  param_1[0x2f] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b4e6cf0(param_2,*(undefined8 *)(param_3 + 0x180));
  }
  param_1[0x30] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b4e6d24(param_2,*(undefined8 *)(param_3 + 0x188));
  }
  param_1[0x31] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b4e6d24(param_2,*(undefined8 *)(param_3 + 400));
  }
  param_1[0x32] = uVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b4e6d58(param_2,*(undefined8 *)(param_3 + 0x198));
  }
  param_1[0x33] = uVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b4e6d58(param_2,*(undefined8 *)(param_3 + 0x1a0));
  }
  param_1[0x34] = uVar3;
  if ((uVar1 >> 5 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b4e6d94(param_2,*(undefined8 *)(param_3 + 0x1a8));
  }
  param_1[0x35] = param_2;
  uVar3 = *(undefined8 *)(param_3 + 0x1b0);
  *(undefined4 *)(param_1 + 0x37) = *(undefined4 *)(param_3 + 0x1b8);
  param_1[0x36] = uVar3;
  return param_1;
}



/* Entry: 10b4e567c; end: 10b4e56ab;  */

long FUN_10b4e567c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4e56ac(param_1);
  return param_1;
}



/* Entry: 10b4e56ac; end: 10b4e57c3;  */

undefined8 FUN_10b4e56ac(long param_1)

{
  undefined1 in_ZR;
  undefined8 unaff_x19;
  
  func_0x000107c30258(param_1 + 0x140);
  func_0x000107c30258(param_1 + 0x148);
  func_0x000107c30258(param_1 + 0x150);
  func_0x000107c30258(param_1 + 0x158);
  func_0x000107c30258(param_1 + 0x160);
  func_0x000107c30258(param_1 + 0x168);
  func_0x000107c30258(param_1 + 0x170);
  func_0x000107c30258(param_1 + 0x178);
  if (*(long *)(param_1 + 0x180) != 0) {
    FUN_10b4eac84();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x188) != 0) {
    FUN_10b4e702c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 400) != 0) {
    FUN_10b4e702c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x198) != 0) {
    FUN_10b4e7484();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x1a0) != 0) {
    FUN_10b4e7484();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x1a8) != 0) {
    FUN_10b4ee178();
  }
  __ZdlPv();
  FUN_10b4e6ad8(param_1 + 0x128);
  FUN_10b4e6ad8(param_1 + 0x110);
  FUN_10b4e6b00(param_1 + 0xf8);
  FUN_10b4e6b00(param_1 + 0xe0);
  FUN_10b4e6b28(param_1 + 200);
  FUN_10b4e6b28(param_1 + 0xb0);
  FUN_10b4e6b28(param_1 + 0x98);
  FUN_10b4e6b28(param_1 + 0x80);
  FUN_10b4e6b28(param_1 + 0x68);
  FUN_10b4e6b50(param_1 + 0x50);
  FUN_10b4e6b50(param_1 + 0x38);
  func_0x00010006804c(param_1 + 0x18);
  if (!(bool)in_ZR) {
    func_0x000105992fbc(unaff_x19,0x300380020);
  }
  return unaff_x19;
}



/* Entry: 10b4e57c4; end: 10b4e57c7;  */

long FUN_10b4e57c4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4e56ac(param_1);
  return param_1;
}



/* Entry: 10b4e57c8; end: 10b4e57db;  */

void FUN_10b4e57c8(void)

{
  FUN_10b4e567c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4e57dc; end: 10b4e57e7;  */

undefined ** FUN_10b4e57dc(void)

{
  return &PTR_DAT_110cf2850;
}



/* Entry: 10b4e57e8; end: 10b4e592f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b4e57e8(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000105991b74(param_1 + 0x18);
  func_0x00010b4e6cb4(param_1 + 0x38);
  func_0x00010b4e6cb4(param_1 + 0x50);
  func_0x00010b4e6cc8(param_1 + 0x68);
  func_0x00010b4e6cc8(param_1 + 0x80);
  func_0x00010b4e6cc8(param_1 + 0x98);
  func_0x00010b4e6cc8(param_1 + 0xb0);
  func_0x00010b4e6cc8(param_1 + 200);
  func_0x00010b4e6ca0(param_1 + 0xe0);
  func_0x00010b4e6ca0(param_1 + 0xf8);
  func_0x00010b4e6cdc(param_1 + 0x110);
  func_0x00010b4e6cdc(param_1 + 0x128);
  func_0x000107c3025c(param_1 + 0x140);
  func_0x000107c3025c(param_1 + 0x148);
  func_0x000107c3025c(param_1 + 0x150);
  func_0x000107c3025c(param_1 + 0x158);
  func_0x000107c3025c(param_1 + 0x160);
  func_0x000107c3025c(param_1 + 0x168);
  func_0x000107c3025c(param_1 + 0x170);
  func_0x000107c3025c(param_1 + 0x178);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b4eacd8(*(undefined8 *)(param_1 + 0x180));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b4e70cc(*(undefined8 *)(param_1 + 0x188));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b4e70cc(*(undefined8 *)(param_1 + 400));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_10b4e7508(*(undefined8 *)(param_1 + 0x198));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_10b4e7508(*(undefined8 *)(param_1 + 0x1a0));
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_10b4ee210(*(undefined8 *)(param_1 + 0x1a8));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
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



/* Entry: 10b4e5930; end: 10b4e5fab;  */

undefined8 ** FUN_10b4e5930(undefined8 **param_1,undefined8 **param_2,undefined8 **param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  undefined8 uVar7;
  undefined8 **ppuVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *unaff_x22;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puStack_78;
  undefined8 *apuStack_70 [2];
  
  ppuVar4 = param_1;
  ppuVar8 = param_2;
  func_0x00010b4e6edc(param_1[0x28]);
  if ((long)ppuVar8 < 0) {
    ppuVar8 = (undefined8 **)0x0;
    if (unaff_x22[1] != 0) goto LAB_10b4e5980;
  }
  else if ((int)ppuVar8 != 0) {
LAB_10b4e5980:
    func_0x00010b4e6e78();
    ppuVar8 = (undefined8 **)0x1;
    ppuVar4 = param_3;
    func_0x00010b4e6e44();
    param_2 = ppuVar4;
  }
  func_0x00010b4e6edc(param_1[0x29]);
  if ((long)ppuVar8 < 0) {
    ppuVar8 = (undefined8 **)0x0;
    if (unaff_x22[1] != 0) goto LAB_10b4e59c0;
  }
  else if ((int)ppuVar8 != 0) {
LAB_10b4e59c0:
    func_0x00010b4e6e78();
    ppuVar8 = (undefined8 **)0x2;
    ppuVar4 = param_3;
    func_0x00010b4e6e44();
    param_2 = ppuVar4;
  }
  func_0x00010b4e6edc(param_1[0x2a]);
  if ((long)ppuVar8 < 0) {
    ppuVar8 = (undefined8 **)0x0;
    if (unaff_x22[1] != 0) goto LAB_10b4e5a00;
  }
  else if ((int)ppuVar8 != 0) {
LAB_10b4e5a00:
    func_0x00010b4e6e78();
    ppuVar8 = (undefined8 **)0x3;
    ppuVar4 = param_3;
    func_0x00010b4e6e44();
    param_2 = ppuVar4;
  }
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    ppuVar8 = (undefined8 **)param_1[0x30];
    ppuVar4 = (undefined8 **)0x4;
    func_0x00010b4e6e38(4,ppuVar8,*(int *)((long)ppuVar8 + 0x2c));
    param_2 = ppuVar4;
  }
  func_0x00010b4e6edc(param_1[0x2b]);
  if ((long)ppuVar8 < 0) {
    ppuVar8 = (undefined8 **)0x0;
    if (unaff_x22[1] != 0) goto LAB_10b4e5a5c;
  }
  else if ((int)ppuVar8 != 0) {
LAB_10b4e5a5c:
    func_0x00010b4e6e78();
    ppuVar8 = (undefined8 **)0x5;
    ppuVar4 = param_3;
    func_0x00010b4e6e44();
    param_2 = ppuVar4;
  }
  func_0x00010b4e6edc(param_1[0x2c]);
  if ((long)ppuVar8 < 0) {
    if (unaff_x22[1] != 0) goto LAB_10b4e5a9c;
  }
  else if ((int)ppuVar8 != 0) {
LAB_10b4e5a9c:
    func_0x00010b4e6e78();
    ppuVar4 = param_3;
    func_0x00010b4e6e44(param_3,6);
    param_2 = ppuVar4;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    ppuVar4 = (undefined8 **)0x7;
    func_0x00010b4e6e38(7,param_1[0x31],*(undefined4 *)((long)param_1[0x31] + 0x14));
    param_2 = ppuVar4;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    ppuVar4 = (undefined8 **)0x8;
    func_0x00010b4e6e38(8,param_1[0x32],*(undefined4 *)((long)param_1[0x32] + 0x14));
    param_2 = ppuVar4;
  }
  ppuVar8 = param_1 + 3;
  if (*(int *)ppuVar8 != 0) {
    if ((*(int *)ppuVar8 == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      ppuVar6 = &puStack_78;
      func_0x00010564c19c();
      unaff_x22 = (undefined8 *)&UNK_10f774d85;
      while (ppuVar4 = ppuVar6, puVar3 = puStack_78, puStack_78 != (undefined8 *)0x0) {
        puVar5 = puStack_78 + 1;
        puVar11 = puStack_78 + 4;
        func_0x00010b4e6ee8();
        lVar12 = (long)*(char *)((long)puVar3 + 0x1f);
        if (lVar12 < 0) {
          puVar5 = (undefined8 *)puVar3[1];
          lVar12 = puVar3[2];
        }
        func_0x00010b4e6e64(puVar5,lVar12);
        ppuVar8 = (undefined8 **)(long)*(char *)((long)puVar3 + 0x37);
        if ((long)ppuVar8 < 0) {
          puVar11 = (undefined8 *)puVar3[4];
          ppuVar8 = (undefined8 **)puVar3[5];
        }
        func_0x00010b4e6e64(puVar11);
        ppuVar6 = &puStack_78;
        func_0x000107c27d54();
        param_2 = ppuVar4;
      }
    }
    else {
      ppuVar4 = &puStack_78;
      func_0x000105991b98(ppuVar4);
      unaff_x22 = (undefined8 *)&UNK_10f774d85;
      puVar3 = apuStack_70[0];
      for (lVar12 = (long)puStack_78 << 3; ppuVar6 = ppuVar4, lVar12 != 0; lVar12 = lVar12 + -8) {
        puVar11 = (undefined8 *)*puVar3;
        ppuVar4 = (undefined8 **)(puVar11 + 3);
        func_0x00010b4e6ee8();
        lVar9 = (long)*(char *)((long)puVar11 + 0x17);
        puVar5 = puVar11;
        if (lVar9 < 0) {
          lVar9 = puVar11[1];
          puVar5 = (undefined8 *)*puVar11;
        }
        func_0x00010b4e6e64(puVar5,lVar9);
        ppuVar8 = (undefined8 **)(long)*(char *)((long)puVar11 + 0x2f);
        if ((long)ppuVar8 < 0) {
          ppuVar4 = (undefined8 **)puVar11[3];
          ppuVar8 = (undefined8 **)puVar11[4];
        }
        func_0x00010b4e6e64(ppuVar4);
        puVar3 = puVar3 + 1;
        param_2 = ppuVar6;
      }
      ppuVar4 = apuStack_70;
      func_0x000105991ac8();
    }
  }
  func_0x00010b4e6edc(param_1[0x2d]);
  if ((long)ppuVar8 < 0) {
    ppuVar8 = (undefined8 **)0x0;
    if (unaff_x22[1] != 0) {
      unaff_x22 = (undefined8 *)*unaff_x22;
      goto LAB_10b4e5b98;
    }
  }
  else if ((int)ppuVar8 != 0) {
LAB_10b4e5b98:
    func_0x00010b4e6e78(unaff_x22);
    ppuVar8 = (undefined8 **)0xa;
    ppuVar4 = param_3;
    func_0x00010b4e6e44();
    param_2 = ppuVar4;
  }
  if (*(char *)(param_1 + 0x36) == '\x01') {
    func_0x00010b4e6eb8();
    param_2 = (undefined8 **)(ulong)*(byte *)(param_1 + 0x36);
    ppuVar8 = (undefined8 **)0x58;
    func_0x000107c280a8(0x58,ppuVar4);
    func_0x000107c280a8();
    ppuVar4 = param_2;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    ppuVar8 = (undefined8 **)param_1[0x33];
    ppuVar4 = (undefined8 **)0xc;
    func_0x00010b4e6e38(0xc,ppuVar8,*(int *)((long)ppuVar8 + 0x14));
    param_2 = ppuVar4;
  }
  if ((uVar1 >> 4 & 1) != 0) {
    ppuVar8 = (undefined8 **)param_1[0x34];
    ppuVar4 = (undefined8 **)0xd;
    func_0x00010b4e6e38(0xd,ppuVar8,*(int *)((long)ppuVar8 + 0x14));
    param_2 = ppuVar4;
  }
  iVar2 = *(int *)(param_1 + 8);
  while (iVar2 != 0) {
    func_0x00010b4e6dd0();
    ppuVar4 = (undefined8 **)0xe;
    func_0x00010b4e6e38();
    func_0x00010b4e6ea0();
  }
  iVar2 = *(int *)(param_1 + 0xb);
  while (iVar2 != 0) {
    func_0x00010b4e6dd0();
    ppuVar4 = (undefined8 **)0xf;
    func_0x00010b4e6e38();
    func_0x00010b4e6ea0();
  }
  iVar2 = *(int *)(param_1 + 0xe);
  while (iVar2 != 0) {
    func_0x00010b4e6dd0();
    ppuVar4 = (undefined8 **)0x10;
    func_0x00010b4e6e38();
    func_0x00010b4e6ea0();
  }
  iVar2 = *(int *)(param_1 + 0x11);
  while (iVar2 != 0) {
    func_0x00010b4e6dd0();
    ppuVar4 = (undefined8 **)0x11;
    func_0x00010b4e6e38();
    func_0x00010b4e6ea0();
  }
  if ((uVar1 >> 5 & 1) != 0) {
    ppuVar8 = (undefined8 **)param_1[0x35];
    ppuVar4 = (undefined8 **)0x12;
    func_0x00010b4e6e38(0x12,ppuVar8,*(int *)((long)ppuVar8 + 0x14));
    param_2 = ppuVar4;
  }
  ppuVar6 = ppuVar4;
  if (*(int *)((long)param_1 + 0x1b4) != 0) {
    func_0x00010b4e6eb8();
    ppuVar6 = (undefined8 **)0x98;
    func_0x000107c280a8();
    func_0x00010b4e6f18();
    ppuVar8 = ppuVar4;
    param_2 = ppuVar6;
  }
  if (*(int *)(param_1 + 0x37) != 0) {
    func_0x00010b4e6eb8();
    param_2 = (undefined8 **)0xa0;
    func_0x000107c280a8(0xa0);
    func_0x00010b4e6f18();
    ppuVar8 = ppuVar6;
  }
  iVar2 = *(int *)(param_1 + 0x14);
  while (iVar2 != 0) {
    func_0x00010b4e6dd0();
    func_0x00010b4e6e38(0x15);
    func_0x00010b4e6ea0();
  }
  iVar2 = *(int *)(param_1 + 0x17);
  while (iVar2 != 0) {
    func_0x00010b4e6dd0();
    func_0x00010b4e6e38(0x16);
    func_0x00010b4e6ea0();
  }
  iVar2 = *(int *)(param_1 + 0x1a);
  while (iVar2 != 0) {
    func_0x00010b4e6dd0();
    func_0x00010b4e6e38(0x17);
    func_0x00010b4e6ea0();
  }
  iVar2 = *(int *)(param_1 + 0x1d);
  while (iVar2 != 0) {
    func_0x00010b4e6dd0();
    func_0x00010b4e6e38(0x18);
    func_0x00010b4e6ea0();
  }
  iVar2 = *(int *)(param_1 + 0x20);
  while (iVar2 != 0) {
    func_0x00010b4e6dd0();
    func_0x00010b4e6e38(0x19);
    func_0x00010b4e6ea0();
  }
  func_0x00010b4e6edc(param_1[0x2e]);
  if ((long)ppuVar8 < 0) {
    ppuVar8 = (undefined8 **)0x0;
    uVar7 = uRam0000000000000000;
    if (lRam0000000000000008 != 0) goto LAB_10b4e5e30;
  }
  else if ((int)ppuVar8 != 0) {
    uVar7 = 0;
LAB_10b4e5e30:
    func_0x00010b4e6e78(uVar7);
    ppuVar8 = (undefined8 **)0x1a;
    param_2 = param_3;
    func_0x00010b4e6e44(param_3);
  }
  func_0x00010b4e6edc(param_1[0x2f]);
  if ((long)ppuVar8 < 0) {
    uVar7 = uRam0000000000000000;
    if (lRam0000000000000008 == 0) goto LAB_10b4e5e8c;
  }
  else {
    if ((int)ppuVar8 == 0) goto LAB_10b4e5e8c;
    uVar7 = 0;
  }
  func_0x00010b4e6e78(uVar7);
  param_2 = param_3;
  func_0x00010b4e6e44(param_3);
LAB_10b4e5e8c:
  iVar2 = *(int *)(param_1 + 0x23);
  while (iVar2 != 0) {
    func_0x00010b4e6dd0();
    func_0x00010b4e6e38(0x1c);
    func_0x00010b4e6ea0();
  }
  iVar2 = *(int *)(param_1 + 0x26);
  while (iVar2 != 0) {
    func_0x00010b4e6dd0();
    func_0x00010b4e6e38(0x1d);
    func_0x00010b4e6ea0();
  }
  if (((ulong)param_1[1] & 1) != 0) {
    uVar10 = (ulong)param_1[1] & 0xfffffffffffffffe;
    lVar12 = (long)*(char *)(uVar10 + 0x1f);
    if (lVar12 < 0) {
      lVar9 = *(long *)(uVar10 + 8);
      lVar12 = *(long *)(uVar10 + 0x10);
    }
    else {
      lVar9 = uVar10 + 8;
    }
    func_0x0001053930c4(param_3,lVar9,lVar12,param_2);
    param_2 = param_3;
  }
  return param_2;
}



/* Entry: 10b4e5fac; end: 10b4e634f;  */

/* WARNING: Removing unreachable block (ram,0x00010b4e6124) */
/* WARNING: Removing unreachable block (ram,0x00010b4e60dc) */
/* WARNING: Removing unreachable block (ram,0x00010b4e60a4) */
/* WARNING: Removing unreachable block (ram,0x00010b4e606c) */
/* WARNING: Removing unreachable block (ram,0x00010b4e6034) */
/* WARNING: Removing unreachable block (ram,0x00010b4e6050) */
/* WARNING: Removing unreachable block (ram,0x00010b4e6088) */
/* WARNING: Removing unreachable block (ram,0x00010b4e60c0) */
/* WARNING: Removing unreachable block (ram,0x00010b4e60fc) */
/* WARNING: Removing unreachable block (ram,0x00010b4e614c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10b4e5fac(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long extraout_x8;
  long lVar6;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  ulong uVar7;
  long unaff_x22;
  long alStack_48 [3];
  
  uVar7 = (ulong)*(uint *)(param_1 + 0x18);
  plVar5 = alStack_48;
  func_0x00010564c19c();
  while (alStack_48[0] != 0) {
    lVar6 = alStack_48[0] + 8;
    func_0x000105990b3c(lVar6,alStack_48[0] + 0x20);
    uVar7 = lVar6 + uVar7;
    plVar5 = alStack_48;
    func_0x000107c27d54();
  }
  iVar4 = *(int *)(param_1 + 0x40);
  func_0x00010b4e6e24();
  while (unaff_x22 != 0) {
    func_0x00010b4e6f3c();
    func_0x00010b4e6e94();
  }
  iVar3 = *(int *)(param_1 + 0x58);
  func_0x00010b4e6e24();
  func_0x00010b4e6e08();
  func_0x00010b4e6e08();
  func_0x00010b4e6e08();
  func_0x00010b4e6e08();
  func_0x00010b4e6e08();
  func_0x00010b4e6e08();
  func_0x00010b4e6e08();
  iVar2 = *(int *)(param_1 + 0x118);
  func_0x00010b4e6f64();
  iVar4 = (int)uVar7 + iVar4 + iVar3 + iVar2 * 2 + *(int *)(param_1 + 0x130) * 2;
  func_0x00010b4e6f64();
  func_0x00010b4e6eac(*(undefined8 *)(param_1 + 0x140));
  lVar6 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar6 = plVar5[1];
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b4e6e80();
  }
  func_0x00010b4e6eac(*(undefined8 *)(param_1 + 0x148));
  lVar6 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar6 = plVar5[1];
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b4e6e80();
  }
  func_0x00010b4e6eac(*(undefined8 *)(param_1 + 0x150));
  lVar6 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar6 = plVar5[1];
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b4e6e80();
  }
  func_0x00010b4e6eac(*(undefined8 *)(param_1 + 0x158));
  lVar6 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar6 = plVar5[1];
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b4e6e80();
  }
  func_0x00010b4e6eac(*(undefined8 *)(param_1 + 0x160));
  lVar6 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar6 = plVar5[1];
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b4e6e80();
  }
  func_0x00010b4e6eac(*(undefined8 *)(param_1 + 0x168));
  lVar6 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar6 = plVar5[1];
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b4e6e80();
  }
  func_0x00010b4e6eac(*(undefined8 *)(param_1 + 0x170));
  lVar6 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar6 = plVar5[1];
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    iVar4 = iVar4 + (int)plVar5 + 2;
  }
  func_0x00010b4e6eac(*(undefined8 *)(param_1 + 0x178));
  lVar6 = extraout_x8_06;
  if (extraout_x8_06 < 0) {
    lVar6 = plVar5[1];
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    iVar4 = iVar4 + (int)plVar5 + 2;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b4e6350(*(undefined8 *)(param_1 + 0x180));
      func_0x00010b4e6e80();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b4e63b0(*(undefined8 *)(param_1 + 0x188));
      func_0x00010b4e6e80();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010b4e63b0(*(undefined8 *)(param_1 + 400));
      func_0x00010b4e6e80();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010b4e63c8(*(undefined8 *)(param_1 + 0x198));
      func_0x00010b4e6e80();
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x00010b4e63c8(*(undefined8 *)(param_1 + 0x1a0));
      func_0x00010b4e6e80();
    }
    if ((uVar1 >> 5 & 1) != 0) {
      iVar3 = (int)*(undefined8 *)(param_1 + 0x1a8);
      func_0x00010b4e63e0();
      iVar4 = iVar4 + iVar3 + 2;
    }
  }
  iVar4 = iVar4 + (uint)*(byte *)(param_1 + 0x1b0) * 2;
  if (*(int *)(param_1 + 0x1b4) != 0) {
    iVar4 = iVar4 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x1b4)) * -9 + 0x280U >> 6) + 2;
  }
  if (*(int *)(param_1 + 0x1b8) != 0) {
    iVar4 = iVar4 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x1b8)) * -9 + 0x280U >> 6) + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar7 + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)(uVar7 + 0x10);
    }
    iVar4 = (int)lVar6 + iVar4;
  }
  *(int *)(param_1 + 0x14) = iVar4;
  return;
}



/* Entry: 10b4e6350; end: 10b4e63f7;  */

void FUN_10b4e6350(void)

{
  FUN_10b4eae10();
  func_0x00010b4e6dec();
  return;
}



/* Entry: 10b4e63f8; end: 10b4e63fb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b4e63f8(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  func_0x0001059929d4(param_1 + 0x18,param_2 + 0x18);
  FUN_10b4e677c(param_1 + 0x38,param_2 + 0x38);
  FUN_10b4e677c(param_1 + 0x50,param_2 + 0x50);
  func_0x00010b4e678c(param_1 + 0x68,param_2 + 0x68);
  func_0x00010b4e678c(param_1 + 0x80,param_2 + 0x80);
  func_0x00010b4e678c(param_1 + 0x98,param_2 + 0x98);
  func_0x00010b4e678c(param_1 + 0xb0,param_2 + 0xb0);
  func_0x00010b4e678c(param_1 + 200,param_2 + 200);
  func_0x00010b4e679c(param_1 + 0xe0,param_2 + 0xe0);
  func_0x00010b4e679c(param_1 + 0xf8,param_2 + 0xf8);
  func_0x00010b4e67ac(param_1 + 0x110,param_2 + 0x110);
  lVar3 = param_2 + 0x128;
  func_0x00010b4e67ac(param_1 + 0x128);
  func_0x00010b4e6ed0(*(undefined8 *)(param_2 + 0x140));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4e6ec4();
    }
    func_0x000107c30248(param_1 + 0x140);
  }
  func_0x00010b4e6ed0(*(undefined8 *)(param_2 + 0x148));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4e6ec4();
    }
    func_0x000107c30248(param_1 + 0x148);
  }
  func_0x00010b4e6ed0(*(undefined8 *)(param_2 + 0x150));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4e6ec4();
    }
    func_0x000107c30248(param_1 + 0x150);
  }
  func_0x00010b4e6ed0(*(undefined8 *)(param_2 + 0x158));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4e6ec4();
    }
    func_0x000107c30248(param_1 + 0x158);
  }
  func_0x00010b4e6ed0(*(undefined8 *)(param_2 + 0x160));
  lVar4 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4e6ec4();
    }
    func_0x000107c30248(param_1 + 0x160);
  }
  func_0x00010b4e6ed0(*(undefined8 *)(param_2 + 0x168));
  lVar4 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4e6ec4();
    }
    func_0x000107c30248(param_1 + 0x168);
  }
  func_0x00010b4e6ed0(*(undefined8 *)(param_2 + 0x170));
  lVar4 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4e6ec4();
    }
    func_0x000107c30248(param_1 + 0x170);
  }
  func_0x00010b4e6ed0(*(undefined8 *)(param_2 + 0x178));
  lVar4 = extraout_x8_06;
  if (extraout_x8_06 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4e6ec4();
    }
    func_0x000107c30248(param_1 + 0x178);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x180) == 0) {
        uVar2 = uVar5;
        func_0x00010b4e6cf0(uVar5,*(undefined8 *)(param_2 + 0x180));
        *(ulong *)(param_1 + 0x180) = uVar2;
      }
      else {
        FUN_10b4eaedc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x188) == 0) {
        uVar2 = uVar5;
        func_0x00010b4e6d24(uVar5,*(undefined8 *)(param_2 + 0x188));
        *(ulong *)(param_1 + 0x188) = uVar2;
      }
      else {
        FUN_10b4e7294();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 400) == 0) {
        uVar2 = uVar5;
        func_0x00010b4e6d24(uVar5,*(undefined8 *)(param_2 + 400));
        *(ulong *)(param_1 + 400) = uVar2;
      }
      else {
        FUN_10b4e7294();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x198) == 0) {
        uVar2 = uVar5;
        func_0x00010b4e6d58(uVar5,*(undefined8 *)(param_2 + 0x198));
        *(ulong *)(param_1 + 0x198) = uVar2;
      }
      else {
        FUN_10b4e76b4();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0x1a0) == 0) {
        uVar2 = uVar5;
        func_0x00010b4e6d58(uVar5,*(undefined8 *)(param_2 + 0x1a0));
        *(ulong *)(param_1 + 0x1a0) = uVar2;
      }
      else {
        FUN_10b4e76b4();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      if (*(long *)(param_1 + 0x1a8) == 0) {
        func_0x00010b4e6d94(uVar5,*(undefined8 *)(param_2 + 0x1a8));
        *(ulong *)(param_1 + 0x1a8) = uVar5;
      }
      else {
        FUN_10b4ee4e8();
      }
    }
  }
  if (*(char *)(param_2 + 0x1b0) == '\x01') {
    *(undefined1 *)(param_1 + 0x1b0) = 1;
  }
  if (*(int *)(param_2 + 0x1b4) != 0) {
    *(int *)(param_1 + 0x1b4) = *(int *)(param_2 + 0x1b4);
  }
  if (*(int *)(param_2 + 0x1b8) != 0) {
    *(int *)(param_1 + 0x1b8) = *(int *)(param_2 + 0x1b8);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b4e63fc; end: 10b4e677b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b4e63fc(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  func_0x0001059929d4(param_1 + 0x18,param_2 + 0x18);
  FUN_10b4e677c(param_1 + 0x38,param_2 + 0x38);
  FUN_10b4e677c(param_1 + 0x50,param_2 + 0x50);
  func_0x00010b4e678c(param_1 + 0x68,param_2 + 0x68);
  func_0x00010b4e678c(param_1 + 0x80,param_2 + 0x80);
  func_0x00010b4e678c(param_1 + 0x98,param_2 + 0x98);
  func_0x00010b4e678c(param_1 + 0xb0,param_2 + 0xb0);
  func_0x00010b4e678c(param_1 + 200,param_2 + 200);
  func_0x00010b4e679c(param_1 + 0xe0,param_2 + 0xe0);
  func_0x00010b4e679c(param_1 + 0xf8,param_2 + 0xf8);
  func_0x00010b4e67ac(param_1 + 0x110,param_2 + 0x110);
  lVar3 = param_2 + 0x128;
  func_0x00010b4e67ac(param_1 + 0x128);
  func_0x00010b4e6ed0(*(undefined8 *)(param_2 + 0x140));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4e6ec4();
    }
    func_0x000107c30248(param_1 + 0x140);
  }
  func_0x00010b4e6ed0(*(undefined8 *)(param_2 + 0x148));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4e6ec4();
    }
    func_0x000107c30248(param_1 + 0x148);
  }
  func_0x00010b4e6ed0(*(undefined8 *)(param_2 + 0x150));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4e6ec4();
    }
    func_0x000107c30248(param_1 + 0x150);
  }
  func_0x00010b4e6ed0(*(undefined8 *)(param_2 + 0x158));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4e6ec4();
    }
    func_0x000107c30248(param_1 + 0x158);
  }
  func_0x00010b4e6ed0(*(undefined8 *)(param_2 + 0x160));
  lVar4 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4e6ec4();
    }
    func_0x000107c30248(param_1 + 0x160);
  }
  func_0x00010b4e6ed0(*(undefined8 *)(param_2 + 0x168));
  lVar4 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4e6ec4();
    }
    func_0x000107c30248(param_1 + 0x168);
  }
  func_0x00010b4e6ed0(*(undefined8 *)(param_2 + 0x170));
  lVar4 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4e6ec4();
    }
    func_0x000107c30248(param_1 + 0x170);
  }
  func_0x00010b4e6ed0(*(undefined8 *)(param_2 + 0x178));
  lVar4 = extraout_x8_06;
  if (extraout_x8_06 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4e6ec4();
    }
    func_0x000107c30248(param_1 + 0x178);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x180) == 0) {
        uVar2 = uVar5;
        func_0x00010b4e6cf0(uVar5,*(undefined8 *)(param_2 + 0x180));
        *(ulong *)(param_1 + 0x180) = uVar2;
      }
      else {
        FUN_10b4eaedc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x188) == 0) {
        uVar2 = uVar5;
        func_0x00010b4e6d24(uVar5,*(undefined8 *)(param_2 + 0x188));
        *(ulong *)(param_1 + 0x188) = uVar2;
      }
      else {
        FUN_10b4e7294();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 400) == 0) {
        uVar2 = uVar5;
        func_0x00010b4e6d24(uVar5,*(undefined8 *)(param_2 + 400));
        *(ulong *)(param_1 + 400) = uVar2;
      }
      else {
        FUN_10b4e7294();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x198) == 0) {
        uVar2 = uVar5;
        func_0x00010b4e6d58(uVar5,*(undefined8 *)(param_2 + 0x198));
        *(ulong *)(param_1 + 0x198) = uVar2;
      }
      else {
        FUN_10b4e76b4();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0x1a0) == 0) {
        uVar2 = uVar5;
        func_0x00010b4e6d58(uVar5,*(undefined8 *)(param_2 + 0x1a0));
        *(ulong *)(param_1 + 0x1a0) = uVar2;
      }
      else {
        FUN_10b4e76b4();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      if (*(long *)(param_1 + 0x1a8) == 0) {
        func_0x00010b4e6d94(uVar5,*(undefined8 *)(param_2 + 0x1a8));
        *(ulong *)(param_1 + 0x1a8) = uVar5;
      }
      else {
        FUN_10b4ee4e8();
      }
    }
  }
  if (*(char *)(param_2 + 0x1b0) == '\x01') {
    *(undefined1 *)(param_1 + 0x1b0) = 1;
  }
  if (*(int *)(param_2 + 0x1b4) != 0) {
    *(int *)(param_1 + 0x1b4) = *(int *)(param_2 + 0x1b4);
  }
  if (*(int *)(param_2 + 0x1b8) != 0) {
    *(int *)(param_1 + 0x1b8) = *(int *)(param_2 + 0x1b8);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b4e677c; end: 10b4e67bb;  */

void FUN_10b4e677c(long *param_1,long param_2)

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



/* Entry: 10b4e67bc; end: 10b4e67f3;  */

long FUN_10b4e67bc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x28);
  FUN_10b4e6b50(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b4e67f4; end: 10b4e67f7;  */

long FUN_10b4e67f4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x28);
  FUN_10b4e6b50(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b4e67f8; end: 10b4e680b;  */

void FUN_10b4e67f8(void)

{
  FUN_10b4e67bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4e680c; end: 10b4e6817;  */

undefined ** FUN_10b4e680c(void)

{
  return &PTR_DAT_110cf2898;
}



/* Entry: 10b4e6818; end: 10b4e6857;  */

void FUN_10b4e6818(long param_1)

{
  ulong *puVar1;
  
  func_0x00010b4e6cb4(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x28);
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



/* Entry: 10b4e6858; end: 10b4e694b;  */

long * FUN_10b4e6858(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long unaff_x22;
  int iVar6;
  
  plVar1 = param_2;
  func_0x00010b4e6edc(*(undefined8 *)(param_1 + 0x28));
  if ((long)plVar1 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b4e68c0;
  }
  else if ((int)plVar1 == 0) goto LAB_10b4e68c0;
  func_0x00010b4e6e78();
  param_2 = param_3;
  func_0x000107c280a0();
LAB_10b4e68c0:
  iVar6 = *(int *)(param_1 + 0x18);
  for (iVar5 = 0; iVar6 != iVar5; iVar5 = iVar5 + 1) {
    func_0x00010b4e6dd0();
    param_2 = (long *)0x2;
    func_0x000107c303cc();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar3 < 0) {
      lVar2 = *(long *)(uVar4 + 8);
      uVar3 = *(ulong *)(uVar4 + 0x10);
    }
    else {
      lVar2 = uVar4 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      while( true ) {
        iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar5 = (int)uVar3;
        uVar3 = (ulong)(uint)(iVar5 - iVar6);
        if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        lVar2 = (long)param_2 + (long)iVar6;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar2);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar5);
    }
    _memcpy(param_2,lVar2,uVar3 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar3);
  }
  return param_2;
}



/* Entry: 10b4e694c; end: 10b4e69d7;  */

ulong FUN_10b4e694c(long param_1)

{
  long extraout_x8;
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = (ulong)*(int *)(param_1 + 0x18);
  lVar2 = param_1;
  while ((uVar4 & 0x1fffffffffffffff) != 0) {
    func_0x00010b4e6f3c();
    func_0x00010b4e6e94();
  }
  func_0x00010b4e6eac(*(undefined8 *)(param_1 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b4e6e80();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar4 = lVar2 + uVar4;
  }
  *(int *)(param_1 + 0x30) = (int)uVar4;
  return uVar4;
}



/* Entry: 10b4e69d8; end: 10b4e6a47;  */

void FUN_10b4e69d8(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = param_2 + 0x10;
  FUN_10b4e677c(param_1 + 0x10);
  func_0x00010b4e6ed0(*(undefined8 *)(param_2 + 0x28));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4e6ec4();
    }
    func_0x000107c30248(param_1 + 0x28);
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



/* Entry: 10b4e6a48; end: 10b4e6a57;  */

void FUN_10b4e6a48(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x38);
  }
  *puVar1 = &PTR_FUN_110cf27c0;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_2;
  puVar1[5] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 10b4e6a58; end: 10b4e6ad7;  */

void FUN_10b4e6a58(void)

{
  func_0x00010b4e6e50();
  FUN_10b4e677c();
  return;
}



/* Entry: 10b4e6ad8; end: 10b4e6aff;  */

void FUN_10b4e6ad8(void)

{
  long extraout_x8;
  
  func_0x00010b4e6f78();
  if (extraout_x8 != 0) {
    func_0x00010b4e6f10();
  }
  return;
}



/* Entry: 10b4e6b00; end: 10b4e6b27;  */

void FUN_10b4e6b00(void)

{
  long extraout_x8;
  
  func_0x00010b4e6f78();
  if (extraout_x8 != 0) {
    func_0x00010b4e6f10();
  }
  return;
}



/* Entry: 10b4e6b28; end: 10b4e6b4f;  */

void FUN_10b4e6b28(void)

{
  long extraout_x8;
  
  func_0x00010b4e6f78();
  if (extraout_x8 != 0) {
    func_0x00010b4e6f10();
  }
  return;
}



/* Entry: 10b4e6b50; end: 10b4e6b77;  */

void FUN_10b4e6b50(void)

{
  long extraout_x8;
  
  func_0x00010b4e6f78();
  if (extraout_x8 != 0) {
    func_0x00010b4e6f10();
  }
  return;
}



/* Entry: 10b4e6b78; end: 10b4e6c9f;  */

void FUN_10b4e6b78(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x38);
  }
  *puVar1 = &PTR_FUN_110cf27c0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  puVar1[5] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 10b4e6ca0; end: 10b4e6cef;  */

void FUN_10b4e6ca0(ulong *param_1)

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



/* Entry: 10b4e6cf0; end: 10b4e6dcf;  */

undefined8 * FUN_10b4e6cf0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  func_0x00010b4e6f4c();
  if (param_1 == (undefined8 *)0x0) {
    param_1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    func_0x00010b4e6f24();
  }
  func_0x00010b4e6f58();
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf2f88;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10b4eaf4c(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 0x28);
  return param_1;
}



/* Entry: 10b4e6dd0; end: 10b4e6f83;  */

void FUN_10b4e6dd0(void)

{
  return;
}



/* Entry: 10b4e6f84; end: 10b4e702b;  */

undefined8 * FUN_10b4e6f84(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf2930;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x000106af6830(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x000106af6730(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = uVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x000106af6730(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = param_2;
  return param_1;
}



/* Entry: 10b4e702c; end: 10b4e705f;  */

long FUN_10b4e702c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4e7060(param_1);
  return param_1;
}



/* Entry: 10b4e7060; end: 10b4e70a7;  */

void FUN_10b4e7060(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010bceb594();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010bceb594();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4e70a8; end: 10b4e70ab;  */

long FUN_10b4e70a8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4e7060(param_1);
  return param_1;
}



/* Entry: 10b4e70ac; end: 10b4e70bf;  */

void FUN_10b4e70ac(void)

{
  FUN_10b4e702c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4e70c0; end: 10b4e70cb;  */

undefined ** FUN_10b4e70c0(void)

{
  return &PTR_DAT_110cf2970;
}



/* Entry: 10b4e70cc; end: 10b4e713f;  */

void FUN_10b4e70cc(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010bceb514(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010bceb634(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010bceb634(*(undefined8 *)(param_1 + 0x28));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
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



/* Entry: 10b4e7140; end: 10b4e728f;  */

long * FUN_10b4e7140(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = (long *)0x1;
    func_0x00010b4e73f8(1,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14));
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = (long *)0x2;
    func_0x00010b4e73f8(2,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x18));
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_2 = (long *)0x3;
    func_0x00010b4e73f8(3,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x18));
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
  if ((long)uVar3 < 0) {
    lVar2 = *(long *)(uVar4 + 8);
    uVar3 = *(ulong *)(uVar4 + 0x10);
  }
  else {
    lVar2 = uVar4 + 8;
  }
  if ((long)(int)uVar3 <= *param_3 - (long)param_2) {
    _memcpy(param_2,lVar2,uVar3 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar3);
  }
  while( true ) {
    iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
    iVar5 = (int)uVar3;
    uVar3 = (ulong)(uint)(iVar5 - iVar6);
    if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
    func_0x00010b4d5738();
    lVar2 = (long)param_2 + (long)iVar6;
    param_2 = param_3;
    func_0x000107c303e4(param_3,lVar2);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_2 + (long)iVar5);
}



/* Entry: 10b4e7290; end: 10b4e7293;  */

void FUN_10b4e7290(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x000106af6830(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar2 = uVar3;
        func_0x000106af6730(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar2;
      }
      else {
        func_0x00010bceb618();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        func_0x000106af6730(uVar3,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar3;
      }
      else {
        func_0x00010bceb618();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b4e7294; end: 10b4e7397;  */

void FUN_10b4e7294(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x000106af6830(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar2 = uVar3;
        func_0x000106af6730(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar2;
      }
      else {
        func_0x00010bceb618();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        func_0x000106af6730(uVar3,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar3;
      }
      else {
        func_0x00010bceb618();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b4e7398; end: 10b4e739f;  */

void FUN_10b4e7398(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x30);
  }
  *puVar1 = &PTR_FUN_110cf2930;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b4e73a0; end: 10b4e73eb;  */

void FUN_10b4e73a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x30);
  }
  *puVar1 = &PTR_FUN_110cf2930;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b4e73ec; end: 10b4e73ff;  */

void FUN_10b4e73ec(void)

{
  return;
}



/* Entry: 10b4e7400; end: 10b4e7483;  */

undefined8 * FUN_10b4e7400(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf29e8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar1 = param_3 + 0x18;
  func_0x000107c2809c(lVar1,param_2);
  param_1[3] = lVar1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x000106af6830(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = param_2;
  return param_1;
}



/* Entry: 10b4e7484; end: 10b4e74b3;  */

long FUN_10b4e7484(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4e74b4(param_1);
  return param_1;
}



/* Entry: 10b4e74b4; end: 10b4e74e3;  */

void FUN_10b4e74b4(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010bceb46c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4e74e4; end: 10b4e74e7;  */

long FUN_10b4e74e4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4e74b4(param_1);
  return param_1;
}



/* Entry: 10b4e74e8; end: 10b4e74fb;  */

void FUN_10b4e74e8(void)

{
  FUN_10b4e7484();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4e74fc; end: 10b4e7507;  */

undefined ** FUN_10b4e74fc(void)

{
  return &PTR_DAT_110cf2a28;
}



/* Entry: 10b4e7508; end: 10b4e7557;  */

void FUN_10b4e7508(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010bceb514(*(undefined8 *)(param_1 + 0x20));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
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



/* Entry: 10b4e7558; end: 10b4e762b;  */

long * FUN_10b4e7558(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  
  plVar1 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar1 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14),param_2,param_3);
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 == 0) goto LAB_10b4e75e8;
    puVar2 = (undefined8 *)*puVar8;
  }
  else {
    puVar2 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_10b4e75e8;
  }
  func_0x000107c303d4(puVar2,lVar4,1,&UNK_10f774e96);
  plVar3 = param_3;
  func_0x000107c280a0(param_3,2,puVar8,plVar1);
  plVar1 = plVar3;
LAB_10b4e75e8:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar1;
  }
  uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
  if ((long)uVar5 < 0) {
    lVar4 = *(long *)(uVar6 + 8);
    uVar5 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    lVar4 = uVar6 + 8;
  }
  if (*param_3 - (long)plVar1 < (long)(int)uVar5) {
    while( true ) {
      iVar9 = ((int)*param_3 - (int)plVar1) + 0x10;
      iVar7 = (int)uVar5;
      uVar5 = (ulong)(uint)(iVar7 - iVar9);
      if (iVar7 - iVar9 == 0 || iVar7 < iVar9) break;
      func_0x00010b4d5738();
      lVar4 = (long)plVar1 + (long)iVar9;
      plVar1 = param_3;
      func_0x000107c303e4(param_3,lVar4);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar1 + (long)iVar7);
  }
  _memcpy(plVar1,lVar4,uVar5 & 0xffffffff);
  return (long *)((long)plVar1 + (long)(int)uVar5);
}



/* Entry: 10b4e762c; end: 10b4e76af;  */

long FUN_10b4e762c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b4e7664;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b4e7664:
    lVar3 = 0;
    goto LAB_10b4e7668;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b4e7668:
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x000106af6804();
    lVar3 = lVar3 + lVar2 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b4e76b0; end: 10b4e76b3;  */

void FUN_10b4e76b0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar3,uVar4);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x000106af6830(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      func_0x00010bceb4f4();
    }
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



/* Entry: 10b4e76b4; end: 10b4e7787;  */

void FUN_10b4e76b4(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar3,uVar4);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x000106af6830(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      func_0x00010bceb4f4();
    }
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



/* Entry: 10b4e7788; end: 10b4e778f;  */

void FUN_10b4e7788(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x28);
  }
  *puVar1 = &PTR_FUN_110cf29e8;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b4e7790; end: 10b4e77df;  */

void FUN_10b4e7790(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110cf29e8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b4e77e0; end: 10b4e77f3;  */

void FUN_10b4e77e0(void)

{
  return;
}



/* Entry: 10b4e77f4; end: 10b4e786f;  */

long FUN_10b4e77f4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_10b5760f8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b4e7870; end: 10b4e7873;  */

long FUN_10b4e7870(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_10b5760f8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b4e7874; end: 10b4e7887;  */

void FUN_10b4e7874(void)

{
  FUN_10b4e77f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4e7888; end: 10b4e7893;  */

undefined ** FUN_10b4e7888(void)

{
  return &PTR_DAT_110cf2ad8;
}



/* Entry: 10b4e7894; end: 10b4e7923;  */

void FUN_10b4e7894(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  func_0x000107c3025c(param_1 + 0x28);
  func_0x000107c3025c(param_1 + 0x30);
  func_0x000107c3025c(param_1 + 0x38);
  func_0x000107c3025c(param_1 + 0x40);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010bceb514(*(undefined8 *)(param_1 + 0x48));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b57618c(*(undefined8 *)(param_1 + 0x50));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
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
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 10b4e7924; end: 10b4e7b7b;  */

long * FUN_10b4e7924(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  long unaff_x22;
  int iVar8;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  plVar2 = param_2;
  if ((uVar1 & 1) != 0) {
    param_2 = *(long **)(param_1 + 0x48);
    plVar2 = (long *)0x1;
    func_0x00010b4e7ff0(1,param_2,*(undefined4 *)((long)param_2 + 0x14));
  }
  func_0x00010b4e7fd8(*(undefined8 *)(param_1 + 0x18));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b4e7984;
  }
  else if ((int)param_2 != 0) {
LAB_10b4e7984:
    func_0x00010b4e7fac();
    param_2 = (long *)0x2;
    plVar2 = param_3;
    func_0x00010b4e7fa0();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = *(long **)(param_1 + 0x50);
    plVar2 = (long *)0x3;
    func_0x00010b4e7ff0(3,param_2,*(undefined4 *)((long)param_2 + 0x1c));
  }
  func_0x00010b4e7fd8(*(undefined8 *)(param_1 + 0x20));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b4e79dc;
  }
  else if ((int)param_2 != 0) {
LAB_10b4e79dc:
    func_0x00010b4e7fac();
    param_2 = (long *)0x4;
    plVar2 = param_3;
    func_0x00010b4e7fa0();
  }
  func_0x00010b4e7fd8(*(undefined8 *)(param_1 + 0x28));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b4e7a1c;
  }
  else if ((int)param_2 != 0) {
LAB_10b4e7a1c:
    func_0x00010b4e7fac();
    param_2 = (long *)0x5;
    plVar2 = param_3;
    func_0x00010b4e7fa0();
  }
  func_0x00010b4e7fd8(*(undefined8 *)(param_1 + 0x30));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b4e7a5c;
  }
  else if ((int)param_2 != 0) {
LAB_10b4e7a5c:
    func_0x00010b4e7fac();
    param_2 = (long *)0x6;
    plVar2 = param_3;
    func_0x00010b4e7fa0();
  }
  func_0x00010b4e7fd8(*(undefined8 *)(param_1 + 0x38));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b4e7a9c;
  }
  else if ((int)param_2 != 0) {
LAB_10b4e7a9c:
    func_0x00010b4e7fac();
    param_2 = (long *)0x7;
    plVar2 = param_3;
    func_0x00010b4e7fa0();
  }
  func_0x00010b4e7fd8(*(undefined8 *)(param_1 + 0x40));
  if ((long)param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b4e7af8;
  }
  else if ((int)param_2 == 0) goto LAB_10b4e7af8;
  func_0x00010b4e7fac();
  plVar2 = param_3;
  func_0x00010b4e7fa0(param_3,8);
LAB_10b4e7af8:
  plVar3 = plVar2;
  if (*(long *)(param_1 + 0x58) != 0) {
    plVar3 = param_3;
    func_0x000106af68f8(param_3,*(long *)(param_1 + 0x58),plVar2);
  }
  plVar2 = plVar3;
  if (*(long *)(param_1 + 0x60) != 0) {
    plVar2 = param_3;
    func_0x000106af6920(param_3,*(long *)(param_1 + 0x60),plVar3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    if (*param_3 - (long)plVar2 < (long)(int)uVar5) {
      while( true ) {
        iVar8 = ((int)*param_3 - (int)plVar2) + 0x10;
        iVar7 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        lVar4 = (long)plVar2 + (long)iVar8;
        plVar2 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar2 + (long)iVar7);
    }
    _memcpy(plVar2,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)uVar5);
  }
  return plVar2;
}



/* Entry: 10b4e7b7c; end: 10b4e7ce3;  */

long FUN_10b4e7b7c(long param_1)

{
  uint uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar3 = param_1;
  func_0x00010b4e7fe4(*(undefined8 *)(param_1 + 0x18));
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar5 = lVar3 + 1;
  }
  func_0x00010b4e7fe4(*(undefined8 *)(param_1 + 0x20));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b4e7fb4();
  }
  func_0x00010b4e7fe4(*(undefined8 *)(param_1 + 0x28));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b4e7fb4();
  }
  func_0x00010b4e7fe4(*(undefined8 *)(param_1 + 0x30));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b4e7fb4();
  }
  func_0x00010b4e7fe4(*(undefined8 *)(param_1 + 0x38));
  lVar2 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b4e7fb4();
  }
  func_0x00010b4e7fe4(*(undefined8 *)(param_1 + 0x40));
  lVar2 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b4e7fb4();
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000106af6804(*(undefined8 *)(param_1 + 0x48));
      func_0x00010b4e7fb4();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b4e7ce4(*(undefined8 *)(param_1 + 0x50));
      func_0x00010b4e7fb4();
    }
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    lVar5 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x58)) * -9 + 0x2c0U >> 6) + lVar5;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    lVar5 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x60)) * -9 + 0x2c0U >> 6) + lVar5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    lVar5 = lVar3 + lVar5;
  }
  *(int *)(param_1 + 0x14) = (int)lVar5;
  return lVar5;
}



/* Entry: 10b4e7ce4; end: 10b4e7d0f;  */

long FUN_10b4e7ce4(long param_1)

{
  FUN_10b576240();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b4e7d10; end: 10b4e7eeb;  */

void FUN_10b4e7d10(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  lVar3 = param_2;
  func_0x00010b4e7fcc(*(undefined8 *)(param_2 + 0x18));
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      func_0x00010b4e7fc0();
    }
    func_0x000107c30248(param_1 + 0x18);
  }
  func_0x00010b4e7fcc(*(undefined8 *)(param_2 + 0x20));
  lVar5 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4e7fc0();
    }
    func_0x000107c30248(param_1 + 0x20);
  }
  func_0x00010b4e7fcc(*(undefined8 *)(param_2 + 0x28));
  lVar5 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4e7fc0();
    }
    func_0x000107c30248(param_1 + 0x28);
  }
  func_0x00010b4e7fcc(*(undefined8 *)(param_2 + 0x30));
  lVar5 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4e7fc0();
    }
    func_0x000107c30248(param_1 + 0x30);
  }
  func_0x00010b4e7fcc(*(undefined8 *)(param_2 + 0x38));
  lVar5 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4e7fc0();
    }
    func_0x000107c30248(param_1 + 0x38);
  }
  func_0x00010b4e7fcc(*(undefined8 *)(param_2 + 0x40));
  lVar5 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4e7fc0();
    }
    func_0x000107c30248(param_1 + 0x40);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        uVar4 = uVar2;
        func_0x000106af6830(uVar2,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar4;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x50) == 0) {
        func_0x00010b4e7f5c(uVar2,*(undefined8 *)(param_2 + 0x50));
        *(ulong *)(param_1 + 0x50) = uVar2;
      }
      else {
        func_0x00010b5760b8();
      }
    }
  }
  if (*(long *)(param_2 + 0x58) != 0) {
    *(long *)(param_1 + 0x58) = *(long *)(param_2 + 0x58);
  }
  if (*(long *)(param_2 + 0x60) != 0) {
    *(long *)(param_1 + 0x60) = *(long *)(param_2 + 0x60);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b4e7eec; end: 10b4e7ef3;  */

void FUN_10b4e7eec(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x68;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x68);
  }
  *puVar1 = &PTR_FUN_110cf2a98;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = &DAT_11383d918;
  puVar1[7] = &DAT_11383d918;
  puVar1[8] = &DAT_11383d918;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  return;
}



/* Entry: 10b4e7ef4; end: 10b4e7f9f;  */

void FUN_10b4e7ef4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x68;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x68);
  }
  *puVar1 = &PTR_FUN_110cf2a98;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = &DAT_11383d918;
  puVar1[7] = &DAT_11383d918;
  puVar1[8] = &DAT_11383d918;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  return;
}



/* Entry: 10b4e7fa0; end: 10b4e7ffb;  */

long * FUN_10b4e7fa0(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  undefined8 extraout_x8_00;
  uint extraout_w10;
  uint uVar6;
  uint extraout_w10_00;
  long lVar7;
  long *unaff_x20;
  int iVar8;
  undefined8 *unaff_x22;
  int iVar9;
  long lVar10;
  
  lVar7 = (long)*(char *)((long)unaff_x22 + 0x17);
  if ((-1 < lVar7) || (lVar7 = unaff_x22[1], lVar7 < 0x80)) {
    lVar10 = *param_1;
    uVar6 = (int)param_2 << 3;
    uVar2 = uVar6;
    func_0x0001001a5b20();
    if (lVar7 <= lVar10 + ~((long)unaff_x20 + (long)(int)uVar2) + 0x10) {
      lVar10 = (long)unaff_x20 + 2;
      for (uVar6 = uVar6 | 2; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
        *(byte *)(lVar10 + -2) = (byte)uVar6 | 0x80;
        lVar10 = lVar10 + 1;
      }
      *(byte *)(lVar10 + -2) = (byte)uVar6;
      *(char *)(lVar10 + -1) = (char)lVar7;
      puVar1 = (undefined8 *)*unaff_x22;
      if (-1 < *(char *)((long)unaff_x22 + 0x17)) {
        puVar1 = unaff_x22;
      }
      func_0x000107c610b4(lVar10,puVar1,lVar7);
      return (long *)(lVar10 + lVar7);
    }
  }
  func_0x00010b4d564c(param_1,param_2);
  func_0x00010b4d56cc();
  uVar6 = extraout_w10;
  while (0x7f < uVar6) {
    func_0x00010b4d576c();
    uVar6 = extraout_w10_00;
  }
  func_0x00010b4d56b4();
  uVar5 = extraout_x8;
  while (0x7f < (uint)uVar5) {
    func_0x00010b4d5758();
    uVar5 = extraout_x8_00;
  }
  func_0x00010b4d5660();
  iVar8 = (int)unaff_x22;
  if ((*(char *)((long)param_1 + 0x39) == '\x01') &&
     ((*param_1 - (long)unaff_x20) + 0x10 <= (long)iVar8)) {
    plVar3 = param_1;
    func_0x000107c303e0(param_1,unaff_x20);
    plVar4 = (long *)param_1[6];
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2,unaff_x22);
    if (((ulong)plVar4 & 1) == 0) {
      func_0x00010b4d56e4();
    }
    return plVar3;
  }
  if (*param_1 - (long)unaff_x20 < (long)iVar8) {
    while( true ) {
      iVar9 = ((int)*param_1 - (int)unaff_x20) + 0x10;
      iVar8 = (int)unaff_x22;
      unaff_x22 = (undefined8 *)(ulong)(uint)(iVar8 - iVar9);
      if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
      func_0x00010b4d5738();
      lVar7 = (long)unaff_x20 + (long)iVar9;
      unaff_x20 = param_1;
      func_0x000107c303e4(param_1,lVar7);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x20 + (long)iVar8);
  }
  _memcpy(unaff_x20);
  return (long *)((long)unaff_x20 + (long)iVar8);
}



/* Entry: 10b4e7ffc; end: 10b4e80b3;  */

undefined8 * FUN_10b4e7ffc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf2b48;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  func_0x000105991a48(param_1 + 3,param_2,param_3 + 0x18);
  lVar1 = param_3 + 0x38;
  func_0x000107c2809c(lVar1,param_2);
  param_1[7] = lVar1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b4e532c(param_2,*(undefined8 *)(param_3 + 0x40));
  }
  param_1[8] = param_2;
  param_1[9] = *(undefined8 *)(param_3 + 0x48);
  return param_1;
}



/* Entry: 10b4e80b4; end: 10b4e80e7;  */

long FUN_10b4e80b4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4e80e8(param_1);
  return param_1;
}



/* Entry: 10b4e80e8; end: 10b4e811f;  */

undefined8 FUN_10b4e80e8(long param_1)

{
  undefined1 in_ZR;
  undefined8 unaff_x19;
  
  func_0x000107c30258(param_1 + 0x38);
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10b4f8e94();
  }
  __ZdlPv();
  func_0x00010006804c(param_1 + 0x18);
  if (!(bool)in_ZR) {
    func_0x000105992fbc(unaff_x19,0x300380020);
  }
  return unaff_x19;
}



/* Entry: 10b4e8120; end: 10b4e8123;  */

long FUN_10b4e8120(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4e80e8(param_1);
  return param_1;
}



/* Entry: 10b4e8124; end: 10b4e8137;  */

void FUN_10b4e8124(void)

{
  FUN_10b4e80b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4e8138; end: 10b4e8143;  */

undefined ** FUN_10b4e8138(void)

{
  return &PTR_DAT_110cf2b88;
}



/* Entry: 10b4e8144; end: 10b4e819f;  */

void FUN_10b4e8144(long param_1)

{
  ulong *puVar1;
  
  func_0x000105991b74(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x38);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b4f8f10(*(undefined8 *)(param_1 + 0x40));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
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



/* Entry: 10b4e81a0; end: 10b4e83df;  */

long * FUN_10b4e81a0(long param_1,long *param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lStack_78;
  undefined8 *apuStack_70 [2];
  
  if (*(int *)(param_1 + 0x18) != 0) {
    if ((*(int *)(param_1 + 0x18) == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      plVar7 = &lStack_78;
      func_0x00010564c19c(plVar7);
      while (plVar3 = plVar7, lVar11 = lStack_78, lStack_78 != 0) {
        lVar4 = lStack_78 + 8;
        lVar9 = lStack_78 + 0x20;
        func_0x00010b4e8660();
        lVar5 = (long)*(char *)(lVar11 + 0x1f);
        if (lVar5 < 0) {
          lVar4 = *(long *)(lVar11 + 8);
          lVar5 = *(long *)(lVar11 + 0x10);
        }
        func_0x00010b4e8654(lVar4,lVar5);
        lVar4 = (long)*(char *)(lVar11 + 0x37);
        if (lVar4 < 0) {
          lVar9 = *(long *)(lVar11 + 0x20);
          lVar4 = *(long *)(lVar11 + 0x28);
        }
        func_0x00010b4e8654(lVar9,lVar4);
        plVar7 = &lStack_78;
        func_0x000107c27d54(plVar7);
        param_2 = plVar3;
      }
    }
    else {
      plVar7 = &lStack_78;
      func_0x000105991b98(plVar7);
      puVar8 = apuStack_70[0];
      for (lVar11 = lStack_78 << 3; plVar3 = plVar7, lVar11 != 0; lVar11 = lVar11 + -8) {
        puVar10 = (undefined8 *)*puVar8;
        plVar7 = puVar10 + 3;
        func_0x00010b4e8660();
        lVar4 = (long)*(char *)((long)puVar10 + 0x17);
        puVar2 = puVar10;
        if (lVar4 < 0) {
          lVar4 = puVar10[1];
          puVar2 = (undefined8 *)*puVar10;
        }
        func_0x00010b4e8654(puVar2,lVar4);
        lVar4 = (long)*(char *)((long)puVar10 + 0x2f);
        if (lVar4 < 0) {
          plVar7 = (long *)puVar10[3];
          lVar4 = puVar10[4];
        }
        func_0x00010b4e8654(plVar7,lVar4);
        puVar8 = puVar8 + 1;
        param_2 = plVar3;
      }
      func_0x000105991ac8(apuStack_70);
    }
  }
  plVar7 = param_2;
  if (*(int *)(param_1 + 0x48) != 0) {
    plVar7 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x48),param_2);
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    plVar3 = param_3;
    func_0x000107c28094(param_3,plVar7);
    plVar7 = (long *)(ulong)*(uint *)(param_1 + 0x4c);
    uVar1 = 0x18;
    func_0x000107c280a8(0x18,plVar3);
    func_0x000107c280b8(plVar7,uVar1);
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
  lVar11 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar11 < 0) {
    lVar11 = puVar8[1];
    if (lVar11 == 0) goto LAB_10b4e82f4;
    puVar2 = (undefined8 *)*puVar8;
  }
  else {
    puVar2 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_10b4e82f4;
  }
  func_0x000107c303d4(puVar2,lVar11,1,&UNK_10f77500b);
  plVar3 = param_3;
  func_0x000107c280a0(param_3,4,puVar8,plVar7);
  plVar7 = plVar3;
LAB_10b4e82f4:
  plVar3 = plVar7;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar3 = (long *)0x5;
    func_0x000107c303cc(5,*(long *)(param_1 + 0x40),
                        *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x30),plVar7,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar11 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar11 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      lVar11 = *(long *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    func_0x0001053930c4(param_3,lVar4,lVar11,plVar3);
    plVar3 = param_3;
  }
  return plVar3;
}



/* Entry: 10b4e83e0; end: 10b4e84db;  */

ulong FUN_10b4e83e0(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long alStack_38 [3];
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x18);
  func_0x00010564c19c(alStack_38);
  while (alStack_38[0] != 0) {
    lVar2 = alStack_38[0] + 8;
    func_0x000105990b3c(lVar2,alStack_38[0] + 0x20);
    uVar3 = lVar2 + uVar3;
    func_0x000107c27d54(alStack_38);
  }
  uVar1 = *(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    uVar3 = uVar3 + uVar1 + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x40);
    FUN_10b4e51e8();
    uVar3 = uVar3 + lVar2 + 1;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    uVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x48)) * -9 + 0x2c0U >> 6) + uVar3;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    uVar3 = uVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x4c)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    uVar3 = lVar2 + uVar3;
  }
  *(int *)(param_1 + 0x14) = (int)uVar3;
  return uVar3;
}



/* Entry: 10b4e84dc; end: 10b4e84df;  */

void FUN_10b4e84dc(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  func_0x0001059929d4(param_1 + 0x18,param_2 + 0x18);
  uVar2 = *(ulong *)(param_2 + 0x38) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x38,uVar2,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x40) == 0) {
      func_0x00010b4e532c(uVar5,*(undefined8 *)(param_2 + 0x40));
      *(ulong *)(param_1 + 0x40) = uVar5;
    }
    else {
      FUN_10b4f9104();
    }
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0x48);
  }
  if (*(int *)(param_2 + 0x4c) != 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_2 + 0x4c);
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



/* Entry: 10b4e84e0; end: 10b4e85d3;  */

void FUN_10b4e84e0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  func_0x0001059929d4(param_1 + 0x18,param_2 + 0x18);
  uVar2 = *(ulong *)(param_2 + 0x38) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x38,uVar2,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x40) == 0) {
      func_0x00010b4e532c(uVar5,*(undefined8 *)(param_2 + 0x40));
      *(ulong *)(param_1 + 0x40) = uVar5;
    }
    else {
      FUN_10b4f9104();
    }
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0x48);
  }
  if (*(int *)(param_2 + 0x4c) != 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_2 + 0x4c);
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



/* Entry: 10b4e85d4; end: 10b4e85db;  */

void FUN_10b4e85d4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x50;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x50);
  }
  *puVar1 = &PTR_FUN_110cf2b48;
  puVar1[1] = param_2;
  puVar1[3] = 0x100000000;
  puVar1[2] = 0;
  puVar1[4] = 0x100000000;
  puVar1[5] = &DAT_10e5b4a18;
  puVar1[6] = param_2;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[7] = &DAT_11383d918;
  return;
}



/* Entry: 10b4e85dc; end: 10b4e8653;  */

void FUN_10b4e85dc(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cf2b48;
  puVar1[1] = param_1;
  puVar1[3] = 0x100000000;
  puVar1[2] = 0;
  puVar1[4] = 0x100000000;
  puVar1[5] = &DAT_10e5b4a18;
  puVar1[6] = param_1;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[7] = &DAT_11383d918;
  return;
}



/* Entry: 10b4e8654; end: 10b4e8677;  */

/* WARNING: Removing unreachable block (ram,0x0001006281e8) */

ulong FUN_10b4e8654(ulong param_1,int param_2)

{
  func_0x00010029f6ec(param_1,(long)param_2);
  if ((param_1 & 1) == 0) {
    func_0x000107c613d0();
    func_0x000107c303d0(&UNK_10f7741f2,0);
  }
  return param_1;
}



/* Entry: 10b4e8678; end: 10b4e86af;  */

long FUN_10b4e8678(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b4e86b0; end: 10b4e86b3;  */

long FUN_10b4e86b0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b4e86b4; end: 10b4e86c7;  */

void FUN_10b4e86b4(void)

{
  FUN_10b4e8678();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4e86c8; end: 10b4e86d3;  */

undefined ** FUN_10b4e86c8(void)

{
  return &PTR_DAT_110cf2c38;
}



/* Entry: 10b4e86d4; end: 10b4e871b;  */

void FUN_10b4e86d4(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0;
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


