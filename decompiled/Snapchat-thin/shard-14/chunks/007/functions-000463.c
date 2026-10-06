/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b5b7768; end: 10b5b777b;  */

void FUN_10b5b7768(void)

{
  FUN_10b5b773c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b777c; end: 10b5b7787;  */

undefined ** FUN_10b5b777c(void)

{
  return &PTR_DAT_110d17880;
}



/* Entry: 10b5b7788; end: 10b5b77bf;  */

void FUN_10b5b7788(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5b8abc();
  func_0x00010b5b8c74();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined4 *)(unaff_x19 + 0x30) = 0;
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



/* Entry: 10b5b77c0; end: 10b5b7937;  */

long * FUN_10b5b77c0(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar4;
  long unaff_x22;
  int iVar5;
  
  func_0x00010b5b89a0();
  plVar2 = param_1;
  if ((int)param_1[4] != 0) {
    func_0x00010b5b87bc();
    plVar2 = (long *)0x8;
    func_0x000107c280a8();
    func_0x00010b5b87d4();
    param_2 = param_1;
    unaff_x21 = plVar2;
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    func_0x00010b5b87bc();
    param_2 = plVar2;
    func_0x00010b5b89e8();
    func_0x00010b5b87fc();
    unaff_x21 = plVar2;
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x00010b5b87bc();
    param_2 = plVar2;
    func_0x00010b5b8ba8();
    func_0x00010b5b87fc();
    unaff_x21 = plVar2;
  }
  func_0x00010b5b8a68(*(undefined8 *)(unaff_x20 + 0x10));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5b785c;
  }
  else if ((int)param_2 != 0) {
LAB_10b5b785c:
    param_4 = (long *)&UNK_10f77e301;
    func_0x00010b5b89c0();
    param_2 = (long *)0x4;
    plVar2 = unaff_x19;
    func_0x00010b5b885c();
    unaff_x21 = plVar2;
  }
  plVar3 = plVar2;
  if (*(char *)(unaff_x20 + 0x2c) == '\x01') {
    func_0x00010b5b87bc();
    plVar3 = (long *)0x28;
    func_0x000107c280a8();
    func_0x00010b5b87fc();
    param_2 = plVar2;
    unaff_x21 = plVar3;
  }
  func_0x00010b5b8a68(*(undefined8 *)(unaff_x20 + 0x18));
  if ((long)param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b5b78e0;
  }
  else if ((int)param_2 == 0) goto LAB_10b5b78e0;
  param_4 = (long *)&UNK_10f77e328;
  func_0x00010b5b89c0();
  func_0x00010b5b885c();
  plVar3 = unaff_x19;
  unaff_x21 = unaff_x19;
LAB_10b5b78e0:
  plVar2 = plVar3;
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    func_0x00010b5b87bc();
    plVar2 = (long *)0x38;
    func_0x000107c280a8(0x38,plVar3);
    func_0x00010b5b87d4();
    unaff_x21 = plVar2;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x00010b5b897c();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b5b8c1c();
  if (*plVar2 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar5 = ((int)*plVar2 - (int)param_4) + 0x10;
      iVar4 = (int)param_3;
      param_3 = (ulong)(uint)(iVar4 - iVar5);
      if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar5);
      param_4 = plVar2;
      func_0x000107c303e4(plVar2,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar4);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b5b7938; end: 10b5b7a13;  */

void FUN_10b5b7938(long param_1)

{
  int iVar1;
  int extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long lVar3;
  int extraout_w9;
  long extraout_x9;
  int extraout_w10;
  
  lVar3 = param_1;
  func_0x00010b5b8a08(*(undefined8 *)(param_1 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
  }
  func_0x00010b5b8a08(*(undefined8 *)(param_1 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b5b8a94();
  }
  func_0x00010b5b8c28(0xfffffff7);
  func_0x00010b5b8c28();
  func_0x00010b5b8c8c();
  iVar1 = extraout_w9;
  if (extraout_w10 != 0) {
    iVar1 = extraout_w8 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b5b8d14();
    lVar3 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x34) = iVar1;
  return;
}



/* Entry: 10b5b7a14; end: 10b5b7aaf;  */

void FUN_10b5b7a14(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5b8988();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5b89f0();
    }
    func_0x00010b5b8c7c();
  }
  func_0x00010b5b89fc(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5b89f0();
    }
    func_0x00010b5b8c6c();
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if (*(char *)(unaff_x20 + 0x2c) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x2c) = 1;
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x19 + 0x30) = *(int *)(unaff_x20 + 0x30);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5b8ad4();
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



/* Entry: 10b5b7ab0; end: 10b5b7adf;  */

long * FUN_10b5b7ab0(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b5b7ae0; end: 10b5b7fb3;  */

void FUN_10b5b7ae0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5b89c8();
  }
  else {
    func_0x00010b5b88dc();
  }
  *puVar1 = &PTR_FUN_110d16d78;
  puVar1[1] = param_1;
  func_0x00010b5b8cb8();
  return;
}



