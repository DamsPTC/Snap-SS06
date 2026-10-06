/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0046b150; end: 0046b19b;  */

void FUN_0046b150(long param_1)

{
  long lVar1;
  long *plVar2;
  code *extraout_x8;
  undefined8 unaff_x19;
  long unaff_x20;
  long lVar3;
  
  func_0x0046cd28();
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x0046c9d0();
    func_0x0046cca0();
    (*extraout_x8)();
  }
  *(undefined1 *)(unaff_x20 + 0x48) = 1;
  func_0x0046d0c0();
  func_0x0046cd28();
  lVar3 = *(long *)(param_1 + 0x10);
  lVar1 = lVar3;
  FUN_0046aeb4();
  plVar2 = *(long **)(unaff_x20 + 0x18);
  *(undefined1 *)(unaff_x20 + 0x78) = 0;
  *(undefined1 *)(unaff_x20 + 0x59) = 1;
  *(int *)(unaff_x20 + 0x5c) = (int)lVar1;
  *(long *)(unaff_x20 + 0x68) = lVar3 + 0xb8;
  *(undefined8 *)(unaff_x20 + 0xd0) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0046cbd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))(plVar2,unaff_x20 + 0x50,(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 0046b19c; end: 0046b2ef;  */

void FUN_0046b19c(long param_1,undefined8 param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  code *extraout_x8;
  char *pcVar1;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0046cc6c();
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    func_0x0046ca30(uRam0000000000b65da0);
    UNRECOVERED_JUMPTABLE = (code *)((long)&section_000000b8.size + 4);
    (*extraout_x8)();
  }
  pcVar1 = *(char **)(unaff_x19 + 0x10);
  if (*pcVar1 == '\x01') {
    func_0x0046cc50(uRam0000000000b65da0);
    func_0x0046cca0();
    UNRECOVERED_JUMPTABLE = (code *)((long)&section_000000b8.size + 5);
    (*extraout_x8_00)();
    pcVar1 = *(char **)(unaff_x19 + 0x10);
  }
  *(undefined8 *)(unaff_x19 + 0x218) = unaff_x20;
  func_0x0046d2b4(pcVar1,*(undefined8 *)(unaff_x19 + 0x18));
  *(undefined8 *)(unaff_x19 + 0x208) = extraout_x8_01;
  func_0x0046ce5c();
                    /* WARNING: Could not recover jumptable at 0x0046cbd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 0046b2f0; end: 0046b307;  */

long FUN_0046b2f0(long param_1)

{
  func_0x0046bdb0(param_1 + 0x4a0);
  func_0x0046bde0(param_1 + 0x338);
  func_0x0046be1c(param_1 + 0x1f0);
  func_0x0046be4c(param_1 + 0x48);
  return param_1 + -8;
}



/* Entry: 0046b308; end: 0046b32b;  */

void FUN_0046b308(void)

{
  func_0x0046ce0c();
  FUN_0046cf04(&UNK_009e6b50);
  return;
}



/* Entry: 0046b32c; end: 0046b33f;  */

void FUN_0046b32c(void)

{
  func_0x0046be4c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0046b340; end: 0046b3bb;  */

undefined8 FUN_0046b340(long param_1)

{
  long unaff_x19;
  undefined1 *unaff_x21;
  
  func_0x0046cba4();
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    FUN_004696c4(*(undefined8 *)(unaff_x19 + 0x90));
    func_0x0046d2e4();
    *unaff_x21 = *(undefined1 *)(unaff_x19 + 0x1a0);
  }
  else {
    func_0x0046d1b0();
    func_0x0046d1e4();
    *(undefined1 *)(unaff_x19 + 0x71) = 0;
    *(undefined1 *)(unaff_x19 + 0x1a0) = *unaff_x21;
    FUN_0046b528();
    if ((int)unaff_x19 == 0) {
      return 0;
    }
    func_0x0046d2e4(0);
  }
  func_0x0046cb14();
  func_0x0046cbdc();
  return 1;
}



/* Entry: 0046b3bc; end: 0046b3f7;  */

void FUN_0046b3bc(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  iVar1 = (int)param_1;
  func_0x0046cc6c();
  *(undefined1 *)(CONCAT44(uVar2,iVar1) + 0xb8) = 0;
  func_0x0046ca9c();
  func_0x0046cfb0();
  func_0x0046d230();
  func_0x0046b550();
  if (iVar1 != 0) {
    func_0x0046cc88();
                    /* WARNING: Could not recover jumptable at 0x0046cdc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 0046b3f8; end: 0046b413;  */

undefined8 FUN_0046b3f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 0046b414; end: 0046b4e7;  */

void FUN_0046b414(void)

{
  undefined1 in_ZR;
  int iVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  long lStack_230;
  undefined8 auStack_228 [60];
  undefined8 uStack_48;
  
  func_0x0046ca4c();
  FUN_0046a1e0();
  func_0x0046cd70(UNRECOVERED_JUMPTABLE + 0x30);
  FUN_0046a294();
  plVar2 = plRam0000000000b65da0;
  if ((((byte)UNRECOVERED_JUMPTABLE[0x71] & 1) != 0) &&
     (((byte)UNRECOVERED_JUMPTABLE[0x70] & 1) == 0)) {
    auStack_228[lStack_230 * 10] = 2;
    auStack_228[lStack_230 * 10 + 1] = 0;
    lStack_230 = lStack_230 + 1;
  }
  uVar3 = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x98);
  (**(code **)(*(long *)UNRECOVERED_JUMPTABLE + 0x20))();
  (**(code **)(*plVar2 + 0x108))(plVar2,uVar3,auStack_228,lStack_230,UNRECOVERED_JUMPTABLE,0);
  if ((int)plVar2 != 0) {
    func_0x0046c9e8();
  }
  func_0x0046ca74(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    *(undefined1 *)(plVar2 + 0x17) = 1;
    func_0x0046cc78();
    iVar1 = (int)plVar2;
    func_0x0046cbe8();
    func_0x0046ca0c();
    if (iVar1 != 0) {
      func_0x0046cadc();
                    /* WARNING: Could not recover jumptable at 0x0046cbfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    return;
  }
  return;
}



/* Entry: 0046b4e8; end: 0046b527;  */

void FUN_0046b4e8(long param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = (int)param_1;
  *(undefined1 *)(param_1 + 0xb8) = 1;
  func_0x0046cc78();
  func_0x0046cbe8();
  func_0x0046ca0c();
  if (iVar1 == 0) {
    return;
  }
  func_0x0046cadc();
                    /* WARNING: Could not recover jumptable at 0x0046cbfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 0046b528; end: 0046b627;  */

undefined8 FUN_0046b528(void)

{
  code *extraout_x8;
  long lVar1;
  long unaff_x19;
  
  func_0x0046d180();
  FUN_00469d80(unaff_x19 + 0x30,unaff_x19 + 0xc0);
  if (*(long *)(unaff_x19 + 0xf0) == 0) {
    func_0x0046c9d0();
    func_0x0046cdb0();
    (*extraout_x8)();
  }
  lVar1 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0x20);
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0x28);
    if (lVar1 == 0) {
      return 1;
    }
    if (*(long *)(lVar1 + 0x20) == *(long *)(lVar1 + 0x28)) {
      return 1;
    }
    func_0x0046a03c(unaff_x19 + 0xc0);
  }
  else {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x30)) {
      return 1;
    }
    FUN_00469ff0(unaff_x19 + 0xc0);
  }
  return 0;
}



/* Entry: 0046b628; end: 0046b63b;  */

void FUN_0046b628(void)

{
  func_0x0046be1c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0046b63c; end: 0046b6ab;  */

void FUN_0046b63c(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x21;
  
  func_0x0046cba4();
  if (*(char *)(param_1 + 0x58) == '\x01') {
    FUN_004696c4(*(undefined8 *)(unaff_x19 + 0x30));
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0x20);
    *unaff_x21 = *(undefined1 *)(unaff_x19 + 0x140);
  }
  else {
    *(undefined1 *)(unaff_x19 + 0x140) = *unaff_x21;
    lVar1 = unaff_x19;
    FUN_0046b7a8();
    if ((int)lVar1 == 0) {
      return;
    }
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0x20);
  }
  func_0x0046cb14();
  func_0x0046cbdc();
  return;
}



/* Entry: 0046b6ac; end: 0046b6f3;  */

void FUN_0046b6ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x19;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  
  func_0x0046cc6c();
  *(undefined1 *)(param_4 + 0x58) = 0;
  func_0x0046ca9c();
  func_0x0046cfb0();
  *(undefined8 *)(unaff_x19 + 0x50) = in_register_00005048;
  *(undefined8 *)(unaff_x19 + 0x48) = param_3;
  *(undefined8 *)(unaff_x19 + 0x40) = in_register_00005028;
  *(undefined8 *)(unaff_x19 + 0x38) = param_2;
  *(undefined8 *)(unaff_x19 + 0x30) = in_register_00005008;
  *(undefined8 *)(unaff_x19 + 0x28) = param_1;
  func_0x0046b7e0();
  if ((int)unaff_x19 != 0) {
    func_0x0046cc88();
                    /* WARNING: Could not recover jumptable at 0x0046cdc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 0046b6f4; end: 0046b713;  */

undefined8 FUN_0046b6f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0046b714; end: 0046b767;  */

void FUN_0046b714(undefined8 param_1)

{
  undefined1 in_ZR;
  int iVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uStack_48;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  iVar1 = (int)param_1;
  func_0x0046ca4c();
  FUN_0046a364();
  func_0x0046cd60();
  func_0x0046cb64();
  func_0x0046cab8();
  if (iVar1 != 0) {
    func_0x0046c9e8();
  }
  func_0x0046ca74(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(CONCAT44(uVar2,iVar1) + 0x58) = 1;
  func_0x0046cc78();
  func_0x0046cbe8();
  func_0x0046ca0c();
  if (iVar1 == 0) {
    return;
  }
  func_0x0046cadc();
                    /* WARNING: Could not recover jumptable at 0x0046cbfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 0046b768; end: 0046b7a7;  */

void FUN_0046b768(long param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = (int)param_1;
  *(undefined1 *)(param_1 + 0x58) = 1;
  func_0x0046cc78();
  func_0x0046cbe8();
  func_0x0046ca0c();
  if (iVar1 == 0) {
    return;
  }
  func_0x0046cadc();
                    /* WARNING: Could not recover jumptable at 0x0046cbfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 0046b7a8; end: 0046b89b;  */

undefined8 FUN_0046b7a8(long param_1)

{
  code *extraout_x8;
  long lVar1;
  
  FUN_00469d74(param_1 + 0x60);
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined1 *)(param_1 + 0x70) = 1;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(long *)(param_1 + 0x90) == 0) {
    func_0x0046c9d0();
    func_0x0046cdb0();
    (*extraout_x8)();
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x88) + 0x20);
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x88) + 0x28);
    if (lVar1 == 0) {
      return 1;
    }
    if (*(long *)(lVar1 + 0x20) == *(long *)(lVar1 + 0x28)) {
      return 1;
    }
    func_0x0046a03c(param_1 + 0x60);
  }
  else {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x30)) {
      return 1;
    }
    FUN_00469ff0(param_1 + 0x60);
  }
  return 0;
}



