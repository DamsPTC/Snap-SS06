/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1035e05c8; end: 1035e065f;  */

int FUN_1035e05c8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1035e0660; end: 1035e0733;  */

/* WARNING: Possible PIC construction at 0x0001035e06d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035e06d8) */
/* WARNING: Removing unreachable block (ram,0x000101556278) */
/* WARNING: Removing unreachable block (ram,0x000101556288) */
/* WARNING: Removing unreachable block (ram,0x000101556284) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1035e0660(long param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return;
  }
  func_0x000107c6142c();
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2);
  return;
}



/* Entry: 1035e0734; end: 1035e07b7;  */

/* WARNING: Possible PIC construction at 0x0001035e0778: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035e077c) */
/* WARNING: Removing unreachable block (ram,0x000101597ae4) */
/* WARNING: Removing unreachable block (ram,0x000101597b18) */
/* WARNING: Removing unreachable block (ram,0x000101597ae8) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1035e0734(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,
                  undefined8 param_5,long param_6)

{
  uint uVar1;
  
  if (param_6 == 1) {
    return;
  }
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 == 1) {
    param_3 = param_4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3);
  return;
}



/* Entry: 1035e07b8; end: 1035e081b;  */

/* WARNING: Possible PIC construction at 0x0001035e07f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035e07f8) */
/* WARNING: Removing unreachable block (ram,0x000100d5628c) */
/* WARNING: Removing unreachable block (ram,0x000100d5629c) */
/* WARNING: Removing unreachable block (ram,0x000100d56298) */

void FUN_1035e07b8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5)

{
  uint uVar1;
  
  if (param_3 == 0) {
    return;
  }
  func_0x000107c6142c(param_3);
  uVar1 = (uint)(param_5 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    func_0x000107c61574(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_5 & 0x3fffffffffffffff);
  return;
}



/* Entry: 1035e081c; end: 1035e084f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1035e081c(long param_1)

{
  uint uVar1;
  ulong in_stack_00000000;
  ulong in_stack_00000008;
  
  if (param_1 == 1) {
    return;
  }
  FUN_1035e0850();
  uVar1 = (uint)(in_stack_00000008 >> 0x3e);
  if (uVar1 == 1) {
    in_stack_00000000 = in_stack_00000008 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(in_stack_00000000);
  return;
}



/* Entry: 1035e0850; end: 1035e091f;  */

/* WARNING: Possible PIC construction at 0x0001035e0888: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035e088c) */
/* WARNING: Removing unreachable block (ram,0x000100d5628c) */
/* WARNING: Removing unreachable block (ram,0x000100d5629c) */
/* WARNING: Removing unreachable block (ram,0x000100d56298) */

void FUN_1035e0850(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return;
  }
  func_0x000107c6142c();
  uVar1 = (uint)(param_5 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    func_0x000107c61574(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_5 & 0x3fffffffffffffff);
  return;
}



/* Entry: 1035e0920; end: 1035e09db;  */

/* WARNING: Possible PIC construction at 0x0001035e0980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035e09a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035e09a4) */
/* WARNING: Removing unreachable block (ram,0x0001035e0984) */
/* WARNING: Removing unreachable block (ram,0x000100d5628c) */
/* WARNING: Removing unreachable block (ram,0x000100d5629c) */
/* WARNING: Removing unreachable block (ram,0x000100d56298) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1035e0920(ulong param_1,ulong param_2)

{
  uint uVar1;
  
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 == 1) {
    param_1 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1035e09dc; end: 1035e0a1b;  */

void FUN_1035e09dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7cb08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe342c;
  func_0x000107c61520(&DAT_10dbe342c,&UNK_11066abb0);
  puRam0000000112f7cb08 = puVar1;
  return;
}



/* Entry: 1035e0a1c; end: 1035e0b37;  */

undefined8 FUN_1035e0a1c(undefined8 param_1,undefined8 param_2)

{
  FUN_103642b44(param_2,param_1);
  return param_2;
}



/* Entry: 1035e0b38; end: 1035e1237;  */

void FUN_1035e0b38(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7cb10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbefea0;
  func_0x000107c61520(&DAT_10dbefea0,&UNK_110673618);
  puRam0000000112f7cb10 = puVar1;
  return;
}



/* Entry: 1035e1238; end: 1035e1253;  */

undefined8 * FUN_1035e1238(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 1035e1254; end: 1035e1283;  */

void FUN_1035e1254(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_1035e14b4();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1035e1284; end: 1035e128b;  */

undefined8 FUN_1035e1284(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 1035e128c; end: 1035e12ff;  */

void FUN_1035e128c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f7cc58;
  func_0x0001000285a8(0x112f7cc58,&UNK_10dbe3fe0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1035e1300; end: 1035e130b;  */

void FUN_1035e1300(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1035e130c; end: 1035e13b7;  */

void FUN_1035e130c(void)

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



/* Entry: 1035e13b8; end: 1035e13cb;  */

bool FUN_1035e13b8(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1035e13cc; end: 1035e1413;  */

void FUN_1035e13cc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe4150,0x5c,2);
  uRam0000000113809368 = uStack_38;
  uRam0000000113809360 = uStack_40;
  uRam0000000113809378 = uStack_28;
  uRam0000000113809370 = uStack_30;
  uRam0000000113809388 = uStack_18;
  uRam0000000113809380 = uStack_20;
  return;
}



/* Entry: 1035e1414; end: 1035e14b3;  */

/* WARNING: Possible PIC construction at 0x0001035e1460: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035e1470: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035e1464) */
/* WARNING: Removing unreachable block (ram,0x0001035e1474) */

void FUN_1035e1414(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7cc60 != -1) {
    func_0x000107c61568(0x112f7cc60,FUN_1035e13cc);
  }
  uVar5 = uRam0000000113809388;
  uVar4 = uRam0000000113809380;
  uVar3 = uRam0000000113809378;
  uVar2 = uRam0000000113809370;
  uVar1 = uRam0000000113809368;
  *param_1 = uRam0000000113809360;
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



/* Entry: 1035e14b4; end: 1035e14bf;  */

void FUN_1035e14b4(void)

{
  return;
}



/* Entry: 1035e14c0; end: 1035e14eb;  */

void FUN_1035e14c0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035e14ec();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001035e152c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035e14ec; end: 1035e156b;  */

void FUN_1035e14ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7cc68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe4080;
  func_0x000107c61520(&UNK_10dbe4080,&UNK_11066ad20);
  puRam0000000112f7cc68 = puVar1;
  return;
}



/* Entry: 1035e156c; end: 1035e156f;  */

void FUN_1035e156c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f7cc78 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f7cc80;
  func_0x00010002969c(0x112f7cc80,&UNK_10dbe4008);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f7cc78 = puVar2;
  return;
}



/* Entry: 1035e1570; end: 1035e15bf;  */

void FUN_1035e1570(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f7cc78 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f7cc80;
  func_0x00010002969c(0x112f7cc80,&UNK_10dbe4008);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f7cc78 = puVar2;
  return;
}



/* Entry: 1035e15c0; end: 1035e15c3;  */

void FUN_1035e15c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7cc88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe40c0;
  func_0x000107c61520(&UNK_10dbe40c0,&UNK_11066ad20);
  puRam0000000112f7cc88 = puVar1;
  return;
}



/* Entry: 1035e15c4; end: 1035e1603;  */

void FUN_1035e15c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7cc88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe40c0;
  func_0x000107c61520(&UNK_10dbe40c0,&UNK_11066ad20);
  puRam0000000112f7cc88 = puVar1;
  return;
}



/* Entry: 1035e1604; end: 1035e16b3;  */

int FUN_1035e1604(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1035e16b4; end: 1035e16e3;  */

void FUN_1035e16b4(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_1035e2df4();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1035e16e4; end: 1035e16eb;  */

undefined8 FUN_1035e16e4(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 1035e16ec; end: 1035e175f;  */

void FUN_1035e16ec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f7cd10;
  func_0x0001000285a8(0x112f7cd10,&UNK_10dbe41d0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1035e1760; end: 1035e176b;  */

void FUN_1035e1760(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1035e176c; end: 1035e1817;  */

void FUN_1035e176c(void)

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



/* Entry: 1035e1818; end: 1035e188f;  */

bool FUN_1035e1818(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1035e1890; end: 1035e18d7;  */

void FUN_1035e1890(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe4610,0x147,2);
  uRam0000000113809398 = uStack_38;
  uRam0000000113809390 = uStack_40;
  uRam00000001138093a8 = uStack_28;
  uRam00000001138093a0 = uStack_30;
  uRam00000001138093b8 = uStack_18;
  uRam00000001138093b0 = uStack_20;
  return;
}



/* Entry: 1035e18d8; end: 1035e1ab7;  */

/* WARNING: Removing unreachable block (ram,0x0001035e1ab4) */

void FUN_1035e18d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  uVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        break;
      case 2:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        break;
      case 3:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x0001015c5cfc();
        break;
      case 4:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x0001015c5cfc();
        break;
      case 5:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x0001015c5cfc();
        break;
      case 6:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x0001015c5cfc();
        break;
      case 7:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x000103524e74();
        break;
      case 8:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x000103524e74();
        break;
      case 9:
        pcVar3 = *(code **)(param_3 + 0x198);
        FUN_1035e4298();
        break;
      case 10:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        break;
      case 0xb:
        pcVar3 = *(code **)(param_3 + 0x180);
        FUN_1035e2e00();
        break;
      case 0xc:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x0001015c5cfc();
        break;
      default:
        goto LAB_1035e1aa4;
      }
      (*pcVar3)();
LAB_1035e1aa4:
      uVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1035e1ab8; end: 1035e1c6f;  */

/* WARNING: Removing unreachable block (ram,0x0001035e1c34) */

void FUN_1035e1ab8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  long lStack_50;
  undefined1 uStack_48;
  
  FUN_1035e1c70();
  if (unaff_x21 == 0) {
    FUN_1035e1cf8();
    FUN_1035e1d80();
    FUN_1035e1e08();
    FUN_1035e1e90();
    FUN_1035e1f18();
    FUN_1035e1fa0();
    FUN_1035e2028();
    FUN_1035e20b0();
    plVar1 = unaff_x20;
    FUN_1035e2138();
    if (*unaff_x20 != 0) {
      uStack_48 = (undefined1)unaff_x20[1];
      pcVar2 = *(code **)(param_3 + 0x80);
      lStack_50 = *unaff_x20;
      FUN_1035e2e00();
      (*pcVar2)(&lStack_50,0xb,&UNK_11066b080,plVar1,param_2,param_3);
    }
    FUN_1035e21c0();
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 1035e1c70; end: 1035e1cf7;  */

void FUN_1035e1c70(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x20);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x30);
    uStack_50 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,1,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035e1cf8; end: 1035e1d7f;  */

void FUN_1035e1cf8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x38);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x48);
    uStack_50 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,2,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035e1d80; end: 1035e1e07;  */

void FUN_1035e1d80(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x60);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x58);
    uStack_60 = *(undefined8 *)(param_1 + 0x50);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,3,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035e1e08; end: 1035e1e8f;  */

void FUN_1035e1e08(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x78);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x70);
    uStack_60 = *(undefined8 *)(param_1 + 0x68);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,4,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035e1e90; end: 1035e1f17;  */

void FUN_1035e1e90(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x90);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x88);
    uStack_60 = *(undefined8 *)(param_1 + 0x80);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,5,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035e1f18; end: 1035e1f9f;  */

void FUN_1035e1f18(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xa8);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xa0);
    uStack_60 = *(undefined8 *)(param_1 + 0x98);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,6,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035e1fa0; end: 1035e2027;  */

