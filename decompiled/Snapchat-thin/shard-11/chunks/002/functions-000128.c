/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1082736b4; end: 1082736cf;  */

void FUN_1082736b4(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1082736d0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082736d0; end: 10827373f;  */

long FUN_1082736d0(long param_1)

{
  func_0x0001082728c0(param_1 + 8);
  FUN_108272720(param_1,0);
  return param_1;
}



/* Entry: 108273740; end: 10827378b;  */

undefined8 * FUN_108273740(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  _objc_retain(uVar1);
  *param_1 = uVar1;
  uVar1 = param_2[1];
  _objc_retain(uVar1);
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 10827378c; end: 108273957;  */

void FUN_10827378c(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  param_1[1] = param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}



/* Entry: 108273958; end: 108273b0f;  */

undefined8 * FUN_108273958(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar5 = (int)((ulong)param_2 >> 0x20);
  if (((iVar5 == 0) || (iVar5 == 1)) && ((uint)param_3 < 3)) {
    puVar2 = PTR__OBJC_CLASS___MTLSamplerDescriptor_1126d94f8;
    _objc_alloc_init(PTR__OBJC_CLASS___MTLSamplerDescriptor_1126d94f8);
    func_0x00010c1e6de0();
    FUN_108273b10((uint)param_2 & 0xff);
    func_0x00010c1ef0e0(puVar2);
    FUN_108273b10((uint)((ulong)param_2 >> 8) & 0xff);
    func_0x00010c211280(puVar2);
    func_0x00010c1c1600(puVar2);
    func_0x00010c1c7b80(puVar2);
    func_0x00010c1c8560(puVar2);
    func_0x00010c1c0240(0,puVar2);
    func_0x00010c1c0220(0x7f7fffff,puVar2);
    func_0x00010c1c2fc0(puVar2);
    func_0x00010c1cdc00(puVar2);
    func_0x00010c17f980(puVar2);
    puVar3 = (undefined8 *)0x20;
    __Znwm();
    FUN_1082635ac();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c0d8f60();
    func_0x000108273b54(param_2,param_3);
    _objc_retain(uVar4);
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_DAT_110a33aa8;
    puVar3[2] = uVar4;
    *(int *)(puVar3 + 3) = (int)param_2;
    _objc_release(uVar4);
    _objc_release(param_1);
    _objc_release(puVar2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108273ae0);
  (*pcVar1)();
}



/* Entry: 108273b10; end: 108273b7b;  */

undefined8 FUN_108273b10(uint param_1)

{
  code *pcVar1;
  
  if (param_1 < 4) {
    return *(undefined8 *)(&UNK_10df12710 + (ulong)param_1 * 8);
  }
  FUN_10841076c(&UNK_10f480a9a);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108273b54);
  (*pcVar1)();
}



/* Entry: 108273b7c; end: 108273bbb;  */

uint FUN_108273b7c(byte *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1 | (uint)param_1[1] << 2 | *(int *)(param_1 + 0xc) << 4;
  if (((param_2 & 1) == 0) && (*(int *)(param_1 + 0xc) != 1)) {
    return uVar1;
  }
  return *(int *)(param_1 + 4) << 0xe | *(int *)(param_1 + 8) << 0xf | uVar1;
}



/* Entry: 108273bbc; end: 108273bcf;  */

void FUN_108273bbc(void)

{
  FUN_108273be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108273bd0; end: 108273bdf;  */

void FUN_108273bd0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108273be0; end: 108273c1f;  */

undefined8 * FUN_108273be0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110a33aa8;
  uVar1 = param_1[2];
  param_1[2] = 0;
  _objc_release(uVar1);
  _objc_release(param_1[2]);
  return param_1;
}



/* Entry: 108273c20; end: 108273c93;  */

void FUN_108273c20(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1082635ac();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0d88a0();
  _objc_release(param_2);
  __Znwm(0x18);
  func_0x000108273ed0();
  *param_1 = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108273c94; end: 108273cdf;  */

void FUN_108273c94(undefined8 *param_1,undefined8 param_2)

{
  undefined8 unaff_x21;
  
  __Znwm(0x18);
  func_0x000108273ed0();
  *param_1 = unaff_x21;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108273ce0; end: 108273ddf;  */

undefined8 * FUN_108273ce0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 auStack_70 [2];
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  char cStack_50;
  undefined1 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined4 *)param_1 = 5;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  uVar1 = *(undefined8 *)(param_2 + 8);
  FUN_108267094();
  _objc_retainAutoreleasedReturnValue();
  uStack_58 = *(undefined8 *)(param_2 + 0x10);
  auStack_70[0] = 2;
  uStack_40 = 1;
  ppuStack_68 = &PTR_DAT_110a32a80;
  cStack_50 = '\x01';
  puVar2 = param_1;
  uStack_60 = uVar1;
  FUN_108283264(param_1,auStack_70);
  if (cStack_50 == '\x01') {
    FUN_108273eb4();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar2;
  }
  ___stack_chk_fail();
  if (cStack_50 == '\x01') {
    FUN_108273eb4();
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    puVar2 = param_1 + 1;
    (**(code **)*puVar2)();
  }
  *(undefined1 *)(param_1 + 4) = 0;
  func_0x000108273ee8();
  *puVar2 = &PTR_FUN_110a33ae8;
  FUN_10826b610(puVar2 + 1);
  return puVar2;
}



/* Entry: 108273de0; end: 108273de3;  */

undefined8 * FUN_108273de0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a33ae8;
  FUN_10826b610(param_1 + 1);
  return param_1;
}



/* Entry: 108273de4; end: 108273df7;  */

void FUN_108273de4(void)

{
  func_0x000108273e88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108273df8; end: 108273dfb;  */

void FUN_108273df8(void)

{
  return;
}



/* Entry: 108273dfc; end: 108273e3b;  */

undefined8 * FUN_108273dfc(undefined8 *param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_110a33b40;
  param_1[2] = param_2;
  return param_1;
}



/* Entry: 108273e3c; end: 108273e3f;  */

long FUN_108273e3c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  return param_1;
}



/* Entry: 108273e40; end: 108273e53;  */

void FUN_108273e40(void)

{
  FUN_108273e64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108273e54; end: 108273e63;  */

void FUN_108273e54(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108273e64; end: 108273eb3;  */

long FUN_108273e64(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  return param_1;
}



/* Entry: 108273eb4; end: 108273ef7;  */

void FUN_108273eb4(void)

{
  long unaff_x21;
  undefined8 *in_stack_00000008;
  
                    /* WARNING: Could not recover jumptable at 0x000108273ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*in_stack_00000008)(unaff_x21 + 8);
  return;
}



/* Entry: 108273ef8; end: 108273fcf;  */

long * FUN_108273ef8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long *param_5)

{
  long lVar1;
  
  func_0x0001082746f8();
  FUN_108263870();
  func_0x000108274718();
  func_0x00010827470c();
  FUN_1082b2b04();
  func_0x0001082746bc();
  lVar1 = *param_5;
  *param_5 = 0;
  param_1[3] = lVar1;
  FUN_1082a04e8(param_1 + 4,param_3);
  lVar1 = *(long *)(param_1[3] + 0xd8);
  func_0x00010c0fca60();
  if (lVar1 == 0xb4) {
    *(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xb8) =
         *(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xb8) | 1;
  }
  return param_1;
}



/* Entry: 108273fd0; end: 10827408b;  */

long FUN_108273fd0(long param_1)

{
  undefined8 *in_x4;
  undefined8 in_x6;
  int in_w7;
  undefined8 uVar1;
  
  func_0x0001082746f8();
  FUN_108263870();
  func_0x000108274718();
  func_0x00010827470c();
  FUN_1082b2b04();
  func_0x0001082746bc();
  uVar1 = *in_x4;
  *in_x4 = 0;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  if (in_w7 == 0) {
    *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 1;
  }
  FUN_1082a0520(param_1 + 0x20,in_x6);
  return param_1;
}



/* Entry: 10827408c; end: 1082740ef;  */

void FUN_10827408c(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,long *param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined1 auStack_28 [8];
  
  func_0x00010827470c(param_6,param_1,param_2 + 1,param_3,auStack_28);
  FUN_1082b2b04();
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  lVar1 = *param_5;
  *param_5 = 0;
  param_1[3] = lVar1;
  return;
}



/* Entry: 1082740f0; end: 1082741e3;  */

void FUN_1082740f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lStack_70;
  long lStack_68;
  
  func_0x00010827470c(&lStack_68,param_2,param_4,param_5,param_6);
  func_0x000108263560();
  if (lStack_68 == 0) {
    *param_1 = 0;
  }
  else {
    uVar1 = 0xe8;
    __Znwm();
    lStack_70 = lStack_68;
    lStack_68 = 0;
    FUN_108273ef8();
    *param_1 = uVar1;
    FUN_108267bbc(&lStack_70);
  }
  FUN_108267bbc(&lStack_68);
  return;
}



/* Entry: 1082741e4; end: 1082742ef;  */

void FUN_1082741e4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_60;
  long lStack_58;
  
  FUN_1082635d4(&lStack_58);
  if (lStack_58 == 0) {
    *param_1 = 0;
  }
  else {
    func_0x00010c0ce900();
    uVar1 = 0xe8;
    __Znwm();
    lStack_60 = lStack_58;
    lStack_58 = 0;
    FUN_108273fd0();
    *param_1 = uVar1;
    FUN_108267bbc(&lStack_60);
  }
  FUN_108267bbc(&lStack_58);
  return;
}



/* Entry: 1082742f0; end: 10827435f;  */

long * FUN_1082742f0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  FUN_108267bbc(param_1 + 3);
  return param_1;
}



