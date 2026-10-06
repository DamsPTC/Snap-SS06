/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10362c684; end: 10362c69b;  */

void FUN_10362c684(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10362bcd0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)&UNK_1015c5dfc)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10362c69c; end: 10362c6db;  */

void FUN_10362c69c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80db0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbef2f0;
  func_0x000107c61520(&UNK_10dbef2f0,&UNK_110672b10);
  puRam0000000112f80db0 = puVar1;
  return;
}



/* Entry: 10362c6dc; end: 10362c6ff;  */

void FUN_10362c6dc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10362c700();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10362c700; end: 10362c73f;  */

void FUN_10362c700(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80db8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbef360;
  func_0x000107c61520(&UNK_10dbef360,&UNK_110672b98);
  puRam0000000112f80db8 = puVar1;
  return;
}



/* Entry: 10362c740; end: 10362c753;  */

void FUN_10362c740(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10362bd10)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)&UNK_1015c5d7c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10362c754; end: 10362c783;  */

void FUN_10362c754(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10362c784; end: 10362c787;  */

void FUN_10362c784(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80dc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbef3c8;
  func_0x000107c61520(&UNK_10dbef3c8,&UNK_110672b98);
  puRam0000000112f80dc0 = puVar1;
  return;
}



/* Entry: 10362c788; end: 10362c7c7;  */

void FUN_10362c788(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80dc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbef3c8;
  func_0x000107c61520(&UNK_10dbef3c8,&UNK_110672b98);
  puRam0000000112f80dc0 = puVar1;
  return;
}



/* Entry: 10362c7c8; end: 10362c7d3;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10362c7c8(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = (uint)(param_1[1] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[1] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10362c7d4; end: 10362c817;  */

undefined8 * FUN_10362c7d4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10362c818; end: 10362c84f;  */

undefined8 * FUN_10362c818(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 10362c850; end: 10362c977;  */

int FUN_10362c850(int *param_1,uint param_2)

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



/* Entry: 10362c978; end: 10362c9cb;  */

undefined4 * FUN_10362c978(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = *(undefined8 *)(param_2 + 2);
  uVar3 = *(undefined8 *)(param_2 + 4);
  func_0x00010006c00c(uVar1,uVar3);
  uVar2 = *(undefined8 *)(param_1 + 2);
  uVar4 = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 4) = uVar3;
  func_0x00010006c090(uVar2,uVar4);
  return param_1;
}



/* Entry: 10362c9cc; end: 10362ca0b;  */

undefined8 * FUN_10362c9cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 10362ca0c; end: 10362ca1b;  */

undefined1  [16] FUN_10362ca0c(void)

{
  return ZEXT816(0x110672a00);
}



/* Entry: 10362ca1c; end: 10362cab3;  */

undefined8 * FUN_10362ca1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 10362cab4; end: 10362caf3;  */

undefined8 * FUN_10362cab4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 10362caf4; end: 10362cba7;  */

int FUN_10362caf4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10362cba8; end: 10362cc67;  */

/* WARNING: Possible PIC construction at 0x00010362cbc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010362cbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010362cc20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010362cbc4) */
/* WARNING: Removing unreachable block (ram,0x00010362cbd4) */
/* WARNING: Removing unreachable block (ram,0x00010362cbf4) */
/* WARNING: Removing unreachable block (ram,0x00010362cc04) */
/* WARNING: Removing unreachable block (ram,0x00010362cc24) */
/* WARNING: Removing unreachable block (ram,0x00010362cc34) */
/* WARNING: Removing unreachable block (ram,0x00010362cc58) */
/* WARNING: Removing unreachable block (ram,0x00010362cc4c) */
/* WARNING: Removing unreachable block (ram,0x00010362cc1c) */
/* WARNING: Removing unreachable block (ram,0x00010362cbec) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10362cba8(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = (uint)(param_1[1] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[1] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10362cc68; end: 10362d527;  */

undefined8 * FUN_10362cc68(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  func_0x00010006c00c(uVar2,uVar3);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  uVar1 = param_2[5];
  if (uVar1 >> 0x3c < 0xf) {
    param_1[2] = param_2[2];
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    uVar2 = param_2[4];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[4] = uVar2;
    param_1[5] = uVar1;
    uVar1 = param_2[8];
    if (0xe < uVar1 >> 0x3c) goto LAB_10362cce4;
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    uVar2 = param_2[7];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[7] = uVar2;
    param_1[8] = uVar1;
  }
  else {
    uVar2 = param_2[2];
    uVar4 = param_2[5];
    uVar3 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[5] = uVar4;
    param_1[4] = uVar3;
LAB_10362cce4:
    uVar2 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
    param_1[8] = param_2[8];
  }
  uVar1 = param_2[0xc];
  if (uVar1 >> 0x3c < 0xf) {
    param_1[9] = param_2[9];
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    uVar2 = param_2[0xb];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[0xb] = uVar2;
    param_1[0xc] = uVar1;
    uVar1 = param_2[0xf];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
      uVar2 = param_2[0xe];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0xe] = uVar2;
      param_1[0xf] = uVar1;
      goto LAB_10362cd9c;
    }
  }
  else {
    uVar2 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar2;
    uVar2 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar2;
  }
  uVar2 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar2;
  param_1[0xf] = param_2[0xf];
