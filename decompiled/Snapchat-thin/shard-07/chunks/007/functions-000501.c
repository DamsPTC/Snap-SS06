/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105963824; end: 105963847;  */

void FUN_105963824(long param_1)

{
  if (*(char *)(param_1 + 0x68) == '\x01') {
    FUN_1059639a8();
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  return;
}



/* Entry: 105963848; end: 1059638b3;  */

void FUN_105963848(void)

{
  undefined1 uVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000105964120();
  func_0x000105963ea8();
  uVar1 = 1;
  func_0x0001005f9230();
  *(undefined8 *)(unaff_x19 + 0x18) = unaff_x20;
  *(undefined1 *)(unaff_x19 + 0x20) = uVar1;
  func_0x00010062258c(unaff_x19 + 0x28);
  func_0x00010062258c(unaff_x19 + 0x48);
  return;
}



/* Entry: 1059638b4; end: 1059638f7;  */

void FUN_1059638b4(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000105963f38();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined1 *)(unaff_x20 + 0x20) = *(undefined1 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  func_0x0001002a8208(unaff_x20 + 0x28,unaff_x19 + 0x28);
  func_0x0001002a8208(unaff_x20 + 0x48,unaff_x19 + 0x48);
  return;
}



/* Entry: 1059638f8; end: 105963913;  */

void FUN_1059638f8(long param_1)

{
  FUN_105963914();
  *(undefined1 *)(param_1 + 0x68) = 1;
  return;
}



/* Entry: 105963914; end: 1059639a7;  */

void FUN_105963914(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  *(undefined1 *)(param_1 + 8) = 0;
  if (*(char *)(param_2 + 8) == '\x01') {
    uVar2 = param_2[6];
    uVar1 = param_2[5];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
    param_1[5] = uVar1;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[5] = 0;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (*(char *)(param_2 + 0xc) == '\x01') {
    uVar2 = param_2[10];
    uVar1 = param_2[9];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar2;
    param_1[9] = uVar1;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[9] = 0;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  return;
}



/* Entry: 1059639a8; end: 1059639d3;  */

void FUN_1059639a8(long param_1)

{
  func_0x0001001148fc(param_1 + 0x48);
  func_0x0001001148fc(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 1059639d4; end: 1059639f3;  */

void FUN_1059639d4(long param_1)

{
  if (*(char *)(param_1 + 0x68) == '\x01') {
    FUN_1059639a8();
  }
  return;
}



/* Entry: 1059639f4; end: 105963b93;  */

/* WARNING: Possible PIC construction at 0x000105963a78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105963a7c) */
/* WARNING: Removing unreachable block (ram,0x0001056453f4) */
/* WARNING: Removing unreachable block (ram,0x000105645404) */
/* WARNING: Removing unreachable block (ram,0x0001056455a0) */
/* WARNING: Removing unreachable block (ram,0x000105645400) */

void FUN_1059639f4(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  func_0x00010054c7ec(param_1,1,puVar2,uVar1);
  iVar3 = (int)param_1;
  func_0x0001005ecddc();
  func_0x000107c61338();
  if (iVar3 != 0) {
    func_0x000107c3a514();
    func_0x000107c3a50c();
    func_0x000107c3a524();
    func_0x0001003a91d4(&UNK_10f82fa61);
    func_0x000107c3a51c();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 105963b94; end: 105963b9f;  */

void FUN_105963b94(int param_1)

{
  func_0x0001005edd44();
  func_0x000107c6132c();
  if (param_1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 105963ba0; end: 105963bcb;  */

void FUN_105963ba0(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  if (*(char *)(param_3 + 4) == '\x01') {
    func_0x0001005edd44();
    iVar1 = (int)param_1;
    func_0x000107c6132c();
    if (iVar1 != 0) {
      func_0x000107c3a4f8();
      func_0x000107c3a50c();
      func_0x000107c3a520();
      func_0x0001003a91d4(&UNK_10f82fa21);
      func_0x000107c3a500();
      func_0x000107c3a4f0();
      func_0x000107c3a4fc();
      func_0x000107c3a504();
    }
    return;
  }
  func_0x00010bccb8cc(param_1,param_2,&stack0xffffffffffffffef);
  return;
}



/* Entry: 105963bcc; end: 105963bcf;  */

void FUN_105963bcc(int param_1)

{
  func_0x0001005edd44();
  func_0x000107c6132c();
  if (param_1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 105963bd0; end: 105963c2f;  */

void FUN_105963bd0(void)

{
  undefined1 auStack_70 [64];
  
  func_0x0001059640c0();
  func_0x0001005d466c(auStack_70);
  func_0x000105964320();
  func_0x000105964208();
  FUN_105963c30();
  func_0x0001059641ac();
  func_0x000105964218();
  return;
}



/* Entry: 105963c30; end: 105963c6b;  */

void FUN_105963c30(void)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000105964148();
  func_0x000105964174();
  FUN_105963c6c();
  *unaff_x19 = unaff_x20;
  return;
}



/* Entry: 105963c6c; end: 105963c8f;  */

void FUN_105963c6c(undefined8 *param_1)

{
  func_0x00010054bfa4();
  *param_1 = &PTR_FUN_1108c2580;
  return;
}



/* Entry: 105963c90; end: 105963c93;  */

undefined8 * FUN_105963c90(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 105963c94; end: 105963ca7;  */

void FUN_105963c94(void)

{
  func_0x00010054c360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105963ca8; end: 105963cdf;  */

void FUN_105963ca8(long *param_1)

{
  func_0x0001005ff920();
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000105963cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))(param_1);
    return;
  }
  return;
}



/* Entry: 105963ce0; end: 105963d13;  */

void FUN_105963ce0(void)

{
  int unaff_w21;
  
  func_0x0001059640a0();
  func_0x000105964220();
  func_0x00010054c7ec();
  func_0x0001005ecddc();
  func_0x000107c61338();
  if (unaff_w21 != 0) {
    func_0x000107c3a514();
    func_0x000107c3a50c();
    func_0x000107c3a524();
    func_0x0001003a91d4(&UNK_10f82fa61);
    func_0x000107c3a51c();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 105963d14; end: 105963d4b;  */

void FUN_105963d14(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  
  func_0x000100867a20(param_1,1,param_2);
  uVar1 = param_3[1];
  puVar2 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar2 = param_3;
  }
  func_0x00010054c7ec(param_1,2,puVar2,uVar1);
  iVar3 = (int)param_1;
  func_0x0001005ecddc();
  func_0x000107c61338();
  if (iVar3 != 0) {
    func_0x000107c3a514();
    func_0x000107c3a50c();
    func_0x000107c3a524();
    func_0x0001003a91d4(&UNK_10f82fa61);
    func_0x000107c3a51c();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 105963d4c; end: 105964393;  */

undefined1 * FUN_105963d4c(void)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined **ppuStack0000000000000018;
  long in_stack_000000a0;
  
  unaff_x20[1] = unaff_x21;
  unaff_x20[2] = unaff_x22;
  unaff_x20[0x13] = in_stack_000000a0;
  lVar1 = *(long *)(unaff_x19 + 0x60);
  *unaff_x20 = lVar1;
  *(long **)(lVar1 + 8) = unaff_x20;
  *(long **)(unaff_x19 + 0x60) = unaff_x20;
  *(long *)(unaff_x19 + 0x70) = *(long *)(unaff_x19 + 0x70) + 1;
  ppuStack0000000000000018 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(&stack0x00000070);
  func_0x000107c60d94(&stack0x00000030);
  return (undefined1 *)&stack0x00000018;
}



/* Entry: 105964394; end: 105964463;  */

void FUN_105964394(undefined8 *param_1)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_40 [16];
  
  func_0x00010002b838(&uStack_60,&UNK_10f315656);
  func_0x00010044fc54(auStack_40,&uStack_60,0x17,1,0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_60);
  FUN_105964464(&uStack_60,auStack_40);
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  uStack_60 = 0;
  uStack_58 = 0;
  func_0x000105965108();
  func_0x000100450be4(auStack_40);
  return;
}



/* Entry: 105964464; end: 105964487;  */

void FUN_105964464(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_105964acc(&uStack_11,param_1);
  return;
}



/* Entry: 105964488; end: 105964517;  */

void FUN_105964488(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001059650f8();
    *(undefined8 *)((long)register0x00000008 + -0x38) = extraout_x8;
    unaff_x19 = param_1;
    uVar1 = param_2;
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      func_0x000105965150();
      *(undefined8 *)((long)register0x00000008 + -0xa8) = 1;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = 0x10;
      *(int *)((long)register0x00000008 + -0xa0) = (int)param_2;
      func_0x000105965160(FUN_105964d08);
      func_0x0001059650bc();
      func_0x0001059650ac();
      func_0x000105965108();
      unaff_x19 = param_1;
      unaff_x20 = param_2;
    }
    param_2 = uVar1;
    func_0x000105965098(*(undefined8 *)((long)register0x00000008 + -0x38));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    param_1 = unaff_x19;
    func_0x0001059650ac();
    func_0x000105965108();
    unaff_x30 = FUN_105964518;
    func_0x00010596513c();
    param_1 = param_1 + -8;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
  }
  return;
}



/* Entry: 105964518; end: 105964527;  */

void FUN_105964518(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    lVar1 = param_1 + -8;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001059650f8();
    *(undefined8 *)((long)register0x00000008 + -0x38) = extraout_x8;
    uVar2 = param_2;
    if (*(long *)(lVar1 + 0x28) != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x18);
      func_0x000105965150();
      *(undefined8 *)((long)register0x00000008 + -0xa8) = 1;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = 0x10;
      *(int *)((long)register0x00000008 + -0xa0) = (int)param_2;
      func_0x000105965160(FUN_105964d08);
      func_0x0001059650bc();
      func_0x0001059650ac();
      func_0x000105965108();
      unaff_x20 = param_2;
    }
    param_2 = uVar2;
    func_0x000105965098(*(undefined8 *)((long)register0x00000008 + -0x38));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    param_1 = lVar1;
    func_0x0001059650ac();
    func_0x000105965108();
    unaff_x30 = FUN_105964518;
    func_0x00010596513c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x19 = lVar1;
  }
  return;
}



/* Entry: 105964528; end: 1059645db;  */

void FUN_105964528(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  undefined1 *unaff_x19;
  long *plVar1;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined1 *unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001059650f8();
    *(undefined8 *)((long)register0x00000008 + -0x38) = extraout_x8;
    plVar1 = *(long **)(param_1 + 0x28);
    unaff_x19 = param_1;
    if (plVar1 != (long *)0x0) {
      func_0x000105965150();
      *(undefined8 *)((long)register0x00000008 + -0xb0) = param_2;
      *(undefined8 *)((long)register0x00000008 + -0xa8) = param_3;
      unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x98);
      *(code **)((long)register0x00000008 + -0x98) = FUN_105964dd8;
      *(undefined ***)((long)register0x00000008 + -0x90) = &PTR_DAT_1108c2790;
      *(undefined8 *)((long)register0x00000008 + -0x80) =
           *(undefined8 *)((long)register0x00000008 + -0xb8);
      *(undefined8 *)((long)register0x00000008 + -0x88) =
           *(undefined8 *)((long)register0x00000008 + -0xc0);
      *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x78) = param_2;
      *(undefined8 *)((long)register0x00000008 + -0x70) = param_3;
      func_0x0001059650bc(*(undefined8 *)(*plVar1 + 0x10));
      func_0x000105965194();
      unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x90);
      (*extraout_x8_00)();
      func_0x000105965108();
      unaff_x20 = param_3;
      unaff_x21 = param_2;
    }
    func_0x000105965098(*(undefined8 *)((long)register0x00000008 + -0x38));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x000105965194();
    param_1 = unaff_x22 + 8;
    (*extraout_x8_01)();
    func_0x000105965108();
    unaff_x30 = FUN_1059645dc;
    func_0x00010596513c();
    param_1 = param_1 + -8;
    param_2 = 0x18;
    param_3 = 1;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
  }
  return;
}



/* Entry: 1059645dc; end: 1059645f3;  */

void FUN_1059645dc(undefined1 *param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long *plVar4;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined1 *unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar1 = param_1 + -8;
    uVar2 = 0x18;
    uVar3 = 1;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001059650f8();
    *(undefined8 *)((long)register0x00000008 + -0x38) = extraout_x8;
    plVar4 = *(long **)(puVar1 + 0x28);
    if (plVar4 != (long *)0x0) {
      func_0x000105965150();
      *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar2;
      *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar3;
      unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x98);
      *(code **)((long)register0x00000008 + -0x98) = FUN_105964dd8;
      *(undefined ***)((long)register0x00000008 + -0x90) = &PTR_DAT_1108c2790;
      *(undefined8 *)((long)register0x00000008 + -0x80) =
           *(undefined8 *)((long)register0x00000008 + -0xb8);
      *(undefined8 *)((long)register0x00000008 + -0x88) =
           *(undefined8 *)((long)register0x00000008 + -0xc0);
      *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x78) = uVar2;
      *(undefined8 *)((long)register0x00000008 + -0x70) = uVar3;
      func_0x0001059650bc(*(undefined8 *)(*plVar4 + 0x10));
      func_0x000105965194();
      puVar1 = (undefined1 *)((long)register0x00000008 + -0x90);
      (*extraout_x8_00)();
      func_0x000105965108();
      unaff_x20 = uVar3;
      unaff_x21 = uVar2;
    }
    func_0x000105965098(*(undefined8 *)((long)register0x00000008 + -0x38));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x000105965194();
    param_1 = unaff_x22 + 8;
    (*extraout_x8_01)();
    func_0x000105965108();
    unaff_x30 = FUN_1059645dc;
    func_0x00010596513c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x19 = puVar1;
  }
  return;
}