/* Entry: 108274360; end: 10827436f;  */

long FUN_108274360(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x28);
  lVar2 = lVar1;
  FUN_1082742f0(lVar1,&PTR_PTR_110a33cf8);
  func_0x0001082638c0(lVar2 + 0x20);
  return lVar1;
}



/* Entry: 108274370; end: 108274383;  */

void FUN_108274370(void)

{
  func_0x00010827432c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108274384; end: 108274393;  */

void FUN_108274384(long *param_1)

{
  func_0x00010827432c((long)param_1 + *(long *)(*param_1 + -0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108274394; end: 108274447;  */

void FUN_108274394(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lStack_38;
  
  uVar1 = param_2[3];
  FUN_108269b88(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ce900();
  func_0x0001082746b4();
  lVar2 = param_2[3];
  FUN_108269b88();
  _objc_retainAutoreleasedReturnValue();
  lStack_38 = lVar2;
  FUN_1082639dc(param_1,*(undefined4 *)((long)param_2 + *(long *)(*param_2 + -0x18) + 0xb0),
                *(undefined4 *)((long)param_2 + *(long *)(*param_2 + -0x18) + 0xb4),1 < uVar1,
                &lStack_38,0,0);
  FUN_10810a394(&lStack_38);
  return;
}



/* Entry: 108274448; end: 10827449b;  */

void FUN_108274448(undefined4 *param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(*(long *)(param_2 + 0x18) + 0xd8);
  func_0x00010c0fca60();
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[0x1b] = 1;
  *(undefined ***)(param_1 + 2) = &PTR_DAT_110a32ac0;
  *(ulong *)(param_1 + 4) = uVar1 & 0xffffffff;
  *(undefined1 *)(param_1 + 0x16) = 1;
  return;
}



/* Entry: 10827449c; end: 1082744ab;  */

void FUN_10827449c(undefined4 *param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(*(long *)((long)param_2 + *(long *)(*param_2 + -0x60) + 0x18) + 0xd8);
  func_0x00010c0fca60();
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[0x1b] = 1;
  *(undefined ***)(param_1 + 2) = &PTR_DAT_110a32ac0;
  *(ulong *)(param_1 + 4) = uVar1 & 0xffffffff;
  *(undefined1 *)(param_1 + 0x16) = 1;
  return;
}



/* Entry: 1082744ac; end: 1082745c7;  */

void FUN_1082744ac(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  func_0x0001082746ec((long)param_1 + *(long *)(*param_1 + -0x18));
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
  }
  func_0x0001082746e4();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (uStack_40 != 0) {
    func_0x0001082746ec((long)param_1 + *(long *)(*param_1 + -0x18));
    if (-1 < (char)bStack_31) {
      ppuStack_48 = &ppuStack_48;
    }
    func_0x00010c25da80(puVar1,param_2,ppuStack_48);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001082746e4();
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ed60f8,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1[3];
    FUN_108269b88(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b71a0();
    _objc_release(lVar2);
    func_0x0001082746b4();
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 1082745c8; end: 10827461b;  */

void FUN_1082745c8(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  param_1 = (long *)((long)param_1 + *(long *)(*param_1 + -0x58));
  func_0x0001082746ec((long)param_1 + *(long *)(*param_1 + -0x18));
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
  }
  func_0x0001082746e4();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (uStack_40 != 0) {
    func_0x0001082746ec((long)param_1 + *(long *)(*param_1 + -0x18));
    if (-1 < (char)bStack_31) {
      ppuStack_48 = &ppuStack_48;
    }
    func_0x00010c25da80(puVar1,param_2,ppuStack_48);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001082746e4();
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ed60f8,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1[3];
    FUN_108269b88(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b71a0();
    _objc_release(lVar2);
    func_0x0001082746b4();
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 10827461c; end: 10827466b;  */

void FUN_10827461c(void)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  long *unaff_x19;
  
  func_0x0001082746a4();
  puVar1 = (undefined8 *)((long)unaff_x19 + *(long *)(*unaff_x19 + -0x18) + 0xc0);
  piVar5 = (int *)*puVar1;
  *puVar1 = 0;
  if (piVar5 == (int *)0x0) {
    return;
  }
  do {
    iVar2 = *piVar5;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar4) {
      *piVar5 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 + -1 != 0) {
    return;
  }
  if (piVar5 != (int *)0x0) {
    FUN_1082b178c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10827466c; end: 10827472b;  */

void FUN_10827466c(long *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  long *unaff_x19;
  
  func_0x0001082746a4((long)param_1 + *(long *)(*param_1 + -0x30));
  puVar1 = (undefined8 *)((long)unaff_x19 + *(long *)(*unaff_x19 + -0x18) + 0xc0);
  piVar5 = (int *)*puVar1;
  *puVar1 = 0;
  if (piVar5 == (int *)0x0) {
    return;
  }
  do {
    iVar2 = *piVar5;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar4) {
      *piVar5 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 + -1 != 0) {
    return;
  }
  if (piVar5 != (int *)0x0) {
    FUN_1082b178c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10827472c; end: 1082747db;  */

long FUN_10827472c(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000108274f68();
  func_0x0001082750a8();
  func_0x000108274f20();
  func_0x000108274ff0();
  func_0x000108275050();
  func_0x000108274efc();
  func_0x00010827506c();
  func_0x000108274f60();
  func_0x000108274fc8();
  FUN_1082a04e8(param_1 + 0x70,param_3);
  return param_1;
}



/* Entry: 1082747dc; end: 10827488b;  */

long FUN_1082747dc(long param_1)

{
  undefined8 in_x7;
  
  func_0x000108274f68();
  func_0x0001082750a8();
  func_0x000108274f20();
  func_0x000108274ff0();
  func_0x000108275050();
  func_0x000108274efc();
  func_0x00010827506c();
  func_0x000108274f60();
  func_0x000108274fc8();
  FUN_1082a0520(param_1 + 0x70,in_x7);
  return param_1;
}



/* Entry: 10827488c; end: 1082749b3;  */

undefined8
FUN_10827488c(long param_1,undefined8 param_2,ulong param_3,int param_4,undefined8 *param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  ulong uStack_98;
  char cStack_50;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_4 == 2;
  if (param_4 < 2) {
    FUN_1082749b4(param_6);
  }
  else {
    uStack_98 = param_3 & 0xffffffff;
    uStack_a8 = CONCAT35(uStack_a8._5_3_,0x100000002);
    uStack_3c = 1;
    ppuStack_a0 = &PTR_DAT_110a32ac0;
    cStack_50 = '\x01';
    FUN_1082af754(&puStack_b0,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80),param_2,&uStack_a8,
                  param_4,0,0);
    uVar1 = cStack_50 == '\x01';
    if ((bool)uVar1) {
      func_0x000108275018();
    }
    if (puStack_b0 == (undefined8 *)0x0) {
      param_5 = puStack_b0;
      func_0x00010827508c();
      uVar2 = 0;
      goto LAB_10827495c;
    }
    puStack_b0 = (undefined8 *)0x0;
    uStack_a8 = 0;
    func_0x000108271be0(param_6);
    func_0x000108274f60();
    FUN_1082749b4(param_7);
    func_0x00010827508c();
  }
  uVar2 = 1;
LAB_10827495c:
  func_0x000108275094(uStack_38);
  if ((bool)uVar1) {
    return uVar2;
  }
  ___stack_chk_fail();
  func_0x00010827508c();
  func_0x000108275030();
  *param_5 = 0;
  func_0x000108271be0();
  return uVar2;
}



/* Entry: 1082749b4; end: 1082749e3;  */

undefined8 FUN_1082749b4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  func_0x000108271be0(param_1,uVar1);
  return param_1;
}



/* Entry: 1082749e4; end: 108274b4b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1082749e4(ulong *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long alStack_80 [4];
  
  func_0x000108263560(alStack_80 + 3,param_2,param_4,param_6,param_7,1,1,param_3);
  if (alStack_80[3] == 0) {
    *param_1 = 0;
  }
  else {
    alStack_80[1] = 0;
    alStack_80[2] = 0;
    piVar1 = (int *)(alStack_80[3] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    alStack_80[0] = alStack_80[3];
    FUN_10827488c(param_2,param_4,param_6,param_5,alStack_80,alStack_80 + 2,alStack_80 + 1);
    func_0x000108274fe8();
    if ((param_2 & 1) == 0) {
      *param_1 = 0;
    }
    else {
      __Znwm(0x138);
      func_0x000108274fa8();
      FUN_10827472c();
      *param_1 = param_2;
      func_0x000108275038();
      func_0x000108275028();
      func_0x000108275010();
    }
    func_0x000108275008();
    func_0x000108275000();
  }
  func_0x000108274ff8();
  return;
}



/* Entry: 108274b4c; end: 108274cd7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_108274b4c(ulong *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long alStack_70 [4];
  
  func_0x00010c0ce900(param_5);
  FUN_1082635d4(alStack_70 + 3,param_2,param_3,param_5,6,param_6,&UNK_10f480b51,0x1f);
  if (alStack_70[3] == 0) {
    *param_1 = 0;
  }
  else {
    alStack_70[1] = 0;
    alStack_70[2] = 0;
    func_0x00010c0fca60(param_5);
    if (alStack_70[3] != 0) {
      piVar1 = (int *)(alStack_70[3] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    alStack_70[0] = alStack_70[3];
    FUN_10827488c(param_2,param_3,param_5,param_4,alStack_70,alStack_70 + 2,alStack_70 + 1);
    func_0x000108274fe8();
    if ((param_2 & 1) == 0) {
      *param_1 = 0;
    }
    else {
      __Znwm(0x138);
      func_0x000108274fa8();
      FUN_1082747dc();
      *param_1 = param_2;
      func_0x000108275038();
      func_0x000108275028();
      func_0x000108275010();
    }
    func_0x000108275008();
    func_0x000108275000();
  }
  func_0x000108274ff8();
  return;
}



/* Entry: 108274cd8; end: 108274d7f;  */

long * FUN_108274cd8(long *param_1)

{
  undefined1 uVar1;
  long *plVar2;
  undefined1 *puVar3;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    plVar2 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    (**(code **)(*plVar2 + 0x48))((undefined1 *)((long)register0x00000008 + -0x98));
    uVar1 = *(int *)((long)plVar2 + 0xc) == 0;
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x98);
    FUN_1082b1600(puVar3,*(undefined8 *)((long)plVar2 + *(long *)(*plVar2 + -0x18) + 0xb0),1,
                  !(bool)uVar1,0);
    func_0x000108275074();
    if ((bool)uVar1) {
      func_0x000108274f94();
    }
    func_0x000108275094(*(undefined8 *)((long)register0x00000008 + -0x28));
    if ((bool)uVar1) break;
    ___stack_chk_fail();
    func_0x000108275074();
    if ((bool)uVar1) {
      func_0x000108274f94();
    }
    unaff_x30 = FUN_108274d80;
    func_0x000108275030();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xa0);
    param_1 = (long *)(puVar3 + -0x20);
    unaff_x19 = plVar2;
  }
  return plVar2;
}



/* Entry: 108274d80; end: 108274d97;  */

long * FUN_108274d80(undefined1 *param_1)

{
  undefined1 uVar1;
  long *plVar2;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    plVar2 = (long *)(param_1 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    (**(code **)(*plVar2 + 0x48))((undefined1 *)((long)register0x00000008 + -0x98));
    uVar1 = *(int *)(param_1 + -0x14) == 0;
    param_1 = (undefined1 *)((long)register0x00000008 + -0x98);
    FUN_1082b1600(param_1,*(undefined8 *)((long)plVar2 + *(long *)(*plVar2 + -0x18) + 0xb0),1,
                  !(bool)uVar1,0);
    func_0x000108275074();
    if ((bool)uVar1) {
      func_0x000108274f94();
    }
    func_0x000108275094(*(undefined8 *)((long)register0x00000008 + -0x28));
    if ((bool)uVar1) break;
    ___stack_chk_fail();
    func_0x000108275074();
    if ((bool)uVar1) {
      func_0x000108274f94();
    }
    unaff_x30 = FUN_108274d80;
    func_0x000108275030();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xa0);
    unaff_x19 = plVar2;
  }
  return plVar2;
}



/* Entry: 108274d98; end: 108274dbf;  */

void FUN_108274d98(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  FUN_108271928(param_1 + 4);
  func_0x0001082746ec((long)param_1 + *(long *)(*param_1 + -0x18));
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
  }
  func_0x0001082746e4();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (uStack_40 != 0) {
    func_0x0001082746ec((long)param_1 + *(long *)(*param_1 + -0x18));
    if (-1 < (char)bStack_31) {
      ppuStack_48 = &ppuStack_48;
    }
    func_0x00010c25da80(puVar1,param_2,ppuStack_48);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001082746e4();
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ed60f8,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1[3];
    FUN_108269b88(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b71a0();
    _objc_release(lVar2);
    func_0x0001082746b4();
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 108274dc0; end: 108274dd7;  */

void FUN_108274dc0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  plVar3 = (long *)(param_1 + -0x20);
  FUN_108271928(param_1);
  func_0x0001082746ec((long)plVar3 + *(long *)(*plVar3 + -0x18));
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
  }
  func_0x0001082746e4();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (uStack_40 != 0) {
    func_0x0001082746ec((long)plVar3 + *(long *)(*plVar3 + -0x18));
    if (-1 < (char)bStack_31) {
      ppuStack_48 = &ppuStack_48;
    }
    func_0x00010c25da80(puVar1,param_2,ppuStack_48);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001082746e4();
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ed60f8,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + -8);
    FUN_108269b88(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b71a0();
    _objc_release(uVar2);
    func_0x0001082746b4();
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 108274dd8; end: 108274e1b;  */

long FUN_108274dd8(long param_1)

{
  FUN_108271650(param_1 + 0x20,&PTR_PTR_110a340c8);
  FUN_1082742f0(param_1,&PTR_PTR_110a340a8);
  func_0x000108275084();
  return param_1;
}



/* Entry: 108274e1c; end: 108274e2f;  */

void FUN_108274e1c(void)

{
  FUN_108274dd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108274e30; end: 108274e33;  */

void FUN_108274e30(undefined4 *param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(*(long *)(param_2 + 0x18) + 0xd8);
  func_0x00010c0fca60();
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[0x1b] = 1;
  *(undefined ***)(param_1 + 2) = &PTR_DAT_110a32ac0;
  *(ulong *)(param_1 + 4) = uVar1 & 0xffffffff;
  *(undefined1 *)(param_1 + 0x16) = 1;
  return;
}



/* Entry: 108274e34; end: 108274e83;  */

void FUN_108274e34(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  long *unaff_x19;
  
  FUN_1082718a0(param_1 + 0x20);
  func_0x0001082746a4(param_1);
  puVar1 = (undefined8 *)((long)unaff_x19 + *(long *)(*unaff_x19 + -0x18) + 0xc0);
  piVar5 = (int *)*puVar1;
  *puVar1 = 0;
  if (piVar5 == (int *)0x0) {
    return;
  }
  do {
    iVar2 = *piVar5;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar4) {
      *piVar5 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 + -1 != 0) {
    return;
  }
  if (piVar5 != (int *)0x0) {
    FUN_1082b178c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108274e84; end: 1082750bb;  */

long FUN_108274e84(long param_1)

{
  FUN_108271650(param_1,&PTR_PTR_110a340c8);
  FUN_1082742f0(param_1 + -0x20,&PTR_PTR_110a340a8);
  func_0x000108275084();
  return param_1 + -0x20;
}



/* Entry: 1082750bc; end: 10827535b;  */

int FUN_1082750bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 char *param_5,undefined8 param_6,undefined8 param_7,long *param_8)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  long extraout_x8;
  uint uVar7;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  long alStack_e0 [2];
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [4];
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  int iStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((*param_5 == 'u') || (((*param_5 == 's' && (param_5[1] == 'k')) && (param_5[2] == '_')))) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x75;
  }
  FUN_1082dbb0c(&uStack_68,*(undefined8 *)(param_1 + 8),uVar6,param_5,param_6);
  uVar3 = (int)param_4 - 5;
  if (uVar3 < 0x1e) {
    uVar7 = *(uint *)(&UNK_10df127d0 + ((ulong)uVar3 & 0xff) * 4);
    if (*(uint *)(param_1 + 0x114) < uVar7) {
      *(uint *)(param_1 + 0x114) = uVar7;
    }
    uVar2 = *(uint *)(param_1 + 0x110);
    iVar1 = 0;
    if ((uVar2 & uVar7) != 0) {
      iVar1 = (uVar7 - (uVar2 & uVar7)) + 1;
    }
    uVar7 = (uint)param_7;
    if (uVar7 < 2) {
      uVar7 = 1;
    }
    *(uint *)(param_1 + 0x110) =
         iVar1 + uVar2 + *(int *)(&UNK_10df12848 + ((ulong)uVar3 & 0xff) * 4) * uVar7;
    uStack_70 = 0x1138270b0;
    FUN_1083a3a90(&uStack_70,&UNK_10f480b8f);
    auStack_b8[0] = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    lStack_a8 = 0x1138270b0;
    lStack_a0 = 0x1138270b0;
    lStack_98 = 0x1138270b0;
    lStack_80 = 0x1138270b0;
    FUN_1083a33c4(auStack_e8,&uStack_68);
    FUN_1083a33c4(auStack_f0,&uStack_70);
    uStack_f8 = 0x1138270b0;
    FUN_108275984(alStack_e0,auStack_e8,param_4,0,param_7,auStack_f0,&uStack_f8);
    func_0x000108275bbc();
    if (extraout_x8 != 0x1138270b0) {
      uStack_d0 = 0x1138270b0;
      lStack_a8 = extraout_x8;
    }
    if (lStack_c8 != 0x1138270b0) {
      lStack_a0 = lStack_c8;
      lStack_c8 = 0x1138270b0;
    }
    if (lStack_c0 != 0x1138270b0) {
      lStack_98 = lStack_c0;
      lStack_c0 = 0x1138270b0;
    }
    func_0x00010827024c(alStack_e0);
    func_0x000108275bac();
    func_0x000108275ba4();
    func_0x000108275b9c();
    uStack_90 = 3;
    uStack_88 = param_2;
    func_0x000108275bd4();
    lVar4 = lStack_80;
    if (lStack_80 != alStack_e0[0]) {
      lStack_80 = alStack_e0[0];
      alStack_e0[0] = lVar4;
    }
    FUN_1083a3ca0(alStack_e0[0]);
    iStack_78 = iVar1 + uVar2;
    FUN_1082753b8(param_1 + 0x10,auStack_b8);
    if (param_8 != (long *)0x0) {
      *param_8 = *(long *)(*(long *)(param_1 + 0x10) +
                           (long)*(int *)(*(long *)(param_1 + 0x10) + 0x18) + 0x10) + 8;
    }
    iVar1 = *(int *)(param_1 + 0x3c);
    func_0x000108275bb4();
    FUN_1083a3ca0(uStack_70);
    FUN_1083a3ca0(uStack_68);
    return iVar1 + -1;
  }
  FUN_10841076c(&UNK_10f480bea);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x108275320);
  (*pcVar5)();
}



/* Entry: 10827535c; end: 1082753b7;  */

void FUN_10827535c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar1;
  lVar2 = param_1[2];
  if (lVar2 != param_2[2]) {
    param_1[2] = param_2[2];
    param_2[2] = lVar2;
  }
  lVar2 = param_1[3];
  if (lVar2 != param_2[3]) {
    param_1[3] = param_2[3];
    param_2[3] = lVar2;
  }
  lVar2 = param_1[4];
  if (lVar2 != param_2[4]) {
    param_1[4] = param_2[4];
    param_2[4] = lVar2;
  }
  return;
}



/* Entry: 1082753b8; end: 10827544f;  */

void FUN_1082753b8(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lStack_38;
  int iStack_2c;
  
  FUN_108275a3c(&lStack_38,param_1,0x48);
  *(int *)(lStack_38 + 0x18) = iStack_2c;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  lVar4 = lStack_38 + iStack_2c;
  FUN_108275af8(lVar4,param_2);
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(lVar4 + 0x28) = uVar6;
  lVar5 = *(long *)(param_2 + 0x38);
  if ((lVar5 != 0) && (lVar5 != 0x1138270b0)) {
    piVar1 = (int *)(lVar5 + 4);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(long *)(lVar4 + 0x38) = lVar5;
  *(undefined4 *)(lVar4 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  return;
}



/* Entry: 108275450; end: 1082756f3;  */

int FUN_108275450(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined2 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  int iVar5;
  long extraout_x8;
  ulong uVar6;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  long alStack_c0 [5];
  undefined1 auStack_98 [4];
  undefined4 uStack_94;
  undefined4 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  uVar6 = (ulong)*(uint *)(param_1 + 0xb4);
  FUN_1082dbb0c(auStack_48,*(undefined8 *)(param_1 + 8),0x75,param_6,1);
  iVar5 = *(int *)(param_2 + 0x6c);
  uStack_50 = 0x1138270b0;
  FUN_1083a3a90(&uStack_50,&UNK_10f480b99);
  auStack_98[0] = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  lStack_88 = 0x1138270b0;
  lStack_80 = 0x1138270b0;
  lStack_78 = 0x1138270b0;
  lStack_60 = 0x1138270b0;
  FUN_1083a33c4(auStack_c8,auStack_48);
  uVar1 = iVar5 - 1;
  if (2 < uVar1) {
    FUN_10841076c(&UNK_10f480c72);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1082756b4);
    (*pcVar3)();
  }
  FUN_1083a33c4(auStack_d0,&uStack_50);
  uStack_d8 = 0x1138270b0;
  FUN_108275984(alStack_c0,auStack_c8,0x242523U >> (ulong)((uVar1 & 3) << 3) & 0xff,0,0,auStack_d0,
                &uStack_d8,param_8,uVar6);
  func_0x000108275bbc();
  if (extraout_x8 != 0x1138270b0) {
    alStack_c0[2] = 0x1138270b0;
    lStack_88 = extraout_x8;
  }
  if (alStack_c0[3] != 0x1138270b0) {
    lStack_80 = alStack_c0[3];
    alStack_c0[3] = 0x1138270b0;
  }
  if (alStack_c0[4] != 0x1138270b0) {
    lStack_78 = alStack_c0[4];
    alStack_c0[4] = 0x1138270b0;
  }
  func_0x00010827024c(alStack_c0);
  func_0x000108275bac();
  func_0x000108275ba4();
  func_0x000108275b9c();
  uStack_70 = 2;
  uStack_68 = 0;
  func_0x000108275bd4();
  lVar2 = lStack_60;
  if (lStack_60 != alStack_c0[0]) {
    lStack_60 = alStack_c0[0];
    alStack_c0[0] = lVar2;
  }
  FUN_1083a3ca0(alStack_c0[0]);
  uStack_58 = 0;
  FUN_1082753b8(param_1 + 0x88,auStack_98);
  iVar5 = *(int *)(param_1 + 0x108);
  if (iVar5 < (int)(*(uint *)(param_1 + 0x10c) >> 1)) {
    *(undefined2 *)(*(long *)(param_1 + 0x100) + (long)iVar5 * 2) = *param_5;
  }
  else {
    if (iVar5 == 0x7fffffff) {
      func_0x00010bdb1a68();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1082756bc);
      (*pcVar3)();
    }
    alStack_c0[1] = 0x7fffffff;
    alStack_c0[0] = 2;
    plVar4 = alStack_c0;
    uVar6 = (ulong)(iVar5 + 1);
    FUN_10840fe24(0x3ff8000000000000);
    iVar5 = *(int *)(param_1 + 0x108);
    *(undefined2 *)((long)plVar4 + (long)iVar5 * 2) = *param_5;
    if (iVar5 != 0) {
      _memcpy(plVar4,*(undefined8 *)(param_1 + 0x100),(long)iVar5 << 1);
    }
    if ((*(byte *)(param_1 + 0x10c) & 1) != 0) {
      _free(*(undefined8 *)(param_1 + 0x100));
    }
    uVar6 = uVar6 >> 1;
    if (0x7ffffffe < uVar6) {
      uVar6 = 0x7fffffff;
    }
    *(long **)(param_1 + 0x100) = plVar4;
    *(uint *)(param_1 + 0x10c) = (int)uVar6 << 1 | 1;
    iVar5 = *(int *)(param_1 + 0x108);
  }
  *(int *)(param_1 + 0x108) = iVar5 + 1;
  iVar5 = *(int *)(param_1 + 0xb4);
  func_0x000108275bb4();
  FUN_1083a3ca0(uStack_50);
  func_0x000108275bf0();
  return iVar5 + -1;
}



/* Entry: 1082756f4; end: 1082758d3;  */

void FUN_1082756f4(long param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  byte *pbVar2;
  long *plVar3;
  long lStack_80;
  long lStack_78;
  int iStack_68;
  long alStack_60 [2];
  int iStack_50;
  int *piStack_48;
  
  piStack_48 = (int *)(param_1 + 0x88);
  FUN_108270c88(alStack_60,&piStack_48);
  func_0x000108275b8c();
  while ((lStack_78 != alStack_60[0] || ((lStack_78 != 0 && (iStack_68 != iStack_50))))) {
    lVar1 = alStack_60[0] + iStack_50;
    if (param_2 == *(uint *)(lVar1 + 0x28)) {
      plVar3 = *(long **)(param_1 + 8);
      (**(code **)(*plVar3 + 0x10))();
      FUN_1082b07dc(lVar1,plVar3[2],param_3);
      FUN_10818f348(param_3,&UNK_10f480bab);
    }
    FUN_108270c98(alStack_60);
  }
  piStack_48 = (int *)0x1138270b0;
  lStack_80 = param_1 + 0x10;
  FUN_108270c88(alStack_60,&lStack_80);
  func_0x000108275b8c();
  while ((lStack_78 != alStack_60[0] || ((lStack_78 != 0 && (iStack_68 != iStack_50))))) {
    pbVar2 = (byte *)(alStack_60[0] + iStack_50);
    if (((*(uint *)(pbVar2 + 0x28) & param_2) != 0) && (*pbVar2 - 0xd < 0x16)) {
      plVar3 = *(long **)(param_1 + 8);
      (**(code **)(*plVar3 + 0x10))();
      FUN_1082b07dc(pbVar2,plVar3[2],&piStack_48);
      FUN_10818f348(&piStack_48,&UNK_10f480bab);
    }
    FUN_108270c98(alStack_60);
  }
  if (*piStack_48 != 0) {
    FUN_1083a3a90(param_3,&UNK_10f480bae);
    FUN_1083a3a90(param_3,&UNK_10f480be3);
  }
  FUN_1083a3ca0(piStack_48);
  return;
}



/* Entry: 1082758d4; end: 1082758d7;  */

void FUN_1082758d4(undefined8 *param_1)

{
  undefined8 extraout_x8;
  long unaff_x19;
  
  func_0x000108270b78();
  *param_1 = extraout_x8;
  func_0x0001082706fc(param_1 + 0x20);
  FUN_10827047c(unaff_x19 + 0x88);
  FUN_10827047c(param_1 + 2);
  return;
}



/* Entry: 1082758d8; end: 1082758eb;  */

void FUN_1082758d8(void)

{
  FUN_1082706c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082758ec; end: 1082758ef;  */

long FUN_1082758ec(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = (undefined8 *)(param_1 + 0x20);
  puVar3 = *(undefined8 **)(param_1 + 0x20);
  do {
    puVar6 = puVar3;
    if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x108275a3c);
      (*pcVar4)();
    }
    iVar1 = *(int *)(puVar5 + 3);
    if (iVar1 != 0) {
      iVar2 = param_2 * 0x48 + 0x20;
      if (iVar2 < iVar1 + 0x48) {
        return (long)puVar5 + (long)iVar2;
      }
      param_2 = param_2 - (int)((ulong)(long)(iVar1 + 0x28) / 0x48);
    }
    puVar5 = puVar6;
    puVar3 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*puVar6;
    }
  } while( true );
}



/* Entry: 1082758f0; end: 108275917;  */

long FUN_1082758f0(long *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x10))(param_1,param_2);
  return param_1[2] + 8;
}



/* Entry: 108275918; end: 108275927;  */

undefined4 FUN_108275918(long param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



/* Entry: 108275928; end: 108275947;  */

long FUN_108275928(long param_1)

{
  param_1 = param_1 + 0x88;
  FUN_1082759dc();
  return *(long *)(param_1 + 0x10) + 8;
}



/* Entry: 108275948; end: 108275983;  */

undefined2 FUN_108275948(long param_1,uint param_2)

{
  code *pcVar1;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x108))) {
    return *(undefined2 *)(*(long *)(param_1 + 0x100) + ((ulong)param_2 & 0x7fffffff) * 2);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10827596c);
  (*pcVar1)();
}