/* Entry: 10b5b7fb4; end: 10b5b80a7;  */

undefined8 * FUN_10b5b7fb4(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b5b8cc4();
  if (param_1 == 0) {
    puVar2 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar2 = unaff_x20;
    FUN_10b4d80e0();
  }
  puVar2[1] = unaff_x20;
  *puVar2 = &PTR_FUN_110d16fa8;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5b8820();
  }
  lVar3 = unaff_x19 + 0x10;
  func_0x00010b5b89b0();
  puVar2[2] = lVar3;
  lVar3 = unaff_x19 + 0x18;
  func_0x00010b5b89b0();
  puVar2[3] = lVar3;
  *(undefined4 *)((long)puVar2 + 0x2c) = 0;
  uVar1 = *(undefined4 *)(unaff_x19 + 0x28);
  puVar2[4] = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined4 *)(puVar2 + 5) = uVar1;
  return puVar2;
}



/* Entry: 10b5b80a8; end: 10b5b8103;  */

undefined8 * FUN_10b5b80a8(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00010b5b8a14();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5b89c8();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010b5b89d0();
  }
  *param_1 = &PTR_FUN_110d16f58;
  param_1[1] = unaff_x21;
  func_0x00010b5b8cb8();
  func_0x00010b5b4310();
  return param_1;
}



/* Entry: 10b5b8104; end: 10b5b813f;  */

undefined8 * FUN_10b5b8104(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  func_0x00010b5b8cc4();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5b895c();
  }
  else {
    param_1 = unaff_x20;
    FUN_10b4d80e0();
  }
  *param_1 = &PTR_FUN_110d14920;
  param_1[1] = unaff_x20;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  func_0x00010b5a7630();
  return param_1;
}



/* Entry: 10b5b8140; end: 10b5b8197;  */

undefined8 * FUN_10b5b8140(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x00010b5b8a14();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5b895c();
  }
  else {
    func_0x00010b5b8894();
  }
  *param_1 = &PTR_FUN_110d170e8;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  func_0x00010b5b3f80();
  return param_1;
}



/* Entry: 10b5b8198; end: 10b5b81ef;  */

undefined8 * FUN_10b5b8198(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x00010b5b8a14();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5b895c();
  }
  else {
    func_0x00010b5b8894();
  }
  *param_1 = &PTR_FUN_110d17098;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  func_0x00010b5b408c();
  return param_1;
}



/* Entry: 10b5b81f0; end: 10b5b824b;  */

undefined8 * FUN_10b5b81f0(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00010b5b8a14();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5b89c8();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010b5b89d0();
  }
  *param_1 = &PTR_FUN_110d16d78;
  param_1[1] = unaff_x21;
  func_0x00010b5b8cb8();
  func_0x00010b5b4198();
  return param_1;
}



/* Entry: 10b5b824c; end: 10b5b8363;  */

undefined8 * FUN_10b5b824c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b5b8afc();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5b89c8();
  }
  else {
    func_0x00010b5b88dc();
  }
  param_1[1] = unaff_x19;
  *param_1 = &PTR_FUN_110d171d8;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5b8820();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    unaff_x19 = 0;
  }
  else {
    FUN_10b5b86c0();
  }
  param_1[3] = unaff_x19;
  return param_1;
}



/* Entry: 10b5b8364; end: 10b5b83b3;  */

long FUN_10b5b8364(long param_1)

{
  func_0x00010b5b8a14();
  if (param_1 == 0) {
    func_0x00010b5b895c();
  }
  else {
    func_0x00010b5b8894();
  }
  func_0x00010b5b8bf4(&PTR_DAT_110d16e18);
  FUN_10b5b6054();
  return param_1;
}



/* Entry: 10b5b83b4; end: 10b5b8403;  */

long FUN_10b5b83b4(long param_1)

{
  func_0x00010b5b8a14();
  if (param_1 == 0) {
    func_0x00010b5b895c();
  }
  else {
    func_0x00010b5b8894();
  }
  func_0x00010b5b8bf4(&PTR_DAT_110d16dc8);
  func_0x00010b5b6064();
  return param_1;
}



