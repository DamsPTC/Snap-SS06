/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b5473ac; end: 10b547403;  */

undefined8 * FUN_10b5473ac(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x00010b5482f0();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5481d8();
  }
  else {
    func_0x00010b548188();
  }
  *param_1 = &PTR_FUN_110d02d28;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  FUN_10b544db0();
  return param_1;
}



/* Entry: 10b547404; end: 10b54745b;  */

undefined8 * FUN_10b547404(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x00010b5482f0();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5481d8();
  }
  else {
    func_0x00010b548188();
  }
  *param_1 = &PTR_FUN_110d02cd8;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  func_0x00010b544ebc();
  return param_1;
}



/* Entry: 10b54745c; end: 10b547503;  */

void FUN_10b54745c(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x00010b548094();
  if (param_1 == 0) {
    func_0x00010b54830c();
  }
  else {
    func_0x00010b548314();
  }
  func_0x00010b5480d4();
  func_0x00010b5480c8(&PTR_FUN_110d02f58);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b547d8c();
  }
  *(undefined4 *)(unaff_x21 + 0x10) = *(undefined4 *)(unaff_x19 + 0x10);
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  func_0x000105991a48(unaff_x21 + 0x18);
  uVar1 = *(uint *)(unaff_x21 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x20;
    func_0x00010b537450();
  }
  *(undefined8 *)(unaff_x21 + 0x38) = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x00010b546bbc();
  }
  *(undefined8 *)(unaff_x21 + 0x40) = unaff_x20;
  *(undefined1 *)(unaff_x21 + 0x48) = *(undefined1 *)(unaff_x19 + 0x48);
  return;
}



/* Entry: 10b547504; end: 10b5475f7;  */

void FUN_10b547504(long param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x00010b548144();
  if (param_1 == 0) {
    __Znwm(0x80);
  }
  else {
    FUN_10b4d80e0();
  }
  func_0x00010b5485a0();
  func_0x00010b5484e8(&PTR_FUN_110d03278);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b547d8c();
  }
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x21 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  func_0x00010b5482fc(unaff_x19 + 0x18);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  func_0x00010b5482fc(unaff_x19 + 0x30);
  *(undefined4 *)(unaff_x19 + 0x40) = 0;
  func_0x00010598dec8(unaff_x19 + 0x48);
  *(undefined4 *)(unaff_x19 + 0x58) = 0;
  func_0x00010598fd00(unaff_x19 + 0x60);
  if ((*(byte *)(unaff_x19 + 0x10) & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    FUN_10b546bec();
  }
  *(undefined8 *)(unaff_x19 + 0x78) = unaff_x20;
  return;
}



/* Entry: 10b5475f8; end: 10b547687;  */

void FUN_10b5475f8(long param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010b548094();
  if (param_1 == 0) {
    __Znwm(0x48);
  }
  else {
    FUN_10b4d80e0();
  }
  func_0x00010b5480d4();
  func_0x00010b5480c8(&PTR_FUN_110d02968);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b547d8c();
  }
  func_0x00010b5482fc(unaff_x21 + 0x10);
  *(undefined4 *)(unaff_x21 + 0x20) = 0;
  func_0x00010b5482fc(unaff_x21 + 0x28);
  *(undefined4 *)(unaff_x21 + 0x38) = 0;
  *(undefined4 *)(unaff_x21 + 0x40) = 0;
  *(undefined1 *)(unaff_x21 + 0x3c) = *(undefined1 *)(unaff_x19 + 0x3c);
  return;
}



/* Entry: 10b547688; end: 10b5476df;  */

undefined8 * FUN_10b547688(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x00010b5482f0();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5481d8();
  }
  else {
    func_0x00010b548188();
  }
  *param_1 = &PTR_FUN_110d029b8;
  param_1[1] = unaff_x21;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_10b53ff08();
  return param_1;
}



/* Entry: 10b5476e0; end: 10b5479ef;  */

void FUN_10b5476e0(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b548080();
  if (param_1 == 0) {
    func_0x00010b548030();
  }
  else {
    func_0x00010b547e60();
  }
  func_0x00010b54832c();
  func_0x00010b5482e4(&PTR_FUN_110d02d78);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b547d8c();
  }
  lVar1 = unaff_x20 + 0x10;
  func_0x00010b548180();
  *(long *)(unaff_x21 + 0x10) = lVar1;
  *(undefined4 *)(unaff_x21 + 0x18) = 0;
  return;
}



/* Entry: 10b5479f0; end: 10b547a57;  */

undefined8 * FUN_10b5479f0(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00010b5482f0();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b548030();
  }
  else {
    param_1 = unaff_x21;
    FUN_10b4d80e0();
  }
  *param_1 = &PTR_FUN_110d02c38;
  param_1[1] = unaff_x21;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_10b544030();
  return param_1;
}



/* Entry: 10b547a58; end: 10b547ca7;  */

void FUN_10b547a58(long param_1)

{
  int iVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b548144();
  if (param_1 == 0) {
    func_0x00010b5480b8();
  }
  else {
    func_0x00010b5480c0();
    param_1 = unaff_x20;
  }
  func_0x00010b5485a0();
  func_0x00010b5484e8(&PTR_FUN_110d030e8);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b547d8c();
  }
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
  iVar1 = *(int *)(unaff_x21 + 0x24);
  *(int *)(unaff_x19 + 0x24) = iVar1;
  *(undefined2 *)(unaff_x19 + 0x10) = *(undefined2 *)(unaff_x21 + 0x10);
  if (iVar1 == 4) {
    func_0x00010b5482ac();
    func_0x00010b547360();
  }
  else {
    if (iVar1 != 3) {
      return;
    }
    func_0x00010b5482ac();
    FUN_10b547310();
  }
  *(long *)(unaff_x19 + 0x18) = param_1;
  return;
}



/* Entry: 10b547ca8; end: 10b5485df;  */

void FUN_10b547ca8(void)

{
  return;
}



/* Entry: 10b5485e0; end: 10b548617;  */

long FUN_10b5485e0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b54a368();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b548618; end: 10b54861b;  */