/* Entry: 108275984; end: 1082759db;  */

undefined1 *
FUN_108275984(undefined1 *param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 4) = param_4;
  *(undefined4 *)(param_1 + 8) = param_5;
  FUN_1083a33c4(param_1 + 0x10);
  FUN_1083a33c4(param_1 + 0x18,param_6);
  FUN_1083a33c4(param_1 + 0x20,param_7);
  return param_1;
}



/* Entry: 1082759dc; end: 108275a3b;  */

long FUN_1082759dc(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = (undefined8 *)(param_1 + 0x10);
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  do {
    puVar6 = puVar3;
    if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x108275a3c);
      (*pcVar4)();
    }
    iVar1 = *(int *)(puVar5 + 3);
    if (iVar1 != 0) {
      iVar2 = param_2 * 0x48 + 0x20;
      if (iVar2 < iVar1 + 0x48) {
        return (long)puVar5 + (long)iVar2;
      }
      param_2 = param_2 - (int)((ulong)(long)(iVar1 + 0x28) / 0x48);
    }
    puVar5 = puVar6;
    puVar3 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*puVar6;
    }
  } while( true );
}



/* Entry: 108275a3c; end: 108275af7;  */

void FUN_108275a3c(long *param_1,long *param_2,ulong param_3)

{
  code *pcVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_3 < 0x20000001) {
    lVar2 = *param_2;
    iVar3 = *(int *)(lVar2 + 0x14);
    uVar4 = iVar3 + 7U & 0xfffffff8;
    iVar6 = (int)param_3;
    iVar5 = uVar4 + iVar6;
    if (*(int *)(lVar2 + 0x10) < iVar5) {
      func_0x00010840fd04(param_2,iVar6 + 0x20,0x20000020);
      lVar2 = *param_2;
      iVar3 = *(int *)(lVar2 + 0x14);
      uVar4 = iVar3 + 7U & 0xfffffff8;
      iVar5 = uVar4 + iVar6;
    }
    *(int *)(lVar2 + 0x14) = iVar5;
    *param_1 = lVar2;
    *(int *)(param_1 + 1) = iVar3;
    *(uint *)((long)param_1 + 0xc) = uVar4;
    *(int *)(param_1 + 2) = iVar5;
    return;
  }
  FUN_10841076c(&UNK_10f480cf0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108275af8);
  (*pcVar1)();
}



