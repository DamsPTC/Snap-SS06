/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103c89650; end: 103c89653;  */

void FUN_103c89650(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffdc60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6d7f8;
  func_0x000107c61520(&UNK_10dc6d7f8,&UNK_1106f3798);
  puRam0000000112ffdc60 = puVar1;
  return;
}



/* Entry: 103c89654; end: 103c89693;  */

void FUN_103c89654(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffdc60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6d7f8;
  func_0x000107c61520(&UNK_10dc6d7f8,&UNK_1106f3798);
  puRam0000000112ffdc60 = puVar1;
  return;
}



/* Entry: 103c89694; end: 103c896cf;  */

void FUN_103c89694(void)

{
  return;
}



/* Entry: 103c896d0; end: 103c89707;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103c896d0(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(ulong *)(param_1 + 0x38);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x40) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x40) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103c89708; end: 103c89787;  */

undefined8 * FUN_103c89708(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[6] = uVar2;
  uVar4 = param_2[8];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar3,uVar4);
  param_1[7] = uVar3;
  param_1[8] = uVar4;
  return param_1;
}



/* Entry: 103c89788; end: 103c89837;  */

undefined8 * FUN_103c89788(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar4;
  uVar4 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[3] = param_2[3];
  uVar4 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[5] = param_2[5];
  uVar4 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_2[7];
  uVar2 = param_2[8];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[7];
  uVar3 = param_1[8];
  param_1[7] = uVar4;
  param_1[8] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  return param_1;
}



/* Entry: 103c89838; end: 103c898ab;  */

undefined8 * FUN_103c89838(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[6];
  uVar2 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[7];
  uVar2 = param_1[8];
  uVar3 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103c898ac; end: 103c89953;  */

int FUN_103c898ac(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103c89954; end: 103c899af;  */

/* WARNING: Possible PIC construction at 0x000103c8999c: Changing call to branch */

void FUN_103c89954(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x38));
  if (*(long *)(param_1 + 0x58) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    uVar3 = *(ulong *)(param_1 + 0x80);
  }
  else {
    func_0x000107c6142c();
    func_0x000107c6142c(*(undefined8 *)(param_1 + 0x60));
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    uVar3 = *(ulong *)(param_1 + 0x70);
    unaff_x30 = 0x103c899a0;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  uVar4 = (uint)(uVar3 >> 0x3e);
  if (uVar4 != 1) {
    if (uVar4 != 2) {
      return;
    }
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x000107c61574(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar3 & 0x3fffffffffffffff);
  return;
}



/* Entry: 103c899b0; end: 103c89c73;  */

undefined8 * FUN_103c899b0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  uVar4 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar4;
  uVar2 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  lVar1 = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar2);
  if (lVar1 == 0) {
    uVar3 = param_2[8];
    uVar2 = param_2[0xb];
    uVar4 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar3;
    param_1[0xb] = uVar2;
    param_1[10] = uVar4;
    uVar3 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar3;
    param_1[0xe] = param_2[0xe];
  }
  else {
    param_1[8] = param_2[8];
    uVar3 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar3;
    uVar3 = param_2[0xc];
    uVar4 = param_2[0xd];
    param_1[0xb] = lVar1;
    param_1[0xc] = uVar3;
    uVar2 = param_2[0xe];
    func_0x000107c61434(lVar1);
    func_0x000107c61434(uVar3);
    func_0x00010006c00c(uVar4,uVar2);
    param_1[0xd] = uVar4;
    param_1[0xe] = uVar2;
  }
  uVar3 = param_2[0xf];
  uVar4 = param_2[0x10];
  func_0x00010006c00c(uVar3,uVar4);
  param_1[0xf] = uVar3;
  param_1[0x10] = uVar4;
  return param_1;
}



/* Entry: 103c89c74; end: 103c89d7f;  */

undefined8 FUN_103c89c74(undefined8 param_1)

{
  func_0x000100d6a8c8(param_1,&UNK_1106f2df8);
  return param_1;
}



/* Entry: 103c89d80; end: 103c89e57;  */

int FUN_103c89d80(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x22] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103c89e58; end: 103c89e87;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103c89e58(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(ulong *)(param_1 + 0x28);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x30) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x30) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103c89e88; end: 103c89f7f;  */

undefined8 * FUN_103c89e88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  uVar3 = param_2[5];
  uVar2 = param_2[6];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x00010006c00c(uVar3,uVar2);
  param_1[5] = uVar3;
  param_1[6] = uVar2;
  return param_1;
}



/* Entry: 103c89f80; end: 103c89fdb;  */

undefined8 * FUN_103c89f80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  func_0x000107c6142c(param_1[3]);
  uVar1 = param_1[4];
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103c89fdc; end: 103c8a07f;  */