long FUN_10b548618(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b54a368();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b54861c; end: 10b54862f;  */

void FUN_10b54861c(void)

{
  FUN_10b5485e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b548630; end: 10b54863b;  */

undefined ** FUN_10b548630(void)

{
  return &PTR_DAT_110d045d8;
}



/* Entry: 10b54863c; end: 10b548687;  */

void FUN_10b54863c(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b54a3f4(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
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



/* Entry: 10b548688; end: 10b548793;  */

long * FUN_10b548688(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar1 = param_1;
  if ((int)param_1[4] != 0) {
    plVar2 = param_1;
    func_0x00010b5495a8();
    plVar1 = (long *)0x8;
    func_0x000107c280a8(8,plVar2);
    func_0x00010b549658();
    param_2 = plVar1;
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    plVar1 = (long *)0x2;
    func_0x000107c303cc(2,param_1[3],*(undefined4 *)(param_1[3] + 0x30),param_2,param_3);
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(int *)((long)param_1 + 0x24) != 0) {
    func_0x00010b5495a8();
    plVar2 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar1);
    func_0x00010b549590();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if ((int)param_1[6] != 0) {
    func_0x00010b5495a8();
    plVar1 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar2);
    func_0x00010b549590();
    param_2 = plVar1;
  }
  if (param_1[5] != 0) {
    func_0x00010b5495a8();
    param_2 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar1);
    func_0x00010b54959c();
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



/* Entry: 10b548794; end: 10b54886b;  */

void FUN_10b548794(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    FUN_10b5371f0();
    iVar1 = iVar1 + 1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT(*(int *)(param_1 + 0x24)) * -9 + 0x1a0U >> 6);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    iVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + iVar1;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT(*(int *)(param_1 + 0x30)) * -9 + 0x1a0U >> 6);
  }
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



/* Entry: 10b54886c; end: 10b54892f;  */

void FUN_10b54886c(long param_1,long param_2)

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
      func_0x00010b537450(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_10b54a65c(*(long *)(param_1 + 0x18));
    }
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x24);
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
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



/* Entry: 10b548930; end: 10b548a4b;  */

undefined8 * FUN_10b548930(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d04598;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  FUN_10b549434(param_1 + 2,param_3 + 0x10);
  func_0x00010598fd00(param_1 + 5,param_2,param_3 + 0x28);
  func_0x00010598fd00(param_1 + 8,param_2,param_3 + 0x40);
  lVar1 = param_3 + 0x58;
  func_0x00010b5495e0();
  param_1[0xb] = lVar1;
  lVar1 = param_3 + 0x60;
  func_0x00010b5495e0();
  param_1[0xc] = lVar1;
  lVar1 = param_3 + 0x68;
  func_0x00010b5495e0();
  param_1[0xd] = lVar1;
  lVar1 = param_3 + 0x70;
  func_0x00010b5495e0();
  param_1[0xe] = lVar1;
  lVar1 = param_3 + 0x78;
  func_0x00010b5495e0();
  param_1[0xf] = lVar1;
  lVar1 = param_3 + 0x80;
  func_0x00010b5495e0();
  param_1[0x10] = lVar1;
  *(undefined4 *)((long)param_1 + 0xac) = 0;
  uVar3 = *(undefined8 *)(param_3 + 0x90);
  uVar2 = *(undefined8 *)(param_3 + 0x88);
  uVar5 = *(undefined8 *)(param_3 + 0xa0);
  uVar4 = *(undefined8 *)(param_3 + 0x98);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_3 + 0xa8);
  param_1[0x14] = uVar5;
  param_1[0x13] = uVar4;
  param_1[0x12] = uVar3;
  param_1[0x11] = uVar2;
  return param_1;
}



/* Entry: 10b548a4c; end: 10b548a7b;  */

long FUN_10b548a4c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b548a7c(param_1);
  return param_1;
}



/* Entry: 10b548a7c; end: 10b548acb;  */

long * FUN_10b548a7c(long param_1)

{
  long *plVar1;
  
  func_0x000107c30258(param_1 + 0x58);
  func_0x000107c30258(param_1 + 0x60);
  func_0x000107c30258(param_1 + 0x68);
  func_0x000107c30258(param_1 + 0x70);
  func_0x000107c30258(param_1 + 0x78);
  func_0x000107c30258(param_1 + 0x80);
  plVar1 = (long *)(param_1 + 0x10);
  func_0x000107c282b4(param_1 + 0x40);
  func_0x000107c282b4(param_1 + 0x28);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10b548acc; end: 10b548acf;  */

long FUN_10b548acc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b548a7c(param_1);
  return param_1;
}



/* Entry: 10b548ad0; end: 10b548ae3;  */

void FUN_10b548ad0(void)