/* Entry: 108275af8; end: 108275bf7;  */

void FUN_108275af8(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar4;
  lVar5 = param_2[2];
  if (lVar5 != 0 && lVar5 != 0x1138270b0) {
    piVar1 = (int *)(lVar5 + 4);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[2] = lVar5;
  lVar5 = param_2[3];
  if ((lVar5 != 0) && (lVar5 != 0x1138270b0)) {
    piVar1 = (int *)(lVar5 + 4);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[3] = lVar5;
  lVar5 = param_2[4];
  if (lVar5 != 0 && lVar5 != 0x1138270b0) {
    piVar1 = (int *)(lVar5 + 4);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[4] = lVar5;
  return;
}



/* Entry: 108275bf8; end: 108275dab;  */

void FUN_108275bf8(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc();
  func_0x00010bffa1c0();
  if (puVar2 == (undefined *)0x0) {
    lVar5 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___MTLCompileOptions_1126d9500;
    _objc_alloc_init(PTR__OBJC_CLASS___MTLCompileOptions_1126d9500);
    func_0x00010c1b7540();
    func_0x00010c19a440(puVar2);
    FUN_1082635ac();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c0d8bc0();
    uVar4 = 0;
    _objc_retain(0);
    _objc_release(param_1);
    if (lVar5 == 0) {
      plVar1 = (long *)*param_2;
      if (-1 < *(char *)((long)param_2 + 0x17)) {
        plVar1 = param_2;
      }
      func_0x00010bf660a0(0);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
      (**(code **)(*param_3 + 0x18))(param_3,plVar1,uVar3,0);
      _objc_release(uVar4);
    }
    else {
      _objc_retain(lVar5);
    }
    _objc_release(lVar5);
    _objc_release(0);
    _objc_release(puVar2);
  }
  FUN_108275f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 108275dac; end: 108275dc3;  */

void FUN_108275dac(undefined8 *param_1)

{
  func_0x00010c0fca60(*param_1);
  return;
}



/* Entry: 108275dc4; end: 108275f2b;  */

void FUN_108275dc4(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 == 1) {
    uVar3 = 0x800000000;
    uVar2 = 0;
    goto LAB_108275ef0;
  }
  if (param_2 == 10) {
    uVar1 = 8;
LAB_108275ec8:
    *(undefined4 *)param_1 = uVar1;
    *(undefined8 *)((long)param_1 + 0xc) = 0;
    *(undefined8 *)((long)param_1 + 4) = 0;
    *(undefined4 *)((long)param_1 + 0x14) = 0;
    return;
  }
  if (param_2 == 0x14) {
    uVar1 = 0x10;
    goto LAB_108275ec8;
  }
  if (param_2 == 0x19) {
    *(undefined4 *)param_1 = 0x10;
    *(undefined8 *)((long)param_1 + 0xc) = 0;
    *(undefined8 *)((long)param_1 + 4) = 0;
    *(undefined4 *)((long)param_1 + 0x14) = 2;
    return;
  }
  if (param_2 == 0x1e) {
    uVar2 = 0x800000008;
LAB_108275e84:
    *param_1 = uVar2;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  if (param_2 == 0x28) {
    uVar3 = 5;
    uVar2 = 0x600000005;
  }
  else if (param_2 == 0x2a) {
    uVar2 = 0x400000004;
    uVar3 = 0x400000004;
  }
  else {
    if (param_2 == 0x3c) {
      uVar2 = 0x1000000010;
      goto LAB_108275e84;
    }
    if (param_2 == 0x41) {
      uVar2 = 0;
LAB_108275f04:
      param_1[1] = uVar2;
      *param_1 = 0x1000000010;
      uVar2 = 0x200000000;
LAB_108275f24:
      param_1[2] = uVar2;
      return;
    }
    if (param_2 == 0xfd) {
LAB_108275e5c:
      *param_1 = 0;
      param_1[1] = 0;
      goto LAB_108275ef4;
    }
    if (param_2 == 0x47) {
      param_1[1] = 0x800000008;
      *param_1 = 0x800000008;
      uVar2 = 0x100000000;
      goto LAB_108275f24;
    }
    if (param_2 == 0x50) {
LAB_108275e54:
      uVar2 = 0x800000008;
      uVar3 = 0x800000008;
    }
    else if ((param_2 == 0x5a) || (param_2 == 0x5e)) {
      uVar3 = 0x20000000a;
      uVar2 = 0xa0000000a;
    }
    else {
      if (param_2 != 0x6e) {
        if (param_2 == 0x73) {
          uVar2 = 0x1000000010;
          goto LAB_108275f04;
        }
        if ((param_2 == 0xb4) || (param_2 != 0x46)) goto LAB_108275e5c;
        goto LAB_108275e54;
      }
      uVar2 = 0x1000000010;
      uVar3 = 0x1000000010;
    }
  }
LAB_108275ef0:
  param_1[1] = uVar3;
  *param_1 = uVar2;
LAB_108275ef4:
  param_1[2] = 0;
  return;
}



/* Entry: 108275f2c; end: 108275f7f;  */

long FUN_108275f2c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  _objc_retain(lVar1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x00010c149760(lVar1);
  }
  FUN_108275f80();
  return lVar1;
}



/* Entry: 108275f80; end: 108275f87;  */

void FUN_108275f80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108275f88; end: 108275fbf;  */

void FUN_108275f88(long param_1)

{
  long lVar1;
  int iVar2;
  long lStack_80;
  long alStack_78 [2];
  int iStack_68;
  long alStack_60 [2];
  int iStack_50;
  long lStack_48;
  
  FUN_108275fc0(param_1 + 0x50);
  FUN_108275fc0(param_1 + 0xa8);
  FUN_108275fc0(param_1 + 0x100);
  lStack_48 = param_1 + 0x158;
  FUN_1082760b8(alStack_60,&lStack_48);
  func_0x000108276118(alStack_78,0,0);
  while ((iVar2 = iStack_50, lVar1 = alStack_60[0], alStack_78[0] != alStack_60[0] ||
         ((alStack_78[0] != 0 && (iStack_68 != iStack_50))))) {
    lStack_80 = 0x1138270b0;
    FUN_1083a3a90(&lStack_80,&UNK_10f480d85);
    FUN_10826f4fc(lVar1 + iVar2,lStack_80 + 8);
    FUN_1083a3ca0(lStack_80);
    func_0x0001082760c8(alStack_60);
  }
  return;
}



/* Entry: 108275fc0; end: 10827609f;  */

void FUN_108275fc0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lStack_80;
  long alStack_78 [2];
  int iStack_68;
  long alStack_60 [2];
  int iStack_50;
  undefined8 uStack_48;
  
  uStack_48 = param_1;
  FUN_1082760b8(alStack_60,&uStack_48);
  func_0x000108276118(alStack_78,0,0);
  while ((iVar2 = iStack_50, lVar1 = alStack_60[0], alStack_78[0] != alStack_60[0] ||
         ((alStack_78[0] != 0 && (iStack_68 != iStack_50))))) {
    lStack_80 = 0x1138270b0;
    FUN_1083a3a90(&lStack_80,&UNK_10f480d85);
    FUN_10826f4fc(lVar1 + iVar2,lStack_80 + 8);
    FUN_1083a3ca0(lStack_80);
    func_0x0001082760c8(alStack_60);
  }
  return;
}



/* Entry: 1082760a0; end: 1082760a3;  */

void FUN_1082760a0(long param_1)

{
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x000108270aa0();
  *unaff_x20 = extraout_x8;
  FUN_108270090(param_1 + 0x158);
  FUN_108270090(unaff_x19 + 0x100);
  FUN_108270090(unaff_x19 + 0xa8);
  FUN_108270090(unaff_x19 + 0x50);
  FUN_1082702a4(unaff_x20 + 1);
  return;
}



/* Entry: 1082760a4; end: 1082760b7;  */

void FUN_1082760a4(void)

{
  func_0x000108270040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082760b8; end: 1082760c7;  */

long * FUN_1082760b8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_2 + 0x10);
  *param_1 = *param_2 + 0x10;
  param_1[1] = lVar1;
  FUN_108276140();
  return param_1;
}



/* Entry: 1082760c8; end: 10827613f;  */

long * FUN_1082760c8(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  iVar1 = (int)param_1[2] + 0x28;
  *(int *)(param_1 + 2) = iVar1;
  if (*(int *)((long)param_1 + 0x14) < iVar1) {
    plVar2 = (long *)param_1[1];
    *param_1 = (long)plVar2;
    lVar3 = 0;
    if (plVar2 != (long *)0x0) {
      lVar3 = *plVar2;
    }
    param_1[1] = lVar3;
    FUN_108276140(param_1);
  }
  return param_1;
}



/* Entry: 108276140; end: 108276183;  */

void FUN_108276140(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined4 uVar3;
  long lVar4;
  
  plVar2 = (long *)*param_1;
  do {
    if (plVar2 == (long *)0x0) {
      iVar1 = 0;
      uVar3 = 0;
LAB_10827617c:
      *(undefined4 *)(param_1 + 2) = uVar3;
      *(int *)((long)param_1 + 0x14) = iVar1;
      return;
    }
    iVar1 = *(int *)(plVar2 + 3);
    if (iVar1 != 0) {
      uVar3 = 0x20;
      goto LAB_10827617c;
    }
    plVar2 = (long *)param_1[1];
    *param_1 = (long)plVar2;
    if (plVar2 == (long *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar2;
    }
    param_1[1] = lVar4;
  } while( true );
}



/* Entry: 108276184; end: 108276443;  */

void FUN_108276184(undefined8 *param_1,double param_2,double param_3,long param_4,ulong param_5,
                  undefined4 param_6,undefined8 param_7,uint param_8,undefined8 *param_9,
                  undefined8 *param_10,undefined8 param_11)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined **ppuVar4;
  code *pcVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined4 uVar9;
  undefined8 uVar10;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  long *plStack_170;
  ulong uStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined4 uStack_150;
  undefined2 uStack_14c;
  undefined1 uStack_14a;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined1 auStack_118 [4];
  undefined4 uStack_114;
  undefined **ppuStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined ***pppuStack_f8;
  undefined4 uStack_f0;
  undefined1 uStack_ec;
  undefined **ppuStack_e8;
  ulong uStack_e0;
  char cStack_98;
  undefined4 uStack_84;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = *(undefined8 *)(param_4 + 0x48);
  uStack_144 = param_6;
  _objc_retain(param_5);
  uVar6 = param_5;
  func_0x00010c0fca60();
  uStack_e0 = uVar6 & 0xffffffff;
  uStack_f0 = 2;
  uStack_ec = 1;
  uStack_84 = 1;
  ppuStack_e8 = &PTR_DAT_110a32ac0;
  cStack_98 = '\x01';
  if (0x1a < param_8) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1082763cc);
    (*pcVar5)();
  }
  uVar2 = *(undefined4 *)(&UNK_10df12b1c + (ulong)param_8 * 4);
  func_0x00010bf89d80(param_5);
  func_0x00010bf89d80(param_5);
  auStack_118[0] = 0;
  uStack_114 = 1;
  ppuStack_110 = &PTR_FUN_110a34818;
  pppuStack_f8 = &ppuStack_110;
  uVar6 = param_5;
  uStack_108 = param_5;
  uStack_100 = param_11;
  func_0x00010bfb7280();
  uVar9 = 4;
  if ((int)param_7 < 2) {
    uVar9 = 0;
  }
  puVar1 = (undefined1 *)0x0;
  if ((int)uVar6 == 0) {
    puVar1 = auStack_118;
  }
  uStack_148 = 1;
  uStack_14a = 0;
  uStack_14c = 1;
  uStack_150 = 1;
  FUN_1082a58e8(&lStack_120,uVar10,&ppuStack_110,&uStack_f0,CONCAT44((int)param_3,(int)param_2),
                param_7,uVar9,puVar1,0);
  FUN_10827683c(&ppuStack_110);
  lVar3 = lStack_120;
  lStack_120 = 0;
  uStack_138 = 0;
  lStack_130 = param_4;
  if (lVar3 != 0) {
    func_0x000108276948();
    uStack_138 = extraout_x8;
  }
  uStack_140 = *param_9;
  *param_9 = 0;
  if (param_10 == (undefined8 *)0x0) {
    uStack_108 = 0x3f000000;
    ppuStack_110 = (undefined **)0x0;
  }
  else {
    uStack_108 = param_10[1];
    ppuStack_110 = (undefined **)*param_10;
  }
  FUN_1082a728c(&lStack_128,&lStack_130,uVar2,&uStack_138,&uStack_140,uStack_144,&ppuStack_110,1);
  FUN_10810a400(&uStack_140);
  FUN_1082764bc(&uStack_138);
  if (lStack_128 == 0) {
    *param_1 = 0;
  }
  else {
    FUN_108276444(&ppuStack_110,&lStack_128);
    ppuVar4 = ppuStack_110;
    ppuStack_110 = (undefined **)0x0;
    *param_1 = ppuVar4;
    FUN_1082768c4(&ppuStack_110);
  }
  FUN_108276880(&lStack_128);
  plVar7 = &lStack_120;
  func_0x0001082764f4();
  if (cStack_98 == '\x01') {
    func_0x000108276910();
  }
  func_0x000108276924();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  FUN_108276880(&lStack_128);
  func_0x0001082764f4(&lStack_120);
  if (cStack_98 == '\x01') {
    func_0x000108276910();
  }
  func_0x000108276924();
  plVar8 = plVar7;
  __Unwind_Resume();
  pcStack_158 = FUN_108276444;
  uVar10 = 0x40;
  puStack_180 = param_10;
  puStack_178 = param_1;
  plStack_170 = plVar7;
  uStack_168 = param_5;
  puStack_160 = &stack0xfffffffffffffff0;
  __Znwm();
  lStack_188 = *plVar8;
  *plVar8 = 0;
  FUN_10830acdc();
  *extraout_x8_00 = uVar10;
  FUN_108276880(&lStack_188);
  return;
}