/* Entry: 1059645f4; end: 105964683;  */

void FUN_1059645f4(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001059650f8();
    *(undefined8 *)((long)register0x00000008 + -0x38) = extraout_x8;
    unaff_x19 = param_1;
    uVar1 = param_2;
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      func_0x000105965150();
      *(undefined8 *)((long)register0x00000008 + -0xa8) = 1;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = 0x28;
      *(int *)((long)register0x00000008 + -0xa0) = (int)param_2;
      func_0x000105965160(FUN_105964e80);
      func_0x0001059650bc();
      func_0x0001059650ac();
      func_0x000105965108();
      unaff_x19 = param_1;
      unaff_x20 = param_2;
    }
    param_2 = uVar1;
    func_0x000105965098(*(undefined8 *)((long)register0x00000008 + -0x38));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    param_1 = unaff_x19;
    func_0x0001059650ac();
    func_0x000105965108();
    unaff_x30 = FUN_105964684;
    func_0x00010596513c();
    param_1 = param_1 + -8;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
  }
  return;
}



/* Entry: 105964684; end: 1059646ab;  */

void FUN_105964684(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    lVar1 = param_1 + -8;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001059650f8();
    *(undefined8 *)((long)register0x00000008 + -0x38) = extraout_x8;
    uVar2 = param_2;
    if (*(long *)(lVar1 + 0x28) != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x18);
      func_0x000105965150();
      *(undefined8 *)((long)register0x00000008 + -0xa8) = 1;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = 0x28;
      *(int *)((long)register0x00000008 + -0xa0) = (int)param_2;
      func_0x000105965160(FUN_105964e80);
      func_0x0001059650bc();
      func_0x0001059650ac();
      func_0x000105965108();
      unaff_x20 = param_2;
    }
    param_2 = uVar2;
    func_0x000105965098(*(undefined8 *)((long)register0x00000008 + -0x38));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    param_1 = lVar1;
    func_0x0001059650ac();
    func_0x000105965108();
    unaff_x30 = FUN_105964684;
    func_0x00010596513c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x19 = lVar1;
  }
  return;
}



/* Entry: 1059646ac; end: 10596479b;  */