/* Entry: 10b5b8404; end: 10b5b8453;  */

long FUN_10b5b8404(long param_1)

{
  func_0x00010b5b8a14();
  if (param_1 == 0) {
    func_0x00010b5b895c();
  }
  else {
    func_0x00010b5b8894();
  }
  func_0x00010b5b8bf4(&PTR_DAT_110d16eb8);
  func_0x00010b5b6074();
  return param_1;
}



/* Entry: 10b5b8454; end: 10b5b8567;  */

undefined8 * FUN_10b5b8454(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x80;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x80);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_DAT_110d17278;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b5b8820();
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  func_0x000107c282d4(puVar1 + 3,param_1,param_2 + 0x18);
  *(undefined4 *)(puVar1 + 5) = 0;
  func_0x00010598fd00(puVar1 + 6,param_1,param_2 + 0x30);
  func_0x00010598fd00(puVar1 + 9,param_1,param_2 + 0x48);
  lVar2 = param_2 + 0x60;
  func_0x00010b5b89b0();
  puVar1[0xc] = lVar2;
  lVar2 = param_2 + 0x68;
  func_0x00010b5b89b0();
  puVar1[0xd] = lVar2;
  lVar2 = param_2 + 0x70;
  func_0x00010b5b89b0();
  puVar1[0xe] = lVar2;
  if ((*(byte *)(puVar1 + 2) & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x000108c6f470(param_1,*(undefined8 *)(param_2 + 0x78));
  }
  puVar1[0xf] = param_1;
  return puVar1;
}



/* Entry: 10b5b8568; end: 10b5b85bf;  */

undefined8 * FUN_10b5b8568(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x00010b5b8a14();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5b895c();
  }
  else {
    func_0x00010b5b8894();
  }
  *param_1 = &PTR_DAT_110d16e68;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  FUN_10b5b618c();
  return param_1;
}



/* Entry: 10b5b85c0; end: 10b5b86bf;  */

undefined8 * FUN_10b5b85c0(undefined8 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  func_0x00010b5b8cc4();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5b8b54();
  }
  else {
    param_1 = unaff_x20;
    func_0x00010b5b8b5c();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_DAT_110d17138;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5b8820();
  }
  lVar2 = unaff_x19 + 0x10;
  func_0x00010b5b89b0();
  param_1[2] = lVar2;
  lVar2 = unaff_x19 + 0x18;
  func_0x00010b5b89b0();
  param_1[3] = lVar2;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  uVar1 = *(undefined4 *)(unaff_x19 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x20);
  param_1[5] = *(undefined8 *)(unaff_x19 + 0x28);
  param_1[4] = uVar3;
  *(undefined4 *)(param_1 + 6) = uVar1;
  return param_1;
}



/* Entry: 10b5b86c0; end: 10b5b8723;  */

undefined8 * FUN_10b5b86c0(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00010b5b8a14();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5b89c8();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010b5b89d0();
  }
  *param_1 = &PTR_FUN_110d16ff8;
  param_1[1] = unaff_x21;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  FUN_10b5b6788();
  return param_1;
}



/* Entry: 10b5b8724; end: 10b5b8797;  */

undefined8 * FUN_10b5b8724(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b5b8cc4();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5b8b54();
  }
  else {
    param_1 = unaff_x20;
    func_0x00010b5b8b5c();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_FUN_110d17048;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5b8820();
  }
  func_0x0001088f25c8(param_1 + 2);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[5] = *(undefined8 *)(unaff_x19 + 0x28);
  return param_1;
}



/* Entry: 10b5b8798; end: 10b5b8d1f;  */

void FUN_10b5b8798(void)

{
  return;
}



/* Entry: 10b5b8d20; end: 10b5b8db3;  */