/* Entry: 0046b89c; end: 0046b8af;  */

void FUN_0046b89c(void)

{
  func_0x0046bde0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0046b8b0; end: 0046b927;  */

void FUN_0046b8b0(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x21;
  
  func_0x0046cba4();
  if (*(char *)(param_1 + 0x78) == '\x01') {
    FUN_004696c4(*(undefined8 *)(unaff_x19 + 0x50));
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0x40);
    *unaff_x21 = *(undefined1 *)(unaff_x19 + 0x160);
  }
  else {
    func_0x0046d14c(unaff_x19 + 0x18);
    *(undefined1 *)(unaff_x19 + 0x160) = *unaff_x21;
    lVar1 = unaff_x19;
    FUN_0046ba48();
    if ((int)lVar1 == 0) {
      return;
    }
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0x40);
  }
  func_0x0046cb14();
  func_0x0046cbdc();
  return;
}



/* Entry: 0046b928; end: 0046b96f;  */

void FUN_0046b928(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x19;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  
  func_0x0046cc6c();
  *(undefined1 *)(param_4 + 0x78) = 0;
  func_0x0046ca9c();
  func_0x0046cfb0();
  *(undefined8 *)(unaff_x19 + 0x70) = in_register_00005048;
  *(undefined8 *)(unaff_x19 + 0x68) = param_3;
  *(undefined8 *)(unaff_x19 + 0x60) = in_register_00005028;
  *(undefined8 *)(unaff_x19 + 0x58) = param_2;
  *(undefined8 *)(unaff_x19 + 0x50) = in_register_00005008;
  *(undefined8 *)(unaff_x19 + 0x48) = param_1;
  func_0x0046ba94();
  if ((int)unaff_x19 != 0) {
    func_0x0046cc88();
                    /* WARNING: Could not recover jumptable at 0x0046cdc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 0046b970; end: 0046b9a7;  */

undefined8 FUN_0046b970(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 0046b9a8; end: 0046ba07;  */

void FUN_0046b9a8(void)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x19;
  undefined8 uStack_48;
  
  func_0x0046ca4c();
  FUN_0046a364();
  lVar2 = unaff_x19 + 0x18;
  func_0x0046cd70();
  func_0x0046a3a0();
  func_0x0046cd60();
  func_0x0046cb64();
  func_0x0046cab8();
  if ((int)lVar2 != 0) {
    func_0x0046c9e8();
  }
  func_0x0046ca74(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(lVar2 + 0x78) = 1;
  func_0x0046cc78();
  iVar1 = (int)lVar2;
  func_0x0046cbe8();
  func_0x0046ca0c();
  if (iVar1 == 0) {
    return;
  }
  func_0x0046cadc();
                    /* WARNING: Could not recover jumptable at 0x0046cbfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 0046ba08; end: 0046ba47;  */

void FUN_0046ba08(long param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = (int)param_1;
  *(undefined1 *)(param_1 + 0x78) = 1;
  func_0x0046cc78();
  func_0x0046cbe8();
  func_0x0046ca0c();
  if (iVar1 == 0) {
    return;
  }
  func_0x0046cadc();
                    /* WARNING: Could not recover jumptable at 0x0046cbfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 0046ba48; end: 0046bb57;  */

undefined8 FUN_0046ba48(void)

{
  code *extraout_x8;
  long lVar1;
  long unaff_x19;
  
  func_0x0046d2cc();
  FUN_00469d74();
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    *(undefined1 *)(unaff_x19 + 0x90) = 1;
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(char *)(unaff_x19 + 0x18) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x91) = 1;
  }
  else {
    *(undefined8 *)(unaff_x19 + 0x138) = 0;
    *(undefined8 *)(unaff_x19 + 0x140) = 0;
  }
  if (*(long *)(unaff_x19 + 0xb0) == 0) {
    func_0x0046c9d0();
    func_0x0046cdb0();
    (*extraout_x8)();
  }
  lVar1 = *(long *)(*(long *)(unaff_x19 + 0xa8) + 0x20);
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(unaff_x19 + 0xa8) + 0x28);
    if (lVar1 == 0) {
      return 1;
    }
    if (*(long *)(lVar1 + 0x20) == *(long *)(lVar1 + 0x28)) {
      return 1;
    }
    func_0x0046a03c(unaff_x19 + 0x80);
  }
  else {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x30)) {
      return 1;
    }
    FUN_00469ff0(unaff_x19 + 0x80);
  }
  return 0;
}



/* Entry: 0046bb58; end: 0046bb6b;  */

void FUN_0046bb58(void)

{
  func_0x0046bdb0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0046bb6c; end: 0046bbe3;  */

void FUN_0046bb6c(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x21;
  
  func_0x0046cba4();
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    FUN_004696c4(*(undefined8 *)(unaff_x19 + 0x80));
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0x70);
    *unaff_x21 = *(undefined1 *)(unaff_x19 + 400);
  }
  else {
    func_0x0046d154(unaff_x19 + 0x18);
    *(undefined1 *)(unaff_x19 + 400) = *unaff_x21;
    lVar1 = unaff_x19;
    FUN_0046bd00();
    if ((int)lVar1 == 0) {
      return;
    }
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0x70);
  }
  func_0x0046cb14();
  func_0x0046cbdc();
  return;
}



/* Entry: 0046bbe4; end: 0046bc2b;  */

void FUN_0046bbe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x19;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  
  func_0x0046cc6c();
  *(undefined1 *)(param_4 + 0xa8) = 0;
  func_0x0046ca9c();
  func_0x0046cfb0();
  *(undefined8 *)(unaff_x19 + 0xa0) = in_register_00005048;
  *(undefined8 *)(unaff_x19 + 0x98) = param_3;
  *(undefined8 *)(unaff_x19 + 0x90) = in_register_00005028;
  *(undefined8 *)(unaff_x19 + 0x88) = param_2;
  *(undefined8 *)(unaff_x19 + 0x80) = in_register_00005008;
  *(undefined8 *)(unaff_x19 + 0x78) = param_1;
  func_0x0046bd4c();
  if ((int)unaff_x19 != 0) {
    func_0x0046cc88();
                    /* WARNING: Could not recover jumptable at 0x0046cdc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 0046bc2c; end: 0046bc5f;  */

undefined8 FUN_0046bc2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 0046bc60; end: 0046bcbf;  */

void FUN_0046bc60(void)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x19;
  undefined8 uStack_48;
  
  func_0x0046ca4c();
  FUN_0046a364();
  lVar2 = unaff_x19 + 0x18;
  func_0x0046cd70();
  func_0x0046a3dc();
  func_0x0046cd60();
  func_0x0046cb64();
  func_0x0046cab8();
  if ((int)lVar2 != 0) {
    func_0x0046c9e8();
  }
  func_0x0046ca74(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(lVar2 + 0xa8) = 1;
  func_0x0046cc78();
  iVar1 = (int)lVar2;
  func_0x0046cbe8();
  func_0x0046ca0c();
  if (iVar1 == 0) {
    return;
  }
  func_0x0046cadc();
                    /* WARNING: Could not recover jumptable at 0x0046cbfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 0046bcc0; end: 0046bcff;  */

void FUN_0046bcc0(long param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = (int)param_1;
  *(undefined1 *)(param_1 + 0xa8) = 1;
  func_0x0046cc78();
  func_0x0046cbe8();
  func_0x0046ca0c();
  if (iVar1 == 0) {
    return;
  }
  func_0x0046cadc();
                    /* WARNING: Could not recover jumptable at 0x0046cbfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 0046bd00; end: 0046bec3;  */

undefined8 FUN_0046bd00(long param_1)

{
  code *extraout_x8;
  long lVar1;
  
  FUN_00469d74(param_1 + 0xb0);
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined1 *)(param_1 + 0xc0) = 1;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    *(undefined1 *)(param_1 + 0xc2) = 1;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  if (*(long *)(param_1 + 0xe0) == 0) {
    func_0x0046c9d0();
    func_0x0046cdb0();
    (*extraout_x8)();
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0xd8) + 0x20);
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0xd8) + 0x28);
    if (lVar1 == 0) {
      return 1;
    }
    if (*(long *)(lVar1 + 0x20) == *(long *)(lVar1 + 0x28)) {
      return 1;
    }
    func_0x0046a03c(param_1 + 0xb0);
  }
  else {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x30)) {
      return 1;
    }
    FUN_00469ff0(param_1 + 0xb0);
  }
  return 0;
}



/* Entry: 0046bec4; end: 0046bf33;  */

void FUN_0046bec4(void)

{
  code *extraout_x8;
  code *extraout_x9;
  
  func_0x0046cd48();
  (*extraout_x9)();
  func_0x0046cb14();
  func_0x0046d080();
  (*extraout_x8)();
  func_0x0046d0cc();
  FUN_0046bf60();
  return;
}



/* Entry: 0046bf34; end: 0046bf5f;  */

void FUN_0046bf34(undefined8 param_1)

{
  code *extraout_x8;
  
  func_0x0046c9d0();
  func_0x0046cca0(param_1,"false");
  (*extraout_x8)();
  return;
}



/* Entry: 0046bf60; end: 0046c04b;  */

undefined8 *
FUN_0046bf60(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,int param_4,long param_5)