int FUN_103c89fdc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103c8a080; end: 103c8a0af;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103c8a080(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(ulong *)(param_1 + 0x20);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x28) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x28) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103c8a0b0; end: 103c8a18f;  */

undefined8 * FUN_103c8a0b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar1,uVar3);
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  return param_1;
}



/* Entry: 103c8a190; end: 103c8a1e3;  */

undefined8 * FUN_103c8a190(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103c8a1e4; end: 103c8a287;  */

int FUN_103c8a1e4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103c8a288; end: 103c8a2bf;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103c8a288(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(ulong *)(param_1 + 0x40);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x48) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x48) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103c8a2c0; end: 103c8a33f;  */

undefined8 * FUN_103c8a2c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  uVar1 = param_2[8];
  uVar4 = param_2[9];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x00010006c00c(uVar1,uVar4);
  param_1[8] = uVar1;
  param_1[9] = uVar4;
  return param_1;
}



/* Entry: 103c8a340; end: 103c8a3f7;  */

undefined8 * FUN_103c8a340(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar4;
  param_1[2] = param_2[2];
  uVar4 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[4] = param_2[4];
  uVar4 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[6] = param_2[6];
  uVar4 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_2[8];
  uVar2 = param_2[9];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[8];
  uVar3 = param_1[9];
  param_1[8] = uVar4;
  param_1[9] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  return param_1;
}



/* Entry: 103c8a3f8; end: 103c8a46b;  */

undefined8 * FUN_103c8a3f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[8];
  uVar2 = param_1[9];
  uVar3 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103c8a46c; end: 103c8a517;  */

int FUN_103c8a46c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103c8a518; end: 103c8a547;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103c8a518(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(ulong *)(param_1 + 0x28);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x30) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x30) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103c8a548; end: 103c8a637;  */

undefined8 * FUN_103c8a548(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  uVar3 = param_2[4];
  uVar1 = param_2[5];
  param_1[4] = uVar3;
  uVar2 = param_2[6];
  func_0x000107c61434();
  func_0x000107c61434(uVar3);
  func_0x00010006c00c(uVar1,uVar2);
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  return param_1;
}



/* Entry: 103c8a638; end: 103c8a693;  */

undefined8 * FUN_103c8a638(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103c8a694; end: 103c8a737;  */

int FUN_103c8a694(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103c8a738; end: 103c8a7bb;  */

/* WARNING: Possible PIC construction at 0x000103c8a764: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c8a788: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c8a768) */
/* WARNING: Removing unreachable block (ram,0x000103c8a78c) */
/* WARNING: Removing unreachable block (ram,0x000103c8a7b0) */
/* WARNING: Removing unreachable block (ram,0x000103c8a794) */
/* WARNING: Removing unreachable block (ram,0x000103c8a770) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103c8a738(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(ulong *)(param_1 + 0x38);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x40) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x40) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103c8a7bc; end: 103c8ac57;  */

undefined8 * FUN_103c8a7bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar5 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar5;
  uVar5 = param_2[4];
  uVar1 = param_2[5];
  param_1[4] = uVar5;
  param_1[5] = uVar1;
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  param_1[6] = uVar1;
  uVar4 = param_2[8];
  func_0x000107c61434();
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar1);
  func_0x00010006c00c(uVar2,uVar4);
  param_1[7] = uVar2;
  param_1[8] = uVar4;
  lVar3 = param_2[0xc];
  if (lVar3 == 0) {
    uVar5 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar5;
    uVar5 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar5;
    uVar5 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar5;
    uVar5 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar5;
    uVar5 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar5;
    lVar3 = param_2[0x15];
  }
  else {
    param_1[9] = param_2[9];
    *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = lVar3;
    uVar1 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = uVar1;
    uVar2 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0x10] = uVar2;
    uVar5 = param_2[0x11];
    uVar4 = param_2[0x12];
    func_0x000107c61434();
    func_0x000107c61434(uVar1);
    func_0x000107c61434(uVar2);
    func_0x00010006c00c(uVar5,uVar4);
    param_1[0x11] = uVar5;
    param_1[0x12] = uVar4;
    lVar3 = param_2[0x15];
  }
  if (lVar3 == 0) {
    uVar5 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar5;
    uVar5 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar5;
    uVar5 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar5;
    param_1[0x19] = param_2[0x19];
  }
  else {
    uVar5 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar5;
    uVar5 = param_2[0x16];
    uVar1 = param_2[0x17];
    param_1[0x15] = lVar3;
    param_1[0x16] = uVar5;
    param_1[0x17] = uVar1;
    uVar5 = param_2[0x18];
    uVar2 = param_2[0x19];
    func_0x000107c61434();
    func_0x000107c61434(uVar1);
    func_0x00010006c00c(uVar5,uVar2);
    param_1[0x18] = uVar5;
    param_1[0x19] = uVar2;
  }
  return param_1;
}