undefined8 * FUN_10b5b8d20(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d17a98;
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
    func_0x00010b5b917c(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b5b91b8(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = param_2;
  param_1[5] = *(undefined8 *)(param_3 + 0x28);
  return param_1;
}



/* Entry: 10b5b8db4; end: 10b5b8de7;  */

long FUN_10b5b8db4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5b8de8(param_1);
  return param_1;
}



/* Entry: 10b5b8de8; end: 10b5b8e1f;  */

void FUN_10b5b8de8(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5b1a24();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b5c28ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b8e20; end: 10b5b8e23;  */

long FUN_10b5b8e20(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5b8de8(param_1);
  return param_1;
}



/* Entry: 10b5b8e24; end: 10b5b8e37;  */

void FUN_10b5b8e24(void)

{
  FUN_10b5b8db4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b8e38; end: 10b5b8e43;  */

undefined ** FUN_10b5b8e38(void)

{
  return &PTR_DAT_110d17ad8;
}



/* Entry: 10b5b8e44; end: 10b5b8ea3;  */

void FUN_10b5b8e44(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b5b1a74(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b5c28fc(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
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



/* Entry: 10b5b8ea4; end: 10b5b9017;  */

long * FUN_10b5b8ea4(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  plVar2 = param_2;
  if ((uVar1 & 1) != 0) {
    plVar2 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x30),param_2,param_3);
  }
  plVar3 = plVar2;
  if ((uVar1 >> 1 & 1) != 0) {
    plVar3 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x30),plVar2,param_3);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar2 = param_3;
    func_0x000107c28094(param_3,plVar3);
    plVar3 = *(long **)(param_1 + 0x28);
    uVar4 = 0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x000107c280ac(plVar3,uVar4);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar5 = *(long *)(uVar7 + 8);
      uVar6 = *(ulong *)(uVar7 + 0x10);
    }
    else {
      lVar5 = uVar7 + 8;
    }
    if (*param_3 - (long)plVar3 < (long)(int)uVar6) {
      while( true ) {
        iVar9 = ((int)*param_3 - (int)plVar3) + 0x10;
        iVar8 = (int)uVar6;
        uVar6 = (ulong)(uint)(iVar8 - iVar9);
        if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
        func_0x00010b4d5738();
        lVar5 = (long)plVar3 + (long)iVar9;
        plVar3 = param_3;
        func_0x000107c303e4(param_3,lVar5);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar3 + (long)iVar8);
    }
    _memcpy(plVar3,lVar5,uVar6 & 0xffffffff);
    return (long *)((long)plVar3 + (long)(int)uVar6);
  }
  return plVar3;
}



/* Entry: 10b5b9018; end: 10b5b9047;  */

void FUN_10b5b9018(void)

{
  FUN_10b5b1b74();
  func_0x00010b5b9200();
  return;
}



/* Entry: 10b5b9048; end: 10b5b904b;  */

void FUN_10b5b9048(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x00010b5b917c(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_10b5b1c04();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        func_0x00010b5b91b8(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_10b5c2aac();
      }
    }
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
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



/* Entry: 10b5b904c; end: 10b5b9127;  */

void FUN_10b5b904c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x00010b5b917c(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_10b5b1c04();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        func_0x00010b5b91b8(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_10b5c2aac();
      }
    }
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
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



/* Entry: 10b5b9128; end: 10b5b912f;  */

void FUN_10b5b9128(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d17a98;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b5b9130; end: 10b5b91f3;  */

void FUN_10b5b9130(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d17a98;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b5b91f4; end: 10b5b924f;  */

void FUN_10b5b91f4(void)

{
  return;
}



/* Entry: 10b5b9250; end: 10b5b9277;  */

long FUN_10b5b9250(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5b9278; end: 10b5b92c3;  */

undefined8 * FUN_10b5b9278(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d17b40;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  func_0x00010b5b9228(param_1,param_3);
  return param_1;
}



/* Entry: 10b5b92c4; end: 10b5b92c7;  */

long FUN_10b5b92c4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5b92c8; end: 10b5b92db;  */

void FUN_10b5b92c8(void)

{
  FUN_10b5b9250();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b92dc; end: 10b5b92fb;  */

undefined ** FUN_10b5b92dc(void)

{
  return &PTR_DAT_110d17b80;
}



/* Entry: 10b5b92fc; end: 10b5b9367;  */

long * FUN_10b5b92fc(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  
  plVar1 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x10),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar1;
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
  if (*param_3 - (long)plVar1 < (long)(int)uVar3) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)plVar1) + 0x10;
      iVar5 = (int)uVar3;
      uVar3 = (ulong)(uint)(iVar5 - iVar6);
      if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
      func_0x00010b4d5738();
      lVar2 = (long)plVar1 + (long)iVar6;
      plVar1 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar1 + (long)iVar5);
  }
  _memcpy(plVar1,lVar2,uVar3 & 0xffffffff);
  return (long *)((long)plVar1 + (long)(int)uVar3);
}



/* Entry: 10b5b9368; end: 10b5b93c3;  */

ulong FUN_10b5b9368(long param_1)

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



/* Entry: 10b5b93c4; end: 10b5b9433;  */

undefined8 * FUN_10b5b93c4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d17be8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar1 = param_3 + 0x10;
  func_0x000107c2809c(lVar1,param_2);
  param_1[2] = lVar1;
  param_3 = param_3 + 0x18;
  func_0x000107c2809c(param_3,param_2);
  param_1[3] = param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  return param_1;
}