undefined1 * FUN_1059646ac(undefined1 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long *plVar6;
  code **unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_28;
  
  puVar4 = &uStack_b0;
  puVar5 = &uStack_b0;
  func_0x0001059650f8();
  plVar6 = *(long **)(param_1 + 0x28);
  uStack_28 = extraout_x8;
  if (plVar6 != (long *)0x0) {
    func_0x000105965150();
    uStack_a0 = *param_2;
    lStack_98 = param_2[1];
    if (lStack_98 != 0) {
      plVar1 = (long *)(lStack_98 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pcStack_88 = FUN_105964f10;
    ppuStack_80 = &PTR_FUN_1108c27c0;
    uStack_70 = uStack_a8;
    uStack_78 = uStack_b0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    if (lStack_98 != 0) {
      plVar1 = (long *)(lStack_98 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    unaff_x20 = &pcStack_88;
    uStack_68 = uStack_a0;
    lStack_60 = lStack_98;
    func_0x0001059650bc(*(undefined8 *)(*plVar6 + 0x10));
    func_0x000105965194();
    (*extraout_x8_00)(&ppuStack_80);
    FUN_10596479c();
    param_1 = (undefined1 *)puVar4;
  }
  func_0x000105965098(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000105965194();
  (*extraout_x8_01)(unaff_x20 + 1);
  FUN_10596479c();
  func_0x00010596513c();
  func_0x000105959898((undefined1 *)((long)puVar5 + 0x10));
  if (*(long *)((long)puVar5 + 8) != 0) {
    func_0x0001000df548();
  }
  return (undefined1 *)puVar5;
}



/* Entry: 10596479c; end: 1059647c3;  */

long FUN_10596479c(long param_1)

{
  func_0x000105959898(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1059647c4; end: 1059647cb;  */

undefined1 * FUN_1059647c4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long *plVar7;
  code **unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_28;
  
  puVar6 = (undefined1 *)(param_1 + -0x10);
  puVar4 = &uStack_b0;
  puVar5 = &uStack_b0;
  func_0x0001059650f8();
  plVar7 = *(long **)(puVar6 + 0x28);
  uStack_28 = extraout_x8;
  if (plVar7 != (long *)0x0) {
    func_0x000105965150();
    uStack_a0 = *param_2;
    lStack_98 = param_2[1];
    if (lStack_98 != 0) {
      plVar1 = (long *)(lStack_98 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pcStack_88 = FUN_105964f10;
    ppuStack_80 = &PTR_FUN_1108c27c0;
    uStack_70 = uStack_a8;
    uStack_78 = uStack_b0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    if (lStack_98 != 0) {
      plVar1 = (long *)(lStack_98 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    unaff_x20 = &pcStack_88;
    uStack_68 = uStack_a0;
    lStack_60 = lStack_98;
    func_0x0001059650bc(*(undefined8 *)(*plVar7 + 0x10));
    func_0x000105965194();
    (*extraout_x8_00)(&ppuStack_80);
    FUN_10596479c();
    puVar6 = (undefined1 *)puVar4;
  }
  func_0x000105965098(uStack_28);
  if ((bool)in_ZR) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x000105965194();
  (*extraout_x8_01)(unaff_x20 + 1);
  FUN_10596479c();
  func_0x00010596513c();
  func_0x000105959898((undefined1 *)((long)puVar5 + 0x10));
  if (*(long *)((long)puVar5 + 8) != 0) {
    func_0x0001000df548();
  }
  return (undefined1 *)puVar5;
}



/* Entry: 1059647cc; end: 105964897;  */

/* WARNING: Removing unreachable block (ram,0x00010596488c) */

void FUN_1059647cc(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 0x38);
  lVar3 = *(long *)(param_1 + 0x40);
  while( true ) {
    if (lVar4 == lVar3) {
      return;
    }
    lVar5 = lVar4;
    if ((*(long *)(lVar4 + 8) == 0) || (*(long *)(*(long *)(lVar4 + 8) + 8) == -1)) break;
    lVar4 = lVar4 + 0x10;
  }
  while (lVar2 = lVar5 + 0x10, lVar2 != lVar3) {
    plVar1 = (long *)(lVar5 + 0x18);
    lVar5 = lVar2;
    if ((*plVar1 != 0) && (*(long *)(*plVar1 + 8) != -1)) {
      func_0x0001059649bc(lVar4,lVar2);
      lVar4 = lVar4 + 0x10;
    }
  }
  if (lVar4 == *(long *)(param_1 + 0x40)) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x40);
  while (lVar3 != lVar4) {
    lVar3 = lVar3 + -0x10;
    func_0x000105964994();
  }
  *(long *)(param_1 + 0x40) = lVar4;
  return;
}



/* Entry: 105964898; end: 10596489b;  */

long FUN_105964898(long param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = param_1;
  func_0x0001059651a0();
  plVar2 = (long *)(lVar1 + 0x38);
  if (*plVar2 != 0) {
    FUN_105964958(plVar2);
    __ZdlPv(*plVar2);
  }
  func_0x000100450be4(param_1 + 0x28);
  func_0x000105964a40(param_1 + 0x18);
  return param_1;
}



/* Entry: 10596489c; end: 1059648af;  */

void FUN_10596489c(void)

{
  func_0x0001059649f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1059648b0; end: 105964937;  */

void FUN_1059648b0(long *param_1,long param_2)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000105965150(param_2,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
  lVar1 = 0;
  if (lStack_30 != 0) {
    lVar1 = lStack_30 + 8;
  }
  *param_1 = lVar1;
  param_1[1] = lStack_28;
  func_0x000105965108();
  return;
}



/* Entry: 105964938; end: 105964957;  */

long FUN_105964938(long param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = param_1 + -8;
  func_0x0001059651a0();
  plVar2 = (long *)(lVar1 + 0x38);
  if (*plVar2 != 0) {
    FUN_105964958(plVar2);
    __ZdlPv(*plVar2);
  }
  func_0x000100450be4(param_1 + 0x20);
  func_0x000105964a40(param_1 + 0x10);
  return param_1 + -8;
}



/* Entry: 105964958; end: 105964acb;  */

void FUN_105964958(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x10;
    func_0x000105964994();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 105964acc; end: 105964b57;  */

void FUN_105964acc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  long lVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar5 = auStack_40;
  func_0x0001059650f8();
  uStack_28 = extraout_x8;
  FUN_105964b74(auStack_40,1);
  FUN_105964bcc(lStack_30,param_3);
  lVar6 = lStack_30;
  lStack_30 = 0;
  FUN_105964b58(param_1,lVar6 + 0x18);
  FUN_105964cf8(auStack_40);
  func_0x000105965098(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_105964cf8();
  func_0x00010596513c();
  *extraout_x8_00 = puVar5;
  extraout_x8_00[1] = lVar6;
  puVar2 = (undefined8 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar2 = (undefined8 *)(puVar5 + 0x18);
  }
  if ((puVar2 != (undefined8 *)0x0) && ((puVar2[1] == 0 || (*(long *)(puVar2[1] + 8) == -1)))) {
    pcStack_48 = FUN_105964b58;
    lVar6 = extraout_x8_00[1];
    if (lVar6 != 0) {
      plVar1 = (long *)(lVar6 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar1 = (long *)(lVar6 + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_58 = puVar2[1];
    uStack_60 = *puVar2;
    *puVar2 = puVar5;
    puVar2[1] = lVar6;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x000105964a40(&uStack_60);
    func_0x000105965108();
    return;
  }
  return;
}



/* Entry: 105964b58; end: 105964b73;  */

void FUN_105964b58(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  plVar2 = (long *)0x0;
  if (param_2 != 0) {
    plVar2 = (long *)(param_2 + 0x18);
  }
  if ((plVar2 != (long *)0x0) && ((plVar2[1] == 0 || (*(long *)(plVar2[1] + 8) == -1)))) {
    lVar5 = param_1[1];
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar1 = (long *)(lVar5 + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_18 = plVar2[1];
    lStack_20 = *plVar2;
    *plVar2 = param_2;
    plVar2[1] = lVar5;
    func_0x000105964a40(&lStack_20);
    func_0x000105965108();
    return;
  }
  return;
}



/* Entry: 105964b74; end: 105964b9b;  */

long FUN_105964b74(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_105964b9c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 105964b9c; end: 105964bcb;  */

undefined8 * FUN_105964b9c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x276276276276277) {
    puVar1 = (undefined8 *)(param_2 * 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1108c2738;
  FUN_105964c24(param_1 + 3);
  return param_1;
}



/* Entry: 105964bcc; end: 105964bfb;  */

undefined8 * FUN_105964bcc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1108c2738;
  FUN_105964c24(param_1 + 3);
  return param_1;
}



/* Entry: 105964bfc; end: 105964bff;  */

void FUN_105964bfc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c2738;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105964c00; end: 105964c13;  */

void FUN_105964c00(void)

{
  FUN_105964c6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105964c14; end: 105964c23;  */

void FUN_105964c14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105964c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105964c24; end: 105964c6b;  */

long FUN_105964c24(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  lVar1 = param_1;
  func_0x0001059651a0();
  *(undefined8 *)(lVar1 + 0x30) = uVar3;
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
  uStack_30 = 0;
  uStack_28 = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  func_0x000100450be4(&uStack_30);
  return param_1;
}



/* Entry: 105964c6c; end: 105964c7b;  */

void FUN_105964c6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c2738;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105964c7c; end: 105964cf7;  */

void FUN_105964c7c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((param_2 != (undefined8 *)0x0) && ((param_2[1] == 0 || (*(long *)(param_2[1] + 8) == -1)))) {
    lVar4 = *(long *)(param_1 + 8);
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = (long *)(lVar4 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_18 = param_2[1];
    uStack_20 = *param_2;
    *param_2 = param_3;
    param_2[1] = lVar4;
    func_0x000105964a40(&uStack_20);
    func_0x000105965108();
    return;
  }
  return;
}



/* Entry: 105964cf8; end: 105964d07;  */

void FUN_105964cf8(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 105964d08; end: 105964d87;  */

void FUN_105964d08(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x19;
  long lVar4;
  undefined8 uStack_40;
  
  func_0x000105965188();
  lVar2 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x40);
  for (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x38); lVar4 != lVar2; lVar4 = lVar4 + 0x10)
  {
    func_0x000105965144();
    if (uStack_40 != 0) {
      pcVar3 = *(code **)(unaff_x19 + 0x20);
      plVar1 = (long *)(uStack_40 + ((long)*(ulong *)(unaff_x19 + 0x28) >> 1));
      if ((*(ulong *)(unaff_x19 + 0x28) & 1) != 0) {
        pcVar3 = *(code **)(*plVar1 + ((ulong)pcVar3 & 0xffffffff));
      }
      (*pcVar3)(plVar1,*(undefined4 *)(unaff_x19 + 0x30));
    }
    func_0x000105965158();
  }
  return;
}



/* Entry: 105964d88; end: 105964dc7;  */

void FUN_105964d88(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 105964dc8; end: 105964dd7;  */

long FUN_105964dc8(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 8;
}



/* Entry: 105964dd8; end: 105964e53;  */

void FUN_105964dd8(void)

{
  long lVar1;
  code *pcVar2;
  long unaff_x19;
  long lVar3;
  undefined8 uStack_40;
  
  func_0x000105965188();
  lVar1 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x40);
  for (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x38); lVar3 != lVar1; lVar3 = lVar3 + 0x10)
  {
    func_0x000105965144();
    if (uStack_40 != 0) {
      pcVar2 = *(code **)(unaff_x19 + 0x20);
      if ((*(ulong *)(unaff_x19 + 0x28) & 1) != 0) {
        pcVar2 = *(code **)(*(long *)(uStack_40 + ((long)*(ulong *)(unaff_x19 + 0x28) >> 1)) +
                           ((ulong)pcVar2 & 0xffffffff));
      }
      (*pcVar2)();
    }
    func_0x000105965158();
  }
  return;
}



/* Entry: 105964e54; end: 105964e7f;  */

void FUN_105964e54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_DAT_1108c2790;
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[2] = param_2[1];
  param_1[1] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[4] = uVar3;
  param_1[3] = uVar2;
  return;
}



/* Entry: 105964e80; end: 105964eff;  */

void FUN_105964e80(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x19;
  long lVar4;
  undefined8 uStack_40;
  
  func_0x000105965188();
  lVar2 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x40);
  for (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x38); lVar4 != lVar2; lVar4 = lVar4 + 0x10)
  {
    func_0x000105965144();
    if (uStack_40 != 0) {
      pcVar3 = *(code **)(unaff_x19 + 0x20);
      plVar1 = (long *)(uStack_40 + ((long)*(ulong *)(unaff_x19 + 0x28) >> 1));
      if ((*(ulong *)(unaff_x19 + 0x28) & 1) != 0) {
        pcVar3 = *(code **)(*plVar1 + ((ulong)pcVar3 & 0xffffffff));
      }
      (*pcVar3)(plVar1,*(undefined4 *)(unaff_x19 + 0x30));
    }
    func_0x000105965158();
  }
  return;
}



/* Entry: 105964f00; end: 105964f0f;  */

long FUN_105964f00(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 8;
}



/* Entry: 105964f10; end: 10596503b;  */

void FUN_105964f10(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  
  lVar14 = *(long *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  lVar5 = *(long *)(param_1 + 0x28);
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 0x10);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  puVar15 = *(undefined8 **)(lVar14 + 0x40);
  if (puVar15 < *(undefined8 **)(lVar14 + 0x48)) {
    *puVar15 = uVar4;
    puVar15[1] = lVar5;
    puVar15 = puVar15 + 2;
  }
  else {
    lVar12 = *(long *)(lVar14 + 0x38);
    lVar13 = (long)puVar15 - lVar12;
    uVar2 = (lVar13 >> 4) + 1;
    if (uVar2 >> 0x3c != 0) {
      FUN_10596503c();
LAB_10596502c:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x105965030);
      (*pcVar8)();
    }
    uVar10 = (long)*(undefined8 **)(lVar14 + 0x48) - lVar12;
    uVar11 = (long)uVar10 >> 3;
    if (uVar11 <= uVar2) {
      uVar11 = uVar2;
    }
    if (0x7fffffffffffffef < uVar10) {
      uVar11 = 0xfffffffffffffff;
    }
    if (uVar11 == 0) {
      lVar9 = 0;
    }
    else {
      if (uVar11 >> 0x3c != 0) {
        func_0x000104bd35f4();
        goto LAB_10596502c;
      }
      lVar9 = uVar11 << 4;
      __Znwm();
    }
    puVar3 = (undefined8 *)(lVar9 + lVar13);
    *puVar3 = uVar4;
    puVar3[1] = lVar5;
    puVar15 = puVar3 + 2;
    _memcpy(puVar3 + (lVar13 >> 4) * -2,lVar12,lVar13);
    *(undefined8 **)(lVar14 + 0x38) = puVar3 + (lVar13 >> 4) * -2;
    *(undefined8 **)(lVar14 + 0x40) = puVar15;
    *(ulong *)(lVar14 + 0x48) = lVar9 + uVar11 * 0x10;
    if (lVar12 != 0) {
      __ZdlPv(lVar12);
    }
  }
  *(undefined8 **)(lVar14 + 0x40) = puVar15;
  func_0x0001059651e0();
  return;
}



/* Entry: 10596503c; end: 10596504f;  */

undefined * FUN_10596503c(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  func_0x000105959898(puVar1 + 0x18);
  if (*(long *)(puVar1 + 0x10) != 0) {
    func_0x0001000df548();
  }
  return puVar1 + 8;
}



/* Entry: 105965050; end: 1059651e7;  */

long FUN_105965050(long param_1)

{
  func_0x000105959898(param_1 + 0x18);
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 8;
}



/* Entry: 1059651e8; end: 105965313;  */

/* WARNING: Possible PIC construction at 0x000105965250: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105965254) */

undefined *** FUN_1059651e8(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  long lVar5;
  undefined ***pppuVar6;
  undefined8 extraout_x8;
  long unaff_x19;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined4 uStack_78;
  undefined8 uStack_38;
  
  func_0x000100927398();
  pbVar1 = (byte *)(param_1 + 0x48);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((bVar2 & 1) != 0) {
    uStack_88 = 0;
    lStack_80 = 0;
    ppuStack_98 = &PTR_FUN_1108c28b8;
    ppuStack_90 = (undefined **)0x0;
    uStack_78 = 0xe;
    (**(code **)(**(long **)(unaff_x19 + 0x50) + 0x18))(*(long **)(unaff_x19 + 0x50),&ppuStack_98);
    pppuVar6 = &ppuStack_98;
    goto LAB_1005529f0;
  }
  uStack_38 = extraout_x8;
  FUN_10598945c(unaff_x19 + 0x28);
  lVar5 = *(long *)(unaff_x19 + 0x10);
  if (lVar5 == 0) {
LAB_1059652e0:
    pppuVar6 = (undefined ***)0x0;
    FUN_10527822c();
  }
  else {
    plVar7 = *(long **)(unaff_x19 + 0x28);
    uVar8 = *(undefined8 *)(unaff_x19 + 8);
    __ZNSt3__119__shared_weak_count4lockEv();
    if (lVar5 == 0) goto LAB_1059652e0;
    ppuStack_98 = (undefined **)0x1059663e4;
    ppuStack_90 = &PTR_FUN_1108c2948;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_88 = uVar8;
    lStack_80 = lVar5;
    func_0x000100906f18(*(undefined8 *)(*plVar7 + 0x10));
    func_0x000100904da8(ppuStack_90);
    func_0x00010090472c(&uStack_a8);
    pppuVar6 = *(undefined ****)(unaff_x19 + 0x28);
    func_0x00010bcceaec();
    func_0x000100904dbc(uStack_38);
    if ((bool)in_ZR) {
      return pppuVar6;
    }
  }
  ___stack_chk_fail();
  func_0x000105967a24();
LAB_1005529f0:
  *pppuVar6 = &PTR_DAT_1108c2920;
  func_0x0001000e30f4(pppuVar6 + 1);
  return pppuVar6;
}



/* Entry: 105965314; end: 105965317;  */

undefined8 * FUN_105965314(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108c2920;
  func_0x0001000e30f4(param_1 + 1);
  return param_1;
}



/* Entry: 105965318; end: 1059654f3;  */

undefined8 * FUN_105965318(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long unaff_x19;
  undefined4 unaff_w21;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_218;
  undefined1 auStack_210 [112];
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined1 auStack_178 [136];
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  byte *pbStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_58;
  
  func_0x000100927398();
  uStack_218 = param_1;
  uStack_58 = extraout_x8;
  FUN_105966214(auStack_210);
  lVar3 = param_3[1];
  uVar2 = *param_3;
  uStack_1a0 = uVar2;
  lStack_198 = lVar3;
  if (param_3[1] != 0) {
    do {
      func_0x000100904d1c();
    } while (extraout_w10 != 0);
  }
  func_0x000100927560();
  uStack_190 = uVar2;
  lStack_188 = lVar3;
  if (extraout_x8_00 != 0) {
    do {
      func_0x000100904d1c();
    } while (extraout_w10_00 != 0);
  }
  if ((*(byte *)(unaff_x19 + 0x48) & 1) == 0) {
    func_0x0001004b4e98();
    func_0x00010092757c();
    (*extraout_x8_01)();
    func_0x000105967c2c();
    puStack_180 = &UNK_10f31567c;
    FUN_105966478(auStack_178,&uStack_218);
    uStack_f0 = 0;
    uStack_e8 = SUB84(param_3,0);
    uStack_e4 = (undefined4)((ulong)param_3 >> 0x20);
    uStack_e0 = CONCAT31(uStack_e0._1_3_,1);
    lStack_c8 = lStack_188;
    uStack_d0 = uStack_190;
    uStack_d8 = unaff_w21;
    if (lStack_188 != 0) {
      do {
        func_0x000100904d1c();
      } while (extraout_w10_01 != 0);
    }
    pcStack_b8 = FUN_1059664ec;
    ppuStack_b0 = &PTR_FUN_1108c2960;
    puVar1 = (undefined8 *)0xc8;
    pbStack_c0 = (byte *)(unaff_x19 + 0x48);
    __Znwm();
    *puVar1 = puStack_180;
    FUN_105966478(puVar1 + 1,auStack_178);
    puVar1[0x13] = CONCAT44(uStack_e4,uStack_e8);
    puVar1[0x12] = uStack_f0;
    *(ulong *)((long)puVar1 + 0xa4) = CONCAT44(uStack_d8,uStack_dc);
    *(ulong *)((long)puVar1 + 0x9c) = CONCAT44(uStack_e0,uStack_e4);
    puVar1[0x17] = lStack_c8;
    puVar1[0x16] = uStack_d0;
    if (lStack_c8 != 0) {
      do {
        func_0x000100904d1c();
      } while (extraout_w10_02 != 0);
    }
    puVar1[0x18] = pbStack_c0;
    puStack_a8 = puVar1;
    func_0x0001009275b4();
    func_0x0001009275c0();
    func_0x0001059679d4();
    func_0x0001059664c0(&puStack_180);
  }
  func_0x000100902b24(&uStack_190);
  puVar1 = &uStack_218;
  FUN_1059654f4();
  func_0x000100904dbc(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001059679d4();
    func_0x0001059664c0(&puStack_180);
    func_0x000100902b24(&uStack_190);
    puVar1 = &uStack_218;
    FUN_1059654f4(puVar1);
    func_0x000105967a24();
    func_0x00010595cc04(puVar1 + 0xf);
    func_0x00010595cb7c(puVar1 + 1);
    return puVar1;
  }
  return puVar1;
}



/* Entry: 1059654f4; end: 10596551f;  */

long FUN_1059654f4(long param_1)

{
  func_0x00010595cc04(param_1 + 0x78);
  func_0x00010595cb7c(param_1 + 8);
  return param_1;
}



/* Entry: 105965520; end: 1059656f3;  */

undefined8 *
FUN_105965520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x19;
  long in_register_00005008;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [64];
  undefined8 uStack_170;
  long lStack_168;
  undefined *puStack_158;
  undefined1 auStack_150 [96];
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  byte *pbStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_58;
  
  puVar2 = &uStack_1d0;
  puVar3 = &uStack_1d0;
  func_0x000100927398();
  uStack_1d0 = param_2;
  uStack_58 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1c8);
  FUN_105966264(auStack_1b0,param_4);
  func_0x000100927560();
  uStack_170 = param_1;
  lStack_168 = in_register_00005008;
  if (extraout_x8_00 != 0) {
    do {
      func_0x000100904d1c();
    } while (extraout_w10 != 0);
  }
  if ((*(byte *)(unaff_x19 + 0x48) & 1) == 0) {
    func_0x0001004b4e98();
    func_0x00010092757c();
    (*extraout_x8_01)();
    func_0x000105967c2c();
    puStack_158 = &UNK_10f315691;
    FUN_10596664c(auStack_150,&uStack_1d0);
    uStack_f0 = 0;
    uStack_e8 = (undefined4)param_4;
    uStack_e4 = (undefined4)((ulong)param_4 >> 0x20);
    uStack_e0 = CONCAT31(uStack_e0._1_3_,1);
    uStack_d8 = SUB84(&uStack_1d0,0);
    lStack_c8 = lStack_168;
    uStack_d0 = uStack_170;
    if (lStack_168 != 0) {
      do {
        func_0x000100904d1c();
      } while (extraout_w10_00 != 0);
    }
    pcStack_b8 = FUN_1059666d4;
    ppuStack_b0 = &PTR_FUN_1108c2978;
    puVar1 = (undefined8 *)0xa0;
    pbStack_c0 = (byte *)(unaff_x19 + 0x48);
    __Znwm();
    *puVar1 = puStack_158;
    FUN_10596664c(puVar1 + 1,auStack_150);
    puVar1[0xe] = CONCAT44(uStack_e4,uStack_e8);
    puVar1[0xd] = uStack_f0;
    *(ulong *)((long)puVar1 + 0x7c) = CONCAT44(uStack_d8,uStack_dc);
    *(ulong *)((long)puVar1 + 0x74) = CONCAT44(uStack_e0,uStack_e4);
    puVar1[0x12] = lStack_c8;
    puVar1[0x11] = uStack_d0;
    if (lStack_c8 != 0) {
      do {
        func_0x000100904d1c();
      } while (extraout_w10_01 != 0);
    }
    puVar1[0x13] = pbStack_c0;
    puStack_a8 = puVar1;
    func_0x0001009275b4();
    func_0x0001009275c0();
    func_0x0001059679d4();
    FUN_1059666a8(&puStack_158);
  }
  func_0x000105967b74();
  FUN_1059656f4();
  func_0x000100904dbc(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001059679d4();
    FUN_1059666a8(&puStack_158);
    func_0x000105967b74();
    FUN_1059656f4(&uStack_1d0);
    func_0x000105967a24();
    func_0x00010595cba4((undefined1 *)((long)puVar3 + 0x20));
    func_0x000105967b28();
    return (undefined8 *)(undefined1 *)puVar3;
  }
  return puVar2;
}



/* Entry: 1059656f4; end: 10596571b;  */

long FUN_1059656f4(long param_1)

{
  func_0x00010595cba4(param_1 + 0x20);
  func_0x000105967b28();
  return param_1;
}



/* Entry: 10596571c; end: 1059658fb;  */

undefined8 *
FUN_10596571c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x19;
  undefined4 uVar2;
  long in_register_00005008;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [24];
  undefined4 uStack_198;
  undefined1 uStack_194;
  undefined1 auStack_190 [48];
  undefined8 uStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined1 auStack_148 [88];
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  byte *pbStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_58;
  
  func_0x000100927398();
  uStack_1b8 = param_2;
  uStack_58 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1b0);
  uVar2 = (undefined4)param_4;
  uStack_194 = (undefined1)((ulong)param_4 >> 0x20);
  uStack_198 = uVar2;
  FUN_105966300(auStack_190,param_5);
  func_0x000100927560();
  uStack_160 = param_1;
  lStack_158 = in_register_00005008;
  if (extraout_x8_00 != 0) {
    do {
      func_0x000100904d1c();
    } while (extraout_w10 != 0);
  }
  if ((*(byte *)(unaff_x19 + 0x48) & 1) == 0) {
    func_0x0001004b4e98();
    func_0x00010092757c();
    (*extraout_x8_01)();
    func_0x000105967c2c();
    puStack_150 = &UNK_10f3156a7;
    FUN_105966834(auStack_148,&uStack_1b8);
    uStack_f0 = 0;
    uStack_e8 = (undefined4)param_5;
    uStack_e4 = (undefined4)((ulong)param_5 >> 0x20);
    uStack_e0 = CONCAT31(uStack_e0._1_3_,1);
    lStack_c8 = lStack_158;
    uStack_d0 = uStack_160;
    uStack_d8 = uVar2;
    if (lStack_158 != 0) {
      do {
        func_0x000100904d1c();
      } while (extraout_w10_00 != 0);
    }
    pcStack_b8 = FUN_1059668a0;
    ppuStack_b0 = &PTR_FUN_1108c2990;
    puVar1 = (undefined8 *)0x98;
    pbStack_c0 = (byte *)(unaff_x19 + 0x48);
    __Znwm();
    *puVar1 = puStack_150;
    FUN_105966834(puVar1 + 1,auStack_148);
    puVar1[0xd] = CONCAT44(uStack_e4,uStack_e8);
    puVar1[0xc] = uStack_f0;
    *(ulong *)((long)puVar1 + 0x74) = CONCAT44(uStack_d8,uStack_dc);
    *(ulong *)((long)puVar1 + 0x6c) = CONCAT44(uStack_e0,uStack_e4);
    puVar1[0x11] = lStack_c8;
    puVar1[0x10] = uStack_d0;
    if (lStack_c8 != 0) {
      do {
        func_0x000100904d1c();
      } while (extraout_w10_01 != 0);
    }
    puVar1[0x12] = pbStack_c0;
    puStack_a8 = puVar1;
    func_0x0001009275b4();
    func_0x0001009275c0();
    func_0x0001059679d4();
    FUN_105966874(&puStack_150);
  }
  func_0x000105967b74();
  puVar1 = &uStack_1b8;
  FUN_1059658fc();
  func_0x000100904dbc(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001059679d4();
    FUN_105966874(&puStack_150);
    func_0x000105967b74();
    puVar1 = &uStack_1b8;
    FUN_1059658fc(puVar1);
    func_0x000105967a24();
    func_0x00010595cbd4(puVar1 + 5);
    func_0x000105967b28();
    return puVar1;
  }
  return puVar1;
}



/* Entry: 1059658fc; end: 105965923;  */

long FUN_1059658fc(long param_1)

{
  func_0x00010595cbd4(param_1 + 0x28);
  func_0x000105967b28();
  return param_1;
}



/* Entry: 105965924; end: 105965ad7;  */

void FUN_105965924(code *param_1,undefined8 param_2,code **param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 in_ZR;
  code **ppcVar1;
  code **ppcVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  code *extraout_x8_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  long unaff_x19;
  code **unaff_x20;
  code **unaff_x21;
  code **unaff_x23;
  code **unaff_x24;
  code *unaff_x26;
  undefined8 uVar5;
  code *in_register_00005008;
  undefined8 uVar6;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  code **ppcStack_2f0;
  code **ppcStack_2e8;
  undefined1 *puStack_2e0;
  code **ppcStack_2d8;
  code **ppcStack_2d0;
  code **ppcStack_2c8;
  undefined1 **ppuStack_2c0;
  code *pcStack_2b8;
  code **ppcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  code *apcStack_270 [2];
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 *puStack_220;
  code *pcStack_218;
  undefined **ppuStack_210;
  code **ppcStack_208;
  undefined8 uStack_1b8;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  code *apcStack_148 [3];
  code *pcStack_130;
  code *pcStack_128;
  code *pcStack_118;
  undefined1 auStack_110 [32];
  code *pcStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  code *pcStack_d0;
  code *pcStack_c8;
  code *pcStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  code **ppcStack_a8;
  undefined8 uStack_58;
  
  func_0x000100927398();
  ppcVar1 = apcStack_148;
  uStack_150 = param_2;
  uStack_58 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x000100927560();
  pcStack_130 = param_1;
  pcStack_128 = in_register_00005008;
  if (extraout_x8_00 != 0) {
    do {
      func_0x000100904d1c();
    } while (extraout_w10 != 0);
  }
  pcVar3 = (code *)(unaff_x19 + 0x48);
  if (((byte)*pcVar3 & 1) == 0) {
    func_0x0001004b4e98();
    func_0x00010092757c();
    (*extraout_x8_01)();
    func_0x000105967c2c();
    pcStack_118 = (code *)&UNK_10f3156be;
    unaff_x23 = &pcStack_118;
    FUN_105966a08(auStack_110,&uStack_150);
    unaff_x24 = &pcStack_118;
    pcStack_f0 = (code *)0x0;
    uStack_e8 = SUB84(unaff_x20,0);
    uStack_e4 = (undefined4)((ulong)unaff_x20 >> 0x20);
    uStack_e0 = CONCAT31(uStack_e0._1_3_,1);
    uStack_d8 = SUB84(unaff_x21,0);
    pcStack_c8 = pcStack_128;
    pcStack_d0 = pcStack_130;
    if (pcStack_128 != (code *)0x0) {
      do {
        func_0x000100904d1c();
      } while (extraout_w10_00 != 0);
    }
    pcStack_b8 = FUN_105966a48;
    ppuStack_b0 = &PTR_FUN_1108c29a8;
    unaff_x20 = (code **)0x60;
    pcStack_c0 = pcVar3;
    __Znwm();
    *unaff_x20 = pcStack_118;
    FUN_105966a08(unaff_x20 + 1,auStack_110);
    unaff_x20[6] = (code *)CONCAT44(uStack_e4,uStack_e8);
    unaff_x20[5] = pcStack_f0;
    *(ulong *)((long)unaff_x20 + 0x3c) = CONCAT44(uStack_d8,uStack_dc);
    *(ulong *)((long)unaff_x20 + 0x34) = CONCAT44(uStack_e0,uStack_e4);
    unaff_x20[10] = pcStack_c8;
    unaff_x20[9] = pcStack_d0;
    if (pcStack_c8 != (code *)0x0) {
      do {
        func_0x000100904d1c();
      } while (extraout_w10_01 != 0);
    }
    unaff_x21 = &pcStack_b8;
    unaff_x20[0xb] = pcStack_c0;
    ppcStack_a8 = unaff_x20;
    func_0x0001009275b4();
    param_3 = &pcStack_b8;
    func_0x0001009275c0();
    func_0x000100904da8(ppuStack_b0);
    ppcVar1 = &pcStack_118;
    func_0x000105966a24();
  }
  func_0x000100927740();
  func_0x000105967bb4();
  func_0x000100904dbc(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000100904da8(ppuStack_b0);
  ppcVar2 = &pcStack_118;
  func_0x000105966a24();
  func_0x000100927740();
  func_0x000105967bb4();
  func_0x000105967a24();
  pcStack_158 = FUN_105965ad8;
  puStack_160 = &stack0xfffffffffffffff0;
  func_0x000100927398();
  pcVar4 = param_3[1];
  uStack_1b8 = extraout_x8_02;
  func_0x000105967b8c(*param_3);
  uStack_298 = uStack_288;
  uStack_2a0 = uStack_290;
  uStack_290 = 0;
  uStack_288 = 0;
  ppcStack_2a8 = ppcVar1;
  func_0x000100927560();
  if (extraout_x8_03 != 0) {
    do {
      func_0x000100904d1c();
    } while (extraout_w10_02 != 0);
  }
  func_0x00010092756c();
  if ((extraout_x8_04 & 1) == 0) {
    func_0x0001004b4e98();
    func_0x00010092757c();
    (*extraout_x8_05)();
    unaff_x23 = (code **)&UNK_10f3156f2;
    func_0x000105967a40();
    if (unaff_x20 != (code **)0x0) {
      do {
        func_0x000100904d1c();
      } while (extraout_w10_03 != 0);
    }
    pcStack_218 = FUN_105966dac;
    ppuStack_210 = &PTR_FUN_1108c2a98;
    puStack_220 = (undefined1 *)&uStack_150;
    func_0x000100927594();
    *ppcVar2 = (code *)&UNK_10f3156f2;
    ppcVar2[1] = (code *)unaff_x24;
    ppcVar2[2] = pcVar3;
    ppcVar2[3] = unaff_x26;
    uStack_260 = 0;
    uStack_258 = 0;
    func_0x00010092759c();
    if (unaff_x20 != (code **)0x0) {
      do {
        func_0x000100904d1c();
      } while (extraout_w10_04 != 0);
    }
    unaff_x20 = &pcStack_218;
    ppcVar2[10] = (code *)&uStack_150;
    ppcStack_208 = ppcVar2;
    func_0x0001009275b4();
    param_3 = &pcStack_218;
    func_0x0001009275c0();
    func_0x000100927704(ppuStack_210);
    ppcVar2 = apcStack_270;
    func_0x000105966d88();
  }
  func_0x000105967b38();
  func_0x000105967b30();
  func_0x000105967b84();
  func_0x000100904dbc(uStack_1b8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000100927704(ppuStack_210);
    ppcVar1 = apcStack_270;
    func_0x000105966d88();
    func_0x000105967b38();
    func_0x000105967b30();
    func_0x000105967b84();
    func_0x000105967a24();
    pcStack_2b8 = FUN_105965c2c;
    pcVar3 = (code *)0x40;
    ppcStack_2f0 = unaff_x24;
    ppcStack_2e8 = unaff_x23;
    puStack_2e0 = (undefined1 *)&uStack_150;
    ppcStack_2d8 = unaff_x21;
    ppcStack_2d0 = unaff_x20;
    ppcStack_2c8 = ppcVar2;
    ppuStack_2c0 = &puStack_160;
    __Znwm();
    *(undefined8 *)(pcVar3 + 8) = 0;
    *(undefined8 *)(pcVar3 + 0x10) = 0;
    *(undefined ***)pcVar3 = &PTR_DAT_1108c2a00;
    if (pcVar4 != (code *)0x0) {
      do {
        func_0x000100904d1c();
      } while (extraout_w10_05 != 0);
    }
    uVar6 = param_5[1];
    uVar5 = *param_5;
    if (param_5[1] != 0) {
      do {
        func_0x000100904d1c();
      } while (extraout_w10_06 != 0);
    }
    *(undefined ***)(pcVar3 + 0x18) = &PTR_DAT_1108c2a50;
    *(code ***)(pcVar3 + 0x20) = param_3;
    *(code **)(pcVar3 + 0x28) = pcVar4;
    uStack_300 = 0;
    uStack_2f8 = 0;
    *(undefined8 *)(pcVar3 + 0x38) = uVar6;
    *(undefined8 *)(pcVar3 + 0x30) = uVar5;
    uStack_310 = 0;
    uStack_308 = 0;
    func_0x000100558bb4(&uStack_310);
    FUN_10595ccc0(&uStack_300);
    *ppcVar1 = pcVar3 + 0x18;
    ppcVar1[1] = pcVar3;
    return;
  }
  return;
}



/* Entry: 105965ad8; end: 105965c2b;  */

void FUN_105965ad8(undefined8 *param_1,code **param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long unaff_x20;
  undefined8 unaff_x22;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 auStack_120 [2];
  undefined8 uStack_110;
  undefined8 uStack_108;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_68;
  
  func_0x000100927398();
  pcVar3 = param_2[1];
  uStack_68 = extraout_x8;
  func_0x000105967b8c(*param_2);
  func_0x000100927560();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000100904d1c();
    } while (extraout_w10 != 0);
  }
  func_0x00010092756c();
  if ((extraout_x8_01 & 1) == 0) {
    func_0x0001004b4e98();
    func_0x00010092757c();
    (*extraout_x8_02)();
    func_0x000105967a40();
    if (unaff_x20 != 0) {
      do {
        func_0x000100904d1c();
      } while (extraout_w10_00 != 0);
    }
    pcStack_c8 = FUN_105966dac;
    ppuStack_c0 = &PTR_FUN_1108c2a98;
    func_0x000100927594();
    *param_1 = &UNK_10f3156f2;
    param_1[1] = unaff_x24;
    param_1[2] = unaff_x25;
    param_1[3] = unaff_x26;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010092759c();
    if (unaff_x20 != 0) {
      do {
        func_0x000100904d1c();
      } while (extraout_w10_01 != 0);
    }
    param_1[10] = unaff_x22;
    puStack_b8 = param_1;
    func_0x0001009275b4();
    param_2 = &pcStack_c8;
    func_0x0001009275c0();
    func_0x000100927704(ppuStack_c0);
    func_0x000105966d88();
  }
  func_0x000105967b38();
  func_0x000105967b30();
  func_0x000105967b84();
  func_0x000100904dbc(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000100927704(ppuStack_c0);
    puVar1 = auStack_120;
    func_0x000105966d88();
    func_0x000105967b38();
    func_0x000105967b30();
    func_0x000105967b84();
    func_0x000105967a24();
    puVar2 = (undefined8 *)0x40;
    __Znwm();
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_DAT_1108c2a00;
    if (pcVar3 != (code *)0x0) {
      do {
        func_0x000100904d1c();
      } while (extraout_w10_02 != 0);
    }
    uVar5 = param_4[1];
    uVar4 = *param_4;
    if (param_4[1] != 0) {
      do {
        func_0x000100904d1c();
      } while (extraout_w10_03 != 0);
    }
    puVar2[3] = &PTR_DAT_1108c2a50;
    puVar2[4] = param_2;
    puVar2[5] = pcVar3;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    puVar2[7] = uVar5;
    puVar2[6] = uVar4;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    func_0x000100558bb4(&uStack_1c0);
    FUN_10595ccc0(&uStack_1b0);
    *puVar1 = puVar2 + 3;
    puVar1[1] = puVar2;
    return;
  }
  return;
}



/* Entry: 105965c2c; end: 105965ce3;  */

void FUN_105965c2c(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_1108c2a00;
  if (param_3 != 0) {
    do {
      func_0x000100904d1c();
    } while (extraout_w10 != 0);
  }
  uVar3 = param_4[1];
  uVar2 = *param_4;
  if (param_4[1] != 0) {
    do {
      func_0x000100904d1c();
    } while (extraout_w10_00 != 0);
  }
  puVar1[3] = &PTR_DAT_1108c2a50;
  puVar1[4] = param_2;
  puVar1[5] = param_3;
  uStack_50 = 0;
  uStack_48 = 0;
  puVar1[7] = uVar3;
  puVar1[6] = uVar2;
  uStack_60 = 0;
  uStack_58 = 0;
  func_0x000100558bb4(&uStack_60);
  FUN_10595ccc0(&uStack_50);
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 105965ce4; end: 105965e37;  */

undefined8 * FUN_105965ce4(undefined8 *param_1,code **param_2)

{
  byte *pbVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined1 in_ZR;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  code **ppcVar9;
  undefined8 *puVar10;
  code *pcVar11;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  code *extraout_x8_02;
  undefined8 extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  undefined8 extraout_x8_06;
  long extraout_x8_07;
  code *extraout_x8_08;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  code **unaff_x20;
  undefined8 unaff_x22;
  long lVar12;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  long lStack_388;
  undefined *puStack_378;
  undefined8 *puStack_370;
  code **ppcStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 uStack_350;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  byte *pbStack_320;
  code *pcStack_318;
  undefined **ppuStack_310;
  undefined8 *puStack_308;
  undefined8 uStack_2b8;
  code *pcStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  byte *pbStack_200;
  code *pcStack_1f8;
  undefined **ppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined8 uStack_1c4;
  undefined8 uStack_1b8;
  long lStack_1b0;
  byte *pbStack_1a8;
  undefined8 uStack_198;
  undefined8 auStack_120 [2];
  undefined8 uStack_110;
  undefined8 uStack_108;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_68;
  
  func_0x000100927398();
  pcVar11 = param_2[1];
  uStack_68 = extraout_x8;
  func_0x000105967b8c(*param_2);
  func_0x000100927560();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000100904d1c();
    } while (extraout_w10 != 0);
  }
  func_0x00010092756c();
  if ((extraout_x8_01 & 1) == 0) {
    func_0x0001004b4e98();
    func_0x00010092757c();
    (*extraout_x8_02)();
    func_0x000105967a40();
    if (unaff_x20 != (code **)0x0) {
      do {
        func_0x000100904d1c();
      } while (extraout_w10_00 != 0);
    }
    pcStack_c8 = FUN_105966f64;
    ppuStack_c0 = &PTR_FUN_1108c2ab0;
    func_0x000100927594();
    *param_1 = &UNK_10f315707;
    param_1[1] = unaff_x24;
    param_1[2] = unaff_x25;
    param_1[3] = unaff_x26;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010092759c();
    if (unaff_x20 != (code **)0x0) {
      do {
        func_0x000100904d1c();
      } while (extraout_w10_01 != 0);
    }
    unaff_x20 = &pcStack_c8;
    param_1[10] = unaff_x22;
    puStack_b8 = param_1;
    func_0x0001009275b4();
    param_2 = &pcStack_c8;
    func_0x0001009275c0();
    func_0x000100927704(ppuStack_c0);
    param_1 = auStack_120;
    FUN_105966f40();
  }
  func_0x000105967b38();
  func_0x000105967b30();
  func_0x000105967b84();
  func_0x000100904dbc(uStack_68);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000100927704(ppuStack_c0);
  puVar7 = auStack_120;
  FUN_105966f40();
  func_0x000105967b38();
  func_0x000105967b30();
  func_0x000105967b84();
  func_0x000105967a24();
  func_0x000100927398();
  lVar12 = puVar7[0xb];
  uVar13 = puVar7[10];
  uStack_198 = extraout_x8_03;
  if (puVar7[0xb] != 0) {
    do {
      func_0x000100904d1c();
    } while (extraout_w10_02 != 0);
  }
  pbVar1 = (byte *)(param_1 + 9);
  if ((*pbVar1 & 1) == 0) {
    func_0x0001004b4e98();
    uVar6 = SUB84(puVar7,0);
    func_0x00010092757c();
    (*extraout_x8_04)();
    pcStack_240 = (code *)&UNK_10f315718;
    uStack_230 = 0;
    uStack_228 = SUB84(unaff_x20,0);
    uStack_224 = (undefined4)((ulong)unaff_x20 >> 0x20);
    uStack_220 = CONCAT31(uStack_220._1_3_,1);
    if (lVar12 != 0) {
      plVar2 = (long *)(lVar12 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pcStack_1f8 = FUN_1059670f8;
    ppuStack_1f0 = &PTR_FUN_1108c2ac8;
    puStack_1e8 = &UNK_10f315718;
    uStack_1d8 = 0;
    uStack_1c4 = CONCAT44(uVar6,uStack_21c);
    uStack_1cc = uStack_224;
    uStack_1c8 = uStack_220;
    puStack_238 = param_1;
    uStack_218 = uVar6;
    uStack_210 = uVar13;
    lStack_208 = lVar12;
    pbStack_200 = pbVar1;
    puStack_1e0 = param_1;
    uStack_1d0 = uStack_228;
    uStack_1b8 = uVar13;
    lStack_1b0 = lVar12;
    if (lVar12 != 0) {
      do {
        func_0x000100904d1c();
      } while (extraout_w10_03 != 0);
    }
    unaff_x20 = &pcStack_240;
    pbStack_1a8 = pbVar1;
    func_0x000100904d38();
    param_2 = &pcStack_1f8;
    (*extraout_x8_05)();
    (*(code *)*ppuStack_1f0)(&ppuStack_1f0);
    puVar7 = &uStack_210;
    func_0x000100902b24();
  }
  func_0x000100904db4();
  func_0x000100904dbc(uStack_198);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_1f0)(&ppuStack_1f0);
    func_0x000100902b24(unaff_x20 + 6);
    func_0x000100904db4();
    func_0x000105967a24();
    func_0x000100927398();
    lVar12 = *(long *)(pcVar11 + 8);
    uVar15 = *(undefined8 *)(pcVar11 + 8);
    uVar13 = *(undefined8 *)pcVar11;
    puVar8 = (undefined8 *)0x40;
    uStack_2b8 = extraout_x8_06;
    __Znwm();
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_DAT_1108c2af0;
    if (lVar12 != 0) {
      do {
        func_0x000100904d1c();
      } while (extraout_w10_04 != 0);
    }
    lVar12 = puVar7[8];
    uVar14 = puVar7[7];
    if (puVar7[8] != 0) {
      do {
        func_0x000100904d1c();
      } while (extraout_w10_05 != 0);
    }
    puVar8[3] = &PTR_DAT_1108c2b40;
    pcStack_318 = (code *)0x0;
    ppuStack_310 = (undefined **)0x0;
    puVar8[5] = uVar15;
    puVar8[4] = uVar13;
    puVar8[7] = lVar12;
    puVar8[6] = uVar14;
    puStack_378 = (undefined *)0x0;
    puStack_370 = (undefined8 *)0x0;
    func_0x000100558bb4(&puStack_378);
    ppcVar9 = &pcStack_318;
    func_0x00010595cce4();
    uStack_3a0 = 0;
    uStack_398 = 0;
    puStack_3b0 = puVar8 + 3;
    puStack_3a8 = puVar8;
    func_0x000100927560();
    uVar6 = SUB84(ppcVar9,0);
    uStack_390 = uVar14;
    lStack_388 = lVar12;
    if (extraout_x8_07 != 0) {
      do {
        func_0x000100904d1c();
        uVar6 = SUB84(ppcVar9,0);
      } while (extraout_w10_06 != 0);
    }
    pbVar1 = (byte *)(puVar7 + 9);
    if ((*pbVar1 & 1) == 0) {
      func_0x0001004b4e98();
      func_0x00010092757c();
      (*extraout_x8_08)();
      lVar12 = lStack_388;
      uVar13 = uStack_390;
      puVar5 = puStack_3a8;
      puVar8 = puStack_3b0;
      puStack_378 = &UNK_10f315727;
      puStack_360 = puStack_3b0;
      puStack_358 = puStack_3a8;
      puStack_3b0 = (undefined8 *)0x0;
      puStack_3a8 = (undefined8 *)0x0;
      uStack_350 = 0;
      uStack_348 = SUB84(param_2,0);
      uStack_344 = (undefined4)((ulong)param_2 >> 0x20);
      uStack_340 = CONCAT31(uStack_340._1_3_,1);
      uStack_330 = uStack_390;
      lStack_328 = lStack_388;
      puStack_370 = puVar7;
      ppcStack_368 = param_2;
      uStack_338 = uVar6;
      if (lStack_388 != 0) {
        do {
          func_0x000100904d1c();
        } while (extraout_w10_07 != 0);
      }
      pcStack_318 = FUN_105967810;
      ppuStack_310 = &PTR_FUN_1108c2b88;
      puVar10 = (undefined8 *)0x60;
      pbStack_320 = pbVar1;
      __Znwm();
      *puVar10 = &UNK_10f315727;
      puVar10[2] = param_2;
      puVar10[1] = puVar7;
      puVar10[3] = puVar8;
      puVar10[4] = puVar5;
      puStack_360 = (undefined8 *)0x0;
      puStack_358 = (undefined8 *)0x0;
      puVar10[6] = CONCAT44(uStack_344,uStack_348);
      puVar10[5] = uStack_350;
      *(ulong *)((long)puVar10 + 0x3c) = CONCAT44(uStack_338,uStack_33c);
      *(ulong *)((long)puVar10 + 0x34) = CONCAT44(uStack_340,uStack_344);
      puVar10[9] = uVar13;
      puVar10[10] = lVar12;
      if (lVar12 != 0) {
        do {
          func_0x000100904d1c();
        } while (extraout_w10_08 != 0);
      }
      puVar10[0xb] = pbVar1;
      puStack_308 = puVar10;
      func_0x0001009275b4();
      func_0x0001009275c0();
      func_0x000100927704(ppuStack_310);
      func_0x0001059677ec(&puStack_378);
    }
    func_0x000100902b24(&uStack_390);
    func_0x0001059677c8(&puStack_3b0);
    puVar7 = &uStack_3a0;
    func_0x0001059677c8();
    func_0x000100904dbc(uStack_2b8);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000100927704(ppuStack_310);
      func_0x0001059677ec(&puStack_378);
      func_0x000100902b24(&uStack_390);
      func_0x0001059677c8(&puStack_3b0);
      puVar7 = &uStack_3a0;
      func_0x0001059677c8();
      func_0x000105967a24();
      *puVar7 = &PTR_FUN_1108c27e8;
      func_0x000100902b24(puVar7 + 10);
      func_0x000100558bb4(puVar7 + 7);
      func_0x000100450be4(puVar7 + 5);
      func_0x0001009046e4(puVar7 + 3);
      func_0x000100904708(puVar7 + 1);
      return puVar7;
    }
    return puVar7;
  }
  return puVar7;
}



/* Entry: 105965e38; end: 105965f93;  */

undefined8 * FUN_105965e38(undefined8 *param_1,code **param_2,undefined8 *param_3)

{
  byte *pbVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined1 in_ZR;
  undefined4 uVar6;
  undefined8 *puVar7;
  code **ppcVar8;
  undefined8 *puVar9;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  long unaff_x19;
  undefined **unaff_x20;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined *puStack_218;
  undefined8 *puStack_210;
  code **ppcStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  byte *pbStack_1c0;
  code *pcStack_1b8;
  undefined **ppuStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_158;
  undefined *puStack_e0;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b0;
  long lStack_a8;
  byte *pbStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  undefined8 uStack_58;
  long lStack_50;
  byte *pbStack_48;
  undefined8 uStack_38;
  
  func_0x000100927398();
  lVar10 = param_1[0xb];
  uVar11 = param_1[10];
  uStack_38 = extraout_x8;
  if (param_1[0xb] != 0) {
    do {
      func_0x000100904d1c();
    } while (extraout_w10 != 0);
  }
  pbVar1 = (byte *)(unaff_x19 + 0x48);
  if ((*pbVar1 & 1) == 0) {
    func_0x0001004b4e98();
    uVar6 = SUB84(param_1,0);
    func_0x00010092757c();
    (*extraout_x8_00)();
    puStack_e0 = &UNK_10f315718;
    uStack_c4 = (undefined4)((ulong)unaff_x20 >> 0x20);
    uStack_c0 = CONCAT31(uStack_c0._1_3_,1);
    if (lVar10 != 0) {
      plVar2 = (long *)(lVar10 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pcStack_98 = FUN_1059670f8;
    ppuStack_90 = &PTR_FUN_1108c2ac8;
    puStack_88 = &UNK_10f315718;
    uStack_70 = SUB84(unaff_x20,0);
    uStack_78 = 0;
    uStack_64 = CONCAT44(uVar6,uStack_bc);
    uStack_6c = uStack_c4;
    uStack_68 = uStack_c0;
    uStack_b0 = uVar11;
    lStack_a8 = lVar10;
    pbStack_a0 = pbVar1;
    uStack_58 = uVar11;
    lStack_50 = lVar10;
    if (lVar10 != 0) {
      do {
        func_0x000100904d1c();
      } while (extraout_w10_00 != 0);
    }
    unaff_x20 = &puStack_e0;
    pbStack_48 = pbVar1;
    func_0x000100904d38();
    param_2 = &pcStack_98;
    (*extraout_x8_01)();
    (*(code *)*ppuStack_90)(&ppuStack_90);
    param_1 = &uStack_b0;
    func_0x000100902b24();
  }
  func_0x000100904db4();
  func_0x000100904dbc(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_90)(&ppuStack_90);
    func_0x000100902b24(unaff_x20 + 6);
    func_0x000100904db4();
    func_0x000105967a24();
    func_0x000100927398();
    lVar10 = param_3[1];
    uVar13 = param_3[1];
    uVar11 = *param_3;
    puVar7 = (undefined8 *)0x40;
    uStack_158 = extraout_x8_02;
    __Znwm();
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_DAT_1108c2af0;
    if (lVar10 != 0) {
      do {
        func_0x000100904d1c();
      } while (extraout_w10_01 != 0);
    }
    lVar10 = param_1[8];
    uVar12 = param_1[7];
    if (param_1[8] != 0) {
      do {
        func_0x000100904d1c();
      } while (extraout_w10_02 != 0);
    }
    puVar7[3] = &PTR_DAT_1108c2b40;
    pcStack_1b8 = (code *)0x0;
    ppuStack_1b0 = (undefined **)0x0;
    puVar7[5] = uVar13;
    puVar7[4] = uVar11;
    puVar7[7] = lVar10;
    puVar7[6] = uVar12;
    puStack_218 = (undefined *)0x0;
    puStack_210 = (undefined8 *)0x0;
    func_0x000100558bb4(&puStack_218);
    ppcVar8 = &pcStack_1b8;
    func_0x00010595cce4();
    uStack_240 = 0;
    uStack_238 = 0;
    puStack_250 = puVar7 + 3;
    puStack_248 = puVar7;
    func_0x000100927560();
    uVar6 = SUB84(ppcVar8,0);
    uStack_230 = uVar12;
    lStack_228 = lVar10;
    if (extraout_x8_03 != 0) {
      do {
        func_0x000100904d1c();
        uVar6 = SUB84(ppcVar8,0);
      } while (extraout_w10_03 != 0);
    }
    pbVar1 = (byte *)(param_1 + 9);
    if ((*pbVar1 & 1) == 0) {
      func_0x0001004b4e98();
      func_0x00010092757c();
      (*extraout_x8_04)();
      lVar10 = lStack_228;
      uVar11 = uStack_230;
      puVar5 = puStack_248;
      puVar7 = puStack_250;
      puStack_218 = &UNK_10f315727;
      puStack_200 = puStack_250;
      puStack_1f8 = puStack_248;
      puStack_250 = (undefined8 *)0x0;
      puStack_248 = (undefined8 *)0x0;
      uStack_1f0 = 0;
      uStack_1e8 = SUB84(param_2,0);
      uStack_1e4 = (undefined4)((ulong)param_2 >> 0x20);
      uStack_1e0 = CONCAT31(uStack_1e0._1_3_,1);
      uStack_1d0 = uStack_230;
      lStack_1c8 = lStack_228;
      puStack_210 = param_1;
      ppcStack_208 = param_2;
      uStack_1d8 = uVar6;
      if (lStack_228 != 0) {
        do {
          func_0x000100904d1c();
        } while (extraout_w10_04 != 0);
      }
      pcStack_1b8 = FUN_105967810;
      ppuStack_1b0 = &PTR_FUN_1108c2b88;
      puVar9 = (undefined8 *)0x60;
      pbStack_1c0 = pbVar1;
      __Znwm();
      *puVar9 = &UNK_10f315727;
      puVar9[2] = param_2;
      puVar9[1] = param_1;
      puVar9[3] = puVar7;
      puVar9[4] = puVar5;
      puStack_200 = (undefined8 *)0x0;
      puStack_1f8 = (undefined8 *)0x0;
      puVar9[6] = CONCAT44(uStack_1e4,uStack_1e8);
      puVar9[5] = uStack_1f0;
      *(ulong *)((long)puVar9 + 0x3c) = CONCAT44(uStack_1d8,uStack_1dc);
      *(ulong *)((long)puVar9 + 0x34) = CONCAT44(uStack_1e0,uStack_1e4);
      puVar9[9] = uVar11;
      puVar9[10] = lVar10;
      if (lVar10 != 0) {
        do {
          func_0x000100904d1c();
        } while (extraout_w10_05 != 0);
      }
      puVar9[0xb] = pbVar1;
      puStack_1a8 = puVar9;
      func_0x0001009275b4();
      func_0x0001009275c0();
      func_0x000100927704(ppuStack_1b0);
      func_0x0001059677ec(&puStack_218);
    }
    func_0x000100902b24(&uStack_230);
    func_0x0001059677c8(&puStack_250);
    puVar7 = &uStack_240;
    func_0x0001059677c8();
    func_0x000100904dbc(uStack_158);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000100927704(ppuStack_1b0);
      func_0x0001059677ec(&puStack_218);
      func_0x000100902b24(&uStack_230);
      func_0x0001059677c8(&puStack_250);
      puVar7 = &uStack_240;
      func_0x0001059677c8();
      func_0x000105967a24();
      *puVar7 = &PTR_FUN_1108c27e8;
      func_0x000100902b24(puVar7 + 10);
      func_0x000100558bb4(puVar7 + 7);
      func_0x000100450be4(puVar7 + 5);
      func_0x0001009046e4(puVar7 + 3);
      func_0x000100904708(puVar7 + 1);
      return puVar7;
    }
    return puVar7;
  }
  return param_1;
}



/* Entry: 105965f94; end: 1059661d7;  */

undefined8 * FUN_105965f94(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined1 in_ZR;
  undefined4 uVar3;
  undefined8 *puVar4;
  code **ppcVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long unaff_x19;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined *puStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  byte *pbStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_68;
  
  func_0x000100927398();
  lVar7 = param_3[1];
  uVar10 = param_3[1];
  uVar8 = *param_3;
  puVar4 = (undefined8 *)0x40;
  uStack_68 = extraout_x8;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1108c2af0;
  if (lVar7 != 0) {
    do {
      func_0x000100904d1c();
    } while (extraout_w10 != 0);
  }
  lVar7 = *(long *)(unaff_x19 + 0x40);
  uVar9 = *(undefined8 *)(unaff_x19 + 0x38);
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    do {
      func_0x000100904d1c();
    } while (extraout_w10_00 != 0);
  }
  puVar4[3] = &PTR_DAT_1108c2b40;
  pcStack_c8 = (code *)0x0;
  ppuStack_c0 = (undefined **)0x0;
  puVar4[5] = uVar10;
  puVar4[4] = uVar8;
  puVar4[7] = lVar7;
  puVar4[6] = uVar9;
  puStack_128 = (undefined *)0x0;
  lStack_120 = 0;
  func_0x000100558bb4(&puStack_128);
  ppcVar5 = &pcStack_c8;
  func_0x00010595cce4();
  uStack_150 = 0;
  uStack_148 = 0;
  puStack_160 = puVar4 + 3;
  puStack_158 = puVar4;
  func_0x000100927560();
  uVar3 = SUB84(ppcVar5,0);
  uStack_140 = uVar9;
  lStack_138 = lVar7;
  if (extraout_x8_00 != 0) {
    do {
      func_0x000100904d1c();
      uVar3 = SUB84(ppcVar5,0);
    } while (extraout_w10_01 != 0);
  }
  pbVar1 = (byte *)(unaff_x19 + 0x48);
  if ((*pbVar1 & 1) == 0) {
    func_0x0001004b4e98();
    func_0x00010092757c();
    (*extraout_x8_01)();
    lVar7 = lStack_138;
    uVar8 = uStack_140;
    puVar2 = puStack_158;
    puVar4 = puStack_160;
    puStack_128 = &UNK_10f315727;
    puStack_110 = puStack_160;
    puStack_108 = puStack_158;
    puStack_160 = (undefined8 *)0x0;
    puStack_158 = (undefined8 *)0x0;
    uStack_100 = 0;
    uStack_f8 = (undefined4)param_2;
    uStack_f4 = (undefined4)((ulong)param_2 >> 0x20);
    uStack_f0 = CONCAT31(uStack_f0._1_3_,1);
    uStack_e0 = uStack_140;
    lStack_d8 = lStack_138;
    lStack_120 = unaff_x19;
    uStack_118 = param_2;
    uStack_e8 = uVar3;
    if (lStack_138 != 0) {
      do {
        func_0x000100904d1c();
      } while (extraout_w10_02 != 0);
    }
    pcStack_c8 = FUN_105967810;
    ppuStack_c0 = &PTR_FUN_1108c2b88;
    puVar6 = (undefined8 *)0x60;
    pbStack_d0 = pbVar1;
    __Znwm();
    *puVar6 = &UNK_10f315727;
    puVar6[2] = param_2;
    puVar6[1] = unaff_x19;
    puVar6[3] = puVar4;
    puVar6[4] = puVar2;
    puStack_110 = (undefined8 *)0x0;
    puStack_108 = (undefined8 *)0x0;
    puVar6[6] = CONCAT44(uStack_f4,uStack_f8);
    puVar6[5] = uStack_100;
    *(ulong *)((long)puVar6 + 0x3c) = CONCAT44(uStack_e8,uStack_ec);
    *(ulong *)((long)puVar6 + 0x34) = CONCAT44(uStack_f0,uStack_f4);
    puVar6[9] = uVar8;
    puVar6[10] = lVar7;
    if (lVar7 != 0) {
      do {
        func_0x000100904d1c();
      } while (extraout_w10_03 != 0);
    }
    puVar6[0xb] = pbVar1;
    puStack_b8 = puVar6;
    func_0x0001009275b4();
    func_0x0001009275c0();
    func_0x000100927704(ppuStack_c0);
    func_0x0001059677ec(&puStack_128);
  }
  func_0x000100902b24(&uStack_140);
  func_0x0001059677c8(&puStack_160);
  puVar4 = &uStack_150;
  func_0x0001059677c8();
  func_0x000100904dbc(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000100927704(ppuStack_c0);
    func_0x0001059677ec(&puStack_128);
    func_0x000100902b24(&uStack_140);
    func_0x0001059677c8(&puStack_160);
    puVar4 = &uStack_150;
    func_0x0001059677c8();
    func_0x000105967a24();
    *puVar4 = &PTR_FUN_1108c27e8;
    func_0x000100902b24(puVar4 + 10);
    func_0x000100558bb4(puVar4 + 7);
    func_0x000100450be4(puVar4 + 5);
    func_0x0001009046e4(puVar4 + 3);
    func_0x000100904708(puVar4 + 1);
    return puVar4;
  }
  return puVar4;
}



/* Entry: 1059661d8; end: 1059661db;  */

undefined8 * FUN_1059661d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c27e8;
  func_0x000100902b24(param_1 + 10);
  func_0x000100558bb4(param_1 + 7);
  func_0x000100450be4(param_1 + 5);
  func_0x0001009046e4(param_1 + 3);
  func_0x000100904708(param_1 + 1);
  return param_1;
}