{
  code *extraout_x8;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  param_1[3] = param_3;
  *param_1 = &PTR_FUN_009e6ed0;
  param_1[1] = &PTR_FUN_009e6f28;
  param_1[2] = &PTR_DAT_009e6f58;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[7] = param_2[3];
  param_1[6] = uVar3;
  param_1[9] = uVar5;
  param_1[8] = uVar4;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  *(char *)(param_1 + 10) = (char)param_4;
  func_0x0046b5d8(param_1 + 0xb);
  func_0x0046b83c(param_1 + 0x34);
  FUN_0046b308(param_1 + 0x61);
  func_0x0046bafc(param_1 + 0x96);
  if (param_4 == 0) {
    if (param_5 != 0) {
      func_0x0046c9d0();
      func_0x0046cca0();
      (*extraout_x8)();
    }
  }
  else {
    func_0x0046cd9c();
    FUN_0046c04c();
  }
  return param_1;
}



/* Entry: 0046c04c; end: 0046c0af;  */

void FUN_0046c04c(long param_1,undefined8 param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0046cc6c();
  lVar2 = *(long *)(param_1 + 0x18);
  lVar1 = lVar2 + 0xb8;
  FUN_0046aeb4();
  *(undefined1 *)(unaff_x19 + 0x330) = 0;
  *(undefined1 *)(unaff_x19 + 0x311) = 1;
  *(int *)(unaff_x19 + 0x314) = (int)lVar2;
  *(long *)(unaff_x19 + 800) = lVar1;
  if ((*(byte *)(*(long *)(unaff_x19 + 0x18) + 0x150) & 1) != 0) {
    return;
  }
  *(undefined8 *)(unaff_x19 + 0x388) = unaff_x20;
  func_0x0046ce5c(*(undefined8 *)(unaff_x19 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0046cbd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 0046c0b0; end: 0046c0b7;  */

long FUN_0046c0b0(long param_1)

{
  func_0x0046bdb0(param_1 + 0x4b0);
  func_0x0046be4c(param_1 + 0x308);
  func_0x0046bde0(param_1 + 0x1a0);
  func_0x0046be1c(param_1 + 0x58);
  return param_1;
}



/* Entry: 0046c0b8; end: 0046c103;  */

void FUN_0046c0b8(long param_1,undefined8 param_2,undefined8 param_3,char *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  long lVar2;
  code *extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0046cd28();
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x0046c9d0();
    func_0x0046cca0();
    UNRECOVERED_JUMPTABLE = section_000001f8.segname + 9;
    (*extraout_x8)();
  }
  *(undefined1 *)(unaff_x20 + 0x50) = 1;
  func_0x0046d0c0();
  func_0x0046cc6c();
  lVar2 = *(long *)(param_1 + 0x18);
  lVar1 = lVar2 + 0xb8;
  FUN_0046aeb4();
  *(undefined1 *)(unaff_x19 + 0x330) = 0;
  *(undefined1 *)(unaff_x19 + 0x311) = 1;
  *(int *)(unaff_x19 + 0x314) = (int)lVar2;
  *(long *)(unaff_x19 + 800) = lVar1;
  if ((*(byte *)(*(long *)(unaff_x19 + 0x18) + 0x150) & 1) != 0) {
    return;
  }
  *(long *)(unaff_x19 + 0x388) = unaff_x20;
  func_0x0046ce5c(*(undefined8 *)(unaff_x19 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0046cbd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 0046c104; end: 0046c1f7;  */

void FUN_0046c104(long param_1,undefined8 param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  code *extraout_x8;
  char *pcVar1;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0046cc6c();
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    func_0x0046ca30(uRam0000000000b65da0);
    UNRECOVERED_JUMPTABLE = (code *)((long)&section_000001f8.addr + 6);
    (*extraout_x8)();
  }
  pcVar1 = *(char **)(unaff_x19 + 0x18);
  if (*pcVar1 == '\x01') {
    func_0x0046cc50(uRam0000000000b65da0);
    func_0x0046cca0();
    UNRECOVERED_JUMPTABLE = (code *)((long)&section_000001f8.addr + 7);
    (*extraout_x8_00)();
    pcVar1 = *(char **)(unaff_x19 + 0x18);
  }
  *(undefined8 *)(unaff_x19 + 0x78) = unaff_x20;
  func_0x0046d2b4(pcVar1,*(undefined8 *)(unaff_x19 + 0x20));
  *(undefined8 *)(unaff_x19 + 0x68) = extraout_x8_01;
  func_0x0046ce5c();
                    /* WARNING: Could not recover jumptable at 0x0046cbd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 0046c1f8; end: 0046c247;  */

void FUN_0046c1f8(long param_1,undefined8 param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  code *extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0046cc6c();
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    func_0x0046c9d0();
    func_0x0046cb44();
    UNRECOVERED_JUMPTABLE = (code *)((long)&section_000001f8.reserved3 + 1);
    (*extraout_x8)();
  }
  *(undefined8 *)(unaff_x19 + 0x388) = unaff_x20;
  *(undefined1 *)(unaff_x19 + 0x379) = 1;
  func_0x0046ce5c(*(undefined8 *)(unaff_x19 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0046c244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 0046c248; end: 0046c32f;  */

void FUN_0046c248(long param_1,undefined8 param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  code *extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  
  func_0x0046cba4();
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    func_0x0046c9d0();
    func_0x0046cb44();
    UNRECOVERED_JUMPTABLE = (code *)((long)&section_000001f8.size + 7);
    (*extraout_x8)();
  }
  *(undefined8 *)(unaff_x19 + 0x1e0) = unaff_x21;
  if ((**(byte **)(unaff_x19 + 0x18) & 1) == 0) {
    func_0x0046d2b4();
    *(undefined8 *)(unaff_x19 + 0x1b0) = extraout_x8_00;
  }
  *(undefined8 *)(unaff_x19 + 0x1c0) = unaff_x20;
  func_0x0046ce5c(*(undefined8 *)(unaff_x19 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0046cbd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 0046c330; end: 0046c3df;  */

void FUN_0046c330(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *extraout_x8;
  code *extraout_x8_00;
  ulong unaff_x20;
  int aiStack_78 [14];
  
  func_0x0046d258();
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    func_0x0046ca30(uRam0000000000b65da0);
    (*extraout_x8)();
  }
  *(undefined8 *)(param_1 + 0x388) = param_4;
  if ((unaff_x20 >> 0x20 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x379) = 1;
  }
  FUN_0046a5e8(aiStack_78,param_1 + 0x338);
  func_0x0046cdc4();
  if (aiStack_78[0] != 0) {
    func_0x0046cc50(uRam0000000000b65da0);
    func_0x0046cca0();
    (*extraout_x8_00)();
  }
  func_0x0046cc50(*(undefined8 *)(param_1 + 0x20));
  func_0x0046d1f8();
  return;
}



/* Entry: 0046c3e0; end: 0046c417;  */

long FUN_0046c3e0(long param_1)

{
  func_0x0046bdb0(param_1 + 0x4a8);
  func_0x0046be4c(param_1 + 0x300);
  func_0x0046bde0(param_1 + 0x198);
  func_0x0046be1c(param_1 + 0x50);
  return param_1 + -8;
}



/* Entry: 0046c418; end: 0046c47f;  */

long FUN_0046c418(long param_1)

{
  func_0x0046bdb0(param_1 + 0x4b0);
  func_0x0046be4c(param_1 + 0x308);
  func_0x0046bde0(param_1 + 0x1a0);
  func_0x0046be1c(param_1 + 0x58);
  return param_1;
}



/* Entry: 0046c480; end: 0046c487;  */

void FUN_0046c480(long param_1)

{
  undefined1 auStack_38 [24];
  
  FUN_00425cb4(auStack_38,"on Construct");
  FUN_0046c4d8(param_1 + 0x18,auStack_38,*(undefined4 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 0x28));
  func_0x0046ce54();
  return;
}



/* Entry: 0046c488; end: 0046c4d7;  */

void FUN_0046c488(undefined4 *param_1)

{
  undefined1 auStack_38 [24];
  
  FUN_00425cb4(auStack_38,"on Construct");
  FUN_0046c4d8(param_1 + 2,auStack_38,*param_1,param_1[6]);
  func_0x0046ce54();
  return;
}



/* Entry: 0046c4d8; end: 0046c4ef;  */

dword * FUN_0046c4d8(dword *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  dword *pdVar1;
  undefined8 *puVar2;
  dword *pdVar3;
  undefined1 auStack_80 [72];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_4 == 2) {
    return param_1;
  }
  pdVar3 = *(dword **)(*(long *)param_1 + 0x48);
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_00341380(&uStack_38,0);
  FUN_003413d4(auStack_80);
  pdVar1 = pdVar3;
  FUN_003425f8();
  if (pdVar1 == (dword *)0x0) {
    puVar2 = *(undefined8 **)(pdVar3 + 0x30);
    func_0x003a6554();
    if ((undefined **)*puVar2 == &PTR_DAT_009e1cd0) {
      pdVar1 = (dword *)((long)&MACH_HEADER.magic + 3);
    }
    else {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/channel_connectivity.cc"
                   ,0x47,2,
                   "grpc_channel_check_connectivity_state called on something that is not a client channel"
                  );
      pdVar1 = &MACH_HEADER.cputype;
    }
  }
  else {
    FUN_003468ec();
  }
  FUN_00341470(auStack_80);
  FUN_003414dc(&uStack_38);
  return pdVar1;
}



/* Entry: 0046c4f0; end: 0046c51b;  */

undefined8 * FUN_0046c4f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e6418;
  FUN_0046c540(param_1 + 1);
  return param_1;
}



/* Entry: 0046c51c; end: 0046c523;  */

void FUN_0046c51c(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x0046cd3c();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 0046c524; end: 0046c53f;  */

void FUN_0046c524(undefined8 param_1,long param_2)

{
  FUN_0046c4f0(param_1,param_2 + 8);
  return;
}



/* Entry: 0046c540; end: 0046c55f;  */

void FUN_0046c540(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  param_1[6] = param_2[6];
  return;
}



/* Entry: 0046c560; end: 0046c5d7;  */

void FUN_0046c560(void)

{
  long unaff_x19;
  
  func_0x0046d2cc();
  func_0x00459d84();
  FUN_00457530(unaff_x19 + 0x60);
  func_0x0046c598(unaff_x19 + 0x38);
  FUN_00457530(unaff_x19 + 0x18);
  return;
}



/* Entry: 0046c5d8; end: 0046c5ef;  */

void FUN_0046c5d8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0046c5f0; end: 0046c623;  */

void FUN_0046c5f0(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + 0x80);
  *(undefined1 *)(param_1 + 0x34) = 1;
  FUN_005bc1d8(*plVar2);
  lVar1 = *plVar2;
  *plVar2 = 0;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_00467cb8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0046c624; end: 0046c6af;  */

void FUN_0046c624(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined ***pppuVar1;
  undefined **ppuVar2;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined **ppuVar3;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_28;
  
  func_0x0046cb34();
  ppuStack_80 = &PTR_DAT_009e6430;
  uStack_78 = *param_2;
  *param_2 = 0;
  uStack_28 = extraout_x8;
  func_0x0046cc50();
  (*extraout_x8_00)();
  (*(code *)*ppuStack_80)();
  func_0x0046ca74(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pppuVar1 = &ppuStack_80;
  (*(code *)*ppuStack_80)();
  func_0x0046cc64();
  ppuVar2 = pppuVar1[2];
  ppuVar3 = ppuVar2 + 2;
  while (ppuVar3 = (undefined **)*ppuVar3, ppuVar3 != (undefined **)0x0) {
    (**(code **)(*(long *)ppuVar3[0x22] + 0x20))();
  }
  FUN_005bc948(ppuVar2);
  *(undefined1 *)(ppuVar2 + 5) = 1;
  return;
}



/* Entry: 0046c6b0; end: 0046c6df;  */

void FUN_0046c6b0(long param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  plVar2 = (long *)(lVar1 + 0x10);
  while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
    (**(code **)(*(long *)plVar2[0x22] + 0x20))();
  }
  FUN_005bc948(lVar1);
  *(undefined1 *)(lVar1 + 0x28) = 1;
  return;
}



/* Entry: 0046c6e0; end: 0046c77b;  */

long FUN_0046c6e0(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  undefined8 uStack_28;
  
  lVar2 = param_1;
  FUN_0046cf40(&UNK_009e6388);
  *unaff_x20 = extraout_x8;
  __ZNSt3__15mutexD1Ev(lVar2 + 0x220);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x200);
  FUN_00457530(param_1 + 0x1e0);
  FUN_00457530(param_1 + 0x1c0);
  FUN_0046c560(param_1 + 0x108);
  FUN_00457530(param_1 + 0xe8);
  func_0x0046c750(param_1 + 0xe0);
  func_0x0045a078(unaff_x20 + 0x1a);
  lVar2 = param_1;
  func_0x0046d278();
  if ((*(byte *)(lVar2 + 0x34) & 1) == 0) {
    ppuVar1 = &PTR___tlv_bootstrap_00b2c5a0;
    (*(code *)PTR___tlv_bootstrap_00b2c5a0)();
    if (*ppuVar1 == *(undefined **)(param_1 + 0x38)) {
      FUN_0046c5f0(param_1);
    }
    else {
      uStack_28 = *(undefined8 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x80) = 0;
      FUN_0046c624(*(undefined **)(param_1 + 0x38),&uStack_28);
      func_0x00467c64(&uStack_28);
    }
  }
  func_0x00467c1c(param_1 + 0xb8);
  func_0x00467c40(param_1 + 0xa8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x88);
  func_0x00467c64(param_1 + 0x80);
  func_0x00467bf8(param_1 + 0x70);
  FUN_00467dc8(param_1 + 0x68);
  FUN_00466354(param_1 + 0x58);
  FUN_00466dc4(param_1 + 0x48);
  func_0x0045a078(param_1 + 0x38);
  func_0x00467e68(param_1 + 0x20);
  func_0x00465c64(param_1 + 0x18);
  func_0x00467e8c(param_1 + 8);
  return param_1;
}



/* Entry: 0046c77c; end: 0046c787;  */

void FUN_0046c77c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e6310;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0046c788; end: 0046c7ef;  */

void FUN_0046c788(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_20 = param_3;
    FUN_0046c7f0(param_2,&uStack_20);
    func_0x0046c830(&uStack_20);
    return;
  }
  return;
}



/* Entry: 0046c7f0; end: 0046c853;  */

undefined8 FUN_0046c7f0(undefined8 param_1,long param_2)

{
  int extraout_w10;
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      func_0x0046cbb4();
    } while (extraout_w10 != 0);
  }
  func_0x0046d28c();
  func_0x00467e8c();
  return param_1;
}



/* Entry: 0046c854; end: 0046c863;  */

void FUN_0046c854(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0046c864; end: 0046c8cb;  */

void FUN_0046c864(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uStack_30;
  
  func_0x0046cb34();
  func_0x0046d01c();
  FUN_0046c8cc();
  FUN_0046c918(uStack_30,param_2);
  func_0x0046cc18();
  func_0x0046c9c0();
  func_0x0046ca74(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0046ce90();
  func_0x0046c9c0();
  func_0x0046cc64();
  func_0x0046d004();
  FUN_0046c8ec();
  func_0x0046d010();
  return;
}



/* Entry: 0046c8cc; end: 0046c8eb;  */

void FUN_0046c8cc(void)

{
  func_0x0046d004();
  FUN_0046c8ec();
  func_0x0046d010();
  return;
}



/* Entry: 0046c8ec; end: 0046c917;  */

undefined8 * FUN_0046c8ec(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x555555555555556) {
    puVar1 = (undefined8 *)(param_2 * 0x30);
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(puVar1);
    return puVar1;
  }
  FUN_0040cee8();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009e6458;
  FUN_0046c974(param_1 + 3);
  return param_1;
}



/* Entry: 0046c918; end: 0046c94f;  */

undefined8 * FUN_0046c918(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009e6458;
  FUN_0046c974(param_1 + 3);
  return param_1;
}



/* Entry: 0046c950; end: 0046c953;  */

void FUN_0046c950(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e6458;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0046c954; end: 0046c967;  */

void FUN_0046c954(void)

{
  FUN_0046c9b0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0046c968; end: 0046c973;  */

void FUN_0046c968(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x0046cd3c();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 0046c974; end: 0046c9af;  */

undefined8 FUN_0046c974(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_00480db0(param_1,&uStack_30);
  func_0x00465de0(&uStack_30);
  return param_1;
}



/* Entry: 0046c9b0; end: 0046cf03;  */

void FUN_0046c9b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e6458;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0046cf04; end: 0046cf3f;  */

void FUN_0046cf04(long param_1,long *param_2)

{
  *param_2 = param_1 + 0x10;
  param_2[0xf] = (long)param_2;
  param_2[0x10] = (long)param_2;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x11] = 0;
  *(undefined4 *)(param_2 + 0x14) = 0xffffffff;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  *(undefined1 *)(param_2 + 0x17) = 0;
  FUN_00468b58(param_2 + 0x18);
  return;
}



/* Entry: 0046cf40; end: 0046d30f;  */

void FUN_0046cf40(void)

{
  return;
}



/* Entry: 0046d310; end: 0046d387;  */

undefined8 *
FUN_0046d310(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
            undefined8 *param_5)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009e7040;
  uVar1 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = *param_3;
  param_1[6] = param_3[1];
  param_1[5] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  *(undefined4 *)(param_1 + 7) = param_4;
  param_1[8] = *param_5;
  (**(code **)(param_5[1] + 0x10))(param_1 + 9,param_5 + 1);
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
  return param_1;
}



/* Entry: 0046d388; end: 0046da4b;  */

void FUN_0046d388(long param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 uVar5;
  section *psVar6;
  undefined8 extraout_x8;
  undefined1 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  int extraout_w10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  float fVar19;
  section *psStack_320;
  long *plStack_318;
  undefined8 uStack_310;
  code *pcStack_300;
  undefined **ppuStack_2f8;
  section *psStack_2f0;
  long *plStack_2e8;
  long *plStack_2e0;
  code *pcStack_2d0;
  undefined **ppuStack_2c8;
  section *psStack_2c0;
  long *plStack_2b8;
  long *plStack_2b0;
  undefined4 uStack_2a8;
  section *psStack_2a0;
  long *plStack_298;
  long *plStack_290;
  undefined4 uStack_288;
  undefined4 uStack_128;
  undefined8 uStack_120;
  long alStack_118 [5];
  undefined8 uStack_f0;
  long alStack_e8 [5];
  uint uStack_c0;
  qword qStack_b8;
  qword qStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  char cStack_78;
  undefined8 uStack_70;
  
  lVar18 = param_1;
  func_0x0046eab4();
  plVar15 = *(long **)(lVar18 + 0x70);
  *(undefined1 **)(lVar18 + 0x70) = (undefined1 *)((long)plVar15 + 1);
  uStack_70 = extraout_x8;
  FUN_0046de3c(&psStack_2a0);
  uStack_120 = *param_4;
  plVar16 = param_4 + 1;
  uStack_128 = param_3;
  (**(code **)(*plVar16 + 0x10))(alStack_118,plVar16);
  uStack_f0 = *param_5;
  (**(code **)(param_5[1] + 0x10))(alStack_e8,param_5 + 1);
  uStack_c0 = uStack_c0 & 0xffffff00;
  cStack_78 = '\0';
  plVar17 = *(long **)(param_1 + 0x80);
  if (plVar17 != (long *)0x0) {
    puVar7 = (undefined1 *)((long)plVar17 + -1);
    if (((ulong)plVar17 & (ulong)puVar7) == 0) {
      plVar16 = (long *)((ulong)puVar7 & (ulong)plVar15);
    }
    else {
      plVar16 = plVar15;
      if (plVar17 <= plVar15) {
        uVar3 = 0;
        if (plVar17 != (long *)0x0) {
          uVar3 = (ulong)plVar15 / (ulong)plVar17;
        }
        plVar16 = (long *)((long)plVar15 - uVar3 * (long)plVar17);
      }
    }
    plVar9 = *(long **)(*(long *)(param_1 + 0x78) + (long)plVar16 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_0046d4a8;
          plVar11 = (long *)plVar9[1];
          if (plVar11 != plVar15) break;
          if ((long *)plVar9[2] == plVar15) goto LAB_0046d810;
        }
        if (((ulong)plVar17 & (ulong)puVar7) == 0) {
          plVar11 = (long *)((ulong)plVar11 & (ulong)puVar7);
        }
        else if (plVar17 <= plVar11) {
          uVar3 = 0;
          if (plVar17 != (long *)0x0) {
            uVar3 = (ulong)plVar11 / (ulong)plVar17;
          }
          plVar11 = (long *)((long)plVar11 - uVar3 * (long)plVar17);
        }
      } while (plVar11 == plVar16);
    }
  }
LAB_0046d4a8:
  psVar6 = &section_00000248;
  __Znwm();
  plVar9 = (long *)(param_1 + 0x88);
  uStack_310 = 1;
  psVar6->sectname[0] = '\0';
  psVar6->sectname[1] = '\0';
  psVar6->sectname[2] = '\0';
  psVar6->sectname[3] = '\0';
  psVar6->sectname[4] = '\0';
  psVar6->sectname[5] = '\0';
  psVar6->sectname[6] = '\0';
  psVar6->sectname[7] = '\0';
  *(long **)(psVar6->sectname + 8) = plVar15;
  *(long **)psVar6->segname = plVar15;
  psStack_320 = psVar6;
  plStack_318 = plVar9;
  FUN_0046e188(psVar6->segname + 8,&psStack_2a0);
  *(undefined4 *)psVar6[5].sectname = uStack_128;
  *(undefined8 *)(psVar6[5].sectname + 8) = uStack_120;
  (**(code **)(alStack_118[0] + 0x10))(psVar6[5].segname,alStack_118);
  psVar6[5].reloff = (undefined4)uStack_f0;
  psVar6[5].nrelocs = uStack_f0._4_4_;
  (**(code **)(alStack_e8[0] + 0x10))(&psVar6[5].flags,alStack_e8);
  psVar6[6].segname[8] = '\0';
  psVar6[7].segname[0] = '\0';
  if (cStack_78 == '\x01') {
    *(uint *)(psVar6[6].segname + 8) = uStack_c0;
    psVar6[6].offset = (undefined4)uStack_a8;
    psVar6[6].align = uStack_a8._4_4_;
    psVar6[6].size = qStack_b0;
    psVar6[6].addr = qStack_b8;
    qStack_b0 = 0;
    qStack_b8 = 0;
    psVar6[6].reserved2 = (undefined4)uStack_90;
    psVar6[6].reserved3 = uStack_90._4_4_;
    psVar6[6].flags = (undefined4)uStack_98;
    psVar6[6].reserved1 = uStack_98._4_4_;
    psVar6[6].reloff = (undefined4)uStack_a0;
    psVar6[6].nrelocs = uStack_a0._4_4_;
    uStack_98 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_90 = 0;
    *(undefined4 *)(psVar6[7].sectname + 8) = uStack_80;
    *(undefined8 *)psVar6[7].sectname = uStack_88;
    psVar6[7].segname[0] = '\x01';
  }
  fVar19 = (float)(*(long *)(param_1 + 0x90) + 1);
  if ((plVar17 == (long *)0x0) || (*(float *)(param_1 + 0x98) * (float)plVar17 < fVar19)) {
    uVar3 = 1;
    if ((long *)((long)&MACH_HEADER.magic + 2) < plVar17) {
      uVar3 = (ulong)(((ulong)plVar17 & (ulong)((long)plVar17 + -1)) != 0);
    }
    plVar16 = (long *)(uVar3 | (long)plVar17 << 1);
    plVar17 = (long *)(long)(fVar19 / *(float *)(param_1 + 0x98));
    if (plVar16 <= plVar17) {
      plVar16 = plVar17;
    }
    if ((undefined1 *)((long)plVar16 - 1U) == (undefined1 *)0x0) {
      plVar16 = (long *)((long)&MACH_HEADER.magic + 2);
    }
    else if (((ulong)plVar16 & (long)plVar16 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    plVar17 = *(long **)(param_1 + 0x80);
    if (plVar17 < plVar16) {
LAB_0046d610:
      if ((ulong)plVar16 >> 0x3d != 0) goto LAB_0046d9f0;
      lVar18 = (long)plVar16 << 3;
      __Znwm(lVar18);
      func_0x0046e368(param_1 + 0x78,lVar18);
      *(long **)(param_1 + 0x80) = plVar16;
      lVar18 = *(long *)(param_1 + 0x78);
      for (plVar17 = (long *)0x0; plVar16 != plVar17; plVar17 = (long *)((long)plVar17 + 1)) {
        *(undefined8 *)(lVar18 + (long)plVar17 * 8) = 0;
      }
      plVar11 = (long *)*plVar9;
      plVar17 = plVar16;
      if (plVar11 != (long *)0x0) {
        plVar12 = (long *)plVar11[1];
        puVar7 = (undefined1 *)((long)plVar16 + -1);
        uVar3 = 0;
        if (plVar16 != (long *)0x0) {
          uVar3 = (ulong)plVar12 / (ulong)plVar16;
        }
        plVar13 = plVar12;
        if (plVar16 <= plVar12) {
          plVar13 = (long *)((long)plVar12 - uVar3 * (long)plVar16);
        }
        if (((ulong)plVar16 & (ulong)puVar7) == 0) {
          plVar13 = (long *)((ulong)plVar12 & (ulong)puVar7);
        }
        *(long **)(lVar18 + (long)plVar13 * 8) = plVar9;
        while (plVar12 = plVar11, plVar11 = (long *)*plVar12, plVar11 != (long *)0x0) {
          plVar14 = (long *)plVar11[1];
          if (((ulong)plVar16 & (ulong)puVar7) == 0) {
            plVar14 = (long *)((ulong)plVar14 & (ulong)puVar7);
          }
          else if (plVar16 <= plVar14) {
            uVar3 = 0;
            if (plVar16 != (long *)0x0) {
              uVar3 = (ulong)plVar14 / (ulong)plVar16;
            }
            plVar14 = (long *)((long)plVar14 - uVar3 * (long)plVar16);
          }
          if (plVar14 != plVar13) {
            if (*(long *)(lVar18 + (long)plVar14 * 8) == 0) {
              *(long **)(lVar18 + (long)plVar14 * 8) = plVar12;
              plVar13 = plVar14;
            }
            else {
              *plVar12 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar18 + (long)plVar14 * 8);
              **(long **)(lVar18 + (long)plVar14 * 8) = (long)plVar11;
              plVar11 = plVar12;
            }
          }
        }
      }
    }
    else if (plVar16 < plVar17) {
      plVar11 = (long *)(long)((float)*(ulong *)(param_1 + 0x90) / *(float *)(param_1 + 0x98));
      if ((plVar17 < (long *)((long)&MACH_HEADER.magic + 3)) ||
         (((ulong)plVar17 & (ulong)((long)plVar17 + -1)) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)((long)&MACH_HEADER.magic + 1) < plVar11) {
        plVar11 = (long *)(1L << (-LZCOUNT((undefined1 *)((long)plVar11 + -1)) & 0x3fU));
      }
      if (plVar16 <= plVar11) {
        plVar16 = plVar11;
      }
      if (plVar16 < plVar17) {
        if (plVar16 != (long *)0x0) goto LAB_0046d610;
        func_0x0046e368(param_1 + 0x78,0);
        *(undefined8 *)(param_1 + 0x80) = 0;
        plVar17 = (long *)0x0;
      }
      else {
        plVar17 = *(long **)(param_1 + 0x80);
      }
    }
    if (((ulong)plVar17 & (ulong)((long)plVar17 + -1)) == 0) {
      plVar16 = (long *)((ulong)((long)plVar17 + -1) & (ulong)plVar15);
    }
    else {
      plVar16 = plVar15;
      if (plVar17 <= plVar15) {
        uVar3 = 0;
        if (plVar17 != (long *)0x0) {
          uVar3 = (ulong)plVar15 / (ulong)plVar17;
        }
        plVar16 = (long *)((long)plVar15 - uVar3 * (long)plVar17);
      }
    }
  }
  lVar18 = *(long *)(param_1 + 0x78);
  puVar10 = *(undefined8 **)(lVar18 + (long)plVar16 * 8);
  if (puVar10 == (undefined8 *)0x0) {
    *(long *)psVar6->sectname = *plVar9;
    *plVar9 = (long)psVar6;
    *(long **)(lVar18 + (long)plVar16 * 8) = plVar9;
    if (*(long *)psVar6->sectname != 0) {
      plVar16 = *(long **)(*(long *)psVar6->sectname + 8);
      if (((ulong)plVar17 & (ulong)((long)plVar17 + -1)) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (ulong)((long)plVar17 + -1));
      }
      else if (plVar17 <= plVar16) {
        uVar3 = 0;
        if (plVar17 != (long *)0x0) {
          uVar3 = (ulong)plVar16 / (ulong)plVar17;
        }
        plVar16 = (long *)((long)plVar16 - uVar3 * (long)plVar17);
      }
      *(section **)(lVar18 + (long)plVar16 * 8) = psVar6;
    }
  }
  else {
    *(undefined8 *)psVar6->sectname = *puVar10;
    *puVar10 = psVar6;
  }
  psStack_320 = (section *)0x0;
  *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 1;
  func_0x0046eae0();
LAB_0046d810:
  FUN_0046df98(&psStack_2a0);
  plVar16 = *(long **)(param_1 + 0x28);
  (**(code **)(*plVar16 + 0x10))();
  func_0x0046e3c4(&psStack_2a0,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  plStack_318 = plStack_298;
  psStack_320 = psStack_2a0;
  if (plStack_298 != (long *)0x0) {
    do {
      func_0x0046eac4();
    } while (extraout_w10 != 0);
  }
  func_0x0046e400(&psStack_2a0);
  lVar18 = 1;
  while( true ) {
    plVar17 = *(long **)(param_1 + 0x28);
    uVar5 = lVar18 == 4;
    plStack_290 = plVar15;
    if ((bool)uVar5) break;
    lVar8 = *(long *)(&UNK_00803210 + lVar18 * 8);
    psStack_2a0 = psStack_320;
    plStack_298 = plStack_318;
    uStack_2a8 = (undefined4)lVar18;
    if (plStack_318 == (long *)0x0) {
      plStack_2b8 = (long *)0x0;
    }
    else {
      plVar9 = plStack_318 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = *plVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plStack_2b8 = plStack_318;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = *plVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    psStack_2c0 = psStack_320;
    pcStack_2d0 = FUN_0046e424;
    ppuStack_2c8 = &PTR_FUN_009e70a0;
    plStack_2b0 = plVar15;
    uStack_288 = uStack_2a8;
    (**(code **)(*plVar17 + 0x18))(plVar17,plVar16 + lVar8 * 0x1e848,&pcStack_2d0);
    func_0x0046e9f4(ppuStack_2c8);
    func_0x0046eafc();
    lVar18 = lVar18 + 1;
  }
  psStack_2a0 = psStack_320;
  plStack_298 = plStack_318;
  if (plStack_318 != (long *)0x0) {
    plVar9 = plStack_318 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = *plVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  pcStack_300 = FUN_0046e4e8;
  ppuStack_2f8 = &PTR_FUN_009e70b8;
  psStack_2f0 = psStack_320;
  plStack_2e8 = plStack_318;
  if (plStack_318 != (long *)0x0) {
    plVar9 = plStack_318 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = *plVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plStack_2e0 = plVar15;
  (**(code **)(*plVar17 + 0x18))(plVar17,plVar16 + 1250000000,&pcStack_300);
  func_0x0046e9f4(ppuStack_2f8);
  func_0x0046eafc();
  FUN_0046da4c(param_1,plVar15,0);
  func_0x0046e164(&psStack_320);
  func_0x0046ea50(uStack_70);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
LAB_0046d9f0:
  FUN_0040cee8();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x46d9f8);
  (*pcVar4)();
}



/* Entry: 0046da4c; end: 0046dc1b;  */

long * FUN_0046da4c(long param_1,code **param_2,code **param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined1 in_ZR;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  code **ppcVar7;
  code **ppcVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar9;
  ulong uVar10;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 uVar17;
  code **ppcVar18;
  long lStack_178;
  long alStack_170 [5];
  undefined8 uStack_148;
  long lStack_140;
  code **ppcStack_138;
  code **ppcStack_130;
  long *plStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  long lStack_108;
  long lStack_100;
  code **ppcStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long lStack_e8;
  long lStack_e0;
  code **ppcStack_d8;
  undefined4 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  long lStack_a0;
  code **ppcStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  long lStack_70;
  code **ppcStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  
  lVar9 = param_1;
  ppcVar7 = param_2;
  ppcVar8 = param_3;
  func_0x0046eab4();
  lVar9 = lVar9 + 0x78;
  uStack_58 = extraout_x8;
  func_0x0046e688();
  plVar4 = (long *)0x0;
  ppcVar18 = param_2;
  if (lVar9 != 0) {
    func_0x0046e3c4(&lStack_e8,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    lStack_c8 = lStack_e8;
    lStack_c0 = lStack_e0;
    if (lStack_e0 != 0) {
      do {
        func_0x0046eac4();
      } while (extraout_w10 != 0);
    }
    func_0x0046e400(&lStack_e8);
    plVar4 = *(long **)(param_1 + 0x18);
    ppcVar8 = (code **)(ulong)*(uint *)(lVar9 + 400);
    if (lStack_e0 != 0) {
      do {
        func_0x0046eac4();
      } while (extraout_w10_00 != 0);
    }
    uVar17 = SUB84(param_3,0);
    pcStack_88 = FUN_0046e720;
    ppuStack_80 = &PTR_FUN_009e70d0;
    lStack_78 = lStack_e8;
    lStack_70 = lStack_e0;
    ppcStack_d8 = param_2;
    uStack_d0 = uVar17;
    ppcStack_68 = param_2;
    uStack_60 = uVar17;
    if (lStack_e0 != 0) {
      do {
        func_0x0046eac4();
      } while (extraout_w10_01 != 0);
      ppcStack_68 = ppcStack_d8;
      uStack_60 = uStack_d0;
      do {
        func_0x0046eac4();
      } while (extraout_w10_02 != 0);
    }
    lStack_108 = lStack_e8;
    lStack_100 = lStack_e0;
    uStack_f0 = *(undefined4 *)(lVar9 + 400);
    pcStack_b8 = FUN_0046e7c8;
    ppuStack_b0 = &PTR_FUN_009e70e8;
    lStack_a8 = lStack_e8;
    lStack_a0 = lStack_e0;
    if (lStack_e0 != 0) {
      plVar5 = (long *)(lStack_e0 + 0x10);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_3 = &pcStack_88;
    ppcVar18 = &pcStack_b8;
    uStack_90 = CONCAT44(uVar17,uStack_f0);
    ppcVar7 = (code **)(lVar9 + 0x18);
    ppcStack_f8 = param_2;
    uStack_ec = uVar17;
    ppcStack_98 = param_2;
    (**(code **)(*plVar4 + 0x10))();
    func_0x0046ea9c();
    func_0x0046e164(&lStack_108);
    func_0x0046ea8c();
    func_0x0046e164(&lStack_e8);
    plVar4 = &lStack_c8;
    func_0x0046e164();
  }
  func_0x0046ea50(uStack_58);
  if ((bool)in_ZR) {
    return plVar4;
  }
  ___stack_chk_fail();
  func_0x0046ea9c();
  func_0x0046e164(&lStack_108);
  func_0x0046ea8c();
  func_0x0046e164(&lStack_e8);
  plVar5 = &lStack_c8;
  func_0x0046e164();
  func_0x0046ea48();
  pcStack_118 = FUN_0046dc1c;
  plVar6 = plVar5;
  lStack_140 = param_1;
  ppcStack_138 = ppcVar18;
  ppcStack_130 = param_3;
  plStack_128 = plVar4;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x0046eab4();
  plVar6 = plVar6 + 0xf;
  uStack_148 = extraout_x8_00;
  func_0x0046e688();
  plVar4 = (long *)0x0;
  if (plVar6 == (long *)0x0) goto LAB_0046dda8;
  lStack_178 = plVar6[0x39];
  plVar4 = alStack_170;
  ppcVar7 = (code **)(plVar6 + 0x3a);
  (**(code **)(plVar6[0x3a] + 0x10))();
  uVar11 = plVar5[0x10];
  lVar9 = *plVar6;
  uVar10 = plVar6[1];
  uVar13 = uVar11 - 1;
  if ((uVar11 & uVar13) == 0) {
    uVar10 = uVar13 & uVar10;
  }
  else if (uVar11 <= uVar10) {
    uVar15 = 0;
    if (uVar11 != 0) {
      uVar15 = uVar10 / uVar11;
    }
    uVar10 = uVar10 - uVar15 * uVar11;
  }
  lVar14 = plVar5[0xf];
  plVar3 = *(long **)(lVar14 + uVar10 * 8);
  do {
    plVar12 = plVar3;
    plVar3 = (long *)*plVar12;
  } while ((long *)*plVar12 != plVar6);
  in_ZR = true;
  if (plVar12 == plVar5 + 0x11) {
LAB_0046dce8:
    if (lVar9 == 0) {
LAB_0046dd1c:
      *(undefined8 *)(lVar14 + uVar10 * 8) = 0;
      lVar9 = *plVar6;
      goto LAB_0046dd24;
    }
    uVar15 = *(ulong *)(lVar9 + 8);
    if ((uVar11 & uVar13) == 0) {
      uVar16 = uVar15 & uVar13;
    }
    else {
      uVar16 = uVar15;
      if (uVar11 <= uVar15) {
        uVar16 = 0;
        if (uVar11 != 0) {
          uVar16 = uVar15 / uVar11;
        }
        uVar16 = uVar15 - uVar16 * uVar11;
      }
    }
    in_ZR = uVar16 == uVar10;
    if (!(bool)in_ZR) goto LAB_0046dd1c;
LAB_0046dd2c:
    if ((uVar11 & uVar13) == 0) {
      uVar15 = uVar15 & uVar13;
    }
    else if (uVar11 <= uVar15) {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = uVar15 / uVar11;
      }
      uVar15 = uVar15 - uVar13 * uVar11;
    }
    in_ZR = uVar15 == uVar10;
    if (!(bool)in_ZR) {
      *(long **)(lVar14 + uVar15 * 8) = plVar12;
      lVar9 = *plVar6;
    }
  }
  else {
    uVar15 = plVar12[1];
    if ((uVar11 & uVar13) == 0) {
      uVar15 = uVar15 & uVar13;
    }
    else if (uVar11 <= uVar15) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = uVar15 / uVar11;
      }
      uVar15 = uVar15 - uVar16 * uVar11;
    }
    in_ZR = uVar15 == uVar10;
    if (!(bool)in_ZR) goto LAB_0046dce8;
LAB_0046dd24:
    if (lVar9 != 0) {
      uVar15 = *(ulong *)(lVar9 + 8);
      goto LAB_0046dd2c;
    }
  }
  *plVar12 = lVar9;
  *plVar6 = 0;
  plVar5[0x12] = plVar5[0x12] + -1;
  func_0x0046eae0();
  if ((*(byte *)(alStack_170[0] + 8) & 1) == 0) {
    plVar4 = &lStack_178;
    FUN_00464718();
    ppcVar7 = ppcVar8;
  }
  func_0x0046e9f4(alStack_170[0]);
LAB_0046dda8:
  func_0x0046ea50(uStack_148);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0046e9f4(alStack_170[0]);
    func_0x0046ea48();
    *(undefined4 *)plVar4 = *(undefined4 *)ppcVar7;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar4 + 1,ppcVar7 + 1)
    ;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar4 + 4,ppcVar7 + 4)
    ;
    uVar17 = *(undefined4 *)(ppcVar7 + 8);
    plVar4[7] = (long)ppcVar7[7];
    *(undefined4 *)(plVar4 + 8) = uVar17;
    return plVar4;
  }
  return plVar4;
}



/* Entry: 0046dc1c; end: 0046dddb;  */

long * FUN_0046dc1c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_x8;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lStack_68;
  long alStack_60 [5];
  undefined8 uStack_38;
  
  lVar4 = param_1;
  func_0x0046eab4();
  plVar2 = (long *)(lVar4 + 0x78);
  uStack_38 = extraout_x8;
  func_0x0046e688();
  plVar3 = (long *)0x0;
  if (plVar2 == (long *)0x0) goto LAB_0046dda8;
  lStack_68 = plVar2[0x39];
  plVar3 = alStack_60;
  param_2 = plVar2 + 0x3a;
  (**(code **)(plVar2[0x3a] + 0x10))();
  uVar6 = *(ulong *)(param_1 + 0x80);
  lVar4 = *plVar2;
  uVar5 = plVar2[1];
  uVar8 = uVar6 - 1;
  if ((uVar6 & uVar8) == 0) {
    uVar5 = uVar8 & uVar5;
  }
  else if (uVar6 <= uVar5) {
    uVar10 = 0;
    if (uVar6 != 0) {
      uVar10 = uVar5 / uVar6;
    }
    uVar5 = uVar5 - uVar10 * uVar6;
  }
  lVar9 = *(long *)(param_1 + 0x78);
  plVar1 = *(long **)(lVar9 + uVar5 * 8);
  do {
    plVar7 = plVar1;
    plVar1 = (long *)*plVar7;
  } while ((long *)*plVar7 != plVar2);
  in_ZR = true;
  if (plVar7 == (long *)(param_1 + 0x88)) {
LAB_0046dce8:
    if (lVar4 == 0) {
LAB_0046dd1c:
      *(undefined8 *)(lVar9 + uVar5 * 8) = 0;
      lVar4 = *plVar2;
      goto LAB_0046dd24;
    }
    uVar10 = *(ulong *)(lVar4 + 8);
    if ((uVar6 & uVar8) == 0) {
      uVar11 = uVar10 & uVar8;
    }
    else {
      uVar11 = uVar10;
      if (uVar6 <= uVar10) {
        uVar11 = 0;
        if (uVar6 != 0) {
          uVar11 = uVar10 / uVar6;
        }
        uVar11 = uVar10 - uVar11 * uVar6;
      }
    }
    in_ZR = uVar11 == uVar5;
    if (!(bool)in_ZR) goto LAB_0046dd1c;
LAB_0046dd2c:
    if ((uVar6 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar6 <= uVar10) {
      uVar8 = 0;
      if (uVar6 != 0) {
        uVar8 = uVar10 / uVar6;
      }
      uVar10 = uVar10 - uVar8 * uVar6;
    }
    in_ZR = uVar10 == uVar5;
    if (!(bool)in_ZR) {
      *(long **)(lVar9 + uVar10 * 8) = plVar7;
      lVar4 = *plVar2;
    }
  }
  else {
    uVar10 = plVar7[1];
    if ((uVar6 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar6 <= uVar10) {
      uVar11 = 0;
      if (uVar6 != 0) {
        uVar11 = uVar10 / uVar6;
      }
      uVar10 = uVar10 - uVar11 * uVar6;
    }
    in_ZR = uVar10 == uVar5;
    if (!(bool)in_ZR) goto LAB_0046dce8;
LAB_0046dd24:
    if (lVar4 != 0) {
      uVar10 = *(ulong *)(lVar4 + 8);
      goto LAB_0046dd2c;
    }
  }
  *plVar7 = lVar4;
  *plVar2 = 0;
  *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + -1;
  func_0x0046eae0();
  if ((*(byte *)(alStack_60[0] + 8) & 1) == 0) {
    plVar3 = &lStack_68;
    FUN_00464718();
    param_2 = param_3;
  }
  func_0x0046e9f4(alStack_60[0]);
LAB_0046dda8:
  func_0x0046ea50(uStack_38);
  if ((bool)in_ZR) {
    return plVar3;
  }
  ___stack_chk_fail();
  func_0x0046e9f4(alStack_60[0]);
  func_0x0046ea48();
  *(int *)plVar3 = (int)*param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar3 + 1,param_2 + 1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar3 + 4,param_2 + 4);
  lVar4 = param_2[8];
  plVar3[7] = param_2[7];
  *(int *)(plVar3 + 8) = (int)lVar4;
  return plVar3;
}



/* Entry: 0046dddc; end: 0046de23;  */

undefined4 * FUN_0046dddc(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 2,param_2 + 2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 8,param_2 + 8);
  uVar1 = param_2[0x10];
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  param_1[0x10] = uVar1;
  return param_1;
}