/* Entry: 10b5b9434; end: 10b5b9463;  */

long FUN_10b5b9434(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5b9464(param_1);
  return param_1;
}



/* Entry: 10b5b9464; end: 10b5b948b;  */

/* WARNING: Possible PIC construction at 0x00010b5b9478: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b5b947c) */

void FUN_10b5b9464(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10) ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    func_0x000107c60ca0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar1);
  return;
}



/* Entry: 10b5b948c; end: 10b5b948f;  */

long FUN_10b5b948c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5b9464(param_1);
  return param_1;
}



/* Entry: 10b5b9490; end: 10b5b94a3;  */

void FUN_10b5b9490(void)

{
  FUN_10b5b9434();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b94a4; end: 10b5b94af;  */

undefined ** FUN_10b5b94a4(void)

{
  return &PTR_DAT_110d17c28;
}



/* Entry: 10b5b94b0; end: 10b5b94f3;  */

void FUN_10b5b94b0(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x18);
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



/* Entry: 10b5b94f4; end: 10b5b95e3;  */

long * FUN_10b5b94f4(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar1 = (long)*(char *)((long)puVar5 + 0x17);
  if (lVar1 < 0) {
    lVar1 = puVar5[1];
    if (lVar1 != 0) {
      puVar5 = (undefined8 *)*puVar5;
      goto LAB_10b5b9538;
    }
  }
  else if (*(char *)((long)puVar5 + 0x17) != '\0') {
LAB_10b5b9538:
    func_0x000107c303d4(puVar5,lVar1,1,&UNK_10f77e351);
    param_2 = param_3;
    FUN_10b5b9770(param_3,1);
  }
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar1 = (long)*(char *)((long)puVar5 + 0x17);
  if (lVar1 < 0) {
    lVar1 = puVar5[1];
    if (lVar1 == 0) goto LAB_10b5b95a0;
    puVar5 = (undefined8 *)*puVar5;
  }
  else if (*(char *)((long)puVar5 + 0x17) == '\0') goto LAB_10b5b95a0;
  func_0x000107c303d4(puVar5,lVar1,1,&UNK_10f77e381);
  param_2 = param_3;
  FUN_10b5b9770(param_3,2);
LAB_10b5b95a0:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar2 = (ulong)*(char *)(uVar3 + 0x1f);
  if ((long)uVar2 < 0) {
    lVar1 = *(long *)(uVar3 + 8);
    uVar2 = *(ulong *)(uVar3 + 0x10);
  }
  else {
    lVar1 = uVar3 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)uVar2) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar4 = (int)uVar2;
      uVar2 = (ulong)(uint)(iVar4 - iVar6);
      if (iVar4 - iVar6 == 0 || iVar4 < iVar6) break;
      func_0x00010b4d5738();
      lVar1 = (long)param_2 + (long)iVar6;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar4);
  }
  _memcpy(param_2,lVar1,uVar2 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar2);
}



/* Entry: 10b5b95e4; end: 10b5b9673;  */

long FUN_10b5b95e4(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b5b961c;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b5b961c:
    lVar3 = 0;
    goto LAB_10b5b9620;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b5b9620:
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    lVar3 = lVar3 + uVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x20) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b5b9674; end: 10b5b9677;  */

void FUN_10b5b9674(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar1,uVar2);
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



/* Entry: 10b5b9678; end: 10b5b9717;  */

void FUN_10b5b9678(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar1,uVar2);
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



/* Entry: 10b5b9718; end: 10b5b971f;  */

void FUN_10b5b9718(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d17be8;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b5b9720; end: 10b5b976f;  */

void FUN_10b5b9720(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d17be8;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b5b9770; end: 10b5b978f;  */

long * FUN_10b5b9770(long *param_1,undefined8 param_2)

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



/* Entry: 10b5b9790; end: 10b5b97f7;  */

undefined8 * FUN_10b5b9790(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d17c98;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar1 = param_3 + 0x10;
  func_0x000107c2809c(lVar1,param_2);
  param_1[2] = lVar1;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_3 + 0x18);
  return param_1;
}



/* Entry: 10b5b97f8; end: 10b5b9827;  */

long FUN_10b5b97f8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5b9828; end: 10b5b982b;  */

long FUN_10b5b9828(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5b982c; end: 10b5b983f;  */

void FUN_10b5b982c(void)

{
  FUN_10b5b97f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b9840; end: 10b5b984b;  */

undefined ** FUN_10b5b9840(void)

{
  return &PTR_DAT_110d17cd8;
}



/* Entry: 10b5b984c; end: 10b5b988b;  */

void FUN_10b5b984c(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x18) = 0;
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



/* Entry: 10b5b988c; end: 10b5b996f;  */

long * FUN_10b5b988c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar1 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x18);
    uVar2 = 8;
    func_0x000107c280a8(8,plVar1);
    func_0x000107c280b8(param_2,uVar2);
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 == 0) goto LAB_10b5b992c;
    puVar3 = (undefined8 *)*puVar8;
  }
  else {
    puVar3 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_10b5b992c;
  }
  func_0x000107c303d4(puVar3,lVar4,1,&UNK_10f77e3aa);
  plVar1 = param_3;
  func_0x000107c280a0(param_3,2,puVar8,param_2);
  param_2 = plVar1;