/* Entry: 103c8ac58; end: 103c8adfb;  */

undefined8 FUN_103c8ac58(undefined8 param_1)

{
  FUN_103c8a518(param_1,&UNK_1106f3020);
  return param_1;
}



/* Entry: 103c8adfc; end: 103c8aec7;  */

int FUN_103c8adfc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x34] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103c8aec8; end: 103c8af0b;  */

/* WARNING: Possible PIC construction at 0x000103c8aef8: Changing call to branch */

void FUN_103c8aec8(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    uVar3 = *(ulong *)(param_1 + 0x50);
  }
  else {
    func_0x000107c6142c();
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = *(ulong *)(param_1 + 0x40);
    unaff_x30 = 0x103c8aefc;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  uVar4 = (uint)(uVar3 >> 0x3e);
  if (uVar4 != 1) {
    if (uVar4 != 2) {
      return;
    }
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x000107c61574(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar3 & 0x3fffffffffffffff);
  return;
}



/* Entry: 103c8af0c; end: 103c8b0f7;  */

undefined8 * FUN_103c8af0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  lVar3 = param_2[6];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  if (lVar3 == 0) {
    lVar3 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = lVar3;
    param_1[8] = param_2[8];
  }
  else {
    param_1[6] = lVar3;
    uVar1 = param_2[7];
    uVar2 = param_2[8];
    func_0x000107c61434(lVar3);
    func_0x00010006c00c(uVar1,uVar2);
    param_1[7] = uVar1;
    param_1[8] = uVar2;
  }
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  return param_1;
}



/* Entry: 103c8b0f8; end: 103c8b1ab;  */

undefined8 * FUN_103c8b0f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  plVar3 = param_1 + 6;
  if (*plVar3 != 0) {
    if (param_2[6] != 0) {
      param_1[6] = param_2[6];
      func_0x000107c6142c();
      uVar1 = param_1[7];
      uVar2 = param_1[8];
      uVar4 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar4;
      func_0x00010006c090(uVar1,uVar2);
      goto LAB_103c8b188;
    }
    FUN_103c8b584(plVar3);
  }
  lVar5 = param_2[6];
  param_1[7] = param_2[7];
  *plVar3 = lVar5;
  param_1[8] = param_2[8];
LAB_103c8b188:
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  uVar4 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103c8b1ac; end: 103c8b297;  */

int FUN_103c8b1ac(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x16] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103c8b298; end: 103c8b2db;  */

undefined8 * FUN_103c8b298(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  func_0x00010006c00c(uVar1,uVar3);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  func_0x00010006c090(uVar2,uVar4);
  return param_1;
}



/* Entry: 103c8b2dc; end: 103c8b38b;  */