/* Entry: 0046de24; end: 0046de27;  */

long FUN_0046de24(long param_1)

{
  func_0x0046e07c(param_1 + 0x78);
  (*(code *)**(undefined8 **)(param_1 + 0x48))();
  FUN_0046e11c(param_1 + 0x28);
  func_0x0046e140(param_1 + 0x18);
  func_0x0046e164(param_1 + 8);
  return param_1;
}



/* Entry: 0046de28; end: 0046de3b;  */

void FUN_0046de28(void)

{
  func_0x0046e030();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0046de3c; end: 0046df97;  */

long FUN_0046de3c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (lVar1 + 0x30,param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  uVar4 = *(undefined8 *)(param_2 + 0x51);
  *(undefined8 *)(param_1 + 0x59) = *(undefined8 *)(param_2 + 0x59);
  *(undefined8 *)(param_1 + 0x51) = uVar4;
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  FUN_00459e04(param_1 + 0x68,param_2 + 0x68);
  FUN_00459e04(param_1 + 0x88,param_2 + 0x88);
  uVar3 = *(undefined8 *)(param_2 + 0xb0);
  uVar2 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = uVar3;
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0xc0,param_2 + 0xc0);
  FUN_00459e04(param_1 + 0xd8,param_2 + 0xd8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0xf8,param_2 + 0xf8);
  FUN_00459e04(param_1 + 0x110,param_2 + 0x110);
  FUN_00459e04(param_1 + 0x130,param_2 + 0x130);
  FUN_00459e04(param_1 + 0x150,param_2 + 0x150);
  *(undefined1 *)(param_1 + 0x170) = *(undefined1 *)(param_2 + 0x170);
  return param_1;
}