void FUN_1035e1fa0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xc0);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xb8);
    uStack_60 = *(undefined8 *)(param_1 + 0xb0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103524e74();
    (*pcVar1)(&uStack_60,7,&UNK_110790b80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035e2028; end: 1035e20af;  */

void FUN_1035e2028(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xd8);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xd0);
    uStack_60 = *(undefined8 *)(param_1 + 200);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103524e74();
    (*pcVar1)(&uStack_60,8,&UNK_110790b80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035e20b0; end: 1035e2137;  */

void FUN_1035e20b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lStack_60 = *(long *)(param_1 + 0xf0);
  if (lStack_60 != 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0xe8);
    uStack_70 = *(undefined8 *)(param_1 + 0xe0);
    uStack_50 = *(undefined8 *)(param_1 + 0x100);
    uStack_58 = *(undefined8 *)(param_1 + 0xf8);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1035e4298();
    (*pcVar1)(&uStack_70,9,&UNK_11066b0f8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035e2138; end: 1035e21bf;  */

void FUN_1035e2138(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x108);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x118);
    uStack_50 = *(undefined8 *)(param_1 + 0x110);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,10,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035e21c0; end: 1035e2247;  */

void FUN_1035e21c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x130);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x128);
    uStack_60 = *(undefined8 *)(param_1 + 0x120);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,0xc,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035e2248; end: 1035e22d3;  */