{
  FUN_10b548a4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b548ae4; end: 10b548aef;  */

undefined ** FUN_10b548ae4(void)

{
  return &PTR_DAT_110d04628;
}



/* Entry: 10b548af0; end: 10b548b7f;  */

void FUN_10b548af0(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  func_0x000107c282c0(param_1 + 0x28);
  func_0x000107c282c0(param_1 + 0x40);
  func_0x000107c3025c(param_1 + 0x58);
  func_0x000107c3025c(param_1 + 0x60);
  func_0x000107c3025c(param_1 + 0x68);
  func_0x000107c3025c(param_1 + 0x70);
  func_0x000107c3025c(param_1 + 0x78);
  func_0x000107c3025c(param_1 + 0x80);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
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



/* Entry: 10b548b80; end: 10b54902b;  */

uint * FUN_10b548b80(uint *param_1,uint *param_2,uint *param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  uint *puVar6;
  uint *puVar7;
  undefined8 *puVar8;
  uint *puVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  long unaff_x22;
  undefined8 *puVar14;
  uint *puVar15;
  int iVar16;
  long lVar17;
  
  puVar6 = param_1;
  puVar9 = param_2;
  func_0x00010b54961c(*(undefined8 *)(param_1 + 0x16));
  if ((long)puVar9 < 0) {
    puVar9 = (uint *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b548bcc;
  }
  else if ((int)puVar9 != 0) {
LAB_10b548bcc:
    func_0x00010b5495d0();
    puVar9 = (uint *)0x1;
    puVar6 = param_3;
    func_0x00010b549584();
    param_2 = puVar6;
  }
  func_0x00010b54961c(*(undefined8 *)(param_1 + 0x18));
  if ((long)puVar9 < 0) {
    puVar9 = (uint *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b548c0c;
  }
  else if ((int)puVar9 != 0) {
LAB_10b548c0c:
    func_0x00010b5495d0();
    puVar9 = (uint *)0x2;
    puVar6 = param_3;
    func_0x00010b549584();
    param_2 = puVar6;
  }
  func_0x00010b54961c(*(undefined8 *)(param_1 + 0x1a));
  if ((long)puVar9 < 0) {
    puVar9 = (uint *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b548c4c;
  }
  else if ((int)puVar9 != 0) {
LAB_10b548c4c:
    func_0x00010b5495d0();
    puVar9 = (uint *)0x3;
    puVar6 = param_3;
    func_0x00010b549584();
    param_2 = puVar6;
  }
  uVar10 = 0;
  uVar3 = param_1[6];
  puVar15 = (uint *)(ulong)uVar3;
  while( true ) {
    cVar4 = SBORROW4(uVar3,uVar10);
    cVar5 = (int)(uVar3 - uVar10) < 0;
    if (uVar3 == uVar10) break;
    uVar11 = *(ulong *)(param_1 + 4);
    puVar2 = (ulong *)(param_1 + 4);
    if ((uVar11 & 1) != 0) {
      puVar2 = (ulong *)(uVar11 + (long)(int)uVar10 * 8 + 7);
    }
    puVar9 = (uint *)*puVar2;
    puVar6 = (uint *)0x4;
    func_0x000107c303cc(4,puVar9,puVar9[5],param_2,param_3);
    uVar10 = uVar10 + 1;
    param_2 = puVar6;
  }
  for (uVar11 = (ulong)(param_1[0xc] & ((int)param_1[0xc] >> 0x1f ^ 0xffffffffU)); uVar11 != 0;
      uVar11 = uVar11 - 1) {
    func_0x00010b5495fc();
    puVar6 = puVar15;
    if ((long)puVar9 < 0) {
      puVar9 = *(uint **)(puVar15 + 2);
      puVar6 = *(uint **)puVar15;
    }
    func_0x00010b54964c();
    lVar17 = (long)*(char *)((long)puVar15 + 0x17);
    if (lVar17 < 0) {
      lVar17 = *(long *)(puVar15 + 2);
      cVar4 = SBORROW8(lVar17,0x7f);
      cVar5 = lVar17 + -0x7f < 0;
      if (lVar17 < 0x80) goto LAB_10b548d00;
LAB_10b548d34:
      puVar9 = (uint *)0x5;
      puVar6 = param_3;
      func_0x00010b549678();
      param_2 = puVar6;
    }
    else {
LAB_10b548d00:
      func_0x00010b549684();
      if (cVar5 != cVar4) goto LAB_10b548d34;
      *(undefined1 *)param_2 = 0x2a;
      *(char *)((long)param_2 + 1) = (char)lVar17;
      if (*(char *)((long)puVar15 + 0x17) < '\0') {
        puVar15 = *(uint **)puVar15;
      }
      func_0x00010b5495e8();
      param_2 = (uint *)((long)param_2 + lVar17);
    }
  }
  puVar7 = puVar6;
  if (param_1[0x24] != 0) {
    func_0x00010b549578();
    puVar7 = (uint *)0x30;
    func_0x000107c280a8();
    func_0x00010b549658();
    puVar9 = puVar6;
    param_2 = puVar7;
  }
  puVar6 = puVar7;
  if ((char)param_1[0x25] == '\x01') {
    func_0x00010b549578();
    puVar6 = (uint *)0x38;
    func_0x000107c280a8();
    func_0x00010b549590();
    puVar9 = puVar7;
    param_2 = puVar6;
  }
  puVar7 = puVar6;
  if (*(long *)(param_1 + 0x22) != 0) {
    func_0x00010b549578();
    puVar7 = (uint *)0x40;
    func_0x000107c280a8();
    func_0x00010b54959c();
    puVar9 = puVar6;
    param_2 = puVar7;
  }
  puVar6 = puVar7;
  if (*(long *)(param_1 + 0x26) != 0) {
    func_0x00010b549578();
    puVar6 = (uint *)0x48;
    func_0x000107c280a8();
    func_0x00010b54959c();
    puVar9 = puVar7;
    param_2 = puVar6;
  }
  puVar7 = puVar6;
  if (*(char *)((long)param_1 + 0x95) == '\x01') {
    func_0x00010b549578();
    puVar7 = (uint *)0x50;
    func_0x000107c280a8();
    func_0x00010b549590();
    puVar9 = puVar6;
    param_2 = puVar7;
  }
  uVar10 = (uint)*(byte *)((long)param_1 + 0x96);
  cVar5 = SBORROW4(uVar10,1);
  cVar4 = (int)(uVar10 - 1) < 0;
  puVar6 = puVar7;
  if (uVar10 == 1) {
    func_0x00010b549578();
    puVar6 = (uint *)0x58;
    func_0x000107c280a8();
    func_0x00010b549590();
    puVar9 = puVar7;
    param_2 = puVar6;
  }
  puVar14 = (undefined8 *)&UNK_10f778e0e;
  for (uVar11 = (ulong)(param_1[0x12] & ((int)param_1[0x12] >> 0x1f ^ 0xffffffffU)); uVar11 != 0;
      uVar11 = uVar11 - 1) {
    func_0x00010b5495fc();
    puVar6 = puVar15;
    if ((long)puVar9 < 0) {
      puVar9 = *(uint **)(puVar15 + 2);
      puVar6 = *(uint **)puVar15;
    }
    func_0x00010b54964c();
    lVar17 = (long)*(char *)((long)puVar15 + 0x17);
    if (lVar17 < 0) {
      lVar17 = *(long *)(puVar15 + 2);
      cVar5 = SBORROW8(lVar17,0x7f);
      cVar4 = lVar17 + -0x7f < 0;
      if (lVar17 < 0x80) goto LAB_10b548e78;
LAB_10b548eac:
      puVar9 = (uint *)0xc;
      puVar6 = param_3;
      func_0x00010b549678();
      param_2 = puVar6;
    }
    else {
LAB_10b548e78:
      func_0x00010b549684();
      if (cVar4 != cVar5) goto LAB_10b548eac;
      *(undefined1 *)param_2 = 0x62;
      *(char *)((long)param_2 + 1) = (char)lVar17;
      if (*(char *)((long)puVar15 + 0x17) < '\0') {
        puVar15 = *(uint **)puVar15;
      }
      func_0x00010b5495e8();
      param_2 = (uint *)((long)param_2 + lVar17);
    }
  }
  puVar15 = puVar6;
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010b549578();
    puVar15 = (uint *)0x68;
    func_0x000107c280a8();
    func_0x00010b54959c();
    puVar9 = puVar6;
    param_2 = puVar15;
  }
  if (param_1[0x2a] != 0) {
    func_0x00010b549578();
    uVar10 = param_1[0x2a];
    puVar14 = (undefined8 *)(ulong)uVar10;
    puVar9 = (uint *)0x75;
    func_0x000107c280a8();
    param_2 = puVar9 + 1;
    *puVar9 = uVar10;
    puVar9 = puVar15;
  }
  func_0x00010b54961c(*(undefined8 *)(param_1 + 0x1c));
  if ((long)puVar9 < 0) {
    puVar9 = (uint *)0x0;
    if (puVar14[1] != 0) {
      puVar8 = (undefined8 *)*puVar14;
      goto LAB_10b548f2c;
    }
  }
  else {
    puVar8 = puVar14;
    if ((int)puVar9 != 0) {
LAB_10b548f2c:
      func_0x00010b5495d0(puVar8);
      puVar9 = (uint *)0xf;
      param_2 = param_3;
      func_0x00010b549584();
    }
  }
  func_0x00010b54961c(*(undefined8 *)(param_1 + 0x1e));
  if ((long)puVar9 < 0) {
    puVar9 = (uint *)0x0;
    if (puVar14[1] != 0) {
      puVar8 = (undefined8 *)*puVar14;
      goto LAB_10b548f6c;
    }
  }
  else {
    puVar8 = puVar14;
    if ((int)puVar9 != 0) {
LAB_10b548f6c:
      func_0x00010b5495d0(puVar8);
      puVar9 = (uint *)0x10;
      param_2 = param_3;
      func_0x00010b549584();
    }
  }
  func_0x00010b54961c(*(undefined8 *)(param_1 + 0x20));
  if ((long)puVar9 < 0) {
    if (puVar14[1] == 0) goto LAB_10b548fc8;
    puVar14 = (undefined8 *)*puVar14;
  }
  else if ((int)puVar9 == 0) goto LAB_10b548fc8;
  func_0x00010b5495d0(puVar14);
  param_2 = param_3;
  func_0x00010b549584(param_3,0x11);
LAB_10b548fc8:
  if ((*(ulong *)(param_1 + 2) & 1) == 0) {
    return param_2;
  }
  uVar12 = *(ulong *)(param_1 + 2) & 0xfffffffffffffffe;
  uVar11 = (ulong)*(char *)(uVar12 + 0x1f);
  if ((long)uVar11 < 0) {
    lVar17 = *(long *)(uVar12 + 8);
    uVar11 = *(ulong *)(uVar12 + 0x10);
  }
  else {
    lVar17 = uVar12 + 8;
  }
  if ((long)(int)uVar11 <= *(long *)param_3 - (long)param_2) {
    _memcpy(param_2,lVar17,uVar11 & 0xffffffff);
    return (uint *)((long)param_2 + (long)(int)uVar11);
  }
  while( true ) {
    iVar16 = ((int)*(undefined8 *)param_3 - (int)param_2) + 0x10;
    iVar13 = (int)uVar11;
    uVar11 = (ulong)(uint)(iVar13 - iVar16);
    if (iVar13 - iVar16 == 0 || iVar13 < iVar16) break;
    func_0x00010b4d5738();
    puVar1 = (undefined1 *)((long)param_2 + (long)iVar16);
    param_2 = param_3;
    func_0x000107c303e4(param_3,puVar1);
  }
  func_0x00010b4d5738();
  return (uint *)((long)param_2 + (long)iVar13);
}



/* Entry: 10b54902c; end: 10b54926f;  */

void FUN_10b54902c(ulong param_1)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  lVar5 = (long)*(int *)(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 0x10);
  if ((uVar4 & 1) != 0) {
    puVar1 = (ulong *)(uVar4 + 7);
  }
  uVar4 = param_1;
  for (lVar6 = lVar5 << 3; lVar6 != 0; lVar6 = lVar6 + -8) {
    uVar4 = *puVar1;
    FUN_10b548794();
    lVar5 = uVar4 + lVar5 + (ulong)((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6);
    puVar1 = puVar1 + 1;
  }
  uVar2 = *(uint *)(param_1 + 0x30);
  lVar5 = lVar5 + (ulong)uVar2;
  for (uVar7 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar7 != 0; uVar7 = uVar7 - 1) {
    func_0x00010b5495b4();
    lVar5 = uVar4 + lVar5;
  }
  uVar2 = *(uint *)(param_1 + 0x48);
  lVar5 = lVar5 + (ulong)uVar2;
  iVar3 = (int)lVar5;
  for (uVar7 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar7 != 0; uVar7 = uVar7 - 1) {
    func_0x00010b5495b4();
    lVar5 = uVar4 + lVar5;
    iVar3 = (int)lVar5;
  }
  func_0x00010b549640(*(undefined8 *)(param_1 + 0x58));
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    func_0x000107c282a0();
    func_0x00010b549698();
  }
  func_0x00010b549640(*(undefined8 *)(param_1 + 0x60));
  lVar5 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    func_0x000107c282a0();
    func_0x00010b549698();
  }
  func_0x00010b549640(*(undefined8 *)(param_1 + 0x68));
  lVar5 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    func_0x000107c282a0();
    func_0x00010b549698();
  }
  func_0x00010b549640(*(undefined8 *)(param_1 + 0x70));
  lVar5 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    func_0x000107c282a0();
    func_0x00010b549698();
  }
  func_0x00010b549640(*(undefined8 *)(param_1 + 0x78));
  lVar5 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    func_0x000107c282a0();
    iVar3 = iVar3 + (int)uVar4 + 2;
  }
  func_0x00010b549640(*(undefined8 *)(param_1 + 0x80));
  lVar5 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    func_0x000107c282a0();
    iVar3 = iVar3 + (int)uVar4 + 2;
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    iVar3 = ((int)LZCOUNT(*(long *)(param_1 + 0x88)) * -9 + 0x2c0U >> 6) + iVar3;
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x90)) * -9 + 0x280U >> 6) + 1;
  }
  iVar3 = iVar3 + (uint)*(byte *)(param_1 + 0x94) * 2 + (uint)*(byte *)(param_1 + 0x95) * 2 +
          (uint)*(byte *)(param_1 + 0x96) * 2;
  if (*(long *)(param_1 + 0x98) != 0) {
    iVar3 = ((int)LZCOUNT(*(long *)(param_1 + 0x98)) * -9 + 0x2c0U >> 6) + iVar3;
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    iVar3 = ((int)LZCOUNT(*(long *)(param_1 + 0xa0)) * -9 + 0x2c0U >> 6) + iVar3;
  }
  if (*(int *)(param_1 + 0xa8) != 0) {
    iVar3 = iVar3 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar4 + 0x10);
    }
    iVar3 = (int)lVar5 + iVar3;
  }
  *(int *)(param_1 + 0xac) = iVar3;
  return;
}