/* Entry: 0046df98; end: 0046dfdf;  */

void FUN_0046df98(long param_1)

{
  FUN_0046dfe0(param_1 + 0x1e0);
  (*(code *)**(undefined8 **)(param_1 + 0x1b8))(param_1 + 0x1b8);
  (*(code *)**(undefined8 **)(param_1 + 0x188))(param_1 + 0x188);
  FUN_00457530(param_1 + 0x150);
  FUN_00457530(param_1 + 0x130);
  FUN_00457530(param_1 + 0x110);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xf8);
  FUN_00457530(param_1 + 0xd8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xc0);
  FUN_00457530(param_1 + 0x88);
  FUN_00457530(param_1 + 0x68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
            (param_1);
  return;
}



/* Entry: 0046dfe0; end: 0046dfff;  */

void FUN_0046dfe0(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_00464a10();
  }
  return;
}



/* Entry: 0046e000; end: 0046e103;  */

undefined4 * FUN_0046e000(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,param_3);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  return param_1;
}



/* Entry: 0046e104; end: 0046e11b;  */

void FUN_0046e104(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0046e11c; end: 0046e187;  */

void FUN_0046e11c(long param_1)

{
  func_0x0046eb04();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 0046e188; end: 0046e37f;  */

void FUN_0046e188(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
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
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  param_1[8] = param_2[8];
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[6] = 0;
  uVar2 = param_2[10];
  uVar1 = param_2[9];
  uVar4 = *(undefined8 *)((long)param_2 + 0x59);
  uVar3 = *(undefined8 *)((long)param_2 + 0x51);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined8 *)((long)param_1 + 0x59) = uVar4;
  *(undefined8 *)((long)param_1 + 0x51) = uVar3;
  param_1[10] = uVar2;
  param_1[9] = uVar1;
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (*(char *)(param_2 + 0x10) == '\x01') {
    uVar2 = param_2[0xe];
    uVar1 = param_2[0xd];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar2;
    param_1[0xd] = uVar1;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0xd] = 0;
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  if (*(char *)(param_2 + 0x14) == '\x01') {
    uVar2 = param_2[0x12];
    uVar1 = param_2[0x11];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar2;
    param_1[0x11] = uVar1;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x11] = 0;
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  uVar2 = param_2[0x16];
  uVar1 = param_2[0x15];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = uVar2;
  param_1[0x15] = uVar1;
  uVar2 = param_2[0x19];
  uVar1 = param_2[0x18];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x19] = uVar2;
  param_1[0x18] = uVar1;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x18] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  if (*(char *)(param_2 + 0x1e) == '\x01') {
    uVar2 = param_2[0x1c];
    uVar1 = param_2[0x1b];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1c] = uVar2;
    param_1[0x1b] = uVar1;
    param_2[0x1c] = 0;
    param_2[0x1d] = 0;
    param_2[0x1b] = 0;
    *(undefined1 *)(param_1 + 0x1e) = 1;
  }
  uVar2 = param_2[0x20];
  uVar1 = param_2[0x1f];
  param_1[0x21] = param_2[0x21];
  param_1[0x20] = uVar2;
  param_1[0x1f] = uVar1;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  if (*(char *)(param_2 + 0x25) == '\x01') {
    uVar2 = param_2[0x23];
    uVar1 = param_2[0x22];
    param_1[0x24] = param_2[0x24];
    param_1[0x23] = uVar2;
    param_1[0x22] = uVar1;
    param_2[0x23] = 0;
    param_2[0x24] = 0;
    param_2[0x22] = 0;
    *(undefined1 *)(param_1 + 0x25) = 1;
  }
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  if (*(char *)(param_2 + 0x29) == '\x01') {
    uVar2 = param_2[0x27];
    uVar1 = param_2[0x26];
    param_1[0x28] = param_2[0x28];
    param_1[0x27] = uVar2;
    param_1[0x26] = uVar1;
    param_2[0x27] = 0;
    param_2[0x28] = 0;
    param_2[0x26] = 0;
    *(undefined1 *)(param_1 + 0x29) = 1;
  }
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  if (*(char *)(param_2 + 0x2d) == '\x01') {
    uVar2 = param_2[0x2b];
    uVar1 = param_2[0x2a];
    param_1[0x2c] = param_2[0x2c];
    param_1[0x2b] = uVar2;
    param_1[0x2a] = uVar1;
    param_2[0x2b] = 0;
    param_2[0x2c] = 0;
    param_2[0x2a] = 0;
    *(undefined1 *)(param_1 + 0x2d) = 1;
  }
  *(undefined1 *)(param_1 + 0x2e) = *(undefined1 *)(param_2 + 0x2e);
  return;
}