uint FUN_1035e2248(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long alStack_378 [3];
  ulong uStack_360;
  ulong uStack_358;
  long lStack_350;
  long lStack_330;
  ulong uStack_328;
  ulong uStack_320;
  long lStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f0;
  ulong uStack_2e8;
  long lStack_2e0;
  long lStack_2d0;
  ulong uStack_2c8;
  long lStack_2c0;
  ulong uStack_2b8;
  long lStack_2b0;
  long lStack_2a0;
  ulong uStack_298;
  long lStack_290;
  ulong uStack_288;
  long lStack_280;
  long lStack_270;
  ulong uStack_268;
  ulong uStack_260;
  long lStack_250;
  ulong uStack_248;
  ulong uStack_240;
  long lStack_230;
  ulong uStack_228;
  ulong uStack_220;
  long lStack_210;
  ulong uStack_208;
  ulong uStack_200;
  long lStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  long lStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  long lStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  long lStack_190;
  ulong uStack_188;
  ulong uStack_180;
  long lStack_170;
  ulong uStack_168;
  ulong uStack_160;
  long lStack_150;
  ulong uStack_148;
  ulong uStack_140;
  long lStack_130;
  ulong uStack_128;
  ulong uStack_120;
  long lStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  ulong uStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  ulong uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  
  uVar10 = param_1[5];
  uVar15 = param_1[4];
  lVar6 = param_1[6];
  uVar13 = param_2[5];
  uVar16 = param_2[4];
  lVar7 = param_2[6];
  uStack_b0 = uVar16;
  uStack_a8 = uVar13;
  lStack_a0 = lVar7;
  uStack_90 = uVar15;
  uStack_88 = uVar10;
  lStack_80 = lVar6;
  if ((uVar15 & 0xff) == 2) {
    if ((uVar16 & 0xff) != 2) {
LAB_1035e33b8:
      FUN_1035e2dac(&uStack_90,&lStack_2a0,0x112db94f0,&UNK_10d96af00);
      lVar11 = -0xa0;
      lVar14 = lVar6;
      uVar2 = uVar10;
      uVar12 = uVar15;
      lVar6 = lVar7;
      uVar10 = uVar13;
      uVar15 = uVar16;
LAB_1035e3448:
      puVar3 = (ulong *)(&stack0xfffffffffffffff0 + lVar11);
      plVar4 = &lStack_2a0;
LAB_1035e344c:
      FUN_1035e2dac(puVar3,plVar4,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar12,uVar2,lVar14);
      goto LAB_1035e3540;
    }
    FUN_1035e2dac(&uStack_90,&lStack_2a0,0x112db94f0,&UNK_10d96af00);
    FUN_1035e2dac(&uStack_b0,&lStack_2a0,0x112db94f0,&UNK_10d96af00);
LAB_1035e2eec:
    func_0x000101556278(uVar15,uVar10,lVar6);
    uVar10 = param_1[8];
    uVar15 = param_1[7];
    lVar6 = param_1[9];
    uVar13 = param_2[8];
    uVar16 = param_2[7];
    lVar7 = param_2[9];
    uStack_f0 = uVar16;
    uStack_e8 = uVar13;
    lStack_e0 = lVar7;
    uStack_d0 = uVar15;
    uStack_c8 = uVar10;
    lStack_c0 = lVar6;
    if ((uVar15 & 0xff) == 2) {
      if ((uVar16 & 0xff) != 2) {
LAB_1035e3420:
        FUN_1035e2dac(&uStack_d0,&lStack_2a0,0x112db94f0,&UNK_10d96af00);
        lVar11 = -0xe0;
        lVar14 = lVar6;
        uVar2 = uVar10;
        uVar12 = uVar15;
        lVar6 = lVar7;
        uVar10 = uVar13;
        uVar15 = uVar16;
        goto LAB_1035e3448;
      }
      FUN_1035e2dac(&uStack_d0,&lStack_2a0,0x112db94f0,&UNK_10d96af00);
      FUN_1035e2dac(&uStack_f0,&lStack_2a0,0x112db94f0,&UNK_10d96af00);
    }
    else {
      if ((uVar16 & 0xff) == 2) goto LAB_1035e3420;
      if ((((uint)uVar16 ^ (uint)uVar15) & 1) != 0) {
        FUN_1035e2dac(&uStack_d0,&lStack_2a0,0x112db94f0,&UNK_10d96af00);
        lVar11 = -0xe0;
        goto LAB_1035e3514;
      }
      FUN_1035e2dac(&uStack_d0,&lStack_2a0,0x112db94f0,&UNK_10d96af00);
      FUN_1035e2dac(&uStack_f0,&lStack_2a0,0x112db94f0,&UNK_10d96af00);
      uVar2 = uVar10;
      func_0x000100e25fcc(uVar10,lVar6,uVar13,lVar7);
      func_0x000101556278(uVar16,uVar13,lVar7);
      if ((uVar2 & 1) == 0) goto LAB_1035e3540;
    }
    func_0x000101556278(uVar15,uVar10,lVar6);
    uVar15 = param_1[0xb];
    lVar6 = param_1[10];
    uVar10 = param_1[0xc];
    uVar16 = param_2[0xb];
    lVar7 = param_2[10];
    uVar13 = param_2[0xc];
    lStack_130 = lVar7;
    uStack_128 = uVar16;
    uStack_120 = uVar13;
    lStack_110 = lVar6;
    uStack_108 = uVar15;
    uStack_100 = uVar10;
    if (uVar10 >> 0x3c < 0xf) {
      if (0xe < uVar13 >> 0x3c) goto LAB_1035e3574;
      if (lVar6 == lVar7) {
        FUN_1035e2dac(&lStack_110,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
        FUN_1035e2dac(&lStack_130,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
        uVar2 = uVar15;
        func_0x000100e25fcc(uVar15,uVar10,uVar16,uVar13);
        func_0x000100d562f8(lVar6,uVar16,uVar13);
        if ((uVar2 & 1) != 0) goto LAB_1035e3000;
      }
      else {
        uVar8 = 0x112db6f48;
        puVar9 = &UNK_10d969b40;
        FUN_1035e2dac(&lStack_110,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
        plVar4 = &lStack_130;
LAB_1035e3ae8:
        plVar5 = &lStack_2a0;
LAB_1035e3aec:
        FUN_1035e2dac(plVar4,plVar5,uVar8,puVar9);
        func_0x000100d562f8(lVar7,uVar16,uVar13);
      }
LAB_1035e3b14:
      func_0x000100d562f8(lVar6,uVar15,uVar10);
    }
    else {
      if (uVar13 >> 0x3c < 0xf) {
LAB_1035e3574:
        uVar8 = 0x112db6f48;
        puVar9 = &UNK_10d969b40;
        FUN_1035e2dac(&lStack_110,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
        plVar4 = &lStack_130;
        uVar2 = uVar10;
        uVar12 = uVar15;
        lVar11 = lVar6;
        uVar10 = uVar13;
        uVar15 = uVar16;
        lVar6 = lVar7;
LAB_1035e39f0:
        plVar5 = &lStack_2a0;
LAB_1035e39f4:
        FUN_1035e2dac(plVar4,plVar5,uVar8,puVar9);
        func_0x000100d562f8(lVar11,uVar12,uVar2);
        goto LAB_1035e3b14;
      }
      FUN_1035e2dac(&lStack_110,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
      FUN_1035e2dac(&lStack_130,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
LAB_1035e3000:
      func_0x000100d562f8(lVar6,uVar15,uVar10);
      uVar15 = param_1[0xe];
      lVar6 = param_1[0xd];
      uVar10 = param_1[0xf];
      uVar16 = param_2[0xe];
      lVar7 = param_2[0xd];
      uVar13 = param_2[0xf];
      lStack_170 = lVar7;
      uStack_168 = uVar16;
      uStack_160 = uVar13;
      lStack_150 = lVar6;
      uStack_148 = uVar15;
      uStack_140 = uVar10;
      if (uVar10 >> 0x3c < 0xf) {
        if (0xe < uVar13 >> 0x3c) goto LAB_1035e3684;
        if (lVar6 != lVar7) {
          uVar8 = 0x112db6f48;
          puVar9 = &UNK_10d969b40;
          FUN_1035e2dac(&lStack_150,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
          plVar4 = &lStack_170;
          goto LAB_1035e3ae8;
        }
        FUN_1035e2dac(&lStack_150,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
        FUN_1035e2dac(&lStack_170,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
        uVar2 = uVar15;
        func_0x000100e25fcc(uVar15,uVar10,uVar16,uVar13);
        func_0x000100d562f8(lVar6,uVar16,uVar13);
        if ((uVar2 & 1) == 0) goto LAB_1035e3b14;
      }
      else {
        if (uVar13 >> 0x3c < 0xf) {
LAB_1035e3684:
          uVar8 = 0x112db6f48;
          puVar9 = &UNK_10d969b40;
          FUN_1035e2dac(&lStack_150,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
          plVar4 = &lStack_170;
          uVar2 = uVar10;
          uVar12 = uVar15;
          lVar11 = lVar6;
          uVar10 = uVar13;
          uVar15 = uVar16;
          lVar6 = lVar7;
          goto LAB_1035e39f0;
        }
        FUN_1035e2dac(&lStack_150,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
        FUN_1035e2dac(&lStack_170,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
      }
      func_0x000100d562f8(lVar6,uVar15,uVar10);
      uVar15 = param_1[0x11];
      lVar6 = param_1[0x10];
      uVar10 = param_1[0x12];
      uVar16 = param_2[0x11];
      lVar7 = param_2[0x10];
      uVar13 = param_2[0x12];
      lStack_1b0 = lVar7;
      uStack_1a8 = uVar16;
      uStack_1a0 = uVar13;
      lStack_190 = lVar6;
      uStack_188 = uVar15;
      uStack_180 = uVar10;
      if (uVar10 >> 0x3c < 0xf) {
        if (0xe < uVar13 >> 0x3c) goto LAB_1035e3754;
        if (lVar6 != lVar7) {
          uVar8 = 0x112db6f48;
          puVar9 = &UNK_10d969b40;
          FUN_1035e2dac(&lStack_190,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
          plVar4 = &lStack_1b0;
          goto LAB_1035e3ae8;
        }
        FUN_1035e2dac(&lStack_190,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
        FUN_1035e2dac(&lStack_1b0,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
        uVar2 = uVar15;
        func_0x000100e25fcc(uVar15,uVar10,uVar16,uVar13);
        func_0x000100d562f8(lVar6,uVar16,uVar13);
        if ((uVar2 & 1) == 0) goto LAB_1035e3b14;
      }
      else {
        if (uVar13 >> 0x3c < 0xf) {
LAB_1035e3754:
          uVar8 = 0x112db6f48;
          puVar9 = &UNK_10d969b40;
          FUN_1035e2dac(&lStack_190,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
          plVar4 = &lStack_1b0;
          uVar2 = uVar10;
          uVar12 = uVar15;
          lVar11 = lVar6;
          uVar10 = uVar13;
          uVar15 = uVar16;
          lVar6 = lVar7;
          goto LAB_1035e39f0;
        }
        FUN_1035e2dac(&lStack_190,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
        FUN_1035e2dac(&lStack_1b0,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
      }
      func_0x000100d562f8(lVar6,uVar15,uVar10);
      uVar15 = param_1[0x14];
      lVar6 = param_1[0x13];
      uVar10 = param_1[0x15];
      uVar16 = param_2[0x14];
      lVar7 = param_2[0x13];
      uVar13 = param_2[0x15];
      lStack_1f0 = lVar7;
      uStack_1e8 = uVar16;
      uStack_1e0 = uVar13;
      lStack_1d0 = lVar6;
      uStack_1c8 = uVar15;
      uStack_1c0 = uVar10;
      if (uVar10 >> 0x3c < 0xf) {
        if (0xe < uVar13 >> 0x3c) goto LAB_1035e3824;
        if (lVar6 != lVar7) {
          uVar8 = 0x112db6f48;
          puVar9 = &UNK_10d969b40;
          FUN_1035e2dac(&lStack_1d0,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
          plVar4 = &lStack_1f0;
          goto LAB_1035e3ae8;
        }
        FUN_1035e2dac(&lStack_1d0,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
        FUN_1035e2dac(&lStack_1f0,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
        uVar2 = uVar15;
        func_0x000100e25fcc(uVar15,uVar10,uVar16,uVar13);
        func_0x000100d562f8(lVar6,uVar16,uVar13);
        if ((uVar2 & 1) == 0) goto LAB_1035e3b14;
      }
      else {
        if (uVar13 >> 0x3c < 0xf) {
LAB_1035e3824:
          uVar8 = 0x112db6f48;
          puVar9 = &UNK_10d969b40;
          FUN_1035e2dac(&lStack_1d0,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
          plVar4 = &lStack_1f0;
          uVar2 = uVar10;
          uVar12 = uVar15;
          lVar11 = lVar6;
          uVar10 = uVar13;
          uVar15 = uVar16;
          lVar6 = lVar7;
          goto LAB_1035e39f0;
        }
        FUN_1035e2dac(&lStack_1d0,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
        FUN_1035e2dac(&lStack_1f0,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
      }
      func_0x000100d562f8(lVar6,uVar15,uVar10);
      uVar15 = param_1[0x17];
      lVar6 = param_1[0x16];
      uVar10 = param_1[0x18];
      uVar16 = param_2[0x17];
      lVar7 = param_2[0x16];
      uVar13 = param_2[0x18];
      lStack_230 = lVar7;
      uStack_228 = uVar16;
      uStack_220 = uVar13;
      lStack_210 = lVar6;
      uStack_208 = uVar15;
      uStack_200 = uVar10;
      if (uVar10 >> 0x3c < 0xf) {
        if (0xe < uVar13 >> 0x3c) goto LAB_1035e38f4;
        if ((int)lVar6 != (int)lVar7) {
          uVar8 = 0x112f75e88;
          puVar9 = &UNK_10dbe41c0;
          FUN_1035e2dac(&lStack_210,&lStack_2a0,0x112f75e88,&UNK_10dbe41c0);
          plVar4 = &lStack_230;
          goto LAB_1035e3ae8;
        }
        FUN_1035e2dac(&lStack_210,&lStack_2a0,0x112f75e88,&UNK_10dbe41c0);
        FUN_1035e2dac(&lStack_230,&lStack_2a0,0x112f75e88,&UNK_10dbe41c0);
        uVar2 = uVar15;
        func_0x000100e25fcc(uVar15,uVar10,uVar16,uVar13);
        func_0x000100d562f8(lVar7,uVar16,uVar13);
        if ((uVar2 & 1) == 0) goto LAB_1035e3b14;
      }
      else {
        if (uVar13 >> 0x3c < 0xf) {
LAB_1035e38f4:
          uVar8 = 0x112f75e88;
          puVar9 = &UNK_10dbe41c0;
          FUN_1035e2dac(&lStack_210,&lStack_2a0,0x112f75e88,&UNK_10dbe41c0);
          plVar4 = &lStack_230;
          uVar2 = uVar10;
          uVar12 = uVar15;
          lVar11 = lVar6;
          uVar10 = uVar13;
          uVar15 = uVar16;
          lVar6 = lVar7;
          goto LAB_1035e39f0;
        }
        FUN_1035e2dac(&lStack_210,&lStack_2a0,0x112f75e88,&UNK_10dbe41c0);
        FUN_1035e2dac(&lStack_230,&lStack_2a0,0x112f75e88,&UNK_10dbe41c0);
      }
      func_0x000100d562f8(lVar6,uVar15,uVar10);
      uVar15 = param_1[0x1a];
      lVar6 = param_1[0x19];
      uVar10 = param_1[0x1b];
      uVar16 = param_2[0x1a];
      lVar7 = param_2[0x19];
      uVar13 = param_2[0x1b];
      lStack_270 = lVar7;
      uStack_268 = uVar16;
      uStack_260 = uVar13;
      lStack_250 = lVar6;
      uStack_248 = uVar15;
      uStack_240 = uVar10;
      if (uVar10 >> 0x3c < 0xf) {
        if (0xe < uVar13 >> 0x3c) goto LAB_1035e39c8;
        if ((int)lVar6 != (int)lVar7) {
          uVar8 = 0x112f75e88;
          puVar9 = &UNK_10dbe41c0;
          FUN_1035e2dac(&lStack_250,&lStack_2a0,0x112f75e88,&UNK_10dbe41c0);
          plVar4 = &lStack_270;
          goto LAB_1035e3ae8;
        }
        FUN_1035e2dac(&lStack_250,&lStack_2a0,0x112f75e88,&UNK_10dbe41c0);
        FUN_1035e2dac(&lStack_270,&lStack_2a0,0x112f75e88,&UNK_10dbe41c0);
        uVar2 = uVar15;
        func_0x000100e25fcc(uVar15,uVar10,uVar16,uVar13);
        func_0x000100d562f8(lVar7,uVar16,uVar13);
        if ((uVar2 & 1) == 0) goto LAB_1035e3b14;
      }
      else {
        if (uVar13 >> 0x3c < 0xf) {
LAB_1035e39c8:
          uVar8 = 0x112f75e88;
          puVar9 = &UNK_10dbe41c0;
          FUN_1035e2dac(&lStack_250,&lStack_2a0,0x112f75e88,&UNK_10dbe41c0);
          plVar4 = &lStack_270;
          uVar2 = uVar10;
          uVar12 = uVar15;
          lVar11 = lVar6;
          uVar10 = uVar13;
          uVar15 = uVar16;
          lVar6 = lVar7;
          goto LAB_1035e39f0;
        }
        FUN_1035e2dac(&lStack_250,&lStack_2a0,0x112f75e88,&UNK_10dbe41c0);
        FUN_1035e2dac(&lStack_270,&lStack_2a0,0x112f75e88,&UNK_10dbe41c0);
      }
      func_0x000100d562f8(lVar6,uVar15,uVar10);
      uVar10 = param_1[0x1d];
      lVar6 = param_1[0x1c];
      uVar15 = param_1[0x1f];
      lVar7 = param_1[0x1e];
      lVar11 = param_1[0x20];
      uVar13 = param_2[0x1d];
      lVar17 = param_2[0x1c];
      uVar16 = param_2[0x1f];
      lVar18 = param_2[0x1e];
      lVar14 = param_2[0x20];
      lStack_2d0 = lVar17;
      uStack_2c8 = uVar13;
      lStack_2c0 = lVar18;
      uStack_2b8 = uVar16;
      lStack_2b0 = lVar14;
      lStack_2a0 = lVar6;
      uStack_298 = uVar10;
      lStack_290 = lVar7;
      uStack_288 = uVar15;
      lStack_280 = lVar11;
      if (lVar7 == 0) {
        if (lVar18 != 0) goto LAB_1035e3b20;
        FUN_1035e2dac(&lStack_2a0,&uStack_360,0x112f7cc90,&UNK_10dbe41c8);
        FUN_1035e2dac(&lStack_2d0,&uStack_360,0x112f7cc90,&UNK_10dbe41c8);
LAB_1035e3c24:
        func_0x0001034cc0ac(lVar6,uVar10,lVar7,uVar15,lVar11);
        uVar10 = param_1[0x22];
        uVar15 = param_1[0x21];
        lVar6 = param_1[0x23];
        uVar13 = param_2[0x22];
        uVar16 = param_2[0x21];
        lVar7 = param_2[0x23];
        uStack_360 = uVar15;
        uStack_358 = uVar10;
        lStack_350 = lVar6;
        uStack_2f0 = uVar16;
        uStack_2e8 = uVar13;
        lStack_2e0 = lVar7;
        if ((uVar15 & 0xff) == 2) {
          if ((uVar16 & 0xff) != 2) {
LAB_1035e3d0c:
            FUN_1035e2dac(&uStack_360,&lStack_310,0x112db94f0,&UNK_10d96af00);
            puVar3 = &uStack_2f0;
            plVar4 = &lStack_310;
            lVar14 = lVar6;
            uVar2 = uVar10;
            uVar12 = uVar15;
            lVar6 = lVar7;
            uVar10 = uVar13;
            uVar15 = uVar16;
            goto LAB_1035e344c;
          }
          FUN_1035e2dac(&uStack_360,&lStack_310,0x112db94f0,&UNK_10d96af00);
          FUN_1035e2dac(&uStack_2f0,&lStack_310,0x112db94f0,&UNK_10d96af00);
        }
        else {
          if ((uVar16 & 0xff) == 2) goto LAB_1035e3d0c;
          if ((((uint)uVar16 ^ (uint)uVar15) & 1) != 0) {
            FUN_1035e2dac(&uStack_360,&lStack_310,0x112db94f0,&UNK_10d96af00);
            puVar3 = &uStack_2f0;
            plVar4 = &lStack_310;
            goto LAB_1035e3518;
          }
          FUN_1035e2dac(&uStack_360,&lStack_310,0x112db94f0,&UNK_10d96af00);
          FUN_1035e2dac(&uStack_2f0,&lStack_310,0x112db94f0,&UNK_10d96af00);
          uVar2 = uVar10;
          func_0x000100e25fcc(uVar10,lVar6,uVar13,lVar7);
          func_0x000101556278(uVar16,uVar13,lVar7);
          if ((uVar2 & 1) == 0) goto LAB_1035e3540;
        }
        func_0x000101556278(uVar15,uVar10,lVar6);
        lVar6 = *param_1;
        lVar7 = *param_2;
        if ((char)param_2[1] == '\x01') {
          if (lVar7 < 2) {
            if (lVar7 == 0) {
              if (lVar6 == 0) {
LAB_1035e3d7c:
                uVar15 = param_1[0x25];
                lVar6 = param_1[0x24];
                uVar10 = param_1[0x26];
                uVar16 = param_2[0x25];
                lVar7 = param_2[0x24];
                uVar13 = param_2[0x26];
                lStack_330 = lVar7;
                uStack_328 = uVar16;
                uStack_320 = uVar13;
                lStack_310 = lVar6;
                uStack_308 = uVar15;
                uStack_300 = uVar10;
                if (uVar10 >> 0x3c < 0xf) {
                  if (0xe < uVar13 >> 0x3c) goto LAB_1035e3e88;
                  if (lVar6 != lVar7) {
                    uVar8 = 0x112db6f48;
                    puVar9 = &UNK_10d969b40;
                    FUN_1035e2dac(&lStack_310,alStack_378,0x112db6f48,&UNK_10d969b40);
                    plVar4 = &lStack_330;
                    plVar5 = alStack_378;
                    goto LAB_1035e3aec;
                  }
                  FUN_1035e2dac(&lStack_310,alStack_378,0x112db6f48,&UNK_10d969b40);
                  FUN_1035e2dac(&lStack_330,alStack_378,0x112db6f48,&UNK_10d969b40);
                  uVar2 = uVar15;
                  func_0x000100e25fcc(uVar15,uVar10,uVar16,uVar13);
                  func_0x000100d562f8(lVar6,uVar16,uVar13);
                  if ((uVar2 & 1) == 0) goto LAB_1035e3b14;
                }
                else {
                  if (uVar13 >> 0x3c < 0xf) {
LAB_1035e3e88:
                    uVar8 = 0x112db6f48;
                    puVar9 = &UNK_10d969b40;
                    FUN_1035e2dac(&lStack_310,alStack_378,0x112db6f48,&UNK_10d969b40);
                    plVar4 = &lStack_330;
                    plVar5 = alStack_378;
                    uVar2 = uVar10;
                    uVar12 = uVar15;
                    lVar11 = lVar6;
                    uVar10 = uVar13;
                    uVar15 = uVar16;
                    lVar6 = lVar7;
                    goto LAB_1035e39f4;
                  }
                  FUN_1035e2dac(&lStack_310,alStack_378,0x112db6f48,&UNK_10d969b40);
                  FUN_1035e2dac(&lStack_330,alStack_378,0x112db6f48,&UNK_10d969b40);
                }
                func_0x000100d562f8(lVar6,uVar15,uVar10);
                lVar6 = param_1[2];
                func_0x000100e25fcc(lVar6,param_1[3],param_2[2],param_2[3]);
                uVar1 = (uint)lVar6;
                goto LAB_1035e3548;
              }
            }
            else if (lVar6 == 1) goto LAB_1035e3d7c;
          }
          else if (lVar7 == 2) {
            if (lVar6 == 2) goto LAB_1035e3d7c;
          }
          else if (lVar7 == 3) {
            if (lVar6 == 3) goto LAB_1035e3d7c;
          }
          else if (lVar6 == 4) goto LAB_1035e3d7c;
        }
        else if (lVar6 == lVar7) goto LAB_1035e3d7c;
      }
      else {
        if (lVar18 == 0) {
LAB_1035e3b20:
          FUN_1035e2dac(&lStack_2a0,&uStack_360,0x112f7cc90,&UNK_10dbe41c8);
          FUN_1035e2dac(&lStack_2d0,&uStack_360,0x112f7cc90,&UNK_10dbe41c8);
          func_0x0001034cc0ac(lVar6,uVar10,lVar7,uVar15,lVar11);
          lVar6 = lVar17;
          uVar10 = uVar13;
          lVar7 = lVar18;
          uVar15 = uVar16;
          lVar11 = lVar14;
        }
        else if (((int)lVar6 == (int)lVar17) &&
                (((uVar10 == uVar13 && (lVar7 == lVar18)) ||
                 (uVar2 = uVar10, func_0x000107c605b8(uVar10,lVar7,uVar13,lVar18,0),
                 (uVar2 & 1) != 0)))) {
          FUN_1035e2dac(&lStack_2a0,&uStack_360,0x112f7cc90,&UNK_10dbe41c8);
          FUN_1035e2dac(&lStack_2d0,&uStack_360,0x112f7cc90,&UNK_10dbe41c8);
          uVar2 = uVar15;
          func_0x000100e25fcc(uVar15,lVar11,uVar16,lVar14);
          func_0x0001034cc0ac(lVar17,uVar13,lVar18,uVar16,lVar14);
          if ((uVar2 & 1) != 0) goto LAB_1035e3c24;
        }
        else {
          FUN_1035e2dac(&lStack_2a0,&uStack_360,0x112f7cc90,&UNK_10dbe41c8);
          FUN_1035e2dac(&lStack_2d0,&uStack_360,0x112f7cc90,&UNK_10dbe41c8);
          func_0x0001034cc0ac(lVar17,uVar13,lVar18,uVar16,lVar14);
        }
        func_0x0001034cc0ac(lVar6,uVar10,lVar7,uVar15,lVar11);
      }
    }
  }
  else {
    if ((uVar16 & 0xff) == 2) goto LAB_1035e33b8;
    if ((((uint)uVar16 ^ (uint)uVar15) & 1) == 0) {
      FUN_1035e2dac(&uStack_90,&lStack_2a0,0x112db94f0,&UNK_10d96af00);
      FUN_1035e2dac(&uStack_b0,&lStack_2a0,0x112db94f0,&UNK_10d96af00);
      uVar2 = uVar10;
      func_0x000100e25fcc(uVar10,lVar6,uVar13,lVar7);
      func_0x000101556278(uVar16,uVar13,lVar7);
      if ((uVar2 & 1) != 0) goto LAB_1035e2eec;
    }
    else {
      FUN_1035e2dac(&uStack_90,&lStack_2a0,0x112db94f0,&UNK_10d96af00);
      lVar11 = -0xa0;
LAB_1035e3514:
      puVar3 = (ulong *)(&stack0xfffffffffffffff0 + lVar11);
      plVar4 = &lStack_2a0;
LAB_1035e3518:
      FUN_1035e2dac(puVar3,plVar4,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar16,uVar13,lVar7);
    }
LAB_1035e3540:
    func_0x000101556278(uVar15,uVar10,lVar6);
  }
  uVar1 = 0;
LAB_1035e3548:
  return uVar1 & 1;
}



/* Entry: 1035e22d4; end: 1035e2303;  */

undefined1  [16] FUN_1035e22d4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 1035e2304; end: 1035e2337;  */

void FUN_1035e2304(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1035e2338; end: 1035e234b;  */

undefined1  [16] FUN_1035e2338(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x1035e2348;
  return auVar1;
}



/* Entry: 1035e234c; end: 1035e235f;  */

void FUN_1035e234c(void)

{
  FUN_1035e18d8();
  return;
}



/* Entry: 1035e2360; end: 1035e23c7;  */

void FUN_1035e2360(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_178 [312];
  
  func_0x000107c610b4(auStack_178);
  FUN_1035e1ab8(param_1,param_2,param_3);
  return;
}



/* Entry: 1035e23c8; end: 1035e23cb;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035e23c8(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035e23cc; end: 1035e2403;  */

uint FUN_1035e23cc(long param_1,long param_2)

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
  func_0x0001035e5624();
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



/* Entry: 1035e2404; end: 1035e2453;  */

uint FUN_1035e2404(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_290 [312];
  undefined1 auStack_158 [312];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_158,param_1,0x138);
  func_0x000107c610b4(auStack_290);
  FUN_1035e2e40(auStack_290,auStack_158);
  return uVar1 & 1;
}



/* Entry: 1035e2454; end: 1035e24f3;  */

/* WARNING: Possible PIC construction at 0x0001035e24a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035e24b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035e24a4) */
/* WARNING: Removing unreachable block (ram,0x0001035e24b4) */

void FUN_1035e2454(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7cd18 != -1) {
    func_0x000107c61568(0x112f7cd18,FUN_1035e1890);
  }
  uVar5 = uRam00000001138093b8;
  uVar4 = uRam00000001138093b0;
  uVar3 = uRam00000001138093a8;
  uVar2 = uRam00000001138093a0;
  uVar1 = uRam0000000113809398;
  *param_1 = uRam0000000113809390;
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



/* Entry: 1035e24f4; end: 1035e252f;  */

void FUN_1035e24f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7cdb0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7cdb0,&UNK_10dbe4538);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1035e2530; end: 1035e263b;  */

void FUN_1035e2530(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1b0 [72];
  undefined1 auStack_168 [312];
  
  func_0x000107c610b4(auStack_168);
  func_0x000107c6068c(auStack_1b0,0);
  func_0x000107c5fa50(auStack_1b0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035e263c; end: 1035e268f;  */

uint FUN_1035e263c(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_290 [312];
  undefined1 auStack_158 [312];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_290,param_1,0x138);
  func_0x000107c610b4(auStack_158,param_2,0x138);
  FUN_1035e2e40(auStack_290,auStack_158);
  return uVar1 & 1;
}



/* Entry: 1035e2690; end: 1035e26d7;  */

void FUN_1035e2690(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe4590,0x78,2);
  uRam00000001138093c8 = uStack_38;
  uRam00000001138093c0 = uStack_40;
  uRam00000001138093d8 = uStack_28;
  uRam00000001138093d0 = uStack_30;
  uRam00000001138093e8 = uStack_18;
  uRam00000001138093e0 = uStack_20;
  return;
}



/* Entry: 1035e26d8; end: 1035e2777;  */

/* WARNING: Possible PIC construction at 0x0001035e2724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035e2734: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035e2728) */
/* WARNING: Removing unreachable block (ram,0x0001035e2738) */

void FUN_1035e26d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7cd30 != -1) {
    func_0x000107c61568(0x112f7cd30,FUN_1035e2690);
  }
  uVar5 = uRam00000001138093e8;
  uVar4 = uRam00000001138093e0;
  uVar3 = uRam00000001138093d8;
  uVar2 = uRam00000001138093d0;
  uVar1 = uRam00000001138093c8;
  *param_1 = uRam00000001138093c0;
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



/* Entry: 1035e2778; end: 1035e27db;  */

void FUN_1035e2778(void)

{
  func_0x000107c5fb78(0x726f7272452e,0xe600000000000000);
  uRam00000001138093f0 = 0xd000000000000033;
  uRam00000001138093f8 = 0x800000010f156390;
  return;
}



/* Entry: 1035e27dc; end: 1035e2823;  */

void FUN_1035e27dc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe4540,0x43,2);
  uRam0000000113809408 = uStack_38;
  uRam0000000113809400 = uStack_40;
  uRam0000000113809418 = uStack_28;
  uRam0000000113809410 = uStack_30;
  uRam0000000113809428 = uStack_18;
  uRam0000000113809420 = uStack_20;
  return;
}



/* Entry: 1035e2824; end: 1035e28bb;  */

void FUN_1035e2824(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_1035e2878:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x0001035e2894;
  pcVar3 = *(code **)(param_3 + 0x48);
  goto LAB_1035e2860;
code_r0x0001035e2894:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x150);
LAB_1035e2860:
    (*pcVar3)();
  }
  goto LAB_1035e2878;
}



/* Entry: 1035e28bc; end: 1035e294f;  */

void FUN_1035e28bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  int *unaff_x20;
  long unaff_x21;
  
  if ((*unaff_x20 == 0) ||
     ((**(code **)(param_3 + 0x18))(*unaff_x20,1,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = *(ulong *)(unaff_x20 + 4);
    uVar1 = *(ulong *)(unaff_x20 + 2) & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(*(ulong *)(unaff_x20 + 2),uVar2,2,param_2,param_3),
       unaff_x21 == 0)) {
      func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 6),*(undefined8 *)(unaff_x20 + 8),
                          param_2,param_3);
    }
  }
  return;
}



/* Entry: 1035e2950; end: 1035e296b;  */

void FUN_1035e2950(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0xe000000000000000;
  *(undefined8 *)(param_1 + 8) = 0xc000000000000000;
  *(undefined8 *)(param_1 + 6) = 0;
  return;
}



/* Entry: 1035e296c; end: 1035e29c7;  */

undefined1  [16] FUN_1035e296c(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112f7cd38 != -1) {
    func_0x000107c61568(0x112f7cd38,FUN_1035e2778);
  }
  auVar1._8_8_ = uRam00000001138093f8;
  auVar1._0_8_ = uRam00000001138093f0;
  func_0x000107c61434(uRam00000001138093f8);
  return auVar1;
}



/* Entry: 1035e29c8; end: 1035e29cf;  */

undefined8 FUN_1035e29c8(void)

{
  return 1;
}



/* Entry: 1035e29d0; end: 1035e29ff;  */

undefined1  [16] FUN_1035e29d0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 1035e2a00; end: 1035e2a33;  */

void FUN_1035e2a00(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 1035e2a34; end: 1035e2a47;  */

undefined1  [16] FUN_1035e2a34(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x1035e2a44;
  return auVar1;
}



/* Entry: 1035e2a48; end: 1035e2a6f;  */

void FUN_1035e2a48(void)

{
  FUN_1035e2824();
  return;
}



/* Entry: 1035e2a70; end: 1035e2a73;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035e2a70(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035e2a74; end: 1035e2aab;  */

uint FUN_1035e2a74(long param_1,long param_2)

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
  FUN_1035e55e4();
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



/* Entry: 1035e2aac; end: 1035e2bd3;  */

/* WARNING: Possible PIC construction at 0x0001035e2af0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x0001035e2af4) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1035e2aac(int *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  byte *pbVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  byte *pbVar22;
  byte *unaff_x19;
  long lVar23;
  int *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar24;
  ulong unaff_x22;
  long lVar25;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar26;
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
  undefined1 auVar42 [16];
  
  if (*unaff_x20 != *param_1) {
    return (byte *)0x0;
  }
  lVar23 = *(long *)(param_1 + 6);
  uVar15 = *(ulong *)(param_1 + 8);
  pbVar9 = *(byte **)(unaff_x20 + 6);
  pbVar24 = *(byte **)(unaff_x20 + 8);
  pbVar11 = *(byte **)(unaff_x20 + 2);
  pbVar13 = *(byte **)(unaff_x20 + 4);
  pbVar14 = *(byte **)(param_1 + 2);
  pbVar16 = *(byte **)(param_1 + 4);
  if (*(byte **)(unaff_x20 + 2) != *(byte **)(param_1 + 2) ||
      *(byte **)(unaff_x20 + 4) != *(byte **)(param_1 + 4)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar11,pbVar13,pbVar14,pbVar16,0);
    return pbVar11;
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar24 >> 0x20);
    uVar17 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar15 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar12 = pbVar24;
    if ((ulong)pbVar24 >> 0x3e == 3) {
      uVar19 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar24 != (byte *)0xc000000000000000)) ||
          (uVar15 >> 0x3e < 3)) || ((uVar19 = 0, lVar23 != 0 || (uVar15 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar17 == 0) {
        uVar19 = (ulong)pbVar24 >> 0x30 & 0xff;
      }
      else {
        iVar18 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar18,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar19 = (ulong)(iVar18 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar21 = uVar15 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar18 = (int)((ulong)lVar23 >> 0x20);
      if (SBORROW4(iVar18,(int)lVar23)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar19 == (long)(iVar18 - (int)lVar23)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar17 == 2) {
        uVar19 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar19 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar21 = *(long *)(lVar23 + 0x18) - *(long *)(lVar23 + 0x10);
        if (SBORROW8(*(long *)(lVar23 + 0x18),*(long *)(lVar23 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar19 != uVar21) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar19 < 1) goto code_r0x000100e26128;
        if (uVar17 < 2) {
          if (uVar17 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar24;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar24 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar24 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar24 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar24 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar24 >> 0x28);
            pbVar12 = (byte *)((long)register0x00000008 + (((ulong)pbVar24 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar24;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar12 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar12)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar12);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar12) {
                pbVar12 = unaff_x23;
              }
              pbVar12 = pbVar12 + (long)pbVar9;
              goto code_r0x000100e262a4;
            }
          }
          pbVar12 = (byte *)0x0;
        }
        else {
          if (uVar17 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar12 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar25 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar12 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar25,(long)pbVar12)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar25 - (long)pbVar12);
          }
          unaff_x23 = unaff_x24 + -lVar25;
          if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar24;
          if (pbVar9 == (byte *)0x0) {
            pbVar12 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar12) {
              pbVar12 = unaff_x23;
            }
            pbVar12 = pbVar12 + (long)pbVar9;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (int *)((ulong)pbVar24 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,lVar23,
                            uVar15);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar15;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar19 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(int **)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar22 = *(byte **)(pbVar8 + 0x18);
    bVar26 = pbVar8[0x28];
    pbVar24 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar13 = pbVar9;
    if (bVar26 < 3) {
      if (bVar26 == 0) {
        if (pbVar12[0x28] == 0) {
          lVar23 = *(long *)pbVar12;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar23,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar26 == 1) {
        if (pbVar12[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar12 + 8);
        pbVar16 = *(byte **)(pbVar12 + 0x10);
        lVar23 = *(long *)pbVar12;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar23,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar13 = pbVar24;
        if ((pbVar9 == pbVar14) && (pbVar24 == pbVar16)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar12[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar16 = *(byte **)(pbVar12 + 8);
        lVar23 = *(long *)(pbVar12 + 0x18);
        if ((pbVar11 == pbVar14) && (pbVar9 == pbVar16)) {
          if (((pbVar8[0x10] ^ pbVar12[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar22 != (byte *)0x0) {
            if (lVar23 == 0) {
              return (byte *)0x0;
            }
            func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar23);
            func_0x000107c61174();
            pbVar9 = pbVar22;
            func_0x000107c60118();
            func_0x000107c61170(pbVar22);
            func_0x000107c61170(lVar23);
            pbVar22 = pbVar9;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar23 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar25 = *(long *)(pbVar8 + 0x20);
    if (bVar26 < 5) {
      if (bVar26 != 3) {
        if (pbVar12[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar16 = *(byte **)(pbVar12 + 8);
        if (((pbVar11 == pbVar14) && (pbVar9 == pbVar16)) &&
           (pbVar11 = pbVar24, pbVar13 = pbVar22, pbVar14 = *(byte **)(pbVar12 + 0x10),
           pbVar16 = *(byte **)(pbVar12 + 0x18),
           pbVar24 == *(byte **)(pbVar12 + 0x10) && pbVar22 == *(byte **)(pbVar12 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar12[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar12 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar16 = *(byte **)(pbVar12 + 0x10);
      lVar23 = *(long *)(pbVar12 + 0x20);
      if (pbVar24 == (byte *)0x0) {
        if (pbVar16 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar16 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar12 + 8);
        pbVar11 = pbVar9;
        pbVar13 = pbVar24;
        if ((pbVar9 != pbVar14) || (pbVar24 != pbVar16)) goto code_r0x000107c605b8;
      }
      if (lVar25 != 0) {
        if (lVar23 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar22 == *(byte **)(pbVar12 + 0x18)) && (lVar25 == lVar23)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar22,lVar25,*(byte **)(pbVar12 + 0x18),lVar23,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar22 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar26 != 5) {
      if ((((pbVar22 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar25 == 0) && pbVar24 == (byte *)0x0) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar25 = *(long *)(pbVar12 + 0x20);
        lVar23 = *(long *)(pbVar12 + 0x18);
        bVar26 = pbVar12[8] | (byte)lVar23;
        bVar27 = pbVar12[9] | (byte)((ulong)lVar23 >> 8);
        bVar28 = pbVar12[10] | (byte)((ulong)lVar23 >> 0x10);
        bVar29 = pbVar12[0xb] | (byte)((ulong)lVar23 >> 0x18);
        bVar30 = pbVar12[0xc] | (byte)((ulong)lVar23 >> 0x20);
        bVar31 = pbVar12[0xd] | (byte)((ulong)lVar23 >> 0x28);
        bVar32 = pbVar12[0xe] | (byte)((ulong)lVar23 >> 0x30);
        bVar33 = pbVar12[0xf] | (byte)((ulong)lVar23 >> 0x38);
        bVar34 = pbVar12[0x10] | (byte)lVar25;
        bVar35 = pbVar12[0x11] | (byte)((ulong)lVar25 >> 8);
        bVar36 = pbVar12[0x12] | (byte)((ulong)lVar25 >> 0x10);
        bVar37 = pbVar12[0x13] | (byte)((ulong)lVar25 >> 0x18);
        bVar38 = pbVar12[0x14] | (byte)((ulong)lVar25 >> 0x20);
        bVar39 = pbVar12[0x15] | (byte)((ulong)lVar25 >> 0x28);
        bVar40 = pbVar12[0x16] | (byte)((ulong)lVar25 >> 0x30);
        bVar41 = pbVar12[0x17] | (byte)((ulong)lVar25 >> 0x38);
        auVar42[1] = bVar27;
        auVar42[0] = bVar26;
        auVar42[2] = bVar28;
        auVar42[3] = bVar29;
        auVar42[4] = bVar30;
        auVar42[5] = bVar31;
        auVar42[6] = bVar32;
        auVar42[7] = bVar33;
        auVar42[8] = bVar34;
        auVar42[9] = bVar35;
        auVar42[10] = bVar36;
        auVar42[0xb] = bVar37;
        auVar42[0xc] = bVar38;
        auVar42[0xd] = bVar39;
        auVar42[0xe] = bVar40;
        auVar42[0xf] = bVar41;
        auVar3[1] = bVar27;
        auVar3[0] = bVar26;
        auVar3[2] = bVar28;
        auVar3[3] = bVar29;
        auVar3[4] = bVar30;
        auVar3[5] = bVar31;
        auVar3[6] = bVar32;
        auVar3[7] = bVar33;
        auVar3[8] = bVar34;
        auVar3[9] = bVar35;
        auVar3[10] = bVar36;
        auVar3[0xb] = bVar37;
        auVar3[0xc] = bVar38;
        auVar3[0xd] = bVar39;
        auVar3[0xe] = bVar40;
        auVar3[0xf] = bVar41;
        auVar42 = NEON_ext(auVar42,auVar3,8,1);
        if (CONCAT17(bVar33 | auVar42[7],
                     CONCAT16(bVar32 | auVar42[6],
                              CONCAT15(bVar31 | auVar42[5],
                                       CONCAT14(bVar30 | auVar42[4],
                                                CONCAT13(bVar29 | auVar42[3],
                                                         CONCAT12(bVar28 | auVar42[2],
                                                                  CONCAT11(bVar27 | auVar42[1],
                                                                           bVar26 | auVar42[0]))))))
                    ) == 0 && *(long *)pbVar12 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar22 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar24 == (byte *)0x0) &&
          lVar25 == 0)) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar12 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar12 != 2) {
          return (byte *)0x0;
        }
      }
      lVar25 = *(long *)(pbVar12 + 0x20);
      lVar23 = *(long *)(pbVar12 + 0x18);
      bVar26 = pbVar12[8] | (byte)lVar23;
      bVar27 = pbVar12[9] | (byte)((ulong)lVar23 >> 8);
      bVar28 = pbVar12[10] | (byte)((ulong)lVar23 >> 0x10);
      bVar29 = pbVar12[0xb] | (byte)((ulong)lVar23 >> 0x18);
      bVar30 = pbVar12[0xc] | (byte)((ulong)lVar23 >> 0x20);
      bVar31 = pbVar12[0xd] | (byte)((ulong)lVar23 >> 0x28);
      bVar32 = pbVar12[0xe] | (byte)((ulong)lVar23 >> 0x30);
      bVar33 = pbVar12[0xf] | (byte)((ulong)lVar23 >> 0x38);
      bVar34 = pbVar12[0x10] | (byte)lVar25;
      bVar35 = pbVar12[0x11] | (byte)((ulong)lVar25 >> 8);
      bVar36 = pbVar12[0x12] | (byte)((ulong)lVar25 >> 0x10);
      bVar37 = pbVar12[0x13] | (byte)((ulong)lVar25 >> 0x18);
      bVar38 = pbVar12[0x14] | (byte)((ulong)lVar25 >> 0x20);
      bVar39 = pbVar12[0x15] | (byte)((ulong)lVar25 >> 0x28);
      bVar40 = pbVar12[0x16] | (byte)((ulong)lVar25 >> 0x30);
      bVar41 = pbVar12[0x17] | (byte)((ulong)lVar25 >> 0x38);
      auVar1[1] = bVar27;
      auVar1[0] = bVar26;
      auVar1[2] = bVar28;
      auVar1[3] = bVar29;
      auVar1[4] = bVar30;
      auVar1[5] = bVar31;
      auVar1[6] = bVar32;
      auVar1[7] = bVar33;
      auVar1[8] = bVar34;
      auVar1[9] = bVar35;
      auVar1[10] = bVar36;
      auVar1[0xb] = bVar37;
      auVar1[0xc] = bVar38;
      auVar1[0xd] = bVar39;
      auVar1[0xe] = bVar40;
      auVar1[0xf] = bVar41;
      auVar2[1] = bVar27;
      auVar2[0] = bVar26;
      auVar2[2] = bVar28;
      auVar2[3] = bVar29;
      auVar2[4] = bVar30;
      auVar2[5] = bVar31;
      auVar2[6] = bVar32;
      auVar2[7] = bVar33;
      auVar2[8] = bVar34;
      auVar2[9] = bVar35;
      auVar2[10] = bVar36;
      auVar2[0xb] = bVar37;
      auVar2[0xc] = bVar38;
      auVar2[0xd] = bVar39;
      auVar2[0xe] = bVar40;
      auVar2[0xf] = bVar41;
      auVar42 = NEON_ext(auVar1,auVar2,8,1);
      lVar23 = CONCAT17(bVar33 | auVar42[7],
                        CONCAT16(bVar32 | auVar42[6],
                                 CONCAT15(bVar31 | auVar42[5],
                                          CONCAT14(bVar30 | auVar42[4],
                                                   CONCAT13(bVar29 | auVar42[3],
                                                            CONCAT12(bVar28 | auVar42[2],
                                                                     CONCAT11(bVar27 | auVar42[1],
                                                                              bVar26 | auVar42[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar12[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar23 = *(long *)(pbVar12 + 8);
    uVar15 = *(ulong *)(pbVar12 + 0x10);
    lVar25 = *(long *)pbVar12;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar25,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(int **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 1035e2bd4; end: 1035e2c0f;  */

void FUN_1035e2bd4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7cda0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7cda0,&UNK_10dbe4530);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1035e2c10; end: 1035e2dab;  */

void FUN_1035e2c10(undefined8 param_1,undefined8 param_2)

{
  undefined4 *unaff_x20;
  undefined1 auStack_a0 [72];
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = *unaff_x20;
  uStack_50 = *(undefined8 *)(unaff_x20 + 2);
  uStack_48 = *(undefined8 *)(unaff_x20 + 4);
  uStack_38 = *(undefined8 *)(unaff_x20 + 8);
  uStack_40 = *(undefined8 *)(unaff_x20 + 6);
  func_0x000107c6068c(auStack_a0,0);
  func_0x000107c5fa50(auStack_a0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035e2dac; end: 1035e2df3;  */

undefined8 FUN_1035e2dac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1035e2df4; end: 1035e2dff;  */

void FUN_1035e2df4(void)

{
  return;
}



/* Entry: 1035e2e00; end: 1035e2e3f;  */

void FUN_1035e2e00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7cd20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe41d8;
  func_0x000107c61520(&DAT_10dbe41d8,&UNK_11066b080);
  puRam0000000112f7cd20 = puVar1;
  return;
}



/* Entry: 1035e2e40; end: 1035e3f87;  */

uint FUN_1035e2e40(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long alStack_378 [3];
  ulong uStack_360;
  ulong uStack_358;
  long lStack_350;
  long lStack_330;
  ulong uStack_328;
  ulong uStack_320;
  long lStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f0;
  ulong uStack_2e8;
  long lStack_2e0;
  long lStack_2d0;
  ulong uStack_2c8;
  long lStack_2c0;
  ulong uStack_2b8;
  long lStack_2b0;
  long lStack_2a0;
  ulong uStack_298;
  long lStack_290;
  ulong uStack_288;
  long lStack_280;
  long lStack_270;
  ulong uStack_268;
  ulong uStack_260;
  long lStack_250;
  ulong uStack_248;
  ulong uStack_240;
  long lStack_230;
  ulong uStack_228;
  ulong uStack_220;
  long lStack_210;
  ulong uStack_208;
  ulong uStack_200;
  long lStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  long lStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  long lStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  long lStack_190;
  ulong uStack_188;
  ulong uStack_180;
  long lStack_170;
  ulong uStack_168;
  ulong uStack_160;
  long lStack_150;
  ulong uStack_148;
  ulong uStack_140;
  long lStack_130;
  ulong uStack_128;
  ulong uStack_120;
  long lStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  ulong uStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  ulong uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  
  uVar10 = param_1[5];
  uVar15 = param_1[4];
  lVar6 = param_1[6];
  uVar13 = param_2[5];
  uVar16 = param_2[4];
  lVar7 = param_2[6];
  uStack_b0 = uVar16;
  uStack_a8 = uVar13;
  lStack_a0 = lVar7;
  uStack_90 = uVar15;
  uStack_88 = uVar10;
  lStack_80 = lVar6;
  if ((uVar15 & 0xff) == 2) {
    if ((uVar16 & 0xff) != 2) {
LAB_1035e33b8:
      FUN_1035e2dac(&uStack_90,&lStack_2a0,0x112db94f0,&UNK_10d96af00);
      lVar11 = -0xa0;
      lVar14 = lVar6;
      uVar2 = uVar10;
      uVar12 = uVar15;
      lVar6 = lVar7;
      uVar10 = uVar13;
      uVar15 = uVar16;
LAB_1035e3448:
      puVar3 = (ulong *)(&stack0xfffffffffffffff0 + lVar11);
      plVar4 = &lStack_2a0;
LAB_1035e344c:
      FUN_1035e2dac(puVar3,plVar4,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar12,uVar2,lVar14);
      goto LAB_1035e3540;
    }
    FUN_1035e2dac(&uStack_90,&lStack_2a0,0x112db94f0,&UNK_10d96af00);
    FUN_1035e2dac(&uStack_b0,&lStack_2a0,0x112db94f0,&UNK_10d96af00);
LAB_1035e2eec:
    func_0x000101556278(uVar15,uVar10,lVar6);
    uVar10 = param_1[8];
    uVar15 = param_1[7];
    lVar6 = param_1[9];
    uVar13 = param_2[8];
    uVar16 = param_2[7];
    lVar7 = param_2[9];
    uStack_f0 = uVar16;
    uStack_e8 = uVar13;
    lStack_e0 = lVar7;
    uStack_d0 = uVar15;
    uStack_c8 = uVar10;
    lStack_c0 = lVar6;
    if ((uVar15 & 0xff) == 2) {
      if ((uVar16 & 0xff) != 2) {
LAB_1035e3420:
        FUN_1035e2dac(&uStack_d0,&lStack_2a0,0x112db94f0,&UNK_10d96af00);
        lVar11 = -0xe0;
        lVar14 = lVar6;
        uVar2 = uVar10;
        uVar12 = uVar15;
        lVar6 = lVar7;
        uVar10 = uVar13;
        uVar15 = uVar16;
        goto LAB_1035e3448;
      }
      FUN_1035e2dac(&uStack_d0,&lStack_2a0,0x112db94f0,&UNK_10d96af00);
      FUN_1035e2dac(&uStack_f0,&lStack_2a0,0x112db94f0,&UNK_10d96af00);
    }
    else {
      if ((uVar16 & 0xff) == 2) goto LAB_1035e3420;
      if ((((uint)uVar16 ^ (uint)uVar15) & 1) != 0) {
        FUN_1035e2dac(&uStack_d0,&lStack_2a0,0x112db94f0,&UNK_10d96af00);
        lVar11 = -0xe0;
        goto LAB_1035e3514;
      }
      FUN_1035e2dac(&uStack_d0,&lStack_2a0,0x112db94f0,&UNK_10d96af00);
      FUN_1035e2dac(&uStack_f0,&lStack_2a0,0x112db94f0,&UNK_10d96af00);
      uVar2 = uVar10;
      func_0x000100e25fcc(uVar10,lVar6,uVar13,lVar7);
      func_0x000101556278(uVar16,uVar13,lVar7);
      if ((uVar2 & 1) == 0) goto LAB_1035e3540;
    }
    func_0x000101556278(uVar15,uVar10,lVar6);
    uVar15 = param_1[0xb];
    lVar6 = param_1[10];
    uVar10 = param_1[0xc];
    uVar16 = param_2[0xb];
    lVar7 = param_2[10];
    uVar13 = param_2[0xc];
    lStack_130 = lVar7;
    uStack_128 = uVar16;
    uStack_120 = uVar13;
    lStack_110 = lVar6;
    uStack_108 = uVar15;
    uStack_100 = uVar10;
    if (uVar10 >> 0x3c < 0xf) {
      if (0xe < uVar13 >> 0x3c) goto LAB_1035e3574;
      if (lVar6 == lVar7) {
        FUN_1035e2dac(&lStack_110,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
        FUN_1035e2dac(&lStack_130,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
        uVar2 = uVar15;
        func_0x000100e25fcc(uVar15,uVar10,uVar16,uVar13);
        func_0x000100d562f8(lVar6,uVar16,uVar13);
        if ((uVar2 & 1) != 0) goto LAB_1035e3000;
      }
      else {
        uVar8 = 0x112db6f48;
        puVar9 = &UNK_10d969b40;
        FUN_1035e2dac(&lStack_110,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
        plVar4 = &lStack_130;
LAB_1035e3ae8:
        plVar5 = &lStack_2a0;
LAB_1035e3aec:
        FUN_1035e2dac(plVar4,plVar5,uVar8,puVar9);
        func_0x000100d562f8(lVar7,uVar16,uVar13);
      }
LAB_1035e3b14:
      func_0x000100d562f8(lVar6,uVar15,uVar10);
    }
    else {
      if (uVar13 >> 0x3c < 0xf) {
LAB_1035e3574:
        uVar8 = 0x112db6f48;
        puVar9 = &UNK_10d969b40;
        FUN_1035e2dac(&lStack_110,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
        plVar4 = &lStack_130;
        uVar2 = uVar10;
        uVar12 = uVar15;
        lVar11 = lVar6;
        uVar10 = uVar13;
        uVar15 = uVar16;
        lVar6 = lVar7;
LAB_1035e39f0:
        plVar5 = &lStack_2a0;
LAB_1035e39f4:
        FUN_1035e2dac(plVar4,plVar5,uVar8,puVar9);
        func_0x000100d562f8(lVar11,uVar12,uVar2);
        goto LAB_1035e3b14;
      }
      FUN_1035e2dac(&lStack_110,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
      FUN_1035e2dac(&lStack_130,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
LAB_1035e3000:
      func_0x000100d562f8(lVar6,uVar15,uVar10);
      uVar15 = param_1[0xe];
      lVar6 = param_1[0xd];
      uVar10 = param_1[0xf];
      uVar16 = param_2[0xe];
      lVar7 = param_2[0xd];
      uVar13 = param_2[0xf];
      lStack_170 = lVar7;
      uStack_168 = uVar16;
      uStack_160 = uVar13;
      lStack_150 = lVar6;
      uStack_148 = uVar15;
      uStack_140 = uVar10;
      if (uVar10 >> 0x3c < 0xf) {
        if (0xe < uVar13 >> 0x3c) goto LAB_1035e3684;
        if (lVar6 != lVar7) {
          uVar8 = 0x112db6f48;
          puVar9 = &UNK_10d969b40;
          FUN_1035e2dac(&lStack_150,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
          plVar4 = &lStack_170;
          goto LAB_1035e3ae8;
        }
        FUN_1035e2dac(&lStack_150,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
        FUN_1035e2dac(&lStack_170,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
        uVar2 = uVar15;
        func_0x000100e25fcc(uVar15,uVar10,uVar16,uVar13);
        func_0x000100d562f8(lVar6,uVar16,uVar13);
        if ((uVar2 & 1) == 0) goto LAB_1035e3b14;
      }
      else {
        if (uVar13 >> 0x3c < 0xf) {
LAB_1035e3684:
          uVar8 = 0x112db6f48;
          puVar9 = &UNK_10d969b40;
          FUN_1035e2dac(&lStack_150,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
          plVar4 = &lStack_170;
          uVar2 = uVar10;
          uVar12 = uVar15;
          lVar11 = lVar6;
          uVar10 = uVar13;
          uVar15 = uVar16;
          lVar6 = lVar7;
          goto LAB_1035e39f0;
        }
        FUN_1035e2dac(&lStack_150,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
        FUN_1035e2dac(&lStack_170,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
      }
      func_0x000100d562f8(lVar6,uVar15,uVar10);
      uVar15 = param_1[0x11];
      lVar6 = param_1[0x10];
      uVar10 = param_1[0x12];
      uVar16 = param_2[0x11];
      lVar7 = param_2[0x10];
      uVar13 = param_2[0x12];
      lStack_1b0 = lVar7;
      uStack_1a8 = uVar16;
      uStack_1a0 = uVar13;
      lStack_190 = lVar6;
      uStack_188 = uVar15;
      uStack_180 = uVar10;
      if (uVar10 >> 0x3c < 0xf) {
        if (0xe < uVar13 >> 0x3c) goto LAB_1035e3754;
        if (lVar6 != lVar7) {
          uVar8 = 0x112db6f48;
          puVar9 = &UNK_10d969b40;
          FUN_1035e2dac(&lStack_190,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
          plVar4 = &lStack_1b0;
          goto LAB_1035e3ae8;
        }
        FUN_1035e2dac(&lStack_190,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
        FUN_1035e2dac(&lStack_1b0,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
        uVar2 = uVar15;
        func_0x000100e25fcc(uVar15,uVar10,uVar16,uVar13);
        func_0x000100d562f8(lVar6,uVar16,uVar13);
        if ((uVar2 & 1) == 0) goto LAB_1035e3b14;
      }
      else {
        if (uVar13 >> 0x3c < 0xf) {
LAB_1035e3754:
          uVar8 = 0x112db6f48;
          puVar9 = &UNK_10d969b40;
          FUN_1035e2dac(&lStack_190,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
          plVar4 = &lStack_1b0;
          uVar2 = uVar10;
          uVar12 = uVar15;
          lVar11 = lVar6;
          uVar10 = uVar13;
          uVar15 = uVar16;
          lVar6 = lVar7;
          goto LAB_1035e39f0;
        }
        FUN_1035e2dac(&lStack_190,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
        FUN_1035e2dac(&lStack_1b0,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
      }
      func_0x000100d562f8(lVar6,uVar15,uVar10);
      uVar15 = param_1[0x14];
      lVar6 = param_1[0x13];
      uVar10 = param_1[0x15];
      uVar16 = param_2[0x14];
      lVar7 = param_2[0x13];
      uVar13 = param_2[0x15];
      lStack_1f0 = lVar7;
      uStack_1e8 = uVar16;
      uStack_1e0 = uVar13;
      lStack_1d0 = lVar6;
      uStack_1c8 = uVar15;
      uStack_1c0 = uVar10;
      if (uVar10 >> 0x3c < 0xf) {
        if (0xe < uVar13 >> 0x3c) goto LAB_1035e3824;
        if (lVar6 != lVar7) {
          uVar8 = 0x112db6f48;
          puVar9 = &UNK_10d969b40;
          FUN_1035e2dac(&lStack_1d0,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
          plVar4 = &lStack_1f0;
          goto LAB_1035e3ae8;
        }
        FUN_1035e2dac(&lStack_1d0,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
        FUN_1035e2dac(&lStack_1f0,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
        uVar2 = uVar15;
        func_0x000100e25fcc(uVar15,uVar10,uVar16,uVar13);
        func_0x000100d562f8(lVar6,uVar16,uVar13);
        if ((uVar2 & 1) == 0) goto LAB_1035e3b14;
      }
      else {
        if (uVar13 >> 0x3c < 0xf) {
LAB_1035e3824:
          uVar8 = 0x112db6f48;
          puVar9 = &UNK_10d969b40;
          FUN_1035e2dac(&lStack_1d0,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
          plVar4 = &lStack_1f0;
          uVar2 = uVar10;
          uVar12 = uVar15;
          lVar11 = lVar6;
          uVar10 = uVar13;
          uVar15 = uVar16;
          lVar6 = lVar7;
          goto LAB_1035e39f0;
        }
        FUN_1035e2dac(&lStack_1d0,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
        FUN_1035e2dac(&lStack_1f0,&lStack_2a0,0x112db6f48,&UNK_10d969b40);
      }
      func_0x000100d562f8(lVar6,uVar15,uVar10);
      uVar15 = param_1[0x17];
      lVar6 = param_1[0x16];
      uVar10 = param_1[0x18];
      uVar16 = param_2[0x17];
      lVar7 = param_2[0x16];
      uVar13 = param_2[0x18];
      lStack_230 = lVar7;
      uStack_228 = uVar16;
      uStack_220 = uVar13;
      lStack_210 = lVar6;
      uStack_208 = uVar15;
      uStack_200 = uVar10;
      if (uVar10 >> 0x3c < 0xf) {
        if (0xe < uVar13 >> 0x3c) goto LAB_1035e38f4;
        if ((int)lVar6 != (int)lVar7) {
          uVar8 = 0x112f75e88;
          puVar9 = &UNK_10dbe41c0;
          FUN_1035e2dac(&lStack_210,&lStack_2a0,0x112f75e88,&UNK_10dbe41c0);
          plVar4 = &lStack_230;
          goto LAB_1035e3ae8;
        }
        FUN_1035e2dac(&lStack_210,&lStack_2a0,0x112f75e88,&UNK_10dbe41c0);
        FUN_1035e2dac(&lStack_230,&lStack_2a0,0x112f75e88,&UNK_10dbe41c0);
        uVar2 = uVar15;
        func_0x000100e25fcc(uVar15,uVar10,uVar16,uVar13);
        func_0x000100d562f8(lVar7,uVar16,uVar13);
        if ((uVar2 & 1) == 0) goto LAB_1035e3b14;
      }
      else {
        if (uVar13 >> 0x3c < 0xf) {
LAB_1035e38f4:
          uVar8 = 0x112f75e88;
          puVar9 = &UNK_10dbe41c0;
          FUN_1035e2dac(&lStack_210,&lStack_2a0,0x112f75e88,&UNK_10dbe41c0);
          plVar4 = &lStack_230;
          uVar2 = uVar10;
          uVar12 = uVar15;
          lVar11 = lVar6;
          uVar10 = uVar13;
          uVar15 = uVar16;
          lVar6 = lVar7;
          goto LAB_1035e39f0;
        }
        FUN_1035e2dac(&lStack_210,&lStack_2a0,0x112f75e88,&UNK_10dbe41c0);
        FUN_1035e2dac(&lStack_230,&lStack_2a0,0x112f75e88,&UNK_10dbe41c0);
      }
      func_0x000100d562f8(lVar6,uVar15,uVar10);
      uVar15 = param_1[0x1a];
      lVar6 = param_1[0x19];
      uVar10 = param_1[0x1b];
      uVar16 = param_2[0x1a];
      lVar7 = param_2[0x19];
      uVar13 = param_2[0x1b];
      lStack_270 = lVar7;
      uStack_268 = uVar16;
      uStack_260 = uVar13;
      lStack_250 = lVar6;
      uStack_248 = uVar15;
      uStack_240 = uVar10;
      if (uVar10 >> 0x3c < 0xf) {
        if (0xe < uVar13 >> 0x3c) goto LAB_1035e39c8;
        if ((int)lVar6 != (int)lVar7) {
          uVar8 = 0x112f75e88;
          puVar9 = &UNK_10dbe41c0;
          FUN_1035e2dac(&lStack_250,&lStack_2a0,0x112f75e88,&UNK_10dbe41c0);
          plVar4 = &lStack_270;
          goto LAB_1035e3ae8;
        }
        FUN_1035e2dac(&lStack_250,&lStack_2a0,0x112f75e88,&UNK_10dbe41c0);
        FUN_1035e2dac(&lStack_270,&lStack_2a0,0x112f75e88,&UNK_10dbe41c0);
        uVar2 = uVar15;
        func_0x000100e25fcc(uVar15,uVar10,uVar16,uVar13);
        func_0x000100d562f8(lVar7,uVar16,uVar13);
        if ((uVar2 & 1) == 0) goto LAB_1035e3b14;
      }
      else {
        if (uVar13 >> 0x3c < 0xf) {
LAB_1035e39c8:
          uVar8 = 0x112f75e88;
          puVar9 = &UNK_10dbe41c0;
          FUN_1035e2dac(&lStack_250,&lStack_2a0,0x112f75e88,&UNK_10dbe41c0);
          plVar4 = &lStack_270;
          uVar2 = uVar10;
          uVar12 = uVar15;
          lVar11 = lVar6;
          uVar10 = uVar13;
          uVar15 = uVar16;
          lVar6 = lVar7;
          goto LAB_1035e39f0;
        }
        FUN_1035e2dac(&lStack_250,&lStack_2a0,0x112f75e88,&UNK_10dbe41c0);
        FUN_1035e2dac(&lStack_270,&lStack_2a0,0x112f75e88,&UNK_10dbe41c0);
      }
      func_0x000100d562f8(lVar6,uVar15,uVar10);
      uVar10 = param_1[0x1d];
      lVar6 = param_1[0x1c];
      uVar15 = param_1[0x1f];
      lVar7 = param_1[0x1e];
      lVar11 = param_1[0x20];
      uVar13 = param_2[0x1d];
      lVar17 = param_2[0x1c];
      uVar16 = param_2[0x1f];
      lVar18 = param_2[0x1e];
      lVar14 = param_2[0x20];
      lStack_2d0 = lVar17;
      uStack_2c8 = uVar13;
      lStack_2c0 = lVar18;
      uStack_2b8 = uVar16;
      lStack_2b0 = lVar14;
      lStack_2a0 = lVar6;
      uStack_298 = uVar10;
      lStack_290 = lVar7;
      uStack_288 = uVar15;
      lStack_280 = lVar11;
      if (lVar7 == 0) {
        if (lVar18 != 0) goto LAB_1035e3b20;
        FUN_1035e2dac(&lStack_2a0,&uStack_360,0x112f7cc90,&UNK_10dbe41c8);
        FUN_1035e2dac(&lStack_2d0,&uStack_360,0x112f7cc90,&UNK_10dbe41c8);
LAB_1035e3c24:
        func_0x0001034cc0ac(lVar6,uVar10,lVar7,uVar15,lVar11);
        uVar10 = param_1[0x22];
        uVar15 = param_1[0x21];
        lVar6 = param_1[0x23];
        uVar13 = param_2[0x22];
        uVar16 = param_2[0x21];
        lVar7 = param_2[0x23];
        uStack_360 = uVar15;
        uStack_358 = uVar10;
        lStack_350 = lVar6;
        uStack_2f0 = uVar16;
        uStack_2e8 = uVar13;
        lStack_2e0 = lVar7;
        if ((uVar15 & 0xff) == 2) {
          if ((uVar16 & 0xff) != 2) {
LAB_1035e3d0c:
            FUN_1035e2dac(&uStack_360,&lStack_310,0x112db94f0,&UNK_10d96af00);
            puVar3 = &uStack_2f0;
            plVar4 = &lStack_310;
            lVar14 = lVar6;
            uVar2 = uVar10;
            uVar12 = uVar15;
            lVar6 = lVar7;
            uVar10 = uVar13;
            uVar15 = uVar16;
            goto LAB_1035e344c;
          }
          FUN_1035e2dac(&uStack_360,&lStack_310,0x112db94f0,&UNK_10d96af00);
          FUN_1035e2dac(&uStack_2f0,&lStack_310,0x112db94f0,&UNK_10d96af00);
        }
        else {
          if ((uVar16 & 0xff) == 2) goto LAB_1035e3d0c;
          if ((((uint)uVar16 ^ (uint)uVar15) & 1) != 0) {
            FUN_1035e2dac(&uStack_360,&lStack_310,0x112db94f0,&UNK_10d96af00);
            puVar3 = &uStack_2f0;
            plVar4 = &lStack_310;
            goto LAB_1035e3518;
          }
          FUN_1035e2dac(&uStack_360,&lStack_310,0x112db94f0,&UNK_10d96af00);
          FUN_1035e2dac(&uStack_2f0,&lStack_310,0x112db94f0,&UNK_10d96af00);
          uVar2 = uVar10;
          func_0x000100e25fcc(uVar10,lVar6,uVar13,lVar7);
          func_0x000101556278(uVar16,uVar13,lVar7);
          if ((uVar2 & 1) == 0) goto LAB_1035e3540;
        }
        func_0x000101556278(uVar15,uVar10,lVar6);
        lVar6 = *param_1;
        lVar7 = *param_2;
        if ((char)param_2[1] == '\x01') {
          if (lVar7 < 2) {
            if (lVar7 == 0) {
              if (lVar6 == 0) {
LAB_1035e3d7c:
                uVar15 = param_1[0x25];
                lVar6 = param_1[0x24];
                uVar10 = param_1[0x26];
                uVar16 = param_2[0x25];
                lVar7 = param_2[0x24];
                uVar13 = param_2[0x26];
                lStack_330 = lVar7;
                uStack_328 = uVar16;
                uStack_320 = uVar13;
                lStack_310 = lVar6;
                uStack_308 = uVar15;
                uStack_300 = uVar10;
                if (uVar10 >> 0x3c < 0xf) {
                  if (0xe < uVar13 >> 0x3c) goto LAB_1035e3e88;
                  if (lVar6 != lVar7) {
                    uVar8 = 0x112db6f48;
                    puVar9 = &UNK_10d969b40;
                    FUN_1035e2dac(&lStack_310,alStack_378,0x112db6f48,&UNK_10d969b40);
                    plVar4 = &lStack_330;
                    plVar5 = alStack_378;
                    goto LAB_1035e3aec;
                  }
                  FUN_1035e2dac(&lStack_310,alStack_378,0x112db6f48,&UNK_10d969b40);
                  FUN_1035e2dac(&lStack_330,alStack_378,0x112db6f48,&UNK_10d969b40);
                  uVar2 = uVar15;
                  func_0x000100e25fcc(uVar15,uVar10,uVar16,uVar13);
                  func_0x000100d562f8(lVar6,uVar16,uVar13);
                  if ((uVar2 & 1) == 0) goto LAB_1035e3b14;
                }
                else {
                  if (uVar13 >> 0x3c < 0xf) {
LAB_1035e3e88:
                    uVar8 = 0x112db6f48;
                    puVar9 = &UNK_10d969b40;
                    FUN_1035e2dac(&lStack_310,alStack_378,0x112db6f48,&UNK_10d969b40);
                    plVar4 = &lStack_330;
                    plVar5 = alStack_378;
                    uVar2 = uVar10;
                    uVar12 = uVar15;
                    lVar11 = lVar6;
                    uVar10 = uVar13;
                    uVar15 = uVar16;
                    lVar6 = lVar7;
                    goto LAB_1035e39f4;
                  }
                  FUN_1035e2dac(&lStack_310,alStack_378,0x112db6f48,&UNK_10d969b40);
                  FUN_1035e2dac(&lStack_330,alStack_378,0x112db6f48,&UNK_10d969b40);
                }
                func_0x000100d562f8(lVar6,uVar15,uVar10);
                lVar6 = param_1[2];
                func_0x000100e25fcc(lVar6,param_1[3],param_2[2],param_2[3]);
                uVar1 = (uint)lVar6;
                goto LAB_1035e3548;
              }
            }
            else if (lVar6 == 1) goto LAB_1035e3d7c;
          }
          else if (lVar7 == 2) {
            if (lVar6 == 2) goto LAB_1035e3d7c;
          }
          else if (lVar7 == 3) {
            if (lVar6 == 3) goto LAB_1035e3d7c;
          }
          else if (lVar6 == 4) goto LAB_1035e3d7c;
        }
        else if (lVar6 == lVar7) goto LAB_1035e3d7c;
      }
      else {
        if (lVar18 == 0) {
LAB_1035e3b20:
          FUN_1035e2dac(&lStack_2a0,&uStack_360,0x112f7cc90,&UNK_10dbe41c8);
          FUN_1035e2dac(&lStack_2d0,&uStack_360,0x112f7cc90,&UNK_10dbe41c8);
          func_0x0001034cc0ac(lVar6,uVar10,lVar7,uVar15,lVar11);
          lVar6 = lVar17;
          uVar10 = uVar13;
          lVar7 = lVar18;
          uVar15 = uVar16;
          lVar11 = lVar14;
        }
        else if (((int)lVar6 == (int)lVar17) &&
                (((uVar10 == uVar13 && (lVar7 == lVar18)) ||
                 (uVar2 = uVar10, func_0x000107c605b8(uVar10,lVar7,uVar13,lVar18,0),
                 (uVar2 & 1) != 0)))) {
          FUN_1035e2dac(&lStack_2a0,&uStack_360,0x112f7cc90,&UNK_10dbe41c8);
          FUN_1035e2dac(&lStack_2d0,&uStack_360,0x112f7cc90,&UNK_10dbe41c8);
          uVar2 = uVar15;
          func_0x000100e25fcc(uVar15,lVar11,uVar16,lVar14);
          func_0x0001034cc0ac(lVar17,uVar13,lVar18,uVar16,lVar14);
          if ((uVar2 & 1) != 0) goto LAB_1035e3c24;
        }
        else {
          FUN_1035e2dac(&lStack_2a0,&uStack_360,0x112f7cc90,&UNK_10dbe41c8);
          FUN_1035e2dac(&lStack_2d0,&uStack_360,0x112f7cc90,&UNK_10dbe41c8);
          func_0x0001034cc0ac(lVar17,uVar13,lVar18,uVar16,lVar14);
        }
        func_0x0001034cc0ac(lVar6,uVar10,lVar7,uVar15,lVar11);
      }
    }
  }
  else {
    if ((uVar16 & 0xff) == 2) goto LAB_1035e33b8;
    if ((((uint)uVar16 ^ (uint)uVar15) & 1) == 0) {
      FUN_1035e2dac(&uStack_90,&lStack_2a0,0x112db94f0,&UNK_10d96af00);
      FUN_1035e2dac(&uStack_b0,&lStack_2a0,0x112db94f0,&UNK_10d96af00);
      uVar2 = uVar10;
      func_0x000100e25fcc(uVar10,lVar6,uVar13,lVar7);
      func_0x000101556278(uVar16,uVar13,lVar7);
      if ((uVar2 & 1) != 0) goto LAB_1035e2eec;
    }
    else {
      FUN_1035e2dac(&uStack_90,&lStack_2a0,0x112db94f0,&UNK_10d96af00);
      lVar11 = -0xa0;
LAB_1035e3514:
      puVar3 = (ulong *)(&stack0xfffffffffffffff0 + lVar11);
      plVar4 = &lStack_2a0;
LAB_1035e3518:
      FUN_1035e2dac(puVar3,plVar4,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar16,uVar13,lVar7);
    }
LAB_1035e3540:
    func_0x000101556278(uVar15,uVar10,lVar6);
  }
  uVar1 = 0;
LAB_1035e3548:
  return uVar1 & 1;
}



/* Entry: 1035e3f88; end: 1035e4007;  */

void FUN_1035e3f88(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7cd28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe4348;
  func_0x000107c61520(&UNK_10dbe4348,&UNK_11066afb8);
  puRam0000000112f7cd28 = puVar1;
  return;
}



/* Entry: 1035e4008; end: 1035e401b;  */

void FUN_1035e4008(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035e401c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1035e405c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035e401c; end: 1035e409b;  */

void FUN_1035e401c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7cd50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe4270;
  func_0x000107c61520(&UNK_10dbe4270,&UNK_11066b080);
  puRam0000000112f7cd50 = puVar1;
  return;
}



/* Entry: 1035e409c; end: 1035e409f;  */

void FUN_1035e409c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f7cd60 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f7cd68;
  func_0x00010002969c(0x112f7cd68,&UNK_10dbe41f8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f7cd60 = puVar2;
  return;
}



/* Entry: 1035e40a0; end: 1035e40ef;  */

void FUN_1035e40a0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f7cd60 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f7cd68;
  func_0x00010002969c(0x112f7cd68,&UNK_10dbe41f8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f7cd60 = puVar2;
  return;
}



/* Entry: 1035e40f0; end: 1035e40f3;  */

void FUN_1035e40f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7cd70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe42b0;
  func_0x000107c61520(&UNK_10dbe42b0,&UNK_11066b080);
  puRam0000000112f7cd70 = puVar1;
  return;
}



/* Entry: 1035e40f4; end: 1035e4133;  */

void FUN_1035e40f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7cd70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe42b0;
  func_0x000107c61520(&UNK_10dbe42b0,&UNK_11066b080);
  puRam0000000112f7cd70 = puVar1;
  return;
}



/* Entry: 1035e4134; end: 1035e4157;  */

void FUN_1035e4134(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035e4158();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035e4158; end: 1035e4197;  */

void FUN_1035e4158(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7cd78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe4320;
  func_0x000107c61520(&UNK_10dbe4320,&UNK_11066afb8);
  puRam0000000112f7cd78 = puVar1;
  return;
}



/* Entry: 1035e4198; end: 1035e41af;  */

void FUN_1035e4198(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035e3f88();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1035e1038)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035e41b0; end: 1035e41ef;  */

void FUN_1035e41b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7cd80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe4388;
  func_0x000107c61520(&UNK_10dbe4388,&UNK_11066afb8);
  puRam0000000112f7cd80 = puVar1;
  return;
}



/* Entry: 1035e41f0; end: 1035e4213;  */

void FUN_1035e41f0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035e4214();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035e4214; end: 1035e4253;  */

void FUN_1035e4214(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7cd88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe4408;
  func_0x000107c61520(&UNK_10dbe4408,&UNK_11066b0f8);
  puRam0000000112f7cd88 = puVar1;
  return;
}



/* Entry: 1035e4254; end: 1035e4267;  */

void FUN_1035e4254(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1035e3fc8)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1035e4298();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035e4268; end: 1035e4297;  */

void FUN_1035e4268(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035e4298; end: 1035e42d7;  */

void FUN_1035e4298(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7cd90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe43c0;
  func_0x000107c61520(&DAT_10dbe43c0,&UNK_11066b0f8);
  puRam0000000112f7cd90 = puVar1;
  return;
}



/* Entry: 1035e42d8; end: 1035e42db;  */

void FUN_1035e42d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7cd98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe4470;
  func_0x000107c61520(&UNK_10dbe4470,&UNK_11066b0f8);
  puRam0000000112f7cd98 = puVar1;
  return;
}



/* Entry: 1035e42dc; end: 1035e431b;  */

void FUN_1035e42dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7cd98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe4470;
  func_0x000107c61520(&UNK_10dbe4470,&UNK_11066b0f8);
  puRam0000000112f7cd98 = puVar1;
  return;
}