/* Entry: 108276444; end: 1082764bb;  */

void FUN_108276444(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  uVar1 = 0x40;
  __Znwm();
  uStack_38 = *param_2;
  *param_2 = 0;
  FUN_10830acdc();
  *param_1 = uVar1;
  FUN_108276880(&uStack_38);
  return;
}



/* Entry: 1082764bc; end: 10827653b;  */

void FUN_1082764bc(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  undefined4 extraout_w9;
  
  func_0x000108276964();
  if (param_1 != 0) {
    do {
      func_0x000108276970();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x000108276958();
    }
  }
  return;
}



/* Entry: 10827653c; end: 108276543;  */

void FUN_10827653c(void)

{
  return;
}



/* Entry: 108276544; end: 108276577;  */

void FUN_108276544(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_FUN_110a34818;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}



/* Entry: 108276578; end: 1082765a7;  */

void FUN_108276578(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_110a34818;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 1082765a8; end: 10827677b;  */

void FUN_1082765a8(undefined8 *param_1,long param_2,undefined8 *param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_70;
  long lStack_68;
  
  uVar4 = *param_3;
  uVar3 = *(undefined8 *)(param_2 + 8);
  _objc_retain(uVar3);
  uVar2 = uVar3;
  func_0x00010c0d99c0();
  _objc_retainAutoreleasedReturnValue();
  lStack_68 = 0;
  func_0x00010bfb7280();
  if ((int)uVar3 == 0) {
    func_0x00010c26ce20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010827692c();
    FUN_108274b4c();
    FUN_1082767c0(&lStack_68,&lStack_70);
    FUN_10826b828(&lStack_70);
  }
  else {
    func_0x00010c26ce20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010827692c();
    FUN_108271350();
    lVar1 = lStack_68;
    lStack_68 = lStack_70;
    lStack_70 = 0;
    FUN_1082767fc(lVar1);
    FUN_10826b85c(&lStack_70);
  }
  _objc_release(uVar4);
  if ((lStack_68 != 0) && (1 < *(int *)(param_4 + 0x10))) {
    func_0x000108276948();
    *(uint *)(extraout_x8 + 0xb8) = *(uint *)(extraout_x8 + 0xb8) | 4;
  }
  _objc_retain(uVar2);
  lVar1 = lStack_68;
  **(undefined8 **)(param_2 + 0x10) = uVar2;
  lStack_68 = 0;
  uVar3 = 0;
  if (lVar1 != 0) {
    func_0x000108276948();
    uVar3 = extraout_x8_00;
  }
  lStack_70 = 0;
  *param_1 = uVar3;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined1 *)((long)param_1 + 0xc) = 1;
  FUN_10826b5e8(&lStack_70);
  FUN_108276818(&lStack_68);
  _objc_release(uVar2);
  func_0x000108276924();
  return;
}