/* Entry: 1059661dc; end: 105966203;  */

void FUN_1059661dc(void)

{
  func_0x000105966390();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105966204; end: 105966213;  */

undefined8 FUN_105966204(void)

{
  return 0xffffffff;
}



/* Entry: 105966214; end: 105966263;  */

long FUN_105966214(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  FUN_10527d568();
  func_0x00010028af84(lVar1 + 0x30,param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  uVar4 = *(undefined8 *)(param_2 + 0x59);
  *(undefined8 *)(param_1 + 0x61) = *(undefined8 *)(param_2 + 0x61);
  *(undefined8 *)(param_1 + 0x59) = uVar4;
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  return param_1;
}



/* Entry: 105966264; end: 10596629b;  */

undefined1 * FUN_105966264(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x38] = 0;
  FUN_10596629c();
  return param_1;
}



/* Entry: 10596629c; end: 1059662af;  */

void FUN_10596629c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1059662cc();
    *(undefined1 *)(param_1 + 0x38) = 1;
    return;
  }
  return;
}



/* Entry: 1059662b0; end: 1059662cb;  */

void FUN_1059662b0(long param_1)

{
  FUN_1059662cc();
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 1059662cc; end: 1059662ff;  */

undefined8 * FUN_1059662cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010028af84(param_1 + 3,param_2 + 3);
  return param_1;
}