int FUN_103c8b2dc(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103c8b38c; end: 103c8b3c7;  */

/* WARNING: Possible PIC construction at 0x000103c8b3b4: Changing call to branch */

void FUN_103c8b38c(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = *(ulong *)(param_1 + 0x40);
  }
  else {
    func_0x000107c6142c();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(ulong *)(param_1 + 0x30);
    unaff_x30 = 0x103c8b3b8;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  uVar4 = (uint)(uVar3 >> 0x3e);
  if (uVar4 != 1) {
    if (uVar4 != 2) {
      return;
    }
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x000107c61574(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar3 & 0x3fffffffffffffff);
  return;
}



/* Entry: 103c8b3c8; end: 103c8b583;  */

undefined8 * FUN_103c8b3c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  lVar3 = param_2[4];
  func_0x000107c61434();
  if (lVar3 == 0) {
    lVar3 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = lVar3;
    param_1[6] = param_2[6];
  }
  else {
    param_1[4] = lVar3;
    uVar1 = param_2[5];
    uVar2 = param_2[6];
    func_0x000107c61434(lVar3);
    func_0x00010006c00c(uVar1,uVar2);
    param_1[5] = uVar1;
    param_1[6] = uVar2;
  }
  uVar1 = param_2[7];
  uVar2 = param_2[8];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[7] = uVar1;
  param_1[8] = uVar2;
  return param_1;
}



/* Entry: 103c8b584; end: 103c8b5b3;  */

undefined8 * FUN_103c8b584(undefined8 *param_1)

{
  func_0x000107c6142c(*param_1);
  func_0x00010006c090(param_1[1],param_1[2]);
  return param_1;
}



/* Entry: 103c8b5b4; end: 103c8b657;  */

undefined8 * FUN_103c8b5b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  plVar3 = param_1 + 4;
  if (*plVar3 != 0) {
    if (param_2[4] != 0) {
      param_1[4] = param_2[4];
      func_0x000107c6142c();
      uVar1 = param_1[5];
      uVar2 = param_1[6];
      uVar4 = param_2[5];
      param_1[6] = param_2[6];
      param_1[5] = uVar4;
      func_0x00010006c090(uVar1,uVar2);
      goto LAB_103c8b634;
    }
    FUN_103c8b584(plVar3);
  }
  lVar5 = param_2[4];
  param_1[5] = param_2[5];
  *plVar3 = lVar5;
  param_1[6] = param_2[6];
LAB_103c8b634:
  uVar1 = param_1[7];
  uVar2 = param_1[8];
  uVar4 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103c8b658; end: 103c8b72f;  */

int FUN_103c8b658(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103c8b730; end: 103c8b757;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103c8b730(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = (uint)((ulong)param_1[2] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[2] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103c8b758; end: 103c8b7ff;  */

undefined8 * FUN_103c8b758(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 103c8b800; end: 103c8b843;  */

undefined8 * FUN_103c8b800(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[1];
  uVar1 = param_1[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 103c8b844; end: 103c8b8db;  */

int FUN_103c8b844(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103c8b8dc; end: 103c8b95b;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

ulong FUN_103c8b8dc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5,ulong param_6,ulong param_7,ulong param_8)

{
  uint uVar1;
  
  if ((param_8 >> 0x3d & 1) == 0) {
    func_0x000107c61434(param_4);
    param_6 = param_7;
    param_7 = param_8;
  }
  else {
    func_0x00010006c00c();
    if (0xe < param_7 >> 0x3c) {
      return param_3;
    }
  }
  uVar1 = (uint)(param_7 >> 0x3e);
  if (uVar1 == 1) {
    param_6 = param_7 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return param_6;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_6);
  return param_6;
}



/* Entry: 103c8b95c; end: 103c8b9b7;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103c8b95c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  if (((*(ulong *)(param_1 + 0x28) & *(ulong *)(param_1 + 0x58) ^ 0xffffffffffffffff) &
      0x3000000000000000) != 0) {
    FUN_103c8b9b8(*(undefined8 *)(param_1 + 0x20),*(ulong *)(param_1 + 0x28),
                  *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                  *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                  *(undefined8 *)(param_1 + 0x50));
  }
  uVar1 = *(ulong *)(param_1 + 0x60);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x68) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x68) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103c8b9b8; end: 103c8ba37;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

ulong FUN_103c8b9b8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5,ulong param_6,ulong param_7,ulong param_8)

{
  uint uVar1;
  
  if ((param_8 >> 0x3d & 1) == 0) {
    func_0x000107c6142c(param_4);
    param_6 = param_7;
    param_7 = param_8;
  }
  else {
    func_0x00010006c090();
    if (0xe < param_7 >> 0x3c) {
      return param_3;
    }
  }
  uVar1 = (uint)(param_7 >> 0x3e);
  if (uVar1 == 1) {
    param_6 = param_7 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return param_6;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_6);
  return param_6;
}



/* Entry: 103c8ba38; end: 103c8bcc3;  */

undefined8 * FUN_103c8ba38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  uVar6 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar6;
  uVar3 = param_2[5];
  uVar2 = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c61434(uVar6);
  if (((uVar3 & uVar2 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    uVar6 = param_2[4];
    uVar8 = param_2[7];
    uVar7 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar6;
    param_1[7] = uVar8;
    param_1[6] = uVar7;
    uVar6 = param_2[8];
    uVar8 = param_2[0xb];
    uVar7 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar6;
    param_1[0xb] = uVar8;
    param_1[10] = uVar7;
  }
  else {
    uVar4 = param_2[4];
    uVar6 = param_2[6];
    uVar8 = param_2[7];
    uVar7 = param_2[8];
    uVar1 = param_2[9];
    uVar5 = param_2[10];
    FUN_103c8b8dc(uVar4,uVar3,uVar6,uVar8,uVar7,uVar1,uVar5,uVar2);
    param_1[4] = uVar4;
    param_1[5] = uVar3;
    param_1[6] = uVar6;
    param_1[7] = uVar8;
    param_1[8] = uVar7;
    param_1[9] = uVar1;
    param_1[10] = uVar5;
    param_1[0xb] = uVar2;
  }
  uVar6 = param_2[0xc];
  uVar7 = param_2[0xd];
  func_0x00010006c00c(uVar6,uVar7);
  param_1[0xc] = uVar6;
  param_1[0xd] = uVar7;
  return param_1;
}



/* Entry: 103c8bcc4; end: 103c8bdc3;  */

undefined8 * FUN_103c8bcc4(undefined8 *param_1)

{
  FUN_103c8b9b8(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7]);
  return param_1;
}



/* Entry: 103c8bdc4; end: 103c8be8f;  */

int FUN_103c8bdc4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103c8be90; end: 103c8bfab;  */

undefined8 * FUN_103c8be90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  uVar3 = param_2[4];
  uVar7 = param_2[5];
  uVar4 = param_2[6];
  uVar8 = param_2[7];
  FUN_103c8b8dc(uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4,uVar8);
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  param_1[4] = uVar3;
  param_1[5] = uVar7;
  param_1[6] = uVar4;
  param_1[7] = uVar8;
  return param_1;
}



/* Entry: 103c8bfac; end: 103c8bff7;  */

undefined8 * FUN_103c8bfac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_1[3];
  uVar5 = param_1[4];
  uVar3 = param_1[5];
  uVar6 = param_1[6];
  uVar8 = param_1[7];
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar9 = param_2[4];
  uVar11 = param_2[7];
  uVar10 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  param_1[7] = uVar11;
  param_1[6] = uVar10;
  FUN_103c8b9b8(uVar7,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar8);
  return param_1;
}



/* Entry: 103c8bff8; end: 103c8c11f;  */

int FUN_103c8bff8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xe < param_2) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + 0xf;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x20);
  uVar1 = (uVar1 >> 0x1d & 1 |
          (uVar1 >> 0x1a & 4 | (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x3c) & 3) << 1) ^ 0xf;
  if (0xd < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103c8c120; end: 103c8c147;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103c8c120(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(ulong *)(param_1 + 0x30);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x38) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x38) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103c8c148; end: 103c8c237;  */

undefined8 * FUN_103c8c148(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  return param_1;
}



/* Entry: 103c8c238; end: 103c8c29b;  */

undefined8 * FUN_103c8c238(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar1 = param_1[6];
  uVar2 = param_1[7];
  uVar3 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103c8c29c; end: 103c8c343;  */

int FUN_103c8c29c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103c8c344; end: 103c8c38b;  */

/* WARNING: Possible PIC construction at 0x000103c8c35c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c8c360) */
/* WARNING: Removing unreachable block (ram,0x000103c8c37c) */
/* WARNING: Removing unreachable block (ram,0x000103c8c370) */

void FUN_103c8c344(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 103c8c38c; end: 103c8c51f;  */

undefined8 * FUN_103c8c38c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  func_0x00010006c00c(uVar1,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar2 = param_2[6];
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    param_1[3] = param_2[3];
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
    uVar1 = param_2[5];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[5] = uVar1;
    param_1[6] = uVar2;
  }
  else {
    uVar1 = param_2[2];
    uVar4 = param_2[5];
    uVar3 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar1;
    param_1[5] = uVar4;
    param_1[4] = uVar3;
    param_1[6] = param_2[6];
  }
  return param_1;
}



/* Entry: 103c8c520; end: 103c8c553;  */

undefined8 FUN_103c8c520(undefined8 param_1)

{
  (*(code *)(undefined *)0x103cc56fc)();
  return param_1;
}



/* Entry: 103c8c554; end: 103c8c5fb;  */

undefined8 * FUN_103c8c554(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  if ((ulong)param_1[6] >> 0x3c < 0xf) {
    uVar3 = param_2[6];
    if (uVar3 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
      param_1[3] = param_2[3];
      *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
      uVar1 = param_1[5];
      param_1[5] = param_2[5];
      param_1[6] = uVar3;
      func_0x00010006c090(uVar1);
      return param_1;
    }
    FUN_103c8c520(param_1 + 2);
  }
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar2;
  param_1[6] = param_2[6];
  return param_1;
}



/* Entry: 103c8c5fc; end: 103c8c6bb;  */

int FUN_103c8c5fc(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103c8c6bc; end: 103c8cb3b;  */

void FUN_103c8c6bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffdc70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc6d764;
  func_0x000107c61520(&DAT_10dc6d764,&UNK_1106f3798);
  puRam0000000112ffdc70 = puVar1;
  return;
}



/* Entry: 103c8cb3c; end: 103c8cb7b;  */

undefined8 FUN_103c8cb3c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103c8cb7c; end: 103c8cbdf;  */

/* WARNING: Possible PIC construction at 0x000103c8cbb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c8cbb8) */
/* WARNING: Removing unreachable block (ram,0x000103c86294) */
/* WARNING: Removing unreachable block (ram,0x000103c862a4) */
/* WARNING: Removing unreachable block (ram,0x000103c862a0) */

void FUN_103c8cb7c(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    func_0x000107c61574();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2 & 0x3fffffffffffffff);
  return;
}



/* Entry: 103c8cbe0; end: 103c8ccbb;  */

undefined8 FUN_103c8cbe0(undefined8 param_1,undefined8 param_2)

{
  FUN_103c8ba38(param_2,param_1,&UNK_1106f35f8);
  return param_2;
}



/* Entry: 103c8ccbc; end: 103c8cd53;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_103c8ccbc(void)

{
  long in_x3;
  undefined8 in_x4;
  ulong in_x5;
  ulong in_x6;
  uint uVar1;
  
  if (in_x3 == 0) {
    return;
  }
  func_0x000107c61434(in_x3);
  func_0x000107c61434(in_x4);
  uVar1 = (uint)(in_x6 >> 0x3e);
  if (uVar1 == 1) {
    in_x5 = in_x6 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(in_x5);
  return;
}



/* Entry: 103c8cd54; end: 103c8cf9f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103c8cd54(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  lVar24 = *param_1;
  uVar16 = param_1[1];
  pbVar10 = (byte *)*unaff_x20;
  pbVar25 = (byte *)unaff_x20[1];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar25;
            puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
            pbVar13 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (undefined8 *)((ulong)pbVar25 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar24,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(undefined8 **)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar24 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar24 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 == pbVar15) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar24 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar24 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar24);
          func_0x000107c61174();
          pbVar10 = pbVar23;
          func_0x000107c60118();
          func_0x000107c61170(pbVar23);
          func_0x000107c61170(lVar24);
          pbVar23 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar23 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar14,pbVar15,pbVar17,0);
      return pbVar12;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar14 = pbVar23, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar25 == *(byte **)(pbVar13 + 0x10) && pbVar23 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar24 = *(long *)(pbVar13 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 != pbVar15) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar13 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar13 + 0x18),lVar24,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar24 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar13 + 0x20);
        lVar24 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar24;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar26;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar26 = *(long *)(pbVar13 + 0x20);
      lVar24 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar24;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar26;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar24 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar26 = *(long *)pbVar13;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(undefined8 **)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 103c8cfa0; end: 103c8cfc7;  */

void FUN_103c8cfa0(void)

{
  func_0x000100d6a748();
  return;
}



/* Entry: 103c8cfc8; end: 103c8cfe7;  */

undefined8 * FUN_103c8cfc8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return param_1;
}



/* Entry: 103c8cfe8; end: 103c8d00f;  */

void FUN_103c8cfe8(void)

{
  func_0x000100d6a75c();
  return;
}



/* Entry: 103c8d010; end: 103c8d04f;  */

long FUN_103c8d010(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x000100e9ebd4(param_1,unaff_x20 + 0x10);
  return unaff_x20;
}



/* Entry: 103c8d050; end: 103c8d06b;  */

void FUN_103c8d050(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000100e9ebd4(param_1,unaff_x20 + 0x10);
  return;
}



/* Entry: 103c8d06c; end: 103c8d087;  */

void FUN_103c8d06c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1b0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1b8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x1a0) = param_1;
  *(undefined8 *)(unaff_x22 + 0x1a8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c8d088,0,0);
  return;
}