/* Entry: 10b549270; end: 10b549273;  */

void FUN_10b549270(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  
  FUN_10b549434(param_1 + 0x10,param_2 + 0x10);
  func_0x00010598fce8(param_1 + 0x28,param_2 + 0x28);
  lVar1 = param_2 + 0x40;
  func_0x00010598fce8(param_1 + 0x40);
  func_0x00010b549634(*(undefined8 *)(param_2 + 0x58));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b549628();
    }
    func_0x000107c30248(param_1 + 0x58);
  }
  func_0x00010b549634(*(undefined8 *)(param_2 + 0x60));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b549628();
    }
    func_0x000107c30248(param_1 + 0x60);
  }
  func_0x00010b549634(*(undefined8 *)(param_2 + 0x68));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b549628();
    }
    func_0x000107c30248(param_1 + 0x68);
  }
  func_0x00010b549634(*(undefined8 *)(param_2 + 0x70));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b549628();
    }
    func_0x000107c30248(param_1 + 0x70);
  }
  func_0x00010b549634(*(undefined8 *)(param_2 + 0x78));
  lVar2 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b549628();
    }
    func_0x000107c30248(param_1 + 0x78);
  }
  func_0x00010b549634(*(undefined8 *)(param_2 + 0x80));
  lVar2 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b549628();
    }
    func_0x000107c30248(param_1 + 0x80);
  }
  if (*(long *)(param_2 + 0x88) != 0) {
    *(long *)(param_1 + 0x88) = *(long *)(param_2 + 0x88);
  }
  if (*(int *)(param_2 + 0x90) != 0) {
    *(int *)(param_1 + 0x90) = *(int *)(param_2 + 0x90);
  }
  if (*(char *)(param_2 + 0x94) == '\x01') {
    *(undefined1 *)(param_1 + 0x94) = 1;
  }
  if (*(char *)(param_2 + 0x95) == '\x01') {
    *(undefined1 *)(param_1 + 0x95) = 1;
  }
  if (*(char *)(param_2 + 0x96) == '\x01') {
    *(undefined1 *)(param_1 + 0x96) = 1;
  }
  if (*(long *)(param_2 + 0x98) != 0) {
    *(long *)(param_1 + 0x98) = *(long *)(param_2 + 0x98);
  }
  if (*(long *)(param_2 + 0xa0) != 0) {
    *(long *)(param_1 + 0xa0) = *(long *)(param_2 + 0xa0);
  }
  if (*(int *)(param_2 + 0xa8) != 0) {
    *(int *)(param_1 + 0xa8) = *(int *)(param_2 + 0xa8);
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



/* Entry: 10b549274; end: 10b549433;  */

void FUN_10b549274(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  
  FUN_10b549434(param_1 + 0x10,param_2 + 0x10);
  func_0x00010598fce8(param_1 + 0x28,param_2 + 0x28);
  lVar1 = param_2 + 0x40;
  func_0x00010598fce8(param_1 + 0x40);
  func_0x00010b549634(*(undefined8 *)(param_2 + 0x58));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b549628();
    }
    func_0x000107c30248(param_1 + 0x58);
  }
  func_0x00010b549634(*(undefined8 *)(param_2 + 0x60));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b549628();
    }
    func_0x000107c30248(param_1 + 0x60);
  }
  func_0x00010b549634(*(undefined8 *)(param_2 + 0x68));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b549628();
    }
    func_0x000107c30248(param_1 + 0x68);
  }
  func_0x00010b549634(*(undefined8 *)(param_2 + 0x70));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b549628();
    }
    func_0x000107c30248(param_1 + 0x70);
  }
  func_0x00010b549634(*(undefined8 *)(param_2 + 0x78));
  lVar2 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b549628();
    }
    func_0x000107c30248(param_1 + 0x78);
  }
  func_0x00010b549634(*(undefined8 *)(param_2 + 0x80));
  lVar2 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b549628();
    }
    func_0x000107c30248(param_1 + 0x80);
  }
  if (*(long *)(param_2 + 0x88) != 0) {
    *(long *)(param_1 + 0x88) = *(long *)(param_2 + 0x88);
  }
  if (*(int *)(param_2 + 0x90) != 0) {
    *(int *)(param_1 + 0x90) = *(int *)(param_2 + 0x90);
  }
  if (*(char *)(param_2 + 0x94) == '\x01') {
    *(undefined1 *)(param_1 + 0x94) = 1;
  }
  if (*(char *)(param_2 + 0x95) == '\x01') {
    *(undefined1 *)(param_1 + 0x95) = 1;
  }
  if (*(char *)(param_2 + 0x96) == '\x01') {
    *(undefined1 *)(param_1 + 0x96) = 1;
  }
  if (*(long *)(param_2 + 0x98) != 0) {
    *(long *)(param_1 + 0x98) = *(long *)(param_2 + 0x98);
  }
  if (*(long *)(param_2 + 0xa0) != 0) {
    *(long *)(param_1 + 0xa0) = *(long *)(param_2 + 0xa0);
  }
  if (*(int *)(param_2 + 0xa8) != 0) {
    *(int *)(param_1 + 0xa8) = *(int *)(param_2 + 0xa8);
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



/* Entry: 10b549434; end: 10b549453;  */

void FUN_10b549434(long *param_1,long param_2)

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



/* Entry: 10b549454; end: 10b549483;  */

long * FUN_10b549454(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b549484; end: 10b549577;  */

long * FUN_10b549484(long *param_1)

{
  func_0x000107c282b4(param_1 + 6);
  func_0x000107c282b4(param_1 + 3);
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b549578; end: 10b5496a3;  */

ulong * FUN_10b549578(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *unaff_x19;
  ulong *unaff_x21;
  
  if (unaff_x21 < (ulong *)*unaff_x19) {
    return unaff_x21;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    func_0x0001006b07dc();
    unaff_x21 = (ulong *)((long)puVar2 + (long)((int)unaff_x21 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= unaff_x21);
  return unaff_x21;
}



/* Entry: 10b5496a4; end: 10b54972f;  */

undefined8 * FUN_10b5496a4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d046b0;
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
    func_0x00010b537450(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = param_2;
  param_1[5] = *(undefined8 *)(param_3 + 0x28);
  return param_1;
}



/* Entry: 10b549730; end: 10b54975f;  */

long FUN_10b549730(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b549760(param_1);
  return param_1;
}



/* Entry: 10b549760; end: 10b54978f;  */

void FUN_10b549760(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b54a368();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b549790; end: 10b549793;  */

long FUN_10b549790(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b549760(param_1);
  return param_1;
}



/* Entry: 10b549794; end: 10b5497a7;  */

void FUN_10b549794(void)

{
  FUN_10b549730();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5497a8; end: 10b5497b3;  */

undefined ** FUN_10b5497a8(void)

{
  return &PTR_DAT_110d046f0;
}



/* Entry: 10b5497b4; end: 10b549807;  */

void FUN_10b5497b4(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b54a3f4(*(undefined8 *)(param_1 + 0x20));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
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



/* Entry: 10b549808; end: 10b549923;  */

long * FUN_10b549808(long *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  
  puVar8 = (undefined8 *)(param_1[3] & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  plVar2 = param_1;
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 == 0) goto LAB_10b549874;
    puVar1 = (undefined8 *)*puVar8;
  }
  else {
    puVar1 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_10b549874;
  }
  func_0x000107c303d4(puVar1,lVar4,1,&UNK_10f778ed5);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,puVar8,param_2);
  param_2 = plVar2;
LAB_10b549874:
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    plVar2 = (long *)0x2;
    func_0x000107c303cc(2,param_1[4],*(undefined4 *)(param_1[4] + 0x30),param_2,param_3);
    param_2 = plVar2;
  }
  plVar3 = plVar2;
  if ((int)param_1[5] != 0) {
    func_0x00010b549b34();
    plVar3 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x00010b549b40();
    param_2 = plVar3;
  }
  if (*(int *)((long)param_1 + 0x2c) != 0) {
    func_0x00010b549b34();
    param_2 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar3);
    func_0x00010b549b40();
  }
  if ((param_1[1] & 1U) != 0) {
    uVar6 = param_1[1] & 0xfffffffffffffffe;
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
  return param_2;
}



/* Entry: 10b549924; end: 10b5499bf;  */

long FUN_10b549924(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b54995c;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b54995c:
    lVar3 = 0;
    goto LAB_10b549960;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b549960:
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    FUN_10b5371f0();
    lVar3 = lVar3 + lVar2 + 1;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_10b549b0c();
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_10b549b0c();
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



/* Entry: 10b5499c0; end: 10b5499c3;  */

void FUN_10b5499c0(long param_1,long param_2)

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
      func_0x00010b537450(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      FUN_10b54a65c();
    }
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
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



/* Entry: 10b5499c4; end: 10b549aaf;  */

void FUN_10b5499c4(long param_1,long param_2)

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
      func_0x00010b537450(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      FUN_10b54a65c();
    }
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
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



/* Entry: 10b549ab0; end: 10b549ab7;  */

void FUN_10b549ab0(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d046b0;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[3] = &DAT_11383d918;
  return;
}



/* Entry: 10b549ab8; end: 10b549b0b;  */

void FUN_10b549ab8(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d046b0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[3] = &DAT_11383d918;
  return;
}



/* Entry: 10b549b0c; end: 10b549b7b;  */

void FUN_10b549b0c(void)

{
  return;
}



/* Entry: 10b549b7c; end: 10b549ba3;  */

long FUN_10b549b7c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b549ba4; end: 10b549beb;  */

undefined8 * FUN_10b549ba4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d04760;
  param_1[1] = param_2;
  param_1[2] = 0;
  func_0x00010b549b54(param_1,param_3);
  return param_1;
}



/* Entry: 10b549bec; end: 10b549bef;  */

long FUN_10b549bec(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b549bf0; end: 10b549c03;  */

void FUN_10b549bf0(void)

{
  FUN_10b549b7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b549c04; end: 10b549c23;  */

undefined ** FUN_10b549c04(void)

{
  return &PTR_DAT_110d047a0;
}



/* Entry: 10b549c24; end: 10b549cbb;  */

long * FUN_10b549c24(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x10);
    uVar2 = 8;
    func_0x000107c280a8(8,plVar1);
    func_0x000107c280b8(param_2,uVar2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
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



/* Entry: 10b549cbc; end: 10b549d13;  */

long FUN_10b549cbc(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
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



/* Entry: 10b549d14; end: 10b549d57;  */

void FUN_10b549d14(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x18);
  }
  *puVar1 = &PTR_FUN_110d04760;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b549d58; end: 10b549da3;  */

void FUN_10b549d58(void)

{
  return;
}



/* Entry: 10b549da4; end: 10b549dcb;  */

long FUN_10b549da4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b549dcc; end: 10b549e17;  */

undefined8 * FUN_10b549dcc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d04818;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x00010b549d60(param_1,param_3);
  return param_1;
}



/* Entry: 10b549e18; end: 10b549e1b;  */

long FUN_10b549e18(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b549e1c; end: 10b549e2f;  */

void FUN_10b549e1c(void)

{
  FUN_10b549da4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b549e30; end: 10b549e4f;  */

undefined ** FUN_10b549e30(void)

{
  return &PTR_DAT_110d04858;
}



/* Entry: 10b549e50; end: 10b549f27;  */

long * FUN_10b549e50(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  
  plVar1 = param_1;
  if (param_1[2] != 0) {
    plVar1 = param_3;
    func_0x000105991a14(param_3,param_1[2],param_2);
    param_2 = plVar1;
  }
  plVar6 = plVar1;
  if ((char)param_1[3] == '\x01') {
    func_0x00010b549ff4();
    plVar6 = (long *)(ulong)*(byte *)(param_1 + 3);
    uVar2 = 0x10;
    func_0x000107c280a8(0x10,plVar1);
    func_0x000107c280a8(plVar6,uVar2);
    param_2 = plVar6;
  }
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    func_0x00010b549ff4();
    param_2 = (long *)(ulong)*(uint *)((long)param_1 + 0x1c);
    uVar2 = 0x18;
    func_0x000107c280a8(0x18,plVar6);
    func_0x000107c280b8(param_2,uVar2);
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
        iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar7 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar8;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar7);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 10b549f28; end: 10b549fa3;  */

long FUN_10b549f28(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar3 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  lVar1 = uVar3 + (ulong)*(byte *)(param_1 + 0x18) * 2;
  if (*(int *)(param_1 + 0x1c) != 0) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x20) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b549fa4; end: 10b549feb;  */

void FUN_10b549fa4(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d04818;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b549fec; end: 10b549fff;  */

void FUN_10b549fec(void)

{
  return;
}



/* Entry: 10b54a000; end: 10b54a077;  */

undefined8 * FUN_10b54a000(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d048c8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b537450(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = param_2;
  return param_1;
}



/* Entry: 10b54a078; end: 10b54a0a7;  */

long FUN_10b54a078(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b54a0a8(param_1);
  return param_1;
}



/* Entry: 10b54a0a8; end: 10b54a0c3;  */

void FUN_10b54a0a8(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b54a368();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b54a0c4; end: 10b54a0c7;  */

long FUN_10b54a0c4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b54a0a8(param_1);
  return param_1;
}



/* Entry: 10b54a0c8; end: 10b54a0db;  */

void FUN_10b54a0c8(void)

{
  FUN_10b54a078();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b54a0dc; end: 10b54a0e7;  */

undefined ** FUN_10b54a0dc(void)

{
  return &PTR_DAT_110d04908;
}



/* Entry: 10b54a0e8; end: 10b54a1fb;  */

void FUN_10b54a0e8(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b54a3f4(*(undefined8 *)(param_1 + 0x18));
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



/* Entry: 10b54a1fc; end: 10b54a1ff;  */

void FUN_10b54a1fc(long param_1,long param_2)

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
      func_0x00010b537450(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_10b54a65c(*(long *)(param_1 + 0x18));
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



/* Entry: 10b54a200; end: 10b54a293;  */

void FUN_10b54a200(long param_1,long param_2)

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
      func_0x00010b537450(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_10b54a65c(*(long *)(param_1 + 0x18));
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



/* Entry: 10b54a294; end: 10b54a29b;  */

void FUN_10b54a294(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d048c8;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b54a29c; end: 10b54a2df;  */

void FUN_10b54a29c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d048c8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b54a2e0; end: 10b54a2e7;  */

void FUN_10b54a2e0(void)

{
  return;
}



/* Entry: 10b54a2e8; end: 10b54a367;  */

undefined8 * FUN_10b54a2e8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d04978;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar1 = param_3 + 0x10;
  FUN_10b54a798();
  param_1[2] = lVar1;
  lVar1 = param_3 + 0x18;
  FUN_10b54a798();
  param_1[3] = lVar1;
  lVar1 = param_3 + 0x20;
  FUN_10b54a798();
  param_1[4] = lVar1;
  param_3 = param_3 + 0x28;
  FUN_10b54a798();
  param_1[5] = param_3;
  *(undefined4 *)(param_1 + 6) = 0;
  return param_1;
}



/* Entry: 10b54a368; end: 10b54a397;  */

long FUN_10b54a368(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b54a398(param_1);
  return param_1;
}



/* Entry: 10b54a398; end: 10b54a3cf;  */

/* WARNING: Possible PIC construction at 0x00010b54a3ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b54a3bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b54a3b0) */
/* WARNING: Removing unreachable block (ram,0x00010b54a3c0) */

void FUN_10b54a398(long param_1)

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



/* Entry: 10b54a3d0; end: 10b54a3d3;  */

long FUN_10b54a3d0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b54a398(param_1);
  return param_1;
}



/* Entry: 10b54a3d4; end: 10b54a3e7;  */

void FUN_10b54a3d4(void)

{
  FUN_10b54a368();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b54a3e8; end: 10b54a3f3;  */

undefined ** FUN_10b54a3e8(void)

{
  return &PTR_DAT_110d049b8;
}



/* Entry: 10b54a3f4; end: 10b54a447;  */

void FUN_10b54a3f4(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
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



/* Entry: 10b54a448; end: 10b54a58f;  */

long * FUN_10b54a448(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  
  puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar2 = (long)*(char *)((long)puVar6 + 0x17);
  if (lVar2 < 0) {
    lVar2 = puVar6[1];
    if (lVar2 != 0) {
      puVar1 = (undefined8 *)*puVar6;
      goto LAB_10b54a48c;
    }
  }
  else {
    puVar1 = puVar6;
    if (*(char *)((long)puVar6 + 0x17) != '\0') {
LAB_10b54a48c:
      func_0x000107c303d4(puVar1,lVar2,1,&UNK_10f778f02);
      param_2 = param_3;
      func_0x00010b54a7a0(param_3,1,puVar6);
    }
  }
  puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar2 = (long)*(char *)((long)puVar6 + 0x17);
  if (lVar2 < 0) {
    lVar2 = puVar6[1];
    if (lVar2 == 0) goto LAB_10b54a4fc;
    puVar1 = (undefined8 *)*puVar6;
  }
  else {
    puVar1 = puVar6;
    if (*(char *)((long)puVar6 + 0x17) == '\0') goto LAB_10b54a4fc;
  }
  func_0x000107c303d4(puVar1,lVar2,1,&UNK_10f778f3b);
  param_2 = param_3;
  func_0x00010b54a7a0(param_3,2,puVar6);
LAB_10b54a4fc:
  uVar3 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar3 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar3 + 8);
  }
  if (lVar2 != 0) {
    param_2 = param_3;
    func_0x00010b54a7a0(param_3,3);
  }
  uVar3 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar3 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar3 + 8);
  }
  if (lVar2 != 0) {
    param_2 = param_3;
    func_0x00010b54a7a0(param_3,4);
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
        iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar5 = (int)uVar3;
        uVar3 = (ulong)(uint)(iVar5 - iVar7);
        if (iVar5 - iVar7 == 0 || iVar5 < iVar7) break;
        func_0x00010b4d5738();
        lVar2 = (long)param_2 + (long)iVar7;
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



/* Entry: 10b54a590; end: 10b54a657;  */

long FUN_10b54a590(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = param_1;
  func_0x00010b54a7bc(*(undefined8 *)(param_1 + 0x10));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar2 + 8);
  }
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar4 = lVar2 + 1;
  }
  func_0x00010b54a7bc(*(undefined8 *)(param_1 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    lVar4 = lVar4 + lVar2 + 1;
  }
  func_0x00010b54a7bc(*(undefined8 *)(param_1 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c28098();
    lVar4 = lVar4 + lVar2 + 1;
  }
  func_0x00010b54a7bc(*(undefined8 *)(param_1 + 0x28));
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c28098();
    lVar4 = lVar4 + lVar2 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x30) = (int)lVar4;
  return lVar4;
}



/* Entry: 10b54a658; end: 10b54a65b;  */

void FUN_10b54a658(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  
  lVar1 = param_2;
  func_0x00010b54a7d4(*(undefined8 *)(param_2 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b54a7c8();
    }
    func_0x000107c30248(param_1 + 0x10);
  }
  func_0x00010b54a7d4(*(undefined8 *)(param_2 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b54a7c8();
    }
    func_0x000107c30248(param_1 + 0x18);
  }
  func_0x00010b54a7d4(*(undefined8 *)(param_2 + 0x20));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b54a7c8();
    }
    func_0x000107c30248(param_1 + 0x20);
  }
  func_0x00010b54a7d4(*(undefined8 *)(param_2 + 0x28));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b54a7c8();
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



/* Entry: 10b54a65c; end: 10b54a73b;  */

void FUN_10b54a65c(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  
  lVar1 = param_2;
  func_0x00010b54a7d4(*(undefined8 *)(param_2 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b54a7c8();
    }
    func_0x000107c30248(param_1 + 0x10);
  }
  func_0x00010b54a7d4(*(undefined8 *)(param_2 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b54a7c8();
    }
    func_0x000107c30248(param_1 + 0x18);
  }
  func_0x00010b54a7d4(*(undefined8 *)(param_2 + 0x20));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b54a7c8();
    }
    func_0x000107c30248(param_1 + 0x20);
  }
  func_0x00010b54a7d4(*(undefined8 *)(param_2 + 0x28));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b54a7c8();
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



/* Entry: 10b54a73c; end: 10b54a743;  */

void FUN_10b54a73c(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d04978;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 10b54a744; end: 10b54a797;  */

void FUN_10b54a744(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d04978;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 10b54a798; end: 10b54a7df;  */

ulong FUN_10b54a798(ulong *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long unaff_x20;
  
  if ((*param_1 & 3) == 0) {
    return *param_1;
  }
  puVar2 = (undefined8 *)(*param_1 & 0xfffffffffffffffc);
  if (unaff_x20 != 0) {
    puVar1 = &stack0xffffffffffffffe8;
    FUN_10b4bf19c(puVar1,&stack0xffffffffffffffe0,&stack0xffffffffffffffd8);
    return (ulong)puVar1 | 3;
  }
  if (*(char *)((long)puVar2 + 0x17) < '\0') {
    puVar2 = (undefined8 *)*puVar2;
  }
  func_0x000100063c9c();
  func_0x000107c60c50();
  return (ulong)puVar2 | 2;
}



/* Entry: 10b54a7e0; end: 10b54a84f;  */

undefined8 * FUN_10b54a7e0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d04a30;
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



/* Entry: 10b54a850; end: 10b54a87f;  */

long FUN_10b54a850(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b54a880(param_1);
  return param_1;
}



/* Entry: 10b54a880; end: 10b54a8a7;  */

/* WARNING: Possible PIC construction at 0x00010b54a894: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b54a898) */

void FUN_10b54a880(long param_1)

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



/* Entry: 10b54a8a8; end: 10b54a8ab;  */

long FUN_10b54a8a8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b54a880(param_1);
  return param_1;
}



/* Entry: 10b54a8ac; end: 10b54a8bf;  */

void FUN_10b54a8ac(void)

{
  FUN_10b54a850();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b54a8c0; end: 10b54a8cb;  */

undefined ** FUN_10b54a8c0(void)

{
  return &PTR_DAT_110d04a70;
}



/* Entry: 10b54a8cc; end: 10b54a90f;  */

void FUN_10b54a8cc(long param_1)

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



/* Entry: 10b54a910; end: 10b54a9ff;  */

long * FUN_10b54a910(long param_1,long *param_2,long *param_3)

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
      goto LAB_10b54a954;
    }
  }
  else if (*(char *)((long)puVar5 + 0x17) != '\0') {
LAB_10b54a954:
    func_0x000107c303d4(puVar5,lVar1,1,&UNK_10f778f72);
    param_2 = param_3;
    FUN_10b54ab8c(param_3,1);
  }
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar1 = (long)*(char *)((long)puVar5 + 0x17);
  if (lVar1 < 0) {
    lVar1 = puVar5[1];
    if (lVar1 == 0) goto LAB_10b54a9bc;
    puVar5 = (undefined8 *)*puVar5;
  }
  else if (*(char *)((long)puVar5 + 0x17) == '\0') goto LAB_10b54a9bc;
  func_0x000107c303d4(puVar5,lVar1,1,&UNK_10f778fac);
  param_2 = param_3;
  FUN_10b54ab8c(param_3,2);
LAB_10b54a9bc:
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



/* Entry: 10b54aa00; end: 10b54aa8f;  */

long FUN_10b54aa00(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b54aa38;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b54aa38:
    lVar3 = 0;
    goto LAB_10b54aa3c;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b54aa3c:
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