/* Entry: 105966300; end: 105966337;  */

undefined1 * FUN_105966300(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x28] = 0;
  FUN_105966338();
  return param_1;
}



/* Entry: 105966338; end: 10596634b;  */

void FUN_105966338(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_105966368();
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  return;
}



/* Entry: 10596634c; end: 105966367;  */

void FUN_10596634c(long param_1)

{
  FUN_105966368();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 105966368; end: 105966437;  */

undefined4 * FUN_105966368(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  func_0x00010028af84(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 105966438; end: 105966463;  */

void FUN_105966438(undefined8 *param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  func_0x000100558bb4(&uStack_20);
  return;
}



/* Entry: 105966464; end: 105966477;  */

void FUN_105966464(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100902b18();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 105966478; end: 1059664eb;  */

undefined8 * FUN_105966478(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  FUN_105966214(param_1 + 1,param_2 + 1);
  lVar1 = param_2[0x10];
  uVar2 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000100904d1c();
    } while (extraout_w10 != 0);
  }
  return param_1;
}



/* Entry: 1059664ec; end: 105966627;  */

void FUN_1059664ec(long param_1)

{
  long extraout_x8;
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x0001005e3518();
  if ((**(byte **)(lVar1 + 0xc0) & 1) == 0) {
    func_0x000100904d2c(*(undefined8 *)(lVar1 + 8));
    (**(code **)(extraout_x8 + 0x18))();
    func_0x0001005e3518(lVar1 + 0x90);
    func_0x000100906e10();
    func_0x000100906e20();
    func_0x000100906e3c();
    func_0x000100906e4c();
    func_0x000100927cdc();
    func_0x0001009275c0();
    func_0x000100907740();
    func_0x000100907748();
    func_0x000100907780();
    func_0x000100907798();
    func_0x0001009077a8();
    func_0x000100927cf0();
    func_0x000100927cfc();
    func_0x0001009077e0();
    func_0x000100907748();
    func_0x0001009077e8();
    func_0x000100907800();
    func_0x000100907810();
    func_0x000100927cf0();
    func_0x000100927d08();
    func_0x00010090781c();
    func_0x000100907748();
    func_0x000100907824();
    func_0x00010090783c();
    func_0x00010090784c();
    func_0x000100927d14();
    func_0x000100927d20();
    func_0x00010090786c();
    func_0x000100907748();
  }
  return;
}



/* Entry: 105966628; end: 105966647;  */

void FUN_105966628(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001059664c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 105966648; end: 10596664b;  */

void FUN_105966648(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10596664c; end: 1059666a7;  */

undefined8 * FUN_10596664c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 1,param_2 + 1);
  FUN_105966264(param_1 + 4,param_2 + 4);
  return param_1;
}



/* Entry: 1059666a8; end: 1059666d3;  */

long FUN_1059666a8(long param_1)

{
  func_0x000100902b24(param_1 + 0x88);
  FUN_1059656f4(param_1 + 8);
  return param_1;
}



/* Entry: 1059666d4; end: 10596680f;  */

void FUN_1059666d4(long param_1)

{
  long extraout_x8;
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x0001005e3518();
  if ((**(byte **)(lVar1 + 0x98) & 1) == 0) {
    func_0x000100904d2c(*(undefined8 *)(lVar1 + 8));
    (**(code **)(extraout_x8 + 0x20))();
    func_0x0001005e3518(lVar1 + 0x68);
    func_0x000100906e10();
    func_0x000100906e20();
    func_0x000100906e3c();
    func_0x000100906e4c();
    func_0x000100927cdc();
    func_0x0001009275c0();
    func_0x000100907740();
    func_0x000100907748();
    func_0x000100907780();
    func_0x000100907798();
    func_0x0001009077a8();
    func_0x000100927cf0();
    func_0x000100927cfc();
    func_0x0001009077e0();
    func_0x000100907748();
    func_0x0001009077e8();
    func_0x000100907800();
    func_0x000100907810();
    func_0x000100927cf0();
    func_0x000100927d08();
    func_0x00010090781c();
    func_0x000100907748();
    func_0x000100907824();
    func_0x00010090783c();
    func_0x00010090784c();
    func_0x000100927d14();
    func_0x000100927d20();
    func_0x00010090786c();
    func_0x000100907748();
  }
  return;
}



/* Entry: 105966810; end: 10596682f;  */

void FUN_105966810(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1059666a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 105966830; end: 105966833;  */

void FUN_105966830(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 105966834; end: 105966873;  */

void FUN_105966834(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  func_0x000105967b48();
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  FUN_105966300(unaff_x19 + 0x28,param_2 + 0x28);
  return;
}



/* Entry: 105966874; end: 10596689f;  */

long FUN_105966874(long param_1)

{
  func_0x000100902b24(param_1 + 0x80);
  FUN_1059658fc(param_1 + 8);
  return param_1;
}



/* Entry: 1059668a0; end: 1059669e3;  */

void FUN_1059668a0(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x0001005e3518();
  if ((**(byte **)(lVar2 + 0x90) & 1) == 0) {
    plVar1 = *(long **)(*(long *)(lVar2 + 8) + 0x18);
    (**(code **)(*plVar1 + 0x28))(plVar1,lVar2 + 0x10,*(undefined8 *)(lVar2 + 0x28),lVar2 + 0x30);
    func_0x0001005e3518(lVar2 + 0x60);
    func_0x000100906e10();
    func_0x000100906e20();
    func_0x000100906e3c();
    func_0x000100906e4c();
    func_0x000100927cdc();
    func_0x0001009275c0();
    func_0x000100907740();
    func_0x000100907748();
    func_0x000100907780();
    func_0x000100907798();
    func_0x0001009077a8();
    func_0x000100927cf0();
    func_0x000100927cfc();
    func_0x0001009077e0();
    func_0x000100907748();
    func_0x0001009077e8();
    func_0x000100907800();
    func_0x000100907810();
    func_0x000100927cf0();
    func_0x000100927d08();
    func_0x00010090781c();
    func_0x000100907748();
    func_0x000100907824();
    func_0x00010090783c();
    func_0x00010090784c();
    func_0x000100927d14();
    func_0x000100927d20();
    func_0x00010090786c();
    func_0x000100907748();
  }
  return;
}



/* Entry: 1059669e4; end: 105966a03;  */

void FUN_1059669e4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_105966874();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}