/* Entry: 103c8d088; end: 103c8d1ef;  */

/* WARNING: Removing unreachable block (ram,0x000103c8d12c) */

void FUN_103c8d088(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x1a8);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x1b8) + 0x10,unaff_x22 + 0x168);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x180);
  lVar3 = *(long *)(unaff_x22 + 0x188);
  lVar4 = unaff_x22 + 0x168;
  func_0x0001000a8868(lVar4,uVar2);
  uVar9 = *puVar8;
  *(undefined8 *)(unaff_x22 + 0x128) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0x120) = uVar9;
  uVar12 = puVar8[5];
  uVar11 = puVar8[4];
  uVar10 = puVar8[7];
  uVar9 = puVar8[6];
  uVar14 = puVar8[3];
  uVar13 = puVar8[2];
  *(undefined8 *)(unaff_x22 + 0x160) = puVar8[8];
  *(undefined8 *)(unaff_x22 + 0x148) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x140) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x158) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x150) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x138) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x130) = uVar13;
  FUN_103c886a0();
  func_0x000100075890(unaff_x22 + 400,0,0,&UNK_1106f2cc0,PTR___s10Foundation4DataVN_110350ae0,lVar4,
                      &PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 400);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x198);
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1d0) = plVar5;
  plVar6 = plVar5;
  FUN_103c8879c();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103c8d1f0;
                    /* WARNING: Could not recover jumptable at 0x000103c8d1ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x10,0xd000000000000025,0x800000010f1b28d0,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0x1b0),&UNK_1106f2d50,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103c8d1f0; end: 103c8d25b;  */