LAB_10b5b992c:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
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
  if (*param_3 - (long)param_2 < (long)(int)uVar5) {
    while( true ) {
      iVar9 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar7 = (int)uVar5;
      uVar5 = (ulong)(uint)(iVar7 - iVar9);
      if (iVar7 - iVar9 == 0 || iVar7 < iVar9) break;
      func_0x00010b4d5738();
      lVar4 = (long)param_2 + (long)iVar9;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar4);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar7);
  }
  _memcpy(param_2,lVar4,uVar5 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar5);
}



/* Entry: 10b5b9970; end: 10b5b99fb;  */

void FUN_10b5b9970(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_10b5b99a8;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_10b5b99a8:
    iVar1 = 0;
    goto LAB_10b5b99ac;
  }
  func_0x000107c282a0();
  iVar1 = (int)uVar2 + 1;
LAB_10b5b99ac:
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  return;
}



/* Entry: 10b5b99fc; end: 10b5b99ff;  */

void FUN_10b5b99fc(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
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



/* Entry: 10b5b9a00; end: 10b5b9a7b;  */

void FUN_10b5b9a00(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
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



/* Entry: 10b5b9a7c; end: 10b5b9a83;  */

void FUN_10b5b9a7c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x20);
  }
  *puVar1 = &PTR_FUN_110d17c98;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b5b9a84; end: 10b5b9acf;  */

void FUN_10b5b9a84(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d17c98;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b5b9ad0; end: 10b5b9ae3;  */

void FUN_10b5b9ad0(void)

{
  return;
}



/* Entry: 10b5b9ae4; end: 10b5b9b0f;  */

long FUN_10b5b9ae4(long param_1)

{
  func_0x00010b5bae0c();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5b9b10; end: 10b5b9b13;  */

long FUN_10b5b9b10(long param_1)

{
  func_0x00010b5bae0c();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5b9b14; end: 10b5b9b27;  */

void FUN_10b5b9b14(void)

{
  FUN_10b5b9ae4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b9b28; end: 10b5b9b33;  */

undefined ** FUN_10b5b9b28(void)

{
  return &PTR_DAT_110d17e70;
}



/* Entry: 10b5b9b34; end: 10b5b9b63;  */

void FUN_10b5b9b34(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5bad8c();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
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



/* Entry: 10b5b9b64; end: 10b5b9c07;  */

long * FUN_10b5b9b64(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  int iVar4;
  long *unaff_x22;
  long *plVar5;
  int iVar6;
  
  plVar1 = param_1;
  plVar2 = param_2;
  plVar5 = param_3;
  func_0x00010b5baddc(param_1[2]);
  if ((long)plVar2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b5b9bb8;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)plVar2 == 0) goto LAB_10b5b9bb8;
  func_0x00010b5bad50();
  func_0x00010b5badb0();
  plVar1 = unaff_x22;
  param_2 = unaff_x22;
LAB_10b5b9bb8:
  if ((int)param_1[3] != 0) {
    func_0x00010b5bae50();
    func_0x00010b5badf4();
    func_0x00010b5bae3c();
    param_2 = plVar1;
  }
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  func_0x00010b5bae84();
  if ((long)plVar5 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    plVar5 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar5) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar4 = (int)plVar5;
      plVar5 = (long *)(ulong)(uint)(iVar4 - iVar6);
      if (iVar4 - iVar6 == 0 || iVar4 < iVar6) break;
      func_0x00010b4d5738();
      lVar3 = (long)param_2 + (long)iVar6;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar3);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar4);
  }
  _memcpy(param_2,lVar3,(ulong)plVar5 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar5);
}



/* Entry: 10b5b9c08; end: 10b5b9c73;  */

void FUN_10b5b9c08(long param_1)

{
  int iVar1;
  int extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b5bad78();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    func_0x00010b5bae24();
    iVar1 = iVar1 + extraout_w8 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5bae90();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x1c) = iVar1;
  return;
}