/* Entry: 10827677c; end: 1082767b3;  */

long FUN_10827677c(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110a34878);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1082767b4; end: 1082767bf;  */

undefined ** FUN_1082767b4(void)

{
  return &PTR_DAT_110a34878;
}



/* Entry: 1082767c0; end: 1082767fb;  */

long * FUN_1082767c0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  *param_2 = 0;
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x20;
  }
  lVar2 = *param_1;
  *param_1 = lVar1;
  FUN_1082767fc(lVar2);
  return param_1;
}



/* Entry: 1082767fc; end: 108276817;  */

void FUN_1082767fc(long *param_1)

{
  long *plVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long unaff_x19;
  long unaff_x20;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  param_1 = (long *)((long)param_1 + *(long *)(*param_1 + -0x18));
  plVar1 = param_1 + 1;
  do {
    iVar7 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 != 0) {
    return;
  }
  iVar7 = 0;
  if (param_1[0x10] == 0) {
    if ((*(int *)((long)param_1 + 0xc) == 0) && ((int)*plVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001082a0900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x18))(param_1);
      return;
    }
    return;
  }
  iVar5 = (int)*(undefined8 *)(*(long *)(param_1[0x10] + 0x20) + 0x78);
  func_0x0001082ade30();
  if ((iVar7 == 0) && (func_0x0001082addb4(), iVar5 != 0)) {
    func_0x0001082adf08();
  }
  if ((*(int *)(unaff_x19 + 8) == 0) && (*(int *)(unaff_x19 + 0xc) == 0)) {
    lVar6 = unaff_x20;
    FUN_1082ab4d8();
    *(int *)(unaff_x19 + 0x14) = (int)lVar6;
    lVar6 = unaff_x19;
    FUN_1082a0834();
    if ((int)lVar6 != 0) {
      func_0x0001082adf18();
      FUN_1082ab814();
      lVar6 = unaff_x20 + 0x18;
      FUN_1082abdf4();
      __ZNSt3__16chrono12steady_clock3nowEv();
      *(long *)(unaff_x19 + 0x18) = lVar6;
      func_0x0001082ae078();
      *(long *)(unaff_x20 + 0x90) = *(long *)(unaff_x20 + 0x90) + lVar6;
      sVar2 = *(short *)(*(long *)(unaff_x19 + 0x48) + 4);
      if (*(char *)(unaff_x19 + 0x90) == '\0') {
        if ((*(ulong *)(unaff_x20 + 0x88) <= *(ulong *)(unaff_x20 + 0x70)) &&
           (*(short *)(*(long *)(unaff_x19 + 0x20) + 4) != 0 || sVar2 != 0)) {
          return;
        }
      }
      else {
        if ((sVar2 != 0) && (*(char *)(unaff_x19 + 0x90) == '\x02')) {
          return;
        }
        if ((((*(byte *)(unaff_x19 + 0x91) & 1) == 0) &&
            (*(short *)(*(long *)(unaff_x19 + 0x20) + 4) != 0)) &&
           (func_0x0001082ae078(),
           (ulong)(*(long *)(unaff_x20 + 0x88) + lVar6) <= *(ulong *)(unaff_x20 + 0x70))) {
          FUN_1082a0950();
          return;
        }
      }
      FUN_1082ab9e0(&stack0xffffffffffffffd8);
    }
  }
  return;
}