void FUN_103c8d1f0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1d8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1d0));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x1c0),*(undefined8 *)(lVar2 + 0x1c8));
    pcVar1 = FUN_103c8d25c;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x1c0),*(undefined8 *)(lVar2 + 0x1c8));
    pcVar1 = FUN_103c8d30c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103c8d25c; end: 103c8d30b;  */

void FUN_103c8d25c(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x50);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x1a0);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x0001000834e4(unaff_x22 + 0x168);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0xa0);
  *puVar1 = uVar2;
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar6 = *(undefined8 *)(unaff_x22 + 200);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
  puVar1[7] = *(undefined8 *)(unaff_x22 + 0xd0);
  puVar1[6] = uVar6;
  puVar1[9] = uVar8;
  puVar1[8] = uVar7;
  puVar1[3] = uVar3;
  puVar1[2] = uVar2;
  puVar1[5] = uVar5;
  puVar1[4] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x108);
  puVar1[0x10] = *(undefined8 *)(unaff_x22 + 0x118);
  puVar1[0xd] = uVar5;
  puVar1[0xc] = uVar4;
  puVar1[0xf] = uVar7;
  puVar1[0xe] = uVar6;
  puVar1[0xb] = uVar3;
  puVar1[10] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000103c8d308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c8d30c; end: 103c8d33f;  */