/* Entry: 10b5b9c74; end: 10b5b9c77;  */

void FUN_10b5b9c74(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5bad38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5badd0();
    }
    func_0x00010b5bae5c();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5bae14();
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



/* Entry: 10b5b9c78; end: 10b5b9ccb;  */

void FUN_10b5b9c78(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5bad38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5badd0();
    }
    func_0x00010b5bae5c();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5bae14();
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



/* Entry: 10b5b9ccc; end: 10b5b9cf7;  */

undefined8 FUN_10b5b9ccc(undefined8 param_1)

{
  func_0x00010b5bae0c();
  FUN_10b5b9cf8(param_1);
  return param_1;
}



/* Entry: 10b5b9cf8; end: 10b5b9d1f;  */

/* WARNING: Possible PIC construction at 0x00010b5b9d0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b5b9d10) */

void FUN_10b5b9cf8(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10) ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    func_0x000107c60ca0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar1);
  return;
}



/* Entry: 10b5b9d20; end: 10b5b9d23;  */

undefined8 FUN_10b5b9d20(undefined8 param_1)

{
  func_0x00010b5bae0c();
  FUN_10b5b9cf8(param_1);
  return param_1;
}



/* Entry: 10b5b9d24; end: 10b5b9d37;  */

void FUN_10b5b9d24(void)

{
  FUN_10b5b9ccc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b9d38; end: 10b5b9d43;  */

undefined ** FUN_10b5b9d38(void)

{
  return &PTR_DAT_110d17ec0;
}



/* Entry: 10b5b9d44; end: 10b5b9d7f;  */

void FUN_10b5b9d44(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5bad8c();
  func_0x000107c3025c(unaff_x19 + 0x18);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
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



/* Entry: 10b5b9d80; end: 10b5b9ecb;  */

long * FUN_10b5b9d80(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long extraout_x8;
  int iVar6;
  long unaff_x22;
  long *plVar7;
  int iVar8;
  
  plVar1 = param_1;
  plVar4 = param_2;
  plVar7 = param_3;
  func_0x00010b5baddc(param_1[2]);
  if ((long)plVar4 < 0) {
    plVar4 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5b9dc0;
  }
  else if ((int)plVar4 != 0) {
LAB_10b5b9dc0:
    func_0x00010b5bad50();
    plVar4 = (long *)0x1;
    plVar1 = param_3;
    func_0x00010b5bad0c();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if ((int)param_1[4] != 0) {
    func_0x00010b5bad18();
    plVar2 = (long *)0x10;
    func_0x000107c280a8();
    func_0x00010b5bad60();
    plVar4 = plVar1;
    param_2 = plVar2;
  }
  func_0x00010b5baddc(param_1[3]);
  if ((long)plVar4 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b5b9e40;
  }
  else if ((int)plVar4 == 0) goto LAB_10b5b9e40;
  func_0x00010b5bad50();
  plVar2 = param_3;
  func_0x00010b5bad0c(param_3,3);
  param_2 = plVar2;
LAB_10b5b9e40:
  plVar4 = plVar2;
  if (*(char *)((long)param_1 + 0x24) == '\x01') {
    func_0x00010b5bad18();
    plVar4 = (long *)(ulong)*(byte *)((long)param_1 + 0x24);
    uVar3 = 0x20;
    func_0x000107c280a8(0x20,plVar2);
    func_0x000107c280a8(plVar4,uVar3);
    param_2 = plVar4;
  }
  if ((int)param_1[5] != 0) {
    func_0x00010b5bad18();
    param_2 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar4);
    func_0x00010b5bad60();
  }
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  func_0x00010b5bae84();
  if ((long)plVar7 < 0) {
    lVar5 = *(long *)(extraout_x8 + 8);
    plVar7 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar5 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar7) {
    while( true ) {
      iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar6 = (int)plVar7;
      plVar7 = (long *)(ulong)(uint)(iVar6 - iVar8);
      if (iVar6 - iVar8 == 0 || iVar6 < iVar8) break;
      func_0x00010b4d5738();
      lVar5 = (long)param_2 + (long)iVar8;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar5);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar6);
  }
  _memcpy(param_2,lVar5,(ulong)plVar7 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar7);
}



/* Entry: 10b5b9ecc; end: 10b5b9f87;  */

void FUN_10b5b9ecc(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b5bad78();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)param_1 + 1;
  }
  func_0x00010b5badc4(*(undefined8 *)(unaff_x19 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b5bae78();
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x20)) * -9 + 0x280U >> 6) + 1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(unaff_x19 + 0x24) * 2;
  if (*(int *)(unaff_x19 + 0x28) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x28)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5bae90();
    lVar2 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x2c) = iVar1;
  return;
}