LAB_10362cd9c:
  uVar1 = param_2[0x13];
  if (uVar1 >> 0x3c < 0xf) {
    param_1[0x10] = param_2[0x10];
    *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
    uVar2 = param_2[0x12];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[0x12] = uVar2;
    param_1[0x13] = uVar1;
    uVar1 = param_2[0x16];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
      uVar2 = param_2[0x15];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0x15] = uVar2;
      param_1[0x16] = uVar1;
      return param_1;
    }
  }
  else {
    uVar2 = param_2[0x10];
    uVar4 = param_2[0x13];
    uVar3 = param_2[0x12];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar2;
    param_1[0x13] = uVar4;
    param_1[0x12] = uVar3;
  }
  uVar2 = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar2;
  param_1[0x16] = param_2[0x16];
  return param_1;
}



/* Entry: 10362d528; end: 10362d613;  */

int FUN_10362d528(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x2e] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10362d614; end: 10362d6bb;  */

undefined8 * FUN_10362d614(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[2];
  uVar1 = param_2[3];
  func_0x00010006c00c(uVar2,uVar1);
  param_1[2] = uVar2;
  param_1[3] = uVar1;
  return param_1;
}



/* Entry: 10362d6bc; end: 10362d6f3;  */

undefined8 * FUN_10362d6bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 10362d6f4; end: 10362d7a7;  */

int FUN_10362d6f4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10362d7a8; end: 10362d8e7;  */

void FUN_10362d7a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80dd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbef334;
  func_0x000107c61520(&DAT_10dbef334,&UNK_110672b98);
  puRam0000000112f80dd0 = puVar1;
  return;
}



/* Entry: 10362d8e8; end: 10362d92f;  */