/* Entry: 108276818; end: 10827683b;  */

void FUN_108276818(void)

{
  func_0x000108276964();
  FUN_1082767fc();
  return;
}



/* Entry: 10827683c; end: 10827687f;  */

long * FUN_10827683c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 108276880; end: 1082768c3;  */

void FUN_108276880(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  undefined4 extraout_w9;
  
  func_0x000108276964();
  if (param_1 != (long *)0x0) {
    do {
      func_0x000108276970();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      (**(code **)(*param_1 + 0x10))();
    }
  }
  return;
}



/* Entry: 1082768c4; end: 108276907;  */

void FUN_1082768c4(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  undefined4 extraout_w9;
  
  func_0x000108276964();
  if (param_1 != (long *)0x0) {
    do {
      func_0x000108276970();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      (**(code **)(*param_1 + 0x10))();
    }
  }
  return;
}



/* Entry: 108276908; end: 10827697b;  */

void FUN_108276908(void)

{
  return;
}



/* Entry: 10827697c; end: 1082769df;  */

void FUN_10827697c(ulong *param_1,ulong param_2)

{
  if (param_2 < 0x401) {
    param_2 = 0x400;
  }
  if (0x1fffffff < param_2) {
    param_2 = 0x20000000;
  }
  __Znwm();
  FUN_1082769e0();
  *param_1 = param_2;
  return;
}



/* Entry: 1082769e0; end: 1082769eb;  */

void FUN_1082769e0(undefined8 *param_1,int param_2,long param_3)

{
  ulong uVar1;
  
  param_1[2] = 0;
  uVar1 = param_3 + 7U >> 3;
  if (0xfffe < uVar1) {
    uVar1 = 0xffff;
  }
  *param_1 = param_1 + 2;
  param_1[1] = uVar1 & 0xffffffff | 0x20000000000;
  param_1[3] = 0;
  *(int *)(param_1 + 4) = param_2 + -0x10;
  *(undefined8 *)((long)param_1 + 0x24) = 0x20;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  return;
}



/* Entry: 1082769ec; end: 108276a37;  */

long FUN_1082769ec(void)

{
  undefined4 *puVar1;
  long lStack_28;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  FUN_108276a38(&lStack_28);
  puVar1 = (undefined4 *)(lStack_28 + (iStack_1c + -8));
  *puVar1 = uStack_20;
  puVar1[1] = uStack_18;
  *(int *)(lStack_28 + 0x18) = *(int *)(lStack_28 + 0x18) + 1;
  return lStack_28 + iStack_1c;
}