void FUN_103c8d30c(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x168);
                    /* WARNING: Could not recover jumptable at 0x000103c8d33c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c8d340; end: 103c8d35b;  */

void FUN_103c8d340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1d8) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1e0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x1c8) = param_1;
  *(undefined8 *)(unaff_x22 + 0x1d0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c8d35c,0,0);
  return;
}



/* Entry: 103c8d35c; end: 103c8d4db;  */

/* WARNING: Removing unreachable block (ram,0x000103c8d418) */

void FUN_103c8d35c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x1d0);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x1e0) + 0x10,unaff_x22 + 400);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1a8);
  lVar3 = *(long *)(unaff_x22 + 0x1b0);
  lVar4 = unaff_x22 + 400;
  func_0x0001000a8868(lVar4,uVar2);
  uVar9 = *puVar8;
  *(undefined8 *)(unaff_x22 + 0x18) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar9;
  uVar9 = puVar8[6];
  uVar11 = puVar8[9];
  uVar10 = puVar8[8];
  uVar15 = puVar8[3];
  uVar14 = puVar8[2];
  uVar13 = puVar8[5];
  uVar12 = puVar8[4];
  *(undefined8 *)(unaff_x22 + 0x48) = puVar8[7];
  *(undefined8 *)(unaff_x22 + 0x40) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar12;
  uVar9 = puVar8[0xe];
  uVar11 = puVar8[0x11];
  uVar10 = puVar8[0x10];
  uVar15 = puVar8[0xb];
  uVar14 = puVar8[10];
  uVar13 = puVar8[0xd];
  uVar12 = puVar8[0xc];
  *(undefined8 *)(unaff_x22 + 0x88) = puVar8[0xf];
  *(undefined8 *)(unaff_x22 + 0x80) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar12;
  uVar9 = puVar8[0x16];
  uVar11 = puVar8[0x19];
  uVar10 = puVar8[0x18];
  uVar15 = puVar8[0x13];
  uVar14 = puVar8[0x12];
  uVar13 = puVar8[0x15];
  uVar12 = puVar8[0x14];
  *(undefined8 *)(unaff_x22 + 200) = puVar8[0x17];
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar11;
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar10;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar15;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar14;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar13;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar12;
  FUN_103c88c48();
  func_0x000100075890(unaff_x22 + 0x1b8,0,0,&UNK_1106f30a8,PTR___s10Foundation4DataVN_110350ae0,
                      lVar4,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1c0);
  *(undefined8 *)(unaff_x22 + 0x1e8) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x1f0) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1f8) = plVar5;
  plVar6 = plVar5;
  FUN_103c88d44();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103c8d4dc;
                    /* WARNING: Could not recover jumptable at 0x000103c8d4d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0xe0,0xd00000000000001e,0x800000010f1b2900,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0x1d8),&UNK_1106f3140,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103c8d4dc; end: 103c8d547;  */

void FUN_103c8d4dc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x200) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1f8));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x1e8),*(undefined8 *)(lVar2 + 0x1f0));
    pcVar1 = FUN_103c8d548;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x1e8),*(undefined8 *)(lVar2 + 0x1f0));
    pcVar1 = FUN_103c8d5c4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103c8d548; end: 103c8d5c3;  */

void FUN_103c8d548(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x1c8);
  *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x108);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0x130);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0xf0);
  func_0x0001000834e4(unaff_x22 + 400);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x148);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0x140);
  *puVar1 = uVar2;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x178);
  puVar1[10] = *(undefined8 *)(unaff_x22 + 0x188);
  puVar1[7] = uVar5;
  puVar1[6] = uVar4;
  puVar1[9] = uVar7;
  puVar1[8] = uVar6;
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000103c8d5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c8d5c4; end: 103c8d5f7;  */