/* Entry: 10b5b9f88; end: 10b5b9f8b;  */

void FUN_10b5b9f88(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5bad38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5badd0();
    }
    func_0x00010b5bae5c();
  }
  func_0x00010b5bade8(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5badd0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248();
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(char *)(unaff_x20 + 0x24) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x24) = 1;
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5bae14();
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



/* Entry: 10b5b9f8c; end: 10b5ba023;  */

void FUN_10b5b9f8c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5bad38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5badd0();
    }
    func_0x00010b5bae5c();
  }
  func_0x00010b5bade8(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5badd0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248();
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(char *)(unaff_x20 + 0x24) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x24) = 1;
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5bae14();
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



/* Entry: 10b5ba024; end: 10b5ba04f;  */

long FUN_10b5ba024(long param_1)

{
  func_0x00010b5bae0c();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5ba050; end: 10b5ba053;  */

long FUN_10b5ba050(long param_1)

{
  func_0x00010b5bae0c();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5ba054; end: 10b5ba067;  */

void FUN_10b5ba054(void)

{
  FUN_10b5ba024();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5ba068; end: 10b5ba073;  */

undefined ** FUN_10b5ba068(void)

{
  return &PTR_DAT_110d17f10;
}



/* Entry: 10b5ba074; end: 10b5ba0a3;  */

void FUN_10b5ba074(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5bad8c();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
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



/* Entry: 10b5ba0a4; end: 10b5ba15f;  */

long * FUN_10b5ba0a4(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  int iVar4;
  long *unaff_x22;
  long *plVar5;
  int iVar6;
  
  plVar1 = param_1;
  plVar2 = param_2;
  plVar5 = param_3;
  func_0x00010b5baddc(param_1[2]);
  if ((long)plVar2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b5ba0f8;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)plVar2 == 0) goto LAB_10b5ba0f8;
  func_0x00010b5bad50();
  func_0x00010b5badb0();
  plVar1 = unaff_x22;
  param_2 = unaff_x22;
LAB_10b5ba0f8:
  if ((int)param_1[3] != 0) {
    func_0x00010b5bae50();
    func_0x00010b5badf4();
    func_0x00010b5bae3c();
    param_2 = plVar1;
  }
  plVar1 = param_2;
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    plVar1 = param_3;
    func_0x000107c282ac();
    plVar5 = param_2;
  }
  if ((param_1[1] & 1U) != 0) {
    func_0x00010b5bae84();
    if ((long)plVar5 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      plVar5 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*param_3 - (long)plVar1 < (long)(int)plVar5) {
      while( true ) {
        iVar6 = ((int)*param_3 - (int)plVar1) + 0x10;
        iVar4 = (int)plVar5;
        plVar5 = (long *)(ulong)(uint)(iVar4 - iVar6);
        if (iVar4 - iVar6 == 0 || iVar4 < iVar6) break;
        func_0x00010b4d5738();
        lVar3 = (long)plVar1 + (long)iVar6;
        plVar1 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar1 + (long)iVar4);
    }
    _memcpy(plVar1,lVar3,(ulong)plVar5 & 0xffffffff);
    return (long *)((long)plVar1 + (long)(int)plVar5);
  }
  return plVar1;
}



/* Entry: 10b5ba160; end: 10b5ba1f7;  */

void FUN_10b5ba160(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b5bad78();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x18)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(unaff_x19 + 0x1c) != 0) {
    iVar1 = ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x1c)) * -9 + 0x2c0U >> 6) + iVar1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5bae90();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x20) = iVar1;
  return;
}



/* Entry: 10b5ba1f8; end: 10b5ba1fb;  */

void FUN_10b5ba1f8(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5bad38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5badd0();
    }
    func_0x00010b5bae5c();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if (*(int *)(unaff_x20 + 0x1c) != 0) {
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x20 + 0x1c);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5bae14();
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



/* Entry: 10b5ba1fc; end: 10b5ba25b;  */

void FUN_10b5ba1fc(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5bad38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5badd0();
    }
    func_0x00010b5bae5c();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if (*(int *)(unaff_x20 + 0x1c) != 0) {
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x20 + 0x1c);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5bae14();
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