/* Entry: 0046e380; end: 0046e423;  */

long * FUN_0046e380(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_0046df98(lVar1 + 0x18);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 0046e424; end: 0046e46f;  */

void FUN_0046e424(long param_1)

{
  long alStack_30 [2];
  
  FUN_0046e470(alStack_30,param_1 + 0x10);
  if (alStack_30[0] != 0) {
    FUN_0046da4c(alStack_30[0],*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  }
  func_0x0046ea84();
  return;
}



/* Entry: 0046e470; end: 0046e4af;  */

void FUN_0046e470(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 0046e4b0; end: 0046e4e7;  */

void FUN_0046e4b0(long param_1)

{
  param_1 = param_1 + 8;
  func_0x0046eb04();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 0046e4e8; end: 0046e647;  */

void FUN_0046e4e8(long param_1)

{
  long *plVar1;
  long alStack_d8 [2];
  undefined4 auStack_c8 [2];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [24];
  undefined4 auStack_68 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  uint uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  
  plVar1 = alStack_d8;
  FUN_0046e470(plVar1,param_1 + 0x10);
  if ((alStack_d8[0] != 0) && (func_0x0046eaf0(), plVar1 != (long *)0x0)) {
    auStack_68[0] = 0;
    uStack_2c = uStack_2c & 0xffffff00;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_30 = uStack_30 & 0xffffff00;
    uStack_28 = 0;
    if ((char)plVar1[0x48] == '\x01') {
      FUN_0046dddc(auStack_68,plVar1 + 0x3f);
    }
    else {
      FUN_00425cb4(auStack_80,"ACK logical deadline exceeded");
      FUN_0046e000(auStack_c8,4,auStack_80);
      FUN_00469ae8(auStack_68,auStack_c8);
      func_0x0046eae8();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
    }
    uStack_98 = uStack_38;
    uStack_28 = CONCAT13(1,(undefined3)uStack_28);
    auStack_c8[0] = auStack_68[0];
    uStack_b8 = uStack_58;
    uStack_c0 = uStack_60;
    uStack_b0 = uStack_50;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_a0 = uStack_40;
    uStack_a8 = uStack_48;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_88 = uStack_28;
    uStack_90 = CONCAT44(uStack_2c,uStack_30);
    uStack_38 = 0;
    func_0x0046ea64();
    func_0x0046eae8();
    FUN_00464a10(auStack_68);
  }
  func_0x0046e400(alStack_d8);
  return;
}



/* Entry: 0046e648; end: 0046e71f;  */

void FUN_0046e648(long param_1)

{
  param_1 = param_1 + 8;
  func_0x0046eb04();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 0046e720; end: 0046e78f;  */

void FUN_0046e720(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long alStack_30 [2];
  
  FUN_0046e470(alStack_30,param_2 + 0x10);
  if (alStack_30[0] != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    lVar2 = alStack_30[0] + 0x78;
    func_0x0046e688(lVar2,*(undefined8 *)(param_2 + 0x20));
    if ((lVar2 != 0) && ((*(byte *)(*(long *)(lVar2 + 0x1a0) + 8) & 1) == 0)) {
      (**(code **)(lVar2 + 0x198))(uVar1,lVar2 + 0x198);
    }
  }
  func_0x0046ea84();
  return;
}



/* Entry: 0046e790; end: 0046e7c7;  */

void FUN_0046e790(long param_1)

{
  param_1 = param_1 + 8;
  func_0x0046eb04();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 0046e7c8; end: 0046e9b3;  */

void FUN_0046e7c8(int *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int aiStack_138 [2];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  int iStack_f8;
  int aiStack_f0 [2];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  int iStack_b0;
  long alStack_a8 [2];
  undefined1 auStack_98 [72];
  
  uStack_128 = *(undefined8 *)(param_1 + 4);
  uStack_130 = *(undefined8 *)(param_1 + 2);
  uStack_120 = *(undefined8 *)(param_1 + 6);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uStack_110 = *(undefined8 *)(param_1 + 10);
  uStack_118 = *(undefined8 *)(param_1 + 8);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  iStack_f8 = param_1[0x10];
  uStack_108 = *(undefined8 *)(param_1 + 0xc);
  uStack_100 = *(undefined8 *)(param_1 + 0xe);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  iVar8 = *param_1;
  aiStack_138[0] = iVar8;
  FUN_0046e470(alStack_a8,param_2 + 0x10);
  uVar4 = uStack_108;
  uVar3 = uStack_110;
  uVar2 = uStack_118;
  if (alStack_a8[0] == 0) goto LAB_0046e954;
  piVar6 = (int *)(ulong)*(uint *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x2c);
  uStack_e0 = uStack_128;
  uStack_e8 = uStack_130;
  uStack_d8 = uStack_120;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  iStack_b0 = iStack_f8;
  uStack_c8 = uVar3;
  uStack_d0 = uVar2;
  uStack_c0 = uVar4;
  uStack_b8 = uStack_100;
  piVar5 = aiStack_f0;
  aiStack_f0[0] = iVar8;
  func_0x0046327c();
  piVar7 = piVar5;
  if ((*(byte *)(*(long *)(alStack_a8[0] + 0x48) + 8) & 1) == 0) {
    (**(code **)(alStack_a8[0] + 0x40))(piVar6,uVar1,aiStack_f0,piVar5);
    piVar7 = piVar6;
  }
  func_0x0046eaf0();
  if (piVar7 != (int *)0x0) {
    if ((char)piVar7[0x90] == '\x01') {
      FUN_0046dddc(piVar7 + 0x7e,aiStack_f0);
    }
    else {
      FUN_004648ec(piVar7 + 0x7e,aiStack_f0);
      *(undefined8 *)(piVar7 + 0x8c) = uStack_b8;
      piVar7[0x8e] = iStack_b0;
      *(undefined1 *)(piVar7 + 0x90) = 1;
    }
    iVar8 = (int)piVar5;
    if ((iVar8 == 0) || (aiStack_f0[0] == 1)) {
      func_0x0046ea08(auStack_98);
      func_0x0046ea64();
    }
    else {
      if ((*(int *)(alStack_a8[0] + 0x38) != 0) || (iVar8 != 4 && iVar8 != 1)) goto LAB_0046e94c;
      func_0x0046ea08(auStack_98);
      func_0x0046ea64();
    }
    FUN_00464a10(piVar5);
  }
LAB_0046e94c:
  FUN_00464a10(aiStack_f0);
LAB_0046e954:
  func_0x0046e400(alStack_a8);
  FUN_00464a10(aiStack_138);
  return;
}



/* Entry: 0046e9b4; end: 0046eb0f;  */

void FUN_0046e9b4(long param_1)

{
  param_1 = param_1 + 8;
  func_0x0046eb04();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 0046eb10; end: 0046ec0b;  */

void FUN_0046eb10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined1 param_6,undefined1 param_7)

{
  qword *pqVar1;
  long unaff_x19;
  undefined1 auStack_200 [128];
  undefined1 auStack_180 [48];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 uStack_130;
  undefined1 uStack_12f;
  undefined1 auStack_128 [216];
  
  func_0x0046fb78();
  FUN_0046eda4(auStack_200);
  FUN_0046ee70(auStack_180,param_3);
  uStack_148 = param_4[1];
  uStack_150 = *param_4;
  *param_4 = 0;
  param_4[1] = 0;
  uStack_138 = param_5[1];
  uStack_140 = *param_5;
  *param_5 = 0;
  param_5[1] = 0;
  *(undefined1 *)(unaff_x19 + 8) = 0;
  *(undefined1 *)(unaff_x19 + 0x18) = 0;
  uStack_130 = param_6;
  uStack_12f = param_7;
  FUN_0046f114(auStack_128,auStack_200);
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  pqVar1 = &section_000000b8.size;
  __Znwm();
  *pqVar1 = (qword)&PTR_SUB_009e7150;
  FUN_0046f114(pqVar1 + 1,auStack_128);
  *(qword **)(unaff_x19 + 0x38) = pqVar1;
  FUN_0046ec0c(auStack_128);
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  FUN_0046ec0c(auStack_200);
  return;
}



/* Entry: 0046ec0c; end: 0046ec43;  */

void FUN_0046ec0c(long param_1)

{
  FUN_00466d48(param_1 + 0xc0);
  func_0x0045a078(param_1 + 0xb0);
  FUN_0046ef3c(param_1 + 0x80);
  FUN_00457530(param_1 + 0x58);
  FUN_00457530(param_1 + 0x38);
  FUN_00457530(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
            (param_1);
  return;
}



/* Entry: 0046ec44; end: 0046ed8b;  */

long * FUN_0046ec44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                   undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  int extraout_w10;
  long lStack_c0;
  undefined8 **ppuStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [40];
  undefined8 uStack_78;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  lStack_c0 = param_1 + 8;
  if (*(long *)(param_1 + 0x40) != -1) {
    plStack_b0 = &lStack_c0;
    ppuStack_b8 = &plStack_b0;
    __ZNSt3__111__call_onceERVmPvPFvS2_E((long *)(param_1 + 0x40),&ppuStack_b8,0x46f030);
  }
  plVar1 = *(long **)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x0046fb4c();
    } while (extraout_w10 != 0);
  }
  uStack_78 = *param_4;
  (**(code **)(param_4[1] + 0x10))(auStack_70,param_4 + 1);
  uStack_a8 = *param_5;
  (**(code **)(param_5[1] + 0x10))(auStack_a0,param_5 + 1);
  (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3,&uStack_78,&uStack_a8);
  func_0x0046fb34();
  func_0x0046fb24();
  func_0x0046fb5c();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return plVar1;
  }
  ___stack_chk_fail();
  plVar2 = plVar1;
  func_0x0046fb44();
  func_0x0046fb78();
  plVar3 = (long *)plVar2[7];
  if (plVar3 == plVar2 + 4) {
    lVar4 = 0x20;
  }
  else {
    if (plVar3 == (long *)0x0) goto LAB_0046f0e0;
    lVar4 = 0x28;
  }
  (**(code **)(*plVar3 + lVar4))();
LAB_0046f0e0:
  FUN_0046f0f4(plVar1 + 1);
  return plVar1;
}



/* Entry: 0046ed8c; end: 0046ed8f;  */

void FUN_0046ed8c(long param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x19;
  
  func_0x0046fb78();
  plVar1 = *(long **)(param_1 + 0x38);
  if (plVar1 == (long *)(param_1 + 0x20)) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0046f0e0;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_0046f0e0:
  FUN_0046f0f4(unaff_x19 + 8);
  return;
}