void FUN_103c8d5c4(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 400);
                    /* WARNING: Could not recover jumptable at 0x000103c8d5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c8d5f8; end: 103c8d613;  */

void FUN_103c8d5f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_3;
  *(undefined8 *)(unaff_x22 + 0x80) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c8d614,0,0);
  return;
}



/* Entry: 103c8d614; end: 103c8d76f;  */

/* WARNING: Removing unreachable block (ram,0x000103c8d6a0) */

void FUN_103c8d614(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  int *piVar9;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x80) + 0x10,unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar5 = *(long *)(unaff_x22 + 0x30);
  lVar6 = unaff_x22 + 0x10;
  func_0x0001000a8868(lVar6,uVar3);
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar4;
  FUN_103c88f3c();
  func_0x000100075890(unaff_x22 + 0x58,0,0,&UNK_1106f32e0,PTR___s10Foundation4DataVN_110350ae0,lVar6
                      ,&PTR_DAT_110789f58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar4;
  piVar9 = *(int **)(lVar5 + 8);
  iVar1 = *piVar9;
  plVar7 = (long *)(ulong)(uint)piVar9[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x98) = plVar7;
  plVar8 = plVar7;
  FUN_103c89038();
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_103c8d770;
                    /* WARNING: Could not recover jumptable at 0x000103c8d76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))
            (unaff_x22 + 0x38,0xd00000000000001c,0x800000010f1b2920,uVar2,uVar4,
             *(undefined8 *)(unaff_x22 + 0x78),&UNK_1106f3360,plVar8,uVar3,lVar5);
  return;
}



/* Entry: 103c8d770; end: 103c8d7e3;  */

void FUN_103c8d770(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x90);
  uVar4 = *(undefined8 *)(lVar3 + 0x88);
  *(long *)(lVar3 + 0xa0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x98));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_103c8d7e4;
  }
  else {
    pcVar2 = FUN_103c8d824;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103c8d7e4; end: 103c8d823;  */

void FUN_103c8d7e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000103c8d820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,uVar2);
  return;
}



/* Entry: 103c8d824; end: 103c8d857;  */

void FUN_103c8d824(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000103c8d854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c8d858; end: 103c8d873;  */

void FUN_103c8d858(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xb8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c8d874,0,0);
  return;
}



/* Entry: 103c8d874; end: 103c8d9db;  */

/* WARNING: Removing unreachable block (ram,0x000103c8d918) */

void FUN_103c8d874(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0xa8);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xb8) + 0x10,unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar3 = *(long *)(unaff_x22 + 0x78);
  lVar4 = unaff_x22 + 0x58;
  func_0x0001000a8868(lVar4,uVar2);
  uVar9 = *puVar8;
  *(undefined8 *)(unaff_x22 + 0x18) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar9;
  uVar12 = puVar8[5];
  uVar11 = puVar8[4];
  uVar10 = puVar8[7];
  uVar9 = puVar8[6];
  uVar14 = puVar8[3];
  uVar13 = puVar8[2];
  *(undefined8 *)(unaff_x22 + 0x50) = puVar8[8];
  *(undefined8 *)(unaff_x22 + 0x38) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar13;
  FUN_103c89134();
  func_0x000100075890(unaff_x22 + 0x98,0,0,&UNK_1106f33e0,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar9;
  *(undefined8 *)(unaff_x22 + 200) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd0) = plVar5;
  plVar6 = plVar5;
  FUN_103c8932c();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103c8d9dc;
                    /* WARNING: Could not recover jumptable at 0x000103c8d9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x80,0xd000000000000021,0x800000010f1b2940,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xb0),&UNK_1106f3578,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103c8d9dc; end: 103c8da4f;  */

void FUN_103c8d9dc(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 200);
  uVar4 = *(undefined8 *)(lVar3 + 0xc0);
  *(long *)(lVar3 + 0xd8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xd0));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_103c8da50;
  }
  else {
    pcVar2 = FUN_103c8daa0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103c8da50; end: 103c8da9f;  */

void FUN_103c8da50(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x0001000834e4(unaff_x22 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x000103c8da9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,uVar2,uVar3);
  return;
}



/* Entry: 103c8daa0; end: 103c8db17;  */

void FUN_103c8daa0(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x000103c8dad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c8db18; end: 103c8db23;  */

void FUN_103c8db18(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  (*(code *)0x103ccd77c)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103c8db24; end: 103c8db63;  */

void FUN_103c8db24(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ffdee0;
  func_0x0001000285a8(0x112ffdee0,&UNK_10dc6e220);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103c8db64; end: 103c8db7b;  */

void FUN_103c8db64(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x103ccd77c)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}