undefined8 FUN_10362d8e8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112db7eb8;
  func_0x0001000285a8(0x112db7eb8,&UNK_10d96d2a0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10362d930; end: 10362da97;  */

void FUN_10362d930(ulong *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (ulong)(param_2 - 1);
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10362da98; end: 10362dae7;  */

undefined8 FUN_10362da98(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112db6f48;
  func_0x0001000285a8(0x112db6f48,&UNK_10d969b40);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10362dae8; end: 10362db0f;  */

void FUN_10362dae8(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0xf000000000000000;
  return;
}



/* Entry: 10362db10; end: 10362db57;  */

void FUN_10362db10(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbef7b0,0x3f,2);
  uRam000000011380ab88 = uStack_38;
  uRam000000011380ab80 = uStack_40;
  uRam000000011380ab98 = uStack_28;
  uRam000000011380ab90 = uStack_30;
  uRam000000011380aba8 = uStack_18;
  uRam000000011380aba0 = uStack_20;
  return;
}



/* Entry: 10362db58; end: 10362dc2b;  */

/* WARNING: Removing unreachable block (ram,0x00010362dc28) */

void FUN_10362db58(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 2) {
        (**(code **)(param_3 + 0x160))();
      }
      else if (lVar1 == 3) {
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015c5cfc();
        (*pcVar4)(unaff_x20 + 0x18,&UNK_110790a00,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10362dc2c; end: 10362dcab;  */

void FUN_10362dc2c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  if (((*(long *)(*unaff_x20 + 0x10) == 0) ||
      ((**(code **)(param_3 + 0x100))(*unaff_x20,2,param_2,param_3), unaff_x21 == 0)) &&
     (FUN_10362dcac(), unaff_x21 == 0)) {
    func_0x000100076224(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}



/* Entry: 10362dcac; end: 10362dd33;  */

void FUN_10362dcac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x28);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x20);
    uStack_60 = *(undefined8 *)(param_1 + 0x18);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,3,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10362dd34; end: 10362dd83;  */

uint FUN_10362dd34(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_a8 [24];
  long lStack_90;
  ulong uStack_88;
  ulong uStack_80;
  long lStack_70;
  ulong uStack_68;
  ulong uStack_60;
  
  lVar3 = *param_1;
  lVar4 = *param_2;
  lVar5 = *(long *)(lVar3 + 0x10);
  if (lVar5 == *(long *)(lVar4 + 0x10)) {
    if (lVar5 != 0 && lVar3 != lVar4) {
      plVar7 = (long *)(lVar4 + 0x28);
      plVar8 = (long *)(lVar3 + 0x28);
      do {
        uVar10 = plVar8[-1];
        if ((uVar10 != plVar7[-1] || *plVar8 != *plVar7) &&
           (func_0x000107c605b8(), (uVar10 & 1) == 0)) goto LAB_10362e2d4;
        plVar7 = plVar7 + 2;
        plVar8 = plVar8 + 2;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    uVar10 = param_1[4];
    lVar5 = param_1[3];
    uVar6 = param_1[5];
    uVar11 = param_2[4];
    lVar3 = param_2[3];
    uVar9 = param_2[5];
    lStack_90 = lVar3;
    uStack_88 = uVar11;
    uStack_80 = uVar9;
    lStack_70 = lVar5;
    uStack_68 = uVar10;
    uStack_60 = uVar6;
    if (uVar6 >> 0x3c < 0xf) {
      if (0xe < uVar9 >> 0x3c) goto LAB_10362e1dc;
      if (lVar5 == lVar3) {
        FUN_10362da98(&lStack_70,auStack_a8);
        FUN_10362da98(&lStack_90,auStack_a8);
        uVar2 = uVar10;
        func_0x000100e25fcc(uVar10,uVar6,uVar11,uVar9);
        func_0x00010159fa64(lVar5,uVar11,uVar9);
        if ((uVar2 & 1) != 0) goto LAB_10362e1b0;
      }
      else {
        FUN_10362da98(&lStack_70,auStack_a8);
        FUN_10362da98(&lStack_90,auStack_a8);
        func_0x00010159fa64(lVar3,uVar11,uVar9);
      }
    }
    else {
      if (0xe < uVar9 >> 0x3c) {
        FUN_10362da98(&lStack_70,auStack_a8);
        FUN_10362da98(&lStack_90,auStack_a8);
LAB_10362e1b0:
        func_0x00010159fa64(lVar5,uVar10,uVar6);
        lVar5 = param_1[1];
        func_0x000100e25fcc(lVar5,param_1[2],param_2[1],param_2[2]);
        uVar1 = (uint)lVar5;
        goto LAB_10362e2d8;
      }
LAB_10362e1dc:
      FUN_10362da98(&lStack_70,auStack_a8);
      FUN_10362da98(&lStack_90,auStack_a8);
      func_0x00010159fa64(lVar5,uVar10,uVar6);
      lVar5 = lVar3;
      uVar10 = uVar11;
      uVar6 = uVar9;
    }
    func_0x00010159fa64(lVar5,uVar10,uVar6);
  }
LAB_10362e2d4:
  uVar1 = 0;
LAB_10362e2d8:
  return uVar1 & 1;
}



/* Entry: 10362dd84; end: 10362ddb3;  */

undefined1  [16] FUN_10362dd84(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 10362ddb4; end: 10362dde7;  */

void FUN_10362ddb4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 10362dde8; end: 10362ddfb;  */

undefined1  [16] FUN_10362dde8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x10362ddf8;
  return auVar1;
}



/* Entry: 10362ddfc; end: 10362de0f;  */

void FUN_10362ddfc(void)

{
  FUN_10362db58();
  return;
}



/* Entry: 10362de10; end: 10362de47;  */

void FUN_10362de10(void)

{
  FUN_10362dc2c();
  return;
}



/* Entry: 10362de48; end: 10362de4b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10362de48(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 10362de4c; end: 10362de83;  */

uint FUN_10362de4c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_10362e740();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 10362de84; end: 10362decb;  */

uint FUN_10362de84(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_18 = param_1[5];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  FUN_10362e110(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10362decc; end: 10362df6b;  */

/* WARNING: Possible PIC construction at 0x00010362df18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010362df28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010362df1c) */
/* WARNING: Removing unreachable block (ram,0x00010362df2c) */

void FUN_10362decc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f80e18 != -1) {
    func_0x000107c61568(0x112f80e18,FUN_10362db10);
  }
  uVar5 = uRam000000011380aba8;
  uVar4 = uRam000000011380aba0;
  uVar3 = uRam000000011380ab98;
  uVar2 = uRam000000011380ab90;
  uVar1 = uRam000000011380ab88;
  *param_1 = uRam000000011380ab80;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10362df6c; end: 10362dfa7;  */

void FUN_10362df6c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f80e38;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f80e38,&UNK_10dbef7a0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10362dfa8; end: 10362e0cb;  */

void FUN_10362dfa8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_60 = *unaff_x20;
  uStack_38 = unaff_x20[5];
  uStack_50 = unaff_x20[2];
  uStack_58 = unaff_x20[1];
  uStack_40 = unaff_x20[4];
  uStack_48 = unaff_x20[3];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10362e0cc; end: 10362e10f;  */

uint FUN_10362e0cc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  FUN_10362e110(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10362e110; end: 10362e2f7;  */

uint FUN_10362e110(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_a8 [24];
  long lStack_90;
  ulong uStack_88;
  ulong uStack_80;
  long lStack_70;
  ulong uStack_68;
  ulong uStack_60;
  
  lVar3 = *param_1;
  lVar4 = *param_2;
  lVar5 = *(long *)(lVar3 + 0x10);
  if (lVar5 == *(long *)(lVar4 + 0x10)) {
    if (lVar5 != 0 && lVar3 != lVar4) {
      plVar7 = (long *)(lVar4 + 0x28);
      plVar8 = (long *)(lVar3 + 0x28);
      do {
        uVar10 = plVar8[-1];
        if ((uVar10 != plVar7[-1] || *plVar8 != *plVar7) &&
           (func_0x000107c605b8(), (uVar10 & 1) == 0)) goto LAB_10362e2d4;
        plVar7 = plVar7 + 2;
        plVar8 = plVar8 + 2;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    uVar10 = param_1[4];
    lVar5 = param_1[3];
    uVar6 = param_1[5];
    uVar11 = param_2[4];
    lVar3 = param_2[3];
    uVar9 = param_2[5];
    lStack_90 = lVar3;
    uStack_88 = uVar11;
    uStack_80 = uVar9;
    lStack_70 = lVar5;
    uStack_68 = uVar10;
    uStack_60 = uVar6;
    if (uVar6 >> 0x3c < 0xf) {
      if (0xe < uVar9 >> 0x3c) goto LAB_10362e1dc;
      if (lVar5 == lVar3) {
        FUN_10362da98(&lStack_70,auStack_a8);
        FUN_10362da98(&lStack_90,auStack_a8);
        uVar2 = uVar10;
        func_0x000100e25fcc(uVar10,uVar6,uVar11,uVar9);
        func_0x00010159fa64(lVar5,uVar11,uVar9);
        if ((uVar2 & 1) != 0) goto LAB_10362e1b0;
      }
      else {
        FUN_10362da98(&lStack_70,auStack_a8);
        FUN_10362da98(&lStack_90,auStack_a8);
        func_0x00010159fa64(lVar3,uVar11,uVar9);
      }
    }
    else {
      if (0xe < uVar9 >> 0x3c) {
        FUN_10362da98(&lStack_70,auStack_a8);
        FUN_10362da98(&lStack_90,auStack_a8);
LAB_10362e1b0:
        func_0x00010159fa64(lVar5,uVar10,uVar6);
        lVar5 = param_1[1];
        func_0x000100e25fcc(lVar5,param_1[2],param_2[1],param_2[2]);
        uVar1 = (uint)lVar5;
        goto LAB_10362e2d8;
      }
LAB_10362e1dc:
      FUN_10362da98(&lStack_70,auStack_a8);
      FUN_10362da98(&lStack_90,auStack_a8);
      func_0x00010159fa64(lVar5,uVar10,uVar6);
      lVar5 = lVar3;
      uVar10 = uVar11;
      uVar6 = uVar9;
    }
    func_0x00010159fa64(lVar5,uVar10,uVar6);
  }
LAB_10362e2d4:
  uVar1 = 0;
LAB_10362e2d8:
  return uVar1 & 1;
}



/* Entry: 10362e2f8; end: 10362e337;  */

void FUN_10362e2f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80e20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbef6e8;
  func_0x000107c61520(&UNK_10dbef6e8,&UNK_110672d98);
  puRam0000000112f80e20 = puVar1;
  return;
}



/* Entry: 10362e338; end: 10362e35b;  */

void FUN_10362e338(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10362e35c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10362e35c; end: 10362e39b;  */

void FUN_10362e35c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80e28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbef6c0;
  func_0x000107c61520(&UNK_10dbef6c0,&UNK_110672d98);
  puRam0000000112f80e28 = puVar1;
  return;
}



/* Entry: 10362e39c; end: 10362e3c7;  */

void FUN_10362e39c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10362e2f8();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001035e0f38();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10362e3c8; end: 10362e3cb;  */

void FUN_10362e3c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80e30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbef728;
  func_0x000107c61520(&UNK_10dbef728,&UNK_110672d98);
  puRam0000000112f80e30 = puVar1;
  return;
}



/* Entry: 10362e3cc; end: 10362e40b;  */

void FUN_10362e3cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80e30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbef728;
  func_0x000107c61520(&UNK_10dbef728,&UNK_110672d98);
  puRam0000000112f80e30 = puVar1;
  return;
}



/* Entry: 10362e40c; end: 10362e483;  */

long FUN_10362e40c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10362e484; end: 10362e607;  */

undefined8 * FUN_10362e484(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  func_0x000107c61434();
  func_0x00010006c00c(uVar3,uVar2);
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  uVar1 = param_2[5];
  if (uVar1 >> 0x3c < 0xf) {
    uVar3 = param_2[4];
    param_1[3] = param_2[3];
    func_0x00010006c00c(uVar3,uVar1);
    param_1[4] = uVar3;
    param_1[5] = uVar1;
  }
  else {
    uVar3 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar3;
    param_1[5] = param_2[5];
  }
  return param_1;
}



/* Entry: 10362e608; end: 10362e69b;  */

undefined8 * FUN_10362e608(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  func_0x00010006c090(uVar1,uVar4);
  if ((ulong)param_1[5] >> 0x3c < 0xf) {
    uVar2 = param_2[5];
    if (uVar2 >> 0x3c < 0xf) {
      uVar1 = param_1[4];
      uVar4 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = uVar4;
      param_1[5] = uVar2;
      func_0x00010006c090(uVar1);
      return param_1;
    }
    func_0x00010159d670(param_1 + 3);
  }
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  return param_1;
}



/* Entry: 10362e69c; end: 10362e73f;  */

int FUN_10362e69c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10362e740; end: 10362e77f;  */

void FUN_10362e740(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80e40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbef694;
  func_0x000107c61520(&DAT_10dbef694,&UNK_110672d98);
  puRam0000000112f80e40 = puVar1;
  return;
}



/* Entry: 10362e780; end: 10362e78f;  */

void FUN_10362e780(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 10362e790; end: 10362e7bf;  */

void FUN_10362e790(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_10362f110();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10362e7c0; end: 10362e7c7;  */

undefined8 FUN_10362e7c0(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 10362e7c8; end: 10362e83b;  */

void FUN_10362e7c8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f80eb0;
  func_0x0001000285a8(0x112f80eb0,&UNK_10dbef7f8);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10362e83c; end: 10362e847;  */

void FUN_10362e83c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10362e848; end: 10362e8f3;  */

void FUN_10362e848(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10362e8f4; end: 10362e907;  */

bool FUN_10362e8f4(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10362e908; end: 10362e94f;  */

void FUN_10362e908(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbefac0,0x29,2);
  uRam000000011380abb8 = uStack_38;
  uRam000000011380abb0 = uStack_40;
  uRam000000011380abc8 = uStack_28;
  uRam000000011380abc0 = uStack_30;
  uRam000000011380abd8 = uStack_18;
  uRam000000011380abd0 = uStack_20;
  return;
}



/* Entry: 10362e950; end: 10362ea53;  */

void FUN_10362e950(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x000101568c04();
LAB_10362e9d8:
        (*pcVar4)();
      }
      else {
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x000101568c04();
          goto LAB_10362e9d8;
        }
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x180);
          FUN_10362f11c();
          goto LAB_10362e9d8;
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10362ea54; end: 10362eb1f;  */

void FUN_10362ea54(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  long lStack_50;
  undefined1 uStack_48;
  
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar2 = *(code **)(param_3 + 0x80);
    uVar1 = param_1;
    lStack_50 = *unaff_x20;
    FUN_10362f11c();
    (*pcVar2)(&lStack_50,1,&UNK_110673028,uVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_10362eb20();
  if (unaff_x21 == 0) {
    FUN_10362eba4();
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 10362eb20; end: 10362eba3;  */

void FUN_10362eb20(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x28);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    uStack_48 = *(undefined8 *)(param_1 + 0x38);
    uStack_50 = *(undefined8 *)(param_1 + 0x30);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,2,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10362eba4; end: 10362ec27;  */

void FUN_10362eba4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x48);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x40);
    uStack_48 = *(undefined8 *)(param_1 + 0x58);
    uStack_50 = *(undefined8 *)(param_1 + 0x50);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,3,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10362ec28; end: 10362ec77;  */

uint FUN_10362ec28(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong auStack_150 [4];
  ulong uStack_130;
  long lStack_128;
  ulong uStack_120;
  long lStack_118;
  ulong uStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong uStack_80;
  long lStack_78;
  
  lVar5 = *param_1;
  lVar6 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar6 < 2) {
      if (lVar6 == 0) {
        if (lVar5 != 0) {
          return 0;
        }
      }
      else if (lVar5 != 1) {
        return 0;
      }
    }
    else if (lVar6 == 2) {
      if (lVar5 != 2) {
        return 0;
      }
    }
    else if (lVar5 != 3) {
      return 0;
    }
  }
  else if (lVar5 != lVar6) {
    return 0;
  }
  lVar6 = param_1[5];
  uVar7 = param_1[4];
  lVar5 = param_1[7];
  uVar10 = param_1[6];
  lVar9 = param_2[5];
  uVar8 = param_2[4];
  lVar12 = param_2[7];
  lVar11 = param_2[6];
  uStack_b0 = uVar8;
  lStack_a8 = lVar9;
  lStack_a0 = lVar11;
  lStack_98 = lVar12;
  uStack_90 = uVar7;
  lStack_88 = lVar6;
  uStack_80 = uVar10;
  lStack_78 = lVar5;
  if (lVar6 == 0) {
    if (lVar9 != 0) goto LAB_10362f270;
    func_0x000101627928(&uStack_90,&uStack_130);
    func_0x000101627928(&uStack_b0,&uStack_130);
LAB_10362f2d0:
    func_0x000101597ae4(uVar7,lVar6,uVar10,lVar5);
    lVar6 = param_1[9];
    uVar7 = param_1[8];
    lVar5 = param_1[0xb];
    uVar10 = param_1[10];
    lVar9 = param_2[9];
    uVar8 = param_2[8];
    lVar12 = param_2[0xb];
    lVar11 = param_2[10];
    uStack_f0 = uVar8;
    lStack_e8 = lVar9;
    lStack_e0 = lVar11;
    lStack_d8 = lVar12;
    uStack_d0 = uVar7;
    lStack_c8 = lVar6;
    uStack_c0 = uVar10;
    lStack_b8 = lVar5;
    if (lVar6 == 0) {
      if (lVar9 != 0) goto LAB_10362f390;
      func_0x000101627928(&uStack_d0,&uStack_130);
      func_0x000101627928(&uStack_f0,&uStack_130);
    }
    else {
      if (lVar9 == 0) {
LAB_10362f390:
        uStack_130 = uVar7;
        lStack_128 = lVar6;
        uStack_120 = uVar10;
        lStack_118 = lVar5;
        uStack_110 = uVar8;
        lStack_108 = lVar9;
        lStack_100 = lVar11;
        lStack_f8 = lVar12;
        func_0x000101627928(&uStack_d0,auStack_150);
        puVar3 = &uStack_f0;
        puVar4 = auStack_150;
        goto LAB_10362f3b4;
      }
      if (((uVar7 != uVar8) || (lVar6 != lVar9)) &&
         (uVar2 = uVar7, func_0x000107c605b8(uVar7,lVar6,uVar8,lVar9,0), (uVar2 & 1) == 0)) {
        func_0x000101627928(&uStack_d0,&uStack_130);
        puVar3 = &uStack_f0;
        goto LAB_10362f42c;
      }
      func_0x000101627928(&uStack_d0,&uStack_130);
      func_0x000101627928(&uStack_f0,&uStack_130);
      uVar2 = uVar10;
      func_0x000100e25fcc(uVar10,lVar5,lVar11,lVar12);
      func_0x000101597ae4(uVar8,lVar9,lVar11,lVar12);
      if ((uVar2 & 1) == 0) goto LAB_10362f448;
    }
    func_0x000101597ae4(uVar7,lVar6,uVar10,lVar5);
    lVar5 = param_1[2];
    func_0x000100e25fcc(lVar5,param_1[3],param_2[2],param_2[3]);
    uVar1 = (uint)lVar5;
  }
  else {
    if (lVar9 == 0) {
LAB_10362f270:
      uStack_130 = uVar7;
      lStack_128 = lVar6;
      uStack_120 = uVar10;
      lStack_118 = lVar5;
      uStack_110 = uVar8;
      lStack_108 = lVar9;
      lStack_100 = lVar11;
      lStack_f8 = lVar12;
      func_0x000101627928(&uStack_90,&uStack_d0);
      puVar3 = &uStack_b0;
      puVar4 = &uStack_d0;
LAB_10362f3b4:
      func_0x000101627928(puVar3,puVar4);
      func_0x000101628968(&uStack_130);
    }
    else {
      if (((uVar7 == uVar8) && (lVar6 == lVar9)) ||
         (uVar2 = uVar7, func_0x000107c605b8(uVar7,lVar6,uVar8,lVar9,0), (uVar2 & 1) != 0)) {
        func_0x000101627928(&uStack_90,&uStack_130);
        func_0x000101627928(&uStack_b0,&uStack_130);
        uVar2 = uVar10;
        func_0x000100e25fcc(uVar10,lVar5,lVar11,lVar12);
        func_0x000101597ae4(uVar8,lVar9,lVar11,lVar12);
        if ((uVar2 & 1) != 0) goto LAB_10362f2d0;
      }
      else {
        func_0x000101627928(&uStack_90,&uStack_130);
        puVar3 = &uStack_b0;
LAB_10362f42c:
        func_0x000101627928(puVar3,&uStack_130);
        func_0x000101597ae4(uVar8,lVar9,lVar11,lVar12);
      }
LAB_10362f448:
      func_0x000101597ae4(uVar7,lVar6,uVar10,lVar5);
    }
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Entry: 10362ec78; end: 10362eca7;  */

undefined1  [16] FUN_10362ec78(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 10362eca8; end: 10362ecdb;  */

void FUN_10362eca8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 10362ecdc; end: 10362ecef;  */

undefined1  [16] FUN_10362ecdc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x10362ecec;
  return auVar1;
}



/* Entry: 10362ecf0; end: 10362ed03;  */

void FUN_10362ecf0(void)

{
  FUN_10362e950();
  return;
}



/* Entry: 10362ed04; end: 10362ed43;  */

void FUN_10362ed04(void)

{
  FUN_10362ea54();
  return;
}



/* Entry: 10362ed44; end: 10362ed47;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10362ed44(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 10362ed48; end: 10362ed7f;  */

uint FUN_10362ed48(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_10362fbec();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 10362ed80; end: 10362edd7;  */

uint FUN_10362ed80(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_28 = param_1[9];
  uStack_30 = param_1[8];
  uStack_18 = param_1[0xb];
  uStack_20 = param_1[10];
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_78 = unaff_x20[0xb];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  FUN_10362f15c(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 10362edd8; end: 10362ee77;  */

/* WARNING: Possible PIC construction at 0x00010362ee24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010362ee34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010362ee28) */
/* WARNING: Removing unreachable block (ram,0x00010362ee38) */

void FUN_10362edd8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f80eb8 != -1) {
    func_0x000107c61568(0x112f80eb8,FUN_10362e908);
  }
  uVar5 = uRam000000011380abd8;
  uVar4 = uRam000000011380abd0;
  uVar3 = uRam000000011380abc8;
  uVar2 = uRam000000011380abc0;
  uVar1 = uRam000000011380abb8;
  *param_1 = uRam000000011380abb0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10362ee78; end: 10362eeb3;  */

void FUN_10362ee78(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f80f10;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f80f10,&UNK_10dbefa60);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10362eeb4; end: 10362efcf;  */

void FUN_10362eeb4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_d8 [72];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  uStack_48 = unaff_x20[9];
  uStack_50 = unaff_x20[8];
  uStack_38 = unaff_x20[0xb];
  uStack_40 = unaff_x20[10];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  func_0x000107c6068c(auStack_d8,0);
  func_0x000107c5fa50(auStack_d8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10362efd0; end: 10362f06f;  */

uint FUN_10362efd0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uStack_28 = param_2[9];
  uStack_30 = param_2[8];
  uStack_18 = param_2[0xb];
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_10362f15c(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 10362f070; end: 10362f10f;  */

/* WARNING: Possible PIC construction at 0x00010362f0bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010362f0cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010362f0c0) */
/* WARNING: Removing unreachable block (ram,0x00010362f0d0) */

void FUN_10362f070(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f80ed0 != -1) {
    func_0x000107c61568(0x112f80ed0,0x10362f028);
  }
  uVar5 = uRam000000011380ac08;
  uVar4 = uRam000000011380ac00;
  uVar3 = uRam000000011380abf8;
  uVar2 = uRam000000011380abf0;
  uVar1 = uRam000000011380abe8;
  *param_1 = uRam000000011380abe0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10362f110; end: 10362f11b;  */

void FUN_10362f110(void)

{
  return;
}



/* Entry: 10362f11c; end: 10362f15b;  */

void FUN_10362f11c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80ec0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbef800;
  func_0x000107c61520(&DAT_10dbef800,&UNK_110673028);
  puRam0000000112f80ec0 = puVar1;
  return;
}



/* Entry: 10362f15c; end: 10362f483;  */

uint FUN_10362f15c(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong auStack_150 [4];
  ulong uStack_130;
  long lStack_128;
  ulong uStack_120;
  long lStack_118;
  ulong uStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong uStack_80;
  long lStack_78;
  
  lVar5 = *param_1;
  lVar6 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar6 < 2) {
      if (lVar6 == 0) {
        if (lVar5 != 0) {
          return 0;
        }
      }
      else if (lVar5 != 1) {
        return 0;
      }
    }
    else if (lVar6 == 2) {
      if (lVar5 != 2) {
        return 0;
      }
    }
    else if (lVar5 != 3) {
      return 0;
    }
  }
  else if (lVar5 != lVar6) {
    return 0;
  }
  lVar6 = param_1[5];
  uVar7 = param_1[4];
  lVar5 = param_1[7];
  uVar10 = param_1[6];
  lVar9 = param_2[5];
  uVar8 = param_2[4];
  lVar12 = param_2[7];
  lVar11 = param_2[6];
  uStack_b0 = uVar8;
  lStack_a8 = lVar9;
  lStack_a0 = lVar11;
  lStack_98 = lVar12;
  uStack_90 = uVar7;
  lStack_88 = lVar6;
  uStack_80 = uVar10;
  lStack_78 = lVar5;
  if (lVar6 == 0) {
    if (lVar9 != 0) goto LAB_10362f270;
    func_0x000101627928(&uStack_90,&uStack_130);
    func_0x000101627928(&uStack_b0,&uStack_130);
LAB_10362f2d0:
    func_0x000101597ae4(uVar7,lVar6,uVar10,lVar5);
    lVar6 = param_1[9];
    uVar7 = param_1[8];
    lVar5 = param_1[0xb];
    uVar10 = param_1[10];
    lVar9 = param_2[9];
    uVar8 = param_2[8];
    lVar12 = param_2[0xb];
    lVar11 = param_2[10];
    uStack_f0 = uVar8;
    lStack_e8 = lVar9;
    lStack_e0 = lVar11;
    lStack_d8 = lVar12;
    uStack_d0 = uVar7;
    lStack_c8 = lVar6;
    uStack_c0 = uVar10;
    lStack_b8 = lVar5;
    if (lVar6 == 0) {
      if (lVar9 != 0) goto LAB_10362f390;
      func_0x000101627928(&uStack_d0,&uStack_130);
      func_0x000101627928(&uStack_f0,&uStack_130);
    }
    else {
      if (lVar9 == 0) {
LAB_10362f390:
        uStack_130 = uVar7;
        lStack_128 = lVar6;
        uStack_120 = uVar10;
        lStack_118 = lVar5;
        uStack_110 = uVar8;
        lStack_108 = lVar9;
        lStack_100 = lVar11;
        lStack_f8 = lVar12;
        func_0x000101627928(&uStack_d0,auStack_150);
        puVar3 = &uStack_f0;
        puVar4 = auStack_150;
        goto LAB_10362f3b4;
      }
      if (((uVar7 != uVar8) || (lVar6 != lVar9)) &&
         (uVar2 = uVar7, func_0x000107c605b8(uVar7,lVar6,uVar8,lVar9,0), (uVar2 & 1) == 0)) {
        func_0x000101627928(&uStack_d0,&uStack_130);
        puVar3 = &uStack_f0;
        goto LAB_10362f42c;
      }
      func_0x000101627928(&uStack_d0,&uStack_130);
      func_0x000101627928(&uStack_f0,&uStack_130);
      uVar2 = uVar10;
      func_0x000100e25fcc(uVar10,lVar5,lVar11,lVar12);
      func_0x000101597ae4(uVar8,lVar9,lVar11,lVar12);
      if ((uVar2 & 1) == 0) goto LAB_10362f448;
    }
    func_0x000101597ae4(uVar7,lVar6,uVar10,lVar5);
    lVar5 = param_1[2];
    func_0x000100e25fcc(lVar5,param_1[3],param_2[2],param_2[3]);
    uVar1 = (uint)lVar5;
  }
  else {
    if (lVar9 == 0) {
LAB_10362f270:
      uStack_130 = uVar7;
      lStack_128 = lVar6;
      uStack_120 = uVar10;
      lStack_118 = lVar5;
      uStack_110 = uVar8;
      lStack_108 = lVar9;
      lStack_100 = lVar11;
      lStack_f8 = lVar12;
      func_0x000101627928(&uStack_90,&uStack_d0);
      puVar3 = &uStack_b0;
      puVar4 = &uStack_d0;
LAB_10362f3b4:
      func_0x000101627928(puVar3,puVar4);
      func_0x000101628968(&uStack_130);
    }
    else {
      if (((uVar7 == uVar8) && (lVar6 == lVar9)) ||
         (uVar2 = uVar7, func_0x000107c605b8(uVar7,lVar6,uVar8,lVar9,0), (uVar2 & 1) != 0)) {
        func_0x000101627928(&uStack_90,&uStack_130);
        func_0x000101627928(&uStack_b0,&uStack_130);
        uVar2 = uVar10;
        func_0x000100e25fcc(uVar10,lVar5,lVar11,lVar12);
        func_0x000101597ae4(uVar8,lVar9,lVar11,lVar12);
        if ((uVar2 & 1) != 0) goto LAB_10362f2d0;
      }
      else {
        func_0x000101627928(&uStack_90,&uStack_130);
        puVar3 = &uStack_b0;
LAB_10362f42c:
        func_0x000101627928(puVar3,&uStack_130);
        func_0x000101597ae4(uVar8,lVar9,lVar11,lVar12);
      }
LAB_10362f448:
      func_0x000101597ae4(uVar7,lVar6,uVar10,lVar5);
    }
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Entry: 10362f484; end: 10362f4c3;  */

void FUN_10362f484(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80ec8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbef970;
  func_0x000107c61520(&UNK_10dbef970,&UNK_110672f88);
  puRam0000000112f80ec8 = puVar1;
  return;
}



/* Entry: 10362f4c4; end: 10362f4d7;  */

void FUN_10362f4c4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10362f4d8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10362f518)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10362f4d8; end: 10362f557;  */

void FUN_10362f4d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80ed8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbef898;
  func_0x000107c61520(&UNK_10dbef898,&UNK_110673028);
  puRam0000000112f80ed8 = puVar1;
  return;
}



/* Entry: 10362f558; end: 10362f55b;  */

void FUN_10362f558(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f80ee8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f80ef0;
  func_0x00010002969c(0x112f80ef0,&UNK_10dbef820);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f80ee8 = puVar2;
  return;
}



/* Entry: 10362f55c; end: 10362f5ab;  */

void FUN_10362f55c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f80ee8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f80ef0;
  func_0x00010002969c(0x112f80ef0,&UNK_10dbef820);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f80ee8 = puVar2;
  return;
}



/* Entry: 10362f5ac; end: 10362f5af;  */

void FUN_10362f5ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80ef8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbef8d8;
  func_0x000107c61520(&UNK_10dbef8d8,&UNK_110673028);
  puRam0000000112f80ef8 = puVar1;
  return;
}



/* Entry: 10362f5b0; end: 10362f5ef;  */

void FUN_10362f5b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80ef8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbef8d8;
  func_0x000107c61520(&UNK_10dbef8d8,&UNK_110673028);
  puRam0000000112f80ef8 = puVar1;
  return;
}



/* Entry: 10362f5f0; end: 10362f613;  */

void FUN_10362f5f0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10362f614();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10362f614; end: 10362f653;  */

void FUN_10362f614(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80f00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbef948;
  func_0x000107c61520(&UNK_10dbef948,&UNK_110672f88);
  puRam0000000112f80f00 = puVar1;
  return;
}



/* Entry: 10362f654; end: 10362f667;  */

void FUN_10362f654(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10362f484();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1035e0f78)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10362f668; end: 10362f697;  */

void FUN_10362f668(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10362f698; end: 10362f69b;  */

void FUN_10362f698(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80f08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbef9b0;
  func_0x000107c61520(&UNK_10dbef9b0,&UNK_110672f88);
  puRam0000000112f80f08 = puVar1;
  return;
}



/* Entry: 10362f69c; end: 10362f6db;  */

void FUN_10362f69c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80f08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbef9b0;
  func_0x000107c61520(&UNK_10dbef9b0,&UNK_110672f88);
  puRam0000000112f80f08 = puVar1;
  return;
}


